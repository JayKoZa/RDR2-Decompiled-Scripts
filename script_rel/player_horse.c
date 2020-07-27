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
#endregion

void __EntryFunction__()
{
	bool bVar0;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(512))
	{
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() != 2)
		{
		}
		func_1();
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (func_2() == -1)
	{
		while (!func_3(64))
		{
			BUILTIN::WAIT(0);
		}
	}
	func_4();
	bVar0 = false;
	while (!bVar0)
	{
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			bVar0 = true;
		}
		else
		{
			if (func_5())
			{
				func_6();
				func_7();
				func_8();
				func_9();
				func_10();
			}
			BUILTIN::WAIT(0);
		}
	}
	func_1();
}

void func_1()
{
	func_11();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2()
{
	return Global_1572887->f_12;
}

bool func_3(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

void func_4()
{
	func_12();
	func_13();
	func_14(1);
	func_15(0);
	func_16();
}

int func_5()
{
	if (!func_3(256))
	{
		return 0;
	}
	if (&Global_1879534)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		if (func_2() == -1)
		{
			return 0;
		}
	}
	if (Global_1572887->f_8)
	{
		return 0;
	}
	if (func_17(68))
	{
		return 0;
	}
	return 1;
}

void func_6()
{
	struct<7> Var0;
	struct<12> Var7;
	struct<12> Var19;

	func_18();
	func_19();
	func_20(&Var0);
	func_21(0, &Var7);
	func_21(1, &Var19);
	func_22(Var7);
	func_22(Var19);
	func_23(Var7);
	func_23(Var19);
	func_24(Var0, Var7, Var19);
	func_25(0, &Var7);
	func_25(1, &Var19);
	func_26(0, &Var7);
	func_26(1, &Var19);
	func_27();
	func_28(Var0);
	func_29(Var0);
	func_30(Var0);
	func_31();
	func_32();
	func_33();
}

void func_7()
{
	int iVar0;

	if (PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	if (Global_16)
	{
		return;
	}
	if (func_34())
	{
		return;
	}
	switch (Global_1900383->f_317)
	{
		case 0:
			func_35(0);
			break;
		case 1:
			func_35(1);
			break;
		case 2:
			func_35(6);
			break;
	}
	iVar0 = Global_1900383->f_317;
	iVar0++;
	if (iVar0 >= 3)
	{
		iVar0 = 0;
	}
	Global_1900383->f_317 = iVar0;
}

void func_8()
{
	int iVar0;
	int iVar1;

	iVar1 = SCRIPTS::GET_NUMBER_OF_EVENTS(0);
	if (iVar1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		func_36(iVar0);
		iVar0++;
	}
}

void func_9()
{
	struct<7> Var0;
	struct<12> Var7;
	struct<12> Var19;
	struct<12> Var31;
	struct<12> Var43;
	int iVar55;

	switch (Global_1900383->f_422)
	{
		case 0:
		case 6:
			func_20(&Var0);
			func_21(0, &Var7);
			func_21(1, &Var19);
			func_21(6, &Var31);
			func_21(5, &Var43);
			func_37(Var0, Var7, 0);
			func_37(Var0, Var19, 1);
			func_37(Var0, Var31, 6);
			func_37(Var0, Var43, 5);
			func_38(Var0);
			func_39(Var0, Var7);
			func_40(Var0, Var7, 0);
			func_40(Var0, Var19, 1);
			func_40(Var0, Var31, 6);
			func_41(0);
			func_41(1);
			func_41(6);
			func_42(Var0, Var7, 0);
			func_42(Var0, Var19, 1);
			func_43(Var7, Var0, 0);
			func_43(Var19, Var0, 1);
			func_44(0);
			func_44(1);
			func_45(Var0, Var7, 0);
			func_45(Var0, Var19, 1);
			func_46(Var0, Var7, 0);
			func_46(Var0, Var19, 1);
			func_47(Var0);
			func_48(Var0);
			func_49();
			func_50();
			func_51(Var0);
			func_52();
			func_53();
			func_54();
			func_55();
			func_56();
			func_57(Var0, Var7, 0);
			func_57(Var0, Var19, 1);
			func_58(Var0, Var7, 0);
			func_58(Var0, Var19, 1);
			func_58(Var0, Var31, 6);
			func_59(Var0, Var7, Var19);
			break;
		case 1:
			func_60();
			break;
		case 2:
			func_61(0);
			func_62(0);
			break;
		case 3:
			func_61(1);
			func_62(1);
			break;
		case 9:
			func_63();
			break;
		case 10:
			func_64(0);
			func_64(1);
			break;
		case 11:
			func_65();
			break;
		case 4:
			func_66(0);
			break;
		case 5:
			func_66(1);
			break;
		case 7:
			func_66(5);
			break;
		case 8:
			func_67();
			break;
	}
	iVar55 = Global_1900383->f_422;
	iVar55++;
	if (iVar55 >= 12)
	{
		iVar55 = 0;
	}
	Global_1900383->f_422 = iVar55;
}

void func_10()
{
	int iVar0;

	if (PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	switch (Global_1900383->f_423)
	{
		case 0:
			func_68();
			break;
		case 1:
			func_69();
			break;
		case 2:
			func_70();
			break;
	}
	iVar0 = Global_1900383->f_423;
	iVar0++;
	if (iVar0 >= 3)
	{
		iVar0 = 0;
	}
	Global_1900383->f_423 = iVar0;
}

void func_11()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (func_71(iVar0))
		{
			if (!func_72(iVar0))
			{
				func_73(iVar0);
			}
		}
		iVar0++;
	}
	func_74();
}

void func_12()
{
	PED::_0xED9582B3DA8F02B4(1);
	func_18();
}

int func_13()
{
	int iVar0;

	iVar0 = func_75();
	STREAMING::REQUEST_MODEL(iVar0, false);
	if (!STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_14(bool bParam0)
{
	if (func_76(128) || func_77(6))
	{
		return 1;
	}
	if (bParam0)
	{
		if (!DATAFILE::_0x603AC35FD4602C76(Global_1913814->f_202) && !func_78(1625871738, &(Global_1913814->f_202), 600, -1, 0, 0))
		{
			func_79(128);
			func_80(6);
			return 0;
		}
	}
	else
	{
		if (!DATAFILE::_0x7907969497EA92F5(Global_1913814->f_202))
		{
			Global_1913814->f_202 = DATAFILE::_0xD97D8D905F1562F2(1625871738);
		}
		if (!DATAFILE::_0x603AC35FD4602C76(Global_1913814->f_202))
		{
			return 0;
		}
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814->f_202, 893391757, "MOUNT_TYPES/MOUNT(type=%x)/WHISTLE:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814->f_202, 1616037958, "MOUNT_TYPES/MOUNT(type=%x)/LOADOUT_SLOT:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814->f_202, 1555915504, "MOUNT_TYPES/MOUNT(type=%x)/REPOSITORY:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814->f_202, -298851427, "MOUNT_TYPES/MOUNT(type=%x)/ITEM_CATEGORY:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814->f_202, 834733495, "MOUNT_TYPES/MOUNT(type=%x)/BONDING:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814->f_202, 808825305, "MOUNT_TYPES/MOUNT(type=%x)/UI_FILTERS:start");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814->f_202, -748933974, "MOUNT_TYPES/MOUNT(type=%x)/UI_FILTERS:end");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814->f_202, -1543589730, "MOUNT_TYPES/MOUNT(type=%x)/ARCHETYPES:start");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814->f_202, -143743697, "MOUNT_TYPES/MOUNT(type=%x)/ARCHETYPES:end");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814->f_202, 116835447, "MOUNT_TYPES/MOUNT(type=%x)/BLIP_STYLE:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814->f_202, -1255580663, "MOUNT_TYPES/MOUNT(type=%x)/BLIP_SPRITE:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814->f_202, 1292413058, "MOUNT_TYPES/MOUNT(type=%x)/BLIP_NAME:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814->f_202, 2112095068, "MOUNT_TYPES/MOUNT(type=%x)/COMPATIBLE_TYPES/MOUNT_TYPE(id=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814->f_202, -1379316512, "MOUNT_TYPES/MOUNT(type=%x)/EQUIPMENT_DATA/EQUIPMENT_SLOT(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814->f_202, -223927384, "MOUNT_TYPES/MOUNT(type=%x)/EQUIPMENT_DATA/EQUIPMENT_SLOT(%i):slot_id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814->f_202, 267140771, "MOUNT_TYPES/MOUNT(type=%x)/EQUIPMENT_DATA/EQUIPMENT_SLOT(%i):metaped_tag");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814->f_202, -675686015, "MOUNT_TYPES/MOUNT(type=%x)/EQUIPMENT_DATA/EQUIPMENT_SLOT(%i):none_item");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814->f_202, -1507362072, "MOUNT_TYPES/MOUNT(type=%x)/EQUIPMENT_DATA/EQUIPMENT_SLOT(slot=%x):metaped_tag");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814->f_202, 1979684523, "MOUNT_TYPES/MOUNT(type=%x)/EQUIPMENT_DATA/EQUIPMENT_SLOT(slot=%x):none_item");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814->f_202, 42812586, "MOUNT_TYPES/MOUNT(type=%x)/EQUIPMENT_DATA/EQUIPMENT_SLOT(slot=%x):id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814->f_202, 1318388873, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814->f_202, -571823039, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814->f_202, 1894757327, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(%i)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814->f_202, -385264207, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/INVENTORY_ITEM:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814->f_202, 38531101, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/DEFAULT_EQUIPMENT:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814->f_202, -509881626, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/STABLING_COST:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814->f_202, -1239479495, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/INSURANCE_COST:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814->f_202, -1224542537, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/REVIVE_COST:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814->f_202, 1192923488, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/MOUNT_CLASS:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814->f_202, 737763634, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/MOUNT_QUALITY:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814->f_202, 735225176, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BASE_HEALTH:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814->f_202, -1306132799, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BASE_STRENGTH:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814->f_202, 1611478627, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BASE_SPEED:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814->f_202, -221622390, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BASE_AGILITY:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814->f_202, 1695792563, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BASE_FITNESS:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814->f_202, 1454482041, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BASE_GRIT:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814->f_202, -1699214685, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BONDING_XP_LEVEL1:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814->f_202, -926718279, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BONDING_XP_LEVEL2:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814->f_202, 1186063008, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BONDING_XP_LEVEL3:id");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1913814->f_202, 1105713420, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BONDING_XP_LEVEL4:id");
	func_79(128);
	func_80(6);
	return 1;
}

void func_15(int iParam0)
{
	if (Global_1900383->f_378 != iParam0)
	{
	}
	Global_1900383->f_378 = iParam0;
}

int func_16()
{
	if (!func_82(-1898635967, func_81(), 1))
	{
		return 0;
	}
	if (func_83())
	{
		if (!func_82(146323340, func_81(), 0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_17(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

void func_18()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 1;
	if (func_84(0) == 1)
	{
	}
	if (func_84(1) == 1)
	{
		iVar0++;
	}
	if (func_84(5) == 1)
	{
		iVar0++;
	}
	if (func_84(6) == 1)
	{
		iVar0++;
	}
	iVar0 = (iVar0 + func_85(0));
	iVar0 = (iVar0 + func_85(1));
	iVar1 = PED::_0x62DE46F061CAA468();
	if (iVar0 > iVar1)
	{
		iVar2 = (iVar0 - iVar1);
		PED::_0xF008E0BA1FE1D644(iVar2);
	}
	else if (iVar0 < iVar1)
	{
		iVar3 = (iVar1 - iVar0);
		PED::_0x7D4E70A67A651C71(iVar3);
	}
}

void func_19()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_86(iVar0);
		iVar0++;
	}
}

void func_20(var uParam0)
{
	*uParam0 = PLAYER::PLAYER_ID();
	if (!PLAYER::IS_PLAYER_DEAD(*uParam0))
	{
		uParam0->f_1 = 1;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		uParam0->f_2 = 1;
		if (PED::IS_PED_INJURED(Global_35))
		{
			uParam0->f_4 = 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			uParam0->f_3 = 1;
		}
		if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			uParam0->f_5 = 1;
			uParam0->f_6 = PED::GET_MOUNT(Global_35);
		}
	}
}

void func_21(int iParam0, int iParam1)
{
	float fVar0;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	*iParam1 = 0;
	iParam1->f_1 = 0;
	iParam1->f_2 = 0;
	iParam1->f_3 = 0;
	iParam1->f_4 = 0;
	iParam1->f_5 = { 0f, 0f, 0f };
	iParam1->f_8 = 0f;
	iParam1->f_10 = 0;
	iParam1->f_9 = 0;
	iParam1->f_10 = 0;
	iParam1->f_11 = 0;
	if (func_71(iParam0))
	{
		iParam1->f_1 = 1;
		*iParam1 = func_88(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
		{
			iParam1->f_2 = 1;
		}
		if (PED::IS_PED_INJURED(*iParam1))
		{
			iParam1->f_3 = 1;
		}
		if (TASK::IS_PED_IN_WRITHE(*iParam1))
		{
			iParam1->f_4 = 1;
		}
		iParam1->f_5 = { ENTITY::GET_ENTITY_COORDS(*iParam1, true, false) };
		iParam1->f_8 = ENTITY::GET_ENTITY_HEADING(*iParam1);
		iParam1->f_9 = PED::_GET_RIDER_OF_MOUNT(*iParam1, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_9))
		{
			if (iParam1->f_9 == Global_35)
			{
				iParam1->f_10 = 1;
			}
		}
		fVar0 = func_89(iParam0);
		if (func_90(iParam1->f_5, Global_36) <= fVar0)
		{
			iParam1->f_11 = 1;
		}
	}
}

void func_22(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)
{
	if (Param0.f_1)
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(Param0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Param0, true, true);
		}
	}
}

void func_23(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)
{
	if (vParam0.z)
	{
		if (func_76(64))
		{
			PED::SET_PED_RESET_FLAG(vParam0.x, 6, true);
		}
	}
}

void func_24(struct<7> Param0, struct<12> Param7, struct<12> Param19)
{
	if (func_91())
	{
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_WHISTLE"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_WHISTLE_HORSEBACK"), true);
		func_92(Param0, Param7, Param19);
	}
	else
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_WHISTLE"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_WHISTLE_HORSEBACK"), false);
		func_15(1);
	}
	func_93();
}

void func_25(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;

	if (!uParam1->f_1)
	{
		return;
	}
	if (!uParam1->f_2)
	{
		return;
	}
	bVar0 = false;
	if (func_94() && !func_95(4))
	{
		bVar0 = true;
	}
	iVar1 = 388;
	bVar2 = PED::GET_PED_CONFIG_FLAG(*uParam1, iVar1, false);
	if (bVar0 != bVar2)
	{
		PED::SET_PED_CONFIG_FLAG(*uParam1, iVar1, bVar0);
	}
	if (func_96())
	{
		return;
	}
	bVar3 = func_97(iParam0);
	if (uParam1->f_4 != bVar3)
	{
		func_98(iParam0, uParam1->f_4);
		func_99(iParam0);
	}
	if (!uParam1->f_4)
	{
		return;
	}
	if (func_100(iParam0) == 0)
	{
		func_101(iParam0, MISC::GET_GAME_TIMER());
	}
	fVar4 = PED::_GET_PED_REMAINING_REVIVAL_TIME(*uParam1, 0);
	func_102(iParam0, fVar4);
	if (Global_1914319->f_18969)
	{
		if (!PED::_0x12EB4E31F092C9B3(*uParam1))
		{
			PED::_0x925A160133003AC6(*uParam1, 1);
		}
	}
	else if (PED::_0x12EB4E31F092C9B3(*uParam1))
	{
		PED::_0x925A160133003AC6(*uParam1, 0);
	}
	if (func_103())
	{
		ENTITY::_SET_ENTITY_HEALTH(*uParam1, 0, 0);
	}
}

void func_26(int iParam0, var uParam1)
{
	if (!uParam1->f_1)
	{
		return;
	}
	if (func_96())
	{
		return;
	}
	if (!uParam1->f_2)
	{
		func_104(iParam0);
		return;
	}
}

void func_27()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_105(iVar0);
		iVar0++;
	}
}

void func_28(struct<5> Param0, var uParam5, var uParam6)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;

	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	if (!PED::IS_PED_ON_MOUNT(Global_35))
	{
		func_106();
		return;
	}
	iVar0 = PED::GET_MOUNT(Global_35);
	if (!func_107(iVar0))
	{
		return;
	}
	if (!func_108())
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
		fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, func_109(), false);
		func_110(vVar1);
		if (fVar4 > 0.01f)
		{
			fVar5 = func_111();
			fVar5 = (fVar5 + fVar4);
			func_112(fVar5);
		}
		if (func_111() >= 40f)
		{
			func_113(1);
		}
	}
	if (!func_108())
	{
		return;
	}
	func_114(iVar0);
}

void func_29(struct<5> Param0, var uParam5, var uParam6)
{
	int iVar0;
	int iVar1;

	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	if (!func_71(6))
	{
		return;
	}
	if (!PED::IS_PED_ON_MOUNT(Global_35))
	{
		return;
	}
	iVar0 = PED::GET_MOUNT(Global_35);
	iVar1 = func_88(6);
	if (iVar0 != iVar1)
	{
		return;
	}
	if (func_115(6) == 0)
	{
		return;
	}
	func_116(6, 1);
}

void func_30(struct<7> Param0)
{
	int iVar0;
	int iVar1;

	if (!func_117(Param0, &iVar0, 1))
	{
		func_118();
		return;
	}
	iVar1 = MISC::GET_GAME_TIMER();
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1900383->f_414))
	{
		Global_1900383->f_414 = iVar0;
		Global_1900383->f_414.f_1 = iVar1;
	}
	if (Global_1900383->f_414.f_1 + 5000 < iVar1)
	{
		func_119(iVar0);
		func_118();
	}
}

void func_31()
{
	int iVar0;

	if (func_120() > 1)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_EXIT"), false);
		func_121();
	}
	iVar0 = func_120();
	switch (iVar0)
	{
		case 0:
			func_122();
			break;
		case 1:
			func_123();
			break;
		case 2:
			func_124();
			break;
		case 3:
			func_125();
			break;
		case 4:
			func_126();
			break;
		case 5:
			func_127();
			break;
		case 6:
			func_128();
			break;
		case 7:
			func_129();
			break;
	}
	func_130();
}

void func_32()
{
	int iVar0;

	iVar0 = 0;
	if (func_131(0) || func_131(1))
	{
		iVar0 = 1;
	}
	func_132(iVar0);
}

void func_33()
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	var uVar5;
	int iVar6;
	struct<11> Var7;

	if (!func_133())
	{
		return;
	}
	bVar0 = false;
	if (!func_131(1))
	{
		bVar0 = true;
	}
	bVar1 = func_94();
	if (bVar1 && func_134() == 8)
	{
		bVar0 = true;
	}
	if ((bVar1 && func_135(((*Global_1835011)[37 /*74*/])->f_1, 1)) && !func_135(((*Global_1835011)[43 /*74*/])->f_1, 1))
	{
		bVar0 = true;
	}
	if ((bVar1 && func_135(((*Global_1835011)[43 /*74*/])->f_1, 1)) && !func_135(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		bVar0 = true;
	}
	func_136(1, &vVar2, &uVar5);
	if (func_137(vVar2))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_138();
		return;
	}
	Var7.f_10 = 7;
	Var7.f_10 = 1;
	Var7 = 1;
	Var7.f_6 = { vVar2 };
	Var7.f_9 = uVar5;
	func_139(&iVar6, &Var7);
	switch (iVar6)
	{
		case 0:
			break;
		case 1:
			func_138();
			break;
		case 2:
			func_138();
			break;
	}
}

bool func_34()
{
	return &Global_1956582;
}

void func_35(int iParam0)
{
	int iVar0;

	iParam0 = func_87(iParam0);
	if (iParam0 <= -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (iParam0 != 0)
	{
		if (!func_140(43))
		{
			return;
		}
	}
	iVar0 = Global_1900383[iParam0 /*45*/];
	if (PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	if (Global_16)
	{
		return;
	}
	if (func_34())
	{
		return;
	}
	switch (&Global_1900383->f_424[iParam0])
	{
		case 0:
		case 1:
			func_141(iParam0);
			Global_1900383->f_424[iParam0] = 2;
			break;
		case 2:
			func_142(iParam0);
			Global_1900383->f_424[iParam0] = 3;
			break;
		case 3:
			func_143(iParam0);
			Global_1900383->f_424[iParam0] = 0;
			break;
	}
}

void func_36(int iParam0)
{
	switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iParam0))
	{
		case 347157807:
			func_144(iParam0);
			break;
		case joaat("event_shot_fired_whizzed_by"):
			func_145(iParam0);
			break;
		case 402722103:
			func_146(iParam0);
			break;
		case 2145012826:
			func_147(iParam0);
			break;
		case 1417095237:
			func_148(134217728);
			func_149(iParam0);
			break;
		case 1638298852:
			func_150(iParam0);
			break;
		case -1246119244:
			func_151(iParam0);
			break;
		case -1651585854:
			func_152(iParam0);
			break;
		case -462231716:
			func_153(iParam0);
			break;
		case -1985279805:
			func_154(iParam0);
			break;
		case 1379175797:
			func_155(iParam0);
			break;
		case 218595333:
			func_156(iParam0);
			break;
		case 1327216456:
			func_157(iParam0);
			break;
		case 1387172233:
			func_158(iParam0);
			break;
		case 1553659161:
			func_159(iParam0);
			break;
		case 1784289253:
			func_160(iParam0);
			break;
		case 1655597605:
			func_161(iParam0);
			break;
		case 1208357138:
			break;
		case 1082572570:
			func_162(iParam0);
			break;
		case -687266558:
			func_163(iParam0);
			func_164(iParam0);
			break;
	}
}

void func_37(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<9> Param7, var uParam16, var uParam17, var uParam18, int iParam19)
{
	if (!Param0.f_3)
	{
		return;
	}
	if (!Param7.f_1)
	{
		return;
	}
	if (func_96())
	{
		return;
	}
	if (func_165(iParam19))
	{
		return;
	}
	func_166(iParam19, Param7.f_5, Param7.f_8);
}

void func_38(struct<4> Param0, var uParam4, var uParam5, var uParam6)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;

	if (func_76(4096))
	{
		return;
	}
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = func_167(0);
	switch (iVar1)
	{
		case 1:
		case 2:
		case 6:
		case 8:
		case 11:
			bVar0 = true;
			break;
	}
	bVar2 = false;
	if (!func_140(42))
	{
		bVar2 = true;
	}
	bVar3 = false;
	if (bVar0 || bVar2)
	{
		bVar3 = true;
	}
	iVar4 = 367;
	if (PED::GET_PED_CONFIG_FLAG(Global_35, iVar4, true) != bVar3)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, iVar4, bVar3);
	}
	bVar5 = false;
	if (bVar0 && !bVar2)
	{
		bVar5 = true;
	}
	iVar4 = 487;
	if (PED::GET_PED_CONFIG_FLAG(Global_35, iVar4, true) != bVar5)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, iVar4, bVar5);
	}
}

void func_39(struct<5> Param0, var uParam5, var uParam6, struct<5> Param7, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18)
{
	int iVar0;

	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	if (!Param7.f_1)
	{
		return;
	}
	if (!Param7.f_2)
	{
		return;
	}
	if (Param7.f_3)
	{
		return;
	}
	if (Param7.f_4)
	{
		return;
	}
	if (func_168(Param7, 2043986356))
	{
		if (func_169(Param7))
		{
			iVar0 = func_170();
			if (!func_171(iVar0))
			{
				TASK::TASK_STAND_STILL(Param7, -1);
			}
		}
	}
}

void func_40(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<5> Param7, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	bool bVar0;
	int iVar1;

	if (!Param0.f_3)
	{
		return;
	}
	if (!Param7.f_1)
	{
		return;
	}
	if (!Param7.f_2)
	{
		return;
	}
	if (Param7.f_3)
	{
		return;
	}
	if (Param7.f_4)
	{
		return;
	}
	if (iParam19 == -1)
	{
		return;
	}
	if (iParam19 >= 7)
	{
		return;
	}
	if (func_72(iParam19))
	{
		return;
	}
	bVar0 = func_172(iParam19);
	iVar1 = 48;
	if (bVar0)
	{
		if (!FLOCK::GET_ANIMAL_TUNING_BOOL_PARAM(Param7, iVar1))
		{
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Param7, iVar1, true);
		}
	}
	else if (FLOCK::GET_ANIMAL_TUNING_BOOL_PARAM(Param7, iVar1))
	{
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Param7, iVar1, false);
	}
}

void func_41(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	vector3 vVar7;

	if (func_173(iParam0, 256))
	{
		return;
	}
	if (!func_71(iParam0))
	{
		return;
	}
	iVar0 = func_88(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (!PED::_IS_MOUNT_SEAT_FREE(iVar0, -1))
	{
		return;
	}
	if (func_174(iVar0, 713668775))
	{
		return;
	}
	if ((func_174(iVar0, -76381094) || func_174(iVar0, -1098463898)) || func_174(iVar0, 993674639))
	{
		return;
	}
	iVar1 = func_175(0);
	iVar2 = func_175(2);
	if (!VOLUME::_DOES_VOLUME_EXIST(iVar1))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(iVar0, iVar1, false, 0))
	{
		return;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iVar2))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(iVar0, iVar2, false, 0))
	{
		return;
	}
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	iVar6 = func_176(vVar3, iVar2, iVar1);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar6))
	{
		vVar7 = { TASK::_GET_SCENARIO_POINT_COORDS(iVar6, 1) };
		PED::SET_PED_CONFIG_FLAG(iVar0, 355, true);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar0, vVar7, 1f, 20000, 0.25f, false, 40000f);
	}
}

void func_42(struct<2> Param0, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<11> Param7, var uParam18, int iParam19)
{
	if (!Param0.f_1)
	{
		return;
	}
	if (!Param7.f_10)
	{
		return;
	}
	if (func_177(iParam19) == -1)
	{
		return;
	}
	func_178(iParam19, -1);
}

void func_43(struct<12> Param0, struct<2> Param12, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	if (func_179())
	{
		return;
	}
	iParam19 = func_87(iParam19);
	if (iParam19 == -1)
	{
		return;
	}
	if (iParam19 >= 7)
	{
		return;
	}
	if (!Param12.f_1)
	{
		return;
	}
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_11)
	{
		return;
	}
	if (func_177(iParam19) == 1)
	{
		return;
	}
	if (!PLAYER::IS_PLAYER_RIDING_TRAIN(Param12) && !Global_1430231->f_4)
	{
		return;
	}
	if (func_174(Param0, 2043986356))
	{
		return;
	}
	func_180(Param0, Global_35);
}

void func_44(int iParam0)
{
	int iVar0;
	int iVar1;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_72(iParam0))
	{
		return;
	}
	iVar0 = func_181(iParam0);
	if (SCRIPTS::_DOES_THREAD_EXIST(iVar0))
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
		{
			return;
		}
	}
	if (func_71(iParam0))
	{
		iVar1 = func_88(iParam0);
		func_182(iVar1, 1);
	}
	func_183(iParam0);
}

void func_45(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<5> Param7, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!Param0.f_3)
	{
		return;
	}
	if (!Param7.f_1)
	{
		return;
	}
	if (!Param7.f_2)
	{
		return;
	}
	if (Param7.f_3)
	{
		return;
	}
	if (Param7.f_4)
	{
		return;
	}
	iParam19 = func_87(iParam19);
	if (iParam19 == -1)
	{
		return;
	}
	if (iParam19 >= 7)
	{
		return;
	}
	iVar0 = PED::_GET_RIDER_OF_MOUNT(Param7, 0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_184(iParam19);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		func_184(iParam19);
		return;
	}
	if (func_76(512))
	{
		return;
	}
	if (iVar0 == Global_35)
	{
		return;
	}
	iVar1 = func_185(iParam19);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0);
		if ((iVar2 != -1538724068 && iVar2 != 1391706777) && iVar2 != 1030835986)
		{
			func_186(iParam19, iVar0);
		}
	}
	iVar1 = func_185(iParam19);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if (func_187(Param7, Global_35, 1, 1) > func_89(iParam19))
	{
		func_184(iParam19);
		func_188(iParam19, 2);
	}
}

void func_46(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<5> Param7, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	float fVar0;
	bool bVar1;
	int iVar2;

	if (!Param0.f_3)
	{
		return;
	}
	if (!Param7.f_1)
	{
		return;
	}
	if (!Param7.f_2)
	{
		return;
	}
	if (Param7.f_3)
	{
		return;
	}
	if (Param7.f_4)
	{
		return;
	}
	if (iParam19 == -1)
	{
		return;
	}
	if (iParam19 >= 7)
	{
		return;
	}
	if (!func_189(iParam19))
	{
		return;
	}
	fVar0 = func_190(Param7);
	bVar1 = false;
	if (fVar0 > 0f)
	{
		bVar1 = true;
	}
	iVar2 = MISC::GET_GAME_TIMER();
	if (!bVar1 || func_191(iParam19) + 30000 < iVar2)
	{
		func_192(iParam19, 0);
		func_193(iParam19, -1);
		if (func_194(16))
		{
			func_195(16);
		}
		if (func_196(16))
		{
			func_197(16);
		}
	}
}

void func_47(struct<5> Param0, var uParam5, var uParam6)
{
	int iVar0;
	vector3 vVar1;
	int iVar13;

	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	iVar0 = func_198(5);
	if (iVar0 == 0)
	{
		return;
	}
	func_21(5, &vVar1);
	if (iVar0 == 2)
	{
		if (vVar1.y && !vVar1.z)
		{
			func_184(5);
			func_199(5, 1);
		}
		if (vVar1.z)
		{
			if (func_187(vVar1.x, Global_35, 1, 1) > func_89(5) && !ENTITY::IS_ENTITY_ON_SCREEN(vVar1.x))
			{
				iVar13 = PED::_GET_RIDER_OF_MOUNT(vVar1.x, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar13))
				{
					if (ENTITY::IS_ENTITY_DEAD(iVar13) || PED::IS_PED_INJURED(iVar13))
					{
					}
					if (!ENTITY::_0x88AD6CC10D8D35B2(iVar13))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar13, true, true);
						PED::DELETE_PED(&iVar13);
					}
				}
				func_73(5);
				func_200(5, 0);
			}
		}
		if (!vVar1.y && func_84(5) == 1)
		{
			func_200(5, 0);
		}
	}
	if (iVar0 == 0)
	{
		return;
	}
	if (!func_140(42))
	{
		return;
	}
	if (func_84(0) == 1 && func_201() == 0)
	{
		func_202(5, 0);
		func_203(5);
	}
}

void func_48(struct<5> Param0, var uParam5, var uParam6)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	if (func_140(42))
	{
		return;
	}
	bVar0 = false;
	if ((func_84(0) == 0 && func_84(5) == 1) && func_198(5) == 1)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		return;
	}
	iVar1 = func_167(0);
	bVar2 = false;
	if (iVar1 == 1 || iVar1 == 8)
	{
		bVar2 = true;
	}
	if (!bVar2)
	{
		if (func_94() && func_95(4))
		{
			if (!func_140(42))
			{
				func_204(42);
				func_204(30);
			}
		}
		if (!func_205(55))
		{
			func_206(1);
		}
	}
}

void func_49()
{
	int iVar0;
	int iVar1;

	iVar0 = func_207(0);
	iVar1 = func_207(1);
	if (Global_1900383->f_416 != 0)
	{
		if (Global_1900383->f_416 != iVar0)
		{
			if (!func_208(Global_1900383->f_416))
			{
				PED::SET_PED_MODEL_IS_SUPPRESSED(Global_1900383->f_416, false);
			}
			Global_1900383->f_416 = 0;
		}
	}
	if (Global_1900383->f_416.f_1 != 0)
	{
		if (Global_1900383->f_416.f_1 != iVar1)
		{
			if (!func_208(Global_1900383->f_416.f_1))
			{
				PED::SET_PED_MODEL_IS_SUPPRESSED(Global_1900383->f_416.f_1, false);
			}
			Global_1900383->f_416.f_1 = 0;
		}
	}
	if (iVar0 != 0)
	{
		if (!PED::_0xAA9F048DCF69B6DC(iVar0))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(iVar0, true);
			Global_1900383->f_416 = iVar0;
		}
	}
	if (iVar1 != 0)
	{
		if (!PED::_0xAA9F048DCF69B6DC(iVar1))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(iVar1, true);
			Global_1900383->f_416.f_1 = iVar1;
		}
	}
}

void func_50()
{
	int iVar0;

	func_209(Global_1900383->f_436);
	iVar0 = Global_1900383->f_436;
	iVar0++;
	if (iVar0 >= 5)
	{
		iVar0 = 0;
	}
	Global_1900383->f_436 = iVar0;
}

void func_51(struct<5> Param0, var uParam5, var uParam6)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	vector3 vVar7;
	int iVar10;
	int iVar11;
	vector3 vVar12;
	vector3 vVar15;
	bool bVar18;
	vector3 vVar19;

	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	if (func_96())
	{
		return;
	}
	bVar0 = func_210();
	if (bVar0)
	{
		iVar1 = func_211();
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar1))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
		}
	}
	bVar2 = false;
	if (bVar0)
	{
		if (PED::_GET_CARRIER_AS_PED(iVar1) == Global_35)
		{
			iVar3 = ENTITY::_0x61914209C36EFDDB(iVar1);
			switch (iVar3)
			{
				case 4:
				case 5:
				case 6:
				case 8:
				case 9:
					bVar2 = true;
					break;
			}
		}
	}
	bVar4 = func_140(42);
	bVar5 = func_212(0);
	bVar6 = false;
	if (bVar0)
	{
		if (bVar2)
		{
			if (func_213() != 1 && !bVar5)
			{
				func_214(1);
				bVar6 = true;
			}
		}
		else
		{
			if (func_213() == 1 && !bVar5)
			{
				func_214(2);
				bVar6 = true;
			}
			if (ENTITY::IS_ENTITY_STATIC(iVar1))
			{
				ENTITY::SET_ENTITY_DYNAMIC(iVar1, true);
			}
		}
		vVar7 = { ENTITY::GET_ENTITY_COORDS(iVar1, true, false) };
		func_215(vVar7);
	}
	else
	{
		if (func_213() == 0)
		{
			iVar10 = func_201();
			if (func_71(iVar10))
			{
				iVar11 = func_88(iVar10);
				vVar12 = { ENTITY::GET_ENTITY_COORDS(iVar11, false, false) };
				func_215(vVar12);
			}
			if (iVar10 == 5)
			{
				if (!func_71(5))
				{
					if (bVar4)
					{
						vVar15 = { func_216() };
						func_217(-1);
						func_214(2);
						bVar6 = true;
					}
				}
			}
		}
		bVar18 = false;
		if (func_213() == 2)
		{
			bVar18 = true;
		}
		if (func_213() == 1)
		{
			bVar18 = true;
		}
		if (bVar18)
		{
			vVar19 = { func_216() };
			if (func_137(vVar19))
			{
				func_214(3);
				func_217(-1);
				func_215(0f, 0f, 0f);
				func_218(-15);
			}
			else
			{
				func_219(vVar19, 0f, 1);
				func_214(2);
				func_217(-1);
				if (func_220() == -15)
				{
					func_218(func_221());
				}
			}
			bVar6 = true;
		}
	}
	if (bVar6)
	{
		func_67();
	}
}

void func_52()
{
	vector3 vVar0;
	struct<4> Var12;
	bool bVar19;

	if (!func_71(6))
	{
		return;
	}
	func_21(6, &vVar0);
	if (!vVar0.z)
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&vVar0);
		func_203(6);
		return;
	}
	func_20(&Var12);
	bVar19 = false;
	if (!Var12.f_3)
	{
		bVar19 = true;
	}
	if (func_187(vVar0.x, Global_35, 1, 1) > 100f)
	{
		bVar19 = true;
	}
	if (bVar19)
	{
		func_202(6, 0);
		func_203(6);
	}
}

void func_53()
{
	struct<11> Var0;
	int iVar12;
	int iVar13;
	int iVar14;

	if (!func_71(1))
	{
		func_222();
		return;
	}
	func_21(1, &Var0);
	if (!Var0.f_2)
	{
		func_222();
		return;
	}
	if (func_223(1))
	{
		func_222();
		return;
	}
	if (func_115(1) >= 1)
	{
		func_222();
		return;
	}
	if (!func_224(1))
	{
		func_222();
		return;
	}
	if (Var0.f_10)
	{
		func_222();
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Var0.f_9))
	{
		func_222();
		return;
	}
	iVar12 = MISC::GET_GAME_TIMER();
	if (!func_225())
	{
		iVar13 = func_226();
		if (iVar13 == 0)
		{
			func_227(iVar12);
		}
		else if (iVar13 + 5000 < iVar12)
		{
			func_228(1);
		}
	}
	if (!func_225())
	{
		return;
	}
	if (!func_168(Var0, 518218985))
	{
		TASK::TASK_SMART_FLEE_PED(Var0, Global_35, 500f, -1, 0, 1f, 0);
		PED::SET_PED_KEEP_TASK(Var0, true);
	}
	if (func_229(Var0, -1))
	{
		return;
	}
	iVar14 = func_230();
	if (iVar14 == 0)
	{
		func_231(iVar12);
	}
	else if (iVar14 + 15000 < iVar12)
	{
		func_202(1, 1);
		func_222();
	}
}

void func_54()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	bVar1 = false;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		bVar1 = true;
		iVar0 = PED::GET_MOUNT(Global_35);
	}
	iVar5 = 0;
	while (iVar5 < 7)
	{
		if ((Global_40.f_1095.f_1[iVar5 /*436*/])->f_9 == 0)
		{
			if ((Global_40.f_1095.f_1[iVar5 /*436*/])->f_431 > -1)
			{
				(Global_40.f_1095.f_1[iVar5 /*436*/])->f_431 = -1;
			}
		}
		else
		{
			bVar3 = false;
			bVar4 = false;
			iVar2 = Global_1900383[iVar5 /*45*/];
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				bVar3 = true;
				if (bVar1)
				{
					if (iVar0 == iVar2)
					{
						bVar4 = true;
					}
				}
			}
			if (bVar4)
			{
				if ((Global_40.f_1095.f_1[iVar5 /*436*/])->f_431 > -1)
				{
					(Global_40.f_1095.f_1[iVar5 /*436*/])->f_431 = -1;
				}
			}
			else
			{
				iVar6 = CLOCK::_GET_SECONDS_SINCE_BASE_YEAR();
				if (bVar3)
				{
					iVar7 = PED::_0xE8D1CCB9375C101B(iVar2, PLAYER::PLAYER_ID());
					if (iVar7 == -1 || iVar7 == 0)
					{
						iVar7 = iVar6;
						PED::_0xA691C10054275290(iVar2, PLAYER::PLAYER_ID(), iVar7);
					}
					if ((Global_40.f_1095.f_1[iVar5 /*436*/])->f_431 != iVar7)
					{
						(Global_40.f_1095.f_1[iVar5 /*436*/])->f_431 = iVar7;
					}
				}
				else if ((Global_40.f_1095.f_1[iVar5 /*436*/])->f_431 == -1)
				{
					(Global_40.f_1095.f_1[iVar5 /*436*/])->f_431 = iVar6;
				}
			}
		}
		iVar5++;
	}
}

void func_55()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = 0;
	if (func_232())
	{
		iVar1 = 1;
	}
	if (func_71(0))
	{
		iVar2 = func_88(0);
		PLAYER::_0xA3DB37EDF9A74635(iVar0, iVar2, 31, 2, iVar1);
		PLAYER::_0xA3DB37EDF9A74635(iVar0, iVar2, 32, 2, iVar1);
		PLAYER::_0xA3DB37EDF9A74635(iVar0, iVar2, 33, 2, iVar1);
	}
	if (func_71(1))
	{
		iVar3 = func_88(1);
		PLAYER::_0xA3DB37EDF9A74635(iVar0, iVar3, 31, 2, iVar1);
		PLAYER::_0xA3DB37EDF9A74635(iVar0, iVar3, 32, 2, iVar1);
		PLAYER::_0xA3DB37EDF9A74635(iVar0, iVar3, 33, 2, iVar1);
	}
}

void func_56()
{
	if (func_140(33))
	{
		if (!func_233())
		{
			func_234(1);
		}
	}
	else if (func_233())
	{
		func_234(0);
	}
	if (func_140(34))
	{
		if (!func_235())
		{
			func_236(1);
		}
	}
	else if (func_235())
	{
		func_236(0);
	}
	if (func_140(35))
	{
		if (!func_237())
		{
			func_238(1);
		}
	}
	else if (func_237())
	{
		func_238(0);
	}
}

void func_57(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<5> Param7, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	float fVar0;
	int iVar1;

	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (!Param7.f_1)
	{
		return;
	}
	if (!Param7.f_2)
	{
		return;
	}
	if (!Param7.f_4)
	{
		return;
	}
	iParam19 = func_87(iParam19);
	if (iParam19 == -1)
	{
		return;
	}
	if (iParam19 >= 7)
	{
		return;
	}
	if (func_239(iParam19) >= 40)
	{
		return;
	}
	fVar0 = func_187(Param7, Global_35, 1, 1);
	if (fVar0 > 40f)
	{
		func_99(iParam19);
		return;
	}
	if (!ENTITY::IS_ENTITY_ON_SCREEN(Param7))
	{
		func_99(iParam19);
		return;
	}
	iVar1 = MISC::GET_GAME_TIMER();
	if (!func_240(iParam19))
	{
		func_241(iParam19, iVar1);
		return;
	}
	if (func_242(iParam19) + 15000 < iVar1)
	{
		func_243(0, 446961221 /* GXTEntry: "Watched Animal Bleedout" */, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
		func_244(iParam19);
		func_241(iParam19, iVar1);
	}
}

void func_58(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<6> Param7, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;

	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (!Param7.f_1)
	{
		return;
	}
	if (!Param7.f_2)
	{
		return;
	}
	if (Param7.f_4)
	{
		return;
	}
	iParam19 = func_87(iParam19);
	if (iParam19 == -1)
	{
		return;
	}
	if (iParam19 >= 7)
	{
		return;
	}
	vVar0 = { func_245(iParam19) };
	if (func_137(vVar0))
	{
		return;
	}
	vVar3 = { func_246(iParam19) };
	fVar6 = func_247(iParam19);
	fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param7.f_5, vVar3, true);
	if (fVar7 > 0.01f)
	{
		fVar6 = (fVar6 + fVar7);
		func_248(iParam19, Param7.f_5);
		func_249(iParam19, fVar6);
	}
}

void func_59(struct<7> Param0, struct<12> Param7, struct<12> Param19)
{
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	func_250(Param0);
	func_251(Param0);
	func_252(Param0, Param7);
	func_253();
	func_254(Param0, Param7, Param19);
	func_255(Param0);
	func_256(Param0, Param7, Param19);
	func_257(Param0, Param7, Param19);
	func_258();
	func_259(Param0);
	func_260();
	func_261(Param0);
	func_262(Param0);
	func_263(Param0, Param7);
	func_264(Param0, Param7, Param19);
	func_265(Param0);
	func_266();
}

void func_60()
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	if (func_267())
	{
		return;
	}
	iVar0 = func_268(0);
	if (func_269(iVar0))
	{
		if (func_270(iVar0) == 1)
		{
			return;
		}
	}
	iVar1 = func_271();
	if (WEAPON::_0x5A695BD328586B44(Global_35, 0) != iVar1)
	{
		WEAPON::_0xB832F1A686B9B810(Global_35, iVar1, 0);
	}
}

void func_61(int iParam0)
{
	int iVar0;
	struct<94> Var1;
	struct<11> Var95;
	int iVar189;
	struct<4> Var190;
	int iVar194;
	int iVar195;
	int iVar196;
	int iVar197;
	int iVar198;
	bool bVar199;
	bool bVar200;
	var uVar201;
	int iVar202;
	bool bVar203;
	int iVar204;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (func_96())
	{
		return;
	}
	if (!func_71(iParam0))
	{
		return;
	}
	iVar0 = func_88(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	if (func_165(iParam0))
	{
		return;
	}
	Var1.f_10 = 10;
	Var95.f_10 = 10;
	func_272(&Var1);
	iVar198 = 0;
	while (iVar198 < 3)
	{
		iVar189 = func_273(iVar198);
		iVar196 = iVar198;
		func_272(&Var1);
		bVar199 = false;
		if (!PED::_0x608BC6A6AACD5036(&Var190, iVar0, iVar189, 0))
		{
			bVar199 = true;
		}
		if (!bVar199)
		{
			iVar194 = Var190.f_3;
			if (!ENTITY::DOES_ENTITY_EXIST(iVar194))
			{
				bVar199 = true;
			}
		}
		if (!bVar199)
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar194) && !ENTITY::_0x88AD6CC10D8D35B2(iVar194))
			{
				bVar199 = true;
			}
		}
		if (!bVar199)
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar194))
			{
				iVar195 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar194);
				if (PED::IS_PED_HUMAN(iVar195))
				{
					bVar199 = true;
				}
			}
		}
		if (bVar199)
		{
			func_274(&Var95, (Global_40.f_1095.f_1[iParam0 /*436*/])->f_15[iVar196 /*94*/]);
		}
		else
		{
			Var1 = ENTITY::GET_ENTITY_MODEL(iVar194);
			Var1.f_1 = ENTITY::_0x31FEF6A20F00B963(iVar194);
			Var1.f_2 = ENTITY::_0xD21C7418C590BB40(iVar194);
			Var1.f_3 = ENTITY::_GET_ENTITY_CARRY_CONFIG(iVar194);
			Var1.f_93 = ENTITY::_0xB16C780C51E51E2B(iVar194);
			if (STREAMING::IS_MODEL_A_PED(Var1))
			{
				func_275(iParam0, iVar194);
				iVar195 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar194);
				func_276(iVar195, &(Var1.f_5), &(Var1.f_6), &(Var1.f_7), &(Var1.f_4));
				bVar200 = func_277(&(Var1.f_1), iVar195, Var1.f_7, Var1.f_5);
				if (!bVar200)
				{
				}
				uVar201 = PED::_0x30569F348D126A5A(iVar195);
				Var1.f_8 = uVar201;
				Var1.f_9 = PED::_GET_NUM_COMPONENTS_IN_PED(iVar195);
				if (Var1.f_9 > 10)
				{
					Var1.f_9 = 10;
				}
				iVar197 = 0;
				while (iVar197 < Var1.f_9)
				{
					if (iVar197 >= 10)
					{
					}
					else
					{
						if (!PED::_0xA9C28516A6DC9D56(iVar195, iVar197, Var1.f_10[iVar197 /*8*/], &((Var1.f_10[iVar197 /*8*/])->f_1), &((Var1.f_10[iVar197 /*8*/])->f_2), &((Var1.f_10[iVar197 /*8*/])->f_3)))
						{
						}
						if (!PED::_0xE7998FEC53A33BBE(iVar195, iVar197, &((Var1.f_10[iVar197 /*8*/])->f_4), &((Var1.f_10[iVar197 /*8*/])->f_5), &((Var1.f_10[iVar197 /*8*/])->f_6), &((Var1.f_10[iVar197 /*8*/])->f_7)))
						{
						}
					}
					iVar197++;
				}
				Var1.f_91 = PERSISTENCE::_0x2E545965DF98D476(iVar194);
				Var1.f_92 = 0;
				if (PED::_IS_METAPED_USING_COMPONENT(iVar195, 43391475) || ENTITY::_0x8DE41E9902E85756(iVar194))
				{
					Var1.f_92 = 1;
				}
				if (MISC::_0x5170DDA6D63ACAAA(iVar195))
				{
					iVar202 = 1;
					func_278(Var1.f_1, iVar202);
					bVar203 = true;
					if (!func_279(Global_35, iVar0, 0))
					{
						bVar203 = false;
					}
					if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1) || ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar0, -1))
					{
						bVar203 = false;
					}
					if (bVar203)
					{
						TASK::_0x36D188AECB26094B(iVar194);
					}
					else
					{
						TASK::_0x36D188AECB26094B(iVar194);
					}
					if (func_280())
					{
						if (func_282(func_281(iVar195), 72))
						{
							func_283(98, 1);
						}
					}
					func_274(&Var95, (Global_40.f_1095.f_1[iParam0 /*436*/])->f_15[iVar196 /*94*/]);
				}
				else
				{
					if (Var1.f_91 >= 12)
					{
						if (func_280())
						{
							if (func_282(func_281(iVar195), 72))
							{
								func_283(97, 0);
							}
						}
					}
					else if (Var1.f_91 >= 2)
					{
						if (func_280())
						{
							if (func_282(func_281(iVar195), 72))
							{
								func_283(96, 0);
							}
						}
					}
					iVar204 = ((Global_40.f_1095.f_1[iParam0 /*436*/])->f_15[iVar196 /*94*/])->f_1;
					if (func_284(Var1.f_1, 0) && func_284(iVar204, 0))
					{
						if (Var1.f_1 != iVar204)
						{
							if (func_285(iVar0, iVar204, 1, 1, -142743235))
							{
								func_286(iVar0, iVar195);
							}
						}
					}
					func_274(&Var1, (Global_40.f_1095.f_1[iParam0 /*436*/])->f_15[iVar196 /*94*/]);
				}
				iVar198++;
			}
		}
	}

void func_62(int iParam0)
{
	int iVar0;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_71(iParam0))
	{
		return;
	}
	iVar0 = func_88(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
	}
	PED::_0x6F43C351A5D51E2F(iVar0, &((Global_40.f_1095.f_1[iParam0 /*436*/])->f_356));
}

void func_63()
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;

	iVar6 = 0;
	while (iVar6 < 7)
	{
		if (!func_71(iVar6))
		{
		}
		else
		{
			iVar7 = func_88(iVar6);
			if (func_287(iVar6))
			{
				if (!func_288(iVar7))
				{
					iVar8 = func_289(iVar6);
					func_290(iVar7, iVar8);
				}
				else
				{
					iVar9 = func_291(iVar6);
					func_292(iVar9, &uVar0, &uVar1, &uVar2, &iVar3, &uVar4, &uVar5);
					if (iVar3 >= 1)
					{
						func_293(iVar7);
						func_294(iVar6);
					}
					else if (!func_288(iVar7))
					{
					}
					else if (!func_287(iVar6))
					{
						uVar10 = func_295(iVar7);
						func_296(iVar6, 1);
						func_297(iVar6, uVar10);
						func_298(iVar6, func_221());
					}
				}
				iVar6++;
			}
		}
	}

void func_64(int iParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = func_299(iParam0);
	bVar1 = func_300(iParam0);
	if (bVar0)
	{
		if (func_301(iParam0))
		{
			if (bVar1)
			{
				return;
			}
			iVar3 = func_302(iParam0);
			iVar4 = func_221();
			iVar2 = func_303(iVar3, iVar4);
			if (iVar2 < 2)
			{
				return;
			}
			func_304(iParam0, 1);
		}
		else
		{
			iVar4 = func_221();
			func_305(iParam0, iVar4);
			func_304(iParam0, 0);
			func_306(iParam0);
		}
	}
	else
	{
		if (!func_301(iParam0))
		{
			return;
		}
		func_305(iParam0, -15);
		func_307(iParam0);
	}
	if (!func_308(iParam0))
	{
		return;
	}
	if (!func_309(iParam0, 3.5f))
	{
		return;
	}
	func_304(iParam0, 0);
	func_306(iParam0);
}

void func_65()
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	char cVar10[64];

	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!func_71(iVar0))
		{
		}
		else
		{
			iVar1 = func_207(iVar0);
			if (!func_310(iVar1))
			{
			}
			else
			{
				Var2 = { func_311(iVar0) };
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var2))
				{
				}
				else
				{
					StringCopy(&cVar10, func_312(iVar1), 64);
					StringCopy(&Var2, HUD::_GET_LABEL_TEXT_2(&cVar10), 64);
					if (MISC::IS_STRING_NULL_OR_EMPTY(&Var2))
					{
					}
					else
					{
						func_313(iVar0, Var2);
						func_314(iVar0);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_66(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	vector3 vVar12;
	float fVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	int iVar21;
	int iVar22;

	if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar0 = func_88(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	bVar1 = false;
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		bVar1 = true;
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(iVar0))
	{
		return;
	}
	if (func_173(iParam0, 64))
	{
		func_315(iParam0);
		return;
	}
	bVar2 = false;
	if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26) && !MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
	{
		if (!MAP::GET_BLIP_FROM_ENTITY(iVar0) == 0)
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		return;
	}
	bVar3 = func_140(42);
	if (bVar1)
	{
		if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
		{
			MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_26));
		}
		if (iVar0 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) && bVar3)
		{
			if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
			{
				((*Global_1900383)[iParam0 /*45*/])->f_27 = MAP::_BLIP_ADD_FOR_ENTITY(-515518185, iVar0);
				MAP::SET_BLIP_SPRITE(((*Global_1900383)[iParam0 /*45*/])->f_27, -1327110633, true);
				func_316(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
			}
		}
		else if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
		{
			MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
		}
		return;
	}
	else if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
	{
		MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
	}
	bVar4 = false;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (Global_1935630->f_40 == iVar0)
		{
			bVar4 = true;
		}
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26) && bVar4)
	{
		func_315(iParam0);
	}
	if (bVar4)
	{
		return;
	}
	if ((Global_40.f_1095.f_1[iParam0 /*436*/])->f_14 == 2)
	{
		return;
	}
	bVar6 = false;
	if (iParam0 == 0)
	{
		iVar5 = -1925605092;
	}
	else if (iParam0 == 1)
	{
		iVar5 = -1230993421;
		bVar6 = true;
	}
	else
	{
		return;
	}
	if (bVar6)
	{
		bVar7 = false;
		if (func_115(1) < 1)
		{
			bVar7 = true;
		}
		if (bVar7)
		{
			if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
			{
				MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_26));
			}
			return;
		}
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		((*Global_1900383)[iParam0 /*45*/])->f_26 = MAP::_BLIP_ADD_FOR_ENTITY(iVar5, iVar0);
		((*Global_1900383)[iParam0 /*45*/])->f_25 = 0;
		func_317(&(((*Global_1900383)[iParam0 /*45*/])->f_26), bVar6);
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_173(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = TASK::IS_PED_IN_WRITHE(iVar0);
	bVar10 = false;
	iVar11 = func_185(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar11))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar11))
		{
			if (PED::GET_MOUNT(iVar11) == iVar0)
			{
				bVar10 = true;
			}
		}
	}
	vVar12 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	fVar15 = func_90(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_89(iParam0))
	{
		bVar16 = true;
	}
	iVar17 = 0;
	iVar18 = 0;
	if (bVar8)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 3)
		{
			iVar17 = -401963276;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 3;
		}
	}
	else if (bVar9)
	{
		fVar19 = PED::_GET_PED_REMAINING_REVIVAL_TIME(iVar0, 1);
		if (bVar16)
		{
			if (fVar19 < 0.25f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 9)
				{
					iVar17 = 430539302;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 9;
				}
			}
			else if (fVar19 < 0.5f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 10)
				{
					iVar17 = -995247980;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 10;
				}
			}
			else if (fVar19 < 0.75f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 11)
				{
					iVar17 = -25056193;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 11;
				}
			}
			else if (fVar19 <= 1f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 12)
				{
					iVar17 = -264630352;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 12;
				}
			}
		}
		else if (fVar19 < 0.25f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 5)
			{
				iVar17 = 430539302;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 5;
			}
		}
		else if (fVar19 < 0.5f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 6)
			{
				iVar17 = -995247980;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 6;
			}
		}
		else if (fVar19 < 0.75f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 7)
			{
				iVar17 = -25056193;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 7;
			}
		}
		else if (fVar19 <= 1f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 8)
			{
				iVar17 = -264630352;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 8;
			}
		}
	}
	else if (bVar10)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 4)
		{
			iVar17 = -1380599892;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 4;
		}
	}
	else if (bVar16)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 2)
		{
			iVar17 = 1313031610;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 2;
		}
	}
	else if (!bVar16)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 1)
		{
			iVar17 = -1012863186;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 1;
		}
	}
	if (iVar17 != 0)
	{
		func_318(((*Global_1900383)[iParam0 /*45*/])->f_26);
		func_319(((*Global_1900383)[iParam0 /*45*/])->f_26);
		MAP::_BLIP_SET_MODIFIER(((*Global_1900383)[iParam0 /*45*/])->f_26, iVar17);
		if (iVar17 == -401963276)
		{
			MAP::_BLIP_SET_MODIFIER(((*Global_1900383)[iParam0 /*45*/])->f_26, 231194138);
		}
	}
	if (iVar18 != 0)
	{
		MAP::_BLIP_SET_MODIFIER(((*Global_1900383)[iParam0 /*45*/])->f_26, iVar18);
	}
	if ((PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) == iVar0 && bVar3) && !bVar9)
	{
		MAP::_BLIP_SET_MODIFIER(((*Global_1900383)[iParam0 /*45*/])->f_26, 673950256);
	}
	else
	{
		MAP::_SET_BLIP_FLASH_STYLE(((*Global_1900383)[iParam0 /*45*/])->f_26, 673950256);
	}
	if (func_320(iVar0) && !bVar9)
	{
		if (iVar5 == -1925605092)
		{
			iVar20 = 561559387;
		}
		else if (iVar5 == -1230993421)
		{
			iVar20 = -201249929;
		}
		MAP::_BLIP_SET_MODIFIER(((*Global_1900383)[iParam0 /*45*/])->f_26, iVar20);
	}
	else
	{
		MAP::_SET_BLIP_FLASH_STYLE(((*Global_1900383)[iParam0 /*45*/])->f_26, 561559387);
		MAP::_SET_BLIP_FLASH_STYLE(((*Global_1900383)[iParam0 /*45*/])->f_26, -201249929);
	}
	iVar21 = func_115(iParam0);
	iVar22 = 0;
	if (iParam0 == 0)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = -217389439;
				break;
			case 1:
				iVar22 = 13992470;
				break;
			case 2:
				iVar22 = 396341162;
				break;
			case 3:
				iVar22 = 623069873;
				break;
			case 4:
				iVar22 = -637422489;
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = 937553910;
				break;
			case 1:
				iVar22 = 489732756;
				break;
			case 2:
				iVar22 = 195204984;
				break;
			case 3:
				iVar22 = -103418913;
				break;
			case 4:
				iVar22 = -815685893;
				break;
		}
	}
	if (iVar22 == 0)
	{
		MAP::_0x44813684F72B563C(iVar0, ((*Global_1900383)[iParam0 /*45*/])->f_26);
	}
	else
	{
		MAP::_0x97F6F158CC5B5CA2(iVar0, ((*Global_1900383)[iParam0 /*45*/])->f_26);
		MAP::_0x7563CBCA99253D1A(iVar0, iVar22);
	}
}

void func_67()
{
	int iVar0;
	bool bVar1;

	iVar0 = Global_1900383->f_393;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (MAP::DOES_BLIP_EXIST(Global_1900383->f_393.f_1))
		{
			MAP::REMOVE_BLIP(&(Global_1900383->f_393.f_1));
		}
		return;
	}
	if (Global_1935630->f_12)
	{
		return;
	}
	if (PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	bVar1 = func_321(Global_35, iVar0);
	if (bVar1)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1900383->f_393.f_1))
		{
			MAP::REMOVE_BLIP(&(Global_1900383->f_393.f_1));
		}
	}
	else if (func_213() == 3)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1900383->f_393.f_1))
		{
			MAP::REMOVE_BLIP(&(Global_1900383->f_393.f_1));
		}
	}
	else if (!MAP::DOES_BLIP_EXIST(Global_1900383->f_393.f_1))
	{
		Global_1900383->f_393.f_1 = MAP::_BLIP_ADD_FOR_ENTITY(-515518185, iVar0);
		func_316(&(Global_1900383->f_393.f_1));
	}
}

void func_68()
{
	bool bVar0;
	int iVar1;
	int iVar2;

	func_322(Global_1900383->f_432, Global_1900383->f_433);
	bVar0 = false;
	iVar1 = Global_1900383->f_433;
	iVar1++;
	if (iVar1 >= 2)
	{
		iVar1 = 0;
		bVar0 = true;
	}
	Global_1900383->f_433 = iVar1;
	if (bVar0)
	{
		iVar2 = Global_1900383->f_432;
		iVar2++;
		if (iVar2 > 5)
		{
			iVar2 = 0;
		}
		Global_1900383->f_432 = iVar2;
	}
}

void func_69()
{
	bool bVar0;
	int iVar1;
	int iVar2;

	func_323(Global_1900383->f_434, Global_1900383->f_435);
	bVar0 = false;
	iVar1 = Global_1900383->f_435;
	iVar1++;
	if (iVar1 >= 3)
	{
		iVar1 = 0;
		bVar0 = true;
	}
	Global_1900383->f_435 = iVar1;
	if (bVar0)
	{
		iVar2 = Global_1900383->f_434;
		iVar2++;
		if (iVar2 > 5)
		{
			iVar2 = 0;
		}
		Global_1900383->f_434 = iVar2;
	}
}

void func_70()
{
	int iVar0;

	if (PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	if (Global_16)
	{
		return;
	}
	if (func_34())
	{
		return;
	}
	switch (Global_1900383->f_317.f_1)
	{
		case 0:
			func_324(0);
			break;
		case 1:
			func_324(1);
			break;
		case 2:
			func_324(6);
			break;
	}
	iVar0 = Global_1900383->f_317.f_1;
	iVar0++;
	if (iVar0 >= 3)
	{
		iVar0 = 0;
	}
	Global_1900383->f_317.f_1 = iVar0;
}

int func_71(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 <= -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
	{
		return 1;
	}
	return 0;
}

int func_72(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return ((*Global_1900383)[iParam0 /*45*/])->f_2;
}

void func_73(int iParam0)
{
	int iVar0;
	int iVar1;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_71(iParam0))
	{
		return;
	}
	iVar0 = func_88(iParam0);
	func_325(iParam0);
	if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	if (PED::_0xAA9F048DCF69B6DC(iVar1))
	{
		if (!func_208(iVar1))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(iVar1, false);
		}
	}
	PED::DELETE_PED(&iVar0);
	func_326(iParam0, 0);
	func_183(iParam0);
}

void func_74()
{
	if (DATAFILE::_0x603AC35FD4602C76(Global_1913814->f_202))
	{
		DATAFILE::_DATAFILE_UNLOAD(Global_1913814->f_202);
	}
	func_327(128);
	func_328(6);
}

int func_75()
{
	int iVar0;

	iVar0 = -1427204870;
	return iVar0;
}

bool func_76(int iParam0)
{
	return (Global_1900383->f_316 && iParam0) != 0;
}

int func_77(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 108)
	{
		return 0;
	}
	return &(Global_1913814->f_209[iParam0]);
}

int func_78(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
		iVar0++;
		BUILTIN::WAIT(0);
	}
	if (bVar1)
	{
		func_329();
	}
	if (iVar0 >= iParam2)
	{
		iVar0 = 0;
		return 0;
	}
	iVar0 = 0;
	return 1;
}

void func_79(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

void func_80(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 108)
	{
		return;
	}
	Global_1913814->f_209[iParam0] = 1;
}

struct<4> func_81()
{
	struct<4> Var0;

	Var0 = { func_330(0) };
	return func_331(856287005, Var0, -218846335, 0);
}

int func_82(int iParam0, struct<4> Param1, bool bParam5)
{
	int iVar0;
	var uVar1;
	struct<2> Var3;
	struct<4> Var7;
	int iVar11;
	struct<5> Var12;

	if (iParam0 == 0)
	{
		return 0;
	}
	uVar1 = 1;
	iVar11 = ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_COUNT(iParam0, &uVar1);
	Var12 = { Param1 };
	iVar0 = 0;
	while (iVar0 < iVar11)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_INFO(iParam0, &uVar1, iVar0, &Var3))
		{
			if (func_284(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_332(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_333(&Var7);
					if (func_334(Var3, &Var7, &Var12, 1, 752097756, 0))
					{
						if (bParam5)
						{
							func_335(Var7, 1);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

bool func_83()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797);
}

int func_84(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_14;
}

int func_85(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = 0;
	iVar2 = 0;
	while (iVar2 < 3)
	{
		if (iVar2 == -1)
		{
		}
		else if (iVar2 == 3)
		{
		}
		else
		{
			iVar1 = &(Global_40.f_1095.f_1[iParam0 /*436*/])->f_15[iVar2 /*94*/];
			if (iVar1 == 0)
			{
			}
			else if (!STREAMING::IS_MODEL_VALID(iVar1))
			{
			}
			else if (!STREAMING::IS_MODEL_A_PED(iVar1))
			{
			}
			else
			{
				iVar0++;
			}
		}
		iVar2++;
	}
	return iVar0;
}

void func_86(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	var uVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	var uVar67;
	var uVar68;
	bool bVar69;
	int iVar70;
	bool bVar71;
	int iVar72;
	int iVar73;
	struct<2> Var74;
	struct<6> Var76;
	int iVar82;
	int iVar83;

	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_173(iParam0, 1))
	{
		return;
	}
	if (func_336(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	iVar1 = func_88(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		bVar2 = true;
	}
	else
	{
		bVar2 = false;
	}
	if (bVar2)
	{
		if (ENTITY::IS_ENTITY_DEAD(iVar1) || PED::IS_PED_INJURED(iVar1))
		{
			return;
		}
	}
	vVar3 = { func_337(iParam0) };
	uVar6 = func_338(iParam0);
	if (func_137(vVar3))
	{
		return;
	}
	iVar7 = func_207(iParam0);
	STREAMING::REQUEST_COLLISION_FOR_MODEL(iVar7);
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar3);
	iVar8 = MISC::GET_GAME_TIMER();
	if (!bVar2)
	{
		func_339(iParam0);
		if (!func_340())
		{
			return;
		}
		if (!func_341(iParam0))
		{
			return;
		}
		iVar1 = func_342(iVar7, vVar3, uVar6, 0, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			return;
		}
		func_326(iParam0, iVar1);
		func_343(iVar1);
		func_344(iVar1, iParam0);
		func_314(iParam0);
		PED::_SET_PED_OUTFIT_PRESET(iVar1, 0, 0);
		uVar9 = 57;
		func_345(iParam0, &uVar9);
		func_346(iParam0, &uVar9);
		func_347(iParam0);
		func_348(iParam0);
		if (iParam0 == 0)
		{
			PLAYER::_0x8FBF9EDB378CCB8C(iVar0, iVar1);
		}
		else if (iParam0 == 1)
		{
			uVar67 = PLAYER::_0x227B06324234FB09(iVar0, iVar1);
		}
		if (func_97(iParam0))
		{
			uVar68 = func_349(iParam0);
			PED::_0x4DB9D03AC4E1FA84(iVar1, uVar68, uVar68, 0);
			TASK::TASK_ANIMAL_WRITHE(iVar1, 0, 1);
		}
		func_200(iParam0, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar7);
		func_350(iParam0, iVar8);
	}
	bVar69 = false;
	if (!PED::_0xA0BC8FAED8CFEB3C(iVar1))
	{
		bVar69 = true;
	}
	if (ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(iVar1))
	{
		iVar70 = func_351(iParam0) + 5000;
		if (iVar70 < iVar8)
		{
		}
		else
		{
			bVar69 = true;
		}
	}
	if (bVar69)
	{
		return;
	}
	bVar71 = false;
	iVar72 = func_201();
	if (iParam0 == iVar72)
	{
		PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar0, iVar1);
		bVar71 = true;
	}
	if (bVar71)
	{
		PED::SET_PED_CONFIG_FLAG(iVar1, 186, false);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(iVar1, 186, true);
	}
	iVar73 = func_352(iParam0);
	func_353(iVar1, iVar73);
	Var74 = { func_354(iParam0) };
	if (bVar71)
	{
		Var76 = { func_355() };
	}
	else
	{
		func_356(&Var76);
	}
	iVar82 = func_357(iVar1, 2);
	iVar83 = func_358(iVar82);
	func_359(iParam0, iVar83);
	if (!bVar71 && func_360(iParam0))
	{
		func_361(iVar1, 0);
	}
	func_362(iVar1, &Var74, &Var76, iVar83);
	func_363(iParam0);
	func_315(iParam0);
	func_66(iParam0);
	func_364(iParam0);
	func_365(iParam0);
	func_366(iParam0);
}

int func_87(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_88(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/];
}

float func_89(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	var uVar12;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_207(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1f;
	}
	iVar1 = func_115(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_115(iParam0) + 1;
	fVar6 = func_367(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	uVar12 = func_368(fVar3, fVar4, fVar11);
	return uVar12;
}

float func_90(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

int func_91()
{
	if (!func_3(256))
	{
		return 0;
	}
	if (&Global_1879534)
	{
		return 0;
	}
	if (func_369())
	{
		return 0;
	}
	if (func_94() && !func_140(32))
	{
		return 0;
	}
	if (func_76(2) || func_76(4))
	{
		return 0;
	}
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		return 0;
	}
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
	{
		return 0;
	}
	if (PED::_IS_PED_HOGTIED(Global_35))
	{
		return 0;
	}
	if (PED::IS_PED_SWIMMING(Global_35))
	{
		return 0;
	}
	return 1;
}

void func_92(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, vector3 vParam7, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, vector3 vParam19, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	float fVar7;
	int iVar8;

	bVar0 = false;
	if (vParam7.z)
	{
		if (func_115(0) >= 1)
		{
			bVar0 = true;
		}
	}
	bVar1 = false;
	if (vParam19.z)
	{
		if (func_115(1) >= 1)
		{
			bVar1 = true;
		}
	}
	iVar2 = MISC::GET_GAME_TIMER();
	switch (func_370())
	{
		case 0:
			func_15(1);
		case 1:
			func_371(0);
			func_372(-72209530);
			func_373(0, 0);
			func_373(1, 0);
			func_327(1);
			func_15(2);
		case 2:
			if (!func_76(1))
			{
				return;
			}
			func_15(3);
		case 3:
			func_374(iVar2);
			func_327(1);
			func_15(4);
		case 4:
			bVar3 = false;
			bVar4 = true;
			bVar5 = true;
			if (func_134() == 8)
			{
				if (!bVar3)
				{
					if (!func_375())
					{
						func_283(12, 1);
					}
					bVar3 = true;
				}
				bVar4 = false;
				bVar5 = false;
			}
			if (func_95(37) && !func_95(43))
			{
				if (!bVar3)
				{
					if (!func_375())
					{
						func_283(10, 1);
					}
					bVar3 = true;
				}
				bVar4 = false;
				bVar5 = false;
			}
			if (func_95(43) && !func_95(44))
			{
				if (func_84(0) == 1)
				{
					if (!bVar3)
					{
						if (!func_375())
						{
							func_283(10, 1);
						}
						bVar3 = true;
					}
					bVar4 = false;
				}
				if (vParam19.z)
				{
					if (bVar1)
					{
					}
				}
			}
			if (func_376(5))
			{
				if (func_84(0) == 0 && (func_84(1) == 0 || !bVar1))
				{
					if (!bVar3)
					{
						if (!func_375())
						{
							func_377();
						}
						bVar3 = true;
					}
					bVar4 = false;
					bVar5 = false;
				}
			}
			if ((func_84(0) == 0 && (func_84(1) == 0 || !bVar1)) && func_84(5) == 0)
			{
				if (!bVar3)
				{
					if (!func_375())
					{
						func_283(11, 1);
					}
					bVar3 = true;
				}
				bVar4 = false;
				bVar5 = false;
			}
			if (func_84(0) == 1 || (func_84(1) == 1 && bVar1))
			{
				iVar6 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
				if (INTERIOR::IS_VALID_INTERIOR(iVar6))
				{
					if (!bVar3)
					{
						if (func_378(iVar6))
						{
							if (!func_375())
							{
								func_283(14, 1);
							}
						}
						else if (func_379(iVar6))
						{
							if (!func_375())
							{
								func_283(15, 1);
							}
						}
						else if (!func_375())
						{
							func_283(13, 1);
						}
						if (func_71(0))
						{
							fVar7 = func_89(0);
							iVar8 = func_88(0);
							if (!func_380(0) && !func_223(0))
							{
								if (func_187(Global_35, iVar8, 1, 1) <= fVar7)
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar8, Global_35, 0, -1082130432, -1082130432, -1082130432);
								}
							}
						}
						if (func_71(1))
						{
							fVar7 = func_89(1);
							iVar8 = func_88(1);
							if (!func_380(1) && !func_223(1))
							{
								if (func_187(Global_35, iVar8, 1, 1) <= fVar7)
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar8, Global_35, 0, -1082130432, -1082130432, -1082130432);
								}
							}
						}
						bVar3 = true;
					}
					bVar4 = false;
					bVar5 = false;
				}
			}
			if (func_76(16) || !func_140(32))
			{
				if (!bVar3)
				{
					if (!func_375())
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1900383->f_378.f_12)))
						{
							func_381(&(Global_1900383->f_378.f_12), 10000, 0, 0, 0, 1);
						}
					}
					bVar3 = true;
				}
				bVar4 = false;
				bVar5 = false;
			}
			if (vParam7.z)
			{
				if (!bVar0)
				{
					if (!bVar3)
					{
						if (!func_375())
						{
							func_283(7, 1);
						}
						bVar3 = true;
					}
					bVar4 = false;
				}
			}
			if (vParam19.z)
			{
				if (!bVar1)
				{
					if (!vParam7.z)
					{
						if (!bVar3)
						{
							if (!func_375())
							{
								func_283(7, 1);
							}
							bVar3 = true;
						}
					}
					bVar5 = false;
				}
			}
			if (vParam7.z)
			{
				if (func_189(0))
				{
					if (!bVar3)
					{
						if (!func_375())
						{
							func_283(16, 1);
						}
						bVar3 = true;
					}
				}
			}
			if (vParam19.z && bVar1)
			{
				if (func_189(1))
				{
					if (!vParam7.z)
					{
						if (!bVar3)
						{
							if (!func_375())
							{
								func_283(16, 1);
							}
							bVar3 = true;
						}
					}
				}
			}
			PLAYER::_0x9044835BE9D9DBFE(uParam0, (bVar4 || bVar5));
			if (!bVar4)
			{
				if (vParam7.z)
				{
					func_66(0);
					func_382(0);
				}
			}
			if (!bVar5)
			{
				if (vParam19.z)
				{
					func_66(1);
					func_382(1);
				}
			}
			if (!bVar4 && !bVar5)
			{
				func_15(1);
				return;
			}
			func_15(5);
		case 5:
			if (func_95(43) && !func_95(44))
			{
				func_373(0, 6);
			}
			else
			{
				func_383(0);
			}
			func_383(1);
			if (func_384(0) == 6 && func_384(1) == 6)
			{
				func_15(1);
			}
			break;
	}
}

int func_93()
{
	if (func_76(2) || func_76(4))
	{
		func_327(2);
		func_327(4);
		return 1;
	}
	return 0;
}

int func_94()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

bool func_95(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_135(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
	}
	return (UNLOCK::_UNLOCK_IS_UNLOCKED(((*Global_1835011)[iParam0 /*74*/])->f_2) && !UNLOCK::_UNLOCK_IS_VISIBLE(((*Global_1835011)[iParam0 /*74*/])->f_2));
}

bool func_96()
{
	return func_385(&Global_1935630, 4096);
}

int func_97(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_420;
}

void func_98(int iParam0, var uParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_420 = uParam1;
}

void func_99(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_42 = 0;
}

int func_100(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return ((*Global_1900383)[iParam0 /*45*/])->f_41;
}

void func_101(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_41 = iParam1;
}

void func_102(int iParam0, float fParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_420.f_1 = fParam1;
}

bool func_103()
{
	return Global_1392040->f_6;
}

void func_104(int iParam0)
{
	int iVar0;
	bool bVar1;

	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	func_315(iParam0);
	if (func_194(56))
	{
		func_195(56);
	}
	if (func_196(56))
	{
		func_197(56);
	}
	if (func_194(57))
	{
		func_195(57);
	}
	if (func_196(57))
	{
		func_197(57);
	}
	bVar1 = false;
	if (iParam0 == 0)
	{
		bVar1 = true;
	}
	else if ((iParam0 == 1 && func_84(0) == 0) && func_84(5) == 0)
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		func_188(iParam0, 1);
	}
	else
	{
		func_202(iParam0, 0);
	}
}

void func_105(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (!func_336(iParam0))
	{
		return;
	}
	bVar0 = false;
	if (func_71(iParam0))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iVar1 = func_88(iParam0);
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar1))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
		}
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		if (PED::_0xAA9F048DCF69B6DC(iVar2))
		{
			if (!func_208(iVar2))
			{
				PED::SET_PED_MODEL_IS_SUPPRESSED(iVar2, false);
			}
		}
		if (func_173(iParam0, 4))
		{
			func_73(iParam0);
		}
		else if (func_173(iParam0, 8))
		{
			func_315(iParam0);
			func_386(iParam0);
			PED::SET_PED_KEEP_TASK(iVar1, true);
			TASK::TASK_SMART_FLEE_PED(iVar1, Global_35, 500f, -1, 0, 1f, 0);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
		}
		else if (func_173(iParam0, 2))
		{
			func_315(iParam0);
			func_386(iParam0);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
		}
	}
	if (func_173(iParam0, 16))
	{
		func_203(iParam0);
	}
	func_326(iParam0, 0);
	func_183(iParam0);
	func_366(iParam0);
	func_387(iParam0, 2);
	func_387(iParam0, 4);
	func_387(iParam0, 8);
	func_387(iParam0, 16);
}

void func_106()
{
	Global_1900383->f_404 = 0;
	Global_1900383->f_404.f_1 = { 0f, 0f, 0f };
	Global_1900383->f_404.f_4 = 0f;
	Global_1900383->f_404.f_5 = 0;
	Global_1900383->f_404.f_6 = 0;
}

int func_107(int iParam0)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;
	var uVar7;
	int iVar8;

	if (func_76(1024))
	{
		return 0;
	}
	if (!func_140(43))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return 0;
	}
	if (func_388(iParam0))
	{
		return 0;
	}
	if (func_389(iParam0))
	{
		return 0;
	}
	if (func_390(iParam0))
	{
		return 0;
	}
	if (func_391(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (func_392(iVar0))
	{
		return 0;
	}
	if (func_393(iVar0))
	{
		return 0;
	}
	bVar1 = false;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (PED::GET_MOUNT(Global_35) == iParam0)
		{
			bVar1 = true;
		}
		else
		{
			return 0;
		}
	}
	if (bVar1)
	{
		if (iParam0 != func_394())
		{
			vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
			func_106();
			func_395(iParam0);
			func_110(vVar2);
		}
		iVar5 = MISC::GET_GAME_TIMER();
		iVar6 = func_396();
		if (iVar6 == 0)
		{
			func_397(iVar5);
			return 0;
		}
		if (iVar6 + 2000 > iVar5)
		{
			return 0;
		}
	}
	else
	{
		func_397(0);
	}
	if (func_398(iParam0, &uVar7, 100f))
	{
		return 0;
	}
	iVar8 = PLAYER::PLAYER_ID();
	if (func_399(iVar8, 1, 0, 1))
	{
		return 0;
	}
	if (LAW::_0x0BB6DE7D23C60626(iVar8))
	{
	}
	if (LAW::_0x69E181772886F48B(iVar8))
	{
		return 0;
	}
	if (LAW::_0xF0FBFB9AB15F7734(iVar8, 1, 0))
	{
		return 0;
	}
	if (!func_400(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_108()
{
	return Global_1900383->f_404.f_5;
}

Vector3 func_109()
{
	return Global_1900383->f_404.f_1;
}

void func_110(vector3 vParam0)
{
	Global_1900383->f_404.f_1 = { vParam0 };
}

float func_111()
{
	return Global_1900383->f_404.f_4;
}

void func_112(float fParam0)
{
	Global_1900383->f_404.f_4 = fParam0;
}

void func_113(int iParam0)
{
	Global_1900383->f_404.f_5 = iParam0;
}

int func_114(int iParam0)
{
	bool bVar0;

	if (func_76(1024))
	{
		return 0;
	}
	if (!func_140(43))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return 0;
	}
	if (func_388(iParam0))
	{
		if (func_401(iParam0) != 6)
		{
			return 0;
		}
	}
	if (func_402(iParam0) > 0)
	{
		bVar0 = false;
		if (func_388(iParam0))
		{
			if (func_401(iParam0) == 6)
			{
				bVar0 = true;
			}
		}
		if (bVar0)
		{
			func_116(6, 1);
		}
		else
		{
			func_403(iParam0);
		}
		func_106();
		func_404();
		return 1;
	}
	else
	{
		if (!func_107(iParam0))
		{
			return 0;
		}
		func_405(iParam0, 0);
		func_106();
		func_404();
		return 1;
	}
	return 0;
}

int func_115(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_372;
}

void func_116(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	var uVar4;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	func_315(iParam0);
	func_315(iParam0);
	func_406(iParam0, iParam1);
	func_407(iParam0, iParam1);
	func_408(iParam0, iParam1);
	iVar1 = func_88(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_343(iVar1);
		}
		if (iParam0 == 0)
		{
			PLAYER::_0x8FBF9EDB378CCB8C(iVar0, iVar1);
		}
		else if (iParam0 == 1)
		{
			uVar2 = PLAYER::_0x227B06324234FB09(iVar0, iVar1);
		}
		else
		{
			if (PLAYER::_0x46FA0AE18F4C7FA9(iVar0) == iVar1)
			{
				PLAYER::_0x8FBF9EDB378CCB8C(iVar0, 0);
			}
			if (PLAYER::_0xD3F7445CEA2E5035(iVar0) == iVar1)
			{
				PLAYER::_0x227B06324234FB09(iVar0, 0);
			}
		}
	}
	iVar3 = func_88(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_343(iVar3);
		}
		if (iParam1 == 0)
		{
			PLAYER::_0x8FBF9EDB378CCB8C(iVar0, iVar3);
		}
		else if (iParam1 == 1)
		{
			uVar4 = PLAYER::_0x227B06324234FB09(iVar0, iVar3);
		}
		else
		{
			if (PLAYER::_0x46FA0AE18F4C7FA9(iVar0) == iVar3)
			{
				PLAYER::_0x8FBF9EDB378CCB8C(iVar0, 0);
			}
			if (PLAYER::_0xD3F7445CEA2E5035(iVar0) == iVar3)
			{
				PLAYER::_0x227B06324234FB09(iVar0, 0);
			}
		}
	}
	func_404();
}

int func_117(struct<5> Param0, var uParam5, var uParam6, int iParam7, bool bParam8)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (!Param0.f_2)
	{
		return 0;
	}
	if (!Param0.f_3)
	{
		return 0;
	}
	if (Param0.f_4)
	{
		return 0;
	}
	if (bParam8)
	{
		if (!PED::IS_PED_ON_MOUNT(Global_35))
		{
			return 0;
		}
		*iParam7 = PED::GET_MOUNT(Global_35);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam7))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(*iParam7))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(*iParam7))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(*iParam7))
	{
		return 0;
	}
	if (func_388(*iParam7))
	{
		return 0;
	}
	if (func_389(*iParam7))
	{
		return 0;
	}
	if (func_409(*iParam7))
	{
		return 0;
	}
	if (func_410(*iParam7))
	{
		return 0;
	}
	if (func_391(*iParam7))
	{
		return 0;
	}
	if (func_390(*iParam7))
	{
		return 0;
	}
	if (func_411(*iParam7))
	{
		return 0;
	}
	bVar0 = func_412();
	bVar1 = false;
	iVar2 = PED::_0xF103823FFE72BB49(*iParam7);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			bVar1 = true;
		}
	}
	if (bVar0 || bVar1)
	{
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_118()
{
	Global_1900383->f_414 = 0;
	Global_1900383->f_414.f_1 = 0;
}

void func_119(int iParam0)
{
	char* sVar0;
	bool bVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (func_391(iParam0))
	{
		return;
	}
	sVar0 = "bHorseHasBeenStolen";
	bVar1 = false;
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, sVar0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, sVar0, true);
		bVar1 = true;
	}
	else if (!DECORATOR::DECOR_GET_BOOL(iParam0, sVar0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, sVar0, true);
		bVar1 = true;
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 6, true))
	{
		bVar1 = false;
	}
	if (bVar1)
	{
		func_413(iParam0);
	}
}

int func_120()
{
	return &Global_1900372;
}

void func_121()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	func_414(0);
	Global_1935689->f_6 = 1;
}

void func_122()
{
	func_415(0);
	func_416(1);
}

void func_123()
{
	int iVar0;
	int iVar1;

	if (!func_417())
	{
		return;
	}
	iVar0 = func_418();
	iVar1 = func_419();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_416(7);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		func_416(7);
		return;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		func_416(7);
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		func_416(7);
		return;
	}
	if (!func_420(iVar1))
	{
		func_416(7);
		return;
	}
	func_416(2);
}

void func_124()
{
	int iVar0;
	int iVar1;

	iVar0 = func_418();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_416(7);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		func_416(7);
		return;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		func_416(7);
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		func_416(7);
		return;
	}
	iVar1 = PED::_GET_RIDER_OF_MOUNT(iVar0, 0);
	if (iVar1 != 0)
	{
		if (iVar1 != Global_35)
		{
			func_416(7);
			return;
		}
	}
	if (PED::_0xE4770DA1B8FF4FD1(iVar0) != 0)
	{
		func_416(7);
		return;
	}
	if (!func_421())
	{
		func_416(7);
		return;
	}
	func_416(3);
}

void func_125()
{
	int iVar0;
	int iVar1;

	iVar0 = func_418();
	iVar1 = func_419();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_416(7);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		func_416(7);
		return;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		func_416(7);
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		func_416(7);
		return;
	}
	if (func_422(iVar0, iVar1))
	{
		func_423(MISC::GET_GAME_TIMER());
		func_416(4);
	}
}

void func_126()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	iVar0 = func_418();
	iVar1 = func_419();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_416(7);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		func_416(7);
		return;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		func_416(7);
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		func_416(7);
		return;
	}
	bVar2 = false;
	if (PED::_0x7FC84E85D98F063D(Global_35))
	{
		bVar2 = true;
	}
	else if (func_424() + 500 < MISC::GET_GAME_TIMER())
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		iVar3 = MISC::GET_GAME_TIMER();
		func_423(iVar3);
		func_425(iVar3);
		func_416(5);
		if (iVar1 == -1516555556)
		{
			func_426(iVar0);
			iVar4 = func_357(iVar0, 0);
			func_427(iVar4);
			func_428(0);
		}
		else
		{
			func_426(0);
			func_427(0);
			func_428(0);
		}
	}
}

void func_127()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = func_418();
	iVar1 = func_419();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_416(7);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		func_416(7);
		return;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		func_416(7);
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		func_416(7);
		return;
	}
	bVar2 = false;
	if (!PED::_0x7FC84E85D98F063D(Global_35))
	{
		if (func_424() + 500 < MISC::GET_GAME_TIMER())
		{
			bVar2 = true;
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1930620551))
	{
		func_429(1);
		bVar2 = true;
	}
	if (bVar2)
	{
		if (func_430())
		{
			if (func_431(iVar1, 1147021565))
			{
				func_432(iVar1, 1, 0, 562618531, 0);
			}
			func_433(iVar0, iVar1);
		}
		else
		{
			func_416(7);
			return;
		}
		func_423(MISC::GET_GAME_TIMER());
		func_416(6);
	}
}

void func_128()
{
	bool bVar0;

	bVar0 = false;
	if (!PED::_0x7FC84E85D98F063D(Global_35))
	{
		if (func_424() + 500 < MISC::GET_GAME_TIMER())
		{
			bVar0 = true;
		}
	}
	if (func_434())
	{
		bVar0 = true;
	}
	if (func_430())
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_416(7);
	}
}

void func_129()
{
	func_415(0);
	func_416(0);
	ATTRIBUTE::_0xD962F8579D702DB5();
}

void func_130()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_435();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
	}
	bVar1 = ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1120483657);
	if (bVar1)
	{
		if (!func_436())
		{
			func_428(1);
		}
	}
	if (!func_436())
	{
		return;
	}
	bVar2 = false;
	if (func_388(iVar0))
	{
		iVar3 = func_401(iVar0);
		iVar4 = func_437(iVar3, 0);
		if (iVar4 > 0)
		{
			func_438(iVar3, 0, -1);
			bVar2 = true;
		}
	}
	else
	{
		iVar5 = func_357(iVar0, 0);
		if (iVar5 > 0)
		{
			func_439(iVar0, 0, -1);
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		PED::_0xE29D8CD66553DBAA(iVar0);
	}
	if (func_357(iVar0, 0) == 0)
	{
		func_426(0);
		func_428(0);
	}
}

int func_131(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (func_84(iParam0) == 0)
	{
		return 0;
	}
	return 1;
}

void func_132(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569->f_5.f_147.f_23, iParam0);
}

bool func_133()
{
	return Global_1900383->f_443;
}

int func_134()
{
	return Global_1897952->f_41;
}

int func_135(int iParam0, bool bParam1)
{
	switch (func_440(iParam0))
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

int func_136(int iParam0, var uParam1, var uParam2)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	*uParam1 = { (Global_40.f_1095.f_1[iParam0 /*436*/])->f_427 };
	*uParam2 = (Global_40.f_1095.f_1[iParam0 /*436*/])->f_430;
	return 1;
}

int func_137(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_138()
{
	Global_1900383->f_443 = 0;
}

int func_139(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	struct<2> Var8;
	struct<6> Var10;
	int iVar16;
	int iVar17;

	uParam1->f_10 = func_87(uParam1->f_10);
	if (uParam1->f_10 == -1)
	{
		*uParam0 = 1;
		return 0;
	}
	if (uParam1->f_10 >= 7)
	{
		*uParam0 = 1;
		return 0;
	}
	if (*uParam1)
	{
		if (func_137(uParam1->f_6))
		{
		}
	}
	bVar0 = func_94();
	if (*uParam1)
	{
		if (bVar0 && !func_135(((*Global_1835011)[4 /*74*/])->f_1, 1))
		{
			if (func_131(5))
			{
				func_73(5);
				func_203(5);
				func_217(0);
				func_214(0);
			}
		}
	}
	if (func_441(Global_36) == 8)
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_135(((*Global_1835011)[37 /*74*/])->f_1, 1)) && !func_135(((*Global_1835011)[43 /*74*/])->f_1, 1))
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_135(((*Global_1835011)[43 /*74*/])->f_1, 1)) && !func_135(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_88(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_71(iVar1))
	{
		bVar3 = true;
		if (func_380(iVar1))
		{
			bVar4 = true;
		}
		if (func_442(iVar1))
		{
			bVar5 = true;
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar5 && !uParam1->f_5)
			{
				func_443(uParam1->f_10);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar4)
			{
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!func_131(0) && func_131(1))
			{
				func_116(1, 0);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_210())
			{
				func_444();
			}
			func_217(0);
			func_214(0);
			func_215(uParam1->f_6);
		}
	}
	if (!func_71(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_207(uParam1->f_10) == 0 || func_445(uParam1->f_10) == 0) || func_84(uParam1->f_10) == 0)
			{
				func_446(uParam1->f_10);
			}
			func_447(uParam1->f_10);
			func_448(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
		*uParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_88(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_71(iVar1))
	{
		bVar3 = true;
		if (func_380(iVar1))
		{
			bVar4 = true;
		}
		if (func_442(iVar1))
		{
			bVar5 = true;
		}
	}
	if (uParam1->f_2)
	{
		if (bVar3)
		{
			if (ENTITY::_0x083D497D57B7400F(iVar2))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			}
			if (!func_137(uParam1->f_6))
			{
				ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
				ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
				ENTITY::_0x9587913B9E772D29(iVar2, 0);
			}
		}
	}
	if (func_165(uParam1->f_10))
	{
		*uParam0 = 0;
		return 0;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (bVar3)
	{
		if (bVar5 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!PED::_0xA0BC8FAED8CFEB3C(iVar2))
			{
				*uParam0 = 0;
				return 0;
			}
			iVar6 = PLAYER::PLAYER_ID();
			iVar7 = PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(iVar6);
			if (ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
				if (iVar7 != iVar2)
				{
					PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, 0);
				}
			}
			Var8 = { func_354(uParam1->f_10) };
			Var10 = { func_355() };
			func_362(iVar2, &Var8, &Var10, 0);
			PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, iVar2);
			PED::SET_PED_CONFIG_FLAG(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return iVar2;
	}
	if (!func_72(uParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
		func_449(uParam1->f_10);
		if (uParam1->f_2 && !func_137(uParam1->f_6))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			PHYSICS::_0x0348469DAA17576C(iVar2);
			ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
			ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
			ENTITY::_0x9587913B9E772D29(iVar2, 0);
		}
		*uParam0 = 2;
		return iVar2;
	}
	func_450(uParam1->f_10);
	if (func_72(uParam1->f_10))
	{
		iVar16 = func_181(uParam1->f_10);
		iVar17 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (iVar16 != iVar17)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	*uParam0 = 2;
	return iVar2;
}

int func_140(int iParam0)
{
	if (!func_451(iParam0))
	{
		return 0;
	}
	return func_452(iParam0);
}

void func_141(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	int iVar7;

	iVar0 = func_207(iParam0);
	if (func_115(iParam0) >= ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7))
	{
		return;
	}
	iVar1 = func_88(iParam0);
	fVar2 = ENTITY::GET_ENTITY_SPEED(iVar1);
	bVar3 = false;
	if (PED::_GET_RIDER_OF_MOUNT(iVar1, 0) != Global_35)
	{
		bVar3 = true;
	}
	bVar4 = false;
	if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		bVar4 = true;
	}
	if ((fVar2 < 0.5f || bVar3) || !bVar4)
	{
		(Global_1900383->f_317.f_2[iParam0 /*5*/])->f_1 = -1;
		Global_1900383->f_317.f_2[iParam0 /*5*/] = -1;
		return;
	}
	if ((Global_1900383->f_317.f_2[iParam0 /*5*/])->f_2 >= 100f)
	{
		func_453(1, 100f);
		fVar5 = ((Global_1900383->f_317.f_2[iParam0 /*5*/])->f_2 - 100f);
		(Global_1900383->f_317.f_2[iParam0 /*5*/])->f_2 = fVar5;
	}
	fVar6 = PED::_GET_PED_STAMINA(iVar1);
	if (fVar6 < 1f)
	{
		(Global_1900383->f_317.f_2[iParam0 /*5*/])->f_1 = -1;
		Global_1900383->f_317.f_2[iParam0 /*5*/] = -1;
		return;
	}
	if (fVar2 > 0.5f && fVar2 <= 4f)
	{
		if (&Global_1900383->f_317.f_2[iParam0 /*5*/] == -1)
		{
			Global_1900383->f_317.f_2[iParam0 /*5*/] = 0;
		}
	}
	if (fVar2 > 4f && fVar2 <= 6f)
	{
		if (&Global_1900383->f_317.f_2[iParam0 /*5*/] == -1 || &Global_1900383->f_317.f_2[iParam0 /*5*/] == 0)
		{
			Global_1900383->f_317.f_2[iParam0 /*5*/] = 1;
		}
	}
	if (fVar2 > 6f)
	{
		if ((&Global_1900383->f_317.f_2[iParam0 /*5*/] == -1 || &Global_1900383->f_317.f_2[iParam0 /*5*/] == 0) || &Global_1900383->f_317.f_2[iParam0 /*5*/] == 1)
		{
			Global_1900383->f_317.f_2[iParam0 /*5*/] = 2;
		}
	}
	if (fVar2 > 10f)
	{
		if (((&Global_1900383->f_317.f_2[iParam0 /*5*/] == -1 || &Global_1900383->f_317.f_2[iParam0 /*5*/] == 0) || &Global_1900383->f_317.f_2[iParam0 /*5*/] == 1) || &Global_1900383->f_317.f_2[iParam0 /*5*/] == 2)
		{
			Global_1900383->f_317.f_2[iParam0 /*5*/] = 3;
		}
	}
	if (&Global_1900383->f_317.f_2[iParam0 /*5*/] == -1)
	{
		return;
	}
	iVar7 = MISC::GET_GAME_TIMER();
	if ((Global_1900383->f_317.f_2[iParam0 /*5*/])->f_1 == -1)
	{
		(Global_1900383->f_317.f_2[iParam0 /*5*/])->f_1 = iVar7;
		return;
	}
	if ((Global_1900383->f_317.f_2[iParam0 /*5*/])->f_1 + 5000 < iVar7)
	{
		if (&Global_1900383->f_317.f_2[iParam0 /*5*/] == 0 || &Global_1900383->f_317.f_2[iParam0 /*5*/] == 1)
		{
			func_454(iParam0, 1);
		}
		else if (&Global_1900383->f_317.f_2[iParam0 /*5*/] == 2)
		{
			func_454(iParam0, 2);
		}
		else if (&Global_1900383->f_317.f_2[iParam0 /*5*/] == 3)
		{
			func_454(iParam0, 3);
		}
		(Global_1900383->f_317.f_2[iParam0 /*5*/])->f_1 = -1;
		Global_1900383->f_317.f_2[iParam0 /*5*/] = -1;
	}
}

void func_142(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	float fVar4;
	int iVar5;

	iVar0 = func_207(iParam0);
	if (func_115(iParam0) >= ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7))
	{
		return;
	}
	iVar1 = func_88(iParam0);
	fVar2 = ENTITY::GET_ENTITY_SPEED(iVar1);
	bVar3 = false;
	if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		bVar3 = true;
	}
	if (((!TASK::_0xEFC4303DDC6E60D3(Global_35) || TASK::_0xED1F514AF4732258(Global_35) != iVar1) || fVar2 < 0.5f) || !bVar3)
	{
		(Global_1900383->f_317.f_2[iParam0 /*5*/])->f_3 = -1;
		return;
	}
	if ((Global_1900383->f_317.f_2[iParam0 /*5*/])->f_4 >= 20f)
	{
		func_453(4, 20f);
		fVar4 = ((Global_1900383->f_317.f_2[iParam0 /*5*/])->f_4 - 20f);
		(Global_1900383->f_317.f_2[iParam0 /*5*/])->f_4 = fVar4;
	}
	iVar5 = MISC::GET_GAME_TIMER();
	if ((Global_1900383->f_317.f_2[iParam0 /*5*/])->f_3 == -1)
	{
		(Global_1900383->f_317.f_2[iParam0 /*5*/])->f_3 = iVar5;
		return;
	}
	if ((Global_1900383->f_317.f_2[iParam0 /*5*/])->f_3 + 5000 < iVar5)
	{
		func_454(iParam0, 4);
		(Global_1900383->f_317.f_2[iParam0 /*5*/])->f_3 = -1;
	}
}

void func_143(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;

	iVar0 = func_207(iParam0);
	if (func_115(iParam0) >= ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7))
	{
		return;
	}
	iVar1 = func_88(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1) || PED::IS_PED_INJURED(iVar1))
	{
		return;
	}
	bVar2 = PED::_GET_RIDER_OF_MOUNT(iVar1, 0) == Global_35;
	if (!bVar2)
	{
		return;
	}
	iVar3 = PED::_GET_LASSOED_ENTITY(Global_35);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return;
	}
	if (DECORATOR::DECOR_EXIST_ON(iVar3, "bHasBeenLassoedFromHorse"))
	{
		return;
	}
	bVar4 = func_455(iVar3, Global_35);
	if (bVar4)
	{
	}
	DECORATOR::DECOR_SET_BOOL(iVar3, "bHasBeenLassoedFromHorse", true);
}

void func_144(int iParam0)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 2))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
	{
		return;
	}
	if (func_456(Var0.f_1))
	{
		return;
	}
	if (Var0.f_1 == Global_35)
	{
		return;
	}
	iVar2 = Global_1935630->f_40;
	if (PED::IS_PED_INJURED(iVar2))
	{
		return;
	}
	if (func_388(iVar2))
	{
	}
	if (ENTITY::IS_ENTITY_A_PED(Var0))
	{
		iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
		if (!iVar3 == iVar2)
		{
			return;
		}
	}
	else
	{
		return;
	}
	iVar4 = Var0.f_1;
	if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar4, iVar2, 1, 1))
	{
		return;
	}
	if (!PED::IS_PED_HUMAN(iVar4))
	{
		return;
	}
	if (DECORATOR::DECOR_EXIST_ON(iVar4, "bHasBeenTrampledByHorse"))
	{
		return;
	}
	bVar5 = func_455(iVar4, Global_35);
	if (bVar5)
	{
		if (func_457(iVar4, -735200598 /* GXTEntry: "Trampled Innocent" */))
		{
			func_243(0, -735200598 /* GXTEntry: "Trampled Innocent" */, 0, 0, iVar4, 0, 1065353216 /* Float: 1f */, 0);
		}
	}
	else if (func_456(iVar4))
	{
	}
	else if (!func_458(iVar4, -735200598 /* GXTEntry: "Trampled Innocent" */))
	{
		func_243(0, -735200598 /* GXTEntry: "Trampled Innocent" */, 0, 0, iVar4, 0, 1065353216 /* Float: 1f */, 0);
	}
	DECORATOR::DECOR_SET_BOOL(iVar4, "bHasBeenTrampledByHorse", true);
}

void func_145(int iParam0)
{
	int iVar0;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &iVar0, 1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return;
	}
	if (!func_388(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
	{
		return;
	}
	func_459();
}

void func_146(int iParam0)
{
	struct<5> Var0;
	int iVar9;
	int iVar10;
	int iVar11;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 9))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(Var0.f_1))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(Var0))
	{
		return;
	}
	iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
	iVar10 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
	if (!func_388(iVar10))
	{
		return;
	}
	if (iVar9 == Global_35)
	{
		iVar11 = func_401(iVar10);
		if ((iVar11 != -1 && Var0.f_2 != 0) && Var0.f_4 > 5f)
		{
		}
	}
}

void func_147(int iParam0)
{
	struct<4> Var0;
	int iVar9;
	int iVar10;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 9))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(Var0.f_1))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(Var0))
	{
		return;
	}
	iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
	iVar10 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar9))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar9))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar10))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar10))
	{
		return;
	}
	if (func_388(iVar10))
	{
		return;
	}
	if (iVar9 != Global_35)
	{
		return;
	}
	func_460(iVar10, Var0.f_2, Var0.f_3);
}

void func_148(int iParam0)
{
	Global_1359489->f_16 = (Global_1359489->f_16 || iParam0);
}

void func_149(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &vVar0, 3))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar0.y);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return;
	}
	iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar0.x);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar4))
	{
		return;
	}
	if (iVar4 != Global_35)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_A_PED(vVar0.z))
	{
		iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar0.z);
		if (ENTITY::DOES_ENTITY_EXIST(iVar5))
		{
			if (ENTITY::_0x9A100F1CF4546629(iVar5) && ENTITY::_0x5594AFE9DE0C01B7(iVar5))
			{
				if (func_388(iVar3))
				{
					iVar6 = func_401(iVar3);
					iVar7 = func_207(iVar6);
					iVar8 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar7, 7);
					if (func_115(iVar6) < iVar8)
					{
						func_283(37, 0);
					}
					func_192(iVar6, 1);
					func_193(iVar6, MISC::GET_GAME_TIMER());
				}
			}
		}
	}
}

void func_150(int iParam0)
{
	struct<2> Var0;
	int iVar6;
	int iVar7;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 6))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar6))
	{
		return;
	}
	iVar7 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
	{
		return;
	}
	if (iVar7 != Global_35)
	{
		return;
	}
}

void func_151(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &vVar0, 3))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(vVar0.x))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(vVar0.x))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(vVar0.y))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(vVar0.y))
	{
		return;
	}
	iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar0.x);
	iVar4 = vVar0.z;
	if (iVar3 != Global_35)
	{
		return;
	}
	switch (iVar4)
	{
		case -1897367196:
		case 391681984:
			break;
		case 637277148:
			break;
		case 25367022:
			if (iVar4 == 554992710)
			{
			}
			func_461(1);
			break;
	}
}

void func_152(int iParam0)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 4))
	{
		return;
	}
	if (PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
	{
		return;
	}
	iVar4 = Var0;
	iVar5 = Var0.f_1;
	if (iVar4 != Global_35)
	{
		return;
	}
	if (!func_388(iVar5))
	{
		return;
	}
	iVar6 = func_401(iVar5);
	vVar7 = { func_245(iVar6) };
	vVar10 = { ENTITY::GET_ENTITY_COORDS(iVar5, true, false) };
	if (!Var0.f_2)
	{
		func_462(iVar6, vVar10);
		func_248(iVar6, vVar10);
		func_249(iVar6, 0f);
		return;
	}
	if (Var0.f_3 == 0)
	{
		return;
	}
	if (!func_137(vVar7))
	{
		fVar13 = func_247(iVar6);
		if (fVar13 < 200f)
		{
			func_462(iVar6, vVar10);
			func_454(iVar6, 12);
			return;
		}
	}
	func_454(iVar6, 11);
	func_462(iVar6, vVar10);
	func_248(iVar6, vVar10);
	func_249(iVar6, 0f);
	func_114(iVar5);
	if (func_205(44))
	{
		return;
	}
	if (!func_140(40))
	{
		return;
	}
	if (!func_280())
	{
		return;
	}
	func_283(44, 0);
}

void func_153(int iParam0)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	struct<2> Var12;
	var uVar14;
	struct<7> Var20;
	bool bVar27;
	int iVar28;
	int iVar29;
	var uVar30;
	int iVar31;
	struct<2> Var32;
	struct<6> Var34;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 5))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
	{
		return;
	}
	iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
	if (iVar5 != Global_35)
	{
		return;
	}
	iVar6 = PLAYER::GET_PLAYER_INDEX();
	iVar7 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
	switch (Var0.f_2)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			if (!Var0.f_4)
			{
				func_463();
			}
			break;
		case 4:
			break;
		case 5:
			if (ENTITY::IS_ENTITY_DEAD(iVar7))
			{
				return;
			}
			if (Global_1900383->f_442)
			{
				iVar8 = MAP::_0x3E593DF9C2962EC6(-1925605092);
				MAP::_BLIP_SET_MODIFIER(iVar8, 673950256);
				func_464(41, iVar8, 1);
			}
			func_454(0, 5);
			break;
	}
	if (Var0.f_4 && func_465(Var0.f_2))
	{
		if (Var0.f_3 == 0)
		{
			return;
		}
		PED::SET_PED_CONFIG_FLAG(iVar7, 186, true);
		bVar9 = ENTITY::IS_ENTITY_DEAD(iVar7);
		if (bVar9)
		{
			if (PLAYER::_0x46FA0AE18F4C7FA9(iVar6) == iVar7)
			{
				PLAYER::_0x8FBF9EDB378CCB8C(iVar6, 0);
			}
			PERSISTENCE::_0xE225CEF1901F6108(iVar7, 0);
			PERSISTENCE::_0xDC0A1F0ECEC9F0C0(iVar7, 1f);
		}
		func_466(Var0.f_3);
		iVar10 = func_211();
		if (ENTITY::DOES_ENTITY_EXIST(iVar10))
		{
			if (!ENTITY::_0x88AD6CC10D8D35B2(iVar10))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar10, true, false);
			}
		}
		iVar11 = func_401(iVar7);
		func_467(iVar11);
		Var12 = { func_354(iVar11) };
		func_356(&uVar14);
		func_468(iVar7);
		func_362(iVar7, &Var12, &uVar14, 0);
		PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, 0);
		func_217(-1);
		func_214(1);
		func_469(iVar11, 0);
		if (!func_470(iVar11, 5))
		{
			func_472(iVar11, 5, func_471(5));
		}
		func_315(iVar11);
		func_404();
		func_473(iVar7);
	}
	if (Var0.f_4 && func_474(Var0.f_2))
	{
		if (ENTITY::IS_ENTITY_DEAD(iVar7))
		{
			return;
		}
		func_315(0);
		func_315(1);
		func_315(5);
		if (func_84(0) == 1)
		{
			if (!func_71(0))
			{
				func_203(0);
			}
		}
		Var20.f_1 = 1;
		Var20.f_5 = 0;
		Var20.f_3 = 1;
		Var20.f_2 = 1;
		Var20.f_4 = 0;
		Var20.f_6 = 0;
		Var20 = PLAYER::PLAYER_ID();
		if (func_117(Var20, &iVar7, 0))
		{
			func_119(iVar7);
			func_118();
		}
		Global_1900383->f_442 = 0;
		if (func_388(iVar7))
		{
			if (iVar7 == func_88(0))
			{
			}
			else if (iVar7 == func_88(1))
			{
				func_116(1, 0);
				Global_1900383->f_442 = 1;
			}
			else if (iVar7 == func_88(6))
			{
				bVar27 = false;
				if (!bVar27)
				{
					if (func_131(0) && func_131(1))
					{
						func_116(0, 1);
						func_116(0, 6);
						bVar27 = true;
					}
				}
				if (!bVar27)
				{
					if (func_131(0) && !func_131(1))
					{
						func_116(0, 1);
						func_116(0, 6);
						bVar27 = true;
					}
				}
				if (!bVar27)
				{
					if (!func_131(0))
					{
						func_116(0, 6);
						bVar27 = true;
					}
				}
				Global_1900383->f_442 = 1;
			}
		}
		else
		{
			if (func_131(0))
			{
				if (func_131(1))
				{
					if (func_131(6))
					{
						func_202(6, 0);
						func_203(6);
					}
					func_116(1, 6);
				}
				func_116(0, 1);
			}
			func_475(iVar7);
			Global_1900383->f_442 = 1;
		}
		func_343(iVar7);
		if (func_71(0))
		{
			iVar28 = func_88(0);
			PLAYER::_0x8FBF9EDB378CCB8C(iVar6, iVar28);
		}
		if (func_71(1))
		{
			iVar29 = func_88(1);
			uVar30 = PLAYER::_0x227B06324234FB09(iVar6, iVar29);
		}
		else
		{
			PLAYER::_0x227B06324234FB09(iVar6, 0);
		}
		iVar31 = func_211();
		if (ENTITY::DOES_ENTITY_EXIST(iVar31))
		{
			if (!ENTITY::_0x88AD6CC10D8D35B2(iVar31))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar31, false, true);
			}
			OBJECT::DELETE_OBJECT(&iVar31);
		}
		func_466(0);
		func_476(iVar7);
		func_477(iVar7);
		if (!ENTITY::_0x808077647856DE62(iVar7, 9))
		{
			ENTITY::_0x18FF3110CF47115D(iVar7, 9, 1);
		}
		PED::SET_PED_CONFIG_FLAG(iVar7, 186, false);
		PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, iVar7);
		func_217(0);
		func_214(0);
		func_469(0, 0);
		Var32 = { func_354(0) };
		Var34 = { func_355() };
		func_362(iVar7, &Var32, &Var34, 0);
		func_478(0);
		func_404();
		func_479();
	}
}

void func_154(int iParam0)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	float fVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	int iVar24;
	int iVar25;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 4))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
	{
		return;
	}
	iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
	iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
	iVar6 = Var0.f_2;
	bVar7 = Var0.f_3;
	if (iVar4 != Global_35)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar4) || PED::IS_PED_INJURED(iVar4))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar5) || PED::IS_PED_INJURED(iVar5))
	{
		return;
	}
	fVar8 = func_190(iVar5);
	bVar9 = false;
	if (fVar8 == 0f)
	{
		bVar9 = true;
	}
	if (func_389(iVar5))
	{
		return;
	}
	if (func_391(iVar5))
	{
		return;
	}
	if (func_390(iVar5))
	{
		return;
	}
	iVar10 = ENTITY::GET_ENTITY_MODEL(iVar5);
	if (func_392(iVar10) || func_393(iVar10))
	{
		return;
	}
	iVar11 = PED::_0xE4770DA1B8FF4FD1(iVar5);
	if (ENTITY::DOES_ENTITY_EXIST(iVar11))
	{
		return;
	}
	if (func_480() != iVar5)
	{
		func_481(iVar5);
		func_482(0);
		func_483(0);
	}
	bVar12 = false;
	iVar13 = MISC::GET_GAME_TIMER();
	iVar14 = func_484();
	if ((iVar14 + 45000) > iVar13)
	{
		bVar12 = true;
	}
	bVar15 = false;
	if (bVar12 && iVar14 + 15000 > iVar13)
	{
		bVar15 = true;
	}
	bVar16 = func_388(iVar5);
	bVar17 = true;
	if (iVar6 == 1 || iVar6 == 3)
	{
		bVar17 = false;
	}
	bVar18 = func_279(Global_35, iVar5, 0);
	bVar19 = func_485(iVar5);
	bVar20 = PED::_0xD4D403EA031F351C(iVar5);
	bVar21 = func_94();
	bVar22 = func_135(((*Global_1835011)[0 /*74*/])->f_1, 1);
	bVar23 = false;
	if (bVar21 && !bVar22)
	{
		bVar23 = true;
	}
	func_114(iVar5);
	if (!bVar16)
	{
		return;
	}
	iVar24 = func_401(iVar5);
	if ((((bVar17 && !bVar18) && !bVar19) && !bVar20) && !bVar23)
	{
		func_486(iVar5);
	}
	iVar25 = -1;
	switch (iVar6)
	{
		case 0:
			if (bVar7)
			{
				if (bVar12)
				{
					if (!bVar15)
					{
						iVar25 = 10;
					}
				}
				else if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar5) > 1.5f)
				{
					iVar25 = 10;
				}
				else
				{
					iVar25 = 9;
				}
			}
			break;
		case 1:
		case 3:
			if (bVar12)
			{
				if (!bVar15)
				{
					iVar25 = 8;
				}
			}
			else if (bVar7)
			{
				iVar25 = 9;
			}
			else if (bVar9)
			{
				iVar25 = 7;
			}
			break;
	}
	if (iVar25 != -1)
	{
		func_454(iVar24, iVar25);
		if ((bVar7 || !bVar12) || !bVar15)
		{
			func_481(iVar5);
			func_482(iVar13);
		}
	}
	func_487(iVar24);
}

void func_155(int iParam0)
{
}

void func_156(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &vVar0, 3))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(vVar0.x))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(vVar0.x))
	{
		return;
	}
	iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar0.x);
	if (ENTITY::IS_ENTITY_DEAD(iVar3) || PED::IS_PED_INJURED(iVar3))
	{
		return;
	}
	if (iVar3 != Global_35)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(vVar0.y))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(vVar0.y))
	{
		return;
	}
	iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar0.y);
	if (ENTITY::IS_ENTITY_DEAD(iVar4) || PED::IS_PED_INJURED(iVar4))
	{
		return;
	}
	if (func_389(iVar4))
	{
		return;
	}
	if (func_390(iVar4))
	{
		return;
	}
	if (vVar0.z == 0)
	{
		if (!func_488())
		{
			func_283(52, 1);
		}
	}
	iVar5 = MISC::GET_GAME_TIMER();
	if (vVar0.z == 1)
	{
		iVar6 = func_489();
		if (func_490(54) == 0)
		{
			func_491(MISC::GET_GAME_TIMER());
			func_283(54, 0);
		}
		else if (func_490(54) < 3)
		{
			if ((iVar6 + 1800000) <= iVar5)
			{
				func_283(54, 1);
				func_491(MISC::GET_GAME_TIMER());
			}
		}
		func_492(0);
	}
	if (vVar0.z == 2)
	{
		if (func_196(52))
		{
			func_197(52);
		}
		if (func_194(52))
		{
			func_195(52);
		}
		func_283(53, 1);
		func_492(1);
	}
	if (vVar0.z != 2)
	{
		return;
	}
	func_494(func_493(-1811330370, -591306697), 1);
	COMPENDIUM::COMPENDIUM_HORSE_WILD_BROKEN(iVar4);
	if (func_388(iVar4))
	{
		return;
	}
	if (func_402(iVar4) > 0)
	{
		if (func_71(1))
		{
			func_202(1, 0);
			func_203(1);
		}
		func_403(iVar4);
	}
	else
	{
		if (func_71(6))
		{
			func_202(6, 0);
			func_203(6);
		}
		func_405(iVar4, 1);
	}
	if (!func_388(iVar4))
	{
		return;
	}
	iVar7 = func_401(iVar4);
	if (iVar7 == -1)
	{
		return;
	}
	if (!func_224(iVar7))
	{
		func_454(iVar7, 6);
		func_495(iVar7, 1);
		func_481(iVar4);
		func_482(iVar5);
	}
}

void func_157(int iParam0)
{
	struct<2> Var0;
	int iVar2;

	if (func_2() == 0)
	{
		return;
	}
	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 2))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || !ENTITY::DOES_ENTITY_EXIST(Var0))
	{
		return;
	}
	if (Global_1935630->f_12)
	{
		return;
	}
	if (PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0) != Global_35)
	{
		return;
	}
	if (Global_1900383->f_378 != 2)
	{
		return;
	}
	switch (Var0.f_1)
	{
		case -72209530:
			iVar2 = 0;
			break;
		case 1704957293:
			iVar2 = 0;
			break;
		case 869278708:
			iVar2 = 4;
			break;
		case 640210656:
			iVar2 = 0;
			break;
		case 1051485804:
			iVar2 = 2;
			break;
		default:
			iVar2 = 0;
			break;
	}
	func_371(iVar2);
	func_372(Var0.f_1);
	func_79(1);
	DECORATOR::DECOR_SET_BOOL(Global_35, "Whistling", true);
}

void func_158(int iParam0)
{
	vector3 vVar0;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &vVar0, 10))
	{
		return;
	}
	uVar10 = vVar0.x;
	iVar11 = uVar10;
	switch (iVar11)
	{
		case 28:
			func_414(1);
			func_496(-283002878);
			break;
	}
	if (func_2() == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	iVar12 = vVar0.z;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar12))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar12))
	{
		return;
	}
	iVar13 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar12);
	if (ENTITY::IS_ENTITY_DEAD(iVar13) || PED::IS_PED_INJURED(iVar13))
	{
		return;
	}
	switch (iVar11)
	{
		case 28:
			func_414(1);
			func_496(-283002878);
			break;
		case 31:
		case 32:
		case 33:
			func_497(iParam0);
			break;
		case 49:
			func_498(iParam0);
			break;
		case 50:
			func_499(iParam0);
			break;
		default:
			return;
	}
}

void func_159(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &vVar0, 3))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(vVar0.y))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(vVar0.y))
	{
		return;
	}
	iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar0.y);
	if (iVar3 != Global_35)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(vVar0.x))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(vVar0.x))
	{
		return;
	}
	iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar0.x);
	if (!func_388(iVar4))
	{
		return;
	}
	iVar5 = func_401(iVar4);
	func_500();
	func_501(iVar5);
	func_199(iVar5, 0);
	func_502(iVar5, 0);
	func_503(iVar5, -15);
	if (func_194(56))
	{
		func_195(56);
	}
	if (func_196(56))
	{
		func_197(56);
	}
	if (func_194(57))
	{
		func_195(57);
	}
	if (func_196(57))
	{
		func_197(57);
	}
	iVar6 = vVar0.z;
	func_504(iVar4, iVar6);
	PED::_0xEB8886E1065654CD(iVar4, 10, "ALL", 10f);
}

void func_160(int iParam0)
{
	struct<2> Var0;
	int iVar2;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 2))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
	{
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0))
	{
		return;
	}
	iVar2 = Var0;
	if (!func_388(iVar2))
	{
		return;
	}
	if (func_505())
	{
		if (func_194(57))
		{
			func_195(57);
		}
		if (func_196(57))
		{
			func_197(57);
		}
		if (!func_194(56) && !func_196(56))
		{
			if (func_506() < 3)
			{
				func_283(56, 1);
			}
		}
	}
}

void func_161(int iParam0)
{
	struct<2> Var0;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 4))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(Var0.f_1))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(Var0.f_1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Var0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(Var0))
	{
		return;
	}
	if (Global_16 || func_369())
	{
		return;
	}
	iVar4 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
	if (INTERIOR::IS_VALID_INTERIOR(iVar4))
	{
		return;
	}
	iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
	iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
	if (PED::IS_PED_INJURED(iVar5))
	{
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar5))
	{
		return;
	}
	if (!func_388(iVar5))
	{
		return;
	}
	if (iVar6 == Global_1900383->f_440)
	{
		return;
	}
	if (((func_194(61) || func_196(61)) || func_194(62)) || func_196(62))
	{
		return;
	}
	bVar7 = false;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (PED::_GET_RIDER_OF_MOUNT(iVar5, 0) == Global_35)
		{
			bVar7 = true;
		}
	}
	bVar8 = false;
	if (!bVar7)
	{
		if (func_187(Global_35, iVar5, 1, 1) <= 5f)
		{
			bVar8 = true;
		}
	}
	iVar9 = -1;
	if (bVar7)
	{
		iVar9 = 62;
	}
	else if (bVar8)
	{
		iVar9 = 61;
	}
	if (iVar9 == -1)
	{
		return;
	}
	if (!func_280())
	{
		return;
	}
	iVar10 = (func_490(61) + func_490(62));
	if (iVar10 >= 3)
	{
		return;
	}
	iVar11 = MISC::GET_GAME_TIMER();
	iVar12 = func_507();
	if (iVar10 > 0)
	{
		if (iVar12 == 0)
		{
			func_508(MISC::GET_GAME_TIMER());
			return;
		}
		if ((iVar12 + 600000) > iVar11)
		{
			return;
		}
	}
	func_283(iVar9, 1);
	func_509();
	Global_1900383->f_440 = iVar6;
}

void func_162(int iParam0)
{
	vector3 vVar0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	var uVar14;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &vVar0, 6))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(vVar0.y))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(vVar0.x))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(vVar0.z))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(vVar0.z))
	{
		return;
	}
	iVar6 = vVar0.y;
	iVar7 = vVar0.x;
	iVar8 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar0.z);
	if (iVar7 != Global_35)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_A_PED(iVar6))
	{
		iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar6);
		if (PED::IS_PED_HUMAN(iVar9))
		{
			return;
		}
	}
	if (func_388(iVar8))
	{
		iVar10 = func_401(iVar8);
		iVar11 = 0;
		iVar11 = func_510(iVar6);
		if (func_284(iVar11, 0))
		{
			if (func_511(iVar11))
			{
				if (ENTITY::_0xF59FDE7B4D31A630(iVar6))
				{
					func_512(iVar10, iVar11, 1);
				}
			}
		}
	}
	else
	{
		iVar12 = func_510(iVar6);
		if (func_284(iVar12, 0))
		{
			if ((func_511(iVar12) && func_513(iVar12) != 0) && func_514(func_513(iVar12), &iVar13))
			{
				Global_1425228->f_2[iVar13] = iVar8;
			}
		}
	}
	uVar14 = func_286(iVar8, iVar6);
}

void func_163(int iParam0)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	var uVar8;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 4))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_3))
	{
		return;
	}
	if (!Var0.f_2)
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(Var0.f_3))
	{
		return;
	}
	iVar4 = Var0.f_1;
	iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_3);
	if (!ENTITY::DOES_ENTITY_EXIST(Var0))
	{
		func_516(func_515(iVar4));
	}
	else
	{
		iVar6 = Var0;
		if (iVar6 != Global_35)
		{
			return;
		}
	}
	bVar7 = false;
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar4))
	{
		bVar7 = true;
	}
	if (!bVar7)
	{
		PERSISTENCE::_0xDC0A1F0ECEC9F0C0(iVar4, 1f);
	}
	uVar8 = func_517(iVar5, iVar4);
}

void func_164(int iParam0)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 4))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0))
	{
		return;
	}
	if (Var0 != Global_35)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
	{
		return;
	}
	if (!Var0.f_2)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_3))
	{
		return;
	}
	iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_3);
	iVar5 = func_401(iVar4);
	switch (iVar5)
	{
		case 0:
		case 1:
			break;
		default:
			return;
	}
	if (!func_308(iVar5))
	{
		return;
	}
	if (func_518(iVar4, 0))
	{
		return;
	}
	iVar6 = Var0.f_1;
	if (!ENTITY::IS_ENTITY_A_PED(iVar6) && !ENTITY::_0x255B6DB4E3AD3C3E(iVar6))
	{
		return;
	}
	func_306(iVar5);
	if (!func_300(iVar5))
	{
		func_454(iVar5, 22);
		return;
	}
	func_304(iVar5, 0);
	func_454(iVar5, 21);
}

int func_165(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return func_173(iParam0, 1);
}

void func_166(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_427 = { vParam1 };
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_430 = uParam4;
}

int func_167(int iParam0)
{
	return (Global_1898164->f_1[iParam0 /*5*/])->f_2;
}

int func_168(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_169(int iParam0)
{
	return func_519(iParam0, 0);
}

int func_170()
{
	return Global_40.f_4283.f_1;
}

int func_171(int iParam0)
{
	if ((iParam0 == 43 || iParam0 == 37) || iParam0 == 22)
	{
		return 1;
	}
	return 0;
}

bool func_172(int iParam0)
{
	return func_520(iParam0, 2);
}

bool func_173(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return (((*Global_1900383)[iParam0 /*45*/])->f_24 && iParam1) != 0;
}

int func_174(int iParam0, int iParam1)
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

int func_175(int iParam0)
{
	if (iParam0 == 7)
	{
		return 0;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(&(Global_1357549->f_3[iParam0])))
	{
		return &(Global_1357549->f_3[iParam0]);
	}
	return 0;
}

int func_176(vector3 vParam0, int iParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	float fVar10;

	if (!VOLUME::_DOES_VOLUME_EXIST(iParam3))
	{
		return 0;
	}
	bVar0 = false;
	if (VOLUME::_DOES_VOLUME_EXIST(iParam4))
	{
		bVar0 = true;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	TASK::_0xB8E213D02F37947D(iParam3, iVar1, -1805387726, 1, 1, 0, 0);
	iVar2 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	fVar4 = 1E+07f;
	iVar5 = 0;
	while (iVar5 < iVar2)
	{
		iVar6 = ITEMSET::GET_INDEXED_SCENARIO_POINT_INDEX_IN_ITEMSET(iVar5, iVar1);
		if (!TASK::_DOES_SCENARIO_POINT_EXIST(iVar6))
		{
		}
		else
		{
			vVar7 = { TASK::_GET_SCENARIO_POINT_COORDS(iVar6, 1) };
			if (bVar0)
			{
				if (VOLUME::_0xF256A75210C5C0EB(iParam4, vVar7))
				{
				}
				else
				{
					fVar10 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar7, true);
					if (fVar10 < fVar4)
					{
						iVar3 = iVar6;
						fVar4 = fVar10;
					}
				}
				iVar5++;
				ITEMSET::DESTROY_ITEMSET(iVar1);
				return iVar3;
			}
		}
	}

int func_177(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return ((*Global_1900383)[iParam0 /*45*/])->f_44;
}

void func_178(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_44 = iParam1;
}

int func_179()
{
	if (func_76(16384))
	{
		func_327(16384);
		return 1;
	}
	return 0;
}

int func_180(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1) || PED::IS_PED_INJURED(iParam1))
	{
		return 0;
	}
	TASK::TASK_GO_TO_WHISTLE(iParam0, iParam1, 0);
	FLOCK::_0xFF1E339CE40EAAAF(iParam0, -1);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 48, false);
	POPULATION::_0xF74E134F40192884(iParam0, 1);
	return 1;
}

int func_181(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return ((*Global_1900383)[iParam0 /*45*/])->f_3;
}

void func_182(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (!func_388(iParam0))
	{
		return;
	}
	iVar0 = func_401(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_521(iVar0);
	func_450(iVar0);
	iVar1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	iVar2 = func_181(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_72(iVar0))
		{
			return;
		}
	}
	func_183(iVar0);
	PED::SET_PED_KEEP_TASK(iParam0, true);
	if (bParam1 && func_2() == -1)
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, true);
		}
	}
}

void func_183(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_2 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_3 = 0;
}

void func_184(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_37 = 0;
}

int func_185(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return ((*Global_1900383)[iParam0 /*45*/])->f_37;
}

void func_186(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_37 = iParam1;
}

float func_187(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && bParam3)
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) && bParam3)
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false), bParam2);
}

void func_188(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
		return;
	}
	iVar1 = func_88(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	bVar2 = ENTITY::IS_ENTITY_DEAD(iVar1);
	bVar3 = false;
	if (iVar1 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(iVar0))
	{
		bVar3 = true;
	}
	vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar1, true, false) };
	func_315(iParam0);
	func_315(5);
	if (func_131(5))
	{
		func_202(5, 0);
	}
	func_203(5);
	func_116(5, iParam0);
	func_200(5, 1);
	func_199(5, iParam1);
	if (PLAYER::_0x46FA0AE18F4C7FA9(iVar0) == iVar1)
	{
		PLAYER::_0x8FBF9EDB378CCB8C(iVar0, 0);
	}
	if (PLAYER::_0xD3F7445CEA2E5035(iVar0) == iVar1)
	{
		PLAYER::_0x227B06324234FB09(iVar0, 0);
	}
	if (bVar2)
	{
		if (bVar3)
		{
			PED::_0x6569F31A01B4C097(iVar1, 0, 1);
			PED::_0x6569F31A01B4C097(iVar1, 1, 1);
			DECORATOR::_DECOR_SET_STRING(iVar1, "loot_long_custom_anim_data_set", "DEAD_HORSE_SADDLE_SWAP_LONG_LOOT_ANIM_DATA");
		}
	}
	if (iParam1 == 2)
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
	}
	if (bVar3)
	{
		if (func_137(vVar4))
		{
			func_217(-1);
			func_214(3);
			func_215(0f, 0f, 0f);
			func_218(-15);
		}
		else
		{
			func_217(5);
			func_214(0);
			func_215(vVar4);
			func_218(func_221());
		}
	}
	func_348(iParam0);
	func_522(iParam0);
	func_203(iParam0);
	func_404();
}

int func_189(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return ((*Global_1900383)[iParam0 /*45*/])->f_35;
}

float func_190(int iParam0)
{
	var uVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0f;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0f;
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return 0f;
	}
	uVar0 = PED::_0x42688E94E96FD9B4(iParam0, 3, 0);
	return uVar0;
}

int func_191(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return ((*Global_1900383)[iParam0 /*45*/])->f_36;
}

void func_192(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_35 = iParam1;
}

void func_193(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_36 = iParam1;
}

int func_194(int iParam0)
{
	int iVar0;

	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	if (iVar0 != 0)
	{
		return iVar0 == (Global_1905944->f_22[iParam0 /*9*/])->f_1;
	}
	return 0;
}

void func_195(int iParam0)
{
	if (!func_194(iParam0))
	{
		return;
	}
	func_523(1);
}

bool func_196(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_524(iParam0, &iVar0, &iVar1);
	iVar2 = Global_1905944[iVar0];
	return MISC::IS_BIT_SET(iVar2, iVar1);
}

void func_197(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = Global_1905944[iVar1];
	MISC::CLEAR_BIT(&uVar3, iVar2);
	(*Global_1905944)[iVar1] = uVar3;
}

int func_198(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_11;
}

void func_199(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_11 = iParam1;
}

void func_200(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_14 = iParam1;
}

int func_201()
{
	return Global_40.f_1095.f_3054;
}

void func_202(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_450(iParam0);
	if (func_72(iParam0))
	{
		iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (func_181(iParam0) != iVar0)
		{
			return;
		}
	}
	if (!func_71(iParam0))
	{
		return;
	}
	iVar1 = func_88(iParam0);
	bVar2 = false;
	if (!ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		bVar2 = true;
	}
	func_315(iParam0);
	func_386(iParam0);
	func_473(iVar1);
	if (!ENTITY::_0x88AD6CC10D8D35B2(iVar1))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
	}
	if (func_320(iVar1))
	{
		PHYSICS::_0x0348469DAA17576C(iVar1);
	}
	if (bVar2)
	{
		TASK::TASK_SMART_FLEE_PED(iVar1, Global_35, 500f, -1, 0, 1f, 0);
		PED::SET_PED_KEEP_TASK(iVar1, true);
	}
	iVar3 = PLAYER::PLAYER_ID();
	if (PLAYER::IS_PLAYER_DEAD(iVar3))
	{
	}
	if (iParam0 == 0)
	{
		PLAYER::_0x8FBF9EDB378CCB8C(iVar3, 0);
	}
	else if (iParam0 == 1)
	{
		PLAYER::_0x227B06324234FB09(iVar3, 0);
	}
	PED::_0xBCC76708E5677E1D(iVar1, 1);
	if (bVar2)
	{
		if (bParam1)
		{
			FLOCK::_0xAEB97D84CDF3C00B(iVar1, 1);
		}
		PED::_0x329772C47DBB2FBC(iVar1);
	}
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
	iVar4 = ENTITY::GET_ENTITY_MODEL(iVar1);
	if (STREAMING::IS_MODEL_VALID(iVar4))
	{
		if (PED::_0xAA9F048DCF69B6DC(iVar4))
		{
			if (!func_208(iVar4))
			{
				PED::SET_PED_MODEL_IS_SUPPRESSED(iVar4, false);
			}
		}
	}
	func_203(iParam0);
}

void func_203(int iParam0)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	StringCopy(Global_40.f_1095.f_1[iParam0 /*436*/], "", 64);
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_8 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_9 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_10 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_11 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_12 = -1;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_13 = -15;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_14 = 0;
	func_525(&Var0);
	func_526(iParam0, Var0);
	func_527(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_15));
	func_528(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_298));
	func_529(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_356));
	func_530(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_531(iVar2, (Global_40.f_1095.f_1[iParam0 /*436*/])->f_398[iVar2 /*4*/]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_532(iVar3, (Global_40.f_1095.f_1[iParam0 /*436*/])->f_407[iVar3 /*4*/]);
		iVar3++;
	}
	func_533(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_420));
	func_534(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_422));
	func_535(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_425));
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_427 = { 0f, 0f, 0f };
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_430 = 0f;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_431 = -1;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_432 = -1;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_433 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_434 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_435 = 0;
	(*Global_1900383)[iParam0 /*45*/] = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_1 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_2 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_3 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_19 = { 0f, 0f, 0f };
	((*Global_1900383)[iParam0 /*45*/])->f_22 = 0f;
	((*Global_1900383)[iParam0 /*45*/])->f_23 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_24 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_25 = 0;
	if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_26));
	}
	((*Global_1900383)[iParam0 /*45*/])->f_26 = 0;
	if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
	{
		MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
	}
	((*Global_1900383)[iParam0 /*45*/])->f_27 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_28 = { 0f, 0f, 0f };
	((*Global_1900383)[iParam0 /*45*/])->f_31 = { 0f, 0f, 0f };
	((*Global_1900383)[iParam0 /*45*/])->f_34 = 0f;
	((*Global_1900383)[iParam0 /*45*/])->f_35 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_36 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_37 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_38 = { 0f, 0f, 0f };
	((*Global_1900383)[iParam0 /*45*/])->f_41 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_42 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_43 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_44 = -1;
}

void func_204(int iParam0)
{
	if (!func_451(iParam0))
	{
		return;
	}
	func_536(iParam0);
	func_537(iParam0);
}

bool func_205(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_2() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_206(int iParam0)
{
	Global_40.f_1095.f_3135.f_4 = iParam0;
}

int func_207(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_9;
}

int func_208(int iParam0)
{
	if (!func_538(iParam0))
	{
		return 0;
	}
	if (!func_539())
	{
		return 1;
	}
	return 0;
}

void func_209(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<29> Var2;

	if (func_84(iParam0) == 0)
	{
		if (func_540(iParam0))
		{
			func_541(iParam0);
		}
		return;
	}
	if (!func_540(iParam0))
	{
		iVar0 = func_207(iParam0);
		iVar1 = func_542(iVar0);
		func_543(iParam0, iVar1);
	}
	Var2.f_9 = -1591664384;
	Var2.f_14 = func_207(iParam0);
	Var2.f_15 = func_445(iParam0);
	Var2.f_16 = { func_311(iParam0) };
	Var2.f_24 = Var2.f_24;
	Var2.f_26 = BUILTIN::FLOOR(func_544(iParam0));
	Var2.f_25 = BUILTIN::FLOOR(func_367(iParam0));
	Var2.f_27 = func_437(iParam0, 0);
	Var2.f_28 = func_437(iParam0, 1);
	func_545(iParam0, &Var2);
}

int func_210()
{
	int iVar0;

	iVar0 = func_211();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_211()
{
	return Global_1900383->f_393;
}

bool func_212(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319->f_17370;
	}
	return (Global_1914319->f_17370 || Global_1914319->f_18996.f_1);
}

int func_213()
{
	return Global_40.f_1095.f_3054.f_1;
}

void func_214(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

void func_215(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

Vector3 func_216()
{
	return Global_40.f_1095.f_3054.f_77;
}

void func_217(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_218(int iParam0)
{
	Global_40.f_1095.f_3054.f_2 = iParam0;
}

int func_219(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	if (func_210())
	{
		func_546();
		func_444();
	}
	iVar0 = func_75();
	if (!STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		STREAMING::REQUEST_MODEL(iVar0, false);
		return 0;
	}
	iVar1 = OBJECT::CREATE_OBJECT(iVar0, vParam0, true, true, false, false, true);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	func_466(iVar1);
	bVar2 = false;
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
	{
		bVar2 = true;
	}
	bVar3 = false;
	if (ENTITY::_0x88AD6CC10D8D35B2(iVar1))
	{
		bVar3 = true;
	}
	if (!bVar2 || !bVar3)
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
	}
	ENTITY::SET_ENTITY_HEADING(iVar1, fParam3);
	if (bParam4)
	{
		ENTITY::_0x9587913B9E772D29(iVar1, 0);
	}
	TASK::TASK_CARRIABLE(iVar1, 822715387, 0, 0, 0);
	return 1;
}

int func_220()
{
	return Global_40.f_1095.f_3054.f_2;
}

int func_221()
{
	return &Global_1899515;
}

void func_222()
{
	Global_1900383->f_437 = 0;
	Global_1900383->f_437.f_1 = 0;
	Global_1900383->f_437.f_2 = 0;
}

int func_223(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (func_320(Global_1900383[iParam0 /*45*/]))
	{
		return 1;
	}
	return 0;
}

int func_224(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_435;
}

bool func_225()
{
	return Global_1900383->f_437.f_1;
}

var func_226()
{
	return Global_1900383->f_437;
}

void func_227(int iParam0)
{
	Global_1900383->f_437 = iParam0;
}

void func_228(int iParam0)
{
	Global_1900383->f_437.f_1 = iParam0;
}

int func_229(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (iParam1 != -1)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(((*Global_1888801)[iParam1 /*35*/])->f_4))
		{
			return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, ((*Global_1888801)[iParam1 /*35*/])->f_4, true, 0);
		}
		else
		{
			return 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < Global_1894899->f_161)
	{
		iVar0 = &Global_1894899->f_10[iVar1];
		if (!VOLUME::_DOES_VOLUME_EXIST(((*Global_1888801)[iVar0 /*35*/])->f_4))
		{
		}
		else if (ENTITY::IS_ENTITY_IN_VOLUME(iParam0, ((*Global_1888801)[iVar0 /*35*/])->f_4, true, 0))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

var func_230()
{
	return Global_1900383->f_437.f_2;
}

void func_231(int iParam0)
{
	Global_1900383->f_437.f_2 = iParam0;
}

bool func_232()
{
	return Global_1894899 & 2 != 0;
}

int func_233()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_35, 440, true))
	{
		return 0;
	}
	return 1;
}

void func_234(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 440, !bParam0);
}

int func_235()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_35, 439, true))
	{
		return 0;
	}
	return 1;
}

void func_236(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 439, !bParam0);
}

int func_237()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_35, 438, true))
	{
		return 0;
	}
	return 1;
}

void func_238(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 438, !bParam0);
}

int func_239(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return ((*Global_1900383)[iParam0 /*45*/])->f_43;
}

int func_240(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (((*Global_1900383)[iParam0 /*45*/])->f_42 == 0)
	{
		return 0;
	}
	return 1;
}

void func_241(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_42 = iParam1;
}

int func_242(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return ((*Global_1900383)[iParam0 /*45*/])->f_42;
}

void func_243(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_2() != -1)
	{
		return;
	}
	if ((Global_36615 && func_547(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_548(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_549(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (&Global_1347477->f_155[iVar2 /*6*/] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			func_550(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_549(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

void func_244(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_43++;
}

Vector3 func_245(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f, 0f, 0f;
	}
	return ((*Global_1900383)[iParam0 /*45*/])->f_28;
}

Vector3 func_246(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f, 0f, 0f;
	}
	return ((*Global_1900383)[iParam0 /*45*/])->f_31;
}

float func_247(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return ((*Global_1900383)[iParam0 /*45*/])->f_34;
}

void func_248(int iParam0, vector3 vParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_31 = { vParam1 };
}

void func_249(int iParam0, float fParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_34 = fParam1;
}

void func_250(struct<7> Param0)
{
	int iVar0;

	if (!Param0.f_5)
	{
		return;
	}
	if (func_205(34))
	{
		return;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(Param0.f_6);
	if (func_392(iVar0) || func_393(iVar0))
	{
		return;
	}
	if (!TASK::IS_PED_SPRINTING(Param0.f_6))
	{
		return;
	}
	if (PED::IS_PED_SWIMMING(Global_35))
	{
		return;
	}
	if (PED::IS_PED_SWIMMING(Param0.f_6))
	{
		return;
	}
	if (func_280())
	{
		func_283(34, 0);
	}
}

void func_251(struct<7> Param0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;

	if (!Param0.f_5)
	{
		return;
	}
	if (func_551() >= 3)
	{
		return;
	}
	if (func_196(36) || func_194(36))
	{
		return;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = func_552();
	if (iVar1 > 0)
	{
		if (iVar1 + 5000 < iVar0)
		{
			func_553();
		}
		else
		{
			return;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Param0.f_6))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Param0.f_6))
	{
		return;
	}
	if (PED::IS_PED_INJURED(Param0.f_6))
	{
		return;
	}
	bVar2 = false;
	if (TASK::IS_PED_SPRINTING(Param0.f_6))
	{
		bVar2 = true;
	}
	if (TASK::IS_PED_RUNNING(Param0.f_6))
	{
		bVar2 = true;
	}
	if (!bVar2)
	{
		return;
	}
	if (PED::IS_PED_SWIMMING(Global_35))
	{
		return;
	}
	if (PED::IS_PED_SWIMMING(Param0.f_6))
	{
		return;
	}
	fVar3 = PED::_0x22F2A386D43048A9(Param0.f_6);
	if (fVar3 > 0.15f)
	{
		return;
	}
	if (func_196(34))
	{
		func_197(34);
	}
	if (func_194(34))
	{
		func_195(34);
	}
	if (func_196(35))
	{
		func_197(35);
	}
	if (func_194(35))
	{
		func_195(35);
	}
	if (func_280())
	{
		func_283(36, 1);
		func_554();
		func_555(MISC::GET_GAME_TIMER());
	}
}

void func_252(struct<7> Param0, struct<11> Param7, var uParam18)
{
	bool bVar0;

	if (!Param7.f_2)
	{
		return;
	}
	if (!Param0.f_5)
	{
		return;
	}
	if (func_205(45))
	{
		return;
	}
	if (func_94() && !func_95(4))
	{
		return;
	}
	bVar0 = false;
	if ((func_140(33) && func_140(34)) && func_140(35))
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		return;
	}
	if (!func_388(Param0.f_6))
	{
		return;
	}
	if (!Param7.f_10)
	{
		return;
	}
	if (func_115(7) == 0)
	{
		return;
	}
	if (func_280())
	{
		func_283(45, 0);
	}
}

void func_253()
{
	int iVar0;

	if (!func_556())
	{
		return;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	if (func_557() < iVar0)
	{
		func_283(59, 0);
		func_558(0);
		func_559();
	}
}

void func_254(struct<4> Param0, var uParam4, var uParam5, var uParam6, vector3 vParam7, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, vector3 vParam19, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	struct<5> Var0;
	int iVar12;

	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	iVar12 = -1;
	if (vParam7.z)
	{
		iVar12 = 0;
		MISC::_COPY_MEMORY(&Var0, &vParam7, 12);
	}
	else if (vParam19.z)
	{
		iVar12 = 1;
		MISC::_COPY_MEMORY(&Var0, &vParam19, 12);
	}
	if (!func_71(iVar12))
	{
		return;
	}
	if (!Var0.f_1)
	{
		return;
	}
	if (!Var0.f_2)
	{
		return;
	}
	if (!Var0.f_4)
	{
		if (func_194(56))
		{
			func_195(56);
		}
		if (func_196(56))
		{
			func_197(56);
		}
		if (func_194(57))
		{
			func_195(57);
		}
		if (func_196(57))
		{
			func_197(57);
		}
		return;
	}
	if (TASK::_0x3F8387DB1B9F31B7(Var0, 0) && !func_505())
	{
		if (!func_205(57) && !func_205(58))
		{
			if (func_194(56))
			{
				func_195(56);
			}
			if (func_196(56))
			{
				func_197(56);
			}
			if (func_280())
			{
				if (func_560(-1795542128 /* GXTEntry: "Special Horse Reviver" */))
				{
					func_283(57, 0);
				}
				else
				{
					func_283(58, 0);
				}
			}
		}
	}
}

void func_255(struct<4> Param0, var uParam4, var uParam5, var uParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	iVar0 = func_561();
	bVar1 = false;
	iVar2 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		bVar1 = true;
		iVar2 = PED::_0x454AD4DA6C41B5BD(iVar0);
	}
	iVar3 = func_562();
	switch (iVar3)
	{
		case 0:
			func_563(1);
		case 1:
			if (bVar1)
			{
				func_564(iVar0);
				func_563(2);
			}
			break;
		case 2:
			switch (iVar2)
			{
				case 1:
					func_563(3);
					break;
				case 2:
				case 3:
					func_563(5);
					break;
				case 7:
				case 8:
				case 9:
					func_563(7);
					break;
				case 4:
				case 5:
					func_563(9);
					break;
				case 6:
					func_563(11);
					break;
				default:
					if (!bVar1)
					{
						func_563(11);
					}
					break;
			}
			break;
		case 3:
			func_565();
			if (func_566(iVar0))
			{
				if (func_280())
				{
					func_283(48, 1);
				}
			}
			else if (func_280())
			{
				func_283(47, 1);
			}
			func_563(4);
			break;
		case 4:
			switch (iVar2)
			{
				case 1:
					if (func_194(47))
					{
						if (func_566(iVar0))
						{
							func_195(47);
							func_563(3);
						}
					}
					if (!bVar1)
					{
						func_563(11);
					}
					break;
				case 2:
				case 3:
					func_563(5);
					break;
				case 7:
				case 8:
				case 9:
					func_563(7);
					break;
				case 4:
				case 5:
					func_563(9);
					break;
				case 6:
					func_563(11);
					break;
				default:
					if (!bVar1)
					{
						func_563(11);
					}
					break;
			}
			break;
		case 5:
			func_565();
			if (func_280())
			{
				func_283(49, 1);
			}
			func_563(6);
			break;
		case 6:
			switch (iVar2)
			{
				case 2:
				case 3:
					break;
				case 7:
				case 8:
				case 9:
					func_563(7);
					break;
				case 4:
				case 5:
					func_563(9);
					break;
				case 6:
					func_563(11);
					break;
				default:
					if (!bVar1)
					{
						func_563(11);
					}
					break;
			}
			break;
		case 7:
			func_565();
			if (func_280())
			{
				func_283(50, 1);
			}
			func_567(MISC::GET_GAME_TIMER());
			func_563(8);
			break;
		case 8:
			if (func_568() + 5000 < MISC::GET_GAME_TIMER())
			{
				func_563(6);
			}
			break;
		case 9:
			func_565();
			if (func_280())
			{
				func_283(51, 1);
			}
			func_563(10);
			break;
		case 10:
			switch (iVar2)
			{
				case 2:
				case 3:
					func_563(5);
					break;
				case 7:
				case 8:
				case 9:
					func_563(7);
					break;
				case 4:
				case 5:
					break;
				case 6:
					func_563(11);
					break;
				default:
					if (!bVar1)
					{
						func_563(11);
					}
					break;
			}
			break;
		case 11:
			func_569();
			func_565();
			func_563(0);
			break;
	}
}

void func_256(struct<6> Param0, var uParam6, struct<11> Param7, var uParam18, struct<11> Param19, var uParam30)
{
	struct<5> Var0;
	int iVar12;
	int iVar13;
	bool bVar14;
	int iVar15;
	bool bVar16;

	if (!func_570())
	{
		return;
	}
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	if (!Param0.f_5)
	{
		return;
	}
	if (Param7.f_10)
	{
		iVar12 = 0;
		MISC::_COPY_MEMORY(&Var0, &Param7, 12);
	}
	else if (Param19.f_10)
	{
		iVar12 = 1;
		MISC::_COPY_MEMORY(&Var0, &Param19, 12);
	}
	else
	{
		return;
	}
	if (!Var0.f_1)
	{
		return;
	}
	if (!Var0.f_2)
	{
		return;
	}
	if (Var0.f_3)
	{
		return;
	}
	if (Var0.f_4)
	{
		return;
	}
	iVar13 = func_437(iVar12, 0);
	bVar14 = false;
	iVar15 = -1;
	if (!bVar14)
	{
		if (iVar13 > 50)
		{
			if (func_571() < 3)
			{
				iVar15 = 26;
				bVar14 = true;
			}
		}
	}
	bVar16 = false;
	if (func_572() + 2500 < MISC::GET_GAME_TIMER())
	{
		bVar16 = true;
	}
	if (bVar16)
	{
		if (!bVar14)
		{
			func_573(0);
			func_574();
			return;
		}
	}
	if (!bVar16)
	{
		return;
	}
	if (!func_280())
	{
		return;
	}
	func_283(iVar15, 1);
	func_575(MISC::GET_GAME_TIMER());
	switch (iVar15)
	{
		case 26:
			func_576();
			break;
		default:
			break;
	}
	func_573(0);
	func_574();
}

void func_257(struct<6> Param0, var uParam6, struct<11> Param7, var uParam18, struct<11> Param19, var uParam30)
{
	struct<5> Var0;
	int iVar12;
	int iVar13;
	int iVar14;
	bool bVar15;
	int iVar16;
	bool bVar17;

	if (!func_577())
	{
		return;
	}
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	if (!Param0.f_5)
	{
		return;
	}
	if (Param7.f_10)
	{
		iVar12 = 0;
		MISC::_COPY_MEMORY(&Var0, &Param7, 12);
	}
	else if (Param19.f_10)
	{
		iVar12 = 1;
		MISC::_COPY_MEMORY(&Var0, &Param19, 12);
	}
	else
	{
		return;
	}
	if (!Var0.f_1)
	{
		return;
	}
	if (!Var0.f_2)
	{
		return;
	}
	if (Var0.f_3)
	{
		return;
	}
	if (Var0.f_4)
	{
		return;
	}
	iVar13 = func_578(iVar12, 0);
	iVar14 = func_578(iVar12, 1);
	bVar15 = false;
	iVar16 = -1;
	if (!bVar15)
	{
		if (func_490(32) < 3)
		{
			if (iVar13 == 0 && iVar14 == 0)
			{
				iVar16 = 32;
				bVar15 = true;
			}
		}
	}
	if (!bVar15)
	{
		if (iVar13 == 0)
		{
			if (func_490(30) < 3)
			{
				iVar16 = 30;
				bVar15 = true;
			}
		}
	}
	if (!bVar15)
	{
		if (iVar14 == 0)
		{
			if (func_490(31) < 3)
			{
				if (!PED::IS_PED_SWIMMING(Var0))
				{
					iVar16 = 31;
					bVar15 = true;
				}
			}
		}
	}
	if (!bVar15)
	{
		if (iVar13 < 50)
		{
			if (func_490(28) < 1)
			{
				iVar16 = 28;
				bVar15 = true;
			}
		}
	}
	if (!bVar15)
	{
		if (iVar14 < 50)
		{
			if (func_490(29) < 1)
			{
				iVar16 = 29;
				bVar15 = true;
			}
		}
	}
	if (!bVar15)
	{
		if (iVar14 == 0)
		{
			if (func_490(33) < 3)
			{
				if (PED::IS_PED_SWIMMING(Var0))
				{
					iVar16 = 33;
					bVar15 = true;
				}
			}
		}
	}
	bVar17 = false;
	if (func_579() + 2500 < MISC::GET_GAME_TIMER())
	{
		bVar17 = true;
	}
	if (bVar17)
	{
		if (!bVar15)
		{
			func_580(0);
			func_581();
			return;
		}
	}
	if (!bVar17)
	{
		return;
	}
	if (!func_280())
	{
		return;
	}
	func_283(iVar16, 1);
	func_575(MISC::GET_GAME_TIMER());
	func_580(0);
	func_581();
}

void func_258()
{
	int iVar0[6];
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;

	if (func_582() == 0)
	{
		return;
	}
	iVar7 = 0;
	iVar0[iVar7] = 32;
	iVar7++;
	iVar0[iVar7] = 30;
	iVar7++;
	iVar0[iVar7] = 31;
	iVar7++;
	iVar0[iVar7] = 28;
	iVar7++;
	iVar0[iVar7] = 29;
	iVar7++;
	iVar0[iVar7] = 43;
	iVar7++;
	bVar8 = false;
	iVar9 = 0;
	while (iVar9 < iVar7)
	{
		if (bVar8)
		{
		}
		else if (func_194(&(iVar0[iVar9])))
		{
			bVar8 = true;
		}
		iVar9++;
	}
	if (bVar8)
	{
		if (!func_583())
		{
			bVar10 = false;
			bVar11 = false;
			bVar12 = false;
			bVar13 = false;
			if (func_194(32))
			{
				bVar12 = true;
				bVar13 = true;
			}
			if (func_194(30))
			{
				bVar12 = true;
			}
			if (func_194(31))
			{
				bVar13 = true;
			}
			if (func_194(28))
			{
				bVar12 = true;
			}
			if (func_194(29))
			{
				bVar13 = true;
			}
			if (func_194(43))
			{
				bVar12 = true;
				bVar13 = true;
			}
			if (bVar10)
			{
				UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 3);
			}
			if (bVar11)
			{
				UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 3);
			}
			if (bVar12)
			{
				UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 3);
			}
			if (bVar13)
			{
				UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 3);
			}
			func_584(1);
		}
	}
	else if (func_583())
	{
		UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
		UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
		UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
		UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
		func_584(0);
		func_585();
	}
}

void func_259(struct<5> Param0, var uParam5, var uParam6)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;

	if (!func_586())
	{
		return;
	}
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	if (func_205(55))
	{
		return;
	}
	if (!func_280())
	{
		return;
	}
	if (func_94() && !func_95(4))
	{
		return;
	}
	func_206(0);
	if (func_84(0) == 1)
	{
		return;
	}
	func_283(55, 0);
	iVar0 = func_587(9, 1, 1, 0);
	if (iVar0 != 76)
	{
		iVar0 = func_587(9, 1, 1, 1);
	}
	if (!func_588(iVar0))
	{
		return;
	}
	vVar1 = { func_589(iVar0) };
	if (func_137(vVar1))
	{
		return;
	}
	iVar4 = MAP::_BLIP_ADD_FOR_COORD(168093330, vVar1);
	MAP::SET_BLIP_SPRITE(iVar4, 1938782895, true);
	MAP::_BLIP_SET_MODIFIER(iVar4, 580546400);
	MAP::_BLIP_SET_MODIFIER(iVar4, 847579139);
	func_590(&iVar4);
}

void func_260()
{
	int iVar0;

	iVar0 = func_591();
	if (!MAP::DOES_BLIP_EXIST(iVar0))
	{
		return;
	}
	if (func_196(55))
	{
		return;
	}
	if (func_194(55))
	{
		return;
	}
	MAP::REMOVE_BLIP(&iVar0);
}

void func_261(struct<4> Param0, var uParam4, var uParam5, var uParam6)
{
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (func_94() && !func_140(42))
	{
		return;
	}
	if (!func_592())
	{
		return;
	}
	if (func_205(65))
	{
		return;
	}
	if (func_593(Global_35))
	{
		return;
	}
	if (func_594())
	{
		return;
	}
	if (!func_280())
	{
		return;
	}
	func_283(65, 0);
}

void func_262(struct<4> Param0, var uParam4, var uParam5, var uParam6)
{
	int iVar0;
	int iVar1;

	if (!Param0.f_1)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (!Param0.f_2)
	{
		return;
	}
	if (func_94() && !func_140(42))
	{
		return;
	}
	if (func_94() && func_134() == 8)
	{
		return;
	}
	if (!func_210())
	{
		return;
	}
	if (func_595(7))
	{
		func_596();
		return;
	}
	if (func_213() == 3)
	{
		return;
	}
	if (func_593(Global_35))
	{
		return;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = func_597();
	if (iVar1 == 0)
	{
		func_598(MISC::GET_GAME_TIMER());
		return;
	}
	if (iVar1 + 10000 > iVar0)
	{
		return;
	}
	if (func_187(Global_35, func_211(), 1, 1) < 100f)
	{
		return;
	}
	if (func_205(64))
	{
		if ((iVar1 + 600000) > iVar0)
		{
			return;
		}
	}
	func_283(64, 1);
	func_598(MISC::GET_GAME_TIMER());
}

void func_263(struct<7> Param0, int iParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!Param0.f_5)
	{
		return;
	}
	iVar0 = func_490(66);
	if (iVar0 >= 3)
	{
		return;
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(Param0.f_6);
	if (func_392(iVar1) || func_393(iVar1))
	{
		return;
	}
	if (!TASK::IS_PED_SPRINTING(Param0.f_6))
	{
		return;
	}
	if (PED::IS_PED_SWIMMING(Global_35))
	{
		return;
	}
	if (PED::IS_PED_SWIMMING(Param0.f_6))
	{
		return;
	}
	if (!PED::_IS_PED_CARRYING(iParam7))
	{
		return;
	}
	if (!PED::_0x608BC6A6AACD5036(&uVar2, iParam7, 4, 0))
	{
		return;
	}
	if (func_599() == iParam7)
	{
		return;
	}
	if (func_280())
	{
		func_600(iParam7);
		func_283(66, 0);
	}
}

void func_264(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<11> Param7, var uParam18, struct<11> Param19, var uParam30)
{
	int iVar0;
	int iVar1;

	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (!Param7.f_10 && !Param19.f_10)
	{
		if (func_601())
		{
			func_602(0);
		}
		return;
	}
	if (func_603() < 2)
	{
		return;
	}
	if (Param7.f_10)
	{
		iVar0 = 0;
	}
	else if (Param19.f_10)
	{
		iVar0 = 1;
	}
	if (func_115(iVar0) >= 2)
	{
		return;
	}
	iVar1 = func_490(46);
	if (iVar1 >= 1)
	{
		return;
	}
	if (func_601())
	{
		return;
	}
	func_602(1);
	func_604();
	if (func_605() <= 1)
	{
		return;
	}
	if (!func_280())
	{
		return;
	}
	func_283(46, 1);
}

void func_265(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	int iVar0;
	int iVar1;

	if (!Param0.f_1)
	{
		return;
	}
	if (!func_593(Global_35))
	{
		return;
	}
	if (!PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar0, 1, 0))
	{
		return;
	}
	if (!func_606(iVar0))
	{
		return;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_607(iVar1))
	{
		return;
	}
	if (func_280())
	{
		func_283(67, 1);
	}
}

void func_266()
{
	int iVar0;

	if (func_608(0, 0, 1))
	{
		return;
	}
	iVar0 = func_609();
	if (iVar0 == 2)
	{
		if (!func_610())
		{
			if (!func_205(621))
			{
				func_283(621, 0);
			}
		}
	}
	if (iVar0 == 3)
	{
		if (!func_610())
		{
			if (!func_205(622))
			{
				func_283(622, 0);
			}
		}
	}
	if (iVar0 == 5)
	{
		if (!func_610())
		{
			if (!func_205(623))
			{
				func_283(623, 0);
			}
		}
	}
	if (iVar0 == 7)
	{
		if (!func_610())
		{
			if (!func_205(624))
			{
				func_283(624, 0);
			}
		}
	}
}

bool func_267()
{
	return Global_1894899 & 4 != 0;
}

int func_268(int iParam0)
{
	return &(Global_1898164->f_1[iParam0 /*5*/]);
}

bool func_269(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_270(int iParam0)
{
	if (!func_269(iParam0))
	{
		return 0;
	}
	return func_612(func_611(iParam0));
}

int func_271()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;

	iVar0 = PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	iVar1 = 0;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (PED::GET_MOUNT(Global_35) == iVar0)
		{
			iVar1 = 1;
		}
	}
	iVar2 = 0;
	iVar3 = WEAPON::_0xAFFD0CCF31F469B8(iVar0);
	if (func_284(iVar3, 0))
	{
		iVar2 = 1;
	}
	bVar4 = false;
	if (func_232() || func_412())
	{
		bVar4 = true;
	}
	bVar5 = false;
	if (Global_1935630->f_24 || func_613(1, 0, 1))
	{
		bVar5 = true;
	}
	if (iVar1 || iVar2)
	{
		if (bVar4 && !bVar5)
		{
			return 1;
		}
	}
	return 0;
}

void func_272(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		uParam0->f_10[iVar0 /*8*/] = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_1 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_2 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_3 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_4 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_5 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_6 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_7 = 0;
		iVar0++;
	}
	uParam0->f_91 = 0;
	uParam0->f_92 = 0;
	uParam0->f_93 = 0;
}

int func_273(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 5;
		case 2:
			return 6;
	}
	return 0;
}

void func_274(var uParam0, var uParam1)
{
	MISC::_COPY_MEMORY(uParam1, uParam0, 94);
}

void func_275(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (!func_71(iParam0))
	{
		return;
	}
	iVar0 = func_88(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam1))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iParam1))
		{
			return;
		}
	}
	if (func_614())
	{
		if (PERSISTENCE::_0x5A79220F6D38D7C3(iParam1) != 1E+08f)
		{
			PERSISTENCE::_0xDC0A1F0ECEC9F0C0(iParam1, 1E+08f);
		}
		return;
	}
	bVar1 = false;
	if (func_167(0) == 1 || func_167(0) == 8)
	{
		bVar1 = true;
	}
	if (bVar1 && func_615(iVar0, 0, 1) < 5f)
	{
		if (PERSISTENCE::_0x5A79220F6D38D7C3(iParam1) != 1E+08f)
		{
			PERSISTENCE::_0xDC0A1F0ECEC9F0C0(iParam1, 1E+08f);
		}
		return;
	}
	if (func_616())
	{
		if (PERSISTENCE::_0x5A79220F6D38D7C3(iParam1) != 1.2f)
		{
			PERSISTENCE::_0xDC0A1F0ECEC9F0C0(iParam1, 1.2f);
		}
		return;
	}
	if (PERSISTENCE::_0x5A79220F6D38D7C3(iParam1) != 1f)
	{
		PERSISTENCE::_0xDC0A1F0ECEC9F0C0(iParam1, 1f);
	}
}

void func_276(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4)
{
	*iParam3 = PED::_GET_PED_DAMAGE(iParam0);
	*uParam2 = FLOCK::_0xF8B48A361DC388AE(iParam0);
	if (*uParam2 == 2)
	{
		*iParam1 = 4;
	}
	else if (*uParam2 == 1)
	{
		*iParam1 = 3;
	}
	else
	{
		*uParam4 = PED::_GET_PED_QUALITY(iParam0);
		switch (*uParam4)
		{
			case 0:
				*iParam1 = 0;
				break;
			case 1:
				*iParam1 = 1;
				break;
			case -1:
			case 2:
				*iParam1 = 2;
				break;
		}
	}
}

bool func_277(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;

	iVar0 = iParam3;
	iVar1 = iParam2;
	if (iVar0 < iVar1)
	{
		iParam2 = iVar0;
	}
	uVar2 = PED::_0x9E7738B291706746(iParam0, iParam1, iParam2);
	return uVar2;
}

void func_278(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_431(iParam0, 606799272))
		{
			func_617(iParam0, iParam1);
		}
		if (func_431(iParam0, -1112814642) && func_431(iParam0, -1697809989))
		{
			func_618(iParam0, iParam1, 1, 0);
		}
	}
}

int func_279(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (bParam2)
			{
				return (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true) && PED::GET_MOUNT(iParam0) == iParam1);
			}
			else
			{
				return (PED::IS_PED_ON_MOUNT(iParam0) && PED::GET_MOUNT(iParam0) == iParam1);
			}
		}
	}
	return 0;
}

int func_280()
{
	if (!func_610() && func_619(1))
	{
		return 1;
	}
	return 0;
}

int func_281(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::_0x9A100F1CF4546629(iParam0) && !ENTITY::_0xC346A546612C49A9(iParam0))
	{
		return 0;
	}
	func_276(iParam0, &iVar1, &uVar2, &iVar0, &uVar3);
	func_277(&iVar4, iParam0, iVar0, iVar1);
	if (iVar4 != 0)
	{
		return iVar4;
	}
	switch (iVar0)
	{
		case 2:
			return -776155824 /* GXTEntry: "Animal Carcass Perfect" */;
		case 1:
			return 1715058708 /* GXTEntry: "Animal Carcass Good Quality" */;
		case 0:
			return -45650221 /* GXTEntry: "Animal Carcass Poor" */;
		default:
			break;
	}
	return -45650221 /* GXTEntry: "Animal Carcass Poor" */;
}

int func_282(int iParam0, int iParam1)
{
	if (iParam1 == 101)
	{
		return func_620(iParam0);
	}
	if (func_621(iParam0, iParam1))
	{
		return 0;
	}
	return func_622(iParam0, iParam1);
}

void func_283(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_524(iParam0, &iVar0, &iVar1);
	if (!func_623(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_624(iVar0, iVar1);
}

bool func_284(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_285(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	iVar0 = INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iParam0);
	if (func_388(iParam0))
	{
		iVar1 = func_401(iParam0);
		if (func_284(iParam1, 0))
		{
			if (func_511(iParam1))
			{
				func_625(iVar1, iParam1, iParam2);
			}
		}
	}
	return func_626(iVar0, iParam1, iParam2, bParam3, iParam4);
}

int func_286(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	iVar0 = INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iParam0);
	if (ENTITY::_0x9A100F1CF4546629(iParam1) || ENTITY::_0xC346A546612C49A9(iParam1))
	{
		iVar1 = func_515(iParam1);
		if (!func_284(iVar1, 0))
		{
			iVar1 = func_510(iParam1);
		}
	}
	else
	{
		iVar1 = func_510(iParam1);
	}
	uVar2 = func_627(iVar0, iVar1, 1);
	return uVar2;
}

int func_287(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_422;
}

int func_288(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "StableOwnedHorse"))
	{
		return 1;
	}
	return 0;
}

int func_289(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_422.f_1;
}

void func_290(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	DECORATOR::DECOR_SET_INT(iParam0, "StableOwnedHorse", iParam1);
}

int func_291(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return -15;
	}
	if (iParam0 >= 7)
	{
		return -15;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_422.f_2;
}

void func_292(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_628(func_221(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_293(int iParam0)
{
	char* sVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	sVar0 = "StableOwnedHorse";
	if (DECORATOR::DECOR_EXIST_ON(iParam0, sVar0))
	{
		DECORATOR::DECOR_REMOVE(iParam0, sVar0);
	}
}

void func_294(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_534(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_422));
}

int func_295(int iParam0)
{
	int iVar0;

	if (!func_288(iParam0))
	{
		return -1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "StableOwnedHorse");
	return iVar0;
}

void func_296(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_422 = iParam1;
}

void func_297(int iParam0, var uParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_422.f_1 = uParam1;
}

void func_298(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_422.f_2 = iParam1;
}

int func_299(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = false;
	if (!func_71(iParam0))
	{
		bVar0 = true;
	}
	iVar1 = func_88(iParam0);
	if (!bVar0)
	{
		if (!func_518(iVar1, 0))
		{
			bVar0 = true;
		}
	}
	if (!bVar0)
	{
		iVar2 = func_629(iVar1, 0);
		if (!ENTITY::IS_ENTITY_A_PED(iVar2) && !ENTITY::_0x255B6DB4E3AD3C3E(iVar2))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		return 0;
	}
	return 1;
}

bool func_300(int iParam0)
{
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_425;
}

bool func_301(int iParam0)
{
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_425.f_1 != -15;
}

var func_302(int iParam0)
{
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_425.f_1;
}

int func_303(int iParam0, int iParam1)
{
	int iVar0;

	if (func_630(iParam0, iParam1, 1))
	{
		iVar0 = (func_631(iParam0) - func_631(iParam1));
	}
	else
	{
		iVar0 = (func_631(iParam1) - func_631(iParam0));
	}
	while (iVar0 < 0)
	{
		iVar0 += 24;
	}
	while (iVar0 > 23)
	{
		iVar0 = (iVar0 - 24);
	}
	return iVar0;
}

void func_304(int iParam0, int iParam1)
{
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_425 = iParam1;
}

void func_305(int iParam0, int iParam1)
{
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_425.f_1 = iParam1;
}

void func_306(int iParam0)
{
	func_632(Global_1900383->f_317.f_38[iParam0 /*3*/]);
}

void func_307(int iParam0)
{
	func_633(Global_1900383->f_317.f_38[iParam0 /*3*/]);
}

bool func_308(int iParam0)
{
	return func_634(Global_1900383->f_317.f_38[iParam0 /*3*/]);
}

bool func_309(int iParam0, float fParam1)
{
	return func_635(Global_1900383->f_317.f_38[iParam0 /*3*/], fParam1);
}

int func_310(int iParam0)
{
	switch (iParam0)
	{
		case -2063289686:
		case 549900435:
			return 1;
	}
	return 0;
}

struct<8> func_311(int iParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, "", 64);
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return cVar0;
	}
	if (iParam0 >= 7)
	{
		return cVar0;
	}
	return *(Global_40.f_1095.f_1[iParam0 /*436*/]);
}

char* func_312(int iParam0)
{
	switch (iParam0)
	{
		case 549900435:
			return "HORSE_NAME_BUELL_WARVETS";
		case -2063289686:
			return "HORSE_NAME_JOHN_ENDLESSSUMMER";
	}
	return "";
}

void func_313(int iParam0, struct<8> Param1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	*(Global_40.f_1095.f_1[iParam0 /*436*/]) = { Param1 };
}

void func_314(int iParam0)
{
	int iVar0;
	char* sVar1;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = Global_1900383[iParam0 /*45*/];
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
	}
	sVar1 = func_636(func_311(iParam0));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		PED::_SET_PED_PROMPT_NAME(iVar0, sVar1);
	}
}

void func_315(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_26));
	}
	((*Global_1900383)[iParam0 /*45*/])->f_25 = 0;
}

void func_316(var uParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(*uParam0, func_638(func_637(255), joaat("COLOR_PURE_WHITE")));
	}
	else if (func_639())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_640();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

void func_317(var uParam0, bool bParam1)
{
	char* sVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(*uParam0, func_638(func_637(255), joaat("COLOR_PURE_WHITE")));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_639())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_640())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (MISC::COMPARE_STRINGS(sVar0, "", false, -1) != 0)
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sVar0);
		}
	}
}

void func_318(var uParam0)
{
	MAP::_SET_BLIP_FLASH_STYLE(uParam0, -401963276);
	MAP::_SET_BLIP_FLASH_STYLE(uParam0, 231194138);
	MAP::_SET_BLIP_FLASH_STYLE(uParam0, -1012863186);
	MAP::_SET_BLIP_FLASH_STYLE(uParam0, -272772079);
	MAP::_SET_BLIP_FLASH_STYLE(uParam0, 1313031610);
	MAP::_SET_BLIP_FLASH_STYLE(uParam0, -1814032670);
	MAP::_SET_BLIP_FLASH_STYLE(uParam0, -1380599892);
	MAP::_SET_BLIP_FLASH_STYLE(uParam0, 430539302);
	MAP::_SET_BLIP_FLASH_STYLE(uParam0, -995247980);
	MAP::_SET_BLIP_FLASH_STYLE(uParam0, -25056193);
	MAP::_SET_BLIP_FLASH_STYLE(uParam0, -264630352);
}

void func_319(var uParam0)
{
	MAP::_SET_BLIP_FLASH_STYLE(uParam0, 673950256);
	MAP::_SET_BLIP_FLASH_STYLE(uParam0, 561559387);
	MAP::_SET_BLIP_FLASH_STYLE(uParam0, -201249929);
}

int func_320(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (PED::_IS_PED_USING_SCENARIO_HASH(iParam0, -1805387726))
	{
		return 1;
	}
	return 0;
}

int func_321(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (PED::_GET_CARRIER_AS_PED(iParam1) != iParam0)
	{
		return 0;
	}
	iVar0 = ENTITY::_0x61914209C36EFDDB(iParam1);
	if (iVar0 == 5)
	{
		return 1;
	}
	if (iVar0 == 7)
	{
		return 1;
	}
	return 0;
}

void func_322(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;

	if (PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	if (!func_71(iParam0))
	{
		return;
	}
	iVar0 = func_88(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return;
	}
	if (!func_140(40))
	{
		if (func_173(iParam0, 128))
		{
			return;
		}
		if (func_641(iParam1, &uVar1))
		{
			iVar2 = func_642(iParam1);
			if (func_643(iVar0, iParam1) != iVar2)
			{
				func_644(iVar0, iParam1, iVar2);
			}
		}
		return;
	}
	if (func_390(iVar0))
	{
		return;
	}
	iVar3 = MISC::GET_GAME_TIMER();
	fVar4 = func_645(iParam0, iParam1);
	if (fVar4 >= 30f)
	{
		func_646(iParam0, iParam1, iVar3);
		return;
	}
	iVar5 = func_578(iParam0, iParam1);
	func_647(iVar0, iParam0, iParam1);
	if (func_648(iParam0, iParam1) > 0f)
	{
		func_649(iParam0, iParam1);
	}
	else
	{
		func_650(iVar0, iParam0, iParam1);
		iVar6 = func_578(iParam0, iParam1);
		func_651(iParam0, iParam1, iVar5, iVar6);
	}
	func_646(iParam0, iParam1, iVar3);
}

void func_323(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;

	if (PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	if (!func_71(iParam0))
	{
		return;
	}
	iVar0 = func_88(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return;
	}
	if (!func_140(41))
	{
		if (func_652(iParam1, &iVar1))
		{
			iVar2 = func_653(iParam1);
			ATTRIBUTE::SET_ATTRIBUTE_BASE_RANK(iVar0, iVar1, iVar2);
		}
		return;
	}
	if (func_390(iVar0))
	{
		return;
	}
	iVar3 = MISC::GET_GAME_TIMER();
	fVar4 = func_654(iParam0, iParam1);
	if (fVar4 >= 30f)
	{
		func_655(iParam0, iParam1, iVar3);
		return;
	}
	iVar5 = func_437(iParam0, iParam1);
	func_656(iVar0, iParam0, iParam1);
	if (func_657(iParam0, iParam1) > 0f)
	{
		func_658(iParam0, iParam1);
	}
	else
	{
		func_659(iVar0, iParam0, iParam1);
		iVar6 = func_437(iParam0, iParam1);
		func_660(iParam0, iParam1, iVar5, iVar6);
	}
	func_655(iParam0, iParam1, iVar3);
}

void func_324(int iParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	struct<6> Var9;
	int iVar15;
	struct<2> Var16;
	struct<6> Var38;
	int iVar45;
	struct<2> Var46;
	struct<6> Var68;
	int iVar75;
	var uVar76;
	int iVar77;
	var uVar78;
	int iVar79;
	float fVar80;
	float fVar81;
	float fVar82;

	iParam0 = func_87(iParam0);
	if (iParam0 <= -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_71(iParam0))
	{
		return;
	}
	iVar0 = func_88(iParam0);
	fVar1 = 1f;
	fVar2 = 1f;
	fVar3 = 0f;
	fVar4 = 1f;
	fVar5 = 1f;
	fVar6 = 0f;
	iVar7 = 0;
	iVar8 = 0;
	if (iParam0 == func_201())
	{
		Var9 = { func_355() };
		iVar15 = Var9.f_1;
		if (func_284(iVar15, 0))
		{
			Var16.f_1 = 20;
			ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iVar15, &Var16);
			iVar45 = 0;
			while (iVar45 < Var16)
			{
				ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var16.f_1[iVar45]), &Var38);
				switch (Var38.f_1)
				{
					case 2086291460:
						iVar8 = (iVar8 + BUILTIN::FLOOR((IntToFloat(Var38.f_2) * 0.01f)));
						break;
					case -1620444701:
						iVar7 = (iVar7 + BUILTIN::FLOOR((IntToFloat(Var38.f_2) * 0.01f)));
						break;
					case -225223329:
						fVar3 = (fVar3 + (Var38.f_5 * 0.01f));
						break;
					case 1167068375:
						fVar6 = (fVar6 + (Var38.f_5 * 0.01f));
						break;
					case -845587290:
						fVar5 = (fVar5 - (Var38.f_5 * 0.01f));
						break;
					case 1605773431:
						fVar4 = (fVar4 + (Var38.f_5 * 0.01f));
						break;
				}
				iVar45++;
			}
		}
		iVar15 = Var9.f_3;
		if (func_284(iVar15, 0))
		{
			Var46.f_1 = 20;
			ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iVar15, &Var46);
			iVar75 = 0;
			while (iVar75 < Var46)
			{
				ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var46.f_1[iVar75]), &Var68);
				switch (Var68.f_1)
				{
					case 2086291460:
						iVar8 = (iVar8 + BUILTIN::FLOOR((IntToFloat(Var68.f_2) * 0.01f)));
						break;
					case -1620444701:
						iVar7 = (iVar7 + BUILTIN::FLOOR((IntToFloat(Var68.f_2) * 0.01f)));
						break;
					case -225223329:
						fVar3 = (fVar3 + (Var68.f_5 * 0.01f));
						break;
					case 1167068375:
						fVar6 = (fVar6 + (Var68.f_5 * 0.01f));
						break;
					case -845587290:
						fVar5 = (fVar5 - (Var68.f_5 * 0.01f));
						break;
					case 1605773431:
						fVar4 = (fVar4 + (Var68.f_5 * 0.01f));
						break;
				}
				iVar75++;
			}
		}
	}
	if (func_661())
	{
		iVar7++;
	}
	func_662(0, fVar3);
	func_662(1, fVar6);
	uVar76 = func_663();
	iVar77 = ATTRIBUTE::GET_ATTRIBUTE_BONUS_RANK(iVar0, uVar76);
	if (iVar77 != iVar7)
	{
		ATTRIBUTE::SET_ATTRIBUTE_BONUS_RANK(iVar0, uVar76, iVar7);
	}
	uVar78 = func_664();
	iVar79 = ATTRIBUTE::GET_ATTRIBUTE_BONUS_RANK(iVar0, uVar78);
	if (iVar79 != iVar8)
	{
		ATTRIBUTE::SET_ATTRIBUTE_BONUS_RANK(iVar0, uVar78, iVar8);
	}
	fVar80 = PED::_0x95B8E397B8F4360F(iVar0);
	if (fVar80 != fVar1)
	{
		PED::_0xDE1B1907A83A1550(iVar0, fVar1);
	}
	fVar2 = fVar2;
	fVar81 = PED::_0xE7687EB2F634ABF0(iVar0);
	if (fVar81 != fVar4)
	{
		PED::_0x345C9F993A8AB4A4(iVar0, fVar4);
	}
	fVar82 = PED::_0x825F6DD559A0895B(iVar0);
	if (fVar82 != fVar5)
	{
		PED::_0xEF5A3D2285D8924B(iVar0, fVar5);
	}
}

void func_325(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_88(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_273(iVar6);
		if (!PED::_0x608BC6A6AACD5036(&Var2, iVar0, iVar1, 0))
		{
		}
		else
		{
			iVar7 = Var2.f_3;
			if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
			}
			else if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar7) && !ENTITY::_0x88AD6CC10D8D35B2(iVar7))
			{
			}
			else
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar7))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar7, true, true);
				}
				ENTITY::_0x0D0DB2B6AF19A987(&iVar7);
			}
		}
		iVar6++;
	}
}

void func_326(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0 /*45*/] = iParam1;
}

void func_327(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 - (Global_1900383->f_316 && iParam0));
}

void func_328(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 108)
	{
		return;
	}
	Global_1913814->f_209[iParam0] = 0;
}

void func_329()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

struct<4> func_330(bool bParam0)
{
	return func_331(joaat("character"), func_665(), -1591664384, bParam0);
}

struct<4> func_331(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_284(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_666(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_332(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_284(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_331(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_666(bParam6), &Var0, 0);
	return uVar4;
}

void func_333(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_334(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_284(iParam0, 0))
	{
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_667(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_668(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_666(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_335(struct<4> Param0, int iParam4)
{
	struct<11> Var0;

	if (!func_668(0))
	{
		return func_669(Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_670(Param0, &Var0, 0, 0))
	{
		return 0;
	}
	if (Var0.f_10 == iParam4)
	{
		return 1;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_666(0), &Param0, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_336(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if ((func_173(iParam0, 2) || func_173(iParam0, 4)) || func_173(iParam0, 8))
	{
		return 1;
	}
	return 0;
}

Vector3 func_337(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f, 0f, 0f;
	}
	return ((*Global_1900383)[iParam0 /*45*/])->f_19;
}

float func_338(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return ((*Global_1900383)[iParam0 /*45*/])->f_22;
}

void func_339(int iParam0)
{
	func_671(iParam0);
	func_672(iParam0);
}

int func_340()
{
	bool bVar0;

	bVar0 = PED::_0x5E420FF293EE5472();
	if (bVar0)
	{
		return 1;
	}
	return 0;
}

int func_341(int iParam0)
{
	int iVar0;

	iVar0 = 1;
	if (!func_673(iParam0))
	{
		iVar0 = 0;
	}
	if (!func_674(iParam0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_342(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	int iVar0;

	if (!PED::_IS_THIS_MODEL_A_HORSE(iParam0))
	{
		return 0;
	}
	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, false, false);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	ENTITY::_0x9587913B9E772D29(iVar0, 0);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam0));
	return iVar0;
}

void func_343(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (func_389(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
	}
	PED::_0xBCC76708E5677E1D(iParam0, 0);
	PED::_0x931B241409216C1F(Global_35, iParam0, 0);
	PED::_0xB8B6430EAD2D2437(iParam0, 130495496);
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar2 = PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iVar1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iVar2);
	ENTITY::SET_ENTITY_INVINCIBLE(iParam0, false);
	POPULATION::_0xF74E134F40192884(iParam0, 1);
	PED::_0xFD6943B6DF77E449(iParam0, false);
	PLAYER::_0xDF93973251FB2CA5(iVar0, 1);
	PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
	FLOCK::_0xAEB97D84CDF3C00B(iParam0, 0);
	if (func_388(iParam0))
	{
		iVar3 = func_401(iParam0);
		if (func_675(iVar3))
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 324, true);
		}
	}
	PED::SET_PED_CONFIG_FLAG(iParam0, 211, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 208, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 209, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 400, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 136, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 312, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 113, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 277, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 319, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 6, true);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 25, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 24, false);
}

void func_344(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	int iVar8;

	if (iParam1 == -1)
	{
		return;
	}
	if (iParam1 >= 7)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_352(iParam1);
	DECORATOR::DECOR_SET_INT(iParam0, "HorseGender", iVar0);
	iVar1 = func_115(iParam1);
	func_676(iParam0, iVar1);
	PED::_0xA69899995997A63B(iParam0, iVar1);
	iVar2 = BUILTIN::FLOOR(func_367(iParam1));
	func_677(iParam0, iVar2);
	iVar4 = 0;
	while (iVar4 < 2)
	{
		if (func_641(iVar4, &uVar3))
		{
			iVar5 = func_578(iParam1, iVar4);
			func_644(iParam0, iVar4, iVar5);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < 3)
	{
		if (func_652(iVar7, &uVar6))
		{
			iVar5 = func_437(iParam1, iVar7);
			func_678(iParam0, iVar7, iVar5);
		}
		iVar7++;
	}
	iVar8 = PLAYER::PLAYER_ID();
	PED::_0xA691C10054275290(iParam0, iVar8, func_679(iParam1));
	if (iParam1 == 0)
	{
		PED::_0x6734F0A6A52C371C(iVar8, func_680(iParam1));
		PED::_0x024EC9B649111915(iParam0, 1);
	}
}

void func_345(int iParam0, var uParam1)
{
	int iVar0;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 57)
	{
		MISC::_COPY_MEMORY((*uParam1)[iVar0], (Global_40.f_1095.f_1[iParam0 /*436*/])->f_298[iVar0], 1);
		iVar0++;
	}
}

void func_346(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_88(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	iVar1 = INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iVar0);
	iVar2 = 0;
	while (iVar2 < 57)
	{
		uVar3 = func_681(iVar2, 1);
		iVar4 = uVar3;
		if (!func_284(iVar4, 0))
		{
		}
		else
		{
			iVar5 = uParam1[iVar2];
			if (iVar5 <= 0)
			{
			}
			else
			{
				uVar6 = func_627(iVar1, iVar4, iVar5);
			}
		}
		iVar2++;
	}
}

void func_347(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_88(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = &(Global_40.f_1095.f_1[iParam0 /*436*/])->f_356[iVar1 /*5*/];
		if (func_284(iVar2, 0))
		{
			iVar3 = iVar2;
			uVar4 = ((Global_40.f_1095.f_1[iParam0 /*436*/])->f_356[iVar1 /*5*/])->f_1;
			uVar5 = ((Global_40.f_1095.f_1[iParam0 /*436*/])->f_356[iVar1 /*5*/])->f_2;
			PED::_0xC412AA1C73111FE0(iVar0, iVar3, uVar4, uVar5, 0);
		}
		iVar1++;
	}
}

void func_348(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_682(iParam0);
	func_683();
}

float func_349(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_420.f_1;
}

void func_350(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_23 = iParam1;
}

int func_351(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return ((*Global_1900383)[iParam0 /*45*/])->f_23;
}

int func_352(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_10;
}

void func_353(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, 41611, 0f);
	}
	else
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, 41611, 1f);
	}
}

struct<2> func_354(int iParam0)
{
	struct<2> Var0;
	var uVar2;
	var uVar3;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_684(iParam0, &uVar2))
	{
	}
	if (!func_685(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_355()
{
	struct<6> Var0;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;

	if (func_686(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_686(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_686(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_686(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_686(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_686(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_356(var uParam0)
{
	func_687(uParam0);
	func_688(uParam0, 0);
	func_689(uParam0, 0);
	func_690(uParam0, 0);
	func_691(uParam0, 0);
	func_692(uParam0, 0);
	func_693(uParam0, 0);
}

int func_357(int iParam0, int iParam1)
{
	var uVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (func_652(iParam1, &uVar0))
	{
		return ATTRIBUTE::GET_ATTRIBUTE_BASE_RANK(iParam0, uVar0);
	}
	return 0;
}

int func_358(int iParam0)
{
	int iVar0;

	iVar0 = 1745919061;
	if (iParam0 <= 0)
	{
		iVar0 = -2045421226;
	}
	else if (iParam0 < 5)
	{
		iVar0 = -1745814259;
	}
	else if (iParam0 < 10)
	{
		iVar0 = -325933489;
	}
	else if (iParam0 < 15)
	{
		iVar0 = -1065791927;
	}
	else if (iParam0 < 20)
	{
		iVar0 = -844699484;
	}
	else if (iParam0 < 25)
	{
		iVar0 = -1273449080;
	}
	else if (iParam0 < 30)
	{
		iVar0 = 927185840;
	}
	else if (iParam0 < 35)
	{
		iVar0 = 149872391;
	}
	else if (iParam0 < 40)
	{
		iVar0 = 399015098;
	}
	else if (iParam0 < 45)
	{
		iVar0 = -644349862;
	}
	else if (iParam0 < 50)
	{
		iVar0 = 1745919061;
	}
	else if (iParam0 < 55)
	{
		iVar0 = 1004225511;
	}
	else if (iParam0 < 60)
	{
		iVar0 = 1278600348;
	}
	else if (iParam0 < 65)
	{
		iVar0 = 502499352;
	}
	else if (iParam0 < 70)
	{
		iVar0 = -2093198664;
	}
	else if (iParam0 < 75)
	{
		iVar0 = -1837436619;
	}
	else if (iParam0 < 80)
	{
		iVar0 = 1736416063;
	}
	else if (iParam0 < 85)
	{
		iVar0 = 2040610690;
	}
	else if (iParam0 < 90)
	{
		iVar0 = -1173634986;
	}
	else if (iParam0 < 95)
	{
		iVar0 = -867801909;
	}
	else if (iParam0 >= 95)
	{
		iVar0 = 1960266524;
	}
	return iVar0;
}

void func_359(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_1 = iParam1;
}

int func_360(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_433;
}

void func_361(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	PED::_SET_PED_BODY_COMPONENT(iParam0, 1268180497);
	if (bParam1)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, 0, 1, 1, 1, 0);
	}
}

void func_362(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
	{
		return;
	}
	func_694(iParam0);
	func_695(iParam0, uParam1);
	func_468(iParam0);
	func_696(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_697(iParam0, iParam3, 0);
	}
	PED::_UPDATE_PED_VARIATION(iParam0, 0, 1, 1, 1, 1);
}

void func_363(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	struct<94> Var10;
	var uVar104;
	var uVar105;
	var uVar106;
	var uVar107;
	var uVar108;
	var uVar109;
	var uVar110;
	var uVar111;
	int iVar112;
	int iVar113;
	int iVar114;
	var uVar115;
	int iVar116;
	int iVar117;
	var uVar118;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_88(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	Var10.f_10 = 10;
	iVar114 = 0;
	while (iVar114 < 3)
	{
		iVar112 = iVar114;
		func_272(&Var10);
		func_274((Global_40.f_1095.f_1[iParam0 /*436*/])->f_15[iVar112 /*94*/], &Var10);
		if (!STREAMING::IS_MODEL_VALID(Var10))
		{
		}
		else if (!STREAMING::HAS_MODEL_LOADED(Var10))
		{
		}
		else
		{
			switch (iVar114)
			{
				case 0:
					vVar6 = { 0f, -1f, 0f };
					break;
				case 1:
					vVar6 = { -1f, 0f, 0f };
					break;
				case 2:
					vVar6 = { 1f, 0f, 0f };
					break;
			}
			vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, vVar6) };
			if (STREAMING::_0x274EE1B90CFA669E(Var10))
			{
				iVar1 = OBJECT::CREATE_OBJECT(Var10, vVar3, true, true, false, false, true);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
				}
				else
				{
					iVar9 = func_698(iVar114);
					TASK::TASK_CARRIABLE(iVar1, Var10.f_3, iVar0, iVar9, 0);
					ENTITY::_0x399657ED871B3A6C(iVar1, Var10.f_1);
					ENTITY::_0xEF259AA1E097E0AD(iVar1, Var10.f_93);
					uVar115 = func_286(iVar0, iVar1);
					Jump @798; //curOff = 318
					if (STREAMING::IS_MODEL_A_PED(Var10))
					{
						iVar2 = func_699(Var10, vVar3, 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 0);
						if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
						{
						}
						else
						{
							if (ENTITY::_0x9A100F1CF4546629(iVar2))
							{
								if (Var10.f_6 == 2)
								{
									PERSISTENCE::_0x8DE104BEC243A73B(Var10);
								}
								PED::_SET_PED_QUALITY(iVar2, Var10.f_4);
								FLOCK::_0x8B6F0F59B1B99801(iVar2, Var10.f_6);
								PED::_SET_PED_DAMAGE(iVar2, Var10.f_7);
							}
							if (Var10.f_8 != 0)
							{
								PED::_SET_PED_BODY_COMPONENT(iVar2, Var10.f_8);
								if (Var10.f_92)
								{
									iVar116 = 787732969;
									if (PED::_0x4FF3C2B4E6A196C1(Var10.f_8, iVar116, Var10))
									{
										PED::_0x66FF395445A88A6E(iVar2, iVar116, 0);
									}
								}
							}
							iVar113 = 0;
							while (iVar113 < Var10.f_9)
							{
								uVar104 = &Var10.f_10[iVar113 /*8*/];
								uVar105 = (Var10.f_10[iVar113 /*8*/])->f_1;
								uVar106 = (Var10.f_10[iVar113 /*8*/])->f_2;
								uVar107 = (Var10.f_10[iVar113 /*8*/])->f_3;
								uVar108 = (Var10.f_10[iVar113 /*8*/])->f_4;
								uVar109 = (Var10.f_10[iVar113 /*8*/])->f_5;
								uVar110 = (Var10.f_10[iVar113 /*8*/])->f_6;
								uVar111 = (Var10.f_10[iVar113 /*8*/])->f_7;
								PED::_0xBC6DF00D7A4A6819(iVar2, uVar104, uVar105, uVar106, uVar107, uVar108, uVar109, uVar110, uVar111);
								iVar113++;
							}
							PED::_UPDATE_PED_VARIATION(iVar2, 0, 1, 1, 1, 0);
							if (Var10.f_2 == 2)
							{
								ENTITY::_SET_ENTITY_HEALTH(iVar2, 0, 0);
								PED::SET_PED_CONFIG_FLAG(iVar2, 517, true);
								PERSISTENCE::_0xF5622FA6ACFCA7DB(iVar2, 0);
							}
							if (Var10.f_92)
							{
								PED::_0x6569F31A01B4C097(iVar2, 0, 0);
								ENTITY::_0x6BCF5F3D8FFE988D(iVar2, 1);
							}
							iVar9 = func_698(iVar114);
							TASK::TASK_CARRIABLE(iVar2, Var10.f_3, iVar0, iVar9, 0);
							ENTITY::_0x399657ED871B3A6C(iVar2, Var10.f_1);
							ENTITY::_0xEF259AA1E097E0AD(iVar2, Var10.f_93);
							iVar117 = func_515(iVar2);
							if (func_284(iVar117, 0))
							{
								if (iVar117 != Var10.f_1)
								{
									((Global_40.f_1095.f_1[iParam0 /*436*/])->f_15[iVar112 /*94*/])->f_1 = iVar117;
									Var10.f_1 = iVar117;
								}
							}
							uVar118 = func_286(iVar0, iVar2);
							func_618(Var10.f_1, 0, 0, 1);
						}
					}
				}
				iVar114++;
			}
		}
	}

void func_364(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_19 = { 0f, 0f, 0f };
	((*Global_1900383)[iParam0 /*45*/])->f_22 = 0f;
}

void func_365(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_23 = 0;
}

void func_366(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_387(iParam0, 1);
}

float func_367(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1;
}

float func_368(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

bool func_369()
{
	return (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_43799) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_43799, 0));
}

int func_370()
{
	return Global_1900383->f_378;
}

void func_371(int iParam0)
{
	Global_1900383->f_378.f_9 = iParam0;
}

void func_372(int iParam0)
{
	Global_1900383->f_378.f_10 = iParam0;
}

void func_373(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (&Global_1900383->f_378.f_1[iParam0] != iParam1)
	{
	}
	Global_1900383->f_378.f_1[iParam0] = iParam1;
}

void func_374(int iParam0)
{
	Global_1900383->f_378.f_11 = iParam0;
}

bool func_375()
{
	int iVar0;

	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) == 4);
}

int func_376(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (func_198(iParam0) == 0)
	{
		return 0;
	}
	return 1;
}

void func_377()
{
	int iVar0;

	iVar0 = (Global_40.f_1095.f_1[5 /*436*/])->f_11;
	switch (iVar0)
	{
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(func_88(6)) && func_187(Global_35, func_88(6), 1, 1) <= 80f)
			{
				func_381("WHISTLE_NEAR_UNBONDED", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_381("WHISTLE_HORSE_DEAD", 10000, 0, 0, 0, 1);
			}
			break;
		case 2:
			func_381("WHISTLE_HORSE_STOLEN", 10000, 0, 0, 0, 1);
			break;
	}
}

int func_378(int iParam0)
{
	var uVar0;
	int iVar3;

	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::_GET_INTERIOR_INFO(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case -1571304986:
			case -1342123354:
			case -1269216817:
			case -1212338017:
			case -803716508:
			case 768224943:
			case 1245139812:
			case 1633500362:
				return 1;
		}
	}
	return 0;
}

int func_379(int iParam0)
{
	var uVar0;
	int iVar3;

	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::_GET_INTERIOR_INFO(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case -1946266312:
			case -1817199644:
			case -1604045519:
			case -857108408:
			case -431793961:
			case -17417813:
			case 37578405:
			case 459745161:
			case 653987431:
			case 1107105323:
			case 1135757916:
			case 1442115297:
			case 1548023642:
			case 1911907177:
				return 1;
		}
	}
	return 0;
}

int func_380(int iParam0)
{
	int iVar0;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_71(iParam0))
	{
		return 0;
	}
	iVar0 = func_88(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 1;
	}
	return 0;
}

var func_381(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	uVar15 = _NAMESPACE71::_SHOW_TOOLTIP(&Var0, &Var13, iParam5);
	return uVar15;
}

void func_382(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 == 2)
		{
			MAP::_SET_BLIP_FLASH_STYLE(((*Global_1900383)[iParam0 /*45*/])->f_26, -1814032670);
			MAP::_BLIP_SET_MODIFIER(((*Global_1900383)[iParam0 /*45*/])->f_26, -1814032670);
		}
		else if (((*Global_1900383)[iParam0 /*45*/])->f_25 == 1)
		{
			MAP::_SET_BLIP_FLASH_STYLE(((*Global_1900383)[iParam0 /*45*/])->f_26, -272772079);
			MAP::_BLIP_SET_MODIFIER(((*Global_1900383)[iParam0 /*45*/])->f_26, -272772079);
		}
	}
}

void func_383(int iParam0)
{
	struct<12> Var0;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<12> Var15;
	struct<12> Var27;
	int iVar39;
	bool bVar40;
	bool bVar41;
	int iVar42;
	int iVar43;
	struct<12> Var44;
	int iVar56;
	int iVar57;
	vector3 vVar58;
	float fVar61;
	vector3 vVar62;
	bool bVar65;
	bool bVar66;
	bool bVar67;
	bool bVar68;
	bool bVar69;
	bool bVar70;
	int iVar71;
	vector3 vVar72;
	var uVar75;
	bool bVar76;
	int iVar77;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_21(iParam0, &Var0);
	iVar12 = func_207(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar12))
	{
		func_373(iParam0, 6);
		return;
	}
	iVar13 = func_115(iParam0);
	iVar14 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar12, 7);
	func_21(0, &Var15);
	func_21(1, &Var27);
	if (iParam0 == 1 && !Var27.f_2)
	{
		func_373(iParam0, 6);
		return;
	}
	iVar39 = MISC::GET_GAME_TIMER();
	bVar40 = false;
	if (iParam0 == 0)
	{
		bVar40 = true;
		if (!Var15.f_11)
		{
			if (Var27.f_11 && !Var27.f_10)
			{
				bVar40 = false;
			}
		}
	}
	if (iParam0 == 1)
	{
		if (!Var15.f_2)
		{
			bVar40 = true;
		}
	}
	if (bVar40)
	{
	}
	switch (func_384(iParam0))
	{
		case 0:
			func_373(iParam0, 1);
		case 1:
			if (iParam0 == 0)
			{
				if (func_84(0) == 1 && !func_71(0))
				{
					func_373(iParam0, 2);
					return;
				}
			}
			if (!func_71(iParam0))
			{
				func_373(iParam0, 6);
				return;
			}
			if (func_115(iParam0) < 1)
			{
				func_373(iParam0, 6);
				return;
			}
			if (!Var0.f_11)
			{
				if (func_700())
				{
					func_373(iParam0, 2);
					return;
				}
				bVar41 = false;
				if (iParam0 == 0)
				{
					if (Var27.f_10)
					{
						bVar41 = true;
					}
				}
				if (iParam0 == 1)
				{
					if (Var15.f_10)
					{
						bVar41 = true;
					}
				}
				if (!bVar40 && bVar41)
				{
					bVar40 = true;
				}
				if (!func_280())
				{
					bVar40 = false;
				}
				if (bVar40)
				{
					iVar42 = -1;
					iVar43 = -1;
					if (func_490(1) < 3)
					{
						iVar42 = 1;
						if (iVar13 < iVar14)
						{
							iVar43 = 6;
						}
					}
					else
					{
						iVar42 = 2;
					}
					if (bVar41)
					{
						if (iParam0 == 0)
						{
							iVar42 = 3;
						}
						else if (iParam0 == 1)
						{
							iVar42 = 4;
						}
					}
					else
					{
						if (iParam0 == 0)
						{
							MISC::_COPY_MEMORY(&Var44, &Var27, 12);
						}
						else if (iParam0 == 1)
						{
							MISC::_COPY_MEMORY(&Var44, &Var15, 12);
						}
						if (Var44.f_1)
						{
							if (!Var44.f_11)
							{
								iVar42 = 5;
							}
						}
					}
					if (iVar43 != -1)
					{
						func_283(iVar43, 1);
					}
					if ((iVar42 == 1 || iVar42 == 3) || iVar42 == 4)
					{
						iVar56 = 0;
						if (iParam0 == 0)
						{
							iVar56 = -1925605092;
						}
						else if (iParam0 == 1)
						{
							iVar56 = -1230993421;
						}
						if (iVar56 != 0)
						{
							if (iParam0 == 0)
							{
								iVar57 = func_701();
							}
							else if (iParam0 == 1)
							{
								iVar57 = func_702();
							}
							if (!MAP::DOES_BLIP_EXIST(iVar57))
							{
								iVar57 = MAP::_0x3E593DF9C2962EC6(iVar56);
								MAP::_BLIP_SET_MODIFIER(iVar57, 1313031610);
								if (iParam0 == 0)
								{
									func_703(&iVar57);
								}
								else if (iParam0 == 1)
								{
									func_704(&iVar57);
								}
							}
							func_464(iVar42, iVar57, 1);
						}
					}
					else if (iVar42 != -1)
					{
						func_283(iVar42, 1);
					}
				}
			}
			func_373(iParam0, 5);
			break;
		case 2:
			func_705(&(((*Global_1900383)[iParam0 /*45*/])->f_4));
			func_373(iParam0, 3);
		case 3:
			vVar62 = { func_706(iParam0) };
			if (!func_707(&(((*Global_1900383)[iParam0 /*45*/])->f_4), Global_36, vVar62, Var0, 1065353216 /* Float: 1f */))
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_4.f_1)
				{
					if (!func_375())
					{
						func_381("WHISTLE_NOSPAWN_AREA", 10000, 0, 0, 0, 1);
					}
					func_315(iParam0);
					func_708(Global_35, "HORSE_NO_SHOW", joaat("speech_params_standard"), 0, 1, 0, 0, 1);
					func_373(iParam0, 6);
				}
				return;
			}
			vVar58 = { func_709(&(((*Global_1900383)[iParam0 /*45*/])->f_4)) };
			fVar61 = func_710(vVar58, Global_36, 1);
			if (!func_71(iParam0))
			{
				func_448(iParam0, vVar58, fVar61);
				func_447(iParam0);
			}
			func_373(iParam0, 4);
		case 4:
			if (!ENTITY::DOES_ENTITY_EXIST(Var0))
			{
				return;
			}
			if (ENTITY::IS_ENTITY_DEAD(Var0) || PED::IS_PED_INJURED(Var0))
			{
				return;
			}
			vVar58 = { func_709(&(((*Global_1900383)[iParam0 /*45*/])->f_4)) };
			fVar61 = func_710(vVar58, Global_36, 1);
			ENTITY::FREEZE_ENTITY_POSITION(Var0, false);
			ENTITY::SET_ENTITY_COORDS(Var0, vVar58, true, false, true, true);
			ENTITY::SET_ENTITY_HEADING(Var0, fVar61);
			ENTITY::_0x9587913B9E772D29(Var0, 0);
			func_373(iParam0, 5);
		case 5:
			if (!Var0.f_2)
			{
				func_373(iParam0, 6);
				return;
			}
			if (Var0.f_10)
			{
				func_373(iParam0, 6);
				return;
			}
			bVar65 = false;
			if (ENTITY::DOES_ENTITY_EXIST(Var0.f_9))
			{
				if (func_456(Var0.f_9))
				{
					if (func_76(256))
					{
					}
					else
					{
						bVar65 = true;
					}
				}
				if (func_711(iParam0))
				{
					bVar65 = true;
				}
			}
			if (bVar65)
			{
				func_712(iParam0, 1);
			}
			bVar66 = false;
			if (Var0.f_11 || func_700())
			{
				bVar66 = true;
			}
			if (!bVar66)
			{
				func_66(iParam0);
				func_382(iParam0);
				func_373(iParam0, 6);
				return;
			}
			bVar67 = false;
			if (func_76(32))
			{
				bVar67 = true;
			}
			bVar68 = true;
			bVar69 = func_713();
			bVar70 = func_172(iParam0);
			if (!bVar67)
			{
				if (bVar69)
				{
					if (bVar70)
					{
						iVar71 = func_170();
						if (!func_171(iVar71))
						{
							func_714(&vVar72, &uVar75);
							bVar76 = false;
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0.f_5, vVar72, true) < 3f)
							{
								bVar76 = true;
							}
							if (func_223(iParam0) || bVar76)
							{
								if (bVar40)
								{
									if (func_280())
									{
										func_283(9, 1);
									}
								}
							}
							else if (bVar40)
							{
								if (func_280())
								{
									func_283(8, 1);
								}
							}
							bVar68 = false;
						}
					}
				}
			}
			if (bVar68)
			{
				PHYSICS::_0x0348469DAA17576C(Var0);
				ENTITY::FREEZE_ENTITY_POSITION(Var0, false);
				if (func_715() == 0)
				{
					if (func_168(Var0, 2043986356))
					{
						func_371(1);
					}
				}
				iVar77 = func_715();
				TASK::TASK_GO_TO_WHISTLE(Var0, Global_35, iVar77);
				FLOCK::_0xFF1E339CE40EAAAF(Var0, -1);
				FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Var0, 48, false);
				func_374(iVar39);
			}
			func_66(iParam0);
			func_382(iParam0);
			func_373(iParam0, 6);
			break;
		case 6:
			break;
	}
}

int func_384(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return &(Global_1900383->f_378.f_1[iParam0]);
}

bool func_385(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_386(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
	}
}

void func_387(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_24 = (((*Global_1900383)[iParam0 /*45*/])->f_24 - (((*Global_1900383)[iParam0 /*45*/])->f_24 && iParam1));
}

int func_388(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_401(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return 1;
}

int func_389(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (func_716(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return 1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseCompanion"))
	{
		return 1;
	}
	return 0;
}

int func_390(int iParam0)
{
	char* sVar0;

	sVar0 = "HorseMission";
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, sVar0))
	{
		return 1;
	}
	return 0;
}

int func_391(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!PED::_IS_THIS_MODEL_A_HORSE(iVar0))
	{
		return 0;
	}
	if (FLOCK::_0x3B005FF0538ED2A9(iParam0) == 1)
	{
		return 1;
	}
	return 0;
}

int func_392(int iParam0)
{
	switch (iParam0)
	{
		case joaat("a_c_donkey_01"):
			return 1;
	}
	return 0;
}

int func_393(int iParam0)
{
	switch (iParam0)
	{
		case joaat("a_c_horsemule_01"):
		case joaat("a_c_horsemulepainted_01"):
			return 1;
	}
	return 0;
}

int func_394()
{
	return Global_1900383->f_404;
}

void func_395(int iParam0)
{
	Global_1900383->f_404 = iParam0;
}

int func_396()
{
	return Global_1900383->f_404.f_6;
}

void func_397(int iParam0)
{
	Global_1900383->f_404.f_6 = iParam0;
}

int func_398(int iParam0, var uParam1, float fParam2)
{
	int iVar0;
	float fVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar0 = PED::_0xF103823FFE72BB49(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return 0;
	}
	*uParam1 = iVar0;
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::_IS_PED_HOGTIED(iVar0))
	{
		return 0;
	}
	if (fParam2 > 0f)
	{
		fVar1 = func_187(iParam0, iVar0, 0, 1);
		if (fVar1 > fParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_399(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_613(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_12 != -1)
	{
		if (iParam0 == Global_1225638->f_10)
		{
			if (!Global_1225638->f_11)
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

int func_400(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return 0;
	}
	if (func_190(iParam0) == 0f)
	{
		return 1;
	}
	return 0;
}

int func_401(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iParam0 == Global_1900383[iVar0 /*45*/])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_402(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, 7);
	return iVar0;
}

void func_403(int iParam0)
{
	int iVar0;
	var uVar1;

	if (func_2() == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (func_388(iParam0))
	{
		iVar0 = func_401(iParam0);
		func_315(iVar0);
	}
	func_315(1);
	if (func_71(1))
	{
		func_202(1, 0);
	}
	func_203(1);
	func_717(iParam0, 1, 0);
	func_200(1, 1);
	if (func_115(1) == 0)
	{
		func_718(1, 1);
	}
	uVar1 = PLAYER::_0x227B06324234FB09(PLAYER::PLAYER_ID(), iParam0);
	func_404();
}

void func_404()
{
	if (func_71(0))
	{
		func_66(0);
	}
	if (func_71(1))
	{
		func_66(1);
	}
	if (func_71(5))
	{
		func_66(5);
	}
	if (func_71(6))
	{
		func_315(6);
	}
}

void func_405(int iParam0, bool bParam1)
{
	int iVar0;

	if (func_2() == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (func_388(iParam0))
	{
		iVar0 = func_401(iParam0);
		func_315(iVar0);
	}
	if (func_71(6))
	{
		func_202(6, 0);
	}
	func_203(6);
	func_717(iParam0, 6, 0);
	func_200(6, 1);
	if (!bParam1)
	{
		func_454(6, 0);
		func_482(MISC::GET_GAME_TIMER());
	}
	func_404();
}

void func_406(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1900383->f_508), Global_40.f_1095.f_1[iParam1 /*436*/], 436);
	MISC::_COPY_MEMORY(Global_40.f_1095.f_1[iParam1 /*436*/], Global_40.f_1095.f_1[iParam0 /*436*/], 436);
	MISC::_COPY_MEMORY(Global_40.f_1095.f_1[iParam0 /*436*/], &(Global_1900383->f_508), 436);
}

void func_407(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1900383->f_463), (*Global_1900383)[iParam1 /*45*/], 45);
	MISC::_COPY_MEMORY((*Global_1900383)[iParam1 /*45*/], (*Global_1900383)[iParam0 /*45*/], 45);
	MISC::_COPY_MEMORY((*Global_1900383)[iParam0 /*45*/], &(Global_1900383->f_463), 45);
}

int func_408(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;
	bool bVar58;
	int iVar59;

	Var0.f_9 = -1591664384;
	Var29.f_9 = -1591664384;
	if (!func_719(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_719(iParam1, &Var29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_720(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_721(Var0, Var0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_722(Var0, Var29, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_409(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "CaravanCommonHorse"))
	{
		return 1;
	}
	return 0;
}

int func_410(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "CaravanLivestock"))
	{
		return 1;
	}
	return 0;
}

int func_411(int iParam0)
{
	char* sVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	sVar0 = "bHorseHasBeenStolen";
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, sVar0))
	{
		return 0;
	}
	else if (DECORATOR::DECOR_EXIST_ON(iParam0, sVar0))
	{
		return 1;
	}
	return 0;
}

bool func_412()
{
	return (Global_1894899 & 1 != 0 && func_723() != -1);
}

void func_413(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	bVar1 = false;
	if (func_392(iVar0))
	{
		bVar1 = true;
	}
	bVar2 = false;
	if (func_393(iVar0))
	{
		bVar2 = true;
	}
	iVar3 = 0;
	if (!func_76(2048))
	{
		if (bVar1)
		{
			if (!func_458(iParam0, 953325896 /* GXTEntry: "Stole Donkey" */))
			{
				iVar3 = 953325896; /* GXTEntry: "Stole Donkey" */
			}
		}
		else if (bVar2)
		{
			if (!func_458(iParam0, 508358508 /* GXTEntry: "Stole Mule" */))
			{
				iVar3 = 508358508; /* GXTEntry: "Stole Mule" */
			}
		}
		else if (!func_458(iParam0, 1022576842 /* GXTEntry: "Stole Horse" */))
		{
			iVar3 = 1022576842; /* GXTEntry: "Stole Horse" */
		}
		if (iVar3 != 0)
		{
			func_243(0, iVar3, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
		}
	}
}

void func_414(bool bParam0)
{
	if (bParam0)
	{
		Global_1935689 = 1;
	}
	else
	{
		Global_1935689 = 2;
	}
}

void func_415(bool bParam0)
{
	Global_1900372->f_2 = 0;
	Global_1900372->f_1 = 0;
	Global_1900372->f_3 = 0;
	Global_1900372->f_4 = 0;
	Global_1900372->f_5 = 0;
	Global_1900372->f_6 = 0;
	Global_1900372->f_7 = 0;
	if (bParam0)
	{
		Global_1900372->f_8 = 0;
		Global_1900372->f_9 = 0;
		Global_1900372->f_10 = 0;
	}
}

void func_416(int iParam0)
{
	Global_1900372 = iParam0;
}

bool func_417()
{
	return Global_1900372->f_5;
}

int func_418()
{
	return Global_1900372->f_2;
}

int func_419()
{
	return Global_1900372->f_1;
}

int func_420(int iParam0)
{
	if (func_724(iParam0))
	{
		return 1;
	}
	if (func_725(iParam0))
	{
		return 1;
	}
	if (func_726(iParam0))
	{
		return 1;
	}
	if (func_727(iParam0))
	{
		return 1;
	}
	if (func_728(iParam0))
	{
		return 1;
	}
	if (func_729(iParam0))
	{
		return 1;
	}
	if (func_730(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_421()
{
	int iVar0;
	int iVar1;

	iVar0 = func_418();
	iVar1 = func_419();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (!PED::_0xD543D3A8FDE4F185(Global_35, iVar0))
	{
		return 0;
	}
	if (!func_420(iVar1))
	{
		return 0;
	}
	if (PED::IS_PED_SWIMMING(Global_35))
	{
		return 0;
	}
	if (PED::IS_PED_SWIMMING(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_422(int iParam0, int iParam1)
{
	struct<18> Var0;
	bool bVar25;
	int iVar26;
	int iVar27;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return 0;
	}
	Var0.f_3 = -1;
	Var0.f_12 = 4;
	Var0.f_17 = 4;
	if (INVENTORY::_0x0C093C1787F18519(iParam1, &Var0))
	{
	}
	bVar25 = false;
	iVar26 = Var0;
	if (func_724(iParam1))
	{
		iVar26 = 0;
		iVar27 = -224471938;
		bVar25 = true;
	}
	if ((func_726(iParam1) || func_727(iParam1)) || func_725(iParam1))
	{
		iVar26 = joaat("p_cs_syringe01x");
		iVar27 = -1355254781;
		bVar25 = true;
	}
	if (func_728(iParam1))
	{
		iVar27 = 1968415774;
		bVar25 = true;
	}
	if (func_729(iParam1))
	{
		iVar27 = 554992710;
		bVar25 = true;
	}
	if (!bVar25)
	{
		return 0;
	}
	TASK::TASK_ANIMAL_INTERACTION(Global_35, iParam0, iVar27, iVar26, 0);
	return 1;
}

void func_423(int iParam0)
{
	Global_1900372->f_3 = iParam0;
}

int func_424()
{
	return Global_1900372->f_3;
}

void func_425(int iParam0)
{
	Global_1900372->f_4 = iParam0;
}

void func_426(int iParam0)
{
	Global_1900372->f_8 = iParam0;
}

void func_427(int iParam0)
{
	Global_1900372->f_9 = iParam0;
}

void func_428(int iParam0)
{
	Global_1900372->f_10 = iParam0;
}

void func_429(int iParam0)
{
	Global_1900372->f_7 = iParam0;
}

bool func_430()
{
	return Global_1900372->f_7;
}

int func_431(int iParam0, int iParam1)
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

int func_432(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;

	if (!func_284(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_731(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_732(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_733(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_734(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((func_735(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_735(iParam0, 0, 0) - iParam1) < 0)
		{
			func_432(iParam0, func_735(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_736(iParam0) == joaat("weapon"))
	{
		if (!func_737(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_738(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_668(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_732(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_278(iParam0, iParam1);
	return 1;
}

void func_433(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_420(iParam1))
	{
		return;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam1, 0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return;
	}
	if (func_724(iParam1))
	{
		func_739(iParam0, iParam1);
		return;
	}
	if (func_725(iParam1))
	{
		func_740(iParam0, iParam1);
		return;
	}
	if (func_726(iParam1))
	{
		func_741(iParam0, iParam1);
		return;
	}
	if (func_727(iParam1))
	{
		func_504(iParam0, iParam1);
		return;
	}
	if (func_728(iParam1))
	{
		func_742(iParam0, iParam1);
		return;
	}
	if (func_730(iParam1))
	{
		func_743(iParam0, iParam1);
		return;
	}
	if (func_729(iParam1))
	{
		iVar0 = func_744();
		func_745(iParam0, iParam1, iVar0);
		return;
	}
}

bool func_434()
{
	return Global_1900372->f_6;
}

int func_435()
{
	return Global_1900372->f_8;
}

bool func_436()
{
	return Global_1900372->f_10;
}

int func_437(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return &((Global_40.f_1095.f_1[iParam0 /*436*/])->f_407[iParam1 /*4*/]);
}

void func_438(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_437(iParam0, iParam1);
	func_746(iParam0, iParam1, (iVar0 + iParam2));
}

void func_439(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_357(iParam0, iParam1);
	func_678(iParam0, iParam1, (iVar0 + iParam2));
}

int func_440(int iParam0)
{
	if (!func_269(iParam0))
	{
		return -1;
	}
	return func_747(iParam0);
}

int func_441(vector3 vParam0)
{
	return func_748(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

int func_442(int iParam0)
{
	int iVar0;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_71(iParam0))
	{
		return 0;
	}
	iVar0 = func_88(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_443(int iParam0)
{
	int iVar0;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_71(iParam0))
	{
		return;
	}
	iVar0 = func_88(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	ENTITY::_SET_ENTITY_HEALTH(iVar0, 0, 0);
}

void func_444()
{
	int iVar0;

	iVar0 = func_211();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	OBJECT::DELETE_OBJECT(&iVar0);
	func_466(0);
}

int func_445(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_8;
}

void func_446(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_749(&uVar0, &iVar1, &iVar2);
	func_750(iParam0, uVar0);
	func_751(iParam0, iVar1);
	func_752(iParam0, iVar2);
	func_200(iParam0, 1);
	func_718(iParam0, 1);
}

void func_447(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_753(iParam0, 1);
}

void func_448(int iParam0, vector3 vParam1, float fParam4)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_19 = { vParam1 };
	((*Global_1900383)[iParam0 /*45*/])->f_22 = fParam4;
}

void func_449(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_2 = 1;
	((*Global_1900383)[iParam0 /*45*/])->f_3 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_450(int iParam0)
{
	int iVar0;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_181(iParam0);
	if (!SCRIPTS::_DOES_THREAD_EXIST(iVar0))
	{
		func_183(iParam0);
	}
	else if (!SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
	{
		func_183(iParam0);
	}
}

int func_451(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_452(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_453(int iParam0, float fParam1)
{
	char* sVar0;
	bool bVar1;

	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "HORSE_XP_TRUST_EARNED";
			break;
		case 1:
		case 2:
		case 3:
			return;
		case 4:
			sVar0 = "HORSE_XP_LEADING";
			break;
		case 11:
		case 12:
			sVar0 = "HORSE_XP_HITCH";
			break;
		case 5:
			return;
		case 6:
			sVar0 = "HORSE_XP_BREAK_HORSE";
			break;
		case 13:
		case 14:
		case 15:
			sVar0 = "HORSE_XP_FED";
			break;
		case 16:
			sVar0 = "HORSE_XP_TREAT";
			break;
		case 17:
		case 18:
		case 19:
			sVar0 = "HORSE_XP_GROOM";
			break;
		case 20:
			sVar0 = "HORSE_XP_OINTMENT";
			break;
		case 7:
		case 8:
			sVar0 = "HORSE_XP_PATTED";
			break;
		case 9:
		case 10:
			sVar0 = "HORSE_XP_CALM";
			break;
		case 21:
		case 22:
			sVar0 = "HORSE_XP_LIGHT_LOAD";
			break;
		default:
			return;
	}
	bVar1 = false;
	if (bVar1)
	{
		sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, BUILTIN::FLOOR(fParam1));
	}
	else
	{
		sVar0 = MISC::_CREATE_VAR_STRING(2, "HORSE_XP_GENERIC_EARNED");
	}
	func_754(sVar0, "ITEMTYPE_TEXTURES", 48560695, 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_454(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;

	if (iParam1 == -1)
	{
		return;
	}
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (iParam0 != 0)
	{
		if (!func_140(43))
		{
			return;
		}
	}
	iVar0 = func_207(iParam0);
	if (func_392(iVar0) || func_393(iVar0))
	{
		return;
	}
	iVar1 = func_115(iParam0);
	if (iVar1 >= func_755(iVar0))
	{
		return;
	}
	if (func_470(iParam0, iParam1))
	{
		return;
	}
	if (func_756(iParam0, iParam1))
	{
		return;
	}
	fVar2 = func_757(iParam0, iParam1);
	fVar3 = func_758(iParam1);
	fVar3 = (fVar3 * (1f + Global_40.f_11095.f_68));
	switch (iParam1)
	{
		case 1:
			iVar4 = func_88(iParam0);
			if (func_518(iVar4, 0))
			{
				fVar3 = (fVar3 * 0.5f);
			}
			(Global_1900383->f_317.f_2[iParam0 /*5*/])->f_2 = ((Global_1900383->f_317.f_2[iParam0 /*5*/])->f_2 + fVar3);
			break;
		case 2:
		case 3:
			if (func_759())
			{
				fVar3 = (fVar3 * 2f);
			}
			(Global_1900383->f_317.f_2[iParam0 /*5*/])->f_2 = ((Global_1900383->f_317.f_2[iParam0 /*5*/])->f_2 + fVar3);
			break;
		case 4:
			(Global_1900383->f_317.f_2[iParam0 /*5*/])->f_4 = ((Global_1900383->f_317.f_2[iParam0 /*5*/])->f_4 + fVar3);
			break;
		case 5:
			if (iVar1 < 1)
			{
				fVar5 = func_367(iParam0);
				fVar6 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
				fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1 + 1));
				fVar3 = (fVar7 - (fVar6 + fVar5));
			}
			else
			{
				fVar3 = 0f;
			}
			break;
		default:
			func_453(iParam1, fVar3);
			break;
	}
	func_760(iParam0, fVar3);
	func_472(iParam0, iParam1, (fVar2 + fVar3));
}

int func_455(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "not_enemy"))
	{
		return 0;
	}
	switch (PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		case -1996978098:
		case -1663301869:
		case -1535431934:
		case -1448293989:
		case -886193798:
		case -401180987:
		case -350226955:
		case -50399569:
		case 106566339:
		case 266218800:
		case 555364152:
		case 707888648:
		case 1078461828:
		case 1222652248:
		case 1269650476:
			return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		iVar0 = PED::GET_RELATIONSHIP_BETWEEN_GROUPS(PED::GET_PED_RELATIONSHIP_GROUP_HASH(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)), PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam1));
		if ((iVar0 == 6 || iVar0 == 4) || iVar0 == 5)
		{
			if (!DECORATOR::DECOR_EXIST_ON(iParam0, "instigated_by_player"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_456(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (func_2() != -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0 /*1157*/];
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && iParam0 == iVar1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_457(int iParam0, int iParam1)
{
	if ((((LAW::_0x40851BCC33ACD9AB(iParam0) && func_134() != 8) && !func_608(0, 0, 1)) && !func_458(iParam0, iParam1)) && !func_399(PLAYER::PLAYER_ID(), 0, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_458(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "honor_block"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "honor_block");
			uVar1 = func_547(iParam1);
			if ((iVar0 && uVar1) != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_459()
{
	int iVar0;

	iVar0 = func_401(func_761(Global_35));
	if (iVar0 == -1)
	{
		return;
	}
}

void func_460(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = func_401(func_761(Global_35));
	if (iVar0 == -1)
	{
		return;
	}
}

void func_461(int iParam0)
{
	Global_1900372->f_6 = iParam0;
}

void func_462(int iParam0, vector3 vParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_28 = { vParam1 };
}

void func_463()
{
	struct<6> Var0;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	int iVar12;
	struct<6> Var13;
	int iVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	var uVar23;
	var uVar24;
	var uVar25;

	Var0 = { func_355() };
	uVar6 = Var0;
	uVar7 = Var0.f_1;
	uVar8 = Var0.f_2;
	uVar9 = Var0.f_3;
	uVar10 = Var0.f_4;
	uVar11 = Var0.f_5;
	iVar12 = 3;
	iVar19 = joaat("base");
	if (func_762(uVar6))
	{
		uVar20 = uVar6;
		Var13 = PED::_0xF6D9E1F3560CBF8E(iVar12, uVar20, iVar19, 0, 0);
	}
	if (func_762(uVar7))
	{
		uVar21 = uVar7;
		Var13.f_1 = PED::_0xF6D9E1F3560CBF8E(iVar12, uVar21, iVar19, 0, 0);
	}
	if (func_762(uVar8))
	{
		uVar22 = uVar8;
		Var13.f_2 = PED::_0xF6D9E1F3560CBF8E(iVar12, uVar22, iVar19, 0, 0);
	}
	if (func_762(uVar9))
	{
		uVar23 = uVar9;
		Var13.f_3 = PED::_0xF6D9E1F3560CBF8E(iVar12, uVar23, iVar19, 0, 0);
	}
	if (func_762(uVar10))
	{
		uVar24 = uVar10;
		Var13.f_4 = PED::_0xF6D9E1F3560CBF8E(iVar12, uVar24, iVar19, 0, 0);
	}
	if (func_762(uVar11))
	{
		uVar25 = uVar11;
		Var13.f_5 = PED::_0xF6D9E1F3560CBF8E(iVar12, uVar25, iVar19, 0, 0);
	}
	func_763(Var13);
}

void func_464(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_524(iParam0, &iVar0, &iVar1);
	if (!func_623(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_764(iParam0, 1024))
	{
		return;
	}
	func_624(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = iParam1;
	((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 3;
}

int func_465(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_466(int iParam0)
{
	Global_1900383->f_393 = iParam0;
}

void func_467(int iParam0)
{
	var uVar0;
	var uVar58;
	var uVar116;
	var uVar174;
	var uVar232;
	var uVar248;
	var uVar264;
	int iVar280;
	int iVar281;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	uVar0 = 57;
	uVar58 = 57;
	uVar116 = 57;
	uVar174 = 57;
	func_345(iParam0, &uVar0);
	func_765(&uVar58);
	func_766(iParam0, &uVar0, 1);
	func_767(&uVar0, &uVar58, &uVar116);
	func_768(&uVar116);
	func_769(iParam0, &uVar174);
	uVar232 = 3;
	uVar248 = 3;
	uVar264 = 3;
	func_770(iParam0, &uVar232);
	func_771(&uVar248);
	iVar280 = func_772(&uVar232);
	iVar281 = func_772(&uVar248);
	if (iVar281 > iVar280)
	{
		func_773(&uVar248);
	}
	else
	{
		func_773(&uVar232);
	}
	func_774(iParam0);
	func_775(iParam0, &uVar264);
}

void func_468(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	PED::_0xDF631E4BCE1B1FC4(iParam0, 399422490, 0, 0);
	PED::_0xDF631E4BCE1B1FC4(iParam0, joaat("HORSE_SADDLES"), 0, 0);
	PED::_0xDF631E4BCE1B1FC4(iParam0, 88372018, 0, 0);
	PED::_0xDF631E4BCE1B1FC4(iParam0, -630346294, 0, 0);
	PED::_0xDF631E4BCE1B1FC4(iParam0, -273475295, 0, 0);
	PED::_0xDF631E4BCE1B1FC4(iParam0, -2142954459, 0, 0);
}

void func_469(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_433 = iParam1;
}

int func_470(int iParam0, int iParam1)
{
	float fVar0;

	if (iParam1 == -1)
	{
		return 0;
	}
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	fVar0 = func_471(iParam1);
	if (fVar0 == 1E+09f)
	{
		return 0;
	}
	if (func_757(iParam0, iParam1) >= fVar0)
	{
		return 1;
	}
	return 0;
}

float func_471(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15f;
		case 4:
			return 1E+09f;
		case 1:
			return 1E+09f;
		case 2:
			return 1E+09f;
		case 3:
			return 1E+09f;
		case 5:
			return 100f;
		case 6:
			return 30f;
		case 7:
			return 1E+09f;
		case 8:
			return 1E+09f;
		case 9:
			return 1E+09f;
		case 10:
			return 1E+09f;
		case 11:
			return 1E+09f;
		case 12:
			return 1E+09f;
		case 13:
			return 1E+09f;
		case 14:
			return 1E+09f;
		case 15:
			return 1E+09f;
		case 16:
			return 1E+09f;
		case 17:
			return 1E+09f;
		case 18:
			return 1E+09f;
		case 19:
			return 1E+09f;
		case 20:
			return 1E+09f;
		case 21:
			return 1E+09f;
		case 22:
			return 1E+09f;
	}
	return 1E+09f;
}

void func_472(int iParam0, int iParam1, float fParam2)
{
	if (iParam1 == -1)
	{
		return;
	}
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_2[iParam1] = fParam2;
}

void func_473(int iParam0)
{
	var uVar0;
	var uVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	uVar0 = func_663();
	ATTRIBUTE::SET_ATTRIBUTE_BONUS_RANK(iParam0, uVar0, 0);
	uVar1 = func_664();
	ATTRIBUTE::SET_ATTRIBUTE_BONUS_RANK(iParam0, uVar1, 0);
	PED::_0xDE1B1907A83A1550(iParam0, 1f);
	PED::_0x345C9F993A8AB4A4(iParam0, 1f);
	PED::_0xEF5A3D2285D8924B(iParam0, 1f);
}

int func_474(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 4:
		case 5:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_475(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (func_388(iParam0))
	{
		iVar0 = func_401(iParam0);
		func_315(iVar0);
	}
	func_315(0);
	func_717(iParam0, 0, 0);
	func_200(0, 1);
	func_776(0);
	PLAYER::_0x8FBF9EDB378CCB8C(PLAYER::PLAYER_ID(), iParam0);
	if (func_201() == 0)
	{
		PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID(), iParam0);
		func_217(0);
		func_214(0);
	}
	PED::SET_PED_CONFIG_FLAG(iParam0, 136, false);
	func_404();
}

void func_476(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::_IS_METAPED_USING_COMPONENT(iParam0, 1522539835))
	{
		PED::_SET_PED_COMPONENT_DISABLED(iParam0, 1522539835, 1);
	}
	if (PED::_IS_METAPED_USING_COMPONENT(iParam0, 2044190614))
	{
		PED::_SET_PED_COMPONENT_DISABLED(iParam0, 2044190614, 1);
	}
	if (PED::_IS_METAPED_USING_COMPONENT(iParam0, -749728163))
	{
		PED::_SET_PED_COMPONENT_DISABLED(iParam0, -749728163, 1);
	}
	if (PED::_IS_METAPED_USING_COMPONENT(iParam0, 149557334))
	{
		PED::_SET_PED_COMPONENT_DISABLED(iParam0, 149557334, 1);
	}
}

void func_477(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	iVar4 = ENTITY::_0x59B57C4B06531E1E(vVar1, 5f, iVar0, 3);
	iVar5 = 0;
	while (iVar5 < iVar4)
	{
		iVar6 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0);
		if (!ENTITY::IS_AN_ENTITY(iVar6))
		{
		}
		else
		{
			iVar7 = MISC::_GET_ENTITY_FROM_ITEM(iVar6);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
			}
			else if (!ENTITY::IS_ENTITY_AN_OBJECT(iVar7))
			{
			}
			else if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iVar7, iParam0))
			{
			}
			else if (TASK::_0x0CCFE72B43C9CF96(iVar7))
			{
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar7, true, true);
				uVar8 = MISC::_0x18013392501CE5DC(iVar6);
				OBJECT::DELETE_OBJECT(&uVar8);
			}
		}
		iVar5++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
}

void func_478(int iParam0)
{
	var uVar0;
	var uVar58;
	var uVar116;
	var uVar174;
	var uVar232;
	var uVar248;
	var uVar264;
	int iVar280;
	int iVar281;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	uVar0 = 57;
	uVar58 = 57;
	uVar116 = 57;
	uVar174 = 57;
	func_765(&uVar0);
	func_345(iParam0, &uVar58);
	func_346(iParam0, &uVar0);
	func_767(&uVar0, &uVar58, &uVar116);
	func_769(iParam0, &uVar116);
	func_768(&uVar174);
	uVar232 = 3;
	uVar248 = 3;
	uVar264 = 3;
	func_771(&uVar232);
	func_770(iParam0, &uVar248);
	iVar280 = func_772(&uVar232);
	iVar281 = func_772(&uVar248);
	if (iVar281 > iVar280)
	{
		func_775(iParam0, &uVar248);
	}
	else
	{
		func_775(iParam0, &uVar232);
	}
	func_773(&uVar264);
	func_774(iParam0);
	func_777(iParam0);
}

void func_479()
{
	struct<6> Var0;

	Var0 = { func_778() };
	PED::_0x13E7320C762F0477(Var0);
	PED::_0x13E7320C762F0477(Var0.f_1);
	PED::_0x13E7320C762F0477(Var0.f_2);
	PED::_0x13E7320C762F0477(Var0.f_3);
	PED::_0x13E7320C762F0477(Var0.f_4);
	PED::_0x13E7320C762F0477(Var0.f_5);
	func_779();
}

int func_480()
{
	return Global_1900383->f_418;
}

void func_481(int iParam0)
{
	Global_1900383->f_418 = iParam0;
}

void func_482(int iParam0)
{
	Global_1900383->f_418.f_1 = iParam0;
}

void func_483(int iParam0)
{
	Global_1900383->f_418.f_2 = iParam0;
}

int func_484()
{
	return Global_1900383->f_418.f_1;
}

int func_485(int iParam0)
{
	if ((((func_780(iParam0) || func_320(iParam0)) || func_781(iParam0)) || func_782(iParam0)) || func_783(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_486(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return 0;
	}
	if (!func_168(iParam0, -982327190))
	{
		TASK::TASK_STAND_STILL(iParam0, -1);
	}
	FLOCK::_0xFF1E339CE40EAAAF(iParam0, 0);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 48, true);
	POPULATION::_0xF74E134F40192884(iParam0, 2);
	return 1;
}

void func_487(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_115(iParam0);
	if (iVar0 < 2)
	{
		return;
	}
	bVar1 = false;
	iVar2 = MISC::GET_GAME_TIMER();
	iVar3 = func_784();
	if (iVar3 + 15000 > iVar2)
	{
		bVar1 = true;
	}
	if (!bVar1)
	{
		iVar4 = func_88(iParam0);
		if (PED::_GET_PED_STAMINA(iVar4) == PED::_GET_PED_MAX_STAMINA(iVar4))
		{
			return;
		}
		switch (iVar0)
		{
			case 2:
				fVar5 = 2.5f;
				break;
			case 3:
				fVar5 = 5f;
				break;
			case 4:
				fVar5 = 10f;
				break;
		}
		func_785(iVar4, fVar5);
		func_483(iVar2);
	}
}

bool func_488()
{
	return Global_40.f_1095.f_3134;
}

int func_489()
{
	return Global_1900383->f_444.f_18;
}

int func_490(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_524(iParam0, &iVar0, &iVar1);
	if (!func_764(iParam0, 65536) && !func_764(iParam0, 32768))
	{
		if (func_786(iVar0, iVar1))
		{
			return 1;
		}
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar2 /*3*/])->f_2 == iParam0)
		{
			return (Global_40.f_7756[iVar2 /*3*/])->f_1;
		}
		iVar2++;
	}
	return 0;
}

void func_491(int iParam0)
{
	Global_1900383->f_444.f_18 = iParam0;
}

void func_492(int iParam0)
{
	Global_40.f_1095.f_3134 = iParam0;
}

struct<2> func_493(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_494(var uParam0, int iParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

void func_495(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_435 = iParam1;
}

void func_496(int iParam0)
{
	Global_1935689->f_18 = iParam0;
}

void func_497(int iParam0)
{
	vector3 vVar0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;

	if (func_2() == 0)
	{
		return;
	}
	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &vVar0, 10))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	iVar10 = vVar0.z;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar10))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar10))
	{
		return;
	}
	iVar11 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar10);
	if (ENTITY::IS_ENTITY_DEAD(iVar11) || PED::IS_PED_INJURED(iVar11))
	{
		return;
	}
	iVar12 = vVar0.x;
	iVar13 = iVar12;
	switch (iVar13)
	{
		case 31:
			iVar14 = 0;
			break;
		case 32:
			iVar14 = 1;
			break;
		case 33:
			iVar14 = 2;
			break;
		default:
			return;
	}
	iVar15 = -1;
	bVar16 = false;
	if (func_388(iVar11))
	{
		bVar16 = true;
		iVar15 = func_401(iVar11);
	}
	bVar17 = false;
	if (!bVar16)
	{
		if (iVar14 != 2)
		{
			return;
		}
		if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar11, -1))
		{
			return;
		}
		if (func_389(iVar11))
		{
			bVar17 = true;
		}
		if (func_390(iVar11))
		{
			bVar17 = true;
		}
		if (func_320(iVar11))
		{
			bVar17 = true;
		}
		iVar18 = ENTITY::GET_ENTITY_POPULATION_TYPE(iVar11);
		if (iVar18 != 6 && iVar18 != 2)
		{
			bVar17 = true;
		}
	}
	if (bVar16)
	{
		if (func_232())
		{
			iVar19 = func_170();
			if (iVar19 == 22 || iVar19 == 37)
			{
				func_283(18, 1);
			}
			else
			{
				func_283(17, 1);
			}
			return;
		}
	}
	if (bVar16)
	{
		if (func_189(iVar15))
		{
			if (!func_194(16) && !func_196(16))
			{
				func_283(16, 1);
			}
			return;
		}
	}
	func_787(iVar11, iVar14, bVar17);
}

void func_498(int iParam0)
{
	vector3 vVar0;
	int iVar10;
	int iVar11;
	bool bVar12;

	if (func_2() == 0)
	{
		return;
	}
	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &vVar0, 10))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	iVar10 = vVar0.z;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar10))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar10))
	{
		return;
	}
	iVar11 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar10);
	if (ENTITY::IS_ENTITY_DEAD(iVar11) || PED::IS_PED_INJURED(iVar11))
	{
		return;
	}
	bVar12 = false;
	if (func_388(iVar11))
	{
		bVar12 = true;
	}
	if (!bVar12)
	{
		if (func_389(iVar11))
		{
			return;
		}
		if (func_390(iVar11))
		{
			return;
		}
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar11))
		{
			return;
		}
	}
	func_788(-1516555556 /* GXTEntry: "Horse Brush" */, iVar11);
}

void func_499(int iParam0)
{
	vector3 vVar0;
	int iVar10;
	int iVar11;
	bool bVar12;
	int iVar13;

	if (func_2() == 0)
	{
		return;
	}
	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &vVar0, 10))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	iVar10 = vVar0.z;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar10))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar10))
	{
		return;
	}
	iVar11 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar10);
	if (ENTITY::IS_ENTITY_DEAD(iVar11) || PED::IS_PED_INJURED(iVar11))
	{
		return;
	}
	bVar12 = false;
	if (func_388(iVar11))
	{
		bVar12 = true;
	}
	if (!bVar12)
	{
		if (func_389(iVar11))
		{
			return;
		}
		if (func_390(iVar11))
		{
			return;
		}
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar11))
		{
			return;
		}
	}
	iVar13 = func_789();
	if (iVar13 != 0)
	{
		func_788(iVar13, iVar11);
	}
}

void func_500()
{
	Global_40.f_1095.f_3135.f_2++;
}

void func_501(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_43 = 0;
}

void func_502(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_12 = iParam1;
}

void func_503(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_13 = iParam1;
}

int func_504(int iParam0, int iParam1)
{
	if (!ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam1, 0))
	{
		return 0;
	}
	if (!func_727(iParam1))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1627068364: /* GXTEntry: "Horse Reviver" */
			break;
	}
	func_790(iParam0, iParam1);
	func_494(func_791(1179720150), 1);
	return 1;
}

int func_505()
{
	if (func_733(1627068364 /* GXTEntry: "Horse Reviver" */, 1, 0) || func_733(-1795542128 /* GXTEntry: "Special Horse Reviver" */, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_506()
{
	return Global_40.f_1095.f_3135.f_2;
}

var func_507()
{
	return Global_1900383->f_444.f_17;
}

void func_508(int iParam0)
{
	Global_1900383->f_444.f_17 = iParam0;
}

void func_509()
{
	Global_1900383->f_444.f_17 = 0;
}

int func_510(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::_0x31FEF6A20F00B963(iParam0);
	if (iVar0 == 0)
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			iVar0 = func_281(iVar1);
		}
	}
	return iVar0;
}

int func_511(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_792(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 57)
	{
		iVar1 = func_681(iVar0, 1);
		iVar2 = iVar1;
		if (iParam0 == iVar2)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_512(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_284(iParam1, 0))
	{
		return;
	}
	if (!func_511(iParam1))
	{
		return;
	}
	iVar0 = func_793(iParam1);
	iVar1 = func_794(iVar0, 1);
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_298[iVar1] = (&(Global_40.f_1095.f_1[iParam0 /*436*/])->f_298[iVar1] + iParam2);
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_298[iVar1] = func_795(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_298[iVar1]), 0, 10);
}

int func_513(int iParam0)
{
	switch (iParam0)
	{
		case -514494287: /* GXTEntry: "Legendary Bear Pelt" */
			return joaat("a_c_bear_01");
		case -150200864: /* GXTEntry: "Legendary Beaver Pelt" */
			return joaat("a_c_beaver_01");
		case -734947450: /* GXTEntry: "Legendary Ram Hide" */
			return joaat("a_c_bighornram_01");
		case 2022985736: /* GXTEntry: "Legendary White Bison Pelt" */
			return joaat("a_c_buffalo_01");
		case 2109269555: /* GXTEntry: "Legendary Boar Pelt" */
			return joaat("a_c_boar_01");
		case -888740979: /* GXTEntry: "Legendary Buck Pelt" */
			return joaat("a_c_buck_01");
		case -987731097: /* GXTEntry: "Legendary Tatanka Bison Pelt" */
			return joaat("a_c_buffalo_tatanka_01");
		case -444893329: /* GXTEntry: "Legendary Alligator Skin" */
			return joaat("a_c_alligator_02");
		case 1528935719: /* GXTEntry: "Legendary Cougar Pelt" */
			return joaat("a_c_cougar_01");
		case -1517904196: /* GXTEntry: "Legendary Coyote Pelt" */
			return joaat("a_c_coyote_01");
		case 229379699: /* GXTEntry: "Legendary Elk Pelt" */
			return joaat("a_c_elk_01");
		case 1642484975: /* GXTEntry: "Legendary Fox Pelt" */
			return joaat("a_c_fox_01");
		case -687487191: /* GXTEntry: "Legendary Moose Pelt" */
			return joaat("a_c_moose_01");
		case 657906142: /* GXTEntry: "Legendary Panther Pelt" */
			return joaat("a_c_panther_01");
		case -103050851: /* GXTEntry: "Legendary Pronghorn Hide" */
			return joaat("a_c_pronghorn_01");
		case 552246565: /* GXTEntry: "Legendary Wolf Pelt" */
			return joaat("a_c_wolf");
		default:
			break;
	}
	return 0;
}

int func_514(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("a_c_bear_01"):
			*iParam1 = 0;
			return 1;
		case joaat("a_c_beaver_01"):
			*iParam1 = 1;
			return 1;
		case joaat("a_c_bighornram_01"):
			*iParam1 = 2;
			return 1;
		case joaat("a_c_buffalo_01"):
			*iParam1 = 3;
			return 1;
		case joaat("a_c_boar_01"):
			*iParam1 = 4;
			return 1;
		case joaat("a_c_buck_01"):
			*iParam1 = 5;
			return 1;
		case joaat("a_c_buffalo_tatanka_01"):
			*iParam1 = 6;
			return 1;
		case joaat("a_c_alligator_02"):
			*iParam1 = 7;
			return 1;
		case joaat("a_c_cougar_01"):
			*iParam1 = 8;
			return 1;
		case joaat("a_c_coyote_01"):
			*iParam1 = 9;
			return 1;
		case joaat("a_c_elk_01"):
			*iParam1 = 10;
			return 1;
		case joaat("a_c_fox_01"):
			*iParam1 = 11;
			return 1;
		case joaat("a_c_moose_01"):
			*iParam1 = 12;
			return 1;
		case joaat("a_c_panther_01"):
			*iParam1 = 13;
			return 1;
		case joaat("a_c_pronghorn_01"):
			*iParam1 = 14;
			return 1;
		case joaat("a_c_wolf"):
			*iParam1 = 15;
			return 1;
	}
	return 0;
}

int func_515(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_276(iVar0, &iVar2, &uVar3, &iVar1, &uVar4);
	if (func_277(&uVar5, iVar0, iVar1, iVar2))
	{
	}
	return uVar5;
}

void func_516(int iParam0)
{
	if (func_796(iParam0))
	{
		if (func_94() && func_797(4))
		{
			if (!func_799(func_798(iParam0)))
			{
				if (func_801(func_800(iParam0)))
				{
					MAP::_0xD8C7162AB2E2AF45(func_802(func_800(iParam0)));
					MAP::_MAP_DISCOVERY_SET_ENABLED(func_803(func_800(iParam0)));
				}
			}
		}
	}
}

int func_517(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::_0x9A100F1CF4546629(iParam1) || ENTITY::_0xC346A546612C49A9(iParam1))
	{
		iVar0 = func_515(iParam1);
		if (!func_284(iVar0, 0))
		{
			iVar0 = func_510(iParam1);
		}
	}
	else
	{
		iVar0 = func_510(iParam1);
	}
	uVar1 = func_285(iParam0, iVar0, 1, 1, -142743235);
	return uVar1;
}

int func_518(int iParam0, int iParam1)
{
	int iVar0;
	struct<4> Var1;
	int iVar5;

	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = func_273(iParam1);
	if (!PED::_0x608BC6A6AACD5036(&Var1, iParam0, iVar0, 0))
	{
		return 0;
	}
	iVar5 = Var1.f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		return 0;
	}
	return 1;
}

bool func_519(int iParam0, int iParam1)
{
	if (iParam1 == 7)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(&(Global_1357549->f_3[iParam1])))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, &(Global_1357549->f_3[iParam1]), true, 0);
}

int func_520(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return func_519(func_88(iParam0), iParam1);
}

void func_521(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_387(iParam0, 32);
	func_404();
}

void func_522(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_682(iParam0);
	func_718(iParam0, 0);
	func_804(iParam0, 0f);
}

void func_523(int iParam0)
{
	_NAMESPACE71::_0xDD1232B332CBB9E7(1, iParam0, 0);
}

void func_524(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

void func_525(var uParam0)
{
	*uParam0 = -377364164; /* GXTEntry: "Natural" */
	uParam0->f_1 = 357708345; /* GXTEntry: "Natural" */
}

void func_526(int iParam0, struct<2> Param1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_805(iParam0, Param1))
	{
	}
	if (!func_806(iParam0, Param1.f_1))
	{
	}
}

void func_527(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_272((*uParam0)[iVar0 /*94*/]);
		iVar0++;
	}
}

void func_528(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_529(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		(*uParam0)[iVar0 /*5*/] = 0;
		((*uParam0)[iVar0 /*5*/])->f_1 = 0;
		((*uParam0)[iVar0 /*5*/])->f_2 = 0;
		((*uParam0)[iVar0 /*5*/])->f_3 = 0;
		((*uParam0)[iVar0 /*5*/])->f_4 = 0;
		iVar0++;
	}
}

void func_530(var uParam0)
{
	int iVar0;

	uParam0->f_1 = 0f;
	*uParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (iVar0 == -1)
		{
		}
		else
		{
			uParam0->f_2[iVar0] = 0f;
		}
		iVar0++;
	}
}

void func_531(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_532(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	if (iParam0 == 2)
	{
		iVar0 = 50;
	}
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_533(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1f;
}

void func_534(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_535(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

void func_536(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	MISC::SET_BIT(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_537(int iParam0)
{
	int iVar0;

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
			func_807(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_808(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_808(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_808(3);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			func_234(1);
			break;
		case 34:
			func_236(1);
			break;
		case 35:
			func_238(1);
			break;
		case 36:
			break;
		case 37:
			func_809(0);
			break;
		case 38:
			func_810(0);
			break;
		case 39:
			func_811(0);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if ((!&Global_1879534 && func_94()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_812("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_283(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_94()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_812("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_283(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_94()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_812("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_283(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_94()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_812("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_283(589, 0);
			break;
		case 24:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-200143754, true);
			UNLOCK::_UNLOCK_SET_VISIBLE(-200143754, true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			if (func_2() == -1)
			{
				if (!func_813(99217379) || func_814(99217379) == 2110595215)
				{
					if (func_640())
					{
						iVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						iVar0 = 899611344; /* GXTEntry: "Off-Hand Holster" */
					}
					if (!func_733(iVar0, 1, 0))
					{
						func_815(iVar0, 1, 752097756);
					}
					func_816(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_2() == -1)
			{
				if (!func_733(1013902307, 1, 0))
				{
					func_815(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_2() == -1)
			{
				if (!func_733(1013902307, 1, 0))
				{
					func_815(1013902307, 1, 752097756);
				}
				if (!func_733(142640135, 1, 0))
				{
					func_815(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_2() == -1)
			{
				if (!func_733(786809402, 1, 0))
				{
					func_815(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_2() == -1)
			{
				if (!func_733(786809402, 1, 0))
				{
					func_815(786809402, 1, 752097756);
				}
				if (!func_733(-518019409, 1, 0))
				{
					func_815(-518019409, 1, 752097756);
				}
			}
			break;
		case 23:
			PLAYER::_0x5B9813ECF7633FE8(0);
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
		case 30:
			break;
		case 44:
			break;
		case 45:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-843169622, true);
			Global_1935630->f_47 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			func_817();
			break;
		case 47:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-78935213, true);
			break;
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-384786155, true);
			break;
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(296662302, true);
			break;
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-1871453000, true);
			break;
		case 56:
			UNLOCK::_UNLOCK_SET_UNLOCKED(1397349651, true);
			break;
	}
}

int func_538(int iParam0)
{
	switch (iParam0)
	{
		case -1523757120:
		case -1516219602:
		case -1063137731:
		case 604357666:
		case 705691988:
		case 1048964673:
		case 1576849913:
			return 1;
	}
	return 0;
}

bool func_539()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(99890643);
}

int func_540(int iParam0)
{
	int iVar0;
	struct<4> Var1;

	iVar0 = func_720(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_330(0) };
	if (func_818(&Var1, iVar0, 0) > 0)
	{
		return 1;
	}
	return 0;
}

int func_541(int iParam0)
{
	struct<10> Var0;
	struct<5> Var29;

	Var0.f_9 = -1591664384;
	if (!func_719(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { Var0.f_5 };
	Var29.f_4 = Var0.f_9;
	if (!func_819(Var0.f_4, &Var0, &Var29, -1, -142743235, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_542(int iParam0)
{
	if (iParam0 == 808655744)
	{
		return 559905966;
	}
	switch (iParam0)
	{
		case joaat("a_c_horse_americanpaint_overo"):
			return 1538827865 /* GXTEntry: "American Paint~n~Overo Coat" */;
		case joaat("a_c_horse_americanpaint_tobiano"):
			return -1792561227 /* GXTEntry: "American Paint~n~Tobiano Coat" */;
		case 1792770814:
			return 1033678910 /* GXTEntry: "American Paint~n~Splashed White Coat" */;
		case -1963397600:
			return -1942141178 /* GXTEntry: "American Paint~n~Grey Overo Coat" */;
		case -1250098797:
			return 671599957 /* GXTEntry: "American Standardbred~n~Black Coat" */;
		case -318278790:
			return -1554935503 /* GXTEntry: "American Standardbred~n~Buckskin Coat" */;
		case 55096099:
			return 694610769 /* GXTEntry: "American Standardbred~n~Palomino Dapple Coat" */;
		case -458397856:
			return 1941463607 /* GXTEntry: "American Standardbred~n~Silver Tail Buckskin Coat" */;
		case -444610976:
			return -887316537 /* GXTEntry: "Andalusian~n~Dark Bay Coat" */;
		case 746627200:
			return 1762474047 /* GXTEntry: "Andalusian~n~Rose Grey Coat" */;
		case 705691988:
			return -828859553 /* GXTEntry: "Andalusian~n~Perlino Coat" */;
		case joaat("a_c_horse_appaloosa_blanket"):
			return 1410237043 /* GXTEntry: "Appaloosa~n~Blanket Coat" */;
			return -2026073756 /* GXTEntry: "Appaloosa~n~Leopard Blanket Coat" */;
			return 729407854;
			return 2002245664 /* GXTEntry: "Appaloosa~n~Brown Leopard Coat" */;
			return -1120227140 /* GXTEntry: "Appaloosa~n~Leopard Coat" */;
			return 1142681594 /* GXTEntry: "Arabian~n~Black Coat" */;
			return 1214981718 /* GXTEntry: "Arabian~n~Red Chestnut Coat" */;
			return -845373950;
			return -864588185 /* GXTEntry: "Arabian~n~Rose Grey Bay Coat" */;
			return 1482814085;
			return -1040918754 /* GXTEntry: "Arabian~n~White Coat" */;
			return 535545841 /* GXTEntry: "Ardennes~n~Bay Roan Coat" */;
			return 1686036388 /* GXTEntry: "Ardennes~n~Strawberry Roan Coat" */;
			return -621245377 /* GXTEntry: "Ardennes~n~Iron Grey Roan Coat" */;
			return 2125477381;
			return 1808724704 /* GXTEntry: "Belgian~n~Mealy Chestnut Coat" */;
			return -1745871311 /* GXTEntry: "Dutch Warmblood~n~Sooty Buckskin Coat" */;
			return -1366099125 /* GXTEntry: "Dutch Warmblood~n~Seal Brown Coat" */;
			return -1900776854 /* GXTEntry: "Dutch Warmblood~n~Chocolate Roan Coat" */;
			return 1381855825 /* GXTEntry: "Hungarian Halfbred~n~Flaxen Chestnut Coat" */;
			return -470894301 /* GXTEntry: "Hungarian Halfbred~n~Flaxen Piebald Tobiano Coat" */;
			return -58297715 /* GXTEntry: "Hungarian Halfbred~n~Dark Dapple Grey" */;
			return 919533729 /* GXTEntry: "Kentucky Saddler~n~Black Coat" */;
			return -1158763155;
			return 1112812928 /* GXTEntry: "Kentucky Saddler~n~Chestnut Pinto Coat" */;
			return 753764318 /* GXTEntry: "Kentucky Saddler~n~Grey Coat" */;
			return 2100045093 /* GXTEntry: "Kentucky Saddler~n~Silver Bay Coat" */;
			return 1097965086 /* GXTEntry: "Missouri Fox Trotter~n~Amber Champagne" */;
			return -2136667309 /* GXTEntry: "Missouri Fox Trotter~n~Silver Dapple Pinto Coat" */;
			return -376463594 /* GXTEntry: "Morgan~n~Bay Coat" */;
			return -1917318030 /* GXTEntry: "Morgan~n~Bay Roan Coat" */;
			return 1631640006 /* GXTEntry: "Morgan~n~Flaxen Chestnut Coat" */;
			return -1565311117;
			return 1714576673 /* GXTEntry: "Morgan~n~Palomino Coat" */;
			return 210760725 /* GXTEntry: "Mustang~n~Tiger Grullo Dun Coat" */;
			return 2051021144 /* GXTEntry: "Mustang~n~Wild Bay Coat" */;
			return 1924406350 /* GXTEntry: "Mustang~n~Tiger Striped Bay Coat" */;
			return -1990143531 /* GXTEntry: "Nokota~n~Blue Roan Coat" */;
			return 1741899492 /* GXTEntry: "Nokota~n~White Roan Coat" */;
			return -1629575335 /* GXTEntry: "Nokota~n~Reverse Dapple Roan Coat" */;
			return 1096294193 /* GXTEntry: "Shire~n~Dark Bay Coat" */;
			return -1162498792 /* GXTEntry: "Shire~n~Light Grey Coat" */;
			return -212500005 /* GXTEntry: "Suffolk Punch~n~Sorrel Coat" */;
			return -538557079 /* GXTEntry: "Suffolk Punch~n~Red Chestnut Coat" */;
			return 171150858 /* GXTEntry: "Tennessee Walker~n~Black Rabicano Coat" */;
			return 67538819 /* GXTEntry: "Tennessee Walker~n~Chestnut Coat" */;
			return -126472599 /* GXTEntry: "Tennessee Walker~n~Dapple Bay Coat" */;
			return -1219957736;
			return -332060056 /* GXTEntry: "Tennessee Walker~n~Red Roan Coat" */;
			return 1917500091 /* GXTEntry: "Tennessee Walker~n~Flaxen Roan Coat" */;
			return -1043453945 /* GXTEntry: "Thoroughbred~n~Blood Bay Coat" */;
			return 1723487083 /* GXTEntry: "Thoroughbred~n~Dapple Grey Coat" */;
			return 2044230644 /* GXTEntry: "Thoroughbred~n~Brindle Coat" */;
			return 1680713143 /* GXTEntry: "Thoroughbred~n~Reverse Dapple Black Coat" */;
			return 344528703 /* GXTEntry: "Turkoman~n~Dark Bay Coat" */;
			return -1674873797 /* GXTEntry: "Turkoman~n~Gold Coat" */;
			return 281852151 /* GXTEntry: "Turkoman~n~Silver Coat" */;
			return -285185056;
			return -1692268955 /* GXTEntry: "Appaloosa~n~Black Snowflake Coat" */;
			return 2130706226;
			return -1754375530 /* GXTEntry: "Hungarian Halfbred~n~Liver Chestnut Coat" */;
			return -71211764 /* GXTEntry: "Missouri Fox Trotter~n~Sable Champagne Coat" */;
			return -1390353518 /* GXTEntry: "Mustang~n~Golden Dun Coat" */;
			return 330935532 /* GXTEntry: "Tennessee Walker~n~Mahogany Bay Coat" */;
			return -935042458 /* GXTEntry: "Shire~n~Raven Black Coat" */;
			return -41062704;
			return 887669186;
			return 2102774612;
			return -2011111190;
			return -535752499;
			return 0;
		}

int func_543(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	if (!func_284(iParam1, 0))
	{
		return 0;
	}
	if (!func_820(iParam1))
	{
		return 0;
	}
	if (func_540(iParam0))
	{
		return 0;
	}
	iVar0 = func_720(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_330(0) };
	Var1.f_4 = iVar0;
	if (!func_334(iParam1, &uVar6, &Var1, 1, 752097756, 0))
	{
		return 0;
	}
	return 1;
}

float func_544(int iParam0)
{
	int iVar0;
	float fVar1;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	if (!func_71(iParam0))
	{
		return 0f;
	}
	iVar0 = func_88(iParam0);
	fVar1 = func_190(iVar0);
	return fVar1;
}

int func_545(int iParam0, var uParam1)
{
	struct<29> Var0;

	Var0.f_9 = -1591664384;
	if (!func_719(iParam0, &Var0))
	{
		return 0;
	}
	Var0.f_14 = uParam1->f_14;
	Var0.f_15 = uParam1->f_15;
	Var0.f_16 = { uParam1->f_16 };
	Var0.f_24 = uParam1->f_24;
	Var0.f_25 = uParam1->f_25;
	Var0.f_26 = uParam1->f_26;
	Var0.f_27 = uParam1->f_27;
	Var0.f_28 = uParam1->f_28;
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Var0.f_16)))
	{
		StringCopy(&(Var0.f_16), func_821(), 64);
	}
	if (!INVENTORY::_0xD80A8854DB5CFBA5(func_666(0), &Var0, &Var0, 29))
	{
		return 0;
	}
	return 1;
}

void func_546()
{
	var uVar0;

	if (func_822())
	{
		uVar0 = func_823();
		MAP::REMOVE_BLIP(&uVar0);
		func_824(0);
	}
}

int func_547(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 2139774588:
			return 1;
		case 1142025875: /* GXTEntry: "Murder" */
			return 2;
		case 1587891565:
			return 4;
		case 1877013492: /* GXTEntry: "Frighten" */
			return 32;
		case -643014279: /* GXTEntry: "Killed Vermin" */
			return 64;
		case -597116214: /* GXTEntry: "Killed Domestic Animal" */
			return 128;
		case 551416228: /* GXTEntry: "Killed Horse" */
			return 256;
		case 1022576842: /* GXTEntry: "Stole Horse" */
			return 512;
		case 953325896: /* GXTEntry: "Stole Donkey" */
			return 1024;
		case 508358508: /* GXTEntry: "Stole Mule" */
			return 2048;
		case -735200598: /* GXTEntry: "Trampled Innocent" */
			return 4096;
		case -856432278:
			return 8192;
		case -2010847721: /* GXTEntry: "Abandon Dead Animals" */
			return 16384;
		case 446961221: /* GXTEntry: "Watched Animal Bleedout" */
			return 32768;
		case -1972216640: /* GXTEntry: "Antagonize" */
			return 65536;
		case 530833824: /* GXTEntry: "Theft" */
			return 131072;
		case 1682361219: /* GXTEntry: "Intervened" */
			return 262144;
		case 158959085: /* GXTEntry: "Wanted In Camp" */
			return 524288;
		case 1919819559: /* GXTEntry: "Donated Game" */
			return 1048576;
		case 1461411082: /* GXTEntry: "Item Request" */
			return 2097152;
		case -549508280: /* GXTEntry: "Long Absence" */
			return 4194304;
		default:
			break;
	}
	return 0;
}

int func_548(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -2;
		case 2:
			return -5;
		case 3:
			return -10;
		case 4:
			return -20;
		case 5:
			return -40;
		case 6:
			return -160;
		case 7:
			return -320;
		case 8:
			return -480;
		case 18:
			return -640;
		case 9:
			return 0;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 5;
		case 13:
			return 10;
		case 14:
			return 20;
		case 15:
			return 40;
		case 16:
			return 160;
		case 17:
			return 640;
		default:
			break;
	}
	return 0;
}

void func_549(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	struct<2> Var8;

	iVar0 = func_825();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_826(iParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_override"))
			{
				iParam0 = (DECORATOR::DECOR_GET_INT(iParam5, "honor_override") * -1);
				DECORATOR::DECOR_REMOVE(iParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_bank"))
			{
				iParam0 = (iParam0 - DECORATOR::DECOR_GET_INT(iParam5, "honor_bank"));
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1f;
	if (func_140(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_640())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != 446961221)
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = BUILTIN::CEIL((IntToFloat(iParam0) * fVar4));
	}
	else
	{
		iVar5 = BUILTIN::FLOOR((IntToFloat(iParam0) * fVar4));
	}
	Global_40.f_11095.f_35 = (Global_40.f_11095.f_35 + iVar5);
	Global_40.f_11095.f_35 = func_795(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_825();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_827(iVar1);
		func_829(func_828(), 0, 4000);
		func_830(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		func_831(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_494(func_832(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_548(14))
				{
					sVar7 = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_833(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_754(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_754(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_494(func_832(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_548(4))
				{
					sVar7 = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_833(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_754(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_754(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_832(-1990689970) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_0xE6B763C7F4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_834(10, 1);
	}
}

void func_550(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0 /*6*/] = iParam1;
	(Global_1347477->f_155[iParam0 /*6*/])->f_2 = iParam2;
	(Global_1347477->f_155[iParam0 /*6*/])->f_3 = iParam3;
	(Global_1347477->f_155[iParam0 /*6*/])->f_4 = iParam4;
	(Global_1347477->f_155[iParam0 /*6*/])->f_5 = bParam5;
	(Global_1347477->f_155[iParam0 /*6*/])->f_1 = MISC::GET_GAME_TIMER() + 500;
}

int func_551()
{
	return Global_40.f_1095.f_3135.f_1;
}

var func_552()
{
	return Global_1900383->f_444.f_2;
}

void func_553()
{
	Global_1900383->f_444.f_2 = 0;
}

void func_554()
{
	Global_40.f_1095.f_3135.f_1++;
}

void func_555(int iParam0)
{
	Global_1900383->f_444.f_2 = iParam0;
}

bool func_556()
{
	return Global_1900383->f_444.f_3;
}

int func_557()
{
	return Global_1900383->f_444.f_4;
}

void func_558(int iParam0)
{
	Global_1900383->f_444.f_3 = iParam0;
}

void func_559()
{
	Global_1900383->f_444.f_4 = 0;
}

int func_560(int iParam0)
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
			if (Var1.f_2 == 1644203656 && !func_835(iParam0, Var1, 1))
			{
				return 1;
			}
		}
		iVar48++;
	}
	return 0;
}

int func_561()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_ID();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
		return 0;
	}
	if (!PLAYER::_0x3EE1F7A8C32F24E1(iVar0, &iVar1, 0, 0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return 0;
	}
	iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
	if (PED::IS_PED_INJURED(iVar2))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar2))
	{
		return 0;
	}
	if (!func_391(iVar2))
	{
		return 0;
	}
	return iVar2;
}

int func_562()
{
	return Global_1900383->f_411.f_1;
}

void func_563(int iParam0)
{
	Global_1900383->f_411.f_1 = iParam0;
}

void func_564(int iParam0)
{
	Global_1900383->f_411 = iParam0;
}

void func_565()
{
	if (func_194(47))
	{
		func_195(47);
	}
	if (func_196(47))
	{
		func_197(47);
	}
	if (func_194(48))
	{
		func_195(48);
	}
	if (func_196(47))
	{
		func_197(47);
	}
	if (func_194(49))
	{
		func_195(49);
	}
	if (func_196(49))
	{
		func_197(49);
	}
	if (func_194(50))
	{
		func_195(50);
	}
	if (func_196(50))
	{
		func_197(50);
	}
	if (func_194(51))
	{
		func_195(51);
	}
	if (func_196(51))
	{
		func_197(51);
	}
}

int func_566(int iParam0)
{
	var uVar0;
	var uVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	uVar1 = PLAYER::_0x0139637A3BFF8B6D(iParam0, &uVar0);
	if (PLAYER::_0x0772F87D7B07719A(PLAYER::PLAYER_ID(), uVar0, uVar1))
	{
		return 1;
	}
	return 0;
}

void func_567(int iParam0)
{
	Global_1900383->f_411.f_2 = iParam0;
}

int func_568()
{
	return Global_1900383->f_411.f_2;
}

void func_569()
{
	func_564(0);
	func_563(0);
	func_567(0);
}

bool func_570()
{
	return Global_1900383->f_444.f_5;
}

int func_571()
{
	return Global_40.f_1095.f_3135.f_3;
}

int func_572()
{
	return Global_1900383->f_444.f_6;
}

void func_573(int iParam0)
{
	Global_1900383->f_444.f_5 = iParam0;
}

void func_574()
{
	Global_1900383->f_444.f_6 = 0;
}

void func_575(int iParam0)
{
	Global_1900383->f_444.f_9 = iParam0;
}

void func_576()
{
	Global_40.f_1095.f_3135.f_3++;
}

bool func_577()
{
	return Global_1900383->f_444.f_7;
}

int func_578(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return &((Global_40.f_1095.f_1[iParam0 /*436*/])->f_398[iParam1 /*4*/]);
}

int func_579()
{
	return Global_1900383->f_444.f_8;
}

void func_580(int iParam0)
{
	Global_1900383->f_444.f_7 = iParam0;
}

void func_581()
{
	Global_1900383->f_444.f_8 = 0;
}

int func_582()
{
	return Global_1900383->f_444.f_9;
}

bool func_583()
{
	return Global_1900383->f_444.f_10;
}

void func_584(int iParam0)
{
	Global_1900383->f_444.f_10 = iParam0;
}

void func_585()
{
	Global_1900383->f_444.f_9 = 0;
}

bool func_586()
{
	return Global_40.f_1095.f_3135.f_4;
}

int func_587(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;

	iVar0 = -1;
	iVar1 = -1;
	fVar4 = -1f;
	iVar0 = 0;
	while (iVar0 < 153)
	{
		if (!func_588(iVar0))
		{
		}
		else if (func_836(iVar0) != iParam0)
		{
		}
		else if (bParam1)
		{
			if (!func_837(iVar0))
			{
			}
			else
			{
				iVar2 = func_838(iVar0);
				if (bParam3)
				{
					if (!func_839(iVar2))
					{
					}
					else if (bParam2)
					{
						if (func_840(iVar2))
						{
						}
						else
						{
							fVar3 = func_841(Global_35, func_589(iVar0), 1);
							if (fVar3 < fVar4 || fVar4 == -1f)
							{
								iVar1 = iVar0;
								fVar4 = fVar3;
							}
						}
						iVar0++;
						return iVar1;
					}
				}
			}
		}
	}

bool func_588(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

Vector3 func_589(int iParam0)
{
	if (!func_588(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return 2947.055f, 1320.15f, 43.8203f;
		case 2:
			return 2939.063f, 1287.116f, 43.6529f;
		case 3:
			return 2932.97f, 1282.56f, 43.67f;
		case 1:
			return 2947.64f, 1344.901f, 43.899f;
		case 99:
			return -5227.357f, -3470.067f, -20.49293f;
		case 100:
			return -5228.75f, -3468.28f, -21.57f;
		case 7:
			return -784.49f, -1321.95f, 42.88f;
		case 10:
			return -753.4219f, -1284.24f, 43.20049f;
		case 9:
			return -814.4116f, -1367.243f, 43.7509f;
		case 13:
			return -868.3356f, -1366.207f, 44.75311f;
		case 14:
			return -875.03f, -1327.09f, 42.97f;
		case 15:
			return -875.02f, -1326.71f, 42.97f;
		case 17:
			return -762.0716f, -1293.549f, 42.8355f;
		case 12:
			return -813.6f, -1373.8f, 44.2f;
		case 16:
			return -805.72f, -1330.5f, 42.67f;
		case 18:
			return 1417.288f, 273.5687f, 88.4881f;
		case 20:
			return 1521.91f, 441.15f, 89.68f;
		case 21:
			return 1523.63f, 442.65f, 89.68f;
		case 22:
			return 2161.5f, -618.5f, 43f;
		case 23:
			return -1092.88f, -575.69f, 81.41f;
		case 24:
			return -1094.35f, -577.48f, 81.41f;
		case 25:
			return 1294.084f, -1303.102f, 76.0418f;
		case 26:
			return 1297.423f, -1278.412f, 75.65752f;
		case 27:
			return 1319.43f, -1142.08f, 81.41f;
		case 28:
			return 1329.755f, -1294.218f, 76.0092f;
		case 29:
			return 1323.734f, -1321.775f, 77.8924f;
		case 30:
			return 1226.71f, -1295.08f, 75.9f;
		case 31:
			return 1230.34f, -1298.578f, 75.9027f;
		case 32:
			return 1332.55f, -1298.679f, 75.35602f;
		case 35:
			return 1209.053f, -193.1814f, 101.9785f;
		case 36:
			return 2644.188f, -1292.507f, 51.2496f;
		case 37:
			return 2657.466f, -1180.96f, 53.2785f;
		case 38:
			return 2819.495f, -1331.29f, 45.514f;
		case 39:
			return 2721.24f, -1231.66f, 49.37f;
		case 41:
			return 2859.51f, -1202.16f, 48.59f;
		case 42:
			return 2825.607f, -1318.207f, 45.7557f;
		case 43:
			return 2718f, -1287f, 49.6f;
		case 44:
			return 2508.212f, -1449.654f, 48.41523f;
		case 45:
			return 2748.811f, -1398.277f, 45.18309f;
		case 46:
			return 2747.824f, -1396.384f, 45.18309f;
		case 47:
			return 2555.09f, -1166.97f, 52.68f;
		case 48:
			return 2842.45f, -1227.66f, 46.66f;
		case 49:
			return 2817.64f, -1325.011f, 47.00512f;
		case 50:
			return 2836.992f, -1305.805f, 45.6964f;
		case 55:
			return 2832.02f, -1225.563f, 46.6422f;
		case 54:
			return 2734.174f, -1119.755f, 50.10792f;
		case 51:
			return 2683.84f, -1399.642f, 45.37881f;
		case 60:
			return -1753.404f, -392.557f, 155.2576f;
		case 61:
			return -1790f, -388.27f, 159.33f;
		case 62:
			return -1818.99f, -370.94f, 162.3f;
		case 63:
			return -1819.88f, -561.8194f, 157.2323f;
		case 65:
			return -1763.78f, -385.1118f, 156.7401f;
		case 64:
			return -1773.314f, -393.9122f, 155.5647f;
		case 68:
			return -307.9643f, 773.6048f, 117.7031f;
		case 69:
			return -306.3f, 815.08f, 117.98f;
		case 70:
			return 0f, 0f, 0f;
		case 72:
			return -338.8647f, 767.4334f, 115.5628f;
		case 73:
			return -287.9538f, 804.0544f, 118.3859f;
		case 74:
			return -324f, 803.72f, 116.88f;
		case 75:
			return -281.82f, 778.97f, 118.5f;
		case 76:
			return -369.4457f, 786.6935f, 115.9904f;
		case 77:
			return -178.0316f, 628.0621f, 113.0896f;
		case 78:
			return -175.0377f, 631.7999f, 113.0896f;
		case 80:
			return -272.7182f, 785.6115f, 117.4202f;
		case 79:
			return -325.532f, 773.6285f, 117.5038f;
		case 82:
			return 3025.786f, 562.7253f, 43.7167f;
		case 86:
			return 2986.224f, 569.9468f, 43.62284f;
		case 85:
			return 2986.94f, 574.9f, 43.64f;
		case 84:
			return 2967.273f, 796.7416f, 52.5948f;
		case 87:
			return -1302.951f, 394.6608f, 94.3817f;
		case 89:
			return -1300.83f, 399.7599f, 94.38248f;
		case 88:
			return -1299.891f, 401.3615f, 94.38248f;
		case 93:
			return -5518.071f, -2906.217f, -2.7513f;
		case 90:
			return -5487.197f, -2939.038f, -1.3872f;
		case 91:
			return -5507.993f, -2964.844f, -1.6215f;
		case 92:
			return -5509.019f, -2947.435f, -2.8934f;
		case 94:
			return -5520.701f, -3044.427f, -1.40419f;
		case 95:
			return -3687.3f, -2623.39f, -14.44f;
		case 4:
			return -2842.211f, 137.3398f, 183.8268f;
		case 5:
			return -1005.934f, -540.8262f, 97.9502f;
		case 34:
			return 2076.835f, 1000.829f, 111.4973f;
		case 67:
			return -2251.034f, -1916.911f, 115.9488f;
		case 56:
			return -142.072f, -23.5242f, 95.0883f;
		case 57:
			return 675.3091f, -1251.233f, 43.0152f;
		case 58:
			return 1875.2f, -1859.182f, 41.8f;
		case 59:
			return 2366.084f, 1347.122f, 105.1305f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_590(int iParam0)
{
	Global_1900383->f_444.f_11 = *iParam0;
}

var func_591()
{
	return Global_1900383->f_444.f_11;
}

int func_592()
{
	if (func_380(7))
	{
		return 1;
	}
	if (func_210())
	{
		return 1;
	}
	return 0;
}

int func_593(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = func_211();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(false);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		return 0;
	}
	ITEMSET::_0x20A4BF0E09BEE146(iVar1);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar1);
	bVar2 = false;
	iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	if (iVar3 > 0)
	{
		if (ITEMSET::IS_IN_ITEMSET(iVar0, iVar1))
		{
			bVar2 = true;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
	if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_594()
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!func_380(7))
	{
		if (func_595(7))
		{
			func_842();
			return 1;
		}
	}
	if (func_380(7))
	{
		if (func_213() == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(func_88(7)))
			{
				if (!ENTITY::IS_ENTITY_IN_WATER(func_88(7)))
				{
					return 1;
				}
			}
		}
	}
	if (func_593(Global_35))
	{
		return 1;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = func_843();
	if (iVar1 == 0)
	{
		func_844(MISC::GET_GAME_TIMER());
		return 1;
	}
	if (iVar1 + 10000 > iVar0)
	{
		return 1;
	}
	if (ENTITY::_0x383F64263F946E45(&uVar2, func_211(), 4, Global_35, 0, 1))
	{
		func_842();
		return 1;
	}
	return 0;
}

int func_595(int iParam0)
{
	int iVar0;

	iParam0 = func_87(iParam0);
	if (iParam0 <= -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_88(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iParam0 == func_201())
		{
			return 1;
		}
		return 0;
	}
	if (iVar0 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_596()
{
	Global_1900383->f_444.f_12 = 0;
}

var func_597()
{
	return Global_1900383->f_444.f_12;
}

void func_598(int iParam0)
{
	Global_1900383->f_444.f_12 = iParam0;
}

int func_599()
{
	return Global_1900383->f_441;
}

void func_600(int iParam0)
{
	Global_1900383->f_441 = iParam0;
}

bool func_601()
{
	return Global_1900383->f_444.f_15;
}

void func_602(int iParam0)
{
	Global_1900383->f_444.f_15 = iParam0;
}

int func_603()
{
	return Global_40.f_1095.f_3135;
}

void func_604()
{
	Global_1900383->f_444.f_16++;
}

int func_605()
{
	return Global_1900383->f_444.f_16;
}

bool func_606(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(iVar0);
}

int func_607(int iParam0)
{
	var uVar0;

	if (func_399(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return 0;
	}
	if (!func_400(iParam0))
	{
		return 0;
	}
	if (func_398(iParam0, &uVar0, -1082130432 /* Float: -1f */))
	{
		if (PED::_0x7F9B9791D4CB71F6(iParam0, uVar0, 0, 0) == 1)
		{
			return 0;
		}
		if (LAW::_0x69E181772886F48B(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_608(int iParam0, bool bParam1, bool bParam2)
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
		if (func_845())
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
		iVar0 = func_846(&(Global_1898164->f_1[0 /*5*/]));
		if (func_847(iVar0) && func_848(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_269(&(Global_1898164->f_1[0 /*5*/])))
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

int func_609()
{
	if (!func_135(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 0;
	}
	else if (!func_135(((*Global_1347702)[66 /*49*/])->f_15, 1))
	{
		return 1;
	}
	else if (!func_135(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 2;
	}
	else if (!func_135(((*Global_1835011)[38 /*74*/])->f_1, 1))
	{
		return 3;
	}
	else if (!func_135(((*Global_1347702)[68 /*49*/])->f_15, 1))
	{
		return 4;
	}
	else if (!func_135(((*Global_1835011)[59 /*74*/])->f_1, 1))
	{
		return 5;
	}
	else if (!func_135(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

int func_610()
{
	int iVar0;

	if (func_849())
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Global_1905944[iVar0] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_611(int iParam0)
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

int func_612(int iParam0)
{
	return iParam0 & 31;
}

int func_613(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1935630->f_18)
	{
		if ((bParam2 || Global_1935630->f_19 > 0) || Global_1935630->f_17 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1935630->f_15 == 1370593166)
	{
		return 0;
	}
	if (Global_1935630->f_20 > 0 || (bParam2 && Global_1935630->f_20 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1935630->f_13)
		{
			if (bParam2 || Global_1935630->f_21 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_614()
{
	if (func_733(1620353486 /* GXTEntry: "Pronghorn Horn Trinket" */, 1, 0))
	{
		return 1;
	}
	return 0;
}

float func_615(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1f;
	}
	return func_187(Global_35, iParam0, bParam1, bParam2);
}

int func_616()
{
	if (func_733(-224110471 /* GXTEntry: "Beaver Tooth Trinket" */, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_617(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	if (func_2() == -1)
	{
		if (func_850(43))
		{
			if (func_431(iParam0, 412399755))
			{
				func_851(-1791518714);
				if (func_852() == 0)
				{
					func_853(0, 10);
					iVar0 = func_854(iParam0, iParam1, 1);
					if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
					{
						if (func_855(iParam0) < func_856(iParam0))
						{
							func_857(43, iParam0, iParam1, -1791518714, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_850(44))
		{
			if (func_431(iParam0, 709057512))
			{
				func_851(-2087881550);
				if (func_852() == 1)
				{
					func_853(0, 10);
					iVar0 = func_854(iParam0, iParam1, 2);
					if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
					{
						if (func_855(iParam0) < func_856(iParam0))
						{
							func_857(43, iParam0, iParam1, -2087881550, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_850(45))
		{
			if (func_431(iParam0, -1478961327))
			{
				func_851(1908068621);
				if (func_852() == 2)
				{
					func_853(0, 10);
					iVar0 = func_854(iParam0, iParam1, 4);
					if (((iParam0 == 2116770557 || iParam0 == -651064726) || iParam0 == -404270094) || iParam0 == 2093126853)
					{
						if (func_855(iParam0) < func_856(iParam0))
						{
							func_857(43, iParam0, iParam1, 1908068621, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_850(46))
		{
			if (func_431(iParam0, -1238404098))
			{
				func_851(1611247019);
				if (func_852() == 3)
				{
					func_853(0, 10);
					iVar0 = func_854(iParam0, iParam1, 8);
					if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
					{
						if (func_855(iParam0) < func_856(iParam0))
						{
							func_857(43, iParam0, iParam1, 1611247019, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_850(47))
		{
			if (func_431(iParam0, 1160548794))
			{
				func_851(1319635688);
				if (func_852() == 4)
				{
					func_853(0, 10);
					iVar0 = func_854(iParam0, iParam1, 16);
					if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
					{
						if (func_855(iParam0) < func_856(iParam0))
						{
							func_857(43, iParam0, iParam1, 1319635688, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

void func_618(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, 678508515, -1160144609);
		if (func_733(func_858(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_859(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_860(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

int func_619(bool bParam0)
{
	if (func_861())
	{
		return 0;
	}
	if (HUD::_0x7EC0D68233E391AC(5) == 2)
	{
		return 0;
	}
	if ((!CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADING_OUT())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (!func_610())
		{
			return 0;
		}
	}
	if (Global_16)
	{
		return 0;
	}
	if (!func_862())
	{
		return 0;
	}
	if (MISC::_0xF236C84C6ADFCB2F())
	{
		return 0;
	}
	if (func_863())
	{
		return 0;
	}
	return 1;
}

int func_620(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = Global_1914319->f_17378.f_1010.f_201;
	if (iParam0 != 0)
	{
		if (iVar1 < 200)
		{
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (&Global_1914319->f_17378.f_1010[iVar0] == iParam0)
				{
					return 1;
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_621(int iParam0, int iParam1)
{
	if (func_2() == -1)
	{
		if (iParam1 == 61)
		{
			if (func_431(iParam0, 1490540191))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_622(int iParam0, int iParam1)
{
	struct<4> Var0;
	int iVar5;
	int iVar6;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar5 = func_836(iParam1);
	if (iVar5 == -1)
	{
		return 0;
	}
	if (!func_864(6, &Var0))
	{
		return 0;
	}
	Var0.f_2 = -815325344;
	Var0.f_3 = func_865(iVar5);
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		iVar6 = iParam0;
		Var0.f_2 = 549615901;
		Var0.f_3 = iVar6;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			return 1;
		}
	}
	return 0;
}

int func_623(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_786(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_866(iParam0))
	{
		return 0;
	}
	if (func_867(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_764(iParam0, 1)) || func_17(32768))
	{
		if (!func_764(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_862())
	{
		return 0;
	}
	return 1;
}

void func_624(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_625(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_793(iParam1);
	iVar1 = func_794(iVar0, 1);
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_298[iVar1] = (&(Global_40.f_1095.f_1[iParam0 /*436*/])->f_298[iVar1] - iParam2);
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_298[iVar1] = func_795(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_298[iVar1]), 0, 10);
}

int func_626(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<2> Var3;

	if (!func_284(iParam1, 0))
	{
		return 0;
	}
	bVar0 = iParam4 == 562618531;
	bVar1 = iParam4 == 1992602754;
	bVar2 = iParam4 == -1387038764;
	if (!func_868(iParam0, iParam1, 1))
	{
		return 0;
	}
	Var3 = { func_734(iParam1) };
	if (STATS::_STAT_ID_IS_VALID(&Var3))
	{
		if ((func_869(iParam0, iParam1) - iParam2) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var3, iParam2);
		}
		else if ((func_869(iParam0, iParam1) - iParam2) < 0)
		{
			func_626(iParam0, iParam1, func_735(iParam1, 0, 0), bParam3, iParam4);
			return 0;
		}
	}
	if (!func_870(iParam0, iParam1, iParam2, iParam4, bParam3))
	{
		return 0;
	}
	if (!func_668(0))
	{
		bParam3 = true;
	}
	if (!bParam3 && iParam1 != 1309979101)
	{
		func_732(iParam1, -iParam2, bVar0, bVar1, bVar2);
	}
	return 1;
}

int func_627(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_284(iParam1, 0))
	{
		return 0;
	}
	Var0 = { func_871(iParam0) };
	Var5 = { func_872(iParam0, iParam1, Var0, Var0.f_4) };
	if (INVENTORY::_0xCB5D11F9508A928D(iParam0, &Var5, &Var0, iParam1, Var0.f_4, iParam2, 752097756))
	{
		if (func_431(iParam1, -839724752) && func_873(iParam1, 4))
		{
			if (!func_850(42))
			{
				func_874(iParam1);
			}
		}
		return 1;
	}
	return 0;
}

void func_628(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_630(iParam0, iParam1, 1))
	{
		iVar0 = func_875(iParam1);
		iVar1 = func_876(iParam0);
		iVar2 = (func_876(iParam0) - func_876(iParam1));
		iVar3 = (func_875(iParam0) - func_875(iParam1));
		iVar4 = (func_877(iParam0) - func_877(iParam1));
		iVar5 = (func_631(iParam0) - func_631(iParam1));
		iVar6 = (func_878(iParam0) - func_878(iParam1));
		iVar7 = (func_879(iParam0) - func_879(iParam1));
	}
	else
	{
		iVar0 = func_875(iParam0);
		iVar1 = func_876(iParam1);
		iVar2 = (func_876(iParam1) - func_876(iParam0));
		iVar3 = (func_875(iParam1) - func_875(iParam0));
		iVar4 = (func_877(iParam1) - func_877(iParam0));
		iVar5 = (func_631(iParam1) - func_631(iParam0));
		iVar6 = (func_878(iParam1) - func_878(iParam0));
		iVar7 = (func_879(iParam1) - func_879(iParam0));
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
		iVar4 = (iVar4 + func_880(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = BUILTIN::ROUND(func_881(BUILTIN::TO_FLOAT(iVar0 + 1), 0f, 12f));
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
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

int func_629(int iParam0, int iParam1)
{
	int iVar0;
	struct<4> Var1;
	int iVar5;

	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = func_273(iParam1);
	if (!PED::_0x608BC6A6AACD5036(&Var1, iParam0, iVar0, 0))
	{
		return 0;
	}
	iVar5 = Var1.f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		return 0;
	}
	return iVar5;
}

bool func_630(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_882(iParam1) || !func_882(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

int func_631(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

void func_632(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_633(var uParam0)
{
	func_883(uParam0, 0f);
}

bool func_634(var uParam0)
{
	return func_884(*uParam0, 1);
}

int func_635(var uParam0, float fParam1)
{
	if (!func_634(uParam0))
	{
		return 0;
	}
	if (func_885(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

var func_636(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_637(int iParam0)
{
	char* sVar0;

	if (iParam0 == 255)
	{
		if (func_886(37, iParam0))
		{
			return HUD::_0xD8402B858F4DDD88(&(Global_1109400->f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1109400->f_12)));
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
	if (!&Global_1225638->f_21[iParam0])
	{
		return sVar0;
	}
	if (func_886(37, iParam0))
	{
		return HUD::_0xD8402B858F4DDD88(&(((*Global_1108178)[iParam0 /*37*/])->f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(((*Global_1108178)[iParam0 /*37*/])->f_12)));
	}
	return PLAYER::GET_PLAYER_NAME(&(Global_1225638->f_120[iParam0]));
}

char* func_638(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_887(MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

int func_639()
{
	if (func_2() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

int func_640()
{
	if (func_2() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

int func_641(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = 0;
			break;
		case 1:
			*iParam1 = 1;
			break;
		default:
			return 0;
	}
	return 1;
}

int func_642(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 100;
	}
	return 0;
}

int func_643(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (func_641(iParam1, &iVar0))
	{
		return ATTRIBUTE::_GET_ATTRIBUTE_CORE_VALUE(iParam0, iVar0);
	}
	return 0;
}

void func_644(int iParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	iParam2 = func_795(iParam2, 0, 100);
	if (func_641(iParam1, &uVar0))
	{
		ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iParam0, uVar0, iParam2);
	}
}

float func_645(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = (iVar0 - ((Global_40.f_1095.f_1[iParam0 /*436*/])->f_407[iParam1 /*4*/])->f_3);
	iVar1 = func_795(iVar1, 0, 30000);
	fVar2 = (BUILTIN::TO_FLOAT(iVar1) * 0.001f);
	return fVar2;
}

void func_646(int iParam0, int iParam1, int iParam2)
{
	((Global_40.f_1095.f_1[iParam0 /*436*/])->f_398[iParam1 /*4*/])->f_3 = iParam2;
}

void func_647(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (func_641(iParam2, &iVar1))
	{
		iVar0 = ATTRIBUTE::_GET_ATTRIBUTE_CORE_VALUE(iParam0, iVar1);
	}
	iVar2 = func_578(iParam1, iParam2);
	if (iVar2 != iVar0)
	{
		func_888(iParam1, iParam2, iVar0);
	}
}

float func_648(int iParam0, int iParam1)
{
	return ((Global_40.f_1095.f_1[iParam0 /*436*/])->f_398[iParam1 /*4*/])->f_2;
}

void func_649(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;

	fVar0 = func_648(iParam0, iParam1);
	fVar1 = func_645(iParam0, iParam1);
	fVar0 = (fVar0 - fVar1);
	if (fVar0 < 0f)
	{
		fVar0 = 0f;
	}
	func_889(iParam0, iParam1, fVar0);
}

void func_650(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	bVar0 = false;
	if (func_84(iParam1) == 2)
	{
		bVar0 = true;
	}
	bVar1 = false;
	if (func_320(iParam0))
	{
		bVar1 = true;
	}
	bVar2 = false;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (PED::GET_MOUNT(Global_35) == iParam0)
		{
			bVar2 = true;
		}
	}
	bVar3 = false;
	if (TASK::_0xEFC4303DDC6E60D3(Global_35))
	{
		if (TASK::_0xED1F514AF4732258(Global_35) == iParam0)
		{
			bVar3 = true;
		}
	}
	bVar6 = false;
	bVar7 = false;
	switch (iParam2)
	{
		case 0:
		case 1:
			iVar5 = func_578(iParam1, iParam2);
			if (bVar0)
			{
				if (iVar5 < 100)
				{
					bVar6 = true;
				}
				else
				{
					bVar7 = true;
				}
			}
			else if (bVar1)
			{
				if (iVar5 < 55)
				{
					bVar6 = true;
				}
				else
				{
					bVar7 = true;
				}
			}
			else if (bVar3)
			{
				if (iVar5 < 45)
				{
					bVar6 = true;
				}
				else
				{
					bVar7 = true;
				}
			}
			else if (!bVar2)
			{
				if (iVar5 < 30)
				{
					bVar6 = true;
				}
				else
				{
					bVar7 = true;
				}
			}
			else if (func_890(iParam0, iParam2))
			{
				bVar7 = true;
			}
			else
			{
				fVar4 = -48f;
				fVar8 = func_891(iParam1, iParam2);
				fVar4 = (fVar4 - (fVar4 * fVar8));
			}
			break;
	}
	if (fVar4 < 0f)
	{
		if (func_76(8192))
		{
			bVar7 = true;
		}
	}
	if (bVar6)
	{
		if (func_173(iParam1, 128))
		{
			bVar7 = true;
		}
		else
		{
			fVar4 = 1f;
		}
	}
	fVar9 = (fVar4 * 60f);
	fVar10 = func_645(iParam1, iParam2);
	fVar11 = ((fVar10 / fVar9) * 100f);
	fVar12 = func_892(iParam1, iParam2);
	iVar13 = func_578(iParam1, iParam2);
	iVar14 = 0;
	if (!bVar7)
	{
		if ((fVar12 < 0f && fVar11 > 0f) || (fVar12 > 0f && fVar11 < 0f))
		{
			fVar12 = 0f;
		}
		fVar12 = (fVar12 + fVar11);
		if (fVar12 >= 1f)
		{
			fVar12 = (fVar12 - 1f);
			iVar14++;
		}
		else if (fVar12 <= -1f)
		{
			fVar12 = (fVar12 + 1f);
			iVar14 = (iVar14 - 1);
		}
		func_893(iParam1, iParam2, fVar12);
	}
	if (iVar14 == 0)
	{
		return;
	}
	func_888(iParam1, iParam2, (iVar13 + iVar14));
}

void func_651(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	var uVar12;
	bool bVar24;
	bool bVar25;
	bool bVar26;

	func_21(0, &uVar0);
	func_21(1, &uVar12);
	bVar24 = false;
	if (func_140(40))
	{
		bVar24 = true;
	}
	bVar25 = false;
	bVar26 = false;
	switch (iParam1)
	{
		case 0:
			if (iParam2 >= 50 && iParam3 < 50)
			{
				if (bVar24)
				{
					bVar25 = true;
				}
			}
			if (iParam2 > 0 && iParam3 == 0)
			{
				if (bVar24)
				{
					bVar25 = true;
				}
				bVar26 = true;
			}
			break;
		case 1:
			if (iParam2 >= 50 && iParam3 < 50)
			{
				if (bVar24)
				{
					bVar25 = true;
				}
			}
			if (iParam2 > 0 && iParam3 == 0)
			{
				if (bVar24)
				{
					bVar25 = true;
				}
				bVar26 = true;
			}
			break;
	}
	if (bVar25)
	{
		func_580(1);
		func_894(MISC::GET_GAME_TIMER());
	}
	if (bVar26)
	{
		func_494(func_791(2009660790), 1);
	}
}

int func_652(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = 16;
			break;
		case 1:
			*iParam1 = 8;
			break;
		case 2:
			*iParam1 = 13;
			break;
		default:
			return 0;
	}
	return 1;
}

int func_653(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 0;
		case 2:
			return 50;
	}
	return 0;
}

float func_654(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = (iVar0 - ((Global_40.f_1095.f_1[iParam0 /*436*/])->f_407[iParam1 /*4*/])->f_3);
	iVar1 = func_795(iVar1, 0, 30000);
	fVar2 = (BUILTIN::TO_FLOAT(iVar1) * 0.001f);
	return fVar2;
}

void func_655(int iParam0, int iParam1, int iParam2)
{
	((Global_40.f_1095.f_1[iParam0 /*436*/])->f_407[iParam1 /*4*/])->f_3 = iParam2;
}

void func_656(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (func_652(iParam2, &uVar0))
	{
		iVar1 = ATTRIBUTE::GET_ATTRIBUTE_BASE_RANK(iParam0, uVar0);
	}
	iVar2 = func_437(iParam1, iParam2);
	if (iVar2 != iVar1)
	{
		func_746(iParam1, iParam2, iVar1);
	}
}

float func_657(int iParam0, int iParam1)
{
	return ((Global_40.f_1095.f_1[iParam0 /*436*/])->f_407[iParam1 /*4*/])->f_2;
}

void func_658(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;

	fVar0 = func_657(iParam0, iParam1);
	fVar1 = func_654(iParam0, iParam1);
	fVar0 = (fVar0 - fVar1);
	if (fVar0 < 0f)
	{
		fVar0 = 0f;
	}
	func_895(iParam0, iParam1, fVar0);
}

void func_659(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	bVar0 = false;
	if (func_896(iParam0))
	{
		bVar0 = true;
	}
	if (func_84(iParam1) == 2)
	{
		bVar0 = true;
	}
	bVar1 = false;
	if (func_320(iParam0))
	{
		bVar1 = true;
	}
	bVar2 = false;
	switch (iParam2)
	{
		case 1:
			if (bVar0)
			{
				fVar3 = -48f;
			}
			else if (bVar1)
			{
				fVar3 = 192f;
			}
			else if (func_897(iParam0))
			{
				bVar2 = true;
			}
			else
			{
				fVar3 = 96f;
			}
			break;
		case 0:
			if (bVar0)
			{
				fVar3 = -48f;
			}
			else
			{
				bVar2 = true;
			}
			break;
		case 2:
			iVar4 = func_437(iParam1, 2);
			iVar5 = (100 - func_437(iParam1, 1));
			if (iVar5 < 50)
			{
				fVar3 = -96f;
			}
			else if (iVar4 > 50)
			{
				fVar3 = -48f;
			}
			else if (iVar4 < 50)
			{
				fVar3 = 48f;
			}
			else
			{
				bVar2 = true;
			}
			break;
	}
	fVar6 = (fVar3 * 60f);
	fVar7 = func_654(iParam1, iParam2);
	fVar8 = ((fVar7 / fVar6) * 100f);
	fVar9 = func_898(iParam1, iParam2);
	iVar10 = func_437(iParam1, iParam2);
	iVar11 = 0;
	if (!bVar2)
	{
		fVar9 = (fVar9 + fVar8);
		if (fVar9 >= 1f)
		{
			fVar9 = (fVar9 - 1f);
			iVar11++;
		}
		else if (fVar9 <= -1f)
		{
			fVar9 = (fVar9 + 1f);
			iVar11 = (iVar11 - 1);
		}
		func_899(iParam1, iParam2, fVar9);
	}
	if (iParam2 == 2)
	{
		if (iVar4 > 50)
		{
			if (iVar10 <= 50)
			{
				iVar10 = 50;
				func_900(iParam1, iParam2);
			}
		}
		else if (iVar4 < 50)
		{
			if (iVar10 >= 50)
			{
				iVar10 = 50;
				func_900(iParam1, iParam2);
			}
		}
	}
	if (iVar11 == 0)
	{
		return;
	}
	func_746(iParam1, iParam2, (iVar10 + iVar11));
}

void func_660(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<11> Var0;
	struct<11> Var12;
	int iVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	bool bVar31;

	func_21(0, &Var0);
	func_21(1, &Var12);
	iVar24 = func_88(iParam0);
	bVar25 = false;
	if (iParam0 == 0 || (iParam0 == 1 && !Var0.f_2))
	{
		if ((iParam0 == 0 && Var0.f_10) || (iParam0 == 1 && Var12.f_10))
		{
			if (func_140(41))
			{
				bVar25 = true;
			}
		}
	}
	bVar26 = false;
	iVar27 = 0;
	switch (iParam1)
	{
		case 0:
			if (iParam2 <= 50 && iParam3 > 50)
			{
				if (bVar25)
				{
					bVar26 = true;
					iVar27 = 4;
				}
			}
			if (iParam2 < 100 && iParam3 == 100)
			{
				if (bVar25)
				{
				}
			}
			break;
		case 1:
			if (iParam2 <= 50 && iParam3 > 50)
			{
				if (bVar25)
				{
				}
			}
			if (iParam2 < 100 && iParam3 == 100)
			{
				if (bVar25)
				{
				}
			}
			break;
		case 2:
			iVar28 = func_357(iVar24, 2);
			iVar29 = func_901(iParam0);
			iVar30 = func_358(iVar28);
			if (iVar29 != iVar30)
			{
				bVar31 = func_697(iVar24, iVar30, 1);
				if (bVar31)
				{
					func_359(iParam0, iVar30);
				}
			}
			if (iParam3 > 70)
			{
				ATTRIBUTE::SET_ATTRIBUTE_POINTS(iVar24, 14, 100);
			}
			else
			{
				ATTRIBUTE::SET_ATTRIBUTE_POINTS(iVar24, 14, 50);
			}
			break;
	}
	if (bVar26)
	{
		func_573(1);
		func_902(MISC::GET_GAME_TIMER());
	}
	if (iVar27 != 0)
	{
		ATTRIBUTE::_SET_CORE_ICON(iVar27);
	}
}

bool func_661()
{
	return Global_40.f_1095.f_3140.f_1;
}

void func_662(int iParam0, float fParam1)
{
	Global_1900383->f_393.f_8[iParam0] = fParam1;
}

int func_663()
{
	return 5;
}

int func_664()
{
	return 6;
}

struct<4> func_665()
{
	struct<4> Var0;

	return Var0;
}

int func_666(bool bParam0)
{
	if (func_2() == -1)
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

int func_667(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;

	func_903(&iParam0);
	if (!func_284(iParam0, 0))
	{
		return 0;
	}
	if (!func_668(0))
	{
		bParam3 = true;
	}
	if (func_904(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
		{
			Var0 = { func_905(0) };
			Var4.f_9 = -1591664384;
			if (!func_906(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
			{
				return 0;
			}
			else if (func_907(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
			{
				return 0;
			}
			if (func_908(iParam0, 1))
			{
				if (!func_906(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					return 0;
				}
				else if (func_907(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
				{
					return 0;
				}
			}
		}
		else if (!func_909(iParam0, &uVar26, 0))
		{
			return 0;
		}
		return 1;
	}
	iVar27 = func_910(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return 0;
	}
	else if (iVar27 == 0)
	{
		return 1;
	}
	if (bParam3)
	{
		iVar28 = func_332(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(func_666(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return 1;
	}
	return 0;
}

int func_668(bool bParam0)
{
	if (func_2() == -1)
	{
		return 1;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_666(bParam0));
}

int func_669(struct<4> Param0, int iParam4, bool bParam5)
{
	int iVar0;
	struct<11> Var1;
	int iVar15;
	struct<28> Var16;
	struct<17> Var44;
	struct<16> Var61;

	iVar0 = -1;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_670(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_736(Var1.f_4);
	if (iVar15 == joaat("horse"))
	{
		Var16 = { func_911(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_912(joaat("update"), &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("clothing"))
	{
		Var44 = { func_913(Param0, 1) };
		Var44.f_10 = iParam4;
		iVar0 = func_914(joaat("update"), &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var61 = { func_915(&Var1) };
		Var61.f_10 = iParam4;
		iVar0 = func_916(joaat("update"), &Var61, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_670(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_666(bParam5), &uParam0, uParam4, !bParam6))
	{
		return 0;
	}
	return 1;
}

void func_671(int iParam0)
{
	int iVar0;

	iVar0 = func_207(iParam0);
	STREAMING::REQUEST_MODEL(iVar0, false);
}

void func_672(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar0 = &(Global_40.f_1095.f_1[iParam0 /*436*/])->f_15[iVar1 /*94*/];
		if (STREAMING::IS_MODEL_VALID(iVar0))
		{
			STREAMING::REQUEST_MODEL(iVar0, false);
		}
		iVar1++;
	}
}

int func_673(int iParam0)
{
	int iVar0;

	iVar0 = func_207(iParam0);
	if (!STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_674(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar0 = &(Global_40.f_1095.f_1[iParam0 /*436*/])->f_15[iVar1 /*94*/];
		if (STREAMING::IS_MODEL_VALID(iVar0))
		{
			if (!STREAMING::HAS_MODEL_LOADED(iVar0))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

int func_675(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		return 1;
	}
	return 0;
}

void func_676(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	ATTRIBUTE::SET_ATTRIBUTE_BASE_RANK(iParam0, 7, iParam1);
}

void func_677(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(iParam0, 7, iParam1);
}

void func_678(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	iParam2 = func_795(iParam2, 0, 100);
	if (func_652(iParam1, &iVar0))
	{
		ATTRIBUTE::SET_ATTRIBUTE_BASE_RANK(iParam0, iVar0, iParam2);
	}
}

int func_679(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_431;
}

int func_680(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_432;
}

int func_681(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -2059726619 /* GXTEntry: "Good Beaver Pelt" */;
		case 1:
			return -1569450319 /* GXTEntry: "Poor Beaver Pelt" */;
		case 2:
			return 854596618 /* GXTEntry: "Perfect Beaver Pelt" */;
		case 3:
			return -150200864 /* GXTEntry: "Legendary Beaver Pelt" */;
		case 4:
			return 2109269555 /* GXTEntry: "Legendary Boar Pelt" */;
		case 5:
			return 2116849039;
		case 6:
			return 1248540072 /* GXTEntry: "Poor Boar Pelt" */;
		case 7:
			return -1858513856 /* GXTEntry: "Perfect Boar Pelt" */;
		case 8:
			return -868657362 /* GXTEntry: "Good Buck Pelt" */;
		case 9:
			return 1603936352 /* GXTEntry: "Poor Buck Pelt" */;
		case 10:
			return -702790226 /* GXTEntry: "Perfect Buck Pelt" */;
		case 11:
			return -888740979 /* GXTEntry: "Legendary Buck Pelt" */;
		case 12:
			return 459744337 /* GXTEntry: "Good Cougar Pelt" */;
		case 13:
			return 1914602340 /* GXTEntry: "Poor Cougar Pelt" */;
		case 14:
			return -1791452194 /* GXTEntry: "Perfect Cougar Pelt" */;
		case 15:
			return 1528935719 /* GXTEntry: "Legendary Cougar Pelt" */;
		case 16:
			return 1150939141 /* GXTEntry: "Good Coyote Pelt" */;
		case 17:
			return -1558096473 /* GXTEntry: "Poor Coyote Pelt" */;
		case 18:
			return -794277189 /* GXTEntry: "Perfect Coyote Pelt" */;
		case 19:
			return -1517904196 /* GXTEntry: "Legendary Coyote Pelt" */;
		case 20:
			return -1827027577 /* GXTEntry: "Good Deer Pelt" */;
		case 21:
			return -662178186 /* GXTEntry: "Poor Deer Pelt" */;
		case 22:
			return -1035515486 /* GXTEntry: "Perfect Deer Pelt" */;
		case 23:
			return 238733925 /* GXTEntry: "Good Fox Pelt" */;
		case 24:
			return 1647012424 /* GXTEntry: "Poor Fox Pelt" */;
		case 25:
			return 500722008 /* GXTEntry: "Perfect Fox Pelt" */;
		case 26:
			return 1642484975 /* GXTEntry: "Legendary Fox Pelt" */;
		case 27:
			return 1710714415 /* GXTEntry: "Good Goat Hide" */;
		case 28:
			return 699990316 /* GXTEntry: "Poor Goat Hide" */;
		case 29:
			return -1648383828 /* GXTEntry: "Perfect Goat Hide" */;
		case 30:
			return -1379330323 /* GXTEntry: "Good Collared Peccary Pig Pelt" */;
		case 31:
			return -99092070 /* GXTEntry: "Poor Collared Peccary Pig Pelt" */;
		case 32:
			return 1963510418 /* GXTEntry: "Perfect Collared Peccary Pig Pelt" */;
		case 33:
			return 2047376405 /* GXTEntry: "White Cougar Pelt" */;
		case 34:
			return -395646254 /* GXTEntry: "Good Panther Pelt" */;
		case 35:
			return 1584468323 /* GXTEntry: "Poor Panther Pelt" */;
		case 36:
			return 1969175294 /* GXTEntry: "Perfect Panther Pelt" */;
		case 37:
			return 657906142 /* GXTEntry: "Legendary Panther Pelt" */;
		case 38:
			return -57190831 /* GXTEntry: "Good Pig Hide" */;
		case 39:
			return -308965548 /* GXTEntry: "Poor Pig Hide" */;
		case 40:
			return -1102272634 /* GXTEntry: "Perfect Pig Hide" */;
		case 41:
			return 554578289 /* GXTEntry: "Good Pronghorn Hide" */;
		case 42:
			return -983605026 /* GXTEntry: "Poor Pronghorn Hide" */;
		case 43:
			return -1544126829 /* GXTEntry: "Perfect Pronghorn Hide" */;
		case 44:
			return -103050851 /* GXTEntry: "Legendary Pronghorn Hide" */;
		case 45:
			return -476045512 /* GXTEntry: "Good Ram Hide" */;
		case 46:
			return 1796037447 /* GXTEntry: "Poor Ram Hide" */;
		case 47:
			return 1795984405 /* GXTEntry: "Perfect Ram Hide" */;
		case 48:
			return -734947450 /* GXTEntry: "Legendary Ram Hide" */;
		case 49:
			return -1317365569 /* GXTEntry: "Good Sheep Hide" */;
		case 50:
			return 1729948479 /* GXTEntry: "Poor Sheep Hide" */;
		case 51:
			return 1466150167 /* GXTEntry: "Perfect Sheep Hide" */;
		case 52:
			return 1145777975 /* GXTEntry: "Good Wolf Pelt" */;
		case 53:
			return 85441452 /* GXTEntry: "Poor Wolf Pelt" */;
		case 54:
			return 653400939 /* GXTEntry: "Perfect Wolf Pelt" */;
		case 55:
			return 552246565 /* GXTEntry: "Legendary Wolf Pelt" */;
		case 56:
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

void func_682(int iParam0)
{
	int iVar0;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (iVar0 == -1)
		{
		}
		else
		{
			(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_2[iVar0] = 0f;
		}
		iVar0++;
	}
}

void func_683()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		Global_1900383->f_317.f_2[iVar0 /*5*/] = -1;
		(Global_1900383->f_317.f_2[iVar0 /*5*/])->f_1 = -1;
		(Global_1900383->f_317.f_2[iVar0 /*5*/])->f_2 = 0f;
		(Global_1900383->f_317.f_2[iVar0 /*5*/])->f_3 = -1;
		(Global_1900383->f_317.f_2[iVar0 /*5*/])->f_4 = 0f;
		iVar0++;
	}
}

int func_684(int iParam0, var uParam1)
{
	struct<4> Var0;

	Var0.f_9 = -1591664384;
	if (!func_719(iParam0, &Var0))
	{
		return 0;
	}
	*uParam1 = func_917(Var0, 1415981582, 0);
	if (!func_284(*uParam1, 0))
	{
		return 0;
	}
	return 1;
}

int func_685(int iParam0, var uParam1)
{
	struct<4> Var0;

	Var0.f_9 = -1591664384;
	if (!func_719(iParam0, &Var0))
	{
		return 0;
	}
	*uParam1 = func_917(Var0, -2119169513, 0);
	if (!func_284(*uParam1, 0))
	{
		return 0;
	}
	return 1;
}

int func_686(int iParam0, var uParam1)
{
	struct<4> Var0;

	if (!func_918(856287005, iParam0))
	{
		return 0;
	}
	Var0 = { func_81() };
	*uParam1 = func_917(Var0, iParam0, 0);
	if (!func_284(*uParam1, 0))
	{
		return 0;
	}
	return 1;
}

void func_687(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
}

void func_688(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_689(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_690(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

void func_691(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

void func_692(var uParam0, int iParam1)
{
	uParam0->f_4 = iParam1;
}

void func_693(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
}

void func_694(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	PED::_0xDF631E4BCE1B1FC4(iParam0, -1442703445, 0, 0);
	PED::_0xDF631E4BCE1B1FC4(iParam0, -1505972720, 0, 0);
}

void func_695(int iParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	func_919(iParam0, *uParam1);
	func_919(iParam0, uParam1->f_1);
}

void func_696(int iParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	func_919(iParam0, *uParam1);
	func_919(iParam0, uParam1->f_1);
	func_919(iParam0, uParam1->f_2);
	func_919(iParam0, uParam1->f_3);
	func_919(iParam0, uParam1->f_4);
	func_919(iParam0, uParam1->f_5);
}

int func_697(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, iVar0))
	{
		return 0;
	}
	PED::_SET_PED_BODY_COMPONENT(iParam0, iParam1);
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, 1, 1, 1, 1, 0);
	}
	return 1;
}

int func_698(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 6;
		case 2:
			return 7;
	}
	return 0;
}

int func_699(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_920(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_700()
{
	if (!func_76(8))
	{
		return 0;
	}
	return 1;
}

int func_701()
{
	return Global_1900383->f_444;
}

int func_702()
{
	return Global_1900383->f_444.f_1;
}

void func_703(int iParam0)
{
	Global_1900383->f_444 = *iParam0;
}

void func_704(int iParam0)
{
	Global_1900383->f_444.f_1 = *iParam0;
}

void func_705(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_921(&(uParam0->f_3));
	uParam0->f_12 = 1;
	uParam0->f_13 = 0;
}

Vector3 func_706(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f, 0f, 0f;
	}
	return ((*Global_1900383)[iParam0 /*45*/])->f_38;
}

int func_707(var uParam0, vector3 vParam1, vector3 vParam4, var uParam7, float fParam8)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	float fVar7;
	vector3 vVar8;
	bool bVar11;
	var uVar12;

	iVar6 = 12;
	if (func_137(vParam4))
	{
		vVar8 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
		fVar7 = vVar8.z;
	}
	else
	{
		fVar7 = func_710(vParam4, vParam1, 1);
	}
	fVar7 = (fVar7 + ((BUILTIN::TO_FLOAT(uParam0->f_2) * 10f) * func_922((uParam0->f_2 % 2) == 0, 1f, -1f)));
	vVar0 = { vParam1 + Vector(0f, -BUILTIN::COS(fVar7), BUILTIN::SIN(fVar7)) * FtoV(((80f + 40f) * 0.5f)) * Vector(fParam8, fParam8, fParam8) };
	if (uParam0->f_2 > 3)
	{
		iVar6 = 13;
	}
	switch (func_923(uParam0))
	{
		case 0:
			func_924(uParam0, 0f, 0f, 0f);
			uParam0->f_3.f_2 = 0;
			uParam0->f_3 = 0;
			uParam0->f_1 = 0;
			uParam0->f_13 = 0;
			uParam0->f_14 = 0;
			func_925(uParam0, 1);
			break;
		case 1:
			if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(vVar0, &vVar3, 1, 3f, 0f))
			{
				if (func_926(vVar3, vParam1, 0, 0))
				{
					func_924(uParam0, vVar3);
					if (uParam0->f_12)
					{
						func_925(uParam0, 3);
					}
					else
					{
						func_925(uParam0, 4);
					}
				}
				else
				{
					func_925(uParam0, 2);
				}
			}
			else
			{
				func_925(uParam0, 2);
			}
			break;
		case 2:
			bVar11 = false;
			if (func_927(vVar0, &(uParam0->f_3), &bVar11, iVar6, 0, 1127481344 /* Float: 180f */, 1101004800 /* Float: 20f */, -1138501878 /* Float: -0.01f */, -1138501878 /* Float: -0.01f */, 0))
			{
				if (func_926(func_709(uParam0), vParam1, 1, 1))
				{
					if (uParam0->f_12)
					{
						func_925(uParam0, 3);
					}
					else
					{
						func_925(uParam0, 4);
					}
				}
				else
				{
					func_925(uParam0, 5);
				}
			}
			else if (bVar11)
			{
				func_925(uParam0, 5);
			}
			break;
		case 3:
			if (uParam0->f_13 == 0)
			{
				uParam0->f_13 = PATHFIND::_0x348F211CA2404039(uParam7, func_709(uParam0), vParam1, 23);
				if (uParam0->f_13 == -1)
				{
					uParam0->f_14++;
					uParam0->f_13 = 0;
					if (uParam0->f_14 >= 50)
					{
						func_925(uParam0, 5);
					}
				}
			}
			else
			{
				switch (PATHFIND::_0x3A0F82F6EE2291C8(uParam0->f_13))
				{
					case 2:
						break;
					case 0:
						PATHFIND::_0x661BB1E1FF77742D(uParam0->f_13);
						func_925(uParam0, 5);
						break;
					case 1:
						uVar12 = PATHFIND::_0xF61CFEDEAB627BFA(uParam0->f_13);
						if (func_928(uVar12, 2) && iVar6 != 13)
						{
							func_925(uParam0, 5);
						}
						else
						{
							func_925(uParam0, 4);
						}
						PATHFIND::_0x661BB1E1FF77742D(uParam0->f_13);
						break;
				}
			}
			break;
		case 4:
			uParam0->f_2 = 0;
			func_929(&(uParam0->f_3.f_3), 1, 1, 0);
			func_925(uParam0, 0);
			return 1;
		case 5:
			uParam0->f_2++;
			if (uParam0->f_2 > 12)
			{
				uParam0->f_2 = 0;
				uParam0->f_1 = 1;
			}
			else
			{
				uParam0->f_1 = 0;
			}
			func_925(uParam0, 0);
			break;
	}
	return 0;
}

var func_708(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_930(uParam0, &Var0);
}

Vector3 func_709(var uParam0)
{
	return uParam0->f_3.f_3;
}

float func_710(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

int func_711(int iParam0)
{
	int iVar0;
	int iVar1;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_71(iParam0))
	{
		return 0;
	}
	iVar0 = func_88(iParam0);
	iVar1 = func_185(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (PED::GET_MOUNT(iVar1) == iVar0)
	{
		return 1;
	}
	return 0;
}

void func_712(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = Global_1900383[iParam0 /*45*/];
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	iVar1 = PED::_GET_RIDER_OF_MOUNT(iVar0, 0);
	iVar2 = PED::_GET_RIDER_OF_MOUNT(iVar0, 1);
	if (iVar1 != iVar2)
	{
		return;
	}
	if (bParam1)
	{
		iVar3 = 2;
	}
	else
	{
		iVar3 = 1;
	}
	TASK::TASK_HORSE_ACTION(iVar0, iVar3, 0, 0);
}

bool func_713()
{
	return func_931(1073741824 /* Float: 2f */);
}

int func_714(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_170();
	switch (iVar0)
	{
		case 43:
			*uParam0 = { -1340.417f, 2447.74f, 307.6064f };
			*uParam1 = 69.2479f;
			break;
		case 71:
			*uParam0 = { -112.9493f, -14.3514f, 94.8418f };
			*uParam1 = 78.7552f;
			break;
		case 98:
			*uParam0 = { 676.6314f, -1223.84f, 43.8567f };
			*uParam1 = 174.642f;
			break;
		case 9:
			*uParam0 = { 1853.359f, -1835.935f, 42.0656f };
			*uParam1 = 25.3398f;
			break;
		case 4:
			*uParam0 = { 2279.679f, -753.1292f, 40.9928f };
			*uParam1 = 65.2774f;
			break;
		case 79:
			*uParam0 = { 2370.169f, 1336.931f, 105.273f };
			*uParam1 = 302.1729f;
			break;
		case 22:
			*uParam0 = { -2590.198f, 465.025f, 145.1573f };
			*uParam1 = 77.3385f;
			break;
		case 37:
			*uParam0 = { -1644.85f, -1376.873f, 82.9681f };
			*uParam1 = 340.856f;
			break;
		case 58:
			*uParam0 = { func_932(4) };
			*uParam1 = 0f;
			break;
		default:
			return 0;
	}
	return 1;
}

int func_715()
{
	return Global_1900383->f_378.f_9;
}

int func_716(int iParam0)
{
	switch (iParam0)
	{
		case joaat("a_c_horse_gang_bill"):
		case joaat("a_c_horse_gang_sean"):
		case joaat("a_c_horse_gang_john"):
		case -1486704931:
		case joaat("a_c_horse_gang_dutch"):
		case -1356425746:
		case joaat("a_c_horse_gang_javier"):
		case joaat("a_c_horse_gang_sadie"):
		case joaat("a_c_horse_gang_lenny"):
		case joaat("a_c_horse_gang_micah"):
		case joaat("a_c_horse_gang_hosea"):
		case -575759638:
		case joaat("a_c_horse_gang_charles"):
		case 291878635:
		case joaat("a_c_horse_gang_trelawney"):
		case 1139858530:
		case 1760888205:
		case 1800725969:
			return 1;
	}
	return 0;
}

void func_717(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		if (iParam2 == 0)
		{
			return;
		}
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam1 >= 7)
	{
		return;
	}
	if (func_389(iParam0))
	{
		return;
	}
	if (func_390(iParam0))
	{
		return;
	}
	if (!ENTITY::_0x88AD6CC10D8D35B2(iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, true);
	}
	func_326(iParam1, iParam0);
	func_933(iParam1, iParam2);
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	if (iParam0 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(iVar0))
	{
		func_469(iParam1, 0);
	}
	else
	{
		iVar1 = func_934(iParam0);
		func_469(iParam1, iVar1);
	}
	if (iParam1 == 0 || iParam1 == 1)
	{
		func_343(iParam0);
	}
	if (iParam1 == 0)
	{
		PLAYER::_0x8FBF9EDB378CCB8C(iVar0, iParam0);
	}
	else if (iParam1 == 1)
	{
		uVar2 = PLAYER::_0x227B06324234FB09(iVar0, iParam0);
	}
	if (iParam1 == 6)
	{
		return;
	}
	if (func_540(iParam1))
	{
		func_541(iParam1);
	}
	iVar3 = func_207(iParam1);
	iVar4 = func_542(iVar3);
	func_543(iParam1, iVar4);
}

void func_718(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_207(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		func_749(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iParam1));
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372 = iParam1;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1 = fVar4;
	func_935(iParam1);
	iVar5 = func_88(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar5) || PED::IS_PED_INJURED(iVar5))
	{
		return;
	}
	iVar6 = BUILTIN::FLOOR((Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1);
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(iVar5, 7, iVar6);
	iVar7 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar5, 7);
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372 = iVar7;
	PED::_0xA69899995997A63B(iVar5, iVar7);
}

int func_719(int iParam0, var uParam1)
{
	int iVar0;
	struct<10> Var1;
	struct<4> Var15;

	if (!func_540(iParam0))
	{
		return 0;
	}
	iVar0 = func_720(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_330(0) };
	if (!func_936(Var15, iVar0, &Var1, 0, 0))
	{
		return 0;
	}
	if (!func_937(&Var1, uParam1))
	{
		return 0;
	}
	return 1;
}

int func_720(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 7:
			return 1782082944;
		case 1:
			return -832337898;
		case 2:
			return 1271463052;
		case 3:
			return 1983140194;
		case 4:
			return 677262775;
	}
	return 0;
}

int func_721(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10)
{
	struct<12> Var0;
	struct<4> Var14;

	if (!func_668(bParam10))
	{
		return func_938(Param0, Param4, iParam8, 1, bParam9, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_670(Param0, &Var0, 0, 0))
	{
		return 0;
	}
	if (func_939(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return 1;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(Var0.f_4, iParam8))
	{
		return 0;
	}
	if (!INVENTORY::_0xDCCAA7C3BFD88862(func_666(0), &Param0, &Param4, iParam8, Var0.f_11, &Var14))
	{
		return 0;
	}
	if (bParam9)
	{
		if (!func_335(Var14, 1))
		{
		}
	}
	return 1;
}

int func_722(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	struct<11> Var0;
	struct<11> Var14;
	var uVar28;

	if (!func_668(bParam9))
	{
		return func_940(Param0, Param4, iParam8, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return 0;
	}
	if (func_939(&Param0, &Param4))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_670(Param0, &Var0, bParam9, 1) || !func_670(Param4, &Var14, bParam9, 1))
	{
		return 0;
	}
	if (func_939(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(Var0.f_4, Var14.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(Var14.f_4, Var0.f_9))
	{
		return 0;
	}
	uVar28 = func_666(0);
	if (!INVENTORY::_0xF2753D691BCDA314(uVar28, &Param0, &Param4))
	{
		return 0;
	}
	if (!INVENTORY::_0x734311E2852760D0(uVar28, &Param0, (Var14.f_10 || iParam8)))
	{
	}
	if (!INVENTORY::_0x734311E2852760D0(uVar28, &Param4, (Var0.f_10 || iParam8)))
	{
	}
	return 1;
}

int func_723()
{
	return Global_1894899->f_2;
}

int func_724(int iParam0)
{
	switch (iParam0)
	{
		case -2085219828: /* GXTEntry: "Common Bulrush" */
		case -2051332199: /* GXTEntry: "Oleander Sage" */
		case -2013384490: /* GXTEntry: "Parasol Mushroom" */
		case -2006599970: /* GXTEntry: "Hummingbird Sage" */
		case -1991037110: /* GXTEntry: "Blackberry" */
		case -1921080134: /* GXTEntry: "Classic Oatcakes" */
		case -1781387050: /* GXTEntry: "Sage" */
		case -1757588258: /* GXTEntry: "Horse Meal" */
		case -1683269219: /* GXTEntry: "Beets" */
		case -1664530975: /* GXTEntry: "Evergreen Huckleberry" */
		case -1620920647: /* GXTEntry: "English Mace" */
		case -1602657245: /* GXTEntry: "Bay Bolete" */
		case -1477273558: /* GXTEntry: "Peppermint" */
		case -1066874997: /* GXTEntry: "Chanterelle" */
		case -947702135: /* GXTEntry: "Corn" */
		case -746674788: /* GXTEntry: "Ram\'s Head" */
		case -635441454: /* GXTEntry: "Sugar Cube" */
		case -624139784: /* GXTEntry: "Wintergreen Berry" */
		case -597058368: /* GXTEntry: "Indian Tobacco" */
		case -529638012: /* GXTEntry: "Yarrow" */
		case -435006002: /* GXTEntry: "Wild Mint" */
		case -398744080: /* GXTEntry: "Burdock Root" */
		case -249994063: /* GXTEntry: "Blackcurrant" */
		case -196740052: /* GXTEntry: "American Ginseng" */
		case -118748546: /* GXTEntry: "Golden Currant" */
		case -90546043: /* GXTEntry: "Violet Snowdrop" */
		case -56806045: /* GXTEntry: "Red Sage" */
		case 128702355: /* GXTEntry: "Milkweed" */
		case 228922461: /* GXTEntry: "Prairie Poppy" */
		case 335540214: /* GXTEntry: "Peach" */
		case 428582000: /* GXTEntry: "Desert Sage" */
		case 516844411: /* GXTEntry: "Carrot" */
		case 546981776: /* GXTEntry: "Oregano" */
		case 599861917: /* GXTEntry: "Raspberry" */
		case 746300881: /* GXTEntry: "Wild Feverfew" */
		case 1047281747: /* GXTEntry: "Currant" */
		case 1209486044: /* GXTEntry: "Pear" */
		case 1216456215: /* GXTEntry: "Wild Carrot" */
		case 1433048902: /* GXTEntry: "Ginseng" */
		case 1448771675: /* GXTEntry: "Hay" */
		case 1533677103: /* GXTEntry: "Apple" */
		case 1668084914: /* GXTEntry: "Alaskan Ginseng" */
		case 1987629749: /* GXTEntry: "Celery" */
		case 2006811763: /* GXTEntry: "Vanilla Flower" */
		case 2064962445: /* GXTEntry: "Creeping Thyme" */
			return 1;
	}
	return 0;
}

int func_725(int iParam0)
{
	switch (iParam0)
	{
		case -2042563684: /* GXTEntry: "Horse Medicine" */
		case -1871448371: /* GXTEntry: "Special Horse Medicine" */
		case -834705084: /* GXTEntry: "Opened Horse Medicine" */
		case -623409049: /* GXTEntry: "Potent Horse Medicine" */
			return 1;
	}
	return 0;
}

int func_726(int iParam0)
{
	switch (iParam0)
	{
		case -2076104686: /* GXTEntry: "Horse Stimulant" */
		case -1527567292: /* GXTEntry: "Opened Horse Stimulant" */
		case -801397594: /* GXTEntry: "Potent Horse Stimulant" */
		case 747460826: /* GXTEntry: "Special Horse Stimulant" */
			return 1;
	}
	return 0;
}

int func_727(int iParam0)
{
	switch (iParam0)
	{
		case -1795542128: /* GXTEntry: "Special Horse Reviver" */
		case 1627068364: /* GXTEntry: "Horse Reviver" */
			return 1;
	}
	return 0;
}

int func_728(int iParam0)
{
	switch (iParam0)
	{
		case -1632917921: /* GXTEntry: "Horse Ointment" */
			return 1;
	}
	return 0;
}

int func_729(int iParam0)
{
	switch (iParam0)
	{
		case -1516555556: /* GXTEntry: "Horse Brush" */
			return 1;
	}
	return 0;
}

int func_730(int iParam0)
{
	switch (iParam0)
	{
		case -1724045811: /* GXTEntry: "Horse Care Package" */
			return 1;
	}
	return 0;
}

int func_731(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_284(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_736(iParam0);
	if (iVar0 == joaat("weapon") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("ammo") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_431(iParam0, 1399091007))
	{
		func_941(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

void func_732(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	char* sVar13;
	int iVar14;
	char* sVar15;

	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_284(iParam0, 0))
	{
		return;
	}
	if (iParam0 == 1807503187)
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!func_942())
	{
		func_943(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_944(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_944(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_873(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_736(iParam0);
	iVar10 = 0;
	iVar11 = joaat("inventory");
	if ((iVar6 == joaat("ammo") && iParam0 != 424030678) && iParam0 != -1188697038)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	if (iVar6 == -1013984273 || iVar6 == 658570475)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_945(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		return;
	}
	iVar12 = joaat("COLOR_PURE_WHITE");
	sVar13 = "Transaction_Positive";
	iVar14 = 0;
	if (bVar0)
	{
		iVar12 = 619977481;
		sVar13 = "Transaction_Negative";
		iVar14 = 1;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar12 = -856358433;
		}
		else
		{
			iVar12 = -1905433004;
		}
	}
	sVar15 = func_887(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, func_946(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_431(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = MISC::_CREATE_VAR_STRING(0, func_946(iParam0));
	}
	func_754(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

bool func_733(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_284(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_736(iParam0);
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
		if (!func_947(iParam0, 1))
		{
			return false;
		}
	}
	return func_735(iParam0, 0, bParam2) >= iParam1;
}

struct<2> func_734(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_284(iParam0, 0))
	{
		return Var0;
	}
	if (func_431(iParam0, -305066475))
	{
		if (func_2() == -1)
		{
			if (func_431(iParam0, -537818634))
			{
				return func_832(189951448);
			}
			else
			{
				return func_832(1176172851);
			}
		}
	}
	else if (func_431(iParam0, -537818634))
	{
		return func_832(-963660207);
	}
	if (func_431(iParam0, 2084895747))
	{
		return func_832(1694039471);
	}
	return Var2;
}

int func_735(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_284(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_736(iParam0);
	if (iVar0 == joaat("ammo") || (bParam1 && iVar0 == joaat("weapon")))
	{
		iVar1 = func_731(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("weapon"))
	{
		return func_948(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_666(bParam2), iParam0, 0);
	return iVar2;
}

int func_736(int iParam0)
{
	vector3 vVar0;

	if (!func_284(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_737(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<14> Var0;
	int iVar14;
	int iVar15;
	struct<10> Var16;
	struct<4> Var30;
	int iVar35;
	int iVar36;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_949(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_950(&Var0, func_905(0));
	}
	if (!func_951(&Var0, &iVar14, &iVar15, 0))
	{
		return 0;
	}
	Var16.f_9 = -1591664384;
	iVar35 = 0;
	while (iVar35 < iVar15)
	{
		if (iVar36 >= iParam1)
		{
		}
		else
		{
			if (!func_952(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_819(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_953(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return 1;
}

int func_738(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_284(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_954(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_955(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_331(iParam0, Var0, Var0.f_4, bParam4) };
	return func_819(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_739(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;

	if (!ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam1, 0))
	{
		return;
	}
	if (!func_724(iParam1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return;
	}
	func_956(iParam0);
	iVar0 = -1;
	bVar1 = false;
	if (func_388(iParam0))
	{
		iVar0 = func_401(iParam0);
		bVar1 = true;
	}
	PED::_0xEB8886E1065654CD(iParam0, 10, "ALL", 10f);
	func_494(func_791(-1501807946), 1);
	iVar2 = func_643(iParam0, 0);
	iVar3 = func_643(iParam0, 1);
	func_790(iParam0, iParam1);
	iVar4 = func_643(iParam0, 0);
	iVar5 = func_643(iParam0, 1);
	iVar6 = 0;
	iVar6 = (iVar6 + (iVar4 - iVar2));
	iVar6 = (iVar6 + (iVar5 - iVar3));
	func_114(iParam0);
	if (!bVar1)
	{
		return;
	}
	if (func_957(iParam1))
	{
		func_494(func_791(2071017687), 1);
	}
	if (func_958(iParam1))
	{
		return;
	}
	if (func_959(iParam1))
	{
		func_454(iVar0, 16);
		return;
	}
	bVar7 = false;
	iVar8 = func_357(iParam0, 2);
	if (iVar8 < 30)
	{
		bVar7 = true;
	}
	iVar9 = -1;
	if (iVar6 >= 50 || bVar7)
	{
		iVar9 = 13;
	}
	else if (iVar6 >= 25)
	{
		iVar9 = 14;
	}
	else if (iVar6 >= 0)
	{
		iVar9 = 15;
	}
	if (iVar9 != -1)
	{
		func_454(iVar0, iVar9);
	}
	if (!func_205(43))
	{
		func_283(43, 0);
		func_575(MISC::GET_GAME_TIMER());
	}
}

void func_740(int iParam0, int iParam1)
{
	if (!ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam1, 0))
	{
		return;
	}
	if (!func_725(iParam1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	func_790(iParam0, iParam1);
}

void func_741(int iParam0, int iParam1)
{
	if (!ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam1, 0))
	{
		return;
	}
	if (!func_726(iParam1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	func_494(func_791(-454252884), 1);
	func_790(iParam0, iParam1);
}

void func_742(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	float fVar3;

	if (!ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam1, 0))
	{
		return;
	}
	if (!func_728(iParam1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	func_956(iParam0);
	func_790(iParam0, iParam1);
	bVar1 = func_388(iParam0);
	if (bVar1)
	{
		iVar0 = func_401(iParam0);
	}
	func_114(iParam0);
	if (!bVar1)
	{
		return;
	}
	if (!func_890(iParam0, 1))
	{
		func_454(iVar0, 20);
	}
	uVar2 = func_960(iParam0);
	fVar3 = (BUILTIN::TO_FLOAT(func_961(uVar2)) + (48f * 60f));
	func_895(iVar0, 0, fVar3);
}

void func_743(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	float fVar3;

	if (!ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam1, 0))
	{
		return;
	}
	if (!func_730(iParam1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	bVar1 = false;
	if (func_388(iParam0))
	{
		iVar0 = func_401(iParam0);
		bVar1 = true;
	}
	if (bVar1)
	{
		uVar2 = func_960(iParam0);
		fVar3 = (BUILTIN::TO_FLOAT(func_961(uVar2)) + (48f * 60f));
		func_895(iVar0, 0, fVar3);
	}
	func_956(iParam0);
	func_790(iParam0, iParam1);
}

int func_744()
{
	return Global_1900372->f_9;
}

void func_745(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;

	if (!ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam1, 0))
	{
		return;
	}
	if (!func_729(iParam1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	func_956(iParam0);
	PED::_0xEB8886E1065654CD(iParam0, 10, "ALL", 10f);
	func_790(iParam0, iParam1);
	func_114(iParam0);
	bVar1 = func_388(iParam0);
	if (bVar1)
	{
		iVar0 = func_401(iParam0);
	}
	if (!bVar1)
	{
		return;
	}
	uVar2 = func_960(iParam0);
	iVar3 = func_961(uVar2);
	func_895(iVar0, 0, BUILTIN::TO_FLOAT(iVar3));
	bVar4 = false;
	iVar5 = MISC::GET_GAME_TIMER();
	iVar6 = func_962();
	if ((iVar6 + 45000) > iVar5)
	{
		bVar4 = true;
	}
	bVar7 = false;
	if (bVar4 && iVar6 + 15000 > iVar5)
	{
		bVar7 = true;
	}
	if (iParam2 >= 10)
	{
		iVar8 = 17;
	}
	else if (bVar4)
	{
		if (bVar7)
		{
			return;
		}
		else
		{
			iVar8 = 19;
		}
	}
	else
	{
		iVar8 = 18;
	}
	if (iVar8 != -1)
	{
		func_454(iVar0, iVar8);
		func_963(iVar5);
	}
}

void func_746(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iParam2 = func_795(iParam2, 0, 100);
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_407[iParam1 /*4*/] = iParam2;
	iVar0 = func_88(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
	}
	func_678(iVar0, iParam1, iParam2);
}

int func_747(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_964(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

int func_748(int iParam0)
{
	switch (iParam0)
	{
		case 2025841068:
			return 0;
		case 822658194:
			return 1;
		case 1308232528:
			return 2;
		case 1835499550:
			return 3;
		case 476637847:
			return 4;
		case -120156735:
			return 6;
		case 1645618177:
			return 7;
		case -512529193:
			return 8;
		case 131399519:
			return 9;
		case 178647645:
			return 10;
		case -864275692:
			return 11;
		case 1684533001:
			return 12;
		case -2066240242:
			return 13;
		case -2145992129:
			return 14;
		case -108848014:
			return 15;
		case 892930832:
			return 16;
		default:
			break;
	}
	return -1;
}

int func_749(var uParam0, int iParam1, int iParam2)
{
	bool bVar0;

	*uParam0 = 0;
	*iParam1 = 0;
	*iParam2 = 0;
	if (func_94())
	{
		if (func_639())
		{
			bVar0 = false;
			if (!func_135(((*Global_1835011)[15 /*74*/])->f_1, 1) && !func_140(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*uParam0 = func_965();
				*iParam1 = func_966();
				*iParam2 = func_967();
				return 1;
			}
			else
			{
				*uParam0 = func_968();
				*iParam1 = func_969();
				*iParam2 = func_970();
				return 1;
			}
		}
		else if (func_640())
		{
			if (!func_135(((*Global_1835011)[60 /*74*/])->f_1, 1))
			{
				*uParam0 = func_971();
				*iParam1 = func_972();
				*iParam2 = func_973();
				return 1;
			}
			else
			{
				*uParam0 = func_974();
				*iParam1 = func_975();
				*iParam2 = func_976();
				return 1;
			}
		}
	}
	else if (func_639())
	{
		*uParam0 = func_977();
		*iParam1 = func_978();
		*iParam2 = func_979();
		return 1;
	}
	else if (func_640())
	{
		*uParam0 = func_980();
		*iParam1 = func_981();
		*iParam2 = func_982();
		return 1;
	}
	return 0;
}

void func_750(int iParam0, var uParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_8 = uParam1;
}

void func_751(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_9 = iParam1;
}

void func_752(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_10 = iParam1;
}

void func_753(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_24 = (((*Global_1900383)[iParam0 /*45*/])->f_24 || iParam1);
}

var func_754(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	var uVar20;

	Var0 = -2;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _NAMESPACE71::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_983(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_755(int iParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		iParam0 = 1074477367;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iParam0, 7);
	return iVar0;
}

int func_756(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;

	if (iParam1 == -1)
	{
		return 0;
	}
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
		case 5:
		case 6:
		case 7:
		case 9:
			return 0;
	}
	iVar0 = func_88(iParam0);
	fVar1 = func_190(iVar0);
	if (fVar1 >= 0.1f)
	{
		return 1;
	}
	return 0;
}

float func_757(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return 0f;
	}
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return &((Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_2[iParam1]);
}

float func_758(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15f;
		case 4:
			return 4f;
		case 1:
			return 2f;
		case 2:
			return 1f;
		case 3:
			return 1f;
		case 5:
			return 100f;
		case 6:
			return 25f;
		case 7:
			return 5f;
		case 8:
			return 1f;
		case 9:
			return 15f;
		case 10:
			return 1f;
		case 11:
			return 15f;
		case 12:
			return 1f;
		case 13:
			return 15f;
		case 14:
			return 5f;
		case 15:
			return 1f;
		case 16:
			return 5f;
		case 17:
			return 15f;
		case 18:
			return 5f;
		case 19:
			return 1f;
		case 20:
			return 5f;
		case 21:
			return 15f;
		case 22:
			return 1f;
	}
	return 0f;
}

bool func_759()
{
	return Global_40.f_1095.f_3140;
}

void func_760(int iParam0, float fParam1)
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

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_207(iParam0);
	iVar1 = func_115(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iVar1 >= iVar2)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1 = ((Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1 + fParam1);
	iVar3 = func_88(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar3) || PED::IS_PED_INJURED(iVar3))
	{
		return;
	}
	func_677(iVar3, BUILTIN::FLOOR((Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1));
	iVar4 = func_402(iVar3);
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372 = iVar4;
	PED::_0xA69899995997A63B(iVar3, iVar4);
	func_935(iVar4);
	if (iVar4 > iVar1)
	{
		func_984(iParam0, iVar4);
		if (iParam0 == 6)
		{
			if (iVar4 == 1)
			{
				if (func_140(42))
				{
					func_283(19, 1);
				}
				else
				{
					func_283(20, 1);
				}
			}
		}
		if (iVar4 == 2)
		{
			func_283(21, 1);
		}
		else if (iVar4 == 3)
		{
			func_283(22, 1);
		}
		else if (iVar4 == 4)
		{
			func_283(23, 1);
		}
		if (iVar4 >= 2)
		{
			iVar5 = func_960(iVar3);
			iVar6 = func_985();
			func_986(iVar6, iVar5 + 1);
			iVar7 = func_987(iVar3);
			iVar8 = func_988();
			func_986(iVar8, iVar7 + 1);
		}
		COMPENDIUM::COMPENDIUM_HORSE_BONDING(iVar3, iVar4);
		func_494(func_791(352983236), 1);
		if (iVar4 == iVar2)
		{
			func_494(func_791(-2116919750), 1);
		}
		func_853(0, -1);
	}
}

int func_761(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		return PED::GET_MOUNT(iParam0);
	}
	return 0;
}

int func_762(var uParam0)
{
	if (PED::_GET_PED_COMPONENT_CATEGORY(uParam0, 3, 0) == 0)
	{
		return 0;
	}
	return 1;
}

void func_763(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	MISC::_COPY_MEMORY(&(Global_1900383->f_393.f_2), &uParam0, 6);
}

bool func_764(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

void func_765(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 57)
	{
		MISC::_COPY_MEMORY((*uParam0)[iVar0], Global_40.f_1095.f_3054.f_3[iVar0], 1);
		iVar0++;
	}
}

void func_766(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	var uVar5;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_88(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 57)
	{
		uVar2 = func_681(iVar1, 1);
		iVar3 = uVar2;
		if (!func_284(iVar3, 0))
		{
		}
		else
		{
			iVar4 = uParam1[iVar1];
			if (iVar4 <= 0)
			{
			}
			else
			{
				uVar5 = func_285(iVar0, iVar3, iVar4, bParam2, -142743235);
			}
		}
		iVar1++;
	}
}

void func_767(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	func_528(uParam2);
	iVar0 = 0;
	while (iVar0 < 57)
	{
		iVar1 = 0;
		iVar1 = (iVar1 + uParam0[iVar0]);
		iVar1 = (iVar1 + uParam1[iVar0]);
		iVar1 = func_795(iVar1, 0, 10);
		(*uParam2)[iVar0] = iVar1;
		iVar0++;
	}
}

void func_768(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 57)
	{
		MISC::_COPY_MEMORY(Global_40.f_1095.f_3054.f_3[iVar0], (*uParam0)[iVar0], 1);
		iVar0++;
	}
}

void func_769(int iParam0, var uParam1)
{
	int iVar0;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 57)
	{
		MISC::_COPY_MEMORY((Global_40.f_1095.f_1[iParam0 /*436*/])->f_298[iVar0], (*uParam1)[iVar0], 1);
		iVar0++;
	}
}

void func_770(int iParam0, var uParam1)
{
	int iVar0;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		MISC::_COPY_MEMORY((*uParam1)[iVar0 /*5*/], (Global_40.f_1095.f_1[iParam0 /*436*/])->f_356[iVar0 /*5*/], 5);
		iVar0++;
	}
}

void func_771(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		MISC::_COPY_MEMORY((*uParam0)[iVar0 /*5*/], Global_40.f_1095.f_3054.f_61[iVar0 /*5*/], 5);
		iVar0++;
	}
}

int func_772(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (uParam0[iVar1 /*5*/] != 0)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_773(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		MISC::_COPY_MEMORY(Global_40.f_1095.f_3054.f_61[iVar0 /*5*/], (*uParam0)[iVar0 /*5*/], 5);
		iVar0++;
	}
}

void func_774(int iParam0)
{
	int iVar0;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_71(iParam0))
	{
		return;
	}
	iVar0 = func_88(iParam0);
	func_989(iVar0);
}

void func_775(int iParam0, var uParam1)
{
	int iVar0;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		MISC::_COPY_MEMORY((Global_40.f_1095.f_1[iParam0 /*436*/])->f_356[iVar0 /*5*/], (*uParam1)[iVar0 /*5*/], 5);
		iVar0++;
	}
}

void func_776(int iParam0)
{
	Global_40.f_1095 = iParam0;
}

void func_777(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_71(iParam0))
	{
		return;
	}
	iVar0 = func_88(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = &(Global_40.f_1095.f_1[iParam0 /*436*/])->f_356[iVar1 /*5*/];
		if (func_284(iVar2, 0))
		{
			iVar3 = iVar2;
			uVar4 = ((Global_40.f_1095.f_1[iParam0 /*436*/])->f_356[iVar1 /*5*/])->f_1;
			uVar5 = ((Global_40.f_1095.f_1[iParam0 /*436*/])->f_356[iVar1 /*5*/])->f_2;
			PED::_0xC412AA1C73111FE0(iVar0, iVar3, uVar4, uVar5, 0);
		}
		iVar1++;
	}
}

struct<6> func_778()
{
	return Global_1900383->f_393.f_2;
}

void func_779()
{
	struct<6> Var0;

	func_763(Var0);
}

int func_780(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (PED::_IS_PED_USING_SCENARIO_HASH(iParam0, 502001704))
	{
		return 1;
	}
	return 0;
}

int func_781(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (PED::_IS_PED_USING_SCENARIO_HASH(iParam0, -493351432))
	{
		return 1;
	}
	return 0;
}

int func_782(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (PED::_IS_PED_USING_SCENARIO_HASH(iParam0, -1452925867))
	{
		return 1;
	}
	return 0;
}

int func_783(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (PED::_IS_PED_USING_SCENARIO_HASH(iParam0, 751811579))
	{
		return 1;
	}
	return 0;
}

int func_784()
{
	return Global_1900383->f_418.f_2;
}

void func_785(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	fParam1 = (fParam1 * 0.01f);
	fVar1 = PED::_GET_PED_STAMINA(iParam0);
	fVar2 = PED::_GET_PED_MAX_STAMINA(iParam0);
	fVar0 = (fVar2 * fParam1);
	fVar3 = fVar0;
	if ((fVar1 + fVar0) > fVar2)
	{
		fVar3 = (fVar2 - fVar1);
	}
	fVar4 = (fVar1 + fVar3);
	PED::_CHARGE_PED_STAMINA(iParam0, fVar3);
}

bool func_786(int iParam0, int iParam1)
{
	if (func_2() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

void func_787(int iParam0, int iParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;
	struct<14> Var2;
	int iVar19;
	int iVar20;

	if (func_2() == 0)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			if (func_180(iParam0, Global_35))
			{
				if (func_990(iParam0) == 2)
				{
					sVar0 = "HORSE_FOLLOW_ME_FEMALE";
				}
				else
				{
					sVar0 = "HORSE_FOLLOW_ME_MALE";
				}
				func_708(Global_35, sVar0, joaat("speech_params_standard"), iParam0, 1, 0, 0, 1);
				if (func_388(iParam0))
				{
					iVar1 = func_401(iParam0);
					func_178(iVar1, 0);
				}
			}
			break;
		case 2:
			if (func_991(iParam0, Global_35, bParam2))
			{
				func_708(Global_35, "HORSE_RUN_AWAY", joaat("speech_params_allow_repeat"), iParam0, 1, 0, 0, 1);
				Var2.f_6 = -1082130432;
				Var2.f_7 = -1082130432;
				Var2.f_8 = -1082130432;
				Var2.f_9 = -1082130432;
				Var2.f_10 = -1082130432;
				Var2.f_11 = -1082130432;
				Var2.f_12 = -1;
				Var2.f_13 = -1;
				Var2 = -367958370;
				Var2.f_1 = iParam0;
				Var2.f_2 = Global_35;
				EVENT::_0xCA1315C33B9A2847(&Var2);
				Global_1935630->f_42 = iParam0;
				Global_1935630->f_43 = func_992();
				if (func_388(iParam0))
				{
					iVar19 = func_401(iParam0);
					func_178(iVar19, 2);
				}
			}
			break;
		case 1:
			if (func_486(iParam0))
			{
				func_708(Global_35, "HORSE_STAY_HERE", joaat("speech_params_standard"), iParam0, 1, 0, 0, 1);
				if (func_388(iParam0))
				{
					iVar20 = func_401(iParam0);
					func_178(iVar20, 1);
				}
			}
			break;
	}
}

int func_788(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_284(iParam0, 0))
	{
		return 0;
	}
	if (func_727(iParam0))
	{
		ATTRIBUTE::_0xD962F8579D702DB5();
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (func_727(iParam0) && TASK::IS_PED_IN_WRITHE(iVar0))
	{
		if (func_993(iVar0, iParam0))
		{
			return 1;
		}
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 0;
	}
	if (func_120() == 1)
	{
		func_994(iVar0);
		func_995(iParam0);
		func_996(1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_789()
{
	int iVar0[11];
	int iVar12;
	int iVar13[26];
	int iVar40;

	iVar0[0] = 1448771675; /* GXTEntry: "Hay" */
	iVar0[1] = -1921080134; /* GXTEntry: "Classic Oatcakes" */
	iVar0[2] = 1533677103; /* GXTEntry: "Apple" */
	iVar0[3] = -1683269219; /* GXTEntry: "Beets" */
	iVar0[4] = 1209486044; /* GXTEntry: "Pear" */
	iVar0[5] = 335540214; /* GXTEntry: "Peach" */
	iVar0[6] = 1987629749; /* GXTEntry: "Celery" */
	iVar0[7] = 516844411; /* GXTEntry: "Carrot" */
	iVar0[8] = -947702135; /* GXTEntry: "Corn" */
	iVar0[9] = -1477273558; /* GXTEntry: "Peppermint" */
	iVar0[10] = -635441454; /* GXTEntry: "Sugar Cube" */
	iVar12 = 0;
	while (iVar12 < iVar0)
	{
		if (func_735(&(iVar0[iVar12]), 0, 0) > 0)
		{
			return &(iVar0[iVar12]);
		}
		iVar12++;
	}
	iVar13[0] = 1668084914; /* GXTEntry: "Alaskan Ginseng" */
	iVar13[1] = -196740052; /* GXTEntry: "American Ginseng" */
	iVar13[2] = -1602657245; /* GXTEntry: "Bay Bolete" */
	iVar13[3] = -1991037110; /* GXTEntry: "Blackberry" */
	iVar13[4] = -249994063; /* GXTEntry: "Blackcurrant" */
	iVar13[5] = -398744080; /* GXTEntry: "Burdock Root" */
	iVar13[6] = -1066874997; /* GXTEntry: "Chanterelle" */
	iVar13[7] = 2064962445; /* GXTEntry: "Creeping Thyme" */
	iVar13[8] = 428582000; /* GXTEntry: "Desert Sage" */
	iVar13[9] = -2006599970; /* GXTEntry: "Hummingbird Sage" */
	iVar13[10] = -118748546; /* GXTEntry: "Golden Currant" */
	iVar13[11] = -2051332199; /* GXTEntry: "Oleander Sage" */
	iVar13[12] = -2013384490; /* GXTEntry: "Parasol Mushroom" */
	iVar13[13] = -746674788; /* GXTEntry: "Ram\'s Head" */
	iVar13[14] = 599861917; /* GXTEntry: "Raspberry" */
	iVar13[15] = -56806045; /* GXTEntry: "Red Sage" */
	iVar13[16] = 746300881; /* GXTEntry: "Wild Feverfew" */
	iVar13[17] = -435006002; /* GXTEntry: "Wild Mint" */
	iVar13[18] = 1433048902; /* GXTEntry: "Ginseng" */
	iVar13[19] = -1781387050; /* GXTEntry: "Sage" */
	iVar13[20] = -624139784; /* GXTEntry: "Wintergreen Berry" */
	iVar13[21] = 1047281747; /* GXTEntry: "Currant" */
	iVar13[22] = 546981776; /* GXTEntry: "Oregano" */
	iVar13[23] = 1216456215; /* GXTEntry: "Wild Carrot" */
	iVar13[24] = -2085219828; /* GXTEntry: "Common Bulrush" */
	iVar13[25] = -1620920647; /* GXTEntry: "English Mace" */
	iVar12 = 0;
	iVar12 = 0;
	while (iVar12 < iVar13)
	{
		iVar40 = &iVar13[iVar12];
		if (func_724(iVar40) && func_735(iVar40, 0, 0) > 0)
		{
			return iVar40;
		}
		iVar12++;
	}
	return 0;
}

void func_790(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	struct<6> Var24;
	var uVar31;
	var uVar32;
	int iVar33;
	int iVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	float fVar39;
	float fVar40;

	if (!func_420(iParam1))
	{
		return;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam1, 0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	bVar0 = false;
	if (func_388(iParam0))
	{
		iVar1 = func_401(iParam0);
		bVar0 = true;
	}
	Var2.f_1 = 20;
	ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iParam1, &Var2);
	iVar33 = 0;
	while (iVar33 < Var2)
	{
		ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var2.f_1[iVar33]), &Var24);
		switch (Var24.f_1)
		{
			case 1194731729:
				iVar34 = Var24.f_2;
				fVar35 = -Var24.f_5;
				if (bVar0 && iVar34 > 0)
				{
					iVar36 = func_960(iParam0);
					iVar37 = func_997(iVar36);
					func_895(iVar1, 1, BUILTIN::TO_FLOAT(iVar37));
				}
				if (bVar0)
				{
					iVar38 = func_437(iVar1, 1);
				}
				else
				{
					iVar38 = func_357(iParam0, 1);
				}
				if (iVar38 < 50)
				{
					if (bVar0)
					{
						func_438(iVar1, 2, iVar34);
					}
					else
					{
						func_439(iParam0, 2, iVar34);
					}
				}
				if (bVar0)
				{
					func_438(iVar1, 1, BUILTIN::FLOOR(fVar35));
				}
				else
				{
					func_439(iParam0, 1, BUILTIN::FLOOR(fVar35));
				}
				break;
			case 978049229:
				func_998(iParam0, Var24.f_5);
				break;
			case -1918697215:
				if (func_641(0, &uVar31))
				{
					fVar39 = Var24.f_5;
					if (bVar0)
					{
						func_999(iVar1, 0, BUILTIN::FLOOR(fVar39));
					}
					else
					{
						func_1000(iParam0, 0, BUILTIN::FLOOR(fVar39));
					}
				}
				break;
			case 1136630075:
				if (func_1001(0, &uVar31))
				{
					uVar32 = func_1002(BUILTIN::TO_FLOAT(Var24.f_3), Var24.f_4);
					if (bVar0)
					{
						func_999(iVar1, 0, BUILTIN::FLOOR(100f));
					}
					else
					{
						func_1000(iParam0, 0, BUILTIN::FLOOR(100f));
					}
					func_1003(iParam0, 0, uVar32);
				}
				break;
			case -778289619:
				if (func_641(0, &uVar31))
				{
					uVar32 = func_1002(BUILTIN::TO_FLOAT(Var24.f_3), Var24.f_4);
					func_1004(iParam0, 0, uVar32);
				}
				break;
			case -1946606248:
				func_785(iParam0, Var24.f_5);
				break;
			case 855745648:
				if (func_641(1, &uVar31))
				{
					fVar40 = Var24.f_5;
					if (bVar0)
					{
						func_999(iVar1, 1, BUILTIN::FLOOR(fVar40));
					}
					else
					{
						func_1000(iParam0, 1, BUILTIN::FLOOR(fVar40));
					}
				}
				break;
			case 1365603835:
				if (func_1001(1, &uVar31))
				{
					uVar32 = func_1002(BUILTIN::TO_FLOAT(Var24.f_3), Var24.f_4);
					if (bVar0)
					{
						func_999(iVar1, 1, BUILTIN::FLOOR(100f));
					}
					else
					{
						func_1000(iParam0, 1, BUILTIN::FLOOR(100f));
					}
					func_1003(iParam0, 1, uVar32);
				}
				break;
			case 1497139093:
				if (func_641(1, &uVar31))
				{
					uVar32 = func_1002(BUILTIN::TO_FLOAT(Var24.f_3), Var24.f_4);
					func_1004(iParam0, 1, uVar32);
				}
				break;
		}
		iVar33++;
	}
	func_1005(iParam1);
	ATTRIBUTE::_0xD962F8579D702DB5();
}

struct<2> func_791(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

int func_792(int iParam0)
{
	if (!func_284(iParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0x4AEF1FB5B9011D75(iParam0);
}

int func_793(int iParam0)
{
	if (!func_511(iParam0))
	{
		return 0;
	}
	return iParam0;
}

int func_794(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2059726619: /* GXTEntry: "Good Beaver Pelt" */
			return 0;
		case -1858513856: /* GXTEntry: "Perfect Boar Pelt" */
			return 7;
		case -1827027577: /* GXTEntry: "Good Deer Pelt" */
			return 20;
		case -1791452194: /* GXTEntry: "Perfect Cougar Pelt" */
			return 14;
		case -1648383828: /* GXTEntry: "Perfect Goat Hide" */
			return 29;
		case -1569450319: /* GXTEntry: "Poor Beaver Pelt" */
			return 1;
		case -1558096473: /* GXTEntry: "Poor Coyote Pelt" */
			return 17;
		case -1544126829: /* GXTEntry: "Perfect Pronghorn Hide" */
			return 43;
		case -1517904196: /* GXTEntry: "Legendary Coyote Pelt" */
			return 19;
		case -1379330323: /* GXTEntry: "Good Collared Peccary Pig Pelt" */
			return 30;
		case -1317365569: /* GXTEntry: "Good Sheep Hide" */
			return 49;
		case -1102272634: /* GXTEntry: "Perfect Pig Hide" */
			return 40;
		case -1035515486: /* GXTEntry: "Perfect Deer Pelt" */
			return 22;
		case -983605026: /* GXTEntry: "Poor Pronghorn Hide" */
			return 42;
		case -888740979: /* GXTEntry: "Legendary Buck Pelt" */
			return 11;
		case -868657362: /* GXTEntry: "Good Buck Pelt" */
			return 8;
		case -794277189: /* GXTEntry: "Perfect Coyote Pelt" */
			return 18;
		case -734947450: /* GXTEntry: "Legendary Ram Hide" */
			return 48;
		case -702790226: /* GXTEntry: "Perfect Buck Pelt" */
			return 10;
		case -662178186: /* GXTEntry: "Poor Deer Pelt" */
			return 21;
		case -476045512: /* GXTEntry: "Good Ram Hide" */
			return 45;
		case -395646254: /* GXTEntry: "Good Panther Pelt" */
			return 34;
		case -308965548: /* GXTEntry: "Poor Pig Hide" */
			return 39;
		case -150200864: /* GXTEntry: "Legendary Beaver Pelt" */
			return 3;
		case -103050851: /* GXTEntry: "Legendary Pronghorn Hide" */
			return 44;
		case -99092070: /* GXTEntry: "Poor Collared Peccary Pig Pelt" */
			return 31;
		case -57190831: /* GXTEntry: "Good Pig Hide" */
			return 38;
		case 0:
			return 56;
		case 85441452: /* GXTEntry: "Poor Wolf Pelt" */
			return 53;
		case 238733925: /* GXTEntry: "Good Fox Pelt" */
			return 23;
		case 459744337: /* GXTEntry: "Good Cougar Pelt" */
			return 12;
		case 500722008: /* GXTEntry: "Perfect Fox Pelt" */
			return 25;
		case 552246565: /* GXTEntry: "Legendary Wolf Pelt" */
			return 55;
		case 554578289: /* GXTEntry: "Good Pronghorn Hide" */
			return 41;
		case 653400939: /* GXTEntry: "Perfect Wolf Pelt" */
			return 54;
		case 657906142: /* GXTEntry: "Legendary Panther Pelt" */
			return 37;
		case 699990316: /* GXTEntry: "Poor Goat Hide" */
			return 28;
		case 854596618: /* GXTEntry: "Perfect Beaver Pelt" */
			return 2;
		case 1145777975: /* GXTEntry: "Good Wolf Pelt" */
			return 52;
		case 1150939141: /* GXTEntry: "Good Coyote Pelt" */
			return 16;
		case 1248540072: /* GXTEntry: "Poor Boar Pelt" */
			return 6;
		case 1466150167: /* GXTEntry: "Perfect Sheep Hide" */
			return 51;
		case 1528935719: /* GXTEntry: "Legendary Cougar Pelt" */
			return 15;
		case 1584468323: /* GXTEntry: "Poor Panther Pelt" */
			return 35;
		case 1603936352: /* GXTEntry: "Poor Buck Pelt" */
			return 9;
		case 1642484975: /* GXTEntry: "Legendary Fox Pelt" */
			return 26;
		case 1647012424: /* GXTEntry: "Poor Fox Pelt" */
			return 24;
		case 1710714415: /* GXTEntry: "Good Goat Hide" */
			return 27;
		case 1729948479: /* GXTEntry: "Poor Sheep Hide" */
			return 50;
		case 1795984405: /* GXTEntry: "Perfect Ram Hide" */
			return 47;
		case 1796037447: /* GXTEntry: "Poor Ram Hide" */
			return 46;
		case 1914602340: /* GXTEntry: "Poor Cougar Pelt" */
			return 13;
		case 1963510418: /* GXTEntry: "Perfect Collared Peccary Pig Pelt" */
			return 32;
		case 1969175294: /* GXTEntry: "Perfect Panther Pelt" */
			return 36;
		case 2047376405: /* GXTEntry: "White Cougar Pelt" */
			return 33;
		case 2109269555: /* GXTEntry: "Legendary Boar Pelt" */
			return 4;
		case 2116849039:
			return 5;
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

int func_795(int iParam0, int iParam1, int iParam2)
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

int func_796(int iParam0)
{
	switch (iParam0)
	{
		case -1696275132: /* GXTEntry: "Legendary Muskie" */
		case -1193798153: /* GXTEntry: "Legendary Lake Sturgeon" */
		case -1030441283: /* GXTEntry: "Legendary Steelhead Trout" */
		case -804542901: /* GXTEntry: "Legendary Longnose Gar" */
		case -787702678: /* GXTEntry: "Legendary Largemouth Bass" */
		case 1265573293: /* GXTEntry: "Legendary Sockeye Salmon" */
		case 1997759228: /* GXTEntry: "Legendary Smallmouth Bass" */
			return 1;
	}
	return 0;
}

int func_797(int iParam0)
{
	if (func_2() != -1)
	{
		return 0;
	}
	return func_135(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
}

int func_798(int iParam0)
{
	switch (iParam0)
	{
		case 323124696: /* GXTEntry: "Legendary Bullhead Catfish" */
			return -1865241121;
		case -2108314374: /* GXTEntry: "Legendary Chain Pickerel" */
			return 2117142684;
		case -1193798153: /* GXTEntry: "Legendary Lake Sturgeon" */
			return -1409326024;
		case -787702678: /* GXTEntry: "Legendary Largemouth Bass" */
			return -641744968;
		case -804542901: /* GXTEntry: "Legendary Longnose Gar" */
			return -946988203;
		case -1696275132: /* GXTEntry: "Legendary Muskie" */
			return -646136018;
		case -161595323: /* GXTEntry: "Legendary Perch" */
			return -955835837;
		case -1114363619: /* GXTEntry: "Legendary Redfin Pickerel" */
			return -179276075;
		case -368407134: /* GXTEntry: "Legendary Rock Bass" */
			return -492711560;
		case 1997759228: /* GXTEntry: "Legendary Smallmouth Bass" */
			return 1764383959;
		case 1265573293: /* GXTEntry: "Legendary Sockeye Salmon" */
			return 317501533;
		case -1030441283: /* GXTEntry: "Legendary Steelhead Trout" */
			return 817753087;
		case -1490884871: /* GXTEntry: "Legendary Bluegill" */
			return 576606016;
		default:
			break;
	}
	return 0;
}

bool func_799(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

int func_800(int iParam0)
{
	switch (iParam0)
	{
		case 323124696: /* GXTEntry: "Legendary Bullhead Catfish" */
			return -642026005;
		case -2108314374: /* GXTEntry: "Legendary Chain Pickerel" */
			return -940584364;
		case -1193798153: /* GXTEntry: "Legendary Lake Sturgeon" */
			return 1972645282;
		case -787702678: /* GXTEntry: "Legendary Largemouth Bass" */
			return 1667205433;
		case -804542901: /* GXTEntry: "Legendary Longnose Gar" */
			return 1362715885;
		case -1696275132: /* GXTEntry: "Legendary Muskie" */
			return 1053540370;
		case -161595323: /* GXTEntry: "Legendary Perch" */
			return -1100103852;
		case -1114363619: /* GXTEntry: "Legendary Redfin Pickerel" */
			return -1409869209;
		case -368407134: /* GXTEntry: "Legendary Rock Bass" */
			return -1760235357;
		case 1997759228: /* GXTEntry: "Legendary Smallmouth Bass" */
			return -138366827;
		case 1265573293: /* GXTEntry: "Legendary Sockeye Salmon" */
			return -1261163843;
		case -1030441283: /* GXTEntry: "Legendary Steelhead Trout" */
			return -963523016;
		case -1490884871: /* GXTEntry: "Legendary Bluegill" */
			return 560825326;
		default:
			break;
	}
	return 0;
}

bool func_801(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_802(int iParam0)
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

int func_803(int iParam0)
{
	switch (iParam0)
	{
		case -642026005:
			return -695777111;
		case -940584364:
			return 1671816740;
		case 1972645282:
			return 1467033526;
		case 1667205433:
			return 1178765838;
		case 1362715885:
			return -1385591042;
		case 1053540370:
			return -1508614120;
		case -1100103852:
			return -116204733;
		case -1409869209:
			return 1041505554;
		case -1760235357:
			return 756063611;
		case -138366827:
			return 1035814529;
		case -1261163843:
			return -1052716565;
		case -963523016:
			return 1265504095;
		case 560825326:
			return 1343260208;
		default:
			break;
	}
	return 0;
}

void func_804(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1 = fParam1;
	iVar0 = func_88(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	iVar1 = BUILTIN::FLOOR((Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1);
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(iVar0, 7, iVar1);
	iVar2 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar0, 7);
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372 = iVar2;
	PED::_0xA69899995997A63B(iVar0, iVar2);
	func_935(iVar2);
}

int func_805(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;

	Var0.f_9 = -1591664384;
	if (!func_719(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { func_331(iParam1, Var0, 1415981582, 0) };
	return func_335(Var29, 1);
}

int func_806(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;

	Var0.f_9 = -1591664384;
	if (!func_719(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { func_331(iParam1, Var0, -2119169513, 0) };
	return func_335(Var29, 1);
}

void func_807(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
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

void func_808(int iParam0)
{
	int iVar0;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1955569->f_5.f_1))
	{
		return;
	}
	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1955569->f_5.f_1) > iParam0)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1955569->f_5.f_1, iParam0);
		if (iVar0 == &Global_1955569->f_5.f_2[iParam0 /*36*/])
		{
			return;
		}
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1955569->f_5.f_1, iParam0, "pause_info_panel_list", &(Global_1955569->f_5.f_2[iParam0 /*36*/]));
}

void func_809(bool bParam0)
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

void func_810(bool bParam0)
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

void func_811(bool bParam0)
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

var func_812(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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
	uVar21 = _NAMESPACE71::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

bool func_813(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_1006(iParam0, 1) /*3*/] != &Global_1946804->f_57[func_1006(iParam0, 1) /*11*/];
}

int func_814(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_1006(iParam0, 1) /*3*/]);
}

int func_815(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_284(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_954(iParam0, 0, 1) };
	Var5 = { func_331(iParam0, Var0, Var0.f_4, 0) };
	return func_334(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

int func_816(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_954(iParam1, 1, 0) };
		iParam3 = func_1007(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1008(iParam1, iParam2, func_1006(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_1009(1, (func_2() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_1006(iParam3, 1) /*11*/])
			{
				func_1010(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_1011(32768) && iParam1 != &Global_1946804->f_57[func_1006(iParam3, 1) /*11*/])
			{
				func_1012();
				func_1010(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_1010(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1013(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_1010(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_1014(0);
			func_1015(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_1010(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_817()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1526891582))
	{
		func_1016();
		UNLOCK::_UNLOCK_SET_UNLOCKED(-1526891582, true);
		func_1017(joaat("weapon_revolver_cattleman_john"));
		func_815(joaat("weapon_revolver_cattleman_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_cattleman_john"), true, 2, false, false);
		func_1017(joaat("weapon_melee_knife_john"));
		func_815(joaat("weapon_melee_knife_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_melee_knife_john"), true, 4, false, false);
	}
}

int func_818(var uParam0, int iParam1, bool bParam2)
{
	return INVENTORY::_0x033EE4B89F3AC545(func_666(bParam2), uParam0, iParam1);
}

int func_819(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_1018(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_670(*uParam1, &Var0, bParam6, 0))
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
	if (!func_668(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_666(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

bool func_820(int iParam0)
{
	return func_736(iParam0) == joaat("horse");
}

char* func_821()
{
	return "UNNAMED_HORSE";
}

int func_822()
{
	int iVar0;

	iVar0 = func_823();
	if (MAP::DOES_BLIP_EXIST(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_823()
{
	return Global_1900383->f_393.f_1;
}

void func_824(int iParam0)
{
	Global_1900383->f_393.f_1 = iParam0;
}

int func_825()
{
	int iVar0;

	iVar0 = func_1019();
	if (iVar0 <= -320)
	{
		return -320;
	}
	if (iVar0 <= -280)
	{
		return -280;
	}
	if (iVar0 <= -240)
	{
		return -240;
	}
	if (iVar0 <= -200)
	{
		return -200;
	}
	if (iVar0 <= -160)
	{
		return -160;
	}
	if (iVar0 <= -120)
	{
		return -120;
	}
	if (iVar0 <= -80)
	{
		return -80;
	}
	if (iVar0 <= -40)
	{
		return -40;
	}
	if (iVar0 >= 320)
	{
		return 320;
	}
	if (iVar0 >= 280)
	{
		return 280;
	}
	if (iVar0 >= 240)
	{
		return 240;
	}
	if (iVar0 >= 200)
	{
		return 200;
	}
	if (iVar0 >= 160)
	{
		return 160;
	}
	if (iVar0 >= 120)
	{
		return 120;
	}
	if (iVar0 >= 80)
	{
		return 80;
	}
	if (iVar0 >= 40)
	{
		return 40;
	}
	return 0;
}

int func_826(int iParam0)
{
	float fVar0;
	float fVar1;

	if (func_2() != -1)
	{
		return iParam0;
	}
	if (Global_1347477->f_2 + 120000) < MISC::GET_GAME_TIMER()
	{
		Global_1347477->f_3 = 1;
		Global_1347477->f_2 = MISC::GET_GAME_TIMER();
		return iParam0;
	}
	fVar0 = 1f;
	Global_1347477->f_2 = MISC::GET_GAME_TIMER();
	Global_1347477->f_3++;
	if (Global_1347477->f_3 >= 10)
	{
		fVar0 = 2f;
	}
	else if (Global_1347477->f_3 >= 3)
	{
		fVar0 = 1.5f;
	}
	fVar1 = (BUILTIN::TO_FLOAT(iParam0) * fVar0);
	fVar1 = func_922(MISC::ABSF(fVar1) < 1f, func_922(fVar1 < 0f, -1f, 1f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

int func_827(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case -40:
		case 40:
			return 1;
		case -80:
		case 80:
			return 2;
		case -120:
		case 120:
			return 3;
		case -160:
		case 160:
			return 4;
		case -200:
		case 200:
			return 5;
		case -240:
		case 240:
			return 6;
		case -280:
		case 280:
			return 7;
		case -320:
		case 320:
			return 8;
	}
	return 0;
}

int func_828()
{
	if (Global_40.f_11095.f_35 <= -320)
	{
		return 1;
	}
	else if (Global_40.f_11095.f_35 <= -280)
	{
		return 2;
	}
	else if (Global_40.f_11095.f_35 <= -240)
	{
		return 3;
	}
	else if (Global_40.f_11095.f_35 <= -200)
	{
		return 4;
	}
	else if (Global_40.f_11095.f_35 <= -160)
	{
		return 5;
	}
	else if (Global_40.f_11095.f_35 <= -120)
	{
		return 6;
	}
	else if (Global_40.f_11095.f_35 <= -80)
	{
		return 7;
	}
	else if (Global_40.f_11095.f_35 < 0)
	{
		return 8;
	}
	else if (Global_40.f_11095.f_35 <= 40)
	{
		return 9;
	}
	else if (Global_40.f_11095.f_35 >= 320)
	{
		return 16;
	}
	else if (Global_40.f_11095.f_35 >= 280)
	{
		return 15;
	}
	else if (Global_40.f_11095.f_35 >= 240)
	{
		return 14;
	}
	else if (Global_40.f_11095.f_35 >= 200)
	{
		return 13;
	}
	else if (Global_40.f_11095.f_35 >= 160)
	{
		return 12;
	}
	else if (Global_40.f_11095.f_35 >= 120)
	{
		return 11;
	}
	else if (Global_40.f_11095.f_35 >= 80)
	{
		return 10;
	}
	return 9;
}

void func_829(int iParam0, bool bParam1, int iParam2)
{
	func_1020((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1021(iParam0);
}

void func_830(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_16[2]), 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[2]), 1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[2]), func_1022(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[2]), "pausemenu_player");
}

void func_831(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_1023(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1024(iVar5, &iVar2, &iVar0))
			{
				if (!func_284(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1025(iVar2);
					if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar1))
					{
						if (bParam0)
						{
							UNLOCK::_UNLOCK_SET_UNLOCKED(iVar1, false);
						}
					else
					{
						}
						else
						{
							if (func_736(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_825() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_825() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1026();
							}
							if (bVar3)
							{
								UNLOCK::_UNLOCK_SET_UNLOCKED(iVar1, true);
								bVar3 = false;
							}
						}
						iVar5++;
					}
				}
			}
		}
	}

struct<2> func_832(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

char* func_833(int iParam0)
{
	switch (iParam0)
	{
		case 2139774588:
			return "HONOR_EVENT_LOOT_INNOCENT";
		case 1142025875: /* GXTEntry: "Murder" */
			return "HONOR_EVENT_AMBIENT_KILL";
		case 1587891565:
			return "HONOR_EVENT_AMBIENT_KO";
		case 1877013492: /* GXTEntry: "Frighten" */
			return "HONOR_EVENT_SCARE";
		case -643014279: /* GXTEntry: "Killed Vermin" */
			return "HONOR_EVENT_KILL_VERMIN";
		case -597116214: /* GXTEntry: "Killed Domestic Animal" */
			return "HONOR_EVENT_KILL_FARM_ANIMAL";
		case 551416228: /* GXTEntry: "Killed Horse" */
			return "HONOR_EVENT_KILL_HORSE";
		case 1022576842: /* GXTEntry: "Stole Horse" */
			return "HONOR_EVENT_STEAL_HORSE";
		case 953325896: /* GXTEntry: "Stole Donkey" */
			return "HONOR_EVENT_STEAL_DONKEY";
		case 508358508: /* GXTEntry: "Stole Mule" */
			return "HONOR_EVENT_STEAL_MULE";
		case -856432278:
			return "HONOR_EVENT_STEAL_WAGON";
		case -735200598: /* GXTEntry: "Trampled Innocent" */
			return "HONOR_EVENT_TRAMPLED_INNOCENT";
		case -2010847721: /* GXTEntry: "Abandon Dead Animals" */
			return "HONOR_EVENT_ABANDON_ANIMALS";
		case 446961221: /* GXTEntry: "Watched Animal Bleedout" */
			return "HONOR_EVENT_ANIMAL_BLEEDOUT";
		case -1972216640: /* GXTEntry: "Antagonize" */
			return "HONOR_EVENT_ANTAGONIZE";
		case 530833824: /* GXTEntry: "Theft" */
			return "HONOR_EVENT_THEFT";
		case 1682361219: /* GXTEntry: "Intervened" */
			return "HONOR_EVENT_INTERVENED";
		case 158959085: /* GXTEntry: "Wanted In Camp" */
			return "HONOR_EVENT_WANTED_IN_CAMP";
		case 1919819559: /* GXTEntry: "Donated Game" */
			return "HONOR_EVENT_DONATED_GAME";
		case 1461411082: /* GXTEntry: "Item Request" */
			return "HONOR_EVENT_ITEM_REQUEST";
		case -549508280: /* GXTEntry: "Long Absence" */
			return "HONOR_EVENT_LONG_ABSENCE";
		case -1787248475: /* GXTEntry: "Cruel Death" */
			return "HONOR_EVENT_CRUEL_DEATH";
		case 932872355: /* GXTEntry: "Justice Served" */
			return "HONOR_EVENT_JUSTICE_SERVED";
		case -1091304842: /* GXTEntry: "Cheat" */
			return "HONOR_EVENT_CHEAT";
		default:
			break;
	}
	return "";
}

int func_834(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	if (!func_1027(iParam0))
	{
		return 0;
	}
	if (!func_94())
	{
		return 0;
	}
	if (!func_1028(iParam0, &iVar0, &uVar1))
	{
		return 0;
	}
	if (iVar0 == -816321659 && Global_1572887->f_12 != -1)
	{
		return 0;
	}
	STATS::CHAL_ADD_GOAL_PROGRESS_INT(iVar0, uVar1, iParam1);
	return 1;
}

int func_835(int iParam0, var uParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if ((bParam2 && func_2() == 0) && !UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
	{
		return 0;
	}
	if (!func_1029(iParam0, uParam1, &uVar0, &iVar11) || iVar11 < 1)
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

int func_836(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 153))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 126:
			return 32;
		case 22:
			return 17;
		case 4:
		case 5:
		case 34:
		case 55:
		case 67:
			return 18;
		case 56:
		case 57:
		case 58:
		case 59:
			return 19;
		case 102:
		case 106:
		case 109:
		case 112:
		case 114:
		case 120:
			return 29;
		case 39:
		case 73:
		case 128:
		case 132:
		case 137:
		case 141:
		case 145:
			return 0;
		case 7:
		case 19:
		case 28:
		case 42:
		case 61:
		case 74:
		case 87:
		case 90:
		case 95:
		case 129:
		case 133:
		case 138:
		case 142:
		case 146:
			return 3;
		case 0:
		case 8:
		case 29:
		case 43:
		case 75:
		case 91:
		case 130:
		case 134:
		case 139:
		case 143:
		case 147:
			return 6;
		case 17:
		case 47:
			return 7;
		case 18:
		case 27:
		case 41:
		case 82:
		case 98:
		case 125:
			return 4;
		case 10:
		case 26:
		case 38:
		case 60:
		case 72:
		case 92:
			return 10;
		case 1:
		case 16:
		case 32:
		case 51:
		case 64:
		case 80:
			return 22;
		case 2:
		case 14:
		case 20:
		case 23:
		case 30:
		case 45:
		case 65:
		case 77:
		case 86:
		case 89:
		case 96:
		case 99:
			return 2;
		case 3:
		case 15:
		case 21:
		case 24:
		case 31:
		case 46:
		case 78:
		case 85:
		case 88:
		case 100:
			return 1;
		case 9:
		case 37:
		case 69:
			return 8;
		case 13:
		case 35:
		case 44:
		case 63:
		case 76:
		case 84:
		case 94:
			return 9;
		case 103:
		case 107:
		case 110:
		case 116:
			return 30;
		case 104:
		case 105:
		case 108:
		case 111:
		case 113:
		case 115:
		case 117:
		case 118:
		case 119:
		case 121:
		case 122:
		case 123:
		case 124:
			return 31;
		case 136:
			return 5;
		case 6:
		case 25:
		case 36:
		case 68:
			return 15;
		case 11:
		case 33:
		case 52:
		case 53:
		case 66:
		case 70:
		case 71:
		case 81:
		case 83:
		case 93:
		case 97:
			return 33;
		case 48:
			return 12;
		case 49:
			return 13;
		case 50:
			return 14;
		case 62:
		case 79:
			return 20;
		case 101:
			return 11;
		case 149:
			return 23;
		case 150:
			return 24;
		case 151:
			return 25;
		case 12:
		case 54:
			return 21;
		case 127:
			return 34;
		case 131:
		case 135:
		case 140:
		case 144:
		case 148:
			return 27;
		case 152:
			return 24;
		default:
			break;
	}
	return -1;
}

bool func_837(int iParam0)
{
	return !func_1030(iParam0, 1);
}

int func_838(int iParam0)
{
	if (!func_588(iParam0))
	{
		return -1;
	}
	if (iParam0 == 34 && func_723() == 128)
	{
		return 128;
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 120:
		case 121:
			return 78;
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
		case 106:
		case 107:
		case 108:
			return 38;
		case 18:
		case 19:
		case 20:
		case 21:
		case 105:
			return 69;
		case 22:
		case 118:
			return 3;
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 109:
		case 110:
		case 111:
			return 5;
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 112:
		case 113:
			return 105;
		case 23:
		case 24:
			return 23;
		case 35:
			return 101;
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 114:
		case 115:
			return 26;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 102:
		case 103:
		case 104:
			return 76;
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 116:
		case 117:
			return 92;
		case 4:
			return 13;
		case 128:
		case 129:
		case 130:
		case 131:
			return 79;
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
			return 98;
		case 5:
			return 14;
		case 137:
		case 138:
		case 139:
		case 140:
			return 71;
		case 141:
		case 142:
		case 143:
		case 144:
			return 4;
		case 34:
			return 90;
		case 145:
		case 146:
		case 147:
		case 148:
			return 9;
		case 67:
			return 113;
		case 87:
		case 88:
		case 89:
			return 28;
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
			return 115;
		case 95:
		case 96:
		case 97:
			return 120;
		case 98:
			return 123;
		case 99:
		case 100:
		case 123:
			return 117;
		case 119:
			return 65;
		case 122:
			return 82;
		case 124:
			return 110;
		case 125:
			return 127;
		case 56:
			return 71;
		case 57:
			return 98;
		case 58:
			return 9;
		case 59:
			return 79;
		default:
			break;
	}
	return -1;
}

bool func_839(int iParam0)
{
	if (!(iParam0 >= 0 && iParam0 <= 150))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return Global_23117[iParam0 /*11*/] & 32 != 0;
	}
	return Global_1058888->f_40615[iParam0 /*11*/] & 32 != 0;
}

int func_840(int iParam0)
{
	if (!func_1031(iParam0))
	{
		return 0;
	}
	return func_1032(iParam0, 33554432);
}

float func_841(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_842()
{
	Global_1900383->f_444.f_13 = 0;
}

int func_843()
{
	return Global_1900383->f_444.f_13;
}

void func_844(int iParam0)
{
	Global_1900383->f_444.f_13 = iParam0;
}

int func_845()
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

int func_846(int iParam0)
{
	if (!func_269(iParam0))
	{
		return -1;
	}
	return func_1033(func_611(iParam0));
}

bool func_847(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_848(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_849()
{
	return Global_1905944->f_5693 != -1;
}

int func_850(int iParam0)
{
	if (func_2() != -1)
	{
		return 0;
	}
	return func_135(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

void func_851(int iParam0)
{
	if (!func_1034(iParam0))
	{
		func_1036(func_1035(iParam0));
	}
}

int func_852()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1034(COLLECTION::_0x126CBEBBA46693CF(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_853(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_1037(&Global_0, 8);
	}
	if (!func_94() || func_2() != -1)
	{
		return;
	}
	func_1037(&Global_0, 1);
}

int func_854(int iParam0, int iParam1, int iParam2)
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
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = 281887510; /* GXTEntry: "Little Egret Plume" */
			iVar10 = -164081697; /* GXTEntry: "Reddish Egret Plume" */
			iVar11 = -1161319399; /* GXTEntry: "Snowy Egret Plume" */
			iVar12 = 728781265; /* GXTEntry: "Lady of the Night Orchid" */
			break;
		case 2:
			iVar9 = -222563712; /* GXTEntry: "Heron Plume" */
			iVar10 = 1794857344; /* GXTEntry: "Lady Slipper Orchid" */
			iVar11 = 1952409553; /* GXTEntry: "Moccasin Flower Orchid" */
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726; /* GXTEntry: "Acuna\'s Star Orchid" */
			iVar11 = -404270094; /* GXTEntry: "Cigar Orchid" */
			iVar12 = 2093126853; /* GXTEntry: "Ghost Orchid" */
			break;
		case 8:
			iVar9 = 2085530337; /* GXTEntry: "Spoonbill Plume" */
			iVar10 = -150591160; /* GXTEntry: "Night Scented Orchid" */
			iVar11 = -323969289; /* GXTEntry: "Rat Tail Orchid" */
			iVar12 = 1504361882; /* GXTEntry: "Spider Orchid" */
			break;
		case 16:
			iVar9 = -1521783510; /* GXTEntry: "Clamshell Orchid" */
			iVar10 = 1714875242; /* GXTEntry: "Dragon\'s Mouth Orchid" */
			iVar11 = 1019229063; /* GXTEntry: "Queen\'s Orchid" */
			iVar12 = 927763737; /* GXTEntry: "Sparrow\'s Egg Orchid" */
			break;
	}
	iVar1 = func_855(iVar9);
	iVar2 = func_855(iVar10);
	iVar3 = func_855(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_855(iVar12);
	}
	iVar5 = func_856(iVar9);
	iVar6 = func_856(iVar10);
	iVar7 = func_856(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_856(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

int func_855(int iParam0)
{
	int iVar0;

	if (func_733(iParam0, 1, 0))
	{
		iVar0 = func_735(iParam0, 0, 0);
	}
	return iVar0;
}

int func_856(int iParam0)
{
	switch (iParam0)
	{
		case 281887510: /* GXTEntry: "Little Egret Plume" */
			return 5;
		case -164081697: /* GXTEntry: "Reddish Egret Plume" */
			return 5;
		case -1161319399: /* GXTEntry: "Snowy Egret Plume" */
			return 5;
		case 728781265: /* GXTEntry: "Lady of the Night Orchid" */
			return 15;
		case -222563712: /* GXTEntry: "Heron Plume" */
			return 20;
		case 1794857344: /* GXTEntry: "Lady Slipper Orchid" */
			return 7;
		case 1952409553: /* GXTEntry: "Moccasin Flower Orchid" */
			return 10;
		case 2116770557:
			return 25;
		case -651064726: /* GXTEntry: "Acuna\'s Star Orchid" */
			return 3;
		case -404270094: /* GXTEntry: "Cigar Orchid" */
			return 7;
		case 2093126853: /* GXTEntry: "Ghost Orchid" */
			return 5;
		case 2085530337: /* GXTEntry: "Spoonbill Plume" */
			return 30;
		case -150591160: /* GXTEntry: "Night Scented Orchid" */
			return 5;
		case -323969289: /* GXTEntry: "Rat Tail Orchid" */
			return 10;
		case 1504361882: /* GXTEntry: "Spider Orchid" */
			return 5;
		case -1521783510: /* GXTEntry: "Clamshell Orchid" */
			return 5;
		case 1714875242: /* GXTEntry: "Dragon\'s Mouth Orchid" */
			return 5;
		case 1019229063: /* GXTEntry: "Queen\'s Orchid" */
			return 5;
		case 927763737: /* GXTEntry: "Sparrow\'s Egg Orchid" */
			return 10;
		default:
			break;
	}
	return 0;
}

void func_857(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;

	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_94() && (func_1038(38) || func_850(38)))
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				sVar5 = "COL_CC_INTRO";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
				iVar13 = 38816757; /* GXTEntry: "Smoking and Other Hobbies" */
			}
			else
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				sVar5 = "COL_CC_INTRO_PRE";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
				iVar13 = 578982838; /* GXTEntry: "A New Hobby" */
			}
			sVar4 = "COL_CC_TITLE";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = 12;
			iVar14 = -2076669067;
			break;
		case 39:
			if (func_94() && (func_1038(39) || func_850(39)))
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_02";
				sVar5 = "COL_DB_INTRO";
				iVar9 = 3;
				iVar11 = 1162303770; /* GXTEntry: "Deborah MacGuiness" */
				iVar13 = -1223580455; /* GXTEntry: "A Test of Faith" */
			}
			else
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_01";
				sVar5 = "COL_DB_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
				iVar13 = 349797279; /* GXTEntry: "Digging up the Past" */
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_DB_TITLE";
			vVar6 = { 122.7758f, -185.4978f, 116.4383f };
			iVar10 = 30;
			iVar14 = -440187297;
			break;
		case 43:
			if (iParam3 == -1791518714)
			{
				sVar0 = "MISSION_RCEXO1";
				sVar3 = "RCEXO1_DESC";
				iVar10 = 30;
			}
			else if (iParam3 == -2087881550)
			{
				sVar0 = "MISSION_RCEXO2";
				sVar3 = "RCEXO2_DESC";
				iVar10 = 37;
			}
			else if (iParam3 == 1908068621)
			{
				sVar0 = "MISSION_RCEXO3";
				sVar3 = "RCEXO3_DESC";
				iVar10 = 40;
			}
			else if (iParam3 == 1611247019)
			{
				sVar0 = "MISSION_RCEXO4";
				sVar3 = "RCEXO4_DESC";
				iVar10 = 50;
			}
			else if (iParam3 == 1319635688)
			{
				sVar0 = "MISSION_RCEXO5";
				sVar3 = "RCEXO5_DESC";
				iVar10 = 25;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_EX_TITLE";
			sVar5 = "COL_EX_INTRO";
			vVar6 = { 2585.668f, -1009.616f, 44.97972f };
			iVar9 = func_1039(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963; /* GXTEntry: "Duchesses and Other Animals" */
			break;
		case 41:
			if (func_94() && (func_1038(41) || func_850(41)))
			{
				sVar0 = "MISSION_RCFSH2";
			}
			else
			{
				sVar0 = "MISSION_RCFSH1";
			}
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_RARE_FISH_01";
			sVar4 = "COL_LF_TITLE";
			sVar5 = "COL_LF_INTRO";
			vVar6 = { 337.3075f, -684.5404f, 41.8362f };
			iVar9 = 13;
			iVar14 = 1995362678;
			iVar11 = -273196610; /* GXTEntry: "Jeremy Gill" */
			iVar13 = -1666208710; /* GXTEntry: "A Fisher of Fish" */
			break;
		case 49:
			if (func_94() && (func_1038(49) || func_850(49)))
			{
				sVar0 = "MISSION_RCRKF2";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				sVar5 = "COL_RC_INTRO";
				iVar9 = 3;
				iVar11 = -781551276; /* GXTEntry: "Francis Sinclair" */
				iVar13 = -170865073; /* GXTEntry: "Geology for Beginners" */
			}
			else
			{
				sVar0 = "MISSION_RCRKF1";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				sVar5 = "COL_RC_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
				iVar13 = 1974744712; /* GXTEntry: "Rock Carvings" */
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_RC_TITLE";
			vVar6 = { -2178.646f, -245.6886f, 191.1569f };
			iVar10 = 10;
			iVar14 = 2103522376;
			break;
		case 51:
			sVar0 = "MISSION_RCTAX1";
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			sVar4 = "COL_TX_TITLE";
			sVar5 = "COL_TX_INTRO";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = func_1039(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931; /* GXTEntry: "Ms. L Hobbs" */
			iVar13 = -1424865411; /* GXTEntry: "A Better World, A New Friend" */
			break;
	}
	sVar2 = func_1040(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_1041(iParam0, iVar13, iVar14))
	{
	}
	if (func_1042(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_1043(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1044(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_1045(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_1046(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

int func_858(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_864(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	return uVar5;
}

void func_859(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_858(iParam1, 5) || iParam0 == func_858(iParam1, 6)) || iParam0 == func_858(iParam1, 7)) || iParam0 == func_858(iParam1, 8)) || iParam0 == func_858(iParam1, 9))
	{
		func_1047(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_857(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_1048(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_860(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 1;
	if ((((iParam0 == func_858(iParam1, 5) || iParam0 == func_858(iParam1, 6)) || iParam0 == func_858(iParam1, 7)) || iParam0 == func_858(iParam1, 8)) || iParam0 == func_858(iParam1, 9))
	{
		if (func_1047(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_857(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_1048(51, 0, 0, iVar0, func_1039(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_857(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_1048(51, 0, 0, iVar0, func_1039(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_861()
{
	int iVar0;

	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) <= 4);
}

bool func_862()
{
	return Global_1905944->f_5694;
}

bool func_863()
{
	var uVar0;

	uVar0 = Global_1905944->f_5695;
	Global_1905944->f_5695 = 0;
	return uVar0;
}

int func_864(int iParam0, var uParam1)
{
	if (!func_1049(iParam0))
	{
		return 0;
	}
	*uParam1 = Global_1914270[iParam0];
	if (*uParam1 == 0)
	{
		return 0;
	}
	return 1;
}

int func_865(int iParam0)
{
	return func_1050(iParam0);
}

int func_866(int iParam0)
{
	if (func_2() != -1)
	{
		if (func_764(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_764(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_867(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_764(iParam0, 65536) && !func_764(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_764(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_764(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_868(int iParam0, int iParam1, int iParam2)
{
	if (!func_284(iParam1, 0))
	{
		return false;
	}
	return func_869(iParam0, iParam1) >= iParam2;
}

int func_869(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar4;

	if (!func_284(iParam1, 0))
	{
		return 0;
	}
	Var0 = { func_1051(iParam0, iParam1) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(iParam0, &Var0, 0);
	return uVar4;
}

int func_870(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_284(iParam1, 0))
	{
		return 0;
	}
	if (iParam2 < 1)
	{
		return 0;
	}
	Var0 = { func_871(iParam0) };
	Var5 = { func_872(iParam0, iParam1, Var0, Var0.f_4) };
	return func_1052(iParam0, iParam1, &Var5, iParam2, iParam3, bParam4);
}

struct<5> func_871(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_872(iParam0, joaat("character"), func_665(), -1591664384) };
	Var0.f_4 = 1084182731;
	return Var0;
}

struct<4> func_872(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, int iParam6)
{
	struct<4> Var0;

	if (!func_284(iParam1, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(iParam0, &uParam2, iParam1, iParam6, &Var0);
	return Var0;
}

int func_873(int iParam0, int iParam1)
{
	if (!func_284(iParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

void func_874(int iParam0)
{
	if (func_850(41))
	{
		func_283(363, 0);
	}
	else
	{
		func_283(362, 0);
	}
	switch (iParam0)
	{
		case 323124696: /* GXTEntry: "Legendary Bullhead Catfish" */
			func_1053(-1865241121);
			func_1054(-642026005);
			func_1055(-642026005);
			func_853(0, 10);
			break;
		case -2108314374: /* GXTEntry: "Legendary Chain Pickerel" */
			func_1053(2117142684);
			func_1054(-940584364);
			func_1055(-940584364);
			func_853(0, 10);
			break;
		case -1193798153: /* GXTEntry: "Legendary Lake Sturgeon" */
			func_1053(-1409326024);
			func_1054(1972645282);
			func_1055(1972645282);
			func_853(0, 10);
			break;
		case -787702678: /* GXTEntry: "Legendary Largemouth Bass" */
			func_1053(-641744968);
			func_1054(1667205433);
			func_1055(1667205433);
			func_853(0, 10);
			break;
		case -804542901: /* GXTEntry: "Legendary Longnose Gar" */
			func_1053(-946988203);
			func_1054(1362715885);
			func_1055(1362715885);
			func_853(0, 10);
			break;
		case -1696275132: /* GXTEntry: "Legendary Muskie" */
			func_1053(-646136018);
			func_1054(1053540370);
			func_1055(1053540370);
			func_853(0, 10);
			break;
		case -161595323: /* GXTEntry: "Legendary Perch" */
			func_1053(-955835837);
			func_1054(-1100103852);
			func_1055(-1100103852);
			func_853(0, 10);
			break;
		case -1114363619: /* GXTEntry: "Legendary Redfin Pickerel" */
			func_1053(-179276075);
			func_1054(-1409869209);
			func_1055(-1409869209);
			func_853(0, 10);
			break;
		case -368407134: /* GXTEntry: "Legendary Rock Bass" */
			func_1053(-492711560);
			func_1054(-1760235357);
			func_1055(-1760235357);
			func_853(0, 10);
			break;
		case 1997759228: /* GXTEntry: "Legendary Smallmouth Bass" */
			func_1053(1764383959);
			func_1054(-138366827);
			func_1055(-138366827);
			func_853(0, 10);
			break;
		case 1265573293: /* GXTEntry: "Legendary Sockeye Salmon" */
			func_1053(317501533);
			func_1054(-1261163843);
			func_1055(-1261163843);
			func_853(0, 10);
			break;
		case -1030441283: /* GXTEntry: "Legendary Steelhead Trout" */
			func_1053(817753087);
			func_1054(-963523016);
			func_1055(-963523016);
			func_853(0, 10);
			break;
		case -1490884871: /* GXTEntry: "Legendary Bluegill" */
			func_1053(576606016);
			func_1054(560825326);
			func_1055(560825326);
			func_853(0, 10);
			break;
		case -395458616: /* GXTEntry: "Legendary Northern Pike" */
			func_1053(814934957);
			func_1054(858269539);
			func_1055(858269539);
			break;
	}
}

int func_875(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_876(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_1056(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_877(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_878(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_879(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_880(int iParam0, int iParam1)
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

float func_881(float fParam0, float fParam1, float fParam2)
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

int func_882(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_879(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_878(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_631(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_876(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_875(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_877(iParam0);
	if (iVar5 < 1 || iVar5 > func_880(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_883(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_1057() - fParam1);
	func_1058(uParam0, 1);
	func_1059(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_884(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_885(var uParam0)
{
	if (!func_634(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_1060(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_1057() - uParam0->f_1);
}

int func_886(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_1061(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_1062())
	{
		return func_1061(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1225638->f_21[iParam1])
	{
		return func_1061(&(((*Global_1108178)[iParam1 /*37*/])->f_4), iVar0, 5);
	}
	return 0;
}

char* func_887(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

void func_888(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iParam2 = func_795(iParam2, 0, 100);
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_398[iParam1 /*4*/] = iParam2;
	iVar0 = func_88(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
	}
	func_644(iVar0, iParam1, func_578(iParam0, iParam1));
	func_1063(iVar0, iParam1);
}

void func_889(int iParam0, int iParam1, float fParam2)
{
	fParam2 = func_1064(fParam2, 0f, 1E+09f);
	((Global_40.f_1095.f_1[iParam0 /*436*/])->f_398[iParam1 /*4*/])->f_2 = fParam2;
}

int func_890(int iParam0, int iParam1)
{
	var uVar0;

	if (func_641(iParam1, &uVar0))
	{
		if (ATTRIBUTE::_0x200373A8DF081F22(iParam0, uVar0))
		{
			return 1;
		}
	}
	return 0;
}

float func_891(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;

	fVar0 = 0f;
	if (iParam1 == 0)
	{
		if (func_437(iParam0, 0) > 50)
		{
			fVar0 = (fVar0 + 0.25f);
		}
	}
	if (func_733(-184823984 /* GXTEntry: "Boar Tusk Talisman" */, 1, 0))
	{
		fVar0 = (fVar0 - -0.1f);
	}
	if (func_213() == 0 && func_201() == iParam0)
	{
		fVar1 = func_1065(iParam1);
		fVar0 = (fVar0 - fVar1);
	}
	return fVar0;
}

float func_892(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return ((Global_40.f_1095.f_1[iParam0 /*436*/])->f_398[iParam1 /*4*/])->f_1;
}

void func_893(int iParam0, int iParam1, float fParam2)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	fParam2 = func_1064(fParam2, -1f, 1f);
	((Global_40.f_1095.f_1[iParam0 /*436*/])->f_398[iParam1 /*4*/])->f_1 = fParam2;
}

void func_894(int iParam0)
{
	Global_1900383->f_444.f_8 = iParam0;
}

void func_895(int iParam0, int iParam1, float fParam2)
{
	fParam2 = func_1064(fParam2, 0f, 1E+09f);
	((Global_40.f_1095.f_1[iParam0 /*436*/])->f_407[iParam1 /*4*/])->f_2 = fParam2;
}

int func_896(int iParam0)
{
	vector3 vVar0;
	Vector3 vVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	vVar0 = { func_932(func_1066()) };
	vVar3 = func_1067();
	if (func_1068(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), vVar0, vVar3, 0))
	{
		return 1;
	}
	return 0;
}

int func_897(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (PED::_IS_PED_USING_SCENARIO_HASH(iParam0, 696740378) || PED::_IS_PED_USING_SCENARIO_HASH(iParam0, 197929875))
	{
		return 1;
	}
	return 0;
}

float func_898(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return ((Global_40.f_1095.f_1[iParam0 /*436*/])->f_407[iParam1 /*4*/])->f_1;
}

void func_899(int iParam0, int iParam1, float fParam2)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	fParam2 = func_1064(fParam2, -1f, 1f);
	((Global_40.f_1095.f_1[iParam0 /*436*/])->f_407[iParam1 /*4*/])->f_1 = fParam2;
}

void func_900(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((Global_40.f_1095.f_1[iParam0 /*436*/])->f_407[iParam1 /*4*/])->f_1 = 0f;
}

int func_901(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return ((*Global_1900383)[iParam0 /*45*/])->f_1;
}

void func_902(int iParam0)
{
	Global_1900383->f_444.f_6 = iParam0;
}

int func_903(int iParam0)
{
	if (!func_284(*iParam0, 0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case -1073808995: /* GXTEntry: "Live Crickets" */
			*iParam0 = -1753819339; /* GXTEntry: "Cricket Bait" */
			return 1;
		case 1903483453: /* GXTEntry: "Live Worms" */
			*iParam0 = -1527293029; /* GXTEntry: "Worm Bait" */
			return 1;
		case -541584777: /* GXTEntry: "Opened Cocaine Gum" */
			*iParam0 = 206762213; /* GXTEntry: "Cocaine Gum" */
			return 1;
		case 998010398: /* GXTEntry: "Opened Chewing Tobacco" */
			*iParam0 = -324053813; /* GXTEntry: "Chewing Tobacco" */
			return 1;
		case -1424823393: /* GXTEntry: "Opened Cigarettes" */
			*iParam0 = -885810591; /* GXTEntry: "Premium Cigarettes" */
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_904(int iParam0)
{
	return func_736(iParam0) == joaat("weapon");
}

struct<4> func_905(bool bParam0)
{
	int iVar0;

	iVar0 = func_666(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224214))
		{
			*Global_1224214 = { func_331(923904168, func_330(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224222))
		{
			*Global_1224222 = { func_331(923904168, func_330(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_331(923904168, func_330(bParam0), -740156546, 0);
}

bool func_906(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_332(iParam0, *uParam1, iParam2, bParam3) > 0;
}

int func_907(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_1069(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

int func_908(int iParam0, bool bParam1)
{
	if (func_1070(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_1071(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0) > 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_909(int iParam0, var uParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	bool bVar28;
	int iVar29;

	if (!func_284(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_954(iParam0, 0, 1) };
	iVar5 = 1728382685; /* GXTEntry: "Right" */
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_1072((375 + iVar29), 1);
		if (func_906(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_907(iParam0, &Var6, iVar5);
			if ((bParam2 && bVar28) || !bVar28)
			{
				*uParam1 = iVar5;
				return 1;
			}
		}
		iVar29++;
	}
	return 0;
}

int func_910(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_284(iParam0, 0))
	{
		return 0;
	}
	if (!func_668(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_666(bParam3), iParam0);
}

struct<28> func_911(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	struct<28> Var0;
	struct<29> Var28;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_666(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_915(&Var28) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_912(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 28))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1073(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1073(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 28))
	{
		func_1073(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<17> func_913(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_666(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_915(&Var17) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_914(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 17))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1073(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1073(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17))
	{
		func_1073(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<16> func_915(var uParam0)
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
	return Var0;
}

int func_916(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 16))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1073(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1073(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16))
	{
		func_1073(iVar0, 1);
		return iVar0;
	}
	return -1;
}

int func_917(struct<4> Param0, int iParam4, int iParam5)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_1074(Param0, iParam4, &Var0, iParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_918(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam0 != 0)
	{
		iVar5 = func_1070(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_1075(iParam0);
			iVar0 = 0;
			while (iVar0 < iVar6)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar5, iVar0, &iVar1))
				{
					iVar4 = iVar1;
					if (iVar4 == iParam1)
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

void func_919(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (iParam1 == -377364164 || iParam1 == 357708345)
	{
		return;
	}
	iVar0 = iParam1;
	PED::_SET_PED_COMPONENT_ENABLED(iParam0, iVar0, false, false, false);
}

void func_920(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar0 = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
	if (!bParam7)
	{
		if (func_1076(iParam1))
		{
			func_1077(iParam0, 41788943);
		}
		else if (bParam5)
		{
			PED::_SET_RANDOM_OUTFIT_VARIATION(iParam0, 1);
			bVar0 = true;
		}
	}
	if (PED::IS_PED_HUMAN(iParam0))
	{
		if (bParam6)
		{
			WEAPON::_0x899A04AFCC725D04(iParam0, WEAPON::_0xD42514C182121C23(iParam1));
		}
		if (PED::IS_PED_MALE(iParam0) && !bParam3)
		{
			func_1078(iParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 502, true);
	}
	else if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (!bParam5)
		{
			PED::_SET_PED_OUTFIT_PRESET(iParam0, 0, 0);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_361(iParam0, 0);
			bVar0 = true;
		}
		func_353(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, 0, 1, 1, 1, 0);
	}
}

void func_921(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = { 0f, 0f, 0f };
}

float func_922(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_923(var uParam0)
{
	return *uParam0;
}

void func_924(var uParam0, vector3 vParam1)
{
	uParam0->f_3.f_3 = { vParam1 };
}

void func_925(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_926(vector3 vParam0, vector3 vParam3, bool bParam6, bool bParam7)
{
	bool bVar0;
	var uVar1;
	float fVar2;

	bVar0 = CAM::IS_SPHERE_VISIBLE(vParam0, 5f);
	if (bParam6)
	{
		if (func_1079(vParam0 + Vector(0.2f, 0f, 0f)))
		{
			return 0;
		}
	}
	if (!MISC::GET_GROUND_Z_FOR_3D_COORD(vParam0 + Vector(1f, 0f, 0f), &uVar1, 0))
	{
		return 0;
	}
	if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0, 7f))
	{
		return 0;
	}
	if (bVar0)
	{
	}
	else
	{
		if (bParam7)
		{
			if (vParam0.z > (vParam3.z + 10f))
			{
				return 0;
			}
		}
		fVar2 = BUILTIN::VDIST(vParam0, vParam3);
		if (fVar2 > 40f && fVar2 < 80f)
		{
			return 1;
		}
	}
	return 0;
}

int func_927(vector3 vParam0, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7, int iParam8, float fParam9, int iParam10, float fParam11)
{
	int iVar0;

	switch (*iParam3)
	{
		case 0:
			if (iParam3->f_2 > 4)
			{
				*bParam4 = 1;
				return 0;
			}
			iParam3->f_1 = TASK::_0x74F0209674864CBD();
			func_1080(&(iParam3->f_1), iParam3->f_2, vParam0, iParam5, iParam7, iParam8, fParam9, iParam10, fParam11);
			if (!TASK::_0x1AC5A8AB50CFAA33(iParam3->f_1))
			{
			}
			else
			{
				func_1081(&(iParam3->f_1), iParam5);
				if (!func_137(iParam3->f_6))
				{
					TASK::_0xCE4E669400E5F8AA(iParam3->f_1, func_1082(iParam3->f_6));
				}
				TASK::_0x2B8AF29A78024BD3(iParam3->f_1);
			}
			*iParam3 = 3;
			break;
		case 3:
			if (!TASK::_0x1AC5A8AB50CFAA33(iParam3->f_1))
			{
				iVar0 = 4;
			}
			else
			{
				iVar0 = TASK::_0x0365000D8BF86531(&(iParam3->f_1));
			}
			switch (iVar0)
			{
				case 4:
					if (bParam6 && iParam3->f_2 < 4)
					{
						iParam3->f_2++;
						*iParam3 = 0;
					}
					else
					{
						*bParam4 = 1;
					}
					break;
				case 3:
					iParam3->f_3 = { TASK::_0x865732725536EE39(&(iParam3->f_1)) };
					*iParam3 = 4;
					if (!bParam6)
					{
						return 1;
					}
					break;
			}
			break;
		case 4:
			return 1;
	}
	return 0;
}

bool func_928(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_929(var uParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_1083(*uParam0, 0f, 0f, 0f))
	{
		return 1;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, iParam3) && !bVar2)
	{
		if (iVar1 < iParam2)
		{
			iVar1++;
			vVar4.f_2 = (vVar4.z + IntToFloat(iParam1));
			STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		}
		else
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
		STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, iParam3) && !bVar3)
		{
			if (iVar1 < iParam2)
			{
				iVar1++;
				vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
				STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
			}
			else
			{
				bVar3 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = uVar0;
		return 1;
	}
	if (bVar2 && bVar3)
	{
		return 0;
	}
	uParam0->f_2 = uVar0;
	return 1;
}

var func_930(var uParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, uParam1);
}

int func_931(int iParam0)
{
	switch (func_2())
	{
		case -1:
			return (Global_1357549->f_1494 && iParam0) != 0;
	}
	return 0;
}

Vector3 func_932(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1343.699f, 2429.397f, 307.0626f;
		case 1:
			return -123.1805f, -28.8611f, 94.8478f;
		case 2:
			return 667.9077f, -1252.78f, 42.9221f;
		case 3:
			return 1880.807f, -1873.231f, 41.8094f;
		case 4:
			return 1422.625f, -7332.473f, 80.5977f;
		case 5:
			return 2254.96f, -758.12f, 41.75f;
		case 6:
			return 2351.282f, 1362.077f, 104.9752f;
		case 7:
			return -2593.21f, 453.9533f, 145.9973f;
		case 8:
			return func_1084();
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_933(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_88(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	uVar2 = func_1085(iVar1);
	if (DECORATOR::DECOR_EXIST_ON(iVar0, "HorseGender"))
	{
		iVar3 = DECORATOR::DECOR_GET_INT(iVar0, "HorseGender");
	}
	else
	{
		iVar3 = func_990(iVar0);
		DECORATOR::DECOR_SET_INT(iVar0, "HorseGender", iVar3);
	}
	func_751(iParam0, iVar1);
	func_750(iParam0, uVar2);
	func_752(iParam0, iVar3);
	iVar4 = -1;
	iVar5 = -15;
	if (iParam1 != 0)
	{
		iVar4 = MISC::GET_GAME_TIMER();
		iVar5 = func_221();
	}
	func_199(iParam0, iParam1);
	func_502(iParam0, iVar4);
	func_503(iParam0, iVar5);
	iVar6 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar0, 7);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_ATTRIBUTE_POINTS(iVar0, 7));
	func_718(iParam0, iVar6);
	func_804(iParam0, fVar7);
	iVar8 = 0;
	while (iVar8 < 3)
	{
		if (func_652(iVar8, &iVar9))
		{
			iVar10 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar0, iVar9);
			func_746(iParam0, iVar8, iVar10);
		}
		iVar8++;
	}
}

int func_934(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(1268180497, iVar0))
	{
		return 0;
	}
	iVar1 = 1268180497;
	if (PED::_0x98082246107A6ACF(iParam0, iVar1))
	{
		return 1;
	}
	return 0;
}

void func_935(int iParam0)
{
	if (func_603() < iParam0)
	{
		func_1086(iParam0);
	}
}

int func_936(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_666(bParam7);
	if (INVENTORY::_0x033EE4B89F3AC545(iVar0, &uParam0, iParam4) <= iParam6)
	{
		return 0;
	}
	if (!INVENTORY::_0xBE012571B25F5ACA(iVar0, &uParam0, iParam4, iParam6, uParam5))
	{
		return 0;
	}
	return 1;
}

int func_937(var uParam0, var uParam1)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_666(0), uParam0, uParam1, 29, 1))
	{
		return 0;
	}
	return 1;
}

int func_938(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10, bool bParam11)
{
	struct<12> Var0;
	int iVar14;
	int iVar15;
	struct<16> Var16;
	int iVar32;

	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	if (!func_670(Param0, &Var0, 1, 0))
	{
		return -1;
	}
	if (func_939(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return -1;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(Var0.f_4, iParam8))
	{
		return -1;
	}
	iVar14 = func_332(Var0.f_4, Param4, iParam8, 0);
	iVar15 = INVENTORY::_0xE80E50BEE276A54A(Var0.f_4, iParam8);
	if (iVar15 >= 0)
	{
		if (iVar14 >= iVar15)
		{
			return -1;
		}
		else if ((iVar14 + Var0.f_11) > iVar15)
		{
			if (bParam11)
			{
				return -1;
			}
			Var0.f_11 = (iVar15 - iVar14);
		}
	}
	Var16 = { func_915(&Var0) };
	Var16.f_4 = { Param4 };
	Var16.f_11 = iParam8;
	Var16.f_10 = bParam10;
	iVar32 = func_916(1168099063, &Var16, bParam9);
	if (iVar32 == -1)
	{
		return -1;
	}
	return iVar32;
}

int func_939(var uParam0, bool bParam1)
{
	if (((*uParam0 == *bParam1 && uParam0->f_1 == bParam1->f_1) && uParam0->f_2 == bParam1->f_2) && uParam0->f_3 == bParam1->f_3)
	{
		return 1;
	}
	return 0;
}

int func_940(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	struct<11> Var0;
	struct<11> Var14;
	struct<16> Var28;
	struct<16> Var44;
	int iVar60;

	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return -1;
	}
	if (func_939(&Param0, &Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_670(Param0, &Var0, 1, 0) || !func_670(Param4, &Var14, 1, 0))
	{
		return -1;
	}
	if (func_939(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return -1;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(Var0.f_4, Var14.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(Var14.f_4, Var0.f_9))
	{
		return -1;
	}
	Var28 = { func_915(&Var0) };
	Var28.f_4 = { Var14.f_5 };
	Var28.f_11 = Var14.f_9;
	Var28.f_10 = (Var14.f_10 || iParam8);
	Var44 = { func_915(&Var14) };
	Var44.f_4 = { Var0.f_5 };
	Var44.f_11 = Var0.f_9;
	Var44.f_10 = (Var0.f_10 || iParam8);
	iVar60 = -1;
	if (bParam9)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar60, 712853601, 1168099063))
		{
			if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar60, &Var28, 16) && NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar60, &Var44, 16))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar60))
				{
					func_1073(iVar60, 1);
				}
				else
				{
					NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar60);
					return -1;
				}
			}
			else
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar60);
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	else
	{
		iVar60 = func_916(1168099063, &Var28, 0);
		iVar60 = func_916(1168099063, &Var44, 0);
	}
	return iVar60;
}

void func_941(int iParam0, var uParam1, var uParam2)
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

bool func_942()
{
	return !&Global_1911774;
}

void func_943(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	Global_1911774->f_4[Global_1911774->f_3 /*4*/] = iParam0;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_1 = iParam1;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_2 = bParam2;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_3 = bParam3;
	if (Global_1911774->f_3 < 20)
	{
		Global_1911774->f_3++;
	}
}

char* func_944(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_945(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
			if (MISC::IS_STRING_NULL_OR_EMPTY(&(Var3.f_2[iVar0 /*3*/])))
			{
				Jump @227; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY((Var3.f_2[iVar0 /*3*/])->f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(&(Var3.f_2[iVar0 /*3*/]));
				iVar2 = MISC::GET_HASH_KEY((Var3.f_2[iVar0 /*3*/])->f_1);
				if (iParam2 != 0 && (Var3.f_2[iVar0 /*3*/])->f_2 != iParam2)
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
					*uParam1 = { *(Var3.f_2[iVar0 /*3*/]) };
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_946(int iParam0)
{
	if (!func_284(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

int func_947(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_284(iParam0, 0))
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		return 0;
	}
	iVar0 = func_731(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1087("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_952(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_1088(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_953(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_953(iVar1);
	}
	return 0;
}

int func_948(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_949(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_950(&Var0, func_905(0));
	}
	if (!func_951(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_953(iVar14);
	return uVar15;
}

struct<14> func_949(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_950(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_951(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_666(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_952(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_953(int iParam0)
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

struct<5> func_954(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_330(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_736(iParam0))
	{
		case joaat("clothing"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0 = { func_331(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("weapon"):
			Var0 = { func_905(bParam1) };
			if (bParam2 && func_908(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_906(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_906(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_907(iParam0, &Var5, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_1089(bParam1) };
			switch (func_1070(iParam0))
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
			if (func_1090(iParam0, -1823706425))
			{
				Var0 = { func_331(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_1090(iParam0, -1483207246))
			{
				Var0 = { func_331(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
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
				Var27.f_9 = -1591664384;
				if (!func_670(Var0, &Var27, bParam1, 0))
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

int func_955(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (func_1018(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	if (!func_668(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_666(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

void func_956(int iParam0)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	bVar0 = PED::_0x33FA048675821DA7(iParam0, 3);
	if (!bVar0)
	{
		PED::_0x2EB75FB86C41F026(iParam0, 3, 1);
	}
	func_1091(iParam0, 0f, 0);
	if (!bVar0)
	{
		PED::_0x2EB75FB86C41F026(iParam0, 3, 0);
	}
}

int func_957(int iParam0)
{
	switch (iParam0)
	{
		case -2013384490: /* GXTEntry: "Parasol Mushroom" */
		case -1602657245: /* GXTEntry: "Bay Bolete" */
		case -1066874997: /* GXTEntry: "Chanterelle" */
		case -746674788: /* GXTEntry: "Ram\'s Head" */
			return 1;
	}
	return 0;
}

int func_958(int iParam0)
{
	switch (iParam0)
	{
		case -2051332199: /* GXTEntry: "Oleander Sage" */
		case -1664530975: /* GXTEntry: "Evergreen Huckleberry" */
		case -597058368: /* GXTEntry: "Indian Tobacco" */
		case -529638012: /* GXTEntry: "Yarrow" */
		case -90546043: /* GXTEntry: "Violet Snowdrop" */
		case 128702355: /* GXTEntry: "Milkweed" */
		case 228922461: /* GXTEntry: "Prairie Poppy" */
		case 2006811763: /* GXTEntry: "Vanilla Flower" */
			return 1;
	}
	return 0;
}

int func_959(int iParam0)
{
	switch (iParam0)
	{
		case -2085219828: /* GXTEntry: "Common Bulrush" */
		case -1620920647: /* GXTEntry: "English Mace" */
		case -1477273558: /* GXTEntry: "Peppermint" */
		case -635441454: /* GXTEntry: "Sugar Cube" */
			return 1;
	}
	return 0;
}

int func_960(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, func_985());
	return iVar0;
}

int func_961(var uParam0)
{
	return 20;
}

var func_962()
{
	return Global_1900383->f_421;
}

void func_963(int iParam0)
{
	Global_1900383->f_421 = iParam0;
}

int func_964(int iParam0)
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

int func_965()
{
	return 1342496140 /* GXTEntry: "Tennessee Walker - Mahogany Bay Coat" */;
}

int func_966()
{
	return 446670976;
}

int func_967()
{
	return 1;
}

int func_968()
{
	return -868094182 /* GXTEntry: "Tennessee Walker - Chestnut Coat" */;
}

int func_969()
{
	return 1074477367;
}

int func_970()
{
	return 1;
}

int func_971()
{
	return -997197050 /* GXTEntry: "Thoroughbred - Seal Brown Coat" */;
}

int func_972()
{
	return -2063289686;
}

int func_973()
{
	return 2;
}

int func_974()
{
	return -868094182 /* GXTEntry: "Tennessee Walker - Chestnut Coat" */;
}

int func_975()
{
	return 1074477367;
}

int func_976()
{
	return 1;
}

int func_977()
{
	return 1235275977 /* GXTEntry: "Morgan - Bay Coat" */;
}

int func_978()
{
	return 2030804811;
}

int func_979()
{
	return 1;
}

int func_980()
{
	return 1974379573 /* GXTEntry: "Kentucky Saddler - Grey Coat" */;
}

int func_981()
{
	return 2024948086;
}

int func_982()
{
	return 1;
}

void func_983(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

void func_984(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_207(iParam0);
	iVar1 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iParam1 == 1)
	{
		sVar2 = "HORSE_BONDED";
	}
	else if (iParam1 == iVar1)
	{
		sVar2 = "HORSE_BONDING_MAXIMUM";
	}
	else
	{
		sVar2 = "HORSE_BONDING_LEVELUP";
	}
	func_812(sVar2, MISC::_CREATE_VAR_STRING(2, "HORSE_BONDING_LEVEL", iParam1), 908516622, -961843223, -2, "HUD_Toast_Soundset", "horse_bonding", 0, 0, 1, 1);
}

int func_985()
{
	return 0;
}

void func_986(int iParam0, char* sParam1)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	char* sVar6;
	char* sVar7;

	sVar0 = "RPG_LEVEL_PROGRESS_TOAST";
	switch (iParam0)
	{
		case 0:
			sVar1 = "RPG_HEALTH";
			break;
		case 1:
			sVar1 = "RPG_STAMINA";
			break;
		default:
			return;
	}
	sVar2 = MISC::_CREATE_VAR_STRING(2, "HORSE_RPG_LEVEL_PROGRESS", sParam1);
	switch (iParam0)
	{
		case 0:
			iVar3 = -1114634884;
			break;
		case 1:
			iVar3 = 1944692767;
			break;
		default:
			return;
	}
	sVar4 = func_1093(func_1092(sParam1));
	iVar5 = MISC::GET_HASH_KEY(sVar4);
	sVar6 = "";
	sVar7 = "HUD_Toast_Soundset";
	func_812(MISC::_CREATE_VAR_STRING(10, sVar0, sVar1), sVar2, iVar3, iVar5, -2, sVar7, sVar6, 0, 0, 1, 1);
}

int func_987(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, func_988());
	return iVar0;
}

int func_988()
{
	return 1;
}

void func_989(int iParam0)
{
	var uVar0[3];
	var uVar4;
	int iVar5;
	int iVar6;
	var uVar7;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar5 = 0;
	while (iVar5 < 3)
	{
		uVar0[iVar5] = PED::_0x0CEEB6F4780B1F2F(iParam0, iVar5);
		iVar5++;
	}
	iVar5 = 0;
	while (iVar5 < 3)
	{
		iVar6 = &uVar0[iVar5];
		if (iVar6 == 0)
		{
		}
		else
		{
			PED::_0x627F7F3A0C4C51FF(iParam0, &(uVar0[iVar5]));
		}
		iVar5++;
	}
	iVar5 = 0;
	while (iVar5 < 3)
	{
		uVar4 = PED::_0x0CEEB6F4780B1F2F(iParam0, iVar5);
		uVar7 = uVar4;
		iVar5++;
	}
}

int func_990(int iParam0)
{
	int iVar0;
	float fVar1;

	iVar0 = 1;
	fVar1 = PED::_GET_PED_FACE_FEATURE(iParam0, 41611);
	if (fVar1 == 1f)
	{
		iVar0 = 2;
	}
	return iVar0;
}

int func_991(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	int iVar5;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1) || PED::IS_PED_INJURED(iParam1))
	{
		return 0;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
	fVar3 = func_187(iParam1, iParam0, 1, 1);
	if (bParam2)
	{
		fVar4 = func_190(iParam0);
		if (fVar4 >= 0.25f)
		{
			return 0;
		}
		func_1091(iParam0, 0.25f, iParam1);
		return 1;
	}
	else if (!PED::IS_PED_FLEEING(iParam0))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar5);
		TASK::_TASK_SMART_FLEE_STYLE_COORD(0, vVar0, 3, 1048576, (100f - fVar3), -1, 0);
		TASK::CLOSE_SEQUENCE_TASK(iVar5);
		TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, iVar5, 1.5f, 1.5f);
		TASK::CLEAR_SEQUENCE_TASK(&iVar5);
	}
	FLOCK::_0xFF1E339CE40EAAAF(iParam0, 0);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 48, false);
	POPULATION::_0xF74E134F40192884(iParam0, 1);
	return 1;
}

int func_992()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_993(int iParam0, int iParam1)
{
	ATTRIBUTE::_0xD962F8579D702DB5();
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return 0;
	}
	if (PED::_0x7FC84E85D98F063D(Global_35))
	{
		return 0;
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 176, true);
	TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
	TASK::TASK_REVIVE_TARGET(Global_35, iParam0, iParam1);
	func_432(iParam1, 1, 0, -142743235, 0);
	return 1;
}

void func_994(int iParam0)
{
	Global_1900372->f_2 = iParam0;
}

void func_995(int iParam0)
{
	Global_1900372->f_1 = iParam0;
}

void func_996(int iParam0)
{
	Global_1900372->f_5 = iParam0;
}

int func_997(int iParam0)
{
	return 20;
}

void func_998(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	fParam1 = (fParam1 * 0.01f);
	iVar1 = ENTITY::GET_ENTITY_HEALTH(iParam0);
	iVar2 = ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, 0);
	iVar0 = BUILTIN::FLOOR((fParam1 * IntToFloat(iVar2)));
	iVar3 = iVar0;
	if ((iVar1 + iVar0) > iVar2)
	{
		iVar3 = (iVar2 - iVar1);
	}
	iVar4 = (iVar1 + iVar3);
	ENTITY::_SET_ENTITY_HEALTH(iParam0, iVar4, 0);
}

void func_999(int iParam0, int iParam1, int iParam2)
{
	func_888(iParam0, iParam1, (func_578(iParam0, iParam1) + iParam2));
}

void func_1000(int iParam0, int iParam1, int iParam2)
{
	func_644(iParam0, iParam1, (func_643(iParam0, iParam1) + iParam2));
}

int func_1001(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 19;
			break;
		case 1:
			*uParam1 = 18;
			break;
		default:
			return 0;
	}
	return 1;
}

float func_1002(float fParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return (fParam0 * 0.033f);
		case 1:
			return (fParam0 * 2f);
		case 2:
			return (fParam0 * 120f);
		case 3:
			return (fParam0 * 2880f);
		default:
			break;
	}
	return fParam0;
}

void func_1003(int iParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (func_1001(iParam1, &uVar0))
	{
		ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iParam0, uVar0, uParam2, 0);
	}
}

void func_1004(int iParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (func_641(iParam1, &uVar0))
	{
		ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iParam0, uVar0, uParam2, 0);
	}
}

void func_1005(int iParam0)
{
	if (func_1094(iParam0))
	{
		GRAPHICS::ANIMPOSTFX_PLAY("POSTFX_CONSUMABLE_STAMINA_FORT");
		return;
	}
	if (func_726(iParam0))
	{
		GRAPHICS::ANIMPOSTFX_PLAY("POSTFX_CONSUMABLE_STAMINA");
		return;
	}
}

int func_1006(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		case -1889597427:
			return 0;
		case -1884748965:
			return 32;
		case -1586649372:
			return 33;
		case -1506259487:
			return 5;
		case -1505978566:
			return 22;
		case -1489346253:
			return 38;
		case -1364808185:
			return 19;
		case -1292426046:
			return 8;
		case -1197751823:
			return 20;
		case -1176744536:
			return 24;
		case -1130865351:
			return 31;
		case -1130352927:
			return 1;
		case -893163968:
			return 17;
		case -735900586:
			return 28;
		case -676503695:
			return 6;
		case -450913544:
			return 18;
		case -426430150:
			return 29;
		case -358215195:
			return 39;
		case -338487716:
			return 11;
		case -207860920:
			return 26;
		case 99217379:
			return 27;
		case 304805134:
			return 21;
		case 383349088:
			return 7;
		case 389988485:
			return 2;
		case 673166414:
			return 25;
		case 788010710:
			return 34;
		case 1108822547:
			return 10;
		case 1145151482:
			return 23;
		case 1250092473:
			return 16;
		case 1367443060:
			return 4;
		case 1422688607:
			return 9;
		case 1600962399:
			return 13;
		case 1672288269:
			return 15;
		case 1742327865:
			return 12;
		case 1780904876:
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

int func_1007(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1946804->f_57[iVar0 /*11*/])->f_8 == iParam0)
		{
			return func_1095(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_1008(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_1096();
	if (iParam2 == 39)
	{
		Var0 = { func_954(iParam0, 1, 0) };
		iParam2 = func_1006(func_1007(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return 0;
	}
	if (func_431(iParam0, 866047851) && func_1097(&(Global_1946804->f_1378)) >= 2)
	{
		return 0;
	}
	if ((func_1011(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2 /*11*/])
	{
		func_1098(func_1095(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1099(iParam2);
	func_1100(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && (Global_1946804->f_57[iParam2 /*11*/])->f_1 > 1)
	{
		func_1101(Global_1946804->f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_1101(Global_1946804->f_1497.f_1[iParam2 /*3*/], 4, 6);
	}
	func_1102(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = (Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2 /*3*/] = iParam0;
	(Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1 = func_1103(iParam0, iParam2, iParam1, func_2() != -1);
	if (bParam4)
	{
		func_1104(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1104(&(Global_1946804->f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804->f_2589)
		{
			if (&Global_1946804->f_2589.f_2[iVar6 /*2*/] >= 0 && &Global_1946804->f_2589.f_2[iVar6 /*2*/] < 39)
			{
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6 /*2*/] /*2*/] = 0;
				(Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6 /*2*/] /*2*/])->f_1 = 0;
				func_1105(func_1095(&(Global_1946804->f_2589.f_2[iVar6 /*2*/]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return 1;
}

void func_1009(bool bParam0, bool bParam1, bool bParam2)
{
	func_1106(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

void func_1010(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_1107(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1108(Var0);
}

bool func_1011(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_1012()
{
	func_1109(&(Global_1946804->f_2776));
	func_1110(32768);
	func_1105(1108822547, 8, 6);
}

int func_1013(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_1006(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/] || &Global_1946804->f_1378.f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_1014(int iParam0)
{
	struct<4> Var0;

	if (func_1111(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1112(Var0);
}

void func_1015(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;

	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1112(Var0);
}

void func_1016()
{
	var uVar0;
	struct<4> Var30;

	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	uVar0 = 29;
	func_1113(Global_35, &uVar0);
	Var30 = { func_330(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_1114(0);
	func_1115(7);
	func_1116(-1623728698 /* GXTEntry: "Bandana" */, 1, 1, 0);
	if (func_1117() == 1160113249)
	{
		func_1116(-763730846 /* GXTEntry: "John\'s Classic Hat" */, 1, 1, 1);
		func_1116(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	func_1118(Global_35, &uVar0);
}

void func_1017(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_1088(iParam0))
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

int func_1018(int iParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_1019()
{
	return Global_40.f_11095.f_35;
}

void func_1020(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_1119(bParam1);
	}
}

void func_1021(int iParam0)
{
	COMPAPP::_0x74BCCEB233AD95B2(-156028329, iParam0);
}

char* func_1022(int iParam0)
{
	if (iParam0 <= -320)
	{
		return "HONOR_BAD_8";
	}
	else if (iParam0 <= -280)
	{
		return "HONOR_BAD_7";
	}
	else if (iParam0 <= -240)
	{
		return "HONOR_BAD_6";
	}
	else if (iParam0 <= -200)
	{
		return "HONOR_BAD_5";
	}
	else if (iParam0 <= -160)
	{
		return "HONOR_BAD_4";
	}
	else if (iParam0 <= -120)
	{
		return "HONOR_BAD_3";
	}
	else if (iParam0 <= -80)
	{
		return "HONOR_BAD_2";
	}
	else if (iParam0 < 0)
	{
		return "HONOR_BAD_1";
	}
	else if (iParam0 <= 40)
	{
		return "HONOR_GOOD_1";
	}
	else if (iParam0 >= 320)
	{
		return "HONOR_GOOD_8";
	}
	else if (iParam0 >= 280)
	{
		return "HONOR_GOOD_7";
	}
	else if (iParam0 >= 240)
	{
		return "HONOR_GOOD_6";
	}
	else if (iParam0 >= 200)
	{
		return "HONOR_GOOD_5";
	}
	else if (iParam0 >= 160)
	{
		return "HONOR_GOOD_4";
	}
	else if (iParam0 >= 120)
	{
		return "HONOR_GOOD_3";
	}
	else if (iParam0 >= 80)
	{
		return "HONOR_GOOD_2";
	}
	return "HONOR_GOOD_1";
}

int func_1023(int iParam0)
{
	vector3 vVar0;

	if (!func_864(23, &vVar0))
	{
		return 0;
	}
	vVar0.f_2 = 1781729525;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar0.f_1), &vVar0))
	{
		vVar0.f_2 = -2103982008;
		*iParam0 = DATAFILE::_DATAFILE_GET_NUM_NODES(&vVar0);
		return 1;
	}
	return 0;
}

int func_1024(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	var uVar5;

	if (!func_864(23, &Var0))
	{
		return 0;
	}
	Var0.f_2 = 1781729525;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -57097983;
		Var0.f_3 = iParam0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 2027336698;
			DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
			*iParam1 = uVar5;
			Var0.f_2 = 316053773;
			DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
			*iParam2 = uVar5;
			return 1;
		}
	}
	return 0;
}

int func_1025(int iParam0)
{
	return iParam0;
}

int func_1026()
{
	int iVar0;

	iVar0 = func_825();
	switch (iVar0)
	{
		case 120:
		case 160:
		case 200:
			return -608161198;
		case 240:
		case 280:
		case 320:
			return -2132502231;
		default:
			break;
	}
	return -1130204298;
}

int func_1027(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return 0;
	}
	return 1;
}

int func_1028(int iParam0, int iParam1, var uParam2)
{
	if (!func_1027(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			*iParam1 = -816321659;
			*uParam2 = -987026056;
			break;
		case 1:
			*iParam1 = -816321659;
			*uParam2 = -1822602787;
			break;
		case 2:
			*iParam1 = -816321659;
			*uParam2 = -1602329569;
			break;
		case 3:
			*iParam1 = -816321659;
			*uParam2 = 1881899898;
			break;
		case 4:
			*iParam1 = -816321659;
			*uParam2 = -1906196506;
			break;
		case 5:
			*iParam1 = -816321659;
			*uParam2 = -674995867;
			break;
		case 6:
			*iParam1 = -816321659;
			*uParam2 = -734156617;
			break;
		case 7:
			*iParam1 = -816321659;
			*uParam2 = 261758426;
			break;
		case 8:
			*iParam1 = -816321659;
			*uParam2 = 1545586131;
			break;
		case 9:
			*iParam1 = -816321659;
			*uParam2 = -489125522;
			break;
		case 10:
			*iParam1 = -816321659;
			*uParam2 = 1190367681;
			break;
		case 11:
			*iParam1 = -816321659;
			*uParam2 = -1179367301;
			break;
		case 12:
			*iParam1 = -816321659;
			*uParam2 = 1154513253;
			break;
		case 13:
			*iParam1 = -816321659;
			*uParam2 = -1825640214;
			break;
		case 14:
			*iParam1 = -816321659;
			*uParam2 = 1209829059;
			break;
		case 15:
			*iParam1 = -816321659;
			*uParam2 = -1713230487;
			break;
		case 16:
			*iParam1 = -816321659;
			*uParam2 = 2092309893;
			break;
		default:
			return 0;
	}
	return 1;
}

int func_1029(int iParam0, var uParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return 0;
	}
	if (!func_284(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, uParam1, &Var0))
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

bool func_1030(int iParam0, int iParam1)
{
	if (!func_588(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15614[iParam0] && iParam1) != 0;
}

bool func_1031(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_1032(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/] && iParam1) != 0;
}

int func_1033(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

bool func_1034(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_1035(int iParam0)
{
	switch (iParam0)
	{
		case -1791518714:
			return 1;
		case -2087881550:
			return 2;
		case 1908068621:
			return 4;
		case 1611247019:
			return 8;
		case 1319635688:
			return 16;
		default:
			break;
	}
	return 0;
}

void func_1036(var uParam0)
{
	Global_40.f_12018.f_43 = (Global_40.f_12018.f_43 || uParam0);
}

void func_1037(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1038(int iParam0)
{
	if (func_2() != -1)
	{
		return 0;
	}
	if (!func_847(iParam0))
	{
		return 0;
	}
	return func_1120(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

int func_1039(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_864(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_INT(&uVar5, &Var0);
	return uVar5;
}

char* func_1040(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	switch (iParam1)
	{
		case -2076669067:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_CC_COMPLETE";
			}
			else if (func_1121() >= 12)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_1122(), 12);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_1123(), 12);
			}
			break;
		case -440187297:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_DB_COMPLETE";
			}
			else if (func_1124() >= 30)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_POSTED_OBJ", func_1125(), 30);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_FOUND_OBJ", func_1124(), 30);
			}
			break;
		case -1531394072:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_EX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_EX_ITEMS_COLLECTED_OBJ", sParam4, sParam5);
			}
			break;
		case 1995362678:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_LF_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_1126(), 13);
			}
			break;
		case 2103522376:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_RC_COMPLETE";
			}
			else if (func_1127() >= 10)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_POSTED_OBJ", func_1128(), 10);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_FOUND_OBJ", func_1127(), 10);
			}
			break;
		case 678508515:
			if (iParam2 == 3)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 4)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_READ_VACATION");
			}
			else if (iParam2 == 5)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_ON_VACATION");
			}
			else if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_RETURN_POST_OFFICE";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_TX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_1039(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

int func_1041(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -2076669067)
	{
		if (iParam1 == 38816757)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, 578982838))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, 578982838);
			}
		}
	}
	else if (iParam2 == -440187297)
	{
		if (iParam1 == -1223580455)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, 349797279))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, 349797279);
			}
		}
	}
	else if (iParam2 == 2103522376)
	{
		if (iParam1 == -170865073)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, 1974744712))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, 1974744712);
			}
		}
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iParam1);
	}
	return 1;
}

int func_1042(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return 1;
}

int func_1043(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, 0, 0);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, 1);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::_CREATE_VAR_STRING(2, sParam3));
	return 1;
}

int func_1044(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_1129(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_733(iVar2, 1, 0) || func_1131(func_1130(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1132(func_1129(iVar0))), func_1132(func_1129(iVar0)), bVar1, 1, 0);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1124() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1133(iVar0)), func_1133(iVar0), bVar1, 1, 0);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1125() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1133(iVar0)), func_1133(iVar0), bVar1, 1, 0);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1133(iVar0)), func_1133(iVar0), bVar1, 1, 0);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_858(iParam3, func_1134(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_855(iVar2) - iParam7) >= func_1039(iParam3, func_1135(iVar0));
				}
				else
				{
					bVar1 = func_855(iVar2) >= func_1039(iParam3, func_1135(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_855(iVar2) + iParam7) >= func_1039(iParam3, func_1135(iVar0));
			}
			else
			{
				bVar1 = func_855(iVar2) >= func_1039(iParam3, func_1135(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1136(iVar2)), func_1136(iVar2), bVar1, 1, 0);
		}
		if (iParam2 == 1995362678)
		{
			if (func_799(COLLECTION::_0x126CBEBBA46693CF(iVar0, 1995362678, 0)))
			{
				bVar1 = true;
			}
			else if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1137(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0))), func_1137(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0)), bVar1, 1, 0);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1127() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1138(iVar0)), func_1138(iVar0), bVar1, 1, 0);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1128() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1138(iVar0)), func_1138(iVar0), bVar1, 1, 0);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1138(iVar0)), func_1138(iVar0), bVar1, 1, 0);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_858(iParam3, func_1134(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_855(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1139(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1139(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1140(iVar2)), func_1140(iVar2), bVar1, 1, 0);
		}
		iVar0++;
	}
	return 1;
}

int func_1045(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;

	bVar0 = false;
	if (iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == -2076669067)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_CC_ITEMS_DELIVERED"), "COL_CC_ITEMS_DELIVERED", bVar0, 1, 0);
	}
	if (iParam2 == -1531394072)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", bVar0, 1, 0);
	}
	if (iParam2 == 1995362678)
	{
		if (func_1126() >= 13)
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_LF_ITEMS_DELIVERED"), "COL_LF_ITEMS_DELIVERED", bVar0, 1, 0);
	}
	if (((((((iParam3 == 7 || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 0) || iParam3 == 1) || iParam3 == 2) || iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == 678508515)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_TX_CARCASSES_MAILED"), "COL_TX_CARCASSES_MAILED", bVar0, 1, 0);
	}
	return 1;
}

int func_1046(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_269(func_268(0)) && ((func_167(0) == 1 || func_167(0) == 8) || func_167(0) == 6))
	{
		iParam3 = 7;
	}
	if ((iParam2 == -440187297 || iParam2 == 1995362678) || iParam2 == 2103522376)
	{
		if (iParam3 == 7)
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, iParam1, 1, "");
		}
	}
	else if (iParam2 == 678508515)
	{
		if (iParam3 == 7)
		{
			if (bParam4)
			{
			}
			else
			{
				UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, iParam1, 1, "");
			}
		}
	}
	return 1;
}

int func_1047(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	switch (iParam0)
	{
		case -949689219:
			if (iParam1 == -1866642239)
			{
				iVar0 = 444160793; /* GXTEntry: "Perfect Squirrel Carcass" */
			}
			else if (iParam1 == 444160793)
			{
				iVar0 = -1866642239; /* GXTEntry: "Perfect Rabbit Carcass" */
			}
			break;
		case -1248968496:
			if (iParam1 == -1969404854)
			{
				iVar0 = 1761263432; /* GXTEntry: "Perfect Rat Carcass" */
				iVar1 = -843795569; /* GXTEntry: "Perfect Woodpecker Carcass" */
			}
			else if (iParam1 == 1761263432)
			{
				iVar0 = -1969404854; /* GXTEntry: "Perfect Cardinal Carcass" */
				iVar1 = -843795569; /* GXTEntry: "Perfect Woodpecker Carcass" */
			}
			else if (iParam1 == -843795569)
			{
				iVar0 = -1969404854; /* GXTEntry: "Perfect Cardinal Carcass" */
				iVar1 = 1761263432; /* GXTEntry: "Perfect Rat Carcass" */
			}
			break;
		case 1706369307:
			if (iParam1 == -832850511)
			{
				iVar0 = -935543049; /* GXTEntry: "Perfect Opossum Carcass" */
				iVar1 = -1464585113; /* GXTEntry: "Perfect Oriole Carcass" */
				iVar2 = -1290897778; /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (iParam1 == -935543049)
			{
				iVar0 = -832850511; /* GXTEntry: "Perfect Chipmunk Carcass" */
				iVar1 = -1464585113; /* GXTEntry: "Perfect Oriole Carcass" */
				iVar2 = -1290897778; /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (iParam1 == -1464585113)
			{
				iVar0 = -832850511; /* GXTEntry: "Perfect Chipmunk Carcass" */
				iVar1 = -935543049; /* GXTEntry: "Perfect Opossum Carcass" */
				iVar2 = -1290897778; /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (iParam1 == -1290897778)
			{
				iVar0 = -832850511; /* GXTEntry: "Perfect Chipmunk Carcass" */
				iVar1 = -935543049; /* GXTEntry: "Perfect Opossum Carcass" */
				iVar2 = -1464585113; /* GXTEntry: "Perfect Oriole Carcass" */
			}
			break;
		case 1520110311:
			if (iParam1 == -100913452)
			{
				iVar0 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				iVar1 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				iVar2 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
				iVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (iParam1 == 313332607)
			{
				iVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				iVar1 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				iVar2 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
				iVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (iParam1 == -124539232)
			{
				iVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				iVar1 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				iVar2 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
				iVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (iParam1 == 102446365)
			{
				iVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				iVar1 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				iVar2 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				iVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (iParam1 == -1882344824)
			{
				iVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				iVar1 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				iVar2 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				iVar3 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
			}
			break;
		case -1992824800:
			if (iParam1 == 905173572)
			{
				iVar0 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				iVar1 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				iVar2 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
				iVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (iParam1 == 1432949803)
			{
				iVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				iVar1 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				iVar2 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
				iVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (iParam1 == -983831788)
			{
				iVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				iVar1 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				iVar2 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
				iVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (iParam1 == 59384454)
			{
				iVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				iVar1 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				iVar2 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				iVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (iParam1 == 924882045)
			{
				iVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				iVar1 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				iVar2 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				iVar3 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
			}
			break;
	}
	if (iParam0 == -949689219)
	{
		if (bParam3)
		{
			if (func_1139(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1139(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1139(iVar0))
		{
			*iParam2++;
		}
		if (func_1139(iVar0))
		{
			return 1;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1139(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1139(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1139(iVar0))
		{
			*iParam2++;
		}
		if (func_1139(iVar1))
		{
			*iParam2++;
		}
		if (func_1139(iVar0) && func_1139(iVar1))
		{
			return 1;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1139(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1139(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1139(iVar0))
		{
			*iParam2++;
		}
		if (func_1139(iVar1))
		{
			*iParam2++;
		}
		if (func_1139(iVar2))
		{
			*iParam2++;
		}
		if ((func_1139(iVar0) && func_1139(iVar1)) && func_1139(iVar2))
		{
			return 1;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1139(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1139(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1139(iVar0))
		{
			*iParam2++;
		}
		if (func_1139(iVar1))
		{
			*iParam2++;
		}
		if (func_1139(iVar2))
		{
			*iParam2++;
		}
		if (func_1139(iVar3))
		{
			*iParam2++;
		}
		if (((func_1139(iVar0) && func_1139(iVar1)) && func_1139(iVar2)) && func_1139(iVar3))
		{
			return 1;
		}
	}
	return 0;
}

void func_1048(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_94() && (func_1038(38) || func_850(38)))
			{
				sVar1 = "COL_CC_INTRO";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
			}
			else
			{
				sVar1 = "COL_CC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
			}
			iVar6 = 38816757; /* GXTEntry: "Smoking and Other Hobbies" */
			break;
		case 39:
			sVar0 = "COL_DB_TITLE";
			sVar3 = "COL_DB_FOUND";
			iVar7 = -440187297;
			if (func_94() && (func_1038(39) || func_850(39)))
			{
				sVar1 = "COL_DB_INTRO";
				iVar4 = 1162303770; /* GXTEntry: "Deborah MacGuiness" */
			}
			else
			{
				sVar1 = "COL_DB_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
			}
			iVar6 = -1223580455; /* GXTEntry: "A Test of Faith" */
			break;
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			sVar0 = "COL_EX_TITLE";
			sVar3 = "COL_EX_ITEMS_COLLECTED";
			sVar1 = "COL_EX_INTRO";
			iVar7 = -1531394072;
			iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = 911890963; /* GXTEntry: "Duchesses and Other Animals" */
			break;
		case 41:
			sVar0 = "COL_LF_TITLE";
			sVar3 = "COL_LF_CAUGHT";
			sVar1 = "COL_LF_INTRO";
			iVar7 = 1995362678;
			iVar4 = -273196610; /* GXTEntry: "Jeremy Gill" */
			iVar6 = -1666208710; /* GXTEntry: "A Fisher of Fish" */
			break;
		case 49:
			sVar0 = "COL_RC_TITLE";
			sVar3 = "COL_RC_FOUND";
			iVar7 = 2103522376;
			if (func_94() && (func_1038(49) || func_850(49)))
			{
				sVar1 = "COL_RC_INTRO";
				iVar4 = -781551276; /* GXTEntry: "Francis Sinclair" */
			}
			else
			{
				sVar1 = "COL_RC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
			iVar6 = -170865073; /* GXTEntry: "Geology for Beginners" */
			break;
		case 51:
			sVar0 = "COL_TX_TITLE";
			sVar3 = "COL_TX_CARCASS_COLLECTED";
			sVar1 = "COL_TX_INTRO";
			iVar7 = 678508515;
			iVar4 = 1986498931; /* GXTEntry: "Ms. L Hobbs" */
			iVar6 = -1424865411; /* GXTEntry: "A Better World, A New Friend" */
			break;
	}
	if (iParam5 == 2)
	{
		sVar0 = "MISSION_COMPLETE";
		iVar4 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar5 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar5 = MISC::GET_HASH_KEY("toast_log_blips");
		sVar1 = "COL_ALL_LOG_UPDATED";
	}
	sVar2 = "COL_CTX_PLAYER_LOG";
	if (iVar7 == -2076669067)
	{
		if (func_94() && (func_1038(38) || func_850(38)))
		{
			iVar6 = 38816757; /* GXTEntry: "Smoking and Other Hobbies" */
		}
		else
		{
			iVar6 = 578982838; /* GXTEntry: "A New Hobby" */
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 0)
		{
			iVar5 = iParam1;
			iVar4 = iParam2;
		}
		if (iParam5 == 2)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			func_1141(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_1141(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_812(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, func_1132(func_1142(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_1141(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_1141(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_94() && (func_1038(39) || func_850(39)))
		{
			iVar6 = -1223580455; /* GXTEntry: "A Test of Faith" */
		}
		else
		{
			iVar6 = 349797279; /* GXTEntry: "Digging up the Past" */
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_1141(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1141(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_94() && (func_1038(49) || func_850(49)))
		{
			iVar6 = -170865073; /* GXTEntry: "Geology for Beginners" */
		}
		else
		{
			iVar6 = 1974744712; /* GXTEntry: "Rock Carvings" */
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_1141(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1141(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_1141(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1141(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

bool func_1049(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_1050(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1391860027;
		case 3:
			return -2049683567;
		case 4:
			return -1639750081;
		case 6:
			return -543306319;
		case 7:
			return 93160283;
		case 8:
			return -1838611891;
		case 1:
			return 1619762084;
		case 2:
			return -2104053099;
		case 9:
			return -1431073983;
		case 10:
			return 887432345;
		case 11:
			return -238320361;
		case 26:
			return -1433937760;
		case 27:
			return -681691620;
		case 28:
			return -706234936;
		case 29:
			return -282099500;
		case 30:
			return 1450105278;
		case 31:
			return -732027686;
		case 5:
			return 379756162;
		case 15:
			return 2128397741;
		case 17:
			return -924263120;
		case 33:
			return 1915478031;
		case 12:
			return -1775364220;
		case 13:
			return -1504845897;
		case 14:
			return -1227686818;
		case 18:
			return 1442571063;
		case 19:
			return -997221403;
		case 22:
			return 285759500;
		case 20:
			return 1489861748;
		case 32:
			return -2132712788;
		case 34:
			return 1427539511;
		case 23:
			return -967055532;
		case 24:
			return 662159626;
		case 25:
			return 1743191502;
		case 21:
			return -830712656;
		default:
			break;
	}
	return 0;
}

struct<4> func_1051(int iParam0, int iParam1)
{
	struct<5> Var0;

	Var0 = { func_871(iParam0) };
	return func_872(iParam0, iParam1, Var0, Var0.f_4);
}

int func_1052(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<12> Var0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_1018(iParam1))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_1143(iParam0, *uParam2, &Var0, 0))
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
	if (!INVENTORY::_0x3E4E811480B3AE79(iParam0, uParam2, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_1053(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
}

void func_1054(int iParam0)
{
	if (!func_801(iParam0))
	{
		COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	}
}

void func_1055(int iParam0)
{
	COLLECTION::_0x398FAB9C96A81924(iParam0, 1);
}

int func_1056(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

float func_1057()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_1058(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1059(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_1060(var uParam0)
{
	return func_884(*uParam0, 2);
}

bool func_1061(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_1062()
{
	return Global_1109400->f_244;
}

void func_1063(int iParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	var uVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (!func_641(iParam1, &iVar0))
	{
		return;
	}
	sVar1 = func_1144(iParam1);
	uVar2 = func_1145(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		iVar3 = ATTRIBUTE::_GET_ATTRIBUTE_CORE_VALUE(iParam0, iVar0);
		PED::_0x437C08DB4FEBE2BD(iParam0, sVar1, BUILTIN::TO_FLOAT(iVar3), -1);
		if (iVar3 <= 20)
		{
			PED::_0xCB9401F918CB0F75(iParam0, uVar2, 1, -1);
		}
		else
		{
			PED::_0xA6F67BEC53379A32(iParam0, uVar2);
		}
	}
}

float func_1064(float fParam0, float fParam1, float fParam2)
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

var func_1065(int iParam0)
{
	var uVar0;

	uVar0 = &Global_1900383->f_393.f_8[iParam0];
	return uVar0;
}

int func_1066()
{
	return Global_40.f_4283;
}

float func_1067()
{
	int iVar0;

	iVar0 = func_170();
	switch (iVar0)
	{
		case 79:
			return 50f;
		case 58:
			return 50f;
		case 71:
			return 50f;
		case 43:
			return 50f;
		case 4:
			return 50f;
		case 9:
			return 50f;
		case 22:
			return 120f;
		case 98:
			return 60f;
		case 37:
			return 120f;
	}
	return 25f;
}

bool func_1068(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (bParam7)
	{
		return BUILTIN::VDIST2(vParam0, vParam3) <= (fParam6 * fParam6);
	}
	return func_1146(vParam0, vParam3) <= (fParam6 * fParam6);
}

int func_1069(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_666(0);
	*uParam1 = { func_331(iParam0, func_905(0), iParam3, 0) };
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

int func_1070(int iParam0)
{
	struct<2> Var0;

	if (!func_284(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_1071(int iParam0, bool bParam1)
{
	if (func_1147(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_666(bParam1), iParam0, 0);
}

int func_1072(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
		case 1:
			return 1704602624;
		case 2:
			return 1214181762;
		case 3:
			return -430578371;
		case 4:
			return -730381952;
		case 5:
			return -253503777;
		case 6:
			return 1352275534;
		case 7:
			return 1666399168;
		case 8:
			return -1911121386;
		case 9:
			return 1756656691;
		case 10:
			return -1774867076;
		case 11:
			return -421952220;
		case 12:
			return -1087003323;
		case 13:
			return 1231618917;
		case 14:
			return -1183777174;
		case 15:
			return -841767082;
		case 16:
			return 1043717005;
		case 17:
			return 142663787;
		case 18:
			return 1718143051;
		case 19:
			return -6605744;
		case 20:
			return 953047564;
		case 21:
			return 769706682;
		case 22:
			return 1635590003;
		case 23:
			return -2047978619;
		case 24:
			return -586319254;
		case 25:
			return 249896112;
		case 26:
			return -1060513333;
		case 27:
			return 1317351007;
		case 28:
			return -500478573;
		case 29:
			return -806573802;
		case 30:
			return -1109949204;
		case 31:
			return -740156546;
		case 32:
			return -684532710;
		case 33:
			return 1158805436;
		case 34:
			return -559473670;
		case 35:
			return -797147251;
		case 36:
			return -382216265;
		case 37:
			return 1419177114;
		case 38:
			return 1704297235;
		case 39:
			return -1139016418;
		case 40:
			return 897705377;
		case 41:
			return 17961769;
		case 42:
			return 205582207;
		case 43:
			return 900740963;
		case 44:
			return -1369589344;
		case 45:
			return -1695823795;
		case 46:
			return -41453074;
		case 47:
			return 539767227;
		case 48:
			return 1210490314;
		case 49:
			return -399684751;
		case 50:
			return 2138893455;
		case 51:
			return -1617010487;
		case 52:
			return -832377028;
		case 53:
			return -428040245;
		case 54:
			return 1279288897;
		case 55:
			return -594897905;
		case 56:
			return -1360459240;
		case 57:
			return 1838428396;
		case 58:
			return -1467846997;
		case 59:
			return -490610263;
		case 60:
			return -1885413079;
		case 61:
			return 708884155;
		case 62:
			return -134459952;
		case 63:
			return -1912136700;
		case 64:
			return -1268031552;
		case 65:
			return 1177953227;
		case 66:
			return 2130805296;
		case 67:
			return 38093490;
		case 68:
			return -269153218;
		case 69:
			return -1995068011;
		case 70:
			return -164284834;
		case 71:
			return 1446463345;
		case 72:
			return 1501315823;
		case 73:
			return -750379482;
		case 74:
			return -929560937;
		case 75:
			return 608323241;
		case 76:
			return 1030796013;
		case 77:
			return 1915057434;
		case 78:
			return -1582276476;
		case 79:
			return 692059311;
		case 80:
			return 2062839241;
		case 81:
			return -1884531872;
		case 82:
			return -866434534;
		case 83:
			return -1252192421;
		case 84:
			return 1243288963;
		case 85:
			return -1953772189;
		case 86:
			return 754411745;
		case 87:
			return 545309006;
		case 88:
			return -1089810811;
		case 89:
			return 1957869400;
		case 90:
			return -241412332;
		case 91:
			return -1548010959;
		case 92:
			return 550150488;
		case 93:
			return 946565453;
		case 94:
			return 434443248;
		case 95:
			return -1709914938;
		case 96:
			return 366686112;
		case 97:
			return -1370063350;
		case 98:
			return 2126829550;
		case 99:
			return 226552910;
		case 100:
			return 721193431;
		case 101:
			return -315672460;
		case 102:
			return 623544501;
		case 103:
			return 259556714;
		case 104:
			return -2125361825;
		case 105:
			return 1078230356;
		case 106:
			return 1885364811;
		case 107:
			return 1630382737;
		case 108:
			return 1738245512;
		case 109:
			return 1540262216;
		case 110:
			return 1016871472;
		case 111:
			return 13829069;
		case 112:
			return 737051352;
		case 113:
			return 1734614610;
		case 114:
			return -208715295;
		case 115:
			return 1435062936;
		case 116:
			return 1483055553;
		case 117:
			return 380335002;
		case 118:
			return -1079385677;
		case 119:
			return 676610411;
		case 120:
			return 2145419552;
		case 121:
			return 657238733;
		case 122:
			return 1850579281;
		case 123:
			return -1923957384;
		case 124:
			return -1142828108;
		case 125:
			return -1400618531;
		case 126:
			return -1433857135;
		case 127:
			return 209987206;
		case 128:
			return 1686943047;
		case 129:
			return -59178517;
		case 130:
			return 2134884601;
		case 131:
			return 651707517;
		case 132:
			return -633788535;
		case 133:
			return 116394463;
		case 134:
			return -1196973875;
		case 135:
			return 801752086;
		case 136:
			return 184475332;
		case 137:
			return -1880922659;
		case 138:
			return -898138634;
		case 139:
			return -2107418444;
		case 140:
			return -679970099;
		case 141:
			return -1531392549;
		case 142:
			return 1612483376;
		case 143:
			return 463930900;
		case 144:
			return -632148238;
		case 145:
			return 55303249;
		case 146:
			return 2108322089;
		case 147:
			return -1358896714;
		case 148:
			return 74475632;
		case 149:
			return -28710953;
		case 150:
			return -1791599168;
		case 151:
			return 1605938169;
		case 152:
			return 1255242276;
		case 153:
			return 636467727;
		case 154:
			return -1567688525;
		case 155:
			return -77886679;
		case 156:
			return -1057900679;
		case 157:
			return -1960888134;
		case 158:
			return -1719717295;
		case 159:
			return -1779244911;
		case 160:
			return -670540863;
		case 161:
			return 223362311;
		case 162:
			return 1150824567;
		case 163:
			return 974471191;
		case 164:
			return 1989683968;
		case 165:
			return 254804477;
		case 166:
			return 192057609;
		case 167:
			return 1553957817;
		case 168:
			return 2099829015;
		case 169:
			return -840300007 /* GXTEntry: "Extremely durable, hand tooled Off-Hand Holster with elaborate rattlesnake and sk" +
    "ull decoration." */;
		case 170:
			return -1948423372;
		case 171:
			return 981083654;
		case 172:
			return 1283289876;
		case 173:
			return -606884489;
		case 174:
			return -100418572;
		case 175:
			return 663645231;
		case 176:
			return 1442217033;
		case 177:
			return 1410986244;
		case 178:
			return 847409839;
		case 179:
			return 923926911;
		case 180:
			return 109995826;
		case 181:
			return -747412737;
		case 182:
			return 1114341727;
		case 183:
			return -539456939;
		case 184:
			return 45887121;
		case 185:
			return 913271624;
		case 186:
			return -1652812715;
		case 187:
			return -1791365775;
		case 188:
			return -979299941;
		case 189:
			return 713062001;
		case 190:
			return -575045963;
		case 191:
			return 1852965262;
		case 192:
			return -1398836354;
		case 193:
			return -1829885298;
		case 194:
			return -1773850357;
		case 195:
			return -564258009;
		case 196:
			return 2016532685;
		case 197:
			return -1070563798;
		case 198:
			return -1619221343;
		case 199:
			return -345571691;
		case 200:
			return 544288390;
		case 201:
			return 159578294;
		case 202:
			return -76852849;
		case 203:
			return 1110295244;
		case 204:
			return 2104563477;
		case 205:
			return 1947827651;
		case 206:
			return -933072766;
		case 207:
			return 2104388648;
		case 208:
			return -1677140601;
		case 209:
			return -2133097881;
		case 210:
			return -826678792;
		case 211:
			return -513522325;
		case 212:
			return 1970588249;
		case 213:
			return -2080032591;
		case 214:
			return 1758847745;
		case 215:
			return 895010282;
		case 216:
			return 1786352060;
		case 217:
			return -833319691;
		case 218:
			return 1591329969;
		case 219:
			return 2123222014;
		case 220:
			return -1578397674;
		case 221:
			return 1473261684;
		case 222:
			return -241855024;
		case 223:
			return 12999093;
		case 224:
			return -6796437;
		case 225:
			return -268116367;
		case 226:
			return -636470867;
		case 227:
			return 1737668280;
		case 228:
			return 892807236;
		case 229:
			return -733247890;
		case 230:
			return 24047176;
		case 231:
			return -1561999014;
		case 232:
			return -2052774042;
		case 233:
			return -997150586;
		case 234:
			return -1189569496;
		case 235:
			return 46488141;
		case 236:
			return 1046566686;
		case 237:
			return 325139909;
		case 238:
			return -1585141069;
		case 239:
			return 802754820;
		case 240:
			return 1415981582;
		case 241:
			return -1886147520;
		case 242:
			return 654877947;
		case 243:
			return -415648720;
		case 244:
			return 1221327846;
		case 245:
			return 923162715;
		case 246:
			return 625423581;
		case 247:
			return 326668608;
		case 248:
			return 669530755;
		case 249:
			return 429759982;
		case 250:
			return -2111934838;
		case 251:
			return 1886178087;
		case 252:
			return 1587783573;
		case 253:
			return -279722001;
		case 254:
			return 1310070322;
		case 255:
			return 724026534;
		case 256:
			return 137387616;
		case 257:
			return -653439684;
		case 258:
			return 1376835592;
		case 259:
			return -1824203570;
		case 260:
			return -1654197998;
		case 261:
			return 798987653;
		case 262:
			return 976923323;
		case 263:
			return 1167442289;
		case 264:
			return 986998820;
		case 265:
			return -2119169513;
		case 266:
			return -2015960939;
		case 267:
			return -1287636759;
		case 268:
			return -706917073;
		case 269:
			return -2166805;
		case 270:
			return -1391602433;
		case 271:
			return 1782075221;
		case 272:
			return 1282544585;
		case 273:
			return 1732594027;
		case 274:
			return -1058817012;
		case 275:
			return 1090546265;
		case 276:
			return -1783120823;
		case 277:
			return -1535745896;
		case 278:
			return -2086922122;
		case 279:
			return -1675198649;
		case 280:
			return 1189497682;
		case 281:
			return -1565675519;
		case 282:
			return -268973591;
		case 283:
			return 1039159916;
		case 284:
			return 1111816631;
		case 285:
			return 405591388;
		case 286:
			return 897456793;
		case 287:
			return 104187473;
		case 288:
			return 773808542;
		case 289:
			return -1120669954;
		case 290:
			return -1389278274;
		case 291:
			return 552979403;
		case 292:
			return -1571578784;
		case 293:
			return -708312114;
		case 294:
			return 688823508;
		case 295:
			return -1622147240;
		case 296:
			return 830292162;
		case 297:
			return 226276782;
		case 298:
			return -678416628;
		case 299:
			return -1098528034;
		case 300:
			return 316207340;
		case 301:
			return -1909200748;
		case 302:
			return -939652363;
		case 303:
			return joaat("SLOTID_PROGRESSION");
		case 304:
			return -375447933;
		case 305:
			return 537014919;
		case 306:
			return 1784584921;
		case 307:
			return 1084182731;
		case 308:
			return -1045471300;
		case 309:
			return 1617414719;
		case 310:
			return -787761753;
		case 311:
			return -490616606;
		case 312:
			return 1491346514;
		case 313:
			return -1311702610;
		case 314:
			return -904250715;
		case 315:
			return 1034665895;
		case 316:
			return -101524555;
		case 317:
			return 1419152594;
		case 318:
			return -451359317;
		case 319:
			return -1915385310;
		case 320:
			return 1315162488;
		case 321:
			return -361152079;
		case 322:
			return -2041626192;
		case 323:
			return -2077812539;
		case 324:
			return -1371514637;
		case 325:
			return 1730017037;
		case 326:
			return 892816668;
		case 327:
			return -1994943603;
		case 328:
			return 603133554;
		case 329:
			return -30160144;
		case 330:
			return -1248299493;
		case 331:
			return 727393558;
		case 332:
			return 755611221;
		case 333:
			return -170255458;
		case 334:
			return 1011151573;
		case 335:
			return 1122339631;
		case 336:
			return 454815308;
		case 337:
			return 990701735;
		case 338:
			return -246340825;
		case 339:
			return -1410671073;
		case 340:
			return 1547608292;
		case 341:
			return -714132970;
		case 342:
			return 732290690;
		case 343:
			return 971340545;
		case 344:
			return -234132662;
		case 345:
			return -2143057988;
		case 346:
			return -993947465;
		case 347:
			return -486552269;
		case 348:
			return -1156317860;
		case 349:
			return 1229625803;
		case 350:
			return -388596167;
		case 351:
			return -1204639465;
		case 352:
			return -1384685096;
		case 353:
			return -2026728113;
		case 354:
			return -1228057307;
		case 355:
			return 1835126290;
		case 356:
			return 1890833594;
		case 357:
			return -751549960;
		case 358:
			return -1682270750;
		case 359:
			return -1839865333;
		case 360:
			return -1990383629;
		case 361:
			return 1712094016;
		case 362:
			return 1532953697;
		case 363:
			return 1620318083;
		case 364:
			return -307230331;
		case 365:
			return -1034549620;
		case 366:
			return -1293064293;
		case 367:
			return -1540142553;
		case 368:
			return -1769886012;
		case 369:
			return -1983081126;
		case 370:
			return -1106117124;
		case 371:
			return -1873108338;
		case 372:
			return -2097543219;
		case 373:
			return 155413195;
		case 374:
			return -1162387149;
		case 375:
			return 1728382685 /* GXTEntry: "Right" */;
		case 376:
			return -649335959 /* GXTEntry: "Left" */;
		case 377:
			return -1876502240;
		case 378:
			return -2107032155;
		case 379:
			return 619103418;
		case 380:
			return 1355448197;
		case 381:
			return 1681762005;
		case 382:
			return 1026887814;
		case 383:
			return 354352628;
		case 384:
			return 1519366642;
		case 385:
			return -82757515;
		case 386:
			return 386306655;
		case 387:
			return 1243962119;
		case 388:
			return 756214903;
		case 389:
			return -718417579;
		case 390:
			return -1445516411;
		case 391:
			return -672392892;
		case 392:
			return 1465341584;
		case 393:
			return -427758369;
		case 394:
			return -735647142;
		case 395:
			return 1535838048;
		case 396:
			return -602272282;
		case 397:
			return 2051264661;
		case 398:
			return 487172188;
		case 399:
			return 282270687;
		case 400:
			return 1607708943;
		case 401:
			return 1686264939;
		case 402:
			return 314786149;
		case 403:
			return 1402841185;
		case 404:
			return 1099170772;
		case 405:
			return 2125676786;
		case 406:
			return -363896735;
		case 407:
			return -468790222;
		case 408:
			return -1779133048;
		case 409:
			return 1732537631;
		case 410:
			return 1755095401;
		case 411:
			return 835771095;
		case 412:
			return 1963317232;
		case 413:
			return 259627919;
		case 414:
			return 1299075397;
		case 415:
			return -1509094230;
		case 416:
			return 61132362;
		case 417:
			return 1549741908;
		case 418:
			return 288484254;
		case 419:
			return -1877032947;
		case 420:
			return -1395676456;
		case 421:
			return 1136146715;
		case 422:
			return 468034421;
		case 423:
			return 1079459546;
		case 424:
			return -140369351;
		case 425:
			return 1822341990;
		case 426:
			return 1219701681;
		case 427:
			return 1601295268;
		case 428:
			return -1692460667;
		case 429:
			return 1471419228;
		case 430:
			return 907446160;
		case 431:
			return -1126482585;
		case 432:
			return 1911050315;
		case 433:
			return -1343525599;
		case 434:
			return 1261891225;
		case 435:
			return 763162704;
		case 436:
			return 1335861197;
		case 437:
			return 526744654;
		case 438:
			return -1177461517;
		case 439:
			return -241638635;
		case 440:
			return 1024262875;
		case 441:
			return 853355463;
		case 442:
			return -337288221;
		case 443:
			return 361381308;
		case 444:
			return -1264898804;
		case 445:
			return -585289073;
		case 446:
			return 1423542233;
		case 447:
			return -948489286;
		case 448:
			return 2063859257;
		case 449:
			return -1652627327;
		case 450:
			return -1959697839;
		case 451:
			return -1532267859;
		case 452:
			return -1410062763;
		case 453:
			return -901428716;
		case 454:
			return -1628873469;
		case 455:
			return 144855571;
		case 456:
			return -617589883;
		case 457:
			return -1306457086;
		case 458:
			return 1713542477;
		case 459:
			return -305542365;
		case 460:
			return 1985390213;
		case 461:
			return -2145069367;
		case 462:
			return -1674390752;
		case 463:
			return -2117214398;
		case 464:
			return 1880805647;
		case 465:
			return -62390436;
		case 466:
			return 1815288415;
		case 467:
			return 196214097;
		case 468:
			return -201958220;
		case 469:
			return 1400281261;
		case 470:
			return 1601515402;
		case 471:
			return -940704970;
		case 472:
			return -548371721;
		case 473:
			return -1022384613;
		case 474:
			return -357406394;
		case 475:
			return 1077068189;
		case 476:
			return -782241404;
		case 477:
			return 1669853467;
		case 478:
			return 1592019450;
		case 479:
			return 635273153;
		case 480:
			return -1559225678;
		case 481:
			return -266425508;
		case 482:
			return 1117400455;
		case 483:
			return 454332195;
		case 484:
			return -1328061889;
		case 485:
			return 561650932;
		case 486:
			return 256105670;
		case 487:
			return 1976779618;
		case 488:
			return -269095126;
		case 489:
			return 2145617267;
		case 490:
			return 1150213537;
		case 491:
			return 1598825281;
		case 492:
			return -712527121;
		case 493:
			return 1308553072;
		case 494:
			return 852866398;
		case 495:
			return -1794417972;
		case 496:
			return 293062146;
		case 497:
			return 95360094;
		case 498:
			return 807631773;
		case 499:
			return 1603958275;
		case 500:
			return 860052020;
		case 501:
			return -1885979781;
		case 502:
			return 746147970;
		case 503:
			return 666663006;
		case 504:
			return -2096186453;
		case 505:
			return 859409444;
		case 506:
			return -671427187;
		case 507:
			return 100192478;
		case 508:
			return 307812616;
		case 509:
			return 1670843243;
		case 510:
			return 899615863;
		case 511:
			return -298901850;
		case 512:
			return 1379186917;
		case 513:
			return -817206030;
		case 514:
			return -1150323212;
		case 515:
			return -247466821;
		case 516:
			return 427124242;
		case 517:
			return 855418120;
		case 518:
			return -777015093;
		case 519:
			return -722462870;
		case 520:
			return -937454324;
		case 521:
			return -339438116;
		case 522:
			return 2135639035;
		case 523:
			return 1254273765;
		case 524:
			return -792172668;
		case 525:
			return 1905987493;
		case 526:
			return 495693044;
		case 527:
			return -1693422950;
		case 528:
			return -205873076;
		case 529:
			return -2143114654;
		case 530:
			return -1420574021;
		case 531:
			return -1959250381;
		case 532:
			return -1088328663;
		case 533:
			return 513602003;
		case 534:
			return 359221401;
		case 535:
			return 1005272;
		case 536:
			return 1583044470;
		case 537:
			return 348853959;
		case 538:
			return 1045621973;
		case 539:
			return 1084576580;
		case 540:
			return 1651573695;
		case 541:
			return 1463321587;
		case 542:
			return -997505963;
		case 543:
			return -1649851713;
		case 544:
			return -386012962;
		case 545:
			return 1386101789;
		case 546:
			return 1227915917;
		case 547:
			return -218846335;
		case 548:
			return -352578118;
		case 549:
			return 1426626782;
		case 550:
			return -714081520;
		case 551:
			return 74547781;
		case 552:
			return 1271463052;
		case 553:
			return 1983140194;
		case 554:
			return 677262775;
		case 555:
			return -832337898;
		case 556:
			return -319249747;
		case 557:
			return -16955722;
		case 558:
			return -1360128126;
		case 559:
			return -1535425646;
		case 560:
			return -1063641743;
		case 561:
			return -1041133401;
		case 562:
			return 1380479304;
		case 563:
			return 600890828;
		case 564:
			return 733333190;
		case 565:
			return 1843035435;
		case 566:
			return -304127320;
		case 567:
			return 122470371;
		case 568:
			return 0;
		case 569:
			return -1591664384;
		case 570:
			return -673000374;
		case 571:
			return -1150938404;
		case 572:
			return -1756997214;
		case 573:
			return -813824107;
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

void func_1073(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1224226)
	{
		if (&Global_1224226->f_1[iVar0 /*9*/] == iParam0)
		{
			if ((Global_1224226->f_1[iVar0 /*9*/])->f_1 == iParam1)
			{
			}
			else
			{
				(Global_1224226->f_1[iVar0 /*9*/])->f_1 = iParam1;
			}
			return;
		}
		iVar0++;
	}
	func_1148(iParam0, iParam1);
}

int func_1074(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	struct<4> Var0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x22E590F108289A9D(func_666(bParam6), &uParam0, iParam4, &Var0))
	{
		return 0;
	}
	if (!func_670(Var0, uParam5, bParam6, 0))
	{
		return 0;
	}
	return 1;
}

int func_1075(int iParam0)
{
	int iVar0;

	if (!func_284(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_1070(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

int func_1076(int iParam0)
{
	switch (iParam0)
	{
		case joaat("cs_sistercalderon"):
		case joaat("cs_strsheriff_01"):
		case joaat("cs_mud2bigguy"):
		case joaat("cs_rainsfall"):
		case joaat("cs_penelopebraithwaite"):
		case joaat("cs_swampweirdosonny"):
		case joaat("cs_unidusterjail_01"):
		case joaat("cs_iangray"):
		case joaat("cs_tinyhermit"):
		case joaat("cs_timothydonahue"):
		case joaat("cs_princessisabeau"):
		case joaat("cs_leviticuscornwall"):
		case joaat("cs_didsbury"):
		case joaat("cs_featherstonchambers"):
		case joaat("cs_featsofstrength"):
		case joaat("cs_bandpianist"):
		case joaat("cs_escapeartistassistant"):
		case joaat("cs_garethbraithwaite"):
		case joaat("cs_creoleguy"):
		case joaat("cs_leighgray"):
		case joaat("cs_strawberryoutlaw_02"):
		case joaat("cs_gloria"):
		case joaat("cs_warvet"):
		case joaat("cs_jockgray"):
		case joaat("cs_davidgeddes"):
		case joaat("cs_guidomartelli"):
		case joaat("cs_duncangeddes"):
		case joaat("cs_dusterinformant_01"):
		case joaat("cs_pinkertongoon"):
		case joaat("cs_mickey"):
		case joaat("cs_twinbrother_02"):
		case joaat("cs_hestonjameson"):
		case joaat("cs_strdeputy_01"):
		case joaat("cs_abe"):
		case joaat("cs_oddfellowspinhead"):
		case joaat("cs_swampfreak"):
		case joaat("cs_mradler"):
		case joaat("cs_aberdeenpigfarmer"):
		case joaat("cs_hobartcrawley"):
		case joaat("cs_formyartbigwoman"):
		case joaat("cs_norrisforsythe"):
		case joaat("cs_jules"):
		case joaat("cs_tomdickens"):
		case joaat("cs_geraldbraithwaite"):
		case joaat("cs_paytah"):
		case joaat("cs_cancan_03"):
		case joaat("cs_grizzledjon"):
		case joaat("cs_wrobel"):
		case joaat("cs_meredith"):
		case joaat("cs_creepyoldlady"):
		case joaat("cs_nbxreceptionist_01"):
		case joaat("cs_nbxpolicechiefformal"):
		case joaat("cs_cornwalltrainconductor"):
		case joaat("cs_rhodeputy_01"):
		case joaat("cs_drmalcolmmacintosh"):
		case joaat("cs_leon"):
		case joaat("cs_sheriffowens"):
		case joaat("cs_sddoctor_01"):
		case joaat("cs_scottgray"):
		case joaat("cs_cancan_01"):
		case joaat("cs_creolecaptain"):
		case joaat("cs_brontesbutler"):
		case joaat("cs_janson"):
		case joaat("cs_forgivenwife_01"):
		case joaat("cs_tigerhandler"):
		case joaat("cs_frenchartist"):
		case joaat("cs_genstorymale"):
		case joaat("cs_clay"):
		case joaat("cs_strdeputy_02"):
		case joaat("cs_famousgunslinger_03"):
		case joaat("cs_bivcoachdriver"):
		case joaat("cs_braithwaitebutler"):
		case joaat("cs_cleet"):
		case joaat("cs_joe"):
		case joaat("cs_slavecatcher"):
		case joaat("cs_braithwaitemaid"):
		case joaat("cs_twingroupie_02"):
		case joaat("cs_mrsgeddes"):
		case joaat("cs_samaritan"):
		case joaat("cs_exconfedinformant"):
		case joaat("cs_frenchman_01"):
		case joaat("cs_bandsinger"):
		case joaat("cs_baptiste"):
		case joaat("cs_angusgeddes"):
		case joaat("cs_mysteriousstranger"):
		case joaat("cs_famousgunslinger_01"):
		case joaat("cs_bartholomewbraithwaite"):
		case joaat("cs_mixedracekid"):
		case joaat("cs_beatenupcaptain"):
		case joaat("cs_edgarross"):
		case joaat("cs_twingroupie_01"):
		case joaat("cs_mrsweathers"):
		case joaat("cs_jamie"):
		case joaat("cs_karensjohn_01"):
		case joaat("cs_thomasdown"):
		case joaat("cs_obediahhinton"):
		case joaat("cs_agnesdowd"):
		case joaat("cs_cavehermit"):
		case joaat("cs_brynntildon"):
		case joaat("cs_germanson"):
		case joaat("cs_brendacrawley"):
		case joaat("cs_colfavours"):
		case joaat("cs_rhodeskidnapvictim"):
		case joaat("cs_exconfedsleader_01"):
		case joaat("cs_cancan_04"):
		case joaat("cs_towncrier"):
		case joaat("cs_famousgunslinger_04"):
		case joaat("cs_dalemaroney"):
		case joaat("cs_angryhusband"):
		case joaat("cs_lillianpowell"):
		case joaat("cs_andershelgerson"):
		case joaat("cs_poorjoe"):
		case joaat("cs_braithwaiteservant"):
		case joaat("cs_brotherdorkins"):
		case joaat("cs_albertmason"):
		case joaat("cs_famousgunslinger_05"):
		case joaat("cs_balloonoperator"):
		case joaat("cs_albertcakeesquire"):
		case joaat("cs_mrsfellows"):
		case joaat("cs_cancanman_01"):
		case joaat("cs_poisonwellshaman"):
		case joaat("cs_cancan_02"):
		case joaat("cs_meredithsmother"):
		case joaat("cs_angel"):
		case joaat("cs_archerfordham"):
		case joaat("cs_disguisedduster_01"):
		case joaat("cs_chelonianmaster"):
		case joaat("cs_twinbrother_01"):
		case joaat("cs_germandaughter"):
		case joaat("cs_lemiuxassistant"):
		case joaat("cs_creoledoctor"):
		case joaat("cs_crackpotrobot"):
		case joaat("cs_bandbassist"):
		case joaat("cs_genstoryfemale"):
		case joaat("cs_marylinton"):
		case joaat("cs_valprayingman"):
		case joaat("cs_johnthebaptisingmadman"):
		case joaat("cs_mrs_calhoun"):
		case joaat("cs_theodorelevin"):
		case joaat("cs_nicholastimmins"):
		case joaat("cs_disguisedduster_03"):
		case joaat("cs_dinoboneslady"):
		case joaat("cs_beaugray"):
		case joaat("cs_strawberryoutlaw_01"):
		case joaat("cs_crackpotinventor"):
		case joaat("cs_hercule"):
		case joaat("cs_gavin"):
		case joaat("cs_levisimon"):
		case joaat("cs_londonderryson"):
		case joaat("cs_captainmonroe"):
		case joaat("cs_famousgunslinger_02"):
		case joaat("cs_mrslondonderry"):
		case joaat("cs_soothsayer"):
		case joaat("cs_tavishgray"):
		case joaat("cs_joebutler"):
		case joaat("cs_banddrummer"):
		case joaat("cs_lillymillet"):
		case joaat("cs_ansel_atherton"):
		case joaat("cs_rhodeputy_02"):
		case joaat("cs_edmundlowry"):
		case joaat("cs_disguisedduster_02"):
		case joaat("cs_magnifico"):
		case joaat("cs_artappraiser"):
		case joaat("cs_forgivenhusband_01"):
		case joaat("cs_reverendfortheringham"):
		case joaat("cs_daveycallender"):
		case joaat("cs_desmond"):
		case joaat("cs_adamgray"):
		case joaat("cs_jimcalloway"):
		case joaat("cs_sdsaloondrunk_01"):
		case joaat("cs_nbxdrunk"):
		case joaat("cs_germanmother"):
		case joaat("cs_ringmaster"):
		case joaat("cs_lucanapoli"):
		case joaat("cs_rhodesassistant"):
		case joaat("cs_aberdeensister"):
		case joaat("cs_nbxexecuted"):
		case joaat("cs_famousgunslinger_06"):
		case joaat("cs_johnweathers"):
		case joaat("cs_professorbell"):
		case joaat("cs_rhodessaloonbouncer"):
			return 1;
		default:
			break;
	}
	return 0;
}

void func_1077(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_1149(iParam0, iParam1))
		{
			if (func_1150(iParam0, iParam1))
			{
				if (func_1151(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_1152(iParam0);
				}
			}
			else
			{
				PED::_SET_PED_BODY_COMPONENT(iParam0, iParam1);
				PED::_UPDATE_PED_VARIATION(iParam0, 0, 1, 1, 1, 0);
			}
			PED::_0xE3144B932DFDFF65(iParam0, 0f, -1, 1, 1);
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 10, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 3);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 0);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 5);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 7);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 8);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 9);
		}
	}
}

void func_1078(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	PED::_SET_PED_COMPONENT_DISABLED(iParam0, -1725579161, 1);
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, 0, 1, 1, 1, 0);
	}
}

int func_1079(vector3 vParam0)
{
	if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vParam0)))
	{
		if (!INTERIOR::_IS_COLLISION_MARKED_OUTSIDE(vParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_1080(var uParam0, int iParam1, vector3 vParam2, int iParam5, float fParam6, int iParam7, float fParam8, float fParam9, float fParam10)
{
	if (!func_137(vParam2))
	{
		TASK::_0x2064B33F6E6B92D4(*uParam0, vParam2);
	}
	TASK::_0x9B6A58FDB0024F12(*uParam0, iParam7);
	switch (iParam5)
	{
		case 27:
			TASK::_0xB8E3486D107F4194(*uParam0, 90f);
			TASK::_0x827A58CED9D4D5B4(*uParam0, 180f);
			break;
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
			break;
		default:
			TASK::_0x827A58CED9D4D5B4(*uParam0, fParam6);
			if (fParam10 != 0f)
			{
				TASK::_0xB8E3486D107F4194(*uParam0, fParam10);
			}
			break;
	}
	switch (iParam5)
	{
		case 0:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 11:
		case 14:
		case 15:
		case 16:
		case 18:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
			TASK::_0xE9225354FB7437A7(*uParam0, 1);
			break;
	}
	switch (iParam5)
	{
		case 12:
		case 13:
			TASK::_0xFF8AFCA532B500D4(*uParam0, 16384);
			break;
	}
	switch (iParam5)
	{
		case 2:
		case 3:
			TASK::_0xFF8AFCA532B500D4(*uParam0, 5);
			break;
	}
	switch (iParam5)
	{
		case 35:
		case 43:
			TASK::_0x764DB5A48390FBAD(*uParam0, 1);
			break;
	}
	if (fParam8 == -0.01f)
	{
		switch (iParam5)
		{
			case 12:
			case 13:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, ((80f - 40f) / 2f));
				TASK::_0xB79817DB31FF72B9(*uParam0, 0f);
				break;
			case 4:
				TASK::_0x954451EA2D2120FB(*uParam0, 0.5f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 2.5f);
				break;
			case 5:
				TASK::_0x954451EA2D2120FB(*uParam0, 3f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 6f);
				break;
			case 6:
				TASK::_0x954451EA2D2120FB(*uParam0, 5f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 7:
				TASK::_0x954451EA2D2120FB(*uParam0, 2f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 8:
				TASK::_0x954451EA2D2120FB(*uParam0, 5f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 9:
				TASK::_0x954451EA2D2120FB(*uParam0, 12f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 18f);
				break;
			case 10:
				TASK::_0x4A7D73989F52EB37(*uParam0, 1f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 65f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
			case 0:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 55f);
				break;
			case 11:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 15f);
				break;
			case 15:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 40f);
				break;
			case 14:
				TASK::_0x954451EA2D2120FB(*uParam0, 50f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80f);
				break;
			case 16:
				TASK::_0x954451EA2D2120FB(*uParam0, 60f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
			case 30:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 150f);
				break;
			case 2:
				TASK::_0x4A7D73989F52EB37(*uParam0, 1f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 25f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 150f);
				break;
			case 18:
				TASK::_0x954451EA2D2120FB(*uParam0, 1f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 20f);
				break;
			case 20:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 21:
				TASK::_0x954451EA2D2120FB(*uParam0, 80f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
			case 22:
				TASK::_0x954451EA2D2120FB(*uParam0, 70f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
			case 23:
			case 24:
			case 25:
				TASK::_0x954451EA2D2120FB(*uParam0, 2f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 26:
				TASK::_0x954451EA2D2120FB(*uParam0, 50f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80f);
				break;
			case 27:
				TASK::_0x954451EA2D2120FB(*uParam0, 3f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 6f);
				break;
			case 28:
				TASK::_0x954451EA2D2120FB(*uParam0, 40f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 50f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 45f);
				break;
			case 29:
				TASK::_0x954451EA2D2120FB(*uParam0, 15f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 25f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 20f);
				break;
			case 31:
				TASK::_0x954451EA2D2120FB(*uParam0, 80f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 140f);
				break;
			case 32:
				TASK::_0x954451EA2D2120FB(*uParam0, 40f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 125f);
				break;
			case 33:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 34:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 35:
				TASK::_0x954451EA2D2120FB(*uParam0, 60f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80f);
				break;
			case 36:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_1153(10f, 40f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_1153(30f, 60f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 10f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 37:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_1153(40f, 80f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_1153(50f, 90f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 10f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 15f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 38:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_1153(30f, 60f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_1153(50f, 80f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 15f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 39:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_1153(0f, 10f, 1f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_1153(5f, 15f, 1f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 3f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 3f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 40:
				TASK::_0x2EB977293923C723(*uParam0, 40f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_1153(60f, 120f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_1153(100f, 130f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 20f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 20f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 41:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_1153(10f, 35f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_1153(25f, 50f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 2f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 20f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 42:
			case 44:
			case 45:
				TASK::_0x2EB977293923C723(*uParam0, 40f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_1153(50f, 80f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_1153(75f, 95f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 15f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 43:
				TASK::_0x2EB977293923C723(*uParam0, func_1153(95f, 90f, 80f, iParam1));
				TASK::_0x954451EA2D2120FB(*uParam0, func_1153(95f, 90f, 80f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_1153(125f, 115f, 100f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			default:
				if (iParam1 == 0)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 1f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 5f);
				}
				else if (iParam1 == 1)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 5f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 15f);
				}
				else if (iParam1 == 2)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 15f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 35f);
				}
				else
				{
					iParam1 = 3;
					TASK::_0x4A7D73989F52EB37(*uParam0, 1f);
					TASK::_0xB79817DB31FF72B9(*uParam0, 65f);
					TASK::_0x954451EA2D2120FB(*uParam0, 35f);
					if (iParam5 != 19)
					{
						TASK::_0x0F4F6C4CE471259D(*uParam0, 160f);
					}
					else
					{
						TASK::_0x0F4F6C4CE471259D(*uParam0, 65f);
					}
				}
				break;
		}
	}
	else
	{
		TASK::_0x954451EA2D2120FB(*uParam0, fParam8);
		TASK::_0x0F4F6C4CE471259D(*uParam0, fParam9);
	}
}

void func_1081(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 64, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
		case 1:
		case 19:
		case 20:
		case 45:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
		case 2:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 73, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 1);
			break;
		case 3:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 34, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 73, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 1);
			break;
		case 4:
		case 5:
		case 6:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 7:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 8:
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 9:
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 10:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 34, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
		case 12:
		case 13:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			TASK::_0xBC3F847AE2C3DC65(*uParam0, 25f);
			TASK::_0x450080DDEDB91258(*uParam0, 25f);
			break;
		case 11:
		case 30:
			TASK::_0x19BC99C678FBA139(*uParam0, 77, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 15:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
		case 14:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
		case 46:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 9, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			break;
		case 16:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 5, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 17:
			TASK::_0x2EB977293923C723(*uParam0, 40f);
			TASK::_0x764DB5A48390FBAD(*uParam0, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
		case 18:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
		case 21:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
		case 22:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 23:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 4, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 24:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 25:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 26:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
		case 27:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 74, 0);
			break;
		case 28:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 77, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
		case 29:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 12, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
		case 31:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 64, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			break;
		case 32:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			break;
		case 33:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 3, 0);
			break;
		case 34:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 35:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 1, 0);
			break;
		case 41:
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			break;
		case 42:
			TASK::_0x19BC99C678FBA139(*uParam0, 2, 1);
		case 44:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
		case 43:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 5, 0);
			break;
		case 47:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 28, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
	}
}

Vector3 func_1082(vector3 vParam0)
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

bool func_1083(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

Vector3 func_1084()
{
	if (func_95(70))
	{
		return -1634.252f, -1358.577f, 83.9077f;
	}
	if (func_95(73))
	{
		return -1665.419f, -1346.258f, 84.11175f;
	}
	return -1641.1f, -1359.979f, 83.4932f;
}

int func_1085(int iParam0)
{
	if (iParam0 == 808655744)
	{
		return -364764277 /* GXTEntry: "Scrawny Nag" */;
	}
	switch (iParam0)
	{
		case joaat("a_c_horse_americanpaint_overo"):
			return -974145463 /* GXTEntry: "American Paint - Overo Coat" */;
		case joaat("a_c_horse_americanpaint_tobiano"):
			return 1432602132 /* GXTEntry: "American Paint - Tobiano Coat" */;
		case 1792770814:
			return 92296905 /* GXTEntry: "American Paint - Splashed White Coat" */;
		case -1963397600:
			return -842044823 /* GXTEntry: "American Paint - Grey Overo Coat" */;
		case -1250098797:
			return 1371398552 /* GXTEntry: "American Standardbred - Black Coat" */;
		case -318278790:
			return -745453539 /* GXTEntry: "American Standardbred - Buckskin Coat" */;
		case 55096099:
			return 1583029039 /* GXTEntry: "American Standardbred - Palomino Dapple Coat" */;
		case -458397856:
			return -783061276 /* GXTEntry: "American Standardbred - Silver Tail Buckskin Coat" */;
		case -444610976:
			return -1322521536 /* GXTEntry: "Andalusian - Dark Bay Coat" */;
		case 746627200:
			return 728055838 /* GXTEntry: "Andalusian - Rose Grey Coat" */;
		case 705691988:
			return 1100711204 /* GXTEntry: "Andalusian - Perlino Coat" */;
		case joaat("a_c_horse_appaloosa_blanket"):
			return -1782334639 /* GXTEntry: "Appaloosa - Blanket Coat" */;
		case -1554827654:
			return -1181052732 /* GXTEntry: "Appaloosa - Leopard Blanket Coat" */;
		case 604357666:
			return -540812301 /* GXTEntry: "Appaloosa - Few Spotted Coat" */;
		case -1029277326:
			return -179102320 /* GXTEntry: "Appaloosa - Brown Leopard Coat" */;
		case joaat("a_c_horse_appaloosa_leopard"):
			return -1266863668 /* GXTEntry: "Appaloosa - Leopard Coat" */;
		case joaat("a_c_horse_arabian_black"):
			return -2078767648 /* GXTEntry: "Arabian - Black Coat" */;
		case 1496579364:
			return -2055655009 /* GXTEntry: "Arabian - Red Chestnut Coat" */;
		case -1523757120:
			return -1506685618 /* GXTEntry: "Arabian - Red Chestnut Coat" */;
		case -403470324:
			return -852553462 /* GXTEntry: "Arabian - Rose Grey Bay Coat" */;
		case 1576849913:
			return -2105447887 /* GXTEntry: "Arabian - Warped Brindle Coat" */;
		case joaat("a_c_horse_arabian_white"):
			return -80004868 /* GXTEntry: "Arabian - White Coat" */;
		case joaat("a_c_horse_ardennes_bayroan"):
			return 1813208211 /* GXTEntry: "Ardennes - Bay Roan Coat" */;
		case -635239558:
			return 836323303 /* GXTEntry: "Ardennes - Strawberry Roan Coat" */;
		case joaat("a_c_horse_ardennes_irongreyroan"):
			return 153881023 /* GXTEntry: "Ardennes - Iron Grey Roan Coat" */;
		case joaat("a_c_horse_belgian_blondchestnut"):
			return -1256798240 /* GXTEntry: "Belgian Draft - Blond Chestnut Coat" */;
		case joaat("a_c_horse_belgian_mealychestnut"):
			return 2118089359;
		case 1593035738:
			return -1537586382 /* GXTEntry: "Dutch Warmblood - Sooty Buckskin Coat" */;
		case 861505058:
			return 1440692746 /* GXTEntry: "Dutch Warmblood - Seal Brown Coat" */;
		case 687445866:
			return 697143532 /* GXTEntry: "Dutch Warmblood - Chocolate Roan Coat" */;
		case 1705182311:
			return 281128160 /* GXTEntry: "Hungarian Halfbred - Flaxen Chestnut Coat" */;
		case -78273782:
			return 1854519167 /* GXTEntry: "Hungarian Halfbred - Piebald Tobiano Coat" */;
		case -819697512:
			return -1376299681 /* GXTEntry: "Hungarian Halfbred - Dark Dapple Grey Coat" */;
		case -247265944:
			return -1955947684;
		case -1516219602:
			return 1427053849 /* GXTEntry: "Kentucky Saddler - Buttermilk Buckskin Coat" */;
		case -1265030920:
			return 1361788230 /* GXTEntry: "Kentucky Saddler - Chestnut Pinto Coat" */;
		case 2024948086:
			return 1974379573 /* GXTEntry: "Kentucky Saddler - Grey Coat" */;
		case 1696286663:
			return 545109431 /* GXTEntry: "Kentucky Saddler - Silver Bay Coat" */;
		case -1342159303:
			return 1275638003 /* GXTEntry: "Missouri Fox Trotter - Amber Champagne Coat" */;
		case joaat("a_c_horse_missourifoxtrotter_silverdapplepinto"):
			return 2083573823 /* GXTEntry: "Missouri Fox Trotter - Silver Dapple Pinto Coat" */;
		case 2030804811:
			return 1235275977 /* GXTEntry: "Morgan - Bay Coat" */;
		case 1230359523:
			return 892601357 /* GXTEntry: "Morgan - Bay Roan Coat" */;
		case -1038436471:
			return 1224695367 /* GXTEntry: "Morgan - Flaxen Chestnut Coat" */;
		case -1063137731:
			return 955937750 /* GXTEntry: "Morgan - Liver Chestnut Coat" */;
		case 96930969:
			return 648301150 /* GXTEntry: "Morgan - Palomino Coat" */;
		case -1180427609:
			return -1597490733 /* GXTEntry: "Mustang - Grullo Dun Coat" */;
		case joaat("a_c_horse_mustang_wildbay"):
			return 2000205872 /* GXTEntry: "Mustang - Wild Bay Coat" */;
		case 43825738:
			return -1428527735 /* GXTEntry: "Mustang - Tiger Striped Bay Coat" */;
		case joaat("a_c_horse_nokota_blueroan"):
			return 170010697 /* GXTEntry: "Nokota - Blue Roan Coat" */;
		case -1261814606:
			return -742726637 /* GXTEntry: "Nokota - White Roan Coat" */;
		case 107013696:
			return -1714171692 /* GXTEntry: "Nokota - Reverse Dapple Roan Coat" */;
		case 1066034872:
			return -103101636 /* GXTEntry: "Shire - Dark Bay Coat" */;
		case 36009259:
			return -1999094324 /* GXTEntry: "Shire - Light Grey Coat" */;
		case -1599683008:
			return 1724200240 /* GXTEntry: "Suffolk Punch - Sorrel Coat" */;
		case -1693870200:
			return 237935328 /* GXTEntry: "Suffolk Punch - Red Chestnut Coat" */;
		case 1072019803:
			return 120848852 /* GXTEntry: "Tennessee Walker - Black Rabicano Coat" */;
		case 1074477367:
			return -868094182 /* GXTEntry: "Tennessee Walker - Chestnut Coat" */;
		case -85890205:
			return -887362763 /* GXTEntry: "Tennessee Walker - Dapple Bay Coat" */;
		case 1048964673:
			return 2059232991 /* GXTEntry: "Tennessee Walker - Gold Palomino Coat" */;
		case -727455979:
			return -847714194 /* GXTEntry: "Tennessee Walker - Red Roan Coat" */;
		case -1667789645:
			return 1756765331 /* GXTEntry: "Tennessee Walker - Flaxen Roan Coat" */;
		case -1924405794:
			return -813071670 /* GXTEntry: "Thoroughbred - Blood Bay Coat" */;
		case joaat("a_c_horse_thoroughbred_dapplegrey"):
			return -1900569233 /* GXTEntry: "Thoroughbred - Dapple Grey Coat" */;
		case -526169133:
			return 1688250187 /* GXTEntry: "Thoroughbred - Brindle Coat" */;
		case 2120708491:
			return -1262715164 /* GXTEntry: "Thoroughbred - Black Chestnut Coat" */;
		case 900144280:
			return 2010625508 /* GXTEntry: "Thoroughbred - Reverse Dapple Black Coat" */;
		case 1133837220:
			return -136225010 /* GXTEntry: "Turkoman - Dark Bay Coat" */;
		case joaat("a_c_horse_turkoman_gold"):
			return -225011104 /* GXTEntry: "Turkoman - Gold Coat" */;
		case -1604180548:
			return -1882436593 /* GXTEntry: "Turkoman - Silver Coat" */;
		case joaat("a_c_donkey_01"):
			return -1331210307 /* GXTEntry: "Donkey" */;
		case joaat("a_c_horsemule_01"):
			return 122449722 /* GXTEntry: "Mule" */;
		case joaat("a_c_horsemulepainted_01"):
			return -1784502482 /* GXTEntry: "Mule - Painted" */;
		case 1883159941:
			return -1943445834;
		case -1028075925:
			return -635244104 /* GXTEntry: "Appaloosa - Black Snowflake" */;
		case 84224102:
			return -1427377767 /* GXTEntry: "Arabian - Grey Coat" */;
		case -1896838685:
			return -1293672675 /* GXTEntry: "Hungarian Halfbred - Liver Chestnut Coat" */;
		case -420599285:
			return -1179079660 /* GXTEntry: "Missouri Fox Trotter - Sable Champagne Coat" */;
		case 478986344:
			return 805526368 /* GXTEntry: "Mustang - Golden Dun Coat" */;
		case 446670976:
			return 1342496140 /* GXTEntry: "Tennessee Walker - Mahogany Bay Coat" */;
		case joaat("a_c_horse_shire_ravenblack"):
			return -126555855 /* GXTEntry: "Shire - Raven Black Coat" */;
		case 549900435:
			return 294243421 /* GXTEntry: "Dutch Warmblood - Cremello Gold Coat" */;
		case -2063289686:
			return -997197050 /* GXTEntry: "Thoroughbred - Seal Brown Coat" */;
		case 917402668:
			return -235714362 /* GXTEntry: "Appaloosa - Blanket Coat" */;
		case -914712122:
			return -1678164 /* GXTEntry: "Nokota - Blue Roan Coat" */;
		case -598917269:
			return -977833913 /* GXTEntry: "Tennessee Walker - Black Rabicano Coat" */;
		case joaat("a_c_horse_winter02_01"):
			return 1589164943 /* GXTEntry: "Thoroughbred - Silver Bay Coat" */;
		case -1356425746:
			return -1087523615 /* GXTEntry: "American Paint - Splashed White Coat" */;
		case joaat("a_c_horse_gang_bill"):
			return -496814209 /* GXTEntry: "Ardennes - Chestnut Coat" */;
		case joaat("a_c_horse_gang_charles"):
			return 2109055751 /* GXTEntry: "Appaloosa - Grey Snowcap Spotted Coat" */;
		case 1800725969:
			return -776673611 /* GXTEntry: "Nokota - Grey Roan Sabino Coat" */;
		case joaat("a_c_horse_gang_dutch"):
			return 1764402253 /* GXTEntry: "Arabian - White Albino Coat" */;
		case joaat("a_c_horse_gang_hosea"):
			return -1417310078 /* GXTEntry: "Turkoman - Silver Coat" */;
		case joaat("a_c_horse_gang_javier"):
			return 1096273915 /* GXTEntry: "American Paint - Grey Overo Coat" */;
		case joaat("a_c_horse_gang_john"):
			return 772751081 /* GXTEntry: "Hungarian Halfbred - Silver Dark Bay Coat" */;
		case -1486704931:
			return -1140435723 /* GXTEntry: "Nokota - Smoky Black Coat" */;
		case 1139858530:
			return 2002524329 /* GXTEntry: "Tennessee Walker - Flaxen Roan" */;
		case joaat("a_c_horse_gang_lenny"):
			return 1151530184 /* GXTEntry: "Mustang - Light Palomino Coat" */;
		case joaat("a_c_horse_gang_micah"):
			return -1266525037 /* GXTEntry: "Missouri Fox Trotter - Black Coat" */;
		case joaat("a_c_horse_gang_sadie"):
			return -2018137175 /* GXTEntry: "Turkoman - Gold Dapple Coat" */;
		case -575759638:
			return -574151692 /* GXTEntry: "Mustang - Dark Bay Roan Coat" */;
		case joaat("a_c_horse_gang_sean"):
			return 649786380 /* GXTEntry: "American Standardbred - Silver Tail Buckskin Coat" */;
		case joaat("a_c_horse_gang_trelawney"):
			return -1921328920 /* GXTEntry: "Appaloosa - Brown Leopard Coat" */;
		case 1760888205:
			return -837607790 /* GXTEntry: "Kentucky Saddler - Sabino Coat" */;
		case 291878635:
			return 370424594 /* GXTEntry: "Appaloosa - Few Spot Buckskin Coat" */;
		default:
			break;
	}
	return 0;
}

void func_1086(int iParam0)
{
	Global_40.f_1095.f_3135 = iParam0;
}

int func_1087(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_666(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

bool func_1088(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

struct<4> func_1089(bool bParam0)
{
	int iVar0;

	iVar0 = func_666(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224218))
		{
			*Global_1224218 = { func_331(271701509, func_330(bParam0), 12999093, 0) };
		}
		return *Global_1224218;
	}
	return func_331(271701509, func_330(bParam0), 12999093, 0);
}

int func_1090(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_1070(iParam0);
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

void func_1091(int iParam0, float fParam1, int iParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return;
	}
	PED::_0x06D26A96CA1BCA75(iParam0, 3, fParam1, iParam2);
}

struct<4> func_1092(int iParam0)
{
	char cVar0[32];

	StringCopy(&cVar0, "TOAST_RPG_LEVEL_", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_", 32);
	StringIntConCat(&cVar0, 0, 32);
	return cVar0;
}

var func_1093(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_1094(int iParam0)
{
	switch (iParam0)
	{
		case -801397594: /* GXTEntry: "Potent Horse Stimulant" */
		case 747460826: /* GXTEntry: "Special Horse Stimulant" */
			return 1;
	}
	return 0;
}

int func_1095(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1889597427;
		case 1:
			return -1130352927;
		case 2:
			return 389988485;
		case 3:
			return 1780904876;
		case 4:
			return 1367443060;
		case 5:
			return -1506259487;
		case 6:
			return -676503695;
		case 7:
			return 383349088;
		case 8:
			return -1292426046;
		case 9:
			return 1422688607;
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
			return -1176744536;
		case 25:
			return 673166414;
		case 26:
			return -207860920;
		case 27:
			return 99217379;
		case 28:
			return -735900586;
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

void func_1096()
{
	int iVar0;

	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(Global_1946804->f_1378.f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1497.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

int func_1097(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_431(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_431(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_431(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_431(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_431(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_431(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

void func_1098(int iParam0)
{
	func_1105(iParam0, 8, 6);
}

void func_1099(int iParam0)
{
	func_1154(&(Global_1946804->f_2589), iParam0);
}

void func_1100(int iParam0, int iParam1)
{
	func_1155(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_1101(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_1102(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_1070(&(uParam0->f_1[iParam2 /*3*/]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1156(iParam2, 65536) && &uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_1100(iVar1, iVar3);
		}
	}
	if (func_813(-1586649372) && func_1156(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_1100(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case 698653232:
			if (iParam1 == &Global_1946804->f_57[iParam2 /*11*/])
			{
				iVar1 = 12;
				if (&uParam0->f_1[iVar1 /*3*/] == 1516947474)
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_1100(iVar1, iVar3);
					}
				}
			}
			func_1157(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1157(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
			iVar1 = 22;
			if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
			{
			}
			else
			{
				iVar0 = 16;
				if ((uParam0->f_1[iVar0 /*3*/])->f_1 == joaat("base") || (uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_1100(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 525
				func_1157(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/])->f_1 == joaat("base")
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = -1539589426;
					if (bParam4)
					{
						func_1100(iVar1, iVar3);
					}
				}
				if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 1530758430)
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 1334603721;
					if (bParam4)
					{
						func_1100(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 656
				func_1157(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1170; //curOff = 691
				func_1157(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_1100(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 786
				func_1157(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1170; //curOff = 807
				if (iParam1 == &Global_1946804->f_57[iParam2 /*11*/])
				{
					iVar1 = 37;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1100(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1100(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_1070(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1100(iVar1, iVar3);
						}
					}
				}
				Jump @1170; //curOff = 1025
				iVar1 = 36;
				if (&uParam0->f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && func_431(&(Global_1946804->f_1497.f_1[iVar1 /*3*/]), -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = &Global_1946804->f_57[iParam2 /*11*/];
					(uParam0->f_1[iParam2 /*3*/])->f_1 = 0;
				}
				Jump @1170; //curOff = 1110
				iVar1 = 36;
				if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iParam2 /*3*/] = &Global_1946804->f_57[iParam2 /*11*/];
					(uParam0->f_1[iParam2 /*3*/])->f_1 = 0;
				}
			}
			switch (func_1070(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_1070(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1100(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_1070(&(uParam0->f_1[iVar1 /*3*/])) || func_431(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1100(iVar1, iVar3);
						}
					}
					break;
			}
		}

int func_1103(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;

	uVar0 = func_1158(0);
	if (iParam2 != 0 && func_1159(iParam0, uVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_1160(iParam0, func_1095(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_1104(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	var uVar7;
	int iVar8;

	bVar6 = func_2() != -1;
	uVar7 = func_1158(0);
	if (func_1011(32768))
	{
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 39)
	{
		iVar0 = &Global_1946804->f_57.f_430[iVar2];
		if (iVar0 <= -1 || iVar0 >= 39)
		{
		}
		else
		{
			iVar5 = func_1095(iVar0, 1);
			if (func_1161(iVar5, 8))
			{
			}
			else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == joaat("MISSING") || &uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_1161(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_1162(&(uParam0->f_1[iVar0 /*3*/]), iVar5, uVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_1163(uParam0);
				if (iVar3 > 0)
				{
					if (!func_1011(524288))
					{
						func_1107(524288);
						iVar1 = (iVar1 - iVar8);
					}
					iVar2 = iVar3;
					while (iVar2 <= 38)
					{
						iVar0 = &Global_1946804->f_57.f_430[iVar2];
						if (iVar0 <= -1 || iVar0 >= 39)
						{
						}
						else
						{
							iVar5 = func_1095(iVar0, 1);
							if (func_1161(iVar5, 8))
							{
							}
							else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == joaat("MISSING") || &uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_1161(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_1162(&(uParam0->f_1[iVar0 /*3*/]), iVar5, uVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									if (bParam1)
									{
										func_1100(iVar0, iParam2);
									}
								}
								iVar1 = (iVar1 + iVar4);
							}
						}
						iVar2++;
					}
				}
				if ((iVar1 + iVar8) < 31)
				{
					func_1110(524288);
				}
			}
		}
	}

void func_1105(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_1006(iParam0, 1) /*11*/])->f_10 = ((Global_1946804->f_57[func_1006(iParam0, 1) /*11*/])->f_10 - ((Global_1946804->f_57[func_1006(iParam0, 1) /*11*/])->f_10 && iParam1));
}

void func_1106(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1164(&(uParam0->f_2[iVar0 /*2*/]), bParam1, bParam2);
		iVar0++;
	}
	if (func_2() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_1165(2, Global_26795.f_776)) || Global_1946804->f_1497 != func_1166(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (&Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804->f_1497 = func_1166(Global_40.f_7729);
				Global_1946804->f_1378 = func_1166(Global_40.f_7729);
				Global_26795.f_776 = 0;
				func_1167(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_1168(0, 1);
	}
}

void func_1107(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_1108(struct<4> Param0)
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
		case 26:
			if (Global_1946804->f_850 >= 25)
			{
				return;
			}
			if (func_1169(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1946804->f_850)
				{
					iVar1 = ((Global_1946804->f_855 + iVar0) % 25);
					if ((&Global_1946804->f_668[iVar1 /*4*/] == Param0 && (Global_1946804->f_668[iVar1 /*4*/])->f_1 == Param0.f_1) && (Global_1946804->f_668[iVar1 /*4*/])->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_1170(Param0);
			*(Global_1946804->f_668[Global_1946804->f_856 /*4*/]) = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_1107(8);
			break;
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946804->f_851 >= 25)
			{
				return;
			}
			if (func_1169(Param0))
			{
				return;
			}
			func_1170(Param0);
			*(Global_1946804->f_567[Global_1946804->f_851 /*4*/]) = { Param0 };
			Global_1946804->f_851++;
			func_1107(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_1015(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_1109(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_8 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3[0] = 0;
	uParam0->f_3[1] = 0;
	uParam0->f_3[2] = 0;
	uParam0->f_3[3] = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	if (uParam0->f_12)
	{
		PED::_0x13E7320C762F0477(uParam0->f_13);
	}
	uParam0->f_12 = 0;
}

void func_1110(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_1111(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_1112(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_1169(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1 /*4*/] == Param0 && (Global_1946804->f_769[iVar1 /*4*/])->f_2 == Param0.f_2) && (Global_1946804->f_769[iVar1 /*4*/])->f_3 == Param0.f_3) && (Global_1946804->f_769[iVar1 /*4*/])->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1 /*4*/] == 34 && func_1169(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1170(Param0);
	*(Global_1946804->f_769[Global_1946804->f_854 /*4*/]) = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_1107(8);
}

void func_1113(int iParam0, var uParam1)
{
	var uVar0;
	int iVar30;
	int iVar31;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	uVar0 = 29;
	MISC::_COPY_MEMORY(uParam1, &uVar0, 30);
	iVar30 = 0;
	while (iVar30 < 29)
	{
		iVar31 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar31, false, iVar30, true);
		if (func_1088(iVar31))
		{
			(*uParam1)[iVar30] = iVar31;
		}
		else
		{
			(*uParam1)[iVar30] = 0;
		}
		iVar30++;
	}
}

void func_1114(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_284(iVar1, 0))
		{
			func_1171(iVar1, 0, bParam0);
		}
		Global_1946804->f_2657[iVar0] = 0;
		iVar0 = (iVar0 + -1);
	}
	Global_1946804->f_2657.f_20 = 0;
	Global_1946804->f_2657.f_21 = 0;
	Global_1946804->f_2657.f_22 = 0;
	Global_1946804->f_2657.f_23 = 0;
	Global_1946804->f_2657.f_24 = 0;
	Global_1946804->f_2657.f_25 = 0;
	Global_1946804->f_2657.f_19 = 0;
	Global_1946804->f_2657.f_26.f_6 = 0;
}

void func_1115(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	Global_1946804->f_2657.f_26.f_2 = 3;
	Global_1946804->f_2657.f_26.f_1 = 3;
	Global_1946804->f_2657.f_26 = 3;
	if (func_2() == -1)
	{
		func_1172(352481484);
		iVar0 = 0;
		while (iVar0 < Global_26795.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_26795[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_26795.f_20;
		Global_1946804->f_2657.f_21 = Global_26795.f_21;
		Global_1946804->f_2657.f_22 = Global_26795.f_22;
		Global_1946804->f_2657.f_23 = Global_26795.f_23;
		Global_1946804->f_2657.f_24 = Global_26795.f_24;
		Global_1946804->f_2657.f_25 = Global_26795.f_25;
		Global_1946804->f_2657.f_19 = Global_26795.f_19;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_36637.f_45.f_350.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_36637.f_45.f_350[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_36637.f_45.f_350.f_20;
		Global_1946804->f_2657.f_21 = Global_36637.f_45.f_350.f_21;
		Global_1946804->f_2657.f_22 = Global_36637.f_45.f_350.f_22;
		Global_1946804->f_2657.f_23 = Global_36637.f_45.f_350.f_23;
		Global_1946804->f_2657.f_24 = Global_36637.f_45.f_350.f_24;
		Global_1946804->f_2657.f_25 = Global_36637.f_45.f_350.f_25;
		Global_1946804->f_2657.f_19 = Global_36637.f_45.f_350.f_19;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar2 = &Global_1946804->f_2657[iVar0];
		if (func_1070(iVar2) != -999503751)
		{
			func_1173(&(Global_1946804->f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_1174(iVar2, 0))
		{
			func_1175(iVar2, &Global_1946804->f_1497.f_1[iVar1 /*3*/] == &Global_1946804->f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_1116(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;

	if (!func_1176(iParam0))
	{
		return;
	}
	iVar0 = func_1070(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_1177(iParam0, &(Global_1946804->f_2657.f_21), Global_1946804->f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_1177(iParam0, &(Global_1946804->f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_1177(iParam0, &(Global_1946804->f_2657.f_20), Global_1946804->f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_1177(iParam0, &(Global_1946804->f_2657.f_22), Global_1946804->f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_1177(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_1177(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_1178(0))
	{
		func_1179(iParam0, 1);
		if (func_1117() == 1160113249)
		{
			func_1179(func_1178(-2125499975), 0);
		}
		else
		{
			func_1179(func_1178(1160113249), 0);
		}
	}
	func_1180();
	if (func_1181(iVar0))
	{
		INVENTORY::_0x766315A564594401(func_666(0), iParam0, 0);
	}
	func_1175(iParam0, bParam3);
	if (bParam2)
	{
		func_1168(0, 0);
	}
}

int func_1117()
{
	return Global_1946804->f_1;
}

void func_1118(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (uParam1[iVar0] != 0)
		{
			if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, uParam1[iVar0], 0, 0))
			{
				if (func_1182(uParam1[iVar0]))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, uParam1[iVar0], 0, false, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
			iVar1 = 0;
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, false, iVar0, true);
			if (iVar1 != uParam1[iVar0])
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, uParam1[iVar0], true, iVar0, false, false);
			}
		}
		iVar0++;
	}
}

void func_1119(bool bParam0)
{
	func_1183(bParam0);
	Global_1955569->f_1.f_1 = bParam0;
	if (bParam0 == 1)
	{
		HUD::_HIDE_HUD_COMPONENT(121713391);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(121713391);
	}
}

bool func_1120(int iParam0)
{
	int iVar0;

	iVar0 = func_440(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_1121()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_733(func_1184(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1122()
{
	return func_1185(Global_40.f_12018);
}

int func_1123()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_1184(iVar1);
		if (func_733(iVar2, 1, 0) || func_1131(func_1130(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1124()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1186(COLLECTION::_0x126CBEBBA46693CF(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1125()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1187(COLLECTION::_0x126CBEBBA46693CF(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1126()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_799(COLLECTION::_0x126CBEBBA46693CF(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1127()
{
	return COLLECTION::_0x5461C821D00FE15A(2103522376, 0);
}

int func_1128()
{
	return COLLECTION::_0x3A65F4844913A047(2103522376, 0);
}

int func_1129(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588 /* GXTEntry: "Cigarette Cards Famous Gunslingers" */;
		case 1:
			return -1021394391 /* GXTEntry: "Cigarette Cards Artists & Poets" */;
		case 2:
			return -987306668 /* GXTEntry: "Cigarette Cards Vistas of America" */;
		case 3:
			return -1028735103 /* GXTEntry: "Cigarette Cards Gems Of Beauty" */;
		case 4:
			return 515229791 /* GXTEntry: "Cigarette Cards Flora of America" */;
		case 5:
			return -1230863414 /* GXTEntry: "Cigarette Cards Stars of the Stage" */;
		case 6:
			return 232875659 /* GXTEntry: "Cigarette Cards Fauna of North America" */;
		case 7:
			return 1423129537 /* GXTEntry: "Cigarette Cards Marvels of Travel" */;
		case 8:
			return -435742319 /* GXTEntry: "Cigarette Cards The World\'s Champions" */;
		case 9:
			return -1854702679 /* GXTEntry: "Cigarette Cards Amazing Inventions" */;
		case 10:
			return 1265323898 /* GXTEntry: "Cigarette Cards Breeds of Horses" */;
		case 11:
			return -479775696 /* GXTEntry: "Cigarette Cards Prominent Americans" */;
		default:
			break;
	}
	return 0;
}

int func_1130(int iParam0)
{
	switch (iParam0)
	{
		case -1230863414: /* GXTEntry: "Cigarette Cards Stars of the Stage" */
			return 1;
		case -1021394391: /* GXTEntry: "Cigarette Cards Artists & Poets" */
			return 8;
		case 232875659: /* GXTEntry: "Cigarette Cards Fauna of North America" */
			return 4;
		case -1028735103: /* GXTEntry: "Cigarette Cards Gems Of Beauty" */
			return 16;
		case 554799588: /* GXTEntry: "Cigarette Cards Famous Gunslingers" */
			return 32;
		case 1265323898: /* GXTEntry: "Cigarette Cards Breeds of Horses" */
			return 64;
		case -1854702679: /* GXTEntry: "Cigarette Cards Amazing Inventions" */
			return 128;
		case -987306668: /* GXTEntry: "Cigarette Cards Vistas of America" */
			return 256;
		case -479775696: /* GXTEntry: "Cigarette Cards Prominent Americans" */
			return 2;
		case 515229791: /* GXTEntry: "Cigarette Cards Flora of America" */
			return 512;
		case -435742319: /* GXTEntry: "Cigarette Cards The World\'s Champions" */
			return 1024;
		case 1423129537: /* GXTEntry: "Cigarette Cards Marvels of Travel" */
			return 2048;
		default:
			break;
	}
	return 0;
}

bool func_1131(var uParam0)
{
	return (Global_40.f_12018 && uParam0) != 0;
}

char* func_1132(int iParam0)
{
	switch (iParam0)
	{
		case 554799588: /* GXTEntry: "Cigarette Cards Famous Gunslingers" */
			return "COL_CC_GUN_SET";
		case -1021394391: /* GXTEntry: "Cigarette Cards Artists & Poets" */
			return "COL_CC_ART_SET";
		case -987306668: /* GXTEntry: "Cigarette Cards Vistas of America" */
			return "COL_CC_LND_SET";
		case -1028735103: /* GXTEntry: "Cigarette Cards Gems Of Beauty" */
			return "COL_CC_GRL_SET";
		case 515229791: /* GXTEntry: "Cigarette Cards Flora of America" */
			return "COL_CC_PLT_SET";
		case -1230863414: /* GXTEntry: "Cigarette Cards Stars of the Stage" */
			return "COL_CC_ACT_SET";
		case 232875659: /* GXTEntry: "Cigarette Cards Fauna of North America" */
			return "COL_CC_AML_SET";
		case 1423129537: /* GXTEntry: "Cigarette Cards Marvels of Travel" */
			return "COL_CC_VEH_SET";
		case -435742319: /* GXTEntry: "Cigarette Cards The World\'s Champions" */
			return "COL_CC_SPT_SET";
		case -1854702679: /* GXTEntry: "Cigarette Cards Amazing Inventions" */
			return "COL_CC_INV_SET";
		case 1265323898: /* GXTEntry: "Cigarette Cards Breeds of Horses" */
			return "COL_CC_HOR_SET";
		case -479775696: /* GXTEntry: "Cigarette Cards Prominent Americans" */
			return "COL_CC_PAM_SET";
		default:
			break;
	}
	return "";
}

char* func_1133(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_DB_DINO_BONES_FOUND";
		case 1:
			return "COL_DB_SEND";
		case 2:
			return "COL_DB_COLLECT";
		default:
			break;
	}
	return "";
}

int func_1134(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 6;
		case 2:
			return 7;
		case 3:
			return 8;
		case 4:
			return 9;
		default:
			break;
	}
	return 5;
}

int func_1135(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15;
		case 1:
			return 16;
		case 2:
			return 17;
		case 3:
			return 18;
		case 4:
			return 19;
		default:
			break;
	}
	return 15;
}

char* func_1136(int iParam0)
{
	switch (iParam0)
	{
		case 281887510: /* GXTEntry: "Little Egret Plume" */
			return "COL_EP_LITTLE_FOUND";
		case -164081697: /* GXTEntry: "Reddish Egret Plume" */
			return "COL_EP_REDDISH_FOUND";
		case -1161319399: /* GXTEntry: "Snowy Egret Plume" */
			return "COL_EP_SNOWY_FOUND";
		case 728781265: /* GXTEntry: "Lady of the Night Orchid" */
			return "COL_RO_LADY_OF_NIGHT_FOUND";
		case -222563712: /* GXTEntry: "Heron Plume" */
			return "COL_HF_FOUND";
		case 1794857344: /* GXTEntry: "Lady Slipper Orchid" */
			return "COL_RO_LADY_SLIPPER_FOUND";
		case 1952409553: /* GXTEntry: "Moccasin Flower Orchid" */
			return "COL_RO_MOCCASIN_FOUND";
		case 2116770557:
			return "COL_GF_FOUND";
		case -651064726: /* GXTEntry: "Acuna\'s Star Orchid" */
			return "COL_RO_ACUNAS_STAR_FOUND";
		case -404270094: /* GXTEntry: "Cigar Orchid" */
			return "COL_RO_CIGAR_FOUND";
		case 2093126853: /* GXTEntry: "Ghost Orchid" */
			return "COL_RO_GHOST_FOUND";
		case 2085530337: /* GXTEntry: "Spoonbill Plume" */
			return "COL_SF_FOUND";
		case -150591160: /* GXTEntry: "Night Scented Orchid" */
			return "COL_RO_NIGHT_SCENTED_FOUND";
		case -323969289: /* GXTEntry: "Rat Tail Orchid" */
			return "COL_RO_RAT_TAIL_FOUND";
		case 1504361882: /* GXTEntry: "Spider Orchid" */
			return "COL_RO_SPIDER_FOUND";
		case -1521783510: /* GXTEntry: "Clamshell Orchid" */
			return "COL_RO_CLAMSHELL_FOUND";
		case 1714875242: /* GXTEntry: "Dragon\'s Mouth Orchid" */
			return "COL_RO_DRAGONS_FOUND";
		case 1019229063: /* GXTEntry: "Queen\'s Orchid" */
			return "COL_RO_QUEENS_FOUND";
		case 927763737: /* GXTEntry: "Sparrow\'s Egg Orchid" */
			return "COL_RO_SPARROWS_FOUND";
		default:
			break;
	}
	return "";
}

char* func_1137(int iParam0)
{
	switch (iParam0)
	{
		case -1865241121:
			return "PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY";
		case 2117142684:
			return "PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY";
		case -1409326024:
			return "PROVISION_FISH_LAKE_STURGEON_LEGENDARY";
		case -641744968:
			return "PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY";
		case -946988203:
			return "PROVISION_FISH_LONGNOSE_GAR_LEGENDARY";
		case -646136018:
			return "PROVISION_FISH_MUSKIE_LEGENDARY";
		case -955835837:
			return "PROVISION_FISH_PERCH_LEGENDARY";
		case -179276075:
			return "PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY";
		case -492711560:
			return "PROVISION_FISH_ROCK_BASS_LEGENDARY";
		case 1764383959:
			return "PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY";
		case 317501533:
			return "PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY";
		case 817753087:
			return "PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY";
		case 576606016:
			return "PROVISION_FISH_BLUEGILL_LEGENDARY";
		default:
			break;
	}
	return "";
}

char* func_1138(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_RC_ROCK_FACES_FOUND";
		case 1:
			return "COL_RC_SEND";
		case 2:
			return "COL_RC_COLLECT";
		default:
			break;
	}
	return "";
}

int func_1139(int iParam0)
{
	if (func_1188(iParam0) && func_733(iParam0, 1, 0))
	{
		return 1;
	}
	else if (func_1189(iParam0) && func_1190(iParam0))
	{
		return 1;
	}
	return 0;
}

char* func_1140(int iParam0)
{
	if (!func_284(iParam0, 0))
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(func_946(iParam0));
}

var func_1141(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = iParam7;
	Var0.f_1 = sParam8;
	Var0.f_2 = sParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = iParam4;
	Var0.f_4.f_1 = iParam6;
	Var0.f_4.f_2 = sParam5;
	Var13.f_7 = 1;
	Var13 = iParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _NAMESPACE71::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

int func_1142(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

int func_1143(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam1))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam0, &uParam1, uParam5, !bParam6))
	{
		return 0;
	}
	return 1;
}

char* func_1144(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "HealthCoreValue";
			break;
		case 1:
			sVar0 = "StaminaCoreValue";
			break;
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

char* func_1145(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "isLowHealthCoreActive";
			break;
		case 1:
			sVar0 = "isLowStaminaCoreActive";
			break;
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

float func_1146(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_1147(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

void func_1148(int iParam0, int iParam1)
{
	int iVar0;
	struct<9> Var1;

	if (iParam0 == -1)
	{
		return;
	}
	if (&Global_1224226 < 20)
	{
		Global_1224226 = &Global_1224226 + 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1224226->f_1[iVar0 /*9*/]) = { *(Global_1224226->f_1[iVar0 + 1 /*9*/]) };
			iVar0++;
		}
	}
	Var1 = -1;
	Var1 = iParam0;
	Var1.f_1 = iParam1;
	*(Global_1224226->f_1[(&Global_1224226 - 1) /*9*/]) = { Var1 };
}

bool func_1149(int iParam0, int iParam1)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	bVar0 = PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, ENTITY::GET_ENTITY_MODEL(iParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

int func_1150(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return 0;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (iVar0 == iParam1)
	{
		return 1;
	}
	return 0;
}

int func_1151(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return 0;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (!func_1149(iParam0, iVar0))
	{
		return 1;
	}
	if (iVar0 != iParam1)
	{
		return 0;
	}
	iVar1 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	return PED::_0x610438375E5D1801(iVar1);
}

void func_1152(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

float func_1153(float fParam0, float fParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = fParam0;
	fVar0 = (fVar0 + (fParam2 * IntToFloat(iParam3)));
	if (fVar0 > fParam1)
	{
		fVar0 = fParam1;
	}
	return fVar0;
}

void func_1154(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var4;

	Var2 = 39;
	Var4 = 10;
	Var4.f_1 = 39;
	Var4.f_1.f_2 = 39;
	Var4.f_1.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iVar0 < *uParam0)
		{
			if ((func_1191(uParam0->f_2[iVar0 /*2*/], 2) || &uParam0->f_2[iVar0 /*2*/] == iParam1) || &uParam0->f_2[iVar0 /*2*/] == 39)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			else
			{
				if (func_1191(uParam0->f_2[iVar0 /*2*/], 1))
				{
					func_1192(uParam0->f_2[iVar0 /*2*/], 2, 6);
				}
				*(Var4[iVar1 /*2*/]) = { *(uParam0->f_2[iVar0 /*2*/]) };
				iVar1++;
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { *(Var4[iVar0 /*2*/]) };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}

void func_1155(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_1193(uParam0, 1))
	{
		func_1194(uParam0, 1);
	}
	(uParam0->f_2[*uParam0 /*2*/])->f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

bool func_1156(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[iParam0 /*11*/])->f_9 && iParam1) != 0;
}

void func_1157(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	if (bParam4)
	{
		iVar0 = 3;
	}
	iVar1 = 12;
	iVar2 = 20;
	iVar3 = 16;
	if ((uParam0->f_1[iVar3 /*3*/])->f_1 == 1216705912 || (uParam0->f_1[iVar3 /*3*/])->f_1 == 654181853)
	{
		if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
		{
			(uParam0->f_1[iVar3 /*3*/])->f_1 = 1334603721;
		}
		else
		{
			(uParam0->f_1[iVar3 /*3*/])->f_1 = -1539589426;
			(uParam0->f_1[iVar1 /*3*/])->f_1 = joaat("base");
		}
		if (bParam2)
		{
			func_1100(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_1100(iVar3, iVar0);
		}
	}
	if ((uParam0->f_1[iVar2 /*3*/])->f_1 == -1333118809 || (uParam0->f_1[iVar2 /*3*/])->f_1 == joaat("custom"))
	{
		(uParam0->f_1[iVar2 /*3*/])->f_1 = joaat("base");
		if (bParam3)
		{
			func_1100(iVar2, iVar0);
		}
	}
}

int func_1158(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_1117();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_1159(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < PED::_0xFFCC2DB2D9953401(iParam0, uParam1, bParam3))
	{
		if (PED::_0x6243635AF2F1B826(iParam0, iVar0, uParam1, bParam3) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1160(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("base");
	return 1;
}

bool func_1161(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_1006(iParam0, 1) /*11*/])->f_10 && iParam1) != 0;
}

int func_1162(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == &Global_1946804->f_57[func_1006(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_1011(524288))
	{
		switch (iParam1)
		{
			case 673166414:
				iVar0++;
				break;
			case -207860920:
				iVar0++;
				break;
		}
	}
	iVar0 = (iVar0 + PED::_0x31B2E7F2E3C58B89(iParam0, joaat("base"), uParam2, bParam3));
	return iVar0;
}

int func_1163(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 25;
	iVar1 = 0;
	if (&uParam0->f_1[iVar0 /*3*/] != &Global_1946804->f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	iVar0 = 26;
	if (&uParam0->f_1[iVar0 /*3*/] != &Global_1946804->f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	return iVar1;
}

void func_1164(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*(Global_1946804->f_1497.f_1[iParam0 /*3*/]) = { *(Global_1946804->f_1378.f_1[iParam0 /*3*/]) };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_2() == -1)
	{
		func_1195(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_26795.f_776);
	}
	else
	{
		func_1196(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_36637.f_45.f_350.f_1011);
	}
}

int func_1165(int iParam0, int iParam1)
{
	if (func_2() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			return (Global_26795.f_26[iParam1 /*120*/] && iParam0) != 0;
		}
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		return (Global_36637.f_45.f_350.f_26[iParam1 /*120*/] && iParam0) != 0;
	}
	return 0;
}

int func_1166(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 439606975 /* GXTEntry: "Fancy Suit" */;
		case 6:
			return 1661121390 /* GXTEntry: "The Gunslinger" */;
		case 7:
			return 1164374808 /* GXTEntry: "Winter Outfit" */;
		case 8:
			return 1160643979 /* GXTEntry: "The Winter Gunslinger" */;
		case 9:
			return 624063935 /* GXTEntry: "The Summer Gunslinger" */;
		case 10:
			return -1476781101 /* GXTEntry: "Island Outfit" */;
		case 11:
			return 294553332 /* GXTEntry: "Island Outfit" */;
		case 12:
			return 1788874135 /* GXTEntry: "Island Outfit Shackles" */;
		case 15:
			return 1560492757 /* GXTEntry: "Robbery Outfit" */;
		case 16:
			return -769081407 /* GXTEntry: "The Wittemore" */;
		case 17:
			return 1902428294 /* GXTEntry: "The Wittemore" */;
		case 18:
			return -2114499732;
		case 19:
			return 800827126;
		case 20:
			return 688004210 /* GXTEntry: "Police Outfit" */;
		case 0:
			return 166243423 /* GXTEntry: "Custom Outfit" */;
		case 1:
			return 1383300684 /* GXTEntry: "Saved Custom Outfit One" */;
		case 2:
			return 2051441678 /* GXTEntry: "Saved Custom Outfit Two" */;
		case 3:
			return 162509669 /* GXTEntry: "Saved Custom Outfit Three" */;
		case 4:
			return 635948769 /* GXTEntry: "Saved Custom Outfit Four" */;
		case 5:
			return 274995506 /* GXTEntry: "Saved Custom Outfit Five" */;
		case 24:
			return -1826731591 /* GXTEntry: "Brawler\'s Outfit" */;
		case 25:
			return 2119049229;
		case 26:
			return 1352942778 /* GXTEntry: "The Rebel" */;
		case 27:
			return 1964379549 /* GXTEntry: "The Innocent" */;
		case 28:
			return 1201189539 /* GXTEntry: "The Pursuer" */;
		case 21:
			return 1351927599 /* GXTEntry: "The Grizzlies Outlaw" */;
		case 22:
			return 2032023096 /* GXTEntry: "The Nuevo Paraiso" */;
		case 23:
			return -291256376;
		case 66:
			return -1243402388;
		case 67:
			return 65931886;
		case 68:
			return 1371678229;
		case 69:
			return 2102263084;
		case 61:
			return -272211555 /* GXTEntry: "The Homesteader" */;
		case 64:
			return -55563408;
		case 71:
			return -1914506115;
		case 75:
			return 802495462;
		case 77:
			return 842905332;
		case 78:
			return -1951220140;
		case 79:
			return 1511551084;
		case 81:
			return -1725704631;
		case 83:
			return 1257427489;
		case 85:
			return -659341240;
		case 87:
			return 2038771525;
		case 89:
			return -535599244;
		case 73:
			return -389591806;
		case 70:
			return -1205612021 /* GXTEntry: "The Winter Cowboy" */;
		case 93:
			return 890706995 /* GXTEntry: "The Cowhand" */;
		case 90:
			return 1156438275 /* GXTEntry: "The Rancher" */;
		case 91:
			return -1611873049 /* GXTEntry: "The Rancher" */;
		case 92:
			return 594312243;
		case 94:
			return -978578725;
		case 13:
			return 1784889667;
		case 62:
			return -361635024 /* GXTEntry: "The Cowboy" */;
		case 76:
			return 1460520700;
		case 80:
			return 523337834;
		case 82:
			return -19271249;
		case 84:
			return 214175524;
		case 86:
			return -1303643297;
		case 88:
			return 411856831;
		case 72:
			return -926815459;
		case 74:
			return -1300731953;
		case 65:
			return -409616653 /* GXTEntry: "The Homesteader" */;
		case 29:
			return 509954990 /* GXTEntry: "The Chevalier" */;
		case 30:
			return -445916744 /* GXTEntry: "The Heartlands" */;
		case 31:
			return -866249154 /* GXTEntry: "The Gambler" */;
		case 32:
			return -2077063704 /* GXTEntry: "The Earl" */;
		case 33:
			return 205207539 /* GXTEntry: "The McLaughlin" */;
		case 34:
			return -1033657275 /* GXTEntry: "The Josiah" */;
		case 35:
			return 1806002837 /* GXTEntry: "The Farrier" */;
		case 36:
			return 705324896 /* GXTEntry: "The Donegal" */;
		case 37:
			return -1541763703 /* GXTEntry: "The Bulldogger" */;
		case 38:
			return 387052410 /* GXTEntry: "The Ranch Hand" */;
		case 39:
			return -361288914 /* GXTEntry: "The Scrapper" */;
		case 40:
			return -911054515 /* GXTEntry: "The Armadillo" */;
		case 41:
			return 1084200963 /* GXTEntry: "The Valentine" */;
		case 42:
			return 1847948074 /* GXTEntry: "The Vaquero" */;
		case 43:
			return -1212526764 /* GXTEntry: "The Dewberry Creek" */;
		case 44:
			return 1851440270 /* GXTEntry: "The Clairmont" */;
		case 45:
			return -2028985700 /* GXTEntry: "The Roscoe" */;
		case 46:
			return 1074435214 /* GXTEntry: "The Estate Boss" */;
		case 47:
			return -883015675 /* GXTEntry: "The Drover" */;
		case 48:
			return -1047155604 /* GXTEntry: "The Calumet" */;
		case 49:
			return 1123231221 /* GXTEntry: "The Cowpuncher" */;
		case 50:
			return 1866989210 /* GXTEntry: "The Tumbleweed" */;
		case 51:
			return 478183719 /* GXTEntry: "The Drifter" */;
		case 52:
			return -1698955868 /* GXTEntry: "The Leatherman" */;
		case 53:
			return -2029378634 /* GXTEntry: "The Cumberland" */;
		case 54:
			return 1339864416 /* GXTEntry: "The Millesani" */;
		case 55:
			return 890998115 /* GXTEntry: "The Faulkton" */;
		case 56:
			return -1376288999 /* GXTEntry: "The Dolton" */;
		case 57:
			return -1041123771 /* GXTEntry: "The Corson" */;
		case 58:
			return 1389254668 /* GXTEntry: "The Saint Denis" */;
		case 59:
			return -346112633 /* GXTEntry: "The Deauville" */;
		case 60:
			return 773309172 /* GXTEntry: "The Bretagne" */;
		default:
			break;
	}
	return 0;
}

void func_1167(int iParam0, bool bParam1, int iParam2)
{
	func_1197(&(Global_1946804->f_1378), iParam0);
	func_1198(2, iParam0, 6);
	if (bParam1)
	{
		func_1168(0, 1);
	}
}

void func_1168(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1199(0);
	}
	if (bParam0)
	{
		func_1107(8);
		func_1107(512);
	}
	else
	{
		func_1107(8);
		func_1107(16);
	}
}

bool func_1169(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_1170(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

void func_1171(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	switch (func_1070(iParam0))
	{
		case -2061583405:
			bVar0 = func_1200(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1200(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1200(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1200(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1200(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1200(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1180();
	}
	if (bParam1)
	{
		func_1168(0, 0);
	}
}

void func_1172(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;

	Var2 = -1;
	Var2.f_1 = -1;
	Var2.f_2 = -1;
	Var2.f_3 = -1;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	Var2.f_6 = -1;
	Var2.f_7 = -1;
	Var2.f_8 = -1;
	Var2.f_13 = -1;
	Var2 = { func_949(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_951(&Var2, &iVar0, &iVar1, 0))
	{
		if (iVar1 > 0)
		{
			switch (iParam0)
			{
				case 352481484:
					Global_1946804->f_2657.f_26.f_2 = 5;
					Global_1946804->f_2657.f_26.f_1 = 5;
					Global_1946804->f_2657.f_26 = 5;
					break;
			}
		}
		func_953(iVar0);
	}
}

void func_1173(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_1201(iParam2, *uParam0);
	func_1202(uParam0->f_1[*uParam0 /*5*/], iParam1, -1, 1, 0);
	*uParam0++;
}

int func_1174(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_954(iParam0, 0, 0) };
	Var5 = { func_331(iParam0, Var0, Var0.f_4, 0) };
	if (func_332(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x9A113C660AEA3832(func_666(0), &Var5, iParam1);
	return 1;
}

void func_1175(int iParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_954(iParam0, 0, 0) };
	Var5 = { func_331(iParam0, Var0, Var0.f_4, 0) };
	if (func_332(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_666(0), &Var5, bParam1);
}

int func_1176(int iParam0)
{
	if (func_2() == -1)
	{
		if (Global_40.f_4283 != 0)
		{
			if (iParam0 == 1164374808)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_1177(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;

	iVar1 = iParam0;
	if (Global_1946804->f_2657.f_19 >= 18)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_1203(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_1174(iParam0, 0))
	{
		return 0;
	}
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = iVar1;
	if (func_1070(iParam0) != -999503751)
	{
		func_1173(&(Global_1946804->f_2657.f_26.f_26), iParam0, Global_1946804->f_2657.f_19);
	}
	Global_1946804->f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_1178(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_1117();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846 /* GXTEntry: "John\'s Classic Hat" */;
	}
	return -1535516064 /* GXTEntry: "Arthur\'s Hat" */;
}

int func_1179(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_954(iParam0, 0, 0) };
	Var5 = { func_331(iParam0, Var0, Var0.f_4, 0) };
	if (func_332(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(iParam1, func_666(0), &Var5);
	return 1;
}

void func_1180()
{
	int iVar0;

	if (func_2() == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_2657.f_19)
		{
			Global_26795[iVar0] = &Global_1946804->f_2657[iVar0];
			iVar0++;
		}
		Global_26795.f_20 = Global_1946804->f_2657.f_20;
		Global_26795.f_21 = Global_1946804->f_2657.f_21;
		Global_26795.f_22 = Global_1946804->f_2657.f_22;
		Global_26795.f_23 = Global_1946804->f_2657.f_23;
		Global_26795.f_24 = Global_1946804->f_2657.f_24;
		Global_26795.f_19 = Global_1946804->f_2657.f_19;
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		Global_36637.f_45.f_350[iVar0] = &Global_1946804->f_2657[iVar0];
		iVar0++;
	}
	Global_36637.f_45.f_350.f_20 = Global_1946804->f_2657.f_20;
	Global_36637.f_45.f_350.f_21 = Global_1946804->f_2657.f_21;
	Global_36637.f_45.f_350.f_22 = Global_1946804->f_2657.f_22;
	Global_36637.f_45.f_350.f_23 = Global_1946804->f_2657.f_23;
	Global_36637.f_45.f_350.f_24 = Global_1946804->f_2657.f_24;
	Global_36637.f_45.f_350.f_19 = Global_1946804->f_2657.f_19;
}

bool func_1181(int iParam0)
{
	return func_1205(func_1204(iParam0));
}

int func_1182(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_1183(bool bParam0)
{
	COMPAPP::_0xB6FD96420C0126A1(-1056478928, bParam0);
}

int func_1184(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588 /* GXTEntry: "Cigarette Cards Famous Gunslingers" */;
		case 1:
			return -1021394391 /* GXTEntry: "Cigarette Cards Artists & Poets" */;
		case 2:
			return -987306668 /* GXTEntry: "Cigarette Cards Vistas of America" */;
		case 3:
			return -1028735103 /* GXTEntry: "Cigarette Cards Gems Of Beauty" */;
		case 4:
			return 515229791 /* GXTEntry: "Cigarette Cards Flora of America" */;
		case 5:
			return -1230863414 /* GXTEntry: "Cigarette Cards Stars of the Stage" */;
		case 6:
			return 232875659 /* GXTEntry: "Cigarette Cards Fauna of North America" */;
		case 7:
			return 1423129537 /* GXTEntry: "Cigarette Cards Marvels of Travel" */;
		case 8:
			return -435742319 /* GXTEntry: "Cigarette Cards The World\'s Champions" */;
		case 9:
			return -1854702679 /* GXTEntry: "Cigarette Cards Amazing Inventions" */;
		case 10:
			return 1265323898 /* GXTEntry: "Cigarette Cards Breeds of Horses" */;
		case 11:
			return -479775696 /* GXTEntry: "Cigarette Cards Prominent Americans" */;
		default:
			break;
	}
	return 0;
}

int func_1185(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_1186(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

bool func_1187(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

int func_1188(int iParam0)
{
	switch (iParam0)
	{
		case 444160793: /* GXTEntry: "Perfect Squirrel Carcass" */
			return 1;
		case -1969404854: /* GXTEntry: "Perfect Cardinal Carcass" */
			return 1;
		case 1761263432: /* GXTEntry: "Perfect Rat Carcass" */
			return 1;
		case -843795569: /* GXTEntry: "Perfect Woodpecker Carcass" */
			return 1;
		case -832850511: /* GXTEntry: "Perfect Chipmunk Carcass" */
			return 1;
		case -1464585113: /* GXTEntry: "Perfect Oriole Carcass" */
			return 1;
		case -1290897778: /* GXTEntry: "Perfect Robin Carcass" */
			return 1;
		case -100913452: /* GXTEntry: "Perfect Songbird Carcass" */
			return 1;
		case 313332607: /* GXTEntry: "Perfect Sparrow Carcass" */
			return 1;
		case -124539232: /* GXTEntry: "Perfect Toad Carcass" */
			return 1;
		case 59384454: /* GXTEntry: "Perfect Crow Carcass" */
			return 1;
		case 905173572: /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
			return 1;
		case 1432949803: /* GXTEntry: "Perfect Bat Carcass" */
			return 1;
		case -983831788: /* GXTEntry: "Perfect Blue Jay Carcass" */
			return 1;
		case -1882344824: /* GXTEntry: "Perfect Bullfrog Carcass" */
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1189(int iParam0)
{
	switch (iParam0)
	{
		case -1866642239: /* GXTEntry: "Perfect Rabbit Carcass" */
			return 1;
		case -935543049: /* GXTEntry: "Perfect Opossum Carcass" */
			return 1;
		case 102446365: /* GXTEntry: "Perfect Skunk Carcass" */
			return 1;
		case 924882045: /* GXTEntry: "Perfect Beaver Carcass" */
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1190(int iParam0)
{
	int iVar0;
	struct<11> Var1;
	int iVar95;

	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_1206(&iVar0, 0, iVar95, &Var1) && !func_1206(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(Var1))
		{
			func_1207(iVar0, &Var1);
			if (func_284(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

bool func_1191(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1192(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_1193(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1194(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_1195(var uParam0, int iParam1, int iParam2)
{
	*((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

void func_1196(var uParam0, int iParam1, int iParam2)
{
	*((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

void func_1197(var uParam0, int iParam1)
{
	int iVar0;

	if (func_2() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		(Global_26795.f_26[iParam1 /*120*/])->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_1195(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	(Global_36637.f_45.f_350.f_26[iParam1 /*120*/])->f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_1196(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
		iVar0++;
	}
}

void func_1198(int iParam0, int iParam1, int iParam2)
{
	if (func_2() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			Global_26795.f_26[iParam1 /*120*/] = (Global_26795.f_26[iParam1 /*120*/] || iParam0);
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		Global_36637.f_45.f_350.f_26[iParam1 /*120*/] = (Global_36637.f_45.f_350.f_26[iParam1 /*120*/] || iParam0);
	}
}

void func_1199(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

int func_1200(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (!func_1203(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_1070(iParam0) != -999503751)
		{
			func_1208(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_1070(iParam0) != -999503751)
	{
		func_1208(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1174(iParam0, 1);
	return 1;
}

void func_1201(int iParam0, var uParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_1202(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_0x93FFD92F05EC32FD(uParam0->f_3.f_1))
	{
		func_1209(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_1006(func_1210(iParam1), 1);
		if (uParam0->f_1 == -1)
		{
		}
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
	uParam0->f_2 = iParam4;
	*uParam0 = iParam1;
	uParam0->f_3 = 0;
	if (bParam3)
	{
		func_1211(uParam0);
	}
}

int func_1203(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1946804->f_2657.f_19)
	{
		if (iParam0 == &Global_1946804->f_2657[*uParam1])
		{
			return 1;
		}
		*uParam1++;
	}
	return 0;
}

int func_1204(int iParam0)
{
	switch (iParam0)
	{
		case -2061583405:
			return 2;
		case -1719060085:
			return 16;
		case -999503751:
			return 1;
		case -525676072:
			return 4;
		case 81053684:
			return 8;
		case -413129408:
			return 32;
		default:
			break;
	}
	return 0;
}

bool func_1205(var uParam0)
{
	return (Global_1946804->f_2657.f_26.f_6 && uParam0) != 0;
}

int func_1206(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	struct<4> Var1;
	int iVar5;

	if (func_71(iParam1) && !func_380(iParam1))
	{
		iVar0 = func_88(iParam1);
	}
	else
	{
		return 0;
	}
	func_272(uParam3);
	iVar5 = func_273(iParam2);
	if (!PED::_0x608BC6A6AACD5036(&Var1, iVar0, iVar5, 0))
	{
		return 0;
	}
	*iParam0 = Var1.f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && !ENTITY::_0x88AD6CC10D8D35B2(*iParam0))
	{
		return 0;
	}
	*uParam3 = ENTITY::GET_ENTITY_MODEL(*iParam0);
	uParam3->f_2 = ENTITY::_0xD21C7418C590BB40(*iParam0);
	uParam3->f_3 = ENTITY::_GET_ENTITY_CARRY_CONFIG(*iParam0);
	return 1;
}

void func_1207(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_276(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_277(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_1208(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = func_1212(iParam1);
	func_1213(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_1214(&(uParam0->f_26), iVar1);
		if (func_1215(uParam0->f_26, &iVar0))
		{
			func_1216(iVar0, iVar1);
		}
	}
}

void func_1209(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_1217(&(uParam0->f_3));
}

int func_1210(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_954(iParam0, 1, 0) };
	return func_1007(Var0.f_4);
}

void func_1211(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_1218(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

var func_1212(int iParam0)
{
	return &(Global_1946804->f_2657.f_26.f_7[iParam0]);
}

void func_1213(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = &Global_1946804->f_2657.f_26.f_7[iParam0];
	Global_1946804->f_2657.f_26.f_7[iParam0] = &Global_1946804->f_2657.f_26.f_7[iParam1];
	Global_1946804->f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_1214(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_1209(uParam0->f_1[iParam1 /*5*/]);
	*(uParam0->f_1[iParam1 /*5*/]) = { *(uParam0->f_1[*uParam0 /*5*/]) };
}

int func_1215(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1946804->f_2657.f_19)
	{
		if (&Global_1946804->f_2657.f_26.f_7[*uParam1] == iParam0)
		{
			return 1;
		}
		*uParam1++;
	}
	return 0;
}

void func_1216(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_1217(var uParam0)
{
	if (*uParam0 && PED::_0x93FFD92F05EC32FD(uParam0->f_1))
	{
		PED::_0x13E7320C762F0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_1218(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_1219(func_1117());
	if (*uParam0)
	{
		func_1217(uParam0);
	}
	uParam0->f_1 = PED::_0xF6D9E1F3560CBF8E(iVar0, uParam1, 0, func_2() != -1, iParam2);
	*uParam0 = 1;
}

int func_1219(int iParam0)
{
	if (func_2() == -1)
	{
		switch (iParam0)
		{
			case -2125499975:
				return 0;
			case -449205311:
				return 0;
			case 1160113249:
				return 0;
			default:
				break;
		}
		return 0;
	}
	switch (iParam0)
	{
		case 2026485318:
			return 0;
		case 24043185:
			return 1;
		default:
			break;
	}
	return 0;
}

