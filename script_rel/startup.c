#region Local Var
	char* sLocal_0 = NULL;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	float fLocal_8 = 0f;
	float fLocal_9 = 0f;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	vector3 vLocal_15 = { 0f, 0f, 0f };
	char* sLocal_18 = NULL;
	char* sLocal_19 = NULL;
	char* sLocal_20 = NULL;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = -1;
	var uLocal_30 = 0;
	char* sLocal_31 = NULL;
	int iLocal_32 = 0;
	struct<2> Local_33 = { 0, 0 } ;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 10;
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
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;
	int iVar12;

	sLocal_0 = "";
	fLocal_8 = 1f;
	fLocal_9 = 1f;
	sLocal_18 = "mech_skin@BUCK_BUTCHER";
	sLocal_19 = "PBL_BASE";
	sLocal_20 = "PBL_DUMP";
	sLocal_21 = "PBL_DROP_IN";
	sLocal_31 = "beat_gang_camp_reminder";
	iLocal_32 = 23;
	func_1();
	func_2();
	BUILTIN::WAIT(0);
	func_3();
	uVar0 = 11;
	while (!func_4(&uVar0))
	{
		BUILTIN::WAIT(0);
	}
	func_5(0);
	if (!Global_40)
	{
	}
	func_6();
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
	while (DLC::GET_IS_LOADING_SCREEN_ACTIVE() && func_7(&uLocal_36) < 2)
	{
		func_8();
		BUILTIN::WAIT(0);
	}
	NETWORK::_0xE5FF65CFF5160752();
	func_9(0);
	while (true)
	{
		iVar12 = CLOCK::GET_CLOCK_HOURS();
		func_10(iVar12);
		func_11(iVar12);
		func_12(&uLocal_120);
		func_14(func_13() == 3);
		func_15(Global_1899245);
		func_8();
		if (func_16(1024))
		{
			AUDIO::_0x9428447DED71FC7E("Load_Menu_Scenes");
			func_17(1024);
		}
		switch (func_13())
		{
			case 0:
				if (Global_40)
				{
					func_18();
					func_17(4);
				}
				else if (MISC::_GAME_TRANSITION_MANAGER_GET_MODE() == 496295564)
				{
					func_18();
					func_17(4);
				}
				else if (!func_19())
				{
					func_20(1);
				}
				if (func_21() == 1 || func_21() == 0)
				{
					func_22();
					func_9(1);
				}
				else
				{
					func_17(4);
					func_9(2);
				}
				break;
			case 1:
				if (func_23())
				{
					func_17(4);
					func_9(2);
				}
				break;
			case 2:
				func_24();
				if (func_25(func_21()))
				{
					func_9(3);
				}
				break;
			case 3:
				func_26();
				func_27();
				func_28();
				if (func_29())
				{
					func_30();
					func_9(4);
				}
				break;
			case 4:
				if (func_31())
				{
					func_32();
					func_17(4);
					func_17(64);
					func_33();
					if (func_21() == 1)
					{
						func_9(5);
						SCRIPTS::_0xBC2C927F5C264243(0);
					}
					else if (func_21() == 4)
					{
						func_9(2);
					}
					else if (func_34() != 1)
					{
						func_9(5);
						func_35();
					}
					else
					{
						func_9(2);
					}
				}
				break;
			case 5:
				func_35();
				break;
		}
		BUILTIN::WAIT(0);
	}
}

void func_1()
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	NETWORK::_0x3E74A687A73979C6(1);
	AUDIO::_0x6339C1EA3979B5F7("Main_Menu", "Load_Menu_Scenes");
}

void func_2()
{
}

void func_3()
{
	MISC::SET_FADE_IN_AFTER_LOAD(false);
	MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
	func_36();
	func_37();
	func_38();
	func_39();
}

bool func_4(var uParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < 11)
	{
		if (func_40(iVar1))
		{
			if (!func_41(iVar1, (*uParam0)[iVar1]))
			{
				bVar0 = false;
			}
		}
		iVar1++;
	}
	if (bVar0)
	{
		SCRIPTS::_0x11986B05885564D2(1);
	}
	return bVar0;
}

void func_5(bool bParam0)
{
	SCRIPTS::_SET_GLOBAL_BLOCK_CAN_BE_ACCESSED(1, bParam0);
	SCRIPTS::_SET_GLOBAL_BLOCK_CAN_BE_ACCESSED(2, bParam0);
	SCRIPTS::_SET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4, bParam0);
	SCRIPTS::_SET_GLOBAL_BLOCK_CAN_BE_ACCESSED(8, bParam0);
	SCRIPTS::_SET_GLOBAL_BLOCK_CAN_BE_ACCESSED(9, bParam0);
}

void func_6()
{
	func_42();
	func_43();
	STREAMING::_SET_GUARMA_WORLDHORIZON_ACTIVE(false);
	MAP::_0xA657EC9DBC6CC900(joaat("world"));
	func_44();
}

int func_7(var uParam0)
{
	return uParam0->f_76;
}

void func_8()
{
	if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
	{
		func_45(&uLocal_36);
	}
	else if (func_46(&uLocal_36))
	{
		func_47(&uLocal_36);
	}
}

void func_9(int iParam0)
{
	Local_33 = iParam0;
	Local_33.f_1 = MISC::GET_GAME_TIMER();
}

void func_10(int iParam0)
{
	if (iParam0 < 6)
	{
		Global_1899516 = 8;
		return;
	}
	if (iParam0 < 12)
	{
		Global_1899516 = 1;
		return;
	}
	if (iParam0 < 18)
	{
		Global_1899516 = 2;
		return;
	}
	Global_1899516 = 4;
}

void func_11(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = ((((BUILTIN::SHIFT_LEFT(CLOCK::GET_CLOCK_SECONDS(), 0) || BUILTIN::SHIFT_LEFT(CLOCK::GET_CLOCK_MINUTES(), 6)) || BUILTIN::SHIFT_LEFT(iParam0, 12)) || BUILTIN::SHIFT_LEFT(CLOCK::GET_CLOCK_MONTH(), 22)) || BUILTIN::SHIFT_LEFT(CLOCK::GET_CLOCK_DAY_OF_MONTH(), 17));
	iVar1 = CLOCK::GET_CLOCK_YEAR();
	if ((iVar1 < 0 || iVar1 > 1930) || iVar1 < 1866)
	{
		return;
	}
	if (iVar1 < 1898)
	{
		iVar0 = (iVar0 || BUILTIN::SHIFT_LEFT((1898 - iVar1), 26)) | -2147483648;
	}
	else
	{
		iVar0 = (iVar0 || BUILTIN::SHIFT_LEFT((iVar1 - 1898), 26));
		iVar0 = (iVar0 - iVar0 & -2147483648);
	}
	Global_1899515 = iVar0;
}

void func_12(var uParam0)
{
	bool bVar0;

	if (func_48() == -3)
	{
		return;
	}
	bVar0 = COMPAPP::_0x7AF1BB4504EA5ED9();
	if (&Global_1956578 != bVar0)
	{
		Global_1956578 = bVar0;
		if (bVar0)
		{
			func_49("COMP_APP_CONNECT", 10000, 0, 0, 0, 1);
		}
		else
		{
			*uParam0 = 0;
			func_50(&(uParam0->f_1));
			func_49("COMP_APP_DISCONNECT", 10000, 0, 0, 0, 1);
		}
		func_51();
	}
	if (&Global_1956578)
	{
		func_52(uParam0);
	}
	func_51();
}

int func_13()
{
	return Local_33;
}

void func_14(bool bParam0)
{
	func_53();
	func_54();
	if (!bParam0)
	{
		return;
	}
	func_55();
	func_56();
}

void func_15(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			if (!MISC::IS_ORBIS_VERSION())
			{
				func_57(3);
			}
			if (func_58())
			{
				func_59(&(Global_1899245->f_1));
				func_57(1);
			}
			break;
		case 1:
			if (func_60(&(Global_1899245->f_1), 10000, 1))
			{
				func_57(2);
			}
			break;
		case 2:
			func_61();
			if (!func_58())
			{
				func_57(0);
			}
			break;
		case 3:
			if (func_58())
			{
				func_62();
			}
			break;
		default:
			func_57(0);
			break;
	}
}

bool func_16(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

void func_17(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 - (Global_1572864->f_3 && iParam0));
}

void func_18()
{
	func_63(4);
	func_20(2);
	if (NETWORK::_0x02E97CE283648CD9(func_64(joaat("benchmark"))))
	{
		Global_43892 = 1;
	}
	func_65(joaat("single_player"), 0);
}

int func_19()
{
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

void func_20(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	Global_1572864->f_1 = iParam0;
}

int func_21()
{
	return Global_1572864->f_1;
}

void func_22()
{
	vector3 vVar0;

	vLocal_15 = { vVar0 };
}

int func_23()
{
	func_66();
	switch (func_67())
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				GOOGLE_ANALYTICS::_GOOGLE_ANALYTICS_PUSH_PAGE("/landing");
				MISC::SET_FADE_IN_AFTER_LOAD(false);
				MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, 0, 0);
				PAD::_0xF239400E16C23E08(2, 0);
				func_68();
				func_69(1);
				func_70();
				func_71();
				func_72(0);
				func_73();
				func_74(-1);
				func_75(1);
			}
			else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				PED::RESURRECT_PED(PLAYER::PLAYER_PED_ID());
			}
			break;
		case 1:
			if (func_76())
			{
				func_75(2);
			}
			else if (REPLAY::_0x9EEB007317FA3B9C())
			{
				func_75(2);
				vLocal_15.f_2 = 4;
			}
			break;
		case 2:
			if (CAM::IS_SCREEN_FADED_OUT() || func_77())
			{
				if (func_78())
				{
					NETWORK::_0x966DD84FB6A46017();
					func_79();
				}
				else
				{
					vLocal_15.f_2 = 1;
					func_63(4);
				}
				if (func_77())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				func_20(vLocal_15.z);
				AUDIO::TRIGGER_MUSIC_EVENT("stop_title_screen_music");
				GOOGLE_ANALYTICS::_GOOGLE_ANALYTICS_POP_PAGE("/landing");
				NETWORK::_0x7AC752103856FB20(false);
				PAD::_0xA0CEFCEA390AAB9B(2);
				return 1;
			}
			else if (!CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(0);
			}
			break;
	}
	return 0;
}

void func_24()
{
	if (!func_16(64))
	{
		return;
	}
	switch (func_80())
	{
		case joaat("freeroam"):
			if (func_81(655115506))
			{
				func_82(2);
			}
			else if (func_81(joaat("friendly")))
			{
				func_82(1);
			}
			else
			{
				func_82(0);
			}
			if (func_81(1651967528))
			{
				Global_31 = 1;
			}
			if (func_81(-84928653))
			{
				Global_33 = 1;
			}
			if (func_81(-2030542394) || NETWORK::_0xFC4165C9165C166F())
			{
				Global_34 = 1;
			}
			else
			{
				Global_34 = 0;
			}
			if (func_81(-1357178860))
			{
				Global_1572887->f_5 = 1;
			}
			else
			{
				Global_1572887->f_5 = 0;
			}
			if (func_81(joaat("NEW_GAME")))
			{
				Global_30 = 1;
			}
			if (func_81(1306134188))
			{
			}
			if (func_81(1737952409))
			{
			}
			if (func_81(2137301164))
			{
			}
			if (func_81(-159568751))
			{
			}
			break;
		case -1330461529:
			break;
		case joaat("mission"):
			break;
		case 1495295997:
			break;
		case joaat("mission_creator"):
			Global_32 = 1;
			Global_1572887->f_5 = 1;
			break;
	}
	func_17(64);
}

int func_25(int iParam0)
{
	char* sVar0;
	int iVar1;

	iVar1 = 1024;
	switch (iParam0)
	{
		case 1:
			func_63(4);
			return 1;
		case 2:
			sVar0 = func_83(2);
			iVar1 = 1024;
			break;
		case 3:
			sVar0 = func_83(3);
			iVar1 = 25500;
			break;
		case 4:
			sVar0 = func_83(4);
			iVar1 = 1024;
			break;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(sVar0)) > 0)
	{
		func_84(iParam0);
		return 1;
	}
	if (func_85(sVar0, iVar1))
	{
		func_84(iParam0);
		func_86(iParam0);
		func_32();
		return 1;
	}
	return 0;
}

void func_26()
{
}

void func_27()
{
}

void func_28()
{
}

int func_29()
{
	if (func_34() != func_21())
	{
		return 1;
	}
	if (func_16(4))
	{
		return 1;
	}
	if (func_76())
	{
		func_78();
		CAM::DO_SCREEN_FADE_OUT(0);
		return 1;
	}
	return 0;
}

void func_30()
{
	func_36();
	func_17(4);
	PAD::_0xA0CEFCEA390AAB9B(0);
	if (func_34() == 3)
	{
		if (SCRIPTS::_DOES_THREAD_EXIST(Global_1572887->f_14))
		{
			func_63(2048);
		}
	}
	else
	{
		PLAYER::FORCE_CLEANUP(2);
		func_63(64);
	}
}

int func_31()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	SCRIPTS::SCRIPT_THREAD_ITERATOR_RESET();
	iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
	iVar1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	iVar2 = 1;
	while (SCRIPTS::_DOES_THREAD_EXIST(iVar0))
	{
		bVar3 = true;
		if (iVar0 == iVar1)
		{
			bVar3 = false;
		}
		else if (SCRIPTS::_IS_BACKGROUND_SCRIPT(iVar0))
		{
			bVar3 = false;
		}
		if (bVar3)
		{
			if (!SCRIPTS::_0x30BED53646C86D11(iVar0))
			{
				SCRIPTS::_0x7DE4643157AD646C(iVar0);
			}
			if (func_48() == -1)
			{
				PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iVar0, 2);
			}
			iVar2 = 0;
			BUILTIN::WAIT(0);
		}
		iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
	}
	return iVar2;
}

void func_32()
{
	if (func_34() != 2)
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_83(2));
	}
	if (func_34() != 3)
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_83(3));
	}
	if (func_34() != 4)
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_83(4));
	}
}

void func_33()
{
}

int func_34()
{
	return &Global_1572864;
}

void func_35()
{
	char* sVar0;

	sVar0 = NETWORK::_0xC59AB6A04333C502();
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		sVar0 = func_87();
		SCRIPTS::_0xE98204D3C25AE14C(sVar0);
		return;
	}
	SCRIPTS::_0xE98204D3C25AE14C(sVar0);
}

void func_36()
{
	func_88();
	func_89();
	func_90();
	SCRIPTS::_0x11B0A0B282FA9B10(0);
}

void func_37()
{
	char cVar0[64];
	struct<8> Var8;
	int iVar16;

	sLocal_0 = "startup";
	SAVE::_0x9BB83C4DD7BE0802(&Global_40, 12065, 1, sLocal_0, 93);
	func_91(&(Global_40.f_9));
	func_92(&(Global_40.f_40), "g_savedGlobals.sFlow", 1);
	func_93(&(Global_40.f_1095), "g_savedGlobals.playerHorse", 1);
	func_94(&(Global_40.f_9910));
	func_95(&(Global_40.f_4283));
	func_96(&(Global_40.f_9052));
	func_97(&(Global_40.f_9074));
	func_98(&(Global_40.f_9079));
	func_99(&(Global_40.f_9146));
	func_100(&(Global_40.f_7756));
	func_101(&(Global_40.f_7832), "g_savedGlobals.eTutorialsRun", 1);
	func_102(&(Global_40.f_358));
	func_103(&(Global_40.f_431));
	func_104(&(Global_40.f_7100));
	func_105(&(Global_40.f_450));
	func_106(&(Global_40.f_490));
	func_107(&(Global_40.f_4237));
	func_108(&(Global_40.f_4942));
	func_109(&(Global_40.f_6563));
	func_110(&(Global_40.f_7039));
	func_111(&(Global_40.f_7157));
	func_112(&(Global_40.f_7731));
	func_113(&(Global_40.f_7748));
	func_114(&(Global_40.f_7862), "g_savedGlobals.mapBlipData", 1);
	func_115(&(Global_40.f_8863));
	func_116(&(Global_40.f_9028));
	func_117(&(Global_40.f_9020));
	func_118(&(Global_40.f_9096));
	func_119(&(Global_40.f_9145));
	func_120(&(Global_40.f_9274), "g_savedGlobals.herbs", 1);
	func_121(&(Global_40.f_9319));
	func_122(&(Global_40.f_9384));
	func_123(&(Global_40.f_9422));
	func_124(&(Global_40.f_9479));
	func_125(&(Global_40.f_9536));
	func_126(&(Global_40.f_11943));
	func_127(&(Global_40.f_9571));
	func_128(&(Global_40.f_9632));
	func_129(&(Global_40.f_10991));
	func_130(&(Global_40.f_283));
	func_131(&(Global_40.f_297));
	func_132(&(Global_40.f_7857));
	func_133(&(Global_40.f_9829));
	func_134(&(Global_40.f_11029));
	func_135(&(Global_40.f_11095));
	func_136(&(Global_40.f_11166));
	func_137(&(Global_40.f_7443));
	func_138(&(Global_40.f_9419));
	func_139(&(Global_40.f_11182));
	func_140(&(Global_40.f_11184));
	func_141(&(Global_40.f_11206));
	func_142(&(Global_40.f_11623));
	func_143(&(Global_40.f_11959));
	func_144(&(Global_40.f_11864));
	func_145(&(Global_40.f_11883));
	func_146(&(Global_40.f_11922));
	func_147(&(Global_40.f_9045));
	func_148(&(Global_40.f_12000));
	func_149(&(Global_40.f_12003));
	func_150(&(Global_40.f_12004));
	func_151(&(Global_40.f_12018));
	SAVE::_0xBB7F4273C186BC4B(&Global_40, "bGameInitialized");
	SAVE::_0xBB7F4273C186BC4B(&(Global_40.f_1), "bInGameflow");
	SAVE::_0xBB7F4273C186BC4B(&(Global_40.f_9421), "bUsedFirstPerson");
	func_152(&(Global_40.f_2), "vLastCampPosition");
	SAVE::_0x35DEFECAE36D4FAE(&(Global_40.f_5), "fLastCampHeading");
	func_152(&(Global_40.f_6), "vCurrentCaravanBedPosition");
	SAVE::_0x529B9CCD0972AF4D(&(Global_40.f_7854), "minigameUnlocked");
	SAVE::_0x529B9CCD0972AF4D(&(Global_40.f_7855), "jobUnlocked");
	SAVE::_0x529B9CCD0972AF4D(&(Global_40.f_7856), "procmissionUnlocked");
	SAVE::_0xB25B5A375BE5BE26(&(Global_40.f_7729), "wornOutfit");
	SAVE::_0xB25B5A375BE5BE26(&(Global_40.f_39), "playerCharacterModel");
	SAVE::_0xB25B5A375BE5BE26(&(Global_40.f_449), "lawBountyAchievement");
	SAVE::_0xB25B5A375BE5BE26(&(Global_40.f_1093), "eRCMIndexTracked");
	SAVE::_0x529B9CCD0972AF4D(&(Global_40.f_1094), "iRCMsActive");
	SAVE::_0x529B9CCD0972AF4D(&(Global_40.f_7755), "deadeyeLevel");
	SAVE::_0xBB7F4273C186BC4B(&(Global_40.f_11953), "bAttackedBurial");
	SAVE::_0x529B9CCD0972AF4D(&(Global_40.f_11954), "iMickeyMemory");
	SAVE::_0x529B9CCD0972AF4D(&(Global_40.f_11955), "iStudiedAnimalsNoBinoculars");
	SAVE::_0x529B9CCD0972AF4D(&(Global_40.f_11956), "iLastPayoffTutorialMessage");
	SAVE::_0x529B9CCD0972AF4D(&(Global_40.f_11957), "iSavedBounty");
	SAVE::_0xBB7F4273C186BC4B(&(Global_40.f_7730), "bHatKnockedOff");
	SAVE::_0x529B9CCD0972AF4D(&(Global_40.f_9273), "iHerbArrLocation");
	SAVE::_0x529B9CCD0972AF4D(&(Global_40.f_11958), "iSPMinigameAchievementTracker");
	SAVE::_0x529B9CCD0972AF4D(&(Global_40.f_11999), "iSPChecksum");
	SAVE::_0xBB7F4273C186BC4B(&(Global_40.f_7860), "bEndlessSummerInitialized");
	SAVE::_0x529B9CCD0972AF4D(&(Global_40.f_7861), "iMoneyBeforeGuarma");
	StringCopy(&cVar0, "specialWildHorse", 64);
	SAVE::_0x81F4E92BE3958364(&(Global_40.f_11945), 8, &cVar0);
	iVar16 = 0;
	while (iVar16 < Global_40.f_11945)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		SAVE::_0xB25B5A375BE5BE26(Global_40.f_11945[iVar16], &Var8);
		iVar16++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xBB7F4273C186BC4B(&(Global_40.f_12017), "bPhotoModeToastDelivered");
	SAVE::_0xE8346E62FD7FB962();
	sLocal_0 = "SavedDeeds";
	SAVE::_0x9BB83C4DD7BE0802(&Global_12105, 5398, 1, sLocal_0, 1);
	func_153(&Global_12105);
	SAVE::_0xE8346E62FD7FB962();
	sLocal_0 = "SavedBeats";
	SAVE::_0x9BB83C4DD7BE0802(&Global_17503, 3206, 1, sLocal_0, 1);
	func_154(&Global_17503);
	SAVE::_0xE8346E62FD7FB962();
	sLocal_0 = "SavedShops";
	SAVE::_0x9BB83C4DD7BE0802(&Global_20709, 2408, 1, sLocal_0, 1);
	func_155(&Global_20709);
	SAVE::_0xE8346E62FD7FB962();
	sLocal_0 = "SavedRegions";
	SAVE::_0x9BB83C4DD7BE0802(&Global_23117, 1769, 1, sLocal_0, 3);
	func_156(&Global_23117);
	func_157(&(Global_23117.f_1651));
	SAVE::_0x529B9CCD0972AF4D(&(Global_23117.f_1768), "g_savedGlobalsRegions.iInnocentsKilled");
	SAVE::_0xE8346E62FD7FB962();
	sLocal_0 = "SavedRegionalCharacters";
	SAVE::_0x9BB83C4DD7BE0802(&Global_24886, 1909, 1, sLocal_0, 1);
	func_158(&Global_24886);
	SAVE::_0xE8346E62FD7FB962();
	sLocal_0 = "SavedPlayerOutfits";
	SAVE::_0x9BB83C4DD7BE0802(&Global_26795, 777, 1, sLocal_0, 1);
	func_159(&Global_26795);
	SAVE::_0xE8346E62FD7FB962();
	sLocal_0 = "SavedHerbs";
	SAVE::_0x9BB83C4DD7BE0802(&Global_27572, 4501, 1, sLocal_0, 1);
	func_160(&Global_27572);
	SAVE::_0xE8346E62FD7FB962();
	sLocal_0 = "SavedVignettes";
	SAVE::_0x9BB83C4DD7BE0802(&Global_32073, 4234, 1, sLocal_0, 2);
	func_161(&Global_32073);
	func_162(&(Global_32073.f_2697));
	SAVE::_0xE8346E62FD7FB962();
	SAVE::_0xC0ABF784590798A9(1);
}

void func_38()
{
	sLocal_0 = "startup";
	SAVE::_0xED4B0C1057892B2E(&Global_36637, 1466, 0, sLocal_0);
	func_120(&Global_36637, "g_mpSavedGlobals.herbs", 0);
	func_163(&(Global_36637.f_45), "g_mpSavedGlobals.sPersona");
	func_101(&(Global_36637.f_1444), "g_mpSavedGlobals.eTutorialsRun", 0);
	SAVE::_0xE8346E62FD7FB962();
	SAVE::_0xC0ABF784590798A9(0);
}

void func_39()
{
	SCRIPTS::REQUEST_SCRIPT(func_83(2));
	SCRIPTS::REQUEST_SCRIPT(func_83(3));
	SCRIPTS::REQUEST_SCRIPT(func_83(4));
	func_164();
}

int func_40(int iParam0)
{
	if (iParam0 != 0 && iParam0 != 3)
	{
		return 1;
	}
	return 0;
}

int func_41(int iParam0, var uParam1)
{
	switch (*uParam1)
	{
		case 0:
			if (func_165(iParam0, 1))
			{
				MISC::_0xE97240065406CB80(iParam0, 0);
				SCRIPTS::REQUEST_SCRIPT(func_166(iParam0));
				func_167(uParam1, 1, iParam0);
			}
			else
			{
				func_167(uParam1, 3, iParam0);
				return 1;
			}
			break;
		case 1:
			if (SCRIPTS::HAS_SCRIPT_LOADED(func_166(iParam0)))
			{
				SCRIPTS::START_NEW_SCRIPT(func_166(iParam0), 128);
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_166(iParam0));
				func_167(uParam1, 2, iParam0);
			}
			break;
		case 2:
			if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(func_166(iParam0))) == 0)
			{
				MISC::_0xE97240065406CB80(iParam0, 1);
				func_167(uParam1, 3, iParam0);
				return 1;
			}
			break;
		case 3:
			return 1;
	}
	return 0;
}

void func_42()
{
	char cVar0[32];

	DECORATOR::DECOR_REGISTER("outfitChanged", 2);
	DECORATOR::DECOR_REGISTER("playerChangeOutfits", 2);
	DECORATOR::DECOR_REGISTER("HorseHitchRope", 3);
	DECORATOR::DECOR_REGISTER("Whistling", 2);
	DECORATOR::DECOR_REGISTER("Inspecting_Item", 2);
	DECORATOR::DECOR_REGISTER("JustSavedAtBed", 2);
	DECORATOR::DECOR_REGISTER("CookingMeat", 2);
	DECORATOR::DECOR_REGISTER("build_success", 2);
	DECORATOR::DECOR_REGISTER("RWARV_Dominoes", 2);
	DECORATOR::DECOR_REGISTER("Fishing_LaunchNow", 2);
	DECORATOR::DECOR_REGISTER("RKTTY_Asked", 2);
	DECORATOR::DECOR_REGISTER("RKTTY_Wagon", 2);
	DECORATOR::DECOR_REGISTER("iDamageFrame", 3);
	DECORATOR::DECOR_REGISTER("bIgnoreDamageChecking", 2);
	DECORATOR::DECOR_REGISTER("rev_comment", 2);
	DECORATOR::DECOR_REGISTER("camp_attacker", 2);
	DECORATOR::DECOR_REGISTER("HorseGender", 3);
	DECORATOR::DECOR_REGISTER("HorseCamp", 2);
	DECORATOR::DECOR_REGISTER("HorseCompanion", 2);
	DECORATOR::DECOR_REGISTER("CaravanCommonHorse", 2);
	DECORATOR::DECOR_REGISTER("CaravanLivestock", 2);
	DECORATOR::DECOR_REGISTER("StableOwnedHorse", 3);
	DECORATOR::DECOR_REGISTER("HorseMission", 2);
	DECORATOR::DECOR_REGISTER("bHorseHasBeenStolen", 2);
	DECORATOR::DECOR_REGISTER("bHasBeenLassoedFromHorse", 2);
	DECORATOR::DECOR_REGISTER("bHasBeenTrampledByHorse", 2);
	DECORATOR::DECOR_REGISTER("companion_manager_msg", 3);
	DECORATOR::DECOR_REGISTER("companion_manager_command", 3);
	DECORATOR::DECOR_REGISTER("companion_manager_watch_mode", 3);
	DECORATOR::DECOR_REGISTER("outfit_tags", 3);
	DECORATOR::DECOR_REGISTER("metaped_outfit_request", 3);
	DECORATOR::DECOR_REGISTER("metaped_outfit_request_name", 3);
	DECORATOR::DECOR_REGISTER("chinLong", 3);
	DECORATOR::DECOR_REGISTER("chopsLong", 3);
	DECORATOR::DECOR_REGISTER("stacheLong", 3);
	DECORATOR::DECOR_REGISTER("chinShort", 3);
	DECORATOR::DECOR_REGISTER("chopsShort", 3);
	DECORATOR::DECOR_REGISTER("stacheShort", 3);
	DECORATOR::DECOR_REGISTER("hairLong", 3);
	DECORATOR::DECOR_REGISTER("hairShort", 3);
	DECORATOR::DECOR_REGISTER("player_newWeaponType", 3);
	DECORATOR::DECOR_REGISTER("player_newWeaponTime", 3);
	DECORATOR::DECOR_REGISTER("player_newRevolverWeaponType", 3);
	DECORATOR::DECOR_REGISTER("player_newRevolverWeaponTime", 3);
	DECORATOR::DECOR_REGISTER("player_newPistolWeaponType", 3);
	DECORATOR::DECOR_REGISTER("player_newPistolWeaponTime", 3);
	DECORATOR::DECOR_REGISTER("player_newShotgunWeaponType", 3);
	DECORATOR::DECOR_REGISTER("player_newShotgunWeaponTime", 3);
	DECORATOR::DECOR_REGISTER("player_newRifleWeaponType", 3);
	DECORATOR::DECOR_REGISTER("player_newRifleWeaponTime", 3);
	DECORATOR::DECOR_REGISTER("chest_open", 2);
	DECORATOR::DECOR_REGISTER("loot_money", 3);
	DECORATOR::DECOR_REGISTER("fLoot_money", 1);
	DECORATOR::DECOR_REGISTER("loot_item_type1", 3);
	DECORATOR::DECOR_REGISTER("loot_item_amt1", 3);
	DECORATOR::DECOR_REGISTER("loot_item_model1", 3);
	DECORATOR::DECOR_REGISTER("loot_item_offset1x", 1);
	DECORATOR::DECOR_REGISTER("loot_item_offset1y", 1);
	DECORATOR::DECOR_REGISTER("loot_item_offset1z", 1);
	DECORATOR::DECOR_REGISTER("loot_item_orient1x", 1);
	DECORATOR::DECOR_REGISTER("loot_item_orient1y", 1);
	DECORATOR::DECOR_REGISTER("loot_item_orient1z", 1);
	DECORATOR::DECOR_REGISTER("loot_item_type2", 3);
	DECORATOR::DECOR_REGISTER("loot_item_amt2", 3);
	DECORATOR::DECOR_REGISTER("loot_item_model2", 3);
	DECORATOR::DECOR_REGISTER("loot_item_offset2x", 1);
	DECORATOR::DECOR_REGISTER("loot_item_offset2y", 1);
	DECORATOR::DECOR_REGISTER("loot_item_offset2z", 1);
	DECORATOR::DECOR_REGISTER("loot_item_orient2x", 1);
	DECORATOR::DECOR_REGISTER("loot_item_orient2y", 1);
	DECORATOR::DECOR_REGISTER("loot_item_orient2z", 1);
	DECORATOR::DECOR_REGISTER("loot_ammo1_type", 3);
	DECORATOR::DECOR_REGISTER("loot_ammo1_amt", 3);
	DECORATOR::DECOR_REGISTER("loot_ammo2_type", 3);
	DECORATOR::DECOR_REGISTER("loot_ammo2_amt", 3);
	DECORATOR::DECOR_REGISTER("loot_ammo3_type", 3);
	DECORATOR::DECOR_REGISTER("loot_ammo3_amt", 3);
	DECORATOR::DECOR_REGISTER("loot_weapon", 3);
	DECORATOR::DECOR_REGISTER("loot_empty", 2);
	DECORATOR::DECOR_REGISTER("lootable_interior", 3);
	DECORATOR::DECOR_REGISTER("scripted_loot_only", 2);
	DECORATOR::DECOR_REGISTER("got_loot", 2);
	DECORATOR::DECOR_REGISTER("ransack", 2);
	DECORATOR::DECOR_REGISTER("loot_long_custom_anim_data_set", 4);
	DECORATOR::DECOR_REGISTER("letter_item", 3);
	DECORATOR::DECOR_REGISTER("loot_allow_random", 2);
	DECORATOR::DECOR_REGISTER("bLostLogs", 2);
	DECORATOR::DECOR_REGISTER("bNoticePlayer", 2);
	DECORATOR::DECOR_REGISTER("bIgnoreThisPed", 2);
	DECORATOR::DECOR_REGISTER("bPedAlreadyCounted", 2);
	DECORATOR::DECOR_REGISTER("bCowering", 2);
	DECORATOR::DECOR_REGISTER("bChopDown", 2);
	DECORATOR::DECOR_REGISTER("bGPSEnabled", 2);
	DECORATOR::DECOR_REGISTER("interactNeg", 3);
	DECORATOR::DECOR_REGISTER("bOnBreak", 2);
	DECORATOR::DECOR_REGISTER("bScriptedILO", 2);
	DECORATOR::DECOR_REGISTER("bAmbientCoachLooted", 2);
	DECORATOR::DECOR_REGISTER("ValuableCoach", 2);
	DECORATOR::DECOR_REGISTER("Herd_Panicked_Member", 2);
	DECORATOR::DECOR_REGISTER("honor_block", 3);
	DECORATOR::DECOR_REGISTER("honor_bank", 3);
	DECORATOR::DECOR_REGISTER("honor_override", 3);
	DECORATOR::DECOR_REGISTER("not_enemy", 2);
	DECORATOR::DECOR_REGISTER("bleed_start_time", 3);
	DECORATOR::DECOR_REGISTER("instigated_by_player", 2);
	DECORATOR::DECOR_REGISTER("wagon_block_honor", 2);
	DECORATOR::DECOR_REGISTER("lose_honor_steal_vehicle", 2);
	DECORATOR::DECOR_REGISTER("player_greeted", 2);
	DECORATOR::DECOR_REGISTER("player_antagonized", 2);
	DECORATOR::DECOR_REGISTER("was_antagonized", 2);
	DECORATOR::DECOR_REGISTER("injured_woman", 2);
	DECORATOR::DECOR_REGISTER("recently_punched", 2);
	DECORATOR::DECOR_REGISTER("was_hurt", 2);
	StringCopy(&cVar0, func_168(), 32);
	DECORATOR::DECOR_REGISTER(&cVar0, 3);
	StringCopy(&cVar0, func_169(), 32);
	DECORATOR::DECOR_REGISTER(&cVar0, 3);
	StringCopy(&cVar0, func_170(), 32);
	DECORATOR::DECOR_REGISTER(&cVar0, 3);
	StringCopy(&cVar0, func_171(), 32);
	DECORATOR::DECOR_REGISTER(&cVar0, 3);
	StringCopy(&cVar0, func_172(), 32);
	DECORATOR::DECOR_REGISTER(&cVar0, 1);
	MemCopy(&cVar0, {func_173()}, 4);
	DECORATOR::DECOR_REGISTER(&cVar0, 3);
	DECORATOR::DECOR_REGISTER("pedRoam_bInPedRoam", 2);
	DECORATOR::DECOR_REGISTER("pedRoam_targetRegion", 3);
	DECORATOR::DECOR_REGISTER("pedRoam_state", 3);
	DECORATOR::DECOR_REGISTER("pedRoam_behavior", 3);
	DECORATOR::DECOR_REGISTER("pedRoam_target", 3);
	DECORATOR::DECOR_REGISTER("pedRoam_targetCoord", 3);
	DECORATOR::DECOR_REGISTER("pedRoam_targetCoord_Z", 1);
	DECORATOR::DECOR_REGISTER("pedRoam_targetArea", 3);
	DECORATOR::DECOR_REGISTER("pedRoam_hashKey", 3);
	DECORATOR::DECOR_REGISTER("pedRoam_owner", 3);
	DECORATOR::DECOR_REGISTER("pedRoam_flags", 3);
	DECORATOR::DECOR_REGISTER("register_open", 2);
	DECORATOR::DECOR_REGISTER("register_open_rdy", 2);
	DECORATOR::DECOR_REGISTER("camera_takingPic", 2);
	DECORATOR::DECOR_REGISTER("wearing_bandana", 2);
	DECORATOR::DECOR_REGISTER("temp_HorseBroken", 2);
	DECORATOR::DECOR_REGISTER("rcm_bnp_beauHogtie", 2);
	DECORATOR::DECOR_REGISTER("rcm_bnp_PenelopeHogtie", 2);
	DECORATOR::DECOR_REGISTER("rcm_elz1_elizaHogtie", 2);
	DECORATOR::DECOR_REGISTER("rcm_SerialKiller_hogtie", 2);
	DECORATOR::DECOR_REGISTER("proc_bounty_target", 2);
	DECORATOR::DECOR_REGISTER("rcm_f_acc_played", 2);
	DECORATOR::DECOR_REGISTER("rcm_f_acc_passed", 2);
	DECORATOR::DECOR_REGISTER("rcm_lakay_bounty_target", 2);
	DECORATOR::DECOR_REGISTER("LoanShark_Knowing", 2);
	DECORATOR::DECOR_REGISTER("LoanShark_Questioned", 2);
	StringCopy(&cVar0, func_174(), 32);
	DECORATOR::DECOR_REGISTER(&cVar0, 2);
	DECORATOR::DECOR_REGISTER("player_crafting_active", 2);
	DECORATOR::DECOR_REGISTER("player_whittling_active", 2);
	DECORATOR::DECOR_REGISTER("bShowIsReady", 2);
	DECORATOR::DECOR_REGISTER("bShowIsPaidFor", 2);
	DECORATOR::DECOR_REGISTER("bUpdatedPlayer", 2);
	DECORATOR::DECOR_REGISTER("Global_Object_Unique_ID", 3);
	DECORATOR::DECOR_REGISTER("Global_Object_PackedDeed", 3);
	DECORATOR::DECOR_REGISTER("Global_Object_Value", 3);
	DECORATOR::DECOR_REGISTER("Global_Object_ExpStart", 3);
	DECORATOR::DECOR_REGISTER("Global_Object_ExpDuration", 3);
	DECORATOR::DECOR_REGISTER("Global_Object_No_Blip", 2);
	DECORATOR::_DECOR_REGISTER_2(func_175(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_176(), 6, true);
	DECORATOR::_DECOR_REGISTER_2(func_177(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_178(), 2, true);
	DECORATOR::_DECOR_REGISTER_2(func_179(), 2, true);
	DECORATOR::_DECOR_REGISTER_2(func_180(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_181(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_182(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_183(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_184(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_185(), 3, true);
	DECORATOR::_DECOR_REGISTER_2("bFmeBaseHasWeapon", 2, true);
	DECORATOR::_DECOR_REGISTER_2("iMinigameHash", 3, true);
	DECORATOR::_DECOR_REGISTER_2("iMinigameSeat", 3, true);
	DECORATOR::DECOR_REGISTER("bBeatPed", 2);
	DECORATOR::DECOR_REGISTER("bIgnoreLawMissionEntity", 2);
	DECORATOR::DECOR_REGISTER("Has_Voice", 2);
	DECORATOR::DECOR_REGISTER("bUnarmed", 2);
	DECORATOR::DECOR_REGISTER("RANSACK", 2);
	DECORATOR::DECOR_REGISTER("bIsCriminal", 2);
	DECORATOR::DECOR_REGISTER("bDeadOrAlive", 2);
	DECORATOR::DECOR_REGISTER("bReacted_To_Shocking_Event", 2);
	DECORATOR::DECOR_REGISTER("REDJ_Witness_Time", 1);
	DECORATOR::DECOR_REGISTER("SafeOpened", 2);
	DECORATOR::DECOR_REGISTER("TargetHit", 2);
	DECORATOR::DECOR_REGISTER("bBeatCriminal", 2);
	DECORATOR::DECOR_REGISTER("bIsSpecialPed", 2);
	DECORATOR::DECOR_REGISTER("iSpecialPedID", 3);
	DECORATOR::DECOR_REGISTER("bPickupThisCorpse", 2);
	DECORATOR::DECOR_REGISTER("last_gun_damage_time_in_ms", 3);
	DECORATOR::DECOR_REGISTER("grapple_start_time", 3);
	DECORATOR::DECOR_REGISTER("grapple_tutorial_played", 2);
	DECORATOR::DECOR_REGISTER("worn_tutorial", 2);
	DECORATOR::DECOR_REGISTER("propsetName", 4);
	DECORATOR::DECOR_REGISTER("witnessCannotBeBribedOrThreatened", 2);
	DECORATOR::_DECOR_REGISTER_2("MP_HUD_Bits", 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_186(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_187(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_188(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_189(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_190(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_191(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_192(), 2, true);
	DECORATOR::_DECOR_REGISTER_2(func_193(), 2, true);
	DECORATOR::_DECOR_REGISTER_2(func_194(), 2, true);
	DECORATOR::_DECOR_REGISTER_2(func_195(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_196(), 2, true);
	DECORATOR::DECOR_REGISTER("MC_EntityID", 3);
	DECORATOR::DECOR_REGISTER("MC_ChasePedID", 3);
	DECORATOR::_DECOR_REGISTER_2("iCampFollowerCamp", 3, true);
	DECORATOR::DECOR_REGISTER("Camp_Defender_Mount_Location", 3);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_Bluegill", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_BullheadCatfish", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_ChainPickerel", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_ChannelCatfish", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_LakeSturgeon", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_LargemouthBass", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_LongnoseGar", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_Muskie", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_NorthernPike", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_Perch", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_RedfinPickerel", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_RockBass", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_SmallmouthBass", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_SockeyeSalmon", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_SteelheadTrout", 1, true);
	DECORATOR::_DECOR_REGISTER_2("FFF_Lives", 3, true);
	DECORATOR::_DECOR_REGISTER_2("FFF_Time", 3, true);
	DECORATOR::_DECOR_REGISTER_2("FFF_Laps", 3, true);
	DECORATOR::_DECOR_REGISTER_2("FFF_Rounds", 3, true);
	DECORATOR::_DECOR_REGISTER_2("FFF_Seated", 2, true);
	DECORATOR::_DECOR_REGISTER_2("PedSeatedForMinigame", 2, true);
	DECORATOR::_DECOR_REGISTER_2("MinigameObject", 2, true);
	DECORATOR::_DECOR_REGISTER_2("DontGrabThisPedForMinigame", 2, true);
	DECORATOR::_DECOR_REGISTER_2(func_197(), 2, true);
	DECORATOR::_DECOR_REGISTER_2(func_198(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_199(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_200(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_201(), 3, true);
	DECORATOR::_DECOR_REGISTER_2("NetHorseFence_Sold", 2, true);
	DECORATOR::DECOR_REGISTER("wagonFenceValue", 3);
	DECORATOR::DECOR_REGISTER("ItemSetScriptIndex", 3);
	DECORATOR::DECOR_REGISTER("HorseTeamA", 2);
	DECORATOR::DECOR_REGISTER("HorseOwnerTeamA", 2);
	DECORATOR::DECOR_REGISTER("HorseTeamB", 2);
	DECORATOR::DECOR_REGISTER("HorseOwnerTeamB", 2);
	DECORATOR::DECOR_REGISTER("HorseScriptCreator", 3);
	DECORATOR::DECOR_REGISTER("UsesTracker", 2);
	DECORATOR::DECOR_REGISTER("bValidRobber", 2);
	DECORATOR::DECOR_REGISTER("STORY_COOP_PED_ID", 3);
	DECORATOR::_DECOR_REGISTER_2(func_202(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_203(), 6, true);
	DECORATOR::_DECOR_REGISTER_2("fast_travel_camp_barker", 3, true);
}

void func_43()
{
	func_204();
	func_205();
	func_206();
}

void func_44()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 2778)
	{
		iVar0 = func_207(iVar1, 1);
		func_208(iVar0);
		iVar1++;
	}
}

int func_45(var uParam0)
{
	switch (func_7(uParam0))
	{
		case 0:
			if (func_209(uParam0))
			{
				uParam0->f_81 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "LoadingScreen");
				uParam0->f_82 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_81, "TooltipText", "");
				uParam0->f_83 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_81, "isVisible", 1);
				func_210(uParam0, 1);
				func_211(uParam0, 1);
			}
			else
			{
				func_211(uParam0, 3);
			}
			break;
		case 1:
			uParam0->f_77 = MISC::GET_GAME_TIMER();
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_82, uParam0->f_5[uParam0->f_78 /*7*/]);
			func_211(uParam0, 2);
			break;
		case 2:
			if (MISC::GET_GAME_TIMER() >= (uParam0->f_77 + (uParam0->f_5[uParam0->f_78 /*7*/])->f_5))
			{
				uParam0->f_78++;
				if (uParam0->f_78 < 10)
				{
					func_211(uParam0, 1);
				}
				else
				{
					func_211(uParam0, 3);
				}
			}
			break;
		case 3:
			func_47(uParam0);
			return 1;
	}
	return 0;
}

bool func_46(var uParam0)
{
	return uParam0->f_80;
}

void func_47(var uParam0)
{
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_81))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_81);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_82))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_82, "");
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_82);
	}
	if (DATAFILE::_0x7907969497EA92F5(*uParam0))
	{
		DATAFILE::_DATAFILE_UNLOAD(*uParam0);
	}
	func_210(uParam0, 0);
}

int func_48()
{
	return Global_1572887->f_12;
}

var func_49(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_50(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_51()
{
	while (!QUEUE::_EVENT_QUEUE_IS_EMPTY(-792505136))
	{
		QUEUE::_EVENT_QUEUE_POP(-792505136);
	}
}

void func_52(var uParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	bVar1 = false;
	if (func_212() || func_213())
	{
		bVar1 = true;
	}
	if (bVar1 != *uParam0)
	{
		*uParam0 = bVar1;
		if (!bVar1)
		{
			func_214(&(uParam0->f_1), 0);
		}
		else if (func_215(&(uParam0->f_1)))
		{
			func_50(&(uParam0->f_1));
		}
	}
	if (!bVar1 && func_215(&(uParam0->f_1)))
	{
		if (func_216(&(uParam0->f_1)) >= 0.5f)
		{
			func_50(&(uParam0->f_1));
		}
		else
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		MISC::SET_BIT(&iVar0, 6);
	}
	if (CAM::IS_GAMEPLAY_CAM_RENDERING() || CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		MISC::SET_BIT(&iVar0, 2);
		MISC::SET_BIT(&iVar0, 5);
		MISC::SET_BIT(&iVar0, 4);
		if (LAW::_GET_WANTED_INTENSITY_FOR_PLAYER(PLAYER::PLAYER_ID()) > 0)
		{
			MISC::SET_BIT(&iVar0, 3);
		}
	}
	func_217(iVar0);
}

void func_53()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		func_218(SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0), iVar0);
		iVar0++;
	}
}

void func_54()
{
	switch (Global_1572887->f_164.f_81)
	{
		case 0:
			func_219();
			break;
		case 1:
			func_220();
			break;
		case 2:
			func_221();
			break;
		case 3:
			func_222();
			break;
	}
}

void func_55()
{
	if (Global_1572887->f_164.f_79 == 0)
	{
		return;
	}
	switch (Global_1572887->f_164.f_79)
	{
		case 1:
			if (MISC::IS_PC_VERSION())
			{
				func_223("NET_SESSION_INV_HEADER", "NT_INV_EXTENDED_PC", joaat("blips"), 1183081869, -2, 0, 0, 0, 0, 1, 1);
				func_224(4);
			}
			else
			{
				func_224(2);
			}
			break;
		case 2:
			func_225();
			func_224(3);
			break;
		case 3:
			if (func_226() == 0)
			{
				return;
			}
			func_224(4);
			break;
		case 4:
			func_224(0);
			break;
	}
}

void func_56()
{
	if (func_16(4))
	{
		func_227();
	}
	switch (Global_1572887->f_164)
	{
		case 0:
			break;
		case 1:
			func_228();
			break;
		case 2:
			func_229();
			break;
		case 4:
			func_230();
			break;
		case 6:
			func_231();
			break;
		case 3:
			func_232();
			break;
		case 5:
			func_233();
			break;
		case 8:
			func_234();
			break;
		case 9:
			func_235();
			break;
		case 10:
			func_236();
			break;
		case 11:
			func_237();
			break;
		case 12:
			func_238();
			break;
		case 13:
			func_239();
			break;
		case 14:
			func_240();
			break;
		case 16:
			func_241();
			break;
		case 17:
			func_242();
			break;
	}
}

void func_57(int iParam0)
{
	Global_1899245 = iParam0;
}

int func_58()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_1898441[iVar1 /*38*/] != 0)
		{
			Global_1899245->f_132 = iVar1;
			iVar0 = 1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_59(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_60(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_243(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			func_59(uParam0);
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		func_59(uParam0);
		return 1;
	}
	return 0;
}

void func_61()
{
	int iVar0;

	if (!MISC::IS_ORBIS_VERSION())
	{
		if (func_58())
		{
			func_62();
		}
		return;
	}
	if (Global_1899245->f_132 >= 20 || Global_1899245->f_132 < 0)
	{
		return;
	}
	iVar0 = Global_1899245->f_132;
	if (func_244(Global_1898441[iVar0 /*38*/]))
	{
		func_245(iVar0);
		(*Global_1898441)[iVar0 /*38*/] = 0;
	}
	if (func_246(Global_1898441[iVar0 /*38*/]))
	{
		(*Global_1898441)[iVar0 /*38*/] = 0;
	}
	switch (Global_1898441[iVar0 /*38*/])
	{
		case 1:
		case 2:
		case 4:
		case 5:
			func_247(*((*Global_1898441)[iVar0 /*38*/]), iVar0, 1);
			break;
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
			func_247(*((*Global_1898441)[iVar0 /*38*/]), iVar0, 0);
			break;
	}
	Global_1899245->f_132++;
	if (Global_1899245->f_132 == 42)
	{
		Global_1899245->f_132 = 0;
	}
}

void func_62()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 19)
	{
		func_245(iVar0);
		iVar0++;
	}
	func_59(&(Global_1899245->f_1));
}

void func_63(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

char* func_64(int iParam0)
{
	char* sVar0;

	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "";
			break;
		case joaat("NEW_GAME"):
			sVar0 = "new_game";
			break;
		case 1651967528:
			sVar0 = "shift_f";
			break;
		case -84928653:
			sVar0 = "demo";
			break;
		case 1306134188:
			sVar0 = "intro_not_done";
			break;
		case -1357178860:
			sVar0 = "private";
			break;
		case joaat("friendly"):
			sVar0 = "friendly";
			break;
		case 655115506:
			sVar0 = "hardcore";
			break;
		case 1737952409:
			sVar0 = "near_posse";
			break;
		case 2137301164:
			sVar0 = "random_posse";
			break;
		case -110687166:
			sVar0 = "open_posse";
			break;
		case -2030542394:
			sVar0 = "follow_invite";
			break;
		case -11301188:
			sVar0 = "random_region";
			break;
		case -1312679892:
			sVar0 = "last_region";
			break;
		case 1433203589:
			sVar0 = "spawn_location";
			break;
		case -61119924:
			sVar0 = "last_location";
			break;
		case 2134863183:
			sVar0 = "camp";
			break;
		case -159568751:
			sVar0 = "handheld";
			break;
		case joaat("benchmark"):
			sVar0 = "benchmark";
			break;
	}
	return sVar0;
}

void func_65(int iParam0, int iParam1)
{
	Global_1572887->f_282 = iParam0;
	Global_1572887->f_282.f_1 = iParam1;
	func_248(28);
}

void func_66()
{
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_FRONTEND_PAUSE"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_CINEMATIC_CAM"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_NEXT_CAMERA"), false);
	if (func_67() != 0)
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	}
}

int func_67()
{
	return vLocal_15.x;
}

void func_68()
{
	Global_1572887->f_282.f_1 = 0;
}

void func_69(int iParam0)
{
	NETWORK::_0x704F92B3AF20D857(iParam0);
}

void func_70()
{
	struct<19> Var0;

	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
		{
			return;
		}
	}
	if (NETWORK::_0x8FB7C254CFCBF78E(&(Global_1572887->f_252)))
	{
		NETWORK::_0xE72E5C1289BD1F40(&(Global_1572887->f_252));
	}
	Var0.f_5 = 2;
	Var0.f_12 = -1;
	Var0.f_17 = -1;
	Global_1572887->f_252 = { Var0 };
}

void func_71()
{
	func_249();
	func_250(-1);
	func_251(0);
	Global_1572887->f_164.f_61 = 0;
	if (Global_1572887->f_164.f_83 == 2)
	{
		Global_1572887->f_164.f_83 = 0;
	}
}

void func_72(int iParam0)
{
	Global_1572887->f_164.f_64 = iParam0;
}

void func_73()
{
	var uVar0;

	NETWORK::NETWORK_SET_RICH_PRESENCE(0, &uVar0, 1, 0);
}

void func_74(int iParam0)
{
	Global_1572887->f_12 = iParam0;
}

void func_75(int iParam0)
{
	vLocal_15.x = iParam0;
	vLocal_15.f_1 = MISC::GET_GAME_TIMER();
}

int func_76()
{
	int iVar0;
	vector3 vVar1;

	if (func_252())
	{
		return 0;
	}
	iVar0 = 0;
	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(joaat("landing_page")))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(joaat("landing_page"), &vVar1))
		{
			switch (vVar1.x)
			{
				case -1203660660:
					if (vVar1.z == -490822059)
					{
						AUDIO::_0xAC84686C06184B0D("Fade_To_SP", "Load_Menu_Scenes");
						func_253(joaat("single_player"));
						iVar0 = 1;
					}
					else if (vVar1.z == 2143694500)
					{
						AUDIO::_0xAC84686C06184B0D("Fade_To_MP", "Load_Menu_Scenes");
						iVar0 = 1;
					}
					else if (vVar1.z == 367452774)
					{
						AUDIO::_0xAC84686C06184B0D("Fade_To_MP", "Load_Menu_Scenes");
						iVar0 = 1;
					}
					else if (vVar1.z == 1317995259)
					{
						AUDIO::_0xAC84686C06184B0D("Fade_To_MP", "Load_Menu_Scenes");
						func_253(joaat("freeroam"));
						func_254(1306134188);
						iVar0 = 1;
					}
					else if (vVar1.z == 425390024)
					{
						NETWORK::_0x7AC752103856FB20(false);
					}
					else if (vVar1.z == 446331713)
					{
						NETWORK::_0x7AC752103856FB20(true);
					}
					else if (vVar1.z == 505720336)
					{
						if (func_34() == 2)
						{
							Global_43892 = 1;
							func_63(128);
							NETWORK::_0x782C94DB6469634D(func_64(joaat("benchmark")));
						}
						else
						{
							func_253(joaat("benchmark"));
							iVar0 = 1;
						}
					}
					break;
			}
		}
		UIEVENTS::_EVENT_MANAGER_POP_EVENT(joaat("landing_page"));
	}
	return iVar0;
}

bool func_77()
{
	return func_255() > 120000;
}

int func_78()
{
	char* sVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!NETWORK::_0x02E97CE283648CD9(func_256(joaat("mode"))))
	{
		if (func_80() == 0)
		{
			func_253(joaat("single_player"));
			func_248(28);
			return 1;
		}
		else
		{
			func_248(28);
			return 1;
		}
	}
	func_257(&(Global_1572887->f_282));
	sVar0 = NETWORK::_0x65E65CA6A0FE59D4(func_256(joaat("mode")));
	iVar1 = MISC::GET_HASH_KEY(sVar0);
	if (iVar1 != 0)
	{
		func_253(iVar1);
	}
	if (NETWORK::_0x02E97CE283648CD9(func_256(82543689)))
	{
		sVar0 = NETWORK::_0x65E65CA6A0FE59D4(func_256(82543689));
		Global_1572887->f_282.f_3 = func_258(MISC::GET_HASH_KEY(sVar0));
	}
	if (NETWORK::_0x02E97CE283648CD9(func_256(-1926951471)))
	{
		sVar0 = NETWORK::_0x65E65CA6A0FE59D4(func_256(-1926951471));
		Global_1572887->f_282.f_4 = func_259(MISC::GET_HASH_KEY(sVar0));
	}
	if (NETWORK::_0x02E97CE283648CD9(func_256(-763890493)))
	{
		sVar0 = NETWORK::_0x65E65CA6A0FE59D4(func_256(-763890493));
		Global_1572887->f_282.f_5 = func_260(MISC::GET_HASH_KEY(sVar0));
	}
	if (NETWORK::_0x02E97CE283648CD9(func_256(-875643756)))
	{
		sVar0 = NETWORK::_0x65E65CA6A0FE59D4(func_256(-875643756));
		Global_1572887->f_282.f_7 = func_261(MISC::GET_HASH_KEY(sVar0));
		Global_1572887->f_282.f_6 = -1;
	}
	if (NETWORK::_0x02E97CE283648CD9(func_256(64789430)))
	{
		sVar0 = NETWORK::_0x65E65CA6A0FE59D4(func_256(64789430));
		Global_1572887->f_282.f_2 = func_262(MISC::GET_HASH_KEY(sVar0));
	}
	if (NETWORK::_0x02E97CE283648CD9(func_256(735882532)))
	{
		sVar0 = NETWORK::_0x65E65CA6A0FE59D4(func_256(735882532));
		Global_1572887->f_282.f_8 = MISC::GET_HASH_KEY(sVar0);
	}
	Global_1572887->f_282.f_9 = 0;
	if (NETWORK::_0x02E97CE283648CD9(func_256(joaat("p_fav01_grass_06_268"))))
	{
		sVar0 = NETWORK::_0x65E65CA6A0FE59D4(func_256(joaat("p_fav01_grass_06_268")));
		if (MISC::STRING_TO_INT(sVar0, &(Global_1572887->f_282.f_9)))
		{
		}
	}
	iVar2 = -730035725;
	iVar4 = 0;
	iVar5 = -730035725;
	iVar4 = 0;
	while (iVar4 <= 15)
	{
		iVar2 = (iVar5 + iVar4);
		if (NETWORK::_0x02E97CE283648CD9(func_256(iVar2)))
		{
			sVar0 = NETWORK::_0x65E65CA6A0FE59D4(func_256(iVar2));
			iVar3 = MISC::GET_HASH_KEY(sVar0);
			if (iVar3 != 0)
			{
				func_254(iVar3);
			}
		}
		iVar4++;
	}
	func_248(28);
	return 1;
}

void func_79()
{
	switch (func_80())
	{
		case joaat("single_player"):
			vLocal_15.f_2 = 2;
			break;
		case joaat("benchmark"):
			vLocal_15.f_2 = 2;
			NETWORK::_0x668AF6E4933AC13F(func_64(joaat("benchmark")), "1");
			break;
		case joaat("freeroam"):
			if (!NETWORK::_0x2A8112A974DE1EF6())
			{
				vLocal_15.f_2 = 1;
				func_63(4);
				if (func_81(-2030542394) || NETWORK::_0xFC4165C9165C166F())
				{
					NETWORK::_0xA4484173759749B1();
				}
			}
			else
			{
				vLocal_15.f_2 = 3;
				func_63(68);
				AUDIO::_0xAC84686C06184B0D("Fade_To_MP", "Load_Menu_Scenes");
			}
			break;
		case -1743646234:
			break;
		case -1330461529:
			if (!NETWORK::_0x2A8112A974DE1EF6())
			{
				vLocal_15.f_2 = 1;
				func_63(4);
				if (func_81(-2030542394) || NETWORK::_0xFC4165C9165C166F())
				{
					NETWORK::_0xA4484173759749B1();
				}
			}
			else
			{
				vLocal_15.f_2 = 3;
				func_63(68);
				AUDIO::_0xAC84686C06184B0D("Fade_To_MP", "Load_Menu_Scenes");
			}
			break;
		case joaat("mission"):
			if (!NETWORK::_0x2A8112A974DE1EF6())
			{
				vLocal_15.f_2 = 1;
				func_63(4);
				if (func_81(-2030542394) || NETWORK::_0xFC4165C9165C166F())
				{
					NETWORK::_0xA4484173759749B1();
				}
			}
			else
			{
				vLocal_15.f_2 = 3;
				func_63(68);
				AUDIO::_0xAC84686C06184B0D("Fade_To_MP", "Load_Menu_Scenes");
			}
			break;
		case 1495295997:
			if (!NETWORK::_0x2A8112A974DE1EF6())
			{
				vLocal_15.f_2 = 1;
				func_63(4);
				if (func_81(-2030542394) || NETWORK::_0xFC4165C9165C166F())
				{
					NETWORK::_0xA4484173759749B1();
				}
			}
			else
			{
				vLocal_15.f_2 = 3;
				func_63(68);
				AUDIO::_0xAC84686C06184B0D("Fade_To_MP", "Load_Menu_Scenes");
			}
			break;
		case joaat("mission_creator"):
			if (!NETWORK::_0x2A8112A974DE1EF6())
			{
				vLocal_15.f_2 = 1;
				func_63(4);
				if (func_81(-2030542394) || NETWORK::_0xFC4165C9165C166F())
				{
					NETWORK::_0xA4484173759749B1();
				}
			}
			else
			{
				vLocal_15.f_2 = 3;
				func_63(68);
				AUDIO::_0xAC84686C06184B0D("Fade_To_MP", "Load_Menu_Scenes");
			}
			break;
		case joaat("clip"):
			vLocal_15.f_2 = 4;
			func_63(4);
			AUDIO::_0xAC84686C06184B0D("Fade_To_SP", "Load_Menu_Scenes");
			break;
	}
}

int func_80()
{
	return Global_1572887->f_282;
}

bool func_81(int iParam0)
{
	return func_264(Global_1572887->f_282.f_1, func_263(iParam0));
}

void func_82(int iParam0)
{
	Global_1572887->f_13 = iParam0;
}

char* func_83(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "startup_sp";
		case 3:
			return "startup_mp";
		case 4:
			return "startup_clip";
	}
	return "startup_sp";
}

void func_84(int iParam0)
{
	Global_1572864 = iParam0;
}

int func_85(char* sParam0, int iParam1)
{
	if (!SCRIPTS::DOES_SCRIPT_EXIST(sParam0))
	{
		return 0;
	}
	SCRIPTS::REQUEST_SCRIPT(sParam0);
	if (!SCRIPTS::HAS_SCRIPT_LOADED(sParam0))
	{
		return 0;
	}
	SCRIPTS::START_NEW_SCRIPT(sParam0, iParam1);
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam0);
	return 1;
}

void func_86(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			AUDIO::_0xAC84686C06184B0D("Fade_To_SP", "Load_Menu_Scenes");
			break;
		case 3:
			AUDIO::_0xAC84686C06184B0D("Fade_To_MP", "Load_Menu_Scenes");
			break;
		case 4:
			AUDIO::_0xAC84686C06184B0D("Fade_To_Editor", "Load_Menu_Scenes");
			break;
	}
}

char* func_87()
{
	char cVar0[64];
	char cVar8[64];
	struct<8> Var16[10];
	int iVar97;
	int iVar98;
	int iVar99;
	char cVar100[64];
	char cVar108[64];
	char cVar116[64];
	char cVar124[64];
	char cVar132[64];
	char cVar140[64];

	StringCopy(&cVar0, "-mode=", 64);
	StringConCat(&cVar0, func_265(func_80()), 64);
	StringCopy(&cVar8, "-char_slot=", 64);
	StringIntConCat(&cVar8, Global_1572887->f_282.f_9, 64);
	switch (func_80())
	{
		case joaat("benchmark"):
		case joaat("single_player"):
			return MISC::_CREATE_VAR_STRING(10, "LAUNCH_PARAMS", &cVar0);
		case joaat("freeroam"):
			iVar98 = 0;
			iVar99 = 0;
			iVar98 = 0;
			while (iVar98 <= 15)
			{
				iVar97 = func_266(iVar98);
				if (func_81(iVar97) && iVar99 < 10)
				{
					StringCopy(Var16[iVar99 /*8*/], "-arg_", 64);
					StringIntConCat(Var16[iVar99 /*8*/], iVar99, 64);
					StringConCat(Var16[iVar99 /*8*/], "=", 64);
					StringConCat(Var16[iVar99 /*8*/], func_64(iVar97), 64);
					iVar99++;
				}
				iVar98++;
			}
			if (Global_1572887->f_282.f_3 != -1)
			{
				StringCopy(&cVar100, "-region_id=", 64);
				StringConCat(&cVar100, func_267(Global_1572887->f_282.f_3), 64);
				return MISC::_CREATE_VAR_STRING(174762, "LAUNCH_PARAMS", &cVar0, &cVar8, &cVar100, Var16[0 /*8*/], Var16[1 /*8*/], Var16[2 /*8*/], Var16[3 /*8*/], Var16[4 /*8*/]);
			}
			else if (Global_1572887->f_282.f_4 != -1)
			{
				StringCopy(&cVar108, "-district_id=", 64);
				StringConCat(&cVar108, func_268(Global_1572887->f_282.f_4), 64);
				return MISC::_CREATE_VAR_STRING(174762, "LAUNCH_PARAMS", &cVar0, &cVar8, &cVar108, Var16[0 /*8*/], Var16[1 /*8*/], Var16[2 /*8*/], Var16[3 /*8*/], Var16[4 /*8*/]);
			}
			else if (Global_1572887->f_282.f_5 != -1)
			{
				StringCopy(&cVar116, "-state_id=", 64);
				StringConCat(&cVar116, func_269(Global_1572887->f_282.f_5), 64);
				return MISC::_CREATE_VAR_STRING(174762, "LAUNCH_PARAMS", &cVar0, &cVar8, &cVar116, Var16[0 /*8*/], Var16[1 /*8*/], Var16[2 /*8*/], Var16[3 /*8*/], Var16[4 /*8*/]);
			}
			else
			{
				return MISC::_CREATE_VAR_STRING(43690, "LAUNCH_PARAMS", &cVar0, &cVar8, Var16[0 /*8*/], Var16[1 /*8*/], Var16[2 /*8*/], Var16[3 /*8*/], Var16[4 /*8*/]);
			}
			break;
		case -1743646234:
			return MISC::_CREATE_VAR_STRING(42, "LAUNCH_PARAMS", &cVar0, &cVar8);
		case -1330461529:
			StringCopy(&cVar124, "-series_id=", 64);
			StringConCat(&cVar124, func_270(Global_1572887->f_282.f_2), 64);
			return MISC::_CREATE_VAR_STRING(170, "LAUNCH_PARAMS", &cVar0, &cVar8, &cVar124);
		case joaat("mission"):
			StringCopy(&cVar132, "-mission_id=", 64);
			StringConCat(&cVar132, "", 64);
			return MISC::_CREATE_VAR_STRING(170, "LAUNCH_PARAMS", &cVar0, &cVar8, &cVar132);
		case 1495295997:
			StringCopy(&cVar140, "-minigame_id=", 64);
			StringConCat(&cVar140, func_271(Global_1572887->f_282.f_7), 64);
			return MISC::_CREATE_VAR_STRING(170, "LAUNCH_PARAMS", &cVar0, &cVar8, &cVar140);
		case joaat("mission_creator"):
			return MISC::_CREATE_VAR_STRING(42, "LAUNCH_PARAMS", &cVar0, &cVar8);
	}
	return "";
}

void func_88()
{
	BRAIN::DISABLE_SCRIPT_BRAIN_SET(1);
}

void func_89()
{
}

void func_90()
{
	BRAIN::DISABLE_SCRIPT_BRAIN_SET(2);
}

void func_91(var uParam0)
{
	int iVar0;
	char cVar1[64];

	SAVE::_0x8E8FFB9E4AD051D2(uParam0, 30, "saveGameData", 20);
	SAVE::_0xB25B5A375BE5BE26(uParam0, "saveGameData.saveGameLocation");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_1), "saveGameData.iSaveGamePropset");
	func_152(&(uParam0->f_2), "saveGameData.vSaveGamePropsetPosition");
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_5), "saveGameData.fSaveGamePropsetHeading");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_6), "saveGameData.iSaveGameScenarioHash");
	func_152(&(uParam0->f_7), "saveGameData.vResetPosition");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_10), "saveGameData.iResetRespawnNode");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_11), "saveGameData.iResetAnimIndex");
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_12), "saveGameData.bForceAltAnim");
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_13), "saveGameData.fResetHeading");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_14), "saveGameData.eSavedTOD");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_15), "saveGameData.respawnRegion");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_20), "saveGameData.iResetBounty");
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_16), 4, "saveGameData.iRespawnPosHistory");
	iVar0 = 0;
	while (iVar0 < uParam0->f_16)
	{
		StringCopy(&cVar1, "saveGameData.iRespawnPosHistory", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		SAVE::_0x529B9CCD0972AF4D(uParam0->f_16[iVar0], &cVar1);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0x443174C20B8B9E7F(&(uParam0->f_21), 9, "saveGameData.missionReplayData");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_21), "saveGameData.missionReplayData.iBitStorage");
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_21.f_1), 5, "saveGameData.missionReplayData.iGeneralStorage");
	iVar0 = 0;
	while (iVar0 < uParam0->f_21.f_1)
	{
		StringCopy(&cVar1, "saveGameData.missionReplayData.iGeneralStorage", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		SAVE::_0x529B9CCD0972AF4D(uParam0->f_21.f_1[iVar0], &cVar1);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_21.f_6), 3, "saveGameData.missionReplayData.fGeneralStorage");
	iVar0 = 0;
	while (iVar0 < uParam0->f_21.f_6)
	{
		StringCopy(&cVar1, "saveGameData.missionReplayData.fGeneralStorage", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		SAVE::_0x35DEFECAE36D4FAE(uParam0->f_21.f_6[iVar0], &cVar1);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
	SAVE::_0xE0B45E983BFC0768();
}

void func_92(var uParam0, char* sParam1, int iParam2)
{
	SAVE::_0x443174C20B8B9E7F(uParam0, 243, "flow");
	SAVE::_0xBB7F4273C186BC4B(uParam0, "flow.isGameflowActive");
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_1), "flow.flowCompleted");
	func_272(&(uParam0->f_2));
	func_273(&(uParam0->f_131));
	SAVE::_0xE0B45E983BFC0768();
}

void func_93(var uParam0, char* sParam1, int iParam2)
{
	char cVar0[64];
	struct<8> Var8;

	StringCopy(&cVar0, "playerHorse", 64);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eCurrentStableSlot", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 3142, &cVar0);
	SAVE::_0xB25B5A375BE5BE26(uParam0, &Var8);
	func_274(&(uParam0->f_1));
	func_275(&(uParam0->f_3054));
	func_276(&(uParam0->f_3134));
	func_277(&(uParam0->f_3135));
	func_278(&(uParam0->f_3140));
	SAVE::_0xE0B45E983BFC0768();
}

void func_94(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;
	struct<8> Var17;

	SAVE::_0x443174C20B8B9E7F(uParam0, 1081, "postOfficeData");
	StringCopy(&cVar1, "postOfficeData.trackedParcels", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 1081, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F((*uParam0)[iVar0 /*6*/], 6, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, ".eMailSendFlags", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*6*/])->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".eMailReplyFlags", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*6*/])->f_2), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".eSentTime", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*6*/])->f_3), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".eDeliveryTime", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*6*/])->f_4), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".eTrackedParcel", 64);
		SAVE::_0xB25B5A375BE5BE26((*uParam0)[iVar0 /*6*/], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".bOverrideDeliveryTime", 64);
		SAVE::_0xBB7F4273C186BC4B(&(((*uParam0)[iVar0 /*6*/])->f_5), &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_95(var uParam0)
{
	char cVar0[64];
	struct<8> Var8;
	struct<8> Var16;
	int iVar24;

	SAVE::_0x8E8FFB9E4AD051D2(uParam0, 659, "caravanCamp", 39);
	SAVE::_0xB25B5A375BE5BE26(uParam0, "caravanCamp.eCurrentCamp");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_1), "caravanCamp.eCurrentCampRegion");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_2), "caravanCamp.eCampFlags");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_3), "caravanCamp.eCampAppearance");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_4), "caravanCamp.eCampSetupState");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_5), "caravanCamp.eCampSubstate");
	StringCopy(&cVar0, "caravancamp.activeCampStateTags", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_6), 301, &cVar0);
	iVar24 = 0;
	while (iVar24 < uParam0->f_6)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0->f_6[iVar24 /*5*/], 5, &Var8);
		Var16 = { Var8 };
		StringConCat(&Var16, ".eTag", 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0->f_6[iVar24 /*5*/], &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".eExpiry", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0->f_6[iVar24 /*5*/])->f_1), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".ePersistence", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0->f_6[iVar24 /*5*/])->f_2), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iPriority", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0->f_6[iVar24 /*5*/])->f_3), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".eCategory", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0->f_6[iVar24 /*5*/])->f_4), &Var16);
		SAVE::_0xE0B45E983BFC0768();
		iVar24++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0x443174C20B8B9E7F(&(uParam0->f_307), 5, "caravanCamp.sPearsonUnlocks");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_307), "caravanCamp.sPearsonUnlocks.iUnlockedBitset");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_307.f_1), "caravanCamp.sPearsonUnlocks.iItemsCrafted");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_307.f_2), "caravanCamp.sPearsonUnlocks.iAnimalsDonated");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_307.f_3), "caravanCamp.sPearsonUnlocks.iCentsDonated");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_307.f_4), "caravanCamp.sPearsonUnlocks.iTrinkedDonated");
	SAVE::_0xE0B45E983BFC0768();
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_312), "caravanCamp.iCampLevel");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_313), "caravanCamp.iCampChickenCoopLevel");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_314), "caravanCamp.iCampVehicleLevel");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_315), "caravanCamp.iCampToolsLevel");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_316), "caravanCamp.iCampCraftingFireLevel");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_317), "caravanCamp.iCampShavingKitLevel");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_318), "caravanCamp.iCampPearsonLevel");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_319), "caravanCamp.iCampStraussLevel");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_320), "caravanCamp.iCampArthurLevel");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_321), "caravanCamp.iCampTentLevel");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_322), "caravanCamp.iCampHitchLevel");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_323), "caravanCamp.iNumInnocentsKilled");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_324), "caravanCamp.iCampFundsCents");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_325), "caravanCamp.iGangSavingsCents");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_326), "caravanCamp.iBankDebtCents");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_327), "caravanCamp.iCarcassesDonated");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_328), "caravanCamp.todCampSupplyDecrement");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_329), "caravanCamp.todCampFoodDecrement");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_330), "caravanCamp.todNextPlayerStewServe");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_331), "caravanCamp.todNextCompanionDonation");
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_332), 3, "caravanCamp.eLastDonationCompanions");
	SAVE::_0xB25B5A375BE5BE26(uParam0->f_332[0], "caravanCamp.eLastDonationCompanions0");
	SAVE::_0xB25B5A375BE5BE26(uParam0->f_332[1], "caravanCamp.eLastDonationCompanions1");
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, "caravancamp.eCheckinState", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_335), 32, &cVar0);
	iVar24 = 0;
	while (iVar24 < uParam0->f_335)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0->f_335[iVar24], &Var8);
		iVar24++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, "caravanCamp.caravanPurchaseList", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_367), 41, &cVar0);
	iVar24 = 0;
	while (iVar24 < uParam0->f_367)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0->f_367[iVar24 /*4*/], 4, &Var8);
		Var16 = { Var8 };
		StringConCat(&Var16, ".eGlobalItemIdx", 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0->f_367[iVar24 /*4*/], &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iPurchaseTimer", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0->f_367[iVar24 /*4*/])->f_1), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iPurchaseCount", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0->f_367[iVar24 /*4*/])->f_2), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".eShopPurchasedFrom", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0->f_367[iVar24 /*4*/])->f_3), &Var16);
		SAVE::_0xE0B45E983BFC0768();
		iVar24++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0x443174C20B8B9E7F(&(uParam0->f_408), 7, "caravanCamp.sCaravanChoreData");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_408), "caravanCamp.sCaravanChoreData.iChoresCompletedBitMask");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_408.f_1), "caravanCamp.sCaravanChoreData.todLastChoreCompleted");
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_408.f_2), "caravanCamp.sCaravanChoreData.fMilkAmount");
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_408.f_3), "caravanCamp.sCaravanChoreData.fEggAmount");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_408.f_4), "caravanCamp.sCaravanChoreData.iNumberOfChoresCompletedTotal");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_408.f_5), "caravanCamp.sCaravanChoreData.iTimesCowWasMilkedToday");
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_408.f_6), "caravanCamp.sCaravanChoreData.bStallsCleaned");
	SAVE::_0xE0B45E983BFC0768();
	SAVE::_0x443174C20B8B9E7F(&(uParam0->f_415), 25, "caravanCamp.sSupplyGroups");
	StringCopy(&cVar0, "caravanCamp.sSupplyGroups.iGroupItemsRemovedBitset", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_415), 5, &cVar0);
	iVar24 = 0;
	while (iVar24 < uParam0->f_415)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		SAVE::_0x529B9CCD0972AF4D(uParam0->f_415[iVar24], &Var8);
		iVar24++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_415.f_5), "caravanCamp.sSupplyGroups.todCompanionNextRemoval");
	StringCopy(&cVar0, "caravanCamp.sSupplyGroups.iUnlockHashes", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_415.f_6), 18, &cVar0);
	iVar24 = 0;
	while (iVar24 < uParam0->f_415.f_6)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		SAVE::_0x529B9CCD0972AF4D(uParam0->f_415.f_6[iVar24], &Var8);
		iVar24++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_415.f_24), "caravanCamp.sSupplyGroups.iUnlockHashCount");
	SAVE::_0xE0B45E983BFC0768();
	SAVE::_0x443174C20B8B9E7F(&(uParam0->f_440), 127, "caravanCamp.sContData");
	StringCopy(&cVar0, "caravanCamp.sContData.sPg", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_440), 127, &cVar0);
	iVar24 = 0;
	while (iVar24 < uParam0->f_440)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0->f_440[iVar24 /*63*/], 63, &Var8);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iCarriedOverCents", 64);
		SAVE::_0x529B9CCD0972AF4D(uParam0->f_440[iVar24 /*63*/], &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".sCont", 64);
		func_279(Var16, &((uParam0->f_440[iVar24 /*63*/])->f_1));
		Var16 = { Var8 };
		StringConCat(&Var16, ".iContributionCount", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0->f_440[iVar24 /*63*/])->f_62), &Var16);
		SAVE::_0xE0B45E983BFC0768();
		iVar24++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
	SAVE::_0x443174C20B8B9E7F(&(uParam0->f_567), 7, "caravanCamp.sCampHorseData");
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_567), "caravanCamp.sCampHitchedHorseSavedData.bCampHorseHitched");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_567.f_1), "caravanCamp.sCampHitchedHorseSavedData.eCampIndex");
	func_152(&(uParam0->f_567.f_2), "caravanCamp.sCampHitchedHorseSavedData.vHitchedAtCoords");
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_567.f_5), "caravanCamp.sCampHitchedHorseSavedData.fHitchedAtHeading");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_567.f_6), "caravanCamp.sCampHitchedHorseSavedData.iHorseGender");
	SAVE::_0xE0B45E983BFC0768();
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_574), "caravanCamp.eLongAbsenceInstancesSeen");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_575), "caravanCamp.todLongAbsenceTOD");
	SAVE::_0x443174C20B8B9E7F(&(uParam0->f_576), 2, "caravanCamp.sCampAmbientStreams");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_576.f_1), "caravanCamp.sCampAmbientStreams.todLastStreamPlayed");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_576), "caravanCamp.sCampAmbientStreams.iCounterStreamBeenPlayed");
	SAVE::_0xE0B45E983BFC0768();
	StringCopy(&cVar0, "caravanCamp.eMiniExchangeQueue", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_578), 81, &cVar0);
	iVar24 = 0;
	while (iVar24 < uParam0->f_578)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0->f_578[iVar24], &Var8);
		iVar24++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_96(var uParam0)
{
	int iVar0;
	char cVar1[64];

	SAVE::_0x443174C20B8B9E7F(uParam0, 22, "loansharkingData");
	SAVE::_0x529B9CCD0972AF4D(uParam0, "loansharkingData.iLSActiveDebtors");
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_1), 10, "loansharkingData.todLSVictimRespawn");
	iVar0 = 0;
	while (iVar0 < uParam0->f_1)
	{
		StringCopy(&cVar1, "loansharkingData.todLSVictimRespawn", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0->f_1[iVar0], &cVar1);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_11), 10, "loansharkingData.eLSSavedMissionFlags");
	iVar0 = 0;
	while (iVar0 < uParam0->f_11)
	{
		StringCopy(&cVar1, "loansharkingData.eLSSavedMissionFlags", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0->f_11[iVar0], &cVar1);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_21), "loansharkingData.eLSSavedSystemFlags");
	SAVE::_0xE0B45E983BFC0768();
}

void func_97(var uParam0)
{
	SAVE::_0x443174C20B8B9E7F(uParam0, 5, "bountyhuntingData");
	SAVE::_0x529B9CCD0972AF4D(uParam0, "bountyhuntingData.iBountiesCompleted");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_1), "bountyhuntingData.eFlags");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_2), "bountyhuntingData.eRCMStage");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_3), "bountyhuntingData.iRewardAlive");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_4), "bountyhuntingData.iRewardDead");
	SAVE::_0xE0B45E983BFC0768();
}

void func_98(var uParam0)
{
	char cVar0[64];
	struct<8> Var8;
	int iVar16;

	SAVE::_0x443174C20B8B9E7F(uParam0, 17, "bankRobberyData");
	StringCopy(&cVar0, "bankRobberyData.eFlags", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 5, &cVar0);
	iVar16 = 0;
	while (iVar16 < *uParam0)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		SAVE::_0xB25B5A375BE5BE26((*uParam0)[iVar16], &Var8);
		iVar16++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, "bankRobberyData.eStatus", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_5), 5, &cVar0);
	iVar16 = 0;
	while (iVar16 < uParam0->f_5)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0->f_5[iVar16], &Var8);
		iVar16++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, "bankRobberyData.todLastRobTime", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_10), 5, &cVar0);
	iVar16 = 0;
	while (iVar16 < uParam0->f_10)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0->f_10[iVar16], &Var8);
		iVar16++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, "bankRobberyData.iCompletedRobberies", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_15), &cVar0);
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_16), "bankRobberyData.bIsBraveClientActive");
	SAVE::_0xE0B45E983BFC0768();
}

void func_99(var uParam0)
{
	char cVar0[64];
	struct<8> Var8;
	int iVar16;

	SAVE::_0x443174C20B8B9E7F(uParam0, 127, "coachRobbery");
	SAVE::_0x529B9CCD0972AF4D(uParam0, "coachRobbery.iCompletedRobberies");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_3), "coachRobbery.eActiveRobbery");
	StringCopy(&cVar0, "coachRobbery.eStatus", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_4), 15, &cVar0);
	iVar16 = 0;
	while (iVar16 < uParam0->f_4)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0->f_4[iVar16], &Var8);
		iVar16++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, "coachRobbery.eCurrentVariant", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_19), 15, &cVar0);
	iVar16 = 0;
	while (iVar16 < uParam0->f_19)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0->f_19[iVar16], &Var8);
		iVar16++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, "coachRobbery.eCurrentDifficulty", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_34), 15, &cVar0);
	iVar16 = 0;
	while (iVar16 < uParam0->f_34)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0->f_34[iVar16], &Var8);
		iVar16++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, "coachRobbery.todCoachRobExp", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_79), 15, &cVar0);
	iVar16 = 0;
	while (iVar16 < uParam0->f_79)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0->f_79[iVar16], &Var8);
		iVar16++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, "coachRobbery.todCoachRobAct", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_64), 15, &cVar0);
	iVar16 = 0;
	while (iVar16 < uParam0->f_64)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0->f_64[iVar16], &Var8);
		iVar16++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, "coachRobbery.iTimesOffered", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_49), 15, &cVar0);
	iVar16 = 0;
	while (iVar16 < uParam0->f_49)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		SAVE::_0x529B9CCD0972AF4D(uParam0->f_49[iVar16], &Var8);
		iVar16++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, "coachRobbery.bNoteHasBeenRead", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_94), 15, &cVar0);
	iVar16 = 0;
	while (iVar16 < uParam0->f_94)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		SAVE::_0xBB7F4273C186BC4B(uParam0->f_94[iVar16], &Var8);
		iVar16++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, "coachRobbery.iRobberiesSinceLastPoliceTrap", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_111), 15, &cVar0);
	iVar16 = 0;
	while (iVar16 < uParam0->f_111)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		SAVE::_0x529B9CCD0972AF4D(uParam0->f_111[iVar16], &Var8);
		iVar16++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_2), "coachRobbery.eCurrentRobberyStr");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_1), "coachRobbery.eCurrentRobberyRho");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_126), "coachRobbery.eCoachBitflags");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_109), "coachRobbery.todCoachRobberyCompleted");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_110), "coachRobbery.todTipGivenByFreightWorker");
	SAVE::_0xE0B45E983BFC0768();
}

void func_100(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;

	StringCopy(&cVar1, "tutorialSaved", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 76, &cVar1);
	StringCopy(&cVar1, "tutorialSaved.sTimedData", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 76, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F((*uParam0)[iVar0 /*3*/], 3, &Var9);
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		StringConCat(&Var9, "iTimeLastRun", 64);
		SAVE::_0x529B9CCD0972AF4D((*uParam0)[iVar0 /*3*/], &Var9);
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		StringConCat(&Var9, "iTimesRun", 64);
		SAVE::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar0 /*3*/])->f_1), &Var9);
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		StringConCat(&Var9, "eTutorial", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*3*/])->f_2), &Var9);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_101(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;

	StringCopy(&cVar1, "eTutorialsRun", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 22, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0xB25B5A375BE5BE26((*uParam0)[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_102(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;
	char cVar17[64];
	struct<8> Var25;

	StringCopy(&cVar1, "lawStateData", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 73, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F((*uParam0)[iVar0 /*12*/], 12, &Var9);
		cVar17 = { Var9 };
		StringConCat(&cVar17, "iStateBounty", 64);
		SAVE::_0x529B9CCD0972AF4D((*uParam0)[iVar0 /*12*/], &cVar17);
		cVar17 = { Var9 };
		StringConCat(&cVar17, "vLastKnownLocation", 64);
		func_152(&(((*uParam0)[iVar0 /*12*/])->f_1), &cVar17);
		cVar17 = { Var9 };
		StringConCat(&cVar17, "fLastKnownRadius", 64);
		SAVE::_0x35DEFECAE36D4FAE(&(((*uParam0)[iVar0 /*12*/])->f_4), &cVar17);
		cVar17 = { Var9 };
		StringConCat(&cVar17, "eStateFlags", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*12*/])->f_5), &cVar17);
		cVar17 = { Var9 };
		StringConCat(&cVar17, "stateLawMemoryData", 64);
		SAVE::_0x443174C20B8B9E7F(&(((*uParam0)[iVar0 /*12*/])->f_6), 6, &cVar17);
		Var25 = { cVar17 };
		StringConCat(&Var25, "eLastOuftitSeenByLaw", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*12*/])->f_6), &Var25);
		Var25 = { cVar17 };
		StringConCat(&Var25, "eSideburnsStyle", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*12*/])->f_6.f_1), &Var25);
		Var25 = { cVar17 };
		StringConCat(&Var25, "eChinStyle", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*12*/])->f_6.f_2), &Var25);
		Var25 = { cVar17 };
		StringConCat(&Var25, "eMustacheStyle", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*12*/])->f_6.f_3), &Var25);
		Var25 = { cVar17 };
		StringConCat(&Var25, "eTimeOutfitLastSeen", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*12*/])->f_6.f_4), &Var25);
		Var25 = { cVar17 };
		StringConCat(&Var25, "eAppearanceLawMemoryFlags", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*12*/])->f_6.f_5), &Var25);
		SAVE::_0xE0B45E983BFC0768();
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_103(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;
	struct<8> Var17;

	StringCopy(&cVar1, "lawDistrictData", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 18, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F((*uParam0)[iVar0], 1, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "eLawDistrictFlags", 64);
		SAVE::_0xB25B5A375BE5BE26((*uParam0)[iVar0], &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_104(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;
	struct<8> Var17;

	StringCopy(&cVar1, "caravanEventData", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 57, &cVar1);
	iVar0 = 0;
	while (iVar0 < 7)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F((*uParam0)[iVar0 /*8*/], 8, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, ".iTimesCompleted", 64);
		SAVE::_0x529B9CCD0972AF4D((*uParam0)[iVar0 /*8*/], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".iTimesSeen", 64);
		SAVE::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar0 /*8*/])->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".iTimesLaunched", 64);
		SAVE::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar0 /*8*/])->f_2), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".iTimesSpawned", 64);
		SAVE::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar0 /*8*/])->f_3), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".todNextAvailable", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*8*/])->f_4), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".iGeneric1", 64);
		SAVE::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar0 /*8*/])->f_5), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".iGeneric2", 64);
		SAVE::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar0 /*8*/])->f_6), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".bUnlocked", 64);
		SAVE::_0xBB7F4273C186BC4B(&(((*uParam0)[iVar0 /*8*/])->f_7), &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_105(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;

	StringCopy(&cVar1, "pendingRCMStage", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 40, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0xB25B5A375BE5BE26((*uParam0)[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_106(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;

	StringCopy(&cVar1, "rcmDataSaved", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 603, &cVar1);
	StringCopy(&cVar1, "rcmDataSaved.iSavedFloat1", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 201, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringConCat(&Var9, "_", 64);
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x35DEFECAE36D4FAE((*uParam0)[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar1, "rcmDataSaved.iSavedFloat2", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_201), 201, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_201)
	{
		Var9 = { cVar1 };
		StringConCat(&Var9, "_", 64);
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x35DEFECAE36D4FAE(uParam0->f_201[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar1, "rcmDataSaved.eRCMSavedFlags", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_402), 201, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_402)
	{
		Var9 = { cVar1 };
		StringConCat(&Var9, "_", 64);
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0->f_402[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_107(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;
	struct<8> Var17;

	StringCopy(&cVar1, "playerOnlyGreetStack", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 46, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F((*uParam0)[iVar0 /*3*/], 3, &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "eRuleset", 64);
		SAVE::_0xB25B5A375BE5BE26((*uParam0)[iVar0 /*3*/], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todExpiry", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*3*/])->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "bTempDisable", 64);
		SAVE::_0xBB7F4273C186BC4B(&(((*uParam0)[iVar0 /*3*/])->f_2), &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_108(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;
	struct<8> Var17;
	struct<8> Var25;
	int iVar33;

	StringCopy(&cVar1, "companionData", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 1621, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x8E8FFB9E4AD051D2((*uParam0)[iVar0 /*60*/], 60, &Var9, 21);
		Var17 = { Var9 };
		StringConCat(&Var17, "companionFlags", 64);
		SAVE::_0xB25B5A375BE5BE26((*uParam0)[iVar0 /*60*/], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iTrustLevel", 64);
		SAVE::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar0 /*60*/])->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iFollowerLevel", 64);
		SAVE::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar0 /*60*/])->f_2), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "companionOutfit", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*60*/])->f_3), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "lastWornOutfitOnMission", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*60*/])->f_4), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "wornItems", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*60*/])->f_5), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "modelCompanion", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*60*/])->f_6), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "modelCompanionHorse", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*60*/])->f_7), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "immediateGreetOverride", 64);
		SAVE::_0x443174C20B8B9E7F(&(((*uParam0)[iVar0 /*60*/])->f_8), 3, &Var17);
		Var25 = { Var17 };
		StringConCat(&Var25, "eRuleset", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*60*/])->f_8), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "todExpiry", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*60*/])->f_8.f_1), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "bTempDisable", 64);
		SAVE::_0xBB7F4273C186BC4B(&(((*uParam0)[iVar0 /*60*/])->f_8.f_2), &Var25);
		SAVE::_0xE0B45E983BFC0768();
		Var17 = { Var9 };
		StringConCat(&Var17, "greetOverrides", 64);
		SAVE::_0x81F4E92BE3958364(&(((*uParam0)[iVar0 /*60*/])->f_11), 31, &Var17);
		iVar33 = 0;
		while (iVar33 < 10)
		{
			Var25 = { Var17 };
			StringIntConCat(&Var25, iVar33, 64);
			SAVE::_0x443174C20B8B9E7F(((*uParam0)[iVar0 /*60*/])->f_11[iVar33 /*3*/], 3, &Var25);
			Var25 = { Var17 };
			StringConCat(&Var25, "eRuleset", 64);
			SAVE::_0xB25B5A375BE5BE26(((*uParam0)[iVar0 /*60*/])->f_11[iVar33 /*3*/], &Var25);
			Var25 = { Var17 };
			StringConCat(&Var25, "todExpiry", 64);
			SAVE::_0xB25B5A375BE5BE26(&((((*uParam0)[iVar0 /*60*/])->f_11[iVar33 /*3*/])->f_1), &Var25);
			Var25 = { Var17 };
			StringConCat(&Var25, "bTempDisable", 64);
			SAVE::_0xBB7F4273C186BC4B(&((((*uParam0)[iVar0 /*60*/])->f_11[iVar33 /*3*/])->f_2), &Var25);
			SAVE::_0xE0B45E983BFC0768();
			iVar33++;
		}
		SAVE::_0xA844FEB5C22C2C74();
		Var17 = { Var9 };
		StringConCat(&Var17, "eTemporaryMood", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*60*/])->f_42), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "ePersistentMood", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*60*/])->f_44), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todTemporaryMoodExpiry", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*60*/])->f_43), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todLastItemInteraction", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*60*/])->f_45), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todLastChore", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*60*/])->f_46), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todLastActivity", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*60*/])->f_47), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todRoleCooldown", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*60*/])->f_48), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "eTimedEventType", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*60*/])->f_49), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todTimedEvent", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*60*/])->f_50), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "txtSchedule", 64);
		SAVE::_0x186608A2AC6F9E88(&(((*uParam0)[iVar0 /*60*/])->f_51), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "eDeedReservedFor", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*60*/])->f_59), &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_109(var uParam0)
{
	char cVar0[64];
	struct<8> Var8;
	char cVar16[64];
	int iVar24;

	StringCopy(&cVar0, "companion_manager", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 476, &cVar0);
	StringConCat(&cVar0, ".itemRequests", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 271, &cVar0);
	iVar24 = 0;
	while (iVar24 < *uParam0)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		SAVE::_0x443174C20B8B9E7F((*uParam0)[iVar24 /*27*/], 27, &Var8);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eRequest", 64);
		SAVE::_0xB25B5A375BE5BE26((*uParam0)[iVar24 /*27*/], &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eRequestItem", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar24 /*27*/])->f_1), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "iNumRequested", 64);
		SAVE::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar24 /*27*/])->f_2), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eCompanion", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar24 /*27*/])->f_3), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eHandInType", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar24 /*27*/])->f_4), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eResultType", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar24 /*27*/])->f_5), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "txtConversation", 64);
		SAVE::_0x5A10D6506B2F2C63(&(((*uParam0)[iVar24 /*27*/])->f_6), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "txtThankDialogue", 64);
		SAVE::_0x5A10D6506B2F2C63(&(((*uParam0)[iVar24 /*27*/])->f_9), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "txtHandOverScenePath", 64);
		SAVE::_0x186608A2AC6F9E88(&(((*uParam0)[iVar24 /*27*/])->f_12), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eVignette", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar24 /*27*/])->f_20), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "ePickupReward", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar24 /*27*/])->f_21), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eModelReward", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar24 /*27*/])->f_22), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "iRewardSupplyGroupHash", 64);
		SAVE::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar24 /*27*/])->f_23), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eState", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar24 /*27*/])->f_24), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "bHasThankDialoguePlayed", 64);
		SAVE::_0xBB7F4273C186BC4B(&(((*uParam0)[iVar24 /*27*/])->f_25), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "bRewardHelpTextShown", 64);
		SAVE::_0xBB7F4273C186BC4B(&(((*uParam0)[iVar24 /*27*/])->f_26), &cVar16);
		SAVE::_0xE0B45E983BFC0768();
		iVar24++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	cVar16 = { cVar0 };
	StringConCat(&cVar16, ".iItemRequestCompleteBitset", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_271), &cVar16);
	cVar16 = { cVar0 };
	StringConCat(&cVar16, ".eReturnedJackBook", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_272), &cVar16);
	StringCopy(&cVar0, "companion_manager.iNumAvailableActivities", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_273), &cVar0);
	StringCopy(&cVar0, "companion_manager.availableActivities", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_274), 201, &cVar0);
	iVar24 = 0;
	while (iVar24 < uParam0->f_274)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		SAVE::_0x8E8FFB9E4AD051D2(uParam0->f_274[iVar24 /*20*/], 20, &Var8, 20);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eActivity", 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0->f_274[iVar24 /*20*/], &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eActivityInstance", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0->f_274[iVar24 /*20*/])->f_1), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eHost", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0->f_274[iVar24 /*20*/])->f_2), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eParticipants", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0->f_274[iVar24 /*20*/])->f_3), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eConditionFlags", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0->f_274[iVar24 /*20*/])->f_4), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "vInvitePos", 64);
		func_152(&((uParam0->f_274[iVar24 /*20*/])->f_5), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "vActivityPos", 64);
		func_152(&((uParam0->f_274[iVar24 /*20*/])->f_8), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "bEnabledInFlow", 64);
		SAVE::_0xBB7F4273C186BC4B(&((uParam0->f_274[iVar24 /*20*/])->f_11), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "bHasBeenLaunched", 64);
		SAVE::_0xBB7F4273C186BC4B(&((uParam0->f_274[iVar24 /*20*/])->f_12), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "bMustOffer", 64);
		SAVE::_0xBB7F4273C186BC4B(&((uParam0->f_274[iVar24 /*20*/])->f_13), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "bOfferUntilHasRun", 64);
		SAVE::_0xBB7F4273C186BC4B(&((uParam0->f_274[iVar24 /*20*/])->f_14), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "bForceLaunch", 64);
		SAVE::_0xBB7F4273C186BC4B(&((uParam0->f_274[iVar24 /*20*/])->f_15), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eActivityDeed", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0->f_274[iVar24 /*20*/])->f_16), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eTODAvailable", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0->f_274[iVar24 /*20*/])->f_17), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "iWeight", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0->f_274[iVar24 /*20*/])->f_18), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "iNumTimesOffered", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0->f_274[iVar24 /*20*/])->f_19), &cVar16);
		SAVE::_0xE0B45E983BFC0768();
		iVar24++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, "companion_manager.todHungoverExpiry", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_475), &cVar0);
	SAVE::_0xE0B45E983BFC0768();
}

void func_110(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;
	struct<8> Var17;

	StringCopy(&cVar1, "activities", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 61, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F((*uParam0)[iVar0 /*2*/], 2, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, ".bHasBeenPerformed", 64);
		SAVE::_0xBB7F4273C186BC4B((*uParam0)[iVar0 /*2*/], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".bHasBeenOffered", 64);
		SAVE::_0xBB7F4273C186BC4B(&(((*uParam0)[iVar0 /*2*/])->f_1), &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_111(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;
	struct<8> Var17;

	StringCopy(&cVar1, "outfits", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 286, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F((*uParam0)[iVar0 /*3*/], 3, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "status", 64);
		SAVE::_0xB25B5A375BE5BE26((*uParam0)[iVar0 /*3*/], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "effect", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*3*/])->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "tags", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*3*/])->f_2), &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_112(var uParam0)
{
	char cVar0[64];
	struct<8> Var8;
	struct<8> Var16;
	int iVar24;

	SAVE::_0x443174C20B8B9E7F(uParam0, 17, "playerFacialHair");
	StringCopy(&cVar0, "playerFacialHair.facialHair", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 16, &cVar0);
	iVar24 = 0;
	while (iVar24 < *uParam0)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		SAVE::_0x443174C20B8B9E7F((*uParam0)[iVar24 /*5*/], 5, &Var8);
		Var16 = { Var8 };
		StringConCat(&Var16, ".facialHairLength", 64);
		SAVE::_0xB25B5A375BE5BE26((*uParam0)[iVar24 /*5*/], &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".facialHairCut", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar24 /*5*/])->f_1), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".facialHairStyle", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar24 /*5*/])->f_2), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".facialHairNextGrowthTimer", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar24 /*5*/])->f_3), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iNumAcceleratedGrowthCycles", 64);
		SAVE::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar24 /*5*/])->f_4), &Var16);
		SAVE::_0xE0B45E983BFC0768();
		iVar24++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_16), "playerFacialHair.eFacialHairFlags");
	SAVE::_0xE0B45E983BFC0768();
}

void func_113(var uParam0)
{
	SAVE::_0x443174C20B8B9E7F(uParam0, 7, "playerHeadHair");
	SAVE::_0xB25B5A375BE5BE26(uParam0, "playerHeadHair.ePomadeWearOffTimer");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_1), "playerHeadHair.headHairLength");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_2), "playerHeadHair.eHeadHairCut");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_3), "playerHeadHair.eHeadHairStyle");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_4), "playerHeadHair.eHeadHairFlags");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_5), "playerHeadHair.headHairNextGrowthTimer");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_6), "playerHeadHair.iNumAcceleratedGrowthCycles");
	SAVE::_0xE0B45E983BFC0768();
}

void func_114(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;
	struct<8> Var17;

	StringCopy(&cVar1, "mapBlipData", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 1001, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F((*uParam0)[iVar0 /*4*/], 4, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "blipRegion", 64);
		SAVE::_0xB25B5A375BE5BE26((*uParam0)[iVar0 /*4*/], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "blipType", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*4*/])->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "blipPackedPosition", 64);
		SAVE::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar0 /*4*/])->f_2), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "blipTODFlags", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*4*/])->f_3), &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_115(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;

	StringCopy(&cVar1, "discoverableData", 64);
	SAVE::_0x8E8FFB9E4AD051D2(uParam0, 157, &cVar1, 14);
	StringCopy(&cVar1, "discoverableData.eFlags", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 144, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0xB25B5A375BE5BE26((*uParam0)[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	Var9 = { cVar1 };
	StringConCat(&Var9, "DiscoEasel_timesViewed", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_145), &Var9);
	Var9 = { cVar1 };
	StringConCat(&Var9, "todDiscoEasel_timeStamp", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_144), &Var9);
	Var9 = { cVar1 };
	StringConCat(&Var9, "DiscoEasel_currentlyViewed", 64);
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_147), &Var9);
	Var9 = { cVar1 };
	StringConCat(&Var9, "DiscoPhonograph_visits", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_146), &Var9);
	Var9 = { cVar1 };
	StringConCat(&Var9, "DiscoDreamcatchers_bitField", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_148), &Var9);
	Var9 = { cVar1 };
	StringConCat(&Var9, "DiscoCarriable_iBitField", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_149), &Var9);
	Var9 = { cVar1 };
	StringConCat(&Var9, "DiscoCarriableMore_iBitField", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_150), &Var9);
	Var9 = { cVar1 };
	StringConCat(&Var9, "DiscoCarriableArrows_iBitField", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_151), &Var9);
	Var9 = { cVar1 };
	StringConCat(&Var9, "DiscoLocationVersion_iBitField", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_152), &Var9);
	Var9 = { cVar1 };
	StringConCat(&Var9, "DiscoLocationMoreVersion_iBitField", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_153), &Var9);
	Var9 = { cVar1 };
	StringConCat(&Var9, "DiscoLocationOtherVersion_iBitField", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_154), &Var9);
	Var9 = { cVar1 };
	StringConCat(&Var9, "DiscoCorpse_iBitField", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_155), &Var9);
	Var9 = { cVar1 };
	StringConCat(&Var9, "DiscoDisable", 64);
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_156), &Var9);
	SAVE::_0xE0B45E983BFC0768();
}

void func_116(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;

	StringCopy(&cVar1, "showManagerData", 64);
	SAVE::_0x8E8FFB9E4AD051D2(uParam0, 17, &cVar1, 7);
	StringCopy(&cVar1, "showManagerData.eCurrentShow", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 6, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0xB25B5A375BE5BE26((*uParam0)[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar1, "showManagerData.TODLastTimeViewed", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_6), 6, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_6)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0->f_6[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar1, "showManagerData.iShowBits", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_12), &cVar1);
	StringCopy(&cVar1, "showManagerData.iTotalShowViews", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_13), &cVar1);
	StringCopy(&cVar1, "showManagerData.iTotalMCViews", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_14), &cVar1);
	StringCopy(&cVar1, "showManagerData.iTotalMagicLanternViews", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_15), &cVar1);
	StringCopy(&cVar1, "showManagerData.iTotalMovieViews", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_16), &cVar1);
	SAVE::_0xE0B45E983BFC0768();
}

void func_117(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;

	StringCopy(&cVar1, "townSecretData", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 8, &cVar1);
	StringCopy(&cVar1, "townSecretData.eFlags", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 5, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0xB25B5A375BE5BE26((*uParam0)[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	Var9 = { cVar1 };
	StringConCat(&Var9, "TownSecret_VanHorn_bitfield", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_5), &Var9);
	Var9 = { cVar1 };
	StringConCat(&Var9, "iTownSecret_Saint_Denis_bitfield", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_6), &Var9);
	Var9 = { cVar1 };
	StringConCat(&Var9, "eStrawberryLastDayUFOSeen", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_7), &Var9);
	SAVE::_0xE0B45E983BFC0768();
}

void func_118(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;
	struct<8> Var17;

	StringCopy(&cVar1, "eventArea", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 49, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F((*uParam0)[iVar0 /*12*/], 12, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "iStage", 64);
		SAVE::_0x529B9CCD0972AF4D((*uParam0)[iVar0 /*12*/], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iForceTransitionStage", 64);
		SAVE::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar0 /*12*/])->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todNextStage", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*12*/])->f_2), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todCounter", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*12*/])->f_3), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "eFlags", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*12*/])->f_4), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "eStateFlags", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*12*/])->f_5), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iEventAreaCustomData", 64);
		SAVE::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar0 /*12*/])->f_6), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iEventAreaCustomCounter", 64);
		SAVE::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar0 /*12*/])->f_7), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iEventAreaMassacreCount", 64);
		SAVE::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar0 /*12*/])->f_8), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iAggroStage", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*12*/])->f_9), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todAggroed", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*12*/])->f_10), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todMassacred", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*12*/])->f_11), &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_119(var uParam0)
{
	char cVar0[64];
	struct<8> Var8;

	StringCopy(&cVar0, "duelingData", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 1, &cVar0);
	Var8 = { cVar0 };
	StringConCat(&Var8, ".eFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(uParam0, &Var8);
	SAVE::_0xE0B45E983BFC0768();
}

void func_120(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;
	struct<8> Var17;

	StringCopy(&cVar1, "herbs", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 45, &cVar1);
	iVar0 = 0;
	while (iVar0 < 44)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		Var17 = { Var9 };
		StringConCat(&Var17, ".eHerbTypeFlags", 64);
		SAVE::_0xB25B5A375BE5BE26((*uParam0)[iVar0], &Var17);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_121(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;
	struct<8> Var17;

	SAVE::_0x443174C20B8B9E7F(uParam0, 65, "huntingZoneData");
	StringCopy(&cVar1, "huntingZoneData.sHuntingZoneTypes", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 65, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F((*uParam0)[iVar0 /*4*/], 65, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, ".bDiscovered", 64);
		SAVE::_0xBB7F4273C186BC4B((*uParam0)[iVar0 /*4*/], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".bCompleted", 64);
		SAVE::_0xBB7F4273C186BC4B(&(((*uParam0)[iVar0 /*4*/])->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".eLaunchTime", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*4*/])->f_2), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".bLegendaryHasBeenSkinned", 64);
		SAVE::_0xBB7F4273C186BC4B(&(((*uParam0)[iVar0 /*4*/])->f_3), &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_122(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;
	struct<8> Var17;

	StringCopy(&cVar1, "propertyData", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 35, &cVar1);
	iVar0 = 0;
	while (iVar0 < 17)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F((*uParam0)[iVar0 /*2*/], 2, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, ".eFlags", 64);
		SAVE::_0xB25B5A375BE5BE26((*uParam0)[iVar0 /*2*/], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".eTimeOfDay", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*2*/])->f_1), &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_123(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;

	StringCopy(&cVar1, "homeRobberyData", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 57, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F((*uParam0)[iVar0 /*7*/], 7, &Var9);
		SAVE::_0xB25B5A375BE5BE26((*uParam0)[iVar0 /*7*/], "todNextAvailable");
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*7*/])->f_1), "todLastVisited");
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*7*/])->f_4), "eFlags");
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*7*/])->f_5), "eFlagsPlus");
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*7*/])->f_6), "eFlagsSet3");
		SAVE::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar0 /*7*/])->f_2), "iTimesRobbed");
		SAVE::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar0 /*7*/])->f_3), "iPlayerCentsLostAtHome");
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_124(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;

	StringCopy(&cVar1, "newspapers.", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 57, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F((*uParam0)[iVar0 /*4*/], 4, &Var9);
		SAVE::_0xB25B5A375BE5BE26((*uParam0)[iVar0 /*4*/], ".eStatus");
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*4*/])->f_1), ".eDynamicStory1");
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*4*/])->f_2), ".eDynamicStory2");
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*4*/])->f_3), ".eFishingStory");
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_125(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;

	StringCopy(&cVar1, "dynamicArticles.", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 35, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0xB25B5A375BE5BE26((*uParam0)[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_126(var uParam0)
{
	SAVE::_0x443174C20B8B9E7F(uParam0, 2, "itemData");
	SAVE::_0xB25B5A375BE5BE26(uParam0, "itemData.todSurvivalistActive");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_1), "itemData.todChewingGumActive");
	SAVE::_0xE0B45E983BFC0768();
}

void func_127(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;
	struct<8> Var17;

	StringCopy(&cVar1, "gangs", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 61, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F((*uParam0)[iVar0 /*10*/], 10, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "gangSavedFlags", 64);
		SAVE::_0xB25B5A375BE5BE26((*uParam0)[iVar0 /*10*/], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "gangStatus", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*10*/])->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iKillsSinceStatusChange", 64);
		SAVE::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar0 /*10*/])->f_2), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todLastKill", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*10*/])->f_3), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iGenericInt1", 64);
		SAVE::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar0 /*10*/])->f_4), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iNumCampfiresCleared", 64);
		SAVE::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar0 /*10*/])->f_5), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iNumCampfiresSpawned", 64);
		SAVE::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar0 /*10*/])->f_6), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iNumCampfiresSeen", 64);
		SAVE::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar0 /*10*/])->f_7), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iNumCampfiresPersisted", 64);
		SAVE::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar0 /*10*/])->f_8), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iGangEncounterStage", 64);
		SAVE::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar0 /*10*/])->f_9), &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_128(var uParam0)
{
	int iVar0;
	char cVar1[64];
	char cVar9[64];
	struct<8> Var17;
	struct<8> Var25;
	char cVar33[64];

	StringCopy(&cVar1, "gangAmbushesSeen", 64);
	StringCopy(&cVar33, "ambushTrack", 64);
	StringCopy(&cVar9, "gangAmbushesStraight", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 197, "ambush");
	StringCopy(&cVar33, "ambush.ambushTrack", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 177, &cVar33);
	iVar0 = 0;
	while (iVar0 < 44)
	{
		Var25 = { cVar33 };
		StringIntConCat(&Var25, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F((*uParam0)[iVar0 /*4*/], 4, &Var25);
		Var17 = { Var25 };
		StringConCat(&Var17, ".iCompletedCount", 64);
		SAVE::_0x529B9CCD0972AF4D((*uParam0)[iVar0 /*4*/], &Var17);
		Var17 = { Var25 };
		StringConCat(&Var17, ".iSeenCount", 64);
		SAVE::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar0 /*4*/])->f_1), &Var17);
		Var17 = { Var25 };
		StringConCat(&Var17, ".iSpawnedCount", 64);
		SAVE::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar0 /*4*/])->f_2), &Var17);
		Var17 = { Var25 };
		StringConCat(&Var17, ".iNextAllowedSpawnMinutes", 64);
		SAVE::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar0 /*4*/])->f_3), &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_177), 7, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_177)
	{
		Var17 = { cVar1 };
		StringIntConCat(&Var17, iVar0, 64);
		SAVE::_0x529B9CCD0972AF4D(uParam0->f_177[iVar0], &Var17);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_184), 7, &cVar9);
	iVar0 = 0;
	while (iVar0 < uParam0->f_184)
	{
		Var17 = { cVar9 };
		StringIntConCat(&Var17, iVar0, 64);
		SAVE::_0x529B9CCD0972AF4D(uParam0->f_184[iVar0], &Var17);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_191), "ambush.eAmbushSavedFlags");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_192), "ambush.todLastAmbushTime");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_193), "ambush.eLastAmbushGang");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_194), "ambush.eLastAmbush");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_195), "ambush.iAmbushesCompleted");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_196), "ambush.iNumRecognizeAmbushesStraight");
	SAVE::_0xE0B45E983BFC0768();
}

void func_129(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;

	StringCopy(&cVar1, "campfires.iVignetteVariations", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 38, "campfires");
	SAVE::_0xB25B5A375BE5BE26(uParam0, "campfires.eFoothillsStoriesSpoken");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_1), "campfires.eMountainsStoriesSpoken");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_2), "campfires.ePlainsStoriesSpoken");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_3), "campfires.eSwampsStoriesSpoken");
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_35), 2, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_35)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x529B9CCD0972AF4D(uParam0->f_35[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar1, "campfires.vCampfireUsedPositions", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_4), 31, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_4)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0->f_4[iVar0 /*3*/], 3, &Var9);
		func_152(uParam0->f_4[iVar0 /*3*/], &Var9);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_37), "campfires.eCampSavedFlags");
	SAVE::_0xE0B45E983BFC0768();
}

void func_130(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;

	StringCopy(&cVar1, "worldStates", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 14, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x529B9CCD0972AF4D((*uParam0)[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_131(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;

	StringCopy(&cVar1, "worldStateTimers", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 61, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x529B9CCD0972AF4D((*uParam0)[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_132(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;

	StringCopy(&cVar1, "featureUnlocked", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 3, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x529B9CCD0972AF4D((*uParam0)[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_133(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;
	struct<8> Var17;

	SAVE::_0x443174C20B8B9E7F(uParam0, 81, "jailData");
	StringCopy(&cVar1, "jailData.sPrisoners", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 81, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F((*uParam0)[iVar0 /*4*/], 4, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "eJailRegion", 64);
		SAVE::_0xB25B5A375BE5BE26((*uParam0)[iVar0 /*4*/], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "ePrisoner", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*4*/])->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "ePrisonerFlag", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*4*/])->f_2), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "ePrisonerDialogue", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*4*/])->f_3), &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_134(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;

	StringCopy(&cVar1, "trainData", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 66, &cVar1);
	iVar0 = 0;
	while (iVar0 < 13)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F((*uParam0)[iVar0 /*5*/], 5, &Var9);
		func_152(&(((*uParam0)[iVar0 /*5*/])->f_1), "vTrainLoc");
		SAVE::_0xB25B5A375BE5BE26((*uParam0)[iVar0 /*5*/], "trainFlags");
		SAVE::_0xBB7F4273C186BC4B(&(((*uParam0)[iVar0 /*5*/])->f_4), "bDirection");
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_135(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;
	struct<8> Var17;

	SAVE::_0x8E8FFB9E4AD051D2(uParam0, 71, "playerRPGData", 39);
	StringCopy(&cVar1, "playerRPGData.fPlayerEfficiency", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 4, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F((*uParam0)[iVar0], 1, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "fCorePoints", 64);
		SAVE::_0x35DEFECAE36D4FAE((*uParam0)[iVar0], &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar1, "playerRPGData.sAttributeOverpoweredTime", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_4), 7, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_4)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0->f_4[iVar0 /*2*/], 2, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "fTankTime", 64);
		SAVE::_0x35DEFECAE36D4FAE(uParam0->f_4[iVar0 /*2*/], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "fCoreTime", 64);
		SAVE::_0x35DEFECAE36D4FAE(&((uParam0->f_4[iVar0 /*2*/])->f_1), &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar1, "playerRPGData.fAttributePoints", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_11), 24, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_11)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x35DEFECAE36D4FAE(uParam0->f_11[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar1, "playerRPGData.iHonor", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_35), &cVar1);
	StringCopy(&cVar1, "playerRPGData.iHighestHonorRank", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_36), &cVar1);
	StringCopy(&cVar1, "playerRPGData.iLowestHonorRank", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_37), &cVar1);
	StringCopy(&cVar1, "playerRPGData.iHighestBountyHonorReached", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_38), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fDeadeyeAmount", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_39), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fPlayerWeightLowerLimit", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_40), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fPlayerWeightUpperLimit", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_41), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fPlayerTankSickMod", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_44), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fPlayerStamWeightMod", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_45), &cVar1);
	StringCopy(&cVar1, "playerRPGData.RPG_TIME_BEFORE_DEADEYECORE_EMPTY", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_46), &cVar1);
	StringCopy(&cVar1, "playerRPGData.RPG_TIME_BEFORE_STAMINACORE_EMPTY", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_47), &cVar1);
	StringCopy(&cVar1, "playerRPGData.RPG_TIME_BEFORE_HEALTHCORE_EMPTY", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_48), &cVar1);
	StringCopy(&cVar1, "playerRPGData.iOverfedTimer", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_42), &cVar1);
	StringCopy(&cVar1, "playerRPGData.bPlayerPoisoned", 64);
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_43), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fGritResist", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_49), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fInstinctResist", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_50), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fStrengthResist", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_51), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fFatResist", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_52), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fHeatResist", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_53), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fColdResist", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_54), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fBonusHealthXP", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_55), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fBonusDeadeyeXP", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_56), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fBonusStaminaXP", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_57), &cVar1);
	StringCopy(&cVar1, "playerRPGData.ePlayerSickness", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_67), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fEagleEyeDepleteMod", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_58), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fEagleEyeRangeBonus", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_59), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fWeaponDegradeResist", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_60), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fDamageScaleMelee", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_61), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fDamageMod", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_62), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fDamageTakenOnHorseModifier", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_63), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fBowStaminaModifier", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_64), &cVar1);
	StringCopy(&cVar1, "playerRPGData.iGrappledKilledBears", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_65), &cVar1);
	StringCopy(&cVar1, "playerRPGData.iTimesEatenFood", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_66), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fHorseBondingXPMod", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_68), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fHealthRefillMod", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_69), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fFortifyMod", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_70), &cVar1);
	SAVE::_0xE0B45E983BFC0768();
}

void func_136(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;
	struct<8> Var17;

	StringCopy(&cVar1, "moralChoices", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 16, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F((*uParam0)[iVar0], 1, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, ".eChoiceType", 64);
		SAVE::_0xB25B5A375BE5BE26((*uParam0)[iVar0], &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_137(var uParam0)
{
	SAVE::_0x443174C20B8B9E7F(uParam0, 286, "cacheOutfitData");
	func_280("cachedOutfits", uParam0);
	SAVE::_0xE0B45E983BFC0768();
}

void func_138(var uParam0)
{
	SAVE::_0x443174C20B8B9E7F(uParam0, 2, "playerCampData");
	SAVE::_0xB25B5A375BE5BE26(uParam0, "playerCampData.eFlags");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_1), "playerCampData.iNumberOfCamps");
	SAVE::_0xE0B45E983BFC0768();
}

void func_139(var uParam0)
{
	char cVar0[64];
	struct<8> Var8;

	StringCopy(&cVar0, "jailbreakData", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 2, &cVar0);
	Var8 = { cVar0 };
	StringConCat(&Var8, "iViewedJailbreaks", 64);
	SAVE::_0x529B9CCD0972AF4D(uParam0, &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, "lastViewedJailbreakTime", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_1), &Var8);
	SAVE::_0xE0B45E983BFC0768();
}

void func_140(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;

	SAVE::_0x443174C20B8B9E7F(uParam0, 22, "sFishingDataSaved");
	StringCopy(&cVar1, "sFishingDataSaved.eCurrentBaitEquipped", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 5, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0xB25B5A375BE5BE26((*uParam0)[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar1, "sFishingDataSaved.bHasLegendaryFishBeenCaught", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_5), 16, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_5)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0xBB7F4273C186BC4B(uParam0->f_5[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_21), "sFishingDataSaved.iFishingDataSavedBits");
	SAVE::_0xE0B45E983BFC0768();
}

void func_141(var uParam0)
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	struct<8> Var10;
	struct<8> Var18;
	struct<8> Var26;

	StringCopy(&cVar2, "managedTowns", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 417, &cVar2);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var10 = { cVar2 };
		StringIntConCat(&Var10, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F((*uParam0)[iVar0 /*26*/], 26, &Var10);
		StringConCat(&Var10, ".eActiveTownStateTags", 64);
		SAVE::_0x81F4E92BE3958364((*uParam0)[iVar0 /*26*/], 26, &Var10);
		iVar1 = 0;
		while (iVar1 < uParam0->f_1)
		{
			Var18 = { Var10 };
			StringIntConCat(&Var18, iVar1, 64);
			SAVE::_0x443174C20B8B9E7F((*(*uParam0)[iVar0 /*26*/])[iVar1 /*5*/], 5, &Var18);
			Var26 = { Var18 };
			StringConCat(&Var26, ".eTag", 64);
			SAVE::_0xB25B5A375BE5BE26((*(*uParam0)[iVar0 /*26*/])[iVar1 /*5*/], &Var26);
			Var26 = { Var18 };
			StringConCat(&Var26, ".eTagPriority", 64);
			SAVE::_0xB25B5A375BE5BE26(&(((*(*uParam0)[iVar0 /*26*/])[iVar1 /*5*/])->f_1), &Var26);
			Var26 = { Var18 };
			StringConCat(&Var26, ".eTagPersistence", 64);
			SAVE::_0xB25B5A375BE5BE26(&(((*(*uParam0)[iVar0 /*26*/])[iVar1 /*5*/])->f_2), &Var26);
			Var26 = { Var18 };
			StringConCat(&Var26, ".eCategory", 64);
			SAVE::_0xB25B5A375BE5BE26(&(((*(*uParam0)[iVar0 /*26*/])[iVar1 /*5*/])->f_3), &Var26);
			Var26 = { Var18 };
			StringConCat(&Var26, ".eTODExpiry", 64);
			SAVE::_0xB25B5A375BE5BE26(&(((*(*uParam0)[iVar0 /*26*/])[iVar1 /*5*/])->f_4), &Var26);
			SAVE::_0xE0B45E983BFC0768();
			iVar1++;
		}
		SAVE::_0xA844FEB5C22C2C74();
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_142(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;
	struct<8> Var17;

	StringCopy(&cVar1, "specialPeds", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 241, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F((*uParam0)[iVar0 /*8*/], 8, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "ePedStage", 64);
		SAVE::_0xB25B5A375BE5BE26((*uParam0)[iVar0 /*8*/], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "eSavedFlags", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*8*/])->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todLastSeen", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*8*/])->f_2), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todLastEncounter", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*8*/])->f_3), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todDeathTime", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*8*/])->f_4), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iTimesSeen", 64);
		SAVE::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar0 /*8*/])->f_5), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iInteracts", 64);
		SAVE::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar0 /*8*/])->f_6), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iDeaths", 64);
		SAVE::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar0 /*8*/])->f_7), &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_143(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;

	StringCopy(&cVar1, "dataShacksSaved", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 40, &cVar1);
	StringCopy(&cVar1, "dataShacksSaved.iSavedFloat1", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 20, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringConCat(&Var9, "_", 64);
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x35DEFECAE36D4FAE((*uParam0)[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar1, "dataShacksSaved.iSavedFloat2", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_20), 20, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_20)
	{
		Var9 = { cVar1 };
		StringConCat(&Var9, "_", 64);
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x35DEFECAE36D4FAE(uParam0->f_20[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_144(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;
	struct<8> Var17;

	StringCopy(&cVar1, "hideouts", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 19, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F((*uParam0)[iVar0 /*2*/], 2, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "eFlags", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*2*/])->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iNumActorsRemaining", 64);
		SAVE::_0x529B9CCD0972AF4D((*uParam0)[iVar0 /*2*/], &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_145(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;

	SAVE::_0x443174C20B8B9E7F(uParam0, 39, "sFilletDataSaved");
	StringCopy(&cVar1, "sFilletDataSaved.iBestLaps", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 13, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x529B9CCD0972AF4D((*uParam0)[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar1, "sFilletDataSaved.iFastestLap", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_13), 13, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x529B9CCD0972AF4D(uParam0->f_13[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar1, "sFilletDataSaved.iLongestTime", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_26), 13, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_26)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x529B9CCD0972AF4D(uParam0->f_26[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_146(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;

	StringCopy(&cVar1, "eBufferedJournalEntryUnlocks", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 21, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0xB25B5A375BE5BE26((*uParam0)[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_147(var uParam0)
{
	SAVE::_0x443174C20B8B9E7F(uParam0, 7, "collectiblesData");
	SAVE::_0xBB7F4273C186BC4B(uParam0, "collectiblesData.bDinoBonesStage2RCM");
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_1), "collectiblesData.bLegendaryFishStage2RCM");
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_2), "collectiblesData.bRockCarvingsStage2RCM");
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_3), "collectiblesData.bTaxidermyStage1RCM");
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_4), "collectiblesData.bCarolinaParakeetExtinction");
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_5), "collectiblesData.bChalTownHoldups");
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_6), "collectiblesData.bTSAnnesburgRiddle");
	SAVE::_0xE0B45E983BFC0768();
}

void func_148(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;

	SAVE::_0x443174C20B8B9E7F(uParam0, 3, "sCheatManagerSaved");
	StringCopy(&cVar1, "sCheatManagerSaved.iUnlockedCheats", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 3, &cVar1);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x529B9CCD0972AF4D((*uParam0)[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_149(var uParam0)
{
	char cVar0[64];
	struct<8> Var8;

	StringCopy(&cVar0, "reinforcedequipmentSaved", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 1, &cVar0);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eEquipmentRewardFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(uParam0, &Var8);
	SAVE::_0xE0B45E983BFC0768();
}

void func_150(var uParam0)
{
	char cVar0[64];
	struct<8> Var8;

	StringCopy(&cVar0, "collectableUiLogSaved", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 13, &cVar0);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eUiCigCardsSavedFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(uParam0, &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eUiDinoBonesSavedFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_1), &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eUiExoticsSavedFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_2), &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eUiLegendaryFishSavedFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_3), &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eUiParakeetsSavedFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_4), &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eUiRockCarvingsSavedFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_5), &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eUiTaxidermySavedFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_6), &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eUiTHJackHallSavedFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_7), &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eUiTHHighStakesSavedFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_8), &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eUiTHPoisonTrailSavedFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_9), &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eUiTHTresorMortsSavedFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_10), &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eUiTHElementalTrailSavedFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_11), &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eUiTHLandmarksOfRichesSavedFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_12), &Var8);
	SAVE::_0xE0B45E983BFC0768();
}

void func_151(var uParam0)
{
	SAVE::_0x443174C20B8B9E7F(uParam0, 47, "shared");
	func_281(uParam0);
	func_282(&(uParam0->f_2));
	func_283(&(uParam0->f_3));
	func_284(&(uParam0->f_4));
	func_285(&(uParam0->f_5));
	func_286(&(uParam0->f_25));
	func_287(&(uParam0->f_26));
	func_288(&(uParam0->f_27));
	func_289(&(uParam0->f_42));
	func_290(&(uParam0->f_43));
	func_291(&(uParam0->f_44));
	func_292(&(uParam0->f_45));
	SAVE::_0xE0B45E983BFC0768();
}

void func_152(var uParam0, char* sParam1)
{
	char cVar0[64];

	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".x", 64);
	SAVE::_0x35DEFECAE36D4FAE(uParam0, &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".y", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_1), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".z", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_2), &cVar0);
}

void func_153(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;
	struct<8> Var17;

	StringCopy(&cVar1, "deeds", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 5398, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F((*uParam0)[iVar0 /*7*/], 7, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "iDeedPacked", 64);
		SAVE::_0x529B9CCD0972AF4D((*uParam0)[iVar0 /*7*/], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "eStatus", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*7*/])->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iCompletionData", 64);
		SAVE::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar0 /*7*/])->f_2), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iGenericInt1", 64);
		SAVE::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar0 /*7*/])->f_3), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iGenericInt2", 64);
		SAVE::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar0 /*7*/])->f_4), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iUniqueHashID", 64);
		SAVE::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar0 /*7*/])->f_5), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "lastCompletedTime", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*7*/])->f_6), &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_154(var uParam0)
{
	char cVar0[64];
	struct<8> Var8;
	struct<8> Var16;
	int iVar24;

	SAVE::_0x8E8FFB9E4AD051D2(uParam0, 3206, "beatTrackingData", 17);
	SAVE::_0xB25B5A375BE5BE26(uParam0, "beatTrackingData.todGangBeatAvailable");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_2), "beatTrackingData.iSpawnedCount");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_3), "beatTrackingData.iSeenCount");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_1), "beatTrackingData.iLaunchedCount");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_4), "beatTrackingData.iCompletedCount");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_11), "beatTrackingData.iHerbalistCampState");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_5), "beatTrackingData.eLastCompleted");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_6), "beatTrackingData.eLastSeen");
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_9), "beatTrackingData.bCompletedBeatSinceLastMission");
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_10), "beatTrackingData.bSeenBeatSinceLastMission");
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_7), "beatTrackingData.bAmbushSeenSinceLastBeat");
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_8), "beatTrackingData.bCampfireSeenSinceLastBeat");
	StringCopy(&cVar0, "beatTrackingData.iCompletedLocation", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_12), 30, &cVar0);
	iVar24 = 0;
	while (iVar24 < uParam0->f_12)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		SAVE::_0x529B9CCD0972AF4D(uParam0->f_12[iVar24], &Var8);
		iVar24++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, "beatTrackingData.beatTrack", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_42), 961, &cVar0);
	iVar24 = 0;
	while (iVar24 < 120)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0->f_42[iVar24 /*8*/], 8, &Var8);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iTimesCompleted", 64);
		SAVE::_0x529B9CCD0972AF4D(uParam0->f_42[iVar24 /*8*/], &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iTimesSeen", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0->f_42[iVar24 /*8*/])->f_1), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iTimesLaunched", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0->f_42[iVar24 /*8*/])->f_2), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iTimesSpawned", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0->f_42[iVar24 /*8*/])->f_3), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iBeatAvailableAt", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0->f_42[iVar24 /*8*/])->f_4), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".eBeatRarity", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0->f_42[iVar24 /*8*/])->f_5), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".bBeatExhausted", 64);
		SAVE::_0xBB7F4273C186BC4B(&((uParam0->f_42[iVar24 /*8*/])->f_6), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".bUnlocked", 64);
		SAVE::_0xBB7F4273C186BC4B(&((uParam0->f_42[iVar24 /*8*/])->f_7), &Var16);
		SAVE::_0xE0B45E983BFC0768();
		iVar24++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, "beatTrackingData.beatGeneric", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_1003), 1081, &cVar0);
	iVar24 = 0;
	while (iVar24 < uParam0->f_1003)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0->f_1003[iVar24 /*6*/], 6, &Var8);
		Var16 = { Var8 };
		StringConCat(&Var16, ".ID", 64);
		SAVE::_0x529B9CCD0972AF4D(uParam0->f_1003[iVar24 /*6*/], &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iGeneric1", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0->f_1003[iVar24 /*6*/])->f_1), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iGeneric2", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0->f_1003[iVar24 /*6*/])->f_2), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".eBeatTown", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0->f_1003[iVar24 /*6*/])->f_4), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".eBeatTimeOfDay", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0->f_1003[iVar24 /*6*/])->f_5), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".mnPedModel", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0->f_1003[iVar24 /*6*/])->f_3), &Var16);
		SAVE::_0xE0B45E983BFC0768();
		iVar24++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, "beatTrackingData.beatUsedLocations", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_2084), 121, &cVar0);
	iVar24 = 0;
	while (iVar24 < uParam0->f_2084)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0->f_2084[iVar24 /*5*/], 5, &Var8);
		Var16 = { Var8 };
		StringConCat(&Var16, ".vUsedAtLocation", 64);
		func_152(uParam0->f_2084[iVar24 /*5*/], &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".eBeat", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0->f_2084[iVar24 /*5*/])->f_3), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iBeatRestrictionTimeLeft", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0->f_2084[iVar24 /*5*/])->f_4), &Var16);
		SAVE::_0xE0B45E983BFC0768();
		iVar24++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, "beatTrackingData.beatRegionSaved", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_2205), 1001, &cVar0);
	iVar24 = 0;
	while (iVar24 < uParam0->f_2205)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0->f_2205[iVar24 /*2*/], 2, &Var8);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iRegionSeen", 64);
		SAVE::_0x529B9CCD0972AF4D(uParam0->f_2205[iVar24 /*2*/], &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iRegionComplete", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0->f_2205[iVar24 /*2*/])->f_1), &Var16);
		SAVE::_0xE0B45E983BFC0768();
		iVar24++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_155(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char cVar4[64];
	struct<8> Var12;
	struct<8> Var20;
	struct<8> Var28;
	struct<8> Var36;

	SAVE::_0x8E8FFB9E4AD051D2(uParam0, 2408, "shopsData", 17);
	StringCopy(&cVar4, "shopsData.iTimesRobbed", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_1168), 154, &cVar4);
	iVar0 = 0;
	while (iVar0 < uParam0->f_1168)
	{
		Var12 = { cVar4 };
		StringIntConCat(&Var12, iVar0, 64);
		SAVE::_0x529B9CCD0972AF4D(uParam0->f_1168[iVar0], &Var12);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar4, "shopsData.todLastRobbed", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_1322), 154, &cVar4);
	iVar0 = 0;
	while (iVar0 < uParam0->f_1322)
	{
		Var12 = { cVar4 };
		StringIntConCat(&Var12, iVar0, 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0->f_1322[iVar0], &Var12);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar4, "shopsData.todLastRegisterRobbed", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_1476), 154, &cVar4);
	iVar0 = 0;
	while (iVar0 < uParam0->f_1476)
	{
		Var12 = { cVar4 };
		StringIntConCat(&Var12, iVar0, 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0->f_1476[iVar0], &Var12);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar4, "shopsData.todLastVisited", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_1630), 154, &cVar4);
	iVar0 = 0;
	while (iVar0 < uParam0->f_1630)
	{
		Var12 = { cVar4 };
		StringIntConCat(&Var12, iVar0, 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0->f_1630[iVar0], &Var12);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar4, "shopsData.todLastEscalation", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_1784), 154, &cVar4);
	iVar0 = 0;
	while (iVar0 < uParam0->f_1784)
	{
		Var12 = { cVar4 };
		StringIntConCat(&Var12, iVar0, 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0->f_1784[iVar0], &Var12);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar4, "shopsData.todTimeToResetInjuredOutfit", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_1938), 154, &cVar4);
	iVar0 = 0;
	while (iVar0 < uParam0->f_1938)
	{
		Var12 = { cVar4 };
		StringIntConCat(&Var12, iVar0, 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0->f_1938[iVar0], &Var12);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar4, "shopsData.eRobberyFlags", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_2092), 154, &cVar4);
	iVar0 = 0;
	while (iVar0 < uParam0->f_2092)
	{
		Var12 = { cVar4 };
		StringIntConCat(&Var12, iVar0, 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0->f_2092[iVar0], &Var12);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar4, "shopsData.eShopFlags", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_2246), 154, &cVar4);
	iVar0 = 0;
	while (iVar0 < uParam0->f_2246)
	{
		Var12 = { cVar4 };
		StringIntConCat(&Var12, iVar0, 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0->f_2246[iVar0], &Var12);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0x443174C20B8B9E7F(uParam0, 1168, "shopsData.sPurchaseData");
	StringCopy(&cVar4, "sShopPurchases", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 1126, &cVar4);
	iVar2 = 25;
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		Var12 = { cVar4 };
		StringIntConCat(&Var12, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F((*uParam0)[iVar0 /*45*/], 45, &Var12);
		Var36 = { Var12 };
		StringConCat(&Var36, ".eLastItemBoughtFromShop", 64);
		SAVE::_0xB25B5A375BE5BE26((*uParam0)[iVar0 /*45*/], &Var36);
		Var36 = { Var12 };
		StringConCat(&Var36, ".eLastItemSoldToShop", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*45*/])->f_1), &Var36);
		Var36 = { Var12 };
		StringConCat(&Var36, ".iTotalMoneySpent", 64);
		SAVE::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar0 /*45*/])->f_43), &Var36);
		Var36 = { Var12 };
		StringConCat(&Var36, ".iMoneySpentInSession", 64);
		SAVE::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar0 /*45*/])->f_44), &Var36);
		Var20 = { Var12 };
		StringConCat(&Var20, ".sPurchaseList", 64);
		SAVE::_0x81F4E92BE3958364(&(((*uParam0)[iVar0 /*45*/])->f_2), 41, &Var20);
		iVar3 = 10;
		iVar1 = 0;
		while (iVar1 < iVar3)
		{
			Var28 = { Var20 };
			StringIntConCat(&Var28, iVar1, 64);
			SAVE::_0x443174C20B8B9E7F(((*uParam0)[iVar0 /*45*/])->f_2[iVar1 /*4*/], 4, &Var28);
			Var36 = { Var28 };
			StringConCat(&Var36, ".eItem", 64);
			SAVE::_0xB25B5A375BE5BE26(((*uParam0)[iVar0 /*45*/])->f_2[iVar1 /*4*/], &Var36);
			Var36 = { Var28 };
			StringConCat(&Var36, ".iPurchaseTimer", 64);
			SAVE::_0xB25B5A375BE5BE26(&((((*uParam0)[iVar0 /*45*/])->f_2[iVar1 /*4*/])->f_1), &Var36);
			Var36 = { Var28 };
			StringConCat(&Var36, ".iPurchaseCount", 64);
			SAVE::_0x529B9CCD0972AF4D(&((((*uParam0)[iVar0 /*45*/])->f_2[iVar1 /*4*/])->f_2), &Var36);
			Var36 = { Var28 };
			StringConCat(&Var36, ".eShopPurchasedFrom", 64);
			SAVE::_0xB25B5A375BE5BE26(&((((*uParam0)[iVar0 /*45*/])->f_2[iVar1 /*4*/])->f_3), &Var36);
			SAVE::_0xE0B45E983BFC0768();
			iVar1++;
		}
		SAVE::_0xA844FEB5C22C2C74();
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar4, "sPurchaseData.sPlayerPurchases", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_1126), 41, &cVar4);
	iVar2 = uParam0->f_1126;
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		Var12 = { cVar4 };
		StringIntConCat(&Var12, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0->f_1126[iVar0 /*4*/], 4, &Var12);
		Var36 = { Var12 };
		StringConCat(&Var36, ".eItem", 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0->f_1126[iVar0 /*4*/], &Var36);
		Var36 = { Var12 };
		StringConCat(&Var36, ".iPurchaseTimer", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0->f_1126[iVar0 /*4*/])->f_1), &Var36);
		Var36 = { Var12 };
		StringConCat(&Var36, ".iPurchaseCount", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0->f_1126[iVar0 /*4*/])->f_2), &Var36);
		Var36 = { Var12 };
		StringConCat(&Var36, ".eShopPurchasedFrom", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0->f_1126[iVar0 /*4*/])->f_3), &Var36);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_1167), "sPurchaseData.eLastPurchaseReg");
	SAVE::_0xE0B45E983BFC0768();
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_2400), "shopsData.bPlayerHasBrowsedAnyShop");
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_2401), "shopsData.bHideCatInfoBox");
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_2402), "shopsData.bPurchaseMade");
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_2403), "shopsData.bRCKittyEmeraldViewed");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_2404), "shopsData.iLastHorseSoldTimeStamp");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_2405), "shopsData.iSecondLastHorseSoldTimeStamp");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_2406), "shopsData.iThirdLastHorseSoldTimeStamp");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_2407), "shopsData.iLostLegendaryItemsBitset");
	SAVE::_0xE0B45E983BFC0768();
}

void func_156(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;
	struct<8> Var17;
	struct<8> Var25;

	StringCopy(&cVar1, "regions", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 1651, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F((*uParam0)[iVar0 /*11*/], 11, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "eRegionFlags", 64);
		SAVE::_0xB25B5A375BE5BE26((*uParam0)[iVar0 /*11*/], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "currentLockdownStartTime", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*11*/])->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "currentWantedZoneStartTime", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*11*/])->f_2), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iLockdownDuration", 64);
		SAVE::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar0 /*11*/])->f_3), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "regionLawMemoryData", 64);
		SAVE::_0x443174C20B8B9E7F(&(((*uParam0)[iVar0 /*11*/])->f_4), 6, &Var17);
		Var25 = { Var17 };
		StringConCat(&Var25, "eLastOuftitSeenByLaw", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*11*/])->f_4), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "eSideburnsStyle", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*11*/])->f_4.f_1), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "eChinStyle", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*11*/])->f_4.f_2), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "eMustacheStyle", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*11*/])->f_4.f_3), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "eTimeOutfitLastSeen", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*11*/])->f_4.f_4), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "eAppearanceLawMemoryFlags", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*11*/])->f_4.f_5), &Var25);
		SAVE::_0xE0B45E983BFC0768();
		Var17 = { Var9 };
		StringConCat(&Var17, "iInocentsKilledInRegion", 64);
		SAVE::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar0 /*11*/])->f_10), &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_157(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;

	StringCopy(&cVar1, "regionTownFlags", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 117, &cVar1);
	StringCopy(&cVar1, "regionTownFlags.eRegionConversationSaved", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 111, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0xB25B5A375BE5BE26((*uParam0)[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar1, "regionTownFlags.eRegionConversationCampSave", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_111), 6, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_111)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0->f_111[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_158(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;
	struct<8> Var17;

	StringCopy(&cVar1, "regionalCharacter", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 1909, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F((*uParam0)[iVar0 /*2*/], 2, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "rcFlags", 64);
		SAVE::_0xB25B5A375BE5BE26((*uParam0)[iVar0 /*2*/], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todRCDeathTime", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*2*/])->f_1), &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_159(var uParam0)
{
	char cVar0[64];
	struct<8> Var8;
	int iVar16;

	StringCopy(&cVar0, "SPMetaped", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 777, &cVar0);
	Var8 = { cVar0 };
	StringConCat(&Var8, "PortableWardrobe", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 26, &Var8);
	func_293(uParam0, Var8);
	SAVE::_0xE0B45E983BFC0768();
	Var8 = { cVar0 };
	StringConCat(&Var8, "OutfitList", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_26), 601, &Var8);
	iVar16 = 0;
	while (iVar16 <= 4)
	{
		func_294(uParam0->f_26[iVar16 /*120*/], Var8, iVar16);
		iVar16++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_627), "iOutfitHash");
	StringCopy(&Var8, "SingleSavedAppearance", 64);
	func_294(&(uParam0->f_627.f_1), Var8, 0);
	Var8 = { cVar0 };
	StringConCat(&Var8, "PortableSnapshot", 64);
	SAVE::_0x443174C20B8B9E7F(&(uParam0->f_627.f_121), 26, &Var8);
	func_293(&(uParam0->f_627.f_121), Var8);
	SAVE::_0xE0B45E983BFC0768();
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_774), "SPMetaped_eSystemFlags");
	StringCopy(&Var8, "SPMetaped_PlayerType", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_775), "SPMetaped_PlayerType");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_776), "SPMetaped_iCurOutfit");
	SAVE::_0xE0B45E983BFC0768();
}

void func_160(var uParam0)
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	struct<8> Var10;
	char cVar18[64];
	struct<8> Var26;

	StringCopy(&cVar2, "herbData", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 4501, &cVar2);
	iVar0 = 0;
	while (iVar0 < 500)
	{
		Var10 = { cVar2 };
		StringIntConCat(&Var10, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F((*uParam0)[iVar0 /*9*/], 9, &Var10);
		SAVE::_0xB25B5A375BE5BE26((*uParam0)[iVar0 /*9*/], "eHerbType");
		SAVE::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar0 /*9*/])->f_1), "iHerbPackedLocation");
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*9*/])->f_2), "todTimePicked");
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*9*/])->f_3), "eHerbFlags");
		StringCopy(&cVar18, "iHerbPatchPlants", 64);
		SAVE::_0x81F4E92BE3958364(&(((*uParam0)[iVar0 /*9*/])->f_4), 5, &cVar18);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Var26 = { cVar18 };
			StringIntConCat(&Var26, iVar1, 64);
			SAVE::_0x529B9CCD0972AF4D(((*uParam0)[iVar0 /*9*/])->f_4[iVar1], &Var26);
			iVar1++;
		}
		SAVE::_0xA844FEB5C22C2C74();
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_161(var uParam0)
{
	char cVar0[64];
	struct<8> Var8;
	struct<8> Var16;
	int iVar24;

	SAVE::_0x443174C20B8B9E7F(uParam0, 2697, "campVignettes");
	SAVE::_0x529B9CCD0972AF4D(uParam0, "campVignettes.iTotalVigsSeen");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_1), "campVignettes.iTotalCampfireSeen");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_2), "campVignettes.iTotalWalkAndTalkSeen");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_3), "campVignettes.iTotalMusicSeen");
	StringCopy(&cVar0, "campVignettes.vigData", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_4), 2693, &cVar0);
	iVar24 = 0;
	while (iVar24 < 673)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0->f_4[iVar24 /*4*/], 4, &Var8);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iTimesSeen", 64);
		SAVE::_0x529B9CCD0972AF4D(uParam0->f_4[iVar24 /*4*/], &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iTimesLaunched", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0->f_4[iVar24 /*4*/])->f_1), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iTimesSpawned", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0->f_4[iVar24 /*4*/])->f_2), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".bSeen", 64);
		SAVE::_0xBB7F4273C186BC4B(&((uParam0->f_4[iVar24 /*4*/])->f_3), &Var16);
		SAVE::_0xE0B45E983BFC0768();
		iVar24++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_162(var uParam0)
{
	char cVar0[64];
	struct<8> Var8;
	char cVar16[64];
	int iVar24;

	SAVE::_0x443174C20B8B9E7F(uParam0, 1537, "ambVigData");
	SAVE::_0x529B9CCD0972AF4D(uParam0, "ambVigData.iLaunches");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_1), "ambVigData.iSpawned");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_2), "ambVigData.iSeen");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_3), "ambVigData.iTriggered");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_4), "ambVigData.todLaunchTimeHuman");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_5), "ambVigData.todLaunchTimeAnimal");
	StringCopy(&cVar0, "ambVigData.sRegisteredVigs", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_6), 1489, &cVar0);
	iVar24 = 0;
	while (iVar24 < uParam0->f_6)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0->f_6[iVar24 /*6*/], 6, &Var8);
		cVar16 = { Var8 };
		StringConCat(&cVar16, ".iSeen", 64);
		SAVE::_0x529B9CCD0972AF4D(uParam0->f_6[iVar24 /*6*/], &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, ".iLaunched", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0->f_6[iVar24 /*6*/])->f_1), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, ".iSpawned", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0->f_6[iVar24 /*6*/])->f_2), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, ".iTriggered", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0->f_6[iVar24 /*6*/])->f_3), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, ".bUnlocked", 64);
		SAVE::_0xBB7F4273C186BC4B(&((uParam0->f_6[iVar24 /*6*/])->f_4), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, ".todLaunchTime", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0->f_6[iVar24 /*6*/])->f_5), &cVar16);
		SAVE::_0xE0B45E983BFC0768();
		iVar24++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, "ambVigData.sUsedLocs", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_1495), 41, &cVar0);
	iVar24 = 0;
	while (iVar24 < uParam0->f_1495)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0->f_1495[iVar24 /*4*/], 4, &Var8);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "vLoc", 64);
		func_152(&((uParam0->f_1495[iVar24 /*4*/])->f_1), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eVig", 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0->f_1495[iVar24 /*4*/], &cVar16);
		SAVE::_0xE0B45E983BFC0768();
		iVar24++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_1536), "ambVigData.iNumberOfParakeet");
	SAVE::_0xE0B45E983BFC0768();
}

void func_163(var uParam0, char* sParam1)
{
	SAVE::_0x8E8FFB9E4AD051D2(uParam0, 1399, "persona", 11);
	SAVE::_0xB25B5A375BE5BE26(uParam0, "psna_ePreferredDistrict");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_1), "psna_eLastValidRegion");
	func_152(&(uParam0->f_2), "psna_vLastValidPosition");
	func_295(&(uParam0->f_5));
	func_296(&(uParam0->f_15));
	func_297(&(uParam0->f_62));
	func_298(&(uParam0->f_350));
	func_299(&(uParam0->f_1362));
	func_300(&(uParam0->f_1365));
	SAVE::_0xE0B45E983BFC0768();
}

void func_164()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (func_40(iVar0))
		{
			SCRIPTS::REQUEST_SCRIPT(func_166(iVar0));
		}
		iVar0++;
	}
}

bool func_165(int iParam0, bool bParam1)
{
	bool bVar0;

	bVar0 = (iParam0 >= 0 && iParam0 <= 10);
	if (bParam1 && !bVar0)
	{
	}
	return bVar0;
}

var func_166(int iParam0)
{
	var uVar0;

	switch (iParam0)
	{
		case 0:
			return "";
		case 1:
			return "init_global_block_ugc";
		case 4:
			return "init_global_block_mp";
		case 3:
			return "init_global_block_profiler";
		case 5:
			return "init_global_block_sp";
		case 7:
			return "init_global_block_shared";
		case 6:
			return "init_global_block_transition";
		case 10:
			return "init_global_block_softsave";
		case 2:
			return "init_global_block_mc";
		case 9:
			return "init_global_block_mc_deathmatch";
		case 8:
			return "init_global_block_mc_race";
	}
	return uVar0;
}

void func_167(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam1;
}

char* func_168()
{
	return "allyEnum";
}

char* func_169()
{
	return "horseEntityIndex";
}

char* func_170()
{
	return "blipIndex";
}

char* func_171()
{
	return "genericMissionInt";
}

char* func_172()
{
	return "genericMissionFloat";
}

Vector3 func_173()
{
	vector3 vVar0[24];

	StringCopy(&cVar0, "eDuelResult", 24);
	return cVar0;
}

char* func_174()
{
	return "cutDeleteMe";
}

char* func_175()
{
	return "brain_id";
}

char* func_176()
{
	return "brain_player";
}

char* func_177()
{
	return "brain_type";
}

char* func_178()
{
	return "brain_isHidden";
}

char* func_179()
{
	return "brain_isDisabled";
}

char* func_180()
{
	return "brain_timeStamp";
}

char* func_181()
{
	return "brain_value";
}

char* func_182()
{
	return "brain_lootable_type";
}

char* func_183()
{
	return "brain_lootable_value";
}

char* func_184()
{
	return "brain_lootable_deed";
}

char* func_185()
{
	return "brain_lootable_id";
}

char* func_186()
{
	return "MP_HUD_Local_Status_Icon";
}

char* func_187()
{
	return "MP_HUD_Local_Secondary_Icon";
}

char* func_188()
{
	return "MP_HUD_Local_Blip_Sprite";
}

char* func_189()
{
	return "MP_HUD_Hide_My_Blip_FOR_TEAMS";
}

char* func_190()
{
	return "MP_HUD_Force_My_Blip_Persistent_For_Teams";
}

char* func_191()
{
	return "MP_HUD_Force_Can_Hear_Teams";
}

char* func_192()
{
	return "fetch_entity";
}

char* func_193()
{
	return "fetch_turned_in";
}

char* func_194()
{
	return "fetch_static_prop_placed_on_ground";
}

char* func_195()
{
	return "fetch_combat_config";
}

char* func_196()
{
	return "chu_vip_ped";
}

char* func_197()
{
	return "NetStableMount";
}

char* func_198()
{
	return "NetStableGUID1";
}

char* func_199()
{
	return "NetStableGUID2";
}

char* func_200()
{
	return "NetStableGUID3";
}

char* func_201()
{
	return "NetStableGUID4";
}

char* func_202()
{
	return "NSS_PLAYER_FLAG";
}

char* func_203()
{
	return "NSS_PLAYER_BOUNTY_CUSTODIAN";
}

void func_204()
{
}

void func_205()
{
}

void func_206()
{
}

int func_207(int iParam0, int iParam1)
{
	if (iParam0 <= 999)
	{
		switch (iParam0)
		{
			case 0:
				return 1332067900;
			case 1:
				return -1118337851;
			case 2:
				return 1236490949;
			case 3:
				return -1701626270;
			case 4:
				return -557964826;
			case 5:
				return 603871447;
			case 6:
				return -1569624057;
			case 7:
				return -378395191;
			case 8:
				return 273551835;
			case 9:
				return -961488528;
			case 10:
				return 1936009597;
			case 11:
				return -425834853;
			case 12:
				return -1055748784;
			case 13:
				return -694809996;
			case 14:
				return -279703229;
			case 15:
				return -2053475031;
			case 16:
				return -623091266;
			case 17:
				return -217646849;
			case 18:
				return -313831898;
			case 19:
				return 1694736240;
			case 20:
				return 634920011;
			case 21:
				return 2035758463;
			case 22:
				return 425205960;
			case 23:
				return 54402003;
			case 24:
				return -481093102;
			case 25:
				return -1923021027;
			case 26:
				return -1721168110;
			case 27:
				return 937192284;
			case 28:
				return 706203603;
			case 29:
				return 579021239;
			case 30:
				return 272490690;
			case 31:
				return 263152228;
			case 32:
				return 996571604;
			case 33:
				return 301693437;
			case 34:
				return 846337294;
			case 35:
				return -512601161;
			case 36:
				return 765343099;
			case 37:
				return -909306169;
			case 38:
				return -879315604;
			case 39:
				return 1503442953;
			case 40:
				return 31909846;
			case 41:
				return -1227807056;
			case 42:
				return 1234648758;
			case 43:
				return 1616712776;
			case 44:
				return -414301703;
			case 45:
				return 1423912753;
			case 46:
				return 1049849921;
			case 47:
				return 1252084553;
			case 48:
				return -995906750;
			case 49:
				return -2112989134;
			case 50:
				return 722810050;
			case 51:
				return -1710969071;
			case 52:
				return 1499112197;
			case 53:
				return 929504930;
			case 54:
				return 37622013;
			case 55:
				return 808313916;
			case 56:
				return 276427301;
			case 57:
				return 539464064;
			case 58:
				return -1501864740;
			case 59:
				return -1070814495;
			case 60:
				return 1713296185;
			case 61:
				return 506519174;
			case 62:
				return 1903066940;
			case 63:
				return -563006151;
			case 64:
				return -792399058;
			case 65:
				return 2123794495;
			case 66:
				return -248246131;
			case 67:
				return -1435884039;
			case 68:
				return -108299713;
			case 69:
				return -2009032789;
			case 70:
				return -822172378;
			case 71:
				return -340009312;
			case 72:
				return 1122045165;
			case 73:
				return 1352837232;
			case 74:
				return -1740687448;
			case 75:
				return -1508256931;
			case 76:
				return 1739445890;
			case 77:
				return -817060178;
			case 78:
				return -737812908;
			case 79:
				return 389213738;
			case 80:
				return 2126897368;
			case 81:
				return 1314976319;
			case 82:
				return -780302065;
			case 83:
				return -1226654727;
			case 84:
				return 1849913721;
			case 85:
				return 573576705;
			case 86:
				return -173548630;
			case 87:
				return 1818260702;
			case 88:
				return 406701199;
			case 89:
				return 674386615;
			case 90:
				return 1502951187;
			case 91:
				return 728379187;
			case 92:
				return -2053832767;
			case 93:
				return -1082668955;
			case 94:
				return -86528958;
			case 95:
				return -772093381;
			case 96:
				return -1973910443;
			case 97:
				return 262039053;
			case 98:
				return 507232138;
			case 99:
				return -456215895;
			case 100:
				return -792369764;
			case 101:
				return -170108806;
			case 102:
				return -1967848432;
			case 103:
				return 1647812004;
			case 104:
				return -856826868;
			case 105:
				return -1775985984;
			case 106:
				return -1023478668;
			case 107:
				return -200270658;
			case 108:
				return -127497991;
			case 109:
				return -773956478;
			case 110:
				return 993438435;
			case 111:
				return 895825612;
			case 112:
				return -361709910;
			case 113:
				return 190848106;
			case 114:
				return -1928361302;
			case 115:
				return -315113250;
			case 116:
				return -1850873053;
			case 117:
				return 1548242606;
			case 118:
				return -1192753172;
			case 119:
				return -482255714;
			case 120:
				return -236914211;
			case 121:
				return 2130187273;
			case 122:
				return -833696851;
			case 123:
				return 882236853;
			case 124:
				return -2060277385;
			case 125:
				return -223199122;
			case 126:
				return 1239191982;
			case 127:
				return 132414998;
			case 128:
				return -1591103463;
			case 129:
				return -2051059045;
			case 130:
				return -522767301;
			case 131:
				return -1626434823;
			case 132:
				return -1411225477;
			case 133:
				return 263133813;
			case 134:
				return 416864911;
			case 135:
				return 1312163721;
			case 136:
				return 1843301309;
			case 137:
				return -1957607557;
			case 138:
				return 1311508924;
			case 139:
				return 1256749990;
			case 140:
				return -1521897637;
			case 141:
				return 967935536;
			case 142:
				return 771896020;
			case 143:
				return 1925740339;
			case 144:
				return 184411343;
			case 145:
				return -15009406;
			case 146:
				return 1337703077;
			case 147:
				return -615961815;
			case 148:
				return 184476093;
			case 149:
				return 413309170;
			case 150:
				return -636161219;
			case 151:
				return -1956708897;
			case 152:
				return 1988206529;
			case 153:
				return -1974746920;
			case 154:
				return 536714458;
			case 155:
				return 372806894;
			case 156:
				return -1122196204;
			case 157:
				return 1283988553;
			case 158:
				return 416759610;
			case 159:
				return 1916362667;
			case 160:
				return -76573194;
			case 161:
				return 391171508;
			case 162:
				return 827906606;
			case 163:
				return -169261100;
			case 164:
				return -8749224;
			case 165:
				return 1912754336;
			case 166:
				return 1883767827;
			case 167:
				return 1171226610;
			case 168:
				return 508578717;
			case 169:
				return 1975720265;
			case 170:
				return 1092530042;
			case 171:
				return 194929358;
			case 172:
				return 1851402669;
			case 173:
				return -629211790;
			case 174:
				return -1226747327;
			case 175:
				return -466634713;
			case 176:
				return -141795616;
			case 177:
				return 292362182;
			case 178:
				return 807262958;
			case 179:
				return 1717286956;
			case 180:
				return -599973510;
			case 181:
				return 306939642;
			case 182:
				return -1960392600;
			case 183:
				return -1255088882;
			case 184:
				return -1934886317;
			case 185:
				return -1615749463;
			case 186:
				return -429506139;
			case 187:
				return -691276094;
			case 188:
				return 1271362767;
			case 189:
				return -447844606;
			case 190:
				return 405490102;
			case 191:
				return 902305731;
			case 192:
				return -2103414139;
			case 193:
				return -1323334072;
			case 194:
				return 1191283411;
			case 195:
				return 2054555425;
			case 196:
				return 1627459254;
			case 197:
				return 1451629584;
			case 198:
				return 989607914;
			case 199:
				return 764325310;
			case 200:
				return -1935434583;
			case 201:
				return 636239983;
			case 202:
				return 845427792;
			case 203:
				return -1309532876;
			case 204:
				return -1961938422;
			case 205:
				return -24480300;
			case 206:
				return 712823073;
			case 207:
				return -2074957003;
			case 208:
				return 840395410;
			case 209:
				return -433293752;
			case 210:
				return 1831175752;
			case 211:
				return -1235304557;
			case 212:
				return 508853087;
			case 213:
				return -936204805;
			case 214:
				return 2118488614;
			case 215:
				return -1287270695;
			case 216:
				return -1885599866;
			case 217:
				return -118171082;
			case 218:
				return 1726559781;
			case 219:
				return 1455068616;
			case 220:
				return -1069586228;
			case 221:
				return -688744902;
			case 222:
				return -1993836161;
			case 223:
				return 402954041;
			case 224:
				return 616706228;
			case 225:
				return -1279832420;
			case 226:
				return 1280284302;
			case 227:
				return 99679839;
			case 228:
				return -195226224;
			case 229:
				return -1670262487;
			case 230:
				return -754458705;
			case 231:
				return -1725459238;
			case 232:
				return 283731391;
			case 233:
				return -31342544;
			case 234:
				return 588746212;
			case 235:
				return -834411899;
			case 236:
				return -50297425;
			case 237:
				return 34626245;
			case 238:
				return 1128425273;
			case 239:
				return 1405502979;
			case 240:
				return -1534019549;
			case 241:
				return -1218790373;
			case 242:
				return -1995447743;
			case 243:
				return 1495728629;
			case 244:
				return -205102142;
			case 245:
				return 2068117822;
			case 246:
				return 1646485471;
			case 247:
				return 2075683947;
			case 248:
				return 48202231;
			case 249:
				return 1532041436;
			case 250:
				return 1993833091;
			case 251:
				return -985843618;
			case 252:
				return 1542551103;
			case 253:
				return 298607063;
			case 254:
				return -1298966347;
			case 255:
				return 1117165375;
			case 256:
				return -1695492178;
			case 257:
				return -1985868973;
			case 258:
				return -1300575561;
			case 259:
				return 354638936;
			case 260:
				return 933157597;
			case 261:
				return 1416094782;
			case 262:
				return -1139312905;
			case 263:
				return 1062381624;
			case 264:
				return -1003150953;
			case 265:
				return -1986775954;
			case 266:
				return 929785619;
			case 267:
				return -899261623;
			case 268:
				return -476849231;
			case 269:
				return -557729610;
			case 270:
				return -639956757;
			case 271:
				return -1991979537;
			case 272:
				return 748846068;
			case 273:
				return 1193231534;
			case 274:
				return -663999418;
			case 275:
				return 1807258239;
			case 276:
				return -259044425;
			case 277:
				return 787640784;
			case 278:
				return 1199768352;
			case 279:
				return -1414272575;
			case 280:
				return -1392793470;
			case 281:
				return -1398290276;
			case 282:
				return 2006120810;
			case 283:
				return -1785392621;
			case 284:
				return 194103255;
			case 285:
				return -1809365172;
			case 286:
				return -1408478050;
			case 287:
				return -612173099;
			case 288:
				return -716370751;
			case 289:
				return -567121002;
			case 290:
				return 1344880374;
			case 291:
				return -1872364931;
			case 292:
				return -1923126393;
			case 293:
				return -313259746;
			case 294:
				return -367168072;
			case 295:
				return 1971923782;
			case 296:
				return 401043460;
			case 297:
				return 104287396;
			case 298:
				return 1014446371;
			case 299:
				return 715920781;
			case 300:
				return -900541220;
			case 301:
				return -1199296193;
			case 302:
				return -290546285;
			case 303:
				return -553189820;
			case 304:
				return 546408124;
			case 305:
				return 1313890873;
			case 306:
				return 129717520;
			case 307:
				return -1232784731;
			case 308:
				return -482898935;
			case 309:
				return 301558156;
			case 310:
				return 1859330882;
			case 311:
				return 1683033662;
			case 312:
				return -1419371417;
			case 313:
				return -643041038;
			case 314:
				return 1733394134;
			case 315:
				return 1529455145;
			case 316:
				return -911242864;
			case 317:
				return 1620300964;
			case 318:
				return -476377037;
			case 319:
				return -1440675331;
			case 320:
				return -848533860;
			case 321:
				return -1151968796;
			case 322:
				return -2024941402;
			case 323:
				return -1534577778;
			case 324:
				return -1211176762;
			case 325:
				return 857765025;
			case 326:
				return 1590446437;
			case 327:
				return 1466088082;
			case 328:
				return -1789074439;
			case 329:
				return -1852056457;
			case 330:
				return 499096137;
			case 331:
				return 556704039;
			case 332:
				return -368895393;
			case 333:
				return -105596478;
			case 334:
				return 190078209;
			case 335:
				return 561187138;
			case 336:
				return 859352269;
			case 337:
				return 1023328345;
			case 338:
				return 705065993;
			case 339:
				return -2090647942;
			case 340:
				return -2051019414;
			case 341:
				return 1174496881;
			case 342:
				return 1510350995;
			case 343:
				return -789679769;
			case 344:
				return 830856441;
			case 345:
				return -497360377;
			case 346:
				return 246150045;
			case 347:
				return 1514318372;
			case 348:
				return 680545654;
			case 349:
				return -262021866;
			case 350:
				return 62512826;
			case 351:
				return 1104817207;
			case 352:
				return 127191252;
			case 353:
				return -1207218596;
			case 354:
				return 1955414013;
			case 355:
				return 478888800;
			case 356:
				return 476687617;
			case 357:
				return 1856368424;
			case 358:
				return 226557169;
			case 359:
				return -320403109;
			case 360:
				return -576687258;
			case 361:
				return -605808708;
			case 362:
				return -331965904;
			case 363:
				return -100150000;
			case 364:
				return -116967529;
			case 365:
				return 568096966;
			case 366:
				return 18369533;
			case 367:
				return -770646513;
			case 368:
				return -1876837239;
			case 369:
				return -449454773;
			case 370:
				return 1308321372;
			case 371:
				return 516308968;
			case 372:
				return 143994875;
			case 373:
				return 1991621063;
			case 374:
				return -1798733774;
			case 375:
				return 677191274;
			case 376:
				return -2011620387;
			case 377:
				return 579127040;
			case 378:
				return -1314125880;
			case 379:
				return -953275122;
			case 380:
				return 1998087725;
			case 381:
				return 1145227353;
			case 382:
				return 1915867459;
			case 383:
				return -3571233;
			case 384:
				return -2105071972;
			case 385:
				return 1527084472;
			case 386:
				return 1635537886;
			case 387:
				return -1121783372;
			case 388:
				return 874022542;
			case 389:
				return 552030279;
			case 390:
				return -1639384288;
			case 391:
				return 274045919;
			case 392:
				return -1047394327;
			case 393:
				return -1141831946;
			case 394:
				return -591921971;
			case 395:
				return 1157155867;
			case 396:
				return 1397975248;
			case 397:
				return -820486040;
			case 398:
				return -1109901848;
			case 399:
				return -1010679388;
			case 400:
				return 98482444;
			case 401:
				return -1754541271;
			case 402:
				return -1363999915;
			case 403:
				return -163883900;
			case 404:
				return 26932594;
			case 405:
				return -1930879809;
			case 406:
				return 46370274;
			case 407:
				return 976641588;
			case 408:
				return 1121956769;
			case 409:
				return -340622004;
			case 410:
				return 510716616;
			case 411:
				return 1464851585;
			case 412:
				return 1763246099;
			case 413:
				return 920427419;
			case 414:
				return -860750371;
			case 415:
				return 1193359531;
			case 416:
				return 1707200698;
			case 417:
				return 1033367448;
			case 418:
				return -1279036865;
			case 419:
				return -1816233372;
			case 420:
				return -718318645;
			case 421:
				return 1717399635;
			case 422:
				return 40845437;
			case 423:
				return -1664053323;
			case 424:
				return -1535282356;
			case 425:
				return -363626454;
			case 426:
				return -1375030991;
			case 427:
				return -697003681;
			case 428:
				return 1193229750;
			case 429:
				return -2041779893;
			case 430:
				return 658964321;
			case 431:
				return 112266538;
			case 432:
				return -593457329;
			case 433:
				return 781058494;
			case 434:
				return -1022426685;
			case 435:
				return 1989203268;
			case 436:
				return 1020450527;
			case 437:
				return -531198053;
			case 438:
				return 1467466015;
			case 439:
				return -551038153;
			case 440:
				return -484929865;
			case 441:
				return 841781567;
			case 442:
				return -755250900;
			case 443:
				return 1262164851;
			case 444:
				return -620856989;
			case 445:
				return -1453850836;
			case 446:
				return 2006850489;
			case 447:
				return -338553155;
			case 448:
				return -1106668087;
			case 449:
				return -323126593;
			case 450:
				return 2028590076;
			case 451:
				return -1636879249;
			case 452:
				return -889869458;
			case 453:
				return 983546059;
			case 454:
				return 1590561203;
			case 455:
				return -739334986;
			case 456:
				return 1289304923;
			case 457:
				return 1113693078;
			case 458:
				return -1019727725;
			case 459:
				return -78852126;
			case 460:
				return 992791293;
			case 461:
				return 660686456;
			case 462:
				return -584714922;
			case 463:
				return -1513941904;
			case 464:
				return -1306375743;
			case 465:
				return 1489268640;
			case 466:
				return -1344255754;
			case 467:
				return 739805687;
			case 468:
				return 1003623269;
			case 469:
				return -395621323;
			case 470:
				return 1638937672;
			case 471:
				return 661576070;
			case 472:
				return 795060201;
			case 473:
				return -198004806;
			case 474:
				return -924329535;
			case 475:
				return -1815023148;
			case 476:
				return -537757838;
			case 477:
				return 1575123584;
			case 478:
				return -710506752;
			case 479:
				return -2117963426;
			case 480:
				return -419935200;
			case 481:
				return -1849681615;
			case 482:
				return 1122583474;
			case 483:
				return -828094297;
			case 484:
				return -1496155572;
			case 485:
				return 44502487;
			case 486:
				return -459648718;
			case 487:
				return 1102643191;
			case 488:
				return -1778044697;
			case 489:
				return 1387226336;
			case 490:
				return -1310355638;
			case 491:
				return 1069611813;
			case 492:
				return 531106429;
			case 493:
				return -407402757;
			case 494:
				return 1459136338;
			case 495:
				return -1162254606;
			case 496:
				return -1869016398;
			case 497:
				return 1561231200;
			case 498:
				return -1541842872;
			case 499:
				return 1311984381;
			case 500:
				return -771819139;
			case 501:
				return -1437554707;
			case 502:
				return -981684452;
			case 503:
				return 560821199;
			case 504:
				return 1547347496;
			case 505:
				return 806681228;
			case 506:
				return -1966238128;
			case 507:
				return -957510885;
			case 508:
				return -149795084;
			case 509:
				return 955352710;
			case 510:
				return -1016007592;
			case 511:
				return -1361342903;
			case 512:
				return 41956969;
			case 513:
				return -317096325;
			case 514:
				return 1025787994;
			case 515:
				return -1255331540;
			case 516:
				return -1063926197;
			case 517:
				return 629519239;
			case 518:
				return -483001024;
			case 519:
				return -2048221620;
			case 520:
				return 255767990;
			case 521:
				return 1104800593;
			case 522:
				return -1063259251;
			case 523:
				return -763678874;
			case 524:
				return -408234235;
			case 525:
				return 1423158124;
			case 526:
				return 360408116;
			case 527:
				return 339295570;
			case 528:
				return 668976634;
			case 529:
				return 968084866;
			case 530:
				return -696422730;
			case 531:
				return 1537844205;
			case 532:
				return -1766409506;
			case 533:
				return -724913398;
			case 534:
				return -1950049852;
			case 535:
				return -1786365097;
			case 536:
				return -1221875648;
			case 537:
				return -833857740;
			case 538:
				return 1929440211;
			case 539:
				return 1354870005;
			case 540:
				return -1718055184;
			case 541:
				return -1499162505;
			case 542:
				return -1832103801;
			case 543:
				return -262759679;
			case 544:
				return -624201308;
			case 545:
				return -1848077772;
			case 546:
				return -3789307;
			case 547:
				return 1368296489;
			case 548:
				return -436084091;
			case 549:
				return 1271713904;
			case 550:
				return 1423681694;
			case 551:
				return 1293624693;
			case 552:
				return -1305406402;
			case 553:
				return 1983816160;
			case 554:
				return -602816690;
			case 555:
				return 636278554;
			case 556:
				return -285245562;
			case 557:
				return 1031662866;
			case 558:
				return -1041976064;
			case 559:
				return 1221694281;
			case 560:
				return 1036815507;
			case 561:
				return 775893260;
			case 562:
				return -329355129;
			case 563:
				return 2117211184;
			case 564:
				return -1042390616;
			case 565:
				return -118700196;
			case 566:
				return 991016631;
			case 567:
				return 57105576;
			case 568:
				return 238757788;
			case 569:
				return 927020127;
			case 570:
				return 1388161943;
			case 571:
				return -7594117;
			case 572:
				return -1680050035;
			case 573:
				return 41398635;
			case 574:
				return 462263849;
			case 575:
				return 1422134667;
			case 576:
				return 1263244828;
			case 577:
				return -1813544782;
			case 578:
				return 1008375999;
			case 579:
				return 117485200;
			case 580:
				return -188216801;
			case 581:
				return -2047539266;
			case 582:
				return 1053919002;
			case 583:
				return -1754970007;
			case 584:
				return 1364276294;
			case 585:
				return -1194012756;
			case 586:
				return -1960338341;
			case 587:
				return 519905064;
			case 588:
				return 1986073536;
			case 589:
				return -835014781;
			case 590:
				return 2144414063;
			case 591:
				return 1108743226;
			case 592:
				return -2042475701;
			case 593:
				return -198101911;
			case 594:
				return 1358414393;
			case 595:
				return 672931117;
			case 596:
				return 1182205549;
			case 597:
				return 205214733;
			case 598:
				return -78801135;
			case 599:
				return -846371468;
			case 600:
				return joaat("q");
			case 601:
				return 1696372169;
			case 602:
				return 26544760;
			case 603:
				return 2100012223;
			case 604:
				return 1216075674;
			case 605:
				return 222513322;
			case 606:
				return 461989174;
			case 607:
				return -1316886711;
			case 608:
				return -37875204;
			case 609:
				return 258104717;
			case 610:
				return -76700394;
			case 611:
				return 1614255891;
			case 612:
				return 1492183352;
			case 613:
				return 1260721433;
			case 614:
				return 642301973;
			case 615:
				return -622475043;
			case 616:
				return 1138093977;
			case 617:
				return 339111695;
			case 618:
				return -518858513;
			case 619:
				return 1274804496;
			case 620:
				return -84516711;
			case 621:
				return 1597665303;
			case 622:
				return 918349577;
			case 623:
				return 116162819;
			case 624:
				return 1596089211;
			case 625:
				return -1112373128;
			case 626:
				return -657241692;
			case 627:
				return 1460466036;
			case 628:
				return -711890106;
			case 629:
				return -1031113966;
			case 630:
				return -2133417899;
			case 631:
				return -891994084;
			case 632:
				return 1733948592;
			case 633:
				return 634831342;
			case 634:
				return -528294019;
			case 635:
				return -943891161;
			case 636:
				return -914406102;
			case 637:
				return 1855900423;
			case 638:
				return 73781828;
			case 639:
				return -391567710;
			case 640:
				return -1809571159;
			case 641:
				return -1052023588;
			case 642:
				return 944314155;
			case 643:
				return 1531008020;
			case 644:
				return -745087561;
			case 645:
				return 1324480450;
			case 646:
				return 23211744;
			case 647:
				return 1672215059;
			case 648:
				return 604668055;
			case 649:
				return -1177027698;
			case 650:
				return 1708195603;
			case 651:
				return 2133280389;
			case 652:
				return -508205317;
			case 653:
				return -1773409329;
			case 654:
				return -205505701;
			case 655:
				return -51262018;
			case 656:
				return -432370325;
			case 657:
				return 1624069429;
			case 658:
				return 2075691867;
			case 659:
				return -2106432785;
			case 660:
				return 1903595390;
			case 661:
				return -24665995;
			case 662:
				return 1651555923;
			case 663:
				return -1132206051;
			case 664:
				return -1465375517;
			case 665:
				return -1233192626;
			case 666:
				return 453346329;
			case 667:
				return 1432023115;
			case 668:
				return 1817635528;
			case 669:
				return 1190000937;
			case 670:
				return 1274066881;
			case 671:
				return -2145807603;
			case 672:
				return -583431154;
			case 673:
				return 1096335200;
			case 674:
				return -270131786;
			case 675:
				return 1779169712;
			case 676:
				return 1083754485;
			case 677:
				return 815958096;
			case 678:
				return 1532789536;
			case 679:
				return -1364906332;
			case 680:
				return 1916363327;
			case 681:
				return -1279389329;
			case 682:
				return -1954638951;
			case 683:
				return 574916087;
			case 684:
				return 1793712122;
			case 685:
				return 1251554503;
			case 686:
				return -657334314;
			case 687:
				return -2004293616;
			case 688:
				return 1926231273;
			case 689:
				return -199228359;
			case 690:
				return -872975316;
			case 691:
				return 806606916;
			case 692:
				return 2137579614;
			case 693:
				return -724513114;
			case 694:
				return -476328287;
			case 695:
				return -936524034;
			case 696:
				return -2025289364;
			case 697:
				return 536560689;
			case 698:
				return -1834690693;
			case 699:
				return 1106131202;
			case 700:
				return 516107115;
			case 701:
				return -1428524966;
			case 702:
				return 722896594;
			case 703:
				return 1307857318;
			case 704:
				return 1951742298;
			case 705:
				return -313167137;
			case 706:
				return 848190976;
			case 707:
				return 1673463331;
			case 708:
				return 352739809;
			case 709:
				return 568859874;
			case 710:
				return 1199250380;
			case 711:
				return 1303859698;
			case 712:
				return 131702782;
			case 713:
				return -1358954864;
			case 714:
				return 1425800019;
			case 715:
				return 1216579993;
			case 716:
				return -1508001532;
			case 717:
				return -1389022397;
			case 718:
				return 1551178888;
			case 719:
				return -588218319;
			case 720:
				return 1857676106;
			case 721:
				return -387074757;
			case 722:
				return 2001473838;
			case 723:
				return 1283630779;
			case 724:
				return -752947810;
			case 725:
				return 1288855827;
			case 726:
				return -377841051;
			case 727:
				return -70959366;
			case 728:
				return 2087316443;
			case 729:
				return 905895682;
			case 730:
				return -1406112982;
			case 731:
				return 1920416437;
			case 732:
				return -186728578;
			case 733:
				return 1960643951;
			case 734:
				return 666617953;
			case 735:
				return 637874199;
			case 736:
				return 731209239;
			case 737:
				return 724436573;
			case 738:
				return -1475403379;
			case 739:
				return -518785376;
			case 740:
				return -1878882174;
			case 741:
				return 1202020135;
			case 742:
				return -1989899190;
			case 743:
				return 951314072;
			case 744:
				return -780819048;
			case 745:
				return -52140817;
			case 746:
				return 1186533019;
			case 747:
				return -713587740;
			case 748:
				return 999248445;
			case 749:
				return 2040843256;
			case 750:
				return -661560211;
			case 751:
				return -1933617196;
			case 752:
				return -1588793465;
			case 753:
				return 924412185;
			case 754:
				return -560409108;
			case 755:
				return 805009584;
			case 756:
				return 2470511;
			case 757:
				return -784156210;
			case 758:
				return -1905652203;
			case 759:
				return 1519091923;
			case 760:
				return -156313117;
			case 761:
				return -1579403437;
			case 762:
				return 774477221;
			case 763:
				return 1097534152;
			case 764:
				return -1217078386;
			case 765:
				return 135886022;
			case 766:
				return -1158072415;
			case 767:
				return 903666582;
			case 768:
				return 1081087978;
			case 769:
				return 696143352;
			case 770:
				return -981203673;
			case 771:
				return 1228600352;
			case 772:
				return -1301569116;
			case 773:
				return 282485265;
			case 774:
				return 56708243;
			case 775:
				return 199047531;
			case 776:
				return -776975047;
			case 777:
				return 2095116685;
			case 778:
				return -892659042;
			case 779:
				return 1136898294;
			case 780:
				return 897455211;
			case 781:
				return 1804593020;
			case 782:
				return -1049500949;
			case 783:
				return 1325716092;
			case 784:
				return -1781246069;
			case 785:
				return -1892595931;
			case 786:
				return -2009766528;
			case 787:
				return 406334892;
			case 788:
				return -554932707;
			case 789:
				return -1744253204;
			case 790:
				return 192173299;
			case 791:
				return 1385025009;
			case 792:
				return 1573766063;
			case 793:
				return -159723514;
			case 794:
				return -991619789;
			case 795:
				return -1000738568;
			case 796:
				return 1285430299;
			case 797:
				return 610256856;
			case 798:
				return 517553365;
			case 799:
				return -2083943324;
			case 800:
				return 30201771;
			case 801:
				return -1801047945;
			case 802:
				return -555917871;
			case 803:
				return 267578156;
			case 804:
				return -1871745961;
			case 805:
				return 2125514970;
			case 806:
				return 1777348822;
			case 807:
				return -1824080033;
			case 808:
				return 317070801;
			case 809:
				return -763477089;
			case 810:
				return -1617847332;
			case 811:
				return -2142987163;
			case 812:
				return 1027093524;
			case 813:
				return 1104143966;
			case 814:
				return 1879779330;
			case 815:
				return -799526632;
			case 816:
				return -791673850;
			case 817:
				return 1585258492;
			case 818:
				return 104102416;
			case 819:
				return -1265903940;
			case 820:
				return -474761969;
			case 821:
				return 782453481;
			case 822:
				return 203916786;
			case 823:
				return 1891601353;
			case 824:
				return 320262265;
			case 825:
				return -615794465;
			case 826:
				return -724540003;
			case 827:
				return -307327135;
			case 828:
				return 1492058366;
			case 829:
				return 920612809;
			case 830:
				return -437187151;
			case 831:
				return 820079465;
			case 832:
				return 1424964403;
			case 833:
				return 423891836;
			case 834:
				return -163787010;
			case 835:
				return 777001839;
			case 836:
				return -200959126;
			case 837:
				return -794503195;
			case 838:
				return 1364392658;
			case 839:
				return -882460089;
			case 840:
				return -1835067413;
			case 841:
				return -1392150519;
			case 842:
				return -389510791;
			case 843:
				return -910880980;
			case 844:
				return 382484708;
			case 845:
				return -411006854;
			case 846:
				return 1133453602;
			case 847:
				return -787042507;
			case 848:
				return 350637317;
			case 849:
				return 1968676233;
			case 850:
				return 2112594812;
			case 851:
				return 1750312025;
			case 852:
				return -1111286486;
			case 853:
				return -142900294;
			case 854:
				return -555736180;
			case 855:
				return 691955519;
			case 856:
				return -1022518533;
			case 857:
				return -196117122;
			case 858:
				return 499044444;
			case 859:
				return -805522215;
			case 860:
				return 2080640229;
			case 861:
				return -1386614896;
			case 862:
				return -693812694;
			case 863:
				return -1625703283;
			case 864:
				return 563581773;
			case 865:
				return 1628851253;
			case 866:
				return 746475990;
			case 867:
				return -753844687;
			case 868:
				return -1045062790;
			case 869:
				return -1272426249;
			case 870:
				return 334535013;
			case 871:
				return 582879672;
			case 872:
				return 1713454259;
			case 873:
				return -1417469821;
			case 874:
				return 1798244378;
			case 875:
				return -1665620584;
			case 876:
				return -537740003;
			case 877:
				return -1584316325;
			case 878:
				return -1085363933;
			case 879:
				return 1517736440;
			case 880:
				return -1509154451;
			case 881:
				return -693132475;
			case 882:
				return -1984145124;
			case 883:
				return -1315256079;
			case 884:
				return -1653831205;
			case 885:
				return -1307469679;
			case 886:
				return -2092712551;
			case 887:
				return -1595003151;
			case 888:
				return -1528647119;
			case 889:
				return -1207658444;
			case 890:
				return -1758697759;
			case 891:
				return 591001924;
			case 892:
				return -890900091;
			case 893:
				return -1055775145;
			case 894:
				return -276247702;
			case 895:
				return 585407854;
			case 896:
				return 1381573999;
			case 897:
				return 2116125345;
			case 898:
				return -1369880946;
			case 899:
				return 292369320;
			case 900:
				return 539566709;
			case 901:
				return 883579956;
			case 902:
				return -574996782;
			case 903:
				return 1169511062;
			case 904:
				return -2111718052;
			case 905:
				return -1266106154;
			case 906:
				return 242017654;
			case 907:
				return 120283199;
			case 908:
				return 2127497940;
			case 909:
				return -1643311717;
			case 910:
				return 1292550073;
			case 911:
				return -233702408;
			case 912:
				return -284530484;
			case 913:
				return 1510796294;
			case 914:
				return 42616763;
			case 915:
				return -948864541;
			case 916:
				return 879263546;
			case 917:
				return -751879320;
			case 918:
				return -864071044;
			case 919:
				return -1244697162;
			case 920:
				return 834697453;
			case 921:
				return 1419259602;
			case 922:
				return -378666035;
			case 923:
				return -1802111373;
			case 924:
				return 133584803;
			case 925:
				return 1297834604;
			case 926:
				return -476999974;
			case 927:
				return 719166833;
			case 928:
				return 1019232566;
			case 929:
				return -1311188166;
			case 930:
				return 1192526031;
			case 931:
				return 1091543855;
			case 932:
				return -952533419;
			case 933:
				return 1584946069;
			case 934:
				return 2123010634;
			case 935:
				return -1081335485;
			case 936:
				return -1176501741;
			case 937:
				return -2035177903;
			case 938:
				return -1147247388;
			case 939:
				return -1436313374;
			case 940:
				return 1149195254;
			case 941:
				return -1643869063;
			case 942:
				return -5339556;
			case 943:
				return -445068262;
			case 944:
				return 334010167;
			case 945:
				return -676881895;
			case 946:
				return 1331438832;
			case 947:
				return 376665102;
			case 948:
				return -928815382;
			case 949:
				return -645247737;
			case 950:
				return -299265919;
			case 951:
				return 883152450;
			case 952:
				return 1736837788;
			case 953:
				return 1814624585;
			case 954:
				return 1353861354;
			case 955:
				return 611701601;
			case 956:
				return 901412334;
			case 957:
				return 703356498;
			case 958:
				return -650822431;
			case 959:
				return -956131204;
			case 960:
				return 2006257967;
			case 961:
				return -2008632686;
			case 962:
				return -1615103170;
			case 963:
				return 578474998;
			case 964:
				return -1860722801;
			case 965:
				return -692583342;
			case 966:
				return -669282002;
			case 967:
				return -1355464862;
			case 968:
				return -1141450523;
			case 969:
				return -252820785;
			case 970:
				return 258899919;
			case 971:
				return -767883927;
			case 972:
				return -535715562;
			case 973:
				return 931647489;
			case 974:
				return 1467774743;
			case 975:
				return 2030594491;
			case 976:
				return -790660125;
			case 977:
				return 33260939;
			case 978:
				return 780653384;
			case 979:
				return 180676027;
			case 980:
				return -270212770;
			case 981:
				return -211623797;
			case 982:
				return 862349416;
			case 983:
				return 699225334;
			case 984:
				return 411742897;
			case 985:
				return 349494711;
			case 986:
				return -706105482;
			case 987:
				return 176369335;
			case 988:
				return 2087181890;
			case 989:
				return 637627640;
			case 990:
				return 44077654;
			case 991:
				return 839872819;
			case 992:
				return -1656895602;
			case 993:
				return -583969090;
			case 994:
				return -364121869;
			case 995:
				return -1073832871;
			case 996:
				return -1786558629;
			case 997:
				return -1548753996;
			case 998:
				return -1784133719;
			case 999:
				return -1667461262;
			default:
				break;
		}
		if (iParam1 >= 1)
		{
		}
		return StackVal;
	}
	if (iParam0 <= 1999)
	{
		switch (iParam0)
		{
			case 1000:
				return 1236917971;
			case 1001:
				return 1757739778;
			case 1002:
				return -2029237844;
			case 1003:
				return -2000794023;
			case 1004:
				return -531137142;
			case 1005:
				return 5422464;
			case 1006:
				return 203845253;
			case 1007:
				return -1658679165;
			case 1008:
				return 258733332;
			case 1009:
				return 79028136;
			case 1010:
				return -218940381;
			case 1011:
				return 634752926;
			case 1012:
				return 984271748;
			case 1013:
				return 43335376;
			case 1014:
				return 1444950942;
			case 1015:
				return 910783469;
			case 1016:
				return 727408145;
			case 1017:
				return 429636242;
			case 1018:
				return -19364596;
			case 1019:
				return 2131035495;
			case 1020:
				return -316448350;
			case 1021:
				return -496874464;
			case 1022:
				return -794515291;
			case 1023:
				return 275588949;
			case 1024:
				return -52330434;
			case 1025:
				return -2131457946;
			case 1026:
				return 1819926822;
			case 1027:
				return 1529593482;
			case 1028:
				return -668911501;
			case 1029:
				return 480644817;
			case 1030:
				return 1681117196;
			case 1031:
				return -1012618146;
			case 1032:
				return 2111816145;
			case 1033:
				return -722030448;
			case 1034:
				return -974480336;
			case 1035:
				return 197447134;
			case 1036:
				return -918785150;
			case 1037:
				return 1256771838;
			case 1038:
				return -584332967;
			case 1039:
				return 449426161;
			case 1040:
				return -999913940;
			case 1041:
				return -30541382;
			case 1042:
				return -960328988;
			case 1043:
				return -392430949;
			case 1044:
				return -904669171;
			case 1045:
				return 1205945639;
			case 1046:
				return 1532774697;
			case 1047:
				return -803019223;
			case 1048:
				return -2093605706;
			case 1049:
				return -114633341;
			case 1050:
				return -90646166;
			case 1051:
				return 531960211;
			case 1052:
				return 537424819;
			case 1053:
				return -1613262779;
			case 1054:
				return -1306905398;
			case 1055:
				return 339409162;
			case 1056:
				return 647011769;
			case 1057:
				return -273633290;
			case 1058:
				return -118635920;
			case 1059:
				return 2038589758;
			case 1060:
				return 751578549;
			case 1061:
				return 446073162;
			case 1062:
				return -588668690;
			case 1063:
				return -242247633;
			case 1064:
				return -1439987356;
			case 1065:
				return -1126224181;
			case 1066:
				return -1956194332;
			case 1067:
				return 945532872;
			case 1068:
				return -1696865897;
			case 1069:
				return -890895654;
			case 1070:
				return 1953646620;
			case 1071:
				return 1299817544;
			case 1072:
				return 1204787444;
			case 1073:
				return 66523468;
			case 1074:
				return 131323483;
			case 1075:
				return -134556459;
			case 1076:
				return 2040259178;
			case 1077:
				return 1190076410;
			case 1078:
				return 1598834669;
			case 1079:
				return -1106517275;
			case 1080:
				return -1986209836;
			case 1081:
				return 1525054056;
			case 1082:
				return 749968899;
			case 1083:
				return -186143124;
			case 1084:
				return -2043326480;
			case 1085:
				return 270920361;
			case 1086:
				return 1924458218;
			case 1087:
				return 1892122519;
			case 1088:
				return -130638369;
			case 1089:
				return 966418260;
			case 1090:
				return -432154242;
			case 1091:
				return 2137790641;
			case 1092:
				return 1291083725;
			case 1093:
				return 500829173;
			case 1094:
				return 993595204;
			case 1095:
				return 1934919499;
			case 1096:
				return -515396642;
			case 1097:
				return -1387511711;
			case 1098:
				return 1901132483;
			case 1099:
				return -2082345587;
			case 1100:
				return -715865581;
			case 1101:
				return 77337110;
			case 1102:
				return 2029194243;
			case 1103:
				return -1125782227;
			case 1104:
				return -372970556;
			case 1105:
				return 1749008611;
			case 1106:
				return 2111695903;
			case 1107:
				return -1947695052;
			case 1108:
				return -1559513478;
			case 1109:
				return -1321905459;
			case 1110:
				return -1560816708;
			case 1111:
				return 823583740;
			case 1112:
				return -826466486;
			case 1113:
				return -593183975;
			case 1114:
				return -362883443;
			case 1115:
				return -630275010;
			case 1116:
				return -164693058;
			case 1117:
				return 118201723;
			case 1118:
				return 458453080;
			case 1119:
				return -1385360243;
			case 1120:
				return -1288790000;
			case 1121:
				return 758066107;
			case 1122:
				return -1995054197;
			case 1123:
				return -1623126047;
			case 1124:
				return 1943484686;
			case 1125:
				return 2056603274;
			case 1126:
				return 898257133;
			case 1127:
				return -380287375;
			case 1128:
				return 281153830;
			case 1129:
				return 1739101350;
			case 1130:
				return -634291786;
			case 1131:
				return -1047158045;
			case 1132:
				return 42081460;
			case 1133:
				return 870580095;
			case 1134:
				return 504746979;
			case 1135:
				return 138913863;
			case 1136:
				return -90108678;
			case 1137:
				return 1258244391;
			case 1138:
				return -501793326;
			case 1139:
				return 1490756544;
			case 1140:
				return -753454183;
			case 1141:
				return -1854368742;
			case 1142:
				return 466168676;
			case 1143:
				return 1343343014;
			case 1144:
				return 1173561253;
			case 1145:
				return -1123141803;
			case 1146:
				return 739412171;
			case 1147:
				return 1858796535;
			case 1148:
				return 411846009;
			case 1149:
				return -393583941;
			case 1150:
				return -2122914678;
			case 1151:
				return -518004776;
			case 1152:
				return 917434281;
			case 1153:
				return -1593160175;
			case 1154:
				return 1840600379;
			case 1155:
				return -1859373348;
			case 1156:
				return -442857872;
			case 1157:
				return 1251358153;
			case 1158:
				return 427220750;
			case 1159:
				return 872406077;
			case 1160:
				return -2040493861;
			case 1161:
				return 1471226731;
			case 1162:
				return -1382265257;
			case 1163:
				return -1471527776;
			case 1164:
				return 1867048850;
			case 1165:
				return -1149736196;
			case 1166:
				return -1490939730;
			case 1167:
				return -1926787493;
			case 1168:
				return 1552753100;
			case 1169:
				return 2136811572;
			case 1170:
				return -590227673;
			case 1171:
				return -232598845;
			case 1172:
				return 765141292;
			case 1173:
				return 1305415261;
			case 1174:
				return 1987335384;
			case 1175:
				return 271879652;
			case 1176:
				return -2045964586;
			case 1177:
				return -1926989471;
			case 1178:
				return -948615309;
			case 1179:
				return 66382979;
			case 1180:
				return 2077623691;
			case 1181:
				return -1393565861;
			case 1182:
				return -586415580;
			case 1183:
				return 2096286828;
			case 1184:
				return -1960936248;
			case 1185:
				return 1251859782;
			case 1186:
				return 1520095560;
			case 1187:
				return 994786977;
			case 1188:
				return 409171062;
			case 1189:
				return 998966461;
			case 1190:
				return -1381094502;
			case 1191:
				return -665831452;
			case 1192:
				return 1454866069;
			case 1193:
				return -1877706739;
			case 1194:
				return 437660121;
			case 1195:
				return -1325803862;
			case 1196:
				return 980904027;
			case 1197:
				return 1210622903;
			case 1198:
				return 905216692;
			case 1199:
				return -1299414622;
			case 1200:
				return -1035166057;
			case 1201:
				return -821741560;
			case 1202:
				return -574138996;
			case 1203:
				return -754870430;
			case 1204:
				return 1361745480;
			case 1205:
				return -84124751;
			case 1206:
				return 135073157;
			case 1207:
				return -1588838395;
			case 1208:
				return -601173298;
			case 1209:
				return -1852293718;
			case 1210:
				return 1202333215;
			case 1211:
				return -817579246;
			case 1212:
				return 1811369374;
			case 1213:
				return -1959752936;
			case 1214:
				return 1620292759;
			case 1215:
				return -971625396;
			case 1216:
				return -1260156441;
			case 1217:
				return 1705957630;
			case 1218:
				return 2002353235;
			case 1219:
				return 1111495201;
			case 1220:
				return -354071784;
			case 1221:
				return 558651865;
			case 1222:
				return 857341300;
			case 1223:
				return -1075177706;
			case 1224:
				return -826493765;
			case 1225:
				return -927211837;
			case 1226:
				return -710911638;
			case 1227:
				return -942555699;
			case 1228:
				return -760097927;
			case 1229:
				return 607574432;
			case 1230:
				return -1563072795;
			case 1231:
				return 825179479;
			case 1232:
				return -293283707;
			case 1233:
				return -539928451;
			case 1234:
				return 1526869387;
			case 1235:
				return 213881095;
			case 1236:
				return 2122708114;
			case 1237:
				return -1031045988;
			case 1238:
				return 1108342912;
			case 1239:
				return 976283842;
			case 1240:
				return 736578607;
			case 1241:
				return 1707393029;
			case 1242:
				return 478657470;
			case 1243:
				return -355608501;
			case 1244:
				return 957052101;
			case 1245:
				return 123244896;
			case 1246:
				return 607173790;
			case 1247:
				return -520400509;
			case 1248:
				return -1920340119;
			case 1249:
				return -1576393943;
			case 1250:
				return -413795019;
			case 1251:
				return 288413571;
			case 1252:
				return 1103365569;
			case 1253:
				return -2037661155;
			case 1254:
				return -1150137955;
			case 1255:
				return -1559012672;
			case 1256:
				return -1954657946;
			case 1257:
				return 207396248;
			case 1258:
				return -110381721;
			case 1259:
				return 1366418802;
			case 1260:
				return -2125611324;
			case 1261:
				return 1453569688;
			case 1262:
				return -80564929;
			case 1263:
				return 1157066259;
			case 1264:
				return 1720188956;
			case 1265:
				return 1475953931;
			case 1266:
				return -1166561064;
			case 1267:
				return -1365193577;
			case 1268:
				return 300868838;
			case 1269:
				return -316909020;
			case 1270:
				return 172011504;
			case 1271:
				return -1788578071;
			case 1272:
				return -1962893335;
			case 1273:
				return 1351589798;
			case 1274:
				return 1457661960;
			case 1275:
				return 163126540;
			case 1276:
				return -1620486708;
			case 1277:
				return -223906810;
			case 1278:
				return 2015311123;
			case 1279:
				return 1808508475;
			case 1280:
				return -379409079;
			case 1281:
				return -102951407;
			case 1282:
				return 1998041523;
			case 1283:
				return -1114426126;
			case 1284:
				return -1971474291;
			case 1285:
				return -1687561002;
			case 1286:
				return -1425946870;
			case 1287:
				return 1957225320;
			case 1288:
				return -860696938;
			case 1289:
				return -1893724593;
			case 1290:
				return 394987827;
			case 1291:
				return -937893311;
			case 1292:
				return 321670654;
			case 1293:
				return -1916602073;
			case 1294:
				return -1611076340;
			case 1295:
				return 1079303588;
			case 1296:
				return 970924250;
			case 1297:
				return -441619793;
			case 1298:
				return 1381006186;
			case 1299:
				return 140744122;
			case 1300:
				return -1177590512;
			case 1301:
				return 1267297807;
			case 1302:
				return -182995231;
			case 1303:
				return -1426249148;
			case 1304:
				return -1445186253;
			case 1305:
				return 2047954825;
			case 1306:
				return -2085723453;
			case 1307:
				return 1434945142;
			case 1308:
				return 658099812;
			case 1309:
				return 360721137;
			case 1310:
				return 1268291329;
			case 1311:
				return 943845492;
			case 1312:
				return -2037324418;
			case 1313:
				return 937052178;
			case 1314:
				return 698067861;
			case 1315:
				return -741769242;
			case 1316:
				return 2019747962;
			case 1317:
				return 1785810071;
			case 1318:
				return 1423450469;
			case 1319:
				return 1189709192;
			case 1320:
				return 512556003;
			case 1321:
				return 1770786479;
			case 1322:
				return 2022451711;
			case 1323:
				return -1933895237;
			case 1324:
				return -1987982797;
			case 1325:
				return -104137172;
			case 1326:
				return 1924209179;
			case 1327:
				return -2084193212;
			case 1328:
				return -838184752;
			case 1329:
				return -1433138716;
			case 1330:
				return -1103841944;
			case 1331:
				return -621941030;
			case 1332:
				return 1782877577;
			case 1333:
				return -584027313;
			case 1334:
				return 1219098211;
			case 1335:
				return 2097700639;
			case 1336:
				return 728120284;
			case 1337:
				return 1370097763;
			case 1338:
				return 1948051928;
			case 1339:
				return 1548546221;
			case 1340:
				return 106249677;
			case 1341:
				return 1546110128;
			case 1342:
				return -855912354;
			case 1343:
				return 324486076;
			case 1344:
				return -2052582076;
			case 1345:
				return -402976431;
			case 1346:
				return 1560807181;
			case 1347:
				return -723982773;
			case 1348:
				return -268335331;
			case 1349:
				return -302735166;
			case 1350:
				return -2104773585;
			case 1351:
				return 2101101756;
			case 1352:
				return -1472352094;
			case 1353:
				return -2077690059;
			case 1354:
				return 1029525997;
			case 1355:
				return -15722296;
			case 1356:
				return 327932996;
			case 1357:
				return -745860880;
			case 1358:
				return 1219276914;
			case 1359:
				return 711016796;
			case 1360:
				return 690962168;
			case 1361:
				return 384146021;
			case 1362:
				return 2082890965;
			case 1363:
				return -1192199739;
			case 1364:
				return -65072454;
			case 1365:
				return -770240157;
			case 1366:
				return 71064384;
			case 1367:
				return -1380983970;
			case 1368:
				return 135028740;
			case 1369:
				return -515910704;
			case 1370:
				return 398639187;
			case 1371:
				return 532770666;
			case 1372:
				return 948877318;
			case 1373:
				return -365969388;
			case 1374:
				return 780406120;
			case 1375:
				return 1372565859;
			case 1376:
				return 1111220101;
			case 1377:
				return -688011628;
			case 1378:
				return 114673428;
			case 1379:
				return 1822607116;
			case 1380:
				return 216214729;
			case 1381:
				return -87826930;
			case 1382:
				return 286801141;
			case 1383:
				return 622597018;
			case 1384:
				return 2016081133;
			case 1385:
				return -880373663;
			case 1386:
				return 58066174;
			case 1387:
				return 1944013855;
			case 1388:
				return -2137633069;
			case 1389:
				return -21876618;
			case 1390:
				return 1048790253;
			case 1391:
				return 363257921;
			case 1392:
				return 1649275138;
			case 1393:
				return -1872939092;
			case 1394:
				return -1484530238;
			case 1395:
				return -964156415;
			case 1396:
				return 188985281;
			case 1397:
				return -70021332;
			case 1398:
				return -437251660;
			case 1399:
				return 1601599776;
			case 1400:
				return 419559004;
			case 1401:
				return -677977650;
			case 1402:
				return 702350293;
			case 1403:
				return 1426715569;
			case 1404:
				return 2097480406;
			case 1405:
				return -1390612743;
			case 1406:
				return 1013712166;
			case 1407:
				return 107317036;
			case 1408:
				return -1656481590;
			case 1409:
				return -554880142;
			case 1410:
				return 810684093;
			case 1411:
				return 321594819;
			case 1412:
				return -385999832;
			case 1413:
				return -1284301817;
			case 1414:
				return -989202374;
			case 1415:
				return -1774140220;
			case 1416:
				return -262271608;
			case 1417:
				return 1601820048;
			case 1418:
				return 2025485344;
			case 1419:
				return 901520480;
			case 1420:
				return 157361403;
			case 1421:
				return 530288130;
			case 1422:
				return 1538837441;
			case 1423:
				return -1999825729;
			case 1424:
				return -2001921071;
			case 1425:
				return -1045282549;
			case 1426:
				return 853723410;
			case 1427:
				return -492479795;
			case 1428:
				return -1999465365;
			case 1429:
				return -347518940;
			case 1430:
				return -1887167048;
			case 1431:
				return -792944828;
			case 1432:
				return 1169958167;
			case 1433:
				return -112364237;
			case 1434:
				return -948006506;
			case 1435:
				return 1700045179;
			case 1436:
				return 1997423854;
			case 1437:
				return -814821283;
			case 1438:
				return -1045678888;
			case 1439:
				return -1663177928;
			case 1440:
				return -809371454;
			case 1441:
				return 1609975546;
			case 1442:
				return -1292493167;
			case 1443:
				return 1403324282;
			case 1444:
				return 1096093290;
			case 1445:
				return 626928579;
			case 1446:
				return 313722477;
			case 1447:
				return 976082270;
			case 1448:
				return 153759048;
			case 1449:
				return 202127432;
			case 1450:
				return -2016771661;
			case 1451:
				return 2072112547;
			case 1452:
				return -1739164071;
			case 1453:
				return -1331617405;
			case 1454:
				return -1676997321;
			case 1455:
				return 1952267752;
			case 1456:
				return 1620317782;
			case 1457:
				return -959814975;
			case 1458:
				return 721720861;
			case 1459:
				return 1027586707;
			case 1460:
				return 1351016737;
			case 1461:
				return 648514907;
			case 1462:
				return -1570232590;
			case 1463:
				return -205043526;
			case 1464:
				return 93121605;
			case 1465:
				return -1728638189;
			case 1466:
				return -1434077648;
			case 1467:
				return 102652153;
			case 1468:
				return 1210820782;
			case 1469:
				return -320577790;
			case 1470:
				return 1128417383;
			case 1471:
				return -1451784475;
			case 1472:
				return 1028224932;
			case 1473:
				return -1841279810;
			case 1474:
				return -619637948;
			case 1475:
				return 2119205605;
			case 1476:
				return -2000080725;
			case 1477:
				return 2123887232;
			case 1478:
				return 292845400;
			case 1479:
				return 719147410;
			case 1480:
				return 1070723367;
			case 1481:
				return -692521236;
			case 1482:
				return 1261237250;
			case 1483:
				return 1049842342;
			case 1484:
				return -160392273;
			case 1485:
				return 40009123;
			case 1486:
				return -146943962;
			case 1487:
				return 1034009086;
			case 1488:
				return -71508135;
			case 1489:
				return 180356041;
			case 1490:
				return -109425099;
			case 1491:
				return 539843907;
			case 1492:
				return -436009554;
			case 1493:
				return 2728487;
			case 1494:
				return 1674800958;
			case 1495:
				return -782359587;
			case 1496:
				return 1084869405;
			case 1497:
				return 1636281938;
			case 1498:
				return -1642249622;
			case 1499:
				return 1692451176;
			case 1500:
				return 220566669;
			case 1501:
				return 1700661865;
			case 1502:
				return -644575724;
			case 1503:
				return 1209017192;
			case 1504:
				return 291770965;
			case 1505:
				return -2143243848;
			case 1506:
				return 510052409;
			case 1507:
				return 1676971154;
			case 1508:
				return -1010466481;
			case 1509:
				return -1247551347;
			case 1510:
				return 1717489303;
			case 1511:
				return 1290371072;
			case 1512:
				return -1880340209;
			case 1513:
				return 2108368013;
			case 1514:
				return -1147256587;
			case 1515:
				return 1802272784;
			case 1516:
				return 1309652195;
			case 1517:
				return -1639921686;
			case 1518:
				return 1691578074;
			case 1519:
				return -387018143;
			case 1520:
				return -1458944281;
			case 1521:
				return -751959361;
			case 1522:
				return 110400393;
			case 1523:
				return 652735549;
			case 1524:
				return 1742990618;
			case 1525:
				return -916538063;
			case 1526:
				return 1729014506;
			case 1527:
				return -1279618207;
			case 1528:
				return 764763647;
			case 1529:
				return -1291679096;
			case 1530:
				return 5585502;
			case 1531:
				return 1074130180;
			case 1532:
				return -1370620659;
			case 1533:
				return -1362716862;
			case 1534:
				return 977061573;
			case 1535:
				return -624219879;
			case 1536:
				return 482931525;
			case 1537:
				return 349896400;
			case 1538:
				return 715730031;
			case 1539:
				return 126970802;
			case 1540:
				return -2066612507;
			case 1541:
				return 1662136507;
			case 1542:
				return 1386355334;
			case 1543:
				return -1397680620;
			case 1544:
				return 1467687992;
			case 1545:
				return 2017271733;
			case 1546:
				return -1507376753;
			case 1547:
				return 1125807846;
			case 1548:
				return -2111123884;
			case 1549:
				return 2047806036;
			case 1550:
				return -1894946791;
			case 1551:
				return 1886481528;
			case 1552:
				return 499090815;
			case 1553:
				return 1246210400;
			case 1554:
				return 1251925821;
			case 1555:
				return -1821269135;
			case 1556:
				return 1769061820;
			case 1557:
				return -1466334531;
			case 1558:
				return 1461000451;
			case 1559:
				return -780636043;
			case 1560:
				return -685270742;
			case 1561:
				return -1341918262;
			case 1562:
				return 82769080;
			case 1563:
				return -1983416665;
			case 1564:
				return -850189983;
			case 1565:
				return -172246728;
			case 1566:
				return -1836870707;
			case 1567:
				return 1706275010;
			case 1568:
				return -159557995;
			case 1569:
				return 438624963;
			case 1570:
				return 1402472902;
			case 1571:
				return 1679038623;
			case 1572:
				return -546137515;
			case 1573:
				return -1123811713;
			case 1574:
				return -462274808;
			case 1575:
				return -1906732332;
			case 1576:
				return -526829;
			case 1577:
				return -1754422016;
			case 1578:
				return 688413808;
			case 1579:
				return 794749213;
			case 1580:
				return 17042536;
			case 1581:
				return 298954243;
			case 1582:
				return 1003223945;
			case 1583:
				return 220012076;
			case 1584:
				return 1465430690;
			case 1585:
				return 716331350;
			case 1586:
				return 1734859244;
			case 1587:
				return -750963311;
			case 1588:
				return -886310806;
			case 1589:
				return 1926336063;
			case 1590:
				return -800534102;
			case 1591:
				return 1648013752;
			case 1592:
				return -753535900;
			case 1593:
				return -693870347;
			case 1594:
				return -877653131;
			case 1595:
				return 1335714585;
			case 1596:
				return -1382351182;
			case 1597:
				return -688890765;
			case 1598:
				return -313992757;
			case 1599:
				return 643415268;
			case 1600:
				return -383442850;
			case 1601:
				return -963708270;
			case 1602:
				return 1789847914;
			case 1603:
				return 1724935027;
			case 1604:
				return 170282000;
			case 1605:
				return -1323936218;
			case 1606:
				return -1378006849;
			case 1607:
				return 1527202601;
			case 1608:
				return 562620119;
			case 1609:
				return -1622723192;
			case 1610:
				return -872587325;
			case 1611:
				return 2076873943;
			case 1612:
				return -1176057358;
			case 1613:
				return 1253360932;
			case 1614:
				return -1656346086;
			case 1615:
				return -597695075;
			case 1616:
				return -1159690567;
			case 1617:
				return 719400048;
			case 1618:
				return 1737389826;
			case 1619:
				return -1033632314;
			case 1620:
				return 59954835;
			case 1621:
				return -98843293;
			case 1622:
				return 1928252407;
			case 1623:
				return -1562347907;
			case 1624:
				return 1529136698;
			case 1625:
				return -1842411116;
			case 1626:
				return 906570755;
			case 1627:
				return 1718863943;
			case 1628:
				return -605128543;
			case 1629:
				return -1395712024;
			case 1630:
				return -1232260252;
			case 1631:
				return -337712376;
			case 1632:
				return 2084338579;
			case 1633:
				return 1404611977;
			case 1634:
				return 1401474740;
			case 1635:
				return 516817794;
			case 1636:
				return -1466175146;
			case 1637:
				return -2093572127;
			case 1638:
				return -498256840;
			case 1639:
				return -1190435787;
			case 1640:
				return 291880860;
			case 1641:
				return 1996801454;
			case 1642:
				return -1023331176;
			case 1643:
				return -276524767;
			case 1644:
				return 1578454569;
			case 1645:
				return 2101399188;
			case 1646:
				return -1218507547;
			case 1647:
				return 483731764;
			case 1648:
				return 289521398;
			case 1649:
				return 1883534212;
			case 1650:
				return 209919309;
			case 1651:
				return -166639526;
			case 1652:
				return 1915768280;
			case 1653:
				return -105525329;
			case 1654:
				return 612040624;
			case 1655:
				return -1176903838;
			case 1656:
				return -1389718656;
			case 1657:
				return -958046355;
			case 1658:
				return 2107657444;
			case 1659:
				return -2023595928;
			case 1660:
				return -759698431;
			case 1661:
				return -406964748;
			case 1662:
				return 481636996;
			case 1663:
				return -1671953459;
			case 1664:
				return 910941329;
			case 1665:
				return 518127510;
			case 1666:
				return 758684739;
			case 1667:
				return -661825463;
			case 1668:
				return 1343484786;
			case 1669:
				return 1033721560;
			case 1670:
				return 1989074279;
			case 1671:
				return 349486662;
			case 1672:
				return 1603294144;
			case 1673:
				return -1754425204;
			case 1674:
				return -1036501021;
			case 1675:
				return 1871051363;
			case 1676:
				return -158824350;
			case 1677:
				return 945502524;
			case 1678:
				return -1436188587;
			case 1679:
				return -468702164;
			case 1680:
				return -687151759;
			case 1681:
				return 1882605165;
			case 1682:
				return 869642051;
			case 1683:
				return -184821200;
			case 1684:
				return -490818122;
			case 1685:
				return 1907352897;
			case 1686:
				return 1700234797;
			case 1687:
				return -708550718;
			case 1688:
				return -1377139506;
			case 1689:
				return 767293177;
			case 1690:
				return -1739900853;
			case 1691:
				return -646014955;
			case 1692:
				return 159921796;
			case 1693:
				return -2014929982;
			case 1694:
				return -1070054959;
			case 1695:
				return -558920293;
			case 1696:
				return -872749010;
			case 1697:
				return -1924933663;
			case 1698:
				return -54044677;
			case 1699:
				return 2116967107;
			case 1700:
				return 1721842998;
			case 1701:
				return 92080743;
			case 1702:
				return -1619008260;
			case 1703:
				return 964593693;
			case 1704:
				return -882188392;
			case 1705:
				return 773757120;
			case 1706:
				return -1618574684;
			case 1707:
				return 827269092;
			case 1708:
				return 1706509616;
			case 1709:
				return -90228526;
			case 1710:
				return -520163372;
			case 1711:
				return 1265596420;
			case 1712:
				return -1388202749;
			case 1713:
				return 54661488;
			case 1714:
				return 1079213989;
			case 1715:
				return -621187540;
			case 1716:
				return -638481378;
			case 1717:
				return 1833824812;
			case 1718:
				return 1865439665;
			case 1719:
				return 2036492390;
			case 1720:
				return -1062918766;
			case 1721:
				return -555683060;
			case 1722:
				return -415514741;
			case 1723:
				return 809554858;
			case 1724:
				return 1810083187;
			case 1725:
				return -412827149;
			case 1726:
				return 414622870;
			case 1727:
				return 923572416;
			case 1728:
				return 67198036;
			case 1729:
				return -1130111983;
			case 1730:
				return 557551306;
			case 1731:
				return 1674493966;
			case 1732:
				return -1115840558;
			case 1733:
				return -1910456812;
			case 1734:
				return -960337247;
			case 1735:
				return 1155877447;
			case 1736:
				return 928165666;
			case 1737:
				return 2048341166;
			case 1738:
				return -1015572514;
			case 1739:
				return -785304751;
			case 1740:
				return 1448230281;
			case 1741:
				return 1687083522;
			case 1742:
				return -2053999329;
			case 1743:
				return 2017155697;
			case 1744:
				return 1802911979;
			case 1745:
				return 1567139024;
			case 1746:
				return -1037436240;
			case 1747:
				return -1747868160;
			case 1748:
				return 1588507579;
			case 1749:
				return 1396808929;
			case 1750:
				return -1392451243;
			case 1751:
				return 2061467757;
			case 1752:
				return -1828030290;
			case 1753:
				return -2147051362;
			case 1754:
				return -997495998;
			case 1755:
				return 266022415;
			case 1756:
				return -414377604;
			case 1757:
				return -109593135;
			case 1758:
				return 990134505;
			case 1759:
				return 1279910772;
			case 1760:
				return 1677041346;
			case 1761:
				return 1936473519;
			case 1762:
				return 1956790299;
			case 1763:
				return -2029001482;
			case 1764:
				return -538645000;
			case 1765:
				return -789852154;
			case 1766:
				return -1003800955;
			case 1767:
				return -1250617063;
			case 1768:
				return 495480888;
			case 1769:
				return 884576413;
			case 1770:
				return 778703691;
			case 1771:
				return 514406510;
			case 1772:
				return -421730990;
			case 1773:
				return -134624703;
			case 1774:
				return 2004706822;
			case 1775:
				return -910918420;
			case 1776:
				return -327708229;
			case 1777:
				return 1048845581;
			case 1778:
				return -1535722316;
			case 1779:
				return 1547994518;
			case 1780:
				return -1276109918;
			case 1781:
				return -1386423483;
			case 1782:
				return -1331593143;
			case 1783:
				return -1405375965;
			case 1784:
				return 1881774051;
			case 1785:
				return 912202325;
			case 1786:
				return -536919806;
			case 1787:
				return 295117400;
			case 1788:
				return -1774606389;
			case 1789:
				return 1211453192;
			case 1790:
				return 999671710;
			case 1791:
				return -1051551519;
			case 1792:
				return -781631997;
			case 1793:
				return -1765524972;
			case 1794:
				return -274311999;
			case 1795:
				return 1364667248;
			case 1796:
				return -680105331;
			case 1797:
				return -507080758;
			case 1798:
				return -252982535;
			case 1799:
				return 908136834;
			case 1800:
				return 1657354548;
			case 1801:
				return -2001856298;
			case 1802:
				return 1108419054;
			case 1803:
				return 1665904081;
			case 1804:
				return 1508981319;
			case 1805:
				return -1279448947;
			case 1806:
				return -2143372379;
			case 1807:
				return -847027479;
			case 1808:
				return -946682429;
			case 1809:
				return -333204108;
			case 1810:
				return 67603480;
			case 1811:
				return 1424952082;
			case 1812:
				return 1991561012;
			case 1813:
				return -1353663029;
			case 1814:
				return 11141848;
			case 1815:
				return 1153240916;
			case 1816:
				return 405359977;
			case 1817:
				return -1754697240;
			case 1818:
				return 743168245;
			case 1819:
				return 1098358070;
			case 1820:
				return -1871896679;
			case 1821:
				return -590242693;
			case 1822:
				return 953570968;
			case 1823:
				return 353008762;
			case 1824:
				return -973153750;
			case 1825:
				return -394475958;
			case 1826:
				return 1277031798;
			case 1827:
				return -736226816;
			case 1828:
				return 1497923922;
			case 1829:
				return 87946549;
			case 1830:
				return 104172940;
			case 1831:
				return -2054468361;
			case 1832:
				return 616635225;
			case 1833:
				return 503099916;
			case 1834:
				return -25254585;
			case 1835:
				return -1058872649;
			case 1836:
				return -1916642580;
			case 1837:
				return -1818498296;
			case 1838:
				return -983957271;
			case 1839:
				return -697261290;
			case 1840:
				return 272864959;
			case 1841:
				return -1399009137;
			case 1842:
				return -901084182;
			case 1843:
				return -655349451;
			case 1844:
				return 1175400068;
			case 1845:
				return 854689865;
			case 1846:
				return 1772877245;
			case 1847:
				return -891504611;
			case 1848:
				return -810270260;
			case 1849:
				return 83602522;
			case 1850:
				return -2054476413;
			case 1851:
				return 1988923494;
			case 1852:
				return -1676256391;
			case 1853:
				return 901975752;
			case 1854:
				return 2119466214;
			case 1855:
				return 1812453453;
			case 1856:
				return 1393010249;
			case 1857:
				return -1799943886;
			case 1858:
				return 45121961;
			case 1859:
				return 1949854427;
			case 1860:
				return 580700069;
			case 1861:
				return 1347068672;
			case 1862:
				return 943998860;
			case 1863:
				return -2131576785;
			case 1864:
				return -2137016051;
			case 1865:
				return 1193151399;
			case 1866:
				return -1353871107;
			case 1867:
				return 2026630914;
			case 1868:
				return -225844616;
			case 1869:
				return 1056170594;
			case 1870:
				return -873881483;
			case 1871:
				return 881979872;
			case 1872:
				return 1157695860;
			case 1873:
				return 1859948183;
			case 1874:
				return -1688366042;
			case 1875:
				return -929277449;
			case 1876:
				return -723094901;
			case 1877:
				return -801609437;
			case 1878:
				return -278745837;
			case 1879:
				return -41173958;
			case 1880:
				return 1160690623;
			case 1881:
				return -660075384;
			case 1882:
				return 1547403545;
			case 1883:
				return -775951892;
			case 1884:
				return 808576710;
			case 1885:
				return 149553684;
			case 1886:
				return 137316925;
			case 1887:
				return 1431947993;
			case 1888:
				return 1017355491;
			case 1889:
				return -920505696;
			case 1890:
				return -596723840;
			case 1891:
				return -1762770596;
			case 1892:
				return -1026473536;
			case 1893:
				return -516683274;
			case 1894:
				return -1004522372;
			case 1895:
				return 281772765;
			case 1896:
				return -2084311522;
			case 1897:
				return -1667265438;
			case 1898:
				return 175578406;
			case 1899:
				return 1137646647;
			case 1900:
				return -898081380;
			case 1901:
				return -468635897;
			case 1902:
				return -771786794;
			case 1903:
				return -626641013;
			case 1904:
				return 1088045886;
			case 1905:
				return -1678761663;
			case 1906:
				return 535384482;
			case 1907:
				return 1724413302;
			case 1908:
				return -1267247536;
			case 1909:
				return 489834626;
			case 1910:
				return -1360840312;
			case 1911:
				return 1628286919;
			case 1912:
				return -704461521;
			case 1913:
				return 481139295;
			case 1914:
				return -274080837;
			case 1915:
				return 1082980257;
			case 1916:
				return -1725465949;
			case 1917:
				return 1821956151;
			case 1918:
				return -1993960878;
			case 1919:
				return 204868257;
			case 1920:
				return 432272547;
			case 1921:
				return 1895127686;
			case 1922:
				return 1461266126;
			case 1923:
				return -1473336090;
			case 1924:
				return -1490034522;
			case 1925:
				return -205116461;
			case 1926:
				return -1013403664;
			case 1927:
				return -670748311;
			case 1928:
				return -2124415277;
			case 1929:
				return -473077489;
			case 1930:
				return 619024057;
			case 1931:
				return -836433697;
			case 1932:
				return -494733971;
			case 1933:
				return 490883533;
			case 1934:
				return 752665876;
			case 1935:
				return 1136457806;
			case 1936:
				return -342806042;
			case 1937:
				return 1255880931;
			case 1938:
				return 1676972066;
			case 1939:
				return -643411908;
			case 1940:
				return -1901860833;
			case 1941:
				return -1225383143;
			case 1942:
				return 206289712;
			case 1943:
				return 1405627586;
			case 1944:
				return -1889108254;
			case 1945:
				return -1583923165;
			case 1946:
				return 1726243396;
			case 1947:
				return 96746001;
			case 1948:
				return 1871261290;
			case 1949:
				return 1767170589;
			case 1950:
				return 396094389;
			case 1951:
				return 68538405;
			case 1952:
				return -540286923;
			case 1953:
				return 695709062;
			case 1954:
				return 1395510290;
			case 1955:
				return -1366130296;
			case 1956:
				return 1205820933;
			case 1957:
				return 195206081;
			case 1958:
				return 1355914142;
			case 1959:
				return 165972019;
			case 1960:
				return -1036688493;
			case 1961:
				return -30157790;
			case 1962:
				return 1509141447;
			case 1963:
				return -469909433;
			case 1964:
				return -1461530058;
			case 1965:
				return 1826022799;
			case 1966:
				return -1859413313;
			case 1967:
				return 942470447;
			case 1968:
				return -1170563128;
			case 1969:
				return 1394163483;
			case 1970:
				return -483649675;
			case 1971:
				return -782601262;
			case 1972:
				return 212587871;
			case 1973:
				return -436566493;
			case 1974:
				return -677790400;
			case 1975:
				return 143811737;
			case 1976:
				return 1679182807;
			case 1977:
				return -1512794226;
			case 1978:
				return 146172383;
			case 1979:
				return 876228895;
			case 1980:
				return 1417687142;
			case 1981:
				return -2035101386;
			case 1982:
				return 1520435387;
			case 1983:
				return 1078633574;
			case 1984:
				return 1305074360;
			case 1985:
				return 1048677741;
			case 1986:
				return 1284188544;
			case 1987:
				return -1986089134;
			case 1988:
				return 913995529;
			case 1989:
				return -730093764;
			case 1990:
				return -359734366;
			case 1991:
				return 175173994;
			case 1992:
				return -686953321;
			case 1993:
				return 54029413;
			case 1994:
				return -739754595;
			case 1995:
				return -931280709;
			case 1996:
				return -1737485501;
			case 1997:
				return -1070234238;
			case 1998:
				return 191078900;
			case 1999:
				return -2096572276;
			default:
				break;
		}
		if (iParam1 >= 1)
		{
		}
		return StackVal;
	}
	if (iParam0 <= 2777)
	{
		switch (iParam0)
		{
			case 2000:
				return 2015532863;
			case 2001:
				return -800942395;
			case 2002:
				return -741366935;
			case 2003:
				return -1593790123;
			case 2004:
				return -595698218;
			case 2005:
				return -1269989522;
			case 2006:
				return -1995815064;
			case 2007:
				return -614421509;
			case 2008:
				return 604920544;
			case 2009:
				return 1382135686;
			case 2010:
				return -1968130469;
			case 2011:
				return -276259505;
			case 2012:
				return -1716205818;
			case 2013:
				return 728046625;
			case 2014:
				return 350100475;
			case 2015:
				return 2033090463;
			case 2016:
				return 826576088;
			case 2017:
				return 1713084298;
			case 2018:
				return 928528900;
			case 2019:
				return 391022529;
			case 2020:
				return 1870870569;
			case 2021:
				return -2118853492;
			case 2022:
				return -597126658;
			case 2023:
				return 158063004;
			case 2024:
				return 1290812287;
			case 2025:
				return -1537525865;
			case 2026:
				return 2079207010;
			case 2027:
				return 1736386364;
			case 2028:
				return -2071756699;
			case 2029:
				return -1781758360;
			case 2030:
				return 1184975829;
			case 2031:
				return 1173232190;
			case 2032:
				return 105236016;
			case 2033:
				return -1081428331;
			case 2034:
				return -527717905;
			case 2035:
				return 1969270586;
			case 2036:
				return -1113878850;
			case 2037:
				return 1186551862;
			case 2038:
				return -1112692383;
			case 2039:
				return 526763180;
			case 2040:
				return 1802967124;
			case 2041:
				return -598586662;
			case 2042:
				return -1838419604;
			case 2043:
				return -626724117;
			case 2044:
				return -1912028958;
			case 2045:
				return 563944718;
			case 2046:
				return -1532653291;
			case 2047:
				return 739567292;
			case 2048:
				return 729601893;
			case 2049:
				return 1128276345;
			case 2050:
				return 1873580721;
			case 2051:
				return 1706906210;
			case 2052:
				return 2094371528;
			case 2053:
				return 1688216398;
			case 2054:
				return -1745210725;
			case 2055:
				return -1096712211;
			case 2056:
				return -1941005496;
			case 2057:
				return 1898267848;
			case 2058:
				return 974280355;
			case 2059:
				return 1756181464;
			case 2060:
				return -816857367;
			case 2061:
				return -72482077;
			case 2062:
				return -1122265410;
			case 2063:
				return -935952905;
			case 2064:
				return 1309948033;
			case 2065:
				return 1941336822;
			case 2066:
				return 712371053;
			case 2067:
				return 1710282603;
			case 2068:
				return -1802096589;
			case 2069:
				return 574303518;
			case 2070:
				return -752772715;
			case 2071:
				return 503623514;
			case 2072:
				return -407026996;
			case 2073:
				return 669655585;
			case 2074:
				return -58196573;
			case 2075:
				return -895099271;
			case 2076:
				return -2060408070;
			case 2077:
				return 364962188;
			case 2078:
				return 556610581;
			case 2079:
				return -1394479903;
			case 2080:
				return -786679704;
			case 2081:
				return -1029093195;
			case 2082:
				return -1325390493;
			case 2083:
				return -1622834706;
			case 2084:
				return -1443390498;
			case 2085:
				return 689576469;
			case 2086:
				return -1750010031;
			case 2087:
				return 257582350;
			case 2088:
				return -39730787;
			case 2089:
				return -1438901569;
			case 2090:
				return -1725439174;
			case 2091:
				return 1857654366;
			case 2092:
				return 2095655613;
			case 2093:
				return -772691681;
			case 2094:
				return -2110850686;
			case 2095:
				return -1142062162;
			case 2096:
				return 32078073;
			case 2097:
				return 1011350990;
			case 2098:
				return 1007204499;
			case 2099:
				return 705321299;
			case 2100:
				return 1049317994;
			case 2101:
				return -820561187;
			case 2102:
				return -280121448;
			case 2103:
				return -1268841107;
			case 2104:
				return -279038963;
			case 2105:
				return 2087785010;
			case 2106:
				return 161441935;
			case 2107:
				return -596115807;
			case 2108:
				return 112916013;
			case 2109:
				return -1603458673;
			case 2110:
				return 34346755;
			case 2111:
				return 482102371;
			case 2112:
				return -502343927;
			case 2113:
				return 1065585604;
			case 2114:
				return -175048740;
			case 2115:
				return -482127039;
			case 2116:
				return 1557698400;
			case 2117:
				return -1484676996;
			case 2118:
				return -1297130328;
			case 2119:
				return 1757890773;
			case 2120:
				return 1499445407;
			case 2121:
				return 472339111;
			case 2122:
				return -262371610;
			case 2123:
				return 1123990218;
			case 2124:
				return 1303507358;
			case 2125:
				return 1596889034;
			case 2126:
				return -519371139;
			case 2127:
				return 120604643;
			case 2128:
				return -1819679999;
			case 2129:
				return 1117275649;
			case 2130:
				return -2134390671;
			case 2131:
				return 1628921491;
			case 2132:
				return -1815797865;
			case 2133:
				return 1673216541;
			case 2134:
				return 331698185;
			case 2135:
				return 1803637785;
			case 2136:
				return 1812712970;
			case 2137:
				return 787163418;
			case 2138:
				return 474786474;
			case 2139:
				return -1604164737;
			case 2140:
				return 492662035;
			case 2141:
				return -1991086481;
			case 2142:
				return -1623539657;
			case 2143:
				return -1939338394;
			case 2144:
				return -860360254;
			case 2145:
				return -409479737;
			case 2146:
				return 30280292;
			case 2147:
				return -1211924901;
			case 2148:
				return 673909600;
			case 2149:
				return 2088585697;
			case 2150:
				return -14824697;
			case 2151:
				return 1908207721;
			case 2152:
				return -46828581;
			case 2153:
				return -1858229297;
			case 2154:
				return -216811017;
			case 2155:
				return -1431123016;
			case 2156:
				return -1448418975;
			case 2157:
				return -1645569664;
			case 2158:
				return -2122265662;
			case 2159:
				return -510114122;
			case 2160:
				return 696753474;
			case 2161:
				return 584821987;
			case 2162:
				return 54505570;
			case 2163:
				return -894288155;
			case 2164:
				return -1293181572;
			case 2165:
				return 1093030199;
			case 2166:
				return -1423344014;
			case 2167:
				return 1437809535;
			case 2168:
				return -1862782800;
			case 2169:
				return 1748373207;
			case 2170:
				return -1040386459;
			case 2171:
				return -113711908;
			case 2172:
				return -510950795;
			case 2173:
				return 1920766934;
			case 2174:
				return -749007702;
			case 2175:
				return 41732045;
			case 2176:
				return -1461922204;
			case 2177:
				return -1519499946;
			case 2178:
				return -535498894;
			case 2179:
				return 2116024182;
			case 2180:
				return 25328693;
			case 2181:
				return 1934461192;
			case 2182:
				return -1434912930;
			case 2183:
				return 491871729;
			case 2184:
				return -1078418763;
			case 2185:
				return -415281478;
			case 2186:
				return -722949619;
			case 2187:
				return 202086482;
			case 2188:
				return -87394864;
			case 2189:
				return 1473078398;
			case 2190:
				return -604091710;
			case 2191:
				return 375693548;
			case 2192:
				return -400238535;
			case 2193:
				return 832608336;
			case 2194:
				return 551513105;
			case 2195:
				return 642296010;
			case 2196:
				return 1416512144;
			case 2197:
				return -866774384;
			case 2198:
				return -687283562;
			case 2199:
				return 67497998;
			case 2200:
				return -991895362;
			case 2201:
				return -846479900;
			case 2202:
				return -693659956;
			case 2203:
				return -1578471167;
			case 2204:
				return 1113860407;
			case 2205:
				return -1351899990;
			case 2206:
				return 824748066;
			case 2207:
				return 240772357;
			case 2208:
				return -389681572;
			case 2209:
				return -1226896753;
			case 2210:
				return -1221107646;
			case 2211:
				return -1391542137;
			case 2212:
				return -562632536;
			case 2213:
				return -1013459033;
			case 2214:
				return -1406359343;
			case 2215:
				return -407068688;
			case 2216:
				return 1946521576;
			case 2217:
				return 1743765516;
			case 2218:
				return 1936501508;
			case 2219:
				return 27526098;
			case 2220:
				return -1295818914;
			case 2221:
				return -1056172583;
			case 2222:
				return 189901415;
			case 2223:
				return -575680736;
			case 2224:
				return 1715626179;
			case 2225:
				return 343391535;
			case 2226:
				return -1503000236;
			case 2227:
				return 1028580175;
			case 2228:
				return -117847307;
			case 2229:
				return 1181416174;
			case 2230:
				return 861187315;
			case 2231:
				return 554305630;
			case 2232:
				return 1423626752;
			case 2233:
				return -1923863493;
			case 2234:
				return -250669847;
			case 2235:
				return 970334657;
			case 2236:
				return 82281660;
			case 2237:
				return 1204906867;
			case 2238:
				return -1887958444;
			case 2239:
				return -783284068;
			case 2240:
				return 1700073271;
			case 2241:
				return 371690004;
			case 2242:
				return 1636184722;
			case 2243:
				return -1948374304;
			case 2244:
				return 2113806544;
			case 2245:
				return -1347357987;
			case 2246:
				return -91625813;
			case 2247:
				return 308410851;
			case 2248:
				return -100099838;
			case 2249:
				return -957276853;
			case 2250:
				return -1107759495;
			case 2251:
				return 1883360429;
			case 2252:
				return -1090537556;
			case 2253:
				return 1592112741;
			case 2254:
				return 1863648219;
			case 2255:
				return 50557240;
			case 2256:
				return 266825280;
			case 2257:
				return 94033046;
			case 2258:
				return -583928751;
			case 2259:
				return 1568543846;
			case 2260:
				return -210665175;
			case 2261:
				return -1196624012;
			case 2262:
				return 206749196;
			case 2263:
				return -1293161516;
			case 2264:
				return 1183263476;
			case 2265:
				return 401370450;
			case 2266:
				return 573140494;
			case 2267:
				return 2120179691;
			case 2268:
				return 962310476;
			case 2269:
				return 1956732224;
			case 2270:
				return 465137550;
			case 2271:
				return -1199165509;
			case 2272:
				return 409129751;
			case 2273:
				return -1630731514;
			case 2274:
				return -2031294856;
			case 2275:
				return 1363336888;
			case 2276:
				return -2095306558;
			case 2277:
				return 1687755487;
			case 2278:
				return 14065784;
			case 2279:
				return 516810429;
			case 2280:
				return 1226096098;
			case 2281:
				return -924548651;
			case 2282:
				return 1418611013;
			case 2283:
				return -1019371157;
			case 2284:
				return 2068484211;
			case 2285:
				return 1640603023;
			case 2286:
				return -515279524;
			case 2287:
				return 901738482;
			case 2288:
				return -1001336405;
			case 2289:
				return 1708614117;
			case 2290:
				return -2144326250;
			case 2291:
				return -605257184;
			case 2292:
				return 373802338;
			case 2293:
				return 620580306;
			case 2294:
				return -1962566219;
			case 2295:
				return 513934897;
			case 2296:
				return 483532006;
			case 2297:
				return 738652812;
			case 2298:
				return -509143136;
			case 2299:
				return 974243296;
			case 2300:
				return 95187046;
			case 2301:
				return 869083804;
			case 2302:
				return 1803556695;
			case 2303:
				return 90710077;
			case 2304:
				return -136805090;
			case 2305:
				return 1570947227;
			case 2306:
				return -214604861;
			case 2307:
				return 886997475;
			case 2308:
				return -428652579;
			case 2309:
				return 154479184;
			case 2310:
				return 1187864964;
			case 2311:
				return 1199685211;
			case 2312:
				return -1546507097;
			case 2313:
				return -1082524312;
			case 2314:
				return 925683259;
			case 2315:
				return 1817836578;
			case 2316:
				return -226455701;
			case 2317:
				return 495423143;
			case 2318:
				return 1225215575;
			case 2319:
				return -1666038504;
			case 2320:
				return 2111987179;
			case 2321:
				return -1407497494;
			case 2322:
				return -1161238459;
			case 2323:
				return -1583237641;
			case 2324:
				return 665690112;
			case 2325:
				return 1143189384;
			case 2326:
				return -833697651;
			case 2327:
				return 1480174383;
			case 2328:
				return 59120723;
			case 2329:
				return -1975145165;
			case 2330:
				return 1296658155;
			case 2331:
				return 1809507039;
			case 2332:
				return 1123782857;
			case 2333:
				return -1656839837;
			case 2334:
				return 734740942;
			case 2335:
				return 2107567819;
			case 2336:
				return -1202265833;
			case 2337:
				return -657697631;
			case 2338:
				return 1357101289;
			case 2339:
				return 1139876579;
			case 2340:
				return 412645416;
			case 2341:
				return 2037986663;
			case 2342:
				return -1852256117;
			case 2343:
				return 1773228786;
			case 2344:
				return -1744971427;
			case 2345:
				return 793572138;
			case 2346:
				return 266896652;
			case 2347:
				return -1947843638;
			case 2348:
				return -1562607865;
			case 2349:
				return 1108015391;
			case 2350:
				return 782876548;
			case 2351:
				return -1798979372;
			case 2352:
				return 1171027246;
			case 2353:
				return 1105828637;
			case 2354:
				return -1363817710;
			case 2355:
				return 859179462;
			case 2356:
				return -421457898;
			case 2357:
				return -928367655;
			case 2358:
				return 890107948;
			case 2359:
				return 1153046408;
			case 2360:
				return 1634621556;
			case 2361:
				return -243627670;
			case 2362:
				return 38567760;
			case 2363:
				return -1954278106;
			case 2364:
				return -947200121;
			case 2365:
				return 629362551;
			case 2366:
				return -786579336;
			case 2367:
				return -1305545118;
			case 2368:
				return -149223920;
			case 2369:
				return 1479152994;
			case 2370:
				return -910752885;
			case 2371:
				return 2129660496;
			case 2372:
				return -2076388321;
			case 2373:
				return 1049886174;
			case 2374:
				return 1208592031;
			case 2375:
				return 1947806010;
			case 2376:
				return 1644962309;
			case 2377:
				return -825836321;
			case 2378:
				return 446554495;
			case 2379:
				return -262959893;
			case 2380:
				return -735136865;
			case 2381:
				return -868830916;
			case 2382:
				return 764025611;
			case 2383:
				return 1802934313;
			case 2384:
				return 607468222;
			case 2385:
				return 2108112010;
			case 2386:
				return 1208537422;
			case 2387:
				return 361734047;
			case 2388:
				return -1552951782;
			case 2389:
				return 1391886974;
			case 2390:
				return -1142569437;
			case 2391:
				return 474113610;
			case 2392:
				return 1298607560;
			case 2393:
				return -297340751;
			case 2394:
				return -1079295176;
			case 2395:
				return 1861460906;
			case 2396:
				return 1044079550;
			case 2397:
				return 894787561;
			case 2398:
				return -689352221;
			case 2399:
				return -391187090;
			case 2400:
				return 1963724330;
			case 2401:
				return 1722569012;
			case 2402:
				return -451832572;
			case 2403:
				return 325677491;
			case 2404:
				return -1349539327;
			case 2405:
				return -1640200357;
			case 2406:
				return -2127665186;
			case 2407:
				return 1854980771;
			case 2408:
				return 1513363974;
			case 2409:
				return 1886602884;
			case 2410:
				return -1902184438;
			case 2411:
				return 1236921921;
			case 2412:
				return 740012805;
			case 2413:
				return -1280884206;
			case 2414:
				return 1823159188;
			case 2415:
				return -758463889;
			case 2416:
				return -1116430120;
			case 2417:
				return 1601053042;
			case 2418:
				return 1623114783;
			case 2419:
				return -703127827;
			case 2420:
				return -1933338814;
			case 2421:
				return 952753807;
			case 2422:
				return -64729392;
			case 2423:
				return 753181111;
			case 2424:
				return 1475089455;
			case 2425:
				return 637861796;
			case 2426:
				return 913170302;
			case 2427:
				return 702867922;
			case 2428:
				return 187740801;
			case 2429:
				return -523896426;
			case 2430:
				return 483041556;
			case 2431:
				return -797033116;
			case 2432:
				return -455342387;
			case 2433:
				return -1407773372;
			case 2434:
				return 2020752077;
			case 2435:
				return 593772301;
			case 2436:
				return 207032563;
			case 2437:
				return -1984361543;
			case 2438:
				return -869788001;
			case 2439:
				return -691393565;
			case 2440:
				return -1448947307;
			case 2441:
				return -1171033418;
			case 2442:
				return -487373767;
			case 2443:
				return 341106871;
			case 2444:
				return -835267464;
			case 2445:
				return 992700940;
			case 2446:
				return -1324099905;
			case 2447:
				return 1589293578;
			case 2448:
				return 1435082664;
			case 2449:
				return -2091615427;
			case 2450:
				return 227706189;
			case 2451:
				return 1587857798;
			case 2452:
				return -454287921;
			case 2453:
				return 1735860959;
			case 2454:
				return -109606367;
			case 2455:
				return -1997605640;
			case 2456:
				return 2066602358;
			case 2457:
				return -1374896333;
			case 2458:
				return 441668603;
			case 2459:
				return -165202905;
			case 2460:
				return -1377975054;
			case 2461:
				return 897624424;
			case 2462:
				return -1327148782;
			case 2463:
				return -1965378386;
			case 2464:
				return -960397707;
			case 2465:
				return 1424082059;
			case 2466:
				return -1939038021;
			case 2467:
				return -1613805696;
			case 2468:
				return 801042892;
			case 2469:
				return 25498969;
			case 2470:
				return 1419819915;
			case 2471:
				return 621272158;
			case 2472:
				return 422167750;
			case 2473:
				return 183712523;
			case 2474:
				return -1699673416;
			case 2475:
				return 1234767744;
			case 2476:
				return 1383396669;
			case 2477:
				return 1070583795;
			case 2478:
				return 692757225;
			case 2479:
				return -250563966;
			case 2480:
				return -1336911409;
			case 2481:
				return -1029570958;
			case 2482:
				return 56660208;
			case 2483:
				return -322991750;
			case 2484:
				return -610769108;
			case 2485:
				return -933576527;
			case 2486:
				return -1254057347;
			case 2487:
				return 686788855;
			case 2488:
				return -1228362565;
			case 2489:
				return -1793687930;
			case 2490:
				return 2081184892;
			case 2491:
				return -59515547;
			case 2492:
				return -785152283;
			case 2493:
				return -553835912;
			case 2494:
				return 1417440092;
			case 2495:
				return 649433039;
			case 2496:
				return 231100670;
			case 2497:
				return -2073602286;
			case 2498:
				return -1923847956;
			case 2499:
				return 1743953449;
			case 2500:
				return 1924707253;
			case 2501:
				return -209782407;
			case 2502:
				return -1068985587;
			case 2503:
				return 1984181016;
			case 2504:
				return 511673431;
			case 2505:
				return 254481872;
			case 2506:
				return 2096114765;
			case 2507:
				return 924267974;
			case 2508:
				return -1633151965;
			case 2509:
				return 916581544;
			case 2510:
				return 1210814395;
			case 2511:
				return -1735839627;
			case 2512:
				return -1430793006;
			case 2513:
				return -1616778617;
			case 2514:
				return -1852748182;
			case 2515:
				return -381473693;
			case 2516:
				return 1755785548;
			case 2517:
				return 1834537343;
			case 2518:
				return 505174455;
			case 2519:
				return -1645988897;
			case 2520:
				return 1679934574;
			case 2521:
				return 2077558044;
			case 2522:
				return 205032683;
			case 2523:
				return 908140270;
			case 2524:
				return -2036638644;
			case 2525:
				return -1790706759;
			case 2526:
				return 386105150;
			case 2527:
				return 411599432;
			case 2528:
				return 709895639;
			case 2529:
				return 1008617843;
			case 2530:
				return -269787403;
			case 2531:
				return -483215130;
			case 2532:
				return -1373409788;
			case 2533:
				return -1503851195;
			case 2534:
				return -1342300025;
			case 2535:
				return 2029007468;
			case 2536:
				return -1800377876;
			case 2537:
				return -1424779606;
			case 2538:
				return -961163794;
			case 2539:
				return -1897865659;
			case 2540:
				return -1725697333;
			case 2541:
				return 435889881;
			case 2542:
				return 1980374609;
			case 2543:
				return 1481756818;
			case 2544:
				return 22956558;
			case 2545:
				return 2135160782;
			case 2546:
				return 1614850834;
			case 2547:
				return 948536844;
			case 2548:
				return -1344285417;
			case 2549:
				return 324369003;
			case 2550:
				return -415953049;
			case 2551:
				return -281275366;
			case 2552:
				return 602205442;
			case 2553:
				return 640880475;
			case 2554:
				return 752327294;
			case 2555:
				return 2086295351;
			case 2556:
				return -1403908542;
			case 2557:
				return -2116659774;
			case 2558:
				return -893624314;
			case 2559:
				return 985448695;
			case 2560:
				return -1325016116;
			case 2561:
				return 1532009326;
			case 2562:
				return 1970695826;
			case 2563:
				return -706937940;
			case 2564:
				return -71885140;
			case 2565:
				return -1792872817;
			case 2566:
				return -1402083909;
			case 2567:
				return 255093300;
			case 2568:
				return 1344772301;
			case 2569:
				return -382865315;
			case 2570:
				return 181690478;
			case 2571:
				return 774601424;
			case 2572:
				return 431365499;
			case 2573:
				return -2090209059;
			case 2574:
				return 1965249616;
			case 2575:
				return 276582710;
			case 2576:
				return 1977031606;
			case 2577:
				return -2021605623;
			case 2578:
				return 1191890045;
			case 2579:
				return 1929454697;
			case 2580:
				return 1649902358;
			case 2581:
				return 1864768904;
			case 2582:
				return 938290967;
			case 2583:
				return 1169279648;
			case 2584:
				return -1765152778;
			case 2585:
				return -2072231077;
			case 2586:
				return 19217583;
			case 2587:
				return -284612948;
			case 2588:
				return -1253110600;
			case 2589:
				return -846230557;
			case 2590:
				return -1614141377;
			case 2591:
				return -926795318;
			case 2592:
				return 2095421392;
			case 2593:
				return 82084523;
			case 2594:
				return 1815262278;
			case 2595:
				return 1511919645;
			case 2596:
				return 767505137;
			case 2597:
				return 588062093;
			case 2598:
				return 471934509;
			case 2599:
				return 995675696;
			case 2600:
				return 706423733;
			case 2601:
				return -125588314;
			case 2602:
				return -1340001373;
			case 2603:
				return -2116397290;
			case 2604:
				return -922917541;
			case 2605:
				return 1524580507;
			case 2606:
				return 204481342;
			case 2607:
				return 174727090;
			case 2608:
				return -1466172032;
			case 2609:
				return -981873755;
			case 2610:
				return 2013143748;
			case 2611:
				return 1289178060;
			case 2612:
				return -642132908;
			case 2613:
				return -848315456;
			case 2614:
				return 105426297;
			case 2615:
				return 1202346365;
			case 2616:
				return -2139410267;
			case 2617:
				return 1433203214;
			case 2618:
				return -1795618779;
			case 2619:
				return -1873685184;
			case 2620:
				return -697307430;
			case 2621:
				return 633503129;
			case 2622:
				return -1536198599;
			case 2623:
				return 1759143160;
			case 2624:
				return -677362237;
			case 2625:
				return -2082201137;
			case 2626:
				return 1470738186;
			case 2627:
				return 1641449717;
			case 2628:
				return -1632348233;
			case 2629:
				return -562289114;
			case 2630:
				return -947895270;
			case 2631:
				return 386231914;
			case 2632:
				return -329705198;
			case 2633:
				return 18956962;
			case 2634:
				return 1587477916;
			case 2635:
				return -1018713880;
			case 2636:
				return 980234126;
			case 2637:
				return -61896664;
			case 2638:
				return -1496619689;
			case 2639:
				return 1891284833;
			case 2640:
				return 1576931820;
			case 2641:
				return -1296418825;
			case 2642:
				return -1936937394;
			case 2643:
				return -648893593;
			case 2644:
				return -1225606266;
			case 2645:
				return -1874720370;
			case 2646:
				return 2035942164;
			case 2647:
				return 519091847;
			case 2648:
				return 1764814553;
			case 2649:
				return -376056363;
			case 2650:
				return 1534006738;
			case 2651:
				return 748826019;
			case 2652:
				return -1892843345;
			case 2653:
				return 146746575;
			case 2654:
				return -2144587490;
			case 2655:
				return -960136064;
			case 2656:
				return -1366431554;
			case 2657:
				return 1812999696;
			case 2658:
				return -502582154;
			case 2659:
				return 1270535492;
			case 2660:
				return 1412515639;
			case 2661:
				return 366542865;
			case 2662:
				return 241205019;
			case 2663:
				return 1786931635;
			case 2664:
				return 26815048;
			case 2665:
				return -1162161651;
			case 2666:
				return 1284656212;
			case 2667:
				return 557212279;
			case 2668:
				return -1229109520;
			case 2669:
				return -1108618313;
			case 2670:
				return -1508467572;
			case 2671:
				return -990258606;
			case 2672:
				return -1184151355;
			case 2673:
				return -946313953;
			case 2674:
				return -889100155;
			case 2675:
				return -1521525254;
			case 2676:
				return 2056145270;
			case 2677:
				return -1603329230;
			case 2678:
				return -787678727;
			case 2679:
				return -1220264217;
			case 2680:
				return -665583358;
			case 2681:
				return -282972514;
			case 2682:
				return -64632667;
			case 2683:
				return 314111435;
			case 2684:
				return 24859476;
			case 2685:
				return 340621560;
			case 2686:
				return 1266707689;
			case 2687:
				return 434145706;
			case 2688:
				return 654746614;
			case 2689:
				return 1965736001;
			case 2690:
				return 1650694835;
			case 2691:
				return -761186147;
			case 2692:
				return 1133172356;
			case 2693:
				return -559257162;
			case 2694:
				return 418666411;
			case 2695:
				return 651621232;
			case 2696:
				return 979670262;
			case 2697:
				return 1277540472;
			case 2698:
				return -1452136643;
			case 2699:
				return -744260705;
			case 2700:
				return 1424293412;
			case 2701:
				return 1060557512;
			case 2702:
				return -362403544;
			case 2703:
				return -592147003;
			case 2704:
				return 352816221;
			case 2705:
				return 1128622296;
			case 2706:
				return 979982112;
			case 2707:
				return 1756640181;
			case 2708:
				return 1557076971;
			case 2709:
				return 1913538153;
			case 2710:
				return 2113454609;
			case 2711:
				return -1865650458;
			case 2712:
				return -1015786727;
			case 2713:
				return 908775155;
			case 2714:
				return 1310510260;
			case 2715:
				return -1455316832;
			case 2716:
				return -1653579880;
			case 2717:
				return -1640722758;
			case 2718:
				return -1349658419;
			case 2719:
				return -1597293752;
			case 2720:
				return -201465428;
			case 2721:
				return -382219232;
			case 2722:
				return -129668545;
			case 2723:
				return 1751470296;
			case 2724:
				return -2072507852;
			case 2725:
				return 1214168412;
			case 2726:
				return -1888820785;
			case 2727:
				return 1630537050;
			case 2728:
				return 1980575508;
			case 2729:
				return 1152076881;
			case 2730:
				return -679185919;
			case 2731:
				return -1439328412;
			case 2732:
				return -1155483334;
			case 2733:
				return -1916084593;
			case 2734:
				return -835606817;
			case 2735:
				return -1560636071;
			case 2736:
				return -904833761;
			case 2737:
				return 103750283;
			case 2738:
				return -1017701936;
			case 2739:
				return -743781837;
			case 2740:
				return 2114706334;
			case 2741:
				return -1670453688;
			case 2742:
				return -1991237877;
			case 2743:
				return -717025835;
			case 2744:
				return -2119625926;
			case 2745:
				return 867231253;
			case 2746:
				return 1248111234;
			case 2747:
				return 474287981;
			case 2748:
				return -1331012521;
			case 2749:
				return 2039534767;
			case 2750:
				return -1451954802;
			case 2751:
				return -1554566073;
			case 2752:
				return 510089692;
			case 2753:
				return -1208336782;
			case 2754:
				return joaat("prop_tree_02");
			case 2755:
				return joaat("prop_tree_log_01");
			case 2756:
				return -1377880324;
			case 2757:
				return -701897747;
			case 2758:
				return -1781252352;
			case 2759:
				return -1356658830;
			case 2760:
				return 1169154818;
			case 2761:
				return -102239629;
			case 2762:
				return 1507566204;
			case 2763:
				return -2122297972;
			case 2764:
				return -1360647871;
			case 2765:
				return 88716961;
			case 2766:
				return -2051158745;
			case 2767:
				return 488068970;
			case 2768:
				return 409306948;
			case 2769:
				return -1996105597;
			case 2770:
				return 1017072544;
			case 2771:
				return -1588780614;
			case 2772:
				return 1857501669;
			case 2773:
				return 2053819138;
			case 2774:
				return -763069375;
			case 2775:
				return -522714993;
			case 2776:
				return -1352620713;
			case 2777:
				return -492341871;
			default:
				break;
		}
		if (iParam1 >= 1)
		{
		}
		return StackVal;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

void func_208(int iParam0)
{
	if (STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		STREAMING::_REMOVE_IMAP(iParam0);
	}
}

int func_209(var uParam0)
{
	bool bVar0;
	vector3 vVar1[24];
	bool bVar4;
	int iVar5;
	struct<8> Var6;
	bool bVar14;
	var uVar15;
	var uVar16;
	int iVar24[100];
	int iVar125;
	int iVar126;
	int iVar127;
	struct<7> Var128;

	StringCopy(&cVar1, "loading_tips", 24);
	bVar0 = DATAFILE::_0x7907969497EA92F5(*uParam0);
	if (!bVar0)
	{
		*uParam0 = DATAFILE::_0xD97D8D905F1562F2(MISC::GET_HASH_KEY(&cVar1));
	}
	bVar4 = DATAFILE::_0x603AC35FD4602C76(*uParam0);
	if (!bVar4)
	{
		return 0;
	}
	func_301(uParam0);
	uParam0->f_79 = func_302(uParam0, 1);
	if (uParam0->f_79 <= 0)
	{
		return 0;
	}
	uVar15 = uParam0->f_1;
	iVar5 = 0;
	while (iVar5 < uParam0->f_79)
	{
		iVar24[iVar5] = iVar5;
		iVar5++;
	}
	iVar5 = 0;
	while (iVar5 <= (uParam0->f_79 - 1))
	{
		iVar125 = MISC::GET_RANDOM_INT_IN_RANGE(iVar5, (uParam0->f_79 - 1));
		iVar126 = &iVar24[iVar5];
		iVar24[iVar5] = &iVar24[iVar125];
		iVar24[iVar125] = iVar126;
		iVar5++;
	}
	iVar127 = 0;
	while (iVar127 < 10)
	{
		uParam0->f_1 = uVar15;
		uParam0->f_3 = &iVar24[iVar127];
		if (func_303(uParam0, 0))
		{
			if (func_304(uParam0, 2, &Var6))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var6))
				{
					MemCopy(&Var128, {Var6}, 4);
					if (func_305(uParam0, 4, &bVar14))
					{
						if (bVar14)
						{
							func_306(&Var128, 1);
						}
					}
					if (func_305(uParam0, 5, &bVar14))
					{
						if (bVar14)
						{
							func_306(&Var128, 2);
						}
					}
					func_307(uParam0, 3, &(Var128.f_5));
					if (func_304(uParam0, 6, &uVar16))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&uVar16))
						{
							Var128.f_6 = MISC::GET_HASH_KEY(&uVar16);
						}
					}
				}
			}
			if (Var128.f_6 == 0 || MISSIONDATA::_0x57E798B54C45EE1A(Var128.f_6) >= 2)
			{
				*(uParam0->f_5[iVar127 /*7*/]) = { Var128 };
				iVar127++;
			}
		}
	}
	DATAFILE::_DATAFILE_UNLOAD(*uParam0);
	return 1;
}

void func_210(var uParam0, int iParam1)
{
	uParam0->f_80 = iParam1;
}

void func_211(var uParam0, int iParam1)
{
	uParam0->f_76 = iParam1;
}

int func_212()
{
	if (MISC::IS_BIT_SET(Global_1956578->f_1, 4))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1956578->f_1, 5))
	{
		return 1;
	}
	if (func_48() == 0)
	{
		if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4))
		{
			if (func_308(255))
			{
				return 1;
			}
			if (!NETWORK::_0xDD73C9838CE7181D())
			{
				return 1;
			}
		}
	}
	if (func_309(0))
	{
		return 1;
	}
	if (Global_16)
	{
		return 1;
	}
	if (func_310())
	{
		return 1;
	}
	if (CAM::_0x81DCFD13CF39920E())
	{
		if (CAM::_0x975F6EBB62632FE3() || CAM::_0x1811A02277A9E49D())
		{
			return 1;
		}
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		if (HUD::_0x66F35DD9D2B58579())
		{
			return 1;
		}
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (GRAPHICS::GET_TV_CHANNEL() != -1)
	{
		if (HUD::_0x66F35DD9D2B58579())
		{
			return 1;
		}
	}
	if (CAM::_0x975F6EBB62632FE3() || CAM::_0x1811A02277A9E49D())
	{
		if (HUD::IS_RADAR_HIDDEN())
		{
			if (!CAM::_0x1204EB53A5FBC63D())
			{
				return 1;
			}
		}
	}
	if (func_48() == -1)
	{
		if (func_311(((*Global_1835011)[39 /*74*/])->f_1))
		{
			if (HUD::_0x66F35DD9D2B58579())
			{
				if (!CAM::_0x1204EB53A5FBC63D())
				{
					return 1;
				}
			}
		}
	}
	if (STREAMING::_0x99F92061EFE908BA() || func_312(&Global_1935630, 16384))
	{
		return 1;
	}
	if (func_312(&Global_1935630, 4096))
	{
		return 1;
	}
	if (func_312(&Global_1935630, 2048))
	{
		return 1;
	}
	if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADING_OUT())
	{
		return 1;
	}
	return 0;
}

int func_213()
{
	if (MISC::IS_BIT_SET(Global_1956578->f_1, 4))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1956578->f_1, 6))
	{
		return 1;
	}
	if (func_48() == -2)
	{
		return 1;
	}
	if (func_312(&Global_1935630, 4096))
	{
		return 1;
	}
	if (func_312(&Global_1935630, 2048))
	{
		return 1;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 1;
	}
	if (STREAMING::_0x99F92061EFE908BA() || func_312(&Global_1935630, 16384))
	{
		return 1;
	}
	if (Global_16 || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_GameIntro"))
	{
		return 1;
	}
	if (func_313())
	{
		if (HUD::IS_RADAR_HIDDEN())
		{
			return 1;
		}
	}
	if (!CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		if ((!CAM::_0x1204EB53A5FBC63D() && !CAM::IS_CINEMATIC_CAM_RENDERING()) && !func_313())
		{
			return 1;
		}
	}
	if (HUD::_0x66F35DD9D2B58579())
	{
		return 1;
	}
	if (func_48() == 0)
	{
		if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4))
		{
			if (func_314(255) > 2 && !func_315(Global_1225638->f_10, 8192))
			{
				return 1;
			}
			else if (func_316(32))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_214(var uParam0, bool bParam1)
{
	if (bParam1 || !func_215(uParam0))
	{
		func_317(uParam0);
	}
}

bool func_215(var uParam0)
{
	return func_318(*uParam0, 1);
}

float func_216(var uParam0)
{
	if (!func_215(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_319(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_320() - uParam0->f_1);
}

void func_217(int iParam0)
{
	if (iParam0 != Global_1956578->f_3)
	{
		COMPAPP::_0x74BCCEB233AD95B2(612972714, iParam0);
		Global_1956578->f_3 = iParam0;
	}
}

void func_218(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -725272239:
			func_321(iParam1);
			break;
		case 1121131740:
			func_322(iParam1);
			break;
		case 543140406:
			func_323(iParam1);
			break;
		case -2095977185:
			func_324(iParam1);
			break;
		case 809652668:
			func_325(iParam1);
			break;
		case 1860341470:
			func_326();
			break;
		case 516249386:
			func_327(iParam1);
			break;
		case 904577075:
			func_328(iParam1);
			break;
	}
}

void func_219()
{
	if (Global_1572887->f_164.f_62 != 0 && func_329())
	{
		func_330(1);
		return;
	}
	if (Global_1572887->f_164.f_83 > 2 && func_329())
	{
		func_330(1);
		return;
	}
	if (Global_1572887->f_164.f_63 != -1 && func_329())
	{
		func_330(1);
		return;
	}
	if (Global_1572887->f_164.f_84 != 0 && func_329())
	{
		func_330(1);
		return;
	}
	Global_1572887->f_164.f_84 = 0;
}

void func_220()
{
	struct<8> Var0;
	vector3 vVar19;

	Global_1572887->f_164.f_86 = MISC::GET_GAME_TIMER();
	Var0.f_2 = 4;
	Var0 = "";
	Var0.f_1 = "";
	Var0.f_2 = 0;
	if (func_331(128) || func_331(256))
	{
		Var0.f_3 = MISC::GET_HASH_KEY("IB_ACCEPT");
		Var0.f_3.f_1 = 0;
		Var0.f_3.f_2 = 0;
		Var0.f_3.f_3 = 0;
		Var0.f_7 = MISC::GET_HASH_KEY("IB_EXIT");
		Var0.f_7.f_1 = 0;
		Var0.f_7.f_2 = 0;
		Var0.f_7.f_3 = 0;
	}
	else
	{
		Var0.f_3 = MISC::GET_HASH_KEY("IB_EXIT");
		Var0.f_3.f_1 = 0;
		Var0.f_3.f_2 = 0;
		Var0.f_3.f_3 = 0;
	}
	vVar19.x = 0;
	vVar19.f_1 = "SG_HDNG";
	vVar19.f_2 = func_332();
	Global_1572887->f_164.f_82 = _NAMESPACE76::_0x9F2CC2439A04E7BA(&Var0, &vVar19, 1);
	func_330(2);
	func_333(0);
}

void func_221()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	int iVar9;

	if (func_48() == 0)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_1572887->f_14, false))
		{
			if (func_334() > 5)
			{
				if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				func_330(3);
				return;
			}
		}
	}
	if (_NAMESPACE76::_0xF8806EC3FF840FDC())
	{
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(0);
		}
	}
	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(-1933804684))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(-1933804684, &vVar5))
		{
			switch (vVar5.x)
			{
				case -1203660660:
					if (vVar5.y == Global_1572887->f_164.f_82)
					{
						if (vVar5.z == 2074623703)
						{
							UIEVENTS::_EVENT_MANAGER_POP_EVENT(-1933804684);
							bVar0 = true;
						}
						if (vVar5.z == 444632721)
						{
							UIEVENTS::_EVENT_MANAGER_POP_EVENT(-1933804684);
							bVar2 = true;
						}
						if (vVar5.z == 1400745903)
						{
							UIEVENTS::_EVENT_MANAGER_POP_EVENT(-1933804684);
							bVar1 = true;
						}
					}
					break;
				case -445432096:
					if (vVar5.y == Global_1572887->f_164.f_82)
					{
						Global_1572887->f_164.f_82 = 0;
						bVar3 = true;
						UIEVENTS::_EVENT_MANAGER_POP_EVENT(-1933804684);
					}
					break;
			}
		}
		UIEVENTS::_EVENT_MANAGER_POP_EVENT(-1933804684);
	}
	iVar9 = (MISC::GET_GAME_TIMER() - Global_1572887->f_164.f_86);
	bVar4 = (iVar9 > Global_1899378->f_2.f_14 && Global_1572887->f_164.f_86 != -1);
	if ((((bVar4 || bVar0) || bVar1) || bVar2) || bVar3)
	{
		func_330(3);
		if (func_331(128) || func_331(256))
		{
			if (bVar0)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				func_335(8);
			}
			else if ((bVar1 || bVar3) || bVar4)
			{
				func_335(16);
			}
		}
	}
}

void func_222()
{
	if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4))
	{
		if (func_336(255) && !(CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()))
		{
			CAM::DO_SCREEN_FADE_OUT(0);
		}
	}
	if (Global_1572887->f_164.f_82 != 0)
	{
		_NAMESPACE76::_0x00A15B94CBA4F76F(Global_1572887->f_164.f_82);
	}
	Global_1572887->f_164.f_82 = 0;
	Global_1572887->f_164.f_62 = 0;
	Global_1572887->f_164.f_84 = 0;
	Global_1572887->f_164.f_83 = 0;
	Global_1572887->f_164.f_63 = -1;
	Global_1572887->f_164.f_86 = -1;
	func_330(0);
}

var func_223(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = iParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

void func_224(int iParam0)
{
	Global_1572887->f_164.f_79 = iParam0;
}

void func_225()
{
	struct<7> Var0[2];

	*(Var0[0 /*7*/]) = { Global_1572887->f_164.f_11 };
	*(Var0[1 /*7*/]) = { Global_1572887->f_164.f_11.f_7 };
	Global_1572887->f_164.f_80 = NETWORK::_0xD66C9E72B3CC4982(&Var0, 2);
}

int func_226()
{
	struct<8> Var0[2];
	int iVar17;
	char* sVar18;
	char* sVar19;
	char* sVar20;

	iVar17 = NETWORK::_0x58CC181719256197(Global_1572887->f_164.f_80, &Var0, 2);
	if (iVar17 == -1)
	{
		return 2;
	}
	else if (iVar17 == 1)
	{
		return 0;
	}
	sVar18 = func_337(Var0[0 /*8*/], joaat("COLOR_PURE_WHITE"));
	sVar19 = func_337(Var0[1 /*8*/], joaat("COLOR_PURE_WHITE"));
	sVar20 = MISC::_CREATE_VAR_STRING(42, "NT_INV_EXTENDED", sVar19, sVar18);
	func_223("NET_SESSION_INV_HEADER", sVar20, joaat("blips"), 1183081869, -2, 0, 0, 1, 0, 1, 1);
	return 1;
}

void func_227()
{
	NETWORK::_0xA4484173759749B1();
	func_333(0);
	func_69(0);
	func_71();
}

void func_228()
{
	func_249();
	func_251(2);
	if (func_338(Global_1572887->f_164.f_27, 131072))
	{
		func_335(8);
		return;
	}
	if (func_339())
	{
		func_340(128);
		return;
	}
	func_335(8);
}

void func_229()
{
	struct<22> Var0;

	if (func_341())
	{
		func_251(17);
	}
	if (func_342(16))
	{
		func_251(17);
		return;
	}
	if (!func_342(8))
	{
		return;
	}
	func_343(8);
	func_344();
	if (func_48() == -1)
	{
		func_251(4);
		return;
	}
	switch (Global_1572887->f_164.f_1)
	{
		case 2:
			NETWORK::_0x3B82ACC3F4B6240C();
			break;
		case 3:
			NETWORK::_0x3B82ACC3F4B6240C();
			break;
		case 0:
			Var0 = { func_345() };
			NETWORK::_0xB2CEA5105AAC8DDE(NETWORK::_0x27B1AE4D8C652F08(Var0.f_15));
			break;
		case 1:
			if (NETWORK::_0xE483BB6BE686F632(&(Global_1572887->f_164.f_27)) == -1)
			{
				func_251(17);
				return;
			}
			break;
	}
	func_251(3);
}

void func_230()
{
	if (!func_346())
	{
		func_251(17);
		return;
	}
	func_347();
	func_251(6);
}

void func_231()
{
	struct<22> Var0;

	if (!func_348())
	{
		return;
	}
	if (func_349() == 2 || func_349() == 3)
	{
		NETWORK::_0x3B82ACC3F4B6240C();
	}
	else if (func_349() == 0 || func_349() == 1)
	{
		Var0 = { func_345() };
		NETWORK::_0xB2CEA5105AAC8DDE(NETWORK::_0x27B1AE4D8C652F08(Var0.f_15));
	}
	func_251(3);
}

void func_232()
{
	if (!func_346())
	{
		func_335(4);
		func_251(17);
		return;
	}
	switch (func_349())
	{
		case 0:
		case 2:
		case 4:
			break;
		case 1:
		case 3:
			break;
	}
	func_70();
	NETWORK::_0xC505036A35AFD01B(true);
	func_249();
	func_251(5);
}

void func_233()
{
	int iVar0;

	iVar0 = func_350();
	if (iVar0 == 1)
	{
		func_351(1);
		func_352();
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		func_249();
		func_353(0, 0, 0, 1);
		NETWORK::_0x236905C700FDB54D();
		func_354(1, 1);
		func_251(8);
	}
	else if (iVar0 == 2)
	{
		NETWORK::_0xC505036A35AFD01B(false);
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(0);
		}
		func_335(4);
		func_251(17);
	}
}

void func_234()
{
	NETWORK::_0x236905C700FDB54D();
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, true, 32, true);
	}
	func_249();
	func_251(9);
}

void func_235()
{
	func_249();
	func_333(1);
	func_251(10);
}

void func_236()
{
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	NETWORK::_0x236905C700FDB54D();
	if (!func_342(1) || NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		func_249();
		func_355();
		func_251(11);
	}
	else if (func_341())
	{
		func_340(16);
		func_251(17);
	}
}

void func_237()
{
	int iVar0;

	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	NETWORK::_0x236905C700FDB54D();
	if (func_341())
	{
		func_340(16);
		NETWORK::_0xC505036A35AFD01B(false);
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(0);
		}
		func_335(4);
		func_251(17);
	}
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(Global_1225638->f_8, 501393341, 1);
	if (iVar0 == 0 || iVar0 == 1)
	{
		return;
	}
	if (PED::IS_PED_ON_MOUNT(Global_1225638->f_8))
	{
		func_352();
		return;
	}
	func_356();
	func_333(1);
	func_251(12);
}

void func_238()
{
	struct<7> Var0;
	struct<7> Var22;
	struct<7> Var31;
	struct<7> Var47;

	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	NETWORK::_0x236905C700FDB54D();
	func_355();
	if (func_341())
	{
		func_340(16);
		NETWORK::_0xC505036A35AFD01B(false);
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(0);
		}
		func_335(4);
		func_251(17);
	}
	Var0 = { func_345() };
	Var22 = { func_357() };
	Var31 = { func_358() };
	switch (func_349())
	{
		case 0:
			Var47 = { Var0 };
			break;
		case 1:
			Var47 = { Var0 };
			break;
		case 2:
			Var47 = { Var22 };
			break;
		case 3:
			Var47 = { Var22 };
			break;
		case 4:
			Var47 = { Var31 };
			break;
	}
	if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var47))
	{
		return;
	}
	func_249();
	func_251(13);
}

void func_239()
{
	struct<7> Var0;
	struct<7> Var22;
	struct<7> Var31;
	struct<7> Var47;
	int iVar54;

	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	NETWORK::_0x236905C700FDB54D();
	func_355();
	if (func_341())
	{
		func_340(16);
		NETWORK::_0xC505036A35AFD01B(false);
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(0);
		}
		func_335(4);
		func_251(17);
	}
	Var0 = { func_345() };
	Var22 = { func_357() };
	Var31 = { func_358() };
	switch (func_349())
	{
		case 0:
			Var47 = { Var0 };
			break;
		case 1:
			Var47 = { Var0 };
			break;
		case 2:
			Var47 = { Var22 };
			break;
		case 3:
			Var47 = { Var22 };
			break;
		case 4:
			Var47 = { Var31 };
			break;
	}
	if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var47))
	{
		func_340(8);
		func_359(Global_1225638->f_16);
		func_335(2);
		NETWORK::_0xC505036A35AFD01B(false);
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(0);
		}
		func_335(4);
		func_251(17);
	}
	iVar54 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var47);
	if (!NETWORK::_0x255A5EF65EDA9167(iVar54))
	{
		return;
	}
	func_360(iVar54);
	NETWORK::_0x5A91BCEF74944E93(iVar54, 30f);
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar54))
	{
		return;
	}
	func_249();
	func_251(14);
}

void func_240()
{
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	NETWORK::_0x236905C700FDB54D();
	func_355();
	if ((func_361() && func_362()) && (func_314(255) > 0 && func_363() > -1))
	{
		func_251(16);
	}
}

void func_241()
{
	int iVar0;
	int iVar1;
	struct<70> Var2;
	int iVar72;
	int iVar73;
	bool bVar74;

	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	NETWORK::_0x236905C700FDB54D();
	func_355();
	if (func_341())
	{
		func_340(16);
		func_251(17);
	}
	iVar0 = Global_1572887->f_164.f_59;
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		func_340(8);
		func_364(1);
		func_359(Global_1225638->f_16);
		func_335(2);
		func_335(4);
		func_251(17);
	}
	if (func_314(iVar0) == 0)
	{
		return;
	}
	if (func_365() != 2 && func_336(255))
	{
		return;
	}
	iVar1 = func_366(((*Global_1055058)[iVar0 /*116*/])->f_2);
	if (iVar1 == 1)
	{
		_NAMESPACE26::_0xC0474C8BCF6787AD(_NAMESPACE26::_0x901E0DC25080C8B9(iVar0));
	}
	if (func_367())
	{
		func_368();
		func_335(32);
		func_335(2);
		func_251(17);
		return;
	}
	if (((*Global_262777)[iVar0 /*74*/])->f_1.f_59 != 0)
	{
		iVar1 = func_366(((*Global_262777)[iVar0 /*74*/])->f_1.f_59);
	}
	if (iVar1 == 10 || iVar1 == 1)
	{
		if (!func_369(-1, 0))
		{
			return;
		}
		Var2 = { func_370(iVar0) };
		iVar72 = func_371(Var2.f_18, Var2.f_17);
		if (iVar72 == 1)
		{
			return;
		}
		else if (iVar72 == 2)
		{
			func_372(1024);
		}
		if (func_373(iVar0))
		{
			func_335(2);
			func_251(17);
			return;
		}
		else
		{
			func_340(4);
			func_374(1);
			func_72(2);
			func_251(17);
			return;
		}
	}
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		func_333(0);
		return;
	}
	iVar73 = func_349();
	bVar74 = false;
	if ((iVar73 != 1 && iVar73 != 3) || bVar74)
	{
		if (bVar74)
		{
		}
	}
	if (!func_375())
	{
		return;
	}
	func_335(2);
	func_251(17);
}

void func_242()
{
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	NETWORK::_0x236905C700FDB54D();
	func_355();
	if (func_342(4))
	{
		if (Global_1572887->f_164.f_81 != 0)
		{
			return;
		}
		if (func_376())
		{
			if ((!func_342(2) && !func_336(255)) && !(CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN()))
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
			if (!Global_1225638->f_13 || Global_1225638->f_15 == &Global_1225638)
			{
				func_377(0, 3, 0);
			}
		}
		else if (func_365() != 2 && func_48() == 0)
		{
			if (func_365() == 0)
			{
				func_378(0);
			}
			else if (func_365() == 1)
			{
				func_18();
			}
		}
	}
	if (!func_342(2) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4))
	{
		if (func_336(255))
		{
			return;
		}
		else if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			func_364(0);
			func_379(1, 1);
		}
	}
	if (SCRIPTS::_IS_LOADING_SCREEN_ACTIVE())
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(0);
		}
		SCRIPTS::SHUTDOWN_LOADING_SCREEN();
	}
	if (Global_1572887->f_164.f_1 == 2 || Global_1572887->f_164.f_1 == 3)
	{
		NETWORK::_0xA4484173759749B1();
	}
	if (!func_342(32))
	{
		func_354(0, 1);
	}
	func_72(2);
	func_333(0);
	func_71();
}

void func_243(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
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
}

bool func_244(int iParam0)
{
	if (iParam0 >= 42 || iParam0 <= 0)
	{
		return true;
	}
	return Global_1899202[iParam0] >= 1;
}

void func_245(int iParam0)
{
	int iVar0;

	if (iParam0 >= 0)
	{
		(*Global_1898441)[iParam0 /*38*/] = 0;
		((*Global_1898441)[iParam0 /*38*/])->f_1 = 0;
		StringCopy(&(((*Global_1898441)[iParam0 /*38*/])->f_2), "", 24);
		StringCopy(&(((*Global_1898441)[iParam0 /*38*/])->f_18), "", 24);
		StringCopy(&(((*Global_1898441)[iParam0 /*38*/])->f_21), "", 24);
		StringCopy(&(((*Global_1898441)[iParam0 /*38*/])->f_24), "", 24);
		StringCopy(&(((*Global_1898441)[iParam0 /*38*/])->f_27), "", 24);
		StringCopy(&(((*Global_1898441)[iParam0 /*38*/])->f_30), "", 64);
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			StringCopy(((*Global_1898441)[iParam0 /*38*/])->f_5[iVar0 /*3*/], "", 24);
			iVar0++;
		}
	}
}

int func_246(var uParam0)
{
	return 0;
}

void func_247(struct<25> Param0, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, int iParam38, bool bParam39)
{
	struct<7> Var0;
	int iVar7;

	if (!func_380(Param0))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_18)) || MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_21)))
	{
		return;
	}
	MISC::_0xCC7FC854B956A128(&(Param0.f_18), &(Param0.f_21));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_2)))
	{
		MISC::_0x9935F76407C32539(&(Param0.f_2));
	}
	if (bParam39)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_24)) && !MISC::IS_STRING_NULL_OR_EMPTY(Param0.f_5[0 /*3*/]))
		{
			MISC::_0x91D657230BC208D2(Param0.f_5[0 /*3*/], &(Param0.f_24));
			Var0 = { func_381(PLAYER::PLAYER_ID()) };
			if (func_382(Var0))
			{
				MISC::_0xAF530E56505D1BD6(&Var0);
			}
		}
		iVar7 = 1;
		while (iVar7 <= 3)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(Param0.f_5[iVar7 /*3*/]))
			{
				MISC::_0x1694A053DFB61A34(Param0.f_5[iVar7 /*3*/]);
			}
			iVar7++;
		}
	}
	MISC::_0xB16FC7B364D86585();
	func_245(iParam38);
	(*Global_1899202)[Param0] = Global_1899202[Param0] + 1;
}

void func_248(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = Global_1572887->f_282.f_1;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 15)
	{
		if (MISC::IS_BIT_SET(iVar0, iVar1))
		{
		}
		iVar1++;
	}
	if (Global_1572887->f_282.f_2 != -1)
	{
	}
	if (Global_1572887->f_282.f_3 != -1)
	{
	}
	if (Global_1572887->f_282.f_4 != -1)
	{
	}
	if (Global_1572887->f_282.f_5 != -1)
	{
	}
	if (Global_1572887->f_282.f_6 != -1)
	{
	}
	if (Global_1572887->f_282.f_8 != 0)
	{
	}
}

void func_249()
{
	Global_1572887->f_164.f_60 = MISC::GET_GAME_TIMER();
}

void func_250(int iParam0)
{
	Global_1572887->f_164.f_1 = iParam0;
}

void func_251(int iParam0)
{
	Global_1572887->f_164 = iParam0;
}

bool func_252()
{
	return Global_1572887->f_164.f_86 != -1;
}

void func_253(int iParam0)
{
	Global_1572887->f_282 = iParam0;
}

void func_254(int iParam0)
{
	func_383(&(Global_1572887->f_282.f_1), func_263(iParam0));
}

int func_255()
{
	return (MISC::GET_GAME_TIMER() - vLocal_15.y);
}

char* func_256(int iParam0)
{
	char* sVar0;

	sVar0 = "";
	switch (iParam0)
	{
		case joaat("mode"):
			sVar0 = "mode";
			break;
		case -763890493:
			sVar0 = "state_id";
			break;
		case -1926951471:
			sVar0 = "district_id";
			break;
		case 82543689:
			sVar0 = "region_id";
			break;
		case -875643756:
			sVar0 = "minigame_id";
			break;
		case 64789430:
			sVar0 = "series_id";
			break;
		case 735882532:
			sVar0 = "mission_id";
			break;
		case joaat("p_fav01_grass_06_268"):
			sVar0 = "char_slot";
			break;
		case -730035725:
			sVar0 = "arg_0";
			break;
		case -503077631:
			sVar0 = "arg_1";
			break;
		case 1860157115:
			sVar0 = "arg_2";
			break;
		case 2091932252:
			sVar0 = "arg_3";
			break;
		case -1955432480:
			sVar0 = "arg_4";
			break;
		case -1725164717:
			sVar0 = "arg_5";
			break;
		case 1056268003:
			sVar0 = "arg_6";
			break;
		case 1286208076:
			sVar0 = "arg_7";
			break;
		case 1529091912:
			sVar0 = "arg_8";
			break;
		case 1762505499:
			sVar0 = "arg_9";
			break;
		case -1723987907:
			sVar0 = "launchPreset";
			break;
	}
	return sVar0;
}

void func_257(var uParam0)
{
	struct<10> Var0;

	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	*uParam0 = { Var0 };
}

int func_258(int iParam0)
{
	switch (iParam0)
	{
		case -2085163631:
			return 0;
		case -4613767:
			return 0;
		case 1567162363:
			return 1;
		case 456471693:
			return 2;
		case -1772963474:
			return 3;
		case 1881496386:
			return 4;
		case 711768994:
			return 5;
		case -440834066:
			return 6;
		case -1363847832:
			return 7;
		case 967769300:
			return 8;
		case -1436873944:
			return 9;
		case -1585669139:
			return 10;
		case 16791368:
			return 11;
		case 1452922822:
			return 12;
		case 549538301:
			return 13;
		case 974698954:
			return 14;
		case 445881012:
			return 15;
		case -2043891857:
			return 16;
		case 419656993:
			return 17;
		case -1732457315:
			return 18;
		case 1794318026:
			return 19;
		case 2035159966:
			return 20;
		case 770832805:
			return 21;
		case -1109814766:
			return 22;
		case -1080317735:
			return 23;
		case -1075550363:
			return 24;
		case 2138576151:
			return 25;
		case 1180954297:
			return 26;
		case 783603394:
			return 27;
		case -170458336:
			return 29;
		case 1285083821:
			return 30;
		case -1840907462:
			return 31;
		case 756710130:
			return 32;
		case 388370024:
			return 33;
		case 1092296123:
			return 34;
		case 467491346:
			return 35;
		case -1391584612:
			return 36;
		case -152111346:
			return 37;
		case 1447551317:
			return 38;
		case 153136092:
			return 39;
		case 1304405732:
			return 40;
		case 1074984055:
			return 41;
		case 1087476368:
			return 50;
		case -1768057340:
			return 51;
		case 1218874593:
			return 42;
		case -1438443836:
			return 52;
		case -2036340415:
			return 43;
		case 803939643:
			return 44;
		case -632496195:
			return 53;
		case -965943619:
			return 45;
		case 283532073:
			return 46;
		case -69067491:
			return 47;
		case -1864895118:
			return 48;
		case -1929806571:
			return 54;
		case 1162337247:
			return 28;
		case -698525417:
			return 55;
		case -1149739894:
			return 56;
		case 380507325:
			return 49;
		case 407796241:
			return 57;
		case -152267914:
			return 58;
		case -1675443320:
			return 59;
		case 1940341639:
			return 60;
		case 1846596114:
			return 61;
		case 907708501:
			return 62;
		case 1825644981:
			return 64;
		case 2065937607:
			return 65;
		case -211317417:
			return 66;
		case 1801307910:
			return 67;
		case -4118897:
			return 68;
		case 1853610692:
			return 69;
		case -1574644415:
			return 70;
		case 2133055515:
			return 71;
		case -1413401932:
			return 72;
		case 801090761:
			return 73;
		case 2131218644:
			return 74;
		case 1708823660:
			return 75;
		case 7976942:
			return 76;
		case 2111120505:
			return 77;
		case 176893118:
			return 78;
		case 602306665:
			return 63;
		case 1179148161:
			return 79;
		case 547412068:
			return 80;
		case -1539748801:
			return 81;
		case -1605119912:
			return 82;
		case -884464063:
			return 83;
		case -1420970720:
			return 84;
		case 1017024547:
			return 85;
		case -1204497306:
			return 86;
		case -1621069480:
			return 87;
		case -458604261:
			return 88;
		case -923391614:
			return 89;
		case -689247089:
			return 90;
		case 44049568:
			return 91;
		case 1350259552:
			return 92;
		case -61661574:
			return 93;
		case -725338054:
			return 94;
		case -770123507:
			return 95;
		case 1322486734:
			return 96;
		case -460939553:
			return 97;
		case -1451863552:
			return 98;
		case 713715980:
			return 101;
		case -31204969:
			return 102;
		case -1720064790:
			return 103;
		case 173833068:
			return 99;
		case -1681004136:
			return 100;
		case -532172775:
			return 104;
		case -739067737:
			return 105;
		case -1203133835:
			return 106;
		case -1947411598:
			return 107;
		case -1049753365:
			return 108;
		case -1298718762:
			return 109;
		case -595083064:
			return 110;
		case 884833917:
			return 111;
		case 2141950651:
			return 112;
		case -1437650729:
			return 113;
		case 672925454:
			return 126;
		case 846062774:
			return 127;
		case 1369756178:
			return 120;
		case -736172423:
			return 121;
		case 1597070291:
			return 122;
		case -159501564:
			return 124;
		case -1438809608:
			return 123;
		case -102682392:
			return 125;
		case -81068979:
			return 114;
		case 227618407:
			return 115;
		case 2106043438:
			return 116;
		case -1868356491:
			return 129;
		case -1380256064:
			return 117;
		case -2118469183:
			return 118;
		case -558997834:
			return 119;
		case 658339366:
			return 128;
		default:
			break;
	}
	return -1;
}

int func_259(int iParam0)
{
	switch (iParam0)
	{
		case 675537701:
			return 0;
		case -1915988145:
			return 1;
		case 38535626:
			return 2;
		case 1904167574:
			return 3;
		case 244711249:
			return 4;
		case -1859792564:
			return 5;
		case -1808688941:
			return 6;
		case -736296038:
			return 7;
		case -909439131:
			return 8;
		case 1917744724:
			return 9;
		case 821748379:
			return 10;
		case 196685551:
			return 11;
		case 1983548039:
			return 12;
		case 985737465:
			return 13;
		case -735550853:
			return 14;
		case -1716084250:
			return 15;
		case 869827975:
			return 16;
		default:
			break;
	}
	return -1;
}

int func_260(int iParam0)
{
	switch (iParam0)
	{
		case -221059932: /* GXTEntry: "Ambarino" */
			return 0;
		case 10837344: /* GXTEntry: "Lemoyne" */
			return 1;
		case 2045157995:
			return 2;
		case -1289136221:
			return 3;
		case 1246494439:
			return 4;
		case 1935063277: /* GXTEntry: "Guarma" */
			return 5;
		default:
			break;
	}
	return -1;
}

int func_261(int iParam0)
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

int func_262(int iParam0)
{
	switch (iParam0)
	{
		case -1369928329:
			return 0;
		case 2090637823:
			return 2;
		case -1740003396:
			return 3;
		case -2140118397:
			return 4;
		case -141490041:
			return 5;
		case 485273815:
			return 6;
		case 188100165:
			return 7;
		case -840966484:
			return 8;
		case 812079913:
			return 9;
		case 839886685:
			return 10;
		case 1749906378:
			return 11;
		case 1485493317:
			return 12;
		case -1956038143:
			return 13;
		default:
			break;
	}
	return -1;
}

int func_263(int iParam0)
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
		case 1433203589:
			iVar0 = 8192;
			break;
		case -61119924:
			iVar0 = 16384;
			break;
		case 2134863183:
			iVar0 = 32768;
			break;
		case -159568751:
			iVar0 = 65536;
			break;
		case joaat("benchmark"):
			iVar0 = 131072;
			break;
	}
	return iVar0;
}

bool func_264(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

char* func_265(int iParam0)
{
	char* sVar0;

	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "";
			break;
		case joaat("single_player"):
			sVar0 = "single_player";
			break;
		case joaat("freeroam"):
			sVar0 = "freeroam";
			break;
		case -1743646234:
			sVar0 = "goldstore";
			break;
		case -1330461529:
			sVar0 = "series";
			break;
		case joaat("mission"):
			sVar0 = "mission";
			break;
		case 1495295997:
			sVar0 = "minigame";
			break;
		case joaat("mission_creator"):
			sVar0 = "mission_creator";
			break;
		case joaat("clip"):
			sVar0 = "clip";
			break;
		case joaat("benchmark"):
			sVar0 = "benchmark";
			break;
	}
	return sVar0;
}

int func_266(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("NEW_GAME");
			break;
		case 1:
			iVar0 = 1651967528;
			break;
		case 2:
			iVar0 = -84928653;
			break;
		case 3:
			iVar0 = 1306134188;
			break;
		case 4:
			iVar0 = -1357178860;
			break;
		case 5:
			iVar0 = joaat("friendly");
			break;
		case 6:
			iVar0 = 655115506;
			break;
		case 7:
			iVar0 = 1737952409;
			break;
		case 8:
			iVar0 = 2137301164;
			break;
		case 9:
			iVar0 = -110687166;
			break;
		case 10:
			iVar0 = -2030542394;
			break;
		case 11:
			iVar0 = -11301188;
			break;
		case 12:
			iVar0 = -1312679892;
			break;
		case 13:
			iVar0 = 1433203589;
			break;
		case 14:
			iVar0 = -61119924;
			break;
		case 15:
			iVar0 = 2134863183;
			break;
		case 16:
			iVar0 = -159568751;
			break;
		case 17:
			iVar0 = joaat("benchmark");
			break;
	}
	return iVar0;
}

char* func_267(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "REGION_INVALID";
		case 0:
			return "REGION_BAY_CRAWDADWILLIES";
		case 1:
			return "REGION_BAY_MACOMBS_END";
		case 2:
			return "REGION_BAY_MERKINSWALLER";
		case 3:
			return "REGION_BAY_LAGRAS";
		case 4:
			return "REGION_BAY_LAKAY";
		case 5:
			return "REGION_BAY_SAINT_DENIS";
		case 6:
			return "REGION_BAY_ORANGE_PLANTATION";
		case 7:
			return "REGION_BAY_SERIAL_KILLER";
		case 8:
			return "REGION_BAY_SERENDIPITY";
		case 9:
			return "REGION_BAY_SHADYBELLE";
		case 10:
			return "REGION_BAY_SILTWATERSTRAND";
		case 11:
			return "REGION_BGV_APPLESEEDTIMBER";
		case 12:
			return "REGION_BGV_BERYLS_DREAM";
		case 13:
			return "REGION_BGV_BLACKBONEFOREST_TRAPPER";
		case 14:
			return "REGION_BGV_DAKOTARIVER_TRAPPER";
		case 15:
			return "REGION_BGV_FORTRIGGS";
		case 16:
			return "REGION_BGV_HANGINGDOG";
		case 17:
			return "REGION_BGV_LONEMULESTEAD";
		case 18:
			return "REGION_BGV_MISSING_HUSBAND";
		case 19:
			return "REGION_BGV_MONTO_REST";
		case 20:
			return "REGION_BGV_OWANJILA_DAM";
		case 21:
			return "REGION_BGV_PAINTEDSKY";
		case 22:
			return "REGION_BGV_PRONGHORN";
		case 23:
			return "REGION_BGV_RIGGS_STATION";
		case 24:
			return "REGION_BGV_SHACK";
		case 25:
			return "REGION_BGV_SHEPHERDS_RISE";
		case 26:
			return "REGION_BGV_STRAWBERRY";
		case 27:
			return "REGION_BGV_VALLEY_VIEW";
		case 28:
			return "REGION_BGV_WALLACE_STATION";
		case 29:
			return "REGION_BGV_WATSONSCABIN";
		case 30:
			return "REGION_BLU_CANEBREAK_MANOR";
		case 31:
			return "REGION_BLU_COPPERHEAD";
		case 32:
			return "REGION_BLU_SISIKA";
		case 33:
			return "REGION_CML_BACCHUSBRIDGE";
		case 34:
			return "REGION_CML_DINO_LADY";
		case 35:
			return "REGION_CML_OLDFORTWALLACE";
		case 36:
			return "REGION_CML_SIXPOINTCABIN";
		case 37:
			return "REGION_GRT_BEECHERS";
		case 38:
			return "REGION_GRT_BLACKWATER";
		case 39:
			return "REGION_GRT_QUAKERS_COVE";
		case 40:
			return "REGION_GRZ_ADLERRANCH";
		case 41:
			return "REGION_GRZ_DEAD_RIVAL";
		case 50:
			return "REGION_GRZ_CALUMETRAVINE";
		case 51:
			return "REGION_GRE_CIVIL_WAR_BRIDE";
		case 42:
			return "REGION_GRZ_CHEZPORTER";
		case 52:
			return "REGION_GRZ_COHUTTA";
		case 43:
			return "REGION_GRZ_COLTER";
		case 44:
			return "REGION_GRZ_FROZEN_EXPLORER";
		case 53:
			return "REGION_GRZ_GUNFIGHT";
		case 45:
			return "REGION_GRZ_MILLESANI_CLAIM";
		case 46:
			return "REGION_GRZ_MOUNTAIN_MAN";
		case 47:
			return "REGION_GRZ_STARVING_CHILDREN";
		case 48:
			return "REGION_GRZ_TEMPEST_RIM";
		case 54:
			return "REGION_GRZ_THELOFT";
		case 55:
			return "REGION_GRE_VETERAN";
		case 56:
			return "REGION_GRZ_WAPITI";
		case 49:
			return "REGION_GRZ_WINTERMINING_TOWN";
		case 57:
			return "REGION_GUA_AGUASDULCES";
		case 58:
			return "REGION_GUA_CAMP";
		case 59:
			return "REGION_GUA_CINCOTORRES";
		case 60:
			return "REGION_GUA_LACAPILLA";
		case 61:
			return "REGION_GUA_MANICATO";
		case 62:
			return "REGION_HRT_ABANDONED_MILL";
		case 64:
			return "REGION_HRT_CARMODYDELL";
		case 65:
			return "REGION_HRT_CORNWALLKEROSENE";
		case 66:
			return "REGION_HRT_CROP_FARM";
		case 67:
			return "REGION_HRT_CUMBERLANDFALLS";
		case 68:
			return "REGION_HRT_DOWNSRANCH";
		case 69:
			return "REGION_HRT_EMERALDRANCH";
		case 70:
			return "REGION_HRT_GRANGERS_HOGGERY";
		case 71:
			return "REGION_HRT_HORSESHOEOVERLOOK";
		case 72:
			return "REGION_HRT_LARNEDSOD";
		case 73:
			return "REGION_HRT_LOONY_CULT";
		case 74:
			return "REGION_HRT_LUCKYSCABIN";
		case 75:
			return "REGION_HRT_SWANSONS_STATION";
		case 76:
			return "REGION_HRT_VALENTINE";
		case 77:
			return "REGION_ROA_ABERDEENPIGFARM";
		case 78:
			return "REGION_ROA_ANNESBURG";
		case 79:
			return "REGION_ROA_BEAVERHOLLOW";
		case 63:
			return "REGION_ROA_BEECHERS_C";
		case 80:
			return "REGION_ROA_BLACK_BALSAM_RISE";
		case 81:
			return "REGION_ROA_BRANDYWINE_DROP";
		case 82:
			return "REGION_ROA_BUTCHERCREEK";
		case 83:
			return "REGION_ROA_DOVERHILL";
		case 84:
			return "REGION_ROA_HAPPY_FAMILY";
		case 85:
			return "REGION_ROA_ISOLATIONIST";
		case 86:
			return "REGION_ROA_MACLEANSHOUSE";
		case 87:
			return "REGION_ROA_MOSSY_FLATS";
		case 88:
			return "REGION_ROA_ROANOKE_VALLEY";
		case 89:
			return "REGION_ROA_ROCKYSEVEN";
		case 90:
			return "REGION_ROA_TRAPPER";
		case 91:
			return "REGION_ROA_VANHORNMANSION";
		case 92:
			return "REGION_ROA_VANHORNPOST";
		case 93:
			return "REGION_SCM_BRAITHWAITEMANOR";
		case 94:
			return "REGION_SCM_BULGERGLADE";
		case 95:
			return "REGION_SCM_CALIGAHALL";
		case 96:
			return "REGION_SCM_CATFISHJACKSONS";
		case 97:
			return "REGION_SCM_CLEMENSCOVE";
		case 98:
			return "REGION_SCM_CLEMENSPOINT";
		case 99:
			return "REGION_SCM_COMPSONS_STEAD";
		case 100:
			return "REGION_SCM_DAIRY_FARM";
		case 101:
			return "REGION_SCM_HORSE_SHOP";
		case 102:
			return "REGION_SCM_LONNIESSHACK";
		case 103:
			return "REGION_SCM_LOVE_TRIANGLE";
		case 104:
			return "REGION_SCM_RADLEYS_PASTURE";
		case 105:
			return "REGION_SCM_RHODES";
		case 106:
			return "REGION_SCM_SLAVE_PEN";
		case 107:
			return "REGION_TAL_AURORA_BASIN";
		case 108:
			return "REGION_TAL_DEAD_SETTLER";
		case 109:
			return "REGION_TAL_COCHINAY";
		case 110:
			return "REGION_TAL_MANZANITAPOST";
		case 111:
			return "REGION_TAL_PACIFICUNIONRR";
		case 112:
			return "REGION_TAL_TANNERSREACH";
		case 113:
			return "REGION_TAL_TRAPPER";
		case 126:
			return "REGION_HEN_MACFARLANES_RANCH";
		case 127:
			return "REGION_HEN_THIEVES_LANDING";
		case 120:
			return "REGION_CHO_ARMADILLO";
		case 121:
			return "REGION_CHO_COOTS_CHAPEL";
		case 122:
			return "REGION_CHO_DON_JULIO_HOUSE";
		case 124:
			return "REGION_CHO_RIDGEWOOD_FARM";
		case 123:
			return "REGION_CHO_RILEYS_CHARGE";
		case 125:
			return "REGION_CHO_TWIN_ROCKS";
		case 114:
			return "REGION_GAP_GAPTOOTH_BREACH";
		case 115:
			return "REGION_GAP_TUMBLEWEED";
		case 116:
			return "REGION_GAP_RATHSKELLER_FORK";
		case 129:
			return "REGION_GAP_SOLOMONS_FOLLY";
		case 117:
			return "REGION_RIO_BENEDICT_POINT";
		case 118:
			return "REGION_RIO_FORT_MERCER";
		case 119:
			return "REGION_RIO_PLAIN_VIEW";
		case 128:
			return "REGION_CENTRALUNIONRR";
		default:
			break;
	}
	return "REGION_INVALID";
	return "REGION_INVALID";
}

char* func_268(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DISTRICT_BAYOU_NWA";
		case 1:
			return "DISTRICT_BIG_VALLEY";
		case 2:
			return "DISTRICT_BLUEGILL_MARSH";
		case 3:
			return "DISTRICT_CUMBERLAND_FOREST";
		case 4:
			return "DISTRICT_GREAT_PLAINS";
		case 5:
			return "DISTRICT_GRIZZLIES";
		case 6:
			return "DISTRICT_GRIZZLIES_EAST";
		case 7:
			return "DISTRICT_GRIZZLIES_WEST";
		case 8:
			return "DISTRICT_GUAMA";
		case 9:
			return "DISTRICT_HEARTLAND";
		case 10:
			return "DISTRICT_ROANOKE_RIDGE";
		case 11:
			return "DISTRICT_SCARLETT_MEADOWS";
		case 12:
			return "DISTRICT_TALL_TREES";
		case 13:
			return "DISTRICT_GAPTOOTH_RIDGE";
		case 14:
			return "DISTRICT_RIO_BRAVO";
		case 15:
			return "DISTRICT_CHOLLA_SPRINGS";
		case 16:
			return "DISTRICT_HENNIGANS_STEAD";
		default:
			break;
	}
	return "";
}

char* func_269(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "AMBARINO";
		case 1:
			return "LEMOYNE";
		case 2:
			return "NEWAUSTIN";
		case 3:
			return "NEWHANOVER";
		case 4:
			return "WESTELIZABETH";
		case 5:
			return "GUARMA";
		default:
			break;
	}
	return "";
}

char* func_270(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NET_PLAYLIST_RACE_SERIES";
		case 1:
			return "NET_PLAYLIST_FEATURED_SERIES_001";
		case 2:
			return "NET_PLAYLIST_ADVERSARY_MEDIUM";
		case 3:
			return "NET_PLAYLIST_ADVERSARY_LARGE";
		case 4:
			return "NET_PLAYLIST_GUN_RUSH_TEAMS";
		case 5:
			return "NET_PLAYLIST_GUN_RUSH_FREE_FOR_ALL";
		case 6:
			return "NET_PLAYLIST_NOMINATED_SERIES";
		case 7:
			return "NET_PLAYLIST_NOMINATED_SERIES_SMALL";
		case 8:
			return "NET_PLAYLIST_NOMINATED_SERIES_MEDIUM";
		case 9:
			return "NET_PLAYLIST_NOMINATED_SERIES_LARGE";
		case 10:
			return "NET_PLAYLIST_PRIVATE_SERIES";
		case 11:
			return "NET_PLAYLIST_ORBIS_SERIES_1";
		case 12:
			return "NET_PLAYLIST_ORBIS_SERIES_2";
		case 13:
			return "NET_PLAYLIST_ORBIS_SERIES_3";
		default:
			break;
	}
	return "";
}

char* func_271(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BLACKJACK";
		case 1:
			return "DOMINOES";
		case 2:
			return "POKER";
		case 3:
			return "FILLET";
		case 4:
			return "MILKING_COW";
		case 5:
			return "CLEAN_STALLS";
		case 6:
			return "FENCE_BUILDING";
		default:
			break;
	}
	return "invalid MINIGAME_TYPES";
}

void func_272(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;
	struct<8> Var17;

	StringCopy(&cVar1, "strandSavedVars", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 129, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F((*uParam0)[iVar0 /*4*/], 4, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, ".savedBitFlags", 64);
		SAVE::_0x529B9CCD0972AF4D((*uParam0)[iVar0 /*4*/], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".thisCommandPos", 64);
		SAVE::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar0 /*4*/])->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".thisCommandHashID", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*4*/])->f_2), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".thisCommandTOD", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam0)[iVar0 /*4*/])->f_3), &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_273(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;

	SAVE::_0x443174C20B8B9E7F(uParam0, 112, "controls");
	StringCopy(&cVar1, "controls.syncIDs", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 105, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0xBB7F4273C186BC4B((*uParam0)[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar1, "controls.flagIDs", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_105), 2, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_105)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0xBB7F4273C186BC4B(uParam0->f_105[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar1, "controls.intIDs", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_107), 3, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_107)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x529B9CCD0972AF4D(uParam0->f_107[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar1, "controls.bitsetIDs", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_110), 2, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_110)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x529B9CCD0972AF4D(uParam0->f_110[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_274(var uParam0)
{
	char cVar0[64];
	struct<8> Var8;
	int iVar16;

	StringCopy(&cVar0, "sHorseSlotInfo", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 3053, &cVar0);
	iVar16 = 0;
	while (iVar16 < *uParam0)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		func_384((*uParam0)[iVar16 /*436*/], &Var8);
		iVar16++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_275(var uParam0)
{
	char cVar0[64];
	char cVar8[64];
	struct<8> Var16;
	int iVar24;

	StringCopy(&cVar0, "sSaddleInfo", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 80, &cVar0);
	cVar8 = { cVar0 };
	StringConCat(&cVar8, ".eSaddleSlot", 64);
	SAVE::_0xB25B5A375BE5BE26(uParam0, &cVar8);
	cVar8 = { cVar0 };
	StringConCat(&cVar8, ".eSaddleState", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_1), &cVar8);
	cVar8 = { cVar0 };
	StringConCat(&cVar8, ".eDeadOrDroppedTime", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_2), &cVar8);
	cVar8 = { cVar0 };
	StringConCat(&cVar8, ".sPeltSkinData", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_3), 58, &cVar8);
	iVar24 = 0;
	while (iVar24 < 57)
	{
		Var16 = { cVar8 };
		StringIntConCat(&Var16, iVar24, 64);
		func_385(uParam0->f_3[iVar24], &Var16);
		iVar24++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	cVar8 = { cVar0 };
	StringConCat(&cVar8, ".sVisualPeltSkinInfo", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_61), 16, &cVar8);
	iVar24 = 0;
	while (iVar24 < 3)
	{
		Var16 = { cVar8 };
		StringIntConCat(&Var16, iVar24, 64);
		func_386(uParam0->f_61[iVar24 /*5*/], &Var16);
		iVar24++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	cVar8 = { cVar0 };
	StringConCat(&cVar8, ".vSaddleCoords", 64);
	func_152(&(uParam0->f_77), &cVar8);
	SAVE::_0xE0B45E983BFC0768();
}

void func_276(var uParam0)
{
	char cVar0[64];
	struct<8> Var8;

	StringCopy(&cVar0, "sHorseBreakingInfo", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 1, &cVar0);
	Var8 = { cVar0 };
	StringConCat(&Var8, ".bMinigameSuccessful", 64);
	SAVE::_0xBB7F4273C186BC4B(uParam0, &Var8);
	SAVE::_0xE0B45E983BFC0768();
}

void func_277(var uParam0)
{
	char cVar0[64];
	struct<8> Var8;

	StringCopy(&cVar0, "sTutorialInfo", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 5, &cVar0);
	Var8 = { cVar0 };
	StringConCat(&Var8, ".iHighestBondLevelReached", 64);
	SAVE::_0x529B9CCD0972AF4D(uParam0, &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, ".iTimesOverspurred", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_1), &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, ".iTimesRevived", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_2), &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, ".iTimesDirtyOver50Percent", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_3), &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, ".bDeadHorseTutorialShouldRun", 64);
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_4), &Var8);
	SAVE::_0xE0B45E983BFC0768();
}

void func_278(var uParam0)
{
	char cVar0[64];
	struct<8> Var8;

	StringCopy(&cVar0, "sHorseRaceInfo", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 2, &cVar0);
	Var8 = { cVar0 };
	StringConCat(&Var8, ".bSprintBondingBonusUnlocked", 64);
	SAVE::_0xBB7F4273C186BC4B(uParam0, &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, ".bSpeedStatBonusUnlocked", 64);
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_1), &Var8);
	SAVE::_0xE0B45E983BFC0768();
}

void func_279(struct<8> Param0, var uParam8)
{
	char cVar0[128];
	struct<16> Var16;
	int iVar32;

	SAVE::_0x81F4E92BE3958364(uParam8, 61, &Param0);
	iVar32 = 0;
	while (iVar32 < *uParam8)
	{
		MemCopy(&cVar0, {Param0}, 16);
		StringIntConCat(&cVar0, iVar32, 128);
		SAVE::_0x443174C20B8B9E7F((*uParam8)[iVar32 /*5*/], 5, &cVar0);
		Var16 = { cVar0 };
		StringConCat(&Var16, ".iSet", 128);
		SAVE::_0x529B9CCD0972AF4D((*uParam8)[iVar32 /*5*/], &Var16);
		Var16 = { cVar0 };
		StringConCat(&Var16, ".eComp", 128);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam8)[iVar32 /*5*/])->f_1), &Var16);
		Var16 = { cVar0 };
		StringConCat(&Var16, ".eIt", 128);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam8)[iVar32 /*5*/])->f_2), &Var16);
		Var16 = { cVar0 };
		StringConCat(&Var16, ".eUp", 128);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam8)[iVar32 /*5*/])->f_3), &Var16);
		Var16 = { cVar0 };
		StringConCat(&Var16, ".iVal", 128);
		SAVE::_0x529B9CCD0972AF4D(&(((*uParam8)[iVar32 /*5*/])->f_4), &Var16);
		SAVE::_0xE0B45E983BFC0768();
		iVar32++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_280(char* sParam0, var uParam1)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;
	struct<8> Var17;

	StringCopy(&cVar1, sParam0, 64);
	SAVE::_0x81F4E92BE3958364(uParam1, 286, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F((*uParam1)[iVar0 /*3*/], 3, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "status", 64);
		SAVE::_0xB25B5A375BE5BE26((*uParam1)[iVar0 /*3*/], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "effect", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam1)[iVar0 /*3*/])->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "tags", 64);
		SAVE::_0xB25B5A375BE5BE26(&(((*uParam1)[iVar0 /*3*/])->f_2), &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_281(var uParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, "cards", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 2, "cards");
	StringCopy(&cVar0, "cards.eCardSetRewardFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_1), &cVar0);
	SAVE::_0xB25B5A375BE5BE26(uParam0, "cards.eMailedCigaretteSets");
	SAVE::_0xE0B45E983BFC0768();
}

void func_282(var uParam0)
{
	char cVar0[64];
	struct<8> Var8;

	StringCopy(&cVar0, "rockCarvings", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 1, &cVar0);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eCarvingsRewardFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(uParam0, &Var8);
	SAVE::_0xE0B45E983BFC0768();
}

void func_283(var uParam0)
{
	char cVar0[64];
	struct<8> Var8;

	StringCopy(&cVar0, "dinoBones", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 1, &cVar0);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eDinoRewardFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(uParam0, &Var8);
	SAVE::_0xE0B45E983BFC0768();
}

void func_284(var uParam0)
{
	char cVar0[64];
	struct<8> Var8;

	StringCopy(&cVar0, "legendaryFish", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 1, &cVar0);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eLegendaryFishRewardFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(uParam0, &Var8);
	SAVE::_0xE0B45E983BFC0768();
}

void func_285(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;
	struct<8> Var17;

	StringCopy(&cVar1, "gatorEggs", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 20, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F((*uParam0)[iVar0], 1, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "todNestLastCleared", 64);
		SAVE::_0xB25B5A375BE5BE26((*uParam0)[iVar0], &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_286(var uParam0)
{
	char cVar0[64];

	SAVE::_0x443174C20B8B9E7F(uParam0, 1, "egretFeathers");
	StringCopy(&cVar0, "egretFeathers.eFeathersRewardFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(uParam0, &cVar0);
	SAVE::_0xE0B45E983BFC0768();
}

void func_287(var uParam0)
{
	char cVar0[64];
	struct<8> Var8;

	StringCopy(&cVar0, "taxidermyAnimals", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 1, &cVar0);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eTaxidermyRewardFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(uParam0, &Var8);
	SAVE::_0xE0B45E983BFC0768();
}

void func_288(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;
	struct<8> Var17;

	StringCopy(&cVar1, "taxidermyMarital", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 15, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F((*uParam0)[iVar0 /*2*/], 2, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "todStatuePlacedOnMantle", 64);
		SAVE::_0xB25B5A375BE5BE26((*uParam0)[iVar0 /*2*/], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "bPlayerLeftBeechers", 64);
		SAVE::_0xBB7F4273C186BC4B(&(((*uParam0)[iVar0 /*2*/])->f_1), &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_289(var uParam0)
{
	SAVE::_0x443174C20B8B9E7F(uParam0, 1, "journalData");
	SAVE::_0xB25B5A375BE5BE26(uParam0, "journalData.eFlags");
	SAVE::_0xE0B45E983BFC0768();
}

void func_290(var uParam0)
{
	char cVar0[64];
	struct<8> Var8;

	StringCopy(&cVar0, "exotics", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 1, &cVar0);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eExoticStageFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(uParam0, &Var8);
	SAVE::_0xE0B45E983BFC0768();
}

void func_291(var uParam0)
{
	char cVar0[64];
	struct<8> Var8;

	StringCopy(&cVar0, "firstRecipePamphlets", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 1, &cVar0);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eFirstRecipePamphletFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(uParam0, &Var8);
	SAVE::_0xE0B45E983BFC0768();
}

void func_292(var uParam0)
{
	char cVar0[64];
	struct<8> Var8;

	StringCopy(&cVar0, "treasureHunter", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 2, &cVar0);
	Var8 = { cVar0 };
	StringConCat(&Var8, "todTreasureHunterTutorial", 64);
	SAVE::_0xB25B5A375BE5BE26(uParam0, &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, "iNumTreasureHuntLootLocationsFound", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_1), &Var8);
	SAVE::_0xE0B45E983BFC0768();
}

void func_293(var uParam0, struct<8> Param1)
{
	int iVar0;
	struct<8> Var1;
	struct<8> Var9;

	Var9 = { Param1 };
	StringConCat(&Var9, "PortableList", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 19, &Var9);
	iVar0 = 0;
	while (iVar0 < 18)
	{
		Var1 = { Var9 };
		StringIntConCat(&Var1, iVar0, 64);
		SAVE::_0x529B9CCD0972AF4D((*uParam0)[iVar0], &Var1);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	Var9 = { Param1 };
	StringConCat(&Var9, "PortableArraySize", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_19), &Var9);
	Var9 = { Param1 };
	StringConCat(&Var9, "OutfitSlotCount", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_20), &Var9);
	Var9 = { Param1 };
	StringConCat(&Var9, "iHatSlotCount", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_21), &Var9);
	Var9 = { Param1 };
	StringConCat(&Var9, "iBigMaskSlotCount", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_22), &Var9);
	Var9 = { Param1 };
	StringConCat(&Var9, "iSmallMaskSlotCount", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_23), &Var9);
	Var9 = { Param1 };
	StringConCat(&Var9, "iGloveSlotCount", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_24), &Var9);
	Var9 = { Param1 };
	StringConCat(&Var9, "iBadgeSlotCount", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_25), &Var9);
}

void func_294(var uParam0, struct<8> Param1, int iParam9)
{
	struct<8> Var0;
	struct<8> Var8;

	Var8 = { Param1 };
	StringConCat(&Var8, "Data", 64);
	StringIntConCat(&Var8, iParam9, 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 120, &Var8);
	Var0 = { Var8 };
	StringConCat(&Var0, "_eFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(uParam0, &Var0);
	Var0 = { Var8 };
	StringConCat(&Var0, "_Components", 64);
	func_387(&(uParam0->f_1), Var0);
	SAVE::_0xE0B45E983BFC0768();
}

void func_295(var uParam0)
{
	SAVE::_0x443174C20B8B9E7F(uParam0, 10, "psna_sCamp");
	SAVE::_0x443174C20B8B9E7F(uParam0, 3, "psna_sCampLocation");
	SAVE::_0x529B9CCD0972AF4D(uParam0, "psna_sCampiSize");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_1), "psna_sCampeDistrict");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_2), "psna_sCampeLocation");
	SAVE::_0xE0B45E983BFC0768();
	SAVE::_0x443174C20B8B9E7F(&(uParam0->f_3), 7, "psna_sCampRecharge");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_3), "psna_sCampRechargeYear");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_3.f_1), "psna_sCampRechargeMonth");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_3.f_2), "psna_sCampRechargeDay");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_3.f_3), "psna_sCampRechargeHour");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_3.f_4), "psna_sCampRechargeMinute");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_3.f_5), "psna_sCampRechargeSecond");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_3.f_6), "psna_sCampRechargeMilliseconds");
	SAVE::_0xE0B45E983BFC0768();
	SAVE::_0xE0B45E983BFC0768();
}

void func_296(var uParam0)
{
	int iVar0;
	struct<8> Var1;
	char cVar9[64];
	struct<8> Var17;
	struct<8> Var25;

	SAVE::_0x443174C20B8B9E7F(uParam0, 47, "psna_sPosse");
	SAVE::_0xBB7F4273C186BC4B(uParam0, "psna_sPosse_bStandardName");
	SAVE::_0x4845E7E7643A908C(&(uParam0->f_1), "psna_sPosse_txtGamertag");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_5), "psna_sPosse_iLastPosseID");
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_6), 41, "psna_sPosse_sPosseDataArray");
	StringCopy(&cVar9, "psna_sPosse_data_", 64);
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		Var1 = { cVar9 };
		StringIntConCat(&Var1, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0->f_6[iVar0 /*8*/], 8, &Var1);
		Var17 = { Var1 };
		StringConCat(&Var17, "_iPosseID", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0->f_6[iVar0 /*8*/])->f_7), &Var17);
		Var17 = { Var1 };
		StringConCat(&Var17, "_sPosseLock", 64);
		SAVE::_0x443174C20B8B9E7F(uParam0->f_6[iVar0 /*8*/], 7, &Var17);
		Var25 = { Var17 };
		StringConCat(&Var25, "_Year", 64);
		SAVE::_0x529B9CCD0972AF4D(uParam0->f_6[iVar0 /*8*/], &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "_Month", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0->f_6[iVar0 /*8*/])->f_1), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "_Day", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0->f_6[iVar0 /*8*/])->f_2), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "_Hour", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0->f_6[iVar0 /*8*/])->f_3), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "_Minute", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0->f_6[iVar0 /*8*/])->f_4), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "_Second", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0->f_6[iVar0 /*8*/])->f_5), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "_Milliseconds", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0->f_6[iVar0 /*8*/])->f_6), &Var25);
		SAVE::_0xE0B45E983BFC0768();
		SAVE::_0xE0B45E983BFC0768();
		StringCopy(&Var17, "", 64);
		StringCopy(&Var25, "", 64);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_297(var uParam0)
{
	int iVar0;
	char cVar1[64];

	SAVE::_0x443174C20B8B9E7F(uParam0, 288, "nssd_sStable_Data");
	func_388(uParam0);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_41), 246, "nssd_sStableBonding_array");
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		StringCopy(&cVar1, "nssd_sStableBonding_array_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		func_389(uParam0->f_41[iVar0 /*49*/], &cVar1);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_287), "nssd_eSavedSystemFlags");
	SAVE::_0xE0B45E983BFC0768();
}

void func_298(var uParam0)
{
	int iVar0;
	struct<8> Var1;
	char cVar9[64];

	StringCopy(&cVar9, "psna_sClothes", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 1012, &cVar9);
	Var1 = { cVar9 };
	StringConCat(&Var1, "PortableWardrobe", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 26, &Var1);
	func_293(uParam0, Var1);
	SAVE::_0xE0B45E983BFC0768();
	StringCopy(&Var1, "psna_sClothes_OutfitList", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_26), 601, &Var1);
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_294(uParam0->f_26[iVar0 /*120*/], Var1, iVar0);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&Var1, "psna_sClothes_HeadOverlay", 64);
	func_390(&(uParam0->f_627), Var1);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_953), "psna_sClothes_SystemFlags");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_954), "psna_sClothes_PlayerType");
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_955), 55, "psna_sClothes_fExpressions");
	iVar0 = 0;
	while (iVar0 < 54)
	{
		Var1 = { cVar9 };
		StringConCat(&Var1, "_fExpression", 64);
		StringIntConCat(&Var1, iVar0, 64);
		SAVE::_0x35DEFECAE36D4FAE(uParam0->f_955[iVar0], &Var1);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_1010), "psna_sClothes_fEyeRedness");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_1011), "psna_sClothes_iCurOutfit");
	SAVE::_0xE0B45E983BFC0768();
}

void func_299(var uParam0)
{
	int iVar0;
	struct<8> Var1;
	char cVar9[64];

	StringCopy(&cVar9, "psna_sAbandonedLoot", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 3, &cVar9);
	SAVE::_0x81F4E92BE3958364(uParam0, 3, &Var1);
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		Var1 = { cVar9 };
		StringIntConCat(&Var1, iVar0, 64);
		func_391((*uParam0)[iVar0 /*2*/], Var1);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_300(var uParam0)
{
	int iVar0;
	struct<8> Var1;
	struct<8> Var9;
	char cVar17[64];

	StringCopy(&cVar17, "psna_sRpg", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 34, &cVar17);
	StringConCat(&cVar17, "psna_sAttributeData", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 24, &cVar17);
	iVar0 = 0;
	while (iVar0 <= 22)
	{
		Var1 = { cVar17 };
		StringIntConCat(&Var1, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F((*uParam0)[iVar0], 1, &Var1);
		StringConCat(&Var1, "fAttributeXP", 64);
		SAVE::_0x35DEFECAE36D4FAE((*uParam0)[iVar0], &Var1);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar17, "psna_sRpg", 64);
	StringConCat(&cVar17, "psna_sAttributeCoreData", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_24), 10, &cVar17);
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Var1 = { cVar17 };
		StringIntConCat(&Var1, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0->f_24[iVar0 /*3*/], 3, &Var1);
		Var9 = { Var1 };
		StringConCat(&Var9, "fCoreValue", 64);
		SAVE::_0x35DEFECAE36D4FAE(uParam0->f_24[iVar0 /*3*/], &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "todDegradeLastFixed", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0->f_24[iVar0 /*3*/])->f_1), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "iDegradeCount", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0->f_24[iVar0 /*3*/])->f_2), &Var9);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_301(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		DATAFILE::_DATAFILE_REGISTER_QUERY(*uParam0, iVar0, func_392(iVar0));
		iVar0++;
	}
}

var func_302(var uParam0, int iParam1)
{
	var uVar0;

	uParam0->f_2 = iParam1;
	uVar0 = DATAFILE::_DATAFILE_GET_NUM_NODES(uParam0);
	return uVar0;
}

int func_303(var uParam0, int iParam1)
{
	bool bVar0;

	uParam0->f_2 = iParam1;
	bVar0 = DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
	if (bVar0)
	{
		return 1;
	}
	return 0;
}

int func_304(var uParam0, int iParam1, var uParam2)
{
	bool bVar0;

	uParam0->f_2 = iParam1;
	bVar0 = DATAFILE::_DATAFILE_GET_STRING(uParam2, uParam0);
	if (bVar0)
	{
		return 1;
	}
	return 0;
}

int func_305(var uParam0, int iParam1, bool bParam2)
{
	bool bVar0;

	uParam0->f_2 = iParam1;
	bVar0 = DATAFILE::_DATAFILE_GET_BOOL(bParam2, uParam0);
	if (bVar0)
	{
		return 1;
	}
	return 0;
}

void func_306(var uParam0, int iParam1)
{
	uParam0->f_4 = (uParam0->f_4 || iParam1);
}

int func_307(var uParam0, int iParam1, var uParam2)
{
	bool bVar0;

	uParam0->f_2 = iParam1;
	bVar0 = DATAFILE::_DATAFILE_GET_INT(uParam2, uParam0);
	if (bVar0)
	{
		return 1;
	}
	return 0;
}

bool func_308(int iParam0)
{
	if (iParam0 == 255)
	{
		return (Global_1109400->f_4[Global_1109913[24 /*2*/]] && ((*Global_1109913)[24 /*2*/])->f_1) == ((*Global_1109913)[24 /*2*/])->f_1;
	}
	return func_393(24, iParam0);
}

bool func_309(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319->f_17370;
	}
	return (Global_1914319->f_17370 || Global_1914319->f_18996.f_1);
}

int func_310()
{
	if (func_48() == 0)
	{
		return 0;
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_GameIntro") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Mission_EndCredits"))
	{
		return 1;
	}
	if ((GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerRPGCore") && func_311(((*Global_1835011)[23 /*74*/])->f_1)) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerHealthPoorCS"))
	{
		return 1;
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerSickDoctorsOpinion"))
	{
		return 1;
	}
	if ((((((GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChapterTitle_IntroCh01") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChapterTitle_IntroCh02")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChapterTitle_IntroCh04")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChapterTitle_IntroCh05")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChapterTitle_IntroCh06")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChapterTitle_IntroCh08Epi01")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChapterTitle_IntroCh09Epi02"))
	{
		return 1;
	}
	if (((((((((((((((((((GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewDaysLater") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewDaysLater_onblack")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewHoursLater")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewHoursLater_onblack")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewMonthsLater")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewMonthsLater_onblack")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewWeeksLater")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewWeeksLater_onblack")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_coupledayslater")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_coupledayslater_onblack")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_couplemonthslater")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_couplemonthslater_onblack")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_coupleweekslater")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_coupleweekslater_onblack")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_daylater")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_daylater_onblack")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_somedaysLater")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_somedaysLater_onblack")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_someyearsLater")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_someyearsLater_onblack"))
	{
		return 1;
	}
	return 0;
}

bool func_311(int iParam0)
{
	int iVar0;

	iVar0 = func_394(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_312(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_313()
{
	int iVar0;

	if (func_48() == -1)
	{
		if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(5))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (((*Global_1392915)[iVar0 /*12*/])->f_1 != -1)
				{
					if (func_311(((*Global_1392915)[iVar0 /*12*/])->f_4))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		return 0;
	}
	return 0;
}

int func_314(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = Global_1225638->f_10;
	}
	return Global_262777[iParam0 /*74*/];
}

bool func_315(int iParam0, int iParam1)
{
	return (((*Global_262777)[iParam0 /*74*/])->f_72 && iParam1) != 0;
}

bool func_316(int iParam0)
{
	return (Global_262148 && iParam0) != 0;
}

void func_317(var uParam0)
{
	func_395(uParam0, 0f);
}

bool func_318(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_319(var uParam0)
{
	return func_318(*uParam0, 2);
}

float func_320()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_321(int iParam0)
{
	struct<22> Var0;
	int iVar22;
	char* sVar23;
	struct<44> Var24;
	int iVar68;
	int iVar69;
	char* sVar70;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 22))
	{
		return;
	}
	if (func_48() != -1 && !func_396())
	{
		return;
	}
	iVar22 = NETWORK::_0x27B1AE4D8C652F08(Var0.f_15);
	if (iVar22 == -1)
	{
		return;
	}
	if (func_338(Var0, 131072))
	{
		func_397(Var0.f_15);
		func_250(0);
		func_335(8);
		NETWORK::_0x981146E5C9CE9250(iVar22);
		func_398(0);
	}
	sVar23 = func_337(NETWORK::_0xE59F4924BD3A718D(iVar22), 636925055);
	Var24 = 1;
	Var24.f_1 = 1;
	Var24.f_2 = joaat("COLOR_WHITE");
	Var24.f_4 = -1;
	Var24.f_5 = -1134602452;
	Var24.f_6 = 1276832712;
	Var24.f_12 = joaat("COLOR_WHITE");
	Var24.f_13 = joaat("COLOR_WHITE");
	Var24.f_16 = 300;
	Var24.f_21 = 1;
	Var24.f_25.f_1 = 1;
	Var24.f_25.f_9 = joaat("COLOR_WHITE");
	Var24.f_25.f_10 = 8000;
	Var24.f_25.f_11 = 1511356879;
	Var24.f_25.f_18 = 1;
	Var24.f_17 = 1;
	Var24.f_18 = Var0.f_15;
	Var24.f_10 = sVar23;
	Var24.f_14 = 590634476;
	Var24.f_15 = -2010498407;
	Var24.f_24 = NETWORK::_0x9C725D149622BFDE(0);
	Var24.f_23 = "IB_GAMERCARD";
	Var24.f_22 = 2;
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Var0.f_17)))
	{
		Var24.f_11 = MISC::_CREATE_VAR_STRING(42, "NT_INV_BODY_INFO", func_337(&(Var0.f_7), joaat("COLOR_PURE_WHITE")), "LANDING_FREEROAM_TITLE");
		Var24.f_25.f_3 = MISC::_CREATE_VAR_STRING(2, "NT_INV_FM_CONTENT");
		Var24.f_25.f_4 = MISC::_CREATE_VAR_STRING(2, "NM_TI_VIEW_INVITE");
	}
	else if (func_48() != -1)
	{
		iVar68 = func_399(MISC::GET_HASH_KEY(&(Var0.f_17)));
		if (iVar68 != -1)
		{
			iVar69 = (Global_265238->f_4[iVar68 /*62*/])->f_42;
			if (iVar69 == -504335712)
			{
				Var24.f_25.f_3 = MISC::_CREATE_VAR_STRING(2, "NT_INV_MP_PLAYER_JOIN");
				Var24.f_25.f_4 = MISC::_CREATE_VAR_STRING(2, "NM_TI_VIEW_INVITE");
				sVar70 = MISC::_CREATE_VAR_STRING(2, func_400((Global_265238->f_4[iVar68 /*62*/])->f_44));
			}
			else if (iVar69 == 395262693)
			{
				Var24.f_25.f_3 = MISC::_CREATE_VAR_STRING(2, "NM_TI_VIEW_INVITE_DEATHMATCH");
				Var24.f_25.f_4 = MISC::_CREATE_VAR_STRING(2, "NM_TI_VIEW_INVITE");
				sVar70 = MISC::_CREATE_VAR_STRING(2, func_401((Global_265238->f_4[iVar68 /*62*/])->f_44));
			}
			else if (iVar69 == -933924539)
			{
				Var24.f_25.f_3 = MISC::_CREATE_VAR_STRING(2, "NM_TI_VIEW_INVITE_RACE");
				Var24.f_25.f_4 = MISC::_CREATE_VAR_STRING(2, "NM_TI_VIEW_INVITE");
				sVar70 = MISC::_CREATE_VAR_STRING(2, func_402((Global_265238->f_4[iVar68 /*62*/])->f_44));
			}
			Var24.f_11 = MISC::_CREATE_VAR_STRING(10, "NT_INV_RCV_BODY_INFO", sVar70);
		}
	}
	else
	{
		Var24.f_11 = MISC::_CREATE_VAR_STRING(42, "NT_INV_BODY_INFO", func_337(&(Var0.f_7), joaat("COLOR_PURE_WHITE")), "PRES_SET_MODE_MP");
		Var24.f_25.f_3 = MISC::_CREATE_VAR_STRING(2, "NT_INV_MP_PLAYER_JOIN");
		Var24.f_25.f_4 = MISC::_CREATE_VAR_STRING(2, "NM_TI_VIEW_INVITE");
	}
	Var24.f_25.f_2 = sVar23;
	Var24.f_25.f_5 = 1700592256;
	Var24.f_25.f_6 = 1434360011;
	Var24.f_25.f_14 = "HUD_Toast_Soundset";
	Var24.f_25.f_15 = "Toast_On";
	Var24.f_16 = Global_1899378->f_2.f_16;
	func_403(Var24);
}

void func_322(int iParam0)
{
	var uVar0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &uVar0, 16))
	{
		return;
	}
	if (func_404())
	{
		func_405(&uVar0);
		return;
	}
	if (func_48() != -1 && !func_396())
	{
		func_340(2);
		func_251(17);
		return;
	}
	func_405(&uVar0);
	func_406(&uVar0);
	func_250(4);
	func_398(0);
	func_224(1);
}

void func_323(int iParam0)
{
	int iVar0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar0, 2))
	{
		return;
	}
	func_407(1, iVar0);
	func_408(&iVar0);
}

void func_324(int iParam0)
{
	struct<9> Var0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 9))
	{
		return;
	}
	if (func_404() && !func_342(16384))
	{
		NETWORK::_0xA4484173759749B1();
		func_409(&Var0);
		return;
	}
	if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var0))
	{
		NETWORK::_0xA4484173759749B1();
		func_340(64);
		return;
	}
	if (func_48() != -1 && !func_396())
	{
		func_340(2);
		func_251(17);
		NETWORK::_0xA4484173759749B1();
		return;
	}
	if (!func_346())
	{
		func_335(4);
		return;
	}
	func_409(&Var0);
	func_410(&Var0);
	if (func_411(Var0, 2))
	{
		func_250(3);
	}
	else
	{
		func_250(2);
	}
	NETWORK::_0xD3A3C8B9F3BDEF81();
	func_343(16384);
	func_398(0);
}

void func_325(int iParam0)
{
	struct<16> Var0;
	struct<7> Var17;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 17))
	{
		return;
	}
	Var17 = { func_381(PLAYER::PLAYER_ID()) };
	if (func_264(Var0.f_15, 2) || func_264(Var0.f_15, 1))
	{
		if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Var0, &Var17) && !func_404())
		{
			return;
		}
	}
	else if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Var0.f_7), &Var17) && !func_404())
	{
		return;
	}
	if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Var0, &Var17) && Var0.f_16 == 4)
	{
		return;
	}
	if (func_264(Var0.f_16, 4194304))
	{
		func_335(4);
		func_335(16384);
		func_251(17);
	}
	Global_1572887->f_164.f_84 = Var0.f_16;
	Global_1572887->f_164.f_65 = { Var0 };
	Global_1572887->f_164.f_72 = { Var0.f_7 };
	Global_1572887->f_164.f_85 = Var0.f_15;
}

void func_326()
{
	if (MISC::IS_ORBIS_VERSION())
	{
		Global_1572887->f_164.f_63 = NETWORK::_0x74FB3E29E6D10FA9();
	}
}

void func_327(int iParam0)
{
	struct<8> Var0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 16))
	{
		return;
	}
	func_340(16);
	Global_1572887->f_164.f_83 = 3;
	Global_1572887->f_164.f_65 = { Var0 };
	Global_1572887->f_164.f_72 = { Var0.f_7 };
}

void func_328(int iParam0)
{
	struct<8> Var0;
	struct<7> Var17;
	bool bVar24;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 17))
	{
		return;
	}
	Var17 = { func_381(PLAYER::PLAYER_ID()) };
	bVar24 = NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Var0, &Var17);
	if (func_264(Var0.f_16, 8) && bVar24)
	{
		return;
	}
	func_412(&Var0);
	Global_1572887->f_164.f_83 = Var0.f_15;
	Global_1572887->f_164.f_65 = { Var0 };
	Global_1572887->f_164.f_72 = { Var0.f_7 };
	if (Global_1572887->f_164.f_83 > 2 && !func_329())
	{
		Global_1572887->f_164.f_83 = 0;
	}
	else if (Global_1572887->f_164.f_83 == 2 && bVar24)
	{
		Global_1572887->f_164.f_83 = 0;
	}
}

int func_329()
{
	struct<7> Var0;
	bool bVar7;
	struct<7> Var8;
	bool bVar15;
	bool bVar16;
	struct<7> Var17;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	bool bVar27;
	bool bVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;
	bool bVar32;
	bool bVar33;

	if (Global_1572887->f_164.f_62 != 0)
	{
		return 1;
	}
	if (Global_1572887->f_164.f_63 != -1)
	{
		return 1;
	}
	if (Global_1572887->f_164.f_83 > 2)
	{
		Var0 = { func_381(PLAYER::PLAYER_ID()) };
		bVar7 = NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1572887->f_164.f_72), &Var0);
		Var8 = { func_381(_NAMESPACE26::_0x4BE6C13A45CCA8EC(Global_1225638->f_14)) };
		bVar15 = NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1572887->f_164.f_72), &Var8);
		bVar16 = (bVar7 || bVar15);
		if (func_264(Global_1572887->f_164.f_83, 3))
		{
			return bVar16;
		}
		if (func_264(Global_1572887->f_164.f_83, 4))
		{
			return bVar16;
		}
		if (func_264(Global_1572887->f_164.f_83, 5))
		{
			return bVar16;
		}
		if (func_264(Global_1572887->f_164.f_83, 6))
		{
			return bVar16;
		}
		if (func_264(Global_1572887->f_164.f_83, 7))
		{
			return bVar16;
		}
		if (func_264(Global_1572887->f_164.f_83, 8))
		{
			return bVar16;
		}
		if (func_264(Global_1572887->f_164.f_83, 9))
		{
			return bVar16;
		}
		if (func_264(Global_1572887->f_164.f_83, 10))
		{
			return bVar16;
		}
		if (func_264(Global_1572887->f_164.f_83, 11))
		{
			return 0;
		}
		if (func_264(Global_1572887->f_164.f_83, 12))
		{
			return bVar16;
		}
		if (func_264(Global_1572887->f_164.f_83, 13))
		{
			return bVar16;
		}
		if (func_264(Global_1572887->f_164.f_83, 14))
		{
			return bVar16;
		}
		if (func_264(Global_1572887->f_164.f_83, 15))
		{
			return bVar16;
		}
		if (func_264(Global_1572887->f_164.f_83, 16))
		{
			return bVar16;
		}
		if (func_264(Global_1572887->f_164.f_83, 17))
		{
			return 0;
		}
		if (func_264(Global_1572887->f_164.f_83, 18))
		{
			return bVar16;
		}
		if (func_264(Global_1572887->f_164.f_83, 19))
		{
			return bVar16;
		}
		if (func_264(Global_1572887->f_164.f_83, 20))
		{
			return bVar16;
		}
		if (func_264(Global_1572887->f_164.f_83, 21))
		{
			return bVar16;
		}
		if (func_264(Global_1572887->f_164.f_83, 22))
		{
			return bVar16;
		}
		if (func_264(Global_1572887->f_164.f_83, 23))
		{
			return bVar16;
		}
		if (func_264(Global_1572887->f_164.f_83, 24))
		{
			return bVar16;
		}
	}
	if (Global_1572887->f_164.f_84 != 0)
	{
		Var17 = { func_381(PLAYER::PLAYER_ID()) };
		bVar24 = NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1572887->f_164.f_72), &Var17);
		bVar25 = false;
		if (Global_1572887->f_164 > 0)
		{
			bVar25 = true;
		}
		bVar26 = !func_264(Global_1572887->f_164.f_85, 524288);
		bVar27 = !func_264(Global_1572887->f_164.f_85, 2);
		bVar28 = func_264(Global_1572887->f_164.f_85, 2);
		bVar29 = func_264(Global_1572887->f_164.f_85, 1);
		bVar30 = MISC::IS_DURANGO_VERSION();
		bVar31 = (bVar24 && (bVar25 || bVar29));
		bVar32 = (bVar31 && !bVar30);
		bVar33 = ((bVar26 && bVar27) && !bVar24);
		if (func_264(Global_1572887->f_164.f_84, 1))
		{
			return bVar31;
		}
		if (func_264(Global_1572887->f_164.f_84, 2))
		{
			return bVar31;
		}
		if (func_264(Global_1572887->f_164.f_84, 4))
		{
			return bVar31;
		}
		if (func_264(Global_1572887->f_164.f_84, 32))
		{
			return (bVar31 || bVar33);
		}
		if (func_264(Global_1572887->f_164.f_84, 64))
		{
			return bVar31;
		}
		if (func_264(Global_1572887->f_164.f_84, 8))
		{
			return bVar31;
		}
		if (func_264(Global_1572887->f_164.f_84, 16))
		{
			return bVar31;
		}
		if (func_264(Global_1572887->f_164.f_84, 128))
		{
			return bVar31;
		}
		if (func_264(Global_1572887->f_164.f_84, 512))
		{
			return bVar31;
		}
		if (func_264(Global_1572887->f_164.f_84, 8388608))
		{
			return bVar31;
		}
		if (func_264(Global_1572887->f_164.f_84, 1024))
		{
			return bVar32;
		}
		if (func_264(Global_1572887->f_164.f_84, 2048))
		{
			return bVar32;
		}
		if (func_264(Global_1572887->f_164.f_84, 4096))
		{
			return (bVar33 || bVar33);
		}
		if (func_264(Global_1572887->f_164.f_84, 8192))
		{
			return bVar31;
		}
		if (func_264(Global_1572887->f_164.f_84, 16384))
		{
			return bVar31;
		}
		if (func_264(Global_1572887->f_164.f_84, 32768))
		{
			return (bVar31 || bVar33);
		}
		if (func_264(Global_1572887->f_164.f_84, 65536))
		{
			return bVar31;
		}
		if (func_264(Global_1572887->f_164.f_84, 262144))
		{
			return bVar31;
		}
		if (func_264(Global_1572887->f_164.f_84, 524288))
		{
			return bVar31;
		}
		if (func_264(Global_1572887->f_164.f_84, 2097152))
		{
			return bVar31;
		}
		if (func_264(Global_1572887->f_164.f_84, 4194304))
		{
			return 0;
		}
		if (func_264(Global_1572887->f_164.f_84, 256))
		{
			return 0;
		}
		if (func_264(Global_1572887->f_164.f_84, 1048576))
		{
			return (bVar31 && bVar28);
		}
		if (func_264(Global_1572887->f_164.f_84, 131072))
		{
			return 0;
		}
	}
	return 0;
}

void func_330(int iParam0)
{
	Global_1572887->f_164.f_81 = iParam0;
}

bool func_331(int iParam0)
{
	return func_264(Global_1572887->f_164.f_62, iParam0);
}

char* func_332()
{
	struct<7> Var0;
	bool bVar7;
	bool bVar8;
	char cVar9[64];

	Var0 = { func_381(PLAYER::PLAYER_ID()) };
	bVar7 = (Global_1572887->f_164.f_1 == 3 || Global_1572887->f_164.f_1 == 1);
	bVar8 = false;
	if (NETWORK::NETWORK_IS_HANDLE_VALID(&(Global_1572887->f_164.f_65)) && NETWORK::NETWORK_IS_HANDLE_VALID(&Var0))
	{
		bVar8 = NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1572887->f_164.f_65), &Var0);
	}
	if (func_331(1))
	{
		return "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_TARGET";
	}
	if (func_331(2))
	{
		return "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_JOINER";
	}
	if (func_331(4))
	{
		return "NT_INV_INCOMPATIBLE_LOBBY_LOAD_FAILURE";
	}
	if (func_331(16))
	{
		return "NT_INV_INCOMPATIBLE_TIMEOUT";
	}
	if (func_331(32))
	{
		return "NT_INV_INCOMPATIBLE_NOT_IN_SESSION";
	}
	if (func_331(8))
	{
		return "NT_INV_INCOMPATIBLE_INVITER_VANISHED";
	}
	if (func_331(64))
	{
		return "NT_INV_INCOMPATIBLE_ALREADY_IN_SESSION";
	}
	if (func_331(128))
	{
		return func_413(bVar7, "NT_INV_LEAVE_WARNING_JIP", "NT_INV_LEAVE_WARNING");
	}
	if (func_331(256))
	{
		return func_413(bVar7, "NT_INV_LEAVE_WARNING_POSSE_JIP", "NT_INV_LEAVE_WARNING_POSSE");
	}
	if (func_264(Global_1572887->f_164.f_84, 1))
	{
		return "NT_INV_INCOMPATIBLE_MULTIPLAYER_LOCKED";
	}
	if (func_264(Global_1572887->f_164.f_84, 1024))
	{
		return "NT_INV_INCOMPATIBLE_MULTIPLAYER_PRIVILEGE";
	}
	if (func_264(Global_1572887->f_164.f_84, 2048))
	{
		return "NT_INV_INCOMPATIBLE_USER_CONTENT_PRIVILEGE";
	}
	if (func_264(Global_1572887->f_164.f_84, 4096))
	{
		return "NT_INV_INCOMPATIBLE_COMMUNICATION_PRIVILEGE";
	}
	if (func_264(Global_1572887->f_164.f_84, 8192))
	{
		return "NT_INV_INCOMPATIBLE_INACTIVE_PRIVILEGE";
	}
	if (func_264(Global_1572887->f_164.f_84, 16384))
	{
		return "NT_INV_INCOMPATIBLE_USER_CONTENT_PRIVILEGE_REMOTE";
	}
	if (func_264(Global_1572887->f_164.f_84, 512))
	{
		return "NT_INV_INCOMPATIBLE";
	}
	if (func_264(Global_1572887->f_164.f_84, 8388608))
	{
		return "NT_INV_AIM";
	}
	if (func_264(Global_1572887->f_164.f_84, 2))
	{
		return "NT_INV_INCOMPATIBLE_LOCAL_NOT_IN_MULTIPLAYER";
	}
	if (func_264(Global_1572887->f_164.f_84, 4))
	{
		return "NT_INV_INCOMPATIBLE_NOT_IN_SESSION";
	}
	if (func_264(Global_1572887->f_164.f_84, 8))
	{
		return "NT_INV_POLICIES_NEED_ACCEPTING";
	}
	if (func_264(Global_1572887->f_164.f_84, 16))
	{
		return "NT_INV_POLICIES_DOWNLOAD_FAILED";
	}
	if (func_264(Global_1572887->f_164.f_84, 32))
	{
		return func_413(bVar8, "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_TARGET", "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_JOINER");
	}
	if (func_264(Global_1572887->f_164.f_84, 64))
	{
		return func_413(bVar7, "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_JOINING_PLAYER", "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_JOINER");
	}
	if (func_264(Global_1572887->f_164.f_84, 128))
	{
		return "NT_INV_INCOMPATIBLE_JOIN_TO_LOCAL";
	}
	if (func_264(Global_1572887->f_164.f_84, 32768))
	{
		return func_413(bVar8, "NT_INV_INCOMPATIBLE_REP_TARGET", "NT_INV_INCOMPATIBLE_REP_JOINER");
	}
	if (func_264(Global_1572887->f_164.f_84, 65536))
	{
		return func_413(bVar7, "NT_INV_IN_SESSION", "NT_INV_INCOMPATIBLE_ALREADY_IN_SESSION");
	}
	if (func_264(Global_1572887->f_164.f_84, 262144))
	{
		return "NT_INV_INCOMPATIBLE_NOT_FRIENDS";
	}
	if (func_264(Global_1572887->f_164.f_84, 524288))
	{
		return "NT_INV_INCOMPATIBLE_PRIVATE_SESSION";
	}
	if (func_264(Global_1572887->f_164.f_84, 2097152))
	{
		return "NT_INV_INCOMPATIBLE_IN_PUBLIC_POKER";
	}
	if (func_264(Global_1572887->f_164.f_84, 4194304))
	{
	}
	if (func_264(Global_1572887->f_164.f_84, 256))
	{
	}
	if (func_264(Global_1572887->f_164.f_84, 1048576))
	{
		return "NT_INV_INCOMPATIBLE_BLOCKED_BY_JOIN_TARGET";
	}
	if (func_264(Global_1572887->f_164.f_84, 131072))
	{
	}
	if (Global_1572887->f_164.f_83 == 3)
	{
		return "NT_INV_INCOMPATIBLE_TIMEOUT_RESULT";
	}
	if (Global_1572887->f_164.f_83 == 4)
	{
		return "NT_INV_INCOMPATIBLE_ALREADY_IN_SESSION";
	}
	if (Global_1572887->f_164.f_83 == 5)
	{
		return "NT_INV_INCOMPATIBLE_INVITES_DISABLED";
	}
	if (Global_1572887->f_164.f_83 == 6)
	{
		return "NT_INV_INCOMPATIBLE_INVITES_DISABLED";
	}
	if (Global_1572887->f_164.f_83 == 7)
	{
		return "NT_INV_INCOMPATIBLE_DISCRIMINATOR";
	}
	if (Global_1572887->f_164.f_83 == 8)
	{
		return "NT_INV_INCOMPATIBLE_INSTANCED";
	}
	if (Global_1572887->f_164.f_83 == 9)
	{
		return "NT_INV_INCOMPATIBLE_VALIDATION_INVITEE";
	}
	if (Global_1572887->f_164.f_83 == 10)
	{
		return "NT_INV_INCOMPATIBLE_PRIVATE_SESSION";
	}
	if (Global_1572887->f_164.f_83 == 11)
	{
	}
	if (Global_1572887->f_164.f_83 == 12)
	{
		return "NT_INV_INCOMPATIBLE_INVITES_BLOCKED";
	}
	if (Global_1572887->f_164.f_83 == 13)
	{
		return "NT_INV_INCOMPATIBLE_JOIN_BLOCKED";
	}
	if (Global_1572887->f_164.f_83 == 14)
	{
		return "NT_INV_INCOMPATIBLE_HOST_INVITES_ONLY";
	}
	if (Global_1572887->f_164.f_83 == 15)
	{
		return "NT_INV_FAILED_SESSION_FULL";
	}
	if (Global_1572887->f_164.f_83 == 16)
	{
		return "NT_INV_FAILED_INVITER_CLEANED_UP";
	}
	if (Global_1572887->f_164.f_83 == 17)
	{
	}
	if (Global_1572887->f_164.f_83 == 18)
	{
		return "NT_INV_FAILED_NO_LONGER_IN_GANG";
	}
	if (Global_1572887->f_164.f_83 == 19)
	{
		return "NT_INV_FAILED_ADD_TO_GANG";
	}
	if (Global_1572887->f_164.f_83 == 20)
	{
		return "NT_INV_FAILED_GANG_CHANGED";
	}
	if (Global_1572887->f_164.f_83 == 21)
	{
		return "NT_INV_FAILED_SESSION_SWITCH";
	}
	if (Global_1572887->f_164.f_83 == 22)
	{
		return "NT_INV_FAILED_SESSION_SWITCH";
	}
	if (Global_1572887->f_164.f_83 == 23)
	{
		return "NT_INV_FAILED_SESSION_SWITCH";
	}
	if (Global_1572887->f_164.f_83 == 24)
	{
		return "NT_INV_FAILED_SESSION_SWITCH";
	}
	if (Global_1572887->f_164.f_83 == 25)
	{
		return "NT_INV_FAILED_SESSION_SWITCH";
	}
	if (Global_1572887->f_164.f_63 == 0)
	{
		return "NT_INV_INCOMPATIBLE_REASON_OTHER";
	}
	if (Global_1572887->f_164.f_63 == 1)
	{
		return "NT_INV_INCOMPATIBLE_REASON_SYSTEM_UPDATE";
	}
	if (Global_1572887->f_164.f_63 == 2)
	{
		return "NT_INV_INCOMPATIBLE_REASON_GAME_UPDATE";
	}
	if (Global_1572887->f_164.f_63 == 3)
	{
		return "NT_INV_INCOMPATIBLE_REASON_SIGNED_OUT";
	}
	if (Global_1572887->f_164.f_63 == 4)
	{
		return "NT_INV_INCOMPATIBLE_AGE";
	}
	if (Global_1572887->f_164.f_63 == 5)
	{
		return "NT_INV_INCOMPATIBLE_REASON_CONNECTION";
	}
	StringCopy(&cVar9, "NetInvUnkErr-", 64);
	StringConCat(&cVar9, "eUIFlags=", 64);
	StringIntConCat(&cVar9, Global_1572887->f_164.f_62, 64);
	StringConCat(&cVar9, ",eResponseFlags=", 64);
	StringIntConCat(&cVar9, Global_1572887->f_164.f_84, 64);
	StringConCat(&cVar9, ",nResult=", 64);
	StringIntConCat(&cVar9, Global_1572887->f_164.f_83, 64);
	return func_414(&cVar9, joaat("COLOR_PURE_WHITE"));
}

void func_333(bool bParam0)
{
	if (((bParam0 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && !NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION()) && !func_342(1))
	{
		NETWORK::NETWORK_START_SOLO_TUTORIAL_SESSION();
		func_335(1);
	}
	else if (((!bParam0 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION()) && func_342(1))
	{
		NETWORK::NETWORK_END_TUTORIAL_SESSION();
		func_343(1);
	}
}

int func_334()
{
	return Global_1051081->f_11;
}

void func_335(int iParam0)
{
	func_383(&(Global_1572887->f_164.f_61), iParam0);
}

bool func_336(int iParam0)
{
	return func_393(1, iParam0);
}

char* func_337(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_415(MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

bool func_338(struct<17> Param0, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, int iParam22)
{
	return func_264(Param0.f_16, iParam22);
}

bool func_339()
{
	return Global_1898164->f_163;
}

void func_340(int iParam0)
{
	func_383(&(Global_1572887->f_164.f_62), iParam0);
}

bool func_341()
{
	return (MISC::GET_GAME_TIMER() - Global_1572887->f_164.f_60) > Global_1899378->f_2.f_15;
}

bool func_342(int iParam0)
{
	return func_264(Global_1572887->f_164.f_61, iParam0);
}

void func_343(int iParam0)
{
	func_416(&(Global_1572887->f_164.f_61), iParam0);
}

void func_344()
{
	Global_1572887->f_164.f_87 = 0;
}

struct<22> func_345()
{
	return Global_1572887->f_164.f_27;
}

int func_346()
{
	var uVar0;

	if (!NETWORK::_0x2A8112A974DE1EF6())
	{
		return 0;
	}
	if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return 0;
	}
	if (!NETWORK::NETWORK_CAN_ACCESS_MULTIPLAYER(&uVar0))
	{
		return 0;
	}
	return 1;
}

void func_347()
{
	func_63(64);
	func_65(joaat("freeroam"), 1024);
	func_20(3);
	CAM::DO_SCREEN_FADE_OUT(0);
}

int func_348()
{
	if (Global_1572887->f_12 == -1)
	{
		return 0;
	}
	return Global_1058888->f_4;
}

int func_349()
{
	return Global_1572887->f_164.f_1;
}

int func_350()
{
	if (func_341())
	{
		func_340(16);
		return 2;
	}
	if (!func_396())
	{
		func_340(2);
		return 2;
	}
	return func_417();
}

void func_351(bool bParam0)
{
	if (func_418())
	{
		Global_1357509 = 1;
	}
	if (func_419(-92416669))
	{
	}
	if (bParam0 && Global_1935630->f_44 == joaat("weapon_kit_camera"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
		Global_1935630->f_44 = joaat("weapon_unarmed");
	}
}

void func_352()
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PED::GET_MOUNT(iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		TASK::TASK_DISMOUNT_ANIMAL(iVar0, 0, 0, 0, 0, 0);
	}
}

void func_353(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_420(iParam0);
	if (!func_421(1))
	{
		return;
	}
	if (bParam1)
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_422(128) && !func_423(18))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_424() == 4)
	{
		func_425(17);
	}
	func_426(512);
}

void func_354(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		if (bParam0)
		{
			HUD::_0x4CC5F2FC1332577F(128623374);
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
		}
		else
		{
			HUD::_0x8BC7C1F929D07BF3(128623374);
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
		}
	}
}

void func_355()
{
	if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(1) && func_427(32768))
	{
		return;
	}
	PED::_0xAB0D553FE20A6E25(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	POPULATION::_0xF45E46DEECF7DF6E(0, 0, 0, -1, -1);
	PED::_0xC0258742B034DFAF(0f);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_DISABLE_RANDOM_TRAINS_THIS_FRAME(true);
}

void func_356()
{
	int iVar0;

	iVar0 = MISC::GET_HASH_KEY("net_ugc_end_flow");
	SCRIPTS::_0x7423F7835770F619(iVar0);
	iVar0 = MISC::GET_HASH_KEY("mc_transition_results");
	SCRIPTS::_0x7423F7835770F619(iVar0);
	iVar0 = MISC::GET_HASH_KEY("mc_transition_cutscene");
	SCRIPTS::_0x7423F7835770F619(iVar0);
	iVar0 = MISC::GET_HASH_KEY("net_mc_vs_mission_intro");
	SCRIPTS::_0x7423F7835770F619(iVar0);
}

struct<9> func_357()
{
	return Global_1572887->f_164.f_2;
}

struct<16> func_358()
{
	return Global_1572887->f_164.f_11;
}

void func_359(vector3 vParam0)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	vector3 vVar5;

	vVar2 = { vParam0 };
	iVar0 = func_428(vParam0);
	if (iVar0 != -1)
	{
		uVar1 = ((*Global_1888801)[iVar0 /*35*/])->f_4;
		if (VOLUME::_DOES_VOLUME_EXIST(uVar1))
		{
			vVar2 = { VOLUME::_0xF70F00013A62F866(uVar1) };
		}
	}
	vVar5.x = MISC::GET_RANDOM_FLOAT_IN_RANGE(-3f, 3f);
	vVar5.f_1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-3f, 3f);
	vVar2 = { vVar2 + vVar5 };
	vParam0 = { vParam0 + vVar5 };
	func_429(vVar2, 0f, vParam0, 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 1, 1, 1);
	func_430(0);
}

void func_360(int iParam0)
{
	Global_1572887->f_164.f_59 = iParam0;
}

int func_361()
{
	if (Global_1572887->f_12 == -1)
	{
		return 0;
	}
	return Global_1058888->f_3;
}

int func_362()
{
	if (Global_1572887->f_12 == -1)
	{
		return 0;
	}
	return Global_1058888->f_5;
}

int func_363()
{
	return &Global_262150;
}

void func_364(bool bParam0)
{
	if (!bParam0)
	{
		func_425(18);
	}
	else
	{
		func_431(18);
	}
}

int func_365()
{
	return Global_1572887->f_164.f_64;
}

int func_366(int iParam0)
{
	return iParam0 & 31;
}

int func_367()
{
	struct<10> Var0;
	int iVar10;
	int iVar11;

	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0 = { func_432() };
	iVar10 = func_433();
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar10))
	{
		iVar11 = iVar10;
		Var0 = func_434(iVar11);
		Var0.f_1 = func_435(iVar11);
		Var0.f_2 = func_436(iVar11);
		Var0.f_3 = func_437(iVar11);
		Var0.f_4 = func_438(iVar11);
	}
	if (!Var0)
	{
		return 0;
	}
	switch (Var0.f_1)
	{
		case 2:
			if (func_315(iVar10, 4096))
			{
				return 0;
			}
			break;
	}
	func_439(Var0.f_1, Var0.f_2, Var0.f_3, Var0.f_4, 0);
	return 1;
}

void func_368()
{
	Global_1572887->f_164.f_87 = 1;
}

int func_369(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (Global_262777[iVar0 /*74*/] <= 0)
	{
		return 0;
	}
	if (Global_262777[iVar0 /*74*/] > 2)
	{
		return 0;
	}
	if (&Global_1051043 != -1)
	{
		if (iParam0 != &Global_1051043)
		{
			return 0;
		}
	}
	if (!bParam1 && func_440(0) == 1)
	{
		return 0;
	}
	if (func_441(255))
	{
		return 0;
	}
	if (NETWORK::_0x255A5EF65EDA9167(((*Global_262777)[iVar0 /*74*/])->f_1) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(((*Global_262777)[iVar0 /*74*/])->f_1))
	{
		return 0;
	}
	if (((*Global_262777)[iVar0 /*74*/])->f_1.f_16 == 0)
	{
		return 1;
	}
	return 0;
}

struct<70> func_370(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = Global_1225638->f_10;
	}
	return ((*Global_262777)[iParam0 /*74*/])->f_1;
}

int func_371(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	bool bVar5;

	uVar0 = func_442(iParam0, iParam1);
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (!SCRIPTS::_0x72B2E00C9BAC6789(&uVar0, iVar2))
		{
		}
		else
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (func_314(iVar1) == 0)
			{
				return 1;
			}
		}
		iVar2++;
	}
	uVar3 = func_443(uVar0, 8192);
	uVar4 = func_443(uVar0, 65536);
	bVar5 = func_443(uVar0, 4096);
	if ((uVar3 || uVar4) && !bVar5)
	{
		return 2;
	}
	return 3;
}

void func_372(int iParam0)
{
	((*Global_262777)[&Global_1225638 /*74*/])->f_72 = (((*Global_262777)[&Global_1225638 /*74*/])->f_72 || iParam0);
}

int func_373(int iParam0)
{
	int iVar0;

	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	if (!func_369(((*Global_262777)[iParam0 /*74*/])->f_1.f_60, func_444(&(((*Global_262777)[iParam0 /*74*/])->f_1), 32768)))
	{
		return 0;
	}
	if (func_445(&(((*Global_262777)[iParam0 /*74*/])->f_1)))
	{
		return 0;
	}
	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	((*Global_262777)[iVar0 /*74*/])->f_1 = iParam0;
	((*Global_262777)[iVar0 /*74*/])->f_1.f_19 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	NETWORK::_0x5A91BCEF74944E93(iParam0, 30f);
	return 1;
}

void func_374(int iParam0)
{
	int iVar0;

	POSSE::_0xC08AFF658B2E51DA(&iVar0);
	if (iVar0 != 0)
	{
		POSSE::_0xC08BFF658B2E51DA(0);
	}
	_NAMESPACE26::_0x0A04A07BC3074EDB(iParam0);
}

int func_375()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	var uVar7;
	vector3 vVar8;
	float fVar11;

	iVar0 = PLAYER::GET_PLAYER_PED(Global_1572887->f_164.f_59);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
	vVar1.f_2 = PATHFIND::_GET_HEIGHTMAP_BOTTOM_Z_FOR_POSITION(vVar1.x, vVar1.y);
	vVar4 = { vVar1 };
	vVar4.f_2 = (vVar4.z + 7f);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar7, 0))
	{
		vVar1.f_2 = uVar7;
	}
	fVar11 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
	if (!func_446(&vVar8, &fVar11, 0))
	{
		vVar8 = { (Global_1058888->f_43923.f_283[MISC::GET_RANDOM_INT_IN_RANGE(0, 16) /*306*/])->f_2 };
	}
	func_429(vVar1, fVar11, vVar8, fVar11, 5f, 20f, 1, 1, 1, 1);
	return 1;
}

int func_376()
{
	if (func_447())
	{
		return 1;
	}
	if (Global_1572887->f_164.f_81 == 0)
	{
		return 0;
	}
	if (func_365() != 2)
	{
		return 0;
	}
	if (Global_1572887->f_164.f_83 != 2)
	{
		return 0;
	}
	if (func_264(Global_1572887->f_164.f_84, 65536))
	{
		return 0;
	}
	if (!func_396())
	{
		return 0;
	}
	return 1;
}

int func_377(int iParam0, int iParam1, int iParam2)
{
	if (Global_1572887->f_252.f_4 != 0)
	{
		return 0;
	}
	if (Global_1572887->f_164 > 0 && Global_1572887->f_164 < 17)
	{
		return 0;
	}
	Global_1572887->f_252.f_4 = 2;
	Global_1572887->f_252.f_5 = (Global_1572887->f_252.f_5 || iParam1);
	Global_1572887->f_252.f_6 = iParam0;
	Global_1572887->f_252.f_13 = iParam2;
	Global_1572887->f_252.f_14 = 0;
	return 1;
}

void func_378(int iParam0)
{
	if (iParam0 != 0)
	{
		func_448(iParam0, -1);
	}
	func_63(4);
	func_20(1);
}

void func_379(bool bParam0, bool bParam1)
{
	if (func_449(255) == 4)
	{
		return;
	}
	if (func_450(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_425(0);
	}
	else
	{
		if (bParam1)
		{
			func_353(0, 0, 0, 1);
		}
		func_431(0);
		func_451(&(Global_1109400->f_388));
		Global_1109400->f_388 = 0f;
		Global_1109400->f_388.f_5 = 1;
		Global_1109400->f_388.f_16 = 0;
		Global_1109400->f_388.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1109400->f_388.f_17.f_3 = { 0f, 0f, 0f };
		Global_1109400->f_388.f_17 = { Global_1899378->f_23.f_1, Global_1899378->f_23.f_1, Global_1899378->f_23.f_1 };
		Global_1109400->f_388.f_17.f_9 = -432403087;
		func_452(&(Global_1109400->f_427));
		Global_1109400->f_427.f_6 = { Global_1109400->f_388.f_17.f_6 };
		Global_1109400->f_427 = Global_1109400->f_388;
		Global_1109400->f_427.f_5 = 1;
		if (bParam1)
		{
			Global_1109400->f_22.f_16 = 0;
			Global_1109400->f_22.f_17 = 0;
		}
	}
	func_453(Global_1109400->f_388, 42);
	func_454(Global_1109400->f_427, 42);
}

int func_380(int iParam0)
{
	if (!&Global_1899245->f_88[iParam0])
	{
		if (!func_455(Global_1899245->f_3[iParam0 /*2*/]))
		{
			func_243(Global_1899245->f_3[iParam0 /*2*/], 0, 0);
		}
		Global_1899245->f_88[iParam0] = 1;
	}
	else if (func_60(Global_1899245->f_3[iParam0 /*2*/], func_456(iParam0), 0))
	{
		func_59(Global_1899245->f_3[iParam0 /*2*/]);
		return 1;
	}
	return 0;
}

struct<7> func_381(int iParam0)
{
	struct<7> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

bool func_382(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0);
}

void func_383(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_384(var uParam0, char* sParam1)
{
	char cVar0[64];
	struct<8> Var8;
	int iVar16;

	SAVE::_0x8E8FFB9E4AD051D2(uParam0, 436, sParam1, 26);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".txtHorseName", 64);
	SAVE::_0x186608A2AC6F9E88(uParam0, &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".eHorseBreed", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_8), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".eHorseModel", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_9), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".eGender", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_10), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".eLossType", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_11), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iTimeOfLoss", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_12), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".todTimeOfLoss", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_13), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".eSlotState", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_14), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".sCarriedData", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_15), 283, &cVar0);
	iVar16 = 0;
	while (iVar16 < 3)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		func_457(uParam0->f_15[iVar16 /*94*/], &Var8);
		iVar16++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".sPeltSkinData", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_298), 58, &cVar0);
	iVar16 = 0;
	while (iVar16 < 57)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		func_385(uParam0->f_298[iVar16], &Var8);
		iVar16++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".sVisualPeltSkinInfo", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_356), 16, &cVar0);
	iVar16 = 0;
	while (iVar16 < 3)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		func_386(uParam0->f_356[iVar16 /*5*/], &Var8);
		iVar16++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".sBondingData", 64);
	func_458(&(uParam0->f_372), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".sHorseCoreData", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_398), 9, &cVar0);
	iVar16 = 0;
	while (iVar16 < 2)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		func_459(uParam0->f_398[iVar16 /*4*/], &Var8);
		iVar16++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".sEfficiencyData", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_407), 13, &cVar0);
	iVar16 = 0;
	while (iVar16 < 3)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		func_460(uParam0->f_407[iVar16 /*4*/], &Var8);
		iVar16++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".sWrithingData", 64);
	func_461(&(uParam0->f_420), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".sStableOwnedData", 64);
	func_462(&(uParam0->f_422), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".sHorseBurdenData", 64);
	func_463(&(uParam0->f_425), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".vLastCoord", 64);
	func_152(&(uParam0->f_427), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".fLastHeading", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_430), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iTimeStampDismounted", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_431), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iTimeStampAcquired", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_432), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".bHasDefaultSaddle", 64);
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_433), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".bPlayerPurchasedHorse", 64);
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_434), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".bPlayerBrokeHorse", 64);
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_435), &cVar0);
	SAVE::_0xE0B45E983BFC0768();
}

void func_385(var uParam0, char* sParam1)
{
	char cVar0[64];

	SAVE::_0x443174C20B8B9E7F(uParam0, 1, sParam1);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iCount", 64);
	SAVE::_0x529B9CCD0972AF4D(uParam0, &cVar0);
	SAVE::_0xE0B45E983BFC0768();
}

void func_386(var uParam0, char* sParam1)
{
	char cVar0[64];

	SAVE::_0x443174C20B8B9E7F(uParam0, 5, sParam1);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".SatchelItem", 64);
	SAVE::_0xB25B5A375BE5BE26(uParam0, &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".TextureLookupHash", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_1), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".TextureLookupTint", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_2), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".UnusedPad0", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_3), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".UnusedPad1", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_4), &cVar0);
	SAVE::_0xE0B45E983BFC0768();
}

void func_387(var uParam0, struct<8> Param1)
{
	int iVar0;
	struct<8> Var1;
	struct<8> Var9;

	SAVE::_0x443174C20B8B9E7F(uParam0, 119, &Param1);
	Var1 = { Param1 };
	StringConCat(&Var1, "_iOutfitHash", 64);
	SAVE::_0x529B9CCD0972AF4D(uParam0, &Var1);
	Var1 = { Param1 };
	StringConCat(&Var1, "_Array", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_1), 118, &Var1);
	iVar0 = 0;
	while (iVar0 <= 38)
	{
		Var1 = { Param1 };
		StringConCat(&Var1, "_Array_Idx", 64);
		StringIntConCat(&Var1, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0->f_1[iVar0 /*3*/], 3, &Var1);
		Var9 = { Var1 };
		StringConCat(&Var9, "_CompHash", 64);
		SAVE::_0x529B9CCD0972AF4D(uParam0->f_1[iVar0 /*3*/], &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_WearHash", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0->f_1[iVar0 /*3*/])->f_1), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_eFlags", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0->f_1[iVar0 /*3*/])->f_2), &Var9);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_388(var uParam0)
{
	int iVar0;
	char cVar1[64];

	SAVE::_0x443174C20B8B9E7F(uParam0, 41, "nssd_sStableInventory");
	iVar0 = 0;
	SAVE::_0x81F4E92BE3958364(uParam0, 33, "nssd_MountItemGUID_array");
	iVar0 = 0;
	while (iVar0 <= (8 - 1))
	{
		StringCopy(&cVar1, "nssd_StableMountGUID_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F((*uParam0)[iVar0 /*4*/], 4, &cVar1);
		StringCopy(&cVar1, "nssd_StableItemGUID_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		StringConCat(&cVar1, "_data1", 64);
		SAVE::_0x529B9CCD0972AF4D((*uParam0)[iVar0 /*4*/], &cVar1);
		StringCopy(&cVar1, "nssd_StableItemGUID_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		StringConCat(&cVar1, "_data2", 64);
		SAVE::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar0 /*4*/])->f_1), &cVar1);
		StringCopy(&cVar1, "nssd_StableItemGUID_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		StringConCat(&cVar1, "_data3", 64);
		SAVE::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar0 /*4*/])->f_2), &cVar1);
		StringCopy(&cVar1, "nssd_StableItemGUID_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		StringConCat(&cVar1, "_data4", 64);
		SAVE::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar0 /*4*/])->f_3), &cVar1);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_33), "nssd_eFeeState");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_34), "nssd_iFeesTimer");
	iVar0 = 0;
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_35), 6, "nssd_iReservedStats_array");
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		StringCopy(&cVar1, "nssd_iReservedStats_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		SAVE::_0x529B9CCD0972AF4D(uParam0->f_35[iVar0], &cVar1);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_389(var uParam0, char* sParam1)
{
	int iVar0;
	char cVar1[64];

	SAVE::_0x443174C20B8B9E7F(uParam0, 49, sParam1);
	cVar1 = { *sParam1 };
	StringConCat(&cVar1, "_sStableBonding", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 4, &cVar1);
	cVar1 = { *sParam1 };
	StringConCat(&cVar1, "_sHorseGUID_data1", 64);
	SAVE::_0x529B9CCD0972AF4D(uParam0, &cVar1);
	cVar1 = { *sParam1 };
	StringConCat(&cVar1, "_sHorseGUID_data2", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_1), &cVar1);
	cVar1 = { *sParam1 };
	StringConCat(&cVar1, "_sHorseGUID_data3", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_2), &cVar1);
	cVar1 = { *sParam1 };
	StringConCat(&cVar1, "_sHorseGUID_data4", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_3), &cVar1);
	SAVE::_0xE0B45E983BFC0768();
	iVar0 = 0;
	cVar1 = { *sParam1 };
	StringConCat(&cVar1, "_fHorseEventXP", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_4), 29, &cVar1);
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_fHorseEventXP_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		SAVE::_0x35DEFECAE36D4FAE(uParam0->f_4[iVar0], &cVar1);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	iVar0 = 0;
	cVar1 = { *sParam1 };
	StringConCat(&cVar1, "_sEfficiencyData_array", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_33), 13, &cVar1);
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_sEfficiencyData_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0->f_33[iVar0 /*4*/], 4, &cVar1);
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_sEfficiencyData_iValue_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		SAVE::_0x529B9CCD0972AF4D(uParam0->f_33[iVar0 /*4*/], &cVar1);
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_sEfficiencyData_fValueBuffer_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		SAVE::_0x35DEFECAE36D4FAE(&((uParam0->f_33[iVar0 /*4*/])->f_1), &cVar1);
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_sEfficiencyData_fDrainBuffer_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		SAVE::_0x35DEFECAE36D4FAE(&((uParam0->f_33[iVar0 /*4*/])->f_2), &cVar1);
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_sEfficiencyData_iLastGameTime_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0->f_33[iVar0 /*4*/])->f_3), &cVar1);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	cVar1 = { *sParam1 };
	StringConCat(&cVar1, "_vLastHitch", 64);
	func_152(&(uParam0->f_46), &cVar1);
	SAVE::_0xE0B45E983BFC0768();
}

void func_390(var uParam0, struct<8> Param1)
{
	int iVar0;
	struct<8> Var1;
	struct<8> Var9;
	struct<8> Var17;

	Var17 = { Param1 };
	SAVE::_0x443174C20B8B9E7F(uParam0, 326, &Param1);
	StringConCat(&Var17, "_BaseLayer", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 5, &Var17);
	Var1 = { Var17 };
	StringConCat(&Var1, "_drawable", 64);
	SAVE::_0x529B9CCD0972AF4D(uParam0, &Var1);
	Var1 = { Var17 };
	StringConCat(&Var1, "_albedo", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_1), &Var1);
	Var1 = { Var17 };
	StringConCat(&Var1, "_normal", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_2), &Var1);
	Var1 = { Var17 };
	StringConCat(&Var1, "_material", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_3), &Var1);
	Var1 = { Var17 };
	StringConCat(&Var1, "_tag", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_4), &Var1);
	SAVE::_0xE0B45E983BFC0768();
	Var17 = { Param1 };
	StringConCat(&Var17, "_Layers", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_5), 321, &Var17);
	iVar0 = 0;
	while (iVar0 < 20)
	{
		Var1 = { Param1 };
		StringConCat(&Var1, "_Layer", 64);
		StringIntConCat(&Var1, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0->f_5[iVar0 /*16*/], 16, &Var1);
		Var9 = { Var1 };
		StringConCat(&Var9, "_LayerPriority", 64);
		SAVE::_0x529B9CCD0972AF4D(uParam0->f_5[iVar0 /*16*/], &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_Albedo", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0->f_5[iVar0 /*16*/])->f_1), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_Normal", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0->f_5[iVar0 /*16*/])->f_2), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_Material", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0->f_5[iVar0 /*16*/])->f_3), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_SheetGridIndex", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0->f_5[iVar0 /*16*/])->f_4), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_ModTexture", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0->f_5[iVar0 /*16*/])->f_5), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_ModChannel", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0->f_5[iVar0 /*16*/])->f_6), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_Palette", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0->f_5[iVar0 /*16*/])->f_7), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_tint0", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0->f_5[iVar0 /*16*/])->f_8), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_tint1", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0->f_5[iVar0 /*16*/])->f_9), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_tint2", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0->f_5[iVar0 /*16*/])->f_10), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_TexAlpha", 64);
		SAVE::_0x35DEFECAE36D4FAE(&((uParam0->f_5[iVar0 /*16*/])->f_11), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_ModAlpha", 64);
		SAVE::_0x35DEFECAE36D4FAE(&((uParam0->f_5[iVar0 /*16*/])->f_12), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_TexRough", 64);
		SAVE::_0x35DEFECAE36D4FAE(&((uParam0->f_5[iVar0 /*16*/])->f_13), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_BlendType", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0->f_5[iVar0 /*16*/])->f_14), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_LayerType", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0->f_5[iVar0 /*16*/])->f_15), &Var9);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_391(var uParam0, struct<8> Param1)
{
	struct<8> Var0;
	struct<8> Var8;

	Var8 = { Param1 };
	SAVE::_0x443174C20B8B9E7F(uParam0, 2, &Var8);
	Var0 = { Var8 };
	StringConCat(&Var0, "iLocationIndex", 64);
	SAVE::_0x529B9CCD0972AF4D(uParam0, &Var0);
	Var0 = { Var8 };
	StringConCat(&Var0, "iVariation", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_1), &Var0);
	SAVE::_0xE0B45E983BFC0768();
}

char* func_392(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "tooltips/tooltip(%i)";
		case 1:
			return "tooltips/tooltip";
		case 2:
			return ":label";
		case 3:
			return ":duration";
		case 4:
			return ":onlyInSP";
		case 5:
			return ":onlyInMP";
		case 6:
			return ":requiredMissionID";
	}
	return "";
}

int func_393(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_464(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_465())
	{
		return func_464(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1225638->f_21[iParam1])
	{
		return func_464(&(((*Global_1108178)[iParam1 /*37*/])->f_4), iVar0, 5);
	}
	return 0;
}

int func_394(int iParam0)
{
	if (!func_466(iParam0))
	{
		return -1;
	}
	return func_467(iParam0);
}

void func_395(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_320() - fParam1);
	func_468(uParam0, 1);
	func_469(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_396()
{
	if (Global_1572887->f_12 == 0)
	{
		if (func_470())
		{
			return 1;
		}
	}
	return 0;
}

void func_397(var uParam0)
{
	int iVar0;
	struct<22> Var1;
	struct<5> Var23;

	iVar0 = NETWORK::_0x27B1AE4D8C652F08(uParam0);
	StringCopy(&(Var1.f_7), NETWORK::_0xE59F4924BD3A718D(iVar0), 64);
	NETWORK::_0x16EFB123C4451032(iVar0, &Var1);
	StringCopy(&(Var1.f_17), NETWORK::_0xE79BA3BC265895DA(iVar0), 24);
	Var1.f_15 = uParam0;
	Var1.f_21 = NETWORK::_0x5ED39DA62BEB1330(iVar0);
	Var23.f_2 = -1;
	Var23.f_3 = -1;
	Var23.f_4 = -1;
	NETWORK::_0xC0CFFDA87C2C163D(iVar0, &Var23, 10);
	func_471(&Var1, &Var23);
}

void func_398(bool bParam0)
{
	if (bParam0)
	{
		func_335(128);
	}
	if (func_48() == 0)
	{
		func_72(2);
	}
	func_251(1);
}

int func_399(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Global_265238->f_2)
	{
		if (&Global_265238->f_43405[iVar0 /*6*/] == iParam0)
		{
			return iVar0;
		}
		if ((Global_265238->f_4[iVar0 /*62*/])->f_41 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_400(int iParam0)
{
	switch (iParam0)
	{
		case -1759663922:
			return "UGC_MST_STRY";
		case 35466036:
			return "UGC_MST_ADV";
		case 868063036:
			return "UGC_MST_LEG";
		case 1165474480:
			return "UGC_MST_LEG";
		case 784676450:
			return "UGC_MST_CTL";
		case -1593102174:
			return "UGC_MST_SGM";
		case 1612828680:
			return "UGC_MST_ALMD";
		case 682133028:
			return "UGC_MST_CHS";
		case 605457060:
			return "UGC_MST_FDH";
		case -1545357213:
			return "UGC_MST_HTF";
		case 1053257180:
			return "UGC_MST_HTS";
		case 916298691:
			return "UGC_MST_HEMD";
		case 1692096074:
			return "UGC_MST_MWTD";
		case -471095244:
			return "UGC_MST_RNSK";
		case -1195756641:
			return "UGC_MST_SEIG";
		case 33547358:
			return "UGC_MST_SLSHR";
		case -557106090:
			return "UGC_MST_TATK";
		case -1824689524:
			return "UGC_MST_SPLY";
		case 858456953:
			return "UGC_MST_RAID";
		case -1768719739:
			return "UGC_MST_PLNDR";
		case 1335816198:
			return "UGC_MST_KOTK";
		case 1046222216:
			return "UGC_MST_DVIP";
		case -1870450715:
			return "UGC_MST_BSMN";
		case -450654273:
			return "UGC_MST_CPWGN";
		case -29139709:
			return "UGC_MST_LNDG";
		case 534981680:
			return "UGC_MST_ESCF";
		case -915869673:
			return "UGC_MST_TTYG";
		case -360644098:
			return "UGC_MST_TTYT";
		case -1528996533:
			return "UGC_MST_HTP";
		case -650766784:
			return "UGC_MST_SRMBL";
		case 1668321463:
			return "UGC_MST_SMGRN";
		case 344911429:
			return "UGC_MST_STNDF";
		case -1854465123:
			return "UGC_MST_HLDOT";
		case -1027343918:
			return "UGC_MST_BLDG";
		case -667027782:
			return "UGC_MST_ARWBL";
		case -806226507:
			return "UGC_MST_BRWL";
		case 1520184724:
			return "UGC_MST_AFGPO";
		case 449718152:
			return "UGC_MST_AFGPP";
		case -872811084:
			return "UGC_MST_GRDN";
		case -528055156:
			return "UGC_MST_DUEL";
		case -707139085:
			return "UGC_MST_FRHM";
		case -1861365556:
			return "UGC_MST_PNTTY";
		case -1422136853:
			return "UGC_MST_RVA";
		case -87902341:
			return "UGC_MST_BAO";
		case 1424000300:
			return "UGC_MST_MNTM";
		case 249583080:
			return "UGC_MST_BTYV";
		case -1436089230:
			return "UGC_MST_TTYTR";
		case -825872693:
			return "UGC_MST_FRSTT";
		case -2088359027:
			return "UGC_MST_MNYG";
		case -2083980169:
			return "UGC_MST_HDLSH";
		case -1084202760:
			return "UGC_MST_PWRBL";
		case 1575764607:
			return "UGC_MST_HRSR";
		case 733436798:
			return "UGC_MST_HRSP";
		case 1419108180:
			return "UGC_MST_PWRW";
		case 313483818:
			return "UGC_MST_JST";
		case -1311152903:
			return "UGC_MST_LOOT";
		case 683859288:
			return "UGC_MST_HEMH";
		case -1725070894:
			return "UGC_MST_PRDTR";
		case -1429156655:
			return "UGC_MST_RNGM";
		case -1735381469:
			return "UGC_MST_WWR";
		case 1934718563:
			return "UGC_MST_BRP";
		case 1682048147:
			return "UGC_MST_STGP";
		case 1430637396:
			return "UGC_MST_MYR";
		case -1482947946:
			return "UGC_MST_WAR";
		case -1495857325:
			return "UGC_MST_DSTR";
		case 1078150940:
			return "UGC_MST_AWIP";
		default:
			break;
	}
	return "Invalid MISSION_SUB_TYPE";
}

char* func_401(int iParam0)
{
	switch (iParam0)
	{
		case 1816768801:
			return "GST_DEATHMATCH";
		case -533426613:
			return "GST_DEATHMATCH_TEAM";
		case -1918441640:
			return "GST_DEATHMATCH_LTS";
		case -457802746:
			return "GST_DEATHMATCH_FTB";
		case 1788958412:
			return "GST_DEATHMATCH_PITP";
		case 1153715636:
			return "GST_DEATHMATCH_LMS";
		case 424482930:
			return "GST_DEATHMATCH_MM";
		case 1272390114:
			return "GST_DEATHMATCH_WOC";
		case -1581094459:
			return "GST_DEATHMATCH_EXC";
		case 1842544025:
			return "GST_DEATHMATCH_TLG";
		case -632356431:
			return "GST_DEATHMATCH_TTLG";
		case -559809431:
			return "GST_DEATHMATCH_HT";
		case 1175500245:
			return "GST_DEATHMATCH_TFTB";
		case -1437925683:
			return "GST_DEATHMATCH_TWOC";
		case -548018579:
			return "GST_DEATHMATCH_EC";
		case 10577687:
			return "GST_DEATHMATCH_MC";
		case -222655798:
			return "GST_DEATHMATCH_GR";
		case -725256130:
			return "GST_DEATHMATCH_TGR";
		default:
			break;
	}
	return "Invalid DEATHMATCH_SUB_TYPE";
}

char* func_402(int iParam0)
{
	switch (iParam0)
	{
		case -784189810:
			return "GST_RACE_STANDA";
		case 1579717899:
			return "GST_RACE_COMBAT";
		case -63669280:
			return "GST_RACE_DUALCO";
		case 851921060:
			return "GST_RACE_ELIM";
		case 2028478397:
			return "GST_RACE_SURVIV";
		case 1457860192:
			return "GST_RACE_TIMECP";
		case -79999383:
			return "GST_RACE_GOLDRU";
		case -1957416901:
			return "GST_RACE_RUNAWT";
		case 218185167:
			return "GST_RACE_TARRAC";
		case 1744858848:
			return "GST_RACE_OPERAC";
		case -1185533313:
			return "GST_RACE_OPTARA";
		default:
			break;
	}
	return "Invalid RACE_SUB_TYPE";
}

var func_403(struct<26> Param0, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[64];
	char cVar11[64];

	func_472();
	iVar0 = func_473();
	iVar1 = Global_1898068->f_6;
	iVar2 = (iVar1 + Param0.f_16);
	MISC::_INT_TO_STRING(iVar1, "%i", &cVar11);
	Global_1935689->f_1225.f_1208++;
	StringCopy(&cVar3, "Invite_Root_", 64);
	StringConCat(&cVar3, &cVar11, 64);
	StringConCat(&cVar3, "_", 64);
	StringIntConCat(&cVar3, Global_1935689->f_1225.f_1208, 64);
	func_474(Global_1935689->f_1225.f_5[iVar0 /*30*/], Global_1935689->f_1225.f_2, cVar3, Param0);
	(Global_1935689->f_1225.f_5[iVar0 /*30*/])->f_26 = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1935689->f_1225.f_5[iVar0 /*30*/]), func_475(76), Global_1935689->f_1225.f_1208);
	(Global_1935689->f_1225.f_5[iVar0 /*30*/])->f_28 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(Global_1935689->f_1225.f_5[iVar0 /*30*/]), func_475(77), Param0.f_21);
	(Global_1935689->f_1225.f_5[iVar0 /*30*/])->f_29 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(Global_1935689->f_1225.f_5[iVar0 /*30*/]), func_475(78), 0);
	(Global_1935689->f_1225.f_5[iVar0 /*30*/])->f_22 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(Global_1935689->f_1225.f_5[iVar0 /*30*/]), func_475(62), Param0.f_21);
	(Global_1935689->f_1225.f_5[iVar0 /*30*/])->f_25 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(Global_1935689->f_1225.f_5[iVar0 /*30*/]), func_475(70), Param0.f_24);
	if (Param0.f_24)
	{
		(Global_1935689->f_1225.f_5[iVar0 /*30*/])->f_24 = DATABINDING::_DATABINDING_ADD_DATA_STRING(&(Global_1935689->f_1225.f_5[iVar0 /*30*/]), func_475(68), Param0.f_23);
		(Global_1935689->f_1225.f_5[iVar0 /*30*/])->f_23 = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1935689->f_1225.f_5[iVar0 /*30*/]), func_475(71), Param0.f_22);
	}
	(Global_1935689->f_1225.f_5[iVar0 /*30*/])->f_18 = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1935689->f_1225.f_5[iVar0 /*30*/]), func_475(79), Param0.f_17);
	(Global_1935689->f_1225.f_5[iVar0 /*30*/])->f_19 = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1935689->f_1225.f_5[iVar0 /*30*/]), func_475(50), Param0.f_18);
	(Global_1935689->f_1225.f_5[iVar0 /*30*/])->f_20 = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1935689->f_1225.f_5[iVar0 /*30*/]), func_475(51), Param0.f_18.f_1);
	(Global_1935689->f_1225.f_5[iVar0 /*30*/])->f_21 = DATABINDING::_DATABINDING_ADD_DATA_GANG_ID(&(Global_1935689->f_1225.f_5[iVar0 /*30*/]), func_475(80), Param0.f_18.f_2);
	(Global_1935689->f_1225.f_5[iVar0 /*30*/])->f_17 = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1935689->f_1225.f_5[iVar0 /*30*/]), func_475(81), iVar2);
	func_476(Global_1935689->f_1225.f_1207 + 1);
	if (Global_1935689->f_1225.f_1208 == 2147483647)
	{
		Global_1935689->f_1225.f_1208 = 0;
	}
	if (func_477() && func_478(Param0.f_17))
	{
		Param0.f_25 = 3;
		Param0.f_25.f_11 = 778915895;
		Param0.f_25.f_12 = &Global_1935689->f_1225.f_5[iVar0 /*30*/];
		iVar15 = func_479(&(Param0.f_25));
		(Global_1935689->f_1225.f_5[iVar0 /*30*/])->f_27 = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1935689->f_1225.f_5[iVar0 /*30*/]), func_475(83), iVar15);
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1935689->f_1225.f_3, 0, "pm_invite_item", &(Global_1935689->f_1225.f_5[iVar0 /*30*/]));
	return &(Global_1935689->f_1225.f_5[iVar0 /*30*/]);
}

bool func_404()
{
	return Global_1572887->f_164 > 0;
}

void func_405(var uParam0)
{
	func_480(uParam0);
	func_480(&(uParam0->f_7));
}

void func_406(var uParam0)
{
	Global_1572887->f_164.f_11 = { *uParam0 };
}

void func_407(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<30> Var2;
	int iVar32;

	iVar0 = 39;
	while (iVar0 >= 0)
	{
		Var2 = { *(Global_1935689->f_1225.f_5[iVar0 /*30*/]) };
		iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT(Var2.f_18);
		iVar32 = iVar1;
		if (iParam0 != iVar32)
		{
		}
		else
		{
			iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT(Var2.f_19);
			if (iParam1 != iVar1)
			{
			}
			else
			{
				func_481(Var2);
			}
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_408(int iParam0)
{
}

void func_409(var uParam0)
{
	func_480(uParam0);
}

void func_410(var uParam0)
{
	Global_1572887->f_164.f_2 = { *uParam0 };
}

bool func_411(struct<9> Param0, int iParam9)
{
	return func_264(Param0.f_8, iParam9);
}

void func_412(var uParam0)
{
}

char* func_413(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

char* func_414(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_415(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

char* func_415(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

void func_416(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_417()
{
	if (Global_1572887->f_164.f_84 != 0)
	{
		return 2;
	}
	if (Global_1572887->f_164.f_63 != -1)
	{
		return 2;
	}
	if (Global_1572887->f_164.f_83 > 2)
	{
		return 2;
	}
	if (Global_1572887->f_164.f_83 == 2)
	{
		Global_1572887->f_164.f_83 = 0;
		return 1;
	}
	return 0;
}

int func_418()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-92416669) > 0)
	{
		return 1;
	}
	return 0;
}

int func_419(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(((*Global_1934603)[iVar0 /*16*/])->f_10)))
		{
			func_482(iVar0);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_420(int iParam0)
{
	Global_1109400->f_22.f_10 = iParam0;
}

bool func_421(int iParam0)
{
	return (Global_1109400->f_22.f_6 && iParam0) != 0;
}

bool func_422(int iParam0)
{
	return (Global_1109400->f_22.f_8 && iParam0) != 0;
}

bool func_423(int iParam0)
{
	return (Global_1109400->f_4[Global_1109913[iParam0 /*2*/]] && ((*Global_1109913)[iParam0 /*2*/])->f_1) == ((*Global_1109913)[iParam0 /*2*/])->f_1;
}

int func_424()
{
	if (&Global_1109400 <= 5)
	{
		return &Global_1109400;
	}
	if (&Global_1109400 <= 21)
	{
		return 4;
	}
	if (&Global_1109400 <= 24)
	{
		return 3;
	}
	return 25;
}

int func_425(int iParam0)
{
	if (func_483(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_426(int iParam0)
{
	Global_1109400->f_22.f_8 = (Global_1109400->f_22.f_8 || iParam0);
}

bool func_427(int iParam0)
{
	return (Global_265238->f_79565.f_278 && iParam0) != 0;
}

int func_428(vector3 vParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	float fVar4;

	iVar0 = -1;
	fVar1 = 999999.9f;
	if (func_450(vParam0))
	{
		return -1;
	}
	iVar3 = 0;
	while (iVar3 < Global_1894899->f_161)
	{
		iVar2 = &Global_1894899->f_10[iVar3];
		fVar4 = BUILTIN::VDIST2(vParam0, ((*Global_1888801)[iVar2 /*35*/])->f_6);
		if (fVar4 < fVar1)
		{
			iVar0 = iVar2;
			fVar1 = fVar4;
		}
		iVar3++;
	}
	if (func_484(iVar0))
	{
	}
	else
	{
		iVar0 = -1;
	}
	return iVar0;
}

void func_429(vector3 vParam0, float fParam3, vector3 vParam4, float fParam7, float fParam8, float fParam9, bool bParam10, int iParam11, int iParam12, int iParam13)
{
	if (func_449(255) == 4)
	{
		return;
	}
	if (func_450(vParam0))
	{
		return;
	}
	if (fParam8 < 0f && fParam9 < 0f)
	{
		fParam8 = Global_1899378->f_23;
		fParam9 = Global_1899378->f_23.f_1;
	}
	if (fParam8 == 0f && fParam9 == 0f)
	{
		fParam8 = Global_1899378->f_23;
		fParam9 = Global_1899378->f_23.f_1;
	}
	if (fParam9 < fParam8)
	{
		fParam8 = Global_1899378->f_23;
		fParam9 = Global_1899378->f_23.f_1;
	}
	if (bParam10)
	{
		func_353(0, 0, 0, 1);
	}
	func_431(0);
	func_431(3);
	Global_1109400->f_457 = iParam11;
	Global_1109400->f_458 = iParam12;
	Global_1109400->f_459 = iParam13;
	func_451(&(Global_1109400->f_388));
	Global_1109400->f_388 = fParam3;
	Global_1109400->f_388.f_5 = 1;
	Global_1109400->f_388.f_17.f_6 = { vParam0 };
	Global_1109400->f_388.f_17.f_3 = { 0f, 0f, 0f };
	Global_1109400->f_388.f_17 = { fParam9, fParam9, fParam9 };
	Global_1109400->f_388.f_17.f_9 = -432403087;
	if (fParam8 > 1f)
	{
		Global_1109400->f_388.f_16 = 1;
		Global_1109400->f_388.f_6.f_6 = { Global_1109400->f_388.f_17.f_6 };
		Global_1109400->f_388.f_6.f_3 = { 0f, 0f, 0f };
		Global_1109400->f_388.f_6 = { fParam8, fParam8, fParam8 };
		Global_1109400->f_388.f_6.f_9 = -432403087;
	}
	func_452(&(Global_1109400->f_427));
	Global_1109400->f_427.f_6 = { vParam4 };
	Global_1109400->f_427 = fParam7;
	Global_1109400->f_427.f_5 = 1;
	Global_1109400->f_22.f_16 = 0;
	Global_1109400->f_22.f_17 = 0;
	func_453(Global_1109400->f_388, 42);
	func_454(Global_1109400->f_427, 42);
}

void func_430(bool bParam0)
{
	if (!bParam0)
	{
		func_425(14);
	}
	else
	{
		func_431(14);
	}
}

int func_431(int iParam0)
{
	if (func_485(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

struct<10> func_432()
{
	return Global_1572887->f_164.f_49;
}

int func_433()
{
	return Global_1572887->f_164.f_59;
}

var func_434(int iParam0)
{
	return ((*Global_1055058)[iParam0 /*116*/])->f_39;
}

var func_435(int iParam0)
{
	return ((*Global_1055058)[iParam0 /*116*/])->f_39.f_1;
}

var func_436(int iParam0)
{
	return ((*Global_1055058)[iParam0 /*116*/])->f_39.f_2;
}

var func_437(int iParam0)
{
	return ((*Global_1055058)[iParam0 /*116*/])->f_39.f_3;
}

var func_438(int iParam0)
{
	return ((*Global_1055058)[iParam0 /*116*/])->f_39.f_4;
}

int func_439(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	if (!func_486(iParam0, iParam1))
	{
		return 0;
	}
	func_487(iParam0, iParam1, uParam2);
	func_488(iParam3);
	func_489(iParam4);
	func_490(9);
	func_491();
	if (func_466(iParam3))
	{
		func_492(iParam3);
	}
	return 1;
}

int func_440(int iParam0)
{
	return (Global_1898164->f_1[iParam0 /*5*/])->f_2;
}

int func_441(int iParam0)
{
	int iVar0;

	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		iParam0 = PLAYER::PLAYER_ID();
	}
	iVar0 = iParam0;
	if (func_314(iParam0) > 2)
	{
		return 1;
	}
	if (((*Global_262777)[iVar0 /*74*/])->f_1.f_16 != 0)
	{
		return 1;
	}
	if (((*Global_262777)[iVar0 /*74*/])->f_1 != 255)
	{
		return 1;
	}
	if (((*Global_262777)[iVar0 /*74*/])->f_1.f_18 != 2147483647)
	{
		return 1;
	}
	return 0;
}

var func_442(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;

	SCRIPTS::_0xDE544B7EC0C187CC(&uVar0);
	if (iParam0 == 2147483647)
	{
		return uVar0;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (&Global_262150->f_1[iVar1 /*5*/] == iParam0 && (iParam1 == 0 || (Global_262150->f_1[iVar1 /*5*/])->f_1 == iParam1))
		{
			return (Global_262150->f_1[iVar1 /*5*/])->f_2;
		}
		iVar1++;
	}
	return uVar0;
}

int func_443(var uParam0, int iParam1)
{
	int iVar0;

	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!&Global_1225638->f_21[iVar0])
		{
		}
		else if (!SCRIPTS::_0x72B2E00C9BAC6789(&uParam0, iVar0))
		{
		}
		else if ((((*Global_262777)[iVar0 /*74*/])->f_72 && iParam1) != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_444(var uParam0, int iParam1)
{
	return (uParam0->f_20 && iParam1) != 0;
}

bool func_445(var uParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	uVar0 = func_442(uParam0->f_18, uParam0->f_17);
	iVar1 = SCRIPTS::COUNT_PLAYER_BITS(&uVar0);
	iVar4 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	iVar2 = 0;
	while (iVar2 < func_493())
	{
		iVar3 = func_494(iVar2);
		if (SCRIPTS::_0x72B2E00C9BAC6789(&uVar0, iVar3))
		{
		}
		else if (iVar4 == iVar3)
		{
		}
		else
		{
			iVar1++;
		}
		iVar2++;
	}
	if (!SCRIPTS::_0x72B2E00C9BAC6789(&uVar0, iVar4))
	{
		iVar1++;
	}
	return iVar1 > uParam0->f_33;
}

int func_446(var uParam0, float fParam1, bool bParam2)
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
			fVar4 = BUILTIN::VDIST(Global_1225638->f_16, (Global_1058888->f_43923.f_283[iVar1 /*306*/])->f_2);
			if (fVar4 < fVar3 || iVar2 == -1)
			{
				iVar2 = iVar1;
				fVar3 = fVar4;
			}
			iVar1++;
		}
		iVar0 = iVar2;
	}
	iVar0 = &Global_1058888->f_43923.f_283[iVar0 /*306*/];
	iVar5 = func_495(iVar0);
	if (iVar5 <= 0)
	{
		return 0;
	}
	else
	{
		iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar5);
		if (func_496(iVar0, iVar6, uParam0, fParam1))
		{
			return 1;
		}
	}
	return 0;
}

bool func_447()
{
	return func_264(Global_1572887->f_6, 1);
}

void func_448(int iParam0, int iParam1)
{
	Global_1572864->f_16 = iParam0;
	Global_1572864->f_17 = iParam1;
}

int func_449(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1109400->f_1;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 25;
	}
	if (&Global_1225638->f_21[iParam0])
	{
		return ((*Global_1108178)[iParam0 /*37*/])->f_1;
	}
	return 25;
}

int func_450(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_451(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_452(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_453(struct<29> Param0, var uParam29, int iParam30)
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

void func_454(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

bool func_455(var uParam0)
{
	return uParam0->f_1;
}

int func_456(int iParam0)
{
	return 60000;
}

void func_457(var uParam0, char* sParam1)
{
	char cVar0[64];
	struct<8> Var8;
	int iVar16;

	SAVE::_0x443174C20B8B9E7F(uParam0, 94, sParam1);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".eModel", 64);
	SAVE::_0xB25B5A375BE5BE26(uParam0, &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".eItem", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_1), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".eCarriableType", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_2), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".eCarriableConfigInfo", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_3), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".ePedQuality", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_4), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".ePedSkinQuality", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_5), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".ePedRarity", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_6), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".eDamageCleanliness", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_7), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".eOutfit", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_8), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iNumMetaAssets", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_9), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".sMetaAssetData", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_10), 81, &cVar0);
	iVar16 = 0;
	while (iVar16 < 10)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		func_497(uParam0->f_10[iVar16 /*8*/], &Var8);
		iVar16++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iCarcassAge", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_91), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".bSkinned", 64);
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_92), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".bLegendary", 64);
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_93), &cVar0);
	SAVE::_0xE0B45E983BFC0768();
}

void func_458(var uParam0, char* sParam1)
{
	char cVar0[64];
	struct<8> Var8;
	int iVar16;

	SAVE::_0x443174C20B8B9E7F(uParam0, 26, sParam1);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iBondLevel", 64);
	SAVE::_0x529B9CCD0972AF4D(uParam0, &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".fBondXP", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_1), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".fHorseEventXP", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_2), 24, &cVar0);
	iVar16 = 0;
	while (iVar16 < 23)
	{
		if (iVar16 == -1)
		{
		}
		else
		{
			Var8 = { cVar0 };
			StringIntConCat(&Var8, iVar16, 64);
			SAVE::_0x35DEFECAE36D4FAE(uParam0->f_2[iVar16], &Var8);
		}
		iVar16++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_459(var uParam0, char* sParam1)
{
	char cVar0[64];

	SAVE::_0x443174C20B8B9E7F(uParam0, 4, sParam1);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iValue", 64);
	SAVE::_0x529B9CCD0972AF4D(uParam0, &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".fValueBuffer", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_1), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".fDrainBuffer", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_2), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iLastGameTime", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_3), &cVar0);
	SAVE::_0xE0B45E983BFC0768();
}

void func_460(var uParam0, char* sParam1)
{
	char cVar0[64];

	SAVE::_0x443174C20B8B9E7F(uParam0, 4, sParam1);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iValue", 64);
	SAVE::_0x529B9CCD0972AF4D(uParam0, &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".fValueBuffer", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_1), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".fDrainBuffer", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_2), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iLastGameTime", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_3), &cVar0);
	SAVE::_0xE0B45E983BFC0768();
}

void func_461(var uParam0, char* sParam1)
{
	char cVar0[64];

	SAVE::_0x443174C20B8B9E7F(uParam0, 2, sParam1);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".bIsWrithing", 64);
	SAVE::_0xBB7F4273C186BC4B(uParam0, &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".fWrithingDuration", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_1), &cVar0);
	SAVE::_0xE0B45E983BFC0768();
}

void func_462(var uParam0, char* sParam1)
{
	char cVar0[64];

	SAVE::_0x443174C20B8B9E7F(uParam0, 3, sParam1);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".bIsStableOwned", 64);
	SAVE::_0xBB7F4273C186BC4B(uParam0, &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".eShop", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_1), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".todStolen", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_2), &cVar0);
	SAVE::_0xE0B45E983BFC0768();
}

void func_463(var uParam0, char* sParam1)
{
	char cVar0[64];

	SAVE::_0x443174C20B8B9E7F(uParam0, 2, sParam1);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".bIsStableOwned", 64);
	SAVE::_0xBB7F4273C186BC4B(uParam0, &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".todBurdenPlaced", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_1), &cVar0);
	SAVE::_0xE0B45E983BFC0768();
}

bool func_464(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_465()
{
	return Global_1109400->f_244;
}

bool func_466(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_467(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_498(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

void func_468(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_469(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_470()
{
	if (NETWORK::_0xFBE782B3165AC8EC(1377133516))
	{
		return 1;
	}
	return 0;
}

void func_471(var uParam0, var uParam1)
{
	Global_1572887->f_164.f_27 = { *uParam0 };
	Global_1572887->f_164.f_49 = { *uParam1 };
}

void func_472()
{
	int iVar0;

	iVar0 = (MISC::GET_GAME_TIMER() / 1000);
	Global_1898068->f_6 = iVar0;
}

int func_473()
{
	int iVar0;
	int iVar1;
	struct<30> Var2;
	int iVar32;

	iVar1 = Global_1898068->f_6;
	iVar0 = 0;
	while (iVar0 < 40)
	{
		Var2 = { *(Global_1935689->f_1225.f_5[iVar0 /*30*/]) };
		iVar32 = DATABINDING::_DATABINDING_READ_DATA_INT(Var2.f_17);
		if (iVar32 < iVar1)
		{
			if (func_499(Var2))
			{
				func_481(Var2);
			}
			return iVar0;
		}
		iVar0++;
	}
	return func_500();
}

void func_474(var uParam0, var uParam1, char[32] cParam2, struct<16> Param10)
{
	func_501(uParam0, uParam1, cParam2, Param10);
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_475(15), Param10.f_10);
	uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_475(17), Param10.f_11);
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_475(3), Param10.f_12);
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_475(4), Param10.f_13);
	uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_475(5), Param10.f_14);
	uParam0->f_16 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_475(6), Param10.f_15);
}

char* func_475(int iParam0)
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
			return "dynamic_list_item_extra_bool_field_one_value";
		case 53:
			return "dynamic_list_item_link";
		case 54:
			return "dynamic_list_item_event_channel_hash";
		case 55:
			return "dynamic_list_item_focus_hash";
		case 56:
			return "dynamic_list_item_select_hash";
		case 57:
			return "dynamic_list_item_prompt_text";
		case 58:
			return "dynamic_list_item_prompt_enabled";
		case 59:
			return "dynamic_list_item_prompt_visible";
		case 60:
			return "dynamic_list_item_prompt_option_text";
		case 61:
			return "dynamic_list_item_prompt_option_enabled";
		case 62:
			return "dynamic_list_item_prompt_option_visible";
		case 63:
			return "dynamic_list_item_prompt_option_select_hash";
		case 64:
			return "dynamic_list_item_prompt_toggle_text";
		case 65:
			return "dynamic_list_item_prompt_toggle_enabled";
		case 66:
			return "dynamic_list_item_prompt_toggle_visible";
		case 67:
			return "dynamic_list_item_prompt_toggle_select_hash";
		case 68:
			return "dynamic_list_item_prompt_r3_text";
		case 69:
			return "dynamic_list_item_prompt_r3_enabled";
		case 70:
			return "dynamic_list_item_prompt_r3_visible";
		case 71:
			return "dynamic_list_item_select_r3_select_hash";
		case 72:
			return "mount_collection_index";
		case 73:
			return "dynamic_list_item_rename_prompt_enabled";
		case 74:
			return "dynamic_list_item_rename_prompt_visible";
		case 75:
			return "dynamic_list_item_stats_info_toggle_prompt_text";
		case 76:
			return "invite_unique_id";
		case 77:
			return "invite_tracked";
		case 78:
			return "invite_processed";
		case 79:
			return "invite_script_type";
		case 80:
			return "invite_gang_id";
		case 81:
			return "invite_expiration_time";
		case 82:
			return "invite_filter_type";
		case 83:
			return "invite_feed_message_id";
		default:
			break;
	}
	return "null";
}

void func_476(int iParam0)
{
	Global_1935689->f_1225.f_1207 = iParam0;
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689->f_1225.f_4, MISC::_0x2B6846401D68E563(BUILTIN::TO_FLOAT(Global_1935689->f_1225.f_1207), 0));
}

bool func_477()
{
	return NETWORK::_NETWORK_ARE_ONLINE_NOTIFICATIONS_SHOWN_IN_STORY_MODE();
}

int func_478(var uParam0)
{
	return 1;
}

int func_479(var uParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2))
	{
		return 0;
	}
	else if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
	{
		return 0;
	}
	else if (uParam0->f_5 == 0)
	{
		return 0;
	}
	else if (uParam0->f_6 == 0)
	{
		return 0;
	}
	if (uParam0->f_11 == 778915895)
	{
		if (Global_1898068->f_3)
		{
			uParam0->f_4 = MISC::_CREATE_VAR_STRING(2, "NM_TI_VIEW_INVITE");
		}
		else
		{
			uParam0->f_4 = MISC::_CREATE_VAR_STRING(2, "NM_TI_ACCEPT_INVITE");
		}
	}
	if (*uParam0 == 3)
	{
		return func_502(func_414(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_414(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_5, uParam0->f_6, 1433015236, uParam0->f_12, uParam0->f_11, uParam0->f_13, uParam0->f_10, uParam0->f_14, uParam0->f_15, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_18);
	}
	else if (*uParam0 == 4)
	{
		return func_503(func_414(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_414(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_5, uParam0->f_6, uParam0->f_7, uParam0->f_8, uParam0->f_9, 1433015236, uParam0->f_12, uParam0->f_11, uParam0->f_13, uParam0->f_10, uParam0->f_14, uParam0->f_15, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_18);
	}
	else if (*uParam0 == 1)
	{
		return func_504(func_414(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_414(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_5, uParam0->f_6, uParam0->f_16, uParam0->f_4, uParam0->f_17, uParam0->f_10, uParam0->f_14, uParam0->f_15, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 2)
	{
		return func_505(func_414(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_414(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_5, uParam0->f_6, uParam0->f_7, uParam0->f_8, uParam0->f_9, uParam0->f_16, uParam0->f_4, uParam0->f_17, uParam0->f_10, uParam0->f_14, uParam0->f_15, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 0)
	{
		return func_223(func_414(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_414(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_5, uParam0->f_6, uParam0->f_10, uParam0->f_14, uParam0->f_15, uParam0->f_1, 0, 1, 1);
	}
	return 0;
}

void func_480(var uParam0)
{
}

void func_481(var uParam0)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0))
	{
		return;
	}
	DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(Global_1935689->f_1225.f_3, uParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689->f_1225.f_1, 0);
	func_506(uParam0);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0);
	func_476((Global_1935689->f_1225.f_1207 - 1));
}

void func_482(int iParam0)
{
	struct<16> Var0;

	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(((*Global_1934603)[iParam0 /*16*/])->f_10)))
	{
		return;
	}
	*((*Global_1934603)[iParam0 /*16*/]) = { Var0 };
	Global_1934603->f_161 = (Global_1934603->f_161 - 1);
	if (Global_1934603->f_161 < 0)
	{
		Global_1934603->f_161 = 0;
	}
}

bool func_483(var uParam0, int iParam1, int iParam2)
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

bool func_484(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_485(var uParam0, int iParam1, int iParam2)
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

bool func_486(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam0 == 3)
	{
		return iParam1 != -1;
	}
	return iParam1 != 0;
}

void func_487(int iParam0, int iParam1, var uParam2)
{
	Global_1572887->f_80 = iParam0;
	Global_1572887->f_80.f_1 = iParam1;
	Global_1572887->f_80.f_2 = uParam2;
	func_507();
}

void func_488(int iParam0)
{
	Global_1572887->f_80.f_3 = iParam0;
	func_507();
}

void func_489(int iParam0)
{
	Global_1572887->f_80.f_4 = iParam0;
}

void func_490(int iParam0)
{
	Global_1572887->f_80.f_63 = iParam0;
}

void func_491()
{
	func_383(&(Global_1572887->f_6), 1);
	func_383(&(Global_1572887->f_6), 1073741824 /* Float: 2f */);
	func_507();
}

int func_492(int iParam0)
{
	if (func_508())
	{
		return 0;
	}
	if (!func_466(iParam0))
	{
		return 0;
	}
	Global_1051043 = iParam0;
	return 1;
}

int func_493()
{
	return Global_1109400->f_245;
}

int func_494(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 7)
	{
		return 255;
	}
	return &(Global_1109400->f_247[iParam0]);
}

int func_495(int iParam0)
{
	struct<4> Var0;

	Var0 = Global_1058888->f_43923.f_283.f_4898;
	Var0.f_2 = 1593794963;
	Var0.f_3 = iParam0;
	return DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
}

int func_496(int iParam0, int iParam1, var uParam2, float fParam3)
{
	struct<5> Var0;

	Var0 = Global_1058888->f_43923.f_283.f_4898;
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

void func_497(var uParam0, char* sParam1)
{
	char cVar0[64];

	SAVE::_0x443174C20B8B9E7F(uParam0, 8, sParam1);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iDrawable", 64);
	SAVE::_0x529B9CCD0972AF4D(uParam0, &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iAlbedo", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_1), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iNormal", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_2), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iMaterial", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_3), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iPalette", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_4), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iTint0", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_5), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iTint1", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_6), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iTint2", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_7), &cVar0);
	SAVE::_0xE0B45E983BFC0768();
}

int func_498(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1058888->f_40501 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = (Global_1058888->f_40501 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] < iParam0)
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

bool func_499(struct<29> Param0, var uParam29)
{
	return DATABINDING::_DATABINDING_READ_DATA_BOOL(Param0.f_28);
}

int func_500()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar4 = DATABINDING::_DATABINDING_READ_DATA_INT((Global_1935689->f_1225.f_5[0 /*30*/])->f_17);
	iVar5 = DATABINDING::_DATABINDING_READ_DATA_INT((Global_1935689->f_1225.f_5[0 /*30*/])->f_26);
	iVar0 = 0;
	while (iVar0 < 40)
	{
		iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT((Global_1935689->f_1225.f_5[iVar0 /*30*/])->f_17);
		iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT((Global_1935689->f_1225.f_5[iVar0 /*30*/])->f_26);
		if (iVar1 < iVar4)
		{
			iVar3 = iVar0;
			iVar4 = iVar1;
			iVar5 = iVar2;
		}
		else if (iVar1 == iVar4)
		{
			if (iVar2 < iVar5)
			{
				iVar3 = iVar0;
				iVar4 = iVar1;
				iVar5 = iVar2;
			}
		}
		iVar0++;
	}
	func_481(&(Global_1935689->f_1225.f_5[iVar3 /*30*/]));
	return iVar3;
}

void func_501(var uParam0, var uParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, struct<10> Param10)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1, &cParam2);
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_475(0), Param10);
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_475(1), Param10.f_1);
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_475(2), Param10.f_2);
	uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_475(53), Param10.f_3);
	uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_475(54), Param10.f_4);
	uParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_475(56), Param10.f_5);
	uParam0->f_7 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_475(55), Param10.f_6);
	if (Param10.f_7 == 0)
	{
		Param10.f_7 = joaat("ib_select");
	}
	uParam0->f_8 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_475(57), Param10.f_7);
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_475(58), Param10.f_8);
	uParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_475(59), Param10.f_9);
}

var func_502(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14, var uParam15, var uParam16)
{
	struct<10> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = uParam8;
	Var0.f_1 = uParam9;
	Var0.f_2 = uParam10;
	Var0.f_3 = iParam12;
	Var0.f_9 = iParam4;
	Var0.f_9.f_1 = uParam5;
	Var0.f_9.f_2 = uParam6;
	Var0.f_9.f_3 = uParam7;
	Var0.f_4.f_2 = uParam15;
	Var13.f_7 = 1;
	Var13 = uParam11;
	Var13.f_1 = uParam0;
	Var13.f_2 = uParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_7 = uParam16;
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam13, iParam14);
	return uVar21;
}

var func_503(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15, int iParam16, int iParam17, var uParam18, var uParam19)
{
	struct<10> Var0;
	struct<10> Var13;
	var uVar23;

	Var0 = -2;
	Var0 = uParam11;
	Var0.f_1 = uParam12;
	Var0.f_2 = uParam13;
	Var0.f_3 = iParam15;
	Var0.f_9 = iParam7;
	Var0.f_9.f_1 = uParam8;
	Var0.f_9.f_2 = uParam9;
	Var0.f_9.f_3 = uParam10;
	Var0.f_4.f_2 = uParam18;
	Var13.f_9 = 1;
	Var13 = uParam14;
	Var13.f_1 = uParam0;
	Var13.f_2 = uParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = uParam5;
	Var13.f_8 = uParam6;
	Var13.f_9 = uParam19;
	uVar23 = _NAMESPACE71::_0xC927890AA64E9661(&Var0, &Var13, iParam16, iParam17);
	return uVar23;
}

var func_504(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12, int iParam13)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = uParam7;
	Var0.f_1 = uParam8;
	Var0.f_2 = uParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = uParam4;
	Var0.f_4.f_1 = uParam6;
	Var0.f_4.f_2 = uParam5;
	Var13.f_7 = 1;
	Var13 = uParam10;
	Var13.f_1 = uParam0;
	Var13.f_2 = uParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

var func_505(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, int iParam16)
{
	struct<5> Var0;
	struct<10> Var13;
	var uVar23;

	Var0 = -2;
	Var0 = uParam10;
	Var0.f_1 = uParam11;
	Var0.f_2 = uParam12;
	Var0.f_3 = iParam14;
	Var0.f_4 = uParam7;
	Var0.f_4.f_1 = uParam9;
	Var0.f_4.f_2 = uParam8;
	Var13.f_9 = 1;
	Var13 = uParam13;
	Var13.f_1 = uParam0;
	Var13.f_2 = uParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = uParam5;
	Var13.f_8 = uParam6;
	Var13.f_9 = 1;
	uVar23 = _NAMESPACE71::_0xC927890AA64E9661(&Var0, &Var13, iParam15, iParam16);
	return uVar23;
}

void func_506(var uParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0, func_475(83));
	if (func_509(iVar0))
	{
		_NAMESPACE71::_0x2F901291EF177B02(iVar0, 1);
	}
}

void func_507()
{
	int iVar0;

	if (func_48() == -1)
	{
		return;
	}
	iVar0 = &Global_1225638;
	((*Global_1055058)[iVar0 /*116*/])->f_39 = func_264(Global_1572887->f_6, 1);
	((*Global_1055058)[iVar0 /*116*/])->f_39.f_1 = Global_1572887->f_80;
	((*Global_1055058)[iVar0 /*116*/])->f_39.f_2 = Global_1572887->f_80.f_1;
	((*Global_1055058)[iVar0 /*116*/])->f_39.f_3 = Global_1572887->f_80.f_2;
	((*Global_1055058)[iVar0 /*116*/])->f_39.f_4 = Global_1572887->f_80.f_3;
	((*Global_1055058)[iVar0 /*116*/])->f_39.f_8 = Global_1572887->f_80.f_4;
	((*Global_1055058)[iVar0 /*116*/])->f_39.f_5 = { Global_1572887->f_252 };
}

bool func_508()
{
	return &Global_1051043 != -1;
}

bool func_509(int iParam0)
{
	return iParam0 != 0;
}

