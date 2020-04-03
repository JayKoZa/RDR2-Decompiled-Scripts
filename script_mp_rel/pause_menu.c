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
	char* sLocal_21 = NULL;
	char* sLocal_22 = NULL;
	struct<184> Local_23 = { 0, -1, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 1;
	var uLocal_218 = 0;
	var uLocal_219 = 2;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	struct<21> Var4;
	bool bVar25;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	sLocal_21 = "props_misc@campfires@5_logs";
	sLocal_22 = "Script_PropCampfire";
	if (!func_1(&Local_23))
	{
	}
	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "mpProgress");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar0, "coopPercent", "0%");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar0, "awardsPercent", func_2());
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar0, "rankPercent", func_3());
	uVar1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "AllowedToSave", 0);
	uVar2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bAllowedToReplay", 0);
	uVar3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "sessionInfo");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar3, "characterName", &(Global_17172.f_54.f_644.f_1783));
	Local_23.f_181 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bDisplayMissionChallengeChecklist", 0);
	Local_23.f_182 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bAllowChecklistToggle", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bEnablePauseMenuPhotoMode", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bPauseMenuPhotoModeVisible", 0);
	Var4 = { Global_39.f_9 };
	if (TXD::_0xBA0163B277C2D2D0(-637848863))
	{
		TXD::_0xDB1BD07FB464584D(-637848863, 0);
	}
	if (TXD::_0xBA0163B277C2D2D0(-1930972465))
	{
		TXD::_0xDB1BD07FB464584D(-1930972465, 0);
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		if (!Global_17)
		{
			Global_39.f_9 = { Var4 };
		}
		func_4(uVar1, uVar2);
	}
	Local_23.f_179 = 0;
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uVar1, true);
	_NAMESPACE71::_0xDD1232B332CBB9E7(6, 1, 0);
	func_5(&Global_26384);
	func_6();
	while ((!SCRIPTS::_0x9E4EF615E307FBBE() && !func_7(Global_26384)) && !bVar25)
	{
		func_8(&Local_23);
		func_9(&Local_23);
		func_10();
		func_11(&Local_23);
		bVar25 = func_12();
		BUILTIN::WAIT(0);
	}
	if (bVar25)
	{
		CAM::DO_SCREEN_FADE_OUT(0);
		func_13(0, -1);
	}
	func_4(uVar1, uVar2);
}

int func_1(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 2;
	iVar2 = 1;
	while (iVar2 <= (iVar0 - 1))
	{
		iVar1 = func_14(iVar2, 1);
		if (!func_15(uParam0, iVar1))
		{
			return 0;
		}
		iVar2++;
	}
	return 1;
}

var func_2()
{
	char cVar0[16];
	float fVar2;

	fVar2 = STATS::_0x9D0F5D2E1951CD84();
	StringCopy(&cVar0, MISC::_0x2B6846401D68E563(fVar2, 1), 16);
	StringConCat(&cVar0, "%", 16);
	return func_16(cVar0);
}

var func_3()
{
	char cVar0[16];
	float fVar2;
	float fVar3;
	float fVar4;

	fVar2 = BUILTIN::TO_FLOAT(NETWORK::_0x32C90CDFAF40514C());
	fVar3 = BUILTIN::TO_FLOAT(999);
	fVar4 = ((fVar2 / fVar3) * 100f);
	StringCopy(&cVar0, MISC::_0x2B6846401D68E563(fVar4, 1), 16);
	StringConCat(&cVar0, "%", 16);
	return func_16(cVar0);
}

void func_4(var uParam0, var uParam1)
{
	if (func_7(Global_26384))
	{
		func_17();
	}
	if (Local_23.f_1 != -1)
	{
		NETWORK::TEXTURE_DOWNLOAD_RELEASE(Local_23.f_1);
	}
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam1);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Local_23.f_181);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Local_23.f_182);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Local_23.f_183);
	func_18(&Local_23);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_5(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

void func_6()
{
	struct<8> Var0;
	struct<4> Var8;
	int iVar12;
	char* sVar13;
	bool bVar14;
	bool bVar15;
	char* sVar16;
	char* sVar17;
	char* sVar18;
	int iVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	float fVar23;

	Var8 = { func_19(0, 1, 0, -1) };
	Var0 = { func_20(&Var8, 0, 1) };
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954472->f_5.f_1, &(Global_17172.f_54.f_644.f_1783));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954472->f_5.f_4, &Var0);
	func_21();
	func_22(0, "MP_PLAYER_PLAYER", "pm_player_mp");
	iVar12 = Global_1954472->f_1331.f_103;
	sVar13 = func_23(iVar12);
	if (iVar12 == -10)
	{
		sVar16 = "rpg_underweight";
		bVar14 = true;
	}
	else if (iVar12 == 10)
	{
		sVar16 = "rpg_overweight";
		bVar14 = true;
	}
	func_24(0, 0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CONDITION_WEIGHT"), MISC::_CREATE_VAR_STRING(2, sVar13), bVar14, sVar16, "pausemenu_player", bVar14, joaat("COLOR_WHITE"));
	if (Global_1954472->f_1331.f_103 == 0 || bVar14)
	{
		bVar15 = true;
	}
	func_25(1, bVar15, bVar14);
	func_25(2, bVar15, bVar14);
	func_25(3, bVar15, bVar14);
	sVar13 = "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
	bVar14 = false;
	sVar16 = "";
	if (func_26())
	{
		sVar13 = "PMPLAYER_CONDITION_TEMPERATURE_COLD";
		bVar14 = true;
		sVar16 = "rpg_cold";
	}
	else if (func_27())
	{
		sVar13 = "PMPLAYER_CONDITION_TEMPERATURE_HOT";
		bVar14 = true;
		sVar16 = "rpg_hot";
	}
	func_24(0, 1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CONDITION_TEMPERATURE"), MISC::_CREATE_VAR_STRING(2, sVar13), bVar14, sVar16, "pausemenu_player", bVar14, joaat("COLOR_WHITE"));
	func_28(1, bVar14, bVar14, sVar16);
	func_24(0, 2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_RANK"), "", 0, "Rank_Shield", "pm_player_mp", 1, joaat("COLOR_WHITE"));
	sVar13 = func_29(Global_1139395[&Global_1275573 /*34*/]);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1954472->f_5.f_14[0 /*82*/])->f_68[2]), sVar13);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1954472->f_5.f_14[0 /*82*/])->f_75[2]), true);
	sVar17 = NETWORK::_0xDB438CC9BC6F4022();
	sVar18 = func_30(Global_1139395[&Global_1275573 /*34*/] + 1);
	sVar13 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y_XP", sVar17, sVar18);
	func_24(0, 3, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_RANK_XP"), sVar13, 0, "", "", 0, joaat("COLOR_WHITE"));
	sVar16 = func_32(func_31(255));
	func_24(0, 4, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HONOR"), "", 0, sVar16, "pausemenu_player", 1, joaat("COLOR_WHITE"));
	sVar13 = func_34(func_33(PLAYER::PLAYER_ID(), 0), &bVar14, &iVar19);
	func_24(0, 5, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_GENERAL_HOSTILITY"), MISC::_CREATE_VAR_STRING(2, sVar13), bVar14, "ONLINE_OPTIONS_HOSTILITY", "mp_online_options", 1, iVar19);
	fVar20 = func_35(0, 2);
	fVar21 = BUILTIN::TO_FLOAT(func_36(0, 2));
	fVar21 = (fVar21 / func_37());
	fVar22 = ((fVar20 / 100f) * (fVar21 / 60f));
	fVar23 = (100f * (BUILTIN::TO_FLOAT(func_38(0, 2)) / fVar21));
	sVar13 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", BUILTIN::ROUND(fVar20));
	func_24(1, 0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC"), sVar13, 0, "", "", 0, joaat("COLOR_WHITE"));
	sVar13 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_TIME_VALUE_MINUTES", BUILTIN::ROUND(fVar22));
	func_24(1, 1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_TIME"), sVar13, 0, "", "", 0, joaat("COLOR_WHITE"));
	sVar13 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", BUILTIN::ROUND(fVar23));
	bVar14 = fVar23 > 100f;
	iVar19 = func_39(bVar14, joaat("COLOR_RED"), joaat("COLOR_WHITE"));
	func_24(1, 2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar13, bVar14, func_40(fVar23), "pausemenu_player_update", fVar23 != 100f, iVar19);
	bVar14 = func_41();
	func_42(1, bVar14, bVar14);
	fVar20 = func_35(1, 2);
	fVar21 = BUILTIN::TO_FLOAT(func_36(1, 2));
	fVar21 = (fVar21 / func_37());
	fVar22 = ((fVar20 / 100f) * (fVar21 / 60f));
	fVar23 = (100f * (BUILTIN::TO_FLOAT(func_38(1, 2)) / fVar21));
	sVar13 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", BUILTIN::ROUND(fVar20));
	func_24(2, 0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC"), sVar13, 0, "", "", 0, joaat("COLOR_WHITE"));
	sVar13 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_TIME_VALUE_MINUTES", BUILTIN::ROUND(fVar22));
	func_24(2, 1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_TIME"), sVar13, 0, "", "", 0, joaat("COLOR_WHITE"));
	sVar13 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", BUILTIN::ROUND(fVar23));
	bVar14 = fVar23 > 100f;
	iVar19 = func_39(bVar14, joaat("COLOR_RED"), joaat("COLOR_WHITE"));
	func_24(2, 2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar13, bVar14, func_40(fVar23), "pausemenu_player_update", fVar23 != 100f, iVar19);
	fVar20 = func_35(2, 2);
	fVar21 = BUILTIN::TO_FLOAT(func_36(2, 2));
	fVar21 = (fVar21 / func_37());
	fVar22 = ((fVar20 / 100f) * (fVar21 / 60f));
	fVar23 = (100f * (BUILTIN::TO_FLOAT(func_38(2, 2)) / fVar21));
	sVar13 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", BUILTIN::ROUND(fVar20));
	func_24(3, 0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC"), sVar13, 0, "", "", 0, joaat("COLOR_WHITE"));
	sVar13 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_TIME_VALUE_MINUTES", BUILTIN::ROUND(fVar22));
	func_24(3, 1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_TIME"), sVar13, 0, "", "", 0, joaat("COLOR_WHITE"));
	sVar13 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", BUILTIN::ROUND(fVar23));
	bVar14 = fVar23 > 100f;
	iVar19 = func_39(bVar14, joaat("COLOR_RED"), joaat("COLOR_WHITE"));
	func_24(3, 2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar13, bVar14, func_40(fVar23), "pausemenu_player_update", fVar23 != 100f, iVar19);
	sVar13 = MISC::_CREATE_VAR_STRING(2, "STRING", func_43());
	func_24(4, 0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_STORY_COMPLETE"), sVar13, 0, "", "", 0, joaat("COLOR_WHITE"));
	sVar13 = MISC::_CREATE_VAR_STRING(2, "STRING", func_44(-1756227506));
	func_24(4, 1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_TOTAL_KILLS"), sVar13, 0, "", "", 0, joaat("COLOR_WHITE"));
	sVar13 = MISC::_CREATE_VAR_STRING(2, "STRING", func_44(-1048906573));
	func_24(4, 2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_TOTAL_DEATHS"), sVar13, 0, "", "", 0, joaat("COLOR_WHITE"));
}

int func_7(struct<2> Param0)
{
	if (!func_45(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_46(Param0))
	{
		return 0;
	}
	return 1;
}

void func_8(var uParam0)
{
	bool bVar0;

	if (func_47(uParam0, 0))
	{
		func_48(uParam0, 0, 0);
	}
	if (!UIAPPS::_IS_APP_ACTIVE(29649618))
	{
		return;
	}
	bVar0 = UIAPPS::_IS_APP_RUNNING(29649618);
	if (uParam0->f_191 != bVar0)
	{
		uParam0->f_191 = bVar0;
		if (bVar0)
		{
			func_48(uParam0, 0, 1);
		}
	}
}

void func_9(var uParam0)
{
	struct<7> Var0;

	if (NETWORK::_0xCD954F330693F5F2())
	{
		switch (*uParam0)
		{
			case 0:
				if (NETWORK::_0xE2C3CEC3C0903A00("mugshot"))
				{
					NETWORK::_0x7A17B7981560FFA5("mugshot");
				}
				*uParam0 = 1;
				break;
			case 1:
				if (!NETWORK::_0xE2C3CEC3C0903A00("mugshot"))
				{
					Var0 = { func_49() };
					uParam0->f_1 = NETWORK::_0x9B5DB6CEAFAA10BB(&Var0, 0, "mugshot", 1);
					if (uParam0->f_1 != -1)
					{
						*uParam0 = 2;
					}
				}
				break;
			case 2:
				if (NETWORK::_GET_STATUS_OF_TEXTURE_DOWNLOAD(uParam0->f_1) == 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954472->f_5.f_2, "mugshot");
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954472->f_5.f_3, "mugshot");
					*uParam0 = 3;
				}
				break;
			case 3:
				break;
		}
	}
}

void func_10()
{
	struct<4> Var0;
	int iVar4;

	iVar4 = 29649618;
	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar4))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iVar4, &Var0))
		{
			switch (Var0)
			{
				case -1740156697:
					switch (Var0.f_2)
					{
						case 248393197:
							func_50(Var0.f_3);
							break;
					}
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					break;
				case -1203660660:
					switch (Var0.f_2)
					{
						case 766694521:
							func_51(455956792);
							break;
						case -385109718:
							func_52();
							break;
						case -609314343:
							func_53();
							break;
						case 1371972537:
							func_54();
							break;
						case -17440837:
							func_55();
							break;
						case -164517057:
							func_56();
							break;
						case -1123713079:
							func_57();
							break;
						case -1332231262:
							CAM::DO_SCREEN_FADE_OUT(0);
							func_58();
							break;
						case -1856718599:
							break;
					}
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					break;
				default:
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					break;
			}
		}
	}
}

void func_11(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = UIAPPS::_0x96FD694FE5BE55DC(29649618);
	iVar1 = func_59(uParam0);
	if (iVar0 != iVar1)
	{
		if (iVar1 != 0)
		{
			func_60(uParam0, iVar1);
		}
		func_61(uParam0, iVar0);
		func_62(uParam0, iVar0);
	}
	func_63(uParam0, iVar0);
}

int func_12()
{
	int iVar0;
	int iVar4;

	iVar4 = -37892458;
	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar4))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iVar4, &iVar0))
		{
			switch (iVar0)
			{
				case -1203660660:
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					return 1;
				case -1740156697:
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					break;
				default:
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					break;
			}
		}
	}
	return 0;
}

void func_13(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		func_64(iParam0, iParam1);
	}
	func_65(4);
	func_66(1);
}

int func_14(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1271225230;
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

int func_15(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1271225230:
			return func_67(uParam0);
	}
	return 0;
}

var func_16(char[4] cParam0, char[4] cParam1)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

void func_17()
{
	Global_0.f_6 = MISC::GET_GAME_TIMER();
	Global_0.f_3 = { Global_35 };
	func_68(&Global_0);
}

int func_18(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 2;
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		iVar1 = func_14(iVar2, 1);
		func_69(uParam0, iVar1);
		iVar2++;
	}
	return 1;
}

struct<4> func_19(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<4> Var0;
	struct<4> Var29;
	bool bVar33;
	int iVar34;
	struct<4> Var35;

	Var0.f_9 = -1591664384;
	if (!func_70(&Var0, bParam0))
	{
	}
	if (!bParam2)
	{
		Var29 = { func_71() };
		if (func_72() && INVENTORY::_0xB881CA836CC4B6D4(&Var29))
		{
			Var0 = { Var29 };
		}
		else if (!INVENTORY::_0x4C543D5DFCD2DAFD(&Var29, &Var0))
		{
			func_73(&Var0, 0);
		}
	}
	if (iParam3 == -1)
	{
		iParam3 = func_74(PLAYER::PLAYER_ID());
	}
	bVar33 = func_75(75);
	if (bVar33)
	{
		iParam3 = 3;
	}
	iVar34 = func_76(iParam3, 0);
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
			return func_77();
		}
		if (!func_78(&Var0, 0))
		{
			Var35 = { func_79(bParam0) };
		}
		else
		{
			Var35 = { Var0 };
		}
		return Var35;
	}
	return Var0;
}

struct<8> func_20(var uParam0, int iParam1, bool bParam2)
{
	char cVar0[64];
	struct<42> Var8;
	struct<8> Var50;

	StringCopy(&cVar0, "", 64);
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return cVar0;
	}
	Var8 = { func_80(uParam0, iParam1, 0) };
	cVar0 = { Var8.f_12 };
	if (bParam2)
	{
		if (func_81(uParam0, &Var50))
		{
			cVar0 = { Var50 };
		}
	}
	if (MISC::COMPARE_STRINGS(&cVar0, func_82(), false, -1) == 0)
	{
		StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(2, func_83(Var8.f_22)), 64);
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0) == 0)
	{
		if (Var8.f_22 != 0)
		{
			StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(2, func_84(Var8.f_22)), 64);
		}
		else
		{
			StringCopy(&cVar0, "", 64);
		}
	}
	return cVar0;
}

void func_21()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(&(Global_1954472->f_5.f_8[iVar0]));
		iVar0++;
	}
}

void func_22(int iParam0, char* sParam1, char* sParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1954472->f_5.f_14[iParam0 /*82*/])->f_8, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1954472->f_5.f_14[iParam0 /*82*/])->f_9, sParam2);
}

char* func_23(int iParam0)
{
	if (iParam0 == 0)
	{
		return "PMPLAYER_CONDITION_WEIGHT_PERFECT";
	}
	if (iParam0 <= -7)
	{
		return "PMPLAYER_CONDITION_WEIGHT_UNDERWEIGHT";
	}
	if (iParam0 >= 7)
	{
		return "PMPLAYER_CONDITION_WEIGHT_OVERWWEIGHT";
	}
	return "PMPLAYER_CONDITION_WEIGHT_AVERAGE";
}

void func_24(int iParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4, char* sParam5, char* sParam6, bool bParam7, int iParam8)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1954472->f_5.f_14[iParam0 /*82*/])->f_19[iParam1]), sParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1954472->f_5.f_14[iParam0 /*82*/])->f_26[iParam1]), sParam3);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1954472->f_5.f_14[iParam0 /*82*/])->f_33[iParam1]), bParam4);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1954472->f_5.f_14[iParam0 /*82*/])->f_40[iParam1]), sParam5);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1954472->f_5.f_14[iParam0 /*82*/])->f_47[iParam1]), sParam6);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(&((Global_1954472->f_5.f_14[iParam0 /*82*/])->f_54[iParam1]), iParam8);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1954472->f_5.f_14[iParam0 /*82*/])->f_61[iParam1]), bParam7);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(&(Global_1954472->f_5.f_8[iParam0]), iParam1, "player_attribute_item", &((Global_1954472->f_5.f_14[iParam0 /*82*/])->f_1[iParam1]));
}

void func_25(int iParam0, bool bParam1, bool bParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1954472->f_5.f_14[iParam0 /*82*/])->f_11, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1954472->f_5.f_14[iParam0 /*82*/])->f_10, bParam2);
}

bool func_26()
{
	return Global_1954472->f_1331.f_96 == 2;
}

bool func_27()
{
	return Global_1954472->f_1331.f_96 == 0;
}

void func_28(int iParam0, bool bParam1, bool bParam2, char* sParam3)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1954472->f_5.f_14[iParam0 /*82*/])->f_15, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1954472->f_5.f_14[iParam0 /*82*/])->f_14, bParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1954472->f_5.f_14[iParam0 /*82*/])->f_16, sParam3);
}

char* func_29(int iParam0)
{
	return MISC::_0x2B6846401D68E563(BUILTIN::TO_FLOAT(iParam0), 0);
}

int func_30(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 999)
	{
		return -1;
	}
	return &(Global_1132968->f_11.f_556[(iParam0 - 1)]);
}

int func_31(int iParam0)
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

char* func_32(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HONOR_BAD_8";
		case 1:
			return "HONOR_BAD_7";
		case 2:
			return "HONOR_BAD_6";
		case 3:
			return "HONOR_BAD_5";
		case 4:
			return "HONOR_BAD_4";
		case 5:
			return "HONOR_BAD_3";
		case 6:
			return "HONOR_BAD_2";
		case 7:
			return "HONOR_BAD_1";
		case 8:
			return "HONOR_GOOD_1";
		case 9:
			return "HONOR_GOOD_2";
		case 10:
			return "HONOR_GOOD_3";
		case 11:
			return "HONOR_GOOD_4";
		case 12:
			return "HONOR_GOOD_5";
		case 13:
			return "HONOR_GOOD_6";
		case 14:
			return "HONOR_GOOD_7";
		case 15:
			return "HONOR_GOOD_8";
	}
	return "HONOR_GOOD_1";
}

int func_33(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = BUILTIN::FLOOR(func_85(iParam0, bParam1));
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

char* func_34(int iParam0, bool bParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			*bParam1 = 0;
			*iParam2 = joaat("COLOR_WHITE");
			return "PMPLAYER_GENERAL_HOSTILITY_LOW";
		case 2:
		case 3:
			*bParam1 = 0;
			*iParam2 = joaat("COLOR_WHITE");
			return "PMPLAYER_GENERAL_HOSTILITY_MID";
		case 4:
		case 5:
		case 6:
			*bParam1 = 1;
			*iParam2 = joaat("COLOR_RED");
			return "PMPLAYER_GENERAL_HOSTILITY_HIGH";
	}
	return "PMPLAYER_GENERAL_HOSTILITY_MID";
}

float func_35(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_86(2);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1954472->f_1331.f_6[iParam0 /*3*/]);
		case 1:
			return &(Global_1954472->f_1465.f_2.f_6[iParam0 /*3*/]);
		default:
			break;
	}
	return -1f;
}

int func_36(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_86(2);
	}
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					if (func_41())
					{
						return 1200;
					}
					else if (func_26())
					{
						return 1200;
					}
					else if (func_27())
					{
						return 1200;
					}
					return Global_1954472->f_1331.f_81;
				case 2:
					return Global_1954472->f_1331.f_83;
				case 1:
					return Global_1954472->f_1331.f_82;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return Global_1954472->f_1465.f_2.f_81;
				case 2:
					return Global_1954472->f_1465.f_2.f_83;
				case 1:
					return Global_1954472->f_1465.f_2.f_82;
				default:
					break;
			}
			break;
	}
	return -1;
}

float func_37()
{
	return Global_1954472->f_1331.f_98;
}

int func_38(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_86(2);
	}
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return Global_1954472->f_1331.f_81;
				case 2:
					return Global_1954472->f_1331.f_83;
				case 1:
					return Global_1954472->f_1331.f_82;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return Global_1954472->f_1465.f_2.f_81;
				case 2:
					return Global_1954472->f_1465.f_2.f_83;
				case 1:
					return Global_1954472->f_1465.f_2.f_82;
				default:
					break;
			}
			break;
	}
	return -1;
}

int func_39(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

char* func_40(float fParam0)
{
	if (fParam0 > 100f)
	{
		return "RPG_ARROW_DOWN";
	}
	else if (fParam0 < 100f)
	{
		return "RPG_ARROW_UP";
	}
	return "";
}

bool func_41()
{
	return (Global_1140484->f_18706[20 /*195*/])->f_194;
}

void func_42(int iParam0, bool bParam1, bool bParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1954472->f_5.f_14[iParam0 /*82*/])->f_13, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1954472->f_5.f_14[iParam0 /*82*/])->f_12, bParam2);
}

int func_43()
{
	int iVar0;
	int iVar1;

	iVar0 = 13;
	while (iVar0 <= 25)
	{
		if (func_87(iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_44(int iParam0)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_88(iParam0) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

int func_45(int iParam0)
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

int func_46(int iParam0)
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

bool func_47(var uParam0, int iParam1)
{
	return func_89(uParam0->f_192, iParam1);
}

void func_48(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_90(&(uParam0->f_192), iParam1);
	}
	else
	{
		func_91(&(uParam0->f_192), iParam1);
	}
}

struct<7> func_49()
{
	struct<7> Var0;

	NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0);
	return Var0;
}

void func_50(var uParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0, "rpg_pause_item_index");
	switch (Global_1954472->f_5.f_1325)
	{
		case 0:
			func_92(iVar0);
			break;
		case 1:
			func_93(iVar0);
			break;
		case 2:
			func_94(iVar0);
			break;
		case 3:
			func_95(iVar0);
			break;
		case 4:
			func_96(iVar0);
			break;
		case 5:
			func_97(iVar0);
			break;
	}
}

void func_51(int iParam0)
{
	Global_1958309 = iParam0;
}

void func_52()
{
	char* sVar0;
	vector3 vVar1[24];
	bool bVar4;
	int iVar5;
	var uVar6;

	func_98(1, 1);
	Global_1954472->f_5.f_1325 = 0;
	func_100(MISC::_CREATE_VAR_STRING(2, func_99(0)));
	func_101(0, "PMPLAYER_STATISTICS");
	func_102(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0, 0, 0);
	sVar0 = func_29(Global_1139395[&Global_1275573 /*34*/]);
	func_102(2, "PMPLAYER_RANK", "", 1, 0, 0, "", "", sVar0, 1);
	func_102(3, "PMPLAYER_HONOR", "", 1, 0, 1, func_32(func_31(255)), "pausemenu_player", 0, 0);
	func_101(4, "PMPLAYER_CONDITIONS");
	StringCopy(&cVar1, DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1954472->f_5.f_14[0 /*82*/])->f_40[0])), 24);
	bVar4 = DATABINDING::_DATABINDING_READ_DATA_BOOL(&((Global_1954472->f_5.f_14[0 /*82*/])->f_61[0]));
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1954472->f_5.f_14[0 /*82*/])->f_26[0]));
	if (bVar4)
	{
		func_102(5, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 1, bVar4, &cVar1, "pausemenu_player", 0, 0);
	}
	else
	{
		func_102(5, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 0, 0, 0, 0, 0, 0);
	}
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1954472->f_5.f_14[0 /*82*/])->f_26[1]));
	if (func_27())
	{
		func_102(6, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 1, 1, "rpg_hot", "pausemenu_player", 0, 0);
	}
	else if (func_26())
	{
		func_102(6, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 1, 1, "rpg_cold", "pausemenu_player", 0, 0);
	}
	else
	{
		func_102(6, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 0, 0, 0, 0, 0, 0);
	}
	if (func_41())
	{
		func_102(7, "PMPLAYER_CONDITION_TOXICITY", MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CONDITION_TOXICITY_POISONED"), 1, 1, 1, "rpg_sick", "pausemenu_player", 0, 0);
	}
	else
	{
		func_102(7, "PMPLAYER_CONDITION_TOXICITY", "", 0, 0, 0, 0, 0, 0, 0);
	}
	sVar0 = func_34(func_33(PLAYER::PLAYER_ID(), 0), &iVar5, &uVar6);
	func_102(8, "PMPLAYER_GENERAL_HOSTILITY", MISC::_CREATE_VAR_STRING(2, sVar0), 1, iVar5, 1, "ONLINE_OPTIONS_HOSTILITY", "mp_online_options", 0, 0);
	func_103(0);
	func_104(0);
	func_92(1);
}

void func_53()
{
	char* sVar0;
	char* sVar1;
	vector3 vVar2[24];
	bool bVar5;

	Global_1954472->f_5.f_1325 = 1;
	func_98(1, 1);
	func_100(MISC::_CREATE_VAR_STRING(2, func_99(1)));
	func_101(0, "PMPLAYER_STATISTICS");
	func_102(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0, 0, 0);
	sVar1 = func_105(0, 2) + 5;
	func_102(2, "PMPLAYER_PROGRESSION", MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_LEVEL", sVar1), 1, 0, 0, 0, 0, 0, 0);
	func_101(3, "PMPLAYER_CONDITIONS");
	StringCopy(&cVar2, DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1954472->f_5.f_14[0 /*82*/])->f_40[0])), 24);
	bVar5 = DATABINDING::_DATABINDING_READ_DATA_BOOL(&((Global_1954472->f_5.f_14[0 /*82*/])->f_61[0]));
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1954472->f_5.f_14[0 /*82*/])->f_26[0]));
	if (bVar5)
	{
		func_102(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 1, bVar5, &cVar2, "pausemenu_player", 0, 0);
	}
	else
	{
		func_102(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 0, 0, 0, 0, 0, 0);
	}
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1954472->f_5.f_14[0 /*82*/])->f_26[1]));
	if (func_27())
	{
		func_102(5, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 1, 1, "rpg_hot", "pausemenu_player", 0, 0);
	}
	else if (func_26())
	{
		func_102(5, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 1, 1, "rpg_cold", "pausemenu_player", 0, 0);
	}
	else
	{
		func_102(5, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 0, 0, 0, 0, 0, 0);
	}
	if (func_41())
	{
		func_102(6, "PMPLAYER_CONDITION_TOXICITY", MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CONDITION_TOXICITY_POISONED"), 1, 1, 1, "rpg_sick", "pausemenu_player", 0, 0);
	}
	else
	{
		func_102(6, "PMPLAYER_CONDITION_TOXICITY", "", 0, 0, 0, 0, 0, 0, 0);
	}
	func_103(0);
	func_104(0);
	func_93(1);
	func_106("PMPLAYER_HEALTH_OVERVIEW_TOOLTIP");
}

void func_54()
{
	char* sVar0;
	char* sVar1;
	vector3 vVar2[24];
	bool bVar5;

	Global_1954472->f_5.f_1325 = 2;
	func_98(1, 1);
	func_100(MISC::_CREATE_VAR_STRING(2, func_99(2)));
	func_101(0, "PMPLAYER_STATISTICS");
	func_102(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0, 0, 0);
	sVar1 = func_105(1, 2) + 5;
	func_102(2, "PMPLAYER_PROGRESSION", MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_LEVEL", sVar1), 1, 0, 0, 0, 0, 0, 0);
	func_101(3, "PMPLAYER_CONDITIONS");
	StringCopy(&cVar2, DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1954472->f_5.f_14[0 /*82*/])->f_40[0])), 24);
	bVar5 = DATABINDING::_DATABINDING_READ_DATA_BOOL(&((Global_1954472->f_5.f_14[0 /*82*/])->f_61[0]));
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1954472->f_5.f_14[0 /*82*/])->f_26[0]));
	if (bVar5)
	{
		func_102(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 1, bVar5, &cVar2, "pausemenu_player", 0, 0);
	}
	else
	{
		func_102(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 0, 0, 0, 0, 0, 0);
	}
	func_103(0);
	func_104(0);
	func_94(1);
	func_106("PMPLAYER_STAMINA_OVERVIEW_TOOLTIP");
}

void func_55()
{
	char* sVar0;
	char* sVar1;
	vector3 vVar2[24];
	bool bVar5;

	Global_1954472->f_5.f_1325 = 3;
	func_98(1, 1);
	func_100(MISC::_CREATE_VAR_STRING(2, func_99(3)));
	func_101(0, "PMPLAYER_STATISTICS");
	func_102(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0, 0, 0);
	sVar1 = func_105(2, 2) + 5;
	func_102(2, "PMPLAYER_PROGRESSION", MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_LEVEL", sVar1), 1, 0, 0, 0, 0, 0, 0);
	func_101(3, "PMPLAYER_CONDITIONS");
	StringCopy(&cVar2, DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1954472->f_5.f_14[0 /*82*/])->f_40[0])), 24);
	bVar5 = DATABINDING::_DATABINDING_READ_DATA_BOOL(&((Global_1954472->f_5.f_14[0 /*82*/])->f_61[0]));
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1954472->f_5.f_14[0 /*82*/])->f_26[0]));
	if (bVar5)
	{
		func_102(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 1, bVar5, &cVar2, "pausemenu_player", 0, 0);
	}
	else
	{
		func_102(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 0, 0, 0, 0, 0, 0);
	}
	func_103(0);
	func_104(0);
	func_95(1);
	func_106("PMPLAYER_DEADEYE_OVERVIEW_TOOLTIP");
}

void func_56()
{
	char cVar0[64];
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	float fVar15;
	int iVar16;
	float fVar17;
	int iVar18;
	int iVar19;

	Global_1954472->f_5.f_1325 = 4;
	func_98(1, 1);
	func_100(MISC::_CREATE_VAR_STRING(2, func_99(4)));
	func_101(0, "PMPLAYER_LIFE_STATS");
	func_107();
	StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(10, "PMPLAYER_MONEY", func_109((func_108(1943033977) / 100f), 2)), 64);
	func_102(2, "PMPLAYER_TOTAL_CASH", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(10, "PMPLAYER_GOLD", func_109((func_108(-865370071) / 100f), 2)), 64);
	func_102(3, "PMPLAYER_TOTAL_GOLD", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(10, "PMPLAYER_MONEY", func_109((func_108(-550180269) / 100f), 2)), 64);
	func_102(4, "PMPLAYER_CASH_SPENT", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(10, "PMPLAYER_GOLD", func_109((func_108(1919677834) / 100f), 2)), 64);
	func_102(5, "PMPLAYER_GOLD_SPENT", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_44(-1756227506), 64);
	func_102(6, "PMPLAYER_TOTAL_KILLS", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_44(-1048906573), 64);
	func_102(7, "PMPLAYER_TOTAL_DEATHS", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	iVar8 = (func_44(85200619) / 1000);
	iVar9 = (iVar8 / 60);
	iVar10 = (iVar9 / 60);
	iVar11 = (iVar10 / 24);
	iVar10 = (iVar10 % 24);
	StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_DAYS_AND_HOURS", iVar11, iVar10), 64);
	func_102(8, "PMPLAYER_TIME_ONLINE", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	func_110("ALL HORSES", &iVar12, &iVar13, -1591664384, 0);
	func_111(iVar12);
	iVar14 = func_112(356744246);
	if (iVar14 >= iVar13)
	{
		IntToString(&cVar0, iVar14, 64);
	}
	else
	{
		IntToString(&cVar0, iVar13, 64);
		func_114(func_113(356744246), (iVar13 - iVar14));
	}
	func_102(9, "PMPLAYER_HORSES_OWNED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	func_101(10, "PMPLAYER_CRIME_STAT");
	IntToString(&cVar0, func_44(-190907223), 64);
	func_102(11, "PMPLAYER_PLAYERS_KILLED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_115(-1756227506, joaat("law")), 64);
	func_102(12, "PMPLAYER_LAW_KILLED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_115(-1756227506, -2141600017), 64);
	func_102(13, "PMPLAYER_PEDS_KILLED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	iVar8 = (func_115(719716304, -2140438327) / 1000);
	iVar9 = (iVar8 / 60);
	iVar10 = (iVar9 / 60);
	iVar11 = (iVar10 / 24);
	iVar10 = (iVar10 % 24);
	iVar9 = (iVar9 % 60);
	StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_DAYS_HOURS_MINUTES", iVar11, iVar10, iVar9), 64);
	func_102(14, "PMPLAYER_TIME_WANTED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_115(-985869509, 450674483), 64);
	func_102(15, "PMPLAYER_PEDS_LOOTED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	func_101(16, "PMPLAYER_HUNTING");
	IntToString(&cVar0, func_115(-1756227506, joaat("animal")), 64);
	func_102(17, "PMPLAYER_ANIMALS_KILLED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_116(1979337996, joaat("killed")), 64);
	func_102(18, "PMPLAYER_UNIQUE_ANIMALS_KILLED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, ((func_115(-212244724 /* GXTEntry: "Skinned 1 ~a~" */, -1740237568) + func_115(-212244724 /* GXTEntry: "Skinned 1 ~a~" */, -1274681111)) + func_115(-212244724 /* GXTEntry: "Skinned 1 ~a~" */, 1581042032)), 64);
	func_102(19, "PMPLAYER_ANIMALS_SKINNED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, ((func_116(1979337996, -212244724 /* GXTEntry: "Skinned 1 ~a~" */) + func_116(1979337996, -1366121835)) + func_116(1979337996, -717883113)), 64);
	func_102(20, "PMPLAYER_UNIQUE_ANIMALS_SKINNED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_115(-1628183403, 1201668600), 64);
	func_102(21, "PMPLAYER_PERFEECT_KILLS", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(10, "PMPLAYER_MONEY", func_109((func_108(324591737) / 100f), 2)), 64);
	func_102(22, "PMPLAYER_HUNTING_PROFITS", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_44(-851700877), 64);
	func_102(23, "PMPLAYER_FISH_CAUGHT", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	if (MISC::_SHOULD_USE_METRIC_WEIGHT())
	{
		fVar15 = (func_108(-789991418) * 0.453592f);
		StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(10, "PMPLAYER_KG", func_109(fVar15, 2)), 64);
	}
	else
	{
		iVar16 = func_44(-789991418);
		fVar17 = (func_108(-789991418) - BUILTIN::TO_FLOAT(iVar16));
		StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_LB_AND_OZ", iVar16, BUILTIN::ROUND((16f * fVar17))), 64);
	}
	func_102(24, "PMPLAYER_BIGGEST_FISH", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	func_101(25, "PMPLAYER_CONTENT");
	IntToString(&cVar0, func_43(), 64);
	func_102(26, "PMPLAYER_STORY_COMPLETE", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	iVar18 = func_115(-1892463704, 1994758582);
	iVar19 = func_115(1374282888, 1994758582);
	StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", (iVar18 * 100 / (iVar18 + iVar19))), 64);
	func_102(27, "PMPLAYER_SERIES_COMPLETE_PER", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, (iVar18 + iVar19), 64);
	func_102(28, "PMPLAYER_SERIES_COMPLETE", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	func_103(0);
	func_104(0);
	func_96(1);
	func_106("PMPLAYER_GENERAL_STATS_TOOLTIP");
}

void func_57()
{
	struct<4> Var0;
	int iVar4;
	bool bVar5;
	char* sVar6;
	char* sVar7;
	char cVar8[64];
	int iVar16;
	bool bVar17;
	char cVar18[64];
	float fVar26;
	bool bVar27;
	char cVar28[64];
	var uVar36;
	char cVar37[64];
	int iVar45;
	int iVar47;
	char cVar48[64];
	char cVar56[64];
	char* sVar64;

	func_98(1, 1);
	Global_1954472->f_5.f_1325 = 5;
	Var0 = { func_19(0, 1, 0, -1) };
	iVar4 = PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID());
	bVar5 = ENTITY::DOES_ENTITY_EXIST(iVar4);
	if (bVar5)
	{
		sVar6 = func_117(iVar4);
		sVar7 = func_118(iVar4);
	}
	else
	{
		sVar6 = func_119(&Var0, 0);
		sVar7 = func_120(&Var0, 0);
	}
	sVar6 = sVar6;
	StringCopy(&cVar8, MISC::_CREATE_VAR_STRING(2, "HORSE_BONDING_LEVEL", sVar7), 64);
	bVar17 = false;
	if (bVar5)
	{
		iVar16 = func_121(iVar4, 0);
	}
	else
	{
		iVar16 = func_122(Var0, 0);
	}
	if (iVar16 <= 50)
	{
		StringCopy(&cVar18, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_CONDITION_CLEANLINESS_CLEAN"), 64);
	}
	else if (iVar16 < 100)
	{
		StringCopy(&cVar18, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_CONDITION_CLEANLINESS_DIRTY"), 64);
		bVar17 = true;
	}
	else
	{
		StringCopy(&cVar18, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_CONDITION_CLEANLINESS_FILTHY"), 64);
		bVar17 = true;
	}
	fVar26 = 0f;
	bVar27 = false;
	if (bVar5)
	{
		fVar26 = func_123(iVar4);
	}
	if (fVar26 > 0f)
	{
		StringCopy(&cVar28, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_CONDITION_MOOD_AGITATED"), 64);
		bVar27 = true;
	}
	else
	{
		StringCopy(&cVar28, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_CONDITION_MOOD_CALM"), 64);
	}
	if (func_124(-415648720, &uVar36))
	{
		if (func_125(uVar36, &iVar45, 14460646, 0))
		{
			StringCopy(&cVar37, HUD::_GET_LABEL_TEXT_BY_HASH(iVar45), 64);
		}
	}
	if (func_124(986998820, &iVar47))
	{
		StringCopy(&cVar48, func_126(iVar47), 64);
	}
	StringCopy(&cVar56, DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1954472->f_5.f_4), 64);
	sVar64 = MISC::_CREATE_VAR_STRING(2, "AT_HORSE");
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar56))
	{
		sVar64 = func_127(&cVar56);
	}
	func_100(sVar64);
	func_101(0, "PMPLAYER_STATS");
	func_102(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0, 0, 0);
	func_102(2, "PMPLAYER_HORSE_PHYSIQUE_TITLE", "", 1, 0, 0, 0, 0, 0, 0);
	func_102(3, "PMPLAYER_HORSE_BONDING_TITLE", &cVar8, 1, 0, 0, 0, 0, 0, 0);
	func_102(4, "PMPLAYER_HORSE_HEALTH_TITLE", "", 1, 0, 0, 0, 0, 0, 0);
	func_102(5, "PMPLAYER_HORSE_STAMINA_TITLE", "", 1, 0, 0, 0, 0, 0, 0);
	func_101(6, "PMPLAYER_CONDITIONS");
	func_102(7, "PMPLAYER_HORSE_CONDITION_CLEANLINESS", &cVar18, 1, bVar17, bVar17, "rpg_horse_dirty", "pausemenu_player", 0, 0);
	func_102(8, "PMPLAYER_HORSE_CONDITION_MOOD", &cVar28, 1, bVar27, bVar27, "rpg_horse_agitation", "pausemenu_player", 0, 0);
	func_101(9, "PMPLAYER_HORSE_TACK");
	func_102(10, "PMPLAYER_HORSE_TACK_SADDLE_TITLE", &cVar37, 1, 0, 0, 0, 0, 0, 0);
	func_102(11, "PMPLAYER_HORSE_TACK_STIRRUPS_TITLE", &cVar48, 1, 0, 0, 0, 0, 0, 0);
	func_97(1);
}

void func_58()
{
	func_65(4);
	func_66(2);
	func_128(joaat("single_player"), 0);
}

int func_59(var uParam0)
{
	return uParam0->f_193;
}

void func_60(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1271225230:
			func_129(uParam0);
			break;
	}
}

void func_61(var uParam0, int iParam1)
{
	uParam0->f_193 = iParam1;
}

void func_62(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1271225230:
			func_130(uParam0);
			break;
	}
}

void func_63(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1271225230:
			func_131(uParam0);
			break;
	}
}

void func_64(int iParam0, int iParam1)
{
	if (Global_1572864->f_17 != 0)
	{
		return;
	}
	Global_1572864->f_17 = iParam0;
	Global_1572864->f_18 = iParam1;
}

void func_65(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_66(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	Global_1572864->f_1 = iParam0;
}

int func_67(var uParam0)
{
	if (!func_132(uParam0))
	{
		return 0;
	}
	return 1;
}

void func_68(var uParam0)
{
	uParam0->f_2 = 0;
}

void func_69(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1271225230:
			func_133(uParam0);
			break;
	}
}

int func_70(var uParam0, bool bParam1)
{
	struct<29> Var0;
	struct<14> Var29;
	int iVar43;
	int iVar44;
	struct<10> Var45;
	int iVar59;

	Var0.f_9 = -1591664384;
	Var29 = { func_134(0, -1591664384, -1591664384, -1591664384, -1675500494, 0, 0) };
	if (func_135(&Var29, &iVar43, &iVar44, bParam1))
	{
		Var45.f_9 = -1591664384;
		iVar59 = 0;
		while (iVar59 < iVar44)
		{
			if (func_136(&Var45, iVar59, iVar43, iVar44))
			{
				if (func_137(&Var45, &Var0, 0))
				{
					if (func_138(&(Var0.f_24), 16))
					{
						*uParam0 = { Var0 };
						func_111(iVar43);
						return 1;
					}
				}
			}
			iVar59++;
		}
		func_111(iVar43);
	}
	return 0;
}

struct<4> func_71()
{
	return Global_1270530->f_11.f_348;
}

bool func_72()
{
	return Global_1270530->f_11.f_356 > Global_1275573->f_21;
}

void func_73(var uParam0, bool bParam1)
{
	Global_1270530->f_11.f_348 = { *uParam0 };
	if (bParam1)
	{
		Global_1270530->f_11.f_356 = Global_1275573->f_21 + 10;
	}
}

int func_74(int iParam0)
{
	var uVar0;
	bool bVar1;

	uVar0 = func_139(iParam0);
	bVar1 = func_141(func_140(), 0, 0);
	if (!bVar1)
	{
		return 3;
	}
	return uVar0;
}

bool func_75(int iParam0)
{
	return func_142(&(Global_3145858->f_6), iParam0);
}

int func_76(int iParam0, int iParam1)
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

struct<4> func_77()
{
	struct<4> Var0;

	return Var0;
}

int func_78(var uParam0, bool bParam1)
{
	struct<29> Var0;
	struct<14> Var29;
	int iVar43;
	int iVar44;
	struct<10> Var45;
	int iVar59;

	Var0.f_9 = -1591664384;
	Var29 = { func_134(0, -1591664384, -1591664384, -1591664384, -1675500494, 0, 0) };
	if (func_135(&Var29, &iVar43, &iVar44, bParam1))
	{
		Var45.f_9 = -1591664384;
		iVar59 = 0;
		while (iVar59 < iVar44)
		{
			if (func_136(&Var45, iVar59, iVar43, iVar44))
			{
				if (func_137(&Var45, &Var0, 0))
				{
					if (func_138(&(Var0.f_24), 32))
					{
						*uParam0 = { Var0 };
						func_111(iVar43);
						return 1;
					}
				}
			}
			iVar59++;
		}
		func_111(iVar43);
	}
	return 0;
}

struct<4> func_79(bool bParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar16;

	Var2.f_9 = -1591664384;
	if (!func_110("ALL HORSES", &iVar0, &iVar1, -1591664384, bParam0))
	{
		return Var2;
	}
	iVar16 = 0;
	while (iVar16 < iVar1)
	{
		if (!func_136(&Var2, iVar16, iVar0, iVar1))
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
	func_111(iVar0);
	return Var2;
}

struct<42> func_80(var uParam0, int iParam1, bool bParam2)
{
	struct<42> Var0;

	Var0.f_10 = -1;
	Var0.f_23 = 3;
	Var0.f_28 = 13;
	func_143(uParam0, iParam1, &Var0, bParam2);
	return Var0;
}

int func_81(var uParam0, var uParam1)
{
	int iVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!INVENTORY::_0x4C543D5DFCD2DAFD(Global_1270530->f_1002[iVar0 /*24*/], uParam0))
		{
		}
		else
		{
			if ((Global_1270530->f_1002[iVar0 /*24*/])->f_23 < Global_1275573->f_21)
			{
				*uParam1 = { (Global_1270530->f_1002[iVar0 /*24*/])->f_7 };
				return 1;
			}
			*uParam1 = { (Global_1270530->f_1002[iVar0 /*24*/])->f_15 };
			return 1;
		}
		iVar0++;
	}
	return 0;
}

char* func_82()
{
	return "UNNAMED_HORSE";
}

char* func_83(int iParam0)
{
	switch (iParam0)
	{
		case -974145463: /* GXTEntry: "American Paint - Overo Coat" */
		case -842044823: /* GXTEntry: "American Paint - Grey Overo Coat" */
		case 92296905: /* GXTEntry: "American Paint - Splashed White Coat" */
		case 1432602132: /* GXTEntry: "American Paint - Tobiano Coat" */
			return "BREED_AMERICANPAINT";
		case -1943445834:
		case -783061276: /* GXTEntry: "American Standardbred - Silver Tail Buckskin Coat" */
		case -745453539: /* GXTEntry: "American Standardbred - Buckskin Coat" */
		case 1371398552: /* GXTEntry: "American Standardbred - Black Coat" */
		case 1583029039: /* GXTEntry: "American Standardbred - Palomino Dapple Coat" */
			return "BREED_AMERICANSTANDARDBRED";
		case -1322521536: /* GXTEntry: "Andalusian - Dark Bay Coat" */
		case 728055838: /* GXTEntry: "Andalusian - Rose Grey Coat" */
		case 1100711204: /* GXTEntry: "Andalusian - Perlino Coat" */
			return "BREED_ANDALUSIAN";
		case -1782334639: /* GXTEntry: "Appaloosa - Blanket Coat" */
		case -1266863668: /* GXTEntry: "Appaloosa - Leopard Coat" */
		case -1181052732: /* GXTEntry: "Appaloosa - Leopard Blanket Coat" */
		case -635244104: /* GXTEntry: "Appaloosa - Black Snowflake" */
		case -179102320: /* GXTEntry: "Appaloosa - Brown Leopard Coat" */
			return "BREED_APPALOOSA";
		case -2078767648: /* GXTEntry: "Arabian - Black Coat" */
		case -2055655009: /* GXTEntry: "Arabian - Red Chestnut Coat" */
		case -1427377767: /* GXTEntry: "Arabian - Grey Coat" */
		case -852553462: /* GXTEntry: "Arabian - Rose Grey Bay Coat" */
		case -80004868: /* GXTEntry: "Arabian - White Coat" */
			return "BREED_ARABIAN";
		case 153881023: /* GXTEntry: "Ardennes - Iron Grey Roan Coat" */
		case 836323303: /* GXTEntry: "Ardennes - Strawberry Roan Coat" */
		case 1813208211: /* GXTEntry: "Ardennes - Bay Roan Coat" */
			return "BREED_ARDENNES";
		case -1256798240: /* GXTEntry: "Belgian Draft - Blond Chestnut Coat" */
		case 2118089359:
			return "BREED_BELGIAN";
		case -1537586382: /* GXTEntry: "Dutch Warmblood - Sooty Buckskin Coat" */
		case 697143532: /* GXTEntry: "Dutch Warmblood - Chocolate Roan Coat" */
		case 1440692746: /* GXTEntry: "Dutch Warmblood - Seal Brown Coat" */
			return "BREED_DUTCHWARMBLOOD";
		case -1376299681: /* GXTEntry: "Hungarian Halfbred - Dark Dapple Grey Coat" */
		case -1293672675: /* GXTEntry: "Hungarian Halfbred - Liver Chestnut Coat" */
		case 281128160: /* GXTEntry: "Hungarian Halfbred - Flaxen Chestnut Coat" */
		case 1854519167: /* GXTEntry: "Hungarian Halfbred - Piebald Tobiano Coat" */
			return "BREED_HUNGARIANHALFBRED";
		case -1955947684:
		case 545109431: /* GXTEntry: "Kentucky Saddler - Silver Bay Coat" */
		case 1361788230: /* GXTEntry: "Kentucky Saddler - Chestnut Pinto Coat" */
		case 1974379573: /* GXTEntry: "Kentucky Saddler - Grey Coat" */
			return "BREED_KENTUCKYSADDLE";
		case -1179079660: /* GXTEntry: "Missouri Fox Trotter - Sable Champagne Coat" */
		case 1275638003: /* GXTEntry: "Missouri Fox Trotter - Amber Champagne Coat" */
		case 2083573823: /* GXTEntry: "Missouri Fox Trotter - Silver Dapple Pinto Coat" */
			return "BREED_MISSOURIFOXTROTTER";
		case 648301150: /* GXTEntry: "Morgan - Palomino Coat" */
		case 892601357: /* GXTEntry: "Morgan - Bay Roan Coat" */
		case 1224695367: /* GXTEntry: "Morgan - Flaxen Chestnut Coat" */
		case 1235275977: /* GXTEntry: "Morgan - Bay Coat" */
			return "BREED_MORGAN";
		case -1597490733: /* GXTEntry: "Mustang - Grullo Dun Coat" */
		case -1428527735: /* GXTEntry: "Mustang - Tiger Striped Bay Coat" */
		case 805526368: /* GXTEntry: "Mustang - Golden Dun Coat" */
		case 2000205872: /* GXTEntry: "Mustang - Wild Bay Coat" */
			return "BREED_MUSTANG";
		case -1714171692: /* GXTEntry: "Nokota - Reverse Dapple Roan Coat" */
		case -742726637: /* GXTEntry: "Nokota - White Roan Coat" */
		case 170010697: /* GXTEntry: "Nokota - Blue Roan Coat" */
			return "BREED_NOKOTA";
		case -1999094324: /* GXTEntry: "Shire - Light Grey Coat" */
		case -126555855: /* GXTEntry: "Shire - Raven Black Coat" */
		case -103101636: /* GXTEntry: "Shire - Dark Bay Coat" */
			return "BREED_SHIRE";
		case 237935328: /* GXTEntry: "Suffolk Punch - Red Chestnut Coat" */
		case 1724200240: /* GXTEntry: "Suffolk Punch - Sorrel Coat" */
			return "BREED_SUFFOLKPUNCH";
		case -887362763: /* GXTEntry: "Tennessee Walker - Dapple Bay Coat" */
		case -868094182: /* GXTEntry: "Tennessee Walker - Chestnut Coat" */
		case -847714194: /* GXTEntry: "Tennessee Walker - Red Roan Coat" */
		case 120848852: /* GXTEntry: "Tennessee Walker - Black Rabicano Coat" */
		case 1342496140: /* GXTEntry: "Tennessee Walker - Mahogany Bay Coat" */
		case 1756765331: /* GXTEntry: "Tennessee Walker - Flaxen Roan Coat" */
			return "BREED_TENNESSEEWALKER";
		case -1900569233: /* GXTEntry: "Thoroughbred - Dapple Grey Coat" */
		case -1262715164: /* GXTEntry: "Thoroughbred - Black Chestnut Coat" */
		case -813071670: /* GXTEntry: "Thoroughbred - Blood Bay Coat" */
		case 1688250187: /* GXTEntry: "Thoroughbred - Brindle Coat" */
		case 2010625508: /* GXTEntry: "Thoroughbred - Reverse Dapple Black Coat" */
			return "BREED_THOROUGHBRED";
		case -1882436593: /* GXTEntry: "Turkoman - Silver Coat" */
		case -225011104: /* GXTEntry: "Turkoman - Gold Coat" */
		case -136225010: /* GXTEntry: "Turkoman - Dark Bay Coat" */
			return "BREED_TURKOMAN";
		case -1365665739: /* GXTEntry: "Breton - Steel Grey Coat" */
		case -757978903: /* GXTEntry: "Breton - Red Roan Coat" */
		case 981469777: /* GXTEntry: "Breton - Seal Brown Coat" */
		case 1064693514: /* GXTEntry: "Breton - Mealy Dapple Bay Coat" */
		case 1592694494: /* GXTEntry: "Breton - Grullo Dun Coat" */
		case 1909854428: /* GXTEntry: "Breton - Sorrel Coat" */
			return "BREED_BRETON";
		case -1722101672: /* GXTEntry: "Criollo - Sorrel Overo Coat" */
		case -189605757: /* GXTEntry: "Criollo - Bay Frame Overo Coat" */
		case 3032834: /* GXTEntry: "Criollo - Bay Brindle Coat" */
		case 381495209: /* GXTEntry: "Criollo - Dun Coat" */
		case 863391233: /* GXTEntry: "Criollo - Marble Sabino Coat" */
		case 1577022605: /* GXTEntry: "Criollo - Blue Roan Overo Coat" */
			return "BREED_CRIOLLO";
		case -1698261864: /* GXTEntry: "Kladruber - Dapple Rose Grey Coat" */
		case -1540355548: /* GXTEntry: "Kladruber - White Coat" */
		case -670301166: /* GXTEntry: "Kladruber - Silver Coat" */
		case -601560591: /* GXTEntry: "Kladruber - Cremello Coat" */
		case -370362766: /* GXTEntry: "Kladruber - Grey Coat" */
		case 885568364: /* GXTEntry: "Kladruber - Black Coat" */
			return "BREED_KLADRUBER";
		case -1824684932:
		case -769035812:
		case -302057902:
		case 821735821:
		case 1257620801:
		case 1589592948:
			return "BREED_NORFOLKROADSTER";
		case -1331210307: /* GXTEntry: "Donkey" */
			return "BREED_DONKEY";
		case -1784502482: /* GXTEntry: "Mule - Painted" */
		case 122449722: /* GXTEntry: "Mule" */
			return "BREED_MULE";
		case 294243421: /* GXTEntry: "Dutch Warmblood - Cremello Gold Coat" */
			return "BREED_DUTCHWARMBLOOD";
		case -997197050: /* GXTEntry: "Thoroughbred - Seal Brown Coat" */
			return "BREED_THOROUGHBRED";
		case -235714362: /* GXTEntry: "Appaloosa - Blanket Coat" */
			return "BREED_TENNESSEEWALKER";
		case -1678164: /* GXTEntry: "Nokota - Blue Roan Coat" */
			return "BREED_NOKOTA";
		case -977833913: /* GXTEntry: "Tennessee Walker - Black Rabicano Coat" */
			return "BREED_APPALOOSA";
		case 1589164943: /* GXTEntry: "Thoroughbred - Silver Bay Coat" */
			return "BREED_THOROUGHBRED";
		case -1087523615: /* GXTEntry: "American Paint - Splashed White Coat" */
			return "BREED_AMERICANPAINT";
		case -496814209: /* GXTEntry: "Ardennes - Chestnut Coat" */
			return "BREED_ARDENNES";
		case 2109055751: /* GXTEntry: "Appaloosa - Grey Snowcap Spotted Coat" */
			return "BREED_APPALOOSA";
		case -776673611: /* GXTEntry: "Nokota - Grey Roan Sabino Coat" */
			return "BREED_NOKOTA";
		case 1764402253: /* GXTEntry: "Arabian - White Albino Coat" */
			return "BREED_ARABIAN";
		case -1417310078: /* GXTEntry: "Turkoman - Silver Coat" */
			return "BREED_TURKOMAN";
		case 1096273915: /* GXTEntry: "American Paint - Grey Overo Coat" */
			return "BREED_AMERICANPAINT";
		case 772751081: /* GXTEntry: "Hungarian Halfbred - Silver Dark Bay Coat" */
			return "BREED_HUNGARIANHALFBRED";
		case -1140435723: /* GXTEntry: "Nokota - Smoky Black Coat" */
			return "BREED_NOKOTA";
		case 2002524329: /* GXTEntry: "Tennessee Walker - Flaxen Roan" */
			return "BREED_TENNESSEEWALKER";
		case 1151530184: /* GXTEntry: "Mustang - Light Palomino Coat" */
			return "BREED_MUSTANG";
		case -1266525037: /* GXTEntry: "Missouri Fox Trotter - Black Coat" */
			return "BREED_MISSOURIFOXTROTTER";
		case -2018137175: /* GXTEntry: "Turkoman - Gold Dapple Coat" */
			return "BREED_TURKOMAN";
		case -574151692: /* GXTEntry: "Mustang - Dark Bay Roan Coat" */
			return "BREED_MUSTANG";
		case 649786380: /* GXTEntry: "American Standardbred - Silver Tail Buckskin Coat" */
			return "BREED_AMERICANSTANDARDBRED";
		case -1921328920: /* GXTEntry: "Appaloosa - Brown Leopard Coat" */
			return "BREED_APPALOOSA";
		case -837607790: /* GXTEntry: "Kentucky Saddler - Sabino Coat" */
			return "BREED_KENTUCKYSADDLE";
		case 370424594: /* GXTEntry: "Appaloosa - Few Spot Buckskin Coat" */
			return "BREED_APPALOOSA";
		case -364764277: /* GXTEntry: "Scrawny Nag" */
			return "BREED_MANGY_BACKUP";
		default:
			break;
	}
	return "BREED_INVALID";
}

var func_84(int iParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, func_144(iParam0), 64);
	StringConCat(&cVar0, "_BREED", 64);
	return func_127(&cVar0);
}

float func_85(int iParam0, bool bParam1)
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

int func_86(int iParam0)
{
	return func_146(func_145(iParam0));
}

int func_87(int iParam0)
{
	int iVar0;

	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	iVar0 = func_147(2, iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return NETWORK::_0xFBE782B3165AC8EC(iVar0);
}

struct<2> func_88(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

bool func_89(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(iParam0, iParam1);
}

void func_90(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_91(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_92(int iParam0)
{
	char* sVar0;
	char* sVar1;

	func_148(0);
	func_149(0);
	func_150(0);
	func_103(0);
	func_104(0);
	func_151(0);
	func_152(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_153("MP_PLAYER_PLAYER", 0);
			func_155(func_154(0));
			func_156("PMPLAYER_OVERVIEW");
			func_98(0, 1);
			func_106("PMPLAYER_OVERVIEW_TOOLTIP");
			func_148(1);
			func_149(1);
			func_150(1);
			break;
		case 2:
			func_153("MP_PLAYER_PLAYER", 0);
			func_155(func_154(0));
			func_156("PMPLAYER_RANK");
			func_98(0, 1);
			sVar0 = NETWORK::_0xDB438CC9BC6F4022();
			sVar1 = func_30(Global_1139395[&Global_1275573 /*34*/] + 1);
			func_157(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_PROGRESSION_STAT_NEXT"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y_XP", sVar0, sVar1), 0, 0, 0, 0, 0, 0, 0, 0);
			func_106("PMPLAYER_RANK_TOOLTIP");
			break;
		case 3:
			func_153("MP_PLAYER_HONOR", 0);
			func_155("PMPLAYER_GENERAL_HONOR_DESC");
			func_156("PMPLAYER_HONOR");
			func_98(0, 1);
			func_106("PMPLAYER_HONOR_TOOLTIP");
			break;
		case 5:
			func_153(func_158(), 0);
			func_155("PMPLAYER_CONDITION_WEIGHT_DESC");
			func_156("PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT");
			func_98(0, 1);
			func_159(0);
			func_106("PMPLAYER_CONDITION_WEIGHT_TOOLTIP");
			break;
		case 6:
			func_153(func_160(), func_161());
			func_155("PMPLAYER_CONDITION_TEMPERATURE_DESC");
			func_156("PMPLAYER_CONDITION_TEMPERATURE");
			func_98(0, 1);
			func_162();
			func_106("PMPLAYER_CONDITION_TEMPERATURE_TOOLTIP");
			break;
		case 7:
			func_153(func_163(), func_164());
			func_155("PMPLAYER_CONDITION_TOXICITY_DESC");
			func_156("PMPLAYER_CONDITION_TOXICITY");
			func_98(0, 1);
			func_165();
			func_106("PMPLAYER_CONDITION_TOXICITY_TOOLTIP_NET");
			break;
		case 8:
			func_153("MP_PLAYER_HOSTILITY", 0);
			func_155("PMPLAYER_CONDITION_HOSTILITY_DESC_NET");
			func_156("PMPLAYER_GENERAL_HOSTILITY");
			func_98(0, 1);
			func_106("PMPLAYER_GENERAL_HOSTILITY_TOOLTIP");
			break;
	}
}

void func_93(int iParam0)
{
	char* sVar0;
	bool bVar1;
	bool bVar2;

	func_148(0);
	func_149(0);
	func_150(0);
	func_103(0);
	func_104(0);
	func_151(0);
	func_152(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_153(func_166(1, 0), 0);
			func_155(func_154(1));
			func_156("PMPLAYER_OVERVIEW");
			func_98(0, 1);
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1954472->f_5.f_14[1 /*82*/])->f_26[0]));
			func_157(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1954472->f_5.f_14[1 /*82*/])->f_26[1]));
			func_157(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_TIME"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1954472->f_5.f_14[1 /*82*/])->f_26[2]));
			bVar1 = DATABINDING::_DATABINDING_READ_DATA_BOOL(&((Global_1954472->f_5.f_14[1 /*82*/])->f_33[2]));
			bVar2 = DATABINDING::_DATABINDING_READ_DATA_BOOL(&((Global_1954472->f_5.f_14[1 /*82*/])->f_61[2]));
			func_157(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar0, 1, 0, bVar1, 0, 0f, 0f, 0f, "RPG_Health");
			if (bVar1)
			{
				func_167(2, "RPG_ARROW_DOWN", 0);
			}
			else if (bVar2)
			{
				func_167(2, "RPG_ARROW_UP", 0);
			}
			func_148(1);
			func_106("");
			break;
		case 2:
			func_153(func_166(1, 0), 0);
			func_155("PMPLAYER_HEALTH_PROGRESSION_DESC");
			func_156("PMPLAYER_PROGRESSION");
			func_98(0, 1);
			func_168(0, "PMPLAYER_PROGRESSION_STAT_NEXT", "PMPLAYER_HEALTH_PROGRESSION_STAT_MAX", "toast_rpg_level_health");
			func_106("");
			break;
		case 4:
			func_153(func_158(), 0);
			func_155("PMPLAYER_CONDITION_WEIGHT_DESC");
			func_156("PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT");
			func_98(0, 1);
			func_159(1);
			func_106("PMPLAYER_CONDITION_WEIGHT_TOOLTIP");
			break;
		case 5:
			func_153(func_160(), func_161());
			func_155("PMPLAYER_CONDITION_TEMPERATURE_DESC");
			func_156("PMPLAYER_CONDITION_TEMPERATURE");
			func_98(0, 1);
			func_162();
			func_106("PMPLAYER_CONDITION_TEMPERATURE_TOOLTIP");
			break;
		case 6:
			func_153(func_163(), func_164());
			func_155("PMPLAYER_CONDITION_TOXICITY_DESC");
			func_156("PMPLAYER_CONDITION_TOXICITY");
			func_98(0, 1);
			func_165();
			func_106("PMPLAYER_CONDITION_TOXICITY_TOOLTIP_NET");
			break;
	}
}

void func_94(int iParam0)
{
	char* sVar0;
	bool bVar1;
	bool bVar2;

	func_148(0);
	func_149(0);
	func_150(0);
	func_103(0);
	func_104(0);
	func_151(0);
	func_152(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_153(func_166(2, 0), 0);
			func_155(func_154(2));
			func_156("PMPLAYER_OVERVIEW");
			func_98(0, 1);
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1954472->f_5.f_14[2 /*82*/])->f_26[0]));
			func_157(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Stamina");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1954472->f_5.f_14[2 /*82*/])->f_26[1]));
			func_157(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_TIME"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Stamina");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1954472->f_5.f_14[2 /*82*/])->f_26[2]));
			bVar1 = DATABINDING::_DATABINDING_READ_DATA_BOOL(&((Global_1954472->f_5.f_14[2 /*82*/])->f_33[2]));
			bVar2 = DATABINDING::_DATABINDING_READ_DATA_BOOL(&((Global_1954472->f_5.f_14[2 /*82*/])->f_61[2]));
			func_157(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar0, 1, 0, bVar1, 0, 0f, 0f, 0f, "RPG_Stamina");
			if (bVar1)
			{
				func_167(2, "RPG_ARROW_DOWN", 0);
			}
			else if (bVar2)
			{
				func_167(2, "RPG_ARROW_UP", 0);
			}
			func_149(1);
			func_106("");
			break;
		case 2:
			func_153(func_166(2, 0), 0);
			func_155("PMPLAYER_STAMINA_PROGRESSION_DESC");
			func_156("PMPLAYER_PROGRESSION");
			func_98(0, 1);
			func_168(1, "PMPLAYER_PROGRESSION_STAT_NEXT", "PMPLAYER_STAMINA_PROGRESSION_STAT_MAX", "toast_rpg_level_stamina");
			func_106("");
			break;
		case 4:
			func_153(func_158(), 0);
			func_155("PMPLAYER_CONDITION_WEIGHT_DESC");
			func_156("PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT");
			func_98(0, 1);
			func_159(2);
			func_106("PMPLAYER_CONDITION_WEIGHT_TOOLTIP");
			break;
	}
}

void func_95(int iParam0)
{
	char* sVar0;
	bool bVar1;
	bool bVar2;

	func_148(0);
	func_149(0);
	func_150(0);
	func_103(0);
	func_104(0);
	func_151(0);
	func_152(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_153(func_166(3, 0), 0);
			func_155(func_154(3));
			func_156("PMPLAYER_OVERVIEW");
			func_98(0, 1);
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1954472->f_5.f_14[3 /*82*/])->f_26[0]));
			func_157(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Dead_Eye");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1954472->f_5.f_14[3 /*82*/])->f_26[1]));
			func_157(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_TIME"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Dead_Eye");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1954472->f_5.f_14[3 /*82*/])->f_26[2]));
			bVar1 = DATABINDING::_DATABINDING_READ_DATA_BOOL(&((Global_1954472->f_5.f_14[3 /*82*/])->f_33[2]));
			bVar2 = DATABINDING::_DATABINDING_READ_DATA_BOOL(&((Global_1954472->f_5.f_14[3 /*82*/])->f_61[2]));
			func_157(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar0, 1, 0, bVar1, 0, 0f, 0f, 0f, "RPG_Dead_Eye");
			if (bVar1)
			{
				func_167(2, "RPG_ARROW_DOWN", 0);
			}
			else if (bVar2)
			{
				func_167(2, "RPG_ARROW_UP", 0);
			}
			func_150(1);
			func_106("");
			break;
		case 2:
			func_153(func_166(3, 0), 0);
			func_155("PMPLAYER_DEAD_EYE_PROGRESSION_DESC");
			func_156("PMPLAYER_PROGRESSION");
			func_98(0, 1);
			func_168(2, "PMPLAYER_PROGRESSION_STAT_NEXT", "PMPLAYER_DEAD_EYE_PROGRESSION_STAT_MAX", "toast_rpg_level_deadeye");
			func_106("");
			break;
		case 4:
			func_153(func_158(), 0);
			func_155("PMPLAYER_CONDITION_WEIGHT_DESC");
			func_156("PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT");
			func_98(0, 1);
			func_159(3);
			func_106("PMPLAYER_CONDITION_WEIGHT_TOOLTIP");
			break;
	}
}

void func_96(int iParam0)
{
	char* sVar0;

	func_148(0);
	func_149(0);
	func_150(0);
	func_103(0);
	func_104(0);
	func_151(0);
	func_152(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_153("MP_PLAYER_GENERAL_LIFE_STATS", 0);
			break;
		case 2:
		case 3:
		case 4:
		case 5:
			func_153("MP_PLAYER_GENERAL_FINANCES", 0);
			break;
		case 6:
		case 7:
			func_153("MP_PLAYER_GENERAL_COMBAT", 0);
			break;
		case 8:
		case 9:
			func_153("MP_PLAYER_GENERAL_TRAVEL", 0);
			break;
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
			func_153("MP_PLAYER_GENERAL_CRIME", 0);
			break;
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
			func_153("MP_PLAYER_GENERAL_HUNTING", 0);
			break;
		case 26:
		case 27:
		case 28:
			func_153("MP_PLAYER_GENERAL_CONTENT", 0);
			break;
	}
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING((Global_1954472->f_5.f_425.f_24[iParam0 /*25*/])->f_16);
	func_155(func_154(4));
	func_156(sVar0);
	func_98(0, 1);
}

void func_97(int iParam0)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	char cVar15[32];
	int iVar19;
	int iVar20;
	struct<4> Var21;
	float fVar25;
	float fVar26;
	float fVar27;
	float fVar28;
	float fVar29;
	float fVar30;
	int iVar31;
	int iVar32;
	char* sVar33;
	char* sVar34;

	Var0 = { func_19(0, 1, 0, -1) };
	iVar4 = func_169(&Var0, 0);
	iVar5 = func_170(iVar4);
	iVar6 = PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID());
	bVar11 = ENTITY::DOES_ENTITY_EXIST(iVar6);
	if (bVar11)
	{
		iVar7 = func_171(iVar6);
		iVar9 = func_172(iVar6);
	}
	else
	{
		iVar7 = func_173(iVar5);
		iVar9 = func_174(iVar5);
	}
	iVar8 = func_175(Var0, 0);
	iVar10 = func_175(Var0, 1);
	func_148(0);
	func_149(0);
	func_150(0);
	func_103(0);
	func_104(0);
	func_151(0);
	func_152(0, "", "");
	bVar13 = true;
	switch (iParam0)
	{
		case 1:
			func_153(func_166(5, 0), "pausemenu_player");
			func_155(func_154(5));
			func_156("PMPLAYER_OVERVIEW");
			func_98(0, 1);
			Var21 = { func_19(0, 1, 0, -1) };
			func_176(&Var21, &iVar19, &iVar20);
			iVar19 = BUILTIN::FLOOR((IntToFloat(iVar19) * 0.01f));
			iVar20 = BUILTIN::FLOOR((IntToFloat(iVar20) * 0.01f));
			fVar25 = (IntToFloat(func_177(iVar5) + 1) * 10f);
			fVar26 = (fVar25 + (BUILTIN::TO_FLOAT(iVar19) * 10f));
			fVar27 = ((fVar25 + (3f * 10f)) * 0.01f);
			fVar28 = (IntToFloat(func_178(iVar5) + 1) * 10f);
			fVar29 = (fVar28 + (BUILTIN::TO_FLOAT(iVar20) * 10f));
			fVar30 = ((fVar28 + (2f * 10f)) * 0.01f);
			func_157(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_SPEED"), "", 0, 0, 0, 1, fVar25, fVar26, fVar27, 0);
			func_157(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_ACCELERATION"), "", 0, 0, 0, 1, fVar28, fVar29, fVar30, 0);
			func_157(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_HANDLING"), MISC::_CREATE_VAR_STRING(2, func_180(func_179(iVar5))), 0, 0, 0, 0, 0, 0, 0, 0);
			func_103(1);
			func_104(1);
			func_151(1);
			func_181(10, (IntToFloat(iVar7 + 1) / 10f), BUILTIN::ROUND(((IntToFloat(iVar8) / 100f) * 15f)));
			func_182(10, (IntToFloat(iVar9 + 1) / 10f), BUILTIN::ROUND(((IntToFloat(iVar10) / 100f) * 15f)));
			func_106("PMPLAYER_HORSE_OVERVIEW_TIP");
			break;
		case 2:
			func_153(func_166(5, 0), "pausemenu_player");
			func_155("PMPLAYER_HORSE_PHYSIQUE_DESC");
			func_156("PMPLAYER_HORSE_PHYSIQUE_TITLE");
			func_98(0, 1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar6))
			{
				iVar14 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar6, 13);
			}
			else if (func_183(&Var0, 0, &iVar12))
			{
				bVar13 = false;
				switch (iVar12)
				{
					case 0:
						StringCopy(&cVar15, "HORSE_WEIGHT_MALNOURISHED", 32);
						break;
					case 1:
						StringCopy(&cVar15, "HORSE_WEIGHT_THIN", 32);
						break;
					case 2:
						StringCopy(&cVar15, "HORSE_WEIGHT_FIT", 32);
						break;
					case 3:
						StringCopy(&cVar15, "HORSE_WEIGHT_OVERWEIGHT", 32);
						break;
					case 4:
						StringCopy(&cVar15, "HORSE_WEIGHT_OBESE", 32);
						break;
					default:
						bVar13 = true;
						iVar14 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iVar5, 13);
						break;
				}
			}
			else
			{
				iVar14 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iVar5, 13);
			}
			if (bVar13)
			{
				if (iVar14 < 10)
				{
					StringCopy(&cVar15, "HORSE_WEIGHT_MALNOURISHED", 32);
				}
				else if (iVar14 < 30)
				{
					StringCopy(&cVar15, "HORSE_WEIGHT_THIN", 32);
				}
				else if (iVar14 < 70)
				{
					StringCopy(&cVar15, "HORSE_WEIGHT_FIT", 32);
				}
				else if (iVar14 < 90)
				{
					StringCopy(&cVar15, "HORSE_WEIGHT_OVERWEIGHT", 32);
				}
				else
				{
					StringCopy(&cVar15, "HORSE_WEIGHT_OBESE", 32);
				}
			}
			iVar31 = 1;
			if (func_184(Var0, -653439684, 0, -1) == 515427499)
			{
				iVar31 = 2;
			}
			if (INVENTORY::_0xB881CA836CC4B6D4(&Var0))
			{
				func_157(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_TYPE"), MISC::_CREATE_VAR_STRING(2, func_186(func_185(iVar5), iVar4)), 0, 0, 0, 0, 0, 0, 0, 0);
				func_157(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_BREED"), MISC::_CREATE_VAR_STRING(2, func_84(iVar4)), 0, 0, 0, 0, 0, 0, 0, 0);
				func_157(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_GENDER"), MISC::_CREATE_VAR_STRING(2, func_187(iVar31)), 0, 0, 0, 0, 0, 0, 0, 0);
				func_157(3, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT"), MISC::_CREATE_VAR_STRING(2, &cVar15), 0, 0, 0, 0, 0, 0, 0, 0);
				func_157(4, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_COAT"), MISC::_CREATE_VAR_STRING(2, func_188(iVar4)), 0, 0, 0, 0, 0, 0, 0, 0);
			}
			else
			{
				func_157(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_TYPE"), "", 0, 0, 0, 0, 0, 0, 0, 0);
				func_157(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_BREED"), "", 0, 0, 0, 0, 0, 0, 0, 0);
				func_157(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_GENDER"), "", 0, 0, 0, 0, 0, 0, 0, 0);
				func_157(3, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT"), "", 0, 0, 0, 0, 0, 0, 0, 0);
				func_157(4, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_COAT"), "", 0, 0, 0, 0, 0, 0, 0, 0);
			}
			func_106("PMPLAYER_HORSE_PHYSIQUE_TIP");
			break;
		case 3:
			func_153("MP_PLAYER_HORSE_BONDING", 0);
			func_155("PMPLAYER_HORSE_BONDING_DESC");
			func_156("PMPLAYER_HORSE_BONDING_TITLE");
			func_98(0, 1);
			if (bVar11)
			{
				sVar33 = func_117(iVar6);
				iVar32 = func_118(iVar6);
			}
			else
			{
				sVar33 = func_119(&Var0, 0);
				iVar32 = func_120(&Var0, 0);
			}
			if (iVar32 < 4)
			{
				sVar34 = func_189(iVar5, iVar32 + 1);
			}
			else
			{
				sVar34 = func_189(iVar5, iVar32);
				sVar33 = sVar34;
			}
			func_157(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_LEVEL"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", iVar32, 4), 0, 0, 0, 0, 0, 0, 0, 0);
			func_157(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_PROGRESSION_STAT_NEXT"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", sVar33, sVar34), 0, 0, 0, 0, 0, 0, 0, 0);
			func_106("PMPLAYER_HORSE_BONDING_TIP");
			func_151(1);
			break;
		case 4:
			func_153("MP_PLAYER_HORSE_HEALTH", 0);
			func_155("PMPLAYER_HORSE_HEALTH_DESC");
			func_156("PMPLAYER_HORSE_HEALTH_TITLE");
			func_98(0, 1);
			func_157(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_LEVEL"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", iVar7 + 1, 10), 0, 0, 0, 0, 0, 0, 0, 0);
			func_157(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", iVar8), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Health");
			func_190(2, &Var0, 0);
			func_106("PMPLAYER_HORSE_HEALTH_TIP");
			break;
		case 5:
			func_153("MP_PLAYER_HORSE_STAMINA", 0);
			func_155("PMPLAYER_HORSE_STAMINA_DESC");
			func_156("PMPLAYER_HORSE_STAMINA_TITLE");
			func_98(0, 1);
			func_157(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_LEVEL"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", iVar9 + 1, 10), 0, 0, 0, 0, 0, 0, 0, 0);
			func_157(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", iVar10), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
			func_190(2, &Var0, 1);
			func_106("PMPLAYER_HORSE_STAMINA_TIP");
			break;
		case 7:
			func_153("MP_PLAYER_HORSE_CLEANLINESS", 0);
			func_155("PMPLAYER_HORSE_CONDITION_CLEANLINESS_DESC");
			func_156("PMPLAYER_HORSE_CONDITION_CLEANLINESS");
			func_98(0, 1);
			if (func_122(Var0, 0) > 50)
			{
				func_157(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(MISC::ABSF((0.25f * 100f)))), 1, 0, 1, 0, 0, 0, 0, "RPG_Horse_Health");
				func_167(0, "RPG_ARROW_DOWN", 0);
			}
			func_106("PMPLAYER_HORSE_CONDITION_CLEANLINESS_TIP");
			break;
		case 10:
			func_153("MP_PLAYER_HORSE_SADDLE", 0);
			func_155("PMPLAYER_HORSE_TACK_SADDLE_DESC");
			func_156("PMPLAYER_HORSE_TACK_SADDLE_TITLE");
			func_98(0, 1);
			func_191();
			func_106("PMPLAYER_HORSE_TACK_SADDLE_TIP");
			break;
		case 8:
			func_153("MP_PLAYER_HORSE_TEMPERAMENT", 0);
			func_155("PMPLAYER_HORSE_CONDITION_MOOD_DESC");
			func_156("PMPLAYER_HORSE_CONDITION_MOOD");
			func_98(0, 1);
			func_106("PMPLAYER_HORSE_CONDITION_MOOD_TIP");
			break;
		case 11:
			func_153("MP_PLAYER_HORSE_STIRRUPS", 0);
			func_155("PMPLAYER_HORSE_TACK_STIRRUPS_DESC");
			func_156("PMPLAYER_HORSE_TACK_STIRRUPS_TITLE");
			func_98(0, 1);
			func_192();
			func_106("PMPLAYER_HORSE_TACK_STIRRUPS_TIP");
			break;
	}
}

void func_98(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(Global_1954472->f_5.f_425.f_22);
	}
	if (bParam1)
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(Global_1954472->f_5.f_425.f_21);
	}
}

char* func_99(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PMPLAYER_GENERAL";
		case 1:
			return "PMPLAYER_HEALTH";
		case 2:
			return "PMPLAYER_STAMINA";
		case 3:
			return "PMPLAYER_DEADEYE";
		case 4:
			return "PMPLAYER_GENERAL_STATS";
		case 5:
			return "PMPLAYER_HORSE";
		default:
			break;
	}
	return "";
}

void func_100(char* sParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954472->f_5.f_425, sParam0);
}

void func_101(int iParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1954472->f_5.f_425.f_24[iParam0 /*25*/])->f_16, sParam1);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1954472->f_5.f_425.f_22, iParam0, "player_group_item", (Global_1954472->f_5.f_425.f_24[iParam0 /*25*/])->f_15);
}

void func_102(int iParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5, char* sParam6, char* sParam7, char* sParam8, bool bParam9)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1954472->f_5.f_425.f_24[iParam0 /*25*/])->f_16, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1954472->f_5.f_425.f_24[iParam0 /*25*/])->f_17, sParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1954472->f_5.f_425.f_24[iParam0 /*25*/])->f_18, bParam3);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1954472->f_5.f_425.f_24[iParam0 /*25*/])->f_19, bParam4);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1954472->f_5.f_425.f_24[iParam0 /*25*/])->f_22, bParam5);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1954472->f_5.f_425.f_24[iParam0 /*25*/])->f_20, sParam6);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1954472->f_5.f_425.f_24[iParam0 /*25*/])->f_21, sParam7);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1954472->f_5.f_425.f_24[iParam0 /*25*/])->f_23, sParam8);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1954472->f_5.f_425.f_24[iParam0 /*25*/])->f_24, bParam9);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1954472->f_5.f_425.f_22, iParam0, "player_list_item", (Global_1954472->f_5.f_425.f_24[iParam0 /*25*/])->f_15);
}

void func_103(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954472->f_5.f_425.f_9, bParam0);
}

void func_104(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954472->f_5.f_425.f_10, bParam0);
}

int func_105(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_86(1);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1954472->f_1331.f_50[iParam0]);
		case 1:
			return &(Global_1954472->f_1465.f_2.f_50[iParam0]);
		default:
			break;
	}
	return 1;
}

void func_106(char* sParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954472->f_5.f_425.f_5, sParam0);
}

void func_107()
{
	struct<2> Var0;
	vector3 vVar2;
	char cVar9[16];
	int iVar11;

	Var0 = { func_88(-43471346) };
	STATS::STAT_ID_GET_DATE(&Var0, &vVar2);
	iVar11 = LOCALIZATION::_LOCALIZATION_GET_USER_LANGUAGE();
	switch (iVar11)
	{
		case 0:
			if (vVar2.z < 10)
			{
				StringCopy(&cVar9, "0", 16);
			}
			StringIntConCat(&cVar9, vVar2.z, 16);
			StringConCat(&cVar9, "/", 16);
			if (vVar2.y < 10)
			{
				StringConCat(&cVar9, "0", 16);
			}
			StringIntConCat(&cVar9, vVar2.y, 16);
			StringConCat(&cVar9, "/", 16);
			StringIntConCat(&cVar9, vVar2.x, 16);
			break;
		case 1:
			if (vVar2.y < 10)
			{
				StringCopy(&cVar9, "0", 16);
			}
			StringIntConCat(&cVar9, vVar2.y, 16);
			StringConCat(&cVar9, "/", 16);
			if (vVar2.z < 10)
			{
				StringConCat(&cVar9, "0", 16);
			}
			StringIntConCat(&cVar9, vVar2.z, 16);
			StringConCat(&cVar9, "/", 16);
			StringIntConCat(&cVar9, vVar2.x, 16);
			break;
		case 2:
			IntToString(&cVar9, vVar2.x, 16);
			StringConCat(&cVar9, "/", 16);
			if (vVar2.y < 10)
			{
				StringConCat(&cVar9, "0", 16);
			}
			StringIntConCat(&cVar9, vVar2.y, 16);
			StringConCat(&cVar9, "/", 16);
			if (vVar2.z < 10)
			{
				StringConCat(&cVar9, "0", 16);
			}
			StringIntConCat(&cVar9, vVar2.z, 16);
			break;
	}
	func_102(1, "PMPLAYER_CREATED_DATE", &cVar9, 1, 0, 0, 0, 0, 0, 0);
}

float func_108(int iParam0)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_88(iParam0) };
	STATS::STAT_ID_GET_FLOAT(&Var1, &uVar0);
	return uVar0;
}

var func_109(float fParam0, int iParam1)
{
	char* sVar0;

	sVar0 = MISC::_0x2B6846401D68E563(fParam0, iParam1);
	return func_193(sVar0, joaat("COLOR_PURE_WHITE"));
}

int func_110(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_194(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_111(int iParam0)
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

int func_112(int iParam0)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_113(iParam0) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

struct<2> func_113(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_114(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

int func_115(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_195(iParam0, iParam1) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

int func_116(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	iVar1 = STATS::_0xCAAE29CB5591B2A5(iParam0, iParam1);
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (STATS::_0xDCEC875A02991AD0(iParam0, iParam1, iVar2, &uVar4))
		{
			STATS::STAT_ID_GET_INT(&uVar4, &iVar3);
			if (iVar3 > 0)
			{
				iVar0++;
			}
		}
		iVar2++;
	}
	return iVar0;
}

int func_117(int iParam0)
{
	var uVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	uVar0 = ATTRIBUTE::GET_ATTRIBUTE_POINTS(iParam0, 7);
	return uVar0;
}

int func_118(int iParam0)
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

var func_119(var uParam0, int iParam1)
{
	if (!func_196(uParam0, iParam1, 0, 0))
	{
	}
	return Global_1903929->f_27;
}

int func_120(var uParam0, int iParam1)
{
	var uVar0;

	if (!func_196(uParam0, iParam1, 0, 0))
	{
	}
	if (!func_197(Global_1903929))
	{
		return 0;
	}
	uVar0 = func_198(Global_1903929->f_11, Global_1903929->f_27);
	return uVar0;
}

int func_121(int iParam0, int iParam1)
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
	if (func_199(iParam1, &uVar0))
	{
		return ATTRIBUTE::GET_ATTRIBUTE_BASE_RANK(iParam0, uVar0);
	}
	return 0;
}

int func_122(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4)
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
	if (!func_200(&uParam0))
	{
		return 0;
	}
	return 0;
}

float func_123(int iParam0)
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

int func_124(int iParam0, int iParam1)
{
	struct<4> Var0;

	if (!func_201(856287005, iParam0))
	{
		return 0;
	}
	Var0 = { func_202() };
	*iParam1 = func_184(Var0, iParam0, 0, -1);
	if (!func_203(*iParam1, 0))
	{
		return 0;
	}
	return 1;
}

int func_125(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<19> Var1;

	Var1.f_2 = 5;
	Var1.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(uParam0, &Var1))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (iParam2 != 0 && (Var1.f_18[iVar0 /*2*/])->f_1 != iParam2)
			{
				Jump @117; //curOff = 67
			}
			else if (iParam3 != 0 && &Var1.f_18[iVar0 /*2*/] != iParam3)
			{
			}
			else
			{
				*iParam1 = { *(Var1.f_18[iVar0 /*2*/]) };
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

char* func_126(int iParam0)
{
	int iVar0;

	if (!func_203(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_204(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

var func_127(char[4] cParam0)
{
	return cParam0;
}

void func_128(int iParam0, int iParam1)
{
	Global_1572887->f_387 = iParam0;
	Global_1572887->f_387.f_1 = iParam1;
	func_205();
}

void func_129(var uParam0)
{
}

void func_130(var uParam0)
{
	func_48(uParam0, 1, 1);
}

void func_131(var uParam0)
{
	if (func_47(uParam0, 0))
	{
		func_48(uParam0, 1, 1);
	}
	if (func_47(uParam0, 1))
	{
		func_48(uParam0, 1, 0);
		func_207(uParam0, 1145633164, func_206());
		func_207(uParam0, -359624034, func_208());
	}
}

int func_132(var uParam0)
{
	uParam0->f_194[0] = DATABINDING::_0xD7DB94AB78E8EBE4("", 1395437865);
	uParam0->f_194.f_2[0] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(&(uParam0->f_194[0]), 1145633164, func_206());
	uParam0->f_194.f_2[1] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(&(uParam0->f_194[0]), -359624034, func_208());
	return 1;
}

void func_133(var uParam0)
{
	func_209(uParam0);
}

struct<14> func_134(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

int func_135(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_194(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_136(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_137(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	iVar0 = func_194(bParam2);
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam0, uParam1, 29, 1))
	{
		return 0;
	}
	return 1;
}

bool func_138(var uParam0, int iParam1)
{
	return func_210(*uParam0, iParam1);
}

int func_139(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!&Global_1048577)
	{
		return 3;
	}
	iVar0 = ((*Global_262996)[iParam0 /*70*/])->f_1.f_21.f_2;
	iVar1 = func_211(iVar0);
	uVar2 = func_212(iVar0, iVar1);
	return uVar2;
}

struct<2> func_140()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

int func_141(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265331->f_124445.f_134 & 8 != 0)
	{
		Global_1070356->f_26837 = 1;
		return 1;
	}
	if (func_7(*Global_1051163) && !func_213(*Global_1051163, Param0))
	{
		Global_1070356->f_26837 = 2;
		return 1;
	}
	if (iParam2 != 0 && func_214(iParam2))
	{
		return 1;
	}
	if (iParam3 != 0 && func_215(iParam3, 255))
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
	if (func_216())
	{
		Global_1070356->f_26837 = 7;
		return 1;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_7(*Global_1051163))
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

bool func_142(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 - iVar0 * 32);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_143(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	if (iParam1 == -1)
	{
		return 0;
	}
	func_217(uParam2);
	switch (iParam1)
	{
		case 0:
		case 1:
			if (!func_218(uParam0, uParam2))
			{
				return 0;
			}
			break;
		case 2:
			if (!func_219(uParam0, uParam2))
			{
				return 0;
			}
			break;
	}
	if (bParam3)
	{
		func_220(uParam2);
	}
	return 1;
}

char* func_144(int iParam0)
{
	switch (iParam0)
	{
		case -974145463: /* GXTEntry: "American Paint - Overo Coat" */
			return "BREED_AMERICANPAINT_OVERO";
		case 1432602132: /* GXTEntry: "American Paint - Tobiano Coat" */
			return "BREED_AMERICANPAINT_TOBIANO";
		case 92296905: /* GXTEntry: "American Paint - Splashed White Coat" */
			return "BREED_AMERICANPAINT_SPLASHEDWHITE";
		case -842044823: /* GXTEntry: "American Paint - Grey Overo Coat" */
			return "BREED_AMERICANPAINT_GREYOVERO";
		case 1371398552: /* GXTEntry: "American Standardbred - Black Coat" */
			return "BREED_AMERICANSTANDARDBRED_BLACK";
		case -745453539: /* GXTEntry: "American Standardbred - Buckskin Coat" */
			return "BREED_AMERICANSTANDARDBRED_BUCKSKIN";
		case 1583029039: /* GXTEntry: "American Standardbred - Palomino Dapple Coat" */
			return "BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE";
		case -783061276: /* GXTEntry: "American Standardbred - Silver Tail Buckskin Coat" */
			return "BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN";
		case -1322521536: /* GXTEntry: "Andalusian - Dark Bay Coat" */
			return "BREED_ANDALUSIAN_DARKBAY";
		case 1100711204: /* GXTEntry: "Andalusian - Perlino Coat" */
			return "BREED_ANDALUSIAN_PERLINO";
		case 728055838: /* GXTEntry: "Andalusian - Rose Grey Coat" */
			return "BREED_ANDALUSIAN_ROSEGRAY";
		case -1782334639: /* GXTEntry: "Appaloosa - Blanket Coat" */
			return "BREED_APPALOOSA_BLANKET";
		case -1181052732: /* GXTEntry: "Appaloosa - Leopard Blanket Coat" */
			return "BREED_APPALOOSA_LEOPARDBLANKET";
		case -179102320: /* GXTEntry: "Appaloosa - Brown Leopard Coat" */
			return "BREED_APPALOOSA_BROWNLEOPARD";
		case -1266863668: /* GXTEntry: "Appaloosa - Leopard Coat" */
			return "BREED_APPALOOSA_LEOPARD";
		case -2078767648: /* GXTEntry: "Arabian - Black Coat" */
			return "BREED_ARABIAN_BLACK";
		case -852553462: /* GXTEntry: "Arabian - Rose Grey Bay Coat" */
			return "BREED_ARABIAN_ROSEGREYBAY";
		case -80004868: /* GXTEntry: "Arabian - White Coat" */
			return "BREED_ARABIAN_WHITE";
		case 1813208211: /* GXTEntry: "Ardennes - Bay Roan Coat" */
			return "BREED_ARDENNES_BAYROAN";
		case 836323303: /* GXTEntry: "Ardennes - Strawberry Roan Coat" */
			return "BREED_ARDENNES_STRAWBERRYROAN";
		case 153881023: /* GXTEntry: "Ardennes - Iron Grey Roan Coat" */
			return "BREED_ARDENNES_IRONGREYROAN";
		case -1256798240: /* GXTEntry: "Belgian Draft - Blond Chestnut Coat" */
			return "BREED_BELGIAN_BLONDCHESTNUT";
		case 2118089359:
			return "BREED_BELGIAN_MEALYCHESTNUT";
		case -1537586382: /* GXTEntry: "Dutch Warmblood - Sooty Buckskin Coat" */
			return "BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN";
		case 1440692746: /* GXTEntry: "Dutch Warmblood - Seal Brown Coat" */
			return "BREED_DUTCHWARMBLOOD_SEALBROWN";
		case 697143532: /* GXTEntry: "Dutch Warmblood - Chocolate Roan Coat" */
			return "BREED_DUTCHWARMBLOOD_CHOCOLATEROAN";
		case 281128160: /* GXTEntry: "Hungarian Halfbred - Flaxen Chestnut Coat" */
			return "BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT";
		case 1854519167: /* GXTEntry: "Hungarian Halfbred - Piebald Tobiano Coat" */
			return "BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO";
		case -1376299681: /* GXTEntry: "Hungarian Halfbred - Dark Dapple Grey Coat" */
			return "BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY";
		case -1955947684:
			return "BREED_KENTUCKYSADDLE_BLACK1";
		case 1361788230: /* GXTEntry: "Kentucky Saddler - Chestnut Pinto Coat" */
			return "BREED_KENTUCKYSADDLE_CHESTNUTPINTO";
		case 1974379573: /* GXTEntry: "Kentucky Saddler - Grey Coat" */
			return "BREED_KENTUCKYSADDLE_GREY";
		case 545109431: /* GXTEntry: "Kentucky Saddler - Silver Bay Coat" */
			return "BREED_KENTUCKYSADDLE_SILVERBAY";
		case 1275638003: /* GXTEntry: "Missouri Fox Trotter - Amber Champagne Coat" */
			return "BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE";
		case 2083573823: /* GXTEntry: "Missouri Fox Trotter - Silver Dapple Pinto Coat" */
			return "BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO";
		case 1235275977: /* GXTEntry: "Morgan - Bay Coat" */
			return "BREED_MORGAN_BAY";
		case 892601357: /* GXTEntry: "Morgan - Bay Roan Coat" */
			return "BREED_MORGAN_BAYROAN";
		case 1224695367: /* GXTEntry: "Morgan - Flaxen Chestnut Coat" */
			return "BREED_MORGAN_FLAXENCHESTNUT";
		case 648301150: /* GXTEntry: "Morgan - Palomino Coat" */
			return "BREED_MORGAN_PALOMINO";
		case -1597490733: /* GXTEntry: "Mustang - Grullo Dun Coat" */
			return "BREED_MUSTANG_GRULLODUN";
		case 2000205872: /* GXTEntry: "Mustang - Wild Bay Coat" */
			return "BREED_MUSTANG_WILDBAY";
		case -1428527735: /* GXTEntry: "Mustang - Tiger Striped Bay Coat" */
			return "BREED_MUSTANG_TIGERSTRIPEDBAY";
		case 170010697: /* GXTEntry: "Nokota - Blue Roan Coat" */
			return "BREED_NOKOTA_BLUEROAN";
		case -742726637: /* GXTEntry: "Nokota - White Roan Coat" */
			return "BREED_NOKOTA_WHITEROAN";
		case -1714171692: /* GXTEntry: "Nokota - Reverse Dapple Roan Coat" */
			return "BREED_NOKOTA_REVERSEDAPPLEROAN";
		case -103101636: /* GXTEntry: "Shire - Dark Bay Coat" */
			return "BREED_SHIRE_DARKBAY";
		case -1999094324: /* GXTEntry: "Shire - Light Grey Coat" */
			return "BREED_SHIRE_LIGHTGREY";
		case 1724200240: /* GXTEntry: "Suffolk Punch - Sorrel Coat" */
			return "BREED_SUFFOLKPUNCH_SORREL";
		case 237935328: /* GXTEntry: "Suffolk Punch - Red Chestnut Coat" */
			return "BREED_SUFFOLKPUNCH_REDCHESTNUT";
		case 120848852: /* GXTEntry: "Tennessee Walker - Black Rabicano Coat" */
			return "BREED_TENNESSEEWALKER_BLACKRABICANO";
		case -868094182: /* GXTEntry: "Tennessee Walker - Chestnut Coat" */
			return "BREED_TENNESSEEWALKER_CHESTNUT";
		case -887362763: /* GXTEntry: "Tennessee Walker - Dapple Bay Coat" */
			return "BREED_TENNESSEEWALKER_DAPPLEBAY";
		case -847714194: /* GXTEntry: "Tennessee Walker - Red Roan Coat" */
			return "BREED_TENNESSEEWALKER_REDROAN";
		case 1756765331: /* GXTEntry: "Tennessee Walker - Flaxen Roan Coat" */
			return "BREED_TENNESSEEWALKER_FLAXENROAN";
		case -813071670: /* GXTEntry: "Thoroughbred - Blood Bay Coat" */
			return "BREED_THOROUGHBRED_BLOODBAY";
		case -1900569233: /* GXTEntry: "Thoroughbred - Dapple Grey Coat" */
			return "BREED_THOROUGHBRED_DAPPLEGREY";
		case 1688250187: /* GXTEntry: "Thoroughbred - Brindle Coat" */
			return "BREED_THOROUGHBRED_BRINDLE";
		case -1262715164: /* GXTEntry: "Thoroughbred - Black Chestnut Coat" */
			return "BREED_THOROUGHBRED_BLACKCHESTNUT";
		case 2010625508: /* GXTEntry: "Thoroughbred - Reverse Dapple Black Coat" */
			return "BREED_THOROUGHBRED_REVERSEDAPPLEBLACK";
		case -136225010: /* GXTEntry: "Turkoman - Dark Bay Coat" */
			return "BREED_TURKOMAN_DARKBAY";
		case -225011104: /* GXTEntry: "Turkoman - Gold Coat" */
			return "BREED_TURKOMAN_GOLD";
		case -1882436593: /* GXTEntry: "Turkoman - Silver Coat" */
			return "BREED_TURKOMAN_SILVER";
		case -757978903: /* GXTEntry: "Breton - Red Roan Coat" */
			return "BREED_BRETON_REDROAN";
		case 1909854428: /* GXTEntry: "Breton - Sorrel Coat" */
			return "BREED_BRETON_SORREL";
		case 1592694494: /* GXTEntry: "Breton - Grullo Dun Coat" */
			return "BREED_BRETON_GRULLODUN";
		case 981469777: /* GXTEntry: "Breton - Seal Brown Coat" */
			return "BREED_BRETON_SEALBROWN";
		case 1064693514: /* GXTEntry: "Breton - Mealy Dapple Bay Coat" */
			return "BREED_BRETON_MEALYDAPPLEBAY";
		case -1365665739: /* GXTEntry: "Breton - Steel Grey Coat" */
			return "BREED_BRETON_STEELGREY";
		case 1577022605: /* GXTEntry: "Criollo - Blue Roan Overo Coat" */
			return "BREED_CRIOLLO_BLUEROANOVERO";
		case 381495209: /* GXTEntry: "Criollo - Dun Coat" */
			return "BREED_CRIOLLO_DUN";
		case 3032834: /* GXTEntry: "Criollo - Bay Brindle Coat" */
			return "BREED_CRIOLLO_BAYBRINDLE";
		case -1722101672: /* GXTEntry: "Criollo - Sorrel Overo Coat" */
			return "BREED_CRIOLLO_SORRELOVERO";
		case -189605757: /* GXTEntry: "Criollo - Bay Frame Overo Coat" */
			return "BREED_CRIOLLO_BAYFRAMEOVERO";
		case 863391233: /* GXTEntry: "Criollo - Marble Sabino Coat" */
			return "BREED_CRIOLLO_MARBLESABINO";
		case 885568364: /* GXTEntry: "Kladruber - Black Coat" */
			return "BREED_KLADRUBER_BLACK";
		case -1540355548: /* GXTEntry: "Kladruber - White Coat" */
			return "BREED_KLADRUBER_WHITE";
		case -601560591: /* GXTEntry: "Kladruber - Cremello Coat" */
			return "BREED_KLADRUBER_CREMELLO";
		case -370362766: /* GXTEntry: "Kladruber - Grey Coat" */
			return "BREED_KLADRUBER_GREY";
		case -1698261864: /* GXTEntry: "Kladruber - Dapple Rose Grey Coat" */
			return "BREED_KLADRUBER_DAPPLEROSEGREY";
		case -670301166: /* GXTEntry: "Kladruber - Silver Coat" */
			return "BREED_KLADRUBER_SILVER";
		case -302057902:
			return "BREED_NORFOLKROADSTER_BLACK";
		case 1257620801:
			return "BREED_NORFOLKROADSTER_SPECKLEDGREY";
		case 821735821:
			return "BREED_NORFOLKROADSTER_PIEBALDROAN";
		case -769035812:
			return "BREED_NORFOLKROADSTER_ROSEGREY";
		case -1824684932:
			return "BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN";
		case 1589592948:
			return "BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR";
		case -1331210307: /* GXTEntry: "Donkey" */
			return "BREED_DONKEY";
		case 122449722: /* GXTEntry: "Mule" */
			return "BREED_MULE";
		case -1784502482: /* GXTEntry: "Mule - Painted" */
			return "BREED_MULE_PAINTED";
		case -1943445834:
			return "BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN";
		case -635244104: /* GXTEntry: "Appaloosa - Black Snowflake" */
			return "BREED_APPALOOSA_BLACKSNOWFLAKE";
		case -1427377767: /* GXTEntry: "Arabian - Grey Coat" */
			return "BREED_ARABIAN_GREY";
		case -2055655009: /* GXTEntry: "Arabian - Red Chestnut Coat" */
			return "BREED_ARABIAN_REDCHESTNUT";
		case -1293672675: /* GXTEntry: "Hungarian Halfbred - Liver Chestnut Coat" */
			return "BREED_HUNGARIANHALFBRED_LIVERCHESTNUT";
		case -1179079660: /* GXTEntry: "Missouri Fox Trotter - Sable Champagne Coat" */
			return "BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE";
		case 805526368: /* GXTEntry: "Mustang - Golden Dun Coat" */
			return "BREED_MUSTANG_GOLDENDUN";
		case 1342496140: /* GXTEntry: "Tennessee Walker - Mahogany Bay Coat" */
			return "BREED_TENNESSEEWALKER_MAHOGANYBAY";
		case -126555855: /* GXTEntry: "Shire - Raven Black Coat" */
			return "BREED_SHIRE_RAVENBLACK";
		case 294243421: /* GXTEntry: "Dutch Warmblood - Cremello Gold Coat" */
			return "BREED_BUELL_WARVETS";
		case -997197050: /* GXTEntry: "Thoroughbred - Seal Brown Coat" */
			return "BREED_JOHN_ENDLESSSUMMER";
		case -235714362: /* GXTEntry: "Appaloosa - Blanket Coat" */
			return "BREED_MURFREEBROOD_MANGE_01";
		case -1678164: /* GXTEntry: "Nokota - Blue Roan Coat" */
			return "BREED_MURFREEBROOD_MANGE_02";
		case -977833913: /* GXTEntry: "Tennessee Walker - Black Rabicano Coat" */
			return "BREED_MURFREEBROOD_MANGE_03";
		case 1589164943: /* GXTEntry: "Thoroughbred - Silver Bay Coat" */
			return "BREED_WINTER02_01";
		case -1087523615: /* GXTEntry: "American Paint - Splashed White Coat" */
			return "BREED_EAGLEFLIES";
		case -496814209: /* GXTEntry: "Ardennes - Chestnut Coat" */
			return "BREED_GANG_BILL";
		case 2109055751: /* GXTEntry: "Appaloosa - Grey Snowcap Spotted Coat" */
			return "BREED_GANG_CHARLES";
		case -776673611: /* GXTEntry: "Nokota - Grey Roan Sabino Coat" */
			return "BREED_GANG_CHARLES_ENDLESSSUMMER";
		case 1764402253: /* GXTEntry: "Arabian - White Albino Coat" */
			return "BREED_GANG_DUTCH";
		case -1417310078: /* GXTEntry: "Turkoman - Silver Coat" */
			return "BREED_GANG_HOSEA";
		case 1096273915: /* GXTEntry: "American Paint - Grey Overo Coat" */
			return "BREED_GANG_JAVIER";
		case 772751081: /* GXTEntry: "Hungarian Halfbred - Silver Dark Bay Coat" */
			return "BREED_GANG_JOHN";
		case -1140435723: /* GXTEntry: "Nokota - Smoky Black Coat" */
			return "BREED_GANG_KAREN";
		case 2002524329: /* GXTEntry: "Tennessee Walker - Flaxen Roan" */
			return "BREED_GANG_KIERAN";
		case 1151530184: /* GXTEntry: "Mustang - Light Palomino Coat" */
			return "BREED_GANG_LENNY";
		case -1266525037: /* GXTEntry: "Missouri Fox Trotter - Black Coat" */
			return "BREED_GANG_MICAH";
		case -2018137175: /* GXTEntry: "Turkoman - Gold Dapple Coat" */
			return "BREED_GANG_SADIE";
		case -574151692: /* GXTEntry: "Mustang - Dark Bay Roan Coat" */
			return "BREED_GANG_SADIE_ENDLESSSUMMER";
		case 649786380: /* GXTEntry: "American Standardbred - Silver Tail Buckskin Coat" */
			return "BREED_GANG_SEAN";
		case -1921328920: /* GXTEntry: "Appaloosa - Brown Leopard Coat" */
			return "BREED_GANG_TRELAWNEY";
		case -837607790: /* GXTEntry: "Kentucky Saddler - Sabino Coat" */
			return "BREED_GANG_UNCLE";
		case 370424594: /* GXTEntry: "Appaloosa - Few Spot Buckskin Coat" */
			return "BREED_GANG_UNCLE_ENDLESSSUMMER";
		case -364764277: /* GXTEntry: "Scrawny Nag" */
			return "BREED_MANGY_BACKUP";
		default:
			break;
	}
	return "";
}

bool func_145(int iParam0)
{
	return func_221(&(Global_1954472->f_1465), iParam0, 1);
}

int func_146(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_147(int iParam0, int iParam1)
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

void func_148(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954472->f_5.f_425.f_6, bParam0);
}

void func_149(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954472->f_5.f_425.f_7, bParam0);
}

void func_150(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954472->f_5.f_425.f_8, bParam0);
}

void func_151(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954472->f_5.f_425.f_11, bParam0);
}

void func_152(bool bParam0, char* sParam1, char* sParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954472->f_5.f_425.f_18, bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954472->f_5.f_425.f_19, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954472->f_5.f_425.f_20, sParam2);
}

void func_153(char* sParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = func_222(0);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954472->f_5.f_425.f_3, sParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954472->f_5.f_425.f_4, sParam1);
}

char* func_154(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PMPLAYER_GENERAL_DESC_NET";
		case 1:
			return "PMPLAYER_HEALTH_DESC";
		case 2:
			return "PMPLAYER_STAMINA_DESC";
		case 3:
			return "PMPLAYER_DEADEYE_DESC";
		case 4:
			return "PMPLAYER_STATS_DESC";
		case 5:
			return "PMPLAYER_HORSE_DESC";
		default:
			break;
	}
	return "";
}

void func_155(char* sParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954472->f_5.f_425.f_2, sParam0);
}

void func_156(char* sParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954472->f_5.f_425.f_1, sParam0);
}

void func_157(int iParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, char* sParam10)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1954472->f_5.f_425.f_24[iParam0 /*25*/])->f_4, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1954472->f_5.f_425.f_24[iParam0 /*25*/])->f_5, sParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1954472->f_5.f_425.f_24[iParam0 /*25*/])->f_1, bParam3);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1954472->f_5.f_425.f_24[iParam0 /*25*/])->f_2, sParam10);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1954472->f_5.f_425.f_24[iParam0 /*25*/])->f_6, bParam4);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1954472->f_5.f_425.f_24[iParam0 /*25*/])->f_7, bParam5);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1954472->f_5.f_425.f_24[iParam0 /*25*/])->f_11, bParam6);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT((Global_1954472->f_5.f_425.f_24[iParam0 /*25*/])->f_8, iParam7);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT((Global_1954472->f_5.f_425.f_24[iParam0 /*25*/])->f_9, iParam8);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT((Global_1954472->f_5.f_425.f_24[iParam0 /*25*/])->f_10, iParam9);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1954472->f_5.f_425.f_24[iParam0 /*25*/])->f_12, false);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1954472->f_5.f_425.f_21, iParam0, "player_attribute_item", &(Global_1954472->f_5.f_425.f_24[iParam0 /*25*/]));
}

char* func_158()
{
	return "MP_PLAYER_WEIGHT";
}

void func_159(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;

	switch (iParam0)
	{
		case 0:
			fVar0 = ((Global_1140484->f_2001[85 /*192*/])->f_188 * (Global_1140484->f_2001[85 /*192*/])->f_189);
			fVar1 = ((Global_1140484->f_2001[86 /*192*/])->f_188 * (Global_1140484->f_2001[86 /*192*/])->f_189);
			if (fVar0 == 0f)
			{
				func_157(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_STAMINA_DRAIN"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 0), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Stamina");
				func_157(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_DAMAGE_ABSORPTION"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 0), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
			}
			else if (fVar0 > 0f)
			{
				func_157(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_STAMINA_DRAIN"), MISC::_CREATE_VAR_STRING(6, "PMPLAYER_CORE_PC_PLUS_VALUE", (fVar0 * 100f)), 1, 0, 1, 0, 0f, 0f, 0f, "RPG_Stamina");
				func_167(0, "RPG_ARROW_DOWN", 0);
				func_157(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_DAMAGE_ABSORPTION"), MISC::_CREATE_VAR_STRING(6, "PMPLAYER_CORE_PC_VALUE", (fVar1 * 100f)), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
				func_167(1, "RPG_ARROW_UP", 0);
			}
			else
			{
				func_157(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_STAMINA_DRAIN"), MISC::_CREATE_VAR_STRING(6, "PMPLAYER_CORE_PC_VALUE", (fVar0 * 100f)), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Stamina");
				func_167(0, "RPG_ARROW_UP", 0);
				func_157(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_DAMAGE_ABSORPTION"), MISC::_CREATE_VAR_STRING(6, "PMPLAYER_CORE_PC_PLUS_VALUE", (fVar1 * 100f)), 1, 0, 1, 0, 0f, 0f, 0f, "RPG_Health");
				func_167(1, "RPG_ARROW_DOWN", 0);
			}
			break;
		case 1:
		case 2:
		case 3:
			if (Global_1954472->f_1331.f_103 == 0)
			{
				fVar2 = 0.15f;
			}
			else if (Global_1954472->f_1331.f_103 == 10 || Global_1954472->f_1331.f_103 == -10)
			{
				fVar2 = -0.25f;
			}
			else
			{
				fVar2 = 0f;
			}
			if (fVar2 < 0f)
			{
				func_157(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", MISC::ABSI(BUILTIN::ROUND((100f * fVar2)))), 1, 0, 1, 0, 0f, 0f, 0f, func_223(iParam0));
				func_167(0, "RPG_ARROW_DOWN", 0);
			}
			else if (fVar2 == 0f)
			{
				func_157(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", MISC::ABSI(BUILTIN::ROUND((100f * fVar2)))), 1, 0, 0, 0, 0f, 0f, 0f, func_223(iParam0));
			}
			else
			{
				func_157(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", MISC::ABSI(BUILTIN::ROUND((100f * fVar2)))), 1, 0, 0, 0, 0f, 0f, 0f, func_223(iParam0));
				func_167(0, "RPG_ARROW_UP", 0);
			}
			break;
	}
}

char* func_160()
{
	return "MP_PLAYER_TEMPERATURE";
}

char* func_161()
{
	return "pm_player_mp";
}

void func_162()
{
	if (func_26() || func_27())
	{
		func_157(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 900), 1, 0, 1, 0, 0f, 0f, 0f, "RPG_Health");
		func_167(0, "RPG_ARROW_DOWN", 0);
	}
	else
	{
		func_157(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 0), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
	}
}

char* func_163()
{
	return "MP_PLAYER_TOXICITY";
}

char* func_164()
{
	return "pm_player_mp";
}

void func_165()
{
	if (func_41())
	{
		func_157(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 900), 1, 0, 1, 0, 0f, 0f, 0f, "RPG_Health");
		func_167(0, "RPG_ARROW_DOWN", 0);
	}
	else
	{
		func_157(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 0), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
	}
}

char* func_166(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "MP_PLAYER_PLAYER";
		case 1:
			return "MP_PLAYER_HEALTH";
		case 2:
			return "MP_PLAYER_STAMINA";
		case 3:
			return "MP_PLAYER_DEAD_EYE";
		case 4:
			return "MP_PLAYER_GENERAL_STATS";
		case 5:
			return "HORSE_GENERAL";
		default:
			break;
	}
	return "";
}

void func_167(int iParam0, char* sParam1, char* sParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1954472->f_5.f_425.f_24[iParam0 /*25*/])->f_13, sParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1954472->f_5.f_425.f_24[iParam0 /*25*/])->f_14, sParam2);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1954472->f_5.f_425.f_24[iParam0 /*25*/])->f_14, "pausemenu_player_update");
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1954472->f_5.f_425.f_24[iParam0 /*25*/])->f_12, true);
}

void func_168(int iParam0, char* sParam1, char* sParam2, char* sParam3)
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char* sVar6;

	fVar0 = func_224(iParam0, 2);
	iVar1 = func_225(fVar0);
	fVar2 = BUILTIN::TO_FLOAT(func_226(iVar1 + 1));
	iVar3 = iVar1 + 5;
	iVar4 = 5 + 5;
	if (iVar3 < iVar4)
	{
		func_157(iVar5, MISC::_CREATE_VAR_STRING(2, sParam1), MISC::_CREATE_VAR_STRING(18, "PMPLAYER_VALUE_X_OF_Y", BUILTIN::FLOOR(fVar0), fVar2), 0, 0, 0, 0, 0, 0, 0, 0);
		iVar5++;
	}
	func_157(iVar5, MISC::_CREATE_VAR_STRING(2, sParam2), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", iVar3, iVar4), 0, 0, 0, 0, 0, 0, 0, 0);
	sVar6 = func_228(func_227(iVar3, 0));
	func_152(1, sVar6, sParam3);
}

int func_169(var uParam0, int iParam1)
{
	func_196(uParam0, iParam1, 0, 0);
	return Global_1903929->f_22;
}

int func_170(int iParam0)
{
	switch (iParam0)
	{
		case -974145463: /* GXTEntry: "American Paint - Overo Coat" */
			return joaat("a_c_horse_americanpaint_overo");
		case 1432602132: /* GXTEntry: "American Paint - Tobiano Coat" */
			return joaat("a_c_horse_americanpaint_tobiano");
		case 92296905: /* GXTEntry: "American Paint - Splashed White Coat" */
			return 1792770814;
		case -842044823: /* GXTEntry: "American Paint - Grey Overo Coat" */
			return -1963397600;
		case 1371398552: /* GXTEntry: "American Standardbred - Black Coat" */
			return -1250098797;
		case -745453539: /* GXTEntry: "American Standardbred - Buckskin Coat" */
			return -318278790;
		case 1583029039: /* GXTEntry: "American Standardbred - Palomino Dapple Coat" */
			return 55096099;
		case -783061276: /* GXTEntry: "American Standardbred - Silver Tail Buckskin Coat" */
			return -458397856;
		case -1322521536: /* GXTEntry: "Andalusian - Dark Bay Coat" */
			return -444610976;
		case 728055838: /* GXTEntry: "Andalusian - Rose Grey Coat" */
			return 746627200;
		case 1100711204: /* GXTEntry: "Andalusian - Perlino Coat" */
			return 705691988;
		case -1782334639: /* GXTEntry: "Appaloosa - Blanket Coat" */
			return joaat("a_c_horse_appaloosa_blanket");
		case -1181052732: /* GXTEntry: "Appaloosa - Leopard Blanket Coat" */
			return -1554827654;
		case -179102320: /* GXTEntry: "Appaloosa - Brown Leopard Coat" */
			return -1029277326;
		case -1266863668: /* GXTEntry: "Appaloosa - Leopard Coat" */
			return joaat("a_c_horse_appaloosa_leopard");
		case -2078767648: /* GXTEntry: "Arabian - Black Coat" */
			return joaat("a_c_horse_arabian_black");
		case -852553462: /* GXTEntry: "Arabian - Rose Grey Bay Coat" */
			return -403470324;
		case -80004868: /* GXTEntry: "Arabian - White Coat" */
			return joaat("a_c_horse_arabian_white");
		case 1813208211: /* GXTEntry: "Ardennes - Bay Roan Coat" */
			return joaat("a_c_horse_ardennes_bayroan");
		case 836323303: /* GXTEntry: "Ardennes - Strawberry Roan Coat" */
			return -635239558;
		case 153881023: /* GXTEntry: "Ardennes - Iron Grey Roan Coat" */
			return joaat("a_c_horse_ardennes_irongreyroan");
		case -1256798240: /* GXTEntry: "Belgian Draft - Blond Chestnut Coat" */
			return joaat("a_c_horse_belgian_blondchestnut");
		case 2118089359:
			return joaat("a_c_horse_belgian_mealychestnut");
		case -1537586382: /* GXTEntry: "Dutch Warmblood - Sooty Buckskin Coat" */
			return 1593035738;
		case 1440692746: /* GXTEntry: "Dutch Warmblood - Seal Brown Coat" */
			return 861505058;
		case 697143532: /* GXTEntry: "Dutch Warmblood - Chocolate Roan Coat" */
			return 687445866;
		case 281128160: /* GXTEntry: "Hungarian Halfbred - Flaxen Chestnut Coat" */
			return 1705182311;
		case 1854519167: /* GXTEntry: "Hungarian Halfbred - Piebald Tobiano Coat" */
			return -78273782;
		case -1376299681: /* GXTEntry: "Hungarian Halfbred - Dark Dapple Grey Coat" */
			return -819697512;
		case -1955947684:
			return -247265944;
		case 1361788230: /* GXTEntry: "Kentucky Saddler - Chestnut Pinto Coat" */
			return -1265030920;
		case 1974379573: /* GXTEntry: "Kentucky Saddler - Grey Coat" */
			return 2024948086;
		case 545109431: /* GXTEntry: "Kentucky Saddler - Silver Bay Coat" */
			return 1696286663;
		case 1275638003: /* GXTEntry: "Missouri Fox Trotter - Amber Champagne Coat" */
			return -1342159303;
		case 2083573823: /* GXTEntry: "Missouri Fox Trotter - Silver Dapple Pinto Coat" */
			return joaat("a_c_horse_missourifoxtrotter_silverdapplepinto");
		case 1235275977: /* GXTEntry: "Morgan - Bay Coat" */
			return 2030804811;
		case 892601357: /* GXTEntry: "Morgan - Bay Roan Coat" */
			return 1230359523;
		case 1224695367: /* GXTEntry: "Morgan - Flaxen Chestnut Coat" */
			return -1038436471;
		case 648301150: /* GXTEntry: "Morgan - Palomino Coat" */
			return 96930969;
		case -1597490733: /* GXTEntry: "Mustang - Grullo Dun Coat" */
			return -1180427609;
		case 2000205872: /* GXTEntry: "Mustang - Wild Bay Coat" */
			return joaat("a_c_horse_mustang_wildbay");
		case -1428527735: /* GXTEntry: "Mustang - Tiger Striped Bay Coat" */
			return 43825738;
		case 170010697: /* GXTEntry: "Nokota - Blue Roan Coat" */
			return joaat("a_c_horse_nokota_blueroan");
		case -742726637: /* GXTEntry: "Nokota - White Roan Coat" */
			return -1261814606;
		case -1714171692: /* GXTEntry: "Nokota - Reverse Dapple Roan Coat" */
			return 107013696;
		case -103101636: /* GXTEntry: "Shire - Dark Bay Coat" */
			return 1066034872;
		case -1999094324: /* GXTEntry: "Shire - Light Grey Coat" */
			return 36009259;
		case 1724200240: /* GXTEntry: "Suffolk Punch - Sorrel Coat" */
			return -1599683008;
		case 237935328: /* GXTEntry: "Suffolk Punch - Red Chestnut Coat" */
			return -1693870200;
		case 120848852: /* GXTEntry: "Tennessee Walker - Black Rabicano Coat" */
			return 1072019803;
		case -868094182: /* GXTEntry: "Tennessee Walker - Chestnut Coat" */
			return 1074477367;
		case -887362763: /* GXTEntry: "Tennessee Walker - Dapple Bay Coat" */
			return -85890205;
		case -847714194: /* GXTEntry: "Tennessee Walker - Red Roan Coat" */
			return -727455979;
		case 1756765331: /* GXTEntry: "Tennessee Walker - Flaxen Roan Coat" */
			return -1667789645;
		case -813071670: /* GXTEntry: "Thoroughbred - Blood Bay Coat" */
			return -1924405794;
		case -1900569233: /* GXTEntry: "Thoroughbred - Dapple Grey Coat" */
			return joaat("a_c_horse_thoroughbred_dapplegrey");
		case 1688250187: /* GXTEntry: "Thoroughbred - Brindle Coat" */
			return -526169133;
		case -1262715164: /* GXTEntry: "Thoroughbred - Black Chestnut Coat" */
			return 2120708491;
		case 2010625508: /* GXTEntry: "Thoroughbred - Reverse Dapple Black Coat" */
			return 900144280;
		case -136225010: /* GXTEntry: "Turkoman - Dark Bay Coat" */
			return 1133837220;
		case -225011104: /* GXTEntry: "Turkoman - Gold Coat" */
			return joaat("a_c_horse_turkoman_gold");
		case -1882436593: /* GXTEntry: "Turkoman - Silver Coat" */
			return -1604180548;
		case -757978903: /* GXTEntry: "Breton - Red Roan Coat" */
			return -683592019;
		case 1909854428: /* GXTEntry: "Breton - Sorrel Coat" */
			return 337109765;
		case 1592694494: /* GXTEntry: "Breton - Grullo Dun Coat" */
			return -619132373;
		case 981469777: /* GXTEntry: "Breton - Seal Brown Coat" */
			return 1544366970;
		case 1064693514: /* GXTEntry: "Breton - Mealy Dapple Bay Coat" */
			return -1441144351;
		case -1365665739: /* GXTEntry: "Breton - Steel Grey Coat" */
			return -1717674545;
		case 1577022605: /* GXTEntry: "Criollo - Blue Roan Overo Coat" */
			return 1825358734;
		case 381495209: /* GXTEntry: "Criollo - Dun Coat" */
			return 1138427579;
		case 3032834: /* GXTEntry: "Criollo - Bay Brindle Coat" */
			return -1720251851;
		case -1722101672: /* GXTEntry: "Criollo - Sorrel Overo Coat" */
			return 506887890;
		case -189605757: /* GXTEntry: "Criollo - Bay Frame Overo Coat" */
			return 766293155;
		case 863391233: /* GXTEntry: "Criollo - Marble Sabino Coat" */
			return 2147082926;
		case 885568364: /* GXTEntry: "Kladruber - Black Coat" */
			return -1616287563;
		case -1540355548: /* GXTEntry: "Kladruber - White Coat" */
			return -127412252;
		case -601560591: /* GXTEntry: "Kladruber - Cremello Coat" */
			return -1881155818;
		case -370362766: /* GXTEntry: "Kladruber - Grey Coat" */
			return -955237712;
		case -1698261864: /* GXTEntry: "Kladruber - Dapple Rose Grey Coat" */
			return -647020346;
		case -670301166: /* GXTEntry: "Kladruber - Silver Coat" */
			return -1846319726;
		case -302057902:
			return 1007570567;
		case 1257620801:
			return 1029339151;
		case 821735821:
			return -1424767799;
		case -769035812:
			return -217135948;
		case -1824684932:
			return -156439156;
		case 1589592948:
			return 1344011125;
		case -1331210307: /* GXTEntry: "Donkey" */
			return joaat("a_c_donkey_01");
		case 122449722: /* GXTEntry: "Mule" */
			return joaat("a_c_horsemule_01");
		case -1784502482: /* GXTEntry: "Mule - Painted" */
			return joaat("a_c_horsemulepainted_01");
		case -1943445834:
			return 1883159941;
		case -635244104: /* GXTEntry: "Appaloosa - Black Snowflake" */
			return -1028075925;
		case -1427377767: /* GXTEntry: "Arabian - Grey Coat" */
			return 84224102;
		case -2055655009: /* GXTEntry: "Arabian - Red Chestnut Coat" */
			return 1496579364;
		case -1293672675: /* GXTEntry: "Hungarian Halfbred - Liver Chestnut Coat" */
			return -1896838685;
		case -1179079660: /* GXTEntry: "Missouri Fox Trotter - Sable Champagne Coat" */
			return -420599285;
		case 805526368: /* GXTEntry: "Mustang - Golden Dun Coat" */
			return 478986344;
		case 1342496140: /* GXTEntry: "Tennessee Walker - Mahogany Bay Coat" */
			return 446670976;
		case -126555855: /* GXTEntry: "Shire - Raven Black Coat" */
			return joaat("a_c_horse_shire_ravenblack");
		case 294243421: /* GXTEntry: "Dutch Warmblood - Cremello Gold Coat" */
			return 549900435;
		case -997197050: /* GXTEntry: "Thoroughbred - Seal Brown Coat" */
			return -2063289686;
		case -235714362: /* GXTEntry: "Appaloosa - Blanket Coat" */
			return 917402668;
		case -1678164: /* GXTEntry: "Nokota - Blue Roan Coat" */
			return -914712122;
		case -977833913: /* GXTEntry: "Tennessee Walker - Black Rabicano Coat" */
			return -598917269;
		case 1589164943: /* GXTEntry: "Thoroughbred - Silver Bay Coat" */
			return joaat("a_c_horse_winter02_01");
		case -364764277: /* GXTEntry: "Scrawny Nag" */
			return 808655744;
		default:
			break;
	}
	return 0;
}

int func_171(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, func_229());
	return iVar0;
}

int func_172(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, func_230());
	return iVar0;
}

int func_173(int iParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return 0;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iParam0, func_229());
	return iVar0;
}

int func_174(int iParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return 0;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iParam0, func_230());
	return iVar0;
}

int func_175(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	int iVar0;

	if (!func_231(&uParam0, &iVar0))
	{
		return 0;
	}
	return &((Global_17172.f_54.f_61.f_41[iVar0 /*54*/])->f_29[iParam4 /*4*/]);
}

void func_176(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	struct<2> Var14;
	vector3 vVar36;
	int iVar43;
	int iVar44;
	struct<2> Var45;
	vector3 vVar67;
	int iVar74;

	Var0.f_9 = -1591664384;
	if (func_232(*uParam0, -415648720, &Var0, 1, -1))
	{
		if (func_203(Var0.f_4, 0))
		{
			Var14.f_1 = 20;
			if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(Var0.f_4, &Var14) && Var14 > 0)
			{
				iVar43 = 0;
				while (iVar43 < Var14)
				{
					if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var14.f_1[iVar43]), &vVar36))
					{
						if (vVar36.y == -1620444701)
						{
							*iParam1 = (*iParam1 + vVar36.z);
						}
						else if (vVar36.y == 2086291460)
						{
							*iParam2 = (*iParam2 + vVar36.z);
						}
					}
					iVar43++;
				}
			}
		}
		iVar44 = func_184(Var0, 986998820, 0, -1);
		if (func_203(iVar44, 0))
		{
			Var45.f_1 = 20;
			if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iVar44, &Var45) && Var45 > 0)
			{
				iVar74 = 0;
				while (iVar74 < Var45)
				{
					if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var45.f_1[iVar74]), &vVar67))
					{
						if (vVar67.y == -1620444701)
						{
							*iParam1 = (*iParam1 + vVar67.z);
						}
						else if (vVar67.y == 2086291460)
						{
							*iParam2 = (*iParam2 + vVar67.z);
						}
					}
					iVar74++;
				}
			}
		}
	}
}

int func_177(int iParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return 0;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iParam0, func_233());
	return iVar0;
}

int func_178(int iParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return 0;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iParam0, func_234());
	return iVar0;
}

int func_179(int iParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return -1;
	}
	iVar0 = func_235(iParam0);
	switch (iVar0)
	{
		case 0:
		case 1:
			return 0;
		case 2:
		case 3:
			return 1;
		case 4:
		case 5:
			return 2;
		case 6:
		case 7:
		case 8:
		case 9:
			return 3;
	}
	return -1;
}

char* func_180(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HORSE_HANDLING_HEAVY";
		case 1:
			return "HORSE_HANDLING_STANDARD";
		case 2:
			return "HORSE_HANDLING_RACE";
		case 3:
			return "HORSE_HANDLING_ELITE";
		default:
			break;
	}
	return "";
}

void func_181(int iParam0, float fParam1, int iParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1954472->f_5.f_425.f_12, iParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(Global_1954472->f_5.f_425.f_13, fParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1954472->f_5.f_425.f_14, iParam2);
}

void func_182(int iParam0, float fParam1, int iParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1954472->f_5.f_425.f_15, iParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(Global_1954472->f_5.f_425.f_16, fParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1954472->f_5.f_425.f_17, iParam2);
}

int func_183(var uParam0, int iParam1, int iParam2)
{
	if (!func_196(uParam0, iParam1, 1, 1))
	{
		return 0;
	}
	if (!func_197(Global_1903929))
	{
		return 0;
	}
	return func_236(Global_1903929, iParam2);
}

int func_184(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_237(&uParam0, iParam4, bParam5, iParam6);
}

int func_185(int iParam0)
{
	if (iParam0 == 808655744)
	{
		return 779169510;
	}
	switch (iParam0)
	{
		case joaat("a_c_horse_americanpaint_overo"):
			return -311956671 /* GXTEntry: "Work" */;
		case joaat("a_c_horse_americanpaint_tobiano"):
			return -311956671 /* GXTEntry: "Work" */;
		case 1792770814:
			return -311956671 /* GXTEntry: "Work" */;
		case -1963397600:
			return -311956671 /* GXTEntry: "Work" */;
		case -1250098797:
			return 356361174 /* GXTEntry: "Race" */;
		case -318278790:
			return 356361174 /* GXTEntry: "Race" */;
		case 55096099:
			return 356361174 /* GXTEntry: "Race" */;
		case -458397856:
			return 356361174 /* GXTEntry: "Race" */;
		case -444610976:
			return -1771663379 /* GXTEntry: "War" */;
		case 746627200:
			return -1771663379 /* GXTEntry: "War" */;
		case 705691988:
			return -1771663379 /* GXTEntry: "War" */;
		case joaat("a_c_horse_appaloosa_blanket"):
			return -311956671 /* GXTEntry: "Work" */;
		case -1554827654:
			return -311956671 /* GXTEntry: "Work" */;
		case -1029277326:
			return -311956671 /* GXTEntry: "Work" */;
		case joaat("a_c_horse_appaloosa_leopard"):
			return -311956671 /* GXTEntry: "Work" */;
		case joaat("a_c_horse_arabian_black"):
			return -2030355032 /* GXTEntry: "Superior" */;
		case -403470324:
			return -2030355032 /* GXTEntry: "Superior" */;
		case joaat("a_c_horse_arabian_white"):
			return -2030355032 /* GXTEntry: "Superior" */;
		case joaat("a_c_horse_ardennes_bayroan"):
			return -1771663379 /* GXTEntry: "War" */;
		case -635239558:
			return -1771663379 /* GXTEntry: "War" */;
		case joaat("a_c_horse_ardennes_irongreyroan"):
			return -1771663379 /* GXTEntry: "War" */;
		case joaat("a_c_horse_belgian_blondchestnut"):
			return 918497150 /* GXTEntry: "Draft" */;
		case joaat("a_c_horse_belgian_mealychestnut"):
			return 918497150 /* GXTEntry: "Draft" */;
		case 1593035738:
			return -311956671 /* GXTEntry: "Work" */;
		case 861505058:
			return -311956671 /* GXTEntry: "Work" */;
		case 687445866:
			return -311956671 /* GXTEntry: "Work" */;
		case 1705182311:
			return -1771663379 /* GXTEntry: "War" */;
		case -78273782:
			return -1771663379 /* GXTEntry: "War" */;
		case -819697512:
			return -1771663379 /* GXTEntry: "War" */;
		case -247265944:
			return 997958153 /* GXTEntry: "Riding" */;
		case -1265030920:
			return 997958153 /* GXTEntry: "Riding" */;
		case 2024948086:
			return 997958153 /* GXTEntry: "Riding" */;
		case 1696286663:
			return 997958153 /* GXTEntry: "Riding" */;
		case -1342159303:
			return -1651618152 /* GXTEntry: "Multi Class" */;
		case joaat("a_c_horse_missourifoxtrotter_silverdapplepinto"):
			return -1651618152 /* GXTEntry: "Multi Class" */;
		case 2030804811:
			return 997958153 /* GXTEntry: "Riding" */;
		case 1230359523:
			return 997958153 /* GXTEntry: "Riding" */;
		case -1038436471:
			return 997958153 /* GXTEntry: "Riding" */;
		case 96930969:
			return 997958153 /* GXTEntry: "Riding" */;
		case -1180427609:
			return -1651618152 /* GXTEntry: "Multi Class" */;
		case joaat("a_c_horse_mustang_wildbay"):
			return -1651618152 /* GXTEntry: "Multi Class" */;
		case 43825738:
			return -1651618152 /* GXTEntry: "Multi Class" */;
		case joaat("a_c_horse_nokota_blueroan"):
			return 356361174 /* GXTEntry: "Race" */;
		case -1261814606:
			return 356361174 /* GXTEntry: "Race" */;
		case 107013696:
			return 356361174 /* GXTEntry: "Race" */;
		case 1066034872:
			return 918497150 /* GXTEntry: "Draft" */;
		case 36009259:
			return 918497150 /* GXTEntry: "Draft" */;
		case -1599683008:
			return 918497150 /* GXTEntry: "Draft" */;
		case -1693870200:
			return 918497150 /* GXTEntry: "Draft" */;
		case 1072019803:
			return 997958153 /* GXTEntry: "Riding" */;
		case 1074477367:
			return 997958153 /* GXTEntry: "Riding" */;
		case -85890205:
			return 997958153 /* GXTEntry: "Riding" */;
		case -727455979:
			return 997958153 /* GXTEntry: "Riding" */;
		case -1667789645:
			return 997958153 /* GXTEntry: "Riding" */;
		case -1924405794:
			return 356361174 /* GXTEntry: "Race" */;
		case joaat("a_c_horse_thoroughbred_dapplegrey"):
			return 356361174 /* GXTEntry: "Race" */;
		case -526169133:
			return 356361174 /* GXTEntry: "Race" */;
		case 2120708491:
			return 356361174 /* GXTEntry: "Race" */;
		case 900144280:
			return 356361174 /* GXTEntry: "Race" */;
		case 1133837220:
			return -1651618152 /* GXTEntry: "Multi Class" */;
		case joaat("a_c_horse_turkoman_gold"):
			return -1651618152 /* GXTEntry: "Multi Class" */;
		case -1604180548:
			return -1651618152 /* GXTEntry: "Multi Class" */;
		case -683592019:
			return -1651618152 /* GXTEntry: "Multi Class" */;
		case 337109765:
			return -1651618152 /* GXTEntry: "Multi Class" */;
		case -619132373:
			return -1651618152 /* GXTEntry: "Multi Class" */;
		case 1544366970:
			return -1651618152 /* GXTEntry: "Multi Class" */;
		case -1441144351:
			return -1651618152 /* GXTEntry: "Multi Class" */;
		case -1717674545:
			return -1651618152 /* GXTEntry: "Multi Class" */;
		case 1825358734:
			return -1651618152 /* GXTEntry: "Multi Class" */;
		case 1138427579:
			return -1651618152 /* GXTEntry: "Multi Class" */;
		case -1720251851:
			return -1651618152 /* GXTEntry: "Multi Class" */;
		case 506887890:
			return -1651618152 /* GXTEntry: "Multi Class" */;
		case 766293155:
			return -1651618152 /* GXTEntry: "Multi Class" */;
		case 2147082926:
			return -1651618152 /* GXTEntry: "Multi Class" */;
		case -1616287563:
			return -1651618152 /* GXTEntry: "Multi Class" */;
		case -127412252:
			return -1651618152 /* GXTEntry: "Multi Class" */;
		case -1881155818:
			return -1651618152 /* GXTEntry: "Multi Class" */;
		case -955237712:
			return -1651618152 /* GXTEntry: "Multi Class" */;
		case -647020346:
			return -1651618152 /* GXTEntry: "Multi Class" */;
		case -1846319726:
			return -1651618152 /* GXTEntry: "Multi Class" */;
		case 1007570567:
			return -1651618152 /* GXTEntry: "Multi Class" */;
		case 1029339151:
			return -1651618152 /* GXTEntry: "Multi Class" */;
		case -1424767799:
			return -1651618152 /* GXTEntry: "Multi Class" */;
		case -217135948:
			return -1651618152 /* GXTEntry: "Multi Class" */;
		case -156439156:
			return -1651618152 /* GXTEntry: "Multi Class" */;
		case 1344011125:
			return -1651618152 /* GXTEntry: "Multi Class" */;
		case joaat("a_c_donkey_01"):
			return 1090011026 /* GXTEntry: "Other" */;
		case joaat("a_c_horsemule_01"):
			return 1090011026 /* GXTEntry: "Other" */;
		case joaat("a_c_horsemulepainted_01"):
			return 1090011026 /* GXTEntry: "Other" */;
		case 1883159941:
			return 356361174 /* GXTEntry: "Race" */;
		case -1028075925:
			return -311956671 /* GXTEntry: "Work" */;
		case 84224102:
			return -2030355032 /* GXTEntry: "Superior" */;
		case 1496579364:
			return -2030355032 /* GXTEntry: "Superior" */;
		case -1896838685:
			return -1771663379 /* GXTEntry: "War" */;
		case -420599285:
			return -1651618152 /* GXTEntry: "Multi Class" */;
		case 478986344:
			return -1651618152 /* GXTEntry: "Multi Class" */;
		case 446670976:
			return 997958153 /* GXTEntry: "Riding" */;
		case joaat("a_c_horse_shire_ravenblack"):
			return 918497150 /* GXTEntry: "Draft" */;
		case 549900435:
			return -311956671 /* GXTEntry: "Work" */;
		case -2063289686:
			return 356361174 /* GXTEntry: "Race" */;
		case 917402668:
			return 997958153 /* GXTEntry: "Riding" */;
		case -914712122:
			return 356361174 /* GXTEntry: "Race" */;
		case -598917269:
			return -311956671 /* GXTEntry: "Work" */;
		case joaat("a_c_horse_winter02_01"):
			return 356361174 /* GXTEntry: "Race" */;
		default:
			break;
	}
	return 779169510;
}

char* func_186(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 997958153: /* GXTEntry: "Riding" */
			return "HORSE_CLASS_RIDING";
		case 918497150: /* GXTEntry: "Draft" */
			return "HORSE_CLASS_DRAFT";
		case 356361174: /* GXTEntry: "Race" */
			return "HORSE_CLASS_RACE";
		case -1771663379: /* GXTEntry: "War" */
			return "HORSE_CLASS_WAR";
		case -311956671: /* GXTEntry: "Work" */
			return "HORSE_CLASS_WORK";
		case -1651618152: /* GXTEntry: "Multi Class" */
			return func_238(iParam1);
		case -2030355032: /* GXTEntry: "Superior" */
			return "HORSE_CLASS_SUPERIOR";
		case 1090011026: /* GXTEntry: "Other" */
			return "HORSE_CLASS_OTHER";
		default:
			break;
	}
	return "";
}

char* func_187(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "HORSE_GENDER_MALE";
		case 2:
			return "HORSE_GENDER_FEMALE";
	}
	return "HORSE_GENDER_UNKNOWN";
}

char* func_188(int iParam0)
{
	switch (iParam0)
	{
		case -974145463: /* GXTEntry: "American Paint - Overo Coat" */
			return "COAT_OVERO";
		case 1432602132: /* GXTEntry: "American Paint - Tobiano Coat" */
			return "COAT_TOB";
		case 92296905: /* GXTEntry: "American Paint - Splashed White Coat" */
			return "COAT_SPLASHWHITE";
		case -842044823: /* GXTEntry: "American Paint - Grey Overo Coat" */
			return "COAT_GREYOVERO";
		case 1371398552: /* GXTEntry: "American Standardbred - Black Coat" */
			return "COAT_BLACK";
		case -745453539: /* GXTEntry: "American Standardbred - Buckskin Coat" */
			return "COAT_BUCKSKIN";
		case 1583029039: /* GXTEntry: "American Standardbred - Palomino Dapple Coat" */
			return "COAT_PALDAP";
		case -783061276: /* GXTEntry: "American Standardbred - Silver Tail Buckskin Coat" */
			return "COAT_SILVERTAILBUCKSKIN";
		case -1322521536: /* GXTEntry: "Andalusian - Dark Bay Coat" */
			return "COAT_DARKBAY";
		case 1100711204: /* GXTEntry: "Andalusian - Perlino Coat" */
			return "COAT_PERLINO";
		case 728055838: /* GXTEntry: "Andalusian - Rose Grey Coat" */
			return "COAT_ROSEGREY";
		case -1782334639: /* GXTEntry: "Appaloosa - Blanket Coat" */
			return "COAT_BLANKET";
		case -1181052732: /* GXTEntry: "Appaloosa - Leopard Blanket Coat" */
			return "COAT_LEOPBLANKET";
		case -179102320: /* GXTEntry: "Appaloosa - Brown Leopard Coat" */
			return "COAT_BRLEOP";
		case -1266863668: /* GXTEntry: "Appaloosa - Leopard Coat" */
			return "COAT_LEOP";
		case -2078767648: /* GXTEntry: "Arabian - Black Coat" */
			return "COAT_BLACK";
		case -852553462: /* GXTEntry: "Arabian - Rose Grey Bay Coat" */
			return "COAT_ROSEGREYBAY";
		case -80004868: /* GXTEntry: "Arabian - White Coat" */
			return "COAT_WHITE";
		case 1813208211: /* GXTEntry: "Ardennes - Bay Roan Coat" */
			return "COAT_BAYR";
		case 836323303: /* GXTEntry: "Ardennes - Strawberry Roan Coat" */
			return "COAT_STRAWR";
		case 153881023: /* GXTEntry: "Ardennes - Iron Grey Roan Coat" */
			return "COAT_IRONGREYR";
		case -1256798240: /* GXTEntry: "Belgian Draft - Blond Chestnut Coat" */
			return "COAT_BLONDCH";
		case 2118089359:
			return "COAT_MEALYCH";
		case -1537586382: /* GXTEntry: "Dutch Warmblood - Sooty Buckskin Coat" */
			return "COAT_SOOTYBUCKSKIN";
		case 1440692746: /* GXTEntry: "Dutch Warmblood - Seal Brown Coat" */
			return "COAT_SEALBR";
		case 697143532: /* GXTEntry: "Dutch Warmblood - Chocolate Roan Coat" */
			return "COAT_CHOCR";
		case 281128160: /* GXTEntry: "Hungarian Halfbred - Flaxen Chestnut Coat" */
			return "COAT_FLAXCH";
		case 1854519167: /* GXTEntry: "Hungarian Halfbred - Piebald Tobiano Coat" */
			return "COAT_PIETOB";
		case -1376299681: /* GXTEntry: "Hungarian Halfbred - Dark Dapple Grey Coat" */
			return "COAT_DAPDARKGREY";
		case -1955947684:
			return "COAT_BLACK";
		case 1361788230: /* GXTEntry: "Kentucky Saddler - Chestnut Pinto Coat" */
			return "COAT_CHPIN";
		case 1974379573: /* GXTEntry: "Kentucky Saddler - Grey Coat" */
			return "COAT_GREY";
		case 545109431: /* GXTEntry: "Kentucky Saddler - Silver Bay Coat" */
			return "COAT_SILVERBAY";
		case 1275638003: /* GXTEntry: "Missouri Fox Trotter - Amber Champagne Coat" */
			return "COAT_AMBCHA";
		case 2083573823: /* GXTEntry: "Missouri Fox Trotter - Silver Dapple Pinto Coat" */
			return "COAT_SILVERDAPPINT";
		case 1235275977: /* GXTEntry: "Morgan - Bay Coat" */
			return "COAT_BAY";
		case 892601357: /* GXTEntry: "Morgan - Bay Roan Coat" */
			return "COAT_BAYR";
		case 1224695367: /* GXTEntry: "Morgan - Flaxen Chestnut Coat" */
			return "COAT_FLAXCH";
		case 648301150: /* GXTEntry: "Morgan - Palomino Coat" */
			return "COAT_PAL";
		case -1597490733: /* GXTEntry: "Mustang - Grullo Dun Coat" */
			return "COAT_GRULDUN";
		case 2000205872: /* GXTEntry: "Mustang - Wild Bay Coat" */
			return "COAT_WILDBAY";
		case -1428527735: /* GXTEntry: "Mustang - Tiger Striped Bay Coat" */
			return "COAT_TIGSTRBAY";
		case 170010697: /* GXTEntry: "Nokota - Blue Roan Coat" */
			return "COAT_BLUER";
		case -742726637: /* GXTEntry: "Nokota - White Roan Coat" */
			return "COAT_WHITER";
		case -1714171692: /* GXTEntry: "Nokota - Reverse Dapple Roan Coat" */
			return "COAT_REVDAPR";
		case -103101636: /* GXTEntry: "Shire - Dark Bay Coat" */
			return "COAT_DARKBAY";
		case -1999094324: /* GXTEntry: "Shire - Light Grey Coat" */
			return "COAT_LGREY";
		case 1724200240: /* GXTEntry: "Suffolk Punch - Sorrel Coat" */
			return "COAT_SORREL";
		case 237935328: /* GXTEntry: "Suffolk Punch - Red Chestnut Coat" */
			return "COAT_REDCH";
		case 120848852: /* GXTEntry: "Tennessee Walker - Black Rabicano Coat" */
			return "COAT_BLACKRAB";
		case -868094182: /* GXTEntry: "Tennessee Walker - Chestnut Coat" */
			return "COAT_CH";
		case -887362763: /* GXTEntry: "Tennessee Walker - Dapple Bay Coat" */
			return "COAT_DAPBAY";
		case -847714194: /* GXTEntry: "Tennessee Walker - Red Roan Coat" */
			return "COAT_REDR";
		case 1756765331: /* GXTEntry: "Tennessee Walker - Flaxen Roan Coat" */
			return "COAT_FLAXR";
		case -813071670: /* GXTEntry: "Thoroughbred - Blood Bay Coat" */
			return "COAT_BLBAY";
		case -1900569233: /* GXTEntry: "Thoroughbred - Dapple Grey Coat" */
			return "COAT_DAPGREY";
		case 1688250187: /* GXTEntry: "Thoroughbred - Brindle Coat" */
			return "COAT_BRINDLE";
		case -1262715164: /* GXTEntry: "Thoroughbred - Black Chestnut Coat" */
			return "COAT_BLACKCH";
		case 2010625508: /* GXTEntry: "Thoroughbred - Reverse Dapple Black Coat" */
			return "COAT_REVDAPBLACK";
		case -136225010: /* GXTEntry: "Turkoman - Dark Bay Coat" */
			return "COAT_DARKBAY";
		case -225011104: /* GXTEntry: "Turkoman - Gold Coat" */
			return "COAT_GOLD";
		case -1882436593: /* GXTEntry: "Turkoman - Silver Coat" */
			return "COAT_SILVER";
		case -757978903: /* GXTEntry: "Breton - Red Roan Coat" */
			return "COAT_REDR";
		case 1909854428: /* GXTEntry: "Breton - Sorrel Coat" */
			return "COAT_SORREL";
		case 1592694494: /* GXTEntry: "Breton - Grullo Dun Coat" */
			return "COAT_GRULDUN";
		case 981469777: /* GXTEntry: "Breton - Seal Brown Coat" */
			return "COAT_SEALBR";
		case 1064693514: /* GXTEntry: "Breton - Mealy Dapple Bay Coat" */
			return "COAT_MEALYDAPBAY";
		case -1365665739: /* GXTEntry: "Breton - Steel Grey Coat" */
			return "COAT_STEELGREY";
		case 1577022605: /* GXTEntry: "Criollo - Blue Roan Overo Coat" */
			return "COAT_BLUEROANOVERO";
		case 381495209: /* GXTEntry: "Criollo - Dun Coat" */
			return "COAT_DUN";
		case 3032834: /* GXTEntry: "Criollo - Bay Brindle Coat" */
			return "COAT_BAYBRINDLE";
		case -1722101672: /* GXTEntry: "Criollo - Sorrel Overo Coat" */
			return "COAT_SORRELOVERO";
		case -189605757: /* GXTEntry: "Criollo - Bay Frame Overo Coat" */
			return "COAT_BAYFRAMEOVERO";
		case 863391233: /* GXTEntry: "Criollo - Marble Sabino Coat" */
			return "COAT_MARBLESABINO";
		case 885568364: /* GXTEntry: "Kladruber - Black Coat" */
			return "COAT_BLACK";
		case -1540355548: /* GXTEntry: "Kladruber - White Coat" */
			return "COAT_WHITE";
		case -601560591: /* GXTEntry: "Kladruber - Cremello Coat" */
			return "COAT_CREM";
		case -370362766: /* GXTEntry: "Kladruber - Grey Coat" */
			return "COAT_GREY";
		case -1698261864: /* GXTEntry: "Kladruber - Dapple Rose Grey Coat" */
			return "COAT_DAPROSEGREY";
		case -670301166: /* GXTEntry: "Kladruber - Silver Coat" */
			return "COAT_SILVER";
		case -302057902:
			return "COAT_BLACK";
		case 1257620801:
			return "COAT_SPECKLEDGREY";
		case 821735821:
			return "COAT_PIEROAN";
		case -769035812:
			return "COAT_ROSEGREY";
		case -1824684932:
			return "COAT_DAPBUCKSKIN";
		case 1589592948:
			return "COAT_SPOTTEDTRICOLOR";
		case -1331210307: /* GXTEntry: "Donkey" */
			return "COAT_NONE";
		case 122449722: /* GXTEntry: "Mule" */
			return "COAT_NONE";
		case -1784502482: /* GXTEntry: "Mule - Painted" */
			return "COAT_NONE";
		case -1943445834:
			return "COAT_LIGHTBUCKSKIN";
		case -635244104: /* GXTEntry: "Appaloosa - Black Snowflake" */
			return "COAT_BLACKSNO";
		case -1427377767: /* GXTEntry: "Arabian - Grey Coat" */
			return "COAT_GREY";
		case -2055655009: /* GXTEntry: "Arabian - Red Chestnut Coat" */
			return "COAT_REDCH";
		case -1293672675: /* GXTEntry: "Hungarian Halfbred - Liver Chestnut Coat" */
			return "COAT_LIVERCH";
		case -1179079660: /* GXTEntry: "Missouri Fox Trotter - Sable Champagne Coat" */
			return "COAT_SABLECHAMP";
		case 805526368: /* GXTEntry: "Mustang - Golden Dun Coat" */
			return "COAT_GOLDENDUN";
		case 1342496140: /* GXTEntry: "Tennessee Walker - Mahogany Bay Coat" */
			return "COAT_MAHBAY";
		case -126555855: /* GXTEntry: "Shire - Raven Black Coat" */
			return "COAT_RAVBLACK";
		case 294243421: /* GXTEntry: "Dutch Warmblood - Cremello Gold Coat" */
			return "COAT_CHEMGOLD";
		case -997197050: /* GXTEntry: "Thoroughbred - Seal Brown Coat" */
			return "COAT_SEALBR";
		case -235714362: /* GXTEntry: "Appaloosa - Blanket Coat" */
			return "COAT_BLANKET";
		case -1678164: /* GXTEntry: "Nokota - Blue Roan Coat" */
			return "COAT_BLUER";
		case -977833913: /* GXTEntry: "Tennessee Walker - Black Rabicano Coat" */
			return "COAT_BLACKRAB";
		case 1589164943: /* GXTEntry: "Thoroughbred - Silver Bay Coat" */
			return "COAT_SILVERBAY";
		case -1087523615: /* GXTEntry: "American Paint - Splashed White Coat" */
			return "COAT_SPLASHWHITE";
		case -496814209: /* GXTEntry: "Ardennes - Chestnut Coat" */
			return "COAT_BROWNR";
		case 2109055751: /* GXTEntry: "Appaloosa - Grey Snowcap Spotted Coat" */
			return "COAT_GREYSNOWCAPSPOTTED";
		case -776673611: /* GXTEntry: "Nokota - Grey Roan Sabino Coat" */
			return "COAT_GREYROANSABINO";
		case 1764402253: /* GXTEntry: "Arabian - White Albino Coat" */
			return "COAT_ALBINO";
		case -1417310078: /* GXTEntry: "Turkoman - Silver Coat" */
			return "COAT_SILVER";
		case 1096273915: /* GXTEntry: "American Paint - Grey Overo Coat" */
			return "COAT_GREYOVERO";
		case 772751081: /* GXTEntry: "Hungarian Halfbred - Silver Dark Bay Coat" */
			return "COAT_SILVERDARKBAY";
		case -1140435723: /* GXTEntry: "Nokota - Smoky Black Coat" */
			return "COAT_SMOKYBLACK";
		case 2002524329: /* GXTEntry: "Tennessee Walker - Flaxen Roan" */
			return "COAT_FLAXR";
		case 1151530184: /* GXTEntry: "Mustang - Light Palomino Coat" */
			return "COAT_LIGHTPALOMINO";
		case -1266525037: /* GXTEntry: "Missouri Fox Trotter - Black Coat" */
			return "COAT_BLACK";
		case -2018137175: /* GXTEntry: "Turkoman - Gold Dapple Coat" */
			return "COAT_GOLDDAP";
		case -574151692: /* GXTEntry: "Mustang - Dark Bay Roan Coat" */
			return "COAT_DARKBAYROAN";
		case 649786380: /* GXTEntry: "American Standardbred - Silver Tail Buckskin Coat" */
			return "COAT_SILVERTAILBUCKSKIN";
		case -1921328920: /* GXTEntry: "Appaloosa - Brown Leopard Coat" */
			return "COAT_BRLEOP";
		case -837607790: /* GXTEntry: "Kentucky Saddler - Sabino Coat" */
			return "COAT_SABINO";
		case 370424594: /* GXTEntry: "Appaloosa - Few Spot Buckskin Coat" */
			return "COAT_FEWSPOTBUCKSKIN";
		case -364764277: /* GXTEntry: "Scrawny Nag" */
			return "COAT_MANGY";
		default:
			break;
	}
	return "";
}

var func_189(int iParam0, int iParam1)
{
	var uVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		iParam0 = 1074477367;
	}
	uVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iParam0, 7, iParam1);
	return uVar0;
}

void func_190(int iParam0, var uParam1, int iParam2)
{
	float fVar0;
	char* sVar1;

	fVar0 = (func_239(*uParam1, iParam2) * 100f);
	sVar1 = func_240(0 == iParam2, "RPG_Horse_Health", "RPG_Horse_Stamina");
	if (fVar0 > 0f)
	{
		func_157(iParam0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(fVar0)), 1, 0, 1, 0, 0, 0, 0, sVar1);
		func_167(iParam0, "RPG_ARROW_DOWN", 0);
	}
	else if (fVar0 == 0f)
	{
		func_157(iParam0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(fVar0)), 1, 0, 0, 0, 0, 0, 0, sVar1);
	}
	else
	{
		func_157(iParam0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", BUILTIN::ROUND(fVar0)), 1, 0, 0, 0, 0, 0, 0, sVar1);
		func_167(iParam0, "RPG_ARROW_UP", 0);
	}
}

void func_191()
{
	int iVar0;
	struct<4> Var1;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	struct<2> Var10;
	struct<6> Var32;
	int iVar39;

	Var1 = { func_19(0, 1, 0, -1) };
	iVar0 = func_241(Var1, -415648720, 0, 0);
	if (!func_203(iVar0, 0))
	{
		return;
	}
	Var10.f_1 = 20;
	ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iVar0, &Var10);
	iVar39 = 0;
	while (iVar39 < Var10)
	{
		ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var10.f_1[iVar39]), &Var32);
		switch (Var32.f_1)
		{
			case 2086291460:
				iVar8 = (iVar8 + BUILTIN::FLOOR((IntToFloat(Var32.f_2) * 0.01f)));
				break;
			case -1620444701:
				iVar9 = (iVar9 + BUILTIN::FLOOR((IntToFloat(Var32.f_2) * 0.01f)));
				break;
			case 1605773431:
				fVar5 = Var32.f_5;
				break;
			case 1167068375:
				fVar6 = Var32.f_5;
				break;
			case -225223329:
				fVar7 = Var32.f_5;
				break;
		}
		iVar39++;
	}
	func_157(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_ACCELERATION"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PLUS_VALUE", iVar8), 0, 0, 0, 0, 0, 0, 0, 0);
	func_157(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_SPEED"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PLUS_VALUE", iVar9), 0, 0, 0, 0, 0, 0, 0, 0);
	if (fVar5 >= 0f)
	{
		func_157(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_REGEN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(fVar5)), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
	}
	else
	{
		func_157(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_REGEN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", BUILTIN::ROUND(MISC::ABSF(fVar5))), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
	}
	if (fVar6 <= 0f)
	{
		func_157(3, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(fVar6)), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
		if (fVar6 < 0f)
		{
			func_167(3, "RPG_ARROW_DOWN", 0);
		}
	}
	else
	{
		func_157(3, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", BUILTIN::ROUND(MISC::ABSF(fVar6))), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
		func_167(3, "RPG_ARROW_UP", 0);
	}
	if (fVar7 <= 0f)
	{
		func_157(4, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(fVar7)), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Health");
		if (fVar7 < 0f)
		{
			func_167(4, "RPG_ARROW_DOWN", 0);
		}
	}
	else
	{
		func_157(4, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", BUILTIN::ROUND(MISC::ABSF(fVar7))), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Health");
		func_167(4, "RPG_ARROW_UP", 0);
	}
}

void func_192()
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	struct<4> Var6;
	int iVar10;
	int iVar11;
	float fVar12;
	struct<2> Var13;
	struct<6> Var35;
	int iVar42;

	Var2 = { func_19(0, 1, 0, -1) };
	iVar1 = func_241(Var2, -415648720, 0, 0);
	if (!func_203(iVar1, 0))
	{
		return;
	}
	Var6 = { func_242(iVar1, Var2, -415648720, 0) };
	iVar0 = func_184(Var6, 986998820, 0, -1);
	if (!func_203(iVar0, 0))
	{
		return;
	}
	Var13.f_1 = 20;
	ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iVar0, &Var13);
	iVar42 = 0;
	while (iVar42 < Var13)
	{
		ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var13.f_1[iVar42]), &Var35);
		switch (Var35.f_1)
		{
			case 2086291460:
				iVar10 = (iVar10 + BUILTIN::FLOOR((IntToFloat(Var35.f_2) * 0.01f)));
				break;
			case -1620444701:
				iVar11 = (iVar11 + BUILTIN::FLOOR((IntToFloat(Var35.f_2) * 0.01f)));
				break;
			case -845587290:
				fVar12 = (fVar12 + Var35.f_5);
				break;
		}
		iVar42++;
	}
	func_157(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_ACCELERATION"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PLUS_VALUE", iVar10), 0, 0, 0, 0, 0, 0, 0, 0);
	func_157(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_SPEED"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PLUS_VALUE", iVar11), 0, 0, 0, 0, 0, 0, 0, 0);
	if (fVar12 <= 0f)
	{
		func_157(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(fVar12)), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
	}
	else
	{
		func_157(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", BUILTIN::ROUND(MISC::ABSF(fVar12))), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
	}
}

char* func_193(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_243(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

int func_194(bool bParam0)
{
	if (func_244() == -1)
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

struct<2> func_195(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

int func_196(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam1 == -1)
	{
		return 0;
	}
	func_217(Global_1903929);
	switch (iParam1)
	{
		case 0:
		case 1:
			if (!func_245(uParam0, Global_1903929, &(Global_1903929->f_71), bParam3))
			{
				return 0;
			}
			break;
		case 2:
			if (!func_246(uParam0, Global_1903929, &(Global_1903929->f_100), bParam3))
			{
				return 0;
			}
			break;
	}
	if (bParam2)
	{
		func_220(Global_1903929);
	}
	return 1;
}

int func_197(var uParam0)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (uParam0->f_10 == -1)
	{
		return 0;
	}
	return 1;
}

int func_198(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0 + 1;
		iVar2 = func_189(iParam0, iVar1);
		if (iParam1 < iVar2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4;
}

int func_199(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 16;
			break;
		case 1:
			*uParam1 = 8;
			break;
		case 2:
			*uParam1 = 13;
			break;
		default:
			return 0;
	}
	return 1;
}

int func_200(var uParam0)
{
	struct<4> Var0;
	struct<10> Var4;
	bool bVar18;
	int iVar19;

	Var0 = { func_77() };
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
			func_247(Global_17172.f_54.f_61.f_41[iVar19 /*54*/]);
			*(Global_17172.f_54.f_61.f_41[iVar19 /*54*/]) = { *uParam0 };
			bVar18 = true;
		}
		else
		{
			if (func_248(*(Global_17172.f_54.f_61.f_41[iVar19 /*54*/]), &Var4, 1, 1, -1))
			{
			}
			else
			{
				func_247(Global_17172.f_54.f_61.f_41[iVar19 /*54*/]);
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

int func_201(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam0 != 0)
	{
		iVar5 = func_249(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_250(iParam0);
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

struct<4> func_202()
{
	struct<4> Var0;

	Var0 = { func_251(0) };
	return func_242(856287005, Var0, -218846335, 0);
}

int func_203(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_204(int iParam0)
{
	int iVar0;

	if (!func_203(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_252(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

void func_205()
{
	int iVar0;
	int iVar1;

	iVar0 = Global_1572887->f_387.f_1;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 30)
	{
		if (MISC::IS_BIT_SET(iVar0, iVar1))
		{
		}
		iVar1++;
	}
	if (Global_1572887->f_387.f_2 != -1)
	{
	}
	if (Global_1572887->f_387.f_3 != -1)
	{
	}
	if (Global_1572887->f_387.f_4 != -1)
	{
	}
	if (Global_1572887->f_387.f_5 != -1)
	{
	}
	if (Global_1572887->f_387.f_6 != -1)
	{
	}
	if (Global_1572887->f_387.f_8 != 0)
	{
	}
}

int func_206()
{
	if (func_253())
	{
		return 1;
	}
	return 0;
}

int func_207(var uParam0, int iParam1, bool bParam2)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(&(uParam0->f_194.f_2[func_254(iParam1, 1)])))
	{
		return 0;
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(&(uParam0->f_194.f_2[func_254(iParam1, 1)])) == bParam2)
	{
		return 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&(uParam0->f_194.f_2[func_254(iParam1, 1)]), bParam2);
	return 1;
}

int func_208()
{
	if (func_255())
	{
		return 1;
	}
	if (SOCIALCLUBFEED::_0x068332D20CB6F897())
	{
		return 1;
	}
	return 0;
}

void func_209(var uParam0)
{
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(&(uParam0->f_194[0]));
}

bool func_210(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_211(int iParam0)
{
	if (iParam0 == 395262693 || iParam0 == -933924539)
	{
		return 482206342;
	}
	return Global_524288->f_39792;
}

int func_212(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case -504335712:
			if (func_256(iParam1))
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

bool func_213(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_214(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1185962->f_1 && iParam0) != 0;
}

bool func_215(int iParam0, int iParam1)
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

int func_216()
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
	if (!func_7(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

void func_217(var uParam0)
{
	int iVar0;

	func_257(uParam0);
	uParam0->f_4 = 0;
	uParam0->f_5 = { func_77() };
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

int func_218(var uParam0, var uParam1)
{
	func_258(&(Global_1903929->f_42));
	if (!func_245(uParam0, uParam1, &(Global_1903929->f_42), 0))
	{
		return 0;
	}
	return 1;
}

int func_219(var uParam0, var uParam1)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (!func_246(uParam0, uParam1, &Var0, 0))
	{
		return 0;
	}
	return 1;
}

void func_220(var uParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;

	if (!func_259(uParam0->f_10))
	{
		return;
	}
	func_260(uParam0, 8);
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return;
	}
	iVar0 = func_194(0);
	iVar3 = 0;
	while (iVar3 < 13)
	{
		uVar1 = func_261(iVar3, 1);
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

bool func_221(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

char* func_222(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pm_player_mp";
		case 1:
			return "pm_player_mp";
		case 2:
			return "pm_player_mp";
		case 3:
			return "pm_player_mp";
		case 4:
			return "pm_player_mp";
		case 5:
			return "pausemenu_player";
		default:
			break;
	}
	return "";
}

char* func_223(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RPG_Health";
		case 2:
			return "RPG_Stamina";
		case 3:
			return "RPG_Dead_Eye";
		default:
			break;
	}
	return "";
}

float func_224(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_86(1);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1954472->f_1331.f_26[iParam0]);
		case 1:
			return &(Global_1954472->f_1465.f_2.f_26[iParam0]);
		default:
			break;
	}
	return -1f;
}

int func_225(float fParam0)
{
	if (fParam0 < IntToFloat(0))
	{
		return -1;
	}
	if (fParam0 < IntToFloat(100))
	{
		return 0;
	}
	if (fParam0 < IntToFloat(300))
	{
		return 1;
	}
	if (fParam0 < IntToFloat(700))
	{
		return 2;
	}
	if (fParam0 < IntToFloat(1500))
	{
		return 3;
	}
	if (fParam0 < IntToFloat(3100))
	{
		return 4;
	}
	return 5;
}

int func_226(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 0:
			return 0;
		case 1:
			return 100;
		case 2:
			return 300;
		case 3:
			return 700;
		case 4:
			return 1500;
		case 5:
			return 3100;
		default:
			break;
	}
	return 100;
}

struct<4> func_227(int iParam0, int iParam1)
{
	char cVar0[32];

	if (iParam0 >= 10)
	{
		iParam1 = 0;
	}
	else if (iParam1 >= 4)
	{
		iParam1 = 0;
	}
	StringCopy(&cVar0, "TOAST_RPG_LEVEL_", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	return cVar0;
}

var func_228(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_229()
{
	return 0;
}

int func_230()
{
	return 1;
}

int func_231(var uParam0, int iParam1)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < 10)
	{
		if (!INVENTORY::_0x4C543D5DFCD2DAFD(Global_17172.f_54.f_61.f_41[*iParam1 /*54*/], uParam0))
		{
		}
		else
		{
			return 1;
		}
		*iParam1++;
	}
	return 0;
}

bool func_232(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6, int iParam7)
{
	return func_262(&uParam0, iParam4, uParam5, bParam6, iParam7);
}

int func_233()
{
	return 5;
}

int func_234()
{
	return 6;
}

int func_235(int iParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return 0;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iParam0, func_263());
	return iVar0;
}

int func_236(var uParam0, int iParam1)
{
	if (func_264(uParam0, -2147483648))
	{
		*iParam1 = 4;
	}
	else if (func_264(uParam0, 1073741824 /* Float: 2f */))
	{
		*iParam1 = 3;
	}
	else if (func_264(uParam0, 536870912))
	{
		*iParam1 = 2;
	}
	else if (func_264(uParam0, 268435456))
	{
		*iParam1 = 1;
	}
	else if (func_264(uParam0, 134217728))
	{
		*iParam1 = 0;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_237(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_262(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

char* func_238(int iParam0)
{
	switch (iParam0)
	{
		case -1179079660: /* GXTEntry: "Missouri Fox Trotter - Sable Champagne Coat" */
		case 1275638003: /* GXTEntry: "Missouri Fox Trotter - Amber Champagne Coat" */
		case 2083573823: /* GXTEntry: "Missouri Fox Trotter - Silver Dapple Pinto Coat" */
			return "HORSE_CLASS_MULTI";
		case -1597490733: /* GXTEntry: "Mustang - Grullo Dun Coat" */
		case -1428527735: /* GXTEntry: "Mustang - Tiger Striped Bay Coat" */
		case 805526368: /* GXTEntry: "Mustang - Golden Dun Coat" */
		case 2000205872: /* GXTEntry: "Mustang - Wild Bay Coat" */
			return "HORSE_CLASS_MULTI";
		case -1882436593: /* GXTEntry: "Turkoman - Silver Coat" */
		case -225011104: /* GXTEntry: "Turkoman - Gold Coat" */
		case -136225010: /* GXTEntry: "Turkoman - Dark Bay Coat" */
			return "HORSE_CLASS_MULTI";
		case -1365665739: /* GXTEntry: "Breton - Steel Grey Coat" */
		case -757978903: /* GXTEntry: "Breton - Red Roan Coat" */
		case 981469777: /* GXTEntry: "Breton - Seal Brown Coat" */
		case 1064693514: /* GXTEntry: "Breton - Mealy Dapple Bay Coat" */
		case 1592694494: /* GXTEntry: "Breton - Grullo Dun Coat" */
		case 1909854428: /* GXTEntry: "Breton - Sorrel Coat" */
			return "HORSE_CLASS_MULTI";
		case -1722101672: /* GXTEntry: "Criollo - Sorrel Overo Coat" */
		case -189605757: /* GXTEntry: "Criollo - Bay Frame Overo Coat" */
		case 3032834: /* GXTEntry: "Criollo - Bay Brindle Coat" */
		case 381495209: /* GXTEntry: "Criollo - Dun Coat" */
		case 863391233: /* GXTEntry: "Criollo - Marble Sabino Coat" */
		case 1577022605: /* GXTEntry: "Criollo - Blue Roan Overo Coat" */
			return "HORSE_CLASS_MULTI";
		case -1698261864: /* GXTEntry: "Kladruber - Dapple Rose Grey Coat" */
		case -1540355548: /* GXTEntry: "Kladruber - White Coat" */
		case -670301166: /* GXTEntry: "Kladruber - Silver Coat" */
		case -601560591: /* GXTEntry: "Kladruber - Cremello Coat" */
		case -370362766: /* GXTEntry: "Kladruber - Grey Coat" */
		case 885568364: /* GXTEntry: "Kladruber - Black Coat" */
			return "HORSE_CLASS_MULTI";
		case -1824684932:
		case -769035812:
		case -302057902:
		case 821735821:
		case 1257620801:
		case 1589592948:
			return "HORSE_CLASS_MULTI";
	}
	return "HORSE_CLASS_MULTI";
}

float func_239(struct<4> Param0, int iParam4)
{
	float fVar0;

	fVar0 = 0f;
	if (iParam4 == 0 && func_122(Param0, 0) > 50)
	{
		fVar0 = (fVar0 + 0.25f);
	}
	fVar0 = (fVar0 - func_265(iParam4));
	return fVar0;
}

char* func_240(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_241(struct<4> Param0, int iParam4, int iParam5, int iParam6)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_266(Param0, iParam4, &Var0, iParam5, iParam6))
	{
		return Var0.f_4;
	}
	return 0;
}

struct<4> func_242(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_203(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_194(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

char* func_243(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_244()
{
	return Global_1572887->f_13;
}

int func_245(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (!func_137(uParam0, uParam2, bParam3))
	{
		return 0;
	}
	if (!func_267(uParam1, uParam2))
	{
		return 0;
	}
	return 1;
}

int func_246(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (!func_268(uParam0, uParam2, bParam3))
	{
		return 0;
	}
	if (!func_269(uParam1, uParam2))
	{
		return 0;
	}
	return 1;
}

void func_247(var uParam0)
{
	int iVar0;

	*uParam0 = { func_77() };
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

bool func_248(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_270(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_249(int iParam0)
{
	struct<2> Var0;

	if (!func_203(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_250(int iParam0)
{
	int iVar0;

	if (!func_203(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_249(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

struct<4> func_251(bool bParam0)
{
	int iVar0;

	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_194(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1272170))
			{
				*Global_1272170 = { func_242(joaat("character"), func_77(), -1591664384, bParam0) };
			}
			return *Global_1272170;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_12)))
			{
				Global_1272170->f_12 = { func_242(joaat("character"), func_77(), -1591664384, 0) };
			}
			return Global_1272170->f_12;
		}
	}
	return func_242(joaat("character"), func_77(), -1591664384, bParam0);
}

int func_252(int iParam0)
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

int func_253()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 4)
	{
		iVar0 = iVar1;
		if (!func_271(iVar0))
		{
		}
		else
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_254(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -359624034:
			return 1;
		case 1145633164:
			return 0;
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

int func_255()
{
	int iVar0;
	int iVar1;
	struct<10> Var2;
	int iVar16;

	iVar1 = INVENTORY::_0x97A3646645727F42(&iVar0);
	Var2.f_9 = -1591664384;
	iVar16 = 0;
	while (iVar16 < iVar0)
	{
		if (!INVENTORY::_0x82FA24C3D3FCD9B7(iVar1, iVar16, &Var2))
		{
		}
		else if (!func_272(&Var2))
		{
		}
		else if (!func_273(Var2.f_9))
		{
		}
		else if (!func_274(&Var2))
		{
		}
		else
		{
			INVENTORY::_0x42A2F33A1942E865(iVar1);
			return 1;
		}
		iVar16++;
	}
	INVENTORY::_0x42A2F33A1942E865(iVar1);
	return 0;
}

bool func_256(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

void func_257(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_258(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_5.f_1 = 0;
	uParam0->f_5.f_2 = 0;
	uParam0->f_5.f_3 = 0;
	uParam0->f_9 = -1591664384;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	StringCopy(&(uParam0->f_16), "", 64);
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
}

int func_259(int iParam0)
{
	var uVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	func_275();
	Global_1903929->f_124.f_2 = 834733495;
	Global_1903929->f_124.f_3 = func_276(iParam0);
	if (!DATAFILE::_DATAFILE_GET_BOOL(&uVar0, &(Global_1903929->f_124)))
	{
		return 0;
	}
	return uVar0;
}

void func_260(var uParam0, int iParam1)
{
	func_277(&(uParam0->f_20), iParam1);
}

int func_261(int iParam0, int iParam1)
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

int func_262(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_194(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return 0;
	}
	if (!func_270(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_263()
{
	return 4;
}

bool func_264(var uParam0, int iParam1)
{
	return func_138(&(uParam0->f_20), iParam1);
}

float func_265(int iParam0)
{
	var uVar0;

	uVar0 = &Global_1270530->f_1490.f_3[iParam0];
	return uVar0;
}

int func_266(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_194(bParam7);
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

int func_267(var uParam0, var uParam1)
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
	uParam0->f_22 = func_278(uParam0->f_11);
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

int func_268(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	iVar0 = func_194(bParam2);
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam0, uParam1, 24, 1))
	{
		return 0;
	}
	return 1;
}

int func_269(var uParam0, var uParam1)
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

int func_270(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_194(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

int func_271(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_279(iParam0);
	iVar1 = func_280(iVar0);
	if (!UNLOCK::_UNLOCK_IS_NEW(iVar1))
	{
		return 0;
	}
	if (func_281(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_272(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

int func_273(int iParam0)
{
	if (iParam0 == 1045621973)
	{
		return 0;
	}
	return 1;
}

int func_274(var uParam0)
{
	struct<10> Var0;

	if (!func_272(uParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_248(*uParam0, &Var0, 1, 0, -1))
	{
		return 0;
	}
	if (!func_203(Var0.f_4, 0))
	{
		return 0;
	}
	return func_282(Var0.f_4);
}

void func_275()
{
	Global_1903929->f_124 = (Global_1070356->f_26934[48 /*4*/])->f_3;
	Global_1903929->f_124.f_1 = 0;
	Global_1903929->f_124.f_2 = 0;
	Global_1903929->f_124.f_3 = 0;
	Global_1903929->f_124.f_4 = 0;
}

int func_276(int iParam0)
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

void func_277(var uParam0, int iParam1)
{
	if (func_138(uParam0, iParam1))
	{
		return;
	}
	func_283(uParam0, iParam1);
}

int func_278(int iParam0)
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

int func_279(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 12;
		case 2:
			return 7;
		case 1:
			return 11;
		case 0:
			return 15;
		default:
			break;
	}
	return -1;
}

int func_280(int iParam0)
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
			return 705255263 /* GXTEntry: "Club Rewards" */;
		case 14:
			return -471215553 /* GXTEntry: "Club Rewards" */;
		case 15:
			return 1371028520;
		case 16:
			return 1479488426;
		case 17:
			return -170363364;
		default:
			break;
	}
	return 0;
}

int func_281(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1348352077))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_282(var uParam0)
{
	return UNLOCK::_UNLOCK_IS_NEW(func_284(uParam0));
}

void func_283(var uParam0, int iParam1)
{
	func_285(uParam0, iParam1);
}

var func_284(var uParam0)
{
	return uParam0;
}

void func_285(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

