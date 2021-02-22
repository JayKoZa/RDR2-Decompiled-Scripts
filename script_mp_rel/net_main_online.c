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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	char* sLocal_28 = NULL;
	char* sLocal_29 = NULL;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_13 = 1f;
	fLocal_14 = 1f;
	sLocal_28 = "props_misc@campfires@5_logs";
	sLocal_29 = "Script_PropCampfire";
	uLocal_31 = uLocal_31;
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
					else if (Global_1572887.f_106.f_9 == -1 && Global_1572887.f_106.f_13 != 3)
					{
						func_16();
					}
					else if (Global_1572887.f_106.f_9 == -1 && Global_1572887.f_106.f_13 == 3)
					{
						func_15();
					}
					else if (func_17())
					{
						func_16();
					}
					else if (!func_18(Global_1572887.f_106.f_11))
					{
						func_15();
					}
					else
					{
						switch (func_19(Global_1572887.f_106.f_11))
						{
							case joaat("MPFBLA"):
							case joaat("MPCVAL"):
							case joaat("MPIBLA"):
							case joaat("MPFVAL"):
							case joaat("MPIOL2"):
							case joaat("MPCRHO"):
							case joaat("MPFOL2"):
							case joaat("MPIRHO"):
							case joaat("MPIVAL"):
							case joaat("MPFRHO"):
							case joaat("MPCOL2"):
							case joaat("MPCBLA"):
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
				if (func_23() != joaat("FREEROAM"))
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
				else if (func_23() == joaat("MINIGAME") && !func_21())
				{
					func_22(6);
				}
				else if (func_23() == joaat("SERIES") && !func_21())
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
				switch (func_27(uLocal_32))
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
				func_35(&(Global_1056141[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*471*/].f_187.f_10), 1);
				func_22(8);
				break;
			case 8:
				func_36(&uLocal_30);
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
	Global_1572887.f_2 = MISC::GET_FRAME_COUNT();
	Global_1572887.f_3 = MISC::_GET_SYSTEM_TIME();
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
	SCRIPTS::REQUEST_SCRIPT("net_player_camp_manager");
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
	Global_1051252.f_13 = 0;
	func_56();
	Global_1051215.f_36 = 0;
	func_1("NET_MAIN_ONLINE__PROCESS_PRE_GAME - end");
}

bool func_4(int iParam0)
{
	return (Global_1572887.f_106.f_15 && iParam0) != 0;
}

void func_5(int iParam0)
{
	func_57(&(Global_1572887.f_106.f_15), iParam0);
}

void func_6()
{
	int iVar0;

	if (func_58() == -1)
	{
		return;
	}
	iVar0 = Global_1296859;
	if (func_59(Global_1572887.f_7, 1))
	{
		func_35(&(Global_1056141[iVar0 /*471*/].f_187.f_10), 4);
	}
	else
	{
		func_57(&(Global_1056141[iVar0 /*471*/].f_187.f_10), 4);
	}
	Global_1056141[iVar0 /*471*/].f_187 = Global_1572887.f_106;
	Global_1056141[iVar0 /*471*/].f_187.f_1 = Global_1572887.f_106.f_9;
	Global_1056141[iVar0 /*471*/].f_187.f_2 = Global_1572887.f_106.f_10;
	Global_1056141[iVar0 /*471*/].f_187.f_3 = { Global_1572887.f_106.f_11 };
	Global_1056141[iVar0 /*471*/].f_187.f_8 = Global_1572887.f_106.f_13;
	Global_1056141[iVar0 /*471*/].f_187.f_5 = { Global_1572887.f_360 };
	Global_1056141[iVar0 /*471*/].f_187.f_9 = Global_1572887.f_106.f_74;
	if (func_4(1024))
	{
		func_35(&(Global_1056141[iVar0 /*471*/].f_187.f_10), 2);
	}
	else
	{
		func_57(&(Global_1056141[iVar0 /*471*/].f_187.f_10), 2);
	}
}

bool func_7(bool bParam0, bool bParam1)
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

void func_8()
{
	func_60();
	func_61(-1, 0, 1);
	func_62();
	if ((func_63(joaat("BG_CUSTOM_1")) || func_63(joaat("BG_CUSTOM_2"))) || func_63(joaat("BG_CUSTOM_3")))
	{
		Global_1102219.f_3979.f_5 = 1;
	}
}

void func_9()
{
	Global_1071686.f_4 = 1;
	Global_1051252.f_42 = (MISC::GET_GAME_TIMER() - Global_1051252.f_40);
}

void func_10()
{
	func_64();
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		if (Global_1056141[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*471*/] < 7)
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
		return Global_1056141[iParam0 /*471*/];
	}
	return -1;
}

int func_12()
{
	return Global_1071685;
}

bool func_13()
{
	return Global_1572887.f_266 > 0;
}

bool func_14()
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
		return false;
	}
	if (!func_59(Var0.f_10, 4))
	{
		return false;
	}
	switch (Var0)
	{
		case 2:
			if (func_73(iVar11, 4096))
			{
				return false;
			}
			break;
		case 0:
			if (Var0.f_1 >= 34 && Var0.f_1 <= 42)
			{
				return false;
			}
			break;
	}
	return true;
}

void func_15()
{
	Global_1051252.f_15 = 1;
}

void func_16()
{
	Global_1051252.f_15 = 0;
}

bool func_17()
{
	if (func_74() != 0)
	{
		return false;
	}
	if (Global_1572887.f_106.f_9 >= 5 && Global_1572887.f_106.f_9 <= 8)
	{
		return false;
	}
	return true;
}

bool func_18(struct<2> Param0)
{
	if (!func_75(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_76(Param0))
	{
		return false;
	}
	return true;
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
		if ((!Global_1051252.f_15 || ((Global_1048577 || Global_1048581) && !Global_1049271)) && func_26())
		{
			func_79();
			func_80(bParam0);
			func_81(16);
		}
		else if (Global_1049271)
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
	return !Global_1572887.f_9;
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
		Global_1056141[iVar0 /*471*/] = iParam0;
		Global_1056141[iVar0 /*471*/].f_1++;
		func_1(func_86(Global_1056141[iVar0 /*471*/]));
	}
}

int func_23()
{
	return Global_1572887.f_405;
}

void func_24()
{
	if (!Global_1572887.f_6)
	{
		Global_1572887.f_6 = 1;
		TELEMETRY::_0xE9F24081D84931B8();
	}
}

bool func_25()
{
	bool bVar0;

	bVar0 = false;
	if (func_87(1))
	{
		if (func_88("net_train_manager", 3, 1024))
		{
			func_35(&(Global_1051252.f_13), 1);
		}
		bVar0 = true;
	}
	if (func_87(2))
	{
		if (func_88("net_fme_manager", 4, 1024))
		{
			func_35(&(Global_1051252.f_13), 2);
		}
		bVar0 = true;
	}
	if (func_87(32))
	{
		if (func_88("net_gangfeud_manager", 8, 1024))
		{
			func_35(&(Global_1051252.f_13), 32);
		}
		bVar0 = true;
	}
	if (func_87(4))
	{
		if (func_88("net_ugc_global_loader", 5, 3088))
		{
			func_35(&(Global_1051252.f_13), 4);
		}
		bVar0 = true;
	}
	if (func_87(2048))
	{
		if (func_88("generic_show_mp_manager", 15, 1024))
		{
			func_35(&(Global_1051252.f_13), 2048);
		}
		bVar0 = true;
	}
	if (func_87(64))
	{
		if (func_88("net_camp_manager", 9, 1024))
		{
			func_35(&(Global_1051252.f_13), 64);
		}
		bVar0 = true;
	}
	if (func_87(128))
	{
		if (func_88("net_camp_dog_manager", 10, 1024))
		{
			func_35(&(Global_1051252.f_13), 128);
		}
		bVar0 = true;
	}
	if (func_87(32768))
	{
		if (func_88("net_player_camp_manager", 11, 1024))
		{
			func_35(&(Global_1051252.f_13), 32768);
		}
		bVar0 = true;
	}
	if (func_87(256))
	{
		if (func_88("net_ace_thread_manager", 12, 1024))
		{
			func_35(&(Global_1051252.f_13), 256);
		}
		bVar0 = true;
	}
	if (func_87(512))
	{
		if (func_88("net_fetch_manager", 13, 2050))
		{
			func_35(&(Global_1051252.f_13), 512);
		}
		bVar0 = true;
	}
	if (func_87(1024))
	{
		if (func_88("net_crew_manager", 14, 1024))
		{
			func_35(&(Global_1051252.f_13), 1024);
		}
		bVar0 = true;
	}
	if (func_87(4096))
	{
		if (func_88("net_beat_manager", 16, 3500))
		{
			func_35(&(Global_1051252.f_13), 4096);
		}
		bVar0 = true;
	}
	if (func_87(8192))
	{
		if (func_88("net_scan_manager", 17, 512))
		{
			func_35(&(Global_1051252.f_13), 8192);
		}
		bVar0 = true;
	}
	if (func_87(16384))
	{
		if (func_88("net_moonshine_manager", 18, 1024))
		{
			func_35(&(Global_1051252.f_13), 16384);
		}
		bVar0 = true;
	}
	if (func_87(65536))
	{
		if (func_88("flow_controller", 19, 1024))
		{
			func_35(&(Global_1051252.f_13), 65536);
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		return false;
	}
	return true;
}

bool func_26()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

int func_27(var uParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(PLAYER::PLAYER_ID());
	switch (Global_1132288.f_2018)
	{
		case 1:
			if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("FEATURE_POSSE_CAMP")))
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
					if (func_91(Global_1296859.f_15))
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
				if ((Global_1134390[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_3 != -1 && Global_1131196.f_865[iVar0 /*7*/].f_4 == Global_1134390[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_3) && Global_1131196.f_865[iVar0 /*7*/] == 6)
				{
					func_93(3);
					return 3;
				}
				Jump @234; //curOff = 223
				func_93(3);
			}
			if (Global_1132288.f_2041 == 0)
			{
				Global_1132288.f_2041 = MISC::_GET_SYSTEM_TIME();
			}
			else if ((MISC::_GET_SYSTEM_TIME() - Global_1132288.f_2041) >= Global_1901947.f_584.f_2)
			{
				return 5;
			}
			return func_94();
			default:
				break;
	}
}

void func_28(int iParam0)
{
	func_95(&(Global_1137047.f_8), iParam0);
}

bool func_29()
{
	return Global_1572887.f_266 > 19;
}

void func_30()
{
	float fVar0;
	struct<18> Var1;
	struct<7> Var31;

	fVar0 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
	func_96(0);
	Global_1102219.f_3594 = 1;
	if (((func_97(Global_17411.f_55.f_1) || func_98(Global_17411.f_55.f_1) == -1) || func_98(Global_17411.f_55.f_1) == 8) || func_99(Global_17411.f_55) == 8)
	{
		if (!func_100(&(Global_17411.f_55.f_1), &fVar0))
		{
			Global_17411.f_55.f_1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
			fVar0 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
		}
		Global_17411.f_55 = func_101(Global_17411.f_55.f_1, 1);
	}
	if (func_23() == joaat("SERIES"))
	{
		func_102(1);
		func_103(1);
		func_104(122, 0);
	}
	else if (func_23() == joaat("MINIGAME"))
	{
		func_102(1);
		func_103(1);
	}
	else if (func_26())
	{
		if (func_63(joaat("HANDHELD")))
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
		else if (Global_1572887.f_405.f_6 != -1)
		{
			func_104(Global_1572887.f_405.f_6, 0);
			func_108();
		}
		else if (Global_1572887.f_405.f_7 != -1)
		{
			func_104(Global_1102219.f_25, 0);
			func_108();
		}
		else if (Global_1572887.f_405.f_8 != -1)
		{
			func_104(Global_1102219.f_25, 0);
			func_108();
		}
		else if ((func_63(joaat("BG_CUSTOM_1")) || func_63(joaat("BG_CUSTOM_2"))) || func_63(joaat("BG_CUSTOM_3")))
		{
			func_109(&(Global_1102219.f_3979.f_6), &(Global_1102219.f_3979.f_36), 1, 1, 1);
			if (Global_1102219.f_3979.f_45)
			{
				func_110();
			}
			if (Global_1102219.f_3979.f_46)
			{
				func_111(1, 0);
			}
			Global_1102219.f_3979.f_5 = 0;
			Global_1102219.f_3979 = 0;
		}
		else if (func_63(joaat("COUPON")))
		{
			func_112(1);
			func_113();
			func_106(0, -1);
			func_105(0);
		}
		else if (func_63(joaat("HUB")))
		{
			func_114(1);
			func_113();
			func_106(0, -1);
			func_105(0);
		}
		else if (func_63(joaat("CAMP")))
		{
			func_113();
			func_106(0, -1);
			func_105(0);
		}
		else if (func_63(1735278055))
		{
			func_115();
			func_106(0, -1);
			func_105(0);
		}
		else if (func_63(joaat("RANDOM_REGION")))
		{
			func_104(Global_1102219.f_25, 0);
			func_108();
		}
		else if (func_63(joaat("LAST_REGION")))
		{
			func_104(Global_17411.f_55, 0);
			func_108();
		}
		else if (func_63(joaat("LAST_LOCATION")))
		{
			func_116(Global_17411.f_55.f_1, fVar0, -1f, 75f, 1, 1, 1);
			func_108();
		}
		else if (func_63(joaat("OPEN_POSSE")) && func_117())
		{
			func_118();
		}
		else if (func_63(joaat("NEAR_POSSE")) && func_117())
		{
			func_118();
		}
		else if (func_63(joaat("RANDOM_POSSE")) && func_117())
		{
			func_118();
		}
		else if (func_63(joaat("LAST_MISSION")))
		{
			if (BUILTIN::VDIST(func_119(1), 0f, 0f, 0f) < 2f)
			{
				func_116(Global_17411.f_55.f_1, fVar0, -1f, 75f, 1, 1, 1);
			}
			else
			{
				func_120(&Var1);
				func_121(&Var31);
				Var1.f_17.f_9 = joaat("VOLSPHERE");
				Var1.f_17.f_6 = { func_119(1) };
				Var1.f_17 = { 30f, 30f, 50f };
				Var1.f_16 = 1;
				Var1.f_6 = { Var1.f_17 };
				Var1.f_6 = { 1.5f, 1.5f, 5f };
				Var1.f_1 = { Var1.f_17.f_6 };
				Var1.f_5 = 2;
				Var31.f_5 = 1;
				if (!func_122(Var1.f_17.f_6, &(Var31.f_6), &Var31))
				{
					Var31.f_6 = { Global_1071686.f_23887.f_366[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
					Var31 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
				}
				func_109(&Var1, &Var31, 1, 1, 1);
				func_110();
			}
		}
		else if (func_63(joaat("RANDOM_POKER")))
		{
			func_120(&Var1);
			func_121(&Var31);
			Var1.f_17.f_9 = joaat("VOLSPHERE");
			Var1.f_17.f_6 = { func_123(Global_17411.f_55.f_1, -471827042) };
			Var1.f_17 = { 30f, 30f, 30f };
			Var1.f_16 = 1;
			Var1.f_6 = { Var1.f_17 };
			Var1.f_6 = { 1.5f, 1.5f, 5f };
			Var1.f_1 = { Var1.f_17.f_6 };
			Var1.f_5 = 2;
			Var31.f_5 = 1;
			if (!func_122(Var1.f_17.f_6, &(Var31.f_6), &Var31))
			{
				Var31.f_6 = { Global_1071686.f_23887.f_366[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
				Var31 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
			}
			func_109(&Var1, &Var31, 1, 1, 1);
			func_110();
		}
		else if (func_63(joaat("TRADE_1")))
		{
			func_120(&Var1);
			func_121(&Var31);
			Var1.f_17.f_9 = joaat("VOLSPHERE");
			if (func_124(3, &(Var1.f_17.f_6)))
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
			if (!func_122(Var1.f_17.f_6, &(Var31.f_6), &Var31))
			{
				Var31.f_6 = { Global_1071686.f_23887.f_366[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
				Var31 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
			}
			func_109(&Var1, &Var31, 1, 1, 1);
			func_110();
		}
		else if (func_63(joaat("TRADE_2")))
		{
			func_120(&Var1);
			func_121(&Var31);
			Var1.f_17.f_9 = joaat("VOLSPHERE");
			if (func_124(4, &(Var1.f_17.f_6)))
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
			if (!func_122(Var1.f_17.f_6, &(Var31.f_6), &Var31))
			{
				Var31.f_6 = { Global_1071686.f_23887.f_366[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
				Var31 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
			}
			func_109(&Var1, &Var31, 1, 1, 1);
			func_110();
		}
		else if (func_63(joaat("TRADE_3")))
		{
			func_120(&Var1);
			func_121(&Var31);
			Var1.f_17.f_9 = joaat("VOLSPHERE");
			if (func_124(2, &(Var1.f_17.f_6)))
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
			if (!func_122(Var1.f_17.f_6, &(Var31.f_6), &Var31))
			{
				Var31.f_6 = { Global_1071686.f_23887.f_366[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
				Var31 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
			}
			func_109(&Var1, &Var31, 1, 1, 1);
			func_110();
		}
		else if (func_63(joaat("TRADE_4")))
		{
			func_120(&Var1);
			if (func_124(5, &(Var1.f_17.f_6)))
			{
				func_121(&Var31);
				Var1.f_17.f_9 = joaat("VOLSPHERE");
				Var1.f_17 = { 50f, 50f, 30f };
				Var1.f_16 = 1;
				Var1.f_6 = { Var1.f_17 };
				Var1.f_6 = { 1.5f, 1.5f, 5f };
				Var1.f_1 = { Var1.f_17.f_6 };
				Var1.f_5 = 2;
				Var31.f_5 = 1;
				if (!func_122(Var1.f_17.f_6, &(Var31.f_6), &Var31))
				{
					Var31.f_6 = { Global_1071686.f_23887.f_366[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
					Var31 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
				}
				func_109(&Var1, &Var31, 1, 1, 1);
				func_110();
			}
			else
			{
				func_120(&Var1);
				func_116(Global_17411.f_55.f_1, fVar0, -1f, 75f, 1, 1, 1);
				func_108();
				func_125(904, 1);
			}
		}
		else if (func_63(joaat("TRADE_5")))
		{
			func_120(&Var1);
			func_121(&Var31);
			Var1.f_17.f_9 = joaat("VOLSPHERE");
			if (func_124(6, &(Var1.f_17.f_6)))
			{
			}
			else
			{
				Var1.f_17.f_6 = { -190.3148f, 639.5237f, 112.2634f };
			}
			Var1.f_17 = { 50f, 50f, 30f };
			Var1.f_16 = 1;
			Var1.f_6 = { Var1.f_17 };
			Var1.f_6 = { 1.5f, 1.5f, 5f };
			Var1.f_1 = { Var1.f_17.f_6 };
			Var1.f_5 = 2;
			Var31.f_5 = 1;
			if (!func_122(Var1.f_17.f_6, &(Var31.f_6), &Var31))
			{
				Var31.f_6 = { Global_1071686.f_23887.f_366[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
				Var31 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
			}
			func_109(&Var1, &Var31, 1, 1, 1);
			func_110();
		}
		else if (func_63(joaat("TRADE_6")))
		{
			func_120(&Var1);
			func_121(&Var31);
			Var1.f_17.f_9 = joaat("VOLSPHERE");
			Var1.f_17.f_6 = { 1235.993f, -1279.31f, 74.9174f };
			Var1.f_17 = { 30f, 30f, 30f };
			Var1.f_16 = 1;
			Var1.f_6 = { Var1.f_17 };
			Var1.f_6 = { 1.5f, 1.5f, 5f };
			Var1.f_1 = { Var1.f_17.f_6 };
			Var1.f_5 = 2;
			Var31.f_5 = 1;
			if (!func_122(Var1.f_17.f_6, &(Var31.f_6), &Var31))
			{
				Var31.f_6 = { Global_1071686.f_23887.f_366[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
				Var31 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
			}
			func_109(&Var1, &Var31, 1, 1, 1);
			func_110();
		}
		else if (func_63(joaat("TRADE_7")))
		{
			func_120(&Var1);
			func_121(&Var31);
			Var1.f_17.f_9 = joaat("VOLSPHERE");
			Var1.f_17.f_6 = { 1235.993f, -1279.31f, 74.9174f };
			Var1.f_17 = { 30f, 30f, 30f };
			Var1.f_16 = 1;
			Var1.f_6 = { Var1.f_17 };
			Var1.f_6 = { 1.5f, 1.5f, 5f };
			Var1.f_1 = { Var1.f_17.f_6 };
			Var1.f_5 = 2;
			Var31.f_5 = 1;
			if (!func_122(Var1.f_17.f_6, &(Var31.f_6), &Var31))
			{
				Var31.f_6 = { Global_1071686.f_23887.f_366[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
				Var31 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
			}
			func_109(&Var1, &Var31, 1, 1, 1);
			func_110();
		}
		else if (func_63(joaat("CCHAR")))
		{
			func_102(1);
			func_126(1);
			func_127(-561.4f, -3782.6f, 237.6f, 166.8f, 1);
			Global_1071686.f_28777 |= 1;
		}
		else
		{
			func_116(Global_17411.f_55.f_1, fVar0, -1f, 75f, 1, 1, 1);
		}
		Global_1056141[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*471*/].f_463 = 1;
	}
	else if (!func_128())
	{
		func_102(1);
		func_126(1);
		func_116(func_129(33, 1), 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 1, 1);
	}
	else if (!func_130())
	{
		func_102(1);
		func_126(1);
		func_113();
	}
	else
	{
		func_102(1);
		func_126(1);
		func_116(func_129(func_131(Global_1071686.f_28341.f_2), 1), 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 1, 1);
	}
	Global_1056141[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*471*/].f_464 = NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(-1);
}

void func_31()
{
	func_132();
	func_133();
	NETWORK::_NETWORK_ALLOW_SESSION_TO_SPLIT(true);
	if (func_21())
	{
		return;
	}
	if (func_134())
	{
		return;
	}
	NETWORK::_0xC505036A35AFD01B(false);
	func_135(-1);
	func_136();
	UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
	UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
	func_137(3);
	func_138();
	func_139();
	func_140();
	func_141();
	SCRIPTS::_0x11B0A0B282FA9B10(1);
	SCRIPTS::_0x6F700A4BF7C3331B(1);
	SCRIPTS::_0xF9E951A1E5517C06();
	STATS::_0x218F7710A139D012();
	func_142();
	func_143();
	Global_1071686.f_21689.f_262 = 1;
	Global_1572887.f_106.f_101 = 0;
	Global_1139381.f_5560 = 1;
	func_144(0);
	NETWORK::_NETWORK_SET_PASSIVE_MODE_OPTION(func_145(PLAYER::PLAYER_ID(), 0, 1));
	func_146(1, 6);
}

void func_32()
{
	if (func_134())
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
	func_147();
	func_148();
}

void func_33()
{
	if (!Global_1572887.f_9)
	{
		return;
	}
	NETWORK::_0x2CD41AC000E6F611();
	Global_1572887.f_9 = 0;
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
	if (func_149(255) != 1)
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
	func_151(Var0, func_150(3, 8), 0, 0);
	*uParam0 = 1;
}

void func_37()
{
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
	func_162();
	func_163();
	func_164();
}

void func_38()
{
	if (func_58() != 0)
	{
		return;
	}
	switch (Global_1051215.f_36)
	{
		case 0:
			break;
		case 1:
			func_165();
			break;
	}
	Global_1051215.f_36++;
	if (Global_1051215.f_36 >= 3)
	{
		Global_1051215.f_36 = 0;
	}
	func_166();
	func_167();
	func_168();
	func_169();
	func_170();
	func_152();
	func_171();
	func_172();
}

void func_39()
{
	func_173();
}

void func_40()
{
	func_174();
	func_47();
	func_48();
	func_49();
}

void func_41(int iParam0)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Global_1071685 = iParam0;
	}
}

void func_42()
{
	Global_1296473 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	func_175();
	func_176();
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
	func_177();
	func_16();
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		func_178();
	}
	func_179();
}

bool func_45()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (iVar0 != 0)
		{
			if (Global_1051252.f_16[iVar0] != 0)
			{
				if (SCRIPTS::_DOES_THREAD_EXIST(Global_1051252.f_16[iVar0]))
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
	Global_1071686.f_5 = 0;
}

void func_48()
{
	Global_1071686.f_4 = 0;
}

void func_49()
{
	Global_1071686.f_3 = 0;
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
			if (func_180())
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

bool func_51()
{
	if (Global_1572887.f_9)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return true;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return true;
	}
	return false;
}

void func_52()
{
	bool bVar0;

	Global_1071686.f_13 = 0;
	bVar0 = false;
	while (!func_7(0, 0) && !bVar0)
	{
		switch (Global_1071686.f_13)
		{
			case 0:
				func_181(&Global_1071685);
				NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1071685, 1, 84);
				func_182(NETWORK::_0xBA24095EA96DFE17(&Global_1071685), 1, "g_mpHostData");
				if (func_21())
				{
					Global_1071214 = { Global_1056141[func_183() /*471*/] };
					func_184(&Global_1056141);
					NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1056141, 15073, 85);
					func_185(NETWORK::_0x690806BC83BC8CA2(&(Global_1056141[0 /*471*/])), 15073, "g_mpPlayerData");
					Global_1056141[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*471*/] = { Global_1071214 };
				}
				else
				{
					NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1056141, 15073, 85);
					func_185(NETWORK::_0x690806BC83BC8CA2(&(Global_1056141[0 /*471*/])), 15073, "g_mpPlayerData");
				}
				Global_1071686.f_13++;
				break;
			case 1:
				func_186();
				Global_1071686.f_13++;
				break;
			case 2:
				func_187();
				Global_1071686.f_13++;
				break;
			case 3:
				func_188();
				Global_1071686.f_13++;
				break;
			case 4:
				func_189();
				Global_1071686.f_13++;
				break;
			case 5:
				func_190();
				Global_1071686.f_13++;
				break;
			case 6:
				func_191();
				Global_1071686.f_13++;
				break;
			case 7:
				func_192();
				Global_1071686.f_13++;
				break;
			case 8:
				func_193();
				Global_1071686.f_13++;
				break;
			case 9:
				func_194();
				Global_1071686.f_13++;
				break;
			case 10:
				func_195();
				Global_1071686.f_13++;
				break;
			case 11:
				func_196();
				Global_1071686.f_13++;
				break;
			case 12:
				func_197();
				Global_1071686.f_13++;
				break;
			case 13:
				func_198();
				Global_1071686.f_13++;
				break;
			case 14:
				bVar0 = true;
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_199();
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
	func_200();
}

void func_55()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_1071686.f_16.f_5[iVar0 /*35*/] = 0;
		iVar0++;
	}
	Global_1071686.f_16 = 0;
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
		iVar2 = Global_1071686.f_19648[iVar1];
		Global_1071686.f_19648[iVar1] = Global_39.f_110[iVar1];
		Global_1056141[iVar0 /*471*/].f_425[iVar1] = Global_39.f_110[iVar1];
		Global_1056141[iVar0 /*471*/].f_425.f_19[iVar1] = -1;
		func_201(iVar1, iVar2, iVar0);
		iVar1++;
	}
	func_202(iVar0, Global_1071686.f_19648.f_21);
	Global_1071686.f_19648.f_21 = 0;
}

void func_57(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_58()
{
	return Global_1572887.f_13;
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
	if (Global_1102219.f_3672 != iVar0)
	{
		Global_1102219.f_3672 = iVar0;
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
		func_203();
	}
	return 1;
}

void func_62()
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	func_204(&(Global_1296473.f_60), 1, 1);
	func_204(&(Global_1296473.f_61), 1, 1);
	if (iVar0 != 255)
	{
		Global_1296406[iVar0 /*2*/] = 0;
	}
	func_205(1);
}

bool func_63(int iParam0)
{
	return func_207(func_206(iParam0));
}

void func_64()
{
	Global_1051252.f_38 = NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT();
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
	if (func_208(&iVar1))
	{
		bVar0 = true;
	}
	while (iVar1 != 12)
	{
		if (func_208(&iVar1))
		{
			bVar0 = true;
		}
	}
	if (Global_1051252.f_45.f_1)
	{
		iVar2 = 0;
		if (func_209(&iVar2))
		{
			bVar0 = true;
		}
		while (iVar2 != 0)
		{
			if (func_209(&iVar2))
			{
				bVar0 = true;
			}
		}
		Global_1051252.f_45.f_1 = 0;
	}
	else if (func_209(&(Global_1051252.f_45)))
	{
		bVar0 = true;
	}
	Var3 = { Global_1051252.f_45 };
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
		Var38[iVar220 /*15*/].f_1 = { Global_1296859.f_17 };
		Var38[iVar220 /*15*/].f_4[0] = func_211(func_210(0));
		iVar220++;
	}
	if (Var3.f_2[1] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 1;
		Var38[iVar220 /*15*/].f_1 = { Global_1296859.f_17 };
		if ((SCRIPTS::_DOES_THREAD_EXIST(Global_1132288.f_2055) && SCRIPTS::IS_THREAD_ACTIVE(Global_1132288.f_2055, false)) && Global_1132288.f_2056 != -1)
		{
			Var38[iVar220 /*15*/].f_4[0] = MISC::_0x6C4DBF553885F9EB(Global_1131196[Global_1132288.f_2056 /*27*/].f_20);
		}
		else if (func_212(16))
		{
			Var38[iVar220 /*15*/].f_4[0] = func_214(func_213(PLAYER::PLAYER_ID(), 1));
		}
		iVar220++;
	}
	if (Var3.f_2[2] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 2;
		Var38[iVar220 /*15*/].f_1 = { Global_1296859.f_17 };
		iVar221 = 0;
		iVar222 = (func_215() - 1);
		iVar221 = 0;
		while (iVar221 <= iVar222)
		{
			Var224 = { Global_1051252.f_80[iVar221 /*10*/] };
			StringConCat(&Var224, " ", 64);
			StringIntConCat(&Var224, Global_1051252.f_80[iVar221 /*10*/].f_9, 64);
			Var38[iVar220 /*15*/].f_4[iVar221] = func_216(Var224);
			iVar221++;
		}
		iVar220++;
	}
	if (Var3.f_2[3] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 3;
		Var38[iVar220 /*15*/].f_1 = { Global_1296859.f_17 };
		Var38[iVar220 /*15*/].f_4[0] = func_218(func_217(255));
		iVar220++;
	}
	if (Var3.f_2[4] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 4;
		Var38[iVar220 /*15*/].f_1 = { Global_1296859.f_17 };
		if (MISC::IS_STRING_NULL_OR_EMPTY(func_219()))
		{
			if (func_220())
			{
				Var38[iVar220 /*15*/].f_4[0] = func_221();
			}
		}
		else
		{
			Var38[iVar220 /*15*/].f_4[0] = func_219();
		}
		iVar220++;
	}
	if (Var3.f_2[6] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 6;
		Var38[iVar220 /*15*/].f_1 = { Global_1296859.f_17 };
		iVar221 = 0;
		if (func_222(0, Global_1296859))
		{
			Var38[iVar220 /*15*/].f_4[iVar221] = func_223(0);
			iVar221++;
		}
		if (func_222(1, Global_1296859))
		{
			Var38[iVar220 /*15*/].f_4[iVar221] = func_223(1);
			iVar221++;
		}
		if (func_222(2, Global_1296859))
		{
			Var38[iVar220 /*15*/].f_4[iVar221] = func_223(2);
			iVar221++;
		}
		iVar220++;
	}
	if (Var3.f_2[7] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 7;
		Var38[iVar220 /*15*/].f_1 = { Global_1296859.f_17 };
		Var38[iVar220 /*15*/].f_4[0] = func_224();
		iVar220++;
	}
	if (Var3.f_2[8] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 8;
		Var38[iVar220 /*15*/].f_1 = { Global_1296859.f_17 };
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
				Var233 = { func_225(iVar232) };
				if (!func_226(&Var233))
				{
				}
				else
				{
					StringCopy(&cVar268, "Invite - ", 64);
					StringIntConCat(&cVar268, iVar232, 64);
					Var38[iVar220 /*15*/].f_4[iVar221] = func_216(cVar268);
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
		Var38[iVar220 /*15*/].f_1 = { Global_1296859.f_17 };
		Var38[iVar220 /*15*/].f_4[0] = "Matchmaking Hack";
		iVar220++;
	}
	if (Var3.f_2[10] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 10;
		Var38[iVar220 /*15*/].f_1 = { Global_1296859.f_17 };
		Var38[iVar220 /*15*/].f_4[0] = func_227(PLAYER::PLAYER_ID());
		iVar220++;
	}
	if (Var3.f_2[11] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 11;
		Var38[iVar220 /*15*/].f_1 = { func_228() };
		Var38[iVar220 /*15*/].f_4[0] = func_229();
		iVar220++;
	}
	if (Var3.f_2[12] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 12;
		Var38[iVar220 /*15*/].f_1 = { Global_1296859.f_17 };
		iVar220++;
	}
	if (Var3.f_2[13] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 13;
		Var38[iVar220 /*15*/].f_1 = { Global_1296859.f_17 };
		iVar220++;
	}
	if (Var3.f_2[14] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 14;
		Var38[iVar220 /*15*/].f_1 = { Global_1296859.f_17 };
		iVar220++;
	}
	if (!bVar223)
	{
		if (NETWORK::_0xAADED99A6B268A27() || bVar0)
		{
			NETWORK::_NETWORK_ALLOW_SESSION_TO_MERGE(false, &Var38);
		}
		if (((Var3.f_2[12] || Var3.f_2[13]) || Var3.f_2[14]) || Var3.f_2[0])
		{
			if (NETWORK::_0xE258570E0C116A66())
			{
				NETWORK::_0x4440FEE3EFE78F54(false);
			}
		}
		else if (!NETWORK::_0xE258570E0C116A66())
		{
			NETWORK::_0x4440FEE3EFE78F54(true);
		}
	}
	else
	{
		if (!NETWORK::_0xAADED99A6B268A27())
		{
			NETWORK::_NETWORK_ALLOW_SESSION_TO_MERGE(true, &Var38);
		}
		if (!NETWORK::_0xE258570E0C116A66())
		{
			NETWORK::_0x4440FEE3EFE78F54(true);
		}
	}
}

struct<11> func_66()
{
	return Global_1572887.f_266.f_50;
}

var func_67()
{
	return Global_1572887.f_266.f_61;
}

var func_68(int iParam0)
{
	return Global_1056141[iParam0 /*471*/].f_187.f_10;
}

var func_69(int iParam0)
{
	return Global_1056141[iParam0 /*471*/].f_187;
}

var func_70(int iParam0)
{
	return Global_1056141[iParam0 /*471*/].f_187.f_1;
}

var func_71(int iParam0)
{
	return Global_1056141[iParam0 /*471*/].f_187.f_2;
}

struct<2> func_72(int iParam0)
{
	return Global_1056141[iParam0 /*471*/].f_187.f_3;
}

bool func_73(int iParam0, int iParam1)
{
	return (Global_263042[iParam0 /*70*/].f_68 && iParam1) != 0;
}

int func_74()
{
	return Global_1572887.f_106;
}

bool func_75(int iParam0)
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

int func_76(int iParam0)
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

bool func_77(struct<2> Param0, var uParam2)
{
	if (!func_18(Param0))
	{
		return false;
	}
	func_230(uParam2);
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

bool func_78()
{
	int iVar0;

	if (Global_1901947.f_44.f_2 == 1788394582)
	{
		iVar0 = Global_1296859.f_21;
		if (iVar0 > Global_1901947.f_44.f_3 && iVar0 < Global_1901947.f_44.f_4)
		{
			return true;
		}
	}
	return false;
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
		if ((Global_1296859.f_21 % 239) != 0)
		{
			return;
		}
	}
	func_232(func_231(), func_84());
}

void func_80(bool bParam0)
{
	int iVar0;

	if (!func_78())
	{
		return;
	}
	if (func_233() || func_234())
	{
		if (!func_82(1) || bParam0)
		{
			iVar0 = joaat("SNOWLIGHT");
			if (func_233())
			{
				iVar0 = joaat("SNOW");
			}
			func_232(iVar0, func_84());
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_RDRO_X18", true, true);
			POPULATION::_0xEC116EDB683AD479(1);
			GRAPHICS::SET_TIMECYCLE_MODIFIER("MP_reduceGlobalTemperature");
			func_83(1);
		}
		if (func_84() || bParam0)
		{
			if (func_233())
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
	if (func_235())
	{
		if (((!func_82(8) && !STREAMING::_0xCF45DF50C7775F2A()) && !func_236(-1562607865)) || bParam0)
		{
			func_237(-1562607865);
			func_83(8);
		}
	}
}

void func_81(int iParam0)
{
	Global_1939655.f_84 = (Global_1939655.f_84 - (Global_1939655.f_84 && iParam0));
}

bool func_82(int iParam0)
{
	return (Global_1939655.f_84 && iParam0) != 0;
}

void func_83(int iParam0)
{
	Global_1939655.f_84 = (Global_1939655.f_84 || iParam0);
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
	if (((func_82(8) && !STREAMING::_0xCF45DF50C7775F2A()) && !func_236(-1562607865)) || bParam0)
	{
		func_238(-1562607865);
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

bool func_87(int iParam0)
{
	if (Global_1051252.f_15 && func_59(Global_1051252.f_14, iParam0))
	{
		return false;
	}
	if (func_59(Global_1051252.f_13, iParam0))
	{
		return false;
	}
	return true;
}

bool func_88(char* sParam0, int iParam1, int iParam2)
{
	SCRIPTS::REQUEST_SCRIPT(sParam0);
	if (SCRIPTS::HAS_SCRIPT_LOADED(sParam0) && MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(iParam2) > 0)
	{
		Global_1051252.f_16[iParam1] = SCRIPTS::START_NEW_SCRIPT(sParam0, iParam2);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam0);
		return true;
	}
	return false;
}

Vector3 func_89()
{
	vector3 vVar0;
	struct<19> Var3;

	Var3 = { func_239(0) };
	if (Var3.f_8 != joaat("KIT_CAMP"))
	{
	}
	if (((Var3.f_16 == 0 && Var3.f_18 == 0) && Global_17411.f_55.f_4.f_2 != 0) && Global_17411.f_55.f_4 >= 4)
	{
		vVar0 = { Global_17411.f_55.f_4 };
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
	return func_240(Global_1134390[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_73, iParam0);
}

bool func_91(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<7> Var2;
	struct<10> Var9;
	int iVar19;

	if (!GANG::_0xD6F6ACF4392187FB(iParam0))
	{
		return false;
	}
	iVar0 = GANG::_0x4BE6C13A45CCA8EC(iParam0);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		if (iVar0 == PLAYER::PLAYER_ID())
		{
			POSSE::_0xC08AFF658B2E51DA(&iVar1);
			if (iVar1 != 0)
			{
				return true;
			}
		}
		else
		{
			Var2 = { func_241(iVar0) };
			iVar19 = 0;
			while (iVar19 <= (POSSE::_0xC084FF658B2E61DA(&Var2) - 1))
			{
				if ((POSSE::_0xC084FF658B2E81DA(&Var2, iVar19, &Var9) && Var9 != 0) && Var9.f_9 == 1)
				{
					return true;
				}
				iVar19++;
			}
		}
	}
	return false;
}

int func_92(vector3 vParam0)
{
	if (!func_242(vParam0, 0))
	{
		return 0;
	}
	func_243(64);
	return 1;
}

void func_93(int iParam0)
{
	if (Global_1132288.f_2018 != iParam0)
	{
		Global_1132288.f_2018 = iParam0;
	}
}

var func_94()
{
	return Global_1132288.f_2018;
}

void func_95(var uParam0, int iParam1)
{
	func_244(uParam0, iParam1);
}

void func_96(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = MISC::GET_FRAME_COUNT();
	iVar1 = MISC::_GET_SYSTEM_TIME();
	Global_1102219 = iParam0;
	Global_1102219.f_3571 = iVar1;
	Global_1102219.f_3572 = iVar0;
	Global_1102219.f_3573 = 0;
}

bool func_97(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_98(vector3 vParam0)
{
	return func_245(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
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
	else if (iParam0 <= 134)
	{
		return 15;
	}
	else if (iParam0 <= 138)
	{
		return 16;
	}
	return -1;
}

bool func_100(var uParam0, float fParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;

	uVar0 = Global_1071686.f_23887.f_366[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/];
	iVar1 = func_246(uVar0);
	if (iVar1 <= 0)
	{
		return false;
	}
	else
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
		if (func_247(uVar0, iVar2, uParam0, fParam1))
		{
			return true;
		}
	}
	return false;
}

int func_101(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_248();
	if (func_249(iVar0))
	{
		if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1887339[iVar0 /*36*/].f_4, vParam0))
		{
			return iVar0;
		}
	}
	return func_250(vParam0, iParam3);
}

void func_102(bool bParam0)
{
	if (!bParam0)
	{
		func_251(18);
	}
	else
	{
		func_252(18);
	}
}

void func_103(bool bParam0)
{
	if (!bParam0)
	{
		func_251(24);
	}
	else
	{
		func_252(24);
	}
}

void func_104(int iParam0, bool bParam1)
{
	var uVar0;
	struct<7> Var30;

	if (!func_100(&(Var30.f_6), &Var30))
	{
		Var30.f_6 = { Global_1071686.f_23887.f_366[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
		Var30 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
	}
	Var30.f_5 = 1;
	func_252(88);
	if (func_253(iParam0, &uVar0))
	{
		func_109(&uVar0, &Var30, 1, 1, 1);
		if (bParam1)
		{
			func_251(0);
		}
		return;
	}
	func_116(Var30.f_6, Var30, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 1, 1);
	if (bParam1)
	{
		func_251(0);
	}
}

void func_105(bool bParam0)
{
	if (bParam0)
	{
		func_252(56);
	}
	else
	{
		func_251(56);
	}
}

void func_106(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		if (iParam1 != -1)
		{
			Global_1102219.f_3809 = 0;
		}
		else
		{
			Global_1102219.f_3809 = 1;
		}
		func_252(58);
		Global_1102219.f_3808 = iParam1;
	}
	else
	{
		func_251(58);
	}
}

void func_107(int iParam0)
{
	func_35(&(Global_1572887.f_266.f_63), iParam0);
}

void func_108()
{
	func_252(90);
}

void func_109(var uParam0, float fParam1, int iParam2, bool bParam3, int iParam4)
{
	if (func_149(255) == 4)
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
			uParam0->f_17 = Global_1901947.f_50.f_1;
			uParam0->f_17.f_1 = Global_1901947.f_50.f_1;
			uParam0->f_17.f_2 = Global_1901947.f_50.f_1;
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
	func_252(0);
	func_252(3);
	Global_1102219.f_3919 = iParam2;
	Global_1102219.f_3920 = bParam3;
	Global_1102219.f_3921 = iParam4;
	func_120(&(Global_1102219.f_3849));
	Global_1102219.f_3849 = { *uParam0 };
	func_121(&(Global_1102219.f_3888));
	Global_1102219.f_3888 = { *fParam1 };
	Global_1102219.f_26.f_3341 = 0;
	Global_1102219.f_26.f_3342 = 0;
	func_254(Global_1102219.f_3849, 36);
	func_255(Global_1102219.f_3888, 36);
}

void func_110()
{
	func_252(89);
	func_252(88);
}

void func_111(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_252(66);
		if (bParam1)
		{
			func_252(69);
		}
	}
	else
	{
		func_251(66);
		func_251(69);
	}
}

void func_112(bool bParam0)
{
	if (bParam0)
	{
		func_252(52);
	}
	else
	{
		func_251(52);
	}
}

void func_113()
{
	func_256(1);
	func_257(1, 1);
}

void func_114(bool bParam0)
{
	if (bParam0)
	{
		func_252(54);
	}
	else
	{
		func_251(54);
	}
}

void func_115()
{
	func_258(1);
	func_257(1, 1);
}

void func_116(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, float fParam8)
{
	vector3 vVar0;
	int iVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
	iVar3 = iParam3;
	if (!func_122(Global_1296859.f_17, &vVar0, &iVar3))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
		iVar3 = iParam3;
	}
	func_259(vParam0, iParam3, vVar0, iVar3, iParam4, iParam5, iParam6, iParam7, fParam8, 1);
}

bool func_117()
{
	int iVar0;
	int iVar1;

	iVar0 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (!GANG::_0x0F99F6436528A089(iVar0))
	{
		return false;
	}
	iVar1 = GANG::_0x4BE6C13A45CCA8EC(iVar0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
	{
		return false;
	}
	if (iVar1 == PLAYER::PLAYER_ID())
	{
		return false;
	}
	return true;
}

void func_118()
{
	int iVar0;
	struct<18> Var1;
	struct<7> Var31;

	iVar0 = PLAYER::GET_PLAYER_PED(GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
	Var1.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
	Var1.f_17 = { 25f, 25f, 25f };
	Var1.f_17.f_9 = joaat("VOLSPHERE");
	Var1.f_4 = iVar0;
	Var1.f_5 = 3;
	func_100(&(Var31.f_6), &Var31);
	Var31.f_5 = 1;
	func_109(&Var1, &Var31, 1, 1, 1);
	if (PED::IS_PED_ON_MOUNT(iVar0))
	{
		func_111(1, 0);
	}
}

Vector3 func_119(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_17411.f_2944[1 /*3*/];
		default:
			break;
	}
	return func_260();
}

void func_120(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_121(float fParam0)
{
	struct<9> Var0;

	*fParam0 = { Var0 };
}

bool func_122(vector3 vParam0, var uParam3, int iParam4)
{
	var uVar0;
	int iVar1;
	int iVar2;

	uVar0 = Global_1071686.f_23887.f_366[func_261(vParam0) /*272*/];
	iVar1 = func_246(uVar0);
	if (iVar1 <= 0)
	{
		return false;
	}
	else
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
		if (func_247(uVar0, iVar2, uParam3, iParam4))
		{
			return true;
		}
	}
	return false;
}

Vector3 func_123(vector3 vParam0, int iParam3)
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
			Var21 = { func_262(iVar0) };
			vVar5[iVar1 /*3*/] = { Var21.f_5 };
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
				fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar5[iVar1 /*3*/], true);
			}
			else if (fVar4 > MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar5[iVar1 /*3*/], true))
			{
				iVar3 = iVar1;
				fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar5[iVar1 /*3*/], true);
			}
			iVar1++;
		}
		return vVar5[iVar3 /*3*/];
	}
	return 0f, 0f, 0f;
}

bool func_124(int iParam0, var uParam1)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	var uVar7;

	*uParam1 = { func_260() };
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
				case joaat("CUMBERLAND_FOREST_CAMP"):
				case joaat("GRIZZLIES_CAMP"):
				case joaat("HEARTLAND_CAMP"):
				case joaat("BIG_VALLEY_CAMP"):
				default:
					*uParam1 = { -319.24f, 797.04f, 116.89f };
					break;
					*uParam1 = { -319.24f, 797.04f, 116.89f };
					break;
				case joaat("HENNIGANS_STEAD_CAMP"):
				case joaat("RIO_BRAVO_CAMP"):
				case joaat("GREAT_PLAINS_CAMP"):
				case joaat("TALL_TREES_CAMP"):
				case joaat("CHOLLA_SPRINGS_CAMP"):
				case joaat("GAPTOOTH_RIDGE_CAMP"):
					*uParam1 = { -3678.34f, -2623.56f, -14.24f };
					break;
				case joaat("ROANOKE_RIDGE_CAMP"):
				case joaat("BAYOU_NAWAS_CAMP"):
				case joaat("SCARLETT_MEADOWS_CAMP"):
					*uParam1 = { 2822.76f, -1313f, 46.34f };
					break;
			}
			break;
		case 4:
			iVar3 = func_263();
			if (iVar3 != -1)
			{
				if (func_264(iVar3, &vVar4, &uVar7))
				{
					*uParam1 = { vVar4 };
				}
			}
			break;
		case 5:
			if (func_265())
			{
				*uParam1 = { 1440.138f, 369.3305f, 88.016f };
			}
			break;
		case 6:
			*uParam1 = { -1789.972f, -372.0744f, 158.8352f };
			break;
	}
	return !func_97(*uParam1);
}

void func_125(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_266(iParam0, &iVar0, &iVar1);
	if (!func_267(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_268(iVar0, iVar1);
}

void func_126(bool bParam0)
{
	if (!bParam0)
	{
		func_251(20);
	}
	else
	{
		func_252(20);
	}
}

void func_127(vector3 vParam0, float fParam3, bool bParam4)
{
	if (func_269(vParam0, fParam3))
	{
		func_257(1, bParam4);
	}
}

bool func_128()
{
	int iVar0;

	iVar0 = 1;
	while (iVar0 <= 4)
	{
		if (Global_1139381.f_4912[iVar0 /*3*/].f_1 && !Global_1139381.f_4912[iVar0 /*3*/].f_2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

Vector3 func_129(int iParam0, bool bParam1)
{
	vector3 vVar0;
	var uVar3;

	vVar0 = { 0f, 0f, 0f };
	if (!func_249(iParam0))
	{
		return vVar0;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1887339[iParam0 /*36*/].f_4))
	{
		vVar0 = { VOLUME::_GET_VOLUME_COORDS(Global_1887339[iParam0 /*36*/].f_4) };
		if (bParam1)
		{
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, false))
			{
				vVar0.f_2 = uVar3;
			}
		}
	}
	return vVar0;
}

bool func_130()
{
	int iVar0;

	iVar0 = 9;
	while (iVar0 <= 12)
	{
		if (Global_1139381.f_4912[iVar0 /*3*/].f_1 && !Global_1139381.f_4912[iVar0 /*3*/].f_2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_131(int iParam0)
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

void func_132()
{
	Global_1071686.f_5 = 1;
	Global_1051252.f_43 = (MISC::GET_GAME_TIMER() - Global_1051252.f_40);
}

void func_133()
{
	func_270(256);
}

bool func_134()
{
	return false;
}

void func_135(int iParam0)
{
	Global_1896622.f_41 = iParam0;
}

void func_136()
{
	func_271();
	func_272();
	func_273();
	func_274();
}

void func_137(int iParam0)
{
	int iVar0;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1956200.f_5.f_7))
	{
		return;
	}
	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1956200.f_5.f_7) > iParam0)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1956200.f_5.f_7, iParam0);
		if (iVar0 == Global_1956200.f_5.f_14[iParam0 /*102*/])
		{
			return;
		}
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1956200.f_5.f_7, iParam0, "pause_info_panel_list", Global_1956200.f_5.f_14[iParam0 /*102*/]);
}

void func_138()
{
	int iVar0;

	func_275();
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_276(iVar0)))
		{
			STREAMING::REQUEST_NAMED_PTFX_ASSET(MISC::GET_HASH_KEY(func_276(iVar0)));
		}
		iVar0++;
	}
}

void func_139()
{
	BRAIN::ENABLE_SCRIPT_BRAIN_SET(1);
}

void func_140()
{
	BRAIN::ENABLE_SCRIPT_BRAIN_SET(4);
}

void func_141()
{
	BRAIN::DISABLE_SCRIPT_BRAIN_SET(2);
}

void func_142()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	iVar0 = func_277();
	iVar1 = func_278();
	Var2 = 7;
	Var2.f_1 = 10;
	Var2.f_1.f_11 = 10;
	Var2.f_1.f_11.f_11 = 10;
	Var2.f_1.f_11.f_11.f_11 = 10;
	Var2.f_1.f_11.f_11.f_11.f_11 = 10;
	Var2.f_1.f_11.f_11.f_11.f_11.f_11 = 10;
	Var2.f_1.f_11.f_11.f_11.f_11.f_11.f_11 = 10;
	while (iVar1 > 0)
	{
		iVar1 = (iVar1 - 1);
		func_279(&iVar0, 0, 0, 0, 1, 0, 0);
	}
	iVar1 = 0;
	while (iVar1 < 7)
	{
		Global_1297612.f_34[iVar1 /*10*/] = { func_280(iVar0, iVar1, &Var2) };
		func_281(&iVar0, 0, 0, 0, 1, 0, 0, 0);
		iVar1++;
	}
}

void func_143()
{
	LAW::_0x062B4A4A3396351D(PLAYER::PLAYER_ID());
	LAW::_0x55F37F5F3F2475E1();
}

void func_144(bool bParam0)
{
	int iVar0;

	iVar0 = MAP::GET_MAIN_PLAYER_BLIP_ID();
	if (func_282(PLAYER::PLAYER_ID(), 1) && !bParam0)
	{
		MAP::_BLIP_SET_MODIFIER(iVar0, -600115211);
		MAP::_BLIP_REMOVE_MODIFIER(iVar0, -706674318);
	}
	else if (func_283(PLAYER::PLAYER_ID(), 1) && !bParam0)
	{
		MAP::_BLIP_REMOVE_MODIFIER(iVar0, -600115211);
		MAP::_BLIP_SET_MODIFIER(iVar0, -706674318);
	}
	else
	{
		MAP::_BLIP_REMOVE_MODIFIER(iVar0, -600115211);
		MAP::_BLIP_REMOVE_MODIFIER(iVar0, -706674318);
	}
}

bool func_145(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!Global_1139381.f_5560)
	{
		return false;
	}
	if (iParam0 == Global_1296859.f_154[Global_1296859])
	{
		return ((Global_17411.f_2621.f_2 == 2 || (bParam1 && Global_17411.f_2621.f_2 == 1)) || (bParam2 && Global_17411.f_2621.f_2 == 3));
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
	return ((Global_1100469[iVar0 /*53*/].f_48 == 2 || (bParam1 && Global_1100469[iVar0 /*53*/].f_48 == 1)) || (bParam2 && Global_1100469[iVar0 /*53*/].f_48 == 3));
}

void func_146(int iParam0, int iParam1)
{
	if (Global_1051436.f_1)
	{
	}
	Global_1051436.f_1 = iParam0;
	if (!func_284(iParam1))
	{
		return;
	}
	Global_1051436.f_2 = 0;
	Global_1051436 = Global_1901947.f_44;
	SCRIPTS::_0xBE7D814CFA181B56();
	if (!Global_1051436.f_1)
	{
		func_285("BGS_CONFIRM", 15000, 0, 0, 0, 1);
	}
	Global_1051436.f_1 = 0;
}

void func_147()
{
	Global_1071686.f_23887.f_366.f_4084 = -1;
	Global_1071686.f_23887 = 1;
}

void func_148()
{
	NETWORK::RESERVE_NETWORK_CLIENT_MISSION_PEDS((1 + NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false)));
}

int func_149(int iParam0)
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

var func_150(int iParam0, int iParam1)
{
	return func_286(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("VOLCYLINDER"), iParam0, iParam1);
}

void func_151(struct<19> Param0, var uParam19, bool bParam20, bool bParam21)
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
				func_287(&(Global_1071686.f_23044), Var0);
				return;
			}
		}
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param0, 19, 7, &uParam19);
}

void func_152()
{
	struct<2> Var0;

	Var0 = { func_210(0) };
	if (func_18(Var0))
	{
		Global_1056141[Global_1296859 /*471*/].f_2 = { func_210(0) };
	}
	else
	{
		func_288(&(Global_1056141[Global_1296859 /*471*/].f_2));
	}
}

void func_153()
{
	var uVar0;

	if (!func_289())
	{
		return;
	}
	NETWORK::NETWORK_GET_LOCAL_HANDLE(&uVar0);
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(&uVar0))
	{
		return;
	}
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(&(Global_1145091[PLAYER::PLAYER_ID() /*35*/].f_1)) || !NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1145091[PLAYER::PLAYER_ID() /*35*/].f_1), &uVar0))
	{
		MISC::_COPY_MEMORY(&(Global_1145091[PLAYER::PLAYER_ID() /*35*/].f_1), &uVar0, 7);
	}
}

void func_154()
{
	Global_1145091[Global_1296859 /*35*/] = NETWORK::_NETWORK_GET_RANK();
}

void func_155()
{
	int iVar0;

	if (!Global_1572887.f_9)
	{
		return;
	}
	Global_1291071[Global_1296859] = Global_1071686.f_21416.f_1[Global_1296859 /*8*/].f_7;
	Global_1056141[Global_1296859 /*471*/].f_10 = Global_1071686.f_21416.f_259;
	Global_1056141[Global_1296859 /*471*/].f_9 = Global_1071686.f_21416.f_258;
	SCRIPTS::_0xDE544B7EC0C187CC(&(Global_1071686.f_21416.f_259));
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (iVar0 == Global_1296859)
		{
		}
		else if (!Global_1296859.f_22[iVar0])
		{
		}
		else if (func_290(Global_1296859.f_154[iVar0], 0))
		{
			if (func_240(Global_1291071[iVar0], 16))
			{
				SCRIPTS::_0xFFDDF802279BE128(&(Global_1056141[iVar0 /*471*/].f_9), &(Global_1071686.f_21416.f_259), &(Global_1071686.f_21416.f_259));
			}
		}
		iVar0++;
	}
}

void func_156()
{
	struct<35> Var0;

	Var0 = { func_225(0) };
	if (Var0)
	{
		if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), Var0.f_16.f_2) > Global_1901947.f_1.f_25)
		{
			func_291();
			func_292(&Var0);
		}
	}
	func_293();
	func_295((func_294() + 1 % 10));
	func_296();
}

void func_157()
{
	bool bVar0;
	int iVar1;

	if (Global_1291106[Global_1296859 /*19*/].f_1 & 1 != 0)
	{
		Global_1291106[Global_1296859 /*19*/].f_5 = Global_1291734.f_11.f_51;
	}
	else
	{
		Global_1291106[Global_1296859 /*19*/].f_5 = -1;
	}
	if (Global_1291106[Global_1296859 /*19*/].f_1 & 2 != 0)
	{
		if (!NETWORK::_NETWORK_IS_SCRIPT_ACTIVE_HASH(Global_1291106[Global_1296859 /*19*/].f_9, Global_1291106[Global_1296859 /*19*/].f_10, Global_1291106[Global_1296859 /*19*/].f_1 & 4 != 0, 0))
		{
			func_297(2);
			Global_1291106[Global_1296859 /*19*/].f_9 = 0;
			Global_1291106[Global_1296859 /*19*/].f_10 = -1;
		}
	}
	if (Global_1291106[Global_1296859 /*19*/].f_1 & 16 != 0)
	{
		if (!NETWORK::_NETWORK_IS_SCRIPT_ACTIVE_HASH(Global_1291106[Global_1296859 /*19*/].f_9, Global_1291106[Global_1296859 /*19*/].f_10, true, 0))
		{
			func_297(16);
			Global_1291106[Global_1296859 /*19*/].f_9 = 0;
			Global_1291106[Global_1296859 /*19*/].f_10 = -1;
		}
	}
	if (Global_1291106[Global_1296859 /*19*/].f_2 & 1 != 0)
	{
		Global_1291106[Global_1296859 /*19*/].f_6 = Global_1291734.f_581.f_46;
	}
	else
	{
		Global_1291106[Global_1296859 /*19*/].f_6 = -1;
	}
	if (Global_1291106[Global_1296859 /*19*/].f_2 & 8 != 0)
	{
		if (!NETWORK::_NETWORK_IS_SCRIPT_ACTIVE_HASH(Global_1291106[Global_1296859 /*19*/].f_11, Global_1291106[Global_1296859 /*19*/].f_12, Global_1291106[Global_1296859 /*19*/].f_2 & 16 != 0, 0))
		{
			func_298(8);
			Global_1291106[Global_1296859 /*19*/].f_11 = 0;
			Global_1291106[Global_1296859 /*19*/].f_12 = -1;
		}
	}
	if (func_299(54))
	{
		Global_1291106[Global_1296859 /*19*/].f_1 |= 262144;
	}
	else
	{
		Global_1291106[Global_1296859 /*19*/].f_1 = (Global_1291106[Global_1296859 /*19*/].f_1 - Global_1291106[Global_1296859 /*19*/].f_1 & 262144);
	}
	if (func_299(55))
	{
		Global_1291106[Global_1296859 /*19*/].f_1 |= 256;
	}
	else
	{
		Global_1291106[Global_1296859 /*19*/].f_1 = (Global_1291106[Global_1296859 /*19*/].f_1 - Global_1291106[Global_1296859 /*19*/].f_1 & 256);
	}
	if (func_299(56))
	{
		Global_1291106[Global_1296859 /*19*/].f_1 |= 512;
	}
	else
	{
		Global_1291106[Global_1296859 /*19*/].f_1 = (Global_1291106[Global_1296859 /*19*/].f_1 - Global_1291106[Global_1296859 /*19*/].f_1 & 512);
	}
	if (func_299(57))
	{
		Global_1291106[Global_1296859 /*19*/].f_1 |= 64;
	}
	else
	{
		Global_1291106[Global_1296859 /*19*/].f_1 = (Global_1291106[Global_1296859 /*19*/].f_1 - Global_1291106[Global_1296859 /*19*/].f_1 & 64);
	}
	if (func_299(58))
	{
		Global_1291106[Global_1296859 /*19*/].f_1 |= 32;
	}
	else
	{
		Global_1291106[Global_1296859 /*19*/].f_1 = (Global_1291106[Global_1296859 /*19*/].f_1 - Global_1291106[Global_1296859 /*19*/].f_1 & 32);
	}
	if (func_299(59))
	{
		Global_1291106[Global_1296859 /*19*/].f_1 |= 128;
	}
	else
	{
		Global_1291106[Global_1296859 /*19*/].f_1 = (Global_1291106[Global_1296859 /*19*/].f_1 - Global_1291106[Global_1296859 /*19*/].f_1 & 128);
	}
	if (func_299(60))
	{
		Global_1291106[Global_1296859 /*19*/].f_1 |= 1024;
	}
	else
	{
		Global_1291106[Global_1296859 /*19*/].f_1 = (Global_1291106[Global_1296859 /*19*/].f_1 - Global_1291106[Global_1296859 /*19*/].f_1 & 1024);
	}
	if (func_299(61))
	{
		Global_1291106[Global_1296859 /*19*/].f_1 |= 2048;
	}
	else
	{
		Global_1291106[Global_1296859 /*19*/].f_1 = (Global_1291106[Global_1296859 /*19*/].f_1 - Global_1291106[Global_1296859 /*19*/].f_1 & 2048);
	}
	if (func_299(67))
	{
		bVar0 = true;
		if (Global_1291734.f_11.f_306 == 0)
		{
			bVar0 = false;
		}
		if (bVar0 && !SCRIPTS::_DOES_THREAD_EXIST(Global_1291734.f_11.f_306))
		{
			bVar0 = false;
		}
		if (bVar0 && !SCRIPTS::IS_THREAD_ACTIVE(Global_1291734.f_11.f_306, false))
		{
			bVar0 = false;
		}
		if (!bVar0)
		{
			Global_1291734.f_11.f_306 = 0;
			func_300(67);
		}
	}
	if (func_299(67))
	{
		Global_1291106[Global_1296859 /*19*/].f_1 |= 8;
	}
	else
	{
		Global_1291106[Global_1296859 /*19*/].f_1 = (Global_1291106[Global_1296859 /*19*/].f_1 - Global_1291106[Global_1296859 /*19*/].f_1 & 8);
	}
	if (func_299(68))
	{
		Global_1291106[Global_1296859 /*19*/].f_1 |= 16384;
	}
	else
	{
		Global_1291106[Global_1296859 /*19*/].f_1 = (Global_1291106[Global_1296859 /*19*/].f_1 - Global_1291106[Global_1296859 /*19*/].f_1 & 16384);
	}
	if (Global_17411.f_55.f_61.f_582 & 262144 != 0)
	{
		Global_1291106[Global_1296859 /*19*/].f_1 |= 8192;
	}
	else
	{
		Global_1291106[Global_1296859 /*19*/].f_1 = (Global_1291106[Global_1296859 /*19*/].f_1 - Global_1291106[Global_1296859 /*19*/].f_1 & 8192);
	}
	if ((((func_299(9) || func_299(10)) || func_299(11)) || func_299(12)) || func_299(13))
	{
		if (func_299(9))
		{
			Global_1291106[Global_1296859 /*19*/] |= 1;
		}
		else
		{
			Global_1291106[Global_1296859 /*19*/] = (Global_1291106[Global_1296859 /*19*/] - Global_1291106[Global_1296859 /*19*/] & 1);
		}
		if (func_299(10))
		{
			Global_1291106[Global_1296859 /*19*/] |= 2;
		}
		else
		{
			Global_1291106[Global_1296859 /*19*/] = (Global_1291106[Global_1296859 /*19*/] - Global_1291106[Global_1296859 /*19*/] & 2);
		}
		if (func_299(11))
		{
			Global_1291106[Global_1296859 /*19*/] |= 4;
		}
		else
		{
			Global_1291106[Global_1296859 /*19*/] = (Global_1291106[Global_1296859 /*19*/] - Global_1291106[Global_1296859 /*19*/] & 4);
		}
		if (func_299(12))
		{
			Global_1291106[Global_1296859 /*19*/] |= 8;
		}
		else
		{
			Global_1291106[Global_1296859 /*19*/] = (Global_1291106[Global_1296859 /*19*/] - Global_1291106[Global_1296859 /*19*/] & 8);
		}
		if (func_299(13))
		{
			Global_1291106[Global_1296859 /*19*/] |= 16;
		}
		else
		{
			Global_1291106[Global_1296859 /*19*/] = (Global_1291106[Global_1296859 /*19*/] - Global_1291106[Global_1296859 /*19*/] & 16);
		}
	}
	else
	{
		if (Global_17411.f_55.f_61.f_582 & 1 != 0)
		{
			Global_1291106[Global_1296859 /*19*/] |= 1;
		}
		else
		{
			Global_1291106[Global_1296859 /*19*/] = (Global_1291106[Global_1296859 /*19*/] - Global_1291106[Global_1296859 /*19*/] & 1);
		}
		if (Global_17411.f_55.f_61.f_582 & 2 != 0)
		{
			Global_1291106[Global_1296859 /*19*/] |= 2;
		}
		else
		{
			Global_1291106[Global_1296859 /*19*/] = (Global_1291106[Global_1296859 /*19*/] - Global_1291106[Global_1296859 /*19*/] & 2);
		}
		if (Global_17411.f_55.f_61.f_582 & 4 != 0)
		{
			Global_1291106[Global_1296859 /*19*/] |= 4;
		}
		else
		{
			Global_1291106[Global_1296859 /*19*/] = (Global_1291106[Global_1296859 /*19*/] - Global_1291106[Global_1296859 /*19*/] & 4);
		}
		if (Global_17411.f_55.f_61.f_582 & 8 != 0)
		{
			Global_1291106[Global_1296859 /*19*/] |= 8;
		}
		else
		{
			Global_1291106[Global_1296859 /*19*/] = (Global_1291106[Global_1296859 /*19*/] - Global_1291106[Global_1296859 /*19*/] & 8);
		}
		if (Global_17411.f_55.f_61.f_582 & 16 != 0)
		{
			Global_1291106[Global_1296859 /*19*/] |= 16;
		}
		else
		{
			Global_1291106[Global_1296859 /*19*/] = (Global_1291106[Global_1296859 /*19*/] - Global_1291106[Global_1296859 /*19*/] & 16);
		}
	}
	iVar1 = Global_1291106[Global_1296859 /*19*/].f_3;
	if ((((func_299(19) || func_299(20)) || func_299(21)) || func_299(22)) || func_299(23))
	{
		if (func_299(19))
		{
			Global_1291106[Global_1296859 /*19*/].f_3 |= 1;
		}
		else
		{
			Global_1291106[Global_1296859 /*19*/].f_3 = (Global_1291106[Global_1296859 /*19*/].f_3 - Global_1291106[Global_1296859 /*19*/].f_3 & 1);
		}
		if (func_299(20))
		{
			Global_1291106[Global_1296859 /*19*/].f_3 |= 2;
		}
		else
		{
			Global_1291106[Global_1296859 /*19*/].f_3 = (Global_1291106[Global_1296859 /*19*/].f_3 - Global_1291106[Global_1296859 /*19*/].f_3 & 2);
		}
		if (func_299(21))
		{
			Global_1291106[Global_1296859 /*19*/].f_3 |= 4;
		}
		else
		{
			Global_1291106[Global_1296859 /*19*/].f_3 = (Global_1291106[Global_1296859 /*19*/].f_3 - Global_1291106[Global_1296859 /*19*/].f_3 & 4);
		}
		if (func_299(22))
		{
			Global_1291106[Global_1296859 /*19*/].f_3 |= 8;
		}
		else
		{
			Global_1291106[Global_1296859 /*19*/].f_3 = (Global_1291106[Global_1296859 /*19*/].f_3 - Global_1291106[Global_1296859 /*19*/].f_3 & 8);
		}
		if (func_299(23))
		{
			Global_1291106[Global_1296859 /*19*/].f_3 |= 16;
		}
		else
		{
			Global_1291106[Global_1296859 /*19*/].f_3 = (Global_1291106[Global_1296859 /*19*/].f_3 - Global_1291106[Global_1296859 /*19*/].f_3 & 16);
		}
	}
	else
	{
		if (Global_17411.f_55.f_61.f_582 & 262144 != 0)
		{
			Global_1291106[Global_1296859 /*19*/].f_3 |= 1;
		}
		else
		{
			Global_1291106[Global_1296859 /*19*/].f_3 = (Global_1291106[Global_1296859 /*19*/].f_3 - Global_1291106[Global_1296859 /*19*/].f_3 & 1);
		}
		if (Global_17411.f_55.f_61.f_582 & 524288 != 0)
		{
			Global_1291106[Global_1296859 /*19*/].f_3 |= 2;
		}
		else
		{
			Global_1291106[Global_1296859 /*19*/].f_3 = (Global_1291106[Global_1296859 /*19*/].f_3 - Global_1291106[Global_1296859 /*19*/].f_3 & 2);
		}
		if (Global_17411.f_55.f_61.f_582 & 1048576 != 0)
		{
			Global_1291106[Global_1296859 /*19*/].f_3 |= 4;
		}
		else
		{
			Global_1291106[Global_1296859 /*19*/].f_3 = (Global_1291106[Global_1296859 /*19*/].f_3 - Global_1291106[Global_1296859 /*19*/].f_3 & 4);
		}
		if (Global_17411.f_55.f_61.f_582 & 2097152 != 0)
		{
			Global_1291106[Global_1296859 /*19*/].f_3 |= 8;
		}
		else
		{
			Global_1291106[Global_1296859 /*19*/].f_3 = (Global_1291106[Global_1296859 /*19*/].f_3 - Global_1291106[Global_1296859 /*19*/].f_3 & 8);
		}
		if (Global_17411.f_55.f_61.f_582 & 4194304 != 0)
		{
			Global_1291106[Global_1296859 /*19*/].f_3 |= 16;
		}
		else
		{
			Global_1291106[Global_1296859 /*19*/].f_3 = (Global_1291106[Global_1296859 /*19*/].f_3 - Global_1291106[Global_1296859 /*19*/].f_3 & 16);
		}
	}
	if (iVar1 != Global_1291106[Global_1296859 /*19*/].f_3)
	{
		func_301();
	}
	if ((((func_299(14) || func_299(15)) || func_299(16)) || func_299(17)) || func_299(18))
	{
		if (func_299(14))
		{
			Global_1291106[Global_1296859 /*19*/] |= 32;
		}
		else
		{
			Global_1291106[Global_1296859 /*19*/] = (Global_1291106[Global_1296859 /*19*/] - Global_1291106[Global_1296859 /*19*/] & 32);
		}
		if (func_299(15))
		{
			Global_1291106[Global_1296859 /*19*/] |= 64;
		}
		else
		{
			Global_1291106[Global_1296859 /*19*/] = (Global_1291106[Global_1296859 /*19*/] - Global_1291106[Global_1296859 /*19*/] & 64);
		}
		if (func_299(16))
		{
			Global_1291106[Global_1296859 /*19*/] |= 128;
		}
		else
		{
			Global_1291106[Global_1296859 /*19*/] = (Global_1291106[Global_1296859 /*19*/] - Global_1291106[Global_1296859 /*19*/] & 128);
		}
		if (func_299(17))
		{
			Global_1291106[Global_1296859 /*19*/] |= 256;
		}
		else
		{
			Global_1291106[Global_1296859 /*19*/] = (Global_1291106[Global_1296859 /*19*/] - Global_1291106[Global_1296859 /*19*/] & 256);
		}
		if (func_299(18))
		{
			Global_1291106[Global_1296859 /*19*/] |= 512;
		}
		else
		{
			Global_1291106[Global_1296859 /*19*/] = (Global_1291106[Global_1296859 /*19*/] - Global_1291106[Global_1296859 /*19*/] & 512);
		}
	}
	else
	{
		if (Global_17411.f_55.f_61.f_582 & 32 != 0)
		{
			Global_1291106[Global_1296859 /*19*/] |= 32;
		}
		else
		{
			Global_1291106[Global_1296859 /*19*/] = (Global_1291106[Global_1296859 /*19*/] - Global_1291106[Global_1296859 /*19*/] & 32);
		}
		if (Global_17411.f_55.f_61.f_582 & 64 != 0)
		{
			Global_1291106[Global_1296859 /*19*/] |= 64;
		}
		else
		{
			Global_1291106[Global_1296859 /*19*/] = (Global_1291106[Global_1296859 /*19*/] - Global_1291106[Global_1296859 /*19*/] & 64);
		}
		if (Global_17411.f_55.f_61.f_582 & 128 != 0)
		{
			Global_1291106[Global_1296859 /*19*/] |= 128;
		}
		else
		{
			Global_1291106[Global_1296859 /*19*/] = (Global_1291106[Global_1296859 /*19*/] - Global_1291106[Global_1296859 /*19*/] & 128);
		}
		if (Global_17411.f_55.f_61.f_582 & 256 != 0)
		{
			Global_1291106[Global_1296859 /*19*/] |= 256;
		}
		else
		{
			Global_1291106[Global_1296859 /*19*/] = (Global_1291106[Global_1296859 /*19*/] - Global_1291106[Global_1296859 /*19*/] & 256);
		}
		if (Global_17411.f_55.f_61.f_582 & 512 != 0)
		{
			Global_1291106[Global_1296859 /*19*/] |= 512;
		}
		else
		{
			Global_1291106[Global_1296859 /*19*/] = (Global_1291106[Global_1296859 /*19*/] - Global_1291106[Global_1296859 /*19*/] & 512);
		}
	}
	Global_1291734.f_919.f_2++;
	Global_1291734.f_919.f_2 = (Global_1291734.f_919.f_2 % 32);
}

void func_158()
{
}

void func_159()
{
	if (!func_59(Global_1572887.f_7, 1073741824 /* Float: 2f */))
	{
		return;
	}
	func_57(&(Global_1572887.f_7), 1073741824 /* Float: 2f */);
	if (func_302())
	{
		if (func_17())
		{
			func_303();
		}
		else if (func_74() == 3)
		{
			func_304();
		}
		else
		{
			func_305();
		}
	}
	else
	{
		func_306();
	}
}

void func_160()
{
	func_307();
	if (!func_284(9))
	{
		return;
	}
	func_146(0, 6);
}

void func_161()
{
	Global_1296473 = NETWORK::GET_NETWORK_TIME();
	switch (Global_1296473.f_1)
	{
		case 0:
			func_308();
			break;
		case 1:
			func_309();
			break;
		case 2:
			func_310();
			break;
		case 3:
			func_311();
			break;
		case 4:
			func_312();
			break;
		case 5:
			func_313();
			break;
		case 6:
			func_314();
			break;
	}
	Global_1296473.f_62 = Global_1296473;
}

void func_162()
{
	if (Global_1102219.f_26.f_3345)
	{
		if (func_315())
		{
			Global_1102219.f_26.f_3345 = 0;
		}
	}
	if (Global_1102219.f_26.f_3346)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1102219.f_26.f_3344))
		{
			ENTITY::SET_ENTITY_COORDS(Global_1102219.f_26.f_3344, Global_1102219.f_26.f_3348, false, false, true, true);
			ENTITY::SET_ENTITY_ROTATION(Global_1102219.f_26.f_3344, Global_1102219.f_26.f_3354, 2, false);
		}
		Global_1102219.f_26.f_3346 = 0;
	}
	if (Global_1102219.f_26.f_3347)
	{
		if (!func_316())
		{
			func_317();
			Global_1102219.f_26.f_3347 = 0;
		}
	}
}

void func_163()
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
		iVar1 = Global_1193972[iVar0 /*8*/];
		if (Global_1193972[iVar0 /*8*/].f_6)
		{
			iVar2 = Global_1193972[iVar0 /*8*/].f_1;
			iVar3 = Global_1193972[iVar0 /*8*/].f_2;
			iVar4 = Global_1193972[iVar0 /*8*/].f_3;
			bVar5 = Global_1193972[iVar0 /*8*/].f_4;
			if (iVar3 != 0)
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET(func_276(iVar3));
			}
			if (Global_1193972[iVar0 /*8*/].f_3 >= 0)
			{
				if (!bVar5)
				{
					iVar1 = GRAPHICS::START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(func_318(iVar2), Global_34, 0f, 0f, 0f, 0f, 0f, 0f, iVar4, 1065353216 /* Float: 1f */, 0, 0, 0);
				}
				else
				{
					iVar1 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(func_318(iVar2), Global_34, 0f, 0f, 0f, 0f, 0f, 0f, iVar4, 1f, false, false, false);
				}
			}
			else if (!bVar5)
			{
				iVar1 = GRAPHICS::START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY(func_318(iVar2), Global_34, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216 /* Float: 1f */, 0, 0, 0);
			}
			else
			{
				iVar1 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY(func_318(iVar2), Global_34, 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
			}
			Global_1193972[iVar0 /*8*/] = iVar1;
			Global_1193972[iVar0 /*8*/].f_6 = 0;
		}
		else if (Global_1193972[iVar0 /*8*/].f_7)
		{
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iVar1))
			{
				GRAPHICS::REMOVE_PARTICLE_FX(iVar1, false);
			}
			Global_1193972[iVar0 /*8*/].f_7 = 0;
		}
		iVar0++;
	}
}

void func_164()
{
	int iVar0;
	struct<8> Var1;
	int iVar9;

	func_319();
	switch (func_320())
	{
		case 0:
			if (!func_321())
			{
			}
			else if (!func_322())
			{
			}
			else
			{
				func_323(1);
				Jump @109; //curOff = 64
				if (!func_324())
				{
				}
				else
				{
					func_325();
					func_326();
					func_327();
					func_323(2);
					Jump @109; //curOff = 95
					func_328(2);
				}
			}
			iVar0 = func_329();
			if (func_330(iVar0))
			{
				func_331(13);
			}
			switch (iVar0)
			{
				case 0:
					if (!Global_1048577)
					{
					}
					else
					{
						func_331(1);
						Jump @906; //curOff = 250
						if (Global_1296859 < 0 || Global_1296859 >= 32)
						{
						}
						else if (func_332(Global_1296859) == 0)
						{
							if (func_18(func_210(0)))
							{
								func_331(2);
							}
						}
						else
						{
							func_331(2);
							Jump @906; //curOff = 315
							if (Global_1296859 < 0 || Global_1296859 >= 32)
							{
							}
							else
							{
								func_333(func_332(Global_1296859));
								if (func_334(func_332(Global_1296859)))
								{
									func_331(3);
								}
								else
								{
									func_335(1);
									func_331(4);
								}
								Jump @906; //curOff = 388
								if (!func_18(func_210(0)))
								{
								}
								else
								{
									func_331(5);
									Jump @906; //curOff = 412
									if (func_18(func_210(0)))
									{
									}
									else
									{
										func_331(15);
										Jump @906; //curOff = 436
										func_337(func_336());
										func_331(6);
										Jump @906; //curOff = 453
										if (!func_338(1))
										{
										}
										else
										{
											if (func_338(4))
											{
												func_331(8);
											}
											else
											{
												func_331(7);
											}
											Jump @906; //curOff = 490
											func_331(9);
											Jump @906; //curOff = 499
											func_339(4);
											func_331(9);
											Jump @906; //curOff = 513
											if (!func_338(2))
											{
											}
											else
											{
												if (func_338(8))
												{
													func_331(11);
												}
												else
												{
													func_331(10);
												}
												Jump @906; //curOff = 552
												switch (func_340(PLAYER::PLAYER_ID()))
												{
													case 10:
														func_341(4);
														func_331(12);
														break;
													case 2:
													case 15:
														func_331(11);
														break;
													default:
														break;
												}
												Jump @906; //curOff = 613
												func_342();
												func_331(13);
												Jump @906; //curOff = 626
												func_339(2);
												func_331(6);
												Jump @906; //curOff = 639
												if (!CAM::IS_SCREEN_FADED_IN())
												{
												}
												else if (func_343())
												{
												}
												else if (Global_1048577)
												{
												}
												else if (Global_1048584)
												{
												}
												else
												{
													Var1 = { func_345(func_344(0)) };
													if (!MISC::_IS_STRING_SPACE(func_346(Var1)))
													{
														AUDIO::PREPARE_MUSIC_EVENT(func_346(Var1));
													}
													func_331(14);
													Jump @906; //curOff = 734
													iVar9 = func_348(func_347(0));
													switch (iVar9)
													{
														case 9:
															if (!GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
															{
																if (UNLOCK::_UNLOCK_IS_UNLOCKED(-319651633))
																{
																	func_349(joaat("HELP_TEXT_POST_EXT_HAS_SETUP_MOON"));
																}
																else if (func_213(PLAYER::PLAYER_ID(), 1) != -1)
																{
																	func_350(2048);
																}
																else
																{
																	func_349(joaat("HELP_TEXT_POST_EXT_NO_GATING_ITEM"));
																}
															}
															Var1 = { func_345(func_344(0)) };
															if (!MISC::IS_STRING_NULL_OR_EMPTY(func_346(Var1)))
															{
																AUDIO::TRIGGER_MUSIC_EVENT(func_346(Var1));
															}
															break;
													}
													func_331(15);
													Jump @906; //curOff = 884
													func_351();
													func_352();
													func_331(0);
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
			default:
				break;
	}
}

void func_165()
{
	switch (func_353())
	{
		case -1:
			break;
		case 0:
			break;
		case 1:
			func_354();
			break;
		case 2:
			break;
		default:
			break;
	}
}

void func_166()
{
	Global_1108365.f_34.f_772 = (Global_1108365.f_34.f_772 + 1 % 32);
}

void func_167()
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
	if (func_355() || Global_1048585)
	{
		func_356();
	}
	iVar1 = Global_1071686.f_19648.f_21;
	Global_1056141[iVar0 /*471*/].f_425[iVar1] = Global_39.f_110[iVar1];
	if (func_357(iVar1, iVar0))
	{
		Global_1071686.f_19648.f_21++;
		if (Global_1071686.f_19648.f_21 > 17)
		{
			Global_1071686.f_19648.f_21 = 0;
		}
		func_202(iVar0, Global_1071686.f_19648.f_21);
	}
	func_358();
}

void func_168()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = Global_1071686.f_28341.f_1 + 1;
	if (iVar0 > 25)
	{
		iVar0 = 0;
	}
	Global_1071686.f_28341.f_1 = iVar0;
	if (func_359(Global_1835011[iVar0 /*72*/].f_32))
	{
		return;
	}
	func_360();
	if (Global_1139381.f_4912[iVar0 /*3*/].f_2)
	{
		if (!func_361(iVar0, PLAYER::GET_PLAYER_INDEX()))
		{
			func_362();
		}
		func_363(iVar0);
	}
	else
	{
		func_364(iVar0);
	}
	if (Global_1835011[iVar0 /*72*/].f_3 == 0)
	{
		return;
	}
	if (!func_18(Global_1835011[iVar0 /*72*/].f_1))
	{
		return;
	}
	iVar1 = GANG::_0x4BE6C13A45CCA8EC(Global_1296859.f_15);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		return;
	}
	iVar2 = func_365(Global_1835011[iVar0 /*72*/].f_1);
	if (!func_361(iVar0, iVar1))
	{
		if (iVar2 == 1)
		{
			func_366(iVar0, -1, 0, 0, 1, 0, 0);
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
	func_367(Global_1835011[iVar0 /*72*/].f_1);
}

void func_169()
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;

	if (Global_1297047.f_422)
	{
		return;
	}
	func_368();
	iVar0 = func_369();
	if (iVar0 > 0 && iVar0 < 7)
	{
		if (func_370(4))
		{
			if (!Global_1048577)
			{
				func_371(11);
			}
		}
		else if (Global_1048577)
		{
			func_372(4);
		}
	}
	iVar3 = GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar3) && Global_1056141[PLAYER::PLAYER_ID() /*471*/].f_418.f_6 != iVar3)
	{
		Global_1056141[PLAYER::PLAYER_ID() /*471*/].f_418.f_6 = iVar3;
		if ((iVar0 > 0 && iVar0 <= 3) && func_373())
		{
			func_374(8);
		}
	}
	if (func_373())
	{
		if ((iVar0 > 0 && iVar0 < 11) && func_375())
		{
			func_374(1);
			func_376();
		}
	}
	switch (iVar0)
	{
		case 0:
			if (!func_377(1))
			{
			}
			else
			{
				if (func_373())
				{
					func_371(1);
				}
				else
				{
					func_371(2);
				}
				Jump @1287; //curOff = 337
				if (!func_375())
				{
				}
				else
				{
					func_376();
					func_371(3);
					Jump @1287; //curOff = 360
					func_378();
					if (!func_375())
					{
					}
					else
					{
						func_371(3);
						Jump @1287; //curOff = 383
						if (!func_379(PLAYER::PLAYER_ID(), 1))
						{
						}
						else
						{
							if (func_373())
							{
								func_371(4);
							}
							else
							{
								func_371(6);
							}
							Jump @1287; //curOff = 422
							if (GANG::_0x149A2751AB66AC02(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) > 1)
							{
								if (!BOUNTY::_0x48E4E23F1739E197(&(Global_1297047.f_374.f_6), func_381(func_380()), func_383(func_382())))
								{
									func_371(6);
								}
								else
								{
									Jump @526; //curOff = 482
									if (!BOUNTY::_0xFC81D7C7A151CFAA(&(Global_1297047.f_374.f_6), func_381(func_380()), func_383(func_382())))
									{
										func_371(6);
									}
									else
									{
										func_384(MISC::GET_GAME_TIMER());
										func_372(1);
										func_371(5);
										Jump @1287; //curOff = 544
										if (func_370(536870912))
										{
											func_384(MISC::GET_GAME_TIMER());
											func_374(4);
											func_371(6);
											func_385();
										}
										else if (func_370(1073741824 /* Float: 2f */))
										{
											func_371(6);
											func_385();
										}
										else if (func_370(268435456))
										{
											func_371(6);
											func_385();
										}
										Jump @1287; //curOff = 629
										if (func_377(4))
										{
											func_372(8);
										}
										if (!func_386())
										{
										}
										else
										{
											func_371(8);
											Jump @1287; //curOff = 663
											if (func_370(8))
											{
												func_388(func_387());
												func_391(func_390(joaat("CURRENCY_GOLD_BAR"), func_389(1), 1084182731, 1, 0, 0));
												func_393(func_392(0));
												func_394(func_392(7));
												func_395();
												BOUNTY::_0xA7309AC0DCF6D950(&(Global_1297047.f_374.f_6), &(Global_1297047.f_374.f_16.f_1));
												func_372(32);
												func_384(MISC::GET_GAME_TIMER());
												func_372(2);
												func_371(9);
											}
											else
											{
												func_371(11);
											}
											Jump @1287; //curOff = 790
											if (func_370(1879048192))
											{
												func_371(7);
												func_396();
												func_385();
												BOUNTY::_0x2BA1BCC99826CDA2();
											}
											Jump @1287; //curOff = 822
											if (!CAM::IS_SCREEN_FADED_IN())
											{
											}
											else if (func_343())
											{
											}
											else if (Global_1048577)
											{
											}
											else if (Global_1048584)
											{
											}
											else
											{
												func_371(10);
												Jump @1287; //curOff = 872
												if (!func_397())
												{
													if (func_370(32))
													{
														func_398();
														func_399(32);
													}
												}
												iVar1 = (func_387() - func_400());
												if (iVar1 > 0)
												{
													func_401(MISC::_CREATE_VAR_STRING(2, "FEED_MONEY_EARN", iVar1), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
												}
												iVar1 = (func_390(joaat("CURRENCY_GOLD_BAR"), func_389(1), 1084182731, 1, 0, 0) - func_402());
												if (iVar1 > 0)
												{
													fVar2 = (IntToFloat(func_403(iVar1)) + (IntToFloat(func_404(iVar1, 1)) * (1f / 100f)));
													func_401(MISC::_CREATE_VAR_STRING(6, "SHOP_GOLD_PRICE_READ", fVar2), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GOLD"), 0, joaat("COLOR_CASH_GOLD"), 0, 0, 0, 1);
												}
												iVar1 = (func_392(0) - func_405());
												if (iVar1 > 0)
												{
													func_401(MISC::_CREATE_VAR_STRING(2, "PLAYER_RPG_XP_GAIN", iVar1), "itemtype_textures", joaat("TRANSACTION_XP"), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
												}
												iVar1 = (func_392(7) - func_406());
												if (iVar1 > 0)
												{
													func_401(MISC::_CREATE_VAR_STRING(2, "NET_TRADE_BOUNTY_HUNTER_XP", iVar1), "itemtype_textures", joaat("TRANSACTION_XP"), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
												}
												if (func_382() != 0)
												{
													func_371(11);
												}
												else
												{
													if (func_407() == 4)
													{
														func_408(1);
													}
													else if (func_407() < 4 && func_370(16))
													{
														func_408(2);
													}
													func_408(4);
													func_371(11);
													Jump @1287; //curOff = 1237
													BOUNTY::_0x2BA1BCC99826CDA2();
													func_409();
													func_410();
													func_411();
													func_371(12);
													Jump @1287; //curOff = 1262
													if (func_377(1))
													{
													}
													else
													{
														func_371(0);
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

void func_170()
{
	func_412();
}

void func_171()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar2 = PLAYER::PLAYER_ID();
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = func_413();
		iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (iVar3 == iVar2)
		{
			func_414((iVar1 + 1 % 32));
		}
		else
		{
			switch (func_415(iVar1))
			{
				case 0:
					func_416();
					break;
				case 1:
					func_417();
					break;
				case 2:
					func_418();
					break;
				case 3:
					func_419();
					break;
				default:
					break;
			}
			func_414((iVar1 + 1 % 32));
		}
		iVar0++;
	}
}

void func_172()
{
	if (func_355())
	{
		return;
	}
	if (Global_1211327[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/] != Global_1211392.f_1.f_8 || Global_1211327[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/].f_1 != Global_1211392.f_1.f_9)
	{
		Global_1211327[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/] = Global_1211392.f_1.f_8;
		Global_1211327[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/].f_1 = Global_1211392.f_1.f_9;
	}
	if (Global_1211392.f_1200 >= 32)
	{
		Global_1211392.f_1200 = 0;
	}
	func_420(Global_1211392.f_1200);
	Global_1211392.f_1200++;
}

void func_173()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_421(iVar0);
		iVar0++;
	}
}

void func_174()
{
	func_422();
	func_317();
	Global_1102219.f_26.f_3347 = 0;
	Global_1102219.f_26.f_3345 = 0;
}

void func_175()
{
	func_423(Global_1296473.f_66, Global_1296473.f_67);
	Global_1296473.f_66++;
	if (Global_1296473.f_66 >= 1)
	{
		Global_1296473.f_66 = 0;
		Global_1296473.f_67++;
		Global_1296473.f_67 = (Global_1296473.f_67 % 32);
	}
}

void func_176()
{
	Global_1296473.f_68++;
	if (Global_1296473.f_68 >= Global_1296379.f_22)
	{
		Global_1296473.f_68 = 0;
		Global_1296473.f_69++;
		Global_1296473.f_69 = (Global_1296473.f_69 % 32);
	}
	if (Global_1296473.f_68 >= Global_1296379.f_22)
	{
		return;
	}
	switch (Global_1296379.f_3[Global_1296473.f_68 /*6*/].f_1)
	{
		case 0:
			func_424(&(Global_1296379.f_3[Global_1296473.f_68 /*6*/]));
			break;
		case 1:
			func_425(&(Global_1296379.f_3[Global_1296473.f_68 /*6*/]));
			break;
		case 2:
			func_426(&(Global_1296379.f_3[Global_1296473.f_68 /*6*/]), Global_1296473.f_68);
			break;
	}
}

void func_177()
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
	if (SCRIPTS::HAS_SCRIPT_LOADED("net_player_camp_manager"))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_player_camp_manager");
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

void func_178()
{
	func_427(256);
}

void func_179()
{
	SCRIPTS::_0xDE544B7EC0C187CC(&(Global_1056141[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*471*/].f_10));
}

bool func_180()
{
	return Global_1051252.f_8;
}

void func_181(var uParam0)
{
	var uVar0;

	*uParam0 = uVar0;
}

int func_182(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_183()
{
	return Global_1102219.f_3672;
}

void func_184(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_428(uParam0[iVar0 /*471*/]);
		iVar0++;
	}
}

int func_185(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_186()
{
	if (func_21())
	{
		Global_1102166 = { Global_1100469[func_183() /*53*/] };
		func_429(&Global_1100469);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1100469, 1697, 70);
		func_185(NETWORK::_0x690806BC83BC8CA2(&(Global_1100469[0 /*53*/])), 1697, "g_mpPlayerStatusSyncData");
		Global_1100469[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*53*/] = { Global_1102166 };
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1100469, 1697, 70);
		func_185(NETWORK::_0x690806BC83BC8CA2(&(Global_1100469[0 /*53*/])), 1697, "g_mpPlayerStatusSyncData");
	}
}

void func_187()
{
	if (func_21())
	{
		func_430(&Global_1145091);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1145091, 1121, 67);
		func_185(NETWORK::_0x690806BC83BC8CA2(&(Global_1145091[0 /*35*/])), 1121, "g_mpPlayerPersona");
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1145091, 1121, 67);
		func_185(NETWORK::_0x690806BC83BC8CA2(&(Global_1145091[0 /*35*/])), 1121, "g_mpPlayerPersona");
	}
	func_154();
	func_153();
}

void func_188()
{
	func_431(&Global_1107216);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1107216, 33, 51);
	func_182(NETWORK::_0xBA24095EA96DFE17(&Global_1107216), 33, "g_mpHostJobData.sGangImpromptuRaceData");
	if (func_21())
	{
		Global_1109790 = { Global_1109340[func_183() /*6*/] };
		func_432(&Global_1109340);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1109340, 193, 52);
		func_185(NETWORK::_0x690806BC83BC8CA2(&(Global_1109340[0 /*6*/])), 193, "g_mpPlayerJobData.sGangImpromptuRaceData");
		Global_1109340[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*6*/] = { Global_1109790 };
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1109340, 193, 52);
		func_185(NETWORK::_0x690806BC83BC8CA2(&(Global_1109340[0 /*6*/])), 193, "g_mpPlayerJobData.sGangImpromptuRaceData");
	}
}

void func_189()
{
	func_433(&Global_1197355);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1197355, 385, 46);
	func_185(NETWORK::_0x690806BC83BC8CA2(&(Global_1197355[0 /*12*/])), 385, "g_mpSessionManagerPlayerData");
	func_200();
}

void func_190()
{
	func_434(&Global_1285012);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1285012, 181, 44);
	func_182(NETWORK::_0xBA24095EA96DFE17(&Global_1285012), 181, "g_mpShopManagerHostData");
	if (func_21())
	{
		Global_1285258 = { Global_1285193[func_183() /*2*/] };
		func_435(&Global_1285193);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1285193, 65, 45);
		func_185(NETWORK::_0x690806BC83BC8CA2(&(Global_1285193[0 /*2*/])), 65, "g_mpShopManagerPlayerData");
		Global_1285193[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/] = { Global_1285258 };
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1285193, 65, 45);
		func_185(NETWORK::_0x690806BC83BC8CA2(&(Global_1285193[0 /*2*/])), 65, "g_mpShopManagerPlayerData");
	}
}

void func_191()
{
	if (func_21())
	{
		Global_1291104 = Global_1291071[Global_1102219.f_3672];
		func_436(&Global_1291071);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1291071, 33, 4);
		func_185(NETWORK::_0x690806BC83BC8CA2(&(Global_1291071[0])), 33, "g_mpPlayerNetHudData");
		Global_1291071[PLAYER::NETWORK_PLAYER_ID_TO_INT()] = Global_1291104;
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1291071, 33, 4);
		func_185(NETWORK::_0x690806BC83BC8CA2(&(Global_1291071[0])), 33, "g_mpPlayerNetHudData");
	}
}

void func_192()
{
	func_437(&(Global_1107216.f_33));
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&(Global_1107216.f_33), 717, 73);
	func_182(NETWORK::_0xBA24095EA96DFE17(&(Global_1107216.f_33)), 717, "g_mpHostJobData.sGunForHireMissionData");
	func_438(&(Global_1107216.f_750));
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&(Global_1107216.f_750), 2, 74);
	func_182(NETWORK::_0xBA24095EA96DFE17(&(Global_1107216.f_750)), 2, "g_mpHostJobData.sGunForHireLocationGiverData");
	if (func_21())
	{
		func_439(&(Global_1128574[func_183() /*56*/]));
		func_440(&Global_1128574);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1128574, 1793, 75);
		func_185(NETWORK::_0x690806BC83BC8CA2(&(Global_1128574[0 /*56*/])), 1793, "g_mpGunForHireGangPlayerData.sGunForHireGangData");
		func_441(&(Global_1130367[func_183() /*7*/]));
		func_442(&Global_1130367);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1130367, 225, 76);
		func_185(NETWORK::_0x690806BC83BC8CA2(&(Global_1130367[0 /*7*/])), 225, "g_mpGunForHireCooldownPlayerData.sGunForHireCooldownData");
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1128574, 1793, 75);
		func_185(NETWORK::_0x690806BC83BC8CA2(&(Global_1128574[0 /*56*/])), 1793, "g_mpGunForHireGangPlayerData.sGunForHireGangData");
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1130367, 225, 76);
		func_185(NETWORK::_0x690806BC83BC8CA2(&(Global_1130367[0 /*7*/])), 225, "g_mpGunForHireCooldownPlayerData.sGunForHireCooldownData");
	}
	func_443(1);
	func_444();
	func_445();
	func_446(4);
}

void func_193()
{
	func_447(&Global_1291105);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1291105, 1, 79);
	func_182(NETWORK::_0xBA24095EA96DFE17(&Global_1291105), 1, "g_mpStableHostData");
	if (func_21())
	{
		Global_1291715 = { Global_1291106[func_183() /*19*/] };
		func_448(&(Global_1291106[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*19*/]));
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1291106, 609, 80);
		func_185(NETWORK::_0x690806BC83BC8CA2(&(Global_1291106[0 /*19*/])), 609, "g_mpStablePlayerData");
		Global_1291106[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*19*/] = { Global_1291715 };
	}
	else
	{
		func_449(&Global_1291734);
		func_450(&Global_1291106);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1291106, 609, 80);
		func_185(NETWORK::_0x690806BC83BC8CA2(&(Global_1291106[0 /*19*/])), 609, "g_mpStablePlayerData");
	}
}

void func_194()
{
	func_451(&(Global_1107216.f_752));
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&(Global_1107216.f_752), 397, 30);
	func_182(NETWORK::_0xBA24095EA96DFE17(&(Global_1107216.f_752)), 397, "g_mpHostJobData.sPosseVersusData");
	if (func_21())
	{
		Global_1109790.f_6 = { Global_1109340.f_193[func_183() /*8*/] };
		func_452(&(Global_1109340.f_193));
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&(Global_1109340.f_193), 257, 31);
		func_185(NETWORK::_0x690806BC83BC8CA2(&(Global_1109340.f_193[0 /*8*/])), 257, "g_mpPlayerJobData.sPosseVersusData");
		Global_1109340.f_193[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*8*/] = { Global_1109790.f_6 };
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&(Global_1109340.f_193), 257, 31);
		func_185(NETWORK::_0x690806BC83BC8CA2(&(Global_1109340.f_193[0 /*8*/])), 257, "g_mpPlayerJobData.sPosseVersusData");
	}
}

void func_195()
{
	func_453(&Global_1296379);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1296379, 27, 68);
	func_182(NETWORK::_0xBA24095EA96DFE17(&Global_1296379), 27, "g_mpStoryCoopTransitionHostData");
	if (func_21())
	{
		Global_1296471 = { Global_1296406[func_183() /*2*/] };
		func_454(&(Global_1296406[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/]));
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1296406, 65, 69);
		func_185(NETWORK::_0x690806BC83BC8CA2(&(Global_1296406[0 /*2*/])), 65, "g_mpStoryCoopTransitionPlayerData");
		Global_1296406[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/] = { Global_1296471 };
	}
	else
	{
		func_455(&Global_1296473);
		func_456(&Global_1296406);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1296406, 65, 69);
		func_185(NETWORK::_0x690806BC83BC8CA2(&(Global_1296406[0 /*2*/])), 65, "g_mpStoryCoopTransitionPlayerData");
	}
}

void func_196()
{
	func_457();
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1211327, 65, 81);
	func_185(NETWORK::_0xBA24095EA96DFE17(&(Global_1211327[0 /*2*/])), 65, "g_mpAbandonedLootPlayerData");
}

void func_197()
{
	if (func_21())
	{
		Global_1290881 = { Global_1288736[func_183() /*67*/] };
		func_458(&Global_1288736);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1288736, 2145, 11);
		func_185(NETWORK::_0x690806BC83BC8CA2(&(Global_1288736[0 /*67*/])), 2145, "g_mpParleyPlayerData");
		Global_1288736[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*67*/] = { Global_1290881 };
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1288736, 2145, 11);
		func_185(NETWORK::_0x690806BC83BC8CA2(&(Global_1288736[0 /*67*/])), 2145, "g_mpParleyPlayerData");
	}
}

void func_198()
{
	if (func_21())
	{
		func_459(&(Global_1212600[func_183() /*9*/]));
		func_460(&Global_1212600);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1212600, 289, 23);
		func_185(NETWORK::_0x690806BC83BC8CA2(&(Global_1212600[0 /*9*/])), 289, "g_mpCollectiblePlayerData");
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1212600, 289, 23);
		func_185(NETWORK::_0x690806BC83BC8CA2(&(Global_1212600[0 /*9*/])), 289, "g_mpCollectiblePlayerData");
	}
}

void func_199()
{
	Global_1071686.f_3 = 1;
	Global_1051252.f_41 = (MISC::GET_GAME_TIMER() - Global_1051252.f_40);
}

void func_200()
{
	Global_1197355[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*12*/] = 0;
	Global_1197355[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*12*/].f_2 = 0;
	Global_1197740.f_1 = 0;
	Global_1197740.f_1.f_1 = 1;
}

void func_201(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_461(iParam0);
	if (iVar2 != -1)
	{
		iVar0 = iVar2;
		while (iVar0 <= 31)
		{
			iVar1 = (iParam0 * 31 + iVar0);
			if (iVar1 >= 545)
			{
			}
			else
			{
				if (MISC::IS_BIT_SET(iParam1, iVar0) && !func_462(iVar1))
				{
					MISC::SET_BIT(&(Global_1056141[iParam2 /*471*/].f_425[iParam0]), iVar0);
				}
				iVar0++;
			}
		}
		Global_1071686.f_19648[iParam0] = (Global_1071686.f_19648[iParam0] || Global_1056141[iParam2 /*471*/].f_425[iParam0]);
	}
}

void func_202(int iParam0, int iParam1)
{
	Global_1071686.f_19648.f_19 = 0;
	Global_1071686.f_19648.f_20 = Global_1056141[iParam0 /*471*/].f_425.f_19[iParam1];
	Global_1071686.f_19648.f_22 = 0;
	Global_1071686.f_19648.f_23 = 0;
}

void func_203()
{
	int iVar0;
	int iVar1;

	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	switch (iVar1)
	{
		case -1:
			iVar0 = func_463(PLAYER::NETWORK_PLAYER_ID_TO_INT());
			break;
		case 0:
			iVar0 = joaat("REL_GT_TEAM_0");
			break;
		case 1:
			iVar0 = joaat("REL_GT_TEAM_1");
			break;
		case 2:
			iVar0 = joaat("REL_GT_TEAM_2");
			break;
		case 3:
			iVar0 = joaat("REL_GT_TEAM_3");
			break;
		case 4:
			iVar0 = joaat("REL_GT_TEAM_4");
			break;
		case 5:
			iVar0 = joaat("REL_GT_TEAM_5");
			break;
		case 6:
			iVar0 = joaat("REL_GT_TEAM_6");
			break;
		case 7:
			iVar0 = joaat("REL_GT_TEAM_7");
			break;
		case 8:
			iVar0 = joaat("REL_PLAYER_COP");
			break;
		default:
			return;
	}
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iVar0);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID()), func_464());
	}
}

void func_204(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_465(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_466(*uParam0);
	if (Global_1951255[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_467(iVar0);
	*uParam0 = 0;
}

void func_205(int iParam0)
{
	Global_1296473.f_1 = iParam0;
}

int func_206(int iParam0)
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
		case joaat("SHIFT_F"):
			iVar0 = 2;
			break;
		case joaat("DEMO"):
			iVar0 = 3;
			break;
		case joaat("INTRO_NOT_DONE"):
			iVar0 = 4;
			break;
		case joaat("PRIVATE"):
			iVar0 = 5;
			break;
		case joaat("FRIENDLY"):
			iVar0 = 6;
			break;
		case joaat("HARDCORE"):
			iVar0 = 7;
			break;
		case joaat("NEAR_POSSE"):
			iVar0 = 8;
			break;
		case joaat("RANDOM_POSSE"):
			iVar0 = 9;
			break;
		case joaat("OPEN_POSSE"):
			iVar0 = 10;
			break;
		case joaat("FOLLOW_INVITE"):
			iVar0 = 11;
			break;
		case joaat("RANDOM_REGION"):
			iVar0 = 12;
			break;
		case joaat("LAST_REGION"):
			iVar0 = 13;
			break;
		case joaat("LAST_LOCATION"):
			iVar0 = 14;
			break;
		case joaat("CAMP"):
			iVar0 = 15;
			break;
		case joaat("HANDHELD"):
			iVar0 = 16;
			break;
		case joaat("LAST_MISSION"):
			iVar0 = 17;
			break;
		case joaat("RANDOM_POKER"):
			iVar0 = 18;
			break;
		case joaat("BG_CUSTOM_1"):
			iVar0 = 19;
			break;
		case joaat("BG_CUSTOM_2"):
			iVar0 = 20;
			break;
		case joaat("BG_CUSTOM_3"):
			iVar0 = 21;
			break;
		case joaat("TRADE_1"):
			iVar0 = 22;
			break;
		case joaat("TRADE_2"):
			iVar0 = 23;
			break;
		case joaat("TRADE_3"):
			iVar0 = 24;
			break;
		case joaat("TRADE_4"):
			iVar0 = 25;
			break;
		case joaat("TRADE_5"):
			iVar0 = 26;
			break;
		case joaat("TRADE_6"):
			iVar0 = 27;
			break;
		case joaat("TRADE_7"):
			iVar0 = 28;
			break;
		case joaat("CCHAR"):
			iVar0 = 29;
			break;
		case joaat("COUPON"):
			iVar0 = 30;
			break;
		case joaat("HUB"):
			iVar0 = 31;
			break;
		case 1735278055:
			iVar0 = 32;
			break;
		case -1480790826:
			iVar0 = 33;
			break;
	}
	return iVar0;
}

bool func_207(int iParam0)
{
	return func_468(&(Global_1572887.f_405.f_1), iParam0, 3);
}

bool func_208(int iParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	switch (*iParam0)
	{
		case 12:
			bVar0 = !func_469(255);
			iVar1 = 13;
			break;
		case 13:
			bVar0 = !func_128();
			iVar1 = 14;
			break;
		case 14:
			bVar0 = !func_470();
			iVar1 = 12;
			break;
	}
	bVar2 = Global_1051252.f_45.f_2[*iParam0] != bVar0;
	Global_1051252.f_45.f_2[*iParam0] = bVar0;
	*iParam0 = iVar1;
	return bVar2;
}

bool func_209(int iParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	switch (*iParam0)
	{
		case 0:
			bVar0 = (!Global_1197740.f_1 & 3 != 0 && func_471());
			iVar1 = 4;
			break;
		case 4:
			bVar0 = (NETWORK::NETWORK_IS_IN_MP_CUTSCENE() || func_220());
			iVar1 = 6;
			break;
		case 6:
			bVar0 = (!Global_1197740.f_1 & 64 != 0 && func_472(PLAYER::NETWORK_PLAYER_ID_TO_INT()));
			iVar1 = 7;
			break;
		case 7:
			bVar0 = func_473(255);
			iVar1 = 8;
			break;
		case 8:
			bVar0 = func_474() > 0;
			iVar1 = 9;
			break;
		case 9:
			bVar0 = func_475() != true;
			iVar1 = 2;
			break;
		case 2:
			bVar0 = (!Global_1197740.f_1 & 3 != 0 && func_476());
			iVar1 = 1;
			break;
		case 1:
			bVar0 = ((!Global_1197740.f_1 & 16 != 0 && (func_477() || func_478())) || (!Global_1197740.f_1 & 512 != 0 && func_212(16)));
			iVar1 = 10;
			break;
		case 10:
			bVar0 = func_479();
			iVar1 = 11;
			break;
		case 11:
			bVar0 = func_480();
			iVar1 = 0;
			break;
	}
	bVar2 = Global_1051252.f_45.f_2[*iParam0] != bVar0;
	Global_1051252.f_45.f_2[*iParam0] = bVar0;
	*iParam0 = iVar1;
	return bVar2;
}

struct<2> func_210(int iParam0)
{
	return Global_1900736.f_1[iParam0 /*2*/];
}

var func_211(struct<2> Param0)
{
	char cVar0[128];
	char cVar16[128];

	StringCopy(&cVar0, "(", 128);
	StringConCat(&cVar0, func_481(Param0), 128);
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

bool func_212(int iParam0)
{
	return func_240(Global_1298378.f_156, iParam0);
}

int func_213(int iParam0, bool bParam1)
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

var func_214(int iParam0)
{
	return MISC::_0x2B6846401D68E563(BUILTIN::TO_FLOAT(iParam0), 0);
}

int func_215()
{
	return Global_1051252.f_80.f_102;
}

var func_216(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

int func_217(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219.f_10;
	}
	return Global_1100469[iParam0 /*53*/].f_10;
}

char* func_218(int iParam0)
{
	if (!func_249(iParam0))
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
		case 135:
			return "MacFarlanesRanch";
		case 136:
			return "ThievesLanding";
		case 137:
			return "HenniganTravelSales";
		case 138:
			return "HenniganHarriet";
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
		case 134:
			return "ChollaTrapper";
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
		case 139:
			return "CentralUnionRRCamp";
		default:
			break;
	}
	return "Wilderness";
}

char* func_219()
{
	if (func_482())
	{
		return HUD::_0xD8402B858F4DDD88(&Global_26540, HUD::GET_LENGTH_OF_LITERAL_STRING(&Global_26540));
	}
	return "";
}

bool func_220()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!func_483(iVar0))
		{
		}
		else if (!func_484(iVar0))
		{
		}
		else if (func_485(&(Global_1293165.f_20[iVar0 /*11*/])))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

var func_221()
{
	char cVar0[128];
	int iVar16;
	int iVar17;

	StringCopy(&cVar0, "[", 128);
	iVar17 = 0;
	iVar16 = 0;
	while (iVar16 < 9)
	{
		if (!func_483(iVar16))
		{
		}
		else if (!func_484(iVar16))
		{
		}
		else if (!func_485(&(Global_1293165.f_20[iVar16 /*11*/])))
		{
		}
		else
		{
			if (iVar17 > 0)
			{
				StringConCat(&cVar0, ",", 128);
			}
			StringConCat(&cVar0, "'", 128);
			StringIntConCat(&cVar0, Global_1293165.f_20[iVar16 /*11*/].f_1, 128);
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
	return func_486(&cVar0);
}

bool func_222(int iParam0, int iParam1)
{
	return (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iParam1)) && func_487(iParam0, 4, iParam1));
}

char* func_223(int iParam0)
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

var func_224()
{
	return HUD::_0xD8402B858F4DDD88(&(Global_263042[Global_1296859 /*70*/].f_1.f_27), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_263042[Global_1296859 /*70*/].f_1.f_27)));
}

struct<35> func_225(int iParam0)
{
	struct<35> Var0;

	Var0.f_8 = -1;
	Var0.f_8.f_1 = -1;
	Var0.f_16.f_12 = -1;
	Var0.f_16.f_12.f_1 = -1;
	Var0.f_16.f_14 = 255;
	Var0.f_16.f_15 = 255;
	if (Global_1071686.f_16 > 0)
	{
		return Global_1071686.f_16.f_5[iParam0 /*35*/];
	}
	return Var0;
}

bool func_226(var uParam0)
{
	if (!*uParam0)
	{
		return false;
	}
	switch (uParam0->f_16.f_4)
	{
		case 68:
		case 72:
		case 74:
		case 75:
			return true;
		default:
			break;
	}
	return false;
}

var func_227(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	int iVar3;

	iVar0 = func_488(iParam0);
	if (!func_489(iVar0))
	{
		return "NoSlot";
	}
	Var1 = -1;
	Var1.f_1 = -1;
	iVar3 = 0;
	while (iVar3 < 32)
	{
		Var1 = { func_490(iVar3) };
		if (func_18(Var1))
		{
		}
		else
		{
			iVar3++;
		}
	}
	return func_211(Var1);
}

Vector3 func_228()
{
	if (Global_1248240.f_9296 == -1)
	{
		return 0f, 0f, 0f;
	}
	return Global_1248240[Global_1248240.f_9296 /*683*/].f_600;
}

var func_229()
{
	char cVar0[64];

	StringCopy(&cVar0, "DynamicNearby", 64);
	return func_491(cVar0);
}

void func_230(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

int func_231()
{
	int iVar0;

	if (Global_1296859.f_21 < 79)
	{
		return joaat("SNOWLIGHT");
	}
	iVar0 = ((Global_1296859.f_21 % 79) * 100 / 79);
	if (func_233())
	{
		switch (Global_1939655.f_85)
		{
			case joaat("WHITEOUT"):
				if (iVar0 < 10)
				{
					return joaat("WHITEOUT");
				}
				else
				{
					return joaat("BLIZZARD");
				}
				break;
			case joaat("BLIZZARD"):
				if (iVar0 < 5)
				{
					return joaat("WHITEOUT");
				}
				else if (iVar0 < 25)
				{
					return joaat("BLIZZARD");
				}
				else
				{
					return joaat("SNOW");
				}
				break;
			case joaat("SNOW"):
				if (iVar0 < 10)
				{
					return joaat("BLIZZARD");
				}
				else if (iVar0 < 55)
				{
					return joaat("SNOW");
				}
				else
				{
					return joaat("SNOWLIGHT");
				}
				break;
			case joaat("SNOWLIGHT"):
				if (iVar0 < 50)
				{
					return joaat("SNOW");
				}
				else
				{
					return joaat("SNOWLIGHT");
				}
				break;
		}
	}
	else
	{
		switch (Global_1939655.f_85)
		{
			case joaat("WHITEOUT"):
				if (iVar0 < 10)
				{
					return joaat("WHITEOUT");
				}
				else
				{
					return joaat("BLIZZARD");
				}
				break;
			case joaat("BLIZZARD"):
				if (iVar0 < 2)
				{
					return joaat("WHITEOUT");
				}
				else if (iVar0 < 25)
				{
					return joaat("BLIZZARD");
				}
				else
				{
					return joaat("SNOW");
				}
				break;
			case joaat("SNOW"):
				if (iVar0 < 3)
				{
					return joaat("BLIZZARD");
				}
				else if (iVar0 < 55)
				{
					return joaat("SNOW");
				}
				else
				{
					return joaat("SNOWLIGHT");
				}
				break;
			case joaat("SNOWLIGHT"):
				if (iVar0 < 22)
				{
					return joaat("SNOWLIGHT");
				}
				else if (iVar0 < 44)
				{
					return joaat("SNOW");
				}
				else
				{
					return joaat("CLOUDS");
				}
				break;
			case joaat("FOG"):
			case joaat("HIGHPRESSURE"):
			case joaat("CLOUDS"):
			case joaat("MISTY"):
			case joaat("SUNNY"):
				if (iVar0 < 25)
				{
					return joaat("SNOWLIGHT");
				}
				else if (iVar0 < 39)
				{
					return joaat("MISTY");
				}
				else if (iVar0 < 45)
				{
					return joaat("FOG");
				}
				else if (iVar0 < 53)
				{
					return joaat("HIGHPRESSURE");
				}
				else if (iVar0 < 75)
				{
					return joaat("SUNNY");
				}
				else
				{
					return joaat("CLOUDS");
				}
				break;
		}
	}
	return joaat("SNOWLIGHT");
}

void func_232(int iParam0, bool bParam1)
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
	Global_1939655.f_85 = iParam0;
}

bool func_233()
{
	if (!func_78())
	{
		return false;
	}
	return func_240(Global_1901947.f_44.f_5, 32);
}

bool func_234()
{
	if (!func_78())
	{
		return false;
	}
	return func_240(Global_1901947.f_44.f_5, 2);
}

bool func_235()
{
	if (!func_78())
	{
		return false;
	}
	return func_240(Global_1901947.f_44.f_5, 64);
}

bool func_236(int iParam0)
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return false;
	}
	return STREAMING::_IS_POSITION_INSIDE_IMAP_STREAMING_EXTENTS(iParam0, Global_35);
}

void func_237(int iParam0)
{
	if (!STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		func_492(iParam0);
	}
}

void func_238(int iParam0)
{
	if (STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		func_493(iParam0);
	}
}

struct<19> func_239(bool bParam0)
{
	struct<19> Var0;
	struct<4> Var19;
	struct<17> Var23;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var19 = { func_494(joaat("KIT_CAMP"), func_389(1), 1084182731, 1) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var19))
	{
		return Var0;
	}
	Var23.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_495(1), &Var19, &Var23, 17, 1))
	{
		return Var0;
	}
	Var0 = { func_496(&Var23, bParam0) };
	Var0.f_17 = Var23.f_15;
	Var0.f_18 = Var23.f_16;
	Var0.f_16 = Var23.f_14;
	return Var0;
}

bool func_240(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

struct<7> func_241(int iParam0)
{
	struct<7> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

bool func_242(vector3 vParam0, int iParam3)
{
	if (vParam0.x < 4)
	{
		vParam0.x = 4;
	}
	if (!func_497(0, 1))
	{
		return false;
	}
	Global_1134390[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33 = { vParam0 };
	Global_1134390[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65536);
	func_498();
	if (iParam3 == 1)
	{
		func_243(2);
	}
	else
	{
		Global_1137047.f_330.f_6 = 1;
		func_499(2);
	}
	if (!func_500(PLAYER::NETWORK_PLAYER_ID_TO_INT()))
	{
		func_499(8);
		func_501();
	}
	if (!func_502(4) && (func_502(8) || func_502(16)))
	{
		func_243(4);
	}
	else
	{
		func_499(4);
	}
	if (func_240(Global_1137047.f_8, 1))
	{
		func_243(1);
	}
	else
	{
		func_499(1);
	}
	func_503(6);
	return true;
}

void func_243(int iParam0)
{
	func_95(&(Global_1134390[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_4), iParam0);
}

void func_244(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_245(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BAYOUNWA"):
			return 0;
		case joaat("BIGVALLEY"):
			return 1;
		case joaat("BLUEWATERMARSH"):
			return 2;
		case joaat("CUMBERLAND"):
			return 3;
		case joaat("GREATPLAINS"):
			return 4;
		case joaat("GRIZZLIESEAST"):
			return 6;
		case joaat("GRIZZLIESWEST"):
			return 7;
		case joaat("GUARMAD"):
			return 8;
		case joaat("HEARTLANDS"):
			return 9;
		case joaat("ROANOKE"):
			return 10;
		case joaat("SCARLETTMEADOWS"):
			return 11;
		case joaat("TALLTREES"):
			return 12;
		case joaat("GAPTOOTHRIDGE"):
			return 13;
		case joaat("RIOBRAVO"):
			return 14;
		case joaat("CHOLLASPRINGS"):
			return 15;
		case joaat("HENNIGANSSTEAD"):
			return 16;
		default:
			break;
	}
	return -1;
}

int func_246(var uParam0)
{
	struct<4> Var0;

	Var0 = Global_1071686.f_23887.f_366.f_4085;
	Var0.f_2 = 1593794963;
	Var0.f_3 = uParam0;
	return DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
}

bool func_247(var uParam0, int iParam1, var uParam2, float fParam3)
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

int func_248()
{
	return Global_1893587.f_2;
}

bool func_249(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_250(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_504(vParam0);
	iVar1 = -1;
	if (Global_1893570[iVar0] > 0)
	{
		iVar2 = (Global_1893570[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = Global_1892753[iVar0 /*51*/][iVar2];
			if (VOLUME::_DOES_VOLUME_EXIST(Global_1887339[iVar4 /*36*/].f_4))
			{
				if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1887339[iVar4 /*36*/].f_4, vParam0))
				{
					switch (Global_1887339[iVar4 /*36*/].f_21)
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

int func_251(int iParam0)
{
	if (func_505(&(Global_1102219.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_252(int iParam0)
{
	if (func_506(&(Global_1102219.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_253(int iParam0, var uParam1)
{
	var uVar0;
	vector3 vVar1;
	float fVar4;

	if (!func_249(iParam0))
	{
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(Global_1887339[iParam0 /*36*/].f_4))
	{
		return false;
	}
	uParam1->f_17.f_6 = { VOLUME::_GET_VOLUME_COORDS(Global_1887339[iParam0 /*36*/].f_4) };
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(uParam1->f_17.f_6, &uVar0, false))
	{
		uParam1->f_17.f_6.f_2 = uVar0;
	}
	uParam1->f_17 = Global_1901947.f_50.f_1;
	uParam1->f_17.f_1 = Global_1901947.f_50.f_1;
	uParam1->f_17.f_2 = Global_1901947.f_50.f_1;
	vVar1 = { VOLUME::_GET_VOLUME_SCALE(Global_1887339[iParam0 /*36*/].f_4) };
	fVar4 = (((vVar1.x + vVar1.y) + vVar1.z) * 0.3333f);
	if (fVar4 < Global_1901947.f_50)
	{
		fVar4 = Global_1901947.f_50;
	}
	if (fVar4 > Global_1901947.f_50.f_1)
	{
		fVar4 = Global_1901947.f_50.f_1;
	}
	uParam1->f_17.f_3 = { 0f, 0f, 0f };
	uParam1->f_17 = fVar4;
	uParam1->f_17.f_1 = fVar4;
	uParam1->f_17.f_2 = fVar4;
	uParam1->f_17.f_9 = joaat("VOLSPHERE");
	return true;
}

void func_254(struct<29> Param0, var uParam29, int iParam30)
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

void func_255(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

void func_256(bool bParam0)
{
	if (!bParam0)
	{
		func_251(5);
	}
	else
	{
		if (func_149(255) == 4)
		{
			return;
		}
		func_252(5);
	}
}

void func_257(bool bParam0, bool bParam1)
{
	if (func_149(255) == 4)
	{
		return;
	}
	if (func_97(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_251(0);
	}
	else
	{
		if (bParam1)
		{
			func_507(0, 0, 0, 1);
		}
		func_252(0);
		func_120(&(Global_1102219.f_3849));
		Global_1102219.f_3849 = 0f;
		Global_1102219.f_3849.f_5 = 1;
		Global_1102219.f_3849.f_16 = 0;
		Global_1102219.f_3849.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1102219.f_3849.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102219.f_3849.f_17 = { Global_1901947.f_50.f_1, Global_1901947.f_50.f_1, Global_1901947.f_50.f_1 };
		Global_1102219.f_3849.f_17.f_9 = joaat("VOLSPHERE");
		func_121(&(Global_1102219.f_3888));
		Global_1102219.f_3888.f_6 = { Global_1102219.f_3849.f_17.f_6 };
		Global_1102219.f_3888 = Global_1102219.f_3849;
		Global_1102219.f_3888.f_5 = 1;
		if (bParam1)
		{
			Global_1102219.f_26.f_3341 = 0;
			Global_1102219.f_26.f_3342 = 0;
		}
	}
	func_254(Global_1102219.f_3849, 36);
	func_255(Global_1102219.f_3888, 36);
}

void func_258(bool bParam0)
{
	if (!bParam0)
	{
		func_251(6);
	}
	else
	{
		if (func_149(255) == 4)
		{
			return;
		}
		func_252(6);
	}
}

void func_259(vector3 vParam0, int iParam3, vector3 vParam4, int iParam7, float fParam8, float fParam9, bool bParam10, int iParam11, float fParam12, int iParam13)
{
	if (func_149(255) == 4)
	{
		return;
	}
	if (func_97(vParam0))
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
		func_507(0, 0, 0, 1);
	}
	func_252(0);
	func_252(3);
	Global_1102219.f_3919 = iParam11;
	Global_1102219.f_3920 = fParam12;
	Global_1102219.f_3921 = iParam13;
	func_120(&(Global_1102219.f_3849));
	Global_1102219.f_3849 = iParam3;
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
	func_121(&(Global_1102219.f_3888));
	Global_1102219.f_3888.f_6 = { vParam4 };
	Global_1102219.f_3888 = iParam7;
	Global_1102219.f_3888.f_5 = 1;
	Global_1102219.f_26.f_3341 = 0;
	Global_1102219.f_26.f_3342 = 0;
	func_254(Global_1102219.f_3849, 36);
	func_255(Global_1102219.f_3888, 36);
}

Vector3 func_260()
{
	return 0f, 0f, 0f;
}

int func_261(vector3 vParam0)
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

struct<10> func_262(int iParam0)
{
	struct<10> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	func_509(func_508(iParam0), &Var0);
	return Var0;
}

int func_263()
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
	iVar5 = func_510(iVar0);
	if (iVar5 < 0 || iVar5 >= 12)
	{
		return -1;
	}
	return (135 + iVar5);
}

bool func_264(int iParam0, var uParam1, var uParam2)
{
	struct<4> Var0;
	float fVar5;

	Var0 = Global_1071686.f_28448[48 /*4*/].f_3;
	Var0.f_2 = -738708473;
	Var0.f_3 = func_511(iParam0);
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

bool func_265()
{
	int iVar0;

	iVar0 = func_512(-2104202019, 120471651);
	if (iVar0 > 0)
	{
		return true;
	}
	if (!UNLOCK::_UNLOCK_IS_VISIBLE(-1348352077))
	{
		return false;
	}
	return true;
}

void func_266(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

bool func_267(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_513(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_514(iParam0))
	{
		return false;
	}
	if (func_515(iParam0))
	{
		return false;
	}
	if ((Global_1900736.f_67 && !func_516(iParam0, 1)) || func_517(32768))
	{
		if (!func_516(iParam0, 262144) || !Global_1904651.f_8686)
		{
			return false;
		}
	}
	if (!func_518())
	{
		return false;
	}
	return true;
}

void func_268(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904651[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904651[iParam0] = uVar0;
}

bool func_269(vector3 vParam0, float fParam3)
{
	if (func_97(vParam0))
	{
		return false;
	}
	if (func_149(255) == 4)
	{
		return false;
	}
	if (func_519(4, 255))
	{
	}
	func_252(4);
	func_520(&(Global_1102219.f_3879));
	Global_1102219.f_3879.f_6 = { vParam0 };
	Global_1102219.f_3879 = fParam3;
	Global_1102219.f_3879.f_5 = 1;
	Global_1102219.f_26.f_3341 = 0;
	Global_1102219.f_26.f_3342 = 0;
	func_521(Global_1102219.f_3879, 36);
	return true;
}

void func_270(int iParam0)
{
	Global_1893587 = (Global_1893587 - (Global_1893587 && iParam0));
}

void func_271()
{
	func_522();
	func_523();
	func_524();
	func_525();
	func_526();
}

void func_272()
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
			if (func_527(iVar0, iVar9))
			{
				Var1 = { func_528(iVar0, iVar9) };
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

void func_273()
{
	int iVar0[3];
	int iVar4;

	iVar0[0] = 67198036;
	iVar0[1] = -1656481590;
	iVar0[2] = -1670262487;
	iVar4 = 0;
	while (iVar4 < 3)
	{
		if (STREAMING::_IS_IMAP_ACTIVE(iVar0[iVar4]))
		{
			func_493(iVar0[iVar4]);
		}
		iVar4++;
	}
}

void func_274()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_530(iVar0, func_529(iVar0), 0, 0);
		iVar0++;
	}
}

void func_275()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = Global_1193972[iVar0 /*8*/];
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iVar1))
		{
			GRAPHICS::REMOVE_PARTICLE_FX(iVar1, false);
		}
		iVar0++;
	}
}

char* func_276(int iParam0)
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

var func_277()
{
	var uVar0;
	struct<6> Var1;

	CLOCK::GET_POSIX_TIME(&Var1, &(Var1.f_1), &(Var1.f_2), &(Var1.f_3), &(Var1.f_4), &(Var1.f_5));
	func_531(&uVar0, Var1.f_5);
	func_532(&uVar0, Var1.f_4);
	func_533(&uVar0, Var1.f_3);
	func_534(&uVar0, Var1.f_2);
	func_535(&uVar0, (Var1.f_1 - 1));
	func_536(&uVar0, (Var1 - 100));
	return uVar0;
}

int func_278()
{
	struct<6> Var0;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	CLOCK::GET_POSIX_TIME(&Var0, &(Var0.f_1), &(Var0.f_2), &(Var0.f_3), &(Var0.f_4), &(Var0.f_5));
	iVar7 = Var0.f_2;
	iVar8 = Var0.f_1;
	iVar9 = Var0;
	if (iVar8 <= 2)
	{
		iVar8 += 12;
		iVar9 = (iVar9 - 1);
	}
	iVar10 = (iVar9 % 100);
	iVar11 = (iVar9 / 100);
	iVar12 = (((((iVar7 + ((13 * iVar8 + 1) / 5)) + iVar10) + (iVar10 / 4)) + (iVar11 / 4)) + (5 * iVar11));
	iVar13 = (iVar12 + 6 % 7);
	return iVar13;
}

void func_279(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_537(*uParam0);
	iVar1 = func_538(*uParam0);
	iVar2 = func_539(*uParam0);
	iVar3 = func_540(*uParam0);
	iVar4 = func_541(*uParam0);
	iVar5 = func_542(*uParam0);
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
	iVar5 = (iVar5 - iParam1);
	while (iVar5 < 0)
	{
		iParam2++;
		iVar5 += 60;
	}
	iVar4 = (iVar4 - iParam2);
	while (iVar4 < 0)
	{
		iParam3++;
		iVar4 += 60;
	}
	iVar3 = (iVar3 - iParam3);
	while (iVar3 < 0)
	{
		iParam4++;
		iVar3 += 24;
	}
	iVar2 = (iVar2 - iParam4);
	while (iVar2 <= 0)
	{
		iParam5++;
		iVar6 = (iVar1 - 1);
		if (iVar6 < 0)
		{
			iParam6++;
			iVar1 += 12;
		}
		iVar7 = func_543(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_544(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

struct<10> func_280(int iParam0, int iParam1, var uParam2)
{
	struct<10> Var0;
	var uVar10;
	var uVar11;
	var uVar12;

	func_545(iParam0, iParam1, &uVar10, &uVar11, &uVar12);
	func_546(uParam2, iParam1, 0, &uVar10, &uVar11, &uVar12);
	func_546(uParam2, iParam1, 1, &uVar10, &uVar11, &uVar12);
	func_546(uParam2, iParam1, 2, &uVar10, &uVar11, &uVar12);
	func_546(uParam2, iParam1, 3, &uVar10, &uVar11, &uVar12);
	func_546(uParam2, iParam1, 4, &uVar10, &uVar11, &uVar12);
	func_546(uParam2, iParam1, 5, &uVar10, &uVar11, &uVar12);
	func_546(uParam2, iParam1, 6, &uVar10, &uVar11, &uVar12);
	func_546(uParam2, iParam1, 7, &uVar10, &uVar11, &uVar12);
	func_546(uParam2, iParam1, 8, &uVar10, &uVar11, &uVar12);
	func_546(uParam2, iParam1, 9, &uVar10, &uVar11, &uVar12);
	Var0 = func_547((*uParam2[iParam1 /*11*/])[0]);
	Var0.f_1 = func_548((*uParam2[iParam1 /*11*/])[1]);
	Var0.f_8 = func_549((*uParam2[iParam1 /*11*/])[2]);
	Var0.f_3 = func_550((*uParam2[iParam1 /*11*/])[3]);
	Var0.f_6 = func_551((*uParam2[iParam1 /*11*/])[4]);
	Var0.f_7 = func_552((*uParam2[iParam1 /*11*/])[5]);
	Var0.f_4 = func_553((*uParam2[iParam1 /*11*/])[6]);
	Var0.f_5 = func_554((*uParam2[iParam1 /*11*/])[7]);
	Var0.f_2 = func_555((*uParam2[iParam1 /*11*/])[8]);
	Var0.f_9 = func_556((*uParam2[iParam1 /*11*/])[9]);
	return Var0;
}

void func_281(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_537(*iParam0);
	iVar1 = func_538(*iParam0);
	iVar2 = func_539(*iParam0);
	iVar3 = func_540(*iParam0);
	iVar4 = func_541(*iParam0);
	iVar5 = func_542(*iParam0);
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
	iVar6 = func_543(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_543(iVar1, iVar0);
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
	func_544(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_282(int iParam0, bool bParam1)
{
	return func_557(iParam0, bParam1) >= 4;
}

bool func_283(int iParam0, bool bParam1)
{
	return (func_557(iParam0, bParam1) >= 2 && func_557(iParam0, bParam1) < 4);
}

bool func_284(int iParam0)
{
	int iVar0;

	if (Global_1051436.f_1)
	{
		return true;
	}
	if (Global_1901947.f_44.f_1 == 0)
	{
		return false;
	}
	if (Global_1901947.f_44 == 0)
	{
		return false;
	}
	if (Global_1051436 != Global_1901947.f_44)
	{
		iVar0 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1901947.f_44.f_1);
		if (iVar0 > 0)
		{
			return true;
		}
	}
	return false;
}

int func_285(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

var func_286(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_558() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_559());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_559());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_559());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_560(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_561(iVar2))
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
				if (iVar9 & 8192 != 0 && func_149(iVar2) != 1)
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
					if (!func_562(iVar10))
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

int func_287(var uParam0, struct<21> Param1)
{
	if (!func_563(uParam0))
	{
		return 0;
	}
	uParam0->f_2[*uParam0 /*21*/] = { Param1 };
	*uParam0++;
	return 1;
}

void func_288(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

bool func_289()
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return Global_1071686.f_3;
}

bool func_290(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == 255)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (iParam0 == Global_1296859.f_10)
	{
		return true;
	}
	iVar0 = iParam0;
	if (!Global_1296859.f_22[iVar0])
	{
		return false;
	}
	if (bParam1)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28350), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28348), iVar0))
		{
			return false;
		}
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28349), iVar0))
		{
			return true;
		}
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28346), iVar0))
	{
		return true;
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28345), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28347), iVar0))
	{
		return false;
	}
	iVar1 = PLAYER::GET_PLAYER_TEAM(Global_1296859.f_10);
	iVar2 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((iVar1 != -1 && iVar2 != -1) && iVar1 == iVar2)
	{
		return true;
	}
	else if (GANG::_0x81FB74C83C2ED69F(iParam0))
	{
		return true;
	}
	return false;
}

struct<35> func_291()
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
	func_288(&(Var4.f_8));
	if (Global_1071686.f_16 > 0)
	{
		Global_1071686.f_16 = (Global_1071686.f_16 - 1);
		if (func_564() == Global_1071686.f_16)
		{
			func_565();
		}
		Var4 = { Global_1071686.f_16.f_5[Global_1071686.f_16 /*35*/] };
		Global_1071686.f_16.f_5[Global_1071686.f_16 /*35*/] = 0;
	}
	iVar39 = 0;
	iVar39 = 0;
	while (iVar39 <= 8)
	{
		if (func_564() == iVar39 + 1)
		{
			func_566(iVar39);
		}
		Global_1071686.f_16.f_5[iVar39 /*35*/] = { Global_1071686.f_16.f_5[iVar39 + 1 /*35*/] };
		Global_1071686.f_16.f_5[iVar39 + 1 /*35*/] = 0;
		iVar39++;
	}
	return Var4;
}

void func_292(var uParam0)
{
}

void func_293()
{
	struct<35> Var0;

	Var0 = { func_225(func_294()) };
	if (!Var0)
	{
		return;
	}
}

int func_294()
{
	return Global_1071686.f_16.f_1;
}

void func_295(int iParam0)
{
	Global_1071686.f_16.f_1 = iParam0;
}

void func_296()
{
	if (func_564() == -1)
	{
		return;
	}
	if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), Global_1071686.f_16.f_2.f_2) > (Global_1901947.f_1.f_25 / 2))
	{
		func_565();
		return;
	}
}

void func_297(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	Global_1291106[iVar0 /*19*/].f_1 = (Global_1291106[iVar0 /*19*/].f_1 - (Global_1291106[iVar0 /*19*/].f_1 && iParam0));
}

void func_298(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	Global_1291106[iVar0 /*19*/].f_2 = (Global_1291106[iVar0 /*19*/].f_2 - (Global_1291106[iVar0 /*19*/].f_2 && iParam0));
}

bool func_299(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_1904087.f_496[iVar0], iVar1);
}

void func_300(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_567(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_1904087.f_496[iVar0]), iVar1);
}

void func_301()
{
	func_568();
}

bool func_302()
{
	return func_59(Global_1572887.f_7, 1);
}

void func_303()
{
	func_569(1);
	func_569(2);
	func_569(4);
	func_569(8);
	func_569(16);
	func_569(256);
	func_569(512);
	func_569(1024);
	func_569(4096);
	func_569(8192);
}

void func_304()
{
	func_569(1);
	func_569(2);
	func_569(4);
	func_569(8);
	func_569(16);
	func_569(64);
	func_569(128);
	func_569(256);
	func_569(512);
	func_569(1024);
	func_569(4096);
}

void func_305()
{
	func_569(1);
	func_569(2);
	func_569(8);
	func_569(16);
	func_569(64);
	func_569(128);
	func_569(256);
	func_569(512);
	func_569(1024);
	func_569(2048);
	func_569(4096);
	func_569(8192);
}

void func_306()
{
	func_570(1);
	func_570(2);
	func_570(4);
	func_570(8);
	func_570(16);
	func_570(32);
	func_570(64);
	func_570(128);
	func_570(256);
	func_570(512);
	func_570(1024);
	func_570(2048);
	func_570(4096);
	func_570(8192);
}

void func_307()
{
	int iVar0;

	if (Global_1901947.f_44.f_1 == 0)
	{
		return;
	}
	if (Global_1901947.f_44 == 0)
	{
		return;
	}
	iVar0 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1901947.f_44.f_1);
	if (iVar0 < func_571(1))
	{
		func_572(1, 1022);
	}
	else if (iVar0 < func_571(2))
	{
		func_572(2, 1020);
	}
	else if (iVar0 < func_571(4))
	{
		func_572(4, 1016);
	}
	else if (iVar0 < func_571(8))
	{
		func_572(8, 1008);
	}
	else if (iVar0 < func_571(16))
	{
		func_572(16, 992);
	}
	else if (iVar0 < func_571(32))
	{
		func_572(32, 960);
	}
	else if (iVar0 < func_571(64))
	{
		func_572(64, 896);
	}
	else if (iVar0 < func_571(128))
	{
		func_572(128, 768);
	}
	else if (iVar0 < func_571(256))
	{
		func_572(256, 512);
	}
	else if (iVar0 < func_571(512))
	{
		func_572(512, 512);
	}
}

void func_308()
{
	func_62();
}

void func_309()
{
	if (!func_573(1, Global_1296859))
	{
		return;
	}
	if (func_573(2, 255))
	{
		func_574(8);
		func_205(3);
	}
	else
	{
		func_205(2);
	}
}

void func_310()
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1296379.f_2), Global_1296859))
	{
		func_204(&(Global_1296473.f_60), 1, 1);
		func_204(&(Global_1296473.f_61), 1, 1);
		func_205(3);
		return;
	}
	if (!func_573(1, Global_1296859))
	{
		func_205(0);
		return;
	}
	if (func_573(8, 255))
	{
		func_204(&(Global_1296473.f_60), 1, 1);
		if (!func_465(Global_1296473.f_61))
		{
			Global_1296473.f_61 = func_575("STORY_COOP_TRANSITION_CANCEL", joaat("INPUT_CONTEXT_B"), 2, 0, 1, 4, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		}
		if (func_576(Global_1296473.f_61, 1))
		{
			func_577(8);
		}
		return;
	}
	func_204(&(Global_1296473.f_61), 1, 1);
	if (!func_578(Global_1296859))
	{
		return;
	}
	if (!func_465(Global_1296473.f_60))
	{
		Global_1296473.f_60 = func_575("STORY_COOP_TRANSITION_CONFIRM", joaat("INPUT_CONTEXT_X"), 2, 0, 1, 4, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	if (func_576(Global_1296473.f_60, 1))
	{
		func_574(8);
	}
}

void func_311()
{
	int iVar0;

	if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1296379.f_2), Global_1296859))
	{
		if (!func_573(1, Global_1296859))
		{
			func_205(0);
			return;
		}
		return;
	}
	Global_1296473.f_63 = -1;
	iVar0 = 0;
	while (iVar0 < Global_1296379.f_22)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1296379.f_3[iVar0 /*6*/].f_2), Global_1296859))
		{
			Global_1296473.f_63 = iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	if (Global_1296473.f_63 == -1)
	{
		return;
	}
	func_205(4);
}

void func_312()
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(2000);
		}
		return;
	}
	func_574(16);
	func_579(0);
	func_205(5);
}

void func_313()
{
	if (Global_1296379.f_3[Global_1296473.f_63 /*6*/].f_1 >= 2)
	{
		func_205(6);
		return;
	}
	switch (Global_1296473.f_64)
	{
		case 0:
			if (Global_1296379.f_3[Global_1296473.f_63 /*6*/].f_3 != Global_1296859.f_10)
			{
				return;
			}
			if (Global_1296473.f_65 >= 15)
			{
				func_574(64);
				return;
			}
			if (!NETWORK::_0xE404BFF0ABA23CDC(&(Global_1296379.f_3[Global_1296473.f_63 /*6*/].f_2)))
			{
				return;
			}
			NETWORK::_0xC505036A35AFD01B(true);
			if (!NETWORK::_0xC223D299C670413D(1, 32, 0, -1))
			{
				return;
			}
			func_579(1);
			break;
		case 1:
			if (NETWORK::_0xA021095C983F20D8())
			{
				return;
			}
			if (!NETWORK::_0x6D87BA8EF15226CD())
			{
				Global_1296473.f_65++;
				func_579(0);
				return;
			}
			if (!NETWORK::_0x277865A734918AE6())
			{
				Global_1296473.f_65++;
				func_579(0);
				return;
			}
			if (!NETWORK::_0x0B6B4507AC5EA8B8())
			{
				if (!NETWORK::_0x1BB50CD340A996E6())
				{
					NETWORK::_0x101F538C25ABB39A(0, 0);
				}
			}
			func_579(2);
			break;
		case 2:
			func_574(32);
			break;
	}
}

void func_314()
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar0 == 255)
	{
		return;
	}
	if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1296379.f_2), iVar0))
	{
		func_62();
		return;
	}
	func_574(128);
}

bool func_315()
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_1102219.f_26.f_3344))
	{
		ENTITY::SET_ENTITY_COORDS(Global_1102219.f_26.f_3344, Global_1102219.f_26.f_3348, false, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(Global_1102219.f_26.f_3344, Global_1102219.f_26.f_3354, 2, false);
		ENTITY::SET_ENTITY_VISIBLE(Global_1102219.f_26.f_3344, false);
		ENTITY::SET_ENTITY_COLLISION(Global_1102219.f_26.f_3344, false, false);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Global_1102219.f_26.f_3344, false, false);
		ENTITY::SET_ENTITY_INVINCIBLE(Global_1102219.f_26.f_3344, true);
		ENTITY::FREEZE_ENTITY_POSITION(Global_1102219.f_26.f_3344, true);
		NETWORK::_0x9ED3108D6847760A(NETWORK::PED_TO_NET(Global_1102219.f_26.f_3344), 1);
		PED::SET_PED_CONFIG_FLAG(Global_1102219.f_26.f_3344, 301, true);
		PED::SET_PED_CONFIG_FLAG(Global_1102219.f_26.f_3344, 277, true);
		PED::SET_PED_CONFIG_FLAG(Global_1102219.f_26.f_3344, 417, true);
		PED::SET_PED_CONFIG_FLAG(Global_1102219.f_26.f_3344, 394, true);
		PED::SET_PED_CONFIG_FLAG(Global_1102219.f_26.f_3344, 253, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_1102219.f_26.f_3344, true);
		TASK::TASK_PLAY_ANIM(Global_1102219.f_26.f_3344, "CREATURES_BIRD@OWL@NORMAL@DEAD", "Dead_Up", 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
		Global_1102219.f_26.f_3357 = { Global_1102219.f_26.f_3354 };
		return true;
	}
	STREAMING::REQUEST_MODEL(joaat("A_C_OWL_01"), false);
	if (!STREAMING::HAS_MODEL_LOADED(joaat("A_C_OWL_01")))
	{
		return false;
	}
	STREAMING::REQUEST_ANIM_DICT("CREATURES_BIRD@OWL@NORMAL@DEAD");
	if (!STREAMING::HAS_ANIM_DICT_LOADED("CREATURES_BIRD@OWL@NORMAL@DEAD"))
	{
		return false;
	}
	if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		NETWORK::RESERVE_NETWORK_CLIENT_MISSION_PEDS((1 + NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false)));
	}
	else
	{
		return false;
	}
	PED::_0xC6136B40FFFB778B(1);
	Global_1102219.f_26.f_3344 = PED::CREATE_PED(joaat("A_C_OWL_01"), Global_1102219.f_26.f_3348, 0f, true, false, true, false);
	ENTITY::SET_ENTITY_COORDS(Global_1102219.f_26.f_3344, Global_1102219.f_26.f_3348, false, false, true, true);
	ENTITY::SET_ENTITY_ROTATION(Global_1102219.f_26.f_3344, Global_1102219.f_26.f_3354, 2, false);
	ENTITY::SET_ENTITY_VISIBLE(Global_1102219.f_26.f_3344, false);
	ENTITY::SET_ENTITY_COLLISION(Global_1102219.f_26.f_3344, false, false);
	ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Global_1102219.f_26.f_3344, false, false);
	ENTITY::SET_ENTITY_INVINCIBLE(Global_1102219.f_26.f_3344, true);
	ENTITY::FREEZE_ENTITY_POSITION(Global_1102219.f_26.f_3344, true);
	NETWORK::_0x9ED3108D6847760A(NETWORK::PED_TO_NET(Global_1102219.f_26.f_3344), 1);
	PED::SET_PED_CONFIG_FLAG(Global_1102219.f_26.f_3344, 301, true);
	PED::SET_PED_CONFIG_FLAG(Global_1102219.f_26.f_3344, 277, true);
	PED::SET_PED_CONFIG_FLAG(Global_1102219.f_26.f_3344, 417, true);
	PED::SET_PED_CONFIG_FLAG(Global_1102219.f_26.f_3344, 394, true);
	PED::SET_PED_CONFIG_FLAG(Global_1102219.f_26.f_3344, 253, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_1102219.f_26.f_3344, true);
	TASK::TASK_PLAY_ANIM(Global_1102219.f_26.f_3344, "CREATURES_BIRD@OWL@NORMAL@DEAD", "Dead_Up", 1000f, -8f, -1, 1, 0f, false, 0, false, 0, false);
	Global_1102219.f_26.f_3357 = { Global_1102219.f_26.f_3354 };
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_C_OWL_01"));
	PED::_0xC6136B40FFFB778B(0);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Global_1102219.f_26.f_3344, "Hide_and_Mute_Entity_group", 0f);
	AUDIO::START_AUDIO_SCENE("Hide_and_Mute_Entity_Scene");
	return true;
}

bool func_316()
{
	if (Global_1102219.f_26.f_3337 == 9)
	{
		return false;
	}
	if (Global_1102219.f_26.f_3337 == 10)
	{
		return false;
	}
	if (Global_1102219.f_26.f_3337 == 11)
	{
		return false;
	}
	if (func_580(2048))
	{
		return true;
	}
	if (func_581(1))
	{
		return true;
	}
	if (Global_1102219.f_26.f_3337 != 0)
	{
		return true;
	}
	return false;
}

void func_317()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1102219.f_26.f_3344))
	{
		return;
	}
	AUDIO::STOP_AUDIO_SCENE("Hide_and_Mute_Entity_Scene");
	PED::DELETE_PED(&(Global_1102219.f_26.f_3344));
	Global_1102219.f_26.f_3345 = 0;
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_C_OWL_01"));
}

char* func_318(int iParam0)
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

void func_319()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!CAM::IS_SCREEN_FADED_IN() || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return;
	}
	func_582();
	if (func_583() != 0)
	{
		if (!func_585(func_584()))
		{
			iVar3 = func_586(func_583());
			if (func_587() < iVar3)
			{
				if (!func_588())
				{
					func_590(func_589());
					return;
				}
			}
			else
			{
				func_591(func_583());
				func_592();
				func_593(0);
			}
		}
		else
		{
			func_593(func_587() + 1);
			func_590(0);
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= 0)
		{
			if (func_594(iVar1) == 0)
			{
			}
			else
			{
				iVar2 = 0;
				while (iVar2 <= 31)
				{
					iVar0 = func_595((iVar1 * 32 + iVar2), 1);
					if (!func_596(iVar0))
					{
					}
					else
					{
						func_597(iVar0);
					}
					else
					{
						iVar2++;
					}
				}
				if (func_583() != 0)
				{
				}
				else
				{
					iVar1++;
				}
			}
		}
	}
}

int func_320()
{
	return Global_1297470;
}

bool func_321()
{
	if (!DATAFILE::_0x7907969497EA92F5(Global_1071686.f_28448[29 /*4*/].f_3))
	{
		return false;
	}
	if (!DATAFILE::_0x603AC35FD4602C76(Global_1071686.f_28448[29 /*4*/].f_3))
	{
		return false;
	}
	return true;
}

bool func_322()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<4> Var5;
	struct<5> Var9;

	Var9 = -1;
	Var9.f_1 = -1;
	Var9.f_2 = -1;
	Var9.f_3 = -1;
	Var9.f_4 = -1;
	iVar1 = func_598();
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Var9 = iVar0;
		iVar4 = func_599(&Var9);
		iVar3 = func_600(iVar0);
		iVar2 = 0;
		while (iVar2 <= (iVar3 - 1))
		{
			Var5 = { func_601(iVar0, iVar2) };
			func_602(&Var5, iVar4);
			iVar2++;
		}
		iVar0++;
	}
	return true;
}

void func_323(int iParam0)
{
	Global_1297470 = iParam0;
}

bool func_324()
{
	int iVar0;
	var uVar1;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_603(iVar0, &uVar1);
		if (func_604(&uVar1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_325()
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

	iVar1 = func_598();
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar6 = iVar0;
		iVar3 = func_605(iVar6);
		bVar10 = false;
		iVar2 = 0;
		while (iVar2 <= (iVar3 - 1))
		{
			iVar7 = iVar2;
			iVar5 = func_606(iVar6, iVar7);
			bVar9 = false;
			iVar4 = 0;
			while (iVar4 <= (iVar5 - 1))
			{
				iVar8 = iVar4;
				if (!func_607(iVar6, iVar7, iVar8, 3))
				{
				}
				else
				{
					func_608(iVar6, iVar7, iVar4);
					bVar9 = true;
				}
				else
				{
					iVar4++;
				}
			}
			if (iVar5 <= 0)
			{
				func_608(iVar6, iVar7, -1);
			}
			else if (!bVar9)
			{
				func_608(iVar6, iVar7, 15);
			}
			if ((iVar4 == 0 && bVar9) && !bVar10)
			{
				func_609(iVar6, iVar2);
				bVar10 = true;
			}
			iVar2++;
		}
		if (iVar3 <= 0)
		{
			func_609(iVar6, -1);
		}
		else if (!bVar10)
		{
			func_609(iVar6, 15);
		}
		iVar0++;
	}
}

void func_326()
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
	bool bVar10;
	int iVar11;

	iVar1 = func_598();
	func_610(iVar1);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar6 = iVar0;
		iVar3 = func_605(iVar6);
		func_611(iVar6, iVar3);
		uVar4 = func_612(iVar6);
		func_613(iVar6, uVar4);
		Var8 = { func_614(iVar6, joaat("COOLDOWN_START")) };
		func_615(iVar6, Var8);
		bVar10 = func_616(iVar6);
		func_617(iVar6, bVar10);
		iVar11 = func_618(iVar6, 0);
		func_619(iVar6, iVar11);
		iVar2 = 0;
		while (iVar2 <= (iVar3 - 1))
		{
			iVar7 = iVar2;
			uVar5 = func_620(iVar6, iVar7);
			func_621(iVar6, iVar7, uVar5);
			iVar2++;
		}
		iVar0++;
	}
}

void func_327()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= (func_622() - 1))
	{
		iVar1 = (iVar1 + func_623(iVar0));
		iVar0++;
	}
	func_624();
	func_328(iVar1);
}

void func_328(int iParam0)
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
	iVar11 = GANG::_0x901E0DC25080C8B9(iVar9);
	iVar10 = GANG::_0x4BE6C13A45CCA8EC(iVar11);
	iVar1 = GANG::_0x149A2751AB66AC02(iVar11);
	bVar8 = ((iVar9 == iVar10 && NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar9)) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar9));
	iVar5 = Global_1296859.f_21;
	iVar0 = 0;
	while (iVar0 <= (iParam0 - 1))
	{
		iVar6 = func_625();
		iVar7 = func_626();
		uVar2 = func_627(iVar6, iVar7);
		iVar3 = func_628(iVar6);
		Var14 = { func_629(iVar6) };
		STATS::STAT_ID_GET_INT(&Var14, &iVar4);
		if (func_630(iVar6))
		{
			if (MISSIONDATA::_0xE54DC27571D5EDC5(uVar2))
			{
				iVar12 = MISSIONDATA::MISSIONDATA_GET_REPLAY_STATE(uVar2);
				iVar13 = func_631(iVar6);
				uVar16 = func_632(iVar6);
				if ((func_343() || Global_1048577) || Global_1048584)
				{
					if (iVar12 != 2)
					{
						MISSIONDATA::_0xE4E2C581F127A11C(uVar2, 2);
					}
				}
				else if (bVar8)
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
			iVar7 = (func_623(iVar6) - 1);
		}
		iVar7 = (iVar7 + 1 % func_623(iVar6));
		func_633(iVar7);
		if (iVar7 == 0)
		{
			iVar6 = (iVar6 + 1 % func_622());
			func_634(iVar6);
		}
		iVar0++;
	}
}

var func_329()
{
	return Global_1297470.f_55;
}

bool func_330(int iParam0)
{
	if (Global_1048577)
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
		case 13:
		case 14:
		case 15:
			return false;
		default:
			break;
	}
	return true;
}

void func_331(int iParam0)
{
	Global_1297470.f_55 = iParam0;
}

int func_332(int iParam0)
{
	return Global_1056141[iParam0 /*471*/].f_187.f_9;
}

void func_333(int iParam0)
{
	Global_1297470.f_55.f_1 = iParam0;
}

bool func_334(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_635(iParam0) };
	return func_636(Var0, Var0.f_1) != 0;
}

void func_335(int iParam0)
{
	Global_1297470.f_55.f_1.f_2 = (Global_1297470.f_55.f_1.f_2 || iParam0);
}

var func_336()
{
	return Global_1297470.f_55.f_1;
}

int func_337(var uParam0)
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
	Var0.f_3 = { func_635(uParam0) };
	iVar8 = func_636(Var0.f_3, Var0.f_3.f_1);
	if (iVar8 == 0)
	{
		return 0;
	}
	Var0 = { func_637(iVar8, 7) };
	Var0.f_2 = MISC::GET_GAME_TIMER();
	if (!func_18(Var0))
	{
		return 0;
	}
	func_638(0, &Var0);
	return 1;
}

bool func_338(int iParam0)
{
	return (Global_1297470.f_55.f_1.f_1 && iParam0) != 0;
}

void func_339(int iParam0)
{
	Global_1297470.f_55.f_1.f_1 = (Global_1297470.f_55.f_1.f_1 - (Global_1297470.f_55.f_1.f_1 && iParam0));
}

int func_340(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = Global_1296859.f_10;
	}
	return Global_263042[iParam0 /*70*/];
}

void func_341(int iParam0)
{
	Global_1297470.f_55.f_1.f_1 = (Global_1297470.f_55.f_1.f_1 || iParam0);
}

void func_342()
{
	int iVar0;

	iVar0 = func_336();
	func_639(iVar0);
}

bool func_343()
{
	return Global_1071686.f_28662.f_22.f_3 != 0;
}

int func_344(int iParam0)
{
	return Global_1297470.f_55.f_4[iParam0 /*8*/].f_3;
}

struct<8> func_345(int iParam0)
{
	var uVar0;
	struct<8> Var5;

	if (!func_640(&uVar0))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 13, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 17, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 19, iParam0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 54, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 55, 0, 0, 1))
	{
		return Var5;
	}
	return func_642(&uVar0, 60, 1);
}

var func_346(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

struct<2> func_347(int iParam0)
{
	return Global_1297470.f_55.f_4[iParam0 /*8*/];
}

int func_348(struct<2> Param0)
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

void func_349(int iParam0)
{
	func_506(&(Global_1297470.f_50.f_3), func_643(iParam0, 1), 1);
}

void func_350(int iParam0)
{
	func_35(&(Global_1572887.f_106.f_16), iParam0);
}

void func_351()
{
	struct<8> Var0;

	Var0 = { func_644(0) };
	Var0.f_2 = MISC::GET_GAME_TIMER();
	func_645(0);
	if (func_646(1))
	{
		return;
	}
	func_638(1, &Var0);
}

void func_352()
{
	var uVar0;

	MISC::_COPY_MEMORY(&(Global_1297470.f_55.f_1), &uVar0, 3);
}

int func_353()
{
	return func_647();
}

void func_354()
{
	func_649(func_648(1));
	func_650(Global_1107216.f_33[func_648(2) /*16*/].f_1, -1);
	if (func_651())
	{
		func_652(&(Global_1107216.f_33.f_513), &(Global_1109804.f_10));
		func_653(func_648(0));
		func_654(func_648(3));
		func_655(func_648(0));
		func_656();
	}
	func_657();
	func_658();
	func_659();
	func_660();
	func_661();
	func_662();
	func_663();
	func_664();
	func_665();
	func_666();
	func_667();
	if (Global_1109804.f_15)
	{
		func_668();
		Global_1109804.f_15 = 0;
	}
	func_669();
}

bool func_355()
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
	if (!func_18(Global_1051213) && Global_1572887.f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

void func_356()
{
	bool bVar0;

	Global_1071686.f_19648.f_24 = 1;
	if (Global_1071686.f_19648.f_25 != -1)
	{
		bVar0 = true;
	}
	Global_1071686.f_19648.f_25 = MISC::GET_FRAME_COUNT();
	if (!bVar0)
	{
		func_670();
	}
}

bool func_357(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_671(iParam0))
	{
		return true;
	}
	switch (Global_1071686.f_19648.f_23)
	{
		case 0:
			func_672(iParam0, &iVar0);
			break;
		case 1:
			func_673(iParam1, iParam0);
			break;
		case 2:
			Global_1071686.f_19648[iParam0] = func_674(Global_1071686.f_19648.f_19, Global_1071686.f_19648.f_20);
			iVar0 = 1;
			break;
	}
	return iVar0;
}

void func_358()
{
	if (Global_1071686.f_19648.f_25 == MISC::GET_FRAME_COUNT())
	{
		return;
	}
	if (Global_1071686.f_19648.f_24)
	{
		Global_1071686.f_19648.f_24 = 0;
	}
	else if (Global_1071686.f_19648.f_25 != -1)
	{
		Global_1071686.f_19648.f_25 = -1;
		func_670();
	}
}

bool func_359(int iParam0)
{
	int iVar0;

	if (!func_675(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (Global_1293346.f_458.f_44[iVar0 /*30*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_360()
{
	int iVar0;

	iVar0 = GANG::_0x901E0DC25080C8B9(Global_1296859.f_10);
	if (Global_1296859.f_15 != iVar0)
	{
		Global_1296859.f_15 = iVar0;
	}
	if (Global_1071686.f_28341 != Global_1296859.f_15)
	{
		Global_1071686.f_28341 = Global_1296859.f_15;
	}
}

bool func_361(int iParam0, int iParam1)
{
	if (!func_676(iParam0))
	{
		return false;
	}
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam1) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(iParam1))
	{
		return false;
	}
	return MISC::_0x8F4F050054005C27(&(Global_1056141[iParam1 /*471*/].f_15.f_20), iParam0);
}

void func_362()
{
	Global_1960071 = 0;
}

void func_363(int iParam0)
{
	int iVar0;

	if (!func_676(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0))
	{
		return;
	}
	if (func_361(iParam0, iVar0))
	{
		return;
	}
	MISC::_0xE84AAC1B22A73E99(&(Global_1056141[iVar0 /*471*/].f_15.f_20), iParam0);
}

void func_364(int iParam0)
{
	int iVar0;

	if (!func_676(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0))
	{
		return;
	}
	if (!func_361(iParam0, iVar0))
	{
		return;
	}
	MISC::_0xB909149F2BB5F6DA(&(Global_1056141[iVar0 /*471*/].f_15.f_20), iParam0);
}

int func_365(struct<2> Param0)
{
	int iVar0;

	if (!func_18(Param0))
	{
		return -1;
	}
	iVar0 = func_677(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1071686.f_19550.f_1[iVar0 /*3*/].f_2;
}

void func_366(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	struct<4> Var0;

	if (!func_678(iParam1))
	{
		iParam1 = func_680(func_679(iParam0));
		if (!func_678(iParam1))
		{
			return;
		}
	}
	if (MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*72*/].f_28))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(Global_1835011[iParam0 /*72*/].f_28));
		Global_1835011[iParam0 /*72*/].f_66 = 0;
	}
	else if (bParam2 && !Global_26640)
	{
		func_681(iParam0, iParam5, iParam1);
	}
	if (func_682(iParam1, 48))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1835011[iParam0 /*72*/].f_13));
	}
	Var0 = { Global_1835011[iParam0 /*72*/].f_13 };
	if ((bParam3 && !MISC::IS_STRING_NULL_OR_EMPTY(&Var0)) && SCRIPTS::IS_THREAD_ACTIVE(Global_1835011[iParam0 /*72*/].f_17, false))
	{
		SCRIPTS::_0x7DE4643157AD646C(Global_1835011[iParam0 /*72*/].f_17);
	}
	if (bParam4)
	{
		func_683(Global_1835011[iParam0 /*72*/].f_1);
	}
	else
	{
		func_684(iParam1, 3831);
	}
	Global_1835011[iParam0 /*72*/].f_71 = 0;
}

int func_367(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	if (Global_1900806 == 15)
	{
		return -1;
	}
	if (!func_685(Param0))
	{
		return -1;
	}
	iVar1 = func_680(Param0);
	if (iVar1 >= 0)
	{
		func_686(Param0, 1);
		return iVar1;
	}
	else
	{
		iVar0 = Global_1900806;
		Global_1900807[iVar0 /*2*/] = { Param0 };
		Global_1900838[iVar0 /*2*/] = { Var2 };
		func_686(Param0, 1);
		Global_1900806++;
		if (Global_1900806 > 15)
		{
			Global_1900806 = 15;
		}
		return iVar0;
	}
	return -1;
}

void func_368()
{
	int iVar0;
	int iVar1;

	iVar0 = func_687();
	if (iVar0 == 0)
	{
		func_688();
	}
	else
	{
		if (UIFEED::_0xC17F69E1418CD11F(1) == iVar0)
		{
			return;
		}
		iVar1 = func_689();
		if (MAP::DOES_BLIP_EXIST(iVar1))
		{
			MAP::REMOVE_BLIP(&iVar1);
			func_690(0);
		}
		func_691(0);
	}
}

int func_369()
{
	return Global_1297047.f_374;
}

bool func_370(int iParam0)
{
	return (Global_1297047.f_374.f_1 && iParam0) != 0;
}

void func_371(int iParam0)
{
	Global_1297047.f_374 = iParam0;
}

void func_372(int iParam0)
{
	Global_1297047.f_374.f_1 = (Global_1297047.f_374.f_1 || iParam0);
}

bool func_373()
{
	return func_692() == PLAYER::PLAYER_ID();
}

void func_374(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return;
	}
	if (func_692() != iVar0)
	{
		return;
	}
	Global_1056141[PLAYER::PLAYER_ID() /*471*/].f_418 = (Global_1056141[PLAYER::PLAYER_ID() /*471*/].f_418 || iParam0);
}

bool func_375()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_380();
	if (iVar0 == -1)
	{
		return false;
	}
	if (func_693() == 9)
	{
		return false;
	}
	if (func_407() == 6)
	{
		return false;
	}
	iVar1 = func_382();
	if (iVar1 == -1)
	{
		return false;
	}
	iVar2 = func_694(iVar0, iVar1);
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar2))
	{
		return false;
	}
	if (!UNLOCK::_UNLOCK_IS_VISIBLE(iVar2))
	{
		return false;
	}
	iVar3 = func_696(func_695(iVar0, iVar1));
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar3))
	{
		return false;
	}
	if (!UNLOCK::_UNLOCK_IS_VISIBLE(iVar3))
	{
		return false;
	}
	return true;
}

void func_376()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return;
	}
	func_697(func_380());
	func_698(func_693());
	func_699(func_407());
	func_700(func_382());
}

bool func_377(int iParam0)
{
	int iVar0;

	iVar0 = GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return false;
	}
	return (Global_1056141[iVar0 /*471*/].f_418 && iParam0) != 0;
}

void func_378()
{
	int iVar0;

	iVar0 = GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return;
	}
	func_702(func_701(iVar0));
	func_704(func_703(iVar0));
	func_706(func_705(iVar0));
	func_708(func_707(iVar0));
}

bool func_379(int iParam0, int iParam1)
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	return (Global_1056141[iParam0 /*471*/].f_418.f_1 && iParam1) != 0;
}

int func_380()
{
	return Global_1297047.f_374.f_2;
}

var func_381(int iParam0)
{
	return Global_1297047[iParam0 /*37*/].f_8;
}

int func_382()
{
	return Global_1297047.f_374.f_5;
}

int func_383(int iParam0)
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

void func_384(int iParam0)
{
	Global_1297047.f_374.f_10 = iParam0;
}

void func_385()
{
	var uVar0;

	func_399(536870912);
	func_399(1073741824 /* Float: 2f */);
	func_399(268435456);
	MISC::_COPY_MEMORY(&(Global_1297047.f_374.f_6), &uVar0, 4);
}

bool func_386()
{
	return Global_1297047.f_374.f_29;
}

int func_387()
{
	if (func_58() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

void func_388(int iParam0)
{
	Global_1297047.f_374.f_14 = iParam0;
}

struct<4> func_389(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_495(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1293346))
			{
				Global_1293346 = { func_494(joaat("CHARACTER"), func_709(), -1591664384, bParam0) };
			}
			return Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_12)))
			{
				Global_1293346.f_12 = { func_494(joaat("CHARACTER"), func_709(), -1591664384, 0) };
			}
			return Global_1293346.f_12;
		}
	}
	return func_494(joaat("CHARACTER"), func_709(), -1591664384, bParam0);
}

int func_390(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_710(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_711(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_494(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_495(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_495(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

void func_391(int iParam0)
{
	Global_1297047.f_374.f_15 = iParam0;
}

int func_392(int iParam0)
{
	int iVar0;

	if (!func_712(iParam0))
	{
		return 0;
	}
	iVar0 = func_713(iParam0);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	else
	{
		return func_714(iParam0, 0);
	}
	return 0;
}

void func_393(int iParam0)
{
	Global_1297047.f_374.f_12 = iParam0;
}

void func_394(int iParam0)
{
	Global_1297047.f_374.f_13 = iParam0;
}

void func_395()
{
	Global_1913504 = 1;
}

void func_396()
{
	struct<2> Var0;

	Var0.f_1 = 11;
	MISC::_COPY_MEMORY(&(Global_1297047.f_374.f_16), &Var0, 13);
}

bool func_397()
{
	return !Global_1913504;
}

void func_398()
{
	Global_1913504 = 0;
}

void func_399(int iParam0)
{
	Global_1297047.f_374.f_1 = (Global_1297047.f_374.f_1 - (Global_1297047.f_374.f_1 && iParam0));
}

int func_400()
{
	return Global_1297047.f_374.f_14;
}

var func_401(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_715(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_402()
{
	return Global_1297047.f_374.f_15;
}

int func_403(int iParam0)
{
	return (iParam0 / 100);
}

int func_404(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return ((iParam0 % 100) / 1);
	}
	return (iParam0 / 1);
}

int func_405()
{
	return Global_1297047.f_374.f_12;
}

int func_406()
{
	return Global_1297047.f_374.f_13;
}

int func_407()
{
	return Global_1297047.f_374.f_4;
}

void func_408(int iParam0)
{
	Global_1297047.f_419 = (Global_1297047.f_419 || iParam0);
}

void func_409()
{
	int iVar0;
	int iVar1;

	if (func_692() == PLAYER::PLAYER_ID())
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = 1;
	}
	iVar1 = func_382();
	if (iVar1 == -1)
	{
		return;
	}
	func_716(iVar0, iVar1, func_380());
	func_717(iVar0, iVar1, MISC::GET_GAME_TIMER());
	func_718(iVar0, iVar1, func_407());
}

void func_410()
{
	struct<17> Var0;

	Var0.f_2 = -1;
	Var0.f_3 = 9;
	Var0.f_4 = 6;
	Var0.f_5 = -1;
	Var0.f_16.f_1 = 11;
	Var0 = func_369();
	MISC::_COPY_MEMORY(&(Global_1297047.f_374), &Var0, 30);
}

void func_411()
{
	struct<6> Var0;

	Var0.f_2 = -1;
	Var0.f_3 = 9;
	Var0.f_4 = 6;
	Var0.f_5 = -1;
	MISC::_COPY_MEMORY(&(Global_1056141[PLAYER::PLAYER_ID() /*471*/].f_418), &Var0, 7);
}

void func_412()
{
	Global_1197740.f_1 = 0;
	if (Global_1296859.f_22[0])
	{
		Global_1197740.f_1 = (Global_1197740.f_1 || Global_1197355[0 /*12*/]);
	}
	if (Global_1296859.f_22[1])
	{
		Global_1197740.f_1 = (Global_1197740.f_1 || Global_1197355[1 /*12*/]);
	}
	if (Global_1296859.f_22[2])
	{
		Global_1197740.f_1 = (Global_1197740.f_1 || Global_1197355[2 /*12*/]);
	}
	if (Global_1296859.f_22[3])
	{
		Global_1197740.f_1 = (Global_1197740.f_1 || Global_1197355[3 /*12*/]);
	}
	if (Global_1296859.f_22[4])
	{
		Global_1197740.f_1 = (Global_1197740.f_1 || Global_1197355[4 /*12*/]);
	}
	if (Global_1296859.f_22[5])
	{
		Global_1197740.f_1 = (Global_1197740.f_1 || Global_1197355[5 /*12*/]);
	}
	if (Global_1296859.f_22[6])
	{
		Global_1197740.f_1 = (Global_1197740.f_1 || Global_1197355[6 /*12*/]);
	}
	if (Global_1296859.f_22[7])
	{
		Global_1197740.f_1 = (Global_1197740.f_1 || Global_1197355[7 /*12*/]);
	}
	if (Global_1296859.f_22[8])
	{
		Global_1197740.f_1 = (Global_1197740.f_1 || Global_1197355[8 /*12*/]);
	}
	if (Global_1296859.f_22[9])
	{
		Global_1197740.f_1 = (Global_1197740.f_1 || Global_1197355[9 /*12*/]);
	}
	if (Global_1296859.f_22[10])
	{
		Global_1197740.f_1 = (Global_1197740.f_1 || Global_1197355[10 /*12*/]);
	}
	if (Global_1296859.f_22[11])
	{
		Global_1197740.f_1 = (Global_1197740.f_1 || Global_1197355[11 /*12*/]);
	}
	if (Global_1296859.f_22[12])
	{
		Global_1197740.f_1 = (Global_1197740.f_1 || Global_1197355[12 /*12*/]);
	}
	if (Global_1296859.f_22[13])
	{
		Global_1197740.f_1 = (Global_1197740.f_1 || Global_1197355[13 /*12*/]);
	}
	if (Global_1296859.f_22[14])
	{
		Global_1197740.f_1 = (Global_1197740.f_1 || Global_1197355[14 /*12*/]);
	}
	if (Global_1296859.f_22[15])
	{
		Global_1197740.f_1 = (Global_1197740.f_1 || Global_1197355[15 /*12*/]);
	}
	if (Global_1296859.f_22[16])
	{
		Global_1197740.f_1 = (Global_1197740.f_1 || Global_1197355[16 /*12*/]);
	}
	if (Global_1296859.f_22[17])
	{
		Global_1197740.f_1 = (Global_1197740.f_1 || Global_1197355[17 /*12*/]);
	}
	if (Global_1296859.f_22[18])
	{
		Global_1197740.f_1 = (Global_1197740.f_1 || Global_1197355[18 /*12*/]);
	}
	if (Global_1296859.f_22[19])
	{
		Global_1197740.f_1 = (Global_1197740.f_1 || Global_1197355[19 /*12*/]);
	}
	if (Global_1296859.f_22[20])
	{
		Global_1197740.f_1 = (Global_1197740.f_1 || Global_1197355[20 /*12*/]);
	}
	if (Global_1296859.f_22[21])
	{
		Global_1197740.f_1 = (Global_1197740.f_1 || Global_1197355[21 /*12*/]);
	}
	if (Global_1296859.f_22[22])
	{
		Global_1197740.f_1 = (Global_1197740.f_1 || Global_1197355[22 /*12*/]);
	}
	if (Global_1296859.f_22[23])
	{
		Global_1197740.f_1 = (Global_1197740.f_1 || Global_1197355[23 /*12*/]);
	}
	if (Global_1296859.f_22[24])
	{
		Global_1197740.f_1 = (Global_1197740.f_1 || Global_1197355[24 /*12*/]);
	}
	if (Global_1296859.f_22[25])
	{
		Global_1197740.f_1 = (Global_1197740.f_1 || Global_1197355[25 /*12*/]);
	}
	if (Global_1296859.f_22[26])
	{
		Global_1197740.f_1 = (Global_1197740.f_1 || Global_1197355[26 /*12*/]);
	}
	if (Global_1296859.f_22[27])
	{
		Global_1197740.f_1 = (Global_1197740.f_1 || Global_1197355[27 /*12*/]);
	}
	if (Global_1296859.f_22[28])
	{
		Global_1197740.f_1 = (Global_1197740.f_1 || Global_1197355[28 /*12*/]);
	}
	if (Global_1296859.f_22[29])
	{
		Global_1197740.f_1 = (Global_1197740.f_1 || Global_1197355[29 /*12*/]);
	}
	if (Global_1296859.f_22[30])
	{
		Global_1197740.f_1 = (Global_1197740.f_1 || Global_1197355[30 /*12*/]);
	}
	if (Global_1296859.f_22[31])
	{
		Global_1197740.f_1 = (Global_1197740.f_1 || Global_1197355[31 /*12*/]);
	}
	if (!Global_1197740)
	{
		if (func_719(8192))
		{
			POPULATION::_0xC6DCC2A3A8825C85(1);
		}
		else
		{
			POPULATION::_0xBC90BDF4E5228EA1();
		}
		Global_1197740 = 1;
	}
}

int func_413()
{
	return Global_1301323.f_155;
}

void func_414(int iParam0)
{
	Global_1301323.f_155 = iParam0;
}

int func_415(int iParam0)
{
	return Global_1301323.f_155.f_4[iParam0 /*4*/];
}

void func_416()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;

	iVar0 = func_413();
	iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		return;
	}
	if (!func_720(iVar1, 2))
	{
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return;
	}
	iVar3 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return;
	}
	fVar4 = func_721(ENTITY::GET_ENTITY_COORDS(iVar2, true, false), ENTITY::GET_ENTITY_COORDS(iVar3, true, false));
	if (fVar4 > func_722())
	{
		func_723(iVar0, 2);
	}
	else
	{
		func_724(iVar0, NETWORK::GET_NETWORK_TIME_ACCURATE());
		func_723(iVar0, 1);
	}
}

void func_417()
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
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	float fVar13;

	iVar0 = func_413();
	iVar6 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar6))
	{
		func_725(iVar0);
		func_723(iVar0, 0);
		func_726(iVar6);
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar6))
	{
		func_725(iVar0);
		func_723(iVar0, 0);
		func_726(iVar6);
		return;
	}
	if (!func_720(iVar6, 2))
	{
		func_725(iVar0);
		func_723(iVar0, 0);
		func_726(iVar6);
		return;
	}
	iVar8 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	iVar7 = func_727(iVar6);
	iVar9 = func_728(iVar0);
	iVar2 = NETWORK::GET_TIME_DIFFERENCE(iVar7, iVar8);
	iVar3 = NETWORK::GET_TIME_DIFFERENCE(iVar9, iVar8);
	iVar4 = NETWORK::GET_TIME_DIFFERENCE(iVar7, iVar9);
	iVar10 = PLAYER::GET_PLAYER_PED(iVar6);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar10))
	{
		func_725(iVar0);
		func_723(iVar0, 0);
		func_726(iVar6);
		return;
	}
	iVar11 = ENTITY::GET_ENTITY_MODEL(iVar10);
	if (iVar11 != joaat("MP_MALE") && iVar11 != joaat("MP_FEMALE"))
	{
		iVar5 = func_730((func_729() - iVar4), 1, func_729());
		fVar12 = (BUILTIN::TO_FLOAT(iVar3) / BUILTIN::TO_FLOAT(iVar5));
		fVar13 = func_731(fVar12, 0f, 1f);
		iVar1 = BUILTIN::FLOOR(func_732(48f, 255f, (1f - fVar13)));
		ENTITY::SET_ENTITY_ALPHA(iVar10, iVar1, false);
		func_733(iVar6, iVar1);
		func_734(iVar6);
	}
	NETWORK::_0xF3354D6CA46F419D(iVar10, 0);
	if (iVar2 > func_729())
	{
		func_723(iVar0, 3);
		func_726(iVar6);
	}
}

void func_418()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;

	iVar0 = func_413();
	iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
	{
		func_725(iVar0);
		func_723(iVar0, 0);
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		func_725(iVar0);
		func_723(iVar0, 0);
		return;
	}
	if (!func_720(iVar1, 2))
	{
		func_725(iVar0);
		func_723(iVar0, 0);
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		func_725(iVar0);
		func_723(iVar0, 0);
		return;
	}
	iVar3 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return;
	}
	fVar4 = func_721(ENTITY::GET_ENTITY_COORDS(iVar2, true, false), ENTITY::GET_ENTITY_COORDS(iVar3, true, false));
	if (fVar4 > func_722())
	{
		return;
	}
	func_724(iVar0, NETWORK::GET_NETWORK_TIME_ACCURATE());
	func_723(iVar0, 1);
}

void func_419()
{
	int iVar0;
	int iVar1;

	iVar0 = func_413();
	iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
	{
		func_725(iVar0);
		func_723(iVar0, 0);
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		func_725(iVar0);
		func_723(iVar0, 0);
		return;
	}
	if (!func_720(iVar1, 2))
	{
		func_725(iVar0);
		func_723(iVar0, 0);
		return;
	}
}

void func_420(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == Global_1296859)
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		func_421(iParam0);
		return;
	}
	iVar1 = Global_1211327[iParam0 /*2*/];
	iVar2 = Global_1211327[iParam0 /*2*/].f_1;
	if (iVar1 == -1 || iVar2 == -1)
	{
		func_421(iParam0);
		return;
	}
	if (iVar1 == Global_1211327[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/] && iVar2 == Global_1211327[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/].f_1)
	{
		func_421(iParam0);
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1211392.f_48[iVar1 /*21*/][iVar2 /*4*/]))
	{
		func_421(iParam0);
		return;
	}
	if (BUILTIN::VDIST(Global_35, Global_1211392.f_48[iVar1 /*21*/][iVar2 /*4*/].f_1) > 100f)
	{
		func_421(iParam0);
		return;
	}
	func_735(iParam0, iVar1, iVar2);
}

void func_421(int iParam0)
{
	if (PED::_0x91A5F9CBEBB9D936(Global_1211392.f_1099[iParam0 /*3*/]))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1211392.f_1099[iParam0 /*3*/], false);
	}
}

void func_422()
{
	Global_1102219.f_26.f_3348 = { 0f, 0f, 0f };
	Global_1102219.f_26.f_3354 = { 0f, 0f, 0f };
	Global_1102219.f_26.f_3347 = 1;
}

void func_423(int iParam0, int iParam1)
{
	if (func_736(iParam1, iParam0))
	{
		if (!SCRIPTS::_0x179A6F0EE2E79026(&(Global_1296379.f_23[iParam0 /*3*/])))
		{
			Global_1296379.f_23[iParam0 /*3*/].f_1 = Global_1296473;
			Global_1296379.f_23[iParam0 /*3*/].f_2 = 4000;
		}
		else if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1296379.f_23[iParam0 /*3*/]), iParam1))
		{
			Global_1296379.f_23[iParam0 /*3*/].f_1 = Global_1296473;
			Global_1296379.f_23[iParam0 /*3*/].f_2 += 2000;
			if (Global_1296379.f_23[iParam0 /*3*/].f_2 > 5000)
			{
				Global_1296379.f_23[iParam0 /*3*/].f_2 = 5000;
			}
		}
		SCRIPTS::_0x31010318BA9897AC(&(Global_1296379.f_23[iParam0 /*3*/]), iParam1);
	}
	else
	{
		SCRIPTS::_0xD426E2E3288469D6(&(Global_1296379.f_23[iParam0 /*3*/]), iParam1);
	}
	if (!SCRIPTS::_0x179A6F0EE2E79026(&(Global_1296379.f_23[iParam0 /*3*/])))
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_1296379.f_23[iParam0 /*3*/].f_1, Global_1296473)) < Global_1296379.f_23[iParam0 /*3*/].f_2)
			{
				return;
			}
			break;
	}
	if (!func_737(Global_1296379.f_23[iParam0 /*3*/], iParam0))
	{
		return;
	}
	SCRIPTS::_0xDE544B7EC0C187CC(&(Global_1296379.f_23[iParam0 /*3*/]));
}

void func_424(var uParam0)
{
	int iVar0;

	iVar0 = PLAYER::INT_TO_PLAYERINDEX(Global_1296473.f_69);
	if (!SCRIPTS::_0x179A6F0EE2E79026(&(uParam0->f_2)))
	{
		func_738(uParam0, 2);
		return;
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(uParam0->f_2), Global_1296473.f_69))
	{
		if (!NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0))
		{
			func_739(uParam0, iVar0, Global_1296473.f_69);
		}
		else if (func_573(16, Global_1296473.f_69))
		{
			SCRIPTS::_0x31010318BA9897AC(&(uParam0->f_4), Global_1296473.f_69);
		}
	}
	if (SCRIPTS::COUNT_PLAYER_BITS(&(uParam0->f_4)) < SCRIPTS::COUNT_PLAYER_BITS(&(uParam0->f_2)))
	{
		return;
	}
	func_738(uParam0, 1);
}

void func_425(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(uParam0->f_3) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(uParam0->f_3))
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
					func_739(uParam0, iVar1, iVar0);
				}
				else if (func_573(64, iVar0))
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
				if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(uParam0->f_3))
				{
					func_738(uParam0, 2);
				}
				return;
				iVar2 = uParam0->f_3;
				if (func_573(64, iVar2))
				{
					uParam0->f_3 = 255;
					return;
				}
				if (!func_573(32, iVar2))
				{
					return;
				}
				func_738(uParam0, 2);
			}
		}
	}
}

void func_426(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::INT_TO_PLAYERINDEX(Global_1296473.f_69);
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(uParam0->f_2), Global_1296473.f_69))
	{
		if (!NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0))
		{
			func_739(uParam0, iVar0, Global_1296473.f_69);
		}
		else if (func_573(128, Global_1296473.f_69))
		{
			SCRIPTS::_0x31010318BA9897AC(&(uParam0->f_5), Global_1296473.f_69);
		}
	}
	if (SCRIPTS::_0x179A6F0EE2E79026(&(uParam0->f_2)))
	{
		if (SCRIPTS::COUNT_PLAYER_BITS(&(uParam0->f_5)) < SCRIPTS::COUNT_PLAYER_BITS(&(uParam0->f_2)))
		{
			return;
		}
	}
	func_740(iParam1);
}

void func_427(int iParam0)
{
	Global_1893587 = (Global_1893587 || iParam0);
}

void func_428(var uParam0)
{
	struct<471> Var0;
	int iVar471;

	Var0.f_2 = -1;
	Var0.f_2.f_1 = -1;
	Var0.f_2.f_5 = 255;
	Var0.f_11 = 3;
	Var0.f_15 = -1;
	Var0.f_15.f_1 = 9;
	Var0.f_15.f_12 = 7;
	Var0.f_15.f_20 = 2;
	Var0.f_41.f_1 = 9;
	Var0.f_41.f_1.f_1.f_1 = -1;
	Var0.f_41.f_1.f_1.f_2 = -1;
	Var0.f_41.f_1.f_1.f_3 = 7;
	Var0.f_41.f_1.f_1.f_11 = 2;
	Var0.f_41.f_1.f_1.f_16.f_1 = -1;
	Var0.f_41.f_1.f_1.f_16.f_2 = -1;
	Var0.f_41.f_1.f_1.f_16.f_3 = 7;
	Var0.f_41.f_1.f_1.f_16.f_11 = 2;
	Var0.f_41.f_1.f_1.f_16.f_16.f_1 = -1;
	Var0.f_41.f_1.f_1.f_16.f_16.f_2 = -1;
	Var0.f_41.f_1.f_1.f_16.f_16.f_3 = 7;
	Var0.f_41.f_1.f_1.f_16.f_16.f_11 = 2;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_1 = -1;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_2 = -1;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_3 = 7;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_11 = 2;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_16.f_3 = 7;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_16.f_11 = 2;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	Var0.f_41.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	Var0.f_187.f_1 = -1;
	Var0.f_187.f_2 = -1;
	Var0.f_187.f_3 = -1;
	Var0.f_187.f_3.f_1 = -1;
	Var0.f_187.f_11 = 4;
	Var0.f_187.f_36 = 32;
	Var0.f_187.f_36.f_193 = 2147483647;
	Var0.f_418.f_2 = -1;
	Var0.f_418.f_3 = 9;
	Var0.f_418.f_4 = 6;
	Var0.f_418.f_5 = -1;
	Var0.f_425 = 18;
	Var0.f_425.f_19 = 18;
	Var0.f_466 = 4;
	iVar471 = 0;
	while (iVar471 < 7)
	{
		Var0.f_15.f_12[iVar471] = 255;
		iVar471++;
	}
	*uParam0 = { Var0 };
	func_741(&(uParam0->f_15));
	func_742(&(uParam0->f_41));
}

void func_429(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_743(uParam0[iVar0 /*53*/]);
		iVar0++;
	}
}

void func_430(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_744(uParam0[iVar0 /*35*/]);
		iVar0++;
	}
}

void func_431(var uParam0)
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

void func_432(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_745(uParam0[iVar0 /*6*/]);
		iVar0++;
	}
}

void func_433(var uParam0)
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
		*(uParam0[iVar12 /*12*/]) = { Var0 };
		iVar12++;
	}
}

void func_434(var uParam0)
{
	struct<181> Var0;

	Var0 = 180;
	*uParam0 = { Var0 };
}

void func_435(var uParam0)
{
	struct<2> Var0;
	int iVar2;

	Var0 = -1;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		*(uParam0[iVar2 /*2*/]) = { Var0 };
		iVar2++;
	}
}

void func_436(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_746(uParam0[iVar0]);
		iVar0++;
	}
}

void func_437(var uParam0)
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

void func_438(var uParam0)
{
	struct<2> Var0;

	*uParam0 = { Var0 };
}

void func_439(var uParam0)
{
	struct<56> Var0;

	Var0 = -1;
	Var0.f_1 = 32;
	Var0.f_35 = 2;
	Var0.f_38 = 3;
	Var0.f_43 = 2;
	Var0.f_49 = 3;
	*uParam0 = { Var0 };
}

void func_440(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_439(uParam0[iVar0 /*56*/]);
		iVar0++;
	}
}

void func_441(var uParam0)
{
	struct<7> Var0;

	Var0 = 2;
	Var0.f_3 = 3;
	*uParam0 = { Var0 };
}

void func_442(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_441(uParam0[iVar0 /*7*/]);
		iVar0++;
	}
}

void func_443(int iParam0)
{
	Global_1107216.f_750 = iParam0;
}

void func_444()
{
	Global_1107216.f_750.f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
}

void func_445()
{
	Global_1128574[PLAYER::PLAYER_ID() /*56*/].f_49.f_4 = 1;
}

void func_446(int iParam0)
{
	Global_1109804.f_6371.f_2 = (Global_1109804.f_6371.f_2 || iParam0);
}

void func_447(var uParam0)
{
	*uParam0 = 0;
}

void func_448(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	uParam0->f_3 = 0;
	uParam0->f_5 = -1;
	uParam0->f_6 = -1;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = -1;
	uParam0->f_11 = 0;
	uParam0->f_12 = -1;
}

void func_449(var uParam0)
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
	func_747(&(uParam0->f_11));
	func_748(&(uParam0->f_581));
	func_749(&(uParam0->f_872));
	func_750(&(uParam0->f_919));
	func_751(&(uParam0->f_928));
	func_752(&(uParam0->f_929));
	uParam0->f_1402 = 0;
	func_753(&(uParam0->f_1403));
	func_754(&(uParam0->f_1423));
	func_755(&(uParam0->f_1429));
}

void func_450(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_448(uParam0[iVar0 /*19*/]);
		iVar0++;
	}
}

void func_451(var uParam0)
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

void func_452(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_756(uParam0[iVar0 /*8*/]);
		iVar0++;
	}
}

void func_453(var uParam0)
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

void func_454(var uParam0)
{
	struct<2> Var0;

	Var0.f_1 = -1;
	*uParam0 = { Var0 };
}

void func_455(var uParam0)
{
	struct<70> Var0;

	Var0.f_3.f_3 = -1;
	Var0.f_3.f_3.f_1 = -1;
	Var0.f_3.f_5 = 1;
	Var0.f_3.f_6 = 7;
	Var0.f_63 = -1;
	*uParam0 = { Var0 };
}

void func_456(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_454(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
}

void func_457()
{
	func_757(&Global_1211327);
}

void func_458(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_758(uParam0[iVar0 /*67*/]);
		iVar0++;
	}
}

void func_459(var uParam0)
{
	struct<9> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_8 = -1082130432;
	MISC::_COPY_MEMORY(uParam0, &Var0, 9);
}

void func_460(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_459(uParam0[iVar0 /*9*/]);
		iVar0++;
	}
}

int func_461(int iParam0)
{
	if (!func_671(iParam0))
	{
		return -1;
	}
	if (func_759(iParam0) >= 336)
	{
		return 0;
	}
	return (30 - (func_760(iParam0) - 336));
}

bool func_462(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_761(iParam0, 1);
	if (iVar0 == -1)
	{
		return true;
	}
	if (Global_1071686.f_19648.f_24 && !func_762(iVar0))
	{
		return true;
	}
	switch (iVar0)
	{
		case joaat("WS_MP_JAIL_DOORS_BLACKWATER_UNLOCK"):
			if (!func_763(joaat("WS_MP_JAIL_DOORS_BLACKWATER_LOCK")) && func_764(-763.5972f, -1263.053f, 43.02452f, 100f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_JAIL_DOORS_BLACKWATER_LOCK"):
			if (!func_763(joaat("WS_MP_JAIL_DOORS_BLACKWATER_UNLOCK")) && func_764(-763.5972f, -1263.053f, 43.02452f, 100f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_JAIL_DOORS_SAINT_DENIS_UNLOCK"):
			if (!func_763(joaat("WS_MP_JAIL_DOORS_SAINT_DENIS_LOCK")) && func_764(2499.046f, -1307.856f, 47.95675f, 100f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_JAIL_DOORS_SAINT_DENIS_LOCK"):
			if (!func_763(joaat("WS_MP_JAIL_DOORS_SAINT_DENIS_UNLOCK")) && func_764(2499.046f, -1307.856f, 47.95675f, 100f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_JAIL_DOORS_STRAWBERRY_UNLOCK"):
			if (!func_763(joaat("WS_MP_JAIL_DOORS_STRAWBERRY_LOCK")) && func_764(-1811.496f, -352.1608f, 160.4848f, 100f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_JAIL_DOORS_STRAWBERRY_LOCK"):
			if (!func_763(joaat("WS_MP_JAIL_DOORS_STRAWBERRY_UNLOCK")) && func_764(-1811.496f, -352.1608f, 160.4848f, 100f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_JAIL_DOORS_VALENTINE_UNLOCK"):
			if (!func_763(joaat("WS_MP_JAIL_DOORS_VALENTINE_LOCK")) && func_764(-272.9644f, 810.0542f, 118.3835f, 100f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_JAIL_DOORS_VALENTINE_LOCK"):
			if (!func_763(joaat("WS_MP_JAIL_DOORS_VALENTINE_UNLOCK")) && func_764(-272.9644f, 810.0542f, 118.3835f, 100f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK"):
		case joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK_HOLD_OPEN"):
			if (func_764(347.239f, 1490.71f, 178.557f, 100f))
			{
				return false;
			}
			break;
		case joaat("WS_MP_HIDEOUT_LAKAY"):
			if (!func_765(joaat("MP001_MP_HID_LAKAY"), 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case -1344601768:
			if (!func_765(728379187, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_HIDEOUT_BEAVER_HOLLOW"):
			if (!func_765(joaat("MP001_MP_HID_BEAVERHOLLOW"), 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			else if (func_766())
			{
				return false;
			}
			break;
		case -460024530:
			if (!func_765(1092530042, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_HIDEOUT_FARMHOUSE"):
			if (!func_765(joaat("MP001_MP_HID_FARMHOUSE"), 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case 1698972798:
			if (!func_765(joaat("MP001_MP_HID_MOSSYFLATS"), 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_HIDEOUT_ROCKY_SEVEN"):
			if (!func_765(joaat("MP001_MP_HID_ROCKY_SEVEN"), 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_HIDEOUT_QUAKERS_COVE"):
			if (!func_765(-1974746920, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_HIDEOUT_THE_LOFT"):
			if (!func_765(1171226610, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_HIDEOUT_CUMBERLAND_FALLS"):
			if (!func_765(406701199, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_HIDEOUT_FORT_RIGGS"):
			if (!func_765(joaat("MP001_MP_HID_FORTRIGGS"), 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_HIDEOUT_STILLWATER_STRANDS"):
			if (!func_765(-1151968796, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_HIDEOUT_COLTER"):
			if (!func_765(1975720265, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_HIDEOUT_ABANDONED_MINING_STATION"):
			if (!func_765(508578717, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_HIDEOUT_CLEMENS_COVE"):
			if (!func_765(-848533860, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_HIDEOUT_TALL_TREES"):
			if (!func_765(joaat("MP001_MP_HID_TALLTREES"), 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_HIDEOUT_SHIP_ROCK"):
			if (!func_765(-522767301, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case 1881028477:
			if (!func_765(-2103414139, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_HIDEOUT_SOLOMONS_FOLLY"):
			if (!func_765(771896020, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case -1209597203:
			if (!func_765(895825612, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_HIDEOUT_CUERA_SECO"):
			if (!func_765(1256749990, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case 929582877:
			if (!func_765(joaat("MP001_MIN_HID_MANTECAFALLS"), 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_HIDEOUT_RATTLESNAKE_HOLLOW"):
			if (!func_765(joaat("MP001_MIN_HID_RATTLESNAKEHOLLOW"), 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_HIDEOUT_REPENTANCE"):
			if (!func_765(joaat("MP001_MIN_HID_REPENTANCE"), 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_HIDEOUT_SEA_OF_CORONADO"):
			if (!func_765(967935536, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_HIDEOUT_CHOLLA_SPRINGS"):
			if (!func_765(-773956478, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_HIDEOUT_OLD_BACCHUS_PLACE"):
			if (!func_765(-1615749463, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case -396624371:
			if (!func_765(-361709910, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_HIDEOUT_CAMP_PIKES"):
			if (!func_765(-1323334072, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_HIDEOUT_GAPTOOTH"):
			if (!func_765(joaat("MP001_MIN_HID_GAPTOOTH"), 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_RHODES"):
			if (!func_765(joaat("MP001_MP_JESSICACAMP_RHODES"), 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_VALENTINE"):
			if (!func_765(joaat("MP001_MP_JESSICACAMP_VAL"), 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_BLACKWATER"):
			if (!func_765(joaat("MP001_MP_JESSICACAMP_BLACKWATER"), 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_TUMBLEWEED"):
			if (!func_765(joaat("MP001_MP_JESSICACAMP_TUMBLEWEED"), 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_INTRO_HIDEOUT_RHODES"):
			if (!func_765(joaat("MP001_MP_INTRO_GANG_RHODES4"), 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_INTRO_HIDEOUT_VALENTINE"):
			if (!func_765(joaat("MP001_MP_INTRO_GANG_VALENTINE2"), 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_INTRO_HIDEOUT_BLACKWATER"):
			if (!func_765(joaat("MP001_MP_INTRO_GANG_BLACKWATER3"), 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_INTRO_HIDEOUT_TUMBLEWEED"):
			if (!func_765(joaat("MP001_MP_INTRO_GANG_TUMBLEWEED1"), 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_HILLTOP"):
			if (!func_765(joaat("MP004_CAMPDEF_HRT_HILLTOP"), 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_CIRCLE"):
			if (!func_765(joaat("MP004_CAMPDEF_HEARTLANDS"), 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_GRIZZLIES_CIRCLE"):
			if (!func_765(476687617, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_GREAT_PLAINS_CIRCLE"):
			if (!func_765(joaat("MP004_CAMPDEF_GRT_PLAINS"), 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
			if (!func_765(568096966, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_TWO_ROCKS"):
			if (!func_765(joaat("MP004_CAMPDEF_BGV_TWO_ROCKS"), 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_GAPTOOTH_RIDGE"):
			if (!func_765(joaat("MP004_CAMPDEF_GAP_RIDGE"), 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_GAPTOOTH_BREACH"):
			if (!func_765(joaat("MP004_CAMPDEF_GAP_BREACH"), 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_CHOLLA_SPRINGS"):
			if (!func_765(-1207218596, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_RIO_BRAVO"):
			if (!func_765(-116967529, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_LITTLE_CREEK"):
			if (!func_765(joaat("MP004_CAMPDEF_LITTLE_CREEK"), 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_RADLEYS_PASTURE"):
			if (!func_765(joaat("MP004_CAMPDEF_RADLEYS"), 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_HENNIGANS_STEAD"):
			if (!func_765(joaat("MP004_CAMPDEF_HENNIGANS"), 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_TALL_TREES"):
			if (!func_765(18369533, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_NEW_HANOVER"):
			if (!func_765(joaat("MP004_CAMPDEF_NEW_HANOVER"), 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_BLUEWATER_MARSH"):
			if (!func_765(joaat("MP004_CAMPDEF_BLUEWATER"), 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case 526003171:
			if (!func_765(-2074957003, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_FETCH_OTH_SHEPHERDS_RISE"):
			if (!func_765(-1226747327, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */) || !func_765(-141795616, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_FETCH_OTH_TALL_TREES"):
			if (!func_765(joaat("MP001_REG_BGV0_MP_THEHUNT_CLUE01"), 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_FETCH_OTH_CASTORS"):
			if (!func_765(joaat("DIS_HRT_ANIMALDIG"), 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_ASSASSINATION_TRK_GRZ_CAMP"):
			if (!func_765(1883767827, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_01"):
		case -2141419899:
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_02"):
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_04"):
		case -1939389836:
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_04"):
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_03"):
		case joaat("WS_MP_TREASURE_MAP_INTRO_VALENTINE_02"):
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_03"):
		case joaat("WS_MP_TREASURE_MAP_INTRO_RHODES_03"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_04"):
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_02"):
		case -1808329564:
		case -1753769127:
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_03"):
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_04"):
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_03"):
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_01"):
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_02"):
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_03"):
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_02"):
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_02"):
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_02"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_03"):
		case -1556041029:
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_02"):
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_03"):
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_02"):
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_04"):
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_01"):
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_04"):
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_02"):
		case -1387772214:
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_03"):
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_03"):
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_04"):
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_04"):
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_01"):
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_01"):
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_02"):
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_03"):
		case -1181950077:
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_03"):
		case -1095341658:
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_03"):
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_04"):
		case -947815572:
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_03"):
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_04"):
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_04"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_01"):
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_04"):
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_03"):
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_01"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_02"):
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_02"):
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_02"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_04"):
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_02"):
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_03"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_02"):
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_04"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_03"):
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_02"):
		case -489737721:
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_03"):
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_03"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_03"):
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_01"):
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_03"):
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_01"):
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_01"):
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_02"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_04"):
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_02"):
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_02"):
		case -102827640:
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_02"):
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_02"):
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_02"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_04"):
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_04"):
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_04"):
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_03"):
		case 16844748:
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_01"):
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_01"):
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_01"):
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_01"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_01"):
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_04"):
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_03"):
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_03"):
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_01"):
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_01"):
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_03"):
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_03"):
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_02"):
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_02"):
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_04"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_02"):
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_01"):
		case 831940854:
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_02"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_02"):
		case 943561238:
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_02"):
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_01"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_01"):
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_01"):
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_03"):
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_01"):
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_04"):
		case 1248935549:
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_04"):
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_01"):
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_04"):
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_01"):
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_04"):
		case 1421300489:
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_01"):
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_01"):
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_03"):
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_01"):
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_04"):
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_02"):
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_04"):
		case joaat("WS_MP_TREASURE_MAP_INTRO_TUMBLEWEED_01"):
		case joaat("WS_MP_TREASURE_MAP_INTRO_BLACKWATER_01"):
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_04"):
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_04"):
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_01"):
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_03"):
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_01"):
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_04"):
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_03"):
			iVar1 = func_767(iVar0);
			if (iVar1 != -1554566073)
			{
				if (!func_765(iVar1, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
				{
					return false;
				}
			}
			else
			{
				return BUILTIN::VDIST(Global_35, func_768(iVar0)) > 100f;
			}
			break;
		case -812641169:
			if (!func_765(joaat("GANG_LEMOYNE_SCM003"), 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case -554519756:
			if (!func_765(joaat("GANG_LEMOYNE_SCM005"), 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case 865557632:
			if (!func_765(joaat("GANG_LEMOYNE_SCM006"), 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case 1112996351:
			if (!func_765(joaat("GANG_LEMOYNE_SCM007"), 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case -1608141409:
			if (!func_765(joaat("GANG_LEMOYNE_SCM010"), 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case -311373772:
			if (!func_765(joaat("GANG_LEMOYNE_SCM013"), 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case 61537448:
			if (!func_765(joaat("GANG_LEMOYNE_SCM015"), 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case -925071604:
			if (!func_765(joaat("GANG_LEMOYNE_SCM017"), 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case 1195508693:
			if (!func_765(joaat("GANG_LEMOYNE_SCM019"), 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
	}
	return true;
}

int func_463(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = func_183();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return joaat("REL_NO_RELATIONSHIP");
	}
	return func_769(NETWORK::GET_UNIQUE_INT_FOR_PLAYER(Global_1296859.f_154[iParam0]));
}

int func_464()
{
	return PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
}

bool func_465(int iParam0)
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

int func_466(int iParam0)
{
	return iParam0;
}

void func_467(int iParam0)
{
	if (!func_770(iParam0))
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

bool func_468(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

bool func_469(int iParam0)
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

bool func_470()
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return Global_1071686.f_5;
}

bool func_471()
{
	return Global_1900736.f_67;
}

bool func_472(int iParam0)
{
	return ((func_222(0, iParam0) || func_222(1, iParam0)) || func_222(2, iParam0));
}

int func_473(int iParam0)
{
	int iVar0;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		iParam0 = PLAYER::PLAYER_ID();
	}
	iVar0 = iParam0;
	if (func_340(iParam0) > 2)
	{
		return 1;
	}
	if (Global_263042[iVar0 /*70*/].f_1.f_16 != 0)
	{
		return 1;
	}
	if (Global_263042[iVar0 /*70*/].f_1 != 255)
	{
		return 1;
	}
	if (Global_263042[iVar0 /*70*/].f_1.f_18 != 2147483647)
	{
		return 1;
	}
	return 0;
}

int func_474()
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
	while (iVar1 < Global_1071686.f_16)
	{
		Var2 = { func_225(iVar1) };
		if (!func_226(&Var2))
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

int func_475()
{
	return Global_1572887.f_106.f_75;
}

bool func_476()
{
	return Global_1051252.f_80.f_102 > 0;
}

bool func_477()
{
	return Global_1132288.f_2042 > 0;
}

bool func_478()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1138048)
	{
		if ((Global_1138048[iVar0 /*8*/].f_4 && !func_97(Global_1138048[iVar0 /*8*/])) && BUILTIN::VDIST(Global_1138048[iVar0 /*8*/], Global_35) <= 30f)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_479()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Global_1107216.f_33[iVar0 /*16*/] != 0)
		{
			if (GANG::_0x93A91A351A07360E(Global_1107216.f_33[iVar0 /*16*/]))
			{
				if (Global_1107216.f_33[iVar0 /*16*/] == Global_1296859.f_15)
				{
					if (func_18(Global_1107216.f_33[iVar0 /*16*/].f_3.f_5))
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

bool func_480()
{
	return Global_1248240.f_9296 != -1;
}

char* func_481(int iParam0)
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

bool func_482()
{
	return (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_26538) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_26538, false));
}

bool func_483(int iParam0)
{
	if (iParam0 <= 0 || iParam0 >= 9)
	{
		return false;
	}
	return true;
}

bool func_484(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return Global_1293165[iParam0] == iParam0;
}

bool func_485(var uParam0)
{
	if (SCRIPTS::_DOES_THREAD_EXIST(uParam0->f_3))
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_3, false))
		{
			return true;
		}
	}
	return false;
}

char[] func_486(char[4] cParam0)
{
	return cParam0;
}

bool func_487(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= 32)
	{
		return false;
	}
	return func_240(Global_1138411[iParam2 /*13*/][iParam0 /*4*/], iParam1);
}

var func_488(int iParam0)
{
	return Global_1128574[iParam0 /*56*/];
}

bool func_489(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 32);
}

struct<2> func_490(int iParam0)
{
	return Global_1107216.f_33[iParam0 /*16*/].f_3.f_5;
}

var func_491(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

int func_492(int iParam0)
{
	if (STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		return 1;
	}
	if (func_771())
	{
		return 0;
	}
	STREAMING::_REQUEST_IMAP(iParam0);
	return 0;
}

int func_493(int iParam0)
{
	if (!STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		return 1;
	}
	if (func_771())
	{
		return 0;
	}
	STREAMING::_REMOVE_IMAP(iParam0);
	return 0;
}

struct<4> func_494(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_710(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_495(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_495(bool bParam0)
{
	if (func_58() == -1)
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

struct<16> func_496(var uParam0, bool bParam1)
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
		Var0.f_15 = func_711(uParam0->f_4, joaat("DEFAULT"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_709() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

bool func_497(int iParam0, int iParam1)
{
	int iVar0;

	if ((!func_289() || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || !NETWORK::NETWORK_IS_SESSION_ACTIVE())
	{
		return false;
	}
	if (!func_90(16))
	{
		return false;
	}
	if (func_26())
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("FEATURE_POSSE_CAMP")))
		{
			return false;
		}
	}
	if (!func_772())
	{
		return false;
	}
	if (func_719(16))
	{
		return false;
	}
	iVar0 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (iParam1 == 1 && (!GANG::_0xD6F6ACF4392187FB(iVar0) || !GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID())))
	{
		return false;
	}
	if (iParam0 == 1 && func_240(Global_1137047.f_8, 1))
	{
		return false;
	}
	if (func_773())
	{
		return false;
	}
	return true;
}

void func_498()
{
	Global_1134390[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_4 = 0;
}

void func_499(int iParam0)
{
	func_774(&(Global_1134390[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_4), iParam0);
}

bool func_500(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (Global_1131196[iVar1 /*27*/].f_9 == iVar0)
		{
			return Global_1131196[iVar1 /*27*/].f_1.f_1 == Global_1134390[iParam0 /*83*/].f_33.f_1;
		}
		iVar1++;
	}
	return false;
}

void func_501()
{
	int iVar0;
	var uVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (VOLUME::_0xF6A8A652A6B186CD(Global_1134390[iVar0 /*83*/].f_38.f_23.f_1))
	{
		VOLUME::_0xFDFECC6EE4491E11(Global_1134390[iVar0 /*83*/].f_38.f_23.f_1);
	}
	if (VOLUME::_0xF6A8A652A6B186CD(Global_1134390[iVar0 /*83*/].f_38.f_23))
	{
		VOLUME::_0xFDFECC6EE4491E11(Global_1134390[iVar0 /*83*/].f_38.f_23);
	}
	Global_1134390[iVar0 /*83*/].f_38.f_23.f_1 = uVar1;
	Global_1134390[iVar0 /*83*/].f_38.f_23 = uVar1;
}

bool func_502(int iParam0)
{
	return func_240(Global_1137047.f_8, iParam0);
}

void func_503(int iParam0)
{
	Global_1132288.f_2019 = iParam0;
}

int func_504(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_775(vParam0, 0f, 0f, 0, 2);
	return func_775(vParam0, Global_1892740[iVar0 /*3*/].f_1, Global_1892740[iVar0 /*3*/].f_2, Global_1892740[iVar0 /*3*/], 4);
}

bool func_505(var uParam0, int iParam1, int iParam2)
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

bool func_506(var uParam0, int iParam1, int iParam2)
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

void func_507(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_776(iParam0);
	if (!func_581(1))
	{
		return;
	}
	if (bParam1)
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_580(128) && !func_777(19))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_778() == 4)
	{
		func_251(18);
	}
	func_779(1024);
}

int func_508(int iParam0)
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

int func_509(int iParam0, var uParam1)
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

int func_510(int iParam0)
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

int func_511(int iParam0)
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

var func_512(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_780(iParam0, iParam1) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

bool func_513(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17411.f_2565[iParam0], iParam1);
}

bool func_514(int iParam0)
{
	if (func_516(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_515(int iParam0)
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

bool func_516(int iParam0, int iParam1)
{
	return (Global_1904651.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_517(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_518()
{
	if (!func_26())
	{
		return false;
	}
	return Global_1904651.f_8684;
}

bool func_519(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_468(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 == func_183())
	{
		return func_468(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1296859.f_22[iParam1])
	{
		return func_468(&(Global_1100469[iParam1 /*53*/].f_4), iVar0, 5);
	}
	return false;
}

void func_520(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_521(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

void func_522()
{
	func_781(-1687561002);
	func_781(1957225320);
	func_781(-860696938);
	func_781(-1971474291);
	func_781(-1425946870);
	func_781(-1114426126);
	func_781(-316909020);
	func_781(-1962893335);
	func_781(1351589798);
	func_781(300868838);
	func_781(-1788578071);
	func_781(1157066259);
	func_781(1475953931);
	func_781(2022451711);
	func_781(joaat("HSO_P_CAMP_02"));
	func_781(-1177590512);
	func_781(-1611076340);
	func_782(joaat("VEGMODS_HSO_PEARSON_WAGON"));
}

void func_523()
{
	func_781(1209017192);
	func_781(-2143243848);
	func_781(510052409);
	func_781(-644575724);
	func_781(291770965);
	func_781(1700661865);
	func_781(1070723367);
	func_781(1261237250);
	func_781(-109425099);
	func_781(1402472902);
	func_781(joaat("DEWCLM_P_CAMP_02"));
	func_781(-1458944281);
	func_781(2108368013);
	func_782(joaat("DEWCLM_P_CAMP_02"));
	func_782(joaat("CLE_UPG_CAMPFIRE_RUG_COW"));
}

void func_524()
{
	func_781(-1232260252);
	func_781(1404611977);
	func_781(-1395712024);
}

void func_525()
{
	func_781(joaat("SHB_P_CAMP_02"));
	func_781(557551306);
	func_781(-412827149);
	func_782(joaat("DEWCLM_P_CAMP_02"));
	func_782(joaat("SHB_P_CAMP_02"));
}

void func_526()
{
	func_781(531106429);
	func_781(1069611813);
	func_781(1102643191);
	func_781(44502487);
	func_781(-1869016398);
	func_781(806681228);
	func_781(1311984381);
	func_781(-1162254606);
}

bool func_527(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 7:
		case 8:
			return false;
		case 3:
		case 5:
			switch (iParam1)
			{
				case 0:
					return false;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return false;
			}
			break;
	}
	return true;
}

struct<8> func_528(int iParam0, int iParam1)
{
	char cVar0[64];

	StringCopy(&cVar0, func_783(iParam0), 64);
	StringConCat(&cVar0, "_nav_camp_", 64);
	StringConCat(&cVar0, func_784(iParam1), 64);
	return cVar0;
}

int func_529(int iParam0)
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

void func_530(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = 0;
		while (iVar1 < 6)
		{
			func_785(iParam1, iVar0, iVar1, bParam2, bParam3);
			iVar1++;
		}
		iVar0++;
	}
}

void func_531(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

void func_532(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_533(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_534(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_538(*iParam0);
	iVar1 = func_537(*iParam0);
	if (iParam1 < 1 || iParam1 > func_543(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_535(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_536(int iParam0, int iParam1)
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

int func_537(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_786(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_538(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_539(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_540(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_541(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_542(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_543(int iParam0, int iParam1)
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

void func_544(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_536(iParam0, iParam6);
	func_535(iParam0, iParam5);
	func_534(iParam0, iParam4);
	func_533(iParam0, iParam3);
	func_532(iParam0, iParam2);
	func_531(iParam0, iParam1);
}

void func_545(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam2 = ((func_537(iParam0) + func_538(iParam0)) + func_539(iParam0));
	*uParam3 = uParam1;
	*uParam4 = func_539(iParam0);
}

void func_546(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;

	iVar0 = (func_787(uParam3, uParam4, uParam5) % 6);
	if (0 == iParam1)
	{
		iVar0 = (iVar0 % 3);
	}
	else
	{
		if (6 == iParam1)
		{
			iVar0 = (iVar0 % 3) + 3;
		}
		if (iVar0 == (*uParam0[(iParam1 - 1) /*11*/])[iParam2])
		{
			iVar0 = (iVar0 + 1 % 6);
			if (6 == iParam1 && iVar0 < 3)
			{
				iVar0 = 3;
			}
		}
	}
	(*uParam0[iParam1 /*11*/])[iParam2] = iVar0;
}

int func_547(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 262189671;
		case 1:
			return -1865796416;
		case 2:
			return -2102912900;
		case 3:
			return -1471781960;
		case 4:
			return -1711487195;
		case 5:
			return 1532840411;
		default:
			break;
	}
	return 262189671;
}

int func_548(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1859451998;
		case 1:
			return 467802382;
		case 2:
			return 212892331;
		case 3:
			return -137539355;
		case 4:
			return -366824048;
		case 5:
			return -1952384882;
		default:
			break;
	}
	return -1859451998;
}

int func_549(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1381272898;
		case 1:
			return 1539809320;
		case 2:
			return -2102137352;
		case 3:
			return 199098446;
		case 4:
			return 1462376165;
		case 5:
			return 1885620569;
		default:
			break;
	}
	return 1381272898;
}

int func_550(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1285238734;
		case 1:
			return -888012916;
		case 2:
			return -1211213567;
		case 3:
			return -1116052391;
		case 4:
			return 1314063884;
		case 5:
			return 1644572018;
		default:
			break;
	}
	return -1285238734;
}

int func_551(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1561655701;
		case 1:
			return 1218924734;
		case 2:
			return 1516368947;
		case 3:
			return 1984048115;
		case 4:
			return -2013016202;
		case 5:
			return -1745916083;
		default:
			break;
	}
	return 1561655701;
}

int func_552(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 40018245;
		case 1:
			return -1586372771;
		case 2:
			return -1356105008;
		case 3:
			return -1175547818;
		case 4:
			return -877579301;
		case 5:
			return 1138992134;
		default:
			break;
	}
	return 40018245;
}

int func_553(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -158969429;
		case 1:
			return 147060262;
		case 2:
			return -486692198;
		case 3:
			return 886099519;
		case 4:
			return -1789128804;
		case 5:
			return -1617026016;
		default:
			break;
	}
	return -158969429;
}

int func_554(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1414390857;
		case 1:
			return -490927668;
		case 2:
			return 345304443;
		case 3:
			return -564887297;
		case 4:
			return 267084844;
		case 5:
			return 1120782832;
		default:
			break;
	}
	return -1414390857;
}

int func_555(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -112719434;
		case 1:
			return 1796697427;
		case 2:
			return -1827848894;
		case 3:
			return 1960444124;
		case 4:
			return -1311048995;
		case 5:
			return -1542168752;
		default:
			break;
	}
	return -112719434;
}

int func_556(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 346286482;
		case 1:
			return 82987567;
		case 2:
			return -145707284;
		case 3:
			return 1940236180;
		case 4:
			return 1558018564;
		case 5:
			return 1310186617;
		default:
			break;
	}
	return 346286482;
}

int func_557(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = BUILTIN::FLOOR(func_788(iParam0, bParam1));
	if (bParam1)
	{
		iVar3 = iParam0;
		if (iVar3 < 0 || iVar3 >= 32)
		{
			iVar2 = 0;
		}
		else
		{
			iVar2 = BUILTIN::FLOOR(Global_1100469[iVar3 /*53*/].f_18);
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
	if (iVar1 < Global_1901947.f_716.f_31)
	{
		return 0;
	}
	if (iVar1 < Global_1901947.f_716.f_32)
	{
		return 1;
	}
	if (iVar1 < Global_1901947.f_716.f_33)
	{
		return 2;
	}
	if (iVar1 < Global_1901947.f_716.f_34)
	{
		return 3;
	}
	if (iVar1 < Global_1901947.f_716.f_35)
	{
		return 4;
	}
	if (iVar1 < Global_1901947.f_716.f_36)
	{
		return 5;
	}
	return 6;
}

int func_558()
{
	return Global_1051252.f_12;
}

char* func_559()
{
	return "unnamed";
}

int func_560(int iParam0)
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

bool func_561(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return func_519(36, iParam0);
}

bool func_562(int iParam0)
{
	if (func_789(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) != 1)
		{
			func_790(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) == 1;
}

bool func_563(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return false;
	}
	return true;
}

int func_564()
{
	return Global_1071686.f_16.f_2;
}

void func_565()
{
	vector3 vVar0;

	if (func_564() == -1)
	{
		return;
	}
	func_791(Global_1071686.f_16.f_2.f_1);
	vVar0 = -1;
	Global_1071686.f_16.f_2 = { vVar0 };
}

void func_566(int iParam0)
{
	Global_1071686.f_16.f_2 = iParam0;
}

bool func_567(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	return true;
}

void func_568()
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (Global_1291106[iVar1 /*19*/].f_3 & 1 == 0)
	{
		if (Global_1291106[iVar1 /*19*/].f_3 & 2 != 0)
		{
			iVar0 |= 4;
		}
		if (Global_1291106[iVar1 /*19*/].f_3 & 4 != 0)
		{
			iVar0 |= 8;
		}
		if (Global_1291106[iVar1 /*19*/].f_3 & 8 != 0)
		{
			iVar0 |= 16;
		}
		if (Global_1291106[iVar1 /*19*/].f_3 & 16 != 0)
		{
			iVar0 = 2;
		}
	}
	PLAYER::_0x4EC8BE63B8A5D4EF(PLAYER::PLAYER_ID(), iVar0);
}

void func_569(int iParam0)
{
	if (!Global_1071686.f_3)
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	if (!func_59(Global_1197355[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*12*/], iParam0))
	{
		func_35(&(Global_1197355[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*12*/]), iParam0);
		Global_1051252.f_45.f_1 = 1;
	}
}

void func_570(int iParam0)
{
	if (!Global_1071686.f_3)
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	if (func_59(Global_1197355[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*12*/], iParam0))
	{
		func_57(&(Global_1197355[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*12*/]), iParam0);
		Global_1051252.f_45.f_1 = 1;
	}
}

int func_571(int iParam0)
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

void func_572(int iParam0, int iParam1)
{
	if (func_59(Global_1051436.f_2, iParam0))
	{
		return;
	}
	func_35(&(Global_1051436.f_2), (iParam0 || iParam1));
}

bool func_573(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return (Global_1296406[iParam1 /*2*/] && iParam0) != 0;
}

void func_574(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar0 == 255)
	{
		return;
	}
	Global_1296406[iVar0 /*2*/] = (Global_1296406[iVar0 /*2*/] || iParam0);
}

int func_575(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
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
		if (func_792(iVar0, 2))
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
		func_793(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216 /* Float: 1f */, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

bool func_576(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_465(iParam0))
	{
		return false;
	}
	iVar0 = func_466(iParam0);
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

void func_577(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar0 == 255)
	{
		return;
	}
	Global_1296406[iVar0 /*2*/] = (Global_1296406[iVar0 /*2*/] - (Global_1296406[iVar0 /*2*/] && iParam0));
}

bool func_578(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1296379.f_2), iParam0))
	{
		return false;
	}
	return true;
}

void func_579(int iParam0)
{
	Global_1296473.f_64 = iParam0;
}

bool func_580(int iParam0)
{
	return (Global_1102219.f_26.f_9 && iParam0) != 0;
}

bool func_581(int iParam0)
{
	return (Global_1102219.f_26.f_7 && iParam0) != 0;
}

void func_582()
{
	int iVar0;

	if (!func_794(2))
	{
		return;
	}
	if (func_795())
	{
		return;
	}
	if (func_344(0) != -1)
	{
		return;
	}
	iVar0 = func_344(1);
	if (iVar0 != -1 && !func_796(iVar0))
	{
		func_797(2);
		func_349(joaat("HELP_TEXT_COOP_COOLDOWN_DONE"));
	}
}

int func_583()
{
	return Global_1297470.f_50;
}

int func_584()
{
	return Global_1297470.f_50.f_1;
}

bool func_585(int iParam0)
{
	int iVar0;

	iVar0 = UIFEED::_0xC17F69E1418CD11F(1);
	if (iVar0 == 0)
	{
		return false;
	}
	return (iVar0 == iParam0 && UIFEED::_0x59FA676177DBE4C9(iVar0) <= 4);
}

var func_586(int iParam0)
{
	var uVar0;

	if (!func_640(&uVar0))
	{
		return 0;
	}
	if (!func_641(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 16, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 41, iParam0, 0, 1))
	{
		return 0;
	}
	return func_798(&uVar0, 7);
}

int func_587()
{
	return Global_1297470.f_50.f_2;
}

bool func_588()
{
	int iVar0;

	iVar0 = UIFEED::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && UIFEED::_0x59FA676177DBE4C9(iVar0) <= 4);
}

var func_589()
{
	char* sVar0;

	sVar0 = MISC::_CREATE_VAR_STRING(0, func_799(func_583(), func_587()));
	return func_285(sVar0, 10000, 0, 0, 0, 1);
}

void func_590(int iParam0)
{
	Global_1297470.f_50.f_1 = iParam0;
}

void func_591(int iParam0)
{
	func_505(&(Global_1297470.f_50.f_3), func_643(iParam0, 1), 1);
}

void func_592()
{
	var uVar0;

	Global_1297470.f_50 = uVar0;
}

void func_593(int iParam0)
{
	Global_1297470.f_50.f_2 = iParam0;
}

int func_594(int iParam0)
{
	return Global_1297470.f_50.f_3[iParam0];
}

int func_595(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("HELP_TEXT_WAIT_FOR_POSSE_LEADER");
		case 1:
			return joaat("HELP_TEXT_POST_COOP_MISSION_1");
		case 2:
			return joaat("HELP_TEXT_POST_COOP_MISSION_5");
		case 3:
			return joaat("HELP_TEXT_POST_EXT_NO_GATING_ITEM");
		case 4:
			return joaat("HELP_TEXT_POST_EXT_HAS_SETUP_MOON");
		case 5:
			return joaat("HELP_TEXT_BLOCK_ACCEPT_POSSE_TOO_LARGE");
		case 6:
			return joaat("HELP_TEXT_COOP_COOLDOWN_DONE");
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

bool func_596(int iParam0)
{
	return func_468(&(Global_1297470.f_50.f_3), func_643(iParam0, 1), 1);
}

void func_597(int iParam0)
{
	Global_1297470.f_50 = iParam0;
}

int func_598()
{
	var uVar0;

	if (!func_640(&uVar0))
	{
		return 0;
	}
	if (!func_641(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	return func_798(&uVar0, 0);
}

int func_599(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = (5 - 1);
	while (iVar0 >= 0)
	{
		iVar3 = iVar0;
		iVar2 = func_800(iVar3, 1);
		if (iVar2 == -1)
		{
		}
		else
		{
			if (iVar0 != (5 - 1))
			{
				iVar1 = BUILTIN::SHIFT_LEFT(iVar1, iVar2);
			}
			iVar1 = (iVar1 || func_801(iVar3, iParam0));
		}
		iVar0 = (iVar0 + -1);
	}
	return iVar1;
}

var func_600(int iParam0)
{
	var uVar0;

	if (!func_640(&uVar0))
	{
		return 0;
	}
	if (!func_641(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 19, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 36, 0, 0, 0))
	{
		return 0;
	}
	return func_798(&uVar0, 8);
}

struct<4> func_601(int iParam0, int iParam1)
{
	var uVar0;
	struct<4> Var5;
	int iVar9;

	if (!func_640(&uVar0))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 13, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 17, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 19, iParam0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 36, 0, 0, 0))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 37, iParam1, 0, 1))
	{
		return Var5;
	}
	iVar9 = func_802(&uVar0);
	return func_803(iVar9);
}

void func_602(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	if (!func_804(uParam0, iParam1))
	{
		return;
	}
	iVar0 = func_805();
	if (iVar0 == -1)
	{
		return;
	}
	if (!func_806(*uParam0, &uVar1, 1, 255, 0, 0))
	{
		return;
	}
	func_807(iVar0, &uVar1, iParam1, uParam0->f_3);
}

void func_603(int iParam0, var uParam1)
{
	MISC::_COPY_MEMORY(uParam1, &(Global_1297470.f_111[iParam0 /*6*/]), 4);
}

bool func_604(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_605(int iParam0)
{
	var uVar0;

	if (!func_640(&uVar0))
	{
		return 0;
	}
	if (!func_641(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 19, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 20, 0, 0, 1))
	{
		return 0;
	}
	return func_798(&uVar0, 1);
}

var func_606(int iParam0, int iParam1)
{
	var uVar0;

	if (!func_640(&uVar0))
	{
		return 0;
	}
	if (!func_641(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 19, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 20, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 23, iParam1, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 24, 0, 0, 0))
	{
		return 0;
	}
	return func_798(&uVar0, 2);
}

bool func_607(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<4> Var0;
	struct<5> Var4;
	var uVar9;
	int iVar10;
	int iVar11;

	if (!func_640(&Var4))
	{
		return false;
	}
	if (!func_641(&Var4, 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_641(&Var4, 17, 0, 0, 1))
	{
		return false;
	}
	if (!func_641(&Var4, 19, iParam0, 0, 1))
	{
		return false;
	}
	if (!func_641(&Var4, 20, 0, 0, 1))
	{
		return false;
	}
	if (!func_641(&Var4, 23, iParam1, 0, 1))
	{
		return false;
	}
	if (!func_641(&Var4, 43, 0, 0, 0))
	{
		if (func_641(&Var4, 24, 0, 0, 0))
		{
			if (!func_641(&Var4, 25, iParam2, 0, 1))
			{
				return false;
			}
			if (!func_641(&Var4, 43, 0, 0, 1))
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	uVar9 = Var4.f_1;
	iVar11 = func_798(&Var4, 9);
	iVar10 = 0;
	while (iVar10 <= (iVar11 - 1))
	{
		Var4.f_1 = uVar9;
		if (!func_641(&Var4, 44, iVar10, 0, 1))
		{
			return false;
		}
		Var0 = { func_808(Var4) };
		if (!func_809(&Var0, iParam3))
		{
			return false;
		}
		iVar10++;
	}
	return true;
}

void func_608(int iParam0, int iParam1, int iParam2)
{
	Global_1297470.f_76[iParam0 /*17*/].f_1[iParam1] = iParam2;
}

void func_609(int iParam0, int iParam1)
{
	Global_1297470.f_76[iParam0 /*17*/] = iParam1;
}

void func_610(var uParam0)
{
	Global_1297470.f_2.f_45 = uParam0;
}

void func_611(int iParam0, var uParam1)
{
	Global_1297470.f_2[iParam0 /*22*/].f_16 = uParam1;
}

var func_612(int iParam0)
{
	var uVar0;

	if (!func_810(&uVar0, iParam0, joaat("COOLDOWN_DURATION")))
	{
		return 0;
	}
	return func_811(&uVar0);
}

void func_613(int iParam0, var uParam1)
{
	Global_1297470.f_2[iParam0 /*22*/].f_17 = uParam1;
}

struct<2> func_614(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var5;
	var uVar7;
	var uVar8;

	if (!func_640(&uVar0))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 13, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 17, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 19, iParam0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 34, 0, 0, 0))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 35, iParam1, 0, 0))
	{
		return Var5;
	}
	uVar7 = func_812(&uVar0);
	uVar8 = func_813(&uVar0);
	return func_780(uVar7, uVar8);
}

void func_615(int iParam0, struct<2> Param1)
{
	Global_1297470.f_2[iParam0 /*22*/].f_18 = { Param1 };
}

bool func_616(int iParam0)
{
	return func_618(iParam0, 0) != 0;
}

void func_617(int iParam0, bool bParam1)
{
	Global_1297470.f_2[iParam0 /*22*/].f_20 = bParam1;
}

int func_618(int iParam0, int iParam1)
{
	var uVar0;

	if (!func_640(&uVar0))
	{
		return 0;
	}
	if (!func_641(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 19, iParam0, 0, 1))
	{
		return 0;
	}
	return func_814(&uVar0, iParam1);
}

void func_619(int iParam0, int iParam1)
{
	Global_1297470.f_2[iParam0 /*22*/].f_21 = iParam1;
}

var func_620(int iParam0, int iParam1)
{
	var uVar0;

	if (!func_640(&uVar0))
	{
		return 0;
	}
	if (!func_641(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 19, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 20, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 23, iParam1, 0, 1))
	{
		return 0;
	}
	return func_815(&uVar0);
}

void func_621(int iParam0, int iParam1, var uParam2)
{
	Global_1297470.f_2[iParam0 /*22*/][iParam1] = uParam2;
}

int func_622()
{
	return Global_1297470.f_2.f_45;
}

int func_623(int iParam0)
{
	return Global_1297470.f_2[iParam0 /*22*/].f_16;
}

void func_624()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	iVar1 = func_598();
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar5 = iVar0;
		iVar3 = func_605(iVar5);
		iVar2 = 0;
		while (iVar2 <= (iVar3 - 1))
		{
			iVar6 = iVar2;
			iVar7 = func_816(iVar5, iVar6);
			switch (iVar7)
			{
				case -1:
					iVar8 = 0;
					break;
				case 0:
					iVar8 = 0;
					break;
				case 15:
					iVar8 = 5;
					break;
				default:
					switch (iVar7)
					{
						case 1:
							iVar8 = 3;
							break;
						case 2:
							iVar8 = 4;
							break;
						default:
							iVar8 = 0;
							break;
					}
					break;
			}
			if (iVar8 == 0)
			{
			}
			else
			{
				uVar4 = func_620(iVar5, iVar6);
				MISSIONDATA::_0xE824CE7D13FCB300(uVar4, iVar8);
			}
			iVar2++;
		}
		iVar0++;
	}
}

int func_625()
{
	return Global_1297470.f_48;
}

int func_626()
{
	return Global_1297470.f_48.f_1;
}

var func_627(int iParam0, int iParam1)
{
	return Global_1297470.f_2[iParam0 /*22*/][iParam1];
}

int func_628(int iParam0)
{
	return Global_1297470.f_2[iParam0 /*22*/].f_17 * 60;
}

struct<2> func_629(int iParam0)
{
	return Global_1297470.f_2[iParam0 /*22*/].f_18;
}

bool func_630(int iParam0)
{
	return Global_1297470.f_2[iParam0 /*22*/].f_20;
}

int func_631(int iParam0)
{
	return Global_1297470.f_76[iParam0 /*17*/];
}

var func_632(int iParam0)
{
	return Global_1297470.f_2[iParam0 /*22*/].f_21;
}

void func_633(int iParam0)
{
	Global_1297470.f_48.f_1 = iParam0;
}

void func_634(int iParam0)
{
	Global_1297470.f_48 = iParam0;
}

struct<5> func_635(int iParam0)
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
		iVar6 = func_800(iVar8, 1);
		if (iVar6 == -1)
		{
		}
		else
		{
			func_817(iVar8, &Var0, iVar7);
			iVar7 = BUILTIN::SHIFT_RIGHT(iVar7, iVar6);
		}
		iVar5++;
	}
	return Var0;
}

var func_636(int iParam0, int iParam1)
{
	var uVar0;

	if (!func_640(&uVar0))
	{
		return 0;
	}
	if (!func_641(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 19, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 20, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 23, iParam1, 0, 1))
	{
		return 0;
	}
	return func_818(&uVar0);
}

struct<2> func_637(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_819(iParam0, &(Global_1071686.f_636), func_76(iParam1));
			break;
		case 3:
			Var0.f_1 = func_819(iParam0, &(Global_1071686.f_636.f_602), func_76(iParam1));
			break;
		case 4:
			Var0.f_1 = func_819(iParam0, &(Global_1071686.f_636.f_2104), func_76(iParam1));
			break;
		case 5:
			Var0.f_1 = func_819(iParam0, &(Global_1071686.f_636.f_12606), func_76(iParam1));
			break;
		case 6:
			Var0.f_1 = func_819(iParam0, &(Global_1071686.f_636.f_12908), func_76(iParam1));
			break;
		case 7:
			Var0.f_1 = func_819(iParam0, &(Global_1071686.f_636.f_15910), func_76(iParam1));
			break;
		case 8:
			Var0.f_1 = func_819(iParam0, &(Global_1071686.f_636.f_16512), func_76(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_820();
	}
	return Var0;
}

void func_638(int iParam0, var uParam1)
{
	func_821(iParam0, uParam1->f_3.f_2);
	func_822(iParam0, uParam1->f_3.f_3);
	func_823(iParam0, uParam1->f_3.f_4);
	func_824(iParam0, uParam1->f_3);
	func_825(iParam0, uParam1->f_3.f_1);
	func_826(iParam0, *uParam1);
	func_827(iParam0, uParam1->f_2);
}

void func_639(int iParam0)
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
	Var17.f_3 = { func_635(iParam0) };
	iVar1 = func_828(Var17.f_3, Var17.f_3.f_1, Var17.f_3.f_2);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Var6 = { func_829(Var17, iVar0) };
		func_830(&Var6, iParam0);
		iVar0++;
	}
	iVar1 = func_831(Var17.f_3, Var17.f_3.f_1, Var17.f_3.f_2);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Var12 = { func_832(&Var17, iVar0) };
		func_833(&Var12, iParam0);
		iVar0++;
	}
	iVar1 = func_834(Var17.f_3, Var17.f_3.f_1, Var17.f_3.f_2);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Var2 = { func_835(Var17, iVar0) };
		func_602(&Var2, iParam0);
		iVar0++;
	}
}

bool func_640(var uParam0)
{
	var uVar0;
	var uVar1;

	uVar0 = Global_1071686.f_28448[29 /*4*/].f_3;
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

bool func_641(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;

	uVar0 = uParam0->f_1;
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = iParam3;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0))
	{
		uParam0->f_1 = uVar0;
		return false;
	}
	return true;
}

struct<8> func_642(var uParam0, int iParam1, int iParam2)
{
	struct<8> Var0;

	uParam0->f_2 = iParam1;
	if (!DATAFILE::_DATAFILE_GET_STRING(&Var0, uParam0))
	{
	}
	return Var0;
}

int func_643(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("HELP_TEXT_POST_COOP_MISSION_1"):
			return 1;
		case joaat("HELP_TEXT_POST_EXT_NO_GATING_ITEM"):
			return 3;
		case joaat("HELP_TEXT_POST_EXT_HAS_SETUP_MOON"):
			return 4;
		case joaat("HELP_TEXT_POST_COOP_MISSION_5"):
			return 2;
		case joaat("HELP_TEXT_WAIT_FOR_POSSE_LEADER"):
			return 0;
		case joaat("HELP_TEXT_BLOCK_ACCEPT_POSSE_TOO_LARGE"):
			return 5;
		case joaat("HELP_TEXT_COOP_COOLDOWN_DONE"):
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

struct<8> func_644(int iParam0)
{
	struct<8> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_2 = -1;
	Var0.f_3.f_3 = -1;
	Var0.f_3.f_4 = -1;
	MISC::_COPY_MEMORY(&Var0, &(Global_1297470.f_55.f_4[iParam0 /*8*/]), 8);
	return Var0;
}

void func_645(int iParam0)
{
	struct<4> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_2 = -1;
	Var0.f_3.f_3 = -1;
	Var0.f_3.f_4 = -1;
	func_638(iParam0, &Var0);
}

bool func_646(int iParam0)
{
	return (Global_1297470.f_55.f_1.f_2 && iParam0) != 0;
}

var func_647()
{
	return Global_1109804.f_21;
}

int func_648(int iParam0)
{
	return Global_1109804[iParam0];
}

void func_649(int iParam0)
{
	if (Global_1109804.f_17)
	{
		func_836(iParam0);
	}
	else
	{
		func_837(iParam0);
	}
}

void func_650(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_838(iParam0, 1))
	{
		return;
	}
	bVar0 = func_839();
	func_840(iParam0);
	if (iParam1 == -1)
	{
		iVar1 = Global_1198046.f_231.f_1066[iParam0 /*17*/].f_7;
		if (iVar1 > 1)
		{
			iVar1 = 1;
		}
		iParam1 = 0;
		while (iParam1 < iVar1)
		{
			func_841(iParam0, iParam1, bVar0);
			iParam1++;
		}
	}
	else
	{
		func_841(iParam0, iParam1, bVar0);
	}
	if (bVar0)
	{
		func_842(iParam0);
	}
}

bool func_651()
{
	return func_843();
}

void func_652(var uParam0, var uParam1)
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
	if (uParam0->f_3[iVar0 /*40*/].f_2 != -1)
	{
		Var1 = { func_844(&(Global_1198046.f_28), uParam0->f_3[iVar0 /*40*/]) };
		func_845(Var1, uParam0, &(uParam0->f_3[iVar0 /*40*/]));
	}
}

void func_653(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	int iVar11;

	iVar0 = func_846(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	if (!GANG::_0x93A91A351A07360E(iVar0))
	{
		Var1 = -1;
		Var1.f_1 = -1;
		Var1.f_3 = -1;
		Var1.f_4 = -1;
		Var1.f_5 = -1;
		Var1.f_6 = -1;
		Var1.f_6.f_1 = -1;
		Var1.f_9 = 2;
		Var1 = { func_490(iParam0) };
		if (func_18(Var1))
		{
			iVar11 = func_847(&Var1);
			if (iVar11 != func_848(iParam0))
			{
				if (func_849(iVar11))
				{
					func_850(iParam0, iVar11);
				}
			}
		}
		func_851(iParam0);
	}
}

void func_654(int iParam0)
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
	iVar1 = func_852(iVar0, -1);
	iVar4 = GANG::_0x901E0DC25080C8B9(iVar0);
	if (func_489(iVar1))
	{
		if (func_846(iVar1) == iVar4)
		{
			return;
		}
	}
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		iVar5 = func_846(iVar2);
		if (func_853(iVar2) != -1)
		{
		}
		else
		{
			if (iVar5 == 0)
			{
				iVar3 = iVar2;
			}
			else if (!GANG::_0x93A91A351A07360E(iVar5))
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
			func_854(iVar3, iVar4);
		}
	}
}

void func_655(int iParam0)
{
	var uVar0;
	bool bVar1;

	switch (func_853(iParam0))
	{
		case -1:
			bVar1 = func_855(iParam0, &uVar0);
			break;
		case 0:
			bVar1 = func_856(iParam0, &uVar0);
			break;
		case 1:
			bVar1 = func_857(iParam0, &uVar0);
			break;
		case 2:
			bVar1 = func_858(iParam0, &uVar0);
			break;
		case 3:
			bVar1 = func_859(iParam0, &uVar0);
			break;
		case 4:
			bVar1 = func_860(iParam0, &uVar0);
			break;
		case 5:
			bVar1 = func_861(iParam0, &uVar0);
			break;
		case 6:
			bVar1 = func_862(iParam0, &uVar0);
			break;
		case 7:
			bVar1 = func_863(iParam0, &uVar0);
			break;
		case 9:
			bVar1 = func_864(iParam0, &uVar0);
			break;
		case 8:
			bVar1 = func_865(iParam0, &uVar0);
			break;
		default:
			break;
	}
	if (bVar1)
	{
		func_867(iParam0, uVar0, func_866(iParam0));
	}
}

void func_656()
{
	func_868(3, (func_648(3) + 1 % 32));
	func_868(0, (func_648(0) + 1 % 32));
}

void func_657()
{
	int iVar0;
	struct<13> Var1;
	struct<4> Var14;

	iVar0 = func_852(PLAYER::PLAYER_ID(), -1);
	if (!func_489(iVar0))
	{
		return;
	}
	Var1 = { func_869(iVar0) };
	if (!func_870(Var1.f_5, Var1.f_3))
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
	func_871(&Var14);
}

void func_658()
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
	bVar2 = func_872(iVar8, 1);
	bVar3 = func_872(iVar8, 2);
	bVar0 = func_872(iVar8, 4);
	bVar1 = func_872(iVar8, 8);
	bVar4 = func_872(iVar8, 32);
	bVar5 = (func_18(func_873()) && !func_18(func_874()));
	bVar7 = func_875() == true;
	bVar6 = (func_876() >= 23 || func_876() == 0);
	if (func_877() != GANG::_0x901E0DC25080C8B9(iVar8) && (func_878() == 4 || (bVar4 && !func_879(255))))
	{
		if (bVar4)
		{
			if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(2000);
			}
		}
		func_880();
		return;
	}
	if (bVar4)
	{
		if ((func_881() == 0 && !bVar0) || bVar1)
		{
			if (CAM::IS_SCREEN_FADED_IN() && !func_879(255))
			{
				func_882(4);
				func_882(8);
				func_882(32);
				func_883(0);
				func_884(func_820());
			}
		}
	}
	if ((func_885() == -1 && !bVar5) && ((bVar7 && bVar6) || !bVar7))
	{
		if (bVar2)
		{
			func_880();
		}
		return;
	}
	iVar9 = func_852(iVar8, -1);
	if (!func_489(iVar9))
	{
		return;
	}
	if (((((!bVar5 && ((bVar7 && bVar6) || !bVar7)) && func_877() != GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) && bVar3) && !bVar0) && func_878() != 2)
	{
		func_880();
		return;
	}
	if (!bVar2)
	{
		return;
	}
	if (!bVar5 && func_878() != 4)
	{
		if (func_885() != 4)
		{
			return;
		}
	}
	if (!bVar3)
	{
		switch (func_885())
		{
			case 4:
				if (!AUDIO::_0xA2CAC9DEF0195E6F(0))
				{
					func_886(2);
				}
				break;
			default:
				func_886(2);
				break;
		}
		return;
	}
	if (!bVar1)
	{
		return;
	}
	func_880();
}

void func_659()
{
	int iVar0;

	iVar0 = func_648(4);
	if (func_887(iVar0))
	{
		func_888(iVar0);
	}
	else
	{
		func_889(iVar0);
	}
}

void func_660()
{
	int iVar0;
	int iVar1;

	iVar0 = func_648(5);
	iVar1 = iVar0;
	if (func_890(iVar1))
	{
		func_891(iVar1);
	}
	else
	{
		func_892(iVar1);
	}
}

void func_661()
{
	if (func_893(255))
	{
		func_894(1);
	}
	else
	{
		func_894(2);
	}
}

void func_662()
{
	int iVar0;
	int iVar1;

	iVar0 = GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	if (!func_895(iVar0, 1024))
	{
		return;
	}
	if (func_18(func_873()))
	{
		return;
	}
	iVar1 = MISC::GET_GAME_TIMER();
	if (func_896(131072))
	{
		if ((iVar1 - func_897()) < Global_1901947.f_308.f_37)
		{
			return;
		}
	}
	func_898(iVar0);
	func_899(iVar1);
	func_900(131072);
}

void func_663()
{
	int iVar0;
	struct<4> Var1;

	if (!func_901())
	{
		return;
	}
	if (GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()) != func_902())
	{
		func_903();
		return;
	}
	iVar0 = func_904(func_902());
	if (iVar0 == -1)
	{
		return;
	}
	if (!func_905(iVar0))
	{
		return;
	}
	if (func_853(iVar0) != 0)
	{
		return;
	}
	if (!func_907(func_906(), func_490(iVar0)) && func_18(func_490(iVar0)))
	{
		func_903();
		return;
	}
	if (func_908(iVar0, 2))
	{
		func_903();
		return;
	}
	Var1.f_1 = -1;
	func_909(&Var1);
	func_914(func_910(), func_911(), func_912(), func_913(), func_906(), Var1, 1);
	func_903();
}

void func_664()
{
	struct<5> Var0;
	int iVar5;

	Var0 = 3;
	iVar5 = GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar5) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5))
	{
		func_915(iVar5, &Var0);
		if (Var0.f_4)
		{
			func_916(&Var0);
		}
	}
	if (func_917(2))
	{
		func_918(&Var0);
		func_919(&Var0);
		func_920(2);
	}
}

void func_665()
{
	struct<4> Var0;
	int iVar4;

	Var0 = 2;
	iVar4 = GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar4) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4))
	{
		func_921(iVar4, &Var0);
		if (Var0.f_3)
		{
			func_922(&Var0);
		}
	}
	if (func_917(4))
	{
		func_923(&Var0);
		func_924(&Var0);
		func_920(4);
	}
}

void func_666()
{
	struct<5> Var0;
	var uVar5;
	int iVar10;
	int iVar11;

	Var0 = 3;
	uVar5 = 3;
	if (PLAYER::PLAYER_ID() == Global_1102219.f_3674)
	{
		iVar10 = 0;
		while (iVar10 <= 6)
		{
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Global_1102219.f_3675[iVar10]))
			{
			}
			else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1102219.f_3675[iVar10]))
			{
			}
			else
			{
				func_925(Global_1102219.f_3675[iVar10], &uVar5);
				if (!uVar5.f_4)
				{
				}
				else
				{
					iVar11 = 0;
					while (iVar11 <= 2)
					{
						Var0[iVar11] = (Var0[iVar11] || uVar5[iVar11]);
						iVar11++;
					}
				}
			}
			iVar10++;
		}
		Var0.f_4 = 1;
	}
	func_926(&Var0);
}

void func_667()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	iVar0 = func_648(6);
	iVar3 = PLAYER::PLAYER_ID();
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (iVar0 == func_927(iVar1))
		{
			if (func_928(iVar1) != 0)
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
		if (func_929(iVar3, iVar0))
		{
			func_930(iVar0);
			return;
		}
	}
}

int func_668()
{
	if (!func_931())
	{
		return 0;
	}
	Global_1194053.f_409.f_9 = 0;
	return 1;
}

void func_669()
{
	func_868(1, (func_648(1) + 1 % 32));
	func_868(2, (func_648(2) + 1 % 32));
	func_868(4, (func_648(4) + 1 % 36));
	func_868(5, (func_648(5) + 1 % 90));
	func_868(6, (func_648(6) + 1 % 62));
}

void func_670()
{
	Global_1939655 = 3;
	Global_1939655.f_289 = 1;
}

bool func_671(int iParam0)
{
	int iVar0;

	iVar0 = func_760(iParam0);
	if (iVar0 < 336)
	{
		return false;
	}
	return true;
}

void func_672(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = Global_1071686.f_19648.f_20;
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
			Global_1071686.f_19648.f_19 = (Global_1071686.f_19648.f_19 || Global_1056141[iVar1 /*471*/].f_425[iParam0]);
			Global_1071686.f_19648.f_20 = (Global_1071686.f_19648.f_20 && Global_1056141[iVar1 /*471*/].f_425.f_19[iParam0]);
		}
		iVar1++;
	}
	func_932(iParam0);
	if (Global_1071686.f_19648.f_19 == Global_1071686.f_19648[iParam0] && iVar0 == Global_1071686.f_19648.f_20)
	{
		*uParam1 = 1;
	}
	else
	{
		Global_1071686.f_19648.f_23 = 1;
	}
}

void func_673(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar2 = (Global_1071686.f_19648.f_22 + iVar1);
		if (iVar2 > 31)
		{
			bVar0 = true;
		}
		else
		{
			if (MISC::IS_BIT_SET(Global_1056141[iParam0 /*471*/].f_425[iParam1], iVar2))
			{
				MISC::CLEAR_BIT(&(Global_1056141[iParam0 /*471*/].f_425.f_19[iParam1]), iVar2);
			}
			else if (!MISC::IS_BIT_SET(Global_1071686.f_19648[iParam1], iVar2))
			{
				MISC::SET_BIT(&(Global_1056141[iParam0 /*471*/].f_425.f_19[iParam1]), iVar2);
			}
			else
			{
				iVar3 = (iParam1 * 31 + iVar2);
				if (iVar3 > 544)
				{
					bVar0 = true;
				}
				else
				{
					if (func_462(iVar3))
					{
						MISC::SET_BIT(&(Global_1056141[iParam0 /*471*/].f_425.f_19[iParam1]), iVar2);
					}
					else
					{
						MISC::CLEAR_BIT(&(Global_1056141[iParam0 /*471*/].f_425.f_19[iParam1]), iVar2);
					}
					iVar1++;
				}
				Global_1071686.f_19648.f_22 = iVar2 + 1;
				if (bVar0 || iVar2 == 31)
				{
					if (Global_1071686.f_19648.f_20 != Global_1056141[iParam0 /*471*/].f_425.f_19[iParam1])
					{
						Global_1071686.f_19648.f_20 = (Global_1071686.f_19648.f_20 && Global_1056141[iParam0 /*471*/].f_425.f_19[iParam1]);
					}
					Global_1071686.f_19648.f_23 = 2;
				}
			}
		}
	}
}

var func_674(int iParam0, int iParam1)
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

bool func_675(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 2147483647)
	{
		return false;
	}
	return true;
}

bool func_676(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	return (iVar0 >= 0 && iVar0 < 64);
}

int func_677(struct<2> Param0)
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
	if (!func_77(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1071686.f_19550 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_77(Global_1071686.f_19550.f_1[iVar8 /*3*/], &vVar3);
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

bool func_678(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return true;
}

struct<2> func_679(int iParam0)
{
	if (!func_933(iParam0))
	{
		return func_820();
	}
	return Global_1835011[iParam0 /*72*/].f_1;
}

int func_680(struct<2> Param0)
{
	int iVar0;

	if (Global_1900806 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_1900806 - 1))
	{
		if (func_907(Global_1900807[iVar0 /*2*/], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_681(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_517(32768))
	{
		return 0;
	}
	iVar0 = func_58();
	if (func_934(&(Global_1835011[iParam0 /*72*/].f_30), 512) && !func_934(&(Global_1835011[iParam0 /*72*/].f_30), 1024))
	{
		if (func_935())
		{
			return 0;
		}
	}
	if (Global_1835011[iParam0 /*72*/].f_67)
	{
		return 0;
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*72*/].f_28))
	{
		bVar3 = Global_1835011[iParam0 /*72*/].f_66;
		if (func_936(iParam0, iVar0))
		{
			vVar4 = { func_937(iParam0) };
			Global_1835011[iParam0 /*72*/].f_65 = VOLUME::_CREATE_VOLUME_SPHERE(vVar4, 0f, 0f, 0f, 19f, 19f, 19f);
			if (VOLUME::_DOES_VOLUME_EXIST(Global_1835011[iParam0 /*72*/].f_65))
			{
				Global_1835011[iParam0 /*72*/].f_28 = MAP::_0xA6EF0C54A3443E70(1673015813, Global_1835011[iParam0 /*72*/].f_65);
			}
		}
		else if (bVar3)
		{
			Global_1835011[iParam0 /*72*/].f_28 = MAP::_BLIP_ADD_FOR_COORD(1673015813, func_938(iParam0));
		}
		else
		{
			Global_1835011[iParam0 /*72*/].f_28 = MAP::_BLIP_ADD_FOR_COORD(1673015813, func_939(iParam0));
		}
		Global_1835011[iParam0 /*72*/].f_29 = 1673015813;
		bVar1 = true;
		if (iParam2 != -1)
		{
			if (bVar2)
			{
				func_940(iParam2, 4194304);
			}
			else
			{
				func_684(iParam2, 4194304);
			}
		}
		MAP::SET_BLIP_FLASH_TIMER(Global_1835011[iParam0 /*72*/].f_28, 71, Global_1835011[iParam0 /*72*/].f_3);
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*72*/].f_28))
	{
		return 0;
	}
	func_941(iParam0);
	if (bVar1)
	{
		MAP::SET_BLIP_SPRITE(Global_1835011[iParam0 /*72*/].f_28, Global_1835011[iParam0 /*72*/].f_27, true);
		if (iVar0 != -1)
		{
			MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(Global_1835011[iParam0 /*72*/].f_28, &(Global_1835011[iParam0 /*72*/].f_42));
		}
		if (!func_934(&(Global_1835011[iParam0 /*72*/].f_30), 1024))
		{
			MAP::_BLIP_SET_MODIFIER(Global_1835011[iParam0 /*72*/].f_28, 580546400);
			func_942(&(Global_1835011[iParam0 /*72*/].f_30), 1024);
		}
		if (func_934(&(Global_1835011[iParam0 /*72*/].f_30), 524288))
		{
			MAP::_BLIP_SET_MODIFIER(Global_1835011[iParam0 /*72*/].f_28, -401963276);
		}
		if (func_934(&(Global_1835011[iParam0 /*72*/].f_30), 1048576))
		{
			MAP::_BLIP_SET_MODIFIER(Global_1835011[iParam0 /*72*/].f_28, -1878373110);
			MAP::_BLIP_SET_MODIFIER(Global_1835011[iParam0 /*72*/].f_28, 231194138);
		}
	}
	return 1;
}

bool func_682(int iParam0, int iParam1)
{
	return (func_678(iParam0) && (Global_1900838[iParam0 /*2*/].f_1 && iParam1) != 0);
}

void func_683(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	if (Global_1900806 <= 0)
	{
		return;
	}
	if (!func_18(Param0))
	{
		return;
	}
	if (func_943(Param0))
	{
		func_944(Param0, 0, -1, 0, 0);
	}
	iVar0 = func_680(Param0);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = iVar0;
	if (Global_1900806 > 1)
	{
		Global_1900807[iVar1 /*2*/] = { Global_1900807[(Global_1900806 - 1) /*2*/] };
		Global_1900838[iVar1 /*2*/] = { Global_1900838[(Global_1900806 - 1) /*2*/] };
		func_288(&(Global_1900807[(Global_1900806 - 1) /*2*/]));
		Global_1900838[(Global_1900806 - 1) /*2*/] = { Var2 };
	}
	else
	{
		func_288(&(Global_1900807[iVar1 /*2*/]));
		Global_1900838[iVar1 /*2*/] = { Var2 };
	}
	Global_1900806 = (Global_1900806 - 1);
	if (Global_1900806 < 0)
	{
		Global_1900806 = 0;
	}
}

void func_684(int iParam0, int iParam1)
{
	if (!func_678(iParam0))
	{
		return;
	}
	Global_1900838[iParam0 /*2*/].f_1 = (Global_1900838[iParam0 /*2*/].f_1 - (Global_1900838[iParam0 /*2*/].f_1 && iParam1));
}

bool func_685(struct<2> Param0)
{
	return func_365(Param0) == 0;
}

void func_686(struct<2> Param0, bool bParam2)
{
	if (!func_18(Param0))
	{
		return;
	}
	if (!func_685(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_945(Param0);
	}
	func_946(Param0, 1);
	bParam2 = bParam2;
}

int func_687()
{
	return Global_1297047.f_419.f_1;
}

void func_688()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_947())
	{
		return;
	}
	if (!func_948())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = BUILTIN::SHIFT_LEFT(1, iVar0);
		iVar2 = iVar1;
		if (!func_949(iVar2))
		{
		}
		else if (!func_950(iVar2))
		{
		}
		else
		{
			func_951(iVar2);
		}
		else
		{
			iVar0++;
		}
	}
}

int func_689()
{
	return Global_1297047.f_419.f_2;
}

void func_690(int iParam0)
{
	Global_1297047.f_419.f_2 = iParam0;
}

void func_691(int iParam0)
{
	Global_1297047.f_419.f_1 = iParam0;
}

int func_692()
{
	return Global_1102219.f_3674;
}

int func_693()
{
	return Global_1297047.f_374.f_3;
}

int func_694(int iParam0, int iParam1)
{
	return Global_1297047[iParam0 /*37*/][iParam1];
}

int func_695(int iParam0, int iParam1)
{
	return Global_1297047[iParam0 /*37*/].f_3[iParam1];
}

int func_696(int iParam0)
{
	return Global_1297047.f_371[iParam0];
}

void func_697(int iParam0)
{
	Global_1056141[PLAYER::PLAYER_ID() /*471*/].f_418.f_2 = iParam0;
}

void func_698(int iParam0)
{
	Global_1056141[PLAYER::PLAYER_ID() /*471*/].f_418.f_3 = iParam0;
}

void func_699(int iParam0)
{
	Global_1056141[PLAYER::PLAYER_ID() /*471*/].f_418.f_4 = iParam0;
}

void func_700(int iParam0)
{
	Global_1056141[PLAYER::PLAYER_ID() /*471*/].f_418.f_5 = iParam0;
}

var func_701(int iParam0)
{
	return Global_1056141[iParam0 /*471*/].f_418.f_2;
}

void func_702(var uParam0)
{
	Global_1297047.f_374.f_2 = uParam0;
}

var func_703(int iParam0)
{
	return Global_1056141[iParam0 /*471*/].f_418.f_3;
}

void func_704(var uParam0)
{
	Global_1297047.f_374.f_3 = uParam0;
}

var func_705(int iParam0)
{
	return Global_1056141[iParam0 /*471*/].f_418.f_4;
}

void func_706(var uParam0)
{
	Global_1297047.f_374.f_4 = uParam0;
}

var func_707(int iParam0)
{
	return Global_1056141[iParam0 /*471*/].f_418.f_5;
}

void func_708(var uParam0)
{
	Global_1297047.f_374.f_5 = uParam0;
}

struct<4> func_709()
{
	struct<4> Var0;

	return Var0;
}

bool func_710(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_711(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

bool func_712(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 22)
	{
		return false;
	}
	return true;
}

int func_713(int iParam0)
{
	if (!func_712(iParam0))
	{
		return 0;
	}
	return Global_1293346.f_2985[iParam0];
}

int func_714(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!func_712(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		iVar0 = func_952(iParam0);
		if (func_710(iVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = func_953(255);
			}
			else
			{
				iVar1 = func_390(iVar0, func_389(1), joaat("SLOTID_PROGRESSION"), 1, 0, 0);
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
		iVar0 = func_954(iParam0);
		if (func_710(iVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = NETWORK::_NETWORK_GET_XP();
			}
			else
			{
				iVar1 = func_390(iVar0, func_389(1), joaat("SLOTID_PROGRESSION"), 1, 0, 0);
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

void func_715(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

void func_716(int iParam0, int iParam1, int iParam2)
{
	Global_1297047.f_404[iParam0 /*7*/][iParam1 /*3*/].f_1 = iParam2;
}

void func_717(int iParam0, int iParam1, int iParam2)
{
	Global_1297047.f_404[iParam0 /*7*/][iParam1 /*3*/] = iParam2;
}

void func_718(int iParam0, int iParam1, int iParam2)
{
	Global_1297047.f_404[iParam0 /*7*/][iParam1 /*3*/].f_2 = iParam2;
}

bool func_719(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return (Global_1197740.f_1 && iParam0) != 0;
}

bool func_720(int iParam0, int iParam1)
{
	return (Global_1100469[iParam0 /*53*/].f_51.f_1 && iParam1) != 0;
}

float func_721(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

float func_722()
{
	return 100f;
}

void func_723(int iParam0, int iParam1)
{
	Global_1301323.f_155.f_4[iParam0 /*4*/] = iParam1;
}

void func_724(int iParam0, int iParam1)
{
	Global_1301323.f_155.f_4[iParam0 /*4*/].f_3 = iParam1;
}

void func_725(int iParam0)
{
	func_955(iParam0);
	func_956(iParam0);
	func_724(iParam0, 0);
}

void func_726(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<10> Var5;

	Var5 = -1;
	Var5.f_9 = -1082130432;
	func_957(iParam0);
	iVar4 = PLAYER::GET_PLAYER_PED(iParam0);
	iVar3 = ENTITY::GET_ENTITY_MODEL(iVar4);
	iVar2 = func_958(iVar3);
	iVar1 = iParam0;
	if (func_959() <= 0)
	{
		if (func_960(1))
		{
			GRAPHICS::_0x5C9978A2A3DC3D0D();
			func_961(1);
		}
		if (func_960(2))
		{
			iVar0 = 0;
			while (iVar0 <= (iVar2 - 1))
			{
				if (func_962(iVar1, iVar0))
				{
				}
				else if (!func_963(iVar3, iVar0, &Var5))
				{
				}
				else
				{
					GRAPHICS::ANIMPOSTFX_STOP(&(Var5.f_1));
				}
				iVar0++;
			}
			func_961(2);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar4))
	{
		GRAPHICS::_0x56A786E87FF53478(iVar4);
	}
}

int func_727(int iParam0)
{
	return Global_1100469[iParam0 /*53*/].f_51;
}

int func_728(int iParam0)
{
	return Global_1301323.f_155.f_4[iParam0 /*4*/].f_3;
}

int func_729()
{
	return 3000;
}

int func_730(int iParam0, int iParam1, int iParam2)
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

float func_731(float fParam0, float fParam1, float fParam2)
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

float func_732(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

void func_733(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<34> Var5;

	Var5.f_26 = -1;
	Var5.f_27 = -1082130432;
	Var5.f_28 = -1;
	Var5.f_29 = -1;
	Var5.f_30 = -1;
	Var5.f_31 = -1;
	Var5.f_32 = -1;
	iVar1 = iParam0;
	iVar4 = PLAYER::GET_PLAYER_PED(iParam0);
	iVar3 = ENTITY::GET_ENTITY_MODEL(iVar4);
	iVar2 = func_964(iVar3);
	iVar0 = 0;
	while (iVar0 <= (iVar2 - 1))
	{
		if (func_965(iVar1, iVar0))
		{
		}
		else if (!func_966(iVar3, iVar0, &Var5))
		{
		}
		else if (Var5.f_33 & 64 != 0)
		{
			if (iParam1 > Var5.f_32)
			{
			}
			else
			{
				STREAMING::REQUEST_NAMED_PTFX_ASSET(Var5.f_16);
				if (!STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(Var5.f_16))
				{
				}
				else
				{
					GRAPHICS::USE_PARTICLE_FX_ASSET(&(Var5.f_8));
					if (Var5.f_33 & 8 != 0)
					{
						GRAPHICS::SET_PARTICLE_FX_NON_LOOPED_COLOUR(BUILTIN::TO_FLOAT(Var5.f_28), BUILTIN::TO_FLOAT(Var5.f_30), BUILTIN::TO_FLOAT(Var5.f_29));
					}
					if (Var5.f_33 & 16 != 0)
					{
						GRAPHICS::SET_PARTICLE_FX_NON_LOOPED_ALPHA(BUILTIN::TO_FLOAT(Var5.f_31));
					}
					if (Var5.f_33 & 32 != 0)
					{
						GRAPHICS::_0x56C392C2BD78B024(Var5.f_23);
					}
					GRAPHICS::_START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE_2(&Var5, iVar4, Var5.f_17, Var5.f_20, Var5.f_26, Var5.f_27, Var5.f_33 & 1 != 0, Var5.f_33 & 2 != 0, Var5.f_33 & 4 != 0);
					func_967(iVar1, iVar0);
				}
			}
			iVar0++;
		}
	}
}

void func_734(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<10> Var5;

	Var5 = -1;
	Var5.f_9 = -1082130432;
	func_968(iParam0);
	if (!func_960(1))
	{
		GRAPHICS::_0xFAAD23DE7A54FC14();
		func_969(1);
	}
	iVar4 = PLAYER::GET_PLAYER_PED(iParam0);
	iVar3 = ENTITY::GET_ENTITY_MODEL(iVar4);
	iVar2 = func_958(iVar3);
	iVar1 = iParam0;
	iVar0 = 0;
	while (iVar0 <= (iVar2 - 1))
	{
		if (func_962(iVar1, iVar0))
		{
		}
		else if (!func_963(iVar3, iVar0, &Var5))
		{
		}
		else
		{
			GRAPHICS::ANIMPOSTFX_PLAY(&(Var5.f_1));
			GRAPHICS::_0x958DEBD9353C0935(iVar4, Var5, Var5.f_9);
			func_970(iVar1, iVar0);
			func_969(2);
		}
		iVar0++;
	}
}

void func_735(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	if ((!PED::_0x91A5F9CBEBB9D936(Global_1211392.f_1099[iParam0 /*3*/]) || Global_1211392.f_1099[iParam0 /*3*/].f_1 != iParam1) || Global_1211392.f_1099[iParam0 /*3*/].f_2 != iParam2)
	{
		func_421(iParam0);
		vVar0 = { Global_1211392.f_48[iParam1 /*21*/][iParam2 /*4*/].f_1 };
		vVar3 = { 2f, 2f, 2f };
		Global_1211392.f_1099[iParam0 /*3*/] = PED::ADD_SCENARIO_BLOCKING_AREA((vVar0.x - vVar3.x), (vVar0.y - vVar3.y), (vVar0.z - vVar3.z), (vVar0.x + vVar3.x), (vVar0.y + vVar3.y), (vVar0.z + vVar3.z), 0, 16);
		Global_1211392.f_1099[iParam0 /*3*/].f_1 = iParam1;
		Global_1211392.f_1099[iParam0 /*3*/].f_2 = iParam2;
	}
}

bool func_736(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	if (Global_1296406[iParam0 /*2*/].f_1 != iParam1)
	{
		return false;
	}
	if (!func_573(1, iParam0))
	{
		return false;
	}
	if (!func_573(8, iParam0))
	{
		return false;
	}
	if (!func_573(4, iParam0))
	{
		return false;
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1296379.f_2), iParam0))
	{
		return false;
	}
	return true;
}

bool func_737(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	if (Global_1296379.f_22 >= 3)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!SCRIPTS::_0x72B2E00C9BAC6789(&uParam0, iVar0))
		{
		}
		else if (!func_736(iVar0, iParam1))
		{
			SCRIPTS::_0xD426E2E3288469D6(&uParam0, iVar0);
		}
		iVar0++;
	}
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam0))
	{
		return true;
	}
	func_971(&(Global_1296379.f_3[Global_1296379.f_22 /*6*/]));
	Global_1296379.f_3[Global_1296379.f_22 /*6*/] = iParam1;
	Global_1296379.f_3[Global_1296379.f_22 /*6*/].f_2 = uParam0;
	SCRIPTS::_0xFFDDF802279BE128(&(Global_1296379.f_2), &(Global_1296379.f_3[Global_1296379.f_22 /*6*/].f_2), &uVar1);
	Global_1296379.f_2 = uVar1;
	Global_1296379.f_22++;
	return true;
}

void func_738(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_739(var uParam0, int iParam1, int iParam2)
{
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1296379.f_2), iParam2);
	SCRIPTS::_0xD426E2E3288469D6(&(uParam0->f_2), iParam2);
	SCRIPTS::_0xD426E2E3288469D6(&(uParam0->f_4), iParam2);
	SCRIPTS::_0xD426E2E3288469D6(&(uParam0->f_5), iParam2);
	if (uParam0->f_3 == iParam1)
	{
		uParam0->f_3 = 255;
	}
}

void func_740(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 < 0 || iParam0 >= 3)
	{
		return;
	}
	if (Global_1296379.f_22 <= 0)
	{
		return;
	}
	iVar0 = SCRIPTS::GET_BLOCK_OF_PLAYER_BITS(&(Global_1296379.f_2), 0);
	iVar1 = SCRIPTS::GET_BLOCK_OF_PLAYER_BITS(&(Global_1296379.f_2), 1);
	iVar2 = SCRIPTS::GET_BLOCK_OF_PLAYER_BITS(&(Global_1296379.f_3[iParam0 /*6*/].f_2), 0);
	iVar3 = SCRIPTS::GET_BLOCK_OF_PLAYER_BITS(&(Global_1296379.f_3[iParam0 /*6*/].f_2), 1);
	SCRIPTS::SET_BLOCK_OF_PLAYER_BITS(&(Global_1296379.f_2), 0, (iVar0 - iVar2));
	SCRIPTS::SET_BLOCK_OF_PLAYER_BITS(&(Global_1296379.f_2), 1, (iVar1 - iVar3));
	Global_1296379.f_22 = (Global_1296379.f_22 - 1);
	Global_1296379.f_3[iParam0 /*6*/] = { Global_1296379.f_3[Global_1296379.f_22 /*6*/] };
	func_971(&(Global_1296379.f_3[Global_1296379.f_22 /*6*/]));
}

void func_741(var uParam0)
{
	struct<26> Var0;
	int iVar26;

	Var0 = -1;
	Var0.f_1 = 9;
	Var0.f_12 = 7;
	Var0.f_20 = 2;
	*uParam0 = { Var0 };
	iVar26 = 0;
	while (iVar26 <= 6)
	{
		uParam0->f_12[iVar26] = 255;
		iVar26++;
	}
}

void func_742(var uParam0)
{
	struct<146> Var0;
	int iVar146;
	int iVar147;

	Var0.f_1 = 9;
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
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_1 = -1;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_2 = -1;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_3 = 7;
	Var0.f_1.f_1.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_16.f_11 = 2;
	*uParam0 = { Var0 };
	iVar147 = 0;
	while (iVar147 < 9)
	{
		iVar146 = 0;
		while (iVar146 <= 6)
		{
			uParam0->f_1[iVar147 /*16*/].f_3[iVar146] = 255;
			iVar146++;
		}
		iVar147++;
	}
}

void func_743(var uParam0)
{
	struct<53> Var0;

	Var0.f_4 = 5;
	Var0.f_19 = 255;
	*uParam0 = { Var0 };
}

void func_744(var uParam0)
{
	struct<35> Var0;

	Var0.f_8 = -1;
	Var0.f_8.f_1 = -1;
	Var0.f_10 = 4;
	Var0.f_10.f_1.f_1 = -1;
	Var0.f_10.f_1.f_3.f_1 = -1;
	Var0.f_10.f_1.f_3.f_3.f_1 = -1;
	Var0.f_10.f_1.f_3.f_3.f_3.f_1 = -1;
	*uParam0 = { Var0 };
}

void func_745(var uParam0)
{
	struct<6> Var0;

	Var0.f_1 = -1;
	Var0.f_2 = 255;
	*uParam0 = { Var0 };
}

void func_746(var uParam0)
{
	var uVar0;

	*uParam0 = uVar0;
}

void func_747(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_972(&(uParam0->f_3));
	func_973(&(uParam0->f_18));
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
	uParam0->f_61 = func_974(2880);
	uParam0->f_62 = -1;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	func_975(&(uParam0->f_65));
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = { 0f, 0f, 0f };
	uParam0->f_77 = 0f;
	func_976(&(uParam0->f_78));
	uParam0->f_102 = 0;
	uParam0->f_103 = 0;
	uParam0->f_105 = 0;
	func_975(&(uParam0->f_106));
	StringCopy(&(uParam0->f_110), "", 64);
	uParam0->f_118 = 0;
	uParam0->f_122 = 0;
	func_975(&(uParam0->f_123));
	uParam0->f_127 = -1;
	func_976(&(uParam0->f_128));
	uParam0->f_152 = 0;
	uParam0->f_153 = 0;
	uParam0->f_303 = 0f;
}

void func_748(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	func_972(&(uParam0->f_2));
	func_973(&(uParam0->f_17));
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
	func_975(&(uParam0->f_57));
	uParam0->f_61 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_65 = -1;
	uParam0->f_66 = 0;
	uParam0->f_67 = 0;
	uParam0->f_68 = { 0f, 0f, 0f };
	uParam0->f_71 = 0f;
	func_975(&(uParam0->f_77));
	uParam0->f_81 = -1;
	func_976(&(uParam0->f_82));
	uParam0->f_106 = 0;
	uParam0->f_220 = 0;
	uParam0->f_221 = 0;
	func_975(&(uParam0->f_222));
	StringCopy(&(uParam0->f_226), "", 64);
	uParam0->f_235 = 0;
	func_975(&(uParam0->f_236));
	uParam0->f_240 = -1;
	func_976(&(uParam0->f_241));
	uParam0->f_265 = 0;
	uParam0->f_269 = 0;
	uParam0->f_280 = 0;
	uParam0->f_281 = 0;
	uParam0->f_282 = 0;
	uParam0->f_283 = -1;
	uParam0->f_284 = 0;
	uParam0->f_285 = 0;
	uParam0->f_285.f_1 = 0;
	uParam0->f_285.f_2 = 0;
	uParam0->f_285.f_3 = 0;
	if (MAP::DOES_BLIP_EXIST(uParam0->f_289))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_289));
	}
	if (uParam0->f_290 != 0)
	{
		UIFEED::_0x2F901291EF177B02(uParam0->f_290, 0);
		uParam0->f_290 = 0;
	}
}

void func_749(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_977(&(uParam0->f_4));
}

void func_750(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1;
	uParam0->f_8 = 0;
}

void func_751(var uParam0)
{
	*uParam0 = -1;
}

void func_752(var uParam0)
{
	func_975(uParam0);
	uParam0->f_4 = -1;
	uParam0->f_5 = 0;
	uParam0->f_6 = -1;
	uParam0->f_7 = 0;
}

void func_753(var uParam0)
{
	uParam0->f_2 = 0f;
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_9 = -1;
	uParam0->f_10 = -1;
	uParam0->f_11 = 0f;
	uParam0->f_6 = -1;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_12 = 0;
	uParam0->f_14 = 0;
	uParam0->f_18 = -15;
	uParam0->f_19 = 0;
}

void func_754(var uParam0)
{
	int iVar0;

	func_978(uParam0);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_3[iVar0] = 0f;
		iVar0++;
	}
}

void func_755(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
}

void func_756(var uParam0)
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

void func_757(var uParam0)
{
	struct<2> Var0;
	int iVar2;

	Var0 = -1;
	Var0.f_1 = -1;
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		*(uParam0[iVar2 /*2*/]) = { Var0 };
		iVar2++;
	}
}

void func_758(var uParam0)
{
	struct<67> Var0;

	Var0 = 32;
	Var0.f_1 = 255;
	Var0.f_1.f_2 = 255;
	Var0.f_1.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 255;
	*uParam0 = { Var0 };
}

int func_759(int iParam0)
{
	return iParam0 * 31;
}

int func_760(int iParam0)
{
	return func_759(iParam0) + 30;
}

int func_761(int iParam0, int iParam1)
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
			return joaat("WS_MP_INTRO_JESSICA_CAMP_RHODES");
		case 325:
			return joaat("WS_MP_INTRO_JESSICA_CAMP_VALENTINE");
		case 326:
			return joaat("WS_MP_INTRO_JESSICA_CAMP_BLACKWATER");
		case 327:
			return joaat("WS_MP_INTRO_JESSICA_CAMP_TUMBLEWEED");
		case 328:
			return joaat("WS_MP_INTRO_HIDEOUT_RHODES");
		case 329:
			return joaat("WS_MP_INTRO_HIDEOUT_VALENTINE");
		case 330:
			return joaat("WS_MP_INTRO_HIDEOUT_BLACKWATER");
		case 331:
			return joaat("WS_MP_INTRO_HIDEOUT_TUMBLEWEED");
		case 332:
			return 1582370975;
		case 333:
			return -330120947;
		case 334:
			return -333135263;
		case 335:
			return 1908151693;
		case 336:
			return joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK");
		case 337:
			return joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK_HOLD_OPEN");
		case 338:
			return joaat("WS_MP_JAIL_DOORS_BLACKWATER_UNLOCK");
		case 339:
			return joaat("WS_MP_JAIL_DOORS_BLACKWATER_LOCK");
		case 340:
			return joaat("WS_MP_JAIL_DOORS_SAINT_DENIS_UNLOCK");
		case 341:
			return joaat("WS_MP_JAIL_DOORS_SAINT_DENIS_LOCK");
		case 342:
			return joaat("WS_MP_JAIL_DOORS_STRAWBERRY_UNLOCK");
		case 343:
			return joaat("WS_MP_JAIL_DOORS_STRAWBERRY_LOCK");
		case 344:
			return joaat("WS_MP_JAIL_DOORS_VALENTINE_UNLOCK");
		case 345:
			return joaat("WS_MP_JAIL_DOORS_VALENTINE_LOCK");
		case 346:
			return joaat("WS_MP_HIDEOUT_LAKAY");
		case 347:
			return -1344601768;
		case 348:
			return joaat("WS_MP_HIDEOUT_BEAVER_HOLLOW");
		case 349:
			return -460024530;
		case 350:
			return joaat("WS_MP_HIDEOUT_FARMHOUSE");
		case 351:
			return 1698972798;
		case 352:
			return joaat("WS_MP_HIDEOUT_QUAKERS_COVE");
		case 353:
			return joaat("WS_MP_HIDEOUT_THE_LOFT");
		case 354:
			return joaat("WS_MP_HIDEOUT_CUMBERLAND_FALLS");
		case 355:
			return joaat("WS_MP_HIDEOUT_FORT_RIGGS");
		case 356:
			return joaat("WS_MP_HIDEOUT_STILLWATER_STRANDS");
		case 357:
			return joaat("WS_MP_HIDEOUT_COLTER");
		case 358:
			return joaat("WS_MP_HIDEOUT_ABANDONED_MINING_STATION");
		case 359:
			return joaat("WS_MP_HIDEOUT_CLEMENS_COVE");
		case 360:
			return joaat("WS_MP_HIDEOUT_TALL_TREES");
		case 361:
			return joaat("WS_MP_HIDEOUT_SHIP_ROCK");
		case 362:
			return joaat("WS_MP_HIDEOUT_ROCKY_SEVEN");
		case 363:
			return 1881028477;
		case 364:
			return joaat("WS_MP_HIDEOUT_SOLOMONS_FOLLY");
		case 365:
			return -1209597203;
		case 366:
			return joaat("WS_MP_HIDEOUT_CUERA_SECO");
		case 367:
			return 929582877;
		case 368:
			return joaat("WS_MP_HIDEOUT_RATTLESNAKE_HOLLOW");
		case 369:
			return joaat("WS_MP_HIDEOUT_REPENTANCE");
		case 370:
			return joaat("WS_MP_HIDEOUT_SEA_OF_CORONADO");
		case 371:
			return joaat("WS_MP_HIDEOUT_CHOLLA_SPRINGS");
		case 372:
			return joaat("WS_MP_HIDEOUT_OLD_BACCHUS_PLACE");
		case 373:
			return -396624371;
		case 374:
			return joaat("WS_MP_HIDEOUT_CAMP_PIKES");
		case 375:
			return joaat("WS_MP_HIDEOUT_GAPTOOTH");
		case 376:
			return joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_HILLTOP");
		case 377:
			return joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_CIRCLE");
		case 378:
			return joaat("WS_MP_CAMP_DEFEND_GRIZZLIES_CIRCLE");
		case 379:
			return joaat("WS_MP_CAMP_DEFEND_GREAT_PLAINS_CIRCLE");
		case 380:
			return joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE");
		case 381:
			return joaat("WS_MP_CAMP_DEFEND_TWO_ROCKS");
		case 382:
			return joaat("WS_MP_CAMP_DEFEND_GAPTOOTH_RIDGE");
		case 383:
			return joaat("WS_MP_CAMP_DEFEND_GAPTOOTH_BREACH");
		case 384:
			return joaat("WS_MP_CAMP_DEFEND_CHOLLA_SPRINGS");
		case 385:
			return joaat("WS_MP_CAMP_DEFEND_RIO_BRAVO");
		case 386:
			return joaat("WS_MP_CAMP_DEFEND_LITTLE_CREEK");
		case 387:
			return joaat("WS_MP_CAMP_DEFEND_RADLEYS_PASTURE");
		case 388:
			return joaat("WS_MP_CAMP_DEFEND_HENNIGANS_STEAD");
		case 389:
			return joaat("WS_MP_CAMP_DEFEND_TALL_TREES");
		case 390:
			return joaat("WS_MP_CAMP_DEFEND_NEW_HANOVER");
		case 391:
			return joaat("WS_MP_CAMP_DEFEND_BLUEWATER_MARSH");
		case 392:
			return 526003171;
		case 393:
			return joaat("WS_MP_FETCH_OTH_SHEPHERDS_RISE");
		case 394:
			return joaat("WS_MP_FETCH_OTH_TALL_TREES");
		case 395:
			return joaat("WS_MP_FETCH_OTH_CASTORS");
		case 396:
			return joaat("WS_MP_ASSASSINATION_TRK_GRZ_CAMP");
		case 397:
			return joaat("WS_MP_TREASURE_MAP_INTRO_TUMBLEWEED_01");
		case 398:
			return -1753769127;
		case 399:
			return -947815572;
		case 400:
			return -1181950077;
		case 401:
			return -489737721;
		case 402:
			return -102827640;
		case 403:
			return joaat("WS_MP_TREASURE_MAP_INTRO_VALENTINE_02");
		case 404:
			return -2141419899;
		case 405:
			return 16844748;
		case 406:
			return 831940854;
		case 407:
			return -1387772214;
		case 408:
			return -1095341658;
		case 409:
			return joaat("WS_MP_TREASURE_MAP_INTRO_RHODES_03");
		case 410:
			return -1556041029;
		case 411:
			return -1808329564;
		case 412:
			return joaat("WS_MP_TREASURE_MAP_INTRO_BLACKWATER_01");
		case 413:
			return 1421300489;
		case 414:
			return 1248935549;
		case 415:
			return 943561238;
		case 416:
			return -1939389836;
		case 417:
			return joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_01");
		case 418:
			return joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_02");
		case 419:
			return joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_03");
		case 420:
			return joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_04");
		case 421:
			return joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_01");
		case 422:
			return joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_02");
		case 423:
			return joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_03");
		case 424:
			return joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_04");
		case 425:
			return joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_01");
		case 426:
			return joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_02");
		case 427:
			return joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_03");
		case 428:
			return joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_04");
		case 429:
			return joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_01");
		case 430:
			return joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_02");
		case 431:
			return joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_03");
		case 432:
			return joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_04");
		case 433:
			return joaat("WS_MP_TREASURE_MAP_BRANDYWINE_01");
		case 434:
			return joaat("WS_MP_TREASURE_MAP_BRANDYWINE_02");
		case 435:
			return joaat("WS_MP_TREASURE_MAP_BRANDYWINE_03");
		case 436:
			return joaat("WS_MP_TREASURE_MAP_BRANDYWINE_04");
		case 437:
			return joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_01");
		case 438:
			return joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_02");
		case 439:
			return joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_03");
		case 440:
			return joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_04");
		case 441:
			return joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_01");
		case 442:
			return joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_02");
		case 443:
			return joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_03");
		case 444:
			return joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_04");
		case 445:
			return joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_01");
		case 446:
			return joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_02");
		case 447:
			return joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_03");
		case 448:
			return joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_04");
		case 449:
			return joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_01");
		case 450:
			return joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_02");
		case 451:
			return joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_03");
		case 452:
			return joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_04");
		case 453:
			return joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_01");
		case 454:
			return joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_02");
		case 455:
			return joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_03");
		case 456:
			return joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_04");
		case 457:
			return joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_01");
		case 458:
			return joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_02");
		case 459:
			return joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_03");
		case 460:
			return joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_04");
		case 461:
			return joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_01");
		case 462:
			return joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_02");
		case 463:
			return joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_03");
		case 464:
			return joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_04");
		case 465:
			return joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_01");
		case 466:
			return joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_02");
		case 467:
			return joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_03");
		case 468:
			return joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_04");
		case 469:
			return joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_01");
		case 470:
			return joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_02");
		case 471:
			return joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_03");
		case 472:
			return joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_04");
		case 473:
			return joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_01");
		case 474:
			return joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_02");
		case 475:
			return joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_03");
		case 476:
			return joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_04");
		case 477:
			return joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_01");
		case 478:
			return joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_02");
		case 479:
			return joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_03");
		case 480:
			return joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_04");
		case 481:
			return joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_01");
		case 482:
			return joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_02");
		case 483:
			return joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_03");
		case 484:
			return joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_04");
		case 485:
			return joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_01");
		case 486:
			return joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_02");
		case 487:
			return joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_03");
		case 488:
			return joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_04");
		case 489:
			return joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_01");
		case 490:
			return joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_02");
		case 491:
			return joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_03");
		case 492:
			return joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_04");
		case 493:
			return joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_01");
		case 494:
			return joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_02");
		case 495:
			return joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_03");
		case 496:
			return joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_04");
		case 497:
			return joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_01");
		case 498:
			return joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_02");
		case 499:
			return joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_03");
		case 500:
			return joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_04");
		case 501:
			return joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_01");
		case 502:
			return joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_02");
		case 503:
			return joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_03");
		case 504:
			return joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_04");
		case 505:
			return joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_01");
		case 506:
			return joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_02");
		case 507:
			return joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_03");
		case 508:
			return joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_04");
		case 509:
			return joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_01");
		case 510:
			return joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_02");
		case 511:
			return joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_03");
		case 512:
			return joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_04");
		case 513:
			return joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_01");
		case 514:
			return joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_02");
		case 515:
			return joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_03");
		case 516:
			return joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_04");
		case 517:
			return joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_01");
		case 518:
			return joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_02");
		case 519:
			return joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_03");
		case 520:
			return joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_04");
		case 521:
			return joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_01");
		case 522:
			return joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_02");
		case 523:
			return joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_03");
		case 524:
			return joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_04");
		case 525:
			return joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_01");
		case 526:
			return joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_02");
		case 527:
			return joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_03");
		case 528:
			return joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_04");
		case 529:
			return joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_01");
		case 530:
			return joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_02");
		case 531:
			return joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_03");
		case 532:
			return joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_04");
		case 533:
			return -441204543;
		case 534:
			return -812641169;
		case 535:
			return -554519756;
		case 536:
			return 865557632;
		case 537:
			return 1112996351;
		case 538:
			return -1608141409;
		case 539:
			return -311373772;
		case 540:
			return 61537448;
		case 541:
			return -925071604;
		case 542:
			return 1195508693;
		case 543:
			return 1774060092;
		case 544:
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

bool func_762(int iParam0)
{
	if (iParam0 == joaat("WS_MP_HIDEOUT_CLEMENS_COVE"))
	{
		return true;
	}
	return false;
}

bool func_763(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_979(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_671(iVar1))
	{
		if (Global_1071686.f_19648.f_24 && !func_762(iParam0))
		{
			return false;
		}
		return (MISC::IS_BIT_SET(Global_1071686.f_19648[iVar1], iVar2) || MISC::IS_BIT_SET(Global_39.f_110[iVar1], iVar2));
	}
	return MISC::IS_BIT_SET(Global_39.f_110[iVar1], iVar2);
}

bool func_764(vector3 vParam0, float fParam3)
{
	return BUILTIN::VDIST(Global_35, vParam0) < fParam3;
}

bool func_765(int iParam0, float fParam1, float fParam2)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;

	if (!STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		return true;
	}
	if (!STREAMING::_GET_IMAP_POSITION_AND_HEADING(iParam0, &vVar0, &fVar3))
	{
		return false;
	}
	fVar4 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_34, true, false), vVar0);
	if (fVar4 <= fParam1)
	{
		return false;
	}
	if (fVar4 > fParam2)
	{
		return true;
	}
	if (CAM::IS_SPHERE_VISIBLE(vVar0, fVar3))
	{
		return false;
	}
	return true;
}

bool func_766()
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(Global_34) && !ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_34);
		if (iVar0 != 0 && INTERIOR::_GET_INTERIOR_MINIMAP_HASH(iVar0) == joaat("BEA_01_INT"))
		{
			return true;
		}
	}
	return false;
}

int func_767(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WS_MP_TREASURE_MAP_INTRO_TUMBLEWEED_01"):
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
		case joaat("WS_MP_TREASURE_MAP_INTRO_VALENTINE_02"):
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
		case joaat("WS_MP_TREASURE_MAP_INTRO_RHODES_03"):
			return 879263546;
		case -1556041029:
			return -751879320;
		case -1808329564:
			return -864071044;
		case joaat("WS_MP_TREASURE_MAP_INTRO_BLACKWATER_01"):
			return 1779169712;
		case 1421300489:
			return 1083754485;
		case 1248935549:
			return 815958096;
		case 943561238:
			return 1532789536;
		case -1939389836:
			return 1916363327;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_01"):
			return -536919806;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_02"):
			return -1774606389;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_03"):
			return 999671710;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_04"):
			return -1051551519;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_01"):
			return 1303507358;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_02"):
			return -519371139;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_03"):
			return 120604643;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_04"):
			return -1819679999;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_01"):
			return -2145807603;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_02"):
			return -583431154;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_03"):
			return 1096335200;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_04"):
			return -270131786;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_01"):
			return 242017654;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_02"):
			return 120283199;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_03"):
			return 2127497940;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_04"):
			return -1643311717;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_01"):
			return -1765524972;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_02"):
			return 1364667248;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_03"):
			return -680105331;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_04"):
			return -252982535;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_02"):
			return 908136834;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_03"):
			return 1657354548;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_04"):
			return -2001856298;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_01"):
			return 1108419054;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_02"):
			return 1665904081;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_03"):
			return -1279448947;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_04"):
			return -2143372379;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_01"):
			return -1279389329;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_02"):
			return -1954638951;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_03"):
			return 574916087;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_04"):
			return 1793712122;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_01"):
			return -847027479;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_02"):
			return -946682429;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_03"):
			return 67603480;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_04"):
			return 1991561012;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_01"):
			return 1292550073;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_02"):
			return -233702408;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_03"):
			return -284530484;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_04"):
			return 1510796294;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_01"):
			return 616635225;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_02"):
			return -25254585;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_03"):
			return -1058872649;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_04"):
			return -1818498296;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_01"):
			return -657334314;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_02"):
			return -2144326250;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_03"):
			return -199228359;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_04"):
			return 806606916;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_01"):
			return 2137579614;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_02"):
			return -476328287;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_03"):
			return -2025289364;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_04"):
			return 536560689;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_02"):
			return 1106131202;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_03"):
			return -1428524966;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_04"):
			return 1307857318;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_01"):
			return 1117275649;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_02"):
			return 1628921491;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_03"):
			return -1815797865;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_04"):
			return 1673216541;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_01"):
			return 1803637785;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_02"):
			return 1812712970;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_03"):
			return 474786474;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_04"):
			return 492662035;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_01"):
			return 1951742298;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_02"):
			return -313167137;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_03"):
			return 1673463331;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_04"):
			return 568859874;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_01"):
			return -1623539657;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_02"):
			return -1939338394;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_03"):
			return -860360254;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_04"):
			return -409479737;
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_01"):
			return -1353663029;
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_02"):
			return 11141848;
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_03"):
			return 405359977;
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_04"):
			return -1754697240;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_01"):
			return 1199250380;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_02"):
			return 1303859698;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_03"):
			return 131702782;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_04"):
			return -1358954864;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_01"):
			return 1425800019;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_02"):
			return 1216579993;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_03"):
			return -1508001532;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_04"):
			return 1551178888;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_01"):
			return 743168245;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_02"):
			return 1098358070;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_03"):
			return -1871896679;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_04"):
			return -590242693;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_01"):
			return 30280292;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_02"):
			return -1211924901;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_03"):
			return 2088585697;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_04"):
			return -14824697;
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_01"):
			return -46828581;
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_02"):
			return -1858229297;
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_03"):
			return -216811017;
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_04"):
			return -1431123016;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_01"):
			return -1448418975;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_02"):
			return -1645569664;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_03"):
			return -2122265662;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_04"):
			return -510114122;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_01"):
			return 1857676106;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_02"):
			return -387074757;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_03"):
			return 2001473838;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_04"):
			return 1283630779;
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_01"):
			return 696753474;
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_02"):
			return 584821987;
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_03"):
			return 54505570;
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_04"):
			return -894288155;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_01"):
			return 353008762;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_02"):
			return -973153750;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_03"):
			return -394475958;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_04"):
			return 1277031798;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_01"):
			return -1244697162;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_02"):
			return 834697453;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_03"):
			return 1419259602;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_04"):
			return -378666035;
		default:
			break;
	}
	return -1554566073;
}

Vector3 func_768(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_01"):
			return -329.744f, -151.659f, 50.562f;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_01"):
			return -1519.495f, 740.865f, 124.87f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_769(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("REL_PLAYER_0");
		case 1:
			return joaat("REL_PLAYER_1");
		case 2:
			return joaat("REL_PLAYER_2");
		case 3:
			return joaat("REL_PLAYER_3");
		case 4:
			return joaat("REL_PLAYER_4");
		case 5:
			return joaat("REL_PLAYER_5");
		case 6:
			return joaat("REL_PLAYER_6");
		case 7:
			return joaat("REL_PLAYER_7");
		case 8:
			return joaat("REL_PLAYER_8");
		case 9:
			return joaat("REL_PLAYER_9");
		case 10:
			return joaat("REL_PLAYER_10");
		case 11:
			return joaat("REL_PLAYER_11");
		case 12:
			return joaat("REL_PLAYER_12");
		case 13:
			return joaat("REL_PLAYER_13");
		case 14:
			return joaat("REL_PLAYER_14");
		case 15:
			return joaat("REL_PLAYER_15");
		case 16:
			return joaat("REL_PLAYER_16");
		case 17:
			return joaat("REL_PLAYER_17");
		case 18:
			return joaat("REL_PLAYER_18");
		case 19:
			return joaat("REL_PLAYER_19");
		case 20:
			return joaat("REL_PLAYER_20");
		case 21:
			return joaat("REL_PLAYER_21");
		case 22:
			return joaat("REL_PLAYER_22");
		case 23:
			return joaat("REL_PLAYER_23");
		case 24:
			return joaat("REL_PLAYER_24");
		case 25:
			return joaat("REL_PLAYER_25");
		case 26:
			return joaat("REL_PLAYER_26");
		case 27:
			return joaat("REL_PLAYER_27");
		case 28:
			return joaat("REL_PLAYER_28");
		case 29:
			return joaat("REL_PLAYER_29");
		case 30:
			return joaat("REL_PLAYER_30");
		case 31:
			return joaat("REL_PLAYER_31");
		default:
			break;
	}
	return joaat("REL_NO_RELATIONSHIP");
}

bool func_770(int iParam0)
{
	return func_792(iParam0, 2);
}

bool func_771()
{
	return func_778() == 4;
}

bool func_772()
{
	return !func_90(2);
}

bool func_773()
{
	int iVar0;

	iVar0 = func_980(PLAYER::PLAYER_ID());
	if (iVar0 != -1)
	{
		if (Global_1131196[iVar0 /*27*/].f_18.f_1 != 0 && func_240(Global_1131196[iVar0 /*27*/].f_18, 1))
		{
			return true;
		}
	}
	return false;
}

void func_774(var uParam0, int iParam1)
{
	func_981(uParam0, iParam1);
}

int func_775(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
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

void func_776(int iParam0)
{
	Global_1102219.f_26.f_12 = iParam0;
}

bool func_777(int iParam0)
{
	return (Global_1102219.f_4[Global_1106305[iParam0 /*2*/]] && Global_1106305[iParam0 /*2*/].f_1) == Global_1106305[iParam0 /*2*/].f_1;
}

int func_778()
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

void func_779(int iParam0)
{
	if (func_982(iParam0))
	{
		return;
	}
	Global_1102219.f_26.f_9 = (Global_1102219.f_26.f_9 || iParam0);
}

struct<2> func_780(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_781(int iParam0)
{
	if (STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		func_493(iParam0);
	}
}

void func_782(int iParam0)
{
	if (GRAPHICS::_0xDE9BAD3292AA6D5E(iParam0))
	{
		GRAPHICS::_0xDD0BC0EDCB2162F6(iParam0);
	}
}

char* func_783(int iParam0)
{
	if (iParam0 == 2)
	{
		return "dewclm";
	}
	if (iParam0 == 4)
	{
		return "gua";
	}
	return func_486(&(Global_1887339[func_529(iParam0) /*36*/].f_23));
}

char* func_784(int iParam0)
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

void func_785(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	char cVar0[64];
	struct<8> Var8;

	MemCopy(&cVar0, {Global_1887339[iParam0 /*36*/].f_23}, 8);
	StringConCat(&cVar0, "_", 64);
	StringConCat(&cVar0, func_983(iParam1), 64);
	StringConCat(&cVar0, "_", 64);
	StringConCat(&cVar0, func_984(iParam2), 64);
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

int func_786(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_787(var uParam0, var uParam1, var uParam2)
{
	float fVar0;

	*uParam0 = ((171 * *uParam0) % 30269);
	*uParam1 = ((172 * *uParam1) % 30307);
	*uParam2 = ((170 * *uParam2) % 30323);
	fVar0 = (((BUILTIN::TO_FLOAT(*uParam0) / 30269f) + (BUILTIN::TO_FLOAT(*uParam1) / 30307f)) + (BUILTIN::TO_FLOAT(*uParam2) / 30323f));
	*uParam0 = func_786(0 == *uParam0, 171, *uParam0);
	*uParam1 = func_786(0 == *uParam1, 172, *uParam1);
	*uParam2 = func_786(0 == *uParam2, 170, *uParam2);
	return BUILTIN::ROUND((1000f * fVar0));
}

float func_788(int iParam0, bool bParam1)
{
	int iVar0;

	if (!Global_1139381.f_5560)
	{
		return 0f;
	}
	if (iParam0 == Global_1296859.f_154[Global_1296859])
	{
		return Global_17411.f_2621;
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
	if ((GANG::_0x149A2751AB66AC02(GANG::_0x901E0DC25080C8B9(iParam0)) > 1 && bParam1) && Global_1100469[iVar0 /*53*/].f_18 >= Global_1100469[iVar0 /*53*/].f_45)
	{
		return Global_1100469[iVar0 /*53*/].f_18;
	}
	return Global_1100469[iVar0 /*53*/].f_45;
}

bool func_789(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_790(int iParam0)
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
		func_985(iParam0);
		return;
	}
	if (Global_1071686.f_21416.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_986(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 1;
}

void func_791(var uParam0)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0))
	{
		return;
	}
	DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(Global_1940311.f_242.f_5, uParam0);
	func_987(uParam0);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0);
	func_988((Global_1940311.f_242.f_1186 - 1));
}

bool func_792(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951255[iParam0 /*23*/].f_1 && iParam1) != 0;
}

void func_793(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_989(iParam0, 1);
	func_990(iParam0, 1);
	func_991(iParam0, 128);
}

bool func_794(int iParam0)
{
	return (Global_1297470.f_1 && iParam0) != 0;
}

bool func_795()
{
	return Global_1048577;
}

bool func_796(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;

	iVar0 = Global_1296859.f_21;
	iVar1 = func_628(iParam0);
	Var3 = { func_629(iParam0) };
	STATS::STAT_ID_GET_INT(&Var3, &iVar2);
	if (iVar2 == 0 || (iVar2 + iVar1) > iVar0)
	{
		return true;
	}
	return false;
}

void func_797(int iParam0)
{
	Global_1297470.f_1 = (Global_1297470.f_1 - (Global_1297470.f_1 && iParam0));
}

int func_798(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	return DATAFILE::_DATAFILE_GET_NUM_NODES(uParam0);
}

var func_799(int iParam0, int iParam1)
{
	var uVar0;

	if (!func_640(&uVar0))
	{
		return 0;
	}
	if (!func_641(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 16, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 41, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 42, iParam1, 0, 1))
	{
		return 0;
	}
	return func_992(&uVar0);
}

int func_800(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_786(bParam1, 1, 0);
	iVar1 = func_993(iParam0);
	return (BUILTIN::FLOOR(func_994(2f, BUILTIN::TO_FLOAT((iVar1 - 1)))) + iVar0) + 1;
}

var func_801(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = (func_800(iParam0, 1) - 1);
	iVar3 = func_995(iParam0);
	iVar1 = func_996(iParam0, iParam1);
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

int func_802(var uParam0)
{
	return func_997(uParam0, 72, 1);
}

struct<4> func_803(int iParam0)
{
	struct<5> Var0;
	struct<4> Var5;
	struct<4> Var9;

	if (!func_640(&Var0))
	{
		return Var9;
	}
	if (!func_641(&Var0, 13, 0, 0, 1))
	{
		return Var9;
	}
	if (!func_641(&Var0, 14, 0, 0, 1))
	{
		return Var9;
	}
	if (!func_641(&Var0, 38, iParam0, 0, 1))
	{
		return Var9;
	}
	Var5.f_3 = iParam0;
	Var5 = func_998(&Var0);
	func_999(Var0, &Var5);
	return Var5;
}

bool func_804(var uParam0, int iParam1)
{
	struct<4> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_2 = -1;
	Var0.f_3.f_3 = -1;
	Var0.f_3.f_4 = -1;
	Var0.f_3 = { func_635(iParam1) };
	if (uParam0->f_1 & 2 != 0)
	{
		if (func_320() != 0)
		{
			return false;
		}
	}
	if (uParam0->f_1 & 1 != 0)
	{
		if (NETWORK::_0xFBE782B3165AC8EC(*uParam0))
		{
			return false;
		}
	}
	if (uParam0->f_1 & 4 != 0)
	{
		if (Var0.f_3 == -1 || Var0.f_3.f_1 == -1)
		{
			return false;
		}
		if (!func_338(8))
		{
			return false;
		}
	}
	if (uParam0->f_1 & 8 != 0)
	{
		if (Var0.f_3 == -1 || Var0.f_3.f_1 == -1)
		{
			return false;
		}
		if (!func_607(Var0.f_3, Var0.f_3.f_1, Var0.f_3.f_2, 0))
		{
			return false;
		}
	}
	return true;
}

int func_805()
{
	int iVar0;
	var uVar1;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_603(iVar0, &uVar1);
		if (!func_604(&uVar1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_806(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<2> Var0;
	struct<2> Var12;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_1000(iParam0, uParam1, &Var12, &Var0, iParam2, iParam3, iParam4, bParam5);
}

void func_807(int iParam0, var uParam1, int iParam2, var uParam3)
{
	func_1001(iParam0, uParam1);
	func_1002(iParam0, iParam2);
	func_1003(iParam0, uParam3);
}

struct<4> func_808(struct<5> Param0)
{
	struct<4> Var0;

	Var0 = func_1004(&Param0);
	Var0.f_1 = func_1005(&Param0);
	switch (Var0)
	{
		case joaat("SERVER"):
			Var0.f_2 = func_1006(&Param0);
			break;
		case joaat("UNLOCK"):
			Var0.f_2 = func_1007(&Param0);
			break;
		case joaat("AWARD"):
			Var0.f_2 = func_1007(&Param0);
			break;
		default:
			break;
	}
	func_1008(Param0, &Var0);
	return Var0;
}

bool func_809(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	struct<2> Var2;

	if (!func_1009(iParam1, uParam0->f_3))
	{
		return true;
	}
	switch (*uParam0)
	{
		case joaat("UNLOCK"):
			iVar0 = uParam0->f_1;
			return func_1010(iVar0, uParam0->f_2);
		case joaat("SERVER"):
			if (!BOUNTY::_0x85E4D7B225A30ED1(uParam0->f_1, &Var2))
			{
				return false;
			}
			return Var2.f_1 >= uParam0->f_2;
		case joaat("AWARD"):
			uVar1 = uParam0->f_1;
			return func_1011(uVar1, uParam0->f_2);
		default:
			break;
	}
	return false;
}

bool func_810(var uParam0, int iParam1, int iParam2)
{
	if (!func_640(uParam0))
	{
		return false;
	}
	if (!func_641(uParam0, 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_641(uParam0, 17, 0, 0, 1))
	{
		return false;
	}
	if (!func_641(uParam0, 19, iParam1, 0, 1))
	{
		return false;
	}
	if (!func_641(uParam0, 13, 0, 0, 0))
	{
		return false;
	}
	if (!func_641(uParam0, 45, iParam2, 0, 1))
	{
		return false;
	}
	return true;
}

var func_811(var uParam0)
{
	return func_1012(uParam0, 77, 1);
}

var func_812(var uParam0)
{
	return func_997(uParam0, 70, 1);
}

var func_813(var uParam0)
{
	return func_997(uParam0, 71, 1);
}

var func_814(var uParam0, int iParam1)
{
	return func_997(uParam0, 87, iParam1);
}

var func_815(var uParam0)
{
	return func_997(uParam0, 68, 1);
}

int func_816(int iParam0, int iParam1)
{
	return Global_1297470.f_76[iParam0 /*17*/].f_1[iParam1];
}

void func_817(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_800(iParam0, 0);
	iVar1 = func_995(iParam0);
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

var func_818(var uParam0)
{
	return func_997(uParam0, 60, 1);
}

int func_819(int iParam0, var uParam1, int iParam2)
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

struct<2> func_820()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

void func_821(int iParam0, var uParam1)
{
	Global_1297470.f_55.f_4[iParam0 /*8*/].f_3.f_2 = uParam1;
}

void func_822(int iParam0, var uParam1)
{
	Global_1297470.f_55.f_4[iParam0 /*8*/].f_3.f_3 = uParam1;
}

void func_823(int iParam0, var uParam1)
{
	Global_1297470.f_55.f_4[iParam0 /*8*/].f_3.f_4 = uParam1;
}

void func_824(int iParam0, var uParam1)
{
	Global_1297470.f_55.f_4[iParam0 /*8*/].f_3 = uParam1;
}

void func_825(int iParam0, var uParam1)
{
	Global_1297470.f_55.f_4[iParam0 /*8*/].f_3.f_1 = uParam1;
}

void func_826(int iParam0, struct<2> Param1)
{
	Global_1297470.f_55.f_4[iParam0 /*8*/] = { Param1 };
}

void func_827(int iParam0, var uParam1)
{
	Global_1297470.f_55.f_4[iParam0 /*8*/].f_2 = uParam1;
}

var func_828(int iParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (!func_640(&uVar0))
	{
		return 0;
	}
	if (!func_641(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 19, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 20, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 23, iParam1, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 24, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 25, iParam2, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 46, 0, 0, 0))
	{
		return 0;
	}
	return func_798(&uVar0, 10);
}

struct<6> func_829(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8)
{
	var uVar0;
	struct<6> Var5;
	int iVar11;

	if (!func_640(&uVar0))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 13, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 17, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 19, Param0.f_3, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 20, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 23, Param0.f_3.f_1, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 24, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 25, Param0.f_3.f_2, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 46, 0, 0, 0))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 47, iParam8, 0, 1))
	{
		return Var5;
	}
	iVar11 = func_1013(&uVar0);
	return func_1014(iVar11);
}

void func_830(var uParam0, var uParam1)
{
	if (!func_1015(uParam0, uParam1))
	{
		return;
	}
	switch (uParam0->f_3)
	{
		case joaat("INT"):
			if (STATS::CHAL_IS_GOAL_ACTIVE(uParam0->f_1, uParam0->f_2))
			{
				STATS::CHAL_ADD_GOAL_PROGRESS_INT(uParam0->f_1, uParam0->f_2, uParam0->f_4);
			}
			break;
		default:
			break;
	}
}

int func_831(int iParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (!func_640(&uVar0))
	{
		return 0;
	}
	if (!func_641(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 19, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 20, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 23, iParam1, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 24, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 25, iParam2, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 57, 0, 0, 0))
	{
		return 0;
	}
	return func_798(&uVar0, 12);
}

struct<5> func_832(var uParam0, int iParam1)
{
	struct<5> Var0;
	struct<5> Var5;
	var uVar10;
	var uVar11;
	int iVar12;
	var uVar13;
	var uVar14;

	if (!func_640(&Var0))
	{
		return Var5;
	}
	if (!func_641(&Var0, 13, 0, 0, 1))
	{
		return Var5;
	}
	uVar14 = Var0.f_1;
	if (!func_641(&Var0, 17, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&Var0, 19, uParam0->f_3, 0, 1))
	{
		return Var5;
	}
	uVar10 = func_814(&Var0, 1);
	if (!func_641(&Var0, 20, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&Var0, 23, uParam0->f_3.f_1, 0, 1))
	{
		return Var5;
	}
	uVar13 = func_815(&Var0);
	if (!func_641(&Var0, 24, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&Var0, 25, uParam0->f_3.f_2, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&Var0, 57, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&Var0, 58, iParam1, 0, 1))
	{
		return Var5;
	}
	iVar12 = func_1016(&Var0);
	Var0.f_1 = uVar14;
	if (!func_641(&Var0, 56, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&Var0, 59, iVar12, 0, 1))
	{
		return Var5;
	}
	uVar11 = func_1017(&Var0);
	Var5 = iVar12;
	Var5.f_2 = uVar13;
	Var5.f_3 = uVar10;
	Var5.f_1 = uVar11;
	func_1018(Var0, &Var5);
	return Var5;
}

void func_833(var uParam0, var uParam1)
{
	int iVar0;
	struct<4> Var1;

	if (!func_1019(uParam0, uParam1))
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
	Var1.f_3 = { func_635(uParam1) };
	switch (uParam0->f_1)
	{
		case joaat("MARK_AS_FINISHED"):
			MISSIONDATA::MISSIONDATA_WAS_COMPLETED(uParam0->f_2);
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
		case joaat("UNLOCK_REPLAY"):
			MISSIONDATA::_0x957A830C9B4B99EA(uParam0->f_3, 0);
			break;
		default:
			break;
	}
}

int func_834(int iParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (!func_640(&uVar0))
	{
		return 0;
	}
	if (!func_641(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 19, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 20, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 23, iParam1, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 24, 0, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 25, iParam2, 0, 1))
	{
		return 0;
	}
	if (!func_641(&uVar0, 36, 0, 0, 1))
	{
		return 0;
	}
	return func_798(&uVar0, 8);
}

struct<4> func_835(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8)
{
	var uVar0;
	struct<4> Var5;
	int iVar9;

	if (!func_640(&uVar0))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 13, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 17, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 19, Param0.f_3, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 20, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 23, Param0.f_3.f_1, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 24, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 25, Param0.f_3.f_2, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 36, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_641(&uVar0, 37, iParam8, 0, 1))
	{
		return Var5;
	}
	iVar9 = func_802(&uVar0);
	return func_803(iVar9);
}

void func_836(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = func_1020(iVar0);
	if (!func_489(iVar1))
	{
		return;
	}
	if (iVar1 != iParam0)
	{
		func_1021(iParam0, 7);
		func_1021(iParam0, 8);
	}
	Var2 = { func_869(iVar1) };
	switch (func_1022(iVar1))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			if (func_18(Var2.f_5))
			{
				if (!func_1023(iVar0, iVar1, 8) && func_908(iVar1, 1))
				{
					func_1024(Var2.f_5);
					func_1025(iVar1, 8);
				}
				if (func_1026(Var2.f_5))
				{
					func_1025(iVar1, 2);
					func_1021(iVar1, 5);
				}
				else if (func_943(Var2.f_5))
				{
					func_1025(iVar1, 1);
					func_1021(iVar1, 6);
				}
				else
				{
					func_1027(Var2);
					func_1025(iVar1, 4);
					func_1021(iVar1, 3);
				}
			}
			else
			{
				func_1021(iVar1, 7);
			}
			break;
		case 8:
			if (Global_1109804.f_19)
			{
				if (func_908(iVar1, 4))
				{
				}
				else
				{
					func_1028();
				}
				func_1029(iVar1);
				func_1030(1);
				func_1030(0);
			}
			else
			{
				func_1028();
				func_1029(iVar1);
				func_1030(1);
				func_1030(0);
			}
			break;
	}
}

void func_837(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = func_1020(iVar0);
	if (!func_489(iVar1))
	{
		return;
	}
	Var2 = { func_869(iParam0) };
	switch (func_1022(iVar1))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			if (func_18(Var2.f_5))
			{
				if (!func_1023(iVar0, iParam0, 8) && func_908(iParam0, 1))
				{
					func_1024(Var2.f_5);
					func_1025(iParam0, 8);
				}
				if (func_1026(Var2.f_5))
				{
					func_1025(iParam0, 2);
					func_1021(iParam0, 5);
				}
				else if (func_943(Var2.f_5))
				{
					func_1025(iParam0, 1);
					func_1021(iParam0, 6);
				}
				else
				{
					func_1027(Var2);
					func_1025(iParam0, 4);
					func_1021(iParam0, 3);
				}
			}
			else
			{
				func_1021(iParam0, 7);
			}
			break;
		case 8:
			if (Global_1109804.f_19)
			{
				if (func_908(iVar1, 4))
				{
				}
				else
				{
					func_1028();
				}
				func_1029(iVar1);
				func_1030(1);
				func_1030(0);
			}
			else
			{
				func_1028();
				func_1029(iVar1);
				func_1030(1);
				func_1030(0);
			}
			break;
	}
}

bool func_838(int iParam0, int iParam1)
{
	return (Global_1198046.f_231.f_1066[iParam0 /*17*/].f_6 && iParam1) != 0;
}

bool func_839()
{
	if (!Global_1071686.f_3)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION() || func_180())
	{
		return false;
	}
	if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1210161, false))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("net_ambient_content_evaluator", -1, true, 0))
	{
		return false;
	}
	return PLAYER::PLAYER_ID() == NETWORK::_0xB4A25351D79B444C(Global_1210161);
}

void func_840(int iParam0)
{
	struct<2> Var0;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	Var0 = -1;
	Var0.f_1 = -1;
	iVar4 = PLAYER::PLAYER_ID();
	iVar5 = func_1031(iParam0);
	if (!func_1032(iParam0, &Var0))
	{
		if (iVar5 < 5)
		{
			func_1033(iParam0, 5);
		}
	}
	switch (iVar5)
	{
		case 1:
			break;
		case 2:
			if (!func_838(iParam0, 2))
			{
				return;
			}
			if (!func_1034(iParam0))
			{
				func_1035(iParam0, 0);
				return;
			}
			bVar3 = func_943(Var0);
			bVar2 = func_1026(Var0);
			if (!bVar3 && !bVar2)
			{
				if (!func_1036(iParam0, iVar4, 2) && !func_1036(iParam0, iVar4, 3))
				{
					if (func_1037(iParam0, 3) || func_1038(iParam0) == Global_1296859.f_15)
					{
						func_1039(iParam0);
					}
				}
			}
			else if (!func_1037(iParam0, 3) && func_1038(iParam0) != Global_1296859.f_15)
			{
				func_1035(iParam0, 0);
			}
			break;
		case 4:
			if (!func_838(iParam0, 2))
			{
				if (func_838(iParam0, 2048))
				{
					func_1040(iParam0);
				}
				return;
			}
			if (func_943(Var0))
			{
				if (func_1037(iParam0, 4))
				{
					func_1041(iParam0, 0, 1, 1);
					func_1042(iParam0, 0, 0);
				}
				else
				{
					func_1041(iParam0, 0, 1, 1);
					func_1043(iParam0, 0);
				}
			}
			else if (func_1026(Var0))
			{
				func_1043(iParam0, 0);
			}
			else
			{
				func_1044(iParam0, 6);
			}
			if (func_1045(iParam0))
			{
				func_1040(iParam0);
			}
			break;
		case 5:
		case 6:
			if ((!func_18(Var0) || func_1036(iParam0, iVar4, 0)) || func_1046(iParam0, iVar4))
			{
				func_1047(iParam0);
			}
			break;
	}
}

void func_841(int iParam0, int iParam1, bool bParam2)
{
	func_1048(iParam0, iParam1);
	if (!bParam2)
	{
		func_1049(iParam0, iParam1);
	}
	else
	{
		func_1050(iParam0, iParam1);
		func_1051(iParam0, iParam1);
	}
}

void func_842(int iParam0)
{
	int iVar0;

	iVar0 = func_1031(iParam0);
	if (func_1052(iParam0, iVar0))
	{
		return;
	}
	switch (iVar0)
	{
		case -1:
			if (!func_18(func_1053(iParam0)))
			{
				return;
			}
			if (func_838(iParam0, 32))
			{
				Global_1198046.f_231.f_1066[iParam0 /*17*/].f_8[0 /*4*/].f_1 = iParam0;
			}
			if (Global_1198046.f_231.f_1066[iParam0 /*17*/].f_5 != 255)
			{
				func_1054(iParam0, Global_1198046.f_231.f_1066[iParam0 /*17*/].f_5);
				func_1033(iParam0, 2);
			}
			else
			{
				func_1033(iParam0, 1);
			}
			break;
		case 0:
			break;
		case 1:
			if (func_1055(iParam0) != 255)
			{
				func_1033(iParam0, 2);
				return;
			}
			if (func_1056(iParam0, 3))
			{
				func_1033(iParam0, 2);
				return;
			}
			if (func_1057(iParam0))
			{
				func_1033(iParam0, 5);
				return;
			}
			break;
		case 2:
			if (func_1055(iParam0) == 255 && !func_1056(iParam0, 3))
			{
				func_1033(iParam0, 4);
				return;
			}
			if (func_1058(iParam0))
			{
				func_1033(iParam0, 5);
				return;
			}
			if (func_1056(iParam0, 4) || func_1056(iParam0, 5))
			{
				func_1033(iParam0, 3);
				return;
			}
			func_1059(iParam0);
			break;
		case 3:
			if (func_1060(iParam0))
			{
				return;
			}
			func_1033(iParam0, 4);
			break;
		case 4:
			if (func_1061(iParam0, 7))
			{
				func_1033(iParam0, 5);
			}
			else
			{
				return;
			}
			func_1033(iParam0, 5);
			break;
		case 5:
			if (func_1061(iParam0, 7))
			{
				if (func_1062(iParam0) > 1)
				{
					func_1063(iParam0, 1);
				}
				func_1033(iParam0, 6);
			}
			else
			{
				return;
			}
			break;
		case 6:
			break;
	}
}

int func_843()
{
	if (Global_1572887.f_13 == -1)
	{
		return 0;
	}
	return Global_1051252.f_38;
}

struct<40> func_844(var uParam0, struct<5> Param1, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40)
{
	struct<40> Var0;
	int iVar40;
	int iVar41;

	if (Param1.f_1 != -1)
	{
		return uParam0->f_2[Param1.f_1 /*40*/];
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
		if (uParam0->f_2[iVar41 /*40*/].f_2 != Param1.f_2)
		{
		}
		else if (uParam0->f_2[iVar41 /*40*/].f_3 != Param1.f_3)
		{
		}
		else if (uParam0->f_2[iVar41 /*40*/].f_4 != Param1.f_4)
		{
		}
		else
		{
			return uParam0->f_2[iVar41 /*40*/];
		}
		iVar40++;
	}
	return Var0;
}

void func_845(struct<7> Param0, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41)
{
	switch (func_1064(uParam41))
	{
		case -1:
			func_1065(uParam40, uParam41->f_4);
			break;
		case 0:
			if (!func_1066(&Param0, uParam41))
			{
				if ((NETWORK::GET_NETWORK_TIME_ACCURATE() - uParam41->f_7) > 120000)
				{
					uParam41->f_6 = 2;
					func_1067(uParam41, 3);
				}
				return;
			}
			if (func_1068(&Param0) < 0)
			{
				return;
			}
			uParam41->f_1 = Param0.f_1;
			func_1067(uParam41, 1);
			break;
		case 1:
			if (!func_1066(&Param0, uParam41))
			{
				uParam41->f_6 = 2;
				func_1067(uParam41, 3);
				return;
			}
			if (func_1068(&Param0) < 1)
			{
				return;
			}
			uParam41->f_6 = Param0.f_6;
			func_1067(uParam41, 2);
			break;
		case 2:
			if (!func_1066(&Param0, uParam41))
			{
				if (uParam41->f_6 == -1)
				{
					uParam41->f_6 = 2;
				}
				func_1067(uParam41, 3);
				return;
			}
			if (func_1068(&Param0) < 3)
			{
				return;
			}
			func_1067(uParam41, 3);
			break;
		case 3:
			func_1067(uParam41, -1);
			break;
	}
}

int func_846(int iParam0)
{
	return Global_1107216.f_33[iParam0 /*16*/];
}

int func_847(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_1069(uParam0))
	{
		return -1;
	}
	iVar0 = func_1070(uParam0, uParam0->f_9);
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
			iVar0 = func_1070(uParam0, iVar1);
			if (iVar0 != -1)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return -1;
}

int func_848(int iParam0)
{
	return Global_1107216.f_33[iParam0 /*16*/].f_1;
}

bool func_849(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 71);
}

void func_850(int iParam0, int iParam1)
{
	Global_1107216.f_33[iParam0 /*16*/].f_1 = iParam1;
}

void func_851(int iParam0)
{
	Global_1107216.f_33[iParam0 /*16*/] = 0;
}

int func_852(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = GANG::_0x901E0DC25080C8B9(iParam0);
	if (func_489(iParam1))
	{
		if (iVar0 == func_846(iParam1))
		{
			return iParam1;
		}
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (iVar0 == func_846(iVar1))
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

int func_853(int iParam0)
{
	return Global_1107216.f_33[iParam0 /*16*/].f_2;
}

void func_854(int iParam0, int iParam1)
{
	Global_1107216.f_33[iParam0 /*16*/] = iParam1;
}

int func_855(int iParam0, var uParam1)
{
	if (!func_1071(iParam0))
	{
		return 0;
	}
	*uParam1 = 0;
	return 1;
}

int func_856(int iParam0, var uParam1)
{
	if (!func_1071(iParam0))
	{
		*uParam1 = 9;
		return 1;
	}
	if (!func_18(func_490(iParam0)))
	{
		return 0;
	}
	if (func_908(iParam0, 4))
	{
		func_1072(func_490(iParam0));
		*uParam1 = 6;
		return 1;
	}
	func_1073(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
	*uParam1 = 1;
	return 1;
}

int func_857(int iParam0, var uParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar12;
	int iVar13;

	if (!func_1071(iParam0))
	{
		*uParam1 = 5;
		return 1;
	}
	Var0 = { func_490(iParam0) };
	if (!func_18(Var0))
	{
		*uParam1 = 6;
		return 1;
	}
	if (func_908(iParam0, 4))
	{
		func_1072(func_490(iParam0));
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
	iVar12 = func_847(&Var2);
	if (func_849(iVar12))
	{
		func_850(iParam0, iVar12);
		func_1073(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
		*uParam1 = 2;
		return 1;
	}
	iVar13 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (NETWORK::GET_TIME_DIFFERENCE(func_1074(iParam0), iVar13) > func_1075())
	{
		if (func_1076(Var0, iParam0))
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

int func_858(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (!func_1071(iParam0))
	{
		*uParam1 = 5;
		return 1;
	}
	iVar0 = func_1077(iParam0);
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
	if (func_908(iParam0, 4))
	{
		func_1072(func_490(iParam0));
		*uParam1 = 6;
		return 1;
	}
	iVar1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (NETWORK::GET_TIME_DIFFERENCE(func_1074(iParam0), iVar1) > func_1075())
	{
		if (func_1076(func_490(iParam0), iParam0))
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

int func_859(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_1077(iParam0);
	if (iVar0 & 2 != 0)
	{
		*uParam1 = 4;
		return 1;
	}
	if (func_908(iParam0, 4))
	{
		func_1072(func_490(iParam0));
		*uParam1 = 6;
		return 1;
	}
	if (iVar0 & 1 != 0)
	{
		return 0;
	}
	if (func_1076(func_490(iParam0), iParam0))
	{
		*uParam1 = 6;
	}
	else
	{
		*uParam1 = 7;
	}
	return 1;
}

int func_860(int iParam0, var uParam1)
{
	int iVar0;

	if (!func_1071(iParam0))
	{
		*uParam1 = 5;
		return 1;
	}
	iVar0 = func_1077(iParam0);
	if (iVar0 & 2 != 0)
	{
		return 0;
	}
	if (iVar0 & 1 != 0)
	{
		*uParam1 = 3;
		return 1;
	}
	if (func_908(iParam0, 4))
	{
		func_1072(func_490(iParam0));
		*uParam1 = 6;
		return 1;
	}
	if (Global_1109804.f_18)
	{
		if (func_1076(func_490(iParam0), iParam0))
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
		func_1076(func_490(iParam0), iParam0);
		*uParam1 = 6;
	}
	return 1;
}

int func_861(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_1077(iParam0);
	if (iVar0 & 2 != 0)
	{
		return 0;
	}
	if (iVar0 & 1 != 0)
	{
		return 0;
	}
	if (func_1076(func_490(iParam0), iParam0))
	{
		*uParam1 = 6;
	}
	else
	{
		*uParam1 = 7;
	}
	return 1;
}

int func_862(int iParam0, var uParam1)
{
	struct<2> Var0;
	int iVar10;
	int iVar11;

	if (!func_18(func_490(iParam0)))
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
	Var0 = { func_490(iParam0) };
	iVar10 = func_847(&Var0);
	if (!func_849(iVar10))
	{
		func_1078(iParam0);
		*uParam1 = 7;
		return 1;
	}
	iVar11 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (NETWORK::GET_TIME_DIFFERENCE(func_1074(iParam0), iVar11) > func_1075())
	{
		func_1072(Var0);
		func_1073(iParam0, iVar11);
	}
	return 0;
}

int func_863(int iParam0, var uParam1)
{
	if (func_1071(iParam0))
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

int func_864(int iParam0, var uParam1)
{
	int iVar0;
	bool bVar1;

	bVar1 = true;
	if (Global_1109804.f_19)
	{
		iVar0 = func_1079();
		if (iVar0 <= 1)
		{
			if (func_908(iParam0, 4))
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
		if (NETWORK::_NETWORK_SESSION_GET_FLAGS() & 9 != 0 && func_908(iParam0, 1))
		{
			if (NETWORK::GET_TIME_DIFFERENCE(func_1080(), NETWORK::GET_NETWORK_TIME_ACCURATE()) > 5000)
			{
				func_1081();
				func_444();
			}
			return 0;
		}
	}
	func_1082(iParam0);
	*uParam1 = -1;
	return 1;
}

int func_865(int iParam0, var uParam1)
{
	switch (func_866(iParam0))
	{
		case 0:
			return func_1083(iParam0, uParam1);
		case 1:
			return func_1084(iParam0, uParam1);
		default:
			break;
	}
	return 0;
}

int func_866(int iParam0)
{
	return Global_1107216.f_33[iParam0 /*16*/].f_3.f_2;
}

void func_867(int iParam0, var uParam1, int iParam2)
{
	Global_1107216.f_33[iParam0 /*16*/].f_2 = uParam1;
}

void func_868(int iParam0, int iParam1)
{
	Global_1109804[iParam0] = iParam1;
}

struct<13> func_869(int iParam0)
{
	return Global_1107216.f_33[iParam0 /*16*/].f_3;
}

bool func_870(struct<2> Param0, int iParam2)
{
	return (!func_907(func_1085(), Param0) || func_1086() != iParam2);
}

void func_871(var uParam0)
{
	Global_1109804.f_11 = { *uParam0 };
}

bool func_872(int iParam0, int iParam1)
{
	return (Global_1128574[iParam0 /*56*/].f_34 && iParam1) != 0;
}

struct<2> func_873()
{
	return Global_1130592.f_5.f_3;
}

struct<2> func_874()
{
	return Global_1109804.f_21.f_12.f_23;
}

int func_875()
{
	return Global_1130592.f_5.f_7;
}

int func_876()
{
	return Global_1130592.f_24;
}

int func_877()
{
	return Global_1109804.f_21.f_12.f_20;
}

int func_878()
{
	return Global_1109804.f_21.f_12.f_2;
}

bool func_879(int iParam0)
{
	return func_519(1, iParam0);
}

void func_880()
{
	func_1087(-1);
	func_1088(-1);
	func_1089(-1);
	func_1090();
	func_1091();
}

int func_881()
{
	return Global_1109804.f_21.f_12.f_8;
}

void func_882(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	Global_1128574[iVar0 /*56*/].f_34 = (Global_1128574[iVar0 /*56*/].f_34 - (Global_1128574[iVar0 /*56*/].f_34 && iParam0));
}

void func_883(int iParam0)
{
	Global_1109804.f_21.f_12.f_8 = iParam0;
}

void func_884(struct<2> Param0)
{
	Global_1109804.f_21.f_12.f_9 = { Param0 };
}

int func_885()
{
	return Global_1109804.f_21.f_12;
}

void func_886(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	Global_1128574[iVar0 /*56*/].f_34 = (Global_1128574[iVar0 /*56*/].f_34 || iParam0);
}

bool func_887(int iParam0)
{
	return func_468(&(Global_1109804.f_247.f_6), iParam0, 2);
}

void func_888(int iParam0)
{
	if (func_506(&(Global_1130367[PLAYER::PLAYER_ID() /*7*/]), iParam0, 2))
	{
	}
}

void func_889(int iParam0)
{
	if (func_505(&(Global_1130367[PLAYER::PLAYER_ID() /*7*/]), iParam0, 2))
	{
	}
}

bool func_890(int iParam0)
{
	return func_468(&(Global_1109804.f_247.f_9), iParam0, 3);
}

void func_891(int iParam0)
{
	if (func_506(&(Global_1130367[PLAYER::PLAYER_ID() /*7*/].f_3), iParam0, 3))
	{
	}
}

void func_892(int iParam0)
{
	if (func_505(&(Global_1130367[PLAYER::PLAYER_ID() /*7*/].f_3), iParam0, 3))
	{
	}
}

bool func_893(int iParam0)
{
	int iVar0;

	iVar0 = func_1092(iParam0);
	if (iVar0 < 0)
	{
		return true;
	}
	return func_1093(&(Global_1139381.f_11.f_3222.f_320[iVar0 /*4*/]), 1);
}

void func_894(int iParam0)
{
	if (Global_1128574[PLAYER::PLAYER_ID() /*56*/].f_47 == iParam0)
	{
		return;
	}
	Global_1128574[PLAYER::PLAYER_ID() /*56*/].f_47 = iParam0;
}

bool func_895(int iParam0, int iParam1)
{
	return (Global_1128574[iParam0 /*56*/].f_54.f_1 && iParam1) != 0;
}

bool func_896(int iParam0)
{
	return (Global_1130592.f_24.f_3 && iParam0) != 0;
}

int func_897()
{
	return Global_1130592.f_24.f_6;
}

void func_898(int iParam0)
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
	func_1094(&Var0, uVar31);
}

void func_899(int iParam0)
{
	Global_1130592.f_24.f_6 = iParam0;
}

void func_900(int iParam0)
{
	Global_1130592.f_24.f_3 = (Global_1130592.f_24.f_3 || iParam0);
}

bool func_901()
{
	return Global_1109804.f_21.f_109.f_6;
}

int func_902()
{
	return Global_1109804.f_21.f_109.f_5;
}

void func_903()
{
	struct<2> Var0;

	func_1095(-1);
	func_1096(-1);
	func_1097(-1);
	func_1098(func_820());
	func_1099(0);
	func_1100(0);
	func_1101(0);
	func_1102(0);
	Var0.f_1 = -1;
	func_1103(&Var0);
}

int func_904(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (iParam0 == func_846(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_905(int iParam0)
{
	struct<2> Var0;

	if (!func_1104(func_911()))
	{
		if (func_1104(func_1105(iParam0)))
		{
			func_1095(func_1105(iParam0));
		}
		else
		{
			return false;
		}
	}
	if (!func_1106(func_910()))
	{
		if (func_1106(func_1107(iParam0)))
		{
			func_1096(func_1107(iParam0));
		}
		else
		{
			return false;
		}
	}
	if (!func_1108(func_913()))
	{
		if (func_1108(func_1109(iParam0)))
		{
			func_1097(func_1109(iParam0));
		}
		else
		{
			return false;
		}
	}
	if (!func_1110() && func_1112(func_1111(func_913())) == 7)
	{
		Var0.f_1 = -1;
		func_1113(iParam0, &Var0);
		if (Var0 == 0)
		{
		}
		else
		{
			func_1103(&Var0);
			func_1102(1);
		}
	}
	return true;
}

struct<2> func_906()
{
	return Global_1109804.f_21.f_109.f_3;
}

bool func_907(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_908(int iParam0, int iParam1)
{
	return (Global_1107216.f_33[iParam0 /*16*/].f_3.f_8 && iParam1) != 0;
}

void func_909(var uParam0)
{
	MISC::_COPY_MEMORY(uParam0, &(Global_1109804.f_21.f_109.f_9), 4);
}

int func_910()
{
	return Global_1109804.f_21.f_109;
}

int func_911()
{
	return Global_1109804.f_21.f_109.f_1;
}

var func_912()
{
	return Global_1109804.f_21.f_109.f_7;
}

int func_913()
{
	return Global_1109804.f_21.f_109.f_2;
}

void func_914(int iParam0, int iParam1, var uParam2, int iParam3, struct<2> Param4, int iParam6, var uParam7, var uParam8, var uParam9, int iParam10)
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
	uVar31 = func_150(0, 8);
	Var0.f_6 = iParam0;
	Var0.f_5 = iParam1;
	Var0.f_11 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	Var0.f_4 = 3;
	Var0.f_9 = iParam3;
	Var0.f_14 = uParam2;
	Var0.f_7 = { Param4 };
	Var0.f_13 = iParam10;
	MISC::_COPY_MEMORY(&(Var0.f_27), &iParam6, 4);
	vVar32 = { func_1114(iParam0) };
	uVar35 = func_1115(iParam0);
	func_1116(&(Var0.f_19), Var0.f_11, vVar32, uVar35);
	func_1094(&Var0, uVar31);
}

void func_915(int iParam0, var uParam1)
{
	MISC::_COPY_MEMORY(uParam1, &(Global_1128574[iParam0 /*56*/].f_38), 5);
}

void func_916(var uParam0)
{
	func_1117(uParam0, 1);
}

bool func_917(int iParam0)
{
	return (Global_1109804.f_6371.f_2 && iParam0) != 0;
}

void func_918(var uParam0)
{
	func_1118(uParam0, 0);
}

void func_919(int iParam0)
{
	MISC::_COPY_MEMORY(&(Global_1128574[PLAYER::PLAYER_ID() /*56*/].f_38), iParam0, 5);
}

void func_920(int iParam0)
{
	Global_1109804.f_6371.f_2 = (Global_1109804.f_6371.f_2 - (Global_1109804.f_6371.f_2 && iParam0));
}

void func_921(int iParam0, var uParam1)
{
	MISC::_COPY_MEMORY(uParam1, &(Global_1128574[iParam0 /*56*/].f_43), 4);
}

void func_922(var uParam0)
{
	func_1119(uParam0, 1);
}

void func_923(var uParam0)
{
	func_1120(uParam0, 0);
}

void func_924(int iParam0)
{
	MISC::_COPY_MEMORY(&(Global_1128574[PLAYER::PLAYER_ID() /*56*/].f_43), iParam0, 4);
}

void func_925(int iParam0, var uParam1)
{
	MISC::_COPY_MEMORY(uParam1, &(Global_1128574[iParam0 /*56*/].f_49), 5);
}

void func_926(int iParam0)
{
	MISC::_COPY_MEMORY(&(Global_1109804.f_6371.f_22), iParam0, 5);
}

int func_927(int iParam0)
{
	return Global_1109804.f_146.f_84[iParam0 /*4*/];
}

int func_928(int iParam0)
{
	return Global_1109804.f_146.f_84[iParam0 /*4*/].f_2;
}

bool func_929(int iParam0, int iParam1)
{
	return func_468(&(Global_1128574[iParam0 /*56*/].f_49), iParam1, 3);
}

void func_930(int iParam0)
{
	if (func_505(&(Global_1128574[PLAYER::PLAYER_ID() /*56*/].f_49), iParam0, 3))
	{
	}
}

bool func_931()
{
	return Global_1194053.f_409.f_9;
}

void func_932(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_461(iParam0);
	if (iVar0 == -1)
	{
		Global_1071686.f_19648.f_19 = Global_1071686.f_19648[iParam0];
		return;
	}
	if (iVar0 == 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if (MISC::IS_BIT_SET(Global_39.f_110[iParam0], iVar1))
		{
			MISC::SET_BIT(&(Global_1071686.f_19648.f_19), iVar1);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1071686.f_19648.f_19), iVar1);
		}
		iVar1++;
	}
}

bool func_933(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_934(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_935()
{
	int iVar0;

	iVar0 = UIFEED::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && UIFEED::_0x59FA676177DBE4C9(iVar0) == 4);
}

bool func_936(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			if (iParam0 >= 9 && iParam0 <= 25)
			{
				return true;
			}
			break;
	}
	return false;
}

Vector3 func_937(int iParam0)
{
	return Global_1835011[iParam0 /*72*/].f_19;
}

Vector3 func_938(int iParam0)
{
	return Global_1835011[iParam0 /*72*/].f_19;
}

Vector3 func_939(int iParam0)
{
	return Global_1835011[iParam0 /*72*/].f_19;
}

void func_940(int iParam0, int iParam1)
{
	if (!func_678(iParam0))
	{
		return;
	}
	Global_1900838[iParam0 /*2*/].f_1 = (Global_1900838[iParam0 /*2*/].f_1 || iParam1);
}

void func_941(int iParam0)
{
	if (func_58() == -1)
	{
		return;
	}
	if (Global_1835011[iParam0 /*72*/].f_3 != 0 && UNLOCK::_UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*72*/].f_3))
	{
		UNLOCK::_UNLOCK_SET_NEW(Global_1835011[iParam0 /*72*/].f_3, false);
	}
	func_1121(iParam0);
}

void func_942(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_943(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_365(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

void func_944(struct<2> Param0, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;

	if (!func_18(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (!func_1026(Param0) && !func_943(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (func_1122(Param0) == 0)
	{
	}
	if ((iParam3 == 0 || iParam3 == 1) || iParam3 == 4)
	{
		if (func_365(Param0) == 3)
		{
			func_1123(1, -1706799532);
		}
		else if (func_365(Param0) == 4)
		{
			func_1123(0, -1706799532);
		}
	}
	if ((func_365(Param0) == 3 || func_365(Param0) == 1) || ((bParam5 && func_365(Param0) == 4) && STATS::_0x01F4D242765C6B24(func_1122(Param0))))
	{
		if (iParam3 != -1)
		{
			func_1124(Param0, iParam3, iParam4, 255, 0);
		}
		else
		{
			func_1124(Param0, 2, iParam4, 255, 0);
		}
	}
	func_946(Param0, 0);
	if (func_907(func_210(0), Param0))
	{
		func_1125(1);
		func_1126(0);
		func_1127(0);
		func_1128(1);
	}
	func_1129(Param0);
	Global_1051252.f_45.f_1 = 1;
	iVar0 = func_1130(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		MISC::_0x1096603B519C905F("");
	}
}

void func_945(struct<2> Param0)
{
	if (func_1122(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_1122(Param0)))
	{
		STATS::_0x99230691875FC218(func_1130(Param0), func_1122(Param0), Global_35);
	}
}

void func_946(struct<2> Param0, int iParam2)
{
	if (!func_18(Param0))
	{
		return;
	}
	if (iParam2 == 0 || iParam2 == -1)
	{
		func_1131(Param0);
	}
	else
	{
		func_1132(Param0, iParam2);
	}
	func_1133();
}

bool func_947()
{
	return Global_1297047.f_419 != 0;
}

bool func_948()
{
	if (UIFEED::_0xC17F69E1418CD11F(1) != 0)
	{
		return false;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return false;
	}
	return true;
}

bool func_949(int iParam0)
{
	return (Global_1297047.f_419 && iParam0) != 0;
}

bool func_950(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = func_1134(iParam0);
	iVar2 = func_1135(iParam0);
	iVar3 = func_689();
	switch (iVar2)
	{
		case 0:
			iVar0 = func_285(MISC::_CREATE_VAR_STRING(0, iVar1), 10000, 0, 0, 0, 1);
			break;
		case 1:
			if (!MAP::DOES_BLIP_EXIST(iVar3))
			{
				iVar3 = MAP::_0x3E593DF9C2962EC6(joaat("BLIP_STYLE_MP_MISSION_GIVER"));
				if (!MAP::DOES_BLIP_EXIST(iVar3))
				{
					return false;
				}
				MAP::SET_BLIP_SPRITE(iVar3, joaat("BLIP_PROC_BOUNTY_POSTER"), true);
				MAP::_BLIP_SET_MODIFIER(iVar3, -244815569);
				func_690(iVar3);
			}
			iVar0 = func_285(MISC::_CREATE_VAR_STRING(0, iVar1, iVar3), 10000, 0, 0, 0, 1);
			break;
	}
	return iVar0 != 0;
}

void func_951(int iParam0)
{
	Global_1297047.f_419 = (Global_1297047.f_419 - (Global_1297047.f_419 && iParam0));
}

int func_952(int iParam0)
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

int func_953(int iParam0)
{
	if (iParam0 == 255 || iParam0 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
	{
		return NETWORK::_NETWORK_GET_RANK();
	}
	return Global_1145091[iParam0 /*35*/];
}

int func_954(int iParam0)
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

void func_955(int iParam0)
{
	Global_1301323.f_155.f_4[iParam0 /*4*/].f_1 = 0;
}

void func_956(int iParam0)
{
	Global_1301323.f_155.f_4[iParam0 /*4*/].f_2 = 0;
}

void func_957(int iParam0)
{
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1301323.f_155.f_2), iParam0);
}

var func_958(int iParam0)
{
	var uVar0;

	if (!func_1136(&uVar0))
	{
		return 0;
	}
	if (!func_1137(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1137(&uVar0, 37, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1137(&uVar0, 40, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1137(&uVar0, 53, 0, 0, 1))
	{
		return 0;
	}
	return func_1138(&uVar0, 11);
}

int func_959()
{
	return SCRIPTS::COUNT_PLAYER_BITS(&(Global_1301323.f_155.f_2));
}

bool func_960(int iParam0)
{
	return (Global_1301323.f_155.f_3 && iParam0) != 0;
}

void func_961(int iParam0)
{
	Global_1301323.f_155.f_3 = (Global_1301323.f_155.f_3 - (Global_1301323.f_155.f_3 && iParam0));
}

bool func_962(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1301323.f_155.f_4[iParam0 /*4*/].f_2, iParam1);
}

bool func_963(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;

	if (!func_1136(&Var0))
	{
		return false;
	}
	if (!func_1137(&Var0, 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_1137(&Var0, 37, 0, 0, 1))
	{
		return false;
	}
	if (!func_1137(&Var0, 40, iParam0, 0, 1))
	{
		return false;
	}
	if (!func_1137(&Var0, 53, 0, 0, 1))
	{
		return false;
	}
	if (!func_1137(&Var0, 54, iParam1, 0, 1))
	{
		return false;
	}
	uParam2->f_1 = { func_1139(Var0) };
	*uParam2 = func_1140(Var0);
	uParam2->f_9 = func_1141(Var0);
	return true;
}

var func_964(int iParam0)
{
	var uVar0;

	if (!func_1136(&uVar0))
	{
		return 0;
	}
	if (!func_1137(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1137(&uVar0, 37, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1137(&uVar0, 40, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1137(&uVar0, 51, 0, 0, 1))
	{
		return 0;
	}
	return func_1138(&uVar0, 10);
}

bool func_965(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1301323.f_155.f_4[iParam0 /*4*/].f_1, iParam1);
}

bool func_966(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;

	if (!func_1136(&Var0))
	{
		return false;
	}
	if (!func_1137(&Var0, 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_1137(&Var0, 37, 0, 0, 1))
	{
		return false;
	}
	if (!func_1137(&Var0, 40, iParam0, 0, 1))
	{
		return false;
	}
	if (!func_1137(&Var0, 51, 0, 0, 1))
	{
		return false;
	}
	if (!func_1137(&Var0, 52, iParam1, 0, 1))
	{
		return false;
	}
	uParam2->f_33 = func_1142(Var0, joaat("PARTICLE"));
	*uParam2 = { func_1139(Var0) };
	uParam2->f_8 = { func_1143(Var0) };
	uParam2->f_16 = func_1144(Var0);
	uParam2->f_17 = { func_1145(Var0) };
	uParam2->f_20 = { func_1146(Var0) };
	uParam2->f_26 = func_1147(Var0);
	uParam2->f_27 = func_1148(Var0);
	if (uParam2->f_33 & 32 != 0)
	{
		uParam2->f_23 = { func_1149(Var0) };
	}
	if (uParam2->f_33 & 16 != 0)
	{
		uParam2->f_31 = func_1150(Var0);
	}
	if (uParam2->f_33 & 8 != 0)
	{
		uParam2->f_28 = func_1151(Var0);
		uParam2->f_29 = func_1152(Var0);
		uParam2->f_30 = func_1153(Var0);
	}
	if (uParam2->f_33 & 64 != 0)
	{
		uParam2->f_32 = func_1154(Var0);
	}
	return true;
}

void func_967(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1301323.f_155.f_4[iParam0 /*4*/].f_1), iParam1);
}

void func_968(int iParam0)
{
	SCRIPTS::_0x31010318BA9897AC(&(Global_1301323.f_155.f_2), iParam0);
}

void func_969(int iParam0)
{
	Global_1301323.f_155.f_3 = (Global_1301323.f_155.f_3 || iParam0);
}

void func_970(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1301323.f_155.f_4[iParam0 /*4*/].f_2), iParam1);
}

void func_971(var uParam0)
{
	struct<6> Var0;

	Var0 = -1;
	Var0.f_3 = 255;
	*uParam0 = { Var0 };
}

void func_972(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_1155(&(uParam0->f_3));
	uParam0->f_12 = 1;
	uParam0->f_13 = 0;
}

void func_973(var uParam0)
{
	func_1156(uParam0);
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

int func_974(int iParam0)
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

void func_975(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_976(var uParam0)
{
	func_975(uParam0);
	uParam0->f_4 = 0;
	uParam0->f_5 = { func_709() };
	uParam0->f_9 = 0;
	uParam0->f_10 = -1;
	uParam0->f_11 = 0;
	StringCopy(&(uParam0->f_12), "", 64);
	uParam0->f_20 = 0;
	uParam0->f_22 = 0;
	uParam0->f_23 = 0;
}

void func_977(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1157(uParam0[iVar0 /*7*/]);
		iVar0++;
	}
}

void func_978(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_979(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_01"):
			return 521;
		case -2141419899:
			return 404;
		case -2106445152:
			return 277;
		case -2106214197:
			return 102;
		case -2101264851:
			return 192;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_02"):
			return 470;
		case -2073072369:
			return 57;
		case -2069570138:
			return 25;
		case joaat("WS_MP_FETCH_OTH_TALL_TREES"):
			return 394;
		case -2058120606:
			return 194;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_04"):
			return 464;
		case joaat("WS_MP_JAIL_DOORS_BLACKWATER_UNLOCK"):
			return 338;
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
		case joaat("WS_MP_CAMP_DEFEND_RADLEYS_PASTURE"):
			return 387;
		case -1939389836:
			return 416;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_04"):
			return 428;
		case -1925798111:
			return 41;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_03"):
			return 439;
		case joaat("WS_MP_TREASURE_MAP_INTRO_VALENTINE_02"):
			return 403;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_03"):
			return 463;
		case joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
			return 380;
		case -1852605133:
			return 10;
		case joaat("WS_MP_TREASURE_MAP_INTRO_RHODES_03"):
			return 409;
		case -1847672446:
			return 312;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_04"):
			return 504;
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
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_02"):
			return 446;
		case -1825294305:
			return 252;
		case -1824738758:
			return 262;
		case -1818850842:
			return 239;
		case -1808329564:
			return 411;
		case -1799960545:
			return 243;
		case -1764522338:
			return 308;
		case -1763509974:
			return 139;
		case -1753769127:
			return 398;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_03"):
			return 479;
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_04"):
			return 524;
		case -1741667789:
			return 62;
		case -1738165526:
			return 3;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_03"):
			return 519;
		case -1718674470:
			return 23;
		case -1717960576:
			return 59;
		case -1711895055:
			return 13;
		case -1706438978:
			return 220;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_01"):
			return 421;
		case -1700452710:
			return 317;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_02"):
			return 466;
		case -1674179981:
			return 53;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_03"):
			return 527;
		case -1666278201:
			return 33;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_02"):
			return 486;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_02"):
			return 438;
		case -1612662716:
			return 198;
		case joaat("WS_MP_HIDEOUT_CUMBERLAND_FALLS"):
			return 354;
		case -1608141409:
			return 538;
		case joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK"):
			return 336;
		case -1582926490:
			return 144;
		case -1579419919:
			return 145;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_02"):
			return 434;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_03"):
			return 503;
		case -1558439474:
			return 286;
		case -1556041029:
			return 410;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_02"):
			return 518;
		case -1532284567:
			return 114;
		case -1530132748:
			return 296;
		case -1524512402:
			return 206;
		case -1523910291:
			return 153;
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_03"):
			return 523;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_02"):
			return 462;
		case joaat("WS_MP_HIDEOUT_SEA_OF_CORONADO"):
			return 370;
		case -1447311849:
			return 321;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_04"):
			return 528;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_01"):
			return 465;
		case -1436021162:
			return 170;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_04"):
			return 472;
		case -1419919497:
			return 22;
		case -1414537028:
			return 71;
		case -1405998267:
			return 103;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_02"):
			return 478;
		case -1387772214:
			return 407;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_03"):
			return 475;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_03"):
			return 487;
		case -1344601768:
			return 347;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_04"):
			return 476;
		case joaat("WS_MP_HIDEOUT_ROCKY_SEVEN"):
			return 362;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_04"):
			return 532;
		case -1329135070:
			return 138;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_01"):
			return 437;
		case -1311865656:
			return 37;
		case joaat("WS_MP_HIDEOUT_QUAKERS_COVE"):
			return 352;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_01"):
			return 461;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_02"):
			return 426;
		case joaat("WS_MP_HIDEOUT_THE_LOFT"):
			return 353;
		case -1282804314:
			return 255;
		case -1278074582:
			return 169;
		case -1271608261:
			return 96;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_03"):
			return 423;
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
			return 365;
		case -1206122982:
			return 154;
		case -1187950766:
			return 45;
		case -1181950077:
			return 400;
		case -1179948750:
			return 134;
		case -1170496998:
			return 46;
		case -1164215952:
			return 221;
		case joaat("WS_MP_CAMP_DEFEND_BLUEWATER_MARSH"):
			return 391;
		case -1151084372:
			return 122;
		case -1145519186:
			return 98;
		case joaat("WS_MP_JAIL_DOORS_BLACKWATER_LOCK"):
			return 339;
		case -1124061431:
			return 229;
		case -1123615607:
			return 29;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_03"):
			return 443;
		case -1095341658:
			return 408;
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
		case joaat("WS_MP_CAMP_DEFEND_GAPTOOTH_RIDGE"):
			return 382;
		case -1029225159:
			return 104;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_03"):
			return 431;
		case -1014145132:
			return 273;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_04"):
			return 460;
		case -978957786:
			return 237;
		case -959357075:
			return 36;
		case -950054349:
			return 150;
		case -947815572:
			return 399;
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_03"):
			return 511;
		case -939420910:
			return 44;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_04"):
			return 424;
		case -925071604:
			return 541;
		case -919512195:
			return 40;
		case joaat("WS_MP_HIDEOUT_RATTLESNAKE_HOLLOW"):
			return 368;
		case joaat("WS_MP_HIDEOUT_CUERA_SECO"):
			return 366;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_04"):
			return 500;
		case joaat("WS_MP_FETCH_OTH_SHEPHERDS_RISE"):
			return 393;
		case joaat("WS_MP_CAMP_DEFEND_TALL_TREES"):
			return 389;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_01"):
			return 505;
		case -879507474:
			return 223;
		case -868076593:
			return 82;
		case -857964358:
			return 81;
		case -853383233:
			return 63;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_04"):
			return 432;
		case joaat("WS_MP_HIDEOUT_CHOLLA_SPRINGS"):
			return 371;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_03"):
			return 419;
		case -828139293:
			return 246;
		case -812641169:
			return 534;
		case -811637947:
			return 232;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_01"):
			return 493;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_02"):
			return 514;
		case -796902762:
			return 86;
		case -792853067:
			return 240;
		case -789397228:
			return 248;
		case -785605431:
			return 236;
		case joaat("WS_MP_INTRO_HIDEOUT_RHODES"):
			return 328;
		case -764163380:
			return 215;
		case -748969569:
			return 76;
		case -741351766:
			return 58;
		case -736853952:
			return 302;
		case joaat("WS_MP_HIDEOUT_OLD_BACCHUS_PLACE"):
			return 372;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_02"):
			return 530;
		case -699277634:
			return 4;
		case joaat("WS_MP_HIDEOUT_FORT_RIGGS"):
			return 355;
		case -683458244:
			return 78;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_02"):
			return 458;
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
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_04"):
			return 512;
		case joaat("WS_MP_JAIL_DOORS_STRAWBERRY_UNLOCK"):
			return 342;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_02"):
			return 494;
		case -628542779:
			return 69;
		case -622554983:
			return 306;
		case -618620429:
			return 185;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_03"):
			return 471;
		case joaat("WS_MP_CAMP_DEFEND_GAPTOOTH_BREACH"):
			return 383;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_02"):
			return 506;
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_04"):
			return 492;
		case -554519756:
			return 535;
		case -545450213:
			return 313;
		case -538889627:
			return 173;
		case -538880323:
			return 172;
		case -534215902:
			return 128;
		case joaat("WS_MP_CAMP_DEFEND_GREAT_PLAINS_CIRCLE"):
			return 379;
		case -524145696:
			return 115;
		case -523522517:
			return 300;
		case -515561750:
			return 225;
		case joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK_HOLD_OPEN"):
			return 337;
		case -503955743:
			return 235;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_BLACKWATER"):
			return 326;
		case -502324015:
			return 8;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_03"):
			return 515;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_02"):
			return 418;
		case -491981251:
			return 184;
		case -489737721:
			return 401;
		case -468693731:
			return 109;
		case -464836488:
			return 254;
		case -460024530:
			return 349;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_03"):
			return 531;
		case -441204543:
			return 533;
		case -434590080:
			return 212;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_03"):
			return 459;
		case -404698347:
			return 202;
		case -397760715:
			return 141;
		case -396624371:
			return 373;
		case -389056691:
			return 257;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_03"):
			return 507;
		case joaat("WS_MP_CAMP_DEFEND_HENNIGANS_STEAD"):
			return 388;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_01"):
			return 429;
		case -360036154:
			return 304;
		case -356975260:
			return 101;
		case joaat("WS_MP_HIDEOUT_REPENTANCE"):
			return 369;
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
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_03"):
			return 491;
		case -311373772:
			return 539;
		case -306246697:
			return 311;
		case -299522880:
			return 319;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_01"):
			return 433;
		case joaat("WS_MP_JAIL_DOORS_VALENTINE_LOCK"):
			return 345;
		case -270094635:
			return 253;
		case -261141318:
			return 30;
		case -259123672:
			return 231;
		case -254562075:
			return 130;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_01"):
			return 417;
		case -238080464:
			return 119;
		case -233743613:
			return 258;
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_02"):
			return 522;
		case -223469678:
			return 201;
		case -220282381:
			return 137;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_04"):
			return 516;
		case joaat("WS_MP_JAIL_DOORS_VALENTINE_UNLOCK"):
			return 344;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_02"):
			return 482;
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
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_02"):
			return 430;
		case joaat("WS_MP_HIDEOUT_FARMHOUSE"):
			return 350;
		case -108307814:
			return 28;
		case -102827640:
			return 402;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_02"):
			return 498;
		case -99303535:
			return 165;
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_02"):
			return 490;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_02"):
			return 422;
		case -86199844:
			return 143;
		case -80522843:
			return 152;
		case -76237062:
			return 309;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_04"):
			return 508;
		case -75024673:
			return 244;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_04"):
			return 440;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_04"):
			return 452;
		case -63926460:
			return 87;
		case joaat("WS_MP_HIDEOUT_COLTER"):
			return 357;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_03"):
			return 467;
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
			return 405;
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
			return 540;
		case joaat("WS_MP_CAMP_DEFEND_NEW_HANOVER"):
			return 390;
		case joaat("WS_MP_INTRO_HIDEOUT_TUMBLEWEED"):
			return 331;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_01"):
			return 453;
		case joaat("WS_MP_FETCH_OTH_CASTORS"):
			return 395;
		case 94263042:
			return 276;
		case 106479759:
			return 99;
		case 141950038:
			return 112;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_01"):
			return 529;
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
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_01"):
			return 489;
		case 224551212:
			return 140;
		case 227918160:
			return 180;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_TUMBLEWEED"):
			return 327;
		case 235928616:
			return 271;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_01"):
			return 517;
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
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_01"):
			return 509;
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
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_04"):
			return 484;
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
			return 544;
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
		case joaat("WS_MP_JAIL_DOORS_SAINT_DENIS_LOCK"):
			return 341;
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
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_CIRCLE"):
			return 377;
		case 514932331:
			return 233;
		case 522677506:
			return 264;
		case 526003171:
			return 392;
		case 527226204:
			return 157;
		case 544152906:
			return 113;
		case 559573222:
			return 238;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_03"):
			return 455;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_03"):
			return 447;
		case joaat("WS_MP_HIDEOUT_ABANDONED_MINING_STATION"):
			return 358;
		case 588987611:
			return 177;
		case joaat("WS_MP_JAIL_DOORS_SAINT_DENIS_UNLOCK"):
			return 340;
		case 618699440:
			return 75;
		case joaat("WS_MP_HIDEOUT_GAPTOOTH"):
			return 375;
		case 630808005:
			return 126;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_01"):
			return 469;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_01"):
			return 481;
		case 651395116:
			return 279;
		case 664571177:
			return 297;
		case 665676602:
			return 281;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_03"):
			return 499;
		case 689024866:
			return 132;
		case 689930684:
			return 204;
		case 704802028:
			return 176;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_03"):
			return 483;
		case 723021499:
			return 250;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_02"):
			return 474;
		case joaat("WS_MP_CAMP_DEFEND_TWO_ROCKS"):
			return 381;
		case 753127042:
			return 48;
		case 757752139:
			return 107;
		case joaat("WS_MP_HIDEOUT_SHIP_ROCK"):
			return 361;
		case 791041526:
			return 18;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_02"):
			return 454;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_04"):
			return 468;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_02"):
			return 502;
		case 817925178:
			return 227;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_01"):
			return 473;
		case 831940854:
			return 406;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_02"):
			return 450;
		case 865557632:
			return 536;
		case 868326136:
			return 270;
		case joaat("WS_MP_CAMP_DEFEND_CHOLLA_SPRINGS"):
			return 384;
		case 885203519:
			return 315;
		case joaat("WS_MP_CAMP_DEFEND_GRIZZLIES_CIRCLE"):
			return 378;
		case joaat("WS_MP_HIDEOUT_CAMP_PIKES"):
			return 374;
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_02"):
			return 510;
		case 929582877:
			return 367;
		case 931649776:
			return 211;
		case 932909855:
			return 283;
		case 943561238:
			return 415;
		case 945612176:
			return 234;
		case joaat("WS_MP_JAIL_DOORS_STRAWBERRY_LOCK"):
			return 343;
		case 965986934:
			return 19;
		case 976539083:
			return 295;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_02"):
			return 442;
		case 1010885152:
			return 7;
		case 1015669983:
			return 120;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_01"):
			return 445;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_01"):
			return 501;
		case 1050128548:
			return 269;
		case 1064154891:
			return 108;
		case 1074873669:
			return 142;
		case 1112996351:
			return 537;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_01"):
			return 485;
		case 1140218954:
			return 27;
		case 1151197909:
			return 242;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_03"):
			return 451;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_01"):
			return 513;
		case joaat("WS_MP_HIDEOUT_TALL_TREES"):
			return 360;
		case 1160698568:
			return 133;
		case 1164928979:
			return 156;
		case joaat("WS_MP_INTRO_HIDEOUT_BLACKWATER"):
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
			return 542;
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
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_04"):
			return 480;
		case joaat("WS_MP_HIDEOUT_LAKAY"):
			return 346;
		case 1248935549:
			return 414;
		case 1250636944:
			return 245;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_04"):
			return 448;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_01"):
			return 441;
		case joaat("WS_MP_CAMP_DEFEND_LITTLE_CREEK"):
			return 386;
		case joaat("WS_MP_HIDEOUT_BEAVER_HOLLOW"):
			return 348;
		case 1306158345:
			return 199;
		case joaat("WS_MP_HIDEOUT_STILLWATER_STRANDS"):
			return 356;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_04"):
			return 420;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_01"):
			return 525;
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
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_04"):
			return 496;
		case 1376646519:
			return 210;
		case 1399676951:
			return 207;
		case 1410198831:
			return 209;
		case 1421300489:
			return 413;
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
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_01"):
			return 449;
		case 1485195808:
			return 50;
		case 1485494263:
			return 100;
		case 1488286867:
			return 280;
		case 1488453464:
			return 318;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_01"):
			return 425;
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
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_03"):
			return 435;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_01"):
			return 457;
		case 1522511407:
			return 265;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_VALENTINE"):
			return 325;
		case 1557082963:
			return 161;
		case joaat("WS_MP_CAMP_DEFEND_RIO_BRAVO"):
			return 385;
		case 1582370975:
			return 332;
		case 1583012985:
			return 289;
		case 1591451572:
			return 301;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_04"):
			return 520;
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
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_02"):
			return 526;
		case 1691618738:
			return 66;
		case 1698972798:
			return 351;
		case joaat("WS_MP_HIDEOUT_SOLOMONS_FOLLY"):
			return 364;
		case 1703426636:
			return 43;
		case joaat("WS_MP_INTRO_HIDEOUT_VALENTINE"):
			return 329;
		case 1713221411:
			return 135;
		case 1743048395:
			return 213;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_HILLTOP"):
			return 376;
		case 1766284049:
			return 92;
		case 1774060092:
			return 543;
		case 1776302352:
			return 299;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_04"):
			return 444;
		case joaat("WS_MP_TREASURE_MAP_INTRO_TUMBLEWEED_01"):
			return 397;
		case 1822001510:
			return 197;
		case 1846061697:
			return 97;
		case 1850082804:
			return 193;
		case joaat("WS_MP_TREASURE_MAP_INTRO_BLACKWATER_01"):
			return 412;
		case 1867912207:
			return 68;
		case 1881028477:
			return 363;
		case 1884271742:
			return 51;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_04"):
			return 436;
		case 1908151693:
			return 335;
		case 1926308480:
			return 94;
		case joaat("WS_MP_HIDEOUT_CLEMENS_COVE"):
			return 359;
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
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_04"):
			return 488;
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
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_01"):
			return 497;
		case 2051822093:
			return 284;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_03"):
			return 427;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_01"):
			return 477;
		case 2077022393:
			return 291;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_04"):
			return 456;
		case 2080210939:
			return 267;
		case 2091701359:
			return 39;
		case joaat("WS_MP_ASSASSINATION_TRK_GRZ_CAMP"):
			return 396;
		case 2109952320:
			return 189;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_RHODES"):
			return 324;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_03"):
			return 495;
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

int func_980(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return Global_1134390[iVar0 /*83*/].f_38.f_3;
	}
	return -1;
}

void func_981(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_982(int iParam0)
{
	return (Global_1102219.f_26.f_9 && iParam0) == iParam0;
}

char* func_983(int iParam0)
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

char* func_984(int iParam0)
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

void func_985(int iParam0)
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
	func_986(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 0;
}

void func_986(int iParam0)
{
	if (Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

void func_987(var uParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0, func_1158(91));
	if (func_1159(iVar0))
	{
		UIFEED::_0x2F901291EF177B02(iVar0, 1);
	}
}

void func_988(int iParam0)
{
	Global_1940311.f_242.f_1186 = iParam0;
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940311.f_242.f_6, MISC::_0x2B6846401D68E563(BUILTIN::TO_FLOAT(Global_1940311.f_242.f_1186), 0));
}

void func_989(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		if (Global_1951255[iParam0 /*23*/].f_5 == 5 && !func_792(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_990(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1951255[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_991(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951255[iParam0 /*23*/].f_1 = (Global_1951255[iParam0 /*23*/].f_1 || iParam1);
}

var func_992(var uParam0)
{
	return func_997(uParam0, 75, 1);
}

int func_993(int iParam0)
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

float func_994(float fParam0, float fParam1)
{
	return (BUILTIN::_LOG10(fParam1) / BUILTIN::_LOG10(fParam0));
}

int func_995(int iParam0)
{
	int iVar0;

	iVar0 = func_800(iParam0, 0);
	return (BUILTIN::FLOOR(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(iVar0))) - 1);
}

int func_996(int iParam0, int iParam1)
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

int func_997(var uParam0, int iParam1, int iParam2)
{
	var uVar0;

	uParam0->f_2 = iParam1;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, uParam0))
	{
	}
	return uVar0;
}

var func_998(var uParam0)
{
	return func_997(uParam0, 73, 1);
}

void func_999(struct<5> Param0, var uParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	uVar4 = Param0.f_1;
	iVar1 = func_798(&Param0, 4);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar2 = 0;
		Param0.f_1 = uVar4;
		if (!func_641(&Param0, 31, iVar0, 0, 1))
		{
			return;
		}
		iVar2 = func_1160(Param0, &iVar3);
		switch (iVar3)
		{
			case joaat("AWARD"):
				uParam5->f_1 = iVar2;
				break;
			case joaat("AWARD_PROCESS"):
				uParam5->f_2 = iVar2;
				break;
			default:
				break;
		}
		iVar0++;
	}
}

int func_1000(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		bVar0 = (GANG::_0xD6F6ACF4392187FB(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) && GANG::_0x0F99F6436528A089(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
		bParam7 = bVar0;
	}
	POSSE::_0xC08AFF658B2E51DA(&iVar1);
	if (iVar1 != 0)
	{
		func_1161(iParam2, -372840566);
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
	func_1162(uParam1, iParam0, Var3);
	return 1;
}

void func_1001(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1297470.f_111[iParam0 /*6*/]), iParam1, 4);
}

void func_1002(int iParam0, int iParam1)
{
	Global_1297470.f_111[iParam0 /*6*/].f_4 = iParam1;
}

void func_1003(int iParam0, var uParam1)
{
	Global_1297470.f_111[iParam0 /*6*/].f_5 = uParam1;
}

var func_1004(var uParam0)
{
	return func_997(uParam0, 63, 1);
}

var func_1005(var uParam0)
{
	return func_997(uParam0, 64, 1);
}

var func_1006(var uParam0)
{
	return func_1012(uParam0, 62, 1);
}

var func_1007(var uParam0)
{
	return func_997(uParam0, 62, 1);
}

void func_1008(struct<5> Param0, var uParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	uVar4 = Param0.f_1;
	iVar1 = func_798(&Param0, 4);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar2 = 0;
		Param0.f_1 = uVar4;
		if (!func_641(&Param0, 31, iVar0, 0, 1))
		{
			return;
		}
		iVar2 = func_1160(Param0, &iVar3);
		switch (iVar3)
		{
			case joaat("PREREQUISITE"):
				uParam5->f_3 = iVar2;
				break;
			default:
				break;
		}
		iVar0++;
	}
}

bool func_1009(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 1:
			return true;
		case 2:
			return iParam1 & 2 == 0;
		case 3:
			return iParam1 & 1 == 0;
		default:
			break;
	}
	return true;
}

bool func_1010(int iParam0, int iParam1)
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
		case joaat("UNLOCKED"):
			return UNLOCK::_UNLOCK_IS_UNLOCKED(iParam0);
		case joaat("VISIBLE"):
			return UNLOCK::_UNLOCK_IS_VISIBLE(iParam0);
		case joaat("LOCKED"):
			return !UNLOCK::_UNLOCK_IS_UNLOCKED(iParam0);
		case joaat("HIDDEN"):
			return !UNLOCK::_UNLOCK_IS_VISIBLE(iParam0);
		default:
			break;
	}
	return false;
}

bool func_1011(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("CLAIMED"):
			return NETWORK::_0xFBE782B3165AC8EC(iParam0);
		case joaat("UNCLAIMED"):
			return !NETWORK::_0xFBE782B3165AC8EC(iParam0);
		default:
			break;
	}
	return false;
}

var func_1012(var uParam0, int iParam1, int iParam2)
{
	var uVar0;

	uParam0->f_2 = iParam1;
	if (!DATAFILE::_DATAFILE_GET_INT(&uVar0, uParam0))
	{
	}
	return uVar0;
}

var func_1013(var uParam0)
{
	return func_997(uParam0, 83, 1);
}

struct<6> func_1014(int iParam0)
{
	struct<5> Var0;
	struct<6> Var5;
	struct<6> Var11;

	if (!func_640(&Var0))
	{
		return Var11;
	}
	if (!func_641(&Var0, 13, 0, 0, 1))
	{
		return Var11;
	}
	if (!func_641(&Var0, 15, 0, 0, 1))
	{
		return Var11;
	}
	if (!func_641(&Var0, 48, iParam0, 0, 1))
	{
		return Var11;
	}
	Var5 = iParam0;
	Var5.f_1 = func_1163(&Var0);
	Var5.f_2 = func_1164(&Var0);
	Var5.f_3 = func_1165(&Var0);
	switch (Var5.f_3)
	{
		case joaat("INT"):
			Var5.f_4 = func_1166(&Var0);
			break;
		default:
			break;
	}
	func_1167(Var0, &Var5);
	return Var5;
}

bool func_1015(var uParam0, var uParam1)
{
	struct<4> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_2 = -1;
	Var0.f_3.f_3 = -1;
	Var0.f_3.f_4 = -1;
	Var0.f_3 = { func_635(uParam1) };
	if (uParam0->f_5 & 1 != 0)
	{
		if (Var0.f_3 == -1 || Var0.f_3.f_1 == -1)
		{
			return false;
		}
		if (!func_338(8))
		{
			return false;
		}
	}
	if (uParam0->f_5 & 2 != 0)
	{
		if (Var0.f_3 == -1 || Var0.f_3.f_1 == -1)
		{
			return false;
		}
		if (!func_607(Var0.f_3, Var0.f_3.f_1, Var0.f_3.f_2, 0))
		{
			return false;
		}
	}
	return true;
}

var func_1016(var uParam0)
{
	return func_997(uParam0, 60, 1);
}

var func_1017(var uParam0)
{
	return func_997(uParam0, 88, 1);
}

void func_1018(struct<5> Param0, var uParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	uVar4 = Param0.f_1;
	iVar1 = func_798(&Param0, 4);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar2 = 0;
		Param0.f_1 = uVar4;
		if (!func_641(&Param0, 31, iVar0, 0, 1))
		{
			return;
		}
		iVar2 = func_1160(Param0, &iVar3);
		switch (iVar3)
		{
			case joaat("REPLAY"):
				uParam5->f_4 = iVar2;
				break;
			default:
				break;
		}
		iVar0++;
	}
}

bool func_1019(var uParam0, var uParam1)
{
	struct<4> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_2 = -1;
	Var0.f_3.f_3 = -1;
	Var0.f_3.f_4 = -1;
	Var0.f_3 = { func_635(uParam1) };
	if (uParam0->f_4 & 1 != 0)
	{
		if (Var0.f_3 == -1 || Var0.f_3.f_1 == -1)
		{
			return false;
		}
		if (!func_338(8))
		{
			return false;
		}
	}
	if (uParam0->f_4 & 2 != 0)
	{
		if (Var0.f_3 == -1 || Var0.f_3.f_1 == -1)
		{
			return false;
		}
		if (!func_607(Var0.f_3, Var0.f_3.f_1, Var0.f_3.f_2, 0))
		{
			return false;
		}
	}
	return true;
}

int func_1020(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_488(iParam0);
	iVar1 = func_852(iParam0, iVar0);
	if (iVar0 != iVar1)
	{
		if (func_489(iVar1))
		{
			func_1168(iVar1);
			iVar0 = iVar1;
		}
	}
	return iVar0;
}

void func_1021(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	Global_1128574[iVar0 /*56*/].f_1[iParam0] = (Global_1128574[iVar0 /*56*/].f_1[iParam0] - (Global_1128574[iVar0 /*56*/].f_1[iParam0] && iParam1));
}

int func_1022(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	return func_853(iParam0);
}

bool func_1023(int iParam0, int iParam1, int iParam2)
{
	return (Global_1128574[iParam0 /*56*/].f_1[iParam1] && iParam2) != 0;
}

int func_1024(struct<2> Param0)
{
	if (func_1169())
	{
		return 0;
	}
	if (!func_18(Param0))
	{
		return 0;
	}
	Global_1051213 = { Param0 };
	return 1;
}

void func_1025(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	Global_1128574[iVar0 /*56*/].f_1[iParam0] = (Global_1128574[iVar0 /*56*/].f_1[iParam0] || iParam1);
}

bool func_1026(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_365(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_1027(int iParam0)
{
	func_1170(iParam0);
}

void func_1028()
{
	int iVar0;
	int iVar1;

	if (!NETWORK::NETWORK_IS_HOST())
	{
		return;
	}
	iVar0 = NETWORK::_NETWORK_SESSION_GET_FLAGS();
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

void func_1029(int iParam0)
{
	if (!func_1023(PLAYER::PLAYER_ID(), iParam0, 8))
	{
		return;
	}
	func_1171();
	Global_1109804.f_15 = 1;
	func_1021(iParam0, 8);
}

void func_1030(int iParam0)
{
	func_1172(iParam0);
	func_1173(iParam0, 0);
}

int func_1031(int iParam0)
{
	return Global_1198046.f_231.f_1066[iParam0 /*17*/].f_13;
}

bool func_1032(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	*uParam1 = { func_1053(iParam0) };
	if (func_1062(iParam0) <= 0)
	{
		*uParam1 = { func_1174(iParam0) };
		if (func_18(*uParam1))
		{
			func_1047(iParam0);
		}
		return false;
	}
	else if (!func_18(*uParam1))
	{
		*uParam1 = { func_1174(iParam0) };
		if (func_18(*uParam1))
		{
			func_1047(iParam0);
			return false;
		}
	}
	else if (func_18(*uParam1))
	{
		if (func_1031(iParam0) < 4)
		{
			if (!func_1036(iParam0, iVar0, 0))
			{
				func_1175(iParam0, *uParam1);
				func_1044(iParam0, 0);
				if (func_838(iParam0, 256))
				{
					func_1044(iParam0, 1);
				}
			}
		}
		if (func_1026(*uParam1))
		{
			if (func_1037(iParam0, 4))
			{
				func_1042(iParam0, 0, 0);
				return false;
			}
			else if (func_1037(iParam0, 5))
			{
				func_1043(iParam0, 0);
				return false;
			}
		}
	}
	return true;
}

void func_1033(int iParam0, int iParam1)
{
	Global_1198046.f_231.f_1066[iParam0 /*17*/].f_13 = iParam1;
}

bool func_1034(int iParam0)
{
	if (!func_1176(iParam0))
	{
		return false;
	}
	if (func_1031(iParam0) >= 5)
	{
		return false;
	}
	if (func_1031(iParam0) <= 0)
	{
		return false;
	}
	if (!func_1036(iParam0, PLAYER::PLAYER_ID(), 0))
	{
		return false;
	}
	return true;
}

void func_1035(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_1174(iParam0) };
	if (!func_18(Var0))
	{
		return;
	}
	if (!func_943(Var0) && !func_1026(Var0))
	{
		return;
	}
	func_1177(iParam0, 2);
	func_1177(iParam0, 3);
	func_1044(iParam0, 6);
	func_944(Var0, 0, 2, iParam1, 0);
}

bool func_1036(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1207784[iParam1 /*72*/][iParam0], iParam2);
}

bool func_1037(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_1178())
	{
		iVar0 = func_1179(iVar1);
		if (func_1036(iParam0, iVar0, iParam1))
		{
			return true;
		}
		iVar1++;
	}
	return func_1036(iParam0, PLAYER::PLAYER_ID(), iParam1);
}

int func_1038(int iParam0)
{
	return Global_1198046.f_2505[iParam0 /*6*/].f_4;
}

void func_1039(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_1174(iParam0) };
	if (!func_18(Var0))
	{
		return;
	}
	if (func_943(Var0))
	{
		return;
	}
	if (func_1026(Var0))
	{
		return;
	}
	func_1044(iParam0, 2);
	func_1177(iParam0, 3);
	func_1177(iParam0, 6);
	func_367(Var0);
}

void func_1040(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	Global_1207784[iVar0 /*72*/][iParam0] = 0;
}

void func_1041(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0;

	Var0 = { func_1174(iParam0) };
	if (!func_18(Var0))
	{
		return;
	}
	if (!func_943(Var0))
	{
		return;
	}
	if (func_1026(Var0))
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
	func_1044(iParam0, 3);
	func_1180(Var0, 1, bParam2, bParam3);
}

void func_1042(int iParam0, bool bParam1, int iParam2)
{
	struct<2> Var0;
	bool bVar2;

	Var0 = { func_1174(iParam0) };
	if (!func_18(Var0))
	{
		return;
	}
	if (func_943(Var0))
	{
		return;
	}
	if (!func_1026(Var0))
	{
		return;
	}
	if (func_1036(iParam0, PLAYER::PLAYER_ID(), 5))
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
	func_944(Var0, 0, bVar2, iParam2, 0);
	func_1044(iParam0, 4);
}

void func_1043(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_1174(iParam0) };
	if (!func_18(Var0))
	{
		return;
	}
	if (func_943(Var0))
	{
		return;
	}
	if (!func_1026(Var0))
	{
		return;
	}
	if (func_1036(iParam0, PLAYER::PLAYER_ID(), 5))
	{
		return;
	}
	func_944(Var0, 0, 1, iParam1, 0);
	func_1044(iParam0, 5);
}

void func_1044(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (func_1036(iParam0, iVar0, iParam1))
	{
		return;
	}
	MISC::SET_BIT(&(Global_1207784[iVar0 /*72*/][iParam0]), iParam1);
}

bool func_1045(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	iVar1 = 0;
	while (iVar1 < func_1178())
	{
		iVar0 = func_1179(iVar1);
		if (func_1036(iParam0, iVar0, 2) && !((func_1036(iParam0, iVar0, 4) || func_1036(iParam0, iVar0, 5)) || func_1036(iParam0, iVar0, 6)))
		{
			return false;
		}
		iVar1++;
	}
	Var2 = { func_1174(iParam0) };
	return !(func_943(Var2) || func_1026(Var2));
}

bool func_1046(int iParam0, int iParam1)
{
	return Global_1207784[iParam1 /*72*/][iParam0] == 0;
}

void func_1047(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = Global_1198046.f_231.f_1066[iParam0 /*17*/].f_7;
	if (iVar1 > 1)
	{
		iVar1 = 1;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		func_1181(iParam0, iVar0);
		func_1182(iParam0, iVar0);
		iVar0++;
	}
	func_1035(iParam0, 0);
	func_1183(iParam0);
	func_1040(iParam0);
}

void func_1048(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_1184(iParam0);
	iVar1 = func_1185(iParam0, iParam1);
	iVar2 = func_1186(iParam0, iParam1);
	iVar3 = func_1031(iParam0);
	switch (func_1187(iParam0, iParam1))
	{
		case -1:
			if (!func_1034(iParam0))
			{
				if (iVar2 >= 3)
				{
					func_1188(iParam0, iParam1, 6);
				}
				return;
			}
			func_1188(iParam0, iParam1, 1);
			break;
		case 0:
			if (!func_1034(iParam0))
			{
				if (iVar2 >= 3)
				{
					func_1188(iParam0, iParam1, 6);
				}
				return;
			}
			func_1188(iParam0, iParam1, 1);
			break;
		case 1:
			if (!func_1034(iParam0))
			{
				func_1189(iParam0, iParam1);
				func_1188(iParam0, iParam1, 0);
				return;
			}
			if (iVar2 < 1)
			{
				return;
			}
			if (iVar2 >= 3)
			{
				func_1188(iParam0, iParam1, 6);
				return;
			}
			func_1188(iParam0, iParam1, 2);
			break;
		case 2:
			if (!func_1034(iParam0))
			{
				func_1189(iParam0, iParam1);
				func_1188(iParam0, iParam1, 0);
				return;
			}
			if (iVar2 < 1)
			{
				func_1188(iParam0, iParam1, 1);
				return;
			}
			if (iVar2 >= 3)
			{
				func_1188(iParam0, iParam1, 6);
				return;
			}
			if (!func_1190(iParam0, iParam1))
			{
				return;
			}
			func_1191(iParam0, iParam1, 0);
			func_1188(iParam0, iParam1, 3);
			break;
		case 3:
			if (!func_1034(iParam0))
			{
				func_1189(iParam0, iParam1);
				func_1188(iParam0, iParam1, 0);
				return;
			}
			if (iVar2 < 1)
			{
				func_1188(iParam0, iParam1, 7);
				return;
			}
			if (iVar2 >= 3)
			{
				func_1188(iParam0, iParam1, 6);
				return;
			}
			if (!func_1192(iParam0, iParam1))
			{
				return;
			}
			func_1188(iParam0, iParam1, 4);
			break;
		case 4:
			if (!NETWORK::_NETWORK_IS_SCRIPT_ACTIVE_HASH(iVar0, iVar1, true, 0))
			{
				if (!func_1193(iParam0, iParam1))
				{
					func_1194(iParam0, iParam1, 0);
					func_1195(iParam0, iParam1, 0);
					func_1188(iParam0, iParam1, 2);
				}
				return;
			}
			func_1188(iParam0, iParam1, 5);
			break;
		case 5:
			if ((func_1062(iParam0) <= 0 || iVar3 >= 5) || iVar3 < 1)
			{
				func_1181(iParam0, iParam1);
			}
			if (func_1196(iParam0, iParam1))
			{
				func_1181(iParam0, iParam1);
			}
			if (NETWORK::_NETWORK_IS_SCRIPT_ACTIVE_HASH(iVar0, iVar1, true, 0))
			{
				return;
			}
			if (func_1193(iParam0, iParam1))
			{
				return;
			}
			func_1194(iParam0, iParam1, 0);
			if ((func_1056(iParam0, 4) || func_1056(iParam0, 5)) || (func_1031(iParam0) > 2 && iVar2 == 3))
			{
				func_1188(iParam0, iParam1, 6);
			}
			else
			{
				func_1195(iParam0, iParam1, 0);
				func_1188(iParam0, iParam1, 8);
			}
			break;
		case 6:
			if (!func_1045(iParam0))
			{
				return;
			}
			func_1188(iParam0, iParam1, 7);
			break;
		case 7:
			func_1189(iParam0, iParam1);
			func_1188(iParam0, iParam1, 8);
			break;
		case 8:
			func_1044(iParam0, 7);
			if (iVar2 == 2 || iVar2 == 3)
			{
				return;
			}
			func_1188(iParam0, iParam1, 1);
			func_1177(iParam0, 7);
			break;
	}
}

bool func_1049(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1197(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return true;
	}
	if (!VOLUME::_0xA4A4359320345B34(iVar0))
	{
		func_1198(iParam0, iParam1, 0);
		return true;
	}
	func_1198(iParam0, iParam1, 0);
	return true;
}

void func_1050(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	if (!func_838(iParam0, 8))
	{
		return;
	}
	iVar0 = func_1062(iParam0);
	iVar1 = func_1199(iParam0, iParam1);
	iVar2 = func_1031(iParam0);
	iVar3 = func_1186(iParam0, iParam1);
	bVar4 = func_1176(iParam0);
	if (!bVar4 || iVar2 >= 5)
	{
		if (iVar1 != 1)
		{
			func_1200(iParam0, iParam1);
			func_1201(iParam0, iParam1, 1);
		}
		return;
	}
	switch (iVar1)
	{
		case -2:
			break;
		case -1:
			if (!func_18(func_1053(iParam0)))
			{
			}
			else if (func_1202(iParam0, iParam1) <= 0)
			{
				func_1201(iParam0, iParam1, 0);
			}
			else if (iVar0 == 1)
			{
				func_1201(iParam0, iParam1, 5);
			}
			else
			{
				func_1201(iParam0, iParam1, 2);
			}
			break;
		case 0:
			if (func_1202(iParam0, iParam1) > 0)
			{
				func_1201(iParam0, iParam1, 2);
			}
			break;
		case 1:
			func_1201(iParam0, iParam1, -1);
			break;
		case 2:
			if (func_1203(iParam0, iParam1) != 0)
			{
				func_1201(iParam0, iParam1, 4);
				return;
			}
			func_1204(iParam0, iParam1, 0);
			func_1201(iParam0, iParam1, 3);
			break;
		case 3:
			if (func_1197(iParam0, iParam1) == 0)
			{
				func_1201(iParam0, iParam1, 2);
				return;
			}
			if (func_1205(iParam0, iParam1))
			{
				func_1201(iParam0, iParam1, 4);
				return;
			}
			break;
		case 4:
			if (iVar0 == 1)
			{
				VOLUME::_0xD4FA73FE628FEC63(func_1203(iParam0, iParam1), 160);
				func_1201(iParam0, iParam1, 7);
			}
			else if (!VOLUME::_0xF6A8A652A6B186CD(func_1203(iParam0, iParam1)))
			{
				func_1206(iParam0, iParam1);
				func_1201(iParam0, iParam1, 2);
			}
			break;
		case 5:
			if ((iVar3 == 2 || iVar2 == 2) || iVar0 > 1)
			{
				func_1201(iParam0, iParam1, 2);
			}
			break;
		case 6:
			break;
		case 7:
			if ((iVar3 == 2 || iVar2 == 2) || iVar0 > 1)
			{
				VOLUME::_0xD4FA73FE628FEC63(func_1203(iParam0, iParam1), 32);
				func_1201(iParam0, iParam1, 4);
			}
			else if (!VOLUME::_0xF6A8A652A6B186CD(func_1203(iParam0, iParam1)))
			{
				func_1206(iParam0, iParam1);
				func_1201(iParam0, iParam1, 5);
			}
			break;
	}
}

void func_1051(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_838(iParam0, 16))
	{
		return;
	}
	iVar0 = func_1184(iParam0);
	iVar1 = func_1185(iParam0, iParam1);
	iVar3 = func_1186(iParam0, iParam1);
	if (iVar3 > 0 && !func_1176(iParam0))
	{
		func_1207(iParam0, iParam1, 0);
		return;
	}
	switch (iVar3)
	{
		case -1:
			if (!func_18(func_1053(iParam0)))
			{
				return;
			}
			if (func_1208(iParam0, iParam1) <= 0)
			{
				func_1207(iParam0, iParam1, 0);
				return;
			}
			else
			{
				func_1207(iParam0, iParam1, 1);
				return;
			}
			break;
		case 0:
			if (!func_1176(iParam0))
			{
				return;
			}
			if (func_1208(iParam0, iParam1) <= 0)
			{
				return;
			}
			iVar2 = func_1209(iParam0);
			if (iVar2 != -15 && func_1210(iVar2))
			{
				return;
			}
			func_1207(iParam0, iParam1, 1);
			break;
		case 1:
			if (!func_1211(iParam0, iParam1, 0))
			{
			}
			else
			{
				func_1207(iParam0, iParam1, 2);
				func_1063(iParam0, 3);
				return;
			}
			break;
		case 2:
			if (!func_1211(iParam0, iParam1, 0))
			{
				if (!NETWORK::_NETWORK_IS_SCRIPT_ACTIVE_HASH(iVar0, iVar1, false, 0))
				{
					func_1207(iParam0, iParam1, 3);
					return;
				}
			}
			if (func_1031(iParam0) >= 3)
			{
				func_1207(iParam0, iParam1, 3);
				return;
			}
			break;
		case 3:
			if (func_1031(iParam0) >= 3)
			{
				return;
			}
			if (!func_1212(iParam0, iParam1))
			{
				func_1207(iParam0, iParam1, 2);
				return;
			}
			if (func_1055(iParam0) != 255)
			{
				func_1063(iParam0, 2);
			}
			else
			{
				func_1063(iParam0, 1);
			}
			iVar2 = func_1209(iParam0);
			if (iVar2 != -15 && func_1210(iVar2))
			{
				func_1207(iParam0, iParam1, 0);
				return;
			}
			if (func_1031(iParam0) >= 4)
			{
				return;
			}
			if (func_1213(iParam0, 7))
			{
				return;
			}
			func_1207(iParam0, iParam1, 1);
			break;
	}
}

bool func_1052(int iParam0, int iParam1)
{
	if (iParam1 > -1 && iParam1 < 5)
	{
		if (!func_18(func_1053(iParam0)))
		{
			func_1033(iParam0, 5);
			return true;
		}
	}
	if (!func_1176(iParam0) && iParam1 < 5)
	{
		func_1214(iParam0);
		func_1033(iParam0, 5);
		return true;
	}
	return false;
}

struct<2> func_1053(int iParam0)
{
	if (iParam0 < 0)
	{
		return func_820();
	}
	return Global_1198046.f_231[iParam0 /*15*/].f_5;
}

void func_1054(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return;
	}
	Global_1198046.f_2505[iParam0 /*6*/].f_4 = GANG::_0x901E0DC25080C8B9(iParam1);
	Global_1198046.f_2505[iParam0 /*6*/].f_5 = iParam1;
}

int func_1055(int iParam0)
{
	return Global_1198046.f_2505[iParam0 /*6*/].f_5;
}

bool func_1056(int iParam0, int iParam1)
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
		else if (func_1036(iParam0, iVar0, iParam1))
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

bool func_1057(int iParam0)
{
	int iVar0;
	var uVar1;

	if (!func_838(iParam0, 512))
	{
		return false;
	}
	iVar0 = func_1215(iParam0);
	if (iVar0 <= 0)
	{
		return false;
	}
	uVar1 = func_286(func_1216(iParam0, 0), 0f, 0f, 0f, IntToFloat(iVar0), IntToFloat(iVar0), IntToFloat(iVar0 * 2), joaat("VOLSPHERE"), 0, 8);
	return SCRIPTS::COUNT_PLAYER_BITS(&uVar1) <= 0;
}

bool func_1058(int iParam0)
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
		else if (!func_1046(iParam0, iVar0))
		{
			return false;
		}
		iVar1++;
	}
	return true;
}

void func_1059(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1198046.f_231.f_1066[iParam0 /*17*/].f_6 & 4096 != 0)
	{
		return;
	}
	iVar0 = Global_1198046.f_2505[iParam0 /*6*/].f_5;
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return;
	}
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		iVar2 = GANG::_0x901E0DC25080C8B9(iVar0);
		if (Global_1198046.f_2505[iParam0 /*6*/].f_4 != iVar2)
		{
			if ((GANG::_0xD6F6ACF4392187FB(Global_1198046.f_2505[iParam0 /*6*/].f_4) && GANG::_0x93A91A351A07360E(Global_1198046.f_2505[iParam0 /*6*/].f_4)) && GANG::_0x149A2751AB66AC02(Global_1198046.f_2505[iParam0 /*6*/].f_4) > 0)
			{
				iVar1 = GANG::_0x4BE6C13A45CCA8EC(Global_1198046.f_2505[iParam0 /*6*/].f_4);
				func_1054(iParam0, iVar1);
			}
			else if (GANG::_0x4BE6C13A45CCA8EC(iVar2) == iVar0)
			{
				Global_1198046.f_2505[iParam0 /*6*/].f_4 = iVar2;
			}
			else
			{
				func_1217(iParam0);
			}
		}
		return;
	}
	if (Global_1198046.f_2505[iParam0 /*6*/].f_4 == 0)
	{
		func_1217(iParam0);
		return;
	}
	if (!GANG::_0x93A91A351A07360E(Global_1198046.f_2505[iParam0 /*6*/].f_4))
	{
		func_1217(iParam0);
		return;
	}
	iVar1 = GANG::_0x4BE6C13A45CCA8EC(Global_1198046.f_2505[iParam0 /*6*/].f_4);
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
	{
		func_1217(iParam0);
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		func_1217(iParam0);
		return;
	}
	func_1054(iParam0, iVar1);
}

bool func_1060(int iParam0)
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
		else if (Global_1207784[iVar0 /*72*/][iParam0] > 255)
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

bool func_1061(int iParam0, int iParam1)
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
		else if (!func_1036(iParam0, iVar0, iParam1))
		{
			return false;
		}
		iVar1++;
	}
	return true;
}

int func_1062(int iParam0)
{
	if (!func_849(iParam0))
	{
		return -1;
	}
	return Global_1198046.f_231[iParam0 /*15*/].f_1;
}

void func_1063(int iParam0, int iParam1)
{
	Global_1198046.f_231[iParam0 /*15*/].f_1 = iParam1;
}

int func_1064(var uParam0)
{
	return *uParam0;
}

struct<40> func_1065(var uParam0, int iParam1)
{
	struct<40> Var0;

	Var0 = { func_1218(uParam0, iParam1) };
	func_1219(uParam0, iParam1);
	return Var0;
}

bool func_1066(var uParam0, var uParam1)
{
	if (uParam0->f_2 == -1)
	{
		return false;
	}
	if (uParam1->f_2 == -1)
	{
		return false;
	}
	if (uParam0->f_2 != uParam1->f_2)
	{
		return false;
	}
	if (uParam0->f_3 != uParam1->f_3)
	{
		return false;
	}
	if (uParam0->f_4 != -1 && uParam1->f_1 != -1)
	{
		if (uParam0->f_1 == uParam1->f_1 && uParam0->f_4 == uParam1->f_4)
		{
			return true;
		}
		return false;
	}
	if (uParam0->f_5 == -1)
	{
		return false;
	}
	if (uParam1->f_5 == -1)
	{
		return false;
	}
	if (uParam0->f_5 != uParam1->f_5)
	{
		return false;
	}
	if (uParam0->f_7 != uParam1->f_7)
	{
		return false;
	}
	if (uParam0->f_8 != uParam1->f_8)
	{
		return false;
	}
	if (uParam0->f_8.f_1 != uParam1->f_8.f_1)
	{
		return false;
	}
	if (!func_907(uParam0->f_8.f_5, uParam1->f_8.f_5))
	{
		return false;
	}
	if (uParam0->f_8.f_5.f_2 != uParam1->f_8.f_5.f_2)
	{
		return false;
	}
	if (uParam0->f_8.f_5.f_3 != uParam1->f_8.f_5.f_3)
	{
		return false;
	}
	if (uParam0->f_8.f_5.f_4 != uParam1->f_8.f_5.f_4)
	{
		return false;
	}
	if (uParam0->f_8.f_5.f_5 != uParam1->f_8.f_5.f_5)
	{
		return false;
	}
	if (!func_907(uParam0->f_8.f_5.f_6, uParam1->f_8.f_5.f_6))
	{
		return false;
	}
	if (uParam0->f_8.f_5.f_8 != uParam1->f_8.f_5.f_8)
	{
		return false;
	}
	if (uParam0->f_8.f_5.f_9 != uParam1->f_8.f_5.f_9)
	{
		return false;
	}
	return true;
}

void func_1067(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_1068(var uParam0)
{
	return *uParam0;
}

bool func_1069(var uParam0)
{
	if (func_18(*uParam0))
	{
		return true;
	}
	if (uParam0->f_2 != 0)
	{
		if (uParam0->f_3 != -1)
		{
			return true;
		}
		if (uParam0->f_4 != -1)
		{
			return true;
		}
		if (uParam0->f_5 != -1)
		{
			return true;
		}
	}
	return false;
}

int func_1070(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;

	iVar0 = func_1220(iParam1);
	iVar1 = ((iVar0 + Global_1198046.f_3[iParam1]) - 1);
	if (Global_1198046.f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_1221(iParam1)) - 1);
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
			if (func_907(Global_1198046.f_231[iVar6 /*15*/].f_5, *uParam0))
			{
				return iVar6;
			}
		}
		if (bVar3)
		{
			if (Global_1198046.f_231[iVar6 /*15*/].f_5.f_2 == uParam0->f_2 && Global_1198046.f_231[iVar6 /*15*/].f_5.f_3 == uParam0->f_3)
			{
				return iVar6;
			}
		}
		if (bVar4)
		{
			if (Global_1198046.f_231[iVar6 /*15*/].f_5.f_2 == uParam0->f_2 && Global_1198046.f_231[iVar6 /*15*/].f_5.f_4 == uParam0->f_4)
			{
				return iVar6;
			}
		}
		if (bVar5)
		{
			if (Global_1198046.f_231[iVar6 /*15*/].f_5.f_2 == uParam0->f_2 && Global_1198046.f_231[iVar6 /*15*/].f_5.f_5 == uParam0->f_5)
			{
				return iVar6;
			}
		}
		iVar6++;
	}
	return -1;
}

bool func_1071(int iParam0)
{
	int iVar0;

	iVar0 = func_846(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (!GANG::_0x93A91A351A07360E(iVar0))
	{
		return false;
	}
	return true;
}

void func_1072(struct<2> Param0)
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
	func_1222(&(Global_1107216.f_33.f_513), &Var0, 0, 0, 0, 0, 0);
}

void func_1073(int iParam0, int iParam1)
{
	Global_1107216.f_33[iParam0 /*16*/].f_3.f_7 = iParam1;
}

var func_1074(int iParam0)
{
	return Global_1107216.f_33[iParam0 /*16*/].f_3.f_7;
}

int func_1075()
{
	return Global_1901947.f_308.f_41;
}

bool func_1076(struct<2> Param0, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar0 = func_846(iParam2);
	bVar1 = (iVar0 != 0 && GANG::_0x93A91A351A07360E(iVar0));
	if (Global_1109804.f_18)
	{
		iVar2 = func_1223(Param0);
		if (func_1224(iVar2, bVar1))
		{
			func_1072(Param0);
			return true;
		}
	}
	else
	{
		func_1072(Param0);
		return true;
	}
	return false;
}

int func_1077(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (!Global_1296859.f_22[iVar1])
		{
		}
		else
		{
			iVar0 = (iVar0 || Global_1128574[iVar1 /*56*/].f_1[iParam0]);
		}
		iVar1++;
	}
	return iVar0;
}

void func_1078(int iParam0)
{
	Global_1107216.f_33[iParam0 /*16*/].f_1 = -1;
}

int func_1079()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_846(iVar0) == 0)
		{
		}
		else if (!GANG::_0x93A91A351A07360E(func_846(iVar0)))
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

var func_1080()
{
	return Global_1107216.f_750.f_1;
}

void func_1081()
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
	if (!func_651())
	{
		return;
	}
	iVar32 = NETWORK::_NETWORK_GET_SESSION_HOST();
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar32))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar32))
	{
		return;
	}
	SCRIPTS::_0x31010318BA9897AC(&uVar31, iVar32);
	Var0.f_10 = PLAYER::PLAYER_ID();
	Var0.f_11 = GANG::_0x901E0DC25080C8B9(Var0.f_10);
	Var0.f_4 = 9;
	func_444();
	func_1094(&Var0, uVar31);
}

void func_1082(int iParam0)
{
	func_1225(iParam0);
	func_1078(iParam0);
	func_1226(iParam0);
}

int func_1083(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_1077(iParam0);
	if (iVar0 & 8 != 0)
	{
		return 0;
	}
	if (Global_1109804.f_19)
	{
		if (!func_908(iParam0, 4))
		{
			if (NETWORK::_NETWORK_SESSION_GET_FLAGS() & 9 != 0)
			{
				return 0;
			}
		}
	}
	else if (NETWORK::_NETWORK_SESSION_GET_FLAGS() & 9 != 0)
	{
		return 0;
	}
	func_1226(iParam0);
	func_1078(iParam0);
	*uParam1 = 0;
	return 1;
}

int func_1084(int iParam0, var uParam1)
{
	func_1226(iParam0);
	func_1078(iParam0);
	*uParam1 = 0;
	return 1;
}

struct<2> func_1085()
{
	return Global_1109804.f_11;
}

int func_1086()
{
	return Global_1109804.f_11.f_3;
}

void func_1087(int iParam0)
{
	Global_1109804.f_21.f_12.f_1 = iParam0;
}

void func_1088(int iParam0)
{
	Global_1109804.f_21.f_12.f_2 = iParam0;
}

void func_1089(int iParam0)
{
	Global_1109804.f_21.f_12.f_3 = iParam0;
}

void func_1090()
{
	func_1227(&(Global_1109804.f_21.f_12));
}

void func_1091()
{
	Global_1128574[PLAYER::PLAYER_ID() /*56*/].f_34 = 0;
}

int func_1092(int iParam0)
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

bool func_1093(var uParam0, int iParam1)
{
	return (uParam0->f_3 && iParam1) != 0;
}

void func_1094(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 9;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 31, 32, &uParam1);
}

void func_1095(int iParam0)
{
	Global_1109804.f_21.f_109.f_1 = iParam0;
}

void func_1096(int iParam0)
{
	Global_1109804.f_21.f_109 = iParam0;
}

void func_1097(int iParam0)
{
	Global_1109804.f_21.f_109.f_2 = iParam0;
}

void func_1098(struct<2> Param0)
{
	Global_1109804.f_21.f_109.f_3 = { Param0 };
}

void func_1099(int iParam0)
{
	Global_1109804.f_21.f_109.f_5 = iParam0;
}

void func_1100(int iParam0)
{
	Global_1109804.f_21.f_109.f_6 = iParam0;
}

void func_1101(int iParam0)
{
	Global_1109804.f_21.f_109.f_7 = iParam0;
}

void func_1102(int iParam0)
{
	Global_1109804.f_21.f_109.f_6 = iParam0;
}

void func_1103(int iParam0)
{
	MISC::_COPY_MEMORY(&(Global_1109804.f_21.f_109.f_9), iParam0, 4);
}

bool func_1104(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 36);
}

int func_1105(int iParam0)
{
	return Global_1107216.f_33[iParam0 /*16*/].f_3;
}

bool func_1106(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 62);
}

int func_1107(int iParam0)
{
	return Global_1107216.f_33[iParam0 /*16*/].f_3.f_1;
}

bool func_1108(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 90);
}

int func_1109(int iParam0)
{
	return Global_1107216.f_33[iParam0 /*16*/].f_3.f_3;
}

bool func_1110()
{
	return Global_1109804.f_21.f_109.f_8;
}

int func_1111(int iParam0)
{
	return Global_1109804.f_5737[iParam0 /*5*/];
}

int func_1112(int iParam0)
{
	return func_1228(iParam0);
}

void func_1113(int iParam0, var uParam1)
{
	MISC::_COPY_MEMORY(uParam1, &(Global_1107216.f_33[iParam0 /*16*/].f_3.f_9), 4);
}

Vector3 func_1114(int iParam0)
{
	return Global_1116202[iParam0 /*42*/].f_7.f_1;
}

var func_1115(int iParam0)
{
	return Global_1116202[iParam0 /*42*/].f_7;
}

void func_1116(var uParam0, var uParam1, vector3 vParam2, var uParam5)
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
		else if (func_1229(iVar12, vParam2, uParam5))
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

void func_1117(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1109804.f_6371.f_3[iParam1 /*9*/]), iParam0, 5);
}

void func_1118(var uParam0, int iParam1)
{
	MISC::_COPY_MEMORY(uParam0, &(Global_1109804.f_6371.f_3[iParam1 /*9*/]), 5);
}

void func_1119(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1109804.f_6371.f_3[iParam1 /*9*/].f_5), iParam0, 4);
}

void func_1120(var uParam0, int iParam1)
{
	MISC::_COPY_MEMORY(uParam0, &(Global_1109804.f_6371.f_3[iParam1 /*9*/].f_5), 4);
}

void func_1121(int iParam0)
{
	Global_1139381.f_4912[iParam0 /*3*/] = UNLOCK::_UNLOCK_IS_NEW(Global_1835011[iParam0 /*72*/].f_3);
	Global_1139381.f_4912[iParam0 /*3*/].f_2 = UNLOCK::_UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*72*/].f_3);
	Global_1139381.f_4912[iParam0 /*3*/].f_1 = UNLOCK::_UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*72*/].f_3);
}

int func_1122(struct<2> Param0)
{
	return func_19(Param0);
}

int func_1123(bool bParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1102219.f_16)
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
		func_1230(&Global_0, 8);
	}
	func_1230(&Global_0, 1);
	return 1;
}

void func_1124(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;

	iVar0 = func_1231(func_1130(Param0));
	iVar1 = func_1122(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_58() == 0)
	{
		Var2 = Global_265377.f_124517.f_71.f_17;
		func_1232(Param0, &Var2);
	}
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam4))
	{
		Var2.f_4 = iParam4;
		Var2.f_3 = iParam5;
	}
	else
	{
		Var2.f_4 = 255;
		Var2.f_3 = 0;
	}
	STATS::_0xD5910ECF81A2278C(iVar0, iVar1, iParam2, &Var2);
}

void func_1125(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_1233(&Global_1940258, 8388608);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_1234(&Global_1940258, 8388608);
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

void func_1126(bool bParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2[24];

	iVar0 = 0;
	while (iVar0 <= 58)
	{
		iVar1 = func_1235(iVar0, 1);
		if ((iVar1 == joaat("CRIME_MURDER_PLAYER") || iVar1 == joaat("CRIME_MURDER_PLAYER_HORSE")) || iVar1 == joaat("CRIME_TRAMPLE_PLAYER"))
		{
		}
		else
		{
			if (bParam0)
			{
				StringCopy(&cVar2, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_1236(cVar2);
			}
			else
			{
				func_1237();
			}
			LAW::_0xF611DE44AEB36A1D(iVar1, bParam0);
		}
		iVar0++;
	}
}

int func_1127(bool bParam0)
{
	if (!bParam0 && func_763(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

void func_1128(int iParam0)
{
	Global_1900736 = (Global_1900736 || iParam0);
}

int func_1129(struct<2> Param0)
{
	return func_1239(func_1238(Param0));
}

int func_1130(var uParam0, var uParam1)
{
	return uParam0;
}

int func_1131(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_677(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1240(iVar0);
}

int func_1132(struct<2> Param0, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;

	if (Global_1071686.f_19550 >= 32)
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
	if (Global_1071686.f_19550 == 0)
	{
		Global_1071686.f_19550.f_1[Global_1071686.f_19550 /*3*/] = { vVar6 };
		Global_1071686.f_19550++;
		return 0;
	}
	iVar9 = 0;
	while (iVar9 < Global_1071686.f_19550)
	{
		func_77(Global_1071686.f_19550.f_1[iVar9 /*3*/], &vVar3);
		if (vVar0.x == vVar3.x)
		{
			Global_1071686.f_19550.f_1[iVar9 /*3*/] = { vVar6 };
			return iVar9;
		}
		else if (vVar0.x > vVar3.x)
		{
			iVar9++;
		}
		else if (vVar0.x < vVar3.x)
		{
			func_1241(iVar9);
			Global_1071686.f_19550.f_1[iVar9 /*3*/] = { vVar6 };
			return iVar9;
		}
	}
	if (Global_1071686.f_19550 < 31)
	{
		iVar9 = Global_1071686.f_19550;
		Global_1071686.f_19550.f_1[iVar9 /*3*/] = { vVar6 };
		Global_1071686.f_19550++;
		if (Global_1071686.f_19550 > 32)
		{
			Global_1071686.f_19550 = 32;
		}
		return iVar9;
	}
	return -1;
}

void func_1133()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	while (iVar0 < Global_1071686.f_19550)
	{
		if (func_77(Global_1071686.f_19550.f_1[iVar0 /*3*/], &vVar1))
		{
		}
		iVar0++;
	}
}

int func_1134(int iParam0)
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

int func_1135(int iParam0)
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

bool func_1136(var uParam0)
{
	var uVar0;

	MISC::_COPY_MEMORY(uParam0, &uVar0, 5);
	if (!func_1242(1))
	{
		return false;
	}
	*uParam0 = Global_1071686.f_28448[51 /*4*/].f_3;
	return true;
}

bool func_1137(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;

	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = iParam3;
	uVar0 = uParam0->f_1;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0))
	{
		uParam0->f_1 = uVar0;
		return false;
	}
	return true;
}

int func_1138(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	return DATAFILE::_DATAFILE_GET_NUM_NODES(uParam0);
}

struct<8> func_1139(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_1243(&uParam0, 69, 1);
}

var func_1140(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_1244(&uParam0, 93, 1, -1);
}

var func_1141(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_1245(&uParam0, 94, 1);
}

int func_1142(struct<5> Param0, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	if (!func_1137(&Param0, 28, iParam5, 0, 1))
	{
		return 0;
	}
	iVar1 = func_1138(&Param0, 3);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar2 = 0;
		iVar3 = 0;
		iVar2 = func_1246(Param0, iVar0);
		switch (iParam5)
		{
			case joaat("ANIM_SCENE"):
				iVar3 = func_1248(func_1247(iVar2));
				break;
			case -952694274:
				iVar3 = func_1248(func_1249(iVar2));
				break;
			case joaat("PARTICLE"):
				iVar3 = func_1248(func_1250(iVar2));
				break;
			case joaat("PLAYLIST"):
				iVar3 = func_1248(func_1251(iVar2));
				break;
			default:
				break;
		}
		uVar4 = (uVar4 || iVar3);
		iVar0++;
	}
	return uVar4;
}

struct<8> func_1143(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_1243(&uParam0, 87, 1);
}

int func_1144(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_1252(&uParam0, 87, 1);
}

Vector3 func_1145(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_1253(&uParam0, 88, 1);
}

Vector3 func_1146(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_1253(&uParam0, 68, 1);
}

int func_1147(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_1254(func_1252(&uParam0, 89, 1));
}

var func_1148(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_1245(&uParam0, 90, 1);
}

Vector3 func_1149(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_1253(&uParam0, 91, 1);
}

var func_1150(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_1244(&uParam0, 86, 0, -1);
}

var func_1151(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_1244(&uParam0, 83, 0, -1);
}

var func_1152(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_1244(&uParam0, 85, 0, -1);
}

var func_1153(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_1244(&uParam0, 84, 0, -1);
}

var func_1154(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_1244(&uParam0, 92, 1, -1);
}

void func_1155(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = { 0f, 0f, 0f };
}

void func_1156(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_1157(var uParam0)
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

char* func_1158(int iParam0)
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

bool func_1159(int iParam0)
{
	return iParam0 != 0;
}

int func_1160(struct<2> Param0, var uParam2, var uParam3, var uParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;

	uVar5 = Param0.f_1;
	*iParam5 = func_1255(&Param0);
	iVar1 = func_798(&Param0, 5);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Param0.f_1 = uVar5;
		if (!func_641(&Param0, 33, iVar0, 0, 1))
		{
		}
		else
		{
			iVar4 = func_997(&Param0, 60, 1);
			switch (*iParam5)
			{
				case joaat("AWARD"):
					iVar2 = func_1256(iVar4);
					break;
				case joaat("AWARD_PROCESS"):
					iVar2 = func_1257(iVar4);
					break;
				case joaat("PREREQUISITE"):
					iVar2 = func_1258(iVar4);
					break;
				case joaat("MATCHMAKING"):
					iVar2 = func_1259(iVar4);
					break;
				case joaat("CHALLENGE"):
					iVar2 = func_1260(iVar4);
					break;
				case joaat("REPLAY"):
					iVar2 = func_1261(iVar4);
					break;
				default:
					break;
			}
			uVar3 = (uVar3 || iVar2);
		}
		iVar0++;
	}
	return uVar3;
}

void func_1161(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (RDR_LOCAL_LOAD_S >= 11)
	{
		return;
	}
}

void func_1162(var uParam0, int iParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_604(uParam0))
	{
		return;
	}
	if (Global_1293346.f_2011 < 20)
	{
		Global_1293346.f_2011++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1293346.f_2011.f_1[iVar0 /*24*/] = { Global_1293346.f_2011.f_1[iVar0 + 1 /*24*/] };
			iVar0++;
		}
	}
	Var1.f_7.f_1 = 11;
	Var1.f_7.f_16 = 255;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_7 = { Param2 };
	Var1.f_6 = 1;
	Global_1293346.f_2011.f_1[(Global_1293346.f_2011 - 1) /*24*/] = { Var1 };
}

int func_1163(var uParam0)
{
	return func_997(uParam0, 79, 1);
}

int func_1164(var uParam0)
{
	return func_997(uParam0, 80, 1);
}

int func_1165(var uParam0)
{
	return func_997(uParam0, 81, 1);
}

var func_1166(var uParam0)
{
	return func_1012(uParam0, 82, 1);
}

void func_1167(struct<5> Param0, var uParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	uVar4 = Param0.f_1;
	iVar1 = func_798(&Param0, 4);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar2 = 0;
		Param0.f_1 = uVar4;
		if (!func_641(&Param0, 31, iVar0, 0, 1))
		{
			return;
		}
		iVar2 = func_1160(Param0, &iVar3);
		switch (iVar3)
		{
			case joaat("CHALLENGE"):
				uParam5->f_5 = iVar2;
				break;
			default:
				break;
		}
		iVar0++;
	}
}

void func_1168(int iParam0)
{
	if (!func_489(iParam0))
	{
		return;
	}
	Global_1128574[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/] = iParam0;
}

bool func_1169()
{
	return func_18(Global_1051213);
}

void func_1170(int iParam0)
{
	if (!func_1104(iParam0))
	{
		return;
	}
	func_1262(iParam0);
}

void func_1171()
{
	if (!func_1169())
	{
		return;
	}
	if (!func_18(Global_1051213))
	{
		return;
	}
	func_288(&Global_1051213);
}

void func_1172(int iParam0)
{
	if (func_505(&Global_1130592, iParam0, 1))
	{
	}
}

void func_1173(int iParam0, int iParam1)
{
	Global_1130592.f_2[iParam0] = iParam1;
}

struct<2> func_1174(int iParam0)
{
	return Global_1210161.f_1[iParam0 /*10*/].f_4;
}

void func_1175(int iParam0, struct<2> Param1)
{
	Global_1210161.f_1[iParam0 /*10*/].f_4 = { Param1 };
	Global_1210161.f_1[iParam0 /*10*/].f_6 = func_19(Param1);
}

bool func_1176(int iParam0)
{
	bool bVar0;

	bVar0 = !func_1264(func_1174(iParam0), func_1263(iParam0), 0);
	return bVar0;
}

void func_1177(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	MISC::CLEAR_BIT(&(Global_1207784[iVar0 /*72*/][iParam0]), iParam1);
}

int func_1178()
{
	return Global_1102219.f_3673;
}

int func_1179(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 7)
	{
		return 255;
	}
	return Global_1102219.f_3675[iParam0];
}

void func_1180(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<18> Var1;

	if (!func_18(Param0))
	{
		return;
	}
	if (!func_943(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_1265(Param0);
	}
	if (!func_18(func_210(0)))
	{
		func_946(Param0, 3);
		func_1125(bParam3);
		func_1126(!bParam4);
		func_1266(Param0, -1);
		if (bParam2 && !func_517(2))
		{
			func_1230(&Global_0, 1024);
		}
		func_1128(1);
	}
	else
	{
		func_1266(Param0, -1);
		func_946(Param0, 4);
		func_1267(Param0, 0);
	}
	Global_1051252.f_45.f_1 = 1;
	iVar0 = func_1130(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		if (func_1268(Param0, &Var1))
		{
			MISC::_0x1096603B519C905F(&(Var1.f_17));
		}
	}
}

void func_1181(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_1193(iParam0, iParam1))
	{
		return;
	}
	iVar0 = func_1269(iParam0, iParam1);
	if (!SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
	{
		return;
	}
	SCRIPTS::_0x7DE4643157AD646C(iVar0);
}

void func_1182(int iParam0, int iParam1)
{
	func_1189(iParam0, iParam1);
	func_1188(iParam0, iParam1, -1);
}

void func_1183(int iParam0)
{
	func_288(&(Global_1210161.f_1[iParam0 /*10*/].f_4));
	Global_1210161.f_1[iParam0 /*10*/].f_6 = 0;
}

var func_1184(int iParam0)
{
	return Global_1198046.f_231.f_1066[iParam0 /*17*/];
}

var func_1185(int iParam0, int iParam1)
{
	return Global_1198046.f_231.f_1066[iParam0 /*17*/].f_8[iParam1 /*4*/].f_1;
}

var func_1186(int iParam0, int iParam1)
{
	return Global_1198046.f_2505[iParam0 /*6*/][iParam1 /*3*/];
}

int func_1187(int iParam0, int iParam1)
{
	return Global_1210161.f_1[iParam0 /*10*/][iParam1 /*3*/];
}

void func_1188(int iParam0, int iParam1, int iParam2)
{
	Global_1210161.f_1[iParam0 /*10*/][iParam1 /*3*/] = iParam2;
}

void func_1189(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_1195(iParam0, iParam1, iVar0);
		iVar0++;
	}
}

bool func_1190(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_1208(iParam0, iParam1);
	if (iVar0 == 2147483647)
	{
		return true;
	}
	vVar1 = { func_1270(PLAYER::PLAYER_ID()) };
	if (func_97(vVar1))
	{
		return false;
	}
	return func_721(vVar1, func_1216(iParam0, iParam1)) < IntToFloat(iVar0);
}

void func_1191(int iParam0, int iParam1, int iParam2)
{
	func_1044(iParam0, func_1271(iParam1, iParam2));
}

bool func_1192(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	struct<5> Var13;
	var uVar18;

	iVar0 = func_1185(iParam0, iParam1);
	iVar1 = func_1184(iParam0);
	if (func_1193(iParam0, iParam1))
	{
		return false;
	}
	if (NETWORK::_NETWORK_IS_SCRIPT_ACTIVE_HASH(iVar1, iVar0, true, 0))
	{
		return false;
	}
	if (func_838(iParam0, 8))
	{
		if (func_1199(iParam0, iParam1) != 4)
		{
			return false;
		}
	}
	SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(iVar1);
	if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iVar1))
	{
		if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(func_1272(iParam0)) <= 0)
		{
			return false;
		}
		if (func_838(iParam0, 64))
		{
			Var3.f_7 = -1;
			Var3.f_7.f_1 = -1;
			Var3.f_9 = 255;
			Var3 = iVar0;
			Var3.f_9 = func_1055(iParam0);
			Var3.f_1 = { func_1216(iParam0, iParam1) };
			Var3.f_5 = iParam0;
			Var3.f_7 = { func_1174(iParam0) };
			iVar2 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(iVar1, &Var3, 10, func_1272(iParam0));
		}
		else if (func_838(iParam0, 128))
		{
			Var13 = iVar0;
			Var13.f_1 = func_1273(iVar1);
			Var13.f_2 = Global_1198046.f_231.f_1066[iParam0 /*17*/].f_14;
			Var13.f_3 = Global_1198046.f_231.f_1066[iParam0 /*17*/].f_15;
			Var13.f_4 = Global_1198046.f_231.f_1066[iParam0 /*17*/].f_16;
			iVar2 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(iVar1, &Var13, 5, func_1272(iParam0));
		}
		else
		{
			iVar2 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(iVar1, &uVar18, 1, func_1272(iParam0));
		}
		func_1194(iParam0, iParam1, iVar2);
		SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iVar1);
		func_1274(iVar1, iVar0);
		return true;
	}
	return false;
}

bool func_1193(int iParam0, int iParam1)
{
	return SCRIPTS::_DOES_THREAD_EXIST(Global_1210161.f_1[iParam0 /*10*/][iParam1 /*3*/].f_2);
}

void func_1194(int iParam0, int iParam1, int iParam2)
{
	Global_1210161.f_1[iParam0 /*10*/][iParam1 /*3*/].f_2 = iParam2;
}

void func_1195(int iParam0, int iParam1, int iParam2)
{
	func_1177(iParam0, func_1271(iParam1, iParam2));
}

bool func_1196(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_838(iParam0, 1024))
	{
		return false;
	}
	iVar0 = func_1215(iParam0);
	if (iVar0 <= 0)
	{
		return false;
	}
	return func_721(Global_35, func_1216(iParam0, iParam1)) > IntToFloat(iVar0);
}

int func_1197(int iParam0, int iParam1)
{
	return Global_1210161.f_1[iParam0 /*10*/][iParam1 /*3*/].f_1;
}

void func_1198(int iParam0, int iParam1, int iParam2)
{
	if (!VOLUME::_0xA4A4359320345B34(iParam2))
	{
		Global_1210161.f_1[iParam0 /*10*/][iParam1 /*3*/].f_1 = 0;
		return;
	}
	Global_1210161.f_1[iParam0 /*10*/][iParam1 /*3*/].f_1 = iParam2;
}

int func_1199(int iParam0, int iParam1)
{
	return Global_1198046.f_2505[iParam0 /*6*/][iParam1 /*3*/].f_1;
}

void func_1200(int iParam0, int iParam1)
{
	func_1206(iParam0, iParam1);
	func_1049(iParam0, iParam1);
}

void func_1201(int iParam0, int iParam1, int iParam2)
{
	Global_1198046.f_2505[iParam0 /*6*/][iParam1 /*3*/].f_1 = iParam2;
}

int func_1202(int iParam0, int iParam1)
{
	return Global_1198046.f_231.f_1066[iParam0 /*17*/].f_8[iParam1 /*4*/].f_2;
}

int func_1203(int iParam0, int iParam1)
{
	return Global_1198046.f_2505[iParam0 /*6*/][iParam1 /*3*/].f_2;
}

void func_1204(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	struct<8> Var1;
	struct<2> Var10;
	int iVar12;

	if (func_1197(iParam0, iParam1) != 0 && !func_1275(func_1197(iParam0, iParam1)))
	{
		return;
	}
	iVar0 = 96;
	if (!bParam2)
	{
		iVar0 += 128;
	}
	if (func_1049(iParam0, iParam1))
	{
		Var1 = { func_1216(iParam0, iParam1) };
		Var1.f_4 = BUILTIN::TO_FLOAT(func_1202(iParam0, iParam1));
		Var1.f_5 = iVar0;
		Var1.f_6 = func_1276(iParam0);
		Var10 = { func_1174(iParam0) };
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
		func_1198(iParam0, iParam1, VOLUME::_0x183C0B6CFEFFCAE4(&Var1));
	}
}

bool func_1205(int iParam0, int iParam1)
{
	int iVar0;

	if (func_1203(iParam0, iParam1) != 0)
	{
		return true;
	}
	func_1277(iParam0, iParam1);
	func_1204(iParam0, iParam1, 1);
	iVar0 = func_1197(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return false;
	}
	if (!func_1278(iVar0))
	{
		return false;
	}
	func_1279(iParam0, iParam1, VOLUME::_0x351D71B8B72B858B(func_1197(iParam0, iParam1)));
	return true;
}

void func_1206(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1203(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return;
	}
	if (!VOLUME::_0xF6A8A652A6B186CD(iVar0))
	{
		func_1279(iParam0, iParam1, 0);
		return;
	}
	VOLUME::_0xFDFECC6EE4491E11(iVar0);
	func_1279(iParam0, iParam1, 0);
	func_1049(iParam0, iParam1);
}

void func_1207(int iParam0, int iParam1, int iParam2)
{
	Global_1198046.f_2505[iParam0 /*6*/][iParam1 /*3*/] = iParam2;
}

int func_1208(int iParam0, int iParam1)
{
	return Global_1198046.f_231.f_1066[iParam0 /*17*/].f_8[iParam1 /*4*/].f_3;
}

int func_1209(int iParam0)
{
	return Global_1198046.f_231.f_1066[iParam0 /*17*/].f_4;
}

bool func_1210(int iParam0)
{
	return Global_1902818 > iParam0;
}

bool func_1211(int iParam0, int iParam1, int iParam2)
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
		else if (func_1280(iParam0, iParam1, iVar0, iParam2))
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

bool func_1212(int iParam0, int iParam1)
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
		else if (!func_1281(iParam0, iParam1, iVar0))
		{
			return false;
		}
		iVar1++;
	}
	return true;
}

bool func_1213(int iParam0, int iParam1)
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
		else if (!func_1036(iParam0, iVar0, 2))
		{
		}
		else if (!func_1036(iParam0, iVar0, iParam1))
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

int func_1214(int iParam0)
{
	struct<15> Var0;
	struct<15> Var15;
	int iVar30;
	int iVar31;

	if (!func_849(iParam0))
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
	Var15 = { Global_1198046.f_231[iParam0 /*15*/] };
	Var0.f_1 = 0;
	Global_1198046.f_231[iParam0 /*15*/] = { Var0 };
	iVar30 = Var15;
	iVar31 = Var15.f_5.f_9;
	Global_1198046.f_13[iVar31] = (Global_1198046.f_13[iVar31] - 1);
	Global_1198046.f_8[iVar30] = (Global_1198046.f_8[iVar30] - 1);
	if (iVar30 != iVar31)
	{
		Global_1198046.f_18[iVar30] = (Global_1198046.f_18[iVar30] - 1);
	}
	if (func_1282(iParam0))
	{
		Global_1198046.f_23[iVar30] = (Global_1198046.f_23[iVar30] - 1);
	}
	return 1;
}

var func_1215(int iParam0)
{
	return Global_1198046.f_231.f_1066[iParam0 /*17*/].f_2;
}

Vector3 func_1216(int iParam0, int iParam1)
{
	return func_1283(Global_1198046.f_231.f_1066[iParam0 /*17*/].f_8[iParam1 /*4*/]);
}

void func_1217(int iParam0)
{
	Global_1198046.f_2505[iParam0 /*6*/].f_4 = 0;
	Global_1198046.f_2505[iParam0 /*6*/].f_5 = 255;
}

struct<40> func_1218(var uParam0, int iParam1)
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
	if (!func_1284(uParam0, iParam1))
	{
		return Var0;
	}
	Var40 = { uParam0->f_3[iParam1 /*40*/] };
	uParam0->f_3[iParam1 /*40*/] = { Var0 };
	return Var40;
}

void func_1219(var uParam0, int iParam1)
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
			if (uParam0->f_3[iVar3 /*40*/] != -1)
			{
			}
			else
			{
				if (uParam0->f_3[iVar3 /*40*/].f_4 != -1)
				{
					func_1218(uParam0, iVar3);
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
			if (uParam0->f_3[iVar4 /*40*/] != -1)
			{
			}
			else
			{
				func_1218(uParam0, iVar4);
				iVar2 = (iVar2 - 1);
				iVar1++;
			}
		}
		*uParam0 = iVar2;
	}
}

int func_1220(int iParam0)
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

int func_1221(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			if (Global_1198046.f_3[iParam0] * 2 <= 32)
			{
				return Global_1198046.f_3[iParam0] * 2;
			}
			return 32;
		case 2:
			if (Global_1198046.f_3[iParam0] * 2 <= 20)
			{
				return Global_1198046.f_3[iParam0] * 2;
			}
			return 20;
		case 3:
			if (Global_1198046.f_3[iParam0] * 2 <= 16)
			{
				return Global_1198046.f_3[iParam0] * 2;
			}
			return 16;
		default:
			break;
	}
	return 0;
}

int func_1222(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;

	if (func_1285(uParam0))
	{
		return 0;
	}
	if (!func_1286(&(uParam1->f_8)))
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
	iVar0 = func_1287(uParam0, uParam1);
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
			if (!func_1288(uParam1, bParam2, iParam3, iParam4, iParam5, iParam6))
			{
				return 0;
			}
			break;
	}
	uParam1->f_7 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	iVar1 = ((uParam0->f_1 + *uParam0) % uParam0->f_2);
	uParam1->f_4 = iVar1;
	uParam0->f_3[iVar1 /*40*/] = { *uParam1 };
	func_1067(&(uParam0->f_3[iVar1 /*40*/]), 0);
	*uParam0++;
	return 1;
}

int func_1223(struct<2> Param0)
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
		Var0 = { func_490(iVar2) };
		if (func_907(Var0, Param0))
		{
			iVar4 = func_853(iVar2);
			iVar5 = func_846(iVar2);
			if (iVar4 >= 1 && iVar4 <= 4)
			{
				if (iVar5 != 0 && GANG::_0x93A91A351A07360E(iVar5))
				{
					iVar3++;
				}
			}
		}
		iVar2++;
	}
	return iVar3;
}

bool func_1224(int iParam0, bool bParam1)
{
	if (iParam0 > 1)
	{
		return false;
	}
	if (iParam0 < 1)
	{
		return true;
	}
	if (bParam1)
	{
		return true;
	}
	return false;
}

void func_1225(int iParam0)
{
	Global_1107216.f_33[iParam0 /*16*/] = 0;
}

void func_1226(int iParam0)
{
	struct<10> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0.f_9.f_1 = -1;
	MISC::_COPY_MEMORY(&(Global_1107216.f_33[iParam0 /*16*/].f_3), &Var0, 13);
}

void func_1227(var uParam0)
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

var func_1228(int iParam0)
{
	return Global_1297717[iParam0 /*4*/].f_3;
}

bool func_1229(int iParam0, vector3 vParam1, float fParam4)
{
	return BUILTIN::VDIST(func_1270(iParam0), vParam1) <= fParam4;
}

void func_1230(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1231(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return joaat("UNLOCK_GROUP__MISSION_STORY");
		case 3:
			return joaat("UNLOCK_GROUP__MISSION_PROCEDURAL");
		case 4:
			return joaat("UNLOCK_GROUP__MISSION_FETCH");
		case 5:
			return joaat("UNLOCK_GROUP__MISSION_MINIGAME");
		case 8:
			return 634321112;
		case 7:
			return joaat("UNLOCK_GROUP__MISSION_UGC");
		case 6:
			return joaat("UNLOCK_GROUP__MISSION_FREE_MODE_EVENT");
		default:
			break;
	}
	return 0;
}

void func_1232(struct<2> Param0, var uParam2)
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
	iVar3 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (iVar3 == 0)
	{
		return;
	}
	switch (func_1130(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_1289(func_348(Param0));
			iVar5 = func_1290(iVar4);
			if (!func_1291(iVar5, 0))
			{
				return;
			}
			break;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (Global_1107216.f_33[iVar1 /*16*/] == iVar3)
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
	iVar0 = Global_1107216.f_33[iVar2 /*16*/].f_3.f_1;
	if (iVar0 == -1)
	{
		return;
	}
	uParam2->f_2 = Global_1116202[iVar0 /*42*/];
}

void func_1233(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_1234(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_1235(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("CRIME_ARSON");
		case 1:
			return joaat("CRIME_ASSAULT");
		case 2:
			return joaat("CRIME_ASSAULT_ANIMAL");
		case 3:
			return joaat("CRIME_ASSAULT_CORPSE");
		case 4:
			return joaat("CRIME_ASSAULT_HORSE");
		case 5:
			return joaat("CRIME_ASSAULT_LAW");
		case 6:
			return joaat("CRIME_ASSAULT_LIVESTOCK");
		case 7:
			return joaat("CRIME_BANK_ROBBERY");
		case 8:
			return joaat("CRIME_BURGLARY");
		case 9:
			return joaat("CRIME_CHEATING");
		case 10:
			return joaat("CRIME_DISTURBANCE");
		case 11:
			return joaat("CRIME_EXPLOSION");
		case 12:
			return joaat("CRIME_GRAVE_ROBBERY");
		case 13:
			return joaat("CRIME_HASSLE");
		case 14:
			return joaat("CRIME_HIT_AND_RUN");
		case 15:
			return joaat("CRIME_HIT_AND_RUN_LAW");
		case 16:
			return joaat("CRIME_INTIMIDATION");
		case 17:
			return joaat("CRIME_JACK_HORSE");
		case 18:
			return joaat("CRIME_JACK_VEHICLE");
		case 19:
			return joaat("CRIME_JAIL_BREAK");
		case 20:
			return joaat("CRIME_KIDNAPPING");
		case 21:
			return joaat("CRIME_KIDNAPPING_LAW");
		case 22:
			return joaat("CRIME_LASSO_ASSAULT");
		case 23:
			return joaat("CRIME_LAW_IS_THREATENED");
		case 24:
			return joaat("CRIME_LOITERING");
		case 25:
			return joaat("CRIME_LOOTING");
		case 26:
			return joaat("CRIME_MURDER");
		case 27:
			return joaat("CRIME_MURDER_ANIMAL");
		case 28:
			return joaat("CRIME_MURDER_HORSE");
		case 29:
			return joaat("CRIME_MURDER_LAW");
		case 30:
			return joaat("CRIME_MURDER_LIVESTOCK");
		case 31:
			return joaat("CRIME_PROPERTY_DESTRUCTION");
		case 32:
			return joaat("CRIME_RESIST_ARREST");
		case 33:
			return joaat("CRIME_ROBBERY");
		case 34:
			return joaat("CRIME_STAGECOACH_ROBBERY");
		case 35:
			return joaat("CRIME_STOLEN_GOODS");
		case 36:
			return joaat("CRIME_THEFT");
		case 37:
			return joaat("CRIME_THEFT_HORSE");
		case 38:
			return joaat("CRIME_THEFT_LIVESTOCK");
		case 39:
			return joaat("CRIME_THEFT_VEHICLE");
		case 40:
			return joaat("CRIME_THREATEN");
		case 41:
			return joaat("CRIME_THREATEN_LAW");
		case 42:
			return joaat("CRIME_TRAIN_ROBBERY");
		case 43:
			return joaat("CRIME_TRAMPLE");
		case 44:
			return joaat("CRIME_TRAMPLE_LAW");
		case 45:
			return joaat("CRIME_TRESPASSING");
		case 46:
			return joaat("CRIME_UNARMED_ASSAULT");
		case 47:
			return joaat("CRIME_VANDALISM");
		case 48:
			return joaat("CRIME_VANDALISM_VEHICLE");
		case 49:
			return joaat("CRIME_VEHICLE_DESTRUCTION");
		case 50:
			return joaat("CRIME_WANTED_LEVEL_UP_DEBUG_HIGH");
		case 51:
			return joaat("CRIME_WANTED_LEVEL_UP_DEBUG_LOW");
		case 52:
			return joaat("CRIME_ACCOMPLICE");
		case 53:
			return joaat("CRIME_EXPLOSION_POISON");
		case 54:
			return joaat("CRIME_MURDER_PLAYER");
		case 55:
			return joaat("CRIME_MURDER_PLAYER_HORSE");
		case 56:
			return joaat("CRIME_SELF_DEFENCE");
		case 57:
			return joaat("CRIME_TRAMPLE_PLAYER");
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

void func_1236(char[12] cParam0)
{
	Global_1939161.f_75.f_67 = { cParam0 };
}

void func_1237()
{
	StringCopy(&(Global_1939161.f_75.f_67), "", 24);
}

int func_1238(struct<2> Param0)
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
		if (func_907(Global_1900736.f_1[iVar0 /*2*/], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1239(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1900736.f_66 == 0)
	{
		return 0;
	}
	if (Global_1900736.f_66 == 1)
	{
		Global_1900736.f_66 = 0;
		func_288(&(Global_1900736.f_1[0 /*2*/]));
		return 1;
	}
	func_288(&(Global_1900736.f_1[iParam0 /*2*/]));
	Global_1900736.f_66 = (Global_1900736.f_66 - 1);
	func_1292(iParam0, Global_1900736.f_66);
	return 1;
}

int func_1240(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = iParam0;
	while (iVar0 < Global_1071686.f_19550)
	{
		if (iVar0 + 1 < 32)
		{
			Global_1071686.f_19550.f_1[iVar0 /*3*/] = { Global_1071686.f_19550.f_1[iVar0 + 1 /*3*/] };
		}
		iVar0++;
	}
	vVar1 = -1;
	vVar1.f_1 = -1;
	if (Global_1071686.f_19550 < 32)
	{
		Global_1071686.f_19550.f_1[Global_1071686.f_19550 /*3*/] = { vVar1 };
	}
	Global_1071686.f_19550 = (Global_1071686.f_19550 - 1);
	if (Global_1071686.f_19550 < 0)
	{
		Global_1071686.f_19550 = 0;
	}
	return 1;
}

int func_1241(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = (Global_1071686.f_19550 - 1);
	vVar1 = -1;
	vVar1.f_1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			Global_1071686.f_19550.f_1[iVar0 + 1 /*3*/] = { Global_1071686.f_19550.f_1[iVar0 /*3*/] };
		}
		iVar0 = (iVar0 - 1);
	}
	Global_1071686.f_19550.f_1[iParam0 /*3*/] = { vVar1 };
	Global_1071686.f_19550++;
	if (Global_1071686.f_19550 > 32)
	{
		Global_1071686.f_19550 = 32;
	}
	return 1;
}

bool func_1242(int iParam0)
{
	if (!DATAFILE::_0x7907969497EA92F5(Global_1071686.f_28448[51 /*4*/].f_3))
	{
		return false;
	}
	if (!DATAFILE::_0x603AC35FD4602C76(Global_1071686.f_28448[51 /*4*/].f_3))
	{
		return false;
	}
	return true;
}

struct<8> func_1243(var uParam0, int iParam1, int iParam2)
{
	struct<8> Var0;

	uParam0->f_2 = iParam1;
	if (!DATAFILE::_DATAFILE_GET_STRING(&Var0, uParam0))
	{
	}
	return Var0;
}

int func_1244(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	uParam0->f_2 = iParam1;
	if (!DATAFILE::_DATAFILE_GET_INT(&iVar0, uParam0))
	{
		iVar0 = iParam3;
	}
	return iVar0;
}

var func_1245(var uParam0, int iParam1, int iParam2)
{
	var uVar0;

	uParam0->f_2 = iParam1;
	if (!DATAFILE::_DATAFILE_GET_FLOAT(&uVar0, uParam0))
	{
	}
	return uVar0;
}

int func_1246(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	if (!func_1137(&uParam0, 30, iParam5, 0, 1))
	{
		return 0;
	}
	return func_1252(&uParam0, 61, 1);
}

int func_1247(int iParam0)
{
	switch (iParam0)
	{
		case -1813649426:
			return 1;
		case -1728078503:
			return 2;
		case 664704845:
			return 4;
		case -656485570:
			return 8;
		case 856889675:
			return 16;
		case -40729341:
			return 32;
		case 513761045:
			return 64;
		case -608370326:
			return 128;
		case joaat("ASF_BLOCK_SKIPPING"):
			return 256;
		case -1138842803:
			return 512;
		case 1959327570:
			return 1024;
		case joaat("ASF_ENABLE_LETTER_BOX"):
			return 2048;
		case -1303182884:
			return 4096;
		case 1317645850:
			return 8192;
		case 2020911072:
			return 16384;
		case 1930555512:
			return 32768;
		default:
			break;
	}
	return 0;
}

int func_1248(int iParam0)
{
	return iParam0;
}

int func_1249(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ASSE_GIVE_OWNERSHIP"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1250(int iParam0)
{
	switch (iParam0)
	{
		case -1420685820:
			return 1;
		case -445480404:
			return 2;
		case -138533181:
			return 4;
		case 675169979:
			return 16;
		case 1324736666:
			return 8;
		case 74623641:
			return 64;
		default:
			break;
	}
	return 0;
}

int func_1251(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MALE"):
			return 1;
		case joaat("FEMALE"):
			return 2;
		case joaat("STANDING"):
			return 4;
		case joaat("CROUCHING"):
			return 8;
		default:
			break;
	}
	return 0;
}

int func_1252(var uParam0, int iParam1, int iParam2)
{
	var uVar0;

	uParam0->f_2 = iParam1;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, uParam0))
	{
	}
	return uVar0;
}

Vector3 func_1253(var uParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	uParam0->f_2 = iParam1;
	if (!DATAFILE::_DATAFILE_GET_VECTOR(&vVar0, uParam0))
	{
	}
	return vVar0;
}

int func_1254(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ID_SKEL_ROOT"):
			return 0;
		case joaat("ID_SKEL_SPINE_ROOT"):
			return 11569;
		case joaat("ID_SKEL_SPINE0"):
			return 14410;
		case joaat("ID_SKEL_SPINE1"):
			return 14411;
		case joaat("ID_SKEL_SPINE2"):
			return 14412;
		case joaat("ID_SKEL_SPINE3"):
			return 14413;
		case joaat("ID_SKEL_SPINE4"):
			return 14414;
		case joaat("ID_SKEL_SPINE5"):
			return 14415;
		case joaat("ID_SKEL_SPINE6"):
			return 14416;
		case joaat("ID_SKEL_NECK0"):
			return 14283;
		case joaat("ID_SKEL_NECK1"):
			return 14284;
		case joaat("ID_SKEL_NECK2"):
			return 14285;
		case joaat("ID_SKEL_HEAD"):
			return 21030;
		default:
			break;
	}
	return -1;
}

int func_1255(var uParam0)
{
	return func_997(uParam0, 60, 1);
}

int func_1256(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CHECK_MAX_CLAIMS"):
			return 1;
		case joaat("ONLY_INIT"):
			return 2;
		case joaat("ONLY_ON_WIN"):
			return 4;
		case joaat("ONLY_UNLOCKED_IN_FLOW"):
			return 8;
		default:
			break;
	}
	return 0;
}

int func_1257(int iParam0)
{
	switch (iParam0)
	{
		case joaat("INCREMENT_DIFFICULTY"):
			return 2;
		case joaat("INCREMENT_MISSION"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1258(int iParam0)
{
	switch (iParam0)
	{
		case joaat("IGNORE_FOR_MISSION_SELECTION"):
			return 1;
		case joaat("IGNORE_FOR_REPLAY_AVAILABILITY"):
			return 2;
		default:
			break;
	}
	return 0;
}

int func_1259(int iParam0)
{
	switch (iParam0)
	{
		case joaat("LOCKED_TO_GANG"):
			return 1;
		case 236229850:
			return 2;
		case joaat("EXCLUDE_IN_PROGRESS"):
			return 4;
		case joaat("UGC_SKIP_LOBBY"):
			return 1024;
		case joaat("HIDE_SIDEMENU"):
			return 268435456;
		case joaat("HIDE_HELPTEXT_CANCEL_MSG"):
			return 536870912;
		default:
			break;
	}
	return 0;
}

int func_1260(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ONLY_ON_WIN"):
			return 1;
		case joaat("ONLY_UNLOCKED_IN_FLOW"):
			return 2;
		default:
			break;
	}
	return 0;
}

int func_1261(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ONLY_ON_WIN"):
			return 1;
		case joaat("ONLY_IN_FLOW"):
			return 2;
		default:
			break;
	}
	return 0;
}

void func_1262(int iParam0)
{
	func_288(&(Global_1118808[iParam0 /*35*/].f_16));
}

int func_1263(int iParam0)
{
	if (!func_849(iParam0))
	{
		return 0;
	}
	return Global_1198046.f_231[iParam0 /*15*/].f_5.f_8;
}

bool func_1264(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265377.f_124517.f_135 & 8 != 0)
	{
		Global_1071686.f_28351 = 1;
		return true;
	}
	if (func_18(Global_1051213) && !func_907(Global_1051213, Param0))
	{
		Global_1071686.f_28351 = 2;
		return true;
	}
	if (iParam2 != 0 && func_719(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_1293(iParam3, 255))
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
	if (func_355())
	{
		Global_1071686.f_28351 = 7;
		return true;
	}
	if (Global_1572887.f_7 & 1 != 0)
	{
		if (!func_18(Global_1051213))
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

void func_1265(struct<2> Param0)
{
	struct<32> Var0;

	if (func_1122(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_1122(Param0)))
	{
	}
	else
	{
		STATS::_0xB2A38826E5886E83(func_1122(Param0), Global_265377.f_124517.f_71.f_17);
		if (func_1268(Param0, &Var0))
		{
			if (Var0.f_29 == joaat("RACE_IMPROMPTU"))
			{
				STATS::_0xF21A5D66874FCEDD(Var0.f_2, 0, joaat("RACE"));
			}
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_29, 0);
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_30, 0);
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_31, 0);
		}
	}
}

int func_1266(struct<2> Param0, int iParam2)
{
	int iVar0;

	iVar0 = func_1238(Param0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1900736.f_66 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1900736.f_66;
	func_1294(Param0, iVar0);
	Global_1900736.f_66++;
	if (iParam2 < 0 || iParam2 >= Global_1900736.f_66)
	{
		return iVar0;
	}
	func_1292(iVar0, iParam2);
	return iParam2;
}

int func_1267(struct<2> Param0, int iParam2)
{
	int iVar0;

	if (!func_18(Param0))
	{
		return 0;
	}
	iVar0 = func_1238(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	if (!func_1295(Param0, func_210(0), iParam2))
	{
		func_946(func_210(0), 3);
		func_946(func_210(iVar0), 4);
		return 0;
	}
	func_1292(iVar0, 0);
	func_946(func_210(0), 3);
	func_946(func_210(1), 4);
	return 1;
}

bool func_1268(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_77(Param0, &vVar0);
	if (func_1296(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

int func_1269(int iParam0, int iParam1)
{
	return Global_1210161.f_1[iParam0 /*10*/][iParam1 /*3*/].f_2;
}

Vector3 func_1270(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

int func_1271(int iParam0, int iParam1)
{
	return (8 + (iParam0 * 2 + iParam1));
}

var func_1272(int iParam0)
{
	return Global_1198046.f_231.f_1066[iParam0 /*17*/].f_1;
}

int func_1273(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case joaat("NB_ANIMAL_ATTACK"):
			return 1;
		case joaat("NB_ARROWHEAD_INJURY"):
			return 2;
		case joaat("NB_EGG_PROTECTOR"):
			return 3;
		case joaat("NB_GRAVEROBBER"):
			return 4;
		case joaat("NB_KIDNAPPED"):
			return 6;
		case joaat("NB_PHOTOGRAPHY"):
			return 7;
		case joaat("NB_RIVAL_COLLECTOR"):
			return 5;
		case joaat("NB_RUNAWAY_WAGON"):
			return 11;
		case joaat("NB_TIED_UP_PED"):
			return 8;
		case joaat("NB_TREASURE_HUNTER"):
			return 9;
		case joaat("NB_TREE_MAP"):
			return 10;
		case joaat("NB_HOBO_DOG"):
			return 12;
		case joaat("NB_WILDMAN"):
			return 13;
		case joaat("NB_DUEL"):
			return 14;
		case joaat("NB_MOONSHINE_CAMP"):
			return 15;
		case joaat("NB_BEGGAR"):
			return 16;
		case joaat("NB_STALKING_HUNTER"):
			return 17;
		case joaat("NB_SLUMPED_HUNTER"):
			return 18;
		case joaat("NB_CRASHED_WAGON"):
			return 19;
		case joaat("NB_SUSPENSION_TRAP"):
			return 20;
		case joaat("LA_ALLIGATOR"):
			return 31;
		case joaat("LA_BEAR"):
			return 21;
		case joaat("LA_BEAVER"):
			return 28;
		case joaat("LA_BOAR"):
			return 24;
		case joaat("LA_BISON"):
			return 25;
		case joaat("LA_COUGAR"):
			return 22;
		case joaat("LA_PANTHER"):
			return 23;
		case joaat("LA_COYOTE"):
			return 29;
		case joaat("LA_FOX"):
			return 26;
		case joaat("LA_MOOSE"):
			return 30;
		case joaat("LA_WOLF"):
			return 27;
		case joaat("LA_BUCK"):
			return 32;
		case joaat("LA_RAM"):
			return 33;
		case joaat("LA_ELK"):
			return 34;
		default:
			break;
	}
	return 0;
}

void func_1274(int iParam0, int iParam1)
{
	int iVar0;

	if (Global_1051252.f_80.f_101 >= 10)
	{
		return;
	}
	iVar0 = func_1297(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return;
	}
	StringCopy(&(Global_1051252.f_80[Global_1051252.f_80.f_101 /*10*/]), "HashOnlyScript", 64);
	Global_1051252.f_80[Global_1051252.f_80.f_101 /*10*/].f_8 = iParam0;
	Global_1051252.f_80[Global_1051252.f_80.f_101 /*10*/].f_9 = iParam1;
	Global_1051252.f_80.f_101++;
	Global_1051252.f_45.f_1 = 1;
}

bool func_1275(int iParam0)
{
	if (!VOLUME::_0xA4A4359320345B34(iParam0))
	{
		return true;
	}
	if (VOLUME::_0xB33A604345F58202(iParam0) == 4)
	{
		return true;
	}
	return false;
}

var func_1276(int iParam0)
{
	return Global_1198046.f_231.f_1066[iParam0 /*17*/].f_3;
}

void func_1277(int iParam0, int iParam1)
{
	if (func_1197(iParam0, iParam1) != 0)
	{
		if (func_1275(func_1197(iParam0, iParam1)))
		{
			func_1206(iParam0, iParam1);
			func_1049(iParam0, iParam1);
		}
	}
}

bool func_1278(int iParam0)
{
	int iVar0;

	if (!VOLUME::_0xA4A4359320345B34(iParam0))
	{
		return false;
	}
	iVar0 = VOLUME::_0xB33A604345F58202(iParam0);
	if (iVar0 == 3)
	{
		return true;
	}
	return false;
}

void func_1279(int iParam0, int iParam1, int iParam2)
{
	if (!VOLUME::_0xF6A8A652A6B186CD(iParam2))
	{
		Global_1198046.f_2505[iParam0 /*6*/][iParam1 /*3*/].f_2 = 0;
		return;
	}
	Global_1198046.f_2505[iParam0 /*6*/][iParam1 /*3*/].f_2 = iParam2;
}

bool func_1280(int iParam0, int iParam1, int iParam2, int iParam3)
{
	return func_1036(iParam0, iParam2, func_1271(iParam1, iParam3));
}

bool func_1281(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_1280(iParam0, iParam1, iParam2, iVar0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_1282(int iParam0)
{
	if (iParam0 < 3)
	{
		return false;
	}
	if (iParam0 < (3 + Global_1198046.f_3[1]))
	{
		return false;
	}
	if (iParam0 < 35)
	{
		return true;
	}
	if (iParam0 < (35 + Global_1198046.f_3[2]))
	{
		return false;
	}
	if (iParam0 < (35 + Global_1198046.f_3[2]) + 16)
	{
		return false;
	}
	return true;
}

Vector3 func_1283(int iParam0)
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

bool func_1284(var uParam0, int iParam1)
{
	return (iParam1 >= 0 && iParam1 < uParam0->f_2);
}

bool func_1285(var uParam0)
{
	return *uParam0 == uParam0->f_2;
}

bool func_1286(var uParam0)
{
	if (uParam0->f_1 == -1)
	{
		return false;
	}
	if (!func_1069(&(uParam0->f_5)))
	{
		return false;
	}
	return true;
}

int func_1287(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		iVar1 = ((uParam0->f_1 + iVar0) % uParam0->f_2);
		if (func_1298(uParam1, &(uParam0->f_3[iVar1 /*40*/])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1288(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<29> Var0;
	struct<2> Var33;
	bool bVar35;
	int iVar36[4];
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;

	Var33 = -1;
	Var33.f_1 = -1;
	if (func_18(uParam0->f_8.f_5))
	{
		Var33 = { uParam0->f_8.f_5 };
	}
	else if (func_18(uParam0->f_8.f_5.f_6))
	{
		Var33 = { uParam0->f_8.f_5.f_6 };
	}
	else
	{
		return true;
	}
	bVar35 = false;
	if (func_97(uParam0->f_8.f_2))
	{
		bVar35 = true;
	}
	else
	{
		bVar35 = false;
	}
	if (bParam1)
	{
		Var0.f_25 = iParam2;
		Var0.f_26 = iParam3;
		Var0.f_27 = iParam4;
		Var0.f_28 = iParam5;
	}
	else if (!func_1299(func_19(Var33), &Var0))
	{
		return false;
	}
	if (Var0.f_25 <= 0 || Var0.f_25 > 50)
	{
		if (Var0.f_25 != 0)
		{
		}
		iVar36[0] = 0;
	}
	else
	{
		iVar36[0] = 1;
	}
	if (Var0.f_26 <= 0 || Var0.f_26 > 10)
	{
		if (Var0.f_26 != 0)
		{
		}
		iVar36[1] = 0;
	}
	else
	{
		iVar36[1] = 1;
	}
	if (Var0.f_27 <= 0 || Var0.f_27 > 25)
	{
		if (Var0.f_27 != 0)
		{
		}
		iVar36[2] = 0;
	}
	else
	{
		iVar36[2] = 1;
	}
	if (Var0.f_28 <= 0 || Var0.f_28 > 10)
	{
		if (Var0.f_28 != 0)
		{
		}
		iVar36[3] = 0;
	}
	else
	{
		iVar36[3] = 1;
	}
	if (bVar35)
	{
		iVar43 = NETWORK::GET_NUM_RESERVED_MISSION_PEDS(true);
		iVar44 = NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(true);
		iVar45 = NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(true);
		iVar46 = NETWORK::_GET_NUM_RESERVED_MISSION_PICKUPS(true);
	}
	else
	{
		NETWORK::_0x5E71E72A94985214(uParam0->f_8.f_2, 0, &iVar43, &iVar44, &iVar45, &iVar46);
	}
	iVar41 = 0;
	while (iVar41 < 4)
	{
		iVar47 = iVar41;
		if (iVar47 == -1)
		{
		}
		else if (!iVar36[iVar41])
		{
		}
		else
		{
			switch (iVar47)
			{
				case 0:
					iVar42 = (NETWORK::GET_MAX_NUM_NETWORK_PEDS() - iVar43);
					if (iVar42 < Var0.f_25)
					{
						return false;
					}
					break;
					break;
				case 1:
					iVar42 = (NETWORK::GET_MAX_NUM_NETWORK_VEHICLES() - iVar44);
					if (iVar42 < Var0.f_26)
					{
						return false;
					}
					break;
					break;
				case 2:
					iVar42 = (NETWORK::GET_MAX_NUM_NETWORK_OBJECTS() - iVar45);
					if (iVar42 < Var0.f_27)
					{
						return false;
					}
					break;
					break;
				case 3:
					iVar42 = (NETWORK::GET_MAX_NUM_NETWORK_PICKUPS() - iVar46);
					if (iVar42 < Var0.f_28)
					{
						return false;
					}
					break;
					break;
			}
		}
		iVar41++;
	}
	return true;
}

int func_1289(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_1300(&Var1, iParam0))
	{
		iVar0 = ((func_1301() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_1290(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1257541[iParam0 /*5*/].f_2;
}

bool func_1291(int iParam0, int iParam1)
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
		case joaat("MOONSHINE_SETUP_RESCUE_COOK"):
		case joaat("CAMP_SELL"):
			return true;
		case joaat("DYNAMIC"):
			return iParam1;
		default:
			break;
	}
	return false;
}

void func_1292(int iParam0, int iParam1)
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
			func_1302((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1302(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_18(Global_1900736.f_1[0 /*2*/]))
	{
		func_946(Global_1900736.f_1[0 /*2*/], 3);
	}
}

bool func_1293(int iParam0, int iParam1)
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

void func_1294(struct<2> Param0, int iParam2)
{
	if (!func_18(Param0))
	{
		func_288(&(Global_1900736.f_1[iParam2 /*2*/]));
	}
	else
	{
		Global_1900736.f_1[iParam2 /*2*/] = { Param0 };
	}
	func_1303(Param0, 0, 1, -1);
}

bool func_1295(struct<2> Param0, struct<2> Param2, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_18(Param0))
	{
		return false;
	}
	if (!func_18(Param2))
	{
		return true;
	}
	iVar0 = func_1130(Param0);
	iVar1 = func_1130(Param2);
	if (iVar1 == iVar0)
	{
		if (bParam4)
		{
			return true;
		}
	}
	if (iVar1 == 2 || iVar1 == 7)
	{
		if (bParam4 && (iVar0 == 2 || iVar0 == 7))
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 2 || iVar0 == 7)
	{
		return true;
	}
	if (iVar1 == 6)
	{
		return false;
	}
	if (iVar0 == 6)
	{
		return true;
	}
	if (iVar1 == 5)
	{
		return false;
	}
	if (iVar0 == 5)
	{
		return true;
	}
	if (iVar1 == 3)
	{
		if (bParam4 && iVar0 == 3)
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 3)
	{
		return true;
	}
	if (iVar1 == 4)
	{
		if (bParam4 && iVar0 == 4)
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 4)
	{
		return true;
	}
	return false;
}

bool func_1296(int iParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (!func_1304(iParam0))
	{
		return false;
	}
	if (func_1305(iParam0, iParam1, &uVar0))
	{
		func_1306(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

int func_1297(int iParam0, int iParam1)
{
	int iVar0;

	if (Global_1051252.f_80.f_101 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_1051252.f_80.f_101 - 1))
	{
		if (Global_1051252.f_80[iVar0 /*10*/].f_8 == iParam0 && Global_1051252.f_80[iVar0 /*10*/].f_9 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1298(var uParam0, var uParam1)
{
	if (uParam1->f_2 == -1)
	{
		return false;
	}
	if (uParam0->f_2 == -1)
	{
		return false;
	}
	if (uParam1->f_2 != uParam0->f_2)
	{
		return false;
	}
	if (uParam1->f_5 == -1)
	{
		return false;
	}
	if (uParam0->f_5 == -1)
	{
		return false;
	}
	if (uParam1->f_5 != uParam0->f_5)
	{
		return false;
	}
	if (uParam1->f_8 != uParam0->f_8)
	{
		return false;
	}
	if (uParam1->f_8.f_1 != uParam0->f_8.f_1)
	{
		return false;
	}
	if (!func_907(uParam1->f_8.f_5, uParam0->f_8.f_5))
	{
		return false;
	}
	if (uParam1->f_8.f_5.f_4 != uParam0->f_8.f_5.f_4)
	{
		return false;
	}
	if (uParam1->f_8.f_5.f_2 != uParam0->f_8.f_5.f_2)
	{
		return false;
	}
	return true;
}

bool func_1299(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = { func_1307(iParam0) };
	if (!func_18(Var0))
	{
		return false;
	}
	func_1296(Var0, iParam0, uParam1);
	return true;
}

bool func_1300(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541.f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (DATAFILE::_0x603AC35FD4602C76(*uParam0) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

int func_1301()
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

void func_1302(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { Global_1900736.f_1[iParam0 /*2*/] };
	Global_1900736.f_1[iParam0 /*2*/] = { Global_1900736.f_1[iParam1 /*2*/] };
	Global_1900736.f_1[iParam1 /*2*/] = { Var0 };
}

int func_1303(struct<2> Param0, bool bParam2, int iParam3, int iParam4)
{
	struct<4> Var0;

	if (func_1308(Param0) >= 0)
	{
		return 0;
	}
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_1 = { Param0 };
	Var0 = func_19(Param0);
	Var0.f_3 = iParam3;
	func_1309(&Var0, bParam2, iParam4);
	return 1;
}

bool func_1304(int iParam0)
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

bool func_1305(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = Global_1139381.f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_1310(iParam0);
	uParam2->f_4 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_1306(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_1311(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_1312(iVar0);
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
			uParam2->f_5 = func_1313(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_1314(iVar0);
		}
		uParam1->f_2 = 162343104;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_1315(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_7 = func_1316(iVar0);
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
	iVar0 = 0;
	uParam1->f_2 = -739728609;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_32 = iVar0;
}

struct<2> func_1307(int iParam0)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_637(iParam0, 2) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_637(iParam0, 7) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_637(iParam0, 5) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_637(iParam0, 6) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_637(iParam0, 8) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_637(iParam0, 3) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_637(iParam0, 4) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	return func_820();
}

int func_1308(struct<2> Param0)
{
	int iVar0;

	if (Global_1196205.f_129 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1196205.f_129)
	{
		if (func_907(Global_1196205[iVar0 /*4*/].f_1, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1309(var uParam0, bool bParam1, int iParam2)
{
	func_1317(uParam0, iParam2);
	if (Global_1196205.f_129 == 1)
	{
		iParam2 = 0;
		bParam1 = true;
	}
	if (bParam1)
	{
		func_1318(func_1308(uParam0->f_1));
	}
	else
	{
		func_1319();
	}
}

int func_1310(int iParam0)
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

int func_1311(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_1320(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_1312(int iParam0)
{
	switch (iParam0)
	{
		case 1336837986:
			return 0;
		case 2124631622:
			return 1;
		case joaat("ROBBERY_TRAIN"):
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
		case joaat("AMBUSH"):
			return 10;
		case -621956193:
			return 11;
		case joaat("GANG_EVENT_SHOWDOWN"):
			return 12;
		case joaat("GANG_EVENT_IMPROMPTU_RACE"):
			return 13;
		case -867762478:
			return 14;
		case 602097925:
			return 15;
		case joaat("TRAIN_ESCORT"):
			return 16;
		case joaat("IWD_1V1"):
			return 17;
		case joaat("IWD_PVP"):
			return 18;
		case joaat("IWD_PF"):
			return 20;
		case joaat("IWD_PLF"):
			return 21;
		case joaat("IWD_F"):
			return 28;
		case joaat("IWD_INF"):
			return 19;
		case joaat("ASSASSINATION"):
			return 22;
		case joaat("ASSASSINATION_TRACKING"):
			return 23;
		case joaat("ASSASSINATION_PVP_PLAYER"):
			return 24;
		case joaat("ASSASSINATION_PVP_POSSE"):
			return 25;
		case joaat("COACH_HOLDUP_ROBBERY"):
			return 26;
		case joaat("COACH_HOLDUP_KIDNAPPING"):
			return 27;
		case 1518877519:
			return 30;
		default:
			break;
	}
	return -1;
}

int func_1313(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BLACKJACK"):
			return 0;
		case joaat("DOMINOES"):
			return 1;
		case joaat("POKER"):
			return 2;
		case joaat("FILLET"):
			return 3;
		case joaat("MILKING_COW"):
			return 4;
		case joaat("CLEAN_STALLS"):
			return 5;
		case joaat("FENCE_BUILDING"):
			return 6;
		default:
			break;
	}
	return -1;
}

int func_1314(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ARCHERY"):
			return 0;
		case joaat("CHALLENGES"):
			return 1;
		case joaat("DEAD_DROP"):
			return 2;
		case joaat("GOLDEN_HAT"):
			return 3;
		case joaat("HOT_PROPERTY"):
			return 4;
		case joaat("KING_OF_THE_CASTLE"):
			return 5;
		case joaat("KING_OF_THE_RAILS"):
			return 6;
		case joaat("PV_CHALLENGE_HERBALIST"):
			return 15;
		case joaat("PV_CHALLENGE_BIGGEST_FISH"):
			return 16;
		case joaat("PV_CHALLENGE_FLYING_BIRD"):
			return 17;
		case joaat("HUNT_THE_POSSE_LEADER"):
			return 18;
		case joaat("ESCAPED_CONVICTS"):
			return 8;
		case joaat("SUPPLY_TRAIN"):
			return 10;
		case joaat("ROUND_UP"):
			return 9;
		case joaat("WRECKAGE"):
			return 11;
		case joaat("CONDOR_EGG"):
			return 12;
		case -27117790:
			return 13;
		case 1653867545:
			return 14;
		case -142235487:
			return 7;
		default:
			break;
	}
	return -1;
}

int func_1315(int iParam0)
{
	switch (iParam0)
	{
		case joaat("UGC_MAJOR_ID_DBG_VERSUS"):
			return 0;
		case joaat("UGC_MAJOR_ID_DBG_DEATHMATCH"):
			return 1;
		case joaat("UGC_MAJOR_ID_DBG_RACE"):
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
		case joaat("UGC_MAJOR_ID_LBM"):
			return 8;
		case joaat("UGC_MAJOR_ID_MOONSHINE_COOP"):
			return 9;
		case 1039801657:
			return 10;
		default:
			break;
	}
	return 0;
}

int func_1316(int iParam0)
{
	switch (iParam0)
	{
		case joaat("NULL"):
			return -1;
		case joaat("NORMAL"):
			return 0;
		case joaat("INTRO_CHAR"):
			return 1;
		case joaat("INTRO_GENERIC"):
			return 2;
		case 1322114923:
			return 3;
		case joaat("INTRO_FREEMODE"):
			return 4;
		case joaat("INTRO_CLAY2"):
			return 5;
		case joaat("TEAMSTER"):
			return 6;
		case joaat("BOUNTYHUNTER"):
			return 7;
		case joaat("GUNSLINGER"):
			return 8;
		case joaat("OUTLAW"):
			return 9;
		case joaat("HUNTER"):
			return 10;
		case joaat("TRADER"):
			return 11;
		case joaat("COLLECTOR"):
			return 12;
		case joaat("SEASON005"):
			return 13;
		case joaat("VIPSEASON005"):
			return 14;
		case joaat("MOONSHINER"):
			return 15;
		case joaat("SEASON006"):
			return 16;
		case joaat("VIPSEASON006"):
			return 17;
		case 1976336482:
			return 18;
		case -713504854:
			return 19;
		case 753957709:
			return 20;
		case 1054483531:
			return 21;
		case 547199896:
			return 22;
		default:
			break;
	}
	return -1;
}

void func_1317(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	if (Global_1196205.f_129 >= 32)
	{
		Global_1196205.f_129 = 32;
		return;
	}
	if (iParam1 >= Global_1196205.f_129)
	{
		iParam1 = -1;
	}
	if (iParam1 <= -1)
	{
		Global_1196205[Global_1196205.f_129 /*4*/] = { *uParam0 };
		Global_1196205.f_129++;
		return;
	}
	iVar0 = iParam1;
	iVar1 = (Global_1196205.f_129 - 1);
	Var2.f_1 = -1;
	Var2.f_1.f_1 = -1;
	while (iVar1 >= iVar0)
	{
		Var2 = { Global_1196205[iVar1 /*4*/] };
		Global_1196205[iVar1 /*4*/] = { Global_1196205[iVar1 + 1 /*4*/] };
		Global_1196205[iVar1 + 1 /*4*/] = { Var2 };
		iVar1 = (iVar1 - 1);
	}
	Global_1196205[iParam1 /*4*/] = { *uParam0 };
	Global_1196205.f_129++;
}

void func_1318(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_1196205.f_129)
	{
		return;
	}
	Global_1196205.f_130 = iParam0;
	Global_1196205.f_131 = Global_1196205[iParam0 /*4*/];
}

void func_1319()
{
	if (Global_1196205.f_131 == 0)
	{
		return;
	}
	Global_1196205.f_130 = func_1321(Global_1196205.f_131);
	if (Global_1196205.f_130 < 0)
	{
		Global_1196205.f_131 = 0;
	}
}

bool func_1320(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_1322(iParam0, uParam1, &uVar0))
	{
		func_1323(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

int func_1321(int iParam0)
{
	int iVar0;

	if (Global_1196205.f_129 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1196205.f_129)
	{
		if (Global_1196205[iVar0 /*4*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1322(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381.f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_1310(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_1323(var uParam0, int iParam1, var uParam2)
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

