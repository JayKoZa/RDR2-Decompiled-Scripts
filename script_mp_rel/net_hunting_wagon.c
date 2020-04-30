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
	float fLocal_15 = 0f;
	float fLocal_16 = 0f;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	struct<8> Local_21 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	struct<21> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	struct<33> Var0;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	Var0.f_2 = 255;
	Var0.f_4 = 6;
	Var0.f_32 = -1;
	if (!func_1(&Var0, &ScriptParam_0))
	{
		func_2(&Var0, "failed to launch the script.");
	}
	if (ScriptParam_0.f_20)
	{
		func_3();
	}
	if (func_4(&(Global_1270530->f_609.f_72)))
	{
		func_5(&(Global_1270530->f_609.f_72));
	}
	while (true)
	{
		func_6(&Var0, &ScriptParam_0);
		if (func_7(&Var0, &ScriptParam_0))
		{
			func_2(&Var0, "script should terminate.");
		}
		if (!func_8(Var0, 2048))
		{
			if (func_9(&Var0, &ScriptParam_0))
			{
				func_10(&Var0, "script should terminate due to async update.");
			}
			if (!func_11(&Var0))
			{
			}
			else
			{
				if (!func_8(Var0, 8))
				{
					if (func_12(&Var0))
					{
						func_13(&Var0, 8);
					}
				}
				if (func_8(Var0, 8))
				{
					if (func_14(&Var0))
					{
						if (Var0.f_32 != -1)
						{
							if (!func_15(Var0.f_32))
							{
								if (func_16())
								{
									func_17(Var0.f_32, 1);
								}
							}
						}
					}
				}
				if (func_18(&Var0))
				{
					func_10(&Var0, "update requested thread termination.");
				}
			}
		}
		else if (NETWORK::GET_TIME_DIFFERENCE(Var0.f_31, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 1000)
		{
			if (func_14(&Var0))
			{
				Var0.f_31 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				if (func_8(Var0, 2))
				{
					func_19();
				}
				else
				{
					func_20();
				}
			}
		}
		if (func_21(&Var0, &ScriptParam_0))
		{
			func_2(&Var0, "event requested thread termination.");
		}
		BUILTIN::WAIT(0);
	}
	func_2(&Var0, "end of thread.");
}

int func_1(var uParam0, int* iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = BRAIN::_0x6818D1A194E29983();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_VEHICLE(iVar0))
	{
		return 0;
	}
	uParam0->f_3 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		return 0;
	}
	uParam0->f_2 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(iParam1);
	MISC::_COPY_MEMORY(&(uParam0->f_11), iParam1, 7);
	if (!NETWORK::_0x255A5EF65EDA9167(uParam0->f_2))
	{
		return 0;
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		func_13(uParam0, 1);
		iVar1 = NETWORK::VEH_TO_NET(uParam0->f_3);
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar1))
		{
		}
		else
		{
			NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(iVar1, PLAYER::PLAYER_ID(), true);
		}
	}
	if (!func_22(uParam0, iParam1))
	{
		return 0;
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	BRAIN::_0xA6AC35DB4A7957A8(250);
	return 1;
}

void func_2(var uParam0, char* sParam1)
{
	bool bVar0;

	if (MISC::_0x375F5870A7B8BEC1(sParam1))
	{
	}
	VEHICLE::CLEAR_LAST_DRIVEN_VEHICLE();
	func_23(uParam0);
	func_24(uParam0);
	if (func_4(&(uParam0->f_18)))
	{
		func_5(&(uParam0->f_18));
	}
	if (func_4(&(uParam0->f_25)))
	{
		func_5(&(uParam0->f_25));
	}
	if (func_4(&(Global_1270530->f_609.f_72)))
	{
		func_5(&(Global_1270530->f_609.f_72));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		if (!VEHICLE::_0x5136B284B67B35C7(uParam0->f_3))
		{
			bVar0 = func_8(*uParam0, 2);
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
			{
				if (!func_25(uParam0->f_3, 2, !bVar0))
				{
				}
			}
			else
			{
				AITRANSPORT::_0xBA8818212633500A(uParam0->f_3, 17, 1);
				if (bVar0)
				{
					func_26(uParam0->f_3, 0);
				}
				else
				{
					func_26(uParam0->f_3, 1);
					TASK::TASK_EVERYONE_LEAVE_VEHICLE_IN_ORDER(uParam0->f_3, 0);
				}
			}
			if (!bVar0)
			{
				if (func_8(*uParam0, 4096))
				{
					if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true) == uParam0->f_3)
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
				{
				}
				else
				{
					if (func_8(*uParam0, 4096))
					{
						TASK::_0x55CD5FDDD4335C1E(uParam0->f_3, 0f, 0f, 0f, 8f, 1148979587);
					}
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uParam0->f_3));
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
				{
				}
				else
				{
					VEHICLE::_0x35DC1877312FBA0F(&(uParam0->f_3));
				}
			}
		}
	}
	if (func_14(uParam0))
	{
		PLAYER::_0xD0E02AA618020D17(PLAYER::PLAYER_ID(), 0);
	}
	else if (func_27())
	{
		func_28(11, uParam0->f_2, &(Global_1275573->f_154[&Global_1275573]));
		func_29(1649473200, 31, "NSTM_STABLE_DESTROYED_VEHICLE");
		func_30();
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_3()
{
	if (func_31(8, 255))
	{
		return;
	}
	func_32(3);
}

bool func_4(var uParam0)
{
	return func_33(*uParam0, 1);
}

void func_5(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_6(var uParam0, int* iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	uParam0->f_2 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(iParam1);
	if (!func_14(uParam0))
	{
		return;
	}
	iVar0 = uParam0->f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar1 = PLAYER::PLAYER_ID();
	if (!NETWORK::_0x255A5EF65EDA9167(iVar1))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		return;
	}
	if (PLAYER::_0xB9050A97594C8832(iVar1) != iVar0)
	{
		PLAYER::_0xD0E02AA618020D17(iVar1, iVar0);
	}
	iVar2 = VEHICLE::_0xB729679356A889AE(iVar0);
	if (ENTITY::IS_ENTITY_A_PED(iVar2))
	{
		iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
	}
	iVar4 = PLAYER::PLAYER_PED_ID();
	if (iVar3 != iVar4)
	{
		VEHICLE::_0x838C216C2B05A009(iVar4, iVar0);
	}
}

int func_7(var uParam0, int iParam1)
{
	if (func_34(1, 1))
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		return 1;
	}
	if (!func_14(uParam0))
	{
		if (!NETWORK::NETWORK_IS_HANDLE_VALID(&(uParam0->f_11)) || !NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam0->f_11)))
		{
			func_13(uParam0, 2);
			return 1;
		}
	}
	if (func_35(uParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

bool func_8(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_9(var uParam0, int iParam1)
{
	bool bVar0;

	func_36(uParam0);
	func_37(uParam0);
	if (func_38(uParam0, iParam1))
	{
		return 1;
	}
	if (func_39(uParam0, iParam1))
	{
		return 1;
	}
	if (!func_8(*uParam0, 8192))
	{
		if (func_14(uParam0))
		{
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false)) > 250f)
			{
				func_13(uParam0, 8192);
				func_13(uParam0, 2);
				return 1;
			}
			else
			{
				bVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false)) >= 188f;
				if (!func_8(*uParam0, 16384))
				{
					if (bVar0)
					{
						func_17(906, 1);
						func_40(&(uParam0->f_28));
						func_13(uParam0, 16384);
					}
				}
				else if (!bVar0 && func_41(&(uParam0->f_28), 3f))
				{
					func_5(&(uParam0->f_28));
					func_42(uParam0, 16384);
				}
			}
		}
	}
	return 0;
}

void func_10(var uParam0, char* sParam1)
{
	if (MISC::_0x375F5870A7B8BEC1(sParam1))
	{
	}
	if (!func_14(uParam0))
	{
		return;
	}
	func_13(uParam0, 2048);
	uParam0->f_31 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (func_8(*uParam0, 2))
	{
		func_19();
	}
	else
	{
		func_20();
	}
}

int func_11(var uParam0)
{
	if (!func_8(*uParam0, 16))
	{
		if (func_14(uParam0))
		{
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_3);
			}
			else
			{
				PLAYER::_0xD0E02AA618020D17(PLAYER::PLAYER_ID(), uParam0->f_3);
				VEHICLE::_0x838C216C2B05A009(PLAYER::PLAYER_PED_ID(), uParam0->f_3);
				func_13(uParam0, 16);
			}
		}
		else
		{
			func_13(uParam0, 16);
		}
	}
	if (!func_8(*uParam0, 32))
	{
		if (func_43(uParam0))
		{
			func_13(uParam0, 32);
		}
	}
	if (func_8(*uParam0, 16))
	{
		if (func_8(*uParam0, 32))
		{
			return 1;
		}
	}
	return 0;
}

int func_12(var uParam0)
{
	int iVar0;

	iVar0 = 1;
	if (!func_44(uParam0))
	{
		iVar0 = 0;
	}
	if (!func_45(uParam0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_13(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_14(var uParam0)
{
	return func_8(*uParam0, 1);
}

bool func_15(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_17172.f_2563[iVar1]), iVar2);
}

int func_16()
{
	if (!func_46() && func_47(1))
	{
		return 1;
	}
	return 0;
}

void func_17(int iParam0, bool bParam1)
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

int func_18(var uParam0)
{
	if (func_51(uParam0))
	{
		return 1;
	}
	func_52(uParam0);
	func_53(uParam0);
	func_54(uParam0);
	func_55(uParam0);
	if (func_14(uParam0))
	{
		func_56(uParam0);
	}
	return 0;
}

void func_19()
{
	if (func_31(8, 255))
	{
		return;
	}
	func_57(3);
}

void func_20()
{
	if (func_31(8, 255))
	{
		return;
	}
	func_58(3);
}

int func_21(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	struct<6> Var2;
	int iVar8;
	int iVar9;

	iVar0 = SCRIPTS::GET_NUMBER_OF_EVENTS(1);
	bVar1 = false;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	iVar9 = 0;
	iVar9 = 0;
	while (iVar9 < iVar0)
	{
		iVar8 = SCRIPTS::GET_EVENT_AT_INDEX(1, iVar9);
		switch (iVar8)
		{
			case -507840394:
				if (!SCRIPTS::GET_EVENT_DATA(1, iVar9, &Var2, 6))
				{
				}
				else if (Var2 != 47)
				{
				}
				else
				{
					bVar1 = func_59(uParam0, iParam1, &Var2);
					if (bVar1)
					{
						return 1;
					}
					bVar1 = func_60(uParam0, iParam1, &Var2);
					if (bVar1)
					{
						return 1;
					}
				}
		}
		iVar9++;
	}
	return 0;
}

int func_22(var uParam0, int* iParam1)
{
	uParam0->f_32 = 849;
	return 1;
}

void func_23(var uParam0)
{
	if (func_4(&(Local_21.f_3)))
	{
		func_5(&(Local_21.f_3));
	}
	func_61(Local_21.f_2);
	func_62(&(Local_21.f_7), 1, 1);
}

void func_24(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_4[iVar0])))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(&(uParam0->f_4[iVar0])))
			{
				PED::SET_PED_CONFIG_FLAG(&(uParam0->f_4[iVar0]), 467, false);
				PED::SET_PED_CONFIG_FLAG(&(uParam0->f_4[iVar0]), 277, false);
				PED::SET_PED_CONFIG_FLAG(&(uParam0->f_4[iVar0]), 209, false);
				PED::SET_PED_CONFIG_FLAG(&(uParam0->f_4[iVar0]), 208, false);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0->f_4[iVar0]);
			}
		}
		iVar0++;
	}
}

int func_25(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = NETWORK::_0xF260AF6F43953316(iParam0);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar0))
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (!MISC::IS_BIT_SET(Global_1270530->f_11.f_358, iVar1))
		{
			(Global_1270530->f_11.f_360[iVar1 /*6*/])->f_1 = iParam0;
			(Global_1270530->f_11.f_360[iVar1 /*6*/])->f_2 = iParam1;
			Global_1270530->f_11.f_360[iVar1 /*6*/] = bParam2;
			func_40(&((Global_1270530->f_11.f_360[iVar1 /*6*/])->f_3));
			MISC::SET_BIT(&(Global_1270530->f_11.f_358), iVar1);
			return 1;
		}
		iVar1++;
	}
	return 0;
}

void func_26(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (func_63(iParam0))
	{
		iVar1 = 0;
		while (iVar1 < 9)
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					if (!bParam1 || ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						PED::_0xE0B61ED8BB37712F(iVar0);
					}
				}
			}
			iVar1++;
		}
	}
}

bool func_27()
{
	return Global_1132968->f_6289.f_132;
}

void func_28(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	var uVar1;
	struct<8> Var2;

	if (func_64(iParam1))
	{
		return;
	}
	if (Global_1901929->f_673.f_41 < 1)
	{
		if (func_65(&(Global_1275573->f_154[&Global_1275573]), iParam1))
		{
			if (2 == iParam0 || 3 == iParam0)
			{
				func_17(765, 0);
			}
			return;
		}
	}
	if (!func_66(iParam0) && Global_1132968->f_6289.f_2 == iParam0)
	{
		if (Global_17172.f_2619.f_1 >= (Global_1275573->f_21 - func_67(iParam0)))
		{
			return;
		}
	}
	if (((iParam0 == 1 && Global_1132968->f_6289.f_1 != 1) && Global_1132968->f_6289.f_1 != 0) && Global_1132968->f_6289.f_9 == Global_1275573->f_21)
	{
		return;
	}
	if (iParam0 == 1 || iParam0 == 9)
	{
		iVar0 = iParam1;
		SCRIPTS::_0x31010318BA9897AC(&uVar1, iVar0);
		Var2.f_6 = 255;
		Var2.f_4 = 4;
		Var2.f_6 = iParam1;
		Var2.f_7 = 3;
		func_68(&Var2, uVar1);
	}
	if (iParam1 != 255)
	{
		Global_1132968->f_6289.f_3 = func_69(iParam1, 1);
		Global_1132968->f_6289.f_4 = func_70(iParam1, 0, 1);
		Global_1132968->f_6289.f_5 = iParam1;
	}
	else
	{
		Global_1132968->f_6289.f_3 = 0f;
		Global_1132968->f_6289.f_4 = 0;
		Global_1132968->f_6289.f_5 = 255;
	}
	Global_1132968->f_6289.f_1 = iParam0;
	Global_1132968->f_6289.f_9 = Global_1275573->f_21;
}

void func_29(int iParam0, int iParam1, char* sParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_71(iParam0, 1, 59806960);
	if (iVar0 <= 0)
	{
		return;
	}
	if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar0, 0))
	{
		return;
	}
	if (!func_72(iParam0, 1, 59806960))
	{
		return;
	}
	iVar1 = func_73(iParam0, sParam2, 1, 1, 0, 59806960);
	if (iVar1 == -1)
	{
		return;
	}
	func_74(iParam1, iVar0, 0);
}

void func_30()
{
	Global_1132968->f_6289.f_132 = 0;
}

bool func_31(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return (((*Global_1269869)[iParam1 /*20*/])->f_2 && iParam0) != 0;
}

void func_32(int iParam0)
{
	func_75(6, iParam0);
}

bool func_33(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_34(bool bParam0, bool bParam1)
{
	int iVar0;

	if (Global_1572887->f_12)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam1 && NETWORK::_0xF2CBC969C4F090C7())
		{
		}
		else if (bParam1 && NETWORK::NETWORK_IS_SESSION_ACTIVE())
		{
		}
		else if (bParam1 && &Global_1572887 < 39)
		{
		}
		else
		{
			return 1;
		}
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
		{
			case 0:
				return 1;
			case 1:
				return 1;
			case 2:
				if (!bParam0)
				{
					return 1;
				}
				break;
			case 4:
				return 1;
			case 3:
				return 1;
			default:
				return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0) == 1976253964)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_35(var uParam0, int iParam1)
{
	return 0;
}

void func_36(var uParam0)
{
	bool bVar0;

	bVar0 = false;
	if (func_76(255) == 1)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (func_77(uParam0->f_2))
		{
			if (!func_8(*uParam0, 256))
			{
				NETWORK::_0xE1BC73D6815BA361(NETWORK::_0xF260AF6F43953316(uParam0->f_3), 1, 256);
				func_13(uParam0, 256);
			}
			NETWORK::_0x7182EDDA1EE7DB5A(NETWORK::_0xF260AF6F43953316(uParam0->f_3));
		}
		else if (func_8(*uParam0, 256))
		{
			NETWORK::_0xE1BC73D6815BA361(NETWORK::_0xF260AF6F43953316(uParam0->f_3), 0, 256);
			func_42(uParam0, 256);
		}
	}
	else if (func_8(*uParam0, 256))
	{
		func_42(uParam0, 256);
	}
}

void func_37(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!NETWORK::_0x255A5EF65EDA9167(uParam0->f_2))
	{
		func_42(uParam0, 512);
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_2))
	{
		func_42(uParam0, 512);
		return;
	}
	if (func_14(uParam0))
	{
		func_42(uParam0, 512);
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (!NETWORK::_0x255A5EF65EDA9167(uParam0->f_2) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_2))
	{
		func_42(uParam0, 512);
		return;
	}
	iVar1 = _NAMESPACE26::_0x901E0DC25080C8B9(uParam0->f_2);
	iVar2 = _NAMESPACE26::_0x901E0DC25080C8B9(iVar0);
	if (iVar1 == iVar2)
	{
		if (!func_8(*uParam0, 512))
		{
			func_13(uParam0, 512);
			func_42(uParam0, 1024);
		}
	}
	else
	{
		if (func_8(*uParam0, 512))
		{
			func_42(uParam0, 512);
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_3, true))
			{
				func_13(uParam0, 1024);
			}
		}
		if (func_8(*uParam0, 1024))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_3, false))
			{
				if (!func_78(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_VEHICLE")))
				{
					TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_3, 64, 0);
				}
			}
			else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_3, true))
			{
			}
			else
			{
				func_42(uParam0, 1024);
			}
		}
	}
}

int func_38(var uParam0, int iParam1)
{
	func_79(uParam0);
	return 0;
}

int func_39(var uParam0, int iParam1)
{
	if (!func_8(*uParam0, 128))
	{
		if (!func_80(uParam0))
		{
			return 0;
		}
		if (func_81(uParam0->f_3))
		{
			return 0;
		}
		func_82(&(uParam0->f_25), 0);
		func_13(uParam0, 128);
		func_83(uParam0, iParam1);
		func_53(uParam0);
		func_84(uParam0);
	}
	if (!func_14(uParam0))
	{
		return 0;
	}
	if (!func_41(&(uParam0->f_25), 5f))
	{
		return 0;
	}
	return 1;
}

void func_40(var uParam0)
{
	func_85(uParam0, 0f);
}

int func_41(var uParam0, float fParam1)
{
	if (!func_4(uParam0))
	{
		return 0;
	}
	if (func_86(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

void func_42(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_43(var uParam0)
{
	return 1;
}

int func_44(var uParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;

	if (!func_80(uParam0))
	{
		if (VEHICLE::_0xA19447D83294E29F(uParam0->f_3, &iVar0, &uVar1))
		{
			iVar3 = 0;
			iVar2 = 0;
			while (iVar2 < 6)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_4[iVar2])))
				{
					uParam0->f_4[iVar2] = func_87(uParam0->f_3, iVar2);
					if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_4[iVar2])))
					{
						iVar3++;
						PED::_0x931B241409216C1F(PLAYER::GET_PLAYER_PED(uParam0->f_2), &(uParam0->f_4[iVar2]), 0);
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(&(uParam0->f_4[iVar2])))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(&(uParam0->f_4[iVar2]), true, false);
							PED::SET_PED_CONFIG_FLAG(&(uParam0->f_4[iVar2]), 467, true);
							PED::SET_PED_CONFIG_FLAG(&(uParam0->f_4[iVar2]), 277, true);
							PED::SET_PED_CONFIG_FLAG(&(uParam0->f_4[iVar2]), 209, true);
							PED::SET_PED_CONFIG_FLAG(&(uParam0->f_4[iVar2]), 208, true);
						}
					}
				}
				iVar2++;
			}
			if (iVar3 < iVar0)
			{
			}
			else if (iVar3 == iVar0)
			{
				func_13(uParam0, 64);
				return 1;
			}
			else if (iVar3 > iVar0)
			{
				func_13(uParam0, 64);
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_45(var uParam0)
{
	bool bVar0;

	bVar0 = true;
	if (func_14(uParam0))
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(Local_21.f_2))
		{
			Local_21.f_2 = VOLUME::_CREATE_VOLUME_BOX(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false), 0f, 0f, -7.0567f, 4.75f, 3.25f, 1.85f);
			if (VOLUME::_DOES_VOLUME_EXIST(Local_21.f_2))
			{
				PED::_0x7C00CFC48A782DC0(Local_21.f_2, uParam0->f_3, 0f, 0f, 0f, 0f, 0f, 90f, 2, 1);
			}
		}
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_3);
			return false;
		}
	}
	if (func_14(uParam0))
	{
		if (!func_8(Local_21.f_1, 1))
		{
			PROPSET::_0x75F90E4051CC084C(uParam0->f_3, 295596934);
			func_13(&(Local_21.f_1), 1);
			bVar0 = false;
		}
		else if (!PROPSET::_0x7264F9CA87A9830B(uParam0->f_3) || !VEHICLE::_0xD798DF5DB67B1659(uParam0->f_3))
		{
			bVar0 = false;
		}
		if (!func_8(Local_21.f_1, 2))
		{
			PROPSET::_0xC0F0417A90402742(uParam0->f_3, 696075367);
			func_13(&(Local_21.f_1), 2);
			bVar0 = false;
		}
		if (bVar0)
		{
			if (!func_88())
			{
				return false;
			}
			func_89(uParam0->f_3, 1, 1);
		}
	}
	if (bVar0)
	{
		ENTITY::SET_CAN_CLIMB_ON_ENTITY(uParam0->f_3, false);
	}
	return bVar0;
}

int func_46()
{
	int iVar0;

	if (func_90())
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (Global_1904613[iVar0] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_47(bool bParam0)
{
	if (func_91())
	{
		return 0;
	}
	if ((!CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADING_OUT())
	{
		return 0;
	}
	if (func_92(&(Global_1099294->f_4), 1, 5))
	{
		return 0;
	}
	if (!bParam0)
	{
		if (!func_46())
		{
			return 0;
		}
	}
	if ((Global_13 || Global_1048584) // PointerArith || func_93())
	{
		return 0;
	}
	if (!func_94())
	{
		return 0;
	}
	if (func_95())
	{
		return 0;
	}
	if (MISC::_0xF236C84C6ADFCB2F())
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_96())
	{
		return 0;
	}
	return 1;
}

void func_48(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

int func_49(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 30)
	{
		return 0;
	}
	if (func_97(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_98(iParam0))
	{
		return 0;
	}
	if (func_99(iParam0))
	{
		return 0;
	}
	if ((Global_1900718->f_67 && !func_100(iParam0, 1)) || func_101(32768))
	{
		if (!func_100(iParam0, 262144) || !Global_1904613->f_8198)
		{
			return 0;
		}
	}
	if (!func_94())
	{
		return 0;
	}
	return 1;
}

void func_50(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904613[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1904613)[iParam0] = uVar0;
}

int func_51(var uParam0)
{
	int iVar0;
	int iVar1;

	if (func_14(uParam0))
	{
		switch (Local_21.f_6)
		{
			case 0:
				if (func_102(Local_21.f_7))
				{
					func_62(&(Local_21.f_7), 1, 1);
				}
				if (func_4(&(Local_21.f_3)))
				{
					func_5(&(Local_21.f_3));
				}
				if (func_103(uParam0))
				{
					if (func_104())
					{
						Local_21.f_7 = func_105("HWAGON_TITLE", joaat("INPUT_OPEN_SATCHEL_HORSE_MENU"), Local_21.f_2, 2, 1, 0, 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
						Local_21.f_6 = 1;
					}
				}
				else if (func_106() && !func_107(0))
				{
					if (!ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), Local_21.f_2, true, 0))
					{
						if (func_108(-889932290))
						{
							if (func_109(-889932290))
							{
								func_110();
								func_111(0);
							}
						}
					}
				}
				break;
			case 1:
				if (!func_103(uParam0))
				{
					Local_21.f_6 = 0;
				}
				else
				{
					PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_HORSE_MENU"), true);
					if (func_112(Local_21.f_7, 1))
					{
						func_113(1);
						func_111(-889932290);
						func_40(&(Local_21.f_3));
						func_62(&(Local_21.f_7), 1, 1);
						Local_21.f_6 = 2;
					}
				}
				break;
			case 2:
				if (func_114())
				{
					Local_21.f_6 = 0;
				}
				else if (func_41(&(Local_21.f_3), 3f))
				{
					Local_21.f_6 = 0;
				}
				break;
		}
		if (!func_15(854))
		{
			if (PED::_IS_PED_CARRYING(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PLAYER::PLAYER_PED_ID());
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					iVar1 = func_115(iVar0);
					if (Global_1901929->f_638.f_32)
					{
					}
					else if (func_116())
					{
					}
					else if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
					{
					}
					else if (!func_117(ENTITY::GET_ENTITY_MODEL(iVar0)))
					{
					}
					else if (!func_118(iVar1))
					{
					}
					else if (func_16())
					{
						func_17(854, 0);
					}
				}
			}
		}
	}
	return 0;
}

void func_52(var uParam0)
{
	if (!func_119(uParam0->f_2))
	{
		return;
	}
	switch (func_120(uParam0))
	{
		case 0:
			break;
		case 1:
			if (func_14(uParam0))
			{
				func_121(uParam0);
				func_122(4);
			}
			break;
		case 2:
			if (func_14(uParam0))
			{
				func_121(uParam0);
				func_17(79, 1);
				func_122(4);
			}
			break;
	}
}

void func_53(var uParam0)
{
	func_123(uParam0);
}

void func_54(var uParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;

	iVar0 = uParam0->f_3;
	iVar1 = uParam0->f_2;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0, 0))
	{
		return;
	}
	iVar3 = 0;
	AITRANSPORT::_0xE195C5A82156321D(iVar0, &uVar2);
	if (Global_1269869[iVar1 /*20*/] & 1 != 0)
	{
		if (!func_124(uVar2, 1))
		{
			iVar3 = 1;
		}
		if (Global_1269869[iVar1 /*20*/] & 32 != 0)
		{
			if (!func_124(uVar2, 32))
			{
				iVar3 |= 32;
			}
		}
	}
	else
	{
		if (Global_1269869[iVar1 /*20*/] & 2 != 0)
		{
			if (!func_124(uVar2, 2))
			{
				iVar3 |= 2;
			}
		}
		if (Global_1269869[iVar1 /*20*/] & 4 != 0)
		{
			if (!func_124(uVar2, 4))
			{
				iVar3 |= 4;
			}
		}
		if (Global_1269869[iVar1 /*20*/] & 8 != 0)
		{
			if (!func_124(uVar2, 8))
			{
				iVar3 |= 8;
			}
		}
		if (Global_1269869[iVar1 /*20*/] & 64 != 0)
		{
			if (!func_124(uVar2, 64))
			{
				iVar3 |= 64;
			}
		}
		if (Global_1269869[iVar1 /*20*/] & 128 != 0)
		{
			if (!func_124(uVar2, 128))
			{
				iVar3 |= 128;
			}
		}
		if (Global_1269869[iVar1 /*20*/] & 256 != 0)
		{
			if (!func_124(uVar2, 256))
			{
				iVar3 |= 256;
			}
		}
		if (Global_1269869[iVar1 /*20*/] & 16 != 0)
		{
			if (!func_124(uVar2, 16))
			{
				iVar3 = 16;
			}
		}
		if (Global_1269869[iVar1 /*20*/] & 512 != 0)
		{
			if (!func_124(uVar2, 512))
			{
				iVar3 |= 512;
			}
		}
		if (func_124(uVar2, 1024))
		{
			if (!func_124(uVar2, 1024))
			{
				iVar3 |= 1024;
			}
		}
	}
	if (iVar3 != 0)
	{
		AITRANSPORT::_0xE2487779957FE897(iVar0, iVar3);
	}
}

void func_55(var uParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;

	if (!func_125(uParam0))
	{
		return;
	}
	iVar0 = uParam0->f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!func_126(iVar0, iVar1, &uVar2))
	{
		return;
	}
	func_127(iVar0);
	iVar3 = uParam0->f_2;
	if (Global_1269869[iVar3 /*20*/] & 16 != 0 || Global_1269868 & 32 != 0)
	{
		if (func_16())
		{
			func_17(80, 1);
		}
	}
	else if (func_16())
	{
		func_17(81, 1);
	}
}

void func_56(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = uParam0->f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	iVar2 = PLAYER::_0x7C803BDC8343228D(iVar0);
	if (!NETWORK::_0x255A5EF65EDA9167(iVar2))
	{
		return;
	}
	iVar3 = PLAYER::GET_PLAYER_PED(iVar2);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return;
	}
	iVar4 = 0;
	while (iVar4 < 6)
	{
		iVar5 = &uParam0->f_4[iVar4];
		if (ENTITY::DOES_ENTITY_EXIST(iVar5))
		{
			func_128(iVar3, iVar5);
		}
		iVar4++;
	}
	iVar6 = VEHICLE::_0xB729679356A889AE(iVar0);
	if (ENTITY::IS_ENTITY_A_PED(iVar6))
	{
		iVar7 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar6);
		if (iVar7 == iVar3)
		{
			return;
		}
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar0);
		return;
	}
	VEHICLE::_0x838C216C2B05A009(iVar3, iVar0);
}

void func_57(int iParam0)
{
	func_75(2, iParam0);
}

void func_58(int iParam0)
{
	func_75(3, iParam0);
}

int func_59(var uParam0, int iParam1, int iParam2)
{
	return 0;
}

int func_60(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam2->f_4;
	switch (iVar0)
	{
		case 0:
		case 3:
			if (func_129(uParam0, iParam2))
			{
				func_130(uParam0);
				return 1;
			}
			break;
		case 16:
			if (func_129(uParam0, iParam2))
			{
				func_13(uParam0, 4096);
				func_130(uParam0);
				return 1;
			}
			break;
		case 1:
		case 2:
			if (func_129(uParam0, iParam2))
			{
				func_131(uParam0);
				return 1;
			}
			break;
		case 6:
			if (func_129(uParam0, iParam2))
			{
				func_132(uParam0, iParam1);
			}
			break;
		case 4:
			break;
		case 5:
			break;
		case 12:
			func_133(uParam0, iParam2, 0);
			break;
		case 13:
			func_133(uParam0, iParam2, 1);
			break;
		case 14:
			func_134(uParam0, iParam2);
			break;
		case 15:
			if (func_129(uParam0, iParam2))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
				{
					TASK::_0x141BC64C8D7C5529(uParam0->f_3);
				}
			}
			break;
	}
	return 0;
}

void func_61(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

void func_62(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_102(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_135(*uParam0);
	if (((*Global_1949759)[iVar0 /*23*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_136(iVar0);
	*uParam0 = 0;
}

int func_63(int iParam0)
{
	int iVar0;

	iVar0 = VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iParam0);
	if (iVar0 > 0)
	{
		return 1;
	}
	return 0;
}

int func_64(int iParam0)
{
	if (&Global_1048576)
	{
		return 1;
	}
	if (Global_1572887->f_4)
	{
		return 1;
	}
	if (&Global_1048577)
	{
		return 1;
	}
	if (Global_1572887->f_106.f_75 > 9)
	{
		return 1;
	}
	if (!func_137(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	if (func_137(func_138()))
	{
		if (!func_70(&(Global_1275573->f_154[&Global_1275573]), 0, 1) && func_139(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_65(int iParam0, int iParam1)
{
	int iVar0;

	if (!NETWORK::_0x255A5EF65EDA9167(iParam1))
	{
		return 0;
	}
	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), iVar0))
	{
		return 0;
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26836), iVar0))
	{
		return 0;
	}
	if (NETWORK::_0xFE53B1F8D43F19BF(iParam0, iParam1) == 2 || (Global_1102099->f_34[iVar0 /*11*/])->f_10)
	{
		return 1;
	}
	return 0;
}

int func_66(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 0;
		case 12:
			return 0;
		case 10:
			return 0;
		case 11:
			return 0;
		case 9:
			return 0;
		default:
			break;
	}
	return 1;
	return 1;
}

int func_67(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 5;
		case 12:
			return 5;
		case 10:
			return 5;
		case 11:
			return 10;
		case 9:
			return 10;
		default:
			break;
	}
	return 0;
	return 0;
}

void func_68(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 179;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 2, &uParam1);
	func_140(*uParam0);
}

float func_69(int iParam0, bool bParam1)
{
	int iVar0;

	if (!Global_1132968->f_6289)
	{
		return 0f;
	}
	if (iParam0 == &Global_1275573->f_154[&Global_1275573])
	{
		return Global_17172.f_2619;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0f;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0f;
	}
	if ((_NAMESPACE26::_0x149A2751AB66AC02(_NAMESPACE26::_0x901E0DC25080C8B9(iParam0)) > 1 && bParam1) && ((*Global_1097610)[iVar0 /*51*/])->f_18 >= ((*Global_1097610)[iVar0 /*51*/])->f_45)
	{
		return ((*Global_1097610)[iVar0 /*51*/])->f_18;
	}
	return ((*Global_1097610)[iVar0 /*51*/])->f_45;
}

bool func_70(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!Global_1132968->f_6289)
	{
		return false;
	}
	if (iParam0 == &Global_1275573->f_154[&Global_1275573])
	{
		return ((Global_17172.f_2619.f_2 == 2 || (bParam1 && Global_17172.f_2619.f_2 == 1)) || (bParam2 && Global_17172.f_2619.f_2 == 3));
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return false;
	}
	return ((((*Global_1097610)[iVar0 /*51*/])->f_48 == 2 || (bParam1 && ((*Global_1097610)[iVar0 /*51*/])->f_48 == 1)) || (bParam2 && ((*Global_1097610)[iVar0 /*51*/])->f_48 == 3));
}

int func_71(int iParam0, bool bParam1, int iParam2)
{
	if (!func_141(iParam0, 0))
	{
		return 0;
	}
	return func_142(iParam0, iParam2, 1, bParam1, 1, 0);
}

int func_72(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = (func_71(iParam0, 0, iParam2) * iParam1);
	iVar1 = 0;
	if (iVar0 == 0)
	{
	}
	if (iVar0 >= 0)
	{
		iVar1 = func_143(iVar0);
	}
	return iVar1;
}

int func_73(int iParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;
	int iVar35;
	struct<14> Var36;
	int iVar52;
	struct<16> Var53;

	if (!func_141(iParam0, 0))
	{
		return -1;
	}
	if (func_144(iParam0) != 26423971)
	{
		return -1;
	}
	if (func_145())
	{
		bParam3 = true;
	}
	if (iParam5 == -570078785 || iParam5 == -915411861)
	{
		iVar0 = (func_142(iParam0, iParam5, 1, 0, 1, 2084597891 /* GXTEntry: "Money" */) * iParam2);
		iVar1 = 0;
		if (iVar0 <= 0)
		{
			iVar1 = (func_142(iParam0, iParam5, 1, 0, 1, 773203532 /* GXTEntry: "Gold Bar" */) * iParam2);
			if (iVar1 <= 0)
			{
				return -1;
			}
		}
		if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar0, iVar1))
		{
			return -1;
		}
	}
	else if (func_146(iParam0, iParam5, &Var2, &iVar33, 1, 0))
	{
		iVar35 = 0;
		while (iVar35 < iVar33)
		{
			iVar34 = ((Var2[iVar35 /*2*/])->f_1 * iParam2);
			if (!func_147(&(Var2[iVar35 /*2*/]), 0, bParam3, 0) >= iVar34)
			{
				return -1;
			}
			iVar35++;
		}
	}
	else
	{
		return -1;
	}
	if (!bParam3 && func_148(0))
	{
		if (iVar0 > 0)
		{
			func_149(2084597891 /* GXTEntry: "Money" */, iVar0, -142743235, 0, 0);
		}
		else if (iVar1 > 0)
		{
			func_149(773203532 /* GXTEntry: "Gold Bar" */, iVar1, -142743235, 0, 0);
		}
		else if (func_150(iParam5))
		{
			iVar35 = 0;
			while (iVar35 < iVar33)
			{
				iVar34 = ((Var2[iVar35 /*2*/])->f_1 * iParam2);
				func_149(&(Var2[iVar35 /*2*/]), iVar34, -142743235, 0, 0);
				iVar35++;
			}
		}
		return -1;
	}
	Var36.f_9 = 1;
	Var36.f_11 = -1591664384;
	Var36.f_8 = iParam0;
	Var36.f_9 = iParam2;
	Var36.f_13 = iParam5;
	Var36.f_12 = -142743235;
	iVar52 = func_151(joaat("spend"), &Var36, bParam4);
	if (iVar52 == -1)
	{
	}
	else
	{
		Var53.f_7 = -142743235;
		StringCopy(&(Var53.f_12), sParam1, 32);
		func_152(iVar52, Var53);
	}
	return iVar52;
}

void func_74(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_153(iParam0);
	if (func_154(iParam0) && !bParam2)
	{
		return;
	}
	Global_1270530->f_11.f_561[iParam0] = func_155(MISC::_CREATE_VAR_STRING(2, sVar0, sParam1), 10000, 0, 0, 0, 1);
}

void func_75(int iParam0, int iParam1)
{
	struct<6> Var0;
	var uVar6;
	int iVar7;
	int iVar8;

	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0 = 47;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Var0.f_4 = iParam0;
	Var0.f_5 = iParam1;
	if (!NETWORK::_0x255A5EF65EDA9167(Var0.f_1))
	{
		return;
	}
	if (((((((((((Var0.f_4 == 2 || Var0.f_4 == 3) || Var0.f_4 == 6) || Var0.f_4 == 7) || Var0.f_4 == 8) || Var0.f_4 == 9) || Var0.f_4 == 10) || Var0.f_4 == 11) || Var0.f_4 == 12) || Var0.f_4 == 13) || Var0.f_4 == 14) || Var0.f_4 == 15)
	{
		iVar8 = 0;
		while (iVar8 < 32)
		{
			iVar7 = PLAYER::INT_TO_PLAYERINDEX(iVar8);
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar7))
			{
			}
			else
			{
				SCRIPTS::_0x31010318BA9897AC(&uVar6, iVar8);
			}
			iVar8++;
		}
	}
	else
	{
		SCRIPTS::_0x31010318BA9897AC(&uVar6, PLAYER::NETWORK_PLAYER_ID_TO_INT());
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Var0, 6, 0, &uVar6);
}

int func_76(int iParam0)
{
	if (iParam0 == 255)
	{
		return &Global_1099294;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 26;
	}
	if (&Global_1275573->f_22[iParam0])
	{
		return Global_1097610[iParam0 /*51*/];
	}
	return 26;
}

int func_77(int iParam0)
{
	if (func_31(32, iParam0))
	{
		return 1;
	}
	return 0;
}

int func_78(int iParam0, int iParam1)
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

void func_79(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!func_14(uParam0))
	{
		return;
	}
	if (func_8(Local_21.f_1, 16))
	{
		return;
	}
	iVar0 = PROPSET::_0xA079300AF757FB1A(uParam0->f_3);
	if (!PROPSET::_DOES_PROPSET_EXIST(iVar0))
	{
	}
	else if (!PROPSET::_0xF42DB680A8B2A4D9(iVar0))
	{
	}
	else
	{
		iVar1 = ITEMSET::CREATE_ITEMSET(false);
		iVar2 = 0;
		iVar3 = PROPSET::_GET_ENTITIES_FROM_PROPSET(iVar0, iVar1, -2101616621, false, false);
		if (iVar3 == 0)
		{
		}
		else
		{
			iVar4 = 0;
			while (iVar4 < iVar3)
			{
				iVar5 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar1));
				if (ENTITY::DOES_ENTITY_EXIST(iVar5))
				{
					if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar5))
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar5);
					}
					else
					{
						ENTITY::SET_ENTITY_INVINCIBLE(iVar5, true);
						iVar2++;
					}
				}
				iVar4++;
			}
			if (iVar2 == iVar3)
			{
				func_13(&(Local_21.f_1), 16);
			}
			ITEMSET::_0x20A4BF0E09BEE146(iVar1);
		}
		ITEMSET::DESTROY_ITEMSET(iVar1);
	}
}

bool func_80(var uParam0)
{
	return func_8(*uParam0, 64);
}

int func_81(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0, 0))
	{
		return 0;
	}
	if (func_156(iParam0, 0) && func_156(iParam0, 1))
	{
		return 0;
	}
	return 1;
}

void func_82(var uParam0, bool bParam1)
{
	if (bParam1 || !func_4(uParam0))
	{
		func_40(uParam0);
	}
}

void func_83(var uParam0, int iParam1)
{
}

void func_84(var uParam0)
{
	if (func_14(uParam0))
	{
		func_17(70, 1);
	}
}

void func_85(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_157() - fParam1);
	func_158(uParam0, 1);
	func_159(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_86(var uParam0)
{
	if (!func_4(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_160(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_157() - uParam0->f_1);
}

int func_87(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iParam0, iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	return iVar0;
}

int func_88()
{
	int iVar0;

	if (!NETWORK::_0x255A5EF65EDA9167(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	iVar0 = PLAYER::_0xB9050A97594C8832(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!func_161(iVar0))
	{
		return 0;
	}
	return 1;
}

void func_89(int iParam0, bool bParam1, int iParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_162(1);
	}
	func_165(iParam0, func_163(), func_164(PLAYER::PLAYER_ID(), 1), iParam2);
}

bool func_90()
{
	return Global_1904613->f_8195 != -1;
}

bool func_91()
{
	int iVar0;

	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) <= 4);
}

bool func_92(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

bool func_93()
{
	return Global_1070356->f_27136.f_19.f_3 != 0;
}

int func_94()
{
	if (!func_166())
	{
		return 0;
	}
	return Global_1904613->f_8196;
}

bool func_95()
{
	return Global_1896726->f_382;
}

int func_96()
{
	var uVar0;

	if (!func_166())
	{
		return 0;
	}
	uVar0 = Global_1904613->f_8197;
	Global_1904613->f_8197 = 0;
	return uVar0;
}

bool func_97(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(&(Global_17172.f_2563[iParam0]), iParam1);
}

int func_98(int iParam0)
{
	if (func_100(iParam0, 4))
	{
		return 0;
	}
	return 1;
}

int func_99(int iParam0)
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

bool func_100(int iParam0, int iParam1)
{
	return ((Global_1904613->f_31[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_101(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_102(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 60)
	{
		return false;
	}
	if (((*Global_1949759)[iParam0 /*23*/])->f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3);
}

int func_103(var uParam0)
{
	int iVar0;

	if (!func_14(uParam0))
	{
		return 0;
	}
	if (CAM::_0x81DCFD13CF39920E())
	{
		return 0;
	}
	if (func_106())
	{
		return 0;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_RAGDOLL(iVar0))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iVar0)))
	{
		return 0;
	}
	if (!func_167(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false), 1050253722 /* Float: 0.3f */, 1060320051 /* Float: 0.7f */, 0, 1061158912 /* Float: 0.75f */))
	{
		return 0;
	}
	return 1;
}

int func_104()
{
	HUD::_TEXT_DATABASE_REQUEST("SATCH");
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("SATCH"))
	{
		return 0;
	}
	return 1;
}

int func_105(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
	{
		return 0;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_168(iVar0, 2))
		{
			if (iParam2 == ((*Global_1949759)[iVar0 /*23*/])->f_10 && iParam1 == ((*Global_1949759)[iVar0 /*23*/])->f_4)
			{
				return iVar0;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_169(iVar1, iParam1, sParam0, 2, iParam3, iParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1065353216 /* Float: 1f */, 0, 0, 0, iParam12, bParam13);
		return iVar1;
	}
	return 0;
}

bool func_106()
{
	return (Global_1939231->f_1 || &Global_1939231 == 1);
}

bool func_107(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915180->f_20136;
	}
	return (Global_1915180->f_20136 || Global_1915180->f_21989.f_1);
}

int func_108(int iParam0)
{
	if (iParam0 == Global_1939231->f_37)
	{
		return 1;
	}
	return 0;
}

int func_109(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (&Global_1939231->f_10454[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_110()
{
	Global_1939231->f_12 = 1;
}

void func_111(int iParam0)
{
	Global_1939231->f_37 = iParam0;
}

bool func_112(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_102(iParam0))
	{
		return false;
	}
	iVar0 = func_135(iParam0);
	if (HUD::_UIPROMPT_HAS_HOLD_AUTO_FILL_MODE(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		if (((*Global_1949759)[iVar0 /*23*/])->f_20)
		{
			iVar1 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iVar1 = MISC::_GET_SYSTEM_TIME();
		}
		uVar2 = HUD::_0x81801291806DBC50(((*Global_1949759)[iVar0 /*23*/])->f_3);
		if (!HUD::_UIPROMPT_IS_ACTIVE(((*Global_1949759)[iVar0 /*23*/])->f_3))
		{
			iVar3 = (iVar1 - ((*Global_1949759)[iVar0 /*23*/])->f_21);
			iVar4 = BUILTIN::FLOOR((IntToFloat(((*Global_1949759)[iVar0 /*23*/])->f_18) * (1f - ((*Global_1949759)[iVar0 /*23*/])->f_22)));
			if (iVar3 > iVar4)
			{
				return true;
			}
		}
		else
		{
			((*Global_1949759)[iVar0 /*23*/])->f_21 = iVar1;
			((*Global_1949759)[iVar0 /*23*/])->f_22 = uVar2;
		}
	}
	if (HUD::_0xCD072523791DDC1B(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1949759)[iVar0 /*23*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

void func_113(bool bParam0)
{
	if (bParam0)
	{
		Global_1939231 = 1;
	}
	else
	{
		Global_1939231 = 2;
	}
}

bool func_114()
{
	return Global_1939231->f_1;
}

int func_115(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::_0x9A100F1CF4546629(iParam0) || ENTITY::_0xC346A546612C49A9(iParam0))
	{
		iVar0 = func_170(&iParam0);
		if (!func_141(iVar0, 0))
		{
			iVar0 = func_171(iParam0);
		}
	}
	else
	{
		iVar0 = func_171(iParam0);
	}
	return iVar0;
}

bool func_116()
{
	return (func_172() || func_173());
}

int func_117(int iParam0)
{
	switch (iParam0)
	{
		case -1379917677:
		case joaat("a_c_alligator_03"):
		case -1262877910:
			return 0;
		default:
			break;
	}
	return 1;
}

bool func_118(int iParam0)
{
	if (!func_175(func_174(iParam0)))
	{
		return false;
	}
	return func_176(iParam0) > 0;
}

int func_119(int iParam0)
{
	if (func_31(4, iParam0))
	{
		return 1;
	}
	return 0;
}

int func_120(var uParam0)
{
	return func_177(uParam0, 1086324736 /* Float: 6f */, 1094713344 /* Float: 12f */, 1077936128 /* Float: 3f */, 1090519040 /* Float: 8f */);
}

void func_121(var uParam0)
{
	if (func_14(uParam0))
	{
		func_75(15, 3);
	}
}

void func_122(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	((*Global_1269869)[iVar0 /*20*/])->f_2 = (((*Global_1269869)[iVar0 /*20*/])->f_2 - (((*Global_1269869)[iVar0 /*20*/])->f_2 && iParam0));
}

void func_123(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_14(uParam0))
	{
		func_178(uParam0);
		return;
	}
	iVar0 = AITRANSPORT::_0xFFEC4B0A1A3ED515(uParam0->f_3, -1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iVar0 == PLAYER::PLAYER_PED_ID())
		{
			func_178(uParam0);
			return;
		}
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
	{
		if (func_119(uParam0->f_2))
		{
			MAP::_0x662D364ABF16DE2F(uParam0->f_1, -272772079);
		}
		else
		{
			MAP::_SET_BLIP_FLASH_STYLE(uParam0->f_1, -272772079);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			MAP::_SET_BLIP_FLASH_STYLE(uParam0->f_1, -1380599892);
			MAP::_SET_BLIP_FLASH_STYLE(uParam0->f_1, 453356795);
			return;
		}
		if (!PED::IS_PED_A_PLAYER(iVar0))
		{
			MAP::_SET_BLIP_FLASH_STYLE(uParam0->f_1, -1380599892);
			MAP::_SET_BLIP_FLASH_STYLE(uParam0->f_1, 453356795);
			return;
		}
		iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
		if (!NETWORK::_0x255A5EF65EDA9167(iVar1))
		{
			MAP::_SET_BLIP_FLASH_STYLE(uParam0->f_1, 453356795);
			return;
		}
		if (func_179(iVar1, 0))
		{
			MAP::_SET_BLIP_FLASH_STYLE(uParam0->f_1, -1380599892);
			MAP::_0x662D364ABF16DE2F(uParam0->f_1, 453356795);
		}
		return;
	}
	if (MAP::_0x9FA00E2FC134A9D0(uParam0->f_3))
	{
		return;
	}
	uParam0->f_1 = MAP::_BLIP_ADD_FOR_ENTITY(768962966, uParam0->f_3);
	iVar2 = ENTITY::GET_ENTITY_MODEL(uParam0->f_3);
	if (STREAMING::IS_MODEL_VALID(iVar2))
	{
		iVar3 = func_180(iVar2);
		if (func_141(iVar3, 0))
		{
			MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(uParam0->f_1, MISC::_CREATE_VAR_STRING(0, func_181(iVar3)));
		}
		else
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_1, func_182(2));
		}
	}
	else
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_1, func_182(2));
	}
	MAP::_0x662D364ABF16DE2F(uParam0->f_1, 580546400);
}

bool func_124(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_125(var uParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<7> Var3;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<7> Var15;

	iVar0 = uParam0->f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return 0;
	}
	if (!func_126(iVar0, iVar1, &uVar2))
	{
		return 0;
	}
	Var3 = { uParam0->f_11 };
	iVar10 = uParam0->f_2;
	iVar11 = PLAYER::PLAYER_ID();
	if (iVar10 == iVar11)
	{
		return 0;
	}
	iVar12 = iVar10;
	iVar13 = func_183(iVar12);
	iVar14 = func_184(iVar13, 10);
	if (iVar14 != -1)
	{
		if (func_185(iVar12, iVar14, 2) && func_186(iVar14, iVar0))
		{
			return 1;
		}
	}
	if (Global_1269869[iVar12 /*20*/] & 16 != 0 || Global_1269868 & 32 != 0)
	{
		return 0;
	}
	if (Global_1269869[iVar12 /*20*/] & 2 != 0 || Global_1269868 & 4 != 0)
	{
		if (_NAMESPACE26::_0x901E0DC25080C8B9(iVar11) == _NAMESPACE26::_0x901E0DC25080C8B9(iVar10))
		{
			return 0;
		}
	}
	Var15 = { func_187(iVar10) };
	if (Global_1269869[iVar12 /*20*/] & 4 != 0 || Global_1269868 & 8 != 0)
	{
		if (func_188(Var15, Var3))
		{
			return 0;
		}
	}
	if (Global_1269869[iVar12 /*20*/] & 8 != 0 || Global_1269868 & 16 != 0)
	{
		if (NETWORK::NETWORK_IS_FRIEND(&Var3))
		{
			return 0;
		}
	}
	return 1;
}

int func_126(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	iVar3 = -1;
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == -1772561076)
	{
		iVar4 = 0;
	}
	else
	{
		iVar4 = (9 - 1);
	}
	iVar2 = iVar3;
	while (iVar2 <= iVar4)
	{
		iVar1 = iVar2;
		iVar0 = AITRANSPORT::_0xFFEC4B0A1A3ED515(iParam0, iVar1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		else if (iVar0 == iParam1)
		{
			*uParam2 = iVar1;
			return 1;
		}
		iVar2++;
	}
	return 0;
}

void func_127(int iParam0)
{
	int iVar0;
	var uVar1;
	struct<7> Var2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0, 0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (!func_126(iParam0, iVar0, &uVar1))
	{
		return;
	}
	if (AITRANSPORT::_0x660639BC60157048(iVar0, iParam0))
	{
		return;
	}
	Var2.f_5 = 1073741824;
	Var2.f_6 = 1;
	Var2.f_3 = iVar0;
	Var2.f_4 = iParam0;
	AITRANSPORT::TASK_EXIT_TRANSPORT(&Var2);
}

void func_128(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::_0xF103823FFE72BB49(iParam1);
	if (ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
		if (iVar1 == iParam0)
		{
			return;
		}
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam1);
		return;
	}
	PED::_0x931B241409216C1F(iParam0, iParam1, 0);
}

int func_129(var uParam0, int iParam1)
{
	if (uParam0->f_2 != iParam1->f_1)
	{
		return 0;
	}
	return 1;
}

void func_130(var uParam0)
{
	if (!func_8(*uParam0, 4))
	{
		func_13(uParam0, 4);
	}
}

void func_131(var uParam0)
{
	if (!func_8(*uParam0, 4))
	{
		func_13(uParam0, 2);
	}
}

void func_132(var uParam0, int iParam1)
{
	if (func_31(4, 255))
	{
		return;
	}
	if (func_14(uParam0))
	{
		TELEMETRY::_0xE67AF24C5A3B6058(joaat("call"), &(iParam1->f_7), 0);
		func_189(4);
	}
	if (func_4(&(uParam0->f_18)))
	{
		func_5(&(uParam0->f_18));
	}
}

void func_133(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	var uVar6;

	iVar0 = uParam0->f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	iVar1 = PLAYER::PLAYER_ID();
	iVar2 = PLAYER::PLAYER_PED_ID();
	iVar3 = uParam0->f_2;
	if (!NETWORK::_0x255A5EF65EDA9167(iVar3))
	{
		return;
	}
	iVar4 = iParam1->f_1;
	if (!NETWORK::_0x255A5EF65EDA9167(iVar4))
	{
		return;
	}
	if (iVar3 != iVar4)
	{
		return;
	}
	bVar5 = false;
	if (iVar1 == iVar3)
	{
		bVar5 = true;
	}
	if (bVar5 && !bParam2)
	{
		return;
	}
	if (!func_126(iVar0, iVar2, &uVar6))
	{
		return;
	}
	func_190(iVar0);
	if (!bVar5)
	{
		if (func_16())
		{
			func_17(80, 1);
		}
	}
}

void func_134(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	iVar2 = uParam0->f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return;
	}
	iVar3 = iParam1->f_1;
	if (!NETWORK::_0x255A5EF65EDA9167(iVar3))
	{
		return;
	}
	if (iVar0 == iVar3)
	{
		return;
	}
	if (iVar2 != PLAYER::_0xB9050A97594C8832(iVar3))
	{
		return;
	}
	if (!func_126(iVar2, iVar1, &uVar4))
	{
		return;
	}
	func_190(iVar2);
}

int func_135(int iParam0)
{
	return iParam0;
}

void func_136(int iParam0)
{
	if (!func_191(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		HUD::_UIPROMPT_DELETE(((*Global_1949759)[iParam0 /*23*/])->f_3);
	}
	((*Global_1949759)[iParam0 /*23*/])->f_4 = 0;
	(*Global_1949759)[iParam0 /*23*/] = 1;
	((*Global_1949759)[iParam0 /*23*/])->f_16 = 0;
	((*Global_1949759)[iParam0 /*23*/])->f_1 = 0;
	((*Global_1949759)[iParam0 /*23*/])->f_6 = { 0f, 0f, 0f };
	((*Global_1949759)[iParam0 /*23*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1949759)[iParam0 /*23*/])->f_9 = 0f;
	((*Global_1949759)[iParam0 /*23*/])->f_10 = 0;
	((*Global_1949759)[iParam0 /*23*/])->f_11 = 0;
	((*Global_1949759)[iParam0 /*23*/])->f_2 = 1;
	((*Global_1949759)[iParam0 /*23*/])->f_15 = -1f;
}

int func_137(struct<2> Param0)
{
	if (!func_192(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_193(Param0))
	{
		return 0;
	}
	return 1;
}

struct<2> func_138()
{
	if (Global_1184439->f_129 <= 0)
	{
		return func_194(0);
	}
	if (Global_1184439->f_130 < 0 || Global_1184439->f_131 == 0)
	{
		return func_194(0);
	}
	return ((*Global_1184439)[Global_1184439->f_130 /*4*/])->f_1;
}

int func_139(int iParam0)
{
	int iVar0;

	if (!Global_1132968->f_6289)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0;
	}
	if (func_124(((*Global_1097610)[iVar0 /*51*/])->f_50, 2))
	{
		return 0;
	}
	if (func_195(((*Global_1055966)[iVar0 /*436*/])->f_2))
	{
		return 1;
	}
	return 0;
}

void func_140(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
}

int func_141(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_142(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if ((bParam4 && iParam1 == -915411861) && func_196(iParam0, 59806960))
	{
		iParam1 = 59806960;
	}
	if (func_197(iParam0))
	{
		return func_199(func_198(iParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_146(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32 /*2*/] == 2084597891 || &Var0[iVar32 /*2*/] == 773203532)
		{
			if (iParam5 != 0 && &Var0[iVar32 /*2*/] != iParam5)
			{
			}
			else
			{
				return (Var0[iVar32 /*2*/])->f_1;
				Jump @204; //curOff = 188
				if (&Var0[iVar32 /*2*/] == 0)
				{
				}
				else
				{
					iVar32++;
				}
				if (!bParam3)
				{
				}
				return 0;
			}
		}
	}

bool func_143(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_200() == 0)
	{
		return func_201(iParam0);
	}
	return iParam0 <= func_202();
}

int func_144(int iParam0)
{
	vector3 vVar0;

	if (!func_141(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_145()
{
	if (INVENTORY::_0x13D234A2A3F66E63(PLAYER::PLAYER_PED_ID()) != 3)
	{
		return 0;
	}
	return INVENTORY::_0xFC7563F482781A3D();
}

int func_146(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return 0;
	}
	if (!func_141(iParam0, 0))
	{
		return 0;
	}
	*iParam3 = ITEMDATABASE::_0xDEE7B3C76ED664BE(iParam0, iParam1);
	if (*iParam3 == 0)
	{
		if (!bParam5)
		{
		}
		return 0;
	}
	if (!bParam5)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!ITEMDATABASE::_0xAD73B614DF26CF8A(iParam0, iParam1, iVar0, (*uParam2)[iVar0 /*2*/]))
		{
			Jump @113; //curOff = 101
		}
		else if (!bParam5)
		{
		}
		iVar0++;
	}
	if (bParam4)
	{
		func_203(iParam0, iParam1, uParam2, *iParam3);
	}
	return 1;
}

int func_147(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_141(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_144(iParam0);
	if (iVar1 == joaat("ammo") || (bParam1 && iVar1 == joaat("weapon")))
	{
		iVar2 = func_204(iParam0, 1);
		if (iVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar2);
		}
	}
	else if (iVar1 == joaat("weapon"))
	{
		return func_205(iParam0, 0);
	}
	if (func_206(iParam0, joaat("default")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_207(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_208(iParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_207(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

int func_148(bool bParam0)
{
	if (func_200() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_207(bParam0));
}

int func_149(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_141(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	iVar0 = func_206(iParam0, joaat("default"));
	if (iVar0 != 0)
	{
		return func_209(iParam0, iParam1, iParam2, iParam3, bParam4);
	}
	Var1 = { func_210(iParam0, bParam4, 0) };
	Var6 = { func_211(iParam0, Var1, Var1.f_4, bParam4) };
	return func_212(iParam0, &Var6, &Var1, iParam1, iParam2, iParam3, bParam4);
}

int func_150(int iParam0)
{
	switch (iParam0)
	{
		case -1103707655:
		case 205718222:
		case 866168015:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_151(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_213(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			return func_214(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 16), iVar0, uParam1);
		}
	}
	else
	{
		return func_215(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_152(int iParam0, struct<16> Param1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1272170->f_20)
	{
		if (&Global_1272170->f_20.f_1[iVar0 /*20*/] == iParam0)
		{
			if ((Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1 == 1 || (Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1 == 5)
			{
				(Global_1272170->f_20.f_1[iVar0 /*20*/])->f_4 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

char* func_153(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NSHM_HORSE_CANNOT_CONTACT_STABLE";
		case 1:
			return "NSHM_HORSE_MOUNT_RESPAWNING";
		case 3:
			return "NSHM_HORSE_MOUNT_SWAPPED_RECENTLY";
		case 2:
			return "NSHM_HORSE_MOUNT_DISMISSED_RECENTLY";
		case 4:
			return "NSHM_HORSE_NO_HORSES_AVAILABLE";
		case 5:
			return "NSHM_HORSE_CANNOT_CONTACT_STABLE";
		case 6:
			return "NSHM_HORSE_CALL_HORSE_DISABLED";
		case 7:
			return "NSHM_HORSE_ACTIVE_HORSE_DEAD";
		case 8:
			return "NSHM_HORSE_ACTIVE_HORSE_DEAD_ALT";
		case 9:
			return "NSHM_HORSE_ACTIVE_HORSE_DEAD_VET_FEES";
		case 10:
			return "NSHM_HORSE_PLAYER_VEHICLE_NOT_DISMISSED";
		case 11:
			return "NSHM_HORSE_CALL_HORSE_VEHICLE";
		case 13:
			return "NSHM_VEHICLE_CANNOT_CONTACT_STABLE";
		case 28:
			return "NSHM_HORSE_CANT_MOUNT_PLAYER_HORSE";
		case 15:
			return "NSHM_HORSE_PARLEYED_WITH_OWNER";
		case 14:
			return "NSHM_HORSE_YOU_DO_NOT_OWN_HORSE";
		case 16:
			return "NSHM_HORSE_OWNER_KICKED_YOU";
		case 17:
			return "NSHM_HORSE_DIED";
		case 18:
			return "NSHM_HORSE_DIED_INSURANCE";
		case 19:
			return "NSHM_HORSE_DIED_BY_HOSTILE_ACTION_INSURANCE";
		case 20:
			return "NSHM_HORSE_DIED_BY_HOSTILE_ACTION";
		case 22:
			return "NSHM_HORSE_PENALTY_COOLDOWN";
		case 23:
			return "NSHM_HORSE_PENALTY_COOLDOWN_INSURANCE";
		case 24:
			return "NSHM_HORSE_PENALTY_COOLDOWN_COMPLETE";
		case 21:
			return "NSHM_HORSE_REVIVE_COOLDOWN_COMPLETE";
		case 25:
			return "NSHM_HORSE_INSURANCE_EXPIRED";
		case 26:
			return "NSHM_HORSE_CANNOT_DISMISS_CARRYING_OBJECT";
		case 27:
			return "NSHM_HORSE_MOUNTED_POSSE_MEMBER";
		case 29:
			return "NSHM_HORSE_BAD_SPORT_KILLED_ENEMY_HORSE";
		case 31:
			return "NSHM_VEHICLE_BAD_SPORT_DESTROYED_ENEMY_VEHICLE";
		case 30:
			return "NSHM_VEHICLE_MOUNTED_POSSE_MEMBER";
		default:
			break;
	}
	return "";
}

bool func_154(int iParam0)
{
	return func_216(&(Global_1270530->f_11.f_561[iParam0]));
}

var func_155(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_156(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iParam0, iParam1);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 1;
	}
	return 0;
}

float func_157()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_158(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_159(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_160(var uParam0)
{
	return func_33(*uParam0, 2);
}

int func_161(int iParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case -1698498246:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_162(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<12> Var4;

	Global_1270530->f_609.f_316 = 0;
	if (bParam0)
	{
		func_217(1);
	}
	if (func_218("ALL SATCHEL", &iVar0, &iVar1, -2015960939, 1))
	{
		if (iVar1 > 0)
		{
			Var4.f_9 = -1591664384;
			iVar2 = 0;
			while (iVar2 < iVar1)
			{
				if (func_219(&Var4, iVar2, iVar0, iVar1))
				{
					if (func_220(Var4.f_4))
					{
						if (bParam0)
						{
							func_221(Var4.f_11, 1);
						}
					}
					else
					{
						iVar3 = func_222(Var4.f_4);
						if (iVar3 > 0)
						{
							Global_1270530->f_609.f_316 = (Global_1270530->f_609.f_316 + (iVar3 * Var4.f_11));
						}
					}
				}
				iVar2++;
			}
		}
		func_223(iVar0);
	}
}

int func_163()
{
	return Global_1270530->f_609.f_316;
}

int func_164(int iParam0, bool bParam1)
{
	int iVar0;

	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		return func_224(0);
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return func_224(0);
	}
	return func_225(iVar0, bParam1);
}

void func_165(int iParam0, int iParam1, int iParam2, int iParam3)
{
	float fVar0;
	float fVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	fVar0 = (BUILTIN::TO_FLOAT(iParam1) * func_226(0, 1048576000 /* Float: 0.25f */));
	fVar1 = (BUILTIN::TO_FLOAT(iParam2) * func_226(1, 1048576000 /* Float: 0.25f */));
	if (Global_1901929->f_638.f_32)
	{
		fVar0 = 0f;
		fVar1 = 0f;
	}
	VEHICLE::_0x31F343383F19C987(iParam0, (fVar0 + fVar1), iParam3);
}

int func_166()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return 1;
	}
	return 0;
}

int func_167(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	bVar2 = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &fVar0, &fVar1);
	if (bVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_168(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1949759)[iParam0 /*23*/])->f_1 && iParam1) != 0;
}

void func_169(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;

	((*Global_1949759)[iParam0 /*23*/])->f_4 = iParam1;
	(*Global_1949759)[iParam0 /*23*/] = iParam4;
	((*Global_1949759)[iParam0 /*23*/])->f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	((*Global_1949759)[iParam0 /*23*/])->f_2 = iParam5;
	((*Global_1949759)[iParam0 /*23*/])->f_6 = { vParam6 };
	((*Global_1949759)[iParam0 /*23*/])->f_9 = fParam9;
	((*Global_1949759)[iParam0 /*23*/])->f_10 = iParam10;
	((*Global_1949759)[iParam0 /*23*/])->f_11 = iParam11;
	((*Global_1949759)[iParam0 /*23*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1949759)[iParam0 /*23*/])->f_5 = iParam12;
	((*Global_1949759)[iParam0 /*23*/])->f_1 = 2;
	((*Global_1949759)[iParam0 /*23*/])->f_17 = -1;
	((*Global_1949759)[iParam0 /*23*/])->f_18 = iParam16;
	((*Global_1949759)[iParam0 /*23*/])->f_19 = iParam15;
	((*Global_1949759)[iParam0 /*23*/])->f_20 = bParam25;
	((*Global_1949759)[iParam0 /*23*/])->f_22 = 0f;
	if (bParam25)
	{
		((*Global_1949759)[iParam0 /*23*/])->f_21 = MISC::GET_GAME_TIMER();
	}
	else
	{
		((*Global_1949759)[iParam0 /*23*/])->f_21 = MISC::_GET_SYSTEM_TIME();
	}
	iVar0 = HUD::_UIPROMPT_REGISTER_BEGIN();
	HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam1);
	if (iParam23 != 0)
	{
		HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam23);
	}
	HUD::_UIPROMPT_SET_TEXT(iVar0, sParam2);
	if (iParam3 == 4)
	{
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, vParam6);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam11);
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, 0f, 0f, 0f);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	HUD::_UIPROMPT_SET_PRIORITY(iVar0, iParam4);
	HUD::_UIPROMPT_SET_TRANSPORT_MODE(iVar0, iParam5);
	HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 18, 1);
	if (bParam22)
	{
		HUD::_0x53CE46C01A089DA1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 0);
			break;
		case 2:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 1);
			break;
		case 1:
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, iParam16);
			break;
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		case 7:
			HUD::_0xA3F2149AA24F3D8E(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		case 14:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 16:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 15:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, 1);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	((*Global_1949759)[iParam0 /*23*/])->f_3 = iVar0;
	func_227(iParam0, 1);
	func_228(iParam0, 1);
	func_229(iParam0, 128);
}

int func_170(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*iParam0);
	return func_230(iVar0);
}

int func_171(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::_0x31FEF6A20F00B963(iParam0);
	if (iVar0 == 0)
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar0 = func_230(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
		}
	}
	return iVar0;
}

var func_172()
{
	return Global_1270530->f_609.f_320;
}

bool func_173()
{
	return Global_1270530->f_609.f_319 != -1;
}

int func_174(int iParam0)
{
	switch (iParam0)
	{
		case -802026654: /* GXTEntry: "Good Alligator Skin" */
			return -1670497261;
		case 1806153689: /* GXTEntry: "Poor Alligator Skin" */
			return -280711232;
		case -1625078531: /* GXTEntry: "Perfect Alligator Skin" */
			return 596590814;
		case 143941906: /* GXTEntry: "Good Bear Pelt" */
			return 1824983669;
		case 957520252: /* GXTEntry: "Poor Bear Pelt" */
			return 928262209;
		case 1292673537: /* GXTEntry: "Perfect Bear Pelt" */
			return 541735817;
		case -2059726619: /* GXTEntry: "Good Beaver Pelt" */
			return 478256501;
		case -1569450319: /* GXTEntry: "Poor Beaver Pelt" */
			return -232007656;
		case 854596618: /* GXTEntry: "Perfect Beaver Pelt" */
			return 19595959;
		case 1490032862: /* GXTEntry: "Good Black Bear Pelt" */
			return -101065075;
		case 1083865179: /* GXTEntry: "Poor Black Bear Pelt" */
			return 2105875134;
		case 663376218: /* GXTEntry: "Perfect Black Bear Pelt" */
			return 294194582;
		case 2116849039:
			return 837315235;
		case 1248540072: /* GXTEntry: "Poor Boar Pelt" */
			return -1818319295;
		case -1858513856: /* GXTEntry: "Perfect Boar Pelt" */
			return -1597636811;
		case -868657362: /* GXTEntry: "Good Buck Pelt" */
			return -1985596288;
		case 1603936352: /* GXTEntry: "Poor Buck Pelt" */
			return -440737957;
		case -702790226: /* GXTEntry: "Perfect Buck Pelt" */
			return -1886002303;
		case -591117838: /* GXTEntry: "Good Bison Pelt" */
			return -901855085;
		case -1730060063: /* GXTEntry: "Poor Bison Pelt" */
			return 891487295;
		case -237756948: /* GXTEntry: "Perfect Bison Pelt" */
			return -1647829735;
		case -336086818: /* GXTEntry: "Good Bull Hide" */
			return 1698233050;
		case 9293261: /* GXTEntry: "Poor Bull Hide" */
			return -1939379896;
		case -53270317: /* GXTEntry: "Perfect Bull Hide" */
			return -1903865243;
		case 459744337: /* GXTEntry: "Good Cougar Pelt" */
			return 2116155169;
		case 1914602340: /* GXTEntry: "Poor Cougar Pelt" */
			return -1373796272;
		case -1791452194: /* GXTEntry: "Perfect Cougar Pelt" */
			return 834120727;
		case 1150594075: /* GXTEntry: "Good Cow Hide" */
			return -976686879;
		case 334093551: /* GXTEntry: "Poor Cow Hide" */
			return 622542686;
		case -845037222: /* GXTEntry: "Perfect Cow Hide" */
			return -96726590;
		case 1150939141: /* GXTEntry: "Good Coyote Pelt" */
			return 493864472;
		case -1558096473: /* GXTEntry: "Poor Coyote Pelt" */
			return -1364685383;
		case -794277189: /* GXTEntry: "Perfect Coyote Pelt" */
			return 501072671;
		case -1827027577: /* GXTEntry: "Good Deer Pelt" */
			return -1832121185;
		case -662178186: /* GXTEntry: "Poor Deer Pelt" */
			return 332878276;
		case -1035515486: /* GXTEntry: "Perfect Deer Pelt" */
			return 226674781;
		case 1181652728: /* GXTEntry: "Good Elk Pelt" */
			return 945521246;
		case 2053771712: /* GXTEntry: "Poor Elk Pelt" */
			return 1013673835;
		case -1332163079: /* GXTEntry: "Perfect Elk Pelt" */
			return 1080677561;
		case 238733925: /* GXTEntry: "Good Fox Pelt" */
			return 441281843;
		case 1647012424: /* GXTEntry: "Poor Fox Pelt" */
			return 2100972340;
		case 500722008: /* GXTEntry: "Perfect Fox Pelt" */
			return 731989586;
		case 1710714415: /* GXTEntry: "Good Goat Hide" */
			return -312223536;
		case 699990316: /* GXTEntry: "Poor Goat Hide" */
			return 919524407;
		case -1648383828: /* GXTEntry: "Perfect Goat Hide" */
			return 45874041;
		case -1379330323: /* GXTEntry: "Good Collared Peccary Pig Pelt" */
			return -1135509110;
		case -99092070: /* GXTEntry: "Poor Collared Peccary Pig Pelt" */
			return -1991809269;
		case 1963510418: /* GXTEntry: "Perfect Collared Peccary Pig Pelt" */
			return -882315424;
		case 1636891382: /* GXTEntry: "Good Moose Pelt" */
			return -1198430015;
		case 1868576868: /* GXTEntry: "Poor Moose Pelt" */
			return 610503310;
		case -217731719: /* GXTEntry: "Perfect Moose Pelt" */
			return -2104728156;
		case 1208128650: /* GXTEntry: "Good Ox Hide" */
			return -1848951328;
		case 462348928: /* GXTEntry: "Poor Ox Hide" */
			return -1522563214;
		case 659601266: /* GXTEntry: "Perfect Ox Hide" */
			return 701524769;
		case -395646254: /* GXTEntry: "Good Panther Pelt" */
			return -1125735460;
		case 1584468323: /* GXTEntry: "Poor Panther Pelt" */
			return -912340422;
		case 1969175294: /* GXTEntry: "Perfect Panther Pelt" */
			return -339216640;
		case -57190831: /* GXTEntry: "Good Pig Hide" */
			return -850815155;
		case -308965548: /* GXTEntry: "Poor Pig Hide" */
			return 980503581;
		case -1102272634: /* GXTEntry: "Perfect Pig Hide" */
			return 222730798;
		case 554578289: /* GXTEntry: "Good Pronghorn Hide" */
			return -615127816;
		case -983605026: /* GXTEntry: "Poor Pronghorn Hide" */
			return -588738567;
		case -1544126829: /* GXTEntry: "Perfect Pronghorn Hide" */
			return -1194176543;
		case -476045512: /* GXTEntry: "Good Ram Hide" */
			return -963727698;
		case 1796037447: /* GXTEntry: "Poor Ram Hide" */
			return -553292391;
		case 1795984405: /* GXTEntry: "Perfect Ram Hide" */
			return 1964559810;
		case -1317365569: /* GXTEntry: "Good Sheep Hide" */
			return -30369031;
		case 1729948479: /* GXTEntry: "Poor Sheep Hide" */
			return 1200593517;
		case 1466150167: /* GXTEntry: "Perfect Sheep Hide" */
			return 1386213093;
		case 1145777975: /* GXTEntry: "Good Wolf Pelt" */
			return -1853692477;
		case 85441452: /* GXTEntry: "Poor Wolf Pelt" */
			return -265369183;
		case 653400939: /* GXTEntry: "Perfect Wolf Pelt" */
			return 1490994314;
		case 915880986: /* GXTEntry: "Good Alligator Carcass" */
			return -560512119;
		case -1424697962: /* GXTEntry: "Perfect Alligator Carcass" */
			return -372283616;
		case -1643384846: /* GXTEntry: "Poor Alligator Carcass" */
			return 643029198;
		case -847420802: /* GXTEntry: "Good Armadillo Carcass" */
			return -507336551;
		case -662726703: /* GXTEntry: "Perfect Armadillo Carcass" */
			return -1633300610;
		case 1760886130: /* GXTEntry: "Poor Armadillo Carcass" */
			return 312232747;
		case -1243653490: /* GXTEntry: "Good Badger Carcass" */
			return -369028960;
		case 1988467099: /* GXTEntry: "Perfect Badger Carcass" */
			return 56997271;
		case -674590015: /* GXTEntry: "Poor Badger Carcass" */
			return -562880581;
		case -1480423460: /* GXTEntry: "Good Beaver Carcass" */
			return 1914482046;
		case 924882045: /* GXTEntry: "Perfect Beaver Carcass" */
			return -398123506;
		case 1415608202: /* GXTEntry: "Poor Beaver Carcass" */
			return -154193613;
		case -593311590: /* GXTEntry: "Good Bighorn Sheep Carcass" */
			return 253511830;
		case 765085831: /* GXTEntry: "Perfect Bighorn Sheep Carcass" */
			return 25196805;
		case 2094730711: /* GXTEntry: "Poor Bighorn Sheep Carcass" */
			return -585570711;
		case -1310590179: /* GXTEntry: "Good Buck Carcass" */
			return 738250137;
		case 992366796: /* GXTEntry: "Perfect Buck Carcass" */
			return -255175472;
		case -244657613: /* GXTEntry: "Poor Buck Carcass" */
			return 2029824605;
		case -2026210939: /* GXTEntry: "Good California Condor Carcass" */
			return 637459650;
		case -1252472243: /* GXTEntry: "Perfect California Condor Carcass" */
			return -1763677083;
		case -980016656: /* GXTEntry: "Poor California Condor Carcass" */
			return 105057785;
		case -758005668: /* GXTEntry: "Good Chicken Carcass" */
			return 2109109029;
		case -2139551030: /* GXTEntry: "Perfect Chicken Carcass" */
			return 590763523;
		case 1607144310: /* GXTEntry: "Poor Chicken Carcass" */
			return -1415366968;
		case 80093385: /* GXTEntry: "Good Cormorant Carcass" */
			return 1525242558;
		case -867655342: /* GXTEntry: "Perfect Cormorant Carcass" */
			return -1053027662;
		case 991092621: /* GXTEntry: "Poor Cormorant Carcass" */
			return 170878033;
		case 871746664: /* GXTEntry: "Good Cougar Carcass" */
			return 1176700965;
		case 1626949878: /* GXTEntry: "Perfect Cougar Carcass" */
			return 956769558;
		case -1722483116: /* GXTEntry: "Poor Cougar Carcass" */
			return -92340513;
		case -1739474417: /* GXTEntry: "Good Coyote Carcass" */
			return -1628899142;
		case -161524199: /* GXTEntry: "Perfect Coyote Carcass" */
			return -1009793706;
		case 156979555: /* GXTEntry: "Poor Coyote Carcass" */
			return 69303734;
		case 322141256: /* GXTEntry: "Good Crane Carcass" */
			return 1934146069;
		case 1310120320: /* GXTEntry: "Perfect Crane Carcass" */
			return 1251861193;
		case -1228376431: /* GXTEntry: "Poor Crane Carcass" */
			return -1201528492;
		case 472142656: /* GXTEntry: "Good Deer Carcass" */
			return -584564578;
		case -1837840093: /* GXTEntry: "Perfect Deer Carcass" */
			return 1257170615;
		case 58634176: /* GXTEntry: "Poor Deer Carcass" */
			return -443353688;
		case 1023080408: /* GXTEntry: "Good Duck Carcass" */
			return -726514003;
		case 1001171791: /* GXTEntry: "Perfect Duck Carcass" */
			return -1178975683;
		case 1210345318: /* GXTEntry: "Poor Duck Carcass" */
			return -1735020859;
		case 399553313: /* GXTEntry: "Good Eagle Carcass" */
			return 1066403056;
		case -1422869557: /* GXTEntry: "Perfect Eagle Carcass" */
			return 379141135;
		case -1378812236: /* GXTEntry: "Poor Eagle Carcass" */
			return 178588058;
		case 1011003885: /* GXTEntry: "Good Egret Carcass" */
			return 250119098;
		case 651035143: /* GXTEntry: "Perfect Egret Carcass" */
			return 1462096210;
		case 2013022756: /* GXTEntry: "Poor Egret Carcass" */
			return 125705494;
		case -1186289527: /* GXTEntry: "Good Fox Carcass" */
			return 1955497943;
		case 877935135: /* GXTEntry: "Perfect Fox Carcass" */
			return -239746263;
		case -39646495: /* GXTEntry: "Poor Fox Carcass" */
			return 483041697;
		case 1582593525: /* GXTEntry: "Good Gila Monster Carcass" */
			return 2115836262;
		case -246542229: /* GXTEntry: "Perfect Gila Monster Carcass" */
			return 127221449;
		case -529454751: /* GXTEntry: "Poor Gila Monster Carcass" */
			return 1281075400;
		case -46978629: /* GXTEntry: "Good Goat Carcass" */
			return -187017787;
		case -1347000030: /* GXTEntry: "Perfect Goat Carcass" */
			return 2084769890;
		case -505583391: /* GXTEntry: "Poor Goat Carcass" */
			return -1860395611;
		case 1645887374: /* GXTEntry: "Good Goose Carcass" */
			return -925132283;
		case -1559227925: /* GXTEntry: "Perfect Goose Carcass" */
			return 1221255602;
		case 1562528937: /* GXTEntry: "Poor Goose Carcass" */
			return -1971512016;
		case -1471526136: /* GXTEntry: "Good Hawk Carcass" */
			return 1915869310;
		case -1440794801: /* GXTEntry: "Perfect Hawk Carcass" */
			return -291878865;
		case 2144711797:
			return 628765193;
		case 718825539: /* GXTEntry: "Good Heron Carcass" */
			return 73897638;
		case 2105263879: /* GXTEntry: "Perfect Heron Carcass" */
			return -520524691;
		case -905842006: /* GXTEntry: "Poor Heron Carcass" */
			return -677211393;
		case 1191274340: /* GXTEntry: "Good Iguana Carcass" */
			return 607200259;
		case 1613453781: /* GXTEntry: "Perfect Iguana Carcass" */
			return -422975251;
		case -1030182399: /* GXTEntry: "Poor Iguana Carcass" */
			return -162653027;
		case 987967309: /* GXTEntry: "Good Loon Carcass" */
			return -1918690839;
		case -1060737769: /* GXTEntry: "Perfect Loon Carcass" */
			return 885447719;
		case 553310445: /* GXTEntry: "Poor Loon Carcass" */
			return 1359956914;
		case -1838865945: /* GXTEntry: "Good Muskrat Carcass" */
			return -509393273;
		case 1418092959: /* GXTEntry: "Perfect Muskrat Carcass" */
			return 1728485205;
		case -1315697778: /* GXTEntry: "Poor Muskrat Carcass" */
			return 179793498;
		case -1772126340: /* GXTEntry: "Good Opossum Carcass" */
			return -1846596769;
		case -935543049: /* GXTEntry: "Perfect Opossum Carcass" */
			return 1833664130;
		case 1772544356: /* GXTEntry: "Poor Opossum Carcass" */
			return joaat("dlc_mp_arena_m_jbib_7_13");
		case -266273535: /* GXTEntry: "Good Owl Carcass" */
			return 2094969043;
		case -1670544626: /* GXTEntry: "Perfect Owl Carcass" */
			return -1582650542;
		case 1290960696: /* GXTEntry: "Poor Owl Carcass" */
			return 1799724359;
		case 1913571052: /* GXTEntry: "Good Panther Carcass" */
			return 1598789118;
		case 1717601520: /* GXTEntry: "Perfect Panther Carcass" */
			return 1824349223;
		case 430397370: /* GXTEntry: "Poor Panther Carcass" */
			return 696418077;
		case 16287711: /* GXTEntry: "Good Parrot Carcass" */
			return 1106697533;
		case -1356230367: /* GXTEntry: "Perfect Parrot Carcass" */
			return -1454259523;
		case 1417331079: /* GXTEntry: "Poor Parrot Carcass" */
			return -1896235488;
		case -884124246: /* GXTEntry: "Good Pelican Carcass" */
			return 276180683;
		case 1884610748: /* GXTEntry: "Perfect Pelican Carcass" */
			return -747881514;
		case 746558492: /* GXTEntry: "Poor Pelican Carcass" */
			return 1262126135;
		case -892811627: /* GXTEntry: "Good Pheasant Carcass" */
			return 2265787;
		case -2040522845: /* GXTEntry: "Perfect Pheasant Carcass" */
			return -2129601667;
		case -1224510844: /* GXTEntry: "Poor Pheasant Carcass" */
			return 75684692;
		case 1334837390: /* GXTEntry: "Good Pig Carcass" */
			return 1900817837;
		case 339620522: /* GXTEntry: "Perfect Pig Carcass" */
			return -1956299475;
		case 1770451033: /* GXTEntry: "Poor Pig Carcass" */
			return 694522728;
		case 756657535: /* GXTEntry: "Good Prairie Chicken Carcass" */
			return 765710924;
		case 862898895: /* GXTEntry: "Perfect Prairie Chicken Carcass" */
			return 893337488;
		case 1997845858: /* GXTEntry: "Poor Prairie Chicken Carcass" */
			return 154935767;
		case -1930144509: /* GXTEntry: "Good Pronghorn Carcass" */
			return -568415076;
		case 1846915545: /* GXTEntry: "Perfect Pronghorn Carcass" */
			return 1274028936;
		case -1816929509: /* GXTEntry: "Poor Pronghorn Carcass" */
			return -1140231877;
		case 1197831625: /* GXTEntry: "Good Rabbit Carcass" */
			return -27138549;
		case -1866642239: /* GXTEntry: "Perfect Rabbit Carcass" */
			return 659005977;
		case -1508120809: /* GXTEntry: "Poor Rabbit Carcass" */
			return -771957300;
		case -1007681885: /* GXTEntry: "Good Raccoon Carcass" */
			return 29804808;
		case 434924608: /* GXTEntry: "Perfect Raccoon Carcass" */
			return 1551511426;
		case 1666393029: /* GXTEntry: "Poor Raccoon Carcass" */
			return 800713897;
		case -1814593136: /* GXTEntry: "Good Ram Carcass" */
			return 1612873893;
		case -1188120304: /* GXTEntry: "Perfect Ram Carcass" */
			return 1434794005;
		case 1978734761: /* GXTEntry: "Poor Ram Carcass" */
			return -1919690611;
		case -824902132: /* GXTEntry: "Good Raven Carcass" */
			return 1742727635;
		case -1015531226: /* GXTEntry: "Perfect Raven Carcass" */
			return 539212240;
		case -581619522: /* GXTEntry: "Poor Raven Carcass" */
			return -1730963015;
		case -861854914: /* GXTEntry: "Good Red-footed Booby Carcass" */
			return 392259955;
		case -545447034: /* GXTEntry: "Perfect Red-footed Booby Carcass" */
			return 1775800065;
		case -1824684934: /* GXTEntry: "Poor Red-footed Booby Carcass" */
			return 1100310307;
		case 980653387: /* GXTEntry: "Good Rooster Carcass" */
			return 844987909;
		case -1011598664: /* GXTEntry: "Perfect Rooster Carcass" */
			return -278500197;
		case -177476569: /* GXTEntry: "Poor Rooster Carcass" */
			return 887422410;
		case 416630124: /* GXTEntry: "Good Roseate Spoonbill Carcass" */
			return -1794448450;
		case 1925728375: /* GXTEntry: "Perfect Roseate Spoonbill Carcass" */
			return 2054761774;
		case -1080457688: /* GXTEntry: "Poor Roseate Spoonbill Carcass" */
			return -1608758596;
		case 1742676369: /* GXTEntry: "Good Seagull Carcass" */
			return 1688649464;
		case -899751553: /* GXTEntry: "Perfect Seagull Carcass" */
			return -2008306533;
		case 431501574: /* GXTEntry: "Poor Seagull Carcass" */
			return 1100437577;
		case 2126795269:
			return 1726381584;
		case 1489051752: /* GXTEntry: "Perfect Sheep Carcass" */
			return 1400293322;
		case -1705499323: /* GXTEntry: "Poor Sheep Carcass" */
			return 995534052;
		case -2013445740: /* GXTEntry: "Good Skunk Carcass" */
			return 1922992885;
		case 102446365: /* GXTEntry: "Perfect Skunk Carcass" */
			return 81605402;
		case -1927342740: /* GXTEntry: "Poor Skunk Carcass" */
			return -286651444;
		case -410900360: /* GXTEntry: "Good Black-tailed Rattlesnake Carcass" */
			return -2064547947;
		case -1073614594: /* GXTEntry: "Perfect Black-tailed Rattlesnake Carcass" */
			return -176022019;
		case 2060013792: /* GXTEntry: "Poor Black-tailed Rattlesnake Carcass" */
			return 1232227412;
		case 581032175: /* GXTEntry: "Good Red Boa Carcass" */
			return -893789138;
		case -581931638: /* GXTEntry: "Perfect Red Boa Carcass" */
			return 2050798648;
		case -1528265128: /* GXTEntry: "Poor Red Boa Carcass" */
			return -798568163;
		case -142632645: /* GXTEntry: "Good Copperhead Carcass" */
			return 230404077;
		case -2048519180: /* GXTEntry: "Perfect Copperhead Carcass" */
			return -1383606050;
		case 1442025993: /* GXTEntry: "Poor Copperhead Carcass" */
			return 1090514323;
		case 441195430: /* GXTEntry: "Good Fer-de-Lance Carcass" */
			return 1374677981;
		case 748665395: /* GXTEntry: "Perfect Fer-de-Lance Carcass" */
			return -636161424;
		case 351048413: /* GXTEntry: "Poor Fer-de-Lance Carcass" */
			return -1083700033;
		case -914779013: /* GXTEntry: "Good Snake Carcass" */
			return 63328590;
		case 1323485831: /* GXTEntry: "Perfect Snake Carcass" */
			return -676594955;
		case -365111821: /* GXTEntry: "Poor Snake Carcass" */
			return -654290128;
		case 101495387: /* GXTEntry: "Good Water Snake Carcass" */
			return -66423751;
		case 157917500: /* GXTEntry: "Perfect Water Snake Carcass" */
			return -237024085;
		case -936537044: /* GXTEntry: "Poor Water Snake Carcass" */
			return 431553826;
		case -1610329427: /* GXTEntry: "Good Turkey Carcass" */
			return -979079160;
		case -1836227998: /* GXTEntry: "Perfect Turkey Carcass" */
			return 1045329345;
		case 619479575: /* GXTEntry: "Poor Turkey Carcass" */
			return 908385665;
		case -1444929945: /* GXTEntry: "Good Snapping Turtle Carcass" */
			return 1675254736;
		case -929322235: /* GXTEntry: "Perfect Snapping Turtle Carcass" */
			return 564968345;
		case -548076717: /* GXTEntry: "Poor Snapping Turtle Carcass" */
			return 1401257519;
		case -281211381: /* GXTEntry: "Good Vulture Carcass" */
			return 1935981234;
		case 493457089: /* GXTEntry: "Perfect Vulture Carcass" */
			return 1930921435;
		case -479485786: /* GXTEntry: "Poor Vulture Carcass" */
			return 4633231;
		case 27838955: /* GXTEntry: "Good Wolf Carcass" */
			return -588047787;
		case 1641833719: /* GXTEntry: "Perfect Wolf Carcass" */
			return -1503391831;
		case -314933180: /* GXTEntry: "Poor Wolf Carcass" */
			return -1409703989;
		case 1917027383: /* GXTEntry: "Channel Catfish" */
			return 1754322973;
		case 803930024: /* GXTEntry: "Poor Channel Catfish" */
			return -479401797;
		case -855052577: /* GXTEntry: "Lake Sturgeon" */
			return -1108373076;
		case 1111663869: /* GXTEntry: "Poor Lake Sturgeon" */
			return -255978368;
		case 1338219162: /* GXTEntry: "Longnose Gar" */
			return 1771244699;
		case 1297433586: /* GXTEntry: "Poor Longnose Gar" */
			return 1837733705;
		case -1538397860: /* GXTEntry: "Muskie" */
			return -755340618;
		case -293259613: /* GXTEntry: "Poor Muskie" */
			return -274405663;
		case 193037129: /* GXTEntry: "Northern Pike" */
			return 1107308482;
		case 588902637: /* GXTEntry: "Poor Northern Pike" */
			return -2034280224;
		case 1908704263: /* GXTEntry: "Good Skinned Alligator Carcass" */
			return 1147674954;
		case -2112217546: /* GXTEntry: "Perfect Skinned Alligator Carcass" */
			return 285459296;
		case -1745255175: /* GXTEntry: "Poor Skinned Alligator Carcass" */
			return -1085630227;
		case -237368063: /* GXTEntry: "Good Skinned Armadillo Carcass" */
			return -977624126;
		case 1598967299: /* GXTEntry: "Perfect Skinned Armadillo Carcass" */
			return -1327298596;
		case -1809464109: /* GXTEntry: "Poor Skinned Armadillo Carcass" */
			return -1809370620;
		case -165201917: /* GXTEntry: "Good Skinned Badger Carcass" */
			return -925376594;
		case 815147738: /* GXTEntry: "Perfect Skinned Badger Carcass" */
			return 571888586;
		case 1287583539: /* GXTEntry: "Poor Skinned Badger Carcass" */
			return 1427039907;
		case -2126985311: /* GXTEntry: "Good Skinned Beaver Carcass" */
			return 1870052953;
		case -1268352491: /* GXTEntry: "Perfect Skinned Beaver Carcass" */
			return 1293957931;
		case -1940225526: /* GXTEntry: "Poor Skinned Beaver Carcass" */
			return -1604751590;
		case -212307068: /* GXTEntry: "Good Skinned Bighorn Sheep Carcass" */
			return 1619108346;
		case 355421032: /* GXTEntry: "Perfect Skinned Bighorn Sheep Carcass" */
			return 954753324;
		case 1657729714: /* GXTEntry: "Poor Skinned Bighorn Sheep Carcass" */
			return -530719231;
		case 1350692346: /* GXTEntry: "Good Skinned Buck Carcass" */
			return 1790841517;
		case -257850294: /* GXTEntry: "Perfect Skinned Buck Carcass" */
			return 1709510426;
		case -918541014: /* GXTEntry: "Poor Skinned Buck Carcass" */
			return 1406497512;
		case -947573795: /* GXTEntry: "Good Plucked California Condor Carcass" */
			return -397897626;
		case -2068302756: /* GXTEntry: "Perfect Plucked California Condor Carcass" */
			return -2079304485;
		case 1650829985: /* GXTEntry: "Poor Plucked California Condor Carcass" */
			return -1919132092;
		case -1808044035: /* GXTEntry: "Good Skinned Chicken Carcass" */
			return 1146883867;
		case -1952647655: /* GXTEntry: "Perfect Skinned Chicken Carcass" */
			return 213675443;
		case 1293221440: /* GXTEntry: "Poor Skinned Chicken Carcass" */
			return -2050528754;
		case -642946194: /* GXTEntry: "Good Plucked Cormorant Carcass" */
			return 953077128;
		case 819214075: /* GXTEntry: "Perfect Plucked Cormorant Carcass" */
			return -1141453785;
		case -858652427: /* GXTEntry: "Poor Plucked Cormorant Carcass" */
			return 1397626289;
		case 395625948: /* GXTEntry: "Good Skinned Cougar Carcass" */
			return 1133589554;
		case -2063800922: /* GXTEntry: "Perfect Skinned Cougar Carcass" */
			return 1666627023;
		case -2117103642: /* GXTEntry: "Poor Skinned Cougar Carcass" */
			return -1809574093;
		case -1583694057: /* GXTEntry: "Good Skinned Coyote Carcass" */
			return -1782999617;
		case -1550918713: /* GXTEntry: "Perfect Skinned Coyote Carcass" */
			return -508623201;
		case 836539658: /* GXTEntry: "Poor Skinned Coyote Carcass" */
			return -1594035895;
		case 773062352: /* GXTEntry: "Good Plucked Crane Carcass" */
			return 696987226;
		case 1306100270: /* GXTEntry: "Perfect Plucked Crane Carcass" */
			return 1080524287;
		case -1063194668: /* GXTEntry: "Poor Plucked Crane Carcass" */
			return 1671304715;
		case 337839068: /* GXTEntry: "Good Skinned Deer Carcass" */
			return 1998585657;
		case -1426520714: /* GXTEntry: "Perfect Skinned Deer Carcass" */
			return 1020167279;
		case -1456429189: /* GXTEntry: "Poor Skinned Deer Carcass" */
			return 623984063;
		case -2032809253: /* GXTEntry: "Good Skinned Duck Carcass" */
			return 2094082294;
		case 781728005: /* GXTEntry: "Perfect Skinned Duck Carcass" */
			return -1960159253;
		case 1202409779: /* GXTEntry: "Poor Skinned Duck Carcass" */
			return -1365028169;
		case 1520877300: /* GXTEntry: "Good Plucked Eagle Carcass" */
			return -1221735631;
		case -1736624361: /* GXTEntry: "Perfect Plucked Eagle Carcass" */
			return -112981243;
		case 719465997: /* GXTEntry: "Poor Plucked Eagle Carcass" */
			return -2139087610;
		case -361486526: /* GXTEntry: "Good Skinned Egret Carcass" */
			return -1602510454;
		case -765274711: /* GXTEntry: "Perfect Skinned Egret Carcass" */
			return -1297983889;
		case -887205673: /* GXTEntry: "Poor Skinned Egret Carcass" */
			return 2092698587;
		case -784020903: /* GXTEntry: "Good Skinned Fox Carcass" */
			return -996945065;
		case -886117938: /* GXTEntry: "Perfect Skinned Fox Carcass" */
			return 2084956560;
		case -1416771220: /* GXTEntry: "Poor Skinned Fox Carcass" */
			return 702905543;
		case 1648676911: /* GXTEntry: "Good Skinned Gila Monster Carcass" */
			return -1581520016;
		case 2103833563: /* GXTEntry: "Perfect Skinned Gila Monster Carcass" */
			return 1086407100;
		case -831636369: /* GXTEntry: "Poor Skinned Gila Monster Carcass" */
			return 511869570;
		case -852290935: /* GXTEntry: "Good Skinned Goat Carcass" */
			return -880049552;
		case -1870415962: /* GXTEntry: "Perfect Skinned Goat Carcass" */
			return -1117023247;
		case -788684109: /* GXTEntry: "Poor Skinned Goat Carcass" */
			return -734978095;
		case 1416435145: /* GXTEntry: "Good Skinned Goose Carcass" */
			return -1006346516;
		case -1483088274: /* GXTEntry: "Perfect Skinned Goose Carcass" */
			return -1801089352;
		case -791867098: /* GXTEntry: "Poor Skinned Goose Carcass" */
			return -1884753879;
		case -1689552552: /* GXTEntry: "Good Plucked Hawk Carcass" */
			return 1991763855;
		case -1850779170: /* GXTEntry: "Perfect Plucked Hawk Carcass" */
			return -1306257518;
		case -121487803: /* GXTEntry: "Poor Plucked Hawk Carcass" */
			return -1020683612;
		case -1280499288: /* GXTEntry: "Good Skinned Heron Carcass" */
			return 926836797;
		case 820245961: /* GXTEntry: "Perfect Skinned Heron Carcass" */
			return -1232342767;
		case -889526774: /* GXTEntry: "Poor Skinned Heron Carcass" */
			return -309925418;
		case -521025998: /* GXTEntry: "Good Skinned Iguana Carcass" */
			return -123071275;
		case 1583031244: /* GXTEntry: "Perfect Skinned Iguana Carcass" */
			return -1558938686;
		case -2115599211: /* GXTEntry: "Poor Skinned Iguana Carcass" */
			return 1091662795;
		case -767176802: /* GXTEntry: "Good Skinned Loon Carcass" */
			return -788362738;
		case -750945821: /* GXTEntry: "Perfect Skinned Loon Carcass" */
			return 1328165841;
		case -2135749211: /* GXTEntry: "Poor Skinned Loon Carcass" */
			return -800990234;
		case 2063108046: /* GXTEntry: "Good Skinned Muskrat Carcass" */
			return -1483684624;
		case 1299111759: /* GXTEntry: "Perfect Skinned Muskrat Carcass" */
			return 905262788;
		case 1595322723: /* GXTEntry: "Poor Skinned Muskrat Carcass" */
			return 150247607;
		case 784918835: /* GXTEntry: "Good Skinned Opossum Carcass" */
			return -1233359941;
		case -676310905: /* GXTEntry: "Perfect Skinned Opossum Carcass" */
			return -313281876;
		case -1719545959: /* GXTEntry: "Poor Skinned Opossum Carcass" */
			return -4490683;
		case -2142423934: /* GXTEntry: "Good Plucked Owl Carcass" */
			return 772815941;
		case 747751566: /* GXTEntry: "Perfect Plucked Owl Carcass" */
			return 829687693;
		case -1942682403: /* GXTEntry: "Poor Plucked Owl Carcass" */
			return -989662224;
		case 1018433784: /* GXTEntry: "Good Skinned Panther Carcass" */
			return 2085868277;
		case -796185392: /* GXTEntry: "Perfect Skinned Panther Carcass" */
			return 54441032;
		case -49549406: /* GXTEntry: "Poor Skinned Panther Carcass" */
			return 173369425;
		case 857788498: /* GXTEntry: "Good Plucked Parrot Carcass" */
			return 1040980289;
		case 1223148871: /* GXTEntry: "Perfect Plucked Parrot Carcass" */
			return 914451661;
		case 939407236: /* GXTEntry: "Poor Plucked Parrot Carcass" */
			return -1351971822;
		case 1608778431: /* GXTEntry: "Good Plucked Pelican Carcass" */
			return 1314774140;
		case -2033821082: /* GXTEntry: "Perfect Plucked Pelican Carcass" */
			return -1359600522;
		case -993340234: /* GXTEntry: "Poor Plucked Pelican Carcass" */
			return 766332028;
		case -1861062075: /* GXTEntry: "Good Skinned Pheasant Carcass" */
			return 1221975438;
		case 1645001514: /* GXTEntry: "Perfect Skinned Pheasant Carcass" */
			return -1326003094;
		case 782371031: /* GXTEntry: "Poor Skinned Pheasant Carcass" */
			return 1184491654;
		case 1255529169: /* GXTEntry: "Good Skinned Pig Carcass" */
			return 750218917;
		case 70898308: /* GXTEntry: "Perfect Skinned Pig Carcass" */
			return -1353658464;
		case -1050350982: /* GXTEntry: "Poor Skinned Pig Carcass" */
			return 851638420;
		case 581781784: /* GXTEntry: "Good Skinned Prairie Chicken Carcass" */
			return 722571285;
		case -1363330863: /* GXTEntry: "Perfect Skinned Prairie Chicken Carcass" */
			return 934062207;
		case -1780911288: /* GXTEntry: "Poor Skinned Prairie Chicken Carcass" */
			return -1585718810;
		case 1018306802: /* GXTEntry: "Good Skinned Pronghorn Carcass" */
			return -1082360340;
		case 1615521415: /* GXTEntry: "Perfect Skinned Pronghorn Carcass" */
			return 2061367228;
		case -1499066338: /* GXTEntry: "Poor Skinned Pronghorn Carcass" */
			return -1962565360;
		case 1711081908: /* GXTEntry: "Good Skinned Rabbit Carcass" */
			return 262789343;
		case -164705: /* GXTEntry: "Perfect Skinned Rabbit Carcass" */
			return -633571126;
		case -2044044647: /* GXTEntry: "Poor Skinned Rabbit Carcass" */
			return 786387404;
		case -859583379: /* GXTEntry: "Good Skinned Raccoon Carcass" */
			return -379489403;
		case -759504052: /* GXTEntry: "Perfect Skinned Raccoon Carcass" */
			return -764672668;
		case 700225820: /* GXTEntry: "Poor Skinned Raccoon Carcass" */
			return -282159777;
		case 136458586: /* GXTEntry: "Good Skinned Ram Carcass" */
			return 468012182;
		case 799105420: /* GXTEntry: "Perfect Skinned Ram Carcass" */
			return -617672215;
		case -481655757: /* GXTEntry: "Poor Skinned Ram Carcass" */
			return -562468122;
		case 484160931: /* GXTEntry: "Good Plucked Raven Carcass" */
			return 1913327664;
		case 1010699907: /* GXTEntry: "Perfect Plucked Raven Carcass" */
			return -993590812;
		case 1550264248: /* GXTEntry: "Poor Plucked Raven Carcass" */
			return -2137670338;
		case -371992731: /* GXTEntry: "Good Plucked Red-footed Booby Carcass" */
			return 726300604;
		case 1090294483: /* GXTEntry: "Perfect Plucked Red-footed Booby Carcass" */
			return 415226344;
		case -274175035: /* GXTEntry: "Poor Plucked Red-footed Booby Carcass" */
			return -299634134;
		case -1064414912: /* GXTEntry: "Good Skinned Rooster Carcass" */
			return 1087304069;
		case -2091620305: /* GXTEntry: "Perfect Skinned Rooster Carcass" */
			return -9870681;
		case -468684824: /* GXTEntry: "Poor Skinned Rooster Carcass" */
			return 1792621383;
		case 1668870118: /* GXTEntry: "Good Skinned Roseate Spoonbill Carcass" */
			return -199598455;
		case -534004020: /* GXTEntry: "Perfect Skinned Roseate Spoonbill Carcass" */
			return -1941388598;
		case -2126925270: /* GXTEntry: "Poor Skinned Roseate Spoonbill Carcass" */
			return 157600273;
		case 2008380517: /* GXTEntry: "Good Plucked Seagull Carcass" */
			return 167746130;
		case -510697884: /* GXTEntry: "Perfect Plucked Seagull Carcass" */
			return 2004430445;
		case -955209948: /* GXTEntry: "Poor Plucked Seagull Carcass" */
			return 1574944766;
		case 1459836898: /* GXTEntry: "Good Skinned Sheep Carcass" */
			return 1307900476;
		case 303969766: /* GXTEntry: "Perfect Skinned Sheep Carcass" */
			return 1042168876;
		case -1707588662: /* GXTEntry: "Poor Skinned Sheep Carcass" */
			return 425489026;
		case -1224075784: /* GXTEntry: "Good Skinned Skunk Carcass" */
			return 1517438769;
		case -1806671048: /* GXTEntry: "Perfect Skinned Skunk Carcass" */
			return -875336946;
		case 749765420: /* GXTEntry: "Poor Skinned Skunk Carcass" */
			return -586130620;
		case 462936163: /* GXTEntry: "Good Skinned Black-Tailed Rattlesnake Carcass" */
			return -586318490;
		case -8888941: /* GXTEntry: "Perfect Skinned Black-Tailed Rattlesnake Carcass" */
			return 208002432;
		case 1640227110: /* GXTEntry: "Poor Skinned Black-Tailed Rattlesnake Carcass" */
			return -1210524242;
		case -1241188722: /* GXTEntry: "Good Skinned Red Boa Carcass" */
			return 245773581;
		case -1030962659: /* GXTEntry: "Perfect Skinned Red Boa Carcass" */
			return -2046702261;
		case 112552982: /* GXTEntry: "Poor Skinned Red Boa Carcass" */
			return 44564804;
		case -1599578931: /* GXTEntry: "Good Skinned Copperhead Carcass" */
			return 100739460;
		case 1296331626: /* GXTEntry: "Perfect Skinned Copperhead Carcass" */
			return -2092384992;
		case -1256398198: /* GXTEntry: "Poor Skinned Copperhead Carcass" */
			return 494095577;
		case 1297800973: /* GXTEntry: "Good Skinned Fer-de-lance Carcass" */
			return -384312098;
		case 1772582754: /* GXTEntry: "Perfect Skinned Fer-de-lance Carcass" */
			return 1560218503;
		case -1459876379: /* GXTEntry: "Poor Skinned Fer-de-lance Carcass" */
			return -1430069792;
		case 1127406863: /* GXTEntry: "Good Skinned Snake Carcass" */
			return 1131911627;
		case 1779996957: /* GXTEntry: "Perfect Skinned Snake Carcass" */
			return -64072061;
		case 1885306923: /* GXTEntry: "Poor Skinned Snake Carcass" */
			return -202115307;
		case 1244107697: /* GXTEntry: "Good Skinned Water Snake Carcass" */
			return -1102234278;
		case -1201555940: /* GXTEntry: "Perfect Skinned Water Snake Carcass" */
			return 224070180;
		case -668487833: /* GXTEntry: "Poor Skinned Water Snake Carcass" */
			return 545086564;
		case -1178150148: /* GXTEntry: "Good Skinned Turkey Carcass" */
			return -1483573607;
		case 1171158615: /* GXTEntry: "Perfect Skinned Turkey Carcass" */
			return -1100372216;
		case -2123554124: /* GXTEntry: "Poor Skinned Turkey Carcass" */
			return 622704213;
		case 1806705761: /* GXTEntry: "Good Skinned Snapping Turtle Carcass" */
			return 1251284632;
		case 404581836: /* GXTEntry: "Perfect Skinned Snapping Turtle Carcass" */
			return 1760006100;
		case 987197489: /* GXTEntry: "Poor Skinned Snapping Turtle Carcass" */
			return 1196392781;
		case -1259715647: /* GXTEntry: "Good Plucked Vulture Carcass" */
			return 1740443788;
		case -1716717840: /* GXTEntry: "Perfect Plucked Vulture Carcass" */
			return 2126822237;
		case -196277007: /* GXTEntry: "Poor Plucked Vulture Carcass" */
			return -78084331;
		case -2064457926: /* GXTEntry: "Good Skinned Wolf Carcass" */
			return 327705288;
		case 561267454: /* GXTEntry: "Perfect Skinned Wolf Carcass" */
			return 1627515010;
		case 686253083: /* GXTEntry: "Poor Skinned Wolf Carcass" */
			return -1199577085;
		default:
			break;
	}
	return 0;
}

bool func_175(int iParam0)
{
	return iParam0 != 0;
}

int func_176(int iParam0)
{
	if (func_220(iParam0))
	{
		return 1;
	}
	return func_222(iParam0);
}

int func_177(var uParam0, int iParam1, float fParam2, int iParam3, int iParam4)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	vector3 vVar6;
	vector3 vVar10;
	vector3 vVar14;
	vector3 vVar17;
	vector3 vVar20;
	int iVar23;
	int iVar24;
	int iVar25;
	var uVar26;

	if (!NETWORK::_0x255A5EF65EDA9167(uParam0->f_2))
	{
		return 2;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
	{
		return 2;
	}
	iVar24 = PLAYER::GET_PLAYER_PED(uParam0->f_2);
	if (func_231(uParam0, &uVar1, fParam2))
	{
		return 1;
	}
	vVar17 = { ENTITY::GET_ENTITY_COORDS(iVar24, true, false) };
	vVar20 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false) };
	if (BUILTIN::VDIST(vVar17, vVar20) >= 200f)
	{
		return 2;
	}
	if (!PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(vVar17, vVar20, 1, &vVar2, &(vVar2.f_3), 1, 1077936128, 0) || !PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(vVar17, vVar20, 0, &vVar2, &(vVar2.f_3), 1, 1077936128, 0))
	{
		if (!PATHFIND::GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(vVar17, &vVar2, &(vVar2.f_3), 1, 3f, 0))
		{
			if (!func_232(vVar17, vVar20, &vVar2))
			{
				return 2;
			}
		}
	}
	if (!func_233(uParam0->f_3, &iVar23))
	{
		vVar14 = { vVar20 + ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_3) };
	}
	else
	{
		vVar14 = { vVar20 + ENTITY::GET_ENTITY_FORWARD_VECTOR(iVar23) };
	}
	if (!PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(vVar20, vVar14, 1, &vVar6, &(vVar6.f_3), 1, 1077936128, 0) || !PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(vVar20, vVar14, 0, &vVar6, &(vVar6.f_3), 1, 1077936128, 0))
	{
		if (!PATHFIND::GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(vVar20, &vVar6, &(vVar6.f_3), 1, 3f, 0))
		{
			return 2;
		}
	}
	iVar25 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(vVar6, 0, 1, 3f, 0f);
	if (!PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar25))
	{
		return 2;
	}
	uVar26 = TASK::_0x74F0209674864CBD();
	if (!TASK::_0x1AC5A8AB50CFAA33(uVar26))
	{
	}
	else
	{
		TASK::_0x19BC99C678FBA139(uVar26, 74, 0);
		TASK::_0x19BC99C678FBA139(uVar26, 81, 1);
		TASK::_0x5D9B0BAAF04CF65B(uVar26, 47, 2, 0);
		TASK::_0x5D9B0BAAF04CF65B(uVar26, 50, 2, 0);
		if (!TASK::_0xFE5D28B9B7837CC1(uVar26, vVar6))
		{
			TASK::_0xBEEFBB608D2AA68A(uVar26);
			return 2;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (!PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(vVar14, vVar17, iVar0, &vVar10, &(vVar10.f_3), 1, 1077936128, 0) && iVar0 < 1)
			{
				TASK::_0xBEEFBB608D2AA68A(uVar26);
				return 2;
			}
			else if (!TASK::_0xFE5D28B9B7837CC1(uVar26, vVar10))
			{
				TASK::_0xBEEFBB608D2AA68A(uVar26);
				return 2;
			}
			iVar0++;
		}
		TASK::_0xBEEFBB608D2AA68A(uVar26);
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
	{
		if (TASK::_0x583AE9AF9CEE0958(uParam0->f_3, uParam0->f_21))
		{
			if (BUILTIN::VDIST(uParam0->f_21, vVar2) > 10f)
			{
			}
			else
			{
				return func_234(uParam0, 1092616192 /* Float: 10f */);
			}
		}
		uParam0->f_21 = { vVar2 };
		uParam0->f_24 = vVar2.f_3;
		TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION_2(uParam0->f_3, vVar2, iParam1, 1147928963, 2, iParam4, iParam3);
	}
	return func_234(uParam0, 1092616192 /* Float: 10f */);
}

void func_178(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_1));
	}
}

int func_179(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == 255)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == Global_1275573->f_10)
	{
		return 1;
	}
	iVar0 = iParam0;
	if (!&Global_1275573->f_22[iVar0])
	{
		return 0;
	}
	if (bParam1)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26836), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26834), iVar0))
		{
			return 0;
		}
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26835), iVar0))
		{
			return 1;
		}
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), iVar0))
	{
		return 1;
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26831), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26833), iVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_TEAM(Global_1275573->f_10);
	iVar2 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((iVar1 != -1 && iVar2 != -1) && iVar1 == iVar2)
	{
		return 1;
	}
	else if (_NAMESPACE26::_0x81FB74C83C2ED69F(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_180(int iParam0)
{
	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case -1698498246:
			return -553831738 /* GXTEntry: "Hunting Wagon" */;
		case -1772561076:
			return 1437065740 /* GXTEntry: "Bounty Wagon" */;
		default:
			break;
	}
	return 0;
}

int func_181(int iParam0)
{
	int iVar0;

	if (!func_141(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_235(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

char* func_182(int iParam0)
{
	struct<8> Var0;

	if (iParam0 == -1)
	{
		return "";
	}
	func_236();
	Global_1903929->f_124.f_2 = 1292413058;
	Global_1903929->f_124.f_3 = func_237(iParam0);
	if (!DATAFILE::_DATAFILE_GET_STRING(&Var0, &(Global_1903929->f_124)))
	{
		return "";
	}
	return func_238(Var0);
}

int func_183(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1099294->f_10;
	}
	return ((*Global_1097610)[iParam0 /*51*/])->f_10;
}

int func_184(int iParam0, int iParam1)
{
	if (iParam1 == 11)
	{
		return 119;
	}
	else if (iParam1 == 27)
	{
		return 133;
	}
	else if (iParam1 == 34)
	{
		return 148;
	}
	else if (iParam1 == 28)
	{
		return 149;
	}
	else if (iParam1 == 29)
	{
		return 150;
	}
	if (iParam1 == 33)
	{
		return 20;
	}
	switch (iParam0)
	{
		case 84:
			switch (iParam1)
			{
				case 0:
					return 151;
				case 6:
					return 153;
				case 23:
					return 154;
				case 22:
					return 152;
				case 16:
					return 67;
				default:
					break;
			}
			break;
		case 40:
			switch (iParam1)
			{
				case 12:
					return 5;
				case 30:
					return 10;
				case 25:
					return 122;
				case 26:
					return 123;
				case 3:
					return 6;
				case 8:
					return 8;
				case 10:
					return 9;
				case 9:
					return 13;
				case 2:
					return 14;
				case 1:
					return 15;
				case 7:
					return 19;
				case 18:
					return 12;
				default:
					break;
			}
			break;
		case 104:
			switch (iParam1)
			{
				case 0:
					return 155;
				case 6:
					return 157;
				case 23:
					return 158;
				case 22:
					return 156;
				case 16:
					return 65;
				default:
					break;
			}
			break;
		case 74:
			switch (iParam1)
			{
				case 4:
					return 22;
				case 33:
					return 21;
				case 3:
					return 23;
				case 2:
					return 24;
				case 1:
					return 25;
				case 38:
					return 140;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 0:
					return 160;
				case 6:
					return 162;
				case 23:
					return 163;
				case 22:
					return 161;
				case 16:
					return 64;
				case 38:
					return 141;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 164;
				case 6:
					return 166;
				case 23:
					return 167;
				case 22:
					return 165;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 14:
					return 26;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 12:
					return 42;
				case 8:
					return 43;
				case 30:
					return 54;
				case 25:
					return 124;
				case 10:
					return 44;
				case 26:
					return 125;
				case 0:
					return 45;
				case 4:
					return 46;
				case 33:
					return 20;
				case 3:
					return 48;
				case 6:
					return 49;
				case 9:
					return 50;
				case 2:
					return 51;
				case 1:
					return 52;
				case 7:
					return 53;
				case 15:
					return 63;
				case 18:
					return 60;
				case 36:
					return 61;
				default:
					break;
			}
			break;
		case 111:
			switch (iParam1)
			{
				case 12:
					return 29;
				case 30:
					return 36;
				case 25:
					return 126;
				case 10:
					return 30;
				case 4:
					return 31;
				case 33:
					return 32;
				case 3:
					return 33;
				case 6:
					return 34;
				case 2:
					return 35;
				case 1:
					return 39;
				default:
					break;
			}
			break;
		case 107:
			switch (iParam1)
			{
				case 9:
					return 41;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 15:
					return 3;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 2:
					return 27;
				case 1:
					return 28;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 168;
				case 22:
					return 169;
				case 6:
					return 170;
				case 23:
					return 171;
				case 16:
					return 66;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 25:
					return 127;
				case 30:
					return 75;
				case 10:
					return 68;
				case 3:
					return 69;
				case 17:
					return 70;
				case 9:
					return 71;
				case 2:
					return 74;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 15:
					return 4;
				default:
					break;
			}
			break;
		case 81:
			switch (iParam1)
			{
				case 12:
					return 77;
				case 8:
					return 78;
				case 30:
					return 79;
				case 25:
					return 120;
				case 10:
					return 82;
				case 26:
					return 121;
				case 0:
					return 83;
				case 3:
					return 84;
				case 6:
					return 85;
				case 9:
					return 86;
				case 2:
					return 87;
				case 1:
					return 88;
				case 17:
					return 90;
				case 36:
					return 89;
				case 38:
					return 136;
				default:
					break;
			}
			break;
		case 98:
			switch (iParam1)
			{
				case 26:
					return 128;
				case 4:
					return 93;
				case 33:
					return 92;
				case 2:
					return 98;
				case 1:
					return 97;
				case 9:
					return 96;
				default:
					break;
			}
			break;
		case 83:
			switch (iParam1)
			{
				case 25:
					return 129;
				case 6:
					return 0;
				case 2:
					return 1;
				case 1:
					return 2;
				default:
					break;
			}
			break;
		case 95:
		case 137:
			switch (iParam1)
			{
				case 15:
					return 40;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 2:
					return 101;
				case 1:
					return 100;
				case 3:
					return 99;
				default:
					break;
			}
			break;
		case 121:
			switch (iParam1)
			{
				case 30:
					return 105;
				case 3:
					return 102;
				case 6:
					return 103;
				case 9:
					return 107;
				case 10:
					return 104;
				default:
					break;
			}
			break;
		case 127:
			switch (iParam1)
			{
				case 3:
					return 108;
				case 2:
					return 111;
				case 1:
					return 112;
				case 35:
					return 109;
				default:
					break;
			}
			break;
		case 130:
			switch (iParam1)
			{
				case 4:
					return 116;
				default:
					break;
			}
			break;
		case 123:
			switch (iParam1)
			{
				case 2:
					return 117;
				case 1:
					return 118;
				default:
					break;
			}
			break;
		case 119:
			switch (iParam1)
			{
				case 15:
					return 76;
				default:
					break;
			}
			break;
		case 135:
			switch (iParam1)
			{
				case 4:
					return 130;
				default:
					break;
			}
			break;
		case 96:
			switch (iParam1)
			{
				case 35:
					return 113;
				default:
					break;
			}
			break;
		case 29:
			switch (iParam1)
			{
				case 35:
					return 114;
				default:
					break;
			}
			break;
		case 126:
			switch (iParam1)
			{
				case 38:
					return 135;
				default:
					break;
			}
			break;
		case 133:
			switch (iParam1)
			{
				case 38:
					return 136;
				default:
					break;
			}
			break;
		case 136:
			switch (iParam1)
			{
				case 38:
					return 137;
				default:
					break;
			}
			break;
		case 39:
			switch (iParam1)
			{
				case 38:
					return 138;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 38:
					return 139;
				default:
					break;
			}
			break;
		case 61:
			switch (iParam1)
			{
				case 38:
					return 142;
				default:
					break;
			}
			break;
		case 100:
			switch (iParam1)
			{
				case 38:
					return 143;
				default:
					break;
			}
			break;
		case 34:
			switch (iParam1)
			{
				case 38:
					return 144;
				default:
					break;
			}
			break;
		case 43:
			switch (iParam1)
			{
				case 38:
					return 145;
				default:
					break;
			}
			break;
		case 85:
			switch (iParam1)
			{
				case 38:
					return 146;
				default:
					break;
			}
			break;
	}
	if (iParam1 == 38)
	{
		return 147;
	}
	if (iParam1 == 33)
	{
		return 20;
	}
	if (iParam1 == 37)
	{
		return 134;
	}
	return -1;
}

bool func_185(int iParam0, int iParam1, int iParam2)
{
	return MISC::IS_BIT_SET((*Global_1257158)[iParam0 /*177*/][iParam1], iParam2);
}

int func_186(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;

	iVar0 = func_239(iParam0);
	vVar1 = { (Global_1051388->f_69[iVar0 /*76*/])->f_3 };
	if (iParam0 == 150)
	{
		vVar1 = { func_240(PLAYER::GET_PLAYER_INDEX()) };
	}
	if (func_241(vVar1))
	{
		return 0;
	}
	if (iVar0 == 10)
	{
		fVar4 = 10f;
		fVar5 = func_242(iParam1, vVar1, 0);
		if (fVar5 < fVar4)
		{
			return 1;
		}
	}
	else if (iVar0 == 29)
	{
		fVar6 = 70f;
		fVar7 = func_242(iParam1, vVar1, 0);
		if (fVar7 < fVar6)
		{
			return 1;
		}
	}
	else if (iVar0 == 2)
	{
		if (func_242(iParam1, vVar1, 0) < 75f)
		{
			return 1;
		}
	}
	return 0;
}

struct<7> func_187(int iParam0)
{
	struct<7> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

int func_188(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	int iVar0;
	int iVar22;

	if (CREW::NETWORK_CLAN_SERVICE_IS_VALID() && CREW::NETWORK_CLAN_PLAYER_IS_ACTIVE(&uParam0))
	{
		CREW::NETWORK_CLAN_PLAYER_GET_DESC(&iVar0, 22, &uParam0);
	}
	else
	{
		return 0;
	}
	if (CREW::NETWORK_CLAN_SERVICE_IS_VALID() && CREW::NETWORK_CLAN_PLAYER_IS_ACTIVE(&uParam7))
	{
		CREW::NETWORK_CLAN_PLAYER_GET_DESC(&iVar22, 22, &uParam7);
	}
	else
	{
		return 0;
	}
	if (iVar0 != iVar22)
	{
		return 0;
	}
	return 1;
}

void func_189(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	((*Global_1269869)[iVar0 /*20*/])->f_2 = (((*Global_1269869)[iVar0 /*20*/])->f_2 || iParam0);
}

void func_190(int iParam0)
{
	int iVar0;
	var uVar1;
	struct<7> Var2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0, 0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (!func_126(iParam0, iVar0, &uVar1))
	{
		return;
	}
	Var2.f_5 = 1073741824;
	Var2.f_6 = 1;
	Var2.f_3 = iVar0;
	Var2.f_4 = iParam0;
	AITRANSPORT::TASK_EXIT_TRANSPORT(&Var2);
}

bool func_191(int iParam0)
{
	return func_168(iParam0, 2);
}

int func_192(int iParam0)
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
			return 1;
		default:
			break;
	}
	return 0;
}

int func_193(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1070356->f_634.f_601;
		case 3:
			return Global_1070356->f_634.f_2103;
		case 4:
			return Global_1070356->f_634.f_12605;
		case 5:
			return Global_1070356->f_634.f_12907;
		case 6:
			return Global_1070356->f_634.f_15909;
		case 7:
			return Global_1070356->f_634.f_15980;
		case 8:
			return Global_1070356->f_634.f_17182;
		default:
			break;
	}
	return -1;
}

struct<2> func_194(int iParam0)
{
	return *(Global_1900718->f_1[iParam0 /*2*/]);
}

int func_195(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 6:
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if ((Global_1185132->f_66[iVar0 /*20*/])->f_2 && (Global_1185132->f_66[iVar0 /*20*/])->f_1 == 2)
				{
					return 1;
				}
				iVar0++;
			}
			break;
		case 2:
		case 3:
		case 4:
		case 7:
			if (Global_1572887->f_6)
			{
				if (func_243(Global_1102099->f_935.f_27))
				{
					if (!Global_1102099->f_935.f_18)
					{
						return 0;
					}
				}
				if (!func_244())
				{
					return 1;
				}
			}
			else if (Global_1048579 && !Global_1572887->f_9)
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(&(Global_1275573->f_154[&Global_1275573])))
				{
					return 1;
				}
				if (func_92(&(Global_1099294->f_4), 1, 5))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_196(int iParam0, int iParam1)
{
	if (!func_141(iParam0, 0))
	{
		return false;
	}
	if (func_197(iParam0))
	{
		return func_245(func_198(iParam0, 0), iParam1, 0);
	}
	return ITEMDATABASE::_0xDEE7B3C76ED664BE(iParam0, iParam1) > 0;
}

int func_197(int iParam0)
{
	if (func_246(iParam0, 75135761))
	{
		return 1;
	}
	return 0;
}

int func_198(int iParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_141(iParam0, 0))
	{
		return func_248(func_247(iParam0), bParam1);
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0) || Var0.f_5 == 0)
	{
		return 0;
	}
	if (bParam1 && NETWORK::_0xFBE782B3165AC8EC(Var0.f_5))
	{
		return 0;
	}
	return Var0.f_5;
}

int func_199(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_249(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if ((&Var0[iVar32 /*2*/] == 2084597891 || &Var0[iVar32 /*2*/] == 773203532) || &Var0[iVar32 /*2*/] == -1295114026)
		{
			return (Var0[iVar32 /*2*/])->f_1;
		}
		else if (&Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam2)
	{
	}
	return 0;
}

int func_200()
{
	return Global_1572887->f_13;
}

bool func_201(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iParam0, 0);
}

int func_202()
{
	if (func_200() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

void func_203(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<2> Var7;
	struct<2> Var19;
	float fVar21[15];

	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_GET_ITEM_PRICE_MODIFIERS(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = &Var7.f_1[iVar1];
		iVar4 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIED_PRICES(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != iParam1)
			{
			}
			else
			{
				iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIERS(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_MODIFIER(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if (uParam2[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (&fVar21[iVar0] != 1f)
		{
			((*uParam2)[iVar0 /*2*/])->f_1 = (BUILTIN::ROUND((IntToFloat((10000 * ((*uParam2)[iVar0 /*2*/])->f_1)) * (&fVar21[iVar0] / 1f))) / 10000);
		}
		iVar0++;
	}
}

int func_204(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_141(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_144(iParam0);
	if (iVar0 == joaat("weapon") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(iParam0);
	}
	else if (iVar0 == joaat("ammo") && WEAPON::_0x1F7977C9101F807F(iParam0))
	{
		return iParam0;
	}
	if (func_246(iParam0, 1399091007))
	{
		func_250(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_205(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_251(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_253(&Var0, func_252(0));
	}
	if (!func_254(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_223(iVar14);
	return uVar15;
}

int func_206(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

int func_207(bool bParam0)
{
	if (func_200() == -1)
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

struct<4> func_208(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_210(iParam0, bParam1, 0) };
	return func_211(iParam0, Var0, Var0.f_4, bParam1);
}

int func_209(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	struct<6> Var1[5];
	int iVar32;
	int iVar33;
	int iVar34;
	struct<16> Var35;
	struct<16> Var51;

	if (func_255(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_206(iParam0, joaat("default"));
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_148(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_256(&Var1, &iVar32, iParam0, iVar0, iParam1, 1) || iVar32 < 1)
		{
			return 0;
		}
		iVar34 = -1;
		Var35.f_9 = 1;
		Var35.f_11 = -1591664384;
		iVar33 = 0;
		while (iVar33 < iVar32)
		{
			Var35 = { func_257(iParam0, Var1[iVar33 /*6*/]) };
			Var35.f_12 = iParam2;
			iVar34 = func_151(joaat("use"), &Var35, 1);
			if (iVar34 == -1)
			{
				return 0;
			}
			iVar33++;
		}
		if (iVar34 != -1)
		{
			Var51.f_7 = -142743235;
			Var51 = iParam3;
			Var51.f_7 = iParam2;
			func_152(iVar34, Var51);
			return 1;
		}
		return 0;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_207(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

struct<5> func_210(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_258(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_144(iParam0);
	switch (iVar5)
	{
		case joaat("clothing"):
			Var0 = { func_211(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			break;
		case joaat("weapon"):
			Var0 = { func_252(bParam1) };
			if (iParam2 && func_259(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_260(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_260(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_261(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_262(bParam1) };
			switch (func_263(iParam0))
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
			if (func_264(iParam0, -1823706425))
			{
				Var0 = { func_211(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_264(iParam0, -1483207246))
			{
				Var0 = { func_211(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1911121386))
			{
				Var0 = { func_211(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_264(iParam0, -1653629781))
			{
				Var0 = { func_211(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1384535894);
			}
			break;
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
				Var28.f_9 = -1591664384;
				if (!func_265(Var0, &Var28, bParam1, 0, -1))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var28.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -718417579))
			{
				Var0.f_4 = -718417579;
			}
			else if (func_264(iParam0, -1653629781))
			{
				Var0 = { func_211(1384535894, Var0, 1784584921, bParam1) };
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

struct<4> func_211(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_141(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_207(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_212(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;
	struct<13> Var15;
	struct<16> Var31;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_255(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_265(*uParam1, &Var0, bParam6, 0, -1))
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
	if (!func_148(bParam6))
	{
		iVar14 = -1;
		if (func_200() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_151(joaat("use"), &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31 = iParam5;
				Var31.f_7 = iParam4;
				func_152(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_207(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_213(int iParam0, var uParam1)
{
	var uVar0;

	uVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, uParam1);
	if (iParam0 == joaat("use"))
	{
		if (func_124(uVar0, 2048))
		{
			return 0;
		}
	}
	else if (func_124(uVar0, 8))
	{
		return 0;
	}
	else if (func_124(uVar0, 16))
	{
		return 0;
	}
	else if (func_124(uVar0, 65536))
	{
		return 0;
	}
	return 1;
}

int func_214(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_266(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_266(iParam1, 2, 0, 0);
	return -1;
}

int func_215(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_266(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

bool func_216(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _NAMESPACE71::_0x59FA676177DBE4C9(iParam0) == 4;
}

void func_217(bool bParam0)
{
	int iVar0;

	if (!NETWORK::_0x255A5EF65EDA9167(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (!bParam0)
	{
		((*Global_1269869)[iVar0 /*20*/])->f_8 = 0;
	}
	else
	{
		((*Global_1269869)[iVar0 /*20*/])->f_9 = 0;
	}
}

int func_218(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_207(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_219(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_220(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_267(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 51)
	{
		iVar1 = func_268(iVar0, 1);
		iVar2 = iVar1;
		if (iParam0 == iVar2)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_221(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = PLAYER::PLAYER_ID();
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return 0;
	}
	iVar1 = iVar0;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return 0;
	}
	if (func_225(iVar1, bParam1) >= func_224(bParam1))
	{
		return 0;
	}
	iVar2 = iParam0;
	iVar3 = (iVar2 + func_225(iVar1, bParam1));
	if (iVar3 > func_224(bParam1))
	{
		iVar2 = (func_224(bParam1) - func_225(iVar1, bParam1));
	}
	if (iVar2 < 1)
	{
		return 0;
	}
	if (!bParam1)
	{
		((*Global_1269869)[iVar1 /*20*/])->f_8 = (((*Global_1269869)[iVar1 /*20*/])->f_8 + iVar2);
	}
	else
	{
		((*Global_1269869)[iVar1 /*20*/])->f_9 = (((*Global_1269869)[iVar1 /*20*/])->f_9 + iVar2);
	}
	return 1;
}

int func_222(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_269(iParam0, &iVar1))
	{
		iParam0 = iVar1;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_SATCHEL_DATA(iParam0, &iVar0))
	{
		return -1;
	}
	switch (iVar0)
	{
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 4;
		case 4:
			return 8;
		default:
			break;
	}
	return -1;
}

int func_223(int iParam0)
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

int func_224(bool bParam0)
{
	return func_270(bParam0, Global_1901929->f_638.f_30, Global_1901929->f_638.f_29);
}

int func_225(int iParam0, bool bParam1)
{
	return func_270(bParam1, ((*Global_1269869)[iParam0 /*20*/])->f_9, ((*Global_1269869)[iParam0 /*20*/])->f_8);
}

float func_226(bool bParam0, float fParam1)
{
	float fVar0;

	fParam1 = func_271(fParam1, 0f, 1f);
	fVar0 = ((1f / BUILTIN::TO_FLOAT(Global_1901929->f_638.f_28)) * func_272(bParam0, fParam1, (1f - fParam1)));
	if (bParam0)
	{
		return ((BUILTIN::TO_FLOAT(Global_1901929->f_638.f_28) / BUILTIN::TO_FLOAT(Global_1901929->f_638.f_29)) * fVar0);
	}
	return fVar0;
}

void func_227(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		if (((*Global_1949759)[iParam0 /*23*/])->f_5 == 5 && !func_168(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949759)[iParam0 /*23*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949759)[iParam0 /*23*/])->f_3, iParam1);
		}
	}
}

void func_228(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1949759)[iParam0 /*23*/])->f_3, iParam1);
	}
}

void func_229(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949759)[iParam0 /*23*/])->f_1 = (((*Global_1949759)[iParam0 /*23*/])->f_1 || iParam1);
}

int func_230(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	iVar1 = PED::_GET_PED_CARCASS_QUALITY(iVar0);
	iVar2 = func_273(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	iVar3 = iVar1;
	iVar4 = iVar2;
	if (iVar4 < iVar3)
	{
		iVar1 = iVar4;
	}
	if (!PED::_0x9E7738B291706746(&iVar5, iVar0, iVar1))
	{
		return 0;
	}
	if (iVar5 != 0)
	{
		if (PED::_0xFB4891BD7578CDC1(iVar0, 43391475) || ENTITY::_0x8DE41E9902E85756(iVar0))
		{
			iVar6 = func_274(iVar5);
			if (iVar6 != 0)
			{
				return iVar6;
			}
		}
		return iVar5;
	}
	switch (iVar1)
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

int func_231(var uParam0, var uParam1, float fParam2)
{
	int iVar0;

	*uParam1 = 0;
	if (!NETWORK::_0x255A5EF65EDA9167(uParam0->f_2) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(uParam0->f_2))
	{
		return 1;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(uParam0->f_2);
	if (PED::IS_PED_ON_VEHICLE(iVar0, false))
	{
		if (PED::GET_VEHICLE_PED_IS_IN(iVar0, true) == uParam0->f_3)
		{
			*uParam1 = 1;
			return 1;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 1;
	}
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false)) < fParam2)
	{
		return 1;
	}
	return 0;
}

int func_232(vector3 vParam0, vector3 vParam3, var uParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	var uVar7;
	var uVar8;

	if (func_241(vParam0))
	{
		return 0;
	}
	if (PATHFIND::GET_CLOSEST_ROAD(vParam0, 2f, 1, &vVar0, &vVar3, &uVar6, &uVar7, &uVar8, true))
	{
		*uParam6 = { Vector(0.5f, 0.5f, 0.5f) * vVar0 + vVar3 };
		if (BUILTIN::VDIST(vParam3, vVar0) < BUILTIN::VDIST(vParam3, vVar3))
		{
			uParam6->f_3 = func_275(vVar3, vVar0, 1);
		}
		else
		{
			uParam6->f_3 = func_275(vVar0, vVar3, 1);
		}
		return 1;
	}
	return 0;
}

int func_233(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		iVar1 = iVar0;
		iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iParam0, iVar1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
		}
		else if (ENTITY::IS_ENTITY_DEAD(iVar2))
		{
		}
		else
		{
			*iParam1 = iVar2;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_234(var uParam0, float fParam1)
{
	if (ENTITY::GET_ENTITY_SPEED(uParam0->f_3) == 0f)
	{
		if (!func_4(&(uParam0->f_18)))
		{
			func_40(&(uParam0->f_18));
		}
		else if (func_276(&(uParam0->f_18), fParam1))
		{
			return 2;
		}
	}
	else if (func_4(&(uParam0->f_18)))
	{
		func_5(&(uParam0->f_18));
	}
	return 0;
}

int func_235(int iParam0)
{
	switch (iParam0)
	{
		case -59585102: /* GXTEntry: "Tonics Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_REMEDIES_MP");
		case 1018123892: /* GXTEntry: "Ingredients Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_INGREDIENTS_MP");
		case 982182330: /* GXTEntry: "Materials Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_MATERIALS_MP");
		case -1406390556: /* GXTEntry: "Valuables Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_VALUABLES_MP");
		case -1455768246: /* GXTEntry: "Kit Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_KIT_MP");
		case -921879912: /* GXTEntry: "Provisions Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_PROVISIONS_MP");
	}
	return 0;
}

void func_236()
{
	Global_1903929->f_124 = (Global_1070356->f_26934[48 /*4*/])->f_3;
	Global_1903929->f_124.f_1 = 0;
	Global_1903929->f_124.f_2 = 0;
	Global_1903929->f_124.f_3 = 0;
	Global_1903929->f_124.f_4 = 0;
}

int func_237(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1844561321;
		case 0:
			return 1653124001;
		case 1:
			return -430733995;
		case 2:
			return 1501387297;
		case 3:
			return -1143491563;
		case 4:
			return -1460176899;
		case 5:
			return 1003181529;
		default:
			break;
	}
	return 0;
}

var func_238(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_239(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 176))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 133:
			return 27;
		case 149:
			return 28;
		case 150:
			return 29;
		case 26:
			return 14;
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
			return 38;
		case 134:
			return 37;
		case 3:
		case 4:
		case 40:
		case 63:
		case 76:
			return 15;
		case 64:
		case 65:
		case 66:
		case 67:
			return 16;
		case 120:
		case 122:
		case 124:
		case 126:
		case 127:
		case 129:
			return 25;
		case 45:
		case 83:
		case 151:
		case 155:
		case 160:
		case 164:
		case 168:
			return 0;
		case 6:
		case 23:
		case 33:
		case 48:
		case 69:
		case 84:
		case 99:
		case 102:
		case 108:
		case 152:
		case 156:
		case 161:
		case 165:
		case 169:
			return 3;
		case 0:
		case 7:
		case 34:
		case 49:
		case 85:
		case 103:
		case 153:
		case 157:
		case 162:
		case 166:
		case 170:
			return 6;
		case 19:
		case 53:
			return 7;
		case 22:
		case 31:
		case 46:
		case 93:
		case 116:
		case 130:
			return 4;
		case 20:
			return 33;
		case 21:
		case 32:
		case 47:
		case 92:
		case 115:
		case 131:
			return 33;
		case 9:
		case 30:
		case 44:
		case 68:
		case 82:
		case 104:
			return 10;
		case 1:
		case 14:
		case 24:
		case 27:
		case 35:
		case 51:
		case 74:
		case 87:
		case 98:
		case 101:
		case 111:
		case 117:
			return 2;
		case 2:
		case 15:
		case 25:
		case 28:
		case 39:
		case 52:
		case 88:
		case 97:
		case 100:
		case 112:
		case 118:
			return 1;
		case 8:
		case 43:
		case 78:
			return 8;
		case 13:
		case 41:
		case 50:
		case 71:
		case 86:
		case 96:
		case 107:
			return 9;
		case 121:
		case 123:
		case 125:
		case 128:
			return 26;
		case 159:
			return 5;
		case 5:
		case 29:
		case 42:
		case 77:
			return 12;
		case 10:
		case 36:
		case 54:
		case 56:
		case 75:
		case 79:
		case 81:
		case 91:
		case 94:
		case 105:
		case 110:
			return 30;
		case 11:
		case 37:
		case 55:
		case 57:
		case 80:
		case 95:
		case 106:
			return 31;
		case 16:
		case 17:
		case 18:
		case 38:
		case 58:
		case 59:
		case 72:
		case 73:
		case 132:
			return 32;
		case 70:
		case 90:
			return 17;
		case 119:
			return 11;
		case 172:
			return 19;
		case 173:
			return 20;
		case 174:
			return 21;
		case 12:
		case 60:
			return 18;
		case 148:
			return 34;
		case 154:
		case 158:
		case 163:
		case 167:
		case 171:
			return 23;
		case 175:
			return 20;
		case 109:
		case 113:
		case 114:
			return 35;
		case 61:
		case 62:
		case 89:
			return 36;
		default:
			break;
	}
	return -1;
}

Vector3 func_240(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

int func_241(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

float func_242(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_243(int iParam0)
{
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 3)
	{
		return 1;
	}
	return 0;
}

int func_244()
{
	if (Global_1572887->f_106.f_75 >= 9 && Global_1572887->f_106.f_75 <= 13)
	{
		return 1;
	}
	return 0;
}

int func_245(int iParam0, int iParam1, bool bParam2)
{
	if (!func_277(iParam0))
	{
		return 0;
	}
	if (ITEMDATABASE::_0xF540239F9937033B(iParam0, iParam1) == 0)
	{
		return 0;
	}
	if (bParam2)
	{
		return !func_278(iParam0, iParam1);
	}
	return 1;
}

int func_246(int iParam0, int iParam1)
{
	if (!func_141(iParam0, 0))
	{
		return func_279(func_247(iParam0), iParam1);
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

int func_247(int iParam0)
{
	return iParam0;
}

int func_248(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_280(iParam0, 2))
	{
		return 0;
	}
	iVar0 = 0;
	if ((iVar0 != 0 && bParam1) && NETWORK::_0xFBE782B3165AC8EC(iVar0))
	{
		return 0;
	}
	return iVar0;
}

int func_249(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return 0;
	}
	if (!func_277(iParam0))
	{
		return 0;
	}
	*iParam3 = ITEMDATABASE::_0xF540239F9937033B(iParam0, iParam1);
	if (*iParam3 == 0)
	{
		if (!bParam4)
		{
		}
		return 0;
	}
	if (!bParam4)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!ITEMDATABASE::_0xF27F01BBF5ACD3F3(iParam0, iParam1, iVar0, (*uParam2)[iVar0 /*2*/]))
		{
			Jump @112; //curOff = 100
		}
		else if (!bParam4)
		{
		}
		iVar0++;
	}
	if (bParam5)
	{
		func_281(iParam0, iParam1, uParam2, *iParam3);
	}
	return 1;
}

void func_250(int iParam0, var uParam1, var uParam2)
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

struct<14> func_251(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

struct<4> func_252(bool bParam0)
{
	int iVar0;

	iVar0 = func_207(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_4)))
		{
			Global_1272170->f_4 = { func_211(923904168, func_258(bParam0), -740156546, bParam0) };
		}
		return Global_1272170->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_16)))
		{
			Global_1272170->f_16 = { func_211(923904168, func_258(bParam0), -740156546, 0) };
		}
		return Global_1272170->f_16;
	}
	return func_211(923904168, func_258(bParam0), -740156546, 0);
}

void func_253(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_254(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_207(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_255(int iParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_256(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	var uVar0;

	*iParam1 = 0;
	if (iParam4 < 1)
	{
		return 0;
	}
	if (iParam3 == 0)
	{
		iParam3 = func_206(iParam2, joaat("default"));
		if (iParam3 == 0)
		{
			return 0;
		}
	}
	uVar0 = 5;
	if (!NETSHOPPING::_0xD1555FBC96C88444(iParam2, iParam3, iParam4, &uVar0, 5))
	{
		return 0;
	}
	if (!func_282(uParam0, iParam1, &uVar0, iParam4, bParam5))
	{
		return 0;
	}
	return 1;
}

struct<16> func_257(int iParam0, var uParam1)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_211(iParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = iParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

struct<4> func_258(bool bParam0)
{
	int iVar0;

	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_207(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1272170))
			{
				*Global_1272170 = { func_211(joaat("character"), func_283(), -1591664384, bParam0) };
			}
			return *Global_1272170;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_12)))
			{
				Global_1272170->f_12 = { func_211(joaat("character"), func_283(), -1591664384, 0) };
			}
			return Global_1272170->f_12;
		}
	}
	return func_211(joaat("character"), func_283(), -1591664384, bParam0);
}

int func_259(int iParam0, bool bParam1)
{
	if (func_263(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_284();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_260(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_285(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

int func_261(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_286(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_262(bool bParam0)
{
	int iVar0;

	iVar0 = func_207(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_8)))
		{
			Global_1272170->f_8 = { func_211(271701509, func_258(bParam0), 12999093, 0) };
		}
		return Global_1272170->f_8;
	}
	return func_211(271701509, func_258(bParam0), 12999093, 0);
}

int func_263(int iParam0)
{
	struct<2> Var0;

	if (!func_141(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_264(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_263(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (func_287(iParam0, iParam1, iVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

bool func_265(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_288(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

void func_266(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1272170->f_20)
	{
		if (&Global_1272170->f_20.f_1[iVar0 /*20*/] == iParam0)
		{
			if ((Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1 == iParam1)
			{
			}
			else
			{
				(Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1 = iParam1;
			}
			if (iParam2 != 0 && iParam3 != 0)
			{
				(Global_1272170->f_20.f_1[iVar0 /*20*/])->f_2 = iParam2;
				(Global_1272170->f_20.f_1[iVar0 /*20*/])->f_3 = iParam3;
			}
			return;
		}
		iVar0++;
	}
	func_289(iParam0, iParam1, iParam2, iParam3);
}

int func_267(int iParam0)
{
	if (!func_141(iParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0x4AEF1FB5B9011D75(iParam0);
}

int func_268(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -802026654 /* GXTEntry: "Good Alligator Skin" */;
		case 1:
			return 1806153689 /* GXTEntry: "Poor Alligator Skin" */;
		case 2:
			return -1625078531 /* GXTEntry: "Perfect Alligator Skin" */;
		case 3:
			return -2059726619 /* GXTEntry: "Good Beaver Pelt" */;
		case 4:
			return -1569450319 /* GXTEntry: "Poor Beaver Pelt" */;
		case 5:
			return 854596618 /* GXTEntry: "Perfect Beaver Pelt" */;
		case 6:
			return 2116849039;
		case 7:
			return 1248540072 /* GXTEntry: "Poor Boar Pelt" */;
		case 8:
			return -1858513856 /* GXTEntry: "Perfect Boar Pelt" */;
		case 9:
			return -868657362 /* GXTEntry: "Good Buck Pelt" */;
		case 10:
			return 1603936352 /* GXTEntry: "Poor Buck Pelt" */;
		case 11:
			return -702790226 /* GXTEntry: "Perfect Buck Pelt" */;
		case 12:
			return 459744337 /* GXTEntry: "Good Cougar Pelt" */;
		case 13:
			return 1914602340 /* GXTEntry: "Poor Cougar Pelt" */;
		case 14:
			return -1791452194 /* GXTEntry: "Perfect Cougar Pelt" */;
		case 15:
			return 1150939141 /* GXTEntry: "Good Coyote Pelt" */;
		case 16:
			return -1558096473 /* GXTEntry: "Poor Coyote Pelt" */;
		case 17:
			return -794277189 /* GXTEntry: "Perfect Coyote Pelt" */;
		case 18:
			return -1827027577 /* GXTEntry: "Good Deer Pelt" */;
		case 19:
			return -662178186 /* GXTEntry: "Poor Deer Pelt" */;
		case 20:
			return -1035515486 /* GXTEntry: "Perfect Deer Pelt" */;
		case 21:
			return 238733925 /* GXTEntry: "Good Fox Pelt" */;
		case 22:
			return 1647012424 /* GXTEntry: "Poor Fox Pelt" */;
		case 23:
			return 500722008 /* GXTEntry: "Perfect Fox Pelt" */;
		case 24:
			return 1710714415 /* GXTEntry: "Good Goat Hide" */;
		case 25:
			return 699990316 /* GXTEntry: "Poor Goat Hide" */;
		case 26:
			return -1648383828 /* GXTEntry: "Perfect Goat Hide" */;
		case 27:
			return -1379330323 /* GXTEntry: "Good Collared Peccary Pig Pelt" */;
		case 28:
			return -99092070 /* GXTEntry: "Poor Collared Peccary Pig Pelt" */;
		case 29:
			return 1963510418 /* GXTEntry: "Perfect Collared Peccary Pig Pelt" */;
		case 30:
			return 2047376405 /* GXTEntry: "White Cougar Pelt" */;
		case 31:
			return -395646254 /* GXTEntry: "Good Panther Pelt" */;
		case 32:
			return 1584468323 /* GXTEntry: "Poor Panther Pelt" */;
		case 33:
			return 1969175294 /* GXTEntry: "Perfect Panther Pelt" */;
		case 34:
			return 657906142 /* GXTEntry: "Legendary Panther Pelt" */;
		case 35:
			return -57190831 /* GXTEntry: "Good Pig Hide" */;
		case 36:
			return -308965548 /* GXTEntry: "Poor Pig Hide" */;
		case 37:
			return -1102272634 /* GXTEntry: "Perfect Pig Hide" */;
		case 38:
			return 554578289 /* GXTEntry: "Good Pronghorn Hide" */;
		case 39:
			return -983605026 /* GXTEntry: "Poor Pronghorn Hide" */;
		case 40:
			return -1544126829 /* GXTEntry: "Perfect Pronghorn Hide" */;
		case 41:
			return -476045512 /* GXTEntry: "Good Ram Hide" */;
		case 42:
			return 1796037447 /* GXTEntry: "Poor Ram Hide" */;
		case 43:
			return 1795984405 /* GXTEntry: "Perfect Ram Hide" */;
		case 44:
			return -1317365569 /* GXTEntry: "Good Sheep Hide" */;
		case 45:
			return 1729948479 /* GXTEntry: "Poor Sheep Hide" */;
		case 46:
			return 1466150167 /* GXTEntry: "Perfect Sheep Hide" */;
		case 47:
			return 1145777975 /* GXTEntry: "Good Wolf Pelt" */;
		case 48:
			return 85441452 /* GXTEntry: "Poor Wolf Pelt" */;
		case 49:
			return 653400939 /* GXTEntry: "Perfect Wolf Pelt" */;
		case 50:
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

bool func_269(int iParam0, int iParam1)
{
	*iParam1 = func_290(iParam0);
	return *iParam1 != 0;
}

var func_270(bool bParam0, var uParam1, var uParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return uParam2;
}

float func_271(float fParam0, float fParam1, float fParam2)
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

float func_272(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_273(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 2;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return iVar0;
	}
	iVar1 = PED::_0x7BCC6087D130312A(iParam0);
	switch (iVar1)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case -1:
		case 2:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

int func_274(int iParam0)
{
	switch (iParam0)
	{
		case 915880986: /* GXTEntry: "Good Alligator Carcass" */
			return 1908704263 /* GXTEntry: "Good Skinned Alligator Carcass" */;
		case -1424697962: /* GXTEntry: "Perfect Alligator Carcass" */
			return -2112217546 /* GXTEntry: "Perfect Skinned Alligator Carcass" */;
		case -1643384846: /* GXTEntry: "Poor Alligator Carcass" */
			return -1745255175 /* GXTEntry: "Poor Skinned Alligator Carcass" */;
		case -847420802: /* GXTEntry: "Good Armadillo Carcass" */
			return -237368063 /* GXTEntry: "Good Skinned Armadillo Carcass" */;
		case -662726703: /* GXTEntry: "Perfect Armadillo Carcass" */
			return 1598967299 /* GXTEntry: "Perfect Skinned Armadillo Carcass" */;
		case 1760886130: /* GXTEntry: "Poor Armadillo Carcass" */
			return -1809464109 /* GXTEntry: "Poor Skinned Armadillo Carcass" */;
		case -1243653490: /* GXTEntry: "Good Badger Carcass" */
			return -165201917 /* GXTEntry: "Good Skinned Badger Carcass" */;
		case 1988467099: /* GXTEntry: "Perfect Badger Carcass" */
			return 815147738 /* GXTEntry: "Perfect Skinned Badger Carcass" */;
		case -674590015: /* GXTEntry: "Poor Badger Carcass" */
			return 1287583539 /* GXTEntry: "Poor Skinned Badger Carcass" */;
		case -1480423460: /* GXTEntry: "Good Beaver Carcass" */
			return -2126985311 /* GXTEntry: "Good Skinned Beaver Carcass" */;
		case 924882045: /* GXTEntry: "Perfect Beaver Carcass" */
			return -1268352491 /* GXTEntry: "Perfect Skinned Beaver Carcass" */;
		case 1415608202: /* GXTEntry: "Poor Beaver Carcass" */
			return -1940225526 /* GXTEntry: "Poor Skinned Beaver Carcass" */;
		case -593311590: /* GXTEntry: "Good Bighorn Sheep Carcass" */
			return -212307068 /* GXTEntry: "Good Skinned Bighorn Sheep Carcass" */;
		case 765085831: /* GXTEntry: "Perfect Bighorn Sheep Carcass" */
			return 355421032 /* GXTEntry: "Perfect Skinned Bighorn Sheep Carcass" */;
		case 2094730711: /* GXTEntry: "Poor Bighorn Sheep Carcass" */
			return 1657729714 /* GXTEntry: "Poor Skinned Bighorn Sheep Carcass" */;
		case -1310590179: /* GXTEntry: "Good Buck Carcass" */
			return 1350692346 /* GXTEntry: "Good Skinned Buck Carcass" */;
		case 992366796: /* GXTEntry: "Perfect Buck Carcass" */
			return -257850294 /* GXTEntry: "Perfect Skinned Buck Carcass" */;
		case -244657613: /* GXTEntry: "Poor Buck Carcass" */
			return -918541014 /* GXTEntry: "Poor Skinned Buck Carcass" */;
		case -2026210939: /* GXTEntry: "Good California Condor Carcass" */
			return -947573795 /* GXTEntry: "Good Plucked California Condor Carcass" */;
		case -1252472243: /* GXTEntry: "Perfect California Condor Carcass" */
			return -2068302756 /* GXTEntry: "Perfect Plucked California Condor Carcass" */;
		case -980016656: /* GXTEntry: "Poor California Condor Carcass" */
			return 1650829985 /* GXTEntry: "Poor Plucked California Condor Carcass" */;
		case -758005668: /* GXTEntry: "Good Chicken Carcass" */
			return -1808044035 /* GXTEntry: "Good Skinned Chicken Carcass" */;
		case -2139551030: /* GXTEntry: "Perfect Chicken Carcass" */
			return -1952647655 /* GXTEntry: "Perfect Skinned Chicken Carcass" */;
		case 1607144310: /* GXTEntry: "Poor Chicken Carcass" */
			return 1293221440 /* GXTEntry: "Poor Skinned Chicken Carcass" */;
		case 80093385: /* GXTEntry: "Good Cormorant Carcass" */
			return -642946194 /* GXTEntry: "Good Plucked Cormorant Carcass" */;
		case -867655342: /* GXTEntry: "Perfect Cormorant Carcass" */
			return 819214075 /* GXTEntry: "Perfect Plucked Cormorant Carcass" */;
		case 991092621: /* GXTEntry: "Poor Cormorant Carcass" */
			return -858652427 /* GXTEntry: "Poor Plucked Cormorant Carcass" */;
		case 871746664: /* GXTEntry: "Good Cougar Carcass" */
			return 395625948 /* GXTEntry: "Good Skinned Cougar Carcass" */;
		case 1626949878: /* GXTEntry: "Perfect Cougar Carcass" */
			return -2063800922 /* GXTEntry: "Perfect Skinned Cougar Carcass" */;
		case -1722483116: /* GXTEntry: "Poor Cougar Carcass" */
			return -2117103642 /* GXTEntry: "Poor Skinned Cougar Carcass" */;
		case -1739474417: /* GXTEntry: "Good Coyote Carcass" */
			return -1583694057 /* GXTEntry: "Good Skinned Coyote Carcass" */;
		case -161524199: /* GXTEntry: "Perfect Coyote Carcass" */
			return -1550918713 /* GXTEntry: "Perfect Skinned Coyote Carcass" */;
		case 156979555: /* GXTEntry: "Poor Coyote Carcass" */
			return 836539658 /* GXTEntry: "Poor Skinned Coyote Carcass" */;
		case 322141256: /* GXTEntry: "Good Crane Carcass" */
			return 773062352 /* GXTEntry: "Good Plucked Crane Carcass" */;
		case 1310120320: /* GXTEntry: "Perfect Crane Carcass" */
			return 1306100270 /* GXTEntry: "Perfect Plucked Crane Carcass" */;
		case -1228376431: /* GXTEntry: "Poor Crane Carcass" */
			return -1063194668 /* GXTEntry: "Poor Plucked Crane Carcass" */;
		case 472142656: /* GXTEntry: "Good Deer Carcass" */
			return 337839068 /* GXTEntry: "Good Skinned Deer Carcass" */;
		case -1837840093: /* GXTEntry: "Perfect Deer Carcass" */
			return -1426520714 /* GXTEntry: "Perfect Skinned Deer Carcass" */;
		case 58634176: /* GXTEntry: "Poor Deer Carcass" */
			return -1456429189 /* GXTEntry: "Poor Skinned Deer Carcass" */;
		case 1023080408: /* GXTEntry: "Good Duck Carcass" */
			return -2032809253 /* GXTEntry: "Good Skinned Duck Carcass" */;
		case 1001171791: /* GXTEntry: "Perfect Duck Carcass" */
			return 781728005 /* GXTEntry: "Perfect Skinned Duck Carcass" */;
		case 1210345318: /* GXTEntry: "Poor Duck Carcass" */
			return 1202409779 /* GXTEntry: "Poor Skinned Duck Carcass" */;
		case 399553313: /* GXTEntry: "Good Eagle Carcass" */
			return 1520877300 /* GXTEntry: "Good Plucked Eagle Carcass" */;
		case -1422869557: /* GXTEntry: "Perfect Eagle Carcass" */
			return -1736624361 /* GXTEntry: "Perfect Plucked Eagle Carcass" */;
		case -1378812236: /* GXTEntry: "Poor Eagle Carcass" */
			return 719465997 /* GXTEntry: "Poor Plucked Eagle Carcass" */;
		case 1011003885: /* GXTEntry: "Good Egret Carcass" */
			return -361486526 /* GXTEntry: "Good Skinned Egret Carcass" */;
		case 651035143: /* GXTEntry: "Perfect Egret Carcass" */
			return -765274711 /* GXTEntry: "Perfect Skinned Egret Carcass" */;
		case 2013022756: /* GXTEntry: "Poor Egret Carcass" */
			return -887205673 /* GXTEntry: "Poor Skinned Egret Carcass" */;
		case -1186289527: /* GXTEntry: "Good Fox Carcass" */
			return -784020903 /* GXTEntry: "Good Skinned Fox Carcass" */;
		case 877935135: /* GXTEntry: "Perfect Fox Carcass" */
			return -886117938 /* GXTEntry: "Perfect Skinned Fox Carcass" */;
		case -39646495: /* GXTEntry: "Poor Fox Carcass" */
			return -1416771220 /* GXTEntry: "Poor Skinned Fox Carcass" */;
		case 1582593525: /* GXTEntry: "Good Gila Monster Carcass" */
			return 1648676911 /* GXTEntry: "Good Skinned Gila Monster Carcass" */;
		case -246542229: /* GXTEntry: "Perfect Gila Monster Carcass" */
			return 2103833563 /* GXTEntry: "Perfect Skinned Gila Monster Carcass" */;
		case -529454751: /* GXTEntry: "Poor Gila Monster Carcass" */
			return -831636369 /* GXTEntry: "Poor Skinned Gila Monster Carcass" */;
		case -46978629: /* GXTEntry: "Good Goat Carcass" */
			return -852290935 /* GXTEntry: "Good Skinned Goat Carcass" */;
		case -1347000030: /* GXTEntry: "Perfect Goat Carcass" */
			return -1870415962 /* GXTEntry: "Perfect Skinned Goat Carcass" */;
		case -505583391: /* GXTEntry: "Poor Goat Carcass" */
			return -788684109 /* GXTEntry: "Poor Skinned Goat Carcass" */;
		case 1645887374: /* GXTEntry: "Good Goose Carcass" */
			return 1416435145 /* GXTEntry: "Good Skinned Goose Carcass" */;
		case -1559227925: /* GXTEntry: "Perfect Goose Carcass" */
			return -1483088274 /* GXTEntry: "Perfect Skinned Goose Carcass" */;
		case 1562528937: /* GXTEntry: "Poor Goose Carcass" */
			return -791867098 /* GXTEntry: "Poor Skinned Goose Carcass" */;
		case -1471526136: /* GXTEntry: "Good Hawk Carcass" */
			return -1689552552 /* GXTEntry: "Good Plucked Hawk Carcass" */;
		case -1440794801: /* GXTEntry: "Perfect Hawk Carcass" */
			return -1850779170 /* GXTEntry: "Perfect Plucked Hawk Carcass" */;
		case 2144711797:
			return -121487803 /* GXTEntry: "Poor Plucked Hawk Carcass" */;
		case 718825539: /* GXTEntry: "Good Heron Carcass" */
			return -1280499288 /* GXTEntry: "Good Skinned Heron Carcass" */;
		case 2105263879: /* GXTEntry: "Perfect Heron Carcass" */
			return 820245961 /* GXTEntry: "Perfect Skinned Heron Carcass" */;
		case -905842006: /* GXTEntry: "Poor Heron Carcass" */
			return -889526774 /* GXTEntry: "Poor Skinned Heron Carcass" */;
		case 1191274340: /* GXTEntry: "Good Iguana Carcass" */
			return -521025998 /* GXTEntry: "Good Skinned Iguana Carcass" */;
		case 1613453781: /* GXTEntry: "Perfect Iguana Carcass" */
			return 1583031244 /* GXTEntry: "Perfect Skinned Iguana Carcass" */;
		case -1030182399: /* GXTEntry: "Poor Iguana Carcass" */
			return -2115599211 /* GXTEntry: "Poor Skinned Iguana Carcass" */;
		case 987967309: /* GXTEntry: "Good Loon Carcass" */
			return -767176802 /* GXTEntry: "Good Skinned Loon Carcass" */;
		case -1060737769: /* GXTEntry: "Perfect Loon Carcass" */
			return -750945821 /* GXTEntry: "Perfect Skinned Loon Carcass" */;
		case 553310445: /* GXTEntry: "Poor Loon Carcass" */
			return -2135749211 /* GXTEntry: "Poor Skinned Loon Carcass" */;
		case -1838865945: /* GXTEntry: "Good Muskrat Carcass" */
			return 2063108046 /* GXTEntry: "Good Skinned Muskrat Carcass" */;
		case 1418092959: /* GXTEntry: "Perfect Muskrat Carcass" */
			return 1299111759 /* GXTEntry: "Perfect Skinned Muskrat Carcass" */;
		case -1315697778: /* GXTEntry: "Poor Muskrat Carcass" */
			return 1595322723 /* GXTEntry: "Poor Skinned Muskrat Carcass" */;
		case -1772126340: /* GXTEntry: "Good Opossum Carcass" */
			return 784918835 /* GXTEntry: "Good Skinned Opossum Carcass" */;
		case -935543049: /* GXTEntry: "Perfect Opossum Carcass" */
			return -676310905 /* GXTEntry: "Perfect Skinned Opossum Carcass" */;
		case 1772544356: /* GXTEntry: "Poor Opossum Carcass" */
			return -1719545959 /* GXTEntry: "Poor Skinned Opossum Carcass" */;
		case -266273535: /* GXTEntry: "Good Owl Carcass" */
			return -2142423934 /* GXTEntry: "Good Plucked Owl Carcass" */;
		case -1670544626: /* GXTEntry: "Perfect Owl Carcass" */
			return 747751566 /* GXTEntry: "Perfect Plucked Owl Carcass" */;
		case 1290960696: /* GXTEntry: "Poor Owl Carcass" */
			return -1942682403 /* GXTEntry: "Poor Plucked Owl Carcass" */;
		case 1913571052: /* GXTEntry: "Good Panther Carcass" */
			return 1018433784 /* GXTEntry: "Good Skinned Panther Carcass" */;
		case 1717601520: /* GXTEntry: "Perfect Panther Carcass" */
			return -796185392 /* GXTEntry: "Perfect Skinned Panther Carcass" */;
		case 430397370: /* GXTEntry: "Poor Panther Carcass" */
			return -49549406 /* GXTEntry: "Poor Skinned Panther Carcass" */;
		case 16287711: /* GXTEntry: "Good Parrot Carcass" */
			return 857788498 /* GXTEntry: "Good Plucked Parrot Carcass" */;
		case -1356230367: /* GXTEntry: "Perfect Parrot Carcass" */
			return 1223148871 /* GXTEntry: "Perfect Plucked Parrot Carcass" */;
		case 1417331079: /* GXTEntry: "Poor Parrot Carcass" */
			return 939407236 /* GXTEntry: "Poor Plucked Parrot Carcass" */;
		case -884124246: /* GXTEntry: "Good Pelican Carcass" */
			return 1608778431 /* GXTEntry: "Good Plucked Pelican Carcass" */;
		case 1884610748: /* GXTEntry: "Perfect Pelican Carcass" */
			return -2033821082 /* GXTEntry: "Perfect Plucked Pelican Carcass" */;
		case 746558492: /* GXTEntry: "Poor Pelican Carcass" */
			return -993340234 /* GXTEntry: "Poor Plucked Pelican Carcass" */;
		case -892811627: /* GXTEntry: "Good Pheasant Carcass" */
			return -1861062075 /* GXTEntry: "Good Skinned Pheasant Carcass" */;
		case -2040522845: /* GXTEntry: "Perfect Pheasant Carcass" */
			return 1645001514 /* GXTEntry: "Perfect Skinned Pheasant Carcass" */;
		case -1224510844: /* GXTEntry: "Poor Pheasant Carcass" */
			return 782371031 /* GXTEntry: "Poor Skinned Pheasant Carcass" */;
		case 1334837390: /* GXTEntry: "Good Pig Carcass" */
			return 1255529169 /* GXTEntry: "Good Skinned Pig Carcass" */;
		case 339620522: /* GXTEntry: "Perfect Pig Carcass" */
			return 70898308 /* GXTEntry: "Perfect Skinned Pig Carcass" */;
		case 1770451033: /* GXTEntry: "Poor Pig Carcass" */
			return -1050350982 /* GXTEntry: "Poor Skinned Pig Carcass" */;
		case 756657535: /* GXTEntry: "Good Prairie Chicken Carcass" */
			return 581781784 /* GXTEntry: "Good Skinned Prairie Chicken Carcass" */;
		case 862898895: /* GXTEntry: "Perfect Prairie Chicken Carcass" */
			return -1363330863 /* GXTEntry: "Perfect Skinned Prairie Chicken Carcass" */;
		case 1997845858: /* GXTEntry: "Poor Prairie Chicken Carcass" */
			return -1780911288 /* GXTEntry: "Poor Skinned Prairie Chicken Carcass" */;
		case -1930144509: /* GXTEntry: "Good Pronghorn Carcass" */
			return 1018306802 /* GXTEntry: "Good Skinned Pronghorn Carcass" */;
		case 1846915545: /* GXTEntry: "Perfect Pronghorn Carcass" */
			return 1615521415 /* GXTEntry: "Perfect Skinned Pronghorn Carcass" */;
		case -1816929509: /* GXTEntry: "Poor Pronghorn Carcass" */
			return -1499066338 /* GXTEntry: "Poor Skinned Pronghorn Carcass" */;
		case 1197831625: /* GXTEntry: "Good Rabbit Carcass" */
			return 1711081908 /* GXTEntry: "Good Skinned Rabbit Carcass" */;
		case -1866642239: /* GXTEntry: "Perfect Rabbit Carcass" */
			return -164705 /* GXTEntry: "Perfect Skinned Rabbit Carcass" */;
		case -1508120809: /* GXTEntry: "Poor Rabbit Carcass" */
			return -2044044647 /* GXTEntry: "Poor Skinned Rabbit Carcass" */;
		case -1007681885: /* GXTEntry: "Good Raccoon Carcass" */
			return -859583379 /* GXTEntry: "Good Skinned Raccoon Carcass" */;
		case 434924608: /* GXTEntry: "Perfect Raccoon Carcass" */
			return -759504052 /* GXTEntry: "Perfect Skinned Raccoon Carcass" */;
		case 1666393029: /* GXTEntry: "Poor Raccoon Carcass" */
			return 700225820 /* GXTEntry: "Poor Skinned Raccoon Carcass" */;
		case -1814593136: /* GXTEntry: "Good Ram Carcass" */
			return 136458586 /* GXTEntry: "Good Skinned Ram Carcass" */;
		case -1188120304: /* GXTEntry: "Perfect Ram Carcass" */
			return 799105420 /* GXTEntry: "Perfect Skinned Ram Carcass" */;
		case 1978734761: /* GXTEntry: "Poor Ram Carcass" */
			return -481655757 /* GXTEntry: "Poor Skinned Ram Carcass" */;
		case -824902132: /* GXTEntry: "Good Raven Carcass" */
			return 484160931 /* GXTEntry: "Good Plucked Raven Carcass" */;
		case -1015531226: /* GXTEntry: "Perfect Raven Carcass" */
			return 1010699907 /* GXTEntry: "Perfect Plucked Raven Carcass" */;
		case -581619522: /* GXTEntry: "Poor Raven Carcass" */
			return 1550264248 /* GXTEntry: "Poor Plucked Raven Carcass" */;
		case -861854914: /* GXTEntry: "Good Red-footed Booby Carcass" */
			return -371992731 /* GXTEntry: "Good Plucked Red-footed Booby Carcass" */;
		case -545447034: /* GXTEntry: "Perfect Red-footed Booby Carcass" */
			return 1090294483 /* GXTEntry: "Perfect Plucked Red-footed Booby Carcass" */;
		case -1824684934: /* GXTEntry: "Poor Red-footed Booby Carcass" */
			return -274175035 /* GXTEntry: "Poor Plucked Red-footed Booby Carcass" */;
		case 980653387: /* GXTEntry: "Good Rooster Carcass" */
			return -1064414912 /* GXTEntry: "Good Skinned Rooster Carcass" */;
		case -1011598664: /* GXTEntry: "Perfect Rooster Carcass" */
			return -2091620305 /* GXTEntry: "Perfect Skinned Rooster Carcass" */;
		case -177476569: /* GXTEntry: "Poor Rooster Carcass" */
			return -468684824 /* GXTEntry: "Poor Skinned Rooster Carcass" */;
		case 416630124: /* GXTEntry: "Good Roseate Spoonbill Carcass" */
			return 1668870118 /* GXTEntry: "Good Skinned Roseate Spoonbill Carcass" */;
		case 1925728375: /* GXTEntry: "Perfect Roseate Spoonbill Carcass" */
			return -534004020 /* GXTEntry: "Perfect Skinned Roseate Spoonbill Carcass" */;
		case -1080457688: /* GXTEntry: "Poor Roseate Spoonbill Carcass" */
			return -2126925270 /* GXTEntry: "Poor Skinned Roseate Spoonbill Carcass" */;
		case 1742676369: /* GXTEntry: "Good Seagull Carcass" */
			return 2008380517 /* GXTEntry: "Good Plucked Seagull Carcass" */;
		case -899751553: /* GXTEntry: "Perfect Seagull Carcass" */
			return -510697884 /* GXTEntry: "Perfect Plucked Seagull Carcass" */;
		case 431501574: /* GXTEntry: "Poor Seagull Carcass" */
			return -955209948 /* GXTEntry: "Poor Plucked Seagull Carcass" */;
		case 2126795269:
			return 1459836898 /* GXTEntry: "Good Skinned Sheep Carcass" */;
		case 1489051752: /* GXTEntry: "Perfect Sheep Carcass" */
			return 303969766 /* GXTEntry: "Perfect Skinned Sheep Carcass" */;
		case -1705499323: /* GXTEntry: "Poor Sheep Carcass" */
			return -1707588662 /* GXTEntry: "Poor Skinned Sheep Carcass" */;
		case -2013445740: /* GXTEntry: "Good Skunk Carcass" */
			return -1224075784 /* GXTEntry: "Good Skinned Skunk Carcass" */;
		case 102446365: /* GXTEntry: "Perfect Skunk Carcass" */
			return -1806671048 /* GXTEntry: "Perfect Skinned Skunk Carcass" */;
		case -1927342740: /* GXTEntry: "Poor Skunk Carcass" */
			return 749765420 /* GXTEntry: "Poor Skinned Skunk Carcass" */;
		case -410900360: /* GXTEntry: "Good Black-tailed Rattlesnake Carcass" */
			return 462936163 /* GXTEntry: "Good Skinned Black-Tailed Rattlesnake Carcass" */;
		case -1073614594: /* GXTEntry: "Perfect Black-tailed Rattlesnake Carcass" */
			return -8888941 /* GXTEntry: "Perfect Skinned Black-Tailed Rattlesnake Carcass" */;
		case 2060013792: /* GXTEntry: "Poor Black-tailed Rattlesnake Carcass" */
			return 1640227110 /* GXTEntry: "Poor Skinned Black-Tailed Rattlesnake Carcass" */;
		case 581032175: /* GXTEntry: "Good Red Boa Carcass" */
			return -1241188722 /* GXTEntry: "Good Skinned Red Boa Carcass" */;
		case -581931638: /* GXTEntry: "Perfect Red Boa Carcass" */
			return -1030962659 /* GXTEntry: "Perfect Skinned Red Boa Carcass" */;
		case -1528265128: /* GXTEntry: "Poor Red Boa Carcass" */
			return 112552982 /* GXTEntry: "Poor Skinned Red Boa Carcass" */;
		case -142632645: /* GXTEntry: "Good Copperhead Carcass" */
			return -1599578931 /* GXTEntry: "Good Skinned Copperhead Carcass" */;
		case -2048519180: /* GXTEntry: "Perfect Copperhead Carcass" */
			return 1296331626 /* GXTEntry: "Perfect Skinned Copperhead Carcass" */;
		case 1442025993: /* GXTEntry: "Poor Copperhead Carcass" */
			return -1256398198 /* GXTEntry: "Poor Skinned Copperhead Carcass" */;
		case 441195430: /* GXTEntry: "Good Fer-de-Lance Carcass" */
			return 1297800973 /* GXTEntry: "Good Skinned Fer-de-lance Carcass" */;
		case 748665395: /* GXTEntry: "Perfect Fer-de-Lance Carcass" */
			return 1772582754 /* GXTEntry: "Perfect Skinned Fer-de-lance Carcass" */;
		case 351048413: /* GXTEntry: "Poor Fer-de-Lance Carcass" */
			return -1459876379 /* GXTEntry: "Poor Skinned Fer-de-lance Carcass" */;
		case -914779013: /* GXTEntry: "Good Snake Carcass" */
			return 1127406863 /* GXTEntry: "Good Skinned Snake Carcass" */;
		case 1323485831: /* GXTEntry: "Perfect Snake Carcass" */
			return 1779996957 /* GXTEntry: "Perfect Skinned Snake Carcass" */;
		case -365111821: /* GXTEntry: "Poor Snake Carcass" */
			return 1885306923 /* GXTEntry: "Poor Skinned Snake Carcass" */;
		case 101495387: /* GXTEntry: "Good Water Snake Carcass" */
			return 1244107697 /* GXTEntry: "Good Skinned Water Snake Carcass" */;
		case 157917500: /* GXTEntry: "Perfect Water Snake Carcass" */
			return -1201555940 /* GXTEntry: "Perfect Skinned Water Snake Carcass" */;
		case -936537044: /* GXTEntry: "Poor Water Snake Carcass" */
			return -668487833 /* GXTEntry: "Poor Skinned Water Snake Carcass" */;
		case -1610329427: /* GXTEntry: "Good Turkey Carcass" */
			return -1178150148 /* GXTEntry: "Good Skinned Turkey Carcass" */;
		case -1836227998: /* GXTEntry: "Perfect Turkey Carcass" */
			return 1171158615 /* GXTEntry: "Perfect Skinned Turkey Carcass" */;
		case 619479575: /* GXTEntry: "Poor Turkey Carcass" */
			return -2123554124 /* GXTEntry: "Poor Skinned Turkey Carcass" */;
		case -1444929945: /* GXTEntry: "Good Snapping Turtle Carcass" */
			return 1806705761 /* GXTEntry: "Good Skinned Snapping Turtle Carcass" */;
		case -929322235: /* GXTEntry: "Perfect Snapping Turtle Carcass" */
			return 404581836 /* GXTEntry: "Perfect Skinned Snapping Turtle Carcass" */;
		case -548076717: /* GXTEntry: "Poor Snapping Turtle Carcass" */
			return 987197489 /* GXTEntry: "Poor Skinned Snapping Turtle Carcass" */;
		case -281211381: /* GXTEntry: "Good Vulture Carcass" */
			return -1259715647 /* GXTEntry: "Good Plucked Vulture Carcass" */;
		case 493457089: /* GXTEntry: "Perfect Vulture Carcass" */
			return -1716717840 /* GXTEntry: "Perfect Plucked Vulture Carcass" */;
		case -479485786: /* GXTEntry: "Poor Vulture Carcass" */
			return -196277007 /* GXTEntry: "Poor Plucked Vulture Carcass" */;
		case 27838955: /* GXTEntry: "Good Wolf Carcass" */
			return -2064457926 /* GXTEntry: "Good Skinned Wolf Carcass" */;
		case 1641833719: /* GXTEntry: "Perfect Wolf Carcass" */
			return 561267454 /* GXTEntry: "Perfect Skinned Wolf Carcass" */;
		case -314933180: /* GXTEntry: "Poor Wolf Carcass" */
			return 686253083 /* GXTEntry: "Poor Skinned Wolf Carcass" */;
		default:
			break;
	}
	return 0;
}

float func_275(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

int func_276(var uParam0, float fParam1)
{
	if (func_41(uParam0, fParam1))
	{
		func_5(uParam0);
		return 1;
	}
	return 0;
}

int func_277(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_BUY_AWARD_KEY_VALID(iParam0);
}

int func_278(int iParam0, int iParam1)
{
	struct<47> Var0;
	int iVar471;
	int iVar472;
	int iVar473;
	int iVar474;
	int iVar475;

	Var0 = 10;
	Var0.f_1.f_4 = 15;
	Var0.f_1.f_36 = 10;
	Var0.f_1.f_47.f_4 = 15;
	Var0.f_1.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_BUY_AWARD_ACQUIRE_COSTS(iParam0, &Var0, &iVar471, 10) || iVar471 == 0)
	{
		return 0;
	}
	iVar473 = 0;
	iVar474 = 0;
	while (iVar474 < iVar471)
	{
		if (&Var0[iVar474 /*47*/] == iParam1)
		{
			iVar473 = (Var0[iVar474 /*47*/])->f_35;
			iVar475 = 0;
			while (iVar475 < iVar473)
			{
				iVar472 = &(Var0[iVar474 /*47*/])->f_36[iVar475];
				if (iVar472 == 0)
				{
				}
				else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar472))
				{
					return 1;
				}
				iVar475++;
			}
		}
		iVar474++;
	}
	return 0;
}

int func_279(int iParam0, int iParam1)
{
	if (!func_280(iParam0, 2))
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

int func_280(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

void func_281(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<2> Var7;
	struct<2> Var19;
	float fVar21[15];

	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!ITEMDATABASE::_0xE81D0378A384E755(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = &Var7.f_1[iVar1];
		iVar4 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIED_PRICES(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != iParam1)
			{
			}
			else
			{
				iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIERS(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_MODIFIER(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if (uParam2[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (&fVar21[iVar0] != 1f)
		{
			((*uParam2)[iVar0 /*2*/])->f_1 = (BUILTIN::ROUND((IntToFloat((10000 * ((*uParam2)[iVar0 /*2*/])->f_1)) * (&fVar21[iVar0] / 1f))) / 10000);
		}
		iVar0++;
	}
}

int func_282(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;

	*iParam1 = 0;
	if (*uParam0 != 5)
	{
		return 0;
	}
	else if (*uParam2 != 5)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iParam3 < 1)
		{
			Jump @200; //curOff = 49
		}
		else if (((*uParam2)[iVar0 /*6*/])->f_4 == 0)
		{
			Jump @191; //curOff = 67
		}
		else if (((*uParam2)[iVar0 /*6*/])->f_5 == 0)
		{
		}
		else
		{
			*((*uParam0)[*iParam1 /*6*/]) = { *((*uParam2)[iVar0 /*6*/]) };
			((*uParam0)[*iParam1 /*6*/])->f_4 = ((*uParam2)[iVar0 /*6*/])->f_4;
			if (((*uParam2)[iVar0 /*6*/])->f_5 > iParam3)
			{
				((*uParam0)[*iParam1 /*6*/])->f_5 = iParam3;
				iParam3 = 0;
			}
			else
			{
				((*uParam0)[*iParam1 /*6*/])->f_5 = ((*uParam2)[iVar0 /*6*/])->f_5;
				iParam3 = (iParam3 - ((*uParam0)[*iParam1 /*6*/])->f_5);
			}
			*iParam1++;
		}
		iVar0++;
	}
	if (bParam4 && iParam3 > 0)
	{
		*iParam1 = 0;
		return 0;
	}
	return 1;
}

struct<4> func_283()
{
	struct<4> Var0;

	return Var0;
}

bool func_284()
{
	return (func_291(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0, 0, 0) > 0 && func_292(func_211(889965687 /* GXTEntry: "Wardrobe" */, func_258(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_285(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_141(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_206(iParam0, joaat("default")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_211(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_207(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_207(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

int func_286(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_207(0);
	*uParam1 = { func_211(iParam0, func_252(0), iParam3, 0) };
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

int func_287(int iParam0, int iParam1, int iParam2)
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

int func_288(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_207(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

void func_289(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<20> Var1;

	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1272170->f_20 < 20)
	{
		Global_1272170->f_20++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1272170->f_20.f_1[iVar0 /*20*/]) = { *(Global_1272170->f_20.f_1[iVar0 + 1 /*20*/]) };
			iVar0++;
		}
	}
	Var1 = -1;
	Var1.f_4.f_7 = -142743235;
	Var1 = iParam0;
	Var1.f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Var1.f_2 = iParam2;
		Var1.f_3 = iParam3;
	}
	*(Global_1272170->f_20.f_1[(Global_1272170->f_20 - 1) /*20*/]) = { Var1 };
}

int func_290(int iParam0)
{
	switch (iParam0)
	{
		case 1908704263: /* GXTEntry: "Good Skinned Alligator Carcass" */
			return 915880986 /* GXTEntry: "Good Alligator Carcass" */;
		case -2112217546: /* GXTEntry: "Perfect Skinned Alligator Carcass" */
			return -1424697962 /* GXTEntry: "Perfect Alligator Carcass" */;
		case -1745255175: /* GXTEntry: "Poor Skinned Alligator Carcass" */
			return -1643384846 /* GXTEntry: "Poor Alligator Carcass" */;
		case -237368063: /* GXTEntry: "Good Skinned Armadillo Carcass" */
			return -847420802 /* GXTEntry: "Good Armadillo Carcass" */;
		case 1598967299: /* GXTEntry: "Perfect Skinned Armadillo Carcass" */
			return -662726703 /* GXTEntry: "Perfect Armadillo Carcass" */;
		case -1809464109: /* GXTEntry: "Poor Skinned Armadillo Carcass" */
			return 1760886130 /* GXTEntry: "Poor Armadillo Carcass" */;
		case -165201917: /* GXTEntry: "Good Skinned Badger Carcass" */
			return -1243653490 /* GXTEntry: "Good Badger Carcass" */;
		case 815147738: /* GXTEntry: "Perfect Skinned Badger Carcass" */
			return 1988467099 /* GXTEntry: "Perfect Badger Carcass" */;
		case 1287583539: /* GXTEntry: "Poor Skinned Badger Carcass" */
			return -674590015 /* GXTEntry: "Poor Badger Carcass" */;
		case -2126985311: /* GXTEntry: "Good Skinned Beaver Carcass" */
			return -1480423460 /* GXTEntry: "Good Beaver Carcass" */;
		case -1268352491: /* GXTEntry: "Perfect Skinned Beaver Carcass" */
			return 924882045 /* GXTEntry: "Perfect Beaver Carcass" */;
		case -1940225526: /* GXTEntry: "Poor Skinned Beaver Carcass" */
			return 1415608202 /* GXTEntry: "Poor Beaver Carcass" */;
		case -212307068: /* GXTEntry: "Good Skinned Bighorn Sheep Carcass" */
			return -593311590 /* GXTEntry: "Good Bighorn Sheep Carcass" */;
		case 355421032: /* GXTEntry: "Perfect Skinned Bighorn Sheep Carcass" */
			return 765085831 /* GXTEntry: "Perfect Bighorn Sheep Carcass" */;
		case 1657729714: /* GXTEntry: "Poor Skinned Bighorn Sheep Carcass" */
			return 2094730711 /* GXTEntry: "Poor Bighorn Sheep Carcass" */;
		case 1350692346: /* GXTEntry: "Good Skinned Buck Carcass" */
			return -1310590179 /* GXTEntry: "Good Buck Carcass" */;
		case -257850294: /* GXTEntry: "Perfect Skinned Buck Carcass" */
			return 992366796 /* GXTEntry: "Perfect Buck Carcass" */;
		case -918541014: /* GXTEntry: "Poor Skinned Buck Carcass" */
			return -244657613 /* GXTEntry: "Poor Buck Carcass" */;
		case -947573795: /* GXTEntry: "Good Plucked California Condor Carcass" */
			return -2026210939 /* GXTEntry: "Good California Condor Carcass" */;
		case -2068302756: /* GXTEntry: "Perfect Plucked California Condor Carcass" */
			return -1252472243 /* GXTEntry: "Perfect California Condor Carcass" */;
		case 1650829985: /* GXTEntry: "Poor Plucked California Condor Carcass" */
			return -980016656 /* GXTEntry: "Poor California Condor Carcass" */;
		case -1808044035: /* GXTEntry: "Good Skinned Chicken Carcass" */
			return -758005668 /* GXTEntry: "Good Chicken Carcass" */;
		case -1952647655: /* GXTEntry: "Perfect Skinned Chicken Carcass" */
			return -2139551030 /* GXTEntry: "Perfect Chicken Carcass" */;
		case 1293221440: /* GXTEntry: "Poor Skinned Chicken Carcass" */
			return 1607144310 /* GXTEntry: "Poor Chicken Carcass" */;
		case -642946194: /* GXTEntry: "Good Plucked Cormorant Carcass" */
			return 80093385 /* GXTEntry: "Good Cormorant Carcass" */;
		case 819214075: /* GXTEntry: "Perfect Plucked Cormorant Carcass" */
			return -867655342 /* GXTEntry: "Perfect Cormorant Carcass" */;
		case -858652427: /* GXTEntry: "Poor Plucked Cormorant Carcass" */
			return 991092621 /* GXTEntry: "Poor Cormorant Carcass" */;
		case 395625948: /* GXTEntry: "Good Skinned Cougar Carcass" */
			return 871746664 /* GXTEntry: "Good Cougar Carcass" */;
		case -2063800922: /* GXTEntry: "Perfect Skinned Cougar Carcass" */
			return 1626949878 /* GXTEntry: "Perfect Cougar Carcass" */;
		case -2117103642: /* GXTEntry: "Poor Skinned Cougar Carcass" */
			return -1722483116 /* GXTEntry: "Poor Cougar Carcass" */;
		case -1583694057: /* GXTEntry: "Good Skinned Coyote Carcass" */
			return -1739474417 /* GXTEntry: "Good Coyote Carcass" */;
		case -1550918713: /* GXTEntry: "Perfect Skinned Coyote Carcass" */
			return -161524199 /* GXTEntry: "Perfect Coyote Carcass" */;
		case 836539658: /* GXTEntry: "Poor Skinned Coyote Carcass" */
			return 156979555 /* GXTEntry: "Poor Coyote Carcass" */;
		case 773062352: /* GXTEntry: "Good Plucked Crane Carcass" */
			return 322141256 /* GXTEntry: "Good Crane Carcass" */;
		case 1306100270: /* GXTEntry: "Perfect Plucked Crane Carcass" */
			return 1310120320 /* GXTEntry: "Perfect Crane Carcass" */;
		case -1063194668: /* GXTEntry: "Poor Plucked Crane Carcass" */
			return -1228376431 /* GXTEntry: "Poor Crane Carcass" */;
		case 337839068: /* GXTEntry: "Good Skinned Deer Carcass" */
			return 472142656 /* GXTEntry: "Good Deer Carcass" */;
		case -1426520714: /* GXTEntry: "Perfect Skinned Deer Carcass" */
			return -1837840093 /* GXTEntry: "Perfect Deer Carcass" */;
		case -1456429189: /* GXTEntry: "Poor Skinned Deer Carcass" */
			return 58634176 /* GXTEntry: "Poor Deer Carcass" */;
		case -2032809253: /* GXTEntry: "Good Skinned Duck Carcass" */
			return 1023080408 /* GXTEntry: "Good Duck Carcass" */;
		case 781728005: /* GXTEntry: "Perfect Skinned Duck Carcass" */
			return 1001171791 /* GXTEntry: "Perfect Duck Carcass" */;
		case 1202409779: /* GXTEntry: "Poor Skinned Duck Carcass" */
			return 1210345318 /* GXTEntry: "Poor Duck Carcass" */;
		case 1520877300: /* GXTEntry: "Good Plucked Eagle Carcass" */
			return 399553313 /* GXTEntry: "Good Eagle Carcass" */;
		case -1736624361: /* GXTEntry: "Perfect Plucked Eagle Carcass" */
			return -1422869557 /* GXTEntry: "Perfect Eagle Carcass" */;
		case 719465997: /* GXTEntry: "Poor Plucked Eagle Carcass" */
			return -1378812236 /* GXTEntry: "Poor Eagle Carcass" */;
		case -361486526: /* GXTEntry: "Good Skinned Egret Carcass" */
			return 1011003885 /* GXTEntry: "Good Egret Carcass" */;
		case -765274711: /* GXTEntry: "Perfect Skinned Egret Carcass" */
			return 651035143 /* GXTEntry: "Perfect Egret Carcass" */;
		case -887205673: /* GXTEntry: "Poor Skinned Egret Carcass" */
			return 2013022756 /* GXTEntry: "Poor Egret Carcass" */;
		case -784020903: /* GXTEntry: "Good Skinned Fox Carcass" */
			return -1186289527 /* GXTEntry: "Good Fox Carcass" */;
		case -886117938: /* GXTEntry: "Perfect Skinned Fox Carcass" */
			return 877935135 /* GXTEntry: "Perfect Fox Carcass" */;
		case -1416771220: /* GXTEntry: "Poor Skinned Fox Carcass" */
			return -39646495 /* GXTEntry: "Poor Fox Carcass" */;
		case 1648676911: /* GXTEntry: "Good Skinned Gila Monster Carcass" */
			return 1582593525 /* GXTEntry: "Good Gila Monster Carcass" */;
		case 2103833563: /* GXTEntry: "Perfect Skinned Gila Monster Carcass" */
			return -246542229 /* GXTEntry: "Perfect Gila Monster Carcass" */;
		case -831636369: /* GXTEntry: "Poor Skinned Gila Monster Carcass" */
			return -529454751 /* GXTEntry: "Poor Gila Monster Carcass" */;
		case -852290935: /* GXTEntry: "Good Skinned Goat Carcass" */
			return -46978629 /* GXTEntry: "Good Goat Carcass" */;
		case -1870415962: /* GXTEntry: "Perfect Skinned Goat Carcass" */
			return -1347000030 /* GXTEntry: "Perfect Goat Carcass" */;
		case -788684109: /* GXTEntry: "Poor Skinned Goat Carcass" */
			return -505583391 /* GXTEntry: "Poor Goat Carcass" */;
		case 1416435145: /* GXTEntry: "Good Skinned Goose Carcass" */
			return 1645887374 /* GXTEntry: "Good Goose Carcass" */;
		case -1483088274: /* GXTEntry: "Perfect Skinned Goose Carcass" */
			return -1559227925 /* GXTEntry: "Perfect Goose Carcass" */;
		case -791867098: /* GXTEntry: "Poor Skinned Goose Carcass" */
			return 1562528937 /* GXTEntry: "Poor Goose Carcass" */;
		case -1689552552: /* GXTEntry: "Good Plucked Hawk Carcass" */
			return -1471526136 /* GXTEntry: "Good Hawk Carcass" */;
		case -1850779170: /* GXTEntry: "Perfect Plucked Hawk Carcass" */
			return -1440794801 /* GXTEntry: "Perfect Hawk Carcass" */;
		case -121487803: /* GXTEntry: "Poor Plucked Hawk Carcass" */
			return 2144711797;
		case -1280499288: /* GXTEntry: "Good Skinned Heron Carcass" */
			return 718825539 /* GXTEntry: "Good Heron Carcass" */;
		case 820245961: /* GXTEntry: "Perfect Skinned Heron Carcass" */
			return 2105263879 /* GXTEntry: "Perfect Heron Carcass" */;
		case -889526774: /* GXTEntry: "Poor Skinned Heron Carcass" */
			return -905842006 /* GXTEntry: "Poor Heron Carcass" */;
		case -521025998: /* GXTEntry: "Good Skinned Iguana Carcass" */
			return 1191274340 /* GXTEntry: "Good Iguana Carcass" */;
		case 1583031244: /* GXTEntry: "Perfect Skinned Iguana Carcass" */
			return 1613453781 /* GXTEntry: "Perfect Iguana Carcass" */;
		case -2115599211: /* GXTEntry: "Poor Skinned Iguana Carcass" */
			return -1030182399 /* GXTEntry: "Poor Iguana Carcass" */;
		case -767176802: /* GXTEntry: "Good Skinned Loon Carcass" */
			return 987967309 /* GXTEntry: "Good Loon Carcass" */;
		case -750945821: /* GXTEntry: "Perfect Skinned Loon Carcass" */
			return -1060737769 /* GXTEntry: "Perfect Loon Carcass" */;
		case -2135749211: /* GXTEntry: "Poor Skinned Loon Carcass" */
			return 553310445 /* GXTEntry: "Poor Loon Carcass" */;
		case 2063108046: /* GXTEntry: "Good Skinned Muskrat Carcass" */
			return -1838865945 /* GXTEntry: "Good Muskrat Carcass" */;
		case 1299111759: /* GXTEntry: "Perfect Skinned Muskrat Carcass" */
			return 1418092959 /* GXTEntry: "Perfect Muskrat Carcass" */;
		case 1595322723: /* GXTEntry: "Poor Skinned Muskrat Carcass" */
			return -1315697778 /* GXTEntry: "Poor Muskrat Carcass" */;
		case 784918835: /* GXTEntry: "Good Skinned Opossum Carcass" */
			return -1772126340 /* GXTEntry: "Good Opossum Carcass" */;
		case -676310905: /* GXTEntry: "Perfect Skinned Opossum Carcass" */
			return -935543049 /* GXTEntry: "Perfect Opossum Carcass" */;
		case -1719545959: /* GXTEntry: "Poor Skinned Opossum Carcass" */
			return 1772544356 /* GXTEntry: "Poor Opossum Carcass" */;
		case -2142423934: /* GXTEntry: "Good Plucked Owl Carcass" */
			return -266273535 /* GXTEntry: "Good Owl Carcass" */;
		case 747751566: /* GXTEntry: "Perfect Plucked Owl Carcass" */
			return -1670544626 /* GXTEntry: "Perfect Owl Carcass" */;
		case -1942682403: /* GXTEntry: "Poor Plucked Owl Carcass" */
			return 1290960696 /* GXTEntry: "Poor Owl Carcass" */;
		case 1018433784: /* GXTEntry: "Good Skinned Panther Carcass" */
			return 1913571052 /* GXTEntry: "Good Panther Carcass" */;
		case -796185392: /* GXTEntry: "Perfect Skinned Panther Carcass" */
			return 1717601520 /* GXTEntry: "Perfect Panther Carcass" */;
		case -49549406: /* GXTEntry: "Poor Skinned Panther Carcass" */
			return 430397370 /* GXTEntry: "Poor Panther Carcass" */;
		case 857788498: /* GXTEntry: "Good Plucked Parrot Carcass" */
			return 16287711 /* GXTEntry: "Good Parrot Carcass" */;
		case 1223148871: /* GXTEntry: "Perfect Plucked Parrot Carcass" */
			return -1356230367 /* GXTEntry: "Perfect Parrot Carcass" */;
		case 939407236: /* GXTEntry: "Poor Plucked Parrot Carcass" */
			return 1417331079 /* GXTEntry: "Poor Parrot Carcass" */;
		case 1608778431: /* GXTEntry: "Good Plucked Pelican Carcass" */
			return -884124246 /* GXTEntry: "Good Pelican Carcass" */;
		case -2033821082: /* GXTEntry: "Perfect Plucked Pelican Carcass" */
			return 1884610748 /* GXTEntry: "Perfect Pelican Carcass" */;
		case -993340234: /* GXTEntry: "Poor Plucked Pelican Carcass" */
			return 746558492 /* GXTEntry: "Poor Pelican Carcass" */;
		case -1861062075: /* GXTEntry: "Good Skinned Pheasant Carcass" */
			return -892811627 /* GXTEntry: "Good Pheasant Carcass" */;
		case 1645001514: /* GXTEntry: "Perfect Skinned Pheasant Carcass" */
			return -2040522845 /* GXTEntry: "Perfect Pheasant Carcass" */;
		case 782371031: /* GXTEntry: "Poor Skinned Pheasant Carcass" */
			return -1224510844 /* GXTEntry: "Poor Pheasant Carcass" */;
		case 1255529169: /* GXTEntry: "Good Skinned Pig Carcass" */
			return 1334837390 /* GXTEntry: "Good Pig Carcass" */;
		case 70898308: /* GXTEntry: "Perfect Skinned Pig Carcass" */
			return 339620522 /* GXTEntry: "Perfect Pig Carcass" */;
		case -1050350982: /* GXTEntry: "Poor Skinned Pig Carcass" */
			return 1770451033 /* GXTEntry: "Poor Pig Carcass" */;
		case 581781784: /* GXTEntry: "Good Skinned Prairie Chicken Carcass" */
			return 756657535 /* GXTEntry: "Good Prairie Chicken Carcass" */;
		case -1363330863: /* GXTEntry: "Perfect Skinned Prairie Chicken Carcass" */
			return 862898895 /* GXTEntry: "Perfect Prairie Chicken Carcass" */;
		case -1780911288: /* GXTEntry: "Poor Skinned Prairie Chicken Carcass" */
			return 1997845858 /* GXTEntry: "Poor Prairie Chicken Carcass" */;
		case 1018306802: /* GXTEntry: "Good Skinned Pronghorn Carcass" */
			return -1930144509 /* GXTEntry: "Good Pronghorn Carcass" */;
		case 1615521415: /* GXTEntry: "Perfect Skinned Pronghorn Carcass" */
			return 1846915545 /* GXTEntry: "Perfect Pronghorn Carcass" */;
		case -1499066338: /* GXTEntry: "Poor Skinned Pronghorn Carcass" */
			return -1816929509 /* GXTEntry: "Poor Pronghorn Carcass" */;
		case 1711081908: /* GXTEntry: "Good Skinned Rabbit Carcass" */
			return 1197831625 /* GXTEntry: "Good Rabbit Carcass" */;
		case -164705: /* GXTEntry: "Perfect Skinned Rabbit Carcass" */
			return -1866642239 /* GXTEntry: "Perfect Rabbit Carcass" */;
		case -2044044647: /* GXTEntry: "Poor Skinned Rabbit Carcass" */
			return -1508120809 /* GXTEntry: "Poor Rabbit Carcass" */;
		case -859583379: /* GXTEntry: "Good Skinned Raccoon Carcass" */
			return -1007681885 /* GXTEntry: "Good Raccoon Carcass" */;
		case -759504052: /* GXTEntry: "Perfect Skinned Raccoon Carcass" */
			return 434924608 /* GXTEntry: "Perfect Raccoon Carcass" */;
		case 700225820: /* GXTEntry: "Poor Skinned Raccoon Carcass" */
			return 1666393029 /* GXTEntry: "Poor Raccoon Carcass" */;
		case 136458586: /* GXTEntry: "Good Skinned Ram Carcass" */
			return -1814593136 /* GXTEntry: "Good Ram Carcass" */;
		case 799105420: /* GXTEntry: "Perfect Skinned Ram Carcass" */
			return -1188120304 /* GXTEntry: "Perfect Ram Carcass" */;
		case -481655757: /* GXTEntry: "Poor Skinned Ram Carcass" */
			return 1978734761 /* GXTEntry: "Poor Ram Carcass" */;
		case 484160931: /* GXTEntry: "Good Plucked Raven Carcass" */
			return -824902132 /* GXTEntry: "Good Raven Carcass" */;
		case 1010699907: /* GXTEntry: "Perfect Plucked Raven Carcass" */
			return -1015531226 /* GXTEntry: "Perfect Raven Carcass" */;
		case 1550264248: /* GXTEntry: "Poor Plucked Raven Carcass" */
			return -581619522 /* GXTEntry: "Poor Raven Carcass" */;
		case -371992731: /* GXTEntry: "Good Plucked Red-footed Booby Carcass" */
			return -861854914 /* GXTEntry: "Good Red-footed Booby Carcass" */;
		case 1090294483: /* GXTEntry: "Perfect Plucked Red-footed Booby Carcass" */
			return -545447034 /* GXTEntry: "Perfect Red-footed Booby Carcass" */;
		case -274175035: /* GXTEntry: "Poor Plucked Red-footed Booby Carcass" */
			return -1824684934 /* GXTEntry: "Poor Red-footed Booby Carcass" */;
		case -1064414912: /* GXTEntry: "Good Skinned Rooster Carcass" */
			return 980653387 /* GXTEntry: "Good Rooster Carcass" */;
		case -2091620305: /* GXTEntry: "Perfect Skinned Rooster Carcass" */
			return -1011598664 /* GXTEntry: "Perfect Rooster Carcass" */;
		case -468684824: /* GXTEntry: "Poor Skinned Rooster Carcass" */
			return -177476569 /* GXTEntry: "Poor Rooster Carcass" */;
		case 1668870118: /* GXTEntry: "Good Skinned Roseate Spoonbill Carcass" */
			return 416630124 /* GXTEntry: "Good Roseate Spoonbill Carcass" */;
		case -534004020: /* GXTEntry: "Perfect Skinned Roseate Spoonbill Carcass" */
			return 1925728375 /* GXTEntry: "Perfect Roseate Spoonbill Carcass" */;
		case -2126925270: /* GXTEntry: "Poor Skinned Roseate Spoonbill Carcass" */
			return -1080457688 /* GXTEntry: "Poor Roseate Spoonbill Carcass" */;
		case 2008380517: /* GXTEntry: "Good Plucked Seagull Carcass" */
			return 1742676369 /* GXTEntry: "Good Seagull Carcass" */;
		case -510697884: /* GXTEntry: "Perfect Plucked Seagull Carcass" */
			return -899751553 /* GXTEntry: "Perfect Seagull Carcass" */;
		case -955209948: /* GXTEntry: "Poor Plucked Seagull Carcass" */
			return 431501574 /* GXTEntry: "Poor Seagull Carcass" */;
		case 1459836898: /* GXTEntry: "Good Skinned Sheep Carcass" */
			return 2126795269;
		case 303969766: /* GXTEntry: "Perfect Skinned Sheep Carcass" */
			return 1489051752 /* GXTEntry: "Perfect Sheep Carcass" */;
		case -1707588662: /* GXTEntry: "Poor Skinned Sheep Carcass" */
			return -1705499323 /* GXTEntry: "Poor Sheep Carcass" */;
		case -1224075784: /* GXTEntry: "Good Skinned Skunk Carcass" */
			return -2013445740 /* GXTEntry: "Good Skunk Carcass" */;
		case -1806671048: /* GXTEntry: "Perfect Skinned Skunk Carcass" */
			return 102446365 /* GXTEntry: "Perfect Skunk Carcass" */;
		case 749765420: /* GXTEntry: "Poor Skinned Skunk Carcass" */
			return -1927342740 /* GXTEntry: "Poor Skunk Carcass" */;
		case 462936163: /* GXTEntry: "Good Skinned Black-Tailed Rattlesnake Carcass" */
			return -410900360 /* GXTEntry: "Good Black-tailed Rattlesnake Carcass" */;
		case -8888941: /* GXTEntry: "Perfect Skinned Black-Tailed Rattlesnake Carcass" */
			return -1073614594 /* GXTEntry: "Perfect Black-tailed Rattlesnake Carcass" */;
		case 1640227110: /* GXTEntry: "Poor Skinned Black-Tailed Rattlesnake Carcass" */
			return 2060013792 /* GXTEntry: "Poor Black-tailed Rattlesnake Carcass" */;
		case -1241188722: /* GXTEntry: "Good Skinned Red Boa Carcass" */
			return 581032175 /* GXTEntry: "Good Red Boa Carcass" */;
		case -1030962659: /* GXTEntry: "Perfect Skinned Red Boa Carcass" */
			return -581931638 /* GXTEntry: "Perfect Red Boa Carcass" */;
		case 112552982: /* GXTEntry: "Poor Skinned Red Boa Carcass" */
			return -1528265128 /* GXTEntry: "Poor Red Boa Carcass" */;
		case -1599578931: /* GXTEntry: "Good Skinned Copperhead Carcass" */
			return -142632645 /* GXTEntry: "Good Copperhead Carcass" */;
		case 1296331626: /* GXTEntry: "Perfect Skinned Copperhead Carcass" */
			return -2048519180 /* GXTEntry: "Perfect Copperhead Carcass" */;
		case -1256398198: /* GXTEntry: "Poor Skinned Copperhead Carcass" */
			return 1442025993 /* GXTEntry: "Poor Copperhead Carcass" */;
		case 1297800973: /* GXTEntry: "Good Skinned Fer-de-lance Carcass" */
			return 441195430 /* GXTEntry: "Good Fer-de-Lance Carcass" */;
		case 1772582754: /* GXTEntry: "Perfect Skinned Fer-de-lance Carcass" */
			return 748665395 /* GXTEntry: "Perfect Fer-de-Lance Carcass" */;
		case -1459876379: /* GXTEntry: "Poor Skinned Fer-de-lance Carcass" */
			return 351048413 /* GXTEntry: "Poor Fer-de-Lance Carcass" */;
		case 1127406863: /* GXTEntry: "Good Skinned Snake Carcass" */
			return -914779013 /* GXTEntry: "Good Snake Carcass" */;
		case 1779996957: /* GXTEntry: "Perfect Skinned Snake Carcass" */
			return 1323485831 /* GXTEntry: "Perfect Snake Carcass" */;
		case 1885306923: /* GXTEntry: "Poor Skinned Snake Carcass" */
			return -365111821 /* GXTEntry: "Poor Snake Carcass" */;
		case 1244107697: /* GXTEntry: "Good Skinned Water Snake Carcass" */
			return 101495387 /* GXTEntry: "Good Water Snake Carcass" */;
		case -1201555940: /* GXTEntry: "Perfect Skinned Water Snake Carcass" */
			return 157917500 /* GXTEntry: "Perfect Water Snake Carcass" */;
		case -668487833: /* GXTEntry: "Poor Skinned Water Snake Carcass" */
			return -936537044 /* GXTEntry: "Poor Water Snake Carcass" */;
		case -1178150148: /* GXTEntry: "Good Skinned Turkey Carcass" */
			return -1610329427 /* GXTEntry: "Good Turkey Carcass" */;
		case 1171158615: /* GXTEntry: "Perfect Skinned Turkey Carcass" */
			return -1836227998 /* GXTEntry: "Perfect Turkey Carcass" */;
		case -2123554124: /* GXTEntry: "Poor Skinned Turkey Carcass" */
			return 619479575 /* GXTEntry: "Poor Turkey Carcass" */;
		case 1806705761: /* GXTEntry: "Good Skinned Snapping Turtle Carcass" */
			return -1444929945 /* GXTEntry: "Good Snapping Turtle Carcass" */;
		case 404581836: /* GXTEntry: "Perfect Skinned Snapping Turtle Carcass" */
			return -929322235 /* GXTEntry: "Perfect Snapping Turtle Carcass" */;
		case 987197489: /* GXTEntry: "Poor Skinned Snapping Turtle Carcass" */
			return -548076717 /* GXTEntry: "Poor Snapping Turtle Carcass" */;
		case -1259715647: /* GXTEntry: "Good Plucked Vulture Carcass" */
			return -281211381 /* GXTEntry: "Good Vulture Carcass" */;
		case -1716717840: /* GXTEntry: "Perfect Plucked Vulture Carcass" */
			return 493457089 /* GXTEntry: "Perfect Vulture Carcass" */;
		case -196277007: /* GXTEntry: "Poor Plucked Vulture Carcass" */
			return -479485786 /* GXTEntry: "Poor Vulture Carcass" */;
		case -2064457926: /* GXTEntry: "Good Skinned Wolf Carcass" */
			return 27838955 /* GXTEntry: "Good Wolf Carcass" */;
		case 561267454: /* GXTEntry: "Perfect Skinned Wolf Carcass" */
			return 1641833719 /* GXTEntry: "Perfect Wolf Carcass" */;
		case 686253083: /* GXTEntry: "Poor Skinned Wolf Carcass" */
			return -314933180 /* GXTEntry: "Poor Wolf Carcass" */;
		default:
			break;
	}
	return 0;
}

int func_291(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_293(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_207(bParam1), iParam0, iParam3);
}

int func_292(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_294(&uParam0, iParam4, bParam5, iParam6);
}

bool func_293(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

int func_294(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_295(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_295(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_207(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return 0;
	}
	if (!func_288(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return 0;
	}
	return 1;
}

