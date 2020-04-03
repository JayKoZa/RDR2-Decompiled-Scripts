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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	char* sLocal_30 = NULL;
	char* sLocal_31 = NULL;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	sLocal_30 = "props_misc@campfires@5_logs";
	sLocal_31 = "Script_PropCampfire";
	uLocal_33 = uLocal_33;
	func_1("START THREAD");
	iVar0 = MISC::GET_GAME_TIMER();
	func_2();
	func_3();
	func_1("NETWORK_CACHE_MATCHMAKING_GLOBAL_DATA - before");
	if (func_4(33554432))
	{
		func_5(33554432);
		func_6();
	}
	func_1("NETWORK_CACHE_MATCHMAKING_GLOBAL_DATA - after");
	func_1("Main loop start");
	if (!func_7(0, 0))
	{
		func_8();
		func_9();
	}
	while (!func_7(0, 0))
	{
		func_10();
		switch (func_11(PLAYER::PLAYER_ID()))
		{
			case 0:
				if (func_12() > 0)
				{
					if (func_13() && func_14())
					{
						func_15();
					}
					else if (Global_1572887->f_106.f_9 == -1 && Global_1572887->f_106.f_13 != 3)
					{
						func_16();
					}
					else if (Global_1572887->f_106.f_9 == -1 && Global_1572887->f_106.f_13 == 3)
					{
						func_15();
					}
					else if (func_17())
					{
						func_16();
					}
					else if (!func_18(Global_1572887->f_106.f_11))
					{
						func_15();
					}
					else
					{
						switch (func_19(Global_1572887->f_106.f_11))
						{
							case -1450443819:
							case -1084413800:
							case -994383356: /* GXTEntry: "Red Dead Online Mission - Intro Blackwater" */
							case -647435344:
							case -233421195: /* GXTEntry: "Red Dead Online Mission - Intro Tumbleweed" */
							case 322803854:
							case 397994890:
							case 765518144: /* GXTEntry: "Red Dead Online Mission - Intro Rhodes" */
							case 840529594: /* GXTEntry: "Red Dead Online Mission - Intro Valentine" */
							case 943006457:
							case 1852077510:
							case 2018479297:
								func_16();
								break;
							default:
								func_15();
								break;
						}
					}
					func_20(1);
					if (!func_21())
					{
						func_22(1);
					}
					else
					{
						func_22(2);
					}
				}
				break;
			case 1:
				if (func_23() != joaat("freeroam"))
				{
				}
				else
				{
					func_24();
				}
				func_22(2);
				break;
			case 2:
				if (func_25())
				{
					func_22(3);
				}
				break;
			case 3:
				if (func_21())
				{
					func_22(7);
				}
				else if (func_23() == 1495295997 && !func_21())
				{
					func_22(6);
				}
				else if (func_23() == -1330461529 && !func_21())
				{
					func_22(6);
				}
				else if (!func_26())
				{
					func_22(6);
				}
				else
				{
					func_22(4);
				}
				break;
			case 4:
				switch (func_27(uLocal_34))
				{
					case 0:
						break;
					case 1:
						break;
					case 2:
						break;
					case 4:
						func_28(32);
						break;
					case 3:
						func_22(5);
						break;
					case 5:
						func_22(5);
						break;
				}
				break;
			case 5:
				if (func_13())
				{
					if (func_29())
					{
						func_22(6);
					}
				}
				else
				{
					func_22(6);
				}
				break;
			case 6:
				func_30();
				func_22(7);
				break;
			case 7:
				func_31();
				func_32();
				func_33();
				func_34(1);
				func_35(&(((*Global_1055966)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*436*/])->f_153.f_10), 1);
				func_22(8);
				break;
			case 8:
				func_36(&uLocal_32);
				func_37();
				func_38();
				break;
			case 9:
				func_39();
				func_40();
				if (NETWORK::NETWORK_CAN_SESSION_END() && NETWORK::NETWORK_IS_SESSION_STARTED())
				{
					PLAYER::FORCE_CLEANUP(523);
					NETWORK::_NETWORK_SESSION_LEAVE();
				}
				break;
			default:
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_12())
			{
				case 0:
					func_41(8);
					break;
				case 8:
					func_42();
					func_43("MP_GAME_STATE_MAIN_UPDATE", 8);
					break;
				case 9:
					break;
			}
		}
		BUILTIN::WAIT(0);
	}
	func_39();
	func_40();
	func_44();
	while (func_45())
	{
		BUILTIN::WAIT(0);
	}
	while (!SCRIPTS::_0x380FFA15B72408FB(1440))
	{
		BUILTIN::WAIT(0);
	}
	func_46();
}

void func_1(char* sParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = MISC::_GET_SYSTEM_TIME();
	iVar1 = MISC::GET_FRAME_COUNT();
	Global_1572887->f_2 = MISC::GET_FRAME_COUNT();
	Global_1572887->f_3 = MISC::_GET_SYSTEM_TIME();
}

void func_2()
{
	SCRIPTS::REQUEST_SCRIPT("net_train_manager");
	SCRIPTS::REQUEST_SCRIPT("net_fme_manager");
	SCRIPTS::REQUEST_SCRIPT("net_gangfeud_manager");
	SCRIPTS::REQUEST_SCRIPT("net_ugc_global_loader");
	SCRIPTS::REQUEST_SCRIPT("generic_show_mp_manager");
	SCRIPTS::REQUEST_SCRIPT("net_camp_manager");
	SCRIPTS::REQUEST_SCRIPT("net_camp_dog_manager");
	SCRIPTS::REQUEST_SCRIPT("net_ace_thread_manager");
	SCRIPTS::REQUEST_SCRIPT("net_fetch_manager");
	SCRIPTS::REQUEST_SCRIPT("net_crew_manager");
	SCRIPTS::REQUEST_SCRIPT("net_beat_manager");
	SCRIPTS::REQUEST_SCRIPT("net_scan_manager");
}

void func_3()
{
	func_1("NET_MAIN_ONLINE__PROCESS_PRE_GAME - start");
	func_47();
	func_48();
	func_49();
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
	func_50();
	if (func_51())
	{
	}
	func_1("PROCESS_PRE_GAME_BROADCAST_ARRAY_REGISTRATION - before");
	func_52();
	func_1("PROCESS_PRE_GAME_BROADCAST_ARRAY_REGISTRATION - after");
	func_53(0);
	func_1("WAIT_FOR_FIRST_NETWORK_BROADCAST");
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::_0xB711EB4BC8D06013();
	if (!func_21())
	{
		func_54();
	}
	func_22(0);
	func_55();
	Global_1051202->f_13 = 0;
	func_56();
	Global_1051165->f_36 = 0;
	func_1("NET_MAIN_ONLINE__PROCESS_PRE_GAME - end");
}

bool func_4(int iParam0)
{
	return (Global_1572887->f_106.f_15 && iParam0) != 0;
}

void func_5(int iParam0)
{
	func_57(&(Global_1572887->f_106.f_15), iParam0);
}

void func_6()
{
	int iVar0;

	if (func_58() == -1)
	{
		return;
	}
	iVar0 = &Global_1275573;
	if (func_59(Global_1572887->f_7, 1))
	{
		func_35(&(((*Global_1055966)[iVar0 /*436*/])->f_153.f_10), 4);
	}
	else
	{
		func_57(&(((*Global_1055966)[iVar0 /*436*/])->f_153.f_10), 4);
	}
	((*Global_1055966)[iVar0 /*436*/])->f_153 = Global_1572887->f_106;
	((*Global_1055966)[iVar0 /*436*/])->f_153.f_1 = Global_1572887->f_106.f_9;
	((*Global_1055966)[iVar0 /*436*/])->f_153.f_2 = Global_1572887->f_106.f_10;
	((*Global_1055966)[iVar0 /*436*/])->f_153.f_3 = { Global_1572887->f_106.f_11 };
	((*Global_1055966)[iVar0 /*436*/])->f_153.f_8 = Global_1572887->f_106.f_13;
	((*Global_1055966)[iVar0 /*436*/])->f_153.f_5 = { Global_1572887->f_342 };
	((*Global_1055966)[iVar0 /*436*/])->f_153.f_9 = Global_1572887->f_106.f_74;
	if (func_4(1024))
	{
		func_35(&(((*Global_1055966)[iVar0 /*436*/])->f_153.f_10), 2);
	}
	else
	{
		func_57(&(((*Global_1055966)[iVar0 /*436*/])->f_153.f_10), 2);
	}
}

int func_7(bool bParam0, bool bParam1)
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

void func_8()
{
	func_60();
	func_61(-1, 0, 1);
	func_62();
	if ((func_63(1464020707) || func_63(1098974047)) || func_63(868706284))
	{
		Global_1099294->f_646.f_5 = 1;
	}
}

void func_9()
{
	Global_1070356->f_4 = 1;
	Global_1051202->f_41 = (MISC::GET_GAME_TIMER() - Global_1051202->f_39);
}

void func_10()
{
	func_64();
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		if (Global_1055966[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*436*/] < 7)
		{
			PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		}
	}
	func_60();
	func_65();
}

int func_11(int iParam0)
{
	if (iParam0 >= 0)
	{
		return Global_1055966[iParam0 /*436*/];
	}
	return -1;
}

int func_12()
{
	return &Global_1070355;
}

bool func_13()
{
	return Global_1572887->f_248 > 0;
}

int func_14()
{
	struct<11> Var0;
	int iVar11;
	int iVar12;

	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0 = { func_66() };
	iVar11 = func_67();
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar11))
	{
		iVar12 = iVar11;
		Var0.f_10 = func_68(iVar12);
		Var0 = func_69(iVar12);
		Var0.f_1 = func_70(iVar12);
		Var0.f_2 = func_71(iVar12);
		Var0.f_3 = { func_72(iVar12) };
	}
	if (Var0.f_3 == 6)
	{
		return 0;
	}
	if (!func_59(Var0.f_10, 4))
	{
		return 0;
	}
	switch (Var0)
	{
		case 2:
			if (func_73(iVar11, 4096))
			{
				return 0;
			}
			break;
		case 0:
			if (Var0.f_1 >= 34 && Var0.f_1 <= 42)
			{
				return 0;
			}
			break;
	}
	return 1;
}

void func_15()
{
	Global_1051202->f_15 = 1;
}

void func_16()
{
	Global_1051202->f_15 = 0;
}

int func_17()
{
	if (func_74() != 0)
	{
		return 0;
	}
	if (Global_1572887->f_106.f_9 >= 5 && Global_1572887->f_106.f_9 <= 8)
	{
		return 0;
	}
	return 1;
}

int func_18(struct<2> Param0)
{
	if (!func_75(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_76(Param0))
	{
		return 0;
	}
	return 1;
}

int func_19(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_77(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

void func_20(bool bParam0)
{
	if (func_78())
	{
		if ((!Global_1051202->f_15 || ((Global_1048577 || Global_1048581) // PointerArith && !&Global_1049234)) && func_26())
		{
			func_79();
			func_80(bParam0);
			func_81(16);
		}
		else if (&Global_1049234)
		{
			if (func_82(15))
			{
				func_81(15);
				func_83(16);
			}
		}
	}
	else
	{
		func_85((func_84() && func_82(16)));
		if (func_82(16))
		{
			func_81(16);
		}
	}
}

bool func_21()
{
	return !Global_1572887->f_9;
}

void func_22(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar0 == 255 || iVar0 >= 32)
	{
	}
	else
	{
		(*Global_1055966)[iVar0 /*436*/] = iParam0;
		((*Global_1055966)[iVar0 /*436*/])->f_1++;
		func_1(func_86(Global_1055966[iVar0 /*436*/]));
	}
}

int func_23()
{
	return Global_1572887->f_387;
}

void func_24()
{
	if (!Global_1572887->f_6)
	{
		Global_1572887->f_6 = 1;
		TELEMETRY::_0xE9F24081D84931B8();
	}
}

int func_25()
{
	bool bVar0;

	bVar0 = false;
	if (func_87(1))
	{
		if (func_88("net_train_manager", 3, 1024))
		{
			func_35(&(Global_1051202->f_13), 1);
		}
		bVar0 = true;
	}
	if (func_87(2))
	{
		if (func_88("net_fme_manager", 4, 1024))
		{
			func_35(&(Global_1051202->f_13), 2);
		}
		bVar0 = true;
	}
	if (func_87(32))
	{
		if (func_88("net_gangfeud_manager", 8, 1024))
		{
			func_35(&(Global_1051202->f_13), 32);
		}
		bVar0 = true;
	}
	if (func_87(4))
	{
		if (func_88("net_ugc_global_loader", 5, 3088))
		{
			func_35(&(Global_1051202->f_13), 4);
		}
		bVar0 = true;
	}
	if (func_87(2048))
	{
		if (func_88("generic_show_mp_manager", 14, 1024))
		{
			func_35(&(Global_1051202->f_13), 2048);
		}
		bVar0 = true;
	}
	if (func_87(64))
	{
		if (func_88("net_camp_manager", 9, 1024))
		{
			func_35(&(Global_1051202->f_13), 64);
		}
		bVar0 = true;
	}
	if (func_87(128))
	{
		if (func_88("net_camp_dog_manager", 10, 1024))
		{
			func_35(&(Global_1051202->f_13), 128);
		}
		bVar0 = true;
	}
	if (func_87(256))
	{
		if (func_88("net_ace_thread_manager", 11, 1024))
		{
			func_35(&(Global_1051202->f_13), 256);
		}
		bVar0 = true;
	}
	if (func_87(512))
	{
		if (func_88("net_fetch_manager", 12, 2050))
		{
			func_35(&(Global_1051202->f_13), 512);
		}
		bVar0 = true;
	}
	if (func_87(1024))
	{
		if (func_88("net_crew_manager", 13, 1024))
		{
			func_35(&(Global_1051202->f_13), 1024);
		}
		bVar0 = true;
	}
	if (func_87(4096))
	{
		if (func_88("net_beat_manager", 15, 3500))
		{
			func_35(&(Global_1051202->f_13), 4096);
		}
		bVar0 = true;
	}
	if (func_87(8192))
	{
		if (func_88("net_scan_manager", 16, 512))
		{
			func_35(&(Global_1051202->f_13), 8192);
		}
		bVar0 = true;
	}
	if (func_87(16384))
	{
		if (func_88("net_moonshine_manager", 17, 1024))
		{
			func_35(&(Global_1051202->f_13), 16384);
		}
		bVar0 = true;
	}
	if (func_87(32768))
	{
		if (func_88("flow_controller", 18, 1024))
		{
			func_35(&(Global_1051202->f_13), 32768);
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		return 0;
	}
	return 1;
}

int func_26()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return 1;
	}
	return 0;
}

int func_27(var uParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(PLAYER::PLAYER_ID());
	switch (Global_1126368->f_1986)
	{
		case 1:
			if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-75008140))
			{
			}
			else
			{
				vVar1 = { func_89() };
				if (vVar1.z != 0)
				{
					if (func_90(64))
					{
						vVar1.f_2 = -2;
					}
					if (func_91(Global_1275573->f_15))
					{
						func_92(vVar1);
					}
					else
					{
						func_92(vVar1);
					}
					func_93(2);
				}
				else
				{
					func_93(4);
				}
				Jump @234; //curOff = 141
				if ((((*Global_1128435)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/])->f_33.f_3 != -1 && (Global_1125276->f_865[iVar0 /*7*/])->f_4 == ((*Global_1128435)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/])->f_33.f_3) && &Global_1125276->f_865[iVar0 /*7*/] == 6)
				{
					func_93(3);
					return 3;
				}
				Jump @234; //curOff = 223
				func_93(3);
			}
			if (Global_1126368->f_2009 == 0)
			{
				Global_1126368->f_2009 = MISC::_GET_SYSTEM_TIME();
			}
			else if ((MISC::_GET_SYSTEM_TIME() - Global_1126368->f_2009) >= Global_1901929->f_543.f_2)
			{
				return 5;
			}
			return func_94();
		}

void func_28(int iParam0)
{
	func_95(&(Global_1131092->f_8), iParam0);
}

bool func_29()
{
	return Global_1572887->f_248 > 19;
}

void func_30()
{
	float fVar0;
	struct<18> Var1;
	struct<7> Var31;

	fVar0 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
	func_96(0);
	Global_1099294->f_262 = 1;
	if (((func_97(Global_17172.f_54.f_1) || func_98(Global_17172.f_54.f_1) == -1) || func_98(Global_17172.f_54.f_1) == 8) || func_99(Global_17172.f_54) == 8)
	{
		if (!func_100(&(Global_17172.f_54.f_1), &fVar0, 0))
		{
			Global_17172.f_54.f_1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
			fVar0 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
		}
		Global_17172.f_54 = func_101(Global_17172.f_54.f_1, 1);
	}
	if (func_23() == -1330461529)
	{
		func_102(1);
		func_103(1);
		func_104(122, 0);
	}
	else if (func_23() == 1495295997)
	{
		func_102(1);
		func_103(1);
	}
	else if (func_26())
	{
		if (func_63(-159568751))
		{
			func_105(1);
		}
		else
		{
			func_106(1, 1);
		}
		if (NETWORK::_0xFC4165C9165C166F() || func_13())
		{
			func_107(64);
			func_107(256);
		}
		else if (Global_1572887->f_387.f_3 != -1)
		{
			func_104(Global_1572887->f_387.f_3, 0);
			func_108();
		}
		else if (Global_1572887->f_387.f_4 != -1)
		{
			func_104(Global_1099294->f_25, 0);
			func_108();
		}
		else if (Global_1572887->f_387.f_5 != -1)
		{
			func_104(Global_1099294->f_25, 0);
			func_108();
		}
		else if ((func_63(1464020707) || func_63(1098974047)) || func_63(868706284))
		{
			func_109(&(Global_1099294->f_646.f_6), &(Global_1099294->f_646.f_36), 1, 1, 1);
			if (Global_1099294->f_646.f_45)
			{
				func_110();
			}
			if (Global_1099294->f_646.f_46)
			{
				func_111(1, 0);
			}
			Global_1099294->f_646.f_5 = 0;
			Global_1099294->f_646 = 0;
		}
		else if (func_63(-1879562593))
		{
			func_112(1);
			func_113();
			func_106(0, -1);
			func_105(0);
		}
		else if (func_63(1890312850))
		{
			func_114(1);
			func_113();
			func_106(0, -1);
			func_105(0);
		}
		else if (func_63(2134863183))
		{
			func_113();
			func_106(0, -1);
			func_105(0);
		}
		else if (func_63(-11301188))
		{
			func_104(Global_1099294->f_25, 0);
			func_108();
		}
		else if (func_63(-1312679892))
		{
			func_104(Global_17172.f_54, 0);
			func_108();
		}
		else if (func_63(-61119924))
		{
			func_115(Global_17172.f_54.f_1, fVar0, -1f, 75f, 1, 1, 1);
			func_108();
		}
		else if (func_63(-110687166) && func_116())
		{
			func_117();
		}
		else if (func_63(1737952409) && func_116())
		{
			func_117();
		}
		else if (func_63(2137301164) && func_116())
		{
			func_117();
		}
		else if (func_63(-1808811965))
		{
			if (BUILTIN::VDIST(func_118(1), 0f, 0f, 0f) < 2f)
			{
				func_115(Global_17172.f_54.f_1, fVar0, -1f, 75f, 1, 1, 1);
			}
			else
			{
				func_119(&Var1);
				func_120(&Var31);
				Var1.f_17.f_9 = -432403087;
				Var1.f_17.f_6 = { func_118(1) };
				Var1.f_17 = { 30f, 30f, 50f };
				Var1.f_16 = 1;
				Var1.f_6 = { Var1.f_17 };
				Var1.f_6 = { 1.5f, 1.5f, 5f };
				Var1.f_1 = { Var1.f_17.f_6 };
				Var1.f_5 = 2;
				Var31.f_5 = 1;
				if (!func_100(&(Var31.f_6), &Var31, 0))
				{
					Var31.f_6 = { (Global_1070356->f_22101.f_366[MISC::GET_RANDOM_INT_IN_RANGE(0, 16) /*272*/])->f_2 };
					Var31 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
				}
				func_109(&Var1, &Var31, 1, 1, 1);
				func_110();
			}
		}
		else if (func_63(-1854341522))
		{
			func_119(&Var1);
			func_120(&Var31);
			Var1.f_17.f_9 = -432403087;
			Var1.f_17.f_6 = { func_121(Global_17172.f_54.f_1, -471827042) };
			Var1.f_17 = { 30f, 30f, 30f };
			Var1.f_16 = 1;
			Var1.f_6 = { Var1.f_17 };
			Var1.f_6 = { 1.5f, 1.5f, 5f };
			Var1.f_1 = { Var1.f_17.f_6 };
			Var1.f_5 = 2;
			Var31.f_5 = 1;
			if (!func_100(&(Var31.f_6), &Var31, 0))
			{
				Var31.f_6 = { (Global_1070356->f_22101.f_366[MISC::GET_RANDOM_INT_IN_RANGE(0, 16) /*272*/])->f_2 };
				Var31 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
			}
			func_109(&Var1, &Var31, 1, 1, 1);
			func_110();
		}
		else if (func_63(313296873))
		{
			func_119(&Var1);
			func_120(&Var31);
			Var1.f_17.f_9 = -432403087;
			if (func_122(3, &(Var1.f_17.f_6)))
			{
			}
			else
			{
				Var1.f_17.f_6 = { -1723.073f, -430.4347f, 151.0119f };
			}
			Var1.f_17 = { 50f, 50f, 30f };
			Var1.f_16 = 1;
			Var1.f_6 = { Var1.f_17 };
			Var1.f_6 = { 20f, 20f, 5f };
			Var1.f_1 = { Var1.f_17.f_6 };
			Var1.f_5 = 2;
			Var31.f_5 = 1;
			if (!func_100(&(Var31.f_6), &Var31, 0))
			{
				Var31.f_6 = { (Global_1070356->f_22101.f_366[MISC::GET_RANDOM_INT_IN_RANGE(0, 16) /*272*/])->f_2 };
				Var31 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
			}
			func_109(&Var1, &Var31, 1, 1, 1);
			func_110();
		}
		else if (func_63(541270806))
		{
			func_119(&Var1);
			func_120(&Var31);
			Var1.f_17.f_9 = -432403087;
			if (func_122(4, &(Var1.f_17.f_6)))
			{
			}
			else
			{
				Var1.f_17.f_6 = { -1723.073f, -430.4347f, 151.0119f };
			}
			Var1.f_17 = { 50f, 50f, 30f };
			Var1.f_16 = 1;
			Var1.f_6 = { Var1.f_17 };
			Var1.f_6 = { 20f, 20f, 5f };
			Var1.f_1 = { Var1.f_17.f_6 };
			Var1.f_5 = 2;
			Var31.f_5 = 1;
			if (!func_100(&(Var31.f_6), &Var31, 0))
			{
				Var31.f_6 = { (Global_1070356->f_22101.f_366[MISC::GET_RANDOM_INT_IN_RANGE(0, 16) /*272*/])->f_2 };
				Var31 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
			}
			func_109(&Var1, &Var31, 1, 1, 1);
			func_110();
		}
		else if (func_63(922800273))
		{
			func_119(&Var1);
			func_120(&Var31);
			Var1.f_17.f_9 = -432403087;
			if (func_122(2, &(Var1.f_17.f_6)))
			{
			}
			else
			{
				Var1.f_17.f_6 = { -190.3148f, 639.5237f, 112.2634f };
			}
			Var1.f_17 = { 50f, 50f, 30f };
			Var1.f_16 = 1;
			Var1.f_6 = { Var1.f_17 };
			Var1.f_6 = { 20f, 20f, 5f };
			Var1.f_1 = { Var1.f_17.f_6 };
			Var1.f_5 = 2;
			Var31.f_5 = 1;
			if (!func_100(&(Var31.f_6), &Var31, 0))
			{
				Var31.f_6 = { (Global_1070356->f_22101.f_366[MISC::GET_RANDOM_INT_IN_RANGE(0, 16) /*272*/])->f_2 };
				Var31 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
			}
			func_109(&Var1, &Var31, 1, 1, 1);
			func_110();
		}
		else if (func_63(1298496858))
		{
			func_119(&Var1);
			if (func_122(5, &(Var1.f_17.f_6)))
			{
				func_120(&Var31);
				Var1.f_17.f_9 = -432403087;
				Var1.f_17 = { 50f, 50f, 30f };
				Var1.f_16 = 1;
				Var1.f_6 = { Var1.f_17 };
				Var1.f_6 = { 1.5f, 1.5f, 5f };
				Var1.f_1 = { Var1.f_17.f_6 };
				Var1.f_5 = 2;
				Var31.f_5 = 1;
				if (!func_100(&(Var31.f_6), &Var31, 0))
				{
					Var31.f_6 = { (Global_1070356->f_22101.f_366[MISC::GET_RANDOM_INT_IN_RANGE(0, 16) /*272*/])->f_2 };
					Var31 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
				}
				func_109(&Var1, &Var31, 1, 1, 1);
				func_110();
			}
			else
			{
				func_119(&Var1);
				func_115(Global_17172.f_54.f_1, fVar0, -1f, 75f, 1, 1, 1);
				func_108();
				func_123(902, 1);
			}
		}
		else if (func_63(1699163417))
		{
			func_119(&Var1);
			func_120(&Var31);
			Var1.f_17.f_9 = -432403087;
			Var1.f_17.f_6 = { 1235.993f, -1279.31f, 74.9174f };
			Var1.f_17 = { 30f, 30f, 30f };
			Var1.f_16 = 1;
			Var1.f_6 = { Var1.f_17 };
			Var1.f_6 = { 1.5f, 1.5f, 5f };
			Var1.f_1 = { Var1.f_17.f_6 };
			Var1.f_5 = 2;
			Var31.f_5 = 1;
			if (!func_100(&(Var31.f_6), &Var31, 0))
			{
				Var31.f_6 = { (Global_1070356->f_22101.f_366[MISC::GET_RANDOM_INT_IN_RANGE(0, 16) /*272*/])->f_2 };
				Var31 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
			}
			func_109(&Var1, &Var31, 1, 1, 1);
			func_110();
		}
		else if (func_63(-575777117))
		{
			func_102(1);
			func_124(1);
			func_125(-561.4f, -3782.6f, 237.6f, 166.8f, 1);
			Global_1070356->f_27248 |= 1;
		}
		else
		{
			func_115(Global_17172.f_54.f_1, fVar0, -1f, 75f, 1, 1, 1);
		}
		((*Global_1055966)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*436*/])->f_428 = 1;
	}
	else if (!func_126())
	{
		func_102(1);
		func_124(1);
		func_115(func_127(33, 1), 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 1, 1);
	}
	else if (!func_128())
	{
		func_102(1);
		func_124(1);
		func_113();
	}
	else
	{
		func_102(1);
		func_124(1);
		func_115(func_127(func_129(Global_1070356->f_26827.f_2), 1), 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 1, 1);
	}
	((*Global_1055966)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*436*/])->f_429 = NETWORK::_0x595F028698072DD9(-1);
}

void func_31()
{
	func_130();
	func_131();
	NETWORK::_0x0A428058079EE65C(1);
	if (func_21())
	{
		return;
	}
	if (func_132())
	{
		return;
	}
	NETWORK::_0xC505036A35AFD01B(false);
	func_133(-1);
	func_134();
	UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
	UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
	func_135(3);
	func_136();
	func_137();
	func_138();
	func_139();
	SCRIPTS::_0x11B0A0B282FA9B10(1);
	SCRIPTS::_0x6F700A4BF7C3331B(1);
	SCRIPTS::_0xF9E951A1E5517C06();
	STATS::_0x218F7710A139D012();
	func_140();
	Global_1070356->f_19946.f_262 = 1;
	Global_1572887->f_106.f_83 = 0;
	Global_1132968->f_6289 = 1;
	func_141(0);
	NETWORK::_0x9C25E8EC4C535FBD(func_142(PLAYER::PLAYER_ID(), 0, 1));
	func_143(1, 6);
}

void func_32()
{
	if (func_132())
	{
		return;
	}
	if (func_21())
	{
		return;
	}
	if (func_58() != 0)
	{
		return;
	}
	func_144();
	func_145();
}

void func_33()
{
	if (!Global_1572887->f_9)
	{
		return;
	}
	NETWORK::_0x2CD41AC000E6F611();
	Global_1572887->f_9 = 0;
}

void func_34(int iParam0)
{
	NETWORK::_0x704F92B3AF20D857(iParam0);
}

void func_35(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_36(var uParam0)
{
	struct<19> Var0;

	if (*uParam0)
	{
		return;
	}
	if (func_146(255) != 1)
	{
		return;
	}
	if (func_21())
	{
		return;
	}
	Var0.f_12 = -1;
	Var0.f_12.f_1 = -1;
	Var0.f_14 = 255;
	Var0.f_15 = 255;
	Var0.f_4 = 0;
	func_148(Var0, func_147(3, 8), 0, 0);
	*uParam0 = 1;
}

void func_37()
{
	func_149();
	func_150();
	func_151();
	func_152();
	func_153();
	func_154();
	func_155();
	func_156();
	func_157();
	func_158();
	func_159();
	func_160();
	func_161();
}

void func_38()
{
	if (func_58() != 0)
	{
		return;
	}
	switch (Global_1051165->f_36)
	{
		case 0:
			break;
		case 1:
			func_162();
			break;
	}
	Global_1051165->f_36++;
	if (Global_1051165->f_36 >= 3)
	{
		Global_1051165->f_36 = 0;
	}
	func_163();
	func_164();
	func_165();
	func_166();
	func_167();
	func_149();
	func_168();
}

void func_39()
{
	func_169();
}

void func_40()
{
	func_170();
	func_47();
	func_48();
	func_49();
}

void func_41(int iParam0)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Global_1070355 = iParam0;
	}
}

void func_42()
{
	Global_1275207 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	func_171();
	func_172();
}

void func_43(char* sParam0, int iParam1)
{
	iParam1 = iParam1;
	sParam0 = sParam0;
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
	}
}

void func_44()
{
	func_47();
	func_48();
	func_49();
	func_173();
	func_16();
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		func_174();
	}
	func_175();
}

int func_45()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 19)
	{
		if (iVar0 != 0)
		{
			if (&Global_1051202->f_16[iVar0] != 0)
			{
				if (SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051202->f_16[iVar0])))
				{
					iVar1 = 1;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_46()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_47()
{
	Global_1070356->f_5 = 0;
}

void func_48()
{
	Global_1070356->f_4 = 0;
}

void func_49()
{
	Global_1070356->f_3 = 0;
}

int func_50()
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
			func_46();
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
			{
				case 0:
					break;
				case 1:
					func_46();
					break;
				case 2:
					func_46();
					break;
				case 4:
					func_46();
					break;
				case 3:
					func_46();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_46();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_46();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			func_46();
		}
		if (func_58() == 0)
		{
			if (func_176())
			{
				func_46();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_46();
	}
	return 1;
}

int func_51()
{
	if (Global_1572887->f_9)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	return 0;
}

void func_52()
{
	bool bVar0;

	Global_1070356->f_11 = 0;
	bVar0 = false;
	while (!func_7(0, 0) && !bVar0)
	{
		switch (Global_1070356->f_11)
		{
			case 0:
				func_177(Global_1070355);
				NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(Global_1070355, 1, 81);
				func_178(NETWORK::_0xBA24095EA96DFE17(Global_1070355), 1, "g_mpHostData");
				if (func_21())
				{
					*Global_1069919 = { *((*Global_1055966)[func_179() /*436*/]) };
					func_180(Global_1055966);
					NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1055966, 13953, 82);
					func_181(NETWORK::_0x690806BC83BC8CA2((*Global_1055966)[0 /*436*/]), 13953, "g_mpPlayerData");
					*((*Global_1055966)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*436*/]) = { *Global_1069919 };
				}
				else
				{
					NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1055966, 13953, 82);
					func_181(NETWORK::_0x690806BC83BC8CA2((*Global_1055966)[0 /*436*/]), 13953, "g_mpPlayerData");
				}
				Global_1070356->f_11++;
				break;
			case 1:
				func_182();
				Global_1070356->f_11++;
				break;
			case 2:
				func_183();
				Global_1070356->f_11++;
				break;
			case 3:
				func_184();
				Global_1070356->f_11++;
				break;
			case 4:
				func_185();
				Global_1070356->f_11++;
				break;
			case 5:
				func_186();
				Global_1070356->f_11++;
				break;
			case 6:
				func_187();
				Global_1070356->f_11++;
				break;
			case 7:
				func_188();
				Global_1070356->f_11++;
				break;
			case 8:
				func_189();
				Global_1070356->f_11++;
				break;
			case 9:
				func_190();
				Global_1070356->f_11++;
				break;
			case 10:
				func_191();
				Global_1070356->f_11++;
				break;
			case 11:
				func_192();
				Global_1070356->f_11++;
				break;
			case 12:
				func_193();
				Global_1070356->f_11++;
				break;
			case 13:
				func_194();
				Global_1070356->f_11++;
				break;
			case 14:
				bVar0 = true;
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_195();
}

void func_53(bool bParam0)
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
					func_46();
					break;
				case 2:
					func_46();
					break;
				case 4:
					func_46();
					break;
				case 3:
					func_46();
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
			func_46();
			return;
		}
		BUILTIN::WAIT(0);
	}
}

void func_54()
{
	func_196();
}

void func_55()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_1070356->f_14.f_5[iVar0 /*35*/] = 0;
		iVar0++;
	}
	Global_1070356->f_14 = 0;
}

void func_56()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar0 == 255)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= 17)
	{
		iVar2 = &Global_1070356->f_17915[iVar1];
		Global_1070356->f_17915[iVar1] = &Global_39.f_106[iVar1];
		((*Global_1055966)[iVar0 /*436*/])->f_390[iVar1] = &Global_39.f_106[iVar1];
		((*Global_1055966)[iVar0 /*436*/])->f_390.f_19[iVar1] = -1;
		func_197(iVar1, iVar2, iVar0);
		iVar1++;
	}
	func_198(iVar0, Global_1070356->f_17915.f_21);
	Global_1070356->f_17915.f_21 = 0;
}

void func_57(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_58()
{
	return Global_1572887->f_13;
}

bool func_59(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_60()
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar0 == 255)
	{
		return;
	}
	if (Global_1099294->f_339 != iVar0)
	{
		Global_1099294->f_339 = iVar0;
	}
}

int func_61(int iParam0, bool bParam1, bool bParam2)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == iParam0 && !bParam2)
	{
		return 1;
	}
	if (!(iParam0 >= -1 && iParam0 <= 7))
	{
		return 0;
	}
	PLAYER::SET_PLAYER_TEAM(PLAYER::PLAYER_ID(), iParam0, bParam1);
	if (!bParam1)
	{
		func_199();
	}
	return 1;
}

void func_62()
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	func_200(&(Global_1275207->f_60), 1, 1);
	func_200(&(Global_1275207->f_61), 1, 1);
	if (iVar0 != 255)
	{
		(*Global_1275140)[iVar0 /*2*/] = 0;
	}
	func_201(1);
}

bool func_63(int iParam0)
{
	return func_59(Global_1572887->f_387.f_1, func_202(iParam0));
}

void func_64()
{
	Global_1051202->f_37 = NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT();
}

void func_65()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<35> Var3;
	struct<15> Var38;
	int iVar219;
	int iVar220;
	int iVar221;
	int iVar222;
	bool bVar223;
	struct<8> Var224;
	int iVar232;
	struct<35> Var233;
	char cVar268[64];

	bVar0 = false;
	iVar1 = 12;
	if (func_203(&iVar1))
	{
		bVar0 = true;
	}
	while (iVar1 != 12)
	{
		if (func_203(&iVar1))
		{
			bVar0 = true;
		}
	}
	if (Global_1051202->f_44.f_1)
	{
		iVar2 = 0;
		if (func_204(&iVar2))
		{
			bVar0 = true;
		}
		while (iVar2 != 0)
		{
			if (func_204(&iVar2))
			{
				bVar0 = true;
			}
		}
		Global_1051202->f_44.f_1 = 0;
	}
	else if (func_204(&(Global_1051202->f_44)))
	{
		bVar0 = true;
	}
	Var3 = { Global_1051202->f_44 };
	Var38 = 12;
	Var38.f_1.f_4 = 10;
	Var38.f_1.f_15.f_4 = 10;
	Var38.f_1.f_15.f_15.f_4 = 10;
	Var38.f_1.f_15.f_15.f_15.f_4 = 10;
	Var38.f_1.f_15.f_15.f_15.f_15.f_4 = 10;
	Var38.f_1.f_15.f_15.f_15.f_15.f_15.f_4 = 10;
	Var38.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_4 = 10;
	Var38.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_4 = 10;
	Var38.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_4 = 10;
	Var38.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_4 = 10;
	Var38.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_4 = 10;
	Var38.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_4 = 10;
	iVar219 = 0;
	while (iVar219 < 12)
	{
		Var38[iVar219 /*15*/] = 15;
		iVar219++;
	}
	iVar220 = 0;
	iVar222 = 0;
	bVar223 = true;
	if (Var3.f_2[0] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 0;
		(Var38[iVar220 /*15*/])->f_1 = { Global_1275573->f_17 };
		(Var38[iVar220 /*15*/])->f_4[0] = func_206(func_205(0));
		iVar220++;
	}
	if (Var3.f_2[1] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 1;
		(Var38[iVar220 /*15*/])->f_1 = { Global_1275573->f_17 };
		if ((SCRIPTS::_DOES_THREAD_EXIST(Global_1126368->f_2021) && SCRIPTS::IS_THREAD_ACTIVE(Global_1126368->f_2021, false)) && Global_1126368->f_2022 != -1)
		{
			(Var38[iVar220 /*15*/])->f_4[0] = MISC::_0x6C4DBF553885F9EB(((*Global_1125276)[Global_1126368->f_2022 /*27*/])->f_20);
		}
		else if (func_207(16))
		{
			(Var38[iVar220 /*15*/])->f_4[0] = func_209(func_208(PLAYER::PLAYER_ID(), 1));
		}
		iVar220++;
	}
	if (Var3.f_2[2] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 2;
		(Var38[iVar220 /*15*/])->f_1 = { Global_1275573->f_17 };
		iVar221 = 0;
		iVar222 = (func_210() - 1);
		iVar221 = 0;
		while (iVar221 <= iVar222)
		{
			Var224 = { *(Global_1051202->f_79[iVar221 /*10*/]) };
			StringConCat(&Var224, " ", 64);
			StringIntConCat(&Var224, (Global_1051202->f_79[iVar221 /*10*/])->f_9, 64);
			(Var38[iVar220 /*15*/])->f_4[iVar221] = func_211(Var224);
			iVar221++;
		}
		iVar220++;
	}
	if (Var3.f_2[3] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 3;
		(Var38[iVar220 /*15*/])->f_1 = { Global_1275573->f_17 };
		(Var38[iVar220 /*15*/])->f_4[0] = func_213(func_212(255));
		iVar220++;
	}
	if (Var3.f_2[4] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 4;
		(Var38[iVar220 /*15*/])->f_1 = { Global_1275573->f_17 };
		if (MISC::IS_STRING_NULL_OR_EMPTY(func_214()))
		{
			if (func_215())
			{
				(Var38[iVar220 /*15*/])->f_4[0] = func_216();
			}
		}
		else
		{
			(Var38[iVar220 /*15*/])->f_4[0] = func_214();
		}
		iVar220++;
	}
	if (Var3.f_2[6] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 6;
		(Var38[iVar220 /*15*/])->f_1 = { Global_1275573->f_17 };
		iVar221 = 0;
		if (func_217(0, &Global_1275573))
		{
			(Var38[iVar220 /*15*/])->f_4[iVar221] = func_218(0);
			iVar221++;
		}
		if (func_217(1, &Global_1275573))
		{
			(Var38[iVar220 /*15*/])->f_4[iVar221] = func_218(1);
			iVar221++;
		}
		if (func_217(2, &Global_1275573))
		{
			(Var38[iVar220 /*15*/])->f_4[iVar221] = func_218(2);
			iVar221++;
		}
		iVar220++;
	}
	if (Var3.f_2[7] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 7;
		(Var38[iVar220 /*15*/])->f_1 = { Global_1275573->f_17 };
		(Var38[iVar220 /*15*/])->f_4[0] = func_219();
		iVar220++;
	}
	if (Var3.f_2[8] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 8;
		(Var38[iVar220 /*15*/])->f_1 = { Global_1275573->f_17 };
		iVar221 = 0;
		Var233.f_8 = -1;
		Var233.f_8.f_1 = -1;
		Var233.f_16.f_12 = -1;
		Var233.f_16.f_12.f_1 = -1;
		Var233.f_16.f_14 = 255;
		Var233.f_16.f_15 = 255;
		iVar232 = 0;
		while (iVar232 < 10)
		{
			if (iVar221 >= 10)
			{
			}
			else
			{
				Var233 = { func_220(iVar232) };
				if (!func_221(&Var233))
				{
				}
				else
				{
					StringCopy(&cVar268, "Invite - ", 64);
					StringIntConCat(&cVar268, iVar232, 64);
					(Var38[iVar220 /*15*/])->f_4[iVar221] = func_211(cVar268);
					iVar221++;
				}
				iVar232++;
			}
		}
		iVar220++;
	}
	if (Var3.f_2[9] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 9;
		(Var38[iVar220 /*15*/])->f_1 = { Global_1275573->f_17 };
		(Var38[iVar220 /*15*/])->f_4[0] = "Matchmaking Hack";
		iVar220++;
	}
	if (Var3.f_2[10] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 10;
		(Var38[iVar220 /*15*/])->f_1 = { Global_1275573->f_17 };
		(Var38[iVar220 /*15*/])->f_4[0] = func_222(PLAYER::PLAYER_ID());
		iVar220++;
	}
	if (Var3.f_2[11] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 11;
		(Var38[iVar220 /*15*/])->f_1 = { func_223() };
		(Var38[iVar220 /*15*/])->f_4[0] = func_224();
		iVar220++;
	}
	if (Var3.f_2[12] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 12;
		(Var38[iVar220 /*15*/])->f_1 = { Global_1275573->f_17 };
		iVar220++;
	}
	if (Var3.f_2[13] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 13;
		(Var38[iVar220 /*15*/])->f_1 = { Global_1275573->f_17 };
		iVar220++;
	}
	if (Var3.f_2[14] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 14;
		(Var38[iVar220 /*15*/])->f_1 = { Global_1275573->f_17 };
		iVar220++;
	}
	if (!bVar223)
	{
		if (NETWORK::_0xAADED99A6B268A27() || bVar0)
		{
			NETWORK::_0x63246A24F5747510(0, &Var38);
		}
		if ((((Var3.f_2[12] || Var3.f_2[13]) // PointerArith || Var3.f_2[14]) // PointerArith || Var3.f_2[0]) // PointerArith)
		{
			if (NETWORK::_0xE258570E0C116A66())
			{
				NETWORK::_0x4440FEE3EFE78F54(0);
			}
		}
		else if (!NETWORK::_0xE258570E0C116A66())
		{
			NETWORK::_0x4440FEE3EFE78F54(1);
		}
	}
	else
	{
		if (!NETWORK::_0xAADED99A6B268A27())
		{
			NETWORK::_0x63246A24F5747510(1, &Var38);
		}
		if (!NETWORK::_0xE258570E0C116A66())
		{
			NETWORK::_0x4440FEE3EFE78F54(1);
		}
	}
}

struct<11> func_66()
{
	return Global_1572887->f_248.f_50;
}

var func_67()
{
	return Global_1572887->f_248.f_61;
}

var func_68(int iParam0)
{
	return ((*Global_1055966)[iParam0 /*436*/])->f_153.f_10;
}

var func_69(int iParam0)
{
	return ((*Global_1055966)[iParam0 /*436*/])->f_153;
}

var func_70(int iParam0)
{
	return ((*Global_1055966)[iParam0 /*436*/])->f_153.f_1;
}

var func_71(int iParam0)
{
	return ((*Global_1055966)[iParam0 /*436*/])->f_153.f_2;
}

struct<2> func_72(int iParam0)
{
	return ((*Global_1055966)[iParam0 /*436*/])->f_153.f_3;
}

bool func_73(int iParam0, int iParam1)
{
	return (((*Global_262996)[iParam0 /*70*/])->f_68 && iParam1) != 0;
}

int func_74()
{
	return Global_1572887->f_106;
}

int func_75(int iParam0)
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

int func_76(int iParam0)
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

int func_77(struct<2> Param0, var uParam2)
{
	if (!func_18(Param0))
	{
		return 0;
	}
	func_225(uParam2);
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

int func_78()
{
	int iVar0;

	if (Global_1901929->f_38.f_2 == 1788394582)
	{
		iVar0 = Global_1275573->f_21;
		if (iVar0 > Global_1901929->f_38.f_3 && iVar0 < Global_1901929->f_38.f_4)
		{
			return 1;
		}
	}
	return 0;
}

void func_79()
{
	int iVar0;
	int iVar1;

	if (!func_82(1))
	{
		return;
	}
	MISC::_0xDD560ABEF5D3784C(&iVar0, &iVar1);
	if (iVar0 != 0 || iVar1 != 0)
	{
		if ((Global_1275573->f_21 % 239) != 0)
		{
			return;
		}
	}
	func_227(func_226(), func_84());
}

void func_80(bool bParam0)
{
	int iVar0;

	if (!func_78())
	{
		return;
	}
	if (func_228() || func_229())
	{
		if (!func_82(1) || bParam0)
		{
			iVar0 = joaat("snowlight");
			if (func_228())
			{
				iVar0 = joaat("snow");
			}
			func_227(iVar0, func_84());
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_RDRO_X18", true, true);
			POPULATION::_0xEC116EDB683AD479(1);
			GRAPHICS::SET_TIMECYCLE_MODIFIER("MP_reduceGlobalTemperature");
			func_83(1);
		}
		if (func_84() || bParam0)
		{
			if (func_228())
			{
				if (!func_82(4))
				{
					GRAPHICS::_SET_SNOW_COVERAGE_TYPE(3);
					func_83(4);
					func_81(2);
				}
			}
			else if (!func_82(2))
			{
				GRAPHICS::_SET_SNOW_COVERAGE_TYPE(2);
				func_83(2);
				func_81(4);
			}
		}
	}
	if (func_230())
	{
		if (((!func_82(8) && !STREAMING::_0xCF45DF50C7775F2A()) && !func_231(-1562607865)) || bParam0)
		{
			func_232(-1562607865);
			func_83(8);
		}
	}
}

void func_81(int iParam0)
{
	Global_1938579->f_84 = (Global_1938579->f_84 - (Global_1938579->f_84 && iParam0));
}

bool func_82(int iParam0)
{
	return (Global_1938579->f_84 && iParam0) != 0;
}

void func_83(int iParam0)
{
	Global_1938579->f_84 = (Global_1938579->f_84 || iParam0);
}

bool func_84()
{
	return (SCRIPTS::_IS_LOADING_SCREEN_ACTIVE() || CAM::IS_SCREEN_FADED_OUT());
}

void func_85(bool bParam0)
{
	if (func_82(1) || bParam0)
	{
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
		AUDIO::CLEAR_AMBIENT_ZONE_LIST_STATE("AZL_RDRO_X18", true);
		POPULATION::_0xEC116EDB683AD479(0);
		GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		func_81(1);
	}
	if ((func_82(6) && func_84()) || bParam0)
	{
		GRAPHICS::_SET_SNOW_COVERAGE_TYPE(0);
		func_81(2);
		func_81(4);
	}
	if (((func_82(8) && !STREAMING::_0xCF45DF50C7775F2A()) && !func_231(-1562607865)) || bParam0)
	{
		func_233(-1562607865);
		func_81(8);
	}
}

int func_86(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -1:
			iVar0 = "MP_GAME_STATE_INVALID";
			break;
		case 0:
			iVar0 = "MP_GAME_STATE_GAME_INIT";
			break;
		case 1:
			iVar0 = "MP_GAME_STATE_LOAD_INIT_THREADS";
			break;
		case 2:
			iVar0 = "MP_GAME_STATE_LOAD_MAIN_THREADS";
			break;
		case 3:
			iVar0 = "MP_GAME_STATE_ROUTE_TRANSITION";
			break;
		case 4:
			iVar0 = "MP_GAME_STATE_CREATE_PLAYER_CAMP";
			break;
		case 5:
			iVar0 = "MP_GAME_STATE_CHECK_FOR_INVITE";
			break;
		case 6:
			iVar0 = "MP_GAME_STATE_SPAWN_PLAYER";
			break;
		case 7:
			iVar0 = "MP_GAME_STATE_MAIN_UPDATE_FIRST_FRAME";
			break;
		case 8:
			iVar0 = "MP_GAME_STATE_MAIN_UPDATE";
			break;
		case 9:
			iVar0 = "MP_GAME_STATE_END";
			break;
		case 10:
			iVar0 = "MP_GAME_STATE_ALL_LEAVE";
			break;
	}
	return iVar0;
}

int func_87(int iParam0)
{
	if (Global_1051202->f_15 && func_59(Global_1051202->f_14, iParam0))
	{
		return 0;
	}
	if (func_59(Global_1051202->f_13, iParam0))
	{
		return 0;
	}
	return 1;
}

int func_88(char* sParam0, int iParam1, int iParam2)
{
	SCRIPTS::REQUEST_SCRIPT(sParam0);
	if (SCRIPTS::HAS_SCRIPT_LOADED(sParam0) && MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(iParam2) > 0)
	{
		Global_1051202->f_16[iParam1] = SCRIPTS::START_NEW_SCRIPT(sParam0, iParam2);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam0);
		return 1;
	}
	return 0;
}

Vector3 func_89()
{
	vector3 vVar0;
	struct<19> Var3;

	Var3 = { func_234(0) };
	if (Var3.f_8 != -1838434463)
	{
	}
	if (((Var3.f_16 == 0 && Var3.f_18 == 0) && Global_17172.f_54.f_4.f_2 != 0) && Global_17172.f_54.f_4 >= 4)
	{
		vVar0 = { Global_17172.f_54.f_4 };
	}
	else
	{
		vVar0.x = Var3.f_16;
		vVar0.f_1 = Var3.f_17;
		vVar0.f_2 = Var3.f_18;
	}
	return vVar0;
}

bool func_90(int iParam0)
{
	return func_235(((*Global_1128435)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/])->f_73, iParam0);
}

int func_91(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<7> Var2;
	struct<10> Var9;
	int iVar19;

	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iParam0))
	{
		return 0;
	}
	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(iParam0);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		if (iVar0 == PLAYER::PLAYER_ID())
		{
			POSSE::_0xC08AFF658B2E51DA(&iVar1);
			if (iVar1 != 0)
			{
				return 1;
			}
		}
		else
		{
			Var2 = { func_236(iVar0) };
			iVar19 = 0;
			while (iVar19 <= (POSSE::_0xC084FF658B2E61DA(&Var2) - 1))
			{
				if ((POSSE::_0xC084FF658B2E81DA(&Var2, iVar19, &Var9) && Var9 != 0) && Var9.f_9 == 1)
				{
					return 1;
				}
				iVar19++;
			}
		}
	}
	return 0;
}

int func_92(vector3 vParam0)
{
	if (!func_237(vParam0, 0))
	{
		return 0;
	}
	func_238(64);
	return 1;
}

void func_93(int iParam0)
{
	if (Global_1126368->f_1986 != iParam0)
	{
		Global_1126368->f_1986 = iParam0;
	}
}

var func_94()
{
	return Global_1126368->f_1986;
}

void func_95(var uParam0, int iParam1)
{
	func_239(uParam0, iParam1);
}

void func_96(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = MISC::GET_FRAME_COUNT();
	iVar1 = MISC::_GET_SYSTEM_TIME();
	Global_1099294 = iParam0;
	Global_1099294->f_239 = iVar1;
	Global_1099294->f_240 = iVar0;
	Global_1099294->f_241 = 0;
}

int func_97(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_98(vector3 vParam0)
{
	return func_240(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

int func_99(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 30)
	{
		return 1;
	}
	else if (iParam0 <= 34)
	{
		return 2;
	}
	else if (iParam0 <= 38)
	{
		return 3;
	}
	else if (iParam0 <= 41)
	{
		return 4;
	}
	else if (iParam0 <= 52)
	{
		return 7;
	}
	else if (iParam0 <= 61)
	{
		return 6;
	}
	else if (iParam0 <= 66)
	{
		return 8;
	}
	else if (iParam0 <= 81)
	{
		return 9;
	}
	else if (iParam0 <= 98)
	{
		return 10;
	}
	else if (iParam0 <= 112)
	{
		return 11;
	}
	else if (iParam0 <= 119)
	{
		return 12;
	}
	else if (iParam0 <= 122)
	{
		return 13;
	}
	else if (iParam0 <= 126)
	{
		return 14;
	}
	else if (iParam0 <= 133)
	{
		return 15;
	}
	else if (iParam0 <= 136)
	{
		return 16;
	}
	return -1;
}

int func_100(var uParam0, float fParam1, bool bParam2)
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
	iVar5 = func_241(iVar0);
	if (iVar5 <= 0)
	{
		return 0;
	}
	else
	{
		iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar5);
		if (func_242(iVar0, iVar6, uParam0, fParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_101(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_243();
	if (func_244(iVar0))
	{
		if (VOLUME::_0xF256A75210C5C0EB(((*Global_1887327)[iVar0 /*36*/])->f_4, vParam0))
		{
			return iVar0;
		}
	}
	return func_245(vParam0, iParam3);
}

void func_102(bool bParam0)
{
	if (!bParam0)
	{
		func_246(17);
	}
	else
	{
		func_247(17);
	}
}

void func_103(bool bParam0)
{
	if (!bParam0)
	{
		func_246(23);
	}
	else
	{
		func_247(23);
	}
}

void func_104(int iParam0, bool bParam1)
{
	var uVar0;
	struct<7> Var30;

	if (!func_100(&(Var30.f_6), &Var30, 0))
	{
		Var30.f_6 = { (Global_1070356->f_22101.f_366[MISC::GET_RANDOM_INT_IN_RANGE(0, 16) /*272*/])->f_2 };
		Var30 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
	}
	Var30.f_5 = 1;
	func_247(85);
	if (func_248(iParam0, &uVar0))
	{
		func_109(&uVar0, &Var30, 1, 1, 1);
		if (bParam1)
		{
			func_246(0);
		}
		return;
	}
	func_115(Var30.f_6, Var30, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 1, 1);
	if (bParam1)
	{
		func_246(0);
	}
}

void func_105(bool bParam0)
{
	if (bParam0)
	{
		func_247(55);
	}
	else
	{
		func_246(55);
	}
}

void func_106(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		if (iParam1 != -1)
		{
			Global_1099294->f_476 = 0;
		}
		else
		{
			Global_1099294->f_476 = 1;
		}
		func_247(57);
		Global_1099294->f_475 = iParam1;
	}
	else
	{
		func_246(57);
	}
}

void func_107(int iParam0)
{
	func_35(&(Global_1572887->f_248.f_63), iParam0);
}

void func_108()
{
	func_247(87);
}

void func_109(var uParam0, float fParam1, int iParam2, bool bParam3, int iParam4)
{
	if (func_146(255) == 4)
	{
		return;
	}
	if (bParam3)
	{
		if (func_97(uParam0->f_17.f_6))
		{
			return;
		}
		if (BUILTIN::VMAG(uParam0->f_17) < 1f)
		{
			uParam0->f_17 = Global_1901929->f_44.f_1;
			uParam0->f_17.f_1 = Global_1901929->f_44.f_1;
			uParam0->f_17.f_2 = Global_1901929->f_44.f_1;
		}
	}
	if (func_97(fParam1->f_6))
	{
		return;
	}
	if (uParam0->f_16)
	{
		if (BUILTIN::VMAG(uParam0->f_6) < 1f)
		{
			return;
		}
		if (BUILTIN::VMAG(uParam0->f_17) < BUILTIN::VMAG(uParam0->f_6))
		{
			uParam0->f_16 = 0;
		}
	}
	func_247(0);
	func_247(3);
	Global_1099294->f_586 = iParam2;
	Global_1099294->f_587 = bParam3;
	Global_1099294->f_588 = iParam4;
	func_119(&(Global_1099294->f_516));
	Global_1099294->f_516 = { *uParam0 };
	func_120(&(Global_1099294->f_555));
	Global_1099294->f_555 = { *fParam1 };
	Global_1099294->f_26.f_18 = 0;
	Global_1099294->f_26.f_19 = 0;
	func_249(Global_1099294->f_516, 36);
	func_250(Global_1099294->f_555, 36);
}

void func_110()
{
	func_247(86);
	func_247(85);
}

void func_111(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_247(65);
		if (bParam1)
		{
			func_247(68);
		}
	}
	else
	{
		func_246(65);
		func_246(68);
	}
}

void func_112(bool bParam0)
{
	if (bParam0)
	{
		func_247(51);
	}
	else
	{
		func_246(51);
	}
}

void func_113()
{
	func_251(1);
	func_252(1, 1);
}

void func_114(bool bParam0)
{
	if (bParam0)
	{
		func_247(53);
	}
	else
	{
		func_246(53);
	}
}

void func_115(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, float fParam8)
{
	vector3 vVar0;
	int iVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
	iVar3 = iParam3;
	if (!func_100(&vVar0, &iVar3, 1))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
		iVar3 = iParam3;
	}
	func_253(vParam0, iParam3, vVar0, iVar3, iParam4, iParam5, iParam6, iParam7, fParam8, 1);
}

int func_116()
{
	int iVar0;
	int iVar1;

	iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (!_NAMESPACE26::_0x0F99F6436528A089(iVar0))
	{
		return 0;
	}
	iVar1 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(iVar0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
	{
		return 0;
	}
	if (iVar1 == PLAYER::PLAYER_ID())
	{
		return 0;
	}
	return 1;
}

void func_117()
{
	int iVar0;
	struct<18> Var1;
	struct<7> Var31;

	iVar0 = PLAYER::GET_PLAYER_PED(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
	Var1.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
	Var1.f_17 = { 25f, 25f, 25f };
	Var1.f_17.f_9 = -432403087;
	Var1.f_4 = iVar0;
	Var1.f_5 = 3;
	func_100(&(Var31.f_6), &Var31, 0);
	Var31.f_5 = 1;
	func_109(&Var1, &Var31, 1, 1, 1);
	if (PED::IS_PED_ON_MOUNT(iVar0))
	{
		func_111(1, 0);
	}
}

Vector3 func_118(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return *(Global_17172.f_2935[1 /*3*/]);
		default:
			break;
	}
	return func_254();
}

void func_119(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_120(float fParam0)
{
	struct<9> Var0;

	*fParam0 = { Var0 };
}

Vector3 func_121(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	vector3 vVar5[5];
	struct<10> Var21;

	if (iParam3 == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar3 = -1;
	if (iParam3 == -471827042)
	{
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			iVar0 = iVar1;
			Var21 = { func_255(iVar0) };
			*(vVar5[iVar1 /*3*/]) = { Var21.f_5 };
			iVar2++;
			iVar1++;
		}
	}
	else
	{
		return 0f, 0f, 0f;
	}
	if (!iVar2 == 0)
	{
		iVar1 = 0;
		while (iVar1 <= (iVar2 - 1))
		{
			if (iVar3 == -1)
			{
				iVar3 = iVar1;
				fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, *(vVar5[iVar1 /*3*/]), true);
			}
			else if (fVar4 > MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, *(vVar5[iVar1 /*3*/]), true))
			{
				iVar3 = iVar1;
				fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, *(vVar5[iVar1 /*3*/]), true);
			}
			iVar1++;
		}
		return *(vVar5[iVar3 /*3*/]);
	}
	return 0f, 0f, 0f;
}

bool func_122(int iParam0, var uParam1)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	var uVar7;

	*uParam1 = { func_254() };
	switch (iParam0)
	{
		case 1:
			*uParam1 = { -870.1846f, -1276.62f, 42.2367f };
			break;
		case 2:
			*uParam1 = { 1352.95f, -1306.359f, 75.9113f };
			break;
		case 3:
			vVar0 = { func_89() };
			switch (vVar0.y)
			{
				case -987049424:
				case -682748:
				case 1538293636:
				case 1581179681:
				default:
					*uParam1 = { -319.24f, 797.04f, 116.89f };
					break;
					*uParam1 = { -319.24f, 797.04f, 116.89f };
					break;
				case -1992167326:
				case -1884014371:
				case -1554232707:
				case -724534761:
				case -215258135:
				case 892234183:
					*uParam1 = { -3678.34f, -2623.56f, -14.24f };
					break;
				case -1871413878:
				case 1357161730:
				case 1483778247:
					*uParam1 = { 2822.76f, -1313f, 46.34f };
					break;
			}
			break;
		case 4:
			iVar3 = func_256();
			if (iVar3 != -1)
			{
				if (func_257(iVar3, &vVar4, &uVar7))
				{
					*uParam1 = { vVar4 };
				}
			}
			break;
		case 5:
			if (func_258())
			{
				*uParam1 = { 1440.138f, 369.3305f, 88.016f };
			}
			break;
	}
	return !func_97(*uParam1);
}

void func_123(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_259(iParam0, &iVar0, &iVar1);
	if (!func_260(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_261(iVar0, iVar1);
}

void func_124(bool bParam0)
{
	if (!bParam0)
	{
		func_246(19);
	}
	else
	{
		func_247(19);
	}
}

void func_125(vector3 vParam0, float fParam3, bool bParam4)
{
	if (func_262(vParam0, fParam3))
	{
		func_252(1, bParam4);
	}
}

int func_126()
{
	int iVar0;

	iVar0 = 1;
	while (iVar0 <= 4)
	{
		if ((Global_1132968->f_5641[iVar0 /*3*/])->f_1 && !(Global_1132968->f_5641[iVar0 /*3*/])->f_2)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_127(int iParam0, bool bParam1)
{
	vector3 vVar0;
	var uVar3;

	vVar0 = { 0f, 0f, 0f };
	if (!func_244(iParam0))
	{
		return vVar0;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(((*Global_1887327)[iParam0 /*36*/])->f_4))
	{
		vVar0 = { VOLUME::_0xF70F00013A62F866(((*Global_1887327)[iParam0 /*36*/])->f_4) };
		if (bParam1)
		{
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, 0))
			{
				vVar0.f_2 = uVar3;
			}
		}
	}
	return vVar0;
}

int func_128()
{
	int iVar0;

	iVar0 = 9;
	while (iVar0 <= 12)
	{
		if ((Global_1132968->f_5641[iVar0 /*3*/])->f_1 && !(Global_1132968->f_5641[iVar0 /*3*/])->f_2)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_129(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 111;
		case 1:
			return 81;
		case 2:
			return 40;
		case 3:
			return 121;
		default:
			break;
	}
	return 111;
}

void func_130()
{
	Global_1070356->f_5 = 1;
	Global_1051202->f_42 = (MISC::GET_GAME_TIMER() - Global_1051202->f_39);
}

void func_131()
{
	func_263(256);
}

int func_132()
{
	return 0;
}

void func_133(int iParam0)
{
	Global_1896610->f_41 = iParam0;
}

void func_134()
{
	func_264();
	func_265();
	func_266();
	func_267();
}

void func_135(int iParam0)
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

void func_136()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_268(iVar0)))
		{
			STREAMING::REQUEST_NAMED_PTFX_ASSET(MISC::GET_HASH_KEY(func_268(iVar0)));
		}
		iVar0++;
	}
}

void func_137()
{
	BRAIN::ENABLE_SCRIPT_BRAIN_SET(1);
}

void func_138()
{
	BRAIN::ENABLE_SCRIPT_BRAIN_SET(4);
}

void func_139()
{
	BRAIN::DISABLE_SCRIPT_BRAIN_SET(2);
}

void func_140()
{
	LAW::_0x062B4A4A3396351D(PLAYER::PLAYER_ID());
	LAW::_0x55F37F5F3F2475E1();
}

void func_141(bool bParam0)
{
	int iVar0;

	iVar0 = MAP::GET_MAIN_PLAYER_BLIP_ID();
	if (func_269(PLAYER::PLAYER_ID(), 1) && !bParam0)
	{
		MAP::_0x662D364ABF16DE2F(iVar0, -600115211);
		MAP::_SET_BLIP_FLASH_STYLE(iVar0, -706674318);
	}
	else if (func_270(PLAYER::PLAYER_ID(), 1) && !bParam0)
	{
		MAP::_SET_BLIP_FLASH_STYLE(iVar0, -600115211);
		MAP::_0x662D364ABF16DE2F(iVar0, -706674318);
	}
	else
	{
		MAP::_SET_BLIP_FLASH_STYLE(iVar0, -600115211);
		MAP::_SET_BLIP_FLASH_STYLE(iVar0, -706674318);
	}
}

bool func_142(int iParam0, bool bParam1, bool bParam2)
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

void func_143(int iParam0, int iParam1)
{
	if (Global_1051385->f_1)
	{
	}
	Global_1051385->f_1 = iParam0;
	if (!func_271(iParam1))
	{
		return;
	}
	Global_1051385->f_2 = 0;
	Global_1051385 = Global_1901929->f_38;
	SCRIPTS::_0xBE7D814CFA181B56();
	if (!Global_1051385->f_1)
	{
		func_272("BGS_CONFIRM", 15000, 0, 0, 0, 1);
	}
	Global_1051385->f_1 = 0;
}

void func_144()
{
	Global_1070356->f_22101.f_366.f_4356 = -1;
	Global_1070356->f_22101 = 1;
}

void func_145()
{
	NETWORK::_0x807E119F80231732((1 + NETWORK::GET_NUM_RESERVED_MISSION_PEDS(0)));
}

int func_146(int iParam0)
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

var func_147(int iParam0, int iParam1)
{
	return func_273(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_148(struct<19> Param0, var uParam19, bool bParam20, bool bParam21)
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
				func_274(&(Global_1070356->f_21258), Var0);
				return;
			}
		}
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param0, 19, 7, &uParam19);
}

void func_149()
{
	struct<2> Var0;

	Var0 = { func_205(0) };
	if (func_18(Var0))
	{
		((*Global_1055966)[&Global_1275573 /*436*/])->f_2 = { func_205(0) };
	}
	else
	{
		func_275(&(((*Global_1055966)[&Global_1275573 /*436*/])->f_2));
	}
}

void func_150()
{
	var uVar0;

	if (!func_276())
	{
		return;
	}
	NETWORK::NETWORK_GET_LOCAL_HANDLE(&uVar0);
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(&uVar0))
	{
		return;
	}
	if (!NETWORK::_0x255A5EF65EDA9167(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(&(((*Global_1139395)[PLAYER::PLAYER_ID() /*34*/])->f_1)) || !NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(((*Global_1139395)[PLAYER::PLAYER_ID() /*34*/])->f_1), &uVar0))
	{
		MISC::_COPY_MEMORY(&(((*Global_1139395)[PLAYER::PLAYER_ID() /*34*/])->f_1), &uVar0, 7);
	}
}

void func_151()
{
	(*Global_1139395)[&Global_1275573 /*34*/] = NETWORK::_0x32C90CDFAF40514C();
}

void func_152()
{
	int iVar0;

	if (!Global_1572887->f_9)
	{
		return;
	}
	(*Global_1269834)[&Global_1275573] = (Global_1070356->f_19683.f_1[&Global_1275573 /*8*/])->f_7;
	((*Global_1055966)[&Global_1275573 /*436*/])->f_10 = Global_1070356->f_19683.f_259;
	((*Global_1055966)[&Global_1275573 /*436*/])->f_9 = Global_1070356->f_19683.f_258;
	SCRIPTS::_0xDE544B7EC0C187CC(&(Global_1070356->f_19683.f_259));
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (iVar0 == &Global_1275573)
		{
		}
		else if (!&Global_1275573->f_22[iVar0])
		{
		}
		else if (func_277(&(Global_1275573->f_154[iVar0]), 0))
		{
			if (func_235(Global_1269834[iVar0], 16))
			{
				SCRIPTS::_0xFFDDF802279BE128(&(((*Global_1055966)[iVar0 /*436*/])->f_9), &(Global_1070356->f_19683.f_259), &(Global_1070356->f_19683.f_259));
			}
		}
		iVar0++;
	}
}

void func_153()
{
	struct<35> Var0;

	Var0 = { func_220(0) };
	if (Var0)
	{
		if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), Var0.f_16.f_2) > Global_1901929->f_1.f_23)
		{
			func_278();
			func_279(&Var0);
		}
	}
	func_280();
	func_282((func_281() + 1 % 10));
	func_283();
}

void func_154()
{
	bool bVar0;
	int iVar1;

	if (((*Global_1269869)[&Global_1275573 /*20*/])->f_1 & 1 != 0)
	{
		((*Global_1269869)[&Global_1275573 /*20*/])->f_4 = Global_1270530->f_11.f_51;
	}
	else
	{
		((*Global_1269869)[&Global_1275573 /*20*/])->f_4 = -1;
	}
	if (((*Global_1269869)[&Global_1275573 /*20*/])->f_1 & 2 != 0)
	{
		if (!NETWORK::_0x1B89BC43B6E69107(((*Global_1269869)[&Global_1275573 /*20*/])->f_10, ((*Global_1269869)[&Global_1275573 /*20*/])->f_11, ((*Global_1269869)[&Global_1275573 /*20*/])->f_1 & 4 != 0, 0))
		{
			func_284(2);
			((*Global_1269869)[&Global_1275573 /*20*/])->f_10 = 0;
			((*Global_1269869)[&Global_1275573 /*20*/])->f_11 = -1;
		}
	}
	if (((*Global_1269869)[&Global_1275573 /*20*/])->f_1 & 16 != 0)
	{
		if (!NETWORK::_0x1B89BC43B6E69107(((*Global_1269869)[&Global_1275573 /*20*/])->f_10, ((*Global_1269869)[&Global_1275573 /*20*/])->f_11, true, 0))
		{
			func_284(16);
			((*Global_1269869)[&Global_1275573 /*20*/])->f_10 = 0;
			((*Global_1269869)[&Global_1275573 /*20*/])->f_11 = -1;
		}
	}
	if (((*Global_1269869)[&Global_1275573 /*20*/])->f_2 & 1 != 0)
	{
		((*Global_1269869)[&Global_1275573 /*20*/])->f_5 = Global_1270530->f_609.f_46;
	}
	else
	{
		((*Global_1269869)[&Global_1275573 /*20*/])->f_5 = -1;
	}
	if (((*Global_1269869)[&Global_1275573 /*20*/])->f_2 & 8 != 0)
	{
		if (!NETWORK::_0x1B89BC43B6E69107(((*Global_1269869)[&Global_1275573 /*20*/])->f_12, ((*Global_1269869)[&Global_1275573 /*20*/])->f_13, ((*Global_1269869)[&Global_1275573 /*20*/])->f_2 & 16 != 0, 0))
		{
			func_285(8);
			((*Global_1269869)[&Global_1275573 /*20*/])->f_12 = 0;
			((*Global_1269869)[&Global_1275573 /*20*/])->f_13 = -1;
		}
	}
	if (func_286(53))
	{
		((*Global_1269869)[&Global_1275573 /*20*/])->f_1 |= 262144;
	}
	else
	{
		((*Global_1269869)[&Global_1275573 /*20*/])->f_1 = (((*Global_1269869)[&Global_1275573 /*20*/])->f_1 - ((*Global_1269869)[&Global_1275573 /*20*/])->f_1 & 262144);
	}
	if (func_286(54))
	{
		((*Global_1269869)[&Global_1275573 /*20*/])->f_1 |= 256;
	}
	else
	{
		((*Global_1269869)[&Global_1275573 /*20*/])->f_1 = (((*Global_1269869)[&Global_1275573 /*20*/])->f_1 - ((*Global_1269869)[&Global_1275573 /*20*/])->f_1 & 256);
	}
	if (func_286(55))
	{
		((*Global_1269869)[&Global_1275573 /*20*/])->f_1 |= 512;
	}
	else
	{
		((*Global_1269869)[&Global_1275573 /*20*/])->f_1 = (((*Global_1269869)[&Global_1275573 /*20*/])->f_1 - ((*Global_1269869)[&Global_1275573 /*20*/])->f_1 & 512);
	}
	if (func_286(56))
	{
		((*Global_1269869)[&Global_1275573 /*20*/])->f_1 |= 64;
	}
	else
	{
		((*Global_1269869)[&Global_1275573 /*20*/])->f_1 = (((*Global_1269869)[&Global_1275573 /*20*/])->f_1 - ((*Global_1269869)[&Global_1275573 /*20*/])->f_1 & 64);
	}
	if (func_286(57))
	{
		((*Global_1269869)[&Global_1275573 /*20*/])->f_1 |= 32;
	}
	else
	{
		((*Global_1269869)[&Global_1275573 /*20*/])->f_1 = (((*Global_1269869)[&Global_1275573 /*20*/])->f_1 - ((*Global_1269869)[&Global_1275573 /*20*/])->f_1 & 32);
	}
	if (func_286(58))
	{
		((*Global_1269869)[&Global_1275573 /*20*/])->f_1 |= 128;
	}
	else
	{
		((*Global_1269869)[&Global_1275573 /*20*/])->f_1 = (((*Global_1269869)[&Global_1275573 /*20*/])->f_1 - ((*Global_1269869)[&Global_1275573 /*20*/])->f_1 & 128);
	}
	if (func_286(59))
	{
		((*Global_1269869)[&Global_1275573 /*20*/])->f_1 |= 1024;
	}
	else
	{
		((*Global_1269869)[&Global_1275573 /*20*/])->f_1 = (((*Global_1269869)[&Global_1275573 /*20*/])->f_1 - ((*Global_1269869)[&Global_1275573 /*20*/])->f_1 & 1024);
	}
	if (func_286(60))
	{
		((*Global_1269869)[&Global_1275573 /*20*/])->f_1 |= 2048;
	}
	else
	{
		((*Global_1269869)[&Global_1275573 /*20*/])->f_1 = (((*Global_1269869)[&Global_1275573 /*20*/])->f_1 - ((*Global_1269869)[&Global_1275573 /*20*/])->f_1 & 2048);
	}
	if (func_286(66))
	{
		bVar0 = true;
		if (Global_1270530->f_11.f_344 == 0)
		{
			bVar0 = false;
		}
		if (bVar0 && !SCRIPTS::_DOES_THREAD_EXIST(Global_1270530->f_11.f_344))
		{
			bVar0 = false;
		}
		if (bVar0 && !SCRIPTS::IS_THREAD_ACTIVE(Global_1270530->f_11.f_344, false))
		{
			bVar0 = false;
		}
		if (!bVar0)
		{
			Global_1270530->f_11.f_344 = 0;
			func_287(66);
		}
	}
	if (func_286(66))
	{
		((*Global_1269869)[&Global_1275573 /*20*/])->f_1 |= 8;
	}
	else
	{
		((*Global_1269869)[&Global_1275573 /*20*/])->f_1 = (((*Global_1269869)[&Global_1275573 /*20*/])->f_1 - ((*Global_1269869)[&Global_1275573 /*20*/])->f_1 & 8);
	}
	if (func_286(67))
	{
		((*Global_1269869)[&Global_1275573 /*20*/])->f_1 |= 16384;
	}
	else
	{
		((*Global_1269869)[&Global_1275573 /*20*/])->f_1 = (((*Global_1269869)[&Global_1275573 /*20*/])->f_1 - ((*Global_1269869)[&Global_1275573 /*20*/])->f_1 & 16384);
	}
	if (Global_17172.f_54.f_61.f_582 & 262144 != 0)
	{
		((*Global_1269869)[&Global_1275573 /*20*/])->f_1 |= 8192;
	}
	else
	{
		((*Global_1269869)[&Global_1275573 /*20*/])->f_1 = (((*Global_1269869)[&Global_1275573 /*20*/])->f_1 - ((*Global_1269869)[&Global_1275573 /*20*/])->f_1 & 8192);
	}
	if ((((func_286(9) || func_286(10)) || func_286(11)) || func_286(12)) || func_286(13))
	{
		if (func_286(9))
		{
			(*Global_1269869)[&Global_1275573 /*20*/] = Global_1269869[&Global_1275573 /*20*/] | 1;
		}
		else
		{
			(*Global_1269869)[&Global_1275573 /*20*/] = (Global_1269869[&Global_1275573 /*20*/] - Global_1269869[&Global_1275573 /*20*/] & 1);
		}
		if (func_286(10))
		{
			(*Global_1269869)[&Global_1275573 /*20*/] = Global_1269869[&Global_1275573 /*20*/] | 2;
		}
		else
		{
			(*Global_1269869)[&Global_1275573 /*20*/] = (Global_1269869[&Global_1275573 /*20*/] - Global_1269869[&Global_1275573 /*20*/] & 2);
		}
		if (func_286(11))
		{
			(*Global_1269869)[&Global_1275573 /*20*/] = Global_1269869[&Global_1275573 /*20*/] | 4;
		}
		else
		{
			(*Global_1269869)[&Global_1275573 /*20*/] = (Global_1269869[&Global_1275573 /*20*/] - Global_1269869[&Global_1275573 /*20*/] & 4);
		}
		if (func_286(12))
		{
			(*Global_1269869)[&Global_1275573 /*20*/] = Global_1269869[&Global_1275573 /*20*/] | 8;
		}
		else
		{
			(*Global_1269869)[&Global_1275573 /*20*/] = (Global_1269869[&Global_1275573 /*20*/] - Global_1269869[&Global_1275573 /*20*/] & 8);
		}
		if (func_286(13))
		{
			(*Global_1269869)[&Global_1275573 /*20*/] = Global_1269869[&Global_1275573 /*20*/] | 16;
		}
		else
		{
			(*Global_1269869)[&Global_1275573 /*20*/] = (Global_1269869[&Global_1275573 /*20*/] - Global_1269869[&Global_1275573 /*20*/] & 16);
		}
	}
	else
	{
		if (Global_17172.f_54.f_61.f_582 & 1 != 0)
		{
			(*Global_1269869)[&Global_1275573 /*20*/] = Global_1269869[&Global_1275573 /*20*/] | 1;
		}
		else
		{
			(*Global_1269869)[&Global_1275573 /*20*/] = (Global_1269869[&Global_1275573 /*20*/] - Global_1269869[&Global_1275573 /*20*/] & 1);
		}
		if (Global_17172.f_54.f_61.f_582 & 2 != 0)
		{
			(*Global_1269869)[&Global_1275573 /*20*/] = Global_1269869[&Global_1275573 /*20*/] | 2;
		}
		else
		{
			(*Global_1269869)[&Global_1275573 /*20*/] = (Global_1269869[&Global_1275573 /*20*/] - Global_1269869[&Global_1275573 /*20*/] & 2);
		}
		if (Global_17172.f_54.f_61.f_582 & 4 != 0)
		{
			(*Global_1269869)[&Global_1275573 /*20*/] = Global_1269869[&Global_1275573 /*20*/] | 4;
		}
		else
		{
			(*Global_1269869)[&Global_1275573 /*20*/] = (Global_1269869[&Global_1275573 /*20*/] - Global_1269869[&Global_1275573 /*20*/] & 4);
		}
		if (Global_17172.f_54.f_61.f_582 & 8 != 0)
		{
			(*Global_1269869)[&Global_1275573 /*20*/] = Global_1269869[&Global_1275573 /*20*/] | 8;
		}
		else
		{
			(*Global_1269869)[&Global_1275573 /*20*/] = (Global_1269869[&Global_1275573 /*20*/] - Global_1269869[&Global_1275573 /*20*/] & 8);
		}
		if (Global_17172.f_54.f_61.f_582 & 16 != 0)
		{
			(*Global_1269869)[&Global_1275573 /*20*/] = Global_1269869[&Global_1275573 /*20*/] | 16;
		}
		else
		{
			(*Global_1269869)[&Global_1275573 /*20*/] = (Global_1269869[&Global_1275573 /*20*/] - Global_1269869[&Global_1275573 /*20*/] & 16);
		}
	}
	iVar1 = ((*Global_1269869)[&Global_1275573 /*20*/])->f_3;
	if ((((func_286(19) || func_286(20)) || func_286(21)) || func_286(22)) || func_286(23))
	{
		if (func_286(19))
		{
			((*Global_1269869)[&Global_1275573 /*20*/])->f_3 |= 1;
		}
		else
		{
			((*Global_1269869)[&Global_1275573 /*20*/])->f_3 = (((*Global_1269869)[&Global_1275573 /*20*/])->f_3 - ((*Global_1269869)[&Global_1275573 /*20*/])->f_3 & 1);
		}
		if (func_286(20))
		{
			((*Global_1269869)[&Global_1275573 /*20*/])->f_3 |= 2;
		}
		else
		{
			((*Global_1269869)[&Global_1275573 /*20*/])->f_3 = (((*Global_1269869)[&Global_1275573 /*20*/])->f_3 - ((*Global_1269869)[&Global_1275573 /*20*/])->f_3 & 2);
		}
		if (func_286(21))
		{
			((*Global_1269869)[&Global_1275573 /*20*/])->f_3 |= 4;
		}
		else
		{
			((*Global_1269869)[&Global_1275573 /*20*/])->f_3 = (((*Global_1269869)[&Global_1275573 /*20*/])->f_3 - ((*Global_1269869)[&Global_1275573 /*20*/])->f_3 & 4);
		}
		if (func_286(22))
		{
			((*Global_1269869)[&Global_1275573 /*20*/])->f_3 |= 8;
		}
		else
		{
			((*Global_1269869)[&Global_1275573 /*20*/])->f_3 = (((*Global_1269869)[&Global_1275573 /*20*/])->f_3 - ((*Global_1269869)[&Global_1275573 /*20*/])->f_3 & 8);
		}
		if (func_286(23))
		{
			((*Global_1269869)[&Global_1275573 /*20*/])->f_3 |= 16;
		}
		else
		{
			((*Global_1269869)[&Global_1275573 /*20*/])->f_3 = (((*Global_1269869)[&Global_1275573 /*20*/])->f_3 - ((*Global_1269869)[&Global_1275573 /*20*/])->f_3 & 16);
		}
	}
	else
	{
		if (Global_17172.f_54.f_61.f_582 & 262144 != 0)
		{
			((*Global_1269869)[&Global_1275573 /*20*/])->f_3 |= 1;
		}
		else
		{
			((*Global_1269869)[&Global_1275573 /*20*/])->f_3 = (((*Global_1269869)[&Global_1275573 /*20*/])->f_3 - ((*Global_1269869)[&Global_1275573 /*20*/])->f_3 & 1);
		}
		if (Global_17172.f_54.f_61.f_582 & 524288 != 0)
		{
			((*Global_1269869)[&Global_1275573 /*20*/])->f_3 |= 2;
		}
		else
		{
			((*Global_1269869)[&Global_1275573 /*20*/])->f_3 = (((*Global_1269869)[&Global_1275573 /*20*/])->f_3 - ((*Global_1269869)[&Global_1275573 /*20*/])->f_3 & 2);
		}
		if (Global_17172.f_54.f_61.f_582 & 1048576 != 0)
		{
			((*Global_1269869)[&Global_1275573 /*20*/])->f_3 |= 4;
		}
		else
		{
			((*Global_1269869)[&Global_1275573 /*20*/])->f_3 = (((*Global_1269869)[&Global_1275573 /*20*/])->f_3 - ((*Global_1269869)[&Global_1275573 /*20*/])->f_3 & 4);
		}
		if (Global_17172.f_54.f_61.f_582 & 2097152 != 0)
		{
			((*Global_1269869)[&Global_1275573 /*20*/])->f_3 |= 8;
		}
		else
		{
			((*Global_1269869)[&Global_1275573 /*20*/])->f_3 = (((*Global_1269869)[&Global_1275573 /*20*/])->f_3 - ((*Global_1269869)[&Global_1275573 /*20*/])->f_3 & 8);
		}
		if (Global_17172.f_54.f_61.f_582 & 4194304 != 0)
		{
			((*Global_1269869)[&Global_1275573 /*20*/])->f_3 |= 16;
		}
		else
		{
			((*Global_1269869)[&Global_1275573 /*20*/])->f_3 = (((*Global_1269869)[&Global_1275573 /*20*/])->f_3 - ((*Global_1269869)[&Global_1275573 /*20*/])->f_3 & 16);
		}
	}
	if (iVar1 != ((*Global_1269869)[&Global_1275573 /*20*/])->f_3)
	{
		func_288();
	}
	if ((((func_286(14) || func_286(15)) || func_286(16)) || func_286(17)) || func_286(18))
	{
		if (func_286(14))
		{
			(*Global_1269869)[&Global_1275573 /*20*/] = Global_1269869[&Global_1275573 /*20*/] | 32;
		}
		else
		{
			(*Global_1269869)[&Global_1275573 /*20*/] = (Global_1269869[&Global_1275573 /*20*/] - Global_1269869[&Global_1275573 /*20*/] & 32);
		}
		if (func_286(15))
		{
			(*Global_1269869)[&Global_1275573 /*20*/] = Global_1269869[&Global_1275573 /*20*/] | 64;
		}
		else
		{
			(*Global_1269869)[&Global_1275573 /*20*/] = (Global_1269869[&Global_1275573 /*20*/] - Global_1269869[&Global_1275573 /*20*/] & 64);
		}
		if (func_286(16))
		{
			(*Global_1269869)[&Global_1275573 /*20*/] = Global_1269869[&Global_1275573 /*20*/] | 128;
		}
		else
		{
			(*Global_1269869)[&Global_1275573 /*20*/] = (Global_1269869[&Global_1275573 /*20*/] - Global_1269869[&Global_1275573 /*20*/] & 128);
		}
		if (func_286(17))
		{
			(*Global_1269869)[&Global_1275573 /*20*/] = Global_1269869[&Global_1275573 /*20*/] | 256;
		}
		else
		{
			(*Global_1269869)[&Global_1275573 /*20*/] = (Global_1269869[&Global_1275573 /*20*/] - Global_1269869[&Global_1275573 /*20*/] & 256);
		}
		if (func_286(18))
		{
			(*Global_1269869)[&Global_1275573 /*20*/] = Global_1269869[&Global_1275573 /*20*/] | 512;
		}
		else
		{
			(*Global_1269869)[&Global_1275573 /*20*/] = (Global_1269869[&Global_1275573 /*20*/] - Global_1269869[&Global_1275573 /*20*/] & 512);
		}
	}
	else
	{
		if (Global_17172.f_54.f_61.f_582 & 32 != 0)
		{
			(*Global_1269869)[&Global_1275573 /*20*/] = Global_1269869[&Global_1275573 /*20*/] | 32;
		}
		else
		{
			(*Global_1269869)[&Global_1275573 /*20*/] = (Global_1269869[&Global_1275573 /*20*/] - Global_1269869[&Global_1275573 /*20*/] & 32);
		}
		if (Global_17172.f_54.f_61.f_582 & 64 != 0)
		{
			(*Global_1269869)[&Global_1275573 /*20*/] = Global_1269869[&Global_1275573 /*20*/] | 64;
		}
		else
		{
			(*Global_1269869)[&Global_1275573 /*20*/] = (Global_1269869[&Global_1275573 /*20*/] - Global_1269869[&Global_1275573 /*20*/] & 64);
		}
		if (Global_17172.f_54.f_61.f_582 & 128 != 0)
		{
			(*Global_1269869)[&Global_1275573 /*20*/] = Global_1269869[&Global_1275573 /*20*/] | 128;
		}
		else
		{
			(*Global_1269869)[&Global_1275573 /*20*/] = (Global_1269869[&Global_1275573 /*20*/] - Global_1269869[&Global_1275573 /*20*/] & 128);
		}
		if (Global_17172.f_54.f_61.f_582 & 256 != 0)
		{
			(*Global_1269869)[&Global_1275573 /*20*/] = Global_1269869[&Global_1275573 /*20*/] | 256;
		}
		else
		{
			(*Global_1269869)[&Global_1275573 /*20*/] = (Global_1269869[&Global_1275573 /*20*/] - Global_1269869[&Global_1275573 /*20*/] & 256);
		}
		if (Global_17172.f_54.f_61.f_582 & 512 != 0)
		{
			(*Global_1269869)[&Global_1275573 /*20*/] = Global_1269869[&Global_1275573 /*20*/] | 512;
		}
		else
		{
			(*Global_1269869)[&Global_1275573 /*20*/] = (Global_1269869[&Global_1275573 /*20*/] - Global_1269869[&Global_1275573 /*20*/] & 512);
		}
	}
	Global_1270530->f_983.f_2++;
	Global_1270530->f_983.f_2 = (Global_1270530->f_983.f_2 % 32);
}

void func_155()
{
}

void func_156()
{
	if (!func_59(Global_1572887->f_7, 1073741824 /* Float: 2f */))
	{
		return;
	}
	func_57(&(Global_1572887->f_7), 1073741824 /* Float: 2f */);
	if (func_289())
	{
		if (func_17())
		{
			func_290();
		}
		else if (func_74() == 3)
		{
			func_291();
		}
		else
		{
			func_292();
		}
	}
	else
	{
		func_293();
	}
}

void func_157()
{
	func_294();
	if (!func_271(9))
	{
		return;
	}
	func_143(0, 6);
}

void func_158()
{
	Global_1275207 = NETWORK::GET_NETWORK_TIME();
	switch (Global_1275207->f_1)
	{
		case 0:
			func_295();
			break;
		case 1:
			func_296();
			break;
		case 2:
			func_297();
			break;
		case 3:
			func_298();
			break;
		case 4:
			func_299();
			break;
		case 5:
			func_300();
			break;
		case 6:
			func_301();
			break;
	}
	Global_1275207->f_62 = &Global_1275207;
}

void func_159()
{
	if (Global_1099294->f_26.f_22)
	{
		if (func_302())
		{
			Global_1099294->f_26.f_22 = 0;
		}
	}
	if (Global_1099294->f_26.f_23)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1099294->f_26.f_21))
		{
			ENTITY::SET_ENTITY_COORDS(Global_1099294->f_26.f_21, Global_1099294->f_26.f_25, false, false, true, true);
			ENTITY::SET_ENTITY_ROTATION(Global_1099294->f_26.f_21, Global_1099294->f_26.f_31, 2, false);
		}
		Global_1099294->f_26.f_23 = 0;
	}
	if (Global_1099294->f_26.f_24)
	{
		if (!func_303())
		{
			func_304();
			Global_1099294->f_26.f_24 = 0;
		}
	}
}

void func_160()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = Global_1182208[iVar0 /*8*/];
		if (((*Global_1182208)[iVar0 /*8*/])->f_6)
		{
			iVar2 = ((*Global_1182208)[iVar0 /*8*/])->f_1;
			iVar3 = ((*Global_1182208)[iVar0 /*8*/])->f_2;
			iVar4 = ((*Global_1182208)[iVar0 /*8*/])->f_3;
			bVar5 = ((*Global_1182208)[iVar0 /*8*/])->f_4;
			if (iVar3 != 0)
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET(func_268(iVar3));
			}
			if (((*Global_1182208)[iVar0 /*8*/])->f_3 >= 0)
			{
				if (!bVar5)
				{
					iVar1 = GRAPHICS::START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(func_305(iVar2), Global_34, 0f, 0f, 0f, 0f, 0f, 0f, iVar4, 1065353216, 0, 0, 0);
				}
				else
				{
					iVar1 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(func_305(iVar2), Global_34, 0f, 0f, 0f, 0f, 0f, 0f, iVar4, 1f, false, false, false);
				}
			}
			else if (!bVar5)
			{
				iVar1 = GRAPHICS::START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY(func_305(iVar2), Global_34, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
			}
			else
			{
				iVar1 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY(func_305(iVar2), Global_34, 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
			}
			(*Global_1182208)[iVar0 /*8*/] = iVar1;
			((*Global_1182208)[iVar0 /*8*/])->f_6 = 0;
		}
		else if (((*Global_1182208)[iVar0 /*8*/])->f_7)
		{
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iVar1))
			{
				GRAPHICS::REMOVE_PARTICLE_FX(iVar1, false);
			}
			((*Global_1182208)[iVar0 /*8*/])->f_7 = 0;
		}
		iVar0++;
	}
}

void func_161()
{
	int iVar0;
	struct<8> Var1;
	int iVar9;

	func_306();
	switch (func_307())
	{
		case 0:
			if (!func_308())
			{
			}
			else if (!func_309())
			{
			}
			else
			{
				func_310(1);
				Jump @109; //curOff = 64
				if (!func_311())
				{
				}
				else
				{
					func_312();
					func_313();
					func_314();
					func_310(2);
					Jump @109; //curOff = 95
					func_315(2);
				}
			}
			iVar0 = func_316();
			if (func_317(iVar0))
			{
				func_318(12);
			}
			switch (iVar0)
			{
				case 0:
					if (!&Global_1048577)
					{
					}
					else
					{
						func_318(1);
						Jump @838; //curOff = 244
						if (&Global_1275573 < 0 || &Global_1275573 >= 32)
						{
						}
						else if (func_319(&Global_1275573) == 0)
						{
							if (func_18(func_205(0)))
							{
								func_318(2);
							}
						}
						else
						{
							func_318(2);
							Jump @838; //curOff = 309
							if (&Global_1275573 < 0 || &Global_1275573 >= 32)
							{
							}
							else
							{
								func_320(func_319(&Global_1275573));
								if (func_321(func_319(&Global_1275573)))
								{
									func_318(3);
								}
								else
								{
									func_322(1);
									func_318(4);
								}
								Jump @838; //curOff = 382
								if (!func_18(func_205(0)))
								{
								}
								else
								{
									func_318(5);
									Jump @838; //curOff = 406
									if (func_18(func_205(0)))
									{
									}
									else
									{
										func_318(14);
										Jump @838; //curOff = 430
										func_324(func_323());
										func_318(6);
										Jump @838; //curOff = 447
										if (!func_325(1))
										{
										}
										else
										{
											if (func_325(4))
											{
												func_318(8);
											}
											else
											{
												func_318(7);
											}
											Jump @838; //curOff = 484
											func_318(9);
											Jump @838; //curOff = 493
											func_326(4);
											func_318(9);
											Jump @838; //curOff = 507
											if (!func_325(2))
											{
											}
											else
											{
												if (func_325(4))
												{
													func_318(11);
												}
												else
												{
													func_318(10);
												}
												Jump @838; //curOff = 545
												func_327();
												func_318(12);
												Jump @838; //curOff = 558
												func_326(2);
												func_318(6);
												Jump @838; //curOff = 571
												if (!CAM::IS_SCREEN_FADED_IN())
												{
												}
												else if (func_328())
												{
												}
												else if (&Global_1048577)
												{
												}
												else if (&Global_1048584)
												{
												}
												else
												{
													Var1 = { func_330(func_329(0)) };
													if (!MISC::_0x375F5870A7B8BEC1(func_331(Var1)))
													{
														AUDIO::PREPARE_MUSIC_EVENT(func_331(Var1));
													}
													func_318(13);
													Jump @838; //curOff = 666
													iVar9 = func_333(func_332(0));
													switch (iVar9)
													{
														case 9:
															if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
															{
																if (UNLOCK::_UNLOCK_IS_UNLOCKED(-319651633))
																{
																	func_334(-1208093116);
																}
																else if (func_208(PLAYER::PLAYER_ID(), 1) != -1)
																{
																	func_335(2048);
																}
																else
																{
																	func_334(-1221663008);
																}
															}
															Var1 = { func_330(func_329(0)) };
															if (!MISC::IS_STRING_NULL_OR_EMPTY(func_331(Var1)))
															{
																AUDIO::TRIGGER_MUSIC_EVENT(func_331(Var1));
															}
															break;
													}
													func_318(14);
													Jump @838; //curOff = 816
													func_336();
													func_337();
													func_318(0);
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

void func_162()
{
	switch (func_338())
	{
		case -1:
			break;
		case 0:
			break;
		case 1:
			func_339();
			break;
		case 2:
			break;
		default:
			break;
	}
}

void func_163()
{
	Global_1102099->f_34.f_772 = (Global_1102099->f_34.f_772 + 1 % 32);
}

void func_164()
{
	int iVar0;
	int iVar1;

	if (func_58() != 0)
	{
		return;
	}
	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar0 == 255)
	{
		return;
	}
	if ((func_340() || Global_1048585) // PointerArith)
	{
		func_341();
	}
	iVar1 = Global_1070356->f_17915.f_21;
	((*Global_1055966)[iVar0 /*436*/])->f_390[iVar1] = &Global_39.f_106[iVar1];
	if (func_342(iVar1, iVar0))
	{
		Global_1070356->f_17915.f_21++;
		if (Global_1070356->f_17915.f_21 > 17)
		{
			Global_1070356->f_17915.f_21 = 0;
		}
		func_198(iVar0, Global_1070356->f_17915.f_21);
	}
	func_343();
}

void func_165()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = Global_1070356->f_26827.f_1 + 1;
	if (iVar0 > 25)
	{
		iVar0 = 0;
	}
	Global_1070356->f_26827.f_1 = iVar0;
	if (func_344(((*Global_1835011)[iVar0 /*72*/])->f_32))
	{
		return;
	}
	func_345();
	if ((Global_1132968->f_5641[iVar0 /*3*/])->f_2)
	{
		if (!func_346(iVar0, PLAYER::GET_PLAYER_INDEX()))
		{
			func_347();
		}
		func_348(iVar0);
	}
	else
	{
		func_349(iVar0);
	}
	if (((*Global_1835011)[iVar0 /*72*/])->f_3 == 0)
	{
		return;
	}
	if (!func_18(((*Global_1835011)[iVar0 /*72*/])->f_1))
	{
		return;
	}
	iVar1 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(Global_1275573->f_15);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		return;
	}
	iVar2 = func_350(((*Global_1835011)[iVar0 /*72*/])->f_1);
	if (!func_346(iVar0, iVar1))
	{
		if (iVar2 == 1)
		{
			func_351(iVar0, -1, 0, 0, 1, 0, 0);
			return;
		}
		return;
	}
	switch (iVar2)
	{
		case 3:
		case 4:
			return;
		case 1:
		case 2:
			return;
		default:
			break;
	}
	func_352(((*Global_1835011)[iVar0 /*72*/])->f_1);
}

void func_166()
{
	int iVar0;
	int iVar1;
	float fVar2;

	if (Global_1275761->f_422)
	{
		return;
	}
	func_353();
	iVar0 = func_354();
	if (iVar0 > 0 && iVar0 < 7)
	{
		if (func_355(4))
		{
			if (!&Global_1048577)
			{
				func_356(11);
			}
		}
		else if (&Global_1048577)
		{
			func_357(4);
		}
	}
	if (func_358())
	{
		if ((iVar0 > 0 && iVar0 < 11) && func_359())
		{
			func_360(1);
			func_361();
		}
	}
	switch (iVar0)
	{
		case 0:
			if (!func_362(1))
			{
			}
			else
			{
				if (func_358())
				{
					func_356(1);
				}
				else
				{
					func_356(2);
				}
				Jump @1181; //curOff = 241
				if (!func_359())
				{
				}
				else
				{
					func_361();
					func_356(3);
					Jump @1181; //curOff = 264
					func_363();
					if (!func_359())
					{
					}
					else
					{
						func_356(3);
						Jump @1181; //curOff = 287
						if (!func_364(PLAYER::PLAYER_ID(), 1))
						{
						}
						else
						{
							if (func_358())
							{
								func_356(4);
							}
							else
							{
								func_356(6);
							}
							Jump @1181; //curOff = 326
							if (!BOUNTY::_0xFC81D7C7A151CFAA(&(Global_1275761->f_374.f_6), func_366(func_365()), func_368(func_367())))
							{
								func_356(6);
							}
							else
							{
								func_369(MISC::GET_GAME_TIMER());
								func_357(1);
								func_356(5);
								Jump @1181; //curOff = 388
								if (func_355(536870912))
								{
									func_369(MISC::GET_GAME_TIMER());
									func_360(4);
									func_356(6);
									func_370();
								}
								else if (func_355(1073741824 /* Float: 2f */))
								{
									func_356(6);
									func_370();
								}
								else if (func_355(268435456))
								{
									func_356(6);
									func_370();
								}
								Jump @1181; //curOff = 473
								if (func_362(4))
								{
									func_357(8);
								}
								if (!func_371())
								{
								}
								else
								{
									if (func_372())
									{
										func_357(32);
									}
									func_356(8);
									Jump @1181; //curOff = 520
									if (func_355(8))
									{
										func_374(func_373());
										func_377(func_376(773203532 /* GXTEntry: "Gold Bar" */, func_375(1), 1084182731, 1, 0, 0));
										func_379(func_378(0));
										func_380(func_378(7));
										func_381();
										if (func_355(32))
										{
											BOUNTY::_0xA7309AC0DCF6D950(&(Global_1275761->f_374.f_6), &(Global_1275761->f_374.f_16.f_1));
										}
										else
										{
											BOUNTY::_0xC1F04FB37E3F0E57(&(Global_1275761->f_374.f_6), &(Global_1275761->f_374.f_16.f_1));
										}
										func_357(64);
										func_369(MISC::GET_GAME_TIMER());
										func_357(2);
										func_356(9);
									}
									else
									{
										func_356(11);
									}
									Jump @1181; //curOff = 684
									if (func_355(1879048192))
									{
										func_356(7);
										func_382();
										func_370();
										BOUNTY::_0x2BA1BCC99826CDA2();
									}
									Jump @1181; //curOff = 716
									if (!CAM::IS_SCREEN_FADED_IN())
									{
									}
									else if (func_328())
									{
									}
									else if (&Global_1048577)
									{
									}
									else if (&Global_1048584)
									{
									}
									else
									{
										func_356(10);
										Jump @1181; //curOff = 766
										if (!func_383())
										{
											if (func_355(64))
											{
												func_384();
												func_385(64);
											}
										}
										iVar1 = (func_373() - func_386());
										if (iVar1 > 0)
										{
											func_387(MISC::_CREATE_VAR_STRING(2, "FEED_MONEY_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
										}
										iVar1 = (func_376(773203532 /* GXTEntry: "Gold Bar" */, func_375(1), 1084182731, 1, 0, 0) - func_388());
										if (iVar1 > 0)
										{
											fVar2 = (IntToFloat(func_389(iVar1)) + (IntToFloat(func_390(iVar1, 1)) * (1f / 100f)));
											func_387(MISC::_CREATE_VAR_STRING(6, "SHOP_GOLD_PRICE_READ", fVar2), "ITEMTYPE_TEXTURES", -1959861270, 0, 1684603218, 0, 0, 0, 1);
										}
										iVar1 = (func_378(0) - func_391());
										if (iVar1 > 0)
										{
											func_387(MISC::_CREATE_VAR_STRING(2, "PLAYER_RPG_XP_GAIN", iVar1), "itemtype_textures", 1088654639, 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
										}
										iVar1 = (func_378(7) - func_392());
										if (iVar1 > 0)
										{
											func_387(MISC::_CREATE_VAR_STRING(2, "NET_TRADE_BOUNTY_HUNTER_XP", iVar1), "itemtype_textures", 1088654639, 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
										}
										if (func_367() != 0)
										{
											func_356(11);
										}
										else
										{
											if (func_393() == 4)
											{
												func_394(1);
											}
											else if (func_393() < 4 && func_355(16))
											{
												func_394(2);
											}
											func_394(4);
											func_356(11);
											Jump @1181; //curOff = 1131
											BOUNTY::_0x2BA1BCC99826CDA2();
											func_395();
											func_396();
											func_397();
											func_356(12);
											Jump @1181; //curOff = 1156
											if (func_362(1))
											{
											}
											else
											{
												func_356(0);
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

void func_167()
{
	func_398();
}

void func_168()
{
	if (func_340())
	{
		return;
	}
	if (Global_1199548[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/] != Global_1199613->f_1.f_8 || ((*Global_1199548)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/])->f_1 != Global_1199613->f_1.f_9)
	{
		(*Global_1199548)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/] = Global_1199613->f_1.f_8;
		((*Global_1199548)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/])->f_1 = Global_1199613->f_1.f_9;
	}
	if (Global_1199613->f_1200 >= 32)
	{
		Global_1199613->f_1200 = 0;
	}
	func_399(Global_1199613->f_1200);
	Global_1199613->f_1200++;
}

void func_169()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_400(iVar0);
		iVar0++;
	}
}

void func_170()
{
	func_401();
	func_304();
	Global_1099294->f_26.f_24 = 0;
	Global_1099294->f_26.f_22 = 0;
}

void func_171()
{
	func_402(Global_1275207->f_66, Global_1275207->f_67);
	Global_1275207->f_66++;
	if (Global_1275207->f_66 >= 1)
	{
		Global_1275207->f_66 = 0;
		Global_1275207->f_67++;
		Global_1275207->f_67 = (Global_1275207->f_67 % 32);
	}
}

void func_172()
{
	Global_1275207->f_68++;
	if (Global_1275207->f_68 >= Global_1275113->f_22)
	{
		Global_1275207->f_68 = 0;
		Global_1275207->f_69++;
		Global_1275207->f_69 = (Global_1275207->f_69 % 32);
	}
	if (Global_1275207->f_68 >= Global_1275113->f_22)
	{
		return;
	}
	switch ((Global_1275113->f_3[Global_1275207->f_68 /*6*/])->f_1)
	{
		case 0:
			func_403(Global_1275113->f_3[Global_1275207->f_68 /*6*/]);
			break;
		case 1:
			func_404(Global_1275113->f_3[Global_1275207->f_68 /*6*/]);
			break;
		case 2:
			func_405(Global_1275113->f_3[Global_1275207->f_68 /*6*/], Global_1275207->f_68);
			break;
	}
}

void func_173()
{
	if (SCRIPTS::HAS_SCRIPT_LOADED("net_train_manager"))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_train_manager");
	}
	if (SCRIPTS::HAS_SCRIPT_LOADED("net_fme_manager"))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_fme_manager");
	}
	if (SCRIPTS::HAS_SCRIPT_LOADED("net_gangfeud_manager"))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_gangfeud_manager");
	}
	if (SCRIPTS::HAS_SCRIPT_LOADED("net_ugc_global_loader"))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_ugc_global_loader");
	}
	if (SCRIPTS::HAS_SCRIPT_LOADED("generic_show_mp_manager"))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("generic_show_mp_manager");
	}
	if (SCRIPTS::HAS_SCRIPT_LOADED("net_camp_manager"))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_camp_manager");
	}
	if (SCRIPTS::HAS_SCRIPT_LOADED("net_camp_dog_manager"))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_camp_dog_manager");
	}
	if (SCRIPTS::HAS_SCRIPT_LOADED("net_ace_thread_manager"))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_ace_thread_manager");
	}
	if (SCRIPTS::HAS_SCRIPT_LOADED("net_fetch_manager"))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_fetch_manager");
	}
	if (SCRIPTS::HAS_SCRIPT_LOADED("net_crew_manager"))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_crew_manager");
	}
	if (SCRIPTS::HAS_SCRIPT_LOADED("net_beat_manager"))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_beat_manager");
	}
	if (SCRIPTS::HAS_SCRIPT_LOADED("net_scan_manager"))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_scan_manager");
	}
}

void func_174()
{
	func_406(256);
}

void func_175()
{
	SCRIPTS::_0xDE544B7EC0C187CC(&(((*Global_1055966)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*436*/])->f_10));
}

bool func_176()
{
	return Global_1051202->f_8;
}

void func_177(var uParam0)
{
	var uVar0;

	*uParam0 = uVar0;
}

int func_178(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_179()
{
	return Global_1099294->f_339;
}

void func_180(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_407((*uParam0)[iVar0 /*436*/]);
		iVar0++;
	}
}

int func_181(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_182()
{
	if (func_21())
	{
		*Global_1099243 = { *((*Global_1097610)[func_179() /*51*/]) };
		func_408(Global_1097610);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1097610, 1633, 67);
		func_181(NETWORK::_0x690806BC83BC8CA2((*Global_1097610)[0 /*51*/]), 1633, "g_mpPlayerStatusSyncData");
		*((*Global_1097610)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*51*/]) = { *Global_1099243 };
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1097610, 1633, 67);
		func_181(NETWORK::_0x690806BC83BC8CA2((*Global_1097610)[0 /*51*/]), 1633, "g_mpPlayerStatusSyncData");
	}
}

void func_183()
{
	if (func_21())
	{
		func_409(Global_1139395);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1139395, 1089, 64);
		func_181(NETWORK::_0x690806BC83BC8CA2((*Global_1139395)[0 /*34*/]), 1089, "g_mpPlayerPersona");
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1139395, 1089, 64);
		func_181(NETWORK::_0x690806BC83BC8CA2((*Global_1139395)[0 /*34*/]), 1089, "g_mpPlayerPersona");
	}
	func_151();
	func_150();
}

void func_184()
{
	func_410(Global_1100950);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(Global_1100950, 33, 50);
	func_178(NETWORK::_0xBA24095EA96DFE17(Global_1100950), 33, "g_mpHostJobData.sGangImpromptuRaceData");
	if (func_21())
	{
		*Global_1103523 = { *((*Global_1103073)[func_179() /*6*/]) };
		func_411(Global_1103073);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1103073, 193, 51);
		func_181(NETWORK::_0x690806BC83BC8CA2((*Global_1103073)[0 /*6*/]), 193, "g_mpPlayerJobData.sGangImpromptuRaceData");
		*((*Global_1103073)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*6*/]) = { *Global_1103523 };
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1103073, 193, 51);
		func_181(NETWORK::_0x690806BC83BC8CA2((*Global_1103073)[0 /*6*/]), 193, "g_mpPlayerJobData.sGangImpromptuRaceData");
	}
}

void func_185()
{
	func_412(Global_1185577);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1185577, 385, 43);
	func_181(NETWORK::_0x690806BC83BC8CA2((*Global_1185577)[0 /*12*/]), 385, "g_mpSessionManagerPlayerData");
	func_196();
}

void func_186()
{
	func_413(Global_1256981);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(Global_1256981, 177, 44);
	func_178(NETWORK::_0xBA24095EA96DFE17(Global_1256981), 177, "g_mpShopManagerHostData");
	if (func_21())
	{
		*Global_1262823 = { *((*Global_1257158)[func_179() /*177*/]) };
		func_414(Global_1257158);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1257158, 5665, 45);
		func_181(NETWORK::_0x690806BC83BC8CA2((*Global_1257158)[0 /*177*/]), 5665, "g_mpShopManagerPlayerData");
		*((*Global_1257158)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*177*/]) = { *Global_1262823 };
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1257158, 5665, 45);
		func_181(NETWORK::_0x690806BC83BC8CA2((*Global_1257158)[0 /*177*/]), 5665, "g_mpShopManagerPlayerData");
	}
}

void func_187()
{
	if (func_21())
	{
		Global_1269867 = Global_1269834[Global_1099294->f_339];
		func_415(Global_1269834);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1269834, 33, 4);
		func_181(NETWORK::_0x690806BC83BC8CA2((*Global_1269834)[0]), 33, "g_mpPlayerNetHudData");
		(*Global_1269834)[PLAYER::NETWORK_PLAYER_ID_TO_INT()] = &Global_1269867;
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1269834, 33, 4);
		func_181(NETWORK::_0x690806BC83BC8CA2((*Global_1269834)[0]), 33, "g_mpPlayerNetHudData");
	}
}

void func_188()
{
	func_416(&(Global_1100950->f_33));
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&(Global_1100950->f_33), 717, 70);
	func_178(NETWORK::_0xBA24095EA96DFE17(&(Global_1100950->f_33)), 717, "g_mpHostJobData.sGunForHireMissionData");
	func_417(&(Global_1100950->f_750));
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&(Global_1100950->f_750), 2, 71);
	func_178(NETWORK::_0xBA24095EA96DFE17(&(Global_1100950->f_750)), 2, "g_mpHostJobData.sGunForHireLocationGiverData");
	if (func_21())
	{
		func_418((*Global_1122836)[func_179() /*54*/]);
		func_419(Global_1122836);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1122836, 1729, 72);
		func_181(NETWORK::_0x690806BC83BC8CA2((*Global_1122836)[0 /*54*/]), 1729, "g_mpGunForHireGangPlayerData.sGunForHireGangData");
		func_420((*Global_1124565)[func_179() /*7*/]);
		func_421(Global_1124565);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1124565, 225, 73);
		func_181(NETWORK::_0x690806BC83BC8CA2((*Global_1124565)[0 /*7*/]), 225, "g_mpGunForHireCooldownPlayerData.sGunForHireCooldownData");
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1122836, 1729, 72);
		func_181(NETWORK::_0x690806BC83BC8CA2((*Global_1122836)[0 /*54*/]), 1729, "g_mpGunForHireGangPlayerData.sGunForHireGangData");
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1124565, 225, 73);
		func_181(NETWORK::_0x690806BC83BC8CA2((*Global_1124565)[0 /*7*/]), 225, "g_mpGunForHireCooldownPlayerData.sGunForHireCooldownData");
	}
	func_422(1);
	func_423();
	func_424();
	func_425(4);
}

void func_189()
{
	func_426(Global_1269868);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(Global_1269868, 1, 76);
	func_178(NETWORK::_0xBA24095EA96DFE17(Global_1269868), 1, "g_mpStableHostData");
	if (func_21())
	{
		*Global_1270510 = { *((*Global_1269869)[func_179() /*20*/]) };
		func_427((*Global_1269869)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*20*/]);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1269869, 641, 77);
		func_181(NETWORK::_0x690806BC83BC8CA2((*Global_1269869)[0 /*20*/]), 641, "g_mpStablePlayerData");
		*((*Global_1269869)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*20*/]) = { *Global_1270510 };
	}
	else
	{
		func_428(Global_1270530);
		func_429(Global_1269869);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1269869, 641, 77);
		func_181(NETWORK::_0x690806BC83BC8CA2((*Global_1269869)[0 /*20*/]), 641, "g_mpStablePlayerData");
	}
}

void func_190()
{
	func_430(&(Global_1100950->f_752));
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&(Global_1100950->f_752), 397, 29);
	func_178(NETWORK::_0xBA24095EA96DFE17(&(Global_1100950->f_752)), 397, "g_mpHostJobData.sPosseVersusData");
	if (func_21())
	{
		Global_1103523->f_6 = { *(Global_1103073->f_193[func_179() /*8*/]) };
		func_431(&(Global_1103073->f_193));
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&(Global_1103073->f_193), 257, 30);
		func_181(NETWORK::_0x690806BC83BC8CA2(Global_1103073->f_193[0 /*8*/]), 257, "g_mpPlayerJobData.sPosseVersusData");
		*(Global_1103073->f_193[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*8*/]) = { Global_1103523->f_6 };
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&(Global_1103073->f_193), 257, 30);
		func_181(NETWORK::_0x690806BC83BC8CA2(Global_1103073->f_193[0 /*8*/]), 257, "g_mpPlayerJobData.sPosseVersusData");
	}
}

void func_191()
{
	func_432(Global_1275113);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(Global_1275113, 27, 65);
	func_178(NETWORK::_0xBA24095EA96DFE17(Global_1275113), 27, "g_mpStoryCoopTransitionHostData");
	if (func_21())
	{
		*Global_1275205 = { *((*Global_1275140)[func_179() /*2*/]) };
		func_433((*Global_1275140)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/]);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1275140, 65, 66);
		func_181(NETWORK::_0x690806BC83BC8CA2((*Global_1275140)[0 /*2*/]), 65, "g_mpStoryCoopTransitionPlayerData");
		*((*Global_1275140)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/]) = { *Global_1275205 };
	}
	else
	{
		func_434(Global_1275207);
		func_435(Global_1275140);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1275140, 65, 66);
		func_181(NETWORK::_0x690806BC83BC8CA2((*Global_1275140)[0 /*2*/]), 65, "g_mpStoryCoopTransitionPlayerData");
	}
}

void func_192()
{
	func_436();
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1199548, 65, 78);
	func_181(NETWORK::_0xBA24095EA96DFE17((*Global_1199548)[0 /*2*/]), 65, "g_mpAbandonedLootPlayerData");
}

void func_193()
{
	if (func_21())
	{
		*Global_1269613 = { *((*Global_1266476)[func_179() /*98*/]) };
		func_437(Global_1266476);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1266476, 3137, 11);
		func_181(NETWORK::_0x690806BC83BC8CA2((*Global_1266476)[0 /*98*/]), 3137, "g_mpParleyPlayerData");
		*((*Global_1266476)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*98*/]) = { *Global_1269613 };
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1266476, 3137, 11);
		func_181(NETWORK::_0x690806BC83BC8CA2((*Global_1266476)[0 /*98*/]), 3137, "g_mpParleyPlayerData");
	}
}

void func_194()
{
	if (func_21())
	{
		func_438((*Global_1200815)[func_179() /*9*/]);
		func_439(Global_1200815);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1200815, 289, 23);
		func_181(NETWORK::_0x690806BC83BC8CA2((*Global_1200815)[0 /*9*/]), 289, "g_mpCollectiblePlayerData");
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1200815, 289, 23);
		func_181(NETWORK::_0x690806BC83BC8CA2((*Global_1200815)[0 /*9*/]), 289, "g_mpCollectiblePlayerData");
	}
}

void func_195()
{
	Global_1070356->f_3 = 1;
	Global_1051202->f_40 = (MISC::GET_GAME_TIMER() - Global_1051202->f_39);
}

void func_196()
{
	(*Global_1185577)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*12*/] = 0;
	((*Global_1185577)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*12*/])->f_2 = 0;
	Global_1185962->f_1 = 0;
	Global_1185962->f_1.f_1 = 1;
}

void func_197(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_440(iParam0);
	if (iVar2 != -1)
	{
		iVar0 = iVar2;
		while (iVar0 <= 31)
		{
			iVar1 = (iParam0 * 31 + iVar0);
			if (iVar1 >= 546)
			{
			}
			else
			{
				if (MISC::IS_BIT_SET(iParam1, iVar0) && !func_441(iVar1))
				{
					MISC::SET_BIT(((*Global_1055966)[iParam2 /*436*/])->f_390[iParam0], iVar0);
				}
				iVar0++;
			}
		}
		Global_1070356->f_17915[iParam0] = (Global_1070356->f_17915[iParam0] || ((*Global_1055966)[iParam2 /*436*/])->f_390[iParam0]) // PointerArith;
	}
}

void func_198(int iParam0, int iParam1)
{
	Global_1070356->f_17915.f_19 = 0;
	Global_1070356->f_17915.f_20 = &((*Global_1055966)[iParam0 /*436*/])->f_390.f_19[iParam1];
	Global_1070356->f_17915.f_22 = 0;
	Global_1070356->f_17915.f_23 = 0;
}

void func_199()
{
	int iVar0;
	int iVar1;

	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	switch (iVar1)
	{
		case -1:
			iVar0 = func_442(PLAYER::NETWORK_PLAYER_ID_TO_INT());
			break;
		case 0:
			iVar0 = 1965820175;
			break;
		case 1:
			iVar0 = -1164995627;
			break;
		case 2:
			iVar0 = -1406404850;
			break;
		case 3:
			iVar0 = 892340488;
			break;
		case 4:
			iVar0 = 570352286;
			break;
		case 5:
			iVar0 = 1809249877;
			break;
		case 6:
			iVar0 = 1185197041;
			break;
		case 7:
			iVar0 = -1901478918;
			break;
		case 8:
			iVar0 = 2097877918;
			break;
		default:
			return;
	}
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iVar0);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID()), func_443());
	}
}

void func_200(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_444(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_445(*uParam0);
	if (((*Global_1949759)[iVar0 /*23*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_446(iVar0);
	*uParam0 = 0;
}

void func_201(int iParam0)
{
	Global_1275207->f_1 = iParam0;
}

int func_202(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		case joaat("NEW_GAME"):
			iVar0 = 1;
			break;
		case 1651967528:
			iVar0 = 2;
			break;
		case -84928653:
			iVar0 = 4;
			break;
		case 1306134188:
			iVar0 = 8;
			break;
		case -1357178860:
			iVar0 = 16;
			break;
		case joaat("friendly"):
			iVar0 = 32;
			break;
		case 655115506:
			iVar0 = 64;
			break;
		case 1737952409:
			iVar0 = 128;
			break;
		case 2137301164:
			iVar0 = 256;
			break;
		case -110687166:
			iVar0 = 512;
			break;
		case -2030542394:
			iVar0 = 1024;
			break;
		case -11301188:
			iVar0 = 2048;
			break;
		case -1312679892:
			iVar0 = 4096;
			break;
		case -61119924:
			iVar0 = 8192;
			break;
		case 2134863183:
			iVar0 = 16384;
			break;
		case -159568751:
			iVar0 = 32768;
			break;
		case -1808811965:
			iVar0 = 65536;
			break;
		case -1854341522:
			iVar0 = 131072;
			break;
		case 1464020707:
			iVar0 = 262144;
			break;
		case 1098974047:
			iVar0 = 524288;
			break;
		case 868706284:
			iVar0 = 1048576;
			break;
		case 313296873:
			iVar0 = 2097152;
			break;
		case 541270806:
			iVar0 = 4194304;
			break;
		case 922800273:
			iVar0 = 8388608;
			break;
		case 1298496858:
			iVar0 = 16777216;
			break;
		case 1699163417:
			iVar0 = 33554432;
			break;
		case 864110990:
			iVar0 = 67108864;
			break;
		case -2127829790:
			iVar0 = 134217728;
			break;
		case -575777117:
			iVar0 = 268435456;
			break;
		case -1879562593:
			iVar0 = 536870912;
			break;
		case 1890312850:
			iVar0 = 1073741824; /* Float: 2f */
			break;
	}
	return iVar0;
}

bool func_203(int iParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	switch (*iParam0)
	{
		case 12:
			bVar0 = !func_447(255);
			iVar1 = 13;
			break;
		case 13:
			bVar0 = !func_126();
			iVar1 = 14;
			break;
		case 14:
			bVar0 = !func_448();
			iVar1 = 12;
			break;
	}
	bVar2 = &Global_1051202->f_44.f_2[*iParam0] != bVar0;
	Global_1051202->f_44.f_2[*iParam0] = bVar0;
	*iParam0 = iVar1;
	return bVar2;
}

bool func_204(int iParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	switch (*iParam0)
	{
		case 0:
			bVar0 = (!Global_1185962->f_1 & 3 != 0 && func_449());
			iVar1 = 4;
			break;
		case 4:
			bVar0 = (NETWORK::NETWORK_IS_IN_MP_CUTSCENE() || func_215());
			iVar1 = 6;
			break;
		case 6:
			bVar0 = (!Global_1185962->f_1 & 64 != 0 && func_450(PLAYER::NETWORK_PLAYER_ID_TO_INT()));
			iVar1 = 7;
			break;
		case 7:
			bVar0 = func_451(255);
			iVar1 = 8;
			break;
		case 8:
			bVar0 = func_452() > 0;
			iVar1 = 9;
			break;
		case 9:
			bVar0 = func_453() != true;
			iVar1 = 2;
			break;
		case 2:
			bVar0 = (!Global_1185962->f_1 & 3 != 0 && func_454());
			iVar1 = 1;
			break;
		case 1:
			bVar0 = ((!Global_1185962->f_1 & 16 != 0 && func_455()) || (!Global_1185962->f_1 & 512 != 0 && func_207(16)));
			iVar1 = 10;
			break;
		case 10:
			bVar0 = func_456();
			iVar1 = 11;
			break;
		case 11:
			bVar0 = func_457();
			iVar1 = 0;
			break;
	}
	bVar2 = &Global_1051202->f_44.f_2[*iParam0] != bVar0;
	Global_1051202->f_44.f_2[*iParam0] = bVar0;
	*iParam0 = iVar1;
	return bVar2;
}

struct<2> func_205(int iParam0)
{
	return *(Global_1900718->f_1[iParam0 /*2*/]);
}

var func_206(struct<2> Param0)
{
	char cVar0[128];
	char cVar16[128];

	StringCopy(&cVar0, "(", 128);
	StringConCat(&cVar0, func_458(Param0), 128);
	StringConCat(&cVar0, ",", 128);
	StringIntConCat(&cVar0, Param0.f_1, 128);
	StringConCat(&cVar0, ")", 128);
	if (func_18(Param0))
	{
		StringConCat(&cVar0, "|", 128);
		StringCopy(&cVar16, "", 128);
		IntToString(&cVar16, func_19(Param0), 128);
		StringConCat(&cVar0, &cVar16, 128);
	}
	return HUD::_0xD8402B858F4DDD88(&cVar0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0));
}

bool func_207(int iParam0)
{
	return func_235(Global_1277020->f_144, iParam0);
}

int func_208(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
		{
			return -1;
		}
	}
	return ((*Global_1277166)[iParam0 /*86*/])->f_5.f_12;
}

var func_209(int iParam0)
{
	return MISC::_0x2B6846401D68E563(BUILTIN::TO_FLOAT(iParam0), 0);
}

int func_210()
{
	return Global_1051202->f_79.f_102;
}

var func_211(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

int func_212(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1099294->f_10;
	}
	return ((*Global_1097610)[iParam0 /*51*/])->f_10;
}

char* func_213(int iParam0)
{
	if (!func_244(iParam0))
	{
		return "Wilderness";
	}
	switch (iParam0)
	{
		case 0:
			return "CrawdadWillies";
		case 1:
			return "MacombsEnd";
		case 2:
			return "MerkinsWaller";
		case 3:
			return "Lagras";
		case 4:
			return "Lakay";
		case 5:
			return "SaintDenis";
		case 6:
			return "OrangePlantation";
		case 7:
			return "SerialKiller";
		case 8:
			return "Serendipity";
		case 9:
			return "ShadyBelle";
		case 10:
			return "SiltwaterStrand";
		case 11:
			return "AppleseedTimberCo";
		case 12:
			return "BerylsDream";
		case 13:
			return "BigValleyTrapper";
		case 14:
			return "DakotaRiverTrapper";
		case 15:
			return "FortRiggsHoldingCamp";
		case 16:
			return "HangingDogRanch";
		case 17:
			return "LoneMuleStead";
		case 18:
			return "MissingHusband";
		case 19:
			return "MontoRest";
		case 20:
			return "OwanjilaDam";
		case 21:
			return "PaintedSky";
		case 22:
			return "PronghornRanch";
		case 23:
			return "RiggsStation";
		case 24:
			return "BigvalleyShack";
		case 25:
			return "ShepherdsRise";
		case 26:
			return "Strawberry";
		case 27:
			return "ValleyView";
		case 28:
			return "WallaceStation";
		case 30:
			return "WatsonsCabin";
		case 29:
			return "BigValleyOldManJones";
		case 31:
			return "Canebreak Manor";
		case 32:
			return "Copperhead";
		case 33:
			return "SisikaPenitentiary";
		case 34:
			return "BluewaterTravelSales";
		case 35:
			return "BacchuBridge";
		case 36:
			return "DinoLady";
		case 37:
			return "OldFortWallace";
		case 38:
			return "SixPointCabin";
		case 39:
			return "BeechersHope";
		case 40:
			return "Blackwater";
		case 41:
			return "QuakersCove";
		case 42:
			return "AdlerRanch";
		case 43:
			return "DeadRival";
		case 53:
			return "CalumetRavine";
		case 54:
			return "CivilWarBride";
		case 44:
			return "ChezPorter";
		case 55:
			return "Cohutta";
		case 45:
			return "Colter";
		case 56:
			return "CotorraSprings";
		case 46:
			return "FrozenExplorer";
		case 57:
			return "GunFight";
		case 47:
			return "MillesaniClaim";
		case 49:
			return "MountHagenPeak";
		case 48:
			return "MountainMan";
		case 50:
			return "StarvingChildren";
		case 51:
			return "TempestRim";
		case 58:
			return "TheLoft";
		case 59:
			return "Veteran";
		case 60:
			return "Wapiti";
		case 52:
			return "WinterMiningTown";
		case 61:
			return "GrizzliesTravelSales";
		case 62:
			return "AguasDulces";
		case 63:
			return "GuarmaCamp";
		case 64:
			return "CincoTorres";
		case 65:
			return "LaCapilla";
		case 66:
			return "Manicato";
		case 67:
			return "Abandoned Mill";
		case 69:
			return "CarmodyDell";
		case 70:
			return "CornwallKerosene";
		case 71:
			return "CropFarm";
		case 72:
			return "CumberlandFalls";
		case 73:
			return "DownsRanch";
		case 74:
			return "EmeraldRanch";
		case 75:
			return "GrangersHoggery";
		case 76:
			return "HorseshoeOverlook";
		case 77:
			return "LarnedSod";
		case 78:
			return "LoonyCult";
		case 79:
			return "LuckysCabin";
		case 80:
			return "SwansonsStation";
		case 81:
			return "Valentine";
		case 82:
			return "AberdeenPigFarm";
		case 83:
			return "Annesburg";
		case 68:
			return "BeechersC";
		case 84:
			return "BeaverHollow";
		case 85:
			return "BlackBalsamRise";
		case 86:
			return "BrandywineDrop";
		case 87:
			return "ButcherCreek";
		case 88:
			return "Doverhill";
		case 89:
			return "HappyFamily";
		case 90:
			return "Isolationist";
		case 91:
			return "MacLeansHouse";
		case 92:
			return "MossyFlats";
		case 93:
			return "RoanokeValley";
		case 94:
			return "RockySeven";
		case 95:
			return "RoanokeTrapper";
		case 97:
			return "VanHornMansion";
		case 98:
			return "VanHornTradingPost";
		case 96:
			return "RoanokeOldManJones";
		case 99:
			return "BraithewaiteManor";
		case 100:
			return "BulgerGlade";
		case 101:
			return "CaligaHall";
		case 102:
			return "CatfishJacksons";
		case 103:
			return "ClemensCove";
		case 104:
			return "ClemensPoint";
		case 105:
			return "CompsonsStead";
		case 106:
			return "Dairy Farm";
		case 107:
			return "ScarletMeadowsHorseShop";
		case 108:
			return "LonniesShack";
		case 109:
			return "LoveTriangle";
		case 110:
			return "Radleys Pasture";
		case 111:
			return "Rhodes";
		case 112:
			return "SlavePen";
		case 113:
			return "AuroraBasinShack";
		case 114:
			return "DeadSettler";
		case 115:
			return "Cochinay";
		case 116:
			return "ManzanitaPost";
		case 117:
			return "PacificUnionRailroad";
		case 118:
			return "TannersReach";
		case 119:
			return "TallTreesTrapper";
		case 134:
			return "MacFarlanesRanch";
		case 135:
			return "ThievesLanding";
		case 136:
			return "HenniganTravelSales";
		case 127:
			return "Armadillo";
		case 128:
			return "CootsChapel";
		case 129:
			return "DonJulioHouse";
		case 131:
			return "RidgewoodFarm";
		case 130:
			return "RileysCharge";
		case 132:
			return "TwinRocks";
		case 133:
			return "ChollaTravelSales";
		case 120:
			return "Gaptooth Breach";
		case 121:
			return "Tumbleweed";
		case 122:
			return "Rathskeller Fork";
		case 123:
			return "BenedictPoint";
		case 124:
			return "FortMercer";
		case 125:
			return "Plainview";
		case 126:
			return "RioBravoTravelSales";
		case 137:
			return "CentralUnionRRCamp";
		default:
			break;
	}
	return "Wilderness";
}

char* func_214()
{
	if (func_459())
	{
		return HUD::_0xD8402B858F4DDD88(&Global_26287, HUD::GET_LENGTH_OF_LITERAL_STRING(&Global_26287));
	}
	return "";
}

int func_215()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!func_460(iVar0))
		{
		}
		else if (!func_461(iVar0))
		{
		}
		else if (func_462(Global_1272028->f_16[iVar0 /*11*/]))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_216()
{
	char cVar0[128];
	int iVar16;
	int iVar17;

	StringCopy(&cVar0, "[", 128);
	iVar17 = 0;
	iVar16 = 0;
	while (iVar16 < 7)
	{
		if (!func_460(iVar16))
		{
		}
		else if (!func_461(iVar16))
		{
		}
		else if (!func_462(Global_1272028->f_16[iVar16 /*11*/]))
		{
		}
		else
		{
			if (iVar17 > 0)
			{
				StringConCat(&cVar0, ",", 128);
			}
			StringConCat(&cVar0, "'", 128);
			StringIntConCat(&cVar0, (Global_1272028->f_16[iVar16 /*11*/])->f_1, 128);
			StringConCat(&cVar0, "'", 128);
			iVar17++;
		}
		iVar16++;
	}
	if (iVar17 <= 0)
	{
		StringCopy(&cVar0, "[NONE]", 128);
	}
	else
	{
		StringConCat(&cVar0, "]", 128);
	}
	return func_463(&cVar0);
}

bool func_217(int iParam0, int iParam1)
{
	return (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iParam1)) && func_464(iParam0, 4, iParam1));
}

char* func_218(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Primary";
		case 1:
			return "Secondary";
		case 2:
			return "Trolley";
		default:
			break;
	}
	return "undefined";
}

var func_219()
{
	return HUD::_0xD8402B858F4DDD88(&(((*Global_262996)[&Global_1275573 /*70*/])->f_1.f_27), HUD::GET_LENGTH_OF_LITERAL_STRING(&(((*Global_262996)[&Global_1275573 /*70*/])->f_1.f_27)));
}

struct<35> func_220(int iParam0)
{
	struct<35> Var0;

	Var0.f_8 = -1;
	Var0.f_8.f_1 = -1;
	Var0.f_16.f_12 = -1;
	Var0.f_16.f_12.f_1 = -1;
	Var0.f_16.f_14 = 255;
	Var0.f_16.f_15 = 255;
	if (Global_1070356->f_14 > 0)
	{
		return *(Global_1070356->f_14.f_5[iParam0 /*35*/]);
	}
	return Var0;
}

int func_221(var uParam0)
{
	if (!*uParam0)
	{
		return 0;
	}
	switch (uParam0->f_16.f_4)
	{
		case 68:
		case 72:
		case 74:
		case 75:
			return 1;
		default:
			break;
	}
	return 0;
}

char* func_222(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	int iVar3;

	iVar0 = func_465(iParam0);
	if (!func_466(iVar0))
	{
		return "NoSlot";
	}
	Var1 = -1;
	Var1.f_1 = -1;
	iVar3 = 0;
	while (iVar3 < 32)
	{
		Var1 = { func_467(iVar3) };
		if (func_18(Var1))
		{
		}
		else
		{
			iVar3++;
		}
	}
	return func_206(Var1);
}

Vector3 func_223()
{
	if (Global_1225057->f_9329 == -1)
	{
		return 0f, 0f, 0f;
	}
	return ((*Global_1225057)[Global_1225057->f_9329 /*686*/])->f_606;
}

var func_224()
{
	char cVar0[64];

	StringCopy(&cVar0, "DynamicNearby", 64);
	return func_468(cVar0);
}

void func_225(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

int func_226()
{
	int iVar0;

	if (Global_1275573->f_21 < 79)
	{
		return joaat("snowlight");
	}
	iVar0 = ((Global_1275573->f_21 % 79) * 100 / 79);
	if (func_228())
	{
		switch (Global_1938579->f_85)
		{
			case joaat("whiteout"):
				if (iVar0 < 10)
				{
					return joaat("whiteout");
				}
				else
				{
					return joaat("blizzard");
				}
				break;
			case joaat("blizzard"):
				if (iVar0 < 5)
				{
					return joaat("whiteout");
				}
				else if (iVar0 < 25)
				{
					return joaat("blizzard");
				}
				else
				{
					return joaat("snow");
				}
				break;
			case joaat("snow"):
				if (iVar0 < 10)
				{
					return joaat("blizzard");
				}
				else if (iVar0 < 55)
				{
					return joaat("snow");
				}
				else
				{
					return joaat("snowlight");
				}
				break;
			case joaat("snowlight"):
				if (iVar0 < 50)
				{
					return joaat("snow");
				}
				else
				{
					return joaat("snowlight");
				}
				break;
		}
	}
	else
	{
		switch (Global_1938579->f_85)
		{
			case joaat("whiteout"):
				if (iVar0 < 10)
				{
					return joaat("whiteout");
				}
				else
				{
					return joaat("blizzard");
				}
				break;
			case joaat("blizzard"):
				if (iVar0 < 2)
				{
					return joaat("whiteout");
				}
				else if (iVar0 < 25)
				{
					return joaat("blizzard");
				}
				else
				{
					return joaat("snow");
				}
				break;
			case joaat("snow"):
				if (iVar0 < 3)
				{
					return joaat("blizzard");
				}
				else if (iVar0 < 55)
				{
					return joaat("snow");
				}
				else
				{
					return joaat("snowlight");
				}
				break;
			case joaat("snowlight"):
				if (iVar0 < 22)
				{
					return joaat("snowlight");
				}
				else if (iVar0 < 44)
				{
					return joaat("snow");
				}
				else
				{
					return joaat("clouds");
				}
				break;
			case joaat("fog"):
			case joaat("highpressure"):
			case joaat("clouds"):
			case joaat("misty"):
			case joaat("sunny"):
				if (iVar0 < 25)
				{
					return joaat("snowlight");
				}
				else if (iVar0 < 39)
				{
					return joaat("misty");
				}
				else if (iVar0 < 45)
				{
					return joaat("fog");
				}
				else if (iVar0 < 53)
				{
					return joaat("highpressure");
				}
				else if (iVar0 < 75)
				{
					return joaat("sunny");
				}
				else
				{
					return joaat("clouds");
				}
				break;
		}
	}
	return joaat("snowlight");
}

void func_227(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		MISC::_SET_WEATHER_TYPE(iParam0, true, true, false, 0f, false);
	}
	else
	{
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
		MISC::_SET_WEATHER_TYPE(iParam0, true, true, true, 119f, false);
	}
	Global_1938579->f_85 = iParam0;
}

int func_228()
{
	if (!func_78())
	{
		return 0;
	}
	return func_235(Global_1901929->f_38.f_5, 32);
}

int func_229()
{
	if (!func_78())
	{
		return 0;
	}
	return func_235(Global_1901929->f_38.f_5, 2);
}

int func_230()
{
	if (!func_78())
	{
		return 0;
	}
	return func_235(Global_1901929->f_38.f_5, 64);
}

int func_231(int iParam0)
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	return STREAMING::_0x73B40D97D7BAAD77(iParam0, Global_35);
}

void func_232(int iParam0)
{
	if (!STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		func_469(iParam0);
	}
}

void func_233(int iParam0)
{
	if (STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		func_470(iParam0);
	}
}

struct<19> func_234(bool bParam0)
{
	struct<19> Var0;
	struct<4> Var19;
	struct<17> Var23;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var19 = { func_471(-1838434463 /* GXTEntry: "Camp" */, func_375(1), 1084182731, 1) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var19))
	{
		return Var0;
	}
	Var23.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_472(1), &Var19, &Var23, 17, 1))
	{
		return Var0;
	}
	Var0 = { func_473(&Var23, bParam0) };
	Var0.f_17 = Var23.f_15;
	Var0.f_18 = Var23.f_16;
	Var0.f_16 = Var23.f_14;
	return Var0;
}

bool func_235(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

struct<7> func_236(int iParam0)
{
	struct<7> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

int func_237(vector3 vParam0, int iParam3)
{
	if (vParam0.x < 4)
	{
		vParam0.x = 4;
	}
	if (!func_474(0, 1))
	{
		return 0;
	}
	((*Global_1128435)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/])->f_33 = { vParam0 };
	((*Global_1128435)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/])->f_33.f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65536);
	func_475();
	if (iParam3 == 1)
	{
		func_238(2);
	}
	else
	{
		Global_1131092->f_330.f_6 = 1;
		func_476(2);
	}
	if (!func_477(PLAYER::NETWORK_PLAYER_ID_TO_INT()))
	{
		func_476(8);
		func_478();
	}
	if (!func_479(4) && (func_479(8) || func_479(16)))
	{
		func_238(4);
	}
	else
	{
		func_476(4);
	}
	if (func_235(Global_1131092->f_8, 1))
	{
		func_238(1);
	}
	else
	{
		func_476(1);
	}
	func_480(6);
	return 1;
}

void func_238(int iParam0)
{
	func_95(&(((*Global_1128435)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/])->f_33.f_4), iParam0);
}

void func_239(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_240(int iParam0)
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

int func_241(int iParam0)
{
	struct<4> Var0;

	Var0 = Global_1070356->f_22101.f_366.f_4357;
	Var0.f_2 = 1593794963;
	Var0.f_3 = iParam0;
	return DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
}

int func_242(int iParam0, int iParam1, var uParam2, float fParam3)
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
		DATAFILE::_DATAFILE_GET_FLOAT(fParam3, &Var0);
		return 1;
	}
	return 0;
}

int func_243()
{
	return Global_1893575->f_2;
}

bool func_244(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_245(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_481(vParam0);
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

int func_246(int iParam0)
{
	if (func_482(&(Global_1099294->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_247(int iParam0)
{
	if (func_483(&(Global_1099294->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_248(int iParam0, var uParam1)
{
	var uVar0;
	vector3 vVar1;
	float fVar4;

	if (!func_244(iParam0))
	{
		return 0;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(((*Global_1887327)[iParam0 /*36*/])->f_4))
	{
		return 0;
	}
	uParam1->f_17.f_6 = { VOLUME::_0xF70F00013A62F866(((*Global_1887327)[iParam0 /*36*/])->f_4) };
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(uParam1->f_17.f_6, &uVar0, 0))
	{
		uParam1->f_17.f_6.f_2 = uVar0;
	}
	uParam1->f_17 = Global_1901929->f_44.f_1;
	uParam1->f_17.f_1 = Global_1901929->f_44.f_1;
	uParam1->f_17.f_2 = Global_1901929->f_44.f_1;
	vVar1 = { VOLUME::_0x3E2A25B2416DD67E(((*Global_1887327)[iParam0 /*36*/])->f_4) };
	fVar4 = (((vVar1.x + vVar1.y) + vVar1.z) * 0.3333f);
	if (fVar4 < Global_1901929->f_44)
	{
		fVar4 = Global_1901929->f_44;
	}
	if (fVar4 > Global_1901929->f_44.f_1)
	{
		fVar4 = Global_1901929->f_44.f_1;
	}
	uParam1->f_17.f_3 = { 0f, 0f, 0f };
	uParam1->f_17 = fVar4;
	uParam1->f_17.f_1 = fVar4;
	uParam1->f_17.f_2 = fVar4;
	uParam1->f_17.f_9 = -432403087;
	return 1;
}

void func_249(struct<29> Param0, var uParam29, int iParam30)
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

void func_250(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

void func_251(bool bParam0)
{
	if (!bParam0)
	{
		func_246(5);
	}
	else
	{
		if (func_146(255) == 4)
		{
			return;
		}
		func_247(5);
	}
}

void func_252(bool bParam0, bool bParam1)
{
	if (func_146(255) == 4)
	{
		return;
	}
	if (func_97(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_246(0);
	}
	else
	{
		if (bParam1)
		{
			func_484(0, 0, 0, 1);
		}
		func_247(0);
		func_119(&(Global_1099294->f_516));
		Global_1099294->f_516 = 0f;
		Global_1099294->f_516.f_5 = 1;
		Global_1099294->f_516.f_16 = 0;
		Global_1099294->f_516.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1099294->f_516.f_17.f_3 = { 0f, 0f, 0f };
		Global_1099294->f_516.f_17 = { Global_1901929->f_44.f_1, Global_1901929->f_44.f_1, Global_1901929->f_44.f_1 };
		Global_1099294->f_516.f_17.f_9 = -432403087;
		func_120(&(Global_1099294->f_555));
		Global_1099294->f_555.f_6 = { Global_1099294->f_516.f_17.f_6 };
		Global_1099294->f_555 = Global_1099294->f_516;
		Global_1099294->f_555.f_5 = 1;
		if (bParam1)
		{
			Global_1099294->f_26.f_18 = 0;
			Global_1099294->f_26.f_19 = 0;
		}
	}
	func_249(Global_1099294->f_516, 36);
	func_250(Global_1099294->f_555, 36);
}

void func_253(vector3 vParam0, int iParam3, vector3 vParam4, int iParam7, float fParam8, float fParam9, bool bParam10, int iParam11, float fParam12, int iParam13)
{
	if (func_146(255) == 4)
	{
		return;
	}
	if (func_97(vParam0))
	{
		return;
	}
	if (fParam8 < 0f && fParam9 < 0f)
	{
		fParam8 = Global_1901929->f_44;
		fParam9 = Global_1901929->f_44.f_1;
	}
	if (fParam8 == 0f && fParam9 == 0f)
	{
		fParam8 = Global_1901929->f_44;
		fParam9 = Global_1901929->f_44.f_1;
	}
	if (fParam9 < fParam8)
	{
		fParam8 = Global_1901929->f_44;
		fParam9 = Global_1901929->f_44.f_1;
	}
	if (bParam10)
	{
		func_484(0, 0, 0, 1);
	}
	func_247(0);
	func_247(3);
	Global_1099294->f_586 = iParam11;
	Global_1099294->f_587 = fParam12;
	Global_1099294->f_588 = iParam13;
	func_119(&(Global_1099294->f_516));
	Global_1099294->f_516 = iParam3;
	Global_1099294->f_516.f_5 = 1;
	Global_1099294->f_516.f_17.f_6 = { vParam0 };
	Global_1099294->f_516.f_17.f_3 = { 0f, 0f, 0f };
	Global_1099294->f_516.f_17 = { fParam9, fParam9, fParam9 };
	Global_1099294->f_516.f_17.f_9 = -432403087;
	if (fParam8 > 1f)
	{
		Global_1099294->f_516.f_16 = 1;
		Global_1099294->f_516.f_6.f_6 = { Global_1099294->f_516.f_17.f_6 };
		Global_1099294->f_516.f_6.f_3 = { 0f, 0f, 0f };
		Global_1099294->f_516.f_6 = { fParam8, fParam8, fParam8 };
		Global_1099294->f_516.f_6.f_9 = -432403087;
	}
	func_120(&(Global_1099294->f_555));
	Global_1099294->f_555.f_6 = { vParam4 };
	Global_1099294->f_555 = iParam7;
	Global_1099294->f_555.f_5 = 1;
	Global_1099294->f_26.f_18 = 0;
	Global_1099294->f_26.f_19 = 0;
	func_249(Global_1099294->f_516, 36);
	func_250(Global_1099294->f_555, 36);
}

Vector3 func_254()
{
	return 0f, 0f, 0f;
}

struct<10> func_255(int iParam0)
{
	struct<10> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	func_486(func_485(iParam0), &Var0);
	return Var0;
}

int func_256()
{
	int iVar0;
	int iVar5;

	if (STATS::_0xA2E2BEA4E83F6270(-92244418) > 0)
	{
		STATS::_0xB5E2EDA2135E0FA1(-92244418, 0, &iVar0);
	}
	else
	{
		return -1;
	}
	if (iVar0 == 0)
	{
		return -1;
	}
	iVar5 = func_487(iVar0);
	if (iVar5 < 0 || iVar5 >= 12)
	{
		return -1;
	}
	return (135 + iVar5);
}

int func_257(int iParam0, var uParam1, var uParam2)
{
	struct<4> Var0;
	float fVar5;

	Var0 = (Global_1070356->f_26934[47 /*4*/])->f_3;
	Var0.f_2 = -738708473;
	Var0.f_3 = func_488(iParam0);
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		return 0;
	}
	Var0.f_2 = -99852754;
	Var0.f_3 = MISC::GET_HASH_KEY("vPropPos");
	DATAFILE::_DATAFILE_GET_VECTOR(uParam1, &Var0);
	fVar5 = 0f;
	Var0.f_2 = 1059891245;
	Var0.f_3 = MISC::GET_HASH_KEY("fPropHead");
	DATAFILE::_DATAFILE_GET_FLOAT(&fVar5, &Var0);
	uParam2->f_2 = fVar5;
	return 1;
}

int func_258()
{
	int iVar0;

	iVar0 = func_489(-1892463704, -666033972);
	iVar0 = (iVar0 + func_489(-1892463704, -443907314));
	if (iVar0 > 0)
	{
		return 1;
	}
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1348352077))
	{
		return 0;
	}
	return 1;
}

void func_259(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

int func_260(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 30)
	{
		return 0;
	}
	if (func_490(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_491(iParam0))
	{
		return 0;
	}
	if (func_492(iParam0))
	{
		return 0;
	}
	if ((Global_1900718->f_67 && !func_493(iParam0, 1)) || func_494(32768))
	{
		if (!func_493(iParam0, 262144) || !Global_1904613->f_8198)
		{
			return 0;
		}
	}
	if (!func_495())
	{
		return 0;
	}
	return 1;
}

void func_261(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904613[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1904613)[iParam0] = uVar0;
}

int func_262(vector3 vParam0, float fParam3)
{
	if (func_97(vParam0))
	{
		return 0;
	}
	if (func_146(255) == 4)
	{
		return 0;
	}
	if (func_496(4, 255))
	{
	}
	func_247(4);
	func_497(&(Global_1099294->f_546));
	Global_1099294->f_546.f_6 = { vParam0 };
	Global_1099294->f_546 = fParam3;
	Global_1099294->f_546.f_5 = 1;
	Global_1099294->f_26.f_18 = 0;
	Global_1099294->f_26.f_19 = 0;
	func_498(Global_1099294->f_546, 36);
	return 1;
}

void func_263(int iParam0)
{
	Global_1893575 = (&Global_1893575 - (Global_1893575 && iParam0));
}

void func_264()
{
	func_499();
	func_500();
	func_501();
	func_502();
	func_503();
}

void func_265()
{
	int iVar0;
	struct<8> Var1;
	int iVar9;

	if (PATHFIND::_0x5AC0944C156E5F44("dewclm_nav_camp_00"))
	{
		PATHFIND::_0x527B97C203BB8606("dewclm_nav_camp_00");
	}
	if (PATHFIND::_0x5AC0944C156E5F44("shb_nav_camp_00"))
	{
		PATHFIND::_0x527B97C203BB8606("shb_nav_camp_00");
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar9 = 0;
		while (iVar9 <= 2)
		{
			if (func_504(iVar0, iVar9))
			{
				Var1 = { func_505(iVar0, iVar9) };
				if (PATHFIND::_0x5AC0944C156E5F44(&Var1))
				{
					PATHFIND::_0x527B97C203BB8606(&Var1);
				}
			}
			iVar9++;
		}
		iVar0++;
	}
}

void func_266()
{
	int iVar0[3];
	int iVar4;

	iVar0[0] = 67198036;
	iVar0[1] = -1656481590;
	iVar0[2] = -1670262487;
	iVar4 = 0;
	while (iVar4 < 3)
	{
		if (STREAMING::_IS_IMAP_ACTIVE(&(iVar0[iVar4])))
		{
			func_470(&(iVar0[iVar4]));
		}
		iVar4++;
	}
}

void func_267()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_507(iVar0, func_506(iVar0), 0, 0);
		iVar0++;
	}
}

char* func_268(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "scr_deadeye";
		default:
			break;
	}
	return "";
}

bool func_269(int iParam0, bool bParam1)
{
	return func_508(iParam0, bParam1) >= 4;
}

bool func_270(int iParam0, bool bParam1)
{
	return (func_508(iParam0, bParam1) >= 2 && func_508(iParam0, bParam1) < 4);
}

int func_271(int iParam0)
{
	int iVar0;

	if (Global_1051385->f_1)
	{
		return 1;
	}
	if (Global_1901929->f_38.f_1 == 0)
	{
		return 0;
	}
	if (Global_1901929->f_38 == 0)
	{
		return 0;
	}
	if (&Global_1051385 != Global_1901929->f_38)
	{
		iVar0 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1901929->f_38.f_1);
		if (iVar0 > 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_272(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	uVar15 = _NAMESPACE71::_0x049D5C615BD38BAD(&Var0, &Var13, iParam5);
	return uVar15;
}

var func_273(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_509() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_510());
				break;
			case -432403087:
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_510());
				break;
			case -1612834106:
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_510());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_511(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_512(iVar2))
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
				if (iVar9 & 8192 != 0 && func_146(iVar2) != 1)
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
					if (_NAMESPACE26::_0x901E0DC25080C8B9(iVar10) != iVar6)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 65536 != 0)
				{
					if (!func_513(iVar10))
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

int func_274(var uParam0, struct<21> Param1)
{
	if (!func_514(uParam0))
	{
		return 0;
	}
	*(uParam0->f_2[*uParam0 /*21*/]) = { Param1 };
	*uParam0++;
	return 1;
}

void func_275(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

int func_276()
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return Global_1070356->f_3;
}

int func_277(int iParam0, bool bParam1)
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

struct<35> func_278()
{
	vector3 vVar0;
	struct<35> Var4;
	int iVar39;

	Var4.f_8 = -1;
	Var4.f_8.f_1 = -1;
	Var4.f_16.f_12 = -1;
	Var4.f_16.f_12.f_1 = -1;
	Var4.f_16.f_14 = 255;
	Var4.f_16.f_15 = 255;
	Var4.f_16.f_1 = 255;
	Var4.f_16.f_2 = vVar0.z;
	func_275(&(Var4.f_8));
	if (Global_1070356->f_14 > 0)
	{
		Global_1070356->f_14 = (Global_1070356->f_14 - 1);
		if (func_515() == Global_1070356->f_14)
		{
			func_516();
		}
		Var4 = { *(Global_1070356->f_14.f_5[Global_1070356->f_14 /*35*/]) };
		Global_1070356->f_14.f_5[Global_1070356->f_14 /*35*/] = 0;
	}
	iVar39 = 0;
	iVar39 = 0;
	while (iVar39 <= 8)
	{
		if (func_515() == iVar39 + 1)
		{
			func_517(iVar39);
		}
		*(Global_1070356->f_14.f_5[iVar39 /*35*/]) = { *(Global_1070356->f_14.f_5[iVar39 + 1 /*35*/]) };
		Global_1070356->f_14.f_5[iVar39 + 1 /*35*/] = 0;
		iVar39++;
	}
	return Var4;
}

void func_279(var uParam0)
{
}

void func_280()
{
	struct<35> Var0;

	Var0 = { func_220(func_281()) };
	if (!Var0)
	{
		return;
	}
}

int func_281()
{
	return Global_1070356->f_14.f_1;
}

void func_282(int iParam0)
{
	Global_1070356->f_14.f_1 = iParam0;
}

void func_283()
{
	if (func_515() == -1)
	{
		return;
	}
	if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), Global_1070356->f_14.f_2.f_2) > (Global_1901929->f_1.f_23 / 2))
	{
		func_516();
		return;
	}
}

void func_284(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	((*Global_1269869)[iVar0 /*20*/])->f_1 = (((*Global_1269869)[iVar0 /*20*/])->f_1 - (((*Global_1269869)[iVar0 /*20*/])->f_1 && iParam0));
}

void func_285(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	((*Global_1269869)[iVar0 /*20*/])->f_2 = (((*Global_1269869)[iVar0 /*20*/])->f_2 - (((*Global_1269869)[iVar0 /*20*/])->f_2 && iParam0));
}

int func_286(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 118)
	{
		return 0;
	}
	return &(Global_1903929->f_485[iParam0]);
}

void func_287(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 118)
	{
		return;
	}
	Global_1903929->f_485[iParam0] = 0;
}

void func_288()
{
	func_518();
}

bool func_289()
{
	return func_59(Global_1572887->f_7, 1);
}

void func_290()
{
	func_519(1);
	func_519(2);
	func_519(4);
	func_519(8);
	func_519(16);
	func_519(256);
	func_519(512);
	func_519(1024);
	func_519(4096);
	func_519(8192);
}

void func_291()
{
	func_519(1);
	func_519(2);
	func_519(4);
	func_519(8);
	func_519(16);
	func_519(64);
	func_519(128);
	func_519(256);
	func_519(512);
	func_519(1024);
	func_519(4096);
}

void func_292()
{
	func_519(1);
	func_519(2);
	func_519(8);
	func_519(16);
	func_519(64);
	func_519(128);
	func_519(256);
	func_519(512);
	func_519(1024);
	func_519(2048);
	func_519(4096);
	func_519(8192);
}

void func_293()
{
	func_520(1);
	func_520(2);
	func_520(4);
	func_520(8);
	func_520(16);
	func_520(32);
	func_520(64);
	func_520(128);
	func_520(256);
	func_520(512);
	func_520(1024);
	func_520(2048);
	func_520(4096);
	func_520(8192);
}

void func_294()
{
	int iVar0;

	if (Global_1901929->f_38.f_1 == 0)
	{
		return;
	}
	if (Global_1901929->f_38 == 0)
	{
		return;
	}
	iVar0 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1901929->f_38.f_1);
	if (iVar0 < func_521(1))
	{
		func_522(1, 1022);
	}
	else if (iVar0 < func_521(2))
	{
		func_522(2, 1020);
	}
	else if (iVar0 < func_521(4))
	{
		func_522(4, 1016);
	}
	else if (iVar0 < func_521(8))
	{
		func_522(8, 1008);
	}
	else if (iVar0 < func_521(16))
	{
		func_522(16, 992);
	}
	else if (iVar0 < func_521(32))
	{
		func_522(32, 960);
	}
	else if (iVar0 < func_521(64))
	{
		func_522(64, 896);
	}
	else if (iVar0 < func_521(128))
	{
		func_522(128, 768);
	}
	else if (iVar0 < func_521(256))
	{
		func_522(256, 512);
	}
	else if (iVar0 < func_521(512))
	{
		func_522(512, 512);
	}
}

void func_295()
{
	func_62();
}

void func_296()
{
	if (!func_523(1, &Global_1275573))
	{
		return;
	}
	if (func_523(2, 255))
	{
		func_524(8);
		func_201(3);
	}
	else
	{
		func_201(2);
	}
}

void func_297()
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1275113->f_2), &Global_1275573))
	{
		func_200(&(Global_1275207->f_60), 1, 1);
		func_200(&(Global_1275207->f_61), 1, 1);
		func_201(3);
		return;
	}
	if (!func_523(1, &Global_1275573))
	{
		func_201(0);
		return;
	}
	if (func_523(8, 255))
	{
		func_200(&(Global_1275207->f_60), 1, 1);
		if (!func_444(Global_1275207->f_61))
		{
			Global_1275207->f_61 = func_525("STORY_COOP_TRANSITION_CANCEL", joaat("INPUT_CONTEXT_B"), 2, 0, 1, 4, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		}
		if (func_526(Global_1275207->f_61, 1))
		{
			func_527(8);
		}
		return;
	}
	func_200(&(Global_1275207->f_61), 1, 1);
	if (!func_528(&Global_1275573))
	{
		return;
	}
	if (!func_444(Global_1275207->f_60))
	{
		Global_1275207->f_60 = func_525("STORY_COOP_TRANSITION_CONFIRM", joaat("INPUT_CONTEXT_X"), 2, 0, 1, 4, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	if (func_526(Global_1275207->f_60, 1))
	{
		func_524(8);
	}
}

void func_298()
{
	int iVar0;

	if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1275113->f_2), &Global_1275573))
	{
		if (!func_523(1, &Global_1275573))
		{
			func_201(0);
			return;
		}
		return;
	}
	Global_1275207->f_63 = -1;
	iVar0 = 0;
	while (iVar0 < Global_1275113->f_22)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&((Global_1275113->f_3[iVar0 /*6*/])->f_2), &Global_1275573))
		{
			Global_1275207->f_63 = iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	if (Global_1275207->f_63 == -1)
	{
		return;
	}
	func_201(4);
}

void func_299()
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(2000);
		}
		return;
	}
	func_524(16);
	func_529(0);
	func_201(5);
}

void func_300()
{
	if ((Global_1275113->f_3[Global_1275207->f_63 /*6*/])->f_1 >= 2)
	{
		func_201(6);
		return;
	}
	switch (Global_1275207->f_64)
	{
		case 0:
			if ((Global_1275113->f_3[Global_1275207->f_63 /*6*/])->f_3 != Global_1275573->f_10)
			{
				return;
			}
			if (Global_1275207->f_65 >= 15)
			{
				func_524(64);
				return;
			}
			if (!NETWORK::_0xE404BFF0ABA23CDC(&((Global_1275113->f_3[Global_1275207->f_63 /*6*/])->f_2)))
			{
				return;
			}
			NETWORK::_0xC505036A35AFD01B(true);
			if (!NETWORK::_0xC223D299C670413D(1, 32, 0, -1))
			{
				return;
			}
			func_529(1);
			break;
		case 1:
			if (NETWORK::_0xA021095C983F20D8())
			{
				return;
			}
			if (!NETWORK::_0x6D87BA8EF15226CD())
			{
				Global_1275207->f_65++;
				func_529(0);
				return;
			}
			if (!NETWORK::_0x277865A734918AE6())
			{
				Global_1275207->f_65++;
				func_529(0);
				return;
			}
			if (!NETWORK::_0x0B6B4507AC5EA8B8())
			{
				if (!NETWORK::_0x1BB50CD340A996E6())
				{
					NETWORK::_0x101F538C25ABB39A(0, 0);
				}
			}
			func_529(2);
			break;
		case 2:
			func_524(32);
			break;
	}
}

void func_301()
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar0 == 255)
	{
		return;
	}
	if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1275113->f_2), iVar0))
	{
		func_62();
		return;
	}
	func_524(128);
}

int func_302()
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_1099294->f_26.f_21))
	{
		ENTITY::SET_ENTITY_COORDS(Global_1099294->f_26.f_21, Global_1099294->f_26.f_25, false, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(Global_1099294->f_26.f_21, Global_1099294->f_26.f_31, 2, false);
		ENTITY::SET_ENTITY_VISIBLE(Global_1099294->f_26.f_21, false);
		ENTITY::SET_ENTITY_COLLISION(Global_1099294->f_26.f_21, false, false);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Global_1099294->f_26.f_21, false, false);
		ENTITY::SET_ENTITY_INVINCIBLE(Global_1099294->f_26.f_21, true);
		ENTITY::FREEZE_ENTITY_POSITION(Global_1099294->f_26.f_21, true);
		NETWORK::_0x9ED3108D6847760A(NETWORK::PED_TO_NET(Global_1099294->f_26.f_21), 1);
		PED::SET_PED_CONFIG_FLAG(Global_1099294->f_26.f_21, 301, true);
		PED::SET_PED_CONFIG_FLAG(Global_1099294->f_26.f_21, 277, true);
		PED::SET_PED_CONFIG_FLAG(Global_1099294->f_26.f_21, 417, true);
		PED::SET_PED_CONFIG_FLAG(Global_1099294->f_26.f_21, 394, true);
		PED::SET_PED_CONFIG_FLAG(Global_1099294->f_26.f_21, 253, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_1099294->f_26.f_21, true);
		TASK::TASK_PLAY_ANIM(Global_1099294->f_26.f_21, "CREATURES_BIRD@OWL@NORMAL@DEAD", "Dead_Up", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0, 0, 0);
		Global_1099294->f_26.f_34 = { Global_1099294->f_26.f_31 };
		return 1;
	}
	STREAMING::REQUEST_MODEL(joaat("a_c_owl_01"), false);
	if (!STREAMING::HAS_MODEL_LOADED(joaat("a_c_owl_01")))
	{
		return 0;
	}
	STREAMING::REQUEST_ANIM_DICT("CREATURES_BIRD@OWL@NORMAL@DEAD");
	if (!STREAMING::HAS_ANIM_DICT_LOADED("CREATURES_BIRD@OWL@NORMAL@DEAD"))
	{
		return 0;
	}
	if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		NETWORK::_0x807E119F80231732((1 + NETWORK::GET_NUM_RESERVED_MISSION_PEDS(0)));
	}
	else
	{
		return 0;
	}
	PED::_0xC6136B40FFFB778B(1);
	Global_1099294->f_26.f_21 = PED::CREATE_PED(joaat("a_c_owl_01"), Global_1099294->f_26.f_25, 0f, true, false, true, false);
	ENTITY::SET_ENTITY_COORDS(Global_1099294->f_26.f_21, Global_1099294->f_26.f_25, false, false, true, true);
	ENTITY::SET_ENTITY_ROTATION(Global_1099294->f_26.f_21, Global_1099294->f_26.f_31, 2, false);
	ENTITY::SET_ENTITY_VISIBLE(Global_1099294->f_26.f_21, false);
	ENTITY::SET_ENTITY_COLLISION(Global_1099294->f_26.f_21, false, false);
	ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Global_1099294->f_26.f_21, false, false);
	ENTITY::SET_ENTITY_INVINCIBLE(Global_1099294->f_26.f_21, true);
	ENTITY::FREEZE_ENTITY_POSITION(Global_1099294->f_26.f_21, true);
	NETWORK::_0x9ED3108D6847760A(NETWORK::PED_TO_NET(Global_1099294->f_26.f_21), 1);
	PED::SET_PED_CONFIG_FLAG(Global_1099294->f_26.f_21, 301, true);
	PED::SET_PED_CONFIG_FLAG(Global_1099294->f_26.f_21, 277, true);
	PED::SET_PED_CONFIG_FLAG(Global_1099294->f_26.f_21, 417, true);
	PED::SET_PED_CONFIG_FLAG(Global_1099294->f_26.f_21, 394, true);
	PED::SET_PED_CONFIG_FLAG(Global_1099294->f_26.f_21, 253, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_1099294->f_26.f_21, true);
	TASK::TASK_PLAY_ANIM(Global_1099294->f_26.f_21, "CREATURES_BIRD@OWL@NORMAL@DEAD", "Dead_Up", 1000f, -1056964608, -1, 1, 0, 0, 0, 0, 0, 0);
	Global_1099294->f_26.f_34 = { Global_1099294->f_26.f_31 };
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_c_owl_01"));
	PED::_0xC6136B40FFFB778B(0);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Global_1099294->f_26.f_21, "Hide_and_Mute_Entity_group", 0f);
	AUDIO::START_AUDIO_SCENE("Hide_and_Mute_Entity_Scene");
	return 1;
}

int func_303()
{
	if (Global_1099294->f_26.f_14 == 9)
	{
		return 0;
	}
	if (Global_1099294->f_26.f_14 == 10)
	{
		return 0;
	}
	if (Global_1099294->f_26.f_14 == 11)
	{
		return 0;
	}
	if (func_530(2048))
	{
		return 1;
	}
	if (func_531(1))
	{
		return 1;
	}
	if (Global_1099294->f_26.f_14 != 0)
	{
		return 1;
	}
	return 0;
}

void func_304()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1099294->f_26.f_21))
	{
		return;
	}
	AUDIO::STOP_AUDIO_SCENE("Hide_and_Mute_Entity_Scene");
	PED::DELETE_PED(&(Global_1099294->f_26.f_21));
	Global_1099294->f_26.f_22 = 0;
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_c_owl_01"));
}

char* func_305(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "scr_de_slippery_haze_head";
		case 1:
			return "scr_de_slippery_haze_torso";
		case 2:
			return "scr_de_slippery_haze_limb";
		case 3:
			return "scr_de_recuperate_wisps";
		case 4:
			return "scr_de_steady_smoke_torso";
		default:
			break;
	}
	return "";
}

void func_306()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!CAM::IS_SCREEN_FADED_IN() || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return;
	}
	func_532();
	if (func_533() != 0)
	{
		if (!func_535(func_534()))
		{
			iVar3 = func_536(func_533());
			if (func_537() < iVar3)
			{
				if (!func_538())
				{
					func_540(func_539());
					return;
				}
			}
			else
			{
				func_541(func_533());
				func_542();
				func_543(0);
			}
		}
		else
		{
			func_543(func_537() + 1);
			func_540(0);
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= 0)
		{
			if (func_544(iVar1) == 0)
			{
			}
			else
			{
				iVar2 = 0;
				while (iVar2 <= 31)
				{
					iVar0 = func_545((iVar1 * 32 + iVar2), 1);
					if (!func_546(iVar0))
					{
					}
					else
					{
						func_547(iVar0);
					}
					else
					{
						iVar2++;
					}
				}
				if (func_533() != 0)
				{
				}
				else
				{
					iVar1++;
				}
			}
		}
	}

int func_307()
{
	return &Global_1276184;
}

int func_308()
{
	if (!DATAFILE::_0x7907969497EA92F5((Global_1070356->f_26934[29 /*4*/])->f_3))
	{
		return 0;
	}
	if (!DATAFILE::_0x603AC35FD4602C76((Global_1070356->f_26934[29 /*4*/])->f_3))
	{
		return 0;
	}
	return 1;
}

int func_309()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var5;
	struct<5> Var9;

	Var9 = -1;
	Var9.f_1 = -1;
	Var9.f_2 = -1;
	Var9.f_3 = -1;
	Var9.f_4 = -1;
	iVar1 = func_548();
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Var9 = iVar0;
		uVar4 = func_549(&Var9);
		iVar3 = func_550(iVar0);
		iVar2 = 0;
		while (iVar2 <= (iVar3 - 1))
		{
			Var5 = { func_551(iVar0, iVar2) };
			func_552(&Var5, uVar4);
			iVar2++;
		}
		iVar0++;
	}
	return 1;
}

void func_310(int iParam0)
{
	Global_1276184 = iParam0;
}

int func_311()
{
	int iVar0;
	var uVar1;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_553(iVar0, &uVar1);
		if (func_554(&uVar1))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_312()
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
	bool bVar9;
	bool bVar10;

	iVar1 = func_548();
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar6 = iVar0;
		iVar3 = func_555(iVar6);
		bVar10 = false;
		iVar2 = 0;
		while (iVar2 <= (iVar3 - 1))
		{
			iVar7 = iVar2;
			iVar5 = func_556(iVar6, iVar7);
			bVar9 = false;
			iVar4 = 0;
			while (iVar4 <= (iVar5 - 1))
			{
				iVar8 = iVar4;
				if (!func_557(iVar6, iVar7, iVar8, 3))
				{
				}
				else
				{
					func_558(iVar6, iVar7, iVar4);
					bVar9 = true;
				}
				else
				{
					iVar4++;
				}
			}
			if (iVar5 <= 0)
			{
				func_558(iVar6, iVar7, -1);
			}
			else if (!bVar9)
			{
				func_558(iVar6, iVar7, 15);
			}
			if ((iVar4 == 0 && bVar9) && !bVar10)
			{
				func_559(iVar6, iVar2);
				bVar10 = true;
			}
			iVar2++;
		}
		if (iVar3 <= 0)
		{
			func_559(iVar6, -1);
		}
		else if (!bVar10)
		{
			func_559(iVar6, 15);
		}
		iVar0++;
	}
}

void func_313()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	struct<2> Var8;
	var uVar10;
	int iVar11;

	iVar1 = func_548();
	func_560(iVar1);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar6 = iVar0;
		iVar3 = func_555(iVar6);
		func_561(iVar6, iVar3);
		uVar4 = func_562(iVar6);
		func_563(iVar6, uVar4);
		Var8 = { func_564(iVar6, -1919535953) };
		func_565(iVar6, Var8);
		uVar10 = func_566(iVar6);
		func_567(iVar6, uVar10);
		iVar11 = func_568(iVar6, 0);
		func_569(iVar6, iVar11);
		iVar2 = 0;
		while (iVar2 <= (iVar3 - 1))
		{
			iVar7 = iVar2;
			uVar5 = func_570(iVar6, iVar7);
			func_571(iVar6, iVar7, uVar5);
			iVar2++;
		}
		iVar0++;
	}
}

void func_314()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= (func_572() - 1))
	{
		iVar1 = (iVar1 + func_573(iVar0));
		iVar0++;
	}
	func_315(iVar1);
}

void func_315(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<2> Var14;
	var uVar16;

	iVar9 = PLAYER::PLAYER_ID();
	iVar11 = _NAMESPACE26::_0x901E0DC25080C8B9(iVar9);
	iVar10 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(iVar11);
	iVar1 = _NAMESPACE26::_0x149A2751AB66AC02(iVar11);
	bVar8 = ((iVar9 == iVar10 && NETWORK::_0x255A5EF65EDA9167(iVar9)) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar9));
	iVar5 = Global_1275573->f_21;
	iVar0 = 0;
	while (iVar0 <= (iParam0 - 1))
	{
		iVar6 = func_574();
		iVar7 = func_575();
		uVar2 = func_576(iVar6, iVar7);
		iVar3 = func_577(iVar6);
		Var14 = { func_578(iVar6) };
		STATS::STAT_ID_GET_INT(&Var14, &iVar4);
		if (func_579(iVar6))
		{
			if (MISSIONDATA::_0xE54DC27571D5EDC5(uVar2))
			{
				iVar12 = MISSIONDATA::MISSIONDATA_GET_REPLAY_STATE(uVar2);
				iVar13 = func_580(iVar6);
				uVar16 = func_581(iVar6);
				if (bVar8)
				{
					if (iVar1 <= 4)
					{
						if (iVar4 == 0 || (iVar4 + iVar3) <= iVar5)
						{
							if (iVar13 == 15)
							{
								if (iVar12 != 0)
								{
									MISSIONDATA::_0xE4E2C581F127A11C(uVar2, 0);
								}
							}
							else if (iVar13 > iVar7)
							{
								if (iVar12 != 0)
								{
									MISSIONDATA::_0xE4E2C581F127A11C(uVar2, 0);
								}
							}
							else if (iVar12 != 3)
							{
								MISSIONDATA::_0xE4E2C581F127A11C(uVar2, 3);
							}
						}
						else if (iVar12 != 1)
						{
							MISSIONDATA::_0xE4E2C581F127A11C(uVar2, 1);
						}
					}
					else if (iVar12 != 2)
					{
						MISSIONDATA::_0xE4E2C581F127A11C(uVar2, 2);
					}
				}
				else if (iVar12 != 6)
				{
					MISSIONDATA::_0xE4E2C581F127A11C(uVar2, 6);
				}
			}
			if (iVar13 == 15)
			{
				if (MISSIONDATA::_0xE145864DECC34219(uVar16))
				{
					MISSIONDATA::_0x957A830C9B4B99EA(uVar16, 0);
				}
			}
			else if (!MISSIONDATA::_0xE145864DECC34219(uVar16))
			{
				MISSIONDATA::_0x957A830C9B4B99EA(uVar16, 1);
			}
		}
		else
		{
			iVar7 = (func_573(iVar6) - 1);
		}
		iVar7 = (iVar7 + 1 % func_573(iVar6));
		func_582(iVar7);
		if (iVar7 == 0)
		{
			iVar6 = (iVar6 + 1 % func_572());
			func_583(iVar6);
		}
		iVar0++;
	}
}

int func_316()
{
	return Global_1276184->f_55;
}

int func_317(int iParam0)
{
	if (&Global_1048577)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
		case 12:
		case 13:
		case 14:
			return 0;
		default:
			break;
	}
	return 1;
}

void func_318(int iParam0)
{
	Global_1276184->f_55 = iParam0;
}

int func_319(int iParam0)
{
	return ((*Global_1055966)[iParam0 /*436*/])->f_153.f_9;
}

void func_320(int iParam0)
{
	Global_1276184->f_55.f_1 = iParam0;
}

bool func_321(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_584(iParam0) };
	return func_585(Var0, Var0.f_1) != 0;
}

void func_322(int iParam0)
{
	Global_1276184->f_55.f_1.f_2 = (Global_1276184->f_55.f_1.f_2 || iParam0);
}

var func_323()
{
	return Global_1276184->f_55.f_1;
}

int func_324(int iParam0)
{
	struct<2> Var0;
	int iVar8;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_2 = -1;
	Var0.f_3.f_3 = -1;
	Var0.f_3.f_4 = -1;
	Var0.f_3 = { func_584(iParam0) };
	iVar8 = func_585(Var0.f_3, Var0.f_3.f_1);
	if (iVar8 == 0)
	{
		return 0;
	}
	Var0 = { func_586(iVar8, 7) };
	Var0.f_2 = MISC::GET_GAME_TIMER();
	if (!func_18(Var0))
	{
		return 0;
	}
	func_587(0, &Var0);
	return 1;
}

bool func_325(int iParam0)
{
	return (Global_1276184->f_55.f_1.f_1 && iParam0) != 0;
}

void func_326(int iParam0)
{
	Global_1276184->f_55.f_1.f_1 = (Global_1276184->f_55.f_1.f_1 - (Global_1276184->f_55.f_1.f_1 && iParam0));
}

void func_327()
{
	var uVar0;

	uVar0 = func_323();
	func_588(uVar0);
}

bool func_328()
{
	return Global_1070356->f_27136.f_19.f_3 != 0;
}

int func_329(int iParam0)
{
	return (Global_1276184->f_55.f_4[iParam0 /*8*/])->f_3;
}

struct<8> func_330(int iParam0)
{
	var uVar0;
	struct<8> Var5;

	if (!func_589(&uVar0))
	{
		return Var5;
	}
	if (!func_590(&uVar0, 13, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_590(&uVar0, 17, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_590(&uVar0, 19, iParam0, 0, 1))
	{
		return Var5;
	}
	if (!func_590(&uVar0, 53, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_590(&uVar0, 54, 0, 0, 1))
	{
		return Var5;
	}
	return func_591(&uVar0, 59, 1);
}

var func_331(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

struct<2> func_332(int iParam0)
{
	return *(Global_1276184->f_55.f_4[iParam0 /*8*/]);
}

int func_333(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_77(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

void func_334(int iParam0)
{
	func_483(&(Global_1276184->f_50.f_3), func_592(iParam0, 1), 1);
}

void func_335(int iParam0)
{
	func_35(&(Global_1572887->f_106.f_16), iParam0);
}

void func_336()
{
	struct<8> Var0;

	Var0 = { func_593(0) };
	Var0.f_2 = MISC::GET_GAME_TIMER();
	func_594(0);
	if (func_595(1))
	{
		return;
	}
	func_587(1, &Var0);
}

void func_337()
{
	var uVar0;

	MISC::_COPY_MEMORY(&(Global_1276184->f_55.f_1), &uVar0, 3);
}

int func_338()
{
	return func_596();
}

void func_339()
{
	func_598(func_597(1));
	func_599((Global_1100950->f_33[func_597(2) /*16*/])->f_1, -1);
	if (func_600())
	{
		func_601(&(Global_1100950->f_33.f_513), &(Global_1103537->f_10));
		func_602(func_597(0));
		func_603(func_597(3));
		func_604(func_597(0));
		func_605();
	}
	func_606();
	func_607();
	func_608();
	func_609();
	func_610();
	func_611();
	func_612();
	func_613();
	func_614();
	func_615();
	func_616();
	if (Global_1103537->f_15)
	{
		func_617();
		Global_1103537->f_15 = 0;
	}
	func_618();
}

int func_340()
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
	if (!func_18(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

void func_341()
{
	bool bVar0;

	Global_1070356->f_17915.f_24 = 1;
	if (Global_1070356->f_17915.f_25 != -1)
	{
		bVar0 = true;
	}
	Global_1070356->f_17915.f_25 = MISC::GET_FRAME_COUNT();
	if (!bVar0)
	{
		func_619();
	}
}

int func_342(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_620(iParam0))
	{
		return 1;
	}
	switch (Global_1070356->f_17915.f_23)
	{
		case 0:
			func_621(iParam0, &iVar0);
			break;
		case 1:
			func_622(iParam1, iParam0);
			break;
		case 2:
			Global_1070356->f_17915[iParam0] = func_623(Global_1070356->f_17915.f_19, Global_1070356->f_17915.f_20);
			iVar0 = 1;
			break;
	}
	return iVar0;
}

void func_343()
{
	if (Global_1070356->f_17915.f_25 == MISC::GET_FRAME_COUNT())
	{
		return;
	}
	if (Global_1070356->f_17915.f_24)
	{
		Global_1070356->f_17915.f_24 = 0;
	}
	else if (Global_1070356->f_17915.f_25 != -1)
	{
		Global_1070356->f_17915.f_25 = -1;
		func_619();
	}
}

int func_344(int iParam0)
{
	int iVar0;

	if (!func_624(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (&Global_1272170->f_438.f_44[iVar0 /*30*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_345()
{
	int iVar0;

	iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(Global_1275573->f_10);
	if (Global_1275573->f_15 != iVar0)
	{
		Global_1275573->f_15 = iVar0;
	}
	if (Global_1070356->f_26827 != Global_1275573->f_15)
	{
		Global_1070356->f_26827 = Global_1275573->f_15;
	}
}

int func_346(int iParam0, int iParam1)
{
	if (!func_625(iParam0))
	{
		return 0;
	}
	if (!NETWORK::_0x255A5EF65EDA9167(iParam1) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(iParam1))
	{
		return 0;
	}
	return MISC::_0x8F4F050054005C27(&(((*Global_1055966)[iParam1 /*436*/])->f_15.f_18), iParam0);
}

void func_347()
{
	Global_1958232 = 0;
}

void func_348(int iParam0)
{
	int iVar0;

	if (!func_625(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0))
	{
		return;
	}
	if (func_346(iParam0, iVar0))
	{
		return;
	}
	MISC::_0xE84AAC1B22A73E99(&(((*Global_1055966)[iVar0 /*436*/])->f_15.f_18), iParam0);
}

void func_349(int iParam0)
{
	int iVar0;

	if (!func_625(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0))
	{
		return;
	}
	if (!func_346(iParam0, iVar0))
	{
		return;
	}
	MISC::_0xB909149F2BB5F6DA(&(((*Global_1055966)[iVar0 /*436*/])->f_15.f_18), iParam0);
}

int func_350(struct<2> Param0)
{
	int iVar0;

	if (!func_18(Param0))
	{
		return -1;
	}
	iVar0 = func_626(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1070356->f_17817.f_1[iVar0 /*3*/])->f_2;
}

void func_351(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	struct<4> Var0;

	if (!func_627(iParam1))
	{
		iParam1 = func_629(func_628(iParam0));
		if (!func_627(iParam1))
		{
			return;
		}
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1835011)[iParam0 /*72*/])->f_28))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(((*Global_1835011)[iParam0 /*72*/])->f_28));
		((*Global_1835011)[iParam0 /*72*/])->f_66 = 0;
	}
	else if (bParam2 && !Global_26386)
	{
		func_630(iParam0, iParam5, iParam1);
	}
	if (func_631(iParam1, 48))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(((*Global_1835011)[iParam0 /*72*/])->f_13));
	}
	Var0 = { ((*Global_1835011)[iParam0 /*72*/])->f_13 };
	if ((bParam3 && !MISC::IS_STRING_NULL_OR_EMPTY(&Var0)) && SCRIPTS::IS_THREAD_ACTIVE(((*Global_1835011)[iParam0 /*72*/])->f_17, false))
	{
		SCRIPTS::_0x7DE4643157AD646C(((*Global_1835011)[iParam0 /*72*/])->f_17);
	}
	if (bParam4)
	{
		func_632(((*Global_1835011)[iParam0 /*72*/])->f_1);
	}
	else
	{
		func_633(iParam1, 3831);
	}
	((*Global_1835011)[iParam0 /*72*/])->f_71 = 0;
}

int func_352(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	if (&Global_1900788 == 15)
	{
		return -1;
	}
	if (!func_634(Param0))
	{
		return -1;
	}
	iVar1 = func_629(Param0);
	if (iVar1 >= 0)
	{
		func_635(Param0, 1);
		return iVar1;
	}
	else
	{
		iVar0 = &Global_1900788;
		*((*Global_1900789)[iVar0 /*2*/]) = { Param0 };
		*((*Global_1900820)[iVar0 /*2*/]) = { Var2 };
		func_635(Param0, 1);
		Global_1900788 = &Global_1900788 + 1;
		if (&Global_1900788 > 15)
		{
			Global_1900788 = 15;
		}
		return iVar0;
	}
	return -1;
}

void func_353()
{
	int iVar0;
	int iVar1;

	iVar0 = func_636();
	if (iVar0 == 0)
	{
		func_637();
	}
	else
	{
		if (_NAMESPACE71::_0xC17F69E1418CD11F(1) == iVar0)
		{
			return;
		}
		iVar1 = func_638();
		if (MAP::DOES_BLIP_EXIST(iVar1))
		{
			MAP::REMOVE_BLIP(&iVar1);
			func_639(0);
		}
		func_640(0);
	}
}

int func_354()
{
	return Global_1275761->f_374;
}

bool func_355(int iParam0)
{
	return (Global_1275761->f_374.f_1 && iParam0) != 0;
}

void func_356(int iParam0)
{
	Global_1275761->f_374 = iParam0;
}

void func_357(int iParam0)
{
	Global_1275761->f_374.f_1 = (Global_1275761->f_374.f_1 || iParam0);
}

bool func_358()
{
	return func_641() == PLAYER::PLAYER_ID();
}

int func_359()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_365();
	if (iVar0 == -1)
	{
		return 0;
	}
	if (func_642() == 9)
	{
		return 0;
	}
	if (func_393() == 6)
	{
		return 0;
	}
	iVar1 = func_367();
	if (iVar1 == -1)
	{
		return 0;
	}
	iVar2 = func_643(iVar0, iVar1);
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar2))
	{
		return 0;
	}
	if (!UNLOCK::_UNLOCK_IS_VISIBLE(iVar2))
	{
		return 0;
	}
	iVar3 = func_645(func_644(iVar0, iVar1));
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar3))
	{
		return 0;
	}
	if (!UNLOCK::_UNLOCK_IS_VISIBLE(iVar3))
	{
		return 0;
	}
	return 1;
}

void func_360(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return;
	}
	if (func_641() != iVar0)
	{
		return;
	}
	((*Global_1055966)[PLAYER::PLAYER_ID() /*436*/])->f_384 = (((*Global_1055966)[PLAYER::PLAYER_ID() /*436*/])->f_384 || iParam0);
}

void func_361()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return;
	}
	func_646(func_365());
	func_647(func_642());
	func_648(func_393());
	func_649(func_367());
}

bool func_362(int iParam0)
{
	int iVar0;

	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return false;
	}
	return (((*Global_1055966)[iVar0 /*436*/])->f_384 && iParam0) != 0;
}

void func_363()
{
	int iVar0;

	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return;
	}
	func_651(func_650(iVar0));
	func_653(func_652(iVar0));
	func_655(func_654(iVar0));
	func_657(func_656(iVar0));
}

bool func_364(int iParam0, int iParam1)
{
	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		return false;
	}
	return (((*Global_1055966)[iParam0 /*436*/])->f_384.f_1 && iParam1) != 0;
}

int func_365()
{
	return Global_1275761->f_374.f_2;
}

var func_366(int iParam0)
{
	return ((*Global_1275761)[iParam0 /*37*/])->f_8;
}

int func_367()
{
	return Global_1275761->f_374.f_5;
}

int func_368(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		default:
			break;
	}
	return 0;
}

void func_369(int iParam0)
{
	Global_1275761->f_374.f_10 = iParam0;
}

void func_370()
{
	var uVar0;

	func_385(536870912);
	func_385(1073741824 /* Float: 2f */);
	func_385(268435456);
	MISC::_COPY_MEMORY(&(Global_1275761->f_374.f_6), &uVar0, 4);
}

bool func_371()
{
	return Global_1275761->f_374.f_29;
}

bool func_372()
{
	int iVar0;

	iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (iVar0 == 0)
	{
		return true;
	}
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iVar0))
	{
		return true;
	}
	return _NAMESPACE26::_0x149A2751AB66AC02(iVar0) <= 1;
}

int func_373()
{
	if (func_58() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

void func_374(int iParam0)
{
	Global_1275761->f_374.f_14 = iParam0;
}

struct<4> func_375(bool bParam0)
{
	int iVar0;

	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_472(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1272170))
			{
				*Global_1272170 = { func_471(joaat("character"), func_658(), -1591664384, bParam0) };
			}
			return *Global_1272170;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_12)))
			{
				Global_1272170->f_12 = { func_471(joaat("character"), func_658(), -1591664384, 0) };
			}
			return Global_1272170->f_12;
		}
	}
	return func_471(joaat("character"), func_658(), -1591664384, bParam0);
}

int func_376(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_659(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_660(iParam0, joaat("default")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_471(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_472(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_472(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

void func_377(int iParam0)
{
	Global_1275761->f_374.f_15 = iParam0;
}

int func_378(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			return NETWORK::_0xDB438CC9BC6F4022();
		case 7:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
			iVar0 = func_661(iParam0);
			if (func_659(iVar0, 0))
			{
				return func_376(iVar0, func_375(1), joaat("SLOTID_PROGRESSION"), 1, 0, 0);
			}
			break;
	}
	return 0;
}

void func_379(int iParam0)
{
	Global_1275761->f_374.f_12 = iParam0;
}

void func_380(int iParam0)
{
	Global_1275761->f_374.f_13 = iParam0;
}

void func_381()
{
	Global_1912978 = 1;
}

void func_382()
{
	struct<2> Var0;

	Var0.f_1 = 11;
	MISC::_COPY_MEMORY(&(Global_1275761->f_374.f_16), &Var0, 13);
}

bool func_383()
{
	return !&Global_1912978;
}

void func_384()
{
	Global_1912978 = 0;
}

void func_385(int iParam0)
{
	Global_1275761->f_374.f_1 = (Global_1275761->f_374.f_1 - (Global_1275761->f_374.f_1 && iParam0));
}

int func_386()
{
	return Global_1275761->f_374.f_14;
}

var func_387(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_662(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_388()
{
	return Global_1275761->f_374.f_15;
}

int func_389(int iParam0)
{
	return (iParam0 / 100);
}

int func_390(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return ((iParam0 % 100) / 1);
	}
	return (iParam0 / 1);
}

int func_391()
{
	return Global_1275761->f_374.f_12;
}

int func_392()
{
	return Global_1275761->f_374.f_13;
}

int func_393()
{
	return Global_1275761->f_374.f_4;
}

void func_394(int iParam0)
{
	Global_1275761->f_419 = (Global_1275761->f_419 || iParam0);
}

void func_395()
{
	int iVar0;
	int iVar1;

	if (func_641() == PLAYER::PLAYER_ID())
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = 1;
	}
	iVar1 = func_367();
	if (iVar1 == -1)
	{
		return;
	}
	func_663(iVar0, iVar1, func_365());
	func_664(iVar0, iVar1, MISC::GET_GAME_TIMER());
	func_665(iVar0, iVar1, func_393());
}

void func_396()
{
	struct<17> Var0;

	Var0.f_2 = -1;
	Var0.f_3 = 9;
	Var0.f_4 = 6;
	Var0.f_5 = -1;
	Var0.f_16.f_1 = 11;
	Var0 = func_354();
	MISC::_COPY_MEMORY(&(Global_1275761->f_374), &Var0, 30);
}

void func_397()
{
	struct<6> Var0;

	Var0.f_2 = -1;
	Var0.f_3 = 9;
	Var0.f_4 = 6;
	Var0.f_5 = -1;
	MISC::_COPY_MEMORY(&(((*Global_1055966)[PLAYER::PLAYER_ID() /*436*/])->f_384), &Var0, 6);
}

void func_398()
{
	Global_1185962->f_1 = 0;
	if (&Global_1275573->f_22[0])
	{
		Global_1185962->f_1 = (Global_1185962->f_1 || Global_1185577[0 /*12*/]);
	}
	if (&Global_1275573->f_22[1])
	{
		Global_1185962->f_1 = (Global_1185962->f_1 || Global_1185577[1 /*12*/]);
	}
	if (&Global_1275573->f_22[2])
	{
		Global_1185962->f_1 = (Global_1185962->f_1 || Global_1185577[2 /*12*/]);
	}
	if (&Global_1275573->f_22[3])
	{
		Global_1185962->f_1 = (Global_1185962->f_1 || Global_1185577[3 /*12*/]);
	}
	if (&Global_1275573->f_22[4])
	{
		Global_1185962->f_1 = (Global_1185962->f_1 || Global_1185577[4 /*12*/]);
	}
	if (&Global_1275573->f_22[5])
	{
		Global_1185962->f_1 = (Global_1185962->f_1 || Global_1185577[5 /*12*/]);
	}
	if (&Global_1275573->f_22[6])
	{
		Global_1185962->f_1 = (Global_1185962->f_1 || Global_1185577[6 /*12*/]);
	}
	if (&Global_1275573->f_22[7])
	{
		Global_1185962->f_1 = (Global_1185962->f_1 || Global_1185577[7 /*12*/]);
	}
	if (&Global_1275573->f_22[8])
	{
		Global_1185962->f_1 = (Global_1185962->f_1 || Global_1185577[8 /*12*/]);
	}
	if (&Global_1275573->f_22[9])
	{
		Global_1185962->f_1 = (Global_1185962->f_1 || Global_1185577[9 /*12*/]);
	}
	if (&Global_1275573->f_22[10])
	{
		Global_1185962->f_1 = (Global_1185962->f_1 || Global_1185577[10 /*12*/]);
	}
	if (&Global_1275573->f_22[11])
	{
		Global_1185962->f_1 = (Global_1185962->f_1 || Global_1185577[11 /*12*/]);
	}
	if (&Global_1275573->f_22[12])
	{
		Global_1185962->f_1 = (Global_1185962->f_1 || Global_1185577[12 /*12*/]);
	}
	if (&Global_1275573->f_22[13])
	{
		Global_1185962->f_1 = (Global_1185962->f_1 || Global_1185577[13 /*12*/]);
	}
	if (&Global_1275573->f_22[14])
	{
		Global_1185962->f_1 = (Global_1185962->f_1 || Global_1185577[14 /*12*/]);
	}
	if (&Global_1275573->f_22[15])
	{
		Global_1185962->f_1 = (Global_1185962->f_1 || Global_1185577[15 /*12*/]);
	}
	if (&Global_1275573->f_22[16])
	{
		Global_1185962->f_1 = (Global_1185962->f_1 || Global_1185577[16 /*12*/]);
	}
	if (&Global_1275573->f_22[17])
	{
		Global_1185962->f_1 = (Global_1185962->f_1 || Global_1185577[17 /*12*/]);
	}
	if (&Global_1275573->f_22[18])
	{
		Global_1185962->f_1 = (Global_1185962->f_1 || Global_1185577[18 /*12*/]);
	}
	if (&Global_1275573->f_22[19])
	{
		Global_1185962->f_1 = (Global_1185962->f_1 || Global_1185577[19 /*12*/]);
	}
	if (&Global_1275573->f_22[20])
	{
		Global_1185962->f_1 = (Global_1185962->f_1 || Global_1185577[20 /*12*/]);
	}
	if (&Global_1275573->f_22[21])
	{
		Global_1185962->f_1 = (Global_1185962->f_1 || Global_1185577[21 /*12*/]);
	}
	if (&Global_1275573->f_22[22])
	{
		Global_1185962->f_1 = (Global_1185962->f_1 || Global_1185577[22 /*12*/]);
	}
	if (&Global_1275573->f_22[23])
	{
		Global_1185962->f_1 = (Global_1185962->f_1 || Global_1185577[23 /*12*/]);
	}
	if (&Global_1275573->f_22[24])
	{
		Global_1185962->f_1 = (Global_1185962->f_1 || Global_1185577[24 /*12*/]);
	}
	if (&Global_1275573->f_22[25])
	{
		Global_1185962->f_1 = (Global_1185962->f_1 || Global_1185577[25 /*12*/]);
	}
	if (&Global_1275573->f_22[26])
	{
		Global_1185962->f_1 = (Global_1185962->f_1 || Global_1185577[26 /*12*/]);
	}
	if (&Global_1275573->f_22[27])
	{
		Global_1185962->f_1 = (Global_1185962->f_1 || Global_1185577[27 /*12*/]);
	}
	if (&Global_1275573->f_22[28])
	{
		Global_1185962->f_1 = (Global_1185962->f_1 || Global_1185577[28 /*12*/]);
	}
	if (&Global_1275573->f_22[29])
	{
		Global_1185962->f_1 = (Global_1185962->f_1 || Global_1185577[29 /*12*/]);
	}
	if (&Global_1275573->f_22[30])
	{
		Global_1185962->f_1 = (Global_1185962->f_1 || Global_1185577[30 /*12*/]);
	}
	if (&Global_1275573->f_22[31])
	{
		Global_1185962->f_1 = (Global_1185962->f_1 || Global_1185577[31 /*12*/]);
	}
	if (!&Global_1185962)
	{
		if (func_666(8192))
		{
			POPULATION::_0xC6DCC2A3A8825C85(1);
		}
		else
		{
			POPULATION::_0xBC90BDF4E5228EA1();
		}
		Global_1185962 = 1;
	}
}

void func_399(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == &Global_1275573)
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		func_400(iParam0);
		return;
	}
	iVar1 = Global_1199548[iParam0 /*2*/];
	iVar2 = ((*Global_1199548)[iParam0 /*2*/])->f_1;
	if (iVar1 == -1 || iVar2 == -1)
	{
		func_400(iParam0);
		return;
	}
	if (iVar1 == Global_1199548[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/] && iVar2 == ((*Global_1199548)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/])->f_1)
	{
		func_400(iParam0);
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1199613->f_48[iVar1 /*21*/][iVar2 /*4*/]))
	{
		func_400(iParam0);
		return;
	}
	if (BUILTIN::VDIST(Global_35, ((*Global_1199613->f_48[iVar1 /*21*/])[iVar2 /*4*/])->f_1) > 100f)
	{
		func_400(iParam0);
		return;
	}
	func_667(iParam0, iVar1, iVar2);
}

void func_400(int iParam0)
{
	if (PED::_0x91A5F9CBEBB9D936(&(Global_1199613->f_1099[iParam0 /*3*/])))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(&(Global_1199613->f_1099[iParam0 /*3*/]), false);
	}
}

void func_401()
{
	Global_1099294->f_26.f_25 = { 0f, 0f, 0f };
	Global_1099294->f_26.f_31 = { 0f, 0f, 0f };
	Global_1099294->f_26.f_24 = 1;
}

void func_402(int iParam0, int iParam1)
{
	if (func_668(iParam1, iParam0))
	{
		if (!SCRIPTS::_0x179A6F0EE2E79026(Global_1275113->f_23[iParam0 /*3*/]))
		{
			(Global_1275113->f_23[iParam0 /*3*/])->f_1 = &Global_1275207;
			(Global_1275113->f_23[iParam0 /*3*/])->f_2 = 4000;
		}
		else if (!SCRIPTS::_0x72B2E00C9BAC6789(Global_1275113->f_23[iParam0 /*3*/], iParam1))
		{
			(Global_1275113->f_23[iParam0 /*3*/])->f_1 = &Global_1275207;
			(Global_1275113->f_23[iParam0 /*3*/])->f_2 += 2000;
			if ((Global_1275113->f_23[iParam0 /*3*/])->f_2 > 5000)
			{
				(Global_1275113->f_23[iParam0 /*3*/])->f_2 = 5000;
			}
		}
		SCRIPTS::_0x31010318BA9897AC(Global_1275113->f_23[iParam0 /*3*/], iParam1);
	}
	else
	{
		SCRIPTS::_0xD426E2E3288469D6(Global_1275113->f_23[iParam0 /*3*/], iParam1);
	}
	if (!SCRIPTS::_0x179A6F0EE2E79026(Global_1275113->f_23[iParam0 /*3*/]))
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE((Global_1275113->f_23[iParam0 /*3*/])->f_1, &Global_1275207)) < (Global_1275113->f_23[iParam0 /*3*/])->f_2)
			{
				return;
			}
			break;
	}
	if (!func_669(&(Global_1275113->f_23[iParam0 /*3*/]), iParam0))
	{
		return;
	}
	SCRIPTS::_0xDE544B7EC0C187CC(Global_1275113->f_23[iParam0 /*3*/]);
}

void func_403(var uParam0)
{
	int iVar0;

	iVar0 = PLAYER::INT_TO_PLAYERINDEX(Global_1275207->f_69);
	if (!SCRIPTS::_0x179A6F0EE2E79026(&(uParam0->f_2)))
	{
		func_670(uParam0, 2);
		return;
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(uParam0->f_2), Global_1275207->f_69))
	{
		if (!NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0))
		{
			func_671(uParam0, iVar0, Global_1275207->f_69);
		}
		else if (func_523(16, Global_1275207->f_69))
		{
			SCRIPTS::_0x31010318BA9897AC(&(uParam0->f_4), Global_1275207->f_69);
		}
	}
	if (SCRIPTS::COUNT_PLAYER_BITS(&(uParam0->f_4)) < SCRIPTS::COUNT_PLAYER_BITS(&(uParam0->f_2)))
	{
		return;
	}
	func_670(uParam0, 1);
}

void func_404(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!NETWORK::_0x255A5EF65EDA9167(uParam0->f_3) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(uParam0->f_3))
	{
		uParam0->f_3 = 255;
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (!SCRIPTS::_0x72B2E00C9BAC6789(&(uParam0->f_2), iVar0))
			{
			}
			else
			{
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
				if (!NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar1))
				{
					func_671(uParam0, iVar1, iVar0);
				}
				else if (func_523(64, iVar0))
				{
				}
				else
				{
					uParam0->f_3 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
				}
				else
				{
					iVar0++;
				}
				if (!NETWORK::_0x255A5EF65EDA9167(uParam0->f_3))
				{
					func_670(uParam0, 2);
				}
				return;
				iVar2 = uParam0->f_3;
				if (func_523(64, iVar2))
				{
					uParam0->f_3 = 255;
					return;
				}
				if (!func_523(32, iVar2))
				{
					return;
				}
				func_670(uParam0, 2);
			}
		}
	}

void func_405(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::INT_TO_PLAYERINDEX(Global_1275207->f_69);
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(uParam0->f_2), Global_1275207->f_69))
	{
		if (!NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0))
		{
			func_671(uParam0, iVar0, Global_1275207->f_69);
		}
		else if (func_523(128, Global_1275207->f_69))
		{
			SCRIPTS::_0x31010318BA9897AC(&(uParam0->f_5), Global_1275207->f_69);
		}
	}
	if (SCRIPTS::_0x179A6F0EE2E79026(&(uParam0->f_2)))
	{
		if (SCRIPTS::COUNT_PLAYER_BITS(&(uParam0->f_5)) < SCRIPTS::COUNT_PLAYER_BITS(&(uParam0->f_2)))
		{
			return;
		}
	}
	func_672(iParam1);
}

void func_406(int iParam0)
{
	Global_1893575 = (Global_1893575 || iParam0);
}

void func_407(var uParam0)
{
	struct<436> Var0;
	int iVar436;

	Var0.f_2 = -1;
	Var0.f_2.f_1 = -1;
	Var0.f_2.f_5 = 255;
	Var0.f_11 = 3;
	Var0.f_15 = -1;
	Var0.f_15.f_1 = 7;
	Var0.f_15.f_10 = 7;
	Var0.f_15.f_18 = 2;
	Var0.f_39.f_1 = 7;
	Var0.f_39.f_1.f_1.f_1 = -1;
	Var0.f_39.f_1.f_1.f_2 = -1;
	Var0.f_39.f_1.f_1.f_3 = 7;
	Var0.f_39.f_1.f_1.f_11 = 2;
	Var0.f_39.f_1.f_1.f_16.f_1 = -1;
	Var0.f_39.f_1.f_1.f_16.f_2 = -1;
	Var0.f_39.f_1.f_1.f_16.f_3 = 7;
	Var0.f_39.f_1.f_1.f_16.f_11 = 2;
	Var0.f_39.f_1.f_1.f_16.f_16.f_1 = -1;
	Var0.f_39.f_1.f_1.f_16.f_16.f_2 = -1;
	Var0.f_39.f_1.f_1.f_16.f_16.f_3 = 7;
	Var0.f_39.f_1.f_1.f_16.f_16.f_11 = 2;
	Var0.f_39.f_1.f_1.f_16.f_16.f_16.f_1 = -1;
	Var0.f_39.f_1.f_1.f_16.f_16.f_16.f_2 = -1;
	Var0.f_39.f_1.f_1.f_16.f_16.f_16.f_3 = 7;
	Var0.f_39.f_1.f_1.f_16.f_16.f_16.f_11 = 2;
	Var0.f_39.f_1.f_1.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_39.f_1.f_1.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_39.f_1.f_1.f_16.f_16.f_16.f_16.f_3 = 7;
	Var0.f_39.f_1.f_1.f_16.f_16.f_16.f_16.f_11 = 2;
	Var0.f_39.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_39.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_39.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	Var0.f_39.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	Var0.f_39.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_39.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_39.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	Var0.f_39.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	Var0.f_153.f_1 = -1;
	Var0.f_153.f_2 = -1;
	Var0.f_153.f_3 = -1;
	Var0.f_153.f_3.f_1 = -1;
	Var0.f_153.f_11 = 4;
	Var0.f_153.f_36 = 32;
	Var0.f_153.f_36.f_193 = 2147483647;
	Var0.f_384.f_2 = -1;
	Var0.f_384.f_3 = 9;
	Var0.f_384.f_4 = 6;
	Var0.f_384.f_5 = -1;
	Var0.f_390 = 18;
	Var0.f_390.f_19 = 18;
	Var0.f_431 = 4;
	iVar436 = 0;
	while (iVar436 < 7)
	{
		Var0.f_15.f_10[iVar436] = 255;
		iVar436++;
	}
	*uParam0 = { Var0 };
	func_673(&(uParam0->f_15));
	func_674(&(uParam0->f_39));
}

void func_408(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_675((*uParam0)[iVar0 /*51*/]);
		iVar0++;
	}
}

void func_409(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_676((*uParam0)[iVar0 /*34*/]);
		iVar0++;
	}
}

void func_410(var uParam0)
{
	struct<33> Var0;
	int iVar33;

	Var0 = 10;
	Var0.f_11 = 10;
	Var0.f_22 = 10;
	*uParam0 = { Var0 };
	iVar33 = 0;
	while (iVar33 < 10)
	{
		uParam0->f_11[iVar33] = 0;
		(*uParam0)[iVar33] = 0;
		uParam0->f_22[iVar33] = 255;
		iVar33++;
	}
}

void func_411(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_677((*uParam0)[iVar0 /*6*/]);
		iVar0++;
	}
}

void func_412(var uParam0)
{
	struct<12> Var0;
	int iVar12;

	Var0.f_1 = 1;
	Var0.f_2.f_1 = 1;
	Var0.f_4 = 7;
	iVar12 = 0;
	iVar12 = 0;
	while (iVar12 <= 31)
	{
		*((*uParam0)[iVar12 /*12*/]) = { Var0 };
		iVar12++;
	}
}

void func_413(var uParam0)
{
	struct<177> Var0;

	Var0 = 176;
	*uParam0 = { Var0 };
}

void func_414(var uParam0)
{
	struct<177> Var0;
	int iVar177;

	Var0 = 176;
	iVar177 = 0;
	while (iVar177 < 32)
	{
		*((*uParam0)[iVar177 /*177*/]) = { Var0 };
		iVar177++;
	}
}

void func_415(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_678((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_416(var uParam0)
{
	struct<717> Var0;

	Var0 = 32;
	Var0.f_1.f_1 = -1;
	Var0.f_1.f_2 = -1;
	Var0.f_1.f_3 = -1;
	Var0.f_1.f_3.f_1 = -1;
	Var0.f_1.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3 = -1;
	Var0.f_1.f_3.f_5 = -1;
	Var0.f_1.f_3.f_5.f_1 = -1;
	Var0.f_1.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_1 = -1;
	Var0.f_1.f_16.f_2 = -1;
	Var0.f_1.f_16.f_3 = -1;
	Var0.f_1.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_2 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_3 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_5.f_1 = -1;
	Var0.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3.f_9.f_1 = -1;
	Var0.f_513.f_2 = 5;
	Var0.f_513.f_3 = 5;
	Var0.f_513.f_3.f_1 = -1;
	Var0.f_513.f_3.f_1.f_1 = -1;
	Var0.f_513.f_3.f_1.f_2 = -1;
	Var0.f_513.f_3.f_1.f_3 = 255;
	Var0.f_513.f_3.f_1.f_4 = -1;
	Var0.f_513.f_3.f_1.f_5 = -1;
	Var0.f_513.f_3.f_1.f_6 = -1;
	Var0.f_513.f_3.f_1.f_8 = 2;
	Var0.f_513.f_3.f_1.f_8.f_1 = -1;
	Var0.f_513.f_3.f_1.f_8.f_5 = -1;
	Var0.f_513.f_3.f_1.f_8.f_5.f_1 = -1;
	Var0.f_513.f_3.f_1.f_8.f_5.f_3 = -1;
	Var0.f_513.f_3.f_1.f_8.f_5.f_4 = -1;
	Var0.f_513.f_3.f_1.f_8.f_5.f_5 = -1;
	Var0.f_513.f_3.f_1.f_8.f_5.f_6 = -1;
	Var0.f_513.f_3.f_1.f_8.f_5.f_6.f_1 = -1;
	Var0.f_513.f_3.f_1.f_8.f_5.f_9 = 2;
	Var0.f_513.f_3.f_1.f_23.f_1 = 1024;
	Var0.f_513.f_3.f_1.f_23.f_4 = -15;
	Var0.f_513.f_3.f_1.f_23.f_5 = 255;
	Var0.f_513.f_3.f_1.f_23.f_8 = 1;
	Var0.f_513.f_3.f_1.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_513.f_3.f_1.f_23.f_13 = -1;
	Var0.f_513.f_3.f_1.f_40 = -1;
	Var0.f_513.f_3.f_1.f_40.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_2 = -1;
	Var0.f_513.f_3.f_1.f_40.f_3 = 255;
	Var0.f_513.f_3.f_1.f_40.f_4 = -1;
	Var0.f_513.f_3.f_1.f_40.f_5 = -1;
	Var0.f_513.f_3.f_1.f_40.f_6 = -1;
	Var0.f_513.f_3.f_1.f_40.f_8 = 2;
	Var0.f_513.f_3.f_1.f_40.f_8.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_8.f_5 = -1;
	Var0.f_513.f_3.f_1.f_40.f_8.f_5.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_8.f_5.f_3 = -1;
	Var0.f_513.f_3.f_1.f_40.f_8.f_5.f_4 = -1;
	Var0.f_513.f_3.f_1.f_40.f_8.f_5.f_5 = -1;
	Var0.f_513.f_3.f_1.f_40.f_8.f_5.f_6 = -1;
	Var0.f_513.f_3.f_1.f_40.f_8.f_5.f_6.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_8.f_5.f_9 = 2;
	Var0.f_513.f_3.f_1.f_40.f_23.f_1 = 1024;
	Var0.f_513.f_3.f_1.f_40.f_23.f_4 = -15;
	Var0.f_513.f_3.f_1.f_40.f_23.f_5 = 255;
	Var0.f_513.f_3.f_1.f_40.f_23.f_8 = 1;
	Var0.f_513.f_3.f_1.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_513.f_3.f_1.f_40.f_23.f_13 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_2 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_3 = 255;
	Var0.f_513.f_3.f_1.f_40.f_40.f_4 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_5 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_6 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_8 = 2;
	Var0.f_513.f_3.f_1.f_40.f_40.f_8.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_8.f_5 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_8.f_5.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_8.f_5.f_3 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_8.f_5.f_4 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_8.f_5.f_5 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_8.f_5.f_6 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_8.f_5.f_9 = 2;
	Var0.f_513.f_3.f_1.f_40.f_40.f_23.f_1 = 1024;
	Var0.f_513.f_3.f_1.f_40.f_40.f_23.f_4 = -15;
	Var0.f_513.f_3.f_1.f_40.f_40.f_23.f_5 = 255;
	Var0.f_513.f_3.f_1.f_40.f_40.f_23.f_8 = 1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_513.f_3.f_1.f_40.f_40.f_23.f_13 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_2 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_3 = 255;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_4 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_5 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_6 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_8 = 2;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_8.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_8.f_5 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_3 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_4 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_5 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_6 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_9 = 2;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_23.f_1 = 1024;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_23.f_4 = -15;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_23.f_5 = 255;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_23.f_8 = 1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_23.f_13 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_2 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_3 = 255;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_4 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_5 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_6 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8 = 2;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_3 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_4 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_5 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_6 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_9 = 2;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_1 = 1024;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_4 = -15;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_5 = 255;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_8 = 1;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_513.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_13 = -1;
	*uParam0 = { Var0 };
}

void func_417(var uParam0)
{
	struct<2> Var0;

	*uParam0 = { Var0 };
}

void func_418(var uParam0)
{
	struct<54> Var0;

	Var0 = -1;
	Var0.f_1 = 32;
	Var0.f_35 = 2;
	Var0.f_38 = 2;
	Var0.f_42 = 2;
	Var0.f_48 = 2;
	*uParam0 = { Var0 };
}

void func_419(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_418((*uParam0)[iVar0 /*54*/]);
		iVar0++;
	}
}

void func_420(var uParam0)
{
	struct<7> Var0;

	Var0 = 2;
	Var0.f_3 = 3;
	*uParam0 = { Var0 };
}

void func_421(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_420((*uParam0)[iVar0 /*7*/]);
		iVar0++;
	}
}

void func_422(int iParam0)
{
	Global_1100950->f_750 = iParam0;
}

void func_423()
{
	Global_1100950->f_750.f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
}

void func_424()
{
	((*Global_1122836)[PLAYER::PLAYER_ID() /*54*/])->f_48.f_3 = 1;
}

void func_425(int iParam0)
{
	Global_1103537->f_7560.f_2 = (Global_1103537->f_7560.f_2 || iParam0);
}

void func_426(var uParam0)
{
	*uParam0 = 0;
}

void func_427(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_5 = -1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = -1;
	uParam0->f_12 = 0;
	uParam0->f_13 = -1;
}

void func_428(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		uParam0->f_1[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_10 = 0;
	func_679(&(uParam0->f_11));
	func_680(&(uParam0->f_609));
	func_681(&(uParam0->f_936));
	func_682(&(uParam0->f_983));
	func_683(&(uParam0->f_992));
	func_684(&(uParam0->f_993));
	uParam0->f_1466 = 0;
	func_685(&(uParam0->f_1467));
	func_686(&(uParam0->f_1490));
	func_687(&(uParam0->f_1496));
}

void func_429(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_427((*uParam0)[iVar0 /*20*/]);
		iVar0++;
	}
}

void func_430(var uParam0)
{
	struct<397> Var0;

	Var0 = 32;
	Var0.f_1 = -1;
	Var0.f_1.f_2 = -1;
	Var0.f_1.f_2.f_1 = -1;
	Var0.f_1.f_2.f_1.f_1 = -1;
	Var0.f_1.f_2.f_3 = -1;
	Var0.f_1.f_6 = -1;
	Var0.f_1.f_6.f_2 = -1;
	Var0.f_1.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_1.f_1 = -1;
	Var0.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2.f_3 = -1;
	Var0.f_193.f_2 = 5;
	Var0.f_193.f_3 = 5;
	Var0.f_193.f_3.f_1 = -1;
	Var0.f_193.f_3.f_1.f_1 = -1;
	Var0.f_193.f_3.f_1.f_2 = -1;
	Var0.f_193.f_3.f_1.f_3 = 255;
	Var0.f_193.f_3.f_1.f_4 = -1;
	Var0.f_193.f_3.f_1.f_5 = -1;
	Var0.f_193.f_3.f_1.f_6 = -1;
	Var0.f_193.f_3.f_1.f_8 = 2;
	Var0.f_193.f_3.f_1.f_8.f_1 = -1;
	Var0.f_193.f_3.f_1.f_8.f_5 = -1;
	Var0.f_193.f_3.f_1.f_8.f_5.f_1 = -1;
	Var0.f_193.f_3.f_1.f_8.f_5.f_3 = -1;
	Var0.f_193.f_3.f_1.f_8.f_5.f_4 = -1;
	Var0.f_193.f_3.f_1.f_8.f_5.f_5 = -1;
	Var0.f_193.f_3.f_1.f_8.f_5.f_6 = -1;
	Var0.f_193.f_3.f_1.f_8.f_5.f_6.f_1 = -1;
	Var0.f_193.f_3.f_1.f_8.f_5.f_9 = 2;
	Var0.f_193.f_3.f_1.f_23.f_1 = 1024;
	Var0.f_193.f_3.f_1.f_23.f_4 = -15;
	Var0.f_193.f_3.f_1.f_23.f_5 = 255;
	Var0.f_193.f_3.f_1.f_23.f_8 = 1;
	Var0.f_193.f_3.f_1.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_193.f_3.f_1.f_23.f_13 = -1;
	Var0.f_193.f_3.f_1.f_40 = -1;
	Var0.f_193.f_3.f_1.f_40.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_2 = -1;
	Var0.f_193.f_3.f_1.f_40.f_3 = 255;
	Var0.f_193.f_3.f_1.f_40.f_4 = -1;
	Var0.f_193.f_3.f_1.f_40.f_5 = -1;
	Var0.f_193.f_3.f_1.f_40.f_6 = -1;
	Var0.f_193.f_3.f_1.f_40.f_8 = 2;
	Var0.f_193.f_3.f_1.f_40.f_8.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_8.f_5 = -1;
	Var0.f_193.f_3.f_1.f_40.f_8.f_5.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_8.f_5.f_3 = -1;
	Var0.f_193.f_3.f_1.f_40.f_8.f_5.f_4 = -1;
	Var0.f_193.f_3.f_1.f_40.f_8.f_5.f_5 = -1;
	Var0.f_193.f_3.f_1.f_40.f_8.f_5.f_6 = -1;
	Var0.f_193.f_3.f_1.f_40.f_8.f_5.f_6.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_8.f_5.f_9 = 2;
	Var0.f_193.f_3.f_1.f_40.f_23.f_1 = 1024;
	Var0.f_193.f_3.f_1.f_40.f_23.f_4 = -15;
	Var0.f_193.f_3.f_1.f_40.f_23.f_5 = 255;
	Var0.f_193.f_3.f_1.f_40.f_23.f_8 = 1;
	Var0.f_193.f_3.f_1.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_193.f_3.f_1.f_40.f_23.f_13 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_2 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_3 = 255;
	Var0.f_193.f_3.f_1.f_40.f_40.f_4 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_5 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_6 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_8 = 2;
	Var0.f_193.f_3.f_1.f_40.f_40.f_8.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_8.f_5 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_8.f_5.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_8.f_5.f_3 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_8.f_5.f_4 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_8.f_5.f_5 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_8.f_5.f_6 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_8.f_5.f_9 = 2;
	Var0.f_193.f_3.f_1.f_40.f_40.f_23.f_1 = 1024;
	Var0.f_193.f_3.f_1.f_40.f_40.f_23.f_4 = -15;
	Var0.f_193.f_3.f_1.f_40.f_40.f_23.f_5 = 255;
	Var0.f_193.f_3.f_1.f_40.f_40.f_23.f_8 = 1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_193.f_3.f_1.f_40.f_40.f_23.f_13 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_2 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_3 = 255;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_4 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_5 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_6 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_8 = 2;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_8.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_8.f_5 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_3 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_4 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_5 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_6 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_9 = 2;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_23.f_1 = 1024;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_23.f_4 = -15;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_23.f_5 = 255;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_23.f_8 = 1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_23.f_13 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_2 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_3 = 255;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_4 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_5 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_6 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8 = 2;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_3 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_4 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_5 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_6 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_9 = 2;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_1 = 1024;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_4 = -15;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_5 = 255;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_8 = 1;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_193.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_13 = -1;
	*uParam0 = { Var0 };
}

void func_431(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_688((*uParam0)[iVar0 /*8*/]);
		iVar0++;
	}
}

void func_432(var uParam0)
{
	struct<27> Var0;

	Var0.f_3 = 3;
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_1.f_3 = 255;
	Var0.f_3.f_1.f_6 = -1;
	Var0.f_3.f_1.f_6.f_3 = 255;
	Var0.f_3.f_1.f_6.f_6 = -1;
	Var0.f_3.f_1.f_6.f_6.f_3 = 255;
	Var0.f_23 = 1;
	*uParam0 = { Var0 };
}

void func_433(var uParam0)
{
	struct<2> Var0;

	Var0.f_1 = -1;
	*uParam0 = { Var0 };
}

void func_434(var uParam0)
{
	struct<70> Var0;

	Var0.f_3.f_3 = -1;
	Var0.f_3.f_3.f_1 = -1;
	Var0.f_3.f_5 = 1;
	Var0.f_3.f_6 = 7;
	Var0.f_63 = -1;
	*uParam0 = { Var0 };
}

void func_435(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_433((*uParam0)[iVar0 /*2*/]);
		iVar0++;
	}
}

void func_436()
{
	func_689(Global_1199548);
}

void func_437(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_690((*uParam0)[iVar0 /*98*/]);
		iVar0++;
	}
}

void func_438(var uParam0)
{
	struct<9> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_8 = -1082130432;
	MISC::_COPY_MEMORY(uParam0, &Var0, 9);
}

void func_439(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_438((*uParam0)[iVar0 /*9*/]);
		iVar0++;
	}
}

int func_440(int iParam0)
{
	if (!func_620(iParam0))
	{
		return -1;
	}
	if (func_691(iParam0) >= 337)
	{
		return 0;
	}
	return (30 - (func_692(iParam0) - 337));
}

int func_441(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_693(iParam0, 1);
	if (iVar0 == -1)
	{
		return 1;
	}
	if (Global_1070356->f_17915.f_24 && !func_694(iVar0))
	{
		return 1;
	}
	switch (iVar0)
	{
		case -2043909922:
			if (!func_695(-1145153057) && func_696(-763.5972f, -1263.053f, 43.02452f, 100f))
			{
				return 0;
			}
			break;
		case -1145153057:
			if (!func_695(-2043909922) && func_696(-763.5972f, -1263.053f, 43.02452f, 100f))
			{
				return 0;
			}
			break;
		case 589380360:
			if (!func_695(468797819) && func_696(2499.046f, -1307.856f, 47.95675f, 100f))
			{
				return 0;
			}
			break;
		case 468797819:
			if (!func_695(589380360) && func_696(2499.046f, -1307.856f, 47.95675f, 100f))
			{
				return 0;
			}
			break;
		case -632127260:
			if (!func_695(965467037) && func_696(-1811.496f, -352.1608f, 160.4848f, 100f))
			{
				return 0;
			}
			break;
		case 965467037:
			if (!func_695(-632127260) && func_696(-1811.496f, -352.1608f, 160.4848f, 100f))
			{
				return 0;
			}
			break;
		case -209894800:
			if (!func_695(-279765076) && func_696(-272.9644f, 810.0542f, 118.3835f, 100f))
			{
				return 0;
			}
			break;
		case -279765076:
			if (!func_695(-209894800) && func_696(-272.9644f, 810.0542f, 118.3835f, 100f))
			{
				return 0;
			}
			break;
		case -1585840296:
		case -510945576:
			if (func_696(347.239f, 1490.71f, 178.557f, 100f))
			{
				return 0;
			}
			break;
		case 1238086793:
			if (!func_697(-414301703, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case -1344601768:
			if (!func_697(728379187, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case 1302228510:
			if (!func_697(-1809365172, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			else if (func_698())
			{
				return 0;
			}
			break;
		case -460024530:
			if (!func_697(1092530042, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case -108780030:
			if (!func_697(-2051059045, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case 1698972798:
			if (!func_697(-1408478050, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case -1340339190:
			if (!func_697(-612173099, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case -1296807958:
			if (!func_697(-1974746920, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case -1283202000:
			if (!func_697(1171226610, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case -1610966108:
			if (!func_697(406701199, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case -693828600:
			if (!func_697(1502951187, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case 1321892118:
			if (!func_697(-1151968796, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case -61411516:
			if (!func_697(1975720265, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case 582380806:
			if (!func_697(508578717, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case 1932172605:
			if (!func_697(-848533860, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case 1159471771:
			if (!func_697(830856441, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case 784360470:
			if (!func_697(-522767301, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case 1881028477:
			if (!func_697(-2103414139, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case 1703398561:
			if (!func_697(771896020, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case -1209597203:
			if (!func_697(895825612, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case -897750037:
			if (!func_697(1256749990, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case 929582877:
			if (!func_697(-1934886317, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case -911126844:
			if (!func_697(993438435, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case -355531636:
			if (!func_697(1495728629, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case -1455998786:
			if (!func_697(967935536, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case -851626677:
			if (!func_697(-773956478, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case -734416508:
			if (!func_697(-1615749463, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case -396624371:
			if (!func_697(-361709910, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case 885777893:
			if (!func_697(-1323334072, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case 619839857:
			if (!func_697(-1521897637, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case 2113625508:
			if (!func_697(-716370751, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case 1549124796:
			if (!func_697(-2053832767, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case -502473159:
			if (!func_697(372806894, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case 229371495:
			if (!func_697(-1534577778, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case -781631220:
			if (!func_697(-2024941402, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case 1708045337:
			if (!func_697(-50297425, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case 1166612791:
			if (!func_697(536714458, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case 74872959:
			if (!func_697(2068117822, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case 1744443559:
			if (!func_697(-576687258, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case 509781469:
			if (!func_697(226557169, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case 885378256:
			if (!func_697(476687617, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case -524787708:
			if (!func_697(1856368424, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case -1861414976:
			if (!func_697(568096966, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case 747514327:
			if (!func_697(1104817207, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case -1042021329:
			if (!func_697(478888800, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case -591815673:
			if (!func_697(1955414013, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case 883901517:
			if (!func_697(-1207218596, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case 1561093093:
			if (!func_697(-116967529, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case 1287917122:
			if (!func_697(-605808708, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case -1943367752:
			if (!func_697(-100150000, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case -371827125:
			if (!func_697(-320403109, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case -889906510:
			if (!func_697(18369533, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case 64896505:
			if (!func_697(-331965904, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case -1161687045:
			if (!func_697(127191252, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case 526003171:
			if (!func_697(-2074957003, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case -895073533:
			if (!func_697(-1226747327, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */) || !func_697(-141795616, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case -2066272360:
			if (!func_697(-1973910443, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case 93964309:
			if (!func_697(1707200698, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case 2103908624:
			if (!func_697(1883767827, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case -2142074819:
		case -2141419899:
		case -2100409704:
		case -2056579774:
		case -1939389836:
		case -1932919229:
		case -1914141706:
		case -1906892166:
		case -1882707460:
		case -1848799275:
		case -1842033327:
		case -1827602683:
		case -1808329564:
		case -1753769127:
		case -1749433374:
		case -1749043433:
		case -1719055206:
		case -1705799799:
		case -1684974589:
		case -1673998598:
		case -1664435783:
		case -1624627591:
		case -1578292898:
		case -1573753524:
		case -1556041029:
		case -1547280108:
		case -1502194556:
		case -1462313959:
		case -1445041595:
		case -1442844448:
		case -1422877860:
		case -1395855864:
		case -1387772214:
		case -1378911044:
		case -1369678628:
		case -1341750998:
		case -1339871203:
		case -1319875891:
		case -1290997627:
		case -1287894233:
		case -1262828457:
		case -1181950077:
		case -1120447016:
		case -1095341658:
		case -1023919011:
		case -1004266677:
		case -947815572:
		case -941648233:
		case -931337253:
		case -895307590:
		case -888632790:
		case -852602679:
		case -839820438:
		case -800891377:
		case -797689456:
		case -729679654:
		case -677920206:
		case -635323621:
		case -630295963:
		case -604603161:
		case -583127403:
		case -574190021:
		case -500245243:
		case -492731190:
		case -489737721:
		case -448554447:
		case -414883443:
		case -381925743:
		case -364475655:
		case -329176208:
		case -297483764:
		case -243260793:
		case -226366310:
		case -211583122:
		case -207792846:
		case -110352060:
		case -102827640:
		case -101740709:
		case -90486812:
		case -89829333:
		case -75928821:
		case -74031276:
		case -70727482:
		case -38135693:
		case 16844748:
		case 84709454:
		case 148595040:
		case 215903338:
		case 237155783:
		case 321629486:
		case 404823609:
		case 560154875:
		case 565812320:
		case 640520536:
		case 642824856:
		case 673606600:
		case 715735881:
		case 730069127:
		case 799106423:
		case 803929300:
		case 804063423:
		case 826868753:
		case 831940854:
		case 846837291:
		case 896725436:
		case 943561238:
		case 982765715:
		case 1028084603:
		case 1032791043:
		case 1126565489:
		case 1153686207:
		case 1157309080:
		case 1232840551:
		case 1248935549:
		case 1279586666:
		case 1280406542:
		case 1325325699:
		case 1341699707:
		case 1362354162:
		case 1421300489:
		case 1480425906:
		case 1494062795:
		case 1517951665:
		case 1521272922:
		case 1601722481:
		case 1666964801:
		case 1788424349:
		case 1812677765:
		case 1866434585:
		case 1891256113:
		case 2013720626:
		case 2048790450:
		case 2068208444:
		case 2068253437:
		case 2079292950:
		case 2127412005:
			iVar1 = func_699(iVar0);
			if (iVar1 != -1554566073)
			{
				if (!func_697(iVar1, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
				{
					return 0;
				}
			}
			else
			{
				return BUILTIN::VDIST(Global_35, func_700(iVar0)) > 100f;
			}
			break;
		case -812641169:
			if (!func_697(104287396, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case -554519756:
			if (!func_697(715920781, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case 865557632:
			if (!func_697(-900541220, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case 1112996351:
			if (!func_697(-1199296193, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case -1608141409:
			if (!func_697(546408124, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case -311373772:
			if (!func_697(-1232784731, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case 61537448:
			if (!func_697(301558156, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case -925071604:
			if (!func_697(1683033662, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
		case 1195508693:
			if (!func_697(-643041038, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_442(int iParam0)
{
	int iVar0;

	if (iParam0 == 255)
	{
		iParam0 = func_179();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 623901053;
	}
	iParam0 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(&(Global_1275573->f_154[iParam0]));
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 623901053;
	}
	iVar0 = 623901053;
	switch (iParam0)
	{
		case 0:
			iVar0 = -1158905413;
			break;
		case 1:
			iVar0 = 358397622;
			break;
		case 2:
			iVar0 = 65999835;
			break;
		case 3:
			iVar0 = 814443795;
			break;
		case 4:
			iVar0 = 519621102;
			break;
		case 5:
			iVar0 = -1628223003;
			break;
		case 6:
			iVar0 = 1278256225;
			break;
		case 7:
			iVar0 = 2038628101;
			break;
		case 8:
			iVar0 = 1742494648;
			break;
		case 9:
			iVar0 = -1010166918;
			break;
		case 10:
			iVar0 = 660170868;
			break;
		case 11:
			iVar0 = -1278312096;
			break;
		case 12:
			iVar0 = -509158128;
			break;
		case 13:
			iVar0 = -226656579;
			break;
		case 14:
			iVar0 = 2115868159;
			break;
		case 15:
			iVar0 = 1495813101;
			break;
		case 16:
			iVar0 = 1197385818;
			break;
		case 17:
			iVar0 = 1015780020;
			break;
		case 18:
			iVar0 = -1286733825;
			break;
		case 19:
			iVar0 = -1670393277;
			break;
		case 20:
			iVar0 = -415733461;
			break;
		case 21:
			iVar0 = -1207924036;
			break;
		case 22:
			iVar0 = 497702414;
			break;
		case 23:
			iVar0 = 719188085;
			break;
		case 24:
			iVar0 = 43753457;
			break;
		case 25:
			iVar0 = 771290791;
			break;
		case 26:
			iVar0 = 20356387;
			break;
		case 27:
			iVar0 = 309149584;
			break;
		case 28:
			iVar0 = 1613781781;
			break;
		case 29:
			iVar0 = 1693607065;
			break;
		case 30:
			iVar0 = 1132176120;
			break;
		case 31:
			iVar0 = 869270437;
			break;
	}
	return iVar0;
}

int func_443()
{
	return PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
}

bool func_444(int iParam0)
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

int func_445(int iParam0)
{
	return iParam0;
}

void func_446(int iParam0)
{
	if (!func_701(iParam0))
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

int func_447(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1099294->f_16;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return ((*Global_1097610)[iParam0 /*51*/])->f_16;
}

int func_448()
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return Global_1070356->f_5;
}

bool func_449()
{
	return Global_1900718->f_67;
}

bool func_450(int iParam0)
{
	return ((func_217(0, iParam0) || func_217(1, iParam0)) || func_217(2, iParam0));
}

int func_451(int iParam0)
{
	int iVar0;

	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		iParam0 = PLAYER::PLAYER_ID();
	}
	iVar0 = iParam0;
	if (func_702(iParam0) > 2)
	{
		return 1;
	}
	if (((*Global_262996)[iVar0 /*70*/])->f_1.f_16 != 0)
	{
		return 1;
	}
	if (((*Global_262996)[iVar0 /*70*/])->f_1 != 255)
	{
		return 1;
	}
	if (((*Global_262996)[iVar0 /*70*/])->f_1.f_18 != 2147483647)
	{
		return 1;
	}
	return 0;
}

int func_452()
{
	int iVar0;
	int iVar1;
	struct<35> Var2;

	iVar0 = 0;
	Var2.f_8 = -1;
	Var2.f_8.f_1 = -1;
	Var2.f_16.f_12 = -1;
	Var2.f_16.f_12.f_1 = -1;
	Var2.f_16.f_14 = 255;
	Var2.f_16.f_15 = 255;
	iVar1 = 0;
	while (iVar1 < Global_1070356->f_14)
	{
		Var2 = { func_220(iVar1) };
		if (!func_221(&Var2))
		{
		}
		else
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_453()
{
	return Global_1572887->f_106.f_75;
}

bool func_454()
{
	return Global_1051202->f_79.f_102 > 0;
}

bool func_455()
{
	return Global_1126368->f_2010 > 0;
}

int func_456()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (&Global_1100950->f_33[iVar0 /*16*/] != 0)
		{
			if (_NAMESPACE26::_0x93A91A351A07360E(&(Global_1100950->f_33[iVar0 /*16*/])))
			{
				if (&Global_1100950->f_33[iVar0 /*16*/] == Global_1275573->f_15)
				{
					if (func_18((Global_1100950->f_33[iVar0 /*16*/])->f_3.f_5))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_457()
{
	return Global_1225057->f_9329 != -1;
}

char* func_458(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "Stry";
		case 3:
			return "Proc";
		case 4:
			return "Fetch";
		case 5:
			return "Mini";
		case 8:
			return "Beat";
		case 7:
			return "UGC";
		case 6:
			return "FMA";
		default:
			break;
	}
	return "Unknown";
}

bool func_459()
{
	return (ANIMSCENE::_0x25557E324489393C(Global_26285) && ANIMSCENE::_0xCBFC7725DE6CE2E0(Global_26285, 0));
}

int func_460(int iParam0)
{
	if (iParam0 <= 0 || iParam0 >= 7)
	{
		return 0;
	}
	return 1;
}

bool func_461(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return Global_1272028[iParam0] == iParam0;
}

int func_462(var uParam0)
{
	if (SCRIPTS::_DOES_THREAD_EXIST(uParam0->f_3))
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_3, false))
		{
			return 1;
		}
	}
	return 0;
}

var func_463(char[4] cParam0)
{
	return cParam0;
}

int func_464(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= 32)
	{
		return 0;
	}
	return func_235((*Global_1132001)[iParam2 /*13*/][iParam0 /*4*/], iParam1);
}

int func_465(int iParam0)
{
	return Global_1122836[iParam0 /*54*/];
}

bool func_466(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 32);
}

struct<2> func_467(int iParam0)
{
	return (Global_1100950->f_33[iParam0 /*16*/])->f_3.f_5;
}

var func_468(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

int func_469(int iParam0)
{
	if (STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		return 1;
	}
	if (func_703())
	{
		return 0;
	}
	STREAMING::_REQUEST_IMAP(iParam0);
	return 0;
}

int func_470(int iParam0)
{
	if (!STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		return 1;
	}
	if (func_703())
	{
		return 0;
	}
	STREAMING::_REMOVE_IMAP(iParam0);
	return 0;
}

struct<4> func_471(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_659(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_472(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_472(bool bParam0)
{
	if (func_58() == -1)
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

struct<16> func_473(var uParam0, bool bParam1)
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
		Var0.f_15 = func_660(uParam0->f_4, joaat("default"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_658() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_474(int iParam0, int iParam1)
{
	int iVar0;

	if ((!func_276() || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || !NETWORK::NETWORK_IS_SESSION_ACTIVE())
	{
		return 0;
	}
	if (!func_90(16))
	{
		return 0;
	}
	if (func_26())
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-75008140))
		{
			return 0;
		}
	}
	if (!func_704())
	{
		return 0;
	}
	if (func_666(16))
	{
		return 0;
	}
	iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (iParam1 == 1 && (!_NAMESPACE26::_0xD6F6ACF4392187FB(iVar0) || !_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID())))
	{
		return 0;
	}
	if (iParam0 == 1 && func_235(Global_1131092->f_8, 1))
	{
		return 0;
	}
	if (func_705())
	{
		return 0;
	}
	return 1;
}

void func_475()
{
	((*Global_1128435)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/])->f_33.f_4 = 0;
}

void func_476(int iParam0)
{
	func_706(&(((*Global_1128435)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/])->f_33.f_4), iParam0);
}

int func_477(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (((*Global_1125276)[iVar1 /*27*/])->f_9 == iVar0)
		{
			return ((*Global_1125276)[iVar1 /*27*/])->f_1.f_1 == ((*Global_1128435)[iParam0 /*83*/])->f_33.f_1;
		}
		iVar1++;
	}
	return 0;
}

void func_478()
{
	int iVar0;
	var uVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (VOLUME::_0xF6A8A652A6B186CD(((*Global_1128435)[iVar0 /*83*/])->f_38.f_23.f_1))
	{
		VOLUME::_0xFDFECC6EE4491E11(((*Global_1128435)[iVar0 /*83*/])->f_38.f_23.f_1);
	}
	if (VOLUME::_0xF6A8A652A6B186CD(((*Global_1128435)[iVar0 /*83*/])->f_38.f_23))
	{
		VOLUME::_0xFDFECC6EE4491E11(((*Global_1128435)[iVar0 /*83*/])->f_38.f_23);
	}
	((*Global_1128435)[iVar0 /*83*/])->f_38.f_23.f_1 = uVar1;
	((*Global_1128435)[iVar0 /*83*/])->f_38.f_23 = uVar1;
}

bool func_479(int iParam0)
{
	return func_235(Global_1131092->f_8, iParam0);
}

void func_480(int iParam0)
{
	Global_1126368->f_1987 = iParam0;
}

int func_481(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_707(vParam0, 0f, 0f, 0, 2);
	return func_707(vParam0, ((*Global_1892728)[iVar0 /*3*/])->f_1, ((*Global_1892728)[iVar0 /*3*/])->f_2, Global_1892728[iVar0 /*3*/], 4);
}

bool func_482(var uParam0, int iParam1, int iParam2)
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

bool func_483(var uParam0, int iParam1, int iParam2)
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

void func_484(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_708(iParam0);
	if (!func_531(1))
	{
		return;
	}
	if (bParam1)
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_530(128) && !func_709(18))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_710() == 4)
	{
		func_246(17);
	}
	func_711(1024);
}

int func_485(int iParam0)
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

int func_486(int iParam0, var uParam1)
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

int func_487(int iParam0)
{
	switch (iParam0)
	{
		case 1056359525:
			return 0;
		case 89248012:
			return 1;
		case -100681112:
			return 2;
		case -1087814448:
			return 3;
		case -1265422428:
			return 4;
		case 2053061437:
			return 5;
		case -804198753:
			return 6;
		case 97833510:
			return 7;
		case -74793582:
			return 8;
		case -1585936017:
			return 9;
		case 792472748:
			return 10;
		case 140861179:
			return 11;
		default:
			break;
	}
	return 0;
}

int func_488(int iParam0)
{
	switch (iParam0)
	{
		case 132:
			return -809040070;
		case 6:
			return 443958153;
		case 7:
			return 1035357148;
		case 8:
			return -990591911;
		case 19:
			return 1434435999;
		case 13:
			return 914613127;
		case 14:
			return 277114628;
		case 15:
			return -441298053;
		case 12:
			return -2008988392;
		case 122:
			return 1866591384;
		case 123:
			return -810797676;
		case 5:
			return 1591504033;
		case 9:
			return -1481022983;
		case 10:
			return -200160067;
		case 11:
			return -906556724;
		case 16:
			return 882729775;
		case 17:
			return 1957450109;
		case 18:
			return 1826386989;
		case 23:
			return 213861089;
		case 24:
			return 187124199;
		case 25:
			return -1639286351;
		case 22:
			return 1244472740;
		case 26:
			return -184950877;
		case 45:
			return -922179383;
		case 48:
			return 877339314;
		case 46:
			return 327042733;
		case 49:
			return -1159824322;
		case 42:
			return 187784199;
		case 43:
			return 156869848;
		case 44:
			return 959980967;
		case 50:
			return -605457855;
		case 51:
			return -967272484;
		case 52:
			return 253446434;
		case 53:
			return -24930371;
		case 63:
			return -491616406;
		case 56:
			return 1428271505;
		case 57:
			return -404449802;
		case 60:
			return -2132681852;
		case 124:
			return 1479356600;
		case 125:
			return -1608228131;
		case 54:
			return 1700741106;
		case 55:
			return 509242725;
		case 59:
			return -1243693278;
		case 58:
			return 106026254;
		case 61:
			return -1340467914;
		case 62:
			return -2128099513;
		case 27:
			return -768596287;
		case 28:
			return -1789795772;
		case 33:
			return 986912071;
		case 31:
			return 312948291;
		case 34:
			return 770563571;
		case 35:
			return 288839560;
		case 30:
			return 399352507;
		case 39:
			return -1241147617;
		case 126:
			return 1576805996;
		case 29:
			return -1427623397;
		case 36:
			return 305555540;
		case 37:
			return -697751457;
		case 38:
			return -994915577;
		case 68:
			return 2080716288;
		case 69:
			return 922959422;
		case 70:
			return joaat("rage_p2_3");
		case 71:
			return 599204508;
		case 74:
			return -362796541;
		case 127:
			return -176953214;
		case 75:
			return -1992095599;
		case 72:
			return -553046416;
		case 73:
			return 1410537143;
		case 83:
			return 646741747;
		case 84:
			return -773037432;
		case 85:
			return 1444751354;
		case 78:
			return 709943351;
		case 87:
			return 731746260;
		case 86:
			return 405856312;
		case 82:
			return -1749578899;
		case 88:
			return 1581089825;
		case 81:
			return 1124822890;
		case 91:
			return 1618521465;
		case 90:
			return -442258411;
		case 120:
			return 1665083003;
		case 121:
			return 810431028;
		case 77:
			return 1161446575;
		case 79:
			return -406930559;
		case 80:
			return -1850308061;
		case 89:
			return 787686374;
		case 41:
			return 1523596125;
		case 98:
			return -372049939;
		case 97:
			return 226213668;
		case 93:
			return 1437804895;
		case 96:
			return -1254552445;
		case 94:
			return 1526480524;
		case 95:
			return 470861506;
		case 128:
			return 644508980;
		case 129:
			return -1985767496;
		case 0:
			return 1117878254;
		case 1:
			return 622553269;
		case 2:
			return -1934358691;
		case 101:
			return 94750187;
		case 99:
			return 545745902;
		case 100:
			return 1875117241;
		case 119:
			return -1861588330 /* GXTEntry: "Trade" */;
		case 133:
			return -1079912632 /* GXTEntry: "Wilderness Outfitters" */;
		case 148:
			return -1624899219;
		case 172:
			return 1712034773;
		case 173:
			return 1084233913 /* GXTEntry: "Shop at Clothing Store" */;
		case 174:
			return -1628307596;
		case 149:
			return 1109728466;
		case 150:
			return 151142181;
		case 147:
			return 191185611;
		case 135:
			return 1689047337;
		case 136:
			return 631237697;
		case 137:
			return 1309294228;
		case 138:
			return -1862366064;
		case 139:
			return -708893514;
		case 140:
			return -61253253;
		case 141:
			return -1674694281;
		case 142:
			return 14391281;
		case 143:
			return -869603674;
		case 144:
			return 2081857521;
		case 145:
			return 526646992;
		case 146:
			return 1672297313;
		case 47:
			return 1025033373;
		case 32:
			return 1025033373;
		case 21:
			return 1025033373;
		case 115:
			return 1025033373;
		case 92:
			return 1025033373;
		case 131:
			return 1025033373;
		case 20:
			return 1025033373;
		case 134:
			return -765151559;
		case 175:
			return 1244193358;
		case 151:
			return -268420964;
		case 152:
			return -283845926;
		case 153:
			return 76731659;
		case 154:
			return 2141489518;
		case 67:
			return 1529797091;
		case 155:
			return 1120323763;
		case 156:
			return -1951530479;
		case 157:
			return 2034257465;
		case 158:
			return 278587369;
		case 65:
			return 1388932648;
		case 160:
			return 1467401843;
		case 161:
			return -1049737591;
		case 162:
			return 1175719437;
		case 163:
			return 2115547696;
		case 64:
			return 878376253;
		case 164:
			return -508879537;
		case 165:
			return -654369397;
		case 166:
			return 1573058547;
		case 167:
			return 1753151614;
		case 168:
			return -2113647360;
		case 169:
			return 1337275619;
		case 170:
			return -237650722;
		case 171:
			return 283754781;
		case 66:
			return -2076086367;
		case 159:
			return -487054121;
		case 108:
			return -1769964380;
		case 110:
			return -1464928880;
		case 109:
			return -812483303;
		case 111:
			return 1315212395;
		case 112:
			return 450843655;
		case 113:
			return -1477315484;
		case 114:
			return -1132316597;
		case 102:
			return -1495157302;
		case 105:
			return -2140031237;
		case 106:
			return -375350;
		case 103:
			return -1829807698;
		case 104:
			return 186603357;
		case 107:
			return -1575817877;
		case 116:
			return 1087483310;
		case 130:
			return -552506176;
		case 117:
			return 441769767;
		case 118:
			return 1318049946;
		case 3:
			return 548657065;
		case 4:
			return 243086140;
		case 40:
			return -305029900;
		case 76:
			return 1008537949;
		default:
			break;
	}
	return 0;
}

int func_489(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_712(iParam0, iParam1) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

bool func_490(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(&(Global_17172.f_2563[iParam0]), iParam1);
}

int func_491(int iParam0)
{
	if (func_493(iParam0, 4))
	{
		return 0;
	}
	return 1;
}

int func_492(int iParam0)
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

bool func_493(int iParam0, int iParam1)
{
	return ((Global_1904613->f_31[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_494(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_495()
{
	if (!func_26())
	{
		return 0;
	}
	return Global_1904613->f_8196;
}

int func_496(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_713(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 == func_179())
	{
		return func_713(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1275573->f_22[iParam1])
	{
		return func_713(&(((*Global_1097610)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

void func_497(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_498(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

void func_499()
{
	func_714(-1687561002);
	func_714(1957225320);
	func_714(-860696938);
	func_714(-1971474291);
	func_714(-1425946870);
	func_714(-1114426126);
	func_714(-316909020);
	func_714(-1962893335);
	func_714(1351589798);
	func_714(300868838);
	func_714(-1788578071);
	func_714(1157066259);
	func_714(1475953931);
	func_714(2022451711);
	func_714(970924250);
	func_714(-1177590512);
	func_714(-1611076340);
	func_715(446964392);
}

void func_500()
{
	func_714(1209017192);
	func_714(-2143243848);
	func_714(510052409);
	func_714(-644575724);
	func_714(291770965);
	func_714(1700661865);
	func_714(1070723367);
	func_714(1261237250);
	func_714(-109425099);
	func_714(1402472902);
	func_714(1802272784);
	func_714(-1458944281);
	func_714(2108368013);
	func_715(1802272784);
	func_715(-1999825729);
}

void func_501()
{
	func_714(-1232260252);
	func_714(1404611977);
	func_714(-1395712024);
}

void func_502()
{
	func_714(414622870);
	func_714(557551306);
	func_714(-412827149);
	func_715(1802272784);
	func_715(414622870);
}

void func_503()
{
	func_714(531106429);
	func_714(1069611813);
	func_714(1102643191);
	func_714(44502487);
	func_714(-1869016398);
	func_714(806681228);
	func_714(1311984381);
	func_714(-1162254606);
}

int func_504(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 7:
		case 8:
			return 0;
		case 3:
		case 5:
			switch (iParam1)
			{
				case 0:
					return 0;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 0;
			}
			break;
	}
	return 1;
}

struct<8> func_505(int iParam0, int iParam1)
{
	char cVar0[64];

	StringCopy(&cVar0, func_716(iParam0), 64);
	StringConCat(&cVar0, "_nav_camp_", 64);
	StringConCat(&cVar0, func_717(iParam1), 64);
	return cVar0;
}

int func_506(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 5:
			return 4;
		case 6:
			return 84;
		case 0:
			return 45;
		case 2:
			return 104;
		case 4:
			return 63;
		case 1:
			return 76;
		case 3:
			return 9;
		case 7:
			return 22;
		case 8:
			return 39;
		default:
			break;
	}
	if (iParam0 != -1)
	{
	}
	return -1;
}

void func_507(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = 0;
		while (iVar1 < 6)
		{
			func_718(iParam1, iVar0, iVar1, bParam2, bParam3);
			iVar1++;
		}
		iVar0++;
	}
}

int func_508(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = BUILTIN::FLOOR(func_719(iParam0, bParam1));
	if (bParam1)
	{
		iVar3 = iParam0;
		if (iVar3 < 0 || iVar3 >= 32)
		{
			iVar2 = 0;
		}
		else
		{
			iVar2 = BUILTIN::FLOOR(((*Global_1097610)[iVar3 /*51*/])->f_18);
		}
		if (iVar2 > iVar0)
		{
			iVar1 = iVar2;
		}
		else
		{
			iVar1 = iVar0;
		}
	}
	else
	{
		iVar1 = iVar0;
	}
	if (iVar1 < Global_1901929->f_673.f_31)
	{
		return 0;
	}
	if (iVar1 < Global_1901929->f_673.f_32)
	{
		return 1;
	}
	if (iVar1 < Global_1901929->f_673.f_33)
	{
		return 2;
	}
	if (iVar1 < Global_1901929->f_673.f_34)
	{
		return 3;
	}
	if (iVar1 < Global_1901929->f_673.f_35)
	{
		return 4;
	}
	if (iVar1 < Global_1901929->f_673.f_36)
	{
		return 5;
	}
	return 6;
}

int func_509()
{
	return Global_1051202->f_12;
}

char* func_510()
{
	return "unnamed";
}

int func_511(int iParam0)
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

int func_512(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return func_496(35, iParam0);
}

bool func_513(int iParam0)
{
	if (func_720(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) != 1)
		{
			func_721(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) == 1;
}

int func_514(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return 0;
	}
	return 1;
}

int func_515()
{
	return Global_1070356->f_14.f_2;
}

void func_516()
{
	vector3 vVar0;

	if (func_515() == -1)
	{
		return;
	}
	func_722(Global_1070356->f_14.f_2.f_1);
	vVar0 = -1;
	Global_1070356->f_14.f_2 = { vVar0 };
}

void func_517(int iParam0)
{
	Global_1070356->f_14.f_2 = iParam0;
}

void func_518()
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (((*Global_1269869)[iVar1 /*20*/])->f_3 & 1 == 0)
	{
		if (((*Global_1269869)[iVar1 /*20*/])->f_3 & 2 != 0)
		{
			iVar0 |= 4;
		}
		if (((*Global_1269869)[iVar1 /*20*/])->f_3 & 4 != 0)
		{
			iVar0 |= 8;
		}
		if (((*Global_1269869)[iVar1 /*20*/])->f_3 & 8 != 0)
		{
			iVar0 |= 16;
		}
		if (((*Global_1269869)[iVar1 /*20*/])->f_3 & 16 != 0)
		{
			iVar0 = 2;
		}
	}
	PLAYER::_0x4EC8BE63B8A5D4EF(PLAYER::PLAYER_ID(), iVar0);
}

void func_519(int iParam0)
{
	if (!Global_1070356->f_3)
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	if (!func_59(Global_1185577[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*12*/], iParam0))
	{
		func_35((*Global_1185577)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*12*/], iParam0);
		Global_1051202->f_44.f_1 = 1;
	}
}

void func_520(int iParam0)
{
	if (!Global_1070356->f_3)
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	if (func_59(Global_1185577[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*12*/], iParam0))
	{
		func_57((*Global_1185577)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*12*/], iParam0);
		Global_1051202->f_44.f_1 = 1;
	}
}

int func_521(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 60;
		case 2:
			return 300;
		case 4:
			return 600;
		case 8:
			return 1800;
		case 16:
			return 3600;
		case 32:
			return 7200;
		case 64:
			return 10800;
		case 128:
			return 14400;
		case 256:
			return 18000;
		case 512:
			return 21600;
		default:
			break;
	}
	return 0;
}

void func_522(int iParam0, int iParam1)
{
	if (func_59(Global_1051385->f_2, iParam0))
	{
		return;
	}
	func_35(&(Global_1051385->f_2), (iParam0 || iParam1));
}

bool func_523(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return (Global_1275140[iParam1 /*2*/] && iParam0) != 0;
}

void func_524(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar0 == 255)
	{
		return;
	}
	(*Global_1275140)[iVar0 /*2*/] = (Global_1275140[iVar0 /*2*/] || iParam0);
}

int func_525(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
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
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_723(iVar0, 2))
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
		func_724(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216 /* Float: 1f */, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

bool func_526(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_444(iParam0))
	{
		return false;
	}
	iVar0 = func_445(iParam0);
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

void func_527(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar0 == 255)
	{
		return;
	}
	(*Global_1275140)[iVar0 /*2*/] = (Global_1275140[iVar0 /*2*/] - (Global_1275140[iVar0 /*2*/] && iParam0));
}

int func_528(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1275113->f_2), iParam0))
	{
		return 0;
	}
	return 1;
}

void func_529(int iParam0)
{
	Global_1275207->f_64 = iParam0;
}

bool func_530(int iParam0)
{
	return (Global_1099294->f_26.f_9 && iParam0) != 0;
}

bool func_531(int iParam0)
{
	return (Global_1099294->f_26.f_7 && iParam0) != 0;
}

void func_532()
{
	int iVar0;

	if (!func_725(2))
	{
		return;
	}
	if (func_726())
	{
		return;
	}
	if (func_329(0) != -1)
	{
		return;
	}
	iVar0 = func_329(1);
	if (iVar0 != -1 && !func_727(iVar0))
	{
		func_728(2);
		func_334(-373925780);
	}
}

int func_533()
{
	return Global_1276184->f_50;
}

int func_534()
{
	return Global_1276184->f_50.f_1;
}

bool func_535(int iParam0)
{
	int iVar0;

	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	if (iVar0 == 0)
	{
		return false;
	}
	return (iVar0 == iParam0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) <= 4);
}

int func_536(int iParam0)
{
	var uVar0;

	if (!func_589(&uVar0))
	{
		return 0;
	}
	if (!func_590(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 16, 0, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 41, iParam0, 0, 1))
	{
		return 0;
	}
	return func_729(&uVar0, 7);
}

int func_537()
{
	return Global_1276184->f_50.f_2;
}

bool func_538()
{
	int iVar0;

	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) <= 4);
}

int func_539()
{
	char* sVar0;

	sVar0 = MISC::_CREATE_VAR_STRING(0, func_730(func_533(), func_537()));
	return func_272(sVar0, 10000, 0, 0, 0, 1);
}

void func_540(int iParam0)
{
	Global_1276184->f_50.f_1 = iParam0;
}

void func_541(int iParam0)
{
	func_482(&(Global_1276184->f_50.f_3), func_592(iParam0, 1), 1);
}

void func_542()
{
	var uVar0;

	Global_1276184->f_50 = uVar0;
}

void func_543(int iParam0)
{
	Global_1276184->f_50.f_2 = iParam0;
}

int func_544(int iParam0)
{
	return &(Global_1276184->f_50.f_3[iParam0]);
}

int func_545(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -667134878;
		case 1:
			return -1813872822;
		case 2:
			return -887362116;
		case 3:
			return -1221663008;
		case 4:
			return -1208093116;
		case 5:
			return -551064688;
		case 6:
			return -373925780;
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

bool func_546(int iParam0)
{
	return func_713(&(Global_1276184->f_50.f_3), func_592(iParam0, 1), 1);
}

void func_547(int iParam0)
{
	Global_1276184->f_50 = iParam0;
}

int func_548()
{
	var uVar0;

	if (!func_589(&uVar0))
	{
		return 0;
	}
	if (!func_590(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	return func_729(&uVar0, 0);
}

int func_549(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = (5 - 1);
	while (iVar0 >= 0)
	{
		iVar3 = iVar0;
		iVar2 = func_731(iVar3, 1);
		if (iVar2 == -1)
		{
		}
		else
		{
			if (iVar0 != (5 - 1))
			{
				iVar1 = BUILTIN::SHIFT_LEFT(iVar1, iVar2);
			}
			iVar1 = (iVar1 || func_732(iVar3, iParam0));
		}
		iVar0 = (iVar0 + -1);
	}
	return iVar1;
}

int func_550(int iParam0)
{
	var uVar0;

	if (!func_589(&uVar0))
	{
		return 0;
	}
	if (!func_590(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 19, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 36, 0, 0, 0))
	{
		return 0;
	}
	return func_729(&uVar0, 8);
}

struct<4> func_551(int iParam0, int iParam1)
{
	var uVar0;
	struct<4> Var5;
	int iVar9;

	if (!func_589(&uVar0))
	{
		return Var5;
	}
	if (!func_590(&uVar0, 13, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_590(&uVar0, 17, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_590(&uVar0, 19, iParam0, 0, 1))
	{
		return Var5;
	}
	if (!func_590(&uVar0, 36, 0, 0, 0))
	{
		return Var5;
	}
	if (!func_590(&uVar0, 37, iParam1, 0, 1))
	{
		return Var5;
	}
	iVar9 = func_733(&uVar0);
	return func_734(iVar9);
}

void func_552(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	if (!func_735(uParam0, iParam1))
	{
		return;
	}
	iVar0 = func_736();
	if (iVar0 == -1)
	{
		return;
	}
	if (!func_737(*uParam0, &uVar1, 1, 255, 0, 0))
	{
		return;
	}
	func_738(iVar0, &uVar1, iParam1, uParam0->f_3);
}

void func_553(int iParam0, var uParam1)
{
	MISC::_COPY_MEMORY(uParam1, Global_1276184->f_111[iParam0 /*6*/], 4);
}

int func_554(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

int func_555(int iParam0)
{
	var uVar0;

	if (!func_589(&uVar0))
	{
		return 0;
	}
	if (!func_590(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 19, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 20, 0, 0, 1))
	{
		return 0;
	}
	return func_729(&uVar0, 1);
}

int func_556(int iParam0, int iParam1)
{
	var uVar0;

	if (!func_589(&uVar0))
	{
		return 0;
	}
	if (!func_590(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 19, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 20, 0, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 23, iParam1, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 24, 0, 0, 0))
	{
		return 0;
	}
	return func_729(&uVar0, 2);
}

int func_557(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<4> Var0;
	struct<5> Var4;
	var uVar9;
	int iVar10;
	int iVar11;

	if (!func_589(&Var4))
	{
		return 0;
	}
	if (!func_590(&Var4, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_590(&Var4, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_590(&Var4, 19, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_590(&Var4, 20, 0, 0, 1))
	{
		return 0;
	}
	if (!func_590(&Var4, 23, iParam1, 0, 1))
	{
		return 0;
	}
	if (!func_590(&Var4, 43, 0, 0, 0))
	{
		if (func_590(&Var4, 24, 0, 0, 0))
		{
			if (!func_590(&Var4, 25, iParam2, 0, 1))
			{
				return 0;
			}
			if (!func_590(&Var4, 43, 0, 0, 1))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	uVar9 = Var4.f_1;
	iVar11 = func_729(&Var4, 9);
	iVar10 = 0;
	while (iVar10 <= (iVar11 - 1))
	{
		Var4.f_1 = uVar9;
		if (!func_590(&Var4, 44, iVar10, 0, 1))
		{
			return 0;
		}
		Var0 = { func_739(Var4) };
		if (!func_740(&Var0, iParam3))
		{
			return 0;
		}
		iVar10++;
	}
	return 1;
}

void func_558(int iParam0, int iParam1, int iParam2)
{
	(Global_1276184->f_76[iParam0 /*17*/])->f_1[iParam1] = iParam2;
}

void func_559(int iParam0, int iParam1)
{
	Global_1276184->f_76[iParam0 /*17*/] = iParam1;
}

void func_560(int iParam0)
{
	Global_1276184->f_2.f_45 = iParam0;
}

void func_561(int iParam0, int iParam1)
{
	(Global_1276184->f_2[iParam0 /*22*/])->f_16 = iParam1;
}

int func_562(int iParam0)
{
	var uVar0;

	if (!func_741(&uVar0, iParam0, -337291755))
	{
		return 0;
	}
	return func_742(&uVar0);
}

void func_563(int iParam0, var uParam1)
{
	(Global_1276184->f_2[iParam0 /*22*/])->f_17 = uParam1;
}

struct<2> func_564(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var5;
	int iVar7;
	int iVar8;

	if (!func_589(&uVar0))
	{
		return Var5;
	}
	if (!func_590(&uVar0, 13, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_590(&uVar0, 17, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_590(&uVar0, 19, iParam0, 0, 1))
	{
		return Var5;
	}
	if (!func_590(&uVar0, 34, 0, 0, 0))
	{
		return Var5;
	}
	if (!func_590(&uVar0, 35, iParam1, 0, 0))
	{
		return Var5;
	}
	iVar7 = func_743(&uVar0);
	iVar8 = func_744(&uVar0);
	return func_712(iVar7, iVar8);
}

void func_565(int iParam0, struct<2> Param1)
{
	(Global_1276184->f_2[iParam0 /*22*/])->f_18 = { Param1 };
}

bool func_566(int iParam0)
{
	return func_568(iParam0, 0) != 0;
}

void func_567(int iParam0, var uParam1)
{
	(Global_1276184->f_2[iParam0 /*22*/])->f_20 = uParam1;
}

int func_568(int iParam0, int iParam1)
{
	var uVar0;

	if (!func_589(&uVar0))
	{
		return 0;
	}
	if (!func_590(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 19, iParam0, 0, 1))
	{
		return 0;
	}
	return func_745(&uVar0, iParam1);
}

void func_569(int iParam0, int iParam1)
{
	(Global_1276184->f_2[iParam0 /*22*/])->f_21 = iParam1;
}

int func_570(int iParam0, int iParam1)
{
	var uVar0;

	if (!func_589(&uVar0))
	{
		return 0;
	}
	if (!func_590(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 19, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 20, 0, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 23, iParam1, 0, 1))
	{
		return 0;
	}
	return func_746(&uVar0);
}

void func_571(int iParam0, int iParam1, var uParam2)
{
	(*Global_1276184->f_2[iParam0 /*22*/])[iParam1] = uParam2;
}

int func_572()
{
	return Global_1276184->f_2.f_45;
}

int func_573(int iParam0)
{
	return (Global_1276184->f_2[iParam0 /*22*/])->f_16;
}

int func_574()
{
	return Global_1276184->f_48;
}

int func_575()
{
	return Global_1276184->f_48.f_1;
}

var func_576(int iParam0, int iParam1)
{
	return Global_1276184->f_2[iParam0 /*22*/][iParam1];
}

int func_577(int iParam0)
{
	return (Global_1276184->f_2[iParam0 /*22*/])->f_17 * 60;
}

struct<2> func_578(int iParam0)
{
	return (Global_1276184->f_2[iParam0 /*22*/])->f_18;
}

bool func_579(int iParam0)
{
	return (Global_1276184->f_2[iParam0 /*22*/])->f_20;
}

int func_580(int iParam0)
{
	return &(Global_1276184->f_76[iParam0 /*17*/]);
}

var func_581(int iParam0)
{
	return (Global_1276184->f_2[iParam0 /*22*/])->f_21;
}

void func_582(int iParam0)
{
	Global_1276184->f_48.f_1 = iParam0;
}

void func_583(int iParam0)
{
	Global_1276184->f_48 = iParam0;
}

struct<5> func_584(int iParam0)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	iVar7 = iParam0;
	iVar5 = 0;
	while (iVar5 <= (5 - 1))
	{
		iVar8 = iVar5;
		iVar6 = func_731(iVar8, 1);
		if (iVar6 == -1)
		{
		}
		else
		{
			func_747(iVar8, &Var0, iVar7);
			iVar7 = BUILTIN::SHIFT_RIGHT(iVar7, iVar6);
		}
		iVar5++;
	}
	return Var0;
}

int func_585(int iParam0, int iParam1)
{
	var uVar0;

	if (!func_589(&uVar0))
	{
		return 0;
	}
	if (!func_590(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 19, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 20, 0, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 23, iParam1, 0, 1))
	{
		return 0;
	}
	return func_748(&uVar0);
}

struct<2> func_586(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_749(iParam0, &(Global_1070356->f_634), func_76(iParam1));
			break;
		case 3:
			Var0.f_1 = func_749(iParam0, &(Global_1070356->f_634.f_602), func_76(iParam1));
			break;
		case 4:
			Var0.f_1 = func_749(iParam0, &(Global_1070356->f_634.f_2104), func_76(iParam1));
			break;
		case 5:
			Var0.f_1 = func_749(iParam0, &(Global_1070356->f_634.f_12606), func_76(iParam1));
			break;
		case 6:
			Var0.f_1 = func_749(iParam0, &(Global_1070356->f_634.f_12908), func_76(iParam1));
			break;
		case 7:
			Var0.f_1 = func_749(iParam0, &(Global_1070356->f_634.f_15910), func_76(iParam1));
			break;
		case 8:
			Var0.f_1 = func_749(iParam0, &(Global_1070356->f_634.f_15981), func_76(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_750();
	}
	return Var0;
}

void func_587(int iParam0, var uParam1)
{
	func_751(iParam0, uParam1->f_3.f_2);
	func_752(iParam0, uParam1->f_3.f_3);
	func_753(iParam0, uParam1->f_3.f_4);
	func_754(iParam0, uParam1->f_3);
	func_755(iParam0, uParam1->f_3.f_1);
	func_756(iParam0, *uParam1);
	func_757(iParam0, uParam1->f_2);
}

void func_588(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	struct<6> Var6;
	struct<5> Var12;
	struct<8> Var17;

	Var17 = -1;
	Var17.f_1 = -1;
	Var17.f_3 = -1;
	Var17.f_3.f_1 = -1;
	Var17.f_3.f_2 = -1;
	Var17.f_3.f_3 = -1;
	Var17.f_3.f_4 = -1;
	Var17.f_3 = { func_584(iParam0) };
	iVar1 = func_758(Var17.f_3, Var17.f_3.f_1, Var17.f_3.f_2);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Var6 = { func_759(Var17, iVar0) };
		func_760(&Var6, iParam0);
		iVar0++;
	}
	iVar1 = func_761(Var17.f_3, Var17.f_3.f_1, Var17.f_3.f_2);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Var12 = { func_762(&Var17, iVar0) };
		func_763(&Var12, iParam0);
		iVar0++;
	}
	iVar1 = func_764(Var17.f_3, Var17.f_3.f_1, Var17.f_3.f_2);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Var2 = { func_765(Var17, iVar0) };
		func_552(&Var2, iParam0);
		iVar0++;
	}
}

int func_589(var uParam0)
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

int func_590(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

struct<8> func_591(var uParam0, int iParam1, int iParam2)
{
	struct<8> Var0;

	uParam0->f_2 = iParam1;
	if (!DATAFILE::_DATAFILE_GET_STRING(&Var0, uParam0))
	{
	}
	return Var0;
}

int func_592(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1813872822:
			return 1;
		case -1221663008:
			return 3;
		case -1208093116:
			return 4;
		case -887362116:
			return 2;
		case -667134878:
			return 0;
		case -551064688:
			return 5;
		case -373925780:
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

struct<8> func_593(int iParam0)
{
	struct<8> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_2 = -1;
	Var0.f_3.f_3 = -1;
	Var0.f_3.f_4 = -1;
	MISC::_COPY_MEMORY(&Var0, Global_1276184->f_55.f_4[iParam0 /*8*/], 8);
	return Var0;
}

void func_594(int iParam0)
{
	struct<4> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_2 = -1;
	Var0.f_3.f_3 = -1;
	Var0.f_3.f_4 = -1;
	func_587(iParam0, &Var0);
}

bool func_595(int iParam0)
{
	return (Global_1276184->f_55.f_1.f_2 && iParam0) != 0;
}

var func_596()
{
	return Global_1103537->f_21;
}

int func_597(int iParam0)
{
	return Global_1103537[iParam0];
}

void func_598(int iParam0)
{
	if (Global_1103537->f_17)
	{
		func_766(iParam0);
	}
	else
	{
		func_767(iParam0);
	}
}

void func_599(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_768(iParam0, 1))
	{
		return;
	}
	bVar0 = func_769();
	func_770(iParam0);
	if (iParam1 == -1)
	{
		iVar1 = (Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_7;
		if (iVar1 > 1)
		{
			iVar1 = 1;
		}
		iParam1 = 0;
		while (iParam1 < iVar1)
		{
			func_771(iParam0, iParam1, bVar0);
			iParam1++;
		}
	}
	else
	{
		func_771(iParam0, iParam1, bVar0);
	}
	if (bVar0)
	{
		func_772(iParam0);
	}
}

bool func_600()
{
	return func_773();
}

void func_601(var uParam0, var uParam1)
{
	int iVar0;
	struct<40> Var1;

	if (*uParam0 == 0)
	{
		return;
	}
	*uParam1++;
	if (*uParam1 >= *uParam0)
	{
		*uParam1 = 0;
	}
	iVar0 = ((uParam0->f_1 + *uParam1) % uParam0->f_2);
	Var1 = -1;
	Var1.f_2 = -1;
	Var1.f_3 = 255;
	Var1.f_4 = -1;
	Var1.f_5 = -1;
	Var1.f_6 = -1;
	Var1.f_8 = 2;
	Var1.f_8.f_1 = -1;
	Var1.f_8.f_5 = -1;
	Var1.f_8.f_5.f_1 = -1;
	Var1.f_8.f_5.f_3 = -1;
	Var1.f_8.f_5.f_4 = -1;
	Var1.f_8.f_5.f_5 = -1;
	Var1.f_8.f_5.f_6 = -1;
	Var1.f_8.f_5.f_6.f_1 = -1;
	Var1.f_8.f_5.f_9 = 2;
	Var1.f_23.f_1 = 1024;
	Var1.f_23.f_4 = -15;
	Var1.f_23.f_5 = 255;
	Var1.f_23.f_8 = 1;
	Var1.f_23.f_8.f_1.f_1 = 2147483647;
	Var1.f_23.f_13 = -1;
	if ((uParam0->f_3[iVar0 /*40*/])->f_2 != -1)
	{
		Var1 = { func_774(&(Global_1186267->f_28), *(uParam0->f_3[iVar0 /*40*/])) };
		func_775(Var1, uParam0, uParam0->f_3[iVar0 /*40*/]);
	}
}

void func_602(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	int iVar11;

	iVar0 = func_776(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	if (!_NAMESPACE26::_0x93A91A351A07360E(iVar0))
	{
		Var1 = -1;
		Var1.f_1 = -1;
		Var1.f_3 = -1;
		Var1.f_4 = -1;
		Var1.f_5 = -1;
		Var1.f_6 = -1;
		Var1.f_6.f_1 = -1;
		Var1.f_9 = 2;
		Var1 = { func_467(iParam0) };
		if (func_18(Var1))
		{
			iVar11 = func_777(&Var1);
			if (iVar11 != func_778(iParam0))
			{
				if (func_779(iVar11))
				{
					func_780(iParam0, iVar11);
				}
			}
		}
		func_781(iParam0);
	}
}

void func_603(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	iVar1 = func_782(iVar0, -1);
	iVar4 = _NAMESPACE26::_0x901E0DC25080C8B9(iVar0);
	if (func_466(iVar1))
	{
		if (func_776(iVar1) == iVar4)
		{
			return;
		}
	}
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		iVar5 = func_776(iVar2);
		if (func_783(iVar2) != -1)
		{
		}
		else
		{
			if (iVar5 == 0)
			{
				iVar3 = iVar2;
			}
			else if (!_NAMESPACE26::_0x93A91A351A07360E(iVar5))
			{
				iVar3 = iVar2;
			}
			else
			{
				if (iVar5 == iVar4)
				{
					return;
				}
				iVar2++;
			}
			if (iVar3 == -1)
			{
				return;
			}
			func_784(iVar3, iVar4);
		}
	}

void func_604(int iParam0)
{
	var uVar0;
	bool bVar1;

	switch (func_783(iParam0))
	{
		case -1:
			bVar1 = func_785(iParam0, &uVar0);
			break;
		case 0:
			bVar1 = func_786(iParam0, &uVar0);
			break;
		case 1:
			bVar1 = func_787(iParam0, &uVar0);
			break;
		case 2:
			bVar1 = func_788(iParam0, &uVar0);
			break;
		case 3:
			bVar1 = func_789(iParam0, &uVar0);
			break;
		case 4:
			bVar1 = func_790(iParam0, &uVar0);
			break;
		case 5:
			bVar1 = func_791(iParam0, &uVar0);
			break;
		case 6:
			bVar1 = func_792(iParam0, &uVar0);
			break;
		case 7:
			bVar1 = func_793(iParam0, &uVar0);
			break;
		case 9:
			bVar1 = func_794(iParam0, &uVar0);
			break;
		case 8:
			bVar1 = func_795(iParam0, &uVar0);
			break;
		default:
			break;
	}
	if (bVar1)
	{
		func_797(iParam0, uVar0, func_796(iParam0));
	}
}

void func_605()
{
	func_798(3, (func_597(3) + 1 % 32));
	func_798(0, (func_597(0) + 1 % 32));
}

void func_606()
{
	int iVar0;
	struct<13> Var1;
	struct<4> Var14;

	iVar0 = func_782(PLAYER::PLAYER_ID(), -1);
	if (!func_466(iVar0))
	{
		return;
	}
	Var1 = { func_799(iVar0) };
	if (!func_800(Var1.f_5, Var1.f_3))
	{
		return;
	}
	Var14 = -1;
	Var14.f_1 = -1;
	Var14.f_3 = -1;
	Var14 = { Var1.f_5 };
	if (func_18(Var1.f_5))
	{
		Var14.f_3 = Var1.f_3;
		Var14.f_2 = func_19(Var1.f_5);
	}
	else
	{
		Var14.f_3 = -1;
		Var14.f_2 = 0;
	}
	func_801(&Var14);
}

void func_607()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	int iVar9;

	iVar8 = PLAYER::PLAYER_ID();
	bVar2 = func_802(iVar8, 1);
	bVar3 = func_802(iVar8, 2);
	bVar0 = func_802(iVar8, 4);
	bVar1 = func_802(iVar8, 8);
	bVar4 = func_802(iVar8, 32);
	bVar5 = (func_18(func_803()) && !func_18(func_804()));
	bVar7 = func_805() == true;
	bVar6 = (func_806() >= 19 || func_806() == 0);
	if (func_807() != _NAMESPACE26::_0x901E0DC25080C8B9(iVar8) && (func_808() == 4 || (bVar4 && !func_809(255))))
	{
		if (bVar4)
		{
			if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(2000);
			}
		}
		func_810();
		return;
	}
	if (bVar4)
	{
		if ((func_811() == 0 && !bVar0) || bVar1)
		{
			if (CAM::IS_SCREEN_FADED_IN() && !func_809(255))
			{
				func_812(4);
				func_812(8);
				func_812(32);
				func_813(0);
				func_814(func_750());
			}
		}
	}
	if ((func_815() == -1 && !bVar5) && ((bVar7 && bVar6) || !bVar7))
	{
		if (bVar2)
		{
			func_810();
		}
		return;
	}
	iVar9 = func_782(iVar8, -1);
	if (!func_466(iVar9))
	{
		return;
	}
	if (((((!bVar5 && ((bVar7 && bVar6) || !bVar7)) && func_807() != _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) && bVar3) && !bVar0) && func_808() != 2)
	{
		func_810();
		return;
	}
	if (!bVar2)
	{
		return;
	}
	if (!bVar5 && func_808() != 4)
	{
		if (func_815() != 4)
		{
			return;
		}
	}
	if (!bVar3)
	{
		switch (func_815())
		{
			case 4:
				if (!AUDIO::_0xA2CAC9DEF0195E6F(0))
				{
					func_816(2);
				}
				break;
			default:
				func_816(2);
				break;
		}
		return;
	}
	if (!bVar1)
	{
		return;
	}
	func_810();
}

void func_608()
{
	int iVar0;

	iVar0 = func_597(4);
	if (func_817(iVar0))
	{
		func_818(iVar0);
	}
	else
	{
		func_819(iVar0);
	}
}

void func_609()
{
	int iVar0;
	int iVar1;

	iVar0 = func_597(5);
	iVar1 = iVar0;
	if (func_820(iVar1))
	{
		func_821(iVar1);
	}
	else
	{
		func_822(iVar1);
	}
}

void func_610()
{
	if (func_823(255))
	{
		func_824(1);
	}
	else
	{
		func_824(2);
	}
}

void func_611()
{
	int iVar0;
	int iVar1;

	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	if (!func_825(iVar0, 1024))
	{
		return;
	}
	if (func_18(func_803()))
	{
		return;
	}
	iVar1 = MISC::GET_GAME_TIMER();
	if (func_826(32768))
	{
		if ((iVar1 - func_827()) < Global_1901929->f_295.f_37)
		{
			return;
		}
	}
	func_828(iVar0);
	func_829(iVar1);
	func_830(32768);
}

void func_612()
{
	int iVar0;
	struct<4> Var1;

	if (!func_831())
	{
		return;
	}
	if (_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()) != func_832())
	{
		func_833();
		return;
	}
	iVar0 = func_834(func_832());
	if (iVar0 == -1)
	{
		return;
	}
	if (!func_835(iVar0))
	{
		return;
	}
	if (func_783(iVar0) != 0)
	{
		return;
	}
	if (!func_837(func_836(), func_467(iVar0)) && func_18(func_467(iVar0)))
	{
		func_833();
		return;
	}
	if (func_838(iVar0, 2))
	{
		func_833();
		return;
	}
	Var1.f_1 = -1;
	func_839(&Var1);
	func_844(func_840(), func_841(), func_842(), func_843(), func_836(), Var1, 1);
	func_833();
}

void func_613()
{
	struct<4> Var0;
	int iVar4;

	Var0 = 2;
	iVar4 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (NETWORK::_0x255A5EF65EDA9167(iVar4) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4))
	{
		func_845(iVar4, &Var0);
		if (Var0.f_3)
		{
			func_846(&Var0);
		}
	}
	if (func_847(2))
	{
		func_848(&Var0);
		func_849(&Var0);
		func_850(2);
	}
}

void func_614()
{
	struct<4> Var0;
	int iVar4;

	Var0 = 2;
	iVar4 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (NETWORK::_0x255A5EF65EDA9167(iVar4) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4))
	{
		func_851(iVar4, &Var0);
		if (Var0.f_3)
		{
			func_852(&Var0);
		}
	}
	if (func_847(4))
	{
		func_853(&Var0);
		func_854(&Var0);
		func_850(4);
	}
}

void func_615()
{
	struct<4> Var0;
	var uVar4;
	int iVar8;
	int iVar9;

	Var0 = 2;
	uVar4 = 2;
	if (PLAYER::PLAYER_ID() == Global_1099294->f_341)
	{
		iVar8 = 0;
		while (iVar8 <= 6)
		{
			if (!NETWORK::_0x255A5EF65EDA9167(&(Global_1099294->f_342[iVar8])))
			{
			}
			else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1099294->f_342[iVar8])))
			{
			}
			else
			{
				func_855(&(Global_1099294->f_342[iVar8]), &uVar4);
				if (!uVar4.f_3)
				{
				}
				else
				{
					iVar9 = 0;
					while (iVar9 <= 1)
					{
						Var0[iVar9] = (Var0[iVar9] || uVar4[iVar9]) // PointerArith;
						iVar9++;
					}
				}
			}
			iVar8++;
		}
		Var0.f_3 = 1;
	}
	func_856(&Var0);
}

void func_616()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	iVar0 = func_597(6);
	iVar3 = PLAYER::PLAYER_ID();
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (iVar0 == func_857(iVar1))
		{
			if (func_858(iVar1) != 0)
			{
				bVar2 = true;
			}
		}
	else
	{
		}
		iVar1++;
	}
	if (!bVar2)
	{
		if (func_859(iVar3, iVar0))
		{
			func_860(iVar0);
			return;
		}
	}
}

int func_617()
{
	if (!func_861())
	{
		return 0;
	}
	Global_1182289->f_409.f_9 = 0;
	return 1;
}

void func_618()
{
	func_798(1, (func_597(1) + 1 % 32));
	func_798(2, (func_597(2) + 1 % 32));
	func_798(4, (func_597(4) + 1 % 35));
	func_798(5, (func_597(5) + 1 % 70));
	func_798(6, (func_597(6) + 1 % 59));
}

void func_619()
{
	Global_1938579 = 3;
	Global_1938579->f_289 = 1;
}

int func_620(int iParam0)
{
	int iVar0;

	iVar0 = func_692(iParam0);
	if (iVar0 < 337)
	{
		return 0;
	}
	return 1;
}

void func_621(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = Global_1070356->f_17915.f_20;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
		}
		else if (func_11(iVar2) != 8)
		{
		}
		else
		{
			Global_1070356->f_17915.f_19 = (Global_1070356->f_17915.f_19 || ((*Global_1055966)[iVar1 /*436*/])->f_390[iParam0]) // PointerArith;
			Global_1070356->f_17915.f_20 = (Global_1070356->f_17915.f_20 && ((*Global_1055966)[iVar1 /*436*/])->f_390.f_19[iParam0]) // PointerArith;
		}
		iVar1++;
	}
	func_862(iParam0);
	if (Global_1070356->f_17915.f_19 == &Global_1070356->f_17915[iParam0] && iVar0 == Global_1070356->f_17915.f_20)
	{
		*uParam1 = 1;
	}
	else
	{
		Global_1070356->f_17915.f_23 = 1;
	}
}

void func_622(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar2 = (Global_1070356->f_17915.f_22 + iVar1);
		if (iVar2 > 31)
		{
			bVar0 = true;
		}
		else
		{
			if (MISC::IS_BIT_SET(&(((*Global_1055966)[iParam0 /*436*/])->f_390[iParam1]), iVar2))
			{
				MISC::CLEAR_BIT(((*Global_1055966)[iParam0 /*436*/])->f_390.f_19[iParam1], iVar2);
			}
			else if (!MISC::IS_BIT_SET(&(Global_1070356->f_17915[iParam1]), iVar2))
			{
				MISC::SET_BIT(((*Global_1055966)[iParam0 /*436*/])->f_390.f_19[iParam1], iVar2);
			}
			else
			{
				iVar3 = (iParam1 * 31 + iVar2);
				if (iVar3 > 545)
				{
					bVar0 = true;
				}
				else
				{
					if (func_441(iVar3))
					{
						MISC::SET_BIT(((*Global_1055966)[iParam0 /*436*/])->f_390.f_19[iParam1], iVar2);
					}
					else
					{
						MISC::CLEAR_BIT(((*Global_1055966)[iParam0 /*436*/])->f_390.f_19[iParam1], iVar2);
					}
					iVar1++;
				}
				Global_1070356->f_17915.f_22 = iVar2 + 1;
				if (bVar0 || iVar2 == 31)
				{
					if (Global_1070356->f_17915.f_20 != &((*Global_1055966)[iParam0 /*436*/])->f_390.f_19[iParam1])
					{
						Global_1070356->f_17915.f_20 = (Global_1070356->f_17915.f_20 && ((*Global_1055966)[iParam0 /*436*/])->f_390.f_19[iParam1]) // PointerArith;
					}
					Global_1070356->f_17915.f_23 = 2;
				}
			}
		}
	}

var func_623(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (MISC::IS_BIT_SET(iParam0, iVar1))
		{
			MISC::SET_BIT(&uVar0, iVar1);
		}
		else if (!MISC::IS_BIT_SET(iParam1, iVar1))
		{
			MISC::SET_BIT(&uVar0, iVar1);
		}
		iVar1++;
	}
	return uVar0;
}

int func_624(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 2147483647)
	{
		return 0;
	}
	return 1;
}

bool func_625(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	return (iVar0 >= 0 && iVar0 < 64);
}

int func_626(struct<2> Param0)
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
	if (!func_77(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1070356->f_17817 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_77(*(Global_1070356->f_17817.f_1[iVar8 /*3*/]), &vVar3);
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

int func_627(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return 0;
	}
	return 1;
}

struct<2> func_628(int iParam0)
{
	if (!func_863(iParam0))
	{
		return func_750();
	}
	return ((*Global_1835011)[iParam0 /*72*/])->f_1;
}

int func_629(struct<2> Param0)
{
	int iVar0;

	if (&Global_1900788 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (&Global_1900788 - 1))
	{
		if (func_837(*((*Global_1900789)[iVar0 /*2*/]), Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_630(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_494(32768))
	{
		return 0;
	}
	iVar0 = func_58();
	if (func_864(&(((*Global_1835011)[iParam0 /*72*/])->f_30), 512) && !func_864(&(((*Global_1835011)[iParam0 /*72*/])->f_30), 1024))
	{
		if (func_865())
		{
			return 0;
		}
	}
	if (((*Global_1835011)[iParam0 /*72*/])->f_67)
	{
		return 0;
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1835011)[iParam0 /*72*/])->f_28))
	{
		bVar3 = ((*Global_1835011)[iParam0 /*72*/])->f_66;
		if (func_866(iParam0, iVar0))
		{
			vVar4 = { func_867(iParam0) };
			((*Global_1835011)[iParam0 /*72*/])->f_65 = VOLUME::_CREATE_VOLUME_SPHERE(vVar4, 0f, 0f, 0f, 19f, 19f, 19f);
			if (VOLUME::_DOES_VOLUME_EXIST(((*Global_1835011)[iParam0 /*72*/])->f_65))
			{
				((*Global_1835011)[iParam0 /*72*/])->f_28 = MAP::_0xA6EF0C54A3443E70(1673015813, ((*Global_1835011)[iParam0 /*72*/])->f_65);
			}
		}
		else if (bVar3)
		{
			((*Global_1835011)[iParam0 /*72*/])->f_28 = MAP::_BLIP_ADD_FOR_COORD(1673015813, func_868(iParam0));
		}
		else
		{
			((*Global_1835011)[iParam0 /*72*/])->f_28 = MAP::_BLIP_ADD_FOR_COORD(1673015813, func_869(iParam0));
		}
		((*Global_1835011)[iParam0 /*72*/])->f_29 = 1673015813;
		bVar1 = true;
		if (iParam2 != -1)
		{
			if (bVar2)
			{
				func_870(iParam2, 4194304);
			}
			else
			{
				func_633(iParam2, 4194304);
			}
		}
		MAP::SET_BLIP_FLASH_TIMER(((*Global_1835011)[iParam0 /*72*/])->f_28, 70, ((*Global_1835011)[iParam0 /*72*/])->f_3);
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1835011)[iParam0 /*72*/])->f_28))
	{
		return 0;
	}
	func_871(iParam0);
	if (bVar1)
	{
		MAP::SET_BLIP_SPRITE(((*Global_1835011)[iParam0 /*72*/])->f_28, ((*Global_1835011)[iParam0 /*72*/])->f_27, true);
		if (iVar0 != -1)
		{
			MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(((*Global_1835011)[iParam0 /*72*/])->f_28, &(((*Global_1835011)[iParam0 /*72*/])->f_42));
		}
		if (!func_864(&(((*Global_1835011)[iParam0 /*72*/])->f_30), 1024))
		{
			MAP::_0x662D364ABF16DE2F(((*Global_1835011)[iParam0 /*72*/])->f_28, 580546400);
			func_872(&(((*Global_1835011)[iParam0 /*72*/])->f_30), 1024);
		}
		if (func_864(&(((*Global_1835011)[iParam0 /*72*/])->f_30), 524288))
		{
			MAP::_0x662D364ABF16DE2F(((*Global_1835011)[iParam0 /*72*/])->f_28, -401963276);
		}
		if (func_864(&(((*Global_1835011)[iParam0 /*72*/])->f_30), 1048576))
		{
			MAP::_0x662D364ABF16DE2F(((*Global_1835011)[iParam0 /*72*/])->f_28, -1878373110);
			MAP::_0x662D364ABF16DE2F(((*Global_1835011)[iParam0 /*72*/])->f_28, 231194138);
		}
	}
	return 1;
}

bool func_631(int iParam0, int iParam1)
{
	return (func_627(iParam0) && (((*Global_1900820)[iParam0 /*2*/])->f_1 && iParam1) != 0);
}

void func_632(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	if (&Global_1900788 <= 0)
	{
		return;
	}
	if (!func_18(Param0))
	{
		return;
	}
	if (func_873(Param0))
	{
		func_874(Param0, 0, -1, 0);
	}
	iVar0 = func_629(Param0);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = iVar0;
	if (&Global_1900788 > 1)
	{
		*((*Global_1900789)[iVar1 /*2*/]) = { *((*Global_1900789)[(&Global_1900788 - 1) /*2*/]) };
		*((*Global_1900820)[iVar1 /*2*/]) = { *((*Global_1900820)[(&Global_1900788 - 1) /*2*/]) };
		func_275((*Global_1900789)[(&Global_1900788 - 1) /*2*/]);
		*((*Global_1900820)[(&Global_1900788 - 1) /*2*/]) = { Var2 };
	}
	else
	{
		func_275((*Global_1900789)[iVar1 /*2*/]);
		*((*Global_1900820)[iVar1 /*2*/]) = { Var2 };
	}
	Global_1900788 = (&Global_1900788 - 1);
	if (&Global_1900788 < 0)
	{
		Global_1900788 = 0;
	}
}

void func_633(int iParam0, int iParam1)
{
	if (!func_627(iParam0))
	{
		return;
	}
	((*Global_1900820)[iParam0 /*2*/])->f_1 = (((*Global_1900820)[iParam0 /*2*/])->f_1 - (((*Global_1900820)[iParam0 /*2*/])->f_1 && iParam1));
}

bool func_634(struct<2> Param0)
{
	return func_350(Param0) == 0;
}

void func_635(struct<2> Param0, bool bParam2)
{
	if (!func_18(Param0))
	{
		return;
	}
	if (!func_634(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_875(Param0);
	}
	func_876(Param0, 1);
	bParam2 = bParam2;
}

int func_636()
{
	return Global_1275761->f_419.f_1;
}

void func_637()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_877())
	{
		return;
	}
	if (!func_878())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = BUILTIN::SHIFT_LEFT(1, iVar0);
		iVar2 = iVar1;
		if (!func_879(iVar2))
		{
		}
		else if (!func_880(iVar2))
		{
		}
		else
		{
			func_881(iVar2);
		}
		else
		{
			iVar0++;
		}
	}
}

int func_638()
{
	return Global_1275761->f_419.f_2;
}

void func_639(int iParam0)
{
	Global_1275761->f_419.f_2 = iParam0;
}

void func_640(int iParam0)
{
	Global_1275761->f_419.f_1 = iParam0;
}

int func_641()
{
	return Global_1099294->f_341;
}

int func_642()
{
	return Global_1275761->f_374.f_3;
}

int func_643(int iParam0, int iParam1)
{
	return (*Global_1275761)[iParam0 /*37*/][iParam1];
}

int func_644(int iParam0, int iParam1)
{
	return &(((*Global_1275761)[iParam0 /*37*/])->f_3[iParam1]);
}

int func_645(int iParam0)
{
	return &(Global_1275761->f_371[iParam0]);
}

void func_646(int iParam0)
{
	((*Global_1055966)[PLAYER::PLAYER_ID() /*436*/])->f_384.f_2 = iParam0;
}

void func_647(int iParam0)
{
	((*Global_1055966)[PLAYER::PLAYER_ID() /*436*/])->f_384.f_3 = iParam0;
}

void func_648(int iParam0)
{
	((*Global_1055966)[PLAYER::PLAYER_ID() /*436*/])->f_384.f_4 = iParam0;
}

void func_649(int iParam0)
{
	((*Global_1055966)[PLAYER::PLAYER_ID() /*436*/])->f_384.f_5 = iParam0;
}

var func_650(int iParam0)
{
	return ((*Global_1055966)[iParam0 /*436*/])->f_384.f_2;
}

void func_651(var uParam0)
{
	Global_1275761->f_374.f_2 = uParam0;
}

var func_652(int iParam0)
{
	return ((*Global_1055966)[iParam0 /*436*/])->f_384.f_3;
}

void func_653(var uParam0)
{
	Global_1275761->f_374.f_3 = uParam0;
}

var func_654(int iParam0)
{
	return ((*Global_1055966)[iParam0 /*436*/])->f_384.f_4;
}

void func_655(var uParam0)
{
	Global_1275761->f_374.f_4 = uParam0;
}

var func_656(int iParam0)
{
	return ((*Global_1055966)[iParam0 /*436*/])->f_384.f_5;
}

void func_657(var uParam0)
{
	Global_1275761->f_374.f_5 = uParam0;
}

struct<4> func_658()
{
	struct<4> Var0;

	return Var0;
}

int func_659(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_660(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

int func_661(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1152215114 /* GXTEntry: "XP" */;
		case 7:
			return -390042476;
		case 12:
			return -1108993414;
		case 11:
			return -657484822;
		case 13:
			return -138573168;
		case 14:
			return -1834731109;
		case 15:
			return -2024553896;
		case 16:
			return 712011765;
		case 17:
			return -494315136;
		default:
			break;
	}
	return 0;
}

void func_662(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

void func_663(int iParam0, int iParam1, int iParam2)
{
	((*Global_1275761->f_404[iParam0 /*7*/])[iParam1 /*3*/])->f_1 = iParam2;
}

void func_664(int iParam0, int iParam1, int iParam2)
{
	(*Global_1275761->f_404[iParam0 /*7*/])[iParam1 /*3*/] = iParam2;
}

void func_665(int iParam0, int iParam1, int iParam2)
{
	((*Global_1275761->f_404[iParam0 /*7*/])[iParam1 /*3*/])->f_2 = iParam2;
}

bool func_666(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1185962->f_1 && iParam0) != 0;
}

void func_667(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	if ((!PED::_0x91A5F9CBEBB9D936(&(Global_1199613->f_1099[iParam0 /*3*/])) || (Global_1199613->f_1099[iParam0 /*3*/])->f_1 != iParam1) || (Global_1199613->f_1099[iParam0 /*3*/])->f_2 != iParam2)
	{
		func_400(iParam0);
		vVar0 = { ((*Global_1199613->f_48[iParam1 /*21*/])[iParam2 /*4*/])->f_1 };
		vVar3 = { 2f, 2f, 2f };
		Global_1199613->f_1099[iParam0 /*3*/] = PED::ADD_SCENARIO_BLOCKING_AREA((vVar0.x - vVar3.x), (vVar0.y - vVar3.y), (vVar0.z - vVar3.z), (vVar0.x + vVar3.x), (vVar0.y + vVar3.y), (vVar0.z + vVar3.z), 0, 16);
		(Global_1199613->f_1099[iParam0 /*3*/])->f_1 = iParam1;
		(Global_1199613->f_1099[iParam0 /*3*/])->f_2 = iParam2;
	}
}

int func_668(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	if (((*Global_1275140)[iParam0 /*2*/])->f_1 != iParam1)
	{
		return 0;
	}
	if (!func_523(1, iParam0))
	{
		return 0;
	}
	if (!func_523(8, iParam0))
	{
		return 0;
	}
	if (!func_523(4, iParam0))
	{
		return 0;
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1275113->f_2), iParam0))
	{
		return 0;
	}
	return 1;
}

int func_669(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	if (Global_1275113->f_22 >= 3)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!SCRIPTS::_0x72B2E00C9BAC6789(&uParam0, iVar0))
		{
		}
		else if (!func_668(iVar0, iParam1))
		{
			SCRIPTS::_0xD426E2E3288469D6(&uParam0, iVar0);
		}
		iVar0++;
	}
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam0))
	{
		return 1;
	}
	func_882(Global_1275113->f_3[Global_1275113->f_22 /*6*/]);
	Global_1275113->f_3[Global_1275113->f_22 /*6*/] = iParam1;
	(Global_1275113->f_3[Global_1275113->f_22 /*6*/])->f_2 = uParam0;
	SCRIPTS::_0xFFDDF802279BE128(&(Global_1275113->f_2), &((Global_1275113->f_3[Global_1275113->f_22 /*6*/])->f_2), &uVar1);
	Global_1275113->f_2 = uVar1;
	Global_1275113->f_22++;
	return 1;
}

void func_670(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_671(var uParam0, int iParam1, int iParam2)
{
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1275113->f_2), iParam2);
	SCRIPTS::_0xD426E2E3288469D6(&(uParam0->f_2), iParam2);
	SCRIPTS::_0xD426E2E3288469D6(&(uParam0->f_4), iParam2);
	SCRIPTS::_0xD426E2E3288469D6(&(uParam0->f_5), iParam2);
	if (uParam0->f_3 == iParam1)
	{
		uParam0->f_3 = 255;
	}
}

void func_672(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 < 0 || iParam0 >= 3)
	{
		return;
	}
	if (Global_1275113->f_22 <= 0)
	{
		return;
	}
	iVar0 = SCRIPTS::GET_BLOCK_OF_PLAYER_BITS(&(Global_1275113->f_2), 0);
	iVar1 = SCRIPTS::GET_BLOCK_OF_PLAYER_BITS(&(Global_1275113->f_2), 1);
	iVar2 = SCRIPTS::GET_BLOCK_OF_PLAYER_BITS(&((Global_1275113->f_3[iParam0 /*6*/])->f_2), 0);
	iVar3 = SCRIPTS::GET_BLOCK_OF_PLAYER_BITS(&((Global_1275113->f_3[iParam0 /*6*/])->f_2), 1);
	SCRIPTS::SET_BLOCK_OF_PLAYER_BITS(&(Global_1275113->f_2), 0, (iVar0 - iVar2));
	SCRIPTS::SET_BLOCK_OF_PLAYER_BITS(&(Global_1275113->f_2), 1, (iVar1 - iVar3));
	Global_1275113->f_22 = (Global_1275113->f_22 - 1);
	*(Global_1275113->f_3[iParam0 /*6*/]) = { *(Global_1275113->f_3[Global_1275113->f_22 /*6*/]) };
	func_882(Global_1275113->f_3[Global_1275113->f_22 /*6*/]);
}

void func_673(var uParam0)
{
	struct<24> Var0;
	int iVar24;

	Var0 = -1;
	Var0.f_1 = 7;
	Var0.f_10 = 7;
	Var0.f_18 = 2;
	*uParam0 = { Var0 };
	iVar24 = 0;
	while (iVar24 <= 6)
	{
		uParam0->f_10[iVar24] = 255;
		iVar24++;
	}
}

void func_674(var uParam0)
{
	struct<114> Var0;
	int iVar114;
	int iVar115;

	Var0.f_1 = 7;
	Var0.f_1.f_1.f_1 = -1;
	Var0.f_1.f_1.f_2 = -1;
	Var0.f_1.f_1.f_3 = 7;
	Var0.f_1.f_1.f_11 = 2;
	Var0.f_1.f_1.f_16.f_1 = -1;
	Var0.f_1.f_1.f_16.f_2 = -1;
	Var0.f_1.f_1.f_16.f_3 = 7;
	Var0.f_1.f_1.f_16.f_11 = 2;
	Var0.f_1.f_1.f_16.f_16.f_1 = -1;
	Var0.f_1.f_1.f_16.f_16.f_2 = -1;
	Var0.f_1.f_1.f_16.f_16.f_3 = 7;
	Var0.f_1.f_1.f_16.f_16.f_11 = 2;
	Var0.f_1.f_1.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_1.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_1.f_16.f_16.f_16.f_3 = 7;
	Var0.f_1.f_1.f_16.f_16.f_16.f_11 = 2;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_3 = 7;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_11 = 2;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	*uParam0 = { Var0 };
	iVar115 = 0;
	while (iVar115 < 7)
	{
		iVar114 = 0;
		while (iVar114 <= 6)
		{
			(uParam0->f_1[iVar115 /*16*/])->f_3[iVar114] = 255;
			iVar114++;
		}
		iVar115++;
	}
}

void func_675(var uParam0)
{
	struct<51> Var0;

	Var0.f_4 = 5;
	Var0.f_19 = 255;
	*uParam0 = { Var0 };
}

void func_676(var uParam0)
{
	struct<34> Var0;

	Var0.f_8 = -1;
	Var0.f_8.f_1 = -1;
	Var0.f_10 = 4;
	Var0.f_10.f_1.f_1 = -1;
	Var0.f_10.f_1.f_3.f_1 = -1;
	Var0.f_10.f_1.f_3.f_3.f_1 = -1;
	Var0.f_10.f_1.f_3.f_3.f_3.f_1 = -1;
	*uParam0 = { Var0 };
}

void func_677(var uParam0)
{
	struct<6> Var0;

	Var0.f_1 = -1;
	Var0.f_2 = 255;
	*uParam0 = { Var0 };
}

void func_678(var uParam0)
{
	var uVar0;

	*uParam0 = uVar0;
}

void func_679(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_883(&(uParam0->f_3));
	func_884(&(uParam0->f_18));
	uParam0->f_46 = 0;
	uParam0->f_47 = { 0f, 0f, 0f };
	uParam0->f_51 = -1;
	uParam0->f_52 = -1;
	uParam0->f_53 = 0;
	uParam0->f_54 = 0;
	uParam0->f_55 = { 0f, 0f, 0f };
	uParam0->f_58 = 0f;
	uParam0->f_59 = 0;
	uParam0->f_60 = 0;
	uParam0->f_61 = func_885(2880);
	uParam0->f_62 = -1;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	func_886(&(uParam0->f_65));
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = { 0f, 0f, 0f };
	uParam0->f_79 = 0f;
	func_887(&(uParam0->f_80));
	uParam0->f_122 = 0;
	uParam0->f_123 = 0;
	uParam0->f_125 = 0;
	func_886(&(uParam0->f_126));
	StringCopy(&(uParam0->f_130), "", 64);
	uParam0->f_138 = 0;
	uParam0->f_142 = 0;
	func_886(&(uParam0->f_143));
	uParam0->f_147 = -1;
	func_887(&(uParam0->f_148));
	uParam0->f_190 = 0;
	uParam0->f_191 = 0;
	uParam0->f_341 = 0f;
}

void func_680(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	func_883(&(uParam0->f_2));
	func_884(&(uParam0->f_17));
	uParam0->f_45 = 0;
	uParam0->f_46 = -1;
	uParam0->f_47 = -1;
	uParam0->f_48 = 0;
	uParam0->f_49 = 0;
	uParam0->f_50 = { 0f, 0f, 0f };
	uParam0->f_53 = 0f;
	uParam0->f_54 = 0;
	uParam0->f_55 = -1;
	uParam0->f_56 = 0;
	func_886(&(uParam0->f_57));
	uParam0->f_61 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_65 = -1;
	uParam0->f_66 = 0;
	uParam0->f_67 = 0;
	uParam0->f_68 = { 0f, 0f, 0f };
	uParam0->f_71 = 0f;
	func_886(&(uParam0->f_77));
	uParam0->f_81 = -1;
	func_887(&(uParam0->f_82));
	uParam0->f_124 = 0;
	uParam0->f_238 = 0;
	uParam0->f_239 = 0;
	func_886(&(uParam0->f_240));
	StringCopy(&(uParam0->f_244), "", 64);
	uParam0->f_253 = 0;
	func_886(&(uParam0->f_254));
	uParam0->f_258 = -1;
	func_887(&(uParam0->f_259));
	uParam0->f_301 = 0;
	uParam0->f_305 = 0;
	uParam0->f_316 = 0;
	uParam0->f_317 = 0;
	uParam0->f_318 = 0;
	uParam0->f_319 = -1;
	uParam0->f_320 = 0;
	uParam0->f_321 = 0;
	uParam0->f_321.f_1 = 0;
	uParam0->f_321.f_2 = 0;
	uParam0->f_321.f_3 = 0;
	if (MAP::DOES_BLIP_EXIST(uParam0->f_325))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_325));
	}
	if (uParam0->f_326 != 0)
	{
		_NAMESPACE71::_0x2F901291EF177B02(uParam0->f_326, 0);
		uParam0->f_326 = 0;
	}
}

void func_681(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_888(&(uParam0->f_4));
}

void func_682(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1;
	uParam0->f_8 = 0;
}

void func_683(var uParam0)
{
	*uParam0 = -1;
}

void func_684(var uParam0)
{
	func_886(uParam0);
	uParam0->f_4 = -1;
	uParam0->f_5 = 0;
	uParam0->f_6 = -1;
	uParam0->f_7 = 0;
}

void func_685(var uParam0)
{
	uParam0->f_2 = 0f;
	uParam0->f_3 = 0;
	uParam0->f_12 = -1;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0f;
	uParam0->f_9 = -1;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_15 = 0;
	uParam0->f_17 = 0;
	uParam0->f_21 = -15;
	uParam0->f_22 = 0;
}

void func_686(var uParam0)
{
	int iVar0;

	func_889(uParam0);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_3[iVar0] = 0f;
		iVar0++;
	}
}

void func_687(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
}

void func_688(var uParam0)
{
	struct<8> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_2.f_1 = -1;
	Var0.f_2.f_1.f_1 = -1;
	Var0.f_2.f_3 = -1;
	Var0.f_6 = -1;
	*uParam0 = { Var0 };
}

void func_689(var uParam0)
{
	struct<2> Var0;
	int iVar2;

	Var0 = -1;
	Var0.f_1 = -1;
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		*((*uParam0)[iVar2 /*2*/]) = { Var0 };
		iVar2++;
	}
}

void func_690(var uParam0)
{
	struct<98> Var0;

	Var0 = 32;
	Var0.f_1 = 255;
	Var0.f_1.f_3 = 255;
	Var0.f_1.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	*uParam0 = { Var0 };
}

int func_691(int iParam0)
{
	return iParam0 * 31;
}

int func_692(int iParam0)
{
	return func_691(iParam0) + 30;
}

int func_693(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return 0;
		case 2:
			return 473295046;
		case 3:
			return -1738165526;
		case 4:
			return -699277634;
		case 5:
			return 1497516462;
		case 6:
			return 2016141805;
		case 7:
			return 1010885152;
		case 8:
			return -502324015;
		case 9:
			return 1607768502;
		case 10:
			return -1852605133;
		case 11:
			return -129643890;
		case 12:
			return -1433686245;
		case 13:
			return -1711895055;
		case 14:
			return 192515737;
		case 15:
			return 426191476;
		case 16:
			return 187862543;
		case 17:
			return 417081698;
		case 18:
			return 791041526;
		case 19:
			return 965986934;
		case 20:
			return 1350371763;
		case 21:
			return -1257057567;
		case 22:
			return -1419919497;
		case 23:
			return -1718674470;
		case 24:
			return -35658630;
		case 25:
			return -2069570138;
		case 26:
			return -1838712533;
		case 27:
			return 1140218954;
		case 28:
			return -108307814;
		case 29:
			return -1123615607;
		case 30:
			return -261141318;
		case 31:
			return 440043364;
		case 32:
			return -1425209566;
		case 33:
			return -1666278201;
		case 34:
			return 405586984;
		case 35:
			return 1509509592;
		case 36:
			return -959357075;
		case 37:
			return -1311865656;
		case 38:
			return 1177464213;
		case 39:
			return 2091701359;
		case 40:
			return -919512195;
		case 41:
			return -1925798111;
		case 42:
			return 420709909;
		case 43:
			return 1703426636;
		case 44:
			return -939420910;
		case 45:
			return -1187950766;
		case 46:
			return -1170496998;
		case 47:
			return 356365161;
		case 48:
			return 753127042;
		case 49:
			return -2038424081;
		case 50:
			return 1485195808;
		case 51:
			return 1884271742;
		case 52:
			return 269047710;
		case 53:
			return -1674179981;
		case 54:
			return -1835851517;
		case 55:
			return -1838352012;
		case 56:
			return -1053549743;
		case 57:
			return -2073072369;
		case 58:
			return -741351766;
		case 59:
			return -1717960576;
		case 60:
			return 210001842;
		case 61:
			return 2037589949;
		case 62:
			return -1741667789;
		case 63:
			return -853383233;
		case 64:
			return 330026330;
		case 65:
			return -664512648;
		case 66:
			return 1691618738;
		case 67:
			return -334729750;
		case 68:
			return 1867912207;
		case 69:
			return -628542779;
		case 70:
			return 1500064347;
		case 71:
			return -1414537028;
		case 72:
			return 38162571;
		case 73:
			return 1350391819;
		case 74:
			return 54073871;
		case 75:
			return 618699440;
		case 76:
			return -748969569;
		case 77:
			return -1062490780;
		case 78:
			return -683458244;
		case 79:
			return 273461605;
		case 80:
			return 1360745816;
		case 81:
			return -857964358;
		case 82:
			return -868076593;
		case 83:
			return 1205826474;
		case 84:
			return 153152452;
		case 85:
			return 2136753624;
		case 86:
			return -796902762;
		case 87:
			return -63926460;
		case 88:
			return 374115931;
		case 89:
			return 1982676972;
		case 90:
			return -2034257789;
		case 91:
			return 1665756137;
		case 92:
			return 1766284049;
		case 93:
			return 280705402;
		case 94:
			return 1926308480;
		case 95:
			return -150493654;
		case 96:
			return -1271608261;
		case 97:
			return 1846061697;
		case 98:
			return -1145519186;
		case 99:
			return 106479759;
		case 100:
			return 1485494263;
		case 101:
			return -356975260;
		case 102:
			return -2106214197;
		case 103:
			return -1405998267;
		case 104:
			return -1029225159;
		case 105:
			return 1609506757;
		case 106:
			return 439465264;
		case 107:
			return 757752139;
		case 108:
			return 1064154891;
		case 109:
			return -468693731;
		case 110:
			return -2021582629;
		case 111:
			return -1232809834;
		case 112:
			return 141950038;
		case 113:
			return 544152906;
		case 114:
			return -1532284567;
		case 115:
			return -524145696;
		case 116:
			return 1626481264;
		case 117:
			return 282809459;
		case 118:
			return 1466547629;
		case 119:
			return -238080464;
		case 120:
			return 1015669983;
		case 121:
			return -1831552326;
		case 122:
			return -1151084372;
		case 123:
			return 1453909576;
		case 124:
			return -1223121209;
		case 125:
			return 1643531967;
		case 126:
			return 630808005;
		case 127:
			return -9438024;
		case 128:
			return -534215902;
		case 129:
			return -1215445344;
		case 130:
			return -254562075;
		case 131:
			return 320943355;
		case 132:
			return 689024866;
		case 133:
			return 1160698568;
		case 134:
			return -1179948750;
		case 135:
			return 1713221411;
		case 136:
			return 300221584;
		case 137:
			return -220282381;
		case 138:
			return -1329135070;
		case 139:
			return -1763509974;
		case 140:
			return 224551212;
		case 141:
			return -397760715;
		case 142:
			return 1074873669;
		case 143:
			return -86199844;
		case 144:
			return -1582926490;
		case 145:
			return -1579419919;
		case 146:
			return 478884033;
		case 147:
			return -191424539;
		case 148:
			return 1660024373;
		case 149:
			return -1063147448;
		case 150:
			return -950054349;
		case 151:
			return 2639906;
		case 152:
			return -80522843;
		case 153:
			return -1523910291;
		case 154:
			return -1206122982;
		case 155:
			return -666014935;
		case 156:
			return 1164928979;
		case 157:
			return 527226204;
		case 158:
			return 1213993593;
		case 159:
			return 1944170089;
		case 160:
			return -350863510;
		case 161:
			return 1557082963;
		case 162:
			return 249726958;
		case 163:
			return -1952856164;
		case 164:
			return 1433244935;
		case 165:
			return -99303535;
		case 166:
			return 1512816328;
		case 167:
			return 1207048789;
		case 168:
			return -1230112817;
		case 169:
			return -1278074582;
		case 170:
			return -1436021162;
		case 171:
			return 407136781;
		case 172:
			return -538880323;
		case 173:
			return -538889627;
		case 174:
			return -1056767524;
		case 175:
			return -182889087;
		case 176:
			return 704802028;
		case 177:
			return 588987611;
		case 178:
			return 2008888900;
		case 179:
			return 1649996811;
		case 180:
			return 227918160;
		case 181:
			return 168171957;
		case 182:
			return 1193080109;
		case 183:
			return -639037538;
		case 184:
			return -491981251;
		case 185:
			return -618620429;
		case 186:
			return 373691918;
		case 187:
			return 2019386373;
		case 188:
			return -664252410;
		case 189:
			return 2109952320;
		case 190:
			return 2024121624;
		case 191:
			return -1077783786;
		case 192:
			return -2101264851;
		case 193:
			return 1850082804;
		case 194:
			return -2058120606;
		case 195:
			return 311708813;
		case 196:
			return 434558613;
		case 197:
			return 1822001510;
		case 198:
			return -1612662716;
		case 199:
			return 1306158345;
		case 200:
			return 1952610440;
		case 201:
			return -223469678;
		case 202:
			return -404698347;
		case 203:
			return 1517904467;
		case 204:
			return 689930684;
		case 205:
			return -1957523409;
		case 206:
			return -1524512402;
		case 207:
			return 1399676951;
		case 208:
			return 1441416901;
		case 209:
			return 1410198831;
		case 210:
			return 1376646519;
		case 211:
			return 931649776;
		case 212:
			return -434590080;
		case 213:
			return 1743048395;
		case 214:
			return 449774763;
		case 215:
			return -764163380;
		case 216:
			return 1947931439;
		case 217:
			return 1186594126;
		case 218:
			return 469053995;
		case 219:
			return 476714362;
		case 220:
			return -1706438978;
		case 221:
			return -1164215952;
		case 222:
			return -1236261996;
		case 223:
			return -879507474;
		case 224:
			return 26245360;
		case 225:
			return -515561750;
		case 226:
			return -1060078174;
		case 227:
			return 817925178;
		case 228:
			return 198200492;
		case 229:
			return -1124061431;
		case 230:
			return 52706132;
		case 231:
			return -259123672;
		case 232:
			return -811637947;
		case 233:
			return 514932331;
		case 234:
			return 945612176;
		case 235:
			return -503955743;
		case 236:
			return -785605431;
		case 237:
			return -978957786;
		case 238:
			return 559573222;
		case 239:
			return -1818850842;
		case 240:
			return -792853067;
		case 241:
			return 2127577956;
		case 242:
			return 1151197909;
		case 243:
			return -1799960545;
		case 244:
			return -75024673;
		case 245:
			return 1250636944;
		case 246:
			return -828139293;
		case 247:
			return -644722288;
		case 248:
			return -789397228;
		case 249:
			return 1358491857;
		case 250:
			return 723021499;
		case 251:
			return -2022369555;
		case 252:
			return -1825294305;
		case 253:
			return -270094635;
		case 254:
			return -464836488;
		case 255:
			return -1282804314;
		case 256:
			return 1352699670;
		case 257:
			return -389056691;
		case 258:
			return -233743613;
		case 259:
			return 1203043430;
		case 260:
			return 299694527;
		case 261:
			return -1949204933;
		case 262:
			return -1824738758;
		case 263:
			return -2020023971;
		case 264:
			return 522677506;
		case 265:
			return 1522511407;
		case 266:
			return 371850993;
		case 267:
			return 2080210939;
		case 268:
			return 171499483;
		case 269:
			return 1050128548;
		case 270:
			return 868326136;
		case 271:
			return 235928616;
		case 272:
			return 345808947;
		case 273:
			return -1014145132;
		case 274:
			return -1840704908;
		case 275:
			return -25901845;
		case 276:
			return 94263042;
		case 277:
			return -2106445152;
		case 278:
			return 409602249;
		case 279:
			return 651395116;
		case 280:
			return 1488286867;
		case 281:
			return 665676602;
		case 282:
			return 8924991;
		case 283:
			return 932909855;
		case 284:
			return 2051822093;
		case 285:
			return -1241340344;
		case 286:
			return -1558439474;
		case 287:
			return 442317566;
		case 288:
			return 417525590;
		case 289:
			return 1583012985;
		case 290:
			return 479419429;
		case 291:
			return 2077022393;
		case 292:
			return 1167397384;
		case 293:
			return 2024769126;
		case 294:
			return -154581735;
		case 295:
			return 976539083;
		case 296:
			return -1530132748;
		case 297:
			return 664571177;
		case 298:
			return -349064220;
		case 299:
			return 1776302352;
		case 300:
			return -523522517;
		case 301:
			return 1591451572;
		case 302:
			return -736853952;
		case 303:
			return 1478132521;
		case 304:
			return -360036154;
		case 305:
			return 2024383613;
		case 306:
			return -622554983;
		case 307:
			return 1954026328;
		case 308:
			return -1764522338;
		case 309:
			return -76237062;
		case 310:
			return 1221801385;
		case 311:
			return -306246697;
		case 312:
			return -1847672446;
		case 313:
			return -545450213;
		case 314:
			return -1080627546;
		case 315:
			return 885203519;
		case 316:
			return 459290420;
		case 317:
			return -1700452710;
		case 318:
			return 1488453464;
		case 319:
			return -299522880;
		case 320:
			return -640663440;
		case 321:
			return -1447311849;
		case 322:
			return 302205488;
		case 323:
			return 26054262;
		case 324:
			return 2113625508;
		case 325:
			return 1549124796;
		case 326:
			return -502473159;
		case 327:
			return 229371495;
		case 328:
			return -781631220;
		case 329:
			return 1708045337;
		case 330:
			return 1166612791;
		case 331:
			return 74872959;
		case 332:
			return 1582370975;
		case 333:
			return -330120947;
		case 334:
			return -333135263;
		case 335:
			return 1908151693;
		case 336:
			return -1943021821;
		case 337:
			return -1585840296;
		case 338:
			return -510945576;
		case 339:
			return -2043909922;
		case 340:
			return -1145153057;
		case 341:
			return 589380360;
		case 342:
			return 468797819;
		case 343:
			return -632127260;
		case 344:
			return 965467037;
		case 345:
			return -209894800;
		case 346:
			return -279765076;
		case 347:
			return 1238086793;
		case 348:
			return -1344601768;
		case 349:
			return 1302228510;
		case 350:
			return -460024530;
		case 351:
			return -108780030;
		case 352:
			return 1698972798;
		case 353:
			return -1296807958;
		case 354:
			return -1283202000;
		case 355:
			return -1610966108;
		case 356:
			return -693828600;
		case 357:
			return 1321892118;
		case 358:
			return -61411516;
		case 359:
			return 582380806;
		case 360:
			return 1932172605;
		case 361:
			return 1159471771;
		case 362:
			return 784360470;
		case 363:
			return -1340339190;
		case 364:
			return 1881028477;
		case 365:
			return 1703398561;
		case 366:
			return -1209597203;
		case 367:
			return -897750037;
		case 368:
			return 929582877;
		case 369:
			return -911126844;
		case 370:
			return -355531636;
		case 371:
			return -1455998786;
		case 372:
			return -851626677;
		case 373:
			return -734416508;
		case 374:
			return -396624371;
		case 375:
			return 885777893;
		case 376:
			return 619839857;
		case 377:
			return 1744443559;
		case 378:
			return 509781469;
		case 379:
			return 885378256;
		case 380:
			return -524787708;
		case 381:
			return -1861414976;
		case 382:
			return 747514327;
		case 383:
			return -1042021329;
		case 384:
			return -591815673;
		case 385:
			return 883901517;
		case 386:
			return 1561093093;
		case 387:
			return 1287917122;
		case 388:
			return -1943367752;
		case 389:
			return -371827125;
		case 390:
			return -889906510;
		case 391:
			return 64896505;
		case 392:
			return -1161687045;
		case 393:
			return 526003171;
		case 394:
			return -895073533;
		case 395:
			return -2066272360;
		case 396:
			return 93964309;
		case 397:
			return 2103908624;
		case 398:
			return 1812677765;
		case 399:
			return -1753769127;
		case 400:
			return -947815572;
		case 401:
			return -1181950077;
		case 402:
			return -489737721;
		case 403:
			return -102827640;
		case 404:
			return -1906892166;
		case 405:
			return -2141419899;
		case 406:
			return 16844748;
		case 407:
			return 831940854;
		case 408:
			return -1387772214;
		case 409:
			return -1095341658;
		case 410:
			return -1848799275;
		case 411:
			return -1556041029;
		case 412:
			return -1808329564;
		case 413:
			return 1866434585;
		case 414:
			return 1421300489;
		case 415:
			return 1248935549;
		case 416:
			return 943561238;
		case 417:
			return -1939389836;
		case 418:
			return -243260793;
		case 419:
			return -492731190;
		case 420:
			return -839820438;
		case 421:
			return 1325325699;
		case 422:
			return -1705799799;
		case 423:
			return -89829333;
		case 424:
			return -1262828457;
		case 425:
			return -931337253;
		case 426:
			return 1494062795;
		case 427:
			return -1287894233;
		case 428:
			return 2068208444;
		case 429:
			return -1932919229;
		case 430:
			return -364475655;
		case 431:
			return -110352060;
		case 432:
			return -1023919011;
		case 433:
			return -852602679;
		case 434:
			return -297483764;
		case 435:
			return -1578292898;
		case 436:
			return 1517951665;
		case 437:
			return 1891256113;
		case 438:
			return -1319875891;
		case 439:
			return -1624627591;
		case 440:
			return -1914141706;
		case 441:
			return -74031276;
		case 442:
			return 1280406542;
		case 443:
			return 982765715;
		case 444:
			return -1120447016;
		case 445:
			return 1788424349;
		case 446:
			return 1028084603;
		case 447:
			return -1827602683;
		case 448:
			return 565812320;
		case 449:
			return 1279586666;
		case 450:
			return 1480425906;
		case 451:
			return 846837291;
		case 452:
			return 1153686207;
		case 453:
			return -70727482;
		case 454:
			return 84709454;
		case 455:
			return 799106423;
		case 456:
			return 560154875;
		case 457:
			return 2079292950;
		case 458:
			return 1521272922;
		case 459:
			return -677920206;
		case 460:
			return -414883443;
		case 461:
			return -1004266677;
		case 462:
			return -1290997627;
		case 463:
			return -1462313959;
		case 464:
			return -1882707460;
		case 465:
			return -2056579774;
		case 466:
			return -1442844448;
		case 467:
			return -1684974589;
		case 468:
			return -38135693;
		case 469:
			return 803929300;
		case 470:
			return 640520536;
		case 471:
			return -2100409704;
		case 472:
			return -604603161;
		case 473:
			return -1422877860;
		case 474:
			return 826868753;
		case 475:
			return 730069127;
		case 476:
			return -1378911044;
		case 477:
			return -1341750998;
		case 478:
			return 2068253437;
		case 479:
			return -1395855864;
		case 480:
			return -1749433374;
		case 481:
			return 1232840551;
		case 482:
			return 642824856;
		case 483:
			return -207792846;
		case 484:
			return 715735881;
		case 485:
			return 404823609;
		case 486:
			return 1126565489;
		case 487:
			return -1664435783;
		case 488:
			return -1369678628;
		case 489:
			return 2013720626;
		case 490:
			return 215903338;
		case 491:
			return -90486812;
		case 492:
			return -329176208;
		case 493:
			return -574190021;
		case 494:
			return -800891377;
		case 495:
			return -630295963;
		case 496:
			return 2127412005;
		case 497:
			return 1362354162;
		case 498:
			return 2048790450;
		case 499:
			return -101740709;
		case 500:
			return 673606600;
		case 501:
			return -895307590;
		case 502:
			return 1032791043;
		case 503:
			return 804063423;
		case 504:
			return -1573753524;
		case 505:
			return -1842033327;
		case 506:
			return -888632790;
		case 507:
			return -583127403;
		case 508:
			return -381925743;
		case 509:
			return -75928821;
		case 510:
			return 321629486;
		case 511:
			return 896725436;
		case 512:
			return -941648233;
		case 513:
			return -635323621;
		case 514:
			return 1157309080;
		case 515:
			return -797689456;
		case 516:
			return -500245243;
		case 517:
			return -211583122;
		case 518:
			return 237155783;
		case 519:
			return -1547280108;
		case 520:
			return -1719055206;
		case 521:
			return 1601722481;
		case 522:
			return -2142074819;
		case 523:
			return -226366310;
		case 524:
			return -1502194556;
		case 525:
			return -1749043433;
		case 526:
			return 1341699707;
		case 527:
			return 1666964801;
		case 528:
			return -1673998598;
		case 529:
			return -1445041595;
		case 530:
			return 148595040;
		case 531:
			return -729679654;
		case 532:
			return -448554447;
		case 533:
			return -1339871203;
		case 534:
			return -441204543;
		case 535:
			return -812641169;
		case 536:
			return -554519756;
		case 537:
			return 865557632;
		case 538:
			return 1112996351;
		case 539:
			return -1608141409;
		case 540:
			return -311373772;
		case 541:
			return 61537448;
		case 542:
			return -925071604;
		case 543:
			return 1195508693;
		case 544:
			return 1774060092;
		case 545:
			return 424920933;
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

int func_694(int iParam0)
{
	if (iParam0 == 1932172605)
	{
		return 1;
	}
	return 0;
}

bool func_695(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_890(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_620(iVar1))
	{
		if (Global_1070356->f_17915.f_24 && !func_694(iParam0))
		{
			return false;
		}
		return (MISC::IS_BIT_SET(&(Global_1070356->f_17915[iVar1]), iVar2) || MISC::IS_BIT_SET(&(Global_39.f_106[iVar1]), iVar2));
	}
	return MISC::IS_BIT_SET(&(Global_39.f_106[iVar1]), iVar2);
}

bool func_696(vector3 vParam0, float fParam3)
{
	return BUILTIN::VDIST(Global_35, vParam0) < fParam3;
}

int func_697(int iParam0, float fParam1, float fParam2)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;

	if (!STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		return 1;
	}
	if (!STREAMING::_0x9C77964B0E07B633(iParam0, &vVar0, &fVar3))
	{
		return 0;
	}
	fVar4 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_34, true, false), vVar0);
	if (fVar4 <= fParam1)
	{
		return 0;
	}
	if (fVar4 > fParam2)
	{
		return 1;
	}
	if (CAM::IS_SPHERE_VISIBLE(vVar0, fVar3))
	{
		return 0;
	}
	return 1;
}

int func_698()
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(Global_34) && !ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_34);
		if (iVar0 != 0 && INTERIOR::_GET_INTERIOR_MINIMAP_HASH(iVar0) == 768224943)
		{
			return 1;
		}
	}
	return 0;
}

int func_699(int iParam0)
{
	switch (iParam0)
	{
		case 1812677765:
			return 1093030199;
		case -1753769127:
			return -1423344014;
		case -947815572:
			return 1437809535;
		case -1181950077:
			return -1862782800;
		case -489737721:
			return 1748373207;
		case -102827640:
			return -736226816;
		case -1906892166:
			return 1497923922;
		case -2141419899:
			return 87946549;
		case 16844748:
			return 104172940;
		case 831940854:
			return -2054468361;
		case -1387772214:
			return 42616763;
		case -1095341658:
			return -948864541;
		case -1848799275:
			return 879263546;
		case -1556041029:
			return -751879320;
		case -1808329564:
			return -864071044;
		case 1866434585:
			return 1779169712;
		case 1421300489:
			return 1083754485;
		case 1248935549:
			return 815958096;
		case 943561238:
			return 1532789536;
		case -1939389836:
			return 1916363327;
		case -243260793:
			return -536919806;
		case -492731190:
			return -1774606389;
		case -839820438:
			return 999671710;
		case 1325325699:
			return -1051551519;
		case -1705799799:
			return 1303507358;
		case -89829333:
			return -519371139;
		case -1262828457:
			return 120604643;
		case -931337253:
			return -1819679999;
		case 1494062795:
			return -2145807603;
		case -1287894233:
			return -583431154;
		case 2068208444:
			return 1096335200;
		case -1932919229:
			return -270131786;
		case -364475655:
			return 242017654;
		case -110352060:
			return 120283199;
		case -1023919011:
			return 2127497940;
		case -852602679:
			return -1643311717;
		case -297483764:
			return -1765524972;
		case -1578292898:
			return 1364667248;
		case 1517951665:
			return -680105331;
		case 1891256113:
			return -252982535;
		case -1624627591:
			return 908136834;
		case -1914141706:
			return 1657354548;
		case -74031276:
			return -2001856298;
		case 1280406542:
			return 1108419054;
		case 982765715:
			return 1665904081;
		case -1120447016:
			return -1279448947;
		case 1788424349:
			return -2143372379;
		case 1028084603:
			return -1279389329;
		case -1827602683:
			return -1954638951;
		case 565812320:
			return 574916087;
		case 1279586666:
			return 1793712122;
		case 1480425906:
			return -847027479;
		case 846837291:
			return -946682429;
		case 1153686207:
			return 67603480;
		case -70727482:
			return 1991561012;
		case 84709454:
			return 1292550073;
		case 799106423:
			return -233702408;
		case 560154875:
			return -284530484;
		case 2079292950:
			return 1510796294;
		case 1521272922:
			return 616635225;
		case -677920206:
			return -25254585;
		case -414883443:
			return -1058872649;
		case -1004266677:
			return -1818498296;
		case -1290997627:
			return -657334314;
		case -1462313959:
			return -2144326250;
		case -1882707460:
			return -199228359;
		case -2056579774:
			return 806606916;
		case -1442844448:
			return 2137579614;
		case -1684974589:
			return -476328287;
		case -38135693:
			return -2025289364;
		case 803929300:
			return 536560689;
		case -2100409704:
			return 1106131202;
		case -604603161:
			return -1428524966;
		case -1422877860:
			return 1307857318;
		case 826868753:
			return 1117275649;
		case 730069127:
			return 1628921491;
		case -1378911044:
			return -1815797865;
		case -1341750998:
			return 1673216541;
		case 2068253437:
			return 1803637785;
		case -1395855864:
			return 1812712970;
		case -1749433374:
			return 474786474;
		case 1232840551:
			return 492662035;
		case 642824856:
			return 1951742298;
		case -207792846:
			return -313167137;
		case 715735881:
			return 1673463331;
		case 404823609:
			return 568859874;
		case 1126565489:
			return -1623539657;
		case -1664435783:
			return -1939338394;
		case -1369678628:
			return -860360254;
		case 2013720626:
			return -409479737;
		case 215903338:
			return -1353663029;
		case -90486812:
			return 11141848;
		case -329176208:
			return 405359977;
		case -574190021:
			return -1754697240;
		case -800891377:
			return 1199250380;
		case -630295963:
			return 1303859698;
		case 2127412005:
			return 131702782;
		case 1362354162:
			return -1358954864;
		case 2048790450:
			return 1425800019;
		case -101740709:
			return 1216579993;
		case 673606600:
			return -1508001532;
		case -895307590:
			return 1551178888;
		case 1032791043:
			return 743168245;
		case 804063423:
			return 1098358070;
		case -1573753524:
			return -1871896679;
		case -1842033327:
			return -590242693;
		case -888632790:
			return 30280292;
		case -583127403:
			return -1211924901;
		case -381925743:
			return 2088585697;
		case -75928821:
			return -14824697;
		case 321629486:
			return -46828581;
		case 896725436:
			return -1858229297;
		case -941648233:
			return -216811017;
		case -635323621:
			return -1431123016;
		case 1157309080:
			return -1448418975;
		case -797689456:
			return -1645569664;
		case -500245243:
			return -2122265662;
		case -211583122:
			return -510114122;
		case 237155783:
			return 1857676106;
		case -1547280108:
			return -387074757;
		case -1719055206:
			return 2001473838;
		case 1601722481:
			return 1283630779;
		case -2142074819:
			return 696753474;
		case -226366310:
			return 584821987;
		case -1502194556:
			return 54505570;
		case -1749043433:
			return -894288155;
		case 1341699707:
			return 353008762;
		case 1666964801:
			return -973153750;
		case -1673998598:
			return -394475958;
		case -1445041595:
			return 1277031798;
		case 148595040:
			return -1244697162;
		case -729679654:
			return 834697453;
		case -448554447:
			return 1419259602;
		case -1339871203:
			return -378666035;
		default:
			break;
	}
	return -1554566073;
}

Vector3 func_700(int iParam0)
{
	switch (iParam0)
	{
		case -1319875891:
			return -329.744f, -151.659f, 50.562f;
		case 640520536:
			return -1519.495f, 740.865f, 124.87f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_701(int iParam0)
{
	return func_723(iParam0, 2);
}

int func_702(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = Global_1275573->f_10;
	}
	return Global_262996[iParam0 /*70*/];
}

bool func_703()
{
	return func_710() == 4;
}

bool func_704()
{
	return !func_90(2);
}

int func_705()
{
	int iVar0;

	iVar0 = func_891(PLAYER::PLAYER_ID());
	if (iVar0 != -1)
	{
		if (((*Global_1125276)[iVar0 /*27*/])->f_18.f_1 != 0 && func_235(((*Global_1125276)[iVar0 /*27*/])->f_18, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_706(var uParam0, int iParam1)
{
	func_892(uParam0, iParam1);
}

int func_707(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
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

void func_708(int iParam0)
{
	Global_1099294->f_26.f_12 = iParam0;
}

bool func_709(int iParam0)
{
	return (Global_1099294->f_4[Global_1100047[iParam0 /*2*/]] && ((*Global_1100047)[iParam0 /*2*/])->f_1) == ((*Global_1100047)[iParam0 /*2*/])->f_1;
}

int func_710()
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

void func_711(int iParam0)
{
	if (func_893(iParam0))
	{
		return;
	}
	Global_1099294->f_26.f_9 = (Global_1099294->f_26.f_9 || iParam0);
}

struct<2> func_712(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

bool func_713(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

void func_714(int iParam0)
{
	if (STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		func_470(iParam0);
	}
}

void func_715(int iParam0)
{
	if (GRAPHICS::_0xDE9BAD3292AA6D5E(iParam0))
	{
		GRAPHICS::_0xDD0BC0EDCB2162F6(iParam0);
	}
}

char* func_716(int iParam0)
{
	if (iParam0 == 2)
	{
		return "dewclm";
	}
	if (iParam0 == 4)
	{
		return "gua";
	}
	return func_463(&(((*Global_1887327)[func_506(iParam0) /*36*/])->f_23));
}

char* func_717(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "setup";
		case 1:
			return "running";
		case 2:
			if (PATHFIND::_0x5AC0944C156E5F44("bvh_nav_camp_teardown"))
			{
				PATHFIND::_0x527B97C203BB8606("bvh_nav_camp_teardown");
			}
			if (PATHFIND::_0x5AC0944C156E5F44("bvh_nav_camp_finale1"))
			{
				PATHFIND::_0x527B97C203BB8606("bvh_nav_camp_finale1");
			}
			return "teardown";
	}
	return "";
}

void func_718(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	char cVar0[64];
	struct<8> Var8;

	MemCopy(&cVar0, {((*Global_1887327)[iParam0 /*36*/])->f_23}, 8);
	StringConCat(&cVar0, "_", 64);
	StringConCat(&cVar0, func_894(iParam1), 64);
	StringConCat(&cVar0, "_", 64);
	StringConCat(&cVar0, func_895(iParam2), 64);
	Var8 = { cVar0 };
	StringConCat(&Var8, "_setup", 64);
	if (TASK::DOES_SCENARIO_GROUP_EXIST(&Var8))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED(&Var8, bParam4);
	}
	else if (bParam4)
	{
		bParam3 = true;
	}
	if (TASK::DOES_SCENARIO_GROUP_EXIST(&cVar0))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED(&cVar0, bParam3);
	}
}

float func_719(int iParam0, bool bParam1)
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

int func_720(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), iParam0))
	{
		return 1;
	}
	return 0;
}

void func_721(int iParam0)
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
		func_896(iParam0);
		return;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_897(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 1;
}

void func_722(var uParam0)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0))
	{
		return;
	}
	DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(Global_1939231->f_242.f_5, uParam0);
	func_898(uParam0);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0);
	func_899((Global_1939231->f_242.f_1186 - 1));
}

bool func_723(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1949759)[iParam0 /*23*/])->f_1 && iParam1) != 0;
}

void func_724(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_900(iParam0, 1);
	func_901(iParam0, 1);
	func_902(iParam0, 128);
}

bool func_725(int iParam0)
{
	return (Global_1276184->f_1 && iParam0) != 0;
}

bool func_726()
{
	return &Global_1048577;
}

int func_727(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;

	iVar0 = Global_1275573->f_21;
	iVar1 = func_577(iParam0);
	Var3 = { func_578(iParam0) };
	STATS::STAT_ID_GET_INT(&Var3, &iVar2);
	if (iVar2 == 0 || (iVar2 + iVar1) > iVar0)
	{
		return 1;
	}
	return 0;
}

void func_728(int iParam0)
{
	Global_1276184->f_1 = (Global_1276184->f_1 - (Global_1276184->f_1 && iParam0));
}

int func_729(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	return DATAFILE::_DATAFILE_GET_NUM_NODES(uParam0);
}

int func_730(int iParam0, int iParam1)
{
	var uVar0;

	if (!func_589(&uVar0))
	{
		return 0;
	}
	if (!func_590(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 16, 0, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 41, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 42, iParam1, 0, 1))
	{
		return 0;
	}
	return func_903(&uVar0);
}

int func_731(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_904(bParam1, 1, 0);
	iVar1 = func_905(iParam0);
	return (BUILTIN::FLOOR(func_906(2f, BUILTIN::TO_FLOAT((iVar1 - 1)))) + iVar0) + 1;
}

var func_732(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = (func_731(iParam0, 1) - 1);
	iVar3 = func_907(iParam0);
	iVar1 = func_908(iParam0, iParam1);
	if (iVar1 == -1 || iVar1 > iVar3)
	{
		iVar1 = 0;
		iVar2 = 0;
	}
	else
	{
		iVar2 = BUILTIN::FLOOR(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(iVar0)));
	}
	return (iVar1 || iVar2);
}

int func_733(var uParam0)
{
	return func_909(uParam0, 71, 1);
}

struct<4> func_734(int iParam0)
{
	struct<5> Var0;
	struct<4> Var5;
	struct<4> Var9;

	if (!func_589(&Var0))
	{
		return Var9;
	}
	if (!func_590(&Var0, 13, 0, 0, 1))
	{
		return Var9;
	}
	if (!func_590(&Var0, 14, 0, 0, 1))
	{
		return Var9;
	}
	if (!func_590(&Var0, 38, iParam0, 0, 1))
	{
		return Var9;
	}
	Var5.f_3 = iParam0;
	Var5 = func_910(&Var0);
	func_911(Var0, &Var5);
	return Var5;
}

int func_735(var uParam0, int iParam1)
{
	struct<4> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_2 = -1;
	Var0.f_3.f_3 = -1;
	Var0.f_3.f_4 = -1;
	Var0.f_3 = { func_584(iParam1) };
	if (uParam0->f_1 & 2 != 0)
	{
		if (func_307() != 0)
		{
			return 0;
		}
	}
	if (uParam0->f_1 & 1 != 0)
	{
		if (NETWORK::_0xFBE782B3165AC8EC(*uParam0))
		{
			return 0;
		}
	}
	if (uParam0->f_1 & 4 != 0)
	{
		if (Var0.f_3 == -1 || Var0.f_3.f_1 == -1)
		{
			return 0;
		}
		if (!func_325(8))
		{
			return 0;
		}
	}
	if (uParam0->f_1 & 8 != 0)
	{
		if (Var0.f_3 == -1 || Var0.f_3.f_1 == -1)
		{
			return 0;
		}
		if (!func_557(Var0.f_3, Var0.f_3.f_1, Var0.f_3.f_2, 0))
		{
			return 0;
		}
	}
	return 1;
}

int func_736()
{
	int iVar0;
	var uVar1;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_553(iVar0, &uVar1);
		if (!func_554(&uVar1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_737(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<2> Var0;
	struct<2> Var12;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_912(iParam0, uParam1, &Var12, &Var0, iParam2, iParam3, iParam4, bParam5);
}

void func_738(int iParam0, var uParam1, int iParam2, var uParam3)
{
	func_913(iParam0, uParam1);
	func_914(iParam0, iParam2);
	func_915(iParam0, uParam3);
}

struct<4> func_739(struct<5> Param0)
{
	struct<4> Var0;

	Var0 = func_916(&Param0);
	Var0.f_1 = func_917(&Param0);
	switch (Var0)
	{
		case joaat("server"):
			Var0.f_2 = func_918(&Param0);
			break;
		case -1732594287:
			Var0.f_2 = func_919(&Param0);
			break;
		case joaat("award"):
			Var0.f_2 = func_919(&Param0);
			break;
		default:
			break;
	}
	func_920(Param0, &Var0);
	return Var0;
}

int func_740(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	struct<2> Var2;

	if (!func_921(iParam1, uParam0->f_3))
	{
		return 1;
	}
	switch (*uParam0)
	{
		case -1732594287:
			iVar0 = uParam0->f_1;
			return func_922(iVar0, uParam0->f_2);
		case joaat("server"):
			if (!BOUNTY::_0x85E4D7B225A30ED1(uParam0->f_1, &Var2))
			{
				return 0;
			}
			return Var2.f_1 >= uParam0->f_2;
		case joaat("award"):
			uVar1 = uParam0->f_1;
			return func_923(uVar1, uParam0->f_2);
		default:
			break;
	}
	return 0;
}

int func_741(var uParam0, int iParam1, int iParam2)
{
	if (!func_589(uParam0))
	{
		return 0;
	}
	if (!func_590(uParam0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_590(uParam0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_590(uParam0, 19, iParam1, 0, 1))
	{
		return 0;
	}
	if (!func_590(uParam0, 13, 0, 0, 0))
	{
		return 0;
	}
	if (!func_590(uParam0, 45, iParam2, 0, 1))
	{
		return 0;
	}
	return 1;
}

var func_742(var uParam0)
{
	return func_924(uParam0, 76, 1);
}

int func_743(var uParam0)
{
	return func_909(uParam0, 69, 1);
}

int func_744(var uParam0)
{
	return func_909(uParam0, 70, 1);
}

int func_745(var uParam0, int iParam1)
{
	return func_909(uParam0, 86, iParam1);
}

int func_746(var uParam0)
{
	return func_909(uParam0, 67, 1);
}

void func_747(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_731(iParam0, 0);
	iVar1 = func_907(iParam0);
	if (MISC::IS_BIT_SET(iParam2, iVar0))
	{
		iParam2 = (iParam2 && iVar1);
	}
	else
	{
		iParam2 = -1;
	}
	switch (iParam0)
	{
		case 0:
			uParam1->f_2 = iParam2;
			break;
		case 1:
			uParam1->f_3 = iParam2;
			break;
		case 2:
			uParam1->f_4 = iParam2;
			break;
		case 3:
			uParam1->f_1 = iParam2;
			break;
		case 4:
			*uParam1 = iParam2;
			break;
		default:
			break;
	}
}

int func_748(var uParam0)
{
	return func_909(uParam0, 59, 1);
}

int func_749(int iParam0, var uParam1, int iParam2)
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

struct<2> func_750()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

void func_751(int iParam0, var uParam1)
{
	(Global_1276184->f_55.f_4[iParam0 /*8*/])->f_3.f_2 = uParam1;
}

void func_752(int iParam0, var uParam1)
{
	(Global_1276184->f_55.f_4[iParam0 /*8*/])->f_3.f_3 = uParam1;
}

void func_753(int iParam0, var uParam1)
{
	(Global_1276184->f_55.f_4[iParam0 /*8*/])->f_3.f_4 = uParam1;
}

void func_754(int iParam0, var uParam1)
{
	(Global_1276184->f_55.f_4[iParam0 /*8*/])->f_3 = uParam1;
}

void func_755(int iParam0, var uParam1)
{
	(Global_1276184->f_55.f_4[iParam0 /*8*/])->f_3.f_1 = uParam1;
}

void func_756(int iParam0, struct<2> Param1)
{
	*(Global_1276184->f_55.f_4[iParam0 /*8*/]) = { Param1 };
}

void func_757(int iParam0, var uParam1)
{
	(Global_1276184->f_55.f_4[iParam0 /*8*/])->f_2 = uParam1;
}

int func_758(int iParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (!func_589(&uVar0))
	{
		return 0;
	}
	if (!func_590(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 19, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 20, 0, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 23, iParam1, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 24, 0, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 25, iParam2, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 46, 0, 0, 0))
	{
		return 0;
	}
	return func_729(&uVar0, 10);
}

struct<6> func_759(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8)
{
	var uVar0;
	struct<6> Var5;
	int iVar11;

	if (!func_589(&uVar0))
	{
		return Var5;
	}
	if (!func_590(&uVar0, 13, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_590(&uVar0, 17, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_590(&uVar0, 19, Param0.f_3, 0, 1))
	{
		return Var5;
	}
	if (!func_590(&uVar0, 20, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_590(&uVar0, 23, Param0.f_3.f_1, 0, 1))
	{
		return Var5;
	}
	if (!func_590(&uVar0, 24, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_590(&uVar0, 25, Param0.f_3.f_2, 0, 1))
	{
		return Var5;
	}
	if (!func_590(&uVar0, 46, 0, 0, 0))
	{
		return Var5;
	}
	if (!func_590(&uVar0, 47, iParam8, 0, 1))
	{
		return Var5;
	}
	iVar11 = func_925(&uVar0);
	return func_926(iVar11);
}

void func_760(var uParam0, int iParam1)
{
	if (!func_927(uParam0, iParam1))
	{
		return;
	}
	switch (uParam0->f_3)
	{
		case joaat("int"):
			if (STATS::CHAL_IS_GOAL_ACTIVE(uParam0->f_1, uParam0->f_2))
			{
				STATS::CHAL_ADD_GOAL_PROGRESS_INT(uParam0->f_1, uParam0->f_2, uParam0->f_4);
			}
			break;
		default:
			break;
	}
}

int func_761(int iParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (!func_589(&uVar0))
	{
		return 0;
	}
	if (!func_590(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 19, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 20, 0, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 23, iParam1, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 24, 0, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 25, iParam2, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 56, 0, 0, 0))
	{
		return 0;
	}
	return func_729(&uVar0, 12);
}

struct<5> func_762(var uParam0, int iParam1)
{
	struct<5> Var0;
	struct<5> Var5;
	var uVar10;
	var uVar11;
	int iVar12;
	var uVar13;
	var uVar14;

	if (!func_589(&Var0))
	{
		return Var5;
	}
	if (!func_590(&Var0, 13, 0, 0, 1))
	{
		return Var5;
	}
	uVar14 = Var0.f_1;
	if (!func_590(&Var0, 17, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_590(&Var0, 19, uParam0->f_3, 0, 1))
	{
		return Var5;
	}
	uVar10 = func_745(&Var0, 1);
	if (!func_590(&Var0, 20, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_590(&Var0, 23, uParam0->f_3.f_1, 0, 1))
	{
		return Var5;
	}
	uVar13 = func_746(&Var0);
	if (!func_590(&Var0, 24, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_590(&Var0, 25, uParam0->f_3.f_2, 0, 1))
	{
		return Var5;
	}
	if (!func_590(&Var0, 56, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_590(&Var0, 57, iParam1, 0, 1))
	{
		return Var5;
	}
	iVar12 = func_928(&Var0);
	Var0.f_1 = uVar14;
	if (!func_590(&Var0, 55, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_590(&Var0, 58, iVar12, 0, 1))
	{
		return Var5;
	}
	uVar11 = func_929(&Var0);
	Var5 = iVar12;
	Var5.f_2 = uVar13;
	Var5.f_3 = uVar10;
	Var5.f_1 = uVar11;
	func_930(Var0, &Var5);
	return Var5;
}

void func_763(var uParam0, int iParam1)
{
	int iVar0;
	struct<4> Var1;

	if (!func_931(uParam0, iParam1))
	{
		return;
	}
	Var1 = -1;
	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_3.f_1 = -1;
	Var1.f_3.f_2 = -1;
	Var1.f_3.f_3 = -1;
	Var1.f_3.f_4 = -1;
	Var1.f_3 = { func_584(iParam1) };
	switch (uParam0->f_1)
	{
		case 2049349725:
			MISSIONDATA::_0xE54DC27571D5EDC4(uParam0->f_2);
			switch (Var1.f_3.f_2)
			{
				case 0:
					iVar0 = 3;
					break;
				case 1:
					iVar0 = 4;
					break;
				case 2:
					iVar0 = 5;
					break;
			}
			MISSIONDATA::_0xE824CE7D13FCB300(uParam0->f_2, iVar0);
			break;
		case 759256821:
			MISSIONDATA::_0x957A830C9B4B99EA(uParam0->f_3, 0);
			break;
		default:
			break;
	}
}

int func_764(int iParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (!func_589(&uVar0))
	{
		return 0;
	}
	if (!func_590(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 19, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 20, 0, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 23, iParam1, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 24, 0, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 25, iParam2, 0, 1))
	{
		return 0;
	}
	if (!func_590(&uVar0, 36, 0, 0, 1))
	{
		return 0;
	}
	return func_729(&uVar0, 8);
}

struct<4> func_765(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8)
{
	var uVar0;
	struct<4> Var5;
	int iVar9;

	if (!func_589(&uVar0))
	{
		return Var5;
	}
	if (!func_590(&uVar0, 13, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_590(&uVar0, 17, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_590(&uVar0, 19, Param0.f_3, 0, 1))
	{
		return Var5;
	}
	if (!func_590(&uVar0, 20, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_590(&uVar0, 23, Param0.f_3.f_1, 0, 1))
	{
		return Var5;
	}
	if (!func_590(&uVar0, 24, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_590(&uVar0, 25, Param0.f_3.f_2, 0, 1))
	{
		return Var5;
	}
	if (!func_590(&uVar0, 36, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_590(&uVar0, 37, iParam8, 0, 1))
	{
		return Var5;
	}
	iVar9 = func_733(&uVar0);
	return func_734(iVar9);
}

void func_766(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = func_932(iVar0);
	if (!func_466(iVar1))
	{
		return;
	}
	if (iVar1 != iParam0)
	{
		func_933(iParam0, 7);
		func_933(iParam0, 8);
	}
	Var2 = { func_799(iVar1) };
	switch (func_934(iVar1))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			if (func_18(Var2.f_5))
			{
				if (!func_935(iVar0, iVar1, 8) && func_838(iVar1, 1))
				{
					func_936(Var2.f_5);
					func_937(iVar1, 8);
				}
				if (func_938(Var2.f_5))
				{
					func_937(iVar1, 2);
					func_933(iVar1, 5);
				}
				else if (func_873(Var2.f_5))
				{
					func_937(iVar1, 1);
					func_933(iVar1, 6);
				}
				else
				{
					func_939(Var2);
					func_937(iVar1, 4);
					func_933(iVar1, 3);
				}
			}
			else
			{
				func_933(iVar1, 7);
			}
			break;
		case 8:
			if (Global_1103537->f_19)
			{
				if (func_838(iVar1, 4))
				{
				}
				else
				{
					func_940();
				}
				func_941(iVar1);
				func_942(1);
				func_942(0);
			}
			else
			{
				func_940();
				func_941(iVar1);
				func_942(1);
				func_942(0);
			}
			break;
	}
}

void func_767(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = func_932(iVar0);
	if (!func_466(iVar1))
	{
		return;
	}
	Var2 = { func_799(iParam0) };
	switch (func_934(iVar1))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			if (func_18(Var2.f_5))
			{
				if (!func_935(iVar0, iParam0, 8) && func_838(iParam0, 1))
				{
					func_936(Var2.f_5);
					func_937(iParam0, 8);
				}
				if (func_938(Var2.f_5))
				{
					func_937(iParam0, 2);
					func_933(iParam0, 5);
				}
				else if (func_873(Var2.f_5))
				{
					func_937(iParam0, 1);
					func_933(iParam0, 6);
				}
				else
				{
					func_939(Var2);
					func_937(iParam0, 4);
					func_933(iParam0, 3);
				}
			}
			else
			{
				func_933(iParam0, 7);
			}
			break;
		case 8:
			if (Global_1103537->f_19)
			{
				if (func_838(iVar1, 4))
				{
				}
				else
				{
					func_940();
				}
				func_941(iVar1);
				func_942(1);
				func_942(0);
			}
			else
			{
				func_940();
				func_941(iVar1);
				func_942(1);
				func_942(0);
			}
			break;
	}
}

bool func_768(int iParam0, int iParam1)
{
	return ((Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_6 && iParam1) != 0;
}

bool func_769()
{
	if (!Global_1070356->f_3)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION() || func_176())
	{
		return false;
	}
	if (!SCRIPTS::IS_THREAD_ACTIVE(&Global_1198382, false))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("net_ambient_content_evaluator", -1, true, 0))
	{
		return false;
	}
	return PLAYER::PLAYER_ID() == NETWORK::_0xB4A25351D79B444C(&Global_1198382);
}

void func_770(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = PLAYER::PLAYER_ID();
	Var1 = { func_943(iParam0) };
	if (func_944(iParam0) <= 0)
	{
		Var1 = { func_945(iParam0) };
		if (func_18(Var1))
		{
			func_946(iParam0);
			return;
		}
		return;
	}
	if (!func_18(Var1))
	{
		Var1 = { func_945(iParam0) };
		if (func_18(Var1))
		{
			func_946(iParam0);
			return;
		}
	}
	if (func_18(Var1))
	{
		if (!func_947(iParam0, iVar0, 0))
		{
			func_948(iParam0, Var1);
			func_949(iParam0, 0);
			if (func_768(iParam0, 256))
			{
				func_949(iParam0, 1);
			}
		}
		if (func_938(Var1))
		{
			if (func_950(iParam0, 4))
			{
				func_951(iParam0, 0, 0);
				return;
			}
			else if (func_950(iParam0, 5))
			{
				func_952(iParam0, 0);
				return;
			}
		}
	}
	switch (func_953(iParam0))
	{
		case 1:
			break;
		case 2:
			if (!func_768(iParam0, 2))
			{
				return;
			}
			if (!func_954(iParam0))
			{
				func_955(iParam0, 0);
				return;
			}
			if (!func_873(Var1) && !func_938(Var1))
			{
				if (!func_947(iParam0, iVar0, 2) && !func_947(iParam0, iVar0, 3))
				{
					if (func_950(iParam0, 3) || func_956(iParam0) == Global_1275573->f_15)
					{
						func_957(iParam0);
					}
				}
			}
			else if (!func_950(iParam0, 3) && func_956(iParam0) != Global_1275573->f_15)
			{
				func_955(iParam0, 0);
			}
			break;
		case 4:
			if (!func_768(iParam0, 2))
			{
				if (func_768(iParam0, 2048))
				{
					func_958(iParam0);
				}
				return;
			}
			if (func_873(Var1))
			{
				if (func_950(iParam0, 4))
				{
					func_959(iParam0, 0, 1, 1);
					func_951(iParam0, 0, 0);
				}
				else
				{
					func_959(iParam0, 0, 1, 1);
					func_952(iParam0, 0);
				}
			}
			else if (func_938(Var1))
			{
				func_952(iParam0, 0);
			}
			else
			{
				func_949(iParam0, 6);
			}
			if (func_960(iParam0))
			{
				func_958(iParam0);
			}
			break;
		case 5:
		case 6:
			if (func_947(iParam0, iVar0, 0))
			{
				func_946(iParam0);
			}
			break;
	}
}

void func_771(int iParam0, int iParam1, bool bParam2)
{
	func_961(iParam0, iParam1);
	if (!bParam2)
	{
		func_962(iParam0, iParam1);
	}
	else
	{
		func_963(iParam0, iParam1);
		func_964(iParam0, iParam1);
	}
}

void func_772(int iParam0)
{
	int iVar0;

	iVar0 = func_953(iParam0);
	if (iVar0 > -1 && iVar0 < 5)
	{
		if (!func_18(func_943(iParam0)))
		{
			func_965(iParam0, 5);
			return;
		}
	}
	if (!func_966(iParam0) && iVar0 < 5)
	{
		func_967(iParam0);
		func_965(iParam0, 5);
		return;
	}
	switch (iVar0)
	{
		case -1:
			if (!func_18(func_943(iParam0)))
			{
				return;
			}
			if (func_768(iParam0, 32))
			{
				((Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_8[0 /*4*/])->f_1 = iParam0;
			}
			if ((Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_5 != 255)
			{
				func_968(iParam0, (Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_5);
				func_965(iParam0, 2);
			}
			else
			{
				func_965(iParam0, 1);
			}
			break;
		case 0:
			break;
		case 1:
			if (func_969(iParam0) != 255)
			{
				func_965(iParam0, 2);
				return;
			}
			if (func_970(iParam0, 3))
			{
				func_965(iParam0, 2);
				return;
			}
			if (func_971(iParam0))
			{
				func_965(iParam0, 5);
				return;
			}
			break;
		case 2:
			if (func_969(iParam0) == 255 && !func_970(iParam0, 3))
			{
				func_965(iParam0, 4);
				return;
			}
			if (func_972(iParam0))
			{
				func_965(iParam0, 5);
				return;
			}
			if (func_970(iParam0, 4) || func_970(iParam0, 5))
			{
				func_965(iParam0, 3);
				return;
			}
			func_973(iParam0);
			break;
		case 3:
			if (func_974(iParam0))
			{
				return;
			}
			func_965(iParam0, 4);
			break;
		case 4:
			if (!func_972(iParam0))
			{
				return;
			}
			func_965(iParam0, 5);
			break;
		case 5:
			if (!func_972(iParam0))
			{
				return;
			}
			if (func_944(iParam0) > 1)
			{
				func_975(iParam0, 1);
			}
			func_965(iParam0, 6);
			break;
		case 6:
			break;
	}
}

int func_773()
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return Global_1051202->f_37;
}

struct<40> func_774(var uParam0, struct<5> Param1, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40)
{
	struct<40> Var0;
	int iVar40;
	int iVar41;

	if (Param1.f_1 != -1)
	{
		return *(uParam0->f_2[Param1.f_1 /*40*/]);
	}
	Var0 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_8 = 2;
	Var0.f_8.f_1 = -1;
	Var0.f_8.f_5 = -1;
	Var0.f_8.f_5.f_1 = -1;
	Var0.f_8.f_5.f_3 = -1;
	Var0.f_8.f_5.f_4 = -1;
	Var0.f_8.f_5.f_5 = -1;
	Var0.f_8.f_5.f_6 = -1;
	Var0.f_8.f_5.f_6.f_1 = -1;
	Var0.f_8.f_5.f_9 = 2;
	Var0.f_23.f_1 = 1024;
	Var0.f_23.f_4 = -15;
	Var0.f_23.f_5 = 255;
	Var0.f_23.f_8 = 1;
	Var0.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_23.f_13 = -1;
	iVar40 = 0;
	while (iVar40 < *uParam0)
	{
		iVar41 = ((uParam0->f_1 + iVar40) % 5);
		if ((uParam0->f_2[iVar41 /*40*/])->f_2 != Param1.f_2)
		{
		}
		else if ((uParam0->f_2[iVar41 /*40*/])->f_3 != Param1.f_3)
		{
		}
		else if ((uParam0->f_2[iVar41 /*40*/])->f_4 != Param1.f_4)
		{
		}
		else
		{
			return *(uParam0->f_2[iVar41 /*40*/]);
		}
		iVar40++;
	}
	return Var0;
}

void func_775(struct<7> Param0, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41)
{
	switch (func_976(uParam41))
	{
		case -1:
			func_977(uParam40, uParam41->f_4);
			break;
		case 0:
			if (!func_978(&Param0, uParam41))
			{
				if ((NETWORK::GET_NETWORK_TIME_ACCURATE() - uParam41->f_7) > 120000)
				{
					uParam41->f_6 = 2;
					func_979(uParam41, 3);
				}
				return;
			}
			if (func_980(&Param0) < 0)
			{
				return;
			}
			uParam41->f_1 = Param0.f_1;
			func_979(uParam41, 1);
			break;
		case 1:
			if (!func_978(&Param0, uParam41))
			{
				uParam41->f_6 = 2;
				func_979(uParam41, 3);
				return;
			}
			if (func_980(&Param0) < 1)
			{
				return;
			}
			uParam41->f_6 = Param0.f_6;
			func_979(uParam41, 2);
			break;
		case 2:
			if (!func_978(&Param0, uParam41))
			{
				if (uParam41->f_6 == -1)
				{
					uParam41->f_6 = 2;
				}
				func_979(uParam41, 3);
				return;
			}
			if (func_980(&Param0) < 3)
			{
				return;
			}
			func_979(uParam41, 3);
			break;
		case 3:
			func_979(uParam41, -1);
			break;
	}
}

int func_776(int iParam0)
{
	return &(Global_1100950->f_33[iParam0 /*16*/]);
}

int func_777(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_981(uParam0))
	{
		return -1;
	}
	iVar0 = func_982(uParam0, uParam0->f_9);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (iVar1 == uParam0->f_9)
		{
		}
		else
		{
			iVar0 = func_982(uParam0, iVar1);
			if (iVar0 != -1)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return -1;
}

int func_778(int iParam0)
{
	return (Global_1100950->f_33[iParam0 /*16*/])->f_1;
}

bool func_779(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 71);
}

void func_780(int iParam0, int iParam1)
{
	(Global_1100950->f_33[iParam0 /*16*/])->f_1 = iParam1;
}

void func_781(int iParam0)
{
	Global_1100950->f_33[iParam0 /*16*/] = 0;
}

int func_782(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(iParam0);
	if (func_466(iParam1))
	{
		if (iVar0 == func_776(iParam1))
		{
			return iParam1;
		}
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (iVar0 == func_776(iVar1))
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

int func_783(int iParam0)
{
	return (Global_1100950->f_33[iParam0 /*16*/])->f_2;
}

void func_784(int iParam0, int iParam1)
{
	Global_1100950->f_33[iParam0 /*16*/] = iParam1;
}

int func_785(int iParam0, var uParam1)
{
	if (!func_983(iParam0))
	{
		return 0;
	}
	*uParam1 = 0;
	return 1;
}

int func_786(int iParam0, var uParam1)
{
	if (!func_983(iParam0))
	{
		*uParam1 = 9;
		return 1;
	}
	if (!func_18(func_467(iParam0)))
	{
		return 0;
	}
	if (func_838(iParam0, 4))
	{
		func_984(func_467(iParam0));
		*uParam1 = 6;
		return 1;
	}
	func_985(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
	*uParam1 = 1;
	return 1;
}

int func_787(int iParam0, var uParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar12;
	int iVar13;

	if (!func_983(iParam0))
	{
		*uParam1 = 5;
		return 1;
	}
	Var0 = { func_467(iParam0) };
	if (!func_18(Var0))
	{
		*uParam1 = 6;
		return 1;
	}
	if (func_838(iParam0, 4))
	{
		func_984(func_467(iParam0));
		*uParam1 = 6;
		return 1;
	}
	Var2 = -1;
	Var2.f_1 = -1;
	Var2.f_3 = -1;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	Var2.f_6 = -1;
	Var2.f_6.f_1 = -1;
	Var2.f_9 = 2;
	Var2 = { Var0 };
	iVar12 = func_777(&Var2);
	if (func_779(iVar12))
	{
		func_780(iParam0, iVar12);
		func_985(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
		*uParam1 = 2;
		return 1;
	}
	iVar13 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (NETWORK::GET_TIME_DIFFERENCE(func_986(iParam0), iVar13) > func_987())
	{
		if (func_988(Var0, iParam0))
		{
			*uParam1 = 6;
		}
		else
		{
			*uParam1 = 7;
		}
		return 1;
	}
	return 0;
}

int func_788(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (!func_983(iParam0))
	{
		*uParam1 = 5;
		return 1;
	}
	iVar0 = func_989(iParam0);
	if (iVar0 & 2 != 0)
	{
		*uParam1 = 4;
		return 1;
	}
	if (iVar0 & 1 != 0)
	{
		*uParam1 = 3;
		return 1;
	}
	if (func_838(iParam0, 4))
	{
		func_984(func_467(iParam0));
		*uParam1 = 6;
		return 1;
	}
	iVar1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (NETWORK::GET_TIME_DIFFERENCE(func_986(iParam0), iVar1) > func_987())
	{
		if (func_988(func_467(iParam0), iParam0))
		{
			*uParam1 = 6;
		}
		else
		{
			*uParam1 = 7;
		}
		return 1;
	}
	return 0;
}

int func_789(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_989(iParam0);
	if (iVar0 & 2 != 0)
	{
		*uParam1 = 4;
		return 1;
	}
	if (func_838(iParam0, 4))
	{
		func_984(func_467(iParam0));
		*uParam1 = 6;
		return 1;
	}
	if (iVar0 & 1 != 0)
	{
		return 0;
	}
	if (func_988(func_467(iParam0), iParam0))
	{
		*uParam1 = 6;
	}
	else
	{
		*uParam1 = 7;
	}
	return 1;
}

int func_790(int iParam0, var uParam1)
{
	int iVar0;

	if (!func_983(iParam0))
	{
		*uParam1 = 5;
		return 1;
	}
	iVar0 = func_989(iParam0);
	if (iVar0 & 2 != 0)
	{
		return 0;
	}
	if (iVar0 & 1 != 0)
	{
		*uParam1 = 3;
		return 1;
	}
	if (func_838(iParam0, 4))
	{
		func_984(func_467(iParam0));
		*uParam1 = 6;
		return 1;
	}
	if (Global_1103537->f_18)
	{
		if (func_988(func_467(iParam0), iParam0))
		{
			*uParam1 = 6;
		}
		else
		{
			*uParam1 = 7;
		}
	}
	else
	{
		func_988(func_467(iParam0), iParam0);
		*uParam1 = 6;
	}
	return 1;
}

int func_791(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_989(iParam0);
	if (iVar0 & 2 != 0)
	{
		return 0;
	}
	if (iVar0 & 1 != 0)
	{
		return 0;
	}
	if (func_988(func_467(iParam0), iParam0))
	{
		*uParam1 = 6;
	}
	else
	{
		*uParam1 = 7;
	}
	return 1;
}

int func_792(int iParam0, var uParam1)
{
	struct<2> Var0;
	int iVar10;
	int iVar11;

	if (!func_18(func_467(iParam0)))
	{
		*uParam1 = 7;
		return 1;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_6.f_1 = -1;
	Var0.f_9 = 2;
	Var0 = { func_467(iParam0) };
	iVar10 = func_777(&Var0);
	if (!func_779(iVar10))
	{
		func_990(iParam0);
		*uParam1 = 7;
		return 1;
	}
	iVar11 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (NETWORK::GET_TIME_DIFFERENCE(func_986(iParam0), iVar11) > func_987())
	{
		func_984(Var0);
		func_985(iParam0, iVar11);
	}
	return 0;
}

int func_793(int iParam0, var uParam1)
{
	if (func_983(iParam0))
	{
		*uParam1 = 8;
		return 1;
	}
	else
	{
		*uParam1 = 9;
		return 1;
	}
	return 0;
}

int func_794(int iParam0, var uParam1)
{
	int iVar0;
	bool bVar1;

	bVar1 = true;
	if (Global_1103537->f_19)
	{
		iVar0 = func_991();
		if (iVar0 <= 1)
		{
			if (func_838(iParam0, 4))
			{
				bVar1 = false;
			}
			else
			{
				bVar1 = true;
			}
		}
		else
		{
			bVar1 = true;
		}
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		if (NETWORK::_0x51F33DBC1A41CBFD() & 9 != 0 && func_838(iParam0, 1))
		{
			if (NETWORK::GET_TIME_DIFFERENCE(func_992(), NETWORK::GET_NETWORK_TIME_ACCURATE()) > 5000)
			{
				func_993();
				func_423();
			}
			return 0;
		}
	}
	func_994(iParam0);
	*uParam1 = -1;
	return 1;
}

int func_795(int iParam0, var uParam1)
{
	switch (func_796(iParam0))
	{
		case 0:
			return func_995(iParam0, uParam1);
		case 1:
			return func_996(iParam0, uParam1);
		default:
			break;
	}
	return 0;
}

int func_796(int iParam0)
{
	return (Global_1100950->f_33[iParam0 /*16*/])->f_3.f_2;
}

void func_797(int iParam0, var uParam1, int iParam2)
{
	(Global_1100950->f_33[iParam0 /*16*/])->f_2 = uParam1;
}

void func_798(int iParam0, int iParam1)
{
	(*Global_1103537)[iParam0] = iParam1;
}

struct<13> func_799(int iParam0)
{
	return (Global_1100950->f_33[iParam0 /*16*/])->f_3;
}

bool func_800(struct<2> Param0, int iParam2)
{
	return (!func_837(func_997(), Param0) || func_998() != iParam2);
}

void func_801(var uParam0)
{
	Global_1103537->f_11 = { *uParam0 };
}

bool func_802(int iParam0, int iParam1)
{
	return (((*Global_1122836)[iParam0 /*54*/])->f_34 && iParam1) != 0;
}

struct<2> func_803()
{
	return Global_1124790->f_5.f_3;
}

struct<2> func_804()
{
	return Global_1103537->f_21.f_12.f_23;
}

int func_805()
{
	return Global_1124790->f_5.f_7;
}

int func_806()
{
	return Global_1124790->f_24;
}

int func_807()
{
	return Global_1103537->f_21.f_12.f_20;
}

int func_808()
{
	return Global_1103537->f_21.f_12.f_2;
}

bool func_809(int iParam0)
{
	return func_496(1, iParam0);
}

void func_810()
{
	func_999(-1);
	func_1000(-1);
	func_1001(-1);
	func_1002();
	func_1003();
}

int func_811()
{
	return Global_1103537->f_21.f_12.f_8;
}

void func_812(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	((*Global_1122836)[iVar0 /*54*/])->f_34 = (((*Global_1122836)[iVar0 /*54*/])->f_34 - (((*Global_1122836)[iVar0 /*54*/])->f_34 && iParam0));
}

void func_813(int iParam0)
{
	Global_1103537->f_21.f_12.f_8 = iParam0;
}

void func_814(struct<2> Param0)
{
	Global_1103537->f_21.f_12.f_9 = { Param0 };
}

int func_815()
{
	return Global_1103537->f_21.f_12;
}

void func_816(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	((*Global_1122836)[iVar0 /*54*/])->f_34 = (((*Global_1122836)[iVar0 /*54*/])->f_34 || iParam0);
}

bool func_817(int iParam0)
{
	return func_713(&(Global_1103537->f_1739.f_6), iParam0, 2);
}

void func_818(int iParam0)
{
	if (func_483((*Global_1124565)[PLAYER::PLAYER_ID() /*7*/], iParam0, 2))
	{
	}
}

void func_819(int iParam0)
{
	if (func_482((*Global_1124565)[PLAYER::PLAYER_ID() /*7*/], iParam0, 2))
	{
	}
}

bool func_820(int iParam0)
{
	return func_713(&(Global_1103537->f_1739.f_9), iParam0, 3);
}

void func_821(int iParam0)
{
	if (func_483(&(((*Global_1124565)[PLAYER::PLAYER_ID() /*7*/])->f_3), iParam0, 3))
	{
	}
}

void func_822(int iParam0)
{
	if (func_482(&(((*Global_1124565)[PLAYER::PLAYER_ID() /*7*/])->f_3), iParam0, 3))
	{
	}
}

int func_823(int iParam0)
{
	int iVar0;

	iVar0 = func_1004(iParam0);
	if (iVar0 < 0)
	{
		return 1;
	}
	return func_1005(Global_1132968->f_11.f_3216.f_1091[iVar0 /*4*/], 1);
}

void func_824(int iParam0)
{
	if (((*Global_1122836)[PLAYER::PLAYER_ID() /*54*/])->f_46 == iParam0)
	{
		return;
	}
	((*Global_1122836)[PLAYER::PLAYER_ID() /*54*/])->f_46 = iParam0;
}

bool func_825(int iParam0, int iParam1)
{
	return (((*Global_1122836)[iParam0 /*54*/])->f_52.f_1 && iParam1) != 0;
}

bool func_826(int iParam0)
{
	return (Global_1124790->f_24.f_2 && iParam0) != 0;
}

int func_827()
{
	return Global_1124790->f_24.f_5;
}

void func_828(int iParam0)
{
	struct<28> Var0;
	var uVar31;

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
	Var0.f_4 = 14;
	Var0.f_10 = PLAYER::PLAYER_ID();
	SCRIPTS::_0x31010318BA9897AC(&uVar31, iParam0);
	func_1006(&Var0, uVar31);
}

void func_829(int iParam0)
{
	Global_1124790->f_24.f_5 = iParam0;
}

void func_830(int iParam0)
{
	Global_1124790->f_24.f_2 = (Global_1124790->f_24.f_2 || iParam0);
}

bool func_831()
{
	return Global_1103537->f_21.f_107.f_6;
}

int func_832()
{
	return Global_1103537->f_21.f_107.f_5;
}

void func_833()
{
	struct<2> Var0;

	func_1007(-1);
	func_1008(-1);
	func_1009(-1);
	func_1010(func_750());
	func_1011(0);
	func_1012(0);
	func_1013(0);
	func_1014(0);
	Var0.f_1 = -1;
	func_1015(&Var0);
}

int func_834(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (iParam0 == func_776(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_835(int iParam0)
{
	struct<2> Var0;

	if (!func_1016(func_841()))
	{
		if (func_1016(func_1017(iParam0)))
		{
			func_1007(func_1017(iParam0));
		}
		else
		{
			return 0;
		}
	}
	if (!func_1018(func_840()))
	{
		if (func_1018(func_1019(iParam0)))
		{
			func_1008(func_1019(iParam0));
		}
		else
		{
			return 0;
		}
	}
	if (!func_1020(func_843()))
	{
		if (func_1020(func_1021(iParam0)))
		{
			func_1009(func_1021(iParam0));
		}
		else
		{
			return 0;
		}
	}
	if (!func_1022() && func_1024(func_1023(func_843())) == 7)
	{
		Var0.f_1 = -1;
		func_1025(iParam0, &Var0);
		if (Var0 == 0)
		{
		}
		else
		{
			func_1015(&Var0);
			func_1014(1);
		}
	}
	return 1;
}

struct<2> func_836()
{
	return Global_1103537->f_21.f_107.f_3;
}

bool func_837(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_838(int iParam0, int iParam1)
{
	return ((Global_1100950->f_33[iParam0 /*16*/])->f_3.f_8 && iParam1) != 0;
}

void func_839(var uParam0)
{
	MISC::_COPY_MEMORY(uParam0, &(Global_1103537->f_21.f_107.f_9), 4);
}

int func_840()
{
	return Global_1103537->f_21.f_107;
}

int func_841()
{
	return Global_1103537->f_21.f_107.f_1;
}

var func_842()
{
	return Global_1103537->f_21.f_107.f_7;
}

int func_843()
{
	return Global_1103537->f_21.f_107.f_2;
}

void func_844(int iParam0, int iParam1, var uParam2, int iParam3, struct<2> Param4, int iParam6, var uParam7, var uParam8, var uParam9, int iParam10)
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
	uVar31 = func_147(0, 8);
	Var0.f_6 = iParam0;
	Var0.f_5 = iParam1;
	Var0.f_11 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	Var0.f_4 = 3;
	Var0.f_9 = iParam3;
	Var0.f_14 = uParam2;
	Var0.f_7 = { Param4 };
	Var0.f_13 = iParam10;
	MISC::_COPY_MEMORY(&(Var0.f_27), &iParam6, 4);
	vVar32 = { func_1026(iParam0) };
	uVar35 = func_1027(iParam0);
	func_1028(&(Var0.f_19), Var0.f_11, vVar32, uVar35);
	func_1006(&Var0, uVar31);
}

void func_845(int iParam0, var uParam1)
{
	MISC::_COPY_MEMORY(uParam1, &(((*Global_1122836)[iParam0 /*54*/])->f_38), 4);
}

void func_846(var uParam0)
{
	func_1029(uParam0, 1);
}

bool func_847(int iParam0)
{
	return (Global_1103537->f_7560.f_2 && iParam0) != 0;
}

void func_848(var uParam0)
{
	func_1030(uParam0, 0);
}

void func_849(int iParam0)
{
	MISC::_COPY_MEMORY(&(((*Global_1122836)[PLAYER::PLAYER_ID() /*54*/])->f_38), iParam0, 4);
}

void func_850(int iParam0)
{
	Global_1103537->f_7560.f_2 = (Global_1103537->f_7560.f_2 - (Global_1103537->f_7560.f_2 && iParam0));
}

void func_851(int iParam0, var uParam1)
{
	MISC::_COPY_MEMORY(uParam1, &(((*Global_1122836)[iParam0 /*54*/])->f_42), 4);
}

void func_852(var uParam0)
{
	func_1031(uParam0, 1);
}

void func_853(var uParam0)
{
	func_1032(uParam0, 0);
}

void func_854(int iParam0)
{
	MISC::_COPY_MEMORY(&(((*Global_1122836)[PLAYER::PLAYER_ID() /*54*/])->f_42), iParam0, 4);
}

void func_855(int iParam0, var uParam1)
{
	MISC::_COPY_MEMORY(uParam1, &(((*Global_1122836)[iParam0 /*54*/])->f_48), 4);
}

void func_856(int iParam0)
{
	MISC::_COPY_MEMORY(&(Global_1103537->f_7560.f_20), iParam0, 4);
}

int func_857(int iParam0)
{
	return &(Global_1103537->f_1641.f_81[iParam0 /*4*/]);
}

int func_858(int iParam0)
{
	return (Global_1103537->f_1641.f_81[iParam0 /*4*/])->f_2;
}

bool func_859(int iParam0, int iParam1)
{
	return func_713(&(((*Global_1122836)[iParam0 /*54*/])->f_48), iParam1, 2);
}

void func_860(int iParam0)
{
	if (func_482(&(((*Global_1122836)[PLAYER::PLAYER_ID() /*54*/])->f_48), iParam0, 2))
	{
	}
}

bool func_861()
{
	return Global_1182289->f_409.f_9;
}

void func_862(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_440(iParam0);
	if (iVar0 == -1)
	{
		Global_1070356->f_17915.f_19 = &Global_1070356->f_17915[iParam0];
		return;
	}
	if (iVar0 == 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if (MISC::IS_BIT_SET(&(Global_39.f_106[iParam0]), iVar1))
		{
			MISC::SET_BIT(&(Global_1070356->f_17915.f_19), iVar1);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1070356->f_17915.f_19), iVar1);
		}
		iVar1++;
	}
}

bool func_863(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

int func_864(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_865()
{
	int iVar0;

	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) == 4);
}

int func_866(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			if (iParam0 >= 9 && iParam0 <= 25)
			{
				return 1;
			}
			break;
	}
	return 0;
}

Vector3 func_867(int iParam0)
{
	return ((*Global_1835011)[iParam0 /*72*/])->f_19;
}

Vector3 func_868(int iParam0)
{
	return ((*Global_1835011)[iParam0 /*72*/])->f_19;
}

Vector3 func_869(int iParam0)
{
	return ((*Global_1835011)[iParam0 /*72*/])->f_19;
}

void func_870(int iParam0, int iParam1)
{
	if (!func_627(iParam0))
	{
		return;
	}
	((*Global_1900820)[iParam0 /*2*/])->f_1 = (((*Global_1900820)[iParam0 /*2*/])->f_1 || iParam1);
}

void func_871(int iParam0)
{
	if (func_58() == -1)
	{
		return;
	}
	if (((*Global_1835011)[iParam0 /*72*/])->f_3 != 0 && UNLOCK::_UNLOCK_IS_UNLOCKED(((*Global_1835011)[iParam0 /*72*/])->f_3))
	{
		UNLOCK::_UNLOCK_SET_NEW(((*Global_1835011)[iParam0 /*72*/])->f_3, false);
	}
	func_1033(iParam0);
}

void func_872(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_873(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_350(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

void func_874(struct<2> Param0, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (!func_18(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (!func_938(Param0) && !func_873(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (func_1034(Param0) == 0)
	{
	}
	if ((iParam3 == 0 || iParam3 == 1) || iParam3 == 4)
	{
		if (func_350(Param0) == 3)
		{
			func_1035(1, -1706799532);
		}
		else if (func_350(Param0) == 4)
		{
			func_1035(0, -1706799532);
		}
	}
	if (func_350(Param0) == 3 || (func_350(Param0) == 1 && STATS::_0x01F4D242765C6B24(func_1034(Param0))))
	{
		if (iParam3 != -1)
		{
			func_1036(Param0, iParam3, iParam4);
		}
		else
		{
			func_1036(Param0, 2, iParam4);
		}
	}
	func_876(Param0, 0);
	if (func_837(func_205(0), Param0))
	{
		func_1037(1);
		func_1038(0);
		func_1039(0);
		func_1040(1);
	}
	func_1041(Param0);
	Global_1051202->f_44.f_1 = 1;
	iVar0 = func_1042(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		MISC::_0x1096603B519C905F("");
	}
}

void func_875(struct<2> Param0)
{
	if (func_1034(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_1034(Param0)))
	{
		STATS::_0x99230691875FC218(func_1042(Param0), func_1034(Param0), Global_35);
	}
}

void func_876(struct<2> Param0, int iParam2)
{
	if (!func_18(Param0))
	{
		return;
	}
	if (iParam2 == 0 || iParam2 == -1)
	{
		func_1043(Param0);
	}
	else
	{
		func_1044(Param0, iParam2);
	}
	func_1045();
}

bool func_877()
{
	return Global_1275761->f_419 != 0;
}

int func_878()
{
	if (_NAMESPACE71::_0xC17F69E1418CD11F(1) != 0)
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	return 1;
}

bool func_879(int iParam0)
{
	return (Global_1275761->f_419 && iParam0) != 0;
}

bool func_880(int iParam0)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;

	sVar1 = func_1046(iParam0);
	iVar2 = func_1047(iParam0);
	iVar3 = func_638();
	switch (iVar2)
	{
		case 0:
			iVar0 = func_272(MISC::_CREATE_VAR_STRING(0, sVar1), 10000, 0, 0, 0, 1);
			break;
		case 1:
			if (!MAP::DOES_BLIP_EXIST(iVar3))
			{
				iVar3 = MAP::_0x3E593DF9C2962EC6(1699087565);
				if (!MAP::DOES_BLIP_EXIST(iVar3))
				{
					return false;
				}
				MAP::SET_BLIP_SPRITE(iVar3, -1636832113, true);
				MAP::_0x662D364ABF16DE2F(iVar3, -244815569);
				func_639(iVar3);
			}
			iVar0 = func_272(MISC::_CREATE_VAR_STRING(0, sVar1, iVar3), 10000, 0, 0, 0, 1);
			break;
	}
	return iVar0 != 0;
}

void func_881(int iParam0)
{
	Global_1275761->f_419 = (Global_1275761->f_419 - (Global_1275761->f_419 && iParam0));
}

void func_882(var uParam0)
{
	struct<6> Var0;

	Var0 = -1;
	Var0.f_3 = 255;
	*uParam0 = { Var0 };
}

void func_883(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_1048(&(uParam0->f_3));
	uParam0->f_12 = 1;
	uParam0->f_13 = 0;
}

void func_884(var uParam0)
{
	func_1049(uParam0);
	uParam0->f_5 = -1;
	uParam0->f_6 = -1;
	uParam0->f_7 = 0;
	uParam0->f_8 = -1;
	uParam0->f_9 = 10;
	uParam0->f_10 = { 0f, 0f, 0f };
	uParam0->f_13 = 0f;
	uParam0->f_14 = 0f;
	uParam0->f_15 = 0f;
	uParam0->f_16 = { 0f, 0f, 0f };
	uParam0->f_19 = 0;
	uParam0->f_20 = 0;
	uParam0->f_21 = 0f;
	uParam0->f_22 = 0;
	uParam0->f_23 = -1;
	uParam0->f_24 = { 0f, 0f, 0f };
	uParam0->f_27 = 0f;
}

int func_885(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam0 <= 0)
	{
		return 0;
	}
	CLOCK::GET_POSIX_TIME(&iVar1, &iVar2, &iVar3, &iVar4, &iVar5, &iVar6);
	iVar0 = ((((((iVar1 + iVar2) + iVar3) + iVar4) + iVar5) + iVar6) + MISC::GET_RANDOM_INT_IN_RANGE(0, 60000));
	iVar0 = (iVar0 % iParam0);
	return iVar0;
}

void func_886(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_887(var uParam0)
{
	int iVar0;

	func_886(uParam0);
	uParam0->f_4 = 0;
	uParam0->f_5 = { func_658() };
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

void func_888(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1050((*uParam0)[iVar0 /*7*/]);
		iVar0++;
	}
}

void func_889(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_890(int iParam0, int iParam1)
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

int func_891(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return ((*Global_1128435)[iVar0 /*83*/])->f_38.f_3;
	}
	return -1;
}

void func_892(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_893(int iParam0)
{
	return (Global_1099294->f_26.f_9 && iParam0) == iParam0;
}

char* func_894(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DUTCH";
		case 3:
			return "BILL";
		case 1:
			return "JOHN";
		case 2:
			return "JAVIER";
		case 4:
			return "UNCLE";
		case 5:
			return "HOSEA";
		case 6:
			return "MICAH";
		case 7:
			return "CHARLES";
		case 8:
			return "SEAN";
		case 9:
			return "LENNY";
		case 13:
			return "ABIGAIL";
		case 10:
			return "KIERAN";
		case 14:
			return "JACK";
		case 15:
			return "MARYBETH";
		case 16:
			return "MOLLY";
		case 17:
			return "PEARSON";
		case 18:
			return "STRAUSS";
		case 19:
			return "GRIMSHAW";
		case 20:
			return "KAREN";
		case 21:
			return "SWANSON";
		case 22:
			return "TILLY";
		case 23:
			return "TRELAWNY";
		case 11:
			return "SADIE";
		case 24:
			return "CLEET";
		case 25:
			return "JOE";
		case 26:
			return "EAGLEFLIES";
		case 12:
			return "DOG";
		default:
			break;
	}
	return "Companion unknown";
}

char* func_895(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Morning";
		case 1:
			return "Day";
		case 2:
			return "LongDay";
		case 3:
			return "Afternoon";
		case 4:
			return "Evening";
		case 5:
			return "Night";
		default:
			break;
	}
	return "";
}

void func_896(int iParam0)
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
	func_897(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 0;
}

void func_897(int iParam0)
{
	if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 != 0)
	{
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = 0;
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 = 0;
	}
}

void func_898(var uParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0, func_1051(91));
	if (func_1052(iVar0))
	{
		_NAMESPACE71::_0x2F901291EF177B02(iVar0, 1);
	}
}

void func_899(int iParam0)
{
	Global_1939231->f_242.f_1186 = iParam0;
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_242.f_6, MISC::_0x2B6846401D68E563(BUILTIN::TO_FLOAT(Global_1939231->f_242.f_1186), 0));
}

void func_900(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		if (((*Global_1949759)[iParam0 /*23*/])->f_5 == 5 && !func_723(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949759)[iParam0 /*23*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949759)[iParam0 /*23*/])->f_3, iParam1);
		}
	}
}

void func_901(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1949759)[iParam0 /*23*/])->f_3, iParam1);
	}
}

void func_902(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949759)[iParam0 /*23*/])->f_1 = (((*Global_1949759)[iParam0 /*23*/])->f_1 || iParam1);
}

int func_903(var uParam0)
{
	return func_909(uParam0, 74, 1);
}

int func_904(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_905(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 13;
		case 2:
			return 2;
		case 3:
			return 15;
		case 4:
			return 2;
		default:
			break;
	}
	return 0;
}

float func_906(float fParam0, float fParam1)
{
	return (BUILTIN::_LOG10(fParam1) / BUILTIN::_LOG10(fParam0));
}

int func_907(int iParam0)
{
	int iVar0;

	iVar0 = func_731(iParam0, 0);
	return (BUILTIN::FLOOR(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(iVar0))) - 1);
}

int func_908(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return iParam1->f_2;
		case 1:
			return iParam1->f_3;
		case 2:
			return iParam1->f_4;
		case 3:
			return iParam1->f_1;
		case 4:
			return *iParam1;
		default:
			break;
	}
	return -1;
}

int func_909(var uParam0, int iParam1, int iParam2)
{
	var uVar0;

	uParam0->f_2 = iParam1;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, uParam0))
	{
	}
	return uVar0;
}

int func_910(var uParam0)
{
	return func_909(uParam0, 72, 1);
}

void func_911(struct<5> Param0, var uParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	uVar4 = Param0.f_1;
	iVar1 = func_729(&Param0, 4);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar2 = 0;
		Param0.f_1 = uVar4;
		if (!func_590(&Param0, 31, iVar0, 0, 1))
		{
			return;
		}
		iVar2 = func_1053(Param0, &iVar3);
		switch (iVar3)
		{
			case joaat("award"):
				uParam5->f_1 = iVar2;
				break;
			case 253781561:
				uParam5->f_2 = iVar2;
				break;
			default:
				break;
		}
		iVar0++;
	}
}

int func_912(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	var uVar2;
	struct<17> Var3;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	if (NETWORK::_0xFBE782B3165AC8EC(iParam0))
	{
		return 1;
	}
	if (bParam7)
	{
		bVar0 = (_NAMESPACE26::_0xD6F6ACF4392187FB(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) && _NAMESPACE26::_0x0F99F6436528A089(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
		bParam7 = bVar0;
	}
	POSSE::_0xC08AFF658B2E51DA(&iVar1);
	if (iVar1 != 0)
	{
		func_1054(iParam2, -372840566);
	}
	if (!bParam7)
	{
		if (!NETWORK::_0x64A36BA85CE01A81(&uVar2, &(uParam3->f_1), &(iParam2->f_1), uParam1))
		{
			return 0;
		}
	}
	else if (!NETWORK::_0x7A8E8DF782B47EB0(&uVar2, &(iParam2->f_1), uParam1))
	{
		return 0;
	}
	Var3.f_1 = 11;
	Var3.f_16 = 255;
	Var3.f_13 = iParam4;
	Var3.f_16 = iParam5;
	Var3.f_14 = iParam6;
	Var3 = { *iParam2 };
	func_1055(uParam1, iParam0, Var3);
	return 1;
}

void func_913(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(Global_1276184->f_111[iParam0 /*6*/], iParam1, 4);
}

void func_914(int iParam0, int iParam1)
{
	(Global_1276184->f_111[iParam0 /*6*/])->f_4 = iParam1;
}

void func_915(int iParam0, var uParam1)
{
	(Global_1276184->f_111[iParam0 /*6*/])->f_5 = uParam1;
}

int func_916(var uParam0)
{
	return func_909(uParam0, 62, 1);
}

int func_917(var uParam0)
{
	return func_909(uParam0, 63, 1);
}

var func_918(var uParam0)
{
	return func_924(uParam0, 61, 1);
}

int func_919(var uParam0)
{
	return func_909(uParam0, 61, 1);
}

void func_920(struct<5> Param0, var uParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	uVar4 = Param0.f_1;
	iVar1 = func_729(&Param0, 4);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar2 = 0;
		Param0.f_1 = uVar4;
		if (!func_590(&Param0, 31, iVar0, 0, 1))
		{
			return;
		}
		iVar2 = func_1053(Param0, &iVar3);
		switch (iVar3)
		{
			case -646838152:
				uParam5->f_3 = iVar2;
				break;
			default:
				break;
		}
		iVar0++;
	}
}

int func_921(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 1;
		case 2:
			return iParam1 & 2 == 0;
		case 3:
			return iParam1 & 1 == 0;
		default:
			break;
	}
	return 1;
}

int func_922(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 127786994:
			return (!UNLOCK::_UNLOCK_IS_UNLOCKED(iParam0) && !UNLOCK::_UNLOCK_IS_VISIBLE(iParam0));
		case 105823627:
			return (UNLOCK::_UNLOCK_IS_UNLOCKED(iParam0) && !UNLOCK::_UNLOCK_IS_VISIBLE(iParam0));
		case 848504716:
			return (!UNLOCK::_UNLOCK_IS_UNLOCKED(iParam0) && UNLOCK::_UNLOCK_IS_VISIBLE(iParam0));
		case 2078976555:
			return (UNLOCK::_UNLOCK_IS_UNLOCKED(iParam0) && UNLOCK::_UNLOCK_IS_VISIBLE(iParam0));
		case 1605840866:
			return (!UNLOCK::_UNLOCK_IS_UNLOCKED(iParam0) || !UNLOCK::_UNLOCK_IS_VISIBLE(iParam0));
		case -1989751792:
			return (UNLOCK::_UNLOCK_IS_UNLOCKED(iParam0) || !UNLOCK::_UNLOCK_IS_VISIBLE(iParam0));
		case 1699110072:
			return (!UNLOCK::_UNLOCK_IS_UNLOCKED(iParam0) || UNLOCK::_UNLOCK_IS_VISIBLE(iParam0));
		case 1916788071:
			return (UNLOCK::_UNLOCK_IS_UNLOCKED(iParam0) || UNLOCK::_UNLOCK_IS_VISIBLE(iParam0));
		case joaat("unlocked"):
			return UNLOCK::_UNLOCK_IS_UNLOCKED(iParam0);
		case joaat("visible"):
			return UNLOCK::_UNLOCK_IS_VISIBLE(iParam0);
		case joaat("locked"):
			return !UNLOCK::_UNLOCK_IS_UNLOCKED(iParam0);
		case joaat("hidden"):
			return !UNLOCK::_UNLOCK_IS_VISIBLE(iParam0);
		default:
			break;
	}
	return 0;
}

int func_923(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1656249757:
			return NETWORK::_0xFBE782B3165AC8EC(iParam0);
		case -1895052883:
			return !NETWORK::_0xFBE782B3165AC8EC(iParam0);
		default:
			break;
	}
	return 0;
}

var func_924(var uParam0, int iParam1, int iParam2)
{
	var uVar0;

	uParam0->f_2 = iParam1;
	if (!DATAFILE::_DATAFILE_GET_INT(&uVar0, uParam0))
	{
	}
	return uVar0;
}

int func_925(var uParam0)
{
	return func_909(uParam0, 82, 1);
}

struct<6> func_926(int iParam0)
{
	struct<5> Var0;
	struct<6> Var5;
	struct<6> Var11;

	if (!func_589(&Var0))
	{
		return Var11;
	}
	if (!func_590(&Var0, 13, 0, 0, 1))
	{
		return Var11;
	}
	if (!func_590(&Var0, 15, 0, 0, 1))
	{
		return Var11;
	}
	if (!func_590(&Var0, 48, iParam0, 0, 1))
	{
		return Var11;
	}
	Var5 = iParam0;
	Var5.f_1 = func_1056(&Var0);
	Var5.f_2 = func_1057(&Var0);
	Var5.f_3 = func_1058(&Var0);
	switch (Var5.f_3)
	{
		case joaat("int"):
			Var5.f_4 = func_1059(&Var0);
			break;
		default:
			break;
	}
	func_1060(Var0, &Var5);
	return Var5;
}

int func_927(var uParam0, int iParam1)
{
	struct<4> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_2 = -1;
	Var0.f_3.f_3 = -1;
	Var0.f_3.f_4 = -1;
	Var0.f_3 = { func_584(iParam1) };
	if (uParam0->f_5 & 1 != 0)
	{
		if (Var0.f_3 == -1 || Var0.f_3.f_1 == -1)
		{
			return 0;
		}
		if (!func_325(8))
		{
			return 0;
		}
	}
	if (uParam0->f_5 & 2 != 0)
	{
		if (Var0.f_3 == -1 || Var0.f_3.f_1 == -1)
		{
			return 0;
		}
		if (!func_557(Var0.f_3, Var0.f_3.f_1, Var0.f_3.f_2, 0))
		{
			return 0;
		}
	}
	return 1;
}

int func_928(var uParam0)
{
	return func_909(uParam0, 59, 1);
}

int func_929(var uParam0)
{
	return func_909(uParam0, 87, 1);
}

void func_930(struct<5> Param0, var uParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	uVar4 = Param0.f_1;
	iVar1 = func_729(&Param0, 4);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar2 = 0;
		Param0.f_1 = uVar4;
		if (!func_590(&Param0, 31, iVar0, 0, 1))
		{
			return;
		}
		iVar2 = func_1053(Param0, &iVar3);
		switch (iVar3)
		{
			case joaat("replay"):
				uParam5->f_4 = iVar2;
				break;
			default:
				break;
		}
		iVar0++;
	}
}

int func_931(var uParam0, int iParam1)
{
	struct<4> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_2 = -1;
	Var0.f_3.f_3 = -1;
	Var0.f_3.f_4 = -1;
	Var0.f_3 = { func_584(iParam1) };
	if (uParam0->f_4 & 1 != 0)
	{
		if (Var0.f_3 == -1 || Var0.f_3.f_1 == -1)
		{
			return 0;
		}
		if (!func_325(8))
		{
			return 0;
		}
	}
	if (uParam0->f_4 & 2 != 0)
	{
		if (Var0.f_3 == -1 || Var0.f_3.f_1 == -1)
		{
			return 0;
		}
		if (!func_557(Var0.f_3, Var0.f_3.f_1, Var0.f_3.f_2, 0))
		{
			return 0;
		}
	}
	return 1;
}

int func_932(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_465(iParam0);
	iVar1 = func_782(iParam0, iVar0);
	if (iVar0 != iVar1)
	{
		if (func_466(iVar1))
		{
			func_1061(iVar1);
			iVar0 = iVar1;
		}
	}
	return iVar0;
}

void func_933(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	((*Global_1122836)[iVar0 /*54*/])->f_1[iParam0] = (&((*Global_1122836)[iVar0 /*54*/])->f_1[iParam0] - (((*Global_1122836)[iVar0 /*54*/])->f_1[iParam0] && iParam1));
}

int func_934(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	return func_783(iParam0);
}

bool func_935(int iParam0, int iParam1, int iParam2)
{
	return (((*Global_1122836)[iParam0 /*54*/])->f_1[iParam1] && iParam2) != 0;
}

int func_936(struct<2> Param0)
{
	if (func_1062())
	{
		return 0;
	}
	if (!func_18(Param0))
	{
		return 0;
	}
	*Global_1051163 = { Param0 };
	return 1;
}

void func_937(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	((*Global_1122836)[iVar0 /*54*/])->f_1[iParam0] = (((*Global_1122836)[iVar0 /*54*/])->f_1[iParam0] || iParam1);
}

bool func_938(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_350(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_939(int iParam0)
{
	func_1063(iParam0);
}

void func_940()
{
	int iVar0;
	int iVar1;

	if (!NETWORK::NETWORK_IS_HOST())
	{
		return;
	}
	iVar0 = NETWORK::_0x51F33DBC1A41CBFD();
	iVar1 |= 8;
	if (NETWORK::_0x277865A734918AE6())
	{
		NETWORK::_0xBB51299166B844F3();
	}
	if ((iVar0 && iVar1) != 0)
	{
		iVar1 = (iVar1 && iVar0);
		NETWORK::_0x78335E12DB0BF961(iVar1);
	}
}

void func_941(int iParam0)
{
	if (!func_935(PLAYER::PLAYER_ID(), iParam0, 8))
	{
		return;
	}
	func_1064();
	Global_1103537->f_15 = 1;
	func_933(iParam0, 8);
}

void func_942(int iParam0)
{
	func_1065(iParam0);
	func_1066(iParam0, 0);
}

struct<2> func_943(int iParam0)
{
	if (iParam0 < 0)
	{
		return func_750();
	}
	return (Global_1186267->f_231[iParam0 /*15*/])->f_5;
}

int func_944(int iParam0)
{
	if (!func_779(iParam0))
	{
		return -1;
	}
	return (Global_1186267->f_231[iParam0 /*15*/])->f_1;
}

struct<2> func_945(int iParam0)
{
	return (Global_1198382->f_1[iParam0 /*10*/])->f_4;
}

void func_946(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = (Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_7;
	if (iVar1 > 1)
	{
		iVar1 = 1;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		func_1067(iParam0, iVar0);
		func_1068(iParam0, iVar0);
		iVar0++;
	}
	func_955(iParam0, 0);
	func_1069(iParam0);
	func_958(iParam0);
}

bool func_947(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::_0x255A5EF65EDA9167(iParam1))
	{
		return false;
	}
	return MISC::IS_BIT_SET((*Global_1196005)[iParam1 /*72*/][iParam0], iParam2);
}

void func_948(int iParam0, struct<2> Param1)
{
	(Global_1198382->f_1[iParam0 /*10*/])->f_4 = { Param1 };
	(Global_1198382->f_1[iParam0 /*10*/])->f_6 = func_19(Param1);
}

void func_949(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (func_947(iParam0, iVar0, iParam1))
	{
		return;
	}
	MISC::SET_BIT((*(*Global_1196005)[iVar0 /*72*/])[iParam0], iParam1);
}

int func_950(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_1070())
	{
		iVar0 = func_1071(iVar1);
		if (func_947(iParam0, iVar0, iParam1))
		{
			return 1;
		}
		iVar1++;
	}
	return func_947(iParam0, PLAYER::PLAYER_ID(), iParam1);
}

void func_951(int iParam0, bool bParam1, int iParam2)
{
	struct<2> Var0;
	bool bVar2;

	Var0 = { func_945(iParam0) };
	if (!func_18(Var0))
	{
		return;
	}
	if (func_873(Var0))
	{
		return;
	}
	if (!func_938(Var0))
	{
		return;
	}
	if (func_947(iParam0, PLAYER::PLAYER_ID(), 5))
	{
		return;
	}
	if (bParam1)
	{
		bVar2 = 4;
	}
	else
	{
		bVar2 = false;
	}
	func_874(Var0, 0, bVar2, iParam2);
	func_949(iParam0, 4);
}

void func_952(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_945(iParam0) };
	if (!func_18(Var0))
	{
		return;
	}
	if (func_873(Var0))
	{
		return;
	}
	if (!func_938(Var0))
	{
		return;
	}
	if (func_947(iParam0, PLAYER::PLAYER_ID(), 5))
	{
		return;
	}
	func_874(Var0, 0, 1, iParam1);
	func_949(iParam0, 5);
}

int func_953(int iParam0)
{
	return (Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_13;
}

int func_954(int iParam0)
{
	if (!func_966(iParam0))
	{
		return 0;
	}
	if (func_953(iParam0) >= 5)
	{
		return 0;
	}
	if (func_953(iParam0) <= 0)
	{
		return 0;
	}
	if (!func_947(iParam0, PLAYER::PLAYER_ID(), 0))
	{
		return 0;
	}
	return 1;
}

void func_955(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_945(iParam0) };
	if (!func_18(Var0))
	{
		return;
	}
	if (!func_873(Var0) && !func_938(Var0))
	{
		return;
	}
	func_1072(iParam0, 2);
	func_1072(iParam0, 3);
	func_949(iParam0, 6);
	func_874(Var0, 0, 2, iParam1);
}

int func_956(int iParam0)
{
	return (Global_1186267->f_2505[iParam0 /*6*/])->f_4;
}

void func_957(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_945(iParam0) };
	if (!func_18(Var0))
	{
		return;
	}
	if (func_873(Var0))
	{
		return;
	}
	if (func_938(Var0))
	{
		return;
	}
	func_949(iParam0, 2);
	func_1072(iParam0, 3);
	func_1072(iParam0, 6);
	func_352(Var0);
}

void func_958(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	(*(*Global_1196005)[iVar0 /*72*/])[iParam0] = 0;
}

void func_959(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0;

	Var0 = { func_945(iParam0) };
	if (!func_18(Var0))
	{
		return;
	}
	if (!func_873(Var0))
	{
		return;
	}
	if (func_938(Var0))
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	}
	if (bParam1)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
	}
	func_949(iParam0, 3);
	func_1073(Var0, 1, bParam2, bParam3);
}

bool func_960(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	iVar1 = 0;
	while (iVar1 < func_1070())
	{
		iVar0 = func_1071(iVar1);
		if (func_947(iParam0, iVar0, 2) && !((func_947(iParam0, iVar0, 4) || func_947(iParam0, iVar0, 5)) || func_947(iParam0, iVar0, 6)))
		{
			return false;
		}
		iVar1++;
	}
	Var2 = { func_945(iParam0) };
	return !(func_873(Var2) || func_938(Var2));
}

void func_961(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;

	uVar0 = func_1074(iParam0);
	uVar1 = func_1075(iParam0, iParam1);
	iVar2 = func_1076(iParam0, iParam1);
	iVar3 = func_953(iParam0);
	switch (func_1077(iParam0, iParam1))
	{
		case -1:
			if (!func_954(iParam0))
			{
				return;
			}
			func_1078(iParam0, iParam1, 1);
			break;
		case 0:
			if (!func_954(iParam0))
			{
				return;
			}
			func_1078(iParam0, iParam1, 1);
			break;
		case 1:
			if (!func_954(iParam0))
			{
				func_1079(iParam0, iParam1);
				func_1078(iParam0, iParam1, 0);
				return;
			}
			if (iVar2 < 1)
			{
				return;
			}
			if (iVar2 >= 3)
			{
				return;
			}
			func_1078(iParam0, iParam1, 2);
			break;
		case 2:
			if (!func_954(iParam0))
			{
				func_1079(iParam0, iParam1);
				func_1078(iParam0, iParam1, 0);
				return;
			}
			if (iVar2 < 1)
			{
				func_1078(iParam0, iParam1, 1);
				return;
			}
			if (iVar2 >= 3)
			{
				func_1078(iParam0, iParam1, 6);
				return;
			}
			if (!func_1080(iParam0, iParam1))
			{
				return;
			}
			func_1081(iParam0, iParam1, 0);
			func_1078(iParam0, iParam1, 3);
			break;
		case 3:
			if (!func_954(iParam0))
			{
				func_1079(iParam0, iParam1);
				func_1078(iParam0, iParam1, 0);
				return;
			}
			if (iVar2 < 1)
			{
				func_1078(iParam0, iParam1, 7);
				return;
			}
			if (iVar2 >= 3)
			{
				func_1078(iParam0, iParam1, 6);
				return;
			}
			if (!func_1082(iParam0, iParam1))
			{
				return;
			}
			func_1078(iParam0, iParam1, 4);
			break;
		case 4:
			if (!NETWORK::_0x1B89BC43B6E69107(uVar0, uVar1, true, 0))
			{
				if (!func_1083(iParam0, iParam1))
				{
					func_1084(iParam0, iParam1, 0);
					func_1085(iParam0, iParam1, 0);
					func_1078(iParam0, iParam1, 2);
				}
				return;
			}
			func_1078(iParam0, iParam1, 5);
			break;
		case 5:
			if ((func_944(iParam0) <= 0 || iVar3 >= 5) || iVar3 < 1)
			{
				func_1067(iParam0, iParam1);
			}
			if (func_1086(iParam0, iParam1))
			{
				func_1067(iParam0, iParam1);
			}
			if (NETWORK::_0x1B89BC43B6E69107(uVar0, uVar1, true, 0))
			{
				return;
			}
			if (func_1083(iParam0, iParam1))
			{
				return;
			}
			func_1084(iParam0, iParam1, 0);
			if ((func_970(iParam0, 4) || func_970(iParam0, 5)) || (func_953(iParam0) > 2 && iVar2 == 3))
			{
				func_1078(iParam0, iParam1, 6);
			}
			else
			{
				func_1085(iParam0, iParam1, 0);
				func_1078(iParam0, iParam1, 8);
			}
			break;
		case 6:
			if (!func_960(iParam0))
			{
				return;
			}
			func_1078(iParam0, iParam1, 7);
			break;
		case 7:
			func_1079(iParam0, iParam1);
			func_1078(iParam0, iParam1, 8);
			break;
		case 8:
			func_949(iParam0, 7);
			if (iVar2 == 3)
			{
				return;
			}
			func_1078(iParam0, iParam1, 1);
			func_1072(iParam0, 7);
			break;
	}
}

int func_962(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1087(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return 1;
	}
	if (!VOLUME::_0xA4A4359320345B34(iVar0))
	{
		func_1088(iParam0, iParam1, 0);
		return 1;
	}
	func_1088(iParam0, iParam1, 0);
	return 1;
}

void func_963(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_768(iParam0, 8))
	{
		return;
	}
	iVar0 = func_1089(iParam0, iParam1);
	iVar1 = func_944(iParam0);
	if (!func_966(iParam0) || func_953(iParam0) >= 5)
	{
		if (iVar0 != 1)
		{
			func_1090(iParam0, iParam1);
			func_1091(iParam0, iParam1, 1);
		}
		return;
	}
	switch (iVar0)
	{
		case -2:
			break;
		case -1:
			if (!func_18(func_943(iParam0)))
			{
				return;
			}
			if (func_1092(iParam0, iParam1) <= 0)
			{
				func_1091(iParam0, iParam1, 0);
				return;
			}
			else
			{
				if (iVar1 == 1)
				{
					func_1091(iParam0, iParam1, 5);
				}
				else
				{
					func_1091(iParam0, iParam1, 2);
				}
				return;
			}
			break;
		case 0:
			if (func_1092(iParam0, iParam1) > 0)
			{
				func_1091(iParam0, iParam1, 2);
				return;
			}
			break;
		case 1:
			func_1091(iParam0, iParam1, -1);
			break;
		case 2:
			if (func_1093(iParam0, iParam1) != 0)
			{
				func_1091(iParam0, iParam1, 4);
				return;
			}
			func_1094(iParam0, iParam1, 0);
			func_1091(iParam0, iParam1, 3);
			break;
		case 3:
			if (func_1087(iParam0, iParam1) == 0)
			{
				func_1091(iParam0, iParam1, 2);
				return;
			}
			if (func_1095(iParam0, iParam1))
			{
				func_1091(iParam0, iParam1, 4);
				return;
			}
			break;
		case 4:
			if (iVar1 == 1)
			{
				VOLUME::_0xD4FA73FE628FEC63(func_1093(iParam0, iParam1), 160);
				func_1091(iParam0, iParam1, 7);
				return;
			}
			if (!VOLUME::_0xF6A8A652A6B186CD(func_1093(iParam0, iParam1)))
			{
				func_1096(iParam0, iParam1);
				func_1091(iParam0, iParam1, 2);
				return;
			}
			break;
		case 5:
			if ((func_1076(iParam0, iParam1) == 2 || func_953(iParam0) == 2) || iVar1 > 1)
			{
				func_1091(iParam0, iParam1, 2);
				return;
			}
			break;
		case 6:
			if (func_1087(iParam0, iParam1) == 0)
			{
				func_1091(iParam0, iParam1, 5);
				return;
			}
			if ((func_1076(iParam0, iParam1) == 2 || func_953(iParam0) == 2) || iVar1 > 1)
			{
				func_962(iParam0, iParam1);
				func_1091(iParam0, iParam1, 2);
				return;
			}
			if (func_1095(iParam0, iParam1))
			{
				func_1091(iParam0, iParam1, 7);
				return;
			}
			break;
		case 7:
			if ((func_1076(iParam0, iParam1) == 2 || func_953(iParam0) == 2) || iVar1 > 1)
			{
				VOLUME::_0xD4FA73FE628FEC63(func_1093(iParam0, iParam1), 32);
				func_1091(iParam0, iParam1, 4);
				return;
			}
			if (!VOLUME::_0xF6A8A652A6B186CD(func_1093(iParam0, iParam1)))
			{
				func_1096(iParam0, iParam1);
				func_1091(iParam0, iParam1, 5);
				return;
			}
			break;
	}
}

void func_964(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;

	if (!func_768(iParam0, 16))
	{
		return;
	}
	uVar0 = func_1074(iParam0);
	uVar1 = func_1075(iParam0, iParam1);
	iVar3 = func_1076(iParam0, iParam1);
	if (iVar3 > 0)
	{
		if (!func_966(iParam0))
		{
			func_1097(iParam0, iParam1, 0);
			return;
		}
	}
	switch (iVar3)
	{
		case -1:
			if (!func_18(func_943(iParam0)))
			{
				return;
			}
			if (func_1098(iParam0, iParam1) <= 0)
			{
				func_1097(iParam0, iParam1, 0);
				return;
			}
			else
			{
				func_1097(iParam0, iParam1, 1);
				return;
			}
			break;
		case 0:
			if (!func_966(iParam0))
			{
				return;
			}
			if (func_1098(iParam0, iParam1) <= 0)
			{
				return;
			}
			iVar2 = func_1099(iParam0);
			if (iVar2 != -15 && func_1100(iVar2))
			{
				return;
			}
			func_1097(iParam0, iParam1, 1);
			break;
		case 1:
			if (func_1101(iParam0, iParam1, 0))
			{
				func_1097(iParam0, iParam1, 2);
				func_975(iParam0, 3);
				return;
			}
			break;
		case 2:
			if (!func_1101(iParam0, iParam1, 0) && !NETWORK::_0x1B89BC43B6E69107(uVar0, uVar1, false, 0))
			{
				func_1097(iParam0, iParam1, 3);
				return;
			}
			if (func_953(iParam0) >= 3)
			{
				func_1097(iParam0, iParam1, 3);
				return;
			}
			break;
		case 3:
			if (func_953(iParam0) >= 3)
			{
				return;
			}
			if (!func_1102(iParam0, iParam1))
			{
				func_1097(iParam0, iParam1, 2);
				return;
			}
			if (func_969(iParam0) != 255)
			{
				func_975(iParam0, 2);
			}
			else
			{
				func_975(iParam0, 1);
			}
			iVar2 = func_1099(iParam0);
			if (iVar2 != -15 && func_1100(iVar2))
			{
				func_1097(iParam0, iParam1, 0);
				return;
			}
			if (func_953(iParam0) >= 4)
			{
				return;
			}
			if (func_1103(iParam0, 7))
			{
				return;
			}
			func_1097(iParam0, iParam1, 1);
			break;
	}
}

void func_965(int iParam0, int iParam1)
{
	(Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_13 = iParam1;
}

bool func_966(int iParam0)
{
	bool bVar0;

	bVar0 = !func_1105(func_945(iParam0), func_1104(iParam0), 0);
	return bVar0;
}

int func_967(int iParam0)
{
	struct<15> Var0;
	struct<15> Var15;
	int iVar30;
	int iVar31;

	if (!func_779(iParam0))
	{
		return 0;
	}
	Var0 = 2;
	Var0.f_1 = -1;
	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0.f_5.f_3 = -1;
	Var0.f_5.f_4 = -1;
	Var0.f_5.f_5 = -1;
	Var0.f_5.f_6 = -1;
	Var0.f_5.f_6.f_1 = -1;
	Var0.f_5.f_9 = 2;
	Var15 = { *(Global_1186267->f_231[iParam0 /*15*/]) };
	Var0.f_1 = 0;
	*(Global_1186267->f_231[iParam0 /*15*/]) = { Var0 };
	iVar30 = Var15;
	iVar31 = Var15.f_5.f_9;
	Global_1186267->f_13[iVar31] = (&Global_1186267->f_13[iVar31] - 1);
	Global_1186267->f_8[iVar30] = (&Global_1186267->f_8[iVar30] - 1);
	if (iVar30 != iVar31)
	{
		Global_1186267->f_18[iVar30] = (&Global_1186267->f_18[iVar30] - 1);
	}
	if (func_1106(iParam0))
	{
		Global_1186267->f_23[iVar30] = (&Global_1186267->f_23[iVar30] - 1);
	}
	return 1;
}

void func_968(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	if (!NETWORK::_0x255A5EF65EDA9167(iParam1))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return;
	}
	(Global_1186267->f_2505[iParam0 /*6*/])->f_4 = _NAMESPACE26::_0x901E0DC25080C8B9(iParam1);
	(Global_1186267->f_2505[iParam0 /*6*/])->f_5 = iParam1;
}

int func_969(int iParam0)
{
	return (Global_1186267->f_2505[iParam0 /*6*/])->f_5;
}

int func_970(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
		}
		else if (func_947(iParam0, iVar0, iParam1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

bool func_971(int iParam0)
{
	int iVar0;
	var uVar1;

	if (!func_768(iParam0, 512))
	{
		return false;
	}
	iVar0 = func_1107(iParam0);
	if (iVar0 <= 0)
	{
		return false;
	}
	uVar1 = func_273(func_1108(iParam0, 0), 0f, 0f, 0f, IntToFloat(iVar0), IntToFloat(iVar0), IntToFloat(iVar0 * 2), -432403087, 0, 8);
	return SCRIPTS::COUNT_PLAYER_BITS(&uVar1) <= 0;
}

int func_972(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
		}
		else if (!func_1109(iParam0, iVar0))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_973(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (Global_1186267->f_2505[iParam0 /*6*/])->f_5;
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return;
	}
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		iVar2 = _NAMESPACE26::_0x901E0DC25080C8B9(iVar0);
		if ((Global_1186267->f_2505[iParam0 /*6*/])->f_4 != iVar2)
		{
			if ((_NAMESPACE26::_0xD6F6ACF4392187FB((Global_1186267->f_2505[iParam0 /*6*/])->f_4) && _NAMESPACE26::_0x93A91A351A07360E((Global_1186267->f_2505[iParam0 /*6*/])->f_4)) && _NAMESPACE26::_0x149A2751AB66AC02((Global_1186267->f_2505[iParam0 /*6*/])->f_4) > 0)
			{
				iVar1 = _NAMESPACE26::_0x4BE6C13A45CCA8EC((Global_1186267->f_2505[iParam0 /*6*/])->f_4);
				func_968(iParam0, iVar1);
			}
			else if (_NAMESPACE26::_0x4BE6C13A45CCA8EC(iVar2) == iVar0)
			{
				(Global_1186267->f_2505[iParam0 /*6*/])->f_4 = iVar2;
			}
			else
			{
				func_1110(iParam0);
			}
		}
		return;
	}
	if ((Global_1186267->f_2505[iParam0 /*6*/])->f_4 == 0)
	{
		func_1110(iParam0);
		return;
	}
	if (!_NAMESPACE26::_0x93A91A351A07360E((Global_1186267->f_2505[iParam0 /*6*/])->f_4))
	{
		func_1110(iParam0);
		return;
	}
	iVar1 = _NAMESPACE26::_0x4BE6C13A45CCA8EC((Global_1186267->f_2505[iParam0 /*6*/])->f_4);
	if (!NETWORK::_0x255A5EF65EDA9167(iVar1))
	{
		func_1110(iParam0);
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		func_1110(iParam0);
		return;
	}
	func_968(iParam0, iVar1);
}

int func_974(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
		}
		else if ((*Global_1196005)[iVar0 /*72*/][iParam0] > 127)
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

void func_975(int iParam0, int iParam1)
{
	(Global_1186267->f_231[iParam0 /*15*/])->f_1 = iParam1;
}

int func_976(var uParam0)
{
	return *uParam0;
}

struct<40> func_977(var uParam0, int iParam1)
{
	struct<40> Var0;

	Var0 = { func_1111(uParam0, iParam1) };
	func_1112(uParam0, iParam1);
	return Var0;
}

int func_978(var uParam0, var uParam1)
{
	if (uParam0->f_2 == -1)
	{
		return 0;
	}
	if (uParam1->f_2 == -1)
	{
		return 0;
	}
	if (uParam0->f_2 != uParam1->f_2)
	{
		return 0;
	}
	if (uParam0->f_3 != uParam1->f_3)
	{
		return 0;
	}
	if (uParam0->f_4 != -1 && uParam1->f_1 != -1)
	{
		if (uParam0->f_1 == uParam1->f_1 && uParam0->f_4 == uParam1->f_4)
		{
			return 1;
		}
		return 0;
	}
	if (uParam0->f_5 == -1)
	{
		return 0;
	}
	if (uParam1->f_5 == -1)
	{
		return 0;
	}
	if (uParam0->f_5 != uParam1->f_5)
	{
		return 0;
	}
	if (uParam0->f_7 != uParam1->f_7)
	{
		return 0;
	}
	if (uParam0->f_8 != uParam1->f_8)
	{
		return 0;
	}
	if (uParam0->f_8.f_1 != uParam1->f_8.f_1)
	{
		return 0;
	}
	if (!func_837(uParam0->f_8.f_5, uParam1->f_8.f_5))
	{
		return 0;
	}
	if (uParam0->f_8.f_5.f_2 != uParam1->f_8.f_5.f_2)
	{
		return 0;
	}
	if (uParam0->f_8.f_5.f_3 != uParam1->f_8.f_5.f_3)
	{
		return 0;
	}
	if (uParam0->f_8.f_5.f_4 != uParam1->f_8.f_5.f_4)
	{
		return 0;
	}
	if (uParam0->f_8.f_5.f_5 != uParam1->f_8.f_5.f_5)
	{
		return 0;
	}
	if (!func_837(uParam0->f_8.f_5.f_6, uParam1->f_8.f_5.f_6))
	{
		return 0;
	}
	if (uParam0->f_8.f_5.f_8 != uParam1->f_8.f_5.f_8)
	{
		return 0;
	}
	if (uParam0->f_8.f_5.f_9 != uParam1->f_8.f_5.f_9)
	{
		return 0;
	}
	return 1;
}

void func_979(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_980(var uParam0)
{
	return *uParam0;
}

int func_981(var uParam0)
{
	if (func_18(*uParam0))
	{
		return 1;
	}
	if (uParam0->f_2 != 0)
	{
		if (uParam0->f_3 != -1)
		{
			return 1;
		}
		if (uParam0->f_4 != -1)
		{
			return 1;
		}
		if (uParam0->f_5 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_982(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;

	iVar0 = func_1113(iParam1);
	iVar1 = ((&Global_1186267->f_3[iParam1] + iVar0) - 1);
	if (&Global_1186267->f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_1114(iParam1)) - 1);
	}
	bVar2 = func_18(*uParam0);
	bVar3 = (uParam0->f_2 != 0 && uParam0->f_3 != -1);
	bVar4 = (uParam0->f_2 != 0 && uParam0->f_4 != -1);
	bVar5 = (uParam0->f_2 != 0 && uParam0->f_5 != -1);
	iVar6 = iVar0;
	while (iVar6 <= iVar1)
	{
		if (bVar2)
		{
			if (func_837((Global_1186267->f_231[iVar6 /*15*/])->f_5, *uParam0))
			{
				return iVar6;
			}
		}
		if (bVar3)
		{
			if ((Global_1186267->f_231[iVar6 /*15*/])->f_5.f_2 == uParam0->f_2 && (Global_1186267->f_231[iVar6 /*15*/])->f_5.f_3 == uParam0->f_3)
			{
				return iVar6;
			}
		}
		if (bVar4)
		{
			if ((Global_1186267->f_231[iVar6 /*15*/])->f_5.f_2 == uParam0->f_2 && (Global_1186267->f_231[iVar6 /*15*/])->f_5.f_4 == uParam0->f_4)
			{
				return iVar6;
			}
		}
		if (bVar5)
		{
			if ((Global_1186267->f_231[iVar6 /*15*/])->f_5.f_2 == uParam0->f_2 && (Global_1186267->f_231[iVar6 /*15*/])->f_5.f_5 == uParam0->f_5)
			{
				return iVar6;
			}
		}
		iVar6++;
	}
	return -1;
}

int func_983(int iParam0)
{
	int iVar0;

	iVar0 = func_776(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!_NAMESPACE26::_0x93A91A351A07360E(iVar0))
	{
		return 0;
	}
	return 1;
}

void func_984(struct<2> Param0)
{
	struct<24> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_8 = 2;
	Var0.f_8.f_1 = -1;
	Var0.f_8.f_5 = -1;
	Var0.f_8.f_5.f_1 = -1;
	Var0.f_8.f_5.f_3 = -1;
	Var0.f_8.f_5.f_4 = -1;
	Var0.f_8.f_5.f_5 = -1;
	Var0.f_8.f_5.f_6 = -1;
	Var0.f_8.f_5.f_6.f_1 = -1;
	Var0.f_8.f_5.f_9 = 2;
	Var0.f_23.f_1 = 1024;
	Var0.f_23.f_4 = -15;
	Var0.f_23.f_5 = 255;
	Var0.f_23.f_8 = 1;
	Var0.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_23.f_13 = -1;
	Var0.f_2 = 0;
	Var0.f_5 = 7;
	Var0.f_8.f_1 = 2;
	Var0.f_8 = 1;
	Var0.f_8.f_5.f_9 = 1;
	Var0.f_8.f_5 = { Param0 };
	func_1115(&(Global_1100950->f_33.f_513), &Var0, 0, 0, 0, 0, 0);
}

void func_985(int iParam0, int iParam1)
{
	(Global_1100950->f_33[iParam0 /*16*/])->f_3.f_7 = iParam1;
}

var func_986(int iParam0)
{
	return (Global_1100950->f_33[iParam0 /*16*/])->f_3.f_7;
}

int func_987()
{
	return Global_1901929->f_295.f_40;
}

int func_988(struct<2> Param0, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar0 = func_776(iParam2);
	bVar1 = (iVar0 != 0 && _NAMESPACE26::_0x93A91A351A07360E(iVar0));
	if (Global_1103537->f_18)
	{
		iVar2 = func_1116(Param0);
		if (func_1117(iVar2, bVar1))
		{
			func_984(Param0);
			return 1;
		}
	}
	else
	{
		func_984(Param0);
		return 1;
	}
	return 0;
}

int func_989(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (!&Global_1275573->f_22[iVar1])
		{
		}
		else
		{
			iVar0 = (iVar0 || ((*Global_1122836)[iVar1 /*54*/])->f_1[iParam0]) // PointerArith;
		}
		iVar1++;
	}
	return iVar0;
}

void func_990(int iParam0)
{
	(Global_1100950->f_33[iParam0 /*16*/])->f_1 = -1;
}

int func_991()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_776(iVar0) == 0)
		{
		}
		else if (!_NAMESPACE26::_0x93A91A351A07360E(func_776(iVar0)))
		{
		}
		else
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

var func_992()
{
	return Global_1100950->f_750.f_1;
}

void func_993()
{
	struct<28> Var0;
	var uVar31;
	int iVar32;

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
	if (!func_600())
	{
		return;
	}
	iVar32 = NETWORK::_0x8DC9AA3B508B1A85();
	if (!NETWORK::_0x255A5EF65EDA9167(iVar32))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar32))
	{
		return;
	}
	SCRIPTS::_0x31010318BA9897AC(&uVar31, iVar32);
	Var0.f_10 = PLAYER::PLAYER_ID();
	Var0.f_11 = _NAMESPACE26::_0x901E0DC25080C8B9(Var0.f_10);
	Var0.f_4 = 9;
	func_423();
	func_1006(&Var0, uVar31);
}

void func_994(int iParam0)
{
	func_1118(iParam0);
	func_990(iParam0);
	func_1119(iParam0);
}

int func_995(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_989(iParam0);
	if (iVar0 & 8 != 0)
	{
		return 0;
	}
	if (Global_1103537->f_19)
	{
		if (!func_838(iParam0, 4))
		{
			if (NETWORK::_0x51F33DBC1A41CBFD() & 9 != 0)
			{
				return 0;
			}
		}
	}
	else if (NETWORK::_0x51F33DBC1A41CBFD() & 9 != 0)
	{
		return 0;
	}
	func_1119(iParam0);
	func_990(iParam0);
	*uParam1 = 0;
	return 1;
}

int func_996(int iParam0, var uParam1)
{
	func_1119(iParam0);
	func_990(iParam0);
	*uParam1 = 0;
	return 1;
}

struct<2> func_997()
{
	return Global_1103537->f_11;
}

int func_998()
{
	return Global_1103537->f_11.f_3;
}

void func_999(int iParam0)
{
	Global_1103537->f_21.f_12.f_1 = iParam0;
}

void func_1000(int iParam0)
{
	Global_1103537->f_21.f_12.f_2 = iParam0;
}

void func_1001(int iParam0)
{
	Global_1103537->f_21.f_12.f_3 = iParam0;
}

void func_1002()
{
	func_1120(&(Global_1103537->f_21.f_12));
}

void func_1003()
{
	((*Global_1122836)[PLAYER::PLAYER_ID() /*54*/])->f_34 = 0;
}

int func_1004(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	return ((*Global_1139395)[iParam0 /*34*/])->f_8.f_1;
}

bool func_1005(var uParam0, int iParam1)
{
	return (uParam0->f_3 && iParam1) != 0;
}

void func_1006(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 9;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 31, 31, &uParam1);
}

void func_1007(int iParam0)
{
	Global_1103537->f_21.f_107.f_1 = iParam0;
}

void func_1008(int iParam0)
{
	Global_1103537->f_21.f_107 = iParam0;
}

void func_1009(int iParam0)
{
	Global_1103537->f_21.f_107.f_2 = iParam0;
}

void func_1010(struct<2> Param0)
{
	Global_1103537->f_21.f_107.f_3 = { Param0 };
}

void func_1011(int iParam0)
{
	Global_1103537->f_21.f_107.f_5 = iParam0;
}

void func_1012(int iParam0)
{
	Global_1103537->f_21.f_107.f_6 = iParam0;
}

void func_1013(int iParam0)
{
	Global_1103537->f_21.f_107.f_7 = iParam0;
}

void func_1014(int iParam0)
{
	Global_1103537->f_21.f_107.f_6 = iParam0;
}

void func_1015(int iParam0)
{
	MISC::_COPY_MEMORY(&(Global_1103537->f_21.f_107.f_9), iParam0, 4);
}

bool func_1016(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 35);
}

int func_1017(int iParam0)
{
	return (Global_1100950->f_33[iParam0 /*16*/])->f_3;
}

bool func_1018(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 59);
}

int func_1019(int iParam0)
{
	return (Global_1100950->f_33[iParam0 /*16*/])->f_3.f_1;
}

bool func_1020(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 70);
}

int func_1021(int iParam0)
{
	return (Global_1100950->f_33[iParam0 /*16*/])->f_3.f_3;
}

bool func_1022()
{
	return Global_1103537->f_21.f_107.f_8;
}

int func_1023(int iParam0)
{
	return &(Global_1103537->f_7066[iParam0 /*5*/]);
}

int func_1024(int iParam0)
{
	return func_1121(iParam0);
}

void func_1025(int iParam0, var uParam1)
{
	MISC::_COPY_MEMORY(uParam1, &((Global_1100950->f_33[iParam0 /*16*/])->f_3.f_9), 4);
}

Vector3 func_1026(int iParam0)
{
	return ((*Global_1111121)[iParam0 /*42*/])->f_7.f_1;
}

var func_1027(int iParam0)
{
	return ((*Global_1111121)[iParam0 /*42*/])->f_7;
}

void func_1028(var uParam0, var uParam1, vector3 vParam2, var uParam5)
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
		if (!NETWORK::_0x255A5EF65EDA9167(iVar12))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar12))
		{
		}
		else if (!_NAMESPACE26::_0x9BE7DCB22D32CCBE(uParam1, iVar12))
		{
		}
		else if (_NAMESPACE26::_0x424B17A7DC5C90BC(iVar12))
		{
			(*uParam0)[0] = iVar12;
			Jump @159; //curOff = 85
		}
		else if (func_1122(iVar12, vParam2, uParam5))
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
		iVar3 = &iVar4[iVar2];
		iVar12 = PLAYER::INT_TO_PLAYERINDEX(iVar3);
		if (iVar0 + 1 < 7)
		{
			(*uParam0)[(1 + iVar0)] = iVar12;
			iVar0++;
		}
		iVar2++;
	}
}

void func_1029(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(Global_1103537->f_7560.f_3[iParam1 /*8*/], iParam0, 4);
}

void func_1030(var uParam0, int iParam1)
{
	MISC::_COPY_MEMORY(uParam0, Global_1103537->f_7560.f_3[iParam1 /*8*/], 4);
}

void func_1031(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&((Global_1103537->f_7560.f_3[iParam1 /*8*/])->f_4), iParam0, 4);
}

void func_1032(var uParam0, int iParam1)
{
	MISC::_COPY_MEMORY(uParam0, &((Global_1103537->f_7560.f_3[iParam1 /*8*/])->f_4), 4);
}

void func_1033(int iParam0)
{
	Global_1132968->f_5641[iParam0 /*3*/] = UNLOCK::_UNLOCK_IS_NEW(((*Global_1835011)[iParam0 /*72*/])->f_3);
	(Global_1132968->f_5641[iParam0 /*3*/])->f_2 = UNLOCK::_UNLOCK_IS_VISIBLE(((*Global_1835011)[iParam0 /*72*/])->f_3);
	(Global_1132968->f_5641[iParam0 /*3*/])->f_1 = UNLOCK::_UNLOCK_IS_UNLOCKED(((*Global_1835011)[iParam0 /*72*/])->f_3);
}

int func_1034(struct<2> Param0)
{
	return func_19(Param0);
}

int func_1035(bool bParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1099294->f_16)
	{
		return 0;
	}
	if (!func_21())
	{
		return 0;
	}
	if (!func_26())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_1123(&Global_0, 8);
	}
	func_1123(&Global_0, 1);
	return 1;
}

void func_1036(struct<2> Param0, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	vector3 vVar2;

	uVar0 = func_1124(func_1042(Param0));
	iVar1 = func_1034(Param0);
	vVar2.f_1 = iParam3;
	vVar2.x = 0;
	vVar2.f_2 = 0;
	if (func_58() == 0)
	{
		vVar2.x = Global_265331->f_124445.f_70.f_17;
		func_1125(Param0, &vVar2);
	}
	STATS::_0xD5910ECF81A2278C(uVar0, iVar1, iParam2, &vVar2);
}

void func_1037(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_1126(Global_1939178, 8388608);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_1127(Global_1939178, 8388608);
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

void func_1038(bool bParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2[24];

	iVar0 = 0;
	while (iVar0 <= 58)
	{
		iVar1 = func_1128(iVar0, 1);
		if ((iVar1 == -173287735 || iVar1 == -715363719) || iVar1 == 1972833301)
		{
		}
		else
		{
			if (bParam0)
			{
				StringCopy(&cVar2, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_1129(cVar2);
			}
			else
			{
				func_1130();
			}
			LAW::_0xF611DE44AEB36A1D(iVar1, bParam0);
		}
		iVar0++;
	}
}

int func_1039(bool bParam0)
{
	if (!bParam0 && func_695(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(752193127, bParam0, 0);
	return 1;
}

void func_1040(int iParam0)
{
	Global_1900718 = (Global_1900718 || iParam0);
}

int func_1041(struct<2> Param0)
{
	return func_1132(func_1131(Param0));
}

int func_1042(var uParam0, var uParam1)
{
	return uParam0;
}

int func_1043(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_626(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1133(iVar0);
}

int func_1044(struct<2> Param0, int iParam2)
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
	if (!func_77(Param0, &vVar0))
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
		func_77(*(Global_1070356->f_17817.f_1[iVar9 /*3*/]), &vVar3);
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
			func_1134(iVar9);
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

void func_1045()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	while (iVar0 < Global_1070356->f_17817)
	{
		if (func_77(*(Global_1070356->f_17817.f_1[iVar0 /*3*/]), &vVar1))
		{
		}
		iVar0++;
	}
}

int func_1046(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1193206973 /* GXTEntry: "You have completed this mission on the highest difficulty." */;
		case 2:
			return -1344025432 /* GXTEntry: "The next time you play this mission the difficulty will be increased." */;
		case 4:
			return -108962728 /* GXTEntry: "Check back at the Bounty Board ~1b~ soon to replay this mission." */;
		default:
			break;
	}
	return 0;
}

int func_1047(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 1;
		default:
			break;
	}
	return 0;
	return 0;
}

void func_1048(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = { 0f, 0f, 0f };
}

void func_1049(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_1050(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		uParam0->f_1[iVar0] = 0;
		iVar0++;
	}
}

char* func_1051(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "dynamic_list_item_enabled";
		case 1:
			return "dynamic_list_item_visible";
		case 2:
			return "dynamic_list_item_main_color";
		case 3:
			return "dynamic_list_item_secondary_color";
		case 4:
			return "dynamic_list_item_tertiary_color";
		case 5:
			return "dynamic_list_item_main_img_texture_dic";
		case 6:
			return "dynamic_list_item_main_img_texture";
		case 7:
			return "dynamic_list_item_main_img_visible";
		case 8:
			return "dynamic_list_item_main_img_enabled";
		case 9:
			return "dynamic_list_item_status_icon_texture_dic";
		case 10:
			return "dynamic_list_item_status_icon_texture";
		case 11:
			return "dynamic_list_item_status_icon_visible";
		case 12:
			return "dynamic_list_item_deco_texture_dic";
		case 13:
			return "dynamic_list_item_deco__texture";
		case 14:
			return "dynamic_list_item_deco_visible";
		case 15:
			return "dynamic_list_item_raw_text_entry";
		case 16:
			return "dynamic_list_item_text_label_entry";
		case 17:
			return "dynamic_list_item_secondary_raw_text_entry";
		case 18:
			return "dynamic_list_item_secondary_text_label_entry";
		case 19:
			return "dynamic_list_item_secondary_text_visible";
		case 20:
			return "dynamic_list_item_secondary_text_enabled";
		case 21:
			return "dynamic_list_item_end_img_texture_dic";
		case 22:
			return "dynamic_list_item_end_img_texture";
		case 23:
			return "dynamic_list_item_end_img_visible";
		case 24:
			return "dynamic_list_item_corner_end_img_texture_dic";
		case 25:
			return "dynamic_list_item_corner_end_img_texture";
		case 26:
			return "dynamic_list_item_corner_end_img_visible";
		case 27:
			return "dynamic_list_item_entry_player_index";
		case 28:
			return "dynamic_list_item_entry_friend_index";
		case 29:
			return "dynamic_list_item_player_gamer_handle";
		case 30:
			return "dynamic_list_item_option_stepper_visible";
		case 31:
			return "dynamic_list_item_option_stepper_text_enabled";
		case 32:
			return "dynamic_list_item_option_stepper_items";
		case 33:
			return "dynamic_list_item_option_stepper_current_hash";
		case 34:
			return "dynamic_list_item_option_stepper_current_index";
		case 35:
			return "dynamic_list_item_option_stepper_max_index";
		case 36:
			return "dynamic_list_item_left_chevron_enabled";
		case 37:
			return "dynamic_list_item_right_chevron_enabled";
		case 38:
			return "dynamic_list_item_option_stepper_index_change_ui_event_hash";
		case 39:
			return "dynamic_list_item_main_fill_maximum";
		case 40:
			return "dynamic_list_item_main_fill_value";
		case 41:
			return "dynamic_list_item_extra_text_field_entry_one_raw_text";
		case 42:
			return "dynamic_list_item_extra_text_field_entry_two_raw_text";
		case 43:
			return "dynamic_list_item_extra_text_field_entry_three_raw_text";
		case 44:
			return "dynamic_list_item_extra_text_field_entry_one_visibility";
		case 45:
			return "dynamic_list_item_extra_text_field_entry_two_visibility";
		case 46:
			return "dynamic_list_item_extra_text_field_entry_three_visibility";
		case 47:
			return "dynamic_list_item_extra_img_texture_one_dic";
		case 48:
			return "dynamic_list_item_extra_img_one_texture";
		case 49:
			return "dynamic_list_item_extra_img_one_visible";
		case 50:
			return "dynamic_list_item_extra_int_field_one_value";
		case 51:
			return "dynamic_list_item_extra_int_field_two_value";
		case 52:
			return "dynamic_list_item_extra_vector_field_one_value";
		case 53:
			return "dynamic_list_item_extra_bool_field_one_value";
		case 54:
			return "dynamic_list_item_link";
		case 55:
			return "dynamic_list_item_event_channel_hash";
		case 56:
			return "dynamic_list_item_focus_hash";
		case 57:
			return "dynamic_list_item_select_hash";
		case 58:
			return "dynamic_list_item_prompt_text";
		case 59:
			return "dynamic_list_item_prompt_enabled";
		case 60:
			return "dynamic_list_item_prompt_visible";
		case 64:
			return "dynamic_list_item_prompt_option_text";
		case 65:
			return "dynamic_list_item_prompt_option_enabled";
		case 66:
			return "dynamic_list_item_prompt_option_visible";
		case 67:
			return "dynamic_list_item_prompt_option_select_hash";
		case 68:
			return "dynamic_list_item_prompt_toggle_text";
		case 69:
			return "dynamic_list_item_prompt_toggle_enabled";
		case 70:
			return "dynamic_list_item_prompt_toggle_visible";
		case 71:
			return "dynamic_list_item_prompt_toggle_select_hash";
		case 72:
			return "dynamic_list_item_prompt_r3_text";
		case 73:
			return "dynamic_list_item_prompt_r3_enabled";
		case 74:
			return "dynamic_list_item_prompt_r3_visible";
		case 75:
			return "dynamic_list_item_select_r3_select_hash";
		case 76:
			return "dynamic_list_item_prompt_dpad_left_right_text";
		case 77:
			return "dynamic_list_item_prompt_dpad_left_right_enabled";
		case 78:
			return "dynamic_list_item_prompt_dpad_left_right_visible";
		case 79:
			return "dynamic_list_item_select_dpad_left_right_select_hash";
		case 80:
			return "mount_collection_index";
		case 81:
			return "dynamic_list_item_rename_prompt_enabled";
		case 82:
			return "dynamic_list_item_rename_prompt_visible";
		case 83:
			return "dynamic_list_item_stats_info_toggle_prompt_text";
		case 84:
			return "invite_unique_id";
		case 85:
			return "invite_tracked";
		case 86:
			return "invite_processed";
		case 87:
			return "invite_script_type";
		case 88:
			return "invite_gang_id";
		case 89:
			return "invite_expiration_time";
		case 90:
			return "invite_filter_type";
		case 91:
			return "invite_feed_message_id";
		case 92:
			return "invite_all_enabled";
		case 93:
			return "invite_all_visible";
		default:
			break;
	}
	return "null";
}

bool func_1052(int iParam0)
{
	return iParam0 != 0;
}

int func_1053(struct<2> Param0, var uParam2, var uParam3, var uParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	var uVar5;

	uVar5 = Param0.f_1;
	*iParam5 = func_1135(&Param0);
	iVar1 = func_729(&Param0, 5);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Param0.f_1 = uVar5;
		if (!func_590(&Param0, 33, iVar0, 0, 1))
		{
		}
		else
		{
			iVar4 = func_909(&Param0, 59, 1);
			switch (*iParam5)
			{
				case joaat("award"):
					uVar2 = func_1136(iVar4);
					break;
				case 253781561:
					uVar2 = func_1137(iVar4);
					break;
				case -646838152:
					uVar2 = func_1138(iVar4);
					break;
				case 356437857:
					uVar2 = func_1139(iVar4);
					break;
				case joaat("challenge"):
					uVar2 = func_1140(iVar4);
					break;
				case joaat("replay"):
					uVar2 = func_1141(iVar4);
					break;
				default:
					break;
			}
			uVar3 = (uVar3 || uVar2);
		}
		iVar0++;
	}
	return uVar3;
}

void func_1054(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (RDR_RAGE_STORE_N_SR >= 11)
	{
		return;
	}
}

void func_1055(var uParam0, int iParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_554(uParam0))
	{
		return;
	}
	if (Global_1272170->f_1991 < 20)
	{
		Global_1272170->f_1991++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1272170->f_1991.f_1[iVar0 /*24*/]) = { *(Global_1272170->f_1991.f_1[iVar0 + 1 /*24*/]) };
			iVar0++;
		}
	}
	Var1.f_7.f_1 = 11;
	Var1.f_7.f_16 = 255;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_7 = { Param2 };
	Var1.f_6 = 1;
	*(Global_1272170->f_1991.f_1[(Global_1272170->f_1991 - 1) /*24*/]) = { Var1 };
}

int func_1056(var uParam0)
{
	return func_909(uParam0, 78, 1);
}

int func_1057(var uParam0)
{
	return func_909(uParam0, 79, 1);
}

int func_1058(var uParam0)
{
	return func_909(uParam0, 80, 1);
}

var func_1059(var uParam0)
{
	return func_924(uParam0, 81, 1);
}

void func_1060(struct<5> Param0, var uParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	uVar4 = Param0.f_1;
	iVar1 = func_729(&Param0, 4);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar2 = 0;
		Param0.f_1 = uVar4;
		if (!func_590(&Param0, 31, iVar0, 0, 1))
		{
			return;
		}
		iVar2 = func_1053(Param0, &iVar3);
		switch (iVar3)
		{
			case joaat("challenge"):
				uParam5->f_5 = iVar2;
				break;
			default:
				break;
		}
		iVar0++;
	}
}

void func_1061(int iParam0)
{
	if (!func_466(iParam0))
	{
		return;
	}
	(*Global_1122836)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*54*/] = iParam0;
}

bool func_1062()
{
	return func_18(*Global_1051163);
}

void func_1063(int iParam0)
{
	if (!func_1016(iParam0))
	{
		return;
	}
	func_1142(iParam0);
}

void func_1064()
{
	if (!func_1062())
	{
		return;
	}
	if (!func_18(*Global_1051163))
	{
		return;
	}
	func_275(Global_1051163);
}

void func_1065(int iParam0)
{
	if (func_482(Global_1124790, iParam0, 1))
	{
	}
}

void func_1066(int iParam0, int iParam1)
{
	Global_1124790->f_2[iParam0] = iParam1;
}

void func_1067(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_1083(iParam0, iParam1))
	{
		return;
	}
	iVar0 = func_1143(iParam0, iParam1);
	if (!SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
	{
		return;
	}
	SCRIPTS::_0x7DE4643157AD646C(iVar0);
}

void func_1068(int iParam0, int iParam1)
{
	func_1079(iParam0, iParam1);
	func_1078(iParam0, iParam1, -1);
}

void func_1069(int iParam0)
{
	func_275(&((Global_1198382->f_1[iParam0 /*10*/])->f_4));
	(Global_1198382->f_1[iParam0 /*10*/])->f_6 = 0;
}

int func_1070()
{
	return Global_1099294->f_340;
}

int func_1071(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 7)
	{
		return 255;
	}
	return &(Global_1099294->f_342[iParam0]);
}

void func_1072(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	MISC::CLEAR_BIT((*(*Global_1196005)[iVar0 /*72*/])[iParam0], iParam1);
}

void func_1073(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<18> Var1;

	if (!func_18(Param0))
	{
		return;
	}
	if (!func_873(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_1144(Param0);
	}
	if (!func_18(func_205(0)))
	{
		func_876(Param0, 3);
		func_1037(bParam3);
		func_1038(!bParam4);
		func_1145(Param0, -1);
		if (bParam2 && !func_494(2))
		{
			func_1123(&Global_0, 1024);
		}
		func_1040(1);
	}
	else
	{
		func_1145(Param0, -1);
		func_876(Param0, 4);
		func_1146(Param0, 0);
	}
	Global_1051202->f_44.f_1 = 1;
	iVar0 = func_1042(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		if (func_1147(Param0, &Var1))
		{
			MISC::_0x1096603B519C905F(&(Var1.f_17));
		}
	}
}

var func_1074(int iParam0)
{
	return &(Global_1186267->f_231.f_1066[iParam0 /*17*/]);
}

var func_1075(int iParam0, int iParam1)
{
	return ((Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_8[iParam1 /*4*/])->f_1;
}

int func_1076(int iParam0, int iParam1)
{
	return Global_1186267->f_2505[iParam0 /*6*/][iParam1 /*3*/];
}

int func_1077(int iParam0, int iParam1)
{
	return Global_1198382->f_1[iParam0 /*10*/][iParam1 /*3*/];
}

void func_1078(int iParam0, int iParam1, int iParam2)
{
	(*Global_1198382->f_1[iParam0 /*10*/])[iParam1 /*3*/] = iParam2;
}

void func_1079(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_1085(iParam0, iParam1, iVar0);
		iVar0++;
	}
}

bool func_1080(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_1098(iParam0, iParam1);
	if (iVar0 == 2147483647)
	{
		return true;
	}
	vVar1 = { func_1148(PLAYER::PLAYER_ID()) };
	if (func_97(vVar1))
	{
		return false;
	}
	return func_1149(vVar1, func_1108(iParam0, iParam1)) < IntToFloat(iVar0);
}

void func_1081(int iParam0, int iParam1, int iParam2)
{
	func_949(iParam0, func_1150(iParam1, iParam2));
}

int func_1082(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	struct<5> Var13;
	var uVar18;

	iVar0 = func_1075(iParam0, iParam1);
	iVar1 = func_1074(iParam0);
	if (func_1083(iParam0, iParam1))
	{
		return 0;
	}
	if (NETWORK::_0x1B89BC43B6E69107(iVar1, iVar0, true, 0))
	{
		return 0;
	}
	if (func_768(iParam0, 8))
	{
		if (func_1089(iParam0, iParam1) != 4)
		{
			return 0;
		}
	}
	SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(iVar1);
	if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iVar1))
	{
		if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(func_1151(iParam0)) <= 0)
		{
			return 0;
		}
		if (func_768(iParam0, 64))
		{
			Var3.f_7 = -1;
			Var3.f_7.f_1 = -1;
			Var3.f_9 = 255;
			Var3 = iVar0;
			Var3.f_9 = func_969(iParam0);
			Var3.f_1 = { func_1108(iParam0, iParam1) };
			Var3.f_5 = iParam0;
			Var3.f_7 = { func_945(iParam0) };
			iVar2 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(iVar1, &Var3, 10, func_1151(iParam0));
		}
		else if (func_768(iParam0, 128))
		{
			Var13 = iVar0;
			Var13.f_1 = func_1152(iVar1);
			Var13.f_2 = (Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_14;
			Var13.f_3 = (Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_15;
			Var13.f_4 = (Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_16;
			iVar2 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(iVar1, &Var13, 5, func_1151(iParam0));
		}
		else
		{
			iVar2 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(iVar1, &uVar18, 1, func_1151(iParam0));
		}
		func_1084(iParam0, iParam1, iVar2);
		SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iVar1);
		func_1153(iVar1, iVar0);
		return 1;
	}
	return 0;
}

bool func_1083(int iParam0, int iParam1)
{
	return SCRIPTS::_DOES_THREAD_EXIST(((*Global_1198382->f_1[iParam0 /*10*/])[iParam1 /*3*/])->f_2);
}

void func_1084(int iParam0, int iParam1, int iParam2)
{
	((*Global_1198382->f_1[iParam0 /*10*/])[iParam1 /*3*/])->f_2 = iParam2;
}

void func_1085(int iParam0, int iParam1, int iParam2)
{
	func_1072(iParam0, func_1150(iParam1, iParam2));
}

bool func_1086(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_768(iParam0, 1024))
	{
		return false;
	}
	iVar0 = func_1107(iParam0);
	if (iVar0 <= 0)
	{
		return false;
	}
	return func_1149(Global_35, func_1108(iParam0, iParam1)) > IntToFloat(iVar0);
}

int func_1087(int iParam0, int iParam1)
{
	return ((*Global_1198382->f_1[iParam0 /*10*/])[iParam1 /*3*/])->f_1;
}

void func_1088(int iParam0, int iParam1, int iParam2)
{
	if (!VOLUME::_0xA4A4359320345B34(iParam2))
	{
		((*Global_1198382->f_1[iParam0 /*10*/])[iParam1 /*3*/])->f_1 = 0;
		return;
	}
	((*Global_1198382->f_1[iParam0 /*10*/])[iParam1 /*3*/])->f_1 = iParam2;
}

int func_1089(int iParam0, int iParam1)
{
	return ((*Global_1186267->f_2505[iParam0 /*6*/])[iParam1 /*3*/])->f_1;
}

void func_1090(int iParam0, int iParam1)
{
	func_1096(iParam0, iParam1);
	func_962(iParam0, iParam1);
}

void func_1091(int iParam0, int iParam1, int iParam2)
{
	((*Global_1186267->f_2505[iParam0 /*6*/])[iParam1 /*3*/])->f_1 = iParam2;
}

int func_1092(int iParam0, int iParam1)
{
	return ((Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_8[iParam1 /*4*/])->f_2;
}

int func_1093(int iParam0, int iParam1)
{
	return ((*Global_1186267->f_2505[iParam0 /*6*/])[iParam1 /*3*/])->f_2;
}

void func_1094(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	struct<8> Var1;
	struct<2> Var10;
	int iVar12;

	if (func_1087(iParam0, iParam1) != 0 && !func_1154(func_1087(iParam0, iParam1)))
	{
		return;
	}
	iVar0 = 96;
	if (!bParam2)
	{
		iVar0 += 128;
	}
	if (func_962(iParam0, iParam1))
	{
		Var1 = { func_1108(iParam0, iParam1) };
		Var1.f_4 = BUILTIN::TO_FLOAT(func_1092(iParam0, iParam1));
		Var1.f_5 = iVar0;
		Var1.f_6 = func_1155(iParam0);
		Var10 = { func_945(iParam0) };
		iVar12 = 0;
		if (func_18(Var10))
		{
			iVar12 = func_19(Var10);
		}
		if (iVar12 != 0)
		{
			Var1.f_7 = iVar12;
		}
		else
		{
			Var1.f_7 = -1546799264;
		}
		func_1088(iParam0, iParam1, VOLUME::_0x183C0B6CFEFFCAE4(&Var1));
	}
}

int func_1095(int iParam0, int iParam1)
{
	int iVar0;

	if (func_1093(iParam0, iParam1) != 0)
	{
		return 1;
	}
	func_1156(iParam0, iParam1);
	func_1094(iParam0, iParam1, 1);
	iVar0 = func_1087(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_1157(iVar0))
	{
		return 0;
	}
	func_1158(iParam0, iParam1, VOLUME::_0x351D71B8B72B858B(func_1087(iParam0, iParam1)));
	return 1;
}

void func_1096(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1093(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return;
	}
	if (!VOLUME::_0xF6A8A652A6B186CD(iVar0))
	{
		func_1158(iParam0, iParam1, 0);
		return;
	}
	VOLUME::_0xFDFECC6EE4491E11(iVar0);
	func_1158(iParam0, iParam1, 0);
	func_962(iParam0, iParam1);
}

void func_1097(int iParam0, int iParam1, int iParam2)
{
	(*Global_1186267->f_2505[iParam0 /*6*/])[iParam1 /*3*/] = iParam2;
}

int func_1098(int iParam0, int iParam1)
{
	return ((Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_8[iParam1 /*4*/])->f_3;
}

int func_1099(int iParam0)
{
	return (Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_4;
}

bool func_1100(int iParam0)
{
	return &Global_1902689 > iParam0;
}

int func_1101(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
		}
		else if (func_1159(iParam0, iParam1, iVar0, iParam2))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_1102(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
		}
		else if (!func_1160(iParam0, iParam1, iVar0))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

int func_1103(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
		}
		else if (!func_947(iParam0, iVar0, 2))
		{
		}
		else if (!func_947(iParam0, iVar0, iParam1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_1104(int iParam0)
{
	if (!func_779(iParam0))
	{
		return 0;
	}
	return (Global_1186267->f_231[iParam0 /*15*/])->f_5.f_8;
}

int func_1105(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265331->f_124445.f_134 & 8 != 0)
	{
		Global_1070356->f_26837 = 1;
		return 1;
	}
	if (func_18(*Global_1051163) && !func_837(*Global_1051163, Param0))
	{
		Global_1070356->f_26837 = 2;
		return 1;
	}
	if (iParam2 != 0 && func_666(iParam2))
	{
		return 1;
	}
	if (iParam3 != 0 && func_1161(iParam3, 255))
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
	if (func_340())
	{
		Global_1070356->f_26837 = 7;
		return 1;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_18(*Global_1051163))
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

int func_1106(int iParam0)
{
	if (iParam0 < 3)
	{
		return 0;
	}
	if (iParam0 < (&Global_1186267->f_3[1] + 3))
	{
		return 0;
	}
	if (iParam0 < 35)
	{
		return 1;
	}
	if (iParam0 < (&Global_1186267->f_3[2] + 35))
	{
		return 0;
	}
	if (iParam0 < (&Global_1186267->f_3[2] + 35) + 16)
	{
		return 0;
	}
	return 1;
}

var func_1107(int iParam0)
{
	return (Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_2;
}

Vector3 func_1108(int iParam0, int iParam1)
{
	return func_1162(&((Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_8[iParam1 /*4*/]));
}

bool func_1109(int iParam0, int iParam1)
{
	return (*Global_1196005)[iParam1 /*72*/][iParam0] == 0;
}

void func_1110(int iParam0)
{
	(Global_1186267->f_2505[iParam0 /*6*/])->f_4 = 0;
	(Global_1186267->f_2505[iParam0 /*6*/])->f_5 = 255;
}

struct<40> func_1111(var uParam0, int iParam1)
{
	struct<40> Var0;
	struct<40> Var40;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_8 = 2;
	Var0.f_8.f_1 = -1;
	Var0.f_8.f_5 = -1;
	Var0.f_8.f_5.f_1 = -1;
	Var0.f_8.f_5.f_3 = -1;
	Var0.f_8.f_5.f_4 = -1;
	Var0.f_8.f_5.f_5 = -1;
	Var0.f_8.f_5.f_6 = -1;
	Var0.f_8.f_5.f_6.f_1 = -1;
	Var0.f_8.f_5.f_9 = 2;
	Var0.f_23.f_1 = 1024;
	Var0.f_23.f_4 = -15;
	Var0.f_23.f_5 = 255;
	Var0.f_23.f_8 = 1;
	Var0.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_23.f_13 = -1;
	if (!func_1163(uParam0, iParam1))
	{
		return Var0;
	}
	Var40 = { *(uParam0->f_3[iParam1 /*40*/]) };
	*(uParam0->f_3[iParam1 /*40*/]) = { Var0 };
	return Var40;
}

void func_1112(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = (((uParam0->f_1 + *uParam0) - 1) % uParam0->f_2);
	if (uParam0->f_1 == iParam1)
	{
		iVar2 = *uParam0;
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			iVar3 = ((uParam0->f_1 + iVar1) % uParam0->f_2);
			if (&uParam0->f_3[iVar3 /*40*/] != -1)
			{
			}
			else
			{
				if ((uParam0->f_3[iVar3 /*40*/])->f_4 != -1)
				{
					func_1111(uParam0, iVar3);
				}
				iVar2 = (iVar2 - 1);
				iVar1++;
			}
		}
		uParam0->f_1 = iVar3;
		*uParam0 = iVar2;
	}
	else if (iVar0 == iParam1)
	{
		iVar2 = *uParam0;
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			iVar4 = ((iVar0 - iVar1) + 5 % uParam0->f_2);
			if (&uParam0->f_3[iVar4 /*40*/] != -1)
			{
			}
			else
			{
				func_1111(uParam0, iVar4);
				iVar2 = (iVar2 - 1);
				iVar1++;
			}
		}
		*uParam0 = iVar2;
	}
}

int func_1113(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 3;
		case 2:
			return 35;
		case 3:
			return 55;
		default:
			break;
	}
	return 0;
}

int func_1114(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			if (&Global_1186267->f_3[iParam0] * 2 <= 32)
			{
				return &Global_1186267->f_3[iParam0] * 2;
			}
			return 32;
		case 2:
			if (&Global_1186267->f_3[iParam0] * 2 <= 20)
			{
				return &Global_1186267->f_3[iParam0] * 2;
			}
			return 20;
		case 3:
			if (&Global_1186267->f_3[iParam0] * 2 <= 16)
			{
				return &Global_1186267->f_3[iParam0] * 2;
			}
			return 16;
		default:
			break;
	}
	return 0;
}

int func_1115(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;

	if (func_1164(uParam0))
	{
		return 0;
	}
	if (!func_1165(&(uParam1->f_8)))
	{
		return 0;
	}
	if (uParam1->f_2 == -1)
	{
		return 0;
	}
	if (uParam1->f_2 == 5)
	{
		uParam1->f_3 = PLAYER::PLAYER_ID();
	}
	if (uParam1->f_5 == -1)
	{
		return 0;
	}
	if (uParam1->f_8 != uParam1->f_8.f_5.f_9)
	{
		return 0;
	}
	iVar0 = func_1166(uParam0, uParam1);
	if (iVar0 >= 0)
	{
		return 0;
	}
	switch (uParam1->f_5)
	{
		case 0:
		case 1:
		case 3:
		default:
			break;
			if (!func_1167(uParam1, bParam2, iParam3, iParam4, iParam5, iParam6))
			{
				return 0;
			}
			break;
	}
	uParam1->f_7 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	iVar1 = ((uParam0->f_1 + *uParam0) % uParam0->f_2);
	uParam1->f_4 = iVar1;
	*(uParam0->f_3[iVar1 /*40*/]) = { *uParam1 };
	func_979(uParam0->f_3[iVar1 /*40*/], 0);
	*uParam0++;
	return 1;
}

int func_1116(struct<2> Param0)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!func_18(Param0))
	{
		return 0;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		Var0 = { func_467(iVar2) };
		if (func_837(Var0, Param0))
		{
			iVar4 = func_783(iVar2);
			iVar5 = func_776(iVar2);
			if (iVar4 >= 1 && iVar4 <= 4)
			{
				if (iVar5 != 0 && _NAMESPACE26::_0x93A91A351A07360E(iVar5))
				{
					iVar3++;
				}
			}
		}
		iVar2++;
	}
	return iVar3;
}

int func_1117(int iParam0, bool bParam1)
{
	if (iParam0 > 1)
	{
		return 0;
	}
	if (iParam0 < 1)
	{
		return 1;
	}
	if (bParam1)
	{
		return 1;
	}
	return 0;
}

void func_1118(int iParam0)
{
	Global_1100950->f_33[iParam0 /*16*/] = 0;
}

void func_1119(int iParam0)
{
	struct<10> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0.f_9.f_1 = -1;
	MISC::_COPY_MEMORY(&((Global_1100950->f_33[iParam0 /*16*/])->f_3), &Var0, 13);
}

void func_1120(var uParam0)
{
	struct<25> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_9 = -1;
	Var0.f_9.f_1 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = 7;
	Var0.f_12.f_1 = 255;
	Var0.f_12.f_1.f_1 = 255;
	Var0.f_12.f_1.f_1.f_1 = 255;
	Var0.f_12.f_1.f_1.f_1.f_1 = 255;
	Var0.f_12.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_12.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_12.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_23 = -1;
	Var0.f_23.f_1 = -1;
	*uParam0 = { Var0 };
}

var func_1121(int iParam0)
{
	return ((*Global_1276359)[iParam0 /*4*/])->f_3;
}

bool func_1122(int iParam0, vector3 vParam1, float fParam4)
{
	return BUILTIN::VDIST(func_1148(iParam0), vParam1) <= fParam4;
}

void func_1123(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1124(int iParam0)
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

void func_1125(struct<2> Param0, var uParam2)
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
	switch (func_1042(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_1168(func_333(Param0));
			iVar5 = func_1169(iVar4);
			if (!func_1170(iVar5, 0))
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

void func_1126(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_1127(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_1128(int iParam0, int iParam1)
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

void func_1129(char[12] cParam0)
{
	Global_1938085->f_75.f_67 = { cParam0 };
}

void func_1130()
{
	StringCopy(&(Global_1938085->f_75.f_67), "", 24);
}

int func_1131(struct<2> Param0)
{
	int iVar0;

	if (!func_18(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_837(*(Global_1900718->f_1[iVar0 /*2*/]), Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1132(int iParam0)
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
		func_275(Global_1900718->f_1[0 /*2*/]);
		return 1;
	}
	func_275(Global_1900718->f_1[iParam0 /*2*/]);
	Global_1900718->f_66 = (Global_1900718->f_66 - 1);
	func_1171(iParam0, Global_1900718->f_66);
	return 1;
}

int func_1133(int iParam0)
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

int func_1134(int iParam0)
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

int func_1135(var uParam0)
{
	return func_909(uParam0, 59, 1);
}

int func_1136(int iParam0)
{
	switch (iParam0)
	{
		case 1932616531:
			return 1;
		case 724666844:
			return 2;
		case 1943935584:
			return 4;
		case 1807760880:
			return 8;
		default:
			break;
	}
	return 0;
}

int func_1137(int iParam0)
{
	switch (iParam0)
	{
		case -243414166:
			return 2;
		case -369122880:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1138(int iParam0)
{
	switch (iParam0)
	{
		case -752379276:
			return 1;
		case -1151403749:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_1139(int iParam0)
{
	switch (iParam0)
	{
		case 1586601790:
			return 1;
		case 236229850:
			return 2;
		case 880275082:
			return 4;
		case -389588894:
			return 1024;
		case 1355384174:
			return 268435456;
		case 1398901851:
			return 536870912;
		default:
			break;
	}
	return 0;
}

int func_1140(int iParam0)
{
	switch (iParam0)
	{
		case 1943935584:
			return 1;
		case 1807760880:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_1141(int iParam0)
{
	switch (iParam0)
	{
		case 1943935584:
			return 1;
		case -1368721330:
			return 2;
		default:
			break;
	}
	return 0;
}

void func_1142(int iParam0)
{
	func_275(&(((*Global_1113601)[iParam0 /*35*/])->f_16));
}

int func_1143(int iParam0, int iParam1)
{
	return ((*Global_1198382->f_1[iParam0 /*10*/])[iParam1 /*3*/])->f_2;
}

void func_1144(struct<2> Param0)
{
	struct<32> Var0;

	if (func_1034(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_1034(Param0)))
	{
	}
	else
	{
		STATS::_0xB2A38826E5886E83(func_1034(Param0), Global_265331->f_124445.f_70.f_17);
		if (func_1147(Param0, &Var0))
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

int func_1145(struct<2> Param0, int iParam2)
{
	int iVar0;

	iVar0 = func_1131(Param0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1900718->f_66 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1900718->f_66;
	func_1172(Param0, iVar0);
	Global_1900718->f_66++;
	if (iParam2 < 0 || iParam2 >= Global_1900718->f_66)
	{
		return iVar0;
	}
	func_1171(iVar0, iParam2);
	return iParam2;
}

int func_1146(struct<2> Param0, int iParam2)
{
	int iVar0;

	if (!func_18(Param0))
	{
		return 0;
	}
	iVar0 = func_1131(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	if (!func_1173(Param0, func_205(0), iParam2))
	{
		func_876(func_205(0), 3);
		func_876(func_205(iVar0), 4);
		return 0;
	}
	func_1171(iVar0, 0);
	func_876(func_205(0), 3);
	func_876(func_205(1), 4);
	return 1;
}

int func_1147(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_77(Param0, &vVar0);
	if (func_1174(Param0, vVar0.x, uParam2))
	{
		return 1;
	}
	return 0;
}

Vector3 func_1148(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

float func_1149(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

int func_1150(int iParam0, int iParam1)
{
	return (8 + (iParam0 * 2 + iParam1));
}

var func_1151(int iParam0)
{
	return (Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_1;
}

int func_1152(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1881122909:
			return 1;
		case 1746254613:
			return 2;
		case -210940392:
			return 3;
		case -337883659:
			return 4;
		case -2127851115:
			return 6;
		case -1515832348:
			return 7;
		case -392050235:
			return 5;
		case -16753530:
			return 11;
		case -1210919694:
			return 8;
		case -1628357986:
			return 9;
		case -1054322328:
			return 10;
		case -1488065830:
			return 12;
		case 1903114091:
			return 13;
		case 1623440542:
			return 14;
		case -726533106:
			return 15;
		default:
			break;
	}
	return 0;
}

void func_1153(int iParam0, int iParam1)
{
	int iVar0;

	if (Global_1051202->f_79.f_101 >= 10)
	{
		return;
	}
	iVar0 = func_1175(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return;
	}
	StringCopy(Global_1051202->f_79[Global_1051202->f_79.f_101 /*10*/], "HashOnlyScript", 64);
	(Global_1051202->f_79[Global_1051202->f_79.f_101 /*10*/])->f_8 = iParam0;
	(Global_1051202->f_79[Global_1051202->f_79.f_101 /*10*/])->f_9 = iParam1;
	Global_1051202->f_79.f_101++;
	Global_1051202->f_44.f_1 = 1;
}

int func_1154(int iParam0)
{
	if (!VOLUME::_0xA4A4359320345B34(iParam0))
	{
		return 1;
	}
	if (VOLUME::_0xB33A604345F58202(iParam0) == 4)
	{
		return 1;
	}
	return 0;
}

var func_1155(int iParam0)
{
	return (Global_1186267->f_231.f_1066[iParam0 /*17*/])->f_3;
}

void func_1156(int iParam0, int iParam1)
{
	if (func_1087(iParam0, iParam1) != 0)
	{
		if (func_1154(func_1087(iParam0, iParam1)))
		{
			func_1096(iParam0, iParam1);
			func_962(iParam0, iParam1);
		}
	}
}

int func_1157(int iParam0)
{
	int iVar0;

	if (!VOLUME::_0xA4A4359320345B34(iParam0))
	{
		return 0;
	}
	iVar0 = VOLUME::_0xB33A604345F58202(iParam0);
	if (iVar0 == 3)
	{
		return 1;
	}
	return 0;
}

void func_1158(int iParam0, int iParam1, int iParam2)
{
	if (!VOLUME::_0xF6A8A652A6B186CD(iParam2))
	{
		((*Global_1186267->f_2505[iParam0 /*6*/])[iParam1 /*3*/])->f_2 = 0;
		return;
	}
	((*Global_1186267->f_2505[iParam0 /*6*/])[iParam1 /*3*/])->f_2 = iParam2;
}

bool func_1159(int iParam0, int iParam1, int iParam2, int iParam3)
{
	return func_947(iParam0, iParam2, func_1150(iParam1, iParam3));
}

int func_1160(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_1159(iParam0, iParam1, iParam2, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_1161(int iParam0, int iParam1)
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

Vector3 func_1162(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;

	iVar3 = iParam0 & 32767;
	iVar4 = BUILTIN::SHIFT_RIGHT(iParam0, 15) & 32767;
	vVar0.x = BUILTIN::TO_FLOAT(iVar3);
	vVar0.f_1 = BUILTIN::TO_FLOAT(iVar4);
	if (iParam0 & 1073741824 == 0)
	{
		vVar0.x = (vVar0.x * -1f);
	}
	if (iParam0 & -2147483648 == 0)
	{
		vVar0.f_1 = (vVar0.y * -1f);
	}
	return vVar0;
}

bool func_1163(var uParam0, int iParam1)
{
	return (iParam1 >= 0 && iParam1 < uParam0->f_2);
}

bool func_1164(var uParam0)
{
	return *uParam0 == uParam0->f_2;
}

int func_1165(var uParam0)
{
	if (uParam0->f_1 == -1)
	{
		return 0;
	}
	if (!func_981(&(uParam0->f_5)))
	{
		return 0;
	}
	return 1;
}

int func_1166(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		iVar1 = ((uParam0->f_1 + iVar0) % uParam0->f_2);
		if (func_1176(uParam1, uParam0->f_3[iVar1 /*40*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1167(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<29> Var0;
	struct<2> Var32;
	bool bVar34;
	int iVar35[4];
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;

	Var32 = -1;
	Var32.f_1 = -1;
	if (func_18(uParam0->f_8.f_5))
	{
		Var32 = { uParam0->f_8.f_5 };
	}
	else if (func_18(uParam0->f_8.f_5.f_6))
	{
		Var32 = { uParam0->f_8.f_5.f_6 };
	}
	else
	{
		return 1;
	}
	bVar34 = false;
	if (func_97(uParam0->f_8.f_2))
	{
		bVar34 = true;
	}
	else
	{
		bVar34 = false;
	}
	if (bParam1)
	{
		Var0.f_25 = iParam2;
		Var0.f_26 = iParam3;
		Var0.f_27 = iParam4;
		Var0.f_28 = iParam5;
	}
	else if (!func_1177(func_19(Var32), &Var0))
	{
		return 0;
	}
	if (Var0.f_25 <= 0 || Var0.f_25 > 50)
	{
		if (Var0.f_25 != 0)
		{
		}
		iVar35[0] = 0;
	}
	else
	{
		iVar35[0] = 1;
	}
	if (Var0.f_26 <= 0 || Var0.f_26 > 10)
	{
		if (Var0.f_26 != 0)
		{
		}
		iVar35[1] = 0;
	}
	else
	{
		iVar35[1] = 1;
	}
	if (Var0.f_27 <= 0 || Var0.f_27 > 25)
	{
		if (Var0.f_27 != 0)
		{
		}
		iVar35[2] = 0;
	}
	else
	{
		iVar35[2] = 1;
	}
	if (Var0.f_28 <= 0 || Var0.f_28 > 10)
	{
		if (Var0.f_28 != 0)
		{
		}
		iVar35[3] = 0;
	}
	else
	{
		iVar35[3] = 1;
	}
	if (bVar34)
	{
		iVar42 = NETWORK::GET_NUM_RESERVED_MISSION_PEDS(1);
		iVar43 = NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(1);
		iVar44 = NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(1);
		iVar45 = NETWORK::_0x62BE3ECC79FBD004(1);
	}
	else
	{
		NETWORK::_0x5E71E72A94985214(uParam0->f_8.f_2, 0, &iVar42, &iVar43, &iVar44, &iVar45);
	}
	iVar40 = 0;
	while (iVar40 < 4)
	{
		iVar46 = iVar40;
		if (iVar46 == -1)
		{
		}
		else if (!&iVar35[iVar40])
		{
		}
		else
		{
			switch (iVar46)
			{
				case 0:
					iVar41 = (NETWORK::GET_MAX_NUM_NETWORK_PEDS() - iVar42);
					if (iVar41 < Var0.f_25)
					{
						return 0;
					}
					break;
					break;
				case 1:
					iVar41 = (NETWORK::GET_MAX_NUM_NETWORK_VEHICLES() - iVar43);
					if (iVar41 < Var0.f_26)
					{
						return 0;
					}
					break;
					break;
				case 2:
					iVar41 = (NETWORK::GET_MAX_NUM_NETWORK_OBJECTS() - iVar44);
					if (iVar41 < Var0.f_27)
					{
						return 0;
					}
					break;
					break;
				case 3:
					iVar41 = (NETWORK::GET_MAX_NUM_NETWORK_PICKUPS() - iVar45);
					if (iVar41 < Var0.f_28)
					{
						return 0;
					}
					break;
					break;
			}
		}
		iVar40++;
	}
	return 1;
}

int func_1168(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_1178(&Var1, iParam0))
	{
		iVar0 = ((func_1179() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_1169(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return ((*Global_1234391)[iParam0 /*5*/])->f_2;
}

int func_1170(int iParam0, int iParam1)
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

void func_1171(int iParam0, int iParam1)
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
			func_1180((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1180(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_18(*(Global_1900718->f_1[0 /*2*/])))
	{
		func_876(*(Global_1900718->f_1[0 /*2*/]), 3);
	}
}

void func_1172(struct<2> Param0, int iParam2)
{
	if (!func_18(Param0))
	{
		func_275(Global_1900718->f_1[iParam2 /*2*/]);
	}
	else
	{
		*(Global_1900718->f_1[iParam2 /*2*/]) = { Param0 };
	}
	func_1181(Param0, 0, 1, -1);
}

int func_1173(struct<2> Param0, struct<2> Param2, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_18(Param0))
	{
		return 0;
	}
	if (!func_18(Param2))
	{
		return 1;
	}
	iVar0 = func_1042(Param0);
	iVar1 = func_1042(Param2);
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

int func_1174(int iParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (!func_1182(iParam0))
	{
		return 0;
	}
	if (func_1183(iParam0, iParam1, &uVar0))
	{
		func_1184(iParam0, &uVar0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_1175(int iParam0, int iParam1)
{
	int iVar0;

	if (Global_1051202->f_79.f_101 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_1051202->f_79.f_101 - 1))
	{
		if ((Global_1051202->f_79[iVar0 /*10*/])->f_8 == iParam0 && (Global_1051202->f_79[iVar0 /*10*/])->f_9 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1176(var uParam0, var uParam1)
{
	if (uParam1->f_2 == -1)
	{
		return 0;
	}
	if (uParam0->f_2 == -1)
	{
		return 0;
	}
	if (uParam1->f_2 != uParam0->f_2)
	{
		return 0;
	}
	if (uParam1->f_5 == -1)
	{
		return 0;
	}
	if (uParam0->f_5 == -1)
	{
		return 0;
	}
	if (uParam1->f_5 != uParam0->f_5)
	{
		return 0;
	}
	if (uParam1->f_8 != uParam0->f_8)
	{
		return 0;
	}
	if (uParam1->f_8.f_1 != uParam0->f_8.f_1)
	{
		return 0;
	}
	if (!func_837(uParam1->f_8.f_5, uParam0->f_8.f_5))
	{
		return 0;
	}
	if (uParam1->f_8.f_5.f_4 != uParam0->f_8.f_5.f_4)
	{
		return 0;
	}
	if (uParam1->f_8.f_5.f_2 != uParam0->f_8.f_5.f_2)
	{
		return 0;
	}
	return 1;
}

int func_1177(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = { func_1185(iParam0) };
	if (!func_18(Var0))
	{
		return 0;
	}
	func_1174(Var0, iParam0, uParam1);
	return 1;
}

bool func_1178(var uParam0, int iParam1)
{
	*uParam0 = Global_1234391->f_8113;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (DATAFILE::_0x603AC35FD4602C76(*uParam0) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

int func_1179()
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

void func_1180(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { *(Global_1900718->f_1[iParam0 /*2*/]) };
	*(Global_1900718->f_1[iParam0 /*2*/]) = { *(Global_1900718->f_1[iParam1 /*2*/]) };
	*(Global_1900718->f_1[iParam1 /*2*/]) = { Var0 };
}

int func_1181(struct<2> Param0, bool bParam2, int iParam3, int iParam4)
{
	struct<4> Var0;

	if (func_1186(Param0) >= 0)
	{
		return 0;
	}
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_1 = { Param0 };
	Var0 = func_19(Param0);
	Var0.f_3 = iParam3;
	func_1187(&Var0, bParam2, iParam4);
	return 1;
}

int func_1182(int iParam0)
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

bool func_1183(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = Global_1132968->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_1188(iParam0);
	uParam2->f_4 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_1184(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_1189(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_1190(iVar0);
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
			uParam2->f_5 = func_1191(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_1192(iVar0);
		}
		uParam1->f_2 = 162343104;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_1193(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_7 = func_1194(iVar0);
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

struct<2> func_1185(int iParam0)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_586(iParam0, 2) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_586(iParam0, 7) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_586(iParam0, 5) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_586(iParam0, 6) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_586(iParam0, 8) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_586(iParam0, 3) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_586(iParam0, 4) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	return func_750();
}

int func_1186(struct<2> Param0)
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
		if (func_837(((*Global_1184439)[iVar0 /*4*/])->f_1, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1187(var uParam0, bool bParam1, int iParam2)
{
	func_1195(uParam0, iParam2);
	if (Global_1184439->f_129 == 1)
	{
		iParam2 = 0;
		bParam1 = true;
	}
	if (bParam1)
	{
		func_1196(func_1186(uParam0->f_1));
	}
	else
	{
		func_1197();
	}
}

int func_1188(int iParam0)
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

int func_1189(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_1198(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_1190(int iParam0)
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

int func_1191(int iParam0)
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

int func_1192(int iParam0)
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

int func_1193(int iParam0)
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

int func_1194(int iParam0)
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

void func_1195(var uParam0, int iParam1)
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

void func_1196(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_1184439->f_129)
	{
		return;
	}
	Global_1184439->f_130 = iParam0;
	Global_1184439->f_131 = Global_1184439[iParam0 /*4*/];
}

void func_1197()
{
	if (Global_1184439->f_131 == 0)
	{
		return;
	}
	Global_1184439->f_130 = func_1199(Global_1184439->f_131);
	if (Global_1184439->f_130 < 0)
	{
		Global_1184439->f_131 = 0;
	}
}

int func_1198(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_1200(iParam0, uParam1, &uVar0))
	{
		func_1201(&uVar0, iParam0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_1199(int iParam0)
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

bool func_1200(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1132968->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_1188(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_1201(var uParam0, int iParam1, var uParam2)
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

