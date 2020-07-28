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
#endregion

void __EntryFunction__()
{
	bool bVar0;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
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
		if (func_2() != -1)
		{
			if (func_5(1, 1))
			{
				bVar0 = true;
			}
			else if (SCRIPTS::_0x9E4EF615E307FBBE())
			{
				bVar0 = true;
			}
			else
			{
				if (func_6())
				{
					func_7();
					func_8();
					func_9();
					func_10();
				}
				BUILTIN::WAIT(0);
			}
			func_1();
		}
	}

void func_1()
{
	func_11();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2()
{
	return Global_1572887->f_13;
}

bool func_3(int iParam0)
{
	return (Global_18 && iParam0) != 0;
}

void func_4()
{
	func_12();
	func_13();
	func_14(0);
	func_15();
}

int func_5(bool bParam0, bool bParam1)
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

int func_6()
{
	if (!func_3(256))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return 0;
	}
	if (Global_1939178->f_6)
	{
		if (func_2() == -1)
		{
			return 0;
		}
	}
	if (Global_1572887->f_9)
	{
		return 0;
	}
	if (func_16(68))
	{
		return 0;
	}
	return 1;
}

void func_7()
{
	struct<7> Var0;
	struct<12> Var7;
	struct<12> Var19;

	func_17();
	func_18();
	func_19(&Var0);
	func_20(0, &Var7);
	func_20(1, &Var19);
	func_21(Var7);
	func_21(Var19);
	func_22(Var7);
	func_22(Var19);
	func_23(Var0, Var7, Var19);
	func_24(0, &Var7);
	func_24(1, &Var19);
	func_25(0, &Var7);
	func_25(1, &Var19);
	func_26();
	func_27(Var0);
	func_28(Var0);
	func_29(Var0);
	func_30();
}

void func_8()
{
	int iVar0;

	if (PED::IS_PED_INJURED(Global_34))
	{
		return;
	}
	if (Global_13)
	{
		return;
	}
	if (func_31())
	{
		return;
	}
	switch (Global_1903007->f_303)
	{
		case 0:
			func_32(0);
			break;
		case 1:
			func_32(1);
			break;
		case 2:
			func_32(6);
			break;
	}
	iVar0 = Global_1903007->f_303;
	iVar0++;
	if (iVar0 >= 3)
	{
		iVar0 = 0;
	}
	Global_1903007->f_303 = iVar0;
}

void func_9()
{
	struct<7> Var0;
	struct<12> Var7;
	struct<12> Var19;
	struct<12> Var31;
	struct<12> Var43;
	int iVar55;

	switch (Global_1903007->f_408)
	{
		case 0:
		case 6:
			func_19(&Var0);
			func_20(0, &Var7);
			func_20(1, &Var19);
			func_20(6, &Var31);
			func_20(5, &Var43);
			func_33(Var0, Var7, 0);
			func_33(Var0, Var19, 1);
			func_33(Var0, Var31, 6);
			func_33(Var0, Var43, 5);
			func_34(Var0);
			func_35(Var0, Var7);
			func_36(Var0, Var7, 0);
			func_36(Var0, Var19, 1);
			func_36(Var0, Var31, 6);
			func_37(0);
			func_37(1);
			func_37(6);
			func_38(Var0, Var7, 0);
			func_38(Var0, Var19, 1);
			func_39(Var7, Var0, 0);
			func_39(Var19, Var0, 1);
			func_40(0);
			func_40(1);
			func_41(Var0, Var7, 0);
			func_41(Var0, Var19, 1);
			func_42(Var0, Var7, 0);
			func_42(Var0, Var19, 1);
			func_43(Var0);
			func_44(Var0);
			func_45();
			func_46();
			func_47(Var0);
			func_48();
			func_49();
			func_50();
			func_51();
			func_52();
			func_53(Var0, Var7, 0);
			func_53(Var0, Var19, 1);
			func_54(Var0, Var7, 0);
			func_54(Var0, Var19, 1);
			func_54(Var0, Var31, 6);
			func_55(Var0, Var7, Var19);
			break;
		case 1:
			func_56();
			break;
		case 2:
			func_57(0, 0);
			func_58(0, 0);
			break;
		case 3:
			func_57(1, 0);
			func_58(1, 0);
			break;
		case 9:
			func_59();
			break;
		case 11:
			func_60();
			break;
		case 4:
			func_61(0);
			break;
		case 5:
			func_61(1);
			break;
		case 7:
			func_61(5);
			break;
		case 8:
			func_62();
			break;
	}
	iVar55 = Global_1903007->f_408;
	iVar55++;
	if (iVar55 >= 12)
	{
		iVar55 = 0;
	}
	Global_1903007->f_408 = iVar55;
}

void func_10()
{
	int iVar0;

	if (PED::IS_PED_INJURED(Global_34))
	{
		return;
	}
	switch (Global_1903007->f_409)
	{
		case 0:
			func_63();
			break;
		case 1:
			func_64();
			break;
		case 2:
			func_65();
			break;
	}
	iVar0 = Global_1903007->f_409;
	iVar0++;
	if (iVar0 >= 3)
	{
		iVar0 = 0;
	}
	Global_1903007->f_409 = iVar0;
}

void func_11()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (func_66(iVar0))
		{
			if (!func_67(iVar0))
			{
				func_68(iVar0);
			}
		}
		iVar0++;
	}
}

void func_12()
{
	PED::_0xED9582B3DA8F02B4(1);
	func_17();
}

int func_13()
{
	int iVar0;

	iVar0 = func_69();
	STREAMING::REQUEST_MODEL(iVar0, false);
	if (!STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		return 0;
	}
	return 1;
}

void func_14(int iParam0)
{
	if (Global_1903007->f_364 != iParam0)
	{
	}
	Global_1903007->f_364 = iParam0;
}

int func_15()
{
	if (!func_71(-1898635967, func_70(), 1))
	{
		return 0;
	}
	if (func_72() || func_73())
	{
		if (!func_71(146323340, func_70(), 0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_16(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

void func_17()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 1;
	if (func_74(0) == 1)
	{
	}
	if (func_74(1) == 1)
	{
		iVar0++;
	}
	if (func_74(5) == 1)
	{
		iVar0++;
	}
	if (func_74(6) == 1)
	{
		iVar0++;
	}
	iVar0 = (iVar0 + func_75(0));
	iVar0 = (iVar0 + func_75(1));
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

void func_18()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_76(iVar0);
		iVar0++;
	}
}

void func_19(var uParam0)
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
	if (ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		uParam0->f_2 = 1;
		if (PED::IS_PED_INJURED(Global_34))
		{
			uParam0->f_4 = 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(Global_34))
		{
			uParam0->f_3 = 1;
		}
		if (PED::IS_PED_ON_MOUNT(Global_34))
		{
			uParam0->f_5 = 1;
			uParam0->f_6 = PED::GET_MOUNT(Global_34);
		}
	}
}

void func_20(int iParam0, int iParam1)
{
	float fVar0;

	iParam0 = func_77(iParam0);
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
	if (func_66(iParam0))
	{
		iParam1->f_1 = 1;
		*iParam1 = func_78(iParam0);
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
			if (iParam1->f_9 == Global_34)
			{
				iParam1->f_10 = 1;
			}
		}
		fVar0 = func_79(iParam0);
		if (func_80(iParam1->f_5, Global_35) <= fVar0)
		{
			iParam1->f_11 = 1;
		}
	}
}

void func_21(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)
{
	if (Param0.f_1)
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(Param0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Param0, true, true);
		}
	}
}

void func_22(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)
{
	if (vParam0.z)
	{
		if (func_81(64))
		{
			PED::SET_PED_RESET_FLAG(vParam0.x, 6, true);
		}
	}
}

void func_23(struct<7> Param0, struct<12> Param7, struct<12> Param19)
{
	if (func_82())
	{
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_WHISTLE"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_WHISTLE_HORSEBACK"), true);
		func_83(Param0, Param7, Param19);
	}
	else
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_WHISTLE"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_WHISTLE_HORSEBACK"), false);
		func_14(1);
	}
	func_84();
}

void func_24(int iParam0, var uParam1)
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
	iVar1 = 388;
	bVar2 = PED::GET_PED_CONFIG_FLAG(*uParam1, iVar1, false);
	if (bVar0 != bVar2)
	{
		PED::SET_PED_CONFIG_FLAG(*uParam1, iVar1, bVar0);
	}
	if (func_85())
	{
		return;
	}
	bVar3 = func_86(iParam0);
	if (uParam1->f_4 != bVar3)
	{
		func_87(iParam0, uParam1->f_4);
		func_88(iParam0);
	}
	if (!uParam1->f_4)
	{
		return;
	}
	if (func_89(iParam0) == 0)
	{
		func_90(iParam0, MISC::GET_GAME_TIMER());
	}
	fVar4 = PED::_GET_PED_REMAINING_REVIVAL_TIME(*uParam1, 0);
	func_91(iParam0, fVar4);
	if (Global_1915180->f_21961)
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
	if (func_92())
	{
		ENTITY::_SET_ENTITY_HEALTH(*uParam1, 0, 0);
	}
}

void func_25(int iParam0, var uParam1)
{
	if (!uParam1->f_1)
	{
		return;
	}
	if (func_85())
	{
		return;
	}
	if (!uParam1->f_2)
	{
		func_93(iParam0);
		return;
	}
}

void func_26()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_94(iVar0);
		iVar0++;
	}
}

void func_27(struct<5> Param0, var uParam5, var uParam6)
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
	if (!PED::IS_PED_ON_MOUNT(Global_34))
	{
		func_95();
		return;
	}
	iVar0 = PED::GET_MOUNT(Global_34);
	if (!func_96(iVar0))
	{
		return;
	}
	if (!func_97())
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
		fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, func_98(), false);
		func_99(vVar1);
		if (fVar4 > 0.01f)
		{
			fVar5 = func_100();
			fVar5 = (fVar5 + fVar4);
			func_101(fVar5);
		}
		if (func_100() >= 40f)
		{
			func_102(1);
		}
	}
	if (!func_97())
	{
		return;
	}
	func_103(iVar0);
}

void func_28(struct<5> Param0, var uParam5, var uParam6)
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
	if (!func_66(6))
	{
		return;
	}
	if (!PED::IS_PED_ON_MOUNT(Global_34))
	{
		return;
	}
	iVar0 = PED::GET_MOUNT(Global_34);
	iVar1 = func_78(6);
	if (iVar0 != iVar1)
	{
		return;
	}
	if (func_104(6) == 0)
	{
		return;
	}
	if (func_66(1))
	{
		func_105(1, 0);
	}
	func_106(1);
	func_107(iVar0);
	func_106(6);
}

void func_29(struct<7> Param0)
{
	int iVar0;
	int iVar1;

	if (!func_108(Param0, &iVar0, 1))
	{
		func_109();
		return;
	}
	iVar1 = MISC::GET_GAME_TIMER();
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1903007->f_402))
	{
		Global_1903007->f_402 = iVar0;
		Global_1903007->f_402.f_1 = iVar1;
	}
	if (Global_1903007->f_402.f_1 + 5000 < iVar1)
	{
		func_110(iVar0);
		func_109();
	}
}

void func_30()
{
	int iVar0;

	if (func_111() > 1)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_EXIT"), false);
		func_112();
	}
	iVar0 = func_111();
	switch (iVar0)
	{
		case 0:
			func_113();
			break;
		case 1:
			func_114();
			break;
		case 2:
			func_115();
			break;
		case 3:
			func_116();
			break;
		case 4:
			func_117();
			break;
		case 5:
			func_118();
			break;
		case 6:
			func_119();
			break;
		case 7:
			func_120();
			break;
	}
	func_121();
}

bool func_31()
{
	return &Global_1956135;
}

void func_32(int iParam0)
{
	int iVar0;

	iParam0 = func_77(iParam0);
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
		if (!func_122(42))
		{
			return;
		}
	}
	iVar0 = Global_1903007[iParam0 /*43*/];
	if (PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	if (Global_13)
	{
		return;
	}
	if (func_31())
	{
		return;
	}
	switch (&Global_1903007->f_410[iParam0])
	{
		case 0:
		case 1:
			func_123(iParam0);
			Global_1903007->f_410[iParam0] = 2;
			break;
		case 2:
			func_124(iParam0);
			Global_1903007->f_410[iParam0] = 3;
			break;
		case 3:
			func_125(iParam0);
			Global_1903007->f_410[iParam0] = 0;
			break;
	}
}

void func_33(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<9> Param7, var uParam16, var uParam17, var uParam18, int iParam19)
{
	if (!Param0.f_3)
	{
		return;
	}
	if (!Param7.f_1)
	{
		return;
	}
	func_126(iParam19, Param7.f_5, Param7.f_8);
}

void func_34(struct<4> Param0, var uParam4, var uParam5, var uParam6)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;

	if (func_81(2048))
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
	iVar1 = func_128(func_127(0));
	switch (iVar1)
	{
		case 2:
		case 3:
		case 4:
			bVar0 = true;
			break;
	}
	bVar2 = false;
	if (!func_122(41))
	{
		bVar2 = true;
	}
	bVar3 = false;
	if (bVar0 || bVar2)
	{
		bVar3 = true;
	}
	iVar4 = 367;
	if (PED::GET_PED_CONFIG_FLAG(Global_34, iVar4, true) != bVar3)
	{
		PED::SET_PED_CONFIG_FLAG(Global_34, iVar4, bVar3);
	}
	bVar5 = false;
	if (bVar0 && !bVar2)
	{
		bVar5 = true;
	}
	iVar4 = 487;
	if (PED::GET_PED_CONFIG_FLAG(Global_34, iVar4, true) != bVar5)
	{
		PED::SET_PED_CONFIG_FLAG(Global_34, iVar4, bVar5);
	}
}

void func_35(struct<5> Param0, var uParam5, var uParam6, struct<5> Param7, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18)
{
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
	if (func_129(Param7, 2043986356))
	{
	}
}

void func_36(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<5> Param7, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	if (func_67(iParam19))
	{
		return;
	}
	bVar0 = false;
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

void func_37(int iParam0)
{
}

void func_38(struct<2> Param0, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<11> Param7, var uParam18, int iParam19)
{
	if (!Param0.f_1)
	{
		return;
	}
	if (!Param7.f_10)
	{
		return;
	}
	if (func_130(iParam19) == -1)
	{
		return;
	}
	func_131(iParam19, -1);
}

void func_39(struct<12> Param0, struct<2> Param12, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	if (func_132())
	{
		return;
	}
	iParam19 = func_77(iParam19);
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
	if (func_130(iParam19) == 1)
	{
		return;
	}
	if (!PLAYER::IS_PLAYER_RIDING_TRAIN(Param12))
	{
		return;
	}
	if (func_133(Param0, 2043986356))
	{
		return;
	}
	func_134(Param0, Global_34);
}

void func_40(int iParam0)
{
	int iVar0;
	int iVar1;

	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_67(iParam0))
	{
		return;
	}
	iVar0 = func_135(iParam0);
	if (SCRIPTS::_DOES_THREAD_EXIST(iVar0))
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
		{
			return;
		}
	}
	if (func_66(iParam0))
	{
		iVar1 = func_78(iParam0);
		func_136(iVar1, 1);
	}
	func_137(iParam0);
}

void func_41(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<5> Param7, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iParam19 = func_77(iParam19);
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
		func_138(iParam19);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		func_138(iParam19);
		return;
	}
	if (func_81(512))
	{
		return;
	}
	if (iVar0 == Global_34)
	{
		return;
	}
	iVar1 = func_139(iParam19);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0);
		if ((iVar2 != -1538724068 && iVar2 != 1391706777) && iVar2 != 1030835986)
		{
			func_140(iParam19, iVar0);
		}
	}
	iVar1 = func_139(iParam19);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if (func_141(Param7, Global_34, 1, 1) > func_79(iParam19))
	{
		func_138(iParam19);
		func_142(iParam19, 2);
	}
}

void func_42(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<5> Param7, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	if (!func_143(iParam19))
	{
		return;
	}
	fVar0 = func_144(Param7);
	bVar1 = false;
	if (fVar0 > 0f)
	{
		bVar1 = true;
	}
	iVar2 = MISC::GET_GAME_TIMER();
	if (!bVar1 || func_145(iParam19) + 30000 < iVar2)
	{
		func_146(iParam19, 0);
		func_147(iParam19, -1);
		if (func_148(16))
		{
			func_149(16);
		}
		if (func_150(16))
		{
			func_151(16);
		}
	}
}

void func_43(struct<5> Param0, var uParam5, var uParam6)
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
	iVar0 = func_152(5);
	if (iVar0 == 0)
	{
		return;
	}
	func_20(5, &vVar1);
	if (iVar0 == 2)
	{
		if (vVar1.y && !vVar1.z)
		{
			func_138(5);
			func_153(5, 1);
		}
		if (vVar1.z)
		{
			if (func_141(vVar1.x, Global_34, 1, 1) > func_79(5) && !ENTITY::IS_ENTITY_ON_SCREEN(vVar1.x))
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
				func_68(5);
				func_154(5, 0);
			}
		}
		if (!vVar1.y && func_74(5) == 1)
		{
			func_154(5, 0);
		}
	}
	if (iVar0 == 0)
	{
		return;
	}
	if (!func_122(41))
	{
		return;
	}
	if (func_74(0) == 1 && func_155() == 0)
	{
		func_105(5, 0);
		func_106(5);
	}
}

void func_44(struct<5> Param0, var uParam5, var uParam6)
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
	if (func_122(41))
	{
		return;
	}
	bVar0 = false;
	if ((func_74(0) == 0 && func_74(5) == 1) && func_152(5) == 1)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		return;
	}
	iVar1 = func_128(func_127(0));
	bVar2 = false;
	if (iVar1 == 2)
	{
		bVar2 = true;
	}
	if (!bVar2)
	{
		if (!func_122(41))
		{
			func_156(41);
			func_156(29);
		}
		if (!func_157(55))
		{
			func_158(1);
		}
	}
}

void func_45()
{
	int iVar0;
	int iVar1;

	iVar0 = func_159(0);
	iVar1 = func_159(1);
	if (Global_1903007->f_404 != 0)
	{
		if (Global_1903007->f_404 != iVar0)
		{
			if (!func_160(Global_1903007->f_404))
			{
				PED::SET_PED_MODEL_IS_SUPPRESSED(Global_1903007->f_404, false);
			}
			Global_1903007->f_404 = 0;
		}
	}
	if (Global_1903007->f_404.f_1 != 0)
	{
		if (Global_1903007->f_404.f_1 != iVar1)
		{
			if (!func_160(Global_1903007->f_404.f_1))
			{
				PED::SET_PED_MODEL_IS_SUPPRESSED(Global_1903007->f_404.f_1, false);
			}
			Global_1903007->f_404.f_1 = 0;
		}
	}
	if (iVar0 != 0)
	{
		if (!PED::_0xAA9F048DCF69B6DC(iVar0))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(iVar0, true);
			Global_1903007->f_404 = iVar0;
		}
	}
	if (iVar1 != 0)
	{
		if (!PED::_0xAA9F048DCF69B6DC(iVar1))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(iVar1, true);
			Global_1903007->f_404.f_1 = iVar1;
		}
	}
}

void func_46()
{
	int iVar0;

	func_161(Global_1903007->f_422);
	iVar0 = Global_1903007->f_422;
	iVar0++;
	if (iVar0 >= 5)
	{
		iVar0 = 0;
	}
	Global_1903007->f_422 = iVar0;
}

void func_47(struct<5> Param0, var uParam5, var uParam6)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;

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
	if (func_85())
	{
		return;
	}
	bVar0 = func_162();
	if (bVar0)
	{
		iVar1 = func_163();
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar1))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
		}
	}
	bVar2 = false;
	if (bVar0)
	{
		bVar2 = func_164(Global_34, iVar1);
	}
	bVar3 = func_122(41);
	bVar4 = false;
	if (bVar0)
	{
		if (bVar2)
		{
			if (func_165() != 1 && !func_166(0))
			{
				func_167(1);
				bVar4 = true;
			}
		}
		else
		{
			if (func_165() == 1 && !func_166(0))
			{
				func_167(2);
				bVar4 = true;
			}
			if (ENTITY::IS_ENTITY_STATIC(iVar1))
			{
				ENTITY::SET_ENTITY_DYNAMIC(iVar1, true);
			}
		}
		vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar1, true, false) };
		func_168(vVar5);
	}
	else
	{
		if (func_165() == 0)
		{
			if (func_155() == 5)
			{
				if (func_66(5))
				{
					vVar8 = { ENTITY::GET_ENTITY_COORDS(func_78(5), false, false) };
					func_168(vVar8);
				}
				else if (bVar3)
				{
					vVar11 = { func_169() };
					func_170(-1);
					func_167(2);
					bVar4 = true;
				}
			}
		}
		if (func_165() == 2)
		{
			vVar14 = { func_169() };
			func_171(vVar14, 0f, 1);
		}
	}
	if (bVar4)
	{
		func_62();
	}
}

void func_48()
{
	vector3 vVar0;
	struct<4> Var12;
	bool bVar19;

	if (!func_66(6))
	{
		return;
	}
	func_20(6, &vVar0);
	if (!vVar0.z)
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&vVar0);
		func_106(6);
		return;
	}
	func_19(&Var12);
	bVar19 = false;
	if (!Var12.f_3)
	{
		bVar19 = true;
	}
	if (func_141(vVar0.x, Global_34, 1, 1) > 100f)
	{
		bVar19 = true;
	}
	if (bVar19)
	{
		func_105(6, 0);
		func_106(6);
	}
}

void func_49()
{
	struct<11> Var0;
	int iVar12;
	int iVar13;
	int iVar14;

	if (!func_66(1))
	{
		func_172();
		return;
	}
	func_20(1, &Var0);
	if (!Var0.f_2)
	{
		func_172();
		return;
	}
	if (func_173(1))
	{
		func_172();
		return;
	}
	if (func_104(1) >= 1)
	{
		func_172();
		return;
	}
	if (!func_174(1))
	{
		func_172();
		return;
	}
	if (Var0.f_10)
	{
		func_172();
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Var0.f_9))
	{
		func_172();
		return;
	}
	iVar12 = MISC::GET_GAME_TIMER();
	if (!func_175())
	{
		iVar13 = func_176();
		if (iVar13 == 0)
		{
			func_177(iVar12);
		}
		else if (iVar13 + 5000 < iVar12)
		{
			func_178(1);
		}
	}
	if (!func_175())
	{
		return;
	}
	if (!func_129(Var0, 518218985))
	{
		TASK::TASK_SMART_FLEE_PED(Var0, Global_34, 500f, -1, 0, 1f, 0);
		PED::SET_PED_KEEP_TASK(Var0, true);
	}
	if (func_179(Var0, -1))
	{
		return;
	}
	iVar14 = func_180();
	if (iVar14 == 0)
	{
		func_181(iVar12);
	}
	else if (iVar14 + 15000 < iVar12)
	{
		func_105(1, 1);
		func_172();
	}
}

void func_50()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34) || PED::IS_PED_INJURED(Global_34))
	{
		return;
	}
	bVar1 = false;
	if (PED::IS_PED_ON_MOUNT(Global_34))
	{
		bVar1 = true;
		iVar0 = PED::GET_MOUNT(Global_34);
	}
	iVar5 = 0;
	while (iVar5 < 7)
	{
		if ((Global_39.f_277.f_1[iVar5 /*431*/])->f_9 == 0)
		{
			if ((Global_39.f_277.f_1[iVar5 /*431*/])->f_426 > -1)
			{
				(Global_39.f_277.f_1[iVar5 /*431*/])->f_426 = -1;
			}
		}
		else
		{
			bVar3 = false;
			bVar4 = false;
			iVar2 = Global_1903007[iVar5 /*43*/];
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
				if ((Global_39.f_277.f_1[iVar5 /*431*/])->f_426 > -1)
				{
					(Global_39.f_277.f_1[iVar5 /*431*/])->f_426 = -1;
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
					if ((Global_39.f_277.f_1[iVar5 /*431*/])->f_426 != iVar7)
					{
						(Global_39.f_277.f_1[iVar5 /*431*/])->f_426 = iVar7;
					}
				}
				else if ((Global_39.f_277.f_1[iVar5 /*431*/])->f_426 == -1)
				{
					(Global_39.f_277.f_1[iVar5 /*431*/])->f_426 = iVar6;
				}
			}
		}
		iVar5++;
	}
}

void func_51()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = 0;
	if (func_182())
	{
		iVar1 = 1;
	}
	if (func_66(0))
	{
		iVar2 = func_78(0);
		PLAYER::_0xA3DB37EDF9A74635(iVar0, iVar2, 31, 2, iVar1);
		PLAYER::_0xA3DB37EDF9A74635(iVar0, iVar2, 32, 2, iVar1);
		PLAYER::_0xA3DB37EDF9A74635(iVar0, iVar2, 33, 2, iVar1);
	}
	if (func_66(1))
	{
		iVar3 = func_78(1);
		PLAYER::_0xA3DB37EDF9A74635(iVar0, iVar3, 31, 2, iVar1);
		PLAYER::_0xA3DB37EDF9A74635(iVar0, iVar3, 32, 2, iVar1);
		PLAYER::_0xA3DB37EDF9A74635(iVar0, iVar3, 33, 2, iVar1);
	}
}

void func_52()
{
	if (func_122(32))
	{
		if (!func_183())
		{
			func_184(1);
		}
	}
	else if (func_183())
	{
		func_184(0);
	}
	if (func_122(33))
	{
		if (!func_185())
		{
			func_186(1);
		}
	}
	else if (func_185())
	{
		func_186(0);
	}
	if (func_122(34))
	{
		if (!func_187())
		{
			func_188(1);
		}
	}
	else if (func_187())
	{
		func_188(0);
	}
}

void func_53(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<5> Param7, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iParam19 = func_77(iParam19);
	if (iParam19 == -1)
	{
		return;
	}
	if (iParam19 >= 7)
	{
		return;
	}
	fVar0 = func_141(Param7, Global_34, 1, 1);
	if (fVar0 > 40f)
	{
		func_88(iParam19);
		return;
	}
	if (!ENTITY::IS_ENTITY_ON_SCREEN(Param7))
	{
		func_88(iParam19);
		return;
	}
	iVar1 = MISC::GET_GAME_TIMER();
	if (!func_189(iParam19))
	{
		func_190(iParam19, iVar1);
		return;
	}
	if (func_191(iParam19) + 15000 < iVar1)
	{
		func_190(iParam19, iVar1);
	}
}

void func_54(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<6> Param7, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iParam19 = func_77(iParam19);
	if (iParam19 == -1)
	{
		return;
	}
	if (iParam19 >= 7)
	{
		return;
	}
	vVar0 = { func_192(iParam19) };
	if (func_193(vVar0))
	{
		return;
	}
	vVar3 = { func_194(iParam19) };
	fVar6 = func_195(iParam19);
	fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param7.f_5, vVar3, true);
	if (fVar7 > 0.01f)
	{
		fVar6 = (fVar6 + fVar7);
		func_196(iParam19, Param7.f_5);
		func_197(iParam19, fVar6);
	}
}

void func_55(struct<7> Param0, struct<12> Param7, struct<12> Param19)
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
	func_198(Param0);
	func_199(Param0);
	func_200(Param0, Param7);
	func_201();
	func_202(Param0, Param7, Param19);
	func_203(Param0);
	func_204(Param0, Param7, Param19);
	func_205(Param0, Param7, Param19);
	func_206();
	func_207(Param0);
	func_208();
	func_209(Param0);
	func_210(Param0);
	func_211(Param0, Param7);
	func_212(Param0, Param7, Param19);
	func_213(Param0);
}

void func_56()
{
	struct<2> Var0;
	var uVar2;

	if (ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34) || PED::IS_PED_INJURED(Global_34))
	{
		return;
	}
	Var0 = { func_127(0) };
	if (func_214(Var0))
	{
		if (Var0 == 2)
		{
			return;
		}
	}
	uVar2 = func_215();
	WEAPON::_0x641351E9AD103890(Global_34, uVar2);
}

void func_57(int iParam0, bool bParam1)
{
	int iVar0;
	struct<95> Var1;
	struct<11> Var96;
	int iVar191;
	var uVar192;
	int iVar196;
	int iVar197;
	int iVar198;
	int iVar199;
	int iVar200;
	var uVar201;
	var uVar202;
	var uVar203;
	var uVar204;
	bool bVar205;
	bool bVar206;
	int iVar207;
	bool bVar208;
	int iVar209;
	bool bVar210;
	bool bVar211;
	int iVar212;

	if (!func_216(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::_0xF49F14462F0AE27C(PLAYER::GET_PLAYER_INDEX());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (PED::_0x8D9BFCE3352DE47F(iVar0))
	{
		return;
	}
	Var1.f_10 = 10;
	Var96.f_10 = 10;
	func_217(&Var1);
	bVar205 = false;
	bVar206 = ((PED::IS_PED_RAGDOLL(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true)) || TASK::IS_PED_IN_WRITHE(iVar0));
	bVar208 = false;
	if (((func_218(10) || func_218(9)) || func_218(29)) || func_218(27))
	{
		bVar208 = true;
	}
	iVar209 = 1;
	bVar210 = false;
	bVar211 = func_219(131072, 255);
	if (!bVar211)
	{
		if (func_220())
		{
			bVar211 = true;
		}
	}
	iVar207 = 0;
	while (iVar207 < 3)
	{
		iVar191 = func_221(iVar207);
		iVar199 = iVar207;
		func_217(&Var1);
		bVar210 = false;
		bVar205 = bVar206;
		iVar197 = (Global_1270530->f_1002.f_245[iVar207 /*4*/])->f_3;
		if (!bVar205)
		{
			if (!PED::_0x608BC6A6AACD5036(Global_1270530->f_1002.f_245[iVar207 /*4*/], iVar0, iVar191, 0))
			{
				if (bParam1 && !Global_1903929->f_129)
				{
				}
				else
				{
					bVar205 = true;
					Jump @368; //curOff = 306
					if (ENTITY::DOES_ENTITY_EXIST(iVar197) && ENTITY::DOES_ENTITY_EXIST((Global_1270530->f_1002.f_245[iVar207 /*4*/])->f_3))
					{
						if (iVar197 != (Global_1270530->f_1002.f_245[iVar207 /*4*/])->f_3)
						{
							bVar205 = true;
							bVar210 = true;
						}
					}
					if (!bVar205)
					{
						iVar196 = (Global_1270530->f_1002.f_245[iVar207 /*4*/])->f_3;
						if (!ENTITY::DOES_ENTITY_EXIST(iVar196))
						{
							bVar205 = true;
						}
					}
					if (!bVar205)
					{
						iVar212 = ENTITY::_0x61914209C36EFDDB(iVar196);
						if (iVar212 != 7)
						{
							bVar205 = true;
							if (!Global_1903929->f_130)
							{
								iVar209 = 0;
							}
							if (&Global_1270530->f_1002.f_241[iVar207] == 7)
							{
								bVar210 = true;
							}
						}
						Global_1270530->f_1002.f_241[iVar207] = iVar212;
					}
					if (!bVar205)
					{
						if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar196))
						{
							bVar205 = true;
						}
					}
					if (!bVar205)
					{
						if (ENTITY::IS_ENTITY_A_PED(iVar196))
						{
							iVar198 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar196);
							if (PED::IS_PED_HUMAN(iVar198))
							{
								bVar205 = true;
							}
							Var1.f_4 = PED::_GET_PED_QUALITY(iVar198);
							Var1.f_9 = PED::_GET_NUM_COMPONENTS_IN_PED(iVar198);
							Var1.f_6 = PED::_GET_PED_DAMAGE(iVar198);
							Var1.f_7 = PED::_GET_PED_DAMAGED(iVar198);
						}
					}
					if (!bVar205)
					{
						Var1 = ENTITY::GET_ENTITY_MODEL(iVar196);
						Var1.f_1 = func_222(iVar196);
						Var1.f_2 = ENTITY::_0xD21C7418C590BB40(iVar196);
						Var1.f_3 = ENTITY::_GET_ENTITY_CARRY_CONFIG(iVar196);
						Var1.f_93 = ENTITY::_0xB16C780C51E51E2B(iVar196);
						if (bVar208)
						{
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar196))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar196);
							}
						}
						if (((Global_39.f_277.f_1[iParam0 /*431*/])->f_15[iVar199 /*95*/])->f_1 != 0)
						{
							if (((Global_39.f_277.f_1[iParam0 /*431*/])->f_15[iVar199 /*95*/])->f_1 != Var1.f_1)
							{
								func_223(iVar0, ((Global_39.f_277.f_1[iParam0 /*431*/])->f_15[iVar199 /*95*/])->f_1, 1, !bVar210, -142743235);
								if (Var1.f_1 != 0)
								{
									if (func_224(iVar0, iParam0, Var1.f_1, iVar207))
									{
										func_225(INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iVar0), Var1.f_1, 1);
									}
									((Global_39.f_277.f_1[iParam0 /*431*/])->f_15[iVar199 /*95*/])->f_1 = Var1.f_1;
								}
								Global_1939231->f_4 = 1;
							}
						}
						else
						{
							Global_1939231->f_4 = 1;
							if (func_224(iVar0, iParam0, Var1.f_1, iVar207))
							{
								func_225(INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iVar0), Var1.f_1, 1);
							}
						}
					}
					else
					{
						if (((Global_39.f_277.f_1[iParam0 /*431*/])->f_15[iVar199 /*95*/])->f_1 != 0)
						{
							Global_1939231->f_4 = 1;
							func_223(iVar0, ((Global_39.f_277.f_1[iParam0 /*431*/])->f_15[iVar199 /*95*/])->f_1, 1, !bVar210, -142743235);
						}
						Global_1270530->f_1002.f_241[iVar207] = 0;
						MISC::_COPY_MEMORY(Global_1270530->f_1002.f_245[iVar207 /*4*/], &uVar192, 4);
						func_226(&Var96, (Global_39.f_277.f_1[iParam0 /*431*/])->f_15[iVar199 /*95*/]);
					}
					else
					{
						if (STREAMING::IS_MODEL_A_PED(Var1))
						{
							Var1.f_8 = PED::_0x30569F348D126A5A(iVar198);
							if (Global_1903929->f_130)
							{
								if (Var1.f_9 <= 1)
								{
								}
								else if (Var1.f_9 > 10)
								{
									Var1.f_9 = 10;
								}
								iVar200 = 0;
								while (iVar200 < Var1.f_9)
								{
									if (iVar200 >= 10)
									{
									}
									else
									{
										if (PED::_0xA9C28516A6DC9D56(iVar198, iVar200, &uVar201, &uVar202, &uVar203, &uVar204))
										{
											Var1.f_10[iVar200 /*8*/] = uVar201;
											(Var1.f_10[iVar200 /*8*/])->f_1 = uVar202;
											(Var1.f_10[iVar200 /*8*/])->f_2 = uVar203;
											(Var1.f_10[iVar200 /*8*/])->f_3 = uVar204;
										}
										if (PED::_0xE7998FEC53A33BBE(iVar198, iVar200, &uVar201, &uVar202, &uVar203, &uVar204))
										{
											(Var1.f_10[iVar200 /*8*/])->f_4 = uVar201;
											(Var1.f_10[iVar200 /*8*/])->f_5 = uVar202;
											(Var1.f_10[iVar200 /*8*/])->f_6 = uVar203;
											(Var1.f_10[iVar200 /*8*/])->f_7 = uVar204;
										}
										iVar200++;
									}
								}
							}
							Var1.f_91 = PERSISTENCE::_0x2E545965DF98D476(iVar196);
							if (PED::_IS_METAPED_USING_COMPONENT(iVar198, 43391475) || ENTITY::_0x8DE41E9902E85756(iVar196))
							{
								Var1.f_92 = 1;
							}
							else
							{
								Var1.f_92 = 0;
							}
							Var1.f_94 = ENTITY::_0x37B01666BAE8F7EF(iVar196);
							if (MISC::_0x5170DDA6D63ACAAA(iVar198))
							{
								TASK::TASK_DUMP_CARRIABLE_FROM_PARENT(Global_34, iVar0, iVar196);
								ENTITY::_0x18FF3110CF47115D(iVar196, 2, 0);
								MISC::_0x674B90BE1115846D(iVar198, 1);
								if (func_228(func_227(iVar198), 82))
								{
									func_229(113, 1);
								}
								func_226(&Var96, (Global_39.f_277.f_1[iParam0 /*431*/])->f_15[iVar199 /*95*/]);
							}
							else
							{
								if (Var1.f_91 >= 12)
								{
									if (func_230() && func_228(func_227(iVar198), 82))
									{
										func_229(112, 0);
									}
								}
								else if (Var1.f_91 >= 2)
								{
									if (func_230() && func_228(func_227(iVar198), 82))
									{
										func_229(111, 0);
									}
								}
								func_226(&Var1, (Global_39.f_277.f_1[iParam0 /*431*/])->f_15[iVar199 /*95*/]);
							}
							iVar207++;
							if (Global_1903929->f_129)
							{
								if (!Global_1903929->f_130)
								{
									if (iVar209 == 1)
									{
										Global_1903929->f_130 = 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}

void func_58(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_216(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::_0xF49F14462F0AE27C(PLAYER::GET_PLAYER_INDEX());
	if (!func_231(iVar0))
	{
		return;
	}
	if (bParam1)
	{
		if (!Global_1903929->f_129)
		{
			return;
		}
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
	}
	PED::_0x6F43C351A5D51E2F(iVar0, &((Global_39.f_277.f_1[iParam0 /*431*/])->f_353));
}

void func_59()
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
		if (!func_66(iVar6))
		{
		}
		else
		{
			iVar7 = func_78(iVar6);
			if (func_232(iVar6))
			{
				if (!func_233(iVar7))
				{
					iVar8 = func_234(iVar6);
					func_235(iVar7, iVar8);
				}
				else
				{
					iVar9 = func_236(iVar6);
					func_237(iVar9, &uVar0, &uVar1, &uVar2, &iVar3, &uVar4, &uVar5);
					if (iVar3 >= 1)
					{
						func_238(iVar7);
						func_239(iVar6);
					}
					else if (!func_233(iVar7))
					{
					}
					else if (!func_232(iVar6))
					{
						uVar10 = func_240(iVar7);
						func_241(iVar6, 1);
						func_242(iVar6, uVar10);
						func_244(iVar6, func_243());
					}
				}
				iVar6++;
			}
		}
	}

void func_60()
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	char cVar10[64];

	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!func_66(iVar0))
		{
		}
		else
		{
			iVar1 = func_159(iVar0);
			if (!func_245(iVar1))
			{
			}
			else
			{
				Var2 = { func_246(iVar0) };
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var2))
				{
				}
				else
				{
					StringCopy(&cVar10, func_247(iVar1), 64);
					StringCopy(&Var2, HUD::_GET_LABEL_TEXT_2(&cVar10), 64);
					if (MISC::IS_STRING_NULL_OR_EMPTY(&Var2))
					{
					}
					else
					{
						func_248(iVar0, Var2);
						func_249(iVar0);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_61(int iParam0)
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
	iVar0 = func_78(iParam0);
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
	if (func_250(iParam0, 64))
	{
		func_251(iParam0);
		return;
	}
	bVar2 = false;
	if (!MAP::DOES_BLIP_EXIST(((*Global_1903007)[iParam0 /*43*/])->f_25) && !MAP::DOES_BLIP_EXIST(((*Global_1903007)[iParam0 /*43*/])->f_26))
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
	bVar3 = func_122(41);
	if (bVar1)
	{
		if (MAP::DOES_BLIP_EXIST(((*Global_1903007)[iParam0 /*43*/])->f_25))
		{
			MAP::REMOVE_BLIP(&(((*Global_1903007)[iParam0 /*43*/])->f_25));
		}
		if (iVar0 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) && bVar3)
		{
			if (!MAP::DOES_BLIP_EXIST(((*Global_1903007)[iParam0 /*43*/])->f_26))
			{
				((*Global_1903007)[iParam0 /*43*/])->f_26 = MAP::_BLIP_ADD_FOR_ENTITY(-515518185, iVar0);
				MAP::SET_BLIP_SPRITE(((*Global_1903007)[iParam0 /*43*/])->f_26, -1327110633, true);
				func_252(&(((*Global_1903007)[iParam0 /*43*/])->f_26));
			}
		}
		else if (MAP::DOES_BLIP_EXIST(((*Global_1903007)[iParam0 /*43*/])->f_26))
		{
			MAP::REMOVE_BLIP(&(((*Global_1903007)[iParam0 /*43*/])->f_26));
		}
		return;
	}
	else if (MAP::DOES_BLIP_EXIST(((*Global_1903007)[iParam0 /*43*/])->f_26))
	{
		MAP::REMOVE_BLIP(&(((*Global_1903007)[iParam0 /*43*/])->f_26));
	}
	bVar4 = false;
	if (PED::IS_PED_ON_MOUNT(Global_34))
	{
		if (Global_1939178->f_34 == iVar0)
		{
			bVar4 = true;
		}
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1903007)[iParam0 /*43*/])->f_25) && bVar4)
	{
		func_251(iParam0);
	}
	if (bVar4)
	{
		return;
	}
	if ((Global_39.f_277.f_1[iParam0 /*431*/])->f_14 == 2)
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
		if (func_104(1) < 1)
		{
			bVar7 = true;
		}
		if (bVar7)
		{
			if (MAP::DOES_BLIP_EXIST(((*Global_1903007)[iParam0 /*43*/])->f_25))
			{
				MAP::REMOVE_BLIP(&(((*Global_1903007)[iParam0 /*43*/])->f_25));
			}
			return;
		}
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1903007)[iParam0 /*43*/])->f_25))
	{
		((*Global_1903007)[iParam0 /*43*/])->f_25 = MAP::_BLIP_ADD_FOR_ENTITY(iVar5, iVar0);
		((*Global_1903007)[iParam0 /*43*/])->f_24 = 0;
		func_253(&(((*Global_1903007)[iParam0 /*43*/])->f_25), bVar6);
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1903007)[iParam0 /*43*/])->f_25))
	{
		return;
	}
	bVar8 = false;
	if (func_250(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = TASK::IS_PED_IN_WRITHE(iVar0);
	bVar10 = false;
	iVar11 = func_139(iParam0);
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
	fVar15 = func_80(vVar12, Global_35);
	bVar16 = false;
	if (fVar15 > func_79(iParam0))
	{
		bVar16 = true;
	}
	iVar17 = 0;
	iVar18 = 0;
	if (bVar8)
	{
		if (((*Global_1903007)[iParam0 /*43*/])->f_24 != 3)
		{
			iVar17 = -401963276;
			((*Global_1903007)[iParam0 /*43*/])->f_24 = 3;
		}
	}
	else if (bVar9)
	{
		fVar19 = PED::_GET_PED_REMAINING_REVIVAL_TIME(iVar0, 1);
		if (bVar16)
		{
			if (fVar19 < 0.25f)
			{
				if (((*Global_1903007)[iParam0 /*43*/])->f_24 != 9)
				{
					iVar17 = 430539302;
					iVar18 = 1313031610;
					((*Global_1903007)[iParam0 /*43*/])->f_24 = 9;
				}
			}
			else if (fVar19 < 0.5f)
			{
				if (((*Global_1903007)[iParam0 /*43*/])->f_24 != 10)
				{
					iVar17 = -995247980;
					iVar18 = 1313031610;
					((*Global_1903007)[iParam0 /*43*/])->f_24 = 10;
				}
			}
			else if (fVar19 < 0.75f)
			{
				if (((*Global_1903007)[iParam0 /*43*/])->f_24 != 11)
				{
					iVar17 = -25056193;
					iVar18 = 1313031610;
					((*Global_1903007)[iParam0 /*43*/])->f_24 = 11;
				}
			}
			else if (fVar19 <= 1f)
			{
				if (((*Global_1903007)[iParam0 /*43*/])->f_24 != 12)
				{
					iVar17 = -264630352;
					iVar18 = 1313031610;
					((*Global_1903007)[iParam0 /*43*/])->f_24 = 12;
				}
			}
		}
		else if (fVar19 < 0.25f)
		{
			if (((*Global_1903007)[iParam0 /*43*/])->f_24 != 5)
			{
				iVar17 = 430539302;
				iVar18 = -1012863186;
				((*Global_1903007)[iParam0 /*43*/])->f_24 = 5;
			}
		}
		else if (fVar19 < 0.5f)
		{
			if (((*Global_1903007)[iParam0 /*43*/])->f_24 != 6)
			{
				iVar17 = -995247980;
				iVar18 = -1012863186;
				((*Global_1903007)[iParam0 /*43*/])->f_24 = 6;
			}
		}
		else if (fVar19 < 0.75f)
		{
			if (((*Global_1903007)[iParam0 /*43*/])->f_24 != 7)
			{
				iVar17 = -25056193;
				iVar18 = -1012863186;
				((*Global_1903007)[iParam0 /*43*/])->f_24 = 7;
			}
		}
		else if (fVar19 <= 1f)
		{
			if (((*Global_1903007)[iParam0 /*43*/])->f_24 != 8)
			{
				iVar17 = -264630352;
				iVar18 = -1012863186;
				((*Global_1903007)[iParam0 /*43*/])->f_24 = 8;
			}
		}
	}
	else if (bVar10)
	{
		if (((*Global_1903007)[iParam0 /*43*/])->f_24 != 4)
		{
			iVar17 = -1380599892;
			((*Global_1903007)[iParam0 /*43*/])->f_24 = 4;
		}
	}
	else if (bVar16)
	{
		if (((*Global_1903007)[iParam0 /*43*/])->f_24 != 2)
		{
			iVar17 = 1313031610;
			((*Global_1903007)[iParam0 /*43*/])->f_24 = 2;
		}
	}
	else if (!bVar16)
	{
		if (((*Global_1903007)[iParam0 /*43*/])->f_24 != 1)
		{
			iVar17 = -1012863186;
			((*Global_1903007)[iParam0 /*43*/])->f_24 = 1;
		}
	}
	if (iVar17 != 0)
	{
		func_254(((*Global_1903007)[iParam0 /*43*/])->f_25);
		func_255(((*Global_1903007)[iParam0 /*43*/])->f_25);
		MAP::_BLIP_SET_MODIFIER(((*Global_1903007)[iParam0 /*43*/])->f_25, iVar17);
		if (iVar17 == -401963276)
		{
			MAP::_BLIP_SET_MODIFIER(((*Global_1903007)[iParam0 /*43*/])->f_25, 231194138);
		}
	}
	if (iVar18 != 0)
	{
		MAP::_BLIP_SET_MODIFIER(((*Global_1903007)[iParam0 /*43*/])->f_25, iVar18);
	}
	if ((PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) == iVar0 && bVar3) && !bVar9)
	{
		MAP::_BLIP_SET_MODIFIER(((*Global_1903007)[iParam0 /*43*/])->f_25, 673950256);
	}
	else
	{
		MAP::_SET_BLIP_FLASH_STYLE(((*Global_1903007)[iParam0 /*43*/])->f_25, 673950256);
	}
	if (func_256(iVar0) && !bVar9)
	{
		if (iVar5 == -1925605092)
		{
			iVar20 = 561559387;
		}
		else if (iVar5 == -1230993421)
		{
			iVar20 = -201249929;
		}
		MAP::_BLIP_SET_MODIFIER(((*Global_1903007)[iParam0 /*43*/])->f_25, iVar20);
	}
	else
	{
		MAP::_SET_BLIP_FLASH_STYLE(((*Global_1903007)[iParam0 /*43*/])->f_25, 561559387);
		MAP::_SET_BLIP_FLASH_STYLE(((*Global_1903007)[iParam0 /*43*/])->f_25, -201249929);
	}
	iVar21 = func_104(iParam0);
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
		MAP::_0x44813684F72B563C(iVar0, ((*Global_1903007)[iParam0 /*43*/])->f_25);
	}
	else
	{
		MAP::_0x97F6F158CC5B5CA2(iVar0, ((*Global_1903007)[iParam0 /*43*/])->f_25);
		MAP::_0x7563CBCA99253D1A(iVar0, iVar22);
	}
}

void func_62()
{
	int iVar0;
	bool bVar1;

	iVar0 = Global_1903007->f_379;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (MAP::DOES_BLIP_EXIST(Global_1903007->f_379.f_1))
		{
			MAP::REMOVE_BLIP(&(Global_1903007->f_379.f_1));
		}
		return;
	}
	if (Global_1939178->f_6)
	{
		return;
	}
	if (PED::IS_PED_INJURED(Global_34))
	{
		return;
	}
	bVar1 = func_164(Global_34, iVar0);
	if (bVar1)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1903007->f_379.f_1))
		{
			MAP::REMOVE_BLIP(&(Global_1903007->f_379.f_1));
		}
	}
	else if (func_165() == 3)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1903007->f_379.f_1))
		{
			MAP::REMOVE_BLIP(&(Global_1903007->f_379.f_1));
		}
	}
	else if (!MAP::DOES_BLIP_EXIST(Global_1903007->f_379.f_1))
	{
		Global_1903007->f_379.f_1 = MAP::_BLIP_ADD_FOR_ENTITY(-515518185, iVar0);
		func_252(&(Global_1903007->f_379.f_1));
	}
}

void func_63()
{
	bool bVar0;
	int iVar1;
	int iVar2;

	func_257(Global_1903007->f_418, Global_1903007->f_419);
	bVar0 = false;
	iVar1 = Global_1903007->f_419;
	iVar1++;
	if (iVar1 >= 2)
	{
		iVar1 = 0;
		bVar0 = true;
	}
	Global_1903007->f_419 = iVar1;
	if (bVar0)
	{
		iVar2 = Global_1903007->f_418;
		iVar2++;
		if (iVar2 > 5)
		{
			iVar2 = 0;
		}
		Global_1903007->f_418 = iVar2;
	}
}

void func_64()
{
	bool bVar0;
	int iVar1;
	int iVar2;

	func_258(Global_1903007->f_420, Global_1903007->f_421);
	bVar0 = false;
	iVar1 = Global_1903007->f_421;
	iVar1++;
	if (iVar1 >= 3)
	{
		iVar1 = 0;
		bVar0 = true;
	}
	Global_1903007->f_421 = iVar1;
	if (bVar0)
	{
		iVar2 = Global_1903007->f_420;
		iVar2++;
		if (iVar2 > 5)
		{
			iVar2 = 0;
		}
		Global_1903007->f_420 = iVar2;
	}
}

void func_65()
{
	int iVar0;

	if (PED::IS_PED_INJURED(Global_34))
	{
		return;
	}
	if (Global_13)
	{
		return;
	}
	if (func_31())
	{
		return;
	}
	switch (Global_1903007->f_303.f_1)
	{
		case 0:
			func_259(0);
			break;
		case 1:
			func_259(1);
			break;
		case 2:
			func_259(6);
			break;
	}
	iVar0 = Global_1903007->f_303.f_1;
	iVar0++;
	if (iVar0 >= 3)
	{
		iVar0 = 0;
	}
	Global_1903007->f_303.f_1 = iVar0;
}

int func_66(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 <= -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1903007[iParam0 /*43*/]))
	{
		return 1;
	}
	return 0;
}

int func_67(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return ((*Global_1903007)[iParam0 /*43*/])->f_2;
}

void func_68(int iParam0)
{
	int iVar0;
	int iVar1;

	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_66(iParam0))
	{
		return;
	}
	iVar0 = func_78(iParam0);
	func_260(iParam0);
	if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	if (PED::_0xAA9F048DCF69B6DC(iVar1))
	{
		if (!func_160(iVar1))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(iVar1, false);
		}
	}
	PED::DELETE_PED(&iVar0);
	func_261(iParam0, 0);
	func_137(iParam0);
}

int func_69()
{
	int iVar0;

	iVar0 = -1427204870;
	return iVar0;
}

struct<4> func_70()
{
	struct<4> Var0;

	Var0 = { func_262(0) };
	return func_263(856287005, Var0, -218846335, 0);
}

int func_71(int iParam0, struct<4> Param1, bool bParam5)
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
			if (func_264(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_265(Var3, Param1, Var12.f_4, 0, 1, 0) > 0)
				{
				}
				else
				{
					func_266(&Var7);
					if (func_267(Var3, &Var7, &Var12, 1, 752097756, 0))
					{
						if (bParam5)
						{
							func_268(Var7, 1);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

bool func_72()
{
	return DLC::IS_DLC_PRESENT(-2112896652);
}

bool func_73()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797);
}

int func_74(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_39.f_277.f_1[iParam0 /*431*/])->f_14;
}

int func_75(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iParam0 = func_77(iParam0);
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
			iVar1 = &(Global_39.f_277.f_1[iParam0 /*431*/])->f_15[iVar2 /*95*/];
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

void func_76(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	var uVar6;
	int iVar7;
	var uVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	struct<2> Var12;
	struct<8> Var14;
	int iVar22;
	int iVar23;

	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_250(iParam0, 1))
	{
		return;
	}
	if (func_269(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	iVar1 = func_78(iParam0);
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
	vVar3 = { func_270(iParam0) };
	uVar6 = func_271(iParam0);
	if (func_193(vVar3))
	{
		return;
	}
	if (!bVar2)
	{
		func_272(iParam0);
		if (!func_273())
		{
			return;
		}
		if (!func_274(iParam0))
		{
			return;
		}
		iVar7 = func_159(iParam0);
		iVar1 = func_275(iVar7, vVar3, uVar6, 0, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			return;
		}
		func_261(iParam0, iVar1);
		func_276(iVar1);
		func_277(iVar1, iParam0);
		func_249(iParam0);
		PED::_SET_PED_OUTFIT_PRESET(iVar1, 0, 0);
		func_278(iParam0);
		func_279(iParam0);
		func_280(iParam0);
		if (iParam0 == 0)
		{
			PLAYER::_0x8FBF9EDB378CCB8C(iVar0, iVar1);
		}
		else if (iParam0 == 1)
		{
			PLAYER::_0x227B06324234FB09(iVar0, iVar1);
		}
		if (func_86(iParam0))
		{
			uVar8 = func_281(iParam0);
			PED::_0x4DB9D03AC4E1FA84(iVar1, uVar8, uVar8, 0);
			TASK::TASK_ANIMAL_WRITHE(iVar1, 0, 1);
		}
		func_154(iParam0, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar7);
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(iVar1))
	{
		return;
	}
	bVar9 = false;
	iVar10 = func_155();
	if (iParam0 == iVar10)
	{
		PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar0, iVar1);
		bVar9 = true;
	}
	iVar11 = func_282(iParam0);
	func_283(iVar1, iVar11);
	Var12 = { func_284(iParam0) };
	if (bVar9)
	{
		Var14 = { func_285() };
	}
	else
	{
		func_286(&Var14);
	}
	iVar22 = func_287(iVar1, 2);
	iVar23 = func_288(iVar22);
	func_289(iParam0, iVar23);
	if (!bVar9 && func_290(iParam0))
	{
		func_291(iVar1, 0);
	}
	func_292(iVar1, &Var12, &Var14, iVar23, 1);
	func_251(iParam0);
	func_61(iParam0);
	func_293(iParam0);
	func_294(iParam0);
}

int func_77(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_39.f_277;
	}
	return iParam0;
}

int func_78(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1903007[iParam0 /*43*/];
}

float func_79(int iParam0)
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

	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_159(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1f;
	}
	iVar1 = func_104(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_104(iParam0) + 1;
	fVar6 = func_295(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(func_296(iVar0, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(func_296(iVar0, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	uVar12 = func_297(fVar3, fVar4, fVar11);
	return uVar12;
}

float func_80(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

bool func_81(int iParam0)
{
	return (Global_1903007->f_302 && iParam0) != 0;
}

int func_82()
{
	if (!func_3(256))
	{
		return 0;
	}
	if (func_298())
	{
		return 0;
	}
	if (func_299() && !func_122(31))
	{
		return 0;
	}
	if (func_81(2) || func_81(4))
	{
		return 0;
	}
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		return 0;
	}
	if (Global_1939178->f_6)
	{
		return 0;
	}
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_34))
	{
		return 0;
	}
	if (PED::_IS_PED_HOGTIED(Global_34))
	{
		return 0;
	}
	if (PED::IS_PED_SWIMMING(Global_34))
	{
		return 0;
	}
	return 1;
}

void func_83(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, vector3 vParam7, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, vector3 vParam19, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
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
		if (func_104(0) >= 1)
		{
			bVar0 = true;
		}
	}
	bVar1 = false;
	if (vParam19.z)
	{
		if (func_104(1) >= 1)
		{
			bVar1 = true;
		}
	}
	iVar2 = MISC::GET_GAME_TIMER();
	switch (func_300())
	{
		case 0:
			func_14(1);
		case 1:
			func_301(0);
			func_302(-72209530);
			func_303(0, 0);
			func_303(1, 0);
			func_304(1);
			func_14(2);
		case 2:
			if (!func_81(1))
			{
				return;
			}
			func_14(3);
		case 3:
			func_305(iVar2);
			func_304(1);
			func_14(4);
		case 4:
			bVar3 = false;
			bVar4 = true;
			bVar5 = true;
			if (func_306() == 8)
			{
				if (!bVar3)
				{
					if (!func_307())
					{
						func_229(12, 1);
					}
					bVar3 = true;
				}
				bVar4 = false;
				bVar5 = false;
			}
			if (func_308(5))
			{
				if (func_74(0) == 0 && (func_74(1) == 0 || !bVar1))
				{
					if (!bVar3)
					{
						if (!func_307())
						{
							func_309();
						}
						bVar3 = true;
					}
					bVar4 = false;
					bVar5 = false;
				}
			}
			if ((func_74(0) == 0 && (func_74(1) == 0 || !bVar1)) && func_74(5) == 0)
			{
				if (!bVar3)
				{
					if (!func_307())
					{
						func_229(11, 1);
					}
					bVar3 = true;
				}
				bVar4 = false;
				bVar5 = false;
			}
			if (func_74(0) == 1 || (func_74(1) == 1 && bVar1))
			{
				iVar6 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_34);
				if (INTERIOR::IS_VALID_INTERIOR(iVar6))
				{
					if (!bVar3)
					{
						if (func_310(iVar6))
						{
							if (!func_307())
							{
								func_229(14, 1);
							}
						}
						else if (func_311(iVar6))
						{
							if (!func_307())
							{
								func_229(15, 1);
							}
						}
						else if (!func_307())
						{
							func_229(13, 1);
						}
						if (func_66(0))
						{
							fVar7 = func_79(0);
							iVar8 = func_78(0);
							if (!func_312(0) && !func_173(0))
							{
								if (func_141(Global_34, iVar8, 1, 1) <= fVar7)
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar8, Global_34, 0, -1082130432, -1082130432, -1082130432);
								}
							}
						}
						if (func_66(1))
						{
							fVar7 = func_79(1);
							iVar8 = func_78(1);
							if (!func_312(1) && !func_173(1))
							{
								if (func_141(Global_34, iVar8, 1, 1) <= fVar7)
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar8, Global_34, 0, -1082130432, -1082130432, -1082130432);
								}
							}
						}
						bVar3 = true;
					}
					bVar4 = false;
					bVar5 = false;
				}
			}
			if (func_81(16) || !func_122(31))
			{
				if (!bVar3)
				{
					if (!func_307())
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1903007->f_364.f_12)))
						{
							func_313(&(Global_1903007->f_364.f_12), 10000, 0, 0, 0, 1);
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
						if (!func_307())
						{
							func_229(7, 1);
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
							if (!func_307())
							{
								func_229(7, 1);
							}
							bVar3 = true;
						}
					}
					bVar5 = false;
				}
			}
			if (vParam7.z)
			{
				if (func_143(0))
				{
					if (!bVar3)
					{
						if (!func_307())
						{
							func_229(16, 1);
						}
						bVar3 = true;
					}
				}
			}
			if (vParam19.z && bVar1)
			{
				if (func_143(1))
				{
					if (!vParam7.z)
					{
						if (!bVar3)
						{
							if (!func_307())
							{
								func_229(16, 1);
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
					func_61(0);
					func_314(0);
				}
			}
			if (!bVar5)
			{
				if (vParam19.z)
				{
					func_61(1);
					func_314(1);
				}
			}
			if (!bVar4 && !bVar5)
			{
				func_14(1);
				return;
			}
			func_14(5);
		case 5:
			func_315(1);
			if (func_316(0) == 6 && func_316(1) == 6)
			{
				func_14(1);
			}
			break;
	}
}

int func_84()
{
	if (func_81(2) || func_81(4))
	{
		func_304(2);
		func_304(4);
		return 1;
	}
	return 0;
}

bool func_85()
{
	return func_317(&Global_1939178, 8192);
}

int func_86(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_39.f_277.f_1[iParam0 /*431*/])->f_415;
}

void func_87(int iParam0, var uParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_39.f_277.f_1[iParam0 /*431*/])->f_415 = uParam1;
}

void func_88(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1903007)[iParam0 /*43*/])->f_41 = 0;
}

int func_89(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return ((*Global_1903007)[iParam0 /*43*/])->f_40;
}

void func_90(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1903007)[iParam0 /*43*/])->f_40 = iParam1;
}

void func_91(int iParam0, float fParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_39.f_277.f_1[iParam0 /*431*/])->f_415.f_1 = fParam1;
}

bool func_92()
{
	return Global_1956172->f_6;
}

void func_93(int iParam0)
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
	if (func_148(56))
	{
		func_149(56);
	}
	if (func_150(56))
	{
		func_151(56);
	}
	if (func_148(57))
	{
		func_149(57);
	}
	if (func_150(57))
	{
		func_151(57);
	}
	bVar1 = false;
	if (iParam0 == 0)
	{
		bVar1 = true;
	}
	else if ((iParam0 == 1 && func_74(0) == 0) && func_74(5) == 0)
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		func_142(iParam0, 1);
	}
	else
	{
		func_105(iParam0, 0);
	}
}

void func_94(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (!func_269(iParam0))
	{
		return;
	}
	bVar0 = false;
	if (func_66(iParam0))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iVar1 = func_78(iParam0);
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar1))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
		}
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		if (PED::_0xAA9F048DCF69B6DC(iVar2))
		{
			if (!func_160(iVar2))
			{
				PED::SET_PED_MODEL_IS_SUPPRESSED(iVar2, false);
			}
		}
		if (func_250(iParam0, 4))
		{
			func_68(iParam0);
		}
		else if (func_250(iParam0, 8))
		{
			PED::SET_PED_KEEP_TASK(iVar1, true);
			TASK::TASK_SMART_FLEE_PED(iVar1, Global_34, 500f, -1, 0, 1f, 0);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
		}
		else if (func_250(iParam0, 2))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
		}
	}
	if (func_250(iParam0, 16))
	{
		func_106(iParam0);
	}
	func_261(iParam0, 0);
	func_137(iParam0);
	func_294(iParam0);
	func_318(iParam0, 2);
	func_318(iParam0, 4);
	func_318(iParam0, 8);
	func_318(iParam0, 16);
}

void func_95()
{
	Global_1903007->f_392 = 0;
	Global_1903007->f_392.f_1 = { 0f, 0f, 0f };
	Global_1903007->f_392.f_4 = 0f;
	Global_1903007->f_392.f_5 = 0;
	Global_1903007->f_392.f_6 = 0;
}

int func_96(int iParam0)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;
	var uVar7;
	int iVar8;

	if (func_81(1024))
	{
		return 0;
	}
	if (!func_122(42))
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
	if (func_319(iParam0))
	{
		return 0;
	}
	if (func_320(iParam0))
	{
		return 0;
	}
	if (func_321(iParam0))
	{
		return 0;
	}
	if (func_322(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (func_323(iVar0))
	{
		return 0;
	}
	if (func_324(iVar0))
	{
		return 0;
	}
	bVar1 = false;
	if (PED::IS_PED_ON_MOUNT(Global_34))
	{
		if (PED::GET_MOUNT(Global_34) == iParam0)
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
		if (iParam0 != func_325())
		{
			vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
			func_95();
			func_326(iParam0);
			func_99(vVar2);
		}
		iVar5 = MISC::GET_GAME_TIMER();
		iVar6 = func_327();
		if (iVar6 == 0)
		{
			func_328(iVar5);
			return 0;
		}
		if (iVar6 + 2000 > iVar5)
		{
			return 0;
		}
	}
	else
	{
		func_328(0);
	}
	if (func_329(iParam0, &uVar7, 100f))
	{
		return 0;
	}
	iVar8 = PLAYER::PLAYER_ID();
	if (func_330(iVar8, 1, 0, 1))
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
	if (!func_331(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_97()
{
	return Global_1903007->f_392.f_5;
}

Vector3 func_98()
{
	return Global_1903007->f_392.f_1;
}

void func_99(vector3 vParam0)
{
	Global_1903007->f_392.f_1 = { vParam0 };
}

float func_100()
{
	return Global_1903007->f_392.f_4;
}

void func_101(float fParam0)
{
	Global_1903007->f_392.f_4 = fParam0;
}

void func_102(int iParam0)
{
	Global_1903007->f_392.f_5 = iParam0;
}

int func_103(int iParam0)
{
	bool bVar0;

	if (func_332(iParam0) > 0)
	{
		if (!func_333(iParam0))
		{
			return 0;
		}
		bVar0 = false;
		if (func_319(iParam0))
		{
			if (func_334(iParam0) == 6)
			{
				bVar0 = true;
			}
		}
		if (bVar0)
		{
			func_335(6, 1);
		}
		else
		{
			func_107(iParam0);
		}
		func_95();
		func_336();
		return 1;
	}
	else
	{
		if (!func_96(iParam0))
		{
			return 0;
		}
		func_337(iParam0, 0);
		func_95();
		func_336();
		return 1;
	}
	return 0;
}

int func_104(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return (Global_39.f_277.f_1[iParam0 /*431*/])->f_369;
}

void func_105(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_338(iParam0);
	if (func_67(iParam0))
	{
		iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (func_135(iParam0) != iVar0)
		{
			return;
		}
	}
	if (!func_66(iParam0))
	{
		return;
	}
	iVar1 = func_78(iParam0);
	bVar2 = false;
	if (!ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		bVar2 = true;
	}
	func_251(iParam0);
	func_339(iVar1);
	if (!ENTITY::_0x88AD6CC10D8D35B2(iVar1))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
	}
	if (func_256(iVar1))
	{
		PHYSICS::_0x0348469DAA17576C(iVar1);
	}
	if (bVar2)
	{
		TASK::TASK_SMART_FLEE_PED(iVar1, Global_34, 500f, -1, 0, 1f, 0);
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
			if (!func_160(iVar4))
			{
				PED::SET_PED_MODEL_IS_SUPPRESSED(iVar4, false);
			}
		}
	}
	func_106(iParam0);
}

void func_106(int iParam0)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;

	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	StringCopy(Global_39.f_277.f_1[iParam0 /*431*/], "", 64);
	(Global_39.f_277.f_1[iParam0 /*431*/])->f_8 = 0;
	(Global_39.f_277.f_1[iParam0 /*431*/])->f_9 = 0;
	(Global_39.f_277.f_1[iParam0 /*431*/])->f_10 = 0;
	(Global_39.f_277.f_1[iParam0 /*431*/])->f_11 = 0;
	(Global_39.f_277.f_1[iParam0 /*431*/])->f_12 = -1;
	(Global_39.f_277.f_1[iParam0 /*431*/])->f_13 = -15;
	(Global_39.f_277.f_1[iParam0 /*431*/])->f_14 = 0;
	func_340(&Var0);
	func_341(iParam0, Var0);
	func_342(&((Global_39.f_277.f_1[iParam0 /*431*/])->f_15));
	func_343(&((Global_39.f_277.f_1[iParam0 /*431*/])->f_353));
	func_344(&((Global_39.f_277.f_1[iParam0 /*431*/])->f_369));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_345(iVar2, (Global_39.f_277.f_1[iParam0 /*431*/])->f_393[iVar2 /*4*/]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_346(iVar3, (Global_39.f_277.f_1[iParam0 /*431*/])->f_402[iVar3 /*4*/]);
		iVar3++;
	}
	func_347(&((Global_39.f_277.f_1[iParam0 /*431*/])->f_415));
	func_348(&((Global_39.f_277.f_1[iParam0 /*431*/])->f_417));
	func_349(&((Global_39.f_277.f_1[iParam0 /*431*/])->f_420));
	(Global_39.f_277.f_1[iParam0 /*431*/])->f_422 = { 0f, 0f, 0f };
	(Global_39.f_277.f_1[iParam0 /*431*/])->f_425 = 0f;
	(Global_39.f_277.f_1[iParam0 /*431*/])->f_426 = -1;
	(Global_39.f_277.f_1[iParam0 /*431*/])->f_427 = -1;
	(Global_39.f_277.f_1[iParam0 /*431*/])->f_428 = 0;
	(Global_39.f_277.f_1[iParam0 /*431*/])->f_429 = 0;
	(Global_39.f_277.f_1[iParam0 /*431*/])->f_430 = 0;
	(*Global_1903007)[iParam0 /*43*/] = 0;
	((*Global_1903007)[iParam0 /*43*/])->f_1 = 0;
	((*Global_1903007)[iParam0 /*43*/])->f_2 = 0;
	((*Global_1903007)[iParam0 /*43*/])->f_3 = 0;
	((*Global_1903007)[iParam0 /*43*/])->f_19 = { 0f, 0f, 0f };
	((*Global_1903007)[iParam0 /*43*/])->f_22 = 0f;
	((*Global_1903007)[iParam0 /*43*/])->f_23 = 0;
	((*Global_1903007)[iParam0 /*43*/])->f_24 = 0;
	if (MAP::DOES_BLIP_EXIST(((*Global_1903007)[iParam0 /*43*/])->f_25))
	{
		MAP::REMOVE_BLIP(&(((*Global_1903007)[iParam0 /*43*/])->f_25));
	}
	((*Global_1903007)[iParam0 /*43*/])->f_25 = 0;
	if (MAP::DOES_BLIP_EXIST(((*Global_1903007)[iParam0 /*43*/])->f_26))
	{
		MAP::REMOVE_BLIP(&(((*Global_1903007)[iParam0 /*43*/])->f_26));
	}
	((*Global_1903007)[iParam0 /*43*/])->f_26 = 0;
	((*Global_1903007)[iParam0 /*43*/])->f_27 = { 0f, 0f, 0f };
	((*Global_1903007)[iParam0 /*43*/])->f_30 = { 0f, 0f, 0f };
	((*Global_1903007)[iParam0 /*43*/])->f_33 = 0f;
	((*Global_1903007)[iParam0 /*43*/])->f_34 = 0;
	((*Global_1903007)[iParam0 /*43*/])->f_35 = 0;
	((*Global_1903007)[iParam0 /*43*/])->f_36 = 0;
	((*Global_1903007)[iParam0 /*43*/])->f_37 = { 0f, 0f, 0f };
	((*Global_1903007)[iParam0 /*43*/])->f_40 = 0;
	((*Global_1903007)[iParam0 /*43*/])->f_41 = 0;
	((*Global_1903007)[iParam0 /*43*/])->f_42 = -1;
}

void func_107(int iParam0)
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
	if (func_319(iParam0))
	{
		iVar0 = func_334(iParam0);
		func_251(iVar0);
	}
	func_251(1);
	if (func_66(1))
	{
		func_105(1, 0);
	}
	func_106(1);
	func_350(iParam0, 1, 0);
	func_154(1, 1);
	if (func_104(1) == 0)
	{
		func_351(1, 1);
	}
	uVar1 = PLAYER::_0x227B06324234FB09(PLAYER::PLAYER_ID(), iParam0);
	func_336();
}

int func_108(struct<5> Param0, var uParam5, var uParam6, var uParam7, bool bParam8)
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
		if (!PED::IS_PED_ON_MOUNT(Global_34))
		{
			return 0;
		}
		*uParam7 = PED::GET_MOUNT(Global_34);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam7))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(*uParam7))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(*uParam7))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(*uParam7))
	{
		return 0;
	}
	if (func_319(*uParam7))
	{
		return 0;
	}
	if (func_320(*uParam7))
	{
		return 0;
	}
	if (func_352(*uParam7))
	{
		return 0;
	}
	if (func_353(*uParam7))
	{
		return 0;
	}
	if (func_322(*uParam7))
	{
		return 0;
	}
	if (func_321(*uParam7))
	{
		return 0;
	}
	if (func_354(*uParam7))
	{
		return 0;
	}
	bVar0 = func_355();
	bVar1 = false;
	iVar2 = PED::_0xF103823FFE72BB49(*uParam7);
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

void func_109()
{
	Global_1903007->f_402 = 0;
	Global_1903007->f_402.f_1 = 0;
}

void func_110(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (func_322(iParam0))
	{
		return;
	}
}

int func_111()
{
	return &Global_1904591;
}

void func_112()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	func_356(0);
	Global_1939231->f_5 = 1;
}

void func_113()
{
	func_357(0);
	func_358(1);
}

void func_114()
{
	int iVar0;
	int iVar1;

	if (!func_359())
	{
		return;
	}
	iVar0 = func_360();
	iVar1 = func_361();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_358(7);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		func_358(7);
		return;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		func_358(7);
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		func_358(7);
		return;
	}
	if (!func_362(iVar1))
	{
		func_358(7);
		return;
	}
	func_358(2);
}

void func_115()
{
	int iVar0;
	int iVar1;

	iVar0 = func_360();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_358(7);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		func_358(7);
		return;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		func_358(7);
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		func_358(7);
		return;
	}
	iVar1 = PED::_GET_RIDER_OF_MOUNT(iVar0, 0);
	if (iVar1 != 0)
	{
		if (iVar1 != Global_34)
		{
			func_358(7);
			return;
		}
	}
	if (PED::_0xE4770DA1B8FF4FD1(iVar0) != 0)
	{
		func_358(7);
		return;
	}
	if (!func_363())
	{
		func_358(7);
		return;
	}
	func_358(3);
}

void func_116()
{
	int iVar0;
	int iVar1;

	iVar0 = func_360();
	iVar1 = func_361();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_358(7);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		func_358(7);
		return;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		func_358(7);
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		func_358(7);
		return;
	}
	if (func_364(iVar0, iVar1))
	{
		func_365(MISC::GET_GAME_TIMER());
		func_358(4);
	}
}

void func_117()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	iVar0 = func_360();
	iVar1 = func_361();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_358(7);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		func_358(7);
		return;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		func_358(7);
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		func_358(7);
		return;
	}
	bVar2 = false;
	if (PED::_0x7FC84E85D98F063D(Global_34))
	{
		bVar2 = true;
	}
	else if (func_366() + 500 < MISC::GET_GAME_TIMER())
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		iVar3 = MISC::GET_GAME_TIMER();
		func_365(iVar3);
		func_367(iVar3);
		func_358(5);
		if (iVar1 == -1516555556)
		{
			func_368(iVar0);
			iVar4 = func_287(iVar0, 0);
			func_369(iVar4);
			func_370(0);
		}
		else
		{
			func_368(0);
			func_369(0);
			func_370(0);
		}
	}
}

void func_118()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = func_360();
	iVar1 = func_361();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_358(7);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		func_358(7);
		return;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		func_358(7);
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		func_358(7);
		return;
	}
	bVar2 = false;
	if (!PED::_0x7FC84E85D98F063D(Global_34))
	{
		if (func_366() + 500 < MISC::GET_GAME_TIMER())
		{
			bVar2 = true;
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -1930620551))
	{
		func_371(1);
		bVar2 = true;
	}
	if (bVar2)
	{
		if (func_372())
		{
			if (func_373(iVar1, 1147021565))
			{
				func_374(iVar1, 1, 0, -1387038764);
			}
			func_375(iVar0, iVar1);
		}
		else
		{
			func_358(7);
			return;
		}
		func_365(MISC::GET_GAME_TIMER());
		func_358(6);
	}
}

void func_119()
{
	bool bVar0;

	bVar0 = false;
	if (!PED::_0x7FC84E85D98F063D(Global_34))
	{
		if (func_366() + 500 < MISC::GET_GAME_TIMER())
		{
			bVar0 = true;
		}
	}
	if (func_376())
	{
		bVar0 = true;
	}
	if (func_372())
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_358(7);
	}
}

void func_120()
{
	func_357(0);
	func_358(0);
	ATTRIBUTE::_0xD962F8579D702DB5();
}

void func_121()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	struct<4> Var5;
	int iVar9;
	int iVar10;

	iVar0 = func_377();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar2))
	{
		return;
	}
	bVar3 = ENTITY::HAS_ANIM_EVENT_FIRED(iVar2, 1120483657);
	if (bVar3)
	{
		if (!func_378())
		{
			func_370(1);
		}
	}
	if (!func_378())
	{
		return;
	}
	bVar4 = false;
	if (PLAYER::_0xF49F14462F0AE27C(iVar1) == iVar0)
	{
		Var5 = { func_379(0, 1, 0, -1) };
		func_380(&Var5, 0, 1, 1);
		iVar9 = func_381(Var5, 0);
		if (iVar9 > 0)
		{
			func_382(iVar0, Var5, 0, -1);
			bVar4 = true;
		}
	}
	else
	{
		iVar10 = func_287(iVar0, 0);
		if (iVar10 > 0)
		{
			func_383(iVar0, 0, -1);
			bVar4 = true;
		}
	}
	if (bVar4)
	{
		PED::_0xE29D8CD66553DBAA(iVar0);
	}
	if (func_287(iVar0, 0) == 0)
	{
		func_368(0);
		func_370(0);
	}
}

int func_122(int iParam0)
{
	if (!func_384(iParam0))
	{
		return 0;
	}
	return func_385(iParam0);
}

void func_123(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	int iVar7;

	iVar0 = func_159(iParam0);
	if (func_104(iParam0) >= ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7))
	{
		return;
	}
	iVar1 = func_78(iParam0);
	fVar2 = ENTITY::GET_ENTITY_SPEED(iVar1);
	bVar3 = false;
	if (PED::_GET_RIDER_OF_MOUNT(iVar1, 0) != Global_34)
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
		(Global_1903007->f_303.f_2[iParam0 /*5*/])->f_1 = -1;
		Global_1903007->f_303.f_2[iParam0 /*5*/] = -1;
		return;
	}
	if ((Global_1903007->f_303.f_2[iParam0 /*5*/])->f_2 >= 100f)
	{
		func_386(1, 100f);
		fVar5 = ((Global_1903007->f_303.f_2[iParam0 /*5*/])->f_2 - 100f);
		(Global_1903007->f_303.f_2[iParam0 /*5*/])->f_2 = fVar5;
	}
	fVar6 = PED::_GET_PED_STAMINA(iVar1);
	if (fVar6 < 1f)
	{
		(Global_1903007->f_303.f_2[iParam0 /*5*/])->f_1 = -1;
		Global_1903007->f_303.f_2[iParam0 /*5*/] = -1;
		return;
	}
	if (fVar2 > 0.5f && fVar2 <= 4f)
	{
		if (&Global_1903007->f_303.f_2[iParam0 /*5*/] == -1)
		{
			Global_1903007->f_303.f_2[iParam0 /*5*/] = 0;
		}
	}
	if (fVar2 > 4f && fVar2 <= 6f)
	{
		if (&Global_1903007->f_303.f_2[iParam0 /*5*/] == -1 || &Global_1903007->f_303.f_2[iParam0 /*5*/] == 0)
		{
			Global_1903007->f_303.f_2[iParam0 /*5*/] = 1;
		}
	}
	if (fVar2 > 6f)
	{
		if ((&Global_1903007->f_303.f_2[iParam0 /*5*/] == -1 || &Global_1903007->f_303.f_2[iParam0 /*5*/] == 0) || &Global_1903007->f_303.f_2[iParam0 /*5*/] == 1)
		{
			Global_1903007->f_303.f_2[iParam0 /*5*/] = 2;
		}
	}
	if (fVar2 > 10f)
	{
		if (((&Global_1903007->f_303.f_2[iParam0 /*5*/] == -1 || &Global_1903007->f_303.f_2[iParam0 /*5*/] == 0) || &Global_1903007->f_303.f_2[iParam0 /*5*/] == 1) || &Global_1903007->f_303.f_2[iParam0 /*5*/] == 2)
		{
			Global_1903007->f_303.f_2[iParam0 /*5*/] = 3;
		}
	}
	if (&Global_1903007->f_303.f_2[iParam0 /*5*/] == -1)
	{
		return;
	}
	iVar7 = MISC::GET_GAME_TIMER();
	if ((Global_1903007->f_303.f_2[iParam0 /*5*/])->f_1 == -1)
	{
		(Global_1903007->f_303.f_2[iParam0 /*5*/])->f_1 = iVar7;
		return;
	}
	if ((Global_1903007->f_303.f_2[iParam0 /*5*/])->f_1 + 5000 < iVar7)
	{
		if (&Global_1903007->f_303.f_2[iParam0 /*5*/] == 0 || &Global_1903007->f_303.f_2[iParam0 /*5*/] == 1)
		{
			func_387(iParam0, 1);
		}
		else if (&Global_1903007->f_303.f_2[iParam0 /*5*/] == 2)
		{
			func_387(iParam0, 2);
		}
		else if (&Global_1903007->f_303.f_2[iParam0 /*5*/] == 3)
		{
			func_387(iParam0, 3);
		}
		(Global_1903007->f_303.f_2[iParam0 /*5*/])->f_1 = -1;
		Global_1903007->f_303.f_2[iParam0 /*5*/] = -1;
	}
}

void func_124(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	float fVar4;
	int iVar5;

	iVar0 = func_159(iParam0);
	if (func_104(iParam0) >= ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7))
	{
		return;
	}
	iVar1 = func_78(iParam0);
	fVar2 = ENTITY::GET_ENTITY_SPEED(iVar1);
	bVar3 = false;
	if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		bVar3 = true;
	}
	if (((!TASK::_0xEFC4303DDC6E60D3(Global_34) || TASK::_0xED1F514AF4732258(Global_34) != iVar1) || fVar2 < 0.5f) || !bVar3)
	{
		(Global_1903007->f_303.f_2[iParam0 /*5*/])->f_3 = -1;
		return;
	}
	if ((Global_1903007->f_303.f_2[iParam0 /*5*/])->f_4 >= 20f)
	{
		func_386(4, 20f);
		fVar4 = ((Global_1903007->f_303.f_2[iParam0 /*5*/])->f_4 - 20f);
		(Global_1903007->f_303.f_2[iParam0 /*5*/])->f_4 = fVar4;
	}
	iVar5 = MISC::GET_GAME_TIMER();
	if ((Global_1903007->f_303.f_2[iParam0 /*5*/])->f_3 == -1)
	{
		(Global_1903007->f_303.f_2[iParam0 /*5*/])->f_3 = iVar5;
		return;
	}
	if ((Global_1903007->f_303.f_2[iParam0 /*5*/])->f_3 + 5000 < iVar5)
	{
		func_387(iParam0, 4);
		(Global_1903007->f_303.f_2[iParam0 /*5*/])->f_3 = -1;
	}
}

void func_125(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;

	iVar0 = func_159(iParam0);
	if (func_104(iParam0) >= ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7))
	{
		return;
	}
	iVar1 = func_78(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1) || PED::IS_PED_INJURED(iVar1))
	{
		return;
	}
	bVar2 = PED::_GET_RIDER_OF_MOUNT(iVar1, 0) == Global_34;
	if (!bVar2)
	{
		return;
	}
	iVar3 = PED::_GET_LASSOED_ENTITY(Global_34);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return;
	}
	if (DECORATOR::DECOR_EXIST_ON(iVar3, "bHasBeenLassoedFromHorse"))
	{
		return;
	}
	bVar4 = func_388(iVar3, Global_34);
	if (bVar4)
	{
	}
	DECORATOR::DECOR_SET_BOOL(iVar3, "bHasBeenLassoedFromHorse", true);
}

void func_126(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_39.f_277.f_1[iParam0 /*431*/])->f_422 = { vParam1 };
	(Global_39.f_277.f_1[iParam0 /*431*/])->f_425 = uParam4;
}

struct<2> func_127(int iParam0)
{
	return *(Global_1900718->f_1[iParam0 /*2*/]);
}

var func_128(var uParam0, var uParam1)
{
	return uParam0;
}

int func_129(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

int func_130(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return ((*Global_1903007)[iParam0 /*43*/])->f_42;
}

void func_131(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1903007)[iParam0 /*43*/])->f_42 = iParam1;
}

int func_132()
{
	if (func_81(8192))
	{
		func_304(8192);
		return 1;
	}
	return 0;
}

int func_133(int iParam0, int iParam1)
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

int func_134(int iParam0, int iParam1)
{
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
	TASK::TASK_GO_TO_WHISTLE(iParam0, iParam1, 0);
	FLOCK::_0xFF1E339CE40EAAAF(iParam0, -1);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 48, false);
	POPULATION::_0xF74E134F40192884(iParam0, 1);
	return 1;
}

int func_135(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return ((*Global_1903007)[iParam0 /*43*/])->f_3;
}

void func_136(int iParam0, bool bParam1)
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
	if (!func_319(iParam0))
	{
		return;
	}
	iVar0 = func_334(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_389(iVar0);
	func_338(iVar0);
	iVar1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	iVar2 = func_135(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_67(iVar0))
		{
			return;
		}
	}
	func_137(iVar0);
	PED::SET_PED_KEEP_TASK(iParam0, true);
	if (bParam1 && func_2() == -1)
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, true);
		}
	}
}

void func_137(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1903007)[iParam0 /*43*/])->f_2 = 0;
	((*Global_1903007)[iParam0 /*43*/])->f_3 = 0;
}

void func_138(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1903007)[iParam0 /*43*/])->f_36 = 0;
}

int func_139(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return ((*Global_1903007)[iParam0 /*43*/])->f_36;
}

void func_140(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1903007)[iParam0 /*43*/])->f_36 = iParam1;
}

float func_141(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_142(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_78(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return;
	}
	func_251(iParam0);
	func_251(5);
	func_350(iVar0, 5, iParam1);
	func_154(5, 1);
	if (PLAYER::_0x46FA0AE18F4C7FA9(iVar1) == iVar0)
	{
		PLAYER::_0x8FBF9EDB378CCB8C(iVar1, 0);
	}
	if (iVar0 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()))
	{
		PED::_0x6569F31A01B4C097(iVar0, 0, 1);
		PED::_0x6569F31A01B4C097(iVar0, 1, 1);
		DECORATOR::_DECOR_SET_STRING(iVar0, "loot_long_custom_anim_data_set", "DEAD_HORSE_SADDLE_SWAP_LONG_LOOT_ANIM_DATA");
		func_170(5);
		func_167(0);
		func_168(ENTITY::GET_ENTITY_COORDS(iVar0, true, false));
	}
	if (iParam1 == 2)
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
	}
	func_280(iParam0);
	func_390(iParam0);
	func_106(iParam0);
	func_336();
}

int func_143(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return ((*Global_1903007)[iParam0 /*43*/])->f_34;
}

float func_144(int iParam0)
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

int func_145(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return ((*Global_1903007)[iParam0 /*43*/])->f_35;
}

void func_146(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1903007)[iParam0 /*43*/])->f_34 = iParam1;
}

void func_147(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1903007)[iParam0 /*43*/])->f_35 = iParam1;
}

int func_148(int iParam0)
{
	int iVar0;

	iVar0 = UIFEED::_0xC17F69E1418CD11F(1);
	if (iVar0 != 0)
	{
		return iVar0 == (Global_1904613->f_31[iParam0 /*9*/])->f_1;
	}
	return 0;
}

void func_149(int iParam0)
{
	if (!func_148(iParam0))
	{
		return;
	}
	func_391(1);
}

bool func_150(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_392(iParam0, &iVar0, &iVar1);
	iVar2 = Global_1904613[iVar0];
	return MISC::IS_BIT_SET(iVar2, iVar1);
}

void func_151(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = Global_1904613[iVar1];
	MISC::CLEAR_BIT(&uVar3, iVar2);
	(*Global_1904613)[iVar1] = uVar3;
}

int func_152(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_39.f_277.f_1[iParam0 /*431*/])->f_11;
}

void func_153(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_39.f_277.f_1[iParam0 /*431*/])->f_11 = iParam1;
}

void func_154(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_39.f_277.f_1[iParam0 /*431*/])->f_14 = iParam1;
}

int func_155()
{
	return Global_39.f_277.f_3019;
}

void func_156(int iParam0)
{
	if (!func_384(iParam0))
	{
		return;
	}
	func_393(iParam0);
	func_394(iParam0);
}

bool func_157(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_17172.f_2563[iVar1]), iVar2);
}

void func_158(int iParam0)
{
	Global_39.f_277.f_3042.f_4 = iParam0;
}

int func_159(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_39.f_277.f_1[iParam0 /*431*/])->f_9;
}

int func_160(int iParam0)
{
	if (func_395(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_161(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<29> Var2;

	if (func_74(iParam0) == 0)
	{
		if (func_396(iParam0))
		{
			func_397(iParam0);
		}
		return;
	}
	if (!func_396(iParam0))
	{
		iVar0 = func_159(iParam0);
		iVar1 = func_398(iVar0);
		func_399(iParam0, iVar1);
	}
	Var2.f_9 = -1591664384;
	Var2.f_14 = func_159(iParam0);
	Var2.f_15 = func_400(iParam0);
	Var2.f_16 = { func_246(iParam0) };
	Var2.f_24 = Var2.f_24;
	Var2.f_26 = BUILTIN::FLOOR(func_401(iParam0));
	Var2.f_25 = BUILTIN::FLOOR(func_295(iParam0));
	Var2.f_27 = func_402(iParam0, 0);
	Var2.f_28 = func_402(iParam0, 1);
	func_403(iParam0, &Var2);
}

int func_162()
{
	int iVar0;

	iVar0 = func_163();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_163()
{
	return Global_1903007->f_379;
}

int func_164(int iParam0, int iParam1)
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

int func_165()
{
	return Global_39.f_277.f_3019.f_1;
}

bool func_166(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915180->f_20136;
	}
	return (Global_1915180->f_20136 || Global_1915180->f_21989.f_1);
}

void func_167(int iParam0)
{
	Global_39.f_277.f_3019.f_1 = iParam0;
}

void func_168(vector3 vParam0)
{
	Global_39.f_277.f_3019.f_19 = { vParam0 };
}

Vector3 func_169()
{
	return Global_39.f_277.f_3019.f_19;
}

void func_170(int iParam0)
{
	Global_39.f_277.f_3019 = iParam0;
}

int func_171(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (func_162())
	{
		func_404();
		func_405();
	}
	iVar0 = func_69();
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
	func_406(iVar1);
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
	ENTITY::SET_ENTITY_HEADING(iVar1, fParam3);
	if (bParam4)
	{
		ENTITY::_0x9587913B9E772D29(iVar1, 0);
	}
	TASK::TASK_CARRIABLE(iVar1, 822715387, 0, 0, 0);
	return 1;
}

void func_172()
{
	Global_1903007->f_423 = 0;
	Global_1903007->f_423.f_1 = 0;
	Global_1903007->f_423.f_2 = 0;
}

int func_173(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (func_256(Global_1903007[iParam0 /*43*/]))
	{
		return 1;
	}
	return 0;
}

int func_174(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_39.f_277.f_1[iParam0 /*431*/])->f_430;
}

bool func_175()
{
	return Global_1903007->f_423.f_1;
}

var func_176()
{
	return Global_1903007->f_423;
}

void func_177(int iParam0)
{
	Global_1903007->f_423 = iParam0;
}

void func_178(int iParam0)
{
	Global_1903007->f_423.f_1 = iParam0;
}

int func_179(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (iParam1 != -1)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(((*Global_1887327)[iParam1 /*36*/])->f_5))
		{
			return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, ((*Global_1887327)[iParam1 /*36*/])->f_5, true, 0);
		}
		else
		{
			return 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < Global_1893575->f_161)
	{
		iVar0 = &Global_1893575->f_10[iVar1];
		if (!VOLUME::_DOES_VOLUME_EXIST(((*Global_1887327)[iVar0 /*36*/])->f_5))
		{
		}
		else if (ENTITY::IS_ENTITY_IN_VOLUME(iParam0, ((*Global_1887327)[iVar0 /*36*/])->f_5, true, 0))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

var func_180()
{
	return Global_1903007->f_423.f_2;
}

void func_181(int iParam0)
{
	Global_1903007->f_423.f_2 = iParam0;
}

bool func_182()
{
	return Global_1893575 & 2 != 0;
}

int func_183()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34) || PED::IS_PED_INJURED(Global_34))
	{
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_34, 440, true))
	{
		return 0;
	}
	return 1;
}

void func_184(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34) || PED::IS_PED_INJURED(Global_34))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_34, 440, !bParam0);
}

int func_185()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34) || PED::IS_PED_INJURED(Global_34))
	{
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_34, 439, true))
	{
		return 0;
	}
	return 1;
}

void func_186(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34) || PED::IS_PED_INJURED(Global_34))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_34, 439, !bParam0);
}

int func_187()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34) || PED::IS_PED_INJURED(Global_34))
	{
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_34, 438, true))
	{
		return 0;
	}
	return 1;
}

void func_188(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34) || PED::IS_PED_INJURED(Global_34))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_34, 438, !bParam0);
}

int func_189(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (((*Global_1903007)[iParam0 /*43*/])->f_41 == 0)
	{
		return 0;
	}
	return 1;
}

void func_190(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1903007)[iParam0 /*43*/])->f_41 = iParam1;
}

int func_191(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return ((*Global_1903007)[iParam0 /*43*/])->f_41;
}

Vector3 func_192(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f, 0f, 0f;
	}
	return ((*Global_1903007)[iParam0 /*43*/])->f_27;
}

int func_193(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_194(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f, 0f, 0f;
	}
	return ((*Global_1903007)[iParam0 /*43*/])->f_30;
}

float func_195(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return ((*Global_1903007)[iParam0 /*43*/])->f_33;
}

void func_196(int iParam0, vector3 vParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1903007)[iParam0 /*43*/])->f_30 = { vParam1 };
}

void func_197(int iParam0, float fParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1903007)[iParam0 /*43*/])->f_33 = fParam1;
}

void func_198(struct<7> Param0)
{
	int iVar0;

	if (!Param0.f_5)
	{
		return;
	}
	if (func_157(34))
	{
		return;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(Param0.f_6);
	if (func_323(iVar0) || func_324(iVar0))
	{
		return;
	}
	if (!TASK::IS_PED_SPRINTING(Param0.f_6))
	{
		return;
	}
	if (PED::IS_PED_SWIMMING(Global_34))
	{
		return;
	}
	if (PED::IS_PED_SWIMMING(Param0.f_6))
	{
		return;
	}
	if (func_230())
	{
		func_229(34, 0);
	}
}

void func_199(struct<7> Param0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;

	if (!Param0.f_5)
	{
		return;
	}
	if (func_407() >= 3)
	{
		return;
	}
	if (func_150(36) || func_148(36))
	{
		return;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = func_408();
	if (iVar1 > 0)
	{
		if (iVar1 + 5000 < iVar0)
		{
			func_409();
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
	if (PED::IS_PED_SWIMMING(Global_34))
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
	if (func_150(34))
	{
		func_151(34);
	}
	if (func_148(34))
	{
		func_149(34);
	}
	if (func_150(35))
	{
		func_151(35);
	}
	if (func_148(35))
	{
		func_149(35);
	}
	if (func_230())
	{
		func_229(36, 1);
		func_410();
		func_411(MISC::GET_GAME_TIMER());
	}
}

void func_200(struct<7> Param0, struct<11> Param7, var uParam18)
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
	if (func_157(45))
	{
		return;
	}
	bVar0 = false;
	if ((func_122(32) && func_122(33)) && func_122(34))
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		return;
	}
	if (!func_319(Param0.f_6))
	{
		return;
	}
	if (!Param7.f_10)
	{
		return;
	}
	if (func_104(7) == 0)
	{
		return;
	}
	if (func_230())
	{
		func_229(45, 0);
	}
}

void func_201()
{
	int iVar0;

	if (!func_412())
	{
		return;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	if (func_413() < iVar0)
	{
		func_229(59, 0);
		func_414(0);
		func_415();
	}
}

void func_202(struct<4> Param0, var uParam4, var uParam5, var uParam6, vector3 vParam7, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, vector3 vParam19, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
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
	if (!func_66(iVar12))
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
		if (func_148(56))
		{
			func_149(56);
		}
		if (func_150(56))
		{
			func_151(56);
		}
		if (func_148(57))
		{
			func_149(57);
		}
		if (func_150(57))
		{
			func_151(57);
		}
		return;
	}
	if (TASK::_0x3F8387DB1B9F31B7(Var0, 0) && !func_416())
	{
		if (!func_157(57) && !func_157(58))
		{
			if (func_148(56))
			{
				func_149(56);
			}
			if (func_150(56))
			{
				func_151(56);
			}
			if (func_230())
			{
				if (func_417(-1795542128 /* GXTEntry: "Special Horse Reviver" */))
				{
					func_229(57, 0);
				}
				else
				{
					func_229(58, 0);
				}
			}
		}
	}
}

void func_203(struct<4> Param0, var uParam4, var uParam5, var uParam6)
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
	iVar0 = func_418();
	bVar1 = false;
	iVar2 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		bVar1 = true;
		iVar2 = PED::_0x454AD4DA6C41B5BD(iVar0);
	}
	iVar3 = func_419();
	switch (iVar3)
	{
		case 0:
			func_420(1);
		case 1:
			if (bVar1)
			{
				func_421(iVar0);
				func_420(2);
			}
			break;
		case 2:
			switch (iVar2)
			{
				case 1:
					func_420(3);
					break;
				case 2:
				case 3:
					func_420(5);
					break;
				case 7:
				case 8:
				case 9:
					func_420(7);
					break;
				case 4:
				case 5:
					func_420(9);
					break;
				case 6:
					func_420(11);
					break;
				default:
					if (!bVar1)
					{
						func_420(11);
					}
					break;
			}
			break;
		case 3:
			func_422();
			if (func_423(iVar0))
			{
				if (func_230())
				{
					func_229(48, 1);
				}
			}
			else if (func_230())
			{
				func_229(47, 1);
			}
			func_420(4);
			break;
		case 4:
			switch (iVar2)
			{
				case 1:
					if (func_148(47))
					{
						if (func_423(iVar0))
						{
							func_149(47);
							func_420(3);
						}
					}
					if (!bVar1)
					{
						func_420(11);
					}
					break;
				case 2:
				case 3:
					func_420(5);
					break;
				case 7:
				case 8:
				case 9:
					func_420(7);
					break;
				case 4:
				case 5:
					func_420(9);
					break;
				case 6:
					func_420(11);
					break;
				default:
					if (!bVar1)
					{
						func_420(11);
					}
					break;
			}
			break;
		case 5:
			func_422();
			if (func_230())
			{
				func_229(49, 1);
			}
			func_420(6);
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
					func_420(7);
					break;
				case 4:
				case 5:
					func_420(9);
					break;
				case 6:
					func_420(11);
					break;
				default:
					if (!bVar1)
					{
						func_420(11);
					}
					break;
			}
			break;
		case 7:
			func_422();
			if (func_230())
			{
				func_229(50, 1);
			}
			func_424(MISC::GET_GAME_TIMER());
			func_420(8);
			break;
		case 8:
			if (func_425() + 5000 < MISC::GET_GAME_TIMER())
			{
				func_420(6);
			}
			break;
		case 9:
			func_422();
			if (func_230())
			{
				func_229(51, 1);
			}
			func_420(10);
			break;
		case 10:
			switch (iVar2)
			{
				case 2:
				case 3:
					func_420(5);
					break;
				case 7:
				case 8:
				case 9:
					func_420(7);
					break;
				case 4:
				case 5:
					break;
				case 6:
					func_420(11);
					break;
				default:
					if (!bVar1)
					{
						func_420(11);
					}
					break;
			}
			break;
		case 11:
			func_426();
			func_422();
			func_420(0);
			break;
	}
}

void func_204(struct<6> Param0, var uParam6, struct<11> Param7, var uParam18, struct<11> Param19, var uParam30)
{
	struct<5> Var0;
	int iVar12;
	int iVar13;
	bool bVar14;
	int iVar15;
	bool bVar16;

	if (!func_427())
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
	iVar13 = func_402(iVar12, 0);
	bVar14 = false;
	iVar15 = -1;
	if (!bVar14)
	{
		if (iVar13 > 50)
		{
			if (func_428() < 3)
			{
				iVar15 = 26;
				bVar14 = true;
			}
		}
	}
	bVar16 = false;
	if (func_429() + 2500 < MISC::GET_GAME_TIMER())
	{
		bVar16 = true;
	}
	if (bVar16)
	{
		if (!bVar14)
		{
			func_430(0);
			func_431();
			return;
		}
	}
	if (!bVar16)
	{
		return;
	}
	if (!func_230())
	{
		return;
	}
	func_229(iVar15, 1);
	func_432(MISC::GET_GAME_TIMER());
	switch (iVar15)
	{
		case 26:
			func_433();
			break;
		default:
			break;
	}
	func_430(0);
	func_431();
}

void func_205(struct<6> Param0, var uParam6, struct<11> Param7, var uParam18, struct<11> Param19, var uParam30)
{
	struct<5> Var0;
	int iVar12;
	int iVar13;
	int iVar14;
	bool bVar15;
	int iVar16;
	bool bVar17;

	if (!func_434())
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
	iVar13 = func_435(iVar12, 0);
	iVar14 = func_435(iVar12, 1);
	bVar15 = false;
	iVar16 = -1;
	if (!bVar15)
	{
		if (func_436(32) < 3)
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
			if (func_436(30) < 3)
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
			if (func_436(31) < 3)
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
			if (func_436(28) < 1)
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
			if (func_436(29) < 1)
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
			if (func_436(33) < 3)
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
	if (func_437() + 2500 < MISC::GET_GAME_TIMER())
	{
		bVar17 = true;
	}
	if (bVar17)
	{
		if (!bVar15)
		{
			func_438(0);
			func_439();
			return;
		}
	}
	if (!bVar17)
	{
		return;
	}
	if (!func_230())
	{
		return;
	}
	func_229(iVar16, 1);
	func_432(MISC::GET_GAME_TIMER());
	func_438(0);
	func_439();
}

void func_206()
{
	int iVar0[6];
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;

	if (func_440() == 0)
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
		else if (func_148(&(iVar0[iVar9])))
		{
			bVar8 = true;
		}
		iVar9++;
	}
	if (bVar8)
	{
		if (!func_441())
		{
			bVar10 = false;
			bVar11 = false;
			bVar12 = false;
			bVar13 = false;
			if (func_148(32))
			{
				bVar12 = true;
				bVar13 = true;
			}
			if (func_148(30))
			{
				bVar12 = true;
			}
			if (func_148(31))
			{
				bVar13 = true;
			}
			if (func_148(28))
			{
				bVar12 = true;
			}
			if (func_148(29))
			{
				bVar13 = true;
			}
			if (func_148(43))
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
			func_442(1);
		}
	}
	else if (func_441())
	{
		UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
		UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
		UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
		UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
		func_442(0);
		func_443();
	}
}

void func_207(struct<5> Param0, var uParam5, var uParam6)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;

	if (!func_444())
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
	if (func_157(55))
	{
		return;
	}
	if (!func_230())
	{
		return;
	}
	func_158(0);
	if (func_74(0) == 1)
	{
		return;
	}
	func_229(55, 0);
	iVar0 = func_445(9, 1, 1, 0);
	if (iVar0 != 86)
	{
		iVar0 = func_445(9, 1, 1, 1);
	}
	if (!func_446(iVar0))
	{
		return;
	}
	vVar1 = { func_447(iVar0) };
	if (func_193(vVar1))
	{
		return;
	}
	iVar4 = MAP::_BLIP_ADD_FOR_COORD(168093330, vVar1);
	MAP::SET_BLIP_SPRITE(iVar4, 1938782895, true);
	MAP::_BLIP_SET_MODIFIER(iVar4, 580546400);
	MAP::_BLIP_SET_MODIFIER(iVar4, 847579139);
	func_448(&iVar4);
}

void func_208()
{
	int iVar0;

	iVar0 = func_449();
	if (!MAP::DOES_BLIP_EXIST(iVar0))
	{
		return;
	}
	if (func_150(55))
	{
		return;
	}
	if (func_148(55))
	{
		return;
	}
	MAP::REMOVE_BLIP(&iVar0);
}

void func_209(struct<4> Param0, var uParam4, var uParam5, var uParam6)
{
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (func_299() && !func_122(41))
	{
		return;
	}
	if (!func_450())
	{
		return;
	}
	if (func_157(65))
	{
		return;
	}
	if (func_451(Global_34))
	{
		return;
	}
	if (func_452())
	{
		return;
	}
	if (!func_230())
	{
		return;
	}
	func_229(65, 0);
}

void func_210(struct<4> Param0, var uParam4, var uParam5, var uParam6)
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
	if (func_299() && !func_122(41))
	{
		return;
	}
	if (func_299() && func_306() == 8)
	{
		return;
	}
	if (!func_162())
	{
		return;
	}
	if (func_453(7))
	{
		func_454();
		return;
	}
	if (func_165() == 3)
	{
		return;
	}
	if (func_451(Global_34))
	{
		return;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = func_455();
	if (iVar1 == 0)
	{
		func_456(MISC::GET_GAME_TIMER());
		return;
	}
	if (iVar1 + 10000 > iVar0)
	{
		return;
	}
	if (func_141(Global_34, func_163(), 1, 1) < 100f)
	{
		return;
	}
	if (func_157(64))
	{
		if ((iVar1 + 600000) > iVar0)
		{
			return;
		}
	}
	func_229(64, 1);
	func_456(MISC::GET_GAME_TIMER());
}

void func_211(struct<7> Param0, int iParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!Param0.f_5)
	{
		return;
	}
	iVar0 = func_436(66);
	if (iVar0 >= 3)
	{
		return;
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(Param0.f_6);
	if (func_323(iVar1) || func_324(iVar1))
	{
		return;
	}
	if (!TASK::IS_PED_SPRINTING(Param0.f_6))
	{
		return;
	}
	if (PED::IS_PED_SWIMMING(Global_34))
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
	if (func_457() == iParam7)
	{
		return;
	}
	if (func_230())
	{
		func_458(iParam7);
		func_229(66, 0);
	}
}

void func_212(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<11> Param7, var uParam18, struct<11> Param19, var uParam30)
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
		if (func_459())
		{
			func_460(0);
		}
		return;
	}
	if (func_461() < 2)
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
	if (func_104(iVar0) >= 2)
	{
		return;
	}
	iVar1 = func_436(46);
	if (iVar1 >= 1)
	{
		return;
	}
	if (func_459())
	{
		return;
	}
	func_460(1);
	func_462();
	if (func_463() <= 1)
	{
		return;
	}
	if (!func_230())
	{
		return;
	}
	func_229(46, 1);
}

void func_213(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	int iVar0;
	int iVar1;

	if (!Param0.f_1)
	{
		return;
	}
	if (!func_451(Global_34))
	{
		return;
	}
	if (!PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar0, 1, 0))
	{
		return;
	}
	if (!func_464(iVar0))
	{
		return;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_465(iVar1))
	{
		return;
	}
	if (func_230())
	{
		func_229(67, 1);
	}
}

int func_214(struct<2> Param0)
{
	if (!func_466(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_467(Param0))
	{
		return 0;
	}
	return 1;
}

int func_215()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

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
	if (PED::IS_PED_ON_MOUNT(Global_34))
	{
		if (PED::GET_MOUNT(Global_34) == iVar0)
		{
			iVar1 = 1;
		}
	}
	iVar2 = 0;
	iVar3 = WEAPON::_0xAFFD0CCF31F469B8(iVar0);
	if (func_264(iVar3, 0))
	{
		iVar2 = 1;
	}
	bVar4 = false;
	if (func_182() || func_355())
	{
		bVar4 = true;
	}
	if (iVar1 || iVar2)
	{
		if (bVar4)
		{
			return 1;
		}
	}
	return 0;
}

int func_216(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return 1;
}

void func_217(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_5 = 0;
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

int func_218(int iParam0)
{
	if (func_468())
	{
		if (Global_1915180->f_19742 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_219(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return (((*Global_1269869)[iParam1 /*20*/])->f_1 && iParam0) != 0;
}

bool func_220()
{
	return func_469() == 4;
}

int func_221(int iParam0)
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

int func_222(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::_0x9A100F1CF4546629(iParam0) || ENTITY::_0xC346A546612C49A9(iParam0))
	{
		iVar0 = func_470(&iParam0);
		if (!func_264(iVar0, 0))
		{
			iVar0 = func_471(iParam0);
		}
	}
	else
	{
		iVar0 = func_471(iParam0);
	}
	return iVar0;
}

int func_223(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_472(INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iParam0), iParam1, iParam2, bParam3, iParam4);
}

int func_224(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = 1;
	switch (iParam3)
	{
		case 0:
			break;
		case 1:
		case 2:
			iVar0 = 2;
			break;
	}
	if (func_473(INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iParam0), iParam2) < iVar0)
	{
		return 1;
	}
	return 0;
}

int func_225(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_264(iParam1, 0))
	{
		return 0;
	}
	Var0 = { func_474(iParam0) };
	Var5 = { func_475(iParam0, iParam1, Var0, Var0.f_4) };
	if (INVENTORY::_0xCB5D11F9508A928D(iParam0, &Var5, &Var0, iParam1, Var0.f_4, iParam2, 752097756))
	{
		return 1;
	}
	return 0;
}

void func_226(var uParam0, var uParam1)
{
	MISC::_COPY_MEMORY(uParam1, uParam0, 95);
}

int func_227(int iParam0)
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
	iVar1 = PED::_GET_PED_DAMAGE(iVar0);
	iVar2 = func_476(iVar0);
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
		if (PED::_IS_METAPED_USING_COMPONENT(iVar0, 43391475) || ENTITY::_0x8DE41E9902E85756(iVar0))
		{
			iVar6 = func_477(iVar5);
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

bool func_228(int iParam0, int iParam1)
{
	if (iParam1 == 119)
	{
		return func_478(iParam0);
	}
	return func_479(iParam0, iParam1);
}

void func_229(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_392(iParam0, &iVar0, &iVar1);
	if (!func_480(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_481(iVar0, iVar1);
}

int func_230()
{
	if (!func_482() && func_483(1))
	{
		return 1;
	}
	return 0;
}

int func_231(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_232(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_39.f_277.f_1[iParam0 /*431*/])->f_417;
}

int func_233(int iParam0)
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

int func_234(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return (Global_39.f_277.f_1[iParam0 /*431*/])->f_417.f_1;
}

void func_235(int iParam0, int iParam1)
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

int func_236(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return -15;
	}
	if (iParam0 >= 7)
	{
		return -15;
	}
	return (Global_39.f_277.f_1[iParam0 /*431*/])->f_417.f_2;
}

void func_237(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_484(func_243(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_238(int iParam0)
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

void func_239(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_348(&((Global_39.f_277.f_1[iParam0 /*431*/])->f_417));
}

int func_240(int iParam0)
{
	int iVar0;

	if (!func_233(iParam0))
	{
		return -1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "StableOwnedHorse");
	return iVar0;
}

void func_241(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_39.f_277.f_1[iParam0 /*431*/])->f_417 = iParam1;
}

void func_242(int iParam0, var uParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_39.f_277.f_1[iParam0 /*431*/])->f_417.f_1 = uParam1;
}

int func_243()
{
	return &Global_1902689;
}

void func_244(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_39.f_277.f_1[iParam0 /*431*/])->f_417.f_2 = iParam1;
}

int func_245(int iParam0)
{
	switch (iParam0)
	{
		case -2063289686:
		case 549900435:
			return 1;
	}
	return 0;
}

struct<8> func_246(int iParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, "", 64);
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return cVar0;
	}
	if (iParam0 >= 7)
	{
		return cVar0;
	}
	return *(Global_39.f_277.f_1[iParam0 /*431*/]);
}

char* func_247(int iParam0)
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

void func_248(int iParam0, struct<8> Param1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	*(Global_39.f_277.f_1[iParam0 /*431*/]) = { Param1 };
}

void func_249(int iParam0)
{
	int iVar0;
	char* sVar1;

	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = Global_1903007[iParam0 /*43*/];
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
	}
	sVar1 = func_485(func_246(iParam0));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		PED::_SET_PED_PROMPT_NAME(iVar0, sVar1);
	}
}

bool func_250(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return (((*Global_1903007)[iParam0 /*43*/])->f_23 && iParam1) != 0;
}

void func_251(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1903007)[iParam0 /*43*/])->f_25))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(((*Global_1903007)[iParam0 /*43*/])->f_25));
	}
	((*Global_1903007)[iParam0 /*43*/])->f_24 = 0;
}

void func_252(var uParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(*uParam0, func_487(func_486(255), joaat("COLOR_PURE_WHITE")));
	}
	else if (func_488())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_489();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

void func_253(var uParam0, bool bParam1)
{
	char* sVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(*uParam0, func_487(func_486(255), joaat("COLOR_PURE_WHITE")));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_488())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_489())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (MISC::COMPARE_STRINGS(sVar0, "", false, -1) != 0)
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sVar0);
		}
	}
}

void func_254(var uParam0)
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

void func_255(var uParam0)
{
	MAP::_SET_BLIP_FLASH_STYLE(uParam0, 673950256);
	MAP::_SET_BLIP_FLASH_STYLE(uParam0, 561559387);
	MAP::_SET_BLIP_FLASH_STYLE(uParam0, -201249929);
}

int func_256(int iParam0)
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

void func_257(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;

	if (PED::IS_PED_INJURED(Global_34))
	{
		return;
	}
	if (!func_66(iParam0))
	{
		return;
	}
	iVar0 = func_78(iParam0);
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
	if (!func_122(39))
	{
		if (func_250(iParam0, 128))
		{
			return;
		}
		if (func_490(iParam1, &uVar1))
		{
			iVar2 = func_491(iParam1);
			if (func_492(iVar0, iParam1) != iVar2)
			{
				func_493(iVar0, iParam1, iVar2);
			}
		}
		return;
	}
	if (func_321(iVar0))
	{
		return;
	}
	iVar3 = MISC::GET_GAME_TIMER();
	fVar4 = func_494(iParam0, iParam1);
	if (fVar4 >= 30f)
	{
		func_495(iParam0, iParam1, iVar3);
		return;
	}
	iVar5 = func_435(iParam0, iParam1);
	func_496(iVar0, iParam0, iParam1);
	if (func_497(iParam0, iParam1) > 0f)
	{
		func_498(iParam0, iParam1);
	}
	else
	{
		func_499(iVar0, iParam0, iParam1);
		iVar6 = func_435(iParam0, iParam1);
		func_500(iParam0, iParam1, iVar5, iVar6);
	}
	func_495(iParam0, iParam1, iVar3);
}

void func_258(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;

	if (PED::IS_PED_INJURED(Global_34))
	{
		return;
	}
	if (!func_66(iParam0))
	{
		return;
	}
	iVar0 = func_78(iParam0);
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
	if (!func_122(40))
	{
		if (func_501(iParam1, &iVar1))
		{
			iVar2 = func_502(iParam1);
			ATTRIBUTE::SET_ATTRIBUTE_BASE_RANK(iVar0, iVar1, iVar2);
		}
		return;
	}
	if (func_321(iVar0))
	{
		return;
	}
	iVar3 = MISC::GET_GAME_TIMER();
	fVar4 = func_503(iParam0, iParam1);
	if (fVar4 >= 30f)
	{
		func_504(iParam0, iParam1, iVar3);
		return;
	}
	iVar5 = func_402(iParam0, iParam1);
	func_505(iVar0, iParam0, iParam1);
	if (func_506(iParam0, iParam1) > 0f)
	{
		func_507(iParam0, iParam1);
	}
	else
	{
		func_508(iVar0, iParam0, iParam1);
		iVar6 = func_402(iParam0, iParam1);
		func_509(iParam0, iParam1, iVar5, iVar6);
	}
	func_504(iParam0, iParam1, iVar3);
}

void func_259(int iParam0)
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
	struct<8> Var9;
	int iVar17;
	struct<2> Var18;
	struct<6> Var40;
	int iVar47;
	struct<2> Var48;
	struct<6> Var70;
	int iVar77;
	var uVar78;
	int iVar79;
	var uVar80;
	int iVar81;
	float fVar82;
	float fVar83;
	float fVar84;

	iParam0 = func_77(iParam0);
	if (iParam0 <= -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_66(iParam0))
	{
		return;
	}
	iVar0 = func_78(iParam0);
	fVar1 = 1f;
	fVar2 = 1f;
	fVar3 = 0f;
	fVar4 = 1f;
	fVar5 = 1f;
	fVar6 = 0f;
	iVar7 = 0;
	iVar8 = 0;
	if (iParam0 == func_155())
	{
		Var9 = { func_285() };
		iVar17 = Var9.f_1;
		if (func_264(iVar17, 0))
		{
			Var18.f_1 = 20;
			ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iVar17, &Var18);
			iVar47 = 0;
			while (iVar47 < Var18)
			{
				ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var18.f_1[iVar47]), &Var40);
				switch (Var40.f_1)
				{
					case 2086291460:
						iVar8 = (iVar8 + BUILTIN::FLOOR((IntToFloat(Var40.f_2) * 0.01f)));
						break;
					case -1620444701:
						iVar7 = (iVar7 + BUILTIN::FLOOR((IntToFloat(Var40.f_2) * 0.01f)));
						break;
					case -225223329:
						fVar3 = (fVar3 + (Var40.f_5 * 0.01f));
						break;
					case 1167068375:
						fVar6 = (fVar6 + (Var40.f_5 * 0.01f));
						break;
					case -845587290:
						fVar5 = (fVar5 - (Var40.f_5 * 0.01f));
						break;
					case 1605773431:
						fVar4 = (fVar4 + (Var40.f_5 * 0.01f));
						break;
				}
				iVar47++;
			}
		}
		iVar17 = Var9.f_3;
		if (func_264(iVar17, 0))
		{
			Var48.f_1 = 20;
			ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iVar17, &Var48);
			iVar77 = 0;
			while (iVar77 < Var48)
			{
				ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var48.f_1[iVar77]), &Var70);
				switch (Var70.f_1)
				{
					case 2086291460:
						iVar8 = (iVar8 + BUILTIN::FLOOR((IntToFloat(Var70.f_2) * 0.01f)));
						break;
					case -1620444701:
						iVar7 = (iVar7 + BUILTIN::FLOOR((IntToFloat(Var70.f_2) * 0.01f)));
						break;
					case -225223329:
						fVar3 = (fVar3 + (Var70.f_5 * 0.01f));
						break;
					case 1167068375:
						fVar6 = (fVar6 + (Var70.f_5 * 0.01f));
						break;
					case -845587290:
						fVar5 = (fVar5 - (Var70.f_5 * 0.01f));
						break;
					case 1605773431:
						fVar4 = (fVar4 + (Var70.f_5 * 0.01f));
						break;
				}
				iVar77++;
			}
		}
	}
	if (func_510())
	{
		iVar7++;
	}
	func_511(0, fVar3);
	func_511(1, fVar6);
	uVar78 = func_512();
	iVar79 = ATTRIBUTE::GET_ATTRIBUTE_BONUS_RANK(iVar0, uVar78);
	if (iVar79 != iVar7)
	{
		ATTRIBUTE::SET_ATTRIBUTE_BONUS_RANK(iVar0, uVar78, iVar7);
	}
	uVar80 = func_513();
	iVar81 = ATTRIBUTE::GET_ATTRIBUTE_BONUS_RANK(iVar0, uVar80);
	if (iVar81 != iVar8)
	{
		ATTRIBUTE::SET_ATTRIBUTE_BONUS_RANK(iVar0, uVar80, iVar8);
	}
	fVar82 = PED::_0x95B8E397B8F4360F(iVar0);
	if (fVar82 != fVar1)
	{
		PED::_0xDE1B1907A83A1550(iVar0, fVar1);
	}
	fVar2 = fVar2;
	fVar83 = PED::_0xE7687EB2F634ABF0(iVar0);
	if (fVar83 != fVar4)
	{
		PED::_0x345C9F993A8AB4A4(iVar0, fVar4);
	}
	fVar84 = PED::_0x825F6DD559A0895B(iVar0);
	if (fVar84 != fVar5)
	{
		PED::_0xEF5A3D2285D8924B(iVar0, fVar5);
	}
}

void func_260(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;

	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_78(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_221(iVar6);
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

void func_261(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1903007)[iParam0 /*43*/] = iParam1;
}

struct<4> func_262(bool bParam0)
{
	int iVar0;

	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_514(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1272170))
			{
				*Global_1272170 = { func_263(joaat("character"), func_515(), -1591664384, bParam0) };
			}
			return *Global_1272170;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_12)))
			{
				Global_1272170->f_12 = { func_263(joaat("character"), func_515(), -1591664384, 0) };
			}
			return Global_1272170->f_12;
		}
	}
	return func_263(joaat("character"), func_515(), -1591664384, bParam0);
}

struct<4> func_263(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_264(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_514(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_264(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_265(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_264(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_516(iParam0, joaat("default")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_263(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_514(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_514(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

void func_266(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_267(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_264(iParam0, 0))
	{
		return 0;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_517(iParam0, uParam2, iParam3, bParam5, 0, -1, 0))
	{
		return 0;
	}
	if (!func_518(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_514(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_268(struct<4> Param0, int iParam4)
{
	struct<11> Var0;

	if (!func_518(0))
	{
		return func_519(Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_520(Param0, &Var0, 0, 0, -1))
	{
		return 0;
	}
	if (Var0.f_10 == iParam4)
	{
		return 1;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_514(0), &Param0, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_269(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if ((func_250(iParam0, 2) || func_250(iParam0, 4)) || func_250(iParam0, 8))
	{
		return 1;
	}
	return 0;
}

Vector3 func_270(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f, 0f, 0f;
	}
	return ((*Global_1903007)[iParam0 /*43*/])->f_19;
}

float func_271(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return ((*Global_1903007)[iParam0 /*43*/])->f_22;
}

void func_272(int iParam0)
{
	func_521(iParam0);
	func_522(iParam0);
}

int func_273()
{
	bool bVar0;

	bVar0 = PED::_0x5E420FF293EE5472();
	if (bVar0)
	{
		return 1;
	}
	return 0;
}

int func_274(int iParam0)
{
	int iVar0;

	iVar0 = 1;
	if (!func_523(iParam0))
	{
		iVar0 = 0;
	}
	if (!func_524(iParam0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_275(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam0));
	return iVar0;
}

void func_276(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34))
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
	if (func_320(iParam0))
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
	PED::_0x931B241409216C1F(Global_34, iParam0, 0);
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
	if (func_319(iParam0))
	{
		iVar3 = func_334(iParam0);
		if (func_525(iVar3))
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

void func_277(int iParam0, int iParam1)
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
	iVar0 = func_282(iParam1);
	DECORATOR::DECOR_SET_INT(iParam0, "HorseGender", iVar0);
	iVar1 = func_104(iParam1);
	func_526(iParam0, iVar1);
	PED::_0xA69899995997A63B(iParam0, iVar1);
	iVar2 = BUILTIN::FLOOR(func_295(iParam1));
	func_527(iParam0, iVar2);
	iVar4 = 0;
	while (iVar4 < 2)
	{
		if (func_490(iVar4, &uVar3))
		{
			iVar5 = func_435(iParam1, iVar4);
			func_493(iParam0, iVar4, iVar5);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < 3)
	{
		if (func_501(iVar7, &uVar6))
		{
			iVar5 = func_402(iParam1, iVar7);
			func_528(iParam0, iVar7, iVar5);
		}
		iVar7++;
	}
	iVar8 = PLAYER::PLAYER_ID();
	PED::_0xA691C10054275290(iParam0, iVar8, func_529(iParam1));
	if (iParam1 == 0)
	{
		PED::_0x6734F0A6A52C371C(iVar8, func_530(iParam1));
		PED::_0x024EC9B649111915(iParam0, 1);
	}
}

void func_278(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_216(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::_0xF49F14462F0AE27C(PLAYER::GET_PLAYER_INDEX());
	if (!func_231(iVar0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		func_531(iVar0, (Global_39.f_277.f_1[iParam0 /*431*/])->f_15[iVar1 /*95*/], iVar1);
		iVar1++;
	}
}

void func_279(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;

	if (!func_216(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::_0xF49F14462F0AE27C(PLAYER::GET_PLAYER_INDEX());
	if (!func_231(iVar0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = &(Global_39.f_277.f_1[iParam0 /*431*/])->f_353[iVar1 /*5*/];
		if (func_264(iVar2, 0))
		{
			iVar3 = iVar2;
			uVar4 = ((Global_39.f_277.f_1[iParam0 /*431*/])->f_353[iVar1 /*5*/])->f_1;
			uVar5 = ((Global_39.f_277.f_1[iParam0 /*431*/])->f_353[iVar1 /*5*/])->f_2;
			PED::_0xC412AA1C73111FE0(iVar0, iVar3, uVar4, uVar5, 0);
		}
		iVar1++;
	}
}

void func_280(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_532(iParam0);
	func_533();
}

float func_281(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	return (Global_39.f_277.f_1[iParam0 /*431*/])->f_415.f_1;
}

int func_282(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_39.f_277.f_1[iParam0 /*431*/])->f_10;
}

void func_283(int iParam0, int iParam1)
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

struct<2> func_284(int iParam0)
{
	struct<2> Var0;
	var uVar2;
	var uVar3;

	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_534(iParam0, &uVar2))
	{
	}
	if (!func_535(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<8> func_285()
{
	struct<8> Var0;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;

	if (func_536(802754820, &uVar8))
	{
		Var0.f_6 = uVar8;
	}
	if (func_536(-1886147520, &uVar9))
	{
		Var0.f_7 = uVar9;
	}
	if (func_536(-997150586, &uVar10))
	{
		Var0.f_4 = uVar10;
	}
	if (func_536(-1189569496, &uVar11))
	{
		Var0 = uVar11;
	}
	if (func_536(325139909, &uVar12))
	{
		Var0.f_2 = uVar12;
	}
	if (func_536(1310070322, &uVar13))
	{
		Var0.f_5 = uVar13;
	}
	if (func_536(986998820, &uVar14))
	{
		Var0.f_3 = uVar14;
	}
	if (func_536(-415648720, &uVar15))
	{
		Var0.f_1 = uVar15;
	}
	return Var0;
}

void func_286(var uParam0)
{
	func_537(uParam0);
	func_538(uParam0, 0);
	func_539(uParam0, 0);
	func_540(uParam0, 0);
	func_541(uParam0, 0);
	func_542(uParam0, 0);
	func_543(uParam0, 0);
	func_544(uParam0, 0);
}

int func_287(int iParam0, int iParam1)
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
	if (func_501(iParam1, &uVar0))
	{
		return ATTRIBUTE::GET_ATTRIBUTE_BASE_RANK(iParam0, uVar0);
	}
	return 0;
}

int func_288(int iParam0)
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

void func_289(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1903007)[iParam0 /*43*/])->f_1 = iParam1;
}

int func_290(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_39.f_277.f_1[iParam0 /*431*/])->f_428;
}

void func_291(int iParam0, bool bParam1)
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

void func_292(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
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
	func_545(iParam0);
	func_546(iParam0, uParam1);
	func_547(iParam0);
	func_548(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_549(iParam0, iParam3, 0);
	}
	if (bParam4)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, 0, 1, 1, 1, 1);
	}
}

void func_293(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1903007)[iParam0 /*43*/])->f_19 = { 0f, 0f, 0f };
	((*Global_1903007)[iParam0 /*43*/])->f_22 = 0f;
}

void func_294(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_318(iParam0, 1);
}

float func_295(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return (Global_39.f_277.f_1[iParam0 /*431*/])->f_369.f_1;
}

var func_296(int iParam0, int iParam1)
{
	var uVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		iParam0 = 1074477367;
	}
	uVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iParam0, 7, iParam1);
	return uVar0;
}

float func_297(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

bool func_298()
{
	return (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_26285) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_26285, 0));
}

int func_299()
{
	return 1;
	if (Global_1572887->f_13 == 0)
	{
		return 1;
	}
	return Global_39.f_1;
}

int func_300()
{
	return Global_1903007->f_364;
}

void func_301(int iParam0)
{
	Global_1903007->f_364.f_9 = iParam0;
}

void func_302(int iParam0)
{
	Global_1903007->f_364.f_10 = iParam0;
}

void func_303(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (&Global_1903007->f_364.f_1[iParam0] != iParam1)
	{
	}
	Global_1903007->f_364.f_1[iParam0] = iParam1;
}

void func_304(int iParam0)
{
	Global_1903007->f_302 = (Global_1903007->f_302 - (Global_1903007->f_302 && iParam0));
}

void func_305(int iParam0)
{
	Global_1903007->f_364.f_11 = iParam0;
}

int func_306()
{
	return Global_1896610->f_41;
}

bool func_307()
{
	int iVar0;

	iVar0 = UIFEED::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && UIFEED::_0x59FA676177DBE4C9(iVar0) == 4);
}

int func_308(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (func_152(iParam0) == 0)
	{
		return 0;
	}
	return 1;
}

void func_309()
{
	int iVar0;

	iVar0 = (Global_39.f_277.f_1[5 /*431*/])->f_11;
	switch (iVar0)
	{
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(func_78(6)) && func_141(Global_34, func_78(6), 1, 1) <= 80f)
			{
				func_313("WHISTLE_NEAR_UNBONDED", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_313("WHISTLE_HORSE_DEAD", 10000, 0, 0, 0, 1);
			}
			break;
		case 2:
			func_313("WHISTLE_HORSE_STOLEN", 10000, 0, 0, 0, 1);
			break;
	}
}

int func_310(int iParam0)
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

int func_311(int iParam0)
{
	var uVar0;
	int iVar3;

	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::_GET_INTERIOR_INFO(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case 653987431:
			case 1442115297:
			case 1911907177:
				return 1;
		}
	}
	return 0;
}

int func_312(int iParam0)
{
	int iVar0;

	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_66(iParam0))
	{
		return 0;
	}
	iVar0 = func_78(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 1;
	}
	return 0;
}

var func_313(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_314(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1903007)[iParam0 /*43*/])->f_25))
	{
		if (((*Global_1903007)[iParam0 /*43*/])->f_24 == 2)
		{
			MAP::_SET_BLIP_FLASH_STYLE(((*Global_1903007)[iParam0 /*43*/])->f_25, -1814032670);
			MAP::_BLIP_SET_MODIFIER(((*Global_1903007)[iParam0 /*43*/])->f_25, -1814032670);
		}
		else if (((*Global_1903007)[iParam0 /*43*/])->f_24 == 1)
		{
			MAP::_SET_BLIP_FLASH_STYLE(((*Global_1903007)[iParam0 /*43*/])->f_25, -272772079);
			MAP::_BLIP_SET_MODIFIER(((*Global_1903007)[iParam0 /*43*/])->f_25, -272772079);
		}
	}
}

void func_315(int iParam0)
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
	int iVar68;

	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_20(iParam0, &Var0);
	iVar12 = func_159(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar12))
	{
		func_303(iParam0, 6);
		return;
	}
	iVar13 = func_104(iParam0);
	iVar14 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar12, 7);
	func_20(0, &Var15);
	func_20(1, &Var27);
	if (iParam0 == 1 && !Var27.f_2)
	{
		func_303(iParam0, 6);
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
	switch (func_316(iParam0))
	{
		case 0:
			func_303(iParam0, 1);
		case 1:
			if (iParam0 == 0)
			{
				if (func_74(0) == 1 && !func_66(0))
				{
					func_303(iParam0, 2);
					return;
				}
			}
			if (!func_66(iParam0))
			{
				func_303(iParam0, 6);
				return;
			}
			if (func_104(iParam0) < 1)
			{
				func_303(iParam0, 6);
				return;
			}
			if (!Var0.f_11)
			{
				if (func_550())
				{
					func_303(iParam0, 2);
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
				if (!func_230())
				{
					bVar40 = false;
				}
				if (bVar40)
				{
					iVar42 = -1;
					iVar43 = -1;
					if (func_436(1) < 3)
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
						func_229(iVar43, 1);
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
								iVar57 = func_551();
							}
							else if (iParam0 == 1)
							{
								iVar57 = func_552();
							}
							if (!MAP::DOES_BLIP_EXIST(iVar57))
							{
								iVar57 = MAP::_0x3E593DF9C2962EC6(iVar56);
								MAP::_BLIP_SET_MODIFIER(iVar57, 1313031610);
								if (iParam0 == 0)
								{
									func_553(&iVar57);
								}
								else if (iParam0 == 1)
								{
									func_554(&iVar57);
								}
							}
							func_555(iVar42, iVar57, 1);
						}
					}
					else if (iVar42 != -1)
					{
						func_229(iVar42, 1);
					}
				}
			}
			func_303(iParam0, 5);
			break;
		case 2:
			func_556(&(((*Global_1903007)[iParam0 /*43*/])->f_4));
			func_303(iParam0, 3);
		case 3:
			vVar62 = { func_557(iParam0) };
			if (!func_558(&(((*Global_1903007)[iParam0 /*43*/])->f_4), Global_35, vVar62, Var0, 1065353216 /* Float: 1f */))
			{
				if (((*Global_1903007)[iParam0 /*43*/])->f_4.f_1)
				{
					if (!func_307())
					{
						func_313("WHISTLE_NOSPAWN_AREA", 10000, 0, 0, 0, 1);
					}
					func_251(iParam0);
					func_559(Global_34, "HORSE_NO_SHOW", joaat("speech_params_standard"), 0, 1, 0, 0, 1);
					func_303(iParam0, 6);
				}
				return;
			}
			vVar58 = { func_560(&(((*Global_1903007)[iParam0 /*43*/])->f_4)) };
			fVar61 = func_561(vVar58, Global_35, 1);
			if (!func_66(iParam0))
			{
				func_562(iParam0, vVar58, fVar61);
				func_563(iParam0);
			}
			func_303(iParam0, 4);
		case 4:
			if (!ENTITY::DOES_ENTITY_EXIST(Var0))
			{
				return;
			}
			if (ENTITY::IS_ENTITY_DEAD(Var0) || PED::IS_PED_INJURED(Var0))
			{
				return;
			}
			vVar58 = { func_560(&(((*Global_1903007)[iParam0 /*43*/])->f_4)) };
			fVar61 = func_561(vVar58, Global_35, 1);
			ENTITY::FREEZE_ENTITY_POSITION(Var0, false);
			ENTITY::SET_ENTITY_COORDS(Var0, vVar58, true, false, true, true);
			ENTITY::SET_ENTITY_HEADING(Var0, fVar61);
			ENTITY::_0x9587913B9E772D29(Var0, 0);
			func_303(iParam0, 5);
		case 5:
			if (!Var0.f_2)
			{
				func_303(iParam0, 6);
				return;
			}
			if (Var0.f_10)
			{
				func_303(iParam0, 6);
				return;
			}
			bVar65 = false;
			if (ENTITY::DOES_ENTITY_EXIST(Var0.f_9))
			{
				if (func_564(iParam0))
				{
					bVar65 = true;
				}
			}
			if (bVar65)
			{
				func_565(iParam0, 1);
			}
			bVar66 = false;
			if (Var0.f_11 || func_550())
			{
				bVar66 = true;
			}
			if (!bVar66)
			{
				func_61(iParam0);
				func_314(iParam0);
				func_303(iParam0, 6);
				return;
			}
			bVar67 = true;
			if (bVar67)
			{
				PHYSICS::_0x0348469DAA17576C(Var0);
				ENTITY::FREEZE_ENTITY_POSITION(Var0, false);
				if (func_566() == 0)
				{
					if (func_129(Var0, 2043986356))
					{
						func_301(1);
					}
				}
				iVar68 = func_566();
				TASK::TASK_GO_TO_WHISTLE(Var0, Global_34, iVar68);
				FLOCK::_0xFF1E339CE40EAAAF(Var0, -1);
				FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Var0, 48, false);
				func_305(iVar39);
			}
			func_61(iParam0);
			func_314(iParam0);
			func_303(iParam0, 6);
			break;
		case 6:
			break;
	}
}

int func_316(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return &(Global_1903007->f_364.f_1[iParam0]);
}

bool func_317(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_318(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1903007)[iParam0 /*43*/])->f_23 = (((*Global_1903007)[iParam0 /*43*/])->f_23 - (((*Global_1903007)[iParam0 /*43*/])->f_23 && iParam1));
}

int func_319(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_334(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return 1;
}

int func_320(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (func_567(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return 1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseCompanion"))
	{
		return 1;
	}
	return 0;
}

int func_321(int iParam0)
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

int func_322(int iParam0)
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

int func_323(int iParam0)
{
	switch (iParam0)
	{
		case joaat("a_c_donkey_01"):
			return 1;
	}
	return 0;
}

int func_324(int iParam0)
{
	switch (iParam0)
	{
		case joaat("a_c_horsemule_01"):
		case joaat("a_c_horsemulepainted_01"):
			return 1;
	}
	return 0;
}

int func_325()
{
	return Global_1903007->f_392;
}

void func_326(int iParam0)
{
	Global_1903007->f_392 = iParam0;
}

int func_327()
{
	return Global_1903007->f_392.f_6;
}

void func_328(int iParam0)
{
	Global_1903007->f_392.f_6 = iParam0;
}

int func_329(int iParam0, var uParam1, float fParam2)
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
		fVar1 = func_141(iParam0, iVar0, 0, 1);
		if (fVar1 > fParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_330(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_568(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_13 != -1)
	{
		if (iParam0 == Global_1275573->f_10)
		{
			if (!Global_1275573->f_11)
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

int func_331(int iParam0)
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
	if (func_144(iParam0) == 0f)
	{
		return 1;
	}
	return 0;
}

int func_332(int iParam0)
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

int func_333(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;

	if (func_81(1024))
	{
		return 0;
	}
	if (!func_122(42))
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
	if (func_319(iParam0))
	{
		if (func_334(iParam0) != 6)
		{
			return 0;
		}
	}
	if (func_320(iParam0))
	{
		return 0;
	}
	if (func_321(iParam0))
	{
		return 0;
	}
	if (func_322(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (func_323(iVar0))
	{
		return 0;
	}
	if (func_324(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_ON_MOUNT(Global_34))
	{
		if (PED::GET_MOUNT(Global_34) == iParam0)
		{
		}
		else
		{
			return 0;
		}
	}
	if (func_329(iParam0, &uVar1, 100f))
	{
		return 0;
	}
	iVar2 = PLAYER::PLAYER_ID();
	if (func_330(iVar2, 1, 0, 1))
	{
		return 0;
	}
	if (LAW::_0x0BB6DE7D23C60626(iVar2))
	{
	}
	if (LAW::_0x69E181772886F48B(iVar2))
	{
		return 0;
	}
	if (LAW::_0xF0FBFB9AB15F7734(iVar2, 1, 0))
	{
		return 0;
	}
	if (!func_331(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_334(int iParam0)
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
		if (iParam0 == Global_1903007[iVar0 /*43*/])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_335(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	func_251(iParam0);
	func_251(iParam0);
	func_569(iParam0, iParam1);
	func_570(iParam0, iParam1);
	func_571(iParam0, iParam1);
	iVar1 = func_78(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iParam0 == 0)
		{
			PLAYER::_0x8FBF9EDB378CCB8C(iVar0, iVar1);
		}
		else if (iParam0 == 1)
		{
			PLAYER::_0x227B06324234FB09(iVar0, iVar1);
		}
	}
	iVar2 = func_78(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		if (iParam1 == 0)
		{
			PLAYER::_0x8FBF9EDB378CCB8C(iVar0, iVar2);
		}
		else if (iParam1 == 1)
		{
			PLAYER::_0x227B06324234FB09(iVar0, iVar2);
		}
	}
	func_336();
}

void func_336()
{
	if (func_66(0))
	{
		func_61(0);
	}
	if (func_66(1))
	{
		func_61(1);
	}
	if (func_66(5))
	{
		func_61(5);
	}
	if (func_66(6))
	{
		func_251(6);
	}
}

void func_337(int iParam0, bool bParam1)
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
	if (func_319(iParam0))
	{
		iVar0 = func_334(iParam0);
		func_251(iVar0);
	}
	if (func_66(6))
	{
		func_105(6, 0);
	}
	func_106(6);
	func_350(iParam0, 6, 0);
	func_154(6, 1);
	if (!bParam1)
	{
		func_387(6, 0);
		func_572(MISC::GET_GAME_TIMER());
	}
	func_336();
}

void func_338(int iParam0)
{
	int iVar0;

	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_135(iParam0);
	if (!SCRIPTS::_DOES_THREAD_EXIST(iVar0))
	{
		func_137(iParam0);
	}
	else if (!SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
	{
		func_137(iParam0);
	}
}

void func_339(int iParam0)
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
	uVar0 = func_512();
	ATTRIBUTE::SET_ATTRIBUTE_BONUS_RANK(iParam0, uVar0, 0);
	uVar1 = func_513();
	ATTRIBUTE::SET_ATTRIBUTE_BONUS_RANK(iParam0, uVar1, 0);
	PED::_0xDE1B1907A83A1550(iParam0, 1f);
	PED::_0x345C9F993A8AB4A4(iParam0, 1f);
	PED::_0xEF5A3D2285D8924B(iParam0, 1f);
}

void func_340(var uParam0)
{
	*uParam0 = -377364164; /* GXTEntry: "Natural" */
	uParam0->f_1 = 357708345; /* GXTEntry: "Natural" */
}

void func_341(int iParam0, struct<2> Param1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_573(iParam0, Param1))
	{
	}
	if (!func_574(iParam0, Param1.f_1))
	{
	}
}

void func_342(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_217((*uParam0)[iVar0 /*95*/]);
		iVar0++;
	}
}

void func_343(var uParam0)
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

void func_344(var uParam0)
{
	int iVar0;

	uParam0->f_1 = 0f;
	*uParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 21)
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

void func_345(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_346(int iParam0, var uParam1)
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

void func_347(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1f;
}

void func_348(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_349(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

void func_350(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

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
	if (func_320(iParam0))
	{
		return;
	}
	if (func_321(iParam0))
	{
		return;
	}
	if (!ENTITY::_0x88AD6CC10D8D35B2(iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, true);
	}
	func_261(iParam1, iParam0);
	func_575(iParam1, iParam2);
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	if (iParam0 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(iVar0))
	{
		func_576(iParam1, 0);
	}
	else
	{
		iVar1 = func_577(iParam0);
		func_576(iParam1, iVar1);
	}
	if (iParam1 == 0)
	{
		PLAYER::_0x8FBF9EDB378CCB8C(iVar0, iParam0);
	}
	else if (iParam1 == 1)
	{
		PLAYER::_0x227B06324234FB09(iVar0, iParam0);
	}
	if (iParam1 == 6)
	{
		return;
	}
	func_276(iParam0);
	if (func_396(iParam1))
	{
		func_397(iParam1);
	}
	iVar2 = func_159(iParam1);
	iVar3 = func_398(iVar2);
	func_399(iParam1, iVar3);
}

void func_351(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_159(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		func_578(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = func_579(iVar0);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = BUILTIN::TO_FLOAT(func_296(iVar0, iParam1));
	(Global_39.f_277.f_1[iParam0 /*431*/])->f_369 = iParam1;
	(Global_39.f_277.f_1[iParam0 /*431*/])->f_369.f_1 = fVar4;
	func_580(iParam1);
	iVar5 = func_78(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar5) || PED::IS_PED_INJURED(iVar5))
	{
		return;
	}
	iVar6 = BUILTIN::FLOOR((Global_39.f_277.f_1[iParam0 /*431*/])->f_369.f_1);
	func_527(iVar5, iVar6);
	iVar7 = func_332(iVar5);
	(Global_39.f_277.f_1[iParam0 /*431*/])->f_369 = iVar7;
	PED::_0xA69899995997A63B(iVar5, iVar7);
}

int func_352(int iParam0)
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

int func_353(int iParam0)
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

int func_354(int iParam0)
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

bool func_355()
{
	return (Global_1893575 & 1 != 0 && func_581() != -1);
}

void func_356(bool bParam0)
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

void func_357(bool bParam0)
{
	Global_1904591->f_2 = 0;
	Global_1904591->f_1 = 0;
	Global_1904591->f_3 = 0;
	Global_1904591->f_4 = 0;
	Global_1904591->f_5 = 0;
	Global_1904591->f_6 = 0;
	Global_1904591->f_7 = 0;
	if (bParam0)
	{
		Global_1904591->f_8 = 0;
		Global_1904591->f_9 = 0;
		Global_1904591->f_10 = 0;
	}
}

void func_358(int iParam0)
{
	Global_1904591 = iParam0;
}

bool func_359()
{
	return Global_1904591->f_5;
}

int func_360()
{
	return Global_1904591->f_2;
}

int func_361()
{
	return Global_1904591->f_1;
}

int func_362(int iParam0)
{
	if (func_582(iParam0))
	{
		return 1;
	}
	if (func_583(iParam0))
	{
		return 1;
	}
	if (func_584(iParam0))
	{
		return 1;
	}
	if (func_585(iParam0))
	{
		return 1;
	}
	if (func_586(iParam0))
	{
		return 1;
	}
	if (func_587(iParam0))
	{
		return 1;
	}
	if (func_588(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_363()
{
	int iVar0;
	int iVar1;

	iVar0 = func_360();
	iVar1 = func_361();
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
	if (!PED::_0xD543D3A8FDE4F185(Global_34, iVar0))
	{
		return 0;
	}
	if (!func_362(iVar1))
	{
		return 0;
	}
	if (PED::IS_PED_SWIMMING(Global_34))
	{
		return 0;
	}
	if (PED::IS_PED_SWIMMING(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_364(int iParam0, int iParam1)
{
	struct<18> Var0;
	bool bVar25;
	int iVar26;
	int iVar27;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34) || PED::IS_PED_INJURED(Global_34))
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
	if (func_582(iParam1))
	{
		iVar26 = 0;
		iVar27 = -224471938;
		bVar25 = true;
	}
	if ((func_584(iParam1) || func_585(iParam1)) || func_583(iParam1))
	{
		iVar26 = joaat("p_cs_syringe01x");
		iVar27 = -1355254781;
		bVar25 = true;
	}
	if (func_586(iParam1))
	{
		iVar27 = 1968415774;
		bVar25 = true;
	}
	if (func_587(iParam1))
	{
		iVar27 = 554992710;
		bVar25 = true;
	}
	if (!bVar25)
	{
		return 0;
	}
	TASK::TASK_ANIMAL_INTERACTION(Global_34, iParam0, iVar27, iVar26, 0);
	return 1;
}

void func_365(int iParam0)
{
	Global_1904591->f_3 = iParam0;
}

int func_366()
{
	return Global_1904591->f_3;
}

void func_367(int iParam0)
{
	Global_1904591->f_4 = iParam0;
}

void func_368(int iParam0)
{
	Global_1904591->f_8 = iParam0;
}

void func_369(int iParam0)
{
	Global_1904591->f_9 = iParam0;
}

void func_370(int iParam0)
{
	Global_1904591->f_10 = iParam0;
}

void func_371(int iParam0)
{
	Global_1904591->f_7 = iParam0;
}

bool func_372()
{
	return Global_1904591->f_7;
}

int func_373(int iParam0, int iParam1)
{
	if (!func_264(iParam0, 0))
	{
		return func_590(func_589(iParam0), iParam1);
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

int func_374(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	struct<5> Var7;

	if (!func_264(iParam0, 0))
	{
		return 0;
	}
	if (iParam3 == -142743235)
	{
		if (func_591(iParam0))
		{
			iParam3 = 562618531;
		}
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_592(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_34, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_593(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
		}
		return 0;
	}
	if (!func_594(iParam0, 1))
	{
		return 0;
	}
	Var5 = { func_595(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((func_596(iParam0, 0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_596(iParam0, 0, 0, 0) - iParam1) < 0)
		{
			func_374(iParam0, func_596(iParam0, 0, 0, 0), bParam2, iParam3);
			return 0;
		}
	}
	if (func_597(iParam0) == joaat("weapon"))
	{
		if (!func_598(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_599(iParam0, iParam1, iParam3, bParam2, 0))
	{
		return 0;
	}
	else
	{
		Var7 = { func_600(iParam0, 0, 0) };
		if (func_518(0) && Var7.f_4 == 1084182731)
		{
			func_601(1, 0, 0);
		}
	}
	if (iParam0 == -569063887)
	{
		Global_1939067->f_21 = 0;
	}
	if (!func_518(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_593(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
	}
	return 1;
}

void func_375(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	if (!func_362(iParam1))
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
	bVar0 = func_2() == false;
	if (func_582(iParam1))
	{
		if (bVar0)
		{
			func_602(iParam0, iParam1);
		}
		else
		{
			func_603(iParam0, iParam1);
		}
		return;
	}
	if (func_583(iParam1))
	{
		if (bVar0)
		{
			func_604(iParam0, iParam1);
		}
		else
		{
			func_605(iParam0, iParam1);
		}
		return;
	}
	if (func_584(iParam1))
	{
		if (bVar0)
		{
			func_606(iParam0, iParam1);
		}
		else
		{
			func_607(iParam0, iParam1);
		}
		return;
	}
	if (func_585(iParam1))
	{
		if (bVar0)
		{
			func_608(iParam0, iParam1);
		}
		else
		{
			func_609(iParam0, iParam1);
		}
		return;
	}
	if (func_586(iParam1))
	{
		if (bVar0)
		{
			func_610(iParam0, iParam1);
		}
		else
		{
			func_611(iParam0, iParam1);
		}
		return;
	}
	if (func_588(iParam1))
	{
		if (bVar0)
		{
			func_612(iParam0, iParam1);
		}
		else
		{
			func_613(iParam0, iParam1);
		}
		return;
	}
	if (func_587(iParam1))
	{
		if (bVar0)
		{
			iVar1 = func_614();
			func_615(iParam0, iParam1, iVar1);
		}
		else
		{
			func_616(iParam0, iParam1, func_614());
		}
		return;
	}
}

bool func_376()
{
	return Global_1904591->f_6;
}

int func_377()
{
	return Global_1904591->f_8;
}

bool func_378()
{
	return Global_1904591->f_10;
}

struct<4> func_379(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<4> Var0;
	struct<4> Var29;
	bool bVar33;
	int iVar34;
	struct<4> Var35;

	Var0.f_9 = -1591664384;
	if (!func_617(&Var0, bParam0))
	{
	}
	if (!bParam2)
	{
		Var29 = { func_618() };
		if (func_619() && INVENTORY::_0xB881CA836CC4B6D4(&Var29))
		{
			Var0 = { Var29 };
		}
		else if (!INVENTORY::_0x4C543D5DFCD2DAFD(&Var29, &Var0))
		{
			func_620(&Var0, 0);
		}
	}
	if (iParam3 == -1)
	{
		iParam3 = func_621(PLAYER::PLAYER_ID());
	}
	bVar33 = func_622(75);
	if (bVar33)
	{
		iParam3 = 3;
	}
	iVar34 = func_623(iParam3, 0);
	if (iVar34 != 3)
	{
		if (INVENTORY::_0xB881CA836CC4B6D4(Global_17172.f_54.f_61[iVar34 /*4*/]))
		{
			Var0 = { *(Global_17172.f_54.f_61[iVar34 /*4*/]) };
		}
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		if (!bParam1)
		{
			return func_515();
		}
		if (!func_624(&Var0, 0))
		{
			Var35 = { func_625(bParam0) };
		}
		else
		{
			Var35 = { Var0 };
		}
		return Var35;
	}
	return Var0;
}

int func_380(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam1 == -1)
	{
		return 0;
	}
	func_626(Global_1903929);
	switch (iParam1)
	{
		case 0:
		case 1:
			if (!func_627(uParam0, Global_1903929, &(Global_1903929->f_71), bParam3))
			{
				return 0;
			}
			break;
		case 2:
			if (!func_628(uParam0, Global_1903929, &(Global_1903929->f_100), bParam3))
			{
				return 0;
			}
			break;
	}
	if (bParam2)
	{
		func_629(Global_1903929);
	}
	return 1;
}

int func_381(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	int iVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (INVENTORY::_0x4C543D5DFCD2DAFD(Global_17172.f_54.f_61.f_41[iVar0 /*54*/], &uParam0))
		{
			return &((Global_17172.f_54.f_61.f_41[iVar0 /*54*/])->f_38[iParam4 /*4*/]);
		}
		iVar0++;
	}
	if (!func_630(&uParam0))
	{
		return 0;
	}
	return 0;
}

void func_382(int iParam0, struct<4> Param1, int iParam5, int iParam6)
{
	func_631(iParam0, Param1, iParam5, (func_381(Param1, iParam5) + iParam6));
}

void func_383(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_287(iParam0, iParam1);
	func_528(iParam0, iParam1, (iVar0 + iParam2));
}

int func_384(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_385(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_39.f_3434[iVar1]), iVar2);
}

void func_386(int iParam0, float fParam1)
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
		case 10:
		case 11:
			sVar0 = "HORSE_XP_HITCH";
			break;
		case 5:
			return;
		case 6:
			sVar0 = "HORSE_XP_BREAK_HORSE";
			break;
		case 12:
		case 13:
		case 14:
			sVar0 = "HORSE_XP_FED";
			break;
		case 15:
			sVar0 = "HORSE_XP_TREAT";
			break;
		case 16:
		case 17:
			sVar0 = "HORSE_XP_GROOM";
			break;
		case 18:
			sVar0 = "HORSE_XP_OINTMENT";
			break;
		case 7:
		case 8:
			sVar0 = "HORSE_XP_PATTED";
			break;
		case 9:
			sVar0 = "HORSE_XP_CALM";
			break;
		case 19:
		case 20:
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
	func_632(sVar0, "ITEMTYPE_TEXTURES", 48560695, 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_387(int iParam0, int iParam1)
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
	iParam0 = func_77(iParam0);
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
		if (!func_122(42))
		{
			return;
		}
	}
	iVar0 = func_159(iParam0);
	if (func_323(iVar0) || func_324(iVar0))
	{
		return;
	}
	iVar1 = func_104(iParam0);
	if (iVar1 >= func_579(iVar0))
	{
		return;
	}
	if (func_633(iParam0, iParam1))
	{
		return;
	}
	if (func_634(iParam0, iParam1))
	{
		return;
	}
	fVar2 = func_635(iParam0, iParam1);
	fVar3 = func_636(iParam1);
	switch (iParam1)
	{
		case 1:
			iVar4 = func_78(iParam0);
			if (func_637(iVar4, 0))
			{
				fVar3 = (fVar3 * 0.5f);
			}
			(Global_1903007->f_303.f_2[iParam0 /*5*/])->f_2 = ((Global_1903007->f_303.f_2[iParam0 /*5*/])->f_2 + fVar3);
			break;
		case 2:
		case 3:
			if (func_638())
			{
				fVar3 = (fVar3 * 2f);
			}
			(Global_1903007->f_303.f_2[iParam0 /*5*/])->f_2 = ((Global_1903007->f_303.f_2[iParam0 /*5*/])->f_2 + fVar3);
			break;
		case 4:
			(Global_1903007->f_303.f_2[iParam0 /*5*/])->f_4 = ((Global_1903007->f_303.f_2[iParam0 /*5*/])->f_4 + fVar3);
			break;
		case 5:
			if (iVar1 < 1)
			{
				fVar5 = func_295(iParam0);
				fVar6 = BUILTIN::TO_FLOAT(func_296(iVar0, iVar1));
				fVar7 = BUILTIN::TO_FLOAT(func_296(iVar0, iVar1 + 1));
				fVar3 = (fVar7 - (fVar6 + fVar5));
			}
			else
			{
				fVar3 = 0f;
			}
			break;
		default:
			func_386(iParam1, fVar3);
			break;
	}
	func_639(iParam0, fVar3);
	func_640(iParam0, iParam1, (fVar2 + fVar3));
}

int func_388(int iParam0, int iParam1)
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

void func_389(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_318(iParam0, 32);
	func_336();
}

void func_390(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_532(iParam0);
	func_351(iParam0, 0);
	func_641(iParam0, 0f);
}

void func_391(int iParam0)
{
	UIFEED::_0xDD1232B332CBB9E7(1, iParam0, 0);
}

void func_392(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

void func_393(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_39.f_3434[iVar1];
	MISC::SET_BIT(&uVar3, iVar2);
	Global_39.f_3434[iVar1] = uVar3;
}

void func_394(int iParam0)
{
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
			func_642(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_643(1);
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_643(2);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_643(3);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 30:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 31:
			break;
		case 32:
			func_184(1);
			break;
		case 33:
			func_186(1);
			break;
		case 34:
			func_188(1);
			break;
		case 35:
			break;
		case 36:
			func_644(0);
			break;
		case 37:
			func_645(0);
			break;
		case 38:
			func_646(0);
			break;
		case 39:
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if (func_299() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_647("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_229(675, 0);
			break;
		case 3:
			if (func_299() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_647("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_229(676, 0);
			break;
		case 4:
			if (func_299() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_647("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_229(677, 0);
			break;
		case 5:
			if (func_299() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_647("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_229(678, 0);
			break;
		case 23:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-200143754, true);
			UNLOCK::_UNLOCK_SET_VISIBLE(-200143754, true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			break;
		case 47:
			if (func_2() == -1)
			{
				if (!func_594(1013902307, 1))
				{
					func_648(1013902307, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_2() == -1)
			{
				if (!func_594(1013902307, 1))
				{
					func_648(1013902307, 1, 752097756);
				}
				if (!func_594(142640135, 1))
				{
					func_648(142640135, 1, 752097756);
				}
			}
			break;
		case 48:
			if (func_2() == -1)
			{
				if (!func_594(786809402, 1))
				{
					func_648(786809402, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_2() == -1)
			{
				if (!func_594(786809402, 1))
				{
					func_648(786809402, 1, 752097756);
				}
				if (!func_594(-518019409, 1))
				{
					func_648(-518019409, 1, 752097756);
				}
			}
			break;
		case 22:
			PLAYER::_0x5B9813ECF7633FE8(0);
			break;
		case 24:
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
		case 43:
			break;
		case 44:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-843169622, true);
			Global_1939178->f_41 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 45:
			break;
		case 46:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 51:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-78935213, true);
			break;
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-384786155, true);
			break;
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(296662302, true);
			break;
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-1871453000, true);
			break;
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(1397349651, true);
			break;
	}
}

int func_395(int iParam0)
{
	switch (iParam0)
	{
		case -1523757120:
		case -1516219602:
		case -1063137731:
		case 604357666:
		case 1048964673:
		case 1576849913:
			return 1;
	}
	return 0;
}

int func_396(int iParam0)
{
	int iVar0;
	struct<4> Var1;

	iVar0 = func_649(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_262(0) };
	if (func_650(&Var1, iVar0, 0) > 0)
	{
		return 1;
	}
	return 0;
}

int func_397(int iParam0)
{
	struct<10> Var0;
	struct<5> Var29;

	Var0.f_9 = -1591664384;
	if (!func_651(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { Var0.f_5 };
	Var29.f_4 = Var0.f_9;
	if (!func_652(Var0.f_4, &Var0, &Var29, -1, -142743235, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_398(int iParam0)
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
		case -1554827654:
			return -2026073756 /* GXTEntry: "Appaloosa~n~Leopard Blanket Coat" */;
		case -1029277326:
			return 2002245664 /* GXTEntry: "Appaloosa~n~Brown Leopard Coat" */;
		case joaat("a_c_horse_appaloosa_leopard"):
			return -1120227140 /* GXTEntry: "Appaloosa~n~Leopard Coat" */;
		case joaat("a_c_horse_arabian_black"):
			return 1142681594 /* GXTEntry: "Arabian~n~Black Coat" */;
		case -403470324:
			return -864588185 /* GXTEntry: "Arabian~n~Rose Grey Bay Coat" */;
		case joaat("a_c_horse_arabian_white"):
			return -1040918754 /* GXTEntry: "Arabian~n~White Coat" */;
		case joaat("a_c_horse_ardennes_bayroan"):
			return 535545841 /* GXTEntry: "Ardennes~n~Bay Roan Coat" */;
		case -635239558:
			return 1686036388 /* GXTEntry: "Ardennes~n~Strawberry Roan Coat" */;
		case joaat("a_c_horse_belgian_blondchestnut"):
			return 2125477381;
		case joaat("a_c_horse_belgian_mealychestnut"):
			return 1808724704 /* GXTEntry: "Belgian~n~Mealy Chestnut Coat" */;
		case 1593035738:
			return -1745871311 /* GXTEntry: "Dutch Warmblood~n~Sooty Buckskin Coat" */;
		case 861505058:
			return -1366099125 /* GXTEntry: "Dutch Warmblood~n~Seal Brown Coat" */;
		case 687445866:
			return -1900776854 /* GXTEntry: "Dutch Warmblood~n~Chocolate Roan Coat" */;
		case 1705182311:
			return 1381855825 /* GXTEntry: "Hungarian Halfbred~n~Flaxen Chestnut Coat" */;
		case -78273782:
			return -470894301 /* GXTEntry: "Hungarian Halfbred~n~Flaxen Piebald Tobiano Coat" */;
		case -819697512:
			return -58297715 /* GXTEntry: "Hungarian Halfbred~n~Dark Dapple Grey" */;
		case -247265944:
			return 919533729 /* GXTEntry: "Kentucky Saddler~n~Black Coat" */;
		case -1265030920:
			return 1112812928 /* GXTEntry: "Kentucky Saddler~n~Chestnut Pinto Coat" */;
		case 2024948086:
			return 753764318 /* GXTEntry: "Kentucky Saddler~n~Grey Coat" */;
		case 1696286663:
			return 2100045093 /* GXTEntry: "Kentucky Saddler~n~Silver Bay Coat" */;
		case -1342159303:
			return 1097965086 /* GXTEntry: "Missouri Fox Trotter~n~Amber Champagne" */;
		case joaat("a_c_horse_missourifoxtrotter_silverdapplepinto"):
			return -2136667309 /* GXTEntry: "Missouri Fox Trotter~n~Silver Dapple Pinto Coat" */;
		case 2030804811:
			return -376463594 /* GXTEntry: "Morgan~n~Bay Coat" */;
		case 1230359523:
			return -1917318030 /* GXTEntry: "Morgan~n~Bay Roan Coat" */;
		case -1038436471:
			return 1631640006 /* GXTEntry: "Morgan~n~Flaxen Chestnut Coat" */;
		case 96930969:
			return 1714576673 /* GXTEntry: "Morgan~n~Palomino Coat" */;
		case -1180427609:
			return 210760725 /* GXTEntry: "Mustang~n~Tiger Grullo Dun Coat" */;
		case joaat("a_c_horse_mustang_wildbay"):
			return 2051021144 /* GXTEntry: "Mustang~n~Wild Bay Coat" */;
		case 43825738:
			return 1924406350 /* GXTEntry: "Mustang~n~Tiger Striped Bay Coat" */;
		case joaat("a_c_horse_nokota_blueroan"):
			return -1990143531 /* GXTEntry: "Nokota~n~Blue Roan Coat" */;
		case -1261814606:
			return 1741899492 /* GXTEntry: "Nokota~n~White Roan Coat" */;
		case 107013696:
			return -1629575335 /* GXTEntry: "Nokota~n~Reverse Dapple Roan Coat" */;
		case 1066034872:
			return 1096294193 /* GXTEntry: "Shire~n~Dark Bay Coat" */;
		case 36009259:
			return -1162498792 /* GXTEntry: "Shire~n~Light Grey Coat" */;
		case -1599683008:
			return -212500005 /* GXTEntry: "Suffolk Punch~n~Sorrel Coat" */;
		case -1693870200:
			return -538557079 /* GXTEntry: "Suffolk Punch~n~Red Chestnut Coat" */;
		case 1072019803:
			return 171150858 /* GXTEntry: "Tennessee Walker~n~Black Rabicano Coat" */;
		case 1074477367:
			return 67538819 /* GXTEntry: "Tennessee Walker~n~Chestnut Coat" */;
		case -85890205:
			return -126472599 /* GXTEntry: "Tennessee Walker~n~Dapple Bay Coat" */;
		case -727455979:
			return -332060056 /* GXTEntry: "Tennessee Walker~n~Red Roan Coat" */;
		case -1667789645:
			return 1917500091 /* GXTEntry: "Tennessee Walker~n~Flaxen Roan Coat" */;
		case -1924405794:
			return -1043453945 /* GXTEntry: "Thoroughbred~n~Blood Bay Coat" */;
		case joaat("a_c_horse_thoroughbred_dapplegrey"):
			return 1723487083 /* GXTEntry: "Thoroughbred~n~Dapple Grey Coat" */;
		case -526169133:
			return 2044230644 /* GXTEntry: "Thoroughbred~n~Brindle Coat" */;
		case 2120708491:
			return 1999358190 /* GXTEntry: "Thoroughbred~n~Black Chestnut Coat" */;
		case 1133837220:
			return 344528703 /* GXTEntry: "Turkoman~n~Dark Bay Coat" */;
		case joaat("a_c_horse_turkoman_gold"):
			return -1674873797 /* GXTEntry: "Turkoman~n~Gold Coat" */;
		case -1604180548:
			return 281852151 /* GXTEntry: "Turkoman~n~Silver Coat" */;
		case -683592019:
			return 908445453 /* GXTEntry: "Breton~n~Red Roan Coat" */;
		case 337109765:
			return 1221398025 /* GXTEntry: "Breton~n~Sorrel Coat" */;
		case -619132373:
			return -75300826 /* GXTEntry: "Breton~n~Grullo Dun Coat" */;
		case 1544366970:
			return -1714239153 /* GXTEntry: "Breton~n~Seal Brown Coat" */;
		case -1441144351:
			return 1404133288 /* GXTEntry: "Breton~n~Mealy Dapple Bay Coat" */;
		case -1717674545:
			return -1778967281 /* GXTEntry: "Breton~n~Steel Grey Coat" */;
		case 1825358734:
			return -455481432 /* GXTEntry: "Criollo~n~Blue Roan Overo Coat" */;
		case 1138427579:
			return -835454915 /* GXTEntry: "Criollo~n~Dun Coat" */;
		case -1720251851:
			return -2058115427 /* GXTEntry: "Criollo~n~Bay Brindle Coat" */;
		case 506887890:
			return -482507775 /* GXTEntry: "Criollo~n~Sorrel Overo Coat" */;
		case 766293155:
			return -563118293 /* GXTEntry: "Criollo~n~Bay Frame Overo Coat" */;
		case 2147082926:
			return -1091105818 /* GXTEntry: "Criollo~n~Marble Sabino Coat" */;
		case -1616287563:
			return 2004269960 /* GXTEntry: "Kladruber~n~Black Coat" */;
		case -127412252:
			return 772515535 /* GXTEntry: "Kladruber~n~White Coat" */;
		case -1881155818:
			return 1851524477 /* GXTEntry: "Kladruber~n~Cremello Coat" */;
		case -955237712:
			return -1444352669 /* GXTEntry: "Kladruber~n~Grey Coat" */;
		case -647020346:
			return 1950373354 /* GXTEntry: "Kladruber~n~Dapple Rose Grey Coat" */;
		case -1846319726:
			return -878000957 /* GXTEntry: "Kladruber~n~Silver Coat" */;
		case 1007570567:
			return -2145947333;
		case 1029339151:
			return 156528857;
		case -1424767799:
			return -1240970285;
		case -217135948:
			return -1933497088;
		case -156439156:
			return -1116314766;
		case 1344011125:
			return -877141885;
		case joaat("a_c_donkey_01"):
			return -285185056;
		case -1028075925:
			return -1692268955 /* GXTEntry: "Appaloosa~n~Black Snowflake Coat" */;
		case 84224102:
			return 2130706226;
		case 1496579364:
			return 1214981718 /* GXTEntry: "Arabian~n~Red Chestnut Coat" */;
		case -1896838685:
			return -1754375530 /* GXTEntry: "Hungarian Halfbred~n~Liver Chestnut Coat" */;
		case -420599285:
			return -71211764 /* GXTEntry: "Missouri Fox Trotter~n~Sable Champagne Coat" */;
		case 478986344:
			return -1390353518 /* GXTEntry: "Mustang~n~Golden Dun Coat" */;
		case -2063289686:
			return 887669186;
		case 917402668:
			return 2102774612;
		case -914712122:
			return -2011111190;
		case -598917269:
			return -535752499;
		default:
			break;
	}
	return 0;
}

int func_399(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	if (!func_264(iParam1, 0))
	{
		return 0;
	}
	if (!func_653(iParam1))
	{
		return 0;
	}
	if (func_396(iParam0))
	{
		return 0;
	}
	iVar0 = func_649(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_262(0) };
	Var1.f_4 = iVar0;
	if (!func_267(iParam1, &uVar6, &Var1, 1, 752097756, 0))
	{
		return 0;
	}
	return 1;
}

int func_400(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_39.f_277.f_1[iParam0 /*431*/])->f_8;
}

float func_401(int iParam0)
{
	int iVar0;
	float fVar1;

	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	if (!func_66(iParam0))
	{
		return 0f;
	}
	iVar0 = func_78(iParam0);
	fVar1 = func_144(iVar0);
	return fVar1;
}

int func_402(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return &((Global_39.f_277.f_1[iParam0 /*431*/])->f_402[iParam1 /*4*/]);
}

int func_403(int iParam0, var uParam1)
{
	struct<29> Var0;

	Var0.f_9 = -1591664384;
	if (!func_651(iParam0, &Var0))
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
	if (!INVENTORY::_0xD80A8854DB5CFBA5(func_514(0), &Var0, &Var0, 29))
	{
		return 0;
	}
	return 1;
}

void func_404()
{
	var uVar0;

	if (func_654())
	{
		uVar0 = func_655();
		MAP::REMOVE_BLIP(&uVar0);
		func_656(0);
	}
}

void func_405()
{
	int iVar0;

	iVar0 = func_163();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	OBJECT::DELETE_OBJECT(&iVar0);
	func_406(0);
}

void func_406(int iParam0)
{
	Global_1903007->f_379 = iParam0;
}

int func_407()
{
	return Global_39.f_277.f_3042.f_1;
}

var func_408()
{
	return Global_1903007->f_429.f_2;
}

void func_409()
{
	Global_1903007->f_429.f_2 = 0;
}

void func_410()
{
	Global_39.f_277.f_3042.f_1++;
}

void func_411(int iParam0)
{
	Global_1903007->f_429.f_2 = iParam0;
}

bool func_412()
{
	return Global_1903007->f_429.f_3;
}

int func_413()
{
	return Global_1903007->f_429.f_4;
}

void func_414(int iParam0)
{
	Global_1903007->f_429.f_3 = iParam0;
}

void func_415()
{
	Global_1903007->f_429.f_4 = 0;
}

int func_416()
{
	if (func_594(1627068364 /* GXTEntry: "Horse Reviver" */, 1) || func_594(-1795542128 /* GXTEntry: "Special Horse Reviver" */, 1))
	{
		return 1;
	}
	return 0;
}

int func_417(int iParam0)
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
			if (Var1.f_2 == 1644203656 && !func_657(iParam0, Var1, 1))
			{
				return 1;
			}
		}
		iVar48++;
	}
	return 0;
}

int func_418()
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
	if (!func_322(iVar2))
	{
		return 0;
	}
	return iVar2;
}

int func_419()
{
	return Global_1903007->f_399.f_1;
}

void func_420(int iParam0)
{
	Global_1903007->f_399.f_1 = iParam0;
}

void func_421(int iParam0)
{
	Global_1903007->f_399 = iParam0;
}

void func_422()
{
	if (func_148(47))
	{
		func_149(47);
	}
	if (func_150(47))
	{
		func_151(47);
	}
	if (func_148(48))
	{
		func_149(48);
	}
	if (func_150(47))
	{
		func_151(47);
	}
	if (func_148(49))
	{
		func_149(49);
	}
	if (func_150(49))
	{
		func_151(49);
	}
	if (func_148(50))
	{
		func_149(50);
	}
	if (func_150(50))
	{
		func_151(50);
	}
	if (func_148(51))
	{
		func_149(51);
	}
	if (func_150(51))
	{
		func_151(51);
	}
}

int func_423(int iParam0)
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
	if (PLAYER::_0x354F689C4FFAAB37(uVar1))
	{
		return 1;
	}
	return 0;
}

void func_424(int iParam0)
{
	Global_1903007->f_399.f_2 = iParam0;
}

int func_425()
{
	return Global_1903007->f_399.f_2;
}

void func_426()
{
	func_421(0);
	func_420(0);
	func_424(0);
}

bool func_427()
{
	return Global_1903007->f_429.f_5;
}

int func_428()
{
	return Global_39.f_277.f_3042.f_3;
}

int func_429()
{
	return Global_1903007->f_429.f_6;
}

void func_430(int iParam0)
{
	Global_1903007->f_429.f_5 = iParam0;
}

void func_431()
{
	Global_1903007->f_429.f_6 = 0;
}

void func_432(int iParam0)
{
	Global_1903007->f_429.f_9 = iParam0;
}

void func_433()
{
	Global_39.f_277.f_3042.f_3++;
}

bool func_434()
{
	return Global_1903007->f_429.f_7;
}

int func_435(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return &((Global_39.f_277.f_1[iParam0 /*431*/])->f_393[iParam1 /*4*/]);
}

int func_436(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_392(iParam0, &iVar0, &iVar1);
	if (!func_658(iParam0, 65536) && !func_658(iParam0, 32768))
	{
		if (func_659(iVar0, iVar1))
		{
			return 1;
		}
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_39.f_3327)
	{
		if ((Global_39.f_3327[iVar2 /*3*/])->f_2 == iParam0)
		{
			return (Global_39.f_3327[iVar2 /*3*/])->f_1;
		}
		iVar2++;
	}
	return 0;
}

int func_437()
{
	return Global_1903007->f_429.f_8;
}

void func_438(int iParam0)
{
	Global_1903007->f_429.f_7 = iParam0;
}

void func_439()
{
	Global_1903007->f_429.f_8 = 0;
}

int func_440()
{
	return Global_1903007->f_429.f_9;
}

bool func_441()
{
	return Global_1903007->f_429.f_10;
}

void func_442(int iParam0)
{
	Global_1903007->f_429.f_10 = iParam0;
}

void func_443()
{
	Global_1903007->f_429.f_9 = 0;
}

bool func_444()
{
	return Global_39.f_277.f_3042.f_4;
}

int func_445(int iParam0, bool bParam1, bool bParam2, bool bParam3)
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
	while (iVar0 < 176)
	{
		if (!func_446(iVar0))
		{
		}
		else if (func_660(iVar0) != iParam0)
		{
		}
		else if (bParam1)
		{
			if (!func_661(iVar0))
			{
			}
			else
			{
				iVar2 = func_662(iVar0);
				if (bParam3)
				{
					if (!func_663(iVar2))
					{
					}
					else if (bParam2)
					{
						if (func_664(iVar2))
						{
						}
						else
						{
							fVar3 = func_665(Global_34, func_447(iVar0), 1);
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

bool func_446(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 176);
}

Vector3 func_447(int iParam0)
{
	if (!func_446(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return 2947.055f, 1320.15f, 43.8203f;
		case 1:
			return 2939.063f, 1287.116f, 43.6529f;
		case 2:
			return 2932.97f, 1282.56f, 43.67f;
		case 117:
			return -5227.357f, -3470.067f, -20.49293f;
		case 118:
			return -5228.75f, -3468.28f, -21.57f;
		case 6:
			return -784.49f, -1321.95f, 42.88f;
		case 9:
			return -753.4219f, -1284.24f, 43.20049f;
		case 8:
			return -814.4116f, -1367.243f, 43.7509f;
		case 13:
			return -868.3356f, -1366.207f, 44.75311f;
		case 14:
			return -875.03f, -1327.09f, 42.97f;
		case 15:
			return -875.02f, -1326.71f, 42.97f;
		case 19:
			return -762.0716f, -1293.549f, 42.8355f;
		case 12:
			return -813.6f, -1373.8f, 44.2f;
		case 22:
			return 1417.288f, 273.5687f, 88.4881f;
		case 24:
			return 1521.91f, 441.15f, 89.68f;
		case 25:
			return 1523.63f, 442.65f, 89.68f;
		case 26:
			return 2161.5f, -618.5f, 43f;
		case 27:
			return -1092.88f, -575.69f, 81.41f;
		case 28:
			return -1094.35f, -577.48f, 81.41f;
		case 29:
			return 1294.084f, -1303.102f, 76.0418f;
		case 30:
			return 1297.423f, -1278.412f, 75.65752f;
		case 31:
			return 1319.43f, -1142.08f, 81.41f;
		case 33:
			return 1329.755f, -1294.218f, 76.0092f;
		case 34:
			return 1323.734f, -1321.775f, 77.8924f;
		case 35:
			return 1226.71f, -1295.08f, 75.9f;
		case 39:
			return 1230.34f, -1298.578f, 75.9027f;
		case 41:
			return 1209.053f, -193.1814f, 101.9785f;
		case 42:
			return 2644.188f, -1292.507f, 51.2496f;
		case 43:
			return 2657.466f, -1180.96f, 53.2785f;
		case 44:
			return 2819.495f, -1331.29f, 45.514f;
		case 45:
			return 2721.24f, -1231.66f, 49.37f;
		case 46:
			return 2859.51f, -1202.16f, 48.59f;
		case 48:
			return 2825.607f, -1318.207f, 45.7557f;
		case 49:
			return 2718f, -1287f, 49.6f;
		case 50:
			return 2508.212f, -1449.654f, 48.41523f;
		case 51:
			return 2748.811f, -1398.277f, 45.18309f;
		case 52:
			return 2747.824f, -1396.384f, 45.18309f;
		case 53:
			return 2555.09f, -1166.98f, 52.68f;
		case 63:
			return 2832.02f, -1225.563f, 46.6422f;
		case 60:
			return 2734.174f, -1119.755f, 50.10792f;
		case 68:
			return -1753.404f, -392.557f, 155.2576f;
		case 69:
			return -1790f, -388.27f, 159.33f;
		case 70:
			return -1818.99f, -370.94f, 162.3f;
		case 71:
			return -1819.88f, -561.8194f, 157.2323f;
		case 74:
			return -1763.78f, -385.1118f, 156.7401f;
		case 77:
			return -307.9643f, 773.6048f, 117.7031f;
		case 78:
			return -306.3f, 815.08f, 117.98f;
		case 79:
			return 0f, 0f, 0f;
		case 82:
			return -338.8647f, 767.4334f, 115.5628f;
		case 83:
			return -287.9538f, 804.0544f, 118.3859f;
		case 84:
			return -324f, 803.72f, 116.88f;
		case 85:
			return -281.82f, 778.97f, 118.5f;
		case 86:
			return -369.4457f, 786.6935f, 115.9904f;
		case 87:
			return -178.0316f, 628.0621f, 113.0896f;
		case 88:
			return -175.0377f, 631.7999f, 113.0896f;
		case 90:
			return -325.532f, 773.6285f, 117.5038f;
		case 93:
			return 3025.786f, 562.7253f, 43.7167f;
		case 98:
			return 2986.224f, 569.9468f, 43.62284f;
		case 97:
			return 2986.94f, 574.9f, 43.64f;
		case 96:
			return 2967.273f, 796.7416f, 52.5948f;
		case 99:
			return -1302.951f, 394.6608f, 94.3817f;
		case 101:
			return -1300.83f, 399.7599f, 94.38248f;
		case 100:
			return -1299.891f, 401.3615f, 94.38248f;
		case 105:
			return -5518.071f, -2906.217f, -2.7513f;
		case 102:
			return -5487.197f, -2939.038f, -1.3872f;
		case 103:
			return -5507.993f, -2964.844f, -1.6215f;
		case 104:
			return -5509.019f, -2947.435f, -2.8934f;
		case 107:
			return -5520.701f, -3044.427f, -1.40419f;
		case 108:
			return -3687.3f, -2623.39f, -14.44f;
		case 3:
			return -2842.211f, 137.3398f, 183.8268f;
		case 4:
			return -1005.934f, -540.8262f, 97.9502f;
		case 40:
			return 2076.835f, 1000.829f, 111.4973f;
		case 76:
			return -2251.034f, -1916.911f, 115.9488f;
		case 64:
			return -142.072f, -23.5242f, 95.0883f;
		case 65:
			return 675.3091f, -1251.233f, 43.0152f;
		case 66:
			return 1875.2f, -1859.182f, 41.8f;
		case 67:
			return 2366.084f, 1347.122f, 105.1305f;
		case 130:
			return -1402f, -2317f, 43.6f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_448(int iParam0)
{
	Global_1903007->f_429.f_11 = *iParam0;
}

var func_449()
{
	return Global_1903007->f_429.f_11;
}

int func_450()
{
	if (func_312(7))
	{
		return 1;
	}
	if (func_162())
	{
		return 1;
	}
	return 0;
}

int func_451(int iParam0)
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
	iVar0 = func_163();
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

int func_452()
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!func_312(7))
	{
		if (func_453(7))
		{
			func_666();
			return 1;
		}
	}
	if (func_312(7))
	{
		if (func_165() == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(func_78(7)))
			{
				if (!ENTITY::IS_ENTITY_IN_WATER(func_78(7)))
				{
					return 1;
				}
			}
		}
	}
	if (func_451(Global_34))
	{
		return 1;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = func_667();
	if (iVar1 == 0)
	{
		func_668(MISC::GET_GAME_TIMER());
		return 1;
	}
	if (iVar1 + 10000 > iVar0)
	{
		return 1;
	}
	if (ENTITY::_0x383F64263F946E45(&uVar2, func_163(), 4, Global_34, 0, 1))
	{
		func_666();
		return 1;
	}
	return 0;
}

int func_453(int iParam0)
{
	int iVar0;

	iParam0 = func_77(iParam0);
	if (iParam0 <= -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_78(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iParam0 == func_155())
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

void func_454()
{
	Global_1903007->f_429.f_12 = 0;
}

var func_455()
{
	return Global_1903007->f_429.f_12;
}

void func_456(int iParam0)
{
	Global_1903007->f_429.f_12 = iParam0;
}

int func_457()
{
	return Global_1903007->f_427;
}

void func_458(int iParam0)
{
	Global_1903007->f_427 = iParam0;
}

bool func_459()
{
	return Global_1903007->f_429.f_15;
}

void func_460(int iParam0)
{
	Global_1903007->f_429.f_15 = iParam0;
}

int func_461()
{
	return Global_39.f_277.f_3042;
}

void func_462()
{
	Global_1903007->f_429.f_16++;
}

int func_463()
{
	return Global_1903007->f_429.f_16;
}

bool func_464(int iParam0)
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

int func_465(int iParam0)
{
	var uVar0;

	if (func_330(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return 0;
	}
	if (!func_331(iParam0))
	{
		return 0;
	}
	if (func_329(iParam0, &uVar0, -1082130432 /* Float: -1f */))
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

int func_466(int iParam0)
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

int func_467(int iParam0)
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

bool func_468()
{
	return (Global_1915180->f_20135 || Global_1915180->f_21989.f_1);
}

int func_469()
{
	if (&Global_1099294 <= 5)
	{
		return &Global_1099294;
	}
	if (&Global_1099294 <= 22)
	{
		return 4;
	}
	if (&Global_1099294 <= 25)
	{
		return 3;
	}
	return 26;
}

int func_470(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*iParam0);
	return func_227(iVar0);
}

int func_471(int iParam0)
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
			iVar0 = func_227(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
		}
	}
	return iVar0;
}

int func_472(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<2> Var3;

	if (!func_264(iParam1, 0))
	{
		return 0;
	}
	bVar0 = iParam4 == 562618531;
	bVar1 = iParam4 == 1992602754;
	bVar2 = iParam4 == -1387038764;
	if (!func_669(iParam0, iParam1, 1))
	{
		return 0;
	}
	Var3 = { func_595(iParam1) };
	if (STATS::_STAT_ID_IS_VALID(&Var3))
	{
		if ((func_473(iParam0, iParam1) - iParam2) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var3, iParam2);
		}
		else if ((func_473(iParam0, iParam1) - iParam2) < 0)
		{
			func_472(iParam0, iParam1, func_596(iParam1, 0, 0, 0), bParam3, iParam4);
			return 0;
		}
	}
	if (!func_670(iParam0, iParam1, iParam2, iParam4, bParam3))
	{
		return 0;
	}
	if (!bParam3 && iParam1 != 1309979101)
	{
		func_593(iParam1, -iParam2, bVar0, bVar1, bVar2, 0, 0);
	}
	return 1;
}

int func_473(int iParam0, int iParam1)
{
	struct<4> Var0;
	int iVar4;

	if (!func_264(iParam1, 0))
	{
		return 0;
	}
	Var0 = { func_671(iParam0, iParam1) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_0xC97E0D2302382211(iParam0, &Var0, 0);
	return iVar4;
}

struct<5> func_474(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_475(iParam0, joaat("character"), func_515(), -1591664384) };
	Var0.f_4 = 1084182731;
	return Var0;
}

struct<4> func_475(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, int iParam6)
{
	struct<4> Var0;

	if (!func_264(iParam1, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(iParam0, &uParam2, iParam1, iParam6, &Var0);
	return Var0;
}

int func_476(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 2;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return iVar0;
	}
	iVar1 = PED::_GET_PED_QUALITY(iParam0);
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

int func_477(int iParam0)
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

int func_478(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = Global_1915180->f_20144.f_1010.f_201;
	if (iParam0 != 0)
	{
		if (iVar1 < 200)
		{
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (&Global_1915180->f_20144.f_1010[iVar0] == iParam0)
				{
					return 1;
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_479(int iParam0, int iParam1)
{
	struct<4> Var0;
	int iVar5;
	int iVar6;

	if (!func_264(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar5 = func_660(iParam1);
	if (iVar5 == -1)
	{
		return 0;
	}
	if (!func_672(6, &Var0))
	{
		return 0;
	}
	Var0.f_2 = -815325344;
	Var0.f_3 = func_673(iVar5);
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

int func_480(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 30)
	{
		return 0;
	}
	if (func_659(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_674(iParam0))
	{
		return 0;
	}
	if (func_675(iParam0))
	{
		return 0;
	}
	if ((Global_1900718->f_67 && !func_658(iParam0, 1)) || func_16(32768))
	{
		if (!func_658(iParam0, 262144) || !Global_1904613->f_8198)
		{
			return 0;
		}
	}
	if (!func_676())
	{
		return 0;
	}
	return 1;
}

void func_481(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904613[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1904613)[iParam0] = uVar0;
}

int func_482()
{
	int iVar0;

	if (func_677())
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

int func_483(bool bParam0)
{
	if (func_678())
	{
		return 0;
	}
	if ((!CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADING_OUT())
	{
		return 0;
	}
	if (func_679(&(Global_1099294->f_4), 1, 5))
	{
		return 0;
	}
	if (!bParam0)
	{
		if (!func_482())
		{
			return 0;
		}
	}
	if ((Global_13 || Global_1048584) // PointerArith || func_680())
	{
		return 0;
	}
	if (!func_676())
	{
		return 0;
	}
	if (func_681())
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
	if (func_682())
	{
		return 0;
	}
	return 1;
}

void func_484(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_683(iParam0, iParam1, 1))
	{
		iVar0 = func_684(iParam1);
		iVar1 = func_685(iParam0);
		iVar2 = (func_685(iParam0) - func_685(iParam1));
		iVar3 = (func_684(iParam0) - func_684(iParam1));
		iVar4 = (func_686(iParam0) - func_686(iParam1));
		iVar5 = (func_687(iParam0) - func_687(iParam1));
		iVar6 = (func_688(iParam0) - func_688(iParam1));
		iVar7 = (func_689(iParam0) - func_689(iParam1));
	}
	else
	{
		iVar0 = func_684(iParam0);
		iVar1 = func_685(iParam1);
		iVar2 = (func_685(iParam1) - func_685(iParam0));
		iVar3 = (func_684(iParam1) - func_684(iParam0));
		iVar4 = (func_686(iParam1) - func_686(iParam0));
		iVar5 = (func_687(iParam1) - func_687(iParam0));
		iVar6 = (func_688(iParam1) - func_688(iParam0));
		iVar7 = (func_689(iParam1) - func_689(iParam0));
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
		iVar4 = (iVar4 + func_690(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = BUILTIN::ROUND(func_691(BUILTIN::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

var func_485(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_486(int iParam0)
{
	char* sVar0;

	if (iParam0 == 255)
	{
		if (func_692(39, iParam0))
		{
			return HUD::_0xD8402B858F4DDD88(&(Global_1099294->f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1099294->f_12)));
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
	if (!&Global_1275573->f_22[iParam0])
	{
		return sVar0;
	}
	if (func_692(39, iParam0))
	{
		return HUD::_0xD8402B858F4DDD88(&(((*Global_1097610)[iParam0 /*51*/])->f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(((*Global_1097610)[iParam0 /*51*/])->f_12)));
	}
	return PLAYER::GET_PLAYER_NAME(&(Global_1275573->f_154[iParam0]));
}

char* func_487(char* sParam0, int iParam1)
{
	sParam0 = PLAYER::_FORMAT_PLAYER_NAME_STRING(sParam0);
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_693(MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

int func_488()
{
	return 0;
}

int func_489()
{
	return 0;
}

int func_490(int iParam0, int iParam1)
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

int func_491(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 100;
	}
	return 0;
}

int func_492(int iParam0, int iParam1)
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
	if (func_490(iParam1, &iVar0))
	{
		return ATTRIBUTE::_GET_ATTRIBUTE_CORE_VALUE(iParam0, iVar0);
	}
	return 0;
}

void func_493(int iParam0, int iParam1, int iParam2)
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
	iParam2 = func_694(iParam2, 0, 100);
	if (func_490(iParam1, &uVar0))
	{
		ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iParam0, uVar0, iParam2);
	}
}

float func_494(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = (iVar0 - ((Global_39.f_277.f_1[iParam0 /*431*/])->f_402[iParam1 /*4*/])->f_3);
	iVar1 = func_694(iVar1, 0, 30000);
	fVar2 = (BUILTIN::TO_FLOAT(iVar1) * 0.001f);
	return fVar2;
}

void func_495(int iParam0, int iParam1, int iParam2)
{
	((Global_39.f_277.f_1[iParam0 /*431*/])->f_393[iParam1 /*4*/])->f_3 = iParam2;
}

void func_496(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (func_490(iParam2, &iVar1))
	{
		iVar0 = ATTRIBUTE::_GET_ATTRIBUTE_CORE_VALUE(iParam0, iVar1);
	}
	iVar2 = func_435(iParam1, iParam2);
	if (iVar2 != iVar0)
	{
		func_695(iParam1, iParam2, iVar0);
	}
}

float func_497(int iParam0, int iParam1)
{
	return ((Global_39.f_277.f_1[iParam0 /*431*/])->f_393[iParam1 /*4*/])->f_2;
}

void func_498(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;

	fVar0 = func_497(iParam0, iParam1);
	fVar1 = func_494(iParam0, iParam1);
	fVar0 = (fVar0 - fVar1);
	if (fVar0 < 0f)
	{
		fVar0 = 0f;
	}
	func_696(iParam0, iParam1, fVar0);
}

void func_499(int iParam0, int iParam1, int iParam2)
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

	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34))
	{
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	bVar0 = false;
	if (func_74(iParam1) == 2)
	{
		bVar0 = true;
	}
	bVar1 = false;
	if (func_256(iParam0))
	{
		bVar1 = true;
	}
	bVar2 = false;
	if (PED::IS_PED_ON_MOUNT(Global_34))
	{
		if (PED::GET_MOUNT(Global_34) == iParam0)
		{
			bVar2 = true;
		}
	}
	bVar3 = false;
	if (TASK::_0xEFC4303DDC6E60D3(Global_34))
	{
		if (TASK::_0xED1F514AF4732258(Global_34) == iParam0)
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
			iVar5 = func_435(iParam1, iParam2);
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
			else if (func_697(iParam0, iParam2))
			{
				bVar7 = true;
			}
			else
			{
				fVar4 = -60f;
				fVar8 = func_698(iParam1, iParam2);
				fVar4 = (fVar4 - (fVar4 * fVar8));
			}
			break;
	}
	if (fVar4 < 0f)
	{
		if (func_81(4096))
		{
			bVar7 = true;
		}
	}
	if (bVar6)
	{
		if (func_250(iParam1, 128))
		{
			bVar7 = true;
		}
		else
		{
			fVar4 = 1f;
		}
	}
	fVar9 = (fVar4 * 60f);
	fVar10 = func_494(iParam1, iParam2);
	fVar11 = ((fVar10 / fVar9) * 100f);
	fVar12 = func_699(iParam1, iParam2);
	iVar13 = func_435(iParam1, iParam2);
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
		func_700(iParam1, iParam2, fVar12);
	}
	if (iVar14 == 0)
	{
		return;
	}
	func_695(iParam1, iParam2, (iVar13 + iVar14));
}

void func_500(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	var uVar12;
	bool bVar24;
	bool bVar25;
	bool bVar26;

	func_20(0, &uVar0);
	func_20(1, &uVar12);
	bVar24 = false;
	if (func_122(39))
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
		func_438(1);
		func_701(MISC::GET_GAME_TIMER());
	}
	if (bVar26)
	{
		func_703(func_702(2009660790), 1);
	}
}

int func_501(int iParam0, int iParam1)
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

int func_502(int iParam0)
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

float func_503(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = (iVar0 - ((Global_39.f_277.f_1[iParam0 /*431*/])->f_402[iParam1 /*4*/])->f_3);
	iVar1 = func_694(iVar1, 0, 30000);
	fVar2 = (BUILTIN::TO_FLOAT(iVar1) * 0.001f);
	return fVar2;
}

void func_504(int iParam0, int iParam1, int iParam2)
{
	((Global_39.f_277.f_1[iParam0 /*431*/])->f_402[iParam1 /*4*/])->f_3 = iParam2;
}

void func_505(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (func_501(iParam2, &uVar0))
	{
		iVar1 = ATTRIBUTE::GET_ATTRIBUTE_BASE_RANK(iParam0, uVar0);
	}
	iVar2 = func_402(iParam1, iParam2);
	if (iVar2 != iVar1)
	{
		func_704(iParam1, iParam2, iVar1);
	}
}

float func_506(int iParam0, int iParam1)
{
	return ((Global_39.f_277.f_1[iParam0 /*431*/])->f_402[iParam1 /*4*/])->f_2;
}

void func_507(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;

	fVar0 = func_506(iParam0, iParam1);
	fVar1 = func_503(iParam0, iParam1);
	fVar0 = (fVar0 - fVar1);
	if (fVar0 < 0f)
	{
		fVar0 = 0f;
	}
	func_705(iParam0, iParam1, fVar0);
}

void func_508(int iParam0, int iParam1, int iParam2)
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
	if (func_74(iParam1) == 2)
	{
		bVar0 = true;
	}
	bVar1 = false;
	if (func_256(iParam0))
	{
		bVar1 = true;
	}
	bVar2 = false;
	switch (iParam2)
	{
		case 1:
			if (bVar0)
			{
				fVar3 = -60f;
			}
			else if (bVar1)
			{
				fVar3 = 192f;
			}
			else if (func_706(iParam0))
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
				fVar3 = -60f;
			}
			else
			{
				bVar2 = true;
			}
			break;
		case 2:
			iVar4 = func_402(iParam1, 2);
			iVar5 = (100 - func_402(iParam1, 1));
			if (iVar5 < 50)
			{
				fVar3 = -96f;
			}
			else if (iVar4 > 50)
			{
				fVar3 = -60f;
			}
			else if (iVar4 < 50)
			{
				fVar3 = 60f;
			}
			else
			{
				bVar2 = true;
			}
			break;
	}
	fVar6 = (fVar3 * 60f);
	fVar7 = func_503(iParam1, iParam2);
	fVar8 = ((fVar7 / fVar6) * 100f);
	fVar9 = func_707(iParam1, iParam2);
	iVar10 = func_402(iParam1, iParam2);
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
		func_708(iParam1, iParam2, fVar9);
	}
	if (iParam2 == 2)
	{
		if (iVar4 > 50)
		{
			if (iVar10 <= 50)
			{
				iVar10 = 50;
				func_709(iParam1, iParam2);
			}
		}
		else if (iVar4 < 50)
		{
			if (iVar10 >= 50)
			{
				iVar10 = 50;
				func_709(iParam1, iParam2);
			}
		}
	}
	if (iVar11 == 0)
	{
		return;
	}
	func_704(iParam1, iParam2, (iVar10 + iVar11));
}

void func_509(int iParam0, int iParam1, int iParam2, int iParam3)
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

	func_20(0, &Var0);
	func_20(1, &Var12);
	iVar24 = func_78(iParam0);
	bVar25 = false;
	if (iParam0 == 0 || (iParam0 == 1 && !Var0.f_2))
	{
		if ((iParam0 == 0 && Var0.f_10) || (iParam0 == 1 && Var12.f_10))
		{
			if (func_122(40))
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
			iVar28 = func_287(iVar24, 2);
			iVar29 = func_710(iParam0);
			iVar30 = func_288(iVar28);
			if (iVar29 != iVar30)
			{
				bVar31 = func_549(iVar24, iVar30, 1);
				if (bVar31)
				{
					func_289(iParam0, iVar30);
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
		func_430(1);
		func_711(MISC::GET_GAME_TIMER());
	}
	if (iVar27 != 0)
	{
		ATTRIBUTE::_SET_CORE_ICON(iVar27);
	}
}

bool func_510()
{
	return Global_39.f_277.f_3047.f_1;
}

void func_511(int iParam0, float fParam1)
{
	Global_1903007->f_379.f_10[iParam0] = fParam1;
}

int func_512()
{
	return 5;
}

int func_513()
{
	return 6;
}

int func_514(bool bParam0)
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

struct<4> func_515()
{
	struct<4> Var0;

	return Var0;
}

int func_516(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

int func_517(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	struct<4> Var0;
	struct<10> Var4;
	int iVar26;
	int iVar27;

	func_712(&iParam0);
	if (!func_264(iParam0, 0) && !func_713(func_589(iParam0), 2))
	{
		return 0;
	}
	if (!bParam3 && func_516(iParam0, joaat("default")) == 0)
	{
		bParam3 = true;
	}
	if (func_714(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		Var0 = { func_715(0) };
		Var4.f_9 = -1591664384;
		if (!func_716(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
		{
			return 0;
		}
		else if (func_717(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
		{
			return 0;
		}
		if (func_718(iParam0, 1))
		{
			if (!func_716(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
			{
				return 0;
			}
			else if (func_717(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
			{
				return 0;
			}
		}
		return 1;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_719(iParam0, uParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return 0;
	}
	else if (iVar26 == 0)
	{
		return 1;
	}
	iVar27 = func_265(iParam0, *uParam1, uParam1->f_4, bParam4, bParam3, iParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return 1;
	}
	return 0;
}

int func_518(bool bParam0)
{
	if (func_2() == -1)
	{
		return 1;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_514(bParam0));
}

int func_519(struct<4> Param0, int iParam4, bool bParam5)
{
	int iVar0;
	struct<11> Var1;
	int iVar15;
	struct<28> Var16;
	struct<25> Var44;
	struct<17> Var69;
	struct<16> Var86;

	iVar0 = -1;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_520(Param0, &Var1, 1, 0, -1))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_597(Var1.f_4);
	if (iVar15 == joaat("horse"))
	{
		Var16 = { func_720(Param0, 1, 0) };
		Var16.f_10 = iParam4;
		iVar0 = func_721(joaat("update"), &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("coach"))
	{
		Var44 = { func_722(Param0, 1, 0) };
		Var44.f_10 = iParam4;
		iVar0 = func_723(joaat("update"), &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("clothing"))
	{
		Var69 = { func_724(Param0, 1, 0) };
		Var69.f_10 = iParam4;
		iVar0 = func_725(joaat("update"), &Var69, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var86 = { func_726(&Var1, 0) };
		Var86.f_10 = iParam4;
		iVar0 = func_727(joaat("update"), &Var86, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

bool func_520(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_728(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

void func_521(int iParam0)
{
	int iVar0;

	iVar0 = func_159(iParam0);
	STREAMING::REQUEST_MODEL(iVar0, false);
}

void func_522(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar0 = &(Global_39.f_277.f_1[iParam0 /*431*/])->f_15[iVar1 /*95*/];
		if (STREAMING::IS_MODEL_VALID(iVar0))
		{
			STREAMING::REQUEST_MODEL(iVar0, false);
		}
		iVar1++;
	}
}

int func_523(int iParam0)
{
	int iVar0;

	iVar0 = func_159(iParam0);
	if (!STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_524(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar0 = &(Global_39.f_277.f_1[iParam0 /*431*/])->f_15[iVar1 /*95*/];
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

int func_525(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		return 1;
	}
	return 0;
}

void func_526(int iParam0, int iParam1)
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

void func_527(int iParam0, int iParam1)
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

void func_528(int iParam0, int iParam1, int iParam2)
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
	iParam2 = func_694(iParam2, 0, 100);
	if (func_501(iParam1, &iVar0))
	{
		ATTRIBUTE::SET_ATTRIBUTE_BASE_RANK(iParam0, iVar0, iParam2);
	}
}

int func_529(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return (Global_39.f_277.f_1[iParam0 /*431*/])->f_426;
}

int func_530(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return (Global_39.f_277.f_1[iParam0 /*431*/])->f_427;
}

void func_531(int iParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	int iVar19;
	int iVar20;
	var uVar21;

	Global_1270530->f_1002.f_241[iParam2] = 0;
	if (!STREAMING::IS_MODEL_VALID(*uParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			vVar3 = { 0f, -1f, 0f };
			break;
		case 1:
			vVar3 = { -1f, 0f, 0f };
			break;
		case 2:
			vVar3 = { 1f, 0f, 0f };
			break;
	}
	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar3) };
	if (STREAMING::_0x274EE1B90CFA669E(*uParam1))
	{
		iVar6 = OBJECT::CREATE_OBJECT(*uParam1, vVar0, true, false, false, false, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(*uParam1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar6))
		{
			return;
		}
		iVar8 = func_729(iParam2);
		TASK::TASK_CARRIABLE(iVar6, uParam1->f_3, iParam0, iVar8, 256);
		ENTITY::_0x399657ED871B3A6C(iVar6, uParam1->f_1);
		ENTITY::_0xEF259AA1E097E0AD(iVar6, uParam1->f_93);
		uVar18 = func_730(iParam0, iVar6);
	}
	else if (STREAMING::IS_MODEL_A_PED(*uParam1))
	{
		iVar7 = func_731(*uParam1, vVar0, 0, 1, 0, 0, 1, 1, 0, 0, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(*uParam1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
		{
			return;
		}
		if (uParam1->f_8 != 0)
		{
			PED::_SET_PED_BODY_COMPONENT(iVar7, uParam1->f_8);
		}
		iVar9 = 0;
		while (iVar9 < uParam1->f_9)
		{
			uVar10 = &uParam1->f_10[iVar9 /*8*/];
			uVar11 = (uParam1->f_10[iVar9 /*8*/])->f_1;
			uVar12 = (uParam1->f_10[iVar9 /*8*/])->f_2;
			uVar13 = (uParam1->f_10[iVar9 /*8*/])->f_3;
			uVar14 = (uParam1->f_10[iVar9 /*8*/])->f_4;
			uVar15 = (uParam1->f_10[iVar9 /*8*/])->f_5;
			uVar16 = (uParam1->f_10[iVar9 /*8*/])->f_6;
			uVar17 = (uParam1->f_10[iVar9 /*8*/])->f_7;
			PED::_0xBC6DF00D7A4A6819(iVar7, uVar10, uVar11, uVar12, uVar13, uVar14, uVar15, uVar16, uVar17);
			iVar9++;
		}
		PED::_UPDATE_PED_VARIATION(iVar7, 0, 1, 1, 1, 0);
		if (uParam1->f_2 == 2)
		{
			ENTITY::_SET_ENTITY_HEALTH(iVar7, 0, 0);
			PED::SET_PED_CONFIG_FLAG(iVar7, 517, true);
			PERSISTENCE::_0xF5622FA6ACFCA7DB(iVar7, uParam1->f_91);
		}
		if (ENTITY::_0x9A100F1CF4546629(iVar7))
		{
			PED::_SET_PED_QUALITY(iVar7, uParam1->f_4);
			FLOCK::_0x8B6F0F59B1B99801(iVar7, uParam1->f_5);
			PED::_SET_PED_DAMAGE(iVar7, uParam1->f_6);
			PED::_SET_PED_DAMAGED(iVar7, uParam1->f_7);
		}
		if (uParam1->f_92)
		{
			PED::_0x6569F31A01B4C097(iVar7, 0, 0);
			ENTITY::_0x6BCF5F3D8FFE988D(iVar7, 1);
		}
		iVar8 = func_729(iParam2);
		TASK::TASK_CARRIABLE(iVar7, uParam1->f_3, iParam0, iVar8, 256);
		ENTITY::_0x399657ED871B3A6C(iVar7, uParam1->f_1);
		ENTITY::_0xEF259AA1E097E0AD(iVar7, uParam1->f_93);
		if (uParam1->f_94)
		{
			ENTITY::SET_ENTITY_RENDER_SCORCHED(iVar7, true);
			FIRE::START_ENTITY_FIRE(iVar7, 0, -1, 8);
		}
		iVar19 = func_732(iVar7);
		iVar20 = func_222(iVar19);
		if (func_264(iVar20, 0))
		{
			if (iVar20 != uParam1->f_1)
			{
				uParam1->f_1 = iVar20;
			}
		}
		uVar21 = func_730(iParam0, iVar7);
	}
}

void func_532(int iParam0)
{
	int iVar0;

	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (iVar0 == -1)
		{
		}
		else
		{
			(Global_39.f_277.f_1[iParam0 /*431*/])->f_369.f_2[iVar0] = 0f;
		}
		iVar0++;
	}
}

void func_533()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		Global_1903007->f_303.f_2[iVar0 /*5*/] = -1;
		(Global_1903007->f_303.f_2[iVar0 /*5*/])->f_1 = -1;
		(Global_1903007->f_303.f_2[iVar0 /*5*/])->f_2 = 0f;
		(Global_1903007->f_303.f_2[iVar0 /*5*/])->f_3 = -1;
		(Global_1903007->f_303.f_2[iVar0 /*5*/])->f_4 = 0f;
		iVar0++;
	}
}

int func_534(int iParam0, var uParam1)
{
	struct<4> Var0;

	Var0.f_9 = -1591664384;
	if (!func_651(iParam0, &Var0))
	{
		return 0;
	}
	*uParam1 = func_733(Var0, 1415981582, 0, -1);
	if (!func_264(*uParam1, 0))
	{
		return 0;
	}
	return 1;
}

int func_535(int iParam0, var uParam1)
{
	struct<4> Var0;

	Var0.f_9 = -1591664384;
	if (!func_651(iParam0, &Var0))
	{
		return 0;
	}
	*uParam1 = func_733(Var0, -2119169513, 0, -1);
	if (!func_264(*uParam1, 0))
	{
		return 0;
	}
	return 1;
}

int func_536(int iParam0, var uParam1)
{
	struct<4> Var0;

	if (!func_734(856287005, iParam0))
	{
		return 0;
	}
	Var0 = { func_70() };
	*uParam1 = func_733(Var0, iParam0, 0, -1);
	if (!func_264(*uParam1, 0))
	{
		return 0;
	}
	return 1;
}

void func_537(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
}

void func_538(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_539(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_540(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

void func_541(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

void func_542(var uParam0, int iParam1)
{
	uParam0->f_4 = iParam1;
}

void func_543(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
}

void func_544(var uParam0, int iParam1)
{
	uParam0->f_6 = iParam1;
}

void func_545(int iParam0)
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

void func_546(int iParam0, var uParam1)
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
	func_735(iParam0, *uParam1);
	func_735(iParam0, uParam1->f_1);
}

void func_547(int iParam0)
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
	PED::_0xDF631E4BCE1B1FC4(iParam0, 355515932, 0, 0);
	PED::_0xDF631E4BCE1B1FC4(iParam0, -749728163, 0, 0);
}

void func_548(int iParam0, var uParam1)
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
	func_735(iParam0, *uParam1);
	func_735(iParam0, uParam1->f_1);
	func_735(iParam0, uParam1->f_2);
	func_735(iParam0, uParam1->f_3);
	func_735(iParam0, uParam1->f_4);
	func_735(iParam0, uParam1->f_5);
	func_735(iParam0, uParam1->f_6);
	func_735(iParam0, uParam1->f_7);
}

int func_549(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
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

int func_550()
{
	if (!func_81(8))
	{
		return 0;
	}
	return 1;
}

int func_551()
{
	return Global_1903007->f_429;
}

int func_552()
{
	return Global_1903007->f_429.f_1;
}

void func_553(int iParam0)
{
	Global_1903007->f_429 = *iParam0;
}

void func_554(int iParam0)
{
	Global_1903007->f_429.f_1 = *iParam0;
}

void func_555(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_392(iParam0, &iVar0, &iVar1);
	if (!func_480(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_658(iParam0, 1024))
	{
		return;
	}
	func_481(iVar0, iVar1);
	(Global_1904613->f_31[iParam0 /*9*/])->f_3[0 /*2*/] = iParam1;
	((Global_1904613->f_31[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 3;
}

void func_556(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_736(&(uParam0->f_3));
	uParam0->f_12 = 1;
	uParam0->f_13 = 0;
}

Vector3 func_557(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f, 0f, 0f;
	}
	return ((*Global_1903007)[iParam0 /*43*/])->f_37;
}

int func_558(var uParam0, vector3 vParam1, vector3 vParam4, var uParam7, float fParam8)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	float fVar7;
	vector3 vVar8;
	bool bVar11;
	var uVar12;

	iVar6 = 12;
	if (func_193(vParam4))
	{
		vVar8 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
		fVar7 = vVar8.z;
	}
	else
	{
		fVar7 = func_561(vParam4, vParam1, 1);
	}
	fVar7 = (fVar7 + ((BUILTIN::TO_FLOAT(uParam0->f_2) * 10f) * func_737((uParam0->f_2 % 2) == 0, 1f, -1f)));
	vVar0 = { vParam1 + Vector(0f, -BUILTIN::COS(fVar7), BUILTIN::SIN(fVar7)) * FtoV(((80f + 40f) * 0.5f)) * Vector(fParam8, fParam8, fParam8) };
	if (uParam0->f_2 > 3)
	{
		iVar6 = 13;
	}
	switch (func_738(uParam0))
	{
		case 0:
			func_739(uParam0, 0f, 0f, 0f);
			uParam0->f_3.f_2 = 0;
			uParam0->f_3 = 0;
			uParam0->f_1 = 0;
			uParam0->f_13 = 0;
			uParam0->f_14 = 0;
			func_740(uParam0, 1);
			break;
		case 1:
			if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(vVar0, &vVar3, 1, 3f, 0f))
			{
				if (func_741(vVar3, vParam1, 0, 0))
				{
					func_739(uParam0, vVar3);
					if (uParam0->f_12)
					{
						func_740(uParam0, 3);
					}
					else
					{
						func_740(uParam0, 4);
					}
				}
				else
				{
					func_740(uParam0, 2);
				}
			}
			else
			{
				func_740(uParam0, 2);
			}
			break;
		case 2:
			bVar11 = false;
			if (func_742(vVar0, &(uParam0->f_3), &bVar11, iVar6, 0, 1127481344 /* Float: 180f */, 1101004800 /* Float: 20f */, -1138501878 /* Float: -0.01f */, -1138501878 /* Float: -0.01f */, 0))
			{
				if (func_741(func_560(uParam0), vParam1, 1, 1))
				{
					if (uParam0->f_12)
					{
						func_740(uParam0, 3);
					}
					else
					{
						func_740(uParam0, 4);
					}
				}
				else
				{
					func_740(uParam0, 5);
				}
			}
			else if (bVar11)
			{
				func_740(uParam0, 5);
			}
			break;
		case 3:
			if (uParam0->f_13 == 0)
			{
				uParam0->f_13 = PATHFIND::_0x348F211CA2404039(uParam7, func_560(uParam0), vParam1, 23);
				if (uParam0->f_13 == -1)
				{
					uParam0->f_14++;
					uParam0->f_13 = 0;
					if (uParam0->f_14 >= 50)
					{
						func_740(uParam0, 5);
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
						func_740(uParam0, 5);
						break;
					case 1:
						uVar12 = PATHFIND::_0xF61CFEDEAB627BFA(uParam0->f_13);
						if (func_743(uVar12, 2) && iVar6 != 13)
						{
							func_740(uParam0, 5);
						}
						else
						{
							func_740(uParam0, 4);
						}
						PATHFIND::_0x661BB1E1FF77742D(uParam0->f_13);
						break;
				}
			}
			break;
		case 4:
			uParam0->f_2 = 0;
			func_744(&(uParam0->f_3.f_3), 1, 1, 0, 0);
			func_740(uParam0, 0);
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
			func_740(uParam0, 0);
			break;
	}
	return 0;
}

var func_559(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	return func_745(uParam0, &Var0);
}

Vector3 func_560(var uParam0)
{
	return uParam0->f_3.f_3;
}

float func_561(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

void func_562(int iParam0, vector3 vParam1, float fParam4)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1903007)[iParam0 /*43*/])->f_19 = { vParam1 };
	((*Global_1903007)[iParam0 /*43*/])->f_22 = fParam4;
}

void func_563(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_746(iParam0, 1);
}

int func_564(int iParam0)
{
	int iVar0;
	int iVar1;

	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_66(iParam0))
	{
		return 0;
	}
	iVar0 = func_78(iParam0);
	iVar1 = func_139(iParam0);
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

void func_565(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = Global_1903007[iParam0 /*43*/];
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

int func_566()
{
	return Global_1903007->f_364.f_9;
}

int func_567(int iParam0)
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

int func_568(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1939178->f_12)
	{
		if ((bParam2 || Global_1939178->f_13 > 0) || Global_1939178->f_11 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1939178->f_9 == 1370593166)
	{
		return 0;
	}
	if (Global_1939178->f_14 > 0 || (bParam2 && Global_1939178->f_14 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1939178->f_7)
		{
			if (bParam2 || Global_1939178->f_15 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_569(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1903007->f_491), Global_39.f_277.f_1[iParam1 /*431*/], 431);
	MISC::_COPY_MEMORY(Global_39.f_277.f_1[iParam1 /*431*/], Global_39.f_277.f_1[iParam0 /*431*/], 431);
	MISC::_COPY_MEMORY(Global_39.f_277.f_1[iParam0 /*431*/], &(Global_1903007->f_491), 431);
}

void func_570(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1903007->f_448), (*Global_1903007)[iParam1 /*43*/], 43);
	MISC::_COPY_MEMORY((*Global_1903007)[iParam1 /*43*/], (*Global_1903007)[iParam0 /*43*/], 43);
	MISC::_COPY_MEMORY((*Global_1903007)[iParam0 /*43*/], &(Global_1903007->f_448), 43);
}

int func_571(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;
	bool bVar58;
	int iVar59;

	Var0.f_9 = -1591664384;
	Var29.f_9 = -1591664384;
	if (!func_651(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_651(iParam1, &Var29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_649(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_747(Var0, Var0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_748(Var0, Var29, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_572(int iParam0)
{
	Global_1903007->f_406.f_1 = iParam0;
}

int func_573(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;

	Var0.f_9 = -1591664384;
	if (!func_651(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { func_263(iParam1, Var0, 1415981582, 0) };
	return func_268(Var29, 1);
}

int func_574(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;

	Var0.f_9 = -1591664384;
	if (!func_651(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { func_263(iParam1, Var0, -2119169513, 0) };
	return func_268(Var29, 1);
}

void func_575(int iParam0, int iParam1)
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
	iVar0 = func_78(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	uVar2 = func_749(iVar1);
	if (DECORATOR::DECOR_EXIST_ON(iVar0, "HorseGender"))
	{
		iVar3 = DECORATOR::DECOR_GET_INT(iVar0, "HorseGender");
	}
	else
	{
		iVar3 = func_750(iVar0);
		DECORATOR::DECOR_SET_INT(iVar0, "HorseGender", iVar3);
	}
	func_751(iParam0, iVar1);
	func_752(iParam0, uVar2);
	func_753(iParam0, iVar3);
	iVar4 = -1;
	iVar5 = -15;
	if (iParam1 != 0)
	{
		iVar4 = MISC::GET_GAME_TIMER();
		iVar5 = func_243();
	}
	func_153(iParam0, iParam1);
	func_754(iParam0, iVar4);
	func_755(iParam0, iVar5);
	iVar6 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar0, 7);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_ATTRIBUTE_POINTS(iVar0, 7));
	func_351(iParam0, iVar6);
	func_641(iParam0, fVar7);
	iVar8 = 0;
	while (iVar8 < 3)
	{
		if (func_501(iVar8, &iVar9))
		{
			iVar10 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar0, iVar9);
			func_704(iParam0, iVar8, iVar10);
		}
		iVar8++;
	}
}

void func_576(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_39.f_277.f_1[iParam0 /*431*/])->f_428 = iParam1;
}

int func_577(int iParam0)
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

int func_578(var uParam0, int iParam1, var uParam2)
{
	*uParam0 = 0;
	*iParam1 = 0;
	*uParam2 = 0;
	*uParam0 = func_756();
	*iParam1 = func_757();
	*uParam2 = func_758();
	return 1;
}

int func_579(int iParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		iParam0 = 1074477367;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iParam0, 7);
	return iVar0;
}

void func_580(int iParam0)
{
	if (func_461() < iParam0)
	{
		func_759(iParam0);
	}
}

int func_581()
{
	return Global_1893575->f_2;
}

int func_582(int iParam0)
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

int func_583(int iParam0)
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

int func_584(int iParam0)
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

int func_585(int iParam0)
{
	switch (iParam0)
	{
		case -1795542128: /* GXTEntry: "Special Horse Reviver" */
		case 1627068364: /* GXTEntry: "Horse Reviver" */
			return 1;
	}
	return 0;
}

int func_586(int iParam0)
{
	switch (iParam0)
	{
		case -1632917921: /* GXTEntry: "Horse Ointment" */
			return 1;
	}
	return 0;
}

int func_587(int iParam0)
{
	switch (iParam0)
	{
		case -1516555556: /* GXTEntry: "Horse Brush" */
			return 1;
	}
	return 0;
}

int func_588(int iParam0)
{
	switch (iParam0)
	{
		case -1724045811: /* GXTEntry: "Horse Care Package" */
			return 1;
	}
	return 0;
}

int func_589(int iParam0)
{
	return iParam0;
}

int func_590(int iParam0, int iParam1)
{
	if (!func_713(iParam0, 2))
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

bool func_591(int iParam0)
{
	return func_597(iParam0) == 2085633299;
}

int func_592(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_264(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_597(iParam0);
	if (iVar0 == joaat("weapon") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("ammo") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_373(iParam0, 1399091007))
	{
		func_760(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

void func_593(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	char* sVar14;
	char* sVar15;
	int iVar16;
	char* sVar17;
	int iVar18;
	char* sVar19;
	char cVar20[128];

	if (!func_264(iParam0, 0))
	{
		return;
	}
	else if (iParam0 == 1807503187)
	{
		return;
	}
	else if (iParam1 == 0)
	{
		return;
	}
	if (!func_761() || bParam6)
	{
		func_762(iParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_763(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		StringCopy(&cVar2, func_763(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_764(iParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_597(iParam0);
	iVar10 = 0;
	iVar11 = joaat("inventory");
	if (((((((iVar6 == joaat("ammo") && iParam0 != 424030678) && iParam0 != -1188697038) && iParam0 != 446901936) && iParam0 != -228768324) && iParam0 != 34372170) && iParam0 != 963726415) && iParam0 != 1701457723)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	iVar12 = func_765(iParam0);
	if (((((((iVar6 == -1013984273 || iVar6 == 658570475) || iVar12 == -1674363638) || iVar12 == 252325943) || iVar12 == 829857647) || iVar12 == -636562458) || iVar12 == 1341188928) || iVar12 == 1216664798)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_766(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (bParam5)
	{
		Var7 = "ITEMTYPE_ORDERED_ITEM";
		Var7.f_1 = "itemtype_textures";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		return;
	}
	iVar13 = joaat("COLOR_PURE_WHITE");
	sVar14 = "Transaction_Positive";
	sVar15 = "Transaction_Feed_Sounds";
	iVar16 = 0;
	if (bVar0)
	{
		iVar13 = 619977481;
		sVar14 = "Transaction_Negative";
		iVar16 = 1;
	}
	if (func_373(iParam0, 474910316))
	{
		sVar17 = func_767(iParam0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar17))
		{
			sVar14 = sVar17;
			sVar15 = "RDRO_Collectible_Sounds_Travelling_Saleswoman";
		}
	}
	if (ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar13 = -856358433;
		}
		else
		{
			iVar13 = -1905433004;
		}
	}
	if (func_373(iParam0, 1816585950))
	{
		iVar13 = 76603059;
	}
	iVar18 = func_768(iParam0);
	if ((func_769(iVar12) && func_373(iParam0, -306684263)) && iVar18 != 0)
	{
		iVar18 = func_770(iParam0);
	}
	sVar19 = func_693(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, iVar18), iVar1), iVar13);
	if (((((iParam1 == 1 || func_373(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar19 = MISC::_CREATE_VAR_STRING(0, iVar18);
	}
	if ((((((iVar12 == -1839668642 && iParam0 != -1713496139) && iParam0 != 1326838792) && iParam0 != -230310728) || ((iVar12 == 231148558 && iParam0 != 1733464892) && iParam0 != -598283164)) || (iVar12 == 252325943 && iParam0 != -860557048)) || (iVar12 == -636562458 && iParam0 != -2087489409))
	{
		sVar19 = MISC::_CREATE_VAR_STRING(0, func_771(iParam0, -442898163));
	}
	if (iVar12 == -126813555 || iVar12 == 1946043663)
	{
		if (!func_373(iParam0, 920823793))
		{
			StringCopy(&cVar20, "", 128);
			if (func_772(iParam0, &cVar20))
			{
				sVar19 = func_774(func_773(cVar20), joaat("COLOR_PURE_WHITE"));
			}
		}
	}
	func_632(sVar19, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar16, iVar13, sVar15, sVar14, 0, 1);
}

bool func_594(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_264(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_597(iParam0);
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
			if (!func_775(iParam0, 1))
			{
				return false;
			}
			break;
		case joaat("clothing"):
			if (func_776(iParam0))
			{
				return true;
			}
			break;
	}
	return func_596(iParam0, 0, 0, 0) >= iParam1;
}

struct<2> func_595(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_264(iParam0, 0))
	{
		return Var0;
	}
	if (func_373(iParam0, -305066475))
	{
		if (func_2() == -1)
		{
			if (func_373(iParam0, -537818634))
			{
				return func_777(189951448);
			}
			else
			{
				return func_777(1176172851);
			}
		}
	}
	else if (func_373(iParam0, -537818634))
	{
		return func_777(-963660207);
	}
	if (func_373(iParam0, 2084895747))
	{
		return func_777(1694039471);
	}
	return Var2;
}

int func_596(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_264(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_597(iParam0);
	if (iVar1 == joaat("ammo") || (bParam1 && iVar1 == joaat("weapon")))
	{
		iVar2 = func_592(iParam0, 1);
		if (iVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar2);
		}
	}
	else if (iVar1 == joaat("weapon"))
	{
		return func_778(iParam0, 0);
	}
	if (func_516(iParam0, joaat("default")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_514(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_779(iParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_514(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

int func_597(int iParam0)
{
	vector3 vVar0;

	if (!func_264(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_598(int iParam0, int iParam1, bool bParam2, int iParam3)
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
	Var0 = { func_780(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam2)
	{
		func_781(&Var0, func_715(0));
	}
	if (!func_782(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_783(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_652(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_784(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return 1;
}

int func_599(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_264(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	iVar0 = func_516(iParam0, joaat("default"));
	if (iVar0 != 0)
	{
		return func_785(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var1 = { func_600(iParam0, bParam4, 0) };
	Var6 = { func_263(iParam0, Var1, Var1.f_4, bParam4) };
	return func_652(iParam0, &Var6, &Var1, iParam1, iParam2, bParam3, bParam4);
}

struct<5> func_600(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_262(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_597(iParam0);
	switch (iVar5)
	{
		case joaat("clothing"):
			Var0 = { func_263(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			break;
		case joaat("weapon"):
			Var0 = { func_715(bParam1) };
			if (bParam2 && func_718(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_716(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_716(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_717(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_786(bParam1) };
			switch (func_765(iParam0))
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
			if (func_787(iParam0, -1823706425))
			{
				Var0 = { func_263(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_787(iParam0, -1483207246))
			{
				Var0 = { func_263(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1911121386))
			{
				Var0 = { func_263(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_787(iParam0, -1653629781))
			{
				Var0 = { func_263(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_520(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_787(iParam0, -1653629781))
			{
				Var0 = { func_263(1384535894, Var0, 1784584921, bParam1) };
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

void func_601(int iParam0, bool bParam1, int iParam2)
{
	Global_1939231->f_4 = iParam0;
	Global_1939231->f_34 = iParam2;
	if (bParam1 || (func_788() && iParam2 == 0))
	{
		func_789(1);
		func_790(1);
	}
}

void func_602(int iParam0, int iParam1)
{
	struct<4> Var0;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam1, 0))
	{
		return;
	}
	func_703(func_702(-1501807946), 1);
	Var0 = { func_379(0, 1, 0, -1) };
	bVar4 = PED::_0x33FA048675821DA7(iParam0, 3);
	if (!bVar4)
	{
		PED::_0x2EB75FB86C41F026(iParam0, 3, 1);
	}
	PED::_0x06D26A96CA1BCA75(iParam0, 3, 0f, 0);
	if (!bVar4)
	{
		PED::_0x2EB75FB86C41F026(iParam0, 3, 0);
	}
	PED::_0xEB8886E1065654CD(iParam0, 10, "ALL", 10f);
	iVar5 = func_381(Var0, 1);
	func_791(iParam0, iParam1);
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::_0xAD03B03737CE6810(iParam0)))
	{
		return;
	}
	iVar6 = 23;
	if (func_792(iParam1))
	{
		iVar6 = 15;
	}
	else if (iVar5 >= 50)
	{
		iVar6 = 14;
	}
	else if (iVar5 >= 25)
	{
		iVar6 = 13;
	}
	else
	{
		iVar6 = 12;
	}
	func_380(&Var0, 0, 1, 1);
	iVar7 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, 0);
	iVar8 = func_793(iVar7);
	func_794(Var0, 1, BUILTIN::TO_FLOAT(iVar8));
	if (iParam0 == PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID()))
	{
		func_795(iParam0, Global_1903929, iVar6, 0);
		func_796(-469672732, 0, 0);
		if (ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, 8) < 25 && iVar5 >= 25)
		{
			func_796(941437279, 0, 0);
		}
	}
	else
	{
		func_796(-162385832, 0, 0);
	}
}

void func_603(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam1, 0))
	{
		return;
	}
	if (!func_582(iParam1))
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
	func_797(iParam0);
	iVar0 = -1;
	bVar1 = false;
	if (func_319(iParam0))
	{
		iVar0 = func_334(iParam0);
		bVar1 = true;
	}
	PED::_0xEB8886E1065654CD(iParam0, 10, "ALL", 10f);
	func_703(func_702(-1501807946), 1);
	iVar2 = func_492(iParam0, 0);
	iVar3 = func_492(iParam0, 1);
	func_798(iParam0, iParam1);
	iVar4 = func_492(iParam0, 0);
	iVar5 = func_492(iParam0, 1);
	iVar6 = 0;
	iVar6 = (iVar6 + (iVar4 - iVar2));
	iVar6 = (iVar6 + (iVar5 - iVar3));
	func_103(iParam0);
	if (!bVar1)
	{
		return;
	}
	if (func_799(iParam1))
	{
		func_703(func_702(2071017687), 1);
	}
	if (func_800(iParam1))
	{
		return;
	}
	if (func_792(iParam1))
	{
		func_387(iVar0, 15);
		return;
	}
	iVar7 = -1;
	if (iVar6 >= 50)
	{
		iVar7 = 12;
	}
	else if (iVar6 >= 25)
	{
		iVar7 = 13;
	}
	else if (iVar6 >= 0)
	{
		iVar7 = 14;
	}
	if (iVar7 != -1)
	{
		func_387(iVar0, iVar7);
	}
	if (!func_157(43))
	{
		func_229(43, 0);
		func_432(MISC::GET_GAME_TIMER());
	}
}

void func_604(int iParam0, int iParam1)
{
	if (!ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam1, 0))
	{
		return;
	}
	if (!func_583(iParam1))
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
	if (iParam0 == PLAYER::_0xF49F14462F0AE27C(Global_1275573->f_10))
	{
		func_796(-469672732, 0, 0);
	}
	else
	{
		func_796(-162385832, 0, 0);
	}
	func_703(func_702(-1744861754), 1);
	func_791(iParam0, iParam1);
}

void func_605(int iParam0, int iParam1)
{
	if (!ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam1, 0))
	{
		return;
	}
	if (!func_583(iParam1))
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
	func_703(func_702(-1744861754), 1);
	func_798(iParam0, iParam1);
}

void func_606(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam1, 0))
	{
		return;
	}
	func_703(func_702(-454252884), 1);
	func_791(iParam0, iParam1);
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::_0xAD03B03737CE6810(iParam0)))
	{
		return;
	}
	if (iParam0 == PLAYER::_0xF49F14462F0AE27C(Global_1275573->f_10))
	{
		func_796(-469672732, 0, 0);
	}
	else
	{
		func_796(-162385832, 0, 0);
	}
}

void func_607(int iParam0, int iParam1)
{
	if (!ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam1, 0))
	{
		return;
	}
	if (!func_584(iParam1))
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
	func_703(func_702(-454252884), 1);
	func_798(iParam0, iParam1);
}

void func_608(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	func_791(iParam0, iParam1);
	PED::_0xEB8886E1065654CD(iParam0, 10, "ALL", 10f);
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::_0xAD03B03737CE6810(iParam0)))
	{
		return;
	}
	if (iParam0 == PLAYER::_0xF49F14462F0AE27C(Global_1275573->f_10))
	{
		func_796(-469672732, 0, 0);
	}
	else
	{
		func_796(-162385832, 0, 0);
	}
}

int func_609(int iParam0, int iParam1)
{
	if (!ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam1, 0))
	{
		return 0;
	}
	if (!func_585(iParam1))
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
	func_798(iParam0, iParam1);
	func_703(func_702(1179720150), 1);
	return 1;
}

void func_610(int iParam0, int iParam1)
{
	bool bVar0;
	struct<4> Var1;
	int iVar5;
	float fVar6;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar0 = PED::_0x33FA048675821DA7(iParam0, 3);
	if (!bVar0)
	{
		PED::_0x2EB75FB86C41F026(iParam0, 3, 1);
	}
	PED::_0x06D26A96CA1BCA75(iParam0, 3, 0f, 0);
	if (!bVar0)
	{
		PED::_0x2EB75FB86C41F026(iParam0, 3, 0);
	}
	func_791(iParam0, iParam1);
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::_0xAD03B03737CE6810(iParam0)))
	{
		return;
	}
	if (iParam0 == PLAYER::_0xF49F14462F0AE27C(Global_1275573->f_10))
	{
		Var1 = { func_379(0, 1, 0, -1) };
		func_380(&Var1, 0, 1, 1);
		iVar5 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, 0);
		fVar6 = (BUILTIN::TO_FLOAT(func_801(iVar5)) + (60f * 60f));
		func_795(iParam0, Global_1903929, 19, 0);
		func_794(Var1, 0, fVar6);
		func_796(-469672732, 0, 0);
	}
	else
	{
		func_796(-162385832, 0, 0);
	}
}

void func_611(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	float fVar3;

	if (!ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam1, 0))
	{
		return;
	}
	if (!func_586(iParam1))
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
	func_797(iParam0);
	func_798(iParam0, iParam1);
	bVar1 = func_319(iParam0);
	if (bVar1)
	{
		iVar0 = func_334(iParam0);
	}
	func_103(iParam0);
	if (!bVar1)
	{
		return;
	}
	if (!func_697(iParam0, 1))
	{
		func_387(iVar0, 18);
	}
	iVar2 = func_802(iParam0);
	fVar3 = (BUILTIN::TO_FLOAT(func_801(iVar2)) + (60f * 60f));
	func_705(iVar0, 0, fVar3);
}

void func_612(int iParam0, int iParam1)
{
	bool bVar0;
	struct<4> Var1;
	int iVar5;
	float fVar6;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar0 = PED::_0x33FA048675821DA7(iParam0, 3);
	if (!bVar0)
	{
		PED::_0x2EB75FB86C41F026(iParam0, 3, 1);
	}
	PED::_0x06D26A96CA1BCA75(iParam0, 3, 0f, 0);
	if (!bVar0)
	{
		PED::_0x2EB75FB86C41F026(iParam0, 3, 0);
	}
	func_791(iParam0, iParam1);
	if (PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID()) != iParam0)
	{
		func_796(-162385832, 0, 0);
		return;
	}
	func_796(-469672732, 0, 0);
	Var1 = { func_379(0, 1, 0, -1) };
	iVar5 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, 0);
	fVar6 = (BUILTIN::TO_FLOAT(func_801(iVar5)) + (60f * 60f));
	func_794(Var1, 0, fVar6);
}

void func_613(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	float fVar3;

	if (!ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam1, 0))
	{
		return;
	}
	if (!func_588(iParam1))
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
	if (func_319(iParam0))
	{
		iVar0 = func_334(iParam0);
		bVar1 = true;
	}
	if (bVar1)
	{
		iVar2 = func_802(iParam0);
		fVar3 = (BUILTIN::TO_FLOAT(func_801(iVar2)) + (60f * 60f));
		func_705(iVar0, 0, fVar3);
	}
	func_797(iParam0);
	func_798(iParam0, iParam1);
}

int func_614()
{
	return Global_1904591->f_9;
}

void func_615(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	struct<4> Var2;
	int iVar6;
	bool bVar7;
	int iVar8;
	bool bVar9;
	int iVar10;

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
	iVar0 = PLAYER::_0xF49F14462F0AE27C(PLAYER::GET_PLAYER_INDEX());
	if (iVar0 != iParam0)
	{
		func_796(-162385832, 0, 0);
		return;
	}
	bVar1 = PED::_0x33FA048675821DA7(iParam0, 3);
	if (!bVar1)
	{
		PED::_0x2EB75FB86C41F026(iParam0, 3, 1);
	}
	PED::_0x06D26A96CA1BCA75(iParam0, 3, 0f, 0);
	if (!bVar1)
	{
		PED::_0x2EB75FB86C41F026(iParam0, 3, 0);
	}
	PED::_0xEB8886E1065654CD(iParam0, 10, "ALL", 10f);
	func_791(iParam0, iParam1);
	Var2 = { func_379(0, 1, 0, -1) };
	func_380(&Var2, 0, 1, 1);
	iVar6 = func_801(0);
	func_794(Var2, 0, BUILTIN::TO_FLOAT(iVar6));
	bVar7 = false;
	iVar8 = MISC::GET_GAME_TIMER();
	if ((Global_1270530->f_1467.f_22 + 45000) > iVar8)
	{
		bVar7 = true;
	}
	bVar9 = false;
	if (bVar7 && Global_1270530->f_1467.f_22 + 15000 > iVar8)
	{
		bVar9 = true;
	}
	iVar10 = 23;
	if (iParam2 >= 10)
	{
		iVar10 = 18;
	}
	else if (bVar7)
	{
		if (bVar9)
		{
			return;
		}
		else
		{
			iVar10 = 16;
		}
	}
	else
	{
		iVar10 = 17;
	}
	switch (iVar10)
	{
		case 16:
		case 17:
			func_796(-469672732, 0, 0);
			break;
		case 18:
			func_796(1717813521, 0, 0);
			break;
		case 23:
			return;
	}
	func_795(iParam0, Global_1903929, iVar10, 0);
	Global_1270530->f_1467.f_22 = iVar8;
}

void func_616(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam1, 0))
	{
		return;
	}
	if (!func_587(iParam1))
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
	func_797(iParam0);
	PED::_0xEB8886E1065654CD(iParam0, 10, "ALL", 10f);
	func_798(iParam0, iParam1);
	func_103(iParam0);
	bVar1 = func_319(iParam0);
	if (bVar1)
	{
		iVar0 = func_334(iParam0);
	}
	if (!bVar1)
	{
		return;
	}
	iVar2 = func_802(iParam0);
	iVar3 = func_801(iVar2);
	func_705(iVar0, 0, BUILTIN::TO_FLOAT(iVar3));
	if (iParam2 >= 10)
	{
		iVar4 = 16;
	}
	else
	{
		iVar4 = 17;
	}
	func_387(iVar0, iVar4);
}

int func_617(var uParam0, bool bParam1)
{
	struct<29> Var0;
	struct<14> Var29;
	int iVar43;
	int iVar44;
	struct<10> Var45;
	int iVar59;

	Var0.f_9 = -1591664384;
	Var29 = { func_780(0, -1591664384, -1591664384, -1591664384, -1675500494, 0, 0) };
	if (func_782(&Var29, &iVar43, &iVar44, bParam1))
	{
		Var45.f_9 = -1591664384;
		iVar59 = 0;
		while (iVar59 < iVar44)
		{
			if (func_783(&Var45, iVar59, iVar43, iVar44))
			{
				if (func_803(&Var45, &Var0, 0))
				{
					if (func_804(&(Var0.f_24), 16))
					{
						*uParam0 = { Var0 };
						func_784(iVar43);
						return 1;
					}
				}
			}
			iVar59++;
		}
		func_784(iVar43);
	}
	return 0;
}

struct<4> func_618()
{
	return Global_1270530->f_11.f_348;
}

bool func_619()
{
	return Global_1270530->f_11.f_356 > Global_1275573->f_21;
}

void func_620(var uParam0, bool bParam1)
{
	Global_1270530->f_11.f_348 = { *uParam0 };
	if (bParam1)
	{
		Global_1270530->f_11.f_356 = Global_1275573->f_21 + 10;
	}
}

int func_621(int iParam0)
{
	var uVar0;
	bool bVar1;

	uVar0 = func_805(iParam0);
	bVar1 = func_807(func_806(), 0, 0);
	if (!bVar1)
	{
		return 3;
	}
	return uVar0;
}

bool func_622(int iParam0)
{
	return func_808(&(Global_3145858->f_6), iParam0);
}

int func_623(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 0:
				return 0;
			case 1:
				return 1;
			case 2:
				return 2;
			case 3:
				return 3;
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 4;
			case 1:
				return 5;
			case 2:
				return 6;
			case 3:
				return 7;
			default:
				break;
		}
	}
	return -1;
}

int func_624(var uParam0, bool bParam1)
{
	struct<29> Var0;
	struct<14> Var29;
	int iVar43;
	int iVar44;
	struct<10> Var45;
	int iVar59;

	Var0.f_9 = -1591664384;
	Var29 = { func_780(0, -1591664384, -1591664384, -1591664384, -1675500494, 0, 0) };
	if (func_782(&Var29, &iVar43, &iVar44, bParam1))
	{
		Var45.f_9 = -1591664384;
		iVar59 = 0;
		while (iVar59 < iVar44)
		{
			if (func_783(&Var45, iVar59, iVar43, iVar44))
			{
				if (func_803(&Var45, &Var0, 0))
				{
					if (func_804(&(Var0.f_24), 32))
					{
						*uParam0 = { Var0 };
						func_784(iVar43);
						return 1;
					}
				}
			}
			iVar59++;
		}
		func_784(iVar43);
	}
	return 0;
}

struct<4> func_625(bool bParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar16;

	Var2.f_9 = -1591664384;
	if (!func_809("ALL HORSES", &iVar0, &iVar1, -1591664384, bParam0))
	{
		return Var2;
	}
	iVar16 = 0;
	while (iVar16 < iVar1)
	{
		if (!func_783(&Var2, iVar16, iVar0, iVar1))
		{
		}
		else if (INVENTORY::_0xB881CA836CC4B6D4(&Var2))
		{
		}
		else
		{
			iVar16++;
		}
	}
	func_784(iVar0);
	return Var2;
}

void func_626(var uParam0)
{
	int iVar0;

	func_266(uParam0);
	uParam0->f_4 = 0;
	uParam0->f_5 = { func_515() };
	uParam0->f_9 = 0;
	uParam0->f_10 = -1;
	uParam0->f_11 = 0;
	StringCopy(&(uParam0->f_12), "", 64);
	uParam0->f_20 = 0;
	uParam0->f_22 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_23[iVar0] = 0f;
		iVar0++;
	}
	uParam0->f_27 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 13)
	{
		uParam0->f_28[iVar0] = 0;
		iVar0++;
	}
}

int func_627(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (!func_803(uParam0, uParam2, bParam3))
	{
		return 0;
	}
	if (!func_810(uParam1, uParam2))
	{
		return 0;
	}
	return 1;
}

int func_628(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (!func_811(uParam0, uParam2, bParam3))
	{
		return 0;
	}
	if (!func_812(uParam1, uParam2))
	{
		return 0;
	}
	return 1;
}

void func_629(var uParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;

	if (!func_813(uParam0->f_10))
	{
		return;
	}
	func_814(uParam0, 8);
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return;
	}
	iVar0 = func_514(0);
	iVar3 = 0;
	while (iVar3 < 13)
	{
		uVar1 = func_815(iVar3, 1);
		if (!INVENTORY::_0x6862E4D93F64CF01(iVar0, uParam0, uVar1, &uVar2))
		{
		}
		else
		{
			uParam0->f_28[iVar3] = uVar2;
		}
		iVar3++;
	}
}

int func_630(var uParam0)
{
	struct<4> Var0;
	struct<10> Var4;
	bool bVar18;
	int iVar19;

	Var0 = { func_515() };
	if (INVENTORY::_0x4C543D5DFCD2DAFD(uParam0, &Var0))
	{
		return 0;
	}
	Var4.f_9 = -1591664384;
	iVar19 = 0;
	while (iVar19 < 10)
	{
		if (INVENTORY::_0x4C543D5DFCD2DAFD(Global_17172.f_54.f_61.f_41[iVar19 /*54*/], uParam0))
		{
			bVar18 = true;
		}
		else if (INVENTORY::_0x4C543D5DFCD2DAFD(Global_17172.f_54.f_61.f_41[iVar19 /*54*/], &Var0))
		{
			func_816(Global_17172.f_54.f_61.f_41[iVar19 /*54*/]);
			*(Global_17172.f_54.f_61.f_41[iVar19 /*54*/]) = { *uParam0 };
			bVar18 = true;
		}
		else
		{
			if (func_520(*(Global_17172.f_54.f_61.f_41[iVar19 /*54*/]), &Var4, 1, 1, -1))
			{
			}
			else
			{
				func_816(Global_17172.f_54.f_61.f_41[iVar19 /*54*/]);
				*(Global_17172.f_54.f_61.f_41[iVar19 /*54*/]) = { *uParam0 };
				bVar18 = true;
			}
			else
			{
				iVar19++;
			}
		}
	}
	if (!bVar18)
	{
		return 0;
	}
	return 1;
}

void func_631(int iParam0, struct<4> Param1, int iParam5, int iParam6)
{
	int iVar0;

	iParam6 = func_694(iParam6, 0, 100);
	func_817(Param1, iParam5, iParam6);
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		return;
	}
	if (func_501(iParam5, &iVar0))
	{
		ATTRIBUTE::SET_ATTRIBUTE_BASE_RANK(iParam0, iVar0, iParam6);
	}
}

var func_632(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	uVar20 = UIFEED::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_818(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_633(int iParam0, int iParam1)
{
	float fVar0;

	if (iParam1 == -1)
	{
		return 0;
	}
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	fVar0 = func_819(iParam1);
	if (fVar0 == 1E+09f)
	{
		return 0;
	}
	if (func_635(iParam0, iParam1) >= fVar0)
	{
		return 1;
	}
	return 0;
}

int func_634(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;

	if (iParam1 == -1)
	{
		return 0;
	}
	iParam0 = func_77(iParam0);
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
	iVar0 = func_78(iParam0);
	fVar1 = func_144(iVar0);
	if (fVar1 >= 0.1f)
	{
		return 1;
	}
	return 0;
}

float func_635(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return 0f;
	}
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return &((Global_39.f_277.f_1[iParam0 /*431*/])->f_369.f_2[iParam1]);
}

float func_636(int iParam0)
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
			return 15f;
		case 11:
			return 1f;
		case 12:
			return 15f;
		case 13:
			return 5f;
		case 14:
			return 1f;
		case 15:
			return 5f;
		case 16:
			return 15f;
		case 17:
			return 1f;
		case 18:
			return 5f;
		case 19:
			return 15f;
		case 20:
			return 1f;
	}
	return 0f;
}

int func_637(int iParam0, int iParam1)
{
	int iVar0;
	struct<4> Var1;
	int iVar5;

	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = func_221(iParam1);
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

bool func_638()
{
	return Global_39.f_277.f_3047;
}

void func_639(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char* sVar5;
	int iVar6;
	char* sVar7;
	int iVar8;

	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_159(iParam0);
	iVar1 = func_104(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iVar1 >= iVar2)
	{
		return;
	}
	(Global_39.f_277.f_1[iParam0 /*431*/])->f_369.f_1 = ((Global_39.f_277.f_1[iParam0 /*431*/])->f_369.f_1 + fParam1);
	iVar3 = func_78(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar3) || PED::IS_PED_INJURED(iVar3))
	{
		return;
	}
	func_527(iVar3, BUILTIN::FLOOR((Global_39.f_277.f_1[iParam0 /*431*/])->f_369.f_1));
	iVar4 = func_332(iVar3);
	(Global_39.f_277.f_1[iParam0 /*431*/])->f_369 = iVar4;
	PED::_0xA69899995997A63B(iVar3, iVar4);
	func_580(iVar4);
	if (iVar4 > iVar1)
	{
		func_820(iParam0, iVar4);
		if (iParam0 == 6)
		{
			if (iVar4 == 1)
			{
				if (func_122(41))
				{
					func_229(19, 1);
				}
				else
				{
					func_229(20, 1);
				}
			}
		}
		if (iVar4 == 2)
		{
			func_229(21, 1);
		}
		else if (iVar4 == 3)
		{
			func_229(22, 1);
		}
		else if (iVar4 == 4)
		{
			func_229(23, 1);
		}
		if (iVar4 >= 2)
		{
			sVar5 = func_802(iVar3);
			iVar6 = func_821();
			func_822(iVar6, sVar5);
			sVar7 = func_823(iVar3);
			iVar8 = func_824();
			func_822(iVar8, sVar7);
		}
		COMPENDIUM::COMPENDIUM_HORSE_BONDING(iVar3, iVar4);
		func_703(func_702(352983236), 1);
		if (iVar4 == iVar2)
		{
			func_703(func_702(-2116919750), 1);
		}
		func_825(0, -1);
	}
}

void func_640(int iParam0, int iParam1, float fParam2)
{
	if (iParam1 == -1)
	{
		return;
	}
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_39.f_277.f_1[iParam0 /*431*/])->f_369.f_2[iParam1] = fParam2;
}

void func_641(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_39.f_277.f_1[iParam0 /*431*/])->f_369.f_1 = fParam1;
	iVar0 = func_78(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	iVar1 = BUILTIN::FLOOR((Global_39.f_277.f_1[iParam0 /*431*/])->f_369.f_1);
	func_527(iVar0, iVar1);
	iVar2 = func_332(iVar0);
	(Global_39.f_277.f_1[iParam0 /*431*/])->f_369 = iVar2;
	PED::_0xA69899995997A63B(iVar0, iVar2);
	func_580(iVar2);
}

void func_642(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
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

void func_643(int iParam0)
{
	int iVar0;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1954472->f_5.f_7))
	{
		return;
	}
	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1954472->f_5.f_7) > iParam0)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1954472->f_5.f_7, iParam0);
		if (iVar0 == &Global_1954472->f_5.f_14[iParam0 /*82*/])
		{
			return;
		}
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1954472->f_5.f_7, iParam0, "pause_info_panel_list", &(Global_1954472->f_5.f_14[iParam0 /*82*/]));
}

void func_644(bool bParam0)
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

void func_645(bool bParam0)
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

void func_646(bool bParam0)
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

var func_647(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = iParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	Var13.f_7 = 1;
	uVar21 = UIFEED::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

int func_648(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_264(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	iVar0 = func_516(iParam0, joaat("default"));
	if (iVar0 != 0)
	{
		return func_826(iParam0, iParam1, iParam2);
	}
	Var1 = { func_600(iParam0, 0, 1) };
	Var6 = { func_263(iParam0, Var1, Var1.f_4, 0) };
	return func_267(iParam0, &Var6, &Var1, iParam1, iParam2, 0);
}

int func_649(int iParam0)
{
	return 0;
}

int func_650(var uParam0, int iParam1, bool bParam2)
{
	return INVENTORY::_0x033EE4B89F3AC545(func_514(bParam2), uParam0, iParam1);
}

int func_651(int iParam0, var uParam1)
{
	int iVar0;
	struct<10> Var1;
	struct<4> Var15;

	if (!func_396(iParam0))
	{
		return 0;
	}
	iVar0 = func_649(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_262(0) };
	if (!func_827(Var15, iVar0, &Var1, 0, 0))
	{
		return 0;
	}
	if (!func_828(&Var1, uParam1))
	{
		return 0;
	}
	return 1;
}

int func_652(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;
	struct<13> Var15;
	struct<16> Var31;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_829(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_520(*uParam1, &Var0, bParam6, 0, -1))
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
	if (!func_518(bParam6))
	{
		iVar14 = -1;
		if (func_2() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_727(joaat("use"), &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31 = bParam5;
				Var31.f_7 = iParam4;
				func_830(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_514(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

bool func_653(int iParam0)
{
	return func_597(iParam0) == joaat("horse");
}

int func_654()
{
	int iVar0;

	iVar0 = func_655();
	if (MAP::DOES_BLIP_EXIST(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_655()
{
	return Global_1903007->f_379.f_1;
}

void func_656(int iParam0)
{
	Global_1903007->f_379.f_1 = iParam0;
}

int func_657(int iParam0, int iParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if (!func_264(iParam0, 0))
	{
		return func_831(func_589(iParam0), iParam1, bParam2);
	}
	if (func_832(iParam0))
	{
		return func_834(func_833(iParam0, 1), iParam1);
	}
	if ((bParam2 && func_2() == 0) && !UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
	{
		return 1;
	}
	if (!func_835(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_658(int iParam0, int iParam1)
{
	return ((Global_1904613->f_31[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_659(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(&(Global_17172.f_2563[iParam0]), iParam1);
}

int func_660(int iParam0)
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

bool func_661(int iParam0)
{
	return !func_836(iParam0, 1);
}

int func_662(int iParam0)
{
	if (!func_446(iParam0))
	{
		return -1;
	}
	if (iParam0 == 40 && func_581() == 137)
	{
		return 137;
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 129:
			return 83;
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
		case 122:
		case 123:
			return 40;
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 140:
			return 74;
		case 26:
			return 3;
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
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 124:
		case 125:
			return 5;
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 126:
			return 111;
		case 27:
		case 28:
			return 23;
		case 41:
			return 107;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 127:
			return 26;
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
		case 120:
		case 121:
			return 81;
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 128:
			return 98;
		case 3:
			return 13;
		case 151:
		case 152:
		case 153:
		case 154:
			return 84;
		case 155:
		case 156:
		case 157:
		case 158:
		case 159:
			return 104;
		case 4:
			return 14;
		case 160:
		case 161:
		case 162:
		case 163:
			return 76;
		case 164:
		case 165:
		case 166:
		case 167:
			return 4;
		case 40:
			return 95;
		case 168:
		case 169:
		case 170:
		case 171:
			return 9;
		case 76:
			return 119;
		case 99:
		case 100:
		case 101:
			return 28;
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
			return 121;
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
			return 127;
		case 115:
		case 116:
			return 130;
		case 117:
		case 118:
			return 123;
		case 132:
			return 87;
		case 130:
		case 131:
			return 135;
		case 64:
			return 76;
		case 65:
			return 104;
		case 66:
			return 9;
		case 67:
			return 84;
		case 113:
			return 96;
		case 114:
			return 29;
		case 135:
			return 126;
		case 136:
			return 133;
		case 137:
			return 136;
		case 138:
			return 39;
		case 139:
			return 16;
		case 141:
			return 76;
		case 142:
			return 61;
		case 143:
			return 100;
		case 144:
			return 34;
		case 145:
			return 43;
		case 146:
			return 85;
		case 20:
			return -1;
		case 134:
			return -1;
		default:
			break;
	}
	return -1;
}

bool func_663(int iParam0)
{
	if (!(iParam0 >= 0 && iParam0 <= 150))
	{
		return false;
	}
	if (Global_1572887->f_13 == -1)
	{
		return Global_7887[iParam0 /*11*/] & 32 != 0;
	}
	return Global_1070356->f_17941[iParam0 /*11*/] & 32 != 0;
}

int func_664(int iParam0)
{
	if (!func_837(iParam0))
	{
		return 0;
	}
	return func_838(iParam0, 33554432);
}

float func_665(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_666()
{
	Global_1903007->f_429.f_13 = 0;
}

int func_667()
{
	return Global_1903007->f_429.f_13;
}

void func_668(int iParam0)
{
	Global_1903007->f_429.f_13 = iParam0;
}

bool func_669(int iParam0, int iParam1, int iParam2)
{
	if (!func_264(iParam1, 0))
	{
		return false;
	}
	return func_473(iParam0, iParam1) >= iParam2;
}

int func_670(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_264(iParam1, 0))
	{
		return 0;
	}
	if (iParam2 < 1)
	{
		return 0;
	}
	Var0 = { func_474(iParam0) };
	Var5 = { func_475(iParam0, iParam1, Var0, Var0.f_4) };
	return func_839(iParam0, iParam1, &Var5, iParam2, iParam3, bParam4);
}

struct<4> func_671(int iParam0, int iParam1)
{
	struct<5> Var0;

	Var0 = { func_474(iParam0) };
	return func_475(iParam0, iParam1, Var0, Var0.f_4);
}

int func_672(int iParam0, var uParam1)
{
	if (!func_840(iParam0))
	{
		return 0;
	}
	*uParam1 = Global_1915131[iParam0];
	if (*uParam1 == 0)
	{
		return 0;
	}
	return 1;
}

int func_673(int iParam0)
{
	if (func_2() != -1)
	{
		if (Global_1070356->f_10)
		{
			if (iParam0 == 3)
			{
				return -1033589769;
			}
		}
	}
	return func_841(iParam0);
}

int func_674(int iParam0)
{
	if (func_658(iParam0, 4))
	{
		return 0;
	}
	return 1;
}

int func_675(int iParam0)
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

int func_676()
{
	if (!func_842())
	{
		return 0;
	}
	return Global_1904613->f_8196;
}

bool func_677()
{
	return Global_1904613->f_8195 != -1;
}

bool func_678()
{
	int iVar0;

	iVar0 = UIFEED::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && UIFEED::_0x59FA676177DBE4C9(iVar0) <= 4);
}

bool func_679(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

bool func_680()
{
	return Global_1070356->f_27136.f_19.f_3 != 0;
}

bool func_681()
{
	return Global_1896726->f_382;
}

int func_682()
{
	var uVar0;

	if (!func_842())
	{
		return 0;
	}
	uVar0 = Global_1904613->f_8197;
	Global_1904613->f_8197 = 0;
	return uVar0;
}

bool func_683(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_843(iParam1) || !func_843(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

int func_684(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_685(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_844(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_686(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_687(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_688(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_689(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_690(int iParam0, int iParam1)
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

float func_691(float fParam0, float fParam1, float fParam2)
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

int func_692(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_679(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 == func_845())
	{
		return func_679(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1275573->f_22[iParam1])
	{
		return func_679(&(((*Global_1097610)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

char* func_693(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_694(int iParam0, int iParam1, int iParam2)
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

void func_695(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iParam2 = func_694(iParam2, 0, 100);
	(Global_39.f_277.f_1[iParam0 /*431*/])->f_393[iParam1 /*4*/] = iParam2;
	iVar0 = func_78(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
	}
	func_493(iVar0, iParam1, func_435(iParam0, iParam1));
	func_846(iVar0, iParam1);
}

void func_696(int iParam0, int iParam1, float fParam2)
{
	fParam2 = func_847(fParam2, 0f, 1E+09f);
	((Global_39.f_277.f_1[iParam0 /*431*/])->f_393[iParam1 /*4*/])->f_2 = fParam2;
}

int func_697(int iParam0, int iParam1)
{
	var uVar0;

	if (func_490(iParam1, &uVar0))
	{
		if (ATTRIBUTE::_0x200373A8DF081F22(iParam0, uVar0))
		{
			return 1;
		}
	}
	return 0;
}

float func_698(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;

	fVar0 = 0f;
	if (iParam1 == 0)
	{
		if (func_402(iParam0, 0) > 50)
		{
			fVar0 = (fVar0 + 0.25f);
		}
	}
	if (func_594(-184823984 /* GXTEntry: "Boar Tusk Talisman" */, 1))
	{
		fVar0 = (fVar0 - -0.1f);
	}
	if (func_165() == 0 && func_155() == iParam0)
	{
		fVar1 = func_848(iParam1);
		fVar0 = (fVar0 - fVar1);
	}
	return fVar0;
}

float func_699(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return ((Global_39.f_277.f_1[iParam0 /*431*/])->f_393[iParam1 /*4*/])->f_1;
}

void func_700(int iParam0, int iParam1, float fParam2)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	fParam2 = func_847(fParam2, -1f, 1f);
	((Global_39.f_277.f_1[iParam0 /*431*/])->f_393[iParam1 /*4*/])->f_1 = fParam2;
}

void func_701(int iParam0)
{
	Global_1903007->f_429.f_8 = iParam0;
}

struct<2> func_702(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_703(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

void func_704(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iParam2 = func_694(iParam2, 0, 100);
	(Global_39.f_277.f_1[iParam0 /*431*/])->f_402[iParam1 /*4*/] = iParam2;
	iVar0 = func_78(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
	}
	func_528(iVar0, iParam1, iParam2);
}

void func_705(int iParam0, int iParam1, float fParam2)
{
	fParam2 = func_847(fParam2, 0f, 1E+09f);
	((Global_39.f_277.f_1[iParam0 /*431*/])->f_402[iParam1 /*4*/])->f_2 = fParam2;
}

int func_706(int iParam0)
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

float func_707(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return ((Global_39.f_277.f_1[iParam0 /*431*/])->f_402[iParam1 /*4*/])->f_1;
}

void func_708(int iParam0, int iParam1, float fParam2)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	fParam2 = func_847(fParam2, -1f, 1f);
	((Global_39.f_277.f_1[iParam0 /*431*/])->f_402[iParam1 /*4*/])->f_1 = fParam2;
}

void func_709(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((Global_39.f_277.f_1[iParam0 /*431*/])->f_402[iParam1 /*4*/])->f_1 = 0f;
}

int func_710(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return ((*Global_1903007)[iParam0 /*43*/])->f_1;
}

void func_711(int iParam0)
{
	Global_1903007->f_429.f_6 = iParam0;
}

int func_712(int iParam0)
{
	if (!func_264(*iParam0, 0))
	{
		return 0;
	}
	if (!func_849(*iParam0))
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

int func_713(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

bool func_714(int iParam0)
{
	return func_597(iParam0) == joaat("weapon");
}

struct<4> func_715(bool bParam0)
{
	int iVar0;

	iVar0 = func_514(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_4)))
		{
			Global_1272170->f_4 = { func_263(923904168, func_262(bParam0), -740156546, bParam0) };
		}
		return Global_1272170->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_16)))
		{
			Global_1272170->f_16 = { func_263(923904168, func_262(bParam0), -740156546, 0) };
		}
		return Global_1272170->f_16;
	}
	return func_263(923904168, func_262(bParam0), -740156546, 0);
}

bool func_716(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_265(iParam0, *uParam1, iParam2, bParam3, 1, iParam4) > 0;
}

int func_717(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_850(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

int func_718(int iParam0, bool bParam1)
{
	if (func_765(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_851();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_719(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_264(iParam0, 0) && !func_713(func_589(iParam0), 2))
	{
		return 0;
	}
	if (func_597(iParam0) == 26423971)
	{
		return -1;
	}
	if (!bParam2 && func_516(iParam0, joaat("default")) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_514(bParam3), iParam0);
}

struct<28> func_720(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_514(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_726(&Var28, bParam5) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_721(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_852(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			return func_853(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 28), iVar0, uParam1);
		}
	}
	else
	{
		return func_854(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 28), iVar0, uParam1);
	}
	return -1;
}

struct<25> func_722(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<25> Var0;
	struct<24> Var25;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return Var0;
	}
	Var25.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_514(bParam4), &uParam0, &Var25, 24, 1))
	{
		return Var0;
	}
	Var0 = { func_726(&Var25, bParam5) };
	Var0.f_16 = { Var25.f_15 };
	Var0.f_24 = Var25.f_23;
	return Var0;
}

int func_723(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			return func_853(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 25), iVar0, uParam1);
		}
	}
	else
	{
		return func_854(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 25), iVar0, uParam1);
	}
	return -1;
}

struct<17> func_724(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_514(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_726(&Var17, bParam5) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_725(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_852(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			return func_853(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 17), iVar0, uParam1);
		}
	}
	else
	{
		return func_854(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17), iVar0, uParam1);
	}
	return -1;
}

struct<16> func_726(var uParam0, bool bParam1)
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
	if (bParam1)
	{
		Var0.f_15 = func_516(uParam0->f_4, joaat("default"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_515() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_727(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_852(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			return func_853(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 16), iVar0, uParam1);
		}
	}
	else
	{
		return func_854(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

int func_728(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_514(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

int func_729(int iParam0)
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

int func_730(int iParam0, int iParam1)
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
	iVar1 = func_222(iParam1);
	uVar2 = func_855(iVar0, iVar1, 1);
	return uVar2;
}

int func_731(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, false, false);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_856(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_732(int iParam0)
{
	return iParam0;
}

int func_733(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_857(&uParam0, iParam4, bParam5, iParam6);
}

int func_734(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam0 != 0)
	{
		iVar5 = func_765(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_858(iParam0);
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

void func_735(int iParam0, int iParam1)
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
	PED::_SET_PED_COMPONENT_ENABLED(iParam0, iVar0, false, func_2() == 0, false);
}

void func_736(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = { 0f, 0f, 0f };
}

float func_737(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_738(var uParam0)
{
	return *uParam0;
}

void func_739(var uParam0, vector3 vParam1)
{
	uParam0->f_3.f_3 = { vParam1 };
}

void func_740(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_741(vector3 vParam0, vector3 vParam3, bool bParam6, bool bParam7)
{
	bool bVar0;
	var uVar1;
	float fVar2;

	bVar0 = CAM::IS_SPHERE_VISIBLE(vParam0, 5f);
	if (bParam6)
	{
		if (func_859(vParam0 + Vector(0.2f, 0f, 0f)))
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

int func_742(vector3 vParam0, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7, int iParam8, float fParam9, int iParam10, float fParam11)
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
			func_860(&(iParam3->f_1), iParam3->f_2, vParam0, iParam5, iParam7, iParam8, fParam9, iParam10, fParam11);
			if (!TASK::_0x1AC5A8AB50CFAA33(iParam3->f_1))
			{
			}
			else
			{
				func_861(&(iParam3->f_1), iParam5, vParam0);
				if (!func_193(iParam3->f_6))
				{
					TASK::_0xCE4E669400E5F8AA(iParam3->f_1, func_862(iParam3->f_6));
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

bool func_743(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_744(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_863(*uParam0, 0f, 0f, 0f))
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

var func_745(var uParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, uParam1);
}

void func_746(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1903007)[iParam0 /*43*/])->f_23 = (((*Global_1903007)[iParam0 /*43*/])->f_23 || iParam1);
}

int func_747(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10)
{
	struct<12> Var0;
	struct<4> Var14;

	if (!func_518(bParam10))
	{
		return func_864(Param0, Param4, iParam8, 1, bParam9, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_520(Param0, &Var0, 0, 0, -1))
	{
		return 0;
	}
	if (func_865(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return 1;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(Var0.f_4, iParam8))
	{
		return 0;
	}
	if (!INVENTORY::_0xDCCAA7C3BFD88862(func_514(0), &Param0, &Param4, iParam8, Var0.f_11, &Var14))
	{
		return 0;
	}
	if (bParam9)
	{
		if (!func_268(Var14, 1))
		{
		}
	}
	return 1;
}

int func_748(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	struct<11> Var0;
	struct<11> Var14;
	int iVar28;

	if (!func_518(bParam9))
	{
		return func_866(Param0, Param4, iParam8, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return 0;
	}
	if (func_865(&Param0, &Param4))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_520(Param0, &Var0, 1, 0, -1) || !func_520(Param4, &Var14, 1, 0, -1))
	{
		return 0;
	}
	if (func_865(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(Var0.f_4, Var14.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(Var14.f_4, Var0.f_9))
	{
		return 0;
	}
	iVar28 = func_514(0);
	if (!INVENTORY::_0xF2753D691BCDA314(iVar28, &Param0, &Param4))
	{
		return 0;
	}
	if (!INVENTORY::_0x734311E2852760D0(iVar28, &Param0, (Var14.f_10 || iParam8)))
	{
	}
	if (!INVENTORY::_0x734311E2852760D0(iVar28, &Param4, (Var0.f_10 || iParam8)))
	{
	}
	return 1;
}

int func_749(int iParam0)
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
		case -1029277326:
			return -179102320 /* GXTEntry: "Appaloosa - Brown Leopard Coat" */;
		case joaat("a_c_horse_appaloosa_leopard"):
			return -1266863668 /* GXTEntry: "Appaloosa - Leopard Coat" */;
		case joaat("a_c_horse_arabian_black"):
			return -2078767648 /* GXTEntry: "Arabian - Black Coat" */;
		case -403470324:
			return -852553462 /* GXTEntry: "Arabian - Rose Grey Bay Coat" */;
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
		case -683592019:
			return -757978903 /* GXTEntry: "Breton - Red Roan Coat" */;
		case 337109765:
			return 1909854428 /* GXTEntry: "Breton - Sorrel Coat" */;
		case -619132373:
			return 1592694494 /* GXTEntry: "Breton - Grullo Dun Coat" */;
		case 1544366970:
			return 981469777 /* GXTEntry: "Breton - Seal Brown Coat" */;
		case -1441144351:
			return 1064693514 /* GXTEntry: "Breton - Mealy Dapple Bay Coat" */;
		case -1717674545:
			return -1365665739 /* GXTEntry: "Breton - Steel Grey Coat" */;
		case 1825358734:
			return 1577022605 /* GXTEntry: "Criollo - Blue Roan Overo Coat" */;
		case 1138427579:
			return 381495209 /* GXTEntry: "Criollo - Dun Coat" */;
		case -1720251851:
			return 3032834 /* GXTEntry: "Criollo - Bay Brindle Coat" */;
		case 506887890:
			return -1722101672 /* GXTEntry: "Criollo - Sorrel Overo Coat" */;
		case 766293155:
			return -189605757 /* GXTEntry: "Criollo - Bay Frame Overo Coat" */;
		case 2147082926:
			return 863391233 /* GXTEntry: "Criollo - Marble Sabino Coat" */;
		case -1616287563:
			return 885568364 /* GXTEntry: "Kladruber - Black Coat" */;
		case -127412252:
			return -1540355548 /* GXTEntry: "Kladruber - White Coat" */;
		case -1881155818:
			return -601560591 /* GXTEntry: "Kladruber - Cremello Coat" */;
		case -955237712:
			return -370362766 /* GXTEntry: "Kladruber - Grey Coat" */;
		case -647020346:
			return -1698261864 /* GXTEntry: "Kladruber - Dapple Rose Grey Coat" */;
		case -1846319726:
			return -670301166 /* GXTEntry: "Kladruber - Silver Coat" */;
		case 1007570567:
			return -302057902;
		case 1029339151:
			return 1257620801;
		case -1424767799:
			return 821735821;
		case -217135948:
			return -769035812;
		case -156439156:
			return -1824684932;
		case 1344011125:
			return 1589592948;
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
		case 1496579364:
			return -2055655009 /* GXTEntry: "Arabian - Red Chestnut Coat" */;
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
		default:
			break;
	}
	return 0;
}

int func_750(int iParam0)
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

void func_751(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_39.f_277.f_1[iParam0 /*431*/])->f_9 = iParam1;
}

void func_752(int iParam0, var uParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_39.f_277.f_1[iParam0 /*431*/])->f_8 = uParam1;
}

void func_753(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_39.f_277.f_1[iParam0 /*431*/])->f_10 = iParam1;
}

void func_754(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_39.f_277.f_1[iParam0 /*431*/])->f_12 = iParam1;
}

void func_755(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_39.f_277.f_1[iParam0 /*431*/])->f_13 = iParam1;
}

int func_756()
{
	return -364764277 /* GXTEntry: "Scrawny Nag" */;
}

int func_757()
{
	return 808655744;
}

int func_758()
{
	return 1;
}

void func_759(int iParam0)
{
	Global_39.f_277.f_3042 = iParam0;
}

void func_760(int iParam0, var uParam1, var uParam2)
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

bool func_761()
{
	return !&Global_1912978;
}

void func_762(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1912978->f_3)
	{
		if ((((&Global_1912978->f_4[iVar0 /*6*/] == iParam0 && (Global_1912978->f_4[iVar0 /*6*/])->f_2 == bParam2) && (Global_1912978->f_4[iVar0 /*6*/])->f_3 == bParam3) && (Global_1912978->f_4[iVar0 /*6*/])->f_4 == bParam4) && (Global_1912978->f_4[iVar0 /*6*/])->f_5 == bParam5)
		{
			(Global_1912978->f_4[iVar0 /*6*/])->f_1 = ((Global_1912978->f_4[iVar0 /*6*/])->f_1 + iParam1);
			return;
		}
		iVar0++;
	}
	if (Global_1912978->f_3 < 19)
	{
		Global_1912978->f_4[Global_1912978->f_3 /*6*/] = iParam0;
		(Global_1912978->f_4[Global_1912978->f_3 /*6*/])->f_1 = iParam1;
		(Global_1912978->f_4[Global_1912978->f_3 /*6*/])->f_2 = bParam2;
		(Global_1912978->f_4[Global_1912978->f_3 /*6*/])->f_3 = bParam3;
		(Global_1912978->f_4[Global_1912978->f_3 /*6*/])->f_4 = bParam4;
		(Global_1912978->f_4[Global_1912978->f_3 /*6*/])->f_5 = bParam5;
		Global_1912978->f_3++;
	}
}

char* func_763(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_764(int iParam0, int iParam1)
{
	if (!func_264(iParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

int func_765(int iParam0)
{
	struct<2> Var0;

	if (!func_264(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_766(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_767(int iParam0)
{
	if (func_373(iParam0, -1995062316))
	{
		return "collectible_arrowheads";
	}
	if (func_373(iParam0, 1239889275))
	{
		return "collectible_liquor_bottles";
	}
	if (func_373(iParam0, 143267379))
	{
		return "collectible_coins";
	}
	if (func_373(iParam0, -944041124))
	{
		return "colectible_heirlooms";
	}
	if (func_373(iParam0, 1562621600))
	{
		return "collectible_jewelry";
	}
	if (func_373(iParam0, -149719013))
	{
		return "collectible_bird_eggs";
	}
	if (func_373(iParam0, 1940829793))
	{
		return "collectible_tarot_cards";
	}
	if (func_373(iParam0, 781094263))
	{
		return "collectible_flowers";
	}
	return "";
}

int func_768(int iParam0)
{
	int iVar0;

	if (!func_264(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_867(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

int func_769(int iParam0)
{
	switch (iParam0)
	{
		case -1696039442:
		case 688466329:
		case 759802290:
			return 0;
		default:
			break;
	}
	return 1;
}

int func_770(int iParam0)
{
	struct<19> Var0;
	int iVar35;

	if (!func_264(iParam0, 0))
	{
		return 0;
	}
	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var0))
	{
		iVar35 = 0;
		while (iVar35 < 8)
		{
			if ((Var0.f_18[iVar35 /*2*/])->f_1 == 14460646)
			{
				if (&Var0.f_18[iVar35 /*2*/] != 0)
				{
					return &(Var0.f_18[iVar35 /*2*/]);
				}
			}
			iVar35++;
		}
	}
	return 0;
}

int func_771(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_868(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

int func_772(int iParam0, char* sParam1)
{
	int iVar0;
	char cVar1[128];

	if (!func_264(iParam0, 0))
	{
		return 0;
	}
	StringCopy(sParam1, func_869(iParam0), 128);
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (!func_870(iParam0))
	{
		return 0;
	}
	StringCopy(&cVar1, func_871(iParam0), 128);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
		return 0;
	}
	StringConCat(&cVar1, " - ", 128);
	iVar0 = (iVar0 + HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar1));
	StringConCat(&cVar1, sParam1, 128);
	if (iVar0 >= 127)
	{
		return 0;
	}
	*sParam1 = { cVar1 };
	return 1;
}

var func_773(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

char* func_774(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_693(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

int func_775(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_264(iParam0, 0))
	{
		return 0;
	}
	if (Global_1939178->f_6)
	{
		return 0;
	}
	iVar0 = func_592(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_809("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_783(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_872(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_784(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_784(iVar1);
	}
	return 0;
}

bool func_776(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_264(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_765(iParam0);
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
	iVar1 = func_873(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_874(&(Global_17172.f_54.f_644.f_1353.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_875(iParam0);
	iVar2 = func_874(&(Global_17172.f_54.f_644.f_1353.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17172.f_54.f_644.f_1353.f_5[iVar2 /*17*/];
}

struct<2> func_777(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

int func_778(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_780(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_781(&Var0, func_715(0));
	}
	if (!func_782(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_784(iVar14);
	return uVar15;
}

struct<4> func_779(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_600(iParam0, bParam1, 0) };
	return func_263(iParam0, Var0, Var0.f_4, bParam1);
}

struct<14> func_780(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_781(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_782(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_514(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_783(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_784(int iParam0)
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

int func_785(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<6> Var1[5];
	int iVar32;
	int iVar33;
	int iVar34;
	struct<16> Var35;
	struct<16> Var51;

	if (func_829(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_516(iParam0, joaat("default"));
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_518(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_876(&Var1, &iVar32, iParam0, iVar0, iParam1, 1) || iVar32 < 1)
		{
			return 0;
		}
		iVar34 = -1;
		Var35.f_9 = 1;
		Var35.f_11 = -1591664384;
		iVar33 = 0;
		while (iVar33 < iVar32)
		{
			Var35 = { func_877(iParam0, Var1[iVar33 /*6*/]) };
			Var35.f_12 = iParam2;
			iVar34 = func_727(joaat("use"), &Var35, 1);
			if (iVar34 == -1)
			{
				return 0;
			}
			iVar33++;
		}
		if (iVar34 != -1)
		{
			Var51.f_7 = -142743235;
			Var51 = bParam3;
			Var51.f_7 = iParam2;
			func_830(iVar34, Var51);
			return 1;
		}
		return 0;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_514(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

struct<4> func_786(bool bParam0)
{
	int iVar0;

	iVar0 = func_514(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_8)))
		{
			Global_1272170->f_8 = { func_263(271701509, func_262(bParam0), 12999093, 0) };
		}
		return Global_1272170->f_8;
	}
	return func_263(271701509, func_262(bParam0), 12999093, 0);
}

int func_787(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_765(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (func_878(iParam0, iParam1, iVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

int func_788()
{
	if ((Global_1939231->f_10485 != (Global_1939231->f_38.f_203 - 1) || func_880(func_879(0), Global_1939231->f_10478, 0, 1, 1) > 0) || Global_1939231->f_10485 == 15)
	{
		return 1;
	}
	func_881();
	if (Global_1939231->f_6)
	{
		return 1;
	}
	return 0;
}

void func_789(int iParam0)
{
	Global_1939231->f_10 = iParam0;
}

void func_790(int iParam0)
{
	Global_1939231->f_9 = iParam0;
}

void func_791(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<2> Var4;
	struct<6> Var26;
	float fVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	float fVar38;
	int iVar39;
	float fVar40;

	if (!func_264(iParam1, 0))
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
	if (PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID()) == iParam0)
	{
		Var0 = { func_379(0, 1, 0, -1) };
	}
	Var4.f_1 = 20;
	ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iParam1, &Var4);
	iVar34 = 0;
	while (iVar34 < Var4)
	{
		ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var4.f_1[iVar34]), &Var26);
		switch (Var26.f_1)
		{
			case 1194731729:
				iVar35 = (100 - func_381(Var0, 1));
				if (iVar35 > 50)
				{
					iVar36 = Var26.f_2;
					func_382(iParam0, Var0, 2, iVar36);
				}
				break;
			case 978049229:
				func_882(iParam0, Var26.f_5);
				break;
			case -1918697215:
				iVar37 = func_492(iParam0, 0);
				fVar38 = Var26.f_5;
				func_493(iParam0, 0, (iVar37 + BUILTIN::CEIL(fVar38)));
				func_382(iParam0, Var0, 1, BUILTIN::FLOOR(-fVar38));
				break;
			case 1136630075:
				fVar33 = func_883(BUILTIN::TO_FLOAT(Var26.f_3), Var26.f_4);
				func_884(iParam0, 19, fVar33, 0);
				break;
			case -778289619:
				fVar33 = func_883(BUILTIN::TO_FLOAT(Var26.f_3), Var26.f_4);
				func_884(iParam0, 0, fVar33, 0);
				break;
			case -1946606248:
				func_885(iParam0, Var26.f_5);
				break;
			case 855745648:
				iVar39 = func_492(iParam0, 1);
				fVar40 = Var26.f_5;
				func_493(iParam0, 1, (iVar39 + BUILTIN::CEIL(fVar40)));
				break;
			case 1365603835:
				fVar33 = func_883(BUILTIN::TO_FLOAT(Var26.f_3), Var26.f_4);
				func_884(iParam0, 18, fVar33, 0);
				break;
			case 1497139093:
				fVar33 = func_883(BUILTIN::TO_FLOAT(Var26.f_3), Var26.f_4);
				func_884(iParam0, 1, fVar33, 0);
				break;
		}
		iVar34++;
	}
}

int func_792(int iParam0)
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

int func_793(int iParam0)
{
	return 20;
}

void func_794(var uParam0, int iParam1, float fParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return;
	}
	fParam5 = func_847(fParam5, 0f, 1E+09f);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (INVENTORY::_0x4C543D5DFCD2DAFD(Global_17172.f_54.f_61.f_41[iVar0 /*54*/], &uParam0))
		{
			((Global_17172.f_54.f_61.f_41[iVar0 /*54*/])->f_38[iParam4 /*4*/])->f_2 = fParam5;
			return;
		}
		iVar0++;
	}
	if (!func_630(&uParam0))
	{
		return;
	}
	((Global_17172.f_54.f_61.f_41[iVar0 /*54*/])->f_38[iParam4 /*4*/])->f_2 = fParam5;
}

void func_795(int iParam0, var uParam1, int iParam2, float fParam3)
{
	float fVar0;
	bool bVar1;

	if (func_332(iParam0) >= 4)
	{
		return;
	}
	if (func_886(uParam1, iParam2))
	{
		return;
	}
	if (func_887(iParam0, iParam2))
	{
		return;
	}
	if (fParam3 <= 0f)
	{
		bVar1 = func_888(uParam1, iParam2) == 0f;
		fVar0 = func_889(iParam2, bVar1);
	}
	else
	{
		fVar0 = fParam3;
	}
	if (fVar0 == 0f)
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			if (func_637(iParam0, 0))
			{
				fVar0 = (fVar0 * 0.5f);
			}
			Global_1270530->f_1467.f_14 = (Global_1270530->f_1467.f_14 + fVar0);
			break;
		case 1:
		case 2:
			Global_1270530->f_1467.f_14 = (Global_1270530->f_1467.f_14 + fVar0);
			break;
		case 3:
			Global_1270530->f_1467.f_16 = (Global_1270530->f_1467.f_16 + fVar0);
			break;
		default:
			func_890(iParam2, fVar0);
			break;
	}
	func_891(iParam0, fVar0);
	func_892(uParam1, iParam2, fVar0);
	Global_1270530->f_1467.f_2 = (Global_1270530->f_1467.f_2 + fVar0);
}

void func_796(int iParam0, bool bParam1, bool bParam2)
{
	struct<7> Var0;
	var uVar7;
	int iVar8;

	if (func_2() != 0)
	{
		return;
	}
	if (func_893())
	{
		return;
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (!bParam1)
	{
		if (!&Global_1132968->f_4641.f_2[func_894(iParam0, 1) /*4*/])
		{
			return;
		}
	}
	(Global_1132968->f_4641.f_2[func_894(iParam0, 1) /*4*/])->f_2++;
	if (!bParam2)
	{
		return;
	}
	if (Global_1275573->f_16 != &Global_1275573)
	{
		return;
	}
	Var0.f_5 = -1;
	Var0.f_4 = 0;
	Var0.f_5 = iParam0;
	Var0.f_6 = bParam1;
	iVar8 = 0;
	iVar8 = 0;
	while (iVar8 < 32)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1275573->f_154[iVar8])))
		{
		}
		else if (!GANG::_0x9BE7DCB22D32CCBE(Global_1275573->f_15, &(Global_1275573->f_154[iVar8])))
		{
		}
		else if (&Global_1275573->f_154[iVar8] == Global_1275573->f_10)
		{
		}
		else
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar7, &(Global_1275573->f_154[iVar8]));
		}
		iVar8++;
	}
	func_895(&Var0, uVar7);
}

void func_797(int iParam0)
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
	func_896(iParam0, 0f, 0);
	if (!bVar0)
	{
		PED::_0x2EB75FB86C41F026(iParam0, 3, 0);
	}
}

void func_798(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	struct<6> Var24;
	var uVar31;
	float fVar32;
	int iVar33;
	int iVar34;
	float fVar35;
	var uVar36;
	int iVar37;
	int iVar38;
	float fVar39;
	float fVar40;

	if (!func_362(iParam1))
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
	if (func_319(iParam0))
	{
		iVar1 = func_334(iParam0);
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
					uVar36 = func_802(iParam0);
					iVar37 = func_793(uVar36);
					func_705(iVar1, 1, BUILTIN::TO_FLOAT(iVar37));
				}
				if (bVar0)
				{
					iVar38 = func_402(iVar1, 1);
				}
				else
				{
					iVar38 = func_287(iParam0, 1);
				}
				if (iVar38 < 50)
				{
					if (bVar0)
					{
						func_897(iVar1, 2, iVar34);
					}
					else
					{
						func_383(iParam0, 2, iVar34);
					}
				}
				if (bVar0)
				{
					func_897(iVar1, 1, BUILTIN::FLOOR(fVar35));
				}
				else
				{
					func_383(iParam0, 1, BUILTIN::FLOOR(fVar35));
				}
				break;
			case 978049229:
				func_882(iParam0, Var24.f_5);
				break;
			case -1918697215:
				if (func_490(0, &uVar31))
				{
					fVar39 = Var24.f_5;
					if (bVar0)
					{
						func_898(iVar1, 0, BUILTIN::FLOOR(fVar39));
					}
					else
					{
						func_899(iParam0, 0, BUILTIN::FLOOR(fVar39));
					}
				}
				break;
			case 1136630075:
				if (func_900(0, &uVar31))
				{
					fVar32 = func_883(BUILTIN::TO_FLOAT(Var24.f_3), Var24.f_4);
					func_901(iParam0, 0, fVar32);
				}
				break;
			case -778289619:
				if (func_490(0, &uVar31))
				{
					fVar32 = func_883(BUILTIN::TO_FLOAT(Var24.f_3), Var24.f_4);
					func_902(iParam0, 0, fVar32);
				}
				break;
			case -1946606248:
				func_885(iParam0, Var24.f_5);
				break;
			case 855745648:
				if (func_490(1, &uVar31))
				{
					fVar40 = Var24.f_5;
					if (bVar0)
					{
						func_898(iVar1, 1, BUILTIN::FLOOR(fVar40));
					}
					else
					{
						func_899(iParam0, 1, BUILTIN::FLOOR(fVar40));
					}
				}
				break;
			case 1365603835:
				if (func_900(1, &uVar31))
				{
					fVar32 = func_883(BUILTIN::TO_FLOAT(Var24.f_3), Var24.f_4);
					func_901(iParam0, 1, fVar32);
				}
				break;
			case 1497139093:
				if (func_490(1, &uVar31))
				{
					fVar32 = func_883(BUILTIN::TO_FLOAT(Var24.f_3), Var24.f_4);
					func_902(iParam0, 1, fVar32);
				}
				break;
		}
		iVar33++;
	}
	func_903(iParam1);
	ATTRIBUTE::_0xD962F8579D702DB5();
}

int func_799(int iParam0)
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

int func_800(int iParam0)
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

int func_801(int iParam0)
{
	return 20;
}

int func_802(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, func_821());
	return iVar0;
}

int func_803(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	iVar0 = func_514(bParam2);
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam0, uParam1, 29, 1))
	{
		return 0;
	}
	return 1;
}

bool func_804(var uParam0, int iParam1)
{
	return func_904(*uParam0, iParam1);
}

int func_805(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!&Global_1048577)
	{
		return 3;
	}
	iVar0 = ((*Global_262996)[iParam0 /*70*/])->f_1.f_21.f_2;
	iVar1 = func_905(iVar0);
	uVar2 = func_906(iVar0, iVar1);
	return uVar2;
}

struct<2> func_806()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

int func_807(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265331->f_124445.f_134 & 8 != 0)
	{
		Global_1070356->f_26837 = 1;
		return 1;
	}
	if (func_214(*Global_1051163) && !func_907(*Global_1051163, Param0))
	{
		Global_1070356->f_26837 = 2;
		return 1;
	}
	if (iParam2 != 0 && func_908(iParam2))
	{
		return 1;
	}
	if (iParam3 != 0 && func_909(iParam3, 255))
	{
		Global_1070356->f_26837 = 4;
		return 1;
	}
	if (Global_262996[&Global_1275573 /*70*/] > 2)
	{
		Global_1070356->f_26837 = 5;
		return 1;
	}
	if (&Global_262155 >= 1)
	{
		Global_1070356->f_26837 = 6;
		return 1;
	}
	if (func_910())
	{
		Global_1070356->f_26837 = 7;
		return 1;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_214(*Global_1051163))
		{
			Global_1070356->f_26837 = 8;
			return 1;
		}
	}
	if (Global_265331->f_124602 != 0 && SCRIPTS::_DOES_THREAD_EXIST(Global_265331->f_124602))
	{
		Global_1070356->f_26837 = 9;
		return 1;
	}
	Global_1070356->f_26837 = 0;
	return 0;
}

bool func_808(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 - iVar0 * 32);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_809(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_514(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_810(var uParam0, var uParam1)
{
	*uParam0 = { *uParam1 };
	uParam0->f_4 = uParam1->f_4;
	uParam0->f_5 = { uParam1->f_5 };
	uParam0->f_9 = uParam1->f_9;
	uParam0->f_11 = uParam1->f_14;
	if (!STREAMING::IS_MODEL_VALID(uParam0->f_11))
	{
		return 0;
	}
	uParam0->f_22 = func_749(uParam0->f_11);
	if (uParam0->f_22 == 0)
	{
		return 0;
	}
	uParam0->f_12 = { uParam1->f_16 };
	uParam0->f_27 = uParam1->f_25;
	uParam0->f_20 = uParam1->f_24;
	uParam0->f_10 = 0;
	return 1;
}

int func_811(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	iVar0 = func_514(bParam2);
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam0, uParam1, 24, 1))
	{
		return 0;
	}
	return 1;
}

int func_812(var uParam0, var uParam1)
{
	*uParam0 = { *uParam1 };
	uParam0->f_4 = uParam1->f_4;
	uParam0->f_5 = { uParam1->f_5 };
	uParam0->f_9 = uParam1->f_9;
	uParam0->f_11 = uParam1->f_14;
	if (!STREAMING::IS_MODEL_VALID(uParam0->f_11))
	{
		return 0;
	}
	uParam0->f_22 = 0;
	uParam0->f_12 = { uParam1->f_15 };
	uParam0->f_20 = uParam1->f_23;
	uParam0->f_10 = 2;
	return 1;
}

int func_813(int iParam0)
{
	var uVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	func_911();
	Global_1903929->f_124.f_2 = 834733495;
	Global_1903929->f_124.f_3 = func_912(iParam0);
	if (!DATAFILE::_DATAFILE_GET_BOOL(&uVar0, &(Global_1903929->f_124)))
	{
		return 0;
	}
	return uVar0;
}

void func_814(var uParam0, int iParam1)
{
	func_913(&(uParam0->f_20), iParam1);
}

int func_815(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -742846258;
		case 2:
			return 131724934;
		case 3:
			return 325433051;
		case 4:
			return -1943296527;
		case 5:
			return 1586684911;
		case 6:
			return -1171161482;
		case 7:
			return 1038672528;
		case 8:
			return -1073329868;
		case 9:
			return 1263489075;
		case 10:
			return 966390205;
		case 11:
			return -2046198715;
		case 12:
			return 13;
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

void func_816(var uParam0)
{
	int iVar0;

	*uParam0 = { func_515() };
	iVar0 = 0;
	while (iVar0 < 24)
	{
		uParam0->f_4[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_29[iVar0 /*4*/] = 100;
		(uParam0->f_29[iVar0 /*4*/])->f_1 = 0f;
		(uParam0->f_29[iVar0 /*4*/])->f_2 = 0f;
		(uParam0->f_29[iVar0 /*4*/])->f_3 = 0;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		switch (iVar0)
		{
			case 0:
				uParam0->f_38[iVar0 /*4*/] = 100;
				break;
			case 1:
				uParam0->f_38[iVar0 /*4*/] = 0;
				break;
			case 2:
				uParam0->f_38[iVar0 /*4*/] = 50;
				break;
		}
		(uParam0->f_38[iVar0 /*4*/])->f_1 = 0f;
		(uParam0->f_38[iVar0 /*4*/])->f_2 = 0f;
		(uParam0->f_38[iVar0 /*4*/])->f_3 = 0;
		iVar0++;
	}
	uParam0->f_51 = { 0f, 0f, 0f };
}

void func_817(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (INVENTORY::_0x4C543D5DFCD2DAFD(Global_17172.f_54.f_61.f_41[iVar0 /*54*/], &uParam0))
		{
			(Global_17172.f_54.f_61.f_41[iVar0 /*54*/])->f_38[iParam4 /*4*/] = iParam5;
			return;
		}
		iVar0++;
	}
	if (!func_630(&uParam0))
	{
		return;
	}
	(Global_17172.f_54.f_61.f_41[iVar0 /*54*/])->f_38[iParam4 /*4*/] = iParam5;
}

void func_818(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

float func_819(int iParam0)
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
	}
	return 1E+09f;
}

void func_820(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_159(iParam0);
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
	func_647(sVar2, MISC::_CREATE_VAR_STRING(2, "HORSE_BONDING_LEVEL", iParam1), 908516622, -961843223, 8000, "HUD_Toast_Soundset", "horse_bonding", 0, 0, 1, 1);
}

int func_821()
{
	return 0;
}

void func_822(int iParam0, char* sParam1)
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
	sVar4 = func_915(func_914(sParam1));
	iVar5 = MISC::GET_HASH_KEY(sVar4);
	sVar6 = "";
	sVar7 = "HUD_Toast_Soundset";
	func_647(MISC::_CREATE_VAR_STRING(10, sVar0, sVar1), sVar2, iVar3, iVar5, 8000, sVar7, sVar6, 0, 0, 1, 1);
}

int func_823(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, func_824());
	return iVar0;
}

int func_824()
{
	return 1;
}

void func_825(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_916(&Global_0, 8);
	}
	if (!func_299() || func_2() != -1)
	{
		return;
	}
	func_916(&Global_0, 1);
}

int func_826(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	if (!func_264(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_516(iParam0, joaat("default"));
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_600(iParam0, 0, 0) };
	if (func_517(iParam0, &Var1, iParam1, 0, 0, -1, 0))
	{
		return 0;
	}
	if (!func_518(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_514(0), &uVar6, &Var1, iParam0, Var1.f_4, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

int func_827(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_514(bParam7);
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

int func_828(var uParam0, var uParam1)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_514(0), uParam0, uParam1, 29, 1))
	{
		return 0;
	}
	return 1;
}

int func_829(int iParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_830(int iParam0, struct<16> Param1)
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

int func_831(int iParam0, int iParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if (!func_713(iParam0, 2))
	{
		return 0;
	}
	if ((bParam2 && func_2() == 0) && !UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
	{
		return 1;
	}
	if (!func_917(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

int func_832(int iParam0)
{
	if (func_373(iParam0, 75135761))
	{
		return 1;
	}
	return 0;
}

int func_833(int iParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_264(iParam0, 0))
	{
		return func_918(func_589(iParam0), bParam1);
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

int func_834(var uParam0, int iParam1)
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
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_BUY_AWARD_ACQUIRE_COSTS(uParam0, &Var0, &iVar471, 10) || iVar471 == 0)
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

int func_835(int iParam0, int iParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return 0;
	}
	if (!func_264(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		return 0;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
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

bool func_836(int iParam0, int iParam1)
{
	if (!func_446(iParam0))
	{
		return false;
	}
	return (Global_1915180->f_17437[iParam0] && iParam1) != 0;
}

bool func_837(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_838(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		return (Global_7887[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1070356->f_17941[iParam0 /*11*/] && iParam1) != 0;
}

int func_839(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<12> Var0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_829(iParam1))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_919(iParam0, *uParam2, &Var0, 0))
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

bool func_840(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_841(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1391860027;
		case 3:
			return -2049683567;
		case 4:
			return -1639750081;
		case 33:
			return -395929392;
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
		case 22:
			return -1433937760;
		case 23:
			return -681691620;
		case 24:
			return -706234936;
		case 25:
			return -282099500;
		case 26:
			return 1450105278;
		case 5:
			return 379756162;
		case 12:
			return 2128397741;
		case 14:
			return -924263120;
		case 30:
			return 1915478031;
		case 31:
			return -1816941102;
		case 32:
			return 1350021532;
		case 15:
			return 1442571063;
		case 16:
			return -997221403;
		case 17:
			return 1489861748;
		case 27:
			return -2132712788;
		case 28:
			return -995716959;
		case 29:
			return 1414815075;
		case 34:
			return 1427539511;
		case 19:
			return -967055532;
		case 20:
			return 662159626;
		case 21:
			return 1743191502;
		case 18:
			return -830712656;
		case 35:
			return 1570650502;
		case 36:
			return -1980461700;
		case 38:
			return -486915945;
		case 37:
			return -1023568458;
		default:
			break;
	}
	return 0;
}

int func_842()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return 1;
	}
	return 0;
}

int func_843(int iParam0)
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
	iVar0 = func_689(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_688(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_687(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_685(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_684(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_686(iParam0);
	if (iVar5 < 1 || iVar5 > func_690(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_844(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_845()
{
	return Global_1099294->f_339;
}

void func_846(int iParam0, int iParam1)
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
	if (!func_490(iParam1, &iVar0))
	{
		return;
	}
	sVar1 = func_920(iParam1);
	uVar2 = func_921(iParam1);
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

float func_847(float fParam0, float fParam1, float fParam2)
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

var func_848(int iParam0)
{
	var uVar0;

	uVar0 = &Global_1903007->f_379.f_10[iParam0];
	return uVar0;
}

bool func_849(int iParam0)
{
	return func_373(iParam0, 1279601681);
}

int func_850(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_514(0);
	*uParam1 = { func_263(iParam0, func_715(0), iParam3, 0) };
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

bool func_851()
{
	return (func_922(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0, 0, 0) > 0 && func_733(func_263(889965687 /* GXTEntry: "Wardrobe" */, func_262(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_852(int iParam0, var uParam1)
{
	var uVar0;

	uVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, uParam1);
	if (iParam0 == joaat("use"))
	{
		if (func_904(uVar0, 2048))
		{
			return 0;
		}
	}
	else if (func_904(uVar0, 8))
	{
		return 0;
	}
	else if (func_904(uVar0, 16))
	{
		return 0;
	}
	else if (func_904(uVar0, 65536))
	{
		return 0;
	}
	return 1;
}

int func_853(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_923(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_923(iParam1, 2, 0, 0);
	return -1;
}

int func_854(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_923(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

int func_855(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_264(iParam1, 0))
	{
		return 0;
	}
	Var0 = { func_474(iParam0) };
	Var5 = { func_475(iParam0, iParam1, Var0, Var0.f_4) };
	if (INVENTORY::_0xCB5D11F9508A928D(iParam0, &Var5, &Var0, iParam1, Var0.f_4, iParam2, 752097756))
	{
		return 1;
	}
	return 0;
}

void func_856(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (bParam5)
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
			func_924(iParam0, 0, 1);
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
			func_291(iParam0, 0);
			bVar0 = true;
		}
		func_283(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, 0, 1, 1, 1, 0);
	}
}

int func_857(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_925(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_858(int iParam0)
{
	int iVar0;

	if (!func_264(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_765(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

int func_859(vector3 vParam0)
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

void func_860(var uParam0, int iParam1, vector3 vParam2, int iParam5, float fParam6, int iParam7, float fParam8, float fParam9, float fParam10)
{
	int iVar0;
	int iVar1;

	if (!func_193(vParam2))
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
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
			break;
		case 48:
			TASK::_0x827A58CED9D4D5B4(*uParam0, fParam6);
			break;
		case 42:
			TASK::_0xB8E3486D107F4194(*uParam0, fParam10);
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
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
			TASK::_0xE9225354FB7437A7(*uParam0, 1);
			break;
	}
	switch (iParam5)
	{
		case 12:
		case 13:
			TASK::_0xFF8AFCA532B500D4(*uParam0, 8192);
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
				TASK::_0x954451EA2D2120FB(*uParam0, func_926(10f, 40f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_926(30f, 60f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 10f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 37:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_926(40f, 80f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_926(50f, 90f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 10f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 15f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 38:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_926(30f, 60f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_926(50f, 80f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 15f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 39:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_926(0f, 10f, 1f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_926(5f, 15f, 1f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 3f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 3f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 40:
				TASK::_0x2EB977293923C723(*uParam0, 40f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_926(60f, 120f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_926(100f, 130f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 20f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 20f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 41:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_926(10f, 35f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_926(25f, 50f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 2f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 20f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 44:
			case 45:
				TASK::_0x2EB977293923C723(*uParam0, 60f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_926(60f, 80f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_926(75f, 95f, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 50:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_926(30f, 70f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_926(65f, 95f, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 25f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 42:
				TASK::_0x2EB977293923C723(*uParam0, 50f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_926(50f, 70f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_926(65f, 85f, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 49:
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x2EB977293923C723(*uParam0, 50f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_926(10f, 50f, 10f, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 43:
				TASK::_0x2EB977293923C723(*uParam0, func_926(95f, 90f, 80f, iParam1));
				TASK::_0x954451EA2D2120FB(*uParam0, func_926(95f, 90f, 80f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_926(125f, 115f, 100f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 46:
				iVar0 = func_927(vParam2, 1);
				iVar1 = func_928(vParam2);
				if ((((iVar1 == 15 || iVar1 == 14) || iVar1 == 13) || (iVar1 == 9 && iVar0 == -1)) || (iVar1 == 4 && iVar0 == -1))
				{
					TASK::_0x2EB977293923C723(*uParam0, func_926(100f, 80f, -5f, iParam1));
					TASK::_0x954451EA2D2120FB(*uParam0, func_926(100f, 80f, -5f, iParam1));
					TASK::_0x0F4F6C4CE471259D(*uParam0, func_926(110f, 160f, 12.5f, iParam1));
				}
				else
				{
					TASK::_0x2EB977293923C723(*uParam0, func_926(100f, 70f, -7.5f, iParam1));
					TASK::_0x954451EA2D2120FB(*uParam0, 70f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, func_926(80f, 150f, 17.5f, iParam1));
				}
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				if (iParam1 <= 2)
				{
					TASK::_0x19BC99C678FBA139(*uParam0, 2, 0);
					TASK::_0x764DB5A48390FBAD(*uParam0, 1);
				}
				break;
			case 47:
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x2EB977293923C723(*uParam0, 50f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_926(50f, 90f, 10f, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				if (iParam1 <= 2)
				{
					TASK::_0x764DB5A48390FBAD(*uParam0, 1);
				}
				break;
			case 48:
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x2EB977293923C723(*uParam0, func_926(100f, 70f, -7.5f, iParam1));
				TASK::_0x954451EA2D2120FB(*uParam0, 70f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_926(150f, 190f, 10f, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				if (iParam1 <= 2)
				{
					TASK::_0x764DB5A48390FBAD(*uParam0, 1);
				}
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

void func_861(var uParam0, int iParam1, vector3 vParam2)
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
		case 51:
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
		case 44:
		case 49:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
		case 50:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
		case 46:
		case 47:
		case 48:
			if (func_927(vParam2, 1) == 5)
			{
				TASK::_0x5D9B0BAAF04CF65B(*uParam0, 53, 1, 0);
				TASK::_0x5D9B0BAAF04CF65B(*uParam0, 74, 1, 0);
			}
			else
			{
				TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			}
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
		case 43:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 5, 0);
			break;
	}
}

Vector3 func_862(vector3 vParam0)
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

bool func_863(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_864(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10, bool bParam11)
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
	if (!func_520(Param0, &Var0, 1, 0, -1))
	{
		return -1;
	}
	if (func_865(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return -1;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(Var0.f_4, iParam8))
	{
		return -1;
	}
	iVar14 = func_265(Var0.f_4, Param4, iParam8, 1, 1, 0);
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
	Var16 = { func_726(&Var0, 0) };
	Var16.f_4 = { Param4 };
	Var16.f_11 = iParam8;
	Var16.f_10 = bParam10;
	iVar32 = func_727(1168099063, &Var16, bParam9);
	if (iVar32 == -1)
	{
		return -1;
	}
	return iVar32;
}

int func_865(var uParam0, bool bParam1)
{
	if (((*uParam0 == *bParam1 && uParam0->f_1 == bParam1->f_1) && uParam0->f_2 == bParam1->f_2) && uParam0->f_3 == bParam1->f_3)
	{
		return 1;
	}
	return 0;
}

int func_866(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
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
	if (func_865(&Param0, &Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_520(Param0, &Var0, 1, 0, -1) || !func_520(Param4, &Var14, 1, 0, -1))
	{
		return -1;
	}
	if (func_865(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return -1;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(Var0.f_4, Var14.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(Var14.f_4, Var0.f_9))
	{
		return -1;
	}
	Var28 = { func_726(&Var0, 0) };
	Var28.f_4 = { Var14.f_5 };
	Var28.f_11 = Var14.f_9;
	Var28.f_10 = (Var14.f_10 || iParam8);
	Var44 = { func_726(&Var14, 0) };
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
					func_923(iVar60, 1, 0, 0);
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
		iVar60 = func_727(1168099063, &Var28, 0);
		iVar60 = func_727(1168099063, &Var44, 0);
	}
	return iVar60;
}

int func_867(int iParam0)
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

int func_868(int iParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;
	int iVar43;

	iVar41 = 0;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(iParam0, &Var0, &iVar42, 20))
	{
		iVar43 = 0;
		while (iVar43 < iVar42)
		{
			if ((Var0[iVar43 /*2*/])->f_1 == iParam1)
			{
				iVar41 = &Var0[iVar43 /*2*/];
				return iVar41;
			}
			iVar43++;
		}
	}
	return 0;
}

char* func_869(int iParam0)
{
	int iVar0;

	if (!func_264(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_768(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

int func_870(int iParam0)
{
	if (func_765(iParam0) == -126813555 || func_765(iParam0) == 1946043663)
	{
		return 1;
	}
	return 0;
}

char* func_871(int iParam0)
{
	int iVar0;

	if (!func_264(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_770(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

bool func_872(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

int func_873(int iParam0)
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

int func_874(var uParam0, int iParam1)
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

int func_875(int iParam0)
{
	int iVar0;

	iVar0 = func_765(iParam0);
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

int func_876(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	var uVar0;

	*iParam1 = 0;
	if (iParam4 < 1)
	{
		return 0;
	}
	if (iParam3 == 0)
	{
		iParam3 = func_516(iParam2, joaat("default"));
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
	if (!func_929(uParam0, iParam1, &uVar0, iParam4, bParam5))
	{
		return 0;
	}
	return 1;
}

struct<16> func_877(int iParam0, var uParam1)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_263(iParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = iParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

int func_878(int iParam0, int iParam1, int iParam2)
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

int func_879(int iParam0)
{
	return PLAYER::_0xF49F14462F0AE27C(PLAYER::GET_PLAYER_INDEX());
}

int func_880(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = func_596(iParam1, bParam2, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = (iVar0 + func_473(INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iParam0), iParam1));
	}
	if (bParam3)
	{
		iVar0 = (iVar0 + func_930(iParam1, bParam4));
	}
	return iVar0;
}

void func_881()
{
	if (!func_264(Global_1939231->f_10478, 0))
	{
		Global_1939231->f_6 = 0;
	}
	else if ((((func_931(Global_1939231->f_10478, 1224357681) != 0 && Global_1939231->f_10477 != 0) && Global_1939231->f_10477 != -2074770370) && !Global_1915180->f_20136) && !Global_1915180->f_21989.f_1)
	{
		Global_1939231->f_6 = 1;
	}
	else
	{
		Global_1939231->f_6 = 0;
	}
}

void func_882(int iParam0, float fParam1)
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

float func_883(float fParam0, int iParam1)
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

int func_884(int iParam0, int iParam1, float fParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iParam0 = Global_1275573->f_9;
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			return 0;
		}
	}
	return func_932(iParam0, iParam1, fParam2, iParam3);
}

void func_885(int iParam0, float fParam1)
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

int func_886(var uParam0, int iParam1)
{
	float fVar0;

	fVar0 = func_933(iParam1);
	if (fVar0 == 1E+09f)
	{
		return 0;
	}
	if (func_888(uParam0, iParam1) >= fVar0)
	{
		return 1;
	}
	return 0;
}

int func_887(int iParam0, int iParam1)
{
	if (iParam1 == 23)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			return 0;
		default:
			break;
	}
	if (func_144(iParam0) < 0.1f)
	{
		return 0;
	}
	return 1;
}

float func_888(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (INVENTORY::_0x4C543D5DFCD2DAFD(Global_17172.f_54.f_61.f_41[iVar0 /*54*/], uParam0))
		{
			return &((Global_17172.f_54.f_61.f_41[iVar0 /*54*/])->f_4[iParam1]);
		}
		iVar0++;
	}
	if (!func_630(uParam0))
	{
		return 0f;
	}
	return 0f;
}

float func_889(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_934(iParam0);
	}
	return func_935(iParam0);
}

void func_890(int iParam0, float fParam1)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	sVar0 = "";
	iVar1 = 0;
	iVar2 = joaat("COLOR_PURE_WHITE");
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			break;
		case 3:
			sVar0 = "HORSE_XP_LEADING";
			break;
		case 10:
		case 11:
			sVar0 = "HORSE_XP_HITCH";
			break;
		case 4:
			sVar0 = "HORSE_XP_EQUIP_SADDLE";
			break;
		case 5:
			sVar0 = "HORSE_XP_BREAK_HORSE";
			break;
		case 6:
		case 7:
			sVar0 = "HORSE_XP_PATTED";
			break;
		case 12:
		case 13:
		case 14:
			sVar0 = "HORSE_XP_FED";
			break;
		case 15:
			sVar0 = "HORSE_XP_TREAT";
			break;
		case 16:
		case 17:
		case 18:
			sVar0 = "HORSE_XP_GROOM";
			break;
		case 19:
			sVar0 = "HORSE_XP_OINTMENT";
			break;
		case 8:
		case 9:
			sVar0 = "HORSE_XP_CALM";
			break;
		case 20:
		case 21:
			sVar0 = "HORSE_XP_LIGHT_LOAD";
			break;
		case 22:
			sVar0 = "HORSE_XP_KILLED_OWN_HORSE";
			iVar1 = 1;
			iVar2 = joaat("COLOR_RED");
			break;
	}
	bVar3 = false;
	if (bVar3)
	{
		sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, BUILTIN::FLOOR(fParam1));
	}
	else
	{
		sVar0 = MISC::_CREATE_VAR_STRING(2, "HORSE_XP_GENERIC_EARNED");
	}
	func_632(sVar0, "ITEMTYPE_TEXTURES", 48560695, iVar1, iVar2, 0, 0, 0, 1);
}

void func_891(int iParam0, float fParam1)
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
	iVar0 = func_332(iParam0);
	if (iVar0 >= 4)
	{
		return;
	}
	func_936(iParam0, BUILTIN::FLOOR(fParam1));
	iVar1 = func_332(iParam0);
	if (iVar1 > iVar0)
	{
		iVar2 = (iVar1 - iVar0);
		func_703(func_702(352983236), iVar2);
		PED::_0xA69899995997A63B(iParam0, iVar1);
		if (iVar1 >= 4)
		{
			func_703(func_702(-2116919750), 1);
		}
		if (iVar1 == 2)
		{
			func_229(21, 1);
		}
		else if (iVar1 == 3)
		{
			func_229(22, 1);
		}
		else if (iVar1 == 4)
		{
			func_229(23, 1);
		}
		func_937(iVar1, iParam0);
		func_938();
	}
}

void func_892(var uParam0, int iParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (INVENTORY::_0x4C543D5DFCD2DAFD(Global_17172.f_54.f_61.f_41[iVar0 /*54*/], uParam0))
		{
			(Global_17172.f_54.f_61.f_41[iVar0 /*54*/])->f_4[iParam1] = (&(Global_17172.f_54.f_61.f_41[iVar0 /*54*/])->f_4[iParam1] + fParam2);
			return;
		}
		iVar0++;
	}
	if (!func_630(uParam0))
	{
		return;
	}
	(Global_17172.f_54.f_61.f_41[iVar0 /*54*/])->f_4[iParam1] = (&(Global_17172.f_54.f_61.f_41[iVar0 /*54*/])->f_4[iParam1] + fParam2);
}

int func_893()
{
	if (func_2() != 0)
	{
		return 1;
	}
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1461907237))
	{
		return 1;
	}
	if (Global_1132968->f_4641.f_1 & 2 != 0)
	{
		return 1;
	}
	if (Global_1132968->f_4641.f_1 & 4 != 0)
	{
		return 1;
	}
	if (!NETWORK::HAS_NETWORK_TIME_STARTED())
	{
		return 1;
	}
	return 0;
}

int func_894(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2076515520:
			return 93;
		case -2062348046:
			return 96;
		case -1983943039:
			return 61;
		case -1967078622:
			return 4;
		case -1935655667:
			return 39;
		case -1930919582:
			return 56;
		case -1930399868:
			return 63;
		case -1924130593:
			return 97;
		case -1898294040:
			return 50;
		case -1854780893:
			return 5;
		case -1783181138:
			return 13;
		case -1777144780:
			return 87;
		case -1679013564:
			return 16;
		case -1648877470:
			return 43;
		case -1634863390:
			return 10;
		case -1598949067:
			return 45;
		case -1575244427:
			return 62;
		case -1494363065:
			return 1;
		case -1408563730:
			return 30;
		case -1399051227:
			return 53;
		case -1393798041:
			return 58;
		case -1376314322:
			return 49;
		case -1330378740:
			return 90;
		case -1315007749:
			return 21;
		case -1296513906:
			return 11;
		case -1258163578:
			return 48;
		case -1215742816:
			return 37;
		case -1152882498:
			return 18;
		case -1098645728:
			return 88;
		case -1034424695:
			return 32;
		case -1030655937:
			return 12;
		case -985005225:
			return 57;
		case -892848695:
			return 69;
		case -789758703:
			return 34;
		case -757633599:
			return 31;
		case -706075066:
			return 17;
		case -682435976:
			return 77;
		case -634665876:
			return 15;
		case -545299531:
			return 44;
		case -514316475:
			return 2;
		case -479797100:
			return 98;
		case -469672732:
			return 65;
		case -379874384:
			return 74;
		case -355092128:
			return 70;
		case -326224139:
			return 95;
		case -210274020:
			return 35;
		case -162385832:
			return 68;
		case -114666387:
			return 51;
		case -86995487:
			return 20;
		case -79139194:
			return 72;
		case -71551190:
			return 91;
		case -32613857:
			return 81;
		case -1:
			return 0;
		case 5611246:
			return 82;
		case 81846499:
			return 23;
		case 120448958:
			return 27;
		case 151445061:
			return 60;
		case 242857368:
			return 42;
		case 300196727:
			return 41;
		case 334700325:
			return 52;
		case 353568324:
			return 64;
		case 385589027:
			return 24;
		case 396837320:
			return 29;
		case 440583097:
			return 47;
		case 449057693:
			return 22;
		case 457103096:
			return 55;
		case 477974086:
			return 6;
		case 478308321:
			return 46;
		case 499656970:
			return 8;
		case 618068466:
			return 7;
		case 630308764:
			return 84;
		case 633501950:
			return 36;
		case 640330073:
			return 89;
		case 905156700:
			return 59;
		case 941437279:
			return 67;
		case 946732137:
			return 71;
		case 1232224440:
			return 78;
		case 1248971179:
			return 92;
		case 1250422342:
			return 14;
		case 1257949393:
			return 3;
		case 1316486837:
			return 26;
		case 1345888212:
			return 28;
		case 1382158532:
			return 73;
		case 1398164246:
			return 85;
		case 1427070667:
			return 76;
		case 1571096148:
			return 54;
		case 1717813521:
			return 66;
		case 1791948823:
			return 9;
		case 1841970554:
			return 33;
		case 1872332830:
			return 94;
		case 1889309476:
			return 79;
		case 1898201469:
			return 40;
		case 1918774327:
			return 80;
		case 1951290581:
			return 25;
		case 1971904853:
			return 38;
		case 2002140369:
			return 86;
		case 2018657739:
			return 75;
		case 2078792148:
			return 83;
		case 2108116481:
			return 19;
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

void func_895(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 181;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 7, 7, &uParam1);
}

void func_896(int iParam0, float fParam1, int iParam2)
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

void func_897(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_402(iParam0, iParam1);
	func_704(iParam0, iParam1, (iVar0 + iParam2));
}

void func_898(int iParam0, int iParam1, int iParam2)
{
	func_695(iParam0, iParam1, (func_435(iParam0, iParam1) + iParam2));
}

void func_899(int iParam0, int iParam1, int iParam2)
{
	func_493(iParam0, iParam1, (func_492(iParam0, iParam1) + iParam2));
}

int func_900(int iParam0, var uParam1)
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

void func_901(int iParam0, int iParam1, float fParam2)
{
	int iVar0;

	if (func_900(iParam1, &iVar0))
	{
		ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iParam0, iVar0, fParam2, 0);
	}
}

void func_902(int iParam0, int iParam1, float fParam2)
{
	int iVar0;

	if (func_490(iParam1, &iVar0))
	{
		ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iParam0, iVar0, fParam2, 0);
	}
}

void func_903(int iParam0)
{
	if (func_939(iParam0))
	{
		GRAPHICS::ANIMPOSTFX_PLAY("POSTFX_CONSUMABLE_STAMINA_FORT");
		return;
	}
	if (func_584(iParam0))
	{
		GRAPHICS::ANIMPOSTFX_PLAY("POSTFX_CONSUMABLE_STAMINA");
		return;
	}
}

bool func_904(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_905(int iParam0)
{
	if (iParam0 == 395262693 || iParam0 == -933924539)
	{
		return 482206342;
	}
	return Global_524288->f_39792;
}

int func_906(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case -504335712:
			if (func_940(iParam1))
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 2;
			}
			break;
		case 395262693:
			iVar0 = 2;
			break;
		case -933924539:
			iVar0 = 0;
			break;
		default:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

bool func_907(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_908(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1185962->f_1 && iParam0) != 0;
}

bool func_909(int iParam0, int iParam1)
{
	if (!Global_1070356->f_3)
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
	return (Global_1185577[iParam1 /*12*/] && iParam0) != 0;
}

int func_910()
{
	if (&Global_1048576)
	{
		return 1;
	}
	if (Global_1572887->f_4)
	{
		return 1;
	}
	if (&Global_2883584)
	{
		return 1;
	}
	if (&Global_1048577)
	{
		return 1;
	}
	if (!func_214(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

void func_911()
{
	Global_1903929->f_124 = (Global_1070356->f_26934[48 /*4*/])->f_3;
	Global_1903929->f_124.f_1 = 0;
	Global_1903929->f_124.f_2 = 0;
	Global_1903929->f_124.f_3 = 0;
	Global_1903929->f_124.f_4 = 0;
}

int func_912(int iParam0)
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

void func_913(var uParam0, int iParam1)
{
	if (func_804(uParam0, iParam1))
	{
		return;
	}
	func_941(uParam0, iParam1);
}

struct<4> func_914(int iParam0)
{
	char cVar0[32];

	StringCopy(&cVar0, "TOAST_RPG_LEVEL_", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_", 32);
	StringIntConCat(&cVar0, 0, 32);
	return cVar0;
}

var func_915(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

void func_916(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_917(int iParam0, int iParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return 0;
	}
	if (!func_713(iParam0, 2))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!func_942(iParam0, iParam1, &Var0))
	{
		return 0;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
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

int func_918(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_713(iParam0, 2))
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

int func_919(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam1))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam0, &uParam1, iParam5, !bParam6))
	{
		return 0;
	}
	return 1;
}

char* func_920(int iParam0)
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

char* func_921(int iParam0)
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

int func_922(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_943(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_514(bParam1), iParam0, iParam3);
}

void func_923(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_944(iParam0, iParam1, iParam2, iParam3);
}

void func_924(int iParam0, int iParam1, bool bParam2)
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

int func_925(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_514(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return 0;
	}
	if (!func_728(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return 0;
	}
	return 1;
}

float func_926(float fParam0, float fParam1, float fParam2, int iParam3)
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

int func_927(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_581();
	if (func_837(iVar0))
	{
		if (VOLUME::_0xF256A75210C5C0EB(((*Global_1887327)[iVar0 /*36*/])->f_4, vParam0))
		{
			return iVar0;
		}
	}
	return func_945(vParam0, iParam3);
}

int func_928(vector3 vParam0)
{
	return func_946(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

int func_929(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
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

int func_930(int iParam0, bool bParam1)
{
	if (!bParam1 || func_947())
	{
		return func_265(iParam0, func_262(1), -2015960939, 1, 1, 0);
	}
	return 0;
}

int func_931(int iParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;

	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(iParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if ((Var0[iVar42 /*2*/])->f_1 == iParam1)
			{
				return &(Var0[iVar42 /*2*/]);
			}
			iVar42++;
		}
	}
	return 0;
}

int func_932(int iParam0, int iParam1, float fParam2, int iParam3)
{
	if (iParam0 == Global_1275573->f_8)
	{
		return func_948(iParam1, fParam2, 1, iParam3);
	}
	if (fParam2 == -1f)
	{
		if (func_949(iParam1))
		{
			fParam2 = 30f;
		}
		else
		{
			fParam2 = 30f;
		}
	}
	else if (fParam2 <= 0f)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			func_950(iParam1, iParam0);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iParam0, iParam1, fParam2, iParam3);
			break;
		case 1:
			func_950(iParam1, iParam0);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iParam0, iParam1, fParam2, iParam3);
			break;
		case 19:
			func_950(iParam1, iParam0);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iParam0, iParam1, fParam2, iParam3);
			break;
		case 18:
			func_950(iParam1, iParam0);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iParam0, iParam1, fParam2, iParam3);
			break;
		default:
			return 0;
	}
	return 1;
}

float func_933(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 50f;
		case 5:
			return 25f;
		default:
			break;
	}
	return 1E+09f;
}

float func_934(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return Global_1901929->f_638.f_2;
		case 0:
			return Global_1901929->f_638.f_3;
		case 1:
			return Global_1901929->f_638.f_4;
		case 2:
			return Global_1901929->f_638.f_5;
		case 4:
			return Global_1901929->f_638.f_7;
		case 5:
			return Global_1901929->f_638.f_9;
		case 6:
			return Global_1901929->f_638.f_10;
		case 7:
			return Global_1901929->f_638.f_11;
		case 8:
			return Global_1901929->f_638.f_12;
		case 9:
			return Global_1901929->f_638.f_13;
		case 10:
			return Global_1901929->f_638.f_14;
		case 11:
			return Global_1901929->f_638.f_15;
		case 12:
			return Global_1901929->f_638.f_16;
		case 13:
			return Global_1901929->f_638.f_17;
		case 14:
			return Global_1901929->f_638.f_18;
		case 15:
			return Global_1901929->f_638.f_19;
		case 16:
			return Global_1901929->f_638.f_20;
		case 17:
			return Global_1901929->f_638.f_21;
		case 18:
			return Global_1901929->f_638.f_22;
		case 19:
			return Global_1901929->f_638.f_23;
		case 20:
			return Global_1901929->f_638.f_25;
		case 21:
			return Global_1901929->f_638.f_26;
		case 22:
			return Global_1901929->f_638.f_27;
		default:
			break;
	}
	return 0f;
}

float func_935(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return Global_1901929->f_638.f_2;
		case 0:
			return Global_1901929->f_638.f_3;
		case 1:
			return Global_1901929->f_638.f_4;
		case 2:
			return Global_1901929->f_638.f_5;
		case 4:
			return Global_1901929->f_638.f_6;
		case 5:
			return Global_1901929->f_638.f_8;
		case 6:
			return Global_1901929->f_638.f_10;
		case 7:
			return Global_1901929->f_638.f_11;
		case 8:
			return Global_1901929->f_638.f_12;
		case 9:
			return Global_1901929->f_638.f_13;
		case 10:
			return Global_1901929->f_638.f_14;
		case 11:
			return Global_1901929->f_638.f_15;
		case 12:
			return Global_1901929->f_638.f_16;
		case 13:
			return Global_1901929->f_638.f_17;
		case 14:
			return Global_1901929->f_638.f_18;
		case 15:
			return Global_1901929->f_638.f_19;
		case 16:
			return Global_1901929->f_638.f_20;
		case 17:
			return Global_1901929->f_638.f_21;
		case 18:
			return Global_1901929->f_638.f_22;
		case 19:
			return Global_1901929->f_638.f_23;
		case 20:
			return Global_1901929->f_638.f_25;
		case 21:
			return Global_1901929->f_638.f_26;
		case 22:
			return Global_1901929->f_638.f_27;
		default:
			break;
	}
	return 0f;
}

void func_936(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	ATTRIBUTE::ADD_ATTRIBUTE_POINTS(iParam0, 7, iParam1);
}

void func_937(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
	iVar1 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iParam0 == 1)
	{
		sVar2 = "HORSE_BONDED";
	}
	else if (iParam0 == iVar1)
	{
		sVar2 = "HORSE_BONDING_MAXIMUM";
	}
	else
	{
		sVar2 = "HORSE_BONDING_LEVELUP";
	}
	func_647(sVar2, MISC::_CREATE_VAR_STRING(2, "HORSE_BONDING_LEVEL", iParam0), 908516622, -961843223, 8000, "HUD_Toast_Soundset", "horse_bonding", 0, 0, 1, 1);
}

void func_938()
{
	if (Global_1270530->f_1467.f_4 == 1)
	{
		return;
	}
	Global_1270530->f_1467.f_4 = 1;
}

int func_939(int iParam0)
{
	switch (iParam0)
	{
		case -801397594: /* GXTEntry: "Potent Horse Stimulant" */
		case 747460826: /* GXTEntry: "Special Horse Stimulant" */
			return 1;
	}
	return 0;
}

bool func_940(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

void func_941(var uParam0, int iParam1)
{
	func_951(uParam0, iParam1);
}

int func_942(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = ITEMDATABASE::_0x7A35A72A692BE9DB(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (ITEMDATABASE::_0x3A0B667ABFF87F6E(iParam0, iVar0, uParam2) && *uParam2 == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_943(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

void func_944(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_945(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_952(vParam0);
	iVar1 = -1;
	if (Global_1893558[iVar0] > 0)
	{
		iVar2 = (Global_1893558[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = (*Global_1892741)[iVar0 /*51*/][iVar2];
			if (VOLUME::_DOES_VOLUME_EXIST(((*Global_1887327)[iVar4 /*36*/])->f_4))
			{
				if (VOLUME::_0xF256A75210C5C0EB(((*Global_1887327)[iVar4 /*36*/])->f_4, vParam0))
				{
					switch (((*Global_1887327)[iVar4 /*36*/])->f_21)
					{
						case 5:
							if (!bParam3)
							{
								iVar1 = iVar4;
								bVar3 = true;
							}
							break;
						default:
							iVar1 = iVar4;
							bVar3 = true;
							break;
					}
				}
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (iVar1 != -1)
	{
	}
	return iVar1;
}

int func_946(int iParam0)
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

int func_947()
{
	int iVar0;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::PLAYER_ID()))
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
	if (!func_953(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_948(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	char* sVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_PED_ID();
	if (fParam1 == -1f)
	{
		if (func_949(iParam0))
		{
			fParam1 = 30f;
		}
		else
		{
			fParam1 = 30f;
		}
	}
	else if (fParam1 <= 0f)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (bParam2)
			{
				sVar0 = func_954(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_955(-1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar1, iParam0, fParam1, iParam3);
			Global_17172.f_54.f_2438.f_34[0 /*2*/] = fParam1;
			break;
		case 1:
			if (bParam2)
			{
				sVar0 = func_954(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_956(1775828486);
			func_957(-1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar1, iParam0, fParam1, iParam3);
			Global_17172.f_54.f_2438.f_34[1 /*2*/] = fParam1;
			break;
		case 2:
			if (bParam2)
			{
				sVar0 = func_954(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_958(-1, 0);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar1, iParam0, fParam1, iParam3);
			Global_17172.f_54.f_2438.f_34[2 /*2*/] = fParam1;
			break;
		case 19:
			func_956(350943398);
			func_959(0, 1, 1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar1, iParam0, fParam1, iParam3);
			(Global_17172.f_54.f_2438.f_34[0 /*2*/])->f_1 = fParam1;
			break;
		case 18:
			func_959(1, 1, 1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar1, iParam0, fParam1, iParam3);
			(Global_17172.f_54.f_2438.f_34[1 /*2*/])->f_1 = fParam1;
			break;
		case 20:
			func_959(2, 1, 1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar1, iParam0, fParam1, iParam3);
			(Global_17172.f_54.f_2438.f_34[2 /*2*/])->f_1 = fParam1;
			break;
		default:
			return 0;
	}
	return 1;
}

int func_949(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_950(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			func_960(ENTITY::GET_ENTITY_MAX_HEALTH(iParam1, 0), iParam1);
			break;
		case 1:
			func_961(PED::_GET_PED_MAX_STAMINA(iParam1), iParam1);
			break;
		case 19:
			func_962(iParam1, 0, 100f);
			break;
		case 18:
			func_962(iParam1, 1, 100f);
			break;
	}
}

void func_951(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_952(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_963(vParam0, 0f, 0f, 0, 2);
	return func_963(vParam0, ((*Global_1892728)[iVar0 /*3*/])->f_1, ((*Global_1892728)[iVar0 /*3*/])->f_2, Global_1892728[iVar0 /*3*/], 4);
}

int func_953(int iParam0)
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

char* func_954(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PlayerOverpower";
		case 1:
			return "PlayerOverpower";
		case 2:
			return "PlayerOverpower";
		default:
			break;
	}
	return "";
}

void func_955(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_0x16F2C8C084AB2092(iVar0);
	}
	iVar1 = func_964(2);
	func_965(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_956(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6[20];

	iVar1 = Global_1140484->f_41657.f_1.f_42;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar0 = &Global_1140484->f_41657.f_1[iVar2 /*2*/];
		iVar3 = func_966(iVar0, 1);
		if (&Global_1140484->f_30603.f_847[iVar3 /*12*/] == iParam0)
		{
			func_967(iVar0);
			Global_1140484->f_41657.f_1.f_42 = (Global_1140484->f_41657.f_1.f_42 - 1);
		}
		else
		{
			*(Var6[iVar4 /*2*/]) = { *(Global_1140484->f_41657.f_1[iVar2 /*2*/]) };
			iVar4++;
		}
		iVar2++;
	}
	iVar5 = 0;
	while (iVar5 < iVar4)
	{
		*(Global_1140484->f_41657.f_1[iVar5 /*2*/]) = { *(Var6[iVar5 /*2*/]) };
		iVar5++;
	}
}

void func_957(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_0xFC3B580C4380B5B7(iVar0);
	}
	iVar1 = func_968(2);
	func_969(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_958(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = 10;
	}
	iVar0 = func_970(2);
	func_971(BUILTIN::TO_FLOAT((iParam0 * iVar0)), 0, bParam1);
}

void func_959(int iParam0, bool bParam1, bool bParam2)
{
	func_972(iParam0, 100f, bParam1, bParam2, 1, 2);
}

void func_960(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1275573->f_8;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	ENTITY::_SET_ENTITY_HEALTH(iParam1, iParam0, 0);
}

void func_961(float fParam0, int iParam1)
{
	float fVar0;

	if (fParam0 < 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1275573->f_8;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	fVar0 = (fParam0 - PED::_GET_PED_STAMINA(iParam1));
	PED::_CHARGE_PED_STAMINA(iParam1, fVar0);
}

int func_962(int iParam0, int iParam1, float fParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (fParam2 > 100f)
	{
		fParam2 = 100f;
	}
	else if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iParam0, func_973(iParam1), BUILTIN::CEIL(fParam2));
	return 1;
}

int func_963(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
{
	if (Param0 < fParam3)
	{
		if (Param0.f_1 < fParam4)
		{
			return (iParam5 + iParam6);
		}
		else
		{
			return iParam5;
		}
	}
	if (Param0.f_1 < fParam4)
	{
		return (iParam5 + iParam6) + 1;
	}
	return iParam5 + 1;
}

int func_964(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_974(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1954472->f_1446;
		case 1:
			return Global_1954472->f_1465.f_136;
		default:
			break;
	}
	return -1;
}

void func_965(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1275573->f_8;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	ENTITY::_0x835F131E7DC8F97A(iParam1, fParam0, 0, 0);
}

int func_966(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2101912686:
			return 13;
		case -2006026692:
			return 166;
		case -1993903481:
			return 124;
		case -1970041458:
			return 142;
		case -1935700575:
			return 136;
		case -1927422497:
			return 127;
		case -1920464018:
			return 58;
		case -1919393558:
			return 27;
		case -1857550353:
			return 163;
		case -1855662261:
			return 55;
		case -1840995238:
			return 15;
		case -1835722213:
			return 88;
		case -1790318144:
			return 106;
		case -1786033368:
			return 62;
		case -1767968552:
			return 86;
		case -1767662471:
			return 32;
		case -1729980669:
			return 108;
		case -1729554078:
			return 49;
		case -1727526861:
			return 109;
		case -1722264360:
			return 18;
		case -1719665775:
			return 37;
		case -1716981503:
			return 107;
		case -1697567574:
			return 72;
		case -1631930150:
			return 161;
		case -1629969648:
			return 164;
		case -1605880447:
			return 120;
		case -1575244501:
			return 61;
		case -1551628748:
			return 74;
		case -1543433893:
			return 70;
		case -1539337723:
			return 121;
		case -1525401254:
			return 64;
		case -1525233154:
			return 47;
		case -1491472827:
			return 94;
		case -1486927560:
			return 112;
		case -1480068681:
			return 50;
		case -1478178768:
			return 148;
		case -1465202595:
			return 104;
		case -1459368569:
			return 116;
		case -1431848307:
			return 76;
		case -1418298797:
			return 155;
		case -1378468884:
			return 60;
		case -1291022662:
			return 117;
		case -1288042557:
			return 19;
		case -1248720641:
			return 7;
		case -1229834518:
			return 89;
		case -1223791123:
			return 79;
		case -1209874968:
			return 45;
		case -1197630873:
			return 153;
		case -1181880939:
			return 80;
		case -1170784825:
			return 38;
		case -1125028284:
			return 137;
		case -1123356036:
			return 147;
		case -1100659165:
			return 6;
		case -1089821002:
			return 85;
		case -1084890102:
			return 162;
		case -1080696981:
			return 92;
		case -1010031245:
			return 39;
		case -992423055:
			return 157;
		case -979738281:
			return 77;
		case -931294997:
			return 111;
		case -920221586:
			return 110;
		case -900877140:
			return 30;
		case -885737328:
			return 114;
		case -885646667:
			return 67;
		case -837774766:
			return 78;
		case -799500009:
			return 145;
		case -751329575:
			return 139;
		case -711254121:
			return 132;
		case -660114191:
			return 31;
		case -649929946:
			return 53;
		case -636552746:
			return 123;
		case -587737142:
			return 71;
		case -546870456:
			return 159;
		case -521477124:
			return 82;
		case -481051896:
			return 135;
		case -425216802:
			return 17;
		case -415437740:
			return 103;
		case -415250715:
			return 144;
		case -392183396:
			return 90;
		case -343572565:
			return 21;
		case -286632741:
			return 8;
		case -267135864:
			return 138;
		case -233204301:
			return 105;
		case -203268054:
			return 143;
		case -161625840:
			return 167;
		case -126580932:
			return 0;
		case -117284255:
			return 122;
		case -60432888:
			return 44;
		case -56802666:
			return 102;
		case -47513954:
			return 99;
		case -35033037:
			return 133;
		case -33431232:
			return 12;
		case -29822088:
			return 40;
		case 0:
			return 1;
		case 1213703:
			return 154;
		case 54499763:
			return 98;
		case 111084081:
			return 56;
		case 114587291:
			return 29;
		case 149216078:
			return 57;
		case 168336706:
			return 149;
		case 173401469:
			return 100;
		case 180714777:
			return 81;
		case 268103762:
			return 97;
		case 282858309:
			return 171;
		case 320758674:
			return 158;
		case 352539363:
			return 169;
		case 398279342:
			return 34;
		case 408582472:
			return 5;
		case 420477860:
			return 25;
		case 509781427:
			return 93;
		case 550487527:
			return 35;
		case 576694808:
			return 165;
		case 638586808:
			return 118;
		case 659100749:
			return 59;
		case 666050502:
			return 65;
		case 698214003:
			return 2;
		case 713106899:
			return 36;
		case 780689752:
			return 3;
		case 791791441:
			return 125;
		case 797908556:
			return 42;
		case 798283666:
			return 141;
		case 807983049:
			return 150;
		case 839199173:
			return 91;
		case 846387993:
			return 14;
		case 852774198:
			return 113;
		case 878491929:
			return 33;
		case 887717126:
			return 66;
		case 926420921:
			return 51;
		case 946848176:
			return 68;
		case 952755846:
			return 24;
		case 955999834:
			return 134;
		case 956867472:
			return 9;
		case 1036630721:
			return 10;
		case 1037792287:
			return 140;
		case 1052684812:
			return 87;
		case 1075856357:
			return 95;
		case 1078589127:
			return 46;
		case 1095779900:
			return 22;
		case 1110815339:
			return 152;
		case 1138017610:
			return 11;
		case 1156950836:
			return 83;
		case 1195903441:
			return 52;
		case 1278022357:
			return 48;
		case 1323028278:
			return 41;
		case 1374979106:
			return 28;
		case 1405624312:
			return 146;
		case 1444077748:
			return 23;
		case 1498983922:
			return 84;
		case 1554410187:
			return 73;
		case 1585362808:
			return 16;
		case 1614000521:
			return 170;
		case 1636352616:
			return 151;
		case 1662680949:
			return 168;
		case 1698995037:
			return 4;
		case 1769731136:
			return 115;
		case 1801131110:
			return 75;
		case 1806354060:
			return 96;
		case 1811663962:
			return 131;
		case 1828803907:
			return 20;
		case 1829805500:
			return 54;
		case 1830494920:
			return 101;
		case 1838787462:
			return 129;
		case 1899963938:
			return 63;
		case 1900141702:
			return 156;
		case 1903067887:
			return 126;
		case 1907663129:
			return 43;
		case 2040423027:
			return 128;
		case 2050123975:
			return 130;
		case 2096770678:
			return 119;
		case 2110112797:
			return 69;
		case 2119170919:
			return 160;
		case 2132307595:
			return 26;
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

int func_967(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_975(iParam0))
	{
		return 0;
	}
	iVar0 = func_966(iParam0, 1);
	if (!func_976(&(Global_1140484->f_30603.f_847[iVar0 /*12*/])))
	{
		return 1;
	}
	iVar3 = func_977(&(Global_1140484->f_30603.f_847[iVar0 /*12*/]), 1);
	iVar4 = 0;
	while (iVar4 < (Global_1140484->f_30603[iVar3 /*6*/])->f_5)
	{
		iVar1 = Global_1140484->f_30603[iVar3 /*6*/][iVar4];
		switch (func_978(iParam0, iVar1))
		{
			case 0:
				func_979(iVar1, iParam0, iVar4);
				break;
			case 1:
				iVar5 = 0;
				while (iVar5 < Global_1140484->f_30603.f_10924)
				{
					if (&Global_1140484->f_30603.f_8871[iVar5 /*3*/] != iVar1 || (Global_1140484->f_30603.f_8871[iVar5 /*3*/])->f_1 != iParam0)
					{
					}
					else
					{
						func_979(iVar1, iParam0, iVar4);
						func_980(Global_1140484->f_30603.f_8871[iVar5 /*3*/]);
						Global_1140484->f_30603.f_10924 = (Global_1140484->f_30603.f_10924 - 1);
						*(Global_1140484->f_30603.f_8871[iVar5 /*3*/]) = { *(Global_1140484->f_30603.f_8871[Global_1140484->f_30603.f_10924 /*3*/]) };
						func_980(Global_1140484->f_30603.f_8871[Global_1140484->f_30603.f_10924 /*3*/]);
					}
					else
					{
						iVar5++;
					}
				}
				break;
			case 2:
				Jump @554; //curOff = 357
				iVar2 = func_981(iVar1, 1);
				func_982(iVar2, -1);
				if ((Global_1140484->f_30603.f_2900[iVar2 /*31*/])->f_29 <= 0)
				{
					func_983(iVar2, 0);
					iVar6 = 0;
					while (iVar6 < Global_1140484->f_30603.f_8870)
					{
						if (&Global_1140484->f_30603.f_8683[iVar6] != iVar1)
						{
						}
						else
						{
							Global_1140484->f_30603.f_8683[iVar6] = -1;
							Global_1140484->f_30603.f_8870 = (Global_1140484->f_30603.f_8870 - 1);
							Global_1140484->f_30603.f_8683[iVar6] = &Global_1140484->f_30603.f_8683[Global_1140484->f_30603.f_8870];
							Global_1140484->f_30603.f_8683[Global_1140484->f_30603.f_8870] = -1;
						}
						else
						{
							iVar6++;
						}
					}
				}
				iVar4++;
			}
			Global_1140484->f_30603.f_847[iVar0 /*12*/] = -1;
			func_984(Global_1140484->f_30603.f_847[iVar0 /*12*/]);
			return 1;
		}

int func_968(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_974(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1954472->f_1446.f_2;
		case 1:
			return Global_1954472->f_1465.f_136.f_2;
		default:
			break;
	}
	return -1;
}

void func_969(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1275573->f_8;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	PED::_CHARGE_PED_STAMINA(iParam1, fParam0);
}

int func_970(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_974(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1954472->f_1446.f_1;
		case 1:
			return Global_1954472->f_1465.f_136.f_1;
		default:
			break;
	}
	return -1;
}

void func_971(float fParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = PLAYER::PLAYER_ID();
	if (fParam0 > 0f && func_985(iVar0))
	{
		return;
	}
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if ((PLAYER::_0xB16223CB7DA965F0(iVar0) && fParam0 > 0f) && !bParam2)
	{
		return;
	}
	if (fParam0 == 0f)
	{
		return;
	}
	fVar2 = PLAYER::_0xAB3773E7AA1E9DCC(iVar0);
	if (fParam0 < 0f && bParam1 == 1)
	{
		bParam1 = false;
	}
	if (!bParam1)
	{
		PLAYER::_0x5A498FCA232F71E1(iVar0, 1f);
	}
	if (fParam0 > 0f)
	{
		PLAYER::_0x51345AE20F22C261(iVar0, fParam0, 0, 0, 1);
	}
	else
	{
		PLAYER::_0x200114E99552462B(iVar0, fParam0, 0);
	}
	if (!bParam1)
	{
		PLAYER::_0x5A498FCA232F71E1(iVar0, fVar2);
	}
}

int func_972(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (iParam5 == 2)
	{
		iParam5 = func_974(2);
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (func_962(iVar0, iParam0, fParam1))
	{
		if (bParam2)
		{
			if (fParam1 >= 100f)
			{
				AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
			}
		}
		if (bParam3)
		{
			func_986(iParam0, 7000, iParam5);
		}
		func_987(iVar0, iParam0, fParam1);
		func_988(iParam0, fParam1, bParam4, iParam5);
	}
	return 1;
}

int func_973(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 0;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_974(int iParam0)
{
	return func_990(func_989(iParam0));
}

int func_975(int iParam0)
{
	int iVar0;

	iVar0 = func_966(iParam0, 1);
	if (iVar0 < 2 || iVar0 >= 171)
	{
		return 0;
	}
	return 1;
}

int func_976(int iParam0)
{
	int iVar0;

	iVar0 = func_977(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 141)
	{
		return 0;
	}
	return 1;
}

int func_977(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2137819446:
			return 100;
		case -2131931188:
			return 127;
		case -2130179962:
			return 63;
		case -2059502051:
			return 65;
		case -2056449621:
			return 93;
		case -1973221270:
			return 64;
		case -1969715419:
			return 35;
		case -1968787770:
			return 6;
		case -1957895818:
			return 56;
		case -1952291530:
			return 130;
		case -1950424573:
			return 54;
		case -1910888845:
			return 110;
		case -1883405573:
			return 78;
		case -1844803100:
			return 80;
		case -1831687141:
			return 62;
		case -1810408560:
			return 73;
		case -1805785047:
			return 41;
		case -1759910473:
			return 25;
		case -1756646040:
			return 92;
		case -1741565123:
			return 47;
		case -1609480552:
			return 61;
		case -1596526341:
			return 3;
		case -1573606823:
			return 49;
		case -1510695159:
			return 138;
		case -1504620904:
			return 107;
		case -1462866101:
			return 111;
		case -1405836475:
			return 55;
		case -1360021450:
			return 9;
		case -1356583879:
			return 128;
		case -1242362177:
			return 46;
		case -1235458416:
			return 74;
		case -1234968784:
			return 69;
		case -1234548949:
			return 7;
		case -1143906885:
			return 122;
		case -1140308479:
			return 134;
		case -1105699593:
			return 141;
		case -1008191715:
			return 1;
		case -985141745:
			return 79;
		case -974857798:
			return 131;
		case -914097888:
			return 123;
		case -900341092:
			return 133;
		case -859661758:
			return 60;
		case -810885450:
			return 40;
		case -750368411:
			return 48;
		case -691826426:
			return 77;
		case -608746625:
			return 17;
		case -567710817:
			return 2;
		case -565327488:
			return 72;
		case -559775780:
			return 117;
		case -549372097:
			return 59;
		case -455491084:
			return 85;
		case -447950391:
			return 94;
		case -418060375:
			return 4;
		case -391691334:
			return 68;
		case -375368707:
			return 58;
		case -357713093:
			return 119;
		case -336340230:
			return 115;
		case -309456186:
			return 10;
		case -300915357:
			return 136;
		case -252777454:
			return 126;
		case -190717545:
			return 30;
		case -179898515:
			return 118;
		case -179343615:
			return 140;
		case -132268497:
			return 132;
		case -120658935:
			return 67;
		case -97080319:
			return 43;
		case -93340399:
			return 106;
		case -2338369:
			return 39;
		case -1:
			return 0;
		case 18275459:
			return 8;
		case 47725914:
			return 11;
		case 151887407:
			return 18;
		case 153569762:
			return 44;
		case 163503896:
			return 101;
		case 183566846:
			return 15;
		case 193887912:
			return 113;
		case 225804550:
			return 124;
		case 267361268:
			return 86;
		case 272084311:
			return 71;
		case 312483235:
			return 29;
		case 349431355:
			return 105;
		case 350943398:
			return 102;
		case 383280474:
			return 12;
		case 467901857:
			return 51;
		case 508502713:
			return 125;
		case 548902645:
			return 109;
		case 591249118:
			return 28;
		case 611341556:
			return 16;
		case 618168626:
			return 26;
		case 620773281:
			return 98;
		case 668358831:
			return 139;
		case 677513315:
			return 45;
		case 713112284:
			return 50;
		case 722162219:
			return 88;
		case 730253571:
			return 36;
		case 731266401:
			return 90;
		case 785001351:
			return 135;
		case 793035862:
			return 81;
		case 802887669:
			return 114;
		case 828060856:
			return 38;
		case 837742789:
			return 70;
		case 900184247:
			return 21;
		case 924932702:
			return 14;
		case 969398724:
			return 89;
		case 1014273190:
			return 96;
		case 1033330939:
			return 82;
		case 1034286944:
			return 87;
		case 1123546272:
			return 104;
		case 1138545953:
			return 20;
		case 1157170123:
			return 75;
		case 1159895828:
			return 31;
		case 1296512587:
			return 97;
		case 1377989036:
			return 19;
		case 1423325819:
			return 32;
		case 1476796894:
			return 24;
		case 1486559056:
			return 120;
		case 1493749872:
			return 112;
		case 1500545235:
			return 129;
		case 1507470319:
			return 83;
		case 1543468593:
			return 137;
		case 1568867811:
			return 57;
		case 1625043854:
			return 22;
		case 1667258255:
			return 33;
		case 1695199279:
			return 121;
		case 1699722938:
			return 13;
		case 1746978940:
			return 84;
		case 1764814366:
			return 95;
		case 1767031434:
			return 116;
		case 1775828486:
			return 103;
		case 1830439946:
			return 23;
		case 1851839077:
			return 99;
		case 1860260195:
			return 66;
		case 1885285188:
			return 52;
		case 1905466026:
			return 27;
		case 1925734249:
			return 76;
		case 1938325642:
			return 5;
		case 2079700825:
			return 42;
		case 2081475118:
			return 37;
		case 2093509505:
			return 34;
		case 2100718034:
			return 108;
		case 2117355246:
			return 53;
		case 2146493981:
			return 91;
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

int func_978(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_991(iParam0);
	iVar1 = &Global_1275573;
	iVar2 = func_981(iParam1, 1);
	switch ((Global_1140484->f_30603.f_2900[iVar2 /*31*/])->f_1)
	{
		case -1912291748:
			if (iVar1 == iVar0)
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
		case joaat("duration"):
		case -594821844:
		case 348502922:
		case 1002704651:
		case 1270499458:
			return 1;
		default:
			if (iVar1 == iVar0)
			{
				return 1;
			}
			break;
	}
	return 2;
}

int func_979(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;

	if (!func_975(iParam1))
	{
		return 0;
	}
	if (!func_992(iParam0))
	{
		return 0;
	}
	iVar0 = func_981(iParam0, 1);
	func_993(iParam0, iParam1, iParam2);
	if (func_994(*(Global_1140484->f_30603.f_2900[iVar0 /*31*/])) && func_995(iParam0, (Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4))
	{
		vVar1 = { func_996((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4) };
		if (func_997(vVar1))
		{
			if (func_998(vVar1.x, vVar1.y, vVar1.z))
			{
				func_999((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4, vVar1.x, vVar1.y, vVar1.z);
			}
			else
			{
				func_1000((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4);
			}
		}
		else
		{
			func_1000((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4);
		}
	}
	return 1;
}

void func_980(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
}

int func_981(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2139291255:
			return 145;
		case -2133203822:
			return 108;
		case -2119961771:
			return 90;
		case -2117138640:
			return 79;
		case -2115524796:
			return 60;
		case -2108980762:
			return 137;
		case -2088744988:
			return 91;
		case -2056483403:
			return 75;
		case -2008161946:
			return 26;
		case -2006179687:
			return 170;
		case -1961023994:
			return 92;
		case -1958950493:
			return 183;
		case -1954641284:
			return 28;
		case -1946267644:
			return 130;
		case -1925826694:
			return 49;
		case -1920322236:
			return 22;
		case -1886192107:
			return 55;
		case -1854279248:
			return 6;
		case -1853627206:
			return 134;
		case -1851126253:
			return 29;
		case -1847886830:
			return 16;
		case -1841577353:
			return 112;
		case -1840959475:
			return 106;
		case -1808210911:
			return 30;
		case -1803458707:
			return 8;
		case -1761885354:
			return 111;
		case -1749044999:
			return 96;
		case -1698597704:
			return 45;
		case -1631537135:
			return 63;
		case -1599892133:
			return 38;
		case -1514337705:
			return 177;
		case -1498884346:
			return 151;
		case -1448841146:
			return 50;
		case -1445919747:
			return 117;
		case -1441068914:
			return 39;
		case -1426414385:
			return 172;
		case -1421504146:
			return 109;
		case -1419242781:
			return 33;
		case -1394912816:
			return 186;
		case -1378028573:
			return 27;
		case -1370534631:
			return 110;
		case -1327315394:
			return 1;
		case -1311380047:
			return 46;
		case -1299791944:
			return 2;
		case -1280685390:
			return 132;
		case -1268916163:
			return 119;
		case -1256990268:
			return 76;
		case -1139172958:
			return 61;
		case -1112015628:
			return 163;
		case -1094465110:
			return 47;
		case -1038422902:
			return 74;
		case -1011126213:
			return 31;
		case -964953325:
			return 123;
		case -955252868:
			return 124;
		case -932897324:
			return 11;
		case -931584677:
			return 103;
		case -925634234:
			return 21;
		case -750441842:
			return 174;
		case -649515024:
			return 142;
		case -624920400:
			return 81;
		case -612675573:
			return 148;
		case -572117096:
			return 182;
		case -562496675:
			return 57;
		case -562150430:
			return 171;
		case -560965516:
			return 48;
		case -554207528:
			return 59;
		case -539762089:
			return 97;
		case -529396121:
			return 175;
		case -454200664:
			return 104;
		case -440727241:
			return 19;
		case -423133485:
			return 133;
		case -403292810:
			return 113;
		case -398496662:
			return 23;
		case -343145237:
			return 155;
		case -342633876:
			return 5;
		case -334674962:
			return 13;
		case -332283977:
			return 66;
		case -306011710:
			return 4;
		case -280832639:
			return 51;
		case -276166656:
			return 162;
		case -269291543:
			return 68;
		case -206787059:
			return 35;
		case -164741307:
			return 105;
		case -158245263:
			return 41;
		case -147416760:
			return 150;
		case -97000889:
			return 86;
		case -91604267:
			return 159;
		case -1:
			return 0;
		case 25589062:
			return 56;
		case 39330853:
			return 125;
		case 78014060:
			return 9;
		case 81243326:
			return 69;
		case 141777963:
			return 15;
		case 183131704:
			return 167;
		case 200623432:
			return 64;
		case 221495846:
			return 165;
		case 224471061:
			return 98;
		case 233412256:
			return 77;
		case 279713143:
			return 161;
		case 285724035:
			return 54;
		case 302482713:
			return 136;
		case 347710188:
			return 89;
		case 350341162:
			return 127;
		case 447464746:
			return 129;
		case 570385280:
			return 185;
		case 593083875:
			return 80;
		case 639606025:
			return 70;
		case 654960265:
			return 95;
		case 668064801:
			return 184;
		case 671416267:
			return 107;
		case 673708797:
			return 139;
		case 694721787:
			return 20;
		case 702532569:
			return 82;
		case 720207812:
			return 168;
		case 724367341:
			return 65;
		case 726043209:
			return 58;
		case 728769635:
			return 83;
		case 756791452:
			return 149;
		case 763061271:
			return 18;
		case 775646007:
			return 102;
		case 783509408:
			return 160;
		case 794883372:
			return 176;
		case 805902559:
			return 84;
		case 817456409:
			return 100;
		case 835146902:
			return 181;
		case 841152146:
			return 93;
		case 886162534:
			return 131;
		case 937140932:
			return 173;
		case 997052462:
			return 152;
		case 1034295275:
			return 17;
		case 1040501041:
			return 122;
		case 1093424641:
			return 115;
		case 1139016431:
			return 34;
		case 1144080006:
			return 32;
		case 1171151366:
			return 43;
		case 1175961229:
			return 138;
		case 1193587137:
			return 166;
		case 1201719505:
			return 42;
		case 1203687692:
			return 10;
		case 1208331227:
			return 12;
		case 1211076549:
			return 73;
		case 1265311313:
			return 36;
		case 1268462011:
			return 37;
		case 1294394742:
			return 179;
		case 1295163466:
			return 114;
		case 1300622865:
			return 99;
		case 1312155508:
			return 144;
		case 1324420970:
			return 25;
		case 1328995848:
			return 88;
		case 1336349861:
			return 143;
		case 1336429519:
			return 140;
		case 1390582854:
			return 94;
		case 1413720692:
			return 158;
		case 1433853218:
			return 85;
		case 1452940977:
			return 87;
		case 1480202237:
			return 178;
		case 1482822775:
			return 146;
		case 1514854451:
			return 180;
		case 1522457772:
			return 147;
		case 1523275824:
			return 62;
		case 1524301922:
			return 78;
		case 1557116130:
			return 126;
		case 1557362410:
			return 116;
		case 1578015076:
			return 72;
		case 1578708778:
			return 67;
		case 1596748830:
			return 101;
		case 1608803012:
			return 128;
		case 1644017723:
			return 153;
		case 1687654048:
			return 71;
		case 1704907062:
			return 169;
		case 1726722300:
			return 135;
		case 1744707601:
			return 3;
		case 1746613639:
			return 121;
		case 1767173923:
			return 141;
		case 1798083308:
			return 24;
		case 1813411238:
			return 157;
		case 1835150954:
			return 40;
		case 1903955831:
			return 7;
		case 1913593527:
			return 53;
		case 1930815945:
			return 118;
		case 1938151130:
			return 44;
		case 1976949991:
			return 156;
		case 2028487040:
			return 52;
		case 2051020894:
			return 164;
		case 2081856931:
			return 120;
		case 2113464199:
			return 154;
		case 2126590447:
			return 14;
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

void func_982(int iParam0, int iParam1)
{
	(Global_1140484->f_30603.f_2900[iParam0 /*31*/])->f_29 = ((Global_1140484->f_30603.f_2900[iParam0 /*31*/])->f_29 + iParam1);
}

void func_983(int iParam0, int iParam1)
{
	(Global_1140484->f_30603.f_2900[iParam0 /*31*/])->f_29 = iParam1;
}

void func_984(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_1[iVar0 /*2*/] = 0;
		(uParam0->f_1[iVar0 /*2*/])->f_1 = 0;
		iVar0++;
	}
}

bool func_985(int iParam0)
{
	float fVar0;

	fVar0 = (func_1001(iParam0) - PLAYER::_0xDF66A37936D5F3D9(iParam0));
	return fVar0 <= 1f;
}

void func_986(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_974(2);
	}
	if (iParam1 > 0)
	{
		iParam1 = (iParam1 + MISC::GET_GAME_TIMER());
	}
	switch (iParam2)
	{
		case 0:
			Global_1954472->f_1331.f_16[iParam0 /*3*/] = iParam1;
			break;
		case 1:
			Global_1954472->f_1465.f_2.f_16[iParam0 /*3*/] = iParam1;
			break;
		default:
			break;
	}
}

void func_987(int iParam0, int iParam1, float fParam2)
{
	char* sVar0;

	sVar0 = func_1002(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		PED::_0x437C08DB4FEBE2BD(iParam0, func_1003(iParam1), fParam2, -1);
	}
}

void func_988(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	var uVar0;

	if (iParam3 == 2)
	{
		iParam3 = func_974(2);
	}
	uVar0 = Global_1275573->f_21;
	func_1004(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_1005(iParam0, uVar0, iParam3);
	}
}

bool func_989(int iParam0)
{
	return func_679(&(Global_1954472->f_1465), iParam0, 1);
}

int func_990(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_991(int iParam0)
{
	if (func_1006(iParam0))
	{
		return (func_1007(iParam0) % 32);
	}
	return &Global_1275573;
}

int func_992(int iParam0)
{
	int iVar0;

	iVar0 = func_981(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 186)
	{
		return 0;
	}
	return 1;
}

int func_993(int iParam0, int iParam1, int iParam2)
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

	iVar0 = func_966(iParam1, 1);
	iVar1 = func_981(iParam0, 1);
	iVar2 = func_977(&(Global_1140484->f_30603.f_847[iVar0 /*12*/]), 1);
	if (Global_1140484->f_30603[iVar2 /*6*/][iParam2] != iParam0)
	{
		return 0;
	}
	if (!&(Global_1140484->f_30603.f_847[iVar0 /*12*/])->f_1[iParam2 /*2*/])
	{
		return 1;
	}
	(Global_1140484->f_30603.f_847[iVar0 /*12*/])->f_1[iParam2 /*2*/] = 0;
	iVar4 = 0;
	while (iVar4 < (Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_16)
	{
		iVar3 = &(Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_6[iVar4 /*3*/];
		iVar5 = func_1008(iVar3, 1);
		if (!func_1009(iVar3))
		{
		}
		else
		{
			(Global_1140484->f_2001[iVar5 /*192*/])->f_1[iVar1] = (&(Global_1140484->f_2001[iVar5 /*192*/])->f_1[iVar1] - 1);
			(Global_1140484->f_2001[iVar5 /*192*/])->f_188 = ((Global_1140484->f_2001[iVar5 /*192*/])->f_188 - func_1010((Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_6[iVar4 /*3*/]));
			func_1011(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < (Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_28)
	{
		iVar6 = &(Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_17[iVar7 /*2*/];
		if (!func_1012(iVar6))
		{
		}
		else
		{
			iVar8 = func_1013(iVar6, 1);
			(*Global_1140484->f_18706[iVar8 /*195*/])[iVar1] = (Global_1140484->f_18706[iVar8 /*195*/][iVar1] - 1);
			if (Global_1140484->f_18706[iVar8 /*195*/][iVar1] <= 0)
			{
				MISC::_0xB909149F2BB5F6DA(&((Global_1140484->f_18706[iVar8 /*195*/])->f_187), iVar1);
			}
			if (!MISC::_0x80E9C316EF84DD81(&((Global_1140484->f_18706[iVar8 /*195*/])->f_187)))
			{
				(Global_1140484->f_18706[iVar8 /*195*/])->f_194 = 0;
				func_1014(iVar6);
			}
		}
		iVar7++;
	}
	return 1;
}

bool func_994(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	return Param0.f_4 != 0;
}

bool func_995(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_992(iParam0))
	{
		return false;
	}
	if (!func_1015(iParam1))
	{
		return false;
	}
	iVar0 = func_1016(iParam1, 1);
	return &Global_1140484->f_30603.f_8667[iVar0 /*3*/] == iParam0;
}

Vector3 func_996(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_1017(iParam0);
	if (iVar0 == -1)
	{
		vVar1 = -1;
		vVar1.f_2 = -1;
		return vVar1;
	}
	return *(Global_1140484->f_30603.f_8871[iVar0 /*3*/]);
}

int func_997(vector3 vParam0)
{
	if (!func_992(vParam0.x))
	{
		return 0;
	}
	if (!func_975(vParam0.y))
	{
		return 0;
	}
	if (!func_1018(vParam0.z))
	{
		return 0;
	}
	return 1;
}

int func_998(int iParam0, int iParam1, int iParam2)
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

	iVar0 = func_966(iParam1, 1);
	iVar1 = func_981(iParam0, 1);
	iVar2 = func_977(&(Global_1140484->f_30603.f_847[iVar0 /*12*/]), 1);
	if (Global_1140484->f_30603[iVar2 /*6*/][iParam2] != iParam0)
	{
		return 0;
	}
	((Global_1140484->f_30603.f_847[iVar0 /*12*/])->f_1[iParam2 /*2*/])->f_1 = Global_1275573->f_21;
	if (&(Global_1140484->f_30603.f_847[iVar0 /*12*/])->f_1[iParam2 /*2*/])
	{
		return 1;
	}
	(Global_1140484->f_30603.f_847[iVar0 /*12*/])->f_1[iParam2 /*2*/] = 1;
	iVar4 = 0;
	while (iVar4 < (Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_16)
	{
		iVar3 = &(Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_6[iVar4 /*3*/];
		iVar5 = func_1008(iVar3, 1);
		if (!func_1009(iVar3))
		{
		}
		else
		{
			(Global_1140484->f_2001[iVar5 /*192*/])->f_1[iVar1] = &(Global_1140484->f_2001[iVar5 /*192*/])->f_1[iVar1] + 1;
			(Global_1140484->f_2001[iVar5 /*192*/])->f_188 = ((Global_1140484->f_2001[iVar5 /*192*/])->f_188 + func_1010((Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_6[iVar4 /*3*/]));
			func_1019(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < (Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_28)
	{
		iVar6 = &(Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_17[iVar7 /*2*/];
		if (!func_1012(iVar6))
		{
		}
		else if (!func_1020((Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_17[iVar7 /*2*/]))
		{
		}
		else
		{
			iVar8 = func_1013(iVar6, 1);
			(*Global_1140484->f_18706[iVar8 /*195*/])[iVar1] = Global_1140484->f_18706[iVar8 /*195*/][iVar1] + 1;
			MISC::_0xE84AAC1B22A73E99(&((Global_1140484->f_18706[iVar8 /*195*/])->f_187), iVar1);
			if (!(Global_1140484->f_18706[iVar8 /*195*/])->f_194)
			{
				(Global_1140484->f_18706[iVar8 /*195*/])->f_194 = 1;
				func_1021(iVar6);
			}
		}
		iVar7++;
	}
	func_1022((Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_2);
	return 1;
}

void func_999(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_1015(iParam0))
	{
		return;
	}
	iVar0 = func_1016(iParam0, 1);
	if (!func_992(iParam1))
	{
		return;
	}
	if (!func_975(iParam2))
	{
		return;
	}
	if (!func_1018(iParam3))
	{
		return;
	}
	Global_1140484->f_30603.f_8667[iVar0 /*3*/] = iParam1;
	(Global_1140484->f_30603.f_8667[iVar0 /*3*/])->f_1 = iParam2;
	(Global_1140484->f_30603.f_8667[iVar0 /*3*/])->f_2 = iParam3;
}

void func_1000(int iParam0)
{
	int iVar0;

	if (!func_1015(iParam0))
	{
		return;
	}
	iVar0 = func_1016(iParam0, 1);
	Global_1140484->f_30603.f_8667[iVar0 /*3*/] = -1;
	(Global_1140484->f_30603.f_8667[iVar0 /*3*/])->f_1 = 0;
	(Global_1140484->f_30603.f_8667[iVar0 /*3*/])->f_2 = -1;
}

float func_1001(int iParam0)
{
	return (PLAYER::_0x592F58BC4D2A2CF3(iParam0, 0) - IntToFloat(func_1023(2)));
}

char* func_1002(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HealthCoreValue";
		case 1:
			return "StaminaCoreValue";
		case 2:
			return "DeadEyeCoreValue";
		default:
			break;
	}
	return "";
}

char* func_1003(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "isLowHealthCoreActive";
		case 1:
			return "isLowStaminaCoreActive";
		case 2:
			return "isLowDeadEyeCoreActive";
		default:
			break;
	}
	return "";
}

void func_1004(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_974(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1954472->f_1331.f_6[iParam0 /*3*/] = fParam1;
			break;
		case 1:
			Global_1954472->f_1465.f_2.f_6[iParam0 /*3*/] = fParam1;
			break;
		default:
			break;
	}
}

void func_1005(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_974(2);
	}
	switch (iParam2)
	{
		case 0:
			(Global_1954472->f_1331.f_16[iParam0 /*3*/])->f_2 = uParam1;
			break;
		case 1:
			(Global_1954472->f_1465.f_2.f_16[iParam0 /*3*/])->f_2 = uParam1;
			break;
		default:
			break;
	}
}

int func_1006(int iParam0)
{
	int iVar0;

	iVar0 = func_966(iParam0, 1);
	if (iVar0 >= 2 && iVar0 <= 129)
	{
		return 1;
	}
	return 0;
}

int func_1007(int iParam0)
{
	int iVar0;

	iVar0 = func_966(iParam0, 1);
	if (func_1006(iParam0))
	{
		return (iVar0 - 2);
	}
	else if (func_1024(iParam0))
	{
		return (iVar0 - 130);
	}
	else if (func_1025(iParam0))
	{
		return (iVar0 - 161);
	}
	else if (func_1026(iParam0))
	{
		return (iVar0 - 162);
	}
	else if (func_1027(iParam0))
	{
		return (iVar0 - 170);
	}
	else if (func_1028(iParam0))
	{
		return (iVar0 - 150);
	}
	return -1;
}

int func_1008(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1988557796:
			return 49;
		case -1936069272:
			return 47;
		case -1926692092:
			return 42;
		case -1846416021:
			return 58;
		case -1721745367:
			return 2;
		case -1701192079:
			return 41;
		case -1659620438:
			return 50;
		case -1607530002:
			return 61;
		case -1589052195:
			return 37;
		case -1575020444:
			return 86;
		case -1572802418:
			return 67;
		case -1514969696:
			return 74;
		case -1397050499:
			return 53;
		case -1349331938:
			return 43;
		case -1345921497:
			return 29;
		case -1309904053:
			return 22;
		case -1290490489:
			return 7;
		case -1202225775:
			return 56;
		case -1080116020:
			return 23;
		case -1079033682:
			return 46;
		case -1059185085:
			return 25;
		case -1003690472:
			return 51;
		case -851757466:
			return 64;
		case -744806636:
			return 52;
		case -516489227:
			return 11;
		case -514416345:
			return 63;
		case -484540420:
			return 36;
		case -483049716:
			return 71;
		case -400566333:
			return 14;
		case -391623459:
			return 69;
		case -374018223:
			return 59;
		case -349428415:
			return 39;
		case -231535884:
			return 15;
		case -201802680:
			return 1;
		case -85606741:
			return 62;
		case -77989269:
			return 76;
		case -1:
			return 0;
		case 66478954:
			return 85;
		case 146438590:
			return 83;
		case 198507096:
			return 68;
		case 222365748:
			return 78;
		case 295732030:
			return 40;
		case 340029732:
			return 66;
		case 374652900:
			return 82;
		case 410940916:
			return 84;
		case 515706097:
			return 5;
		case 527883710:
			return 44;
		case 549685826:
			return 60;
		case 641300611:
			return 81;
		case 696211072:
			return 30;
		case 778435476:
			return 19;
		case 808428606:
			return 4;
		case 854463919:
			return 79;
		case 857703729:
			return 48;
		case 874892169:
			return 87;
		case 886907851:
			return 16;
		case 995847993:
			return 65;
		case 1061744811:
			return 6;
		case 1149992366:
			return 27;
		case 1221256507:
			return 8;
		case 1247001946:
			return 72;
		case 1275912274:
			return 45;
		case 1333289277:
			return 20;
		case 1341193408:
			return 10;
		case 1447875596:
			return 75;
		case 1495919075:
			return 70;
		case 1509485650:
			return 17;
		case 1546732394:
			return 34;
		case 1572090083:
			return 55;
		case 1608132015:
			return 38;
		case 1664203120:
			return 32;
		case 1679987408:
			return 54;
		case 1728485678:
			return 28;
		case 1742416595:
			return 3;
		case 1766148221:
			return 73;
		case 1768495249:
			return 21;
		case 1900095956:
			return 18;
		case 1946296046:
			return 12;
		case 1968069853:
			return 24;
		case 1997267529:
			return 31;
		case 2000631014:
			return 77;
		case 2019620375:
			return 57;
		case 2037894795:
			return 9;
		case 2048982041:
			return 33;
		case 2063781084:
			return 13;
		case 2082272090:
			return 35;
		case 2089824257:
			return 26;
		case 2128780735:
			return 80;
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

int func_1009(int iParam0)
{
	int iVar0;

	iVar0 = func_1008(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 87)
	{
		return 0;
	}
	return 1;
}

float func_1010(var uParam0)
{
	var uVar0;

	if (uParam0->f_2 != 0)
	{
		uVar0 = func_1029(794259616, uParam0->f_2, uParam0->f_1, "");
		return uVar0;
	}
	return uParam0->f_1;
}

void func_1011(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_1009(iParam0))
	{
		return;
	}
	iVar0 = func_1008(iParam0, 1);
	if (!func_1030(&(Global_1140484->f_2001[iVar0 /*192*/])))
	{
		return;
	}
	(*(*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])[iVar0] = ((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/][iVar0] - 1);
	if ((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/][iVar0] > 0)
	{
		return;
	}
	(*(*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])[iVar0] = 0;
	(Global_1140484->f_2001[iVar0 /*192*/])->f_191 = 0;
	if (!func_1031((Global_1140484->f_2001[iVar0 /*192*/])->f_190))
	{
		return;
	}
	iVar1 = func_1032((Global_1140484->f_2001[iVar0 /*192*/])->f_190, 1);
	((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])->f_88[iVar1] = (&((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])->f_88[iVar1] - 1);
	if (&((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])->f_88[iVar1] > 0)
	{
		return;
	}
	iVar2 = 0;
	while (iVar2 < (Global_1140484->f_41529[iVar1 /*25*/])->f_23)
	{
		if (Global_1140484->f_41529[iVar1 /*25*/][iVar2] != &Global_1140484->f_2001[iVar0 /*192*/])
		{
		}
		else
		{
			(*Global_1140484->f_41529[iVar1 /*25*/])[iVar2] = -1;
			(Global_1140484->f_41529[iVar1 /*25*/])->f_23 = ((Global_1140484->f_41529[iVar1 /*25*/])->f_23 - 1);
			(*Global_1140484->f_41529[iVar1 /*25*/])[iVar2] = Global_1140484->f_41529[iVar1 /*25*/][(Global_1140484->f_41529[iVar1 /*25*/])->f_23];
			(*Global_1140484->f_41529[iVar1 /*25*/])[(Global_1140484->f_41529[iVar1 /*25*/])->f_23] = -1;
		}
		else
		{
			iVar2++;
		}
	}
}

int func_1012(int iParam0)
{
	int iVar0;

	iVar0 = func_1013(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 61)
	{
		return 0;
	}
	return 1;
}

int func_1013(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2116044775:
			return 49;
		case -2103256604:
			return 12;
		case -2073453362:
			return 11;
		case -2041025962:
			return 60;
		case -1930487908:
			return 2;
		case -1913155192:
			return 41;
		case -1771755729:
			return 28;
		case -1751121159:
			return 50;
		case -1730553768:
			return 3;
		case -1655894020:
			return 25;
		case -1604680733:
			return 10;
		case -1511575465:
			return 34;
		case -1328991329:
			return 5;
		case -1136429013:
			return 45;
		case -1115905480:
			return 31;
		case -1026481003:
			return 6;
		case -966751997:
			return 13;
		case -824728332:
			return 33;
		case -718742742:
			return 55;
		case -698163919:
			return 32;
		case -662966589:
			return 1;
		case -549693655:
			return 14;
		case -488644714:
			return 4;
		case -430422799:
			return 36;
		case -350459285:
			return 61;
		case -268774736:
			return 40;
		case -220644763:
			return 26;
		case -199042163:
			return 56;
		case -191252842:
			return 22;
		case -166765081:
			return 51;
		case -106166013:
			return 19;
		case -1:
			return 0;
		case 50982971:
			return 17;
		case 125946764:
			return 20;
		case 367160929:
			return 57;
		case 482459685:
			return 24;
		case 492808644:
			return 18;
		case 539654946:
			return 23;
		case 656937467:
			return 39;
		case 692490127:
			return 15;
		case 718630298:
			return 52;
		case 785261183:
			return 48;
		case 793826854:
			return 21;
		case 892655276:
			return 46;
		case 907911269:
			return 27;
		case 955977457:
			return 43;
		case 966561884:
			return 7;
		case 988751276:
			return 30;
		case 1159158432:
			return 58;
		case 1204983685:
			return 37;
		case 1242495215:
			return 9;
		case 1254069395:
			return 59;
		case 1341326366:
			return 54;
		case 1348456703:
			return 35;
		case 1442295985:
			return 38;
		case 1527078018:
			return 42;
		case 1565429580:
			return 53;
		case 1696309427:
			return 44;
		case 1870637439:
			return 16;
		case 2067881273:
			return 8;
		case 2093700568:
			return 47;
		case 2113555978:
			return 29;
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

void func_1014(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case -1730553768:
		case -488644714:
			func_1033();
			break;
		case -2103256604:
			func_1034();
			break;
		case 692490127:
			PED::_REMOVE_PED_WOUND_EFFECT(iVar0, 0f);
			break;
		case 50982971:
			PED::_0xA5950E16B8F31052(iVar0, 0, 0);
			GRAPHICS::_0xC5CB91D65852ED7E(func_1035(iParam0));
			break;
		case 1870637439:
			GRAPHICS::_0xC5CB91D65852ED7E(func_1035(iParam0));
			break;
		case 492808644:
			GRAPHICS::_0xC5CB91D65852ED7E(func_1035(iParam0));
			break;
		case 125946764:
			ATTRIBUTE::_0x3FC4C027FD0936F4(5);
			func_229(105, 1);
			break;
		case -106166013:
			GRAPHICS::_0xC5CB91D65852ED7E(func_1035(iParam0));
			break;
		case 1204983685:
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 19);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 1);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 18);
			break;
		case 1442295985:
			NETWORK::_0x442B4347B6EC36E8(iVar0, 0, true);
			break;
		case 656937467:
			ATTRIBUTE::_0x3FC4C027FD0936F4(15);
			break;
		case -430422799:
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 19);
			break;
		case 539654946:
			PLAYER::_0x5F8E0303C229C84B(iVar1, "");
			break;
		case -1655894020:
		case 482459685:
		case 907911269:
			func_1037(func_1036(iParam0));
			break;
		case -1771755729:
		case -220644763:
			PLAYER::_0x768E81AE285A4B67(iVar1, 0);
			PLAYER::_0xE910932F4B30BE23(iVar1);
			PLAYER::_0x0E9057A9DA78D0F8(iVar1, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 0);
			break;
		case 2113555978:
			GRAPHICS::_0xAF4D239B8903FCBE();
			PLAYER::_0x768E81AE285A4B67(iVar1, 0);
			PLAYER::_0xE910932F4B30BE23(iVar1);
			PLAYER::_0x0E9057A9DA78D0F8(iVar1, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 0);
			break;
		case 785261183:
			PLAYER::_0xCE285A4413B00B7F(iVar1, 1);
			break;
		case 793826854:
			func_1038();
			break;
		case -166765081:
		case 718630298:
		case 1341326366:
		case 1565429580:
			func_1030(17);
			break;
		case -824728332:
			func_1030(16);
			break;
	}
}

int func_1015(int iParam0)
{
	int iVar0;

	iVar0 = func_1016(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return 0;
	}
	return 1;
}

int func_1016(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1290685708:
			return 1;
		case -1038992817:
			return 5;
		case -950874556:
			return 4;
		case -290151400:
			return 3;
		case 0:
			return 0;
		case 1938826026:
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

int func_1017(int iParam0)
{
	int iVar0;
	struct<31> Var1;
	struct<31> Var32;
	int iVar63;
	int iVar64;
	int iVar65;

	iVar0 = func_1039(iParam0);
	Var1.f_3 = 1065353216;
	Var1.f_5 = -1;
	Var1.f_6 = 3;
	Var1.f_6.f_1 = -1;
	Var1.f_6.f_1.f_3 = -1;
	Var1.f_6.f_1.f_3.f_3 = -1;
	Var1.f_17 = 5;
	Var32.f_3 = 1065353216;
	Var32.f_5 = -1;
	Var32.f_6 = 3;
	Var32.f_6.f_1 = -1;
	Var32.f_6.f_1.f_3 = -1;
	Var32.f_6.f_1.f_3.f_3 = -1;
	Var32.f_17 = 5;
	iVar63 = -1;
	iVar65 = 0;
	while (iVar65 < Global_1140484->f_30603.f_10924)
	{
		iVar64 = func_981(&(Global_1140484->f_30603.f_8871[iVar65 /*3*/]), 1);
		if ((Global_1140484->f_30603.f_2900[iVar64 /*31*/])->f_4 != iParam0)
		{
		}
		else if (&Global_1140484->f_30603.f_8871[iVar65 /*3*/] == iVar0)
		{
		}
		else if (!func_1040(&(Global_1140484->f_30603.f_8871[iVar65 /*3*/]), (Global_1140484->f_30603.f_8871[iVar65 /*3*/])->f_1))
		{
		}
		else
		{
			Var1 = { func_1041(&(Global_1140484->f_30603.f_8871[iVar65 /*3*/])) };
			if (Var1.f_5 > Var32.f_5)
			{
				Var32 = { Var1 };
				iVar63 = iVar65;
			}
		}
		iVar65++;
	}
	return iVar63;
}

int func_1018(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		return 0;
	}
	return 1;
}

void func_1019(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_1009(iParam0))
	{
		return;
	}
	iVar0 = func_1008(iParam0, 1);
	if (!func_1030(&(Global_1140484->f_2001[iVar0 /*192*/])))
	{
		return;
	}
	(*(*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])[iVar0] = (*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/][iVar0] + 1;
	(Global_1140484->f_2001[iVar0 /*192*/])->f_191 = 1;
	if (!func_1031((Global_1140484->f_2001[iVar0 /*192*/])->f_190))
	{
		return;
	}
	iVar1 = func_1032((Global_1140484->f_2001[iVar0 /*192*/])->f_190, 1);
	((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])->f_88[iVar1] = &((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])->f_88[iVar1] + 1;
	iVar2 = 0;
	while (iVar2 < (Global_1140484->f_41529[iVar1 /*25*/])->f_23)
	{
		if (Global_1140484->f_41529[iVar1 /*25*/][iVar2] == &Global_1140484->f_2001[iVar0 /*192*/])
		{
			return;
		}
		iVar2++;
	}
	(*Global_1140484->f_41529[iVar1 /*25*/])[(Global_1140484->f_41529[iVar1 /*25*/])->f_23] = &Global_1140484->f_2001[iVar0 /*192*/];
	(Global_1140484->f_41529[iVar1 /*25*/])->f_23++;
}

int func_1020(var uParam0)
{
	var uVar0;

	if (uParam0->f_1 != 0)
	{
		uVar0 = func_1042(794259616, uParam0->f_1, 1, "");
		return uVar0;
	}
	return 1;
}

void func_1021(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case -1730553768:
		case -488644714:
			func_1033();
			break;
		case -2103256604:
			func_1034();
			break;
		case 692490127:
			PED::_SET_PED_WOUND_EFFECT(iVar0, 2, 14411, 0f, 0f, 0f, 0f, 0f, -1f, 1f);
			break;
		case 50982971:
			PED::_0xA5950E16B8F31052(iVar0, 1, 0);
			GRAPHICS::ANIMPOSTFX_PLAY(func_1035(iParam0));
			break;
		case 1870637439:
			GRAPHICS::ANIMPOSTFX_PLAY(func_1035(iParam0));
			break;
		case 492808644:
			GRAPHICS::ANIMPOSTFX_PLAY(func_1035(iParam0));
			break;
		case 125946764:
			ATTRIBUTE::_0xFB6E111908502871(5);
			func_229(104, 1);
			break;
		case -106166013:
			GRAPHICS::ANIMPOSTFX_PLAY(func_1035(iParam0));
			break;
		case 1204983685:
			break;
		case 656937467:
			ATTRIBUTE::_0xFB6E111908502871(15);
			break;
		case 539654946:
			PLAYER::_0x5F8E0303C229C84B(iVar1, "focusfire");
			break;
		case 482459685:
			iVar2 = func_1036(iParam0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_1043(iParam0, 0));
			func_1044(iVar2, 0, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_1043(iParam0, 1));
			func_1044(iVar2, 1, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_1043(iParam0, 2));
			func_1044(iVar2, 2, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_1043(iParam0, 3));
			func_1044(iVar2, 2, 1, iVar3, 0);
			break;
		case -1655894020:
			iVar2 = func_1036(iParam0);
			func_1044(iVar2, 3, 1, -1, 1);
			break;
		case 907911269:
			iVar2 = func_1036(iParam0);
			func_1044(iVar2, 4, 1, -1, 0);
			break;
		case -220644763:
			PLAYER::_0x768E81AE285A4B67(iVar1, 1014693585);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 8);
			PLAYER::_0x131E294EF60160DF(iVar1, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 1);
			break;
		case -1771755729:
			PLAYER::_0x768E81AE285A4B67(iVar1, 1936842089);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 8);
			PLAYER::_0x131E294EF60160DF(iVar1, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 1);
			break;
		case 2113555978:
			GRAPHICS::_0x249CD6B7285536F2(0f, 2f, 2f);
			PLAYER::_0x768E81AE285A4B67(iVar1, 1979474018);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 25);
			PLAYER::_0x263D69767F76059C(iVar1, 2);
			break;
		case 785261183:
			PLAYER::_0xCE285A4413B00B7F(iVar1, 0);
			break;
		case 793826854:
			func_1045();
			break;
		case -166765081:
		case 718630298:
		case 1341326366:
		case 1565429580:
			func_1030(17);
			break;
		case -824728332:
			func_1030(16);
			break;
	}
}

void func_1022(int iParam0)
{
	char* sVar0;
	char* sVar1;

	if (iParam0 == 0)
	{
		return;
	}
	sVar0 = func_1046(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	sVar1 = func_1047(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return;
	}
	AUDIO::_PLAY_SOUND_FROM_ENTITY(sVar0, Global_1275573->f_8, sVar1, 0, 0, 0);
}

int func_1023(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_964(2) * 2;
		case 1:
			return func_968(2) * 2;
		case 2:
			return func_970(2) * 2;
		default:
			break;
	}
	return -1;
}

int func_1024(int iParam0)
{
	int iVar0;

	iVar0 = func_966(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return 1;
	}
	return 0;
}

int func_1025(int iParam0)
{
	int iVar0;

	iVar0 = func_966(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return 1;
	}
	return 0;
}

int func_1026(int iParam0)
{
	int iVar0;

	iVar0 = func_966(iParam0, 1);
	if (iVar0 >= 162 && iVar0 <= 169)
	{
		return 1;
	}
	return 0;
}

int func_1027(int iParam0)
{
	int iVar0;

	iVar0 = func_966(iParam0, 1);
	if (iVar0 >= 170 && iVar0 <= 170)
	{
		return 1;
	}
	return 0;
}

int func_1028(int iParam0)
{
	int iVar0;

	iVar0 = func_966(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 160)
	{
		return 1;
	}
	return 0;
}

float func_1029(int iParam0, int iParam1, float fParam2, char* sParam3)
{
	struct<11> Var0;
	float fVar22;

	if (func_1048(iParam0, iParam1, &Var0))
	{
		fVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_FLOAT(iParam0, iParam1, Var0.f_10.f_1);
	}
	else
	{
		fVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_FLOAT(iParam0, iParam1, fParam2);
	}
	return fVar22;
}

int func_1030(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 21)
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		return 1;
	}
	if (MISC::_0x8F4F050054005C27(&(Global_1140484->f_1998), iParam0))
	{
		return 1;
	}
	if (Global_1140484->f_1997 >= 21)
	{
		return 0;
	}
	Global_1140484->f_1975[Global_1140484->f_1997] = iParam0;
	Global_1140484->f_1997++;
	return 1;
}

int func_1031(int iParam0)
{
	int iVar0;

	iVar0 = func_1032(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 5)
	{
		return 0;
	}
	return 1;
}

int func_1032(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1745889187:
			return 3;
		case -1016837116:
			return 5;
		case 0:
			return 0;
		case 370243254:
			return 4;
		case 1213888609:
			return 2;
		case 1416591065:
			return 1;
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

void func_1033()
{
	bool bVar0;
	bool bVar1;

	if ((Global_1140484->f_18706[3 /*195*/])->f_194)
	{
		bVar0 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1275573->f_8, 550, bVar0);
	if ((Global_1140484->f_18706[4 /*195*/])->f_194)
	{
		bVar1 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1275573->f_8, 556, bVar1);
}

void func_1034()
{
	bool bVar0;

	bVar0 = false;
	if ((Global_1140484->f_18706[12 /*195*/])->f_194)
	{
		bVar0 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1275573->f_8, 263, bVar0);
}

char* func_1035(int iParam0)
{
	switch (iParam0)
	{
		case 1870637439:
			return "MP_ArrowDrain";
		case 492808644:
			return "MP_ArrowDisorient";
		case 50982971:
			return "MP_ArrowTracking";
		case -106166013:
			return "MP_MoonshineToxic";
		default:
			break;
	}
	return "";
}

int func_1036(int iParam0)
{
	switch (iParam0)
	{
		case 482459685:
			return -843895567;
		case -1655894020:
			return -1655894020;
		case 907911269:
			return 907911269;
		default:
			break;
	}
	return 0;
}

void func_1037(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (((*Global_1182208)[iVar0 /*8*/])->f_5 == iParam0)
		{
			((*Global_1182208)[iVar0 /*8*/])->f_7 = 1;
			((*Global_1182208)[iVar0 /*8*/])->f_5 = 0;
		}
		iVar0++;
	}
}

void func_1038()
{
	PED::SET_PED_CONFIG_FLAG(Global_1275573->f_8, 305, false);
	PED::_0x801917E7D7BCE418(Global_1275573->f_8);
}

int func_1039(int iParam0)
{
	int iVar0;

	if (!func_1015(iParam0))
	{
		return -1;
	}
	iVar0 = func_1016(iParam0, 1);
	return &(Global_1140484->f_30603.f_8667[iVar0 /*3*/]);
}

int func_1040(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<31> Var4;

	if (!func_992(iParam0))
	{
		return 0;
	}
	iVar0 = func_981(iParam0, 1);
	iVar2 = (Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4;
	if (func_994(*(Global_1140484->f_30603.f_2900[iVar0 /*31*/])))
	{
		iVar3 = &Global_1140484->f_30603.f_8667[func_1016(iVar2, 1) /*3*/];
		Var4 = { func_1041(iVar3) };
		if (iVar3 != iParam0 && (Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_5 <= Var4.f_5)
		{
			return 0;
		}
	}
	switch (&Global_1140484->f_30603.f_2900[iVar0 /*31*/])
	{
		case -1606735498:
		case -1455211650:
		case -1324410551:
		case -1276912520:
		case -1028878953:
		case -992973338:
		case -971275364:
		case -932644421:
		case -590004554:
		case -528257357:
		case -193993646:
		case -166662497:
		case -23641105:
		case 37083370:
		case 52193493:
		case 180258367:
		case 429965152:
		case 461381338:
		case 522523138:
		case 589907865:
		case 979390476:
		case 1028557598:
		case 1154303630:
		case 1254162401:
		case 1269394302:
		case 1305415806:
		case 1461424861:
		case 1691008805:
		case 1759133423:
		case 1810352391:
		case 1915097582:
		case 1921800945:
		case 2046842849:
		case 2116793692:
			return 1;
		case 1245579893:
			if (!func_1049() && !func_1050())
			{
				return 0;
			}
			return 1;
		case -2010146101:
			if (!func_1049())
			{
				return 0;
			}
			return 1;
		case -2139108927:
			iVar1 = func_991(iParam1);
			if (iVar1 == &Global_1275573)
			{
				return 0;
			}
			return 1;
		case -2129621195:
			iVar1 = func_991(iParam1);
			if (iVar1 == &Global_1275573)
			{
				return 0;
			}
			if (!GANG::_0x424B17A7DC5C90BC(&(Global_1275573->f_154[&Global_1275573])))
			{
				return 0;
			}
			if (!GANG::_0x81FB74C83C2ED69F(&(Global_1275573->f_154[iVar1])))
			{
				return 0;
			}
			return 1;
		case 190804938:
			iVar1 = func_991(iParam1);
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(&(Global_1275573->f_154[iVar1])))
			{
				return 0;
			}
			if (iVar1 != &Global_1275573 && !func_1051(&(Global_1275573->f_154[iVar1])))
			{
				return 0;
			}
			if (!func_1052(512, iVar1))
			{
				return 0;
			}
			return 1;
		case -1503245593:
			if (!&Global_1954472->f_1616[8])
			{
				return 0;
			}
			iVar1 = func_991(iParam1);
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(&(Global_1275573->f_154[iVar1])))
			{
				return 0;
			}
			if (PED::_0x0C31C51168E80365(Global_1275573->f_8) != PLAYER::GET_PLAYER_PED(&(Global_1275573->f_154[iVar1])))
			{
				return 0;
			}
			return 1;
		default:
			break;
	}
	return 0;
}

struct<31> func_1041(int iParam0)
{
	int iVar0;

	iVar0 = func_981(iParam0, 1);
	return *(Global_1140484->f_30603.f_2900[iVar0 /*31*/]);
}

bool func_1042(int iParam0, int iParam1, bool bParam2, char* sParam3)
{
	struct<11> Var0;
	bool bVar22;

	if (func_1048(iParam0, iParam1, &Var0))
	{
		bVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_BOOL(iParam0, iParam1, Var0.f_10.f_2);
	}
	else
	{
		bVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_BOOL(iParam0, iParam1, bParam2);
	}
	return bVar22;
}

char* func_1043(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 482459685:
			switch (iParam1)
			{
				case 0:
					return "PH_HEAD";
				case 1:
					return "CP_CHEST";
				case 2:
					return "CP_R_UpperArm";
				case 3:
					return "CP_L_UpperArm";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_1044(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Global_1182208[iVar0 /*8*/]) && !((*Global_1182208)[iVar0 /*8*/])->f_6)
		{
			((*Global_1182208)[iVar0 /*8*/])->f_5 = iParam0;
			((*Global_1182208)[iVar0 /*8*/])->f_1 = iParam1;
			((*Global_1182208)[iVar0 /*8*/])->f_2 = iParam2;
			((*Global_1182208)[iVar0 /*8*/])->f_3 = iParam3;
			((*Global_1182208)[iVar0 /*8*/])->f_4 = iParam4;
			((*Global_1182208)[iVar0 /*8*/])->f_6 = 1;
			return;
		}
		iVar0++;
	}
}

void func_1045()
{
	PED::SET_PED_CONFIG_FLAG(Global_1275573->f_8, 305, true);
	PED::_0x05CE6AF4DF071D23(Global_1275573->f_8, 0.7f);
}

char* func_1046(int iParam0)
{
	switch (iParam0)
	{
		case -1822335806:
			return "Head_Shot_Ricco";
		default:
			break;
	}
	return "";
}

char* func_1047(int iParam0)
{
	switch (iParam0)
	{
		case -1822335806:
			return "RDRO_Ability_Cards_SFX_Sounds";
		default:
			break;
	}
	return "";
}

int func_1048(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;
	int iVar7;

	Var0 = -178401592;
	Var0.f_1 = iParam0;
	Var0.f_2 = joaat("name");
	Var0.f_3 = 1;
	Var0.f_4 = iParam1;
	DATAFILE::_0x91DED5DD64BB2691(&Var0);
	if (DATAFILE::_0x44B3A36933AC009C(&iVar7, &Var0, joaat("name")))
	{
		*uParam2 = iParam0;
		uParam2->f_9 = iParam1;
		StringCopy(&(uParam2->f_1), "", 64);
		StringIntConCat(&(uParam2->f_1), iVar7, 64);
		DATAFILE::_0x44B3A36933AC009C(&iVar7, &Var0, joaat("type"));
		uParam2->f_10.f_3 = func_1053(iVar7);
		uParam2->f_14.f_3 = uParam2->f_10.f_3;
		uParam2->f_18.f_3 = uParam2->f_10.f_3;
		switch (uParam2->f_10.f_3)
		{
			case 0:
				if (!DATAFILE::_0x52FC26D2D2FC2987(&(uParam2->f_10), &Var0, joaat("default")))
				{
				}
				break;
			case 1:
				if (!DATAFILE::_0xB2B42607F7867576(&(uParam2->f_10.f_1), &Var0, joaat("default")))
				{
				}
				break;
			case 2:
				if (!DATAFILE::_0xA63CD20F19B961AB(&(uParam2->f_10.f_2), &Var0, joaat("default")))
				{
				}
				break;
		}
		switch (uParam2->f_14.f_3)
		{
			case 0:
				DATAFILE::_0x52FC26D2D2FC2987(&(uParam2->f_14), &Var0, joaat("min"));
				break;
			case 1:
				DATAFILE::_0xB2B42607F7867576(&(uParam2->f_14.f_1), &Var0, joaat("min"));
				break;
			case 2:
				DATAFILE::_0xA63CD20F19B961AB(&(uParam2->f_14.f_2), &Var0, joaat("min"));
				break;
		}
		switch (uParam2->f_18.f_3)
		{
			case 0:
				DATAFILE::_0x52FC26D2D2FC2987(&(uParam2->f_18), &Var0, joaat("max"));
				break;
			case 1:
				DATAFILE::_0xB2B42607F7867576(&(uParam2->f_18.f_1), &Var0, joaat("max"));
				break;
			case 2:
				DATAFILE::_0xA63CD20F19B961AB(&(uParam2->f_18.f_2), &Var0, joaat("max"));
				break;
		}
		switch (uParam2->f_10.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		switch (uParam2->f_14.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		switch (uParam2->f_18.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		return 1;
	}
	return 0;
}

bool func_1049()
{
	return Global_1572887->f_6;
}

int func_1050()
{
	if (!&Global_1048577)
	{
		return 0;
	}
	if (!func_214(func_127(0)))
	{
		return 0;
	}
	if (&Global_3145858 != -504335712)
	{
		return 0;
	}
	if (func_940(Global_524288->f_39792))
	{
		return 1;
	}
	return 0;
}

bool func_1051(var uParam0)
{
	if (func_1054(uParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, uParam0) != 1)
		{
			func_1055(uParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, uParam0) == 1;
}

bool func_1052(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1099294->f_3 && iParam0) != 0;
	}
	return (((*Global_1097610)[iParam1 /*51*/])->f_3 && iParam0) != 0;
}

int func_1053(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case joaat("int"):
			iVar0 = 0;
			break;
		case joaat("float"):
			iVar0 = 1;
			break;
		case joaat("bool"):
			iVar0 = 2;
			break;
	}
	return iVar0;
}

int func_1054(var uParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), uParam0))
	{
		return 1;
	}
	return 0;
}

void func_1055(var uParam0)
{
	int iVar0;

	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = uParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (!&Global_1275573->f_22[iVar0])
	{
		func_1056(uParam0);
		return;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_1057(iVar0);
	NETWORK::_0x51951DE06C0D1C40(uParam0, 1);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 1;
}

void func_1056(var uParam0)
{
	int iVar0;

	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = uParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] == 0)
	{
		return;
	}
	func_1057(iVar0);
	NETWORK::_0x51951DE06C0D1C40(uParam0, 0);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 0;
}

void func_1057(int iParam0)
{
	if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 != 0)
	{
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = 0;
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 = 0;
	}
}

