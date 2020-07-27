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
	var uLocal_15 = 0;
	float fLocal_16 = 0f;
	float fLocal_17 = 0f;
	vector3 vLocal_18 = { 0f, 0f, 0f };
	vector3 vLocal_21 = { 0f, 0f, 0f };
	int iLocal_24 = 0;
	var uLocal_25 = 0;
	int iLocal_26[5] = { 0, 0, 0, 0, 0 };
	int iLocal_32[5] = { 0, 0, 0, 0, 0 };
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	bool bLocal_43 = false;
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
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = -1;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 10;
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
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_16 = 1f;
	fLocal_17 = 1f;
	uLocal_25 = ScriptParam_0;
	iLocal_24 = ScriptParam_0.f_1;
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
			func_4(&uLocal_44);
		}
	}
	if (func_1() == -1)
	{
		if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		{
			func_4(&uLocal_44);
		}
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_24))
	{
		func_4(&uLocal_44);
	}
	func_5(&uLocal_44, 875971115, -1232280687 /* GXTEntry: "Egret Egg" */, 702887809, 1438934506, 5, 1);
	while (func_6(&uLocal_44))
	{
		if (func_7())
		{
			func_4(&uLocal_44);
		}
		if (func_8(&uLocal_44))
		{
			func_4(&uLocal_44);
		}
		func_9(&uLocal_44);
		BUILTIN::WAIT(0);
	}
	func_4(&uLocal_44);
}

int func_1()
{
	return Global_1572887->f_13;
}

struct<2> func_2(int iParam0)
{
	return *(Global_1900718->f_1[iParam0 /*2*/]);
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
	if (iLocal_41 != iVar0)
	{
		TASK::_0x5758B1EE0C3FD4AC(iLocal_41, 0);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_2))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_2));
	}
	iVar1 = 0;
	while (iVar1 < func_12(&(uParam0->f_3)))
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(iLocal_26[iVar1])))
		{
			func_13(&(iLocal_26[iVar1]), &(iLocal_26[iVar1]), 0);
		}
		iVar1++;
	}
	if (func_14((*Global_1201108)[*uParam0 /*1909*/][uParam0->f_13 /*9*/], 2))
	{
		func_15((*(*Global_1201108)[*uParam0 /*1909*/])[uParam0->f_13 /*9*/], 2);
	}
	func_16(&(uParam0->f_14));
	SCRIPTS::_0xE7282390542F570D(uLocal_25);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_5(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	*uParam0 = 5;
	vLocal_18 = { TASK::_GET_SCENARIO_POINT_COORDS(iLocal_24, 1) };
	vLocal_21 = { TASK::_GET_SCENARIO_POINT_COORDS(iLocal_24, 1) };
	uParam0->f_4 = iParam6;
	uParam0->f_13 = iParam5;
	iLocal_38 = iParam3;
	iLocal_39 = iParam4;
	uParam0->f_3 = iParam2;
	uParam0->f_11 = iParam1;
	uParam0->f_12 = 1;
}

int func_6(var uParam0)
{
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		func_4(uParam0);
		return 0;
	}
	return 1;
}

int func_7()
{
	if (PED::IS_PED_INJURED(Global_34))
	{
		return 1;
	}
	return 0;
}

int func_8(var uParam0)
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
	return 0;
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
			case 1053249385: /* GXTEntry: "Vulture Egg" */
				return 1;
			case 410290576: /* GXTEntry: "Loon Egg" */
				return 3;
			case -1117423291: /* GXTEntry: "Duck Egg" */
				return 5;
			case -158375659: /* GXTEntry: "Goose Egg" */
				return 4;
			case 322658308: /* GXTEntry: "Heron Egg" */
				return 1;
			case -1232280687: /* GXTEntry: "Egret Egg" */
				return 1;
			case 742074887: /* GXTEntry: "Eagle Egg" */
				return 1;
			case 2060029625: /* GXTEntry: "Hawk Egg" */
				return 1;
			case 229697410: /* GXTEntry: "Spoonbill Egg" */
				return 1;
			case -1513842258: /* GXTEntry: "Condor Egg" */
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
	if (ITEMSET::IS_ITEMSET_VALID(Global_1276326->f_31) && ITEMSET::IS_IN_ITEMSET(iParam0, Global_1276326->f_31))
	{
		ITEMSET::REMOVE_FROM_ITEMSET(iParam0, Global_1276326->f_31);
	}
	PLAYER::_0x9DAE1380CC5C6451(PLAYER::PLAYER_ID(), iParam0);
	PLAYER::_0xDC5E09D012D759C4(iParam0, iParam1, iParam2);
	Var1.f_1 = -1082130432;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1276326[iVar0 /*2*/]) && Global_1276326[iVar0 /*2*/] == iParam0)
		{
			MISC::_COPY_MEMORY((*Global_1276326)[iVar0 /*2*/], &Var1, 2);
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
		func_27(&iLocal_40);
	}
	bVar0 = (func_28(uParam0) && !func_19(uParam0));
	if (!DECORATOR::DECOR_GET_BOOL(iLocal_40, "EggBroken"))
	{
		func_29(&(uParam0->f_14), vLocal_18, bVar0, 1, 1);
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < Global_17172.f_2954.f_1)
		{
			if (uParam0->f_3 == (Global_17172.f_2954.f_1[iVar1 /*5*/])->f_4)
			{
				if (func_30(Global_35, (Global_17172.f_2954.f_1[iVar1 /*5*/])->f_1, 50f, 1))
				{
					if (!&Global_17172.f_2954.f_1[iVar1 /*5*/])
					{
						Global_17172.f_2954.f_1[iVar1 /*5*/] = 1;
						func_31("COLLECTIBLE_MAP_BIRD_EGG_SHOT", 10000, 0, 0, 0, 1);
					}
				}
			}
			iVar1++;
		}
	}
	if (func_32(Global_1275573->f_8, vLocal_18, 1) < 2f)
	{
		func_33(&(uParam0->f_14.f_6));
	}
	if (func_14((*Global_1201108)[*uParam0 /*1909*/][uParam0->f_13 /*9*/], 4))
	{
		func_34(iLocal_40, 0);
		func_35(uParam0, 9);
		func_15((*(*Global_1201108)[*uParam0 /*1909*/])[uParam0->f_13 /*9*/], 4);
	}
	else if (func_14((*Global_1201108)[*uParam0 /*1909*/][uParam0->f_13 /*9*/], 8))
	{
		func_34(iLocal_40, 1);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_40))
		{
			func_13(iLocal_40, iLocal_40, 0);
		}
		func_35(uParam0, 12);
		func_15((*(*Global_1201108)[*uParam0 /*1909*/])[uParam0->f_13 /*9*/], 8);
	}
	switch (func_26(uParam0))
	{
		case 0:
			func_36(&(uParam0->f_14.f_7), vLocal_18, 1.5f, 1, 319, 0);
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
				bLocal_43 = true;
			}
			else
			{
				bLocal_43 = false;
			}
			if (bLocal_43)
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
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_40))
			{
				if (!PLAYER::_0x0E6846476906C9DD(PLAYER::PLAYER_ID(), iLocal_40))
				{
					func_41(iLocal_40, iLocal_40, 0);
					MAP::_0x7563CBCA99253D1A(iLocal_40, 187984275);
					func_35(uParam0, 5);
				}
			}
			break;
		case 5:
			if (uParam0->f_11 != 521036731)
			{
				if (func_42())
				{
					func_13(iLocal_40, iLocal_40, 0);
					func_35(uParam0, 11);
				}
				if (func_32(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), vLocal_18, 0) < 10f)
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
				func_13(iLocal_40, iLocal_40, 0);
				func_35(uParam0, 11);
			}
			if (func_32(Global_34, vLocal_18, 0) < 8f)
			{
				func_35(uParam0, 8);
			}
			break;
		case 8:
			if (func_42())
			{
				func_13(iLocal_40, iLocal_40, 0);
				func_35(uParam0, 11);
			}
			break;
		case 11:
			if (!DECORATOR::DECOR_GET_BOOL(iLocal_40, "EggBroken"))
			{
				func_43(*uParam0, uParam0->f_13, GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
			}
			else
			{
				func_44(*uParam0, uParam0->f_13, GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
			}
			break;
		case 9:
			if (!ENTITY::DOES_ENTITY_EXIST(&(iLocal_26[0])))
			{
				ENTITY::_0xF41E2979D5BC5370(iLocal_39);
				iLocal_26[0] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_39, vLocal_18, false, false, false, true);
			}
			if (ENTITY::DOES_ENTITY_EXIST(&(iLocal_26[0])))
			{
				if (!TASK::_0x0CCFE72B43C9CF96(&(iLocal_26[0])))
				{
					if (!uParam0->f_23)
					{
						PHYSICS::ACTIVATE_PHYSICS(&(iLocal_26[0]));
						TASK::_0x78B4567E18B54480(&(iLocal_26[0]));
						func_13(iLocal_40, iLocal_40, 0);
						func_41(&(iLocal_26[0]), &(iLocal_26[0]), 0);
						MAP::_0x7563CBCA99253D1A(&(iLocal_26[0]), 187984275);
						ENTITY::_0x5826EFD6D73C4DE5(&(iLocal_26[0]));
						func_15((*(*Global_1201108)[*uParam0 /*1909*/])[uParam0->f_13 /*9*/], 4);
						uParam0->f_23 = 1;
					}
				}
				else
				{
					TASK::_0x8E1DDE26D270CC5E(&(iLocal_26[0]), 1);
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
			PERSISTENCE::_0x8245C1F3262F4AC2(iLocal_24);
			MISC::_0x082C043C7AFC3747(iLocal_41, 0);
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
	if (func_46(uParam0, &iLocal_26) > 0)
	{
		func_29(&(uParam0->f_14), vLocal_18, bVar0, 1, 1);
	}
	if (func_32(Global_1275573->f_8, vLocal_18, 1) < 3.5f)
	{
		func_33(&(uParam0->f_14.f_6));
	}
	switch (func_26(uParam0))
	{
		case 0:
			func_36(&(uParam0->f_14.f_7), vLocal_18, 1.5f, 1, 319, 0);
			func_47(&(uParam0->f_14), vLocal_18);
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
				bLocal_43 = true;
			}
			else
			{
				bLocal_43 = false;
			}
			if (bLocal_43)
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
			if (func_51(&iLocal_26, &iLocal_32, func_12(&(uParam0->f_3)), vLocal_18, 5f) > 0)
			{
				iVar1 = 0;
				while (iVar1 < func_12(&(uParam0->f_3)))
				{
					if (ENTITY::DOES_ENTITY_EXIST(&(iLocal_26[iVar1])))
					{
						OBJECT::_0x46CBCF0E98A4E156(&(iLocal_26[iVar1]), 1);
						if (!PLAYER::_0x0E6846476906C9DD(PLAYER::PLAYER_ID(), &(iLocal_26[iVar1])))
						{
							func_41(&(iLocal_26[iVar1]), &(iLocal_26[iVar1]), 0);
						}
						MAP::_0x7563CBCA99253D1A(&(iLocal_26[iVar1]), 187984275);
					}
					iVar1++;
				}
			}
			iVar2 = TASK::_0x96C6ED22FB742C3E(iLocal_41, &(uParam0->f_25));
			if (iVar2 > 0 && iVar2 <= 10)
			{
				iVar3 = 0;
				while (iVar3 < iVar2)
				{
					if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_25[iVar3 /*2*/])))
					{
						OBJECT::_0x46CBCF0E98A4E156(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(&(uParam0->f_25[iVar3 /*2*/])), 1);
						if (!PLAYER::_0x0E6846476906C9DD(PLAYER::PLAYER_ID(), &(uParam0->f_25[iVar3 /*2*/])))
						{
							func_41(&(uParam0->f_25[iVar3 /*2*/]), &(uParam0->f_25[iVar3 /*2*/]), 0);
						}
						MAP::_0x7563CBCA99253D1A(&(uParam0->f_25[iVar3 /*2*/]), 187984275);
					}
					iVar3++;
				}
			}
			if (func_46(uParam0, &iLocal_26) == func_12(&(uParam0->f_3)))
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
			if (func_32(Global_34, vLocal_18, 0) < 8f)
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
			MISC::_0x082C043C7AFC3747(iLocal_41, 0);
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
	func_54(&Var0, 1356624740);
	return func_55(iParam0, &Var0, uParam1, 0);
}

void func_21(int iParam0, int iParam1)
{
	if (!func_56(iParam0, iParam1))
	{
		MISC::SET_BIT(Global_1070356->f_20795.f_353[iParam0 /*11*/], iParam1);
		(Global_1070356->f_20795.f_353[iParam0 /*11*/])->f_1[iParam1] = SCRIPTS::GET_ID_OF_THIS_THREAD();
		func_57();
	}
}

void func_22(int iParam0, int iParam1, bool bParam2)
{
	if (func_56(iParam0, iParam1) && (!bParam2 || &(Global_1070356->f_20795.f_353[iParam0 /*11*/])->f_1[iParam1] == SCRIPTS::GET_ID_OF_THIS_THREAD()))
	{
		MISC::CLEAR_BIT(Global_1070356->f_20795.f_353[iParam0 /*11*/], iParam1);
		(Global_1070356->f_20795.f_353[iParam0 /*11*/])->f_1[iParam1] = 0;
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
		AUDIO::_0x0F2A2175734926D8("collectible_lure", "RDRO_Collectible_Sounds_Travelling_Saleswoman");
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
					if (WEAPON::_0x9E2D5D6BC97A5F1E(*iParam0, joaat("weapon_rifle_varmint"), 10000) || func_60())
					{
						DECORATOR::DECOR_SET_BOOL(*iParam0, "EggBroken", false);
					}
					else
					{
						DECORATOR::DECOR_SET_BOOL(*iParam0, "EggBroken", true);
						func_61(816, 1);
					}
				}
			}
		}
	}
}

int func_28(var uParam0)
{
	struct<5> Var0;

	Var0 = { func_62(uParam0->f_3, 0, 1) };
	if (func_63(uParam0->f_3, &Var0, 1, 0, 0, -1, 0))
	{
		return 0;
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_24))
	{
		if (PERSISTENCE::_0xFB7CF1DE938A3E22(iLocal_24))
		{
			return 0;
		}
	}
	return 1;
}

void func_29(var uParam0, vector3 vParam1, bool bParam4, bool bParam5, int iParam6)
{
	bool bVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;

	if (!func_64(-1733092640 /* GXTEntry: "Collector\'s Bag" */, 1))
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
	if (&Global_1048576)
	{
		return;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		return;
	}
	if (TASK::_0xEC7E480FF8BD0BED(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		return;
	}
	if (!bParam4 && uParam0->f_1 == 0)
	{
		return;
	}
	if (!func_67(*Global_1201104) && MISC::GET_DISTANCE_BETWEEN_COORDS(*Global_1201104, vParam1, true) <= 5f)
	{
		bVar0 = true;
	}
	if (bVar0 && uParam0->f_1 == 0)
	{
		return;
	}
	fVar1 = func_32(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), vParam1, 1);
	fVar2 = 10f;
	fVar2 = (fVar2 * (1f + func_68()));
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
						if (func_69(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 1, 0) != -862059856)
						{
							AUDIO::_0xDCF5BA95BBF0FABA(uParam0->f_5, "collectible_lure", vParam1, "RDRO_Collectible_Sounds_Travelling_Saleswoman", 0, 0, iParam6);
						}
						func_70(uParam0, 1);
					}
				}
				else
				{
					func_70(uParam0, 1);
				}
			}
			break;
		case 1:
			iVar3 = BUILTIN::FLOOR((500f * ((fVar2 - fVar1) / fVar2)));
			iVar4 = BUILTIN::FLOOR((256f * ((fVar2 - fVar1) / fVar2)));
			if (iVar3 > 9999)
			{
				iVar3 = 9999;
			}
			PAD::SET_PAD_SHAKE(0, iVar3, iVar4);
			func_71(&(uParam0->f_2));
			func_70(uParam0, 2);
			break;
		case 2:
			if ((fVar1 >= (fVar2 + 5f) || !bParam4) || bVar0)
			{
				if (bParam5)
				{
					func_24(uParam0);
				}
				func_70(uParam0, 0);
			}
			else if (func_72(&(uParam0->f_2)) >= 2f)
			{
				func_70(uParam0, 1);
			}
			break;
	}
}

int func_30(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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
	uVar15 = _NAMESPACE71::_SHOW_TOOLTIP(&Var0, &Var13, iParam5);
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
			MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), ENTITY::GET_ENTITY_COORDS(iParam0, true, false) + Vector(0.01f, 0f, 0f), 1, true, joaat("weapon_rifle_varmint"), 0, false, false, -1f, false);
		}
		else
		{
			MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), ENTITY::GET_ENTITY_COORDS(iParam0, true, false) + Vector(0.01f, 0f, 0f), 1, true, joaat("weapon_repeater_carbine"), 0, false, false, -1f, false);
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
	STREAMING::REQUEST_MODEL(iLocal_38, false);
	STREAMING::REQUEST_MODEL(iLocal_39, false);
}

int func_38(var uParam0)
{
	if (STREAMING::HAS_MODEL_LOADED(iLocal_38) && STREAMING::HAS_MODEL_LOADED(iLocal_39))
	{
		return 1;
	}
	return 0;
}

int func_39(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_40))
	{
		iLocal_40 = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_38, vLocal_21, false, true, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_40))
	{
		return 0;
	}
	return 1;
}

void func_40(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		switch (*uParam0)
		{
			case 1053249385: /* GXTEntry: "Vulture Egg" */
				iLocal_32[iVar0] = -592873548;
				break;
			case 410290576: /* GXTEntry: "Loon Egg" */
				iLocal_32[iVar0] = 755040865;
				break;
			case -1117423291: /* GXTEntry: "Duck Egg" */
				iLocal_32[iVar0] = -946816685;
				break;
			case -158375659: /* GXTEntry: "Goose Egg" */
				iLocal_32[iVar0] = 1390217426;
				break;
			case 742074887: /* GXTEntry: "Eagle Egg" */
				iLocal_32[iVar0] = -1971337181;
				break;
			case -1232280687: /* GXTEntry: "Egret Egg" */
				iLocal_32[iVar0] = 702887809;
				break;
			case 2060029625: /* GXTEntry: "Hawk Egg" */
				iLocal_32[iVar0] = 990159072;
				break;
			case -1513842258: /* GXTEntry: "Condor Egg" */
				iLocal_32[iVar0] = 574926209;
				break;
			case 322658308: /* GXTEntry: "Heron Egg" */
				iLocal_32[iVar0] = 238830633;
				break;
			case 229697410: /* GXTEntry: "Spoonbill Egg" */
				iLocal_32[iVar0] = -820230677;
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
	if (!ITEMSET::IS_ITEMSET_VALID(Global_1276326->f_31))
	{
		Global_1276326->f_31 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (!ITEMSET::IS_IN_ITEMSET(iParam0, Global_1276326->f_31))
	{
		ITEMSET::ADD_TO_ITEMSET(iParam0, Global_1276326->f_31);
	}
	if (!func_73(iParam0))
	{
		PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), iParam0, 0);
		PLAYER::_0x6ECFC621A168424C(iParam0, iParam1, iParam2);
		PLAYER::_0x907B16B3834C69E2(iParam0, 500f);
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_1276326[iVar0 /*2*/]))
		{
			(*Global_1276326)[iVar0 /*2*/] = iParam0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_42()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_40))
	{
		return DECORATOR::DECOR_EXIST_ON(iLocal_40, "EggBroken");
	}
	return 0;
}

void func_43(var uParam0, var uParam1, int iParam2)
{
	var uVar0;
	struct<7> Var1;
	struct<19> Var8;

	uVar0 = func_74(0, 8);
	Var1.f_4 = 1;
	Var1 = 42;
	Var1.f_5 = uParam0;
	Var1.f_6 = uParam1;
	Var8.f_12 = -1;
	Var8.f_12.f_1 = -1;
	Var8.f_14 = 255;
	Var8.f_15 = 255;
	Var8.f_14 = &Global_1275573->f_154[&Global_1275573];
	Var8 = 0;
	Var8.f_1 = PLAYER::GET_PLAYER_INDEX();
	Var8.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	func_76(Var8, func_75(Global_35, 0f, 0f, 0f, 150f, 150f, 150f, -432403087, 0, 8), 0, 0);
	func_77(&Var1, &uVar0);
}

void func_44(var uParam0, var uParam1, int iParam2)
{
	var uVar0;
	struct<7> Var1;
	struct<19> Var8;

	uVar0 = func_74(0, 8);
	Var1.f_4 = 1;
	Var1 = 43;
	Var1.f_5 = uParam0;
	Var1.f_6 = uParam1;
	Var8.f_12 = -1;
	Var8.f_12.f_1 = -1;
	Var8.f_14 = 255;
	Var8.f_15 = 255;
	Var8.f_14 = &Global_1275573->f_154[&Global_1275573];
	Var8 = 0;
	Var8.f_1 = PLAYER::GET_PLAYER_INDEX();
	Var8.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	func_76(Var8, func_75(Global_35, 0f, 0f, 0f, 150f, 150f, 150f, -432403087, 0, 8), 0, 0);
	func_77(&Var1, &uVar0);
}

void func_45(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	if (ENTITY::DOES_ENTITY_EXIST(&(iLocal_26[0])))
	{
		if (!uParam0->f_24)
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(&(iLocal_26[0]), true, false) };
			vVar3 = { vVar0 };
			if (func_78(&vVar3, 50, 10, 0, 0))
			{
				if (MISC::ABSF((vVar3.z - vVar0.z)) <= 0.025f)
				{
					PHYSICS::SET_DAMPING(&(iLocal_26[0]), 0, 100000f);
					PHYSICS::SET_DAMPING(&(iLocal_26[0]), 4, 100000f);
					uParam0->f_24 = 1;
				}
			}
		}
		else
		{
			vVar6 = { ENTITY::GET_ENTITY_VELOCITY(&(iLocal_26[0]), -1) };
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
				ENTITY::FREEZE_ENTITY_POSITION(&(iLocal_26[0]), true);
			}
			else
			{
				ENTITY::SET_ENTITY_VELOCITY(&(iLocal_26[0]), vVar9);
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
		if (ENTITY::DOES_ENTITY_EXIST(iParam1[iVar1]))
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
	TASK::_0x73F0D0327BFA0812(uLocal_42);
}

int func_49(var uParam0)
{
	if (TASK::_0x5E5D96BE25E9DF68(uLocal_42))
	{
		return 1;
	}
	return 0;
}

int func_50(var uParam0)
{
	var uVar0;

	if (!ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		if (bLocal_43)
		{
			iLocal_41 = TASK::_0x5B4BBE80AD5972DC(uLocal_42, vLocal_18, 0f, 0, &uVar0, -1);
		}
		else
		{
			iLocal_41 = TASK::_0x5B4BBE80AD5972DC(uLocal_42, vLocal_18, 0f, 1, &uVar0, -1);
		}
		return 1;
	}
	return 0;
}

int func_51(int iParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6)
{
	int iVar0;
	var uVar1;

	iVar0 = VOLUME::_CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	uVar1 = func_79(iParam0, iParam1, iVar0, iParam2);
	func_80(iVar0);
	return uVar1;
}

int func_52(var uParam0)
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 89266752))
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_24))
		{
			PERSISTENCE::_0x8245C1F3262F4AC2(iLocal_24);
		}
		func_81(*uParam0, uParam0->f_13, GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
		return 1;
	}
	return 0;
}

int func_53(var uParam0)
{
	if (func_14((*Global_1201108)[*uParam0 /*1909*/][uParam0->f_13 /*9*/], 2))
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
		if (&uParam0->f_1[iVar1] == iParam1)
		{
			return;
		}
		switch (iParam1)
		{
			case 291123060:
			case 617531372:
				if (&uParam0->f_1[iVar1] == 617531372 || &uParam0->f_1[iVar1] == 291123060)
				{
					bVar0 = true;
				}
				break;
			case 1356624740:
			case 1884295263:
				if (&uParam0->f_1[iVar1] == 1356624740 || &uParam0->f_1[iVar1] == 1884295263)
				{
					bVar0 = true;
				}
				break;
			case -1850666435:
			case 1551239286:
			case 1937393363:
				if ((&uParam0->f_1[iVar1] == 1551239286 || &uParam0->f_1[iVar1] == -1850666435) || &uParam0->f_1[iVar1] == 1937393363)
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

int func_55(int iParam0, var uParam1, var uParam2, int iParam3)
{
	var uVar0;
	struct<14> Var1;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	func_82(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_83(uParam2, iParam0, Var1);
	return 1;
}

bool func_56(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(&(Global_1070356->f_20795.f_353[iParam0 /*11*/]), iParam1);
}

void func_57()
{
	SCRIPTS::_0x20F4CB76689ACDBC(&(Global_1070356->f_19683.f_260));
}

bool func_58(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

int func_59(int iParam0)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			switch (iVar0)
			{
				case -1971337181:
				case -1904939264:
				case -820230677:
				case 238830633:
				case 702887809:
				case 990159072:
					return 1;
			}
		}
	}
	return 0;
}

int func_60()
{
	int iVar0;

	if (func_85(func_84(Global_34, 1, 0, 0)))
	{
		iVar0 = WEAPON::_0x7E7B19A4355FEE13(Global_34, WEAPON::_0x6CA484C9A7377E4F(Global_34, 1));
		if (iVar0 == -1368511730)
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

	func_86(iParam0, &iVar0, &iVar1);
	if (!func_87(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_88(iVar0, iVar1);
}

struct<5> func_62(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_89(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_90(iParam0);
	switch (iVar5)
	{
		case joaat("clothing"):
			Var0 = { func_91(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			break;
		case joaat("weapon"):
			Var0 = { func_92(bParam1) };
			if (bParam2 && func_93(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_94(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_94(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_95(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
		case joaat("coach"):
		case joaat("horse"):
			Var0.f_4 = 1782082944;
			break;
		case -1650247667:
			Var0.f_4 = -1591664384;
			Var0 = { func_96(bParam1) };
			switch (func_97(iParam0))
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
		case -2130996531:
		case joaat("dog"):
			if (func_98(iParam0, -1823706425))
			{
				Var0 = { func_91(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_98(iParam0, -1483207246))
			{
				Var0 = { func_91(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1911121386))
			{
				Var0 = { func_91(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_98(iParam0, -1653629781))
			{
				Var0 = { func_91(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_99(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_98(iParam0, -1653629781))
			{
				Var0 = { func_91(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1384535894);
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

int func_63(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	struct<4> Var0;
	struct<10> Var4;
	int iVar26;
	int iVar27;

	func_100(&iParam0);
	if (!func_101(iParam0, 0) && !func_103(func_102(iParam0), 2))
	{
		return 0;
	}
	if (!bParam3 && func_104(iParam0, joaat("default")) == 0)
	{
		bParam3 = true;
	}
	if (func_105(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		Var0 = { func_92(0) };
		Var4.f_9 = -1591664384;
		if (!func_94(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
		{
			return 0;
		}
		else if (func_95(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
		{
			return 0;
		}
		if (func_93(iParam0, 1))
		{
			if (!func_94(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
			{
				return 0;
			}
			else if (func_95(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
			{
				return 0;
			}
		}
		return 1;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_106(iParam0, uParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return 0;
	}
	else if (iVar26 == 0)
	{
		return 1;
	}
	iVar27 = func_107(iParam0, *uParam1, uParam1->f_4, bParam4, bParam3, iParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return 1;
	}
	return 0;
}

bool func_64(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_101(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_90(iParam0);
	switch (iVar0)
	{
		case joaat("weapon"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, 0))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("ammo"):
			if (!func_108(iParam0, 1))
			{
				return false;
			}
			break;
		case joaat("clothing"):
			if (func_109(iParam0))
			{
				return true;
			}
			break;
	}
	return func_110(iParam0, 0, 0, 0) >= iParam1;
}

bool func_65(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915180->f_20136;
	}
	return (Global_1915180->f_20136 || Global_1915180->f_21989.f_1);
}

bool func_66()
{
	return func_111() != -1;
}

int func_67(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

float func_68()
{
	return (Global_1140484->f_2001[82 /*192*/])->f_188;
}

int func_69(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

void func_70(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_71(var uParam0)
{
	func_112(uParam0, 0f);
}

float func_72(var uParam0)
{
	if (!func_113(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_114(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_115() - uParam0->f_1);
}

int func_73(int iParam0)
{
	struct<5> Var0;
	var uVar5;
	int iVar13;
	int iVar14;
	int iVar15;

	if (func_116() == 0)
	{
		return 0;
	}
	if (!DATAFILE::_0x603AC35FD4602C76(func_116()))
	{
		return 0;
	}
	Var0 = func_116();
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
					return 1;
				}
			}
		}
		iVar14++;
	}
	return 0;
}

var func_74(int iParam0, int iParam1)
{
	return func_75(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

var func_75(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_117() != 0)
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
	iVar5 = Global_1275573->f_10;
	iVar6 = Global_1275573->f_15;
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
			case 665633627:
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_118());
				break;
			case -432403087:
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_118());
				break;
			case -1612834106:
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_118());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_119(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1275573->f_154[iVar2])))
		{
			iVar10 = &Global_1275573->f_154[iVar2];
			bVar3 = false;
			bVar4 = false;
			if (iVar9 & 1 != 0 && iVar10 == iVar5)
			{
				bVar3 = true;
			}
			if (func_120(iVar2))
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
					else if (&Global_1275573->f_88[iVar2])
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8192 != 0 && func_121(iVar2) != 1)
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
					if (!func_122(iVar10))
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3 && bVar7)
			{
				if (!VOLUME::_0xF256A75210C5C0EB(iVar8, ENTITY::GET_ENTITY_COORDS(iVar11, false, false)))
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

void func_76(struct<19> Param0, var uParam19, bool bParam20, bool bParam21)
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
				func_123(&(Global_1070356->f_21258), Var0);
				return;
			}
		}
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param0, 19, 5, &uParam19);
}

void func_77(var uParam0, var uParam1)
{
	if (SCRIPTS::_0x179A6F0EE2E79026(uParam1))
	{
		uParam0->f_1 = &Global_1275573->f_154[&Global_1275573];
		SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 7, 19, uParam1);
	}
}

int func_78(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_124(*uParam0, 0f, 0f, 0f))
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
	if (bParam4)
	{
		vVar4 = { *uParam0 };
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

int func_79(int iParam0, int iParam1, int iParam2, int iParam3)
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
				if (iParam1[iVar5] == 0)
				{
					(*iParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *iParam1;
				}
				else if (ENTITY::GET_ENTITY_MODEL(iVar2) == iParam1[iVar5])
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

void func_80(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

void func_81(var uParam0, var uParam1, int iParam2)
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
	uVar0 = func_125(iParam2);
	SCRIPTS::_0xD426E2E3288469D6(&uVar0, PLAYER::PLAYER_ID());
	Var1.f_4 = 1;
	Var1 = 41;
	Var1.f_5 = uParam0;
	Var1.f_6 = uParam1;
	Var8.f_12 = -1;
	Var8.f_12.f_1 = -1;
	Var8.f_14 = 255;
	Var8.f_15 = 255;
	Var8.f_14 = &Global_1275573->f_154[&Global_1275573];
	Var8 = 0;
	Var8.f_1 = PLAYER::GET_PLAYER_INDEX();
	Var8.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	func_76(Var8, func_75(Global_35, 0f, 0f, 0f, 300f, 300f, 300f, -432403087, 0, 8), 0, 0);
	func_77(&Var1, &uVar0);
}

void func_82(var uParam0)
{
	func_54(uParam0, 143479330);
	if (func_126() == 2026485318)
	{
		func_54(uParam0, 617531372);
	}
	else
	{
		func_54(uParam0, 291123060);
	}
}

void func_83(var uParam0, int iParam1, struct<14> Param2)
{
	int iVar0;
	struct<21> Var1;

	if (!func_127(uParam0))
	{
		return;
	}
	if (Global_1272170->f_2518 < 20)
	{
		Global_1272170->f_2518++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1272170->f_2518.f_1[iVar0 /*21*/]) = { *(Global_1272170->f_2518.f_1[iVar0 + 1 /*21*/]) };
			iVar0++;
		}
	}
	Var1.f_7.f_2.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	*(Global_1272170->f_2518.f_1[(Global_1272170->f_2518 - 1) /*21*/]) = { Var1 };
}

int func_84(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = joaat("weapon_unarmed");
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

bool func_85(var uParam0)
{
	return WEAPON::_IS_WEAPON_BOW(uParam0);
}

void func_86(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

int func_87(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 30)
	{
		return 0;
	}
	if (func_128(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_129(iParam0))
	{
		return 0;
	}
	if (func_130(iParam0))
	{
		return 0;
	}
	if ((Global_1900718->f_67 && !func_131(iParam0, 1)) || func_132(32768))
	{
		if (!func_131(iParam0, 262144) || !Global_1904613->f_8198)
		{
			return 0;
		}
	}
	if (!func_133())
	{
		return 0;
	}
	return 1;
}

void func_88(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904613[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1904613)[iParam0] = uVar0;
}

struct<4> func_89(bool bParam0)
{
	int iVar0;

	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_134(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1272170))
			{
				*Global_1272170 = { func_91(joaat("character"), func_135(), -1591664384, bParam0) };
			}
			return *Global_1272170;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_12)))
			{
				Global_1272170->f_12 = { func_91(joaat("character"), func_135(), -1591664384, 0) };
			}
			return Global_1272170->f_12;
		}
	}
	return func_91(joaat("character"), func_135(), -1591664384, bParam0);
}

int func_90(int iParam0)
{
	vector3 vVar0;

	if (!func_101(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_91(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_101(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_134(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

struct<4> func_92(bool bParam0)
{
	int iVar0;

	iVar0 = func_134(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_4)))
		{
			Global_1272170->f_4 = { func_91(923904168, func_89(bParam0), -740156546, bParam0) };
		}
		return Global_1272170->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_16)))
		{
			Global_1272170->f_16 = { func_91(923904168, func_89(bParam0), -740156546, 0) };
		}
		return Global_1272170->f_16;
	}
	return func_91(923904168, func_89(bParam0), -740156546, 0);
}

int func_93(int iParam0, bool bParam1)
{
	if (func_97(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_136();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_94(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_107(iParam0, *uParam1, iParam2, bParam3, 1, iParam4) > 0;
}

int func_95(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_137(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_96(bool bParam0)
{
	int iVar0;

	iVar0 = func_134(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_8)))
		{
			Global_1272170->f_8 = { func_91(271701509, func_89(bParam0), 12999093, 0) };
		}
		return Global_1272170->f_8;
	}
	return func_91(271701509, func_89(bParam0), 12999093, 0);
}

int func_97(int iParam0)
{
	struct<2> Var0;

	if (!func_101(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_98(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_97(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (func_138(iParam0, iParam1, iVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

bool func_99(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_139(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_100(int iParam0)
{
	if (!func_101(*iParam0, 0))
	{
		return 0;
	}
	if (!func_140(*iParam0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case -1073808995: /* GXTEntry: "Live Crickets" */
			*iParam0 = -1753819339; /* GXTEntry: "Cricket Bait" */
			break;
		case 1903483453: /* GXTEntry: "Live Worms" */
			*iParam0 = -1527293029; /* GXTEntry: "Worm Bait" */
			break;
		case -541584777: /* GXTEntry: "Opened Cocaine Gum" */
			*iParam0 = 206762213; /* GXTEntry: "Cocaine Gum" */
			break;
		case 998010398: /* GXTEntry: "Opened Chewing Tobacco" */
			*iParam0 = -324053813; /* GXTEntry: "Chewing Tobacco" */
			break;
		case -1424823393: /* GXTEntry: "Opened Cigarettes" */
			*iParam0 = -885810591; /* GXTEntry: "Premium Cigarettes" */
			break;
		default:
			return 0;
	}
	return 1;
}

int func_101(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_102(int iParam0)
{
	return iParam0;
}

int func_103(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

int func_104(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

bool func_105(int iParam0)
{
	return func_90(iParam0) == joaat("weapon");
}

int func_106(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_101(iParam0, 0) && !func_103(func_102(iParam0), 2))
	{
		return 0;
	}
	if (func_90(iParam0) == 26423971)
	{
		return -1;
	}
	if (!bParam2 && func_104(iParam0, joaat("default")) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_134(bParam3), iParam0);
}

int func_107(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_101(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_104(iParam0, joaat("default")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_91(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_134(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_134(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

int func_108(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_101(iParam0, 0))
	{
		return 0;
	}
	if (Global_1939178->f_6)
	{
		return 0;
	}
	iVar0 = func_141(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_142("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_143(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_144(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_145(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_145(iVar1);
	}
	return 0;
}

bool func_109(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_101(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_97(iParam0);
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
	iVar1 = func_146(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_147(&(Global_17172.f_54.f_644.f_1353.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_148(iParam0);
	iVar2 = func_147(&(Global_17172.f_54.f_644.f_1353.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17172.f_54.f_644.f_1353.f_5[iVar2 /*17*/];
}

int func_110(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_101(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_90(iParam0);
	if (iVar1 == joaat("ammo") || (bParam1 && iVar1 == joaat("weapon")))
	{
		iVar2 = func_141(iParam0, 1);
		if (iVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar2);
		}
	}
	else if (iVar1 == joaat("weapon"))
	{
		return func_149(iParam0, 0);
	}
	if (func_104(iParam0, joaat("default")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_134(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_150(iParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_134(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

int func_111()
{
	return Global_1132549->f_137;
}

void func_112(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_115() - fParam1);
	func_151(uParam0, 1);
	func_152(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_113(var uParam0)
{
	return func_153(*uParam0, 1);
}

bool func_114(var uParam0)
{
	return func_153(*uParam0, 2);
}

float func_115()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_116()
{
	return (Global_1070356->f_26934[46 /*4*/])->f_3;
}

int func_117()
{
	return Global_1051202->f_12;
}

char* func_118()
{
	return "unnamed";
}

int func_119(int iParam0)
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

int func_120(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return func_154(35, iParam0);
}

int func_121(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1099294->f_1;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 26;
	}
	if (&Global_1275573->f_22[iParam0])
	{
		return ((*Global_1097610)[iParam0 /*51*/])->f_1;
	}
	return 26;
}

bool func_122(int iParam0)
{
	if (func_155(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) != 1)
		{
			func_156(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) == 1;
}

int func_123(var uParam0, struct<21> Param1)
{
	if (!func_157(uParam0))
	{
		return 0;
	}
	*(uParam0->f_2[*uParam0 /*21*/]) = { Param1 };
	*uParam0++;
	return 1;
}

bool func_124(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

var func_125(int iParam0)
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
		iVar53 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Var0[iVar52 /*7*/]);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar53))
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar50, iVar53);
		}
		iVar52++;
	}
	return uVar50;
}

int func_126()
{
	return Global_1951141->f_1;
}

int func_127(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_128(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(&(Global_17172.f_2563[iParam0]), iParam1);
}

int func_129(int iParam0)
{
	if (func_131(iParam0, 4))
	{
		return 0;
	}
	return 1;
}

int func_130(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if ((Global_1904613->f_31[iParam0 /*9*/])->f_2 & 98304 == 0)
	{
		return 0;
	}
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar0 = 0;
	while (iVar0 < Global_39.f_3327)
	{
		if ((Global_39.f_3327[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if ((Global_1904613->f_31[iParam0 /*9*/])->f_2 & 131072 != 0)
			{
				iVar3 = 2;
			}
			if ((Global_1904613->f_31[iParam0 /*9*/])->f_2 & 524288 != 0)
			{
				iVar3 = 5;
			}
			iVar2 = (&Global_39.f_3327[iVar0 /*3*/] - iVar1);
			if ((Global_39.f_3327[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && (Global_1904613->f_31[iParam0 /*9*/])->f_2 & 32768 != 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_131(int iParam0, int iParam1)
{
	return ((Global_1904613->f_31[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_132(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_133()
{
	if (!func_158())
	{
		return 0;
	}
	return Global_1904613->f_8196;
}

int func_134(bool bParam0)
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

struct<4> func_135()
{
	struct<4> Var0;

	return Var0;
}

bool func_136()
{
	return (func_159(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0, 0, 0) > 0 && func_160(func_91(889965687 /* GXTEntry: "Wardrobe" */, func_89(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_137(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_134(0);
	*uParam1 = { func_91(iParam0, func_92(0), iParam3, 0) };
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

int func_138(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 487172188)
	{
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("default")) == -1925887917)
		{
			return 0;
		}
	}
	return ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, iParam2);
}

int func_139(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_134(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

bool func_140(int iParam0)
{
	return func_161(iParam0, 1279601681);
}

int func_141(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_101(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_90(iParam0);
	if (iVar0 == joaat("weapon") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("ammo") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_161(iParam0, 1399091007))
	{
		func_162(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_142(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_134(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_143(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_144(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

int func_145(int iParam0)
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

int func_146(int iParam0)
{
	switch (iParam0)
	{
		case -577270367:
			return 241235545;
		case 194818087:
			return 1827902148;
		case -845885815:
			return 1301555144;
		case -1869018428: /* GXTEntry: "No Foundation" */
			return -2056583192;
		case 1710247623: /* GXTEntry: "No Blush" */
			return 1015239729;
		case 1964684696: /* GXTEntry: "No Eye Liner" */
			return -340627321;
		case -2087489409: /* GXTEntry: "No Eye Shadow" */
			return -875805376;
		case -860557048: /* GXTEntry: "No Lipstick" */
			return -768760704;
		case -28107610:
			return -2118203104;
		case -896045342:
			return 1285634184;
		case -643819742:
			return -559080197;
		case -1504407916:
			return -1180698265;
		case -1386156083:
			return -487028314;
		case 1687431937:
			return -1811760631;
		case 1613216286:
			return 1858448324;
		default:
			break;
	}
	return 0;
}

int func_147(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (((*uParam0)[iVar0 /*17*/])->f_1 == -1)
		{
		}
		else
		{
			if (((*uParam0)[iVar0 /*17*/])->f_16 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_148(int iParam0)
{
	int iVar0;

	iVar0 = func_97(iParam0);
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

int func_149(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_163(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_164(&Var0, func_92(0));
	}
	if (!func_165(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_145(iVar14);
	return uVar15;
}

struct<4> func_150(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_62(iParam0, bParam1, 0) };
	return func_91(iParam0, Var0, Var0.f_4, bParam1);
}

void func_151(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_152(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_153(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_154(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_166(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 == func_167())
	{
		return func_166(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1275573->f_22[iParam1])
	{
		return func_166(&(((*Global_1097610)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

int func_155(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), iParam0))
	{
		return 1;
	}
	return 0;
}

void func_156(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (!&Global_1275573->f_22[iVar0])
	{
		func_168(iParam0);
		return;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_169(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 1;
}

int func_157(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return 0;
	}
	return 1;
}

int func_158()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return 1;
	}
	return 0;
}

int func_159(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_170(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_134(bParam1), iParam0, iParam3);
}

int func_160(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_171(&uParam0, iParam4, bParam5, iParam6);
}

int func_161(int iParam0, int iParam1)
{
	if (!func_101(iParam0, 0))
	{
		return func_172(func_102(iParam0), iParam1);
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

void func_162(int iParam0, var uParam1, var uParam2)
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

struct<14> func_163(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_164(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_165(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_134(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

bool func_166(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_167()
{
	return Global_1099294->f_339;
}

void func_168(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] == 0)
	{
		return;
	}
	func_169(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 0;
}

void func_169(int iParam0)
{
	if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 != 0)
	{
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = 0;
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 = 0;
	}
}

bool func_170(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_171(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_173(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_172(int iParam0, int iParam1)
{
	if (!func_103(iParam0, 2))
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

int func_173(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_134(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return 0;
	}
	if (!func_139(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return 0;
	}
	return 1;
}

