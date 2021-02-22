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
	float fLocal_13 = 0f;
	float fLocal_14 = 0f;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	var uLocal_22 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0[3];
	int iVar4;
	bool bVar5;

	fLocal_13 = 1f;
	fLocal_14 = 1f;
	func_1();
	func_2();
	func_3();
	iVar4 = 0;
	iVar0[0] = VOLUME::_CREATE_VOLUME_CYLINDER(224.4328f, 1906.671f, 203.5702f, 0f, 0f, 0f, 1.25f, 1.25f, 3f);
	iVar0[1] = VOLUME::_CREATE_VOLUME_CYLINDER(191.766f, 1831.39f, 198.4614f, 0f, 0f, 0f, 1.25f, 1.25f, 3f);
	iVar0[2] = VOLUME::_CREATE_VOLUME_CYLINDER(129.107f, 1878.372f, 198.1505f, 0f, 0f, 0f, 1.25f, 1.25f, 3f);
	bVar5 = true;
	while (bVar5)
	{
		if (func_4() == -1)
		{
		}
		else
		{
			Global_1896622.f_51 = NETWORK::_0xFB9ECED5B68F3B78(Global_1896622.f_42);
			iVar4 = 0;
			iVar4 = 0;
			while (iVar4 <= 2)
			{
				func_5(&(iVar0[iVar4]));
				iVar4++;
			}
			if (func_6(1, 1))
			{
				bVar5 = false;
			}
		}
		BUILTIN::WAIT(0);
	}
	iVar4 = 0;
	iVar4 = 0;
	while (iVar4 <= 2)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iVar0[iVar4]))
		{
			VOLUME::_DELETE_VOLUME(iVar0[iVar4]);
		}
		iVar4++;
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
	iLocal_21 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volLawSpawn_Blocking Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_21, 876.182f, 1657.932f, 195.6166f, 0f, 0f, 38.34586f, 200f, 18.62544f, 17.04508f);
	VOLUME::_0x39816F6F94F385AD(iLocal_21, 1125.173f, 1763.45f, 195.6166f, 0f, 0f, 23.33992f, 509.4832f, 82.88351f, 17.04508f);
	uLocal_22 = MISC::_0xA2D5A26208421426(iLocal_21);
}

void func_3()
{
	iLocal_15 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-382.5f, 1917.5f, 225f, 0f, 0f, 0f, 65f, 65f, 40f, "m_volChezPorter_Restriction");
	func_8(iLocal_15);
	iLocal_16 = func_9(iLocal_16);
	func_10(iLocal_16, 0, 0);
	iLocal_17 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(465f, 2215f, 250f, 0f, 0f, 0f, 110f, 110f, 50f, "m_volWapiti_Restriction");
	func_8(iLocal_17);
	iLocal_18 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(749.1984f, 1823.562f, 245.6922f, 0f, 0f, 45f, 12.5f, 10f, 30f, "m_volChelonianHut_Restriction");
	func_11(iLocal_18, 0, 0);
	iLocal_19 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1701.532f, 1509.786f, 147.5539f, 0f, 0f, 8.3768f, 10.10543f, 7.489669f, 5.494266f, "m_volVeteransHomestead_Restriction");
	func_12(iLocal_19, 0, 0);
	iLocal_20 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(800f, 890f, 118f, 0f, 0f, 66f, 80f, 65f, 12f, "m_volCarmodyDell_Restriction");
	func_8(iLocal_20);
}

int func_4()
{
	return Global_1572887.f_13;
}

void func_5(var uParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), *uParam0, true, 0))
	{
		return;
	}
	func_13(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_DROWNING"), 0, 0);
}

bool func_6(bool bParam0, bool bParam1)
{
	int iVar0;

	if (Global_1572887.f_12)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam1 && NETWORK::_0xF2CBC969C4F090C7())
		{
		}
		else if (bParam1 && NETWORK::NETWORK_IS_SESSION_ACTIVE())
		{
		}
		else if (bParam1 && Global_1572887 < 39)
		{
		}
		else
		{
			return true;
		}
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return true;
	}
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
		{
			case 0:
				return true;
			case 1:
				return true;
			case 2:
				if (!bParam0)
				{
					return true;
				}
				break;
			case 4:
				return true;
			case 3:
				return true;
			default:
				return true;
		}
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0) == 1976253964)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_7()
{
	func_14();
}

void func_8(int iParam0)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, 231, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, 231, 16384, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(231, 16384, 0, -1, -1, iParam0);
}

int func_9(int iParam0)
{
	iParam0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("RIVER_RESTRICTION_GRZ_EAST");
	VOLUME::_0x39816F6F94F385AD(iParam0, 65.5f, 1660f, 115f, 0f, 0f, 6f, 50f, 215f, 200f);
	VOLUME::_0x39816F6F94F385AD(iParam0, 162.5f, 1645f, 115f, 0f, 0f, -7f, 200f, 225f, 200f);
	VOLUME::_0x39816F6F94F385AD(iParam0, 265f, 1645f, 115f, 0f, 0f, 45f, 200f, 150f, 200f);
	VOLUME::_0x39816F6F94F385AD(iParam0, 387.5f, 1750f, 115f, 0f, 0f, 11f, 200f, 75f, 200f);
	VOLUME::_0x39816F6F94F385AD(iParam0, 410f, 1722.5f, 115f, 0f, 0f, 33f, 150f, 75f, 200f);
	return iParam0;
}

void func_10(int iParam0, int iParam1, bool bParam2)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_15(&iParam1, 8192);
	}
	POPULATION::_0x2161278C6322F740(iParam1 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
}

void func_11(int iParam0, int iParam1, bool bParam2)
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

void func_13(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<13> Var0;

	if (ENTITY::_IS_ENTITY_FROZEN(Global_1296859.f_8))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_1296859.f_8))
	{
		if (bParam2)
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(Global_1296859.f_8, true);
		}
		if (bParam3)
		{
			PED::SET_PED_CONFIG_FLAG(Global_1296859.f_8, 243, true);
		}
		Var0 = PLAYER::PLAYER_PED_ID();
		Var0.f_1 = iParam0;
		Var0.f_2 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()));
		Var0.f_3 = 1;
		Var0.f_5 = iParam1;
		Var0.f_12 = (iParam1 != 0 && WEAPON::_IS_WEAPON_MELEE(iParam1));
		func_16(&Var0, &(Global_1102219.f_3599));
		PED::_0x1CE875505D45338A(PLAYER::PLAYER_PED_ID(), iParam0, iParam1);
	}
}

void func_14()
{
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_21))
	{
		MISC::REMOVE_DISPATCH_SPAWN_BLOCKING_AREA(uLocal_22);
	}
}

void func_15(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_16(var uParam0, var uParam1)
{
	if (func_17(uParam0, uParam1))
	{
		uParam1->f_63 = func_18(uParam1);
	}
}

bool func_17(var uParam0, var uParam1)
{
	bool bVar0;

	func_19(uParam1);
	uParam1->f_30 = { *uParam0 };
	uParam1->f_62 = uParam0->f_5;
	bVar0 = true;
	func_20(uParam1);
	if (!func_21(*uParam0, &(uParam1->f_18)))
	{
		bVar0 = false;
	}
	else if (!func_22(&(uParam1->f_18), &(uParam1->f_24)))
	{
	}
	if (uParam0->f_5 == joaat("WEAPON_FALL"))
	{
		if ((*uParam0 != uParam0->f_1 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_1)) && ENTITY::IS_ENTITY_A_PED(uParam0->f_1))
		{
		}
		else
		{
			return true;
		}
	}
	if (uParam0->f_5 == joaat("WEAPON_DROWNING"))
	{
		if ((*uParam0 != uParam0->f_1 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_1)) && ENTITY::IS_ENTITY_A_PED(uParam0->f_1))
		{
		}
		else
		{
			return true;
		}
	}
	if (uParam0->f_5 == joaat("WEAPON_DROWNING_IN_VEHICLE"))
	{
		return true;
	}
	if (!func_21(uParam0->f_1, &(uParam1->f_6)))
	{
		bVar0 = false;
	}
	else if (!func_22(&(uParam1->f_6), &(uParam1->f_12)))
	{
	}
	if (bVar0)
	{
	}
	else
	{
		return true;
	}
	return bVar0;
}

int func_18(var uParam0)
{
	int iVar0;

	if (uParam0->f_18 == 6)
	{
		return 0;
	}
	if (uParam0->f_30.f_31)
	{
		return 2;
	}
	if (uParam0->f_30.f_5 == joaat("WEAPON_FALL") && uParam0->f_18 == 1)
	{
		if (uParam0->f_6 == 1 || uParam0->f_12 == 1)
		{
		}
		else
		{
			return 2;
		}
	}
	if ((uParam0->f_30.f_5 == joaat("WEAPON_DROWNING") || uParam0->f_30.f_5 == joaat("WEAPON_DROWNING_IN_VEHICLE")) && uParam0->f_18 == 1)
	{
		if (uParam0->f_6 == 1 || uParam0->f_12 == 1)
		{
		}
		else
		{
			return 1;
		}
	}
	if (uParam0->f_30.f_5 == joaat("WEAPON_POISON"))
	{
		if (Global_1940085.f_28.f_1 == 1)
		{
			return 28;
		}
		if ((uParam0->f_18 == 1 && (uParam0->f_6 == 1 || uParam0->f_12 == 1)) && (uParam0->f_6.f_3 == uParam0->f_18.f_3 || uParam0->f_12.f_3 == uParam0->f_18.f_3))
		{
			return 2;
		}
	}
	iVar0 = func_23(uParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	iVar0 = func_24(uParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	iVar0 = func_25(uParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	if (uParam0->f_18 == 1)
	{
		return 1;
	}
	return 1;
}

void func_19(var uParam0)
{
	struct<32> Var0;

	func_26(uParam0);
	func_26(&(uParam0->f_6));
	func_26(&(uParam0->f_12));
	func_26(&(uParam0->f_18));
	func_26(&(uParam0->f_24));
	uParam0->f_30 = { Var0 };
	uParam0->f_63 = 0;
}

int func_20(var uParam0)
{
	*uParam0 = 1;
	uParam0->f_3 = PLAYER::PLAYER_ID();
	uParam0->f_2 = PLAYER::GET_PLAYER_PED(uParam0->f_3);
	uParam0->f_1 = func_27(uParam0->f_2);
	uParam0->f_4 = PLAYER::GET_PLAYER_TEAM(uParam0->f_3);
	uParam0->f_5 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_2);
	return 1;
}

bool func_21(int iParam0, var uParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		*uParam1 = 6;
		uParam1->f_1 = iParam0;
		uParam1->f_2 = 0;
		uParam1->f_3 = 255;
		uParam1->f_4 = -1;
		uParam1->f_5 = joaat("REL_NO_RELATIONSHIP");
		return false;
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_A_PLAYER(iVar0))
		{
			*uParam1 = 1;
		}
		else if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iParam0)))
		{
			*uParam1 = 3;
		}
		else if (PED::IS_PED_HUMAN(iVar0))
		{
			*uParam1 = 2;
		}
		else
		{
			*uParam1 = 5;
		}
	}
	else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		*uParam1 = 4;
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		*uParam1 = 6;
	}
	else
	{
		return false;
	}
	switch (*uParam1)
	{
		case 1:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = iVar0;
			uParam1->f_3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uParam1->f_2);
			uParam1->f_4 = PLAYER::GET_PLAYER_TEAM(uParam1->f_3);
			uParam1->f_5 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(uParam1->f_2);
			break;
		case 5:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = iVar0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(uParam1->f_2);
			break;
		case 2:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = iVar0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(uParam1->f_2);
			break;
		case 3:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = iVar0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(uParam1->f_2);
			break;
		case 4:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = 0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = joaat("REL_NO_RELATIONSHIP");
			break;
		case 6:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = 0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = joaat("REL_NO_RELATIONSHIP");
			break;
	}
	return true;
}

bool func_22(var uParam0, var uParam1)
{
	switch (*uParam0)
	{
		case 3:
			return func_21(PED::_GET_RIDER_OF_MOUNT(uParam0->f_2, false), uParam1);
		case 4:
			return func_21(VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_1, -1), uParam1);
		default:
			break;
	}
	return false;
}

int func_23(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (uParam0->f_18 != 1)
	{
		return 0;
	}
	if (uParam0->f_6 == 2)
	{
		return 0;
	}
	bVar0 = false;
	if (uParam0->f_6 == 1)
	{
		bVar0 = true;
		iVar1 = uParam0->f_6.f_4;
		iVar2 = uParam0->f_18.f_4;
		iVar3 = PED::GET_RELATIONSHIP_BETWEEN_PEDS(uParam0->f_6.f_2, uParam0->f_18.f_2);
	}
	else if (uParam0->f_12 == 1 && (uParam0->f_6 == 3 || uParam0->f_6 == 4))
	{
		bVar0 = true;
		iVar1 = uParam0->f_12.f_4;
		iVar2 = uParam0->f_18.f_4;
		iVar3 = PED::GET_RELATIONSHIP_BETWEEN_PEDS(uParam0->f_12.f_2, uParam0->f_18.f_2);
	}
	if (!bVar0)
	{
		return 0;
	}
	if (uParam0->f_6.f_3 == uParam0->f_18.f_3 || uParam0->f_12.f_3 == uParam0->f_18.f_3)
	{
		return 2;
	}
	else if (iVar1 == 8 && iVar2 == 8)
	{
		return 8;
	}
	else if (iVar1 == 8 && iVar2 != 8)
	{
		return 5;
	}
	else if (iVar1 != 8 && iVar2 == 8)
	{
		return 6;
	}
	else if ((iVar1 == -1 && iVar2 == -1) && NETWORK::_0xFE53B1F8D43F19BF(uParam0->f_6.f_3, uParam0->f_18.f_3) != 1)
	{
		return 7;
	}
	else if (iVar1 == iVar2 || NETWORK::_0xFE53B1F8D43F19BF(uParam0->f_6.f_3, uParam0->f_18.f_3) == 1)
	{
		return 9;
	}
	else if (iVar1 != iVar2)
	{
		return 7;
	}
	else
	{
		switch (iVar3)
		{
			case 1:
				return 9;
			case 2:
				return 9;
			case 3:
				return 9;
			case 4:
				return 7;
			case 6:
				return 7;
			case 5:
				return 4;
			case 7:
				return 4;
			case 0:
				return 4;
			default:
				break;
		}
		return 4;
	}
	return 0;
}

int func_24(var uParam0)
{
	bool bVar0;
	int iVar1;

	if (uParam0->f_6 == 2)
	{
		return 0;
	}
	if (uParam0->f_18 == 1)
	{
		return 0;
	}
	if (uParam0->f_18 == 4)
	{
		return 18;
	}
	if (uParam0->f_18 == 6)
	{
		return 17;
	}
	bVar0 = false;
	if (uParam0->f_6 == 1)
	{
		bVar0 = true;
		iVar1 = PED::GET_RELATIONSHIP_BETWEEN_GROUPS(uParam0->f_6.f_5, uParam0->f_18.f_5);
	}
	else if (uParam0->f_12 == 1 && (uParam0->f_6 == 3 || uParam0->f_6 == 4))
	{
		bVar0 = true;
		iVar1 = PED::GET_RELATIONSHIP_BETWEEN_GROUPS(uParam0->f_12.f_5, uParam0->f_18.f_5);
	}
	if (!bVar0)
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_18.f_1))
	{
		if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(uParam0->f_18.f_1)))
		{
			return 19;
		}
	}
	if (LAW::_0x40851BCC33ACD9AB(uParam0->f_18.f_2))
	{
		return 11;
	}
	if (((!PED::IS_PED_HUMAN(uParam0->f_18.f_2) && !PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(uParam0->f_18.f_1))) && FLOCK::_0xF8B48A361DC388AE(uParam0->f_18.f_2) == 2) && FLOCK::_0x3B005FF0538ED2A9(uParam0->f_18.f_2) == 1)
	{
		return 16;
	}
	switch (uParam0->f_18.f_5)
	{
		case joaat("REL_CIVMALE"):
			return 10;
		case joaat("REL_CIVFEMALE"):
			return 10;
		case joaat("REL_CIVNATIVE"):
			return 10;
		case joaat("REL_DOMESTICATED_ANIMAL"):
			if (FLOCK::_0x3B005FF0538ED2A9(uParam0->f_18.f_2) == 1)
			{
				return 14;
			}
			return 10;
		case joaat("REL_HEN_ANIMAL"):
			return 10;
		case joaat("REL_COP"):
			return 11;
		case joaat("REL_GUAMA_LAW"):
			return 11;
		case joaat("REL_PINKERTONS"):
			return 11;
		case joaat("REL_WILD_ANIMAL"):
			return 14;
		case joaat("REL_WILD_ANIMAL_BIRD"):
			return 14;
		case joaat("REL_WILD_ANIMAL_PREDATOR"):
			return 15;
		case joaat("REL_ALLIGATOR"):
			return 15;
		case joaat("REL_BOAR"):
			return 15;
		case joaat("REL_PLAYER_ENEMY"):
			return 12;
		case joaat("REL_CRIMINALS"):
			return 12;
		case joaat("REL_GUNSLINGERS"):
			return 12;
		case joaat("REL_GANG_DUTCHS"):
			return 12;
		case joaat("REL_GANG_SKINNER_BROTHERS"):
			return 12;
		case joaat("REL_GANG_CREOLE"):
			return 12;
		case joaat("REL_GANG_LEMOYNE_RAIDERS"):
			return 12;
		case joaat("REL_GANG_SMUGGLERS"):
			return 12;
		case joaat("REL_GANG_ODRISCOLL"):
			return 12;
		case joaat("REL_GANG_MURFREE_BROOD"):
			return 12;
		case joaat("REL_NETWORK_FREE_AGENT"):
			return 20;
		case joaat("REL_GT_FFA"):
			return 20;
		case joaat("REL_GT_TEAM_0"):
			return 20;
		case joaat("REL_GT_TEAM_1"):
			return 20;
		case joaat("REL_GT_TEAM_2"):
			return 20;
		case joaat("REL_GT_TEAM_3"):
			return 20;
		case joaat("REL_GT_TEAM_4"):
			return 20;
		case joaat("REL_GT_TEAM_5"):
			return 20;
		case joaat("REL_GT_TEAM_6"):
			return 20;
		case joaat("REL_GT_TEAM_7"):
			return 20;
		case joaat("REL_PLAYER_COP"):
			return 20;
		case joaat("REL_PLAYER_0"):
			return 20;
		case joaat("REL_PLAYER_1"):
			return 20;
		case joaat("REL_PLAYER_2"):
			return 20;
		case joaat("REL_PLAYER_3"):
			return 20;
		case joaat("REL_PLAYER_4"):
			return 20;
		case joaat("REL_PLAYER_5"):
			return 20;
		case joaat("REL_PLAYER_6"):
			return 20;
		case joaat("REL_PLAYER_7"):
			return 20;
		case joaat("REL_PLAYER_8"):
			return 20;
		case joaat("REL_PLAYER_9"):
			return 20;
		case joaat("REL_PLAYER_10"):
			return 20;
		case joaat("REL_PLAYER_11"):
			return 20;
		case joaat("REL_PLAYER_12"):
			return 20;
		case joaat("REL_PLAYER_13"):
			return 20;
		case joaat("REL_PLAYER_14"):
			return 20;
		case joaat("REL_PLAYER_15"):
			return 20;
		case joaat("REL_PLAYER_16"):
			return 20;
		case joaat("REL_PLAYER_17"):
			return 20;
		case joaat("REL_PLAYER_18"):
			return 20;
		case joaat("REL_PLAYER_19"):
			return 20;
		case joaat("REL_PLAYER_20"):
			return 20;
		case joaat("REL_PLAYER_21"):
			return 20;
		case joaat("REL_PLAYER_22"):
			return 20;
		case joaat("REL_PLAYER_23"):
			return 20;
		case joaat("REL_PLAYER_24"):
			return 20;
		case joaat("REL_PLAYER_25"):
			return 20;
		case joaat("REL_PLAYER_26"):
			return 20;
		case joaat("REL_PLAYER_27"):
			return 20;
		case joaat("REL_PLAYER_28"):
			return 20;
		case joaat("REL_PLAYER_29"):
			return 20;
		case joaat("REL_PLAYER_30"):
			return 20;
		case joaat("REL_PLAYER_31"):
			return 20;
		default:
			break;
	}
	switch (iVar1)
	{
		case 1:
			return 10;
		case 2:
			return 10;
		case 3:
			return 10;
		case 4:
			return 12;
		case 6:
			return 12;
		case 5:
			return 13;
		case 7:
			return 13;
		case 0:
			return 13;
		default:
			break;
	}
	return 13;
	return 0;
}

int func_25(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (uParam0->f_6 == 1)
	{
		return 0;
	}
	if (uParam0->f_18 != 1)
	{
		return 0;
	}
	bVar0 = false;
	bVar1 = false;
	if (uParam0->f_12 == 2 && (uParam0->f_6 == 3 || uParam0->f_6 == 4))
	{
		bVar0 = true;
		iVar3 = uParam0->f_12.f_5;
		iVar2 = PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iVar3, uParam0->f_18.f_5);
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_12.f_2) && LAW::_0x40851BCC33ACD9AB(uParam0->f_12.f_2))
		{
			bVar1 = true;
		}
	}
	else if (uParam0->f_6 != 1 && uParam0->f_6 != 0)
	{
		bVar0 = true;
		iVar3 = uParam0->f_6.f_5;
		iVar2 = PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iVar3, uParam0->f_18.f_5);
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_6.f_2) && LAW::_0x40851BCC33ACD9AB(uParam0->f_6.f_2))
		{
			bVar1 = true;
		}
	}
	if (!bVar0)
	{
		return 0;
	}
	if (bVar1)
	{
		return 22;
	}
	switch (iVar3)
	{
		case joaat("REL_CIVMALE"):
			return 21;
		case joaat("REL_CIVFEMALE"):
			return 21;
		case joaat("REL_CIVNATIVE"):
			return 21;
		case joaat("REL_DOMESTICATED_ANIMAL"):
			return 21;
		case joaat("REL_HEN_ANIMAL"):
			return 21;
		case joaat("REL_COP"):
			return 22;
		case joaat("REL_GUAMA_LAW"):
			return 22;
		case joaat("REL_PINKERTONS"):
			return 22;
		case joaat("REL_WILD_ANIMAL"):
			return 25;
		case joaat("REL_WILD_ANIMAL_BIRD"):
			return 25;
		case joaat("REL_WILD_ANIMAL_PREDATOR"):
			return 26;
		case joaat("REL_ALLIGATOR"):
			return 26;
		case joaat("REL_BOAR"):
			return 26;
		case joaat("REL_PLAYER_ENEMY"):
			return 23;
		case joaat("REL_CRIMINALS"):
			return 23;
		case joaat("REL_GUNSLINGERS"):
			return 23;
		case joaat("REL_GANG_DUTCHS"):
			return 23;
		case joaat("REL_GANG_SKINNER_BROTHERS"):
			return 23;
		case joaat("REL_GANG_CREOLE"):
			return 23;
		case joaat("REL_GANG_LEMOYNE_RAIDERS"):
			return 23;
		case joaat("REL_GANG_SMUGGLERS"):
			return 23;
		case joaat("REL_GANG_ODRISCOLL"):
			return 23;
		case joaat("REL_GANG_MURFREE_BROOD"):
			return 23;
		case joaat("REL_NETWORK_FREE_AGENT"):
			return 27;
		case joaat("REL_GT_FFA"):
			return 27;
		case joaat("REL_GT_TEAM_0"):
			return 27;
		case joaat("REL_GT_TEAM_1"):
			return 27;
		case joaat("REL_GT_TEAM_2"):
			return 27;
		case joaat("REL_GT_TEAM_3"):
			return 27;
		case joaat("REL_GT_TEAM_4"):
			return 27;
		case joaat("REL_GT_TEAM_5"):
			return 27;
		case joaat("REL_GT_TEAM_6"):
			return 27;
		case joaat("REL_GT_TEAM_7"):
			return 27;
		case joaat("REL_PLAYER_COP"):
			return 27;
		case joaat("REL_PLAYER_0"):
			return 27;
		case joaat("REL_PLAYER_1"):
			return 27;
		case joaat("REL_PLAYER_2"):
			return 27;
		case joaat("REL_PLAYER_3"):
			return 27;
		case joaat("REL_PLAYER_4"):
			return 27;
		case joaat("REL_PLAYER_5"):
			return 27;
		case joaat("REL_PLAYER_6"):
			return 27;
		case joaat("REL_PLAYER_7"):
			return 27;
		case joaat("REL_PLAYER_8"):
			return 27;
		case joaat("REL_PLAYER_9"):
			return 27;
		case joaat("REL_PLAYER_10"):
			return 27;
		case joaat("REL_PLAYER_11"):
			return 27;
		case joaat("REL_PLAYER_12"):
			return 27;
		case joaat("REL_PLAYER_13"):
			return 27;
		case joaat("REL_PLAYER_14"):
			return 27;
		case joaat("REL_PLAYER_15"):
			return 27;
		case joaat("REL_PLAYER_16"):
			return 27;
		case joaat("REL_PLAYER_17"):
			return 27;
		case joaat("REL_PLAYER_18"):
			return 27;
		case joaat("REL_PLAYER_19"):
			return 27;
		case joaat("REL_PLAYER_20"):
			return 27;
		case joaat("REL_PLAYER_21"):
			return 27;
		case joaat("REL_PLAYER_22"):
			return 27;
		case joaat("REL_PLAYER_23"):
			return 27;
		case joaat("REL_PLAYER_24"):
			return 27;
		case joaat("REL_PLAYER_25"):
			return 27;
		case joaat("REL_PLAYER_26"):
			return 27;
		case joaat("REL_PLAYER_27"):
			return 27;
		case joaat("REL_PLAYER_28"):
			return 27;
		case joaat("REL_PLAYER_29"):
			return 27;
		case joaat("REL_PLAYER_30"):
			return 27;
		case joaat("REL_PLAYER_31"):
			return 27;
		default:
			break;
	}
	switch (iVar2)
	{
		case 1:
			return 21;
		case 2:
			return 21;
		case 3:
			return 21;
		case 4:
			return 23;
		case 6:
			return 23;
		case 5:
			return 24;
		case 7:
			return 24;
		case 0:
			return 24;
		default:
			break;
	}
	return 24;
	return 0;
}

void func_26(var uParam0)
{
	struct<6> Var0;

	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = joaat("REL_NO_RELATIONSHIP");
	*uParam0 = { Var0 };
}

var func_27(var uParam0)
{
	return uParam0;
}

