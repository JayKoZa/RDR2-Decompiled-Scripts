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
	struct<2> Local_21[32];
	struct<287> Local_86 = { 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1053609165, 1041865114, 0, 1050253722, 1055286886, 1060320051, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 255, 0, 0, 0, 0, 0, 0, -1, -1, 7, 255, 255, 255, 255, 255, 255, 255, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 1, 0, 0, 2, -1, -1, 493038497, 493038497, 0, 0, -1, 0, 0, 0, 0, 1101004800, -1, -1 } ;
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	func_1(&ScriptParam_0);
	while (func_2(&Local_86, ScriptParam_0))
	{
		func_3(&Local_86, &ScriptParam_0);
		BUILTIN::WAIT(0);
	}
	func_4(&Local_86);
	func_5();
}

void func_1(var uParam0)
{
	func_6(32, uParam0->f_3);
	func_7();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&uLocal_19, 2, 45);
	func_8(NETWORK::_0xBA24095EA96DFE17(&uLocal_19), 2, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_21, 65, 46);
	func_9(NETWORK::_0x690806BC83BC8CA2(&(Local_21[0 /*2*/])), 65, "m_clientData");
	func_10(0);
	Local_86 = { *uParam0 };
	Local_86.f_279 = uParam0->f_3;
	Local_86.f_285 = func_11(joaat("CRIPPS"));
	Local_86.f_286 = func_12(joaat("GFH_PLAYER_CAMP"));
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
}

bool func_2(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	struct<2> Var0;

	if (func_13(0, 0))
	{
		return false;
	}
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		return false;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	if ((uParam0->f_285 != -1 && uParam0->f_285 == func_14()) || (uParam0->f_286 != -1 && uParam0->f_286 == func_15()))
	{
		Var0 = { func_16() };
	}
	if (func_17(Var0, 1024, 0))
	{
		return false;
	}
	if (func_18() != 2)
	{
		return false;
	}
	if ((!func_19(uParam0->f_279) || Global_1131196[uParam0->f_279 /*27*/] < 1) || Global_1131196[uParam0->f_279 /*27*/] > 2)
	{
		return false;
	}
	func_20(uParam0);
	if (!uParam0->f_278)
	{
		return false;
	}
	return true;
}

void func_3(var uParam0, var uParam1)
{
	func_21(uParam0, uParam1);
}

void func_4(var uParam0)
{
	func_22(uParam0);
	if (func_23(Global_1296859, 65536))
	{
		func_24(65536);
	}
	if (func_23(Global_1296859, 268435456))
	{
		func_24(268435456);
	}
	if (func_23(Global_1296859, 134217728))
	{
		func_24(134217728);
	}
	if (func_23(Global_1296859, 8192))
	{
		func_24(8192);
	}
	if (func_23(Global_1296859, 32768))
	{
		func_24(32768);
	}
	if (func_23(Global_1296859, 1073741824 /* Float: 2f */))
	{
		func_24(1073741824 /* Float: 2f */);
	}
	func_25(64);
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_66))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_66, func_26(), uParam0->f_83.f_41);
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_66);
	}
	func_27(uParam0);
	if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::IS_ENTITY_VISIBLE(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())) == 0)
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true);
		}
	}
}

void func_5()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_6(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_5();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
}

int func_7()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	iVar1 = MISC::GET_GAME_TIMER();
	iVar2 = NETWORK::NETWORK_GET_TIMEOUT_TIME();
	if (iVar2 < 50000)
	{
		iVar2 = 50000;
	}
	while (iVar0 != 2)
	{
		if (MISC::GET_GAME_TIMER() - iVar1) > (iVar2 - 5000)
		{
		}
		if ((MISC::GET_GAME_TIMER() - iVar1) > 300000)
		{
			func_5();
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
			{
				case 0:
					break;
				case 1:
					func_5();
					break;
				case 2:
					func_5();
					break;
				case 4:
					func_5();
					break;
				case 3:
					func_5();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_5();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_5();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			func_5();
		}
		if (func_28() == 0)
		{
			if (func_29())
			{
				func_5();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_5();
	}
	return 1;
}

int func_8(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_9(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_10(bool bParam0)
{
	int iVar0;
	struct<8> Var1;
	int iVar9;

	iVar0 = (MISC::_GET_SYSTEM_TIME() + 180000);
	iVar9 = 0;
	Var1 = { Var1 };
	while (true)
	{
		iVar9++;
		if (bParam0)
		{
			NETWORK::_0x236905C700FDB54D();
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
			{
				case 0:
					break;
				case 1:
					func_5();
					break;
				case 2:
					func_5();
					break;
				case 4:
					func_5();
					break;
				case 3:
					func_5();
					break;
				default:
					break;
			}
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			StringCopy(&Var1, "HOST", 64);
		}
		else
		{
			StringCopy(&Var1, "CLIENT", 64);
		}
		if (NETWORK::_0x5D10B3795F3FC886())
		{
			return;
		}
		if (MISC::_GET_SYSTEM_TIME() >= iVar0)
		{
			func_5();
			return;
		}
		BUILTIN::WAIT(0);
	}
}

int func_11(int iParam0)
{
	return func_30(13, iParam0);
}

int func_12(int iParam0)
{
	return func_30(14, iParam0);
}

bool func_13(bool bParam0, bool bParam1)
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

int func_14()
{
	return Global_1130592.f_5.f_1;
}

int func_15()
{
	return Global_1130592.f_5;
}

struct<2> func_16()
{
	return Global_1130592.f_5.f_3;
}

bool func_17(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265377.f_124517.f_135 & 8 != 0)
	{
		Global_1071686.f_28351 = 1;
		return true;
	}
	if (func_31(Global_1051213) && !func_32(Global_1051213, Param0))
	{
		Global_1071686.f_28351 = 2;
		return true;
	}
	if (iParam2 != 0 && func_33(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_34(iParam3, 255))
	{
		Global_1071686.f_28351 = 4;
		return true;
	}
	if (Global_263042[Global_1296859 /*70*/] > 2)
	{
		Global_1071686.f_28351 = 5;
		return true;
	}
	if (Global_262155 >= 1)
	{
		Global_1071686.f_28351 = 6;
		return true;
	}
	if (func_35())
	{
		Global_1071686.f_28351 = 7;
		return true;
	}
	if (Global_1572887.f_7 & 1 != 0)
	{
		if (!func_31(Global_1051213))
		{
			Global_1071686.f_28351 = 8;
			return true;
		}
	}
	if (Global_265377.f_124675 != 0 && SCRIPTS::_DOES_THREAD_EXIST(Global_265377.f_124675))
	{
		Global_1071686.f_28351 = 9;
		return true;
	}
	Global_1071686.f_28351 = 0;
	return false;
}

int func_18()
{
	if (!func_36(Global_1572887.f_266.f_63, 8))
	{
		return 2;
	}
	if (Global_1572887.f_266.f_2 != 4)
	{
		return 1;
	}
	if (Global_1572887.f_266 > 7 && Global_1572887.f_266 < 23)
	{
		return 0;
	}
	return 2;
}

bool func_19(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

void func_20(var uParam0)
{
	uParam0->f_278 = (func_19(uParam0->f_279) && ((Global_1132288.f_1[uParam0->f_279 /*63*/].f_4 > 0 && Global_1132288.f_1[uParam0->f_279 /*63*/].f_4 < 3) || (SCRIPTS::_DOES_THREAD_EXIST(Global_1132288.f_2055) && Global_1132288.f_2058 == uParam0->f_279)));
}

void func_21(var uParam0, var uParam1)
{
	if (func_37(uParam0))
	{
		uParam0->f_66.f_5 = 0;
		uParam0->f_83.f_44 = 0;
		uParam0->f_83.f_45 = 0;
		uParam0->f_83.f_1 = 0;
		func_38(&(uParam0->f_243), 0);
		func_25(64);
	}
	if (func_39(uParam0))
	{
		uParam0->f_83.f_44 = 0;
		uParam0->f_83.f_48 = 0;
		uParam0->f_83.f_45 = 0;
		uParam0->f_83.f_47 = 0;
		uParam0->f_83.f_43 = 0;
		func_40(&(uParam0->f_83), 0);
	}
	func_41(uParam0);
}

void func_22(var uParam0)
{
	if (DATAFILE::_0x7907969497EA92F5(uParam0->f_83.f_154) && DATAFILE::_0x603AC35FD4602C76(uParam0->f_83.f_154))
	{
		DATAFILE::_DATAFILE_UNLOAD(uParam0->f_83.f_154);
	}
	if (DATAFILE::_0x7907969497EA92F5(uParam0->f_83.f_155) && DATAFILE::_0x603AC35FD4602C76(uParam0->f_83.f_155))
	{
		DATAFILE::_DATAFILE_UNLOAD(uParam0->f_83.f_155);
	}
	if (DATAFILE::_0x7907969497EA92F5(uParam0->f_83.f_156) && DATAFILE::_0x603AC35FD4602C76(uParam0->f_83.f_156))
	{
		DATAFILE::_DATAFILE_UNLOAD(uParam0->f_83.f_156);
	}
	if (DATAFILE::_0x7907969497EA92F5(uParam0->f_83.f_157) && DATAFILE::_0x603AC35FD4602C76(uParam0->f_83.f_157))
	{
		DATAFILE::_DATAFILE_UNLOAD(uParam0->f_83.f_157);
	}
}

bool func_23(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return func_42(Global_1134390[iParam0 /*83*/].f_74, iParam1);
}

void func_24(int iParam0)
{
	if (func_42(Global_1134390[Global_1296859 /*83*/].f_74, iParam0))
	{
		func_43(&(Global_1134390[Global_1296859 /*83*/].f_74), iParam0);
		Global_1134349.f_32 = Global_1134390[Global_1296859 /*83*/].f_74;
	}
}

void func_25(int iParam0)
{
	func_44(iParam0);
}

char* func_26()
{
	return "CRIPPS";
}

int func_27(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_83.f_41))
	{
		iVar0 = 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_83.f_41))
	{
		ENTITY::DELETE_ENTITY(&(uParam0->f_83.f_41));
		iVar0 = 1;
	}
	return iVar0;
}

int func_28()
{
	return Global_1572887.f_13;
}

bool func_29()
{
	return Global_1051252.f_8;
}

int func_30(int iParam0, int iParam1)
{
	struct<2> Var0;

	if (func_45(iParam0, iParam1, &Var0))
	{
		return Var0.f_1;
	}
	return -1;
}

bool func_31(struct<2> Param0)
{
	if (!func_46(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_47(Param0))
	{
		return false;
	}
	return true;
}

bool func_32(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_33(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return (Global_1197740.f_1 && iParam0) != 0;
}

bool func_34(int iParam0, int iParam1)
{
	if (!Global_1071686.f_3)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return false;
	}
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return (Global_1197355[iParam1 /*12*/] && iParam0) != 0;
}

bool func_35()
{
	if (Global_1048576)
	{
		return true;
	}
	if (Global_1572887.f_4)
	{
		return true;
	}
	if (Global_2883584)
	{
		return true;
	}
	if (Global_1048577)
	{
		return true;
	}
	if (!func_31(Global_1051213) && Global_1572887.f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_36(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_37(var uParam0)
{
	func_48(&(uParam0->f_83.f_44), &(uParam0->f_83.f_43), &(uParam0->f_83.f_1));
	func_49(uParam0->f_241, uParam0->f_241.f_1);
	if (func_50(uParam0->f_279, &(uParam0->f_83.f_39)))
	{
		uParam0->f_83.f_40 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_83.f_39);
	}
	func_51();
	func_52(uParam0);
	switch (uParam0->f_243)
	{
		case 0:
			func_38(&(uParam0->f_243), 1);
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_83.f_39) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_83.f_39))
			{
				if (func_23(Global_1296859, 8192))
				{
					NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(uParam0->f_83.f_39, true, false, 256);
				}
				else
				{
					NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(uParam0->f_83.f_39, false, false, 256);
				}
			}
			if (func_23(Global_1296859, 32768))
			{
				func_53(uParam0);
				NETWORK::_0xF3354D6CA46F419D(uParam0->f_83.f_39, 0);
				func_38(&(uParam0->f_243), 2);
			}
			return false;
		case 2:
			if (func_54(uParam0))
			{
				if (func_23(Global_1296859, 268435456))
				{
					func_24(268435456);
				}
				if (func_23(Global_1296859, 65536))
				{
					func_24(65536);
				}
				uParam0->f_83.f_48 = 0;
				uParam0->f_83.f_47 = 0;
				uParam0->f_66.f_5 = 1;
				uParam0->f_66.f_6 = 0;
				uParam0->f_83.f_49 = 0;
				uParam0->f_66.f_3 = 0;
				func_55(&(uParam0->f_66.f_1), 0);
				func_38(&(uParam0->f_243), 3);
			}
			return false;
		case 3:
			AUDIO::_0x9428447DED71FC7E("shop_scenes");
			func_27(uParam0);
			return true;
	}
	return false;
}

void func_38(var uParam0, int iParam1)
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
	}
}

bool func_39(var uParam0)
{
	struct<33> Var0;
	var uVar33;
	struct<4> Var34;

	if (!uParam0->f_83.f_44)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (!GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_4 = 10;
	Var0.f_15 = 4;
	Var0.f_15.f_5 = 4;
	Var0.f_25 = 1;
	Var0.f_28 = 2;
	Var0.f_28.f_1 = -1;
	Var0.f_28.f_1.f_1 = -1;
	Var0.f_31 = joaat("NONE");
	Var0.f_31.f_1 = joaat("NONE");
	switch (uParam0->f_83)
	{
		case 0:
			if (uParam0->f_83.f_44)
			{
				func_40(&(uParam0->f_83), 1);
			}
			break;
		case 1:
			if (uParam0->f_83.f_2 == 3)
			{
				if (func_56(uParam0, &Var0, uParam0->f_83.f_1, uParam0->f_83.f_43, &(uParam0->f_83.f_50)))
				{
					uParam0->f_83.f_45 = 1;
					uParam0->f_244 = { Var0 };
					func_40(&(uParam0->f_83), 2);
				}
			}
			break;
		case 2:
			if (!uParam0->f_83.f_48)
			{
				if (uParam0->f_83.f_50)
				{
					Var34.f_1 = -1;
					if (func_57(&(uParam0->f_244.f_25), joaat("HAS_INTRO_CUTSCENE")))
					{
						func_58(&uVar33, 2);
					}
					func_59(func_12(joaat("GFH_PLAYER_CAMP")), func_11(joaat("CRIPPS")), uVar33, uParam0->f_244.f_2, uParam0->f_244, Var34, 0);
				}
				else if (!func_60(&(uParam0->f_244), func_11(joaat("CRIPPS")), func_12(joaat("GFH_PLAYER_CAMP"))))
				{
				}
				uParam0->f_83.f_48 = 1;
			}
			func_40(&(uParam0->f_83), 3);
			break;
		case 3:
			uParam0->f_83.f_48 = 0;
			if (uParam0->f_66.f_5)
			{
				if (!func_23(Global_1296859, 65536))
				{
					uParam0->f_83.f_45 = 0;
					uParam0->f_66.f_5 = 0;
					return true;
				}
			}
			break;
	}
	return false;
}

void func_40(var uParam0, int iParam1)
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
	}
}

void func_41(var uParam0)
{
	switch (uParam0->f_83.f_2)
	{
		case 0:
			uParam0->f_83.f_154 = DATAFILE::_0xD97D8D905F1562F2(-911959609);
			uParam0->f_83.f_155 = DATAFILE::_0xD97D8D905F1562F2(joaat("NET_GUN_FOR_HIRE_MISSIONS"));
			uParam0->f_83.f_156 = DATAFILE::_0xD97D8D905F1562F2(-954913418);
			uParam0->f_83.f_157 = DATAFILE::_0xD97D8D905F1562F2(-972240077);
			func_61(uParam0, 1);
			break;
		case 1:
			if (!DATAFILE::_0x603AC35FD4602C76(uParam0->f_83.f_154))
			{
				return;
			}
			if (!DATAFILE::_0x603AC35FD4602C76(uParam0->f_83.f_155))
			{
				return;
			}
			if (!DATAFILE::_0x603AC35FD4602C76(uParam0->f_83.f_156))
			{
				return;
			}
			if (!DATAFILE::_0x603AC35FD4602C76(uParam0->f_83.f_157))
			{
				return;
			}
			func_61(uParam0, 2);
			break;
		case 2:
			func_62(uParam0->f_83.f_154);
			func_63(uParam0->f_83.f_155);
			func_64(uParam0->f_83.f_156);
			func_65(uParam0->f_83.f_157);
			func_61(uParam0, 3);
			break;
		case 3:
			break;
		default:
			break;
	}
}

bool func_42(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_43(var uParam0, int iParam1)
{
	func_66(uParam0, iParam1);
}

void func_44(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	Global_1128574[iVar0 /*56*/].f_34 = (Global_1128574[iVar0 /*56*/].f_34 - (Global_1128574[iVar0 /*56*/].f_34 && iParam0));
}

bool func_45(int iParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (func_67(iParam0, iParam1, &uVar0))
	{
		func_68(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_46(int iParam0)
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

int func_47(int iParam0)
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

void func_48(var uParam0, var uParam1, var uParam2)
{
	if (!func_69())
	{
	}
	if (func_23(Global_1296859, 512))
	{
		*uParam2 = 1;
		*uParam0 = 1;
		func_70(64);
	}
	else if (func_23(Global_1296859, 1024))
	{
		*uParam1 = 0;
		*uParam0 = 1;
		*uParam2 = 2;
		func_70(64);
	}
	else if (func_23(Global_1296859, 2048))
	{
		*uParam1 = 1;
		*uParam0 = 1;
		*uParam2 = 2;
		func_70(64);
	}
}

void func_49(char* sParam0, int iParam1)
{
	if (func_23(Global_1296859, 32768))
	{
	}
	else
	{
		func_71(sParam0, iParam1);
	}
}

bool func_50(int iParam0, var uParam1)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!func_19(iParam0))
	{
		return false;
	}
	vVar0 = { func_72(iParam0) };
	iVar3 = VOLUME::_CREATE_VOLUME_SPHERE(vVar0, 0f, 0f, 0f, 100f, 100f, 100f);
	iVar4 = ITEMSET::CREATE_ITEMSET(false);
	iVar5 = ENTITY::_0x84CCF9A12942C83D(iVar3, iVar4, 1, 1, 0, "iCampFollowerCamp");
	iVar7 = 0;
	iVar7 = 0;
	while (iVar7 <= (iVar5 - 1))
	{
		iVar6 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar7, iVar4));
		if (ENTITY::DOES_ENTITY_EXIST(iVar6) && DECORATOR::DECOR_GET_INT(iVar6, "iCampFollowerCamp") == iParam0)
		{
			*uParam1 = iVar6;
		}
		else
		{
			iVar7++;
		}
	}
	VOLUME::_DELETE_VOLUME(iVar3);
	ITEMSET::DESTROY_ITEMSET(iVar4);
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return false;
	}
	return true;
}

void func_51()
{
	if (!func_73() && GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		if (!func_23(Global_1296859, 1073741824 /* Float: 2f */))
		{
			func_74(1073741824 /* Float: 2f */);
		}
	}
}

void func_52(var uParam0)
{
	if (!GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (func_23(Global_1296859, 134217728))
	{
		uParam0->f_83.f_46 = 1;
		func_24(134217728);
	}
	if (func_75(uParam0->f_279, 1))
	{
		if (func_76(PLAYER::PLAYER_ID()))
		{
			if (func_73())
			{
				if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
				{
					if (uParam0->f_83.f_46)
					{
						uParam0->f_83.f_44 = 1;
						uParam0->f_66.f_5 = 1;
						uParam0->f_83.f_46 = 0;
						uParam0->f_83.f_1 = 1;
					}
					else if (!func_23(Global_1296859, 65536))
					{
						uParam0->f_83.f_47 = 1;
					}
				}
			}
			else
			{
				uParam0->f_83.f_47 = 0;
			}
		}
	}
}

void func_53(var uParam0)
{
	bool bVar0;

	bVar0 = TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_277);
	if (!bVar0)
	{
		uParam0->f_277 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(Global_1132288.f_1[uParam0->f_279 /*63*/].f_44, joaat("WORLD_HUMAN_STARE_STOIC"), 5f, 0, false);
	}
	else
	{
		func_38(&(uParam0->f_243), 2);
	}
}

bool func_54(var uParam0)
{
	func_77(uParam0);
	func_78(uParam0);
	if (uParam0->f_66.f_1 > 0)
	{
		func_79(&(uParam0->f_83.f_44), &(uParam0->f_66.f_1), &(uParam0->f_66.f_6));
	}
	switch (uParam0->f_66.f_1)
	{
		case 0:
			func_80(uParam0);
			if (uParam0->f_66.f_10)
			{
				uParam0->f_66.f_3 = 4;
			}
			else
			{
				uParam0->f_66.f_3 = 10;
			}
			uParam0->f_66.f_9 = func_83(&(uParam0->f_66), func_81(uParam0->f_66.f_2), func_82(uParam0->f_66.f_3));
			if (!uParam0->f_66.f_9)
			{
				return false;
			}
			uParam0->f_66.f_7 = func_84(uParam0);
			if (!uParam0->f_66.f_7)
			{
				return false;
			}
			uParam0->f_66.f_8 = func_85(uParam0);
			if (!uParam0->f_66.f_8)
			{
				return false;
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_83.f_41))
			{
				if (AUDIO::_0x131EC9247E7A2903(uParam0->f_83.f_41))
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uParam0->f_83.f_41, "rdro_shop_cripps_mixgroup", 0f);
					AUDIO::_0x6339C1EA3979B5F7("shop_cripps", "shop_scenes");
				}
			}
			if (!func_23(Global_1296859, 65536))
			{
				func_74(65536);
			}
			if ((uParam0->f_66.f_9 && uParam0->f_66.f_7) && uParam0->f_66.f_8)
			{
				func_55(&(uParam0->f_66.f_1), 1);
			}
			break;
		case 1:
			if (func_86(uParam0->f_66, uParam0->f_66.f_11) && uParam0->f_66.f_3 == 10)
			{
				uParam0->f_66.f_3 = 4;
				func_87(uParam0->f_66, func_82(uParam0->f_66.f_3));
			}
			if (uParam0->f_66.f_3 == 4)
			{
				func_55(&(uParam0->f_66.f_1), 2);
			}
			if (uParam0->f_83.f_44)
			{
				func_55(&(uParam0->f_66.f_1), 3);
			}
			break;
		case 2:
			if (!uParam0->f_83.f_44)
			{
				if (func_86(uParam0->f_66, uParam0->f_66.f_11))
				{
					if (func_88(uParam0))
					{
						func_87(uParam0->f_66, func_82(uParam0->f_66.f_3));
					}
				}
			}
			else
			{
				func_55(&(uParam0->f_66.f_1), 3);
			}
			break;
		case 3:
			if (!uParam0->f_83.f_45)
			{
				return false;
			}
			func_89(&(uParam0->f_83.f_56), Global_34, "ARTHUR", 1);
			func_89(&(uParam0->f_83.f_56), uParam0->f_83.f_42, func_26(), 0);
			if (func_90(uParam0))
			{
				func_55(&(uParam0->f_66.f_1), 4);
			}
			break;
		case 4:
			if (func_91(&(uParam0->f_83.f_53)))
			{
				uParam0->f_83.f_51 = 1;
			}
			func_92(uParam0);
			if (!func_93(&(uParam0->f_83.f_53)) && uParam0->f_83.f_51)
			{
				func_94();
				if (uParam0->f_83.f_1 == 1)
				{
					func_55(&(uParam0->f_66.f_1), 5);
				}
				else
				{
					if (CAM::IS_SCREEN_FADED_OUT() == 0 && CAM::IS_SCREEN_FADING_OUT() == 0)
					{
						CAM::DO_SCREEN_FADE_OUT(250);
					}
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						func_95(&(uParam0->f_83.f_56), Global_34);
						func_95(&(uParam0->f_83.f_56), uParam0->f_83.f_42);
						func_55(&(uParam0->f_66.f_1), 5);
					}
				}
			}
			break;
		case 5:
			uParam0->f_83.f_51 = 0;
			if (uParam0->f_83.f_1 == 2)
			{
				func_55(&(uParam0->f_66.f_1), 8);
			}
			else
			{
				uParam0->f_66.f_3 = 11;
				func_87(uParam0->f_66, func_82(uParam0->f_66.f_3));
				if (func_86(uParam0->f_66, uParam0->f_66.f_14))
				{
					func_55(&(uParam0->f_66.f_1), 8);
				}
			}
			break;
		case 6:
			switch (uParam0->f_66.f_3)
			{
				case 10:
					if (func_86(uParam0->f_66, uParam0->f_66.f_12))
					{
						if (uParam0->f_66.f_10)
						{
							uParam0->f_66.f_3 = 4;
							func_87(uParam0->f_66, func_82(uParam0->f_66.f_3));
						}
						else
						{
							uParam0->f_66.f_3 = 11;
							uParam0->f_66.f_13 = uParam0->f_66.f_15;
							func_87(uParam0->f_66, func_82(uParam0->f_66.f_3));
						}
					}
					break;
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
					if (uParam0->f_66.f_10)
					{
						func_55(&(uParam0->f_66.f_1), 8);
					}
					else
					{
						uParam0->f_66.f_3 = 11;
						uParam0->f_66.f_13 = uParam0->f_66.f_16;
						func_87(uParam0->f_66, func_82(uParam0->f_66.f_3));
					}
					break;
				case 11:
					func_87(uParam0->f_66, func_82(uParam0->f_66.f_3));
					if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_66, func_82(uParam0->f_66.f_3)))
					{
						if (func_86(uParam0->f_66, uParam0->f_66.f_13))
						{
							func_55(&(uParam0->f_66.f_1), 8);
						}
					}
					break;
			}
			break;
		case 7:
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				func_74(65536);
			}
			if (!func_23(Global_1296859, 32768))
			{
				func_55(&(uParam0->f_66.f_1), 8);
			}
			break;
		case 8:
			switch (uParam0->f_83.f_1)
			{
				case 0:
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_66))
					{
						if (!uParam0->f_83.f_49)
						{
							ENTITY::SET_ENTITY_HEADING(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), uParam0->f_280);
							func_96(joaat("MOTIONSTATE_WALK"), 1000, 0, 1, 0, uParam0->f_280, 0, 0);
							func_97(0f, 10f);
							uParam0->f_83.f_49 = 1;
						}
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_66, func_26(), uParam0->f_83.f_41);
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_66);
					}
					else
					{
						return true;
					}
					break;
				case 2:
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!func_98(&(uParam0->f_281)))
						{
							func_99(&(uParam0->f_281), 0);
						}
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_66))
						{
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_66, func_26(), uParam0->f_83.f_41);
							ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_66);
						}
						else
						{
							func_25(64);
							func_27(uParam0);
							return true;
						}
					}
					break;
				case 1:
					if (func_86(uParam0->f_66, 0.95f))
					{
						if (func_86(uParam0->f_66, 0.99f))
						{
							if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_66))
							{
								ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_66, func_26(), uParam0->f_83.f_41);
								ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_66);
							}
							else
							{
								if (!uParam0->f_83.f_49)
								{
									ENTITY::SET_ENTITY_HEADING(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), uParam0->f_280);
									func_96(joaat("MOTIONSTATE_WALK"), 2000, 0, 1, 0, uParam0->f_280, 0, 0);
									func_97(0f, 10f);
									uParam0->f_83.f_49 = 1;
								}
								func_25(64);
								func_27(uParam0);
								return true;
							}
						}
					}
					else
					{
						uParam0->f_83.f_49 = 0;
					}
					break;
			}
			break;
	}
	return false;
}

void func_55(var uParam0, int iParam1)
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
	}
}

bool func_56(var uParam0, var uParam1, int iParam2, bool bParam3, var uParam4)
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
	vector3 vVar9;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	var uVar18[205];
	var uVar224;
	var uVar225;
	var uVar226;
	var uVar227;
	int iVar228;
	int iVar229;
	int iVar230;
	struct<32> Var231;
	struct<32> Var264;
	struct<33> Var297;
	struct<33> Var397;
	var uVar497;
	struct<5> Var501;
	struct<2> Var506;
	struct<2> Var511;
	struct<2> Var516;
	struct<2> Var521;
	var uVar523;
	int iVar525;
	int iVar526;
	int iVar527;
	int iVar528;
	struct<2> Var529;
	vector3 vVar531;

	Var231 = -1;
	Var231.f_1 = -1;
	Var231.f_2 = -1;
	Var231.f_4 = 10;
	Var231.f_15 = 4;
	Var231.f_15.f_5 = 4;
	Var231.f_25 = 1;
	Var231.f_28 = 2;
	Var231.f_28.f_1 = -1;
	Var231.f_28.f_1.f_1 = -1;
	Var231.f_31 = joaat("NONE");
	Var231.f_31.f_1 = joaat("NONE");
	Var264 = -1;
	Var264.f_1 = -1;
	Var264.f_2 = -1;
	Var264.f_4 = 10;
	Var264.f_15 = 4;
	Var264.f_15.f_5 = 4;
	Var264.f_25 = 1;
	Var264.f_28 = 2;
	Var264.f_28.f_1 = -1;
	Var264.f_28.f_1.f_1 = -1;
	Var264.f_31 = joaat("NONE");
	Var264.f_31.f_1 = joaat("NONE");
	Var297 = 3;
	Var297.f_1 = -1;
	Var297.f_1.f_1 = -1;
	Var297.f_1.f_2 = -1;
	Var297.f_1.f_4 = 10;
	Var297.f_1.f_15 = 4;
	Var297.f_1.f_15.f_5 = 4;
	Var297.f_1.f_25 = 1;
	Var297.f_1.f_28 = 2;
	Var297.f_1.f_28.f_1 = -1;
	Var297.f_1.f_28.f_1.f_1 = -1;
	Var297.f_1.f_31 = joaat("NONE");
	Var297.f_1.f_31.f_1 = joaat("NONE");
	Var297.f_1.f_33 = -1;
	Var297.f_1.f_33.f_1 = -1;
	Var297.f_1.f_33.f_2 = -1;
	Var297.f_1.f_33.f_4 = 10;
	Var297.f_1.f_33.f_15 = 4;
	Var297.f_1.f_33.f_15.f_5 = 4;
	Var297.f_1.f_33.f_25 = 1;
	Var297.f_1.f_33.f_28 = 2;
	Var297.f_1.f_33.f_28.f_1 = -1;
	Var297.f_1.f_33.f_28.f_1.f_1 = -1;
	Var297.f_1.f_33.f_31 = joaat("NONE");
	Var297.f_1.f_33.f_31.f_1 = joaat("NONE");
	Var297.f_1.f_33.f_33 = -1;
	Var297.f_1.f_33.f_33.f_1 = -1;
	Var297.f_1.f_33.f_33.f_2 = -1;
	Var297.f_1.f_33.f_33.f_4 = 10;
	Var297.f_1.f_33.f_33.f_15 = 4;
	Var297.f_1.f_33.f_33.f_15.f_5 = 4;
	Var297.f_1.f_33.f_33.f_25 = 1;
	Var297.f_1.f_33.f_33.f_28 = 2;
	Var297.f_1.f_33.f_33.f_28.f_1 = -1;
	Var297.f_1.f_33.f_33.f_28.f_1.f_1 = -1;
	Var297.f_1.f_33.f_33.f_31 = joaat("NONE");
	Var297.f_1.f_33.f_33.f_31.f_1 = joaat("NONE");
	Var397 = 3;
	Var397.f_1 = -1;
	Var397.f_1.f_1 = -1;
	Var397.f_1.f_2 = -1;
	Var397.f_1.f_4 = 10;
	Var397.f_1.f_15 = 4;
	Var397.f_1.f_15.f_5 = 4;
	Var397.f_1.f_25 = 1;
	Var397.f_1.f_28 = 2;
	Var397.f_1.f_28.f_1 = -1;
	Var397.f_1.f_28.f_1.f_1 = -1;
	Var397.f_1.f_31 = joaat("NONE");
	Var397.f_1.f_31.f_1 = joaat("NONE");
	Var397.f_1.f_33 = -1;
	Var397.f_1.f_33.f_1 = -1;
	Var397.f_1.f_33.f_2 = -1;
	Var397.f_1.f_33.f_4 = 10;
	Var397.f_1.f_33.f_15 = 4;
	Var397.f_1.f_33.f_15.f_5 = 4;
	Var397.f_1.f_33.f_25 = 1;
	Var397.f_1.f_33.f_28 = 2;
	Var397.f_1.f_33.f_28.f_1 = -1;
	Var397.f_1.f_33.f_28.f_1.f_1 = -1;
	Var397.f_1.f_33.f_31 = joaat("NONE");
	Var397.f_1.f_33.f_31.f_1 = joaat("NONE");
	Var397.f_1.f_33.f_33 = -1;
	Var397.f_1.f_33.f_33.f_1 = -1;
	Var397.f_1.f_33.f_33.f_2 = -1;
	Var397.f_1.f_33.f_33.f_4 = 10;
	Var397.f_1.f_33.f_33.f_15 = 4;
	Var397.f_1.f_33.f_33.f_15.f_5 = 4;
	Var397.f_1.f_33.f_33.f_25 = 1;
	Var397.f_1.f_33.f_33.f_28 = 2;
	Var397.f_1.f_33.f_33.f_28.f_1 = -1;
	Var397.f_1.f_33.f_33.f_28.f_1.f_1 = -1;
	Var397.f_1.f_33.f_33.f_31 = joaat("NONE");
	Var397.f_1.f_33.f_33.f_31.f_1 = joaat("NONE");
	uVar497 = 3;
	Var521 = -1;
	uVar523 = -1;
	iVar525 = 1;
	Var529 = -1;
	Var529.f_1 = -1;
	iVar8 = PLAYER::PLAYER_ID();
	iVar7 = GANG::_0x901E0DC25080C8B9(iVar8);
	iVar2 = func_100(iVar8);
	iVar4 = func_12(joaat("GFH_PLAYER_CAMP"));
	vVar9 = { func_101() };
	bVar12 = false;
	bVar15 = func_73();
	iVar6 = 0;
	func_102(&uVar18, 205, 1);
	*uParam4 = 0;
	if (iVar4 == -1)
	{
		return false;
	}
	if (!func_103(&Var501, uParam0->f_83.f_154, joaat("GFH_PLAYER_CAMP")))
	{
		return false;
	}
	if (!func_104(&Var501))
	{
		return false;
	}
	if (!func_105(&Var501, iVar6))
	{
		return false;
	}
	uVar224 = Var501.f_1;
	if (!func_106(&Var506, uParam0->f_83.f_155))
	{
		return false;
	}
	uVar225 = Var506.f_1;
	if (!func_107(&Var511, uParam0->f_83.f_156))
	{
		return false;
	}
	uVar226 = Var511.f_1;
	uVar227 = Var516.f_1;
	iVar5 = func_108(Var501, 1141833051);
	switch (iParam2)
	{
		case 2:
			if (bParam3)
			{
				iVar526 = joaat("ACCEPT_FAR");
			}
			else
			{
				iVar526 = joaat("ACCEPT_NEAR");
			}
			break;
		case 1:
			iVar526 = joaat("ACCEPT_MISSION");
			break;
	}
	iVar0 = 0;
	while (iVar0 <= 204)
	{
		MISC::_COPY_MEMORY(&Var521, &uVar523, 2);
		MISC::_COPY_MEMORY(&Var231, &Var264, 33);
		Var501.f_1 = uVar224;
		Var506.f_1 = uVar225;
		Var511.f_1 = uVar226;
		Var516.f_1 = uVar227;
		Var529 = { func_109() };
		bVar12 = false;
		bVar13 = false;
		bVar14 = false;
		bVar17 = false;
		iVar527 = -1;
		iVar528 = 0;
		iVar3 = uVar18[iVar0];
		if (iVar3 >= iVar5)
		{
		}
		else if (!func_110(&Var501, iVar3, &Var521))
		{
		}
		else
		{
			iVar527 = func_111(Var521);
			iVar528 = func_112(iVar527);
			Var529 = { func_113(Var521.f_1) };
			switch (iParam2)
			{
				case 2:
					if (bParam3)
					{
						if (!func_114(Var521, 2))
						{
						}
						else
						{
							Jump @1411; //curOff = 1394
							if (func_114(Var521, 2))
							{
							}
							else if (iVar528 != joaat("SELL"))
							{
							}
							else
							{
								if (bParam3)
								{
									if (!func_115(Var529, vVar9))
									{
									}
									else
									{
										bVar13 = true;
										bVar14 = true;
										Jump @1530; //curOff = 1456
										if (bVar15)
										{
											if (iVar528 != joaat("SETUP"))
											{
											}
											else if (!func_114(Var521, 1))
											{
											}
											else
											{
												Jump @1524; //curOff = 1493
												if (iVar528 != joaat("RESUPPLY"))
												{
												}
												else if (func_114(Var521, 1))
												{
												}
												else
												{
													if (!bVar13)
													{
														iVar1 = 0;
														while (iVar1 <= (3 - 1))
														{
															iVar228 = iVar1;
															if (func_117(Var529, vVar9, func_116(iVar228)))
															{
																if (!func_118(Var529, vVar9))
																{
																	bVar12 = true;
																}
																else
																{
																	iVar1++;
																}
																if (!bVar12)
																{
																}
																else if (Var297[iVar228 /*33*/].f_2.f_1 != 0)
																{
																}
																else
																{
																	bVar14 = func_119(iParam2, iVar228);
																	if (!func_120(&Var506, &Var521, &Var231, 1))
																	{
																	}
																	else
																	{
																		iVar230 = 112;
																		if (func_121(&Var231, iVar3, &uVar497, iVar7, iVar2, iVar4, &iVar229, iVar230, -1))
																		{
																			if (iVar229 == 14)
																			{
																			}
																			else
																			{
																				iVar230 = 536877168;
																				if (func_121(&Var231, iVar3, &uVar497, iVar7, iVar2, iVar4, &iVar229, iVar230, -1))
																				{
																					Jump @1898; //curOff = 1733
																				}
																				else
																				{
																					bVar17 = true;
																				}
																				vVar531 = { func_122(uParam0->f_83.f_156, iVar526, joaat("CRIPPS"), Var231.f_4[6], &bVar16, -1, 1) };
																				if (bVar16)
																				{
																				}
																				else
																				{
																					uParam0->f_66.f_4 = func_123(joaat("CRIPPS"), joaat("GFH_PLAYER_CAMP"), iVar525, Var231.f_4[7], uParam0->f_83.f_157);
																					if (bVar14 && !bVar17)
																					{
																						uParam0->f_83.f_53 = { vVar531 };
																						MISC::_COPY_MEMORY(uParam1, &Var231, 33);
																						return true;
																					}
																					if (bVar17)
																					{
																						MISC::_COPY_MEMORY(&(Var397[iVar228 /*33*/]), &Var231, 33);
																					}
																					else
																					{
																						MISC::_COPY_MEMORY(&(Var297[iVar228 /*33*/]), &Var231, 33);
																					}
																				}
																			}
																			iVar0++;
																			MISC::_COPY_MEMORY(&Var231, &Var264, 33);
																			iVar0 = 0;
																			while (iVar0 <= (3 - 1))
																			{
																				if (Var297[iVar0 /*33*/].f_2.f_1 == 0)
																				{
																				}
																				else
																				{
																					MISC::_COPY_MEMORY(&Var231, &(Var297[iVar0 /*33*/]), 33);
																				}
																				else
																				{
																					iVar0++;
																				}
																			}
																			if (Var231.f_2.f_1 == 0)
																			{
																				iVar0 = 0;
																				while (iVar0 <= (3 - 1))
																				{
																					if (Var397[iVar0 /*33*/].f_2.f_1 == 0)
																					{
																					}
																					else
																					{
																						MISC::_COPY_MEMORY(&Var231, &(Var397[iVar0 /*33*/]), 33);
																						*uParam4 = 1;
																					}
																					else
																					{
																						iVar0++;
																					}
																				}
																				if (Var231.f_2.f_1 == 0)
																				{
																					return false;
																				}
																			}
																			uParam0->f_83.f_53 = { func_122(uParam0->f_83.f_156, iVar526, joaat("CRIPPS"), Var231.f_4[6], &bVar16, -1, 1) };
																			if (bVar16)
																			{
																				return false;
																			}
																			MISC::_COPY_MEMORY(uParam1, &Var231, 33);
																			return true;
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
					default:
						break;
			}
		}
	}
}

bool func_57(var uParam0, int iParam1)
{
	return func_125(uParam0, func_124(iParam1, 1), 1);
}

void func_58(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_59(int iParam0, int iParam1, var uParam2, var uParam3, struct<2> Param4, int iParam6, var uParam7, var uParam8, var uParam9, int iParam10)
{
	struct<28> Var0;
	var uVar31;
	vector3 vVar32;
	var uVar35;

	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_7.f_1 = -1;
	Var0.f_10 = 255;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = 7;
	Var0.f_19.f_1 = 255;
	Var0.f_19.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_27.f_1 = -1;
	uVar31 = func_126(0, 8);
	Var0.f_6 = iParam0;
	Var0.f_5 = iParam1;
	Var0.f_11 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	Var0.f_4 = 3;
	Var0.f_9 = uParam3;
	Var0.f_14 = uParam2;
	Var0.f_7 = { Param4 };
	Var0.f_13 = iParam10;
	MISC::_COPY_MEMORY(&(Var0.f_27), &iParam6, 4);
	vVar32 = { func_127(iParam0) };
	uVar35 = func_128(iParam0);
	func_129(&(Var0.f_19), Var0.f_11, vVar32, uVar35);
	func_130(&Var0, uVar31);
}

int func_60(var uParam0, int iParam1, int iParam2)
{
	struct<2> Var0;

	Var0.f_1 = -1;
	return func_131(uParam0, iParam1, iParam2, &Var0);
}

void func_61(var uParam0, int iParam1)
{
	uParam0->f_83.f_2 = iParam1;
}

void func_62(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 241)
	{
		iVar1 = func_132(iVar0, 1);
		DATAFILE::_DATAFILE_REGISTER_QUERY(uParam0, iVar1, func_133(iVar1));
		iVar0++;
	}
}

void func_63(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 48)
	{
		iVar1 = func_134(iVar0, 1);
		DATAFILE::_DATAFILE_REGISTER_QUERY(uParam0, iVar1, func_135(iVar1));
		iVar0++;
	}
}

void func_64(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 11)
	{
		iVar1 = func_136(iVar0, 1);
		DATAFILE::_DATAFILE_REGISTER_QUERY(uParam0, iVar1, func_137(iVar1));
		iVar0++;
	}
}

void func_65(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 57)
	{
		iVar1 = func_138(iVar0, 1);
		DATAFILE::_DATAFILE_REGISTER_QUERY(uParam0, iVar1, func_139(iVar1));
		iVar0++;
	}
}

void func_66(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_67(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = Global_1139381.f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_140(iParam0);
	uParam2->f_4 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_68(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	*uParam2 = iParam1;
	uParam0->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam0);
	uParam0->f_2 = -2140901307;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, uParam0))
	{
		uParam2->f_2 = uVar0;
	}
	uParam0->f_2 = -2140901307;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_11), uParam0);
	uParam0->f_2 = 1292053410;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_19), uParam0);
	uParam0->f_2 = 1234058424;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_3), uParam0);
}

bool func_69()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

void func_70(int iParam0)
{
	func_141(iParam0);
}

void func_71(char* sParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;

	bVar0 = false;
	bVar1 = func_142();
	if (func_23(Global_1296859, 8192) && !bVar1)
	{
		if (!func_143(GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))))
		{
			if (func_73())
			{
				sParam0 = func_144(0);
			}
			else
			{
				sParam0 = func_144(1);
				bVar0 = true;
			}
			if (!func_23(Global_1296859, 536870912))
			{
				iParam1 = func_145(sParam0, 10000, 0, 0, 0, 1);
				if (func_146(iParam1) && bVar0)
				{
					func_74(536870912);
				}
			}
		}
		else
		{
			sParam0 = func_144(2);
			if (!func_146(iParam1))
			{
				iParam1 = func_145(sParam0, 10000, 0, 0, 0, 1);
			}
		}
	}
}

Vector3 func_72(int iParam0)
{
	if (!func_19(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return Global_1131196[iParam0 /*27*/].f_20;
}

bool func_73()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(1324907014))
	{
		return true;
	}
	if (!UNLOCK::_UNLOCK_IS_VISIBLE(1324907014))
	{
		return true;
	}
	return false;
}

void func_74(int iParam0)
{
	if (!func_42(Global_1134390[Global_1296859 /*83*/].f_74, iParam0))
	{
		func_147(&(Global_1134390[Global_1296859 /*83*/].f_74), iParam0);
		Global_1134349.f_32 = Global_1134390[Global_1296859 /*83*/].f_74;
	}
}

bool func_75(int iParam0, int iParam1)
{
	if (!func_19(iParam0))
	{
		return false;
	}
	return func_42(Global_1132288.f_1[iParam0 /*63*/].f_61, iParam1);
}

bool func_76(int iParam0)
{
	return (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && func_23(iParam0, 1));
}

void func_77(var uParam0)
{
	vector3 vVar0[24];
	int iVar3;
	int iVar4;

	if (!uParam0->f_83.f_45)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_83.f_42))
		{
			if (func_23(Global_1296859, 131072))
			{
				iVar3 = Global_17411.f_2763[29];
				func_148(&iVar3, 0, 0, 12, 0, 0, 0, 0);
				if (func_150(func_149(), iVar3, 1))
				{
					StringCopy(&cVar0, "TRAD_BS_BUTCFT", 24);
				}
				else
				{
					StringCopy(&cVar0, "TRAD_BS_BUTCINT", 24);
				}
				if (func_151(uParam0, cVar0))
				{
					func_24(131072);
				}
			}
			else if (func_23(Global_1296859, 33554432))
			{
				StringCopy(&cVar0, "TRAD_BS_FAIL", 24);
				if (func_151(uParam0, cVar0))
				{
					func_24(33554432);
				}
			}
			else if (func_23(Global_1296859, 16777216))
			{
				StringCopy(&cVar0, "TRAD_BS_PASS", 24);
				if (func_151(uParam0, cVar0))
				{
					func_24(16777216);
				}
			}
			else if (func_23(Global_1296859, 67108864))
			{
				func_24(67108864);
				StringCopy(&cVar0, "TRAD_BS_PTSKIP", 24);
				func_151(uParam0, cVar0);
			}
			else if (func_23(Global_1296859, 1048576))
			{
				func_24(1048576);
				StringCopy(&cVar0, "TRAD_BS_SUPHIGH", 24);
				func_151(uParam0, cVar0);
			}
			else if (func_23(Global_1296859, 2097152))
			{
				func_24(2097152);
				StringCopy(&cVar0, "TRAD_BS_SUPLOW", 24);
				func_151(uParam0, cVar0);
			}
			else if (func_23(Global_1296859, -2147483648))
			{
				func_24(-2147483648);
				if (func_23(Global_1296859, 4194304))
				{
					func_24(4194304);
				}
				StringCopy(&cVar0, "CRP07_PA_DONATE", 24);
				func_151(uParam0, cVar0);
			}
			else if (func_23(Global_1296859, 4194304))
			{
				func_24(4194304);
				StringCopy(&cVar0, "TRAD_BS_HOHIGH", 24);
				func_151(uParam0, cVar0);
			}
			else if (func_23(Global_1296859, 8388608))
			{
				func_24(8388608);
				StringCopy(&cVar0, "TRAD_BS_HOLOW", 24);
				func_151(uParam0, cVar0);
			}
			else if (func_23(Global_1296859, 524288))
			{
				func_24(524288);
				StringCopy(&cVar0, "TRAD_BS_IDLE", 24);
				if (!GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
				{
					iVar4 = GANG::_0x4BE6C13A45CCA8EC(Global_1296859.f_15);
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4))
					{
						if (Global_1134349.f_14 == 2 && func_23(iVar4, 8))
						{
							StringCopy(&cVar0, "TRAD_GN_RENGANG", 24);
						}
						else if (Global_1134349.f_14 == 3 && func_152(iVar4) >= 25)
						{
							StringCopy(&cVar0, "TRAD_GN_SLNGANG", 24);
						}
					}
				}
				func_151(uParam0, cVar0);
			}
		}
	}
}

void func_78(var uParam0)
{
	if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_277) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_83.f_40))
	{
		if (PED::_IS_PED_USING_SCENARIO_POINT(uParam0->f_83.f_40, uParam0->f_277) && func_153(uParam0->f_83.f_40, -76381094))
		{
			uParam0->f_66.f_10 = 1;
		}
		else
		{
			uParam0->f_66.f_10 = 0;
		}
	}
}

void func_79(var uParam0, var uParam1, var uParam2)
{
	if ((!func_23(Global_1296859, 32768) && func_23(Global_1296859, 65536)) && !*uParam2)
	{
		if (*uParam1 < 6 && !*uParam0)
		{
			if (!func_23(Global_1296859, 268435456))
			{
				func_74(268435456);
				*uParam2 = 1;
			}
		}
	}
	if (func_23(Global_1296859, 268435456) && *uParam1 < 6)
	{
		func_55(uParam1, 6);
	}
}

void func_80(var uParam0)
{
	var uVar0;

	func_154(11, uParam0->f_279, &uVar0, &(uParam0->f_280), 0);
	uParam0->f_280 = (uParam0->f_280 - 90f);
}

char* func_81(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@mp@trader@butcher_shop@butcher_shop";
		default:
			break;
	}
	return "FAIL";
}

char* func_82(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "pl_ig1_jobbrief";
		case 2:
			return "pl_ig2_jobbrief";
		case 3:
			return "pl_ig3_jobbrief";
		case 5:
			return "pl_idle_variation_a";
		case 6:
			return "pl_idle_variation_b";
		case 7:
			return "pl_idle_variation_c";
		case 8:
			return "pl_idle_variation_d";
		case 9:
			return "pl_idle_variation_e";
		case 4:
			return "pl_idle_loop";
		case 10:
			return "pl_enter_left";
		case 11:
			return "pl_exit_left";
		case 12:
			return "EXIT_SCENARIO";
		default:
			break;
	}
	return "FAIL";
}

bool func_83(var uParam0, char* sParam1, char* sParam2)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, 2, sParam2, false, true);
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam0, true, false) && !ANIMSCENE::_IS_ANIM_SCENE_LOADING(*uParam0, true))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
		return false;
	}
	return (ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam0, true, false) && ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(*uParam0, false));
}

int func_84(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	iVar1 = GANG::_0x4BE6C13A45CCA8EC(iVar0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		return 0;
	}
	iVar2 = func_155(iVar1);
	iVar3 = func_157(func_156(iVar1), iVar2, 0, -1);
	iVar4 = func_158(iVar3);
	iVar5 = func_159(120);
	STREAMING::REQUEST_MODEL(iVar5, false);
	if (!STREAMING::HAS_MODEL_LOADED(iVar5))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_83.f_42))
	{
		uParam0->f_83.f_42 = PED::CREATE_PED(iVar5, 0f, 0f, 0f, 0f, false, false, true, true);
	}
	func_160(uParam0->f_83.f_42, iVar4);
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_83.f_42) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_83.f_42))
	{
		uParam0->f_83.f_41 = func_161(uParam0->f_83.f_42);
		return 1;
	}
	return 0;
}

int func_85(var uParam0)
{
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_66, false))
	{
		NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(uParam0->f_83.f_39, false, false, 256);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_66, func_162(uParam0), 0f, 0f, (TASK::_GET_SCENARIO_POINT_HEADING(uParam0->f_277, true) + 90f), 2);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_66, func_26(), uParam0->f_83.f_41, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_66);
		return 0;
	}
	return 1;
}

bool func_86(int iParam0, float fParam1)
{
	float fVar0;

	fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0);
	if (fVar0 > fParam1)
	{
		return true;
	}
	return false;
}

void func_87(int iParam0, char* sParam1)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		if (!ANIMSCENE::_0x1F0E401031E20146(iParam0, sParam1) && !ANIMSCENE::_0x0DF57F86FE71DBE5(iParam0, sParam1))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0, sParam1);
		}
		if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1) && !ANIMSCENE::_0x1F0E401031E20146(iParam0, sParam1))
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0, sParam1, true);
		}
	}
}

bool func_88(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 13);
	iVar1 = iVar0;
	if (func_163(iVar1))
	{
		uParam0->f_66.f_3 = iVar1;
		return true;
	}
	return false;
}

void func_89(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_164(uParam0, iParam1, sParam2))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1)))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam1, bParam3);
			}
		}
	}
}

bool func_90(var uParam0)
{
	if (!uParam0->f_83.f_45)
	{
		return false;
	}
	if (!func_165(&(uParam0->f_83.f_56), uParam0->f_83.f_53, 0, -1, 1, 0))
	{
		return false;
	}
	return true;
}

bool func_91(char* sParam0)
{
	if (AUDIO::_0xD89504D9D7D5057D(sParam0) && AUDIO::IS_SCRIPTED_CONVERSATION_LOADED(sParam0))
	{
		AUDIO::START_PRELOADED_CONVERSATION(sParam0);
		return true;
	}
	return false;
}

void func_92(var uParam0)
{
	switch (uParam0->f_66.f_4)
	{
		case -1:
			if (uParam0->f_66.f_3 != 1)
			{
				uParam0->f_66.f_3 = 1;
			}
			break;
		case 9:
			if (uParam0->f_66.f_3 != 1)
			{
				uParam0->f_66.f_3 = 1;
			}
			break;
		case 10:
			if (uParam0->f_66.f_3 != 2)
			{
				uParam0->f_66.f_3 = 2;
			}
			break;
		case 11:
			if (uParam0->f_66.f_3 != 3)
			{
				uParam0->f_66.f_3 = 3;
			}
			break;
	}
	func_87(uParam0->f_66, func_82(uParam0->f_66.f_3));
}

bool func_93(var uParam0)
{
	if (AUDIO::_0xD89504D9D7D5057D(uParam0) && AUDIO::_0x1ECC76792F661CF5(uParam0))
	{
		return true;
	}
	return false;
}

void func_94()
{
	if (func_23(Global_1296859, 512))
	{
		func_24(512);
	}
	if (func_23(Global_1296859, 1024))
	{
		func_24(1024);
	}
	if (func_23(Global_1296859, 2048))
	{
		func_24(2048);
	}
}

int func_95(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_97)
	{
		if ((*uParam0)[iVar0 /*4*/] == iParam1)
		{
			(*uParam0)[iVar0 /*4*/] = 0;
			StringCopy(&((uParam0[iVar0 /*4*/])->f_1), "", 24);
			if (iVar0 != (uParam0->f_97 - 1))
			{
				(*uParam0)[iVar0 /*4*/] = (*uParam0)[(uParam0->f_97 - 1) /*4*/];
				(uParam0[iVar0 /*4*/])->f_1 = { (uParam0[(uParam0->f_97 - 1) /*4*/])->f_1 };
				(*uParam0)[(uParam0->f_97 - 1) /*4*/] = 0;
				StringCopy(&((uParam0[(uParam0->f_97 - 1) /*4*/])->f_1), "", 24);
			}
			uParam0->f_97 = (uParam0->f_97 - 1);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_96(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	float fVar0;

	if (Global_1940258.f_6)
	{
		return;
	}
	fVar0 = 1f;
	switch (iParam0)
	{
		case joaat("MOTIONSTATE_IDLE"):
		case joaat("MOTIONSTATE_CROUCH_IDLE"):
			fVar0 = 0f;
			break;
		case -1415276238:
		case 1823606944:
			fVar0 = 1.5f;
			break;
		case joaat("MOTIONSTATE_RUN"):
		case joaat("MOTIONSTATE_CROUCH_RUN"):
			fVar0 = 2f;
			break;
		case joaat("MOTIONSTATE_SPRINT"):
			fVar0 = 3f;
			break;
		case joaat("MOTIONSTATE_WALK"):
		case joaat("MOTIONSTATE_CROUCH_WALK"):
			break;
	}
	PED::FORCE_PED_MOTION_STATE(Global_34, iParam0, bParam2, iParam3, false);
	if (bParam4)
	{
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), fVar0, iParam1, ENTITY::GET_ENTITY_HEADING(Global_34), bParam6, bParam7);
	}
	else
	{
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), fVar0, iParam1, fParam5, bParam6, bParam7);
	}
}

void func_97(float fParam0, float fParam1)
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam0, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam1, 1f);
}

bool func_98(var uParam0)
{
	return func_166(*uParam0, 1);
}

void func_99(var uParam0, bool bParam1)
{
	if (bParam1 || !func_98(uParam0))
	{
		func_167(uParam0);
	}
}

int func_100(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_168(iParam0);
	iVar1 = func_169(iParam0, iVar0);
	if (iVar0 != iVar1)
	{
		if (func_170(iVar1))
		{
			func_171(iVar1);
			iVar0 = iVar1;
		}
	}
	return iVar0;
}

Vector3 func_101()
{
	int iVar0;

	iVar0 = func_172(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	return func_72(iVar0);
}

void func_102(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	if (bParam2)
	{
		iVar2 = 0;
		while (iVar2 <= (iParam1 - 1))
		{
			(*uParam0)[iVar2] = iVar2;
			iVar2++;
		}
	}
	iVar2 = (iParam1 - 1);
	iVar2 = (iParam1 - 1);
	while (iVar2 >= 0)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar2);
		uVar0 = (*uParam0)[iVar2];
		(*uParam0)[iVar2] = (*uParam0)[iVar1];
		(*uParam0)[iVar1] = uVar0;
		iVar2 = (iVar2 + -1);
	}
}

bool func_103(var uParam0, var uParam1, int iParam2)
{
	if (!func_173(uParam0, uParam1))
	{
		return false;
	}
	uParam0->f_2 = 1635370648;
	uParam0->f_3 = iParam2;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

bool func_104(var uParam0)
{
	uParam0->f_2 = 56746299;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

bool func_105(var uParam0, int iParam1)
{
	uParam0->f_2 = 1915534289;
	uParam0->f_3 = iParam1;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

bool func_106(var uParam0, var uParam1)
{
	var uVar0;

	if (!DATAFILE::_0x7907969497EA92F5(uParam1))
	{
		return false;
	}
	if (!DATAFILE::_0x603AC35FD4602C76(uParam1))
	{
		return false;
	}
	MISC::_COPY_MEMORY(uParam0, &uVar0, 5);
	*uParam0 = uParam1;
	return true;
}

bool func_107(var uParam0, var uParam1)
{
	if (!func_174(uParam0, uParam1))
	{
		return false;
	}
	uParam0->f_2 = -232245152;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

int func_108(vector3 vParam0, var uParam3, var uParam4, int iParam5)
{
	vParam0.f_2 = iParam5;
	return DATAFILE::_DATAFILE_GET_NUM_NODES(&vParam0);
}

struct<2> func_109()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

bool func_110(var uParam0, int iParam1, int iParam2)
{
	if (!func_175(uParam0, iParam1))
	{
		return false;
	}
	if (!func_176(uParam0, iParam2))
	{
		return false;
	}
	return true;
}

int func_111(int iParam0)
{
	return Global_1109804.f_5737[iParam0 /*5*/];
}

var func_112(int iParam0)
{
	return func_177(iParam0);
}

struct<2> func_113(int iParam0)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_178(iParam0, 2) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_178(iParam0, 7) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_178(iParam0, 5) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_178(iParam0, 6) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_178(iParam0, 8) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_178(iParam0, 3) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_178(iParam0, 4) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	return func_109();
}

bool func_114(int iParam0, int iParam1)
{
	return func_179(&(Global_1109804.f_5737[iParam0 /*5*/].f_2), iParam1);
}

bool func_115(struct<2> Param0, vector3 vParam2)
{
	int iVar0;
	int iVar1;

	func_180(Param0, &iVar0, &iVar1);
	return (func_181(iVar0, iVar1, vParam2) && func_182(iVar0, iVar1, vParam2));
}

float func_116(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1901947.f_308.f_56;
		case 1:
			return Global_1901947.f_308.f_57;
		case 2:
			return Global_1901947.f_308.f_58;
		default:
			break;
	}
	return -1f;
}

bool func_117(struct<2> Param0, vector3 vParam2, float fParam5)
{
	int iVar0;
	int iVar1;

	if (fParam5 < 0f)
	{
		return false;
	}
	func_180(Param0, &iVar0, &iVar1);
	return BUILTIN::VDIST(vParam2, func_183(iVar0, iVar1)) <= fParam5;
}

bool func_118(struct<2> Param0, vector3 vParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;
	vector3 vVar3;
	int iVar6;

	func_180(Param0, &iVar0, &iVar1);
	fVar2 = (BUILTIN::VDIST(vParam2, func_183(iVar0, iVar1)) / 2f);
	vVar3 = { func_184(vParam2, func_183(iVar0, iVar1), fVar2) };
	iVar6 = ZONE::_GET_WATER_MAP_ZONE_AT_COORDS(vVar3);
	if (iVar6 == joaat("WATER_FLAT_IRON_LAKE"))
	{
		return true;
	}
	return false;
}

bool func_119(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return iParam1 == 1;
		case 1:
			return iParam1 == 0;
		default:
			break;
	}
	return false;
}

int func_120(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (!func_185(*uParam0, &(uParam0->f_1), 33417155, 0, 0, 1))
	{
		return 0;
	}
	if (!func_185(*uParam0, &(uParam0->f_1), 12932893, func_186(*iParam1), 0, 1))
	{
		return 0;
	}
	if (!func_185(*uParam0, &(uParam0->f_1), -2017210649, iParam1->f_1, 0, 1))
	{
		return 0;
	}
	MISC::_COPY_MEMORY(&(uParam2->f_2), iParam1, 2);
	return func_187(*uParam0, uParam2, iParam3);
}

bool func_121(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_111(uParam0->f_2);
	iVar1 = func_188(iVar0);
	if (iParam8 == -1)
	{
		iVar2 = func_189(iParam5);
	}
	else
	{
		iVar2 = iParam8;
	}
	*iParam6 = 0;
	*iParam6 = func_190(uParam0);
	if (*iParam6 != 0)
	{
		return true;
	}
	*iParam6 = func_191(iVar2, iParam7);
	if (*iParam6 != 0)
	{
		return true;
	}
	*iParam6 = func_192(uParam0, iParam7);
	if (*iParam6 != 0)
	{
		return true;
	}
	*iParam6 = func_193(uParam0, iParam1, uParam2, iParam7);
	if (*iParam6 != 0)
	{
		return true;
	}
	*iParam6 = func_194(uParam0, iParam7);
	if (*iParam6 != 0)
	{
		return true;
	}
	*iParam6 = func_195(iVar2, iParam7);
	if (*iParam6 != 0)
	{
		return true;
	}
	*iParam6 = func_196(uParam0, iVar2, iParam3, iParam7);
	if (*iParam6 != 0)
	{
		return true;
	}
	*iParam6 = func_197(uParam0, iParam3, iParam7);
	if (*iParam6 != 0)
	{
		return true;
	}
	*iParam6 = func_198(iParam3, iParam4, iParam7);
	if (*iParam6 != 0)
	{
		return true;
	}
	*iParam6 = func_199(iParam3);
	if (*iParam6 != 0)
	{
		return true;
	}
	*iParam6 = func_200(iParam3, uParam0, iParam7);
	if (*iParam6 != 0)
	{
		return true;
	}
	*iParam6 = func_201(uParam0, iParam3, iParam7);
	if (*iParam6 != 0)
	{
		return true;
	}
	*iParam6 = func_202(uParam0, iParam7);
	if (*iParam6 != 0)
	{
		return true;
	}
	*iParam6 = func_203(uParam0, iParam7);
	if (*iParam6 != 0)
	{
		return true;
	}
	*iParam6 = func_204(iParam3, iParam7);
	if (*iParam6 != 0)
	{
		return true;
	}
	switch (iVar1)
	{
		case 2:
			*iParam6 = func_205(uParam0, iParam7, iParam3, iVar2, iParam5);
			break;
		case 1:
			*iParam6 = func_206(uParam0, iParam7);
			break;
		case 0:
			*iParam6 = func_207(uParam0, iParam7, iParam3);
			break;
		default:
			*iParam6 = 45;
			break;
	}
	return *iParam6 != 0;
}

Vector3 func_122(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	var uVar5;
	var uVar13;
	vector3 vVar21;

	if (iParam3 == 0)
	{
		*bParam4 = 1;
		return vVar2;
	}
	if (!func_208(&vVar21, uParam0, iParam2, iParam3, iParam1))
	{
		*bParam4 = 1;
		return vVar2;
	}
	vVar21.f_2 = 2019543834;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, &vVar21);
	DATAFILE::_DATAFILE_GET_STRING(&uVar13, &vVar21);
	if (func_209(iParam5) && func_211(&vVar21, func_210(iParam5)))
	{
		vVar21.f_2 = 2019543834;
		DATAFILE::_DATAFILE_GET_HASH(&iVar1, &vVar21);
		DATAFILE::_DATAFILE_GET_STRING(&uVar5, &vVar21);
	}
	if (iVar0 == 0 && iVar1 == 0)
	{
		*bParam4 = 1;
		return vVar2;
	}
	*bParam4 = 0;
	return func_213(func_212(iVar1 != 0, &uVar5, &uVar13));
}

int func_123(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	int iVar0;

	iVar0 = func_214(iParam0, iParam1, iParam2, uParam3, uParam4);
	return func_215(iVar0);
}

int func_124(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("MULTIPLE_OBJECTIVES_2"):
			return 9;
		case -2001405328:
			return 5;
		case joaat("MULTIPLE_OBJECTIVES_3"):
			return 10;
		case joaat("MULTIPLE_OBJECTIVES_4"):
			return 11;
		case -1348549877:
			return 12;
		case joaat("REQUIRES_POSSE_TARGET"):
			return 16;
		case joaat("SETUP_MISSION_1"):
			return 18;
		case -1040947274:
			return 13;
		case joaat("NO_PVP"):
			return 7;
		case -775927147:
			return 4;
		case joaat("SETUP_MISSION_0"):
			return 17;
		case joaat("INSTANCED"):
			return 1;
		case joaat("HAS_FLOW_FADE"):
			return 3;
		case 1042373141:
			return 6;
		case 1803795142:
			return 14;
		case joaat("MULTI_GANG"):
			return 0;
		case joaat("HAS_INTRO_CUTSCENE"):
			return 2;
		case joaat("MULTIPLE_OBJECTIVES_1"):
			return 8;
		case joaat("REQUIRES_PLAYER_TARGET"):
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

bool func_125(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

var func_126(int iParam0, int iParam1)
{
	return func_216(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("VOLCYLINDER"), iParam0, iParam1);
}

Vector3 func_127(int iParam0)
{
	return Global_1116202[iParam0 /*42*/].f_7.f_1;
}

var func_128(int iParam0)
{
	return Global_1116202[iParam0 /*42*/].f_7;
}

void func_129(var uParam0, var uParam1, vector3 vParam2, var uParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4[7];
	int iVar12;

	iVar2 = 0;
	while (iVar2 <= 31)
	{
		iVar12 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar12))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar12))
		{
		}
		else if (!GANG::_0x9BE7DCB22D32CCBE(uParam1, iVar12))
		{
		}
		else if (GANG::_0x424B17A7DC5C90BC(iVar12))
		{
			(*uParam0)[0] = iVar12;
			Jump @159; //curOff = 85
		}
		else if (func_217(iVar12, vParam2, uParam5))
		{
			if (iVar0 + 1 < 7)
			{
				(*uParam0)[(1 + iVar0)] = iVar12;
				iVar0++;
			}
		}
		else if (iVar1 < 7)
		{
			iVar4[iVar1] = iVar2;
			iVar1++;
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 <= (iVar1 - 1))
	{
		iVar3 = iVar4[iVar2];
		iVar12 = PLAYER::INT_TO_PLAYERINDEX(iVar3);
		if (iVar0 + 1 < 7)
		{
			(*uParam0)[(1 + iVar0)] = iVar12;
			iVar0++;
		}
		iVar2++;
	}
}

void func_130(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 9;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 31, 33, &uParam1);
}

int func_131(var uParam0, int iParam1, int iParam2, var uParam3)
{
	var uVar0;

	if (!func_218(uParam0, &uVar0, iParam2, 0, 0, *uParam3))
	{
		return 0;
	}
	func_219(iParam1, iParam2, *uParam0, uParam0->f_2, *uParam3, PLAYER::PLAYER_ID(), 0, 0);
	return 1;
}

int func_132(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1008523256;
		case 1:
			return 1141833051;
		case 2:
			return 830686115;
		case 3:
			return 1371816784;
		case 4:
			return -279039872;
		case 5:
			return -347364204;
		case 6:
			return -1591356522;
		case 7:
			return -1481147674;
		case 8:
			return 1071445036;
		case 9:
			return 1393764479;
		case 10:
			return 416600242;
		case 11:
			return 1774314862;
		case 12:
			return 1624339917;
		case 13:
			return -702452069;
		case 14:
			return -1697453237;
		case 15:
			return 935565856;
		case 16:
			return 164389658;
		case 17:
			return -3633128;
		case 18:
			return 568979268;
		case 19:
			return -742165699;
		case 20:
			return 1241889488;
		case 21:
			return -1450969535;
		case 22:
			return 135103436;
		case 23:
			return -1562463744;
		case 24:
			return -569428078;
		case 25:
			return 1034986020;
		case 26:
			return 1282514153;
		case 27:
			return 699547230;
		case 28:
			return -1188075274;
		case 29:
			return -307865396;
		case 30:
			return -340432202;
		case 31:
			return 891000470;
		case 32:
			return -1785915344;
		case 33:
			return 95610146;
		case 34:
			return -175154863;
		case 35:
			return -779715008;
		case 36:
			return 966721050;
		case 37:
			return 1773322216;
		case 38:
			return 965995012;
		case 39:
			return -2106942431;
		case 40:
			return 1772846069;
		case 41:
			return -1782208300;
		case 42:
			return 466723622;
		case 43:
			return -155807419;
		case 44:
			return 369580868;
		case 45:
			return 1862983441;
		case 46:
			return -1462149998;
		case 47:
			return 1097539553;
		case 48:
			return -1479366685;
		case 49:
			return 1475807964;
		case 50:
			return 504293064;
		case 51:
			return -678729477;
		case 52:
			return 1635370648;
		case 53:
			return 741518720;
		case 54:
			return -1021330426;
		case 55:
			return -879824208;
		case 56:
			return 56746299;
		case 57:
			return 1915534289;
		case 58:
			return 1089670230;
		case 59:
			return 1179867258;
		case 60:
			return -328876172;
		case 61:
			return 824485797;
		case 62:
			return -146546566;
		case 63:
			return -733684727;
		case 64:
			return 2080739522;
		case 65:
			return 1250184037;
		case 66:
			return 1142477451;
		case 67:
			return -750441052;
		case 68:
			return -467924289;
		case 69:
			return 1034671917;
		case 70:
			return -1442893430;
		case 71:
			return 957547265;
		case 72:
			return 1781322358;
		case 73:
			return 1219330971;
		case 74:
			return -2110119917;
		case 75:
			return 709191463;
		case 76:
			return 2038044382;
		case 77:
			return 1062084355;
		case 78:
			return -690423049;
		case 79:
			return 202835363;
		case 80:
			return -293519133;
		case 81:
			return 592206679;
		case 82:
			return -816725755;
		case 83:
			return -255537257;
		case 84:
			return -770038426;
		case 85:
			return -1940881994;
		case 86:
			return -1099377300;
		case 87:
			return -1298580726;
		case 88:
			return -1838764391;
		case 89:
			return 1537295589;
		case 90:
			return -26782235;
		case 91:
			return 1465961145;
		case 92:
			return -150140702;
		case 93:
			return 925148616;
		case 94:
			return -586196356;
		case 95:
			return -989277348;
		case 96:
			return -1045571630;
		case 97:
			return -1028785813;
		case 98:
			return -944306928;
		case 99:
			return -1799624227;
		case 100:
			return -1413825410;
		case 101:
			return -1083767826;
		case 102:
			return 1392091586;
		case 103:
			return 1269397350;
		case 104:
			return -1808878008;
		case 105:
			return 696574474;
		case 106:
			return 1280983896;
		case 107:
			return -473520653;
		case 108:
			return -1142735215;
		case 109:
			return -662059387;
		case 110:
			return 1196324698;
		case 111:
			return 1781673553;
		case 112:
			return 1091365066;
		case 113:
			return -346602855;
		case 114:
			return -642855470;
		case 115:
			return -1294273068;
		case 116:
			return -1181812906;
		case 117:
			return 2016458991;
		case 118:
			return 200716381;
		case 119:
			return -1845137425;
		case 120:
			return 787092883;
		case 121:
			return 888483612;
		case 122:
			return 2063500509;
		case 123:
			return -1570130076;
		case 124:
			return 262797908;
		case 125:
			return 2012255077;
		case 126:
			return 1499632451;
		case 127:
			return -236880317;
		case 128:
			return 1211454712;
		case 129:
			return -626189620;
		case 130:
			return -1438489730;
		case 131:
			return -479537578;
		case 132:
			return -1463903719;
		case 133:
			return 1203863120;
		case 134:
			return -351785645;
		case 135:
			return -895584822;
		case 136:
			return -1723095449;
		case 137:
			return 1915528396;
		case 138:
			return -1266254117;
		case 139:
			return -1614496179;
		case 140:
			return -1490596352;
		case 141:
			return -1047907201;
		case 142:
			return -1202322374;
		case 143:
			return 157340468;
		case 144:
			return 2064288322;
		case 145:
			return -2116748653;
		case 146:
			return 155183949;
		case 147:
			return 825663396;
		case 148:
			return 976967808;
		case 149:
			return 590738432;
		case 150:
			return 1708896805;
		case 151:
			return 2035135006;
		case 152:
			return 334691246;
		case 153:
			return -835870147;
		case 154:
			return -1267680873;
		case 155:
			return 1153433438;
		case 156:
			return 1489424180;
		case 157:
			return -904522836;
		case 158:
			return 1611867516;
		case 159:
			return -1119986744;
		case 160:
			return -941621037;
		case 161:
			return 101270175;
		case 162:
			return -875013288;
		case 163:
			return -1541719198;
		case 164:
			return 842085562;
		case 165:
			return 1887179278;
		case 166:
			return 1468744908;
		case 167:
			return -1248823782;
		case 168:
			return 1154537543;
		case 169:
			return -1244566857;
		case 170:
			return -1255654531;
		case 171:
			return -2137705453;
		case 172:
			return -1924253471;
		case 173:
			return 1990527907;
		case 174:
			return -1963575852;
		case 175:
			return -2051828336;
		case 176:
			return 1798123698;
		case 177:
			return 495975404;
		case 178:
			return -665208900;
		case 179:
			return -2090796305;
		case 180:
			return 1649401908;
		case 181:
			return -2103309026;
		case 182:
			return 1582509135;
		case 183:
			return -1471337442;
		case 184:
			return -1207177750;
		case 185:
			return 1269504651;
		case 186:
			return 1519769314;
		case 187:
			return 644398018;
		case 188:
			return 107613027;
		case 189:
			return 93270913;
		case 190:
			return -2118935736;
		case 191:
			return -536214615;
		case 192:
			return 1772867250;
		case 193:
			return 766204040;
		case 194:
			return 564321544;
		case 195:
			return -434046439;
		case 196:
			return 728527958;
		case 197:
			return -1923952042;
		case 198:
			return -749877125;
		case 199:
			return 1857771831;
		case 200:
			return 273544526;
		case 201:
			return 1068458324;
		case 202:
			return 600894625;
		case 203:
			return -1463447134;
		case 204:
			return -1161401818;
		case 205:
			return 1888618008;
		case 206:
			return 1225419284;
		case 207:
			return 1127626385;
		case 208:
			return -1211596176;
		case 209:
			return 1811646877;
		case 210:
			return 1651578691;
		case 211:
			return 1382238315;
		case 212:
			return -2099616401;
		case 213:
			return 946618725;
		case 214:
			return -862103290;
		case 215:
			return -578476660;
		case 216:
			return 333834761;
		case 217:
			return -1530925183;
		case 218:
			return -809702995;
		case 219:
			return -267638862;
		case 220:
			return 1323614307;
		case 221:
			return -2094518374;
		case 222:
			return -209614658;
		case 223:
			return -2011961582;
		case 224:
			return 1656869860;
		case 225:
			return -969870146;
		case 226:
			return 1319079466;
		case 227:
			return -1688741952;
		case 228:
			return -1537888061;
		case 229:
			return 1417063580;
		case 230:
			return 992974374;
		case 231:
			return -1714801835;
		case 232:
			return -134912699;
		case 233:
			return 41531735;
		case 234:
			return -1175686941;
		case 235:
			return -1834878085;
		case 236:
			return 1672605872;
		case 237:
			return 1083028949;
		case 238:
			return 890539395;
		case 239:
			return -1603547373;
		case 240:
			return -748173978;
		case 241:
			return 1949355378;
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

char* func_133(int iParam0)
{
	switch (iParam0)
	{
		case 1008523256:
			return "time_block";
		case 1141833051:
			return "mission";
		case 830686115:
			return "mission_type(type=%x)/mission";
		case 1371816784:
			return "volume";
		case -279039872:
			return "volume_component";
		case -347364204:
			return "nav_block_volume";
		case -1591356522:
			return "blocking_object_flag";
		case -1481147674:
			return "location_flag";
		case 1071445036:
			return "setting";
		case 1393764479:
			return "scenario";
		case 416600242:
			return "door";
		case 1774314862:
			return "force_volume";
		case 1624339917:
			return "ped";
		case -702452069:
			return "prop";
		case -1697453237:
			return "ipl";
		case 935565856:
			return "lantern";
		case 164389658:
			return "prop_set";
		case -3633128:
			return "veg_mod";
		case 568979268:
			return "invalid_scenario";
		case -742165699:
			return "scenario_flag";
		case 1241889488:
			return "veg_flag";
		case -1450969535:
			return "anim";
		case 135103436:
			return "name";
		case -1562463744:
			return "turn_in_type";
		case -569428078:
			return "item";
		case 1034986020:
			return "interior";
		case 1282514153:
			return "transition";
		case 699547230:
			return "Location";
		case -1188075274:
			return "Mission_Giver";
		case -307865396:
			return "location";
		case -340432202:
			return "required_volume";
		case 891000470:
			return "mission_type";
		case -1785915344:
			return "unlock";
		case 95610146:
			return "state";
		case -175154863:
			return "string";
		case -779715008:
			return "flag";
		case 966721050:
			return "attribute";
		case 1773322216:
			return "weapon";
		case 965995012:
			return "warp_location";
		case -2106942431:
			return "flags";
		case 1772846069:
			return "giver";
		case -1782208300:
			return "Gun_for_Hire";
		case 466723622:
			return "Locations";
		case -155807419:
			return "Mission_Givers";
		case 369580868:
			return "Player_Bounties";
		case 1862983441:
			return "Use_Contexts";
		case -1462149998:
			return "location_flags";
		case 1097539553:
			return "location_flag(%i)";
		case -1479366685:
			return "settings";
		case 1475807964:
			return "setting(%i)";
		case 504293064:
			return "Dialogue";
		case -678729477:
			return "Missions";
		case 1635370648:
			return "Location(location=%x)";
		case 741518720:
			return "Mission_Giver(giver=%x)";
		case -1021330426:
			return "interaction_lockon";
		case -879824208:
			return "mission_giver_creation_data";
		case 56746299:
			return "schedule";
		case 1915534289:
			return "time_block(%i)";
		case 1089670230:
			return "mission(%i)";
		case 1179867258:
			return "volumes";
		case -328876172:
			return "volume(%i)";
		case 824485797:
			return "volume_component(%i)";
		case -146546566:
			return "volume_locks";
		case -733684727:
			return "volume_lock(%i)";
		case -750441052:
			return "scenarios";
		case 2080739522:
			return "nav_block_volume(%i)";
		case 1250184037:
			return "blocking_object_flags";
		case 1142477451:
			return "volume";
		case -1202322374:
			return "anti_grief_volumes";
		case -467924289:
			return "prop_sets";
		case 1034671917:
			return "props";
		case -1442893430:
			return "peds";
		case 957547265:
			return "script_created_scenarios";
		case 1781322358:
			return "veg_mods";
		case 1219330971:
			return "conditional_anims";
		case -2110119917:
			return "transitions";
		case 709191463:
			return "transition(%i)";
		case 2038044382:
			return "anim(%i)";
		case 1062084355:
			return "force_volumes";
		case -690423049:
			return "doors";
		case 202835363:
			return "scenario(%i)";
		case -293519133:
			return "prop_set(%i)";
		case 592206679:
			return "prop(%i)";
		case -816725755:
			return "ipl(%i)";
		case -255537257:
			return "lantern(%i)";
		case -770038426:
			return "ped(%i)";
		case -1940881994:
			return "unreachable_scearios";
		case -1099377300:
			return "invalid_scenario(%i)";
		case -1298580726:
			return "scenario_flags";
		case -1838764391:
			return "scenario_flag(%i)";
		case 1537295589:
			return "veg_flag(%i)";
		case -26782235:
			return "force_volume(%i)";
		case 1465961145:
			return "door(%i)";
		case -150140702:
			return "mission_giver_data";
		case 925148616:
			return "mission_giver_names";
		case -586196356:
			return "name(%i)";
		case -989277348:
			return "blip_data";
		case -1045571630:
			return "dialogue_type(type=%x)";
		case -1028785813:
			return "conversation(script_dialogue_handle=%x)";
		case -944306928:
			return "mission(unlock=%x)";
		case -1799624227:
			return "mission(type=%x)";
		case -1413825410:
			return "mission_data";
		case -1083767826:
			return "interiors";
		case 1392091586:
			return "interior(%i)";
		case 1269397350:
			return "name(name_type=%x)";
		case -1808878008:
			return "required_volume(%i)";
		case 696574474:
			return "required_volume_type(type=%x)";
		case 1280983896:
			return "required_volumes_types";
		case -473520653:
			return "mission_giver_type(type=%x)";
		case -1142735215:
			return "attachment";
		case -662059387:
			return "Location(%i)";
		case 1196324698:
			return "Location(id=%x)";
		case 1781673553:
			return "Mission_Giver(%i)";
		case 1091365066:
			return "mission_giver_name(type=%x)";
		case -346602855:
			return "locations";
		case -642855470:
			return "location(%i)";
		case -1294273068:
			return "Location(%i)";
		case -1181812906:
			return "veg_mod(%i)";
		case 2016458991:
			return "veg_mod_data(type=%x)";
		case 200716381:
			return "mission_flags";
		case -1845137425:
			return "mission_flag(%i)";
		case 787092883:
			return "door_config(config=%x)";
		case 888483612:
			return "mission_type(type=%x)";
		case 2063500509:
			return "mission_type(%i)";
		case -1570130076:
			return "mission_types";
		case 262797908:
			return "unlock(%i)";
		case 2012255077:
			return "state(%i)";
		case 1499632451:
			return "strings";
		case -236880317:
			return "string(%i)";
		case 1211454712:
			return "scenario";
		case -626189620:
			return "time_block(%i)/mission(unlock=%x)";
		case -1438489730:
			return "town(id=%x)";
		case -479537578:
			return "volume(script_volume_type=%x)";
		case -1463903719:
			return "town_volumes";
		case 1203863120:
			return "map_props";
		case -351785645:
			return "ipls";
		case -895584822:
			return "lanterns";
		case -1723095449:
			return "flags(type=%x)";
		case 157340468:
			return "nav_block_volumes";
		case 2064288322:
			return "volume";
		case -2116748653:
			return "blocking_object_flags";
		case 155183949:
			return "blocking_object_flag(%i)";
		case 825663396:
			return "ped(role=%x)";
		case 1915528396:
			return "flag(%i)";
		case -1266254117:
			return "attributes";
		case -1614496179:
			return "attribute(%i)";
		case -1490596352:
			return "weapons";
		case -1047907201:
			return "weapon(%i)";
		case 976967808:
			return "warp_locations";
		case 590738432:
			return "warp_location(%i)";
		case 1708896805:
			return "scene";
		case 2035135006:
			return "giver_schedule";
		case 334691246:
			return "hour(%i)";
		case -835870147:
			return "flags(%i)";
		case -1267680873:
			return "giver(%i)";
		case 1153433438:
			return "dialogue";
		case 1489424180:
			return ":dialogue_star_handle";
		case -904522836:
			return ":name";
		case 1611867516:
			return ":volume_name";
		case -1119986744:
			return ":conditional";
		case -941621037:
			return ":attach_bone";
		case 101270175:
			return ":anim_scene_name";
		case -875013288:
			return ":playlist_name";
		case -1541719198:
			return ":prop_name";
		case 842085562:
			return ":unlock";
		case 1887179278:
			return ":unlock_group";
		case 1468744908:
			return "mission(%i):unlock";
		case -1248823782:
			return ":mission_type";
		case 1154537543:
			return ":mission_name";
		case -1244566857:
			return ":dialogue_id";
		case -1255654531:
			return ":model";
		case -2137705453:
			return ":name";
		case -1924253471:
			return ":name_type";
		case 1990527907:
			return ":blip_style_close";
		case -1963575852:
			return ":blip_modifier_close";
		case -2051828336:
			return ":blip_sprite_close";
		case 1798123698:
			return ":flag";
		case 495975404:
			return ":script_volume_type";
		case -665208900:
			return ":type";
		case -2090796305:
			return ":required_volume_config";
		case 1649401908:
			return ":type";
		case -2103309026:
			return ":attach_to_model";
		case 1582509135:
			return ":scenario_author_type";
		case -1471337442:
			return ":blip_sprite";
		case -1207177750:
			return ":blip_style";
		case 1269504651:
			return ":blip_region";
		case 1519769314:
			return ":valid_location";
		case 644398018:
			return ":location";
		case 107613027:
			return ":giver";
		case 93270913:
			return ":blip";
		case -2118935736:
			return ":blip_modifier";
		case -536214615:
			return ":prop_set_name";
		case 564321544:
			return ":prop_set_placement_type";
		case -434046439:
			return ":door_id";
		case 728527958:
			return ":outfit";
		case -1923952042:
			return ":command_hash";
		case -749877125:
			return ":honor_requirement";
		case 1857771831:
			return ":loadout";
		case 273544526:
			return ":ipl_group";
		case 1068458324:
			return ":ipl_veg_mod";
		case 600894625:
			return ":ipl_nav_mesh";
		case -1463447134:
			return ":id";
		case -1161401818:
			return ":location_type";
		case 1888618008:
			return ":inventory_item";
		case 1225419284:
			return ":weapon";
		case 1127626385:
			return ":attach_point";
		case -1211596176:
			return ":use";
		case 1772867250:
			return ":scenario_prop";
		case 766204040:
			return ":scenario_mapping";
		case 1811646877:
			return ":texture";
		case 1651578691:
			return ":document";
		case 1382238315:
			return ":gender";
		case -2099616401:
			return ":handle";
		case 946618725:
			return ":value";
		case -862103290:
			return ":use_veg_mod";
		case -578476660:
			return ":force_to_be_object";
		case 333834761:
			return ":disable_scenario";
		case -1530925183:
			return ":clear_space";
		case -809702995:
			return ":should_be_locked";
		case -267638862:
			return ":is_breakable";
		case 1323614307:
			return ":snap_to";
		case -2094518374:
			return ":radius";
		case -209614658:
			return ":model_search_radius";
		case -2011961582:
			return ":heading";
		case 1656869860:
			return ":float";
		case -969870146:
			return ":launch_radius_offline";
		case 1319079466:
			return ":launch_radius_online";
		case -1688741952:
			return ":z_probe";
		case -1537888061:
			return ":open_ratio";
		case 1417063580:
			return ":auto_close_rate";
		case 992974374:
			return ":spawn_heading";
		case -1714801835:
			return ":interior_coords";
		case -134912699:
			return ":position";
		case 41531735:
			return ":orientation";
		case -1175686941:
			return ":scale";
		case -1834878085:
			return ":model_search_position";
		case 1672605872:
			return ":launch_coords";
		case 1083028949:
			return ":rotation";
		case 890539395:
			return ":spawn_position";
		case -1603547373:
			return ":destination_position";
		case -748173978:
			return ":destination_orientation";
		case 1949355378:
			return ":origin";
		default:
			break;
	}
	return "";
}

int func_134(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -792947925;
		case 1:
			return -1427946892;
		case 2:
			return 408367626;
		case 3:
			return -1622280771;
		case 4:
			return 1394196983;
		case 5:
			return 135054243;
		case 6:
			return -276973166;
		case 7:
			return 218782838;
		case 8:
			return 1811778263;
		case 9:
			return -1182771454;
		case 10:
			return 33417155;
		case 11:
			return 12932893;
		case 12:
			return 767213493;
		case 13:
			return -2017210649;
		case 14:
			return 581202040;
		case 15:
			return 2062917018;
		case 16:
			return -620047125;
		case 17:
			return -1250873360;
		case 18:
			return 154896618;
		case 19:
			return -371275865;
		case 20:
			return 1005476533;
		case 21:
			return 1957572717;
		case 22:
			return 2125319032;
		case 23:
			return -1581105240;
		case 24:
			return -667693420;
		case 25:
			return -1523280739;
		case 26:
			return 1937201256;
		case 27:
			return 2002802057;
		case 28:
			return 938696127;
		case 29:
			return 924791973;
		case 30:
			return -1029131400;
		case 31:
			return -118633223;
		case 32:
			return 1217673812;
		case 33:
			return 499583568;
		case 34:
			return -1969117434;
		case 35:
			return -151415096;
		case 36:
			return 1570262717;
		case 37:
			return -419812745;
		case 38:
			return 1134292740;
		case 39:
			return -1445468930;
		case 40:
			return 327661882;
		case 41:
			return 314220799;
		case 42:
			return 402983180;
		case 43:
			return -1287008399;
		case 44:
			return 460561235;
		case 45:
			return -377576419;
		case 46:
			return -1418408851;
		case 47:
			return -1592717000;
		case 48:
			return -1108141625;
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

char* func_135(int iParam0)
{
	switch (iParam0)
	{
		case -792947925:
			return "mission_type";
		case -1427946892:
			return "mission";
		case 408367626:
			return "mission_flag";
		case -1622280771:
			return "string";
		case 1394196983:
			return "mission_flags";
		case 135054243:
			return "map";
		case -276973166:
			return "mission_type_flags";
		case 218782838:
			return "mission_type_flag";
		case 1811778263:
			return "stat";
		case -1182771454:
			return "hour";
		case 33417155:
			return "Net_Gun_For_Hire_Missions";
		case 12932893:
			return "mission_type(type=%x)";
		case 767213493:
			return "mission_type(%i)";
		case -2017210649:
			return "mission(unlock=%x)";
		case 581202040:
			return "mission(%i)";
		case 2062917018:
			return "mission_data";
		case -620047125:
			return "strings";
		case -1250873360:
			return "string(%i)";
		case 154896618:
			return "mission_flags(type=%x)";
		case -371275865:
			return "mission_flags(%i)";
		case 1005476533:
			return "mission_flag(%i)";
		case 1957572717:
			return "string(type=%x)";
		case 2125319032:
			return "mappings";
		case -1581105240:
			return "map(%i)";
		case -667693420:
			return "map(type=%x)";
		case -1523280739:
			return "mission_type_flags(type=%x)";
		case 1937201256:
			return "mission_type_flags(%i)";
		case 2002802057:
			return "mission_type_flag(%i)";
		case 938696127:
			return "stats";
		case 924791973:
			return "stat(%i)";
		case -1029131400:
			return "unavailable_hours";
		case -118633223:
			return "hour(%i)";
		case 1217673812:
			return ":unlock_group";
		case 499583568:
			return ":unlock";
		case -1969117434:
			return ":mission_name";
		case -151415096:
			return ":dialogue_id";
		case 1570262717:
			return ":flag";
		case -419812745:
			return ":type";
		case 1134292740:
			return ":name";
		case -1445468930:
			return ":honor_requirement";
		case 327661882:
			return ":anim_scene_id";
		case 314220799:
			return ":hash";
		case 402983180:
			return ":id";
		case -1287008399:
			return ":base_id";
		case 460561235:
			return ":item";
		case -377576419:
			return ":region_id";
		case -1418408851:
			return ":region_name";
		case -1592717000:
			return ":min_posse_members";
		case -1108141625:
			return ":hour";
		default:
			break;
	}
	return "";
}

int func_136(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -735674404;
		case 1:
			return -232245152;
		case 2:
			return -1871400260;
		case 3:
			return 856637467;
		case 4:
			return -510412804;
		case 5:
			return 1200720527;
		case 6:
			return -1083105766;
		case 7:
			return -1918309560;
		case 8:
			return -1486539200;
		case 9:
			return -514504777;
		case 10:
			return 2019543834;
		case 11:
			return 1796435875;
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

char* func_137(int iParam0)
{
	switch (iParam0)
	{
		case -735674404:
			return "type";
		case -232245152:
			return "gfh_dialogue";
		case -1871400260:
			return "giver(giver=%x)";
		case 856637467:
			return "type(id=%x)";
		case -510412804:
			return "type(%i)";
		case 1200720527:
			return "line(id=%x)";
		case -1083105766:
			return "line(root=%x)";
		case -1918309560:
			return "location(id=%x)";
		case -1486539200:
			return "context(id=%x)";
		case -514504777:
			return ":subtitle_group_id";
		case 2019543834:
			return ":root";
		case 1796435875:
			return ":id";
		default:
			break;
	}
	return "";
}

int func_138(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 497608077;
		case 1:
			return 1549541;
		case 2:
			return -1544070393;
		case 3:
			return 601477620;
		case 4:
			return 1333416092;
		case 5:
			return -1217753077;
		case 6:
			return 187579888;
		case 7:
			return -100724832;
		case 8:
			return 630918774;
		case 9:
			return 1372075093;
		case 10:
			return -1854922634;
		case 11:
			return -1519814088;
		case 12:
			return 472287195;
		case 13:
			return 1969053457;
		case 14:
			return -245080631;
		case 15:
			return 1758962534;
		case 16:
			return -607359033;
		case 17:
			return -1237276897;
		case 18:
			return 635413302;
		case 19:
			return -22626725;
		case 20:
			return 1401821022;
		case 21:
			return -789427168;
		case 22:
			return -1426815576;
		case 23:
			return 899166212;
		case 24:
			return -786270192;
		case 25:
			return 608242665;
		case 26:
			return 843787590;
		case 27:
			return 650443163;
		case 28:
			return -59088530;
		case 29:
			return -666456239;
		case 30:
			return 1591836767;
		case 31:
			return -606642812;
		case 32:
			return -34107655;
		case 33:
			return 1808784790;
		case 34:
			return -696517180;
		case 35:
			return -1363671161;
		case 36:
			return 1676892178;
		case 37:
			return -804733785;
		case 38:
			return 271069761;
		case 39:
			return 1407961884;
		case 40:
			return 773420852;
		case 41:
			return 1690645077;
		case 42:
			return 1002916547;
		case 43:
			return -1277273758;
		case 44:
			return -2079257644;
		case 45:
			return -277313798;
		case 46:
			return 223434839;
		case 47:
			return 108319586;
		case 48:
			return -339551293;
		case 49:
			return 459624884;
		case 50:
			return 830448359;
		case 51:
			return 1958896072;
		case 52:
			return 1493566732;
		case 53:
			return 409963779;
		case 54:
			return -260632549;
		case 55:
			return -986334861;
		case 56:
			return -1995351236;
		case 57:
			return -1572019582;
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

char* func_139(int iParam0)
{
	switch (iParam0)
	{
		case 497608077:
			return "entities";
		case 1549541:
			return "entity";
		case -1544070393:
			return "flags";
		case 601477620:
			return "flag";
		case 1333416092:
			return "scene";
		case -1217753077:
			return "player";
		case 187579888:
			return "playlist";
		case -100724832:
			return "volume";
		case 630918774:
			return "component";
		case 1372075093:
			return "Gun_for_Hire_Cutscene";
		case -1854922634:
			return "Givers";
		case -1519814088:
			return "giver(unlock=%x)";
		case 472287195:
			return "scene(type=%x)";
		case 1969053457:
			return "scene(%i)";
		case -245080631:
			return "entities(%i)";
		case 1758962534:
			return "entity(%i)";
		case -607359033:
			return "flags(%i)";
		case -1237276897:
			return "flags(type=%x)";
		case 635413302:
			return "flag(%i)";
		case -22626725:
			return "location_data";
		case 1401821022:
			return "origins";
		case -789427168:
			return "location(unlock=%x)";
		case -1426815576:
			return "end";
		case 899166212:
			return "positions";
		case -786270192:
			return "players";
		case 608242665:
			return "player(%i)";
		case 843787590:
			return "exceptions";
		case 650443163:
			return "playlists";
		case -59088530:
			return "playlist(%i)";
		case -666456239:
			return "volumes";
		case 1591836767:
			return "volume(%i)";
		case -606642812:
			return "component(%i)";
		case -34107655:
			return "playlist_mappings";
		case 1808784790:
			return "map(mission_playlist=%x)";
		case -696517180:
			return "scenario_mappings";
		case -1363671161:
			return "scene_type(type=%x)";
		case 1676892178:
			return "scenario_data";
		case -804733785:
			return "scenario";
		case 271069761:
			return ":type";
		case 1407961884:
			return ":model";
		case 773420852:
			return ":trigger";
		case 1690645077:
			return ":scenario_type";
		case 1002916547:
			return ":ped_id";
		case -1277273758:
			return ":handle";
		case -2079257644:
			return ":bone";
		case -277313798:
			return ":name";
		case 223434839:
			return ":section";
		case 108319586:
			return ":position";
		case -339551293:
			return ":origin";
		case 459624884:
			return ":orientation";
		case 830448359:
			return ":scale";
		case 1958896072:
			return ":radius";
		case 1493566732:
			return ":heading";
		case 409963779:
			return ":load_distance";
		case -260632549:
			return ":gameplay_cam";
		case -1572019582:
			return ":max_players";
		case -986334861:
			return ":can_reset";
		case -1995351236:
			return ":reset_props_on_end";
		default:
			break;
	}
	return "";
}

int func_140(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("CHALLENGE");
			break;
		case -3:
			iVar0 = 1300413597;
			break;
		case 1:
			iVar0 = joaat("FEATURE");
			break;
		case -2:
			iVar0 = joaat("GOLD");
			break;
		case 2:
			iVar0 = joaat("MISSION_STORY");
			break;
		case 3:
			iVar0 = joaat("MISSION_PROCEDURAL");
			break;
		case 4:
			iVar0 = joaat("MISSION_FETCH");
			break;
		case 5:
			iVar0 = joaat("MISSION_MINIGAME");
			break;
		case 6:
			iVar0 = joaat("MISSION_FREE_MODE_EVENT");
			break;
		case 7:
			iVar0 = joaat("MISSION_UGC");
			break;
		case 8:
			iVar0 = joaat("MISSION_BEAT");
			break;
		case 9:
			iVar0 = joaat("PROPERTY");
			break;
		case 10:
			iVar0 = joaat("RECIPE");
			break;
		case 11:
			iVar0 = joaat("TITLE");
			break;
		case 12:
			iVar0 = joaat("SHOP");
			break;
		case 13:
			iVar0 = joaat("GFH_GIVERS");
			break;
		case 14:
			iVar0 = joaat("GFH_LOCATIONS");
			break;
		case 15:
			iVar0 = 1332629624;
			break;
		case 16:
			iVar0 = 1746212499;
			break;
		case 17:
			iVar0 = joaat("GVO_UNLOCKS");
			break;
		case 18:
			iVar0 = 1151893103;
			break;
		case 19:
			iVar0 = -312924468;
			break;
	}
	return iVar0;
}

void func_141(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	Global_1128574[iVar0 /*56*/].f_34 = (Global_1128574[iVar0 /*56*/].f_34 || iParam0);
}

int func_142()
{
	int iVar0;

	iVar0 = func_169(PLAYER::PLAYER_ID(), -1);
	if (!func_170(iVar0))
	{
		return 1;
	}
	if (func_31(func_220()))
	{
		return 1;
	}
	if (func_221(iVar0) == -1)
	{
		return 1;
	}
	if (func_221(iVar0) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_143(int iParam0)
{
	struct<7> Var0[7];
	int iVar50;
	int iVar51;
	int iVar52;

	if (!GANG::_0x0F99F6436528A089(GANG::_0x901E0DC25080C8B9(iParam0)))
	{
		return false;
	}
	if (!GANG::_0x424B17A7DC5C90BC(iParam0))
	{
		return false;
	}
	iVar51 = GANG::_0xD1BF325C8252A982(GANG::_0x901E0DC25080C8B9(iParam0), &Var0);
	iVar50 = 0;
	while (iVar50 <= (iVar51 - 1))
	{
		iVar52 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var0[iVar50 /*7*/]));
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar52) || PLAYER::IS_PLAYER_DEAD(iVar52))
		{
		}
		else if (func_222(1048576, iVar52))
		{
			return true;
		}
		iVar50++;
	}
	return false;
}

char* func_144(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BUTCHER_HELP_HALTED";
		case 1:
			return "BUTCHER_HELP_OPERATIONAL";
		case 2:
			return "MG_POSSE_MEM_IN_JAIL";
		default:
			break;
	}
	return "FAIL";
}

int func_145(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_146(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return UIFEED::_0x59FA676177DBE4C9(iParam0) == 4;
}

void func_147(var uParam0, int iParam1)
{
	func_223(uParam0, iParam1);
}

void func_148(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_224(*iParam0);
	iVar1 = func_225(*iParam0);
	iVar2 = func_226(*iParam0);
	iVar3 = func_227(*iParam0);
	iVar4 = func_228(*iParam0);
	iVar5 = func_229(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_230(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_230(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_231(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_149()
{
	return Global_1902818;
}

bool func_150(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_232(iParam1) || !func_232(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_151(var uParam0, char[12] cParam1)
{
	var uVar0;

	uVar0 = 24;
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_83.f_42))
		{
			if (AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_83.f_42) == 0)
			{
				func_89(&uVar0, uParam0->f_83.f_42, "CRIPPS", 0);
				func_165(&uVar0, cParam1, 0, -1, 0, 0);
				return true;
			}
		}
	}
	return false;
}

int func_152(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	return Global_1134390[iVar0 /*83*/].f_74.f_3;
}

bool func_153(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return true;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 1)
			{
				return true;
			}
		}
	}
	return false;
}

int func_154(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	if (!func_19(iParam1))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 1:
			*uParam2 = { Global_1131196[iParam1 /*27*/].f_20 };
			*uParam3 = 0f;
			break;
		case 9:
			*uParam2 = { Global_1132288.f_1[iParam1 /*63*/].f_41 };
			*uParam3 = Global_1132288.f_1[iParam1 /*63*/].f_59;
			break;
		case 10:
			if (iParam4 < 0 || iParam4 >= 7)
			{
				return 0;
			}
			*uParam2 = { Global_1132288.f_1[iParam1 /*63*/].f_13[iParam4 /*3*/] };
			*uParam3 = Global_1132288.f_1[iParam1 /*63*/].f_49[iParam4];
			break;
		case 7:
			*uParam2 = { Global_1132288.f_1[iParam1 /*63*/].f_38 };
			*uParam3 = Global_1132288.f_1[iParam1 /*63*/].f_58;
			break;
		case 13:
			*uParam2 = { Global_1132288.f_1[iParam1 /*63*/].f_35 };
			*uParam3 = Global_1132288.f_1[iParam1 /*63*/].f_57;
			break;
		case 14:
			*uParam2 = { Global_1132288.f_1[iParam1 /*63*/].f_7 };
			*uParam3 = Global_1132288.f_1[iParam1 /*63*/].f_47;
			break;
		case 15:
			*uParam2 = { Global_1132288.f_1[iParam1 /*63*/].f_10 };
			*uParam3 = Global_1132288.f_1[iParam1 /*63*/].f_47;
			break;
		case 11:
			*uParam2 = { Global_1132288.f_1[iParam1 /*63*/].f_44 };
			*uParam3 = Global_1132288.f_1[iParam1 /*63*/].f_60;
			break;
		default:
			return 0;
	}
	return 1;
}

int func_155(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return Global_1134390[iParam0 /*83*/].f_38.f_12.f_5;
}

int func_156(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return Global_1134390[iVar0 /*83*/].f_38.f_3;
	}
	return -1;
}

int func_157(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam2)
	{
		case -766600612: /* GXTEntry: "Traveling Opulence" */
			switch (iParam1)
			{
				case -811830793: /* GXTEntry: "Bedroll" */
					return 159;
				case 1421598733: /* GXTEntry: "Covered" */
					return 175;
				case -1281008453: /* GXTEntry: "Lean-To" */
					return 183;
				case 1081855422: /* GXTEntry: "Covered Lean-To" */
					return 167;
				case -805084272: /* GXTEntry: "Open-Air Lean-To" */
					return 191;
				case 1429053594: /* GXTEntry: "Tall Lean-To" */
					return 199;
				case 1802123763: /* GXTEntry: "A-Frame" */
					return 151;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 22;
				case 12:
					return 4;
				case 13:
					return 12;
				case 9:
					return 41;
				case 10:
					return 33;
				case 8:
					return 49;
				default:
					break;
			}
			break;
		case 226275223: /* GXTEntry: "The Hobo Life" */
			switch (iParam1)
			{
				case -811830793: /* GXTEntry: "Bedroll" */
					return 160;
				case 1421598733: /* GXTEntry: "Covered" */
					return 176;
				case -1281008453: /* GXTEntry: "Lean-To" */
					return 184;
				case 1081855422: /* GXTEntry: "Covered Lean-To" */
					return 168;
				case -805084272: /* GXTEntry: "Open-Air Lean-To" */
					return 192;
				case 1429053594: /* GXTEntry: "Tall Lean-To" */
					return 200;
				case 1802123763: /* GXTEntry: "A-Frame" */
					return 152;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 23;
				case 12:
					return 5;
				case 13:
					return 13;
				case 9:
					return 42;
				case 10:
					return 34;
				case 8:
					return 50;
				default:
					break;
			}
			break;
		case -2146415538: /* GXTEntry: "Military Surplus" */
			switch (iParam1)
			{
				case -811830793: /* GXTEntry: "Bedroll" */
					return 161;
				case 1421598733: /* GXTEntry: "Covered" */
					return 177;
				case -1281008453: /* GXTEntry: "Lean-To" */
					return 185;
				case 1081855422: /* GXTEntry: "Covered Lean-To" */
					return 169;
				case -805084272: /* GXTEntry: "Open-Air Lean-To" */
					return 193;
				case 1429053594: /* GXTEntry: "Tall Lean-To" */
					return 201;
				case 1802123763: /* GXTEntry: "A-Frame" */
					return 153;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 24;
				case 12:
					return 6;
				case 13:
					return 14;
				case 9:
					return 43;
				case 10:
					return 35;
				case 8:
					return 51;
				default:
					break;
			}
			break;
		case -892962381: /* GXTEntry: "Survivor" */
			switch (iParam1)
			{
				case -811830793: /* GXTEntry: "Bedroll" */
					return 162;
				case 1421598733: /* GXTEntry: "Covered" */
					return 178;
				case -1281008453: /* GXTEntry: "Lean-To" */
					return 186;
				case 1081855422: /* GXTEntry: "Covered Lean-To" */
					return 170;
				case -805084272: /* GXTEntry: "Open-Air Lean-To" */
					return 194;
				case 1429053594: /* GXTEntry: "Tall Lean-To" */
					return 202;
				case 1802123763: /* GXTEntry: "A-Frame" */
					return 154;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 25;
				case 12:
					return 7;
				case 13:
					return 15;
				case 9:
					return 44;
				case 10:
					return 36;
				case 8:
					return 52;
				default:
					break;
			}
			break;
		case joaat("UPGRADE_CAMP_THEME_BOUNTY_HUNTER"):
			switch (iParam1)
			{
				case -811830793: /* GXTEntry: "Bedroll" */
					return 163;
				case 1421598733: /* GXTEntry: "Covered" */
					return 179;
				case -1281008453: /* GXTEntry: "Lean-To" */
					return 187;
				case 1081855422: /* GXTEntry: "Covered Lean-To" */
					return 171;
				case -805084272: /* GXTEntry: "Open-Air Lean-To" */
					return 195;
				case 1429053594: /* GXTEntry: "Tall Lean-To" */
					return 203;
				case 1802123763: /* GXTEntry: "A-Frame" */
					return 155;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 26;
				case 12:
					return 8;
				case 13:
					return 16;
				case 9:
					return 45;
				case 10:
					return 37;
				case 8:
					return 53;
				default:
					break;
			}
			break;
		case joaat("UPGRADE_CAMP_THEME_COLLECTOR"):
			switch (iParam1)
			{
				case -811830793: /* GXTEntry: "Bedroll" */
					return 164;
				case 1421598733: /* GXTEntry: "Covered" */
					return 180;
				case -1281008453: /* GXTEntry: "Lean-To" */
					return 188;
				case 1081855422: /* GXTEntry: "Covered Lean-To" */
					return 172;
				case -805084272: /* GXTEntry: "Open-Air Lean-To" */
					return 196;
				case 1429053594: /* GXTEntry: "Tall Lean-To" */
					return 204;
				case 1802123763: /* GXTEntry: "A-Frame" */
					return 156;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 27;
				case 12:
					return 9;
				case 13:
					return 17;
				case 9:
					return 46;
				case 10:
					return 38;
				case 8:
					return 54;
				default:
					break;
			}
			break;
		case joaat("UPGRADE_CAMP_THEME_TRADER"):
			switch (iParam1)
			{
				case -811830793: /* GXTEntry: "Bedroll" */
					return 165;
				case 1421598733: /* GXTEntry: "Covered" */
					return 181;
				case -1281008453: /* GXTEntry: "Lean-To" */
					return 189;
				case 1081855422: /* GXTEntry: "Covered Lean-To" */
					return 173;
				case -805084272: /* GXTEntry: "Open-Air Lean-To" */
					return 197;
				case 1429053594: /* GXTEntry: "Tall Lean-To" */
					return 205;
				case 1802123763: /* GXTEntry: "A-Frame" */
					return 157;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 28;
				case 12:
					return 10;
				case 13:
					return 18;
				case 9:
					return 47;
				case 10:
					return 39;
				case 8:
					return 55;
				default:
					break;
			}
			break;
	}
	switch (iParam3)
	{
		case 11:
			return 21;
		case 12:
			return 3;
		case 10:
			return 31;
		case 9:
			return 40;
		case 8:
			return 56;
		default:
			break;
	}
	switch (iParam1)
	{
		case joaat("UPGRADE_CAMP_EQUIPMENT_FAST_TRAVEL_MAP"):
			return 60;
		case joaat("UPGRADE_CAMP_BUTCHER_TABLE"):
			return 61;
		case joaat("UPGRADE_CAMP_WEAPONS_LOCKER"):
			return 66;
		case joaat("UPGRADE_CAMP_DELIVERY_WAGON_LARGE"):
			return 62;
		case joaat("UPGRADE_CAMP_DELIVERY_WAGON_MEDIUM"):
			return 63;
		case joaat("UPGRADE_CAMP_DELIVERY_WAGON_SMALL"):
			return 64;
		case joaat("UPGRADE_CAMP_STEW_POT"):
			return 65;
		case -1396511102: /* GXTEntry: "Deluxe Campfire" */
			return 2;
		case -1991362080: /* GXTEntry: "Black & Tan" */
		case -1535250369: /* GXTEntry: "Tan Brindle" */
		case 914789466: /* GXTEntry: "Black & White" */
			return 67;
		case 55994234: /* GXTEntry: "Dark Brown" */
		case 262209551: /* GXTEntry: "Dead Grass" */
		case 769866899: /* GXTEntry: "Brown" */
			return 68;
		case -429885089: /* GXTEntry: "Yellow" */
		case -289273358: /* GXTEntry: "Chocolate" */
		case 536669287: /* GXTEntry: "Black" */
			return 69;
		case joaat("UPGRADE_CAMP_DOG_AUSTRALIAN_SHEPHERD_001"):
			return 70;
		case joaat("UPGRADE_CAMP_DOG_HUSKY_003"):
			return 71;
		case 1671341100: /* GXTEntry: "Aqua" */
			return 72;
		case -1336962048: /* GXTEntry: "Blue" */
			return 73;
		case 1262519305: /* GXTEntry: "Green" */
			return 74;
		case -510449329: /* GXTEntry: "Orange" */
			return 75;
		case -474096794: /* GXTEntry: "Pink" */
			return 76;
		case 2022645972: /* GXTEntry: "Purple" */
			return 77;
		case -1867469444: /* GXTEntry: "Red" */
			return 78;
		case 81790578: /* GXTEntry: "Yellow" */
			return 79;
		case 42875037: /* GXTEntry: "White" */
			return 80;
		case joaat("UPGRADE_CAMP_FLAG_ANIML_ALLIGATOR_WHITE_00"):
			return 81;
		case joaat("UPGRADE_CAMP_FLAG_ANIML_BEAR_WHITE_00"):
			return 82;
		case joaat("UPGRADE_CAMP_FLAG_ANIML_BUCK_WHITE_00"):
			return 83;
		case joaat("UPGRADE_CAMP_FLAG_ANIML_COYOTE_WHITE_00"):
			return 84;
		case joaat("UPGRADE_CAMP_FLAG_ANIML_EAGLE_WHITE_00"):
			return 85;
		case joaat("UPGRADE_CAMP_FLAG_ANIML_GMONSTER_WHITE_00"):
			return 86;
		case joaat("UPGRADE_CAMP_FLAG_ANIML_MORGAN_WHITE_00"):
			return 87;
		case joaat("UPGRADE_CAMP_FLAG_ANIML_STURGEON_WHITE_00"):
			return 88;
		case joaat("UPGRADE_CAMP_FLAG_ANIML_TENNESSEE_WHITE_00"):
			return 89;
		case joaat("UPGRADE_CAMP_FLAG_ANIML_VULTURE_WHITE_00"):
			return 90;
		case joaat("UPGRADE_CAMP_FLAG_BRAND_BALTZ_DEFAULT_00"):
			return 91;
		case joaat("UPGRADE_CAMP_FLAG_BRAND_CLAMJUICE_DEFAULT_00"):
			return 92;
		case joaat("UPGRADE_CAMP_FLAG_BRAND_FESTA_DEFAULT_00"):
			return 93;
		case joaat("UPGRADE_CAMP_FLAG_BRAND_GELATIN_DEFAULT_00"):
			return 94;
		case joaat("UPGRADE_CAMP_FLAG_BRAND_JJACKS_DEFAULT_00"):
			return 95;
		case joaat("UPGRADE_CAMP_FLAG_BRAND_LCOLA_DEFAULT_00"):
			return 96;
		case joaat("UPGRADE_CAMP_FLAG_BRAND_LUCIFERS_DEFAULT_00"):
			return 97;
		case joaat("UPGRADE_CAMP_FLAG_BRAND_OBEYES_DEFAULT_00"):
			return 98;
		case joaat("UPGRADE_CAMP_FLAG_BRAND_PMGIN_DEFAULT_00"):
			return 99;
		case joaat("UPGRADE_CAMP_FLAG_BRAND_SCHIFFER_DEFAULT_00"):
			return 100;
		case joaat("UPGRADE_CAMP_FLAG_STATE_ACE_GREEN_00"):
			return 101;
		case joaat("UPGRADE_CAMP_FLAG_STATE_AMBARINO_DEFAULT_00"):
			return 102;
		case joaat("UPGRADE_CAMP_FLAG_STATE_ANCHOR_BLUE_00"):
			return 103;
		case joaat("UPGRADE_CAMP_FLAG_STATE_GUARMA_DEFAULT_00"):
			return 104;
		case joaat("UPGRADE_CAMP_FLAG_STATE_LEMOYNE_DEFAULT_00"):
			return 105;
		case joaat("UPGRADE_CAMP_FLAG_STATE_NHANOVER_DEFAULT_00"):
			return 106;
		case joaat("UPGRADE_CAMP_FLAG_STATE_PSKULLS_RED_00"):
			return 107;
		case joaat("UPGRADE_CAMP_FLAG_ANIML_CATFISH_DEFAULT_00"):
			return 108;
		case joaat("UPGRADE_CAMP_FLAG_STATE_STDENIS_DEFAULT_00"):
			return 109;
		case joaat("UPGRADE_CAMP_FLAG_STATE_WELIZABETH_DEFAULT_00"):
			return 110;
		case -144166169: /* GXTEntry: "Standard 1" */
			return 111;
		case -492687949: /* GXTEntry: "Standard 2" */
			return 112;
		case -874512337: /* GXTEntry: "Standard 3" */
			return 113;
		case -415385882: /* GXTEntry: "Standard 4" */
			return 114;
		case -797537960: /* GXTEntry: "Standard 5" */
			return 115;
		case -941076000: /* GXTEntry: "Traveling Opulence 1" */
			return 120;
		case -1567174399: /* GXTEntry: "Traveling Opulence 2" */
			return 121;
		case -763924656: /* GXTEntry: "The Hobo Life 1" */
			return 122;
		case 1928558912: /* GXTEntry: "The Hobo Life 2" */
			return 123;
		case 524939438: /* GXTEntry: "Military Surplus 1" */
			return 124;
		case -1949362405: /* GXTEntry: "Military Surplus 2" */
			return 125;
		case 908640876: /* GXTEntry: "Survivor 1" */
			return 126;
		case 501275986: /* GXTEntry: "Survivor 2" */
			return 127;
		case joaat("UPGRADE_CAMP_FOLLOWER_OUTFIT_ROLE_BOUNTYHUNTER"):
			return 128;
		case joaat("UPGRADE_CAMP_FOLLOWER_OUTFIT_ROLE_COLLECTOR"):
			return 129;
		case joaat("UPGRADE_CAMP_FOLLOWER_OUTFIT_ROLE_TRADER"):
			return 130;
		case joaat("UPGRADE_CAMP_FOLLOWER_OUTFIT_SEASONAL_01"):
			return 131;
		case joaat("UPGRADE_CAMP_FOLLOWER_OUTFIT_SEASONAL_02"):
			return 132;
		case joaat("UPGRADE_CAMP_FOLLOWER_OUTFIT_SEASONAL_03"):
			return 133;
		case joaat("UPGRADE_CAMP_FOLLOWER_OUTFIT_GENERIC_06"):
			return 116;
		case joaat("UPGRADE_CAMP_FOLLOWER_OUTFIT_GENERIC_07"):
			return 117;
		case joaat("UPGRADE_CAMP_FOLLOWER_OUTFIT_GENERIC_08"):
			return 118;
		case joaat("UPGRADE_CAMP_FOLLOWER_OUTFIT_GENERIC_09"):
			return 119;
		case -811830793: /* GXTEntry: "Bedroll" */
			return 158;
		case 1421598733: /* GXTEntry: "Covered" */
			return 174;
		case -1281008453: /* GXTEntry: "Lean-To" */
			return 182;
		case 1081855422: /* GXTEntry: "Covered Lean-To" */
			return 166;
		case -805084272: /* GXTEntry: "Open-Air Lean-To" */
			return 190;
		case 1429053594: /* GXTEntry: "Tall Lean-To" */
			return 198;
		case 1802123763: /* GXTEntry: "A-Frame" */
			return 150;
		default:
			break;
	}
	return 0;
}

int func_158(int iParam0)
{
	switch (iParam0)
	{
		case 120:
			return -2089344668;
		case 121:
			return 2050756334;
		case 122:
			return 1086496835;
		case 123:
			return 1461439733;
		case 124:
			return -942529833;
		case 125:
			return 2125074568;
		case 111:
			return joaat("META_OUTFIT_DEFAULT");
		case 112:
			return -1359472568;
		case 113:
			return 309845830;
		case 114:
			return 472445608;
		case 115:
			return -302836163;
		case 126:
			return -827426745;
		case 127:
			return -1585799712;
		case 128:
			return -1378452636;
		case 129:
			return -273086735;
		case 130:
			return 75146260;
		case 131:
			return 1988797837;
		case 132:
			return -182115660;
		case 133:
			return -420968901;
		case 116:
			return -324004853;
		case 117:
			return -81940250;
		case 118:
			return 1363893568;
		case 119:
			return 1604450797;
		default:
			break;
	}
	return 0;
}

int func_159(int iParam0)
{
	if (iParam0 >= 111 && iParam0 <= 133)
	{
		return joaat("CS_MP_CRIPPS");
	}
	switch (iParam0)
	{
		case 1:
			return joaat("P_CAMPFIRE02X_COMBO");
		case 2:
			return joaat("P_CAMPFIRE02X_COMBO");
		case 57:
			return joaat("GATLING_GUN");
		case 58:
			return joaat("GATLINGMAXIM02");
		case 59:
			return joaat("HOTCHKISS_CANNON");
		case 60:
			return joaat("S_FASTTRAVELMARKER01X");
		case 62:
			return joaat("GATCHUCK");
		case 63:
			return joaat("CART06");
		case 64:
			return joaat("CART08");
		case 67:
			return joaat("A_C_DOGAMERICANFOXHOUND_01");
		case 68:
			return joaat("A_C_DOGCHESBAYRETRIEVER_01");
		case 69:
			return joaat("A_C_DOGLAB_01");
		case 70:
			return joaat("A_C_DOGAUSTRALIANSHEPERD_01");
		case 71:
			return joaat("A_C_DOGHUSKY_01");
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return joaat("MP005_S_MP_CAMPFLAG01X");
		case 81:
			return joaat("MP005_S_FLAG01X_ALLIGATOR");
		case 82:
			return joaat("MP005_S_FLAG01X_BEAR");
		case 83:
			return joaat("MP005_S_FLAG01X_BUCK");
		case 84:
			return joaat("MP005_S_FLAG01X_COYOTE");
		case 85:
			return joaat("MP005_S_FLAG01X_EAGLE");
		case 86:
			return joaat("MP005_S_FLAG01X_GILAMONSTER");
		case 87:
			return joaat("MP005_S_FLAG01X_MORGAN");
		case 88:
			return joaat("MP005_S_FLAG01X_STURGEON");
		case 89:
			return joaat("MP005_S_FLAG01X_TENNESSEE");
		case 90:
			return joaat("MP005_S_FLAG01X_VULTURE");
		case 91:
			return joaat("MP005_S_FLAG01X_BALTZ");
		case 92:
			return joaat("MP005_S_FLAG01X_CLAMJUICE");
		case 93:
			return joaat("MP005_S_FLAG01X_FESTA");
		case 94:
			return joaat("MP005_S_FLAG01X_GELATIN");
		case 95:
			return joaat("MP005_S_FLAG01X_JOLLYJACKS");
		case 96:
			return joaat("MP005_S_FLAG01X_LALLYCOLA");
		case 97:
			return joaat("MP005_S_FLAG01X_LUCIFERS");
		case 98:
			return joaat("MP005_S_FLAG01X_OLDBLOODEYES");
		case 99:
			return joaat("MP005_S_FLAG01X_PRAIRIEMOONGIN");
		case 100:
			return joaat("MP005_S_FLAG01X_SCHIFFER");
		case 101:
			return joaat("MP005_S_FLAG01X_ACE");
		case 102:
			return joaat("MP005_S_FLAG01X_AMBARINO");
		case 103:
			return joaat("MP005_S_FLAG01X_ANCHOUR");
		case 104:
			return joaat("MP005_S_FLAG01X_GUARMA");
		case 105:
			return joaat("MP005_S_FLAG01X_LEMOYNE");
		case 106:
			return joaat("MP005_S_FLAG01X_NEWHANOVER");
		case 107:
			return joaat("MP005_S_FLAG01X_PIRATESKULLS");
		case 108:
			return joaat("MP005_S_FLAG01X_FISH");
		case 109:
			return joaat("MP005_S_FLAG01X_STDENIS");
		case 110:
			return joaat("MP005_S_FLAG01X_WESTELIZABETH");
		default:
			break;
	}
	return 0;
}

int func_160(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_233(iParam1, 1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (iVar0 == PED::_GET_PED_META_OUTFIT_HASH(iParam0))
	{
		return 1;
	}
	else if (PED::_0xA0BC8FAED8CFEB3C(iParam0))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam0, iParam1);
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
		return 1;
	}
	return 0;
}

var func_161(var uParam0)
{
	return uParam0;
}

Vector3 func_162(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	vVar6 = { 0f, 0f, 0f };
	func_234(*uParam0, &vVar3, &fVar9);
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, fVar9, vVar6) };
	return vVar0;
}

bool func_163(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			return true;
	}
	return false;
}

bool func_164(var uParam0, int iParam1, char* sParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam2, &((uParam0[iVar1 /*4*/])->f_1)))
		{
			(*uParam0)[iVar1 /*4*/] = iParam1;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		if (uParam0->f_97 < 24)
		{
			(*uParam0)[uParam0->f_97 /*4*/] = iParam1;
			StringCopy(&((uParam0[uParam0->f_97 /*4*/])->f_1), sParam2, 24);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

bool func_165(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!AUDIO::_0xD89504D9D7D5057D(&cParam1))
	{
		bVar0 = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&cParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_235(cParam1, cParam0);
		if (bParam6)
		{
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&cParam1, true, true, bParam7);
		}
		else
		{
			AUDIO::START_SCRIPT_CONVERSATION(&cParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			AUDIO::_0x40CA665AB9D8D505(&cParam1, iParam5);
		}
	}
	return bVar0;
}

bool func_166(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_167(var uParam0)
{
	func_236(uParam0, 0f);
}

int func_168(int iParam0)
{
	return Global_1128574[iParam0 /*56*/];
}

int func_169(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = GANG::_0x901E0DC25080C8B9(iParam0);
	if (func_170(iParam1))
	{
		if (iVar0 == func_237(iParam1))
		{
			return iParam1;
		}
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (iVar0 == func_237(iVar1))
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

bool func_170(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 32);
}

void func_171(int iParam0)
{
	if (!func_170(iParam0))
	{
		return;
	}
	Global_1128574[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/] = iParam0;
}

int func_172(int iParam0)
{
	if (!GANG::_0xD6F6ACF4392187FB(iParam0))
	{
		return -1;
	}
	if (iParam0 == GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))
	{
		return func_156(PLAYER::PLAYER_ID());
	}
	return func_238(GANG::_0x4BE6C13A45CCA8EC(iParam0));
}

bool func_173(var uParam0, var uParam1)
{
	if (!func_239(uParam0, uParam1))
	{
		return false;
	}
	uParam0->f_2 = 466723622;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

bool func_174(var uParam0, var uParam1)
{
	var uVar0;

	if (!DATAFILE::_0x603AC35FD4602C76(uParam1))
	{
		return false;
	}
	*uParam0 = uParam1;
	uParam0->f_1 = uVar0;
	return true;
}

bool func_175(var uParam0, int iParam1)
{
	uParam0->f_2 = 1089670230;
	uParam0->f_3 = iParam1;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

bool func_176(var uParam0, int iParam1)
{
	int iVar0;

	uParam0->f_2 = -1248823782;
	if (!DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam0))
	{
		return false;
	}
	if (iVar0 == 0)
	{
		return false;
	}
	*iParam1 = func_240(iVar0);
	uParam0->f_2 = 842085562;
	if (!DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam0))
	{
		return false;
	}
	if (iVar0 == 0)
	{
		return false;
	}
	iParam1->f_1 = iVar0;
	return true;
}

var func_177(int iParam0)
{
	return Global_1297717[iParam0 /*4*/].f_1;
}

struct<2> func_178(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_241(iParam0, &(Global_1071686.f_636), func_47(iParam1));
			break;
		case 3:
			Var0.f_1 = func_241(iParam0, &(Global_1071686.f_636.f_602), func_47(iParam1));
			break;
		case 4:
			Var0.f_1 = func_241(iParam0, &(Global_1071686.f_636.f_2104), func_47(iParam1));
			break;
		case 5:
			Var0.f_1 = func_241(iParam0, &(Global_1071686.f_636.f_12606), func_47(iParam1));
			break;
		case 6:
			Var0.f_1 = func_241(iParam0, &(Global_1071686.f_636.f_12908), func_47(iParam1));
			break;
		case 7:
			Var0.f_1 = func_241(iParam0, &(Global_1071686.f_636.f_15910), func_47(iParam1));
			break;
		case 8:
			Var0.f_1 = func_241(iParam0, &(Global_1071686.f_636.f_16512), func_47(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_109();
	}
	return Var0;
}

bool func_179(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_180(struct<2> Param0, int iParam2, int iParam3)
{
	*iParam2 = func_243(func_242(Param0));
	*iParam3 = func_246(func_244(*iParam2), func_245(Param0));
}

bool func_181(int iParam0, int iParam1, vector3 vParam2)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { func_183(iParam0, iParam1) };
	fVar3 = BUILTIN::VDIST(vVar0, vParam2);
	return fVar3 > 2500f;
}

bool func_182(int iParam0, int iParam1, vector3 vParam2)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { func_183(iParam0, iParam1) };
	fVar3 = BUILTIN::VDIST(vVar0, vParam2);
	return fVar3 < 4500f;
}

Vector3 func_183(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_247(iParam0, iParam1);
	return Global_1257541.f_451[iVar0 /*7*/].f_3;
}

Vector3 func_184(vector3 vParam0, vector3 vParam3, float fParam6)
{
	vector3 vVar0;

	vVar0 = { func_248(vParam0, vParam3, fParam6) };
	return vParam0 + vVar0;
}

bool func_185(struct<5> Param0, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	Param0.f_2 = iParam6;
	Param0.f_3 = iParam7;
	Param0.f_4 = iParam8;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(iParam5, &Param0))
	{
		return false;
	}
	return true;
}

int func_186(int iParam0)
{
	return Global_1109804.f_5737[iParam0 /*5*/].f_1;
}

int func_187(struct<5> Param0, var uParam5, int iParam6)
{
	var uVar0;
	int iVar1;
	struct<4> Var2;

	uVar0 = Param0.f_1;
	iVar1 = func_111(uParam5->f_2);
	if (!func_185(Param0, &(Param0.f_1), 2062917018, 0, 0, 1))
	{
		return 0;
	}
	uParam5->f_4[0] = func_249(Param0, -1592717000, 0, 0, -1);
	uParam5->f_4[7] = func_250(Param0, 327661882, iParam6);
	uParam5->f_4[6] = func_250(Param0, -151415096, iParam6);
	uParam5->f_4[5] = func_250(Param0, -1969117434, iParam6);
	uParam5->f_4[8] = func_250(Param0, -377576419, 0);
	uParam5->f_4[9] = func_250(Param0, -1418408851, 0);
	Param0.f_1 = uVar0;
	func_251(Param0, uParam5);
	Param0.f_1 = uVar0;
	func_252(Param0, uParam5);
	*uParam5 = { func_178(uParam5->f_2.f_1, func_253(iVar1)) };
	uParam5->f_31.f_1 = func_254(iVar1, uParam5->f_2.f_1);
	uParam5->f_31 = func_255(iVar1, uParam5->f_2.f_1);
	func_256(func_253(iVar1), uParam5->f_2.f_1, &Var2);
	uParam5->f_4[1] = Var2;
	uParam5->f_4[2] = Var2.f_2;
	uParam5->f_4[3] = Var2.f_1;
	uParam5->f_4[4] = Var2.f_3;
	return 1;
}

int func_188(int iParam0)
{
	return func_257(iParam0);
}

int func_189(int iParam0)
{
	return Global_1116202[iParam0 /*42*/].f_1;
}

int func_190(var uParam0)
{
	if (func_31(*uParam0))
	{
		return 0;
	}
	return 1;
}

int func_191(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_69())
	{
		return 0;
	}
	if (!func_258(iParam0))
	{
		return 15;
	}
	iVar0 = func_259(iParam0);
	if (iVar0 == 0)
	{
		return 19;
	}
	if (!func_260(iParam1, 2))
	{
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(iVar0))
		{
			return 18;
		}
	}
	if (!func_260(iParam1, 1))
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
		{
			return 17;
		}
	}
	return 0;
}

int func_192(var uParam0, int iParam1)
{
	if (uParam0->f_2.f_1 == 0)
	{
		return 2;
	}
	if (!func_260(iParam1, 4))
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(uParam0->f_2.f_1))
		{
			return 4;
		}
	}
	if (!func_260(iParam1, 8))
	{
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(uParam0->f_2.f_1))
		{
			return 3;
		}
	}
	return 0;
}

int func_193(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_260(iParam3, 16))
	{
		return 0;
	}
	if (!func_69())
	{
		return 0;
	}
	if (func_114(uParam0->f_2, 1))
	{
		return 0;
	}
	if (func_261(uParam2, iParam1))
	{
		return 0;
	}
	return 5;
}

int func_194(var uParam0, int iParam1)
{
	int iVar0;

	if (func_260(iParam1, 16384))
	{
		return 0;
	}
	iVar0 = func_227(func_149());
	if (MISC::IS_BIT_SET(uParam0->f_25.f_2, iVar0))
	{
		return 14;
	}
	return 0;
}

int func_195(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (func_260(iParam1, 1024))
	{
		return 0;
	}
	if (!func_258(iParam0))
	{
		return 15;
	}
	if (!func_263(func_262(iParam0)))
	{
		return 0;
	}
	iVar1 = PLAYER::PLAYER_ID();
	iVar0 = GANG::_0x901E0DC25080C8B9(iVar1);
	if (GANG::_0x4BE6C13A45CCA8EC(iVar0) != iVar1)
	{
		return 28;
	}
	return 0;
}

int func_196(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_258(iParam1))
	{
		return 15;
	}
	if (!func_69())
	{
		return 0;
	}
	if (func_260(iParam3, 32))
	{
		return 0;
	}
	if (func_114(uParam0->f_2, 1))
	{
		return 0;
	}
	if (!GANG::_0xD6F6ACF4392187FB(iParam2))
	{
		return 23;
	}
	if (!GANG::_0x93A91A351A07360E(iParam2))
	{
		return 24;
	}
	iVar0 = GANG::_0x4BE6C13A45CCA8EC(iParam2);
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return 29;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 30;
	}
	if (func_264(iVar0, iParam1))
	{
		return 16;
	}
	return 0;
}

int func_197(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!func_265(uParam0->f_2))
	{
		return 21;
	}
	if (!func_69())
	{
		return 0;
	}
	if (func_260(iParam2, 64))
	{
		return 0;
	}
	if (func_114(uParam0->f_2, 1))
	{
		return 0;
	}
	if (!GANG::_0xD6F6ACF4392187FB(iParam1))
	{
		return 23;
	}
	if (!GANG::_0x93A91A351A07360E(iParam1))
	{
		return 24;
	}
	iVar0 = GANG::_0x4BE6C13A45CCA8EC(iParam1);
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return 29;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 30;
	}
	if (func_266(iVar0, uParam0->f_2))
	{
		return 22;
	}
	return 0;
}

int func_198(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = func_267(iParam0);
		if (iParam1 == -1)
		{
			return 26;
		}
	}
	if (func_221(iParam1) != 0)
	{
		if (func_260(iParam2, 2048))
		{
			return 0;
		}
		return 25;
	}
	return 0;
}

int func_199(int iParam0)
{
	int iVar0;

	if (!func_69())
	{
		return 0;
	}
	if (!GANG::_0xD6F6ACF4392187FB(iParam0))
	{
		return 23;
	}
	if (!GANG::_0x93A91A351A07360E(iParam0))
	{
		return 24;
	}
	iVar0 = GANG::_0x4BE6C13A45CCA8EC(iParam0);
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return 29;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 30;
	}
	if (func_31(Global_1056141[iVar0 /*471*/].f_2))
	{
		return 6;
	}
	return 0;
}

int func_200(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (func_260(iParam2, 256))
	{
		return 0;
	}
	if (uParam1->f_31.f_1 == joaat("NONE"))
	{
		return 0;
	}
	iVar0 = GANG::_0x4BE6C13A45CCA8EC(iParam0);
	if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			iVar1 = func_268(iVar0);
		}
		else
		{
			return 30;
		}
	}
	else
	{
		return 29;
	}
	if (iVar1 == 0)
	{
		return 31;
	}
	switch (uParam1->f_31.f_1)
	{
		case joaat("POSITIVE"):
			if (iVar1 != 1)
			{
				return 7;
			}
			break;
		case joaat("NEGATIVE"):
			if (iVar1 != 2)
			{
				return 8;
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_201(var uParam0, int iParam1, int iParam2)
{
	if (func_260(iParam2, 512))
	{
		return 0;
	}
	if (GANG::_0x149A2751AB66AC02(iParam1) < uParam0->f_4[0])
	{
		return 27;
	}
	return 0;
}

int func_202(var uParam0, int iParam1)
{
	struct<16> Var0;
	int iVar33;
	int iVar34;
	int iVar35;

	if (func_260(iParam1, 128))
	{
		return 0;
	}
	if (func_114(uParam0->f_2, 1))
	{
		return 0;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_4 = 10;
	Var0.f_15 = 4;
	Var0.f_15.f_5 = 4;
	Var0.f_25 = 1;
	Var0.f_28 = 2;
	Var0.f_28.f_1 = -1;
	Var0.f_28.f_1.f_1 = -1;
	Var0.f_31 = joaat("NONE");
	Var0.f_31.f_1 = joaat("NONE");
	func_269(&Var0);
	if (!func_31(Var0))
	{
		return 0;
	}
	iVar33 = 0;
	while (iVar33 <= 3)
	{
		iVar34 = (Var0.f_15[iVar33] || Var0.f_15.f_5[iVar33]);
		if (iVar34 == 0)
		{
		}
		else
		{
			iVar35 = (uParam0->f_15.f_5[iVar33] && iVar34);
			if (iVar35 != 0)
			{
				return 9;
			}
		}
		iVar33++;
	}
	return 0;
}

int func_203(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (func_260(iParam1, 4096))
	{
		return 0;
	}
	if (uParam0->f_4[1] > 0)
	{
		iVar1 = NETWORK::GET_MAX_NUM_NETWORK_PEDS();
		iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_PEDS(true);
		if ((iVar1 - iVar0) < uParam0->f_4[1])
		{
			return 10;
		}
	}
	if (uParam0->f_4[2] > 0)
	{
		iVar1 = NETWORK::GET_MAX_NUM_NETWORK_OBJECTS();
		iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(true);
		if ((iVar1 - iVar0) < uParam0->f_4[2])
		{
			return 11;
		}
	}
	if (uParam0->f_4[3] > 0)
	{
		iVar1 = NETWORK::GET_MAX_NUM_NETWORK_VEHICLES();
		iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(true);
		if ((iVar1 - iVar0) < uParam0->f_4[3])
		{
			return 12;
		}
	}
	if (uParam0->f_4[4] > 0)
	{
		iVar1 = NETWORK::GET_MAX_NUM_NETWORK_PICKUPS();
		iVar0 = NETWORK::_GET_NUM_RESERVED_MISSION_PICKUPS(true);
		if ((iVar1 - iVar0) < uParam0->f_4[4])
		{
			return 13;
		}
	}
	return 0;
}

int func_204(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 23;
	}
	iVar0 = GANG::_0x4BE6C13A45CCA8EC(iParam0);
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return 29;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 30;
	}
	if (func_143(iVar0))
	{
		return 44;
	}
	return 0;
}

int func_205(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	vector3 vVar0;
	var uVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	vector3 vVar8;

	if (!func_258(iParam3))
	{
		return 15;
	}
	if (!func_209(iParam4))
	{
		return 20;
	}
	vVar0 = { func_127(iParam4) };
	bVar4 = func_36(iParam1, 536870912);
	if (func_57(&(uParam0->f_25), joaat("REQUIRES_PLAYER_TARGET")) || func_57(&(uParam0->f_25), joaat("REQUIRES_POSSE_TARGET")))
	{
		if (!func_270(iParam2, vVar0, uVar3))
		{
			return 33;
		}
	}
	iVar5 = func_245(*uParam0);
	iVar6 = func_271(uParam0->f_2, iVar5);
	if (!bVar4)
	{
		iVar7 = 0;
		while (iVar7 < iVar6)
		{
			vVar8 = { func_272(uParam0->f_2, iVar5, iVar7) };
			if (func_273(vVar8))
			{
			}
			else if (VOLUME::_0x397769175A7DBB30(vVar8, 20f, 0, 0, joaat("NET_TRAIN")))
			{
				return 34;
			}
			iVar7++;
		}
	}
	return 0;
}

int func_206(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	vector3 vVar4;

	iVar0 = func_245(*uParam0);
	iVar1 = func_271(uParam0->f_2, iVar0);
	bVar2 = func_36(iParam1, 536870912);
	if (!bVar2)
	{
		iVar3 = 0;
		while (iVar3 < iVar1)
		{
			vVar4 = { func_272(uParam0->f_2, iVar0, iVar3) };
			if (func_273(vVar4))
			{
			}
			else if (VOLUME::_0x397769175A7DBB30(vVar4, 20f, 0, 0, joaat("NET_TRAIN")))
			{
				return 34;
			}
			iVar3++;
		}
	}
	return 0;
}

int func_207(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	int iVar8;

	bVar3 = func_260(iParam1, 1073741824 /* Float: 2f */);
	bVar4 = func_260(iParam1, 536870912);
	if (func_260(iParam1, 8192))
	{
		vVar5 = { 0f, 0f, 0f };
	}
	else
	{
		vVar5 = { func_274(GANG::_0x4BE6C13A45CCA8EC(iParam2)) };
	}
	func_275(*uParam0, &iVar1, &iVar2);
	iVar8 = func_277(iVar1, iVar2, func_276(iVar1), vVar5, !bVar3, bVar4, 1, -1082130432 /* Float: -1f */);
	if (iVar8 != 0)
	{
		switch (iVar8)
		{
			case 7:
				iVar0 = 39;
				break;
			case 8:
				iVar0 = 40;
				break;
			case 3:
				iVar0 = 43;
				break;
			case 6:
				iVar0 = 42;
				break;
			case 5:
				iVar0 = 38;
				break;
			case 4:
				iVar0 = 34;
				break;
			case 1:
				iVar0 = 35;
				break;
			case 11:
				iVar0 = 32;
				break;
			case 2:
				iVar0 = 37;
				break;
			case 12:
				iVar0 = 36;
				break;
			case 15:
				iVar0 = 44;
				break;
			default:
				iVar0 = 41;
				break;
		}
		return iVar0;
	}
	return 0;
}

bool func_208(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_278(uParam0, uParam1, iParam2, iParam3))
	{
		return false;
	}
	uParam0->f_2 = 1200720527;
	uParam0->f_3 = iParam4;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

bool func_209(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 62);
}

var func_210(int iParam0)
{
	return Global_1116202[iParam0 /*42*/];
}

bool func_211(var uParam0, var uParam1)
{
	uParam0->f_2 = -1918309560;
	uParam0->f_3 = uParam1;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

char* func_212(bool bParam0, var uParam1, var uParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return uParam2;
}

Vector3 func_213(char* sParam0)
{
	vector3 vVar0[24];

	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

int func_214(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	struct<5> Var0;

	if (!func_279(&Var0, iParam0, iParam1, iParam2, uParam4))
	{
		return 0;
	}
	if (!func_280(&Var0))
	{
		return 0;
	}
	if (!func_281(&Var0, uParam3, 0))
	{
		return 0;
	}
	return func_282(Var0);
}

int func_215(int iParam0)
{
	switch (iParam0)
	{
		case joaat("INTRO_BLACKWATER_FEMALE"):
			return 4;
		case joaat("INTRO_BLACKWATER_MALE"):
			return 3;
		case joaat("INTRO_RHODES_FEMALE"):
			return 8;
		case joaat("INTRO_RHODES_MALE"):
			return 7;
		case joaat("INTRO_TUMBLEWEED_FEMALE"):
			return 6;
		case joaat("INTRO_TUMBLEWEED_MALE"):
			return 5;
		case joaat("INTRO_VALENTINE_FEMALE"):
			return 2;
		case joaat("INTRO_VALENTINE_MALE"):
			return 1;
		case joaat("MULTISTART"):
			return 0;
		case joaat("JOB_BRIEF_1"):
			return 9;
		case joaat("JOB_BRIEF_2"):
			return 10;
		case joaat("JOB_BRIEF_3"):
			return 11;
		case joaat("JOB_BRIEF_4_OFFER"):
			return 12;
		case joaat("JOB_BRIEF_4_REOFFER"):
			return 13;
		case joaat("JOB_BRIEF_4_DECLINE"):
			return 14;
		case joaat("JOB_BRIEF_4_WAIT"):
			return 15;
		case joaat("JOB_BRIEF_4_TAKE"):
			return 16;
		default:
			break;
	}
	return -1;
}

var func_216(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_283() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_284());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_284());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_284());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_285(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_286(iVar2))
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
				if (iVar9 & 8192 != 0 && func_287(iVar2) != 1)
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
					if (!func_288(iVar10))
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

bool func_217(int iParam0, vector3 vParam1, float fParam4)
{
	return BUILTIN::VDIST(func_274(iParam0), vParam1) <= fParam4;
}

bool func_218(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, var uParam5, var uParam6, var uParam7, var uParam8)
{
	int iVar0;
	int iVar1;

	iVar0 = func_111(uParam0->f_2);
	iVar1 = func_188(iVar0);
	*uParam1 = 0;
	switch (iVar1)
	{
		case 2:
			*uParam1 = func_289();
			break;
		case 1:
			*uParam1 = func_290();
			break;
		case 0:
			*uParam1 = func_291(uParam0, bParam3, bParam4, &uParam5, iParam2);
			break;
		default:
			*uParam1 = 1;
			break;
	}
	return *uParam1 == 0;
}

void func_219(int iParam0, int iParam1, struct<2> Param2, var uParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11)
{
	struct<28> Var0;

	if (iParam9 == 255)
	{
		iParam9 = PLAYER::PLAYER_ID();
	}
	if (!func_31(Param2))
	{
		return;
	}
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam9))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam9))
	{
		return;
	}
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_7.f_1 = -1;
	Var0.f_10 = 255;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = 7;
	Var0.f_19.f_1 = 255;
	Var0.f_19.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_27.f_1 = -1;
	Var0.f_5 = iParam0;
	Var0.f_6 = iParam1;
	Var0.f_7 = { Param2 };
	Var0.f_9 = uParam4;
	Var0.f_10 = iParam9;
	Var0.f_12 = iParam10;
	Var0.f_13 = iParam11;
	Var0.f_4 = 0;
	MISC::_COPY_MEMORY(&(Var0.f_27), &iParam5, 4);
	func_292(&Var0);
}

struct<2> func_220()
{
	if (Global_1196205.f_129 <= 0)
	{
		return func_293(0);
	}
	if (Global_1196205.f_130 < 0 || Global_1196205.f_131 == 0)
	{
		return func_293(0);
	}
	return Global_1196205[Global_1196205.f_130 /*4*/].f_1;
}

int func_221(int iParam0)
{
	return Global_1107216.f_33[iParam0 /*16*/].f_2;
}

bool func_222(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219.f_3 && iParam0) != 0;
	}
	return (Global_1100469[iParam1 /*53*/].f_3 && iParam0) != 0;
}

void func_223(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_224(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_294(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_225(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_226(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_227(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_228(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_229(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_230(int iParam0, int iParam1)
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

void func_231(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_295(iParam0, iParam6);
	func_296(iParam0, iParam5);
	func_297(iParam0, iParam4);
	func_298(iParam0, iParam3);
	func_299(iParam0, iParam2);
	func_300(iParam0, iParam1);
}

bool func_232(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_229(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_228(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_227(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_224(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_225(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_226(iParam0);
	if (iVar5 < 1 || iVar5 > func_230(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

int func_233(int iParam0, int iParam1)
{
	if (iParam0 <= -1431009331)
	{
		switch (iParam0)
		{
			case -2146264176:
				return 1659;
			case -2146174609:
				return 4157;
			case -2146022560:
				return 3833;
			case -2145647351:
				return 692;
			case -2145318753:
				return 3305;
			case -2145226319:
				return 4436;
			case -2145160455:
				return 3924;
			case -2144928735:
				return 1908;
			case -2141465661:
				return 286;
			case -2140839212:
				return 5697;
			case -2140306968:
				return 1416;
			case -2140305813:
				return 5579;
			case -2139824094:
				return 4185;
			case -2139769274:
				return 1380;
			case joaat("META_OUTFIT_ANIMAL_ALBINO_BUCK"):
				return 51;
			case -2137715194:
				return 1025;
			case -2137673946:
				return 2690;
			case -2137653778:
				return 888;
			case -2137315553:
				return 140;
			case -2136964196:
				return 661;
			case -2135875556:
				return 4096;
			case -2135256078:
				return 2711;
			case joaat("META_OUTFIT_VAL_PIANO_PLAYER_03"):
				return 637;
			case -2132617886:
				return 4111;
			case -2131880195:
				return 1414;
			case joaat("MP_ASN_PLEASANCE_TAR_06"):
				return 2568;
			case -2131150738:
				return 3223;
			case -2129848553:
				return 3795;
			case -2129355451:
				return 101;
			case -2127985110:
				return 5307;
			case -2126155126:
				return 2674;
			case -2125596339:
				return 5960;
			case -2125383737:
				return 87;
			case -2125106595:
				return 532;
			case -2124548207:
				return 5833;
			case joaat("MP_PRSN_ASN_LAGRAS_01"):
				return 2866;
			case joaat("META_ANIMAL_OUTFIT_BEARBLACK_001"):
				return 23;
			case -2122500420:
				return 1475;
			case -2121883282:
				return 4292;
			case -2121644801:
				return 19;
			case joaat("HAT_MR1_020_ALT02A"):
				return 4706;
			case joaat("META_OUTFIT_ANIMAL_ORIOLEHOODED"):
				return 210;
			case -2119975294:
				return 343;
			case -2119125430:
				return 5588;
			case -2118554223:
				return 3854;
			case joaat("MP_POST_MULTIRELAY_HANGINGDOG_01"):
				return 2828;
			case -2116779830:
				return 5365;
			case joaat("META_ANIMAL_OUTFIT_BIGHORNRAMDESERT_001"):
				return 33;
			case -2116139111:
				return 775;
			case -2115973764:
				return 3481;
			case -2115603751:
				return 5830;
			case -2114378971:
				return 1068;
			case -2113152875:
				return 1351;
			case -2111983088:
				return 6070;
			case joaat("META_OUTFIT_ANIMAL_POISON_REDFIN"):
				return 151;
			case -2109073297:
				return 3397;
			case joaat("META_ANIMAL_OUTFIT_PRONGHORNBAJA"):
				return 228;
			case -2105118656:
				return 4290;
			case -2104935151:
				return 1489;
			case -2104586969:
				return 4135;
			case -2104565027:
				return 1244;
			case -2102130574:
				return 1028;
			case -2101835312:
				return 1392;
			case -2101479603:
				return 4906;
			case -2101147109:
				return 3487;
			case -2101093034:
				return 3911;
			case joaat("MP_INTERCEPT_MACLEANS_RCP_01"):
				return 2613;
			case -2100085706:
				return 3593;
			case -2098602552:
				return 1043;
			case -2096916276:
				return 169;
			case -2096704329:
				return 5858;
			case -2096553321:
				return 5764;
			case -2095519638:
				return 4235;
			case joaat("MP_CONVOY_SCARLETTMDWS_RCP_01"):
				return 2290;
			case -2094870798:
				return 4103;
			case -2094166019:
				return 4221;
			case -2093879639:
				return 552;
			case -2093198664:
				return 5996;
			case joaat("MP_CHU_ROB_CORONADO_PVP_01"):
				return 2244;
			case -2091584368:
				return 3512;
			case joaat("MP_RESCUE_BOTTLETREE_VIP_02"):
				return 2996;
			case -2090109140:
				return 3562;
			case -2089787434:
				return 575;
			case -2089344668:
				return 962;
			case joaat("MP_CHU_KID_VALENTINE_PVP_01"):
				return 2153;
			case -2086001341:
				return 776;
			case -2084512697:
				return 4915;
			case joaat("HAT_MR1_111"):
				return 4780;
			case -2080460852:
				return 2919;
			case -2080172694:
				return 5190;
			case -2079843276:
				return 1992;
			case joaat("META_OUTFIT_ANIMAL_SNAKEREDTAILBOASUN"):
				return 272;
			case -2078086178:
				return 2626;
			case -2076643237:
				return 1480;
			case -2076342574:
				return 5328;
			case -2074824452:
				return 2418;
			case -2074420657:
				return 1176;
			case -2072429185:
				return 782;
			case -2071249344:
				return 1477;
			case joaat("MP_RECOVER_CUMBERLAND_RCP_01"):
				return 2970;
			case -2070950062:
				return 5417;
			case -2070333690:
				return 3930;
			case -2068964823:
				return 4178;
			case -2068787714:
				return 701;
			case -2066758964:
				return 875;
			case -2065784734:
				return 904;
			case joaat("MP_ASN_SDGRAVEYARD_TAR_05"):
				return 2523;
			case -2065283873:
				return 1672;
			case joaat("MP_ONTHEHUNT_SDSWAMP_02"):
				return 1947;
			case joaat("MP_ASN_STILLWATER_TAR_04"):
				return 2035;
			case joaat("META_OUTFIT_ANIMAL_DESERT"):
				return 283;
			case -2064018994:
				return 5720;
			case -2062853177:
				return 5569;
			case -2062832926:
				return 2746;
			case -2062632471:
				return 5099;
			case -2062020707:
				return 1338;
			case -2060762326:
				return 303;
			case -2060755033:
				return 3752;
			case -2060583716:
				return 5771;
			case -2059084029:
				return 1349;
			case -2058878473:
				return 4925;
			case -2055901938:
				return 4080;
			case -2055873676:
				return 5196;
			case -2055137216:
				return 4568;
			case -2053696238:
				return 3647;
			case joaat("MP_CAMPDEF_CHOLLASPRINGS_VIP_03"):
				return 2070;
			case joaat("META_OUTFIT_ANNESBURG_VAR_01"):
				return 4320;
			case -2052395687:
				return 3543;
			case -2051830782:
				return 4430;
			case joaat("MP_CHU_ROB_MACLEANS_VIP_04"):
				return 2217;
			case -2049928019:
				return 3999;
			case -2048803146:
				return 2345;
			case -2048745601:
				return 4382;
			case -2048584500:
				return 4809;
			case -2048198207:
				return 4627;
			case -2047961479:
				return 5490;
			case -2047779582:
				return 4694;
			case -2047589163:
				return 2425;
			case joaat("META_ANIMAL_OUTFIT_BEAVER_000"):
				return 25;
			case -2046800601:
				return 1546;
			case -2046588161:
				return 2297;
			case -2045878709:
				return 917;
			case -2045688369:
				return 4313;
			case -2045421226:
				return 5982;
			case joaat("MP_RESCUE_MTNMANSHACK_VIP_01"):
				return 3007;
			case joaat("MP_ASNTRK_ISABELLA_TAR_05"):
				return 2060;
			case joaat("MP_PRSN_ASN_RHODES_01"):
				return 2869;
			case -2043399880:
				return 3699;
			case -2041433674:
				return 4623;
			case joaat("MP_CONVOY_BRAITHWAITE_RCP_02"):
				return 2279;
			case -2040455288:
				return 3281;
			case -2039491569:
				return 5017;
			case -2039317109:
				return 5745;
			case -2039168220:
				return 5371;
			case joaat("HAT_MR1_071"):
				return 4749;
			case -2036265354:
				return 4333;
			case -2036030698:
				return 261;
			case -2035791733:
				return 342;
			case -2035414332:
				return 2959;
			case -2032706908:
				return 5395;
			case joaat("MP_CHU_KID_EMRSTATION_VIP_01"):
				return 2110;
			case -2031252009:
				return 3978;
			case -2030576241:
				return 1507;
			case -2030519833:
				return 5053;
			case joaat("META_OUTFIT_RHODES_VAR_03"):
				return 399;
			case joaat("GOON2"):
				return 1159;
			case -2028988535:
				return 3052;
			case -2027238640:
				return 4415;
			case -2027178809:
				return 784;
			case joaat("MP_ASN_SHADYBELLE_TAR_03"):
				return 2559;
			case -2025835498:
				return 5138;
			case -2024423022:
				return 4189;
			case -2024019335:
				return 494;
			case -2023759905:
				return 5010;
			case -2022828491:
				return 2382;
			case -2022664299:
				return 5885;
			case -2019650670:
				return 5750;
			case -2018479607:
				return 3601;
			case -2018446432:
				return 5442;
			case -2017846035:
				return 4950;
			case -2016397046:
				return 3299;
			case joaat("MP_ASNTRK_ELYSIANPOOL_TAR_06"):
				return 2043;
			case -2014912220:
				return 1442;
			case joaat("MP_JAILBREAK_VALENTINE_01"):
				return 2651;
			case -2013410069:
				return 1729;
			case joaat("HAT_MR1_086"):
				return 4761;
			case -2011536363:
				return 6089;
			case -2011377728:
				return 4484;
			case -2010799126:
				return 650;
			case -2010594148:
				return 4857;
			case -2008695281:
				return 5131;
			case -2008041226:
				return 5668;
			case joaat("MP_HIDEOUT_CORONADO_01"):
				return 2516;
			case -2007618391:
				return 2876;
			case -2007039164:
				return 4802;
			case -2005308871:
				return 5423;
			case -2004810960:
				return 5067;
			case -2004063720:
				return 5916;
			case joaat("HAT_MR1_003_ALT03"):
				return 4671;
			case joaat("HAT_MR1_104"):
				return 4774;
			case joaat("MP_POST_MULTIPACKAGE_DOWNESRANCH_01"):
				return 2787;
			case -2003110784:
				return 3248;
			case -2002695350:
				return 1878;
			case -2002214774:
				return 753;
			case -2001533938:
				return 5823;
			case -2001088621:
				return 1309;
			case -2000308139:
				return 3707;
			case -1999258307:
				return 1369;
			case joaat("MP_GENERIC_BIGVALLEY_MC_FR_02"):
				return 1831;
			case -1997971106:
				return 1813;
			case -1997216685:
				return 1881;
			case -1995667780:
				return 5054;
			case -1995407527:
				return 3797;
			case -1994959365:
				return 1921;
			case joaat("MP_ASN_PIKESBASIN_TAR_01"):
				return 2012;
			case -1993472916:
				return 1231;
			case -1991993107:
				return 4041;
			case -1991777361:
				return 5009;
			case joaat("MP_STEALBOAT_BARDSCROSSING_RCP_01"):
				return 3053;
			case -1990295382:
				return 629;
			case joaat("META_OUTFIT_ANIMAL_MP_WOLFLARGE_000"):
				return 292;
			case -1989726221:
				return 1045;
			case -1989505391:
				return 60;
			case -1989345804:
				return 2925;
			case -1988294291:
				return 6050;
			case joaat("MP_WGNBRKOUT_GRIZZLIES_RCP_01"):
				return 3134;
			case joaat("MP_POST_MULTIRELAY_TWINS_01"):
				return 2814;
			case -1986469451:
				return 3453;
			case -1986255955:
				return 1473;
			case -1985677233:
				return 2585;
			case -1985419335:
				return 3466;
			case -1985418347:
				return 5341;
			case -1985066158:
				return 1294;
			case -1984768738:
				return 2967;
			case -1984759420:
				return 4367;
			case -1984612737:
				return 3524;
			case joaat("MP_CHU_ROB_BENEDICTPOINT_PVP_01"):
				return 2238;
			case joaat("MP_ONTHEHUNT_STILLWATER_01"):
				return 1956;
			case -1982334109:
				return 2372;
			case -1981788789:
				return 816;
			case -1981180703:
				return 5115;
			case -1980913856:
				return 807;
			case -1978397654:
				return 4479;
			case -1978394955:
				return 417;
			case -1977945158:
				return 3275;
			case -1977731268:
				return 749;
			case joaat("HAT_MR1_047"):
				return 4722;
			case -1976788810:
				return 5754;
			case -1976642421:
				return 4919;
			case -1976596491:
				return 5733;
			case -1975236125:
				return 1374;
			case -1974466207:
				return 5836;
			case joaat("MP_ASN_BENEDICTPOINT_TAR_06"):
				return 1982;
			case -1971706613:
				return 3961;
			case -1970166007:
				return 2963;
			case -1969822078:
				return 2934;
			case -1969062664:
				return 1402;
			case -1968939387:
				return 5447;
			case -1968554893:
				return 3184;
			case -1967326660:
				return 712;
			case -1966680508:
				return 697;
			case -1966118739:
				return 3669;
			case -1965593124:
				return 3896;
			case -1965317174:
				return 4666;
			case joaat("MP_RECOVER_CUMBERLAND_01"):
				return 1969;
			case -1963382864:
				return 1485;
			case -1961401454:
				return 3446;
			case -1960443056:
				return 3791;
			case joaat("MP_JAILBREAK_VALENTINE_RCP_02"):
				return 2657;
			case -1959922885:
				return 1865;
			case -1959137323:
				return 600;
			case -1958369610:
				return 4015;
			case -1958167757:
				return 4081;
			case -1957801167:
				return 5607;
			case -1957219815:
				return 1660;
			case joaat("MP_CHU_KID_RHODES_VIP_02"):
				return 2156;
			case -1955417521:
				return 4055;
			case -1955158759:
				return 3315;
			case -1954867177:
				return 187;
			case -1954329196:
				return 3312;
			case joaat("META_OUTFIT_ANIMAL_LEGENDARY_LARGEMOUTHBASS"):
				return 144;
			case joaat("META_OUTFIT_STRAWBERRY_VAR_03"):
				return 468;
			case -1949892659:
				return 930;
			case -1949821591:
				return 5810;
			case -1949635328:
				return 3264;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_CHIN_001_08"):
				return 5251;
			case -1947283266:
				return 2424;
			case joaat("META_OUTFIT_WALLACESTATION_VAR_01"):
				return 4356;
			case -1946599558:
				return 2718;
			case -1945712043:
				return 1032;
			case joaat("MP_CHU_ROB_AMBARINO_VIP_03"):
				return 2177;
			case -1944919584:
				return 3480;
			case joaat("MP_CHU_KID_TUMBLEWEED_VIP_02"):
				return 2168;
			case joaat("MP_POST_MULTIPACKAGE_SCRATCHINGPOST_01"):
				return 2807;
			case -1941719104:
				return 3741;
			case -1941645950:
				return 2879;
			case -1941352657:
				return 4443;
			case -1940936334:
				return 4943;
			case -1940841943:
				return 5319;
			case joaat("MP_CHU_ROB_PAINTEDSKY_PVP_01"):
				return 2260;
			case joaat("META_OUTFIT_ANIMAL_POISON_DEER"):
				return 90;
			case -1938788117:
				return 5435;
			case -1937807864:
				return 4199;
			case joaat("MP_POST_MULTIPACKAGE_PLAINVIEW_02"):
				return 2802;
			case -1936391549:
				return 1792;
			case -1935583563:
				return 1200;
			case -1934044024:
				return 1670;
			case -1933734961:
				return 1550;
			case -1933220787:
				return 1651;
			case joaat("MP_POST_MULTIRELAY_WALLACESTATION_01"):
				return 2816;
			case -1932883288:
				return 1912;
			case joaat("MP_CHU_KID_VALENTINE_VIP_02"):
				return 2172;
			case -1930139775:
				return 4061;
			case joaat("MP_STEALHORSE_CORNWALL_RCP_01"):
				return 3075;
			case -1929731177:
				return 4220;
			case joaat("MP_ASN_CHOLLASPRINGS_TAR_02"):
				return 2452;
			case -1929067276:
				return 699;
			case -1927594778:
				return 5087;
			case -1926902040:
				return 305;
			case joaat("HAT_MR1_019_ALT02"):
				return 4703;
			case -1926360557:
				return 1706;
			case -1923074166:
				return 3116;
			case -1922964624:
				return 4104;
			case -1922569268:
				return 5198;
			case -1922357071:
				return 674;
			case -1922306316:
				return 4956;
			case -1921806981:
				return 3928;
			case -1921727203:
				return 4006;
			case joaat("MP_CHU_ROB_FORTMERCER_VIP_01"):
				return 2204;
			case -1919539634:
				return 4225;
			case -1919484294:
				return 4332;
			case -1919460136:
				return 5160;
			case -1919360415:
				return 5016;
			case -1918933390:
				return 3832;
			case -1918597712:
				return 4490;
			case -1916624455:
				return 5424;
			case -1916145078:
				return 896;
			case -1915831038:
				return 1020;
			case -1913713471:
				return 2956;
			case joaat("META_OUTFIT_ANIMAL_LEGENDARY_BULLHEADCATFISH"):
				return 136;
			case joaat("META_OUTFIT_ANIMAL_DUCKPEKIN"):
				return 122;
			case -1908798843:
				return 3577;
			case -1908683495:
				return 1586;
			case -1908453874:
				return 1297;
			case -1907769225:
				return 2310;
			case -1906832519:
				return 625;
			case -1905408471:
				return 3756;
			case -1905307570:
				return 6027;
			case -1904738639:
				return 3024;
			case -1903173506:
				return 5905;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_STACHE_000_09"):
				return 5279;
			case joaat("MP_ONTHEHUNT_BRITTLEBRUSH_02"):
				return 1931;
			case -1900033419:
				return 1583;
			case joaat("META_ANIMAL_OUTFIT_BIGHORNSHEEPDESERT_001"):
				return 41;
			case -1897893751:
				return 4499;
			case -1897440844:
				return 5498;
			case -1894771355:
				return 2896;
			case joaat("MP_JAILBREAK_SAINTDENIS_RCP_02"):
				return 2654;
			case -1893568031:
				return 4110;
			case -1892751910:
				return 424;
			case -1892362508:
				return 1074;
			case -1889195005:
				return 6044;
			case -1888986899:
				return 1217;
			case -1888967774:
				return 691;
			case -1888179319:
				return 4877;
			case -1887776194:
				return 448;
			case -1887412228:
				return 5151;
			case -1886665566:
				return 1683;
			case -1885875678:
				return 2344;
			case joaat("MP_INTERCEPT_EMRANCH_PVP_02"):
				return 2593;
			case -1885367506:
				return 5501;
			case -1884786842:
				return 4364;
			case -1884418343:
				return 3553;
			case -1884217679:
				return 5335;
			case joaat("MP_CHU_KID_HEARTLANDS_RCP_01"):
				return 2143;
			case -1881726276:
				return 325;
			case joaat("MP_ASNTRK_BRITTLEBUSH_TAR_06"):
				return 2481;
			case -1880565029:
				return 4904;
			case -1880094873:
				return 2373;
			case -1879838774:
				return 5849;
			case -1879353585:
				return 5464;
			case -1878169871:
				return 2885;
			case -1877045143:
				return 1033;
			case -1876868875:
				return 2740;
			case -1875637971:
				return 4570;
			case joaat("MP_POST_MULTIRELAY_STABLE_01"):
				return 2835;
			case -1874850055:
				return 929;
			case -1874781479:
				return 4934;
			case joaat("META_ANIMAL_OUTFIT_BOAR_001"):
				return 47;
			case -1874258837:
				return 3739;
			case -1874134488:
				return 864;
			case -1873293773:
				return 5129;
			case joaat("META_OUTFIT_WARM"):
				return 3120;
			case -1871004206:
				return 3240;
			case -1870552674:
				return 4431;
			case -1869143774:
				return 106;
			case -1868796873:
				return 5622;
			case -1867922363:
				return 707;
			case -1866920474:
				return 4064;
			case -1862368754:
				return 175;
			case -1862234905:
				return 114;
			case joaat("META_OUTFIT_ANIMAL_MOOSE_M_000"):
				return 208;
			case -1859254916:
				return 4614;
			case -1858926112:
				return 5347;
			case -1858898606:
				return 1180;
			case -1858486478:
				return 3602;
			case -1857829029:
				return 2449;
			case -1857650992:
				return 99;
			case joaat("MP_GENERIC_NEWAUSTIN_MC_FR_04"):
				return 1845;
			case -1855770375:
				return 1134;
			case -1855174034:
				return 5529;
			case -1853075798:
				return 1368;
			case -1852712525:
				return 3592;
			case -1852279992:
				return 944;
			case -1851714665:
				return 3561;
			case -1851674793:
				return 5892;
			case -1851470579:
				return 911;
			case -1850389286:
				return 1313;
			case -1850352093:
				return 3357;
			case -1850152611:
				return 1535;
			case -1850121705:
				return 2974;
			case -1849854231:
				return 3396;
			case joaat("MP_CHU_ROB_STRAWBERRY_PVP_01"):
				return 2265;
			case -1848192343:
				return 3851;
			case joaat("MP_WGNTHIEF_SAINTDENIS_RCP_01"):
				return 3164;
			case -1845953577:
				return 3781;
			case joaat("MP_RESCUE_RIVALSHACK_VIP_02"):
				return 3019;
			case -1844319958:
				return 3665;
			case -1843906223:
				return 1415;
			case -1843583015:
				return 1664;
			case -1842725486:
				return 1152;
			case -1840664073:
				return 5191;
			case -1840513241:
				return 5932;
			case -1838504894:
				return 351;
			case -1837924088:
				return 1907;
			case joaat("META_OUTFIT_ANIMAL_WOLFLARGE_001"):
				return 290;
			case -1837436619:
				return 5997;
			case -1837002177:
				return 3798;
			case -1836959871:
				return 2710;
			case -1836224141:
				return 2629;
			case -1835618648:
				return 1218;
			case joaat("META_ANIMAL_OUTFIT_BIGHORNSHEEPROCKY"):
				return 42;
			case -1833636986:
				return 432;
			case -1832874334:
				return 908;
			case -1832730607:
				return 5185;
			case -1832526039:
				return 4281;
			case -1832243152:
				return 5493;
			case joaat("CS_MADELINEFUSSAR_FS1_VEIL_DOWN_000"):
				return 4518;
			case -1830615991:
				return 5133;
			case -1829754305:
				return 1389;
			case joaat("MP_HIDEOUT_CLEMENSCOVE_01"):
				return 2569;
			case -1826646295:
				return 5744;
			case -1825591488:
				return 5719;
			case joaat("HAT_MR1_013_ALT02"):
				return 4692;
			case -1824163552:
				return 3889;
			case -1823599099:
				return 811;
			case -1823234368:
				return 1088;
			case joaat("CS_VALSHERIFF_MS1_HAT_000"):
				return 4655;
			case -1819706484:
				return 1348;
			case -1819139003:
				return 5366;
			case -1819002142:
				return 4381;
			case -1817923036:
				return 903;
			case -1817150498:
				return 1350;
			case -1816207254:
				return 2426;
			case -1815684694:
				return 1823;
			case -1815262608:
				return 4076;
			case joaat("MP_WGNBRKOUT_WALLACE_PVP_01"):
				return 3151;
			case -1813598970:
				return 3270;
			case -1812506033:
				return 455;
			case joaat("MP_CONVOY_THIEVESLANDING_RCP_01"):
				return 2292;
			case -1810464965:
				return 994;
			case -1810205680:
				return 3811;
			case -1809645762:
				return 5213;
			case -1808277591:
				return 1609;
			case -1807084761:
				return 1610;
			case joaat("HAT_MR1_000"):
				return 4659;
			case -1806874885:
				return 4293;
			case -1806530874:
				return 1868;
			case -1805040708:
				return 4616;
			case -1804910060:
				return 1153;
			case -1804355148:
				return 4177;
			case joaat("HAT_FR1_003"):
				return 4530;
			case -1804252262:
				return 5091;
			case joaat("META_ANIMAL_OUTFIT_BADGER_001"):
				return 11;
			case -1803656137:
				return 341;
			case joaat("MP_INTRO_EXCONFED_MAP"):
				return 2574;
			case -1801420626:
				return 3692;
			case -1801357768:
				return 5396;
			case -1800272886:
				return 700;
			case joaat("MP_GENERIC_BAYOUNWA_MC_FR_03"):
				return 1829;
			case -1799940890:
				return 959;
			case -1799565685:
				return 4621;
			case -1798520943:
				return 5222;
			case -1798423455:
				return 166;
			case -1798141822:
				return 4516;
			case -1798029386:
				return 2747;
			case -1797971034:
				return 1557;
			case -1797082499:
				return 1181;
			case -1796885708:
				return 3051;
			case -1796457889:
				return 723;
			case joaat("MP_CAMPDEF_RIOBRAVO_VIP_01"):
				return 2095;
			case -1794941878:
				return 4277;
			case -1794585074:
				return 1741;
			case -1793650112:
				return 3823;
			case -1793109916:
				return 4582;
			case -1793085205:
				return 5948;
			case -1792054911:
				return 16;
			case -1791829633:
				return 3186;
			case -1791549726:
				return 5615;
			case -1790355019:
				return 1055;
			case -1789762909:
				return 1490;
			case -1789289437:
				return 4437;
			case -1788824885:
				return 4136;
			case -1787852230:
				return 1542;
			case -1787532689:
				return 4481;
			case -1787435613:
				return 3359;
			case -1786951222:
				return 1875;
			case -1785874284:
				return 4953;
			case joaat("MP_ASNTRK_BRITTLEBUSH_TAR_05"):
				return 2480;
			case joaat("META_ANIMAL_OUTFIT_BUFFALO_M"):
				return 57;
			case -1784309042:
				return 3303;
			case -1784063667:
				return 2695;
			case -1784000891:
				return 3284;
			case joaat("MP_GENERIC_AMBARINO_MC_FR_02"):
				return 1825;
			case -1782069628:
				return 6025;
			case -1780713192:
				return 4672;
			case -1777566710:
				return 5945;
			case joaat("MP_RESUPPLY_VALENTINE_RCP_02"):
				return 3037;
			case -1774816995:
				return 4213;
			case -1774801049:
				return 892;
			case joaat("HAT_MR1_087"):
				return 4762;
			case -1773118356:
				return 5097;
			case -1772475149:
				return 4264;
			case -1772280224:
				return 4433;
			case -1768198105:
				return 5477;
			case -1767662294:
				return 2677;
			case -1767504309:
				return 5918;
			case -1766555230:
				return 6082;
			case joaat("MP_STEALWAGON_LAKAY_PVP_01"):
				return 3102;
			case joaat("MP_CHU_KID_LAGRAS_VIP_03"):
				return 2128;
			case -1763600211:
				return 77;
			case -1763331562:
				return 876;
			case -1762535879:
				return 308;
			case -1762132839:
				return 5859;
			case -1760923706:
				return 511;
			case -1760674737:
				return 1123;
			case -1760367298:
				return 5590;
			case -1758346216:
				return 5102;
			case -1757841025:
				return 2883;
			case joaat("MP_ONTHEHUNT_SDSWAMP_03"):
				return 1948;
			case -1756110012:
				return 304;
			case joaat("MP_STEALWAGON_COOTSCHAPEL_PVP_01"):
				return 3095;
			case -1755405979:
				return 5824;
			case -1754643252:
				return 5224;
			case -1752620025:
				return 4735;
			case -1751905907:
				return 3307;
			case -1750979848:
				return 63;
			case -1749516295:
				return 5197;
			case joaat("MP_REPO_HENNIGANS_RCP_01"):
				return 2983;
			case -1749422623:
				return 4505;
			case -1748391817:
				return 2429;
			case -1747475060:
				return 2948;
			case -1746328728:
				return 5732;
			case -1745814259:
				return 5983;
			case -1745231723:
				return 1587;
			case -1742831887:
				return 1765;
			case joaat("MP_CHU_ROB_ANNESBURG_PVP_01"):
				return 2236;
			case -1741663211:
				return 4601;
			case -1740992590:
				return 3576;
			case joaat("META_OUTFIT_ANIMAL_MOOSE_000"):
				return 205;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_STACHE_002_04"):
				return 5290;
			case -1738076300:
				return 5051;
			case -1737522633:
				return 2933;
			case -1736560981:
				return 1699;
			case joaat("HAT_MR1_048"):
				return 4724;
			case -1734681953:
				return 3298;
			case -1734664013:
				return 3550;
			case -1734499242:
				return 5084;
			case joaat("XXX"):
				return 1999;
			case -1733213088:
				return 5465;
			case -1732509097:
				return 3444;
			case -1731323148:
				return 4475;
			case -1730985076:
				return 2962;
			case -1729681972:
				return 326;
			case -1729134904:
				return 5386;
			case -1729035334:
				return 1565;
			case -1728830086:
				return 5730;
			case -1728391502:
				return 4060;
			case -1726716657:
				return 4190;
			case -1726696266:
				return 416;
			case -1724195898:
				return 3597;
			case -1722915132:
				return 5478;
			case -1722676505:
				return 5339;
			case -1721582639:
				return 4000;
			case -1719510685:
				return 5528;
			case -1718587429:
				return 4416;
			case -1717866408:
				return 5074;
			case joaat("MP_CHU_KID_RHODES_VIP_01"):
				return 2155;
			case -1717231026:
				return 2945;
			case -1716866223:
				return 3949;
			case joaat("MP_RESUPPLY_ANNESBURG_RCP_01"):
				return 3023;
			case -1714923637:
				return 1183;
			case -1714012084:
				return 2359;
			case -1713807682:
				return 1337;
			case -1712783565:
				return 853;
			case -1711852739:
				return 5336;
			case joaat("MP_CHU_KID_LAGRAS_RCP_01"):
				return 2145;
			case -1711192206:
				return 268;
			case -1710837274:
				return 5809;
			case joaat("HAT_MR1_001"):
				return 4662;
			case joaat("MP_INTERCEPT_SCARLETTMDWS_RCP_02"):
				return 2623;
			case joaat("MP_POST_MULTIRELAY_SHADYBELLE_01"):
				return 2834;
			case -1707839135:
				return 2878;
			case -1706721296:
				return 3360;
			case joaat("MP_CHU_KID_TUMBLEWEED_VIP_03"):
				return 2169;
			case -1705011396:
				return 188;
			case -1704791496:
				return 1201;
			case -1704514526:
				return 907;
			case -1704391393:
				return 2890;
			case joaat("MP_JAILBREAK_SAINTDENIS_RCP_01"):
				return 2653;
			case -1701854925:
				return 5891;
			case -1701454806:
				return 1569;
			case -1700886193:
				return 2721;
			case -1699183538:
				return 918;
			case joaat("MP_POST_RELAY_CORNWALL_01"):
				return 2843;
			case -1697681725:
				return 1003;
			case -1697351307:
				return 1922;
			case -1696722136:
				return 1177;
			case joaat("MP_JAILBREAK_BLACKWATER_01"):
				return 2648;
			case -1693385732:
				return 4983;
			case -1692712823:
				return 4029;
			case -1692508048:
				return 4005;
			case joaat("MP_REPO_BRITTLEBRUSH_RCP_01"):
				return 2979;
			case joaat("MP_ASNTRK_ELYSIANPOOL_TAR_01"):
				return 2038;
			case -1688988898:
				return 4687;
			case joaat("META_OUTFIT_ANIMAL_SNAKENORTHCOPPER"):
				return 269;
			case -1688724759:
				return 3237;
			case -1688599639:
				return 5393;
			case -1688362028:
				return 4371;
			case joaat("MP_INTRO_SKINNER_01"):
				return 2540;
			case -1686701703:
				return 1873;
			case -1686689172:
				return 2394;
			case -1685777290:
				return 97;
			case -1685656165:
				return 3306;
			case joaat("MP_CHU_ROB_MACLEANS_VIP_03"):
				return 2216;
			case -1685141520:
				return 4942;
			case -1685056864:
				return 5941;
			case -1684873224:
				return 2913;
			case -1683824744:
				return 2419;
			case -1683495893:
				return 1643;
			case -1683321617:
				return 5654;
			case -1683207356:
				return 829;
			case -1680831884:
				return 4888;
			case joaat("META_OUTFIT_ANIMAL_COYOTE_001"):
				return 80;
			case -1679307687:
				return 3415;
			case -1678797866:
				return 996;
			case joaat("MP_WGNBRKOUT_RIOBRAVO_RCP_01"):
				return 3142;
			case -1676093373:
				return 3716;
			case -1673621462:
				return 1360;
			case -1673412743:
				return 6048;
			case -1672286511:
				return 2377;
			case -1672122105:
				return 825;
			case -1671702936:
				return 4261;
			case joaat("MP_WGNBRKOUT_VANHORN_RCP_01"):
				return 3150;
			case -1671114080:
				return 2364;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_CHIN_001_06"):
				return 5249;
			case -1670820257:
				return 5685;
			case joaat("MP_POST_MULTIPACKAGE_HAGENORCHARD_01"):
				return 2794;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_STACHE_001_09"):
				return 5288;
			case -1669099240:
				return 3893;
			case -1668710380:
				return 3871;
			case -1667956595:
				return 1763;
			case joaat("META_ANIMAL_OUTFIT_BIGHORNSHEEPDESERT_000"):
				return 40;
			case -1666457514:
				return 1568;
			case -1666017633:
				return 5557;
			case joaat("MP_WGNBRKOUT_THIEVESLANDING_RCP_01"):
				return 3145;
			case joaat("HAT_MR1_072"):
				return 4750;
			case -1663690711:
				return 4817;
			case -1663612333:
				return 3401;
			case -1662735223:
				return 5774;
			case -1662212387:
				return 3790;
			case -1661461005:
				return 4834;
			case -1660940050:
				return 4859;
			case -1660685403:
				return 4282;
			case -1660247652:
				return 2376;
			case -1659928591:
				return 4980;
			case -1659748743:
				return 5751;
			case -1658942149:
				return 809;
			case -1658678514:
				return 4374;
			case -1658670882:
				return 1228;
			case -1658456747:
				return 4903;
			case -1658171298:
				return 2750;
			case -1657683132:
				return 4328;
			case joaat("MP_JAILBREAK_STRAWBERRY_RCP_01"):
				return 2655;
			case -1657368851:
				return 956;
			case -1657259210:
				return 1816;
			case -1656875634:
				return 2526;
			case -1656844496:
				return 3375;
			case -1656413848:
				return 3817;
			case -1656392754:
				return 1151;
			case joaat("META_OUTFIT_ANIMAL_POSSUM_000"):
				return 226;
			case -1654350622:
				return 5696;
			case -1654288789:
				return 4113;
			case -1654253048:
				return 4182;
			case -1653926122:
				return 3710;
			case -1652831454:
				return 4014;
			case -1652291189:
				return 360;
			case -1652230242:
				return 5606;
			case -1651896864:
				return 4501;
			case -1650890369:
				return 3246;
			case -1649740092:
				return 332;
			case -1647875011:
				return 1690;
			case -1647235544:
				return 4803;
			case -1647061387:
				return 4230;
			case -1645688396:
				return 3778;
			case -1645147819:
				return 4387;
			case -1644591216:
				return 5397;
			case -1643885185:
				return 4642;
			case -1642657901:
				return 5863;
			case -1642564421:
				return 1073;
			case -1641874111:
				return 5150;
			case -1641274409:
				return 5633;
			case -1640762496:
				return 5463;
			case -1640716785:
				return 3682;
			case -1638703055:
				return 933;
			case -1637957348:
				return 1394;
			case -1637177015:
				return 4066;
			case -1636871046:
				return 1108;
			case -1635384855:
				return 5977;
			case -1633878218:
				return 1447;
			case -1633829182:
				return 5317;
			case -1633660043:
				return 1305;
			case -1633479938:
				return 3863;
			case joaat("META_OUTFIT_VAL_PIANO_PLAYER_02"):
				return 636;
			case joaat("HAT_MR1_019_ALT01"):
				return 5297;
			case -1630877736:
				return 4158;
			case -1628123398:
				return 6079;
			case -1628061557:
				return 5789;
			case -1627162408:
				return 1819;
			case -1626168196:
				return 2903;
			case -1625272662:
				return 802;
			case -1624813293:
				return 171;
			case joaat("MP_CHU_ROB_RATHSKELLER_PVP_01"):
				return 2262;
			case -1622619859:
				return 5491;
			case -1622509737:
				return 3228;
			case -1622218360:
				return 357;
			case -1622009864:
				return 3043;
			case -1621704821:
				return 5174;
			case -1621377534:
				return 5334;
			case -1621227431:
				return 1427;
			case joaat("MP_CHU_ROB_ANNESBURG_VIP_04"):
				return 2181;
			case -1619093821:
				return 1298;
			case joaat("META_OUTFIT_ANIMAL_LEGENDARY_LONGNOSEGAR"):
				return 145;
			case -1618758214:
				return 1715;
			case -1617752974:
				return 1770;
			case joaat("MP_GENERIC_BIGVALLEY_MC_FR_01"):
				return 1830;
			case -1617539745:
				return 1135;
			case -1615863595:
				return 561;
			case -1615432839:
				return 5641;
			case -1614755787:
				return 5882;
			case -1614195900:
				return 4384;
			case joaat("MP_RESCUE_RHODES_RCP_01"):
				return 3013;
			case joaat("MP_CONVOY_BLACKWATER_RCP_01"):
				return 2277;
			case -1610932426:
				return 4184;
			case joaat("MP_CONVOY_GAPTOOTH_RCP_01"):
				return 2284;
			case -1610048049:
				return 4316;
			case joaat("MP_RESCUE_LOFTKIDNAP_VIP_01"):
				return 3002;
			case joaat("MP_CHU_ROB_FORTMERCER_RCP_01"):
				return 2249;
			case joaat("MP_POST_MULTIPACKAGE_FIRWOODRISE_01"):
				return 2788;
			case -1608259145:
				return 1312;
			case joaat("HAT_MR1_037"):
				return 4713;
			case -1607286216:
				return 1385;
			case -1606392732:
				return 2309;
			case -1606283158:
				return 5848;
			case -1605285347:
				return 1219;
			case -1603306200:
				return 1682;
			case -1602318062:
				return 4365;
			case -1601061385:
				return 1895;
			case -1600439903:
				return 385;
			case -1594828128:
				return 598;
			case joaat("MP_ASN_CHOLLASPRINGS_TAR_03"):
				return 2453;
			case joaat("MP_ASN_PIKESBASIN_TAR_05"):
				return 2015;
			case -1593746441:
				return 3575;
			case joaat("MP_CHU_ROB_MACFARLANES_VIP_04"):
				return 2211;
			case -1591865145:
				return 3456;
			case -1591634816:
				return 4580;
			case joaat("MP_REPOBOAT_MONTANARIVER_RCP_01"):
				return 2988;
			case -1591111080:
				return 848;
			case -1590470677:
				return 5689;
			case -1587011665:
				return 1866;
			case -1586217583:
				return 5815;
			case -1585799712:
				return 983;
			case joaat("MP_REPOBOAT_QUAKERSCOVE_RCP_01"):
				return 2994;
			case -1585457172:
				return 194;
			case -1585264383:
				return 2488;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_CHIN_001_10"):
				return 5253;
			case -1584941677:
				return 5773;
			case joaat("MP_CHU_KID_GREATPLAINS_PVP_01"):
				return 2138;
			case joaat("META_OUTFIT_VANHORN_VAR_03"):
				return 447;
			case -1581934131:
				return 1636;
			case -1581899110:
				return 3763;
			case -1581254271:
				return 1479;
			case -1579976765:
				return 3097;
			case -1578231470:
				return 3260;
			case joaat("MP_CHU_KID_ARMADILLO_PVP_01"):
				return 2134;
			case -1577148566:
				return 2888;
			case -1576102732:
				return 4594;
			case -1573434425:
				return 2383;
			case -1572828302:
				return 5658;
			case -1572357838:
				return 5052;
			case -1572147111:
				return 5519;
			case -1572093441:
				return 2961;
			case joaat("MP_POST_MULTIPACKAGE_PLAINVIEW_01"):
				return 2801;
			case -1571002461:
				return 1646;
			case -1568443351:
				return 1056;
			case -1567519111:
				return 2662;
			case joaat("MP_STEALWAGON_SDDOCKS_RCP_01"):
				return 3105;
			case joaat("META_ANIMAL_OUTFIT_PARROTGREEN"):
				return 218;
			case -1564894869:
				return 739;
			case -1563895690:
				return 3423;
			case -1563652190:
				return 3309;
			case joaat("MP_STEALHORSE_HENNIGANS_RCP_01"):
				return 3080;
			case -1563081337:
				return 3536;
			case -1563068536:
				return 3485;
			case -1563051489:
				return 5616;
			case -1562279715:
				return 5029;
			case -1562249180:
				return 454;
			case joaat("MAGICLANTERN_TICKETS_BLW_01"):
				return 4324;
			case joaat("MP_CHU_ROB_MACFARLANES_PVP_01"):
				return 2252;
			case -1558958207:
				return 1791;
			case -1558436275:
				return 176;
			case -1557882867:
				return 4458;
			case -1557713620:
				return 4590;
			case -1557019759:
				return 571;
			case -1556983578:
				return 4228;
			case joaat("MP_WGNBRKOUT_FORTRIGGS_RCP_01"):
				return 3132;
			case -1556331145:
				return 658;
			case -1555741265:
				return 3835;
			case joaat("MP_GENERIC_NEWAUSTIN_MC_FR_05"):
				return 1846;
			case joaat("MP_INTERCEPT_SCARLETTMDWS_RCP_01"):
				return 2622;
			case -1553790318:
				return 1923;
			case -1553389853:
				return 170;
			case -1552443230:
				return 3180;
			case -1550390690:
				return 3294;
			case joaat("MP_OTH_VALENTINE_RCP_01"):
				return 2760;
			case -1549599902:
				return 5647;
			case -1548766004:
				return 5351;
			case -1548698671:
				return 5614;
			case -1544226194:
				return 4045;
			case -1543850542:
				return 4039;
			case -1543620048:
				return 4141;
			case -1543553099:
				return 1713;
			case -1542012855:
				return 5775;
			case joaat("PANTHER_LEGENDARY"):
				return 217;
			case joaat("HAT_FR1_659"):
				return 4554;
			case joaat("META_OUTFIT_ANIMAL_SPARROWGOLD"):
				return 277;
			case joaat("META_OUTFIT_ANIMAL_MOOSE_M"):
				return 207;
			case -1538619724:
				return 1311;
			case -1536919869:
				return 2696;
			case joaat("MP_CHU_KID_LAGRAS_VIP_04"):
				return 2129;
			case -1534633822:
				return 497;
			case -1532938555:
				return 4838;
			case -1532821035:
				return 3734;
			case -1532190468:
				return 5912;
			case -1531340772:
				return 5860;
			case -1530110665:
				return 648;
			case -1530007604:
				return 1596;
			case -1529475098:
				return 2334;
			case -1529298468:
				return 2734;
			case -1527307534:
				return 940;
			case -1527290165:
				return 3238;
			case joaat("HAT_MR1_063_ALT01"):
				return 4741;
			case joaat("HAT_FR1_031"):
				return 4546;
			case -1526619390:
				return 5921;
			case -1525834538:
				return 2762;
			case -1525735571:
				return 5602;
			case -1523785647:
				return 5225;
			case -1523754853:
				return 3291;
			case -1521927449:
				return 3564;
			case -1520891032:
				return 698;
			case -1520071465:
				return 313;
			case -1519234590:
				return 1308;
			case -1518285800:
				return 3414;
			case -1517321118:
				return 1149;
			case -1517026808:
				return 1903;
			case -1516204020:
				return 1009;
			case -1515725322:
				return 96;
			case -1514638394:
				return 307;
			case -1514322130:
				return 62;
			case -1513371958:
				return 1902;
			case -1513285038:
				return 1764;
			case -1513173960:
				return 4432;
			case -1512908416:
				return 1014;
			case -1512795993:
				return 3847;
			case -1512404267:
				return 4150;
			case -1512332975:
				return 5653;
			case -1511659722:
				return 1658;
			case joaat("HAT_MR1_090"):
				return 4765;
			case -1509899035:
				return 2428;
			case -1509489095:
				return 927;
			case -1509272546:
				return 4137;
			case -1509202909:
				return 2986;
			case -1508185179:
				return 20;
			case joaat("MP_INTRO_SKINNER_04"):
				return 2543;
			case -1506035277:
				return 3799;
			case joaat("HAT_MR1_049"):
				return 4725;
			case joaat("MP_INTERCEPT_DOWNESRANCH_PVP_01"):
				return 2604;
			case -1502482981:
				return 3222;
			case -1502465472:
				return 4239;
			case -1502403501:
				return 3693;
			case -1501870259:
				return 4935;
			case -1501090741:
				return 3546;
			case -1500321066:
				return 4262;
			case -1500056000:
				return 4695;
			case joaat("HAT_MR1_018"):
				return 4702;
			case -1498713364:
				return 5140;
			case -1496994998:
				return 1246;
			case -1496870986:
				return 3689;
			case -1496774448:
				return 347;
			case joaat("META_OUTFIT_COOL_WEATHER"):
				return 761;
			case joaat("MP_CONVOY_THIEVESLANDING_RCP_02"):
				return 2293;
			case -1493936593:
				return 5840;
			case -1493244658:
				return 5206;
			case -1493238804:
				return 5533;
			case -1492581155:
				return 1270;
			case -1491647079:
				return 913;
			case -1490493736:
				return 724;
			case -1490319816:
				return 714;
			case joaat("MP_CAMPDEF_HEARTLANDS1_VIP_01"):
				return 2083;
			case -1489772551:
				return 4521;
			case -1489434632:
				return 1264;
			case -1489376948:
				return 180;
			case -1488960902:
				return 3472;
			case -1488957880:
				return 899;
			case -1488590064:
				return 5762;
			case -1488297872:
				return 2324;
			case -1487489495:
				return 4201;
			case -1485859364:
				return 5664;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_CHOPS_001_02"):
				return 5263;
			case -1485528164:
				return 3374;
			case -1484539858:
				return 5228;
			case -1484349655:
				return 3626;
			case joaat("META_ANIMAL_OUTFIT_BUFFALO_M_001"):
				return 59;
			case joaat("MP_INTERCEPT_PLAINVIEW_PVP_01"):
				return 2616;
			case -1483933996:
				return 1775;
			case -1483825116:
				return 2682;
			case -1482259257:
				return 1029;
			case -1481374961:
				return 3603;
			case -1478289037:
				return 3824;
			case -1477979818:
				return 5374;
			case -1476281865:
				return 998;
			case joaat("HAT_MR1_013"):
				return 4691;
			case joaat("META_OUTFIT_ANIMAL_SKUNK_000"):
				return 264;
			case joaat("MP_POST_MULTIRELAY_ABERDEENFARM_01"):
				return 2817;
			case -1468761797:
				return 2420;
			case -1465370721:
				return 2906;
			case joaat("HAT_MR1_117"):
				return 4783;
			case -1463907227:
				return 5430;
			case joaat("MP_STEALHORSE_GREATPLAINS_PVP_01"):
				return 3077;
			case -1462204658:
				return 4937;
			case -1461009992:
				return 2678;
			case -1458799893:
				return 2910;
			case -1458782213:
				return 3510;
			case -1458339634:
				return 517;
			case joaat("MP_CHU_KID_HEARTLANDS_VIP_04"):
				return 2125;
			case -1455578863:
				return 1012;
			case -1454471698:
				return 1897;
			case -1453913440:
				return 1492;
			case joaat("HAT_FR1_000"):
				return 4527;
			case -1452025865:
				return 1171;
			case joaat("MP_CHU_ROB_MACLEANS_VIP_02"):
				return 2215;
			case -1451202427:
				return 5688;
			case joaat("META_OUTFIT_RHODES_VAR_01"):
				return 397;
			case -1449285706:
				return 3463;
			case joaat("MP_RESCUE_MTNMANSHACK_VIP_03"):
				return 3009;
			case -1448684120:
				return 663;
			case joaat("MP_ASN_STILLWATER_TAR_05"):
				return 2036;
			case joaat("CS_SENORANDREASCOLON_MS1_HAT_000"):
				return 4646;
			case -1446557592:
				return 3427;
			case -1446405170:
				return 3468;
			case joaat("HAT_MR1_020"):
				return 4704;
			case -1445786432:
				return 102;
			case -1445377289:
				return 2897;
			case -1444451533:
				return 4331;
			case -1443192745:
				return 854;
			case -1442082910:
				return 5123;
			case joaat("MP_CHU_ROB_MILLESANI_VIP_02"):
				return 2219;
			case -1439059407:
				return 4317;
			case -1438531759:
				return 320;
			case -1438333946:
				return 3551;
			case joaat("META_ANIMAL_OUTFIT_BULLANGUS"):
				return 66;
			case -1437962122:
				return 1002;
			case -1437774935:
				return 1538;
			case joaat("MP_RECOVER_DEADHORSE_01"):
				return 1805;
			case -1437357772:
				return 3906;
			case -1437250717:
				return 3822;
			case -1436021139:
				return 4288;
			case -1433423823:
				return 2527;
			case -1432204856:
				return 3539;
			case -1431009331:
				return 456;
			default:
				break;
		}
		if (iParam1 >= 1)
		{
		}
		return -1;
	}
	if (iParam0 <= -709559055)
	{
		switch (iParam0)
		{
			case -1430501378:
				return 4804;
			case -1430424821:
				return 4207;
			case joaat("MP_RECOVER_GRIZZLIES_03"):
				return 1971;
			case -1429144742:
				return 4256;
			case -1429105367:
				return 4482;
			case -1428581112:
				return 5786;
			case -1428269438:
				return 1817;
			case -1427362099:
				return 580;
			case -1427237161:
				return 5149;
			case -1427175664:
				return 1082;
			case -1426797006:
				return 4301;
			case -1426399484:
				return 3918;
			case joaat("MP_CHU_ROB_PAINTEDSKY_VIP_04"):
				return 2229;
			case -1424665050:
				return 3972;
			case -1423820707:
				return 5695;
			case -1423697473:
				return 1189;
			case joaat("CROWN_FR1_001"):
				return 4503;
			case joaat("MP_GENERIC_GREATPLAINS_MC_FR_02"):
				return 1837;
			case -1422785781:
				return 1500;
			case -1420946934:
				return 337;
			case -1420797149:
				return 4072;
			case -1419477656:
				return 778;
			case joaat("HAT_MR1_005"):
				return 4676;
			case -1418145066:
				return 3595;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_CHOPS_000_10"):
				return 5262;
			case -1417213111:
				return 3118;
			case -1417062269:
				return 1887;
			case -1416785721:
				return 4311;
			case -1416333319:
				return 5566;
			case -1416131140:
				return 710;
			case -1416025249:
				return 4369;
			case -1416012810:
				return 3846;
			case -1415435548:
				return 4112;
			case -1414706886:
				return 482;
			case -1414685225:
				return 1062;
			case -1413962767:
				return 5958;
			case -1412421821:
				return 3439;
			case -1412377177:
				return 5705;
			case -1411950140:
				return 1739;
			case -1411705908:
				return 1333;
			case -1411265617:
				return 1107;
			case -1410347852:
				return 5831;
			case -1407064861:
				return 2358;
			case -1406781773:
				return 4504;
			case -1406359176:
				return 5011;
			case -1406281814:
				return 5337;
			case -1405779113:
				return 3325;
			case -1402854691:
				return 3838;
			case -1402624140:
				return 5861;
			case -1401758588:
				return 1666;
			case -1400562405:
				return 5179;
			case -1400081399:
				return 2396;
			case joaat("MP_HAT_FR1_000"):
				return 4559;
			case -1399124181:
				return 1247;
			case -1399032138:
				return 2340;
			case -1398409131:
				return 877;
			case -1395814000:
				return 1295;
			case -1395382793:
				return 902;
			case -1394369597:
				return 1446;
			case joaat("META_OUTFIT_ANIMAL_COYOTE_000"):
				return 79;
			case -1392573190:
				return 3378;
			case -1392452136:
				return 5372;
			case -1391506397:
				return 5358;
			case -1391430645:
				return 2367;
			case -1390102139:
				return 4181;
			case joaat("META_OUTFIT_ANIMAL_PIGOLDSPOT"):
				return 224;
			case -1388621527:
				return 1714;
			case -1388612501:
				return 3574;
			case -1388550516:
				return 5890;
			case -1387626090:
				return 1578;
			case -1387257155:
				return 440;
			case -1386325513:
				return 1111;
			case joaat("MP_CHU_KID_ARMADILLO_VIP_03"):
				return 2104;
			case -1383825069:
				return 3434;
			case -1383406675:
				return 3121;
			case joaat("META_OUTFIT_ANIMAL_FOX_000"):
				return 157;
			case -1382876584:
				return 1070;
			case -1382760660:
				return 4471;
			case -1382555764:
				return 5752;
			case -1382522231:
				return 2384;
			case joaat("MP_ASN_PLEASANCE_TAR_04"):
				return 2557;
			case -1381923045:
				return 2636;
			case -1381778755:
				return 3635;
			case -1381586791:
				return 1771;
			case -1380599125:
				return 4183;
			case -1380270731:
				return 3610;
			case -1380076963:
				return 4858;
			case -1378452636:
				return 977;
			case -1376650763:
				return 3722;
			case joaat("MP_CHU_KID_LEMOYNE_VIP_03"):
				return 2131;
			case -1375925891:
				return 5127;
			case -1375282377:
				return 1254;
			case joaat("MP_RESCUE_SCARLETTMEADOWS_VIP_01"):
				return 3020;
			case -1372641200:
				return 3293;
			case joaat("META_ANIMAL_OUTFIT_BIGHORNRAMDESERT_000"):
				return 32;
			case -1372069185:
				return 3772;
			case -1372016835:
				return 4500;
			case -1371808796:
				return 634;
			case -1369857002:
				return 1762;
			case joaat("HAT_MR1_067"):
				return 4746;
			case -1367876794:
				return 5329;
			case -1366634930:
				return 5229;
			case -1366091334:
				return 5605;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_CHIN_001_07"):
				return 5250;
			case joaat("META_OUTFIT_ANIMAL_JAVELINA_000"):
				return 199;
			case -1362984132:
				return 906;
			case -1361955403:
				return 3894;
			case joaat("MP_CHU_ROB_FORTMERCER_VIP_02"):
				return 2205;
			case joaat("META_OUTFIT_ANIMAL_SQUIRREL_001"):
				return 280;
			case joaat("MP_PRSN_ASN_EMRANCH_01"):
				return 2862;
			case -1359750912:
				return 2645;
			case -1359472568:
				return 964;
			case -1358251276:
				return 1867;
			case -1358122120:
				return 3177;
			case -1357503905:
				return 3334;
			case -1357285928:
				return 4019;
			case joaat("HAT_FR1_019"):
				return 4538;
			case -1356952956:
				return 1352;
			case -1356406792:
				return 2768;
			case -1356288087:
				return 2932;
			case -1353721636:
				return 2437;
			case -1353111441:
				return 4090;
			case joaat("MP_CHU_ROB_GREENHOLLOW_PVP_01"):
				return 2250;
			case -1350741152:
				return 1852;
			case -1349597701:
				return 3816;
			case joaat("MP_ASN_SDPOLICESTATION_TAR_05"):
				return 2021;
			case -1349461172:
				return 3984;
			case -1349400926:
				return 5632;
			case -1347740553:
				return 4608;
			case joaat("META_ANIMAL_OUTFIT_BEARBLACK_000"):
				return 22;
			case -1345986938:
				return 660;
			case -1345974820:
				return 3245;
			case joaat("MP_POST_RELAY_GRAVEYARD_01"):
				return 2848;
			case joaat("MP_GENERIC_ROANOKENORTH_MC_FR_02"):
				return 1849;
			case -1344163686:
				return 3442;
			case -1343382323:
				return 2109;
			case -1342377282:
				return 179;
			case -1341126106:
				return 510;
			case -1340894272:
				return 4753;
			case -1340691665:
				return 4921;
			case -1340632306:
				return 4325;
			case -1339377853:
				return 4860;
			case -1338218119:
				return 5694;
			case -1337773806:
				return 5195;
			case joaat("MP_ASN_BENEDICTPOINT_TAR_03"):
				return 1979;
			case -1337267364:
				return 1526;
			case -1335653606:
				return 3809;
			case -1330804307:
				return 5671;
			case -1330577621:
				return 1084;
			case -1329536678:
				return 3537;
			case joaat("MP_STEALWAGON_GUTHRIEFARM_PVP_01"):
				return 3101;
			case -1328745505:
				return 5437;
			case -1328682344:
				return 4327;
			case -1326021790:
				return 560;
			case -1324464021:
				return 2907;
			case -1323973856:
				return 843;
			case joaat("MP_CHU_KID_GREATPLAINS2_VIP_02"):
				return 2119;
			case -1320982810:
				return 4640;
			case -1319218358:
				return 1692;
			case -1318864268:
				return 1361;
			case -1317441429:
				return 4951;
			case -1316583679:
				return 1743;
			case -1315925504:
				return 522;
			case -1315776615:
				return 5617;
			case -1315263278:
				return 1426;
			case -1314136608:
				return 3522;
			case joaat("HEAVY"):
				return 5211;
			case -1313916021:
				return 3899;
			case joaat("MP_CHU_ROB_CALIGAHALL_VIP_02"):
				return 2191;
			case joaat("META_OUTFIT_ANIMAL_SEAGULLRINGBILLED"):
				return 260;
			case -1313156546:
				return 624;
			case -1312498880:
				return 1712;
			case -1311007505:
				return 3209;
			case joaat("MP_CAMPDEF_GAPTOOTHBREACH_VIP_02"):
				return 2075;
			case -1310578794:
				return 4372;
			case joaat("MP_CONVOY_CARMODYDELL_RCP_01"):
				return 2281;
			case -1310036856:
				return 5883;
			case -1309169457:
				return 1927;
			case joaat("MP_INTRO_CRIMINAL_01"):
				return 2509;
			case -1307762119:
				return 1310;
			case -1307642716:
				return 725;
			case -1307448382:
				return 881;
			case -1306915176:
				return 4781;
			case -1304053509:
				return 6064;
			case -1303852008:
				return 2375;
			case -1303789247:
				return 941;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_STACHE_000_10"):
				return 5280;
			case joaat("MP_CHU_KID_HEARTLANDS_VIP_02"):
				return 2123;
			case joaat("HAT_MR1_003_ALT02"):
				return 4670;
			case -1302334390:
				return 355;
			case joaat("MP_CHU_ROB_MILLESANI_PVP_01"):
				return 2256;
			case -1301107843:
				return 2342;
			case joaat("META_OUTFIT_ANIMAL_POISON_RABBIT"):
				return 247;
			case -1298683031:
				return 2335;
			case -1297626216:
				return 5227;
			case joaat("MP_REPOBOAT_CALIGAHALL_RCP_01"):
				return 2991;
			case -1297008611:
				return 2765;
			case -1296852855:
				return 639;
			case -1296597459:
				return 599;
			case joaat("MP_CHU_ROB_MONTANARIVER_VIP_03"):
				return 2224;
			case -1293961341:
				return 4457;
			case -1293422565:
				return 1030;
			case -1292884208:
				return 3853;
			case -1291718938:
				return 5729;
			case joaat("META_OUTFIT_ANIMAL_POISON_FROGBULL"):
				return 162;
			case -1288823878:
				return 1379;
			case -1288798431:
				return 1531;
			case joaat("MP_REPO_MACLEANS_RCP_01"):
				return 2976;
			case -1288023573:
				return 995;
			case -1287424474:
				return 1411;
			case -1285507417:
				return 5847;
			case -1283549788:
				return 518;
			case joaat("MP_CONVOY_MACLEANS_RCP_01"):
				return 2275;
			case joaat("MP_RESCUE_SDDOGFIGHT_VIP_02"):
				return 3021;
			case -1280549298:
				return 1081;
			case -1280537219:
				return 715;
			case -1279632316:
				return 3117;
			case -1279161173:
				return 5970;
			case joaat("MP_GENERIC_HEARTLANDS_MC_FR_03"):
				return 1841;
			case -1277878035:
				return 1150;
			case -1277631096:
				return 1874;
			case -1276208343:
				return 450;
			case -1275599965:
				return 61;
			case joaat("MP_INTRO_EXCONFED_05"):
				return 2573;
			case -1274266929:
				return 2767;
			case -1273960427:
				return 108;
			case -1273957148:
				return 3754;
			case -1273449080:
				return 5987;
			case -1273418696:
				return 319;
			case -1272809904:
				return 5903;
			case -1271788450:
				return 1185;
			case -1271034896:
				return 2388;
			case -1270789730:
				return 4890;
			case -1270585243:
				return 3535;
			case -1270332421:
				return 3750;
			case -1269768390:
				return 1229;
			case -1269633375:
				return 3709;
			case -1269214788:
				return 6005;
			case -1269066108:
				return 3189;
			case -1268552411:
				return 1391;
			case -1268509686:
				return 2337;
			case -1268456941:
				return 3606;
			case -1267891537:
				return 1143;
			case -1266567896:
				return 1722;
			case -1265969647:
				return 5472;
			case -1265801191:
				return 659;
			case -1265220677:
				return 5931;
			case -1263497528:
				return 1650;
			case -1263464911:
				return 3701;
			case -1263308289:
				return 812;
			case -1262469768:
				return 740;
			case -1261975348:
				return 3557;
			case -1259822948:
				return 1273;
			case -1258854628:
				return 570;
			case -1255899859:
				return 3422;
			case -1255756263:
				return 1924;
			case -1255750287:
				return 1124;
			case joaat("MP_CHU_ROB_BLACKWATER_VIP_03"):
				return 2188;
			case joaat("MP_ONTHEHUNT_DEADHORSE_06"):
				return 1802;
			case -1254178458:
				return 986;
			case -1253903668:
				return 5841;
			case -1253867976:
				return 4383;
			case -1253658359:
				return 1061;
			case -1253229491:
				return 3181;
			case -1253154414:
				return 1080;
			case joaat("MP_POST_MULTIPACKAGE_BLWDOCK_01"):
				return 2781;
			case joaat("MS_ASN_SHADYBELLE_TAR_05"):
				return 2575;
			case -1251742248:
				return 5759;
			case -1251044040:
				return 4167;
			case joaat("MP_RESCUE_RHODES_RCP_02"):
				return 3014;
			case joaat("MP_CAMPDEF_RADLEYSPASTURE_VIP_02"):
				return 2092;
			case -1249448050:
				return 5674;
			case -1249232777:
				return 3451;
			case joaat("MP_CONVOY_CALIGAHALL_RCP_01"):
				return 2280;
			case joaat("MP_RESUPPLY_THIEVESLANDING_RCP_01"):
				return 3028;
			case -1246892952:
				return 1419;
			case -1246752012:
				return 3649;
			case joaat("MP_HIDEOUT_REPENTANCE_01"):
				return 2493;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_CHOPS_001_03"):
				return 5264;
			case -1243802696:
				return 6080;
			case -1242854496:
				return 365;
			case -1242602790:
				return 717;
			case -1242474414:
				return 898;
			case -1241887289:
				return 2412;
			case joaat("MP_POST_MULTIRELAY_MACLEANSHOUSE_01"):
				return 2830;
			case -1239866887:
				return 4602;
			case joaat("MP_ASNTRK_HAGENORCHARD_TAR_06"):
				return 2055;
			case -1238963034:
				return 4270;
			case -1237621599:
				return 2733;
			case joaat("META_ANIMAL_OUTFIT_BULLHEREFORD"):
				return 68;
			case joaat("META_ANIMAL_OUTFIT_PRONGHORNSONOM_001"):
				return 242;
			case -1233239944:
				return 405;
			case -1232740429:
				return 5825;
			case joaat("META_ANIMAL_OUTFIT_LOONPACIFIC"):
				return 202;
			case -1231877150:
				return 4097;
			case joaat("META_OUTFIT_BUTCHERCREEK_COOK_01"):
				return 367;
			case joaat("MP_ASN_CHOLLASPRINGS_TAR_04"):
				return 2454;
			case joaat("MP_RESCUE_LONNIESSHACK_VIP_02"):
				return 3004;
			case -1226096152:
				return 2719;
			case -1225845060:
				return 2916;
			case -1225629049:
				return 5056;
			case -1225384912:
				return 5591;
			case -1223242347:
				return 1723;
			case -1222499423:
				return 4938;
			case -1222193778:
				return 4886;
			case -1221938664:
				return 2638;
			case -1221486514:
				return 1648;
			case joaat("MP_HIDEOUT_LAKAY_01"):
				return 2518;
			case -1220881983:
				return 914;
			case -1219363612:
				return 3290;
			case -1218827713:
				return 5122;
			case -1217080596:
				return 4473;
			case -1215170363:
				return 4219;
			case joaat("MP_STEALHORSE_CASTORSPOND_RCP_01"):
				return 3070;
			case -1213490302:
				return 4274;
			case joaat("META_OUTFIT_ANIMAL_ALBINO_BEAVER"):
				return 27;
			case -1211524678:
				return 2671;
			case joaat("MP_CHU_ROB_MACFARLANES_VIP_03"):
				return 2210;
			case -1211037282:
				return 3569;
			case -1210544352:
				return 1756;
			case -1209166984:
				return 2701;
			case -1208677998:
				return 2353;
			case joaat("MP_RECOVER_GRIZZLIES_04"):
				return 1972;
			case joaat("META_OUTFIT_PANTS_HEELS"):
				return 1052;
			case -1207636623:
				return 2960;
			case -1204952337:
				return 3929;
			case -1204717460:
				return 4138;
			case joaat("MP_POST_MULTIPACKAGE_RIDGEWOODFARM_01"):
				return 2805;
			case -1203226280:
				return 1753;
			case -1202717877:
				return 5900;
			case -1201216685:
				return 4805;
			case -1200904265:
				return 1904;
			case joaat("MP_CHU_ROB_ANNESBURG_RCP_01"):
				return 2237;
			case -1197356488:
				return 579;
			case joaat("HAT_MR1_002_ALT02"):
				return 4665;
			case joaat("MP_CHU_ROB_MACFARLANES_RCP_01"):
				return 2253;
			case -1196540931:
				return 3388;
			case joaat("MP_STEALHORSE_CALIGAHALL_RCP_01"):
				return 3068;
			case -1194650594:
				return 5100;
			case -1193528556:
				return 3621;
			case -1192686276:
				return 1662;
			case -1192461222:
				return 4229;
			case joaat("HAT_FR1_005"):
				return 4532;
			case -1192149289:
				return 5394;
			case -1191994684:
				return 5003;
			case -1190329355:
				return 2325;
			case -1189961537:
				return 4628;
			case joaat("MP_HIDEOUT_MININGSTN_01"):
				return 2534;
			case -1188775610:
				return 5663;
			case -1187812689:
				return 4300;
			case -1187370751:
				return 711;
			case -1187204983:
				return 1037;
			case joaat("MP_INTERCEPT_CORNWALL_RCP_01"):
				return 2603;
			case -1186209671:
				return 3509;
			case -1185818198:
				return 2503;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_CHIN_000_02"):
				return 5236;
			case -1185717114:
				return 483;
			case joaat("MP_RESUPPLY_SAINTDENIS_RCP_01"):
				return 3026;
			case joaat("META_OUTFIT_ANIMAL_POISON_DOGBLUETICKCOONHOUND"):
				return 98;
			case joaat("MP_CHU_ROB_GREENHOLLOW_VIP_01"):
				return 2206;
			case -1181063159:
				return 5832;
			case joaat("MP_CHU_ROB_BLACKWATER_VIP_01"):
				return 2186;
			case -1179277737:
				return 5589;
			case -1178432771:
				return 2882;
			case -1178197665:
				return 3931;
			case -1178090581:
				return 3627;
			case -1177234203:
				return 3825;
			case -1177218718:
				return 4259;
			case -1175500706:
				return 5966;
			case -1174234571:
				return 1740;
			case -1173634986:
				return 6000;
			case -1173601599:
				return 5862;
			case -1172736583:
				return 5315;
			case -1172486777:
				return 1495;
			case -1172255608:
				return 817;
			case -1172192282:
				return 3440;
			case -1170900983:
				return 1667;
			case joaat("MP_POST_MULTIPACKAGE_STRAWBERRY_01"):
				return 2778;
			case -1168906910:
				return 328;
			case joaat("META_ANIMAL_OUTFIT_BUFFALO_000"):
				return 55;
			case -1168693508:
				return 2486;
			case joaat("MP_CAMPDEF_GRIZZLIES_VIP_02"):
				return 2082;
			case -1162694910:
				return 4285;
			case -1161759573:
				return 1253;
			case -1161046829:
				return 4180;
			case -1160821004:
				return 1439;
			case joaat("META_OUTFIT_ANIMAL_OWLCALI"):
				return 211;
			case -1158072339:
				return 2643;
			case -1156856950:
				return 4389;
			case -1155260990:
				return 2582;
			case -1155172987:
				return 1112;
			case -1155056484:
				return 3654;
			case joaat("META_OUTFIT_VAL_PIANO_PLAYER_04"):
				return 638;
			case joaat("META_OUTFIT_ANIMAL_SNAKESOUTHCOPPER"):
				return 270;
			case joaat("MP_ASN_PLEASANCE_TAR_05"):
				return 2567;
			case -1153690913:
				return 788;
			case -1153690198:
				return 1069;
			case -1153495004:
				return 246;
			case -1152598630:
				return 3872;
			case -1152165722:
				return 3609;
			case -1151768825:
				return 3563;
			case joaat("META_ANIMAL_OUTFIT_BIGHORNRAMROCKY_001"):
				return 36;
			case -1151108317:
				return 5753;
			case -1150469193:
				return 5978;
			case -1150250535:
				return 6016;
			case -1149853461:
				return 363;
			case joaat("META_ANIMAL_OUTFIT_PARROTSCARLET"):
				return 219;
			case joaat("HAT_MR1_021"):
				return 4707;
			case -1148118267:
				return 2311;
			case -1147539848:
				return 2893;
			case -1147126481:
				return 3178;
			case -1147026115:
				return 3428;
			case -1146491884:
				return 5835;
			case -1146002097:
				return 628;
			case -1144894751:
				return 1286;
			case joaat("MP_CHU_KID_SCARLETTMEADOWS_PVP_01"):
				return 2150;
			case -1141848787:
				return 1772;
			case -1140223483:
				return 1145;
			case -1140168713:
				return 2675;
			case -1139797490:
				return 376;
			case joaat("MP_HIDEOUT_MANTECAFALLS_01"):
				return 2491;
			case -1138903983:
				return 1332;
			case -1137215382:
				return 3973;
			case -1135361290:
				return 3404;
			case -1135245718:
				return 3785;
			case joaat("CROWN_MR1_001"):
				return 4565;
			case -1132137658:
				return 2436;
			case -1132121860:
				return 1493;
			case joaat("MP_RESUPPLY_STRAWBERRY_RCP_01"):
				return 3035;
			case -1128853525:
				return 2922;
			case joaat("MP_ONTHEHUNT_CUMBERLAND_02"):
				return 1937;
			case -1127957248:
				return 1190;
			case joaat("MP_OTH_CORNWALL_RCP_01"):
				return 2758;
			case -1126384926:
				return 4631;
			case -1125496020:
				return 2931;
			case -1124489518:
				return 4402;
			case joaat("META_OUTFIT_ANIMAL_SNAKECOTTONMOUTH"):
				return 273;
			case -1121761142:
				return 4409;
			case -1121706820:
				return 2305;
			case -1121046597:
				return 4874;
			case -1120526485:
				return 855;
			case joaat("META_OUTFIT_ANIMAL_HERONTRICOLOR"):
				return 165;
			case -1118909346:
				return 486;
			case -1117899672:
				return 4312;
			case -1116729135:
				return 4603;
			case -1115222655:
				return 534;
			case -1114482477:
				return 3729;
			case joaat("SHOPKEEP"):
				return 5522;
			case joaat("MP_JAILBREAK_BLACKWATER_RCP_01"):
				return 2652;
			case -1113893282:
				return 3721;
			case -1113845314:
				return 991;
			case -1113575279:
				return 4936;
			case -1112726159:
				return 1518;
			case -1112120705:
				return 105;
			case joaat("HAT_MR1_012"):
				return 4690;
			case joaat("MP_HIDEOUT_QUAKERSCOVE_01"):
				return 2547;
			case -1111063488:
				return 5881;
			case -1108823458:
				return 3318;
			case joaat("META_OUTFIT_ANIMAL_RAT_001"):
				return 256;
			case -1107173821:
				return 4206;
			case joaat("META_OUTFIT_ANIMAL_LEGENDARY_SOCKEYESALMON"):
				return 154;
			case -1104231275:
				return 5434;
			case -1102309375:
				return 5548;
			case -1101123861:
				return 4513;
			case -1100875244:
				return 808;
			case -1099108440:
				return 3400;
			case -1098798458:
				return 5130;
			case joaat("MP_CHU_ROB_BLACKWATER_RCP_01"):
				return 2241;
			case -1095231533:
				return 1647;
			case -1093962040:
				return 3607;
			case -1091666047:
				return 1367;
			case -1091524608:
				return 12;
			case joaat("MP_CHU_KID_GREATPLAINS_RCP_01"):
				return 2139;
			case joaat("MP_POST_MULTIRELAY_BEARCLAW_01"):
				return 2818;
			case joaat("META_OUTFIT_BUTCHERCREEK_COOK_03"):
				return 369;
			case -1090160065:
				return 901;
			case -1089988108:
				return 2881;
			case -1089515315:
				return 4972;
			case -1088591630:
				return 3860;
			case -1088446160:
				return 708;
			case -1088345963:
				return 3808;
			case -1087668391:
				return 5063;
			case -1087408038:
				return 1593;
			case -1087322498:
				return 441;
			case joaat("MP_RESCUE_CALIGAHALL_RCP_01"):
				return 3010;
			case -1085771004:
				return 5618;
			case -1084742960:
				return 4844;
			case -1083029193:
				return 3960;
			case joaat("MP_CHU_ROB_STRAWBERRY_RCP_01"):
				return 2266;
			case -1080596819:
				return 5635;
			case -1079718172:
				return 1508;
			case -1078381409:
				return 1795;
			case -1076034482:
				return 3497;
			case -1074668811:
				return 2528;
			case -1074067504:
				return 5724;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_CHIN_001_04"):
				return 5247;
			case -1072298082:
				return 3489;
			case -1071753770:
				return 5652;
			case -1070257306:
				return 3379;
			case -1069831470:
				return 4164;
			case -1069772579:
				return 201;
			case -1068662096:
				return 1738;
			case joaat("MP_CHU_KID_RHODES_PVP_01"):
				return 2147;
			case -1067577032:
				return 1468;
			case -1066984132:
				return 928;
			case -1065791927:
				return 5985;
			case -1064988519:
				return 356;
			case -1063992080:
				return 3679;
			case joaat("MP_STEALHORSE_RIDGEWOOD_RCP_01"):
				return 3089;
			case -1063184219:
				return 1212;
			case -1063158419:
				return 2588;
			case -1062053615:
				return 1362;
			case -1061241327:
				return 5604;
			case -1060428406:
				return 1742;
			case -1060353834:
				return 1019;
			case -1058592224:
				return 5672;
			case joaat("MP_CHU_ROB_MONTANARIVER_VIP_04"):
				return 2225;
			case joaat("META_ANIMAL_OUTFIT_PRONGHORNSONOM_000"):
				return 241;
			case joaat("MP_POST_MULTIRELAY_FORTRIGGS_01"):
				return 2825;
			case -1057046638:
				return 2240;
			case -1055663851:
				return 4861;
			case -1054015745:
				return 1343;
			case -1053768147:
				return 1925;
			case -1053170717:
				return 1157;
			case joaat("HAT_MR1_004_ALT01"):
				return 4674;
			case joaat("MP_WGNTHIEF_WALLACE_PVP_01"):
				return 3170;
			case -1049024234:
				return 716;
			case joaat("META_OUTFIT_ANIMAL_CRANESANDHILL"):
				return 86;
			case joaat("MP_POST_MULTIPACKAGE_TAXIDERMIST_01"):
				return 2809;
			case -1047202487:
				return 4629;
			case -1046054427:
				return 1230;
			case -1045582796:
				return 5001;
			case joaat("HAT_MR1_063_ALT02"):
				return 4742;
			case joaat("MP_ASN_SDPOLICESTATION_TAR_06"):
				return 2022;
			case joaat("MP_CHU_KID_LAGRAS_VIP_01"):
				return 2126;
			case -1043910190:
				return 5592;
			case -1043480529:
				return 5611;
			case joaat("META_OUTFIT_EMERALDRANCH_VAR_01"):
				return 460;
			case -1042839329:
				return 688;
			case -1041197591:
				return 4829;
			case joaat("META_OUTFIT_ANIMAL_WOLFLARGE_000"):
				return 289;
			case joaat("MP_WGNTHIEF_SCARLETTMDWS_RCP_01"):
				return 3166;
			case -1039019633:
				return 93;
			case joaat("MP_GENERIC_ROANOKENORTH_MC_FR_01"):
				return 1848;
			case -1038278363:
				return 6054;
			case -1036771894:
				return 3659;
			case -1036290040:
				return 5731;
			case joaat("MP_WGNBRKOUT_TUMBLEWEED_PVP_01"):
				return 3146;
			case -1033487374:
				return 1627;
			case -1032574883:
				return 2389;
			case -1032147629:
				return 2687;
			case -1030846087:
				return 5757;
			case joaat("MP_CHU_ROB_MILLESANI_VIP_04"):
				return 2221;
			case -1028993974:
				return 3216;
			case -1026960760:
				return 5392;
			case -1026391597:
				return 3980;
			case -1026273760:
				return 4677;
			case -1025614337:
				return 5338;
			case -1024998687:
				return 1655;
			case joaat("MP_CHU_ROB_MACLEANS_VIP_01"):
				return 2214;
			case joaat("META_OUTFIT_ANIMAL_POISON_DOGHOUND"):
				return 109;
			case -1021941369:
				return 5505;
			case joaat("META_OUTFIT_ANIMAL_MOOSE_001"):
				return 206;
			case -1020853552:
				return 5157;
			case -1020666030:
				return 5920;
			case -1020321828:
				return 3657;
			case -1018912876:
				return 4902;
			case -1018603494:
				return 1104;
			case -1018524956:
				return 3203;
			case -1017345985:
				return 5316;
			case -1017235201:
				return 4278;
			case -1016424617:
				return 726;
			case -1014964434:
				return 3900;
			case -1014943010:
				return 3387;
			case -1012173584:
				return 3645;
			case -1006225685:
				return 521;
			case -1005070066:
				return 3443;
			case joaat("MP_WGNBRKOUT_RHODES_PVP_01"):
				return 3137;
			case joaat("MS_ASN_SHADYBELLE_TAR_06"):
				return 2576;
			case -1002482207:
				return 3450;
			case -1001367054:
				return 1444;
			case -1000011752:
				return 5376;
			case joaat("MP_ASN_CHOLLASPRINGS_TAR_05"):
				return 2455;
			case -998821784:
				return 2583;
			case -998202868:
				return 4901;
			case -995559330:
				return 3233;
			case -995310858:
				return 4286;
			case -994537808:
				return 4252;
			case -994411492:
				return 5826;
			case -993466944:
				return 4600;
			case joaat("MP_ONTHEHUNT_BRITTLEBRUSH_01"):
				return 1930;
			case joaat("MP_GENERIC_AMBARINO_MC_FR_01"):
				return 1824;
			case -990298088:
				return 4841;
			case -989806358:
				return 3272;
			case joaat("MP_STEALHORSE_CORNWALL_PVP_01"):
				return 3074;
			case -987083900:
				return 3852;
			case -987017601:
				return 6086;
			case -986687980:
				return 4599;
			case joaat("GOON1"):
				return 1158;
			case -986147997:
				return 3915;
			case -984430086:
				return 5785;
			case -983012135:
				return 5701;
			case -980654685:
				return 5934;
			case -980034799:
				return 5846;
			case -980021498:
				return 5304;
			case -978876653:
				return 1767;
			case -978862500:
				return 4574;
			case -978544273:
				return 4664;
			case -976701550:
				return 920;
			case joaat("MP_INTERCEPT_RIDGEWOOD_RCP_01"):
				return 2620;
			case -975766742:
				return 3548;
			case -975440703:
				return 6006;
			case -975024249:
				return 3677;
			case joaat("MP_CHU_KID_GREATPLAINS2_VIP_01"):
				return 2118;
			case -974314921:
				return 2920;
			case -974222269:
				return 5065;
			case -973804283:
				return 4891;
			case joaat("MP_CHU_ROB_MACFARLANES_VIP_02"):
				return 2213;
			case joaat("MP_CAMPDEF_GREATPLAINS_VIP_02"):
				return 2080;
			case joaat("MP_CAMPDEF_BLUEWATER_VIP_01"):
				return 2069;
			case -972401444:
				return 1752;
			case -972364774:
				return 806;
			case -971758145:
				return 1600;
			case -969880332:
				return 3743;
			case joaat("CARCASS"):
				return 250;
			case -968682879:
				return 2487;
			case -968455040:
				return 107;
			case -968088355:
				return 1545;
			case -967922158:
				return 563;
			case -967360518:
				return 449;
			case joaat("META_ANIMAL_OUTFIT_PRONGHORNBAJAM_000"):
				return 232;
			case -966128464:
				return 3534;
			case -966120426:
				return 3287;
			case -965451505:
				return 310;
			case joaat("MP_POST_MULTIPACKAGE_BRAITHWAITEMANOR_01"):
				return 2770;
			case -963172201:
				return 4054;
			case -962772900:
				return 641;
			case -961737640:
				return 656;
			case -961634645:
				return 5952;
			case -959492928:
				return 1465;
			case joaat("MP_CHU_ROB_MONTANARIVER_PVP_01"):
				return 2258;
			case joaat("MP_CHU_KID_TUMBLEWEED_VIP_01"):
				return 2167;
			case -956959330:
				return 2368;
			case -955755380:
				return 1060;
			case -955366169:
				return 1272;
			case -954891563:
				return 4885;
			case -954526413:
				return 1307;
			case -954246503:
				return 1634;
			case -954123224:
				return 2694;
			case joaat("MP_ONTHEHUNT_DEADHORSE_05"):
				return 1801;
			case -953321788:
				return 3336;
			case joaat("META_OUTFIT_ANIMAL_SQUIRRELRED"):
				return 282;
			case -952256680:
				return 5004;
			case -951985632:
				return 5398;
			case -951840542:
				return 665;
			case -951179547:
				return 4266;
			case -951111406:
				return 2304;
			case -950074116:
				return 2722;
			case -948974859:
				return 1331;
			case -948969428:
				return 1494;
			case -947172122:
				return 3746;
			case -946746074:
				return 3695;
			case -946195666:
				return 1184;
			case joaat("MP_CAMPDEF_BLUEWATER_VIP_02"):
				return 2068;
			case -944661324:
				return 5078;
			case -944199315:
				return 3572;
			case joaat("MP_CHU_KID_GREATPLAINS_VIP_01"):
				return 2114;
			case -943090657:
				return 4846;
			case -942529833:
				return 960;
			case -942236851:
				return 6096;
			case -942164052:
				return 4480;
			case -940475302:
				return 4068;
			case -939924475:
				return 2720;
			case joaat("HAT_MR1_098"):
				return 4770;
			case -938873797:
				return 574;
			case -938499915:
				return 722;
			case -938010350:
				return 5715;
			case -937999652:
				return 1460;
			case -937613161:
				return 116;
			case joaat("MP_CHU_ROB_ANNESBURG_VIP_01"):
				return 2178;
			case -937090609:
				return 4520;
			case -936965000:
				return 3986;
			case -936852544:
				return 6031;
			case -934894752:
				return 4086;
			case -933717239:
				return 4147;
			case -932775868:
				return 5550;
			case -931228461:
				return 5306;
			case -929992610:
				return 4179;
			case -929873145:
				return 1034;
			case -927740816:
				return 4905;
			case -927362281:
				return 1366;
			case -926783193:
				return 5914;
			case -924828697:
				return 2672;
			case -924203011:
				return 759;
			case -922935601:
				return 3702;
			case joaat("MP_PRSN_ASN_TUMBLEWEED_01"):
				return 2873;
			case -921395376:
				return 3762;
			case -920872204:
				return 734;
			case -919098551:
				return 3685;
			case -918831779:
				return 869;
			case joaat("CROWN_MR1_000"):
				return 4564;
			case -918580755:
				return 987;
			case joaat("MP_RESCUE_LONNIESSHACK_VIP_03"):
				return 3005;
			case joaat("HAT_MR1_055"):
				return 4733;
			case -913522137:
				return 2699;
			case joaat("MP_REPOBOAT_CLEMENSPOINT_RCP_01"):
				return 2992;
			case -911871940:
				return 1675;
			case -911283255:
				return 5041;
			case -911018225:
				return 546;
			case joaat("MP_WGNTHIEF_VANHORN_PVP_01"):
				return 3168;
			case -910207606:
				return 458;
			case -909904124:
				return 5109;
			case -908130630:
				return 3519;
			case -907570979:
				return 3292;
			case joaat("MP_STEALBOAT_LAGRAS_RCP_01"):
				return 3058;
			case -905842321:
				return 1178;
			case -905326719:
				return 334;
			case joaat("MP_CHU_ROB_BLACKWATER_VIP_02"):
				return 2187;
			case -903749480:
				return 3727;
			case -903452186:
				return 5651;
			case -903083698:
				return 396;
			case -901121898:
				return 4472;
			case -900556890:
				return 5032;
			case -900546737:
				return 2730;
			case -900044441:
				return 3376;
			case -900000784:
				return 1113;
			case -899329072:
				return 3923;
			case -897748428:
				return 5577;
			case -897013212:
				return 3653;
			case -895235736:
				return 1409;
			case -895023706:
				return 3566;
			case joaat("MP_ONTHEHUNT_BATTLEFIELD_01"):
				return 1928;
			case -894179008:
				return 4195;
			case joaat("MP_STEALHORSE_CENTRALUNION_PVP_01"):
				return 3071;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_STACHE_000_07"):
				return 5277;
			case -890748965:
				return 1519;
			case -890419023:
				return 1086;
			case joaat("META_ANIMAL_OUTFIT_BUFFALO_001"):
				return 56;
			case joaat("META_ANIMAL_OUTFIT_BIGHORNRAMROCKY"):
				return 34;
			case joaat("MP_POST_MULTIPACKAGE_FORTRIGGS_01"):
				return 2791;
			case -886768326:
				return 5237;
			case -885880174:
				return 4394;
			case joaat("MP_JUGGERNAUT_000"):
				return 2378;
			case -884302113:
				return 5839;
			case joaat("MP_CHU_ROB_MONTANARIVER_RCP_01"):
				return 2259;
			case -883311180:
				return 1537;
			case -881797333:
				return 4541;
			case -880473644:
				return 3123;
			case -879605059:
				return 4752;
			case -879584613:
				return 3346;
			case -879534557:
				return 5662;
			case -879226938:
				return 1860;
			case -878830424:
				return 1341;
			case -878665428:
				return 3484;
			case -877585857:
				return 931;
			case -877565661:
				return 487;
			case joaat("HAT_MR1_080"):
				return 4756;
			case -875384429:
				return 377;
			case -875305422:
				return 3458;
			case -874767990:
				return 1384;
			case joaat("MP_CONVOY_RATHSKELLER_RCP_01"):
				return 2286;
			case -872634833:
				return 1130;
			case joaat("META_OUTFIT_ANIMAL_VULTUREEAST"):
				return 287;
			case -872023541:
				return 3608;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_CHOPS_001_06"):
				return 5267;
			case -871342303:
				return 3873;
			case -870216768:
				return 620;
			case -870074881:
				return 4260;
			case -868965679:
				return 91;
			case -868064261:
				return 3332;
			case joaat("MP_INTERCEPT_VALENTINE_PVP_01"):
				return 2624;
			case -867801909:
				return 6001;
			case -865638972:
				return 4095;
			case -863790170:
				return 5791;
			case -863625136:
				return 1575;
			case joaat("MP_STEALWAGON_FORTWALLACE_RCP_01"):
				return 3098;
			case -861764706:
				return 4192;
			case -861344200:
				return 4795;
			case -859766824:
				return 2902;
			case -857205718:
				return 3215;
			case -856451469:
				return 5020;
			case joaat("META_OUTFIT_EMERALDRANCH_VAR_02"):
				return 461;
			case -854737512:
				return 2386;
			case -854048870:
				return 2402;
			case -853965591:
				return 4810;
			case -853749714:
				return 1249;
			case -853742316:
				return 2398;
			case -853043911:
				return 1304;
			case -851584041:
				return 3620;
			case -849974713:
				return 1509;
			case -848579139:
				return 1203;
			case -845763616:
				return 5360;
			case -845386610:
				return 1441;
			case -844712531:
				return 3185;
			case -844699484:
				return 5986;
			case -844294472:
				return 1898;
			case -843731909:
				return 4174;
			case -843412621:
				return 2676;
			case -843385065:
				return 2584;
			case -842630838:
				return 4315;
			case -841776651:
				return 2908;
			case joaat("COUGAR_LEGENDARY"):
				return 72;
			case -840869937:
				return 3720;
			case -840176606:
				return 2397;
			case -839557790:
				return 3865;
			case -838860497:
				return 3997;
			case -838499372:
				return 1257;
			case -838477311:
				return 4529;
			case -837025454:
				return 3339;
			case -836598291:
				return 2704;
			case -836236039:
				return 5749;
			case -836190000:
				return 3514;
			case -835944183:
				return 5436;
			case -835665806:
				return 1781;
			case -834316719:
				return 1754;
			case -834113206:
				return 548;
			case -833526881:
				return 5661;
			case -832345563:
				return 4669;
			case -831552859:
				return 1065;
			case -831403802:
				return 2329;
			case -831074898:
				return 4699;
			case -829722918:
				return 4459;
			case joaat("HAT_MR1_003"):
				return 4668;
			case -827981571:
				return 3244;
			case -827426745:
				return 982;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_STACHE_001_03"):
				return 5282;
			case joaat("MP_WGNBRKOUT_SAINTDENIS_RCP_01"):
				return 3143;
			case -823530473:
				return 4408;
			case -823308825:
				return 6039;
			case -821678060:
				return 4830;
			case -820633060:
				return 418;
			case -820604750:
				return 4806;
			case -819415201:
				return 6063;
			case joaat("MP_PRSN_ASN_HANGINGDOG_01"):
				return 2865;
			case joaat("BINDINGS_FEET_BULKY"):
				return 5936;
			case -818126608:
				return 1885;
			case -817043872:
				return 502;
			case -816508679:
				return 4454;
			case -815574510:
				return 452;
			case -815105562:
				return 2529;
			case -813988972:
				return 988;
			case joaat("META_OUTFIT_ANIMAL_POISON_ELK"):
				return 133;
			case -813319677:
				return 6017;
			case -813050845:
				return 1686;
			case -812165548:
				return 1628;
			case -811485019:
				return 3660;
			case -810911661:
				return 5915;
			case -810344607:
				return 3974;
			case -810311120:
				return 4873;
			case joaat("META_OUTFIT_ANIMAL_RAT_000"):
				return 255;
			case -808171391:
				return 5002;
			case joaat("MP_CHU_KID_ARMADILLO_VIP_01"):
				return 2102;
			case -807385913:
				return 84;
			case -806908546:
				return 5507;
			case -806572609:
				return 3779;
			case -806141266:
				return 3193;
			case -805169298:
				return 4924;
			case -803977904:
				return 5972;
			case -803977549:
				return 481;
			case -803474236:
				return 3905;
			case -802951245:
				return 1288;
			case joaat("MP_CHU_KID_LAGRAS_VIP_02"):
				return 2127;
			case -802281761:
				return 473;
			case -802247089:
				return 4617;
			case -801577650:
				return 5976;
			case -801182224:
				return 4386;
			case -800489594:
				return 814;
			case -799804574:
				return 2763;
			case joaat("MP_ASN_FORTMERCER_TAR_06"):
				return 2462;
			case joaat("MP_CHU_KID_GREATPLAINS2_VIP_04"):
				return 2121;
			case -797707041:
				return 738;
			case -797693758:
				return 5723;
			case -797175269:
				return 3418;
			case joaat("MP_INTRO_SKINNER_02"):
				return 2541;
			case -794178150:
				return 1354;
			case joaat("HAT_MR1_053_ALT02"):
				return 4732;
			case -790840521:
				return 3658;
			case -789866973:
				return 5096;
			case -789423254:
				return 1265;
			case -788862037:
				return 5353;
			case -788834563:
				return 4159;
			case -786856395:
				return 4833;
			case -786698054:
				return 358;
			case joaat("MP_STEALHORSE_RIDGEWOOD_PVP_01"):
				return 3088;
			case -785411977:
				return 3584;
			case joaat("MP_CHU_ROB_PAINTEDSKY_VIP_03"):
				return 2228;
			case joaat("HAT_MR1_005_ALT02"):
				return 4678;
			case joaat("MP_CAMPDEF_HEARTLANDS2_VIP_01"):
				return 2086;
			case -784907856:
				return 3288;
			case -784882418:
				return 5790;
			case -783824120:
				return 5077;
			case -782873674:
				return 953;
			case -782232580:
				return 5230;
			case joaat("MP_CHU_KID_RHODES_VIP_04"):
				return 2158;
			case -780506370:
				return 5411;
			case -778052977:
				return 4635;
			case -777894995:
				return 1422;
			case joaat("MP_CHU_ROB_STRAWBERRY_VIP_02"):
				return 2272;
			case joaat("MP_GENERIC_GREATPLAINS_MC_FR_03"):
				return 1838;
			case joaat("HAT_MR1_069"):
				return 4748;
			case joaat("REINFORCED_BINDINGS_FEET_DEFAULT"):
				return 6099;
			case -775038432:
				return 4526;
			case joaat("META_ANIMAL_OUTFIT_ALLIGATOR1_001"):
				return 1;
			case joaat("META_ANIMAL_OUTFIT_BUFFALO_M_000"):
				return 58;
			case -774890814:
				return 587;
			case -773960681:
				return 5076;
			case -773779724:
				return 4289;
			case -772476596:
				return 3449;
			case joaat("MP_WGNTHIEF_CORNWALL_RCP_01"):
				return 3155;
			case -771189064:
				return 5827;
			case joaat("META_OUTFIT_ANIMAL_EGRETSNOWY"):
				return 126;
			case -769528659:
				return 3144;
			case -769519052:
				return 633;
			case -769110738:
				return 2917;
			case -767568285:
				return 533;
			case -767206614:
				return 4439;
			case -767153732:
				return 687;
			case -766860373:
				return 821;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_CHIN_001_05"):
				return 5248;
			case -766329848:
				return 1213;
			case -765468627:
				return 335;
			case -764683084:
				return 4255;
			case -764419503:
				return 1202;
			case joaat("MP_CHU_ROB_FORTMERCER_VIP_04"):
				return 2203;
			case -762542230:
				return 1694;
			case -762340266:
				return 5943;
			case -761903036:
				return 4329;
			case -761601856:
				return 5124;
			case -761111297:
				return 942;
			case -760665347:
				return 1691;
			case -760482550:
				return 3437;
			case -760219872:
				return 915;
			case -758809480:
				return 4862;
			case -758478976:
				return 3724;
			case -757536090:
				return 767;
			case -754402027:
				return 4043;
			case -753991897:
				return 4340;
			case joaat("MP_STEALWAGON_VALENTINE_PVP_01"):
				return 3112;
			case joaat("CS_EXVICTIM_01_MS1_HAT_000"):
				return 4593;
			case -752167963:
				return 4584;
			case joaat("MP_WGNTHIEF_RIGGS_PVP_01"):
				return 3160;
			case -750547036:
				return 4897;
			case -750332266:
				return 6037;
			case joaat("MP_HIDEOUT_CUMBERLANDFALLS_01"):
				return 2536;
			case joaat("HAT_MR1_107"):
				return 4777;
			case -748167060:
				return 4283;
			case -747202837:
				return 2680;
			case -744893065:
				return 5593;
			case -742967204:
				return 4947;
			case -742663052:
				return 4740;
			case -742582399:
				return 3324;
			case -742448140:
				return 92;
			case joaat("MP_INTERCEPT_HAGENORCHARD_RCP_01"):
				return 2594;
			case -742068592:
				return 5049;
			case -741888410:
				return 5954;
			case -741400764:
				return 3256;
			case -739513437:
				return 1926;
			case -739156672:
				return 1381;
			case -737737856:
				return 5165;
			case joaat("META_OUTFIT_ANIMAL_SPARROWEURO"):
				return 276;
			case -737069165:
				return 5576;
			case -737034136:
				return 1544;
			case joaat("MP_INTERCEPT_RATHSKELLER_PVP_01"):
				return 2618;
			case joaat("META_OUTFIT_ANIMAL_HAWKROUGH"):
				return 164;
			case joaat("MP_CONVOY_EMRANCH_RCP_01"):
				return 2282;
			case -733158685:
				return 826;
			case -732066068:
				return 4828;
			case -731221042:
				return 5628;
			case -731144983:
				return 5502;
			case joaat("META_OUTFIT_ANIMAL_PRONGHORN_001"):
				return 245;
			case -730531534:
				return 2399;
			case joaat("MP_INTRO_SKINNER_05"):
				return 2544;
			case -729658759:
				return 562;
			case -729311089:
				return 3549;
			case joaat("MP_STEALBOAT_MONTANARIVER_RCP_01"):
				return 3060;
			case -728303546:
				return 2637;
			case -728053340:
				return 3802;
			case -727597974:
				return 1592;
			case -726966617:
				return 804;
			case -726640126:
				return 1689;
			case -726499920:
				return 408;
			case -726002460:
				return 5450;
			case joaat("MP_STEALWAGON_GAPTOOTH_RCP_01"):
				return 3100;
			case -724814468:
				return 3342;
			case joaat("MP_WGNBRKOUT_DONJULIO_RCP_01"):
				return 3130;
			case -724195795:
				return 5158;
			case -723412063:
				return 5781;
			case -721892122:
				return 709;
			case -721241820:
				return 993;
			case -720821592:
				return 1861;
			case -718123519:
				return 2703;
			case -716079791:
				return 4973;
			case joaat("MP_POST_MULTIRELAY_BRIDGE_01"):
				return 2820;
			case -715232751:
				return 5784;
			case -714851402:
				return 1170;
			case -714350873:
				return 5640;
			case -713674172:
				return 2379;
			case joaat("MP_CHU_KID_GREATPLAINS2_RCP_01"):
				return 2141;
			case joaat("MP_WGNTHIEF_RIGGS_RCP_01"):
				return 3161;
			case -709559055:
				return 1103;
			default:
				break;
		}
		if (iParam1 >= 1)
		{
		}
		return -1;
	}
	if (iParam0 <= joaat("MP_CHU_ROB_GREENHOLLOW_VIP_04"))
	{
		switch (iParam0)
		{
			case -708449957:
				return 3747;
			case -704432918:
				return 5718;
			case joaat("MP_POST_MULTIPACKAGE_BLWMANSION_01"):
				return 2782;
			case -700268376:
				return 1991;
			case -699376769:
				return 520;
			case -698395376:
				return 5665;
			case -697654256:
				return 1211;
			case -697356104:
				return 5303;
			case -697229765:
				return 1119;
			case -696157764:
				return 1936;
			case -693696284:
				return 3749;
			case -693476783:
				return 2393;
			case -693382964:
				return 2387;
			case -693085022:
				return 1603;
			case -692339451:
				return 1274;
			case -691017218:
				return 183;
			case -689387725:
				return 3661;
			case joaat("MP_WGNTHIEF_VANHORN_RCP_01"):
				return 3169;
			case -688808254:
				return 1511;
			case -687902076:
				return 3344;
			case -687511173:
				return 505;
			case -686715817:
				return 5535;
			case -685051807:
				return 457;
			case -684566337:
				return 4169;
			case -684301891:
				return 1826;
			case -683969991:
				return 3678;
			case -683450511:
				return 3826;
			case -683323972:
				return 1072;
			case joaat("META_ANIMAL_OUTFIT_BIGHORNRAMDESERT"):
				return 31;
			case -681987827:
				return 662;
			case -681946237:
				return 3700;
			case -681434979:
				return 3992;
			case joaat("HAT_FR1_625"):
				return 4552;
			case -678891981:
				return 1464;
			case -678439271:
				return 2580;
			case joaat("MP_CAMPDEF_GRIZZLIES_VIP_01"):
				return 2081;
			case joaat("MP_CAMPDEF_HENNIGANS_VIP_02"):
				return 2088;
			case -675613171:
				return 2343;
			case joaat("BANDAGEHEAD_MR1_001"):
				return 4563;
			case joaat("MP_CAMPDEF_HEARTLANDS1_VIP_02"):
				return 2084;
			case -673281247:
				return 2889;
			case -672456463:
				return 990;
			case -671972948:
				return 4456;
			case -671525629:
				return 4622;
			case -670764496:
				return 3688;
			case joaat("MP_CHU_ROB_MILLESANI_VIP_01"):
				return 2218;
			case joaat("MP_ASN_PIKESBASIN_TAR_04"):
				return 2014;
			case -669441829:
				return 5748;
			case -669008620:
				return 3703;
			case -668350768:
				return 2924;
			case -667899877:
				return 1709;
			case -667293258:
				return 1148;
			case -667067668:
				return 5092;
			case -663591036:
				return 4440;
			case -663186604:
				return 2443;
			case joaat("META_OUTFIT_WARM_WEATHER_CASUAL"):
				return 800;
			case -662811912:
				return 3571;
			case -662009659:
				return 1364;
			case -661738271:
				return 1766;
			case joaat("META_OUTFIT_BLACKWATER_VAR_02"):
				return 374;
			case -661216614:
				return 1561;
			case -661073532:
				return 2886;
			case -660967434:
				return 4571;
			case -659415215:
				return 3508;
			case joaat("META_ANIMAL_OUTFIT_LOONYELLOW"):
				return 203;
			case -657665461:
				return 2744;
			case -657458017:
				return 3882;
			case joaat("MP_STEALHORSE_BARROWLAGOON_RCP_01"):
				return 3063;
			case -656217231:
				return 4310;
			case -653795165:
				return 741;
			case -653428076:
				return 4123;
			case -650363905:
				return 5877;
			case -649742617:
				return 5758;
			case -648674793:
				return 1289;
			case -644349862:
				return 5991;
			case -642842207:
				return 4407;
			case -642303264:
				return 3488;
			case -641829946:
				return 4540;
			case -640197969:
				return 1576;
			case -639466092:
				return 4084;
			case -639256265:
				return 4049;
			case joaat("MP_ONTHEHUNT_DEADHORSE_08"):
				return 1804;
			case -637574684:
				return 2693;
			case -636783812:
				return 4306;
			case joaat("MP_ASN_CHOLLASPRINGS_TAR_06"):
				return 2456;
			case -636362977:
				return 3380;
			case -633387743:
				return 5364;
			case joaat("MP_RECOVER_PIKESBASIN_RCP_01"):
				return 2973;
			case joaat("MP_POST_MULTIRELAY_PAINTEDSKY_01"):
				return 2833;
			case -632180586:
				return 1234;
			case -631517981:
				return 3417;
			case -631044895:
				return 3625;
			case -630007248:
				return 4161;
			case -629559957:
				return 1314;
			case -628473014:
				return 1131;
			case -628155288:
				return 4969;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_CHOPS_001_07"):
				return 5268;
			case -627948381:
				return 5956;
			case -627302502:
				return 4489;
			case -626875660:
				return 5508;
			case joaat("META_OUTFIT_ANIMAL_CHICKENLEGHORN"):
				return 70;
			case -625287055:
				return 3381;
			case -625166001:
				return 5305;
			case -624338961:
				return 5572;
			case -624174111:
				return 3433;
			case -623886757:
				return 735;
			case -623206952:
				return 4984;
			case joaat("MP_POST_MULTIRELAY_GREENBANKMILL_01"):
				return 2826;
			case -622976910:
				return 4808;
			case -621995119:
				return 1833;
			case -621175506:
				return 330;
			case -619909806:
				return 1606;
			case -617812031:
				return 3421;
			case -616595312:
				return 1187;
			case joaat("MP_STEALHORSE_MACFARLANES_RCP_01"):
				return 3084;
			case -613577747:
				return 3922;
			case -613035313:
				return 2877;
			case -612403110:
				return 3619;
			case -611333108:
				return 4638;
			case -608588251:
				return 1720;
			case -606676212:
				return 1810;
			case -606256421:
				return 4224;
			case -605879817:
				return 935;
			case joaat("MP_POST_MULTIPACKAGE_MACOMBSEND_01"):
				return 2775;
			case -605047280:
				return 1778;
			case -604345323:
				return 1410;
			case joaat("MP_CHU_KID_GREATPLAINS_VIP_02"):
				return 2115;
			case -602708144:
				return 984;
			case joaat("MP_CHU_ROB_RATHSKELLER_VIP_04"):
				return 2233;
			case joaat("MP_ASN_TWOCROWS_TAR_01"):
				return 2470;
			case -601933624:
				return 5314;
			case -600773839:
				return 3323;
			case -600461295:
				return 1192;
			case -599524865:
				return 3866;
			case -598537733:
				return 1440;
			case -598424688:
				return 3937;
			case -598312200:
				return 94;
			case -598268833:
				return 3517;
			case joaat("META_OUTFIT_ANIMAL_SEAGULLLAUGHING"):
				return 259;
			case -594424327:
				return 2565;
			case -594048039:
				return 4975;
			case -593831012:
				return 2628;
			case -593168181:
				return 4487;
			case -591185284:
				return 5944;
			case -590922912:
				return 1383;
			case -589558704:
				return 3883;
			case joaat("MP_GENERIC_BAYOUNWA_MC_FR_01"):
				return 1827;
			case -588745599:
				return 3476;
			case joaat("META_OUTFIT_ANIMAL_WOLFSMALL_000"):
				return 299;
			case -587538794:
				return 4082;
			case joaat("MP_ASNTRK_GRIZZLIESWEST_TAR_02"):
				return 2045;
			case -586797511:
				return 4395;
			case -585635835:
				return 5534;
			case joaat("HAT_MR1_004"):
				return 4673;
			case joaat("MP_GENERIC_GREATPLAINS_MC_FR_01"):
				return 1836;
			case -585613628:
				return 3494;
			case joaat("MP_HIDEOUT_GAPTOOTHBREACH_01"):
				return 2517;
			case -583137931:
				return 5625;
			case -582691655:
				return 1144;
			case -582378224:
				return 544;
			case -581515561:
				return 1748;
			case -580372742:
				return 3983;
			case -579908690:
				return 4173;
			case joaat("MP_STEALHORSE_VENTERS_PVP_01"):
				return 3090;
			case -572074408:
				return 5186;
			case -571910128:
				return 5676;
			case joaat("MP_POST_MULTIPACKAGE_GAPTOOTHBREACH_01"):
				return 2793;
			case joaat("MP_RESCUE_SDDOGFIGHT_VIP_01"):
				return 3022;
			case -570182803:
				return 4929;
			case joaat("MP_CHU_ROB_STRAWBERRY_VIP_03"):
				return 2273;
			case joaat("META_OUTFIT_ANIMAL_ALBINO_ELK"):
				return 127;
			case -566183237:
				return 4425;
			case -566017659:
				return 1016;
			case -565853485:
				return 2964;
			case -565729830:
				return 322;
			case -564226776:
				return 5039;
			case joaat("MP_ONTHEHUNT_SPIDERGORGE_01"):
				return 1954;
			case -563885195:
				return 3723;
			case -563229883:
				return 1588;
			case -562786900:
				return 5973;
			case joaat("MP_STEALWAGON_SDPOLICE_PVP_01"):
				return 3106;
			case joaat("META_ANIMAL_OUTFIT_ALLIGATOR1_000"):
				return 0;
			case -561467984:
				return 1884;
			case joaat("META_OUTFIT_ANIMAL_FOX_001"):
				return 158;
			case joaat("MP_CHU_ROB_RHODES_VIP_04"):
				return 2270;
			case -557478855:
				return 948;
			case -556829805:
				return 1248;
			case -555691071:
				return 353;
			case -554108142:
				return 4607;
			case -554029492:
				return 3565;
			case -552778627:
				return 4040;
			case -552329892:
				return 3589;
			case -551667706:
				return 3197;
			case joaat("MP_RECOVER_MANTECAFALLS_02"):
				return 1864;
			case -551377960:
				return 4525;
			case -551219792:
				return 17;
			case -551028478:
				return 3363;
			case -550122427:
				return 682;
			case -549780986:
				return 4630;
			case -549623824:
				return 1277;
			case -549448146:
				return 5908;
			case -549369016:
				return 3755;
			case -549094797:
				return 5438;
			case -548778169:
				return 5361;
			case -548380012:
				return 1744;
			case -548281042:
				return 480;
			case -547620067:
				return 1901;
			case -546998951:
				return 3591;
			case -545490796:
				return 5400;
			case -545486808:
				return 4377;
			case -545260653:
				return 5610;
			case -544950005:
				return 4872;
			case -544856742:
				return 2909;
			case -544752451:
				return 1695;
			case -544499676:
				return 5523;
			case -543987717:
				return 1462;
			case -542530838:
				return 3048;
			case -540868886:
				return 1514;
			case joaat("MP_CHU_ROB_CALIGAHALL_VIP_03"):
				return 2192;
			case -540312496:
				return 4417;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_CHIN_000_08"):
				return 5242;
			case joaat("META_OUTFIT_ANIMAL_EAGLEGOLDEN"):
				return 123;
			case joaat("MP_PRSN_ASN_THIEVESLANDING_01"):
				return 2871;
			case -539154341:
				return 3615;
			case -538504875:
				return 1102;
			case -536694793:
				return 6062;
			case -536383461:
				return 6038;
			case -535425906:
				return 727;
			case joaat("META_OUTFIT_ANIMAL_PHEASANTCHINESE"):
				return 222;
			case joaat("HAT_MR1_068"):
				return 4747;
			case -533567409:
				return 4125;
			case -533435285:
				return 2328;
			case -533056741:
				return 5828;
			case -530436596:
				return 3362;
			case -529370838:
				return 4021;
			case -529274427:
				return 2914;
			case -528409948:
				return 1397;
			case -527391152:
				return 3996;
			case -526825003:
				return 528;
			case -526170718:
				return 5755;
			case -524529050:
				return 4946;
			case -524214992:
				return 1502;
			case -524076867:
				return 5942;
			case joaat("MANGY_RAT"):
				return 254;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_STACHE_001_02"):
				return 5281;
			case joaat("MP_HIDEOUT_RATTLESNAKE_01"):
				return 2520;
			case -520917363:
				return 1501;
			case joaat("MP_INTRO_DELLOBO_03"):
				return 2498;
			case -520362209:
				return 5971;
			case joaat("META_OUTFIT_ANIMAL_JAVELINA_001"):
				return 200;
			case -518969703:
				return 5559;
			case -514876150:
				return 3405;
			case -514477014:
				return 4856;
			case joaat("META_OUTFIT_ANIMAL_PIGEONBANDTAIL"):
				return 225;
			case -513353480:
				return 1370;
			case -512584123:
				return 1285;
			case -510627993:
				return 1353;
			case -510540035:
				return 5302;
			case -510121631:
				return 4827;
			case -509575506:
				return 336;
			case -509232723:
				return 2947;
			case -508654310:
				return 3482;
			case joaat("HAT_MR1_075"):
				return 5298;
			case -506398995:
				return 451;
			case -504548744:
				return 3349;
			case -504265410:
				return 3618;
			case joaat("MP_WGNTHIEF_WAPITI_RCP_02"):
				return 3175;
			case joaat("HAT_MR1_062"):
				return 4739;
			case -502622876:
				return 2926;
			case -502068609:
				return 5524;
			case -501172705:
				return 5780;
			case -501105687:
				return 3255;
			case -499606421:
				return 840;
			case joaat("MP_INTERCEPT_RIGGS_PVP_01"):
				return 2597;
			case joaat("MP_CHU_KID_GREATPLAINS2_VIP_03"):
				return 2120;
			case joaat("CS_FAMOUSGUNSLINGER_04_MS1_HAT_000"):
				return 4595;
			case -497325635:
				return 83;
			case joaat("HAT_MR1_011"):
				return 4688;
			case joaat("BINDINGS_HANDS_DEFAULT"):
				return 5939;
			case -492406189:
				return 4160;
			case -490827428:
				return 2951;
			case -490808460:
				return 5223;
			case joaat("MP_CHU_KID_LEMOYNE_PVP_01"):
				return 2146;
			case -490533720:
				return 5012;
			case -490526072:
				return 3726;
			case -488056446:
				return 771;
			case -487647520:
				return 2684;
			case -486951805:
				return 946;
			case joaat("MP_ASN_BENEDICTPOINT_TAR_02"):
				return 1978;
			case -484896238:
				return 932;
			case -483769255:
				return 5709;
			case -483262920:
				return 3320;
			case -482104695:
				return 4469;
			case -480192077:
				return 3391;
			case -479942279:
				return 9;
			case -479904964:
				return 2946;
			case -478015708:
				return 436;
			case -477512349:
				return 5963;
			case -476786675:
				return 5717;
			case -474320433:
				return 4166;
			case -473212559:
				return 2326;
			case -472883453:
				return 1214;
			case -471166413:
				return 4011;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_STACHE_001_10"):
				return 5289;
			case -470525434:
				return 4143;
			case joaat("MP_POST_MULTIRELAY_VHTHOUSE_01"):
				return 2815;
			case -469981716:
				return 3338;
			case -469783696:
				return 1099;
			case -469693955:
				return 1450;
			case -469361550:
				return 2729;
			case -468987614:
				return 4001;
			case -467627369:
				return 4007;
			case -466848293:
				return 5128;
			case -466613106:
				return 3676;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_STACHE_002_08"):
				return 5294;
			case -464748763:
				return 3314;
			case -464507370:
				return 3470;
			case -464357656:
				return 5594;
			case -463378621:
				return 1036;
			case -462728092:
				return 2317;
			case -461244148:
				return 6036;
			case joaat("MP_STEALHORSE_CASTORSPOND_PVP_01"):
				return 3069;
			case -461013972:
				return 640;
			case joaat("MP_CAMPDEF_HENNIGANS_VIP_01"):
				return 2089;
			case -459386165:
				return 5878;
			case -459106787:
				return 5378;
			case -458886755:
				return 5666;
			case -458310986:
				return 1118;
			case -458212801:
				return 1512;
			case -457948132:
				return 5813;
			case -457202422:
				return 1291;
			case joaat("MP_RESUPPLY_CALIGAHALL_RCP_01"):
				return 3030;
			case -457044640:
				return 536;
			case -457018103:
				return 181;
			case -456769142:
				return 890;
			case -456698908:
				return 4032;
			case -456587690:
				return 845;
			case -456344546:
				return 4807;
			case -456291287:
				return 3767;
			case -455890981:
				return 5536;
			case -455646448:
				return 3662;
			case -454688983:
				return 1378;
			case joaat("MP_INTERCEPT_BLUEWATER_PVP_01"):
				return 2600;
			case -452925133:
				return 1071;
			case -452499109:
				return 4193;
			case -451283585:
				return 4776;
			case -451282281:
				return 4868;
			case -450209310:
				return 3945;
			case -449967837:
				return 556;
			case -446249401:
				return 1649;
			case -444531732:
				return 3827;
			case -443523004:
				return 1413;
			case -442433422:
				return 1779;
			case -442025666:
				return 4170;
			case joaat("MP_REPO_GRIZZLIES_RCP_01"):
				return 2982;
			case -440759658:
				return 1463;
			case joaat("MP_ASN_PIKESBASIN_TAR_03"):
				return 2013;
			case -438888282:
				return 5390;
			case -437994361:
				return 609;
			case -436566742:
				return 3333;
			case -436092282:
				return 4636;
			case joaat("CS_MADELINEFUSSAR_FS1_TURBAN_000"):
				return 4517;
			case -435549190:
				return 1783;
			case joaat("META_OUTFIT_VALENTINE_VAR_01"):
				return 433;
			case -433020993:
				return 3459;
			case joaat("MP_REPO_SHADYBELLE_RCP_01"):
				return 2985;
			case joaat("META_OUTFIT_BLACKWATER_VAR_03"):
				return 375;
			case joaat("MP_HIDEOUT_BEAVERHOLLOW_01"):
				return 2535;
			case joaat("MP_JAILBREAK_VALENTINE_RCP_01"):
				return 2656;
			case -430545324:
				return 2356;
			case -430148063:
				return 3286;
			case joaat("MP_REPO_BIGVALLEY_RCP_01"):
				return 2977;
			case joaat("MP_INTRO_SKINNER_MAP"):
				return 2545;
			case -426210876:
				return 5609;
			case -425505664:
				return 1114;
			case -425386627:
				return 1388;
			case -425033610:
				return 643;
			case -424122419:
				return 1209;
			case -422746218:
				return 3573;
			case -420968901:
				return 976;
			case joaat("META_WEARABLE_COMPONENT_MP_MONEYBAGS_MALE"):
				return 6052;
			case joaat("MP_ONTHEHUNT_HANGINGROCK_01"):
				return 1940;
			case -419792780:
				return 197;
			case -419378151:
				return 3764;
			case -418924698:
				return 4476;
			case -418660362:
				return 484;
			case -418402148:
				return 545;
			case -416749125:
				return 1661;
			case -416348257:
				return 1335;
			case joaat("MP_ASN_HAMLINPASSING_TAR_02"):
				return 2464;
			case -414878191:
				return 2716;
			case -414020790:
				return 5255;
			case -413528895:
				return 955;
			case joaat("MP_OTH_WAPITI_RCP_01"):
				return 2761;
			case -412707582:
				return 5414;
			case -412605991:
				return 3674;
			case joaat("MP_STEALHORSE_COLTER_PVP_01"):
				return 3073;
			case -411107356:
				return 5404;
			case -410498007:
				return 4648;
			case -410397569:
				return 1339;
			case joaat("MP_CHU_KID_RHODES_VIP_03"):
				return 2157;
			case joaat("HAT_FR1_047"):
				return 4548;
			case -407733886:
				return 2589;
			case -407715650:
				return 1117;
			case -406830163:
				return 4396;
			case -405718983:
				return 1027;
			case joaat("MP_GUNVOUTD3_01"):
				return 3124;
			case -404299396:
				return 5953;
			case -403557073:
				return 4244;
			case -403437994:
				return 5401;
			case -403209224:
				return 4576;
			case -401648963:
				return 5793;
			case joaat("MP_CAMPDEF_EASTNEWHANOVER_VIP_02"):
				return 2073;
			case -396820592:
				return 519;
			case -396744528:
				return 3784;
			case -396026032:
				return 359;
			case -394963139:
				return 3651;
			case -394401250:
				return 4057;
			case -394073354:
				return 5949;
			case -391427634:
				return 1315;
			case -391226468:
				return 5050;
			case -390909990:
				return 4812;
			case -390864545:
				return 192;
			case -390776312:
				return 5639;
			case -388767993:
				return 3352;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_CHOPS_001_04"):
				return 5265;
			case -387344661:
				return 1466;
			case joaat("META_OUTFIT_ANIMAL_ALBINO_PRONGHORN"):
				return 243;
			case -386016106:
				return 5492;
			case -385240971:
				return 3947;
			case -384665490:
				return 3432;
			case -384230944:
				return 4373;
			case joaat("MP_RESCUE_COLTER_VIP_01"):
				return 2998;
			case -383920487:
				return 1390;
			case -383691756:
				return 1382;
			case -383501949:
				return 331;
			case -383491333:
				return 5362;
			case -382848137:
				return 4892;
			case -380464486:
				return 819;
			case -380116539:
				return 858;
			case -379895645:
				return 3507;
			case -379880227:
				return 2670;
			case -378875633:
				return 4426;
			case joaat("MP_ASN_TWOCROWS_TAR_02"):
				return 2471;
			case -378722167:
				return 4864;
			case -378711797:
				return 1777;
			case joaat("MP_PRSN_ASN_FORTWALLACE_01"):
				return 2863;
			case joaat("MP_POST_MULTIPACKAGE_COMPSONSSTEAD_01"):
				return 2771;
			case joaat("META_ANIMAL_OUTFIT_BIGHORNRAMROCKY_000"):
				return 35;
			case -375551845:
				return 4941;
			case -374467904:
				return 1513;
			case -374245633:
				return 2702;
			case -374021869:
				return 3198;
			case joaat("META_OUTFIT_ANIMAL_POISON_FOX"):
				return 161;
			case -371124820:
				return 3687;
			case -370731449:
				return 1879;
			case -369348190:
				return 2411;
			case -369217119:
				return 4330;
			case -368114487:
				return 6091;
			case -367995603:
				return 1417;
			case -367088258:
				return 5425;
			case -367045828:
				return 657;
			case -366554319:
				return 1109;
			case joaat("MP_POST_RELAY_BLACKWATER_01"):
				return 2840;
			case joaat("MP_INTERCEPT_STRAWBERRY_RCP_01"):
				return 2598;
			case -364813759:
				return 3786;
			case joaat("META_OUTFIT_ANIMAL_LEGENDARY_MUSKIE"):
				return 146;
			case -360941481:
				return 1811;
			case -359407954:
				return 5874;
			case joaat("MP_ASN_SDWEDDING_BRIDE"):
				return 2023;
			case -357577858:
				return 3322;
			case -357254564:
				return 6059;
			case -357122915:
				return 317;
			case -356370154:
				return 2316;
			case joaat("MP_HIDEOUT_KAMASSARIVER_01"):
				return 2507;
			case -353699767:
				return 2306;
			case -353478435:
				return 5030;
			case -353246972:
				return 4223;
			case -352089994:
				return 291;
			case joaat("MP_ASN_FORTMERCER_TAR_05"):
				return 2461;
			case -350062858:
				return 2743;
			case -349437695:
				return 2731;
			case -349342716:
				return 3407;
			case -348708667:
				return 980;
			case joaat("GOON3"):
				return 1160;
			case -346838721:
				return 3884;
			case -346294909:
				return 1296;
			case joaat("MP_REPOBOAT_MONTANARIVER_RCP_02"):
				return 2989;
			case -344677281:
				return 4388;
			case -344533451:
				return 6015;
			case -343242121:
				return 6029;
			case -342303967:
				return 420;
			case joaat("MP_ONTHEHUNT_DEADHORSE_07"):
				return 1803;
			case -339615333:
				return 3389;
			case -339275545:
				return 796;
			case -338492697:
				return 2338;
			case joaat("MP_ONTHEHUNT_DEADHORSE_02"):
				return 1798;
			case joaat("MP_POST_MULTIPACKAGE_BLWSTATION_01"):
				return 2783;
			case -333619310:
				return 2380;
			case joaat("MP_REPO_TALLTREES_RCP_01"):
				return 2987;
			case -333008565:
				return 5924;
			case -332119951:
				return 3909;
			case joaat("CS_DUTCH_MS1_HAT_001"):
				return 4587;
			case joaat("HAT_MR1_102"):
				return 4772;
			case -331077040:
				return 900;
			case -330402688:
				return 2880;
			case -330296550:
				return 1044;
			case joaat("MP_RECOVER_GAPTOOTH_RCP_01"):
				return 2971;
			case -329350351:
				return 4899;
			case joaat("MP_STEALWAGON_CARMODYDELL_PVP_01"):
				return 3092;
			case joaat("META_OUTFIT_KIDNAPPED"):
				return 957;
			case -325933489:
				return 5984;
			case -325418141:
				return 3232;
			case -324004853:
				return 968;
			case -323821779:
				return 5162;
			case -321790979:
				return 667;
			case -321409750:
				return 404;
			case joaat("HAT_TR1_065"):
				return 4799;
			case -320884300:
				return 5352;
			case -320633866:
				return 4149;
			case -320579826:
				return 5204;
			case joaat("MP_INTRO_CRIMINAL_MAP"):
				return 2514;
			case -319316558:
				return 5544;
			case -318198111:
				return 3902;
			case -316763893:
				return 1266;
			case -316466960:
				return 5061;
			case -315608373:
				return 5040;
			case joaat("META_OUTFIT_ANIMAL_DEER_001"):
				return 89;
			case -314862125:
				return 262;
			case -314847033:
				return 5962;
			case -314456701:
				return 3587;
			case -314409914:
				return 3027;
			case -313794617:
				return 690;
			case -313228025:
				return 3805;
			case -311581759:
				return 1677;
			case -310541214:
				return 3200;
			case -309827936:
				return 5552;
			case -309550414:
				return 5866;
			case -309431207:
				return 1154;
			case -309158751:
				return 951;
			case -308853729:
				return 2302;
			case joaat("MP_RESCUE_LONNIESSHACK_VIP_01"):
				return 3003;
			case joaat("META_OUTFIT_ANIMAL_ELK_001"):
				return 129;
			case -307000369:
				return 1612;
			case joaat("MP_CAMPDEF_HEARTLANDS2_VIP_03"):
				return 2085;
			case -306773074:
				return 3330;
			case -306710010:
				return 1006;
			case joaat("MP_STEALBOAT_BLUEWATER_RCP_01"):
				return 3054;
			case joaat("MP_ASN_BLACKWATER_TAR_06"):
				return 1988;
			case -305864675:
				return 3496;
			case -304965544:
				return 1281;
			case -304825635:
				return 3585;
			case -304187611:
				return 4053;
			case -303975567:
				return 5911;
			case -303248706:
				return 5059;
			case -302836163:
				return 967;
			case -300122447:
				return 604;
			case joaat("META_WEARABLE_MONEYBAGS"):
				return 810;
			case -298787449:
				return 5045;
			case -298034195:
				return 5432;
			case -295686949:
				return 3630;
			case -295655494:
				return 5626;
			case -295271134:
				return 4344;
			case -295180138:
				return 934;
			case -295121346:
				return 1560;
			case -293772591:
				return 4155;
			case -293291508:
				return 4866;
			case -292356056:
				return 1605;
			case joaat("MP_GENERIC_BAYOUNWA_MC_FR_02"):
				return 1828;
			case -290616418:
				return 5595;
			case joaat("META_OUTFIT_ANIMAL_WOLFSMALL_001"):
				return 300;
			case joaat("HAT_MR1_085"):
				return 4760;
			case -287830874:
				return 4598;
			case joaat("META_OUTFIT_ANIMAL_COUGAR_000"):
				return 74;
			case -286141027:
				return 1708;
			case -285909340:
				return 4997;
			case -284998601:
				return 4826;
			case -283257058:
				return 2427;
			case joaat("MP_RECOVER_BIGVALLEY_02"):
				return 1965;
			case -282410385:
				return 4468;
			case -281941363:
				return 1749;
			case joaat("META_ANIMAL_OUTFIT_MP_ALLIGATOR1PIEBALD"):
				return 5;
			case -279341646:
				return 1620;
			case -278247479:
				return 2300;
			case -277290985:
				return 5044;
			case -276529984:
				return 4258;
			case -274450205:
				return 5440;
			case joaat("HAT_MR1_017_ALT02"):
				return 4701;
			case -273913950:
				return 5837;
			case -273086735:
				return 978;
			case joaat("HAT_MR1_109"):
				return 4779;
			case -272185592:
				return 4202;
			case -271685333:
				return 5879;
			case -271415321:
				return 1041;
			case -270691674:
				return 5580;
			case -270208757:
				return 683;
			case -268906033:
				return 5783;
			case -268723490:
				return 5431;
			case -267746461:
				return 4847;
			case -266874643:
				return 329;
			case -266797969:
				return 5675;
			case -266482999:
				return 4811;
			case -266476181:
				return 689;
			case -266231526:
				return 3599;
			case -265869490:
				return 5660;
			case -265848862:
				return 3819;
			case -265708188:
				return 1657;
			case joaat("META_WEARABLE_MONEY_BAG"):
				return 830;
			case -265550993:
				return 3531;
			case joaat("MP_WGNTHIEF_WAPITI_RCP_01"):
				return 3174;
			case -263286992:
				return 743;
			case -262949646:
				return 407;
			case -262411688:
				return 4222;
			case -262251192:
				return 5022;
			case -260640293:
				return 4945;
			case joaat("MP_HIDEOUT_TALLTREES_01"):
				return 2538;
			case -259175088:
				return 6093;
			case -258810541:
				return 3951;
			case joaat("MP_POST_MULTIPACKAGE_HILLHAVENRANCH_01"):
				return 2774;
			case -256765748:
				return 1225;
			case joaat("META_OUTFIT_ANIMAL_POISON_SKUNK"):
				return 263;
			case -254794762:
				return 916;
			case -254470577:
				return 5180;
			case -253184540:
				return 4959;
			case -252863409:
				return 4767;
			case -251521208:
				return 3718;
			case -251280159:
				return 952;
			case -251006207:
				return 1168;
			case -250100086:
				return 5568;
			case -249609933:
				return 177;
			case -248229926:
				return 3429;
			case joaat("MP_POST_MULTIRELAY_NORTHFORTRIGGS_01"):
				return 2832;
			case -247430782:
				return 1035;
			case -245346160:
				return 4341;
			case -244704158:
				return 2303;
			case joaat("MP_ASNTRK_HAGENORCHARD_TAR_03"):
				return 2052;
			case -243736330:
				return 5708;
			case -243046331:
				return 4253;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_CHIN_000_09"):
				return 5243;
			case -242282989:
				return 5177;
			case -241779505:
				return 1398;
			case -240866616:
				return 427;
			case -239660984:
				return 4406;
			case -239290301:
				return 4855;
			case -239090299:
				return 4661;
			case joaat("CROWN_FR1_000"):
				return 4502;
			case -236706999:
				return 5556;
			case -235110358:
				return 1430;
			case -234026486:
				return 2331;
			case -232767794:
				return 5925;
			case -232164202:
				return 3224;
			case -231858212:
				return 504;
			case -230463833:
				return 2296;
			case -230258516:
				return 4843;
			case joaat("HAT_MR1_010"):
				return 4686;
			case -228472306:
				return 4246;
			case joaat("META_OUTFIT_VAL_PIANO_PLAYER_01"):
				return 635;
			case -226375808:
				return 543;
			case -225925992:
				return 5603;
			case joaat("MP_ASNTRK_ELYSIANPOOL_TAR_05"):
				return 2042;
			case -225203438:
				return 3681;
			case -224817152:
				return 3300;
			case -224627972:
				return 1031;
			case -222492439:
				return 3533;
			case -221657348:
				return 4198;
			case -221040939:
				return 4378;
			case -220774791:
				return 5979;
			case joaat("META_OUTFIT_ANIMAL_SONGBIRDTANAGER"):
				return 275;
			case joaat("META_OUTFIT_ANIMAL_PANTHER_000"):
				return 214;
			case joaat("MP_INTERCEPT_WAPITI_PVP_01"):
				return 2625;
			case -216756988:
				return 464;
			case -213652895:
				return 5301;
			case -212576728:
				return 3547;
			case -212178950:
				return 671;
			case -211106360:
				return 879;
			case -210225995:
				return 3941;
			case -209682190:
				return 1630;
			case -209298199:
				return 884;
			case -207791739:
				return 3516;
			case -207587629:
				return 501;
			case -207467036:
				return 4334;
			case -207072849:
				return 1456;
			case -207060528:
				return 868;
			case -206827607:
				return 2416;
			case -206652020:
				return 2892;
			case -206277066:
				return 4667;
			case -205699199:
				return 2447;
			case joaat("MP_CAMPDEF_CHOLLASPRINGS_VIP_01"):
				return 2071;
			case -203912706:
				return 4524;
			case -203830412:
				return 3675;
			case joaat("MP_ASN_SDWEDDING_TAR_06"):
				return 2030;
			case -202686971:
				return 1638;
			case joaat("MP_CHU_KID_SCARLETTMEADOWS_VIP_01"):
				return 2163;
			case -201219812:
				return 103;
			case -198552061:
				return 5509;
			case -198186820:
				return 5549;
			case -197201404:
				return 5875;
			case -194993662:
				return 1336;
			case -194891548:
				return 437;
			case -193717355:
				return 1458;
			case -193363968:
				return 3946;
			case -191756634:
				return 6083;
			case joaat("MSP_NATIVE1_ASSISTANT_01"):
				return 3278;
			case -190747234:
				return 5756;
			case -190539624:
				return 3271;
			case -189973924:
				return 2683;
			case -189959220:
				return 2395;
			case -189898008:
				return 773;
			case -188652218:
				return 1768;
			case -188589213:
				return 485;
			case -188243795:
				return 954;
			case -187534673:
				return 4002;
			case -187303136:
				return 3844;
			case joaat("MP_ASN_HAMLINPASSING_TAR_01"):
				return 2463;
			case joaat("META_OUTFIT_HUNTTORSOGORE_01"):
				return 559;
			case -183434441:
				return 3395;
			case -183039148:
				return 314;
			case -182798547:
				return 5391;
			case -182223560:
				return 3390;
			case -182115660:
				return 975;
			case -181813316:
				return 3266;
			case -181744552:
				return 4205;
			case -181504100:
				return 6040;
			case -181472496:
				return 5884;
			case -180751400:
				return 4342;
			case -179416077:
				return 4477;
			case -179277812:
				return 1340;
			case joaat("HAT_MR1_119"):
				return 4784;
			case -178012064:
				return 5656;
			case joaat("MP_WGNTHIEF_WAPITI_PVP_02"):
				return 3173;
			case -177756187:
				return 3213;
			case -177379567:
				return 119;
			case -177268864:
				return 1499;
			case -175048441:
				return 3780;
			case -173533621:
				return 3385;
			case -172440630:
				return 5776;
			case -171324619:
				return 1404;
			case -170053137:
				return 5415;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_CHOPS_000_04"):
				return 5256;
			case joaat("MP_CHU_ROB_AMBARINO_PVP_01"):
				return 2234;
			case -168675782:
				return 4008;
			case -168645972:
				return 557;
			case joaat("MP_ASN_FORTMERCER_TAR_03"):
				return 2459;
			case joaat("MP_WGNTHIEF_BRAITHWAITE_RCP_01"):
				return 3153;
			case -165211104:
				return 4869;
			case joaat("HAT_FR1_703"):
				return 4555;
			case -164067433:
				return 4652;
			case joaat("META_ANIMAL_OUTFIT_BIGHORNRAM_001"):
				return 30;
			case -163324029:
				return 3518;
			case -163161156:
				return 2887;
			case -162389825:
				return 5645;
			case joaat("MP_CAMPDEF_EASTNEWHANOVER_VIP_01"):
				return 2074;
			case -159189157:
				return 4033;
			case -158509995:
				return 613;
			case joaat("MP_POST_MULTIRELAY_BUTCHERCREEK_01"):
				return 2821;
			case -158344433:
				return 631;
			case -157854626:
				return 318;
			case -156180016:
				return 5799;
			case joaat("META_ANIMAL_OUTFIT_BIGHORNSHEEPDESERT"):
				return 39;
			case -153914114:
				return 2381;
			case -153489326:
				return 5792;
			case -152379493:
				return 5779;
			case -152334013:
				return 2754;
			case -151663611:
				return 5474;
			case -150866858:
				return 3652;
			case joaat("META_ANIMAL_OUTFIT_BEAVER_001"):
				return 26;
			case -149657157:
				return 3419;
			case joaat("MP_CHU_KID_EMRSTATION_PVP_01"):
				return 2137;
			case -147293229:
				return 5194;
			case -147138531:
				return 2705;
			case -146968301:
				return 3728;
			case joaat("MP_POST_MULTIPACKAGE_MOONSHINESHACK_01"):
				return 2797;
			case joaat("MP_ASN_STILLWATER_TAR_06"):
				return 2037;
			case joaat("HAT_MR1_026"):
				return 4710;
			case -143152998:
				return 5094;
			case -142679559:
				return 3520;
			case joaat("MP_WGNTHIEF_GRIZZLIES_RCP_02"):
				return 3159;
			case joaat("MP_CHU_ROB_CUMBERLAND_PVP_01"):
				return 2246;
			case -139476531:
				return 4035;
			case -139301483:
				return 1776;
			case -139026567:
				return 6035;
			case -138299176:
				return 2659;
			case joaat("MP_GENERIC_SCARLETTMDWS_MC_FR_01"):
				return 1854;
			case -136640401:
				return 595;
			case -135648153:
				return 5608;
			case -135511422:
				return 4977;
			case joaat("MP_WGNBRKOUT_GRIZZLIES_RCP_02"):
				return 3135;
			case joaat("MP_POST_RELAY_EMERALDRANCH_01"):
				return 2845;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_CHOPS_000_02"):
				return 5254;
			case joaat("MP_WGNTHIEF_RIOBRAVO_PVP_01"):
				return 3162;
			case -130504282:
				return 3335;
			case -130032219:
				return 1556;
			case -129904911:
				return 3966;
			case joaat("META_OUTFIT_VALENTINE_VAR_02"):
				return 434;
			case -128035795:
				return 1097;
			case -128013111:
				return 3719;
			case -127494429:
				return 302;
			case joaat("AM_ROBTRAIN_REAR_GUARD_01"):
				return 4362;
			case joaat("MP_CHU_ROB_GREENHOLLOW_RCP_01"):
				return 2251;
			case -125646248:
				return 3042;
			case -124160973:
				return 5031;
			case -123430459:
				return 5079;
			case -123314198:
				return 3351;
			case -123217707:
				return 2374;
			case -122215397:
				return 1459;
			case -121567083:
				return 5208;
			case -120266635:
				return 348;
			case joaat("HAT_MR1_002"):
				return 4663;
			case -119829330:
				return 6020;
			case -119790375:
				return 642;
			case -119681160:
				return 4319;
			case joaat("MP_WGNTHIEF_SAINTDENIS_PVP_01"):
				return 3163;
			case -118014388:
				return 1635;
			case -117879972:
				return 5527;
			case -117366188:
				return 1899;
			case -117285247:
				return 4069;
			case -116956289:
				return 315;
			case -115650141:
				return 3505;
			case -113718815:
				return 3694;
			case joaat("MP_INTRO_CRIMINAL_05"):
				return 2513;
			case -112730625:
				return 5448;
			case joaat("MP_ONTHEHUNT_CASTORSPOND_02"):
				return 1933;
			case -109879214:
				return 3194;
			case -109387749:
				return 1591;
			case -108158466:
				return 294;
			case -107481820:
				return 5714;
			case -106855723:
				return 1454;
			case -105586907:
				return 8;
			case -104851789:
				return 3614;
			case -104423980:
				return 1078;
			case -104223060:
				return 5025;
			case -104009789:
				return 3985;
			case -103241551:
				return 2392;
			case joaat("META_OUTFIT_ANIMAL_SPIRIT_COYOTE_A"):
				return 82;
			case -99355867:
				return 654;
			case joaat("META_OUTFIT_WARM_WEATHER"):
				return 768;
			case -95012358:
				return 3848;
			case -92466889:
				return 5678;
			case -92377168:
				return 5814;
			case -91907672:
				return 1435;
			case -90937179:
				return 621;
			case -89820714:
				return 5021;
			case joaat("MP_POST_MULTIRELAY_BEAVERHOLLOW_01"):
				return 2819;
			case joaat("MP_PRSN_ASN_PAINTEDSKY_01"):
				return 2867;
			case joaat("MP_STEALHORSE_LONEMULE_RCP_01"):
				return 3082;
			case -88712922:
				return 6069;
			case -87854144:
				return 4423;
			case joaat("META_ANIMAL_OUTFIT_PRONGHORNSONO_000"):
				return 238;
			case -87015717:
				return 5445;
			case -86845760:
				return 4893;
			case -85094670:
				return 3279;
			case -84401865:
				return 4778;
			case -81940250:
				return 969;
			case -81725888:
				return 3948;
			case -80601477:
				return 1880;
			case -80413685:
				return 4130;
			case -79568915:
				return 3188;
			case joaat("MP_CAMPDEF_RADLEYSPASTURE_VIP_01"):
				return 2093;
			case -77803429:
				return 1399;
			case -76975684:
				return 1303;
			case -76486653:
				return 2700;
			case -76015264:
				return 828;
			case -75857551:
				return 1096;
			case -75429968:
				return 5363;
			case -75384562:
				return 459;
			case -75174285:
				return 4926;
			case -75008056:
				return 4996;
			case -74197413:
				return 3588;
			case -73982421:
				return 1570;
			case joaat("MP_ASNTRK_BRITTLEBUSH_TAR_03"):
				return 2478;
			case -71632767:
				return 1418;
			case -71169776:
				return 6014;
			case -68603054:
				return 503;
			case -68183942:
				return 4309;
			case -67818828:
				return 1087;
			case -66820576:
				return 3583;
			case joaat("MP_INTERCEPT_BRITTLEBUSH_RCP_01"):
				return 2601;
			case joaat("MP_CHU_KID_LEMOYNE_VIP_02"):
				return 2132;
			case -63839916:
				return 2301;
			case joaat("MP_POST_RELAY_VANHORN_01"):
				return 2857;
			case -62258445:
				return 1876;
			case -62071308:
				return 4238;
			case -61383994:
				return 1915;
			case joaat("META_OUTFIT_ANIMAL_SNAKERAINBOWBOA"):
				return 271;
			case -59601903:
				return 861;
			case -58203156:
				return 2400;
			case -57209890:
				return 535;
			case joaat("MSP_NATIVE1_AILING_NATIVE_01"):
				return 3276;
			case -56313992:
				return 2405;
			case joaat("MP_POST_MULTIRELAY_LARNEDSOD_01"):
				return 2829;
			case -55002621:
				return 3742;
			case -54540155:
				return 1883;
			case -54399588:
				return 1293;
			case -53055130:
				return 1707;
			case -52800960:
				return 578;
			case -52791170:
				return 4880;
			case joaat("HAT_MR1_058"):
				return 4734;
			case joaat("HAT_MR1_082"):
				return 4757;
			case -48870448:
				return 949;
			case joaat("META_OUTFIT_ANIMAL_COUGAR_001"):
				return 75;
			case -48181857:
				return 3462;
			case -48174362:
				return 506;
			case -47652026:
				return 2299;
			case -47352751:
				return 3690;
			case -46962910:
				return 3430;
			case -46724507:
				return 191;
			case -45817670:
				return 4825;
			case joaat("MP_WGNBRKOUT_BAYOUNWA_RCP_01"):
				return 3126;
			case -45001716:
				return 5346;
			case -44203702:
				return 1788;
			case -44073298:
				return 419;
			case joaat("HAT_MR1_041"):
				return 4715;
			case joaat("MP_REPO_RIDGEWOOD_RCP_01"):
				return 2984;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_STACHE_002_07"):
				return 5293;
			case -40889162:
				return 1602;
			case joaat("MP_POST_MULTIPACKAGE_FLATNECKSTATION_01"):
				return 2773;
			case -39944810:
				return 664;
			case -39820365:
				return 4267;
			case -38195500:
				return 6030;
			case joaat("META_OUTFIT_ANIMAL_ELK_M"):
				return 130;
			case joaat("HAT_FR1_020"):
				return 4539;
			case -36775863:
				return 694;
			case -36377342:
				return 1116;
			case -35830085:
				return 4920;
			case -34663302:
				return 354;
			case -34547514:
				return 3803;
			case -33872278:
				return 4898;
			case joaat("MP_ASN_BENEDICTPOINT_TAR_04"):
				return 1980;
			case joaat("META_ANIMAL_OUTFIT_BEAR_000"):
				return 14;
			case -29543774:
				return 1024;
			case joaat("META_ANIMAL_OUTFIT_BULLDEVON"):
				return 67;
			case -27749127:
				return 1581;
			case -27369282:
				return 4470;
			case -26968750:
				return 5313;
			case joaat("MP_ASN_TWOCROWS_TAR_05"):
				return 2474;
			case -25705656:
				return 5526;
			case -25691879:
				return 4588;
			case joaat("MP_ASN_BLACKWATER_TAR_05"):
				return 1987;
			case -23778371:
				return 745;
			case -22778074:
				return 5782;
			case -21174151:
				return 3586;
			case -20984612:
				return 1022;
			case joaat("META_OUTFIT_ANIMAL_PELICANWHITE"):
				return 221;
			case -20737928:
				return 3392;
			case -20643141:
				return 1001;
			case joaat("MP_GENERIC_NEWAUSTIN_MC_FR_02"):
				return 1843;
			case -20262001:
				return 2409;
			case -19246973:
				return 4493;
			case joaat("MP_ASN_BRAITHWAITEMANOR_TAR_02"):
				return 1990;
			case -15746647:
				return 5126;
			case joaat("META_OUTFIT_RIGGSSTATION_VAR_01"):
				return 4353;
			case -14515504:
				return 4849;
			case -13842514:
				return 2660;
			case -12610504:
				return 4466;
			case joaat("MP_ASNTRK_HAGENORCHARD_TAR_02"):
				return 2051;
			case -10963979:
				return 3717;
			case -10496631:
				return 919;
			case -9813844:
				return 4444;
			case -8240077:
				return 5057;
			case joaat("META_OUTFIT_ANIMAL_POISON_CHAINPICKEREL"):
				return 138;
			case -6942546:
				return 3206;
			case joaat("META_OUTFIT_ANIMAL_ELK_000"):
				return 128;
			case -6199089:
				return 4561;
			case joaat("HEAD_01"):
				return 4916;
			case joaat("MP_POST_RELAY_EMERALDRANCH_02"):
				return 2846;
			case joaat("META_OUTFIT_ANIMAL_LEGENDARY_NORTHERNPIKE"):
				return 147;
			case -4228011:
				return 1888;
			case joaat("HAT_FR1_001"):
				return 4528;
			case -1177608:
				return 4964;
			case 0:
				return 6102;
			case 605381:
				return 1282;
			case 1841389:
				return 384;
			case 3534412:
				return 3513;
			case 4613714:
				return 1064;
			case 4921971:
				return 380;
			case 7417637:
				return 5596;
			case joaat("MP_CONVOY_RHODES_RCP_02"):
				return 2288;
			case 8501250:
				return 1573;
			case 8731860:
				return 5512;
			case 9182899:
				return 4210;
			case 10572125:
				return 3631;
			case 11010989:
				return 668;
			case 11964851:
				return 3402;
			case joaat("META_OUTFIT_ANIMAL_CORMORANTNEO"):
				return 71;
			case 13248388:
				return 2332;
			case 13635894:
				return 500;
			case 14708870:
				return 5482;
			case 16777490:
				return 1235;
			case joaat("MP_RECOVER_BIGVALLEY_01"):
				return 1964;
			case 17591745:
				return 5235;
			case 17630047:
				return 672;
			case 18497349:
				return 1654;
			case 20095908:
				return 4994;
			case joaat("MP_CHU_KID_VALENTINE_RCP_01"):
				return 2154;
			case joaat("META_OUTFIT_MOONSHINE"):
				return 958;
			case 22653700:
				return 2417;
			case 23997852:
				return 3869;
			case 24387074:
				return 100;
			case joaat("MP_CHU_ROB_STRAWBERRY_VIP_01"):
				return 2271;
			case joaat("MP_CHU_ROB_GREENHOLLOW_VIP_04"):
				return 2209;
			default:
				break;
		}
		if (iParam1 >= 1)
		{
		}
		return -1;
	}
	if (iParam0 <= joaat("MP_ASN_SDGRAVEYARD_TAR_03"))
	{
		switch (iParam0)
		{
			case 28738706:
				return 5043;
			case joaat("MP_ONTHEHUNT_DEADHORSE_01"):
				return 1797;
			case 30596609:
				return 820;
			case 30729039:
				return 1403;
			case 31025968:
				return 5631;
			case 32270322:
				return 4465;
			case 32289857:
				return 1613;
			case 32611963:
				return 2410;
			case 33476861:
				return 5355;
			case 33840243:
				return 5037;
			case 34607264:
				return 3759;
			case 34704813:
				return 5873;
			case 36520277:
				return 2874;
			case 36879155:
				return 1269;
			case 37289196:
				return 874;
			case 37708101:
				return 3205;
			case 38858769:
				return 5449;
			case joaat("MP_CONVOY_STRAWBERRY_RCP_01"):
				return 2291;
			case 39510090:
				return 3925;
			case joaat("MP_RESCUE_CRATERSACRIFICE_VIP_02"):
				return 3000;
			case 41277335:
				return 3887;
			case 41345883:
				return 3967;
			case 41730569:
				return 2434;
			case joaat("META_OUTFIT_DEFAULT"):
				return 757;
			case 41792611:
				return 1224;
			case 42113864:
				return 5968;
			case 42186812:
				return 1641;
			case 43068458:
				return 1579;
			case 43190143:
				return 666;
			case 44115893:
				return 2307;
			case 44625770:
				return 3855;
			case 47534268:
				return 65;
			case joaat("MP_INTRO_CRIMINAL_02"):
				return 2510;
			case 50923185:
				return 4368;
			case 51596379:
				return 5416;
			case 52124307:
				return 3269;
			case joaat("MP_ASN_BLACKWATER_TAR_03"):
				return 1985;
			case joaat("MP_WGNTHIEF_WAPITI_PVP_01"):
				return 3172;
			case 54111189:
				return 1344;
			case 54369366:
				return 3715;
			case joaat("MP_ASNTRK_ISABELLA_TAR_02"):
				return 2057;
			case 58031651:
				return 2484;
			case joaat("MP_INTERCEPT_CALIGAHALL_PVP_01"):
				return 2592;
			case 60782588:
				return 611;
			case 61606861:
				return 2413;
			case 62001786:
				return 3861;
			case 62464739:
				return 2403;
			case joaat("MP_CHU_ROB_CORONADO_VIP_02"):
				return 2195;
			case 63819572:
				return 5865;
			case 63846471:
				return 6092;
			case joaat("MP_JAILBREAK_SAINTDENIS_01"):
				return 2649;
			case 66360455:
				return 4878;
			case 66620888:
				return 6094;
			case 66758822:
				return 2742;
			case 67362891:
				return 2891;
			case 67789286:
				return 601;
			case 67843882:
				return 5451;
			case joaat("META_OUTFIT_SAINTDENIS_VAR_01"):
				return 409;
			case 69459957:
				return 5910;
			case 70096421:
				return 2612;
			case 70586051:
				return 3259;
			case 70688453:
				return 1126;
			case 71890561:
				return 632;
			case joaat("META_OUTFIT_BUTCHERCREEK_COOK_02"):
				return 368;
			case joaat("MP_POST_MULTIPACKAGE_PAINTEDSKY_02"):
				return 2800;
			case 72764813:
				return 3938;
			case 73606843:
				return 4908;
			case 75146260:
				return 979;
			case 76781312:
				return 680;
			case 77420784:
				return 3438;
			case 77429504:
				return 5778;
			case joaat("DLC_MP_BH_M_FEET_2_0"):
				return 4788;
			case 78565875:
				return 1521;
			case joaat("MP_INTERCEPT_OLDBACCHUS_PVP_01"):
				return 2615;
			case 79622328:
				return 614;
			case 79674171:
				return 894;
			case 79769370:
				return 5137;
			case 80126161:
				return 5456;
			case 81366814:
				return 4052;
			case 81480873:
				return 5476;
			case joaat("META_ANIMAL_OUTFIT_DOGLABCHOC"):
				return 111;
			case joaat("MP_CAMPDEF_CHOLLASPRINGS_VIP_02"):
				return 2072;
			case joaat("MP_CHU_ROB_RATHSKELLER_VIP_01"):
				return 2230;
			case 86100600:
				return 1558;
			case joaat("MP_STEALHORSE_BEARCLAW_RCP_01"):
				return 3064;
			case joaat("MP_WGNBRKOUT_VALENTINE_PVP_01"):
				return 3148;
			case 92458080:
				return 3624;
			case 92469667:
				return 3345;
			case 92978289:
				return 4700;
			case 93379816:
				return 4455;
			case 94261686:
				return 3133;
			case joaat("MP_REPOBOAT_DAKOTARIVER_RCP_01"):
				return 2993;
			case 94979731:
				return 5226;
			case 95105388:
				return 301;
			case 95127708:
				return 5203;
			case joaat("META_OUTFIT_ANIMAL_PANTHER_001"):
				return 215;
			case 96688455:
				return 3942;
			case 97198369:
				return 5693;
			case 97646082:
				return 1457;
			case 101350893:
				return 3993;
			case 101365566:
				return 4618;
			case 101517552:
				return 1889;
			case joaat("MP_STEALWAGON_SOLOMONS_RCP_01"):
				return 3109;
			case 102966951:
				return 3526;
			case 103259813:
				return 786;
			case 103600042:
				return 3115;
			case joaat("MP_CHU_ROB_MACLEANS_PVP_01"):
				return 2254;
			case 104468037:
				return 3988;
			case 104710086:
				return 453;
			case 104767195:
				return 5466;
			case 105465259:
				return 104;
			case joaat("MP_RESUPPLY_VANHORN_RCP_01"):
				return 3038;
			case 108332307:
				return 2739;
			case 108466000:
				return 5796;
			case 108996907:
				return 3932;
			case 110079842:
				return 4605;
			case joaat("MP_STEALHORSE_HENNIGANS_PVP_01"):
				return 3079;
			case 112671045:
				return 2635;
			case 112776593:
				return 438;
			case 114272443:
				return 766;
			case 117646617:
				return 5207;
			case joaat("MP_STEALBOAT_WINDOWROCK_RCP_01"):
				return 3062;
			case 118073924:
				return 1431;
			case 118409610:
				return 338;
			case joaat("MP_STEALHORSE_CALIGAHALL_PVP_01"):
				return 3067;
			case 119343708:
				return 4247;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_CHOPS_001_05"):
				return 5266;
			case joaat("META_OUTFIT_GUNSLINGER"):
				return 3412;
			case joaat("META_OUTFIT_ANIMAL_POISON_BEARBLACK"):
				return 24;
			case 124489516:
				return 3642;
			case 124736669:
				return 3655;
			case 125607214:
				return 1132;
			case 127083513:
				return 870;
			case 128080956:
				return 5388;
			case 129066235:
				return 5655;
			case joaat("MP_CAMPDEF_TWOROCKS_VIP_02"):
				return 2101;
			case 130528728:
				return 3436;
			case 130764381:
				return 554;
			case 131718414:
				return 4451;
			case 131922197:
				return 1793;
			case 134647366:
				return 4424;
			case 134713496:
				return 5312;
			case 135451461:
				return 2647;
			case 135745455:
				return 4485;
			case 135811130:
				return 758;
			case 137419002:
				return 5543;
			case 140030891:
				return 751;
			case 140196785:
				return 3382;
			case 140876661:
				return 5901;
			case 141294393:
				return 4488;
			case 141421681:
				return 3748;
			case 143948496:
				return 2706;
			case 143972945:
				return 1255;
			case joaat("MP_ONTHEHUNT_HOTSPRINGS_02"):
				return 1943;
			case 146365384:
				return 4009;
			case 146972782:
				return 1215;
			case 147003953:
				return 730;
			case 147271932:
				return 1757;
			case 147615960:
				return 3590;
			case 148685433:
				return 1222;
			case 149367980:
				return 2949;
			case 149416653:
				return 5919;
			case 149872391:
				return 5989;
			case joaat("MP_ASN_GAPTOOTHBREACH_TAR_02"):
				return 2007;
			case joaat("MP_ONTHEHUNT_SPIDERGORGE_02"):
				return 1955;
			case 152526598:
				return 5380;
			case 152538979:
				return 568;
			case joaat("HAT_MR1_027"):
				return 4711;
			case 153059716:
				return 1238;
			case 153190976:
				return 2679;
			case joaat("MP_STEALWAGON_COMPSONSSTEAD_PVP_01"):
				return 3094;
			case 154214852:
				return 1412;
			case 154219982:
				return 2753;
			case 155038486:
				return 4308;
			case 155140289:
				return 5597;
			case 158140748:
				return 120;
			case 158252845:
				return 2450;
			case 159381960:
				return 3761;
			case 163056605:
				return 391;
			case 164179428:
				return 5212;
			case 165594057:
				return 6034;
			case 167005469:
				return 3337;
			case 167481052:
				return 1302;
			case joaat("MP_HAT_MR1_000"):
				return 4792;
			case 167864621:
				return 4231;
			case 168683004:
				return 4522;
			case 168813857:
				return 2685;
			case 169272416:
				return 1386;
			case 170440772:
				return 1745;
			case 170828967:
				return 3394;
			case 171289892:
				return 592;
			case 172029938:
				return 1098;
			case joaat("HAT_MR1_039"):
				return 4714;
			case joaat("MP_INTERCEPT_RATHSKELLER_PVP_02"):
				return 2619;
			case 174754238:
				return 895;
			case joaat("MP_ONTHEHUNT_TALLTREES_01"):
				return 1958;
			case joaat("MP_ASNTRK_GRIZZLIESWEST_TAR_03"):
				return 2046;
			case 175472193:
				return 4474;
			case 176018606:
				return 5349;
			case 177941887:
				return 3705;
			case 180784434:
				return 3252;
			case 182066636:
				return 4963;
			case 182706368:
				return 5624;
			case joaat("MP_GENERIC_TALLTREES_MC_FR_01"):
				return 1857;
			case 184083808:
				return 298;
			case 185498487:
				return 4237;
			case 185520820:
				return 5612;
			case 188024071:
				return 3347;
			case 189354361:
				return 5420;
			case 190307792:
				return 1095;
			case 190672636:
				return 5340;
			case 191340200:
				return 5727;
			case 191342410:
				return 1472;
			case 191923877:
				return 6095;
			case 192278340:
				return 5777;
			case 195187657:
				return 3837;
			case 195403865:
				return 3955;
			case joaat("MP_CHU_KID_LEMOYNE_VIP_01"):
				return 2130;
			case joaat("HAT_MR1_007_ALT02"):
				return 4684;
			case 202256484:
				return 1543;
			case 202418200:
				return 190;
			case 202708326:
				return 5145;
			case 204243433:
				return 1598;
			case 204307849:
				return 3998;
			case joaat("MP_ASN_TWOCROWS_TAR_06"):
				return 2475;
			case 204939119:
				return 3774;
			case 205624806:
				return 1085;
			case 206095773:
				return 5172;
			case 206215058:
				return 655;
			case 206311939:
				return 1807;
			case 207194933:
				return 5766;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_STACHE_002_06"):
				return 5292;
			case 207801893:
				return 4939;
			case 207985876:
				return 4460;
			case 208875071:
				return 5570;
			case 211006820:
				return 5677;
			case 211929957:
				return 4514;
			case 213813854:
				return 2952;
			case joaat("HAT_MR1_066"):
				return 4745;
			case 215775401:
				return 4412;
			case joaat("MP_WGNBRKOUT_BLACKWATER_PVP_02"):
				return 3128;
			case 218350172:
				return 4346;
			case joaat("META_OUTFIT_ANIMAL_POISON_COYOTE"):
				return 81;
			case 220757907:
				return 4509;
			case 221231973:
				return 5216;
			case joaat("MP_ASN_BRAITHWAITEMANOR_TAR_01"):
				return 1989;
			case 222664376:
				return 3981;
			case 223110125:
				return 2661;
			case joaat("HAT_MR1_079"):
				return 4755;
			case 224785123:
				return 3892;
			case joaat("META_OUTFIT_VALENTINE_VAR_03"):
				return 435;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_CHOPS_000_06"):
				return 5258;
			case 226768236:
				return 1208;
			case 226990147:
				return 5141;
			case 227595947:
				return 5121;
			case joaat("MP_ASN_CIVILWARFORT_TAR_03"):
				return 2002;
			case 229452171:
				return 1127;
			case 229895796:
				return 3670;
			case 230506129:
				return 3530;
			case 230969001:
				return 645;
			case 231626735:
				return 4128;
			case joaat("MP_CHU_ROB_PAINTEDSKY_RCP_01"):
				return 2261;
			case 234787986:
				return 1961;
			case joaat("MP_PRSN_ASN_BLACKBONE_01"):
				return 2860;
			case 236902739:
				return 3212;
			case 237021560:
				return 6045;
			case joaat("MP_REPO_BRAITHWAITE_RCP_01"):
				return 2978;
			case 237421869:
				return 5005;
			case 237600800:
				return 2408;
			case 238725229:
				return 872;
			case 239505138:
				return 2448;
			case 239661014:
				return 686;
			case 240805573:
				return 1186;
			case 240835980:
				return 3598;
			case 241266540:
				return 4974;
			case 241911854:
				return 1039;
			case 243077652:
				return 5427;
			case joaat("MP_CAMPDEF_ROANOKE_VIP_01"):
				return 2097;
			case 243346937:
				return 789;
			case 246152209:
				return 477;
			case 246158148:
				return 3836;
			case 248092858:
				return 5367;
			case 248721043:
				return 1169;
			case 249626696:
				return 1623;
			case 249802073:
				return 1453;
			case 249987835:
				return 3954;
			case 250181492:
				return 1400;
			case 250329042:
				return 3568;
			case 251649753:
				return 4062;
			case 251738079:
				return 381;
			case joaat("MP_CHU_ROB_CORONADO_RCP_01"):
				return 2245;
			case 253306781:
				return 3050;
			case 254203988:
				return 2972;
			case 254342877:
				return 577;
			case 254461606:
				return 5669;
			case 254852080:
				return 4153;
			case joaat("HAT_MR1_093"):
				return 5299;
			case 257673720:
				return 2336;
			case 257876299:
				return 3768;
			case 258048327:
				return 541;
			case joaat("MP_POST_RELAY_MOONSHINESHACK_01"):
				return 2850;
			case 260897019:
				return 3926;
			case 261219891:
				return 3870;
			case joaat("HAT_MR1_100"):
				return 4771;
			case 263659570:
				return 1815;
			case 263759244:
				return 73;
			case 263788213:
				return 6085;
			case 263980226:
				return 4243;
			case 263983136:
				return 5743;
			case 264620465:
				return 4165;
			case joaat("MP_GENERIC_BIGVALLEY_MC_FR_03"):
				return 1832;
			case 265929026:
				return 5461;
			case joaat("MP_STEALWAGON_SOLOMONS_PVP_01"):
				return 3108;
			case 267145876:
				return 4682;
			case 267296198:
				return 1436;
			case joaat("MP_CHU_KID_LAGRAS_PVP_01"):
				return 2144;
			case joaat("MP_POST_MULTIRELAY_RIGGSSTATION_01"):
				return 2813;
			case 268183572:
				return 4965;
			case 268321530:
				return 704;
			case 268389804:
				return 2312;
			case 269707046:
				return 5659;
			case 269778132:
				return 695;
			case 270219573:
				return 2578;
			case 270331528:
				return 4411;
			case joaat("MP_RESCUE_RIVALSHACK_VIP_01"):
				return 3018;
			case 271644876:
				return 5038;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_STACHE_000_04"):
				return 5274;
			case 272442076:
				return 5795;
			case 274566850:
				return 4879;
			case 275729025:
				return 3944;
			case 276247339:
				return 95;
			case 276796119:
				return 3989;
			case 277024448:
				return 1589;
			case 277039904:
				return 4626;
			case 278186831:
				return 2667;
			case 278819816:
				return 3888;
			case joaat("DISCOVERABLES_WHITE_BUFFALO"):
				return 54;
			case 279688279:
				return 5467;
			case 279921781:
				return 3529;
			case 280037751:
				return 5460;
			case 280389573:
				return 5525;
			case joaat("MP_ONTHEHUNT_DEADHORSE_04"):
				return 1800;
			case 282187013:
				return 6028;
			case 282886208:
				return 1566;
			case joaat("MP_CHU_ROB_CORONADO_VIP_03"):
				return 2196;
			case joaat("MP_STEALHORSE_PLEASANCE_RCP_01"):
				return 3086;
			case joaat("MP_WGNBRKOUT_VANHORN_PVP_01"):
				return 3149;
			case 288769675:
				return 4845;
			case 288967888:
				return 3807;
			case 289956569:
				return 4544;
			case 290229161:
				return 6011;
			case 290692733:
				return 4251;
			case 290772784:
				return 3319;
			case joaat("MP_RECOVER_MANTECAFALLS_01"):
				return 1973;
			case 291788744:
				return 2390;
			case 293767346:
				return 4337;
			case 293796590:
				return 1814;
			case 294802571:
				return 1089;
			case 295181033:
				return 1705;
			case 295653132:
				return 5521;
			case joaat("MP_PRSN_ASN_GREENHOLLOW_01"):
				return 2864;
			case 297483549:
				return 2354;
			case joaat("MP_ASNTRK_TALLTREES_TAR_03"):
				return 2064;
			case 298411747:
				return 5868;
			case 299450815:
				return 4643;
			case 299476496:
				return 669;
			case joaat("MP_WGNBRKOUT_FLATNECK_RCP_01"):
				return 3131;
			case 300972942:
				return 5913;
			case 301110488:
				return 1551;
			case joaat("MP_ASN_SDGRAVEYARD_TAR_01"):
				return 2504;
			case joaat("MP_RESCUE_ANNESBURG_RCP_01"):
				return 3011;
			case 302631516:
				return 3435;
			case 303590345:
				return 5864;
			case joaat("MP_CHU_ROB_CUMBERLAND_RCP_01"):
				return 2247;
			case joaat("MP_CHU_ROB_RHODES_VIP_01"):
				return 2267;
			case joaat("MP_CAMPDEF_TALLTREES_VIP_02"):
				return 2098;
			case 306062959:
				return 362;
			case 306468371:
				return 3226;
			case 307318431:
				return 364;
			case 307371145:
				return 2136;
			case 307579313:
				return 1425;
			case 307614655:
				return 5452;
			case 307818551:
				return 3640;
			case joaat("MP_CONVOY_VETHOMESTEAD_RCP_01"):
				return 2295;
			case 308772404:
				return 4581;
			case 308949904:
				return 1173;
			case 309845830:
				return 965;
			case 311089032:
				return 3777;
			case 311134301:
				return 5947;
			case joaat("MP_GENERIC_SCARLETTMDWS_MC_FR_03"):
				return 1856;
			case 312093580:
				return 1365;
			case 312619017:
				return 1528;
			case 313000949:
				return 474;
			case 313807665:
				return 3770;
			case 314018937:
				return 616;
			case 314268789:
				return 1622;
			case 315845604:
				return 5402;
			case joaat("META_OUTFIT_BLACKWATER_VAR_01"):
				return 373;
			case joaat("META_OUTFIT_FIELD_DRESSING_003"):
				return 64;
			case 317713758:
				return 429;
			case 317807110:
				return 1405;
			case 317978114:
				return 3628;
			case 318326577:
				return 4995;
			case 318546733:
				return 5142;
			case 318626603:
				return 1796;
			case 319001356:
				return 3879;
			case 319410229:
				return 2666;
			case 319499137:
				return 1140;
			case 319532198:
				return 1789;
			case 321069852:
				return 1890;
			case 321093552:
				return 5345;
			case 321234457:
				return 1997;
			case joaat("MP_CHU_ROB_MILLESANI_RCP_01"):
				return 2257;
			case joaat("MP_CHU_ROB_RHODES_PVP_01"):
				return 2264;
			case joaat("MP_CHU_ROB_GREENHOLLOW_VIP_03"):
				return 2208;
			case joaat("MP_ONTHEHUNT_BATTLEFIELD_02"):
				return 1929;
			case 327000813:
				return 1554;
			case 327137344:
				return 685;
			case 327869858:
				return 4650;
			case 328693452:
				return 1548;
			case joaat("META_OUTFIT_PANTS_FLATS"):
				return 1051;
			case 330292936:
				return 3045;
			case 330929113:
				return 2938;
			case joaat("MP_ASNTRK_HAGENORCHARD_TAR_05"):
				return 2054;
			case joaat("META_OUTFIT_COLD_WEATHER"):
				return 760;
			case 331922849:
				return 2751;
			case joaat("MP_ASN_BENEDICTPOINT_TAR_01"):
				return 1977;
			case joaat("HAT_MR1_016"):
				return 4698;
			case 332488304:
				return 1268;
			case 334014283:
				return 1759;
			case 334248914:
				return 818;
			case 335813092:
				return 3991;
			case 335938618:
				return 3204;
			case 337267220:
				return 1886;
			case 339866912:
				return 4122;
			case 339884989:
				return 1428;
			case 340016766:
				return 925;
			case 340259850:
				return 5471;
			case 341291044:
				return 3491;
			case 341723208:
				return 3713;
			case 344292521:
				return 4109;
			case 344697576:
				return 3987;
			case 344856545:
				return 5481;
			case 345319169:
				return 5804;
			case joaat("MP_CHU_ROB_MACLEANS_RCP_01"):
				return 2255;
			case 346229808:
				return 4194;
			case joaat("MP_ONTHEHUNT_HANGINGROCK_02"):
				return 1941;
			case 346972202:
				return 1271;
			case 347506650:
				return 3964;
			case 347824283:
				return 1629;
			case 349147614:
				return 3214;
			case 349185617:
				return 4639;
			case 350995088:
				return 593;
			case 351828916:
				return 490;
			case joaat("MP_CHU_ROB_CALIGAHALL_VIP_04"):
				return 2193;
			case 352037660:
				return 5042;
			case joaat("CS_SUICIDALMINER_01_MS1_HAT_000"):
				return 4651;
			case 353982131:
				return 3663;
			case joaat("MP_ASNTRK_ISABELLA_TAR_01"):
				return 2056;
			case 357100050:
				return 4486;
			case 360071519:
				return 4641;
			case 361527976:
				return 6073;
			case 361821606:
				return 797;
			case 363082379:
				return 1574;
			case 363428013:
				return 4450;
			case joaat("MP_CHU_KID_GREATPLAINS_VIP_04"):
				return 2117;
			case 367697749:
				return 619;
			case 368759504:
				return 465;
			case 369572419:
				return 1133;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_CHIN_000_07"):
				return 5241;
			case 372218917:
				return 4871;
			case 372379652:
				return 3745;
			case 373378355:
				return 2741;
			case 374504522:
				return 3441;
			case 375471192:
				return 499;
			case joaat("COYOTE_LEGENDARY"):
				return 78;
			case 377052846:
				return 792;
			case 377302798:
				return 1735;
			case 377377612:
				return 785;
			case 377674207:
				return 4404;
			case 377907664:
				return 846;
			case 378649961:
				return 3406;
			case 379797347:
				return 4144;
			case 380387921:
				return 2483;
			case 381165278:
				return 4434;
			case 381754181:
				return 4037;
			case 382403330:
				return 3267;
			case 382498996:
				return 1730;
			case joaat("MP_ASN_SDGRAVEYARD_TAR_06"):
				return 2524;
			case 383353486:
				return 4913;
			case 383481420:
				return 1520;
			case joaat("DLC_MP_BH_M_FEET_2_1"):
				return 4789;
			case joaat("MP_CAMPDEF_HEARTLANDS2_VIP_02"):
				return 2087;
			case 384931071:
				return 1563;
			case 385403438:
				return 5680;
			case 385893700:
				return 5455;
			case joaat("CS_SEAN_MS1_HAT_000"):
				return 4645;
			case joaat("MP_POST_MULTIRELAY_CENTRALUNIONRR_01"):
				return 2823;
			case joaat("MP_CHU_KID_TUMBLEWEED_RCP_01"):
				return 2152;
			case 388723566:
				return 1467;
			case 389057251:
				return 887;
			case joaat("HAT_TR1_062"):
				return 4796;
			case joaat("META_ANIMAL_OUTFIT_PRONGHORNSONO"):
				return 237;
			case 390787076:
				return 4083;
			case 391217746:
				return 2485;
			case 392756137:
				return 5379;
			case 392974256:
				return 4352;
			case 393090546:
				return 921;
			case 393945504:
				return 5829;
			case 394109154:
				return 3236;
			case 395417358:
				return 1481;
			case 395667523:
				return 21;
			case 395705379:
				return 5389;
			case joaat("META_OUTFIT_ANIMAL_POISON_SQUIRREL"):
				return 278;
			case joaat("MP_RESUPPLY_VETHOMESTEAD_RCP_02"):
				return 3039;
			case 396486452:
				return 1491;
			case 397438869:
				return 1559;
			case joaat("MP_CHU_KID_SAINTDENIS_VIP_03"):
				return 2161;
			case 398379636:
				return 6018;
			case 399015098:
				return 5990;
			case 399381197:
				return 4121;
			case 400165254:
				return 4596;
			case joaat("CS_DOROETHEAWICKLOW_FS1_HAT_001"):
				return 4508;
			case 401713232:
				return 390;
			case joaat("MP_ONTHEHUNT_TALLTREES_02"):
				return 1959;
			case 402293651:
				return 4114;
			case 403540839:
				return 3201;
			case 404506089:
				return 4467;
			case joaat("MP_CHU_KID_SCARLETTMEADOWS_VIP_03"):
				return 2165;
			case 405972604:
				return 1674;
			case 405990742:
				return 2106;
			case 408758367:
				return 3251;
			case 409064836:
				return 5215;
			case 410413704:
				return 4287;
			case 411040031:
				return 439;
			case 411637919:
				return 1401;
			case 413495549:
				return 5408;
			case 413714842:
				return 3706;
			case joaat("META_OUTFIT_ANIMAL_FOXGRAY"):
				return 159;
			case 414488971:
				return 4989;
			case 416376003:
				return 644;
			case 416945706:
				return 5562;
			case 417890408:
				return 5853;
			case 418938726:
				return 4390;
			case 418940582:
				return 3372;
			case 419261799:
				return 339;
			case 420985526:
				return 4633;
			case 421413709:
				return 833;
			case 421528261:
				return 1820;
			case 421581998:
				return 3636;
			case 422289346:
				return 3195;
			case 423393125:
				return 1010;
			case 423892947:
				return 2646;
			case 425793786:
				return 4824;
			case 425805307:
				return 1429;
			case 425935632:
				return 3398;
			case 429183006:
				return 997;
			case 429540271:
				return 1471;
			case 429695446:
				return 3341;
			case 430539445:
				return 1287;
			case joaat("META_ANIMAL_OUTFIT_PRONGHORNM"):
				return 234;
			case 433552455:
				return 5542;
			case 434198822:
				return 4269;
			case joaat("HAT_MR1_028"):
				return 4712;
			case 436423875:
				return 591;
			case 436555239:
				return 378;
			case 436637391:
				return 2348;
			case 437432398:
				return 4586;
			case 438749731:
				return 4077;
			case 440219416:
				return 5794;
			case 440417369:
				return 5722;
			case 442090996:
				return 684;
			case 442974713:
				return 909;
			case joaat("MP_POST_MULTIRELAY_CANEBREAKMANOR_01"):
				return 2822;
			case 443515196:
				return 1632;
			case 443648544:
				return 4401;
			case 444579242:
				return 731;
			case 445120357:
				return 4010;
			case 446986746:
				return 5980;
			case 447821519:
				return 1882;
			case joaat("MP_ONTHEHUNT_COLTER_02"):
				return 1935;
			case 448228046:
				return 4940;
			case 448565114:
				return 3829;
			case 449389388:
				return 1233;
			case joaat("MP_ASNTRK_GRIZZLIESWEST_TAR_06"):
				return 2049;
			case joaat("HAT_MR1_015"):
				return 4696;
			case 451116782:
				return 1256;
			case joaat("MP_ASN_GAPTOOTHBREACH_TAR_01"):
				return 2006;
			case 451429377:
				return 1128;
			case 453142212:
				return 1223;
			case 453588583:
				return 3641;
			case 453895262:
				return 5598;
			case 454559610:
				return 2930;
			case 455237794:
				return 3806;
			case 456013541:
				return 5311;
			case 456984869:
				return 3886;
			case joaat("MP_RESUPPLY_VETHOMESTEAD_RCP_03"):
				return 3040;
			case 459539009:
				return 1787;
			case 459605260:
				return 4410;
			case 460339401:
				return 5462;
			case 460853023:
				return 3897;
			case 460892114:
				return 2958;
			case 461402949:
				return 507;
			case 462146292:
				return 515;
			case 462249975:
				return 2918;
			case joaat("META_OUTFIT_ANIMAL_SNAKENORTHERNWATER"):
				return 274;
			case 463584608:
				return 4850;
			case joaat("MP_WGNBRKOUT_BLACKWATER_PVP_03"):
				return 3129;
			case 464906090:
				return 769;
			case 465805723:
				return 6013;
			case 465945052:
				return 4026;
			case 465989484:
				return 4254;
			case 467729415:
				return 6061;
			case 467926594:
				return 1063;
			case 469058562:
				return 1015;
			case 469249943:
				return 3247;
			case 470116389:
				return 3354;
			case 470765111:
				return 1136;
			case 471722063:
				return 2713;
			case 472445608:
				return 966;
			case 474097268:
				return 3506;
			case 477366566:
				return 1387;
			case joaat("MP_HIDEOUT_MILLESANI_01"):
				return 2533;
			case 478204342:
				return 382;
			case 479475982:
				return 5426;
			case 479580738:
				return 3280;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_CHOPS_000_05"):
				return 5257;
			case 480084174:
				return 3751;
			case 480924411:
				return 2355;
			case joaat("MP_GENERIC_TALLTREES_MC_FR_02"):
				return 1858;
			case 481752702:
				return 1656;
			case joaat("MP_CHU_ROB_FORTMERCER_VIP_03"):
				return 2202;
			case 483312392:
				return 3049;
			case 483371612:
				return 610;
			case 484642347:
				return 2728;
			case 486792494:
				return 3350;
			case joaat("CS_MADELINEFUSSAR_FS1_VEIL_UP_000"):
				return 4519;
			case 487194674:
				return 431;
			case 487954660:
				return 476;
			case 489219322:
				return 2732;
			case 490627832:
				return 5083;
			case 491219746:
				return 3227;
			case 491764525:
				return 803;
			case 493708075:
				return 5670;
			case 493711514:
				return 1966;
			case 494798803:
				return 5382;
			case 495338646:
				return 5871;
			case 495747317:
				return 4981;
			case 496155170:
				return 652;
			case 496214832:
				return 469;
			case 497301289:
				return 4822;
			case 498573497:
				return 4240;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_CHIN_001_09"):
				return 5252;
			case 499595466:
				return 5146;
			case 500245810:
				return 1599;
			case 500735432:
				return 1917;
			case 500774973:
				return 5023;
			case 501171404:
				return 3956;
			case 501456460:
				return 3919;
			case 502339861:
				return 5107;
			case 502499352:
				return 5995;
			case joaat("MP_RESCUE_MOONSTONE_VIP_01"):
				return 3006;
			case 503706484:
				return 3044;
			case 504716592:
				return 5217;
			case 505021728:
				return 4569;
			case 505188099:
				return 4494;
			case 505607794:
				return 4523;
			case 505715365:
				return 824;
			case joaat("MP_CAMPDEF_GAPTOOTHRIDGE_VIP_02"):
				return 2077;
			case 507362185:
				return 696;
			case 507651089:
				return 2371;
			case 508397143:
				return 3479;
			case 508669563:
				return 3990;
			case 508700100:
				return 4894;
			case 508994550:
				return 4970;
			case 509213703:
				return 5788;
			case 509653947:
				return 718;
			case 510381508:
				return 1166;
			case joaat("META_OUTFIT_COLD"):
				return 3119;
			case 512435896:
				return 4059;
			case 512444852:
				return 2360;
			case 513154220:
				return 5517;
			case 513293108:
				return 5707;
			case 513497115:
				return 1204;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_STACHE_002_05"):
				return 5291;
			case joaat("META_OUTFIT_MP_GUN4HIRE"):
				return 1004;
			case joaat("META_HORSE_SADDLE_JUST_ONLY"):
				return 174;
			case 516181375:
				return 189;
			case 516450218:
				return 4625;
			case 518696595:
				return 3033;
			case joaat("MP_CHU_ROB_GREENHOLLOW_VIP_02"):
				return 2207;
			case 520414481:
				return 1577;
			case joaat("MP_ONTHEHUNT_CASTORSPOND_01"):
				return 1932;
			case 522321252:
				return 4305;
			case joaat("MP_INTERCEPT_PAINTEDSKY_PVP_01"):
				return 2596;
			case 524854019:
				return 5565;
			case 525317764:
				return 4348;
			case joaat("HAT_MR1_059"):
				return 4736;
			case 526359751:
				return 999;
			case 526495572:
				return 5510;
			case 526818438:
				return 1240;
			case 527512979:
				return 1716;
			case joaat("MP_PRSN_ASN_TALLTREES_01"):
				return 2870;
			case 528661298:
				return 3982;
			case 529401072:
				return 4978;
			case 529526552:
				return 744;
			case joaat("MP_ASNTRK_HAGENORCHARD_TAR_04"):
				return 2053;
			case 532561550:
				return 1590;
			case 533422236:
				return 5218;
			case joaat("MP_ASNTRK_ISABELLA_TAR_04"):
				return 2059;
			case 534331507:
				return 4881;
			case 534350542:
				return 1734;
			case 534840840:
				return 1059;
			case 538065295:
				return 1806;
			case 538142238:
				return 2330;
			case joaat("META_OUTFIT_ANIMAL_PIGBIGCHINA"):
				return 223;
			case 539239560:
				return 5444;
			case 539515226:
				return 4900;
			case 540581616:
				return 4816;
			case joaat("MP_CAMPDEF_ROANOKE_VIP_02"):
				return 2096;
			case joaat("MP_POST_RELAY_SDPORT_01"):
				return 2855;
			case 543901249:
				return 4050;
			case 544641605:
				return 1438;
			case joaat("HAT_MR1_103"):
				return 4773;
			case joaat("HAT_MR1_084"):
				return 4759;
			case 546888482:
				return 1147;
			case 547367097:
				return 5638;
			case 548953544:
				return 1101;
			case 549089113:
				return 2697;
			case 549754376:
				return 1347;
			case 549775932:
				return 938;
			case 550457596:
				return 588;
			case 550854194:
				return 992;
			case 551776143:
				return 3771;
			case 551780060:
				return 3211;
			case 552413412:
				return 615;
			case 553054982:
				return 747;
			case 553462650:
				return 4634;
			case 553638654:
				return 2577;
			case 555128125:
				return 3672;
			case 556721503:
				return 1604;
			case 558124150:
				return 3483;
			case 559234369:
				return 5175;
			case joaat("HAT_TR1_007"):
				return 4794;
			case 560715373:
				return 4148;
			case 560941803:
				return 3474;
			case 561759235:
				return 5120;
			case 563891224:
				return 3191;
			case 564117607:
				return 4131;
			case joaat("META_OUTFIT_BUTCHERCREEK_VAR_02"):
				return 371;
			case joaat("HAT_MR1_092"):
				return 4766;
			case joaat("MP_CONVOY_RHODES_RCP_01"):
				return 2287;
			case 566860665:
				return 754;
			case 566957611:
				return 3787;
			case 569256984:
				return 3818;
			case 569400595:
				return 4589;
			case 569479591:
				return 586;
			case 569640886:
				return 1918;
			case 571379702:
				return 3812;
			case 571413435:
				return 1547;
			case 572241119:
				return 5742;
			case 572262065:
				return 5558;
			case 573025389:
				return 3187;
			case joaat("REINFORCED_BINDINGS_HANDS_DEFAULT"):
				return 6101;
			case joaat("HEAD_03"):
				return 4918;
			case joaat("MP_RESCUE_VALENTINE_RCP_01"):
				return 3017;
			case joaat("MP_ONTHEHUNT_DEADHORSE_03"):
				return 1799;
			case 576057474:
				return 2633;
			case 576876690:
				return 5520;
			case 577300456:
				return 3528;
			case 577416426:
				return 5459;
			case 578096706:
				return 2663;
			case 578318942:
				return 3604;
			case 578504732:
				return 6053;
			case 578768316:
				return 736;
			case joaat("HAT_MR1_047_ALT02"):
				return 4723;
			case 585561908:
				return 1090;
			case 585741003:
				return 553;
			case 586906986:
				return 1017;
			case 586985329:
				return 590;
			case 587081729:
				return 4660;
			case 589065345:
				return 5410;
			case joaat("MP_RESUPPLY_RHODES_RCP_01"):
				return 3034;
			case joaat("MP_CHU_KID_GREATPLAINS_VIP_03"):
				return 2116;
			case 591620484:
				return 703;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_STACHE_002_10"):
				return 5296;
			case 592690236:
				return 835;
			case 592917527:
				return 1611;
			case 593589265:
				return 1210;
			case joaat("META_ANIMAL_OUTFIT_DOGLABYELLOW"):
				return 112;
			case 595460612:
				return 5028;
			case 595825765:
				return 4453;
			case 596871815:
				return 5869;
			case joaat("BEAR_LEGENDARY"):
				return 13;
			case joaat("MP_REPOBOAT_BAYOUNWA_RCP_01"):
				return 2990;
			case 597869415:
				return 4249;
			case 598839699:
				return 4065;
			case 599616266:
				return 3648;
			case 601566572:
				return 1900;
			case 601779163:
				return 4842;
			case 602206902:
				return 3431;
			case 603583214:
				return 3384;
			case 603720014:
				return 3365;
			case 605220140:
				return 1424;
			case 605997722:
				return 670;
			case 606190001:
				return 4435;
			case 606832452:
				return 5409;
			case 607344093:
				return 4949;
			case joaat("MP_ASN_SDGRAVEYARD_TAR_02"):
				return 2505;
			case 608631177:
				return 5159;
			case 608772159:
				return 5907;
			case 609066278:
				return 772;
			case 609199960:
				return 475;
			case 609870013:
				return 5955;
			case 610434548:
				return 1774;
			case joaat("MP_CAMPDEF_TALLTREES_VIP_01"):
				return 2099;
			case 611695303:
				return 3953;
			case joaat("MP_RESCUE_MTNMANSHACK_DEAD_01"):
				return 1975;
			case 614827057:
				return 5418;
			case 615241965:
				return 498;
			case 615705149:
				return 4351;
			case 616082421:
				return 542;
			case 616942859:
				return 5034;
			case joaat("MP_GENERIC_SCARLETTMDWS_MC_FR_02"):
				return 1855;
			case 618474282:
				return 4197;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_CHIN_000_04"):
				return 5238;
			case joaat("META_ANIMAL_OUTFIT_ALLIGATOR3_001"):
				return 7;
			case 621949248:
				return 1562;
			case 622113465:
				return 780;
			case 622741433:
				return 3234;
			case 625213099:
				return 1406;
			case 625655698:
				return 3765;
			case joaat("MP_CAMPDEF_LITTLECREEK_VIP_01"):
				return 2091;
			case joaat("MP_REPO_CALIGAHALL_RCP_01"):
				return 2980;
			case 627286697:
				return 5473;
			case 628512970:
				return 3367;
			case 628639629:
				return 5154;
			case 628655071:
				return 2439;
			case 628799672:
				return 4038;
			case 629126052:
				return 3282;
			case joaat("META_OUTFIT_SAINTDENIS_VAR_03"):
				return 411;
			case joaat("MP_INTRO_DELLOBO_MAP"):
				return 2501;
			case 629490500:
				return 3858;
			case 630925281:
				return 693;
			case joaat("HAT_MR1_007_ALT01"):
				return 4683;
			case 631088037:
				return 5036;
			case joaat("MP_GENERIC_NEWAUSTIN_MC_FR_06"):
				return 1847;
			case 631362542:
				return 732;
			case joaat("MP_ASN_SDWEDDING_TAR_05"):
				return 2025;
			case joaat("MP_ASN_BLACKWATER_TAR_01"):
				return 1983;
			case 632001172:
				return 5555;
			case 633166911:
				return 5403;
			case joaat("MP_CHU_KID_SAINTDENIS_VIP_04"):
				return 2162;
			case 633654067:
				return 3736;
			case 633670848:
				return 4577;
			case joaat("MP_CHU_KID_HEARTLANDS_PVP_01"):
				return 2142;
			case 634126580:
				return 1376;
			case 634534505:
				return 5484;
			case 636013471:
				return 1998;
			case 636919667:
				return 822;
			case 636991573:
				return 2937;
			case 637323261:
				return 115;
			case 637524020:
				return 3639;
			case joaat("META_OUTFIT_DRESS_FLATS"):
				return 1048;
			case 639109951:
				return 5055;
			case joaat("HAT_FR1_026"):
				return 4543;
			case 641773815:
				return 5563;
			case 643643053:
				return 893;
			case joaat("HAT_MR1_008"):
				return 4685;
			case 644441945:
				return 267;
			case joaat("CLERK"):
				return 5468;
			case 646454646:
				return 3629;
			case 646599895:
				return 815;
			case 647021842:
				return 2681;
			case 647211739:
				return 4318;
			case 647286959:
				return 3249;
			case 647386273:
				return 3490;
			case 649324346:
				return 1142;
			case 649347449:
				return 5503;
			case 650800747:
				return 4991;
			case 653933407:
				return 3196;
			case 654275985:
				return 3650;
			case 655241627:
				return 5114;
			case 655638393:
				return 1486;
			case 656868086:
				return 5183;
			case 657023538:
				return 1018;
			case 658028547:
				return 1321;
			case joaat("MP_ONTHEHUNT_MACFARLANERANCH_01"):
				return 1944;
			case joaat("META_OUTFIT_ANIMAL_ALBINO_BOAR"):
				return 48;
			case 660162155:
				return 1704;
			case 660579371:
				return 3262;
			case 660824291:
				return 4145;
			case 661858535:
				return 3830;
			case 663212962:
				return 3495;
			case 663321580:
				return 4405;
			case 663800934:
				return 5201;
			case 666139669:
				return 558;
			case 666290358:
				return 4156;
			case 666407022:
				return 5148;
			case 666615182:
				return 3581;
			case 666823002:
				return 379;
			case joaat("META_ANIMAL_OUTFIT_BUCK_001"):
				return 50;
			case 667942732:
				return 1505;
			case 668353070:
				return 5768;
			case 670991083:
				return 5581;
			case 672405718:
				return 4105;
			case 672802025:
				return 3371;
			case 673013856:
				return 549;
			case 673280696:
				return 3356;
			case 674956505:
				return 4999;
			case 674973847:
				return 3410;
			case joaat("META_OUTFIT_ANIMAL_POISON_TOAD"):
				return 284;
			case 676615008:
				return 4093;
			case 676618084:
				return 1174;
			case joaat("MP_RESUPPLY_VALENTINE_RCP_01"):
				return 3036;
			case joaat("META_OUTFIT_TUMBLEWEED_VAR_03"):
				return 423;
			case 680615675:
				return 678;
			case 681054339:
				return 5787;
			case 681302568:
				return 3917;
			case 683831289:
				return 4078;
			case 684051990:
				return 5018;
			case 684074934:
				return 2895;
			case 684572554:
				return 630;
			case 684575280:
				return 1962;
			case joaat("MP_RESCUE_CRATERSACRIFICE_VIP_01"):
				return 2999;
			case 685716416:
				return 4204;
			case 685741288:
				return 1584;
			case joaat("MP_ASNTRK_GRIZZLIESWEST_TAR_05"):
				return 2048;
			case 687175125:
				return 5108;
			case 687194793:
				return 3025;
			case 687687735:
				return 2724;
			case 687823400:
				return 5540;
			case joaat("META_ANIMAL_OUTFIT_BIGHORNRAM_000"):
				return 29;
			case joaat("HAT_MR1_014"):
				return 4693;
			case 691170977:
				return 5679;
			case 691921068:
				return 1129;
			case 692222863:
				return 4787;
			case 693543927:
				return 2929;
			case 693761739:
				return 1782;
			case 694577423:
				return 5969;
			case 694740797:
				return 6055;
			case 695758059:
				return 3570;
			case 695830910:
				return 3308;
			case 695841138:
				return 4815;
			case joaat("META_ANIMAL_OUTFIT_BIGHORNRAM"):
				return 28;
			case joaat("MP_INTRO_CRIMINAL_04"):
				return 2512;
			case 696990949:
				return 2550;
			case joaat("META_WEARABLE_COMPONENT_MP_MONEYBAGS_FEMALE"):
				return 6051;
			case joaat("META_ANIMAL_OUTFIT_PRONGHORNM_001"):
				return 236;
			case 697683187:
				return 3218;
			case joaat("MP_ASN_CIVILWARFORT_TAR_02"):
				return 2001;
			case 699344391:
				return 4976;
			case 700686081:
				return 5469;
			case joaat("MP_POST_MULTIPACKAGE_BWMPENINSULA_01"):
				return 2785;
			case 701419892:
				return 5807;
			case 701511351:
				return 1042;
			case 701748745:
				return 5798;
			case joaat("HAT_MR1_006_ALT02"):
				return 4681;
			case 702468458:
				return 1701;
			case 702588895:
				return 4958;
			case 702977187:
				return 3600;
			case joaat("MP_POST_RELAY_TRAINWAREHOUSE_01"):
				return 2856;
			case 703229643:
				return 6019;
			case 703616053:
				return 3644;
			case 703897792:
				return 5381;
			case joaat("MP_INTERCEPT_GREENBANK_RCP_01"):
				return 2608;
			case 704172231:
				return 1892;
			case joaat("MP_RECOVER_BLUEWATER_01"):
				return 1967;
			case 704841587:
				return 6032;
			case 705326154:
				return 3979;
			case 705859801:
				return 4413;
			case joaat("META_ANIMAL_OUTFIT_BIGHORNSHEEP_000"):
				return 37;
			case 707549728:
				return 5073;
			case 708638601:
				return 4883;
			case 708700820:
				return 1137;
			case 710008452:
				return 1076;
			case joaat("MP_INTRO_DELLOBO_02"):
				return 2497;
			case 711106813:
				return 2602;
			case 711380060:
				return 1299;
			case 711444684:
				return 4088;
			case 712086441:
				return 555;
			case 714554704:
				return 4988;
			case 716264264:
				return 1164;
			case 718036542:
				return 527;
			case 718939204:
				return 882;
			case 718968995:
				return 4152;
			case 719303544:
				return 1239;
			case 720283962:
				return 3461;
			case 720426672:
				return 3426;
			case 722162856:
				return 1432;
			case 723204194:
				return 4085;
			case 723508941:
				return 1516;
			case 723781402:
				return 5802;
			case 723785634:
				return 3623;
			case 723820900:
				return 1733;
			case joaat("META_OUTFIT_ANIMAL_ALBINO_FOX"):
				return 156;
			case 729370429:
				return 4302;
			case joaat("MP_WGNBRKOUT_RIGGS_PVP_01"):
				return 3140;
			case 730537527:
				return 5015;
			case joaat("MP_ASN_SDGRAVEYARD_TAR_03"):
				return 2506;
			default:
				break;
		}
		if (iParam1 >= 1)
		{
		}
		return -1;
	}
	if (iParam0 <= 1408403718)
	{
		switch (iParam0)
		{
			case joaat("CS_LEONSNIECE_FS1_HAT_000"):
				return 4515;
			case joaat("MP_POST_RELAY_ANNESBURG_01"):
				return 2837;
			case 735238585:
				return 1736;
			case 735252120:
				return 1619;
			case 737120904:
				return 3353;
			case 739008726:
				return 737;
			case 739130017:
				return 3920;
			case 740817300:
				return 4146;
			case 741239113:
				return 1167;
			case 744097966:
				return 798;
			case joaat("MP_RECOVER_GRIZZLIES_02"):
				return 1863;
			case joaat("MP_ASN_SDWEDDING_TAR_03"):
				return 2029;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_STACHE_001_08"):
				return 5287;
			case 745402968:
				return 3656;
			case 747043961:
				return 2755;
			case 747432491:
				return 1193;
			case 747984686:
				return 5706;
			case 748072587:
				return 1261;
			case 748142805:
				return 5080;
			case joaat("MP_CHU_KID_SCARLETTMEADOWS_VIP_04"):
				return 2166;
			case 748808650:
				return 3841;
			case joaat("MP_CHU_ROB_PAINTEDSKY_VIP_01"):
				return 2226;
			case 750136551:
				return 1373;
			case 750357905:
				return 5644;
			case 750792381:
				return 4400;
			case joaat("MP_CAMPDEF_GAPTOOTHRIDGE_VIP_01"):
				return 2078;
			case 752727306:
				return 2707;
			case 753159672:
				return 4392;
			case 753768155:
				return 2108;
			case 754555171:
				return 4304;
			case 755484316:
				return 1615;
			case 755524073:
				return 5721;
			case 755804670:
				return 3208;
			case 755901724:
				return 5620;
			case 756301256:
				return 3744;
			case 759793292:
				return 1597;
			case 759798341:
				return 5348;
			case 760163859:
				return 478;
			case 760210261:
				return 5880;
			case 760850346:
				return 5387;
			case 761344753:
				return 3898;
			case joaat("MP_ASNTRK_TALLTREES_TAR_01"):
				return 2062;
			case 763848031:
				return 4027;
			case joaat("MP_WGNTHIEF_CORNWALL_PVP_01"):
				return 3154;
			case 764601519:
				return 5876;
			case joaat("HAT_FR1_007"):
				return 4533;
			case 766106317:
				return 1760;
			case 766745918:
				return 4445;
			case 767108389:
				return 4091;
			case 768093357:
				return 5006;
			case 768171622:
				return 5070;
			case joaat("MP_POST_MULTIPACKAGE_FORTWALLACE_01"):
				return 2792;
			case 770684520:
				return 5926;
			case 770952537:
				return 5506;
			case 770984255:
				return 4867;
			case 771660044:
				return 2432;
			case 772091720:
				return 402;
			case joaat("BINDINGS_FEET_DEFAULT"):
				return 5937;
			case 772307571:
				return 4294;
			case 772353680:
				return 3403;
			case 772404666:
				return 2352;
			case 773668433:
				return 1914;
			case 774303669:
				return 3317;
			case joaat("HAT_MR1_060"):
				return 4737;
			case 775289787:
				return 565;
			case 777155929:
				return 383;
			case 777538026:
				return 3800;
			case 779191267:
				return 1567;
			case 779310599:
				return 1769;
			case joaat("META_OUTFIT_WALLACESTATION_VAR_03"):
				return 4358;
			case joaat("MSP_NATIVE1_AILING_NATIVE_02"):
				return 3277;
			case 781533162:
				return 889;
			case 781827251:
				return 5516;
			case 781973513:
				return 860;
			case 783027307:
				return 5453;
			case joaat("MP_ASN_PIKESBASIN_TAR_06"):
				return 2016;
			case 783219448:
				return 4209;
			case 783333033:
				return 4852;
			case joaat("META_OUTFIT_ANIMAL_FOXSILVER"):
				return 160;
			case 784451235:
				return 4895;
			case 784851706:
				return 4051;
			case joaat("HAT_MR1_122"):
				return 4785;
			case 785916394:
				return 172;
			case 786132529:
				return 1470;
			case 786313787:
				return 1346;
			case 786364334:
				return 1146;
			case 786418780:
				return 3343;
			case joaat("MP_INTERCEPT_FORTWALLACE_RCP_01"):
				return 2607;
			case joaat("META_OUTFIT_ANIMAL_SQUIRREL_000"):
				return 279;
			case 787112104:
				return 5072;
			case 787340101:
				return 2954;
			case 787636659:
				return 3914;
			case joaat("META_OUTFIT_FIELD_DRESSING_001"):
				return 3;
			case 789463698:
				return 5560;
			case 789766565:
				return 5035;
			case 790809979:
				return 1571;
			case 792379532:
				return 1916;
			case joaat("HAT_MR1_133"):
				return 4791;
			case joaat("MP_ASN_SDPOLICESTATION_TAR_04"):
				return 2020;
			case 793499396:
				return 393;
			case 793957383:
				return 4721;
			case 794165431:
				return 584;
			case joaat("MP_GUNVOUTD3_DEPUTY"):
				return 2590;
			case 795170415:
				return 3254;
			case 795656541:
				return 539;
			case 797350075:
				return 4314;
			case 797762321:
				return 6071;
			case 797910655:
				return 1761;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_CHOPS_000_08"):
				return 5260;
			case 799407888:
				return 4491;
			case joaat("MP_CHU_ROB_STRAWBERRY_VIP_04"):
				return 2274;
			case 800583576:
				return 4016;
			case 800714293:
				return 3773;
			case 800997526:
				return 4889;
			case joaat("META_OUTFIT_BUTCHERCREEK_VAR_03"):
				return 372;
			case 801529481:
				return 653;
			case 802153392:
				return 602;
			case 802278568:
				return 3878;
			case joaat("HAT_FR1_010"):
				return 4536;
			case joaat("META_OUTFIT_BUTCHERCREEK_VAR_01"):
				return 370;
			case joaat("MP_HIDEOUT_ROCKYSEVEN_01"):
				return 2508;
			case 803090815:
				return 488;
			case 803345875:
				return 1478;
			case 803557165:
				return 3556;
			case joaat("MP_POST_RELAY_BEECHERSHOPE_01"):
				return 2839;
			case joaat("HAT_MR1_053"):
				return 4731;
			case 804436912:
				return 6077;
			case joaat("MP_STEALWAGON_LAKAY_RCP_01"):
				return 3103;
			case 805062465:
				return 4971;
			case joaat("HAT_TR1_066_ALT"):
				return 4801;
			case 806280085:
				return 841;
			case 806472003:
				return 3876;
			case 806999256:
				return 5058;
			case 807110531:
				return 1784;
			case 808081230:
				return 719;
			case 811170588:
				return 1522;
			case 811858199:
				return 4265;
			case 812135392:
				return 3671;
			case 812401397:
				return 3544;
			case 812407015:
				return 1639;
			case joaat("SKINNY"):
				return 5214;
			case 815181764:
				return 5854;
			case 816175408:
				return 4347;
			case 816323515:
				return 582;
			case 817605327:
				return 2664;
			case 820205867:
				return 4928;
			case 820433396:
				return 5488;
			case 821741634:
				return 2900;
			case 822119474:
				return 4004;
			case 823398971:
				return 2714;
			case 824487295:
				return 891;
			case 826469221:
				return 3192;
			case joaat("HAT_MR1_011_ALT02"):
				return 4689;
			case 829801663:
				return 3243;
			case 830681191:
				return 3445;
			case 830847729:
				return 755;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_CHOPS_001_08"):
				return 5269;
			case joaat("MP_STEALWAGON_SDDOCKS_PVP_01"):
				return 3104;
			case joaat("META_ANIMAL_OUTFIT_BIGHORNSHEEPROCKY_000"):
				return 43;
			case joaat("MP_REPO_GAPTOOTH_RCP_01"):
				return 2981;
			case joaat("MP_ASN_CIVILWARFORT_TAR_06"):
				return 2005;
			case 841947802:
				return 5369;
			case 842012805:
				return 5480;
			case joaat("MP_CAMPDEF_GAPTOOTHBREACH_VIP_01"):
				return 2076;
			case 843967863:
				return 3190;
			case 846863436:
				return 831;
			case joaat("MP_CHU_KID_LEMOYNE_VIP_04"):
				return 2133;
			case joaat("MP_ASNTRK_ISABELLA_TAR_03"):
				return 2058;
			case 848959023:
				return 5163;
			case 849251615:
				return 5538;
			case joaat("MP_RECOVER_BLUEWATER_02"):
				return 1968;
			case 853380307:
				return 3182;
			case 854722235:
				return 4350;
			case joaat("MP_CHU_ROB_RATHSKELLER_RCP_01"):
				return 2263;
			case 855242065:
				return 589;
			case joaat("MP_ONTHEHUNT_SDSWAMP_01"):
				return 1946;
			case joaat("MP_POST_RELAY_CHEZPORTER_01"):
				return 2842;
			case 859543443:
				return 746;
			case 860572612:
				return 3995;
			case 860652080:
				return 312;
			case 860729266:
				return 6046;
			case 861275228:
				return 1000;
			case 863059677:
				return 3783;
			case 863355252:
				return 5928;
			case 864297986:
				return 2875;
			case 864596619:
				return 5470;
			case joaat("MP_INTERCEPT_EMRANCH_PVP_01"):
				return 2606;
			case 865266055:
				return 5797;
			case 865644342:
				return 3221;
			case 867837396:
				return 3015;
			case 868125405:
				return 836;
			case joaat("MP_STEALWAGON_SDPOLICE_RCP_01"):
				return 3107;
			case 869636257:
				return 827;
			case 869917927:
				return 569;
			case 870174923:
				return 6012;
			case 872175303:
				return 623;
			case 873212682:
				return 5475;
			case 875252941:
				return 4657;
			case 875484355:
				return 2940;
			case 875945698:
				return 1053;
			case 876361669:
				return 5702;
			case 876633108:
				return 5739;
			case 877322615:
				return 2430;
			case 877386931:
				return 1292;
			case 878283192:
				return 5219;
			case 878961202:
				return 1808;
			case joaat("MP_POST_MULTIPACKAGE_OLDBACCHUS_01"):
				return 2799;
			case 879416061:
				return 4338;
			case 879715242:
				return 6047;
			case 880257286:
				return 4917;
			case 880488647:
				return 472;
			case 880699781:
				return 5310;
			case 882513633:
				return 2314;
			case 883482182:
				return 394;
			case 884296832:
				return 4612;
			case 884347675:
				return 3757;
			case 884396146:
				return 2502;
			case 885345434:
				return 3810;
			case 885716935:
				return 3849;
			case joaat("HAT_FR1_025"):
				return 4542;
			case 888009789:
				return 5489;
			case 888116744:
				return 4273;
			case 888233542:
				return 1853;
			case 888403806:
				return 4948;
			case joaat("META_OUTFIT_ANIMAL_OWLNORTH"):
				return 212;
			case 889771567:
				return 2936;
			case 889824582:
				return 3393;
			case 890352471:
				return 912;
			case 890482708:
				return 1533;
			case 890505982:
				return 4990;
			case 890994479:
				return 2482;
			case 892472698:
				return 3527;
			case 892552081:
				return 1755;
			case 893682075:
				return 5205;
			case 894068292:
				return 6074;
			case 894229482:
				return 1487;
			case 894599323:
				return 3416;
			case 895908189:
				return 5075;
			case 896399540:
				return 681;
			case 896454262:
				return 3697;
			case 897086265:
				return 5838;
			case 897784960:
				return 1091;
			case 898062629:
				return 3582;
			case joaat("MP_CHU_ROB_CORONADO_VIP_01"):
				return 2194;
			case joaat("HAT_MR1_042"):
				return 4716;
			case 900260985:
				return 2966;
			case 900415288:
				return 6087;
			case 900473266:
				return 5090;
			case 901285354:
				return 1523;
			case 902431763:
				return 4998;
			case 903098120:
				return 5870;
			case 903484766:
				return 3596;
			case 903791949:
				return 4099;
			case 904300333:
				return 2599;
			case 905024571:
				return 4343;
			case 905223065:
				return 1506;
			case 905663941:
				return 2553;
			case 906159228:
				return 1316;
			case 907199942:
				return 1396;
			case 909660602:
				return 4245;
			case 909995553:
				return 1195;
			case joaat("META_OUTFIT_SAINTDENIS_VAR_02"):
				return 410;
			case 912389556:
				return 3916;
			case 914211621:
				return 2894;
			case joaat("MP_CHU_ROB_PAINTEDSKY_VIP_02"):
				return 2227;
			case 914815286:
				return 1750;
			case joaat("MP_CHU_ROB_RHODES_VIP_03"):
				return 2269;
			case 918298334:
				return 1093;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_CHIN_000_05"):
				return 5239;
			case joaat("MP_WGNBRKOUT_BLACKWATER_PVP_01"):
				return 3127;
			case 919290405:
				return 3903;
			case 921937100:
				return 572;
			case joaat("META_OUTFIT_ANIMAL_LEGENDARY_WOLF"):
				return 288;
			case 922665377:
				return 3229;
			case 923454775:
				return 2445;
			case 923579141:
				return 5629;
			case 924926847:
				return 4399;
			case 925141267:
				return 6084;
			case 925551623:
				return 1812;
			case 926117619:
				return 5309;
			case joaat("MP_ASN_TWOCROWS_TAR_03"):
				return 2472;
			case 926457869:
				return 5060;
			case 926624745:
				return 1094;
			case 927185840:
				return 5988;
			case 927307615:
				return 2911;
			case 927514601:
				return 1437;
			case 928671868:
				return 3219;
			case joaat("META_ANIMAL_OUTFIT_ALLIGATOR3_000"):
				return 6;
			case joaat("FOREMAN"):
				return 5429;
			case joaat("MP_CONVOY_RIDGEWOOD_RCP_01"):
				return 2289;
			case 932408427:
				return 5202;
			case 932795216:
				return 1011;
			case 933052282:
				return 1445;
			case joaat("MP_CHU_ROB_CUMBERLAND_VIP_02"):
				return 2199;
			case 933704311:
				return 1585;
			case joaat("MP_CHU_ROB_FORTMERCER_PVP_01"):
				return 2248;
			case 934765995:
				return 2723;
			case 934963801:
				return 1301;
			case 935065141:
				return 765;
			case 935704633:
				return 4106;
			case 936013193:
				return 4127;
			case joaat("MP_ASN_CIVILWARFORT_TAR_01"):
				return 2000;
			case joaat("MP_CHU_ROB_RATHSKELLER_VIP_03"):
				return 2232;
			case 937486331:
				return 3859;
			case 938156458:
				return 6067;
			case joaat("MP_CHU_ROB_BENEDICTPOINT_VIP_04"):
				return 2183;
			case joaat("META_OUTFIT_ANIMAL_LEGENDARY_CHAINPICKEREL"):
				return 137;
			case 941285114:
				return 5483;
			case 941422661:
				return 4139;
			case 941435726:
				return 1671;
			case joaat("MP_POST_MULTIPACKAGE_FORTMERCER_01"):
				return 2790;
			case joaat("META_OUTFIT_ANIMAL_LEGENDARY_BLUEGILL"):
				return 134;
			case 943566851:
				return 4478;
			case joaat("HAT_FR1_704"):
				return 4556;
			case 943708358:
				return 551;
			case joaat("MP_ASN_BLACKWATER_TAR_04"):
				return 1986;
			case 947251502:
				return 5571;
			case 949440955:
				return 525;
			case 950102225:
				return 1300;
			case 951403572:
				return 4496;
			case 951574978:
				return 3558;
			case 952561255:
				return 878;
			case 953930039:
				return 5515;
			case 954292079:
				return 4335;
			case 954510184:
				return 4280;
			case joaat("MP_ASN_BENEDICTPOINT_EXTRA_01"):
				return 1976;
			case 954713453:
				return 4116;
			case 954764151:
				return 2350;
			case 954839853:
				return 3622;
			case 956429335:
				return 1737;
			case 958813666:
				return 3046;
			case 959705975:
				return 5118;
			case 959812519:
				return 508;
			case 959889355:
				return 4452;
			case 959966800:
				return 4820;
			case 960056836:
				return 1642;
			case 960661468:
				return 783;
			case 960931637:
				return 5184;
			case 961238319:
				return 5170;
			case 961762775:
				return 4119;
			case 961858787:
				return 2899;
			case 964810824:
				return 937;
			case 964829131:
				return 2135;
			case 965966943:
				return 4034;
			case joaat("META_ANIMAL_OUTFIT_OXDEVON"):
				return 213;
			case joaat("HAT_MR1_089"):
				return 4764;
			case 967017128:
				return 1595;
			case 967399703:
				return 1066;
			case 968029114:
				return 3643;
			case 968333004:
				return 1809;
			case 968598601:
				return 5803;
			case 968631910:
				return 5582;
			case 968737298:
				return 5855;
			case 969142667:
				return 5713;
			case 969203158:
				return 5064;
			case 969270801:
				return 5765;
			case 969412718:
				return 3241;
			case joaat("MP_POST_MULTIRELAY_FIRWOODRISE_01"):
				return 2824;
			case joaat("MP_ASN_PLEASANCE_TAR_02"):
				return 2555;
			case 973701399:
				return 4074;
			case 974512450:
				return 5601;
			case 975190258:
				return 4211;
			case 975618243:
				return 3733;
			case 976023957:
				return 5144;
			case joaat("MP_ASN_SDWEDDING_TAR_04"):
				return 2024;
			case 977175129:
				return 679;
			case 978566088:
				return 5014;
			case joaat("MP_ASN_SDGRAVEYARD_TAR_04"):
				return 2522;
			case 979024947:
				return 426;
			case 979336609:
				return 5716;
			case 980055150:
				return 366;
			case 980372619:
				return 5906;
			case 980377200:
				return 1320;
			case 980930293:
				return 2905;
			case joaat("MP_HIDEOUT_CUEVASECA_01"):
				return 2489;
			case joaat("MP_POST_RELAY_ANNESBURG_02"):
				return 2838;
			case 983372154:
				return 5683;
			case 983793648:
				return 5902;
			case 984822374:
				return 2107;
			case 985483879:
				return 4798;
			case 985642159:
				return 4303;
			case 985950048:
				return 3952;
			case 986098219:
				return 491;
			case 986148387:
				return 1963;
			case joaat("MP_CHU_KID_SCARLETTMEADOWS_VIP_02"):
				return 2164;
			case 987086512:
				return 5567;
			case 987299617:
				return 3711;
			case 989578874:
				return 794;
			case 989984119:
				return 321;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_CHOPS_000_07"):
				return 5259;
			case 994058598:
				return 3386;
			case 994997321:
				return 1700;
			case joaat("HAT_FR1_008"):
				return 4534;
			case 996661589:
				return 1625;
			case 997167563:
				return 1205;
			case 998518306:
				return 4832;
			case 998558599:
				return 5965;
			case 999493468:
				return 514;
			case 1000429901:
				return 5699;
			case joaat("MP_INTERCEPT_GREENBANK_RCP_02"):
				return 2609;
			case 1001943471:
				return 2435;
			case joaat("MP_INTERCEPT_HEARTLANDS_PVP_01"):
				return 2610;
			case 1003566166:
				return 4414;
			case joaat("MP_STEALHORSE_VENTERS_RCP_01"):
				return 3091;
			case 1003945943:
				return 5541;
			case 1004225511:
				return 5993;
			case 1004483175:
				return 3355;
			case joaat("TRAINSTATION"):
				return 4851;
			case 1007503923:
				return 5545;
			case 1009538775:
				return 4814;
			case 1009966619:
				return 1835;
			case joaat("META_ANIMAL_OUTFIT_PRONGHORNBAJAM"):
				return 231;
			case 1011286169:
				return 4132;
			case 1011601455:
				return 198;
			case joaat("MP_ASN_BENEDICTPOINT_TAR_05"):
				return 1981;
			case joaat("META_OUTFIT_WALLACESTATION_VAR_02"):
				return 4357;
			case joaat("MP_CHU_KID_HEARTLANDS_VIP_03"):
				return 2124;
			case 1012864374:
				return 867;
			case 1013967228:
				return 1226;
			case 1013970952:
				return 5082;
			case 1014453318:
				return 3684;
			case 1014732438:
				return 3857;
			case 1016389228:
				return 2642;
			case 1016389820:
				return 851;
			case 1018784105:
				return 4922;
			case 1018816852:
				return 6075;
			case 1019088779:
				return 2748;
			case 1019382615:
				return 4187;
			case 1019558753:
				return 4446;
			case 1021886395:
				return 3680;
			case 1021989660:
				return 4853;
			case 1022043639:
				return 705;
			case joaat("MP_WGNBRKOUT_RIGGS_PVP_02"):
				return 3141;
			case 1022635276:
				return 646;
			case 1022823012:
				return 1469;
			case 1022832458:
				return 1377;
			case 1022955933:
				return 4020;
			case joaat("MP_INTRO_EXCONFED_04"):
				return 2572;
			case 1023712399:
				return 3731;
			case joaat("HAT_FR1_011"):
				return 4537;
			case joaat("MP_HIDEOUT_THELOFT_01"):
				return 2539;
			case 1024895103:
				return 1504;
			case 1025260010:
				return 5407;
			case 1025435807:
				return 945;
			case joaat("HAT_MR1_064_ALT02"):
				return 4744;
			case joaat("MP_ASN_GAPTOOTHBREACH_TAR_04"):
				return 2009;
			case 1028459043:
				return 1455;
			case 1029007840:
				return 1617;
			case 1029332531:
				return 5111;
			case 1029570196:
				return 5300;
			case 1030417277:
				return 5741;
			case 1030681218:
				return 3253;
			case 1032745865:
				return 392;
			case 1033138314:
				return 4720;
			case joaat("MP_INTRO_DELLOBO_01"):
				return 2496;
			case 1033606135:
				return 596;
			case 1033694328:
				return 5231;
			case 1036207568:
				return 981;
			case 1037117775:
				return 2313;
			case 1037869381:
				return 1684;
			case 1038132984:
				return 3486;
			case 1039614518:
				return 2333;
			case 1044554969:
				return 2421;
			case 1044689913:
				return 3411;
			case 1044811047:
				return 750;
			case 1047096773:
				return 1552;
			case 1047720796:
				return 1054;
			case joaat("MP_ASN_HAMLINPASSING_TAR_06"):
				return 2468;
			case 1047891835:
				return 4419;
			case 1049349729:
				return 2928;
			case 1049784660:
				return 4393;
			case 1049788380:
				return 4094;
			case 1050365689:
				return 489;
			case 1050701762:
				return 5767;
			case 1051251111:
				return 406;
			case 1051259757:
				return 856;
			case 1052055818:
				return 762;
			case 1052102410:
				return 1175;
			case joaat("MP_RESUPPLY_VETHOMESTEAD_RCP_01"):
				return 3029;
			case 1052664747:
				return 1688;
			case 1053808878:
				return 2708;
			case 1054016042:
				return 4070;
			case 1054611375:
				return 5951;
			case 1055269118:
				return 3611;
			case 1055317050:
				return 3965;
			case 1055797346:
				return 4048;
			case 1056682093:
				return 352;
			case joaat("MP_STEALHORSE_RHODES_PVP_01"):
				return 3087;
			case 1057175838:
				return 1669;
			case 1057337897:
				return 5649;
			case joaat("MP_ASNTRK_ELYSIANPOOL_TAR_03"):
				return 2040;
			case joaat("META_OUTFIT_ANIMAL_PANTHERFLORIDA"):
				return 216;
			case 1059434053:
				return 799;
			case 1062798860:
				return 2385;
			case 1062942704:
				return 950;
			case 1064646155:
				return 6060;
			case 1065037109:
				return 5161;
			case 1065193341:
				return 3842;
			case 1065570915:
				return 3460;
			case 1065821384:
				return 4257;
			case 1066175139:
				return 1259;
			case 1066397413:
				return 3776;
			case 1067692098:
				return 5167;
			case 1070256532:
				return 834;
			case 1072634020:
				return 1532;
			case 1072668462:
				return 566;
			case 1074159868:
				return 4154;
			case 1074183062:
				return 885;
			case 1074318568:
				return 5384;
			case joaat("MP_STEALHORSE_LONEMULE_PVP_01"):
				return 3081;
			case 1074720087:
				return 3801;
			case 1074832454:
				return 5935;
			case 1076559530:
				return 5322;
			case 1078773108:
				return 5974;
			case joaat("MP_ASN_CIVILWARFORT_TAR_05"):
				return 2004;
			case 1081049733:
				return 1194;
			case 1081089639:
				return 4911;
			case 1081947715:
				return 4653;
			case joaat("HAT_MR1_123"):
				return 4786;
			case 1083264030:
				return 5627;
			case 1083648863:
				return 4003;
			case 1083771782:
				return 4031;
			case 1083814214:
				return 2715;
			case joaat("MP_ASNTRK_TALLTREES_TAR_02"):
				return 2063;
			case joaat("META_OUTFIT_FIELD_DRESSING_002"):
				return 4;
			case 1085627780:
				return 1026;
			case joaat("MP_WGNTHIEF_WALLACE_RCP_01"):
				return 3171;
			case 1086496835:
				return 972;
			case 1086988278:
				return 4295;
			case 1087308308:
				return 795;
			case 1088171761:
				return 5168;
			case 1088279801:
				return 400;
			case 1089178838:
				return 4227;
			case 1090099073:
				return 5687;
			case 1091562303:
				return 4896;
			case 1091733006:
				return 4512;
			case 1093114921:
				return 5851;
			case 1094040673:
				return 3469;
			case 1094729615:
				return 2433;
			case 1094889791:
				return 4023;
			case 1095382564:
				return 76;
			case 1096060463:
				return 4870;
			case 1096469968:
				return 1732;
			case 1096694768:
				return 3327;
			case 1096826710:
				return 5613;
			case 1097805994:
				return 3769;
			case 1098316139:
				return 3328;
			case joaat("META_OUTFIT_ANIMAL_LEGENDARY_PERCH"):
				return 148;
			case 1101489618:
				return 540;
			case joaat("HAT_MR1_006"):
				return 4679;
			case 1102417815:
				return 1747;
			case 1102645114:
				return 4463;
			case joaat("MP_ASN_FORTMERCER_TAR_01"):
				return 2457;
			case 1104129217:
				return 1279;
			case 1104347535:
				return 1161;
			case 1104512055:
				return 5308;
			case 1105288383:
				return 5923;
			case 1105368933:
				return 651;
			case joaat("HAT_MR1_130"):
				return 4790;
			case 1107269323:
				return 2640;
			case 1107332321:
				return 4233;
			case joaat("MP_ASN_BRAITHWAITEMANOR_TAR_06"):
				return 1996;
			case 1110418742:
				return 4349;
			case 1112121225:
				return 6023;
			case 1112811077:
				return 323;
			case 1113025998:
				return 3875;
			case 1113054460:
				return 5344;
			case 1113117884:
				return 493;
			case 1113184799:
				return 3265;
			case 1113964342:
				return 581;
			case 1114700870:
				return 4927;
			case 1114705787:
				return 5497;
			case 1114927438:
				return 2939;
			case 1114967451:
				return 5888;
			case 1116367553:
				return 4336;
			case 1119021035:
				return 1624;
			case 1120053546:
				return 5511;
			case 1120368758:
				return 1498;
			case joaat("HAT_MR1_078"):
				return 4754;
			case 1121495239:
				return 3525;
			case 1121644509:
				return 4339;
			case 1123183665:
				return 2901;
			case 1123711721:
				return 395;
			case 1124268441:
				return 5738;
			case 1124280028:
				return 4993;
			case 1125487203:
				return 3637;
			case 1125943536:
				return 4092;
			case joaat("MP_WGNBRKOUT_ARMADILLO_PVP_01"):
				return 3125;
			case joaat("META_ANIMAL_OUTFIT_PRONGHORNSONOM"):
				return 240;
			case 1127268175:
				return 2440;
			case 1127531630:
				return 3696;
			case 1128226404:
				return 756;
			case joaat("MP_STEALBOAT_ROANOKERIDGE_RCP_01"):
				return 3061;
			case joaat("MP_ONTHEHUNT_COLTER_01"):
				return 1934;
			case 1131250387:
				return 4680;
			case 1131722851:
				return 1092;
			case 1134324654:
				return 5561;
			case 1135966331:
				return 1909;
			case joaat("MP_POST_RELAY_HUSBANDSHACK_01"):
				return 2849;
			case 1137176926:
				return 2552;
			case joaat("CS_FIRE_PERFORMER_FS1_HAT_000"):
				return 4511;
			case 1140167816:
				return 2361;
			case joaat("NUNHABIT_FR1_000"):
				return 4560;
			case 1142296442:
				return 4566;
			case joaat("HAT_FR1_045"):
				return 4547;
			case 1142989623:
				return 6024;
			case 1146234389:
				return 1165;
			case joaat("MP_WGNTHIEF_SCARLETTMDWS_PVP_01"):
				return 3165;
			case 1147797824:
				return 387;
			case 1149397788:
				return 3908;
			case 1151693532:
				return 1319;
			case 1152327396:
				return 5691;
			case 1152867454:
				return 3666;
			case 1152924893:
				return 6033;
			case 1153534118:
				return 1251;
			case 1153589631:
				return 3782;
			case 1153596794:
				return 838;
			case 1153695211:
				return 1906;
			case joaat("MP_WGNTHIEF_GRIZZLIES_PVP_01"):
				return 3156;
			case 1155641591:
				return 1786;
			case 1155798786:
				return 6042;
			case 1156572673:
				return 573;
			case 1156643392:
				return 3567;
			case 1156840100:
				return 612;
			case 1157173776:
				return 3313;
			case joaat("MP_CHU_ROB_BENEDICTPOINT_RCP_01"):
				return 2239;
			case 1158134160:
				return 5816;
			case 1158623411:
				return 479;
			case 1158945036:
				return 5940;
			case 1159684058:
				return 5657;
			case 1159931498:
				return 5681;
			case 1160124026:
				return 4675;
			case 1160541778:
				return 3420;
			case 1161359263:
				return 3994;
			case joaat("MP_HIDEOUT_COLTER_01"):
				return 2532;
			case 1163868428:
				return 5599;
			case joaat("META_OUTFIT_ANIMAL_RACCOON_001"):
				return 253;
			case joaat("META_OUTFIT_ANIMAL_CHICKENJAVA"):
				return 69;
			case joaat("MP_CAMPDEF_GREATPLAINS_VIP_01"):
				return 2079;
			case joaat("MP_CHU_ROB_MONTANARIVER_VIP_02"):
				return 2223;
			case 1166062307:
				return 5539;
			case 1166337187:
				return 5439;
			case 1169798853:
				return 1721;
			case 1170159487:
				return 2327;
			case joaat("META_ANIMAL_OUTFIT_DOGLABBLACK"):
				return 110;
			case 1172406525:
				return 5166;
			case 1174655877:
				return 425;
			case 1174875411:
				return 5220;
			case joaat("MP_RECOVER_CUMBERLAND_02"):
				return 1862;
			case 1175090374:
				return 5981;
			case 1175253274:
				return 3725;
			case 1175771288:
				return 922;
			case 1176372548:
				return 5134;
			case 1177455529:
				return 5330;
			case 1178434377:
				return 622;
			case 1180304492:
				return 1711;
			case 1180356018:
				return 5147;
			case 1181584895:
				return 5047;
			case 1184263083:
				return 4813;
			case 1185454434:
				return 5897;
			case 1185801093:
				return 1637;
			case joaat("MP_STEALWAGON_COOTSCHAPEL_RCP_01"):
				return 3096;
			case 1186332498:
				return 3235;
			case 1186947635:
				return 3373;
			case 1187754581:
				return 4058;
			case 1189134248:
				return 2756;
			case joaat("MP_ASN_TWOCROWS_TAR_04"):
				return 2473;
			case 1190493899:
				return 2953;
			case 1190785417:
				return 3047;
			case 1191179189:
				return 1834;
			case 1193086793:
				return 5116;
			case 1193240696:
				return 2898;
			case 1193711561:
				return 1220;
			case 1194427184:
				return 897;
			case joaat("META_OUTFIT_VANHORN_VAR_01"):
				return 445;
			case 1195126440:
				return 4196;
			case joaat("MP_POST_MULTIPACKAGE_CALLIGAHALL_01"):
				return 2786;
			case 1196306368:
				return 1329;
			case 1199891573:
				return 3268;
			case 1202038884:
				return 4379;
			case 1202545599:
				return 2727;
			case 1202814245:
				return 4036;
			case joaat("MP_GENERIC_HEARTLANDS_MC_FR_02"):
				return 1840;
			case joaat("MP_CHU_KID_RHODES_RCP_01"):
				return 2148;
			case 1205742093:
				return 1678;
			case joaat("MP_ASNTRK_TALLTREES_TAR_06"):
				return 2067;
			case joaat("MP_CONVOY_MANZANITA_RCP_01"):
				return 2276;
			case 1207013618:
				return 5119;
			case 1207273495:
				return 2736;
			case 1207538692:
				return 1172;
			case 1208251853:
				return 1067;
			case 1208434912:
				return 5800;
			case 1209055349:
				return 5673;
			case 1209156899:
				return 2391;
			case 1210439532:
				return 5013;
			case 1211009089:
				return 3257;
			case 1211435714:
				return 4933;
			case 1211562757:
				return 5399;
			case 1212026495:
				return 5712;
			case joaat("MP_STEALWAGON_VALENTINE_RCP_01"):
				return 3113;
			case 1213250938:
				return 4403;
			case 1213582005:
				return 4572;
			case 1214080699:
				return 3225;
			case 1215347309:
				return 1278;
			case 1215570634:
				return 2632;
			case 1215696714:
				return 5234;
			case 1216182339:
				return 4968;
			case 1216644103:
				return 3521;
			case 1216691727:
				return 3176;
			case 1218609347:
				return 3554;
			case 1218969052:
				return 1616;
			case 1218991357:
				return 4658;
			case 1219519983:
				return 3904;
			case 1219812133:
				return 3478;
			case joaat("MP_RESCUE_HEARTLANDS_VIP_01"):
				return 3001;
			case 1220701066:
				return 2904;
			case 1220706383:
				return 350;
			case 1221121265:
				return 5904;
			case 1223281883:
				return 5026;
			case joaat("CS_JACKMARSTON_TEEN_MS1_HAT_000"):
				return 4611;
			case 1224218043:
				return 173;
			case 1224597047:
				return 1938;
			case 1224731784:
				return 5929;
			case 1225124280:
				return 5909;
			case 1225232544:
				return 1433;
			case 1225453698:
				return 3970;
			case 1226094213:
				return 3409;
			case 1226772186:
				return 5156;
			case 1226822467:
				return 1263;
			case joaat("MP_ASNTRK_ELYSIANPOOL_TAR_02"):
				return 2039;
			case 1229121474:
				return 4398;
			case 1229539900:
				return 5106;
			case 1230022703:
				return 5686;
			case 1230989227:
				return 4797;
			case 1230995956:
				return 1618;
			case 1231464707:
				return 1306;
			case 1232051623:
				return 1529;
			case 1232126379:
				return 6078;
			case 1232157485:
				return 309;
			case 1232301480:
				return 2349;
			case 1232783247:
				return 492;
			case 1233260892:
				return 5325;
			case joaat("META_OUTFIT_ANIMAL_ROOSTERJAVA"):
				return 257;
			case joaat("MP_CHU_ROB_RATHSKELLER_VIP_02"):
				return 2231;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_STACHE_000_02"):
				return 5272;
			case 1235802535:
				return 4583;
			case 1236887312:
				return 4115;
			case 1237014266:
				return 3633;
			case 1237636302:
				return 2639;
			case 1239217048:
				return 3864;
			case 1239906577:
				return 2644;
			case 1240051801:
				return 5760;
			case 1241165900:
				return 1100;
			case 1241189697:
				return 3605;
			case 1241809712:
				return 5547;
			case 1243023497:
				return 3399;
			case 1244129578:
				return 4914;
			case 1244494244:
				return 4242;
			case 1245083301:
				return 859;
			case 1245327867:
				return 4910;
			case 1245509546:
				return 4120;
			case 1246293056:
				return 1363;
			case joaat("HAT_FR1_705"):
				return 4557;
			case 1249710926:
				return 5323;
			case 1249861036:
				return 4107;
			case 1250142998:
				return 2749;
			case 1250207451:
				return 4188;
			case joaat("MP_POST_MULTIRELAY_MACOMBSEND_01"):
				return 2831;
			case joaat("MP_CHU_KID_TUMBLEWEED_PVP_01"):
				return 2151;
			case 1253912422:
				return 2365;
			case 1255364348:
				return 3366;
			case 1255563200:
				return 1188;
			case 1255880764:
				return 3735;
			case 1256386650:
				return 5104;
			case 1257524659:
				return 585;
			case 1257665311:
				return 5105;
			case joaat("META_OUTFIT_ANIMAL_POISON_RACCOON"):
				return 251;
			case joaat("HAT_FR1_613"):
				return 4550;
			case 1258772453:
				return 4447;
			case 1259241107:
				return 1079;
			case 1259417544:
				return 2351;
			case 1259903711:
				return 1640;
			case 1259970514:
				return 4218;
			case 1260103102:
				return 4837;
			case 1260426278:
				return 1162;
			case joaat("HAT_MR1_052"):
				return 4730;
			case 1260933476:
				return 1673;
			case joaat("HAT_FR1_613_ALT02"):
				return 4551;
			case 1262262604:
				return 5066;
			case 1262834065:
				return 4758;
			case 1263868216:
				return 413;
			case 1264026999:
				return 5485;
			case 1265006156:
				return 5514;
			case 1265247797:
				return 1594;
			case 1265527206:
				return 4495;
			case 1267401882:
				return 4839;
			case 1267863725:
				return 1905;
			case 1267911629:
				return 5181;
			case 1268173643:
				return 5646;
			case joaat("META_HORSE_SADDLE_ONLY"):
				return 118;
			case 1269506055:
				return 5889;
			case 1269851066:
				return 2631;
			case 1270504890:
				return 1058;
			case 1270712552:
				return 4438;
			case 1272347095:
				return 4067;
			case joaat("MP_ASN_SDPOLICESTATION_TAR_02"):
				return 2018;
			case 1272961827:
				return 5842;
			case 1273884009:
				return 4606;
			case 1274234949:
				return 1323;
			case joaat("MP_POST_RELAY_BLACKWATER_02"):
				return 2836;
			case 1275244069:
				return 1138;
			case 1276490274:
				return 5950;
			case 1277571202:
				return 513;
			case 1277897446:
				return 4420;
			case 1278600348:
				return 5994;
			case 1280845236:
				return 4073;
			case joaat("MP_ASN_HAMLINPASSING_TAR_05"):
				return 2467;
			case 1281487612:
				return 1290;
			case 1282691458:
				return 3364;
			case 1283358966:
				return 1539;
			case 1285171741:
				return 2401;
			case 1285276059:
				return 1372;
			case 1286775345:
				return 1452;
			case 1287915465:
				return 4647;
			case 1288562961:
				return 1727;
			case 1288792812:
				return 2927;
			case joaat("MP_POST_MULTIPACKAGE_BRITTLEBUSH_01"):
				return 2784;
			case joaat("MP_CHU_ROB_RHODES_VIP_02"):
				return 2268;
			case 1291777022:
				return 3828;
			case joaat("LABORER"):
				return 5518;
			case 1293290589:
				return 4140;
			case 1293313673:
				return 1633;
			case joaat("HAT_MR1_097"):
				return 4769;
			case joaat("META_OUTFIT_ANIMAL_LEGENDARY_ROCKBASS"):
				return 152;
			case 1294637057:
				return 1703;
			case joaat("MP_HIDEOUT_FARMHOUSE_01"):
				return 2546;
			case 1294781663:
				return 4046;
			case 1295349795:
				return 1241;
			case 1295532874:
				return 3321;
			case 1296341087:
				return 5805;
			case 1296547824:
				return 1345;
			case 1296971144:
				return 1206;
			case joaat("MP_STEALHORSE_BRAITHWRAITE_RCP_01"):
				return 3066;
			case 1298436321:
				return 4376;
			case joaat("MP_STEALBOAT_CUMBERLAND_RCP_01"):
				return 3056;
			case 1299442046:
				return 5856;
			case 1299912038:
				return 3814;
			case 1301528766:
				return 5136;
			case 1304371954:
				return 3493;
			case 1305512934:
				return 5405;
			case joaat("MP_CHU_ROB_BENEDICTPOINT_VIP_03"):
				return 2182;
			case 1306309085:
				return 1420;
			case 1306496102:
				return 5740;
			case joaat("MP_ASNTRK_BRITTLEBUSH_TAR_02"):
				return 2477;
			case 1309207681:
				return 764;
			case 1309294731:
				return 4717;
			case 1310068775:
				return 608;
			case 1311190683:
				return 5173;
			case 1311665065:
				return 5703;
			case 1311911998:
				return 2404;
			case 1312575432:
				return 742;
			case 1312911644:
				return 185;
			case 1313855253:
				return 3473;
			case 1313927639:
				return 4232;
			case joaat("MP_INTRO_EXCONFED_03"):
				return 2564;
			case 1314808215:
				return 5975;
			case joaat("BINDINGS_HANDS_BULKY"):
				return 5938;
			case 1314941335:
				return 5383;
			case joaat("MP_HIDEOUT_FORTMERCER_01"):
				return 2490;
			case 1316614046:
				return 3885;
			case 1316670457:
				return 2698;
			case 1316723148:
				return 1894;
			case 1317506479:
				return 1227;
			case 1317573979:
				return 4299;
			case 1318982204:
				return 3766;
			case joaat("MP_ASN_SHADYBELLE_TAR_04"):
				return 2560;
			case 1319832841:
				return 529;
			case 1320127128:
				return 4375;
			case 1321056085:
				return 5852;
			case 1321671943:
				return 1758;
			case joaat("META_OUTFIT_EMERALDRANCH_VAR_03"):
				return 462;
			case 1322011626:
				return 1503;
			case 1322049974:
				return 5088;
			case 1322051030:
				return 3467;
			case 1322412223:
				return 1731;
			case 1324886337:
				return 2320;
			case 1325478792:
				return 5690;
			case 1325772997:
				return 4632;
			case 1326633585:
				return 4492;
			case joaat("MP_RESUPPLY_EMRANCH_RCP_01"):
				return 3031;
			case 1326912260:
				return 5834;
			case 1327129616:
				return 4982;
			case 1327838986:
				return 597;
			case joaat("META_OUTFIT_ANIMAL_LEGENDARY_CHANNELCATFISH"):
				return 141;
			case 1329153734:
				return 2414;
			case 1329792611:
				return 4985;
			case joaat("MP_CHU_ROB_CUMBERLAND_VIP_03"):
				return 2200;
			case 1331416243:
				return 2691;
			case joaat("MP_CHU_ROB_AMBARINO_RCP_01"):
				return 2235;
			case 1332724617:
				return 4129;
			case 1333254179:
				return 3329;
			case joaat("MP_CHU_KID_SAINTDENIS_PVP_01"):
				return 2149;
			case joaat("MP_POST_MULTIPACKAGE_PAINTEDSKY_01"):
				return 2776;
			case 1333875396:
				return 4591;
			case joaat("MP_INTERCEPT_DOWNESRANCH_RCP_01"):
				return 2605;
			case 1336014912:
				return 5922;
			case joaat("MP_INTRO_DELLOBO_04"):
				return 2499;
			case joaat("MP_ASN_GAPTOOTHBREACH_TAR_03"):
				return 2008;
			case 1337829908:
				return 5496;
			case 1338060214:
				return 1120;
			case 1338340040:
				return 403;
			case joaat("MAGICLANTERN_TICKETS_VAL_01"):
				return 4326;
			case joaat("META_OUTFIT_ANNESBURG_VAR_02"):
				return 4321;
			case 1340234857:
				return 1877;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_CHOPS_001_09"):
				return 5270;
			case 1344359059:
				return 3793;
			case 1345836794:
				return 3302;
			case 1349591263:
				return 3975;
			case 1349856311:
				return 2318;
			case joaat("MP_ASN_SDWEDDING_TAR_01"):
				return 2027;
			case 1350824906:
				return 3880;
			case 1351842933:
				return 2709;
			case 1352258589:
				return 5585;
			case 1352967593:
				return 1393;
			case 1353076085:
				return 4271;
			case 1353302569:
				return 4992;
			case 1354021380:
				return 3877;
			case 1354834467:
				return 1872;
			case 1355023622:
				return 5113;
			case 1355036642:
				return 4619;
			case 1355597186:
				return 4705;
			case 1358173563:
				return 5737;
			case 1358322394:
				return 2441;
			case 1359253102:
				return 2942;
			case joaat("MP_RESUPPLY_MACLEANS_RCP_01"):
				return 3032;
			case 1363893568:
				return 970;
			case 1364401863:
				return 4248;
			case 1365060293:
				return 4133;
			case joaat("MP_CHU_ROB_CALIGAHALL_PVP_01"):
				return 2242;
			case 1365901568:
				return 805;
			case 1366486426:
				return 787;
			case 1368239471:
				return 4028;
			case joaat("MP_POST_MULTIPACKAGE_BARDSCROSSING_01"):
				return 2780;
			case joaat("MP_POST_RELAY_DOWNESRANCH_01"):
				return 2844;
			case 1369849696:
				return 3933;
			case 1369993929:
				return 3348;
			case joaat("META_OUTFIT_DRESS_HEELS"):
				return 1049;
			case 1371076591:
				return 5964;
			case 1371088384:
				return 412;
			case 1371178414:
				return 4236;
			case 1372087246:
				return 1046;
			case 1372167099:
				return 2738;
			case 1372914026:
				return 1243;
			case 1375740228:
				return 5200;
			case 1376090830:
				return 306;
			case 1377009721:
				return 550;
			case 1377410087:
				return 3686;
			case 1378056918:
				return 3540;
			case 1378133831:
				return 1325;
			case 1378158597:
				return 4585;
			case 1379548191:
				return 4017;
			case 1382688884:
				return 1668;
			case 1382749978:
				return 2446;
			case 1382794278:
				return 3289;
			case 1383573614:
				return 5033;
			case joaat("META_OUTFIT_ANIMAL_RABBIT_000"):
				return 248;
			case 1388122081:
				return 1773;
			case joaat("META_OUTFIT_ANIMAL_ALBINO_BIGHORNRAM"):
				return 45;
			case 1389873418:
				return 2752;
			case 1390960822:
				return 5419;
			case 1391951221:
				return 910;
			case joaat("HAT_FR1_649"):
				return 4553;
			case 1393342352:
				return 3845;
			case 1394167636:
				return 1280;
			case 1394759986:
				return 5583;
			case joaat("META_OUTFIT_MP_COLD_WEATHER"):
				return 1008;
			case 1395403865:
				return 1237;
			case joaat("MP_ASN_STILLWATER_TAR_01"):
				return 2032;
			case 1396927639:
				return 6049;
			case 1397499095:
				return 4637;
			case 1398678360:
				return 5153;
			case 1399658843:
				return 5770;
			case joaat("MP_CHU_ROB_CALIGAHALL_VIP_01"):
				return 2190;
			case 1400130074:
				return 3612;
			case 1400692781:
				return 3331;
			case 1400718457:
				return 2339;
			case 1401300888:
				return 5373;
			case joaat("MP_ASN_FORTMERCER_TAR_02"):
				return 2458;
			case joaat("MP_CHU_ROB_BENEDICTPOINT_VIP_02"):
				return 2185;
			case joaat("ACCS_MR1_059"):
				return 4562;
			case joaat("META_OUTFIT_ANIMAL_HAWKREDTAIL"):
				return 163;
			case 1403421280:
				return 2530;
			case 1405136402:
				return 3501;
			case joaat("MP_ASN_SDWEDDING_PRIEST"):
				return 2026;
			case 1405483675:
				return 3673;
			case 1405871287:
				return 1653;
			case 1406052049:
				return 1110;
			case 1407025369:
				return 4697;
			case 1407056113:
				return 5578;
			case 1408403718:
				return 4609;
			default:
				break;
		}
		if (iParam1 >= 1)
		{
		}
		return -1;
	}
	if (iParam0 <= 2086629303)
	{
		switch (iParam0)
		{
			case 1409874991:
				return 4957;
			case 1410111555:
				return 5486;
			case 1411006310:
				return 1284;
			case 1411038030:
				return 4865;
			case 1412559291:
				return 2665;
			case 1413611698:
				return 3901;
			case 1413984814:
				return 4217;
			case 1414302604:
				return 4297;
			case joaat("HAT_MR1_051"):
				return 4729;
			case joaat("MP_CHU_KID_EMRSTATION_VIP_04"):
				return 2113;
			case 1414721216:
				return 862;
			case joaat("META_OUTFIT_ANIMAL_ALBINO_MOOSE"):
				return 204;
			case 1415292890:
				return 1252;
			case 1415402910:
				return 5359;
			case joaat("MP_POST_MULTIPACKAGE_CORNWALL_01"):
				return 2772;
			case joaat("HAT_FR1_708"):
				return 4558;
			case 1416127577:
				return 5125;
			case 1416985935:
				return 3464;
			case 1417771390:
				return 4203;
			case 1418490310:
				return 4108;
			case 1418863908:
				return 4823;
			case 1418992357:
				return 3210;
			case 1418999136:
				return 3638;
			case 1419026657:
				return 1710;
			case 1419620690:
				return 4960;
			case joaat("MP_INTRO_CRIMINAL_03"):
				return 2511;
			case 1420672520:
				return 790;
			case 1422804514:
				return 5763;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_CHOPS_000_09"):
				return 5261;
			case 1425219880:
				return 5546;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_STACHE_000_08"):
				return 5278;
			case 1426194578:
				return 444;
			case 1426661402:
				return 4882;
			case 1428106822:
				return 4464;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_CHIN_001_02"):
				return 5245;
			case 1429032976:
				return 5650;
			case 1429900151:
				return 857;
			case 1430235266:
				return 5711;
			case 1430760467:
				return 5375;
			case joaat("MP_INTERCEPT_PLAINVIEW_RCP_01"):
				return 2617;
			case 1432915873:
				return 1663;
			case joaat("MP_RESCUE_CRATERSACRIFICE_01"):
				return 1974;
			case joaat("MP_RESCUE_BOTTLETREE_VIP_03"):
				return 2997;
			case 1433809604:
				return 5726;
			case 1433891124:
				return 1057;
			case 1435539763:
				return 3580;
			case 1435668143:
				return 842;
			case 1435678716:
				return 3704;
			case joaat("MP_PRSN_ASN_THIEVESLANDING_02"):
				return 2872;
			case 1436301778:
				return 2321;
			case 1436504192:
				return 1676;
			case joaat("META_OUTFIT_ANIMAL_EGRETLITTLE"):
				return 125;
			case 1437237816:
				return 4863;
			case 1437242440:
				return 6004;
			case 1438639751:
				return 5027;
			case joaat("MP_HORSESACK_001"):
				return 6097;
			case joaat("MP_GENERIC_HEARTLANDS_MC_FR_01"):
				return 1839;
			case 1442592583:
				return 4024;
			case joaat("CS_BRYNNTILDON_MS1_HAT_001"):
				return 4573;
			case 1443682919:
				return 5600;
			case 1444152977:
				return 2579;
			case 1445873746:
				return 6056;
			case 1446529983:
				return 567;
			case 1446783140:
				return 3950;
			case joaat("MP_ASN_BRAITHWAITEMANOR_TAR_05"):
				return 1995;
			case 1447938793:
				return 926;
			case joaat("META_OUTFIT_ANIMAL_LEGENDARY_SMALLMOUTHBASS"):
				return 155;
			case 1449629166:
				return 3874;
			case 1450435413:
				return 863;
			case 1450454068:
				return 5331;
			case joaat("META_OUTFIT_ANIMAL_POISON_BLUEGIL"):
				return 135;
			case joaat("META_OUTFIT_ANIMAL_SKUNK_001"):
				return 265;
			case joaat("MP_STEALWAGON_GAPTOOTH_PVP_01"):
				return 3099;
			case 1452948078:
				return 6041;
			case 1454679069:
				return 1719;
			case 1455264691:
				return 4042;
			case 1456297931:
				return 3958;
			case 1456406487:
				return 4887;
			case 1457573574:
				return 5221;
			case 1457938152:
				return 748;
			case 1458642679:
				return 5957;
			case 1459193931:
				return 3646;
			case 1460043843:
				return 3936;
			case 1460279599:
				return 2921;
			case 1460887218:
				return 4831;
			case 1460972211:
				return 5019;
			case 1461439733:
				return 973;
			case joaat("MP_CHU_KID_ARMADILLO_VIP_04"):
				return 2105;
			case 1461985642:
				return 713;
			case 1462732728:
				return 3041;
			case 1463535834:
				return 1207;
			case 1466041132:
				return 3465;
			case 1466561111:
				return 3634;
			case 1467109882:
				return 3523;
			case 1467286073:
				return 3301;
			case 1467431057:
				return 4215;
			case 1469405575:
				return 3804;
			case 1469569555:
				return 85;
			case 1469806260:
				return 428;
			case 1470715062:
				return 470;
			case joaat("MP_ASN_PLEASANCE_TAR_03"):
				return 2556;
			case 1473252562:
				return 5101;
			case 1473337123:
				return 5176;
			case 1473808373:
				return 5377;
			case 1475493313:
				return 3368;
			case 1475822964:
				return 5692;
			case 1476045980:
				return 1342;
			case 1477728384:
				return 4345;
			case joaat("MP_POST_MULTIPACKAGE_VALFARM_01"):
				return 2811;
			case 1479000869:
				return 196;
			case 1481241665:
				return 5069;
			case joaat("MP_WGNTHIEF_TUMBLEWEED_PVP_01"):
				return 3167;
			case 1482556363:
				return 3668;
			case 1482683030:
				return 4448;
			case 1484140071:
				return 5143;
			case 1486773518:
				return 2634;
			case 1487067886:
				return 1644;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_CHOPS_001_10"):
				return 5271;
			case 1490828745:
				return 5896;
			case 1490832433:
				return 1525;
			case 1490865061:
				return 2366;
			case joaat("MP_ASN_FORTMERCER_TAR_04"):
				return 2460;
			case 1491513377:
				return 5324;
			case 1492392695:
				return 6007;
			case joaat("META_OUTFIT_ANIMAL_POISON_LAKESTURGEON"):
				return 143;
			case 1493140631:
				return 3788;
			case joaat("MP_ASN_HAMLINPASSING_TAR_04"):
				return 2466;
			case 1494025392:
				return 3890;
			case 1494273600:
				return 4275;
			case joaat("COWBOY"):
				return 5428;
			case joaat("MP_CHU_KID_SAINTDENIS_VIP_01"):
				return 2160;
			case joaat("META_OUTFIT_ANIMAL_WOLFTIMBER"):
				return 297;
			case 1498104676:
				return 4176;
			case 1500197051:
				return 1163;
			case joaat("META_OUTFIT_ANIMAL_ELK_M_000"):
				return 131;
			case 1501644473:
				return 4385;
			case 1502946735:
				return 5233;
			case joaat("META_ANIMAL_OUTFIT_BUCK_000"):
				return 49;
			case 1507866692:
				return 4071;
			case 1508387900:
				return 386;
			case 1508589683:
				return 4876;
			case joaat("MP_ONTHEHUNT_SHEPHERDSRISE_02"):
				return 1951;
			case joaat("META_ANIMAL_OUTFIT_BOAR_000"):
				return 46;
			case 1509908196:
				return 3383;
			case joaat("MP_CHU_KID_EMRSTATION_VIP_02"):
				return 2111;
			case 1510095095:
				return 1822;
			case joaat("MP_CHU_ROB_MACFARLANES_VIP_01"):
				return 2212;
			case 1511173757:
				return 4932;
			case 1511738703:
				return 4380;
			case 1512442295:
				return 3263;
			case 1513338115:
				return 4428;
			case 1513704082:
				return 1139;
			case 1515260035:
				return 6090;
			case 1515616992:
				return 5413;
			case 1516071266:
				return 5182;
			case 1516250174:
				return 3555;
			case joaat("MP_INTERCEPT_LONEMULE_RCP_01"):
				return 2595;
			case 1518037268:
				return 5643;
			case 1518087388:
				return 3258;
			case 1518479237:
				return 5769;
			case joaat("MP_CHU_ROB_CUMBERLAND_VIP_04"):
				return 2201;
			case 1519922034:
				return 1482;
			case 1520268862:
				return 1262;
			case 1520344205:
				return 4966;
			case joaat("MP_ASN_GAPTOOTHBREACH_TAR_06"):
				return 2011;
			case 1521114995:
				return 3775;
			case joaat("MP_HIDEOUT_PIKESBASIN_01"):
				return 2492;
			case joaat("MP_ASN_SDPOLICESTATION_TAR_03"):
				return 2019;
			case joaat("HAT_MR1_096"):
				return 4768;
			case 1522725481:
				return 603;
			case 1522943014:
				return 2322;
			case joaat("MP_STEALHORSE_MACFARLANES_PVP_01"):
				return 3083;
			case 1523442972:
				return 5817;
			case 1523948843:
				return 5634;
			case 1524783213:
				return 5085;
			case joaat("MP_JAILBREAK_STRAWBERRY_01"):
				return 2650;
			case 1526539460:
				return 349;
			case 1526616306:
				return 6021;
			case joaat("META_OUTFIT_ANIMAL_LEGENDARY_REDFINPICKEREL"):
				return 150;
			case 1527655069:
				return 3538;
			case 1528884349:
				return 5368;
			case 1528935407:
				return 1702;
			case 1529358484:
				return 2444;
			case 1529597051:
				return 1421;
			case 1531360098:
				return 1891;
			case joaat("HAT_MR1_088"):
				return 4763;
			case 1534820907:
				return 1870;
			case 1536333193:
				return 3971;
			case joaat("MP_CHU_KID_VALENTINE_VIP_03"):
				return 2173;
			case 1537379613:
				return 3732;
			case joaat("MP_INTRO_EXCONFED_02"):
				return 2563;
			case 1539687783:
				return 677;
			case 1540613092:
				return 924;
			case 1541191055:
				return 5808;
			case 1542303981:
				return 1318;
			case 1543245078:
				return 1197;
			case 1544061387:
				return 4909;
			case 1544915253:
				return 1040;
			case 1544985264:
				return 537;
			case 1544985542:
				return 5178;
			case joaat("MP_ONTHEHUNT_HOTSPRINGS_01"):
				return 1942;
			case joaat("MP_GENERIC_NEWAUSTIN_MC_FR_01"):
				return 1842;
			case 1549220737:
				return 5068;
			case 1549620802:
				return 3532;
			case 1550139768:
				return 728;
			case 1550613446:
				return 4151;
			case 1551044416:
				return 4615;
			case joaat("META_OUTFIT_ANIMAL_SPIRIT_BUCK"):
				return 53;
			case 1554294233:
				return 1614;
			case 1554507528:
				return 4567;
			case 1554919846:
				return 4298;
			case 1556936360:
				return 2431;
			case joaat("MP_ASN_BLACKWATER_TAR_02"):
				return 1984;
			case 1558568193:
				return 3295;
			case 1558705021:
				return 4361;
			case 1558751620:
				return 530;
			case joaat("MP_WGNTHIEF_BRAITHWAITE_PVP_01"):
				return 3152;
			case joaat("MP_ONTHEHUNT_SOLOMANS_01"):
				return 1952;
			case 1560123389:
				return 1021;
			case 1560832012:
				return 2692;
			case 1561059947:
				return 2415;
			case joaat("MP_ASNTRK_HAGENORCHARD_TAR_01"):
				return 2050;
			case 1562724292:
				return 4952;
			case joaat("MP_ASN_SDWEDDING_TAR_02"):
				return 2028;
			case joaat("MP_HIDEOUT_MOSSYFLATS_01"):
				return 2571;
			case 1565362501:
				return 5857;
			case joaat("MP_GENERIC_ROANOKENORTH_MC_FR_03"):
				return 1850;
			case 1566461532:
				return 649;
			case 1568131363:
				return 1121;
			case 1568403945:
				return 1621;
			case 1568779782:
				return 850;
			case joaat("MP_HIDEOUT_SHADYBELLE_01"):
				return 2561;
			case 1571126958:
				return 5843;
			case 1571424350:
				return 4200;
			case 1571730313:
				return 2735;
			case joaat("META_ANIMAL_OUTFIT_BIGHORNSHEEP_001"):
				return 38;
			case 1572762119:
				return 3304;
			case joaat("MP_PRSN_ASN_CARMODYDELL_01"):
				return 2861;
			case 1573289659:
				return 3231;
			case 1574546441:
				return 3560;
			case 1575408781:
				return 594;
			case 1575482012:
				return 1267;
			case joaat("META_OUTFIT_ANIMAL_TURKEYWILDRIO"):
				return 285;
			case 1577023662:
				return 3594;
			case 1577039406:
				return 3881;
			case joaat("HAT_TR1_066"):
				return 4800;
			case 1581828227:
				return 3935;
			case 1582029173:
				return 3239;
			case 1582447188:
				return 1696;
			case 1582921710:
				return 340;
			case 1583579178:
				return 5844;
			case 1583869712:
				return 4276;
			case 1584189116:
				return 3939;
			case 1584417469:
				return 3370;
			case 1585573374:
				return 5171;
			case 1588545859:
				return 3843;
			case 1589395840:
				return 4461;
			case 1590017052:
				return 1434;
			case 1590654402:
				return 4597;
			case 1594854804:
				return 1728;
			case joaat("MP_POST_MULTIPACKAGE_RUINEDCHURCH_01"):
				return 2806;
			case joaat("META_OUTFIT_ANIMAL_WOLFMEDIUM_000"):
				return 295;
			case 1596598302:
				return 2549;
			case 1597975267:
				return 2941;
			case 1598188648:
				return 2688;
			case 1598276604:
				return 1007;
			case joaat("META_OUTFIT_FIELD_DRESSING_000"):
				return 2;
			case joaat("MP_CONVOY_TUMBLEWEED_RCP_01"):
				return 2294;
			case joaat("MP_CHU_ROB_CORONADO_VIP_04"):
				return 2197;
			case joaat("HAT_MR1_045"):
				return 4718;
			case 1599475196:
				return 5704;
			case 1600962275:
				return 18;
			case 1601358025:
				return 1077;
			case 1601449994:
				return 5232;
			case joaat("MP_RESCUE_MTNMANSHACK_RCP_01"):
				return 3012;
			case 1601991107:
				return 2406;
			case 1602424055:
				return 618;
			case 1602988737:
				return 5433;
			case 1603977401:
				return 5320;
			case 1604450797:
				return 971;
			case 1604459475:
				return 839;
			case joaat("MP_CAMPDEF_LITTLECREEK_VIP_02"):
				return 2090;
			case joaat("MP_POST_MULTIPACKAGE_QUAKERSCOVE_01"):
				return 2804;
			case 1606221641:
				return 1821;
			case 1606262487:
				return 1580;
			case 1606325429:
				return 6058;
			case 1607877452:
				return 1665;
			case 1609780949:
				return 2531;
			case 1610685074:
				return 5933;
			case 1610729335:
				return 3492;
			case 1610773759:
				return 4738;
			case joaat("MP_CONVOY_BRAITHWAITE_RCP_01"):
				return 2278;
			case joaat("MP_PRSN_ASN_RATHSKELLER_01"):
				return 2868;
			case 1613085321:
				return 2438;
			case 1613150473:
				return 113;
			case 1613203003:
				return 1534;
			case joaat("MP_ASNTRK_BRITTLEBUSH_TAR_01"):
				return 2476;
			case 1614632893:
				return 5454;
			case 1614636561:
				return 5135;
			case 1615349018:
				return 4848;
			case 1615367965:
				return 3457;
			case 1615541117:
				return 1496;
			case 1618466970:
				return 4018;
			case 1618520298:
				return 1540;
			case 1619718366:
				return 5095;
			case joaat("MP_STEALHORSE_CENTRALUNION_RCP_01"):
				return 3072;
			case joaat("META_OUTFIT_ANIMAL_RABBIT_001"):
				return 249;
			case 1622451963:
				return 4575;
			case 1623375598:
				return 2955;
			case 1623681088:
				return 1693;
			case 1624672818:
				return 943;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_STACHE_002_09"):
				return 5295;
			case 1630021462:
				return 2587;
			case 1631388791:
				return 1449;
			case 1631452107:
				return 1334;
			case 1631851432:
				return 5008;
			case joaat("REINFORCED_BINDINGS_HANDS_BULKY"):
				return 6100;
			case 1632707750:
				return 3545;
			case 1633413521:
				return 463;
			case joaat("MP_HIDEOUT_SILTWATER_01"):
				return 2521;
			case 1635109100:
				return 1236;
			case 1636540651:
				return 3730;
			case 1636637447:
				return 1871;
			case 1636906885:
				return 1851;
			case joaat("HAT_MR1_050"):
				return 4727;
			case 1638226287:
				return 1371;
			case 1639622136:
				return 538;
			case 1640618693:
				return 1283;
			case joaat("MP_CHU_ROB_ANNESBURG_VIP_03"):
				return 2180;
			case 1640861587:
				return 1276;
			case joaat("META_OUTFIT_RIGGSSTATION_VAR_02"):
				return 4354;
			case joaat("MP_POST_RELAY_MOONSHINESHACK_03"):
				return 2852;
			case 1641649788:
				return 4498;
			case 1641761352:
				return 752;
			case 1643709708:
				return 2965;
			case 1644645603:
				return 5551;
			case 1645670014:
				return 3792;
			case 1645816847:
				return 4986;
			case 1647107806:
				return 5189;
			case joaat("HAT_FR1_004"):
				return 4531;
			case 1647366993:
				return 4363;
			case 1647726717:
				return 5895;
			case joaat("META_OUTFIT_ANNESBURG_VAR_03"):
				return 4322;
			case joaat("MP_CHU_ROB_CUMBERLAND_VIP_01"):
				return 2198;
			case joaat("META_ANIMAL_OUTFIT_BADGER_000"):
				return 10;
			case 1648215160:
				return 3976;
			case 1648249102:
				return 3498;
			case 1649050579:
				return 1260;
			case 1650751468:
				return 647;
			case 1651779749:
				return 4279;
			case 1652360791:
				return 3617;
			case 1653067266:
				return 186;
			case 1653372950:
				return 1359;
			case 1653572322:
				return 4370;
			case 1654093036:
				return 1818;
			case joaat("MP_OTH_MACFARLANES_RCP_01"):
				return 2759;
			case 1655707901:
				return 4117;
			case 1655800249:
				return 1680;
			case joaat("HAT_MR1_050_ALT02"):
				return 4728;
			case 1657717581:
				return 1698;
			case 1657936016:
				return 1179;
			case 1658110508:
				return 4656;
			case 1659404556:
				return 344;
			case joaat("MP_ASN_STILLWATER_TAR_02"):
				return 2033;
			case 1659623527:
				return 4421;
			case 1659735712:
				return 1751;
			case 1660370454:
				return 2737;
			case 1662119255:
				return 1785;
			case 1663158219:
				return 5318;
			case 1663243975:
				return 2935;
			case 1663349851:
				return 3578;
			case 1663500550:
				return 3361;
			case 1663566390:
				return 5499;
			case 1663946342:
				return 4134;
			case 1664774813:
				return 4272;
			case joaat("MP_ASNTRK_TALLTREES_TAR_04"):
				return 2065;
			case 1665243515:
				return 3850;
			case 1666399187:
				return 1582;
			case 1666836965:
				return 3613;
			case joaat("CS_LEON_MS1_HAT_000"):
				return 4624;
			case joaat("MP_ASNTRK_BRITTLEBUSH_TAR_04"):
				return 2479;
			case 1668440413:
				return 1524;
			case 1670309815:
				return 4307;
			case 1672205805:
				return 2323;
			case 1672364849:
				return 4250;
			case 1672398176:
				return 5710;
			case 1672483833:
				return 4172;
			case 1672902603:
				return 1324;
			case joaat("MP_HIDEOUT_FORTRIGGS_01"):
				return 2570;
			case 1675398798:
				return 3425;
			case 1675863431:
				return 1242;
			case 1676176347:
				return 1156;
			case 1676751061:
				return 6003;
			case 1678059742:
				return 781;
			case 1678889591:
				return 4025;
			case 1679487590:
				return 3957;
			case 1679955432:
				return 5098;
			case 1680324116:
				return 793;
			case 1681203374:
				return 5343;
			case 1682396012:
				return 124;
			case 1686244155:
				return 3691;
			case 1687171284:
				return 2370;
			case 1688229209:
				return 5899;
			case 1689724908:
				return 4819;
			case 1689938120:
				return 763;
			case 1691538330:
				return 4163;
			case 1691628739:
				return 2923;
			case 1691821118:
				return 5930;
			case 1691901230:
				return 3542;
			case 1691988227:
				return 4967;
			case 1692916219:
				return 4013;
			case 1692953176:
				return 1794;
			case 1692990655:
				return 5584;
			case 1694127292:
				return 1527;
			case 1695015943:
				return 1631;
			case 1696207146:
				return 3217;
			case 1697015990:
				return 6026;
			case 1697079164:
				return 871;
			case 1697584252:
				return 3839;
			case 1697690081:
				return 5637;
			case 1699073378:
				return 3815;
			case 1699299540:
				return 1483;
			case joaat("MP_POST_RELAY_WATER_01"):
				return 2858;
			case 1700084561:
				return 5747;
			case joaat("META_OUTFIT_RHODES_VAR_02"):
				return 398;
			case 1700762242:
				return 5164;
			case 1703424209:
				return 2968;
			case joaat("META_OUTFIT_ANIMAL_ROOSTERLEGHORN"):
				return 258;
			case 1705136021:
				return 3202;
			case 1705870585:
				return 4284;
			case 1706011358:
				return 5513;
			case 1706180343:
				return 5736;
			case 1708985047:
				return 4649;
			case 1709174532:
				return 844;
			case joaat("MP_ASN_BRAITHWAITEMANOR_TAR_04"):
				return 1994;
			case 1709946990:
				return 2725;
			case 1710201443:
				return 3454;
			case 1710604959:
				return 1718;
			case 1711746817:
				return 4296;
			case 1712376441:
				return 5326;
			case 1712564875:
				return 3968;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_STACHE_001_07"):
				return 5286;
			case joaat("CS_HOSEAMATTHEWS_MS1_HAT_001"):
				return 4610;
			case 1715158176:
				return 5487;
			case 1716256641:
				return 5586;
			case 1716354412:
				return 5801;
			case 1716995354:
				return 389;
			case joaat("MP_WGNBRKOUT_RHODES_PVP_02"):
				return 3138;
			case 1717635561:
				return 1047;
			case 1718310517:
				return 4216;
			case 1720302664:
				return 1572;
			case 1722336505:
				return 3250;
			case 1723374171:
				return 5385;
			case 1723538985:
				return 5169;
			case 1723545634:
				return 3712;
			case 1724503765:
				return 2641;
			case joaat("MP_HIDEOUT_HANGINGDOG_01"):
				return 2525;
			case 1725257795:
				return 5495;
			case 1725287671:
				return 5332;
			case 1725858271:
				return 1407;
			case 1726214955:
				return 471;
			case 1726303140:
				return 5812;
			case 1726315383:
				return 2315;
			case 1726911118:
				return 4212;
			case joaat("MP_POST_MULTIPACKAGE_HUSBANDSHACK_01"):
				return 2795;
			case 1728218259:
				return 3316;
			case joaat("HAT_FR1_611"):
				return 4549;
			case 1729150773:
				return 1911;
			case 1729811093:
				return 1395;
			case 1730515688:
				return 886;
			case 1732485526:
				return 3667;
			case 1733547876:
				return 733;
			case 1734292651:
				return 4793;
			case 1734368289:
				return 5192;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_CHIN_001_03"):
				return 5246;
			case 1735774223:
				return 5046;
			case 1736416063:
				return 5998;
			case joaat("MP_CHU_ROB_AMBARINO_VIP_01"):
				return 2175;
			case 1736778834:
				return 3502;
			case 1736847997:
				return 777;
			case 1737395918:
				return 5406;
			case 1737603095:
				return 3503;
			case joaat("MP_HIDEOUT_OLDBACCHUS_01"):
				return 2519;
			case 1737912400:
				return 1330;
			case 1739970371:
				return 5725;
			case joaat("MP_POST_RELAY_MOONSHINESHACK_02"):
				return 2851;
			case 1742244783:
				return 5630;
			case 1742489849:
				return 4510;
			case 1743550585:
				return 6057;
			case 1743783295:
				return 3840;
			case 1744560113:
				return 193;
			case 1745919061:
				return 5992;
			case 1746634452:
				return 4441;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_STACHE_000_05"):
				return 5275;
			case 1749430993:
				return 4506;
			case joaat("MP_INTERCEPT_HEARTLANDS_PVP_02"):
				return 2611;
			case 1750015223:
				return 2627;
			case 1750236292:
				return 606;
			case joaat("META_OUTFIT_STRAWBERRY_VAR_01"):
				return 466;
			case 1752634861:
				return 168;
			case 1752915347:
				return 2363;
			case 1753522302:
				return 1725;
			case 1753539481:
				return 4422;
			case joaat("MP_ASN_HAMLINPASSING_TAR_03"):
				return 2465;
			case joaat("MP_ONTHEHUNT_SHEPHERDSRISE_01"):
				return 1950;
			case 1754194240:
				return 3122;
			case 1754977219:
				return 415;
			case 1755543207:
				return 706;
			case 1757785789:
				return 5103;
			case 1758169297:
				return 1607;
			case 1758465023:
				return 117;
			case 1759074915:
				return 5886;
			case 1760262584:
				return 5537;
			case joaat("META_OUTFIT_ANIMAL_ELK_M_001"):
				return 132;
			case 1762186298:
				return 1687;
			case 1762831972:
				return 939;
			case 1763344825:
				return 5818;
			case 1763526310:
				return 509;
			case joaat("MP_ONTHEHUNT_SOLOMANS_02"):
				return 1953;
			case 1765262211:
				return 1910;
			case 1765923878:
				return 4214;
			case joaat("MP_WGNTHIEF_GRIZZLIES_RCP_01"):
				return 3158;
			case joaat("MP_CONVOY_LAGRAS_RCP_01"):
				return 2285;
			case joaat("MP_CHU_KID_VALENTINE_VIP_04"):
				return 2174;
			case 1767799909:
				return 1645;
			case joaat("MP_CHU_ROB_BENEDICTPOINT_VIP_01"):
				return 2184;
			case 1768413926:
				return 4961;
			case 1768838123:
				return 5117;
			case 1769791789:
				return 1122;
			case joaat("MP_ONTHEHUNT_SDSWAMP_04"):
				return 1949;
			case 1771140493:
				return 1357;
			case 1772963640:
				return 3738;
			case 1773174030:
				return 3943;
			case 1773331021:
				return 1216;
			case 1773556440:
				return 523;
			case 1775806192:
				return 3408;
			case 1776102258:
				return 1106;
			case 1776247194:
				return 676;
			case 1776501247:
				return 1232;
			case 1776526941:
				return 3891;
			case 1777952456:
				return 195;
			case 1779851736:
				return 3199;
			case joaat("MP_STEALWAGON_TWINROCKS_PVP_01"):
				return 3110;
			case 1780455436:
				return 1919;
			case 1780534074:
				return 720;
			case 1781382506:
				return 6008;
			case 1781690883:
				return 3856;
			case 1782085359:
				return 605;
			case 1782737906:
				return 5209;
			case 1783037674:
				return 3794;
			case 1783129265:
				return 1549;
			case joaat("MP_POST_RELAY_WHISKEYTREE_01"):
				return 2859;
			case 1784611275:
				return 3821;
			case 1784872256:
				return 5081;
			case 1786043829:
				return 1451;
			case 1786464955:
				return 1515;
			case 1787398040:
				return 4044;
			case 1787439019:
				return 3500;
			case 1787924176:
				return 4359;
			case 1788171854:
				return 673;
			case 1788856634:
				return 327;
			case 1789163646:
				return 3296;
			case 1790074807:
				return 4507;
			case 1790649039:
				return 4449;
			case 1791007572:
				return 4979;
			case 1791437852:
				return 443;
			case joaat("MP_POST_MULTIRELAY_GUTHRIEFARM_01"):
				return 2827;
			case 1792296050:
				return 627;
			case joaat("MP_ASN_GAPTOOTHBREACH_TAR_05"):
				return 2010;
			case 1792636094:
				return 5071;
			case joaat("REINFORCED_BINDINGS_FEET_BULKY"):
				return 6098;
			case joaat("MP_INTRO_EXCONFED_01"):
				return 2562;
			case 1794695822:
				return 4875;
			case 1794758897:
				return 1326;
			case 1798133494:
				return 4429;
			case 1799817589:
				return 4191;
			case 1799843875:
				return 1601;
			case joaat("MP_STEALBOAT_MONTANAFALLS_RCP_01"):
				return 3059;
			case 1801389617:
				return 1050;
			case 1802057976:
				return 936;
			case 1802177278:
				return 5479;
			case joaat("MP_CHU_KID_EMRSTATION_VIP_03"):
				return 2112;
			case 1803220758:
				return 1564;
			case 1803827846:
				return 5110;
			case 1808912891:
				return 4931;
			case joaat("MP_POST_MULTIPACKAGE_FIRWOODRISE_02"):
				return 2789;
			case 1810685543:
				return 1790;
			case 1811637715:
				return 3369;
			case joaat("MP_ASNTRK_GRIZZLIESWEST_TAR_04"):
				return 2047;
			case 1812309647:
				return 3455;
			case 1812985085:
				return 3242;
			case 1813871063:
				return 324;
			case 1814441161:
				return 5967;
			case 1815365822:
				return 3559;
			case 1815704879:
				return 866;
			case 1815753076:
				return 5917;
			case joaat("MP_POST_RELAY_EWINGBASIN_01"):
				return 2847;
			case 1816765629:
				return 3326;
			case 1817663730:
				return 3471;
			case 1817879612:
				return 516;
			case 1818654807:
				return 3714;
			case 1819533724:
				return 1182;
			case 1820681123:
				return 5494;
			case 1820852714:
				return 5000;
			case joaat("META_ANIMAL_OUTFIT_BEAR_001"):
				return 15;
			case 1822008893:
				return 5356;
			case 1823228272:
				return 5458;
			case 1824113282:
				return 6009;
			case 1825205111:
				return 3940;
			case 1825217350:
				return 4098;
			case 1825833598:
				return 1461;
			case 1826319412:
				return 2712;
			case joaat("META_OUTFIT_ANIMAL_WOLFMEDIUM_001"):
				return 296;
			case 1828290413:
				return 3927;
			case 1831779554:
				return 1626;
			case 1832601100:
				return 880;
			case 1832930597:
				return 5821;
			case 1833893952:
				return 823;
			case joaat("HAT_MR1_073"):
				return 4751;
			case 1835238691:
				return 4168;
			case 1835401707:
				return 3183;
			case 1836589707:
				return 5867;
			case 1837271232:
				return 5574;
			case 1837616802:
				return 5735;
			case 1837647733:
				return 2944;
			case 1839003840:
				return 4912;
			case joaat("META_OUTFIT_TUMBLEWEED_VAR_02"):
				return 422;
			case joaat("MP_CHU_KID_TUMBLEWEED_VIP_04"):
				return 2170;
			case 1840469112:
				return 1317;
			case 1840667778:
				return 3424;
			case 1841741509:
				return 4118;
			case 1841839514:
				return 5700;
			case 1842035296:
				return 3632;
			case 1842387010:
				return 361;
			case 1842846550:
				return 4579;
			case 1844032232:
				return 1652;
			case joaat("META_ANIMAL_OUTFIT_SNAKETIMBERRATTLE"):
				return 266;
			case 1844241543:
				return 729;
			case 1844905153:
				return 2915;
			case joaat("MP_HIDEOUT_SOLOMANS_01"):
				return 2494;
			case 1846303489:
				return 3868;
			case joaat("MP_CAMPDEF_TWOROCKS_VIP_01"):
				return 2100;
			case 1850661234:
				return 1896;
			case joaat("MP_POST_MULTIPACKAGE_MANZANITA_01"):
				return 2796;
			case joaat("MP_GENERIC_TALLTREES_MC_FR_03"):
				return 1859;
			case joaat("MP_HIDEOUT_SHIPROCK_01"):
				return 2537;
			case 1855120901:
				return 4291;
			case 1855330102:
				return 6066;
			case 1855614908:
				return 4418;
			case 1855801915:
				return 3789;
			case 1855810753:
				return 4835;
			case 1856137283:
				return 4226;
			case 1856154281:
				return 3448;
			case 1856357038:
				return 3708;
			case 1858448252:
				return 617;
			case 1859836905:
				return 4427;
			case 1860377122:
				return 4263;
			case 1862039790:
				return 6022;
			case 1862852728:
				return 3683;
			case 1863719219:
				return 5024;
			case 1864292925:
				return 4821;
			case 1866046141:
				return 1681;
			case joaat("MP_STEALHORSE_EMERALDRANCH_PVP_01"):
				return 3076;
			case 1866899594:
				return 1448;
			case 1867027027:
				return 1474;
			case 1870246963:
				return 4397;
			case 1870304677:
				return 873;
			case 1871320175:
				return 1375;
			case 1872391008:
				return 1746;
			case joaat("MP_CHU_ROB_CALIGAHALL_RCP_01"):
				return 2243;
			case 1873851413:
				return 3377;
			case 1874592093:
				return 3477;
			case joaat("META_OUTFIT_ANIMAL_DEER_000"):
				return 88;
			case 1877535066:
				return 5872;
			case 1877664733:
				return 4462;
			case 1877965411:
				return 5188;
			case 1878790704:
				return 526;
			case joaat("META_OUTFIT_RIGGSSTATION_VAR_03"):
				return 4355;
			case 1879214637:
				return 2668;
			case joaat("MP_CHU_ROB_ANNESBURG_VIP_02"):
				return 2179;
			case 1879511799:
				return 5587;
			case joaat("MP_STEALBOAT_DAKOTARIVER_RCP_01"):
				return 3057;
			case joaat("MP_POST_MULTIPACKAGE_PLEASANCEHOUSE_01"):
				return 2803;
			case 1882135453:
				return 346;
			case 1882279161:
				return 2726;
			case 1883215998:
				return 1488;
			case 1883650185:
				return 1038;
			case 1883654295:
				return 3910;
			case 1883928425:
				return 989;
			case 1884403136:
				return 4644;
			case 1886394817:
				return 2422;
			case 1887069582:
				return 2630;
			case 1887796526:
				return 5682;
			case 1888211223:
				return 2673;
			case 1888985740:
				return 3616;
			case 1890421461:
				return 4391;
			case 1892216320:
				return 3758;
			case 1892654866:
				return 1198;
			case 1892705060:
				return 5321;
			case 1893018199:
				return 4102;
			case 1893412146:
				return 496;
			case 1893720331:
				return 5333;
			case 1893737148:
				return 5152;
			case 1893965079:
				return 813;
			case 1894189385:
				return 2581;
			case 1894285205:
				return 1013;
			case 1894397425:
				return 4954;
			case 1895628185:
				return 791;
			case 1896599860:
				return 5553;
			case joaat("MP_STEALWAGON_CARMODYDELL_RCP_01"):
				return 3093;
			case joaat("META_ANIMAL_OUTFIT_PRONGHORNBAJA_000"):
				return 229;
			case 1903941038:
				return 495;
			case 1904899014:
				return 293;
			case joaat("MP_RESCUE_SHACK34_RCP_01"):
				return 3016;
			case 1906981667:
				return 3912;
			case joaat("MP_RESCUE_BOTTLETREE_VIP_01"):
				return 2995;
			case 1908325491:
				return 576;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_STACHE_001_05"):
				return 5284;
			case 1910940500:
				return 4483;
			case 1910949900:
				return 5443;
			case joaat("MP_POST_MULTIPACKAGE_SDMANSION_01"):
				return 2808;
			case 1911527404:
				return 5642;
			case 1911543392:
				return 5772;
			case 1911671730:
				return 1258;
			case 1912997460:
				return 4620;
			case 1913024510:
				return 3934;
			case 1913056770:
				return 4162;
			case 1913175466:
				return 5441;
			case 1913827357:
				return 1275;
			case 1914840999:
				return 5845;
			case 1915374669:
				return 1541;
			case 1915429453:
				return 4535;
			case 1916716679:
				return 5698;
			case 1917738783:
				return 1913;
			case 1918342267:
				return 5093;
			case 1918470120:
				return 3297;
			case 1918565213:
				return 5959;
			case 1920338128:
				return 2308;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_STACHE_000_06"):
				return 5276;
			case 1920929002:
				return 4124;
			case 1921954230:
				return 4171;
			case 1922340057:
				return 1221;
			case 1922684772:
				return 4142;
			case 1924351135:
				return 4186;
			case joaat("HAT_MR1_025"):
				return 4708;
			case 1924922242:
				return 5412;
			case joaat("MP_REPO_BEAVERHOLLOW_RCP_01"):
				return 2975;
			case 1926443173:
				return 5623;
			case 1926707819:
				return 5531;
			case joaat("MP_ASN_SHADYBELLE_TAR_01"):
				return 2031;
			case 1926976456:
				return 3579;
			case 1927836269:
				return 2362;
			case 1928233019:
				return 832;
			case 1929099031:
				return 5007;
			case 1929483262:
				return 2689;
			case 1930204168:
				return 5532;
			case 1931211633:
				return 6043;
			case 1934192936:
				return 1355;
			case 1934203837:
				return 1476;
			case 1934601404:
				return 430;
			case 1935913669:
				return 4578;
			case 1937430247:
				return 4923;
			case 1937571152:
				return 1125;
			case 1937649573:
				return 4100;
			case 1937830674:
				return 5894;
			case 1938775504:
				return 5961;
			case joaat("META_OUTFIT_ANIMAL_RACCOON_000"):
				return 252;
			case 1939719609:
				return 4818;
			case joaat("MP_POST_RELAY_RHODESOUTSKIRTS_01"):
				return 2854;
			case joaat("MP_ASNTRK_ISABELLA_TAR_06"):
				return 2061;
			case 1941811839:
				return 865;
			case joaat("META_OUTFIT_ANIMAL_POISON_ROCKBASS"):
				return 153;
			case 1942867832:
				return 4987;
			case 1944610176:
				return 1697;
			case 1946722750:
				return 4360;
			case 1947066503:
				return 388;
			case 1947129808:
				return 531;
			case joaat("MP_WGNBRKOUT_RHODES_PVP_03"):
				return 3139;
			case 1947866077:
				return 139;
			case 1948339538:
				return 923;
			case 1948457785:
				return 2346;
			case 1948524275:
				return 4089;
			case 1949514659:
				return 401;
			case joaat("META_ANIMAL_OUTFIT_PRONGHORNM_000"):
				return 235;
			case 1951334013:
				return 4022;
			case joaat("MP_ASNTRK_ELYSIANPOOL_TAR_04"):
				return 2041;
			case joaat("MP_ASNTRK_TALLTREES_TAR_05"):
				return 2066;
			case joaat("MP_CHU_ROB_MILLESANI_VIP_03"):
				return 2220;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_CHIN_000_06"):
				return 5240;
			case 1955227374:
				return 5811;
			case joaat("MP_RECOVER_CUMBERLAND_RCP_02"):
				return 2969;
			case 1955589553:
				return 3499;
			case joaat("MP_ASN_PLEASANCE_TAR_01"):
				return 2554;
			case 1955904498:
				return 4497;
			case joaat("MP_POST_RELAY_OLDTOMB_01"):
				return 2853;
			case 1958056700:
				return 5210;
			case joaat("MP_WGNBRKOUT_TWINROCKS_RCP_01"):
				return 3147;
			case 1958866025:
				return 1328;
			case 1959338016:
				return 3310;
			case 1959714099:
				return 947;
			case 1960266524:
				return 6002;
			case 1960932374:
				return 4030;
			case 1961076360:
				return 4709;
			case 1961093572:
				return 3977;
			case joaat("MP_OTH_BENEDICTPOINT_RCP_01"):
				return 2757;
			case 1961694020:
				return 3285;
			case 1963369243:
				return 3737;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_STACHE_001_04"):
				return 5283;
			case 1965968533:
				return 4234;
			case 1967280077:
				return 4241;
			case 1968256138:
				return 774;
			case 1968285321:
				return 5500;
			case 1968500755:
				return 1141;
			case 1968898418:
				return 5350;
			case 1970939266:
				return 849;
			case 1970966667:
				return 5139;
			case 1972551824:
				return 3261;
			case 1972821438:
				return 5820;
			case joaat("MP_POST_MULTIPACKAGE_OILWELL_01"):
				return 2798;
			case 1973082396:
				return 3511;
			case 1974866676:
				return 2717;
			case joaat("MP_POST_MULTIRELAY_CALLIGAHALL_01"):
				return 2812;
			case 1975271787:
				return 3541;
			case joaat("MP_CHU_ROB_AMBARINO_VIP_02"):
				return 2176;
			case 1975384284:
				return 5193;
			case 1975613139:
				return 2319;
			case 1976273473:
				return 847;
			case 1977274106:
				return 5946;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_CHIN_000_10"):
				return 5244;
			case 1977838224:
				return 3963;
			case 1977950183:
				return 5648;
			case 1978058197:
				return 3831;
			case 1978219909:
				return 6072;
			case 1979102785:
				return 3959;
			case 1980301567:
				return 5530;
			case 1980816997:
				return 2442;
			case 1980915318:
				return 4366;
			case 1980959257:
				return 4884;
			case 1981174472:
				return 3921;
			case joaat("BOUNTY_HUNTER"):
				return 5619;
			case 1986679892:
				return 5636;
			case joaat("MP_INTRO_DELLOBO_05"):
				return 2500;
			case 1987016951:
				return 5898;
			case 1987680014:
				return 4087;
			case 1987795078:
				return 779;
			case 1988112326:
				return 3230;
			case 1988502441:
				return 4442;
			case joaat("MP_CHU_KID_SAINTDENIS_VIP_02"):
				return 2159;
			case 1988797837:
				return 974;
			case 1989256285:
				return 1608;
			case 1990421457:
				return 178;
			case joaat("HAT_MR1_105"):
				return 4775;
			case 1993674842:
				return 5089;
			case joaat("MP_POST_MULTIPACKAGE_ABANDONEDMISSION_01"):
				return 2779;
			case 1993992783:
				return 5155;
			case 1994002047:
				return 2745;
			case joaat("META_OUTFIT_ANIMAL_PELICANBROWN"):
				return 220;
			case 1995381602:
				return 5132;
			case 1996046145:
				return 801;
			case 1996572208:
				return 3895;
			case 1996584410:
				return 5728;
			case 1996914394:
				return 4175;
			case 1997021746:
				return 1408;
			case 1997221577:
				return 4907;
			case joaat("META_OUTFIT_ANIMAL_POISON_BUCK"):
				return 52;
			case 1997738637:
				return 837;
			case 1997969550:
				return 4782;
			case joaat("MP_ONTHEHUNT_GRIZZLIES_02"):
				return 1939;
			case joaat("META_OUTFIT_ANIMAL_PRONGHORN_000"):
				return 244;
			case 1999468834:
				return 1530;
			case 2000082785:
				return 3504;
			case 2001591252:
				return 3796;
			case 2001844695:
				return 3834;
			case joaat("MP_CHU_ROB_MONTANARIVER_VIP_01"):
				return 2222;
			case 2003049581:
				return 2591;
			case 2003318381:
				return 1555;
			case 2004693118:
				return 3515;
			case 2006193429:
				return 547;
			case joaat("MP_STEALWAGON_TWINROCKS_RCP_01"):
				return 3111;
			case 2006966246:
				return 5746;
			case joaat("MP_STEALHORSE_BRAITHWRAITE_PVP_01"):
				return 3065;
			case 2007865179:
				return 4126;
			case 2008037555:
				return 2658;
			case joaat("PLAYER_THREE_MS1_BEARD_SHV_STACHE_001_06"):
				return 5285;
			case 2008741768:
				return 2298;
			case joaat("MP_ASN_STILLWATER_TAR_03"):
				return 2034;
			case joaat("MP_STEALBOAT_BUTCHERCREEK_RCP_01"):
				return 3055;
			case 2010884902:
				return 333;
			case 2011147285:
				return 1679;
			case joaat("MP_CHU_KID_HEARTLANDS_VIP_01"):
				return 2122;
			case joaat("MP_RESCUE_MTNMANSHACK_VIP_02"):
				return 3008;
			case 2011450924:
				return 3969;
			case 2012803977:
				return 3907;
			case joaat("MP_HIDEOUT_SIXPOINTCABIN_01"):
				return 2548;
			case 2013517659:
				return 3475;
			case joaat("META_OUTFIT_STRAWBERRY_VAR_02"):
				return 467;
			case 2014317733:
				return 5761;
			case 2014433232:
				return 3311;
			case 2014935113:
				return 4962;
			case 2015253088:
				return 4079;
			case joaat("MP_CAMPDEF_RIOBRAVO_VIP_02"):
				return 2094;
			case 2016868638:
				return 5887;
			case 2016898758:
				return 5327;
			case 2020865587:
				return 985;
			case 2020988401:
				return 2586;
			case 2021724524:
				return 1423;
			case joaat("MP_POST_RELAY_BWMCROPS_01"):
				return 2841;
			case 2022908843:
				return 4047;
			case 2023406194:
				return 5446;
			case 2023411570:
				return 524;
			case 2024023939:
				return 5370;
			case 2024737770:
				return 5187;
			case 2024768285:
				return 1484;
			case 2025779486:
				return 5062;
			case 2025782913:
				return 4075;
			case 2025816470:
				return 3962;
			case 2027292923:
				return 311;
			case 2027789845:
				return 852;
			case joaat("MP_HIDEOUT_CHOLLASPRINGS_01"):
				return 2515;
			case 2029572017:
				return 1245;
			case 2029925160:
				return 1358;
			case joaat("MP_HIDEOUT_TWINROCKS_01"):
				return 2495;
			case joaat("MP_CHU_KID_GREATPLAINS2_PVP_01"):
				return 2140;
			case 2030895966:
				return 5554;
			case 2031440464:
				return 770;
			case 2031551065:
				return 4012;
			case joaat("MP_ASN_SDPOLICESTATION_TAR_01"):
				return 2017;
			case 2034489751:
				return 6081;
			case 2035781812:
				return 167;
			case 2036410304:
				return 4743;
			case joaat("META_OUTFIT_ANIMAL_LEGENDARY_STEELHEADTROUT"):
				return 149;
			case 2037368219:
				return 2764;
			case 2040610690:
				return 5999;
			case 2041503969:
				return 4840;
			case joaat("META_ANIMAL_OUTFIT_PRONGHORNSONO_001"):
				return 239;
			case 2043576522:
				return 4654;
			case 2044446616:
				return 6088;
			case 2044595300:
				return 564;
			case joaat("MP_STEALHORSE_GREATPLAINS_RCP_01"):
				return 3078;
			case 2046532345:
				return 1536;
			case 2046654596:
				return 5504;
			case 2048007291:
				return 5667;
			case 2048476553:
				return 1443;
			case 2049609081:
				return 4056;
			case 2049879132:
				return 3114;
			case 2049887652:
				return 4854;
			case 2050157097:
				return 883;
			case 2050756334:
				return 963;
			case 2051247205:
				return 2950;
			case joaat("MP_INTERCEPT_SCARLETTMDWS_PVP_01"):
				return 2621;
			case 2053530622:
				return 3340;
			case 2053732335:
				return 5421;
			case 2054074672:
				return 2407;
			case 2054263469:
				return 1083;
			case 2054735785:
				return 2766;
			case joaat("CS_GRIZZLEDJON_MS1_RACOONHAT_000"):
				return 4604;
			case 2058044619:
				return 1726;
			case 2058743928:
				return 583;
			case 2059814720:
				return 3179;
			case 2059977514:
				return 4063;
			case 2060165998:
				return 5684;
			case 2060423965:
				return 2341;
			case 2060868960:
				return 2369;
			case 2061486876:
				return 3753;
			case 2061539371:
				return 1356;
			case joaat("META_OUTFIT_ANIMAL_SQUIRRELBLACK"):
				return 281;
			case 2064992839:
				return 4955;
			case 2066870483:
				return 3813;
			case 2066885966:
				return 3273;
			case 2068661534:
				return 3452;
			case 2068736559:
				return 5734;
			case 2069057258:
				return 5342;
			case 2069461080:
				return 1196;
			case 2069918342:
				return 1005;
			case joaat("MP_ASN_PIKESBASIN_TAR_02"):
				return 2469;
			case 2070111985:
				return 184;
			case joaat("MP_ASNTRK_GRIZZLIESWEST_TAR_01"):
				return 2044;
			case 2072259397:
				return 6068;
			case joaat("MP_ASN_BRAITHWAITEMANOR_TAR_03"):
				return 1993;
			case 2074992933:
				return 2551;
			case 2075127315:
				return 1717;
			case joaat("MP_CHU_KID_ARMADILLO_VIP_02"):
				return 2103;
			case joaat("HAT_MR1_046"):
				return 4719;
			case 2076828664:
				return 2943;
			case 2077073518:
				return 2912;
			case 2077420106:
				return 5822;
			case 2077644593:
				return 3274;
			case 2078702601:
				return 5422;
			case 2079539955:
				return 2884;
			case joaat("MP_ASN_SHADYBELLE_TAR_02"):
				return 2558;
			case 2081154332:
				return 1023;
			case joaat("MP_ONTHEHUNT_STILLWATER_02"):
				return 1957;
			case 2083731153:
				return 4268;
			case 2083759476:
				return 3820;
			case 2083890004:
				return 3220;
			case 2085173349:
				return 5357;
			case 2085805943:
				return 5354;
			case 2086038695:
				return 607;
			case 2086067277:
				return 3698;
			case 2086629303:
				return 721;
			default:
				break;
		}
		if (iParam1 >= 1)
		{
		}
		return -1;
	}
	if (iParam0 <= joaat("META_OUTFIT_ANIMAL_MOOSE_M_001"))
	{
		switch (iParam0)
		{
			case joaat("MP_INTERCEPT_MACLEANS_RCP_02"):
				return 2614;
			case 2086728021:
				return 1960;
			case 2086791053:
				return 626;
			case 2089015447:
				return 1510;
			case 2089552034:
				return 4836;
			case 2089668521:
				return 442;
			case 2089961735:
				return 5850;
			case 2090237806:
				return 3413;
			case 2091493591:
				return 5819;
			case 2093761089:
				return 4101;
			case joaat("META_OUTFIT_VANHORN_VAR_02"):
				return 446;
			case 2094135436:
				return 3867;
			case 2095136143:
				return 1920;
			case 2095645810:
				return 5086;
			case 2095672105:
				return 1115;
			case 2095788641:
				return 1075;
			case joaat("MP_POST_MULTIPACKAGE_BLWHOUSE_01"):
				return 2769;
			case 2096045552:
				return 1780;
			case 2096064860:
				return 3552;
			case joaat("HAT_FR1_029"):
				return 4545;
			case 2096518317:
				return 2347;
			case 2097530735:
				return 3447;
			case 2098072132:
				return 316;
			case joaat("META_ANIMAL_OUTFIT_PRONGHORNBAJAM_001"):
				return 233;
			case 2098224441:
				return 4613;
			case joaat("META_OUTFIT_TUMBLEWEED_VAR_01"):
				return 421;
			case 2099062422:
				return 121;
			case joaat("HAT_MR1_049_ALT02"):
				return 4726;
			case joaat("MP_WGNBRKOUT_MACFARLANES_PVP_01"):
				return 3136;
			case 2100664316:
				return 4208;
			case 2101355929:
				return 3358;
			case 2102943525:
				return 5564;
			case 2103117654:
				return 2357;
			case 2104553123:
				return 6065;
			case 2104655330:
				return 1327;
			case 2105464205:
				return 5927;
			case 2105570648:
				return 4930;
			case 2106064285:
				return 414;
			case 2106813965:
				return 1497;
			case 2107218540:
				return 3740;
			case joaat("MP_WGNTHIEF_GRIZZLIES_PVP_02"):
				return 3157;
			case 2107458114:
				return 5048;
			case 2107826708:
				return 3760;
			case 2108044333:
				return 2423;
			case 2108756715:
				return 182;
			case joaat("META_ANIMAL_OUTFIT_PRONGHORNBAJA_001"):
				return 230;
			case 2109321344:
				return 1685;
			case joaat("MP_CONVOY_FORTMERCER_RCP_01"):
				return 2283;
			case 2110787707:
				return 2566;
			case 2111449038:
				return 905;
			case 2112435985:
				return 345;
			case 2112512593:
				return 5273;
			case 2114692671:
				return 2669;
			case joaat("MP_STEALHORSE_PLEASANCE_PVP_01"):
				return 3085;
			case 2114850031:
				return 4944;
			case 2115003825:
				return 1322;
			case 2116375554:
				return 1105;
			case 2116903526:
				return 3207;
			case joaat("MP_RECOVER_GRIZZLIES_01"):
				return 1970;
			case 2117888714:
				return 1869;
			case 2118550809:
				return 1517;
			case joaat("MP_ONTHEHUNT_MACFARLANERANCH_02"):
				return 1945;
			case 2123392559:
				return 6010;
			case joaat("MP_GENERIC_NEWAUSTIN_MC_FR_03"):
				return 1844;
			case joaat("MAGICLANTERN_PROJECTOR_VAL_01"):
				return 4323;
			case joaat("META_OUTFIT_ANIMAL_POSSUM_001"):
				return 227;
			case 2125074568:
				return 961;
			case 2125476129:
				return 4592;
			case 2126701981:
				return 5457;
			case 2126839451:
				return 702;
			case joaat("MP_INTRO_SKINNER_03"):
				return 2542;
			case joaat("MP_CHU_KID_VALENTINE_VIP_01"):
				return 2171;
			case joaat("MP_POST_MULTIPACKAGE_SIXPOINTCABIN_01"):
				return 2777;
			case 2131049655:
				return 6076;
			case 2131255687:
				return 512;
			case 2131639183:
				return 1199;
			case 2132230518:
				return 1191;
			case 2132468147:
				return 5112;
			case 2132733042:
				return 1553;
			case joaat("MP_POST_MULTIPACKAGE_THIEVESLANDING_01"):
				return 2810;
			case 2133356367:
				return 3664;
			case 2133363756:
				return 675;
			case 2133425192:
				return 5806;
			case 2133548596:
				return 3862;
			case 2134404948:
				return 2957;
			case 2134527857:
				return 5199;
			case 2135501901:
				return 5575;
			case 2135582760:
				return 3913;
			case joaat("MP_ASN_CIVILWARFORT_TAR_04"):
				return 2003;
			case 2136061081:
				return 1250;
			case joaat("MP_ASN_CHOLLASPRINGS_TAR_01"):
				return 2451;
			case 2140146484:
				return 5893;
			case 2141256748:
				return 5573;
			case joaat("META_OUTFIT_ANIMAL_LEGENDARY_LAKESTURGEON"):
				return 142;
			case joaat("MP_CHU_ROB_BLACKWATER_VIP_04"):
				return 2189;
			case 2143079032:
				return 5621;
			case 2143452249:
				return 1893;
			case 2143787213:
				return 1155;
			case joaat("META_ANIMAL_OUTFIT_BIGHORNSHEEPROCKY_001"):
				return 44;
			case 2145312194:
				return 1724;
			case 2145919745:
				return 3283;
			case 2146512102:
				return 2686;
			case joaat("META_OUTFIT_ANIMAL_MOOSE_M_001"):
				return 209;
			default:
				break;
		}
		if (iParam1 >= 1)
		{
		}
		return -1;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_234(vector3 vParam0, var uParam3, float fParam4)
{
	struct<5> Var0;
	struct<5> Var5;

	if (!func_301(&Var0, vParam0))
	{
		return 0;
	}
	Var0.f_2 = 1078091189;
	Var0.f_3 = vParam0.z;
	Var0.f_4 = 0;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var5 = { Var0 };
		Var5.f_2 = -1420258246;
		DATAFILE::_DATAFILE_GET_VECTOR(uParam3, &Var5);
		Var5 = { Var0 };
		Var5.f_2 = 1073571568;
		DATAFILE::_DATAFILE_GET_FLOAT(fParam4, &Var5);
		return 1;
	}
	return 0;
}

void func_235(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < cParam3->f_97)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*cParam3)[iVar0 /*4*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD((*cParam3)[iVar0 /*4*/]))
			{
				if (!AUDIO::IS_PED_IN_CURRENT_CONVERSATION(&cParam0, (*cParam3)[iVar0 /*4*/], 0))
				{
					AUDIO::ADD_PED_TO_CONVERSATION(&cParam0, (*cParam3)[iVar0 /*4*/], &((cParam3[iVar0 /*4*/])->f_1));
				}
			}
		}
		iVar0++;
	}
}

void func_236(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_302() - fParam1);
	func_303(uParam0, 1);
	func_304(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_237(int iParam0)
{
	return Global_1107216.f_33[iParam0 /*16*/];
}

int func_238(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return -1;
	}
	if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1131196.f_1091), iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Global_1131196[iVar0 /*27*/].f_9 == iParam0 && Global_1131196[iVar0 /*27*/] != 3)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_239(var uParam0, var uParam1)
{
	if (!func_305(uParam0, uParam1))
	{
		return false;
	}
	uParam0->f_2 = -1782208300;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

var func_240(int iParam0)
{
	int iVar0;

	iVar0 = func_307(0, (func_306() - 1), &iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_308(iVar0);
}

int func_241(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = (iParam2 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if ((*uParam1)[iVar2 /*3*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if ((*uParam1)[iVar2 /*3*/] < iParam0)
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

int func_242(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_309(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_243(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_310(&Var1, iParam0))
	{
		iVar0 = ((func_311() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_244(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1257541[iParam0 /*5*/];
}

int func_245(struct<2> Param0)
{
	return func_312(Param0);
}

int func_246(int iParam0, int iParam1)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_310(&Var1, iParam0) && func_313(&Var1, iParam1))
	{
		iVar0 = ((func_314(iParam0) - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_247(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (Global_1257541[iParam0 /*5*/].f_4 + iParam1);
}

Vector3 func_248(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return func_315(vParam3 - vParam0) * Vector(fParam6, fParam6, fParam6);
}

int func_249(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	var uVar0;

	vParam0.f_2 = iParam5;
	if (!DATAFILE::_DATAFILE_GET_INT(&uVar0, &vParam0))
	{
		if (bParam7)
		{
			return iParam8;
		}
	}
	return uVar0;
}

int func_250(vector3 vParam0, var uParam3, var uParam4, int iParam5, int iParam6)
{
	var uVar0;

	vParam0.f_2 = iParam5;
	if (!DATAFILE::_DATAFILE_GET_HASH(&uVar0, &vParam0))
	{
	}
	return uVar0;
}

void func_251(struct<5> Param0, var uParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	int iVar8;

	iVar1 = func_316(1394196983, Param0);
	uVar6 = Param0.f_1;
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Param0.f_1 = uVar6;
		if (!func_185(Param0, &(Param0.f_1), -371275865, iVar0, 0, 1))
		{
		}
		else
		{
			uVar7 = Param0.f_1;
			iVar8 = func_317(Param0);
			iVar3 = func_316(408367626, Param0);
			iVar2 = 0;
			while (iVar2 <= (iVar3 - 1))
			{
				Param0.f_1 = uVar7;
				if (!func_185(Param0, &(Param0.f_1), 1005476533, iVar2, 0, 1))
				{
				}
				else
				{
					iVar4 = func_250(Param0, 1570262717, 1);
					switch (iVar8)
					{
						case joaat("FLAGS"):
							iVar5 = func_124(iVar4, 1);
							break;
						case joaat("ORIGINS"):
							iVar5 = func_318(iVar4);
							break;
						case joaat("DESTINATIONS"):
							iVar5 = func_318(iVar4);
							break;
						default:
							break;
					}
					if (iVar5 == -1)
					{
					}
					else
					{
						switch (iVar8)
						{
							case joaat("FLAGS"):
								func_320(&(uParam5->f_25), func_319(iVar5, 1));
								break;
							case joaat("ORIGINS"):
								func_321(&(uParam5->f_15), iVar5);
								break;
							case joaat("DESTINATIONS"):
								func_321(&(uParam5->f_15.f_5), iVar5);
								break;
							default:
								break;
						}
					}
				}
				iVar2++;
			}
		}
		iVar0++;
	}
}

void func_252(struct<5> Param0, var uParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	if (!func_185(Param0, &(Param0.f_1), -1029131400, 0, 0, 0))
	{
		return;
	}
	uVar3 = Param0.f_1;
	iVar1 = func_316(-1182771454, Param0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Param0.f_1 = uVar3;
		iVar2 = -1;
		if (!func_185(Param0, &(Param0.f_1), -118633223, iVar0, 0, 1))
		{
		}
		else
		{
			iVar2 = func_249(Param0, -1108141625, 1, 1, -1);
			if (iVar2 < 0 || iVar2 > 23)
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam5->f_25.f_2), iVar2);
			}
		}
		iVar0++;
	}
}

int func_253(int iParam0)
{
	return func_323(func_322(iParam0, joaat("UNLOCK_GROUP"), 1));
}

int func_254(int iParam0, int iParam1)
{
	return func_324(iParam0, iParam1);
}

var func_255(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;

	func_325(iParam0, iParam1, joaat("PRIMARY_START"), &uVar0, &uVar1);
	return uVar1;
}

void func_256(int iParam0, int iParam1, var uParam2)
{
	vector3 vVar0;

	if (!func_326(iParam0))
	{
		return;
	}
	if (func_67(iParam0, iParam1, &vVar0))
	{
		vVar0.f_2 = -733480474;
		if (!DATAFILE::_DATAFILE_GET_INT(uParam2, &vVar0))
		{
		}
		vVar0.f_2 = 492825771;
		if (!DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), &vVar0))
		{
		}
		vVar0.f_2 = -839279581;
		if (!DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_2), &vVar0))
		{
		}
		vVar0.f_2 = -640941103;
		if (!DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_3), &vVar0))
		{
		}
	}
}

var func_257(int iParam0)
{
	return Global_1297717[iParam0 /*4*/].f_2;
}

bool func_258(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 36);
}

int func_259(int iParam0)
{
	return Global_1118808[iParam0 /*35*/];
}

bool func_260(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_261(var uParam0, int iParam1)
{
	return func_125(uParam0, iParam1, 3);
}

var func_262(int iParam0)
{
	return Global_1118808[iParam0 /*35*/].f_1;
}

bool func_263(var uParam0)
{
	return true;
}

bool func_264(int iParam0, int iParam1)
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 36)
	{
		return false;
	}
	return func_327(iParam0, iParam1);
}

bool func_265(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 90);
}

bool func_266(int iParam0, int iParam1)
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	if (!func_265(iParam1))
	{
		return false;
	}
	return func_328(iParam0, iParam1);
}

int func_267(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (iParam0 == func_237(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_268(int iParam0)
{
	return Global_1128574[iParam0 /*56*/].f_47;
}

void func_269(var uParam0)
{
	MISC::_COPY_MEMORY(uParam0, &(Global_1109804.f_21.f_40.f_1), 33);
}

bool func_270(int iParam0, vector3 vParam1, bool bParam4)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
		}
		else if (GANG::_0x901E0DC25080C8B9(iVar1) == iParam0)
		{
		}
		else if (func_329(iVar1))
		{
		}
		else if (!bParam4 && !func_330(iVar1, vParam1))
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_271(int iParam0, int iParam1)
{
	vector3 vVar0;

	if (func_273(func_331(iParam0, iParam1)))
	{
		return 0;
	}
	if (!func_332(iParam0, &vVar0, iParam1))
	{
		return 1;
	}
	vVar0.f_2 = -146546566;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar0.f_1), &vVar0))
	{
		return 1;
	}
	return DATAFILE::_DATAFILE_GET_NUM_CHILDREN(vVar0.x, vVar0.y) + 1;
}

Vector3 func_272(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	struct<4> Var3;

	if (iParam2 == 0)
	{
		return func_331(iParam0, iParam1);
	}
	iParam2 = (iParam2 - 1);
	if (!func_332(iParam0, &Var3, iParam1))
	{
		return vVar0;
	}
	Var3.f_2 = -146546566;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var3.f_1), &Var3))
	{
		return vVar0;
	}
	Var3.f_2 = -733684727;
	Var3.f_3 = iParam2;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var3.f_1), &Var3))
	{
		return vVar0;
	}
	Var3.f_2 = -134912699;
	DATAFILE::_DATAFILE_GET_VECTOR(&vVar0, &Var3);
	return vVar0;
}

bool func_273(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

Vector3 func_274(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

void func_275(struct<2> Param0, int iParam2, int iParam3)
{
	*iParam2 = func_243(func_242(Param0));
	*iParam3 = func_245(Param0);
}

int func_276(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1257541[iParam0 /*5*/].f_2;
}

int func_277(int iParam0, int iParam1, int iParam2, vector3 vParam3, bool bParam6, bool bParam7, bool bParam8, float fParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	int iVar7;
	vector3 vVar8;
	int iVar11;
	bool bVar12;
	int iVar13;
	int iVar14;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 89)
	{
		return 11;
	}
	if (!func_333())
	{
		return 2;
	}
	iVar1 = func_244(iParam0);
	iVar2 = func_246(iVar1, iParam1);
	if (iVar2 < 0 || iVar2 >= 55)
	{
		return 11;
	}
	if (!bParam7 && func_334(iParam0, iVar2, bParam8, &bVar3))
	{
		if (bVar3)
		{
			return 1;
		}
		else
		{
			return 4;
		}
	}
	if (func_335(iVar1, iParam1))
	{
		vVar4 = { func_336(iVar1, iParam1) };
		iVar7 = func_337(iVar1, iVar2);
		if (!func_338(iVar7, vVar4))
		{
			return 5;
		}
	}
	if (func_339(iParam2) == -1)
	{
		return 6;
	}
	if (fParam9 >= 0f && !func_273(vParam3))
	{
		vVar8 = { func_183(iParam0, iVar2) };
		if (BUILTIN::VDIST(vParam3, vVar8) > fParam9)
		{
			return 12;
		}
	}
	if (func_340(iParam2))
	{
		iVar11 = func_156(GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
		if (!func_19(iVar11))
		{
			return 13;
		}
		if (func_341(iVar11))
		{
			return 14;
		}
	}
	if (func_143(GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))))
	{
		return 15;
	}
	if (bParam6)
	{
		if (iParam2 != joaat("INTRO_MISSION") && func_342(func_109(), func_109(), 0, bParam7))
		{
			return 3;
		}
		bVar12 = false;
		if (!bVar12)
		{
			iVar13 = func_343(iParam0, iVar2);
			if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar13))
			{
				return 8;
			}
			if (!UNLOCK::_UNLOCK_IS_VISIBLE(iVar13))
			{
				return 7;
			}
			iVar14 = func_344(iParam0, iVar2);
			if (iVar14 != 0)
			{
				if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar14))
				{
					return 10;
				}
				if (!UNLOCK::_UNLOCK_IS_VISIBLE(iVar14))
				{
					return 9;
				}
			}
		}
	}
	return 0;
}

bool func_278(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_345(uParam0, uParam1, iParam2, 1))
	{
		return false;
	}
	uParam0->f_2 = 856637467;
	uParam0->f_3 = iParam3;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

bool func_279(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	if (!func_346(uParam0, uParam4, iParam1))
	{
		return false;
	}
	iVar1 = func_347(*uParam0, 1333416092);
	uVar3 = uParam0->f_1;
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		uParam0->f_1 = uVar3;
		if (!func_348(uParam0, iVar0))
		{
		}
		else
		{
			iVar2 = func_349(*uParam0);
			if (iParam3 != func_350(iVar2))
			{
			}
			else if (func_351(*uParam0, iParam2))
			{
			}
			else
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_280(var uParam0)
{
	uParam0->f_2 = -34107655;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

bool func_281(var uParam0, var uParam1, int iParam2)
{
	uParam0->f_2 = 1808784790;
	uParam0->f_3 = uParam1;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

int func_282(vector3 vParam0, var uParam3, var uParam4)
{
	var uVar0;

	vParam0.f_2 = 271069761;
	if (!DATAFILE::_DATAFILE_GET_HASH(&uVar0, &vParam0))
	{
		return 0;
	}
	return uVar0;
}

int func_283()
{
	return Global_1051252.f_12;
}

char* func_284()
{
	return "unnamed";
}

int func_285(int iParam0)
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

bool func_286(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return func_352(36, iParam0);
}

int func_287(int iParam0)
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

bool func_288(int iParam0)
{
	if (func_353(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) != 1)
		{
			func_354(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) == 1;
}

int func_289()
{
	return 0;
}

int func_290()
{
	return 0;
}

int func_291(var uParam0, bool bParam1, bool bParam2, var uParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	if (bParam1)
	{
		iVar2 |= 8;
	}
	if (bParam2)
	{
		iVar2 |= 16;
	}
	func_275(*uParam0, &iVar0, &iVar1);
	func_355(iVar0, &uVar3, uParam3);
	func_356(uParam3, iVar0, &uVar3, iVar1, iVar2, iParam4);
	return 0;
}

void func_292(var uParam0)
{
	if (Global_1051252.f_16[0] == 0 || !SCRIPTS::_DOES_THREAD_EXIST(Global_1051252.f_16[0]))
	{
		return;
	}
	*uParam0 = 9;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_TRIGGER_SCRIPT_EVENT_2(uParam0, 31, 33, Global_1051252.f_16[0]);
}

struct<2> func_293(int iParam0)
{
	return Global_1900736.f_1[iParam0 /*2*/];
}

int func_294(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_295(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*iParam0 |= -2147483648;
	}
	else
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*iParam0 = (*iParam0 - *iParam0 & -2147483648);
	}
}

void func_296(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_297(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_225(*iParam0);
	iVar1 = func_224(*iParam0);
	if (iParam1 < 1 || iParam1 > func_230(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_298(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_299(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_300(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

bool func_301(var uParam0, struct<2> Param1, var uParam3)
{
	var uVar0;

	if (Param1.f_1 == 0)
	{
		return false;
	}
	uVar0 = func_357(Param1.f_1);
	if (!DATAFILE::_0x7907969497EA92F5(uVar0) || !DATAFILE::_0x603AC35FD4602C76(uVar0))
	{
		return false;
	}
	*uParam0 = uVar0;
	uParam0->f_2 = -80782076;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	return true;
}

float func_302()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_303(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_304(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_305(var uParam0, var uParam1)
{
	var uVar0;

	if (!DATAFILE::_0x603AC35FD4602C76(uParam1))
	{
		return false;
	}
	*uParam0 = uParam1;
	uParam0->f_1 = uVar0;
	return true;
}

int func_306()
{
	return Global_1109804.f_5737.f_632;
}

int func_307(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam0 > iParam1)
	{
		return -1;
	}
	iVar0 = ((iParam0 + iParam1) / 2);
	if (*iParam2 < Global_1109804.f_5737.f_451[iVar0 /*2*/])
	{
		return func_307(iParam0, (iVar0 - 1), iParam2);
	}
	if (*iParam2 > Global_1109804.f_5737.f_451[iVar0 /*2*/])
	{
		return func_307(iVar0 + 1, iParam1, iParam2);
	}
	return iVar0;
}

var func_308(int iParam0)
{
	return Global_1109804.f_5737.f_451[iParam0 /*2*/].f_1;
}

bool func_309(struct<2> Param0, var uParam2)
{
	if (!func_31(Param0))
	{
		return false;
	}
	func_358(uParam2);
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

bool func_310(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541.f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (DATAFILE::_0x603AC35FD4602C76(*uParam0) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

int func_311()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	vVar1.x = Global_1257541.f_8863;
	vVar1.f_2 = -1041770777;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar1.f_1), &vVar1))
	{
		iVar0 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(vVar1.x, vVar1.y);
	}
	return iVar0;
}

int func_312(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_309(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

bool func_313(var uParam0, int iParam1)
{
	uParam0->f_2 = 775488648;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_314(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	if (func_310(&vVar1, iParam0))
	{
		vVar1.f_2 = 866900867;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar1.f_1), &vVar1))
		{
			iVar0 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(vVar1.x, vVar1.y);
		}
	}
	return iVar0;
}

Vector3 func_315(vector3 vParam0)
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

int func_316(int iParam0, vector3 vParam1, var uParam4, var uParam5)
{
	vParam1.f_2 = iParam0;
	return DATAFILE::_DATAFILE_GET_NUM_NODES(&vParam1);
}

int func_317(struct<5> Param0)
{
	return func_250(Param0, -419812745, 1);
}

int func_318(int iParam0)
{
	struct<4> Var0;
	int iVar5;
	int iVar6;

	Var0 = Global_1071686.f_28448[30 /*4*/].f_3;
	Var0.f_2 = 0;
	DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0);
	iVar5 = DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
	Var0.f_2 = 2;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0);
	iVar6 = DATAFILE::_0xE13634BB6BAF0734(Var0, Var0.f_1);
	return ((iVar5 - iVar6) - 1);
}

int func_319(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("MULTI_GANG");
		case 1:
			return joaat("INSTANCED");
		case 2:
			return joaat("HAS_INTRO_CUTSCENE");
		case 3:
			return joaat("HAS_FLOW_FADE");
		case 4:
			return -775927147;
		case 5:
			return -2001405328;
		case 6:
			return 1042373141;
		case 7:
			return joaat("NO_PVP");
		case 8:
			return joaat("MULTIPLE_OBJECTIVES_1");
		case 9:
			return joaat("MULTIPLE_OBJECTIVES_2");
		case 10:
			return joaat("MULTIPLE_OBJECTIVES_3");
		case 11:
			return joaat("MULTIPLE_OBJECTIVES_4");
		case 12:
			return -1348549877;
		case 13:
			return -1040947274;
		case 14:
			return 1803795142;
		case 15:
			return joaat("REQUIRES_PLAYER_TARGET");
		case 16:
			return joaat("REQUIRES_POSSE_TARGET");
		case 17:
			return joaat("SETUP_MISSION_0");
		case 18:
			return joaat("SETUP_MISSION_1");
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

void func_320(var uParam0, int iParam1)
{
	if (func_359(uParam0, func_124(iParam1, 1), 1))
	{
	}
}

void func_321(var uParam0, int iParam1)
{
	if (func_359(uParam0, iParam1, 4))
	{
	}
}

var func_322(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;

	if (!func_360(iParam0))
	{
		return 0;
	}
	if (!func_361(&Var0))
	{
		return 0;
	}
	if (!func_362(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_362(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_362(Var0, &(Var0.f_1), 22, 0, 0, 1))
	{
		return 0;
	}
	if (!func_362(Var0, &(Var0.f_1), 23, iParam1, 0, iParam2))
	{
		return 0;
	}
	return func_363(Var0, 53, 1);
}

int func_323(int iParam0)
{
	switch (iParam0)
	{
		case joaat("UNLOCK_GROUP__MISSION_STORY"):
			return 2;
		case joaat("UNLOCK_GROUP__MISSION_PROCEDURAL"):
			return 3;
		case joaat("UNLOCK_GROUP__MISSION_FETCH"):
			return 4;
		case joaat("UNLOCK_GROUP__MISSION_MINIGAME"):
			return 5;
		case 634321112:
			return 8;
		case joaat("UNLOCK_GROUP__MISSION_UGC"):
			return 7;
		case joaat("UNLOCK_GROUP__MISSION_FREE_MODE_EVENT"):
			return 6;
		default:
			break;
	}
	return -1;
}

int func_324(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	if (!func_360(iParam0))
	{
		return joaat("NONE");
	}
	if (!func_361(&Var1))
	{
		return joaat("NONE");
	}
	if (!func_362(Var1, &(Var1.f_1), 13, 0, 0, 1))
	{
		return joaat("NONE");
	}
	if (!func_362(Var1, &(Var1.f_1), 14, iParam0, 0, 1))
	{
		return joaat("NONE");
	}
	if (!func_362(Var1, &(Var1.f_1), 33, 0, 0, 0))
	{
		return joaat("NONE");
	}
	if (!func_362(Var1, &(Var1.f_1), 34, joaat("HONOR"), 0, 0))
	{
		return joaat("NONE");
	}
	iVar0 = func_364(Var1, 4);
	if (iVar0 != 1)
	{
		return joaat("NONE");
	}
	if (!func_362(Var1, &(Var1.f_1), 35, 0, 0, 1))
	{
		return joaat("NONE");
	}
	uVar6 = func_365(Var1);
	if (iParam1 == 0)
	{
	}
	else if (func_362(Var1, &(Var1.f_1), 30, 0, 0, 0))
	{
		if (func_362(Var1, &(Var1.f_1), 31, iParam1, 0, 0))
		{
			uVar6 = func_365(Var1);
		}
	}
	return uVar6;
}

int func_325(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	struct<5> Var0;

	if (!func_360(iParam0))
	{
		*uParam3 = -1;
		*uParam4 = joaat("NONE");
		return 0;
	}
	if (!func_361(&Var0))
	{
		*uParam3 = -1;
		*uParam4 = joaat("NONE");
		return 0;
	}
	if (!func_362(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		*uParam3 = -1;
		*uParam4 = joaat("NONE");
		return 0;
	}
	if (!func_362(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		*uParam3 = -1;
		*uParam4 = joaat("NONE");
		return 0;
	}
	if (!func_362(Var0, &(Var0.f_1), 28, 0, 0, 0))
	{
		*uParam3 = -1;
		*uParam4 = joaat("NONE");
		return 0;
	}
	if (!func_362(Var0, &(Var0.f_1), 29, iParam2, 0, 0))
	{
		*uParam3 = -1;
		*uParam4 = joaat("NONE");
		return 0;
	}
	*uParam3 = func_366(Var0);
	*uParam4 = func_365(Var0);
	if (iParam1 != 0)
	{
		if (func_362(Var0, &(Var0.f_1), 30, 0, 0, 0))
		{
			if (func_362(Var0, &(Var0.f_1), 31, iParam1, 0, 0))
			{
				*uParam3 = func_366(Var0);
				*uParam4 = func_365(Var0);
			}
		}
	}
	if (*uParam3 == 0)
	{
		*uParam3 = -1;
		*uParam4 = joaat("NONE");
		return 0;
	}
	return 1;
}

bool func_326(int iParam0)
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

bool func_327(int iParam0, int iParam1)
{
	return func_125(&(Global_1130367[iParam0 /*7*/]), iParam1, 2);
}

bool func_328(int iParam0, int iParam1)
{
	return func_125(&(Global_1130367[iParam0 /*7*/].f_3), iParam1, 3);
}

bool func_329(int iParam0)
{
	int iVar0;

	if (Global_1056141[iParam0 /*471*/].f_2 != -1)
	{
		return true;
	}
	iVar0 = func_367(iParam0);
	if (iVar0 == 2 || iVar0 == 1)
	{
		return true;
	}
	if (func_368(iParam0, 1))
	{
		return true;
	}
	if (func_369(1, iParam0))
	{
		return true;
	}
	return false;
}

bool func_330(int iParam0, vector3 vParam1)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;

	vVar0 = { func_274(iParam0) };
	if (!func_273(vParam1))
	{
		if (func_273(vVar0))
		{
			return false;
		}
		fVar3 = BUILTIN::VDIST(vVar0, vParam1);
		fVar4 = 1500f;
		fVar5 = 125f;
		if (fVar3 < fVar5)
		{
			return false;
		}
		if (fVar3 > fVar4)
		{
			return false;
		}
	}
	return true;
}

Vector3 func_331(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!func_332(iParam0, &vVar3, iParam1))
	{
		return vVar0;
	}
	vVar3.f_2 = -134912699;
	DATAFILE::_DATAFILE_GET_VECTOR(&vVar0, &vVar3);
	return vVar0;
}

bool func_332(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;

	if (!func_370(iParam0, uParam1))
	{
		return false;
	}
	iVar0 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(*uParam1, uParam1->f_1);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		Var2 = { *uParam1 };
		Var2.f_2 = 1089670230;
		Var2.f_3 = iVar1;
		if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var2.f_1), &Var2))
		{
		}
		else
		{
			Var2.f_2 = 1196324698;
			Var2.f_3 = iParam2;
			if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var2.f_1), &Var2))
			{
			}
			else
			{
				*uParam1 = { Var2 };
				return true;
			}
		}
		iVar1++;
	}
	return false;
}

bool func_333()
{
	if (func_35())
	{
		return false;
	}
	return true;
}

bool func_334(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	vector3 vVar1;
	var uVar4;

	bVar0 = func_371(iParam0, iParam1, 2);
	if (func_372(iParam0, iParam1, bVar0))
	{
		return true;
	}
	vVar1 = { func_183(iParam0, iParam1) };
	if (func_273(vVar1))
	{
		return false;
	}
	uVar4 = func_373(func_244(iParam0), iParam1);
	if ((bParam2 && func_371(iParam0, iParam1, 1)) && func_374(vVar1, uVar4))
	{
		*bParam3 = 1;
		return true;
	}
	return func_375(vVar1, uVar4, bVar0);
}

bool func_335(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_310(&Var1, iParam0) && func_313(&Var1, iParam1))
	{
		func_376(Var1, -528314399, &iVar0, 0);
	}
	return iVar0;
}

Vector3 func_336(int iParam0, int iParam1)
{
	vector3 vVar0;
	struct<5> Var3;

	if (func_310(&Var3, iParam0) && func_313(&Var3, iParam1))
	{
		func_377(Var3, -370006557, &vVar0, 1);
	}
	return vVar0;
}

int func_337(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	int iVar6;

	iVar0 = 0;
	if (func_310(&Var1, iParam0))
	{
		if (func_378(&Var1, iParam1))
		{
			func_379(Var1, 1342438652, &iVar0, 0);
		}
	}
	iVar6 = 0;
	if (iVar0 != 0)
	{
		iVar6 = func_380(iVar0);
	}
	return iVar6;
}

bool func_338(int iParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;

	if (func_273(vParam1))
	{
		return false;
	}
	if (func_381(iParam0))
	{
		return false;
	}
	fVar0 = 5f;
	fVar1 = func_382(iParam0);
	if (fVar1 > 300f)
	{
		fVar1 = 300f;
	}
	if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(PLAYER::PLAYER_ID(), vParam1, fVar0, fVar1))
	{
		return false;
	}
	if (NETWORK::IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(vParam1, fVar0, fVar1))
	{
		return false;
	}
	fVar1 = (fVar1 * 0.75f);
	if (fVar1 < 150f)
	{
		fVar1 = 150f;
	}
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 <= 31)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar5);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
			iVar3 = PLAYER::GET_PLAYER_PED(iVar2);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				fVar4 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar3, false, false), vParam1);
				if (fVar4 < fVar1 && !func_383(iParam0))
				{
					return false;
				}
			}
		}
		iVar5++;
	}
	return true;
}

int func_339(int iParam0)
{
	int iVar0;

	if (!func_384(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (func_385(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_340(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CAMP_RESUPPLY"):
		case joaat("CAMP_SETUP"):
		case joaat("CAMP_RAID"):
		case joaat("CAMP_SELL"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_341(int iParam0)
{
	if (!func_19(iParam0))
	{
		return false;
	}
	return (func_386(iParam0) && Global_1131196[iParam0 /*27*/].f_18.f_1 != 0);
}

bool func_342(struct<2> Param0, struct<2> Param2, bool bParam4, bool bParam5)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!bParam4)
	{
		if (func_35())
		{
			return true;
		}
	}
	Var0 = -1;
	Var0.f_1 = -1;
	if (!func_31(Param2))
	{
		Var0 = { func_387() };
	}
	else
	{
		Var0 = { Param2 };
	}
	if ((!bParam5 && func_31(Var0)) && !func_32(Var0, Param0))
	{
		return true;
	}
	Var2 = { func_220() };
	if (func_31(Var2) && (!func_31(Var2) || !func_32(Param0, Var2)))
	{
		return true;
	}
	return false;
}

int func_343(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_247(iParam0, iParam1);
	return Global_1257541.f_451[iVar0 /*7*/];
}

int func_344(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_247(iParam0, iParam1);
	return Global_1257541.f_451[iVar0 /*7*/].f_1;
}

bool func_345(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_107(uParam0, uParam1))
	{
		return false;
	}
	if (!func_388(uParam0, iParam2, iParam3))
	{
		return false;
	}
	return true;
}

bool func_346(var uParam0, var uParam1, int iParam2)
{
	if (!func_389(uParam0, uParam1))
	{
		return false;
	}
	uParam0->f_2 = -1519814088;
	uParam0->f_3 = iParam2;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

int func_347(vector3 vParam0, var uParam3, var uParam4, int iParam5)
{
	vParam0.f_2 = iParam5;
	return DATAFILE::_DATAFILE_GET_NUM_NODES(&vParam0);
}

bool func_348(var uParam0, int iParam1)
{
	uParam0->f_2 = 1969053457;
	uParam0->f_3 = iParam1;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

int func_349(vector3 vParam0, var uParam3, var uParam4)
{
	var uVar0;

	vParam0.f_2 = 271069761;
	if (!DATAFILE::_DATAFILE_GET_HASH(&uVar0, &vParam0))
	{
		return 0;
	}
	return uVar0;
}

int func_350(int iParam0)
{
	switch (iParam0)
	{
		case joaat("INTRO"):
			return 0;
		case joaat("JOB_BRIEF"):
			return 1;
		case joaat("JOB_BRIEF_ALT"):
			return 2;
		default:
			break;
	}
	return -1;
}

bool func_351(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	if (!func_390(&uParam0))
	{
		return false;
	}
	if (!func_391(&uParam0, iParam5))
	{
		return false;
	}
	return true;
}

bool func_352(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_125(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 == func_392())
	{
		return func_125(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1296859.f_22[iParam1])
	{
		return func_125(&(Global_1100469[iParam1 /*53*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_353(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_354(int iParam0)
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
		func_393(iParam0);
		return;
	}
	if (Global_1071686.f_21416.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_394(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 1;
}

void func_355(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = func_276(iParam0);
	switch (iVar0)
	{
		case joaat("CAMP_SELL"):
			func_395(uParam1);
			break;
		case joaat("MOONSHINE_SELL"):
			func_396(uParam1, uParam2);
			break;
	}
}

void func_356(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<22> Var0;

	Var0.f_5 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_14.f_1 = -1;
	Var0.f_21 = 6;
	func_397(&Var0, iParam1, func_246(func_244(iParam1), iParam3), iParam4, iParam5);
	MISC::_COPY_MEMORY(&(Var0.f_14), iParam0, 4);
	MISC::_COPY_MEMORY(&(Var0.f_8), iParam2, 2);
	func_398(&Var0);
}

var func_357(int iParam0)
{
	int iVar0;
	var uVar1;

	switch (iParam0)
	{
		case joaat("HENNIGANS_STEAD_CAMP"):
		case joaat("RIO_BRAVO_CAMP"):
		case joaat("ROANOKE_RIDGE_CAMP"):
		case joaat("GREAT_PLAINS_CAMP"):
		case joaat("CUMBERLAND_FOREST_CAMP"):
		case joaat("TALL_TREES_CAMP"):
		case joaat("CHOLLA_SPRINGS_CAMP"):
		case joaat("GRIZZLIES_CAMP"):
		case joaat("GAPTOOTH_RIDGE_CAMP"):
		case joaat("BAYOU_NAWAS_CAMP"):
		case joaat("SCARLETT_MEADOWS_CAMP"):
		case joaat("HEARTLAND_CAMP"):
		case joaat("BIG_VALLEY_CAMP"):
			iVar0 = func_399(iParam0, 1);
			return Global_1137047.f_361[iVar0];
		default:
			break;
	}
	return uVar1;
}

void func_358(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

bool func_359(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
	MISC::SET_BIT(uParam0[iVar0], iVar1);
	return !bVar2;
}

bool func_360(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 70);
}

bool func_361(var uParam0)
{
	var uVar0;
	var uVar1;

	uVar0 = func_400();
	if (!DATAFILE::_0x7907969497EA92F5(uVar0))
	{
		return false;
	}
	if (!DATAFILE::_0x603AC35FD4602C76(uVar0))
	{
		return false;
	}
	MISC::_COPY_MEMORY(uParam0, &uVar1, 5);
	*uParam0 = uVar0;
	return true;
}

bool func_362(struct<5> Param0, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	Param0.f_2 = iParam6;
	Param0.f_3 = iParam7;
	Param0.f_4 = iParam8;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(iParam5, &Param0))
	{
		return false;
	}
	return true;
}

var func_363(vector3 vParam0, var uParam3, var uParam4, int iParam5, int iParam6)
{
	var uVar0;

	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, &vParam0))
	{
	}
	return uVar0;
}

int func_364(vector3 vParam0, var uParam3, var uParam4, int iParam5)
{
	vParam0.f_2 = iParam5;
	return DATAFILE::_DATAFILE_GET_NUM_NODES(&vParam0);
}

var func_365(struct<5> Param0)
{
	return func_363(Param0, 56, 1);
}

var func_366(struct<5> Param0)
{
	return func_363(Param0, 54, 1);
}

int func_367(int iParam0)
{
	int iVar0;

	if (!Global_1139381.f_5560)
	{
		return 0;
	}
	if (iParam0 == Global_1296859.f_154[Global_1296859])
	{
		return Global_17411.f_2621.f_2;
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
	return Global_1100469[iVar0 /*53*/].f_48;
}

bool func_368(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return func_42(Global_1298536[iVar0 /*87*/].f_86, iParam1);
	}
	return false;
}

bool func_369(int iParam0, int iParam1)
{
	if (iParam1 != 255)
	{
		return (Global_1145091[iParam1 /*35*/].f_23.f_10 && iParam0) != 0;
	}
	return (Global_1139381.f_4779.f_10 && iParam0) != 0;
}

bool func_370(int iParam0, var uParam1)
{
	var uVar0;

	if (iParam0 == -1)
	{
		return false;
	}
	if (!func_401(iParam0))
	{
		return false;
	}
	uVar0 = func_402(iParam0);
	if (!DATAFILE::_0x603AC35FD4602C76(uVar0))
	{
		return false;
	}
	*uParam1 = uVar0;
	uParam1->f_2 = -678729477;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1))
	{
		return false;
	}
	return true;
}

bool func_371(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return false;
	}
	iVar0 = func_247(iParam0, iParam1);
	return func_42(Global_1257541.f_451[iVar0 /*7*/].f_2, iParam2);
}

bool func_372(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	vector3 vVar1;
	var uVar4;

	iVar0 = 0;
	while (iVar0 <= (func_403(iParam0, iParam1) - 1))
	{
		vVar1 = { func_404(func_244(iParam0), iParam1, iVar0) };
		uVar4 = func_405(func_244(iParam0), iParam1, iVar0);
		if (func_273(vVar1))
		{
		}
		else
		{
			if (func_375(vVar1, uVar4, bParam2))
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

var func_373(int iParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	uVar0 = Global_1901947.f_166.f_34;
	if (func_310(&Var1, iParam0) && func_378(&Var1, iParam1))
	{
		func_406(Var1, -364402952, &uVar0, 0);
	}
	return uVar0;
}

bool func_374(vector3 vParam0, float fParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1) && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), false, false), vParam0) < fParam3)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_375(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	if (!bParam4)
	{
		iVar0 = joaat("NET_TRAIN");
	}
	return VOLUME::_0x397769175A7DBB30(vParam0, fParam3, 0, 0, iVar0);
}

int func_376(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_BOOL(iParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_377(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_VECTOR(uParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

bool func_378(var uParam0, int iParam1)
{
	uParam0->f_2 = 333456427;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_379(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;

	vParam0.f_2 = iParam5;
	uVar0 = *iParam6;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, &vParam0))
	{
		*iParam6 = uVar0;
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_380(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PRIMARY"):
			return 0;
		case joaat("SECONDARY"):
			return 1;
		case joaat("TROLLEY"):
			return 2;
	}
	return 0;
}

int func_381(int iParam0)
{
	return func_407(iParam0, 4);
}

float func_382(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 450f;
		case 1:
			return 450f;
		case 2:
			return 250f;
		default:
			break;
	}
	return 450f;
}

bool func_383(int iParam0)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (Global_1138828.f_2[iParam0 /*42*/].f_9 == iVar0 || Global_1138828.f_2[iParam0 /*42*/].f_9 == (iVar0 - 1))
	{
		return true;
	}
	return false;
}

bool func_384(int iParam0)
{
	int iVar0;

	iVar0 = func_408(iParam0);
	if (iVar0 != 0 && func_33(iVar0))
	{
		return false;
	}
	if (iParam0 == joaat("INTRO_MISSION"))
	{
		return func_409();
	}
	return true;
}

bool func_385(int iParam0)
{
	return Global_1237665[iParam0 /*27*/] == -1;
}

bool func_386(int iParam0)
{
	int iVar0;

	if (!func_19(iParam0))
	{
		return false;
	}
	iVar0 = func_410(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

struct<2> func_387()
{
	return Global_1051213;
}

bool func_388(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = -1871400260;
	uParam0->f_3 = iParam1;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

bool func_389(var uParam0, var uParam1)
{
	if (!func_411(uParam0, uParam1))
	{
		return false;
	}
	uParam0->f_2 = -1854922634;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

bool func_390(var uParam0)
{
	uParam0->f_2 = 843787590;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

bool func_391(var uParam0, int iParam1)
{
	uParam0->f_2 = -789427168;
	uParam0->f_3 = iParam1;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

int func_392()
{
	return Global_1102219.f_3672;
}

void func_393(int iParam0)
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
	func_394(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 0;
}

void func_394(int iParam0)
{
	if (Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

void func_395(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 2;
	if (func_412())
	{
		iVar0 = 8;
	}
	else if (func_413())
	{
		iVar0 = 4;
	}
	iVar1 = func_414();
	if (iVar1 <= 10)
	{
		func_415(uParam0, 1);
	}
	else if (iVar1 <= 25 || iVar0 == 2)
	{
		func_415(uParam0, 2);
		if (iVar1 > 25)
		{
			iVar1 = 25;
		}
	}
	else if (iVar1 <= 50 || iVar0 == 4)
	{
		func_415(uParam0, 4);
		if (iVar1 > 50)
		{
			iVar1 = 50;
		}
	}
	else
	{
		func_415(uParam0, 8);
	}
	func_416(uParam0, iVar1);
}

void func_396(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (func_417(Global_1296859, 4096))
	{
		func_415(uParam0, 64);
	}
	else if (func_417(Global_1296859, 2048))
	{
		func_415(uParam0, 32);
	}
	else
	{
		func_415(uParam0, 16);
	}
	iVar0 = uParam1->f_2;
	iVar1 = func_418();
	switch (iVar0)
	{
		case joaat("REGULAR"):
			func_415(uParam0, 512);
			break;
		case joaat("IMPROVED"):
			func_415(uParam0, 1024);
			break;
		case joaat("SPECIAL"):
			func_415(uParam0, 2048);
			break;
		case 1103416334:
			func_415(uParam0, 2048);
			break;
		default:
			if (iVar1 == 0)
			{
				func_415(uParam0, 256);
			}
			else
			{
				func_415(uParam0, 128);
			}
			break;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("ROLE_MOONSHINE_PROGRESSION_COOP_MISSION_05")) && !UNLOCK::_UNLOCK_IS_VISIBLE(joaat("ROLE_MOONSHINE_PROGRESSION_COOP_MISSION_05")))
	{
		func_415(uParam0, 4096);
	}
}

void func_397(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	uParam0->f_4 = 1;
	uParam0->f_6 = iParam1;
	uParam0->f_10 = iParam2;
	uParam0->f_11 = iParam4;
	uParam0->f_13 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	uParam0->f_21[0 /*3*/] = { Global_35 };
	uParam0->f_7 = iParam3;
}

void func_398(var uParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_1051252.f_16[13] == 0 || !SCRIPTS::_DOES_THREAD_EXIST(Global_1051252.f_16[13]))
	{
		return;
	}
	*uParam0 = 175;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_TRIGGER_SCRIPT_EVENT_2(uParam0, 40, 19, Global_1051252.f_16[13]);
	func_419(uParam0, uParam0->f_1);
}

int func_399(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("HENNIGANS_STEAD_CAMP"):
			return 8;
		case joaat("RIO_BRAVO_CAMP"):
			return 9;
		case joaat("ROANOKE_RIDGE_CAMP"):
			return 10;
		case joaat("GREAT_PLAINS_CAMP"):
			return 6;
		case joaat("CUMBERLAND_FOREST_CAMP"):
			return 4;
		case joaat("TALL_TREES_CAMP"):
			return 12;
		case joaat("CHOLLA_SPRINGS_CAMP"):
			return 3;
		case joaat("GRIZZLIES_CAMP"):
			return 0;
		case joaat("GAPTOOTH_RIDGE_CAMP"):
			return 5;
		case joaat("BAYOU_NAWAS_CAMP"):
			return 1;
		case joaat("SCARLETT_MEADOWS_CAMP"):
			return 11;
		case joaat("HEARTLAND_CAMP"):
			return 7;
		case joaat("BIG_VALLEY_CAMP"):
			return 2;
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

var func_400()
{
	return Global_1071686.f_28448[32 /*4*/].f_3;
}

bool func_401(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 == -1)
	{
		return false;
	}
	iVar0 = func_111(iParam0);
	if (iVar0 == -1)
	{
	}
	iVar1 = func_188(iVar0);
	switch (iVar1)
	{
		case 2:
			return true;
		case 1:
			return true;
		default:
			break;
	}
	return false;
}

var func_402(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;

	if (!func_401(iParam0))
	{
		return uVar0;
	}
	iVar1 = func_111(iParam0);
	iVar2 = func_188(iVar1);
	switch (iVar2)
	{
		case 2:
			return func_420(2);
		case 1:
			return func_420(3);
		default:
			break;
	}
	return uVar0;
}

int func_403(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return -1;
	}
	iVar0 = func_247(iParam0, iParam1);
	return Global_1257541.f_451[iVar0 /*7*/].f_6;
}

Vector3 func_404(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	struct<5> Var3;

	if ((func_310(&Var3, iParam0) && func_378(&Var3, iParam1)) && func_421(&Var3, iParam2))
	{
		func_377(Var3, 1702777600, &vVar0, 0);
	}
	return vVar0;
}

var func_405(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<5> Var1;

	uVar0 = Global_1901947.f_166.f_35;
	if ((func_310(&Var1, iParam0) && func_378(&Var1, iParam1)) && func_421(&Var1, iParam2))
	{
		func_406(Var1, -364402952, &uVar0, 0);
	}
	return uVar0;
}

int func_406(vector3 vParam0, int iParam3, var uParam4, int iParam5, float fParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_FLOAT(fParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_407(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)) && func_42(Global_1138411[iVar0 /*13*/][iParam0 /*4*/], iParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_408(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BOUNTY_BOARD"):
		case joaat("GUN_FOR_HIRE"):
		case -697789102:
		case joaat("CAMP_RESUPPLY"):
		case joaat("MOONSHINE_SETUP_GET_SUPPLIES"):
		case joaat("MOONSHINE_MARKETING"):
		case 195932838:
		case joaat("CAMP_SETUP"):
		case joaat("MOONSHINE_SELL"):
		case joaat("BOUNTY_PLAYER"):
		case joaat("MOONSHINE_SETUP_RESCUE_COOK"):
		case joaat("DYNAMIC"):
		case joaat("CAMP_RAID"):
		case joaat("CAMP_SELL"):
			return 1;
		case joaat("AMBUSH"):
		case -1086711901:
		case joaat("MOONSHINE_DYNAMIC"):
		case joaat("HIDEOUT"):
			return 8;
		default:
			break;
	}
	return 0;
}

bool func_409()
{
	return func_422(func_293(0));
}

int func_410(int iParam0)
{
	if (!func_19(iParam0))
	{
		return 0;
	}
	return Global_1132288.f_1[iParam0 /*63*/].f_3;
}

bool func_411(var uParam0, var uParam1)
{
	var uVar0;

	uParam0->f_1 = uVar0;
	*uParam0 = uParam1;
	uParam0->f_2 = 1372075093;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

bool func_412()
{
	return func_423(joaat("UPGRADE_CAMP_DELIVERY_WAGON_LARGE"), 1);
}

bool func_413()
{
	return func_423(joaat("UPGRADE_CAMP_DELIVERY_WAGON_MEDIUM"), 1);
}

int func_414()
{
	return func_425(-735397297, func_424(1), 1784584921, 1, 0, 0);
}

void func_415(var uParam0, int iParam1)
{
	func_426(uParam0, iParam1);
}

void func_416(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

bool func_417(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return func_42(Global_1298536[iParam0 /*87*/].f_19, iParam1);
}

int func_418()
{
	int iVar0;

	if (!func_427(&(Global_1298378.f_62)))
	{
		return 0;
	}
	iVar0 = func_428(Global_1298378.f_62, -268973591, 0, 1);
	return iVar0;
}

void func_419(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = func_429(iVar0);
		if (func_36(uParam0->f_7, iVar1))
		{
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 <= 5)
	{
		iVar2++;
	}
}

var func_420(int iParam0)
{
	return Global_1109804.f_21.f_2.f_1[iParam0];
}

bool func_421(var uParam0, int iParam1)
{
	uParam0->f_2 = 1700129460;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_422(struct<2> Param0)
{
	return func_430(Param0, 1, 4);
}

bool func_423(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_431(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_432(iParam0);
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
			if (!func_433(iParam0, 1))
			{
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_434(iParam0))
			{
				return true;
			}
			break;
	}
	return func_435(iParam0, 0, 0, 0) >= iParam1;
}

struct<4> func_424(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_436(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1293346))
			{
				Global_1293346 = { func_438(joaat("CHARACTER"), func_437(), -1591664384, bParam0) };
			}
			return Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_12)))
			{
				Global_1293346.f_12 = { func_438(joaat("CHARACTER"), func_437(), -1591664384, 0) };
			}
			return Global_1293346.f_12;
		}
	}
	return func_438(joaat("CHARACTER"), func_437(), -1591664384, bParam0);
}

int func_425(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_431(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_439(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_438(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_436(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_436(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

void func_426(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_427(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_428(struct<4> Param0, int iParam4, int iParam5, int iParam6)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_440(Param0, iParam4, &Var0, iParam5, iParam6))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_429(int iParam0)
{
	return BUILTIN::SHIFT_LEFT(1, iParam0);
}

bool func_430(struct<2> Param0, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_31(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_441(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

bool func_431(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_432(int iParam0)
{
	vector3 vVar0;

	if (!func_431(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_433(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_431(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258.f_6)
	{
		return false;
	}
	iVar0 = func_442(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_443("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_444(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_445(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_446(iVar1);
				return true;
			}
			iVar3++;
		}
		func_446(iVar1);
	}
	return false;
}

bool func_434(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_431(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_447(iParam0);
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
	iVar1 = func_448(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_449(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_450(iParam0);
	iVar2 = func_449(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == Global_17411.f_55.f_644.f_1354.f_5[iVar2 /*17*/];
}

int func_435(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_431(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_432(iParam0);
	if (iVar1 == joaat("AMMO") || (bParam1 && iVar1 == joaat("WEAPON")))
	{
		iVar2 = func_442(iParam0, 1);
		if (iVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar2);
		}
	}
	else if (iVar1 == joaat("WEAPON"))
	{
		return func_451(iParam0, 0);
	}
	if (func_439(iParam0, joaat("DEFAULT")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_436(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_452(iParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_436(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

int func_436(bool bParam0)
{
	if (func_28() == -1)
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

struct<4> func_437()
{
	struct<4> Var0;

	return Var0;
}

struct<4> func_438(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_431(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_436(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_439(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

bool func_440(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_436(bParam7);
	if (INVENTORY::_0x033EE4B89F3AC545(iVar0, &uParam0, iParam4) <= iParam6)
	{
		return false;
	}
	if (!INVENTORY::_0xBE012571B25F5ACA(iVar0, &uParam0, iParam4, iParam6, uParam5))
	{
		return false;
	}
	return true;
}

int func_441(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_242(Param0);
	}
	return -1;
}

int func_442(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_431(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_432(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_453(iParam0, 1399091007))
	{
		func_454(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_443(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_436(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_444(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_445(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

int func_446(int iParam0)
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

int func_447(int iParam0)
{
	struct<2> Var0;

	if (!func_431(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_448(int iParam0)
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

int func_449(var uParam0, int iParam1)
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

int func_450(int iParam0)
{
	int iVar0;

	iVar0 = func_447(iParam0);
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

int func_451(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_455(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_457(&Var0, func_456(0));
	}
	if (!func_458(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_446(iVar14);
	return uVar15;
}

struct<4> func_452(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_459(iParam0, bParam1, 0) };
	return func_438(iParam0, Var0, Var0.f_4, bParam1);
}

int func_453(int iParam0, int iParam1)
{
	if (!func_431(iParam0, 0))
	{
		return func_461(func_460(iParam0), iParam1);
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

void func_454(int iParam0, var uParam1, var uParam2)
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

struct<14> func_455(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

struct<4> func_456(bool bParam0)
{
	int iVar0;

	iVar0 = func_436(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_4)))
		{
			Global_1293346.f_4 = { func_438(923904168, func_424(bParam0), -740156546, bParam0) };
		}
		return Global_1293346.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_16)))
		{
			Global_1293346.f_16 = { func_438(923904168, func_424(bParam0), -740156546, 0) };
		}
		return Global_1293346.f_16;
	}
	return func_438(923904168, func_424(bParam0), -740156546, 0);
}

void func_457(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_458(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_436(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

struct<5> func_459(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_424(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_432(iParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_438(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_456(bParam1) };
			if (bParam2 && func_462(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_463(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_463(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_464(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_465(bParam1) };
			switch (func_447(iParam0))
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
			if (func_466(iParam0, -1823706425))
			{
				Var0 = { func_438(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_466(iParam0, -1483207246))
			{
				Var0 = { func_438(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1911121386))
			{
				Var0 = { func_438(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_466(iParam0, -1653629781))
			{
				Var0 = { func_438(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_467(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_466(iParam0, -1653629781))
			{
				Var0 = { func_438(1384535894, Var0, 1784584921, bParam1) };
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

int func_460(int iParam0)
{
	return iParam0;
}

int func_461(int iParam0, int iParam1)
{
	if (!func_468(iParam0, 2))
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

bool func_462(int iParam0, bool bParam1)
{
	if (func_447(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_469();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_463(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_425(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_464(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_470(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_465(bool bParam0)
{
	int iVar0;

	iVar0 = func_436(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_8)))
		{
			Global_1293346.f_8 = { func_438(271701509, func_424(bParam0), 12999093, 0) };
		}
		return Global_1293346.f_8;
	}
	return func_438(271701509, func_424(bParam0), 12999093, 0);
}

bool func_466(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_447(iParam0);
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
			if (func_471(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_467(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_472(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

bool func_468(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

bool func_469()
{
	return (func_473(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_474(func_438(joaat("WARDROBE"), func_424(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_470(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_436(0);
	*uParam1 = { func_438(iParam0, func_456(0), iParam3, 0) };
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

bool func_471(int iParam0, int iParam1, int iParam2)
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

bool func_472(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_436(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

int func_473(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_475(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_436(bParam1), iParam0, iParam3);
}

int func_474(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_476(&uParam0, iParam4, bParam5, iParam6);
}

bool func_475(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_476(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_477(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_477(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_436(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_472(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

