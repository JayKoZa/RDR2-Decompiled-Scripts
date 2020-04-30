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
	int iLocal_18 = 0;
	var uLocal_19 = -1;
	var uLocal_20 = -1;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
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
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
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
	var uLocal_78 = 4;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = -1;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = -1;
	var uLocal_98 = -1;
	var uLocal_99 = -1;
	var uScriptParam_0 = -1;
#endregion

void __EntryFunction__()
{
	var uVar0;

	fLocal_16 = 1f;
	fLocal_17 = 1f;
	uVar0 = uScriptParam_0;
	func_1(uVar0);
	func_2(&iLocal_18, &uScriptParam_0);
	while (!func_3(1, 1) && iLocal_18 != 19)
	{
		func_4(&iLocal_18);
		BUILTIN::WAIT(0);
	}
	func_5(&iLocal_18);
	func_6();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0)
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
}

void func_2(int iParam0, var uParam1)
{
	iParam0->f_1 = *uParam1;
	iParam0->f_2 = func_7(iParam0->f_1);
	iParam0->f_3 = { func_8(iParam0->f_1) };
	func_9(iParam0);
}

int func_3(bool bParam0, bool bParam1)
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

void func_4(int iParam0)
{
	func_10(iParam0);
}

int func_5(int iParam0)
{
	struct<2> Var0;

	if (SCRIPTS::_DOES_THREAD_EXIST(iParam0->f_7) && SCRIPTS::IS_THREAD_ACTIVE(iParam0->f_7, false))
	{
		SCRIPTS::_0x7DE4643157AD646C(iParam0->f_7);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_6))
	{
		VOLUME::_DELETE_VOLUME(iParam0->f_6);
	}
	if (!func_11(iParam0->f_1))
	{
		if (func_12(iParam0->f_15))
		{
			_NAMESPACE71::_0x2F901291EF177B02(iParam0->f_15, 0);
		}
	}
	if (func_13(iParam0, 2))
	{
		NETWORK::_0x78335E12DB0BF961(func_14());
	}
	func_15(iParam0, 0);
	func_16(iParam0);
	func_17(iParam0->f_2);
	func_18(iParam0, -1);
	func_19(iParam0);
	if (func_20(32768))
	{
		func_21();
	}
	func_22(iParam0);
	func_23(2);
	func_24();
	Var0 = { func_25(iParam0->f_1) };
	if (func_27(func_26(), Var0))
	{
		func_28();
	}
	if (func_29(Var0) || func_30(Var0))
	{
		func_31(Var0, 0, -1, 0);
		func_32(0);
	}
	return 1;
}

void func_6()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_7(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (Global_1132549->f_1[iParam0 /*27*/])->f_1;
}

Vector3 func_8(int iParam0)
{
	return (Global_1132549->f_1[iParam0 /*27*/])->f_7;
}

void func_9(int iParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, "relPlayerClone", 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam0->f_1, 64);
	PED::ADD_RELATIONSHIP_GROUP(&cVar0, &(iParam0->f_14));
	func_33(2, iParam0->f_14);
}

void func_10(int iParam0)
{
	if (*iParam0 != 18 && func_34(iParam0))
	{
		func_35(iParam0, 18, 1, 1);
	}
	func_36(iParam0);
	switch (*iParam0)
	{
		case 0:
			func_37(iParam0);
			break;
		case 1:
			func_38(iParam0);
			break;
		case 2:
			func_39(iParam0);
			break;
		case 3:
			func_40(iParam0);
			break;
		case 4:
			func_41(iParam0);
			break;
		case 5:
			func_42(iParam0);
			break;
		case 6:
			func_43(iParam0);
			break;
		case 7:
			func_44(iParam0);
			break;
		case 8:
			func_45(iParam0);
			break;
		case 9:
			func_46(iParam0);
			break;
		case 10:
			func_47(iParam0);
			break;
		case 11:
			func_48(iParam0);
			break;
		case 12:
			func_49(iParam0);
			break;
		case 13:
			func_50(iParam0);
			break;
		case 14:
			func_51(iParam0);
			break;
		case 15:
			func_52(iParam0);
			break;
		case 16:
			func_53(iParam0);
			break;
		case 17:
			func_54(iParam0);
			break;
		case 18:
			func_55(iParam0);
			break;
	}
}

int func_11(var uParam0)
{
	if (NETWORK::_NETWORK_HAS_PLAYER_BEEN_BANNED())
	{
		return 1;
	}
	if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE(7))
	{
		return 1;
	}
	return 0;
}

bool func_12(int iParam0)
{
	int iVar0;

	iVar0 = 6;
	if (func_56(iParam0))
	{
		iVar0 = _NAMESPACE71::_0x59FA676177DBE4C9(iParam0);
	}
	return iVar0 != 6;
}

bool func_13(int iParam0, int iParam1)
{
	return func_57(iParam0->f_78, iParam1);
}

int func_14()
{
	if (func_20(2))
	{
	}
	return 152;
}

void func_15(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_13(iParam0, 32))
		{
			func_58(iParam0, 32);
			func_59(1, 1, 0, 1, 0, 0, 1, 0, 0);
		}
	}
	else if (func_13(iParam0, 32))
	{
		func_60(iParam0, 32);
		func_59(0, 1, 0, 0, 0, 0, 0, 0, 0);
	}
}

void func_16(int iParam0)
{
	if (func_61(iParam0->f_8))
	{
		func_62(&(iParam0->f_8), 1, 1);
	}
}

void func_17(int iParam0)
{
	if (MINIGAME::_0x3EECAADAB0D9FE29() == func_63(iParam0))
	{
		MINIGAME::_0x18A0D48DF9211C07();
	}
}

void func_18(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0->f_79 != iParam1)
	{
		iParam0->f_79 = iParam1;
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
		{
			return;
		}
		iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return;
		}
		if (ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			return;
		}
		if (iParam0->f_79 == -1)
		{
			if (DECORATOR::DECOR_EXIST_ON(iVar0, "iMinigameHash"))
			{
				DECORATOR::DECOR_REMOVE(iVar0, "iMinigameHash");
			}
			if (DECORATOR::DECOR_EXIST_ON(iVar0, "iMinigameSeat"))
			{
				DECORATOR::DECOR_REMOVE(iVar0, "iMinigameSeat");
			}
		}
		else
		{
			if (!DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("iMinigameHash", 3))
			{
				return;
			}
			if (!DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("iMinigameSeat", 3))
			{
				return;
			}
			DECORATOR::DECOR_SET_INT(iVar0, "iMinigameHash", iParam0->f_1);
			DECORATOR::DECOR_SET_INT(iVar0, "iMinigameSeat", iParam1);
		}
	}
}

void func_19(int iParam0)
{
	if (func_13(iParam0, 128))
	{
		func_64(65536);
		func_60(iParam0, 128);
	}
}

bool func_20(int iParam0)
{
	return func_57(Global_1132549->f_145, iParam0);
}

void func_21()
{
	func_65(0);
}

void func_22(int iParam0)
{
	iParam0->f_78 = 0;
}

void func_23(int iParam0)
{
	if (func_57(Global_1132549->f_145, iParam0))
	{
		func_66(&(Global_1132549->f_145), iParam0);
	}
}

void func_24()
{
	func_67();
	func_23(128);
	func_23(256);
	func_23(512);
	func_23(1024);
	func_23(2048);
	func_23(4096);
	func_23(8192);
	func_23(16384);
	func_23(32768);
}

struct<2> func_25(int iParam0)
{
	return (Global_1132549->f_1[iParam0 /*27*/])->f_4;
}

struct<2> func_26()
{
	return *Global_1051163;
}

bool func_27(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

void func_28()
{
	if (!func_68())
	{
		return;
	}
	if (!func_69(*Global_1051163))
	{
		return;
	}
	func_70(Global_1051163);
}

bool func_29(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_71(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

bool func_30(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_71(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_31(struct<2> Param0, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (!func_69(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (!func_30(Param0) && !func_29(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (func_72(Param0) == 0)
	{
	}
	if ((iParam3 == 0 || iParam3 == 1) || iParam3 == 4)
	{
		if (func_71(Param0) == 3)
		{
			func_73(1, -1706799532);
		}
		else if (func_71(Param0) == 4)
		{
			func_73(0, -1706799532);
		}
	}
	if (func_71(Param0) == 3 || (func_71(Param0) == 1 && STATS::_0x01F4D242765C6B24(func_72(Param0))))
	{
		if (iParam3 != -1)
		{
			func_74(Param0, iParam3, iParam4);
		}
		else
		{
			func_74(Param0, 2, iParam4);
		}
	}
	func_75(Param0, 0);
	if (func_27(func_76(0), Param0))
	{
		func_77(1);
		func_78(0);
		func_79(0);
		func_80(1);
	}
	func_81(Param0);
	Global_1051202->f_44.f_1 = 1;
	iVar0 = func_82(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		MISC::_0x1096603B519C905F("");
	}
}

void func_32(bool bParam0)
{
	int iVar0;

	if (Global_1900670->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_83() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1900670->f_2 == 4 && Global_1900670->f_12 != Global_1900670->f_13) && !bParam0)
	{
		Global_1900670->f_1 = Global_1900670->f_2;
		Global_1900670->f_12 = Global_1900670->f_13;
		func_84(iVar0, Global_1900670->f_12);
	}
	else
	{
		Global_1900670->f_1 = 0;
		Global_1900670->f_7 = iVar0;
		Global_1900670->f_8 = func_85();
		Global_1900670->f_9 = func_86(Global_1893575->f_2);
		Global_1900670->f_11 = func_87(Global_1896610->f_41);
		if (Global_1900670->f_9 != -1 && Global_1900670->f_9 != 0)
		{
			func_88(Global_1900670->f_7, Global_1900670->f_8, Global_1900670->f_9);
		}
		else if (Global_1900670->f_11 != -1)
		{
			func_88(Global_1900670->f_7, Global_1900670->f_8, Global_1900670->f_11);
		}
		else
		{
			func_88(Global_1900670->f_7, Global_1900670->f_8, Global_1900670->f_9);
		}
	}
	Global_1900670->f_2 = 0;
}

void func_33(int iParam0, int iParam1)
{
	func_89(iParam0, iParam1, 2097877918);
	func_89(iParam0, iParam1, -1158905413);
	func_89(iParam0, iParam1, 358397622);
	func_89(iParam0, iParam1, 65999835);
	func_89(iParam0, iParam1, 814443795);
	func_89(iParam0, iParam1, 519621102);
	func_89(iParam0, iParam1, -1628223003);
	func_89(iParam0, iParam1, 1278256225);
	func_89(iParam0, iParam1, 2038628101);
	func_89(iParam0, iParam1, 1742494648);
	func_89(iParam0, iParam1, -1010166918);
	func_89(iParam0, iParam1, 660170868);
	func_89(iParam0, iParam1, -1278312096);
	func_89(iParam0, iParam1, -509158128);
	func_89(iParam0, iParam1, -226656579);
	func_89(iParam0, iParam1, 2115868159);
	func_89(iParam0, iParam1, 1495813101);
	func_89(iParam0, iParam1, 1197385818);
	func_89(iParam0, iParam1, 1015780020);
	func_89(iParam0, iParam1, -1286733825);
	func_89(iParam0, iParam1, -1670393277);
	func_89(iParam0, iParam1, -415733461);
	func_89(iParam0, iParam1, -1207924036);
	func_89(iParam0, iParam1, 497702414);
	func_89(iParam0, iParam1, 719188085);
	func_89(iParam0, iParam1, 43753457);
	func_89(iParam0, iParam1, 771290791);
	func_89(iParam0, iParam1, 20356387);
	func_89(iParam0, iParam1, 309149584);
	func_89(iParam0, iParam1, 1613781781);
	func_89(iParam0, iParam1, 1693607065);
	func_89(iParam0, iParam1, 1132176120);
	func_89(iParam0, iParam1, 869270437);
}

int func_34(int iParam0)
{
	var uVar0;

	if (func_90())
	{
		return 1;
	}
	else if (func_7(iParam0->f_1) == -1)
	{
		return 1;
	}
	else if (func_91(func_25(iParam0->f_1), 0, 2048))
	{
		return 1;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return 1;
	}
	else if (BUILTIN::VDIST(Global_35, iParam0->f_3) > 100f)
	{
		if (func_92(255))
		{
			return 0;
		}
		if (func_93())
		{
			return 0;
		}
		if (PLAYER::_0x0B7803F6F7BB43E0())
		{
			return 0;
		}
		return 1;
	}
	else if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()) && !func_13(iParam0, 1))
	{
		return 1;
	}
	if (*iParam0 > 8 && *iParam0 < 14)
	{
		if (!func_94(iParam0->f_2, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_35(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	*iParam0 = iParam1;
	if (bParam2)
	{
		iParam0->f_80 = MISC::GET_GAME_TIMER();
	}
	if (bParam3)
	{
		iParam0->f_81 = MISC::GET_GAME_TIMER();
	}
}

void func_36(int iParam0)
{
	float fVar0;

	if (ENTITY::DOES_ENTITY_EXIST(Global_34) && !ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		fVar0 = BUILTIN::VDIST(Global_35, iParam0->f_3);
		if (fVar0 < 3f)
		{
			PED::SET_PED_RESET_FLAG(Global_34, 2, true);
		}
		if (fVar0 < 6f)
		{
			PED::SET_PED_RESET_FLAG(Global_34, 219, true);
			PED::SET_PED_RESET_FLAG(Global_34, 220, true);
			PED::SET_PED_RESET_FLAG(Global_34, 187, true);
			PED::SET_PED_RESET_FLAG(Global_34, 129, true);
		}
	}
}

void func_37(int iParam0)
{
	if (!func_95())
	{
		return;
	}
	if (HUD::_DOES_TEXT_DATABASE_EXIST(func_96(iParam0->f_2)))
	{
		HUD::_TEXT_DATABASE_REQUEST(func_96(iParam0->f_2));
	}
	func_35(iParam0, 1, 1, 1);
}

void func_38(int iParam0)
{
	bool bVar0;

	bVar0 = true;
	if (iParam0->f_81 == -1 || (MISC::GET_GAME_TIMER() - iParam0->f_81) > 120000)
	{
		if (iParam0->f_81 == -1)
		{
		}
	}
	else if (func_20(4))
	{
		if (func_92(255))
		{
			bVar0 = false;
		}
	}
	else if (HUD::_DOES_TEXT_DATABASE_EXIST(func_96(iParam0->f_2)) && !HUD::_TEXT_DATABASE_HAS_LOADED(func_96(iParam0->f_2)))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		if (!func_93())
		{
			func_35(iParam0, 2, 1, 1);
		}
		else if (func_20(4))
		{
			func_35(iParam0, 6, 1, 1);
		}
	}
}

void func_39(int iParam0)
{
	float fVar0;

	if (func_97(iParam0->f_1))
	{
		func_5(iParam0);
		func_35(iParam0, 15, 1, 1);
		return;
	}
	if ((PLAYER::_0x0B7803F6F7BB43E0() && PLAYER::_0xC74EB3F2EC169F6B(-955807603) == 356437857) && PLAYER::_0xC74EB3F2EC169F6B(-769668011) == 3)
	{
		func_35(iParam0, 6, 1, 1);
		return;
	}
	if (!func_93())
	{
		fVar0 = func_98(iParam0->f_1);
		if (((BUILTIN::VDIST(Global_35, iParam0->f_3) < fVar0 && ENTITY::DOES_ENTITY_EXIST(Global_34)) && !ENTITY::IS_ENTITY_DEAD(Global_34)) && !PED::IS_PED_DEAD_OR_DYING(Global_34, true))
		{
			if (iParam0->f_77 == 0f)
			{
				MISC::GET_GROUND_Z_FOR_3D_COORD(Global_35, &(iParam0->f_77), 0);
			}
			if (func_99(iParam0))
			{
				Global_1132549->f_143 = iParam0->f_1;
				func_24();
				func_35(iParam0, 3, 1, 1);
				func_100(32768);
				func_101(9, 0);
			}
		}
		else
		{
			func_16(iParam0);
			if (iParam0->f_77 != 0f)
			{
				iParam0->f_77 = 0f;
			}
		}
	}
	else
	{
		func_16(iParam0);
		if (func_20(4))
		{
			func_35(iParam0, 6, 1, 1);
		}
	}
}

void func_40(int iParam0)
{
	float fVar0;
	struct<61> Var1;
	struct<7> Var62[7];
	int iVar112;
	int iVar113;
	int iVar114;
	int iVar115;
	int iVar116;
	int iVar117;
	struct<61> Var118;
	struct<61> Var179;

	if (func_97(iParam0->f_1))
	{
		func_5(iParam0);
		func_35(iParam0, 15, 1, 1);
		return;
	}
	if (!func_93())
	{
		fVar0 = func_98(iParam0->f_1);
		if ((((BUILTIN::VDIST(Global_35, iParam0->f_3) < fVar0 && ENTITY::DOES_ENTITY_EXIST(Global_34)) && !ENTITY::IS_ENTITY_DEAD(Global_34)) && !PED::IS_PED_DEAD_OR_DYING(Global_34, true)) && !func_102())
		{
			if (iParam0->f_77 == 0f)
			{
				MISC::GET_GROUND_Z_FOR_3D_COORD(Global_35, &(iParam0->f_77), 0);
			}
			if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_6))
			{
				func_104(&(iParam0->f_6), iParam0->f_3 + Vector(0.9f, 0f, 0f), 0f, 0f, 0f, (fVar0 + 1f), (fVar0 + 1f), 0.9f, func_103(iParam0->f_2));
			}
			if (func_105(Global_34, 0, 0, 1) == joaat("weapon_kit_camera"))
			{
				func_106(0);
			}
			if (func_20(256))
			{
				func_23(2);
				func_23(32768);
				func_21();
				if (!_NAMESPACE26::_0x0F99F6436528A089(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())))
				{
					func_35(iParam0, 6, 1, 1);
				}
				else
				{
					func_58(iParam0, 32768);
					Var1.f_44 = 4;
					Var1.f_52 = -1;
					iParam0->f_16 = { Var1 };
					StringCopy(&(iParam0->f_16.f_1), "MG_ALERT", 16);
					StringCopy(&(iParam0->f_16.f_3), "MG_ALERT_GANGMS", 16);
					iParam0->f_16.f_43 = 2;
					iParam0->f_16.f_44[0] = 717564616; /* GXTEntry: "Continue Alone" */
					iParam0->f_16.f_44[1] = 433487458; /* GXTEntry: "Cancel" */
					func_107(&(iParam0->f_16), 0);
					func_35(iParam0, 4, 1, 1);
				}
			}
			else if (func_20(128))
			{
				func_108(536870912);
				func_100(2);
				func_23(32768);
				func_21();
				if (!_NAMESPACE26::_0x0F99F6436528A089(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())))
				{
					func_35(iParam0, 6, 1, 1);
				}
				else if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
				{
					iVar116 = func_109(iParam0->f_2);
					iVar113 = _NAMESPACE26::_0xD1BF325C8252A982(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()), &Var62);
					iVar112 = 0;
					while (iVar112 <= (iVar113 - 1))
					{
						iVar115 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Var62[iVar112 /*7*/]);
						if (!NETWORK::_0x255A5EF65EDA9167(iVar115) || PLAYER::IS_PLAYER_DEAD(iVar115))
						{
						}
						else
						{
							iVar117 = func_110(iVar116, iVar115);
							if (iVar117 == -993470410)
							{
								iVar114++;
							}
						}
						iVar112++;
					}
					Var118.f_44 = 4;
					Var118.f_52 = -1;
					if (iVar114 > 0)
					{
						func_58(iParam0, 16384);
						iParam0->f_16 = { Var118 };
						StringCopy(&(iParam0->f_16.f_1), "MG_ALERT", 16);
						StringCopy(&(iParam0->f_16.f_3), "MG_ALERT_GANGLB", 16);
						iParam0->f_16.f_43 = 1;
						iParam0->f_16.f_44[0] = joaat("ib_ok");
						func_107(&(iParam0->f_16), 0);
						func_35(iParam0, 4, 1, 1);
					}
					else if (_NAMESPACE26::_0x149A2751AB66AC02(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) > func_111(iParam0->f_2))
					{
						func_58(iParam0, 8192);
						iParam0->f_16 = { Var118 };
						StringCopy(&(iParam0->f_16.f_1), "MG_ALERT", 16);
						StringCopy(&(iParam0->f_16.f_3), "MG_ALERT_GANGLM", 16);
						iParam0->f_16.f_43 = 1;
						iParam0->f_16.f_44[0] = joaat("ib_ok");
						func_107(&(iParam0->f_16), 0);
						func_35(iParam0, 4, 1, 1);
					}
					else
					{
						func_35(iParam0, 6, 1, 1);
					}
				}
				else
				{
					func_58(iParam0, 4096);
					Var179.f_44 = 4;
					Var179.f_52 = -1;
					iParam0->f_16 = { Var179 };
					StringCopy(&(iParam0->f_16.f_1), "MG_ALERT", 16);
					StringCopy(&(iParam0->f_16.f_3), "MG_ALERT_GANGMA", 16);
					iParam0->f_16.f_43 = 2;
					iParam0->f_16.f_44[0] = 717564616; /* GXTEntry: "Continue Alone" */
					iParam0->f_16.f_44[1] = 433487458; /* GXTEntry: "Cancel" */
					func_107(&(iParam0->f_16), 0);
					func_35(iParam0, 4, 1, 1);
				}
			}
			else if (!func_112())
			{
				func_67();
				func_23(32768);
				func_35(iParam0, 2, 1, 1);
			}
		}
		else
		{
			if (iParam0->f_77 != 0f)
			{
				iParam0->f_77 = 0f;
			}
			if (func_112())
			{
				func_21();
			}
			func_67();
			func_23(32768);
			func_35(iParam0, 2, 1, 1);
		}
	}
	else
	{
		if (func_112())
		{
			func_21();
		}
		func_67();
		func_23(32768);
		if (func_20(4))
		{
			func_35(iParam0, 6, 1, 1);
		}
	}
}

void func_41(int iParam0)
{
	int iVar0;

	if (_NAMESPACE76::_0x07954320D77F6A3D(iParam0->f_16) >= 3)
	{
		iVar0 = func_113(&(iParam0->f_16), -1218098620, &(iParam0->f_16.f_49), 1);
		if (func_13(iParam0, 4096) || func_13(iParam0, 32768))
		{
			if (iVar0 == 0)
			{
				func_114(1);
				_NAMESPACE76::_0x00A15B94CBA4F76F(iParam0->f_16);
				iParam0->f_16 = 0;
				func_60(iParam0, 4096);
				func_60(iParam0, 32768);
				func_35(iParam0, 5, 1, 1);
			}
			else if (iVar0 == 1)
			{
				_NAMESPACE76::_0x00A15B94CBA4F76F(iParam0->f_16);
				iParam0->f_16 = 0;
				func_115(536870912);
				func_23(2);
				func_24();
				func_60(iParam0, 4096);
				func_60(iParam0, 32768);
				func_35(iParam0, 2, 1, 1);
			}
		}
		else if (func_13(iParam0, 8192))
		{
			if (iVar0 == 0)
			{
				_NAMESPACE76::_0x00A15B94CBA4F76F(iParam0->f_16);
				iParam0->f_16 = 0;
				func_115(536870912);
				func_23(2);
				func_24();
				func_60(iParam0, 8192);
				func_35(iParam0, 2, 1, 1);
			}
		}
		else if (func_13(iParam0, 16384))
		{
			if (iVar0 == 0)
			{
				_NAMESPACE76::_0x00A15B94CBA4F76F(iParam0->f_16);
				iParam0->f_16 = 0;
				func_115(536870912);
				func_23(2);
				func_24();
				func_60(iParam0, 16384);
				func_35(iParam0, 2, 1, 1);
			}
		}
	}
}

void func_42(int iParam0)
{
	if (_NAMESPACE26::_0x0F99F6436528A089(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())))
	{
		return;
	}
	func_35(iParam0, 6, 1, 1);
}

void func_43(int iParam0)
{
	if (func_20(4))
	{
		if (func_92(255))
		{
			return;
		}
		func_58(iParam0, 1);
		func_100(2);
	}
	func_116(func_25(iParam0->f_1), 1);
	func_100(1);
	func_35(iParam0, 7, 0, 1);
}

void func_44(int iParam0)
{
	var uVar0;
	vector3 vVar1;

	if (func_13(iParam0, 512))
	{
		if (func_117())
		{
			func_58(iParam0, 2048);
		}
		if (((!func_13(iParam0, 1024) && func_13(iParam0, 2048)) && !func_117()) || Global_1099294->f_26.f_45.f_5)
		{
			vVar1 = { func_118(iParam0->f_1, &uVar0) };
			if (!func_119(vVar1))
			{
				func_120(vVar1, uVar0, 1);
			}
			func_58(iParam0, 1024);
		}
		if (func_92(255))
		{
			func_121(1);
			return;
		}
	}
	if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		func_58(iParam0, 512);
		return;
	}
	if (!func_13(iParam0, 1))
	{
		if (func_126(2, func_122(iParam0->f_2), 3, func_123(iParam0->f_1), func_25(iParam0->f_1), func_124(), -1, 0, func_125(), 0))
		{
			if (func_20(2))
			{
				func_108(536870912);
			}
			func_58(iParam0, 1);
		}
	}
	else if (!func_93())
	{
		if (!func_20(4))
		{
			if (!func_20(262144))
			{
				func_128(func_127(iParam0->f_1), 10000, 0, 0, 0, 1);
			}
			func_35(iParam0, 16, 1, 1);
		}
		func_24();
	}
	else if (func_129())
	{
		if (!SCRIPTS::_DOES_THREAD_EXIST(iParam0->f_7))
		{
			SCRIPTS::REQUEST_SCRIPT(func_130(iParam0->f_2));
		}
		if (!func_20(2))
		{
			NETWORK::_0xE546BDA1B3E288EE(func_14());
			if (NETWORK::NETWORK_IS_HOST() && !func_131(NETWORK::_0x51F33DBC1A41CBFD(), 8))
			{
				return;
			}
		}
		func_132(1);
		NETWORK::_0x0AE241A4A9ADEEEC(0);
		func_133();
		Global_1132549->f_143 = iParam0->f_1;
		if (func_20(4))
		{
			func_23(4);
			func_58(iParam0, 256);
		}
		else
		{
			func_100(512);
			func_100(1024);
		}
		func_60(iParam0, 1);
		func_58(iParam0, 2);
		if (!func_20(8))
		{
			func_58(iParam0, 32);
		}
		func_35(iParam0, 8, 0, 1);
	}
}

void func_45(int iParam0)
{
	int iVar0;
	bool bVar1;

	if (!func_13(iParam0, 4))
	{
		iVar0 = 0;
		if (func_20(2))
		{
			iVar0 = 1;
		}
		if (func_134(iParam0->f_2, iParam0->f_1, iVar0))
		{
			func_58(iParam0, 4);
		}
		else
		{
			func_135(512);
			func_35(iParam0, 16, 1, 1);
		}
	}
	else
	{
		bVar1 = false;
		if (func_94(iParam0->f_2, &bVar1))
		{
			func_136(func_25(iParam0->f_1), 1, 0, 1);
			func_138(func_137(iParam0->f_2));
			func_35(iParam0, 9, 0, 1);
		}
		else if (bVar1)
		{
			func_135(512);
			func_35(iParam0, 16, 1, 1);
		}
	}
}

void func_46(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<11> Var3;

	if (!func_93())
	{
		func_128(func_127(iParam0->f_1), 10000, 0, 0, 0, 1);
		func_35(iParam0, 16, 1, 1);
	}
	if (!func_13(iParam0, 8))
	{
		MINIGAME::_MINIGAME_REQUEST_SEAT_AT_TABLE(&(iParam0->f_9));
		func_58(iParam0, 8);
	}
	else if (!func_13(iParam0, 16))
	{
		bVar1 = false;
		if (func_139(iParam0, &bVar1, &iVar0))
		{
			if (bVar1)
			{
				func_58(iParam0, 16);
			}
			else
			{
				if (iVar0 == -908749671)
				{
					func_140(iParam0->f_2, 1320901890, 0);
				}
				else
				{
					func_140(iParam0->f_2, -1700673948, 0);
				}
				func_35(iParam0, 16, 1, 1);
			}
		}
	}
	else
	{
		iVar2 = MINIGAME::_MINIGAME_GET_NEXT_EVENT_TYPE();
		if (iVar2 == -1553724839)
		{
			Var3.f_10 = 6;
			if (MINIGAME::_MINIGAME_GET_NEXT_EVENT(&Var3, 72))
			{
				if (Var3.f_9 < 0 || Var3.f_9 >= func_111(iParam0->f_2))
				{
					func_128(func_127(iParam0->f_1), 10000, 0, 0, 0, 1);
					func_35(iParam0, 16, 1, 1);
					return;
				}
				func_18(iParam0, Var3.f_9);
				func_141(iParam0);
				func_35(iParam0, 10, 0, 1);
			}
			else
			{
				func_128(func_127(iParam0->f_1), 10000, 0, 0, 0, 1);
				func_35(iParam0, 16, 1, 1);
			}
		}
	}
}

void func_47(int iParam0)
{
	struct<36> Var0;

	if (iParam0->f_81 == -1 || (MISC::GET_GAME_TIMER() - iParam0->f_81) > 120000)
	{
		func_35(iParam0, 16, 1, 1);
	}
	else
	{
		if (!SCRIPTS::HAS_SCRIPT_LOADED(func_130(iParam0->f_2)))
		{
			return;
		}
		Var0 = -1;
		Var0.f_1 = -1;
		Var0.f_2 = -1;
		Var0.f_4 = -1;
		Var0.f_4.f_1 = -1;
		Var0.f_13 = -1;
		Var0.f_14 = -1;
		Var0.f_25 = 6;
		Var0.f_32 = -1;
		Var0.f_33 = 255;
		Var0 = { *(Global_1132549->f_1[iParam0->f_1 /*27*/]) };
		Var0.f_14 = iParam0->f_2;
		Var0.f_16 = { iParam0->f_3 };
		Var0.f_19 = func_142(iParam0->f_1);
		Var0.f_21 = iParam0->f_1;
		Var0.f_23 = Global_34;
		Var0.f_33 = 255;
		Var0.f_35 = 0;
		Var0.f_32 = iParam0->f_79;
		(Global_1132549->f_1[iParam0->f_1 /*27*/])->f_12 = iParam0->f_79;
		Var0.f_23 = iParam0->f_13;
		if (func_20(2))
		{
			Var0.f_34 = 1;
			Var0.f_20 = func_143(iParam0->f_1, 1);
		}
		else
		{
			Var0.f_34 = 0;
			Var0.f_20 = func_143(iParam0->f_1, 0);
			if (func_144(iParam0->f_1))
			{
				NETWORK::_0x29FE035D35B8589C(0);
			}
		}
		iParam0->f_7 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(func_130(iParam0->f_2), &Var0, 36, 6500);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_130(iParam0->f_2));
		func_145(iParam0->f_1);
		func_146(iParam0->f_1, 1);
		MISC::CLEAR_AREA(iParam0->f_3, 2f, 65536);
		if (SCRIPTS::_DOES_THREAD_EXIST(iParam0->f_7))
		{
			if (func_20(8))
			{
				func_100(32);
				func_35(iParam0, 12, 1, 1);
			}
			else if (func_13(iParam0, 512))
			{
				func_100(32);
				func_35(iParam0, 12, 1, 1);
			}
			else
			{
				func_147();
				func_35(iParam0, 11, 0, 1);
			}
		}
	}
}

void func_48(int iParam0)
{
	if (func_148() || func_149())
	{
		if (iParam0->f_80 == -1 || (MISC::GET_GAME_TIMER() - iParam0->f_80) > 1000)
		{
		}
		else
		{
			return;
		}
	}
	else if (iParam0->f_81 == -1 || (MISC::GET_GAME_TIMER() - iParam0->f_81) > 120000)
	{
	}
	else
	{
		return;
	}
	if (func_150(4194304))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		func_151(&(Global_1572887->f_22.f_59));
		func_115(4194304);
	}
	func_100(32);
	func_35(iParam0, 12, 1, 1);
}

void func_49(int iParam0)
{
	bool bVar0;

	if (!func_93())
	{
		func_128(func_127(iParam0->f_1), 10000, 0, 0, 0, 1);
		func_35(iParam0, 16, 1, 1);
	}
	else if (!SCRIPTS::_DOES_THREAD_EXIST(iParam0->f_7))
	{
		func_128(func_127(iParam0->f_1), 10000, 0, 0, 0, 1);
		func_35(iParam0, 16, 1, 1);
	}
	if (func_13(iParam0, 256))
	{
		bVar0 = true;
		if (!func_154(func_152(iParam0), func_153(iParam0->f_1), 1))
		{
			bVar0 = false;
		}
		if (HUD::_DOES_TEXT_DATABASE_EXIST(func_96(iParam0->f_2)) && !HUD::_TEXT_DATABASE_HAS_LOADED(func_96(iParam0->f_2)))
		{
			bVar0 = false;
		}
		if (!bVar0)
		{
			return;
		}
	}
	if (func_155(iParam0->f_1, 2))
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
		if (func_20(8))
		{
			func_23(8);
			func_35(iParam0, 13, 0, 1);
		}
		else
		{
			func_35(iParam0, 13, 1, 1);
		}
	}
}

void func_50(int iParam0)
{
	int iVar0;

	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (iParam0->f_80 == -1 || (MISC::GET_GAME_TIMER() - iParam0->f_80) > 333)
		{
			func_15(iParam0, 0);
		}
		else
		{
			return;
		}
	}
	else
	{
		iParam0->f_80 = MISC::GET_GAME_TIMER();
		if (iParam0->f_81 == -1 || (MISC::GET_GAME_TIMER() - iParam0->f_81) > 120000)
		{
		}
		else
		{
			return;
		}
	}
	iVar0 = func_156(iParam0->f_1);
	if (iVar0 == 0)
	{
		func_157(iParam0->f_1, MISC::GET_FRAME_COUNT() + 1);
	}
	else if (MISC::GET_FRAME_COUNT() >= iVar0)
	{
		CAM::DO_SCREEN_FADE_IN(1000);
		AUDIO::_0x2E399EAFBEEA74D5();
		func_35(iParam0, 14, 1, 1);
	}
}

void func_51(int iParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	if (!SCRIPTS::_DOES_THREAD_EXIST(iParam0->f_7))
	{
		bVar0 = true;
	}
	else if (func_155(iParam0->f_1, 4) && MISC::GET_FRAME_COUNT() >= func_158(iParam0->f_1))
	{
		bVar0 = true;
	}
	else if (func_159() == 1)
	{
		func_100(8);
		bVar0 = true;
	}
	if (bVar0)
	{
		if (func_93())
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(Global_1275573->f_10))
			{
			}
			if (CAM::IS_SCREEN_FADING_OUT())
			{
			}
			NETWORK::_0x236905C700FDB54D();
		}
		if (func_160() == iParam0->f_1)
		{
			if (func_144(iParam0->f_1))
			{
				if (NETWORK::_0x273E04A3A7AD1F2D() == 0)
				{
					NETWORK::_0x29FE035D35B8589C(1);
				}
			}
			iVar1 = func_161(iParam0->f_1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, false, true);
				iParam0->f_13 = iVar1;
			}
			func_162();
			func_100(64);
		}
		func_35(iParam0, 16, 1, 1);
	}
}

void func_52(int iParam0)
{
	if (!func_97(iParam0->f_1))
	{
		func_35(iParam0, 16, 1, 1);
	}
}

void func_53(int iParam0)
{
	if (func_93())
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(Global_1275573->f_10))
		{
			NETWORK::_0x236905C700FDB54D();
		}
	}
	if (func_5(iParam0))
	{
		func_35(iParam0, 17, 1, 1);
	}
}

void func_54(int iParam0)
{
	struct<30> Var0;
	struct<9> Var30;
	int iVar39;
	vector3 vVar40;
	var uVar43;
	int iVar44;

	if (iParam0->f_81 == -1 || (MISC::GET_GAME_TIMER() - iParam0->f_81) > 120000)
	{
	}
	else
	{
		if (func_92(255))
		{
			if (func_20(64))
			{
				if (func_163(255))
				{
					Var0.f_5 = 2;
					Var0.f_1 = { (Global_1132549->f_1[iParam0->f_1 /*27*/])->f_7 };
					Var0.f_16 = 1;
					Var0.f_6.f_9 = -432403087;
					Var0.f_6.f_6 = { Var0.f_1 };
					Var0.f_6 = { 1.5f, 1.5f, 5f };
					Var0.f_17.f_9 = -432403087;
					Var0.f_17.f_6 = { Var0.f_1 };
					Var0.f_17 = { 30f, 30f, 30f };
					Var30.f_5 = 1;
					if (!func_164(&(Var30.f_6), &Var30, 1))
					{
						Var30.f_6 = { (Global_1070356->f_22101.f_366[MISC::GET_RANDOM_INT_IN_RANGE(0, 16) /*272*/])->f_2 };
						Var30 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
					}
					NETWORK::_0xF94A0D5B254375DF(32);
					NETWORK::_0xEB6027FD1B4600D5(5, 1, 0.9f);
					iVar39 = 0;
					while (iVar39 <= 5)
					{
						vVar40 = { func_165(iParam0->f_1, (Global_1132549->f_1[iParam0->f_1 /*27*/])->f_12, iVar39, &uVar43) };
						if (!func_119(vVar40))
						{
							NETWORK::_0xFD1AC0B3858F224C(vVar40, uVar43);
						}
						iVar39++;
					}
					func_166(Var0, Var30, 0, 0, 0);
				}
			}
			return;
		}
		if ((func_20(8) && func_20(4)) && BUILTIN::VDIST(Global_35, iParam0->f_3) <= 100f)
		{
		}
		else
		{
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				return;
			}
			if (func_93())
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(Global_1275573->f_10))
				{
				}
				else
				{
					NETWORK::_0x236905C700FDB54D();
				}
				return;
			}
		}
	}
	iVar44 = 0;
	while (iVar44 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar44)))
		{
		}
		func_167(iVar44);
		func_168(iVar44, 0);
		func_167(iVar44);
		iVar44++;
	}
	func_23(16);
	func_169(iParam0);
	func_170();
	func_23(64);
	func_171(0);
	func_35(iParam0, 0, 1, 1);
}

void func_55(int iParam0)
{
	if (func_5(iParam0))
	{
		func_35(iParam0, 19, 1, 1);
	}
}

bool func_56(int iParam0)
{
	return iParam0 != 0;
}

bool func_57(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_58(int iParam0, int iParam1)
{
	func_172(&(iParam0->f_78), iParam1);
}

void func_59(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	if (bParam0)
	{
		Global_1070356->f_27136.f_62.f_28 = 1;
		Global_1070356->f_27136.f_62.f_29 = iParam3;
		Global_1070356->f_27136.f_62.f_26 = iParam6;
		Global_1070356->f_27136.f_62.f_27 = iParam8;
		if (bParam7)
		{
			MISC::SET_BIT(&(Global_1070356->f_27136.f_62.f_8), 18);
		}
	}
	else
	{
		Global_1070356->f_27136.f_62.f_30 = 1;
		Global_1070356->f_27136.f_62.f_33 = !bParam1;
		Global_1070356->f_27136.f_62.f_31 = iParam2;
		Global_1070356->f_27136.f_62.f_32 = iParam4;
		Global_1070356->f_27136.f_62.f_35 = iParam5;
		if (MISC::IS_BIT_SET(Global_1070356->f_27136.f_62.f_8, 18))
		{
			MISC::CLEAR_BIT(&(Global_1070356->f_27136.f_62.f_8), 18);
		}
	}
}

void func_60(int iParam0, int iParam1)
{
	func_66(&(iParam0->f_78), iParam1);
}

bool func_61(int iParam0)
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

void func_62(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_61(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_173(*uParam0);
	if (((*Global_1949759)[iVar0 /*23*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_174(iVar0);
	*uParam0 = 0;
}

int func_63(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1150372370;
		case 1:
			return 355424894;
		case 2:
			return -471827042;
		case 3:
			return -2033178055;
		default:
			break;
	}
	return 0;
}

void func_64(int iParam0)
{
	if (func_57((Global_1070356->f_19683.f_1[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*8*/])->f_7, iParam0))
	{
		func_66(&((Global_1070356->f_19683.f_1[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*8*/])->f_7), iParam0);
	}
}

void func_65(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1896726->f_382)
		{
			Global_1896726->f_382 = bParam0;
		}
	}
	else if (Global_1896726->f_382)
	{
		Global_1896726->f_382 = bParam0;
	}
}

void func_66(var uParam0, int iParam1)
{
	func_175(uParam0, iParam1);
}

void func_67()
{
	func_23(65536);
	func_23(131072);
	func_23(262144);
}

bool func_68()
{
	return func_69(*Global_1051163);
}

int func_69(struct<2> Param0)
{
	if (!func_176(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_177(Param0))
	{
		return 0;
	}
	return 1;
}

void func_70(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

int func_71(struct<2> Param0)
{
	int iVar0;

	if (!func_69(Param0))
	{
		return -1;
	}
	iVar0 = func_178(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1070356->f_17817.f_1[iVar0 /*3*/])->f_2;
}

int func_72(struct<2> Param0)
{
	return func_179(Param0);
}

int func_73(bool bParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1099294->f_16)
	{
		return 0;
	}
	if (!func_180())
	{
		return 0;
	}
	if (!func_181())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_182(&Global_0, 8);
	}
	func_182(&Global_0, 1);
	return 1;
}

void func_74(struct<2> Param0, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	vector3 vVar2;

	uVar0 = func_183(func_82(Param0));
	iVar1 = func_72(Param0);
	vVar2.f_1 = iParam3;
	vVar2.x = 0;
	vVar2.f_2 = 0;
	if (func_83() == 0)
	{
		vVar2.x = Global_265331->f_124445.f_70.f_17;
		func_184(Param0, &vVar2);
	}
	STATS::_0xD5910ECF81A2278C(uVar0, iVar1, iParam2, &vVar2);
}

void func_75(struct<2> Param0, int iParam2)
{
	if (!func_69(Param0))
	{
		return;
	}
	if (iParam2 == 0 || iParam2 == -1)
	{
		func_185(Param0);
	}
	else
	{
		func_186(Param0, iParam2);
	}
	func_187();
}

struct<2> func_76(int iParam0)
{
	return *(Global_1900718->f_1[iParam0 /*2*/]);
}

void func_77(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_188(Global_1939178, 8388608);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_189(Global_1939178, 8388608);
	}
	MISC::ENABLE_DISPATCH_SERVICE(15, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(6, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(1, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(16, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(2, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(3, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(4, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(5, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(7, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(9, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(10, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(11, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(12, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(13, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(14, bParam0);
}

void func_78(bool bParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2[24];

	iVar0 = 0;
	while (iVar0 <= 58)
	{
		iVar1 = func_190(iVar0, 1);
		if ((iVar1 == -173287735 || iVar1 == -715363719) || iVar1 == 1972833301)
		{
		}
		else
		{
			if (bParam0)
			{
				StringCopy(&cVar2, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_191(cVar2);
			}
			else
			{
				func_192();
			}
			LAW::_0xF611DE44AEB36A1D(iVar1, bParam0);
		}
		iVar0++;
	}
}

int func_79(bool bParam0)
{
	if (!bParam0 && func_193(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(752193127, bParam0, 0);
	return 1;
}

void func_80(int iParam0)
{
	Global_1900718 = (Global_1900718 || iParam0);
}

int func_81(struct<2> Param0)
{
	return func_195(func_194(Param0));
}

int func_82(var uParam0, var uParam1)
{
	return uParam0;
}

int func_83()
{
	return Global_1572887->f_13;
}

void func_84(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_85()
{
	float fVar0;

	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	if (fVar0 < 0.01f)
	{
		return 19;
	}
	if (fVar0 < 0.16f)
	{
		return 15;
	}
	if (fVar0 < 0.31f)
	{
		return 17;
	}
	if (fVar0 < 0.46f)
	{
		return 16;
	}
	if (fVar0 < 0.61f)
	{
		return 18;
	}
	return 0;
}

int func_86(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 112;
		case 2:
			return 113;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
		case 15:
			return 12;
		case 16:
			return 13;
		case 17:
			return 15;
		case 19:
			return 17;
		case 20:
			return 18;
		case 21:
			return 19;
		case 22:
			return 20;
		case 23:
			return 21;
		case 25:
			return 23;
		case 26:
			return 25;
		case 27:
			return 26;
		case 28:
			return 62;
		case 30:
			return 27;
		case 52:
			return 28;
		case 31:
			return 29;
		case 32:
			return 30;
		case 33:
			return 31;
		case 127:
			return 32;
		case 131:
			return 33;
		case 132:
			return 34;
		case 35:
			return 35;
		case 88:
			return 40;
		case 37:
			return 42;
		case 38:
			return 43;
		case 94:
			return 44;
		case 121:
			return 46;
		case 39:
			return 47;
		case 40:
			return 48;
		case 41:
			return 49;
		case 42:
			return 50;
		case 53:
			return 51;
		case 44:
			return 52;
		case 55:
			return 53;
		case 45:
			return 54;
		case 47:
			return 57;
		case 51:
			return 61;
		case 60:
			return 63;
		case 62:
			return 64;
		case 63:
			return 65;
		case 64:
			return 66;
		case 65:
			return 67;
		case 66:
			return 68;
		case 134:
			return 69;
		case 135:
			return 70;
		case 67:
			return 71;
		case 82:
			return 72;
		case 69:
			return 73;
		case 70:
			return 74;
		case 72:
			return 76;
		case 73:
			return 78;
		case 74:
			return 79;
		case 75:
			return 80;
		case 76:
			return 81;
		case 77:
			return 82;
		case 80:
			return 84;
		case 81:
			return 85;
		case 123:
			return 86;
		case 83:
			return 87;
		case 84:
			return 88;
		case 85:
			return 90;
		case 86:
			return 91;
		case 87:
			return 92;
		case 92:
			return 96;
		case 93:
			return 97;
		case 98:
			return 99;
		case 99:
			return 100;
		case 100:
			return 101;
		case 101:
			return 102;
		case 102:
			return 103;
		case 103:
			return 104;
		case 104:
			return 105;
		case 105:
			return 106;
		case 106:
			return 107;
		case 110:
			return 114;
		case 111:
			return 115;
		case 113:
			return 118;
		case 115:
			return 119;
		case 116:
			return 120;
		case 117:
			return 121;
		case 118:
			return 122;
		case 137:
			return 123;
		default:
			break;
	}
	return 0;
}

int func_87(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 170;
		case 1:
			return 171;
		case 2:
			return 172;
		case 3:
			return 173;
		case 4:
			return 174;
		case 5:
			return 175;
		case 6:
			return 175;
		case 7:
			return 175;
		case 8:
			return 176;
		case 9:
			return 177;
		case 10:
			return 178;
		case 11:
			return 179;
		case 12:
			return 180;
		case 13:
			return 181;
		case 14:
			return 182;
		case 15:
			return 183;
		case 16:
			return 184;
		default:
			break;
	}
	return -1;
}

void func_88(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

void func_89(int iParam0, int iParam1, int iParam2)
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, iParam1, iParam2);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, iParam2, iParam1);
}

bool func_90()
{
	return &Global_1132549 == 3;
}

int func_91(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265331->f_124445.f_134 & 8 != 0)
	{
		Global_1070356->f_26837 = 1;
		return 1;
	}
	if (func_69(*Global_1051163) && !func_27(*Global_1051163, Param0))
	{
		Global_1070356->f_26837 = 2;
		return 1;
	}
	if (iParam2 != 0 && func_196(iParam2))
	{
		return 1;
	}
	if (iParam3 != 0 && func_197(iParam3, 255))
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
	if (func_198())
	{
		Global_1070356->f_26837 = 7;
		return 1;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_69(*Global_1051163))
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

bool func_92(int iParam0)
{
	return func_199(1, iParam0);
}

bool func_93()
{
	return Global_1572887->f_106.f_75 != 1;
}

int func_94(int iParam0, bool bParam1)
{
	if (MINIGAME::_MINIGAME_IS_CONNECTED_TO_SERVER(func_63(iParam0)))
	{
		return 1;
	}
	else if (MINIGAME::_0x39654E1F68B78287())
	{
		*bParam1 = 1;
		return 0;
	}
	return 0;
}

int func_95()
{
	if (&Global_1132549 == 2)
	{
		return 1;
	}
	return 0;
}

char* func_96(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "MGPKR";
		default:
			break;
	}
	return "";
}

bool func_97(int iParam0)
{
	return (Global_1132549->f_1[iParam0 /*27*/])->f_14 == 2;
}

float func_98(int iParam0)
{
	return (Global_1132549->f_1[iParam0 /*27*/])->f_6;
}

int func_99(int iParam0)
{
	float fVar0;

	fVar0 = func_98(iParam0->f_1);
	if (!func_61(iParam0->f_8) && func_200(iParam0))
	{
		if (!func_12(iParam0->f_15))
		{
			iParam0->f_8 = func_201(MISC::_CREATE_VAR_STRING(2, "NET_MG_CONTEXT_POKER"), joaat("INPUT_CONTEXT_Y"), iParam0->f_3, fVar0, 1, 0, 0, 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
		}
	}
	else
	{
		if (!func_202(iParam0))
		{
			func_203(iParam0->f_8, 0, 1, 1);
		}
		else
		{
			func_203(iParam0->f_8, 1, 1, 1);
		}
		if (func_204(iParam0->f_8, 1))
		{
			func_16(iParam0);
			return 1;
		}
	}
	return 0;
}

void func_100(int iParam0)
{
	if (!func_57(Global_1132549->f_145, iParam0))
	{
		func_172(&(Global_1132549->f_145), iParam0);
	}
}

int func_101(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_205();
	}
	if (!func_206(bParam1, bParam1, !bParam1))
	{
		return 0;
	}
	func_207(iParam0);
	Global_1896726->f_386 = 1;
	Global_1896726->f_387 = bParam1;
	return 1;
}

int func_102()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && TASK::_0x038B1F1674F0E242(Global_34))
	{
		return 1;
	}
	return 0;
}

char* func_103(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "Invalid";
		case 0:
			return "Blackjack";
		case 1:
			return "Dominoes";
		case 2:
			return "Poker";
		case 3:
			return "Five Finger Fillet";
		case 4:
			return "Milking Cows";
		case 5:
			return "Cleaning Stalls";
		case 6:
			return "Fence Building";
		case 7:
			return "Max Minigames";
	}
	return "Unknown Minigame";
}

void func_104(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, float fParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, fParam10);
}

int func_105(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

void func_106(bool bParam0)
{
	if (func_208())
	{
		Global_1956186 = 1;
	}
	if (func_209(-92416669))
	{
	}
	if (bParam0 && Global_1939178->f_38 == joaat("weapon_kit_camera"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("weapon_unarmed"), true, 0, false, false);
		Global_1939178->f_38 = joaat("weapon_unarmed");
	}
}

void func_107(var uParam0, bool bParam1)
{
	struct<16> Var0;
	struct<4> Var19;
	struct<4> Var23;
	struct<4> Var27;
	struct<4> Var31;
	char[] cVar35[8];

	*uParam0 = 0;
	func_210(&(uParam0->f_49), 0, 0);
	Var19 = &uParam0->f_44[0];
	Var19.f_3 = uParam0->f_42;
	Var0.f_3 = { Var19 };
	if (uParam0->f_43 > 1)
	{
		Var23 = &uParam0->f_44[1];
		Var23.f_3 = uParam0->f_42;
		Var0.f_7 = { Var23 };
		if (uParam0->f_43 > 2)
		{
			Var27 = &uParam0->f_44[2];
			Var27.f_3 = uParam0->f_42;
			Var0.f_11 = { Var27 };
			if (uParam0->f_43 > 3)
			{
				Var31 = &uParam0->f_44[3];
				Var31.f_3 = uParam0->f_42;
				Var0.f_15 = { Var31 };
			}
		}
	}
	Var0.f_2 = 0;
	if (uParam0->f_41)
	{
		Var0 = "DEATH_FAIL_RESPAWN_SOUNDS";
		Var0.f_1 = "TITLE_SCREEN_ENTER";
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_5)))
	{
		cVar35 = MISC::_CREATE_VAR_STRING(10, &(uParam0->f_3), &(uParam0->f_5));
	}
	else
	{
		cVar35 = func_211(uParam0->f_3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_7)))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_23)))
		{
			if (uParam0->f_39)
			{
				cVar35 = MISC::_CREATE_VAR_STRING(42, cVar35, func_212(&(uParam0->f_7), joaat("COLOR_PURE_WHITE")), func_212(&(uParam0->f_23), joaat("COLOR_PURE_WHITE")), uParam0->f_40);
			}
			else
			{
				cVar35 = MISC::_CREATE_VAR_STRING(42, cVar35, func_212(&(uParam0->f_7), joaat("COLOR_PURE_WHITE")), func_212(&(uParam0->f_23), joaat("COLOR_PURE_WHITE")));
			}
		}
		else if (uParam0->f_39)
		{
			cVar35 = MISC::_CREATE_VAR_STRING(10, cVar35, func_212(&(uParam0->f_7), joaat("COLOR_PURE_WHITE")), uParam0->f_40);
		}
		else
		{
			cVar35 = MISC::_CREATE_VAR_STRING(10, cVar35, func_212(&(uParam0->f_7), joaat("COLOR_PURE_WHITE")));
		}
	}
	else if (uParam0->f_39)
	{
		cVar35 = MISC::_CREATE_VAR_STRING(2, cVar35, uParam0->f_40);
	}
	if (bParam1)
	{
		*uParam0 = func_213(&Var0, &(uParam0->f_1), cVar35, 0, 1);
	}
	else
	{
		*uParam0 = func_214(&Var0, &(uParam0->f_1), cVar35, 0, 0, 1);
	}
}

void func_108(int iParam0)
{
	func_215(&(Global_1572887->f_106.f_15), iParam0);
}

int func_109(int iParam0)
{
	if (iParam0 == 2)
	{
		return -471827042;
	}
	return 0;
}

int func_110(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return -1;
	}
	iVar1 = iParam1;
	if (!func_216(iParam0, &iVar0))
	{
		return -1;
	}
	return &(((*Global_1055966)[iVar1 /*436*/])->f_431[iVar0]);
}

int func_111(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 6;
		default:
			break;
	}
	return 1;
}

bool func_112()
{
	return Global_1896726->f_382;
}

int func_113(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = -1;
	if (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iParam1))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iParam1, &vVar1))
		{
			if (func_217(uParam2))
			{
				if (func_218(uParam2, 0, 0) > 250)
				{
					switch (vVar1.x)
					{
						case -1203660660:
							if (vVar1.y == *uParam0)
							{
								if (vVar1.z == 2074623703)
								{
									if (bParam3)
									{
										_NAMESPACE76::_0x00A15B94CBA4F76F(*uParam0);
										*uParam0 = 0;
									}
									iVar0 = 0;
								}
								else if (vVar1.z == 1400745903)
								{
									if (bParam3)
									{
										_NAMESPACE76::_0x00A15B94CBA4F76F(*uParam0);
										*uParam0 = 0;
									}
									iVar0 = 1;
								}
								else if (vVar1.z == 444632721)
								{
									if (bParam3)
									{
										_NAMESPACE76::_0x00A15B94CBA4F76F(*uParam0);
										*uParam0 = 0;
									}
									iVar0 = 2;
								}
							}
							break;
					}
				}
				UIEVENTS::_EVENT_MANAGER_POP_EVENT(iParam1);
			}
			else
			{
				func_210(uParam2, 0, 0);
			}
		}
	}
	return iVar0;
}

void func_114(int iParam0)
{
	int iVar0;
	int iVar1;

	POSSE::_0xC08AFF658B2E51DA(&iVar0);
	if (iVar0 != 0)
	{
		func_215(&(Global_1182289->f_3), 32);
		func_215(&(Global_1182289->f_4), 12);
		Global_1182289->f_496 = iVar0;
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()) && _NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
		{
			func_215(&(Global_1182289->f_4), 2);
		}
		POSSE::_0xC08BFF658B2E51DA(0);
		Global_1182289->f_5[5] = 0;
		func_215(Global_1182289->f_5[5], 1);
	}
	Global_1182289->f_5[3] = 0;
	func_215(Global_1182289->f_5[3], 1);
	iVar1 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iVar1))
	{
		func_215(Global_1182289->f_5[3], 6);
		return;
	}
	if (!_NAMESPACE26::_0x0F99F6436528A089(iVar1))
	{
		func_215(Global_1182289->f_5[3], 6);
		return;
	}
	_NAMESPACE26::_0x0A04A07BC3074EDB(iParam0);
}

void func_115(int iParam0)
{
	func_219(&(Global_1572887->f_106.f_15), iParam0);
}

void func_116(struct<2> Param0, bool bParam2)
{
	if (!func_69(Param0))
	{
		return;
	}
	if (!func_220(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_221(Param0);
	}
	func_75(Param0, 1);
	bParam2 = bParam2;
}

bool func_117()
{
	return (func_222(2) && func_223());
}

Vector3 func_118(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 109.6245f;
			return -811.0934f, -1316.408f, 42.678f;
		case 1:
			*uParam1 = 164.0893f;
			return 2631.803f, -1224.319f, 52.3804f;
		case 2:
			*uParam1 = 333.5677f;
			return -328.6093f, -359.6321f, 87.0844f;
		case 3:
			*uParam1 = 301.7008f;
			return -5512.288f, -2914.685f, 0.6403f;
		case 4:
			*uParam1 = 25.8346f;
			return -303.778f, 799.1457f, 118.0019f;
		default:
			break;
	}
	return func_8(iParam0);
}

int func_119(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_120(vector3 vParam0, var uParam3, bool bParam4)
{
	if (func_224(vParam0, uParam3))
	{
		func_225(1, bParam4);
	}
}

void func_121(bool bParam0)
{
	if (!bParam0)
	{
		func_226(17);
	}
	else
	{
		func_227(17);
	}
}

int func_122(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 4;
		case 2:
			return 6;
		case 0:
			return 4;
		case 3:
			return 2;
		default:
			break;
	}
	return 1;
}

int func_123(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 9;
		default:
			break;
	}
	return -1;
}

int func_124()
{
	if (func_20(2))
	{
		return 268435457;
	}
	return 268435456;
}

int func_125()
{
	if (func_20(2))
	{
		return 2;
	}
	return 0;
}

int func_126(int iParam0, var uParam1, int iParam2, int iParam3, struct<2> Param4, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10)
{
	struct<7> Var0;
	char cVar57[64];
	struct<56> Var65;

	if (!func_228(iParam2, iParam3))
	{
		return 0;
	}
	if (func_93() && Global_1572887->f_106.f_75 != 8)
	{
		return 0;
	}
	if (!func_229(Global_1275573->f_10))
	{
		return 0;
	}
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_5 = 1;
	Var0.f_6 = 7;
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	Var0.f_2 = 1;
	Var0.f_3 = { Param4 };
	func_230(&Var0);
	func_231(iParam2, iParam3, iParam7, 1);
	func_232(Param4, 1);
	func_233(iParam6);
	func_234(bParam9);
	func_235(iParam10, 1);
	if ((func_69(Param4) && !func_236()) && &Global_1199546 == -1)
	{
		func_237(Param4);
	}
	NETWORK::_0x0AE241A4A9ADEEEC(1);
	if (iParam2 != 2)
	{
		func_238();
	}
	if (func_236())
	{
		func_239(Param4);
	}
	else if (iParam2 == 3)
	{
		if (!func_150(268435456))
		{
			if (!UIAPPS::_IS_APP_ACTIVE(1433015236))
			{
				func_101(1, 0);
			}
		}
	}
	else
	{
		if (iParam2 == 2)
		{
			Var65 = 255;
			Var65.f_18 = 2147483647;
			Var65.f_21.f_2 = -504335712;
			Var65.f_21.f_4 = 3;
			Var65.f_26 = -1;
			Var65.f_30 = 1;
			Var65.f_31 = 1;
			Var65.f_32 = 1;
			Var65.f_33 = 32;
			Var65.f_34 = 1;
			Var65.f_35 = -2;
			Var65.f_47.f_5 = -1;
			Var65.f_53 = -1;
			Var65.f_53.f_1 = -1;
			Var65.f_55.f_3 = -1;
			func_240(&Var65, iParam3, -1, -1, 3);
			StringCopy(&cVar57, func_212(&(Var65.f_37), joaat("COLOR_PURE_WHITE")), 64);
		}
		else if (iParam2 == 1)
		{
			StringCopy(&cVar57, MISC::_CREATE_VAR_STRING(2, func_241(iParam3)), 64);
		}
		else
		{
			StringCopy(&cVar57, MISC::_CREATE_VAR_STRING(2, func_243(func_242(), iParam3)), 64);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1572887->f_106.f_133, &cVar57);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1572887->f_106.f_135, MISC::_CREATE_VAR_STRING(2, "NM_PLAYLIST_MATCHMADE_PLAYERS", 1));
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_136);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_137);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_138);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_139);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_140);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_141);
	}
	if ((!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()) && func_244(255, 0)) && !bParam8)
	{
		func_245("NM_MATCHMAKING_WARNING");
	}
	func_246(9);
	return 1;
}

char* func_127(int iParam0)
{
	int iVar0;

	iVar0 = func_7(iParam0);
	switch (iVar0)
	{
		case 2:
			return MISC::_CREATE_VAR_STRING(10, "MG_FAILED_LAUNCH", "MG_POKER");
		default:
			break;
	}
	return "";
}

var func_128(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_129()
{
	return func_131(Global_1572887->f_7, 1);
}

char* func_130(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "tg_p";
		default:
			break;
	}
	return "";
}

bool func_131(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_132(bool bParam0)
{
	if (Global_1070356->f_27244.f_1 != SCRIPTS::GET_ID_OF_THIS_THREAD() && !bParam0)
	{
		return;
	}
	if (Global_1070356->f_27244.f_1 == 0)
	{
		return;
	}
	func_215(&(Global_1070356->f_27244.f_2), 2);
}

void func_133()
{
	if (Global_1572887->f_6)
	{
		Global_1572887->f_6 = 0;
		TELEMETRY::_0x3180E991D4B8F248();
	}
}

int func_134(int iParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (iParam2 == 1)
	{
		uVar0 = func_247(iParam1, 1);
	}
	else
	{
		uVar0 = func_247(iParam1, 0);
	}
	if (MINIGAME::_0x3FFE60DD8A936551(func_63(iParam0), uVar0))
	{
		return 1;
	}
	return 0;
}

void func_135(int iParam0)
{
	func_215(&(Global_1572887->f_106.f_16), iParam0);
}

void func_136(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<18> Var1;

	if (!func_69(Param0))
	{
		return;
	}
	if (!func_29(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_248(Param0);
	}
	if (!func_69(func_76(0)))
	{
		func_75(Param0, 3);
		func_77(bParam3);
		func_78(!bParam4);
		func_249(Param0, -1);
		if (bParam2 && !func_250(2))
		{
			func_182(&Global_0, 1024);
		}
		func_80(1);
	}
	else
	{
		func_249(Param0, -1);
		func_75(Param0, 4);
		func_251(Param0, 0);
	}
	Global_1051202->f_44.f_1 = 1;
	iVar0 = func_82(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		if (func_252(Param0, &Var1))
		{
			MISC::_0x1096603B519C905F(&(Var1.f_17));
		}
	}
}

int func_137(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 9;
		default:
			break;
	}
	return 9;
}

void func_138(var uParam0)
{
	int iVar0;
	var uVar1;

	if ((Global_1900670->f_1 == 2 || Global_1900670->f_1 == 5) || Global_1900670->f_1 == 3)
	{
		return;
	}
	iVar0 = 0;
	if (func_83() != -1)
	{
		iVar0 = 1;
	}
	uVar1 = func_86(Global_1893575->f_2);
	Global_1900670->f_1 = 3;
	Global_1900670->f_2 = 0;
	Global_1900670->f_7 = iVar0;
	Global_1900670->f_8 = uParam0;
	Global_1900670->f_9 = uVar1;
	if (Global_1900670->f_9 != -1 && Global_1900670->f_9 != 0)
	{
		func_88(Global_1900670->f_7, Global_1900670->f_8, Global_1900670->f_9);
	}
	else if (Global_1900670->f_11 != -1)
	{
		func_88(Global_1900670->f_7, Global_1900670->f_8, Global_1900670->f_11);
	}
}

int func_139(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	struct<6> Var1;
	int iVar7;

	iVar7 = 0;
	iVar7 = 0;
	while (iVar7 <= (SCRIPTS::GET_NUMBER_OF_EVENTS(1) - 1))
	{
		iVar0 = SCRIPTS::GET_EVENT_AT_INDEX(1, iVar7);
		switch (iVar0)
		{
			case -1126217932:
				if (SCRIPTS::GET_EVENT_DATA(1, iVar7, &Var1, 6))
				{
					if (((iParam0->f_9 == Var1 && iParam0->f_9.f_1 == Var1.f_1) && iParam0->f_9.f_2 == Var1.f_2) && iParam0->f_9.f_3 == Var1.f_3)
					{
						*iParam2 = Var1.f_5;
						if (Var1.f_4)
						{
							*bParam1 = 1;
						}
						return 1;
					}
				}
				break;
		}
		iVar7++;
	}
	return 0;
}

void func_140(var uParam0, int iParam1, int iParam2)
{
	Global_1132695->f_2.f_1 = uParam0;
	Global_1132695->f_2 = iParam1;
	Global_1132695->f_2.f_2 = iParam2;
}

void func_141(int iParam0)
{
	if (!func_13(iParam0, 128))
	{
		func_253(65536);
		func_58(iParam0, 128);
	}
}

var func_142(int iParam0)
{
	return (Global_1132549->f_1[iParam0 /*27*/])->f_10;
}

var func_143(int iParam0, int iParam1)
{
	return ((Global_1132549->f_1[iParam0 /*27*/])->f_15[iParam1 /*3*/])->f_1;
}

bool func_144(int iParam0)
{
	return (Global_1132549->f_1[iParam0 /*27*/])->f_1 == 2;
}

void func_145(int iParam0)
{
	if (Global_1132549->f_137 != iParam0)
	{
		Global_1132549->f_137 = iParam0;
	}
}

void func_146(int iParam0, int iParam1)
{
	if (iParam0 != Global_1132549->f_137)
	{
		return;
	}
	if (!func_57(Global_1132549->f_137.f_1, iParam1))
	{
		func_172(&(Global_1132549->f_137.f_1), iParam1);
	}
}

void func_147()
{
	Global_1070356->f_27136.f_105 = MISC::GET_GAME_TIMER();
}

int func_148()
{
	if (Global_1070356->f_27136.f_62.f_42 >= 9)
	{
		return 1;
	}
	return 0;
}

int func_149()
{
	int iVar0;
	int iVar1;

	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = (iVar0 - Global_1070356->f_27136.f_105);
	if (iVar1 < Global_1901929->f_1.f_36)
	{
		return 0;
	}
	return 1;
}

bool func_150(int iParam0)
{
	return (Global_1572887->f_106.f_15 && iParam0) != 0;
}

void func_151(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (CAM::DOES_CAM_EXIST(uParam0[iVar0]))
		{
			CAM::DESTROY_CAM(uParam0[iVar0], false);
		}
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
	if (uParam0->f_20 != -1)
	{
		if (ANIMSCENE::_0x25557E324489393C(uParam0->f_20))
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_20, "LIVE"))
			{
				ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_20, "LIVE");
			}
			ANIMSCENE::ABORT_ANIM_SCENE(uParam0->f_20, false);
			ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_20, 0);
			ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_20);
		}
	}
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_12 = -1;
	uParam0->f_13 = { 0f, 0f, 0f };
	uParam0->f_17 = 0;
	uParam0->f_16 = 0;
	func_254(&(uParam0->f_18));
	uParam0->f_20 = -1;
	uParam0->f_21 = -1;
	uParam0->f_22 = 0;
}

char* func_152(int iParam0)
{
	switch (iParam0->f_1)
	{
		case 0:
			return "bla_saloon_int";
		case 1:
			return "new_saloon_int_main";
		case 2:
			return "swa_depot01_int";
		case 3:
			return "tum_saloon_int_gamble";
		case 4:
			return "val_saloon_int";
		default:
			break;
	}
	return "";
}

Vector3 func_153(int iParam0)
{
	struct<10> Var0;

	if (iParam0 == -1)
	{
	}
	Var0 = { func_255(iParam0) };
	if (func_119(Var0.f_5))
	{
	}
	return Var0.f_5;
}

int func_154(var uParam0, vector3 vParam1, bool bParam4)
{
	int iVar0;

	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(vParam1);
	if (INTERIOR::IS_VALID_INTERIOR(iVar0))
	{
		if (INTERIOR::IS_INTERIOR_READY(iVar0))
		{
			if (bParam4)
			{
				INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, uParam0, 0);
			}
			else
			{
				INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, uParam0, 1);
			}
			return 1;
		}
	}
	return 0;
}

int func_155(int iParam0, int iParam1)
{
	if (iParam0 != Global_1132549->f_137)
	{
		return 0;
	}
	return func_57(Global_1132549->f_137.f_1, iParam1);
}

int func_156(int iParam0)
{
	if (iParam0 != Global_1132549->f_137)
	{
		return 0;
	}
	return Global_1132549->f_137.f_2;
}

void func_157(int iParam0, var uParam1)
{
	if (iParam0 != Global_1132549->f_137)
	{
		return;
	}
	Global_1132549->f_137.f_2 = uParam1;
}

int func_158(int iParam0)
{
	if (iParam0 != Global_1132549->f_137)
	{
		return 0;
	}
	return Global_1132549->f_137.f_3;
}

int func_159()
{
	if (!func_131(Global_1572887->f_248.f_63, 8))
	{
		return 2;
	}
	if (Global_1572887->f_248.f_2 != 4)
	{
		return 1;
	}
	if (Global_1572887->f_248 > 7 && Global_1572887->f_248 < 23)
	{
		return 0;
	}
	return 2;
}

int func_160()
{
	return Global_1132549->f_137;
}

int func_161(int iParam0)
{
	if (iParam0 != Global_1132549->f_137)
	{
		return 0;
	}
	return Global_1132549->f_137.f_4;
}

void func_162()
{
	struct<5> Var0;

	Var0 = -1;
	Global_1132549->f_137 = { Var0 };
}

bool func_163(int iParam0)
{
	return func_199(47, iParam0);
}

int func_164(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 16);
	if (bParam2)
	{
		iVar1 = 0;
		iVar2 = -1;
		fVar3 = 0f;
		iVar1 = 0;
		while (iVar1 <= 15)
		{
			fVar4 = BUILTIN::VDIST(Global_1275573->f_17, (Global_1070356->f_22101.f_366[iVar1 /*272*/])->f_2);
			if (fVar4 < fVar3 || iVar2 == -1)
			{
				iVar2 = iVar1;
				fVar3 = fVar4;
			}
			iVar1++;
		}
		iVar0 = iVar2;
	}
	iVar0 = &Global_1070356->f_22101.f_366[iVar0 /*272*/];
	iVar5 = func_256(iVar0);
	if (iVar5 <= 0)
	{
		return 0;
	}
	else
	{
		iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar5);
		if (func_257(iVar0, iVar6, uParam0, uParam1))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_165(int iParam0, int iParam1, int iParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							*uParam3 = -25.54f;
							return -805.4941f, -1313.922f, 43.5456f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							*uParam3 = -122.05f;
							return -805.842f, -1316.401f, 43.5497f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							*uParam3 = -83.36f;
							return -806.1149f, -1322.44f, 42.6598f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 0:
							*uParam3 = -99.05f;
							return -805.8666f, -1324.778f, 42.6619f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam2)
					{
						case 0:
							*uParam3 = 170.59f;
							return -809.6326f, -1330.971f, 42.6642f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam2)
					{
						case 0:
							*uParam3 = 171.6245f;
							return -812.5016f, -1330.454f, 42.6573f;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							*uParam3 = 6.13f;
							return 2636.574f, -1216.953f, 52.3057f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							*uParam3 = -16.87f;
							return 2634.233f, -1216.81f, 52.2891f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							*uParam3 = -2.64f;
							return 2631.507f, -1216.629f, 52.2713f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 0:
							*uParam3 = 60.25f;
							return 2622.006f, -1222.144f, 52.2653f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam2)
					{
						case 0:
							*uParam3 = 92.26f;
							return 2621.835f, -1225.913f, 52.3185f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam2)
					{
						case 0:
							*uParam3 = 93.46f;
							return 2621.801f, -1229.233f, 52.3836f;
						default:
							break;
					}
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							*uParam3 = -20.56f;
							return -323.8307f, -353.4378f, 87.0216f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							*uParam3 = -82.44f;
							return -325.278f, -351.2291f, 87.051f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							*uParam3 = 46.4f;
							return -329.2828f, -349.7032f, 87.0626f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 0:
							*uParam3 = 31.32f;
							return -332.8652f, -351.3506f, 87.0617f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam2)
					{
						case 0:
							*uParam3 = 39.52f;
							return -336.8102f, -353.0264f, 87.0052f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam2)
					{
						case 0:
							*uParam3 = 24.63f;
							return -341.9986f, -355.8522f, 87.0358f;
						default:
							break;
					}
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							*uParam3 = -178.99f;
							return -5502.251f, -2913.421f, -3.391f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							*uParam3 = 154.78f;
							return -5507.202f, -2919.03f, -3.2789f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							*uParam3 = -136.18f;
							return -5518.356f, -2919.355f, -3.4585f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 0:
							*uParam3 = -170.03f;
							return -5523.738f, -2910.123f, -3.501f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam2)
					{
						case 0:
							*uParam3 = 33.86f;
							return -5524.939f, -2906.375f, -3.6494f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam2)
					{
						case 0:
							*uParam3 = 31.68f;
							return -5518.795f, -2901.151f, -3.4988f;
						default:
							break;
					}
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							*uParam3 = -164.32f;
							return -305.3323f, 796.2567f, 117.9622f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							*uParam3 = -167.42f;
							return -303.728f, 796.605f, 117.9601f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							*uParam3 = -164.13f;
							return -302.3611f, 796.8258f, 117.9617f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 0:
							*uParam3 = -170.44f;
							return -311.0975f, 795.3132f, 117.9633f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam2)
					{
						case 0:
							*uParam3 = -164.6f;
							return -314.7917f, 798.2899f, 116.6698f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam2)
					{
						case 0:
							*uParam3 = 41.65f;
							return -317.6014f, 808.0834f, 116.9352f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_166(struct<30> Param0, struct<9> Param30, int iParam39, int iParam40, int iParam41)
{
	if (func_163(255))
	{
		if ((Param0.f_17.f_9 != -1612834106 && Param0.f_17.f_9 != -432403087) && Param0.f_17.f_9 != 665633627)
		{
			Param0.f_17.f_9 = -432403087;
		}
		if (Param0.f_16)
		{
			if ((Param0.f_6.f_9 != -1612834106 && Param0.f_6.f_9 != -432403087) && Param0.f_6.f_9 != 665633627)
			{
				Param0.f_6.f_9 = -432403087;
			}
		}
		func_258(&(Global_1099294->f_516));
		Global_1099294->f_516 = { Param0 };
		func_259(&(Global_1099294->f_555));
		Global_1099294->f_555 = { Param30 };
		Global_1099294->f_586 = iParam39;
		Global_1099294->f_587 = iParam40;
		Global_1099294->f_588 = iParam41;
		func_260(Global_1099294->f_516, 36);
		func_261(Global_1099294->f_555, 36);
		func_226(47);
		return 1;
	}
	return 0;
}

void func_167(int iParam0)
{
	if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_5 != 0)
	{
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_5 = 0;
		func_262(iParam0);
	}
}

void func_168(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_19946.f_260), iParam0))
		{
			SCRIPTS::_0x31010318BA9897AC(&(Global_1070356->f_19946.f_260), iParam0);
		}
	}
	else if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_19946.f_260), iParam0))
	{
		SCRIPTS::_0xD426E2E3288469D6(&(Global_1070356->f_19946.f_260), iParam0);
		func_262(iParam0);
	}
}

void func_169(int iParam0)
{
	char* sVar0;

	if (func_12(iParam0->f_15))
	{
		return;
	}
	if (!func_263())
	{
		return;
	}
	sVar0 = func_264(Global_1132695->f_2.f_1, Global_1132695->f_2, Global_1132695->f_2.f_2);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	iParam0->f_15 = func_128(sVar0, 10000, 0, 0, 0, 1);
}

void func_170()
{
	Global_1132695->f_2.f_1 = -1;
	Global_1132695->f_2 = 0;
	Global_1132695->f_2.f_2 = 0;
}

void func_171(bool bParam0)
{
	if (bParam0)
	{
		func_227(48);
	}
	else
	{
		func_226(48);
	}
}

void func_172(var uParam0, int iParam1)
{
	func_265(uParam0, iParam1);
}

int func_173(int iParam0)
{
	return iParam0;
}

void func_174(int iParam0)
{
	if (!func_266(iParam0))
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

void func_175(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_176(int iParam0)
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

int func_177(int iParam0)
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

int func_178(struct<2> Param0)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;

	if (Global_1070356->f_17817 <= 0)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_267(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1070356->f_17817 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_267(*(Global_1070356->f_17817.f_1[iVar8 /*3*/]), &vVar3);
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

int func_179(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_267(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

bool func_180()
{
	return !Global_1572887->f_9;
}

int func_181()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return 1;
	}
	return 0;
}

void func_182(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_183(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -1690863991;
		case 3:
			return 1286170048;
		case 4:
			return -342492333;
		case 5:
			return 1140089012;
		case 8:
			return 634321112;
		case 7:
			return -2079273178;
		case 6:
			return -147846054;
		default:
			break;
	}
	return 0;
}

void func_184(struct<2> Param0, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	iVar2 = -1;
	iVar3 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (iVar3 == 0)
	{
		return;
	}
	switch (func_82(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_269(func_268(Param0));
			iVar5 = func_270(iVar4);
			if (!func_271(iVar5, 0))
			{
				return;
			}
			break;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (&Global_1100950->f_33[iVar1 /*16*/] == iVar3)
		{
			iVar2 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	if (iVar2 == -1)
	{
		return;
	}
	iVar0 = (Global_1100950->f_33[iVar2 /*16*/])->f_3.f_1;
	if (iVar0 == -1)
	{
		return;
	}
	uParam2->f_2 = Global_1111121[iVar0 /*42*/];
}

int func_185(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_178(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_272(iVar0);
}

int func_186(struct<2> Param0, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;

	if (Global_1070356->f_17817 >= 32)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_267(Param0, &vVar0))
	{
		return -1;
	}
	vVar6 = -1;
	vVar6.f_1 = -1;
	vVar6 = { Param0 };
	vVar6.f_2 = iParam2;
	if (Global_1070356->f_17817 == 0)
	{
		*(Global_1070356->f_17817.f_1[Global_1070356->f_17817 /*3*/]) = { vVar6 };
		Global_1070356->f_17817++;
		return 0;
	}
	iVar9 = 0;
	while (iVar9 < Global_1070356->f_17817)
	{
		func_267(*(Global_1070356->f_17817.f_1[iVar9 /*3*/]), &vVar3);
		if (vVar0.x == vVar3.x)
		{
			*(Global_1070356->f_17817.f_1[iVar9 /*3*/]) = { vVar6 };
			return iVar9;
		}
		else if (vVar0.x > vVar3.x)
		{
			iVar9++;
		}
		else if (vVar0.x < vVar3.x)
		{
			func_273(iVar9);
			*(Global_1070356->f_17817.f_1[iVar9 /*3*/]) = { vVar6 };
			return iVar9;
		}
	}
	if (Global_1070356->f_17817 < 31)
	{
		iVar9 = Global_1070356->f_17817;
		*(Global_1070356->f_17817.f_1[iVar9 /*3*/]) = { vVar6 };
		Global_1070356->f_17817++;
		if (Global_1070356->f_17817 > 32)
		{
			Global_1070356->f_17817 = 32;
		}
		return iVar9;
	}
	return -1;
}

void func_187()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	while (iVar0 < Global_1070356->f_17817)
	{
		if (func_267(*(Global_1070356->f_17817.f_1[iVar0 /*3*/]), &vVar1))
		{
		}
		iVar0++;
	}
}

void func_188(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_189(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_190(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1746095559 /* GXTEntry: "Arson" */;
		case 1:
			return 195938434 /* GXTEntry: "Assault" */;
		case 2:
			return 416962030 /* GXTEntry: "Animal Cruelty" */;
		case 3:
			return 1314857970 /* GXTEntry: "Disturbing the Peace" */;
		case 4:
			return -999071359 /* GXTEntry: "Animal Cruelty" */;
		case 5:
			return -683250308 /* GXTEntry: "Assault" */;
		case 6:
			return -857617219 /* GXTEntry: "Animal Cruelty" */;
		case 7:
			return 1780145725 /* GXTEntry: "Bank Robbery" */;
		case 8:
			return -1521715232 /* GXTEntry: "Trespassing" */;
		case 9:
			return -1560342203 /* GXTEntry: "Cheating" */;
		case 10:
			return 1343354387 /* GXTEntry: "Disturbing the Peace" */;
		case 11:
			return 1052408375 /* GXTEntry: "Disturbing the Peace" */;
		case 12:
			return -1759599185 /* GXTEntry: "Grave Robbery" */;
		case 13:
			return joaat("crime_hassle");
		case 14:
			return -16106300 /* GXTEntry: "Unarmed Assault" */;
		case 15:
			return 105387183 /* GXTEntry: "Unarmed Assault" */;
		case 16:
			return -2095449173 /* GXTEntry: "Intimidation" */;
		case 17:
			return -2097683294 /* GXTEntry: "Horse Theft" */;
		case 18:
			return 1805131596 /* GXTEntry: "Vehicle Theft" */;
		case 19:
			return 314693001 /* GXTEntry: "Jail Break" */;
		case 20:
			return -1728509733 /* GXTEntry: "Kidnapping" */;
		case 21:
			return -42817558 /* GXTEntry: "Kidnapping" */;
		case 22:
			return 1458462042 /* GXTEntry: "Assault" */;
		case 23:
			return 481893872 /* GXTEntry: "Disturbing the Peace" */;
		case 24:
			return 1714017012 /* GXTEntry: "Disturbing the Peace" */;
		case 25:
			return 1437412331 /* GXTEntry: "Looting" */;
		case 26:
			return -493957506 /* GXTEntry: "Murder" */;
		case 27:
			return 1224055398 /* GXTEntry: "Animal Cruelty" */;
		case 28:
			return -953803399 /* GXTEntry: "Animal Cruelty" */;
		case 29:
			return 2006449383 /* GXTEntry: "Murder" */;
		case 30:
			return -1788230330 /* GXTEntry: "Animal Cruelty" */;
		case 31:
			return 1396375613 /* GXTEntry: "Vandalism" */;
		case 32:
			return joaat("crime_resist_arrest");
		case 33:
			return -1547772340 /* GXTEntry: "Robbery" */;
		case 34:
			return -59535775 /* GXTEntry: "Robbery" */;
		case 35:
			return -1701536647 /* GXTEntry: "Theft" */;
		case 36:
			return 1923998736 /* GXTEntry: "Theft" */;
		case 37:
			return -1103472584 /* GXTEntry: "Horse Theft" */;
		case 38:
			return -2051405571 /* GXTEntry: "Rustling" */;
		case 39:
			return 1135209633 /* GXTEntry: "Vehicle Theft" */;
		case 40:
			return -1810065318 /* GXTEntry: "Disturbing the Peace" */;
		case 41:
			return 2140177766;
		case 42:
			return 1685924442 /* GXTEntry: "Train Robbery" */;
		case 43:
			return 1171995096 /* GXTEntry: "Murder" */;
		case 44:
			return -267442581 /* GXTEntry: "Murder" */;
		case 45:
			return -1361146315 /* GXTEntry: "Trespassing" */;
		case 46:
			return 1352191066 /* GXTEntry: "Unarmed Assault" */;
		case 47:
			return -2130852007 /* GXTEntry: "Vandalism" */;
		case 48:
			return -102241052 /* GXTEntry: "Vandalism" */;
		case 49:
			return 1420320220 /* GXTEntry: "Vandalism" */;
		case 50:
			return -1715130379 /* GXTEntry: "Felony" */;
		case 51:
			return -661550833 /* GXTEntry: "Misdemeanor" */;
		case 52:
			return -1358475411 /* GXTEntry: "Accomplice" */;
		case 53:
			return -1848598303;
		case 54:
			return -173287735 /* GXTEntry: "Murder" */;
		case 55:
			return -715363719 /* GXTEntry: "Animal Cruelty" */;
		case 56:
			return -1117123933 /* GXTEntry: "Disturbing the Peace" */;
		case 57:
			return 1972833301 /* GXTEntry: "Murder" */;
		case 58:
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

void func_191(char[12] cParam0)
{
	Global_1938085->f_75.f_67 = { cParam0 };
}

void func_192()
{
	StringCopy(&(Global_1938085->f_75.f_67), "", 24);
}

bool func_193(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_274(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_275(iVar1))
	{
		if (Global_1070356->f_17915.f_24 && !func_276(iParam0))
		{
			return false;
		}
		return (MISC::IS_BIT_SET(&(Global_1070356->f_17915[iVar1]), iVar2) || MISC::IS_BIT_SET(&(Global_39.f_106[iVar1]), iVar2));
	}
	return MISC::IS_BIT_SET(&(Global_39.f_106[iVar1]), iVar2);
}

int func_194(struct<2> Param0)
{
	int iVar0;

	if (!func_69(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_27(*(Global_1900718->f_1[iVar0 /*2*/]), Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_195(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1900718->f_66 == 0)
	{
		return 0;
	}
	if (Global_1900718->f_66 == 1)
	{
		Global_1900718->f_66 = 0;
		func_70(Global_1900718->f_1[0 /*2*/]);
		return 1;
	}
	func_70(Global_1900718->f_1[iParam0 /*2*/]);
	Global_1900718->f_66 = (Global_1900718->f_66 - 1);
	func_277(iParam0, Global_1900718->f_66);
	return 1;
}

bool func_196(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1185962->f_1 && iParam0) != 0;
}

bool func_197(int iParam0, int iParam1)
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

int func_198()
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
	if (!func_69(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

int func_199(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_278(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 == func_279())
	{
		return func_278(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1275573->f_22[iParam1])
	{
		return func_278(&(((*Global_1097610)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

int func_200(int iParam0)
{
	if (!func_280())
	{
		return 0;
	}
	else if (func_129())
	{
		return 0;
	}
	else if (!PED::IS_PED_ON_FOOT(Global_34))
	{
		return 0;
	}
	else if (ENTITY::_0x61914209C36EFDDB(Global_34) != 0)
	{
		return 0;
	}
	else if (func_281(1106247680 /* Float: 30f */, 0))
	{
		return 0;
	}
	else if (PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	else if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	else if (PED::_0x9682F850056C9ADE(Global_34))
	{
		return 0;
	}
	else if (PED::_0x3AA24CCC0D451379(Global_34))
	{
		return 0;
	}
	else if (PED::IS_PED_SHOOTING(Global_34))
	{
		return 0;
	}
	else if (PED::IS_PED_JUMPING(Global_34))
	{
		return 0;
	}
	else if (PED::_0x3E592D0486DEC0F6(Global_34))
	{
		return 0;
	}
	else if (PED::IS_PED_FALLING(Global_34))
	{
		return 0;
	}
	else if (TASK::IS_PED_GETTING_UP(Global_34))
	{
		return 0;
	}
	else if (PED::IS_PED_RAGDOLL(Global_34))
	{
		return 0;
	}
	else if (PED::_0x0E99E3BF11BB6367(Global_34))
	{
		return 0;
	}
	else if (PED::_0x3BDFCF25B58B0415(Global_34))
	{
		return 0;
	}
	else if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_34, 512, 0))
	{
		return 0;
	}
	else if (PED::_IS_PED_CARRYING(Global_34))
	{
		return 0;
	}
	else if (!func_282(iParam0))
	{
		return 0;
	}
	else if (TASK::_0x038B1F1674F0E242(Global_34))
	{
		return 0;
	}
	else if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1077801405) > 0)
	{
		return 0;
	}
	return 1;
}

int func_201(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
	{
		return 0;
	}
	if (func_119(vParam2))
	{
		return 0;
	}
	if (fParam5 <= 0f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_283(iVar0, 2))
		{
			if (func_284(vParam2, ((*Global_1949759)[iVar0 /*23*/])->f_6, 0.01f, 1) && iParam1 == ((*Global_1949759)[iVar0 /*23*/])->f_4)
			{
				iVar2 = iVar0;
				return iVar2;
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
		func_285(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216 /* Float: 1f */, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

int func_202(int iParam0)
{
	struct<4> Var0;
	int iVar12;

	if (func_11(iParam0->f_1))
	{
		iParam0->f_15 = func_128("NET_MG_HELP_BANNED", 10000, 0, 0, 0, 1);
		return 0;
	}
	else if (func_286(iParam0->f_1))
	{
		iParam0->f_15 = func_128(func_264(iParam0->f_2, 579389526, func_287()), 10000, 0, 0, 0, 1);
		return 0;
	}
	else if (func_288(iParam0->f_1, -1038316793, &Var0))
	{
		iParam0->f_15 = func_128(func_264(iParam0->f_2, -1300909614, Var0.f_3), 10000, 0, 0, 0, 1);
		return 0;
	}
	else if (func_288(iParam0->f_1, 1485265289, &Var0))
	{
		iParam0->f_15 = func_128(func_264(iParam0->f_2, -1589038658, Var0.f_3), 10000, 0, 0, 0, 1);
		return 0;
	}
	else if (func_289(iParam0->f_1))
	{
		iParam0->f_15 = func_128(MISC::_CREATE_VAR_STRING(10, "NET_MG_HELP_MAINTENANCE", func_290(iParam0->f_2)), 10000, 0, 0, 0, 1);
		return 0;
	}
	else if (func_291(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		iParam0->f_15 = func_128(MISC::_CREATE_VAR_STRING(10, "MISSION_WANTED_REGION", func_290(iParam0->f_2)), 10000, 0, 0, 0, 1);
		return 0;
	}
	else if (func_292())
	{
		iParam0->f_15 = func_128("MG_POSSE_MEM_IN_JAIL", 10000, 0, 0, 0, 1);
		return 0;
	}
	else if (func_102() || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1077801405) > 0)
	{
		return 0;
	}
	iVar12 = func_293(iParam0->f_1, 1);
	if (iVar12 > 0 && !func_294(iVar12))
	{
		iParam0->f_15 = func_128(MISC::_CREATE_VAR_STRING(2, "MGPKR_BROKE_MP", iVar12), 10000, 0, 0, 0, 1);
		return 0;
	}
	return 1;
}

void func_203(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_61(iParam0))
	{
		return;
	}
	iVar0 = func_173(iParam0);
	if (bParam1)
	{
		func_295(iParam0, 4);
		if (bParam3)
		{
			func_296(iVar0, 1);
		}
		func_297(iVar0, 1);
	}
	else
	{
		func_298(iParam0, 4);
		func_297(iVar0, 0);
	}
}

bool func_204(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_61(iParam0))
	{
		return false;
	}
	iVar0 = func_173(iParam0);
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

void func_205()
{
	if (!UIAPPS::_IS_ANY_APP_RUNNING())
	{
		return;
	}
	UIAPPS::_CLOSE_ALL_APPS();
}

int func_206(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = func_300(bParam2, func_299(), 1, 0, 1, 1, 1, bParam0, bParam1);
	if (!bVar0)
	{
		return 0;
	}
	return 1;
}

void func_207(int iParam0)
{
	Global_1896726->f_390 = iParam0;
}

int func_208()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-92416669) > 0)
	{
		return 1;
	}
	return 0;
}

int func_209(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1938417->f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(((*Global_1938417)[iVar0 /*16*/])->f_10)))
		{
			func_301(iVar0);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_210(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	else
	{
		*uParam0 = MISC::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

var func_211(var uParam0, var uParam1)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_212(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_302(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_213(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4)
{
	vector3 vVar0;
	var uVar3;

	vVar0.x = iParam3;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = sParam2;
	uVar3 = _NAMESPACE76::_0x9F2CC2439A04E7BA(uParam0, &vVar0, iParam4);
	return uVar3;
}

var func_214(var uParam0, var uParam1, char[4] cParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	var uVar4;

	Var0 = iParam4;
	Var0.f_1 = iParam3;
	Var0.f_2 = uParam1;
	Var0.f_3 = cParam2;
	uVar4 = _NAMESPACE76::_0x339E16B41780FC35(uParam0, &Var0, iParam5);
	return uVar4;
}

void func_215(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_216(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -471827042:
			*iParam1 = 0;
			return 1;
		default:
			break;
	}
	switch (iParam0)
	{
		case -1150372370:
			*iParam1 = 1;
			return 1;
		case -2033178055:
			*iParam1 = 2;
			return 1;
		case 355424894:
			*iParam1 = 3;
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_217(var uParam0)
{
	return uParam0->f_1;
}

int func_218(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(*uParam0, NETWORK::GET_NETWORK_TIME());
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(*uParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(*uParam0, MISC::GET_GAME_TIMER());
}

void func_219(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_220(struct<2> Param0)
{
	return func_71(Param0) == 0;
}

void func_221(struct<2> Param0)
{
	if (func_72(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_72(Param0)))
	{
		STATS::_0x99230691875FC218(func_82(Param0), func_72(Param0), Global_35);
	}
}

bool func_222(int iParam0)
{
	return (Global_1099294->f_197 && iParam0) != 0;
}

bool func_223()
{
	return func_222(4);
}

int func_224(vector3 vParam0, var uParam3)
{
	if (func_119(vParam0))
	{
		return 0;
	}
	if (func_303(255) == 4)
	{
		return 0;
	}
	if (func_199(4, 255))
	{
	}
	func_227(4);
	func_304(&(Global_1099294->f_546));
	Global_1099294->f_546.f_6 = { vParam0 };
	Global_1099294->f_546 = uParam3;
	Global_1099294->f_546.f_5 = 1;
	Global_1099294->f_26.f_18 = 0;
	Global_1099294->f_26.f_19 = 0;
	func_305(Global_1099294->f_546, 36);
	return 1;
}

void func_225(bool bParam0, bool bParam1)
{
	if (func_303(255) == 4)
	{
		return;
	}
	if (func_119(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_226(0);
	}
	else
	{
		if (bParam1)
		{
			func_306(0, 0, 0, 1);
		}
		func_227(0);
		func_258(&(Global_1099294->f_516));
		Global_1099294->f_516 = 0f;
		Global_1099294->f_516.f_5 = 1;
		Global_1099294->f_516.f_16 = 0;
		Global_1099294->f_516.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1099294->f_516.f_17.f_3 = { 0f, 0f, 0f };
		Global_1099294->f_516.f_17 = { Global_1901929->f_44.f_1, Global_1901929->f_44.f_1, Global_1901929->f_44.f_1 };
		Global_1099294->f_516.f_17.f_9 = -432403087;
		func_259(&(Global_1099294->f_555));
		Global_1099294->f_555.f_6 = { Global_1099294->f_516.f_17.f_6 };
		Global_1099294->f_555 = Global_1099294->f_516;
		Global_1099294->f_555.f_5 = 1;
		if (bParam1)
		{
			Global_1099294->f_26.f_18 = 0;
			Global_1099294->f_26.f_19 = 0;
		}
	}
	func_260(Global_1099294->f_516, 36);
	func_261(Global_1099294->f_555, 36);
}

int func_226(int iParam0)
{
	if (func_307(&(Global_1099294->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_227(int iParam0)
{
	if (func_308(&(Global_1099294->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_228(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam0 == 3)
	{
		return iParam1 != -1;
	}
	return iParam1 != 0;
}

int func_229(int iParam0)
{
	int iVar0;

	iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(iParam0);
	if (_NAMESPACE26::_0x0F99F6436528A089(iVar0) && !_NAMESPACE26::_0x424B17A7DC5C90BC(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_230(var uParam0)
{
	MISC::_COPY_MEMORY(&(Global_1572887->f_106.f_17), uParam0, 57);
}

void func_231(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	Global_1572887->f_106 = iParam0;
	Global_1572887->f_106.f_9 = iParam1;
	Global_1572887->f_106.f_10 = iParam2;
	if (bParam3)
	{
		func_309();
	}
}

void func_232(struct<2> Param0, bool bParam2)
{
	Global_1572887->f_106.f_11 = { Param0 };
	if (bParam2)
	{
		func_309();
	}
}

void func_233(int iParam0)
{
	Global_1572887->f_106.f_15 = iParam0;
}

void func_234(bool bParam0)
{
	Global_1572887->f_106.f_13 = bParam0;
}

void func_235(int iParam0, bool bParam1)
{
	Global_1572887->f_106.f_74 = iParam0;
	if (bParam1)
	{
		func_309();
	}
}

int func_236()
{
	if (func_242() != 0)
	{
		return 0;
	}
	if (Global_1572887->f_106.f_9 >= 5 && Global_1572887->f_106.f_9 <= 8)
	{
		return 0;
	}
	return 1;
}

int func_237(struct<2> Param0)
{
	if (func_68())
	{
		return 0;
	}
	if (!func_69(Param0))
	{
		return 0;
	}
	*Global_1051163 = { Param0 };
	return 1;
}

void func_238()
{
	((*Global_1055966)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*436*/])->f_15.f_9 = 0;
}

void func_239(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<8> Var3;

	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_135);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_136);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_137);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_138);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_139);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_140);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_141);
	iVar0 = func_310(Param0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = func_311(iVar0);
	if (iVar1 == -1)
	{
		return;
	}
	uVar2 = func_312(iVar0);
	Var3 = { func_313(iVar1, uVar2) };
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1572887->f_106.f_133, MISC::_CREATE_VAR_STRING(2, &Var3));
}

int func_240(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (iParam1 == 0)
	{
		return 0;
	}
	if (uParam0->f_16 == iParam1)
	{
		func_314(uParam0, 4194304);
		return 1;
	}
	iVar0 = func_315(iParam1);
	if (iVar0 == -1)
	{
		return 0;
	}
	MemCopy(&(uParam0->f_27), {*(Global_265331->f_4[iVar0 /*51*/])}, 3);
	uParam0->f_37 = { (Global_265331->f_4[iVar0 /*51*/])->f_7 };
	uParam0->f_45 = (Global_265331->f_4[iVar0 /*51*/])->f_22;
	uParam0->f_46 = (Global_265331->f_4[iVar0 /*51*/])->f_30;
	uParam0->f_16 = (Global_265331->f_4[iVar0 /*51*/])->f_28;
	uParam0->f_17 = &Global_265331->f_63755[iVar0 /*8*/];
	uParam0->f_61 = { (Global_265331->f_4[iVar0 /*51*/])->f_24 };
	uParam0->f_30 = (Global_265331->f_4[iVar0 /*51*/])->f_34;
	uParam0->f_32 = (Global_265331->f_4[iVar0 /*51*/])->f_32;
	uParam0->f_33 = (Global_265331->f_4[iVar0 /*51*/])->f_33;
	uParam0->f_21 = 1;
	uParam0->f_21.f_1 = 0;
	uParam0->f_21.f_4 = iParam4;
	uParam0->f_21.f_2 = (Global_265331->f_4[iVar0 /*51*/])->f_29;
	uParam0->f_21.f_3 = (Global_265331->f_4[iVar0 /*51*/])->f_31;
	uParam0->f_26 = (Global_265331->f_4[iVar0 /*51*/])->f_31;
	uParam0->f_34 = (Global_265331->f_4[iVar0 /*51*/])->f_40;
	uParam0->f_1 = { (Global_265331->f_4[iVar0 /*51*/])->f_15 };
	MemCopy(&(uParam0->f_8), {(Global_265331->f_4[iVar0 /*51*/])->f_4}, 8);
	if (iParam2 != -1)
	{
		if ((uParam0->f_21.f_2 == -933924539 && func_316(iParam2)) || (uParam0->f_21.f_2 == 395262693 && func_317(iParam2)))
		{
			uParam0->f_21.f_3 = iParam2;
			uParam0->f_26 = iParam2;
		}
	}
	if (iParam3 > 0)
	{
		uParam0->f_30 = iParam3;
	}
	iVar1 = func_318(&(Global_265331->f_63755[iVar0 /*8*/]));
	vVar2 = { func_319(uParam0->f_17) };
	if (iVar1 != -1)
	{
		uParam0->f_53 = { func_320(iVar1) };
	}
	else if (func_321(uParam0->f_17))
	{
		uParam0->f_53 = { func_323(func_322(uParam0->f_17)) };
	}
	else if (vVar2.y != -1 && vVar2.x != -1)
	{
		uParam0->f_53 = { func_324(&vVar2) };
	}
	else
	{
		uParam0->f_53 = { func_325(uParam0->f_16) };
		if (!func_69(uParam0->f_53))
		{
			uParam0->f_53 = { func_327(func_326(uParam0->f_21.f_2)) };
		}
	}
	func_328(uParam0);
	func_314(uParam0, 4194304);
	return 1;
}

char* func_241(int iParam0)
{
	int iVar0;

	iVar0 = func_329(iParam0);
	if (iVar0 == &Global_265308->f_1[0])
	{
		return "NM_BUCKET_RACE";
	}
	if (iVar0 == &Global_265308->f_1[1])
	{
		return "NET_PLAYLIST_FEATURED_SERIES_001";
	}
	if (iVar0 == &Global_265308->f_1[5])
	{
		return "NET_PLAYLIST_SPECIAL_SERIES_1";
	}
	if (iVar0 == &Global_265308->f_1[6])
	{
		return "NET_PLAYLIST_SPECIAL_SERIES_2";
	}
	if (iVar0 == &Global_265308->f_1[7])
	{
		return "NET_PLAYLIST_ELIMINATION_SMALL";
	}
	if (iVar0 == &Global_265308->f_1[8])
	{
		return "NET_PLAYLIST_ELIMINATION_MEDIUM";
	}
	if (iVar0 == &Global_265308->f_1[9])
	{
		return "NET_PLAYLIST_ELIMINATION_LARGE";
	}
	if (iVar0 == &Global_265308->f_1[2])
	{
		return "NET_PLAYLIST_ADVERSARY_SERIES_SMALL";
	}
	if (iVar0 == &Global_265308->f_1[3])
	{
		return "NET_PLAYLIST_ADVERSARY_SERIES_MEDIUM";
	}
	if (iVar0 == &Global_265308->f_1[4])
	{
		return "NET_PLAYLIST_ADVERSARY_SERIES_LARGE";
	}
	if (iVar0 == &Global_265308->f_1[15])
	{
		return "NM_BUCKET_ORBIS_SERIES_1";
	}
	if (iVar0 == &Global_265308->f_1[16])
	{
		return "NM_BUCKET_ORBIS_SERIES_2";
	}
	if (iVar0 == &Global_265308->f_1[17])
	{
		return "NM_BUCKET_ORBIS_SERIES_3";
	}
	if (iVar0 == &Global_265308->f_1[19])
	{
		return "NET_PLAYLIST_CAPTURE";
	}
	if (iVar0 == &Global_265308->f_1[18])
	{
		return "NET_PLAYLIST_SHOOTOUT";
	}
	return "Unmapped bucket hash";
}

int func_242()
{
	return Global_1572887->f_106;
}

char* func_243(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "NM_BUCKET_EIGHT_PLAYER";
				case 1:
					return "NM_BUCKET_RACE";
				case 2:
					return "NM_BUCKET_TWELVE_PLAYER";
				case 3:
					return "NM_BUCKET_ADVERSARIAL";
				case 6:
					return "NM_BUCKET_NOMINATED_SERIES";
				case 5:
					return "NM_BUCKET_NOMINATED_SERIES_SMALL";
				case 7:
					return "NM_BUCKET_NOMINATED_SERIES_MEDIUM";
				case 8:
					return "NM_BUCKET_NOMINATED_SERIES_LARGE";
				case 23:
					return "NM_BUCKET_MISSION_2_PLAYER";
				case 24:
					return "NM_BUCKET_FOUR_PLAYER";
				case 25:
					return "NM_BUCKET_EIGHT_PLAYER";
				case 26:
					return "NM_BUCKET_MISSION_10_PLAYER";
				case 27:
					return "NM_BUCKET_TWELVE_PLAYER";
				case 28:
					return "NM_BUCKET_ADVERSARIAL";
				default:
					break;
			}
			break;
	}
	return "Invalid Net Matchmaking Bucket";
}

int func_244(int iParam0, bool bParam1)
{
	bool bVar0;

	bVar0 = false;
	if (iParam0 == 255)
	{
		bVar0 = true;
		iParam0 = func_279();
	}
	else if (iParam0 == func_279())
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam1)
		{
			return Global_1275573->f_14;
		}
	}
	if (!bVar0)
	{
		if (!&Global_1275573->f_22[iParam0])
		{
			return 0;
		}
		if (!NETWORK::_0x255A5EF65EDA9167(&(Global_1275573->f_154[iParam0])))
		{
			return 0;
		}
	}
	if (_NAMESPACE26::_0x149A2751AB66AC02(_NAMESPACE26::_0x901E0DC25080C8B9(&(Global_1275573->f_154[iParam0]))) <= 1)
	{
		return 0;
	}
	return 1;
}

var func_245(char* sParam0)
{
	char* sVar0;
	var uVar1;

	sVar0 = MISC::_CREATE_VAR_STRING(2, sParam0);
	uVar1 = func_330(sVar0, -2, 0, 0, 0, 1);
	return uVar1;
}

void func_246(int iParam0)
{
	Global_1572887->f_106.f_75 = iParam0;
}

var func_247(int iParam0, int iParam1)
{
	return &((Global_1132549->f_1[iParam0 /*27*/])->f_15[iParam1 /*3*/]);
}

void func_248(struct<2> Param0)
{
	struct<32> Var0;

	if (func_72(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_72(Param0)))
	{
	}
	else
	{
		STATS::_0xB2A38826E5886E83(func_72(Param0), Global_265331->f_124445.f_70.f_17);
		if (func_252(Param0, &Var0))
		{
			if (Var0.f_29 == -681494152)
			{
				STATS::_0xF21A5D66874FCEDD(Var0.f_2, 0, joaat("race"));
			}
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_29, 0);
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_30, 0);
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_31, 0);
		}
	}
}

int func_249(struct<2> Param0, int iParam2)
{
	int iVar0;

	iVar0 = func_194(Param0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1900718->f_66 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1900718->f_66;
	func_331(Param0, iVar0);
	Global_1900718->f_66++;
	if (iParam2 < 0 || iParam2 >= Global_1900718->f_66)
	{
		return iVar0;
	}
	func_277(iVar0, iParam2);
	return iParam2;
}

bool func_250(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_251(struct<2> Param0, int iParam2)
{
	int iVar0;

	if (!func_69(Param0))
	{
		return 0;
	}
	iVar0 = func_194(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	if (!func_332(Param0, func_76(0), iParam2))
	{
		func_75(func_76(0), 3);
		func_75(func_76(iVar0), 4);
		return 0;
	}
	func_277(iVar0, 0);
	func_75(func_76(0), 3);
	func_75(func_76(1), 4);
	return 1;
}

int func_252(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_267(Param0, &vVar0);
	if (func_333(Param0, vVar0.x, uParam2))
	{
		return 1;
	}
	return 0;
}

void func_253(int iParam0)
{
	if (!func_57((Global_1070356->f_19683.f_1[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*8*/])->f_7, iParam0))
	{
		func_172(&((Global_1070356->f_19683.f_1[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*8*/])->f_7), iParam0);
	}
}

void func_254(var uParam0)
{
	uParam0->f_1 = 0;
}

struct<10> func_255(int iParam0)
{
	struct<10> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	func_335(func_334(iParam0), &Var0);
	return Var0;
}

int func_256(int iParam0)
{
	struct<4> Var0;

	Var0 = Global_1070356->f_22101.f_366.f_4357;
	Var0.f_2 = 1593794963;
	Var0.f_3 = iParam0;
	return DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
}

int func_257(int iParam0, int iParam1, var uParam2, var uParam3)
{
	struct<5> Var0;

	Var0 = Global_1070356->f_22101.f_366.f_4357;
	Var0.f_2 = 160165798;
	Var0.f_3 = iParam0;
	Var0.f_4 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1576253240;
		DATAFILE::_DATAFILE_GET_VECTOR(uParam2, &Var0);
		Var0.f_2 = -55481687;
		DATAFILE::_DATAFILE_GET_FLOAT(uParam3, &Var0);
		return 1;
	}
	return 0;
}

void func_258(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_259(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_260(struct<29> Param0, var uParam29, int iParam30)
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

void func_261(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

void func_262(int iParam0)
{
	if (!func_336(iParam0))
	{
		SCRIPTS::_0x31010318BA9897AC(&(Global_1070356->f_19683.f_260), iParam0);
	}
}

bool func_263()
{
	return Global_1132695->f_2 != 0;
}

char* func_264(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	if (iParam2 != 0)
	{
		iVar0 = (iParam2 - Global_1132695->f_7);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
	}
	switch (iParam1)
	{
		case -1385120212:
		case -1249239171:
		case 0:
			return "";
		case -1695230319:
			return MISC::_CREATE_VAR_STRING(10, "NET_MG_HELP_PLAYER_CLEAN", func_290(iParam0));
		case -1300909614:
			if (iVar0 == 0)
			{
				return "NET_MG_HELP_DAILY_PROFIT_CAP";
			}
			return MISC::_CREATE_VAR_STRING(42, "NET_MG_HELP_COMPOSITE", "NET_MG_HELP_DAILY_PROFIT_CAP", func_337(iVar0, 0, 0));
		case -1589038658:
			if (iVar0 == 0)
			{
				return "NET_MG_HELP_DAILY_BUYIN_CAP";
			}
			return MISC::_CREATE_VAR_STRING(42, "NET_MG_HELP_COMPOSITE", "NET_MG_HELP_DAILY_BUYIN_CAP", func_337(iVar0, 0, 0));
		case 1671747787:
			if (iVar0 == 0)
			{
				return MISC::_CREATE_VAR_STRING(2, "NET_MG_HELP_PRIV_HOUR_BUYIN_CAP");
			}
			return MISC::_CREATE_VAR_STRING(42, "NET_MG_HELP_COMPOSITE", "NET_MG_HELP_PRIV_HOUR_BUYIN_CAP", func_337(iVar0, 1, 0));
		case 1053423395:
			return "NET_MG_HELP_PUB_RE_BUYIN_CAP";
		case 579389526:
			if (iVar0 == 0)
			{
				return "NET_MG_HELP_OVERALL_CAP";
			}
			return MISC::_CREATE_VAR_STRING(42, "NET_MG_HELP_COMPOSITE", "NET_MG_HELP_OVERALL_CAP", func_337(iVar0, 0, 0));
		case -1878199881:
			return MISC::_CREATE_VAR_STRING(10, "NET_MG_HELP_GEO_TOGGLE", func_290(iParam0));
		case -592991683:
			return "NET_MG_HELP_NO_PARTY_CHAT";
		case -1517426354:
			return MISC::_CREATE_VAR_STRING(10, "NET_MG_HELP_MAINTENANCE", func_290(iParam0));
		case -1720361368:
			return "NET_MG_HELP_BANNED";
		case -1166915294:
			return "NET_MG_HELP_BANNED2";
		case 1406403638:
			return "NET_MG_HELP_POSSE_LEADER_LEFT";
		case 1320901890:
			return "NET_MG_HELP_ARBITLEGAL";
		case -1700673948:
			return MISC::_CREATE_VAR_STRING(10, "MG_FAILED_LAUNCH", func_290(iParam0));
		case 1736016924:
			return MISC::_CREATE_VAR_STRING(10, "NET_MG_HELP_DISCONNECTED", func_290(iParam0));
		case -835571454:
			return MISC::_CREATE_VAR_STRING(10, "NET_MG_HELP_NETWORK_ERROR", func_290(iParam0));
		case -301240451:
			return MISC::_CREATE_VAR_STRING(10, "NET_MG_HELP_SCRIPT_ERROR", func_290(iParam0));
		case 2124908670:
			return "NET_MG_HELP_BUYIN_TIMEOUT";
		default:
			break;
	}
	return "";
}

void func_265(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_266(int iParam0)
{
	return func_283(iParam0, 2);
}

int func_267(struct<2> Param0, var uParam2)
{
	if (!func_69(Param0))
	{
		return 0;
	}
	func_338(uParam2);
	switch (Param0)
	{
		case 2:
			MISC::_COPY_MEMORY(uParam2, Global_1070356->f_634[Param0.f_1 /*3*/], 3);
			return 1;
		case 3:
			MISC::_COPY_MEMORY(uParam2, Global_1070356->f_634.f_602[Param0.f_1 /*3*/], 3);
			return 1;
		case 4:
			MISC::_COPY_MEMORY(uParam2, Global_1070356->f_634.f_2104[Param0.f_1 /*3*/], 3);
			return 1;
		case 5:
			MISC::_COPY_MEMORY(uParam2, Global_1070356->f_634.f_12606[Param0.f_1 /*3*/], 3);
			return 1;
		case 6:
			MISC::_COPY_MEMORY(uParam2, Global_1070356->f_634.f_12908[Param0.f_1 /*3*/], 3);
			return 1;
		case 7:
			MISC::_COPY_MEMORY(uParam2, Global_1070356->f_634.f_15910[Param0.f_1 /*3*/], 3);
			return 1;
		case 8:
			MISC::_COPY_MEMORY(uParam2, Global_1070356->f_634.f_15981[Param0.f_1 /*3*/], 3);
			return 1;
		default:
			break;
	}
	return 0;
}

int func_268(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_267(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_269(var uParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_339(&Var1, uParam0))
	{
		iVar0 = ((func_340() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_270(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return ((*Global_1234391)[iParam0 /*5*/])->f_2;
}

int func_271(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1777724963:
		case -1165569262:
		case -260420884:
		case -232478158:
		case 78055447:
		case 850213441:
		case 974227447:
		case 1532822440:
		case 1918154385:
			return 1;
		case joaat("dynamic"):
			return iParam1;
		default:
			break;
	}
	return 0;
}

int func_272(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = iParam0;
	while (iVar0 < Global_1070356->f_17817)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1070356->f_17817.f_1[iVar0 /*3*/]) = { *(Global_1070356->f_17817.f_1[iVar0 + 1 /*3*/]) };
		}
		iVar0++;
	}
	vVar1 = -1;
	vVar1.f_1 = -1;
	if (Global_1070356->f_17817 < 32)
	{
		*(Global_1070356->f_17817.f_1[Global_1070356->f_17817 /*3*/]) = { vVar1 };
	}
	Global_1070356->f_17817 = (Global_1070356->f_17817 - 1);
	if (Global_1070356->f_17817 < 0)
	{
		Global_1070356->f_17817 = 0;
	}
	return 1;
}

int func_273(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = (Global_1070356->f_17817 - 1);
	vVar1 = -1;
	vVar1.f_1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1070356->f_17817.f_1[iVar0 + 1 /*3*/]) = { *(Global_1070356->f_17817.f_1[iVar0 /*3*/]) };
		}
		iVar0 = (iVar0 - 1);
	}
	*(Global_1070356->f_17817.f_1[iParam0 /*3*/]) = { vVar1 };
	Global_1070356->f_17817++;
	if (Global_1070356->f_17817 > 32)
	{
		Global_1070356->f_17817 = 32;
	}
	return 1;
}

int func_274(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2142074819:
			return 522;
		case -2141419899:
			return 405;
		case -2106445152:
			return 277;
		case -2106214197:
			return 102;
		case -2101264851:
			return 192;
		case -2100409704:
			return 471;
		case -2073072369:
			return 57;
		case -2069570138:
			return 25;
		case -2066272360:
			return 395;
		case -2058120606:
			return 194;
		case -2056579774:
			return 465;
		case -2043909922:
			return 339;
		case -2038424081:
			return 49;
		case -2034257789:
			return 90;
		case -2022369555:
			return 251;
		case -2021582629:
			return 110;
		case -2020023971:
			return 263;
		case -1957523409:
			return 205;
		case -1952856164:
			return 163;
		case -1949204933:
			return 261;
		case -1943367752:
			return 388;
		case -1943021821:
			return 336;
		case -1939389836:
			return 417;
		case -1932919229:
			return 429;
		case -1925798111:
			return 41;
		case -1914141706:
			return 440;
		case -1906892166:
			return 404;
		case -1882707460:
			return 464;
		case -1861414976:
			return 381;
		case -1852605133:
			return 10;
		case -1848799275:
			return 410;
		case -1847672446:
			return 312;
		case -1842033327:
			return 505;
		case -1840704908:
			return 274;
		case -1838712533:
			return 26;
		case -1838352012:
			return 55;
		case -1835851517:
			return 54;
		case -1831552326:
			return 121;
		case -1827602683:
			return 447;
		case -1825294305:
			return 252;
		case -1824738758:
			return 262;
		case -1818850842:
			return 239;
		case -1808329564:
			return 412;
		case -1799960545:
			return 243;
		case -1764522338:
			return 308;
		case -1763509974:
			return 139;
		case -1753769127:
			return 399;
		case -1749433374:
			return 480;
		case -1749043433:
			return 525;
		case -1741667789:
			return 62;
		case -1738165526:
			return 3;
		case -1719055206:
			return 520;
		case -1718674470:
			return 23;
		case -1717960576:
			return 59;
		case -1711895055:
			return 13;
		case -1706438978:
			return 220;
		case -1705799799:
			return 422;
		case -1700452710:
			return 317;
		case -1684974589:
			return 467;
		case -1674179981:
			return 53;
		case -1673998598:
			return 528;
		case -1666278201:
			return 33;
		case -1664435783:
			return 487;
		case -1624627591:
			return 439;
		case -1612662716:
			return 198;
		case -1610966108:
			return 355;
		case -1608141409:
			return 539;
		case -1585840296:
			return 337;
		case -1582926490:
			return 144;
		case -1579419919:
			return 145;
		case -1578292898:
			return 435;
		case -1573753524:
			return 504;
		case -1558439474:
			return 286;
		case -1556041029:
			return 411;
		case -1547280108:
			return 519;
		case -1532284567:
			return 114;
		case -1530132748:
			return 296;
		case -1524512402:
			return 206;
		case -1523910291:
			return 153;
		case -1502194556:
			return 524;
		case -1462313959:
			return 463;
		case -1455998786:
			return 371;
		case -1447311849:
			return 321;
		case -1445041595:
			return 529;
		case -1442844448:
			return 466;
		case -1436021162:
			return 170;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1422877860:
			return 473;
		case -1419919497:
			return 22;
		case -1414537028:
			return 71;
		case -1405998267:
			return 103;
		case -1395855864:
			return 479;
		case -1387772214:
			return 408;
		case -1378911044:
			return 476;
		case -1369678628:
			return 488;
		case -1344601768:
			return 348;
		case -1341750998:
			return 477;
		case -1340339190:
			return 363;
		case -1339871203:
			return 533;
		case -1329135070:
			return 138;
		case -1319875891:
			return 438;
		case -1311865656:
			return 37;
		case -1296807958:
			return 353;
		case -1290997627:
			return 462;
		case -1287894233:
			return 427;
		case -1283202000:
			return 354;
		case -1282804314:
			return 255;
		case -1278074582:
			return 169;
		case -1271608261:
			return 96;
		case -1262828457:
			return 424;
		case -1257057567:
			return 21;
		case -1241340344:
			return 285;
		case -1236261996:
			return 222;
		case -1232809834:
			return 111;
		case -1230112817:
			return 168;
		case -1223121209:
			return 124;
		case -1215445344:
			return 129;
		case -1209597203:
			return 366;
		case -1206122982:
			return 154;
		case -1187950766:
			return 45;
		case -1181950077:
			return 401;
		case -1179948750:
			return 134;
		case -1170496998:
			return 46;
		case -1164215952:
			return 221;
		case -1161687045:
			return 392;
		case -1151084372:
			return 122;
		case -1145519186:
			return 98;
		case -1145153057:
			return 340;
		case -1124061431:
			return 229;
		case -1123615607:
			return 29;
		case -1120447016:
			return 444;
		case -1095341658:
			return 409;
		case -1080627546:
			return 314;
		case -1077783786:
			return 191;
		case -1063147448:
			return 149;
		case -1062490780:
			return 77;
		case -1060078174:
			return 226;
		case -1056767524:
			return 174;
		case -1053549743:
			return 56;
		case -1042021329:
			return 383;
		case -1029225159:
			return 104;
		case -1023919011:
			return 432;
		case -1014145132:
			return 273;
		case -1004266677:
			return 461;
		case -978957786:
			return 237;
		case -959357075:
			return 36;
		case -950054349:
			return 150;
		case -947815572:
			return 400;
		case -941648233:
			return 512;
		case -939420910:
			return 44;
		case -931337253:
			return 425;
		case -925071604:
			return 542;
		case -919512195:
			return 40;
		case -911126844:
			return 369;
		case -897750037:
			return 367;
		case -895307590:
			return 501;
		case -895073533:
			return 394;
		case -889906510:
			return 390;
		case -888632790:
			return 506;
		case -879507474:
			return 223;
		case -868076593:
			return 82;
		case -857964358:
			return 81;
		case -853383233:
			return 63;
		case -852602679:
			return 433;
		case -851626677:
			return 372;
		case -839820438:
			return 420;
		case -828139293:
			return 246;
		case -812641169:
			return 535;
		case -811637947:
			return 232;
		case -800891377:
			return 494;
		case -797689456:
			return 515;
		case -796902762:
			return 86;
		case -792853067:
			return 240;
		case -789397228:
			return 248;
		case -785605431:
			return 236;
		case -781631220:
			return 328;
		case -764163380:
			return 215;
		case -748969569:
			return 76;
		case -741351766:
			return 58;
		case -736853952:
			return 302;
		case -734416508:
			return 373;
		case -729679654:
			return 531;
		case -699277634:
			return 4;
		case -693828600:
			return 356;
		case -683458244:
			return 78;
		case -677920206:
			return 459;
		case -666014935:
			return 155;
		case -664512648:
			return 65;
		case -664252410:
			return 188;
		case -644722288:
			return 247;
		case -640663440:
			return 320;
		case -639037538:
			return 183;
		case -635323621:
			return 513;
		case -632127260:
			return 343;
		case -630295963:
			return 495;
		case -628542779:
			return 69;
		case -622554983:
			return 306;
		case -618620429:
			return 185;
		case -604603161:
			return 472;
		case -591815673:
			return 384;
		case -583127403:
			return 507;
		case -574190021:
			return 493;
		case -554519756:
			return 536;
		case -545450213:
			return 313;
		case -538889627:
			return 173;
		case -538880323:
			return 172;
		case -534215902:
			return 128;
		case -524787708:
			return 380;
		case -524145696:
			return 115;
		case -523522517:
			return 300;
		case -515561750:
			return 225;
		case -510945576:
			return 338;
		case -503955743:
			return 235;
		case -502473159:
			return 326;
		case -502324015:
			return 8;
		case -500245243:
			return 516;
		case -492731190:
			return 419;
		case -491981251:
			return 184;
		case -489737721:
			return 402;
		case -468693731:
			return 109;
		case -464836488:
			return 254;
		case -460024530:
			return 350;
		case -448554447:
			return 532;
		case -441204543:
			return 534;
		case -434590080:
			return 212;
		case -414883443:
			return 460;
		case -404698347:
			return 202;
		case -397760715:
			return 141;
		case -396624371:
			return 374;
		case -389056691:
			return 257;
		case -381925743:
			return 508;
		case -371827125:
			return 389;
		case -364475655:
			return 430;
		case -360036154:
			return 304;
		case -356975260:
			return 101;
		case -355531636:
			return 370;
		case -350863510:
			return 160;
		case -349064220:
			return 298;
		case -334729750:
			return 67;
		case -333135263:
			return 334;
		case -330120947:
			return 333;
		case -329176208:
			return 492;
		case -311373772:
			return 540;
		case -306246697:
			return 311;
		case -299522880:
			return 319;
		case -297483764:
			return 434;
		case -279765076:
			return 346;
		case -270094635:
			return 253;
		case -261141318:
			return 30;
		case -259123672:
			return 231;
		case -254562075:
			return 130;
		case -243260793:
			return 418;
		case -238080464:
			return 119;
		case -233743613:
			return 258;
		case -226366310:
			return 523;
		case -223469678:
			return 201;
		case -220282381:
			return 137;
		case -211583122:
			return 517;
		case -209894800:
			return 345;
		case -207792846:
			return 483;
		case -191424539:
			return 147;
		case -182889087:
			return 175;
		case -154581735:
			return 294;
		case -150493654:
			return 95;
		case -129643890:
			return 11;
		case -110352060:
			return 431;
		case -108780030:
			return 351;
		case -108307814:
			return 28;
		case -102827640:
			return 403;
		case -101740709:
			return 499;
		case -99303535:
			return 165;
		case -90486812:
			return 491;
		case -89829333:
			return 423;
		case -86199844:
			return 143;
		case -80522843:
			return 152;
		case -76237062:
			return 309;
		case -75928821:
			return 509;
		case -75024673:
			return 244;
		case -74031276:
			return 441;
		case -70727482:
			return 453;
		case -63926460:
			return 87;
		case -61411516:
			return 358;
		case -38135693:
			return 468;
		case -35658630:
			return 24;
		case -25901845:
			return 275;
		case -9438024:
			return 127;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 151;
		case 8924991:
			return 282;
		case 16844748:
			return 406;
		case 26054262:
			return 323;
		case 26245360:
			return 224;
		case 38162571:
			return 72;
		case 52706132:
			return 230;
		case 54073871:
			return 74;
		case 61537448:
			return 541;
		case 64896505:
			return 391;
		case 74872959:
			return 331;
		case 84709454:
			return 454;
		case 93964309:
			return 396;
		case 94263042:
			return 276;
		case 106479759:
			return 99;
		case 141950038:
			return 112;
		case 148595040:
			return 530;
		case 153152452:
			return 84;
		case 168171957:
			return 181;
		case 171499483:
			return 268;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 228;
		case 210001842:
			return 60;
		case 215903338:
			return 490;
		case 224551212:
			return 140;
		case 227918160:
			return 180;
		case 229371495:
			return 327;
		case 235928616:
			return 271;
		case 237155783:
			return 518;
		case 249726958:
			return 162;
		case 269047710:
			return 52;
		case 273461605:
			return 79;
		case 280705402:
			return 93;
		case 282809459:
			return 117;
		case 299694527:
			return 260;
		case 300221584:
			return 136;
		case 302205488:
			return 322;
		case 311708813:
			return 195;
		case 320943355:
			return 131;
		case 321629486:
			return 510;
		case 330026330:
			return 64;
		case 345808947:
			return 272;
		case 356365161:
			return 47;
		case 371850993:
			return 266;
		case 373691918:
			return 186;
		case 374115931:
			return 88;
		case 404823609:
			return 485;
		case 405586984:
			return 34;
		case 407136781:
			return 171;
		case 409602249:
			return 278;
		case 417081698:
			return 17;
		case 417525590:
			return 288;
		case 420709909:
			return 42;
		case 424920933:
			return 545;
		case 426191476:
			return 15;
		case 434558613:
			return 196;
		case 439465264:
			return 106;
		case 440043364:
			return 31;
		case 442317566:
			return 287;
		case 449774763:
			return 214;
		case 459290420:
			return 316;
		case 468797819:
			return 342;
		case 469053995:
			return 218;
		case 473295046:
			return 2;
		case 476714362:
			return 219;
		case 478884033:
			return 146;
		case 479419429:
			return 290;
		case 509781469:
			return 378;
		case 514932331:
			return 233;
		case 522677506:
			return 264;
		case 526003171:
			return 393;
		case 527226204:
			return 157;
		case 544152906:
			return 113;
		case 559573222:
			return 238;
		case 560154875:
			return 456;
		case 565812320:
			return 448;
		case 582380806:
			return 359;
		case 588987611:
			return 177;
		case 589380360:
			return 341;
		case 618699440:
			return 75;
		case 619839857:
			return 376;
		case 630808005:
			return 126;
		case 640520536:
			return 470;
		case 642824856:
			return 482;
		case 651395116:
			return 279;
		case 664571177:
			return 297;
		case 665676602:
			return 281;
		case 673606600:
			return 500;
		case 689024866:
			return 132;
		case 689930684:
			return 204;
		case 704802028:
			return 176;
		case 715735881:
			return 484;
		case 723021499:
			return 250;
		case 730069127:
			return 475;
		case 747514327:
			return 382;
		case 753127042:
			return 48;
		case 757752139:
			return 107;
		case 784360470:
			return 362;
		case 791041526:
			return 18;
		case 799106423:
			return 455;
		case 803929300:
			return 469;
		case 804063423:
			return 503;
		case 817925178:
			return 227;
		case 826868753:
			return 474;
		case 831940854:
			return 407;
		case 846837291:
			return 451;
		case 865557632:
			return 537;
		case 868326136:
			return 270;
		case 883901517:
			return 385;
		case 885203519:
			return 315;
		case 885378256:
			return 379;
		case 885777893:
			return 375;
		case 896725436:
			return 511;
		case 929582877:
			return 368;
		case 931649776:
			return 211;
		case 932909855:
			return 283;
		case 943561238:
			return 416;
		case 945612176:
			return 234;
		case 965467037:
			return 344;
		case 965986934:
			return 19;
		case 976539083:
			return 295;
		case 982765715:
			return 443;
		case 1010885152:
			return 7;
		case 1015669983:
			return 120;
		case 1028084603:
			return 446;
		case 1032791043:
			return 502;
		case 1050128548:
			return 269;
		case 1064154891:
			return 108;
		case 1074873669:
			return 142;
		case 1112996351:
			return 538;
		case 1126565489:
			return 486;
		case 1140218954:
			return 27;
		case 1151197909:
			return 242;
		case 1153686207:
			return 452;
		case 1157309080:
			return 514;
		case 1159471771:
			return 361;
		case 1160698568:
			return 133;
		case 1164928979:
			return 156;
		case 1166612791:
			return 330;
		case 1167397384:
			return 292;
		case 1177464213:
			return 38;
		case 1186594126:
			return 217;
		case 1193080109:
			return 182;
		case 1195508693:
			return 543;
		case 1203043430:
			return 259;
		case 1205826474:
			return 83;
		case 1207048789:
			return 167;
		case 1213993593:
			return 158;
		case 1221801385:
			return 310;
		case 1232840551:
			return 481;
		case 1238086793:
			return 347;
		case 1248935549:
			return 415;
		case 1250636944:
			return 245;
		case 1279586666:
			return 449;
		case 1280406542:
			return 442;
		case 1287917122:
			return 387;
		case 1302228510:
			return 349;
		case 1306158345:
			return 199;
		case 1321892118:
			return 357;
		case 1325325699:
			return 421;
		case 1341699707:
			return 526;
		case 1350371763:
			return 20;
		case 1350391819:
			return 73;
		case 1352699670:
			return 256;
		case 1358491857:
			return 249;
		case 1360745816:
			return 80;
		case 1362354162:
			return 497;
		case 1376646519:
			return 210;
		case 1399676951:
			return 207;
		case 1410198831:
			return 209;
		case 1421300489:
			return 414;
		case 1433244935:
			return 164;
		case 1441416901:
			return 208;
		case 1453909576:
			return 123;
		case 1466547629:
			return 118;
		case 1478132521:
			return 303;
		case 1480425906:
			return 450;
		case 1485195808:
			return 50;
		case 1485494263:
			return 100;
		case 1488286867:
			return 280;
		case 1488453464:
			return 318;
		case 1494062795:
			return 426;
		case 1497516462:
			return 5;
		case 1500064347:
			return 70;
		case 1509509592:
			return 35;
		case 1512816328:
			return 166;
		case 1517904467:
			return 203;
		case 1517951665:
			return 436;
		case 1521272922:
			return 458;
		case 1522511407:
			return 265;
		case 1549124796:
			return 325;
		case 1557082963:
			return 161;
		case 1561093093:
			return 386;
		case 1582370975:
			return 332;
		case 1583012985:
			return 289;
		case 1591451572:
			return 301;
		case 1601722481:
			return 521;
		case 1607768502:
			return 9;
		case 1609506757:
			return 105;
		case 1626481264:
			return 116;
		case 1643531967:
			return 125;
		case 1649996811:
			return 179;
		case 1660024373:
			return 148;
		case 1665756137:
			return 91;
		case 1666964801:
			return 527;
		case 1691618738:
			return 66;
		case 1698972798:
			return 352;
		case 1703398561:
			return 365;
		case 1703426636:
			return 43;
		case 1708045337:
			return 329;
		case 1713221411:
			return 135;
		case 1743048395:
			return 213;
		case 1744443559:
			return 377;
		case 1766284049:
			return 92;
		case 1774060092:
			return 544;
		case 1776302352:
			return 299;
		case 1788424349:
			return 445;
		case 1812677765:
			return 398;
		case 1822001510:
			return 197;
		case 1846061697:
			return 97;
		case 1850082804:
			return 193;
		case 1866434585:
			return 413;
		case 1867912207:
			return 68;
		case 1881028477:
			return 364;
		case 1884271742:
			return 51;
		case 1891256113:
			return 437;
		case 1908151693:
			return 335;
		case 1926308480:
			return 94;
		case 1932172605:
			return 360;
		case 1944170089:
			return 159;
		case 1947931439:
			return 216;
		case 1952610440:
			return 200;
		case 1954026328:
			return 307;
		case 1982676972:
			return 89;
		case 2008888900:
			return 178;
		case 2013720626:
			return 489;
		case 2016141805:
			return 6;
		case 2019386373:
			return 187;
		case 2024121624:
			return 190;
		case 2024383613:
			return 305;
		case 2024769126:
			return 293;
		case 2037589949:
			return 61;
		case 2048790450:
			return 498;
		case 2051822093:
			return 284;
		case 2068208444:
			return 428;
		case 2068253437:
			return 478;
		case 2077022393:
			return 291;
		case 2079292950:
			return 457;
		case 2080210939:
			return 267;
		case 2091701359:
			return 39;
		case 2103908624:
			return 397;
		case 2109952320:
			return 189;
		case 2113625508:
			return 324;
		case 2127412005:
			return 496;
		case 2127577956:
			return 241;
		case 2136753624:
			return 85;
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

int func_275(int iParam0)
{
	int iVar0;

	iVar0 = func_341(iParam0);
	if (iVar0 < 337)
	{
		return 0;
	}
	return 1;
}

int func_276(int iParam0)
{
	if (iParam0 == 1932172605)
	{
		return 1;
	}
	return 0;
}

void func_277(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == iParam1)
	{
		return;
	}
	if (iParam1 < iParam0)
	{
		iVar0 = iParam0;
		while (iVar0 > iParam1)
		{
			func_342((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_342(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_69(*(Global_1900718->f_1[0 /*2*/])))
	{
		func_75(*(Global_1900718->f_1[0 /*2*/]), 3);
	}
}

bool func_278(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_279()
{
	return Global_1099294->f_339;
}

int func_280()
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return Global_1070356->f_4;
}

int func_281(int iParam0, int iParam1)
{
	if (((PED::IS_PED_IN_COMBAT(Global_34, 0) || PED::IS_PED_IN_MELEE_COMBAT(Global_34)) || func_131(iParam1, 1024)) && PED::_0x336B3D200AB007CB(Global_34, Global_35, iParam0, iParam1) > 0)
	{
		return 1;
	}
	return 0;
}

int func_282(int iParam0)
{
	float fVar0;

	if (!MISC::GET_GROUND_Z_FOR_3D_COORD(Global_35, &fVar0, 0))
	{
		return 0;
	}
	if (iParam0->f_2 == 0 && MISC::ABSF((fVar0 - iParam0->f_77)) > 0.5f)
	{
		return 0;
	}
	if (BUILTIN::VDIST(Global_35, Global_35, Global_35.f_1, fVar0) > 1.2f)
	{
		return 0;
	}
	return 1;
}

bool func_283(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1949759)[iParam0 /*23*/])->f_1 && iParam1) != 0;
}

int func_284(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_285(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
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
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, bParam24);
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
	func_296(iParam0, 1);
	func_297(iParam0, 1);
	func_298(iParam0, 128);
}

int func_286(int iParam0)
{
	if (!func_144(iParam0))
	{
		return 0;
	}
	if (Global_1132695->f_6)
	{
		return 1;
	}
	return 0;
}

int func_287()
{
	return Global_17172.f_2976.f_88;
}

int func_288(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = MINIGAME::_0x15E90B6A993017AA();
	if (!func_144(iParam0))
	{
		return 0;
	}
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (MINIGAME::_0x10342CC82E8356E9(iVar0, uParam2))
		{
			if (uParam2->f_2 == iParam1)
			{
				func_343(uParam2->f_1, iParam0);
				if (*uParam2 == 1)
				{
					if (uParam2->f_3 > Global_1132695->f_7)
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_289(var uParam0)
{
	return 0;
}

char* func_290(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MG_BJACK";
		case 1:
			return "MG_DOMIN";
		case 2:
			return "MG_POKER";
		case 3:
			return "MG_FILLET";
		case 4:
			return "MG_MILKING_COW";
		case 5:
			return "MG_CLEAN_STALLS";
		case 6:
			return "MG_FENCE_BUILDING";
	}
	return "Unknown Minigame";
}

int func_291(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_344(bParam1, bParam2, bParam3);
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

int func_292()
{
	struct<7> Var0[7];
	int iVar50;
	int iVar51;
	int iVar52;

	if (!_NAMESPACE26::_0x0F99F6436528A089(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())))
	{
		return 0;
	}
	if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	iVar51 = _NAMESPACE26::_0xD1BF325C8252A982(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()), &Var0);
	iVar50 = 0;
	while (iVar50 <= (iVar51 - 1))
	{
		iVar52 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Var0[iVar50 /*7*/]);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar52) || PLAYER::IS_PLAYER_DEAD(iVar52))
		{
		}
		else if (func_345(1048576, iVar52))
		{
			return 1;
		}
		iVar50++;
	}
	return 0;
}

int func_293(int iParam0, int iParam1)
{
	var uVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	uVar0 = func_143(iParam0, iParam1);
	return uVar0;
}

bool func_294(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_83() == 0)
	{
		return func_346(iParam0);
	}
	return iParam0 <= func_347();
}

void func_295(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949759)[iParam0 /*23*/])->f_1 = (((*Global_1949759)[iParam0 /*23*/])->f_1 - (((*Global_1949759)[iParam0 /*23*/])->f_1 && iParam1));
}

void func_296(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		if (((*Global_1949759)[iParam0 /*23*/])->f_5 == 5 && !func_283(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949759)[iParam0 /*23*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949759)[iParam0 /*23*/])->f_3, iParam1);
		}
	}
}

void func_297(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1949759)[iParam0 /*23*/])->f_3, iParam1);
	}
}

void func_298(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949759)[iParam0 /*23*/])->f_1 = (((*Global_1949759)[iParam0 /*23*/])->f_1 || iParam1);
}

bool func_299()
{
	return Global_1915180->f_20141;
}

int func_300(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
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
	iVar0 = &Global_1275573->f_154[&Global_1275573];
	iVar1 = Global_1275573->f_8;
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
			if (PED::_0x4912DFE492DB98CD(Global_34, "inInspectionMode"))
			{
				return 0;
			}
		}
		if (bParam0 && !PLAYER::IS_PLAYER_CONTROL_ON(iVar0))
		{
			if (bParam6 && Global_1099294->f_3 & 32 != 0)
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
		if (Global_1915180->f_20136 || Global_1915180->f_21989.f_1)
		{
			return 0;
		}
		if (TASK::_0xD04241BBF6D03A5E(Global_34) != 0)
		{
			return 0;
		}
	}
	if (func_348())
	{
		return 0;
	}
	if (Global_15)
	{
		return 0;
	}
	if (!bParam2 && (((Global_1939067->f_10 || Global_1939067->f_11) || Global_1939067->f_12) || Global_1939067->f_13))
	{
		return 0;
	}
	if (!bParam3)
	{
		iVar4 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (Global_1225057->f_9330 != -1)
		{
			return 0;
		}
		if (((*Global_1122836)[iVar4 /*54*/])->f_34 & 1 != 0 && ((*Global_1122836)[iVar4 /*54*/])->f_34 & 2 == 0)
		{
			return 0;
		}
		if (Global_1124829->f_293)
		{
			return 0;
		}
		if (Global_1572887->f_106.f_75 > 10 && Global_1572887->f_106.f_75 < 14)
		{
			return 0;
		}
		else if (Global_1572887->f_106.f_75 > 14)
		{
			return 0;
		}
	}
	if (!bParam8)
	{
		if ((SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(2) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(8)) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(9))
		{
			if ((Global_1048576 || Global_2883584) // PointerArith)
			{
				return 0;
			}
			if (&Global_1048581)
			{
				return 0;
			}
			if (&Global_1048585)
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_301(int iParam0)
{
	struct<16> Var0;

	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(((*Global_1938417)[iParam0 /*16*/])->f_10)))
	{
		return;
	}
	*((*Global_1938417)[iParam0 /*16*/]) = { Var0 };
	Global_1938417->f_161 = (Global_1938417->f_161 - 1);
	if (Global_1938417->f_161 < 0)
	{
		Global_1938417->f_161 = 0;
	}
}

char* func_302(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_303(int iParam0)
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

void func_304(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_305(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

void func_306(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_349(iParam0);
	if (!func_350(1))
	{
		return;
	}
	if (bParam1)
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_351(128) && !func_352(18))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_353() == 4)
	{
		func_226(17);
	}
	func_354(1024);
}

bool func_307(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
	MISC::CLEAR_BIT((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_308(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
	MISC::SET_BIT((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

void func_309()
{
	int iVar0;

	if (func_83() == -1)
	{
		return;
	}
	iVar0 = &Global_1275573;
	if (func_131(Global_1572887->f_7, 1))
	{
		func_215(&(((*Global_1055966)[iVar0 /*436*/])->f_153.f_10), 4);
	}
	else
	{
		func_219(&(((*Global_1055966)[iVar0 /*436*/])->f_153.f_10), 4);
	}
	((*Global_1055966)[iVar0 /*436*/])->f_153 = Global_1572887->f_106;
	((*Global_1055966)[iVar0 /*436*/])->f_153.f_1 = Global_1572887->f_106.f_9;
	((*Global_1055966)[iVar0 /*436*/])->f_153.f_2 = Global_1572887->f_106.f_10;
	((*Global_1055966)[iVar0 /*436*/])->f_153.f_3 = { Global_1572887->f_106.f_11 };
	((*Global_1055966)[iVar0 /*436*/])->f_153.f_8 = Global_1572887->f_106.f_13;
	((*Global_1055966)[iVar0 /*436*/])->f_153.f_5 = { Global_1572887->f_342 };
	((*Global_1055966)[iVar0 /*436*/])->f_153.f_9 = Global_1572887->f_106.f_74;
	if (func_150(1024))
	{
		func_215(&(((*Global_1055966)[iVar0 /*436*/])->f_153.f_10), 2);
	}
	else
	{
		func_219(&(((*Global_1055966)[iVar0 /*436*/])->f_153.f_10), 2);
	}
}

int func_310(struct<2> Param0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (func_27((Global_1185132->f_66[iVar0 /*20*/])->f_7, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_311(int iParam0)
{
	return (Global_1185132->f_66[iParam0 /*20*/])->f_3;
}

var func_312(int iParam0)
{
	return (Global_1184573->f_1[iParam0 /*26*/])->f_3;
}

struct<8> func_313(int iParam0, var uParam1)
{
	struct<8> Var0;
	struct<5> Var8;

	if (((func_355(&Var8, iParam0) && func_356(&Var8)) && func_357(&Var8, uParam1)) && func_358(&Var8))
	{
		func_359(Var8, 37194763, &Var0, 1);
	}
	return Var0;
}

void func_314(var uParam0, int iParam1)
{
	uParam0->f_20 = (uParam0->f_20 || iParam1);
}

int func_315(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Global_265331->f_2)
	{
		if (&Global_265331->f_63755[iVar0 /*8*/] == iParam0)
		{
			return iVar0;
		}
		if ((Global_265331->f_4[iVar0 /*51*/])->f_28 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_316(int iParam0)
{
	if (func_360(iParam0, 0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_317(int iParam0)
{
	if (func_361(iParam0, 0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_318(int iParam0)
{
	int iVar0;

	if (func_83() == -1)
	{
		return -1;
	}
	iVar0 = 9;
	while (iVar0 <= 25)
	{
		if (func_362(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

Vector3 func_319(int iParam0)
{
	struct<2> Var0;
	vector3 vVar5;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12;

	vVar5 = -1;
	vVar5.f_1 = -1;
	vVar5.f_2 = -1;
	if (!func_363(&Var0))
	{
		return vVar5;
	}
	if (!func_364(&Var0, 13, 0, 0, 1))
	{
		return vVar5;
	}
	if (!func_364(&Var0, 17, 0, 0, 1))
	{
		return vVar5;
	}
	uVar12 = Var0.f_1;
	iVar9 = func_365(&Var0, 0);
	iVar8 = 0;
	while (iVar8 <= (iVar9 - 1))
	{
		Var0.f_1 = uVar12;
		if (!func_364(&Var0, 19, iVar8, 0, 1))
		{
		}
		else if (!func_364(&Var0, 20, 0, 0, 1))
		{
		}
		else
		{
			iVar10 = func_365(&Var0, 1);
			if (!func_364(&Var0, 22, iParam0, 0, 0))
			{
			}
			else
			{
				iVar11 = DATAFILE::_0xE13634BB6BAF0734(Var0, Var0.f_1);
				vVar5.x = iVar8;
				vVar5.f_1 = ((iVar10 - iVar11) - 1);
			}
			else
			{
				iVar8++;
			}
			return vVar5;
		}
	}

struct<2> func_320(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 100)
	{
		return func_366();
	}
	return ((*Global_1835011)[iParam0 /*72*/])->f_1;
}

bool func_321(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return func_322(iParam0) != -1;
}

int func_322(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		iVar1 = iVar0;
		if (iParam0 == func_367(iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -1;
}

struct<2> func_323(int iParam0)
{
	return func_368(iParam0);
}

struct<2> func_324(int iParam0)
{
	var uVar0;
	int iVar5;

	if (!func_363(&uVar0))
	{
		return func_366();
	}
	if (!func_364(&uVar0, 13, 0, 0, 1))
	{
		return func_366();
	}
	if (!func_364(&uVar0, 17, 0, 0, 1))
	{
		return func_366();
	}
	if (!func_364(&uVar0, 19, *iParam0, 0, 1))
	{
		return func_366();
	}
	if (!func_364(&uVar0, 20, 0, 0, 1))
	{
		return func_366();
	}
	if (!func_364(&uVar0, 23, iParam0->f_1, 0, 1))
	{
		return func_366();
	}
	iVar5 = func_369(&uVar0);
	return func_327(iVar5);
}

struct<2> func_325(int iParam0)
{
	var uVar0;
	struct<5> Var5;

	if (iParam0 == 0)
	{
		return func_366();
	}
	if (!func_370(&uVar0, 7, iParam0, 76966722))
	{
		return func_366();
	}
	func_371(7, &uVar0, &Var5);
	if (Var5.f_4 != 7)
	{
		return func_366();
	}
	return func_372(Var5.f_3, Var5.f_4);
}

int func_326(int iParam0)
{
	switch (iParam0)
	{
		case -504335712:
			return 1005649839 /* GXTEntry: "VS Mission" */;
		case 395262693:
			return -47596571 /* GXTEntry: "Deathmatch" */;
		case -933924539:
			return 921725912 /* GXTEntry: "Race" */;
		default:
			break;
	}
	return 0;
}

struct<2> func_327(int iParam0)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_372(iParam0, 2) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_372(iParam0, 7) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_372(iParam0, 5) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_372(iParam0, 6) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_372(iParam0, 8) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_372(iParam0, 3) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_372(iParam0, 4) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	return func_366();
}

void func_328(var uParam0)
{
	uParam0->f_20 = 0;
}

int func_329(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (&Global_265331->f_117321.f_6758[iVar0] == iParam0)
		{
			return &(Global_265331->f_117321.f_6725[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

var func_330(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar17;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar17 = _NAMESPACE71::_SHOW_SIMPLE_RIGHT_TEXT(&Var0, &Var13, iParam5);
	return uVar17;
}

void func_331(struct<2> Param0, int iParam2)
{
	if (!func_69(Param0))
	{
		func_70(Global_1900718->f_1[iParam2 /*2*/]);
	}
	else
	{
		*(Global_1900718->f_1[iParam2 /*2*/]) = { Param0 };
	}
	func_373(Param0, 0, 1, -1);
}

int func_332(struct<2> Param0, struct<2> Param2, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_69(Param0))
	{
		return 0;
	}
	if (!func_69(Param2))
	{
		return 1;
	}
	iVar0 = func_82(Param0);
	iVar1 = func_82(Param2);
	if (iVar1 == iVar0)
	{
		if (bParam4)
		{
			return 1;
		}
	}
	if (iVar1 == 2 || iVar1 == 7)
	{
		if (bParam4 && (iVar0 == 2 || iVar0 == 7))
		{
			return 1;
		}
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 7)
	{
		return 1;
	}
	if (iVar1 == 6)
	{
		return 0;
	}
	if (iVar0 == 6)
	{
		return 1;
	}
	if (iVar1 == 5)
	{
		return 0;
	}
	if (iVar0 == 5)
	{
		return 1;
	}
	if (iVar1 == 3)
	{
		if (bParam4 && iVar0 == 3)
		{
			return 1;
		}
		return 0;
	}
	if (iVar0 == 3)
	{
		return 1;
	}
	if (iVar1 == 4)
	{
		if (bParam4 && iVar0 == 4)
		{
			return 1;
		}
		return 0;
	}
	if (iVar0 == 4)
	{
		return 1;
	}
	return 0;
}

int func_333(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_374(iParam0))
	{
		return 0;
	}
	if (func_375(iParam0, uParam1, &uVar0))
	{
		func_371(iParam0, &uVar0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_334(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9;
		case 1:
			return 10;
		case 2:
			return 11;
		case 3:
			return 12;
		case 4:
			return 13;
		default:
			break;
	}
	return -1;
}

int func_335(int iParam0, var uParam1)
{
	*uParam1 = iParam0;
	switch (iParam0)
	{
		case 0:
			uParam1->f_1 = 0;
			uParam1->f_2 = 40;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2971f, -1324.285f, 46.89f };
			uParam1->f_8 = 0.29f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 1:
			uParam1->f_1 = 0;
			uParam1->f_2 = 111;
			uParam1->f_3 = 0;
			uParam1->f_4 = 400f;
			uParam1->f_5 = { 1339.562f, -1372.173f, 83.2967f };
			uParam1->f_8 = 80f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 2:
			uParam1->f_1 = 0;
			uParam1->f_2 = 98;
			uParam1->f_3 = 0;
			uParam1->f_4 = 300f;
			uParam1->f_5 = { 2938.582f, 520.6577f, 44.3412f };
			uParam1->f_8 = 126.9f;
			uParam1->f_9 = 2f;
			return 1;
		case 3:
			uParam1->f_1 = 1;
			uParam1->f_2 = 40;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -936.9756f, -1390.084f, 49.5777f };
			uParam1->f_8 = -174.39f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 4:
			uParam1->f_1 = 1;
			uParam1->f_2 = 74;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100f;
			uParam1->f_5 = { 1522.005f, 431.2095f, 89.679f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 5:
			uParam1->f_1 = 1;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 150f;
			uParam1->f_5 = { 2515.659f, -1245.743f, 49.5757f };
			uParam1->f_8 = -45f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 6:
			uParam1->f_1 = 3;
			uParam1->f_2 = 26;
			uParam1->f_3 = 0;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -1826.215f, -433.9676f, 159.7386f };
			uParam1->f_8 = 157.4f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 7:
			uParam1->f_1 = 3;
			uParam1->f_2 = 81;
			uParam1->f_3 = 0;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -243.7256f, 771.2707f, 117.8849f };
			uParam1->f_8 = -69.92f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 8:
			uParam1->f_1 = 3;
			uParam1->f_2 = 98;
			uParam1->f_3 = 0;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { 2946.444f, 500.1154f, 45.53999f };
			uParam1->f_8 = -84.13f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 9:
			uParam1->f_1 = 2;
			uParam1->f_2 = 40;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2148f, -1316.547f, 42.6787f };
			uParam1->f_8 = 60f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 10:
			uParam1->f_1 = 2;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { 2630.74f, -1226.25f, 52.3794f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 11:
			uParam1->f_1 = 2;
			uParam1->f_2 = 80;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -327.6681f, -357.796f, 87.055f };
			uParam1->f_8 = -63f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 12:
			uParam1->f_1 = 2;
			uParam1->f_2 = 121;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -5510.395f, -2913.764f, 0.6353f };
			uParam1->f_8 = 90f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 13:
			uParam1->f_1 = 2;
			uParam1->f_2 = 81;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -304.5352f, 801.1352f, 117.9785f };
			uParam1->f_8 = 135f;
			uParam1->f_9 = 2.5f;
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_336(int iParam0)
{
	return SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_19683.f_260), iParam0);
}

char* func_337(int iParam0, int iParam1, bool bParam2)
{
	struct<5> Var0;

	func_376(iParam0, &Var0);
	if (iParam1 == 0)
	{
		if (bParam2)
		{
			if (iParam0 > 86400)
			{
				return MISC::_CREATE_VAR_STRING(2, "NET_MG_HELP_GAMBLING_AVAILABLE_D", Var0.f_2, Var0.f_3, Var0.f_4);
			}
			else if (iParam0 > 3600)
			{
				return MISC::_CREATE_VAR_STRING(2, "NET_MG_HELP_GAMBLING_AVAILABLE_H", Var0.f_3, Var0.f_4);
			}
			return MISC::_CREATE_VAR_STRING(2, "NET_MG_HELP_GAMBLING_AVAILABLE_M", Var0.f_4);
		}
		return MISC::_CREATE_VAR_STRING(2, "NET_MG_HELP_GAMBLING_AVAILABLE_D", Var0.f_2, Var0.f_3, Var0.f_4);
	}
	if (bParam2)
	{
		if (iParam0 > 86400)
		{
			return MISC::_CREATE_VAR_STRING(2, "NET_MG_HELP_PRIVATE_AVAILABLE_D", Var0.f_2, Var0.f_3, Var0.f_4);
		}
		else if (iParam0 > 3600)
		{
			return MISC::_CREATE_VAR_STRING(2, "NET_MG_HELP_PRIVATE_AVAILABLE_H", Var0.f_3, Var0.f_4);
		}
		return MISC::_CREATE_VAR_STRING(2, "NET_MG_HELP_PRIVATE_AVAILABLE_M", Var0.f_4);
	}
	return MISC::_CREATE_VAR_STRING(2, "NET_MG_HELP_PRIVATE_AVAILABLE_D", Var0.f_2, Var0.f_3, Var0.f_4);
}

void func_338(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

bool func_339(var uParam0, var uParam1)
{
	*uParam0 = Global_1234391->f_8113;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = uParam1;
	return (DATAFILE::_0x603AC35FD4602C76(*uParam0) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

int func_340()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	vVar1.x = Global_1234391->f_8113;
	vVar1.f_2 = -1041770777;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar1.f_1), &vVar1))
	{
		iVar0 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(vVar1.x, vVar1.y);
	}
	return iVar0;
}

int func_341(int iParam0)
{
	return func_377(iParam0) + 30;
}

void func_342(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { *(Global_1900718->f_1[iParam0 /*2*/]) };
	*(Global_1900718->f_1[iParam0 /*2*/]) = { *(Global_1900718->f_1[iParam1 /*2*/]) };
	*(Global_1900718->f_1[iParam1 /*2*/]) = { Var0 };
}

bool func_343(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return (iParam0 == -471827042 || iParam0 == -92667149);
		default:
			break;
	}
	return iParam0 == -92667149;
}

int func_344(bool bParam0, bool bParam1, bool bParam2)
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

bool func_345(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1099294->f_3 && iParam0) != 0;
	}
	return (((*Global_1097610)[iParam1 /*51*/])->f_3 && iParam0) != 0;
}

bool func_346(int iParam0)
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

int func_347()
{
	if (func_83() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_348()
{
	return (ANIMSCENE::_0x25557E324489393C(Global_26285) && ANIMSCENE::_0xCBFC7725DE6CE2E0(Global_26285, 0));
}

void func_349(int iParam0)
{
	Global_1099294->f_26.f_12 = iParam0;
}

bool func_350(int iParam0)
{
	return (Global_1099294->f_26.f_7 && iParam0) != 0;
}

bool func_351(int iParam0)
{
	return (Global_1099294->f_26.f_9 && iParam0) != 0;
}

bool func_352(int iParam0)
{
	return (Global_1099294->f_4[Global_1100047[iParam0 /*2*/]] && ((*Global_1100047)[iParam0 /*2*/])->f_1) == ((*Global_1100047)[iParam0 /*2*/])->f_1;
}

int func_353()
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

void func_354(int iParam0)
{
	if (func_378(iParam0))
	{
		return;
	}
	Global_1099294->f_26.f_9 = (Global_1099294->f_26.f_9 || iParam0);
}

bool func_355(var uParam0, int iParam1)
{
	if (!DATAFILE::_0x7907969497EA92F5(Global_1185132->f_443))
	{
		return false;
	}
	*uParam0 = Global_1185132->f_443;
	uParam0->f_2 = -1093317127;
	uParam0->f_3 = func_379(iParam1);
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_356(var uParam0)
{
	uParam0->f_2 = -310067910;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_357(var uParam0, var uParam1)
{
	uParam0->f_2 = -1739269194;
	uParam0->f_3 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_358(var uParam0)
{
	uParam0->f_2 = 1701407264;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_359(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_STRING(uParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_360(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1957416901:
			return 7;
		case -1185533313:
			return 10;
		case -784189810:
			return 0;
		case -79999383:
			return 6;
		case -63669280:
			return 2;
		case 218185167:
			return 8;
		case 851921060:
			return 3;
		case 1457860192:
			return 5;
		case 1579717899:
			return 1;
		case 1744858848:
			return 9;
		case 2028478397:
			return 4;
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

int func_361(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1918441640:
			return 2;
		case -1581094459:
			return 8;
		case -1437925683:
			return 12;
		case -725256130:
			return 17;
		case -632356431:
			return 14;
		case -559809431:
			return 10;
		case -548018579:
			return 13;
		case -533426613:
			return 1;
		case -457802746:
			return 3;
		case -222655798:
			return 16;
		case 10577687:
			return 15;
		case 424482930:
			return 6;
		case 1153715636:
			return 5;
		case 1175500245:
			return 11;
		case 1272390114:
			return 7;
		case 1788958412:
			return 4;
		case 1816768801:
			return 0;
		case 1842544025:
			return 9;
		case 1943481570:
			return 18;
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

int func_362(int iParam0)
{
	if (!func_380(iParam0))
	{
		return 0;
	}
	if (func_83() == -1)
	{
		return 0;
	}
	return ((*Global_1835011)[iParam0 /*72*/])->f_51;
}

int func_363(var uParam0)
{
	var uVar0;
	var uVar1;

	uVar0 = (Global_1070356->f_26934[29 /*4*/])->f_3;
	if (!DATAFILE::_0x7907969497EA92F5(uVar0))
	{
		return 0;
	}
	if (!DATAFILE::_0x603AC35FD4602C76(uVar0))
	{
		return 0;
	}
	MISC::_COPY_MEMORY(uParam0, &uVar1, 5);
	*uParam0 = uVar0;
	return 1;
}

int func_364(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;

	uVar0 = uParam0->f_1;
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = iParam3;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0))
	{
		uParam0->f_1 = uVar0;
		return 0;
	}
	return 1;
}

int func_365(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	return DATAFILE::_DATAFILE_GET_NUM_NODES(uParam0);
}

struct<2> func_366()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

int func_367(int iParam0)
{
	return ((*Global_1275761)[iParam0 /*37*/])->f_9;
}

struct<2> func_368(int iParam0)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	MISC::_COPY_MEMORY(&Var0, &(((*Global_1275761)[iParam0 /*37*/])->f_6), 2);
	return Var0;
}

int func_369(var uParam0)
{
	return func_381(uParam0, 59, 1);
}

bool func_370(var uParam0, int iParam1, int iParam2, int iParam3)
{
	*uParam0 = Global_1132968->f_7;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = func_382(iParam1);
	uParam0->f_4 = iParam2;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

void func_371(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_383(iParam0, uParam2->f_1);
	uParam1->f_2 = -2140901307;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_2 = iVar0;
	uParam1->f_2 = -2140901307;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_9), uParam1);
	uParam1->f_2 = 1292053410;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_17), uParam1);
	if (*uParam2 == 3)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_384(iVar0);
		}
	}
	else if (*uParam2 == 4)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = iVar0;
		}
	}
	else if (*uParam2 == 5)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_385(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_386(iVar0);
		}
		uParam1->f_2 = 162343104;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_387(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_7 = func_388(iVar0);
	uParam1->f_2 = 1060782978;
	DATAFILE::_DATAFILE_GET_HASH(&(uParam2->f_8), uParam1);
	uParam1->f_2 = 162343104;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	uParam1->f_2 = -733480474;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_25), uParam1);
	uParam1->f_2 = 492825771;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_26), uParam1);
	uParam1->f_2 = -839279581;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_27), uParam1);
	uParam1->f_2 = -640941103;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_28), uParam1);
	iVar0 = 0;
	uParam1->f_2 = -2025968302;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_29 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -1829781569;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_30 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -1999176766;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_31 = iVar0;
}

struct<2> func_372(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_389(iParam0, &(Global_1070356->f_634), func_177(iParam1));
			break;
		case 3:
			Var0.f_1 = func_389(iParam0, &(Global_1070356->f_634.f_602), func_177(iParam1));
			break;
		case 4:
			Var0.f_1 = func_389(iParam0, &(Global_1070356->f_634.f_2104), func_177(iParam1));
			break;
		case 5:
			Var0.f_1 = func_389(iParam0, &(Global_1070356->f_634.f_12606), func_177(iParam1));
			break;
		case 6:
			Var0.f_1 = func_389(iParam0, &(Global_1070356->f_634.f_12908), func_177(iParam1));
			break;
		case 7:
			Var0.f_1 = func_389(iParam0, &(Global_1070356->f_634.f_15910), func_177(iParam1));
			break;
		case 8:
			Var0.f_1 = func_389(iParam0, &(Global_1070356->f_634.f_15981), func_177(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_366();
	}
	return Var0;
}

int func_373(struct<2> Param0, bool bParam2, int iParam3, int iParam4)
{
	struct<4> Var0;

	if (func_390(Param0) >= 0)
	{
		return 0;
	}
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_1 = { Param0 };
	Var0 = func_179(Param0);
	Var0.f_3 = iParam3;
	func_391(&Var0, bParam2, iParam4);
	return 1;
}

int func_374(int iParam0)
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

bool func_375(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1132968->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_382(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_376(int iParam0, var uParam1)
{
	*uParam1 = 0;
	uParam1->f_1 = 0;
	uParam1->f_2 = (iParam0 / 86400);
	iParam0 = (iParam0 % 86400);
	uParam1->f_3 = (iParam0 / 3600);
	iParam0 = (iParam0 % 3600);
	uParam1->f_4 = (iParam0 / 60);
	iParam0 = (iParam0 % 60);
	uParam1->f_5 = iParam0;
}

int func_377(int iParam0)
{
	return iParam0 * 31;
}

bool func_378(int iParam0)
{
	return (Global_1099294->f_26.f_9 && iParam0) == iParam0;
}

int func_379(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1697883736;
		case 1:
			return 1927192818;
		case 2:
			return -1363591469;
		case 3:
			return 1635448909;
		case 4:
			return -604494871;
		case 5:
			return -993281498;
		case 6:
			return -1871525158;
		case 12:
			return -596286663;
		case 13:
			return 923956646;
		case 14:
			return 1459450644;
		case 15:
			return -2071675432;
		case 7:
			return -552339597;
		case 9:
			return 2144670272;
		case 8:
			return 996459079;
		case 10:
			return 1996177174;
		case 11:
			return -1702168032;
		default:
			break;
	}
	return 0;
}

bool func_380(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

var func_381(var uParam0, int iParam1, int iParam2)
{
	var uVar0;

	uParam0->f_2 = iParam1;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, uParam0))
	{
	}
	return uVar0;
}

int func_382(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("challenge");
			break;
		case -3:
			iVar0 = 1300413597;
			break;
		case 1:
			iVar0 = -1841318328;
			break;
		case -2:
			iVar0 = joaat("gold");
			break;
		case 2:
			iVar0 = -1599460565;
			break;
		case 3:
			iVar0 = 1610555441;
			break;
		case 4:
			iVar0 = 2080488347;
			break;
		case 5:
			iVar0 = 1107336882;
			break;
		case 6:
			iVar0 = -1307562954;
			break;
		case 7:
			iVar0 = 1198585370;
			break;
		case 8:
			iVar0 = 1753821005;
			break;
		case 9:
			iVar0 = joaat("property");
			break;
		case 10:
			iVar0 = 1894568478;
			break;
		case 11:
			iVar0 = joaat("title");
			break;
		case 12:
			iVar0 = joaat("shop");
			break;
		case 13:
			iVar0 = 1252941330;
			break;
		case 14:
			iVar0 = -1930354636;
			break;
		case 15:
			iVar0 = 1332629624;
			break;
		case 16:
			iVar0 = 1746212499;
			break;
		case 17:
			iVar0 = 1859328971;
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

int func_383(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_392(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_384(int iParam0)
{
	switch (iParam0)
	{
		case 1336837986:
			return 0;
		case 2124631622:
			return 1;
		case -66250361:
			return 2;
		case 1443764480:
			return 3;
		case -668110249:
			return 4;
		case -1381389849:
			return 5;
		case 536699577:
			return 6;
		case 541147288:
			return 7;
		case 377122918:
			return 8;
		case 1158195437:
			return 9;
		case -1261475678:
			return 10;
		case -621956193:
			return 11;
		case 1081776803:
			return 12;
		case -218697175:
			return 13;
		case -867762478:
			return 14;
		case 602097925:
			return 15;
		case 1724417419:
			return 16;
		case -728200180:
			return 17;
		case 1404415665:
			return 18;
		case 339077182:
			return 20;
		case 650120418:
			return 21;
		case 1695693301:
			return 28;
		case -1809176396:
			return 19;
		case 349772825:
			return 22;
		case 1657045547:
			return 23;
		case -590482787:
			return 24;
		case -1711308722:
			return 25;
		case -409129282:
			return 26;
		case -1790985606:
			return 27;
		default:
			break;
	}
	return -1;
}

int func_385(int iParam0)
{
	switch (iParam0)
	{
		case -747096482:
			return 0;
		case 390152599:
			return 1;
		case 348001928:
			return 2;
		case 687137831:
			return 3;
		case 1221273613:
			return 4;
		case -669486032:
			return 5;
		case -1044132584:
			return 6;
		default:
			break;
	}
	return -1;
}

int func_386(int iParam0)
{
	switch (iParam0)
	{
		case 1697883736:
			return 0;
		case 1927192818:
			return 1;
		case -1363591469:
			return 2;
		case 1635448909:
			return 3;
		case -604494871:
			return 4;
		case -993281498:
			return 5;
		case -1871525158:
			return 6;
		case -596286663:
			return 12;
		case 923956646:
			return 13;
		case 1459450644:
			return 14;
		case -2071675432:
			return 15;
		case -552339597:
			return 7;
		case 2144670272:
			return 9;
		case 996459079:
			return 8;
		case 1996177174:
			return 10;
		case -1702168032:
			return 11;
		default:
			break;
	}
	return -1;
}

int func_387(int iParam0)
{
	switch (iParam0)
	{
		case 2049341823:
			return 0;
		case 1655635003:
			return 1;
		case -435635781:
			return 2;
		case 2006131499:
			return 3;
		case -1641798436:
			return 4;
		case 352400957:
			return 5;
		case 1211286129:
			return 6;
		case 787592898:
			return 7;
		case -568832219:
			return 8;
		case -1103026985:
			return 9;
		default:
			break;
	}
	return 0;
}

int func_388(int iParam0)
{
	switch (iParam0)
	{
		case joaat("null"):
			return -1;
		case joaat("normal"):
			return 0;
		case -640677282:
			return 1;
		case -1950303839:
			return 2;
		case 1322114923:
			return 3;
		case -525004462:
			return 4;
		case 1419735597:
			return 5;
		case 1004744465:
			return 6;
		case joaat("bountyhunter"):
			return 7;
		case 1777227915:
			return 8;
		case 408825843:
			return 9;
		case joaat("hunter"):
			return 10;
		case 64621749:
			return 11;
		case -1346830927:
			return 12;
		case -218234180:
			return 13;
		case 751663875:
			return 14;
		case 1766283257:
			return 15;
		case -269943670:
			return 16;
		case 522313648:
			return 17;
		default:
			break;
	}
	return -1;
}

int func_389(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = (iParam2 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (uParam1[iVar2 /*3*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (uParam1[iVar2 /*3*/] < iParam0)
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

int func_390(struct<2> Param0)
{
	int iVar0;

	if (Global_1184439->f_129 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1184439->f_129)
	{
		if (func_27(((*Global_1184439)[iVar0 /*4*/])->f_1, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_391(var uParam0, bool bParam1, int iParam2)
{
	func_393(uParam0, iParam2);
	if (Global_1184439->f_129 == 1)
	{
		iParam2 = 0;
		bParam1 = true;
	}
	if (bParam1)
	{
		func_394(func_390(uParam0->f_1));
	}
	else
	{
		func_395();
	}
}

int func_392(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_396(iParam0, uParam1, &uVar0))
	{
		func_397(&uVar0, iParam0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_393(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	if (Global_1184439->f_129 >= 32)
	{
		Global_1184439->f_129 = 32;
		return;
	}
	if (iParam1 >= Global_1184439->f_129)
	{
		iParam1 = -1;
	}
	if (iParam1 <= -1)
	{
		*((*Global_1184439)[Global_1184439->f_129 /*4*/]) = { *uParam0 };
		Global_1184439->f_129++;
		return;
	}
	iVar0 = iParam1;
	iVar1 = (Global_1184439->f_129 - 1);
	Var2.f_1 = -1;
	Var2.f_1.f_1 = -1;
	while (iVar1 >= iVar0)
	{
		Var2 = { *((*Global_1184439)[iVar1 /*4*/]) };
		*((*Global_1184439)[iVar1 /*4*/]) = { *((*Global_1184439)[iVar1 + 1 /*4*/]) };
		*((*Global_1184439)[iVar1 + 1 /*4*/]) = { Var2 };
		iVar1 = (iVar1 - 1);
	}
	*((*Global_1184439)[iParam1 /*4*/]) = { *uParam0 };
	Global_1184439->f_129++;
}

void func_394(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_1184439->f_129)
	{
		return;
	}
	Global_1184439->f_130 = iParam0;
	Global_1184439->f_131 = Global_1184439[iParam0 /*4*/];
}

void func_395()
{
	if (Global_1184439->f_131 == 0)
	{
		return;
	}
	Global_1184439->f_130 = func_398(Global_1184439->f_131);
	if (Global_1184439->f_130 < 0)
	{
		Global_1184439->f_131 = 0;
	}
}

bool func_396(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1132968->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_382(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_397(var uParam0, int iParam1, var uParam2)
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

int func_398(int iParam0)
{
	int iVar0;

	if (Global_1184439->f_129 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1184439->f_129)
	{
		if (Global_1184439[iVar0 /*4*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

