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
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = -1;
	var uLocal_22 = -1;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = -1;
	var uScriptParam_3 = -1;
#endregion

void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	func_1();
	func_2(&uLocal_19, &uScriptParam_0);
	while (!func_3(1, 1) && func_4(&uLocal_19))
	{
		BUILTIN::WAIT(0);
	}
	func_5(&uLocal_19);
}

void func_1()
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	BRAIN::_0x4AA5EA1EDFB25786(0);
	BRAIN::_0xA6AC35DB4A7957A8(99999);
}

void func_2(var uParam0, var uParam1)
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = { uParam1->f_2 };
	uParam0->f_6 = BRAIN::_0x6818D1A194E29983();
}

bool func_3(bool bParam0, bool bParam1)
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

bool func_4(var uParam0)
{
	if (func_6(uParam0))
	{
		return false;
	}
	if (func_7(uParam0))
	{
		func_8(uParam0->f_6);
		return true;
	}
	if (func_9(uParam0))
	{
		func_10(uParam0->f_6);
		return true;
	}
	func_11(uParam0);
	func_12(uParam0);
	if (func_13(*uParam0))
	{
		func_14(uParam0);
	}
	else if (func_15(*uParam0))
	{
		func_16(uParam0);
	}
	return true;
}

void func_5(var uParam0)
{
	func_17(&(uParam0->f_11), 1, 1);
	if (MAP::DOES_BLIP_EXIST(uParam0->f_7))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_7));
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_6(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_6))
	{
		return true;
	}
	return false;
}

bool func_7(var uParam0)
{
	if (func_18(uParam0, 1))
	{
		return true;
	}
	else if (func_19() != 0)
	{
		return true;
	}
	else if (Global_1048576 || Global_2883584)
	{
		return true;
	}
	else if (Global_1048577)
	{
		return true;
	}
	else if (func_21(func_20(0)) == 7)
	{
		return true;
	}
	return false;
}

int func_8(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		ENTITY::DELETE_ENTITY(&iParam0);
		return 1;
	}
	return 0;
}

bool func_9(var uParam0)
{
	if (func_13(*uParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_6))
		{
			return true;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_6), false, false))
		{
			return true;
		}
	}
	else if (func_15(*uParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_6))
		{
			return true;
		}
	}
	return false;
}

int func_10(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iParam0);
		return 1;
	}
	return 0;
}

void func_11(var uParam0)
{
	int iVar0;
	struct<4> Var1;
	struct<4> Var5;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0) == -507840394)
		{
			Var1 = { Var5 };
			SCRIPTS::GET_EVENT_DATA(1, iVar0, &Var1, 4);
			if (Var1 == 18)
			{
				func_22(uParam0, iVar0);
			}
		}
		iVar0++;
	}
}

void func_12(var uParam0)
{
	int iVar0;

	if (!func_23(&(uParam0->f_8)))
	{
		func_24(&(uParam0->f_8));
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_6))
	{
		if (func_25(&(uParam0->f_8)) > 7000)
		{
			if (!func_26(uParam0))
			{
				func_27(uParam0->f_6, NETWORK::GET_NETWORK_TIME_ACCURATE());
			}
			else
			{
				iVar0 = func_28(uParam0->f_6);
				if (uParam0->f_5 != iVar0)
				{
					uParam0->f_5 = iVar0;
				}
				else
				{
					func_29(uParam0, 1);
				}
			}
			func_30(&(uParam0->f_8));
		}
	}
	else if (func_25(&(uParam0->f_8)) > 3000)
	{
		if (!func_26(uParam0))
		{
			func_31(uParam0->f_6, NETWORK::GET_NETWORK_TIME_ACCURATE());
		}
		func_30(&(uParam0->f_8));
	}
}

bool func_13(int iParam0)
{
	return (iParam0 >= 1 && iParam0 <= 1);
}

void func_14(var uParam0)
{
	func_32(uParam0);
	func_33(uParam0);
}

bool func_15(int iParam0)
{
	return (iParam0 >= 2 && iParam0 <= 2);
}

void func_16(var uParam0)
{
	func_34(uParam0);
	func_35(uParam0);
}

void func_17(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_36(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_37(*uParam0);
	if (Global_1951255[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_38(iVar0);
	*uParam0 = 0;
}

bool func_18(var uParam0, int iParam1)
{
	return func_39(uParam0->f_4, iParam1);
}

int func_19()
{
	return Global_1572887.f_13;
}

struct<2> func_20(int iParam0)
{
	return Global_1900736.f_1[iParam0 /*2*/];
}

int func_21(var uParam0, var uParam1)
{
	return uParam0;
}

void func_22(var uParam0, int iParam1)
{
	struct<11> Var0;

	if (SCRIPTS::GET_EVENT_DATA(1, iParam1, &Var0, 12))
	{
		if (Var0.f_5 == *uParam0 && Var0.f_6 == uParam0->f_1)
		{
			switch (Var0.f_4)
			{
				case 0:
					func_40(uParam0->f_6, Var0.f_9);
					break;
				case 1:
					func_41(uParam0->f_6, Var0.f_9);
					break;
				case 2:
					func_27(uParam0->f_6, Var0.f_10);
					break;
				case 3:
					func_42(uParam0->f_6, Var0.f_10);
					break;
				case 4:
					func_43(uParam0->f_6, Var0.f_8);
					break;
				case 5:
					func_8(uParam0->f_6);
					break;
				case 6:
					func_10(uParam0->f_6);
					break;
			}
		}
	}
}

bool func_23(var uParam0)
{
	return func_44(*uParam0, 1);
}

void func_24(var uParam0)
{
	func_45(uParam0, 0);
}

int func_25(var uParam0)
{
	if (!func_23(uParam0))
	{
		return 0;
	}
	if (func_46(uParam0))
	{
		return uParam0->f_2;
	}
	return func_47(uParam0->f_1);
}

bool func_26(var uParam0)
{
	if (func_18(uParam0, 2) || func_18(uParam0, 4))
	{
		return false;
	}
	if (BUILTIN::VDIST(Global_35, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false)) < func_48(*uParam0))
	{
		return false;
	}
	if (func_49(uParam0->f_2) && (func_50(uParam0->f_2) || func_51(uParam0->f_2)))
	{
		return false;
	}
	return true;
}

bool func_27(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		if (func_28(iParam0) != iParam1)
		{
			DECORATOR::DECOR_SET_INT(iParam0, func_52(), iParam1);
		}
		return true;
	}
	return false;
}

int func_28(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !DECORATOR::DECOR_EXIST_ON(iParam0, func_52()))
	{
		return 0;
	}
	return DECORATOR::DECOR_GET_INT(iParam0, func_52());
}

void func_29(var uParam0, int iParam1)
{
	func_53(&(uParam0->f_4), iParam1);
}

void func_30(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

void func_31(int iParam0, int iParam1)
{
	struct<11> Var0;

	if (!func_27(iParam0, iParam1))
	{
		Var0.f_4 = 2;
		Var0.f_5 = func_54(iParam0);
		Var0.f_6 = func_55(iParam0);
		Var0.f_10 = iParam1;
		func_57(&Var0, func_56(0, 8));
	}
}

void func_32(var uParam0)
{
	int iVar0;

	iVar0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_6);
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_34, false))
	{
		if (PED::GET_VEHICLE_PED_IS_IN(Global_34, false) == iVar0)
		{
			if (!func_18(uParam0, 4))
			{
				func_29(uParam0, 4);
			}
			if (VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(iVar0) == Global_34)
			{
				if (!func_18(uParam0, 8))
				{
					func_29(uParam0, 8);
				}
			}
			else if (func_18(uParam0, 8))
			{
				func_58(uParam0, 8);
			}
		}
		else
		{
			if (func_18(uParam0, 4))
			{
				func_58(uParam0, 4);
			}
			if (func_18(uParam0, 8))
			{
				func_58(uParam0, 8);
			}
		}
	}
	else
	{
		if (func_18(uParam0, 4))
		{
			func_58(uParam0, 4);
		}
		if (func_18(uParam0, 8))
		{
			func_58(uParam0, 8);
		}
	}
}

void func_33(var uParam0)
{
	if (!MAP::DOES_BLIP_EXIST(uParam0->f_7))
	{
		if (func_59(uParam0))
		{
			uParam0->f_7 = MAP::_BLIP_ADD_FOR_ENTITY(203020899, uParam0->f_6);
			MAP::SET_BLIP_SPRITE(uParam0->f_7, joaat("BLIP_AMBIENT_WAGON"), true);
		}
	}
	else if (!func_59(uParam0))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_7));
	}
}

void func_34(var uParam0)
{
	if (PED::_GET_RIDER_OF_MOUNT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6), false) == Global_34)
	{
		if (!func_18(uParam0, 4))
		{
			func_60(uParam0);
		}
	}
	else if (func_18(uParam0, 4))
	{
		func_61(uParam0);
	}
}

void func_35(var uParam0)
{
	if (func_18(uParam0, 4) && !func_18(uParam0, 32))
	{
		func_29(uParam0, 32);
	}
	else if (!func_18(uParam0, 4))
	{
		func_58(uParam0, 32);
	}
	if (!MAP::DOES_BLIP_EXIST(uParam0->f_7))
	{
		if (func_62(uParam0))
		{
			uParam0->f_7 = MAP::_BLIP_ADD_FOR_ENTITY(203020899, uParam0->f_6);
			MAP::SET_BLIP_SPRITE(uParam0->f_7, joaat("BLIP_AMBIENT_HORSE"), true);
		}
	}
	else if (!func_62(uParam0))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_7));
	}
}

bool func_36(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 60)
	{
		return false;
	}
	if (Global_1951255[iParam0 /*23*/].f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3);
}

var func_37(var uParam0)
{
	return uParam0;
}

void func_38(int iParam0)
{
	if (!func_63(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		HUD::_UIPROMPT_DELETE(Global_1951255[iParam0 /*23*/].f_3);
	}
	Global_1951255[iParam0 /*23*/].f_4 = 0;
	Global_1951255[iParam0 /*23*/] = 1;
	Global_1951255[iParam0 /*23*/].f_16 = 0;
	Global_1951255[iParam0 /*23*/].f_1 = 0;
	Global_1951255[iParam0 /*23*/].f_6 = { 0f, 0f, 0f };
	Global_1951255[iParam0 /*23*/].f_12 = { 0f, 0f, 0f };
	Global_1951255[iParam0 /*23*/].f_9 = 0f;
	Global_1951255[iParam0 /*23*/].f_10 = 0;
	Global_1951255[iParam0 /*23*/].f_11 = 0;
	Global_1951255[iParam0 /*23*/].f_2 = 1;
	Global_1951255[iParam0 /*23*/].f_15 = -1f;
}

bool func_39(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_40(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		if (func_64(iParam0) != bParam1)
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, func_65(), bParam1);
		}
		return 1;
	}
	return 0;
}

int func_41(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		if (func_66(iParam0) != bParam1)
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, func_67(), bParam1);
			if (TASK::_0x0CCFE72B43C9CF96(iParam0))
			{
				ENTITY::_0x18FF3110CF47115D(iParam0, 2, !bParam1);
				ENTITY::_0x18FF3110CF47115D(iParam0, 3, !bParam1);
				ENTITY::_0x18FF3110CF47115D(iParam0, 11, !bParam1);
				ENTITY::_0x18FF3110CF47115D(iParam0, 12, !bParam1);
			}
		}
		return 1;
	}
	return 0;
}

int func_42(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		if (func_68(iParam0) != iParam1)
		{
			DECORATOR::DECOR_SET_INT(iParam0, func_69(), iParam1);
		}
		return 1;
	}
	return 0;
}

int func_43(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		if (func_70(iParam0) != iParam1)
		{
			if (iParam1 == 255)
			{
			}
			DECORATOR::_DECOR_SET_UINT8(iParam0, func_71(), iParam1);
		}
		return 1;
	}
	return 0;
}

bool func_44(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_45(var uParam0, int iParam1)
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}
	func_72(uParam0, 1);
	func_73(uParam0, 2);
	uParam0->f_2 = 0;
}

bool func_46(var uParam0)
{
	return func_44(*uParam0, 2);
}

int func_47(int iParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

float func_48(int iParam0)
{
	if (func_13(iParam0))
	{
		return func_74();
	}
	else if (func_15(iParam0))
	{
		return func_75();
	}
	return 0f;
}

bool func_49(struct<2> Param0)
{
	if (!func_76(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_77(Param0))
	{
		return false;
	}
	return true;
}

bool func_50(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_78(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

bool func_51(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_78(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

char* func_52()
{
	return "brain_timeStamp";
}

void func_53(var uParam0, int iParam1)
{
	func_79(uParam0, iParam1);
}

int func_54(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !DECORATOR::DECOR_EXIST_ON(iParam0, func_80()))
	{
		return 0;
	}
	return DECORATOR::DECOR_GET_INT(iParam0, func_80());
}

int func_55(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !DECORATOR::DECOR_EXIST_ON(iParam0, func_81()))
	{
		return 0;
	}
	return DECORATOR::DECOR_GET_INT(iParam0, func_81());
}

var func_56(int iParam0, int iParam1)
{
	return func_82(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("VOLCYLINDER"), iParam0, iParam1);
}

void func_57(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 18;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 12, 10, &uParam1);
}

void func_58(var uParam0, int iParam1)
{
	func_83(&(uParam0->f_4), iParam1);
}

bool func_59(var uParam0)
{
	if (*uParam0 == 1)
	{
		return ((((ENTITY::DOES_ENTITY_EXIST(uParam0->f_6) && !func_64(uParam0->f_6)) && !func_18(uParam0, 4)) && BUILTIN::VDIST(Global_35, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false)) < func_74()) && func_51(uParam0->f_2));
	}
	return false;
}

void func_60(var uParam0)
{
	func_29(uParam0, 4);
}

void func_61(var uParam0)
{
	func_58(uParam0, 4);
}

bool func_62(var uParam0)
{
	return ((((ENTITY::DOES_ENTITY_EXIST(uParam0->f_6) && !func_64(uParam0->f_6)) && !func_18(uParam0, 4)) && BUILTIN::VDIST(Global_35, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false)) < func_75()) && func_51(uParam0->f_2));
}

bool func_63(int iParam0)
{
	return func_84(iParam0, 2);
}

bool func_64(int iParam0)
{
	return ((ENTITY::DOES_ENTITY_EXIST(iParam0) && DECORATOR::DECOR_EXIST_ON(iParam0, func_65())) && DECORATOR::DECOR_GET_BOOL(iParam0, func_65()));
}

char* func_65()
{
	return "brain_isHidden";
}

bool func_66(int iParam0)
{
	return ((ENTITY::DOES_ENTITY_EXIST(iParam0) && DECORATOR::DECOR_EXIST_ON(iParam0, func_67())) && DECORATOR::DECOR_GET_BOOL(iParam0, func_67()));
}

char* func_67()
{
	return "brain_isDisabled";
}

int func_68(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !DECORATOR::DECOR_EXIST_ON(iParam0, func_69()))
	{
		return 0;
	}
	return DECORATOR::DECOR_GET_INT(iParam0, func_69());
}

char* func_69()
{
	return "brain_value";
}

int func_70(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !DECORATOR::DECOR_EXIST_ON(iParam0, func_71()))
	{
		return 255;
	}
	return DECORATOR::_DECOR_GET_UINT8(iParam0, func_71());
}

char* func_71()
{
	return "brain_player";
}

void func_72(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_73(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

float func_74()
{
	return 100f;
}

float func_75()
{
	return 100f;
}

bool func_76(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return true;
		default:
			break;
	}
	return false;
}

int func_77(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1071686.f_636.f_601;
		case 3:
			return Global_1071686.f_636.f_2103;
		case 4:
			return Global_1071686.f_636.f_12605;
		case 5:
			return Global_1071686.f_636.f_12907;
		case 6:
			return Global_1071686.f_636.f_15909;
		case 7:
			return Global_1071686.f_636.f_16511;
		case 8:
			return Global_1071686.f_636.f_18913;
		default:
			break;
	}
	return -1;
}

int func_78(struct<2> Param0)
{
	int iVar0;

	if (!func_49(Param0))
	{
		return -1;
	}
	iVar0 = func_85(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1071686.f_19550.f_1[iVar0 /*3*/].f_2;
}

void func_79(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

char* func_80()
{
	return "brain_type";
}

char* func_81()
{
	return "brain_id";
}

var func_82(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_86() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_87());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_87());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_87());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_88(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_89(iVar2))
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
				if (iVar9 & 8192 != 0 && func_90(iVar2) != 1)
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
					if (!func_91(iVar10))
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

void func_83(var uParam0, int iParam1)
{
	func_92(uParam0, iParam1);
}

bool func_84(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951255[iParam0 /*23*/].f_1 && iParam1) != 0;
}

int func_85(struct<2> Param0)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;

	if (Global_1071686.f_19550 <= 0)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_93(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1071686.f_19550 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_93(Global_1071686.f_19550.f_1[iVar8 /*3*/], &vVar3);
		if (vVar3.x > vVar0.x)
		{
			iVar7 = (iVar8 - 1);
		}
		else if (vVar3.x < vVar0.x)
		{
			iVar6 = iVar8 + 1;
		}
		else
		{
			return iVar8;
		}
	}
	return -1;
}

int func_86()
{
	return Global_1051252.f_12;
}

char* func_87()
{
	return "unnamed";
}

int func_88(int iParam0)
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

bool func_89(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return func_94(36, iParam0);
}

int func_90(int iParam0)
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

bool func_91(int iParam0)
{
	if (func_95(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) != 1)
		{
			func_96(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) == 1;
}

void func_92(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_93(struct<2> Param0, var uParam2)
{
	if (!func_49(Param0))
	{
		return false;
	}
	func_97(uParam2);
	switch (Param0)
	{
		case 2:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636[Param0.f_1 /*3*/]), 3);
			return true;
		case 3:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_602[Param0.f_1 /*3*/]), 3);
			return true;
		case 4:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_2104[Param0.f_1 /*3*/]), 3);
			return true;
		case 5:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_12606[Param0.f_1 /*3*/]), 3);
			return true;
		case 6:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_12908[Param0.f_1 /*3*/]), 3);
			return true;
		case 7:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_15910[Param0.f_1 /*3*/]), 3);
			return true;
		case 8:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_16512[Param0.f_1 /*3*/]), 3);
			return true;
		default:
			break;
	}
	return false;
}

bool func_94(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_98(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 == func_99())
	{
		return func_98(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1296859.f_22[iParam1])
	{
		return func_98(&(Global_1100469[iParam1 /*53*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_95(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_96(int iParam0)
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
		func_100(iParam0);
		return;
	}
	if (Global_1071686.f_21416.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_101(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 1;
}

void func_97(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

bool func_98(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_99()
{
	return Global_1102219.f_3672;
}

void func_100(int iParam0)
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
	func_101(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 0;
}

void func_101(int iParam0)
{
	if (Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

