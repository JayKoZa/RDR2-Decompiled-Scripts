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
	var uLocal_16 = 0;
	var uLocal_17 = 4;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	bool bLocal_30 = false;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	struct<327> Var0;

	fLocal_13 = 1f;
	fLocal_14 = 1f;
	iLocal_15 = joaat("W_BINOCULAR_INNER01");
	bLocal_30 = true;
	Var0.f_8 = 2;
	Var0.f_8.f_1.f_11 = 2;
	Var0.f_8.f_1.f_18 = 2;
	Var0.f_8.f_1.f_39 = -1;
	Var0.f_8.f_1.f_40.f_11 = 2;
	Var0.f_8.f_1.f_40.f_18 = 2;
	Var0.f_8.f_1.f_40.f_39 = -1;
	Var0.f_89 = 4;
	Var0.f_89.f_1.f_8 = -1;
	Var0.f_89.f_1.f_11 = -1;
	Var0.f_89.f_1.f_15.f_8 = -1;
	Var0.f_89.f_1.f_15.f_11 = -1;
	Var0.f_89.f_1.f_15.f_15.f_8 = -1;
	Var0.f_89.f_1.f_15.f_15.f_11 = -1;
	Var0.f_89.f_1.f_15.f_15.f_15.f_8 = -1;
	Var0.f_89.f_1.f_15.f_15.f_15.f_11 = -1;
	Var0.f_150 = 6;
	Var0.f_150.f_1.f_9 = -1;
	Var0.f_150.f_1.f_13.f_9 = -1;
	Var0.f_150.f_1.f_13.f_13.f_9 = -1;
	Var0.f_150.f_1.f_13.f_13.f_13.f_9 = -1;
	Var0.f_150.f_1.f_13.f_13.f_13.f_13.f_9 = -1;
	Var0.f_150.f_1.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var0.f_229 = 2;
	Var0.f_229.f_1.f_1 = 4;
	Var0.f_229.f_1.f_1.f_1.f_2 = -1;
	Var0.f_229.f_1.f_1.f_1.f_6.f_2 = -1;
	Var0.f_229.f_1.f_1.f_1.f_6.f_6.f_2 = -1;
	Var0.f_229.f_1.f_1.f_1.f_6.f_6.f_6.f_2 = -1;
	Var0.f_229.f_1.f_27.f_1 = 4;
	Var0.f_229.f_1.f_27.f_1.f_1.f_2 = -1;
	Var0.f_229.f_1.f_27.f_1.f_1.f_6.f_2 = -1;
	Var0.f_229.f_1.f_27.f_1.f_1.f_6.f_6.f_2 = -1;
	Var0.f_229.f_1.f_27.f_1.f_1.f_6.f_6.f_6.f_2 = -1;
	Var0.f_287 = -1;
	Var0.f_287.f_1 = -1;
	Var0.f_307 = -1;
	Var0.f_326 = -1;
	Var0.f_304 = ScriptParam_0;
	Var0 = ScriptParam_0.f_1;
	func_1();
	func_2(&Var0);
	while (bLocal_30)
	{
		bLocal_30 = !func_3(&Var0);
		if (func_4(&Var0))
		{
			bLocal_30 = false;
		}
		BUILTIN::WAIT(0);
	}
	func_5(&Var0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
}

void func_2(var uParam0)
{
}

bool func_3(var uParam0)
{
	if (func_6(1, 1))
	{
		return true;
	}
	if (func_8(func_7(), 256, 0))
	{
		func_9(951, 1);
		return true;
	}
	if (!func_10(*uParam0))
	{
		if (func_12(func_11()))
		{
			return true;
		}
		if (func_13())
		{
			return true;
		}
	}
	if (func_14(uParam0))
	{
		func_15(0);
		return true;
	}
	if (func_16() >= 13)
	{
		return true;
	}
	if (func_17(uParam0) != 3 && func_17(uParam0) != 4)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return true;
		}
	}
	if (func_18() == 9)
	{
		return true;
	}
	if (func_12(func_19(0)))
	{
		return true;
	}
	return false;
}

bool func_4(var uParam0)
{
	func_20(uParam0);
	switch (func_17(uParam0))
	{
		case 0:
			func_21(uParam0);
			break;
		case 1:
			if (!func_22(&(uParam0->f_1)))
			{
				func_23(uParam0);
			}
			func_24(uParam0);
			if (!func_25(&(uParam0->f_1)))
			{
				func_26(uParam0);
			}
			break;
		case 2:
			if (!func_22(&(uParam0->f_1)))
			{
				func_27(uParam0);
			}
			func_28(uParam0);
			if (!func_25(&(uParam0->f_1)))
			{
				func_29(uParam0);
			}
			break;
		case 3:
			if (!func_22(&(uParam0->f_1)))
			{
				func_30(uParam0);
			}
			func_31(uParam0);
			if (!func_25(&(uParam0->f_1)))
			{
				func_32(uParam0);
			}
			break;
		case 4:
			if (!func_22(&(uParam0->f_1)))
			{
				func_33(uParam0);
			}
			func_34(uParam0);
			if (!func_25(&(uParam0->f_1)))
			{
				func_35(uParam0);
			}
			break;
		case 5:
			if (!func_22(&(uParam0->f_1)))
			{
				func_36(uParam0);
			}
			func_37(uParam0);
			if (!func_25(&(uParam0->f_1)))
			{
				func_38(uParam0);
			}
			break;
		case 6:
			if (!func_22(&(uParam0->f_1)))
			{
				func_39(uParam0);
			}
			func_40(uParam0);
			if (!func_25(&(uParam0->f_1)))
			{
				func_41(uParam0);
			}
			break;
		case 7:
			return true;
	}
	return false;
}

void func_5(var uParam0)
{
	var uVar0;
	var uVar1;
	int iVar2;

	if (func_17(uParam0) != 7)
	{
		func_42(uParam0);
	}
	if (Global_13)
	{
		Global_13 = 0;
	}
	if (Global_1056141[Global_1296859.f_10 /*471*/].f_41.f_1[*uParam0 /*16*/].f_14)
	{
		Global_1056141[Global_1296859.f_10 /*471*/].f_41.f_1[*uParam0 /*16*/].f_14 = 0;
	}
	if (Global_1056141[Global_1296859.f_10 /*471*/].f_41.f_1[*uParam0 /*16*/].f_15)
	{
		Global_1056141[Global_1296859.f_10 /*471*/].f_41.f_1[*uParam0 /*16*/].f_15 = 0;
	}
	if (uParam0->f_317)
	{
		func_43(uParam0, 0);
	}
	if (MISC::IS_BIT_SET(uParam0->f_305, 7) && MISC::IS_BIT_SET(uParam0->f_305, 19))
	{
		func_44(*uParam0, &uVar0, &uVar1);
		if (uParam0->f_327)
		{
			TELEMETRY::_TELEMETRY_SHOP_CUTSCENE(func_45(*uParam0), uVar0, 0, 0);
		}
		else if (uParam0->f_329)
		{
			TELEMETRY::_TELEMETRY_SHOP_CUTSCENE(func_45(*uParam0), uVar0, 0, 2);
		}
		else
		{
			TELEMETRY::_TELEMETRY_SHOP_CUTSCENE(func_45(*uParam0), uVar0, 0, 1);
		}
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		NETWORK::_0x4B05B97BA46F419D(1);
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, 32, true);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_335))
	{
		VOLUME::_0x5B23DFF8E0948BB2(uParam0->f_335, 0);
		VOLUME::_0xBE551C2CC421185D(uParam0->f_335, 0);
		VOLUME::_DELETE_VOLUME(uParam0->f_335);
	}
	if (func_46(uParam0))
	{
		func_47(uParam0);
	}
	if (6 == *uParam0)
	{
		iVar2 = 0;
		while (iVar2 < uParam0->f_8)
		{
			if (MISC::IS_BIT_SET(uParam0->f_8[iVar2 /*40*/].f_1, 6))
			{
				func_48();
			}
			iVar2++;
		}
	}
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

struct<2> func_7()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

bool func_8(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265377.f_124517.f_135 & 8 != 0)
	{
		Global_1071686.f_28351 = 1;
		return true;
	}
	if (func_12(Global_1051213) && !func_49(Global_1051213, Param0))
	{
		Global_1071686.f_28351 = 2;
		return true;
	}
	if (iParam2 != 0 && func_50(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_51(iParam3, 255))
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
	if (func_13())
	{
		Global_1071686.f_28351 = 7;
		return true;
	}
	if (Global_1572887.f_7 & 1 != 0)
	{
		if (!func_12(Global_1051213))
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

void func_9(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_52(iParam0, &iVar0, &iVar1);
	if (!func_53(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_54(iVar0, iVar1);
}

bool func_10(var uParam0)
{
	return false;
}

struct<2> func_11()
{
	if (Global_1196205.f_129 <= 0)
	{
		return func_19(0);
	}
	if (Global_1196205.f_130 < 0 || Global_1196205.f_131 == 0)
	{
		return func_19(0);
	}
	return Global_1196205[Global_1196205.f_130 /*4*/].f_1;
}

bool func_12(struct<2> Param0)
{
	if (!func_55(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_56(Param0))
	{
		return false;
	}
	return true;
}

bool func_13()
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
	if (!func_12(Global_1051213) && Global_1572887.f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_14(var uParam0)
{
	switch (func_57())
	{
		case 1:
			if (MISC::IS_BIT_SET(uParam0->f_305, 5))
			{
				return true;
			}
			break;
		case 2:
			if (MISC::IS_BIT_SET(uParam0->f_305, 4))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_15(int iParam0)
{
	Global_1293332.f_10 = iParam0;
}

int func_16()
{
	return Global_1572887.f_266;
}

int func_17(var uParam0)
{
	return uParam0->f_1;
}

int func_18()
{
	return Global_1915715.f_20241;
}

struct<2> func_19(int iParam0)
{
	return Global_1900736.f_1[iParam0 /*2*/];
}

void func_20(var uParam0)
{
	if (uParam0->f_306 >= 3)
	{
		uParam0->f_306 = 0;
		return;
	}
	uParam0->f_306++;
}

void func_21(var uParam0)
{
	func_58(uParam0);
}

bool func_22(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_4, *uParam0);
}

void func_23(var uParam0)
{
	func_59(&(uParam0->f_1));
	func_60(uParam0, *uParam0);
	func_61(*uParam0);
	if (*uParam0 != 5 && *uParam0 != 8)
	{
		func_62(uParam0);
	}
	func_63(uParam0);
}

void func_24(var uParam0)
{
	if (*uParam0 == 5 || *uParam0 == 8)
	{
		func_62(uParam0);
	}
	if (!func_64(uParam0))
	{
		return;
	}
	func_58(uParam0);
}

bool func_25(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_5, *uParam0);
}

void func_26(var uParam0)
{
	func_65(&(uParam0->f_1));
}

void func_27(var uParam0)
{
	func_59(&(uParam0->f_1));
}

void func_28(var uParam0)
{
	func_66(uParam0);
	func_67(uParam0);
	if (!func_68(uParam0))
	{
		return;
	}
	func_69(0);
	if (!func_70(uParam0))
	{
		return;
	}
	if (!func_71(uParam0))
	{
		return;
	}
	if (!func_72(uParam0))
	{
		return;
	}
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	if (CAM::_0xA2B1C7EF759A63CE() < 1f)
	{
		return;
	}
	func_58(uParam0);
}

void func_29(var uParam0)
{
	func_65(&(uParam0->f_1));
}

void func_30(var uParam0)
{
	func_59(&(uParam0->f_1));
	func_73(*uParam0);
	func_74(uParam0, 0);
	if (MISC::IS_BIT_SET(uParam0->f_305, 6))
	{
		func_75(uParam0);
	}
}

void func_31(var uParam0)
{
	if (!MISC::IS_BIT_SET(uParam0->f_305, 2))
	{
		func_76(uParam0);
		if (MISC::IS_BIT_SET(uParam0->f_305, 2))
		{
			if (!uParam0->f_317)
			{
				func_43(uParam0, 1);
				func_77(uParam0);
				func_78(1);
			}
		}
		return;
	}
	func_79(uParam0);
	func_80(uParam0);
	if (MISC::IS_BIT_SET(uParam0->f_305, 7))
	{
		func_81(uParam0);
	}
	if (!MISC::IS_BIT_SET(uParam0->f_305, 3))
	{
		func_82(uParam0);
	}
	func_83(uParam0);
	if (func_46(uParam0))
	{
		func_47(uParam0);
	}
	func_84(0, 0, 1);
	if (!func_85(uParam0) && !func_86(uParam0))
	{
		return;
	}
	func_58(uParam0);
}

void func_32(var uParam0)
{
	struct<4> Var0;

	func_65(&(uParam0->f_1));
	func_87(*uParam0, &Var0, 0, 0);
	if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Var0.f_3, 2f))
	{
		MISC::CLEAR_BIT(&(uParam0->f_305), 18);
	}
	func_43(uParam0, 0);
	func_88(&(uParam0->f_320));
	func_74(uParam0, 1);
	if (func_89(uParam0->f_319))
	{
		func_90(&(uParam0->f_319), 1, 1);
	}
	if (func_89(uParam0->f_324))
	{
		func_90(&(uParam0->f_324), 1, 1);
	}
	if (func_89(uParam0->f_325))
	{
		func_90(&(uParam0->f_325), 1, 1);
	}
	func_91(uParam0, 1);
}

void func_33(var uParam0)
{
	func_59(&(uParam0->f_1));
	func_92(uParam0);
}

void func_34(var uParam0)
{
	func_84(0, 0, 1);
	func_93();
	if (!func_94(uParam0))
	{
		return;
	}
	func_58(uParam0);
}

void func_35(var uParam0)
{
	func_65(&(uParam0->f_1));
	func_95(uParam0);
	MISC::CLEAR_BIT(&(uParam0->f_305), 2);
}

void func_36(var uParam0)
{
	func_59(&(uParam0->f_1));
}

void func_37(var uParam0)
{
	vector3 vVar0;
	struct<8> Var3;

	func_93();
	if (!MISC::IS_BIT_SET(uParam0->f_305, 18))
	{
		func_58(uParam0);
		return;
	}
	if (!MISC::IS_BIT_SET(uParam0->f_305, 2))
	{
		NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(1, 0, 256);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
		vVar0 = { func_96(*uParam0, 0, PED::IS_PED_MALE(Global_34)) };
		func_87(*uParam0, &Var3, 0, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_316, &vVar0, Global_34, 0);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_316, Var3.f_3, 0f, 0f, Var3.f_7, 2);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_316);
		MISC::SET_BIT(&(uParam0->f_305), 2);
	}
	else
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(500);
		}
		if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(uParam0->f_316) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_316, false))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			func_58(uParam0);
		}
	}
}

void func_38(var uParam0)
{
	func_65(&(uParam0->f_1));
}

void func_39(var uParam0)
{
	func_59(&(uParam0->f_1));
	func_61(*uParam0);
	if (!MISC::IS_BIT_SET(uParam0->f_305, 11))
	{
		func_91(uParam0, 0);
	}
	else if (!MISC::IS_BIT_SET(uParam0->f_305, 10))
	{
		func_91(uParam0, 0);
	}
	else
	{
		func_97(1);
		Global_1293332.f_11 = 1;
	}
}

void func_40(var uParam0)
{
	bool bVar0;

	func_84(0, 0, 1);
	bVar0 = true;
	if (!func_42(uParam0))
	{
		bVar0 = false;
	}
	if (!MISC::IS_BIT_SET(uParam0->f_305, 0))
	{
		if (!func_98(*uParam0))
		{
			bVar0 = false;
		}
	}
	func_99(uParam0);
	if (bVar0)
	{
		func_100(*uParam0, 0);
		func_101(*uParam0, 1);
		func_102(uParam0);
		func_103(uParam0);
		func_58(uParam0);
	}
}

void func_41(var uParam0)
{
	func_65(&(uParam0->f_1));
}

bool func_42(var uParam0)
{
	if (!func_104(uParam0))
	{
		return false;
	}
	if (!func_105(uParam0))
	{
		return false;
	}
	func_106(uParam0);
	func_107(uParam0);
	if (PED::_0x62DE46F061CAA468() > 0)
	{
		PED::_0x7D4E70A67A651C71(5);
	}
	return true;
}

void func_43(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_108(1);
		func_109();
		WEAPON::_HIDE_PED_WEAPONS(Global_1296859.f_8, 2, true);
		PAD::_0xF239400E16C23E08(0, 0);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_1296859.f_8, false, true);
		UIFEED::_0xDD1232B332CBB9E7(7, 1, 0);
		if (func_110())
		{
			func_48();
		}
		func_111();
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
		if (func_112() || PED::_0x50F124E6EF188B22(Global_1296859.f_8))
		{
			func_113(1);
			func_114();
			if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
		}
		func_115();
		Global_13 = 1;
		func_116(Global_1296859.f_8);
		if (func_117(Global_1296859.f_8))
		{
			uParam0->f_323 = func_118(Global_1296859.f_8);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_1296859.f_8, true, true);
		}
		func_119(0);
		uParam0->f_317 = 1;
		HUD::_HIDE_HUD_COMPONENT(-1319249689);
		NETWORK::_0x4B05B97BA46F419D(0);
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, 32, true);
		func_120(0, 28);
	}
	else
	{
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Global_1296859.f_8, true);
		PAD::_0xA0CEFCEA390AAB9B(0);
		func_108(0);
		func_121();
		Global_13 = 0;
		func_119(1);
		uParam0->f_317 = 0;
		HUD::_DISPLAY_HUD_COMPONENT(-1319249689);
		if (!MISC::IS_BIT_SET(uParam0->f_305, 18))
		{
			NETWORK::_0x4B05B97BA46F419D(1);
			NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, 32, true);
		}
		func_120(1, 2);
	}
}

bool func_44(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = 0;
	switch (iParam0)
	{
		case 3:
		default:
			*iParam2 = 0;
			return false;
			*iParam1 = joaat("DOCUMENT_BOUNTY_HUNTER_LICENSE");
			*iParam2 = 1;
			return true;
		case 4:
			*iParam1 = joaat("UPGRADE_CAMP_BUTCHER_TABLE");
			*iParam2 = 1;
			return true;
		case 5:
			*iParam1 = joaat("KIT_COLLECTORS_BAG");
			*iParam2 = 1;
			return true;
		case 6:
			*iParam1 = 1384535894;
			*iParam2 = 1;
			return true;
		case 7:
			*iParam1 = joaat("KIT_ROLE_NATURALIST_SAMPLE_KIT");
			*iParam2 = 1;
			return true;
	}
}

int func_45(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("CUTSCENE_MPCGOI1");
		case 2:
			return joaat("CUTSCENE_MPCGOI2");
		case 3:
			return -732709691;
		case 4:
			return 1691387227;
		case 5:
			return -969278268;
		case 6:
			return joaat("CUTSCENE_MPRM1");
		case 7:
			return 317202356;
		case 8:
			return 2111135919;
		default:
			break;
	}
	return 0;
}

bool func_46(var uParam0)
{
	return uParam0->f_284 != 0;
}

void func_47(var uParam0)
{
	if (uParam0->f_284 == 0)
	{
		return;
	}
	_NAMESPACE77::_0x00A15B94CBA4F76F(uParam0->f_284);
	uParam0->f_284 = 0;
}

void func_48()
{
	func_122(0);
}

bool func_49(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_50(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return (Global_1197740.f_1 && iParam0) != 0;
}

bool func_51(int iParam0, int iParam1)
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

void func_52(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_53(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_123(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_124(iParam0))
	{
		return false;
	}
	if (func_125(iParam0))
	{
		return false;
	}
	if ((Global_1900736.f_67 && !func_126(iParam0, 1)) || func_127(32768))
	{
		if (!func_126(iParam0, 262144) || !Global_1904651.f_8686)
		{
			return false;
		}
	}
	if (!func_128())
	{
		return false;
	}
	return true;
}

void func_54(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904651[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904651[iParam0] = uVar0;
}

bool func_55(int iParam0)
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

int func_56(int iParam0)
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

int func_57()
{
	int iVar0;

	iVar0 = PLAYER::INT_TO_PLAYERINDEX(Global_1296859.f_16);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 0;
	}
	if (func_129(Global_1296859.f_16))
	{
		return 1;
	}
	return 2;
}

void func_58(var uParam0)
{
	int iVar0;

	uParam0->f_1.f_1 = uParam0->f_1;
	MISC::SET_BIT(&(uParam0->f_1.f_5), uParam0->f_1.f_1);
	MISC::CLEAR_BIT(&(uParam0->f_1.f_4), uParam0->f_1.f_1);
	iVar0 = uParam0->f_1;
	iVar0++;
	uParam0->f_1 = iVar0;
	if (uParam0->f_1 == 8)
	{
		uParam0->f_1 = 7;
	}
	Global_1056141[Global_1296859.f_10 /*471*/].f_41.f_1[*uParam0 /*16*/] = uParam0->f_1;
}

void func_59(var uParam0)
{
	MISC::SET_BIT(&(uParam0->f_4), *uParam0);
}

int func_60(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
		default:
			return 0;
			uParam0->f_298 = { -870.1846f, -1276.62f, 42.2367f };
			uParam0->f_297 = VOLUME::_CREATE_VOLUME_BOX(-871.3538f, -1273.499f, 42.87627f, 0f, 0f, 0f, 11.8675f, 12.9474f, 8.828214f);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_3), "cutscene@mpgvo_int1", 64);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_11[0 /*3*/]), "1-Male", 24);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_11[1 /*3*/]), "2-Female", 24);
			uParam0->f_8[0 /*40*/].f_33 = { -874.35f, -1335.12f, 42.38f };
			uParam0->f_8[0 /*40*/].f_36 = { 0f, 0f, 0f };
			uParam0->f_8[0 /*40*/].f_2 = 256;
			MISC::SET_BIT(&(uParam0->f_8[0 /*40*/].f_1), 2);
			return 1;
		case 2:
			uParam0->f_298 = { -870.1846f, -1276.62f, 42.2367f };
			uParam0->f_297 = VOLUME::_CREATE_VOLUME_BOX(-871.3538f, -1273.499f, 42.87627f, 0f, 0f, 0f, 11.8675f, 12.9474f, 8.828214f);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_3), "cutscene@mpgvo_int2a", 64);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_11[0 /*3*/]), "1-Male", 24);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_11[1 /*3*/]), "2-Female", 24);
			uParam0->f_8[0 /*40*/].f_33 = { -874.35f, -1335.12f, 42.38f };
			uParam0->f_8[0 /*40*/].f_36 = { 0f, 0f, 0f };
			uParam0->f_8[0 /*40*/].f_2 = 256;
			MISC::SET_BIT(&(uParam0->f_8[0 /*40*/].f_1), 2);
			MISC::SET_BIT(&(uParam0->f_8[0 /*40*/].f_1), 3);
			StringCopy(&(uParam0->f_8[1 /*40*/].f_3), "cutscene@mpgvo_int2b", 64);
			StringCopy(&(uParam0->f_8[1 /*40*/].f_11[0 /*3*/]), "1-Male", 24);
			StringCopy(&(uParam0->f_8[1 /*40*/].f_11[1 /*3*/]), "2-Female", 24);
			uParam0->f_8[1 /*40*/].f_33 = { -874.35f, -1335.12f, 42.38f };
			uParam0->f_8[1 /*40*/].f_36 = { 0f, 0f, 0f };
			uParam0->f_8[1 /*40*/].f_2 = 256;
			MISC::SET_BIT(&(uParam0->f_8[1 /*40*/].f_1), 2);
			MISC::SET_BIT(&(uParam0->f_8[1 /*40*/].f_1), 4);
			return 1;
		case 3:
			uParam0->f_298 = { 1352.95f, -1306.359f, 75.9113f };
			uParam0->f_297 = VOLUME::_CREATE_VOLUME_BOX(uParam0->f_298, 0f, 0f, 0f, 5f, 5f, 5f);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_3), "cutscene@BHINT_INT", 64);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_11[0 /*3*/]), "", 24);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_11[1 /*3*/]), "", 24);
			uParam0->f_8[0 /*40*/].f_33 = { 1359.71f, -1305.96f, 76.768f };
			uParam0->f_8[0 /*40*/].f_36 = { 0f, 0f, 0f };
			uParam0->f_8[0 /*40*/].f_2 = 256;
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[0 /*7*/]), "BHINT_INT_P3_T01_Shot_1", 32);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[0 /*7*/].f_4), "payLater", 24);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[1 /*7*/]), "BHINT_INT_P3_T01_Shot_1", 32);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[1 /*7*/].f_4), "payNow", 24);
			MISC::SET_BIT(&(uParam0->f_8[0 /*40*/].f_1), 2);
			MISC::SET_BIT(&(uParam0->f_8[0 /*40*/].f_1), 5);
			MISC::SET_BIT(&(uParam0->f_305), 7);
			MISC::SET_BIT(&(uParam0->f_305), 12);
			MISC::SET_BIT(&(uParam0->f_305), 14);
			uParam0->f_330 = 15000;
			return 1;
		case 4:
			uParam0->f_298 = { 0f, 0f, 0f };
			StringCopy(&(uParam0->f_8[0 /*40*/].f_3), "cutscene@TRINT_INT", 64);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_11[0 /*3*/]), "", 24);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_11[1 /*3*/]), "", 24);
			uParam0->f_8[0 /*40*/].f_33 = { 0f, 0f, 0f };
			uParam0->f_8[0 /*40*/].f_36 = { 0f, 0f, 0f };
			uParam0->f_8[0 /*40*/].f_2 = 256;
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[0 /*7*/]), "TRINT_INT_P4_T01_Shot_1", 32);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[0 /*7*/].f_4), "payLater", 24);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[1 /*7*/]), "TRINT_INT_P4_T01_Shot_1", 32);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[1 /*7*/].f_4), "payNow", 24);
			uParam0->f_89[0 /*15*/] = joaat("CS_MP_CRIPPS");
			uParam0->f_89[0 /*15*/].f_8 = func_130();
			uParam0->f_89[0 /*15*/].f_2 = { -319.241f, 797.036f, 116.886f };
			uParam0->f_89[0 /*15*/].f_11 = 0;
			StringCopy(&(uParam0->f_89[0 /*15*/].f_11.f_1), "JB_Cripps", 24);
			uParam0->f_89[0 /*15*/].f_9 = joaat("WEAPON_REVOLVER_CATTLEMAN");
			MISC::SET_BIT(&(uParam0->f_8[0 /*40*/].f_1), 2);
			MISC::SET_BIT(&(uParam0->f_8[0 /*40*/].f_1), 5);
			MISC::SET_BIT(&(uParam0->f_305), 7);
			MISC::SET_BIT(&(uParam0->f_305), 9);
			MISC::SET_BIT(&(uParam0->f_305), 11);
			MISC::SET_BIT(&(uParam0->f_305), 12);
			MISC::SET_BIT(&(uParam0->f_305), 14);
			uParam0->f_330 = 15000;
			return 1;
		case 5:
			uParam0->f_298 = { 0f, 0f, 0f };
			StringCopy(&(uParam0->f_8[0 /*40*/].f_3), "cutscene@COINT_INT", 64);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_11[0 /*3*/]), "", 24);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_11[1 /*3*/]), "", 24);
			uParam0->f_8[0 /*40*/].f_33 = { 0f, 0f, 0f };
			uParam0->f_8[0 /*40*/].f_36 = { 0f, 0f, 0f };
			uParam0->f_8[0 /*40*/].f_2 = 256;
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[0 /*7*/]), "COINT_INT_P2A1_T01_Shot_1", 32);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[0 /*7*/].f_4), "payLater", 24);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[1 /*7*/]), "COINT_INT_P2A1_T01_Shot_1", 32);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[1 /*7*/].f_4), "payNow", 24);
			switch (func_131())
			{
				case 135:
					uParam0->f_8[0 /*40*/].f_39 = 0;
					break;
				case 136:
					uParam0->f_8[0 /*40*/].f_39 = 1;
					break;
				case 137:
					uParam0->f_8[0 /*40*/].f_39 = 2;
					break;
				case 138:
					uParam0->f_8[0 /*40*/].f_39 = 3;
					break;
				case 139:
					uParam0->f_8[0 /*40*/].f_39 = 4;
					break;
				case 140:
					uParam0->f_8[0 /*40*/].f_39 = 5;
					break;
				case 141:
					uParam0->f_8[0 /*40*/].f_39 = 6;
					break;
				case 142:
					uParam0->f_8[0 /*40*/].f_39 = 7;
					break;
				case 143:
					uParam0->f_8[0 /*40*/].f_39 = 8;
					break;
				case 144:
					uParam0->f_8[0 /*40*/].f_39 = 9;
					break;
				case 145:
					uParam0->f_8[0 /*40*/].f_39 = 10;
					break;
				case 146:
					uParam0->f_8[0 /*40*/].f_39 = 11;
					break;
			}
			MISC::SET_BIT(&(uParam0->f_8[0 /*40*/].f_1), 2);
			MISC::SET_BIT(&(uParam0->f_8[0 /*40*/].f_1), 5);
			MISC::SET_BIT(&(uParam0->f_305), 7);
			MISC::SET_BIT(&(uParam0->f_305), 9);
			MISC::SET_BIT(&(uParam0->f_305), 12);
			MISC::SET_BIT(&(uParam0->f_305), 14);
			MISC::SET_BIT(&(uParam0->f_305), 20);
			uParam0->f_150[0 /*13*/].f_1 = joaat("MP005_P_MP_SHADYBIRDCAGE01X");
			StringCopy(&(uParam0->f_150[0 /*13*/].f_9.f_1), "Pigeoncage", 24);
			uParam0->f_150[0 /*13*/].f_2 = { -2.8f, 0.86f, 1.7f };
			uParam0->f_150[1 /*13*/].f_1 = joaat("P_CHAIR20X");
			StringCopy(&(uParam0->f_150[1 /*13*/].f_9.f_1), "Nazar_Chair", 24);
			uParam0->f_150[1 /*13*/].f_2 = { -0.66f, -4.02f, -0.07f };
			uParam0->f_150[2 /*13*/].f_1 = joaat("MP005_P_MP_COLLECTORBOX01X");
			StringCopy(&(uParam0->f_150[2 /*13*/].f_9.f_1), "CollectorBox", 24);
			uParam0->f_150[2 /*13*/].f_2 = { 0.26f, -1.98f, 1.04f };
			uParam0->f_150[3 /*13*/].f_1 = joaat("MP005_P_COLLECTORWAGON01_DRAW2");
			StringCopy(&(uParam0->f_150[3 /*13*/].f_9.f_1), "Collector_Drawer_2", 24);
			uParam0->f_150[3 /*13*/].f_2 = { -0.5f, -0.25f, 1.71f };
			uParam0->f_330 = 20000;
			return 1;
		case 6:
			uParam0->f_298 = { 1446.741f, 374.882f, 88.88737f };
			uParam0->f_297 = VOLUME::_CREATE_VOLUME_BOX(uParam0->f_298, 0f, 0f, 0f, 13.868f, 15.947f, 8.828f);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_3), "cutscene@moon_int", 64);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_11[0 /*3*/]), "", 24);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_11[1 /*3*/]), "", 24);
			uParam0->f_8[0 /*40*/].f_33 = { 1447.91f, 371.75f, 88.933f };
			uParam0->f_8[0 /*40*/].f_36 = { 0f, 0f, 0f };
			uParam0->f_8[0 /*40*/].f_2 = 256;
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[0 /*7*/]), "MOON_INT_P2A1_T01_Shot_1", 32);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[0 /*7*/].f_4), "refuse", 24);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[1 /*7*/]), "MOON_INT_P2A1_T01_Shot_1", 32);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[1 /*7*/].f_4), "ACCEPT", 24);
			uParam0->f_89[0 /*15*/] = joaat("CS_MP_CRIPPS");
			uParam0->f_89[0 /*15*/].f_11 = 0;
			StringCopy(&(uParam0->f_89[0 /*15*/].f_11.f_1), "JB_Cripps", 24);
			uParam0->f_89[0 /*15*/].f_8 = func_130();
			uParam0->f_89[0 /*15*/].f_9 = joaat("WEAPON_REVOLVER_CATTLEMAN");
			uParam0->f_89[1 /*15*/] = joaat("CS_MP_MAGGIE");
			uParam0->f_89[1 /*15*/].f_11 = 0;
			StringCopy(&(uParam0->f_89[1 /*15*/].f_11.f_1), "MAGGIE", 24);
			uParam0->f_89[1 /*15*/].f_8 = joaat("META_OUTFIT_DEFAULT");
			MISC::SET_BIT(&(uParam0->f_8[0 /*40*/].f_1), 2);
			MISC::SET_BIT(&(uParam0->f_8[0 /*40*/].f_1), 5);
			MISC::SET_BIT(&(uParam0->f_305), 7);
			MISC::SET_BIT(&(uParam0->f_305), 12);
			MISC::SET_BIT(&(uParam0->f_305), 14);
			MISC::SET_BIT(&(uParam0->f_305), 17);
			uParam0->f_330 = 15000;
			return 1;
		case 7:
			uParam0->f_298 = { -1810.2f, -370.5f, 162.9f };
			StringCopy(&(uParam0->f_8[0 /*40*/].f_3), "cutscene@nat_int", 64);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_11[0 /*3*/]), "", 24);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_11[1 /*3*/]), "", 24);
			uParam0->f_8[0 /*40*/].f_33 = { -1810.2f, -370.6f, 172.336f };
			uParam0->f_8[0 /*40*/].f_36 = { 0f, 0f, 0f };
			uParam0->f_8[0 /*40*/].f_2 = 256;
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[0 /*7*/]), "NAT_INT_P2_T06_Shot_2", 32);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[0 /*7*/].f_4), "decline", 24);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[1 /*7*/]), "NAT_INT_P2_T06_Shot_2", 32);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[1 /*7*/].f_4), "ACCEPT", 24);
			uParam0->f_332 = { -1813.943f, -369.0147f, 315.077f };
			if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_335))
			{
				uParam0->f_335 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), -1809.454f, -370.597f, 163.302f, 0f, 0f, -88.451f, 1.53f, 0.709f, 2.927f);
				VOLUME::_0x5B23DFF8E0948BB2(uParam0->f_335, 1);
				VOLUME::_0xBE551C2CC421185D(uParam0->f_335, 1);
			}
			StringCopy(&(uParam0->f_308), "script@mp@naturalist@nat@ig1_getup", 64);
			MISC::SET_BIT(&(uParam0->f_305), 18);
			MISC::SET_BIT(&(uParam0->f_8[0 /*40*/].f_1), 2);
			MISC::SET_BIT(&(uParam0->f_8[0 /*40*/].f_1), 5);
			MISC::SET_BIT(&(uParam0->f_305), 12);
			MISC::SET_BIT(&(uParam0->f_305), 14);
			MISC::SET_BIT(&(uParam0->f_305), 7);
			MISC::SET_BIT(&(uParam0->f_305), 17);
			uParam0->f_330 = 15000;
			return 1;
		case 8:
			uParam0->f_298 = { 0f, 0f, 0f };
			StringCopy(&(uParam0->f_8[0 /*40*/].f_3), "cutscene@har_mcs1", 64);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_11[0 /*3*/]), "har_mcs1", 24);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_11[1 /*3*/]), "", 24);
			uParam0->f_8[0 /*40*/].f_33 = { 0f, 0f, 0f };
			uParam0->f_8[0 /*40*/].f_36 = { 0f, 0f, 0f };
			uParam0->f_8[0 /*40*/].f_2 = 256;
			uParam0->f_150[0 /*13*/].f_1 = joaat("MP007_P_MP_TONICBOX01X");
			StringCopy(&(uParam0->f_150[0 /*13*/].f_9.f_1), "Harriet_Tonic_Box", 24);
			uParam0->f_150[0 /*13*/].f_2 = { Vector(73.58f, -2132.97f, -2182.84f) - Vector(73.1032f, -2132.664f, -2182.447f) };
			MISC::SET_BIT(&(uParam0->f_8[0 /*40*/].f_1), 2);
			MISC::SET_BIT(&(uParam0->f_305), 12);
			MISC::SET_BIT(&(uParam0->f_305), 14);
			MISC::SET_BIT(&(uParam0->f_305), 9);
			MISC::SET_BIT(&(uParam0->f_305), 20);
			return 1;
	}
}

void func_61(int iParam0)
{
	if (!func_132(iParam0))
	{
		return;
	}
	if (Global_1056141[Global_1296859 /*471*/].f_41.f_1[iParam0 /*16*/].f_2 != -1)
	{
		Global_1056141[Global_1296859 /*471*/].f_41.f_1[iParam0 /*16*/].f_2 = -1;
	}
}

int func_62(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;

	if (MISC::IS_BIT_SET(uParam0->f_305, 9) && func_133(uParam0->f_298))
	{
		if (!func_134(*uParam0, &vVar0, &vVar3, 1))
		{
		}
		else
		{
			if (func_135(uParam0->f_298, vVar0))
			{
				return 0;
			}
			uParam0->f_298 = { vVar0 };
			uParam0->f_301 = { vVar3 };
			iVar6 = 0;
			while (iVar6 < 2)
			{
				uParam0->f_8[iVar6 /*40*/].f_33 = { vVar0 };
				uParam0->f_8[iVar6 /*40*/].f_36 = { vVar3 };
				iVar6++;
			}
			return 1;
		}
	}
	else if (func_133(uParam0->f_298))
	{
	}
	return 0;
}

void func_63(var uParam0)
{
	vector3 vVar0;

	switch (*uParam0)
	{
		case 4:
		default:
			break;
	}
	return;
	vVar0 = { func_136(Global_1296859) };
	switch (vVar0.y)
	{
		case joaat("CUMBERLAND_FOREST_CAMP"):
		case joaat("GRIZZLIES_CAMP"):
		case joaat("HEARTLAND_CAMP"):
		case joaat("BIG_VALLEY_CAMP"):
		default:
			return;
			StringCopy(&(uParam0->f_8[0 /*40*/].f_3), "cutscene@TRINT_INT", 64);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[0 /*7*/]), "TRINT_INT_P4_T01_Shot_1", 32);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[1 /*7*/]), "TRINT_INT_P4_T01_Shot_1", 32);
			uParam0->f_89[0 /*15*/].f_2 = { -319.241f, 797.036f, 116.886f };
		case joaat("HENNIGANS_STEAD_CAMP"):
		case joaat("RIO_BRAVO_CAMP"):
		case joaat("GREAT_PLAINS_CAMP"):
		case joaat("TALL_TREES_CAMP"):
		case joaat("CHOLLA_SPRINGS_CAMP"):
		case joaat("GAPTOOTH_RIDGE_CAMP"):
			StringCopy(&(uParam0->f_8[0 /*40*/].f_3), "cutscene@TRINT_INTB", 64);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[0 /*7*/]), "TRINT_INT_P4B1_T01_Shot_1", 32);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[1 /*7*/]), "TRINT_INT_P4B1_T01_Shot_1", 32);
			uParam0->f_89[0 /*15*/].f_2 = { -3682.435f, -2622.561f, -14.402f };
			break;
		case joaat("ROANOKE_RIDGE_CAMP"):
		case joaat("BAYOU_NAWAS_CAMP"):
		case joaat("SCARLETT_MEADOWS_CAMP"):
			StringCopy(&(uParam0->f_8[0 /*40*/].f_3), "cutscene@TRINT_INTC", 64);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[0 /*7*/]), "TRINT_INT_P4C1_T01_Shot_1", 32);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[1 /*7*/]), "TRINT_INT_P4C1_T01_Shot_1", 32);
			uParam0->f_89[0 /*15*/].f_2 = { 2823.36f, -1314.97f, 45.76f };
			break;
	}
}

bool func_64(var uParam0)
{
	switch (func_137(uParam0))
	{
		case 0:
			PED::_0xED9582B3DA8F02B4(5);
			func_138(uParam0, 1);
			break;
		case 1:
			if (func_139(uParam0))
			{
				func_138(uParam0, 2);
			}
			break;
		case 2:
			if (func_140(uParam0))
			{
				func_138(uParam0, 3);
			}
			break;
		case 3:
			func_141(uParam0);
			func_138(uParam0, 4);
			break;
		case 4:
			func_138(uParam0, 5);
			break;
		case 5:
			return true;
	}
	return false;
}

void func_65(var uParam0)
{
	MISC::SET_BIT(&(uParam0->f_5), *uParam0);
}

void func_66(var uParam0)
{
	bool bVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (MISC::IS_BIT_SET(uParam0->f_8[iVar1 /*40*/].f_1, 3) || MISC::IS_BIT_SET(uParam0->f_8[iVar1 /*40*/].f_1, 4))
		{
			bVar0 = true;
		}
		iVar1++;
	}
	if (bVar0)
	{
		if (!MISC::IS_BIT_SET(uParam0->f_305, 4) && !MISC::IS_BIT_SET(uParam0->f_305, 5))
		{
			switch (func_57())
			{
				case 2:
					MISC::SET_BIT(&(uParam0->f_305), 5);
					break;
				case 1:
					MISC::SET_BIT(&(uParam0->f_305), 4);
					break;
			}
		}
	}
}

void func_67(var uParam0)
{
	struct<19> Var0;
	char* sVar19;
	char* sVar20;
	int iVar21;
	int iVar22;

	switch (func_142(uParam0))
	{
		case 0:
			break;
		case 1:
			if (func_143(uParam0) == 0)
			{
				func_144(uParam0, 0);
				return;
			}
			switch (func_143(uParam0))
			{
				case 1:
					sVar19 = "MP_FLOW_CUTSCENE_ALERT_TITLE_LEADER";
					sVar20 = "MP_FLOW_CUTSCENE_ALERT_SUB_LEADER";
					break;
				case 3:
					sVar19 = "MP_FLOW_CUTSCENE_ALERT_TITLE_WANTED";
					sVar20 = "MP_FLOW_CUTSCENE_ALERT_SUB_WANTED";
					break;
				case 2:
					sVar19 = "MP_FLOW_CUTSCENE_ALERT_TITLE_IN_PROGRESS";
					sVar20 = "MP_FLOW_CUTSCENE_ALERT_SUB_IN_PROGRESS";
					break;
			}
			Var0.f_7.f_3 = 1;
			Var0.f_7 = joaat("IB_EXIT");
			func_145(uParam0, Var0, sVar19, sVar20);
			func_144(uParam0, 2);
			break;
		case 2:
			if (!func_46(uParam0))
			{
				return;
			}
			iVar21 = func_146();
			if (iVar21 != -1577439368)
			{
				iVar22 = PED::GET_MOUNT(Global_1296859.f_8);
				if (ENTITY::DOES_ENTITY_EXIST(iVar22))
				{
					func_147(iVar22, 1, 1);
				}
				func_148(Global_1296859.f_17, 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 1, 1);
				func_47(uParam0);
				func_144(uParam0, 3);
			}
			break;
		case 3:
			if (func_149(255) == 1)
			{
				func_144(uParam0, 0);
				func_150(uParam0, 0);
			}
			break;
	}
}

bool func_68(var uParam0)
{
	bool bVar0;

	if (!func_151(*uParam0))
	{
		bVar0 = true;
		if (func_152(*uParam0))
		{
			if (Global_1296859.f_16 != Global_1296859)
			{
				bVar0 = false;
			}
		}
		if (func_153(uParam0) && bVar0)
		{
			if (func_154())
			{
				return true;
			}
		}
		return false;
	}
	if (Global_1296859.f_16 == Global_1296859 || !GANG::_0x0F99F6436528A089(Global_1296859.f_15))
	{
		if (func_155(*uParam0) || func_153(uParam0))
		{
			if (func_154())
			{
				return true;
			}
		}
	}
	else if (GANG::_0x0F99F6436528A089(Global_1296859.f_15))
	{
		if (Global_1296859.f_16 >= 32 || Global_1296859.f_16 < 0)
		{
			return false;
		}
		if (func_156(*uParam0, PLAYER::INT_TO_PLAYERINDEX(Global_1296859.f_16)) == 3)
		{
			if (!func_157(*uParam0))
			{
				return true;
			}
			else if (func_153(uParam0))
			{
				func_158(uParam0, 2);
			}
		}
		else if (func_153(uParam0))
		{
			if (!func_159())
			{
				if (!PED::_IS_PED_HOGTIED(Global_1296859.f_8))
				{
					func_158(uParam0, 1);
				}
			}
		}
	}
	return false;
}

void func_69(bool bParam0)
{
	if (func_160(bParam0))
	{
		func_161(func_18(), 0);
	}
}

bool func_70(var uParam0)
{
	if (!Global_1296859.f_22[Global_1296859])
	{
		return false;
	}
	if (func_162())
	{
		return false;
	}
	if (!func_163(255))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(Global_1296859.f_8))
	{
		return false;
	}
	if (PED::_IS_PED_HOGTIED(Global_1296859.f_8))
	{
		TASK::_0x79559BAD83CCD038(Global_1296859.f_8, 3, 0, 0, 0, 1090519040 /* Float: 8f */);
		return false;
	}
	if (func_164(Global_1296859.f_10, 1, 0, 1))
	{
		if (Global_1296859.f_16 == Global_1296859)
		{
			func_158(uParam0, 3);
		}
		return false;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_1296859.f_8, true))
	{
		return false;
	}
	if (Global_1108365.f_935.f_28 == 6)
	{
		return false;
	}
	if (func_160(0))
	{
		return false;
	}
	if (func_149(255) != 1)
	{
		return false;
	}
	return true;
}

bool func_71(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5[2];
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;

	switch (func_165(uParam0))
	{
		case 0:
			func_166(uParam0);
			func_167(uParam0, 1);
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < 2)
			{
				if (!func_168(uParam0, iVar0))
				{
				}
				else
				{
					if (MISC::IS_BIT_SET(uParam0->f_8[iVar0 /*40*/].f_1, 3))
					{
						switch (func_57())
						{
							case 2:
								Jump @353; //curOff = 144
								Jump @154; //curOff = 147
								return false;
							}
							else if (MISC::IS_BIT_SET(uParam0->f_8[iVar0 /*40*/].f_1, 4))
							{
								switch (func_57())
								{
									case 1:
										Jump @353; //curOff = 197
										Jump @207; //curOff = 200
										return false;
									}
									iVar2 = 0;
									while (iVar2 < 4)
									{
										if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_89[iVar2 /*15*/].f_1))
										{
										}
										else if (uParam0->f_89[iVar2 /*15*/].f_11 == -1)
										{
										}
										else if (uParam0->f_89[iVar2 /*15*/].f_11 != iVar0)
										{
										}
										else if (MISC::_IS_STRING_SPACE(&(uParam0->f_89[iVar2 /*15*/].f_11.f_1)))
										{
										}
										else
										{
											ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_89[iVar2 /*15*/].f_1, false);
											ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_8[iVar0 /*40*/], &(uParam0->f_89[iVar2 /*15*/].f_11.f_1), uParam0->f_89[iVar2 /*15*/].f_1, 0);
										}
										iVar2++;
									}
								}
								iVar0++;
							}
							func_167(uParam0, 2);
							break;
						case 2:
							iVar0 = 0;
							while (iVar0 < 2)
							{
								if (!func_168(uParam0, iVar0))
								{
								}
								else
								{
									if (MISC::IS_BIT_SET(uParam0->f_8[iVar0 /*40*/].f_1, 3))
									{
										switch (func_57())
										{
											case 2:
												Jump @579; //curOff = 436
												Jump @446; //curOff = 439
												return false;
											}
											else if (MISC::IS_BIT_SET(uParam0->f_8[iVar0 /*40*/].f_1, 4))
											{
												switch (func_57())
												{
													case 1:
														Jump @579; //curOff = 489
														Jump @499; //curOff = 492
														return false;
													}
													if (!MISC::IS_BIT_SET(uParam0->f_8[iVar0 /*40*/].f_1, 1))
													{
													}
													else if (!MISC::IS_BIT_SET(uParam0->f_8[iVar0 /*40*/].f_1, 2))
													{
													}
													else
													{
														uParam0->f_229[iVar0 /*27*/] = func_169(*uParam0, iVar0);
														if (!SCRIPTS::_0x179A6F0EE2E79026(&(uParam0->f_229[iVar0 /*27*/])))
														{
														}
														else
														{
															iVar0++;
															iVar0 = 0;
															while (iVar0 < 2)
															{
																if (!func_168(uParam0, iVar0))
																{
																}
																else
																{
																	iVar1 = 0;
																	while (iVar1 < 32)
																	{
																		if (!SCRIPTS::_0x72B2E00C9BAC6789(&(uParam0->f_229[iVar0 /*27*/]), iVar1))
																		{
																		}
																		else
																		{
																			iVar3++;
																		}
																		iVar1++;
																	}
																	uParam0->f_229[iVar0 /*27*/].f_26 = iVar3;
																	iVar3 = 0;
																}
																iVar0++;
															}
															func_167(uParam0, 3);
															Jump @1791; //curOff = 689
															iVar0 = 0;
															while (iVar0 < 2)
															{
																if (!func_168(uParam0, iVar0))
																{
																	iVar5[iVar0] = 1;
																}
																else if (!func_151(*uParam0))
																{
																	iVar8 = PLAYER::INT_TO_PLAYERINDEX(Global_1296859);
																	if (SCRIPTS::_0x72B2E00C9BAC6789(&(uParam0->f_229[iVar0 /*27*/]), iVar1))
																	{
																		if (func_170(uParam0, iVar8, iVar0, 0))
																		{
																			SCRIPTS::_0xD426E2E3288469D6(&(uParam0->f_229[iVar0 /*27*/]), iVar1);
																		}
																		else
																		{
																			Jump @802; //curOff = 792
																			iVar5[iVar0] = 1;
																			Jump @1301; //curOff = 802
																			if (MISC::IS_BIT_SET(uParam0->f_8[iVar0 /*40*/].f_1, 3))
																			{
																				switch (func_57())
																				{
																					case 2:
																						iVar5[iVar0] = 1;
																						Jump @1301; //curOff = 852
																						Jump @862; //curOff = 855
																						return false;
																					}
																					else if (MISC::IS_BIT_SET(uParam0->f_8[iVar0 /*40*/].f_1, 4))
																					{
																						switch (func_57())
																						{
																							case 1:
																								iVar5[iVar0] = 1;
																								Jump @1301; //curOff = 912
																								Jump @922; //curOff = 915
																								return false;
																							}
																							iVar2 = 0;
																							iVar1 = 0;
																							while (iVar1 < 4)
																							{
																								if (func_171(uParam0, iVar0, iVar1, 0))
																								{
																									if (func_172(uParam0, iVar0, iVar1))
																									{
																										if (!uParam0->f_229[iVar0 /*27*/].f_1[iVar1 /*6*/].f_1)
																										{
																											PED::_SET_PED_COMPONENT_DISABLED(uParam0->f_229[iVar0 /*27*/].f_1[iVar1 /*6*/], joaat("HOLSTERS_LEFT"), 1);
																											PED::_UPDATE_PED_VARIATION(uParam0->f_229[iVar0 /*27*/].f_1[iVar1 /*6*/], false, true, true, true, false);
																											uParam0->f_229[iVar0 /*27*/].f_1[iVar1 /*6*/].f_1 = 1;
																										}
																										else
																										{
																											iVar2++;
																											Jump @1060; //curOff = 1054
																											Jump @1067; //curOff = 1057
																											iVar5[iVar0] = 1;
																										}
																										iVar1++;
																										if (iVar2 != uParam0->f_229[iVar0 /*27*/].f_26)
																										{
																											iVar5[iVar0] = 0;
																										}
																										else
																										{
																											iVar5[iVar0] = 1;
																										}
																										else
																										{
																											iVar1 = 0;
																											while (iVar1 < 32)
																											{
																												if (!SCRIPTS::_0x72B2E00C9BAC6789(&(uParam0->f_229[iVar0 /*27*/]), iVar1))
																												{
																												}
																												else
																												{
																													iVar8 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
																													if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar8))
																													{
																													}
																													else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar8))
																													{
																													}
																													else
																													{
																														iVar10 = -1;
																														if (!func_151(*uParam0))
																														{
																															iVar10 = 0;
																														}
																														else
																														{
																															iVar9 = 0;
																															while (iVar9 < 7)
																															{
																																if (Global_1056141[Global_1296859.f_16 /*471*/].f_41.f_1[*uParam0 /*16*/].f_3[iVar9] == iVar8)
																																{
																																	iVar10 = iVar9;
																																}
																																iVar9++;
																															}
																														}
																														if (iVar10 != -1)
																														{
																															if (func_170(uParam0, iVar8, iVar0, iVar10))
																															{
																																SCRIPTS::_0xD426E2E3288469D6(&(uParam0->f_229[iVar0 /*27*/]), iVar1);
																															}
																															else
																															{
																																iVar1++;
																																iVar0++;
																																iVar0 = 0;
																																while (iVar0 < 2)
																																{
																																	if (!iVar5[iVar0])
																																	{
																																		bVar11 = true;
																																	}
																																	iVar0++;
																																}
																																if (!bVar11)
																																{
																																	func_167(uParam0, 4);
																																}
																																Jump @1791; //curOff = 1354
																																iVar0 = 0;
																																while (iVar0 < 2)
																																{
																																	if (!func_168(uParam0, iVar0))
																																	{
																																	}
																																	else
																																	{
																																		if (MISC::IS_BIT_SET(uParam0->f_8[iVar0 /*40*/].f_1, 3))
																																		{
																																			switch (func_57())
																																			{
																																				case 2:
																																					Jump @1650; //curOff = 1421
																																					Jump @1431; //curOff = 1424
																																					return false;
																																				}
																																				else if (MISC::IS_BIT_SET(uParam0->f_8[iVar0 /*40*/].f_1, 4))
																																				{
																																					switch (func_57())
																																					{
																																						case 1:
																																							Jump @1650; //curOff = 1474
																																							Jump @1484; //curOff = 1477
																																							return false;
																																						}
																																						iVar1 = 0;
																																						while (iVar1 < 4)
																																						{
																																							if (!func_171(uParam0, iVar0, iVar1, 1))
																																							{
																																							}
																																							else if (uParam0->f_229[iVar0 /*27*/].f_1[iVar1 /*6*/].f_2 != uParam0->f_8[iVar0 /*40*/])
																																							{
																																							}
																																							else if (MISC::_IS_STRING_SPACE(&(uParam0->f_229[iVar0 /*27*/].f_1[iVar1 /*6*/].f_2.f_1)))
																																							{
																																							}
																																							else
																																							{
																																								ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_229[iVar0 /*27*/].f_1[iVar1 /*6*/], false);
																																								ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_229[iVar0 /*27*/].f_1[iVar1 /*6*/].f_2, &(uParam0->f_229[iVar0 /*27*/].f_1[iVar1 /*6*/].f_2.f_1), uParam0->f_229[iVar0 /*27*/].f_1[iVar1 /*6*/], 0);
																																							}
																																							iVar1++;
																																						}
																																					}
																																					iVar0++;
																																				}
																																				if (MISC::IS_BIT_SET(uParam0->f_305, 20))
																																				{
																																					func_167(uParam0, 5);
																																				}
																																				else
																																				{
																																					func_167(uParam0, 6);
																																				}
																																				Jump @1791; //curOff = 1690
																																				iVar4 = 0;
																																				while (iVar4 <= 5)
																																				{
																																					if (!func_173(uParam0, iVar4))
																																					{
																																					}
																																					else if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_150[iVar4 /*13*/]))
																																					{
																																					}
																																					else
																																					{
																																						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_8[0 /*40*/], &(uParam0->f_150[iVar4 /*13*/].f_9.f_1), uParam0->f_150[iVar4 /*13*/], 0);
																																					}
																																					iVar4++;
																																				}
																																				func_167(uParam0, 6);
																																				Jump @1791; //curOff = 1784
																																				return true;
																																			}
																																			return false;
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
																				}
																			}
																			default:
																				break;
																	}
																}

bool func_72(var uParam0)
{
	var uVar0;

	switch (*uParam0)
	{
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			if (PED::IS_PED_ON_MOUNT(Global_1296859.f_8))
			{
				func_174(&uVar0, 2);
				func_174(&uVar0, 256);
				if (func_175(Global_1296859.f_8, &uVar0, 32, 0, 0, 3f, 100, 0, 0))
				{
					return true;
				}
			}
			else
			{
				return true;
			}
			return false;
	}
	return true;
}

void func_73(int iParam0)
{
	if (!func_132(iParam0))
	{
		return;
	}
	if (Global_1296859.f_16 == Global_1296859 && Global_1056141[Global_1296859 /*471*/].f_41.f_1[iParam0 /*16*/].f_2 == -1)
	{
		Global_1056141[Global_1296859 /*471*/].f_41.f_1[iParam0 /*16*/].f_2 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
}

void func_74(var uParam0, int iParam1)
{
}

void func_75(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<17> Var3;

	iVar1 = 0;
	if (!func_44(*uParam0, &iVar0, &iVar1))
	{
		return;
	}
	iVar2 = func_176(iVar0, 0, 1, -1, 1);
	if (!func_177(iVar0, iVar2, 1))
	{
		return;
	}
	if (func_178(&(uParam0->f_287), iVar0, iVar1, 1, iVar2, -1, 1))
	{
		TELEMETRY::_0xCA9E42F437625A85(uParam0->f_287.f_1, joaat("NET_CUTSCENE"), joaat("NET_CUTSCENE"));
		func_179(iVar0);
		Var3.f_7 = -142743235;
		Var3.f_16 = -1;
		Var3.f_6 = 1;
		if (func_180(iVar0))
		{
			uParam0->f_331 = func_182(func_181(iVar0, 1), iVar2, 0);
		}
		else
		{
			uParam0->f_331 = func_183(iVar0, iVar2, 0);
		}
		Var3.f_16 = func_184(uParam0->f_331);
		func_185(uParam0->f_287.f_1, Var3);
		MISC::SET_BIT(&(uParam0->f_305), 10);
	}
}

void func_76(var uParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_168(uParam0, iVar0))
		{
		}
		else
		{
			if (MISC::IS_BIT_SET(uParam0->f_8[iVar0 /*40*/].f_1, 3))
			{
				if (func_57() != 1)
				{
				}
				else
				{
					Jump @90; //curOff = 58
					if (MISC::IS_BIT_SET(uParam0->f_8[iVar0 /*40*/].f_1, 4))
					{
						if (func_57() != 2)
						{
						}
						else if (!MISC::IS_BIT_SET(uParam0->f_8[iVar0 /*40*/].f_1, 1))
						{
						}
						else if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_8[iVar0 /*40*/], false))
						{
							func_186(uParam0, iVar0);
							ANIMSCENE::START_ANIM_SCENE(uParam0->f_8[iVar0 /*40*/]);
							return;
						}
						else
						{
							bVar1 = true;
							if (MISC::IS_BIT_SET(uParam0->f_305, 15))
							{
								func_91(uParam0, 0);
							}
						}
						iVar0++;
						if (bVar1)
						{
							MISC::SET_BIT(&(uParam0->f_305), 2);
						}
					}
				}
			}
		}
	}
}

void func_77(var uParam0)
{
	vector3 vVar0;

	vVar0 = -1;
	vVar0.f_1 = -1;
	func_187();
	vVar0 = { func_188(*uParam0) };
	if (func_189(vVar0))
	{
		func_190(vVar0, 0);
	}
}

void func_78(int iParam0)
{
	func_191(1);
}

void func_79(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_168(uParam0, iVar0))
		{
		}
		else if (!func_133(uParam0->f_332))
		{
			if (!MISC::IS_BIT_SET(uParam0->f_8[iVar0 /*40*/].f_1, 9))
			{
				iVar1 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_332);
				if (INTERIOR::IS_VALID_INTERIOR(iVar1))
				{
					STREAMING::_0x513F8AA5BF2F17CF(uParam0->f_332, 20f, 0);
					INTERIOR::PIN_INTERIOR_IN_MEMORY(iVar1);
					MISC::SET_BIT(&(uParam0->f_8[iVar0 /*40*/].f_1), 9);
				}
			}
		}
		iVar0++;
	}
}

void func_80(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_168(uParam0, iVar0))
		{
		}
		else if (MISC::IS_BIT_SET(uParam0->f_305, 7))
		{
			if (6 == *uParam0)
			{
				func_192(uParam0, iVar0);
			}
			else
			{
				func_193(uParam0, iVar0);
			}
			func_194(uParam0);
		}
		iVar0++;
	}
}

void func_81(var uParam0)
{
	var uVar0;
	int iVar1;
	var uVar2;
	struct<5> Var6;
	int iVar27;

	iVar1 = 0;
	Var6 = -1;
	Var6.f_4.f_7 = -142743235;
	Var6.f_4.f_16 = -1;
	if (!func_44(*uParam0, &uVar0, &iVar1))
	{
		return;
	}
	if (uParam0->f_287.f_1 == -1)
	{
		return;
	}
	if (!MISC::IS_BIT_SET(uParam0->f_305, 10))
	{
		return;
	}
	iVar27 = func_195(&(uParam0->f_287));
	switch (iVar27)
	{
		case 1:
		case 5:
			break;
		case 2:
		case 4:
			uParam0->f_287.f_1 = -1;
			break;
		case 3:
			if (uParam0->f_331 != 0 && func_196(uParam0->f_287.f_1, &uVar2))
			{
				func_197(uParam0->f_287.f_1, &Var6);
				TELEMETRY::_TELEMETRY_COUPON(&uVar2, func_198(uParam0->f_331), uParam0->f_331, Var6.f_4.f_16, uVar0, joaat("NET_CUTSCENE"));
			}
			uParam0->f_287.f_1 = -1;
			uParam0->f_331 = 0;
			func_199(1);
			break;
	}
}

void func_82(var uParam0)
{
	func_200(uParam0);
	func_201(uParam0);
	func_83(uParam0);
	MISC::SET_BIT(&(uParam0->f_305), 3);
}

void func_83(var uParam0)
{
	int iVar0;

	if (*uParam0 != 5)
	{
		return;
	}
	if (MISC::IS_BIT_SET(uParam0->f_305, 13))
	{
		return;
	}
	if (!func_202(38, &iVar0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	func_203(func_131(), 1);
	ENTITY::SET_ENTITY_VISIBLE(iVar0, false);
	MISC::SET_BIT(&(uParam0->f_305), 13);
}

void func_84(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	Global_1071686.f_7 = 1;
	if ((Global_1296859.f_21 - Global_1071686.f_9) > 2)
	{
		if (bParam2)
		{
			func_204(20f);
		}
	}
	Global_1071686.f_9 = Global_1296859.f_21;
	if (bParam0)
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
		}
		else
		{
			iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
			}
			else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				PED::SET_PED_RESET_FLAG(iVar1, 96, true);
			}
		}
		iVar2++;
	}
	if (func_205())
	{
		NETWORK::_0x236905C700FDB54D();
	}
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 25, true);
	CAM::_0x3C8F74E8FE751614();
	CAM::_0x634F4A0562CF19B8();
	func_206(250);
	if (bParam1)
	{
		HUD::_0x5651516D947ABC53();
	}
}

bool func_85(var uParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_168(uParam0, iVar0))
		{
		}
		else
		{
			if (MISC::IS_BIT_SET(uParam0->f_8[iVar0 /*40*/].f_1, 3))
			{
				switch (func_57())
				{
					case 2:
						Jump @306; //curOff = 69
						Jump @79; //curOff = 72
						return false;
					}
					else if (MISC::IS_BIT_SET(uParam0->f_8[iVar0 /*40*/].f_1, 4))
					{
						switch (func_57())
						{
							case 1:
								Jump @306; //curOff = 122
								Jump @132; //curOff = 125
								return false;
							}
							if (!MISC::IS_BIT_SET(uParam0->f_8[iVar0 /*40*/].f_1, 1))
							{
							}
							else if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_8[iVar0 /*40*/], false))
							{
								if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
								{
									if (MISC::IS_BIT_SET(uParam0->f_305, 14))
									{
										if (!ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_229[iVar0 /*27*/].f_1[0 /*6*/], MISC::GET_HASH_KEY("NotFinalPlaylist")) && func_207(uParam0, iVar0))
										{
											fVar1 = ANIMSCENE::_GET_ANIM_SCENE_DURATION(uParam0->f_8[iVar0 /*40*/]);
											fVar2 = ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_8[iVar0 /*40*/]);
											fVar3 = (fVar1 - fVar2);
											if (fVar3 < 1f)
											{
												CAM::DO_SCREEN_FADE_OUT(500);
											}
										}
									}
								}
							}
							else
							{
								func_208(uParam0);
								return true;
							}
						}
						iVar0++;
					}
					return false;
				}

bool func_86(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char* sVar5;
	bool bVar6;
	int iVar7;

	if (MISC::IS_BIT_SET(uParam0->f_305, 12))
	{
		return false;
	}
	if (!func_209(&(uParam0->f_320)))
	{
		func_210(&(uParam0->f_320), 0);
		return false;
	}
	else if (func_211(&(uParam0->f_320)) < 5000)
	{
		return false;
	}
	if (func_151(*uParam0))
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1296859.f_154[iVar1]))
			{
			}
			else if (!GANG::_0x9BE7DCB22D32CCBE(Global_1296859.f_15, Global_1296859.f_154[iVar1]))
			{
			}
			else
			{
				iVar3 = Global_1296859.f_154[iVar1];
				if (iVar3 == Global_1296859.f_16 && Global_1056141[iVar3 /*471*/].f_41.f_1[*uParam0 /*16*/].f_15)
				{
					bVar0 = true;
				}
				if (Global_1056141[iVar3 /*471*/].f_41.f_1[*uParam0 /*16*/] == 3 || Global_1056141[iVar3 /*471*/].f_41.f_1[*uParam0 /*16*/].f_15)
				{
					if (Global_1056141[iVar3 /*471*/].f_41.f_1[*uParam0 /*16*/].f_14)
					{
						iVar4++;
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else
	{
		iVar2 = 1;
		bVar0 = Global_1056141[Global_1296859.f_10 /*471*/].f_41.f_1[*uParam0 /*16*/].f_15;
	}
	sVar5 = "VOTE_SKIP_CONTEXT";
	if (iVar2 == 1)
	{
		sVar5 = "VOTE_SKIP_CONTEXT_SOLO";
	}
	if (!func_89(uParam0->f_319))
	{
		uParam0->f_319 = func_212(sVar5, joaat("INPUT_SKIP_CUTSCENE"), 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("LONG_TIMED_EVENT"), 0);
		func_213(uParam0->f_319, 6, 1);
		func_214(uParam0->f_319, 19, 1, 1);
		if (iVar2 > 1)
		{
			func_215(uParam0->f_319, sVar5, iVar4, iVar2, 1);
		}
		if (iVar4 == 0)
		{
			func_214(uParam0->f_319, 21, 1, 1);
		}
		func_216(uParam0->f_319, 1, 1, 1);
	}
	else
	{
		if (iVar2 > 1)
		{
			if (bVar0)
			{
				func_215(uParam0->f_319, sVar5, iVar2, iVar2, 1);
			}
			else
			{
				func_215(uParam0->f_319, sVar5, iVar4, iVar2, 1);
			}
		}
		if ((!uParam0->f_318 && iVar4 > 0) && !Global_1056141[Global_1296859.f_10 /*471*/].f_41.f_1[*uParam0 /*16*/].f_14)
		{
			func_90(&(uParam0->f_319), 1, 1);
			uParam0->f_318 = 1;
		}
		if (func_217(uParam0->f_319, 1))
		{
			Global_1056141[Global_1296859.f_10 /*471*/].f_41.f_1[*uParam0 /*16*/].f_14 = 1;
			func_214(uParam0->f_319, 21, 0, 1);
			func_216(uParam0->f_319, 0, 1, 1);
			if (!func_151(*uParam0))
			{
				iVar4 = iVar2;
				bVar0 = true;
			}
		}
	}
	if (iVar4 == iVar2 && !Global_1056141[Global_1296859.f_10 /*471*/].f_41.f_1[*uParam0 /*16*/].f_15)
	{
		Global_1056141[Global_1296859.f_10 /*471*/].f_41.f_1[*uParam0 /*16*/].f_15 = 1;
	}
	if (bVar0)
	{
		if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(500);
		}
		else if (CAM::IS_SCREEN_FADED_OUT())
		{
			iVar7 = 0;
			while (iVar7 < 2)
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_8[iVar7 /*40*/], false))
				{
					ANIMSCENE::ABORT_ANIM_SCENE(uParam0->f_8[iVar7 /*40*/], true);
					bVar6 = true;
				}
				iVar7++;
			}
		}
	}
	return (bVar0 && bVar6);
}

bool func_87(int iParam0, var uParam1, int iParam2, int iParam3)
{
	vector3 vVar0;
	int iVar3;
	struct<25> Var4;

	switch (iParam0)
	{
		case 1:
		case 2:
			switch (iParam2)
			{
				case 0:
					switch (iParam3)
					{
						case 0:
							uParam1->f_3 = { -873.1006f, -1261.776f, 42.6244f };
							uParam1->f_7 = 0f;
							*uParam1 = { -890.2726f, -1253.967f, 42.6373f };
							uParam1->f_6 = 83.2f;
							break;
						case 1:
							uParam1->f_3 = { -875.3077f, -1258.834f, 42.5703f };
							uParam1->f_7 = 0f;
							*uParam1 = { -890.0361f, -1251.312f, 42.6475f };
							uParam1->f_6 = 83.2f;
							break;
						case 2:
							uParam1->f_3 = { -870.6182f, -1259.352f, 42.572f };
							uParam1->f_7 = 0f;
							*uParam1 = { -889.5291f, -1246.509f, 42.677f };
							uParam1->f_6 = 83.2f;
							break;
						case 3:
							uParam1->f_3 = { -878.0989f, -1256.599f, 42.6036f };
							uParam1->f_7 = 0f;
							*uParam1 = { -889.4508f, -1243.889f, 42.6845f };
							uParam1->f_6 = 83.2f;
							break;
						case 4:
							uParam1->f_3 = { -872.9756f, -1257.088f, 42.5735f };
							uParam1->f_7 = 0f;
							*uParam1 = { -890.7613f, -1256.609f, 42.6236f };
							uParam1->f_6 = 83.2f;
							break;
						case 5:
							uParam1->f_3 = { -867.9123f, -1257.62f, 42.5442f };
							uParam1->f_7 = 0f;
							*uParam1 = { -889.1403f, -1240.715f, 42.7038f };
							uParam1->f_6 = 83.2f;
							break;
						case 6:
							uParam1->f_3 = { -872.8755f, -1254.01f, 42.5223f };
							uParam1->f_7 = 0f;
							*uParam1 = { -892.9855f, -1259.29f, 42.5953f };
							uParam1->f_6 = 52.8f;
							break;
					}
					break;
				case 1:
					switch (iParam3)
					{
						case 0:
							uParam1->f_3 = { -852.5473f, -1247.14f, 42.3693f };
							uParam1->f_7 = -179.6f;
							*uParam1 = { -843.9141f, -1242.206f, 42.6034f };
							uParam1->f_6 = 176.8f;
							break;
						case 1:
							uParam1->f_3 = { -855.9294f, -1243.9f, 42.3176f };
							uParam1->f_7 = -179.6f;
							*uParam1 = { -841.25f, -1242.694f, 42.5649f };
							uParam1->f_6 = 176.8f;
							break;
						case 2:
							uParam1->f_3 = { -852.6059f, -1243.872f, 42.439f };
							uParam1->f_7 = -179.6f;
							*uParam1 = { -838.6961f, -1242.762f, 42.5183f };
							uParam1->f_6 = 176.8f;
							break;
						case 3:
							uParam1->f_3 = { -848.9722f, -1243.993f, 42.5525f };
							uParam1->f_7 = -179.6f;
							*uParam1 = { -835.7775f, -1243.111f, 42.5323f };
							uParam1->f_6 = 176.8f;
							break;
						case 4:
							uParam1->f_3 = { -854.2532f, -1241.536f, 42.393f };
							uParam1->f_7 = -179.6f;
							*uParam1 = { -832.4411f, -1242.565f, 42.5731f };
							uParam1->f_6 = 176.8f;
							break;
						case 5:
							uParam1->f_3 = { -850.7334f, -1241.698f, 42.5441f };
							uParam1->f_7 = -179.6f;
							*uParam1 = { -826.2964f, -1242.557f, 42.5382f };
							uParam1->f_6 = 176.8f;
							break;
						case 6:
							uParam1->f_3 = { -852.285f, -1239.152f, 42.5256f };
							uParam1->f_7 = -179.6f;
							*uParam1 = { -820.7101f, -1242.816f, 42.5536f };
							uParam1->f_6 = 176.8f;
							break;
					}
					break;
				case 2:
					switch (iParam3)
					{
						case 0:
							uParam1->f_3 = { -843.3099f, -1268.237f, 42.6019f };
							uParam1->f_7 = 91.2f;
							*uParam1 = { -837.5016f, -1278.386f, 42.553f };
							uParam1->f_6 = 179.6f;
							break;
						case 1:
							uParam1->f_3 = { -843.525f, -1264.899f, 42.6091f };
							uParam1->f_7 = 91.2f;
							*uParam1 = { -835.0971f, -1278.267f, 42.5779f };
							uParam1->f_6 = 179.6f;
							break;
						case 2:
							uParam1->f_3 = { -843.2772f, -1272.027f, 42.5937f };
							uParam1->f_7 = 91.2f;
							*uParam1 = { -832.6918f, -1278.378f, 42.5896f };
							uParam1->f_6 = 179.6f;
							break;
						case 3:
							uParam1->f_3 = { -840.6252f, -1266.123f, 42.5251f };
							uParam1->f_7 = 91.2f;
							*uParam1 = { -830.1432f, -1278.289f, 42.602f };
							uParam1->f_6 = 179.6f;
							break;
						case 4:
							uParam1->f_3 = { -840.4869f, -1269.868f, 42.4709f };
							uParam1->f_7 = 91.2f;
							*uParam1 = { -827.615f, -1278.281f, 42.612f };
							uParam1->f_6 = 179.6f;
							break;
						case 5:
							uParam1->f_3 = { -838.3458f, -1268.142f, 42.5456f };
							uParam1->f_7 = 91.2f;
							*uParam1 = { -832.3187f, -1270.027f, 42.5925f };
							uParam1->f_6 = 266.8f;
							break;
						case 6:
							uParam1->f_3 = { -838.4648f, -1264.728f, 42.5524f };
							uParam1->f_7 = 91.2f;
							*uParam1 = { -832.2508f, -1267.462f, 42.6008f };
							uParam1->f_6 = 266.8f;
							break;
					}
					break;
			}
			return true;
		case 3:
			switch (iParam2)
			{
				case 0:
					uParam1->f_3 = { 1342.391f, -1307.51f, 75.5794f };
					uParam1->f_7 = 67.1828f;
					*uParam1 = { 1339.217f, -1305.165f, 75.5944f };
					uParam1->f_6 = 336.17f;
					break;
				case 1:
					uParam1->f_3 = { 1337.586f, -1307.428f, 75.5462f };
					uParam1->f_7 = 66.7219f;
					*uParam1 = { 1313.53f, -1306.432f, 75.3049f };
					uParam1->f_6 = 133.7325f;
					break;
				case 2:
					uParam1->f_3 = { 1323.949f, -1299.458f, 75.2824f };
					uParam1->f_7 = 45.8223f;
					*uParam1 = { 1320.751f, -1286.52f, 75.348f };
					uParam1->f_6 = 265.4273f;
					break;
			}
			return true;
		case 4:
			vVar0 = { func_136(Global_1296859) };
			switch (vVar0.y)
			{
				case joaat("CUMBERLAND_FOREST_CAMP"):
				case joaat("GRIZZLIES_CAMP"):
				case joaat("HEARTLAND_CAMP"):
				case joaat("BIG_VALLEY_CAMP"):
				default:
					return false;
					switch (iParam2)
					{
						case 0:
							uParam1->f_3 = { -326.39f, 789.19f, 115.667f };
							uParam1->f_7 = 284.1014f;
							*uParam1 = { -321.1662f, 790.267f, 116.0272f };
							uParam1->f_6 = 11.602f;
							break;
						case 1:
							uParam1->f_3 = { -323.692f, 782.932f, 115.776f };
							uParam1->f_7 = 281.4508f;
							*uParam1 = { -312.8937f, 784.9355f, 116.5868f };
							uParam1->f_6 = -168.4326f;
							break;
						case 2:
							uParam1->f_3 = { -314.569f, 792.093f, 116.573f };
							uParam1->f_7 = 282.0273f;
							*uParam1 = { -303.8615f, 793.8496f, 117.1205f };
							uParam1->f_6 = 11.602f;
							break;
					}
				case joaat("HENNIGANS_STEAD_CAMP"):
				case joaat("RIO_BRAVO_CAMP"):
				case joaat("GREAT_PLAINS_CAMP"):
				case joaat("TALL_TREES_CAMP"):
				case joaat("CHOLLA_SPRINGS_CAMP"):
				case joaat("GAPTOOTH_RIDGE_CAMP"):
					switch (iParam2)
					{
						case 0:
							uParam1->f_3 = { -3678.909f, -2616.646f, -15.0037f };
							uParam1->f_7 = 91.0549f;
							*uParam1 = { -3682.761f, -2615.857f, -15.0603f };
							uParam1->f_6 = 173.9262f;
							break;
						case 1:
							uParam1->f_3 = { -3691.773f, -2608.01f, -14.7773f };
							uParam1->f_7 = 86.4678f;
							*uParam1 = { -3695.737f, -2608.751f, -14.7323f };
							uParam1->f_6 = 27.6929f;
							break;
						case 2:
							uParam1->f_3 = { -3689.26f, -2608.184f, -14.9935f };
							uParam1->f_7 = 90.7284f;
							*uParam1 = { -3698.199f, -2608.378f, -14.7322f };
							uParam1->f_6 = 2.1578f;
							break;
					}
					break;
				case joaat("ROANOKE_RIDGE_CAMP"):
				case joaat("BAYOU_NAWAS_CAMP"):
				case joaat("SCARLETT_MEADOWS_CAMP"):
					switch (iParam2)
					{
						case 0:
							uParam1->f_3 = { 2815.196f, -1310.15f, 45.624f };
							uParam1->f_7 = 141.0373f;
							*uParam1 = { 2809.395f, -1316.526f, 45.504f };
							uParam1->f_6 = 310.8568f;
							break;
						case 1:
							uParam1->f_3 = { 2817.729f, -1308.707f, 45.558f };
							uParam1->f_7 = 80.7875f;
							*uParam1 = { 2807.212f, -1303.46f, 45.607f };
							uParam1->f_6 = 126.4258f;
							break;
						case 2:
							uParam1->f_3 = { 2806.232f, -1322.305f, 45.446f };
							uParam1->f_7 = 107.4473f;
							*uParam1 = { 2798.7f, -1312.359f, 45.412f };
							uParam1->f_6 = 127.8044f;
							break;
					}
					break;
			}
			return true;
		case 5:
			if (iParam2 < 0 || iParam2 > 2)
			{
				return false;
			}
			iVar3 = func_131();
			if (iVar3 == -1)
			{
				return false;
			}
			Var4 = 3;
			Var4.f_10 = 3;
			Var4.f_14 = 3;
			Var4.f_24 = 3;
			if (!func_218(iVar3, &Var4))
			{
				return false;
			}
			uParam1->f_3 = { Var4[iParam2 /*3*/] };
			uParam1->f_7 = Var4.f_10[iParam2];
			*uParam1 = { Var4.f_14[iParam2 /*3*/] };
			uParam1->f_6 = Var4.f_24[iParam2];
			return true;
		case 6:
			uParam1->f_3 = { 1442.626f, 369.0727f, 88.8836f };
			uParam1->f_7 = 69.9518f;
			return true;
		case 7:
			uParam1->f_3 = { -1715.891f, -309.4491f, 178.5556f };
			uParam1->f_7 = 150.5676f;
			return true;
		case 8:
			uParam1->f_3 = { 0f, 0f, 0f };
			uParam1->f_7 = 0f;
			return false;
		default:
			break;
	}
	return false;
}

void func_88(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

bool func_89(int iParam0)
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

void func_90(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_89(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_219(*uParam0);
	if (Global_1951255[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_220(iVar0);
	*uParam0 = 0;
}

void func_91(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		CAM::DO_SCREEN_FADE_IN(1000);
	}
	else
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
	}
}

void func_92(var uParam0)
{
	Global_1056141[Global_1296859.f_10 /*471*/].f_41.f_1[*uParam0 /*16*/].f_1 = -1;
	uParam0->f_307 = -1;
}

void func_93()
{
	Global_1904651.f_8685 = 1;
}

bool func_94(var uParam0)
{
	struct<8> Var0;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	bool bVar14;
	int iVar15;
	int iVar16;

	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		return false;
	}
	if (uParam0->f_307 != -1)
	{
		if (MISC::ABSI((NETWORK::GET_CLOUD_TIME_AS_INT() - uParam0->f_307)) >= 2)
		{
			return true;
		}
		return false;
	}
	iVar12 = Global_1296859.f_10;
	bVar13 = Global_1296859.f_16 == iVar12;
	if (PED::IS_PED_ON_MOUNT(Global_1296859.f_8))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_1296859.f_8, true, true);
	}
	if (!func_87(*uParam0, &Var0, iVar9, iVar11))
	{
		return true;
	}
	if (!func_151(*uParam0))
	{
		bVar13 = true;
	}
	if (bVar13)
	{
		iVar11 = 1;
	}
	else
	{
		iVar9 = -1;
	}
	iVar8 = 0;
	while (iVar8 < 32)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1296859.f_154[iVar8]))
		{
		}
		else
		{
			iVar10 = Global_1296859.f_154[iVar8];
			if (bVar13)
			{
				if (iVar12 != iVar10)
				{
					if (Global_1056141[iVar12 /*471*/].f_41.f_1[*uParam0 /*16*/].f_1 == -1)
					{
						if (GANG::_0x424B17A7DC5C90BC(Global_1296859.f_154[iVar8]))
						{
							if (Global_1056141[iVar10 /*471*/].f_41.f_1[*uParam0 /*16*/].f_1 == iVar9)
							{
								iVar9++;
							}
						}
					}
					if (!GANG::_0x9BE7DCB22D32CCBE(Global_1296859.f_15, Global_1296859.f_154[iVar8]))
					{
					}
					else
					{
						Global_1056141[iVar12 /*471*/].f_41.f_1[*uParam0 /*16*/].f_3[iVar11] = Global_1296859.f_154[iVar8];
						iVar11++;
						Jump @488; //curOff = 339
						if (!GANG::_0x9BE7DCB22D32CCBE(Global_1296859.f_15, Global_1296859.f_154[iVar8]))
						{
						}
						else if (Global_1296859.f_16 == iVar10 && Global_1056141[iVar10 /*471*/].f_41.f_1[*uParam0 /*16*/].f_1 != -1)
						{
							iVar15 = 0;
							while (iVar15 < 7)
							{
								if (Global_1056141[iVar10 /*471*/].f_41.f_1[*uParam0 /*16*/].f_3[iVar15] == Global_1296859.f_10)
								{
									iVar9 = Global_1056141[iVar10 /*471*/].f_41.f_1[*uParam0 /*16*/].f_1;
									iVar11 = iVar15;
								}
								else
								{
									iVar15++;
								}
							}
						}
					}
					iVar8++;
					if (bVar13)
					{
						iVar11 = 0;
					}
					if (iVar9 >= 0 && iVar9 <= 2)
					{
						iVar16 = ITEMSET::CREATE_ITEMSET(true);
						while (!bVar14)
						{
							if (!func_87(*uParam0, &Var0, iVar9, iVar11))
							{
								func_221(1, 0);
								func_148(Global_1296859.f_17, 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 1, 1);
								bVar14 = true;
							}
							else
							{
								if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_323) && PED::_IS_MOUNT_SEAT_FREE(uParam0->f_323, -1)) && PED::_IS_MOUNT_SEAT_FREE(uParam0->f_323, 0))
								{
									if (ENTITY::_0x59B57C4B06531E1E(Var0, 2f, iVar16, 2) == 0)
									{
										ENTITY::SET_ENTITY_COORDS(uParam0->f_323, Var0, true, false, true, true);
										ENTITY::SET_ENTITY_HEADING(uParam0->f_323, Var0.f_6);
									}
								}
								if (ENTITY::_0x59B57C4B06531E1E(Var0.f_3, 2f, iVar16, 2) == 0)
								{
									bVar14 = true;
									ENTITY::SET_ENTITY_COORDS(Global_1296859.f_8, Var0.f_3, true, false, true, true);
									ENTITY::SET_ENTITY_HEADING(Global_1296859.f_8, Var0.f_7);
									CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
									if (iVar9 == 0 && *uParam0 != 7)
									{
										PLAYER::SIMULATE_PLAYER_INPUT_GAIT(Global_1296859.f_10, 1f, 2000, 0f, true, false);
									}
									if (bVar13)
									{
										Global_1056141[iVar12 /*471*/].f_41.f_1[*uParam0 /*16*/].f_1 = iVar9;
									}
								}
								else
								{
									func_221(1, 0);
									func_148(Global_1296859.f_17, 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 1, 1);
									bVar14 = true;
								}
							}
						}
					}
					else if (iVar9 > 2)
					{
						func_221(1, 0);
						func_148(Global_1296859.f_17, 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 1, 1);
						bVar14 = true;
					}
					if (uParam0->f_307 == -1)
					{
						if (bVar14)
						{
							uParam0->f_307 = NETWORK::GET_CLOUD_TIME_AS_INT();
						}
					}
					return false;
				}
			}
		}
	}
}

void func_95(var uParam0)
{
	uParam0->f_307 = -1;
}

Vector3 func_96(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0[24];

	StringCopy(&cVar0, "INVALID_HANDLE", 24);
	switch (iParam0)
	{
		case 1:
		default:
			break;
			if (bParam2)
			{
				switch (iParam1)
				{
					case 0:
						StringCopy(&cVar0, "MP_player_m_1", 24);
						break;
					case 1:
						StringCopy(&cVar0, "MP_player_m_2", 24);
						break;
					case 2:
						StringCopy(&cVar0, "MP_player_m_3", 24);
						break;
					case 3:
						StringCopy(&cVar0, "MP_player_m_4", 24);
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						StringCopy(&cVar0, "MP_player_f_1", 24);
						break;
					case 1:
						StringCopy(&cVar0, "MP_player_f_2", 24);
						break;
					case 2:
						StringCopy(&cVar0, "MP_player_f_3", 24);
						break;
					case 3:
						StringCopy(&cVar0, "MP_player_f_4", 24);
						break;
				}
			}
			break;
		case 2:
			if (bParam2)
			{
				switch (iParam1)
				{
					case 0:
						StringCopy(&cVar0, "MP_player_m_1", 24);
						break;
					case 1:
						StringCopy(&cVar0, "MP_player_m_2", 24);
						break;
					case 2:
						StringCopy(&cVar0, "MP_player_m_3", 24);
						break;
					case 3:
						StringCopy(&cVar0, "MP_player_m_4", 24);
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						StringCopy(&cVar0, "MP_player_f_1", 24);
						break;
					case 1:
						StringCopy(&cVar0, "MP_player_f_2", 24);
						break;
					case 2:
						StringCopy(&cVar0, "MP_player_f_3", 24);
						break;
					case 3:
						StringCopy(&cVar0, "MP_player_f_4", 24);
						break;
				}
			}
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			if (bParam2)
			{
				StringCopy(&cVar0, "MP_player_m_1", 24);
			}
			else
			{
				StringCopy(&cVar0, "MP_player_f_1", 24);
			}
			break;
	}
	return cVar0;
}

void func_97(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1885656.f_1682)
		{
			Global_1885656.f_1682 = 1;
		}
	}
	else if (Global_1885656.f_1682)
	{
		Global_1885656.f_1682 = 0;
	}
}

bool func_98(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_45(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (!func_222(iParam0))
	{
		iVar1 = func_223(3, iParam0);
		bVar2 = false;
	}
	else
	{
		iVar1 = func_223(1, iParam0);
		bVar2 = true;
	}
	if (iVar1 == 0)
	{
		return false;
	}
	if (func_225(func_224(iParam0)))
	{
		switch (func_226(func_224(iParam0), 0))
		{
			case 1:
			default:
				return false;
				return false;
			case 2:
			}
			if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0) && UNLOCK::_UNLOCK_IS_VISIBLE(iVar0))
			{
				if (NETWORK::_0xFBE782B3165AC8EC(iVar1))
				{
					return false;
				}
				if (!func_225(func_224(iParam0)))
				{
					func_228(iParam0, func_227(iVar1, 0));
				}
				return false;
			}
			if (!UNLOCK::_UNLOCK_IS_VISIBLE(iVar0) && UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
			{
				if (bVar2)
				{
					if (!NETWORK::_0xFBE782B3165AC8EC(iVar1))
					{
						return true;
					}
				}
				func_229(iParam0);
				func_228(iParam0, -1);
				func_230();
				return true;
			}
			return false;
		}

void func_99(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		STREAMING::_0x5A8B01199C3E79C3();
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_168(uParam0, iVar0))
		{
		}
		else if (!func_133(uParam0->f_332))
		{
			if (MISC::IS_BIT_SET(uParam0->f_8[iVar0 /*40*/].f_1, 9))
			{
				iVar1 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_332);
				if (INTERIOR::IS_VALID_INTERIOR(iVar1))
				{
					INTERIOR::UNPIN_INTERIOR(iVar1);
					MISC::CLEAR_BIT(&(uParam0->f_8[iVar0 /*40*/].f_1), 9);
				}
			}
		}
		iVar0++;
	}
}

void func_100(int iParam0, int iParam1)
{
	if (!func_132(iParam0))
	{
		return;
	}
	if (!func_231(iParam0))
	{
		Global_1293165.f_20[iParam0 /*11*/].f_7 = 0;
		return;
	}
	Global_1293165.f_20[iParam0 /*11*/].f_7 = iParam1;
}

void func_101(int iParam0, int iParam1)
{
	if (!func_132(iParam0))
	{
		return;
	}
	Global_1293165.f_120[iParam0 /*5*/].f_4 = iParam1;
}

void func_102(var uParam0)
{
	int iVar0;

	switch (*uParam0)
	{
		case 3:
			if (uParam0->f_327)
			{
				iVar0 = 847375033; /* GXTEntry: "Approach a Bounty Board ~1b~ to choose a poster and hunt down a bounty target." */
			}
			else
			{
				iVar0 = 936352856; /* GXTEntry: "Approach a Bounty Board ~1b~ to purchase a Bounty Hunter Licence." */
			}
			func_233(MISC::_CREATE_VAR_STRING(0, iVar0, func_232(2)), 20000, 0, 0, 0, 1);
			break;
	}
}

void func_103(var uParam0)
{
	func_199(64);
	switch (*uParam0)
	{
		case 5:
			func_234(1);
			break;
		case 6:
			Global_1298378.f_44.f_1 = 1;
			if (func_235(PLAYER::PLAYER_ID(), 1) == -1)
			{
				func_9(879, 0);
			}
			break;
		case 7:
			if (!func_236(joaat("KIT_ROLE_NATURALIST_SAMPLE_KIT"), 1))
			{
				func_9(911, 0);
			}
			func_237(joaat("MP007_A1_STR_WHORE_INT_MILO"));
			break;
		case 8:
			func_203(149, 0);
			func_203(150, 0);
			func_203(151, 0);
			break;
	}
}

bool func_104(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_89[iVar0 /*15*/].f_1))
		{
		}
		else
		{
			PED::DELETE_PED(&(uParam0->f_89[iVar0 /*15*/].f_1));
			iVar1++;
		}
		iVar0++;
	}
	return true;
}

bool func_105(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_168(uParam0, iVar0))
		{
		}
		else if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_8[iVar0 /*40*/]))
		{
		}
		else
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_8[iVar0 /*40*/]);
		}
		iVar0++;
	}
	return true;
}

void func_106(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_229[iVar0 /*27*/].f_1[iVar1 /*6*/]))
			{
			}
			else
			{
				ENTITY::SET_ENTITY_COLLISION(uParam0->f_229[iVar0 /*27*/].f_1[iVar1 /*6*/], true, false);
				PED::DELETE_PED(&(uParam0->f_229[iVar0 /*27*/].f_1[iVar1 /*6*/]));
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_107(var uParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (uParam0->f_150[iVar0 /*13*/].f_8)
		{
			if (!func_133(uParam0->f_150[iVar0 /*13*/].f_5))
			{
				vVar1 = { uParam0->f_150[iVar0 /*13*/].f_5 };
			}
			else
			{
				vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_8[0 /*40*/].f_33, uParam0->f_8[0 /*40*/].f_36.f_2, uParam0->f_150[iVar0 /*13*/].f_2) };
			}
			ENTITY::REMOVE_MODEL_HIDE(vVar1, 1f, uParam0->f_150[iVar0 /*13*/].f_1, 0);
		}
		iVar0++;
	}
}

void func_108(int iParam0)
{
	Global_1048585 = iParam0;
}

int func_109()
{
	if (!UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("PAUSE_MENU")) && !UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("PAUSE_MENU")))
	{
		return 0;
	}
	UIAPPS::_CLOSE_APP_BY_HASH(joaat("PAUSE_MENU"));
	return 1;
}

bool func_110()
{
	return Global_1896738.f_382;
}

void func_111()
{
	if (Global_1896738.f_383)
	{
	}
	Global_1896738.f_383 = 0;
}

bool func_112()
{
	return (func_238() || func_239());
}

void func_113(bool bParam0)
{
	if (bParam0)
	{
		Global_1940085.f_9 = 0f;
	}
	Global_1940085.f_8 = 0f;
	Global_1940085.f_15.f_1 = 0f;
	Global_1940085.f_15 = 0f;
	Global_1940085.f_15.f_9 = 0f;
	Global_1940085.f_15.f_8 = 0f;
	Global_1940085.f_15.f_10 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		PED::_0x06D26A96CA1BCA75(Global_34, 10, 0f, 0);
		AUDIO::SET_PED_IS_DRUNK(Global_34, false);
		PED::_0x406CCF555B04FAD3(Global_34, 0, 0f);
	}
	func_240(0f);
	if (ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		PED::SET_PED_CONFIG_FLAG(Global_34, 26, false);
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
	{
		func_241();
	}
	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	}
}

void func_114()
{
	Global_1940085.f_28 = 0;
	Global_1940085.f_28.f_1 = 0;
	Global_1940085.f_28.f_2 = 0;
	Global_1940085.f_28.f_3 = 0;
	Global_1940085.f_28.f_4 = 0;
	Global_1940085.f_28.f_8 = 0;
}

void func_115()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1146212.f_47689.f_1.f_42)
	{
		if (!func_242(Global_1146212.f_47689.f_1[iVar0 /*2*/]))
		{
		}
		iVar0++;
	}
	Global_1146212.f_47689.f_1.f_42 = 0;
}

void func_116(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	PED::CLEAR_PED_BLOOD_DAMAGE(iParam0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		PED::_CLEAR_PED_BLOOD_DAMAGE_FACIAL(iParam0, iVar0);
		iVar0++;
	}
}

bool func_117(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

int func_118(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		return PED::GET_MOUNT(iParam0);
	}
	return 0;
}

void func_119(bool bParam0)
{
	struct<15> Var0;

	if (NETWORK::_0xAADED99A6B268A27() != bParam0)
	{
		Var0 = 1;
		Var0.f_1.f_4 = 10;
		Var0[0 /*15*/] = 15;
		NETWORK::_NETWORK_ALLOW_SESSION_TO_MERGE(bParam0, &Var0);
	}
}

void func_120(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	if (bParam0)
	{
		func_243(iParam1);
		return;
	}
	if (iParam1 == 2)
	{
		iParam1 = 56;
	}
	iVar0 = iParam1;
	bVar1 = !iVar0 & 4 != false;
	bVar2 = iVar0 & 8 != false;
	bVar3 = iVar0 & 16 != false;
	bVar4 = iVar0 & 32 != false;
	bVar5 = iVar0 & 1024 != false;
	bVar6 = iVar0 & 64 != false;
	func_244(bVar1, bVar2, bVar3, (bVar4 || bVar5), bVar6, 0, bVar5);
}

void func_121()
{
	if (!Global_1896738.f_383)
	{
	}
	Global_1896738.f_383 = 1;
}

void func_122(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1896738.f_382)
		{
			Global_1896738.f_382 = bParam0;
		}
	}
	else if (Global_1896738.f_382)
	{
		Global_1896738.f_382 = bParam0;
	}
}

bool func_123(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17411.f_2565[iParam0], iParam1);
}

bool func_124(int iParam0)
{
	if (func_126(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_125(int iParam0)
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

bool func_126(int iParam0, int iParam1)
{
	return (Global_1904651.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_127(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_128()
{
	if (!func_205())
	{
		return false;
	}
	return Global_1904651.f_8684;
}

bool func_129(int iParam0)
{
	int iVar0;

	iVar0 = func_245(iParam0);
	if (iVar0 < 0)
	{
		return true;
	}
	return func_246(&(Global_1139381.f_11.f_3222.f_320[iVar0 /*4*/]), 1);
}

int func_130()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = GANG::_0x4BE6C13A45CCA8EC(Global_1296859.f_15);
	iVar1 = func_247(iVar0);
	if (iVar1 == 0)
	{
		return joaat("META_OUTFIT_DEFAULT");
	}
	iVar2 = func_248(0, iVar1, 0, -1);
	if (iVar2 == 0)
	{
		return joaat("META_OUTFIT_DEFAULT");
	}
	iVar3 = func_249(iVar2);
	if (iVar3 == 0)
	{
		return joaat("META_OUTFIT_DEFAULT");
	}
	return iVar3;
}

int func_131()
{
	int iVar0;
	int iVar5;

	if (STATS::_0x3AEABAE3F3C7600C() && STATS::_0xA2E2BEA4E83F6270(joaat("FEATURE_PM_DAILY_SALESWOMAN_LOCATIONS")) > 0)
	{
		STATS::_0xB5E2EDA2135E0FA1(joaat("FEATURE_PM_DAILY_SALESWOMAN_LOCATIONS"), 0, &iVar0);
	}
	else
	{
		return -1;
	}
	if (iVar0 == 0)
	{
		return -1;
	}
	iVar5 = func_250(iVar0);
	if (iVar5 < 0 || iVar5 >= 12)
	{
		return -1;
	}
	return (135 + iVar5);
}

bool func_132(int iParam0)
{
	if (iParam0 <= 0 || iParam0 >= 9)
	{
		return false;
	}
	return true;
}

bool func_133(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_134(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	vector3 vVar3;

	*uParam2 = { func_251() };
	fVar2 = 0f;
	switch (iParam0)
	{
		case 4:
		default:
			return false;
			*uParam1 = { 0f, 0f, 0f };
			vVar3 = { func_136(Global_1296859) };
			switch (vVar3.y)
			{
				case joaat("CUMBERLAND_FOREST_CAMP"):
				case joaat("GRIZZLIES_CAMP"):
				case joaat("HEARTLAND_CAMP"):
				case joaat("BIG_VALLEY_CAMP"):
				default:
					return false;
					*uParam1 = { -319.3981f, 792.6552f, 116.3929f };
					*uParam2 = { 0f, 0f, -60f };
				case joaat("HENNIGANS_STEAD_CAMP"):
				case joaat("RIO_BRAVO_CAMP"):
				case joaat("GREAT_PLAINS_CAMP"):
				case joaat("TALL_TREES_CAMP"):
				case joaat("CHOLLA_SPRINGS_CAMP"):
				case joaat("GAPTOOTH_RIDGE_CAMP"):
					*uParam1 = { -3677.246f, -2618.845f, -14.8654f };
					*uParam2 = { 0f, 0f, -119.15f };
					break;
				case joaat("ROANOKE_RIDGE_CAMP"):
				case joaat("BAYOU_NAWAS_CAMP"):
				case joaat("SCARLETT_MEADOWS_CAMP"):
					*uParam1 = { 2820.121f, -1310.931f, 45.7346f };
					*uParam2 = { 0f, 0f, -72.1f };
					break;
			}
			return true;
		case 5:
			iVar0 = func_131();
			if (iVar0 == -1)
			{
				return false;
			}
			if (!func_252(iVar0, uParam1, uParam2))
			{
				return false;
			}
			if (!bParam3)
			{
				return true;
			}
			iVar1 = func_253(joaat("MP005_P_COLLECTORWAGON01"), *uParam1, 5f);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				*uParam1 = { 0f, 0f, 0f };
				*uParam2 = { 0f, 0f, 0f };
				return false;
			}
			*uParam1 = { ENTITY::GET_ENTITY_COORDS(iVar1, true, false) };
			*uParam2 = { ENTITY::GET_ENTITY_ROTATION(iVar1, 2) };
			return true;
		case 8:
			*uParam1 = { Global_1051439.f_3745[39 /*17*/].f_1 };
			iVar0 = Global_1051439.f_3745[39 /*17*/];
			if (!bParam3)
			{
				return true;
			}
			if (150 == iVar0)
			{
				*uParam1 = { -1576.556f, 488.0926f, 113.9523f };
				fVar2 = 139.99f;
			}
			else if (151 == iVar0)
			{
				*uParam1 = { 1964.966f, -529.8469f, 40.9596f };
				fVar2 = (139.99f + 90f);
			}
			else
			{
				*uParam1 = { -2182.447f, -2132.664f, 73.1032f };
				fVar2 = 0f;
			}
			*uParam2 = { 0f, 0f, fVar2 };
			return true;
	}
}

bool func_135(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

Vector3 func_136(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1134390[func_254() /*83*/].f_38;
	}
	return Global_1134390[iParam0 /*83*/].f_38;
}

int func_137(var uParam0)
{
	return uParam0->f_1.f_2;
}

void func_138(var uParam0, int iParam1)
{
	uParam0->f_1.f_2 = iParam1;
}

bool func_139(var uParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	bVar1 = true;
	if (!PED::_0x5E420FF293EE5472())
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_89[iVar0 /*15*/].f_1))
		{
		}
		else
		{
			if (uParam0->f_89[iVar0 /*15*/] != 0 && STREAMING::IS_MODEL_VALID(uParam0->f_89[iVar0 /*15*/]))
			{
				STREAMING::REQUEST_MODEL(uParam0->f_89[iVar0 /*15*/], false);
				if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_89[iVar0 /*15*/]))
				{
					bVar1 = false;
				}
				else
				{
					Jump @123; //curOff = 117
					Jump @942; //curOff = 120
					uParam0->f_89[iVar0 /*15*/].f_1 = PED::CREATE_PED(uParam0->f_89[iVar0 /*15*/], uParam0->f_89[iVar0 /*15*/].f_2, uParam0->f_89[iVar0 /*15*/].f_5.f_2, false, false, false, false);
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_89[iVar0 /*15*/].f_1) || ENTITY::IS_ENTITY_DEAD(uParam0->f_89[iVar0 /*15*/].f_1))
					{
						bVar1 = false;
					}
					else
					{
						if (uParam0->f_89[iVar0 /*15*/].f_8 > -1 && uParam0->f_89[iVar0 /*15*/].f_8 < PED::_GET_NUM_METAPED_OUTFIT_PRESETS(uParam0->f_89[iVar0 /*15*/].f_1))
						{
							PED::_SET_PED_OUTFIT_PRESET(uParam0->f_89[iVar0 /*15*/].f_1, uParam0->f_89[iVar0 /*15*/].f_8, false);
						}
						else if (uParam0->f_89[iVar0 /*15*/].f_8 != -1 && PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(uParam0->f_89[iVar0 /*15*/].f_8, uParam0->f_89[iVar0 /*15*/]))
						{
							PED::_0x0BFA1BD465CDFEFD(uParam0->f_89[iVar0 /*15*/].f_1);
							PED::_SET_PED_BODY_COMPONENT(uParam0->f_89[iVar0 /*15*/].f_1, uParam0->f_89[iVar0 /*15*/].f_8);
							PED::_UPDATE_PED_VARIATION(uParam0->f_89[iVar0 /*15*/].f_1, false, true, true, true, false);
						}
						else if (uParam0->f_89[iVar0 /*15*/].f_8 == -1)
						{
							PED::_SET_RANDOM_OUTFIT_VARIATION(uParam0->f_89[iVar0 /*15*/].f_1, true);
						}
						if (uParam0->f_89[iVar0 /*15*/].f_9 != 0)
						{
							WEAPON::_GIVE_WEAPON_TO_PED_2(uParam0->f_89[iVar0 /*15*/].f_1, uParam0->f_89[iVar0 /*15*/].f_9, 1, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
						}
						func_255(uParam0->f_89[iVar0 /*15*/].f_1, uParam0->f_89[iVar0 /*15*/].f_2);
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uParam0->f_89[iVar0 /*15*/].f_1, false);
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_89[iVar0 /*15*/].f_1, false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_89[iVar0 /*15*/].f_1, true);
						PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uParam0->f_89[iVar0 /*15*/].f_1, false);
						PED::SET_PED_CAN_RAGDOLL(uParam0->f_89[iVar0 /*15*/].f_1, false);
						ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_89[iVar0 /*15*/].f_1, true);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_89[iVar0 /*15*/].f_1, 277, true);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_89[iVar0 /*15*/].f_1, 340, true);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_89[iVar0 /*15*/].f_1, 137, true);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_89[iVar0 /*15*/].f_1, 17, true);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_89[iVar0 /*15*/].f_1, 77, true);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_89[iVar0 /*15*/].f_1, 77, true);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_89[iVar0 /*15*/].f_1, 24, false);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_89[iVar0 /*15*/].f_1, 72, true);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_89[iVar0 /*15*/].f_1, 107, true);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_89[iVar0 /*15*/].f_1, 150, false);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_89[iVar0 /*15*/].f_1, 47, true);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_89[iVar0 /*15*/].f_1, 127, true);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_89[iVar0 /*15*/].f_1, 130, true);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_89[iVar0 /*15*/].f_1, 315, true);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_89[iVar0 /*15*/].f_1, 297, true);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_89[iVar0 /*15*/].f_1, 422, true);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_89[iVar0 /*15*/].f_1, 148, true);
						PED::_0xAE6004120C18DF97(uParam0->f_89[iVar0 /*15*/].f_1, 0, 0);
						ENTITY::SET_ENTITY_PROOFS(uParam0->f_89[iVar0 /*15*/].f_1, 127, false);
						func_256(&(uParam0->f_89[iVar0 /*15*/]), 2);
					}
				}
				iVar0++;
				if (bVar1)
				{
					if (!MISC::IS_BIT_SET(uParam0->f_305, 1))
					{
						iVar0 = 0;
						while (iVar0 < 4)
						{
							if (uParam0->f_89[iVar0 /*15*/] != 0 && STREAMING::IS_MODEL_VALID(uParam0->f_89[iVar0 /*15*/]))
							{
								if (STREAMING::HAS_MODEL_LOADED(uParam0->f_89[iVar0 /*15*/]))
								{
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_89[iVar0 /*15*/]);
								}
							}
							iVar0++;
						}
						MISC::SET_BIT(&(uParam0->f_305), 1);
					}
					return true;
				}
				return false;
			}
		}
	}
}

bool func_140(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_168(uParam0, iVar0))
		{
		}
		else
		{
			if (MISC::IS_BIT_SET(uParam0->f_8[iVar0 /*40*/].f_1, 3))
			{
				switch (func_57())
				{
					case 2:
						Jump @673; //curOff = 75
						Jump @85; //curOff = 78
						return false;
					}
					else if (MISC::IS_BIT_SET(uParam0->f_8[iVar0 /*40*/].f_1, 4))
					{
						switch (func_57())
						{
							case 1:
								Jump @673; //curOff = 128
								Jump @138; //curOff = 131
								return false;
							}
							if (MISC::IS_BIT_SET(uParam0->f_8[iVar0 /*40*/].f_1, 1))
							{
								Jump @673; //curOff = 156
							}
							else
							{
								iVar1 = 0;
							}
							if (!MISC::_IS_STRING_SPACE(&(uParam0->f_8[iVar0 /*40*/].f_11[1 /*3*/])))
							{
								iVar2 = func_257();
							}
							if (!MISC::IS_BIT_SET(uParam0->f_8[iVar0 /*40*/].f_1, 0))
							{
								if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_8[iVar0 /*40*/]))
								{
								}
								else if (MISC::_IS_STRING_SPACE(&(uParam0->f_8[iVar0 /*40*/].f_3)))
								{
									MISC::SET_BIT(&(uParam0->f_8[iVar0 /*40*/].f_1), 1);
								}
								else
								{
									uParam0->f_8[iVar0 /*40*/] = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_8[iVar0 /*40*/].f_3), uParam0->f_8[iVar0 /*40*/].f_2, &(uParam0->f_8[iVar0 /*40*/].f_11[iVar2 /*3*/]), false, false);
									if (MISC::IS_BIT_SET(uParam0->f_305, 18))
									{
										uParam0->f_316 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_308), 256, 0, false, true);
									}
									if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_8[iVar0 /*40*/]))
									{
									}
									else
									{
										ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_8[iVar0 /*40*/]);
										if (MISC::IS_BIT_SET(uParam0->f_305, 18))
										{
											ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_316);
										}
										MISC::SET_BIT(&(uParam0->f_8[iVar0 /*40*/].f_1), 0);
										Jump @673; //curOff = 415
										if (!MISC::IS_BIT_SET(uParam0->f_8[iVar0 /*40*/].f_1, 1))
										{
											if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_8[iVar0 /*40*/]))
											{
											}
											else if (!ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_8[iVar0 /*40*/], false))
											{
											}
											else if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_8[iVar0 /*40*/], false, false))
											{
											}
											else
											{
												if (*uParam0 != 4)
												{
													if (*uParam0 == 5)
													{
														if (func_133(uParam0->f_8[iVar0 /*40*/].f_33))
														{
														}
														else
														{
															ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_8[iVar0 /*40*/], uParam0->f_8[iVar0 /*40*/].f_33, uParam0->f_8[iVar0 /*40*/].f_36, 2);
															if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_8[iVar0 /*40*/].f_11[iVar2 /*3*/])))
															{
																if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_8[iVar0 /*40*/], &(uParam0->f_8[iVar0 /*40*/].f_11[iVar2 /*3*/])))
																{
																}
																else
																{
																	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_8[iVar0 /*40*/], &(uParam0->f_8[iVar0 /*40*/].f_11[iVar2 /*3*/]), true);
																	MISC::SET_BIT(&(uParam0->f_8[iVar0 /*40*/].f_1), 1);
																}
																iVar0++;
																return iVar1;
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

void func_141(var uParam0)
{
	int iVar0;
	char[] cVar1[8];

	if (func_258(*uParam0, &iVar0, &cVar1))
	{
		ANIMSCENE::SET_ANIM_SCENE_INT(uParam0->f_8[0 /*40*/], &cVar1, iVar0, true);
	}
}

int func_142(var uParam0)
{
	return uParam0->f_284.f_1;
}

int func_143(var uParam0)
{
	return uParam0->f_284.f_2;
}

void func_144(var uParam0, int iParam1)
{
	if (uParam0->f_284.f_1 != iParam1)
	{
		uParam0->f_284.f_1 = iParam1;
	}
}

void func_145(var uParam0, var uParam1, char* sParam2, char* sParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, char[4] cParam20, char* sParam21)
{
	func_47(uParam0);
	uParam0->f_284 = func_259(&uParam1, cParam20, sParam21, 0, 0, 1);
}

int func_146()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = joaat("WARNING_FEED");
	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar0))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iVar0, &vVar1))
		{
			switch (vVar1.x)
			{
				case -1203660660:
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar0);
					return vVar1.z;
				default:
					break;
			}
		}
		UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar0);
	}
	return -1577439368;
}

void func_147(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_260(68);
		Global_1102219.f_3804 = iParam0;
		Global_1102219.f_3805 = iParam1;
	}
	else
	{
		func_261(68);
	}
}

void func_148(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, float fParam8)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
	fVar3 = fParam3;
	if (!func_262(Global_1296859.f_17, &vVar0, &fVar3))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
		fVar3 = fParam3;
	}
	func_263(vParam0, fParam3, vVar0, fVar3, iParam4, iParam5, iParam6, iParam7, fParam8, 1);
}

int func_149(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 26;
	}
	if (Global_1296859.f_22[iParam0])
	{
		return Global_1100469[iParam0 /*53*/];
	}
	return 26;
}

void func_150(var uParam0, int iParam1)
{
	if (uParam0->f_284.f_2 != iParam1)
	{
		uParam0->f_284.f_2 = iParam1;
	}
}

bool func_151(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return true;
		case 2:
			return true;
		case 3:
			return false;
		case 4:
			return false;
		case 5:
			return false;
		case 6:
			return false;
		case 7:
			return false;
		case 8:
			return false;
		default:
			break;
	}
	return false;
}

bool func_152(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return true;
		case 2:
			return true;
		case 3:
			return false;
		case 4:
			return true;
		case 5:
			return false;
		case 6:
			return false;
		case 7:
			return false;
		case 8:
			return false;
		default:
			break;
	}
	return false;
}

bool func_153(var uParam0)
{
	vector3 vVar0;
	bool bVar3;
	vector3 vVar4;

	if (!func_264(uParam0))
	{
		return uParam0->f_1.f_6;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_297))
	{
		vVar0 = { func_265(uParam0) };
		uParam0->f_297 = VOLUME::_CREATE_VOLUME_SPHERE(uParam0->f_298, 0f, 0f, 0f, vVar0);
	}
	if (MISC::IS_BIT_SET(uParam0->f_305, 16))
	{
		vVar4 = { VOLUME::_GET_VOLUME_SCALE(uParam0->f_297) };
		if (func_266(uParam0->f_298, Global_35) < vVar4.x)
		{
			bVar3 = true;
		}
	}
	else if (ENTITY::IS_ENTITY_IN_VOLUME(Global_1296859.f_8, uParam0->f_297, true, 0))
	{
		bVar3 = true;
	}
	if (bVar3)
	{
		if (!func_267(uParam0))
		{
			uParam0->f_1.f_6 = 1;
		}
		else
		{
			uParam0->f_1.f_6 = 0;
		}
	}
	else
	{
		uParam0->f_1.f_6 = 0;
	}
	return uParam0->f_1.f_6;
}

bool func_154()
{
	bool bVar0;
	int iVar1;

	if (PED::_IS_PED_CARRYING(Global_1296859.f_8))
	{
		iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_1296859.f_8);
		bVar0 = true;
	}
	else if (func_268(&iVar1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_A_PED(iVar1)) && PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1)))
		{
			func_269(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1)));
		}
		return false;
	}
	return true;
}

bool func_155(int iParam0)
{
	if (!func_132(iParam0))
	{
		return false;
	}
	return Global_1293165.f_20[iParam0 /*11*/].f_7;
}

int func_156(int iParam0, int iParam1)
{
	if (iParam0 <= 0 || iParam0 >= 9)
	{
		return -1;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return -1;
	}
	return Global_1056141[iParam1 /*471*/].f_41.f_1[iParam0 /*16*/];
}

bool func_157(int iParam0)
{
	int iVar0;

	if (!func_132(iParam0))
	{
		return false;
	}
	if ((Global_1296859.f_16 < 32 && Global_1296859.f_16 > 0) && Global_1056141[Global_1296859.f_16 /*471*/].f_41.f_1[iParam0 /*16*/].f_2 != -1)
	{
		iVar0 = MISC::ABSI((NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1056141[Global_1296859.f_16 /*471*/].f_41.f_1[iParam0 /*16*/].f_2));
		if (iVar0 >= 30)
		{
			return true;
		}
	}
	return false;
}

void func_158(var uParam0, int iParam1)
{
	if (func_149(255) == 1)
	{
		if (func_142(uParam0) == 0 && func_143(uParam0) == 0)
		{
			func_150(uParam0, iParam1);
			func_144(uParam0, 1);
		}
	}
}

bool func_159()
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_MOUNT(Global_1296859.f_8);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar1 = AITRANSPORT::_0xFFEC4B0A1A3ED515(iVar0, -1);
		if (iVar1 == Global_1296859.f_8)
		{
			iVar1 = AITRANSPORT::_0xFFEC4B0A1A3ED515(iVar0, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && PED::IS_PED_A_PLAYER(iVar1))
		{
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) == Global_1296859.f_16)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_160(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715.f_20638;
	}
	return (Global_1915715.f_20638 || Global_1915715.f_22504.f_1);
}

void func_161(int iParam0, bool bParam1)
{
	if (!func_270(iParam0))
	{
		return;
	}
	if ((bParam1 && func_271(iParam0, 512)) || (!bParam1 && !func_271(iParam0, 512)))
	{
		return;
	}
	if (bParam1)
	{
		func_272(iParam0, 512);
	}
	else
	{
		func_273(iParam0, 512);
	}
	if (func_274(iParam0))
	{
		INVENTORY::_0x9B4E793B1CB6550A();
	}
}

bool func_162()
{
	return Global_1293332.f_12;
}

bool func_163(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219.f_16;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return Global_1100469[iParam0 /*53*/].f_16;
}

int func_164(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_275(bParam1, bParam2, bParam3);
	}
	if (Global_1572887.f_13 != -1)
	{
		if (iParam0 == Global_1296859.f_10)
		{
			if (!Global_1296859.f_11)
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

int func_165(var uParam0)
{
	return uParam0->f_1.f_3;
}

void func_166(var uParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	float fVar8;

	if (!func_151(*uParam0))
	{
		SCRIPTS::_0x31010318BA9897AC(&uVar0, Global_1296859);
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (!func_168(uParam0, iVar1))
			{
			}
			else
			{
				Global_1056141[Global_1296859 /*471*/].f_41.f_1[*uParam0 /*16*/].f_11[iVar1] = uVar0;
			}
			iVar1++;
		}
		return;
	}
	if (Global_1296859.f_16 != Global_1296859)
	{
		return;
	}
	iVar5 = PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(Global_1296859.f_16));
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!func_168(uParam0, iVar1))
		{
		}
		else
		{
			if (MISC::IS_BIT_SET(uParam0->f_8[iVar1 /*40*/].f_1, 3))
			{
				if (func_57() != 1)
				{
				}
				else
				{
					Jump @207; //curOff = 175
					if (MISC::IS_BIT_SET(uParam0->f_8[iVar1 /*40*/].f_1, 4))
					{
						if (func_57() != 2)
						{
						}
						else
						{
							iVar3 = 0;
							while (iVar3 < 32)
							{
								if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1296859.f_154[iVar3]))
								{
								}
								else if (!GANG::_0x9BE7DCB22D32CCBE(Global_1296859.f_15, Global_1296859.f_154[iVar3]))
								{
								}
								else
								{
									if (iVar2 >= 4)
									{
									}
									else
									{
										if (Global_1296859.f_154[iVar3] != Global_1296859.f_10)
										{
											iVar6 = PLAYER::GET_PLAYER_PED(Global_1296859.f_154[iVar3]);
											if (ENTITY::IS_ENTITY_DEAD(iVar6))
											{
											}
											else
											{
												fVar7 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar6, true, false), ENTITY::GET_ENTITY_COORDS(iVar5, true, false));
												fVar8 = func_276(*uParam0, 0);
												if (fVar7 > (fVar8 * fVar8))
												{
												}
												else
												{
													iVar2++;
													SCRIPTS::_0x31010318BA9897AC(&uVar0, Global_1296859.f_154[iVar3]);
													Global_1056141[Global_1296859.f_10 /*471*/].f_41.f_1[*uParam0 /*16*/].f_3[iVar4] = Global_1296859.f_154[iVar3];
													iVar4++;
												}
											}
											iVar3++;
											iVar2 = 0;
											Global_1056141[Global_1296859.f_16 /*471*/].f_41.f_1[*uParam0 /*16*/].f_11[iVar1] = uVar0;
											iVar1++;
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

void func_167(var uParam0, int iParam1)
{
	uParam0->f_1.f_3 = iParam1;
}

bool func_168(var uParam0, int iParam1)
{
	if (iParam1 >= 2 || iParam1 < 0)
	{
		return false;
	}
	return !MISC::_IS_STRING_SPACE(&(uParam0->f_8[iParam1 /*40*/].f_3));
}

var func_169(int iParam0, int iParam1)
{
	var uVar0;

	if (iParam0 >= 9 || iParam0 <= 0)
	{
		return uVar0;
	}
	if (iParam1 >= 2 || iParam1 < 0)
	{
		return uVar0;
	}
	if (Global_1296859.f_16 >= 32 || Global_1296859.f_16 < 0)
	{
		return uVar0;
	}
	if (!func_151(iParam0))
	{
		uVar0 = Global_1056141[Global_1296859 /*471*/].f_41.f_1[iParam0 /*16*/].f_11[iParam1];
	}
	else
	{
		uVar0 = Global_1056141[Global_1296859.f_16 /*471*/].f_41.f_1[iParam0 /*16*/].f_11[iParam1];
	}
	return uVar0;
}

bool func_170(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (iParam2 >= 2 || iParam2 < 0)
	{
		return false;
	}
	if (iParam3 >= 4 || iParam3 < 0)
	{
		return false;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(iParam1);
	iVar1 = PED::CLONE_PED(iVar0, 0f, false, true);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	ENTITY::SET_ENTITY_COLLISION(iVar1, false, false);
	ENTITY::SET_ENTITY_VISIBLE(iVar1, false);
	func_277(iVar0, iVar1);
	ENTITY::SET_ENTITY_COORDS(iVar1, uParam0->f_298, true, false, true, true);
	ENTITY::FREEZE_ENTITY_POSITION(iVar1, true);
	PED::_0x7E8F9949B7AABBF0(iVar1, 1, 1);
	WEAPON::_HIDE_PED_WEAPONS(iVar1, 2, true);
	if (MISC::IS_BIT_SET(uParam0->f_305, 17))
	{
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(iVar1, 16, false);
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(iVar1, 9, false);
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(iVar1, 18, false);
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(iVar1, 10, false);
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(iVar1, 7, false);
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
	vVar2 = { func_96(*uParam0, iParam3, PED::IS_PED_MALE(iVar1)) };
	uParam0->f_229[iParam2 /*27*/].f_1[iParam3 /*6*/] = iVar1;
	uParam0->f_229[iParam2 /*27*/].f_1[iParam3 /*6*/].f_2.f_1 = { vVar2 };
	uParam0->f_229[iParam2 /*27*/].f_1[iParam3 /*6*/].f_2 = uParam0->f_8[iParam2 /*40*/];
	return true;
}

bool func_171(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 >= 2 || iParam1 < 0)
	{
		return false;
	}
	if (iParam2 >= 4 || iParam2 < 0)
	{
		return false;
	}
	if (!bParam3)
	{
		return ENTITY::DOES_ENTITY_EXIST(uParam0->f_229[iParam1 /*27*/].f_1[iParam2 /*6*/]);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_229[iParam1 /*27*/].f_1[iParam2 /*6*/]))
	{
		return !ENTITY::IS_ENTITY_DEAD(uParam0->f_229[iParam1 /*27*/].f_1[iParam2 /*6*/]);
	}
	return false;
}

bool func_172(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 >= 2 || iParam1 < 0)
	{
		return false;
	}
	if (iParam2 >= 4 || iParam2 < 0)
	{
		return false;
	}
	return PED::_0xA0BC8FAED8CFEB3C(uParam0->f_229[iParam1 /*27*/].f_1[iParam2 /*6*/]);
}

bool func_173(var uParam0, int iParam1)
{
	vector3 vVar0;

	if (uParam0->f_150[iParam1 /*13*/].f_1 == 0)
	{
		return true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_150[iParam1 /*13*/]))
	{
		return true;
	}
	if (!func_133(uParam0->f_150[iParam1 /*13*/].f_5))
	{
		vVar0 = { uParam0->f_150[iParam1 /*13*/].f_5 };
	}
	else
	{
		vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_8[0 /*40*/].f_33, uParam0->f_8[0 /*40*/].f_36.f_2, uParam0->f_150[iParam1 /*13*/].f_2) };
	}
	uParam0->f_150[iParam1 /*13*/] = func_253(uParam0->f_150[iParam1 /*13*/].f_1, vVar0, 1f);
	if (uParam0->f_150[iParam1 /*13*/].f_8)
	{
		ENTITY::CREATE_MODEL_HIDE(vVar0, 1f, uParam0->f_150[iParam1 /*13*/].f_1, false);
	}
	return ENTITY::DOES_ENTITY_EXIST(uParam0->f_150[iParam1 /*13*/]);
}

void func_174(var uParam0, int iParam1)
{
	func_278(uParam0, iParam1);
}

bool func_175(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7, float fParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	bVar3 = PED::IS_PED_ON_MOUNT(iParam0);
	if (bVar3)
	{
		iVar2 = PED::GET_MOUNT(iParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			bVar3 = false;
		}
	}
	if (!bVar3)
	{
		bVar4 = PED::IS_PED_IN_ANY_VEHICLE(iParam0, true);
		if (bVar4)
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				bVar4 = false;
			}
		}
	}
	if (func_279(*uParam1, 128))
	{
		if (!func_280(iParam0, 1245594896))
		{
			TASK::CLEAR_PED_TASKS(iParam0, true, false);
			*uParam1 = 0;
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_279(*uParam1, 2))
	{
		if (bVar3)
		{
			if (!func_281(iVar2))
			{
				return false;
			}
			if (!func_280(iParam0, 501393341))
			{
				if (fParam7 != 0f && fParam8 != 0f)
				{
					vVar5 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
					vVar5.x = fParam7;
					vVar5.f_1 = fParam8;
					if (func_282(iVar2, vVar5))
					{
						iParam4 = 131072;
					}
					else
					{
						iParam4 = 262144;
					}
					if (!func_279(*uParam1, 4))
					{
						iParam4 |= 32;
					}
				}
				TASK::CLEAR_PED_TASKS(iParam0, true, false);
				TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			}
			return false;
		}
		else if ((func_283(iParam2, 128) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_LAST_MOUNT(iParam0))) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_GET_LAST_MOUNT(iParam0))))
		{
			TASK::TASK_PICKUP_CARRIABLE_ENTITY(iParam0, PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_GET_LAST_MOUNT(iParam0)));
			func_174(uParam1, 128);
			return false;
		}
		else
		{
			*uParam1 = 0;
			return true;
		}
	}
	if (func_279(*uParam1, 4))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
		{
			return false;
		}
		else
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0, false, true);
			*uParam1 = 0;
			return true;
		}
	}
	if (func_279(*uParam1, 8))
	{
		if (bVar3)
		{
			if (!func_281(iVar2))
			{
				return false;
			}
		}
		if ((!bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0))) || (bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2))))
		{
			*uParam1 = 0;
			return true;
		}
		else
		{
			return false;
		}
	}
	if (PED::IS_PED_A_PLAYER(iParam0) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		if (!func_283(iParam2, 2) && PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::_0xAE637BB8EF017875(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (!func_283(iParam2, 2048))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam3, false);
				if (func_283(iParam2, 16384))
				{
					HUD::_DISPLAY_HUD_COMPONENT(724769646);
				}
			}
		}
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
	if (bVar3)
	{
		if (ENTITY::IS_ENTITY_IN_AIR(iVar2, 0))
		{
			return false;
		}
		if (func_279(*uParam1, 2336))
		{
			if (!func_281(iVar2))
			{
			}
			if (func_284(iVar2, *uParam1))
			{
				func_285(uParam1, 32);
				func_285(uParam1, 256);
				func_285(uParam1, 2048);
				func_174(uParam1, 512);
				func_174(uParam1, 1024);
				func_174(uParam1, 4096);
			}
			else
			{
				return false;
			}
		}
		if (func_279(*uParam1, 64))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
			if (!func_281(iVar2))
			{
			}
			if (TASK::IS_PED_WALKING(iVar2))
			{
				return false;
			}
			else
			{
				func_285(uParam1, 64);
			}
		}
		if (func_283(iParam2, 16))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 2, 0, 0);
			*uParam1 = 0;
			return true;
		}
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
		if ((((TASK::IS_PED_SPRINTING(iVar2) && !func_283(iParam2, 8192)) || (TASK::IS_PED_RUNNING(iVar2) && func_283(iParam2, 1024))) || func_283(iParam2, 8)) && !func_279(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 1, 0, 0);
			func_174(uParam1, 32);
		}
		else if (((TASK::IS_PED_RUNNING(iVar2) || (TASK::IS_PED_SPRINTING(iVar2) && func_283(iParam2, 8192))) && func_283(iParam2, 4096)) && !func_279(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 8, 0, 0);
			func_174(uParam1, 2048);
			func_174(uParam1, 4096);
		}
		else if (((TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) <= 1.5f && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) >= 1.001f) && func_283(iParam2, 32)) && !func_279(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 3, 0, 0);
			func_174(uParam1, 256);
			func_174(uParam1, 1024);
		}
		else if (TASK::IS_PED_WALKING(iVar2))
		{
			TASK::TASK_STAND_STILL(iVar2, -1);
			func_174(uParam1, 64);
		}
		else if (!func_283(iParam2, 1))
		{
			if (!func_283(iParam2, 256))
			{
			}
			if (fParam7 != 0f && fParam8 != 0f)
			{
				vVar8.x = fParam7;
				vVar8.f_1 = fParam8;
				vVar8.f_2 = Global_35.f_2;
				if (func_282(iVar2, vVar8))
				{
					iParam4 = 131072;
				}
				else
				{
					iParam4 = 262144;
				}
				if (!func_279(*uParam1, 4))
				{
					iParam4 |= 32;
				}
			}
			TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2, 0f);
			func_174(uParam1, 2);
		}
		else
		{
			TASK::TASK_STAND_STILL(iParam0, 1000);
			func_174(uParam1, 8);
		}
	}
	else if (bVar4)
	{
		if (!func_283(iParam2, 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_STAND_STILL(0, 250);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			VEHICLE::BRING_VEHICLE_TO_HALT(iVar1, fParam5, iParam6, false);
			func_174(uParam1, 4);
		}
		else
		{
			*uParam1 = 0;
			return true;
		}
	}
	else if (!func_283(iParam2, 512))
	{
		TASK::TASK_STAND_STILL(iParam0, 200);
		func_174(uParam1, 8);
	}
	return false;
}

bool func_176(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (!func_286(iParam0, 0))
	{
		return false;
	}
	if (func_180(iParam0))
	{
		return func_288(func_181(iParam0, 0), bParam1, bParam2, iParam3, func_287(iParam0));
	}
	if (func_289(iParam0, bParam4) || func_290(iParam0))
	{
		bParam1 = 997808187;
	}
	else if (func_287(iParam0) && (func_291(iParam0, &iVar0) || func_292(iParam0, &iVar0)))
	{
		bParam1 = iVar0;
	}
	else
	{
		bVar1 = func_293(iParam0, -570078785);
		bVar2 = func_293(iParam0, -915411861);
		if (bVar1 && !bVar2)
		{
			bParam1 = -570078785;
		}
		else if (bVar2 && bVar1)
		{
			if (func_294())
			{
				bParam1 = -570078785;
			}
			else
			{
				bParam1 = -915411861;
			}
		}
		else if (bVar2)
		{
			bParam1 = -915411861;
		}
		else if (func_295(15) && func_293(iParam0, 369710026))
		{
			bParam1 = 369710026;
		}
		else
		{
			bParam1 = false;
		}
	}
	if (bParam1 == 0 && bParam2)
	{
		return -915411861;
	}
	return bParam1;
}

bool func_177(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar7;

	if (!func_286(iParam0, 0))
	{
		return false;
	}
	if (func_296(iParam0, 1) && !func_297(iParam0, 1))
	{
		return false;
	}
	if (bParam2 && func_298(iParam0, &iVar0))
	{
		if (func_299(iVar0, 997808187, 0) && !func_300(iVar0, 997808187))
		{
			return true;
		}
		else if (func_299(iVar0, -570078785, 0))
		{
			return func_301(iVar0, -570078785, &uVar1, 1, 0);
		}
	}
	else
	{
		if (iParam1 == 0)
		{
			iVar3 = func_176(iParam0, iVar3, 1, -1, 1);
		}
		else
		{
			iVar3 = iParam1;
		}
		if (iVar3 == 0)
		{
			return false;
		}
		iVar7 = func_302(iParam0, iVar3, 0, 1, 1);
		if (iVar3 == -570078785)
		{
			return func_303(iVar7);
		}
		else if (iVar3 == -915411861)
		{
			return func_304(iVar7);
		}
		else if (iVar3 == 997808187)
		{
			return true;
		}
		else
		{
			return func_305(iParam0, 1, iVar3, &uVar5, &uVar4, 1, 0, 0);
		}
	}
	return false;
}

int func_178(int* iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<16> Var0;
	struct<5> Var16;
	int iVar21;

	func_306(&iParam1);
	if (func_180(iParam1))
	{
		return func_307(iParam0, func_181(iParam1, 1), 1, 1, iParam3, 0, iParam4, iParam5, func_287(iParam1));
	}
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var16 = { func_308(iParam1, 1, 1) };
	if (func_298(iParam1, &iVar21))
	{
		return func_307(iParam0, iVar21, iParam2, 1, iParam3, 0, 0, iParam5, 0);
	}
	if (func_309(iParam1))
	{
		if (!func_310(iParam0, iParam1, Var16, iParam2, &Var0, iParam4, iParam5, iParam3))
		{
			return 0;
		}
	}
	else if (!func_311(iParam0, iParam1, Var16, Var16.f_4, iParam2, &Var0, iParam3, iParam4, iParam5, iParam6))
	{
		return 0;
	}
	func_312(Var0);
	return 1;
}

void func_179(int iParam0)
{
	UNLOCK::_UNLOCK_SET_NEW(func_313(iParam0), false);
}

bool func_180(int iParam0)
{
	if (func_314(iParam0, 75135761))
	{
		return true;
	}
	return false;
}

int func_181(int iParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_286(iParam0, 0))
	{
		return func_316(func_315(iParam0), bParam1);
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

int func_182(int iParam0, int iParam1, bool bParam2)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_317(iParam0, iParam1, &Var0, &iVar31, bParam2, 1))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (func_318(Var0[iVar32 /*2*/]))
		{
			return Var0[iVar32 /*2*/];
		}
		else if (Var0[iVar32 /*2*/] == 0)
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

int func_183(int iParam0, int iParam1, bool bParam2)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_319(iParam0, iParam1, &Var0, &iVar31, 1, 0))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (func_318(Var0[iVar32 /*2*/]))
		{
			return Var0[iVar32 /*2*/];
		}
		else if (Var0[iVar32 /*2*/] == 0)
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

int func_184(int iParam0)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	iVar0 = -1;
	if (!func_318(iParam0))
	{
		return iVar0;
	}
	iVar0 = 74330131;
	Var1 = { func_308(iParam0, 0, 0) };
	Var6 = { func_320(iParam0, Var1, Var1.f_4, 0) };
	if (!func_321(&Var6))
	{
		return -1;
	}
	if (func_322(Var6))
	{
		iVar0 = 90473367;
	}
	return iVar0;
}

void func_185(int iParam0, struct<17> Param1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346.f_20)
	{
		if (Global_1293346.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			if (Global_1293346.f_20.f_1[iVar0 /*21*/].f_1 == 1 || Global_1293346.f_20.f_1[iVar0 /*21*/].f_1 == 5)
			{
				Global_1293346.f_20.f_1[iVar0 /*21*/].f_4 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

void func_186(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	switch (*uParam0)
	{
		case 5:
			if (uParam0->f_8[iParam1 /*40*/].f_39 == -1)
			{
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_INT(uParam0->f_8[iParam1 /*40*/], "location_variation", uParam0->f_8[iParam1 /*40*/].f_39, false);
			}
			break;
		case 6:
			ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_8[iParam1 /*40*/], "ifTrader", func_323(11) > 0, false);
			break;
		case 7:
			func_52(910, &iVar0, &iVar1);
			func_324(iVar0, iVar1);
			func_325(&iVar0, &iVar1);
			func_326(joaat("MP007_A1_STR_WHORE_INT_MILO"));
			break;
		case 8:
			func_203(149, 1);
			func_203(150, 1);
			func_203(151, 1);
			break;
	}
}

void func_187()
{
	if (!func_327())
	{
		return;
	}
	Global_1211286.f_26 = 0;
}

Vector3 func_188(var uParam0)
{
	vector3 vVar0;

	vVar0 = -1;
	vVar0.f_1 = -1;
	vVar0.x = 1;
	vVar0.f_2 = uParam0;
	return vVar0;
}

bool func_189(vector3 vParam0)
{
	int iVar0;

	if (!func_328(vParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!func_329(Global_1211286.f_2[iVar0 /*5*/].f_2, vParam0))
		{
		}
		else
		{
			return Global_1211286.f_2[iVar0 /*5*/].f_1;
		}
		iVar0++;
	}
	return false;
}

void func_190(vector3 vParam0, int iParam3)
{
	int iVar0;

	if (!func_328(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!func_329(Global_1211286.f_2[iVar0 /*5*/].f_2, vParam0))
		{
		}
		else
		{
			if (Global_1211286.f_2[iVar0 /*5*/].f_1 != iParam3)
			{
				Global_1211286.f_24 = 1;
			}
			Global_1211286.f_2[iVar0 /*5*/].f_1 = iParam3;
		}
		else
		{
			iVar0++;
		}
	}
}

void func_191(int iParam0)
{
	UIFEED::_0xDD1232B332CBB9E7(1, iParam0, 0);
}

void func_192(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	fVar0 = ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_8[iParam1 /*40*/]);
	func_44(*uParam0, &iVar1, &uVar2);
	MISC::SET_BIT(&(uParam0->f_305), 19);
	if ((ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_8[iParam1 /*40*/], "MOON_INT_P2A1_T01_Shot_1", 0) || ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_8[iParam1 /*40*/], "MOON_INT_P2A1_T01_Shot_2", 0)) || (ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_8[iParam1 /*40*/], "MOON_INT_P2_T10_Shot_2", 0) && fVar0 > 27.6f))
	{
		HUD::_0x5651516D947ABC53();
		if (!MISC::IS_BIT_SET(uParam0->f_8[iParam1 /*40*/].f_1, 7))
		{
			if (!func_330(uParam0))
			{
				uParam0->f_329 = 1;
				ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_8[iParam1 /*40*/], &(uParam0->f_8[iParam1 /*40*/].f_18[0 /*7*/].f_4), true, false);
				return;
			}
			MISC::SET_BIT(&(uParam0->f_8[iParam1 /*40*/].f_1), 7);
		}
		if (ANIMSCENE::GET_ANIM_SCENE_BOOL(uParam0->f_8[iParam1 /*40*/], &(uParam0->f_8[iParam1 /*40*/].f_18[0 /*7*/].f_4)) || ANIMSCENE::GET_ANIM_SCENE_BOOL(uParam0->f_8[iParam1 /*40*/], &(uParam0->f_8[iParam1 /*40*/].f_18[1 /*7*/].f_4)))
		{
			return;
		}
		if (!MISC::IS_BIT_SET(uParam0->f_8[iParam1 /*40*/].f_1, 6))
		{
			iVar3 = func_176(iVar1, 0, 1, -1, 1);
			UIAPPS::_CLOSE_ALL_APPS_IMMEDIATE();
			func_121();
			func_331(3, 1);
			MISC::SET_BIT(&(uParam0->f_8[iParam1 /*40*/].f_1), 6);
			return;
		}
		if (!MISC::IS_BIT_SET(uParam0->f_8[iParam1 /*40*/].f_1, 8))
		{
			if (func_332() == 54)
			{
				MISC::SET_BIT(&(uParam0->f_8[iParam1 /*40*/].f_1), 8);
			}
			return;
		}
		iVar4 = func_235(PLAYER::GET_PLAYER_INDEX(), 1);
		if (iVar4 != -1)
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_8[iParam1 /*40*/], &(uParam0->f_8[iParam1 /*40*/].f_18[1 /*7*/].f_4), true, false);
			uParam0->f_327 = 1;
			AUDIO::PLAY_SOUND_FRONTEND("gold_spend", "Gold_Spend_Sounds", true, 0);
		}
		else if (!func_332() == 54)
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_8[iParam1 /*40*/], &(uParam0->f_8[iParam1 /*40*/].f_18[0 /*7*/].f_4), true, false);
			uParam0->f_327 = 0;
			uParam0->f_328 = 1;
		}
	}
	else if (MISC::IS_BIT_SET(uParam0->f_8[iParam1 /*40*/].f_1, 6))
	{
		func_48();
		MISC::CLEAR_BIT(&(uParam0->f_8[iParam1 /*40*/].f_1), 6);
	}
}

void func_193(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar10;
	int iVar11;

	if (iParam1 < 0)
	{
		return;
	}
	func_44(*uParam0, &iVar0, &uVar1);
	MISC::SET_BIT(&(uParam0->f_305), 19);
	if (!MISC::IS_BIT_SET(uParam0->f_8[iParam1 /*40*/].f_1, 7))
	{
		if (!func_330(uParam0))
		{
			if (func_333(*uParam0, &uVar2, &bVar10))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_8[iParam1 /*40*/], &uVar2, bVar10, false);
				MISC::SET_BIT(&(uParam0->f_8[iParam1 /*40*/].f_1), 7);
				uParam0->f_329 = 1;
				return;
			}
		}
		else if (func_333(*uParam0, &uVar2, &bVar10))
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_8[iParam1 /*40*/], &uVar2, !bVar10, false);
			MISC::SET_BIT(&(uParam0->f_8[iParam1 /*40*/].f_1), 7);
		}
	}
	if (ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_8[iParam1 /*40*/], &(uParam0->f_8[iParam1 /*40*/].f_18[0 /*7*/]), 0) || ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_8[iParam1 /*40*/], &(uParam0->f_8[iParam1 /*40*/].f_18[1 /*7*/]), 0))
	{
		if (!MISC::IS_BIT_SET(uParam0->f_8[iParam1 /*40*/].f_1, 6))
		{
			iVar11 = func_176(iVar0, 0, 1, -1, 1);
			if (func_293(iVar0, iVar11))
			{
				uParam0->f_326 = func_334(iVar0, iVar11, 1, 0, 1, 0);
				if (func_335(iVar0, joaat("CURRENCY_GOLD_BAR"), iVar11, 1, 1) > 0)
				{
					uParam0->f_326 = func_336(uParam0->f_326);
				}
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_8[iParam1 /*40*/], &(uParam0->f_8[iParam1 /*40*/].f_18[0 /*7*/].f_4), true, false);
				return;
			}
			uParam0->f_324 = func_212("CUTSCENE_ACTION_PURCHASE", joaat("INPUT_INTERACT_LOCKON_POS"), 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			func_213(uParam0->f_324, 6, 1);
			func_214(uParam0->f_324, 19, 0, 1);
			if (func_337(iVar11) || func_338(iVar11))
			{
				func_340(uParam0->f_324, "CUTSCENE_ACTION_PURCHASE_OFFER", func_339(iVar0), uParam0->f_326, 1);
			}
			else
			{
				func_340(uParam0->f_324, "CUTSCENE_ACTION_PURCHASE", func_339(iVar0), uParam0->f_326, 1);
			}
			uParam0->f_325 = func_212("CUTSCENE_ACTION_DONT_PURCHASE", joaat("INPUT_INTERACT_LOCKON_NEG"), 6, 570, uParam0->f_330, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("LONG_TIMED_EVENT"), 0);
			func_213(uParam0->f_325, 6, 1);
			func_214(uParam0->f_325, 19, 0, 1);
			MISC::SET_BIT(&(uParam0->f_8[iParam1 /*40*/].f_1), 6);
		}
		if (!MISC::IS_BIT_SET(uParam0->f_8[iParam1 /*40*/].f_1, 6))
		{
			return;
		}
		if (func_217(uParam0->f_324, 1))
		{
			func_216(uParam0->f_325, 0, 1, 1);
			func_341(uParam0->f_325, 0, 1);
			func_216(uParam0->f_324, 0, 1, 1);
			func_341(uParam0->f_324, 0, 1);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_8[iParam1 /*40*/], &(uParam0->f_8[iParam1 /*40*/].f_18[1 /*7*/].f_4), true, false);
			uParam0->f_327 = 1;
			func_75(uParam0);
			return;
		}
		if (func_217(uParam0->f_325, 1))
		{
			func_216(uParam0->f_325, 0, 1, 1);
			func_341(uParam0->f_325, 0, 1);
			func_216(uParam0->f_324, 0, 1, 1);
			func_341(uParam0->f_324, 0, 1);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_8[iParam1 /*40*/], &(uParam0->f_8[iParam1 /*40*/].f_18[0 /*7*/].f_4), true, false);
			uParam0->f_327 = 0;
			uParam0->f_328 = 1;
			return;
		}
	}
	else if (MISC::IS_BIT_SET(uParam0->f_8[iParam1 /*40*/].f_1, 6))
	{
		func_216(uParam0->f_325, 0, 1, 1);
		func_341(uParam0->f_325, 0, 1);
		func_216(uParam0->f_324, 0, 1, 1);
		func_341(uParam0->f_324, 0, 1);
		MISC::CLEAR_BIT(&(uParam0->f_8[iParam1 /*40*/].f_1), 6);
	}
}

void func_194(var uParam0)
{
	if ((uParam0->f_329 || uParam0->f_327) || uParam0->f_328)
	{
		if (!MISC::IS_BIT_SET(uParam0->f_305, 0))
		{
			if (func_98(*uParam0))
			{
				func_101(*uParam0, 1);
				MISC::SET_BIT(&(uParam0->f_305), 0);
			}
		}
	}
}

int func_195(int* iParam0)
{
	return func_342(iParam0->f_1);
}

bool func_196(var uParam0, var uParam1)
{
	if (TELEMETRY::_0xF184B3ECE36219CF(uParam0, uParam1))
	{
		return true;
	}
	return false;
}

int func_197(int iParam0, var uParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346.f_20)
	{
		if (Global_1293346.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			*uParam1 = { Global_1293346.f_20.f_1[iVar0 /*21*/] };
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_198(int iParam0)
{
	return func_343(iParam0);
}

void func_199(int iParam0)
{
	func_344(iParam0);
}

void func_200(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_229[iVar0 /*27*/].f_1[iVar1 /*6*/]))
			{
			}
			else
			{
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_229[iVar0 /*27*/].f_1[iVar1 /*6*/], true);
			}
			iVar1++;
		}
		iVar0++;
	}
}

int func_201(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_89[iVar0 /*15*/].f_1))
		{
		}
		else
		{
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_89[iVar0 /*15*/].f_1, true);
			iVar1++;
		}
		iVar0++;
	}
	return 1;
}

bool func_202(int iParam0, var uParam1)
{
	if (!func_270(iParam0))
	{
		return false;
	}
	if ((iParam0 == 28 || iParam0 == 29) || iParam0 == 33)
	{
		*uParam1 = 0;
		return true;
	}
	if (func_345() != -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1051439.f_72[iParam0 /*75*/].f_21))
		{
			*uParam1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1051439.f_72[iParam0 /*75*/].f_21);
		}
		else
		{
			return false;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Global_1915715.f_3[iParam0 /*447*/].f_23))
	{
		*uParam1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1915715.f_3[iParam0 /*447*/].f_23);
	}
	else
	{
		return false;
	}
	return true;
}

void func_203(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_346(iParam0, 33554432);
	}
	else
	{
		func_347(iParam0, 33554432);
	}
}

void func_204(float fParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	MISC::CLEAR_AREA(vVar1, fParam0, 65536);
	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(vVar1, fParam0);
}

bool func_205()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

void func_206(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	Global_1896738.f_3948 = MISC::GET_GAME_TIMER();
	Global_1896738.f_3948.f_1 = iParam0;
}

bool func_207(var uParam0, int iParam1)
{
	if (6 == *uParam0)
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_8[iParam1 /*40*/], "MOON_INT_P2A1_T01_Shot_2", 0))
		{
			return false;
		}
	}
	return true;
}

void func_208(var uParam0)
{
	int iVar0;

	if (*uParam0 != 5)
	{
		return;
	}
	if (!MISC::IS_BIT_SET(uParam0->f_305, 13))
	{
		return;
	}
	if (!func_202(38, &iVar0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	func_203(func_131(), 0);
	ENTITY::SET_ENTITY_VISIBLE(iVar0, true);
	MISC::CLEAR_BIT(&(uParam0->f_305), 13);
}

bool func_209(var uParam0)
{
	return func_348(*uParam0, 1);
}

void func_210(var uParam0, bool bParam1)
{
	if (bParam1 || !func_209(uParam0))
	{
		func_349(uParam0);
	}
}

int func_211(var uParam0)
{
	if (!func_209(uParam0))
	{
		return 0;
	}
	if (func_350(uParam0))
	{
		return uParam0->f_2;
	}
	return func_351(uParam0->f_1);
}

int func_212(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_352(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_353(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_213(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_89(iParam0))
	{
		return;
	}
	iVar0 = func_219(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1951255[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_0xF4A5C4509BF923B1(Global_1951255[iVar0 /*23*/].f_3, iParam1);
}

void func_214(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_89(iParam0))
	{
		return;
	}
	iVar0 = func_219(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1951255[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1951255[iVar0 /*23*/].f_3, iParam1, iParam2);
}

void func_215(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_89(iParam0))
	{
		return;
	}
	iVar0 = func_219(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1951255[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1951255[iVar0 /*23*/].f_3, MISC::_CREATE_VAR_STRING(2, sParam1, sParam2, sParam3));
}

void func_216(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_89(iParam0))
	{
		return;
	}
	iVar0 = func_219(iParam0);
	if (bParam1)
	{
		func_354(iParam0, 4);
		if (bParam3)
		{
			func_355(iVar0, 1);
		}
		func_356(iVar0, 1);
	}
	else
	{
		func_357(iParam0, 4);
		func_356(iVar0, 0);
	}
}

bool func_217(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_89(iParam0))
	{
		return false;
	}
	iVar0 = func_219(iParam0);
	if (HUD::_UIPROMPT_HAS_HOLD_AUTO_FILL_MODE(Global_1951255[iVar0 /*23*/].f_3))
	{
		if (Global_1951255[iVar0 /*23*/].f_20)
		{
			iVar1 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iVar1 = MISC::_GET_SYSTEM_TIME();
		}
		uVar2 = HUD::_0x81801291806DBC50(Global_1951255[iVar0 /*23*/].f_3);
		if (!HUD::_UIPROMPT_IS_ACTIVE(Global_1951255[iVar0 /*23*/].f_3))
		{
			iVar3 = (iVar1 - Global_1951255[iVar0 /*23*/].f_21);
			iVar4 = BUILTIN::FLOOR((IntToFloat(Global_1951255[iVar0 /*23*/].f_18) * (1f - Global_1951255[iVar0 /*23*/].f_22)));
			if (iVar3 > iVar4)
			{
				return true;
			}
		}
		else
		{
			Global_1951255[iVar0 /*23*/].f_21 = iVar1;
			Global_1951255[iVar0 /*23*/].f_22 = uVar2;
		}
	}
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1951255[iVar0 /*23*/].f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(Global_1951255[iVar0 /*23*/].f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(Global_1951255[iVar0 /*23*/].f_3);
}

bool func_218(int iParam0, var uParam1)
{
	struct<4> Var0;
	vector3 vVar5;
	float fVar8;
	int iVar9;
	vector3 vVar10[24];

	Var0 = Global_1071686.f_28448[48 /*4*/].f_3;
	Var0.f_2 = -738708473;
	Var0.f_3 = func_358(iParam0);
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		return false;
	}
	iVar9 = 0;
	while (iVar9 < 3)
	{
		vVar5 = { func_251() };
		fVar8 = 0f;
		StringCopy(&cVar10, "vPlayerPos", 24);
		StringIntConCat(&cVar10, iVar9 + 1, 24);
		Var0.f_2 = 491979052;
		Var0.f_3 = MISC::GET_HASH_KEY(&cVar10);
		DATAFILE::_DATAFILE_GET_VECTOR(&vVar5, &Var0);
		StringCopy(&cVar10, "fPlayerHead", 24);
		StringIntConCat(&cVar10, iVar9 + 1, 24);
		Var0.f_2 = -1023214806;
		Var0.f_3 = MISC::GET_HASH_KEY(&cVar10);
		DATAFILE::_DATAFILE_GET_FLOAT(&fVar8, &Var0);
		*(uParam1[iVar9 /*3*/]) = { vVar5 };
		uParam1->f_10[iVar9] = fVar8;
		vVar5 = { func_251() };
		fVar8 = 0f;
		StringCopy(&cVar10, "vHorsePos", 24);
		StringIntConCat(&cVar10, iVar9 + 1, 24);
		Var0.f_2 = 491979052;
		Var0.f_3 = MISC::GET_HASH_KEY(&cVar10);
		DATAFILE::_DATAFILE_GET_VECTOR(&vVar5, &Var0);
		StringCopy(&cVar10, "fHorseHead", 24);
		StringIntConCat(&cVar10, iVar9 + 1, 24);
		Var0.f_2 = -1023214806;
		Var0.f_3 = MISC::GET_HASH_KEY(&cVar10);
		DATAFILE::_DATAFILE_GET_FLOAT(&fVar8, &Var0);
		uParam1->f_14[iVar9 /*3*/] = { vVar5 };
		uParam1->f_24[iVar9] = fVar8;
		iVar9++;
	}
	return true;
}

int func_219(int iParam0)
{
	return iParam0;
}

void func_220(int iParam0)
{
	if (!func_359(iParam0))
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

void func_221(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_260(62);
		if (bParam1)
		{
			func_260(69);
		}
	}
	else
	{
		func_261(62);
		func_261(50);
		func_261(69);
	}
}

bool func_222(int iParam0)
{
	int iVar0;
	int iVar1;

	if (Global_1296859.f_16 == Global_1296859.f_10)
	{
		return true;
	}
	switch (iParam0)
	{
		case 2:
			iVar1 = 13;
			while (iVar1 <= 15)
			{
				iVar0 = func_360(2, iVar1);
				if (iVar0 == 0)
				{
					return false;
				}
				if (!NETWORK::_0xFBE782B3165AC8EC(iVar0))
				{
					return false;
				}
				iVar1++;
			}
			return true;
		default:
			break;
	}
	return true;
}

int func_223(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -562854755;
				case 1:
					return -193397860;
				case 2:
					return -1639158743;
				case 3:
					return -545263819;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -331472846;
				case 1:
					return 1266428317;
				case 2:
					return -1342435444;
				case 3:
					return -243002563;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 429079746;
				case 1:
					return 1587973176;
				case 2:
					return 1338229360;
				case 3:
					return -271501111;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return 771711526;
				case 1:
					return -466995375;
				case 2:
					return -398924971;
				case 3:
					return -1232006170;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return -2052512212;
				case 1:
					return -1144971953;
				case 2:
					return 86781479;
				case 3:
					return 416111513;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return -446960320;
				case 1:
					return -2015262927;
				case 2:
					return -707938197;
				case 3:
					return 2136054096;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return -1149863246;
				case 1:
					return 407185110;
				case 2:
					return -769170006;
				case 3:
					return -411703805;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return -1554709632;
				case 1:
					return 410660064;
				case 2:
					return -254646314;
				case 3:
					return 1524612084;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_224(int iParam0)
{
	if (iParam0 <= 0 || iParam0 >= 9)
	{
		return -1;
	}
	return Global_1293332[iParam0];
}

bool func_225(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 2147483647)
	{
		return false;
	}
	return true;
}

int func_226(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (Global_1293346.f_458.f_44[iVar0 /*30*/] == -1)
		{
		}
		else if (Global_1293346.f_458.f_44[iVar0 /*30*/] != iParam0)
		{
		}
		else
		{
			return Global_1293346.f_458.f_44[iVar0 /*30*/].f_1;
		}
		iVar0++;
	}
	if (bParam1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_1293346.f_458.f_1245[iVar0 /*30*/] == -1)
		{
		}
		else if (Global_1293346.f_458.f_1245[iVar0 /*30*/] != iParam0)
		{
		}
		else
		{
			return Global_1293346.f_458.f_1245[iVar0 /*30*/].f_1;
		}
		iVar0++;
	}
	return 0;
}

int func_227(int iParam0, int iParam1)
{
	struct<30> Var0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (Global_1293346.f_458.f_1546 >= 40)
	{
		func_361();
		return -1;
	}
	Var0 = -1;
	Var0.f_5.f_1 = 11;
	Var0.f_18.f_1 = 10;
	Var0.f_4 = iParam0;
	Var0 = func_362();
	Var0.f_3 = iParam1;
	func_363(Var0, 0);
	return Var0;
}

void func_228(int iParam0, int iParam1)
{
	if (!func_132(iParam0))
	{
		return;
	}
	Global_1293332[iParam0] = iParam1;
}

void func_229(int iParam0)
{
	if (!GANG::_0x424B17A7DC5C90BC(Global_1296859.f_154[Global_1296859]) && !func_222(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 2:
			if (!PLAYER::_0x354F689C4FFAAB37(PLAYER::_0x8E84119A23C16623(joaat("CS_MP_SAMSON_FINCH"), 0, 0)))
			{
				PLAYER::_0x7C32191D9FB2BDEA(PLAYER::_0x8E84119A23C16623(joaat("CS_MP_SAMSON_FINCH"), 0, 0));
			}
			break;
		case 6:
			if (!PLAYER::_0x354F689C4FFAAB37(PLAYER::_0x8E84119A23C16623(joaat("CS_MP_MAGGIE"), 0, 0)))
			{
				PLAYER::_0x7C32191D9FB2BDEA(PLAYER::_0x8E84119A23C16623(joaat("CS_MP_MAGGIE"), 0, 0));
			}
			if (!PLAYER::_0x354F689C4FFAAB37(PLAYER::_0x8E84119A23C16623(joaat("CS_MP_DANNYLEE"), 0, 0)))
			{
				PLAYER::_0x7C32191D9FB2BDEA(PLAYER::_0x8E84119A23C16623(joaat("CS_MP_DANNYLEE"), 0, 0));
			}
			if (!PLAYER::_0x354F689C4FFAAB37(PLAYER::_0x8E84119A23C16623(joaat("CS_MP_AGENT_HIXON"), 0, 0)))
			{
				PLAYER::_0x7C32191D9FB2BDEA(PLAYER::_0x8E84119A23C16623(joaat("CS_MP_AGENT_HIXON"), 0, 0));
			}
			break;
	}
}

void func_230()
{
	Global_1960071 = 0;
}

bool func_231(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return Global_1293165[iParam0] == iParam0;
}

var func_232(int iParam0)
{
	return Global_1109804.f_260.f_5458[iParam0];
}

var func_233(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_234(bool bParam0)
{
	if (Global_17411.f_3078.f_1 == -1)
	{
		return;
	}
	if (Global_17411.f_3078 == bParam0)
	{
		return;
	}
	Global_17411.f_3078 = bParam0;
	if (bParam0)
	{
		func_364(Global_17411.f_3078.f_1);
		Global_1051439.f_4661.f_7 = 1;
		func_365(1, 1017438712);
	}
}

int func_235(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
		{
			return -1;
		}
	}
	return Global_1298536[iParam0 /*87*/].f_5.f_12;
}

bool func_236(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_286(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_366(iParam0);
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
			if (!func_367(iParam0, 1))
			{
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_368(iParam0))
			{
				return true;
			}
			break;
	}
	return func_369(iParam0, 0, 0, 0) >= iParam1;
}

void func_237(int iParam0)
{
	if (STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		func_370(iParam0);
	}
}

bool func_238()
{
	return Global_1940085 == 1;
}

bool func_239()
{
	return Global_1940085 == 2;
}

void func_240(float fParam0)
{
}

void func_241()
{
	GRAPHICS::ANIMPOSTFX_STOP("PlayerDrunk01");
	Global_1940085.f_15 = 0f;
}

bool func_242(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_371(iParam0))
	{
		return false;
	}
	iVar0 = func_372(iParam0, 1);
	if (!func_373(Global_1146212.f_35859.f_919[iVar0 /*12*/]))
	{
		return true;
	}
	iVar3 = func_374(Global_1146212.f_35859.f_919[iVar0 /*12*/], 1);
	iVar4 = 0;
	while (iVar4 < Global_1146212.f_35859[iVar3 /*6*/].f_5)
	{
		iVar1 = Global_1146212.f_35859[iVar3 /*6*/][iVar4];
		switch (func_375(iParam0, iVar1))
		{
			case 0:
				func_376(iVar1, iParam0, iVar4);
				break;
			case 1:
				iVar5 = 0;
				while (iVar5 < Global_1146212.f_35859.f_11700)
				{
					if (Global_1146212.f_35859.f_9503[iVar5 /*3*/] != iVar1 || Global_1146212.f_35859.f_9503[iVar5 /*3*/].f_1 != iParam0)
					{
					}
					else
					{
						func_376(iVar1, iParam0, iVar4);
						func_377(&(Global_1146212.f_35859.f_9503[iVar5 /*3*/]));
						Global_1146212.f_35859.f_11700 = (Global_1146212.f_35859.f_11700 - 1);
						Global_1146212.f_35859.f_9503[iVar5 /*3*/] = { Global_1146212.f_35859.f_9503[Global_1146212.f_35859.f_11700 /*3*/] };
						func_377(&(Global_1146212.f_35859.f_9503[Global_1146212.f_35859.f_11700 /*3*/]));
					}
					else
					{
						iVar5++;
					}
				}
				break;
			case 2:
				Jump @606; //curOff = 387
				iVar2 = func_378(iVar1, 1);
				func_379(iVar2, -1);
				if (Global_1146212.f_35859.f_3116[iVar2 /*31*/].f_29 <= 0)
				{
					func_380(iVar2, 0);
					iVar6 = 0;
					while (iVar6 < Global_1146212.f_35859.f_9502)
					{
						if (Global_1146212.f_35859.f_9302[iVar6] != iVar1)
						{
						}
						else
						{
							Global_1146212.f_35859.f_9302[iVar6] = -1;
							Global_1146212.f_35859.f_9502 = (Global_1146212.f_35859.f_9502 - 1);
							Global_1146212.f_35859.f_9302[iVar6] = Global_1146212.f_35859.f_9302[Global_1146212.f_35859.f_9502];
							Global_1146212.f_35859.f_9302[Global_1146212.f_35859.f_9502] = -1;
						}
						else
						{
							iVar6++;
						}
					}
				}
				iVar4++;
			}
			Global_1146212.f_35859.f_919[iVar0 /*12*/] = -1;
			func_381(&(Global_1146212.f_35859.f_919[iVar0 /*12*/]));
			return true;
		}

void func_243(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	ENTITY::SET_ENTITY_VISIBLE(iVar1, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 2, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 3, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 11, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 12, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 1, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 0, true);
	PED::SET_PED_CAN_RAGDOLL(iVar1, true);
	bVar2 = iParam0 & 256 != false;
	if (bVar2)
	{
		PLAYER::SET_PLAYER_CONTROL(iVar0, true, 0, false);
	}
	else
	{
		PLAYER::SET_PLAYER_CONTROL(iVar0, true, 4, false);
	}
	ENTITY::FREEZE_ENTITY_POSITION(iVar1, false);
	if (iParam0 & 512 != 0)
	{
	}
	else
	{
		func_382();
	}
	PLAYER::SET_PLAYER_INVINCIBLE(iVar0, false);
	if (!PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
	{
		ENTITY::SET_ENTITY_COLLISION(iVar1, true, false);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar1, true, false);
	}
}

void func_244(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!bParam0)
	{
	}
	if (bParam1)
	{
	}
	if (bParam2)
	{
	}
	if (bParam3)
	{
	}
	if (bParam6)
	{
	}
	if (bParam4)
	{
	}
	if (bParam5)
	{
	}
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	iVar2 = 0;
	if (bParam3 && !PED::IS_PED_FATALLY_INJURED(iVar1))
	{
		iVar2 = 4;
	}
	if (bParam4)
	{
		iVar2 |= 256;
	}
	if (bParam5)
	{
		iVar2 |= 2048;
	}
	PLAYER::SET_PLAYER_CONTROL(iVar0, false, iVar2, false);
	ENTITY::SET_ENTITY_VISIBLE(iVar1, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 2, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 3, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 11, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 12, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 1, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 0, bParam0);
	if (bParam1)
	{
		PLAYER::SET_PLAYER_INVINCIBLE(iVar0, true);
	}
	if ((!PED::IS_PED_IN_ANY_VEHICLE(iVar1, true) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT(iVar1)) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iVar1))
	{
		if (bParam2)
		{
			ENTITY::SET_ENTITY_COLLISION(iVar1, false, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar1, false, false);
			ENTITY::FREEZE_ENTITY_POSITION(iVar1, true);
		}
	}
	if (bParam3 && !PED::IS_PED_FATALLY_INJURED(iVar1))
	{
		if (TASK::_0x9FF5F9B24E870748(iVar1))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, false, !bParam6);
		}
	}
}

int func_245(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	return Global_1145091[iParam0 /*35*/].f_8.f_1;
}

bool func_246(var uParam0, int iParam1)
{
	return (uParam0->f_3 && iParam1) != 0;
}

int func_247(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return Global_1134390[iParam0 /*83*/].f_38.f_12.f_5;
}

int func_248(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_249(int iParam0)
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

int func_250(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MPSW_LOCATION_00"):
			return 0;
		case joaat("MPSW_LOCATION_01"):
			return 1;
		case joaat("MPSW_LOCATION_02"):
			return 2;
		case joaat("MPSW_LOCATION_03"):
			return 3;
		case joaat("MPSW_LOCATION_04"):
			return 4;
		case joaat("MPSW_LOCATION_05"):
			return 5;
		case joaat("MPSW_LOCATION_06"):
			return 6;
		case joaat("MPSW_LOCATION_07"):
			return 7;
		case joaat("MPSW_LOCATION_08"):
			return 8;
		case joaat("MPSW_LOCATION_09"):
			return 9;
		case joaat("MPSW_LOCATION_10"):
			return 10;
		case joaat("MPSW_LOCATION_11"):
			return 11;
		default:
			break;
	}
	return 0;
}

Vector3 func_251()
{
	return 0f, 0f, 0f;
}

bool func_252(int iParam0, var uParam1, var uParam2)
{
	struct<4> Var0;
	float fVar5;

	Var0 = Global_1071686.f_28448[48 /*4*/].f_3;
	Var0.f_2 = -738708473;
	Var0.f_3 = func_358(iParam0);
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		return false;
	}
	Var0.f_2 = -99852754;
	Var0.f_3 = MISC::GET_HASH_KEY("vPropPos");
	DATAFILE::_DATAFILE_GET_VECTOR(uParam1, &Var0);
	fVar5 = 0f;
	Var0.f_2 = 1059891245;
	Var0.f_3 = MISC::GET_HASH_KEY("fPropHead");
	DATAFILE::_DATAFILE_GET_FLOAT(&fVar5, &Var0);
	uParam2->f_2 = fVar5;
	return true;
}

int func_253(int iParam0, vector3 vParam1, float fParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar5 = ENTITY::_0x59B57C4B06531E1E(vParam1, fParam4, iVar0, 3);
	iVar4 = 0;
	while (iVar4 <= (iVar5 - 1))
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar0);
		iVar2 = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(iVar1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
		}
		else if (!ENTITY::IS_ENTITY_VISIBLE(iVar2))
		{
		}
		else if (iParam0 != ENTITY::GET_ENTITY_MODEL(iVar2))
		{
		}
		else
		{
			iVar3 = iVar2;
		}
		else
		{
			iVar4++;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar3;
}

int func_254()
{
	return Global_1102219.f_3672;
}

void func_255(int iParam0, vector3 vParam1)
{
	vector3 vVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		vVar0 = { vParam1 };
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), false))
		{
			ENTITY::SET_ENTITY_COORDS(iParam0, vVar0, true, false, true, true);
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(iParam0, vParam1, true, false, true, true);
		}
	}
}

void func_256(var uParam0, int iParam1)
{
	char cVar0[64];
	int iVar8;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
	{
		return;
	}
	IntToString(&cVar0, uParam0->f_1, 64);
	if (!PED::ADD_RELATIONSHIP_GROUP(&cVar0, &(uParam0->f_10)))
	{
		return;
	}
	iVar8 = 0;
	while (iVar8 <= 86)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam1, uParam0->f_10, func_383(iVar8, 1));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam1, func_383(iVar8, 1), uParam0->f_10);
		iVar8++;
	}
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_1, uParam0->f_10);
}

int func_257()
{
	if ((Global_1296859.f_16 < 0 || Global_1296859.f_16 >= 32) || !NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Global_1296859.f_154[Global_1296859.f_16]))
	{
		return 0;
	}
	if (PED::IS_PED_MALE(PLAYER::GET_PLAYER_PED(Global_1296859.f_154[Global_1296859.f_16])))
	{
		return 0;
	}
	return 1;
}

bool func_258(int iParam0, var uParam1, char* sParam2)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case 5:
		default:
			break;
	}
	return false;
	StringCopy(sParam2, "local_player_variation", 64);
	*uParam1 = 0;
	iVar0 = func_131();
	if (iVar0 == -1)
	{
		return true;
	}
	if (!func_384(iVar0, &iVar1))
	{
		return true;
	}
	switch (iVar1)
	{
		case joaat("PROP_HUMAN_SEAT_CHAIR_READING"):
		default:
			return false;
			*uParam1 = 0;
			return true;
		case joaat("WORLD_HUMAN_SMOKE_NAZAR"):
			*uParam1 = 1;
			return true;
		case joaat("WORLD_HUMAN_DANCING"):
			*uParam1 = 2;
			return true;
			return true;
	}
}

var func_259(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	var uVar4;

	Var0 = iParam4;
	Var0.f_1 = iParam3;
	Var0.f_2 = sParam1;
	Var0.f_3 = sParam2;
	uVar4 = _NAMESPACE77::_0x339E16B41780FC35(uParam0, &Var0, iParam5);
	return uVar4;
}

int func_260(int iParam0)
{
	if (func_385(&(Global_1102219.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_261(int iParam0)
{
	if (func_386(&(Global_1102219.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_262(vector3 vParam0, var uParam3, float fParam4)
{
	var uVar0;
	int iVar1;
	int iVar2;

	uVar0 = Global_1071686.f_23887.f_366[func_387(vParam0) /*272*/];
	iVar1 = func_388(uVar0);
	if (iVar1 <= 0)
	{
		return false;
	}
	else
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
		if (func_389(uVar0, iVar2, uParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

void func_263(vector3 vParam0, float fParam3, vector3 vParam4, float fParam7, float fParam8, float fParam9, bool bParam10, int iParam11, float fParam12, int iParam13)
{
	if (func_390(255) == 4)
	{
		return;
	}
	if (func_133(vParam0))
	{
		return;
	}
	if (fParam8 < 0f && fParam9 < 0f)
	{
		fParam8 = Global_1901947.f_50;
		fParam9 = Global_1901947.f_50.f_1;
	}
	if (fParam8 == 0f && fParam9 == 0f)
	{
		fParam8 = Global_1901947.f_50;
		fParam9 = Global_1901947.f_50.f_1;
	}
	if (fParam9 < fParam8)
	{
		fParam8 = Global_1901947.f_50;
		fParam9 = Global_1901947.f_50.f_1;
	}
	if (bParam10)
	{
		func_391(0, 0, 0, 1);
	}
	func_260(0);
	func_260(3);
	Global_1102219.f_3919 = iParam11;
	Global_1102219.f_3920 = fParam12;
	Global_1102219.f_3921 = iParam13;
	func_392(&(Global_1102219.f_3849));
	Global_1102219.f_3849 = fParam3;
	Global_1102219.f_3849.f_5 = 1;
	Global_1102219.f_3849.f_17.f_6 = { vParam0 };
	Global_1102219.f_3849.f_17.f_3 = { 0f, 0f, 0f };
	Global_1102219.f_3849.f_17 = { fParam9, fParam9, fParam9 };
	Global_1102219.f_3849.f_17.f_9 = joaat("VOLSPHERE");
	if (fParam8 > 1f)
	{
		Global_1102219.f_3849.f_16 = 1;
		Global_1102219.f_3849.f_6.f_6 = { Global_1102219.f_3849.f_17.f_6 };
		Global_1102219.f_3849.f_6.f_3 = { 0f, 0f, 0f };
		Global_1102219.f_3849.f_6 = { fParam8, fParam8, fParam8 };
		Global_1102219.f_3849.f_6.f_9 = joaat("VOLSPHERE");
	}
	func_393(&(Global_1102219.f_3888));
	Global_1102219.f_3888.f_6 = { vParam4 };
	Global_1102219.f_3888 = fParam7;
	Global_1102219.f_3888.f_5 = 1;
	Global_1102219.f_26.f_3341 = 0;
	Global_1102219.f_26.f_3342 = 0;
	func_394(Global_1102219.f_3849, 36);
	func_395(Global_1102219.f_3888, 36);
}

bool func_264(var uParam0)
{
	return uParam0->f_306 == 0;
}

Vector3 func_265(var uParam0)
{
	switch (*uParam0)
	{
		case 4:
			return 10f, 10f, 5f;
		case 3:
			return 5f, 5f, 5f;
		case 7:
			return 5f, 3.947f, 8.828f;
		default:
			break;
	}
	return 11.8675f, 12.9474f, 8.828214f;
}

float func_266(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

bool func_267(var uParam0)
{
	switch (*uParam0)
	{
		case 3:
		case 4:
		case 5:
			if (func_396())
			{
				return true;
			}
			if (Global_1296851.f_2.f_1 == 1 || func_397())
			{
				return true;
			}
			break;
		case 8:
			if (func_160(0))
			{
				return true;
			}
	}
	return false;
}

bool func_268(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_MOUNT(Global_1296859.f_8);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iVar0);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_A_PED(iVar1)) && PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1)))
		{
			if (PED::_IS_PED_HOGTIED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1)))
			{
				*iParam0 = iVar1;
				return true;
			}
		}
	}
	return false;
}

void func_269(int iParam0)
{
	vector3 vVar0;
	var uVar4;

	vVar0.x = 196;
	vVar0.f_1 = PLAYER::PLAYER_ID();
	vVar0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_0x31010318BA9897AC(&uVar4, iParam0);
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &vVar0, 4, 16, &uVar4);
}

bool func_270(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 40);
}

bool func_271(int iParam0, int iParam1)
{
	if (!func_270(iParam0))
	{
		return false;
	}
	if (func_345() == -1)
	{
		return (Global_1915715.f_3[iParam0 /*447*/].f_6 && iParam1) != 0;
	}
	else
	{
		return (Global_1051439.f_72[iParam0 /*75*/].f_1 && iParam1) != 0;
	}
	return false;
}

void func_272(int iParam0, int iParam1)
{
	if (!func_270(iParam0))
	{
		return;
	}
	if (func_345() == -1)
	{
		Global_1915715.f_3[iParam0 /*447*/].f_6 = (Global_1915715.f_3[iParam0 /*447*/].f_6 || iParam1);
	}
	else
	{
		Global_1051439.f_72[iParam0 /*75*/].f_1 = (Global_1051439.f_72[iParam0 /*75*/].f_1 || iParam1);
	}
}

void func_273(int iParam0, int iParam1)
{
	if (!func_270(iParam0))
	{
		return;
	}
	if (func_345() == -1)
	{
		Global_1915715.f_3[iParam0 /*447*/].f_6 = (Global_1915715.f_3[iParam0 /*447*/].f_6 - (Global_1915715.f_3[iParam0 /*447*/].f_6 && iParam1));
	}
	else
	{
		Global_1051439.f_72[iParam0 /*75*/].f_1 = (Global_1051439.f_72[iParam0 /*75*/].f_1 - (Global_1051439.f_72[iParam0 /*75*/].f_1 && iParam1));
	}
}

bool func_274(int iParam0)
{
	if (func_398())
	{
		if (Global_1915715.f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

int func_275(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1940258.f_12)
	{
		if ((bParam2 || Global_1940258.f_13 > 0) || Global_1940258.f_11 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1940258.f_9 == 1370593166)
	{
		return 0;
	}
	if (Global_1940258.f_14 > 0 || (bParam2 && Global_1940258.f_14 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1940258.f_7)
		{
			if (bParam2 || Global_1940258.f_15 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_276(int iParam0, bool bParam1)
{
	float fVar0;

	switch (iParam0)
	{
		case 1:
		default:
			fVar0 = 0f;
			break;
			fVar0 = 100f;
			break;
		case 2:
			fVar0 = 100f;
			break;
		case 3:
			fVar0 = 100f;
			break;
		case 4:
			fVar0 = 100f;
			break;
		case 5:
			fVar0 = 100f;
			break;
		case 6:
			fVar0 = 100f;
			break;
		case 7:
			fVar0 = 100f;
			break;
		case 8:
			fVar0 = 100f;
			break;
	}
	if (bParam1)
	{
		fVar0 = (fVar0 * fVar0);
	}
	return fVar0;
}

void func_277(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_399(iParam0, iParam1);
	iVar1 = 0;
	while (iVar1 <= (29 - 1))
	{
		iVar2 = ((29 - 1) - iVar1);
		if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, false, iVar2, false))
		{
			if (iVar0 != joaat("WEAPON_UNARMED"))
			{
				if (iVar2 == 1)
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 116, true);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(iParam1, iVar0, true, iVar2, false, false);
			}
		}
		iVar1++;
	}
}

void func_278(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_279(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_280(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return true;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 0)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_281(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_34) && !PED::IS_PED_INJURED(Global_34))
		{
			if (PED::_GET_RIDER_OF_MOUNT(iParam0, false) == Global_34)
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_UD"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
			}
		}
	}
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 0f);
	if (func_280(iParam0, 1041577989))
	{
		return false;
	}
	if (TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0)))
	{
		return true;
	}
	return false;
}

bool func_282(int iParam0, vector3 vParam1)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	vVar3 = { vVar0 + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	return func_400(vVar0, vVar3, vParam1);
}

bool func_283(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_284(int iParam0, var uParam1)
{
	float fVar0;

	if (!func_280(iParam0, 1041577989))
	{
		return true;
	}
	fVar0 = TASK::_0xA710DC5D25F8B942(iParam0, 1041577989);
	if (func_279(uParam1, 32))
	{
		if (fVar0 >= 1.85f)
		{
			return true;
		}
		return false;
	}
	if (func_279(uParam1, 256))
	{
		if (fVar0 >= 1f)
		{
			return true;
		}
		return false;
	}
	if (func_279(uParam1, 2048))
	{
		if (fVar0 >= 1.5f)
		{
			return true;
		}
		return false;
	}
	return true;
}

void func_285(var uParam0, int iParam1)
{
	func_401(uParam0, iParam1);
}

bool func_286(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_287(int iParam0)
{
	if (!func_205() && func_402())
	{
		return true;
	}
	return func_314(iParam0, 1435272033);
}

bool func_288(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	if (!func_403(iParam0))
	{
		return false;
	}
	bVar1 = func_283(iParam3, 2);
	bVar2 = func_299(iParam0, -570078785, bVar1);
	bVar3 = func_299(iParam0, -915411861, bVar1);
	if (func_299(iParam0, 997808187, bVar1))
	{
		bParam1 = 997808187;
	}
	else if (bParam4 && (func_404(iParam0, &iVar0) || func_405(iParam0, &iVar0)))
	{
		bParam1 = iVar0;
	}
	else if (bVar2 && !bVar3)
	{
		bParam1 = -570078785;
	}
	else if (bVar2 && bVar3)
	{
		if (func_294())
		{
			bParam1 = -570078785;
		}
		else
		{
			bParam1 = -915411861;
		}
	}
	else if (bVar3)
	{
		bParam1 = -915411861;
	}
	else if (func_295(15) && func_299(iParam0, 369710026, bVar1))
	{
		bParam1 = 369710026;
	}
	if (bParam1 == 0 && bParam2)
	{
		return -915411861;
	}
	return bParam1;
}

bool func_289(int iParam0, bool bParam1)
{
	return (func_293(iParam0, 997808187) && !func_406(iParam0, 997808187, bParam1));
}

bool func_290(int iParam0)
{
	int iVar0;

	iVar0 = func_181(iParam0, 1);
	if (iVar0 != 0 && func_299(iVar0, 997808187, 0))
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1831140953))
		{
			return true;
		}
	}
	return false;
}

bool func_291(int iParam0, int iParam1)
{
	*iParam1 = func_407(iParam0, 1);
	return *iParam1 != 0;
}

bool func_292(int iParam0, int iParam1)
{
	*iParam1 = func_408(iParam0, 1, 0);
	return *iParam1 != 0;
}

bool func_293(int iParam0, bool bParam1)
{
	if (!func_286(iParam0, 0))
	{
		return false;
	}
	if (func_180(iParam0))
	{
		return func_299(func_181(iParam0, 0), bParam1, 0);
	}
	return ITEMDATABASE::_0xDEE7B3C76ED664BE(iParam0, bParam1) > 0;
}

bool func_294()
{
	return Global_1915715.f_22477;
}

bool func_295(int iParam0)
{
	if (iParam0 == 34 && Global_1915715.f_22504.f_1)
	{
		return true;
	}
	if (func_160(1))
	{
		if (Global_1915715.f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_296(int iParam0, bool bParam1)
{
	if (!func_314(iParam0, 947377998))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_314(iParam0, -1090933859))
		{
			return func_181(iParam0, 1) != 0;
		}
		if ((func_406(iParam0, -915411861, 0) || func_406(iParam0, 600942249, 0)) || func_406(iParam0, -570078785, 0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

bool func_297(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;

	iVar0 = func_409(iParam0, 1);
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_300(iVar0, -2141192156))
	{
		return false;
	}
	if (bParam1)
	{
		if (!func_301(iVar0, -2141192156, &uVar1, 0, 0))
		{
			return false;
		}
	}
	return true;
}

bool func_298(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	*iParam1 = 0;
	if (!func_286(iParam0, 0))
	{
		return false;
	}
	if (func_410(iParam0))
	{
		return false;
	}
	if (func_314(iParam0, 81450561) || func_314(iParam0, 1342455455))
	{
		return false;
	}
	if (func_180(iParam0))
	{
		return false;
	}
	iVar0 = func_181(iParam0, 1);
	if (iVar0 == 0)
	{
		return false;
	}
	if (!func_299(iVar0, -570078785, 0))
	{
		return false;
	}
	if (Global_1915715.f_22504.f_2 == 1)
	{
		Var1 = { func_308(iParam0, 0, 0) };
		if (Var1.f_4 == 1084182731)
		{
			return false;
		}
	}
	*iParam1 = iVar0;
	return true;
}

bool func_299(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_403(iParam0))
	{
		return false;
	}
	if (ITEMDATABASE::_0xF540239F9937033B(iParam0, bParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_300(iParam0, bParam1);
	}
	return true;
}

bool func_300(int iParam0, bool bParam1)
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
		return false;
	}
	iVar473 = 0;
	iVar474 = 0;
	while (iVar474 < iVar471)
	{
		if (Var0[iVar474 /*47*/] == bParam1)
		{
			iVar473 = Var0[iVar474 /*47*/].f_35;
			iVar475 = 0;
			while (iVar475 < iVar473)
			{
				iVar472 = Var0[iVar474 /*47*/].f_36[iVar475];
				if (iVar472 == 0)
				{
				}
				else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar472))
				{
					return true;
				}
				iVar475++;
			}
		}
		iVar474++;
	}
	return false;
}

bool func_301(int iParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;

	if (!func_317(iParam0, bParam1, &Var0, &iVar31, 0, 1))
	{
		return false;
	}
	iVar34 = -1;
	if (Global_1915715.f_20638)
	{
		iVar34 = Global_1915715.f_20241;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			if (Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH"))
			{
				if (!bParam4 && !func_304(Var0[iVar32 /*2*/].f_1))
				{
					return false;
				}
			}
			else if (Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
			{
				if (!bParam4 && !func_303(Var0[iVar32 /*2*/].f_1))
				{
					return false;
				}
			}
			else
			{
				iVar33 = func_411(iVar34, Var0[iVar32 /*2*/]);
				if (iVar33 != 0)
				{
					iVar35 = func_412(Var0[iVar32 /*2*/], iVar33);
				}
				else
				{
					iVar35 = func_369(Var0[iVar32 /*2*/], 0, bParam3, 1);
				}
				if (iVar35 < Var0[iVar32 /*2*/].f_1)
				{
					*uParam2 = { Var0[iVar32 /*2*/] };
					return false;
				}
			}
			iVar32++;
		}
	}
	return true;
}

int func_302(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;

	if (!func_286(iParam0, 0))
	{
		Global_1051439.f_61 = 0;
		Global_1051439.f_46 = 0;
		return 0;
	}
	bVar1 = func_298(iParam0, &iVar0);
	if ((bParam2 && bVar1) || ((func_294() && bVar1) && iParam1 == 0))
	{
		if (func_299(iVar0, 997808187, 0) && !func_300(iVar0, 997808187))
		{
			Global_1051439.f_46 = 0;
			Global_1051439.f_61 = iParam0;
			return Global_1051439.f_46;
		}
		else if (func_299(iVar0, -570078785, 0))
		{
			if (bParam3)
			{
				iVar2 = func_413(iVar0, -570078785, 0, 1);
			}
			else
			{
				iVar2 = func_336(func_413(iVar0, -570078785, 0, 1));
			}
			Global_1051439.f_46 = iVar2;
			Global_1051439.f_61 = iParam0;
			return Global_1051439.f_46;
		}
	}
	iVar3 = iParam1;
	if (iVar3 == 0)
	{
		iVar3 = func_176(iParam0, iVar3, 1, -1, 1);
	}
	iVar4 = 0;
	if (func_414(iParam0))
	{
		iVar4 = func_415(iParam0);
	}
	else if (func_416(iParam0))
	{
		iVar4 = func_417(iParam0);
	}
	else if (func_418(iParam0))
	{
		iVar4 = func_419(iParam0);
	}
	else if (func_420(iParam0))
	{
		iVar4 = func_421(iParam0);
	}
	if (iVar4 != 0)
	{
		iVar2 = func_413(iVar4, iVar3, 0, bParam4);
		bVar5 = false;
		if (func_338(iVar3))
		{
			if (func_422(iVar4, joaat("CURRENCY_GOLD_BAR"), iVar3, 1, bParam4) > 0)
			{
				bVar5 = true;
			}
		}
		if ((iVar3 == -570078785 || bVar5) && !bParam3)
		{
			iVar2 = func_336(iVar2);
		}
		Global_1051439.f_61 = iParam0;
		return iVar2;
	}
	if (iVar3 == 997808187)
	{
		Global_1051439.f_61 = iParam0;
		Global_1051439.f_46 = 0;
		return 0;
	}
	else
	{
		iVar2 = func_334(iParam0, iVar3, bParam4, 0, 1, 0);
		bVar6 = false;
		if (func_338(iVar3))
		{
			if (func_335(iParam0, joaat("CURRENCY_GOLD_BAR"), iVar3, bParam4, 1) > 0)
			{
				bVar6 = true;
			}
		}
		if ((iVar3 == -570078785 || bVar6) && !bParam3)
		{
			iVar2 = func_336(iVar2);
		}
		Global_1051439.f_46 = iVar2;
		Global_1051439.f_61 = iParam0;
		if (Global_1051439.f_62 != Global_1051439.f_61)
		{
			Global_1051439.f_62 = Global_1051439.f_61;
		}
		else
		{
			Global_1051439.f_62 = 0;
		}
		return iVar2;
	}
	Global_1051439.f_46 = 0;
	return -1;
}

bool func_303(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(0, iParam0);
}

bool func_304(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_345() == 0)
	{
		return func_423(iParam0);
	}
	return iParam0 <= func_424();
}

bool func_305(int iParam0, bool bParam1, bool bParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, bool bParam7)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	bool bVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;

	if (func_180(iParam0))
	{
		return func_301(func_181(iParam0, 1), bParam2, uParam3, 1, 0);
	}
	if (!func_319(iParam0, bParam2, &Var0, &iVar31, 1, 0))
	{
		return false;
	}
	bVar35 = ((!bParam6 && func_425(0)) && !func_426());
	iVar37 = -1;
	if (Global_1915715.f_20638)
	{
		iVar37 = Global_1915715.f_20241;
	}
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (Var0[iVar34 /*2*/] == 0 || Var0[iVar34 /*2*/] == 1412640604)
		{
		}
		else
		{
			iVar32 = (Var0[iVar34 /*2*/].f_1 * bParam1);
			if (Var0[iVar34 /*2*/] == joaat("CURRENCY_CASH") && (bParam7 || func_304(iVar32)))
			{
				Jump @482; //curOff = 198
			}
			else if (Var0[iVar34 /*2*/] == joaat("CURRENCY_GOLD_BAR") && (bParam7 || func_303(iVar32)))
			{
			}
			else
			{
				iVar36 = func_411(iVar37, Var0[iVar34 /*2*/]);
				if (iVar36 != 0)
				{
					bParam5 = false;
					iVar33 = func_412(Var0[iVar34 /*2*/], iVar36);
				}
				else
				{
					iVar33 = func_369(Var0[iVar34 /*2*/], 0, !bVar35, 1);
				}
				if (iVar33 >= iVar32)
				{
				}
				else if (bVar35)
				{
					if (func_427(Var0[iVar34 /*2*/]) || func_428(Var0[iVar34 /*2*/]))
					{
						iVar38 = 0;
						if (bParam5)
						{
							iVar39 = func_429(7, Var0[iVar34 /*2*/], &iVar38);
						}
						iVar40 = func_430(Var0[iVar34 /*2*/], iVar36);
						if (((iVar33 + iVar39) + iVar40) >= iVar32)
						{
							if ((iVar33 + iVar40) < iVar32 && ENTITY::DOES_ENTITY_EXIST(iVar38))
							{
								*uParam4 = iVar38;
							}
						}
						else
						{
							Jump @466; //curOff = 422
							if (bParam5 && ((iVar33 + func_431(7, Var0[iVar34 /*2*/])) + func_432(Var0[iVar34 /*2*/])) >= iVar32)
							{
							}
							else
							{
								*uParam3 = { Var0[iVar34 /*2*/] };
								return false;
							}
						}
						iVar34++;
						return true;
					}
				}
			}
		}
	}
}

int func_306(int iParam0)
{
	if (!func_286(*iParam0, 0))
	{
		return 0;
	}
	if (!func_433(*iParam0))
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

int func_307(int* iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_9 = iParam2;
	Var0.f_10 = iParam3;
	Var0.f_14 = iParam5;
	if (!func_434(iParam0, iParam1, &Var0, iParam4, iParam6, iParam7, bParam8))
	{
		return 0;
	}
	func_435(Var0);
	return 1;
}

struct<5> func_308(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_436(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_366(iParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_320(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_437(bParam1) };
			if (bParam2 && func_438(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_439(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_439(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_440(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_441(bParam1) };
			switch (func_442(iParam0))
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
			if (func_443(iParam0, -1823706425))
			{
				Var0 = { func_320(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_443(iParam0, -1483207246))
			{
				Var0 = { func_320(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1911121386))
			{
				Var0 = { func_320(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_443(iParam0, -1653629781))
			{
				Var0 = { func_320(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_444(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_443(iParam0, -1653629781))
			{
				Var0 = { func_320(1384535894, Var0, 1784584921, bParam1) };
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

bool func_309(int iParam0)
{
	return func_314(iParam0, 1166200945);
}

bool func_310(int* iParam0, int iParam1, struct<4> Param2, bool bParam6, int iParam7, bool bParam8, int iParam9, bool bParam10)
{
	bool bVar0;
	struct<16> Var1;
	bool bVar17;
	bool bVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	var uVar22;
	struct<4> Var27;
	struct<4> Var31;
	struct<4> Var35;
	int iVar39;
	bool bVar40;
	struct<11> Var41;
	int iVar55;
	int iVar56;

	if (!func_286(iParam1, 0))
	{
		return false;
	}
	if (!func_445(iParam0, 0))
	{
		return false;
	}
	if (bParam8 == 0)
	{
		bParam8 = func_176(iParam1, bParam8, 1, -1, 1);
	}
	bVar0 = false;
	if (func_295(15))
	{
		bVar0 = true;
	}
	func_446(&iParam9, 32);
	func_446(&iParam9, 64);
	func_446(&iParam9, 4);
	func_446(&iParam9, 128);
	if (bParam6 < 1)
	{
		bParam6 = true;
	}
	if (!func_447(iParam0, iParam1, Param2, -1591664384, bParam8, bParam6, iParam9, 1))
	{
		return false;
	}
	Var1 = { func_448(iParam1, Param2, 1084182731, bParam6, 0) };
	Var1.f_13 = bParam8;
	Var1.f_12 = 1248274121;
	*iParam7 = { Var1 };
	if (!func_449(iParam0, joaat("USE")))
	{
		return false;
	}
	bVar17 = false;
	bVar18 = false;
	iVar19 = Global_1915715.f_20241.f_49;
	iVar20 = Global_1915715.f_20241.f_50;
	Var41.f_9 = -1591664384;
	iVar55 = 0;
	while (iVar55 < 6)
	{
		if (!func_286(Global_1051439.f_47[iVar55], 0))
		{
		}
		else if (!func_450(Global_1051439.f_47[iVar55], iVar19, &iVar21, &Var31, &uVar22, 1, iVar20))
		{
		}
		else
		{
			Var27 = { func_320(Global_1051439.f_47[iVar55], Var31, iVar21, 0) };
			if (func_451(Global_1051439.f_47[iVar55]))
			{
				if (!func_439(Global_1051439.f_47[iVar55], &Var31, iVar21, 0, 0))
				{
					if (!Global_1051439.f_47.f_7[iVar55])
					{
					}
					else if (func_452(Global_1051439.f_47[iVar55]))
					{
					}
					else
					{
						bVar40 = bParam8;
						if (func_293(Global_1051439.f_47[iVar55], 997808187))
						{
							bVar40 = 997808187;
						}
						if (bVar0 && bVar40 != 997808187)
						{
							if (!func_453(iParam0, Global_1051439.f_47[iVar55], Var31, iVar21, 1, &Var1, 0, bVar40, iParam9, 1))
							{
								bVar17 = false;
								Jump @814; //curOff = 506
							}
							else
							{
								bVar18 = true;
							}
						}
						else if (!bVar0 || bVar40 == 997808187)
						{
							if (!func_454(iParam0, Global_1051439.f_47[iVar55], Var31, iVar21, !bVar0, &Var1, 0, bVar40, 0, iParam9, 0))
							{
								bVar17 = false;
								Jump @814; //curOff = 579
							}
							else
							{
								bVar18 = true;
							}
						}
						bVar17 = true;
						Jump @805; //curOff = 591
						if (!bVar0)
						{
							if (!Global_1051439.f_47.f_7[iVar55])
							{
								iVar39 = func_455(Var31, iVar21, 0, -1);
								if (!func_286(iVar39, 0))
								{
								}
								else
								{
									Var35 = { func_320(iVar39, Var35, iVar21, 0) };
									if (!func_456(Var35, Global_1051439.f_47.f_7[iVar55], 0))
									{
										if (!func_444(Var35, &Var41, 1, 0, -1))
										{
										}
										if (Var41.f_10 == Global_1051439.f_47.f_7[iVar55])
										{
											bVar17 = true;
										}
										else
										{
											bVar17 = false;
										}
										else
										{
											Jump @740; //curOff = 734
											bVar17 = true;
											Jump @805; //curOff = 740
											if (!func_444(Var27, &Var41, 1, 0, -1))
											{
											}
											if (Var41.f_10 != Global_1051439.f_47.f_7[iVar55])
											{
												if (!func_456(Var27, 1, 0))
												{
													bVar17 = false;
												}
												else
												{
													Jump @805; //curOff = 799
													bVar17 = true;
													iVar55++;
												}
												if (!bVar17)
												{
													func_457(iParam0);
													return false;
												}
												if (bVar18)
												{
													if (bParam10 && !func_458(iParam0))
													{
														return false;
													}
													else
													{
														iVar56 = WEAPON::_0x46F032B8DDF46CDE(iVar19);
														if (!MISC::IS_BIT_SET(Global_1051439.f_4461[(func_459(iVar56, 1) / 32)], (func_459(iVar56, 1) % 32)))
														{
															func_461(func_460(joaat("UPDATED"), joaat("WEAPON_CUSTOMIZATION")), 1);
															MISC::SET_BIT(&(Global_1051439.f_4461[(func_459(iVar56, 1) / 32)]), (func_459(iVar56, 1) % 32));
														}
													}
												}
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

bool func_311(int* iParam0, int iParam1, struct<4> Param2, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<16> Var0;
	struct<17> Var16;

	if (!func_445(iParam0, 0))
	{
		return false;
	}
	if (iParam10 == 0)
	{
		iParam10 = func_176(iParam1, iParam10, 1, iParam11, 1);
	}
	if (!func_447(iParam0, iParam1, Param2, iParam6, iParam10, iParam7, iParam11, iParam12))
	{
		return false;
	}
	Var0 = { func_448(iParam1, Param2, iParam6, iParam7, iParam12) };
	Var0.f_13 = iParam10;
	Var0.f_12 = 1248274121;
	*iParam8 = { Var0 };
	if (func_366(iParam1) == joaat("CLOTHING"))
	{
		Var16.f_9 = 1;
		Var16.f_11 = -1591664384;
		Var16 = { Var0 };
		if (!func_462(iParam0, Var16, 2113164098, iParam9, -1))
		{
			return false;
		}
	}
	else if (!func_463(iParam0, Var0, 2113164098, iParam9, iParam11))
	{
		return false;
	}
	return true;
}

void func_312(struct<14> Param0, var uParam14, var uParam15)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = Param0.f_8;
	iVar1 = Param0.f_13;
	if (func_335(iVar0, joaat("CURRENCY_GOLD_BAR"), iVar1, 1, 0) > 0)
	{
		func_464("gold_spend", "Gold_Spend_Sounds", 1);
	}
	else if (INVENTORY::_0x2BAE4880DCDD560B(iVar0, 0))
	{
		iVar2 = func_465(iVar0, 0);
		if (!AUDIO::_0x6DF942C4179BE5AB(iVar2, joaat("HUD_SHOP_SOUNDSET")))
		{
			AUDIO::PLAY_SOUND_FRONTEND("PURCHASE", "HUD_SHOP_SOUNDSET", true, 0);
		}
		else
		{
			AUDIO::_0xE8EAFF7B41EDD291(iVar2, joaat("HUD_SHOP_SOUNDSET"), 0);
		}
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND("PURCHASE", "HUD_SHOP_SOUNDSET", true, 0);
	}
}

int func_313(int iParam0)
{
	return iParam0;
}

int func_314(int iParam0, int iParam1)
{
	if (!func_286(iParam0, 0))
	{
		return func_466(func_315(iParam0), iParam1);
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

int func_315(int iParam0)
{
	return iParam0;
}

int func_316(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_467(iParam0, 2))
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

bool func_317(int iParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_403(iParam0))
	{
		return false;
	}
	*iParam3 = ITEMDATABASE::_0xF540239F9937033B(iParam0, bParam1);
	if (*iParam3 == 0)
	{
		if (!bParam4)
		{
		}
		return false;
	}
	if (!bParam4)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!ITEMDATABASE::_0xF27F01BBF5ACD3F3(iParam0, bParam1, iVar0, uParam2[iVar0 /*2*/]))
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
		func_468(iParam0, bParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_318(int iParam0)
{
	if (func_442(iParam0) == -126813555 || func_442(iParam0) == 1946043663)
	{
		return true;
	}
	return false;
}

bool func_319(int iParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_286(iParam0, 0))
	{
		return false;
	}
	*iParam3 = ITEMDATABASE::_0xDEE7B3C76ED664BE(iParam0, bParam1);
	if (*iParam3 == 0)
	{
		if (!bParam5)
		{
		}
		return false;
	}
	if (!bParam5)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!ITEMDATABASE::_0xAD73B614DF26CF8A(iParam0, bParam1, iVar0, uParam2[iVar0 /*2*/]))
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
		func_469(iParam0, bParam1, uParam2, *iParam3);
	}
	return true;
}

struct<4> func_320(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_286(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_470(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_321(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_322(struct<4> Param0)
{
	if (!func_321(&Param0))
	{
		return false;
	}
	if (func_471(&Param0))
	{
		return false;
	}
	return func_473(func_472(Param0));
}

int func_323(int iParam0)
{
	int iVar0;

	if (!func_474(iParam0))
	{
		return 0;
	}
	iVar0 = func_475(iParam0);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	else
	{
		return func_476(iParam0, 1);
	}
	return 0;
}

void func_324(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904651[iParam0];
	MISC::CLEAR_BIT(&uVar0, iParam1);
	Global_1904651[iParam0] = uVar0;
}

void func_325(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_17411.f_2565[*iParam0];
	MISC::SET_BIT(&uVar0, *iParam1);
	Global_17411.f_2565[*iParam0] = uVar0;
}

void func_326(int iParam0)
{
	if (!STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		func_477(iParam0);
	}
}

bool func_327()
{
	return Global_1211286.f_26;
}

bool func_328(vector3 vParam0)
{
	switch (vParam0.x)
	{
		case 0:
		default:
			return false;
			if (vParam0.y == -1)
			{
				return false;
			}
		case 1:
			if (vParam0.z == 0)
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_329(vector3 vParam0, vector3 vParam3)
{
	if (vParam0.x != vParam3.x)
	{
		return false;
	}
	switch (vParam0.x)
	{
		case 0:
			if (vParam0.y != vParam3.y)
			{
				return false;
			}
			break;
		case 1:
			if (vParam0.z != vParam3.z)
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_330(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (!func_44(*uParam0, &iVar0, &iVar1))
	{
		return false;
	}
	return func_177(iVar0, func_176(iVar0, 0, 1, -1, 1), 1);
}

int func_331(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_478();
	}
	if (!func_479(bParam1, bParam1, !bParam1))
	{
		return 0;
	}
	func_480(iParam0);
	Global_1896738.f_386 = 1;
	Global_1896738.f_387 = bParam1;
	return 1;
}

int func_332()
{
	return Global_1940311.f_1433;
}

bool func_333(int iParam0, char* sParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 3:
		default:
			return false;
			StringCopy(sParam1, "hasEnoughMoney", 64);
			*bParam2 = 0;
			return true;
		case 4:
			StringCopy(sParam1, "hasEnoughMoney", 64);
			*bParam2 = 0;
			return true;
		case 5:
			StringCopy(sParam1, "hasEnoughMoney", 64);
			*bParam2 = 0;
			return true;
		case 7:
			StringCopy(sParam1, "notEnoughMoney", 64);
			*bParam2 = 1;
			return true;
	}
}

int func_334(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if ((bParam4 && bParam1 == -915411861) && func_293(iParam0, 59806960))
	{
		bParam1 = 59806960;
	}
	if (func_180(iParam0))
	{
		return func_413(func_181(iParam0, 0), bParam1, bParam3, 1);
	}
	if (!func_319(iParam0, bParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
		{
			if (iParam5 != 0 && Var0[iVar32 /*2*/] != iParam5)
			{
			}
			else
			{
				return Var0[iVar32 /*2*/].f_1;
				Jump @204; //curOff = 188
				if (Var0[iVar32 /*2*/] == 0)
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
}

int func_335(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (func_180(iParam0))
	{
		return func_422(func_181(iParam0, 0), iParam1, iParam2, bParam4, 1);
	}
	if (!func_319(iParam0, iParam2, &Var0, &iVar31, bParam3, bParam4))
	{
		if (!bParam4)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == iParam1)
		{
			return Var0[iVar32 /*2*/].f_1;
		}
		else if (Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam4)
	{
	}
	return 0;
}

int func_336(int iParam0)
{
	return (iParam0 / 100);
}

bool func_337(int iParam0)
{
	switch (iParam0)
	{
		case -1103707655:
		case 205718222:
		case 866168015:
			return true;
		default:
			break;
	}
	return false;
}

bool func_338(int iParam0)
{
	switch (iParam0)
	{
		case -1843707398:
		case -1571233163:
		case -1197011183:
		case 75922725:
		case 1070046552:
			return true;
		default:
			break;
	}
	return false;
}

char* func_339(int iParam0)
{
	int iVar0;

	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_481(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

void func_340(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;
	char* sVar1;

	if (bParam4 && !func_89(iParam0))
	{
		return;
	}
	iVar0 = func_219(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1951255[iVar0 /*23*/].f_3))
	{
		return;
	}
	sVar1 = MISC::_CREATE_VAR_STRING(0, sParam2);
	HUD::_UIPROMPT_SET_TEXT(Global_1951255[iVar0 /*23*/].f_3, MISC::_CREATE_VAR_STRING(10, sParam1, sVar1, sParam3));
}

void func_341(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_89(iParam0))
	{
		return;
	}
	iVar0 = func_219(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1951255[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iVar0 /*23*/].f_3, bParam1);
}

int func_342(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_482(iParam0);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 5)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT_STATUS(iParam0, &iVar1))
		{
			if ((iVar1 == 4 || iVar1 == 2) || (iVar0 == 0 && iVar1 != 0))
			{
				func_483(iParam0, iVar1, 0, 0);
				iVar0 = iVar1;
			}
		}
		else if (iVar0 == 1 || iVar0 == 5)
		{
			func_483(iParam0, 4, 0, 0);
		}
	}
	return iVar0;
}

int func_343(int iParam0)
{
	if (!func_318(iParam0))
	{
		return 0;
	}
	if (func_484(iParam0))
	{
		return -1957466003;
	}
	if (func_314(iParam0, -1457263561))
	{
		return -84670860;
	}
	if (func_314(iParam0, -732976331))
	{
		return -700121520;
	}
	if (func_314(iParam0, 1495098826))
	{
		return 917298505;
	}
	if (func_314(iParam0, 2088554948))
	{
		return -1638586319;
	}
	return 176863985;
}

void func_344(int iParam0)
{
	Global_1109804.f_260.f_5462 = (Global_1109804.f_260.f_5462 || iParam0);
}

int func_345()
{
	return Global_1572887.f_13;
}

void func_346(int iParam0, int iParam1)
{
	if (!func_485(iParam0))
	{
		return;
	}
	Global_1915715.f_17884[iParam0] = (Global_1915715.f_17884[iParam0] || iParam1);
}

void func_347(int iParam0, int iParam1)
{
	if (!func_485(iParam0))
	{
		return;
	}
	Global_1915715.f_17884[iParam0] = (Global_1915715.f_17884[iParam0] - (Global_1915715.f_17884[iParam0] && iParam1));
}

bool func_348(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_349(var uParam0)
{
	func_486(uParam0, 0);
}

bool func_350(var uParam0)
{
	return func_348(*uParam0, 2);
}

int func_351(int iParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

bool func_352(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951255[iParam0 /*23*/].f_1 && iParam1) != 0;
}

void func_353(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;

	Global_1951255[iParam0 /*23*/].f_4 = iParam1;
	Global_1951255[iParam0 /*23*/] = iParam4;
	Global_1951255[iParam0 /*23*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1951255[iParam0 /*23*/].f_2 = iParam5;
	Global_1951255[iParam0 /*23*/].f_6 = { vParam6 };
	Global_1951255[iParam0 /*23*/].f_9 = fParam9;
	Global_1951255[iParam0 /*23*/].f_10 = iParam10;
	Global_1951255[iParam0 /*23*/].f_11 = iParam11;
	Global_1951255[iParam0 /*23*/].f_12 = { 0f, 0f, 0f };
	Global_1951255[iParam0 /*23*/].f_5 = iParam12;
	Global_1951255[iParam0 /*23*/].f_1 = 2;
	Global_1951255[iParam0 /*23*/].f_17 = -1;
	Global_1951255[iParam0 /*23*/].f_18 = iParam16;
	Global_1951255[iParam0 /*23*/].f_19 = iParam15;
	Global_1951255[iParam0 /*23*/].f_20 = bParam25;
	Global_1951255[iParam0 /*23*/].f_22 = 0f;
	if (bParam25)
	{
		Global_1951255[iParam0 /*23*/].f_21 = MISC::GET_GAME_TIMER();
	}
	else
	{
		Global_1951255[iParam0 /*23*/].f_21 = MISC::_GET_SYSTEM_TIME();
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
	Global_1951255[iParam0 /*23*/].f_3 = iVar0;
	func_355(iParam0, 1);
	func_356(iParam0, 1);
	func_357(iParam0, 128);
}

void func_354(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951255[iParam0 /*23*/].f_1 = (Global_1951255[iParam0 /*23*/].f_1 - (Global_1951255[iParam0 /*23*/].f_1 && iParam1));
}

void func_355(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		if (Global_1951255[iParam0 /*23*/].f_5 == 5 && !func_352(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_356(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1951255[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_357(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951255[iParam0 /*23*/].f_1 = (Global_1951255[iParam0 /*23*/].f_1 || iParam1);
}

int func_358(int iParam0)
{
	switch (iParam0)
	{
		case 132:
			return joaat("SHOP_BUT_MUSICIAN_BANJO");
		case 6:
			return joaat("SHOP_BLK_GENERAL_STORE");
		case 7:
			return joaat("SHOP_BLK_GUNSMITH");
		case 8:
			return joaat("SHOP_BLK_BARBER");
		case 19:
			return joaat("SHOP_BLK_TAILOR");
		case 13:
			return joaat("SHOP_BLK_HORSE_SHOP");
		case 14:
			return joaat("SHOP_BLK_POST_OFFICE");
		case 15:
			return joaat("SHOP_BLK_TRAIN_STATION");
		case 12:
			return joaat("SHOP_BLK_PHOTO_STUDIO");
		case 122:
			return joaat("SHOP_BLK_BOUNTYHUNTING_MP_RETURN");
		case 123:
			return joaat("SHOP_BLK_COACH");
		case 5:
			return joaat("SHOP_BLK_BANK");
		case 9:
			return joaat("SHOP_BLK_BUTCHER");
		case 10:
			return joaat("SHOP_BLK_BARTENDER");
		case 11:
			return joaat("SHOP_BLK_PIANIST");
		case 16:
			return joaat("SHOP_BLK_MUSICIAN_GUITARIST_FIRST");
		case 17:
			return joaat("SHOP_BLK_MUSICIAN_GUITARIST_SECOND");
		case 18:
			return joaat("SHOP_BLK_MUSICIAN_GUITARIST_THIRD");
		case 23:
			return joaat("SHOP_EMR_GENERAL_STORE");
		case 24:
			return joaat("SHOP_EMR_POST_OFFICE");
		case 25:
			return joaat("SHOP_EMR_TRAIN_STATION");
		case 22:
			return joaat("SHOP_EMR_FENCE");
		case 26:
			return joaat("SHOP_LAG_BAIT_STORE");
		case 45:
			return joaat("SHOP_SDN_DOCTOR");
		case 48:
			return joaat("SHOP_SDN_GENERAL_STORE");
		case 46:
			return joaat("SHOP_SDN_FENCE");
		case 49:
			return joaat("SHOP_SDN_GUNSMITH");
		case 42:
			return joaat("SHOP_SDN_BANK");
		case 43:
			return joaat("SHOP_SDN_BARBER");
		case 44:
			return joaat("SHOP_SDN_BUTCHER");
		case 50:
			return joaat("SHOP_SDN_HORSE_SHOP");
		case 51:
			return joaat("SHOP_SDN_POST_OFFICE");
		case 52:
			return joaat("SHOP_SDN_TRAIN_STATION");
		case 53:
			return joaat("SHOP_SDN_TAILOR");
		case 63:
			return joaat("SHOP_SDN_TRAPPER");
		case 56:
			return joaat("SHOP_SDN_BARTENDER_SLUM");
		case 57:
			return joaat("SHOP_SDN_PIANIST_SLUM");
		case 60:
			return joaat("SHOP_SDN_PHOTO_STUDIO");
		case 124:
			return joaat("SHOP_SDN_BOUNTYHUNTING_MP_RETURN");
		case 125:
			return joaat("SHOP_SDN_COACH");
		case 54:
			return joaat("SHOP_SDN_BARTENDER");
		case 55:
			return joaat("SHOP_SDN_PIANIST");
		case 59:
			return joaat("SHOP_SDN_MUSICIAN_BANJO");
		case 58:
			return joaat("SHOP_SDN_MUSICIAN_GUITARIST");
		case 61:
			return joaat("SHOP_SDN_THEATER_MP");
		case 62:
			return joaat("SHOP_SDN_THEATER_MAGIC_MP");
		case 27:
			return joaat("SHOP_RGG_POST_OFFICE");
		case 28:
			return joaat("SHOP_RGG_TRAIN_STATION");
		case 33:
			return joaat("SHOP_RHO_GENERAL_STORE");
		case 31:
			return joaat("SHOP_RHO_FENCE");
		case 34:
			return joaat("SHOP_RHO_GUNSMITH");
		case 35:
			return joaat("SHOP_RHO_POST_OFFICE");
		case 30:
			return joaat("SHOP_RHO_BUTCHER");
		case 39:
			return joaat("SHOP_RHO_TRAIN_STATION");
		case 126:
			return joaat("SHOP_RHO_BOUNTYHUNTING_MP_RETURN");
		case 29:
			return joaat("SHOP_RHO_BANK");
		case 36:
			return joaat("SHOP_RHO_BARTENDER");
		case 37:
			return joaat("SHOP_RHO_PIANIST");
		case 38:
			return joaat("SHOP_RHO_MUSICIAN_BANJO");
		case 68:
			return joaat("SHOP_STR_BUTCHER");
		case 69:
			return joaat("SHOP_STR_GENERAL_STORE");
		case 70:
			return joaat("SHOP_STR_WELCOME_CENTER");
		case 71:
			return joaat("SHOP_STR_HORSE_SHOP");
		case 74:
			return joaat("SHOP_STR_POST_OFFICE");
		case 127:
			return joaat("SHOP_STR_BOUNTYHUNTING_MP_RETURN");
		case 75:
			return joaat("SHOP_STR_BARTENDER");
		case 72:
			return joaat("SHOP_STR_MUSICIAN_BANJO");
		case 73:
			return joaat("SHOP_STR_MUSICIAN_GUITARIST");
		case 83:
			return joaat("SHOP_VAL_DOCTOR");
		case 84:
			return joaat("SHOP_VAL_GENERAL_STORE");
		case 85:
			return joaat("SHOP_VAL_GUNSMITH");
		case 78:
			return joaat("SHOP_VAL_BARBER");
		case 87:
			return joaat("SHOP_VAL_POST_OFFICE");
		case 86:
			return joaat("SHOP_VAL_HORSE_SHOP");
		case 82:
			return joaat("SHOP_VAL_BUTCHER");
		case 88:
			return joaat("SHOP_VAL_TRAIN_STATION");
		case 81:
			return joaat("SHOP_VAL_BARTENDER_KEANE");
		case 91:
			return joaat("SHOP_VAL_BARTENDER_SLUM");
		case 90:
			return joaat("SHOP_VAL_HOTEL");
		case 120:
			return joaat("SHOP_VAL_BOUNTYHUNTING_MP_RETURN");
		case 121:
			return joaat("SHOP_VAL_COACH");
		case 77:
			return joaat("SHOP_VAL_BANK");
		case 79:
			return joaat("SHOP_VAL_BARTENDER");
		case 80:
			return joaat("SHOP_VAL_PIANIST");
		case 89:
			return joaat("SHOP_VAL_THEATER_MAGIC_MP");
		case 41:
			return joaat("SHOP_SCM_HORSE_SHOP");
		case 98:
			return joaat("SHOP_VAN_POST_OFFICE");
		case 97:
			return joaat("SHOP_VAN_TRAIN_STATION");
		case 93:
			return joaat("SHOP_VAN_FENCE");
		case 96:
			return joaat("SHOP_VAN_HORSE_SHOP");
		case 94:
			return joaat("SHOP_VAN_BARTENDER");
		case 95:
			return joaat("SHOP_VAN_PIANIST");
		case 128:
			return joaat("SHOP_VAN_COACH");
		case 129:
			return joaat("SHOP_ASB_BOUNTYHUNTING_MP_RETURN");
		case 0:
			return joaat("SHOP_ASB_GUNSMITH");
		case 1:
			return joaat("SHOP_ASB_POST_OFFICE");
		case 2:
			return joaat("SHOP_ASB_TRAIN_STATION");
		case 101:
			return joaat("SHOP_WAL_POST_OFFICE");
		case 99:
			return joaat("SHOP_WAL_GENERAL_STORE");
		case 100:
			return joaat("SHOP_WAL_TRAIN_STATION");
		case 119:
			return joaat("SHOP_DYNAMIC");
		case 133:
			return joaat("SHOP_WILDERNESS_SUPPLIES");
		case 152:
			return joaat("SHOP_ANYWHERE_HANDHELD");
		case 176:
			return joaat("SHOP_WEAPON_MOD_STORE");
		case 177:
			return joaat("SHOP_CLOTHING");
		case 178:
			return joaat("SHOP_CAMP_SHAVING");
		case 153:
			return joaat("SHOP_CAMP_LOCKBOX");
		case 154:
			return joaat("SHOP_CAMP_BUTCHERTABLE");
		case 147:
			return joaat("SHOP_CAMP_TRAVELLING_SALESMAN");
		case 135:
			return joaat("SHOP_RIO_TRAVELLING_SALESMAN");
		case 136:
			return joaat("SHOP_CHO_TRAVELLING_SALESMAN");
		case 137:
			return joaat("SHOP_HEN_TRAVELLING_SALESMAN");
		case 138:
			return joaat("SHOP_TAL_TRAVELLING_SALESMAN");
		case 139:
			return joaat("SHOP_BGV_TRAVELLING_SALESMAN");
		case 140:
			return joaat("SHOP_HRT_E_TRAVELLING_SALESMAN");
		case 141:
			return joaat("SHOP_HRT_W_TRAVELLING_SALESMAN");
		case 142:
			return joaat("SHOP_GRZ_TRAVELLING_SALESMAN");
		case 143:
			return joaat("SHOP_SCM_TRAVELLING_SALESMAN");
		case 144:
			return joaat("SHOP_BLU_TRAVELLING_SALESMAN");
		case 145:
			return joaat("SHOP_DER_TRAVELLING_SALESMAN");
		case 146:
			return joaat("SHOP_BBR_TRAVELLING_SALESMAN");
		case 47:
			return joaat("SHOP_MOONSHINE_STILL");
		case 32:
			return joaat("SHOP_MOONSHINE_STILL");
		case 21:
			return joaat("SHOP_MOONSHINE_STILL");
		case 115:
			return joaat("SHOP_MOONSHINE_STILL");
		case 92:
			return joaat("SHOP_MOONSHINE_STILL");
		case 131:
			return joaat("SHOP_MOONSHINE_STILL");
		case 20:
			return joaat("SHOP_MOONSHINE_STILL");
		case 134:
			return -765151559;
		case 179:
			return joaat("SHOP_WARDROBE");
		case 155:
			return joaat("SHOP_BVH_DOCTOR");
		case 156:
			return joaat("SHOP_BVH_GENERAL_STORE");
		case 157:
			return joaat("SHOP_BVH_GUNSMITH");
		case 158:
			return joaat("SHOP_BVH_HORSE_TRAINER");
		case 67:
			return 1529797091;
		case 159:
			return joaat("SHOP_CLM_DOCTOR");
		case 160:
			return joaat("SHOP_CLM_GENERAL_STORE");
		case 161:
			return joaat("SHOP_CLM_GUNSMITH");
		case 162:
			return joaat("SHOP_CLM_HORSE_TRAINER");
		case 65:
			return 1388932648;
		case 164:
			return joaat("SHOP_HSO_DOCTOR");
		case 165:
			return joaat("SHOP_HSO_GENERAL_STORE");
		case 166:
			return joaat("SHOP_HSO_GUNSMITH");
		case 167:
			return joaat("SHOP_HSO_HORSE_TRAINER");
		case 64:
			return 878376253;
		case 168:
			return joaat("SHOP_LAK_DOCTOR");
		case 169:
			return joaat("SHOP_LAK_GENERAL_STORE");
		case 170:
			return joaat("SHOP_LAK_GUNSMITH");
		case 171:
			return joaat("SHOP_LAK_HORSE_TRAINER");
		case 172:
			return joaat("SHOP_SHB_DOCTOR");
		case 173:
			return joaat("SHOP_SHB_GENERAL_STORE");
		case 174:
			return joaat("SHOP_SHB_GUNSMITH");
		case 175:
			return joaat("SHOP_SHB_HORSE_TRAINER");
		case 66:
			return -2076086367;
		case 163:
			return joaat("SHOP_CLM_HORSE_FENCE");
		case 108:
			return joaat("SHOP_AMD_GENERAL_STORE");
		case 110:
			return joaat("SHOP_AMD_BARTENDER");
		case 109:
			return joaat("SHOP_AMD_HONOR_MP");
		case 111:
			return joaat("SHOP_AMD_POST_OFFICE");
		case 112:
			return joaat("SHOP_AMD_TRAIN_STATION");
		case 113:
			return joaat("SHOP_ROJ_HONOR_MP");
		case 114:
			return joaat("SHOP_BOJ_HONOR_MP");
		case 102:
			return joaat("SHOP_TBL_GENERAL_STORE");
		case 105:
			return joaat("SHOP_TBL_BARTENDER");
		case 106:
			return joaat("SHOP_TBL_PIANIST");
		case 103:
			return joaat("SHOP_TBL_GUNSMITH");
		case 104:
			return joaat("SHOP_TBL_BUTCHER");
		case 107:
			return joaat("SHOP_TBL_HORSE_SHOP");
		case 116:
			return joaat("SHOP_RYC_FENCE");
		case 130:
			return joaat("SHOP_THL_FENCE");
		case 117:
			return joaat("SHOP_BEN_POST_OFFICE");
		case 118:
			return joaat("SHOP_BEN_TRAIN_STATION");
		case 3:
			return 548657065;
		case 4:
			return 243086140;
		case 40:
			return -305029900;
		case 76:
			return 1008537949;
		case 148:
			return 1239556700;
		case 149:
			return 1968750441;
		case 150:
			return 317019665;
		case 151:
			return 1421441577;
		default:
			break;
	}
	return 0;
}

bool func_359(int iParam0)
{
	return func_352(iParam0, 2);
}

int func_360(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -348950400;
				case 2:
					return 239417318;
				case 3:
					return 239417318;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1307826022;
				case 2:
					return -59491839;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 1907908866;
				case 2:
					return -59491839;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -889182566;
				case 2:
					return -59491839;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return -474428808;
				case 2:
					return -59491839;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return 16540788;
				case 2:
					return 1377133516;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return -481682130;
				case 2:
					return 1377133516;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return -1990849941;
				case 2:
					return 1377133516;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return -1265587408;
				case 2:
					return 1377133516;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					return 1087345397;
				case 2:
					return 319921153;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 0:
					return -1817797378;
				case 2:
					return 319921153;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam0)
			{
				case 0:
					return -1142776975;
				case 2:
					return 319921153;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam0)
			{
				case 0:
					return 2117980229;
				case 2:
					return 319921153;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 1427667791;
				case 2:
					return -1124047374;
				case 3:
					return -311950714;
				case 4:
					return -1877729336;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 1733369788;
				case 2:
					return -1291660805;
				case 3:
					return 53620250;
				case 4:
					return -967242671;
				default:
					break;
			}
			break;
		case 15:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 1751392738;
				case 2:
					return -1002933146;
				case 3:
					return 300796817;
				case 4:
					return -1332027179;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1523907969;
				case 2:
					return -1340126692;
				case 3:
					return -1177458231;
				case 4:
					return 1413260826;
				default:
					break;
			}
			break;
		case 17:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 318496303;
				case 2:
					return -1612797541;
				case 3:
					return -1876683153;
				case 4:
					return 1251939043;
				default:
					break;
			}
			break;
		case 18:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -411791259;
				case 2:
					return 1855246300;
				case 3:
					return 763461736;
				case 4:
					return -92262210;
				default:
					break;
			}
			break;
		case 19:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -644680542;
				case 2:
					return 2084465459;
				case 3:
					return 1616668189;
				case 4:
					return -1758631398;
				default:
					break;
			}
			break;
		case 20:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1585597204;
				case 2:
					return 941214835;
				case 3:
					return 68299210;
				case 4:
					return 1699902717;
				default:
					break;
			}
			break;
		case 21:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -913454268;
				case 2:
					return 1265238199;
				case 3:
					return -1638616368;
				case 4:
					return 1550104174;
				default:
					break;
			}
			break;
		case 22:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1239767970;
				case 2:
					return -1099733308;
				case 3:
					return -697261301;
				case 4:
					return 1865014264;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1227772128;
				case 2:
					return 1853607854;
				case 3:
					return 1511414161;
				case 4:
					return -2030843481;
				default:
					break;
			}
			break;
		case 24:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1597340910;
				case 2:
					return 885906515;
				case 3:
					return -674835160;
				case 4:
					return 867181329;
				default:
					break;
			}
			break;
		case 25:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1824548752;
				case 2:
					return -645886158;
				case 3:
					return 825197572;
				case 4:
					return 1390137360;
				default:
					break;
			}
			break;
	}
	return 0;
}

void func_361()
{
}

var func_362()
{
	Global_1293346.f_458.f_1552++;
	if (Global_1293346.f_458.f_1552 >= 2147483646)
	{
		Global_1293346.f_458.f_1552 = 0;
	}
	return Global_1293346.f_458.f_1552;
}

void func_363(struct<30> Param0, int iParam30)
{
	switch (iParam30)
	{
		case 0:
			Global_1293346.f_458.f_44[func_487() /*30*/] = { Param0 };
			func_488((func_487() + 1 % 40));
			Global_1293346.f_458.f_1546++;
			break;
		case 1:
			Global_1293346.f_458.f_1245[func_489() /*30*/] = { Param0 };
			func_490((func_489() + 1 % 10));
			Global_1293346.f_458.f_1547++;
			break;
	}
}

void func_364(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_1915715.f_18246 = iParam0;
	}
}

int func_365(bool bParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1102219.f_16)
	{
		return 0;
	}
	if (!func_491())
	{
		return 0;
	}
	if (!func_205())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_492(&Global_0, 8);
	}
	func_492(&Global_0, 1);
	return 1;
}

int func_366(int iParam0)
{
	vector3 vVar0;

	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_367(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_286(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258.f_6)
	{
		return false;
	}
	iVar0 = func_493(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_494("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_495(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_496(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_497(iVar1);
				return true;
			}
			iVar3++;
		}
		func_497(iVar1);
	}
	return false;
}

bool func_368(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_286(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_442(iParam0);
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
	iVar1 = func_498(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_499(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_500(iParam0);
	iVar2 = func_499(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == Global_17411.f_55.f_644.f_1354.f_5[iVar2 /*17*/];
}

int func_369(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_366(iParam0);
	if (iVar1 == joaat("AMMO") || (bParam1 && iVar1 == joaat("WEAPON")))
	{
		iVar2 = func_493(iParam0, 1);
		if (iVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar2);
		}
	}
	else if (iVar1 == joaat("WEAPON"))
	{
		return func_501(iParam0, 0);
	}
	if (func_502(iParam0, joaat("DEFAULT")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_470(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_503(iParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_470(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

int func_370(int iParam0)
{
	if (!STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		return 1;
	}
	if (func_504())
	{
		return 0;
	}
	STREAMING::_REMOVE_IMAP(iParam0);
	return 0;
}

bool func_371(int iParam0)
{
	int iVar0;

	iVar0 = func_372(iParam0, 1);
	if (iVar0 < 2 || iVar0 >= 183)
	{
		return false;
	}
	return true;
}

int func_372(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2101912686:
			return 13;
		case -2059285007:
			return 167;
		case -2006026692:
			return 176;
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
			return 173;
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
		case -1685270562:
			return 181;
		case -1631930150:
			return 166;
		case -1629969648:
			return 174;
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
		case -1391865428:
			return 171;
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
		case -1196069774:
			return 180;
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
			return 172;
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
		case -813902658:
			return 182;
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
		case -340578116:
			return 169;
		case -286632741:
			return 8;
		case -267135864:
			return 138;
		case -233204301:
			return 105;
		case -203268054:
			return 143;
		case -161625840:
			return 177;
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
		case -46116991:
			return 163;
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
			return 183;
		case 320758674:
			return 158;
		case 352539363:
			return 179;
		case 362862598:
			return 170;
		case 398279342:
			return 34;
		case 408582472:
			return 5;
		case 420477860:
			return 25;
		case 456199285:
			return 168;
		case 509781427:
			return 93;
		case 550487527:
			return 35;
		case 576694808:
			return 175;
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
		case 1281707602:
			return 164;
		case 1323028278:
			return 41;
		case 1374979106:
			return 28;
		case 1405624312:
			return 146;
		case 1444077748:
			return 23;
		case 1449867002:
			return 162;
		case 1498983922:
			return 84;
		case 1547488310:
			return 161;
		case 1554410187:
			return 73;
		case 1585362808:
			return 16;
		case 1636352616:
			return 151;
		case 1662680949:
			return 178;
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
		case 1865781806:
			return 165;
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

bool func_373(int iParam0)
{
	int iVar0;

	iVar0 = func_374(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 153)
	{
		return false;
	}
	return true;
}

int func_374(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_3"):
			return 100;
		case joaat("CONTENT__PREDATOR__LEVEL_0"):
			return 136;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_3"):
			return 63;
		case -2082434331:
			return 152;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_2"):
			return 65;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_2"):
			return 93;
		case -2038430863:
			return 151;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_1"):
			return 64;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_2"):
			return 35;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_3"):
			return 6;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2"):
			return 56;
		case joaat("CONTENT__PREDATOR__LEVEL_3"):
			return 139;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_3"):
			return 54;
		case joaat("UNLOCK__ROLE__POTENTIAL_BONUS"):
			return 110;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_2"):
			return 78;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_1"):
			return 80;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_2"):
			return 62;
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME"):
			return 73;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_2"):
			return 41;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_1"):
			return 25;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_1"):
			return 92;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2"):
			return 47;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_1"):
			return 61;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_3"):
			return 3;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_1"):
			return 49;
		case joaat("CONTENT__ACTIVE_DEED__FIRE_VULNERABILITY"):
			return 148;
		case joaat("UNLOCK__ROLE__AWARENESS_BONUS"):
			return 107;
		case joaat("UNLOCK__ROLE__INTUITION_BONUS"):
			return 111;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1"):
			return 55;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_3"):
			return 9;
		case joaat("CONTENT__PREDATOR__LEVEL_1"):
			return 137;
		case -1246069683:
			return 124;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1"):
			return 46;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_1"):
			return 74;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_3"):
			return 69;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_1"):
			return 7;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_4"):
			return 131;
		case joaat("CONTENT__PREDATOR__LEVEL_7"):
			return 143;
		case -1105699593:
			return 153;
		case -1047626954:
			return 118;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_1"):
			return 1;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_3"):
			return 79;
		case -980934770:
			return 125;
		case joaat("CONTENT__PREDATOR__LEVEL_4"):
			return 140;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_5"):
			return 132;
		case joaat("CONTENT__PREDATOR__LEVEL_6"):
			return 142;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_3"):
			return 60;
		case -821191074:
			return 115;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_1"):
			return 40;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3"):
			return 48;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_1"):
			return 77;
		case joaat("ABILITY_CARD__HANGMAN_TIER_2"):
			return 17;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_2"):
			return 2;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_3"):
			return 72;
		case joaat("EQUIPMENT__NED_KELLY_FREEROAM"):
			return 121;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_2"):
			return 59;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_3"):
			return 85;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_3"):
			return 94;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_1"):
			return 4;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_2"):
			return 68;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_1"):
			return 58;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_1"):
			return 128;
		case joaat("EQUIPMENT__NED_KELLY_ADVERSARY"):
			return 119;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_1"):
			return 10;
		case joaat("CONTENT__HUNTED__MASKED"):
			return 146;
		case joaat("CONTENT__PASSIVE_MODE"):
			return 135;
		case -193167881:
			return 127;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_3"):
			return 30;
		case joaat("EQUIPMENT__NED_KELLY_GOLDEN"):
			return 122;
		case joaat("CONSUMABLE__DAILY_STEW"):
			return 150;
		case joaat("CONTENT__PREDATOR__LEVEL_5"):
			return 141;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_1"):
			return 67;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_1"):
			return 43;
		case joaat("UNLOCK__ROLE__EFFICIENCY_BONUS"):
			return 106;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_3"):
			return 39;
		case -1:
			return 0;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_2"):
			return 8;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_2"):
			return 11;
		case 130533095:
			return 126;
		case joaat("ABILITY_CARD__HANGMAN_TIER_3"):
			return 18;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_2"):
			return 44;
		case 158579484:
			return 117;
		case joaat("STATUS_EFFECT__TOXIC_MOONSHINE"):
			return 101;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_3"):
			return 15;
		case joaat("UNLOCK__ROLE__EAGLE_EYE_PLUS"):
			return 113;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_6"):
			return 133;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_1"):
			return 86;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_2"):
			return 71;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_2"):
			return 29;
		case joaat("UNLOCK__ROLE__PERCEPTION_BONUS"):
			return 105;
		case joaat("STATUS_EFFECT__POISON"):
			return 102;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_3"):
			return 12;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_3"):
			return 51;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_7"):
			return 134;
		case joaat("UNLOCK__ROLE__PROTECTION_MOONSHINE_BONUS"):
			return 109;
		case 549687162:
			return 145;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_1"):
			return 28;
		case joaat("ABILITY_CARD__HANGMAN_TIER_1"):
			return 16;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_2"):
			return 26;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_1"):
			return 98;
		case joaat("CONTENT__ACTIVE_DEED__BOUNTER_HUNTER_ACCURACY_DEBUFF"):
			return 149;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_3"):
			return 45;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_2"):
			return 50;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_3"):
			return 88;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_3"):
			return 36;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_2"):
			return 90;
		case joaat("CONTENT__PREDATOR__LEVEL_8"):
			return 144;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_2"):
			return 81;
		case joaat("UNLOCK__ROLE__MASTER_DISTILLER_BONUS"):
			return 114;
		case 808176588:
			return 116;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_2"):
			return 38;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_1"):
			return 70;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_3"):
			return 21;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_2"):
			return 14;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_1"):
			return 89;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2"):
			return 96;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_3"):
			return 82;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_2"):
			return 87;
		case joaat("UNLOCK__ROLE__FOCUS_BONUS"):
			return 104;
		case 1130659268:
			return 123;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_2"):
			return 20;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_2"):
			return 75;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_1"):
			return 31;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3"):
			return 97;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_1"):
			return 19;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_2"):
			return 32;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_3"):
			return 24;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_2"):
			return 129;
		case joaat("UNLOCK__ROLE__DIVINATION_BONUS"):
			return 112;
		case joaat("CONTENT__PREDATOR__LEVEL_2"):
			return 138;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_1"):
			return 83;
		case joaat("CONTENT__ACTIVE_DEED__EAGLE_EYE_GENERIC_BUFF"):
			return 147;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3"):
			return 57;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_1"):
			return 22;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_3"):
			return 33;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_3"):
			return 130;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_1"):
			return 13;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_2"):
			return 84;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1"):
			return 95;
		case joaat("EQUIPMENT__NED_KELLY_COOP"):
			return 120;
		case joaat("STATUS_EFFECT__TRACKING"):
			return 103;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_2"):
			return 23;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_2"):
			return 99;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_3"):
			return 66;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_1"):
			return 52;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_3"):
			return 27;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_3"):
			return 76;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_2"):
			return 5;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_3"):
			return 42;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_1"):
			return 37;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_1"):
			return 34;
		case joaat("UNLOCK__ROLE__PROTECTION_TRADER_BONUS"):
			return 108;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_2"):
			return 53;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_3"):
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

int func_375(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_505(iParam0);
	iVar1 = Global_1296859;
	iVar2 = func_378(iParam1, 1);
	switch (Global_1146212.f_35859.f_3116[iVar2 /*31*/].f_1)
	{
		case joaat("ON_DISABLE"):
			if (iVar1 == iVar0)
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
		case joaat("DURATION"):
		case joaat("DURATION_OR_MISS"):
		case joaat("ALLY_LEAVE_DEADEYE"):
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

int func_376(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;

	if (!func_371(iParam1))
	{
		return 0;
	}
	if (!func_506(iParam0))
	{
		return 0;
	}
	iVar0 = func_378(iParam0, 1);
	func_507(iParam0, iParam1, iParam2);
	if (func_508(Global_1146212.f_35859.f_3116[iVar0 /*31*/]) && func_509(iParam0, Global_1146212.f_35859.f_3116[iVar0 /*31*/].f_4))
	{
		vVar1 = { func_510(Global_1146212.f_35859.f_3116[iVar0 /*31*/].f_4) };
		if (func_511(vVar1))
		{
			if (func_512(vVar1.x, vVar1.y, vVar1.z))
			{
				func_513(Global_1146212.f_35859.f_3116[iVar0 /*31*/].f_4, vVar1.x, vVar1.y, vVar1.z);
			}
			else
			{
				func_514(Global_1146212.f_35859.f_3116[iVar0 /*31*/].f_4);
			}
		}
		else
		{
			func_514(Global_1146212.f_35859.f_3116[iVar0 /*31*/].f_4);
		}
	}
	return 1;
}

void func_377(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
}

int func_378(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("UNLOCK__ROLE__POTENTIAL_BONUS_EFFECT"):
			return 145;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_2_EFFECT"):
			return 108;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_1_EFFECT"):
			return 90;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2_LOCAL_EFFECT"):
			return 79;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_3_EFFECT"):
			return 60;
		case joaat("STATUS_EFFECT__POISON_EFFECT"):
			return 137;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_2_EFFECT"):
			return 91;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_2_EFFECT"):
			return 75;
		case -2019073637:
			return 198;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_3_EFFECT"):
			return 26;
		case joaat("CONTENT__PREDATOR__LEVEL_2_EFFECTS"):
			return 180;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_3_EFFECT"):
			return 92;
		case joaat("CONTENT__ACTIVE_DEED__FIRE_VULNERABILITY_EFFECT"):
			return 194;
		case joaat("ABILITY_CARD__HANGMAN_TIER_2_EFFECT"):
			return 28;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2_DAMAGE_TAKEN_EFFECT"):
			return 130;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_3_EFFECT"):
			return 49;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_3_EFFECT"):
			return 22;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_1_EFFECT"):
			return 55;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_DEALT_ON_HORSEBACK_INDICATOR"):
			return 6;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_2_EFFECT"):
			return 134;
		case joaat("ABILITY_CARD__HANGMAN_TIER_3_EFFECT"):
			return 29;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_3_EFFECT"):
			return 16;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_3_EFFECT"):
			return 112;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_3_EFFECT"):
			return 106;
		case joaat("ABILITY_CARD__HANGMAN_INDICATOR"):
			return 30;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGED_INDICATOR"):
			return 8;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_2_EFFECT"):
			return 111;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_2_EFFECT"):
			return 96;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_3_EFFECT"):
			return 45;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1_EFFECT"):
			return 63;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_2_EFFECT"):
			return 38;
		case joaat("CONTENT__PREDATOR__BASE_EFFECTS"):
			return 188;
		case joaat("EQUIPMENT__NED_KELLY_BASE_IMMUNITIES"):
			return 156;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_INDICATOR"):
			return 50;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_1_EFFECT"):
			return 117;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_3_EFFECT"):
			return 39;
		case joaat("CONTENT__PREDATOR__LEVEL_4_EFFECTS"):
			return 182;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_3_EFFECT"):
			return 109;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_3_EFFECT"):
			return 33;
		case -1394912816:
			return 199;
		case -1391351739:
			return 166;
		case joaat("ABILITY_CARD__HANGMAN_TIER_1_EFFECT"):
			return 27;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_1_EFFECT"):
			return 110;
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_1_COST"):
			return 1;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_PENALTY"):
			return 46;
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_2_COST"):
			return 2;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3_DAMAGE_TAKEN_EFFECT"):
			return 132;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_3_EFFECT"):
			return 119;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_3_EFFECT"):
			return 76;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_AURA"):
			return 61;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_7_EFFECT"):
			return 173;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_1_EFFECT"):
			return 47;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_1_EFFECT"):
			return 74;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_1_EFFECT"):
			return 31;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_1_EFFECT"):
			return 123;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_2_EFFECT"):
			return 124;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_2_EFFECT"):
			return 11;
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME_INDICATOR"):
			return 103;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_2_EFFECT"):
			return 21;
		case joaat("CONTENT__PREDATOR__LEVEL_6_EFFECTS"):
			return 184;
		case -749371485:
			return 164;
		case joaat("UNLOCK__ROLE__AWARENESS_BONUS_EFFECT"):
			return 142;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3_LOCAL_EFFECT"):
			return 81;
		case joaat("UNLOCK__ROLE__EAGLE_EYE_PLUS_EFFECT"):
			return 148;
		case joaat("CONTENT__ACTIVE_DEED__EAGLE_EYE_GENERIC_BUFF_EFFECT"):
			return 193;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_3_EFFECT"):
			return 57;
		case joaat("CONTENT__PREDATOR__LEVEL_3_EFFECTS"):
			return 181;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_2_EFFECT"):
			return 48;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_2_EFFECT"):
			return 59;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_3_EFFECT"):
			return 97;
		case joaat("CONTENT__PREDATOR__LEVEL_7_EFFECTS"):
			return 185;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_1_EFFECT"):
			return 104;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_3_EFFECT"):
			return 19;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_1_EFFECT"):
			return 133;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_1_EFFECT"):
			return 113;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_INDICATOR"):
			return 23;
		case joaat("EQUIPMENT__NED_KELLY_FREEROAM_EFFECT"):
			return 160;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_TAKEN_INDICATOR"):
			return 5;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_AURA"):
			return 13;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3_COST"):
			return 66;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_DEALT_INDICATOR"):
			return 4;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_1_COST"):
			return 51;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_6_EFFECT"):
			return 172;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_PENALTY"):
			return 68;
		case -254950601:
			return 152;
		case -242870769:
			return 163;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_2_EFFECT"):
			return 35;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_2_EFFECT"):
			return 105;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_2_EFFECT"):
			return 41;
		case joaat("EQUIPMENT__NED_KELLY_BASE_EFFECTS"):
			return 155;
		case -124368414:
			return 197;
		case -106398498:
			return 153;
		case -97000889:
			return 86;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_3_EFFECT"):
			return 169;
		case -1:
			return 0;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_2_EFFECT"):
			return 56;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_3_EFFECT"):
			return 125;
		case joaat("ABILITY_CARD__DEFAULT_WINDED_INDICATOR"):
			return 9;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_1_EFFECT"):
			return 69;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_2_EFFECT"):
			return 15;
		case joaat("CONTENT__PASSIVE_MODE__IMMUNITIES_EFFECT"):
			return 177;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2_COST"):
			return 64;
		case joaat("CONTENT__PASSIVE_MODE__MOUNT_EFFECTS"):
			return 175;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_1_EFFECT"):
			return 98;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1_LOCAL_EFFECT"):
			return 77;
		case 275909046:
			return 151;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_5_EFFECT"):
			return 171;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_INDICATOR"):
			return 54;
		case joaat("STATUS_EFFECT__TOXIC_MOONSHINE_EFFECT"):
			return 136;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_3_EFFECT"):
			return 89;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1_DAMAGE_DEALT_EFFECT"):
			return 127;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2_DAMAGE_DEALT_EFFECT"):
			return 129;
		case 558636891:
			return 187;
		case joaat("CONSUMABLE__DAILY_STEW_EFFECT"):
			return 196;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2_REMOTE_EFFECT"):
			return 80;
		case 634217179:
			return 150;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_2_EFFECT"):
			return 70;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_1_EFFECT"):
			return 95;
		case joaat("CONTENT__ACTIVE_DEED__BOUNTER_HUNTER_ACCURACY_DEBUFF_EFFECT"):
			return 195;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_1_EFFECT"):
			return 107;
		case joaat("UNLOCK__ROLE__FOCUS_BONUS_EFFECT"):
			return 139;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_1_EFFECT"):
			return 20;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3_REMOTE_EFFECT"):
			return 82;
		case joaat("CONTENT__PREDATOR__LEVEL_0_EFFECTS"):
			return 178;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2_EFFECT"):
			return 65;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_1_EFFECT"):
			return 58;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_1_EFFECT"):
			return 83;
		case joaat("UNLOCK__ROLE__MASTER_DISTILLER_BONUS_EFFECT"):
			return 149;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_2_EFFECT"):
			return 18;
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME_COST"):
			return 102;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_4_EFFECT"):
			return 170;
		case joaat("CONTENT__PREDATOR__LEVEL_8_EFFECTS"):
			return 186;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_2_EFFECT"):
			return 84;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_3_EFFECT"):
			return 100;
		case joaat("CONTENT__HUNTED__MASKED_EFFECTS"):
			return 192;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_DEADEYE_INDICATOR"):
			return 93;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3_DAMAGE_DEALT_EFFECT"):
			return 131;
		case joaat("CONTENT__PREDATOR__LEVEL_5_EFFECTS"):
			return 183;
		case joaat("EQUIPMENT__NED_KELLY_BASE_RESTRICTIONS"):
			return 157;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_1_EFFECT"):
			return 17;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_3_EFFECT"):
			return 122;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_3_EFFECT"):
			return 115;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_1_EFFECT"):
			return 34;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_2_EFFECT"):
			return 32;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_1_EFFECT"):
			return 43;
		case joaat("STATUS_EFFECT__TRACKING_EFFECT"):
			return 138;
		case joaat("CONTENT__PASSIVE_MODE__VEHICLE_EFFECTS"):
			return 176;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_3_EFFECT"):
			return 42;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_1_EFFECT"):
			return 10;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_3_EFFECT"):
			return 12;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_AURA"):
			return 73;
		case 1256374770:
			return 165;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_3_EFFECT"):
			return 36;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_1_EFFECT"):
			return 37;
		case joaat("CONTENT__PREDATOR__BASE_IMMUNITIES"):
			return 190;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_2_EFFECT"):
			return 114;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_2_EFFECT"):
			return 99;
		case 1305406380:
			return 162;
		case joaat("UNLOCK__ROLE__PROTECTION_MOONSHINE_BONUS_EFFECT"):
			return 144;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_2_EFFECT"):
			return 25;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_2_EFFECT"):
			return 88;
		case joaat("UNLOCK__ROLE__PROTECTION_TRADER_BONUS_EFFECT"):
			return 143;
		case joaat("UNLOCK__ROLE__PERCEPTION_BONUS_EFFECT"):
			return 140;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_EAGLE_EYE_INDICATOR"):
			return 94;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_2_EFFECT"):
			return 168;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_3_EFFECT"):
			return 85;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_1_EFFECT"):
			return 87;
		case 1462245043:
			return 154;
		case joaat("CONTENT__PREDATOR__BASE_EFFECTS_VULNERABLE"):
			return 189;
		case joaat("UNLOCK__ROLE__INTUITION_BONUS_EFFECT"):
			return 146;
		case joaat("CONTENT__PREDATOR__RESPAWN_EFFECTS"):
			return 191;
		case joaat("UNLOCK__ROLE__DIVINATION_BONUS_EFFECT"):
			return 147;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1_COST"):
			return 62;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1_REMOTE_EFFECT"):
			return 78;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_INDICATOR"):
			return 126;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_INDICATOR"):
			return 116;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_PENALTIES"):
			return 72;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3_EFFECT"):
			return 67;
		case joaat("ABILITY_CARD__WINNING_STREAK_INDICATOR"):
			return 101;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1_DAMAGE_TAKEN_EFFECT"):
			return 128;
		case joaat("EQUIPMENT__NED_KELLY_ADVERSARY_EFFECT"):
			return 158;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_3_EFFECT"):
			return 71;
		case joaat("CONTENT__PREDATOR__LEVEL_1_EFFECTS"):
			return 179;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_3_EFFECT"):
			return 135;
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_3_COST"):
			return 3;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_2_EFFECT"):
			return 121;
		case joaat("UNLOCK__ROLE__EFFICIENCY_BONUS_EFFECT"):
			return 141;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_1_EFFECT"):
			return 24;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_1_EFFECT"):
			return 167;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_1_EFFECT"):
			return 40;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_TAKEN_ON_HORSEBACK_INDICATOR"):
			return 7;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_3_COST"):
			return 53;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_2_EFFECT"):
			return 118;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_2_EFFECT"):
			return 44;
		case joaat("EQUIPMENT__NED_KELLY_GOLDEN_EFFECT"):
			return 161;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_2_COST"):
			return 52;
		case joaat("CONTENT__PASSIVE_MODE__DAMAGE_EFFECTS"):
			return 174;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_1_EFFECT"):
			return 120;
		case joaat("EQUIPMENT__NED_KELLY_COOP_EFFECT"):
			return 159;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_1_EFFECT"):
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

void func_379(int iParam0, int iParam1)
{
	Global_1146212.f_35859.f_3116[iParam0 /*31*/].f_29 = (Global_1146212.f_35859.f_3116[iParam0 /*31*/].f_29 + iParam1);
}

void func_380(int iParam0, int iParam1)
{
	Global_1146212.f_35859.f_3116[iParam0 /*31*/].f_29 = iParam1;
}

void func_381(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_1[iVar0 /*2*/] = 0;
		uParam0->f_1[iVar0 /*2*/].f_1 = 0;
		iVar0++;
	}
}

void func_382()
{
	if (!Global_1102219.f_16)
	{
		return;
	}
	Global_1071686.f_28662.f_5 = 1;
	AUDIO::_0x531A78D6BF27014B("rdro_gamemode_transition_sounds");
	AUDIO::_0x531A78D6BF27014B("rdro_gamemode_generic_sounds");
}

int func_383(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PLAYER");
		case 1:
			return joaat("REL_CIVMALE");
		case 2:
			return joaat("REL_CIVFEMALE");
		case 3:
			return joaat("REL_CIVNATIVE");
		case 4:
			return joaat("REL_COP");
		case 5:
			return joaat("REL_NO_RELATIONSHIP");
		case 6:
			return joaat("REL_PLAYER_ENEMY");
		case 7:
			return joaat("REL_PLAYER_ALLY");
		case 8:
			return joaat("REL_PLAYER_LIKE");
		case 9:
			return joaat("REL_PLAYER_DISLIKE");
		case 10:
			return joaat("REL_COMPANION_GROUP");
		case 11:
			return joaat("REL_WILD_ANIMAL");
		case 12:
			return joaat("REL_WILD_ANIMAL_PREDATOR");
		case 13:
			return joaat("REL_DOMESTICATED_ANIMAL");
		case 14:
			return joaat("REL_DOMESTICATED_PET_ANIMAL");
		case 15:
			return joaat("REL_BOUNTY_HUNTER");
		case 16:
			return joaat("REL_GUAMA_LAW");
		case 17:
			return joaat("REL_PINKERTONS");
		case 18:
			return joaat("REL_TOWN_MOB");
		case 19:
			return joaat("REL_CRIMINALS");
		case 20:
			return joaat("REL_GUNSLINGERS");
		case 21:
			return joaat("REL_GANG_DUTCHS");
		case 22:
			return joaat("REL_GANG_DUTCHS_HORSES");
		case 23:
			return joaat("REL_GANG_LARAMIE_GANG");
		case 24:
			return joaat("REL_GANG_SKINNER_BROTHERS");
		case 25:
			return joaat("REL_GANG_CREOLE");
		case 26:
			return joaat("REL_GANG_LEMOYNE_RAIDERS");
		case 27:
			return joaat("REL_GANG_SMUGGLERS");
		case 28:
			return joaat("REL_GANG_ODRISCOLL");
		case 29:
			return joaat("REL_GANG_MURFREE_BROOD");
		case 30:
			return joaat("REL_WILD_ANIMAL_BIRD");
		case 31:
			return joaat("REL_ALLIGATOR");
		case 32:
			return joaat("REL_BOAR");
		case 33:
			return joaat("REL_HEN_ANIMAL");
		case 34:
			return joaat("REL_MINIGAME_PLAYER");
		case 35:
			return joaat("REL_BRAITHWAITES");
		case 36:
			return joaat("REL_GREYS");
		case 37:
			return joaat("REL_RE_VICTIM");
		case 38:
			return joaat("REL_RE_ENEMY");
		case 39:
			return joaat("REL_MP_LIKE_ALL_PLAYERS");
		case 40:
			return joaat("REL_FETCH_ENEMY_1");
		case 41:
			return joaat("REL_FETCH_ENEMY_2");
		case 42:
			return joaat("REL_NETWORK_SAFE");
		case 43:
			return joaat("REL_NETWORK_FREE_AGENT");
		case 44:
			return joaat("REL_MP_WANTED_CRIMINAL");
		case 45:
			return joaat("REL_GT_FFA");
		case 46:
			return joaat("REL_GT_TEAM_0");
		case 47:
			return joaat("REL_GT_TEAM_1");
		case 48:
			return joaat("REL_GT_TEAM_2");
		case 49:
			return joaat("REL_GT_TEAM_3");
		case 50:
			return joaat("REL_GT_TEAM_4");
		case 51:
			return joaat("REL_GT_TEAM_5");
		case 52:
			return joaat("REL_GT_TEAM_6");
		case 53:
			return joaat("REL_GT_TEAM_7");
		case 54:
			return joaat("REL_PLAYER_COP");
		case 55:
			return joaat("REL_PLAYER_0");
		case 56:
			return joaat("REL_PLAYER_1");
		case 57:
			return joaat("REL_PLAYER_2");
		case 58:
			return joaat("REL_PLAYER_3");
		case 59:
			return joaat("REL_PLAYER_4");
		case 60:
			return joaat("REL_PLAYER_5");
		case 61:
			return joaat("REL_PLAYER_6");
		case 62:
			return joaat("REL_PLAYER_7");
		case 63:
			return joaat("REL_PLAYER_8");
		case 64:
			return joaat("REL_PLAYER_9");
		case 65:
			return joaat("REL_PLAYER_10");
		case 66:
			return joaat("REL_PLAYER_11");
		case 67:
			return joaat("REL_PLAYER_12");
		case 68:
			return joaat("REL_PLAYER_13");
		case 69:
			return joaat("REL_PLAYER_14");
		case 70:
			return joaat("REL_PLAYER_15");
		case 71:
			return joaat("REL_PLAYER_16");
		case 72:
			return joaat("REL_PLAYER_17");
		case 73:
			return joaat("REL_PLAYER_18");
		case 74:
			return joaat("REL_PLAYER_19");
		case 75:
			return joaat("REL_PLAYER_20");
		case 76:
			return joaat("REL_PLAYER_21");
		case 77:
			return joaat("REL_PLAYER_22");
		case 78:
			return joaat("REL_PLAYER_23");
		case 79:
			return joaat("REL_PLAYER_24");
		case 80:
			return joaat("REL_PLAYER_25");
		case 81:
			return joaat("REL_PLAYER_26");
		case 82:
			return joaat("REL_PLAYER_27");
		case 83:
			return joaat("REL_PLAYER_28");
		case 84:
			return joaat("REL_PLAYER_29");
		case 85:
			return joaat("REL_PLAYER_30");
		case 86:
			return joaat("REL_PLAYER_31");
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

bool func_384(int iParam0, var uParam1)
{
	struct<4> Var0;

	Var0 = Global_1071686.f_28448[48 /*4*/].f_3;
	Var0.f_2 = -738708473;
	Var0.f_3 = func_358(iParam0);
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		return false;
	}
	Var0.f_2 = -1407851228;
	Var0.f_3 = MISC::GET_HASH_KEY("sHash");
	DATAFILE::_DATAFILE_GET_HASH(uParam1, &Var0);
	return true;
}

bool func_385(var uParam0, int iParam1, int iParam2)
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

bool func_386(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
	MISC::CLEAR_BIT(uParam0[iVar0], iVar1);
	return bVar2;
}

int func_387(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	iVar0 = 0;
	iVar1 = -1;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		fVar3 = BUILTIN::VDIST(vParam0, Global_1071686.f_23887.f_366[iVar0 /*272*/].f_2);
		if (fVar3 < fVar2 || iVar1 == -1)
		{
			iVar1 = iVar0;
			fVar2 = fVar3;
		}
		iVar0++;
	}
	return iVar1;
}

int func_388(var uParam0)
{
	struct<4> Var0;

	Var0 = Global_1071686.f_23887.f_366.f_4085;
	Var0.f_2 = 1593794963;
	Var0.f_3 = uParam0;
	return DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
}

bool func_389(var uParam0, int iParam1, var uParam2, float fParam3)
{
	struct<5> Var0;

	Var0 = Global_1071686.f_23887.f_366.f_4085;
	Var0.f_2 = 160165798;
	Var0.f_3 = uParam0;
	Var0.f_4 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1576253240;
		DATAFILE::_DATAFILE_GET_VECTOR(uParam2, &Var0);
		Var0.f_2 = -55481687;
		DATAFILE::_DATAFILE_GET_FLOAT(fParam3, &Var0);
		return true;
	}
	return false;
}

int func_390(int iParam0)
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

void func_391(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_515(iParam0);
	if (!func_516(1))
	{
		return;
	}
	if (bParam1)
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_517(128) && !func_518(19))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_519() == 4)
	{
		func_261(18);
	}
	func_520(1024);
}

void func_392(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_393(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_394(struct<29> Param0, var uParam29, int iParam30)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(Param0.f_4))
			{
			}
			break;
	}
	if (Param0.f_16)
	{
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Param0.f_27) && Param0.f_28)
	{
	}
}

void func_395(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

bool func_396()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_521(iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_397()
{
	return (Global_1296851.f_2.f_1 == 2 || Global_1296851.f_2.f_1 == 1);
}

bool func_398()
{
	return (Global_1915715.f_20637 || Global_1915715.f_22504.f_1);
}

void func_399(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar6;

	iVar0 = INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iParam0);
	iVar1 = INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iParam1);
	if (!INVENTORY::_0x886DFD3E185C8A89(iVar0, &uVar6, 923904168, -740156546, &uVar2))
	{
	}
	INVENTORY::_0xC04F47D488EF9EBA(iVar0, iVar1, &uVar2, 0);
}

bool func_400(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

void func_401(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_402()
{
	return func_522(func_19(0));
}

bool func_403(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_BUY_AWARD_KEY_VALID(iParam0);
}

bool func_404(int iParam0, int iParam1)
{
	*iParam1 = func_523(iParam0, 1);
	return *iParam1 != 0;
}

bool func_405(int iParam0, int iParam1)
{
	*iParam1 = func_524(iParam0, 1, 0);
	return *iParam1 != 0;
}

bool func_406(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if (!func_286(iParam0, 0))
	{
		return func_525(func_315(iParam0), bParam1, bParam2);
	}
	if (func_180(iParam0))
	{
		return func_300(func_181(iParam0, 1), bParam1);
	}
	if ((bParam2 && func_345() == 0) && !UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
	{
		return true;
	}
	if (!func_526(iParam0, bParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return false;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar13))
		{
			return true;
		}
		iVar12++;
	}
	return false;
}

int func_407(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_527(iVar0, 1, 0);
		if (!func_319(iParam0, iVar33, &Var2, &iVar1, 1, 0))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_528(Var2[iVar34 /*2*/]))
				{
					if (!bParam1 || func_369(Var2[iVar34 /*2*/], 0, 1, 1) > 0)
					{
						return iVar33;
					}
					Jump @135; //curOff = 107
				}
				else if (Var2[iVar34 /*2*/] == 0)
				{
				}
				else
				{
					iVar34++;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_408(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	struct<2> Var9[15];
	int iVar40;
	int iVar41;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar40 = func_527(iVar0, 0, 1);
		if (!func_319(iParam0, iVar40, &Var9, &iVar1, 1, 0))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_484(Var9[iVar41 /*2*/]))
				{
					if (!bParam1 || func_369(Var9[iVar41 /*2*/], 0, 1, 1) > 0)
					{
						bVar8 = true;
					}
				}
				else if (Var9[iVar41 /*2*/] == joaat("CURRENCY_CASH") || Var9[iVar41 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
				{
					if ((bParam2 && Var9[iVar41 /*2*/] == joaat("CURRENCY_CASH")) || (!bParam2 && Var9[iVar41 /*2*/] == joaat("CURRENCY_GOLD_BAR")))
					{
						if (iVar4 == 0 || (bVar6 && Var9[iVar41 /*2*/].f_1 < iVar2))
						{
							iVar5 = iVar40;
							iVar3 = Var9[iVar41 /*2*/].f_1;
							iVar7 = 1;
						}
					}
					else if (iVar4 == 0 || Var9[iVar41 /*2*/].f_1 < iVar2)
					{
						iVar5 = iVar40;
						iVar3 = Var9[iVar41 /*2*/].f_1;
						iVar7 = 0;
					}
				}
				else if (Var9[iVar41 /*2*/] == 0)
				{
				}
				else
				{
					iVar41++;
				}
			}
			if (bVar8 && iVar5 != 0)
			{
				iVar4 = iVar5;
				iVar2 = iVar3;
				bVar6 = iVar7;
			}
		}
		iVar0++;
	}
	return iVar4;
}

int func_409(int iParam0, bool bParam1)
{
	if (!func_296(iParam0, bParam1))
	{
		return 0;
	}
	if (iParam0 == joaat("DOCUMENT_PAMPHLET_TRACKING_ARROW"))
	{
		return func_181(joaat("AMMO_ARROW_TRACKING"), 1);
	}
	else if (iParam0 == joaat("DOCUMENT_PAMPHLET_POISON_BOTTLE"))
	{
		return func_181(joaat("AMMO_POISONBOTTLE"), 1);
	}
	else if (iParam0 == joaat("DOCUMENT_PAMPHLET_ANIMAL_REVIVER"))
	{
		return func_181(joaat("CONSUMABLE_TONIC_ANIMAL_REVIVER"), 1);
	}
	else if (iParam0 == joaat("DOCUMENT_PAMPHLET_AMMO_22_TRANQUILIZER"))
	{
		return func_181(joaat("AMMO_22_TRANQUILIZER"), 1);
	}
	else if (iParam0 == joaat("DOCUMENT_PAMPHLET_LEGENDARY_PHEROMONES"))
	{
		return func_181(joaat("CONSUMABLE_ROLE_NATURALIST_LEGENDARY_ANIMAL_PHEROMONE"), 1);
	}
	else if (iParam0 == joaat("DOCUMENT_PAMPHLET_TONIC_BLENDING"))
	{
		return func_181(joaat("CONSUMABLE_TONIC_BLENDING"), 1);
	}
	return func_181(iParam0, 1);
}

bool func_410(int iParam0)
{
	bool bVar0;
	int iVar1;

	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_345() == -1)
	{
		if (func_529(iParam0))
		{
			iVar1 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
			bVar0 = UNLOCK::_UNLOCK_IS_VISIBLE(iVar1);
		}
		else
		{
			return true;
		}
	}
	else
	{
		bVar0 = UNLOCK::_UNLOCK_IS_VISIBLE(iParam0);
	}
	return bVar0;
}

int func_411(int iParam0, int iParam1)
{
	if (iParam0 == 15 && func_314(iParam1, -2051813666))
	{
		return 1;
	}
	return 0;
}

int func_412(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;

	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_436(0) };
	Var0.f_4 = func_530(iParam1);
	Var5 = { func_320(iParam0, Var0, Var0.f_4, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var5))
	{
		return 0;
	}
	iVar9 = INVENTORY::_0xC97E0D2302382211(func_470(0), &Var5, 0);
	return iVar9;
}

int func_413(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_317(iParam0, bParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if ((Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR")) || Var0[iVar32 /*2*/] == joaat("CHARACTER_ROLE_TOKEN"))
		{
			return Var0[iVar32 /*2*/].f_1;
		}
		else if (Var0[iVar32 /*2*/] == 0)
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

bool func_414(int iParam0)
{
	return func_442(iParam0) == -999503751;
}

int func_415(int iParam0)
{
	if (!func_414(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case -2068637111: /* GXTEntry: "The Copperhead Enforcer" */
			return -705751660;
		case -1871922677: /* GXTEntry: "The Blackrose Bounty Hunter" */
			return 1364634153;
		case -905031115: /* GXTEntry: "The Grizzlies Outlaw" */
			return -388301838;
		case 1928115537: /* GXTEntry: "The Déchaux" */
			return 208175031;
		case 453281150: /* GXTEntry: "The Mercer" */
			return -98968806;
		case 153739721: /* GXTEntry: "The Schefield" */
			return -402606360;
		case 1167678119: /* GXTEntry: "The Hettinger" */
			return -709946811;
		case 736667462: /* GXTEntry: "The Ajaccio" */
			return -362300646;
		case -673644764: /* GXTEntry: "The Tasman" */
			return -65380737;
		case -980133221: /* GXTEntry: "The Zacateca" */
			return 100758093;
		case -209930641: /* GXTEntry: "The Clayton" */
			return -1740761400;
		case -1735897526: /* GXTEntry: "The Wakeeney" */
			return -27480348;
		case -482614352: /* GXTEntry: "The Wakeeney" */
			return -257977494;
		case -1258944731: /* GXTEntry: "The Wakeeney" */
			return -582914898;
		case 1536480356: /* GXTEntry: "The Wakeeney" */
			return -814067424;
		case 1827632921: /* GXTEntry: "The Wakeeney" */
			return -1179212391;
		case -1483084691: /* GXTEntry: "The Wakeeney" */
			return -1407415707;
		case -1855140882: /* GXTEntry: "The Bullard" */
			return -9237745;
		case -1605932637: /* GXTEntry: "The Bullard" */
			return 296464256;
		case 838274308: /* GXTEntry: "The Bullard" */
			return -1849217095;
		case 1423463110: /* GXTEntry: "The Bullard" */
			return 1698584232;
		case 1722021469: /* GXTEntry: "The Bullard" */
			return 1996257828;
		case 1293960018: /* GXTEntry: "The Bullard" */
			return 1186175379;
		case 1084020314: /* GXTEntry: "The Garwood" */
			return -1332741910;
		case 1384905272: /* GXTEntry: "The Garwood" */
			return -1632447184;
		case 166258931: /* GXTEntry: "The Garwood" */
			return -1930088011;
		case -285691117: /* GXTEntry: "The Garwood" */
			return 2065632777;
		case -1506238056: /* GXTEntry: "The Garwood" */
			return 937854865;
		case -141245365: /* GXTEntry: "The Garwood" */
			return -1520409981;
		case 962175652: /* GXTEntry: "The Carthage" */
			return 1356000914;
		case 687079897: /* GXTEntry: "The Carthage" */
			return -423388555;
		case 373021801: /* GXTEntry: "The Carthage" */
			return -188959129;
		case 75839740: /* GXTEntry: "The Carthage" */
			return -93765184;
		case -208529642: /* GXTEntry: "The Carthage" */
			return 401046716;
		case -504466477: /* GXTEntry: "The Carthage" */
			return -845387737;
		case -1896067425: /* GXTEntry: "The Wentworth" */
			return -229247533;
		case -1732419039: /* GXTEntry: "The Wentworth" */
			return 57481217;
		case 1620668890: /* GXTEntry: "The Wentworth" */
			return 383434460;
		case 2095557238: /* GXTEntry: "The Wentworth" */
			return 404275544;
		case -700719823: /* GXTEntry: "The Wentworth" */
			return 721381157;
		case -520949089: /* GXTEntry: "The Wentworth" */
			return 1027509151;
		case 783963696: /* GXTEntry: "The Wallingford" */
			return -1688869940;
		case 477409701: /* GXTEntry: "The Wallingford" */
			return -97312371;
		case 325427079: /* GXTEntry: "The Wallingford" */
			return -870234774;
		case -2127824110: /* GXTEntry: "The Wallingford" */
			return -573609786;
		case -478920799: /* GXTEntry: "The Wallingford" */
			return -1336767027;
		case -784753876: /* GXTEntry: "The Wallingford" */
			return 1125692243;
		case -1991069642: /* GXTEntry: "The Gladewater" */
			return 1599850951;
		case 1534579841: /* GXTEntry: "The Gladewater" */
			return 1505836690;
		case 1755770591: /* GXTEntry: "The Gladewater" */
			return 1007026972;
		case 852591413: /* GXTEntry: "The Gladewater" */
			return -1271696523;
		case -1269692868: /* GXTEntry: "The Gladewater" */
			return -1501734903;
		case -1638540740: /* GXTEntry: "The Gladewater" */
			return -466660528;
		case 1404368072: /* GXTEntry: "The Londonderry" */
			return -1675392330;
		case 561909851: /* GXTEntry: "The Londonderry" */
			return -1377882579;
		case 1369829534: /* GXTEntry: "The Londonderry" */
			return 2136592667;
		case 669687080: /* GXTEntry: "The Londonderry" */
			return -1849788956;
		case 908671397: /* GXTEntry: "The Londonderry" */
			return -1561028528;
		case -50313388: /* GXTEntry: "The Londonderry" */
			return -1268368589;
		case 896138350: /* GXTEntry: "The Monterey" */
			return -655694620;
		case -1347489546: /* GXTEntry: "The Monterey" */
			return -882128410;
		case -1127937242: /* GXTEntry: "The Monterey" */
			return -27217981;
		case -821055557: /* GXTEntry: "The Monterey" */
			return 513863747;
		case -666844643: /* GXTEntry: "The Monterey" */
			return 272520062;
		case 1507149124: /* GXTEntry: "The Monterey" */
			return 1115043821;
		case 1797068311: /* GXTEntry: "The Sunderland" */
			return 434380030;
		case 1509389260: /* GXTEntry: "The Sunderland" */
			return -1994163333;
		case 1196052082: /* GXTEntry: "The Sunderland" */
			return 1445336445;
		case 914074837: /* GXTEntry: "The Sunderland" */
			return -1000181256;
		case 599099209: /* GXTEntry: "The Sunderland" */
			return -1601951172;
		case 774216741: /* GXTEntry: "The Sunderland" */
			return -1900673376;
		case 180232641: /* GXTEntry: "The Worthington" */
			return -1722245291;
		case -1597878813: /* GXTEntry: "The Worthington" */
			return -1550994497;
		case -895311481: /* GXTEntry: "The Worthington" */
			return -1654216923;
		case -2075290374: /* GXTEntry: "The Worthington" */
			return -956892603;
		case -1349063796: /* GXTEntry: "The Worthington" */
			return 2044551183;
		case 1649135863: /* GXTEntry: "The Worthington" */
			return 1816380636;
		case 10498108: /* GXTEntry: "The Tyringham" */
			return -1216565419;
		case 317576407: /* GXTEntry: "The Tyringham" */
			return -997045888;
		case -803057859: /* GXTEntry: "The Tyringham" */
			return -622430680;
		case -229076051: /* GXTEntry: "The Tyringham" */
			return -1279023141;
		case -1445559642: /* GXTEntry: "The Tyringham" */
			return -1036761924;
		case -1140185331: /* GXTEntry: "The Tyringham" */
			return -683249952;
		case 913153433:
			return 194792351;
		case 606730510:
			return -1974548202;
		case -964051505:
			return 1014738289;
		case -1267459676:
			return 634486813;
		case -483756272:
			return 1408261210;
		case -805187393:
			return -768354077;
		case -1116096467:
			return 1791083718;
		case -4997980:
			return 1484267571;
		case -305588017:
			return -632577068;
		case -694850968:
			return -872544455;
		case -985380922:
			return -1111430465;
		case 974827889:
			return -1351987694;
		case -1156770257:
			return -803252891;
		case -843695231:
			return 2121544208;
		case 1854078224:
			return -1667469728;
		case -2137185980:
			return 466087145;
		case -1830566447:
			return 98091275;
		case -1537546049:
			return -1010615123;
		case 469166476:
			return -32097795;
		case 1229079574:
			return -875834007;
		case 990422947:
			return 68797956;
		case -229665218:
			return -270885498;
		case -527568197:
			return 682069807;
		case 242634379:
			return 920726434;
		case -521123265:
			return -1709594912;
		case 766501761:
			return 1740292643;
		case -1135443708:
			return 2121330575;
		case 609997105:
			return 1281690488;
		case 378877348:
			return 1523820629;
		case -938370918:
			return 1117747177;
		case -1651298733:
			return -1091279926;
		case -494651336:
			return -585850882;
		case -1307650230:
			return -364430749;
		case 1220379817:
			return 1173844426;
		case 1450975270:
			return -964758829;
		case 1835159026:
			return -1806659977;
		case 1161689282:
			return -156109760;
		case 1472306629:
			return 325463492;
		case 23785761:
			return 20482409;
		case 332895738:
			return 1859937455;
		case -860715087:
			return 1554366530;
		case -151856079:
			return 1545191210;
		case -477077213:
			return 303195323;
		case -783270749:
			return -458159623;
		case -2043500951:
			return -162091708;
		case -705706526:
			return 869967935;
		case 1219931046:
			return 1175473322;
		case -1794096032:
			return 157930334;
		case 275775515: /* GXTEntry: "The Copperhead Enforcer" */
			return 1379601741;
		case -1160690408: /* GXTEntry: "The Blackrose Bounty Hunter" */
			return joaat("VANHORN0204_GTXD");
		case -1763097043: /* GXTEntry: "The Grizzlies Outlaw" */
			return 115504824;
		case 912572382: /* GXTEntry: "The Breckenridge" */
			return -1399728874;
		case 73391061: /* GXTEntry: "The Roanoke" */
			return -1090192900;
		case 332495544: /* GXTEntry: "The Summerfield" */
			return -1893000631;
		case -501475506: /* GXTEntry: "The Kimberly" */
			return -1583759578;
		case -280579677: /* GXTEntry: "The Danube" */
			return -204905596;
		case -814845497: /* GXTEntry: "The Dauphine" */
			return -974747713;
		case -1610902814: /* GXTEntry: "The Redington" */
			return -701454253;
		case -1313261987: /* GXTEntry: "The Quinton" */
			return 678546644;
		case -668402627: /* GXTEntry: "The Wakeeney" */
			return -1643732782;
		case -1436966753: /* GXTEntry: "The Wakeeney" */
			return -1879178047;
		case -1105410003: /* GXTEntry: "The Wakeeney" */
			return 2033604402;
		case -792302208: /* GXTEntry: "The Wakeeney" */
			return 729201588;
		case -1544547372: /* GXTEntry: "The Wakeeney" */
			return 1695854319;
		case -1268599623: /* GXTEntry: "The Wakeeney" */
			return -2040860293;
		case 1281867320: /* GXTEntry: "The Bullard" */
			return 430601343;
		case -1699226913: /* GXTEntry: "The Bullard" */
			return 528449577;
		case -1610553999: /* GXTEntry: "The Bullard" */
			return 836052180;
		case -1909243438: /* GXTEntry: "The Bullard" */
			return 1126483827;
		case -1551799186: /* GXTEntry: "The Bullard" */
			return 1432546287;
		case -1999554802: /* GXTEntry: "The Bullard" */
			return 1721339484;
		case 723981565: /* GXTEntry: "The Garwood" */
			return 1684533498;
		case 963752338: /* GXTEntry: "The Garwood" */
			return 1404424086;
		case 372402960: /* GXTEntry: "The Garwood" */
			return 69611632;
		case 989901996: /* GXTEntry: "The Garwood" */
			return -221377088;
		case -239754729: /* GXTEntry: "The Garwood" */
			return 1613326453;
		case 142266273: /* GXTEntry: "The Garwood" */
			return 1307853835;
		case 911761394: /* GXTEntry: "The Carthage" */
			return 2176663;
		case 1676688161: /* GXTEntry: "The Carthage" */
			return -292908182;
		case 1907906229: /* GXTEntry: "The Carthage" */
			return 1638955448;
		case -1621282302: /* GXTEntry: "The Carthage" */
			return 1374083621;
		case -1801773954: /* GXTEntry: "The Carthage" */
			return -1218075359;
		case -1003029579: /* GXTEntry: "The Carthage" */
			return -1516043876;
		case 165089723: /* GXTEntry: "The Wentworth" */
			return -726135810;
		case 395586869: /* GXTEntry: "The Wentworth" */
			return -458052621;
		case 623560802: /* GXTEntry: "The Wentworth" */
			return -926911473;
		case 888203246: /* GXTEntry: "The Wentworth" */
			return -1761242982;
		case 1123550204: /* GXTEntry: "The Wentworth" */
			return -1388135148;
		case 1862360078: /* GXTEntry: "The Wentworth" */
			return -1644486999;
		case -1320869011: /* GXTEntry: "The Wallingford" */
			return -688485759;
		case -1078345642: /* GXTEntry: "The Wallingford" */
			return -381735150;
		case -571278136: /* GXTEntry: "The Wallingford" */
			return 2046513300;
		case -856663353: /* GXTEntry: "The Wallingford" */
			return -1943603989;
		case -632654469: /* GXTEntry: "The Wallingford" */
			return -1635706465;
		case -380562552: /* GXTEntry: "The Wallingford" */
			return -1338786556;
		case 1911459413: /* GXTEntry: "The Gladewater" */
			return -1434447686;
		case -1606456586: /* GXTEntry: "The Gladewater" */
			return -675714260;
		case -1888892597: /* GXTEntry: "The Gladewater" */
			return 249321841;
		case 1154823199: /* GXTEntry: "The Gladewater" */
			return -1070777324;
		case 856068226: /* GXTEntry: "The Gladewater" */
			return 2065543650;
		case 1786380136: /* GXTEntry: "The Gladewater" */
			return 1826887023;
		case 1943475930: /* GXTEntry: "The Londonderry" */
			return -1810703525;
		case 1697315198: /* GXTEntry: "The Londonderry" */
			return -1226563331;
		case -1787340262: /* GXTEntry: "The Londonderry" */
			return -1466006414;
		case -1341845703: /* GXTEntry: "The Londonderry" */
			return 724273546;
		case -1632670578: /* GXTEntry: "The Londonderry" */
			return 1512859531;
		case -932593662: /* GXTEntry: "The Londonderry" */
			return 1266305575;
		case -499308854: /* GXTEntry: "The Monterey" */
			return 1937278961;
		case -785677145: /* GXTEntry: "The Monterey" */
			return 971478216;
		case -18849776: /* GXTEntry: "The Monterey" */
			return 1202597973;
		case -806059467: /* GXTEntry: "The Monterey" */
			return 507698559;
		case 91876671: /* GXTEntry: "The Monterey" */
			return 746355186;
		case -199538046: /* GXTEntry: "The Monterey" */
			return 523755373;
		case -1754780383: /* GXTEntry: "The Sunderland" */
			return 1219798516;
		case -2050586146: /* GXTEntry: "The Sunderland" */
			return -1568843392;
		case -1622000367: /* GXTEntry: "The Sunderland" */
			return 1824681487;
		case -1930520502: /* GXTEntry: "The Sunderland" */
			return 933561301;
		case 1689602008: /* GXTEntry: "The Sunderland" */
			return -614970571;
		case 1384162159: /* GXTEntry: "The Sunderland" */
			return -310186102;
		case -733625577: /* GXTEntry: "The Worthington" */
			return 1209768883;
		case -370348443: /* GXTEntry: "The Worthington" */
			return 1834280485;
		case -1205728560: /* GXTEntry: "The Worthington" */
			return 329528021;
		case 459985248: /* GXTEntry: "The Worthington" */
			return 1778442129;
		case 834207228: /* GXTEntry: "The Worthington" */
			return 805432208;
		case 1230744937: /* GXTEntry: "The Worthington" */
			return -25950091;
		case 1859098900: /* GXTEntry: "The Tyringham" */
			return 922505133;
		case -2137310037: /* GXTEntry: "The Tyringham" */
			return 120975393;
		case 1086995730: /* GXTEntry: "The Tyringham" */
			return 426742932;
		case -1962290800: /* GXTEntry: "The Tyringham" */
			return 2081118674;
		case 1736084082: /* GXTEntry: "The Tyringham" */
			return -1914569345;
		case 2038967949: /* GXTEntry: "The Tyringham" */
			return 1110533655;
		case -1732116082:
			return -2005854180;
		case -2043224964:
			return -1762511586;
		case 1970158315:
			return -1609283862;
		case 1655444839:
			return -1311675804;
		case 1373270980:
			return -1952932365;
		case 1058885194:
			return -1923309189;
		case -1944199774:
			return -1262957735;
		case 999079041:
			return -1516622564;
		case 635605293:
			return -1741811132;
		case 1493792634:
			return -1991740303;
		case -213406744:
			return 2071419087;
		case -505870069:
			return 1352008461;
		case -152330007:
			return -196656840;
		case 2024678512:
			return 108848547;
		case 1188643011:
			return -610365465;
		case 1680243549:
			return -371774376;
		case 845486043:
			return -123352547;
		case -1351118334:
			return 112125487;
		case -1206325201:
			return -741695871;
		case -1514091649:
			return -711024087;
		case 1284413724:
			return 784454766;
		case 976581738:
			return 1114307520;
		case 1895916033:
			return 2026825867;
		case 1588804965:
			return 177900576;
		case -691537108:
			return -1357555725;
		case -2138714467:
			return -1604437371;
		case -1967660287:
			return -214441929;
		case -1574858284:
			return -455982228;
		case -1370707414:
			return -676320984;
		case 1429764111:
			return -907571817;
		case 1074060936:
			return 462295077;
		case 1238037012:
			return 768128154;
		case -1431915598:
			return -119452980;
		case -1133947081:
			return 189198231;
		case -987535189:
			return -698055213;
		case -676262434:
			return -422500692;
		case 1109042843:
			return 1148576455;
		case 817890278:
			return -244826955;
		case 1719496544:
			return -14755806;
		case 1452003197:
			return 249886638;
		case -2077939025:
			return -1994920950;
		case 2036208929:
			return 392792239;
		case -1698171004:
			return -1105085114;
		case -1437165919:
			return 1210831216;
		case -1206046162:
			return 651988690;
		case -1020114856:
			return 1835768799;
		case -778869478:
			return 1530492811;
		case -558071952:
			return -252173558;
		default:
			break;
	}
	return 0;
}

bool func_416(int iParam0)
{
	if (!func_286(iParam0, 0))
	{
		return false;
	}
	return func_442(iParam0) == 153430294;
}

int func_417(int iParam0)
{
	if (!func_416(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("CLOTHING_ITEM_M_OFFHAND_000_TINT_001"):
			return 2113612788;
		case joaat("CLOTHING_ITEM_M_OFFHAND_000_TINT_002"):
			return 1799751306;
		case joaat("CLOTHING_ITEM_M_OFFHAND_000_TINT_003"):
			return 1444076568;
		case joaat("CLOTHING_ITEM_M_OFFHAND_000_TINT_004"):
			return 1147680963;
		case joaat("CLOTHING_ITEM_M_OFFHAND_001_TINT_001"):
			return -2020336278;
		case joaat("CLOTHING_ITEM_M_OFFHAND_001_TINT_002"):
			return -1377900033;
		case joaat("CLOTHING_ITEM_M_OFFHAND_001_TINT_003"):
			return -1541941647;
		case joaat("CLOTHING_ITEM_M_OFFHAND_001_TINT_004"):
			return 1616727805;
		case joaat("CLOTHING_ITEM_M_OFFHAND_002_TINT_001"):
			return -922666835;
		case joaat("CLOTHING_ITEM_M_OFFHAND_002_TINT_002"):
			return -855621461;
		case joaat("CLOTHING_ITEM_M_OFFHAND_002_TINT_003"):
			return -564862124;
		case joaat("CLOTHING_ITEM_M_OFFHAND_002_TINT_004"):
			return 1955205056;
		case joaat("CLOTHING_ITEM_M_OFFHAND_003_TINT_001"):
			return 1515886177;
		case joaat("CLOTHING_ITEM_M_OFFHAND_003_TINT_002"):
			return 1212871226;
		case joaat("CLOTHING_ITEM_M_OFFHAND_003_TINT_003"):
			return 520003486;
		case joaat("CLOTHING_ITEM_M_OFFHAND_003_TINT_004"):
			return 214694713;
		case joaat("CLOTHING_ITEM_M_OFFHAND_004_TINT_001"):
			return -1002555587;
		case joaat("CLOTHING_ITEM_M_OFFHAND_004_TINT_002"):
			return -704816453;
		case joaat("CLOTHING_ITEM_M_OFFHAND_004_TINT_003"):
			return -408748538;
		case joaat("CLOTHING_ITEM_M_OFFHAND_004_TINT_004"):
			return 2080515794;
		case joaat("CLOTHING_ITEM_M_OFFHAND_005_TINT_001"):
			return -1438504284;
		case joaat("CLOTHING_ITEM_M_OFFHAND_005_TINT_002"):
			return -1663266855;
		case joaat("CLOTHING_ITEM_M_OFFHAND_005_TINT_003"):
			return -977280609;
		case joaat("CLOTHING_ITEM_M_OFFHAND_005_TINT_004"):
			return -1208924670;
		case joaat("CLOTHING_ITEM_M_OFFHAND_006_TINT_001"):
			return 760352143;
		case joaat("CLOTHING_ITEM_M_OFFHAND_006_TINT_002"):
			return 1528293658;
		case joaat("CLOTHING_ITEM_M_OFFHAND_006_TINT_003"):
			return 601619107;
		case joaat("CLOTHING_ITEM_M_OFFHAND_006_TINT_004"):
			return 309975007;
		case joaat("CLOTHING_ITEM_M_OFFHAND_007_TINT_001"):
			return -1805872365;
		case joaat("CLOTHING_ITEM_M_OFFHAND_007_TINT_002"):
			return 25128279;
		case joaat("CLOTHING_ITEM_M_OFFHAND_007_TINT_003"):
			return -286209990;
		case joaat("CLOTHING_ITEM_M_OFFHAND_007_TINT_004"):
			return 1269465524;
		case joaat("CLOTHING_ITEM_M_OFFHAND_008_TINT_001"):
			return 66925801;
		case joaat("CLOTHING_ITEM_M_OFFHAND_008_TINT_002"):
			return -1897379743;
		case joaat("CLOTHING_ITEM_M_OFFHAND_008_TINT_003"):
			return 1963005075;
		case joaat("CLOTHING_ITEM_M_OFFHAND_008_TINT_004"):
			return -2037925984;
		case joaat("CLOTHING_ITEM_M_OFFHAND_009_TINT_001"):
			return 1668961632;
		case joaat("CLOTHING_ITEM_M_OFFHAND_009_TINT_002"):
			return 1358934123;
		case joaat("CLOTHING_ITEM_M_OFFHAND_009_TINT_003"):
			return -1141176732;
		case joaat("CLOTHING_ITEM_M_OFFHAND_009_TINT_004"):
			return -1415813725;
		case joaat("CLOTHING_ITEM_M_OFFHAND_010_TINT_001"):
			return 11713414;
		case joaat("CLOTHING_ITEM_M_OFFHAND_010_TINT_002"):
			return 1307072000;
		case joaat("CLOTHING_ITEM_M_OFFHAND_010_TINT_003"):
			return 1575941645;
		case joaat("CLOTHING_ITEM_M_OFFHAND_010_TINT_004"):
			return 701926877;
		case joaat("CLOTHING_ITEM_M_OFFHAND_014_TINT_001"):
			return -766852067;
		case joaat("CLOTHING_ITEM_M_OFFHAND_014_TINT_002"):
			return -1076125889;
		case joaat("CLOTHING_ITEM_M_OFFHAND_014_TINT_003"):
			return -1445170375;
		case joaat("CLOTHING_ITEM_M_OFFHAND_014_TINT_004"):
			return -1685465452;
		case joaat("CLOTHING_ITEM_M_OFFHAND_015_TINT_001"):
			return -1670121942;
		case joaat("CLOTHING_ITEM_M_OFFHAND_015_TINT_002"):
			return 1790317231;
		case joaat("CLOTHING_ITEM_M_OFFHAND_015_TINT_003"):
			return 1889214097;
		case joaat("CLOTHING_ITEM_M_OFFHAND_015_TINT_004"):
			return 2120268316;
		case 918258437:
			return -1816896715;
		case 1169203439:
			return 321247770;
		case -1755397046:
			return 626818695;
		case -2090951606:
			return -121887417;
		case -1893420074:
			return -890648157;
		case -521480347:
			return 802722687;
		case -1515678445:
			return 433303369;
		case 637343178:
			return 1912758109;
		case -1759971328:
			return 2076472033;
		case -1990239091:
			return 86705584;
		case 1595344893:
			return 518666542;
		case -553416748:
			return 682151083;
		case 2086466425:
			return -1982828649;
		case 1829328082:
			return 1530204769;
		case 147295280:
			return 1836693226;
		case 857399510:
			return -1096001202;
		case 811850600:
			return -1834221234;
		case -528729190:
			return -1526815245;
		case -732726675:
			return 1127336149;
		case -963846432:
			return 828941635;
		case -1242022473:
			return 531497422;
		case -2026971099:
			return 834643453;
		case 2066466847:
			return 526451008;
		case 1835609242:
			return -399699239;
		case -881400018:
			return -197243922;
		case -633699143:
			return -514513380;
		case -1069100838:
			return -809532687;
		case -695075472:
			return -854491755;
		case -1665332793:
			return -1318828485;
		case -1292945877:
			return -1465928526;
		case joaat("CLOTHING_ITEM_F_OFFHAND_000_TINT_001"):
			return 1570234737;
		case joaat("CLOTHING_ITEM_F_OFFHAND_000_TINT_002"):
			return -288324636;
		case joaat("CLOTHING_ITEM_F_OFFHAND_000_TINT_003"):
			return 11282331;
		case joaat("CLOTHING_ITEM_F_OFFHAND_000_TINT_004"):
			return 725318841;
		case joaat("CLOTHING_ITEM_F_OFFHAND_001_TINT_001"):
			return -949699437;
		case joaat("CLOTHING_ITEM_F_OFFHAND_001_TINT_002"):
			return 1306347914;
		case joaat("CLOTHING_ITEM_F_OFFHAND_001_TINT_003"):
			return 1536910598;
		case joaat("CLOTHING_ITEM_F_OFFHAND_001_TINT_004"):
			return 1924797251;
		case joaat("CLOTHING_ITEM_F_OFFHAND_002_TINT_001"):
			return 9499074;
		case joaat("CLOTHING_ITEM_F_OFFHAND_002_TINT_002"):
			return 483863122;
		case joaat("CLOTHING_ITEM_F_OFFHAND_002_TINT_003"):
			return 237473007;
		case joaat("CLOTHING_ITEM_F_OFFHAND_002_TINT_004"):
			return 1066004403;
		case joaat("CLOTHING_ITEM_F_OFFHAND_003_TINT_001"):
			return 1559978137;
		case joaat("CLOTHING_ITEM_F_OFFHAND_003_TINT_002"):
			return 1322239046;
		case joaat("CLOTHING_ITEM_F_OFFHAND_003_TINT_003"):
			return 1564631339;
		case joaat("CLOTHING_ITEM_F_OFFHAND_003_TINT_004"):
			return -212824759;
		case joaat("CLOTHING_ITEM_F_OFFHAND_004_TINT_001"):
			return -274429432;
		case joaat("CLOTHING_ITEM_F_OFFHAND_004_TINT_002"):
			return 570453695;
		case joaat("CLOTHING_ITEM_F_OFFHAND_004_TINT_003"):
			return 207242099;
		case joaat("CLOTHING_ITEM_F_OFFHAND_004_TINT_004"):
			return -1112267224;
		case joaat("CLOTHING_ITEM_F_OFFHAND_005_TINT_001"):
			return 1417685661;
		case joaat("CLOTHING_ITEM_F_OFFHAND_005_TINT_002"):
			return -2095478833;
		case joaat("CLOTHING_ITEM_F_OFFHAND_005_TINT_003"):
			return 1899947034;
		case joaat("CLOTHING_ITEM_F_OFFHAND_005_TINT_004"):
			return -1752321861;
		case joaat("CLOTHING_ITEM_F_OFFHAND_006_TINT_001"):
			return 1413210443;
		case joaat("CLOTHING_ITEM_F_OFFHAND_006_TINT_002"):
			return 1182877142;
		case joaat("CLOTHING_ITEM_F_OFFHAND_006_TINT_003"):
			return -208887838;
		case joaat("CLOTHING_ITEM_F_OFFHAND_006_TINT_004"):
			return 21707615;
		case joaat("CLOTHING_ITEM_F_OFFHAND_007_TINT_001"):
			return 857732585;
		case joaat("CLOTHING_ITEM_F_OFFHAND_007_TINT_002"):
			return 1087541582;
		case joaat("CLOTHING_ITEM_F_OFFHAND_007_TINT_003"):
			return 1451015330;
		case joaat("CLOTHING_ITEM_F_OFFHAND_007_TINT_004"):
			return 1688754425;
		case joaat("CLOTHING_ITEM_F_OFFHAND_008_TINT_001"):
			return 1437777233;
		case joaat("CLOTHING_ITEM_F_OFFHAND_008_TINT_002"):
			return 1676958164;
		case joaat("CLOTHING_ITEM_F_OFFHAND_008_TINT_003"):
			return -35123787;
		case joaat("CLOTHING_ITEM_F_OFFHAND_008_TINT_004"):
			return 195668280;
		case joaat("CLOTHING_ITEM_F_OFFHAND_009_TINT_001"):
			return -2087370390;
		case joaat("CLOTHING_ITEM_F_OFFHAND_009_TINT_002"):
			return 888087567;
		case joaat("CLOTHING_ITEM_F_OFFHAND_009_TINT_003"):
			return 707399301;
		case joaat("CLOTHING_ITEM_F_OFFHAND_009_TINT_004"):
			return 1507847664;
		case joaat("CLOTHING_ITEM_F_OFFHAND_010_TINT_001"):
			return -2018900297;
		case joaat("CLOTHING_ITEM_F_OFFHAND_010_TINT_002"):
			return -626938711;
		case joaat("CLOTHING_ITEM_F_OFFHAND_010_TINT_003"):
			return -336900292;
		case joaat("CLOTHING_ITEM_F_OFFHAND_010_TINT_004"):
			return -1124798132;
		case joaat("CLOTHING_ITEM_F_OFFHAND_014_TINT_001"):
			return 1051595054;
		case joaat("CLOTHING_ITEM_F_OFFHAND_014_TINT_002"):
			return 1338028883;
		case joaat("CLOTHING_ITEM_F_OFFHAND_014_TINT_003"):
			return 574052421;
		case joaat("CLOTHING_ITEM_F_OFFHAND_014_TINT_004"):
			return -1516904708;
		case joaat("CLOTHING_ITEM_F_OFFHAND_015_TINT_001"):
			return -337288225;
		case joaat("CLOTHING_ITEM_F_OFFHAND_015_TINT_002"):
			return 432390051;
		case joaat("CLOTHING_ITEM_F_OFFHAND_015_TINT_003"):
			return 1094880924;
		case joaat("CLOTHING_ITEM_F_OFFHAND_015_TINT_004"):
			return 1862953515;
		case 135502004:
			return -806719655;
		case -1094089207:
			return -492661555;
		case 683366891:
			return -1416714590;
		case 457948940:
			return -1170586631;
		case 84775568:
			return 385875335;
		case -2142729980:
			return 632068832;
		case -410630335:
			return 435122445;
		case -161815318:
			return 1413244326;
		case 1125547616:
			return 650709696;
		case -706894864:
			return -1018149936;
		case 512996699:
			return -712677318;
		case 822532673:
			return -272163651;
		case -1151792276:
			return 534957177;
		case -569224994:
			return 1399272333;
		case -1816871896:
			return 765978639;
		case -2105861707:
			return 1993996914;
		case 45914674:
			return 1227104007;
		case 676193620:
			return -595245625;
		case 1564617196:
			return 1395189422;
		case 1142159244:
			return 1618444619;
		case 834556641:
			return 1977920549;
		case -1297099578:
			return -2078652272;
		case -1477066926:
			return -1741786952;
		case -1764025059:
			return -1452207299;
		case -1896863365:
			return -1760699697;
		case -1706409937:
			return -1462337952;
		case -1336579003:
			return 1584884203;
		case 2015984622:
			return 1346489728;
		case 1306077006:
			return -2137870811;
		case 424001060:
			return -1557990587;
		default:
			break;
	}
	return 0;
}

bool func_418(int iParam0)
{
	return (func_531(iParam0) && func_314(iParam0, 1584357097));
}

int func_419(int iParam0)
{
	if (!func_418(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 731907282:
			return 195889874;
		case 1561454517:
			return 465087209;
		case 1254834984:
			return -311177636;
		case 1829957287:
			return 857944907;
		case 919634467:
			return -1729036567;
		case -28339930:
			return -2035393948;
		case 507515628:
			return -284580868;
		case -1975194892:
			return 73453226;
		case 2039957913:
			return 329215271;
		case 1502511939:
			return 1942551232;
		case 1809065934:
			return 518344954;
		case -997271222:
			return 1353200767;
		case -878058438:
			return -668553641;
		case -1617589234:
			return -431273312;
		case -1042952050:
			return -1111852673;
		case -2050900874:
			return -856521084;
		case -1815586685:
			return -412238982;
		case -51500315:
			return -260158053;
		case 1348094862:
			return 863949896;
		case 1646522145:
			return 1693169437;
		case 1156363443:
			return 387193715;
		case 1952092069:
			return -1816797957;
		case -2109461640:
			return -1533903180;
		case -1806184545:
			return 1874334976;
		case -1053842899:
			return -2015093177;
		case -755677768:
			return -1841483015;
		case 767294276:
			return -600422706;
		case 1311814185:
			return -229245945;
		case -840486512:
			return -526428006;
		case -1029170414:
			return 1651235889;
		case -831411723:
			return -882484202;
		case -429434400:
			return 1973137538;
		case -131203731:
			return -1830556910;
		case 1800445393:
			return 596295460;
		case 2047228732:
			return 290265769;
		case -2027203194:
			return 2081091619;
		case -609641686:
			return 516107635;
		case 154924622:
			return 207980728;
		case -142781743:
			return -99130340;
		case -533360838:
			return 1220617347;
		case -464283790:
			return -553725692;
		case -186533746:
			return -1123513064;
		case -1593520704:
			return -769187178;
		case 1260724738:
			return -1889559288;
		case -297375678:
			return 2100623539;
		case 1701653225:
			return -1303234828;
		case 1386939749:
			return 2105724242;
		case 1103717282:
			return 1767482612;
		case 1332088703:
			return 1366042262;
		case 1034120186:
			return 2091613460;
		case 532885562:
			return 1728467402;
		case -452048774:
			return 974561281;
		case -1085571851:
			return 1934791288;
		case -862677113:
			return -1633818354;
		case 1890828381:
			return -1707282708;
		case 1864875333:
			return 1682604808;
		case -320325540:
			return 1029354793;
		case -1278925815:
			return 1640403026;
		case -80071950:
			return -1229833684;
		case -781656240:
			return -2040374903;
		case 525029001:
			return 463034341;
		case 1717296181:
			return 149336704;
		case 1894117705:
			return 1146825064;
		case 1464921218:
			return -979751655;
		case 550403966:
			return -1219424121;
		case 856007660:
			return 1019812717;
		case -1617179117:
			return 862573726;
		case 1784374159:
			return 1100771587;
		case 2081818376:
			return 1455922005;
		case -1615607679:
			return 1686296029;
		case -1894668475:
			return 1957000738;
		case 2095710966:
			return 1656345167;
		case -260985198:
			return -354862110;
		case -1179959034:
			return -146516808;
		case -873142887:
			return -337101316;
		case 245915270:
			return 518337236;
		case 844146134:
			return 966617156;
		case 538640747:
			return 677332424;
		case 560856018:
			return 9691481;
		case -1382149068:
			return -240893062;
		case -188079477:
			return -547676440;
		case 1578729681:
			return 526083803;
		case 1879581870:
			return -1364982418;
		case 948647349:
			return -1058723344;
		default:
			break;
	}
	return 0;
}

bool func_420(int iParam0)
{
	return func_442(iParam0) == 1882579758;
}

int func_421(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CLOTHING_ITEM_M_UST_000_TINT_001"):
			return 174220197;
		case joaat("CLOTHING_ITEM_M_UST_000_TINT_002"):
			return 468518590;
		case joaat("CLOTHING_ITEM_M_UST_000_TINT_003"):
			return -184567584;
		case joaat("CLOTHING_ITEM_M_UST_000_TINT_004"):
			return 140205975;
		case joaat("CLOTHING_ITEM_M_UST_000_TINT_005"):
			return 1664750935;
		case joaat("CLOTHING_ITEM_M_UST_000_TINT_006"):
			return 1960130701;
		case joaat("CLOTHING_ITEM_M_UST_000_TINT_007"):
			return 766061110;
		case joaat("CLOTHING_ITEM_M_UST_000_TINT_008"):
			return 1364291974;
		case joaat("CLOTHING_ITEM_M_UST_000_TINT_009"):
			return 2076526201;
		case joaat("CLOTHING_ITEM_M_UST_000_TINT_010"):
			return 292938556;
		default:
			break;
	}
	return 0;
}

int func_422(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_317(iParam0, iParam2, &Var0, &iVar31, bParam3, bParam4))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == iParam1)
		{
			return Var0[iVar32 /*2*/].f_1;
		}
		else if (Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam3)
	{
	}
	return 0;
}

bool func_423(int iParam0)
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

int func_424()
{
	if (func_345() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_425(bool bParam0)
{
	if (func_345() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_470(bParam0));
}

bool func_426()
{
	if (INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(PLAYER::PLAYER_PED_ID()) != 3)
	{
		return false;
	}
	return INVENTORY::_0xFC7563F482781A3D();
}

bool func_427(int iParam0)
{
	if (!func_286(iParam0, 0))
	{
		return false;
	}
	if (func_314(iParam0, joaat("CI_TAG_ITEM_MEAT_ANIMAL")))
	{
		return true;
	}
	return func_428(iParam0);
}

bool func_428(int iParam0)
{
	if (!func_286(iParam0, 0))
	{
		return false;
	}
	if (func_314(iParam0, -839724752))
	{
		return true;
	}
	return false;
}

int func_429(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;

	iParam0 = func_532(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_286(iParam1, 0))
	{
		return 0;
	}
	if (!func_533(iParam0))
	{
		return 0;
	}
	iVar0 = func_534(iParam0);
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
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
	iVar2 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	Var3.f_1 = 10;
	Var3.f_12 = 10;
	iVar26 = 0;
	iVar27 = 0;
	while (iVar27 < iVar2)
	{
		iVar28 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar27, iVar1));
		if (!func_535(iVar28))
		{
		}
		else
		{
			MISC::_0x48E4D50F87A96AA5(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar28), 1, 1, ENTITY::GET_ENTITY_MODEL(iVar28), &Var3, 0);
			iVar29 = 0;
			while (iVar29 < 10)
			{
				iVar30 = Var3.f_1[iVar29];
				if (iVar30 == iParam1)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(*iParam2))
					{
						*iParam2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar28);
					}
					iVar26++;
				}
				iVar29++;
			}
		}
		iVar27++;
	}
	if (ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		ITEMSET::DESTROY_ITEMSET(iVar1);
	}
	return iVar26;
}

int func_430(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;

	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	if (!func_427(iParam0) && !func_428(iParam0))
	{
		return 0;
	}
	Var3 = -1;
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	Var3.f_3 = -1;
	Var3.f_4 = -1;
	Var3.f_5 = -1;
	Var3.f_6 = -1;
	Var3.f_7 = -1;
	Var3.f_8 = -1;
	iVar13 = func_536(iParam0, 1697966752);
	if (iVar13 == 0)
	{
		return 0;
	}
	Var3 = { func_537(-1591664384, -1591664384, 0, 235313564, 0, 0, -1, iVar13, 0) };
	if (func_538(Var3, &iVar1, &iVar2, 0))
	{
		iVar15 = 0;
		while (iVar15 < iVar2)
		{
			iVar14 = func_539(iVar15, iVar1);
			if (func_286(iVar14, 0) && iParam0 != iVar14)
			{
				iVar16 = func_540(iVar14);
				if (iVar16 != 0)
				{
					iVar17 = func_412(iVar14, iParam1);
					if (iVar17 > 0)
					{
						iVar0 = (iVar0 + (iVar17 * func_542(iVar16, func_541(iVar14), iParam0)));
					}
				}
			}
			iVar15++;
		}
		func_543(iVar1);
	}
	return iVar0;
}

int func_431(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iParam0 = func_532(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_286(iParam1, 0))
	{
		return 0;
	}
	if (!func_533(iParam0))
	{
		return 0;
	}
	iVar0 = func_534(iParam0);
	iVar1 = iParam1;
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
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (PED::_0x0CEEB6F4780B1F2F(iVar0, iVar3) != iVar1)
		{
		}
		else
		{
			iVar2++;
		}
		iVar3++;
	}
	return iVar2;
}

int func_432(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	if (PED::_IS_PED_CARRYING(Global_34))
	{
		iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_34);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_A_PED(iVar1))
		{
			if (iParam0 == ENTITY::_0x31FEF6A20F00B963(iVar1))
			{
				iVar0++;
			}
		}
	}
	return iVar0;
}

bool func_433(int iParam0)
{
	return func_314(iParam0, 1279601681);
}

bool func_434(int* iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!func_445(iParam0, 0))
	{
		return false;
	}
	if (iParam4 == 0)
	{
		iParam4 = func_288(iParam1, 0, 1, iParam5, bParam6);
	}
	if (!func_544(iParam1, iParam4, iParam5))
	{
		return false;
	}
	uParam2->f_16 = iParam1;
	uParam2->f_8 = iParam1;
	uParam2->f_9 = 1;
	uParam2->f_13 = iParam4;
	uParam2->f_12 = 1248274121;
	if (!func_545(iParam0, *uParam2, 541670136, iParam3))
	{
		return false;
	}
	if (COLLECTION::_0x9ADEE485726025D4(iParam1) != 0)
	{
		if (Global_1293346.f_20.f_422 != -1)
		{
		}
		Global_1293346.f_20.f_422.f_1 = iParam1;
		Global_1293346.f_20.f_422 = iParam0->f_1;
	}
	return true;
}

void func_435(struct<17> Param0)
{
	int iVar0;
	int iVar1;

	iVar0 = Param0.f_16;
	iVar1 = Param0.f_13;
	if (func_422(iVar0, joaat("CURRENCY_GOLD_BAR"), iVar1, 0, 1) > 0)
	{
		func_464("gold_spend", "Gold_Spend_Sounds", 1);
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND("PURCHASE", "HUD_SHOP_SOUNDSET", true, 0);
	}
}

struct<4> func_436(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_470(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1293346))
			{
				Global_1293346 = { func_320(joaat("CHARACTER"), func_546(), -1591664384, bParam0) };
			}
			return Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_12)))
			{
				Global_1293346.f_12 = { func_320(joaat("CHARACTER"), func_546(), -1591664384, 0) };
			}
			return Global_1293346.f_12;
		}
	}
	return func_320(joaat("CHARACTER"), func_546(), -1591664384, bParam0);
}

struct<4> func_437(bool bParam0)
{
	int iVar0;

	iVar0 = func_470(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_4)))
		{
			Global_1293346.f_4 = { func_320(923904168, func_436(bParam0), -740156546, bParam0) };
		}
		return Global_1293346.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_16)))
		{
			Global_1293346.f_16 = { func_320(923904168, func_436(bParam0), -740156546, 0) };
		}
		return Global_1293346.f_16;
	}
	return func_320(923904168, func_436(bParam0), -740156546, 0);
}

bool func_438(int iParam0, bool bParam1)
{
	if (func_442(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_547();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_439(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_548(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_440(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_549(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_441(bool bParam0)
{
	int iVar0;

	iVar0 = func_470(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_8)))
		{
			Global_1293346.f_8 = { func_320(271701509, func_436(bParam0), 12999093, 0) };
		}
		return Global_1293346.f_8;
	}
	return func_320(271701509, func_436(bParam0), 12999093, 0);
}

int func_442(int iParam0)
{
	struct<2> Var0;

	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_443(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_442(iParam0);
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
			if (func_550(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_444(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_551(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

bool func_445(int* iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_552(iParam0))
		{
			return false;
		}
	}
	if (func_553(&(iParam0->f_6)))
	{
		if (NETWORK::_0xE10F2D7715ABABEC(&(iParam0->f_6)))
		{
			return false;
		}
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(2113164098))
	{
		return false;
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(joaat("SELL")))
	{
		return false;
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(joaat("UPDATE")))
	{
		return false;
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(joaat("USE")))
	{
		return false;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return false;
	}
	if (NETSHOPPING::_CASHINVENTORY_IS_CONNECTION_FAULTED())
	{
		return false;
	}
	if (NETSHOPPING::_CASHINVENTORY_INIT_SESSION_IS_FAULTED())
	{
		return false;
	}
	return true;
}

void func_446(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

int func_447(int* iParam0, int iParam1, struct<4> Param2, int iParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)
{
	struct<10> Var0;
	struct<4> Var14;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;

	if (func_283(iParam9, 32))
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Param2))
		{
			return 0;
		}
		Var0.f_9 = -1591664384;
		if (!func_444(Param2, &Var0, 1, 0, -1))
		{
			return 0;
		}
		if (!func_550(iParam1, func_442(Var0.f_4), iParam6))
		{
			return 0;
		}
	}
	if (func_283(iParam9, 1))
	{
		if (!func_410(iParam1))
		{
			return 0;
		}
	}
	if (func_283(iParam9, 2))
	{
		if (func_406(iParam1, bParam7, 1))
		{
			return 0;
		}
	}
	if (func_283(iParam9, 4))
	{
		if (!bParam10 && !INVENTORY::_0xB881CA836CC4B6D4(&Param2))
		{
			return 0;
		}
		Var14.f_4 = iParam6;
		Var14 = { Param2 };
		iVar19 = func_548(iParam1, Param2, iParam6, 1, !bParam10, 0);
		iVar20 = func_554(iParam1, &Var14, !bParam10, 1);
		iVar21 = 1;
		if (func_555(iParam1, bParam7, &iVar21, 0))
		{
		}
		iVar22 = (func_556(iParam0, iParam1) * iVar21);
		if (iVar22 > 0)
		{
		}
		if (iVar20 >= 0)
		{
			iVar23 = (iVar20 - (iVar19 + iVar22));
			iVar24 = (bParam8 * iVar21);
			if (iVar24 > iVar20)
			{
				iVar24 = iVar20;
			}
			if (iVar23 <= 0)
			{
				return 0;
			}
			else if ((iVar24 - iVar23) >= iVar21)
			{
				return 0;
			}
		}
	}
	if (func_283(iParam9, 8))
	{
		return func_557(iParam0, iParam1, bParam7, bParam8);
	}
	return 1;
}

struct<16> func_448(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_4 = { Param1 };
	Var0 = { func_320(iParam0, Var0.f_4, iParam5, 1) };
	Var0.f_8 = iParam0;
	Var0.f_9 = bParam6;
	Var0.f_11 = iParam5;
	if (bParam7)
	{
		Var0.f_15 = func_502(iParam0, joaat("DEFAULT"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_546() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

bool func_449(int* iParam0, int iParam1)
{
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(iParam0, joaat("BASKET"), iParam1))
	{
		return false;
	}
	return true;
}

bool func_450(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar5;
	struct<10> Var6;
	struct<4> Var20;
	int iVar34;
	int iVar35;
	int iVar36;
	struct<5> Var37;
	struct<4> Var42;

	if (iParam0 != 0 && iParam1 != 0)
	{
		iVar1 = func_442(iParam1);
		iVar5 = func_558(iParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &iVar2))
			{
				if (func_550(iParam0, iVar1, iVar2))
				{
					*uParam4 = { func_308(iParam1, 0, 0) };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { func_320(iParam1, *uParam4, uParam4->f_4, 0) };
					*iParam2 = iVar2;
					return true;
				}
			}
			iVar0++;
		}
		if (bParam5)
		{
			Var6.f_9 = -1591664384;
			Var20.f_9 = -1591664384;
			iVar34 = func_470(0);
			Var37 = { func_308(iParam1, 0, 0) };
			if (iParam6 != 0)
			{
				Var37.f_4 = iParam6;
			}
			Var42 = { func_320(iParam1, Var37, Var37.f_4, 0) };
			iVar35 = INVENTORY::_0xE843D21A8E2498AA(iVar34, &Var42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (INVENTORY::_0xCD9A485F2B383B44(iVar34, &Var42, iVar36, &Var6))
				{
					iVar1 = func_442(Var6.f_4);
					iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &iVar2))
						{
							if (func_550(iParam0, iVar1, iVar2))
							{
								if (func_559(Var42, Var6.f_9, &Var20, 0, -1))
								{
									uParam4->f_4 = Var6.f_9;
									*uParam4 = { Var6.f_5 };
									*uParam3 = { Var20 };
									*iParam2 = iVar2;
									return true;
								}
							}
						}
						iVar0++;
					}
				}
				iVar36++;
			}
		}
	}
	*iParam2 = 0;
	return false;
}

bool func_451(int iParam0)
{
	int iVar0;

	iVar0 = func_366(iParam0);
	if (iVar0 == joaat("WEAPON_MOD") || iVar0 == joaat("WEAPON_DECORATION"))
	{
		return true;
	}
	return false;
}

bool func_452(int iParam0)
{
	return func_314(iParam0, 1282106666);
}

bool func_453(int* iParam0, int iParam1, struct<4> Param2, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)
{
	struct<16> Var0;

	if (!func_445(iParam0, 0))
	{
		return false;
	}
	if (!func_447(iParam0, iParam1, Param2, iParam6, bParam10, bParam7, iParam11, bParam12))
	{
		return false;
	}
	Var0 = { func_448(iParam1, Param2, iParam6, bParam7, bParam12) };
	Var0.f_13 = bParam10;
	Var0.f_12 = 1248274121;
	*iParam8 = { Var0 };
	if (!func_560(iParam0, &Var0, 2113164098, bParam9, iParam11))
	{
		return false;
	}
	return true;
}

bool func_454(int* iParam0, int iParam1, struct<4> Param2, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, bool bParam13)
{
	struct<16> Var0;

	if (!func_445(iParam0, 0))
	{
		return false;
	}
	if (bParam10 == 0)
	{
		bParam10 = func_176(iParam1, bParam10, 1, iParam12, 1);
	}
	if (!func_561(iParam0, iParam1, Param2, iParam6, bParam10, iParam12))
	{
		return false;
	}
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_8 = iParam1;
	Var0.f_9 = 1;
	Var0.f_13 = bParam10;
	Var0.f_12 = 1248274121;
	Var0.f_4 = { Param2 };
	Var0.f_11 = iParam6;
	Var0.f_10 = bParam7;
	Var0.f_14 = iParam11;
	if (bParam13)
	{
		Var0.f_15 = func_502(iParam1, joaat("DEFAULT"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_546() };
			Var0.f_11 = 0;
		}
	}
	*iParam8 = { Var0 };
	if (!func_463(iParam0, Var0, 2113164098, iParam9, iParam12))
	{
		return false;
	}
	return true;
}

int func_455(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_562(&uParam0, iParam4, bParam5, iParam6);
}

bool func_456(struct<4> Param0, int iParam4, bool bParam5)
{
	struct<11> Var0;

	if (!func_425(0))
	{
		return func_563(&Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_444(Param0, &Var0, bParam5, 0, -1))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_470(bParam5), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

void func_457(int* iParam0)
{
	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(*iParam0);
		func_483(*iParam0, 4, 0, 0);
	}
	iParam0->f_1 = *iParam0;
	*iParam0 = -1;
	iParam0->f_2 = 0;
}

bool func_458(int* iParam0)
{
	int iVar0;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		func_483(*iParam0, 0, 0, 0);
		return true;
	}
	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(*iParam0);
		func_483(*iParam0, 4, 0, 0);
		return true;
	}
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(*iParam0))
	{
		func_483(*iParam0, 2, 0, 0);
		return false;
	}
	func_483(*iParam0, 1, 0, 0);
	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*iParam0);
	if (iVar0 == 2113164098 || iVar0 == 541670136)
	{
		iParam0->f_3 = 1;
	}
	iParam0->f_1 = *iParam0;
	*iParam0 = -1;
	iParam0->f_2 = 0;
	return true;
}

int func_459(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2141145462:
			return 51;
		case -2139497371:
			return 76;
		case -2073547330:
			return 48;
		case -2066076661:
			return 98;
		case -2048056274:
			return 25;
		case -2038873145:
			return 54;
		case -1988984077:
			return 42;
		case -1976230089:
			return 68;
		case -1948083328:
			return 113;
		case -1915486054:
			return 36;
		case -1914604474:
			return 58;
		case -1894256235:
			return 8;
		case -1882615108:
			return 80;
		case -1879729569:
			return 4;
		case -1827447245:
			return 22;
		case -1816811601:
			return 75;
		case -1812870325:
			return 104;
		case -1672929718:
			return 107;
		case -1604265010:
			return 21;
		case -1549775456:
			return 20;
		case -1533288167:
			return 83;
		case -1461871483:
			return 72;
		case -1327698122:
			return 55;
		case -1309844859:
			return 78;
		case -1271310569:
			return 71;
		case -1239377811:
			return 73;
		case -1221836150:
			return 92;
		case -1190908814:
			return 44;
		case -1169075737:
			return 47;
		case -1157194180:
			return 34;
		case -1151085798:
			return 35;
		case -1019271530:
			return 14;
		case -944178516:
			return 30;
		case -937655290:
			return 57;
		case -936508922:
			return 106;
		case -907971236:
			return 69;
		case -875426853:
			return 2;
		case -863017340:
			return 96;
		case -835345303:
			return 61;
		case -832908671:
			return 52;
		case -759061492:
			return 23;
		case -692335380:
			return 87;
		case -596510485:
			return 100;
		case -585098035:
			return 50;
		case -520556863:
			return 89;
		case -378561682:
			return 64;
		case -377574959:
			return 37;
		case -367868014:
			return 19;
		case -353010695:
			return 86;
		case -350556716:
			return 85;
		case -102827824:
			return 38;
		case -102545856:
			return 79;
		case -82191741:
			return 91;
		case 0:
			return 116;
		case 7562841:
			return 109;
		case 41932468:
			return 39;
		case 72801698:
			return 82;
		case 104820669:
			return 81;
		case 175025255:
			return 97;
		case 205166155:
			return 59;
		case 214785091:
			return 46;
		case 229544920:
			return 93;
		case 253727941:
			return 70;
		case 266787856:
			return 95;
		case 358997942:
			return 67;
		case 530671939:
			return 18;
		case 558731558:
			return 62;
		case 693005399:
			return 11;
		case 709801630:
			return 102;
		case 713508039:
			return 90;
		case 744226541:
			return 17;
		case 745945503:
			return 99;
		case 757105507:
			return 3;
		case 787316203:
			return 5;
		case 790678034:
			return 12;
		case 805845691:
			return 45;
		case 911414965:
			return 28;
		case 978801228:
			return 77;
		case 992695664:
			return 56;
		case 1062881804:
			return 29;
		case 1105471824:
			return 24;
		case 1128086492:
			return 112;
		case 1131758526:
			return 66;
		case 1139025222:
			return 111;
		case 1183803081:
			return 15;
		case 1190538002:
			return 103;
		case 1250977037:
			return 110;
		case 1261138928:
			return 7;
		case 1261539922:
			return 43;
		case 1285391378:
			return 10;
		case 1306457250:
			return 65;
		case 1314299724:
			return 115;
		case 1338756401:
			return 16;
		case 1400887301:
			return 31;
		case 1423490462:
			return 94;
		case 1437199060:
			return 40;
		case 1440632655:
			return 33;
		case 1472024063:
			return 49;
		case 1504223919:
			return 88;
		case 1562378696:
			return 108;
		case 1639899405:
			return 74;
		case 1706052688:
			return 9;
		case 1741725206:
			return 26;
		case 1747661667:
			return 1;
		case 1753192824:
			return 105;
		case 1780028424:
			return 60;
		case 1865339861:
			return 32;
		case 1901448492:
			return 27;
		case 1921351553:
			return 63;
		case 1961205920:
			return 53;
		case 1985273028:
			return 41;
		case joaat("SLOT_UNARMED"):
			return 114;
		case 1995043222:
			return 101;
		case 2031132011:
			return 13;
		case 2041846130:
			return 84;
		case 2069893421:
			return 0;
		case 2129028479:
			return 6;
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

struct<2> func_460(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_461(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

bool func_462(int* iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, int iParam18, bool bParam19, int iParam20)
{
	if ((iParam18 != 2113164098 && iParam18 != joaat("SELL")) && iParam18 != joaat("UPDATE"))
	{
		return false;
	}
	if (!func_564(iParam18, &uParam1, iParam20))
	{
		return false;
	}
	if (!func_565(iParam0, iParam18))
	{
		return false;
	}
	if (func_566(*iParam0, iParam18, &uParam1))
	{
	}
	else
	{
		return false;
	}
	return func_567(iParam0, bParam19);
}

bool func_463(int* iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, int iParam17, bool bParam18, int iParam19)
{
	if ((((iParam17 != 2113164098 && iParam17 != joaat("SELL")) && iParam17 != joaat("UPDATE")) && iParam17 != joaat("USE")) && iParam17 != joaat("SPEND"))
	{
		return false;
	}
	if (!func_564(iParam17, &uParam1, iParam19))
	{
		return false;
	}
	if (!func_565(iParam0, iParam17))
	{
		return false;
	}
	if (func_568(*iParam0, iParam17, &uParam1))
	{
	}
	else
	{
		return false;
	}
	return func_567(iParam0, bParam18);
}

void func_464(char* sParam0, char* sParam1, int iParam2)
{
	int iVar0;

	iVar0 = AUDIO::GET_SOUND_ID();
	if (iVar0 != -1)
	{
		AUDIO::_0xCE5D0FFE83939AF1(iVar0, sParam0, sParam1, iParam2);
		Global_1957967[Global_1957967.f_25] = iVar0;
		Global_1957967.f_25 = (Global_1957967.f_25 + 1 % 24);
	}
}

int func_465(int iParam0, int iParam1)
{
	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	if (!INVENTORY::_0x2BAE4880DCDD560B(iParam0, iParam1))
	{
		return 0;
	}
	return INVENTORY::_0x2E1CDC1FF3B8473E(iParam0, iParam1);
}

int func_466(int iParam0, int iParam1)
{
	if (!func_467(iParam0, 2))
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

bool func_467(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

void func_468(int iParam0, bool bParam1, var uParam2, int iParam3)
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
		uVar6 = Var7.f_1[iVar1];
		iVar4 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIED_PRICES(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != bParam1)
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
							if ((*uParam2)[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (fVar21[iVar0] + (Var19.f_1 - 1f));
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
		if (fVar21[iVar0] != 1f && (uParam2[iVar0 /*2*/])->f_1 > 0)
		{
			if (*uParam2)[iVar0 /*2*/] == joaat("CURRENCY_GOLD_BAR")
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 100f))) / 1000000) * 100;
			}
			else
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 100f))) / 10000);
			}
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_442((*uParam2)[iVar0 /*2*/]) != -829303394)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

void func_469(int iParam0, bool bParam1, var uParam2, int iParam3)
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
		uVar6 = Var7.f_1[iVar1];
		iVar4 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIED_PRICES(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != bParam1)
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
							if ((*uParam2)[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (fVar21[iVar0] + (Var19.f_1 - 1f));
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
		if (fVar21[iVar0] != 1f && (uParam2[iVar0 /*2*/])->f_1 > 0)
		{
			if (*uParam2)[iVar0 /*2*/] == joaat("CURRENCY_GOLD_BAR")
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 100f))) / 1000000) * 100;
			}
			else
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 100f))) / 10000);
			}
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_442((*uParam2)[iVar0 /*2*/]) != -829303394)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

int func_470(bool bParam0)
{
	if (func_345() == -1)
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

bool func_471(var uParam0)
{
	if (!func_321(uParam0))
	{
		return false;
	}
	return INVENTORY::_0x0137C77A2EC64536(uParam0);
}

int func_472(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (!func_321(&uParam0))
	{
		return 0;
	}
	return INVENTORY::_0x4A606C17276E1BCC(&uParam0);
}

bool func_473(int iParam0)
{
	if (iParam0 <= 0)
	{
		return false;
	}
	return (NETWORK::GET_CLOUD_TIME_AS_INT() + func_569()) > iParam0;
}

bool func_474(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 22)
	{
		return false;
	}
	return true;
}

int func_475(int iParam0)
{
	if (!func_474(iParam0))
	{
		return 0;
	}
	return Global_1293346.f_3009[iParam0];
}

int func_476(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!func_474(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		iVar0 = func_570(iParam0);
		if (func_286(iVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = func_571(255);
			}
			else
			{
				iVar1 = func_548(iVar0, func_436(1), joaat("SLOTID_PROGRESSION"), 1, 0, 0);
			}
			Global_1293346.f_3009[iParam0] = iVar1;
			return iVar1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		iVar0 = func_572(iParam0);
		if (func_286(iVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = NETWORK::_NETWORK_GET_XP();
			}
			else
			{
				iVar1 = func_548(iVar0, func_436(1), joaat("SLOTID_PROGRESSION"), 1, 0, 0);
			}
			Global_1293346.f_2985[iParam0] = iVar1;
			return iVar1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_477(int iParam0)
{
	if (STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		return 1;
	}
	if (func_504())
	{
		return 0;
	}
	STREAMING::_REQUEST_IMAP(iParam0);
	return 0;
}

void func_478()
{
	if (!UIAPPS::_IS_ANY_APP_RUNNING())
	{
		return;
	}
	UIAPPS::_CLOSE_ALL_APPS();
}

bool func_479(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = func_574(bParam2, func_573(), 1, 0, 1, 1, 1, bParam0, bParam1);
	if (!bVar0)
	{
		return false;
	}
	return true;
}

void func_480(int iParam0)
{
	Global_1896738.f_390 = iParam0;
}

int func_481(int iParam0)
{
	switch (iParam0)
	{
		case joaat("KIT_POUCH_REMEDIES"):
			return MISC::GET_HASH_KEY("KIT_POUCH_REMEDIES_MP");
		case joaat("KIT_POUCH_INGREDIENTS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_INGREDIENTS_MP");
		case joaat("KIT_POUCH_MATERIALS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_MATERIALS_MP");
		case joaat("KIT_POUCH_VALUABLES"):
			return MISC::GET_HASH_KEY("KIT_POUCH_VALUABLES_MP");
		case joaat("KIT_POUCH_KIT"):
			return MISC::GET_HASH_KEY("KIT_POUCH_KIT_MP");
		case joaat("KIT_POUCH_PROVISIONS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_PROVISIONS_MP");
	}
	return 0;
}

int func_482(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346.f_20)
	{
		if (Global_1293346.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			return Global_1293346.f_20.f_1[iVar0 /*21*/].f_1;
		}
		iVar0++;
	}
	return 0;
}

void func_483(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346.f_20)
	{
		if (Global_1293346.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			if (Global_1293346.f_20.f_1[iVar0 /*21*/].f_1 == iParam1)
			{
			}
			else
			{
				Global_1293346.f_20.f_1[iVar0 /*21*/].f_1 = iParam1;
			}
			if (iParam2 != 0 && iParam3 != 0)
			{
				Global_1293346.f_20.f_1[iVar0 /*21*/].f_2 = iParam2;
				Global_1293346.f_20.f_1[iVar0 /*21*/].f_3 = iParam3;
			}
			return;
		}
		iVar0++;
	}
	func_575(iParam0, iParam1, iParam2, iParam3);
}

bool func_484(int iParam0)
{
	return func_442(iParam0) == -126813555;
}

bool func_485(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 180);
}

void func_486(var uParam0, int iParam1)
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}
	func_576(uParam0, 1);
	func_577(uParam0, 2);
	uParam0->f_2 = 0;
}

int func_487()
{
	if (Global_1293346.f_458.f_1548 >= 40 || Global_1293346.f_458.f_1548 < 0)
	{
		Global_1293346.f_458.f_1548 = 0;
	}
	return Global_1293346.f_458.f_1548;
}

void func_488(int iParam0)
{
	if (iParam0 >= 40 || iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_1293346.f_458.f_1548 = iParam0;
}

int func_489()
{
	if (Global_1293346.f_458.f_1549 >= 10 || Global_1293346.f_458.f_1549 < 0)
	{
		Global_1293346.f_458.f_1549 = 0;
	}
	return Global_1293346.f_458.f_1549;
}

void func_490(int iParam0)
{
	if (iParam0 >= 10 || iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_1293346.f_458.f_1549 = iParam0;
}

bool func_491()
{
	return !Global_1572887.f_9;
}

void func_492(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_493(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_366(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_314(iParam0, 1399091007))
	{
		func_578(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_494(char* sParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	*uParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_470(bParam4), sParam0, iParam3, uParam2);
	if (*uParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_495(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_496(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

int func_497(int iParam0)
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

int func_498(int iParam0)
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

int func_499(var uParam0, int iParam1)
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

int func_500(int iParam0)
{
	int iVar0;

	iVar0 = func_442(iParam0);
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

int func_501(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_579(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_580(&Var0, func_437(0));
	}
	if (!func_581(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_497(iVar14);
	return uVar15;
}

int func_502(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

struct<4> func_503(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_308(iParam0, bParam1, 0) };
	return func_320(iParam0, Var0, Var0.f_4, bParam1);
}

bool func_504()
{
	return func_519() == 4;
}

int func_505(int iParam0)
{
	if (func_582(iParam0))
	{
		return (func_583(iParam0) % 32);
	}
	return Global_1296859;
}

bool func_506(int iParam0)
{
	int iVar0;

	iVar0 = func_378(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 199)
	{
		return false;
	}
	return true;
}

int func_507(int iParam0, int iParam1, int iParam2)
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

	iVar0 = func_372(iParam1, 1);
	iVar1 = func_378(iParam0, 1);
	iVar2 = func_374(Global_1146212.f_35859.f_919[iVar0 /*12*/], 1);
	if (Global_1146212.f_35859[iVar2 /*6*/][iParam2] != iParam0)
	{
		return 0;
	}
	if (!Global_1146212.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/])
	{
		return 1;
	}
	Global_1146212.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/] = 0;
	iVar4 = 0;
	while (iVar4 < Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_16)
	{
		iVar3 = Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/];
		iVar5 = func_584(iVar3, 1);
		if (!func_585(iVar3))
		{
		}
		else
		{
			Global_1146212.f_2169[iVar5 /*205*/].f_1[iVar1] = (Global_1146212.f_2169[iVar5 /*205*/].f_1[iVar1] - 1);
			Global_1146212.f_2169[iVar5 /*205*/].f_201 = (Global_1146212.f_2169[iVar5 /*205*/].f_201 - func_586(&(Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/])));
			func_587(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_28)
	{
		iVar6 = Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/];
		if (!func_588(iVar6))
		{
		}
		else
		{
			iVar8 = func_589(iVar6, 1);
			Global_1146212.f_21645[iVar8 /*209*/][iVar1] = (Global_1146212.f_21645[iVar8 /*209*/][iVar1] - 1);
			if (Global_1146212.f_21645[iVar8 /*209*/][iVar1] <= 0)
			{
				MISC::_0xB909149F2BB5F6DA(&(Global_1146212.f_21645[iVar8 /*209*/].f_200), iVar1);
			}
			if (!MISC::_0x80E9C316EF84DD81(&(Global_1146212.f_21645[iVar8 /*209*/].f_200)))
			{
				Global_1146212.f_21645[iVar8 /*209*/].f_208 = 0;
				func_590(iVar6);
			}
		}
		iVar7++;
	}
	return 1;
}

bool func_508(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	return Param0.f_4 != 0;
}

bool func_509(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_506(iParam0))
	{
		return false;
	}
	if (!func_591(iParam1))
	{
		return false;
	}
	iVar0 = func_592(iParam1, 1);
	return Global_1146212.f_35859.f_9286[iVar0 /*3*/] == iParam0;
}

Vector3 func_510(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_593(iParam0);
	if (iVar0 == -1)
	{
		vVar1 = -1;
		vVar1.f_2 = -1;
		return vVar1;
	}
	return Global_1146212.f_35859.f_9503[iVar0 /*3*/];
}

bool func_511(vector3 vParam0)
{
	if (!func_506(vParam0.x))
	{
		return false;
	}
	if (!func_371(vParam0.y))
	{
		return false;
	}
	if (!func_594(vParam0.z))
	{
		return false;
	}
	return true;
}

bool func_512(int iParam0, int iParam1, int iParam2)
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

	iVar0 = func_372(iParam1, 1);
	iVar1 = func_378(iParam0, 1);
	iVar2 = func_374(Global_1146212.f_35859.f_919[iVar0 /*12*/], 1);
	if (Global_1146212.f_35859[iVar2 /*6*/][iParam2] != iParam0)
	{
		return false;
	}
	Global_1146212.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/].f_1 = Global_1296859.f_21;
	if (Global_1146212.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/])
	{
		return true;
	}
	Global_1146212.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/] = 1;
	iVar4 = 0;
	while (iVar4 < Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_16)
	{
		iVar3 = Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/];
		iVar5 = func_584(iVar3, 1);
		if (!func_585(iVar3))
		{
		}
		else
		{
			Global_1146212.f_2169[iVar5 /*205*/].f_1[iVar1]++;
			Global_1146212.f_2169[iVar5 /*205*/].f_201 = (Global_1146212.f_2169[iVar5 /*205*/].f_201 + func_586(&(Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/])));
			func_595(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_28)
	{
		iVar6 = Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/];
		if (!func_588(iVar6))
		{
		}
		else if (!func_596(&(Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/])))
		{
		}
		else
		{
			iVar8 = func_589(iVar6, 1);
			Global_1146212.f_21645[iVar8 /*209*/][iVar1]++;
			MISC::_0xE84AAC1B22A73E99(&(Global_1146212.f_21645[iVar8 /*209*/].f_200), iVar1);
			if (!Global_1146212.f_21645[iVar8 /*209*/].f_208)
			{
				Global_1146212.f_21645[iVar8 /*209*/].f_208 = 1;
				func_597(iVar6);
			}
		}
		iVar7++;
	}
	func_598(Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_2);
	return true;
}

void func_513(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_591(iParam0))
	{
		return;
	}
	iVar0 = func_592(iParam0, 1);
	if (!func_506(iParam1))
	{
		return;
	}
	if (!func_371(iParam2))
	{
		return;
	}
	if (!func_594(iParam3))
	{
		return;
	}
	Global_1146212.f_35859.f_9286[iVar0 /*3*/] = iParam1;
	Global_1146212.f_35859.f_9286[iVar0 /*3*/].f_1 = iParam2;
	Global_1146212.f_35859.f_9286[iVar0 /*3*/].f_2 = iParam3;
}

void func_514(int iParam0)
{
	int iVar0;

	if (!func_591(iParam0))
	{
		return;
	}
	iVar0 = func_592(iParam0, 1);
	Global_1146212.f_35859.f_9286[iVar0 /*3*/] = -1;
	Global_1146212.f_35859.f_9286[iVar0 /*3*/].f_1 = 0;
	Global_1146212.f_35859.f_9286[iVar0 /*3*/].f_2 = -1;
}

void func_515(int iParam0)
{
	Global_1102219.f_26.f_12 = iParam0;
}

bool func_516(int iParam0)
{
	return (Global_1102219.f_26.f_7 && iParam0) != 0;
}

bool func_517(int iParam0)
{
	return (Global_1102219.f_26.f_9 && iParam0) != 0;
}

bool func_518(int iParam0)
{
	return (Global_1102219.f_4[Global_1106305[iParam0 /*2*/]] && Global_1106305[iParam0 /*2*/].f_1) == Global_1106305[iParam0 /*2*/].f_1;
}

int func_519()
{
	if (Global_1102219 <= 5)
	{
		return Global_1102219;
	}
	if (Global_1102219 <= 22)
	{
		return 4;
	}
	if (Global_1102219 <= 25)
	{
		return 3;
	}
	return 26;
}

void func_520(int iParam0)
{
	if (func_599(iParam0))
	{
		return;
	}
	Global_1102219.f_26.f_9 = (Global_1102219.f_26.f_9 || iParam0);
}

bool func_521(int iParam0)
{
	if (!func_600(iParam0))
	{
		return false;
	}
	return Global_1940018.f_5[iParam0 /*11*/];
}

bool func_522(struct<2> Param0)
{
	return func_601(Param0, 5, 8);
}

int func_523(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_527(iVar0, 1, 0);
		if (!func_317(iParam0, iVar33, &Var2, &iVar1, 0, 1))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_528(Var2[iVar34 /*2*/]))
				{
					if (!bParam1 || func_369(Var2[iVar34 /*2*/], 0, 1, 1) > 0)
					{
						return iVar33;
					}
					Jump @134; //curOff = 106
				}
				else if (Var2[iVar34 /*2*/] == 0)
				{
				}
				else
				{
					iVar34++;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_524(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	struct<2> Var9[15];
	int iVar40;
	int iVar41;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar40 = func_527(iVar0, 0, 1);
		if (!func_317(iParam0, iVar40, &Var9, &iVar1, 0, 1))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_484(Var9[iVar41 /*2*/]))
				{
					if (!bParam1 || func_369(Var9[iVar41 /*2*/], 0, 1, 1) > 0)
					{
						bVar8 = true;
					}
				}
				else if (Var9[iVar41 /*2*/] == joaat("CURRENCY_CASH") || Var9[iVar41 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
				{
					if ((bParam2 && Var9[iVar41 /*2*/] == joaat("CURRENCY_CASH")) || (!bParam2 && Var9[iVar41 /*2*/] == joaat("CURRENCY_GOLD_BAR")))
					{
						if (iVar4 == 0 || (bVar6 && Var9[iVar41 /*2*/].f_1 < iVar2))
						{
							iVar5 = iVar40;
							iVar3 = Var9[iVar41 /*2*/].f_1;
							iVar7 = 1;
						}
					}
					else if (iVar4 == 0 || Var9[iVar41 /*2*/].f_1 < iVar2)
					{
						iVar5 = iVar40;
						iVar3 = Var9[iVar41 /*2*/].f_1;
						iVar7 = 0;
					}
				}
				else if (Var9[iVar41 /*2*/] == 0)
				{
				}
				else
				{
					iVar41++;
				}
			}
			if (bVar8 && iVar5 != 0)
			{
				iVar4 = iVar5;
				iVar2 = iVar3;
				bVar6 = iVar7;
			}
		}
		iVar0++;
	}
	return iVar4;
}

int func_525(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if (!func_467(iParam0, 2))
	{
		return 0;
	}
	if ((bParam2 && func_345() == 0) && !UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
	{
		return 1;
	}
	if (!func_602(iParam0, bParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return 0;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = uVar0[iVar12];
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

bool func_526(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_286(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, bParam1, &Var0))
	{
		return false;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = Var0.f_36[iVar47];
		iVar47++;
	}
	return true;
}

int func_527(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 205718222;
			case 1:
				return 866168015;
			case 2:
				return -1103707655;
			default:
				break;
		}
		iVar0 = 3;
	}
	if (bParam2)
	{
		switch ((iParam0 - iVar0))
		{
			case 0:
				return 75922725;
			case 1:
				return 1070046552;
			case 2:
				return -1843707398;
			case 3:
				return -1571233163;
			case 4:
				return -1197011183;
			default:
				break;
		}
	}
	return 0;
}

bool func_528(int iParam0)
{
	return func_442(iParam0) == 1946043663;
}

bool func_529(int iParam0)
{
	return func_366(iParam0) == joaat("WEAPON");
}

int func_530(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1084182731;
		case 1:
			return -1360128126;
		default:
			break;
	}
	return 1084182731;
}

bool func_531(int iParam0)
{
	return func_442(iParam0) == 1868067663;
}

int func_532(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_39.f_281;
	}
	return iParam0;
}

bool func_533(int iParam0)
{
	iParam0 = func_532(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1903136[iParam0 /*43*/]))
	{
		return true;
	}
	return false;
}

int func_534(int iParam0)
{
	iParam0 = func_532(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1903136[iParam0 /*43*/];
}

bool func_535(int iParam0)
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
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (!ENTITY::_0x9A100F1CF4546629(iVar0))
	{
		return false;
	}
	if (FLOCK::_0xF8B48A361DC388AE(iVar0) == 2)
	{
		return false;
	}
	if (ENTITY::_0x8DE41E9902E85756(iParam0))
	{
		return false;
	}
	if (FIRE::_0xCDC25355C0D65963(iParam0))
	{
		return false;
	}
	return true;
}

int func_536(int iParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;

	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(iParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if (Var0[iVar42 /*2*/].f_1 == iParam1)
			{
				return Var0[iVar42 /*2*/];
			}
			iVar42++;
		}
	}
	return 0;
}

struct<10> func_537(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<10> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	if (iParam0 != 0 && iParam0 != -1591664384)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0)
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
	if (iParam6 != -1)
	{
		Var0.f_6 = iParam6;
	}
	if (iParam7 != 0)
	{
		Var0.f_8 = iParam7;
	}
	if (iParam8 != 0)
	{
		Var0.f_7 = iParam8;
	}
	return Var0;
}

bool func_538(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_539(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 0)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= ITEMDATABASE::_0xD389A2549C4EFB30(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	if (!ITEMDATABASE::_0x8750F69A720C2E41(iParam1, iParam0, &iVar0))
	{
		return 0;
	}
	return iVar0;
}

int func_540(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("PROVISION_FISH_BLUEGILL_POOR"):
		case joaat("PROVISION_FISH_BLUEGILL"):
			iVar0 = joaat("A_C_FISHBLUEGIL_01_SM");
			break;
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH"):
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_POOR"):
			iVar0 = joaat("A_C_FISHBULLHEADCAT_01_SM");
			break;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_POOR"):
		case joaat("PROVISION_FISH_CHAIN_PICKEREL"):
			iVar0 = joaat("A_C_FISHCHAINPICKEREL_01_SM");
			break;
		case joaat("PROVISION_FISH_CHANNEL_CATFISH_POOR"):
		case joaat("PROVISION_FISH_CHANNEL_CATFISH"):
			iVar0 = joaat("A_C_FISHCHANNELCATFISH_01_LG");
			break;
		case joaat("PROVISION_FISH_LAKE_STURGEON"):
		case joaat("PROVISION_FISH_LAKE_STURGEON_POOR"):
			iVar0 = joaat("A_C_FISHLAKESTURGEON_01_LG");
			break;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS"):
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_POOR"):
			iVar0 = joaat("A_C_FISHLARGEMOUTHBASS_01_MS");
			break;
		case joaat("PROVISION_FISH_LONGNOSE_GAR_POOR"):
		case joaat("PROVISION_FISH_LONGNOSE_GAR"):
			iVar0 = joaat("A_C_FISHLONGNOSEGAR_01_LG");
			break;
		case joaat("PROVISION_FISH_MUSKIE"):
		case joaat("PROVISION_FISH_MUSKIE_POOR"):
			iVar0 = joaat("A_C_FISHMUSKIE_01_LG");
			break;
		case joaat("PROVISION_FISH_NORTHERN_PIKE"):
		case joaat("PROVISION_FISH_NORTHERN_PIKE_POOR"):
			iVar0 = joaat("A_C_FISHNORTHERNPIKE_01_LG");
			break;
		case joaat("PROVISION_FISH_PERCH_POOR"):
		case joaat("PROVISION_FISH_PERCH"):
			iVar0 = joaat("A_C_FISHPERCH_01_SM");
			break;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_POOR"):
		case joaat("PROVISION_FISH_REDFIN_PICKEREL"):
			iVar0 = joaat("A_C_FISHREDFINPICKEREL_01_SM");
			break;
		case joaat("PROVISION_FISH_ROCK_BASS_POOR"):
		case joaat("PROVISION_FISH_ROCK_BASS"):
			iVar0 = joaat("A_C_FISHROCKBASS_01_SM");
			break;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_POOR"):
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS"):
			iVar0 = joaat("A_C_FISHSMALLMOUTHBASS_01_MS");
			break;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_POOR"):
		case joaat("PROVISION_FISH_SOCKEYE_SALMON"):
			iVar0 = joaat("A_C_FISHSALMONSOCKEYE_01_MS");
			break;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_POOR"):
		case joaat("PROVISION_FISH_STEELHEAD_TROUT"):
			iVar0 = joaat("A_C_FISHRAINBOWTROUT_01_MS");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			iVar0 = joaat("A_C_BAT_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_HIGH_QUALITY"):
			iVar0 = joaat("A_C_BLUEJAY_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_POOR"):
			iVar0 = joaat("A_C_FROGBULL_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_POOR"):
			iVar0 = joaat("A_C_CARDINAL_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			iVar0 = joaat("A_C_CEDARWAXWING_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_HIGH_QUALITY"):
			iVar0 = joaat("A_C_CHIPMUNK_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_POOR"):
			iVar0 = joaat("A_C_CRAB_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			iVar0 = joaat("A_C_CROW_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_HIGH_QUALITY"):
			iVar0 = joaat("A_C_ORIOLE_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_HIGH_QUALITY"):
			iVar0 = joaat("A_C_CAROLINAPARAKEET_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_PERFECT"):
			iVar0 = joaat("A_C_PIGEON");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_POOR"):
			iVar0 = joaat("A_C_QUAIL_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			iVar0 = joaat("A_C_RAT_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_HIGH_QUALITY"):
			iVar0 = joaat("A_C_ROBIN_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_POOR"):
			iVar0 = joaat("A_C_SONGBIRD_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			iVar0 = joaat("A_C_SPARROW_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_HIGH_QUALITY"):
			iVar0 = joaat("A_C_SQUIRREL_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			iVar0 = joaat("A_C_TOAD_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_POOR"):
			iVar0 = joaat("A_C_WOODPECKER_01");
			break;
	}
	return iVar0;
}

int func_541(int iParam0)
{
	if (func_314(iParam0, 1064293907))
	{
		return 2;
	}
	else if (func_314(iParam0, -1218707194))
	{
		return 1;
	}
	else if (func_314(iParam0, 1888974372))
	{
		return 0;
	}
	return 1;
}

int func_542(int iParam0, int iParam1, int iParam2)
{
	var uVar0[15];
	int iVar16;
	int iVar17;

	PED::_0xB29C553BA582D09E(&uVar0, iParam0, iParam1, 1);
	iVar16 = 0;
	iVar17 = 0;
	while (iVar17 < 15)
	{
		if (func_286(uVar0[iVar17], 0) && iParam2 == uVar0[iVar17])
		{
			iVar16++;
		}
		iVar17++;
	}
	return iVar16;
}

int func_543(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!ITEMDATABASE::_0xCBB7B6EDFA933ADE(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_544(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_299(iParam0, iParam1, 0))
	{
		return 0;
	}
	if (func_283(iParam2, 2))
	{
		if (func_300(iParam0, iParam1))
		{
			return 0;
		}
	}
	if (NETWORK::_0xFBE782B3165AC8EC(iParam0))
	{
		return 0;
	}
	if (func_283(iParam2, 8))
	{
		return func_603(iParam0, iParam1);
	}
	return 1;
}

bool func_545(int* iParam0, struct<17> Param1, int iParam18, bool bParam19)
{
	if (iParam18 != 541670136)
	{
		return false;
	}
	if (!func_604(Param1))
	{
		return false;
	}
	if (!func_565(iParam0, iParam18))
	{
		return false;
	}
	if (func_605(*iParam0, iParam18, &Param1))
	{
	}
	else
	{
		return false;
	}
	return func_567(iParam0, bParam19);
}

struct<4> func_546()
{
	struct<4> Var0;

	return Var0;
}

bool func_547()
{
	return (func_606(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_455(func_320(joaat("WARDROBE"), func_436(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_548(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_502(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_320(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_470(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_470(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_549(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_470(0);
	*uParam1 = { func_320(iParam0, func_437(0), iParam3, 0) };
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

bool func_550(int iParam0, int iParam1, int iParam2)
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

bool func_551(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_470(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

bool func_552(int* iParam0)
{
	int iVar0;

	if (iParam0->f_1 == -1)
	{
		return false;
	}
	iVar0 = func_195(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

bool func_553(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_554(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_286(iParam0, 0) && !func_467(func_315(iParam0), 2))
	{
		return 0;
	}
	if (func_366(iParam0) == joaat("FEE"))
	{
		return -1;
	}
	if (!bParam2 && func_502(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_470(bParam3), iParam0);
}

bool func_555(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_286(iParam0, 0) && !func_467(func_315(iParam0), 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, bParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return false;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return true;
}

int func_556(int* iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<12> Var3;

	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		iVar2 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0);
		Var3.f_9 = 1;
		Var3.f_11 = -1591664384;
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ITEM_INFO(*iParam0, iVar1, &Var3))
			{
			}
			else if (Var3.f_8 != iParam1)
			{
			}
			else
			{
				iVar0 = (iVar0 + Var3.f_9);
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_557(int* iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar6;

	if (func_296(iParam1, 1) && !func_297(iParam1, 1))
	{
		if (Global_1915715.f_20644)
		{
			func_607(MISC::_CREATE_VAR_STRING(2, "SHOP_H_TOO_POOR_TOKEN"));
		}
		return 0;
	}
	if (bParam2 == -570078785)
	{
		iVar0 = func_334(iParam1, -570078785, 1, 0, 1, 0);
		if (iVar0 == 0)
		{
		}
		iVar1 = (iVar0 * bParam3);
		if (!func_303((iVar1 + func_608(iParam0, bParam2))))
		{
			if (Global_1915715.f_20644)
			{
				func_607(MISC::_CREATE_VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", (iVar1 / 100)));
			}
			return 0;
		}
	}
	else if (bParam2 == -915411861)
	{
		iVar2 = func_334(iParam1, -915411861, 1, 0, 1, 0);
		if (iVar2 == 0)
		{
		}
		iVar3 = (iVar2 * bParam3);
		if (!func_304((iVar3 + func_608(iParam0, bParam2))))
		{
			if (Global_1915715.f_20644)
			{
				func_607("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (bParam2 == 997808187)
	{
		return 1;
	}
	if (func_467(func_315(iParam1), 2))
	{
		if (!func_609(func_315(iParam1), bParam3, bParam2, &uVar4, 1))
		{
			return 0;
		}
	}
	else if (func_286(iParam1, 0))
	{
		if (!func_305(iParam1, bParam3, bParam2, &uVar4, &uVar6, 0, 1, 0))
		{
			return 0;
		}
	}
	return 1;
}

int func_558(int iParam0)
{
	int iVar0;

	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_442(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

bool func_559(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6, int iParam7)
{
	return func_610(&uParam0, iParam4, uParam5, bParam6, iParam7);
}

bool func_560(int* iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;
	int iVar31;

	uVar0 = 15;
	if (!func_319(uParam1->f_8, uParam1->f_13, &uVar0, &iVar31, 1, 0))
	{
		return false;
	}
	switch (iVar31)
	{
		case 1:
			return func_611(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 2:
			return func_612(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 3:
			return func_613(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 4:
			return func_614(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 5:
			return func_615(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 6:
			return func_616(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 7:
			return func_617(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 8:
			return func_618(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 9:
			return func_619(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 10:
			return func_620(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 11:
			return func_621(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 12:
			return func_622(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 13:
			return func_623(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 14:
			return func_624(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 15:
			return func_625(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		default:
			break;
	}
	return false;
}

bool func_561(int* iParam0, int iParam1, struct<4> Param2, int iParam6, bool bParam7, int iParam8)
{
	if (!func_447(iParam0, iParam1, Param2, iParam6, bParam7, 1, iParam8, 1))
	{
		return false;
	}
	if (func_283(iParam8, 4) && func_439(iParam1, &Param2, iParam6, 1, 0))
	{
		return false;
	}
	return true;
}

int func_562(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_610(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_563(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	struct<14> Var1;
	int iVar15;
	struct<28> Var16;
	struct<25> Var44;
	struct<17> Var69;
	struct<16> Var86;

	iVar0 = -1;
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_444(*uParam0, &Var1, 1, 0, -1))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam1)
	{
		return iVar0;
	}
	if (Var1.f_13)
	{
		return iVar0;
	}
	iVar15 = func_366(Var1.f_4);
	if (iVar15 == joaat("HORSE"))
	{
		Var16 = { func_626(*uParam0, 1, 0) };
		Var16.f_10 = iParam1;
		iVar0 = func_627(joaat("UPDATE"), &Var16, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("COACH"))
	{
		Var44 = { func_628(*uParam0, 1, 0) };
		Var44.f_10 = iParam1;
		iVar0 = func_629(joaat("UPDATE"), &Var44, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("CLOTHING"))
	{
		Var69 = { func_630(*uParam0, 1, 0) };
		Var69.f_10 = iParam1;
		iVar0 = func_631(joaat("UPDATE"), &Var69, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var86 = { func_632(&Var1, 0) };
		Var86.f_10 = iParam1;
		iVar0 = func_633(joaat("UPDATE"), &Var86, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

bool func_564(int iParam0, var uParam1, int iParam2)
{
	if (uParam1->f_9 < 1)
	{
		return false;
	}
	if (!func_286(uParam1->f_8, 0) && !func_467(func_315(uParam1->f_8), 2))
	{
		return false;
	}
	if (func_283(iParam2, 128))
	{
		if (func_442(uParam1->f_8) == 0)
		{
			return false;
		}
	}
	if (func_283(iParam2, 16))
	{
		if (!func_634(iParam0, uParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_565(int* iParam0, int iParam1)
{
	int iVar0;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		if (!func_449(iParam0, iParam1))
		{
			return false;
		}
	}
	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*iParam0);
	if (iVar0 != iParam1 || NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0) >= 50)
	{
		if (!func_458(iParam0))
		{
			return false;
		}
		if (!func_449(iParam0, iParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_566(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 17, iParam2, 0);
}

bool func_567(int* iParam0, bool bParam1)
{
	iParam0->f_2++;
	if (bParam1)
	{
		return func_458(iParam0);
	}
	return true;
}

bool func_568(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 16, iParam2, 0);
}

int func_569()
{
	int iVar0;

	if (!NETWORK::NETWORK_DOES_TUNABLE_EXIST(-475019843, 135369362))
	{
		return 604800;
	}
	iVar0 = 604800;
	if (!NETWORK::NETWORK_ACCESS_TUNABLE_INT(-475019843, 135369362, &iVar0))
	{
		return 604800;
	}
	return iVar0;
}

int func_570(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("CHARACTER_RANK");
		case 7:
			return joaat("CHARACTER_RANK_BOUNTY_HUNTER");
		case 12:
			return joaat("CHARACTER_RANK_COLLECTOR");
		case 11:
			return joaat("CHARACTER_RANK_TRADER");
		case 13:
			return joaat("CHARACTER_RANK_SEASON_005");
		case 14:
			return joaat("CHARACTER_RANK_VIP_SEASON_005");
		case 15:
			return joaat("CHARACTER_RANK_MOONSHINER");
		case 16:
			return joaat("CHARACTER_RANK_SEASON_006");
		case 17:
			return joaat("CHARACTER_RANK_VIP_SEASON_006");
		case 18:
			return -296143963;
		case 19:
			return joaat("CHARACTER_RANK_SEASON_007");
		case 20:
			return joaat("CHARACTER_RANK_VIP_SEASON_007");
		case 21:
			return 1936286816;
		case 22:
			return -361115047;
		default:
			break;
	}
	return 0;
}

int func_571(int iParam0)
{
	if (iParam0 == 255 || iParam0 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
	{
		return NETWORK::_NETWORK_GET_RANK();
	}
	return Global_1145091[iParam0 /*35*/];
}

int func_572(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("CHARACTER_XP");
		case 7:
			return joaat("CHARACTER_XP_BOUNTY_HUNTER");
		case 12:
			return joaat("CHARACTER_XP_COLLECTOR");
		case 11:
			return joaat("CHARACTER_XP_TRADER");
		case 13:
			return joaat("CHARACTER_XP_SEASON_005");
		case 14:
			return joaat("CHARACTER_XP_VIP_SEASON_005");
		case 15:
			return joaat("CHARACTER_XP_MOONSHINER");
		case 16:
			return joaat("CHARACTER_XP_SEASON_006");
		case 17:
			return joaat("CHARACTER_XP_VIP_SEASON_006");
		case 18:
			return -399749454;
		case 19:
			return 1428145499;
		case 20:
			return -1318783204;
		case 21:
			return 893948884;
		case 22:
			return -187008013;
		default:
			break;
	}
	return 0;
}

bool func_573()
{
	return Global_1915715.f_20643;
}

int func_574(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	if (!bParam7 && UIAPPS::_IS_ANY_APP_RUNNING())
	{
		return 0;
	}
	iVar0 = Global_1296859.f_154[Global_1296859];
	iVar1 = Global_1296859.f_8;
	bVar2 = ENTITY::IS_ENTITY_DEAD(iVar1);
	bVar3 = PED::_0xB655DB7582AEC805(iVar1);
	if (bVar2 || bVar3)
	{
		if (!bParam5)
		{
			return 0;
		}
	}
	else
	{
		if (!bParam4)
		{
			if (TASK::_0xEC7E480FF8BD0BED(Global_34))
			{
				return 0;
			}
			if (PED::_GET_PED_BLACKBOARD_BOOL(Global_34, "inInspectionMode"))
			{
				return 0;
			}
		}
		if (bParam0 && !PLAYER::IS_PLAYER_CONTROL_ON(iVar0))
		{
			if (bParam6 && Global_1102219.f_3 & 32 != 0)
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON(iVar1, "iMinigameSeat"))
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (!bParam1)
	{
		if (Global_1915715.f_20638 || Global_1915715.f_22504.f_1)
		{
			return 0;
		}
		if (TASK::_0xD04241BBF6D03A5E(Global_34) != 0)
		{
			return 0;
		}
	}
	if (func_635())
	{
		return 0;
	}
	if (Global_15)
	{
		return 0;
	}
	if (!bParam2 && (((Global_1940144.f_10 || Global_1940144.f_11) || Global_1940144.f_12) || Global_1940144.f_13))
	{
		return 0;
	}
	if (!bParam3)
	{
		iVar4 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (Global_1248240.f_9297 != -1)
		{
			return 0;
		}
		if (Global_1128574[iVar4 /*56*/].f_34 & 1 != 0 && Global_1128574[iVar4 /*56*/].f_34 & 2 == 0)
		{
			return 0;
		}
		if (Global_1130634.f_293)
		{
			return 0;
		}
		if (Global_1572887.f_106.f_75 > 11 && Global_1572887.f_106.f_75 < 15)
		{
			return 0;
		}
		else if (Global_1572887.f_106.f_75 > 15)
		{
			return 0;
		}
	}
	if (!bParam8)
	{
		if ((SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(2) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(8)) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(9))
		{
			if (Global_1048576 || Global_2883584)
			{
				return 0;
			}
			if (Global_1048581)
			{
				return 0;
			}
			if (Global_1048585)
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_575(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1293346.f_20 < 20)
	{
		Global_1293346.f_20++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1293346.f_20.f_1[iVar0 /*21*/] = { Global_1293346.f_20.f_1[iVar0 + 1 /*21*/] };
			iVar0++;
		}
	}
	func_636(&(Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/]));
	Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/] = iParam0;
	Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

void func_576(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_577(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_578(int iParam0, var uParam1, var uParam2)
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

struct<14> func_579(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_580(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_581(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_470(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_582(int iParam0)
{
	int iVar0;

	iVar0 = func_372(iParam0, 1);
	if (iVar0 >= 2 && iVar0 <= 129)
	{
		return true;
	}
	return false;
}

int func_583(int iParam0)
{
	int iVar0;

	iVar0 = func_372(iParam0, 1);
	if (func_582(iParam0))
	{
		return (iVar0 - 2);
	}
	else if (func_637(iParam0))
	{
		return (iVar0 - 130);
	}
	else if (func_638(iParam0))
	{
		return (iVar0 - 166);
	}
	else if (func_639(iParam0))
	{
		return (iVar0 - 167);
	}
	else if (func_640(iParam0))
	{
		return (iVar0 - 172);
	}
	else if (func_641(iParam0))
	{
		return (iVar0 - 180);
	}
	else if (func_642(iParam0))
	{
		return (iVar0 - 150);
	}
	return -1;
}

int func_584(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2123992989:
			return 59;
		case joaat("MDEFENSE__BULLET"):
			return 49;
		case -1936069272:
			return 47;
		case joaat("MHEALTH__REGEN_RATE"):
			return 42;
		case joaat("MHORSE__TRAMPLE_DAMAGE"):
			return 58;
		case joaat("ADEADEYE_COST_PER_SHOT"):
			return 2;
		case joaat("MWEAPON__BOW_STAMINA_DRAIN"):
			return 41;
		case joaat("MDEFENSE__BULLET_USING_MELEE_WEAPON"):
			return 50;
		case joaat("MACCURACY__LOCAL_PLAYER_ACCURACY_FLOOR_MODIFIER"):
			return 64;
		case joaat("MDAMAGE__DISTANCE_CLOSE"):
			return 37;
		case -1575020444:
			return 94;
		case -1572802418:
			return 71;
		case joaat("ALASSO__DAMAGE_DEALT_PER_SECOND"):
			return 78;
		case joaat("MDEFENSE__EXPLOSIVE"):
			return 53;
		case -1349331938:
			return 43;
		case joaat("MDAMAGE__MISSING_HEALTH_CONVERSION"):
			return 29;
		case joaat("ASTAMINA__ALTER_TANK_PER_SECOND_PERCENT"):
			return 22;
		case joaat("ADEADEYE__ALTER_CORE_PER_SECOND_PERCENT"):
			return 7;
		case joaat("MHORSE__DEFENSE"):
			return 56;
		case joaat("ASTAMINA__HORSE_GAIN_ON_HORSEBACK_KILL_PERCENT"):
			return 23;
		case joaat("MDEFENSE__RANGED"):
			return 46;
		case joaat("MDAMAGE__ALL_WEAPONS_DIFFERENT_WEAPON"):
			return 25;
		case joaat("MDEFENSE__BULLET_PER_CONSECUTIVE_SHOT"):
			return 51;
		case joaat("MEAGLE_EYE__DEPLETION_RATE"):
			return 67;
		case joaat("MDEFENSE__FIRE"):
			return 52;
		case joaat("AHEALTH__GAIN_ON_KILL_PERCENT"):
			return 11;
		case joaat("MRPG_ATTIRBUTE_CORE_DRAIN_RATE"):
			return 66;
		case joaat("MDAMAGE__EXPLOSIVE_WEAPONS"):
			return 36;
		case joaat("MSTAMINA__REGEN_RATE"):
			return 75;
		case joaat("AHEALTH__ALTER_TANK_PER_SECOND_PERCENT"):
			return 14;
		case joaat("MDEADEYE__GAIN_MULTIPLIER_WITH_REPEATER"):
			return 73;
		case -377364039:
			return 60;
		case joaat("MACCURACY__AI_MODIFIER"):
			return 62;
		case joaat("MDAMAGE__FALLOFF"):
			return 39;
		case joaat("AHEALTH__ALTER_TOTAL_PER_MINUTE_PERCENT"):
			return 15;
		case joaat("ADEADEYE_COST_DURATION"):
			return 1;
		case joaat("MACCURACY__REMOTE_PLAYER_ACCURACY_FLOOR_MODIFIER"):
			return 65;
		case joaat("MSKILL__PERCEPTION"):
			return 83;
		case -1:
			return 0;
		case 66478954:
			return 93;
		case 91687087:
			return 79;
		case joaat("MSKILL__DISTILLER"):
			return 90;
		case 194431787:
			return 61;
		case joaat("MDEADEYE__GAIN_MULTIPLIER"):
			return 72;
		case joaat("MSKILL__PROTECTION_TRADER"):
			return 85;
		case joaat("MWEAPON__BOW_DRAW_TIME"):
			return 40;
		case joaat("MDEADEYE__DEPLETION_RATE"):
			return 70;
		case joaat("MSKILL__DIVINATION"):
			return 89;
		case 410940916:
			return 92;
		case 447408404:
			return 81;
		case joaat("ADEADEYE__GAIN_ON_HEADSHOT_PERCENT"):
			return 5;
		case joaat("MHEALTH__RECHARGE_RATE"):
			return 44;
		case joaat("MACCURACY__LOCAL_PLAYER_MODIFIER"):
			return 63;
		case joaat("MSKILL__INTUITION"):
			return 88;
		case joaat("MDAMAGE__MELEE"):
			return 30;
		case joaat("AHORSE__HEALTH_GAIN_ON_DAMAGE_TAKEN_PERCENT"):
			return 19;
		case joaat("ADEADEYE__GAIN_ON_REVIVE_PERCENT"):
			return 4;
		case joaat("MSKILL__PROTECTION_MOONSHINE"):
			return 86;
		case joaat("MDEFENSE__PLAYERS"):
			return 48;
		case 874892169:
			return 95;
		case joaat("AHEALTH__ALTER_CORE_PER_SECOND_PERCENT"):
			return 16;
		case 920214733:
			return 91;
		case joaat("MINCAPACITATION__BLEEDOUT_TIME"):
			return 68;
		case joaat("ADEADEYE__ALTER_TANK_PER_SECOND_PERCENT"):
			return 6;
		case joaat("MDAMAGE__ALL_WEAPONS_AIMING_WITHOUT_FIRING"):
			return 27;
		case joaat("ADEADEYE__ALTER_TANK_DAMAGE_TAKEN_PERCENT"):
			return 8;
		case joaat("MSTAMINA__REGEN_RATE_HEALTH_CONVERSION"):
			return 76;
		case joaat("MDEFENSE__MELEE"):
			return 45;
		case joaat("AHORSE__STAMINA_GAIN_ON_DAMAGE_TAKEN_PERCENT"):
			return 20;
		case joaat("AHEALTH__GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 10;
		case 1356998909:
			return 80;
		case joaat("MSKILL__FOCUS"):
			return 82;
		case joaat("MDEADEYE__GAIN_MULTIPLIER_STR_WEAPON"):
			return 74;
		case joaat("AHORSE__HEALTH_GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 17;
		case 1546732394:
			return 34;
		case joaat("MDEFENSE__STAMINA_CONVERSION"):
			return 55;
		case joaat("MDAMAGE__DISTANCE_FAR"):
			return 38;
		case joaat("MDAMAGE__BULLETS"):
			return 32;
		case joaat("MDEFENSE__STRENGTH_IN_NUMBERS"):
			return 54;
		case 1727267699:
			return 69;
		case joaat("MDAMAGE__STAMINA_CONVERSION"):
			return 28;
		case joaat("ADEADEYE_COST_ACTIVATION"):
			return 3;
		case joaat("MSTAMINA__SPRINT_DEPLETION_RATE"):
			return 77;
		case joaat("ASTAMINA__ALTER_CORE_PER_SECOND_PERCENT"):
			return 21;
		case joaat("AHORSE__STAMINA_GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 18;
		case joaat("AHEALTH__GAIN_KILL_PERCENT_STR_WEAPON"):
			return 12;
		case joaat("MDAMAGE__ALL_WEAPONS"):
			return 24;
		case joaat("MDAMAGE__THROWN"):
			return 31;
		case joaat("MSKILL__AWARENESS"):
			return 84;
		case joaat("MHORSE__DEFENSE_PLAYERS"):
			return 57;
		case joaat("ADEADEYE__ALTER_TANK_BULLET_DAMAGE_TAKEN_PERCENT"):
			return 9;
		case joaat("MDAMAGE__SHOTGUN"):
			return 33;
		case joaat("AHEALTH__GAIN_KILL_PERCENT_NON_STR_WEAPON"):
			return 13;
		case joaat("MDAMAGE__BULLET_PER_CONSECUTIVE_SHOT"):
			return 35;
		case joaat("MDAMAGE__ALL_WEAPONS_SINCE_LAST_SHOT"):
			return 26;
		case joaat("MSKILL__POTENTIAL"):
			return 87;
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

bool func_585(int iParam0)
{
	int iVar0;

	iVar0 = func_584(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 95)
	{
		return false;
	}
	return true;
}

float func_586(var uParam0)
{
	float fVar0;

	if (uParam0->f_2 != 0)
	{
		fVar0 = func_643(794259616, uParam0->f_2, uParam0->f_1, "");
		return fVar0;
	}
	return uParam0->f_1;
}

void func_587(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_585(iParam0))
	{
		return;
	}
	iVar0 = func_584(iParam0, 1);
	if (!func_644(Global_1146212.f_2169[iVar0 /*205*/]))
	{
		return;
	}
	Global_1146212[Global_1146212.f_2169[iVar0 /*205*/] /*102*/][iVar0] = (Global_1146212[Global_1146212.f_2169[iVar0 /*205*/] /*102*/][iVar0] - 1);
	if (Global_1146212[Global_1146212.f_2169[iVar0 /*205*/] /*102*/][iVar0] > 0)
	{
		return;
	}
	Global_1146212[Global_1146212.f_2169[iVar0 /*205*/] /*102*/][iVar0] = 0;
	Global_1146212.f_2169[iVar0 /*205*/].f_204 = 0;
	if (!func_645(Global_1146212.f_2169[iVar0 /*205*/].f_203))
	{
		return;
	}
	iVar1 = func_646(Global_1146212.f_2169[iVar0 /*205*/].f_203, 1);
	Global_1146212[Global_1146212.f_2169[iVar0 /*205*/] /*102*/].f_96[iVar1] = (Global_1146212[Global_1146212.f_2169[iVar0 /*205*/] /*102*/].f_96[iVar1] - 1);
	if (Global_1146212[Global_1146212.f_2169[iVar0 /*205*/] /*102*/].f_96[iVar1] > 0)
	{
		return;
	}
	iVar2 = 0;
	while (iVar2 < Global_1146212.f_47561[iVar1 /*25*/].f_23)
	{
		if (Global_1146212.f_47561[iVar1 /*25*/][iVar2] != Global_1146212.f_2169[iVar0 /*205*/])
		{
		}
		else
		{
			Global_1146212.f_47561[iVar1 /*25*/][iVar2] = -1;
			Global_1146212.f_47561[iVar1 /*25*/].f_23 = (Global_1146212.f_47561[iVar1 /*25*/].f_23 - 1);
			Global_1146212.f_47561[iVar1 /*25*/][iVar2] = Global_1146212.f_47561[iVar1 /*25*/][Global_1146212.f_47561[iVar1 /*25*/].f_23];
			Global_1146212.f_47561[iVar1 /*25*/][Global_1146212.f_47561[iVar1 /*25*/].f_23] = -1;
		}
		else
		{
			iVar2++;
		}
	}
}

bool func_588(int iParam0)
{
	int iVar0;

	iVar0 = func_589(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 68)
	{
		return false;
	}
	return true;
}

int func_589(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("EAGLE_EYE_HIGHLIGHT_BOUNTIES"):
			return 52;
		case joaat("HEADSHOT_IMMUNITY"):
			return 12;
		case joaat("HAT_BLOCKS_HEADSHOT"):
			return 11;
		case joaat("ANIMAL_TURN_IN_EFFICIENCY"):
			return 64;
		case joaat("DISABLE_HEALTH_REGENERATION"):
			return 2;
		case joaat("FIRE_CAP_INFINTE"):
			return 41;
		case joaat("SLOW_AND_STEADY_AURA"):
			return 28;
		case joaat("EAGLE_EYE_HIGHLIGHT_EARTH"):
			return 53;
		case -1730553768:
			return 3;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			return 25;
		case -1651690657:
			return 65;
		case joaat("NO_CRITICAL_DAMAGE_AGAINST_PLAYERS"):
			return 10;
		case -1583192324:
			return 66;
		case joaat("REVIVE_ON_BLEEDOUT"):
			return 34;
		case -1486292178:
			return 67;
		case joaat("LASSO_IMMUNITY"):
			return 5;
		case joaat("DISABLE_JUMPING"):
			return 45;
		case joaat("GRAPPLE_IMMUNITY_FROM_AI"):
			return 31;
		case -1026481003:
			return 6;
		case joaat("TAGGING_IMMUNITY"):
			return 13;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			return 33;
		case joaat("ON_HORSE_SPEED_RESTRICTION_JOG"):
			return 59;
		case joaat("FATAL_MELEE_IMMUNITY"):
			return 32;
		case joaat("FORCE_HEALTH_REGEN"):
			return 1;
		case joaat("CONFUSION_EFFECT"):
			return 14;
		case joaat("FULL_LOCKON_IMMUNITY"):
			return 4;
		case joaat("OVERPOWER_INFINITE_HEALTH"):
			return 36;
		case -350459285:
			return 68;
		case joaat("DAMAGE_CAP_INFINTE"):
			return 40;
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			return 26;
		case -199042163:
			return 60;
		case joaat("NED_KELLY_ADVERSARY"):
			return 22;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
			return 55;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			return 19;
		case -1:
			return 0;
		case joaat("TRAIL_EFFECT"):
			return 17;
		case joaat("POISON_EFFECT"):
			return 20;
		case joaat("ON_HORSE_SPEED_RESTRICTION_WALK"):
			return 61;
		case joaat("SLIPPERY_BASTARD_VFX"):
			return 24;
		case joaat("DISORIENT_EFFECT"):
			return 18;
		case joaat("FOCUS_FIRE_VFX"):
			return 23;
		case joaat("PREDATOR_ICON_DISPLAY"):
			return 39;
		case joaat("WOUND_EFFECT"):
			return 15;
		case 718630298:
			return 56;
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			return 48;
		case joaat("NED_KELLY_BASE"):
			return 21;
		case joaat("DISABLE_COMBAT_DIVE"):
			return 46;
		case joaat("SLOW_AND_STEADY_VFX"):
			return 27;
		case joaat("DISABLE_FACIAL_ACTIONS"):
			return 43;
		case joaat("CANNOT_LOCK_ON_PLAYERS"):
			return 7;
		case joaat("GRAPPLE_IMMUNITY_FROM_PLAYERS"):
			return 30;
		case 1037859088:
			return 51;
		case 1066450193:
			return 54;
		case 1159158432:
			return 62;
		case joaat("OVERPOWER_PREDATOR"):
			return 37;
		case 1242495215:
			return 9;
		case joaat("ON_HORSE_SPEED_RESTRICTION_IGNORE_MOUNT_CLASS"):
			return 63;
		case 1341326366:
			return 58;
		case joaat("OVERRIDE_INFINITE_DEADEYE"):
			return 35;
		case 1398483650:
			return 50;
		case joaat("PULSE_REPOST_STATE"):
			return 38;
		case joaat("DISABLE_CONSUMABLES"):
			return 42;
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			return 57;
		case joaat("DISABLE_INCAPACITATION"):
			return 44;
		case joaat("DRAIN_EFFECT"):
			return 16;
		case 1898374676:
			return 49;
		case 2067881273:
			return 8;
		case joaat("DISABLE_DROWNING"):
			return 47;
		case joaat("QUITE_AN_INSPIRATION_AURA"):
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

void func_590(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			func_647();
			break;
		case joaat("HEADSHOT_IMMUNITY"):
			func_648();
			break;
		case joaat("WOUND_EFFECT"):
			PED::_REMOVE_PED_WOUND_EFFECT(iVar0, 0f);
			break;
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(iVar0, false, 0f);
			GRAPHICS::_0xC5CB91D65852ED7E(func_649(iParam0));
			break;
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::_0xC5CB91D65852ED7E(func_649(iParam0));
			break;
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::_0xC5CB91D65852ED7E(func_649(iParam0));
			break;
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_0x3FC4C027FD0936F4(5);
			func_9(105, 1);
			break;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::_0xC5CB91D65852ED7E(func_649(iParam0));
			break;
		case joaat("OVERPOWER_PREDATOR"):
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 19);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 1);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 18);
			break;
		case joaat("PULSE_REPOST_STATE"):
			NETWORK::_0x442B4347B6EC36E8(iVar0, 0, true);
			break;
		case joaat("PREDATOR_ICON_DISPLAY"):
			ATTRIBUTE::_0x3FC4C027FD0936F4(15);
			break;
		case joaat("OVERPOWER_INFINITE_HEALTH"):
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 19);
			break;
		case joaat("FOCUS_FIRE_VFX"):
			PLAYER::_0x5F8E0303C229C84B(iVar1, "");
			break;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
		case joaat("SLIPPERY_BASTARD_VFX"):
		case joaat("SLOW_AND_STEADY_VFX"):
			func_651(func_650(iParam0));
			break;
		case joaat("SLOW_AND_STEADY_AURA"):
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			PLAYER::_0x768E81AE285A4B67(iVar1, 0);
			PLAYER::_0xE910932F4B30BE23(iVar1);
			PLAYER::_0x0E9057A9DA78D0F8(iVar1, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 0);
			break;
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			GRAPHICS::_0xAF4D239B8903FCBE();
			PLAYER::_0x768E81AE285A4B67(iVar1, 0);
			PLAYER::_0xE910932F4B30BE23(iVar1);
			PLAYER::_0x0E9057A9DA78D0F8(iVar1, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 0);
			break;
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			PLAYER::_0xCE285A4413B00B7F(iVar1, 1);
			break;
		case 1898374676:
			PLAYER::_SET_PLAYER_CAN_MERCY_KILL(iVar1, false);
			break;
		case 1398483650:
			PLAYER::_0xDFC85C5199045026(iVar1, 1f);
			PLAYER::_0x6FA957D1B55941C1(iVar1, -1f);
			break;
		case joaat("NED_KELLY_BASE"):
			func_652();
			break;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_644(17);
			break;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_644(16);
			break;
	}
}

bool func_591(int iParam0)
{
	int iVar0;

	iVar0 = func_592(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_592(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("FOCUS_FIRE"):
			return 1;
		case -1038992817:
			return 5;
		case -950874556:
			return 4;
		case joaat("QUITE_AN_INSPIRATION"):
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

int func_593(int iParam0)
{
	int iVar0;
	struct<31> Var1;
	struct<31> Var32;
	int iVar63;
	int iVar64;
	int iVar65;

	iVar0 = func_653(iParam0);
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
	while (iVar65 < Global_1146212.f_35859.f_11700)
	{
		iVar64 = func_378(Global_1146212.f_35859.f_9503[iVar65 /*3*/], 1);
		if (Global_1146212.f_35859.f_3116[iVar64 /*31*/].f_4 != iParam0)
		{
		}
		else if (Global_1146212.f_35859.f_9503[iVar65 /*3*/] == iVar0)
		{
		}
		else if (!func_654(Global_1146212.f_35859.f_9503[iVar65 /*3*/], Global_1146212.f_35859.f_9503[iVar65 /*3*/].f_1))
		{
		}
		else
		{
			Var1 = { func_655(Global_1146212.f_35859.f_9503[iVar65 /*3*/]) };
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

bool func_594(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		return false;
	}
	return true;
}

void func_595(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_585(iParam0))
	{
		return;
	}
	iVar0 = func_584(iParam0, 1);
	if (!func_644(Global_1146212.f_2169[iVar0 /*205*/]))
	{
		return;
	}
	Global_1146212[Global_1146212.f_2169[iVar0 /*205*/] /*102*/][iVar0]++;
	Global_1146212.f_2169[iVar0 /*205*/].f_204 = 1;
	if (!func_645(Global_1146212.f_2169[iVar0 /*205*/].f_203))
	{
		return;
	}
	iVar1 = func_646(Global_1146212.f_2169[iVar0 /*205*/].f_203, 1);
	Global_1146212[Global_1146212.f_2169[iVar0 /*205*/] /*102*/].f_96[iVar1]++;
	iVar2 = 0;
	while (iVar2 < Global_1146212.f_47561[iVar1 /*25*/].f_23)
	{
		if (Global_1146212.f_47561[iVar1 /*25*/][iVar2] == Global_1146212.f_2169[iVar0 /*205*/])
		{
			return;
		}
		iVar2++;
	}
	Global_1146212.f_47561[iVar1 /*25*/][Global_1146212.f_47561[iVar1 /*25*/].f_23] = Global_1146212.f_2169[iVar0 /*205*/];
	Global_1146212.f_47561[iVar1 /*25*/].f_23++;
}

bool func_596(var uParam0)
{
	bool bVar0;

	if (uParam0->f_1 != 0)
	{
		bVar0 = func_656(794259616, uParam0->f_1, 1, "");
		return bVar0;
	}
	return true;
}

void func_597(int iParam0)
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
		case joaat("FULL_LOCKON_IMMUNITY"):
			func_647();
			break;
		case joaat("HEADSHOT_IMMUNITY"):
			func_648();
			break;
		case joaat("WOUND_EFFECT"):
			PED::_SET_PED_WOUND_EFFECT(iVar0, 2, 14411, 0f, 0f, 0f, 0f, 0f, -1f, 1f);
			break;
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(iVar0, true, 0f);
			GRAPHICS::ANIMPOSTFX_PLAY(func_649(iParam0));
			break;
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_649(iParam0));
			break;
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_649(iParam0));
			break;
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_0xFB6E111908502871(5);
			func_9(104, 1);
			break;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_649(iParam0));
			break;
		case joaat("OVERPOWER_PREDATOR"):
			break;
		case joaat("PREDATOR_ICON_DISPLAY"):
			ATTRIBUTE::_0xFB6E111908502871(15);
			break;
		case joaat("FOCUS_FIRE_VFX"):
			PLAYER::_0x5F8E0303C229C84B(iVar1, "focusfire");
			break;
		case joaat("SLIPPERY_BASTARD_VFX"):
			iVar2 = func_650(iParam0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_657(iParam0, 0));
			func_658(iVar2, 0, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_657(iParam0, 1));
			func_658(iVar2, 1, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_657(iParam0, 2));
			func_658(iVar2, 2, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_657(iParam0, 3));
			func_658(iVar2, 2, 1, iVar3, 0);
			break;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			iVar2 = func_650(iParam0);
			func_658(iVar2, 3, 1, -1, 1);
			break;
		case joaat("SLOW_AND_STEADY_VFX"):
			iVar2 = func_650(iParam0);
			func_658(iVar2, 4, 1, -1, 0);
			break;
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			PLAYER::_0x768E81AE285A4B67(iVar1, 1014693585);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 8);
			PLAYER::_0x131E294EF60160DF(iVar1, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 1);
			break;
		case joaat("SLOW_AND_STEADY_AURA"):
			PLAYER::_0x768E81AE285A4B67(iVar1, 1936842089);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 8);
			PLAYER::_0x131E294EF60160DF(iVar1, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 1);
			break;
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			GRAPHICS::_0x249CD6B7285536F2(0f, 2f, 2f);
			PLAYER::_0x768E81AE285A4B67(iVar1, 1979474018);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 25);
			PLAYER::_0x263D69767F76059C(iVar1, 2);
			break;
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			PLAYER::_0xCE285A4413B00B7F(iVar1, 0);
			break;
		case 1898374676:
			PLAYER::_SET_PLAYER_CAN_MERCY_KILL(iVar1, true);
			break;
		case 1398483650:
			PLAYER::_0xDFC85C5199045026(iVar1, 0.5f);
			PLAYER::_0x6FA957D1B55941C1(iVar1, 2f);
			break;
		case joaat("NED_KELLY_BASE"):
			func_659();
			break;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_644(17);
			break;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_644(16);
			break;
	}
}

void func_598(int iParam0)
{
	char* sVar0;
	char* sVar1;

	if (iParam0 == 0)
	{
		return;
	}
	sVar0 = func_660(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	sVar1 = func_661(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return;
	}
	AUDIO::_PLAY_SOUND_FROM_ENTITY(sVar0, Global_1296859.f_8, sVar1, false, 0, 0);
}

bool func_599(int iParam0)
{
	return (Global_1102219.f_26.f_9 && iParam0) == iParam0;
}

bool func_600(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 3)
	{
		return false;
	}
	return true;
}

bool func_601(struct<2> Param0, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_12(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_662(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

bool func_602(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_467(iParam0, 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!func_663(iParam0, bParam1, &Var0))
	{
		return false;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = Var0.f_36[iVar47];
		iVar47++;
	}
	return true;
}

int func_603(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (iParam1 == -570078785)
	{
		iVar0 = func_413(iParam0, -570078785, 0, 1);
		if (iVar0 == 0)
		{
		}
		if (!func_303(iVar0))
		{
			if (Global_1915715.f_20644)
			{
				func_607(MISC::_CREATE_VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", func_336(iVar0)));
			}
			return 0;
		}
	}
	else if (iParam1 == -915411861)
	{
		iVar1 = func_413(iParam0, -915411861, 0, 1);
		if (iVar1 == 0)
		{
		}
		if (!func_304(iVar1))
		{
			if (Global_1915715.f_20644)
			{
				func_607("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (iParam1 == 997808187)
	{
		return 1;
	}
	if (!func_301(iParam0, iParam1, &uVar2, 1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_604(struct<17> Param0)
{
	if (!func_403(Param0.f_16))
	{
		return false;
	}
	return true;
}

bool func_605(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 17, iParam2, 0);
}

int func_606(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_664(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_470(bParam1), iParam0, iParam3);
}

void func_607(char* sParam0)
{
	Global_1915715.f_22470 = func_233(sParam0, 10000, 0, 0, 0, 1);
}

int func_608(int* iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;

	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		iVar2 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0);
		Var3.f_9 = 1;
		Var3.f_11 = -1591664384;
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ITEM_INFO(*iParam0, iVar1, &Var3))
			{
			}
			else if (bParam1 != Var3.f_13)
			{
			}
			else
			{
				iVar0 = (iVar0 + (func_334(Var3.f_8, bParam1, 1, 0, 1, 0) * Var3.f_9));
			}
			iVar1++;
		}
	}
	return iVar0;
}

bool func_609(int iParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	bool bVar35;

	if (!func_665(iParam0, bParam2, &Var0, &iVar31, 1, 0))
	{
		return false;
	}
	bVar35 = ((!bParam4 && func_425(0)) && !func_426());
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (Var0[iVar34 /*2*/] == 0 || Var0[iVar34 /*2*/] == 1412640604)
		{
		}
		else
		{
			iVar32 = (Var0[iVar34 /*2*/].f_1 * bParam1);
			if (Var0[iVar34 /*2*/] == joaat("CURRENCY_CASH") && func_304(iVar32))
			{
				Jump @217; //curOff = 139
			}
			else if (Var0[iVar34 /*2*/] == joaat("CURRENCY_GOLD_BAR") && func_303(iVar32))
			{
			}
			else
			{
				iVar33 = func_369(Var0[iVar34 /*2*/], 0, !bVar35, 0);
				if (iVar33 >= iVar32)
				{
				}
				else
				{
					*uParam3 = { Var0[iVar34 /*2*/] };
					return false;
				}
			}
			iVar34++;
		}
	}
	return true;
}

bool func_610(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_470(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_551(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_611(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 1;
	Var0.f_1.f_1 = 10;
	return func_666(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_612(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 2;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	return func_666(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_613(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 3;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	return func_666(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_614(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 4;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	return func_666(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_615(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 5;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_666(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_616(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 6;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_666(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_617(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 7;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_666(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_618(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 8;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_666(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_619(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	int iVar0;

	iVar0 = 9;
	iVar0.f_1.f_1 = 10;
	iVar0.f_1.f_42.f_1 = 10;
	iVar0.f_1.f_42.f_42.f_1 = 10;
	iVar0.f_1.f_42.f_42.f_42.f_1 = 10;
	iVar0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	iVar0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	iVar0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	iVar0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	iVar0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_666(iParam0, uParam1, iParam2, uParam3, iVar0, &iVar0, bParam4, iParam5);
}

bool func_620(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 10;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_666(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_621(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 11;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_666(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_622(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 12;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_666(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_623(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 13;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_666(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_624(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 14;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_666(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_625(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 15;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_666(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

struct<28> func_626(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_470(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_632(&Var28, bParam5) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_627(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_634(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_668(func_667(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_669(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 28), iVar0, uParam1);
	}
	return -1;
}

struct<25> func_628(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_470(bParam4), &uParam0, &Var25, 24, 1))
	{
		return Var0;
	}
	Var0 = { func_632(&Var25, bParam5) };
	Var0.f_16 = { Var25.f_15 };
	Var0.f_24 = Var25.f_23;
	return Var0;
}

int func_629(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_668(func_670(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_669(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 25), iVar0, uParam1);
	}
	return -1;
}

struct<17> func_630(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_470(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_632(&Var17, bParam5) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_631(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_634(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_668(func_566(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_669(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17), iVar0, uParam1);
	}
	return -1;
}

struct<16> func_632(var uParam0, bool bParam1)
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
		Var0.f_15 = func_502(uParam0->f_4, joaat("DEFAULT"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_546() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_633(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_634(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_668(func_568(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_669(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

bool func_634(int iParam0, var uParam1)
{
	var uVar0;

	uVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, uParam1);
	if (iParam0 == joaat("USE"))
	{
		if ((func_671(uParam1->f_8, iParam0, uVar0, 2048) || func_671(uParam1->f_8, iParam0, uVar0, 32768)) || func_671(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_671(uParam1->f_8, iParam0, uVar0, 4) || func_671(uParam1->f_8, iParam0, uVar0, 256)) || func_671(uParam1->f_8, iParam0, uVar0, 65536)) || func_671(uParam1->f_8, iParam0, uVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SPEND"))
	{
		if (((func_671(uParam1->f_8, iParam0, uVar0, 1) || func_671(uParam1->f_8, iParam0, uVar0, 8)) || func_671(uParam1->f_8, iParam0, uVar0, 65536)) || func_671(uParam1->f_8, iParam0, uVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SELL"))
	{
		if (((func_671(uParam1->f_8, iParam0, uVar0, 1) || func_671(uParam1->f_8, iParam0, uVar0, 16)) || func_671(uParam1->f_8, iParam0, uVar0, 2)) || func_671(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_671(uParam1->f_8, iParam0, uVar0, 8) || func_671(uParam1->f_8, iParam0, uVar0, 4096)) || func_671(uParam1->f_8, iParam0, uVar0, 256)) || func_671(uParam1->f_8, iParam0, uVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_635()
{
	return (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_26538) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_26538, false));
}

void func_636(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_672(&(uParam0->f_4));
}

bool func_637(int iParam0)
{
	int iVar0;

	iVar0 = func_372(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return true;
	}
	return false;
}

bool func_638(int iParam0)
{
	int iVar0;

	iVar0 = func_372(iParam0, 1);
	if (iVar0 >= 166 && iVar0 <= 166)
	{
		return true;
	}
	return false;
}

bool func_639(int iParam0)
{
	int iVar0;

	iVar0 = func_372(iParam0, 1);
	if (iVar0 >= 167 && iVar0 <= 171)
	{
		return true;
	}
	return false;
}

bool func_640(int iParam0)
{
	int iVar0;

	iVar0 = func_372(iParam0, 1);
	if (iVar0 >= 172 && iVar0 <= 179)
	{
		return true;
	}
	return false;
}

bool func_641(int iParam0)
{
	int iVar0;

	iVar0 = func_372(iParam0, 1);
	if (iVar0 >= 180 && iVar0 <= 182)
	{
		return true;
	}
	return false;
}

bool func_642(int iParam0)
{
	int iVar0;

	iVar0 = func_372(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 165)
	{
		return true;
	}
	return false;
}

float func_643(int iParam0, int iParam1, float fParam2, char* sParam3)
{
	struct<11> Var0;
	float fVar22;

	if (func_673(iParam0, iParam1, &Var0))
	{
		fVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_FLOAT(iParam0, iParam1, Var0.f_10.f_1);
	}
	else
	{
		fVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_FLOAT(iParam0, iParam1, fParam2);
	}
	return fVar22;
}

bool func_644(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 21)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	if (MISC::_0x8F4F050054005C27(&(Global_1146212.f_2166), iParam0))
	{
		return true;
	}
	if (Global_1146212.f_2165 >= 21)
	{
		return false;
	}
	Global_1146212.f_2143[Global_1146212.f_2165] = iParam0;
	Global_1146212.f_2165++;
	return true;
}

bool func_645(int iParam0)
{
	int iVar0;

	iVar0 = func_646(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_646(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("CONSECUTIVE_DAMAGE_DEALT"):
			return 3;
		case -1016837116:
			return 5;
		case 0:
			return 0;
		case joaat("CONSECUTIVE_DAMAGE_TAKEN"):
			return 4;
		case joaat("NEARBY_ALLIES"):
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

void func_647()
{
	bool bVar0;
	bool bVar1;

	if (Global_1146212.f_21645[3 /*209*/].f_208)
	{
		bVar0 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1296859.f_8, 550, bVar0);
	if (Global_1146212.f_21645[4 /*209*/].f_208)
	{
		if (!func_279(Global_1298536[Global_1296859 /*87*/].f_86, 1))
		{
			bVar1 = true;
		}
	}
	PED::SET_PED_CONFIG_FLAG(Global_1296859.f_8, 556, bVar1);
}

void func_648()
{
	bool bVar0;

	bVar0 = false;
	if (Global_1146212.f_21645[12 /*209*/].f_208)
	{
		bVar0 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1296859.f_8, 263, bVar0);
}

char* func_649(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DRAIN_EFFECT"):
			return "MP_ArrowDrain";
		case joaat("DISORIENT_EFFECT"):
			return "MP_ArrowDisorient";
		case joaat("TRAIL_EFFECT"):
			return "MP_ArrowTracking";
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			return "MP_MoonshineToxic";
		default:
			break;
	}
	return "";
}

int func_650(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SLIPPERY_BASTARD_VFX"):
			return -843895567;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			return joaat("MOMENT_TO_RECUPERATE_VFX");
		case joaat("SLOW_AND_STEADY_VFX"):
			return joaat("SLOW_AND_STEADY_VFX");
		default:
			break;
	}
	return 0;
}

void func_651(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_1193972[iVar0 /*8*/].f_5 == iParam0)
		{
			Global_1193972[iVar0 /*8*/].f_7 = 1;
			Global_1193972[iVar0 /*8*/].f_5 = 0;
		}
		iVar0++;
	}
}

void func_652()
{
	PED::SET_PED_CONFIG_FLAG(Global_1296859.f_8, 305, false);
	PED::_0x801917E7D7BCE418(Global_1296859.f_8);
}

int func_653(int iParam0)
{
	int iVar0;

	if (!func_591(iParam0))
	{
		return -1;
	}
	iVar0 = func_592(iParam0, 1);
	return Global_1146212.f_35859.f_9286[iVar0 /*3*/];
}

bool func_654(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<31> Var4;

	if (!func_506(iParam0))
	{
		return false;
	}
	iVar0 = func_378(iParam0, 1);
	iVar2 = Global_1146212.f_35859.f_3116[iVar0 /*31*/].f_4;
	if (func_508(Global_1146212.f_35859.f_3116[iVar0 /*31*/]))
	{
		iVar3 = Global_1146212.f_35859.f_9286[func_592(iVar2, 1) /*3*/];
		Var4 = { func_655(iVar3) };
		if (iVar3 != iParam0 && Global_1146212.f_35859.f_3116[iVar0 /*31*/].f_5 <= Var4.f_5)
		{
			return false;
		}
	}
	switch (Global_1146212.f_35859.f_3116[iVar0 /*31*/])
	{
		case -1606735498:
		case joaat("ON_HEADSHOT"):
		case joaat("ENTER_WEARING_HAT"):
		case joaat("ENTER_SPRINTING"):
		case joaat("ENTER_MOUNTED"):
		case joaat("ENTER_DUAL_WIELD"):
		case -971275364:
		case joaat("ON_KILL"):
		case joaat("ENTER_SCENARIO"):
		case joaat("ENTER_REVIVER"):
		case -193993646:
		case joaat("ENTER_ALLY_NEARBY"):
		case -23641105:
		case joaat("ON_DAMAGE_TAKEN"):
		case joaat("ENTER_MELEE"):
		case joaat("ON_DAMAGE_DEALT_FROM_HORSEBACK"):
		case 429965152:
		case joaat("ON_DAMAGE_TAKEN_FROM_HORSEBACK"):
		case joaat("ENTER_WINDED"):
		case joaat("ENTER_NO_HAT"):
		case joaat("ON_ENABLE"):
		case joaat("ENTER_EAGLE_EYE"):
		case joaat("ENTER_DEADEYE"):
		case joaat("ENTER_SCOPED"):
		case joaat("ENTER_COVER"):
		case 1305415806:
		case 1461424861:
		case 1691008805:
		case joaat("ENTER_DAMAGED"):
		case joaat("ON_DAMAGE_DEALT"):
		case joaat("ENTER_REVIVED"):
		case joaat("ENTER_LASSOING"):
		case joaat("ENTER_IN_VEHICLE"):
		case 2116793692:
			return true;
		case joaat("ENTER_FREEROAM_OR_COOP"):
			if (!func_674() && !func_675())
			{
				return false;
			}
			return true;
		case -2010146101:
			if (!func_674())
			{
				return false;
			}
			return true;
		case joaat("ENTER_REVIVED_REMOTE"):
			iVar1 = func_505(iParam1);
			if (iVar1 == Global_1296859)
			{
				return false;
			}
			return true;
		case -2129621195:
			iVar1 = func_505(iParam1);
			if (iVar1 == Global_1296859)
			{
				return false;
			}
			if (!GANG::_0x424B17A7DC5C90BC(Global_1296859.f_154[Global_1296859]))
			{
				return false;
			}
			if (!GANG::_0x81FB74C83C2ED69F(Global_1296859.f_154[iVar1]))
			{
				return false;
			}
			return true;
		case joaat("ALLY_ENTER_DEADEYE"):
			iVar1 = func_505(iParam1);
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Global_1296859.f_154[iVar1]))
			{
				return false;
			}
			if (iVar1 != Global_1296859 && !func_676(Global_1296859.f_154[iVar1]))
			{
				return false;
			}
			if (!func_677(512, iVar1))
			{
				return false;
			}
			return true;
		case -1503245593:
			if (!Global_1956200.f_1716[8])
			{
				return false;
			}
			iVar1 = func_505(iParam1);
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Global_1296859.f_154[iVar1]))
			{
				return false;
			}
			if (PED::_0x0C31C51168E80365(Global_1296859.f_8) != PLAYER::GET_PLAYER_PED(Global_1296859.f_154[iVar1]))
			{
				return false;
			}
			return true;
		default:
			break;
	}
	return false;
}

struct<31> func_655(int iParam0)
{
	int iVar0;

	iVar0 = func_378(iParam0, 1);
	return Global_1146212.f_35859.f_3116[iVar0 /*31*/];
}

bool func_656(int iParam0, int iParam1, bool bParam2, char* sParam3)
{
	struct<11> Var0;
	bool bVar22;

	if (func_673(iParam0, iParam1, &Var0))
	{
		bVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_BOOL(iParam0, iParam1, Var0.f_10.f_2);
	}
	else
	{
		bVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_BOOL(iParam0, iParam1, bParam2);
	}
	return bVar22;
}

char* func_657(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("SLIPPERY_BASTARD_VFX"):
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

void func_658(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Global_1193972[iVar0 /*8*/]) && !Global_1193972[iVar0 /*8*/].f_6)
		{
			Global_1193972[iVar0 /*8*/].f_5 = iParam0;
			Global_1193972[iVar0 /*8*/].f_1 = iParam1;
			Global_1193972[iVar0 /*8*/].f_2 = iParam2;
			Global_1193972[iVar0 /*8*/].f_3 = iParam3;
			Global_1193972[iVar0 /*8*/].f_4 = iParam4;
			Global_1193972[iVar0 /*8*/].f_6 = 1;
			return;
		}
		iVar0++;
	}
}

void func_659()
{
	PED::SET_PED_CONFIG_FLAG(Global_1296859.f_8, 305, true);
	PED::_0x05CE6AF4DF071D23(Global_1296859.f_8, 0.7f);
}

char* func_660(int iParam0)
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

char* func_661(int iParam0)
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

int func_662(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_678(Param0);
	}
	return -1;
}

bool func_663(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = ITEMDATABASE::_0x7A35A72A692BE9DB(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (ITEMDATABASE::_0x3A0B667ABFF87F6E(iParam0, iVar0, uParam2) && *uParam2 == bParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_664(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

bool func_665(int iParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_467(iParam0, 2))
	{
		return false;
	}
	*iParam3 = ITEMDATABASE::_0x388088BFF3681189(iParam0, bParam1);
	if (*iParam3 == 0)
	{
		if (!bParam5)
		{
		}
		return false;
	}
	if (!bParam5)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!ITEMDATABASE::_0xB542632693D53408(iParam0, bParam1, iVar0, uParam2[iVar0 /*2*/]))
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
		func_679(iParam0, bParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_666(int* iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;

	if (*iParam5 < iParam4)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if ((*uParam3)[iVar0 /*2*/] == 0 || (uParam3[iVar0 /*2*/])->f_1 == 0)
		{
			Jump @106; //curOff = 54
		}
		else if (!func_680((*uParam3)[iVar0 /*2*/], ((uParam3[iVar0 /*2*/])->f_1 * uParam1->f_9), iParam5[iVar0 /*42*/]))
		{
			return false;
		}
		iVar0++;
	}
	return func_681(iParam0, uParam1, iParam5, iParam2, bParam6, iParam7);
}

bool func_667(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 28, iParam2, 0);
}

int func_668(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_483(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_483(iParam1, 2, 0, 0);
	return -1;
}

int func_669(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_483(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

bool func_670(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 25, iParam2, 0);
}

int func_671(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_279(uParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_672(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = -142743235;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	uParam0->f_8.f_3 = 0;
	StringCopy(&(uParam0->f_12), "", 32);
	uParam0->f_16 = -1;
}

bool func_673(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;
	int iVar7;

	Var0 = -178401592;
	Var0.f_1 = iParam0;
	Var0.f_2 = joaat("NAME");
	Var0.f_3 = 1;
	Var0.f_4 = iParam1;
	DATAFILE::_0x91DED5DD64BB2691(&Var0);
	if (DATAFILE::_0x44B3A36933AC009C(&iVar7, &Var0, joaat("NAME")))
	{
		*uParam2 = iParam0;
		uParam2->f_9 = iParam1;
		StringCopy(&(uParam2->f_1), "", 64);
		StringIntConCat(&(uParam2->f_1), iVar7, 64);
		DATAFILE::_0x44B3A36933AC009C(&iVar7, &Var0, joaat("TYPE"));
		uParam2->f_10.f_3 = func_682(iVar7);
		uParam2->f_14.f_3 = uParam2->f_10.f_3;
		uParam2->f_18.f_3 = uParam2->f_10.f_3;
		switch (uParam2->f_10.f_3)
		{
			case 0:
				if (!DATAFILE::_0x52FC26D2D2FC2987(&(uParam2->f_10), &Var0, joaat("DEFAULT")))
				{
				}
				break;
			case 1:
				if (!DATAFILE::_0xB2B42607F7867576(&(uParam2->f_10.f_1), &Var0, joaat("DEFAULT")))
				{
				}
				break;
			case 2:
				if (!DATAFILE::_0xA63CD20F19B961AB(&(uParam2->f_10.f_2), &Var0, joaat("DEFAULT")))
				{
				}
				break;
		}
		switch (uParam2->f_14.f_3)
		{
			case 0:
				DATAFILE::_0x52FC26D2D2FC2987(&(uParam2->f_14), &Var0, joaat("MIN"));
				break;
			case 1:
				DATAFILE::_0xB2B42607F7867576(&(uParam2->f_14.f_1), &Var0, joaat("MIN"));
				break;
			case 2:
				DATAFILE::_0xA63CD20F19B961AB(&(uParam2->f_14.f_2), &Var0, joaat("MIN"));
				break;
		}
		switch (uParam2->f_18.f_3)
		{
			case 0:
				DATAFILE::_0x52FC26D2D2FC2987(&(uParam2->f_18), &Var0, joaat("MAX"));
				break;
			case 1:
				DATAFILE::_0xB2B42607F7867576(&(uParam2->f_18.f_1), &Var0, joaat("MAX"));
				break;
			case 2:
				DATAFILE::_0xA63CD20F19B961AB(&(uParam2->f_18.f_2), &Var0, joaat("MAX"));
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
		return true;
	}
	return false;
}

bool func_674()
{
	return Global_1572887.f_6;
}

bool func_675()
{
	if (!Global_1048577)
	{
		return false;
	}
	if (!func_12(func_19(0)))
	{
		return false;
	}
	if (Global_3145858 != -504335712)
	{
		return false;
	}
	if (func_683(Global_524288.f_40400))
	{
		return true;
	}
	return false;
}

bool func_676(int iParam0)
{
	if (func_684(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) != 1)
		{
			func_685(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) == 1;
}

bool func_677(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219.f_3 && iParam0) != 0;
	}
	return (Global_1100469[iParam1 /*53*/].f_3 && iParam0) != 0;
}

int func_678(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_686(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

void func_679(int iParam0, bool bParam1, var uParam2, int iParam3)
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
	if (!ITEMDATABASE::_0xA97EE5E4589FCF5A(iParam0, &Var7) || Var7 == 0)
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
		uVar6 = Var7.f_1[iVar1];
		iVar4 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIED_PRICES(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != bParam1)
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
							if ((*uParam2)[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (fVar21[iVar0] + (Var19.f_1 - 1f));
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
		if (fVar21[iVar0] != 1f && (uParam2[iVar0 /*2*/])->f_1 > 0)
		{
			if (*uParam2)[iVar0 /*2*/] == joaat("CURRENCY_GOLD_BAR")
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 100f))) / 1000000) * 100;
			}
			else
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 100f))) / 10000);
			}
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_442((*uParam2)[iVar0 /*2*/]) != -829303394)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_680(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	struct<6> Var7[10];
	int iVar68;
	int iVar69;

	*uParam2 = iParam0;
	if (func_160(0))
	{
		iVar5 = func_411(func_18(), iParam0);
		if (iVar5 != 0)
		{
			Var0 = { func_436(1) };
			Var0.f_4 = func_530(iVar5);
			uParam2->f_1[0 /*4*/] = { func_320(iParam0, Var0, Var0.f_4, 1) };
			if (INVENTORY::_0xB881CA836CC4B6D4(&(uParam2->f_1[0 /*4*/])))
			{
				return true;
			}
		}
	}
	iVar6 = func_502(iParam0, joaat("DEFAULT"));
	if (iVar6 != 0)
	{
		if (!func_687(&Var7, &iVar68, iParam0, iVar6, iParam1, 1) || iVar68 < 1)
		{
			return false;
		}
		iVar69 = 0;
		while (iVar69 < iVar68)
		{
			uParam2->f_1[iVar69 /*4*/] = { func_320(iParam0, Var7[iVar69 /*6*/], Var7[iVar69 /*6*/].f_4, 1) };
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(uParam2->f_1[iVar69 /*4*/])))
			{
				return false;
			}
			iVar69++;
		}
		return true;
	}
	Var0 = { func_308(iParam0, 1, 0) };
	uParam2->f_1[0 /*4*/] = { func_320(iParam0, Var0, Var0.f_4, 1) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&(uParam2->f_1[0 /*4*/])))
	{
		return false;
	}
	return true;
}

bool func_681(int* iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	if ((iParam3 != 2113164098 && iParam3 != joaat("SELL")) && iParam3 != joaat("USE"))
	{
		return false;
	}
	if (!func_564(iParam3, uParam1, iParam5))
	{
		return false;
	}
	if (!func_565(iParam0, iParam3))
	{
		return false;
	}
	if (func_688(*iParam0, iParam3, uParam1, iParam2))
	{
	}
	else
	{
		return false;
	}
	return func_567(iParam0, bParam4);
}

int func_682(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case joaat("INT"):
			iVar0 = 0;
			break;
		case joaat("FLOAT"):
			iVar0 = 1;
			break;
		case joaat("BOOL"):
			iVar0 = 2;
			break;
	}
	return iVar0;
}

bool func_683(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

bool func_684(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_685(int iParam0)
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
		func_689(iParam0);
		return;
	}
	if (Global_1071686.f_21416.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_690(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 1;
}

bool func_686(struct<2> Param0, var uParam2)
{
	if (!func_12(Param0))
	{
		return false;
	}
	func_691(uParam2);
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

bool func_687(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	*iParam1 = 0;
	if (iParam4 < 1)
	{
		return false;
	}
	else if (*uParam0 != 10)
	{
		return false;
	}
	if (iParam3 == 0)
	{
		iParam3 = func_502(iParam2, joaat("DEFAULT"));
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!NETSHOPPING::_0xD1555FBC96C88444(iParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_692(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

bool func_688(int iParam0, int iParam1, var uParam2, int iParam3)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 16, iParam3, *iParam3);
}

void func_689(int iParam0)
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
	func_690(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 0;
}

void func_690(int iParam0)
{
	if (Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

void func_691(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

bool func_692(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	*iParam1 = 0;
	if (*uParam0 != 10)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iParam2 < 1)
		{
			Jump @253; //curOff = 37
		}
		else if ((uParam0[iVar0 /*6*/])->f_4 == 0)
		{
			Jump @244; //curOff = 55
		}
		else if ((uParam0[iVar0 /*6*/])->f_5 == 0)
		{
			Jump @244; //curOff = 73
		}
		else if (func_471(uParam0[iVar0 /*6*/]))
		{
		}
		else
		{
			if (iVar0 != *iParam1)
			{
				*(uParam0[*iParam1 /*6*/]) = { *(uParam0[iVar0 /*6*/]) };
				(uParam0[*iParam1 /*6*/])->f_4 = (uParam0[iVar0 /*6*/])->f_4;
			}
			if ((uParam0[iVar0 /*6*/])->f_5 > iParam2)
			{
				(uParam0[*iParam1 /*6*/])->f_5 = iParam2;
				iParam2 = 0;
			}
			else
			{
				(uParam0[*iParam1 /*6*/])->f_5 = (uParam0[iVar0 /*6*/])->f_5;
				iParam2 = (iParam2 - (uParam0[*iParam1 /*6*/])->f_5);
			}
			if (iVar0 > *iParam1)
			{
				*(uParam0[iVar0 /*6*/]) = { func_546() };
				(uParam0[iVar0 /*6*/])->f_4 = 0;
				(uParam0[iVar0 /*6*/])->f_5 = 0;
			}
			*iParam1++;
		}
		iVar0++;
	}
	if (bParam3 && iParam2 > 0)
	{
		*iParam1 = 0;
		return false;
	}
	return true;
}

