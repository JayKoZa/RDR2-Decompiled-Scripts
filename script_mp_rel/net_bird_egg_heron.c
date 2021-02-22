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
	float fLocal_14 = 0f;
	float fLocal_15 = 0f;
	vector3 vLocal_16 = { 0f, 0f, 0f };
	vector3 vLocal_19 = { 0f, 0f, 0f };
	int iLocal_22 = 0;
	var uLocal_23 = 0;
	int iLocal_24[5] = { 0, 0, 0, 0, 0 };
	int iLocal_30[5] = { 0, 0, 0, 0, 0 };
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	var uLocal_40 = 0;
	bool bLocal_41 = false;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = -1;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 10;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	uLocal_23 = ScriptParam_0;
	iLocal_22 = ScriptParam_0.f_1;
	if (func_1() == -1)
	{
	}
	else
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		if (func_3(func_2(0)) != 7)
		{
		}
		else
		{
			func_4(&uLocal_42);
		}
	}
	if (func_1() == -1)
	{
		if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		{
			func_4(&uLocal_42);
		}
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_22))
	{
		func_4(&uLocal_42);
	}
	func_5(&uLocal_42, joaat("COLLECTIBLE_EGG_HERON"), joaat("PROVISION_HERON_EGG"), joaat("MP005_S_BDEG_HERONNEST01X"), joaat("MP005_S_BDEG_HERON_EGG01X"), 8, 1);
	while (func_6(&uLocal_42))
	{
		if (func_7())
		{
			func_4(&uLocal_42);
		}
		if (func_8(&uLocal_42))
		{
			func_4(&uLocal_42);
		}
		func_9(&uLocal_42);
		BUILTIN::WAIT(0);
	}
	func_4(&uLocal_42);
}

int func_1()
{
	return Global_1572887.f_13;
}

struct<2> func_2(int iParam0)
{
	return Global_1900736.f_1[iParam0 /*2*/];
}

int func_3(var uParam0, var uParam1)
{
	return uParam0;
}

void func_4(var uParam0)
{
	int iVar0;
	int iVar1;

	func_10(0);
	func_11(&(uParam0->f_14));
	if (iLocal_39 != iVar0)
	{
		TASK::_0x5758B1EE0C3FD4AC(iLocal_39, 0);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_2))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_2));
	}
	iVar1 = 0;
	while (iVar1 < func_12(&(uParam0->f_3)))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_24[iVar1]))
		{
			func_13(iLocal_24[iVar1], iLocal_24[iVar1], 0);
		}
		iVar1++;
	}
	if (func_14(Global_1212893[*uParam0 /*2251*/][uParam0->f_13 /*9*/], 2))
	{
		func_15(&(Global_1212893[*uParam0 /*2251*/][uParam0->f_13 /*9*/]), 2);
	}
	func_16(&(uParam0->f_14));
	SCRIPTS::_0xE7282390542F570D(uLocal_23);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_5(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	*uParam0 = 5;
	vLocal_16 = { TASK::_GET_SCENARIO_POINT_COORDS(iLocal_22, true) };
	vLocal_19 = { TASK::_GET_SCENARIO_POINT_COORDS(iLocal_22, true) };
	uParam0->f_4 = iParam6;
	uParam0->f_13 = iParam5;
	iLocal_36 = iParam3;
	iLocal_37 = iParam4;
	uParam0->f_3 = iParam2;
	uParam0->f_11 = iParam1;
	uParam0->f_12 = 1;
}

bool func_6(var uParam0)
{
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		func_4(uParam0);
		return false;
	}
	return true;
}

bool func_7()
{
	return false;
}

bool func_8(var uParam0)
{
	switch (uParam0->f_4)
	{
		case 1:
			func_17(uParam0);
			break;
		case 0:
			func_18(uParam0);
			break;
	}
	return false;
}

int func_9(var uParam0)
{
	var uVar0;

	switch (uParam0->f_4)
	{
		case 0:
		case 1:
			if (func_19(uParam0))
			{
				func_10(1);
				func_20(uParam0->f_11, &uVar0);
				func_10(0);
				func_16(&(uParam0->f_14));
				uParam0->f_4 = -1;
				return 1;
			}
			break;
	}
	return 0;
}

void func_10(bool bParam0)
{
	if (bParam0)
	{
		func_21(0, 6);
	}
	else
	{
		func_22(0, 6, 0);
	}
}

void func_11(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_8))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_8);
	}
}

int func_12(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		switch (*uParam0)
		{
			case joaat("PROVISION_VULTURE_EGG"):
				return 1;
			case joaat("PROVISION_LOON_EGG"):
				return 3;
			case joaat("PROVISION_DUCK_EGG"):
				return 5;
			case joaat("PROVISION_GOOSE_EGG"):
				return 4;
			case joaat("PROVISION_HERON_EGG"):
				return 1;
			case joaat("PROVISION_EGRET_EGG"):
				return 1;
			case joaat("PROVISION_EAGLE_EGG"):
				return 1;
			case joaat("PROVISION_HAWK_EGG"):
				return 1;
			case joaat("PROVISION_SPOONBILL_EGG"):
				return 1;
			case joaat("PROVISION_CONDOR_EGG"):
				return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_13(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<2> Var1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ITEMSET::IS_ITEMSET_VALID(Global_1297612.f_32) && ITEMSET::IS_IN_ITEMSET(iParam0, Global_1297612.f_32))
	{
		ITEMSET::REMOVE_FROM_ITEMSET(iParam0, Global_1297612.f_32);
	}
	PLAYER::_0x9DAE1380CC5C6451(PLAYER::PLAYER_ID(), iParam0);
	PLAYER::_0xDC5E09D012D759C4(iParam0, iParam1, iParam2);
	Var1.f_1 = -1082130432;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1297612[iVar0 /*2*/]) && Global_1297612[iVar0 /*2*/] == iParam0)
		{
			MISC::_COPY_MEMORY(&(Global_1297612[iVar0 /*2*/]), &Var1, 2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_14(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_15(var uParam0, int iParam1)
{
	func_23(uParam0, iParam1);
}

void func_16(var uParam0)
{
	func_24(uParam0);
	func_25(&(uParam0->f_7), 1);
}

void func_17(var uParam0)
{
	bool bVar0;
	int iVar1;

	if (func_26(uParam0) > 4)
	{
		func_27(&iLocal_38);
	}
	bVar0 = (func_28(uParam0) && !func_19(uParam0));
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_38))
	{
		if (!DECORATOR::DECOR_EXIST_ON(iLocal_38, "EggBroken"))
		{
			func_29(&(uParam0->f_14), vLocal_16, bVar0, 1, 1, 0);
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < Global_17411.f_2966.f_1)
		{
			if (uParam0->f_3 == Global_17411.f_2966.f_1[iVar1 /*5*/].f_4)
			{
				if (func_30(Global_35, Global_17411.f_2966.f_1[iVar1 /*5*/].f_1, 50f, 1))
				{
					if (!Global_17411.f_2966.f_1[iVar1 /*5*/])
					{
						Global_17411.f_2966.f_1[iVar1 /*5*/] = 1;
						func_31("COLLECTIBLE_MAP_BIRD_EGG_SHOT", 10000, 0, 0, 0, 1);
					}
				}
			}
			iVar1++;
		}
	}
	if (func_32(Global_1296859.f_8, vLocal_16, 1) < 2f)
	{
		func_33(&(uParam0->f_14.f_6));
	}
	if (func_14(Global_1212893[*uParam0 /*2251*/][uParam0->f_13 /*9*/], 4))
	{
		func_34(iLocal_38, 0);
		func_35(uParam0, 9);
		func_15(&(Global_1212893[*uParam0 /*2251*/][uParam0->f_13 /*9*/]), 4);
	}
	else if (func_14(Global_1212893[*uParam0 /*2251*/][uParam0->f_13 /*9*/], 8))
	{
		func_34(iLocal_38, 1);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_38))
		{
			func_13(iLocal_38, iLocal_38, 0);
		}
		func_35(uParam0, 12);
		func_15(&(Global_1212893[*uParam0 /*2251*/][uParam0->f_13 /*9*/]), 8);
	}
	switch (func_26(uParam0))
	{
		case 0:
			func_36(&(uParam0->f_14.f_7), vLocal_16, 1.5f, 1, 319, 0);
			func_37(uParam0);
			func_35(uParam0, 1);
			break;
		case 1:
			if (func_38(uParam0))
			{
				func_35(uParam0, 2);
			}
			break;
		case 2:
			if (func_28(uParam0))
			{
				bLocal_41 = true;
			}
			else
			{
				bLocal_41 = false;
			}
			if (bLocal_41)
			{
				if (func_39(uParam0))
				{
					func_35(uParam0, 3);
				}
			}
			else
			{
				func_35(uParam0, 13);
			}
			break;
		case 3:
			func_35(uParam0, 4);
			break;
		case 4:
			func_40(&(uParam0->f_3));
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_38))
			{
				if (!PLAYER::_0x0E6846476906C9DD(PLAYER::PLAYER_ID(), iLocal_38))
				{
					func_41(iLocal_38, iLocal_38, 0);
					MAP::_0x7563CBCA99253D1A(iLocal_38, joaat("BLIP_MP_ROLE_COLLECTOR_ILO"));
					func_35(uParam0, 5);
				}
			}
			break;
		case 5:
			if (uParam0->f_11 != joaat("COLLECTIBLE_EGG_CONDOR"))
			{
				if (func_42())
				{
					func_13(iLocal_38, iLocal_38, 0);
					func_35(uParam0, 11);
				}
				if (func_32(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), vLocal_16, 0) < 10f)
				{
					func_35(uParam0, 6);
				}
			}
			else
			{
				func_35(uParam0, 9);
			}
			break;
		case 6:
			func_35(uParam0, 7);
			break;
		case 7:
			if (func_42())
			{
				func_13(iLocal_38, iLocal_38, 0);
				func_35(uParam0, 11);
			}
			if (func_32(Global_34, vLocal_16, 0) < 8f)
			{
				func_35(uParam0, 8);
			}
			break;
		case 8:
			if (func_42())
			{
				func_13(iLocal_38, iLocal_38, 0);
				func_35(uParam0, 11);
			}
			break;
		case 11:
			if (!DECORATOR::DECOR_GET_BOOL(iLocal_38, "EggBroken"))
			{
				func_43(*uParam0, uParam0->f_13, GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
			}
			else
			{
				func_44(*uParam0, uParam0->f_13, GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
			}
			break;
		case 9:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_24[0]))
			{
				ENTITY::_0xF41E2979D5BC5370(iLocal_37);
				iLocal_24[0] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_37, vLocal_16, false, false, false, true);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_24[0]))
			{
				if (!TASK::_0x0CCFE72B43C9CF96(iLocal_24[0]))
				{
					if (!uParam0->f_23)
					{
						PHYSICS::ACTIVATE_PHYSICS(iLocal_24[0]);
						TASK::_0x78B4567E18B54480(iLocal_24[0]);
						func_13(iLocal_38, iLocal_38, 0);
						func_41(iLocal_24[0], iLocal_24[0], 0);
						MAP::_0x7563CBCA99253D1A(iLocal_24[0], joaat("BLIP_MP_ROLE_COLLECTOR_ILO"));
						ENTITY::_0x5826EFD6D73C4DE5(iLocal_24[0]);
						func_15(&(Global_1212893[*uParam0 /*2251*/][uParam0->f_13 /*9*/]), 4);
						uParam0->f_23 = 1;
					}
				}
				else
				{
					TASK::_0x8E1DDE26D270CC5E(iLocal_24[0], 1);
					func_35(uParam0, 10);
				}
				if (uParam0->f_23)
				{
					func_45(uParam0);
				}
			}
			break;
		case 10:
			func_45(uParam0);
			func_35(uParam0, 13);
			break;
		case 12:
			PERSISTENCE::_0x8245C1F3262F4AC2(iLocal_22);
			MISC::_0x082C043C7AFC3747(iLocal_39, 0);
			break;
		case 13:
			break;
	}
}

void func_18(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	bVar0 = (func_28(uParam0) && !func_19(uParam0));
	if (func_46(uParam0, &iLocal_24) > 0)
	{
		func_29(&(uParam0->f_14), vLocal_16, bVar0, 1, 1, 0);
	}
	if (func_32(Global_1296859.f_8, vLocal_16, 1) < 3.5f)
	{
		func_33(&(uParam0->f_14.f_6));
	}
	switch (func_26(uParam0))
	{
		case 0:
			func_36(&(uParam0->f_14.f_7), vLocal_16, 1.5f, 1, 319, 0);
			func_47(&(uParam0->f_14), vLocal_16);
			func_48(uParam0);
			func_35(uParam0, 1);
			break;
		case 1:
			if (func_49(uParam0))
			{
				func_35(uParam0, 2);
			}
			break;
		case 2:
			if (func_28(uParam0))
			{
				bLocal_41 = true;
			}
			else
			{
				bLocal_41 = false;
			}
			if (bLocal_41)
			{
				if (func_50(uParam0))
				{
					func_35(uParam0, 3);
				}
			}
			else
			{
				func_35(uParam0, 13);
			}
			break;
		case 3:
			func_35(uParam0, 4);
			break;
		case 4:
			func_40(&(uParam0->f_3));
			if (func_51(&iLocal_24, &iLocal_30, func_12(&(uParam0->f_3)), vLocal_16, 5f) > 0)
			{
				iVar1 = 0;
				while (iVar1 < func_12(&(uParam0->f_3)))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_24[iVar1]))
					{
						OBJECT::_0x46CBCF0E98A4E156(iLocal_24[iVar1], 1);
						if (!PLAYER::_0x0E6846476906C9DD(PLAYER::PLAYER_ID(), iLocal_24[iVar1]))
						{
							func_41(iLocal_24[iVar1], iLocal_24[iVar1], 0);
						}
						MAP::_0x7563CBCA99253D1A(iLocal_24[iVar1], joaat("BLIP_MP_ROLE_COLLECTOR_ILO"));
					}
					iVar1++;
				}
			}
			iVar2 = TASK::_0x96C6ED22FB742C3E(iLocal_39, &(uParam0->f_25));
			if (iVar2 > 0 && iVar2 <= 10)
			{
				iVar3 = 0;
				while (iVar3 < iVar2)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_25[iVar3 /*2*/]))
					{
						OBJECT::_0x46CBCF0E98A4E156(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(uParam0->f_25[iVar3 /*2*/]), 1);
						if (!PLAYER::_0x0E6846476906C9DD(PLAYER::PLAYER_ID(), uParam0->f_25[iVar3 /*2*/]))
						{
							func_41(uParam0->f_25[iVar3 /*2*/], uParam0->f_25[iVar3 /*2*/], 0);
						}
						MAP::_0x7563CBCA99253D1A(uParam0->f_25[iVar3 /*2*/], joaat("BLIP_MP_ROLE_COLLECTOR_ILO"));
					}
					iVar3++;
				}
			}
			if (func_46(uParam0, &iLocal_24) == func_12(&(uParam0->f_3)))
			{
				func_35(uParam0, 5);
			}
			break;
		case 5:
			func_35(uParam0, 6);
			break;
		case 6:
			func_35(uParam0, 7);
			break;
		case 7:
			if (func_32(Global_34, vLocal_16, 0) < 8f)
			{
				func_35(uParam0, 8);
			}
			break;
		case 8:
			break;
		case 9:
			func_35(uParam0, 11);
			break;
		case 10:
			func_35(uParam0, 13);
			break;
		case 11:
			func_35(uParam0, 13);
			break;
		case 12:
			MISC::_0x082C043C7AFC3747(iLocal_39, 0);
			break;
		case 13:
			break;
	}
}

bool func_19(var uParam0)
{
	if (uParam0->f_4 == 0)
	{
		if (func_32(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_5, 1) <= 1f)
		{
			return (func_52(uParam0) || func_53(uParam0));
		}
	}
	return (func_52(uParam0) || func_53(uParam0));
}

int func_20(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0.f_1 = 10;
	func_54(&Var0, joaat("LOOT_TYPE_NORMAL"));
	return func_55(iParam0, &Var0, uParam1, 0, 0);
}

void func_21(int iParam0, int iParam1)
{
	if (!func_56(iParam0, iParam1))
	{
		MISC::SET_BIT(&(Global_1071686.f_22538.f_385[iParam0 /*11*/]), iParam1);
		Global_1071686.f_22538.f_385[iParam0 /*11*/].f_1[iParam1] = SCRIPTS::GET_ID_OF_THIS_THREAD();
		func_57();
	}
}

void func_22(int iParam0, int iParam1, bool bParam2)
{
	if (func_56(iParam0, iParam1) && (!bParam2 || Global_1071686.f_22538.f_385[iParam0 /*11*/].f_1[iParam1] == SCRIPTS::GET_ID_OF_THIS_THREAD()))
	{
		MISC::CLEAR_BIT(&(Global_1071686.f_22538.f_385[iParam0 /*11*/]), iParam1);
		Global_1071686.f_22538.f_385[iParam0 /*11*/].f_1[iParam1] = 0;
		func_57();
	}
}

void func_23(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_24(var uParam0)
{
	if (uParam0->f_5 != -1)
	{
		AUDIO::_STOP_SOUND_WITH_NAME("collectible_lure", "RDRO_Collectible_Sounds_Travelling_Saleswoman");
		AUDIO::RELEASE_SOUND_ID(uParam0->f_5);
		PAD::STOP_PAD_SHAKE(0);
		uParam0->f_5 = -1;
	}
	AUDIO::_0x531A78D6BF27014B("RDRO_Collectible_Sounds_Travelling_Saleswoman");
}

void func_25(var uParam0, int iParam1)
{
	if (func_58(uParam0))
	{
		GRAPHICS::_0x9CF1836C03FB67A2(uParam0, iParam1);
	}
}

int func_26(var uParam0)
{
	return uParam0->f_1;
}

void func_27(int iParam0)
{
	if (func_59(*iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (!DECORATOR::DECOR_EXIST_ON(*iParam0, "EggBroken"))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(*iParam0))
				{
					if (WEAPON::_0x9E2D5D6BC97A5F1E(*iParam0, joaat("WEAPON_RIFLE_VARMINT"), 10000) || func_60())
					{
						DECORATOR::DECOR_SET_BOOL(*iParam0, "EggBroken", false);
					}
					else
					{
						DECORATOR::DECOR_SET_BOOL(*iParam0, "EggBroken", true);
						func_61(818, 1);
					}
				}
			}
		}
	}
}

bool func_28(var uParam0)
{
	struct<5> Var0;

	Var0 = { func_62(uParam0->f_3, 0, 1) };
	if (func_63(uParam0->f_3, &Var0, 1, 0, 0, -1, 0))
	{
		return false;
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_22))
	{
		if (PERSISTENCE::_0xFB7CF1DE938A3E22(iLocal_22))
		{
			return false;
		}
	}
	return true;
}

void func_29(var uParam0, vector3 vParam1, bool bParam4, bool bParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;

	if (!func_64(joaat("KIT_COLLECTORS_BAG"), 1))
	{
		return;
	}
	if (func_65(0))
	{
		return;
	}
	if (func_66())
	{
		return;
	}
	if (Global_1048576)
	{
		return;
	}
	if (func_67())
	{
		return;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())) && TASK::_0xEC7E480FF8BD0BED(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		return;
	}
	if (!bParam4 && uParam0->f_1 == 0)
	{
		return;
	}
	if (!func_68(Global_1212889) && MISC::GET_DISTANCE_BETWEEN_COORDS(Global_1212889, vParam1, true) <= 5f)
	{
		bVar0 = true;
	}
	if (bVar0 && uParam0->f_1 == 0)
	{
		return;
	}
	fVar1 = func_32(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), vParam1, 1);
	fVar2 = 10f;
	fVar2 = (fVar2 * (1f + func_69()));
	switch (uParam0->f_1)
	{
		case 0:
			if (fVar1 < fVar2)
			{
				if (bParam5)
				{
					if (AUDIO::_0xD9130842D7226045("RDRO_Collectible_Sounds_Travelling_Saleswoman", 0))
					{
						uParam0->f_5 = AUDIO::GET_SOUND_ID();
						if (func_70(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 1, 0) != joaat("WEAPON_KIT_METAL_DETECTOR"))
						{
							AUDIO::_0xDCF5BA95BBF0FABA(uParam0->f_5, "collectible_lure", vParam1, "RDRO_Collectible_Sounds_Travelling_Saleswoman", 0, 0, iParam6);
						}
						func_71(uParam0, 1);
					}
				}
				else
				{
					func_71(uParam0, 1);
				}
			}
			break;
		case 1:
			iVar3 = BUILTIN::FLOOR((500f * ((fVar2 - fVar1) / fVar2)));
			iVar4 = BUILTIN::FLOOR((256f * ((fVar2 - fVar1) / fVar2)));
			if (iVar3 < 0)
			{
				iVar3 = MISC::ABSI(iVar3);
			}
			if (iVar3 > 9999)
			{
				iVar3 = 9999;
			}
			if (fVar1 < 3f && bParam7)
			{
				func_72(250);
			}
			PAD::SET_PAD_SHAKE(0, iVar3, iVar4);
			func_73(&(uParam0->f_2));
			func_71(uParam0, 2);
			break;
		case 2:
			if ((fVar1 >= (fVar2 + 5f) || !bParam4) || bVar0)
			{
				if (bParam5)
				{
					func_24(uParam0);
				}
				func_71(uParam0, 0);
			}
			else if (func_74(&(uParam0->f_2)) >= 2f)
			{
				func_71(uParam0, 1);
			}
			else if (fVar1 < 3f && bParam7)
			{
				func_72(250);
			}
			break;
	}
}

bool func_30(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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
				return true;
			}
		}
	}
	return false;
}

var func_31(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	uVar15 = UIFEED::_SHOW_TOOLTIP(&Var0, &Var13, iParam5);
	return uVar15;
}

float func_32(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_33(var uParam0)
{
	if (AUDIO::_0xD9130842D7226045("RDRO_Collectible_Sounds_Travelling_Saleswoman", 0))
	{
		if (HUD::_UIPROMPT_IS_CONTROL_ACTION_ACTIVE(joaat("INPUT_LOOT3")))
		{
			if (!*uParam0)
			{
				AUDIO::PLAY_SOUND_FRONTEND("collectible_found", "RDRO_Collectible_Sounds_Travelling_Saleswoman", true, 0);
				*uParam0 = 1;
			}
		}
		else if (*uParam0)
		{
			*uParam0 = 0;
		}
	}
}

void func_34(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!bParam1)
		{
			MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), ENTITY::GET_ENTITY_COORDS(iParam0, true, false) + Vector(1E-07f, 0f, 0f), 1, true, joaat("WEAPON_RIFLE_VARMINT"), 0, false, false, -1f, false);
		}
		else
		{
			MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), ENTITY::GET_ENTITY_COORDS(iParam0, true, false) + Vector(1E-07f, 0f, 0f), 1, true, joaat("WEAPON_REPEATER_CARBINE"), 0, false, false, -1f, false);
		}
	}
}

void func_35(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_36(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_58(uParam0))
	{
		*uParam0 = GRAPHICS::_0xFA50F79257745E74(vParam1, fParam4, iParam5, iParam6, iParam7);
		if (func_58(uParam0))
		{
		}
	}
}

void func_37(var uParam0)
{
	STREAMING::REQUEST_MODEL(iLocal_36, false);
	STREAMING::REQUEST_MODEL(iLocal_37, false);
}

bool func_38(var uParam0)
{
	if (STREAMING::HAS_MODEL_LOADED(iLocal_36) && STREAMING::HAS_MODEL_LOADED(iLocal_37))
	{
		return true;
	}
	return false;
}

bool func_39(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_38))
	{
		iLocal_38 = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_36, vLocal_19, false, true, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_38))
	{
		return false;
	}
	return true;
}

void func_40(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		switch (*uParam0)
		{
			case joaat("PROVISION_VULTURE_EGG"):
				iLocal_30[iVar0] = joaat("MP005_S_BDEG_VULTURE_EGG01X");
				break;
			case joaat("PROVISION_LOON_EGG"):
				iLocal_30[iVar0] = joaat("MP005_S_BDEG_LOON_EGG01X");
				break;
			case joaat("PROVISION_DUCK_EGG"):
				iLocal_30[iVar0] = joaat("MP005_S_BDEG_DUCK_EGG01X");
				break;
			case joaat("PROVISION_GOOSE_EGG"):
				iLocal_30[iVar0] = joaat("MP005_S_BDEG_GOOSE_EGG01X");
				break;
			case joaat("PROVISION_EAGLE_EGG"):
				iLocal_30[iVar0] = joaat("MP005_S_BDEG_EAGLENEST01X");
				break;
			case joaat("PROVISION_EGRET_EGG"):
				iLocal_30[iVar0] = joaat("MP005_S_BDEG_EGRETNEST01X");
				break;
			case joaat("PROVISION_HAWK_EGG"):
				iLocal_30[iVar0] = joaat("MP005_S_BDEG_HAWKNEST01X");
				break;
			case joaat("PROVISION_CONDOR_EGG"):
				iLocal_30[iVar0] = joaat("MP005_S_BDEG_CONDOR_EGG01X");
				break;
			case joaat("PROVISION_HERON_EGG"):
				iLocal_30[iVar0] = joaat("MP005_S_BDEG_HERONNEST01X");
				break;
			case joaat("PROVISION_SPOONBILL_EGG"):
				iLocal_30[iVar0] = joaat("MP005_S_BDEG_SPOONBILLNEST01X");
				break;
		}
		iVar0++;
	}
}

int func_41(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(Global_1297612.f_32))
	{
		Global_1297612.f_32 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (!ITEMSET::IS_IN_ITEMSET(iParam0, Global_1297612.f_32))
	{
		ITEMSET::ADD_TO_ITEMSET(iParam0, Global_1297612.f_32);
	}
	if (!func_75(iParam0))
	{
		PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), iParam0, 0);
		PLAYER::_0x6ECFC621A168424C(iParam0, iParam1, iParam2, 0);
		PLAYER::_0x907B16B3834C69E2(iParam0, 500f);
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_1297612[iVar0 /*2*/]))
		{
			Global_1297612[iVar0 /*2*/] = iParam0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_42()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_38))
	{
		return DECORATOR::DECOR_EXIST_ON(iLocal_38, "EggBroken");
	}
	return false;
}

void func_43(var uParam0, var uParam1, int iParam2)
{
	var uVar0;
	struct<7> Var1;
	struct<19> Var8;

	uVar0 = func_76(0, 8);
	Var1.f_4 = 1;
	Var1 = 42;
	Var1.f_5 = uParam0;
	Var1.f_6 = uParam1;
	Var8.f_12 = -1;
	Var8.f_12.f_1 = -1;
	Var8.f_14 = 255;
	Var8.f_15 = 255;
	Var8.f_14 = Global_1296859.f_154[Global_1296859];
	Var8 = 0;
	Var8.f_1 = PLAYER::GET_PLAYER_INDEX();
	Var8.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	func_78(Var8, func_77(Global_35, 0f, 0f, 0f, 150f, 150f, 150f, joaat("VOLSPHERE"), 0, 8), 0, 0);
	func_79(&Var1, &uVar0);
}

void func_44(var uParam0, var uParam1, int iParam2)
{
	var uVar0;
	struct<7> Var1;
	struct<19> Var8;

	uVar0 = func_76(0, 8);
	Var1.f_4 = 1;
	Var1 = 43;
	Var1.f_5 = uParam0;
	Var1.f_6 = uParam1;
	Var8.f_12 = -1;
	Var8.f_12.f_1 = -1;
	Var8.f_14 = 255;
	Var8.f_15 = 255;
	Var8.f_14 = Global_1296859.f_154[Global_1296859];
	Var8 = 0;
	Var8.f_1 = PLAYER::GET_PLAYER_INDEX();
	Var8.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	func_78(Var8, func_77(Global_35, 0f, 0f, 0f, 150f, 150f, 150f, joaat("VOLSPHERE"), 0, 8), 0, 0);
	func_79(&Var1, &uVar0);
}

void func_45(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	if (ENTITY::DOES_ENTITY_EXIST(iLocal_24[0]))
	{
		if (!uParam0->f_24)
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_24[0], true, false) };
			vVar3 = { vVar0 };
			if (func_80(&vVar3, 50, 10, 0, 0))
			{
				if (MISC::ABSF((vVar3.z - vVar0.z)) <= 0.025f)
				{
					PHYSICS::SET_DAMPING(iLocal_24[0], 0, 100000f);
					PHYSICS::SET_DAMPING(iLocal_24[0], 4, 100000f);
					uParam0->f_24 = 1;
				}
			}
		}
		else
		{
			vVar6 = { ENTITY::GET_ENTITY_VELOCITY(iLocal_24[0], -1) };
			vVar9 = { vVar6 };
			vVar9 = { vVar9 * Vector(0.75f, 0.75f, 0.75f) };
			if (MISC::ABSF(vVar6.x) < vVar9.x)
			{
				vVar9.x = vVar6.x;
			}
			if (MISC::ABSF(vVar6.y) < vVar9.y)
			{
				vVar9.f_1 = vVar6.y;
			}
			if (MISC::ABSF(vVar6.z) < vVar9.z)
			{
				vVar9.f_2 = vVar6.z;
			}
			if (func_30(vVar9, 0f, 0f, 0f, 0.05f, 1))
			{
				vVar9 = { 0f, 0f, 0f };
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_24[0], true);
			}
			else
			{
				ENTITY::SET_ENTITY_VELOCITY(iLocal_24[0], vVar9);
			}
		}
	}
}

int func_46(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < func_12(&(uParam0->f_3)))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam1)[iVar1]))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_47(var uParam0, vector3 vParam1)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_8))
	{
		uParam0->f_8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, 0f, 0f, 0f, 2f, 2f, 2f, "colleactable restriction volume");
		POPULATION::_0xB56D41A694E42E86(uParam0->f_8, 6, 0, 0, -1, -1, 0);
	}
}

void func_48(var uParam0)
{
	TASK::_0x73F0D0327BFA0812(uLocal_40);
}

bool func_49(var uParam0)
{
	if (TASK::_0x5E5D96BE25E9DF68(uLocal_40))
	{
		return true;
	}
	return false;
}

bool func_50(var uParam0)
{
	var uVar0;

	if (!ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		if (bLocal_41)
		{
			iLocal_39 = TASK::_0x5B4BBE80AD5972DC(uLocal_40, vLocal_16, 0f, 0, &uVar0, -1);
		}
		else
		{
			iLocal_39 = TASK::_0x5B4BBE80AD5972DC(uLocal_40, vLocal_16, 0f, 1, &uVar0, -1);
		}
		return true;
	}
	return false;
}

int func_51(int iParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6)
{
	int iVar0;
	int iVar1;

	iVar0 = VOLUME::_CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	iVar1 = func_81(iParam0, iParam1, iVar0, iParam2);
	func_82(iVar0);
	return iVar1;
}

int func_52(var uParam0)
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 89266752))
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_22))
		{
			PERSISTENCE::_0x8245C1F3262F4AC2(iLocal_22);
		}
		func_83(*uParam0, uParam0->f_13, GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
		return 1;
	}
	return 0;
}

int func_53(var uParam0)
{
	if (func_14(Global_1212893[*uParam0 /*2251*/][uParam0->f_13 /*9*/], 2))
	{
		return 1;
	}
	return 0;
}

void func_54(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	if (iParam1 == 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (uParam0->f_1[iVar1] == iParam1)
		{
			return;
		}
		switch (iParam1)
		{
			case joaat("LOOTER_PED_IS_FEMALE"):
			case joaat("LOOTER_PED_IS_MALE"):
				if (uParam0->f_1[iVar1] == joaat("LOOTER_PED_IS_MALE") || uParam0->f_1[iVar1] == joaat("LOOTER_PED_IS_FEMALE"))
				{
					bVar0 = true;
				}
				break;
			case joaat("LOOT_TYPE_NORMAL"):
			case joaat("LOOT_TYPE_SKINNING"):
				if (uParam0->f_1[iVar1] == joaat("LOOT_TYPE_NORMAL") || uParam0->f_1[iVar1] == joaat("LOOT_TYPE_SKINNING"))
				{
					bVar0 = true;
				}
				break;
			case joaat("FISHING_RESULT_RUINED"):
			case joaat("FISHING_RESULT_NORMAL"):
			case joaat("FISHING_RESULT_LEGENDARY"):
				if ((uParam0->f_1[iVar1] == joaat("FISHING_RESULT_NORMAL") || uParam0->f_1[iVar1] == joaat("FISHING_RESULT_RUINED")) || uParam0->f_1[iVar1] == joaat("FISHING_RESULT_LEGENDARY"))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			uParam0->f_1[iVar1] = iParam1;
			return;
		}
		iVar1++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_55(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	var uVar0;
	struct<15> Var1;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	func_84(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_3.f_1 = 10;
	Var1 = iParam3;
	Var1.f_3 = { *uParam1 };
	Var1.f_2 = iParam4;
	func_85(uParam2, iParam0, Var1);
	return 1;
}

bool func_56(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1071686.f_22538.f_385[iParam0 /*11*/], iParam1);
}

void func_57()
{
	SCRIPTS::_0x20F4CB76689ACDBC(&(Global_1071686.f_21416.f_260));
}

bool func_58(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

bool func_59(int iParam0)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			switch (iVar0)
			{
				case joaat("MP005_S_BDEG_EAGLENEST01X"):
				case joaat("MP005_S_BDEG_CONDORNEST01X"):
				case joaat("MP005_S_BDEG_SPOONBILLNEST01X"):
				case joaat("MP005_S_BDEG_HERONNEST01X"):
				case joaat("MP005_S_BDEG_EGRETNEST01X"):
				case joaat("MP005_S_BDEG_HAWKNEST01X"):
					return true;
			}
		}
	}
	return false;
}

int func_60()
{
	int iVar0;

	if (func_87(func_86(Global_34, 1, 0, 0)))
	{
		iVar0 = WEAPON::_0x7E7B19A4355FEE13(Global_34, WEAPON::_0x6CA484C9A7377E4F(Global_34, 1));
		if (iVar0 == joaat("AMMO_ARROW_SMALL_GAME"))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_61(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_88(iParam0, &iVar0, &iVar1);
	if (!func_89(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_90(iVar0, iVar1);
}

struct<5> func_62(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_91(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_92(iParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_93(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_94(bParam1) };
			if (bParam2 && func_95(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_96(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_96(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_97(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
		case joaat("COACH"):
		case joaat("HORSE"):
			Var0.f_4 = 1782082944;
			break;
		case joaat("EMOTE"):
			Var0.f_4 = -1591664384;
			Var0 = { func_98(bParam1) };
			switch (func_99(iParam0))
			{
				case -1070622585:
					Var0.f_4 = -6796437;
					break;
				case -1057349201:
					Var0.f_4 = 1473261684;
					break;
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_100(iParam0, -1823706425))
			{
				Var0 = { func_93(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_100(iParam0, -1483207246))
			{
				Var0 = { func_93(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1911121386))
			{
				Var0 = { func_93(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_100(iParam0, -1653629781))
			{
				Var0 = { func_93(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1384535894);
			}
			break;
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
				Var28.f_9 = -1591664384;
				if (!func_101(Var0, &Var28, bParam1, 0, -1))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var28.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -718417579))
			{
				Var0.f_4 = -718417579;
			}
			else if (func_100(iParam0, -1653629781))
			{
				Var0 = { func_93(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1384535894);
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("CHARACTER"));
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

bool func_63(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	struct<4> Var0;
	struct<10> Var4;
	int iVar26;
	int iVar27;

	func_102(&iParam0);
	if (!func_103(iParam0, 0) && !func_105(func_104(iParam0), 2))
	{
		return false;
	}
	if (!bParam3 && func_106(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam3 = true;
	}
	if (func_107(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		Var0 = { func_94(0) };
		Var4.f_9 = -1591664384;
		if (!func_96(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
		{
			return false;
		}
		else if (func_97(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
		{
			return false;
		}
		if (func_95(iParam0, 1))
		{
			if (!func_96(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
			{
				return false;
			}
			else if (func_97(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
			{
				return false;
			}
		}
		return true;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_108(iParam0, uParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return false;
	}
	else if (iVar26 == 0)
	{
		return true;
	}
	iVar27 = func_109(iParam0, *uParam1, uParam1->f_4, bParam4, bParam3, iParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return true;
	}
	return false;
}

bool func_64(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_103(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_92(iParam0);
	switch (iVar0)
	{
		case joaat("WEAPON"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, false))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("AMMO"):
			if (!func_110(iParam0, 1))
			{
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_111(iParam0))
			{
				return true;
			}
			break;
	}
	return func_112(iParam0, 0, 0, 0) >= iParam1;
}

bool func_65(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715.f_20638;
	}
	return (Global_1915715.f_20638 || Global_1915715.f_22504.f_1);
}

bool func_66()
{
	return func_113() != -1;
}

bool func_67()
{
	return (Global_1952637.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1952637.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE"));
}

bool func_68(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

float func_69()
{
	return Global_1146212.f_2169[89 /*205*/].f_201;
}

int func_70(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

void func_71(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_72(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	Global_1896738.f_3948 = MISC::GET_GAME_TIMER();
	Global_1896738.f_3948.f_1 = iParam0;
}

void func_73(var uParam0)
{
	func_114(uParam0, 0f);
}

float func_74(var uParam0)
{
	if (!func_115(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_116(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_117() - uParam0->f_1);
}

bool func_75(int iParam0)
{
	struct<5> Var0;
	var uVar5;
	int iVar13;
	int iVar14;
	int iVar15;

	if (func_118() == 0)
	{
		return false;
	}
	if (!DATAFILE::_0x603AC35FD4602C76(func_118()))
	{
		return false;
	}
	Var0 = func_118();
	Var0.f_2 = 0;
	Var0.f_3 = 0;
	Var0.f_4 = 0;
	Var0.f_1 = 0;
	iVar13 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar14 = 0;
	while (iVar14 < 30)
	{
		Var0.f_1 = 0;
		Var0.f_3 = iVar14;
		Var0.f_2 = 0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 1;
			if (DATAFILE::_DATAFILE_GET_STRING(&uVar5, &Var0))
			{
				iVar15 = MISC::GET_HASH_KEY(&uVar5);
				if (iVar13 == iVar15)
				{
					return true;
				}
			}
		}
		iVar14++;
	}
	return false;
}

var func_76(int iParam0, int iParam1)
{
	return func_77(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("VOLCYLINDER"), iParam0, iParam1);
}

var func_77(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	SCRIPTS::_0xDE544B7EC0C187CC(&uVar0);
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return uVar0;
	}
	if (func_119() != 0)
	{
		iVar1 = PLAYER::PLAYER_ID();
		if (iVar1 >= 0 && iVar1 < 32)
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar1);
		}
		return uVar0;
	}
	iVar2 = 0;
	bVar3 = false;
	bVar4 = false;
	iVar5 = Global_1296859.f_10;
	iVar6 = Global_1296859.f_15;
	bVar7 = true;
	iVar9 = iParam10;
	if (BUILTIN::VMAG2(vParam6) < 1f)
	{
		bVar7 = false;
	}
	else
	{
		switch (iParam9)
		{
			case joaat("VOLCYLINDER"):
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_120());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_120());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_120());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_121(PLAYER::GET_PLAYER_TEAM(iVar5)));
	}
	if (iVar9 & 8 != 0 && iVar9 & 32768 != 0)
	{
		iVar9 |= 65536;
		iVar9 = (iVar9 - iVar9 & 40952);
	}
	if (iVar9 & 4 != 0)
	{
		if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iVar9 = (iVar9 - iVar9 & 4);
			iVar9 |= 0;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1296859.f_154[iVar2]))
		{
			iVar10 = Global_1296859.f_154[iVar2];
			bVar3 = false;
			bVar4 = false;
			if (iVar9 & 1 != 0 && iVar10 == iVar5)
			{
				bVar3 = true;
			}
			if (func_122(iVar2))
			{
				bVar3 = true;
			}
			iVar11 = PLAYER::GET_PLAYER_PED(iVar10);
			if (!bVar3)
			{
				if (iVar9 & 2 != 0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iVar11))
					{
						bVar3 = true;
					}
					else if (Global_1296859.f_88[iVar2])
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8192 != 0 && func_123(iVar2) != 1)
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 16384 != 0 && PED::_0xB655DB7582AEC805(iVar11))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 4 != 0 && !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar10))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8176 != 0)
				{
					switch (PLAYER::GET_PLAYER_TEAM(iVar10))
					{
						case -1:
							if (iVar9 & 16 != 0)
							{
								bVar4 = true;
							}
							break;
						case 0:
							if (iVar9 & 32 != 0)
							{
								bVar4 = true;
							}
							break;
						case 1:
							if (iVar9 & 64 != 0)
							{
								bVar4 = true;
							}
							break;
						case 2:
							if (iVar9 & 128 != 0)
							{
								bVar4 = true;
							}
							break;
						case 3:
							if (iVar9 & 256 != 0)
							{
								bVar4 = true;
							}
							break;
						case 4:
							if (iVar9 & 512 != 0)
							{
								bVar4 = true;
							}
							break;
						case 5:
							if (iVar9 & 1024 != 0)
							{
								bVar4 = true;
							}
							break;
						case 6:
							if (iVar9 & 2048 != 0)
							{
								bVar4 = true;
							}
							break;
						case 8:
							if (iVar9 & 4096 != 0)
							{
								bVar4 = true;
							}
							break;
					}
					if (!bVar4)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 32768 != 0)
				{
					if (GANG::_0x901E0DC25080C8B9(iVar10) != iVar6)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 65536 != 0)
				{
					if (!func_124(iVar10))
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3 && bVar7)
			{
				if (!VOLUME::_IS_POSITION_INSIDE_VOLUME(iVar8, ENTITY::GET_ENTITY_COORDS(iVar11, false, false)))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar2);
			}
		}
		iVar2++;
	}
	if (bVar7)
	{
		VOLUME::_DELETE_VOLUME(iVar8);
	}
	return uVar0;
}

void func_78(struct<19> Param0, var uParam19, bool bParam20, bool bParam21)
{
	struct<21> Var0;

	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam19))
	{
		return;
	}
	Param0 = 0;
	Param0.f_1 = PLAYER::PLAYER_ID();
	Param0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (!bParam20)
	{
		if (Param0.f_18)
		{
			if (bParam21)
			{
				Var0.f_12 = -1;
				Var0.f_12.f_1 = -1;
				Var0.f_14 = 255;
				Var0.f_15 = 255;
				Var0.f_20 = -1;
				Var0 = { Param0 };
				Var0.f_19 = uParam19;
				Var0.f_20 = Param0.f_2;
				func_125(&(Global_1071686.f_23044), Var0);
				return;
			}
		}
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param0, 19, 5, &uParam19);
}

void func_79(var uParam0, var uParam1)
{
	if (SCRIPTS::_0x179A6F0EE2E79026(uParam1))
	{
		uParam0->f_1 = Global_1296859.f_154[Global_1296859];
		SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 7, 18, uParam1);
	}
}

bool func_80(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_126(*uParam0, 0f, 0f, 0f))
	{
		return true;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, bParam3) && !bVar2)
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
	if (bParam4)
	{
		vVar4 = { *uParam0 };
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
		STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, bParam3) && !bVar3)
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
		return true;
	}
	if (bVar2 && bVar3)
	{
		return false;
	}
	uParam0->f_2 = uVar0;
	return true;
}

int func_81(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_0x886171A12F400B89(iParam2, iVar0, 3);
	if (iVar6 >= iParam3)
	{
	}
	iVar4 = 0;
	while (iVar4 < iVar6)
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar0);
		iVar2 = iVar1;
		if (ENTITY::IS_ENTITY_AN_OBJECT(iVar2))
		{
			iVar5 = 0;
			while (iVar5 < *iParam1)
			{
				if ((*iParam1)[iVar5] == 0)
				{
					(*iParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *iParam1;
				}
				else if (ENTITY::GET_ENTITY_MODEL(iVar2) == (*iParam1)[iVar5])
				{
					(*iParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *iParam1;
				}
				iVar5++;
			}
		}
		if (iVar3 >= iParam3)
		{
			ITEMSET::DESTROY_ITEMSET(iVar0);
			return iParam3;
		}
		iVar4++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar3;
}

void func_82(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

void func_83(var uParam0, var uParam1, int iParam2)
{
	var uVar0;
	struct<7> Var1;
	struct<19> Var8;

	if (iParam2 == 0)
	{
		iParam2 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	}
	if (!GANG::_0xD6F6ACF4392187FB(iParam2))
	{
	}
	uVar0 = func_127(iParam2);
	SCRIPTS::_0xD426E2E3288469D6(&uVar0, PLAYER::PLAYER_ID());
	Var1.f_4 = 1;
	Var1 = 41;
	Var1.f_5 = uParam0;
	Var1.f_6 = uParam1;
	Var8.f_12 = -1;
	Var8.f_12.f_1 = -1;
	Var8.f_14 = 255;
	Var8.f_15 = 255;
	Var8.f_14 = Global_1296859.f_154[Global_1296859];
	Var8 = 0;
	Var8.f_1 = PLAYER::GET_PLAYER_INDEX();
	Var8.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	func_78(Var8, func_77(Global_35, 0f, 0f, 0f, 300f, 300f, 300f, joaat("VOLSPHERE"), 0, 8), 0, 0);
	func_79(&Var1, &uVar0);
}

void func_84(var uParam0)
{
	func_54(uParam0, joaat("MULTIPLAYER_GAME"));
	if (func_128() == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		func_54(uParam0, joaat("LOOTER_PED_IS_MALE"));
	}
	else
	{
		func_54(uParam0, joaat("LOOTER_PED_IS_FEMALE"));
	}
}

void func_85(var uParam0, int iParam1, struct<15> Param2)
{
	int iVar0;
	struct<22> Var1;

	if (!func_129(uParam0))
	{
		return;
	}
	if (Global_1293346.f_2538 < 20)
	{
		Global_1293346.f_2538++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1293346.f_2538.f_1[iVar0 /*22*/] = { Global_1293346.f_2538.f_1[iVar0 + 1 /*22*/] };
			iVar0++;
		}
	}
	Var1.f_7.f_3.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	Global_1293346.f_2538.f_1[(Global_1293346.f_2538 - 1) /*22*/] = { Var1 };
}

int func_86(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = joaat("WEAPON_UNARMED");
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || !PED::IS_PED_HUMAN(iParam0))
	{
		return iVar0;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

bool func_87(int iParam0)
{
	return WEAPON::_IS_WEAPON_BOW(iParam0);
}

void func_88(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_89(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_130(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_131(iParam0))
	{
		return false;
	}
	if (func_132(iParam0))
	{
		return false;
	}
	if ((Global_1900736.f_67 && !func_133(iParam0, 1)) || func_134(32768))
	{
		if (!func_133(iParam0, 262144) || !Global_1904651.f_8686)
		{
			return false;
		}
	}
	if (!func_135())
	{
		return false;
	}
	return true;
}

void func_90(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904651[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904651[iParam0] = uVar0;
}

struct<4> func_91(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_136(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1293346))
			{
				Global_1293346 = { func_93(joaat("CHARACTER"), func_137(), -1591664384, bParam0) };
			}
			return Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_12)))
			{
				Global_1293346.f_12 = { func_93(joaat("CHARACTER"), func_137(), -1591664384, 0) };
			}
			return Global_1293346.f_12;
		}
	}
	return func_93(joaat("CHARACTER"), func_137(), -1591664384, bParam0);
}

int func_92(int iParam0)
{
	vector3 vVar0;

	if (!func_103(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_93(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_103(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_136(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

struct<4> func_94(bool bParam0)
{
	int iVar0;

	iVar0 = func_136(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_4)))
		{
			Global_1293346.f_4 = { func_93(923904168, func_91(bParam0), -740156546, bParam0) };
		}
		return Global_1293346.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_16)))
		{
			Global_1293346.f_16 = { func_93(923904168, func_91(bParam0), -740156546, 0) };
		}
		return Global_1293346.f_16;
	}
	return func_93(923904168, func_91(bParam0), -740156546, 0);
}

bool func_95(int iParam0, bool bParam1)
{
	if (func_99(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_138();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_96(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_109(iParam0, *uParam1, iParam2, bParam3, 1, iParam4) > 0;
}

bool func_97(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_139(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_98(bool bParam0)
{
	int iVar0;

	iVar0 = func_136(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_8)))
		{
			Global_1293346.f_8 = { func_93(271701509, func_91(bParam0), 12999093, 0) };
		}
		return Global_1293346.f_8;
	}
	return func_93(271701509, func_91(bParam0), 12999093, 0);
}

int func_99(int iParam0)
{
	struct<2> Var0;

	if (!func_103(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_100(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_99(iParam0);
	if (iVar1 == -1015256479)
	{
		return false;
	}
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (func_140(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_101(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_141(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_102(int iParam0)
{
	if (!func_103(*iParam0, 0))
	{
		return 0;
	}
	if (!func_142(*iParam0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
			*iParam0 = joaat("UPGRADE_FSH_BAIT_CRICKET");
			break;
		case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
			*iParam0 = joaat("UPGRADE_FSH_BAIT_WORM");
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*iParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM");
			break;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			*iParam0 = joaat("CONSUMABLE_CHEWING_TOBACCO");
			break;
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			break;
		default:
			return 0;
	}
	return 1;
}

bool func_103(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_104(int iParam0)
{
	return iParam0;
}

bool func_105(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

int func_106(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

bool func_107(int iParam0)
{
	return func_92(iParam0) == joaat("WEAPON");
}

int func_108(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_103(iParam0, 0) && !func_105(func_104(iParam0), 2))
	{
		return 0;
	}
	if (func_92(iParam0) == joaat("FEE"))
	{
		return -1;
	}
	if (!bParam2 && func_106(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_136(bParam3), iParam0);
}

int func_109(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_103(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_106(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_93(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_136(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_136(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_110(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_103(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258.f_6)
	{
		return false;
	}
	iVar0 = func_143(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_144("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_145(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_146(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_147(iVar1);
				return true;
			}
			iVar3++;
		}
		func_147(iVar1);
	}
	return false;
}

bool func_111(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_103(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_99(iParam0);
	switch (iVar0)
	{
		case -636562458:
		case 252325943:
		case 829857647:
		case 1216664798:
		case 1341188928:
			break;
		default:
			return false;
	}
	iVar1 = func_148(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_149(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_150(iParam0);
	iVar2 = func_149(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == Global_17411.f_55.f_644.f_1354.f_5[iVar2 /*17*/];
}

int func_112(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_103(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_92(iParam0);
	if (iVar1 == joaat("AMMO") || (bParam1 && iVar1 == joaat("WEAPON")))
	{
		iVar2 = func_143(iParam0, 1);
		if (iVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar2);
		}
	}
	else if (iVar1 == joaat("WEAPON"))
	{
		return func_151(iParam0, 0);
	}
	if (func_106(iParam0, joaat("DEFAULT")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_136(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_152(iParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_136(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

int func_113()
{
	return Global_1138962.f_137;
}

void func_114(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_117() - fParam1);
	func_153(uParam0, 1);
	func_154(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_115(var uParam0)
{
	return func_155(*uParam0, 1);
}

bool func_116(var uParam0)
{
	return func_155(*uParam0, 2);
}

float func_117()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_118()
{
	return Global_1071686.f_28448[47 /*4*/].f_3;
}

int func_119()
{
	return Global_1051252.f_12;
}

char* func_120()
{
	return "unnamed";
}

int func_121(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -1:
			iVar0 = 16;
			break;
		case 0:
			iVar0 = 32;
			break;
		case 1:
			iVar0 = 64;
			break;
		case 2:
			iVar0 = 128;
			break;
		case 3:
			iVar0 = 256;
			break;
		case 4:
			iVar0 = 512;
			break;
		case 5:
			iVar0 = 1024;
			break;
		case 6:
			iVar0 = 2048;
			break;
		case 8:
			iVar0 = 4096;
			break;
	}
	return iVar0;
}

bool func_122(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return func_156(36, iParam0);
}

int func_123(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219.f_1;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 26;
	}
	if (Global_1296859.f_22[iParam0])
	{
		return Global_1100469[iParam0 /*53*/].f_1;
	}
	return 26;
}

bool func_124(int iParam0)
{
	if (func_157(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) != 1)
		{
			func_158(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) == 1;
}

int func_125(var uParam0, struct<21> Param1)
{
	if (!func_159(uParam0))
	{
		return 0;
	}
	uParam0->f_2[*uParam0 /*21*/] = { Param1 };
	*uParam0++;
	return 1;
}

bool func_126(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

var func_127(int iParam0)
{
	struct<7> Var0[7];
	var uVar50;
	int iVar51;
	int iVar52;
	int iVar53;

	iVar51 = GANG::_0xD1BF325C8252A982(iParam0, &Var0);
	if (iVar51 == 0)
	{
		return uVar50;
	}
	iVar52 = 0;
	iVar52 = 0;
	while (iVar52 <= (iVar51 - 1))
	{
		iVar53 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var0[iVar52 /*7*/]));
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar53))
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar50, iVar53);
		}
		iVar52++;
	}
	return uVar50;
}

int func_128()
{
	return Global_1952637.f_1;
}

bool func_129(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_130(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17411.f_2565[iParam0], iParam1);
}

bool func_131(int iParam0)
{
	if (func_133(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_132(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (Global_1904651.f_33[iParam0 /*9*/].f_2 & 98304 == 0)
	{
		return false;
	}
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar0 = 0;
	while (iVar0 < Global_39.f_3534)
	{
		if (Global_39.f_3534[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (Global_1904651.f_33[iParam0 /*9*/].f_2 & 131072 != 0)
			{
				iVar3 = 2;
			}
			if (Global_1904651.f_33[iParam0 /*9*/].f_2 & 524288 != 0)
			{
				iVar3 = 5;
			}
			iVar2 = (iVar1 - Global_39.f_3534[iVar0 /*3*/]);
			if (Global_39.f_3534[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && Global_1904651.f_33[iParam0 /*9*/].f_2 & 32768 != 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_133(int iParam0, int iParam1)
{
	return (Global_1904651.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_134(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_135()
{
	if (!func_160())
	{
		return false;
	}
	return Global_1904651.f_8684;
}

int func_136(bool bParam0)
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

struct<4> func_137()
{
	struct<4> Var0;

	return Var0;
}

bool func_138()
{
	return (func_161(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_162(func_93(joaat("WARDROBE"), func_91(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_139(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_136(0);
	*uParam1 = { func_93(iParam0, func_94(0), iParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return false;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam1, uParam2, 22, 1))
	{
		return false;
	}
	return true;
}

bool func_140(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 487172188)
	{
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("DEFAULT")) == -1925887917)
		{
			return false;
		}
	}
	return ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, iParam2);
}

bool func_141(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_136(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

bool func_142(int iParam0)
{
	return func_163(iParam0, 1279601681);
}

int func_143(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_103(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_92(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_163(iParam0, 1399091007))
	{
		func_164(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_144(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_136(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_145(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return false;
	}
	if (!INVENTORY::_0x82FA24C3D3FCD9B7(iParam2, iParam1, uParam0))
	{
		return false;
	}
	return true;
}

bool func_146(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

int func_147(int iParam0)
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

int func_148(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CLOTHING_BLEND_FRECKLES_NONE"):
			return 241235545;
		case joaat("CLOTHING_BLEND_MOLES_NONE"):
			return 1827902148;
		case joaat("CLOTHING_BLEND_SPOTS_NONE"):
			return 1301555144;
		case joaat("CLOTHING_BLEND_FOUNDATION_NONE"):
			return -2056583192;
		case joaat("CLOTHING_BLEND_BLUSHER_NONE"):
			return 1015239729;
		case joaat("CLOTHING_BLEND_EYELINER_NONE"):
			return -340627321;
		case joaat("CLOTHING_BLEND_EYESHADOW_NONE"):
			return -875805376;
		case joaat("CLOTHING_BLEND_LIPSTICK_NONE"):
			return -768760704;
		case joaat("CLOTHING_BLEND_FACIAL_HAIR_NONE"):
			return -2118203104;
		case joaat("CLOTHING_BLEND_GRIME_NONE"):
			return 1285634184;
		case -643819742:
			return -559080197;
		case joaat("CLOTHING_BLEND_COMPLEXION_NONE"):
			return -1180698265;
		case joaat("CLOTHING_BLEND_COMPLEXION_2_NONE"):
			return -487028314;
		case 1687431937:
			return -1811760631;
		case joaat("CLOTHING_BLEND_SCAR_NONE"):
			return 1858448324;
		default:
			break;
	}
	return 0;
}

int func_149(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 22)
	{
		if ((uParam0[iVar0 /*17*/])->f_1 == -1)
		{
		}
		else
		{
			if ((uParam0[iVar0 /*17*/])->f_16 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_150(int iParam0)
{
	int iVar0;

	iVar0 = func_99(iParam0);
	switch (iVar0)
	{
		case 1341188928:
			return -2056583192;
		case 1216664798:
			return 1015239729;
		case 829857647:
			return -340627321;
		case -636562458:
			return -875805376;
		case 252325943:
			return -768760704;
		default:
			break;
	}
	return 0;
}

int func_151(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_165(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_166(&Var0, func_94(0));
	}
	if (!func_167(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_147(iVar14);
	return uVar15;
}

struct<4> func_152(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_62(iParam0, bParam1, 0) };
	return func_93(iParam0, Var0, Var0.f_4, bParam1);
}

void func_153(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_154(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_155(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_156(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_168(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 == func_169())
	{
		return func_168(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1296859.f_22[iParam1])
	{
		return func_168(&(Global_1100469[iParam1 /*53*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_157(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_158(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_16 != 0 || Global_1572887.f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (!Global_1296859.f_22[iVar0])
	{
		func_170(iParam0);
		return;
	}
	if (Global_1071686.f_21416.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_171(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 1;
}

bool func_159(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return false;
	}
	return true;
}

bool func_160()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

int func_161(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_172(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_136(bParam1), iParam0, iParam3);
}

int func_162(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_173(&uParam0, iParam4, bParam5, iParam6);
}

int func_163(int iParam0, int iParam1)
{
	if (!func_103(iParam0, 0))
	{
		return func_174(func_104(iParam0), iParam1);
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

void func_164(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REVOLVER_EXPRESS");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REVOLVER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*uParam1 = joaat("PISTOL_AMMO_BOX");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_PISTOL_EXPRESS");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_PISTOL_HIGH_VELOCITY");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*uParam1 = joaat("RIFLE_AMMO_BOX");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_RIFLE_EXPRESS");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_RIFLE_HIGH_VELOCITY");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*uParam1 = joaat("REPEATER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REPEATER_EXPRESS");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REPEATER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX_SLUG");
			*uParam2 = joaat("AMMO_SHOTGUN_SLUG");
			break;
		case joaat("AMMO_22_AMMOBOX"):
			*uParam1 = joaat("22_AMMO_BOX");
			*uParam2 = joaat("AMMO_22");
			break;
	}
}

struct<14> func_165(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
	if (iParam6 != 0)
	{
		Var0.f_8 = iParam6;
	}
	return Var0;
}

void func_166(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_167(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_136(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_168(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_169()
{
	return Global_1102219.f_3672;
}

void func_170(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_16 != 0 || Global_1572887.f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (Global_1071686.f_21416.f_1[iVar0 /*8*/] == 0)
	{
		return;
	}
	func_171(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 0;
}

void func_171(int iParam0)
{
	if (Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

bool func_172(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_173(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_175(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_174(int iParam0, int iParam1)
{
	if (!func_105(iParam0, 2))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_0x99C6EA66DFE73757(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

bool func_175(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_136(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_141(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

