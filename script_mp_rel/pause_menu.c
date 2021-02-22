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
	char* sLocal_19 = NULL;
	char* sLocal_20 = NULL;
	struct<188> Local_21 = { 0, -1, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 1;
	var uLocal_220 = 0;
	var uLocal_221 = 2;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;
	var uVar1;
	struct<21> Var2;
	bool bVar23;

	fLocal_13 = 1f;
	fLocal_14 = 1f;
	sLocal_19 = "props_misc@campfires@5_logs";
	sLocal_20 = "Script_PropCampfire";
	if (!func_1(&Local_21))
	{
	}
	if (TXD::_DOES_STREAMED_TXD_EXIST(-637848863))
	{
		TXD::_REQUEST_STREAMED_TXD(-637848863, false);
	}
	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "AllowedToSave", 0);
	uVar1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bAllowedToReplay", 0);
	Var2 = { Global_39.f_9 };
	if (TXD::_DOES_STREAMED_TXD_EXIST(joaat("PM_PLAYER_MP")))
	{
		TXD::_REQUEST_STREAMED_TXD(joaat("PM_PLAYER_MP"), false);
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		if (!Global_17)
		{
			Global_39.f_9 = { Var2 };
		}
		func_2(uVar0, uVar1);
	}
	Local_21.f_183 = 0;
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uVar0, true);
	UIFEED::_0xDD1232B332CBB9E7(6, 1, 0);
	func_3(&Global_26638);
	func_4();
	while ((!SCRIPTS::_0x9E4EF615E307FBBE() && !func_5(Global_26638)) && !bVar23)
	{
		func_6(&Local_21);
		func_7(&Local_21);
		func_8();
		func_9(&Local_21);
		bVar23 = func_10();
		BUILTIN::WAIT(0);
	}
	if (bVar23)
	{
		CAM::DO_SCREEN_FADE_OUT(0);
		func_11(0, -1);
	}
	func_2(uVar0, uVar1);
}

bool func_1(var uParam0)
{
	var uVar0;

	uParam0->f_187 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "mpProgress");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_187, "coopPercent", "0%");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_187, "awardsPercent", func_12());
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_187, "rankPercent", func_13());
	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "sessionInfo");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar0, "characterName", &(Global_17411.f_55.f_644.f_1784));
	uParam0->f_185 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bDisplayMissionChallengeChecklist", 0);
	uParam0->f_186 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bAllowChecklistToggle", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bEnablePauseMenuPhotoMode", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bPauseMenuPhotoModeVisible", 0);
	if (!func_14(uParam0))
	{
		return false;
	}
	return true;
}

void func_2(var uParam0, var uParam1)
{
	if (func_5(Global_26638))
	{
		func_15();
	}
	if (Local_21.f_1 != -1)
	{
		NETWORK::TEXTURE_DOWNLOAD_RELEASE(Local_21.f_1);
	}
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam1);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Local_21.f_185);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Local_21.f_186);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Local_21.f_187);
	func_16(&Local_21);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_3(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

void func_4()
{
	struct<4> Var0;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	char cVar8[64];
	int iVar16;
	char* sVar17;
	bool bVar18;
	bool bVar19;
	char* sVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	float fVar24;
	float fVar25;
	float fVar26;
	float fVar27;

	Var0 = { func_17(0, 1, 0, -1) };
	bVar4 = false;
	iVar6 = PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::PLAYER_ID());
	if (ENTITY::DOES_ENTITY_EXIST(iVar6))
	{
		iVar7 = ENTITY::GET_ENTITY_MODEL(iVar6);
		if (iVar7 == func_18())
		{
			iVar5 = func_19(iVar7);
			bVar4 = true;
		}
	}
	if (bVar4)
	{
		StringCopy(&cVar8, MISC::_CREATE_VAR_STRING(2, func_20(iVar5)), 64);
	}
	else
	{
		cVar8 = { func_21(&Var0, 0, 1) };
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956200.f_5.f_1, &(Global_17411.f_55.f_644.f_1784));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956200.f_5.f_4, &cVar8);
	func_22();
	func_23(0, "MP_PLAYER_PLAYER", "pm_player_mp");
	iVar16 = Global_1956200.f_1431.f_103;
	sVar17 = func_24(iVar16);
	if (iVar16 == -10)
	{
		sVar20 = "rpg_underweight";
		bVar18 = true;
	}
	else if (iVar16 == 10)
	{
		sVar20 = "rpg_overweight";
		bVar18 = true;
	}
	func_25(0, 0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CONDITION_WEIGHT"), MISC::_CREATE_VAR_STRING(2, sVar17), bVar18, sVar20, "pausemenu_player", bVar18, joaat("COLOR_WHITE"));
	if (Global_1956200.f_1431.f_103 == 0 || bVar18)
	{
		bVar19 = true;
	}
	func_26(1, bVar19, bVar18);
	func_26(2, bVar19, bVar18);
	func_26(3, bVar19, bVar18);
	sVar17 = "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
	bVar18 = false;
	sVar20 = "";
	if (func_27())
	{
		sVar17 = "PMPLAYER_CONDITION_TEMPERATURE_COLD";
		bVar18 = true;
		sVar20 = "rpg_cold";
	}
	else if (func_28())
	{
		sVar17 = "PMPLAYER_CONDITION_TEMPERATURE_HOT";
		bVar18 = true;
		sVar20 = "rpg_hot";
	}
	func_25(0, 1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CONDITION_TEMPERATURE"), MISC::_CREATE_VAR_STRING(2, sVar17), bVar18, sVar20, "pausemenu_player", bVar18, joaat("COLOR_WHITE"));
	func_29(1, bVar18, bVar18, sVar20);
	func_25(0, 2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_RANK"), "", 0, "Rank_Shield", "pm_player_mp", 1, joaat("COLOR_WHITE"));
	sVar17 = func_30(Global_1145091[Global_1296859 /*35*/]);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956200.f_5.f_14[0 /*102*/].f_84[2], sVar17);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956200.f_5.f_14[0 /*102*/].f_93[2], true);
	iVar21 = NETWORK::_NETWORK_GET_XP();
	iVar22 = func_31(Global_1145091[Global_1296859 /*35*/] + 1);
	sVar17 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y_XP", iVar21, iVar22);
	func_25(0, 3, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_RANK_XP"), sVar17, 0, "", "", 0, joaat("COLOR_WHITE"));
	sVar20 = func_33(func_32(255));
	func_25(0, 4, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HONOR"), "", 0, sVar20, "pausemenu_player", 1, joaat("COLOR_WHITE"));
	sVar17 = func_35(func_34(PLAYER::PLAYER_ID(), 0), &bVar18, &iVar23);
	func_25(0, 5, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_GENERAL_HOSTILITY"), MISC::_CREATE_VAR_STRING(2, sVar17), bVar18, "ONLINE_OPTIONS_HOSTILITY", "mp_online_options", 1, iVar23);
	fVar24 = func_36(0, 2);
	fVar25 = BUILTIN::TO_FLOAT(func_37(0, 2));
	fVar25 = (fVar25 / func_38());
	fVar26 = ((fVar24 / 100f) * (fVar25 / 60f));
	fVar27 = (100f * (BUILTIN::TO_FLOAT(func_39(0, 2)) / fVar25));
	sVar17 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", BUILTIN::ROUND(fVar24));
	func_25(1, 0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC"), sVar17, 0, "", "", 0, joaat("COLOR_WHITE"));
	sVar17 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_TIME_VALUE_MINUTES", BUILTIN::ROUND(fVar26));
	func_25(1, 1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_TIME"), sVar17, 0, "", "", 0, joaat("COLOR_WHITE"));
	sVar17 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", BUILTIN::ROUND(fVar27));
	bVar18 = fVar27 > 100f;
	iVar23 = func_40(bVar18, joaat("COLOR_RED"), joaat("COLOR_WHITE"));
	func_25(1, 2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar17, bVar18, func_41(fVar27), "pausemenu_player_update", fVar27 != 100f, iVar23);
	bVar18 = func_42();
	func_43(1, bVar18, bVar18);
	fVar24 = func_36(1, 2);
	fVar25 = BUILTIN::TO_FLOAT(func_37(1, 2));
	fVar25 = (fVar25 / func_38());
	fVar26 = ((fVar24 / 100f) * (fVar25 / 60f));
	fVar27 = (100f * (BUILTIN::TO_FLOAT(func_39(1, 2)) / fVar25));
	sVar17 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", BUILTIN::ROUND(fVar24));
	func_25(2, 0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC"), sVar17, 0, "", "", 0, joaat("COLOR_WHITE"));
	sVar17 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_TIME_VALUE_MINUTES", BUILTIN::ROUND(fVar26));
	func_25(2, 1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_TIME"), sVar17, 0, "", "", 0, joaat("COLOR_WHITE"));
	sVar17 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", BUILTIN::ROUND(fVar27));
	bVar18 = fVar27 > 100f;
	iVar23 = func_40(bVar18, joaat("COLOR_RED"), joaat("COLOR_WHITE"));
	func_25(2, 2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar17, bVar18, func_41(fVar27), "pausemenu_player_update", fVar27 != 100f, iVar23);
	fVar24 = func_36(2, 2);
	fVar25 = BUILTIN::TO_FLOAT(func_37(2, 2));
	fVar25 = (fVar25 / func_38());
	fVar26 = ((fVar24 / 100f) * (fVar25 / 60f));
	fVar27 = (100f * (BUILTIN::TO_FLOAT(func_39(2, 2)) / fVar25));
	sVar17 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", BUILTIN::ROUND(fVar24));
	func_25(3, 0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC"), sVar17, 0, "", "", 0, joaat("COLOR_WHITE"));
	sVar17 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_TIME_VALUE_MINUTES", BUILTIN::ROUND(fVar26));
	func_25(3, 1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_TIME"), sVar17, 0, "", "", 0, joaat("COLOR_WHITE"));
	sVar17 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", BUILTIN::ROUND(fVar27));
	bVar18 = fVar27 > 100f;
	iVar23 = func_40(bVar18, joaat("COLOR_RED"), joaat("COLOR_WHITE"));
	func_25(3, 2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar17, bVar18, func_41(fVar27), "pausemenu_player_update", fVar27 != 100f, iVar23);
	sVar17 = MISC::_CREATE_VAR_STRING(2, "STRING", func_45(func_44(382107261)));
	func_25(4, 0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_STORY_COMPLETE"), sVar17, 0, "", "", 0, joaat("COLOR_WHITE"));
	sVar17 = MISC::_CREATE_VAR_STRING(2, "STRING", func_46(joaat("KILLS")));
	func_25(4, 1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_TOTAL_KILLS"), sVar17, 0, "", "", 0, joaat("COLOR_WHITE"));
	sVar17 = MISC::_CREATE_VAR_STRING(2, "STRING", func_46(joaat("DEATHS")));
	func_25(4, 2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_TOTAL_DEATHS"), sVar17, 0, "", "", 0, joaat("COLOR_WHITE"));
}

bool func_5(struct<2> Param0)
{
	if (!func_47(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_48(Param0))
	{
		return false;
	}
	return true;
}

void func_6(var uParam0)
{
	bool bVar0;

	if (func_49(uParam0, 0))
	{
		func_50(uParam0, 0, 0);
	}
	if (!UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("PAUSE_MENU")))
	{
		return;
	}
	bVar0 = UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("PAUSE_MENU"));
	if (uParam0->f_195 != bVar0)
	{
		uParam0->f_195 = bVar0;
		if (bVar0)
		{
			func_50(uParam0, 0, 1);
		}
	}
}

void func_7(var uParam0)
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
					Var0 = { func_51() };
					uParam0->f_1 = NETWORK::_MUGSHOT_TEXTURE_DOWNLOAD_REQUEST(&Var0, 0, "mugshot", true);
					if (uParam0->f_1 != -1)
					{
						*uParam0 = 2;
					}
				}
				break;
			case 2:
				if (NETWORK::GET_STATUS_OF_TEXTURE_DOWNLOAD(uParam0->f_1) == 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956200.f_5.f_2, "mugshot");
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956200.f_5.f_3, "mugshot");
					*uParam0 = 3;
				}
				break;
			case 3:
				break;
		}
	}
}

void func_8()
{
	struct<4> Var0;
	int iVar4;

	iVar4 = joaat("PAUSE_MENU");
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
							func_52(Var0.f_3);
							break;
					}
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					break;
				case -1203660660:
					switch (Var0.f_2)
					{
						case 766694521:
							func_53(770236547, 0);
							break;
						case -385109718:
							func_54();
							break;
						case -609314343:
							func_55();
							break;
						case 1371972537:
							func_56();
							break;
						case -17440837:
							func_57();
							break;
						case -164517057:
							func_58();
							break;
						case -1123713079:
							func_59();
							break;
						case -1332231262:
							CAM::DO_SCREEN_FADE_OUT(0);
							func_60();
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

void func_9(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_61();
	iVar1 = func_62(uParam0);
	if (iVar0 != iVar1)
	{
		if (iVar1 != 0)
		{
			func_63(uParam0, iVar1);
		}
		func_64(uParam0, iVar0);
		func_65(uParam0, iVar0);
	}
	func_66(uParam0, iVar0);
}

int func_10()
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

void func_11(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		func_67(iParam0, iParam1);
	}
	func_68(4);
	func_69();
	func_70(1);
}

var func_12()
{
	char cVar0[16];
	float fVar2;

	fVar2 = STATS::_0x9D0F5D2E1951CD84();
	StringCopy(&cVar0, MISC::_0x2B6846401D68E563(fVar2, 1), 16);
	StringConCat(&cVar0, "%", 16);
	return func_71(cVar0);
}

var func_13()
{
	char cVar0[16];
	float fVar2;
	float fVar3;
	float fVar4;

	fVar2 = BUILTIN::TO_FLOAT(NETWORK::_NETWORK_GET_RANK());
	fVar3 = BUILTIN::TO_FLOAT(999);
	fVar4 = ((fVar2 / fVar3) * 100f);
	StringCopy(&cVar0, MISC::_0x2B6846401D68E563(fVar4, 1), 16);
	StringConCat(&cVar0, "%", 16);
	return func_71(cVar0);
}

bool func_14(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 3;
	iVar2 = 1;
	while (iVar2 <= (iVar0 - 1))
	{
		iVar1 = func_72(iVar2, 1);
		if (!func_73(uParam0, iVar1))
		{
			return false;
		}
		iVar2++;
	}
	return true;
}

void func_15()
{
	Global_0.f_6 = MISC::GET_GAME_TIMER();
	Global_0.f_3 = { Global_35 };
	func_74(&Global_0);
}

int func_16(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 3;
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		iVar1 = func_72(iVar2, 1);
		func_75(uParam0, iVar1);
		iVar2++;
	}
	return 1;
}

struct<4> func_17(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<4> Var0;
	struct<4> Var29;
	bool bVar33;
	int iVar34;
	struct<4> Var35;

	Var0.f_9 = -1591664384;
	if (!func_76(&Var0, bParam0))
	{
	}
	if (!bParam2)
	{
		Var29 = { func_77() };
		if (func_78() && INVENTORY::_0xB881CA836CC4B6D4(&Var29))
		{
			Var0 = { Var29 };
		}
		else if (!INVENTORY::_0x4C543D5DFCD2DAFD(&Var29, &Var0))
		{
			func_79(&Var0, 0);
		}
	}
	if (iParam3 == -1)
	{
		iParam3 = func_80(PLAYER::PLAYER_ID());
	}
	bVar33 = func_81(75);
	if (bVar33)
	{
		iParam3 = 3;
	}
	iVar34 = func_82(iParam3, 0);
	if (iVar34 != 3)
	{
		if (INVENTORY::_0xB881CA836CC4B6D4(&(Global_17411.f_55.f_61[iVar34 /*4*/])))
		{
			Var0 = { Global_17411.f_55.f_61[iVar34 /*4*/] };
		}
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		if (!bParam1)
		{
			return func_83();
		}
		if (!func_84(&Var0, 0))
		{
			Var35 = { func_85(bParam0) };
		}
		else
		{
			Var35 = { Var0 };
		}
		return Var35;
	}
	return Var0;
}

int func_18()
{
	return joaat("A_C_HORSE_MP_MANGY_BACKUP");
}

int func_19(int iParam0)
{
	if (iParam0 == joaat("A_C_HORSE_MP_MANGY_BACKUP"))
	{
		return joaat("BREED_MANGY_BACKUP");
	}
	switch (iParam0)
	{
		case joaat("A_C_HORSE_AMERICANPAINT_OVERO"):
			return joaat("BREED_AMERICANPAINT_OVERO");
		case joaat("A_C_HORSE_AMERICANPAINT_TOBIANO"):
			return joaat("BREED_AMERICANPAINT_TOBIANO");
		case joaat("A_C_HORSE_AMERICANPAINT_SPLASHEDWHITE"):
			return joaat("BREED_AMERICANPAINT_SPLASHEDWHITE");
		case joaat("A_C_HORSE_AMERICANPAINT_GREYOVERO"):
			return joaat("BREED_AMERICANPAINT_GREYOVERO");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK"):
			return joaat("BREED_AMERICANSTANDARDBRED_BLACK");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_BUCKSKIN"):
			return joaat("BREED_AMERICANSTANDARDBRED_BUCKSKIN");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return joaat("BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return joaat("BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN");
		case joaat("A_C_HORSE_ANDALUSIAN_DARKBAY"):
			return joaat("BREED_ANDALUSIAN_DARKBAY");
		case joaat("A_C_HORSE_ANDALUSIAN_ROSEGRAY"):
			return joaat("BREED_ANDALUSIAN_ROSEGRAY");
		case joaat("A_C_HORSE_ANDALUSIAN_PERLINO"):
			return joaat("BREED_ANDALUSIAN_PERLINO");
		case joaat("A_C_HORSE_APPALOOSA_BLANKET"):
			return joaat("BREED_APPALOOSA_BLANKET");
		case joaat("A_C_HORSE_APPALOOSA_LEOPARDBLANKET"):
			return joaat("BREED_APPALOOSA_LEOPARDBLANKET");
		case joaat("A_C_HORSE_APPALOOSA_BROWNLEOPARD"):
			return joaat("BREED_APPALOOSA_BROWNLEOPARD");
		case joaat("A_C_HORSE_APPALOOSA_LEOPARD"):
			return joaat("BREED_APPALOOSA_LEOPARD");
		case joaat("A_C_HORSE_ARABIAN_BLACK"):
			return joaat("BREED_ARABIAN_BLACK");
		case joaat("A_C_HORSE_ARABIAN_ROSEGREYBAY"):
			return joaat("BREED_ARABIAN_ROSEGREYBAY");
		case joaat("A_C_HORSE_ARABIAN_WHITE"):
			return joaat("BREED_ARABIAN_WHITE");
		case joaat("A_C_HORSE_ARDENNES_BAYROAN"):
			return joaat("BREED_ARDENNES_BAYROAN");
		case joaat("A_C_HORSE_ARDENNES_STRAWBERRYROAN"):
			return joaat("BREED_ARDENNES_STRAWBERRYROAN");
		case joaat("A_C_HORSE_ARDENNES_IRONGREYROAN"):
			return joaat("BREED_ARDENNES_IRONGREYROAN");
		case joaat("A_C_HORSE_BELGIAN_BLONDCHESTNUT"):
			return joaat("BREED_BELGIAN_BLONDCHESTNUT");
		case joaat("A_C_HORSE_BELGIAN_MEALYCHESTNUT"):
			return joaat("BREED_BELGIAN_MEALYCHESTNUT");
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
			return joaat("BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN");
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_SEALBROWN"):
			return joaat("BREED_DUTCHWARMBLOOD_SEALBROWN");
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_CHOCOLATEROAN"):
			return joaat("BREED_DUTCHWARMBLOOD_CHOCOLATEROAN");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
			return joaat("BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return joaat("BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
			return joaat("BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_BLACK"):
			return joaat("BREED_KENTUCKYSADDLE_BLACK");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_CHESTNUTPINTO"):
			return joaat("BREED_KENTUCKYSADDLE_CHESTNUTPINTO");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_GREY"):
			return joaat("BREED_KENTUCKYSADDLE_GREY");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_SILVERBAY"):
			return joaat("BREED_KENTUCKYSADDLE_SILVERBAY");
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
			return joaat("BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE");
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return joaat("BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO");
		case joaat("A_C_HORSE_MORGAN_BAY"):
			return joaat("BREED_MORGAN_BAY");
		case joaat("A_C_HORSE_MORGAN_BAYROAN"):
			return joaat("BREED_MORGAN_BAYROAN");
		case joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"):
			return joaat("BREED_MORGAN_FLAXENCHESTNUT");
		case joaat("A_C_HORSE_MORGAN_PALOMINO"):
			return joaat("BREED_MORGAN_PALOMINO");
		case joaat("A_C_HORSE_MUSTANG_GRULLODUN"):
			return joaat("BREED_MUSTANG_GRULLODUN");
		case joaat("A_C_HORSE_MUSTANG_WILDBAY"):
			return joaat("BREED_MUSTANG_WILDBAY");
		case joaat("A_C_HORSE_MUSTANG_TIGERSTRIPEDBAY"):
			return joaat("BREED_MUSTANG_TIGERSTRIPEDBAY");
		case joaat("A_C_HORSE_NOKOTA_BLUEROAN"):
			return joaat("BREED_NOKOTA_BLUEROAN");
		case joaat("A_C_HORSE_NOKOTA_WHITEROAN"):
			return joaat("BREED_NOKOTA_WHITEROAN");
		case joaat("A_C_HORSE_NOKOTA_REVERSEDAPPLEROAN"):
			return joaat("BREED_NOKOTA_REVERSEDAPPLEROAN");
		case joaat("A_C_HORSE_SHIRE_DARKBAY"):
			return joaat("BREED_SHIRE_DARKBAY");
		case joaat("A_C_HORSE_SHIRE_LIGHTGREY"):
			return joaat("BREED_SHIRE_LIGHTGREY");
		case joaat("A_C_HORSE_SUFFOLKPUNCH_SORREL"):
			return joaat("BREED_SUFFOLKPUNCH_SORREL");
		case joaat("A_C_HORSE_SUFFOLKPUNCH_REDCHESTNUT"):
			return joaat("BREED_SUFFOLKPUNCH_REDCHESTNUT");
		case joaat("A_C_HORSE_TENNESSEEWALKER_BLACKRABICANO"):
			return joaat("BREED_TENNESSEEWALKER_BLACKRABICANO");
		case joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT"):
			return joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		case joaat("A_C_HORSE_TENNESSEEWALKER_DAPPLEBAY"):
			return joaat("BREED_TENNESSEEWALKER_DAPPLEBAY");
		case joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN"):
			return joaat("BREED_TENNESSEEWALKER_REDROAN");
		case joaat("A_C_HORSE_TENNESSEEWALKER_FLAXENROAN"):
			return joaat("BREED_TENNESSEEWALKER_FLAXENROAN");
		case joaat("A_C_HORSE_THOROUGHBRED_BLOODBAY"):
			return joaat("BREED_THOROUGHBRED_BLOODBAY");
		case joaat("A_C_HORSE_THOROUGHBRED_DAPPLEGREY"):
			return joaat("BREED_THOROUGHBRED_DAPPLEGREY");
		case joaat("A_C_HORSE_THOROUGHBRED_BRINDLE"):
			return joaat("BREED_THOROUGHBRED_BRINDLE");
		case joaat("A_C_HORSE_THOROUGHBRED_BLACKCHESTNUT"):
			return joaat("BREED_THOROUGHBRED_BLACKCHESTNUT");
		case joaat("A_C_HORSE_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK");
		case joaat("A_C_HORSE_TURKOMAN_DARKBAY"):
			return joaat("BREED_TURKOMAN_DARKBAY");
		case joaat("A_C_HORSE_TURKOMAN_GOLD"):
			return joaat("BREED_TURKOMAN_GOLD");
		case joaat("A_C_HORSE_TURKOMAN_SILVER"):
			return joaat("BREED_TURKOMAN_SILVER");
		case joaat("A_C_HORSE_BRETON_REDROAN"):
			return joaat("BREED_BRETON_REDROAN");
		case joaat("A_C_HORSE_BRETON_SORREL"):
			return joaat("BREED_BRETON_SORREL");
		case joaat("A_C_HORSE_BRETON_GRULLODUN"):
			return joaat("BREED_BRETON_GRULLODUN");
		case joaat("A_C_HORSE_BRETON_SEALBROWN"):
			return joaat("BREED_BRETON_SEALBROWN");
		case joaat("A_C_HORSE_BRETON_MEALYDAPPLEBAY"):
			return joaat("BREED_BRETON_MEALYDAPPLEBAY");
		case joaat("A_C_HORSE_BRETON_STEELGREY"):
			return joaat("BREED_BRETON_STEELGREY");
		case joaat("A_C_HORSE_CRIOLLO_BLUEROANOVERO"):
			return joaat("BREED_CRIOLLO_BLUEROANOVERO");
		case joaat("A_C_HORSE_CRIOLLO_DUN"):
			return joaat("BREED_CRIOLLO_DUN");
		case joaat("A_C_HORSE_CRIOLLO_BAYBRINDLE"):
			return joaat("BREED_CRIOLLO_BAYBRINDLE");
		case joaat("A_C_HORSE_CRIOLLO_SORRELOVERO"):
			return joaat("BREED_CRIOLLO_SORRELOVERO");
		case joaat("A_C_HORSE_CRIOLLO_BAYFRAMEOVERO"):
			return joaat("BREED_CRIOLLO_BAYFRAMEOVERO");
		case joaat("A_C_HORSE_CRIOLLO_MARBLESABINO"):
			return joaat("BREED_CRIOLLO_MARBLESABINO");
		case joaat("A_C_HORSE_GYPSYCOB_PIEBALD"):
			return joaat("BREED_GYPSYCOB_PIEBALD");
		case joaat("A_C_HORSE_GYPSYCOB_WHITEBLAGDON"):
			return joaat("BREED_GYPSYCOB_WHITEBLAGDON");
		case joaat("A_C_HORSE_GYPSYCOB_PALOMINOBLAGDON"):
			return joaat("BREED_GYPSYCOB_PALOMINOBLAGDON");
		case joaat("A_C_HORSE_GYPSYCOB_SKEWBALD"):
			return joaat("BREED_GYPSYCOB_SKEWBALD");
		case joaat("A_C_HORSE_GYPSYCOB_SPLASHEDBAY"):
			return joaat("BREED_GYPSYCOB_SPLASHEDBAY");
		case joaat("A_C_HORSE_GYPSYCOB_SPLASHEDPIEBALD"):
			return joaat("BREED_GYPSYCOB_SPLASHEDPIEBALD");
		case joaat("A_C_HORSE_KLADRUBER_BLACK"):
			return joaat("BREED_KLADRUBER_BLACK");
		case joaat("A_C_HORSE_KLADRUBER_WHITE"):
			return joaat("BREED_KLADRUBER_WHITE");
		case joaat("A_C_HORSE_KLADRUBER_CREMELLO"):
			return joaat("BREED_KLADRUBER_CREMELLO");
		case joaat("A_C_HORSE_KLADRUBER_GREY"):
			return joaat("BREED_KLADRUBER_GREY");
		case joaat("A_C_HORSE_KLADRUBER_DAPPLEROSEGREY"):
			return joaat("BREED_KLADRUBER_DAPPLEROSEGREY");
		case joaat("A_C_HORSE_KLADRUBER_SILVER"):
			return joaat("BREED_KLADRUBER_SILVER");
		case joaat("A_C_HORSE_NORFOLKROADSTER_BLACK"):
			return joaat("BREED_NORFOLKROADSTER_BLACK");
		case joaat("A_C_HORSE_NORFOLKROADSTER_SPECKLEDGREY"):
			return joaat("BREED_NORFOLKROADSTER_SPECKLEDGREY");
		case joaat("A_C_HORSE_NORFOLKROADSTER_PIEBALDROAN"):
			return joaat("BREED_NORFOLKROADSTER_PIEBALDROAN");
		case joaat("A_C_HORSE_NORFOLKROADSTER_ROSEGREY"):
			return joaat("BREED_NORFOLKROADSTER_ROSEGREY");
		case joaat("A_C_HORSE_NORFOLKROADSTER_DAPPLEDBUCKSKIN"):
			return joaat("BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN");
		case joaat("A_C_HORSE_NORFOLKROADSTER_SPOTTEDTRICOLOR"):
			return joaat("BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR");
		case joaat("A_C_DONKEY_01"):
			return joaat("BREED_DONKEY");
		case joaat("A_C_HORSEMULE_01"):
			return joaat("BREED_MULE");
		case joaat("A_C_HORSEMULEPAINTED_01"):
			return joaat("BREED_MULE_PAINTED");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_LIGHTBUCKSKIN"):
			return joaat("BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN");
		case joaat("A_C_HORSE_APPALOOSA_BLACKSNOWFLAKE"):
			return joaat("BREED_APPALOOSA_BLACKSNOWFLAKE");
		case joaat("A_C_HORSE_ARABIAN_GREY"):
			return joaat("BREED_ARABIAN_GREY");
		case joaat("A_C_HORSE_ARABIAN_REDCHESTNUT"):
			return joaat("BREED_ARABIAN_REDCHESTNUT");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_LIVERCHESTNUT"):
			return joaat("BREED_HUNGARIANHALFBRED_LIVERCHESTNUT");
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
			return joaat("BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE");
		case joaat("A_C_HORSE_MUSTANG_GOLDENDUN"):
			return joaat("BREED_MUSTANG_GOLDENDUN");
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_01"):
			return joaat("BREED_MURFREEBROOD_MANGE_01");
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_02"):
			return joaat("BREED_MURFREEBROOD_MANGE_02");
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_03"):
			return joaat("BREED_MURFREEBROOD_MANGE_03");
		default:
			break;
	}
	return 0;
}

char* func_20(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BREED_AMERICANPAINT_OVERO"):
		case joaat("BREED_AMERICANPAINT_GREYOVERO"):
		case joaat("BREED_AMERICANPAINT_SPLASHEDWHITE"):
		case joaat("BREED_AMERICANPAINT_TOBIANO"):
			return "BREED_AMERICANPAINT";
		case joaat("BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN"):
		case joaat("BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
		case joaat("BREED_AMERICANSTANDARDBRED_BUCKSKIN"):
		case joaat("BREED_AMERICANSTANDARDBRED_BLACK"):
		case joaat("BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return "BREED_AMERICANSTANDARDBRED";
		case joaat("BREED_ANDALUSIAN_DARKBAY"):
		case joaat("BREED_ANDALUSIAN_ROSEGRAY"):
		case joaat("BREED_ANDALUSIAN_PERLINO"):
			return "BREED_ANDALUSIAN";
		case joaat("BREED_APPALOOSA_BLANKET"):
		case joaat("BREED_APPALOOSA_LEOPARD"):
		case joaat("BREED_APPALOOSA_LEOPARDBLANKET"):
		case joaat("BREED_APPALOOSA_BLACKSNOWFLAKE"):
		case joaat("BREED_APPALOOSA_BROWNLEOPARD"):
			return "BREED_APPALOOSA";
		case joaat("BREED_ARABIAN_BLACK"):
		case joaat("BREED_ARABIAN_REDCHESTNUT"):
		case joaat("BREED_ARABIAN_GREY"):
		case joaat("BREED_ARABIAN_ROSEGREYBAY"):
		case joaat("BREED_ARABIAN_WHITE"):
			return "BREED_ARABIAN";
		case joaat("BREED_ARDENNES_IRONGREYROAN"):
		case joaat("BREED_ARDENNES_STRAWBERRYROAN"):
		case joaat("BREED_ARDENNES_BAYROAN"):
			return "BREED_ARDENNES";
		case joaat("BREED_BELGIAN_BLONDCHESTNUT"):
		case joaat("BREED_BELGIAN_MEALYCHESTNUT"):
			return "BREED_BELGIAN";
		case joaat("BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
		case joaat("BREED_DUTCHWARMBLOOD_CHOCOLATEROAN"):
		case joaat("BREED_DUTCHWARMBLOOD_SEALBROWN"):
			return "BREED_DUTCHWARMBLOOD";
		case joaat("BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
		case joaat("BREED_HUNGARIANHALFBRED_LIVERCHESTNUT"):
		case joaat("BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
		case joaat("BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return "BREED_HUNGARIANHALFBRED";
		case joaat("BREED_KENTUCKYSADDLE_BLACK"):
		case joaat("BREED_KENTUCKYSADDLE_SILVERBAY"):
		case joaat("BREED_KENTUCKYSADDLE_CHESTNUTPINTO"):
		case joaat("BREED_KENTUCKYSADDLE_GREY"):
			return "BREED_KENTUCKYSADDLE";
		case joaat("BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
		case joaat("BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
		case joaat("BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return "BREED_MISSOURIFOXTROTTER";
		case joaat("BREED_MORGAN_PALOMINO"):
		case joaat("BREED_MORGAN_BAYROAN"):
		case joaat("BREED_MORGAN_FLAXENCHESTNUT"):
		case joaat("BREED_MORGAN_BAY"):
			return "BREED_MORGAN";
		case joaat("BREED_MUSTANG_GRULLODUN"):
		case joaat("BREED_MUSTANG_TIGERSTRIPEDBAY"):
		case joaat("BREED_MUSTANG_GOLDENDUN"):
		case joaat("BREED_MUSTANG_WILDBAY"):
			return "BREED_MUSTANG";
		case joaat("BREED_NOKOTA_REVERSEDAPPLEROAN"):
		case joaat("BREED_NOKOTA_WHITEROAN"):
		case joaat("BREED_NOKOTA_BLUEROAN"):
			return "BREED_NOKOTA";
		case joaat("BREED_SHIRE_LIGHTGREY"):
		case joaat("BREED_SHIRE_RAVENBLACK"):
		case joaat("BREED_SHIRE_DARKBAY"):
			return "BREED_SHIRE";
		case joaat("BREED_SUFFOLKPUNCH_REDCHESTNUT"):
		case joaat("BREED_SUFFOLKPUNCH_SORREL"):
			return "BREED_SUFFOLKPUNCH";
		case joaat("BREED_TENNESSEEWALKER_DAPPLEBAY"):
		case joaat("BREED_TENNESSEEWALKER_CHESTNUT"):
		case joaat("BREED_TENNESSEEWALKER_REDROAN"):
		case joaat("BREED_TENNESSEEWALKER_BLACKRABICANO"):
		case joaat("BREED_TENNESSEEWALKER_MAHOGANYBAY"):
		case joaat("BREED_TENNESSEEWALKER_FLAXENROAN"):
			return "BREED_TENNESSEEWALKER";
		case joaat("BREED_THOROUGHBRED_DAPPLEGREY"):
		case joaat("BREED_THOROUGHBRED_BLACKCHESTNUT"):
		case joaat("BREED_THOROUGHBRED_BLOODBAY"):
		case joaat("BREED_THOROUGHBRED_BRINDLE"):
		case joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return "BREED_THOROUGHBRED";
		case joaat("BREED_TURKOMAN_SILVER"):
		case joaat("BREED_TURKOMAN_GOLD"):
		case joaat("BREED_TURKOMAN_DARKBAY"):
			return "BREED_TURKOMAN";
		case joaat("BREED_BRETON_STEELGREY"):
		case joaat("BREED_BRETON_REDROAN"):
		case joaat("BREED_BRETON_SEALBROWN"):
		case joaat("BREED_BRETON_MEALYDAPPLEBAY"):
		case joaat("BREED_BRETON_GRULLODUN"):
		case joaat("BREED_BRETON_SORREL"):
			return "BREED_BRETON";
		case joaat("BREED_CRIOLLO_SORRELOVERO"):
		case joaat("BREED_CRIOLLO_BAYFRAMEOVERO"):
		case joaat("BREED_CRIOLLO_BAYBRINDLE"):
		case joaat("BREED_CRIOLLO_DUN"):
		case joaat("BREED_CRIOLLO_MARBLESABINO"):
		case joaat("BREED_CRIOLLO_BLUEROANOVERO"):
			return "BREED_CRIOLLO";
		case joaat("BREED_GYPSYCOB_SPLASHEDPIEBALD"):
		case joaat("BREED_GYPSYCOB_PALOMINOBLAGDON"):
		case joaat("BREED_GYPSYCOB_PIEBALD"):
		case joaat("BREED_GYPSYCOB_WHITEBLAGDON"):
		case joaat("BREED_GYPSYCOB_SKEWBALD"):
		case joaat("BREED_GYPSYCOB_SPLASHEDBAY"):
			return "BREED_GYPSYCOB";
		case joaat("BREED_KLADRUBER_DAPPLEROSEGREY"):
		case joaat("BREED_KLADRUBER_WHITE"):
		case joaat("BREED_KLADRUBER_SILVER"):
		case joaat("BREED_KLADRUBER_CREMELLO"):
		case joaat("BREED_KLADRUBER_GREY"):
		case joaat("BREED_KLADRUBER_BLACK"):
			return "BREED_KLADRUBER";
		case joaat("BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN"):
		case joaat("BREED_NORFOLKROADSTER_ROSEGREY"):
		case joaat("BREED_NORFOLKROADSTER_BLACK"):
		case joaat("BREED_NORFOLKROADSTER_PIEBALDROAN"):
		case joaat("BREED_NORFOLKROADSTER_SPECKLEDGREY"):
		case joaat("BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR"):
			return "BREED_NORFOLKROADSTER";
		case joaat("BREED_DONKEY"):
			return "BREED_DONKEY";
		case joaat("BREED_MULE_PAINTED"):
		case joaat("BREED_MULE"):
			return "BREED_MULE";
		case joaat("BREED_BUELL_WARVETS"):
			return "BREED_DUTCHWARMBLOOD";
		case joaat("BREED_JOHN_ENDLESSSUMMER"):
			return "BREED_THOROUGHBRED";
		case joaat("BREED_MURFREEBROOD_MANGE_01"):
			return "BREED_TENNESSEEWALKER";
		case joaat("BREED_MURFREEBROOD_MANGE_02"):
			return "BREED_NOKOTA";
		case joaat("BREED_MURFREEBROOD_MANGE_03"):
			return "BREED_APPALOOSA";
		case joaat("BREED_WINTER02_01"):
			return "BREED_THOROUGHBRED";
		case joaat("BREED_EAGLEFLIES"):
			return "BREED_AMERICANPAINT";
		case joaat("BREED_GANG_BILL"):
			return "BREED_ARDENNES";
		case joaat("BREED_GANG_CHARLES"):
			return "BREED_APPALOOSA";
		case joaat("BREED_GANG_CHARLES_ENDLESSSUMMER"):
			return "BREED_NOKOTA";
		case joaat("BREED_GANG_DUTCH"):
			return "BREED_ARABIAN";
		case joaat("BREED_GANG_HOSEA"):
			return "BREED_TURKOMAN";
		case joaat("BREED_GANG_JAVIER"):
			return "BREED_AMERICANPAINT";
		case joaat("BREED_GANG_JOHN"):
			return "BREED_HUNGARIANHALFBRED";
		case joaat("BREED_GANG_KAREN"):
			return "BREED_NOKOTA";
		case joaat("BREED_GANG_KIERAN"):
			return "BREED_TENNESSEEWALKER";
		case joaat("BREED_GANG_LENNY"):
			return "BREED_MUSTANG";
		case joaat("BREED_GANG_MICAH"):
			return "BREED_MISSOURIFOXTROTTER";
		case joaat("BREED_GANG_SADIE"):
			return "BREED_TURKOMAN";
		case joaat("BREED_GANG_SADIE_ENDLESSSUMMER"):
			return "BREED_MUSTANG";
		case joaat("BREED_GANG_SEAN"):
			return "BREED_AMERICANSTANDARDBRED";
		case joaat("BREED_GANG_TRELAWNEY"):
			return "BREED_APPALOOSA";
		case joaat("BREED_GANG_UNCLE"):
			return "BREED_KENTUCKYSADDLE";
		case joaat("BREED_GANG_UNCLE_ENDLESSSUMMER"):
			return "BREED_APPALOOSA";
		case joaat("BREED_MANGY_BACKUP"):
			return "BREED_MANGY_BACKUP";
		default:
			break;
	}
	return "BREED_INVALID";
}

struct<8> func_21(var uParam0, int iParam1, bool bParam2)
{
	char cVar0[64];
	struct<24> Var8;
	struct<8> Var32;

	StringCopy(&cVar0, "", 64);
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return cVar0;
	}
	Var8 = { func_86(uParam0, iParam1) };
	cVar0 = { Var8.f_12 };
	if (bParam2)
	{
		if (func_87(uParam0, &Var32))
		{
			cVar0 = { Var32 };
		}
	}
	if (MISC::COMPARE_STRINGS(&cVar0, func_88(), false, -1) == 0)
	{
		StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(2, func_20(Var8.f_22)), 64);
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0) == 0)
	{
		if (Var8.f_22 != 0)
		{
			StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(2, func_89(Var8.f_22)), 64);
		}
		else
		{
			StringCopy(&cVar0, "", 64);
		}
	}
	return cVar0;
}

void func_22()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(Global_1956200.f_5.f_8[iVar0]);
		iVar0++;
	}
}

void func_23(int iParam0, char* sParam1, char* sParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956200.f_5.f_14[iParam0 /*102*/].f_10, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956200.f_5.f_14[iParam0 /*102*/].f_11, sParam2);
}

char* func_24(int iParam0)
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

void func_25(int iParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4, char* sParam5, char* sParam6, bool bParam7, int iParam8)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956200.f_5.f_14[iParam0 /*102*/].f_21[iParam1], sParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956200.f_5.f_14[iParam0 /*102*/].f_30[iParam1], sParam3);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956200.f_5.f_14[iParam0 /*102*/].f_39[iParam1], bParam4);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956200.f_5.f_14[iParam0 /*102*/].f_48[iParam1], sParam5);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956200.f_5.f_14[iParam0 /*102*/].f_57[iParam1], sParam6);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1956200.f_5.f_14[iParam0 /*102*/].f_66[iParam1], iParam8);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956200.f_5.f_14[iParam0 /*102*/].f_75[iParam1], bParam7);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1956200.f_5.f_8[iParam0], iParam1, "player_attribute_item", Global_1956200.f_5.f_14[iParam0 /*102*/].f_1[iParam1]);
}

void func_26(int iParam0, bool bParam1, bool bParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956200.f_5.f_14[iParam0 /*102*/].f_13, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956200.f_5.f_14[iParam0 /*102*/].f_12, bParam2);
}

bool func_27()
{
	if (func_90())
	{
		return false;
	}
	return Global_1956200.f_1431.f_96 == 2;
}

bool func_28()
{
	if (func_90())
	{
		return false;
	}
	return Global_1956200.f_1431.f_96 == 0;
}

void func_29(int iParam0, bool bParam1, bool bParam2, char* sParam3)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956200.f_5.f_14[iParam0 /*102*/].f_17, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956200.f_5.f_14[iParam0 /*102*/].f_16, bParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956200.f_5.f_14[iParam0 /*102*/].f_18, sParam3);
}

char* func_30(int iParam0)
{
	return MISC::_0x2B6846401D68E563(BUILTIN::TO_FLOAT(iParam0), 0);
}

int func_31(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 999)
	{
		return -1;
	}
	return Global_1139381.f_11.f_562[(iParam0 - 1)];
}

int func_32(int iParam0)
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

char* func_33(int iParam0)
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

int func_34(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = BUILTIN::FLOOR(func_91(iParam0, bParam1));
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

char* func_35(int iParam0, bool bParam1, int iParam2)
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

float func_36(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_92(2);
	}
	switch (iParam1)
	{
		case 0:
			return Global_1956200.f_1431.f_6[iParam0 /*3*/];
		case 1:
			return Global_1956200.f_1565.f_2.f_6[iParam0 /*3*/];
		default:
			break;
	}
	return -1f;
}

int func_37(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_92(2);
	}
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					if (func_42())
					{
						return 1200;
					}
					else if (func_27())
					{
						return 1200;
					}
					else if (func_28())
					{
						return 1200;
					}
					return Global_1956200.f_1431.f_81;
				case 2:
					return Global_1956200.f_1431.f_83;
				case 1:
					return Global_1956200.f_1431.f_82;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return Global_1956200.f_1565.f_2.f_81;
				case 2:
					return Global_1956200.f_1565.f_2.f_83;
				case 1:
					return Global_1956200.f_1565.f_2.f_82;
				default:
					break;
			}
			break;
	}
	return -1;
}

float func_38()
{
	return Global_1956200.f_1431.f_98;
}

int func_39(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_92(2);
	}
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return Global_1956200.f_1431.f_81;
				case 2:
					return Global_1956200.f_1431.f_83;
				case 1:
					return Global_1956200.f_1431.f_82;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return Global_1956200.f_1565.f_2.f_81;
				case 2:
					return Global_1956200.f_1565.f_2.f_83;
				case 1:
					return Global_1956200.f_1565.f_2.f_82;
				default:
					break;
			}
			break;
	}
	return -1;
}

int func_40(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

char* func_41(float fParam0)
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

bool func_42()
{
	if (func_90())
	{
		return false;
	}
	return Global_1146212.f_21645[20 /*209*/].f_208;
}

void func_43(int iParam0, bool bParam1, bool bParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956200.f_5.f_14[iParam0 /*102*/].f_15, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956200.f_5.f_14[iParam0 /*102*/].f_14, bParam2);
}

struct<2> func_44(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

int func_45(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_INT(&uParam0, &uVar0);
	return uVar0;
}

int func_46(int iParam0)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_44(iParam0) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

bool func_47(int iParam0)
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

int func_48(int iParam0)
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

bool func_49(var uParam0, int iParam1)
{
	return func_93(uParam0->f_196, iParam1);
}

void func_50(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_94(&(uParam0->f_196), iParam1);
	}
	else
	{
		func_95(&(uParam0->f_196), iParam1);
	}
}

struct<7> func_51()
{
	struct<7> Var0;

	NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0);
	return Var0;
}

void func_52(var uParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0, "rpg_pause_item_index");
	switch (Global_1956200.f_5.f_1425)
	{
		case 0:
			func_96(iVar0);
			break;
		case 1:
			func_97(iVar0);
			break;
		case 2:
			func_98(iVar0);
			break;
		case 3:
			func_99(iVar0);
			break;
		case 4:
			func_100(iVar0);
			break;
		case 5:
			func_101(iVar0);
			break;
	}
}

void func_53(int iParam0, bool bParam1)
{
	if (Global_1960148.f_1)
	{
		return;
	}
	Global_1960148 = iParam0;
	if (bParam1)
	{
		Global_1960148.f_1 = 1;
	}
}

void func_54()
{
	char* sVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3[24];
	bool bVar6;
	int iVar7;
	var uVar8;

	func_102(1, 1);
	Global_1956200.f_5.f_1425 = 0;
	func_104(MISC::_CREATE_VAR_STRING(2, func_103(0)));
	func_105(0, "PMPLAYER_STATISTICS");
	func_106(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0, 0, 0);
	sVar0 = func_30(Global_1145091[Global_1296859 /*35*/]);
	func_106(2, "PMPLAYER_RANK", "", 1, 0, 0, "", "", sVar0, 1);
	func_106(3, "PMPLAYER_HONOR", "", 1, 0, 1, func_33(func_32(255)), "pausemenu_player", 0, 0);
	func_105(4, "PMPLAYER_CONDITIONS");
	func_105(9, "PMPLAYER_PERKS");
	if (!func_108(Global_1146212.f_47689.f_63[func_107(-813902658) /*2*/].f_1))
	{
		iVar1 = func_109(-813902658);
		func_106(10, "CONSUMABLE_TONIC_BLENDING", MISC::_CREATE_VAR_STRING(2, "PMPLAYER_GENERAL_TONIC_TIME_REMAINING", iVar1), 1, 0, 0, 0, 0, 0, 0);
	}
	if (!func_108(Global_1146212.f_47689.f_63[func_107(-1685270562) /*2*/].f_1))
	{
		iVar1 = func_109(-1685270562);
		func_106(11, "CONSUMABLE_TONIC_HARDY", MISC::_CREATE_VAR_STRING(2, "PMPLAYER_GENERAL_TONIC_TIME_REMAINING", iVar1), 1, 0, 0, 0, 0, 0, 0);
	}
	iVar2 = 167;
	if (Global_1146212.f_35859.f_919[iVar2 /*12*/] == 1130659268)
	{
		func_106(12, "PROVISION_TRINKET_BEAVER_TOOTH_NET", "", 1, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		func_106(12, "PROVISION_TRINKET_BEAVER_TOOTH_NET", "", 0, 0, 0, 0, 0, 0, 0);
	}
	iVar2 = 169;
	if (Global_1146212.f_35859.f_919[iVar2 /*12*/] == -980934770)
	{
		func_106(13, "PROVISION_TRINKET_BUCK_ANTLER_NET", "", 1, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		func_106(13, "PROVISION_TRINKET_BUCK_ANTLER_NET", "", 0, 0, 0, 0, 0, 0, 0);
	}
	iVar2 = 170;
	if (Global_1146212.f_35859.f_919[iVar2 /*12*/] == 130533095)
	{
		func_106(14, "PROVISION_TRINKET_JAVELINA_TUSK", "", 1, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		func_106(14, "PROVISION_TRINKET_JAVELINA_TUSK", "", 0, 0, 0, 0, 0, 0, 0);
	}
	iVar2 = 171;
	if (Global_1146212.f_35859.f_919[iVar2 /*12*/] == -193167881)
	{
		func_106(15, "PROVISION_TRINKET_RAM_HORN_NET", "", 1, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		func_106(15, "PROVISION_TRINKET_RAM_HORN_NET", "", 0, 0, 0, 0, 0, 0, 0);
	}
	iVar2 = 168;
	if (Global_1146212.f_35859.f_919[iVar2 /*12*/] == -1246069683)
	{
		func_106(16, "PROVISION_TRINKET_SNOWY_EGRET", "", 1, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		func_106(16, "PROVISION_TRINKET_SNOWY_EGRET", "", 0, 0, 0, 0, 0, 0, 0);
	}
	StringCopy(&cVar3, DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1956200.f_5.f_14[0 /*102*/].f_48[0]), 24);
	bVar6 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1956200.f_5.f_14[0 /*102*/].f_75[0]);
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1956200.f_5.f_14[0 /*102*/].f_30[0]);
	if (bVar6)
	{
		func_106(5, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 1, bVar6, &cVar3, "pausemenu_player", 0, 0);
	}
	else
	{
		func_106(5, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 0, 0, 0, 0, 0, 0);
	}
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1956200.f_5.f_14[0 /*102*/].f_30[1]);
	if (func_28())
	{
		func_106(6, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 1, 1, "rpg_hot", "pausemenu_player", 0, 0);
	}
	else if (func_27())
	{
		func_106(6, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 1, 1, "rpg_cold", "pausemenu_player", 0, 0);
	}
	else
	{
		func_106(6, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 0, 0, 0, 0, 0, 0);
	}
	if (func_42())
	{
		func_106(7, "PMPLAYER_CONDITION_TOXICITY", MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CONDITION_TOXICITY_POISONED"), 1, 1, 1, "rpg_sick", "pausemenu_player", 0, 0);
	}
	else
	{
		func_106(7, "PMPLAYER_CONDITION_TOXICITY", "", 0, 0, 0, 0, 0, 0, 0);
	}
	sVar0 = func_35(func_34(PLAYER::PLAYER_ID(), 0), &iVar7, &uVar8);
	func_106(8, "PMPLAYER_GENERAL_HOSTILITY", MISC::_CREATE_VAR_STRING(2, sVar0), 1, iVar7, 1, "ONLINE_OPTIONS_HOSTILITY", "mp_online_options", 0, 0);
	func_110(0);
	func_111(0);
	func_96(1);
}

void func_55()
{
	char* sVar0;
	char* sVar1;
	vector3 vVar2[24];
	bool bVar5;

	Global_1956200.f_5.f_1425 = 1;
	func_102(1, 1);
	func_104(MISC::_CREATE_VAR_STRING(2, func_103(1)));
	func_105(0, "PMPLAYER_STATISTICS");
	func_106(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0, 0, 0);
	sVar1 = func_112(0, 2) + 5;
	func_106(2, "PMPLAYER_PROGRESSION", MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_LEVEL", sVar1), 1, 0, 0, 0, 0, 0, 0);
	func_105(3, "PMPLAYER_CONDITIONS");
	StringCopy(&cVar2, DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1956200.f_5.f_14[0 /*102*/].f_48[0]), 24);
	bVar5 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1956200.f_5.f_14[0 /*102*/].f_75[0]);
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1956200.f_5.f_14[0 /*102*/].f_30[0]);
	if (bVar5)
	{
		func_106(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 1, bVar5, &cVar2, "pausemenu_player", 0, 0);
	}
	else
	{
		func_106(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 0, 0, 0, 0, 0, 0);
	}
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1956200.f_5.f_14[0 /*102*/].f_30[1]);
	if (func_28())
	{
		func_106(5, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 1, 1, "rpg_hot", "pausemenu_player", 0, 0);
	}
	else if (func_27())
	{
		func_106(5, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 1, 1, "rpg_cold", "pausemenu_player", 0, 0);
	}
	else
	{
		func_106(5, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 0, 0, 0, 0, 0, 0);
	}
	if (func_42())
	{
		func_106(6, "PMPLAYER_CONDITION_TOXICITY", MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CONDITION_TOXICITY_POISONED"), 1, 1, 1, "rpg_sick", "pausemenu_player", 0, 0);
	}
	else
	{
		func_106(6, "PMPLAYER_CONDITION_TOXICITY", "", 0, 0, 0, 0, 0, 0, 0);
	}
	func_110(0);
	func_111(0);
	func_97(1);
	func_113("PMPLAYER_HEALTH_OVERVIEW_TOOLTIP");
}

void func_56()
{
	char* sVar0;
	char* sVar1;
	vector3 vVar2[24];
	bool bVar5;

	Global_1956200.f_5.f_1425 = 2;
	func_102(1, 1);
	func_104(MISC::_CREATE_VAR_STRING(2, func_103(2)));
	func_105(0, "PMPLAYER_STATISTICS");
	func_106(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0, 0, 0);
	sVar1 = func_112(1, 2) + 5;
	func_106(2, "PMPLAYER_PROGRESSION", MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_LEVEL", sVar1), 1, 0, 0, 0, 0, 0, 0);
	func_105(3, "PMPLAYER_CONDITIONS");
	StringCopy(&cVar2, DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1956200.f_5.f_14[0 /*102*/].f_48[0]), 24);
	bVar5 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1956200.f_5.f_14[0 /*102*/].f_75[0]);
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1956200.f_5.f_14[0 /*102*/].f_30[0]);
	if (bVar5)
	{
		func_106(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 1, bVar5, &cVar2, "pausemenu_player", 0, 0);
	}
	else
	{
		func_106(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 0, 0, 0, 0, 0, 0);
	}
	func_110(0);
	func_111(0);
	func_98(1);
	func_113("PMPLAYER_STAMINA_OVERVIEW_TOOLTIP");
}

void func_57()
{
	char* sVar0;
	char* sVar1;
	vector3 vVar2[24];
	bool bVar5;

	Global_1956200.f_5.f_1425 = 3;
	func_102(1, 1);
	func_104(MISC::_CREATE_VAR_STRING(2, func_103(3)));
	func_105(0, "PMPLAYER_STATISTICS");
	func_106(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0, 0, 0);
	sVar1 = func_112(2, 2) + 5;
	func_106(2, "PMPLAYER_PROGRESSION", MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_LEVEL", sVar1), 1, 0, 0, 0, 0, 0, 0);
	func_105(3, "PMPLAYER_CONDITIONS");
	StringCopy(&cVar2, DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1956200.f_5.f_14[0 /*102*/].f_48[0]), 24);
	bVar5 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1956200.f_5.f_14[0 /*102*/].f_75[0]);
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1956200.f_5.f_14[0 /*102*/].f_30[0]);
	if (bVar5)
	{
		func_106(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 1, bVar5, &cVar2, "pausemenu_player", 0, 0);
	}
	else
	{
		func_106(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 0, 0, 0, 0, 0, 0);
	}
	func_110(0);
	func_111(0);
	func_99(1);
	func_113("PMPLAYER_DEADEYE_OVERVIEW_TOOLTIP");
}

void func_58()
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

	Global_1956200.f_5.f_1425 = 4;
	func_102(1, 1);
	func_104(MISC::_CREATE_VAR_STRING(2, func_103(4)));
	func_105(0, "PMPLAYER_LIFE_STATS");
	func_114();
	StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(10, "PMPLAYER_MONEY", func_116((func_115(joaat("TOTAL_MONEY_EARNED")) / 100f), 2)), 64);
	func_106(2, "PMPLAYER_TOTAL_CASH", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(10, "PMPLAYER_GOLD", func_116((func_115(joaat("TOTAL_GOLD_EARNED")) / 100f), 2)), 64);
	func_106(3, "PMPLAYER_TOTAL_GOLD", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(10, "PMPLAYER_MONEY", func_116((func_115(joaat("TOTAL_MONEY_SPENT")) / 100f), 2)), 64);
	func_106(4, "PMPLAYER_CASH_SPENT", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(10, "PMPLAYER_GOLD", func_116((func_115(joaat("TOTAL_GOLD_SPENT")) / 100f), 2)), 64);
	func_106(5, "PMPLAYER_GOLD_SPENT", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_46(joaat("KILLS")), 64);
	func_106(6, "PMPLAYER_TOTAL_KILLS", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_46(joaat("DEATHS")), 64);
	func_106(7, "PMPLAYER_TOTAL_DEATHS", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	iVar8 = (func_46(joaat("TOTAL_PLAYING_TIME")) / 1000);
	iVar9 = (iVar8 / 60);
	iVar10 = (iVar9 / 60);
	iVar11 = (iVar10 / 24);
	iVar10 = (iVar10 % 24);
	StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_DAYS_AND_HOURS", iVar11, iVar10), 64);
	func_106(8, "PMPLAYER_TIME_ONLINE", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	func_117("ALL HORSES", &iVar12, &iVar13, -1591664384, 0);
	func_118(iVar12);
	iVar14 = func_119(joaat("HORSE_OWNED"));
	if (iVar14 >= iVar13)
	{
		IntToString(&cVar0, iVar14, 64);
	}
	else
	{
		IntToString(&cVar0, iVar13, 64);
		func_121(func_120(joaat("HORSE_OWNED")), (iVar13 - iVar14));
	}
	func_106(9, "PMPLAYER_HORSES_OWNED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	func_105(10, "PMPLAYER_CRIME_STAT");
	IntToString(&cVar0, func_46(joaat("KILLS_PLAYERS")), 64);
	func_106(11, "PMPLAYER_PLAYERS_KILLED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_122(joaat("KILLS"), joaat("LAW")), 64);
	func_106(12, "PMPLAYER_LAW_KILLED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_122(joaat("KILLS"), joaat("CIVILIAN")), 64);
	func_106(13, "PMPLAYER_PEDS_KILLED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	iVar8 = func_122(1477929018, -2140438327);
	iVar9 = (iVar8 / 60);
	iVar10 = (iVar9 / 60);
	iVar11 = (iVar10 / 24);
	iVar10 = (iVar10 % 24);
	iVar9 = (iVar9 % 60);
	StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_DAYS_HOURS_MINUTES", iVar11, iVar10, iVar9), 64);
	func_106(14, "PMPLAYER_TIME_WANTED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_122(joaat("LOOTED"), joaat("HUMANS")), 64);
	func_106(15, "PMPLAYER_PEDS_LOOTED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	func_105(16, "PMPLAYER_HUNTING");
	IntToString(&cVar0, func_122(joaat("KILLS"), joaat("ANIMAL")), 64);
	func_106(17, "PMPLAYER_ANIMALS_KILLED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_122(joaat("KILLED"), -1927753141), 64);
	func_106(18, "PMPLAYER_UNIQUE_ANIMALS_KILLED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, ((func_122(joaat("SKINNED"), joaat("SMALL_ANIMALS")) + func_122(joaat("SKINNED"), joaat("MEDIUM_ANIMALS"))) + func_122(joaat("SKINNED"), joaat("LARGE_ANIMALS"))), 64);
	func_106(19, "PMPLAYER_ANIMALS_SKINNED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_122(joaat("SKINNED"), -1927753141), 64);
	func_106(20, "PMPLAYER_UNIQUE_ANIMALS_SKINNED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_122(joaat("SKINNED_PELT_QUALITY"), joaat("PERFECT")), 64);
	func_106(21, "PMPLAYER_PERFEECT_KILLS", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(10, "PMPLAYER_MONEY", func_116((func_115(joaat("TOTAL_HUNTING_MONEY_EARNED")) / 100f), 2)), 64);
	func_106(22, "PMPLAYER_HUNTING_PROFITS", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_46(joaat("FISH_CAUGHT")), 64);
	func_106(23, "PMPLAYER_FISH_CAUGHT", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	if (MISC::_SHOULD_USE_METRIC_WEIGHT())
	{
		fVar15 = (func_115(joaat("BIGGEST_FISH_CAUGHT")) * 0.453592f);
		StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(10, "PMPLAYER_KG", func_116(fVar15, 2)), 64);
	}
	else
	{
		iVar16 = func_46(joaat("BIGGEST_FISH_CAUGHT"));
		fVar17 = (func_115(joaat("BIGGEST_FISH_CAUGHT")) - BUILTIN::TO_FLOAT(iVar16));
		StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_LB_AND_OZ", iVar16, BUILTIN::ROUND((16f * fVar17))), 64);
	}
	func_106(24, "PMPLAYER_BIGGEST_FISH", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	func_105(25, "PMPLAYER_CONTENT");
	IntToString(&cVar0, func_45(func_44(382107261)), 64);
	func_106(26, "PMPLAYER_STORY_COMPLETE", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	iVar18 = func_122(joaat("WINS"), joaat("UGC_SERIES"));
	iVar19 = func_122(joaat("LOSSES"), joaat("UGC_SERIES"));
	StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", (iVar18 * 100 / (iVar18 + iVar19))), 64);
	func_106(27, "PMPLAYER_SERIES_COMPLETE_PER", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, (iVar18 + iVar19), 64);
	func_106(28, "PMPLAYER_SERIES_COMPLETE", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	func_110(0);
	func_111(0);
	func_100(1);
	func_113("PMPLAYER_GENERAL_STATS_TOOLTIP");
}

void func_59()
{
	struct<4> Var0;
	int iVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	char cVar9[64];
	int iVar17;
	bool bVar18;
	char cVar19[64];
	float fVar27;
	bool bVar28;
	char cVar29[64];
	var uVar37;
	char cVar38[64];
	int iVar46;
	int iVar48;
	char cVar49[64];
	char cVar57[64];
	char* sVar65;

	func_102(1, 1);
	Global_1956200.f_5.f_1425 = 5;
	Var0 = { func_17(0, 1, 0, -1) };
	iVar4 = PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::PLAYER_ID());
	bVar5 = ENTITY::DOES_ENTITY_EXIST(iVar4);
	if (bVar5)
	{
		iVar7 = func_123(iVar4);
		iVar8 = func_124(iVar4);
	}
	else
	{
		iVar7 = func_125(&Var0, 0);
		iVar8 = func_126(&Var0, 0);
	}
	iVar7 = iVar7;
	StringCopy(&cVar9, MISC::_CREATE_VAR_STRING(2, "HORSE_BONDING_LEVEL", iVar8), 64);
	bVar18 = false;
	if (bVar5)
	{
		iVar17 = func_127(iVar4, 0);
	}
	else
	{
		iVar17 = func_128(Var0, 0);
	}
	if (iVar17 <= 50)
	{
		StringCopy(&cVar19, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_CONDITION_CLEANLINESS_CLEAN"), 64);
	}
	else if (iVar17 < 100)
	{
		StringCopy(&cVar19, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_CONDITION_CLEANLINESS_DIRTY"), 64);
		bVar18 = true;
	}
	else
	{
		StringCopy(&cVar19, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_CONDITION_CLEANLINESS_FILTHY"), 64);
		bVar18 = true;
	}
	fVar27 = 0f;
	bVar28 = false;
	if (bVar5)
	{
		fVar27 = func_129(iVar4);
	}
	if (fVar27 > 0f)
	{
		StringCopy(&cVar29, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_CONDITION_MOOD_AGITATED"), 64);
		bVar28 = true;
	}
	else
	{
		StringCopy(&cVar29, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_CONDITION_MOOD_CALM"), 64);
	}
	if (func_130(joaat("SLOTID_HORSE_SADDLE"), &uVar37))
	{
		if (func_131(uVar37, &iVar46, 14460646, 0))
		{
			StringCopy(&cVar38, HUD::_GET_LABEL_TEXT_BY_HASH(iVar46), 64);
		}
	}
	if (func_130(joaat("SLOTID_HORSE_STIRRUP"), &iVar48))
	{
		StringCopy(&cVar49, func_132(iVar48), 64);
	}
	StringCopy(&cVar57, DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1956200.f_5.f_4), 64);
	sVar65 = MISC::_CREATE_VAR_STRING(2, "AT_HORSE");
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar57))
	{
		sVar65 = func_133(&cVar57);
	}
	func_104(sVar65);
	func_105(0, "PMPLAYER_STATS");
	func_106(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0, 0, 0);
	func_106(2, "PMPLAYER_HORSE_PHYSIQUE_TITLE", "", 1, 0, 0, 0, 0, 0, 0);
	func_106(3, "PMPLAYER_HORSE_BONDING_TITLE", &cVar9, 1, 0, 0, 0, 0, 0, 0);
	func_106(4, "PMPLAYER_HORSE_HEALTH_TITLE", "", 1, 0, 0, 0, 0, 0, 0);
	func_106(5, "PMPLAYER_HORSE_STAMINA_TITLE", "", 1, 0, 0, 0, 0, 0, 0);
	func_105(6, "PMPLAYER_CONDITIONS");
	func_106(7, "PMPLAYER_HORSE_CONDITION_CLEANLINESS", &cVar19, 1, bVar18, bVar18, "rpg_horse_dirty", "pausemenu_player", 0, 0);
	func_106(8, "PMPLAYER_HORSE_CONDITION_MOOD", &cVar29, 1, bVar28, bVar28, "rpg_horse_agitation", "pausemenu_player", 0, 0);
	func_105(9, "PMPLAYER_HORSE_TACK_TRINKETS_NET");
	func_106(10, "PMPLAYER_HORSE_TACK_SADDLE_TITLE", &cVar38, 1, 0, 0, 0, 0, 0, 0);
	func_106(11, "PMPLAYER_HORSE_TACK_STIRRUPS_TITLE", &cVar49, 1, 0, 0, 0, 0, 0, 0);
	iVar6 = 168;
	if (Global_1146212.f_35859.f_919[iVar6 /*12*/] == -1246069683)
	{
		func_106(12, "PMPLAYER_HORSE_TACK_TRINKET_TITLE", MISC::_CREATE_VAR_STRING(2, "PROVISION_TRINKET_SNOWY_EGRET"), 1, 0, 0, 0, 0, 0, 0);
	}
	func_101(1);
}

void func_60()
{
	func_68(4);
	func_69();
	func_70(2);
	func_134(joaat("SINGLE_PLAYER"), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}

int func_61()
{
	if (UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("PAUSE_MENU")))
	{
		return UIAPPS::_0x96FD694FE5BE55DC(joaat("PAUSE_MENU"));
	}
	if (UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("PROGRESS_MENU")))
	{
		return UIAPPS::_0x96FD694FE5BE55DC(joaat("PROGRESS_MENU"));
	}
	return 0;
}

int func_62(var uParam0)
{
	return uParam0->f_197;
}

void func_63(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1271225230:
			func_135(uParam0);
			break;
		case joaat("PAUSE_PROGRESS_MP_INDEX"):
			func_136(uParam0);
			break;
	}
}

void func_64(var uParam0, int iParam1)
{
	uParam0->f_197 = iParam1;
}

void func_65(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1271225230:
			func_137(uParam0);
			break;
		case joaat("PAUSE_PROGRESS_MP_INDEX"):
			func_138(uParam0);
			break;
	}
}

void func_66(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1271225230:
			func_139(uParam0);
			break;
		case joaat("PAUSE_PROGRESS_MP_INDEX"):
			func_140(uParam0);
			break;
	}
}

void func_67(int iParam0, int iParam1)
{
	if (Global_1572864.f_17 != 0)
	{
		return;
	}
	Global_1572864.f_17 = iParam0;
	Global_1572864.f_18 = iParam1;
}

void func_68(int iParam0)
{
	Global_1572864.f_3 = (Global_1572864.f_3 || iParam0);
}

void func_69()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_1572887.f_405.f_1[iVar0] = 0;
		iVar0++;
	}
}

void func_70(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	Global_1572864.f_1 = iParam0;
}

var func_71(char[4] cParam0, char[4] cParam1)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

int func_72(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1271225230;
		case 2:
			return joaat("PAUSE_PROGRESS_MP_INDEX");
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

bool func_73(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1271225230:
			return func_141(uParam0);
		case joaat("PAUSE_PROGRESS_MP_INDEX"):
			return func_142(uParam0);
	}
	return false;
}

void func_74(var uParam0)
{
	uParam0->f_2 = 0;
}

void func_75(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1271225230:
			func_143(uParam0);
			break;
		case joaat("PAUSE_PROGRESS_MP_INDEX"):
			func_144(uParam0);
			break;
	}
}

bool func_76(var uParam0, bool bParam1)
{
	struct<29> Var0;
	struct<14> Var29;
	int iVar43;
	int iVar44;
	struct<10> Var45;
	int iVar59;

	Var0.f_9 = -1591664384;
	Var29 = { func_145(0, -1591664384, -1591664384, -1591664384, joaat("CI_CATEGORY_HORSE"), 0, 0) };
	if (func_146(&Var29, &iVar43, &iVar44, bParam1))
	{
		Var45.f_9 = -1591664384;
		iVar59 = 0;
		while (iVar59 < iVar44)
		{
			if (func_147(&Var45, iVar59, iVar43, iVar44))
			{
				if (func_148(&Var45, &Var0, 0))
				{
					if (func_149(&(Var0.f_24), 16))
					{
						*uParam0 = { Var0 };
						func_118(iVar43);
						return true;
					}
				}
			}
			iVar59++;
		}
		func_118(iVar43);
	}
	return false;
}

struct<4> func_77()
{
	return Global_1291734.f_11.f_310;
}

bool func_78()
{
	return Global_1291734.f_11.f_318 > Global_1296859.f_21;
}

void func_79(var uParam0, bool bParam1)
{
	Global_1291734.f_11.f_310 = { *uParam0 };
	if (bParam1)
	{
		Global_1291734.f_11.f_318 = Global_1296859.f_21 + 10;
	}
}

int func_80(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_150(iParam0);
	bVar1 = func_152(func_151(), 0, 0);
	if (!bVar1)
	{
		return 3;
	}
	return iVar0;
}

bool func_81(int iParam0)
{
	return func_153(&(Global_3145858.f_6), iParam0);
}

int func_82(int iParam0, int iParam1)
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

struct<4> func_83()
{
	struct<4> Var0;

	return Var0;
}

bool func_84(var uParam0, bool bParam1)
{
	struct<29> Var0;
	struct<14> Var29;
	int iVar43;
	int iVar44;
	struct<10> Var45;
	int iVar59;

	Var0.f_9 = -1591664384;
	Var29 = { func_145(0, -1591664384, -1591664384, -1591664384, joaat("CI_CATEGORY_HORSE"), 0, 0) };
	if (func_146(&Var29, &iVar43, &iVar44, bParam1))
	{
		Var45.f_9 = -1591664384;
		iVar59 = 0;
		while (iVar59 < iVar44)
		{
			if (func_147(&Var45, iVar59, iVar43, iVar44))
			{
				if (func_148(&Var45, &Var0, 0))
				{
					if (func_149(&(Var0.f_24), 32))
					{
						*uParam0 = { Var0 };
						func_118(iVar43);
						return true;
					}
				}
			}
			iVar59++;
		}
		func_118(iVar43);
	}
	return false;
}

struct<4> func_85(bool bParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar16;

	Var2.f_9 = -1591664384;
	if (!func_117("ALL HORSES", &iVar0, &iVar1, -1591664384, bParam0))
	{
		return Var2;
	}
	iVar16 = 0;
	while (iVar16 < iVar1)
	{
		if (!func_147(&Var2, iVar16, iVar0, iVar1))
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
	func_118(iVar0);
	return Var2;
}

struct<24> func_86(var uParam0, int iParam1)
{
	struct<24> Var0;

	Var0.f_10 = -1;
	func_154(uParam0, iParam1, &Var0);
	return Var0;
}

bool func_87(var uParam0, var uParam1)
{
	int iVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!INVENTORY::_0x4C543D5DFCD2DAFD(&(Global_1291734.f_938[iVar0 /*24*/]), uParam0))
		{
		}
		else
		{
			if (Global_1291734.f_938[iVar0 /*24*/].f_23 < Global_1296859.f_21)
			{
				*uParam1 = { Global_1291734.f_938[iVar0 /*24*/].f_7 };
				return true;
			}
			*uParam1 = { Global_1291734.f_938[iVar0 /*24*/].f_15 };
			return true;
		}
		iVar0++;
	}
	return false;
}

char* func_88()
{
	return "UNNAMED_HORSE";
}

char* func_89(int iParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, func_155(iParam0), 64);
	StringConCat(&cVar0, "_BREED", 64);
	return func_133(&cVar0);
}

bool func_90()
{
	return (Global_1952637.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1952637.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE"));
}

float func_91(int iParam0, bool bParam1)
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

int func_92(int iParam0)
{
	return func_157(func_156(iParam0));
}

bool func_93(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(iParam0, iParam1);
}

void func_94(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_95(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_96(int iParam0)
{
	int iVar0;
	int iVar1;

	func_158(0);
	func_159(0);
	func_160(0);
	func_110(0);
	func_111(0);
	func_161(0);
	func_162(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_163("MP_PLAYER_PLAYER", 0);
			func_165(func_164(0));
			func_166("PMPLAYER_OVERVIEW");
			func_102(0, 1);
			func_113("PMPLAYER_OVERVIEW_TOOLTIP");
			func_158(1);
			func_159(1);
			func_160(1);
			break;
		case 2:
			func_163("MP_PLAYER_PLAYER", 0);
			func_165(func_164(0));
			func_166("PMPLAYER_RANK");
			func_102(0, 1);
			iVar0 = NETWORK::_NETWORK_GET_XP();
			iVar1 = func_31(Global_1145091[Global_1296859 /*35*/] + 1);
			func_167(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_PROGRESSION_STAT_NEXT"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y_XP", iVar0, iVar1), 0, 0, 0, 0, 0, 0, 0, 0);
			func_113("PMPLAYER_RANK_TOOLTIP");
			break;
		case 3:
			func_163("MP_PLAYER_HONOR", 0);
			func_165("PMPLAYER_GENERAL_HONOR_DESC");
			func_166("PMPLAYER_HONOR");
			func_102(0, 1);
			func_113("PMPLAYER_HONOR_TOOLTIP");
			break;
		case 5:
			func_163(func_168(), 0);
			func_165("PMPLAYER_CONDITION_WEIGHT_DESC");
			func_166("PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT");
			func_102(0, 1);
			func_169(0);
			func_113("PMPLAYER_CONDITION_WEIGHT_TOOLTIP");
			break;
		case 6:
			func_163(func_170(), func_171());
			func_165("PMPLAYER_CONDITION_TEMPERATURE_DESC");
			func_166("PMPLAYER_CONDITION_TEMPERATURE");
			func_102(0, 1);
			func_172();
			func_113("PMPLAYER_CONDITION_TEMPERATURE_TOOLTIP");
			break;
		case 7:
			func_163(func_173(), func_174());
			func_165("PMPLAYER_CONDITION_TOXICITY_DESC");
			func_166("PMPLAYER_CONDITION_TOXICITY");
			func_102(0, 1);
			func_175();
			func_113("PMPLAYER_CONDITION_TOXICITY_TOOLTIP_NET");
			break;
		case 8:
			func_163("MP_PLAYER_HOSTILITY", 0);
			func_165("PMPLAYER_CONDITION_HOSTILITY_DESC_NET");
			func_166("PMPLAYER_GENERAL_HOSTILITY");
			func_102(0, 1);
			func_113("PMPLAYER_GENERAL_HOSTILITY_TOOLTIP");
			break;
		case 10:
			if (!func_108(Global_1146212.f_47689.f_63[func_107(-813902658) /*2*/].f_1))
			{
				func_163("TRINKET_TONIC_BLENDING", "pausemenu_player_update");
				func_165("CONSUMABLE_TONIC_BLENDING_DESC");
				func_166("CONSUMABLE_TONIC_BLENDING");
				func_102(0, 1);
				func_113("PMPLAYER_GENERAL_TONIC_BLENDING_TOOLTIP_CONSUMED");
			}
			break;
		case 11:
			if (!func_108(Global_1146212.f_47689.f_63[func_107(-1685270562) /*2*/].f_1))
			{
				func_163("TRINKET_TONIC_HARDY", "pausemenu_player_update");
				func_165("CONSUMABLE_TONIC_HARDY_DESC");
				func_166("CONSUMABLE_TONIC_HARDY");
				func_102(0, 1);
				func_113("PMPLAYER_GENERAL_TONIC_HARDY_TOOLTIP_CONSUMED");
			}
			break;
		case 12:
			func_163("TRINKET_BEAVER_TOOTH", "pausemenu_player");
			func_165("PROVISION_TRINKET_BEAVER_TOOTH_DESC_NET");
			func_166("PROVISION_TRINKET_BEAVER_TOOTH_NET");
			func_102(0, 1);
			func_113("PMPLAYER_GENERAL_TRINKET_TOOLTIP");
			break;
		case 13:
			func_163("TRINKET_BUCK_ANTLER", "pausemenu_player");
			func_165("PROVISION_TRINKET_BUCK_ANTLER_DESC_NET");
			func_166("PROVISION_TRINKET_BUCK_ANTLER_NET");
			func_102(0, 1);
			func_113("PMPLAYER_GENERAL_TRINKET_TOOLTIP");
			break;
		case 14:
			func_163("TRINKET_JAVELINA_TUSK", "pausemenu_player_update");
			func_165("PROVISION_TRINKET_JAVELINA_TUSK_DESC");
			func_166("PROVISION_TRINKET_JAVELINA_TUSK");
			func_102(0, 1);
			func_113("PMPLAYER_GENERAL_TRINKET_TOOLTIP");
			break;
		case 15:
			func_163("TRINKET_RAM_HORN", "pausemenu_player");
			func_165("PROVISION_TRINKET_RAM_HORN_DESC_NET");
			func_166("PROVISION_TRINKET_RAM_HORN_NET");
			func_102(0, 1);
			func_113("PMPLAYER_GENERAL_TRINKET_TOOLTIP");
			break;
		case 16:
			func_163("TRINKET_SNOWY_EGRET", "pausemenu_player_update");
			func_165("PROVISION_TRINKET_SNOWY_EGRET_DESC");
			func_166("PROVISION_TRINKET_SNOWY_EGRET");
			func_102(0, 1);
			func_113("PMPLAYER_GENERAL_TRINKET_TOOLTIP");
			break;
	}
}

void func_97(int iParam0)
{
	char* sVar0;
	bool bVar1;
	bool bVar2;

	func_158(0);
	func_159(0);
	func_160(0);
	func_110(0);
	func_111(0);
	func_161(0);
	func_162(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_163(func_176(1, 0), 0);
			func_165(func_164(1));
			func_166("PMPLAYER_OVERVIEW");
			func_102(0, 1);
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1956200.f_5.f_14[1 /*102*/].f_30[0]);
			func_167(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1956200.f_5.f_14[1 /*102*/].f_30[1]);
			func_167(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_TIME"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1956200.f_5.f_14[1 /*102*/].f_30[2]);
			bVar1 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1956200.f_5.f_14[1 /*102*/].f_39[2]);
			bVar2 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1956200.f_5.f_14[1 /*102*/].f_75[2]);
			func_167(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar0, 1, 0, bVar1, 0, 0f, 0f, 0f, "RPG_Health");
			if (bVar1)
			{
				func_177(2, "RPG_ARROW_DOWN", 0);
			}
			else if (bVar2)
			{
				func_177(2, "RPG_ARROW_UP", 0);
			}
			func_158(1);
			func_113("");
			break;
		case 2:
			func_163(func_176(1, 0), 0);
			func_165("PMPLAYER_HEALTH_PROGRESSION_DESC");
			func_166("PMPLAYER_PROGRESSION");
			func_102(0, 1);
			func_178(0, "PMPLAYER_PROGRESSION_STAT_NEXT", "PMPLAYER_HEALTH_PROGRESSION_STAT_MAX", "toast_rpg_level_health");
			func_113("");
			break;
		case 4:
			func_163(func_168(), 0);
			func_165("PMPLAYER_CONDITION_WEIGHT_DESC");
			func_166("PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT");
			func_102(0, 1);
			func_169(1);
			func_113("PMPLAYER_CONDITION_WEIGHT_TOOLTIP");
			break;
		case 5:
			func_163(func_170(), func_171());
			func_165("PMPLAYER_CONDITION_TEMPERATURE_DESC");
			func_166("PMPLAYER_CONDITION_TEMPERATURE");
			func_102(0, 1);
			func_172();
			func_113("PMPLAYER_CONDITION_TEMPERATURE_TOOLTIP");
			break;
		case 6:
			func_163(func_173(), func_174());
			func_165("PMPLAYER_CONDITION_TOXICITY_DESC");
			func_166("PMPLAYER_CONDITION_TOXICITY");
			func_102(0, 1);
			func_175();
			func_113("PMPLAYER_CONDITION_TOXICITY_TOOLTIP_NET");
			break;
	}
}

void func_98(int iParam0)
{
	char* sVar0;
	bool bVar1;
	bool bVar2;

	func_158(0);
	func_159(0);
	func_160(0);
	func_110(0);
	func_111(0);
	func_161(0);
	func_162(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_163(func_176(2, 0), 0);
			func_165(func_164(2));
			func_166("PMPLAYER_OVERVIEW");
			func_102(0, 1);
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1956200.f_5.f_14[2 /*102*/].f_30[0]);
			func_167(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Stamina");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1956200.f_5.f_14[2 /*102*/].f_30[1]);
			func_167(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_TIME"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Stamina");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1956200.f_5.f_14[2 /*102*/].f_30[2]);
			bVar1 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1956200.f_5.f_14[2 /*102*/].f_39[2]);
			bVar2 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1956200.f_5.f_14[2 /*102*/].f_75[2]);
			func_167(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar0, 1, 0, bVar1, 0, 0f, 0f, 0f, "RPG_Stamina");
			if (bVar1)
			{
				func_177(2, "RPG_ARROW_DOWN", 0);
			}
			else if (bVar2)
			{
				func_177(2, "RPG_ARROW_UP", 0);
			}
			func_159(1);
			func_113("");
			break;
		case 2:
			func_163(func_176(2, 0), 0);
			func_165("PMPLAYER_STAMINA_PROGRESSION_DESC");
			func_166("PMPLAYER_PROGRESSION");
			func_102(0, 1);
			func_178(1, "PMPLAYER_PROGRESSION_STAT_NEXT", "PMPLAYER_STAMINA_PROGRESSION_STAT_MAX", "toast_rpg_level_stamina");
			func_113("");
			break;
		case 4:
			func_163(func_168(), 0);
			func_165("PMPLAYER_CONDITION_WEIGHT_DESC");
			func_166("PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT");
			func_102(0, 1);
			func_169(2);
			func_113("PMPLAYER_CONDITION_WEIGHT_TOOLTIP");
			break;
	}
}

void func_99(int iParam0)
{
	char* sVar0;
	bool bVar1;
	bool bVar2;

	func_158(0);
	func_159(0);
	func_160(0);
	func_110(0);
	func_111(0);
	func_161(0);
	func_162(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_163(func_176(3, 0), 0);
			func_165(func_164(3));
			func_166("PMPLAYER_OVERVIEW");
			func_102(0, 1);
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1956200.f_5.f_14[3 /*102*/].f_30[0]);
			func_167(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Dead_Eye");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1956200.f_5.f_14[3 /*102*/].f_30[1]);
			func_167(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_TIME"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Dead_Eye");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1956200.f_5.f_14[3 /*102*/].f_30[2]);
			bVar1 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1956200.f_5.f_14[3 /*102*/].f_39[2]);
			bVar2 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1956200.f_5.f_14[3 /*102*/].f_75[2]);
			func_167(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar0, 1, 0, bVar1, 0, 0f, 0f, 0f, "RPG_Dead_Eye");
			if (bVar1)
			{
				func_177(2, "RPG_ARROW_DOWN", 0);
			}
			else if (bVar2)
			{
				func_177(2, "RPG_ARROW_UP", 0);
			}
			func_160(1);
			func_113("");
			break;
		case 2:
			func_163(func_176(3, 0), 0);
			func_165("PMPLAYER_DEAD_EYE_PROGRESSION_DESC");
			func_166("PMPLAYER_PROGRESSION");
			func_102(0, 1);
			func_178(2, "PMPLAYER_PROGRESSION_STAT_NEXT", "PMPLAYER_DEAD_EYE_PROGRESSION_STAT_MAX", "toast_rpg_level_deadeye");
			func_113("");
			break;
		case 4:
			func_163(func_168(), 0);
			func_165("PMPLAYER_CONDITION_WEIGHT_DESC");
			func_166("PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT");
			func_102(0, 1);
			func_169(3);
			func_113("PMPLAYER_CONDITION_WEIGHT_TOOLTIP");
			break;
	}
}

void func_100(int iParam0)
{
	char* sVar0;

	func_158(0);
	func_159(0);
	func_160(0);
	func_110(0);
	func_111(0);
	func_161(0);
	func_162(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_163("MP_PLAYER_GENERAL_LIFE_STATS", 0);
			break;
		case 2:
		case 3:
		case 4:
		case 5:
			func_163("MP_PLAYER_GENERAL_FINANCES", 0);
			break;
		case 6:
		case 7:
			func_163("MP_PLAYER_GENERAL_COMBAT", 0);
			break;
		case 8:
		case 9:
			func_163("MP_PLAYER_GENERAL_TRAVEL", 0);
			break;
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
			func_163("MP_PLAYER_GENERAL_CRIME", 0);
			break;
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
			func_163("MP_PLAYER_GENERAL_HUNTING", 0);
			break;
		case 26:
		case 27:
		case 28:
			func_163("MP_PLAYER_GENERAL_CONTENT", 0);
			break;
	}
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1956200.f_5.f_525.f_24[iParam0 /*25*/].f_16);
	func_165(func_164(4));
	func_166(sVar0);
	func_102(0, 1);
}

void func_101(int iParam0)
{
	struct<4> Var0;
	int iVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
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
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;

	func_158(0);
	func_159(0);
	func_160(0);
	func_110(0);
	func_111(0);
	func_161(0);
	func_162(0, "", "");
	Var0 = { func_17(0, 1, 0, -1) };
	iVar4 = PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::PLAYER_ID());
	bVar5 = ENTITY::DOES_ENTITY_EXIST(iVar4);
	if (bVar5)
	{
		iVar6 = ENTITY::GET_ENTITY_MODEL(iVar4);
		iVar7 = func_19(iVar6);
	}
	else
	{
		iVar7 = func_179(&Var0, 0);
		iVar6 = func_180(iVar7);
	}
	if (bVar5)
	{
		iVar8 = func_181(iVar4) + 1;
		iVar9 = func_182(iVar4, 0);
		iVar10 = func_183(iVar4) + 1;
		iVar11 = func_182(iVar4, 1);
	}
	else
	{
		iVar8 = func_184(iVar6) + 1;
		iVar9 = func_185(Var0, 0);
		iVar10 = func_186(iVar6) + 1;
		iVar11 = func_185(Var0, 1);
	}
	bVar13 = true;
	switch (iParam0)
	{
		case 1:
			func_163(func_176(5, 0), "pausemenu_player");
			func_165(func_164(5));
			func_166("PMPLAYER_OVERVIEW");
			func_102(0, 1);
			Var21 = { func_17(0, 1, 0, -1) };
			func_187(&Var21, &iVar19, &iVar20);
			iVar19 = BUILTIN::FLOOR((IntToFloat(iVar19) * 0.01f));
			iVar20 = BUILTIN::FLOOR((IntToFloat(iVar20) * 0.01f));
			fVar25 = (IntToFloat(func_188(iVar6) + 1) * 10f);
			fVar26 = (fVar25 + (BUILTIN::TO_FLOAT(iVar19) * 10f));
			fVar27 = ((fVar25 + (2f * 10f)) * 0.01f);
			fVar28 = (IntToFloat(func_189(iVar6) + 1) * 10f);
			fVar29 = (fVar28 + (BUILTIN::TO_FLOAT(iVar20) * 10f));
			fVar30 = ((fVar28 + (2f * 10f)) * 0.01f);
			func_167(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_SPEED"), "", 0, 0, 0, 1, fVar25, fVar26, fVar27, 0);
			func_167(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_ACCELERATION"), "", 0, 0, 0, 1, fVar28, fVar29, fVar30, 0);
			func_167(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_HANDLING"), MISC::_CREATE_VAR_STRING(2, func_191(func_190(iVar6))), 0, 0, 0, 0, 0, 0, 0, 0);
			func_110(1);
			func_111(1);
			func_161(1);
			func_192(10, (IntToFloat(iVar8) / 10f), BUILTIN::ROUND(((IntToFloat(iVar9) / 100f) * 15f)));
			func_193(10, (IntToFloat(iVar10) / 10f), BUILTIN::ROUND(((IntToFloat(iVar11) / 100f) * 15f)));
			func_113("PMPLAYER_HORSE_OVERVIEW_TIP");
			break;
		case 2:
			func_163(func_176(5, 0), "pausemenu_player");
			func_165("PMPLAYER_HORSE_PHYSIQUE_DESC");
			func_166("PMPLAYER_HORSE_PHYSIQUE_TITLE");
			func_102(0, 1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar4))
			{
				iVar14 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar4, 13);
			}
			else if (func_194(&Var0, 0, &iVar12))
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
						iVar14 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iVar6, 13);
						break;
				}
			}
			else
			{
				iVar14 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iVar6, 13);
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
			if (func_195(Var0, joaat("SLOTID_HORSE_SEX"), 0, -1) == joaat("HORSE_EQUIPMENT_FEMALE_GENITALS"))
			{
				iVar31 = 2;
			}
			if (INVENTORY::_0xB881CA836CC4B6D4(&Var0))
			{
				func_167(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_TYPE"), MISC::_CREATE_VAR_STRING(2, func_197(func_196(iVar6), iVar7)), 0, 0, 0, 0, 0, 0, 0, 0);
				func_167(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_BREED"), MISC::_CREATE_VAR_STRING(2, func_89(iVar7)), 0, 0, 0, 0, 0, 0, 0, 0);
				func_167(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_GENDER"), MISC::_CREATE_VAR_STRING(2, func_198(iVar31)), 0, 0, 0, 0, 0, 0, 0, 0);
				func_167(3, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT"), MISC::_CREATE_VAR_STRING(2, &cVar15), 0, 0, 0, 0, 0, 0, 0, 0);
				func_167(4, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_COAT"), MISC::_CREATE_VAR_STRING(2, func_199(iVar7)), 0, 0, 0, 0, 0, 0, 0, 0);
			}
			else
			{
				func_167(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_TYPE"), "", 0, 0, 0, 0, 0, 0, 0, 0);
				func_167(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_BREED"), "", 0, 0, 0, 0, 0, 0, 0, 0);
				func_167(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_GENDER"), "", 0, 0, 0, 0, 0, 0, 0, 0);
				func_167(3, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT"), "", 0, 0, 0, 0, 0, 0, 0, 0);
				func_167(4, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_COAT"), "", 0, 0, 0, 0, 0, 0, 0, 0);
			}
			func_113("PMPLAYER_HORSE_PHYSIQUE_TIP");
			break;
		case 3:
			func_163("MP_PLAYER_HORSE_BONDING", 0);
			func_165("PMPLAYER_HORSE_BONDING_DESC");
			func_166("PMPLAYER_HORSE_BONDING_TITLE");
			func_102(0, 1);
			if (bVar5)
			{
				iVar32 = func_124(iVar4);
				iVar33 = func_123(iVar4);
			}
			else
			{
				iVar32 = func_126(&Var0, 0);
				iVar33 = func_125(&Var0, 0);
			}
			iVar34 = func_200(iVar6, iVar32);
			iVar35 = func_200(iVar6, iVar32 + 1);
			iVar36 = (iVar33 - iVar34);
			iVar37 = (iVar35 - iVar34);
			iVar38 = 1;
			if (iVar32 >= 4)
			{
				iVar38 = 0;
			}
			func_167(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_LEVEL"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", iVar32, 4), 0, 0, 0, 0, 0, 0, 0, 0);
			func_167(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_PROGRESSION_STAT_NEXT"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", iVar36, iVar37), 0, iVar38, 0, 0, 0, 0, 0, 0);
			func_113("PMPLAYER_HORSE_BONDING_TIP");
			func_161(1);
			break;
		case 4:
			func_163("MP_PLAYER_HORSE_HEALTH", 0);
			func_165("PMPLAYER_HORSE_HEALTH_DESC");
			func_166("PMPLAYER_HORSE_HEALTH_TITLE");
			func_102(0, 1);
			func_167(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_LEVEL"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", iVar8, 10), 0, 0, 0, 0, 0, 0, 0, 0);
			func_167(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", iVar9), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Health");
			func_201(2, &Var0, 0);
			func_113("PMPLAYER_HORSE_HEALTH_TIP");
			break;
		case 5:
			func_163("MP_PLAYER_HORSE_STAMINA", 0);
			func_165("PMPLAYER_HORSE_STAMINA_DESC");
			func_166("PMPLAYER_HORSE_STAMINA_TITLE");
			func_102(0, 1);
			func_167(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_LEVEL"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", iVar10, 10), 0, 0, 0, 0, 0, 0, 0, 0);
			func_167(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", iVar11), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
			func_201(2, &Var0, 1);
			func_113("PMPLAYER_HORSE_STAMINA_TIP");
			break;
		case 7:
			func_163("MP_PLAYER_HORSE_CLEANLINESS", 0);
			func_165("PMPLAYER_HORSE_CONDITION_CLEANLINESS_DESC");
			func_166("PMPLAYER_HORSE_CONDITION_CLEANLINESS");
			func_102(0, 1);
			if (func_128(Var0, 0) > 50)
			{
				func_167(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(MISC::ABSF((0.25f * 100f)))), 1, 0, 1, 0, 0, 0, 0, "RPG_Horse_Health");
				func_177(0, "RPG_ARROW_DOWN", 0);
			}
			func_113("PMPLAYER_HORSE_CONDITION_CLEANLINESS_TIP");
			break;
		case 10:
			func_163("MP_PLAYER_HORSE_SADDLE", 0);
			func_165("PMPLAYER_HORSE_TACK_SADDLE_DESC");
			func_166("PMPLAYER_HORSE_TACK_SADDLE_TITLE");
			func_102(0, 1);
			func_202();
			func_113("PMPLAYER_HORSE_TACK_SADDLE_TIP");
			break;
		case 8:
			func_163("MP_PLAYER_HORSE_TEMPERAMENT", 0);
			func_165("PMPLAYER_HORSE_CONDITION_MOOD_DESC");
			func_166("PMPLAYER_HORSE_CONDITION_MOOD");
			func_102(0, 1);
			func_113("PMPLAYER_HORSE_CONDITION_MOOD_TIP");
			break;
		case 11:
			func_163("MP_PLAYER_HORSE_STIRRUPS", 0);
			func_165("PMPLAYER_HORSE_TACK_STIRRUPS_DESC");
			func_166("PMPLAYER_HORSE_TACK_STIRRUPS_TITLE");
			func_102(0, 1);
			func_203();
			func_113("PMPLAYER_HORSE_TACK_STIRRUPS_TIP");
			break;
		case 12:
			func_163("TRINKET_SNOWY_EGRET", "pausemenu_player");
			func_165("PROVISION_TRINKET_SNOWY_EGRET_DESC");
			func_166("PROVISION_TRINKET_SNOWY_EGRET");
			func_102(0, 1);
			func_113("PMPLAYER_GENERAL_TRINKET_TOOLTIP");
			break;
	}
}

void func_102(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(Global_1956200.f_5.f_525.f_22);
	}
	if (bParam1)
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(Global_1956200.f_5.f_525.f_21);
	}
}

char* func_103(int iParam0)
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

void func_104(char* sParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956200.f_5.f_525, sParam0);
}

void func_105(int iParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956200.f_5.f_525.f_24[iParam0 /*25*/].f_16, sParam1);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1956200.f_5.f_525.f_22, iParam0, "player_group_item", Global_1956200.f_5.f_525.f_24[iParam0 /*25*/].f_15);
}

void func_106(int iParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5, char* sParam6, char* sParam7, char* sParam8, bool bParam9)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956200.f_5.f_525.f_24[iParam0 /*25*/].f_16, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956200.f_5.f_525.f_24[iParam0 /*25*/].f_17, sParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956200.f_5.f_525.f_24[iParam0 /*25*/].f_18, bParam3);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956200.f_5.f_525.f_24[iParam0 /*25*/].f_19, bParam4);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956200.f_5.f_525.f_24[iParam0 /*25*/].f_22, bParam5);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956200.f_5.f_525.f_24[iParam0 /*25*/].f_20, sParam6);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956200.f_5.f_525.f_24[iParam0 /*25*/].f_21, sParam7);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956200.f_5.f_525.f_24[iParam0 /*25*/].f_23, sParam8);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956200.f_5.f_525.f_24[iParam0 /*25*/].f_24, bParam9);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1956200.f_5.f_525.f_22, iParam0, "player_list_item", Global_1956200.f_5.f_525.f_24[iParam0 /*25*/].f_15);
}

int func_107(int iParam0)
{
	return (func_204(iParam0, 1) - 180);
}

bool func_108(int iParam0)
{
	return iParam0 < Global_1296859.f_21;
}

int func_109(int iParam0)
{
	int iVar0;

	iVar0 = func_107(iParam0);
	return (30 - ((Global_1296859.f_21 + 1800 - Global_1146212.f_47689.f_63[iVar0 /*2*/].f_1) / 60));
}

void func_110(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956200.f_5.f_525.f_9, bParam0);
}

void func_111(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956200.f_5.f_525.f_10, bParam0);
}

int func_112(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_92(1);
	}
	switch (iParam1)
	{
		case 0:
			return Global_1956200.f_1431.f_50[iParam0];
		case 1:
			return Global_1956200.f_1565.f_2.f_50[iParam0];
		default:
			break;
	}
	return 1;
}

void func_113(char* sParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956200.f_5.f_525.f_5, sParam0);
}

void func_114()
{
	struct<2> Var0;
	vector3 vVar2;
	char cVar9[16];
	int iVar11;

	Var0 = { func_44(joaat("DATE_CHARACTER_CREATED")) };
	STATS::STAT_ID_GET_DATE(&Var0, &vVar2);
	iVar11 = LOCALIZATION::_LOCALIZATION_GET_SYSTEM_DATE_FORMAT();
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
	func_106(1, "PMPLAYER_CREATED_DATE", &cVar9, 1, 0, 0, 0, 0, 0, 0);
}

float func_115(int iParam0)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_44(iParam0) };
	STATS::STAT_ID_GET_FLOAT(&Var1, &uVar0);
	return uVar0;
}

char* func_116(float fParam0, int iParam1)
{
	char* sVar0;

	sVar0 = MISC::_0x2B6846401D68E563(fParam0, iParam1);
	return func_205(sVar0, joaat("COLOR_PURE_WHITE"));
}

bool func_117(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_206(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_118(int iParam0)
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

int func_119(int iParam0)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_120(iParam0) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

struct<2> func_120(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_121(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

int func_122(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_207(iParam0, iParam1) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

int func_123(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_POINTS(iParam0, 7);
	return iVar0;
}

int func_124(int iParam0)
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

int func_125(var uParam0, int iParam1)
{
	if (!func_208(uParam0, iParam1, 1))
	{
	}
	return Global_1904087.f_23;
}

int func_126(var uParam0, int iParam1)
{
	int iVar0;

	if (!func_208(uParam0, iParam1, 1))
	{
	}
	if (!func_209(&Global_1904087))
	{
		return 0;
	}
	iVar0 = func_210(Global_1904087.f_11, Global_1904087.f_23);
	return iVar0;
}

int func_127(int iParam0, int iParam1)
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
	if (func_211(iParam1, &iVar0))
	{
		return ATTRIBUTE::GET_ATTRIBUTE_BASE_RANK(iParam0, iVar0);
	}
	return 0;
}

int func_128(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	int iVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (INVENTORY::_0x4C543D5DFCD2DAFD(&(Global_17411.f_55.f_61.f_41[iVar0 /*54*/]), &uParam0))
		{
			return Global_17411.f_55.f_61.f_41[iVar0 /*54*/].f_38[iParam4 /*4*/];
		}
		iVar0++;
	}
	if (!func_212(&uParam0))
	{
		return 0;
	}
	return 0;
}

float func_129(int iParam0)
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

bool func_130(int iParam0, int iParam1)
{
	struct<4> Var0;

	if (!func_213(856287005, iParam0))
	{
		return false;
	}
	Var0 = { func_214() };
	*iParam1 = func_195(Var0, iParam0, 0, -1);
	if (!func_215(*iParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_131(var uParam0, int iParam1, int iParam2, int iParam3)
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
			if (iParam2 != 0 && Var1.f_18[iVar0 /*2*/].f_1 != iParam2)
			{
				Jump @117; //curOff = 67
			}
			else if (iParam3 != 0 && Var1.f_18[iVar0 /*2*/] != iParam3)
			{
			}
			else
			{
				*iParam1 = { Var1.f_18[iVar0 /*2*/] };
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

char* func_132(int iParam0)
{
	int iVar0;

	if (!func_215(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_216(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

char[] func_133(char[4] cParam0)
{
	return cParam0;
}

void func_134(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	Global_1572887.f_405 = iParam0;
	if (iParam1 != 0)
	{
		func_217(iParam1);
	}
	if (iParam2 != 0)
	{
		func_217(iParam2);
	}
	if (iParam3 != 0)
	{
		func_217(iParam3);
	}
	if (iParam4 != 0)
	{
		func_217(iParam4);
	}
	if (iParam5 != 0)
	{
		func_217(iParam5);
	}
	if (iParam6 != 0)
	{
		func_217(iParam6);
	}
	if (iParam7 != 0)
	{
		func_217(iParam7);
	}
	if (iParam8 != 0)
	{
		func_217(iParam8);
	}
	if (iParam9 != 0)
	{
		func_217(iParam9);
	}
	if (iParam10 != 0)
	{
		func_217(iParam10);
	}
	func_218();
}

void func_135(var uParam0)
{
}

void func_136(var uParam0)
{
}

void func_137(var uParam0)
{
	func_50(uParam0, 1, 1);
}

void func_138(var uParam0)
{
}

void func_139(var uParam0)
{
	if (func_49(uParam0, 0))
	{
		func_50(uParam0, 1, 1);
	}
	if (func_49(uParam0, 1))
	{
		func_50(uParam0, 1, 0);
		func_220(uParam0, 1145633164, func_219());
		func_220(uParam0, -359624034, func_221());
	}
}

void func_140(var uParam0)
{
	func_222(uParam0);
}

int func_141(var uParam0)
{
	if (!func_223(uParam0))
	{
		return 0;
	}
	return 1;
}

int func_142(var uParam0)
{
	func_224(uParam0);
	return 1;
}

void func_143(var uParam0)
{
	func_225(uParam0);
}

void func_144(var uParam0)
{
}

struct<14> func_145(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

bool func_146(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_206(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_147(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_148(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	iVar0 = func_206(bParam2);
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

bool func_149(var uParam0, int iParam1)
{
	return func_226(*uParam0, iParam1);
}

int func_150(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!Global_1048577)
	{
		return 3;
	}
	iVar0 = Global_263042[iParam0 /*70*/].f_1.f_21.f_2;
	iVar1 = func_227(iVar0);
	iVar2 = func_228(iVar0, iVar1);
	return iVar2;
}

struct<2> func_151()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

int func_152(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265377.f_124517.f_135 & 8 != 0)
	{
		Global_1071686.f_28351 = 1;
		return 1;
	}
	if (func_5(Global_1051213) && !func_229(Global_1051213, Param0))
	{
		Global_1071686.f_28351 = 2;
		return 1;
	}
	if (iParam2 != 0 && func_230(iParam2))
	{
		return 1;
	}
	if (iParam3 != 0 && func_231(iParam3, 255))
	{
		Global_1071686.f_28351 = 4;
		return 1;
	}
	if (Global_263042[Global_1296859 /*70*/] > 2)
	{
		Global_1071686.f_28351 = 5;
		return 1;
	}
	if (Global_262155 >= 1)
	{
		Global_1071686.f_28351 = 6;
		return 1;
	}
	if (func_232())
	{
		Global_1071686.f_28351 = 7;
		return 1;
	}
	if (Global_1572887.f_7 & 1 != 0)
	{
		if (!func_5(Global_1051213))
		{
			Global_1071686.f_28351 = 8;
			return 1;
		}
	}
	if (Global_265377.f_124675 != 0 && SCRIPTS::_DOES_THREAD_EXIST(Global_265377.f_124675))
	{
		Global_1071686.f_28351 = 9;
		return 1;
	}
	Global_1071686.f_28351 = 0;
	return 0;
}

bool func_153(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 - iVar0 * 32);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_154(var uParam0, int iParam1, var uParam2)
{
	if (iParam1 == -1)
	{
		return 0;
	}
	func_233(uParam2);
	switch (iParam1)
	{
		case 0:
		case 1:
			if (!func_234(uParam0, uParam2))
			{
				return 0;
			}
			break;
		case 2:
			if (!func_235(uParam0, uParam2))
			{
				return 0;
			}
			break;
	}
	return 1;
}

char* func_155(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BREED_AMERICANPAINT_OVERO"):
			return "BREED_AMERICANPAINT_OVERO";
		case joaat("BREED_AMERICANPAINT_TOBIANO"):
			return "BREED_AMERICANPAINT_TOBIANO";
		case joaat("BREED_AMERICANPAINT_SPLASHEDWHITE"):
			return "BREED_AMERICANPAINT_SPLASHEDWHITE";
		case joaat("BREED_AMERICANPAINT_GREYOVERO"):
			return "BREED_AMERICANPAINT_GREYOVERO";
		case joaat("BREED_AMERICANSTANDARDBRED_BLACK"):
			return "BREED_AMERICANSTANDARDBRED_BLACK";
		case joaat("BREED_AMERICANSTANDARDBRED_BUCKSKIN"):
			return "BREED_AMERICANSTANDARDBRED_BUCKSKIN";
		case joaat("BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return "BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE";
		case joaat("BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return "BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN";
		case joaat("BREED_ANDALUSIAN_DARKBAY"):
			return "BREED_ANDALUSIAN_DARKBAY";
		case joaat("BREED_ANDALUSIAN_PERLINO"):
			return "BREED_ANDALUSIAN_PERLINO";
		case joaat("BREED_ANDALUSIAN_ROSEGRAY"):
			return "BREED_ANDALUSIAN_ROSEGRAY";
		case joaat("BREED_APPALOOSA_BLANKET"):
			return "BREED_APPALOOSA_BLANKET";
		case joaat("BREED_APPALOOSA_LEOPARDBLANKET"):
			return "BREED_APPALOOSA_LEOPARDBLANKET";
		case joaat("BREED_APPALOOSA_BROWNLEOPARD"):
			return "BREED_APPALOOSA_BROWNLEOPARD";
		case joaat("BREED_APPALOOSA_LEOPARD"):
			return "BREED_APPALOOSA_LEOPARD";
		case joaat("BREED_ARABIAN_BLACK"):
			return "BREED_ARABIAN_BLACK";
		case joaat("BREED_ARABIAN_ROSEGREYBAY"):
			return "BREED_ARABIAN_ROSEGREYBAY";
		case joaat("BREED_ARABIAN_WHITE"):
			return "BREED_ARABIAN_WHITE";
		case joaat("BREED_ARDENNES_BAYROAN"):
			return "BREED_ARDENNES_BAYROAN";
		case joaat("BREED_ARDENNES_STRAWBERRYROAN"):
			return "BREED_ARDENNES_STRAWBERRYROAN";
		case joaat("BREED_ARDENNES_IRONGREYROAN"):
			return "BREED_ARDENNES_IRONGREYROAN";
		case joaat("BREED_BELGIAN_BLONDCHESTNUT"):
			return "BREED_BELGIAN_BLONDCHESTNUT";
		case joaat("BREED_BELGIAN_MEALYCHESTNUT"):
			return "BREED_BELGIAN_MEALYCHESTNUT";
		case joaat("BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
			return "BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN";
		case joaat("BREED_DUTCHWARMBLOOD_SEALBROWN"):
			return "BREED_DUTCHWARMBLOOD_SEALBROWN";
		case joaat("BREED_DUTCHWARMBLOOD_CHOCOLATEROAN"):
			return "BREED_DUTCHWARMBLOOD_CHOCOLATEROAN";
		case joaat("BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
			return "BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT";
		case joaat("BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return "BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO";
		case joaat("BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
			return "BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY";
		case joaat("BREED_KENTUCKYSADDLE_BLACK"):
			return "BREED_KENTUCKYSADDLE_BLACK1";
		case joaat("BREED_KENTUCKYSADDLE_CHESTNUTPINTO"):
			return "BREED_KENTUCKYSADDLE_CHESTNUTPINTO";
		case joaat("BREED_KENTUCKYSADDLE_GREY"):
			return "BREED_KENTUCKYSADDLE_GREY";
		case joaat("BREED_KENTUCKYSADDLE_SILVERBAY"):
			return "BREED_KENTUCKYSADDLE_SILVERBAY";
		case joaat("BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
			return "BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE";
		case joaat("BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return "BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO";
		case joaat("BREED_MORGAN_BAY"):
			return "BREED_MORGAN_BAY";
		case joaat("BREED_MORGAN_BAYROAN"):
			return "BREED_MORGAN_BAYROAN";
		case joaat("BREED_MORGAN_FLAXENCHESTNUT"):
			return "BREED_MORGAN_FLAXENCHESTNUT";
		case joaat("BREED_MORGAN_PALOMINO"):
			return "BREED_MORGAN_PALOMINO";
		case joaat("BREED_MUSTANG_GRULLODUN"):
			return "BREED_MUSTANG_GRULLODUN";
		case joaat("BREED_MUSTANG_WILDBAY"):
			return "BREED_MUSTANG_WILDBAY";
		case joaat("BREED_MUSTANG_TIGERSTRIPEDBAY"):
			return "BREED_MUSTANG_TIGERSTRIPEDBAY";
		case joaat("BREED_NOKOTA_BLUEROAN"):
			return "BREED_NOKOTA_BLUEROAN";
		case joaat("BREED_NOKOTA_WHITEROAN"):
			return "BREED_NOKOTA_WHITEROAN";
		case joaat("BREED_NOKOTA_REVERSEDAPPLEROAN"):
			return "BREED_NOKOTA_REVERSEDAPPLEROAN";
		case joaat("BREED_SHIRE_DARKBAY"):
			return "BREED_SHIRE_DARKBAY";
		case joaat("BREED_SHIRE_LIGHTGREY"):
			return "BREED_SHIRE_LIGHTGREY";
		case joaat("BREED_SUFFOLKPUNCH_SORREL"):
			return "BREED_SUFFOLKPUNCH_SORREL";
		case joaat("BREED_SUFFOLKPUNCH_REDCHESTNUT"):
			return "BREED_SUFFOLKPUNCH_REDCHESTNUT";
		case joaat("BREED_TENNESSEEWALKER_BLACKRABICANO"):
			return "BREED_TENNESSEEWALKER_BLACKRABICANO";
		case joaat("BREED_TENNESSEEWALKER_CHESTNUT"):
			return "BREED_TENNESSEEWALKER_CHESTNUT";
		case joaat("BREED_TENNESSEEWALKER_DAPPLEBAY"):
			return "BREED_TENNESSEEWALKER_DAPPLEBAY";
		case joaat("BREED_TENNESSEEWALKER_REDROAN"):
			return "BREED_TENNESSEEWALKER_REDROAN";
		case joaat("BREED_TENNESSEEWALKER_FLAXENROAN"):
			return "BREED_TENNESSEEWALKER_FLAXENROAN";
		case joaat("BREED_THOROUGHBRED_BLOODBAY"):
			return "BREED_THOROUGHBRED_BLOODBAY";
		case joaat("BREED_THOROUGHBRED_DAPPLEGREY"):
			return "BREED_THOROUGHBRED_DAPPLEGREY";
		case joaat("BREED_THOROUGHBRED_BRINDLE"):
			return "BREED_THOROUGHBRED_BRINDLE";
		case joaat("BREED_THOROUGHBRED_BLACKCHESTNUT"):
			return "BREED_THOROUGHBRED_BLACKCHESTNUT";
		case joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return "BREED_THOROUGHBRED_REVERSEDAPPLEBLACK";
		case joaat("BREED_TURKOMAN_DARKBAY"):
			return "BREED_TURKOMAN_DARKBAY";
		case joaat("BREED_TURKOMAN_GOLD"):
			return "BREED_TURKOMAN_GOLD";
		case joaat("BREED_TURKOMAN_SILVER"):
			return "BREED_TURKOMAN_SILVER";
		case joaat("BREED_BRETON_REDROAN"):
			return "BREED_BRETON_REDROAN";
		case joaat("BREED_BRETON_SORREL"):
			return "BREED_BRETON_SORREL";
		case joaat("BREED_BRETON_GRULLODUN"):
			return "BREED_BRETON_GRULLODUN";
		case joaat("BREED_BRETON_SEALBROWN"):
			return "BREED_BRETON_SEALBROWN";
		case joaat("BREED_BRETON_MEALYDAPPLEBAY"):
			return "BREED_BRETON_MEALYDAPPLEBAY";
		case joaat("BREED_BRETON_STEELGREY"):
			return "BREED_BRETON_STEELGREY";
		case joaat("BREED_CRIOLLO_BLUEROANOVERO"):
			return "BREED_CRIOLLO_BLUEROANOVERO";
		case joaat("BREED_CRIOLLO_DUN"):
			return "BREED_CRIOLLO_DUN";
		case joaat("BREED_CRIOLLO_BAYBRINDLE"):
			return "BREED_CRIOLLO_BAYBRINDLE";
		case joaat("BREED_CRIOLLO_SORRELOVERO"):
			return "BREED_CRIOLLO_SORRELOVERO";
		case joaat("BREED_CRIOLLO_BAYFRAMEOVERO"):
			return "BREED_CRIOLLO_BAYFRAMEOVERO";
		case joaat("BREED_CRIOLLO_MARBLESABINO"):
			return "BREED_CRIOLLO_MARBLESABINO";
		case joaat("BREED_GYPSYCOB_PIEBALD"):
			return "BREED_GYPSYCOB_PIEBALD";
		case joaat("BREED_GYPSYCOB_WHITEBLAGDON"):
			return "BREED_GYPSYCOB_WHITEBLAGDON";
		case joaat("BREED_GYPSYCOB_PALOMINOBLAGDON"):
			return "BREED_GYPSYCOB_PALOMINOBLAGDON";
		case joaat("BREED_GYPSYCOB_SKEWBALD"):
			return "BREED_GYPSYCOB_SKEWBALD";
		case joaat("BREED_GYPSYCOB_SPLASHEDBAY"):
			return "BREED_GYPSYCOB_SPLASHEDBAY";
		case joaat("BREED_GYPSYCOB_SPLASHEDPIEBALD"):
			return "BREED_GYPSYCOB_SPLASHEDPIEBALD";
		case joaat("BREED_KLADRUBER_BLACK"):
			return "BREED_KLADRUBER_BLACK";
		case joaat("BREED_KLADRUBER_WHITE"):
			return "BREED_KLADRUBER_WHITE";
		case joaat("BREED_KLADRUBER_CREMELLO"):
			return "BREED_KLADRUBER_CREMELLO";
		case joaat("BREED_KLADRUBER_GREY"):
			return "BREED_KLADRUBER_GREY";
		case joaat("BREED_KLADRUBER_DAPPLEROSEGREY"):
			return "BREED_KLADRUBER_DAPPLEROSEGREY";
		case joaat("BREED_KLADRUBER_SILVER"):
			return "BREED_KLADRUBER_SILVER";
		case joaat("BREED_NORFOLKROADSTER_BLACK"):
			return "BREED_NORFOLKROADSTER_BLACK";
		case joaat("BREED_NORFOLKROADSTER_SPECKLEDGREY"):
			return "BREED_NORFOLKROADSTER_SPECKLEDGREY";
		case joaat("BREED_NORFOLKROADSTER_PIEBALDROAN"):
			return "BREED_NORFOLKROADSTER_PIEBALDROAN";
		case joaat("BREED_NORFOLKROADSTER_ROSEGREY"):
			return "BREED_NORFOLKROADSTER_ROSEGREY";
		case joaat("BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN"):
			return "BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN";
		case joaat("BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR"):
			return "BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR";
		case joaat("BREED_DONKEY"):
			return "BREED_DONKEY";
		case joaat("BREED_MULE"):
			return "BREED_MULE";
		case joaat("BREED_MULE_PAINTED"):
			return "BREED_MULE_PAINTED";
		case joaat("BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN"):
			return "BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN";
		case joaat("BREED_APPALOOSA_BLACKSNOWFLAKE"):
			return "BREED_APPALOOSA_BLACKSNOWFLAKE";
		case joaat("BREED_ARABIAN_GREY"):
			return "BREED_ARABIAN_GREY";
		case joaat("BREED_ARABIAN_REDCHESTNUT"):
			return "BREED_ARABIAN_REDCHESTNUT";
		case joaat("BREED_HUNGARIANHALFBRED_LIVERCHESTNUT"):
			return "BREED_HUNGARIANHALFBRED_LIVERCHESTNUT";
		case joaat("BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
			return "BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE";
		case joaat("BREED_MUSTANG_GOLDENDUN"):
			return "BREED_MUSTANG_GOLDENDUN";
		case joaat("BREED_TENNESSEEWALKER_MAHOGANYBAY"):
			return "BREED_TENNESSEEWALKER_MAHOGANYBAY";
		case joaat("BREED_SHIRE_RAVENBLACK"):
			return "BREED_SHIRE_RAVENBLACK";
		case joaat("BREED_BUELL_WARVETS"):
			return "BREED_BUELL_WARVETS";
		case joaat("BREED_JOHN_ENDLESSSUMMER"):
			return "BREED_JOHN_ENDLESSSUMMER";
		case joaat("BREED_MURFREEBROOD_MANGE_01"):
			return "BREED_MURFREEBROOD_MANGE_01";
		case joaat("BREED_MURFREEBROOD_MANGE_02"):
			return "BREED_MURFREEBROOD_MANGE_02";
		case joaat("BREED_MURFREEBROOD_MANGE_03"):
			return "BREED_MURFREEBROOD_MANGE_03";
		case joaat("BREED_WINTER02_01"):
			return "BREED_WINTER02_01";
		case joaat("BREED_EAGLEFLIES"):
			return "BREED_EAGLEFLIES";
		case joaat("BREED_GANG_BILL"):
			return "BREED_GANG_BILL";
		case joaat("BREED_GANG_CHARLES"):
			return "BREED_GANG_CHARLES";
		case joaat("BREED_GANG_CHARLES_ENDLESSSUMMER"):
			return "BREED_GANG_CHARLES_ENDLESSSUMMER";
		case joaat("BREED_GANG_DUTCH"):
			return "BREED_GANG_DUTCH";
		case joaat("BREED_GANG_HOSEA"):
			return "BREED_GANG_HOSEA";
		case joaat("BREED_GANG_JAVIER"):
			return "BREED_GANG_JAVIER";
		case joaat("BREED_GANG_JOHN"):
			return "BREED_GANG_JOHN";
		case joaat("BREED_GANG_KAREN"):
			return "BREED_GANG_KAREN";
		case joaat("BREED_GANG_KIERAN"):
			return "BREED_GANG_KIERAN";
		case joaat("BREED_GANG_LENNY"):
			return "BREED_GANG_LENNY";
		case joaat("BREED_GANG_MICAH"):
			return "BREED_GANG_MICAH";
		case joaat("BREED_GANG_SADIE"):
			return "BREED_GANG_SADIE";
		case joaat("BREED_GANG_SADIE_ENDLESSSUMMER"):
			return "BREED_GANG_SADIE_ENDLESSSUMMER";
		case joaat("BREED_GANG_SEAN"):
			return "BREED_GANG_SEAN";
		case joaat("BREED_GANG_TRELAWNEY"):
			return "BREED_GANG_TRELAWNEY";
		case joaat("BREED_GANG_UNCLE"):
			return "BREED_GANG_UNCLE";
		case joaat("BREED_GANG_UNCLE_ENDLESSSUMMER"):
			return "BREED_GANG_UNCLE_ENDLESSSUMMER";
		case joaat("BREED_MANGY_BACKUP"):
			return "BREED_MANGY_BACKUP";
		default:
			break;
	}
	return "";
}

bool func_156(int iParam0)
{
	return func_236(&(Global_1956200.f_1565), iParam0, 1);
}

int func_157(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

void func_158(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956200.f_5.f_525.f_6, bParam0);
}

void func_159(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956200.f_5.f_525.f_7, bParam0);
}

void func_160(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956200.f_5.f_525.f_8, bParam0);
}

void func_161(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956200.f_5.f_525.f_11, bParam0);
}

void func_162(bool bParam0, char* sParam1, char* sParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956200.f_5.f_525.f_18, bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956200.f_5.f_525.f_19, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956200.f_5.f_525.f_20, sParam2);
}

void func_163(char* sParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = func_237(0);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956200.f_5.f_525.f_3, sParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956200.f_5.f_525.f_4, sParam1);
}

char* func_164(int iParam0)
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

void func_165(char* sParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956200.f_5.f_525.f_2, sParam0);
}

void func_166(char* sParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956200.f_5.f_525.f_1, sParam0);
}

void func_167(int iParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, char* sParam10)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956200.f_5.f_525.f_24[iParam0 /*25*/].f_4, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956200.f_5.f_525.f_24[iParam0 /*25*/].f_5, sParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956200.f_5.f_525.f_24[iParam0 /*25*/].f_1, bParam3);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956200.f_5.f_525.f_24[iParam0 /*25*/].f_2, sParam10);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956200.f_5.f_525.f_24[iParam0 /*25*/].f_6, bParam4);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956200.f_5.f_525.f_24[iParam0 /*25*/].f_7, bParam5);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956200.f_5.f_525.f_24[iParam0 /*25*/].f_11, bParam6);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(Global_1956200.f_5.f_525.f_24[iParam0 /*25*/].f_8, iParam7);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(Global_1956200.f_5.f_525.f_24[iParam0 /*25*/].f_9, iParam8);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(Global_1956200.f_5.f_525.f_24[iParam0 /*25*/].f_10, iParam9);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956200.f_5.f_525.f_24[iParam0 /*25*/].f_12, false);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1956200.f_5.f_525.f_21, iParam0, "player_attribute_item", Global_1956200.f_5.f_525.f_24[iParam0 /*25*/]);
}

char* func_168()
{
	return "MP_PLAYER_WEIGHT";
}

void func_169(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;

	switch (iParam0)
	{
		case 0:
			fVar0 = (Global_1146212.f_2169[93 /*205*/].f_201 * Global_1146212.f_2169[93 /*205*/].f_202);
			fVar1 = (Global_1146212.f_2169[94 /*205*/].f_201 * Global_1146212.f_2169[94 /*205*/].f_202);
			if (fVar0 == 0f)
			{
				func_167(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_STAMINA_DRAIN"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 0), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Stamina");
				func_167(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_DAMAGE_ABSORPTION"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 0), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
			}
			else if (fVar0 > 0f)
			{
				func_167(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_STAMINA_DRAIN"), MISC::_CREATE_VAR_STRING(6, "PMPLAYER_CORE_PC_PLUS_VALUE", (fVar0 * 100f)), 1, 0, 1, 0, 0f, 0f, 0f, "RPG_Stamina");
				func_177(0, "RPG_ARROW_DOWN", 0);
				func_167(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_DAMAGE_ABSORPTION"), MISC::_CREATE_VAR_STRING(6, "PMPLAYER_CORE_PC_VALUE", (fVar1 * 100f)), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
				func_177(1, "RPG_ARROW_UP", 0);
			}
			else
			{
				func_167(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_STAMINA_DRAIN"), MISC::_CREATE_VAR_STRING(6, "PMPLAYER_CORE_PC_VALUE", (fVar0 * 100f)), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Stamina");
				func_177(0, "RPG_ARROW_UP", 0);
				func_167(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_DAMAGE_ABSORPTION"), MISC::_CREATE_VAR_STRING(6, "PMPLAYER_CORE_PC_PLUS_VALUE", (fVar1 * 100f)), 1, 0, 1, 0, 0f, 0f, 0f, "RPG_Health");
				func_177(1, "RPG_ARROW_DOWN", 0);
			}
			break;
		case 1:
		case 2:
		case 3:
			if (Global_1956200.f_1431.f_103 == 0)
			{
				fVar2 = 0.15f;
			}
			else if (Global_1956200.f_1431.f_103 == 10 || Global_1956200.f_1431.f_103 == -10)
			{
				fVar2 = -0.25f;
			}
			else
			{
				fVar2 = 0f;
			}
			if (fVar2 < 0f)
			{
				func_167(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", MISC::ABSI(BUILTIN::ROUND((100f * fVar2)))), 1, 0, 1, 0, 0f, 0f, 0f, func_238(iParam0));
				func_177(0, "RPG_ARROW_DOWN", 0);
			}
			else if (fVar2 == 0f)
			{
				func_167(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", MISC::ABSI(BUILTIN::ROUND((100f * fVar2)))), 1, 0, 0, 0, 0f, 0f, 0f, func_238(iParam0));
			}
			else
			{
				func_167(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", MISC::ABSI(BUILTIN::ROUND((100f * fVar2)))), 1, 0, 0, 0, 0f, 0f, 0f, func_238(iParam0));
				func_177(0, "RPG_ARROW_UP", 0);
			}
			break;
	}
}

char* func_170()
{
	return "MP_PLAYER_TEMPERATURE";
}

char* func_171()
{
	return "pm_player_mp";
}

void func_172()
{
	if (func_27() || func_28())
	{
		func_167(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 900), 1, 0, 1, 0, 0f, 0f, 0f, "RPG_Health");
		func_177(0, "RPG_ARROW_DOWN", 0);
	}
	else
	{
		func_167(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 0), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
	}
}

char* func_173()
{
	return "MP_PLAYER_TOXICITY";
}

char* func_174()
{
	return "pm_player_mp";
}

void func_175()
{
	if (func_42())
	{
		func_167(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 900), 1, 0, 1, 0, 0f, 0f, 0f, "RPG_Health");
		func_177(0, "RPG_ARROW_DOWN", 0);
	}
	else
	{
		func_167(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 0), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
	}
}

char* func_176(int iParam0, int iParam1)
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

void func_177(int iParam0, char* sParam1, char* sParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956200.f_5.f_525.f_24[iParam0 /*25*/].f_13, sParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956200.f_5.f_525.f_24[iParam0 /*25*/].f_14, sParam2);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956200.f_5.f_525.f_24[iParam0 /*25*/].f_14, "pausemenu_player_update");
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956200.f_5.f_525.f_24[iParam0 /*25*/].f_12, true);
}

void func_178(int iParam0, char* sParam1, char* sParam2, char* sParam3)
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char* sVar6;

	fVar0 = func_239(iParam0, 2);
	iVar1 = func_240(fVar0);
	fVar2 = BUILTIN::TO_FLOAT(func_241(iVar1 + 1));
	iVar3 = iVar1 + 5;
	iVar4 = 5 + 5;
	if (iVar3 < iVar4)
	{
		func_167(iVar5, MISC::_CREATE_VAR_STRING(2, sParam1), MISC::_CREATE_VAR_STRING(18, "PMPLAYER_VALUE_X_OF_Y", BUILTIN::FLOOR(fVar0), fVar2), 0, 0, 0, 0, 0, 0, 0, 0);
		iVar5++;
	}
	func_167(iVar5, MISC::_CREATE_VAR_STRING(2, sParam2), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", iVar3, iVar4), 0, 0, 0, 0, 0, 0, 0, 0);
	sVar6 = func_243(func_242(iVar3, 0));
	func_162(1, sVar6, sParam3);
}

int func_179(var uParam0, int iParam1)
{
	func_208(uParam0, iParam1, 0);
	return Global_1904087.f_22;
}

int func_180(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BREED_AMERICANPAINT_OVERO"):
			return joaat("A_C_HORSE_AMERICANPAINT_OVERO");
		case joaat("BREED_AMERICANPAINT_TOBIANO"):
			return joaat("A_C_HORSE_AMERICANPAINT_TOBIANO");
		case joaat("BREED_AMERICANPAINT_SPLASHEDWHITE"):
			return joaat("A_C_HORSE_AMERICANPAINT_SPLASHEDWHITE");
		case joaat("BREED_AMERICANPAINT_GREYOVERO"):
			return joaat("A_C_HORSE_AMERICANPAINT_GREYOVERO");
		case joaat("BREED_AMERICANSTANDARDBRED_BLACK"):
			return joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK");
		case joaat("BREED_AMERICANSTANDARDBRED_BUCKSKIN"):
			return joaat("A_C_HORSE_AMERICANSTANDARDBRED_BUCKSKIN");
		case joaat("BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return joaat("A_C_HORSE_AMERICANSTANDARDBRED_PALOMINODAPPLE");
		case joaat("BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return joaat("A_C_HORSE_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN");
		case joaat("BREED_ANDALUSIAN_DARKBAY"):
			return joaat("A_C_HORSE_ANDALUSIAN_DARKBAY");
		case joaat("BREED_ANDALUSIAN_ROSEGRAY"):
			return joaat("A_C_HORSE_ANDALUSIAN_ROSEGRAY");
		case joaat("BREED_ANDALUSIAN_PERLINO"):
			return joaat("A_C_HORSE_ANDALUSIAN_PERLINO");
		case joaat("BREED_APPALOOSA_BLANKET"):
			return joaat("A_C_HORSE_APPALOOSA_BLANKET");
		case joaat("BREED_APPALOOSA_LEOPARDBLANKET"):
			return joaat("A_C_HORSE_APPALOOSA_LEOPARDBLANKET");
		case joaat("BREED_APPALOOSA_BROWNLEOPARD"):
			return joaat("A_C_HORSE_APPALOOSA_BROWNLEOPARD");
		case joaat("BREED_APPALOOSA_LEOPARD"):
			return joaat("A_C_HORSE_APPALOOSA_LEOPARD");
		case joaat("BREED_ARABIAN_BLACK"):
			return joaat("A_C_HORSE_ARABIAN_BLACK");
		case joaat("BREED_ARABIAN_ROSEGREYBAY"):
			return joaat("A_C_HORSE_ARABIAN_ROSEGREYBAY");
		case joaat("BREED_ARABIAN_WHITE"):
			return joaat("A_C_HORSE_ARABIAN_WHITE");
		case joaat("BREED_ARDENNES_BAYROAN"):
			return joaat("A_C_HORSE_ARDENNES_BAYROAN");
		case joaat("BREED_ARDENNES_STRAWBERRYROAN"):
			return joaat("A_C_HORSE_ARDENNES_STRAWBERRYROAN");
		case joaat("BREED_ARDENNES_IRONGREYROAN"):
			return joaat("A_C_HORSE_ARDENNES_IRONGREYROAN");
		case joaat("BREED_BELGIAN_BLONDCHESTNUT"):
			return joaat("A_C_HORSE_BELGIAN_BLONDCHESTNUT");
		case joaat("BREED_BELGIAN_MEALYCHESTNUT"):
			return joaat("A_C_HORSE_BELGIAN_MEALYCHESTNUT");
		case joaat("BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
			return joaat("A_C_HORSE_DUTCHWARMBLOOD_SOOTYBUCKSKIN");
		case joaat("BREED_DUTCHWARMBLOOD_SEALBROWN"):
			return joaat("A_C_HORSE_DUTCHWARMBLOOD_SEALBROWN");
		case joaat("BREED_DUTCHWARMBLOOD_CHOCOLATEROAN"):
			return joaat("A_C_HORSE_DUTCHWARMBLOOD_CHOCOLATEROAN");
		case joaat("BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
			return joaat("A_C_HORSE_HUNGARIANHALFBRED_FLAXENCHESTNUT");
		case joaat("BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return joaat("A_C_HORSE_HUNGARIANHALFBRED_PIEBALDTOBIANO");
		case joaat("BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
			return joaat("A_C_HORSE_HUNGARIANHALFBRED_DARKDAPPLEGREY");
		case joaat("BREED_KENTUCKYSADDLE_BLACK"):
			return joaat("A_C_HORSE_KENTUCKYSADDLE_BLACK");
		case joaat("BREED_KENTUCKYSADDLE_CHESTNUTPINTO"):
			return joaat("A_C_HORSE_KENTUCKYSADDLE_CHESTNUTPINTO");
		case joaat("BREED_KENTUCKYSADDLE_GREY"):
			return joaat("A_C_HORSE_KENTUCKYSADDLE_GREY");
		case joaat("BREED_KENTUCKYSADDLE_SILVERBAY"):
			return joaat("A_C_HORSE_KENTUCKYSADDLE_SILVERBAY");
		case joaat("BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
			return joaat("A_C_HORSE_MISSOURIFOXTROTTER_AMBERCHAMPAGNE");
		case joaat("BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return joaat("A_C_HORSE_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO");
		case joaat("BREED_MORGAN_BAY"):
			return joaat("A_C_HORSE_MORGAN_BAY");
		case joaat("BREED_MORGAN_BAYROAN"):
			return joaat("A_C_HORSE_MORGAN_BAYROAN");
		case joaat("BREED_MORGAN_FLAXENCHESTNUT"):
			return joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
		case joaat("BREED_MORGAN_PALOMINO"):
			return joaat("A_C_HORSE_MORGAN_PALOMINO");
		case joaat("BREED_MUSTANG_GRULLODUN"):
			return joaat("A_C_HORSE_MUSTANG_GRULLODUN");
		case joaat("BREED_MUSTANG_WILDBAY"):
			return joaat("A_C_HORSE_MUSTANG_WILDBAY");
		case joaat("BREED_MUSTANG_TIGERSTRIPEDBAY"):
			return joaat("A_C_HORSE_MUSTANG_TIGERSTRIPEDBAY");
		case joaat("BREED_NOKOTA_BLUEROAN"):
			return joaat("A_C_HORSE_NOKOTA_BLUEROAN");
		case joaat("BREED_NOKOTA_WHITEROAN"):
			return joaat("A_C_HORSE_NOKOTA_WHITEROAN");
		case joaat("BREED_NOKOTA_REVERSEDAPPLEROAN"):
			return joaat("A_C_HORSE_NOKOTA_REVERSEDAPPLEROAN");
		case joaat("BREED_SHIRE_DARKBAY"):
			return joaat("A_C_HORSE_SHIRE_DARKBAY");
		case joaat("BREED_SHIRE_LIGHTGREY"):
			return joaat("A_C_HORSE_SHIRE_LIGHTGREY");
		case joaat("BREED_SUFFOLKPUNCH_SORREL"):
			return joaat("A_C_HORSE_SUFFOLKPUNCH_SORREL");
		case joaat("BREED_SUFFOLKPUNCH_REDCHESTNUT"):
			return joaat("A_C_HORSE_SUFFOLKPUNCH_REDCHESTNUT");
		case joaat("BREED_TENNESSEEWALKER_BLACKRABICANO"):
			return joaat("A_C_HORSE_TENNESSEEWALKER_BLACKRABICANO");
		case joaat("BREED_TENNESSEEWALKER_CHESTNUT"):
			return joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
		case joaat("BREED_TENNESSEEWALKER_DAPPLEBAY"):
			return joaat("A_C_HORSE_TENNESSEEWALKER_DAPPLEBAY");
		case joaat("BREED_TENNESSEEWALKER_REDROAN"):
			return joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN");
		case joaat("BREED_TENNESSEEWALKER_FLAXENROAN"):
			return joaat("A_C_HORSE_TENNESSEEWALKER_FLAXENROAN");
		case joaat("BREED_THOROUGHBRED_BLOODBAY"):
			return joaat("A_C_HORSE_THOROUGHBRED_BLOODBAY");
		case joaat("BREED_THOROUGHBRED_DAPPLEGREY"):
			return joaat("A_C_HORSE_THOROUGHBRED_DAPPLEGREY");
		case joaat("BREED_THOROUGHBRED_BRINDLE"):
			return joaat("A_C_HORSE_THOROUGHBRED_BRINDLE");
		case joaat("BREED_THOROUGHBRED_BLACKCHESTNUT"):
			return joaat("A_C_HORSE_THOROUGHBRED_BLACKCHESTNUT");
		case joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return joaat("A_C_HORSE_THOROUGHBRED_REVERSEDAPPLEBLACK");
		case joaat("BREED_TURKOMAN_DARKBAY"):
			return joaat("A_C_HORSE_TURKOMAN_DARKBAY");
		case joaat("BREED_TURKOMAN_GOLD"):
			return joaat("A_C_HORSE_TURKOMAN_GOLD");
		case joaat("BREED_TURKOMAN_SILVER"):
			return joaat("A_C_HORSE_TURKOMAN_SILVER");
		case joaat("BREED_BRETON_REDROAN"):
			return joaat("A_C_HORSE_BRETON_REDROAN");
		case joaat("BREED_BRETON_SORREL"):
			return joaat("A_C_HORSE_BRETON_SORREL");
		case joaat("BREED_BRETON_GRULLODUN"):
			return joaat("A_C_HORSE_BRETON_GRULLODUN");
		case joaat("BREED_BRETON_SEALBROWN"):
			return joaat("A_C_HORSE_BRETON_SEALBROWN");
		case joaat("BREED_BRETON_MEALYDAPPLEBAY"):
			return joaat("A_C_HORSE_BRETON_MEALYDAPPLEBAY");
		case joaat("BREED_BRETON_STEELGREY"):
			return joaat("A_C_HORSE_BRETON_STEELGREY");
		case joaat("BREED_CRIOLLO_BLUEROANOVERO"):
			return joaat("A_C_HORSE_CRIOLLO_BLUEROANOVERO");
		case joaat("BREED_CRIOLLO_DUN"):
			return joaat("A_C_HORSE_CRIOLLO_DUN");
		case joaat("BREED_CRIOLLO_BAYBRINDLE"):
			return joaat("A_C_HORSE_CRIOLLO_BAYBRINDLE");
		case joaat("BREED_CRIOLLO_SORRELOVERO"):
			return joaat("A_C_HORSE_CRIOLLO_SORRELOVERO");
		case joaat("BREED_CRIOLLO_BAYFRAMEOVERO"):
			return joaat("A_C_HORSE_CRIOLLO_BAYFRAMEOVERO");
		case joaat("BREED_CRIOLLO_MARBLESABINO"):
			return joaat("A_C_HORSE_CRIOLLO_MARBLESABINO");
		case joaat("BREED_GYPSYCOB_PIEBALD"):
			return joaat("A_C_HORSE_GYPSYCOB_PIEBALD");
		case joaat("BREED_GYPSYCOB_WHITEBLAGDON"):
			return joaat("A_C_HORSE_GYPSYCOB_WHITEBLAGDON");
		case joaat("BREED_GYPSYCOB_PALOMINOBLAGDON"):
			return joaat("A_C_HORSE_GYPSYCOB_PALOMINOBLAGDON");
		case joaat("BREED_GYPSYCOB_SKEWBALD"):
			return joaat("A_C_HORSE_GYPSYCOB_SKEWBALD");
		case joaat("BREED_GYPSYCOB_SPLASHEDBAY"):
			return joaat("A_C_HORSE_GYPSYCOB_SPLASHEDBAY");
		case joaat("BREED_GYPSYCOB_SPLASHEDPIEBALD"):
			return joaat("A_C_HORSE_GYPSYCOB_SPLASHEDPIEBALD");
		case joaat("BREED_KLADRUBER_BLACK"):
			return joaat("A_C_HORSE_KLADRUBER_BLACK");
		case joaat("BREED_KLADRUBER_WHITE"):
			return joaat("A_C_HORSE_KLADRUBER_WHITE");
		case joaat("BREED_KLADRUBER_CREMELLO"):
			return joaat("A_C_HORSE_KLADRUBER_CREMELLO");
		case joaat("BREED_KLADRUBER_GREY"):
			return joaat("A_C_HORSE_KLADRUBER_GREY");
		case joaat("BREED_KLADRUBER_DAPPLEROSEGREY"):
			return joaat("A_C_HORSE_KLADRUBER_DAPPLEROSEGREY");
		case joaat("BREED_KLADRUBER_SILVER"):
			return joaat("A_C_HORSE_KLADRUBER_SILVER");
		case joaat("BREED_NORFOLKROADSTER_BLACK"):
			return joaat("A_C_HORSE_NORFOLKROADSTER_BLACK");
		case joaat("BREED_NORFOLKROADSTER_SPECKLEDGREY"):
			return joaat("A_C_HORSE_NORFOLKROADSTER_SPECKLEDGREY");
		case joaat("BREED_NORFOLKROADSTER_PIEBALDROAN"):
			return joaat("A_C_HORSE_NORFOLKROADSTER_PIEBALDROAN");
		case joaat("BREED_NORFOLKROADSTER_ROSEGREY"):
			return joaat("A_C_HORSE_NORFOLKROADSTER_ROSEGREY");
		case joaat("BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN"):
			return joaat("A_C_HORSE_NORFOLKROADSTER_DAPPLEDBUCKSKIN");
		case joaat("BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR"):
			return joaat("A_C_HORSE_NORFOLKROADSTER_SPOTTEDTRICOLOR");
		case joaat("BREED_DONKEY"):
			return joaat("A_C_DONKEY_01");
		case joaat("BREED_MULE"):
			return joaat("A_C_HORSEMULE_01");
		case joaat("BREED_MULE_PAINTED"):
			return joaat("A_C_HORSEMULEPAINTED_01");
		case joaat("BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN"):
			return joaat("A_C_HORSE_AMERICANSTANDARDBRED_LIGHTBUCKSKIN");
		case joaat("BREED_APPALOOSA_BLACKSNOWFLAKE"):
			return joaat("A_C_HORSE_APPALOOSA_BLACKSNOWFLAKE");
		case joaat("BREED_ARABIAN_GREY"):
			return joaat("A_C_HORSE_ARABIAN_GREY");
		case joaat("BREED_ARABIAN_REDCHESTNUT"):
			return joaat("A_C_HORSE_ARABIAN_REDCHESTNUT");
		case joaat("BREED_HUNGARIANHALFBRED_LIVERCHESTNUT"):
			return joaat("A_C_HORSE_HUNGARIANHALFBRED_LIVERCHESTNUT");
		case joaat("BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
			return joaat("A_C_HORSE_MISSOURIFOXTROTTER_SABLECHAMPAGNE");
		case joaat("BREED_MUSTANG_GOLDENDUN"):
			return joaat("A_C_HORSE_MUSTANG_GOLDENDUN");
		case joaat("BREED_MURFREEBROOD_MANGE_01"):
			return joaat("A_C_HORSE_MURFREEBROOD_MANGE_01");
		case joaat("BREED_MURFREEBROOD_MANGE_02"):
			return joaat("A_C_HORSE_MURFREEBROOD_MANGE_02");
		case joaat("BREED_MURFREEBROOD_MANGE_03"):
			return joaat("A_C_HORSE_MURFREEBROOD_MANGE_03");
		case joaat("BREED_MANGY_BACKUP"):
			return joaat("A_C_HORSE_MP_MANGY_BACKUP");
		default:
			break;
	}
	return 0;
}

int func_181(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, func_244());
	return iVar0;
}

int func_182(int iParam0, int iParam1)
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
	if (func_245(iParam1, &iVar0))
	{
		return ATTRIBUTE::_GET_ATTRIBUTE_CORE_VALUE(iParam0, iVar0);
	}
	return 0;
}

int func_183(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, func_246());
	return iVar0;
}

int func_184(int iParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return 0;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iParam0, func_244());
	return iVar0;
}

int func_185(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	int iVar0;

	if (!func_247(&uParam0, &iVar0))
	{
		return 0;
	}
	return Global_17411.f_55.f_61.f_41[iVar0 /*54*/].f_29[iParam4 /*4*/];
}

int func_186(int iParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return 0;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iParam0, func_246());
	return iVar0;
}

void func_187(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	struct<2> Var14;
	vector3 vVar36;
	int iVar43;
	int iVar44;
	struct<2> Var45;
	vector3 vVar67;
	int iVar74;

	if (func_248(uParam0))
	{
		Var0.f_9 = -1591664384;
		if (func_249(*uParam0, joaat("SLOTID_HORSE_SADDLE"), &Var0, 1, -1))
		{
			if (func_215(Var0.f_4, 0))
			{
				Var14.f_1 = 20;
				if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(Var0.f_4, &Var14) && Var14 > 0)
				{
					iVar43 = 0;
					while (iVar43 < Var14)
					{
						if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(Var14.f_1[iVar43], &vVar36))
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
			iVar44 = func_195(Var0, joaat("SLOTID_HORSE_STIRRUP"), 0, -1);
			if (func_215(iVar44, 0))
			{
				Var45.f_1 = 20;
				if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iVar44, &Var45) && Var45 > 0)
				{
					iVar74 = 0;
					while (iVar74 < Var45)
					{
						if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(Var45.f_1[iVar74], &vVar67))
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
}

int func_188(int iParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return 0;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iParam0, func_250());
	return iVar0;
}

int func_189(int iParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return 0;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iParam0, func_251());
	return iVar0;
}

int func_190(int iParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return -1;
	}
	iVar0 = func_252(iParam0);
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

char* func_191(int iParam0)
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

void func_192(int iParam0, float fParam1, int iParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1956200.f_5.f_525.f_12, iParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(Global_1956200.f_5.f_525.f_13, fParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1956200.f_5.f_525.f_14, iParam2);
}

void func_193(int iParam0, float fParam1, int iParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1956200.f_5.f_525.f_15, iParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(Global_1956200.f_5.f_525.f_16, fParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1956200.f_5.f_525.f_17, iParam2);
}

int func_194(var uParam0, int iParam1, int iParam2)
{
	if (!func_208(uParam0, iParam1, 1))
	{
		return 0;
	}
	if (!func_209(&Global_1904087))
	{
		return 0;
	}
	return func_253(&Global_1904087, iParam2);
}

int func_195(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_254(&uParam0, iParam4, bParam5, iParam6);
}

int func_196(int iParam0)
{
	if (iParam0 == joaat("A_C_HORSE_MP_MANGY_BACKUP"))
	{
		return 779169510;
	}
	switch (iParam0)
	{
		case joaat("A_C_HORSE_AMERICANPAINT_OVERO"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_AMERICANPAINT_TOBIANO"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_AMERICANPAINT_SPLASHEDWHITE"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_AMERICANPAINT_GREYOVERO"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_BUCKSKIN"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_ANDALUSIAN_DARKBAY"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_HORSE_ANDALUSIAN_ROSEGRAY"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_HORSE_ANDALUSIAN_PERLINO"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_HORSE_APPALOOSA_BLANKET"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_APPALOOSA_LEOPARDBLANKET"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_APPALOOSA_BROWNLEOPARD"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_APPALOOSA_LEOPARD"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_ARABIAN_BLACK"):
			return joaat("HORSE_CLASS_SUPERIOR");
		case joaat("A_C_HORSE_ARABIAN_ROSEGREYBAY"):
			return joaat("HORSE_CLASS_SUPERIOR");
		case joaat("A_C_HORSE_ARABIAN_WHITE"):
			return joaat("HORSE_CLASS_SUPERIOR");
		case joaat("A_C_HORSE_ARDENNES_BAYROAN"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_HORSE_ARDENNES_STRAWBERRYROAN"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_HORSE_ARDENNES_IRONGREYROAN"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_HORSE_BELGIAN_BLONDCHESTNUT"):
			return joaat("HORSE_CLASS_DRAFT");
		case joaat("A_C_HORSE_BELGIAN_MEALYCHESTNUT"):
			return joaat("HORSE_CLASS_DRAFT");
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_SEALBROWN"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_CHOCOLATEROAN"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_BLACK"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_CHESTNUTPINTO"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_GREY"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_SILVERBAY"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_MORGAN_BAY"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_MORGAN_BAYROAN"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_MORGAN_PALOMINO"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_MUSTANG_GRULLODUN"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_MUSTANG_WILDBAY"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_MUSTANG_TIGERSTRIPEDBAY"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_NOKOTA_BLUEROAN"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_NOKOTA_WHITEROAN"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_NOKOTA_REVERSEDAPPLEROAN"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_SHIRE_DARKBAY"):
			return joaat("HORSE_CLASS_DRAFT");
		case joaat("A_C_HORSE_SHIRE_LIGHTGREY"):
			return joaat("HORSE_CLASS_DRAFT");
		case joaat("A_C_HORSE_SUFFOLKPUNCH_SORREL"):
			return joaat("HORSE_CLASS_DRAFT");
		case joaat("A_C_HORSE_SUFFOLKPUNCH_REDCHESTNUT"):
			return joaat("HORSE_CLASS_DRAFT");
		case joaat("A_C_HORSE_TENNESSEEWALKER_BLACKRABICANO"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_TENNESSEEWALKER_DAPPLEBAY"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_TENNESSEEWALKER_FLAXENROAN"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_THOROUGHBRED_BLOODBAY"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_THOROUGHBRED_DAPPLEGREY"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_THOROUGHBRED_BRINDLE"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_THOROUGHBRED_BLACKCHESTNUT"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_TURKOMAN_DARKBAY"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_TURKOMAN_GOLD"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_TURKOMAN_SILVER"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_BRETON_REDROAN"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_BRETON_SORREL"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_BRETON_GRULLODUN"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_BRETON_SEALBROWN"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_BRETON_MEALYDAPPLEBAY"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_BRETON_STEELGREY"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_CRIOLLO_BLUEROANOVERO"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_CRIOLLO_DUN"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_CRIOLLO_BAYBRINDLE"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_CRIOLLO_SORRELOVERO"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_CRIOLLO_BAYFRAMEOVERO"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_CRIOLLO_MARBLESABINO"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_GYPSYCOB_PIEBALD"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_GYPSYCOB_WHITEBLAGDON"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_GYPSYCOB_PALOMINOBLAGDON"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_GYPSYCOB_SKEWBALD"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_GYPSYCOB_SPLASHEDBAY"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_GYPSYCOB_SPLASHEDPIEBALD"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_KLADRUBER_BLACK"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_KLADRUBER_WHITE"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_KLADRUBER_CREMELLO"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_KLADRUBER_GREY"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_KLADRUBER_DAPPLEROSEGREY"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_KLADRUBER_SILVER"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_NORFOLKROADSTER_BLACK"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_NORFOLKROADSTER_SPECKLEDGREY"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_NORFOLKROADSTER_PIEBALDROAN"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_NORFOLKROADSTER_ROSEGREY"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_NORFOLKROADSTER_DAPPLEDBUCKSKIN"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_NORFOLKROADSTER_SPOTTEDTRICOLOR"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_DONKEY_01"):
			return joaat("HORSE_CLASS_OTHER");
		case joaat("A_C_HORSEMULE_01"):
			return joaat("HORSE_CLASS_OTHER");
		case joaat("A_C_HORSEMULEPAINTED_01"):
			return joaat("HORSE_CLASS_OTHER");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_LIGHTBUCKSKIN"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_APPALOOSA_BLACKSNOWFLAKE"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_ARABIAN_GREY"):
			return joaat("HORSE_CLASS_SUPERIOR");
		case joaat("A_C_HORSE_ARABIAN_REDCHESTNUT"):
			return joaat("HORSE_CLASS_SUPERIOR");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_LIVERCHESTNUT"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_MUSTANG_GOLDENDUN"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_01"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_02"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_03"):
			return joaat("HORSE_CLASS_WORK");
		default:
			break;
	}
	return 779169510;
}

char* func_197(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("HORSE_CLASS_RIDING"):
			return "HORSE_CLASS_RIDING";
		case joaat("HORSE_CLASS_DRAFT"):
			return "HORSE_CLASS_DRAFT";
		case joaat("HORSE_CLASS_RACE"):
			return "HORSE_CLASS_RACE";
		case joaat("HORSE_CLASS_WAR"):
			return "HORSE_CLASS_WAR";
		case joaat("HORSE_CLASS_WORK"):
			return "HORSE_CLASS_WORK";
		case joaat("HORSE_CLASS_MULTI"):
			return func_255(iParam1);
		case joaat("HORSE_CLASS_SUPERIOR"):
			return "HORSE_CLASS_SUPERIOR";
		case joaat("HORSE_CLASS_OTHER"):
			return "HORSE_CLASS_OTHER";
		default:
			break;
	}
	return "";
}

char* func_198(int iParam0)
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

char* func_199(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BREED_AMERICANPAINT_OVERO"):
			return "COAT_OVERO";
		case joaat("BREED_AMERICANPAINT_TOBIANO"):
			return "COAT_TOB";
		case joaat("BREED_AMERICANPAINT_SPLASHEDWHITE"):
			return "COAT_SPLASHWHITE";
		case joaat("BREED_AMERICANPAINT_GREYOVERO"):
			return "COAT_GREYOVERO";
		case joaat("BREED_AMERICANSTANDARDBRED_BLACK"):
			return "COAT_BLACK";
		case joaat("BREED_AMERICANSTANDARDBRED_BUCKSKIN"):
			return "COAT_BUCKSKIN";
		case joaat("BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return "COAT_PALDAP";
		case joaat("BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return "COAT_SILVERTAILBUCKSKIN";
		case joaat("BREED_ANDALUSIAN_DARKBAY"):
			return "COAT_DARKBAY";
		case joaat("BREED_ANDALUSIAN_PERLINO"):
			return "COAT_PERLINO";
		case joaat("BREED_ANDALUSIAN_ROSEGRAY"):
			return "COAT_ROSEGREY";
		case joaat("BREED_APPALOOSA_BLANKET"):
			return "COAT_BLANKET";
		case joaat("BREED_APPALOOSA_LEOPARDBLANKET"):
			return "COAT_LEOPBLANKET";
		case joaat("BREED_APPALOOSA_BROWNLEOPARD"):
			return "COAT_BRLEOP";
		case joaat("BREED_APPALOOSA_LEOPARD"):
			return "COAT_LEOP";
		case joaat("BREED_ARABIAN_BLACK"):
			return "COAT_BLACK";
		case joaat("BREED_ARABIAN_ROSEGREYBAY"):
			return "COAT_ROSEGREYBAY";
		case joaat("BREED_ARABIAN_WHITE"):
			return "COAT_WHITE";
		case joaat("BREED_ARDENNES_BAYROAN"):
			return "COAT_BAYR";
		case joaat("BREED_ARDENNES_STRAWBERRYROAN"):
			return "COAT_STRAWR";
		case joaat("BREED_ARDENNES_IRONGREYROAN"):
			return "COAT_IRONGREYR";
		case joaat("BREED_BELGIAN_BLONDCHESTNUT"):
			return "COAT_BLONDCH";
		case joaat("BREED_BELGIAN_MEALYCHESTNUT"):
			return "COAT_MEALYCH";
		case joaat("BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
			return "COAT_SOOTYBUCKSKIN";
		case joaat("BREED_DUTCHWARMBLOOD_SEALBROWN"):
			return "COAT_SEALBR";
		case joaat("BREED_DUTCHWARMBLOOD_CHOCOLATEROAN"):
			return "COAT_CHOCR";
		case joaat("BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
			return "COAT_FLAXCH";
		case joaat("BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return "COAT_PIETOB";
		case joaat("BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
			return "COAT_DAPDARKGREY";
		case joaat("BREED_KENTUCKYSADDLE_BLACK"):
			return "COAT_BLACK";
		case joaat("BREED_KENTUCKYSADDLE_CHESTNUTPINTO"):
			return "COAT_CHPIN";
		case joaat("BREED_KENTUCKYSADDLE_GREY"):
			return "COAT_GREY";
		case joaat("BREED_KENTUCKYSADDLE_SILVERBAY"):
			return "COAT_SILVERBAY";
		case joaat("BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
			return "COAT_AMBCHA";
		case joaat("BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return "COAT_SILVERDAPPINT";
		case joaat("BREED_MORGAN_BAY"):
			return "COAT_BAY";
		case joaat("BREED_MORGAN_BAYROAN"):
			return "COAT_BAYR";
		case joaat("BREED_MORGAN_FLAXENCHESTNUT"):
			return "COAT_FLAXCH";
		case joaat("BREED_MORGAN_PALOMINO"):
			return "COAT_PAL";
		case joaat("BREED_MUSTANG_GRULLODUN"):
			return "COAT_GRULDUN";
		case joaat("BREED_MUSTANG_WILDBAY"):
			return "COAT_WILDBAY";
		case joaat("BREED_MUSTANG_TIGERSTRIPEDBAY"):
			return "COAT_TIGSTRBAY";
		case joaat("BREED_NOKOTA_BLUEROAN"):
			return "COAT_BLUER";
		case joaat("BREED_NOKOTA_WHITEROAN"):
			return "COAT_WHITER";
		case joaat("BREED_NOKOTA_REVERSEDAPPLEROAN"):
			return "COAT_REVDAPR";
		case joaat("BREED_SHIRE_DARKBAY"):
			return "COAT_DARKBAY";
		case joaat("BREED_SHIRE_LIGHTGREY"):
			return "COAT_LGREY";
		case joaat("BREED_SUFFOLKPUNCH_SORREL"):
			return "COAT_SORREL";
		case joaat("BREED_SUFFOLKPUNCH_REDCHESTNUT"):
			return "COAT_REDCH";
		case joaat("BREED_TENNESSEEWALKER_BLACKRABICANO"):
			return "COAT_BLACKRAB";
		case joaat("BREED_TENNESSEEWALKER_CHESTNUT"):
			return "COAT_CH";
		case joaat("BREED_TENNESSEEWALKER_DAPPLEBAY"):
			return "COAT_DAPBAY";
		case joaat("BREED_TENNESSEEWALKER_REDROAN"):
			return "COAT_REDR";
		case joaat("BREED_TENNESSEEWALKER_FLAXENROAN"):
			return "COAT_FLAXR";
		case joaat("BREED_THOROUGHBRED_BLOODBAY"):
			return "COAT_BLBAY";
		case joaat("BREED_THOROUGHBRED_DAPPLEGREY"):
			return "COAT_DAPGREY";
		case joaat("BREED_THOROUGHBRED_BRINDLE"):
			return "COAT_BRINDLE";
		case joaat("BREED_THOROUGHBRED_BLACKCHESTNUT"):
			return "COAT_BLACKCH";
		case joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return "COAT_REVDAPBLACK";
		case joaat("BREED_TURKOMAN_DARKBAY"):
			return "COAT_DARKBAY";
		case joaat("BREED_TURKOMAN_GOLD"):
			return "COAT_GOLD";
		case joaat("BREED_TURKOMAN_SILVER"):
			return "COAT_SILVER";
		case joaat("BREED_BRETON_REDROAN"):
			return "COAT_REDR";
		case joaat("BREED_BRETON_SORREL"):
			return "COAT_SORREL";
		case joaat("BREED_BRETON_GRULLODUN"):
			return "COAT_GRULDUN";
		case joaat("BREED_BRETON_SEALBROWN"):
			return "COAT_SEALBR";
		case joaat("BREED_BRETON_MEALYDAPPLEBAY"):
			return "COAT_MEALYDAPBAY";
		case joaat("BREED_BRETON_STEELGREY"):
			return "COAT_STEELGREY";
		case joaat("BREED_CRIOLLO_BLUEROANOVERO"):
			return "COAT_BLUEROANOVERO";
		case joaat("BREED_CRIOLLO_DUN"):
			return "COAT_DUN";
		case joaat("BREED_CRIOLLO_BAYBRINDLE"):
			return "COAT_BAYBRINDLE";
		case joaat("BREED_CRIOLLO_SORRELOVERO"):
			return "COAT_SORRELOVERO";
		case joaat("BREED_CRIOLLO_BAYFRAMEOVERO"):
			return "COAT_BAYFRAMEOVERO";
		case joaat("BREED_CRIOLLO_MARBLESABINO"):
			return "COAT_MARBLESABINO";
		case joaat("BREED_GYPSYCOB_PIEBALD"):
			return "COAT_PIE";
		case joaat("BREED_GYPSYCOB_WHITEBLAGDON"):
			return "COAT_WHITEBLAGDON";
		case joaat("BREED_GYPSYCOB_PALOMINOBLAGDON"):
			return "COAT_PALBLAGDON";
		case joaat("BREED_GYPSYCOB_SKEWBALD"):
			return "COAT_SKEWBALD";
		case joaat("BREED_GYPSYCOB_SPLASHEDBAY"):
			return "COAT_SPLASHBAY";
		case joaat("BREED_GYPSYCOB_SPLASHEDPIEBALD"):
			return "COAT_SPLASHPIE";
		case joaat("BREED_KLADRUBER_BLACK"):
			return "COAT_BLACK";
		case joaat("BREED_KLADRUBER_WHITE"):
			return "COAT_WHITE";
		case joaat("BREED_KLADRUBER_CREMELLO"):
			return "COAT_CREM";
		case joaat("BREED_KLADRUBER_GREY"):
			return "COAT_GREY";
		case joaat("BREED_KLADRUBER_DAPPLEROSEGREY"):
			return "COAT_DAPROSEGREY";
		case joaat("BREED_KLADRUBER_SILVER"):
			return "COAT_SILVER";
		case joaat("BREED_NORFOLKROADSTER_BLACK"):
			return "COAT_BLACK";
		case joaat("BREED_NORFOLKROADSTER_SPECKLEDGREY"):
			return "COAT_SPECKLEDGREY";
		case joaat("BREED_NORFOLKROADSTER_PIEBALDROAN"):
			return "COAT_PIEROAN";
		case joaat("BREED_NORFOLKROADSTER_ROSEGREY"):
			return "COAT_ROSEGREY";
		case joaat("BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN"):
			return "COAT_DAPBUCKSKIN";
		case joaat("BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR"):
			return "COAT_SPOTTEDTRICOLOR";
		case joaat("BREED_DONKEY"):
			return "COAT_NONE";
		case joaat("BREED_MULE"):
			return "COAT_NONE";
		case joaat("BREED_MULE_PAINTED"):
			return "COAT_NONE";
		case joaat("BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN"):
			return "COAT_LIGHTBUCKSKIN";
		case joaat("BREED_APPALOOSA_BLACKSNOWFLAKE"):
			return "COAT_BLACKSNO";
		case joaat("BREED_ARABIAN_GREY"):
			return "COAT_GREY";
		case joaat("BREED_ARABIAN_REDCHESTNUT"):
			return "COAT_REDCH";
		case joaat("BREED_HUNGARIANHALFBRED_LIVERCHESTNUT"):
			return "COAT_LIVERCH";
		case joaat("BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
			return "COAT_SABLECHAMP";
		case joaat("BREED_MUSTANG_GOLDENDUN"):
			return "COAT_GOLDENDUN";
		case joaat("BREED_TENNESSEEWALKER_MAHOGANYBAY"):
			return "COAT_MAHBAY";
		case joaat("BREED_SHIRE_RAVENBLACK"):
			return "COAT_RAVBLACK";
		case joaat("BREED_BUELL_WARVETS"):
			return "COAT_CHEMGOLD";
		case joaat("BREED_JOHN_ENDLESSSUMMER"):
			return "COAT_SEALBR";
		case joaat("BREED_MURFREEBROOD_MANGE_01"):
			return "COAT_BLANKET";
		case joaat("BREED_MURFREEBROOD_MANGE_02"):
			return "COAT_BLUER";
		case joaat("BREED_MURFREEBROOD_MANGE_03"):
			return "COAT_BLACKRAB";
		case joaat("BREED_WINTER02_01"):
			return "COAT_SILVERBAY";
		case joaat("BREED_EAGLEFLIES"):
			return "COAT_SPLASHWHITE";
		case joaat("BREED_GANG_BILL"):
			return "COAT_BROWNR";
		case joaat("BREED_GANG_CHARLES"):
			return "COAT_GREYSNOWCAPSPOTTED";
		case joaat("BREED_GANG_CHARLES_ENDLESSSUMMER"):
			return "COAT_GREYROANSABINO";
		case joaat("BREED_GANG_DUTCH"):
			return "COAT_ALBINO";
		case joaat("BREED_GANG_HOSEA"):
			return "COAT_SILVER";
		case joaat("BREED_GANG_JAVIER"):
			return "COAT_GREYOVERO";
		case joaat("BREED_GANG_JOHN"):
			return "COAT_SILVERDARKBAY";
		case joaat("BREED_GANG_KAREN"):
			return "COAT_SMOKYBLACK";
		case joaat("BREED_GANG_KIERAN"):
			return "COAT_FLAXR";
		case joaat("BREED_GANG_LENNY"):
			return "COAT_LIGHTPALOMINO";
		case joaat("BREED_GANG_MICAH"):
			return "COAT_BLACK";
		case joaat("BREED_GANG_SADIE"):
			return "COAT_GOLDDAP";
		case joaat("BREED_GANG_SADIE_ENDLESSSUMMER"):
			return "COAT_DARKBAYROAN";
		case joaat("BREED_GANG_SEAN"):
			return "COAT_SILVERTAILBUCKSKIN";
		case joaat("BREED_GANG_TRELAWNEY"):
			return "COAT_BRLEOP";
		case joaat("BREED_GANG_UNCLE"):
			return "COAT_SABINO";
		case joaat("BREED_GANG_UNCLE_ENDLESSSUMMER"):
			return "COAT_FEWSPOTBUCKSKIN";
		case joaat("BREED_MANGY_BACKUP"):
			return "COAT_MANGY";
		default:
			break;
	}
	return "";
}

int func_200(int iParam0, int iParam1)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		iParam0 = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iParam0, 7, iParam1);
	return iVar0;
}

void func_201(int iParam0, var uParam1, int iParam2)
{
	float fVar0;
	char* sVar1;

	fVar0 = (func_256(*uParam1, iParam2) * 100f);
	sVar1 = func_257(0 == iParam2, "RPG_Horse_Health", "RPG_Horse_Stamina");
	if (fVar0 > 0f)
	{
		func_167(iParam0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(fVar0)), 1, 0, 1, 0, 0, 0, 0, sVar1);
		func_177(iParam0, "RPG_ARROW_DOWN", 0);
	}
	else if (fVar0 == 0f)
	{
		func_167(iParam0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(fVar0)), 1, 0, 0, 0, 0, 0, 0, sVar1);
	}
	else
	{
		func_167(iParam0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", BUILTIN::ROUND(fVar0)), 1, 0, 0, 0, 0, 0, 0, sVar1);
		func_177(iParam0, "RPG_ARROW_UP", 0);
	}
}

void func_202()
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

	Var1 = { func_17(0, 1, 0, -1) };
	iVar0 = func_258(Var1, joaat("SLOTID_HORSE_SADDLE"), 0, 0);
	if (!func_215(iVar0, 0))
	{
		return;
	}
	Var10.f_1 = 20;
	ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iVar0, &Var10);
	iVar39 = 0;
	while (iVar39 < Var10)
	{
		ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(Var10.f_1[iVar39], &Var32);
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
	func_167(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_ACCELERATION"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PLUS_VALUE", iVar8), 0, 0, 0, 0, 0, 0, 0, 0);
	func_167(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_SPEED"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PLUS_VALUE", iVar9), 0, 0, 0, 0, 0, 0, 0, 0);
	if (fVar5 >= 0f)
	{
		func_167(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_REGEN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(fVar5)), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
	}
	else
	{
		func_167(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_REGEN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", BUILTIN::ROUND(MISC::ABSF(fVar5))), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
	}
	if (fVar6 <= 0f)
	{
		func_167(3, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(fVar6)), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
		if (fVar6 < 0f)
		{
			func_177(3, "RPG_ARROW_DOWN", 0);
		}
	}
	else
	{
		func_167(3, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", BUILTIN::ROUND(MISC::ABSF(fVar6))), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
		func_177(3, "RPG_ARROW_UP", 0);
	}
	if (fVar7 <= 0f)
	{
		func_167(4, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(fVar7)), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Health");
		if (fVar7 < 0f)
		{
			func_177(4, "RPG_ARROW_DOWN", 0);
		}
	}
	else
	{
		func_167(4, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", BUILTIN::ROUND(MISC::ABSF(fVar7))), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Health");
		func_177(4, "RPG_ARROW_UP", 0);
	}
}

void func_203()
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

	Var2 = { func_17(0, 1, 0, -1) };
	iVar1 = func_258(Var2, joaat("SLOTID_HORSE_SADDLE"), 0, 0);
	if (!func_215(iVar1, 0))
	{
		return;
	}
	Var6 = { func_259(iVar1, Var2, joaat("SLOTID_HORSE_SADDLE"), 0) };
	iVar0 = func_195(Var6, joaat("SLOTID_HORSE_STIRRUP"), 0, -1);
	if (!func_215(iVar0, 0))
	{
		return;
	}
	Var13.f_1 = 20;
	ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iVar0, &Var13);
	iVar42 = 0;
	while (iVar42 < Var13)
	{
		ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(Var13.f_1[iVar42], &Var35);
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
	func_167(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_ACCELERATION"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PLUS_VALUE", iVar10), 0, 0, 0, 0, 0, 0, 0, 0);
	func_167(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_SPEED"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PLUS_VALUE", iVar11), 0, 0, 0, 0, 0, 0, 0, 0);
	if (fVar12 <= 0f)
	{
		func_167(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(fVar12)), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
	}
	else
	{
		func_167(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", BUILTIN::ROUND(MISC::ABSF(fVar12))), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
	}
}

int func_204(int iParam0, int iParam1)
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

char* func_205(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_260(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

int func_206(bool bParam0)
{
	if (func_261() == -1)
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

struct<2> func_207(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

bool func_208(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	func_233(&Global_1904087);
	switch (iParam1)
	{
		case 0:
		case 1:
			if (!func_262(uParam0, &Global_1904087, &(Global_1904087.f_53), bParam2))
			{
				return false;
			}
			break;
		case 2:
			if (!func_263(uParam0, &Global_1904087, &(Global_1904087.f_82), bParam2))
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_209(var uParam0)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (uParam0->f_10 == -1)
	{
		return false;
	}
	return true;
}

int func_210(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0 + 1;
		iVar2 = func_200(iParam0, iVar1);
		if (iParam1 < iVar2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4;
}

bool func_211(int iParam0, int iParam1)
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
			return false;
	}
	return true;
}

bool func_212(var uParam0)
{
	struct<4> Var0;
	struct<10> Var4;
	bool bVar18;
	int iVar19;

	Var0 = { func_83() };
	if (INVENTORY::_0x4C543D5DFCD2DAFD(uParam0, &Var0))
	{
		return false;
	}
	Var4.f_9 = -1591664384;
	iVar19 = 0;
	while (iVar19 < 10)
	{
		if (INVENTORY::_0x4C543D5DFCD2DAFD(&(Global_17411.f_55.f_61.f_41[iVar19 /*54*/]), uParam0))
		{
			bVar18 = true;
		}
		else if (INVENTORY::_0x4C543D5DFCD2DAFD(&(Global_17411.f_55.f_61.f_41[iVar19 /*54*/]), &Var0))
		{
			func_264(&(Global_17411.f_55.f_61.f_41[iVar19 /*54*/]));
			Global_17411.f_55.f_61.f_41[iVar19 /*54*/] = { *uParam0 };
			bVar18 = true;
		}
		else
		{
			if (func_265(Global_17411.f_55.f_61.f_41[iVar19 /*54*/], &Var4, 1, 1, -1))
			{
			}
			else
			{
				func_264(&(Global_17411.f_55.f_61.f_41[iVar19 /*54*/]));
				Global_17411.f_55.f_61.f_41[iVar19 /*54*/] = { *uParam0 };
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
		return false;
	}
	return true;
}

bool func_213(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam0 != 0)
	{
		iVar5 = func_266(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_267(iParam0);
			iVar0 = 0;
			while (iVar0 < iVar6)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar5, iVar0, &iVar1))
				{
					iVar4 = iVar1;
					if (iVar4 == iParam1)
					{
						return true;
					}
				}
				iVar0++;
			}
		}
	}
	return false;
}

struct<4> func_214()
{
	struct<4> Var0;

	Var0 = { func_268(0) };
	return func_259(856287005, Var0, -218846335, 0);
}

bool func_215(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_216(int iParam0)
{
	int iVar0;

	if (!func_215(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_269(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

void func_217(int iParam0)
{
	func_271(&(Global_1572887.f_405.f_1), func_270(iParam0), 3);
}

void func_218()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 33)
	{
		if (func_272(iVar0))
		{
		}
		iVar0++;
	}
	if (Global_1572887.f_405.f_5 != -1)
	{
	}
	if (Global_1572887.f_405.f_6 != -1)
	{
	}
	if (Global_1572887.f_405.f_7 != -1)
	{
	}
	if (Global_1572887.f_405.f_8 != -1)
	{
	}
	if (Global_1572887.f_405.f_9 != -1)
	{
	}
	if (Global_1572887.f_405.f_11 != 0)
	{
	}
}

int func_219()
{
	if (func_273())
	{
		return 1;
	}
	return 0;
}

int func_220(var uParam0, int iParam1, bool bParam2)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_198.f_2[func_274(iParam1, 1)]))
	{
		return 0;
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(uParam0->f_198.f_2[func_274(iParam1, 1)]) == bParam2)
	{
		return 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_198.f_2[func_274(iParam1, 1)], bParam2);
	return 1;
}

int func_221()
{
	if (func_275())
	{
		return 1;
	}
	if (SOCIALCLUBFEED::_0x068332D20CB6F897())
	{
		return 1;
	}
	return 0;
}

void func_222(var uParam0)
{
	switch (func_276())
	{
		case 0:
			func_277(uParam0, 905305452);
			if (func_278())
			{
				func_279(uParam0, -2094745301);
			}
			else
			{
				func_279(uParam0, 242987266);
			}
			break;
		case 2:
			func_277(uParam0, 905305452);
			func_279(uParam0, -107182257);
			break;
		case 3:
			func_277(uParam0, 905305452);
			func_279(uParam0, -952890825);
			break;
		case 1:
			func_277(uParam0, 2062860436);
			func_279(uParam0, 1010851584);
			break;
	}
	if (func_278())
	{
		func_280(uParam0, 1715681724);
	}
	func_281(uParam0, func_278());
	func_283(uParam0, func_282(0));
}

bool func_223(var uParam0)
{
	uParam0->f_198[0] = DATABINDING::_0xD7DB94AB78E8EBE4("", 1395437865);
	uParam0->f_198.f_2[0] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(uParam0->f_198[0], 1145633164, func_219());
	uParam0->f_198.f_2[1] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(uParam0->f_198[0], -359624034, func_221());
	return true;
}

void func_224(var uParam0)
{
	uParam0->f_203 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_187, "progressRewardsTileTexture", 0);
	uParam0->f_203.f_1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_187, "progressRewardsTileTextureDictionary", 0);
	uParam0->f_203.f_2 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_187, "progressRewardsTileOverlayTexture", 0);
	uParam0->f_203.f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_187, "progressRewardsTileOverlayTextureDictionary", 0);
	uParam0->f_203.f_4 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_187, "progressRewardsTileHasVip", 0);
	uParam0->f_203.f_5 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_187, "toolTip", "");
	uParam0->f_203.f_6 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_187, "progressRewardsRankText", "");
}

void func_225(var uParam0)
{
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_198[0]);
}

bool func_226(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_227(int iParam0)
{
	if (iParam0 == 395262693 || iParam0 == -933924539)
	{
		return 482206342;
	}
	return Global_524288.f_40400;
}

int func_228(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case -504335712:
			if (func_284(iParam1))
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

bool func_229(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_230(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return (Global_1197740.f_1 && iParam0) != 0;
}

bool func_231(int iParam0, int iParam1)
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

bool func_232()
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
	if (!func_5(Global_1051213) && Global_1572887.f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

void func_233(var uParam0)
{
	func_285(uParam0);
	uParam0->f_4 = 0;
	uParam0->f_5 = { func_83() };
	uParam0->f_9 = 0;
	uParam0->f_10 = -1;
	uParam0->f_11 = 0;
	StringCopy(&(uParam0->f_12), "", 64);
	uParam0->f_20 = 0;
	uParam0->f_22 = 0;
	uParam0->f_23 = 0;
}

bool func_234(var uParam0, var uParam1)
{
	func_286(&(Global_1904087.f_24));
	if (!func_262(uParam0, uParam1, &(Global_1904087.f_24), 0))
	{
		return false;
	}
	return true;
}

bool func_235(var uParam0, var uParam1)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (!func_263(uParam0, uParam1, &Var0, 0))
	{
		return false;
	}
	return true;
}

bool func_236(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

char* func_237(int iParam0)
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

char* func_238(int iParam0)
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

float func_239(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_92(1);
	}
	switch (iParam1)
	{
		case 0:
			return Global_1956200.f_1431.f_26[iParam0];
		case 1:
			return Global_1956200.f_1565.f_2.f_26[iParam0];
		default:
			break;
	}
	return -1f;
}

int func_240(float fParam0)
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

int func_241(int iParam0)
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

struct<4> func_242(int iParam0, int iParam1)
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

char* func_243(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_244()
{
	return 0;
}

bool func_245(int iParam0, int iParam1)
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
			return false;
	}
	return true;
}

int func_246()
{
	return 1;
}

bool func_247(var uParam0, int iParam1)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < 10)
	{
		if (!INVENTORY::_0x4C543D5DFCD2DAFD(&(Global_17411.f_55.f_61.f_41[*iParam1 /*54*/]), uParam0))
		{
		}
		else
		{
			return true;
		}
		*iParam1++;
	}
	return false;
}

bool func_248(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_249(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6, int iParam7)
{
	return func_287(&uParam0, iParam4, uParam5, bParam6, iParam7);
}

int func_250()
{
	return 5;
}

int func_251()
{
	return 6;
}

int func_252(int iParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return 0;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iParam0, func_288());
	return iVar0;
}

int func_253(var uParam0, int iParam1)
{
	if (func_289(uParam0, -2147483648))
	{
		*iParam1 = 4;
	}
	else if (func_289(uParam0, 1073741824 /* Float: 2f */))
	{
		*iParam1 = 3;
	}
	else if (func_289(uParam0, 536870912))
	{
		*iParam1 = 2;
	}
	else if (func_289(uParam0, 268435456))
	{
		*iParam1 = 1;
	}
	else if (func_289(uParam0, 134217728))
	{
		*iParam1 = 0;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_254(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_287(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

char* func_255(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
		case joaat("BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
		case joaat("BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return "HORSE_CLASS_MULTI";
		case joaat("BREED_MUSTANG_GRULLODUN"):
		case joaat("BREED_MUSTANG_TIGERSTRIPEDBAY"):
		case joaat("BREED_MUSTANG_GOLDENDUN"):
		case joaat("BREED_MUSTANG_WILDBAY"):
			return "HORSE_CLASS_MULTI";
		case joaat("BREED_TURKOMAN_SILVER"):
		case joaat("BREED_TURKOMAN_GOLD"):
		case joaat("BREED_TURKOMAN_DARKBAY"):
			return "HORSE_CLASS_MULTI";
		case joaat("BREED_BRETON_STEELGREY"):
		case joaat("BREED_BRETON_REDROAN"):
		case joaat("BREED_BRETON_SEALBROWN"):
		case joaat("BREED_BRETON_MEALYDAPPLEBAY"):
		case joaat("BREED_BRETON_GRULLODUN"):
		case joaat("BREED_BRETON_SORREL"):
			return "HORSE_CLASS_MULTI";
		case joaat("BREED_CRIOLLO_SORRELOVERO"):
		case joaat("BREED_CRIOLLO_BAYFRAMEOVERO"):
		case joaat("BREED_CRIOLLO_BAYBRINDLE"):
		case joaat("BREED_CRIOLLO_DUN"):
		case joaat("BREED_CRIOLLO_MARBLESABINO"):
		case joaat("BREED_CRIOLLO_BLUEROANOVERO"):
			return "HORSE_CLASS_MULTI";
		case joaat("BREED_GYPSYCOB_SPLASHEDPIEBALD"):
		case joaat("BREED_GYPSYCOB_PALOMINOBLAGDON"):
		case joaat("BREED_GYPSYCOB_PIEBALD"):
		case joaat("BREED_GYPSYCOB_WHITEBLAGDON"):
		case joaat("BREED_GYPSYCOB_SKEWBALD"):
		case joaat("BREED_GYPSYCOB_SPLASHEDBAY"):
			return "HORSE_CLASS_MULTI";
		case joaat("BREED_KLADRUBER_DAPPLEROSEGREY"):
		case joaat("BREED_KLADRUBER_WHITE"):
		case joaat("BREED_KLADRUBER_SILVER"):
		case joaat("BREED_KLADRUBER_CREMELLO"):
		case joaat("BREED_KLADRUBER_GREY"):
		case joaat("BREED_KLADRUBER_BLACK"):
			return "HORSE_CLASS_MULTI";
		case joaat("BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN"):
		case joaat("BREED_NORFOLKROADSTER_ROSEGREY"):
		case joaat("BREED_NORFOLKROADSTER_BLACK"):
		case joaat("BREED_NORFOLKROADSTER_PIEBALDROAN"):
		case joaat("BREED_NORFOLKROADSTER_SPECKLEDGREY"):
		case joaat("BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR"):
			return "HORSE_CLASS_MULTI";
	}
	return "HORSE_CLASS_MULTI";
}

float func_256(struct<4> Param0, int iParam4)
{
	float fVar0;

	fVar0 = 0f;
	if (iParam4 == 0 && func_128(Param0, 0) > 50)
	{
		fVar0 = (fVar0 + 0.25f);
	}
	fVar0 = (fVar0 - func_290(iParam4));
	return fVar0;
}

char* func_257(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_258(struct<4> Param0, int iParam4, int iParam5, int iParam6)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_291(Param0, iParam4, &Var0, iParam5, iParam6))
	{
		return Var0.f_4;
	}
	return 0;
}

struct<4> func_259(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_215(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_206(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

char* func_260(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_261()
{
	return Global_1572887.f_13;
}

bool func_262(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (!func_148(uParam0, uParam2, bParam3))
	{
		return false;
	}
	if (!func_292(uParam1, uParam2))
	{
		return false;
	}
	return true;
}

bool func_263(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (!func_293(uParam0, uParam2, bParam3))
	{
		return false;
	}
	if (!func_294(uParam1, uParam2))
	{
		return false;
	}
	return true;
}

void func_264(var uParam0)
{
	int iVar0;

	*uParam0 = { func_83() };
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
		uParam0->f_29[iVar0 /*4*/].f_1 = 0f;
		uParam0->f_29[iVar0 /*4*/].f_2 = 0f;
		uParam0->f_29[iVar0 /*4*/].f_3 = 0;
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
		uParam0->f_38[iVar0 /*4*/].f_1 = 0f;
		uParam0->f_38[iVar0 /*4*/].f_2 = 0f;
		uParam0->f_38[iVar0 /*4*/].f_3 = 0;
		iVar0++;
	}
	uParam0->f_51 = { 0f, 0f, 0f };
}

bool func_265(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_295(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_266(int iParam0)
{
	struct<2> Var0;

	if (!func_215(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_267(int iParam0)
{
	int iVar0;

	if (!func_215(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_266(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

struct<4> func_268(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_206(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1293346))
			{
				Global_1293346 = { func_259(joaat("CHARACTER"), func_83(), -1591664384, bParam0) };
			}
			return Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_12)))
			{
				Global_1293346.f_12 = { func_259(joaat("CHARACTER"), func_83(), -1591664384, 0) };
			}
			return Global_1293346.f_12;
		}
	}
	return func_259(joaat("CHARACTER"), func_83(), -1591664384, bParam0);
}

int func_269(int iParam0)
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

int func_270(int iParam0)
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

bool func_271(var uParam0, int iParam1, int iParam2)
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

bool func_272(int iParam0)
{
	return func_236(&(Global_1572887.f_405.f_1), iParam0, 3);
}

bool func_273()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = iVar1;
		if (!func_296(iVar0))
		{
		}
		else
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

int func_274(int iParam0, int iParam1)
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

bool func_275()
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
		else if (!func_248(&Var2))
		{
		}
		else if (!func_297(Var2.f_9))
		{
		}
		else if (!func_298(&Var2))
		{
		}
		else
		{
			INVENTORY::_0x42A2F33A1942E865(iVar1);
			return true;
		}
		iVar16++;
	}
	INVENTORY::_0x42A2F33A1942E865(iVar1);
	return false;
}

int func_276()
{
	if (NETWORK::NETWORK_DOES_TUNABLE_EXIST(-475019843, func_299(1656173034)) && NETWORK::NETWORK_ACCESS_TUNABLE_BOOL(-475019843, func_299(1656173034)))
	{
		return 0;
	}
	else if (NETWORK::NETWORK_DOES_TUNABLE_EXIST(-475019843, func_299(-537144215)) && NETWORK::NETWORK_ACCESS_TUNABLE_BOOL(-475019843, func_299(-537144215)))
	{
		return 2;
	}
	else if (NETWORK::NETWORK_DOES_TUNABLE_EXIST(-475019843, func_299(1629055295)) && NETWORK::NETWORK_ACCESS_TUNABLE_BOOL(-475019843, func_299(1629055295)))
	{
		return 1;
	}
	else if (NETWORK::NETWORK_DOES_TUNABLE_EXIST(-475019843, func_299(965428371)) && NETWORK::NETWORK_ACCESS_TUNABLE_BOOL(-475019843, func_299(965428371)))
	{
		return 3;
	}
	return 1;
}

void func_277(var uParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_300(iParam1) };
	func_301(uParam0, Var0, Var0.f_1);
}

bool func_278()
{
	int iVar0;

	iVar0 = func_302();
	if (!func_303(iVar0))
	{
		return false;
	}
	if (!NETWORK::_0xFBE782B3165AC8EC(iVar0))
	{
		return false;
	}
	return true;
}

void func_279(var uParam0, int iParam1)
{
	func_305(uParam0, func_304(iParam1));
}

void func_280(var uParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_300(iParam1) };
	func_306(uParam0, Var0, Var0.f_1);
}

void func_281(var uParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_203.f_4, bParam1);
}

int func_282(int iParam0)
{
	return func_308(func_307(iParam0));
}

void func_283(var uParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_203.f_6, MISC::_CREATE_VAR_STRING(2, func_309(-270980942), sParam1));
}

bool func_284(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

void func_285(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_286(var uParam0)
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

bool func_287(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_206(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_295(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

int func_288()
{
	return 4;
}

bool func_289(var uParam0, int iParam1)
{
	return func_149(&(uParam0->f_20), iParam1);
}

float func_290(int iParam0)
{
	var uVar0;

	uVar0 = Global_1291734.f_1423.f_3[iParam0];
	return uVar0;
}

bool func_291(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_206(bParam7);
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

bool func_292(var uParam0, var uParam1)
{
	*uParam0 = { *uParam1 };
	uParam0->f_4 = uParam1->f_4;
	uParam0->f_5 = { uParam1->f_5 };
	uParam0->f_9 = uParam1->f_9;
	uParam0->f_11 = uParam1->f_14;
	if (!STREAMING::IS_MODEL_VALID(uParam0->f_11))
	{
		return false;
	}
	uParam0->f_22 = func_19(uParam0->f_11);
	if (uParam0->f_22 == 0)
	{
		return false;
	}
	uParam0->f_12 = { uParam1->f_16 };
	uParam0->f_23 = uParam1->f_25;
	uParam0->f_20 = uParam1->f_24;
	uParam0->f_10 = 0;
	return true;
}

bool func_293(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	iVar0 = func_206(bParam2);
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam0, uParam1, 24, 1))
	{
		return false;
	}
	return true;
}

bool func_294(var uParam0, var uParam1)
{
	*uParam0 = { *uParam1 };
	uParam0->f_4 = uParam1->f_4;
	uParam0->f_5 = { uParam1->f_5 };
	uParam0->f_9 = uParam1->f_9;
	uParam0->f_11 = uParam1->f_14;
	if (!STREAMING::IS_MODEL_VALID(uParam0->f_11))
	{
		return false;
	}
	uParam0->f_22 = 0;
	uParam0->f_12 = { uParam1->f_15 };
	uParam0->f_20 = uParam1->f_23;
	uParam0->f_10 = 2;
	return true;
}

bool func_295(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_206(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

bool func_296(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_310(iParam0);
	iVar1 = func_311(iVar0);
	if (!UNLOCK::_UNLOCK_IS_NEW(iVar1))
	{
		return false;
	}
	if (func_312(iParam0))
	{
		return false;
	}
	return true;
}

bool func_297(int iParam0)
{
	if (iParam0 == 1045621973)
	{
		return false;
	}
	return true;
}

bool func_298(var uParam0)
{
	struct<10> Var0;

	if (!func_248(uParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_265(*uParam0, &Var0, 1, 0, -1))
	{
		return false;
	}
	if (!func_215(Var0.f_4, 0))
	{
		return false;
	}
	return func_313(Var0.f_4);
}

int func_299(int iParam0)
{
	struct<5> Var0;
	var uVar5;

	Var0 = func_314();
	Var0.f_2 = 15;
	Var0.f_3 = func_315(0);
	Var0.f_4 = iParam0;
	if (!DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0))
	{
		return func_316(iParam0);
	}
	return uVar5;
}

struct<2> func_300(int iParam0)
{
	struct<2> Var0;
	struct<5> Var2;

	Var2 = func_314();
	Var2.f_3 = func_315(0);
	Var2.f_4 = iParam0;
	Var2.f_2 = 11;
	if (!DATAFILE::_DATAFILE_GET_HASH(&Var0, &Var2))
	{
		return func_317(iParam0);
	}
	Var2.f_2 = 13;
	if (!DATAFILE::_DATAFILE_GET_HASH(&(Var0.f_1), &Var2))
	{
		return Var0;
	}
	return Var0;
}

void func_301(var uParam0, int iParam1, int iParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_203, iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_203.f_1, iParam2);
}

int func_302()
{
	return func_318(-1052513930);
}

bool func_303(int iParam0)
{
	return iParam0 != 0;
}

char* func_304(int iParam0)
{
	return MISC::_CREATE_VAR_STRING(2, func_309(iParam0));
}

void func_305(var uParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_203.f_5, sParam1);
}

void func_306(var uParam0, int iParam1, int iParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_203.f_2, iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_203.f_3, iParam2);
}

int func_307(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_319(Global_1293346.f_2982);
		case 1:
			return func_319(Global_1293346.f_2983);
		default:
			break;
	}
	return -1;
}

int func_308(int iParam0)
{
	int iVar0;

	if (!func_320(iParam0))
	{
		return 0;
	}
	iVar0 = func_321(iParam0);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	else
	{
		return func_322(iParam0, 1);
	}
	return 0;
}

var func_309(int iParam0)
{
	struct<5> Var0;
	struct<16> Var5;

	Var0 = func_314();
	Var0.f_2 = 9;
	Var0.f_3 = func_315(0);
	Var0.f_4 = iParam0;
	if (!DATAFILE::_0x951327435DC5164B(&Var5, &Var0))
	{
		return func_323(iParam0);
	}
	return func_324(Var5);
}

int func_310(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 12;
		case 3:
			return 7;
		case 2:
			return 11;
		case 1:
			return 15;
		case 0:
			return 18;
		default:
			break;
	}
	return -1;
}

int func_311(int iParam0)
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

bool func_312(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1348352077))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_313(var uParam0)
{
	return UNLOCK::_UNLOCK_IS_NEW(func_325(uParam0));
}

var func_314()
{
	return Global_1071686.f_28448[52 /*4*/].f_3;
}

int func_315(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1293346.f_2982;
		case 1:
			return Global_1293346.f_2983;
		default:
			break;
	}
	return 0;
}

int func_316(int iParam0)
{
	struct<4> Var0;
	var uVar5;

	Var0 = func_314();
	Var0.f_2 = 14;
	Var0.f_3 = iParam0;
	if (!DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0))
	{
		return 0;
	}
	return uVar5;
}

struct<2> func_317(int iParam0)
{
	struct<2> Var0;
	struct<4> Var2;

	Var2 = func_314();
	Var2.f_3 = iParam0;
	Var2.f_2 = 10;
	if (!DATAFILE::_DATAFILE_GET_HASH(&Var0, &Var2))
	{
		return Var0;
	}
	Var2.f_2 = 12;
	if (!DATAFILE::_DATAFILE_GET_HASH(&(Var0.f_1), &Var2))
	{
		return Var0;
	}
	return Var0;
}

int func_318(int iParam0)
{
	struct<5> Var0;
	var uVar5;

	Var0 = func_314();
	Var0.f_2 = 23;
	Var0.f_3 = func_315(0);
	Var0.f_4 = iParam0;
	if (!DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0))
	{
		return func_326(iParam0);
	}
	return uVar5;
}

int func_319(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CHARACTER_RANK"):
			return 0;
		case joaat("CHARACTER_RANK_BOUNTY_HUNTER"):
			return 7;
		case joaat("CHARACTER_RANK_COLLECTOR"):
			return 12;
		case joaat("CHARACTER_RANK_TRADER"):
			return 11;
		case joaat("CHARACTER_RANK_SEASON_005"):
			return 13;
		case joaat("CHARACTER_RANK_VIP_SEASON_005"):
			return 14;
		case joaat("CHARACTER_RANK_MOONSHINER"):
			return 15;
		case joaat("CHARACTER_RANK_SEASON_006"):
			return 16;
		case joaat("CHARACTER_RANK_VIP_SEASON_006"):
			return 17;
		case -296143963:
			return 18;
		case joaat("CHARACTER_RANK_SEASON_007"):
			return 19;
		case joaat("CHARACTER_RANK_VIP_SEASON_007"):
			return 20;
		case 1936286816:
			return 21;
		case -361115047:
			return 22;
		default:
			break;
	}
	return -1;
}

bool func_320(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 22)
	{
		return false;
	}
	return true;
}

int func_321(int iParam0)
{
	if (!func_320(iParam0))
	{
		return 0;
	}
	return Global_1293346.f_3009[iParam0];
}

int func_322(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!func_320(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		iVar0 = func_311(iParam0);
		if (func_215(iVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = func_327(255);
			}
			else
			{
				iVar1 = func_328(iVar0, func_268(1), joaat("SLOTID_PROGRESSION"), 1, 0, 0);
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
		iVar0 = func_329(iParam0);
		if (func_215(iVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = NETWORK::_NETWORK_GET_XP();
			}
			else
			{
				iVar1 = func_328(iVar0, func_268(1), joaat("SLOTID_PROGRESSION"), 1, 0, 0);
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

var func_323(int iParam0)
{
	struct<5> Var0;
	struct<16> Var5;

	Var0 = func_314();
	Var0.f_2 = 8;
	Var0.f_3 = iParam0;
	Var0.f_4 = 0;
	if (!DATAFILE::_0x951327435DC5164B(&Var5, &Var0))
	{
		return "";
	}
	return func_324(Var5);
}

var func_324(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

var func_325(var uParam0)
{
	return uParam0;
}

int func_326(int iParam0)
{
	struct<4> Var0;
	var uVar5;

	Var0 = func_314();
	Var0.f_2 = 22;
	Var0.f_3 = iParam0;
	if (!DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0))
	{
		return 0;
	}
	return uVar5;
}

int func_327(int iParam0)
{
	if (iParam0 == 255 || iParam0 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
	{
		return NETWORK::_NETWORK_GET_RANK();
	}
	return Global_1145091[iParam0 /*35*/];
}

int func_328(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_215(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_330(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_259(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_206(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_206(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

int func_329(int iParam0)
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

int func_330(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

