#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	float fLocal_7 = 0f;
	float fLocal_8 = 0f;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	char* sLocal_14 = NULL;
	char* sLocal_15 = NULL;
	char* sLocal_16 = NULL;
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = -1;
	var uLocal_26 = 0;
	char* sLocal_27 = NULL;
	int iLocal_28 = 0;
	struct<168> Local_29 = { 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	var uVar0;
	var uVar1;
	struct<30> Var2;
	var uVar32;
	bool bVar33;
	int iVar34;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_14 = "mech_skin@BUCK_BUTCHER";
	sLocal_15 = "PBL_BASE";
	sLocal_16 = "PBL_DUMP";
	sLocal_17 = "PBL_DROP_IN";
	sLocal_27 = "beat_gang_camp_reminder";
	iLocal_28 = 23;
	TXD::REQUEST_STREAMED_TEXTURE_DICT("pausemenu_player_update", false);
	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "AllowedToSave", 0);
	uVar1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bPauseMenuAllowedToReplay", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "sessionInfo"), "isArthur", !func_1());
	Local_29.f_156 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bDisplayMissionChallengeChecklist", 0);
	Local_29.f_157 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bAllowChecklistToggle", 1);
	if (func_2())
	{
		DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bPauseMenuPhotoModeVisible", 1);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bEnablePauseMenuPhotoMode", func_3());
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bEnablePauseMenuPhotoMode", 0);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bPauseMenuPhotoModeVisible", 0);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1935689->f_10217))
	{
		Local_29.f_166 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1935689->f_10217);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689->f_10217, false);
	}
	Var2 = { Global_40.f_9 };
	if (TXD::_DOES_STREAMED_TXD_EXIST(-637848863))
	{
		TXD::_REQUEST_STREAMED_TXD(-637848863, 0);
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		if (!Global_20)
		{
			Global_40.f_9 = { Var2 };
		}
		func_4(uVar0, uVar1);
	}
	Global_0.f_14 = func_5();
	if (Global_0.f_14)
	{
		Global_20 = 0;
		func_6(0, 0);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uVar0, true);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uVar1, func_7());
	func_8(&Local_29);
	BUILTIN::WAIT(0);
	func_9(&Local_29);
	_NAMESPACE71::_0xDD1232B332CBB9E7(6, 1, 0);
	Global_43889 = -1;
	func_10();
	iVar34 = ATTRIBUTE::_GET_ATTRIBUTE_CORE_VALUE(Global_35, 0);
	func_11(1, BUILTIN::TO_FLOAT(iVar34), 0);
	func_12();
	iVar34 = ATTRIBUTE::_GET_ATTRIBUTE_CORE_VALUE(Global_35, 1);
	func_11(2, BUILTIN::TO_FLOAT(iVar34), 0);
	func_13();
	iVar34 = ATTRIBUTE::_GET_ATTRIBUTE_CORE_VALUE(Global_35, 2);
	func_11(3, BUILTIN::TO_FLOAT(iVar34), 0);
	func_14();
	while (((!SCRIPTS::_0x9E4EF615E307FBBE() && !func_15(Global_43889)) && !bVar33) && !Local_29.f_167)
	{
		func_16(&Local_29);
		Global_43889 = func_17(&Local_29, &uVar32);
		bVar33 = func_18();
		BUILTIN::WAIT(0);
	}
	func_19(&Local_29);
	if (!Global_20)
	{
		Global_40.f_9 = { Var2 };
	}
	if (bVar33)
	{
		func_20();
		SCRIPTS::_0xBC2C927F5C264243(0);
		AUDIO::_0x6339C1EA3979B5F7("Main_Menu", "Load_Menu_Scenes");
	}
	if (func_15(Global_43889))
	{
		UIAPPS::_CLOSE_ALL_APPS();
		CAM::DO_SCREEN_FADE_OUT(0);
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(778601866) > 0)
		{
			func_21(778601866, 523);
		}
	}
	if (func_2())
	{
		if (Local_29.f_167)
		{
			UIAPPS::_CLOSE_ALL_APPS();
			func_22();
		}
	}
	func_4(uVar0, uVar1);
}

int func_1()
{
	if (func_23() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

bool func_2()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(99890643);
}

int func_3()
{
	if (UIAPPS::_IS_APP_ACTIVE(1289756680))
	{
		return 0;
	}
	if (((((((GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChapterTitle_IntroCh01") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChapterTitle_IntroCh02")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChapterTitle_IntroCh03")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChapterTitle_IntroCh04")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChapterTitle_IntroCh05")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChapterTitle_IntroCh06")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChapterTitle_IntroCh08Epi01")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChapterTitle_IntroCh09Epi02"))
	{
		return 0;
	}
	if (((((((((((((((((((GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewDaysLater") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewDaysLater_onblack")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewHoursLater")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewHoursLater_onblack")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewMonthsLater")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewMonthsLater_onblack")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewWeeksLater")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewWeeksLater_onblack")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_coupledayslater")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_coupledayslater_onblack")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_couplemonthslater")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_couplemonthslater_onblack")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_coupleweekslater")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_coupleweekslater_onblack")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_daylater")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_daylater_onblack")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_somedaysLater")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_somedaysLater_onblack")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_someyearsLater")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_someyearsLater_onblack"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "player_crafting_active"))
	{
		if (DECORATOR::DECOR_GET_BOOL(PLAYER::PLAYER_PED_ID(), "player_crafting_active"))
		{
			return 0;
		}
	}
	if (func_24(&Global_1935630, 4096))
	{
		return 0;
	}
	if (Global_1392040->f_6)
	{
		return 0;
	}
	if (UIAPPS::_IS_APP_ACTIVE(1833066477) || UIAPPS::_IS_APP_RUNNING(1833066477))
	{
		return 0;
	}
	if (func_24(&Global_1935630, 16384) || STREAMING::_0x99F92061EFE908BA())
	{
		return 0;
	}
	if (func_27(func_26(func_25())))
	{
		if (&Global_40.f_9384[func_26(func_25()) /*2*/] == 256)
		{
			return 0;
		}
	}
	if ((GRAPHICS::ANIMPOSTFX_IS_RUNNING("MissionChoice") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerHonorChoiceGood")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerHonorChoiceBad"))
	{
		return 0;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-1799469283) > 0)
	{
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			return 0;
		}
	}
	if (func_28() || func_29())
	{
		return 0;
	}
	if (CAM::_0x139EFB0A71DD9011())
	{
		return 0;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-92416669) > 0)
	{
		return 0;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1433015236) > 0)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-2055369659) > 0)
	{
		if (func_30(Global_35, -3704.772f, -2616.527f, -14.9239f, 1) < 4f)
		{
			return 0;
		}
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-580465115) > 0)
	{
		if (func_30(Global_35, 2435.137f, -1225.753f, 44.8932f, 1) < 4f)
		{
			return 0;
		}
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-2124103932) > 0)
	{
		if (func_30(Global_35, -1786.264f, -423.6425f, 154.3952f, 1) < 4f)
		{
			return 0;
		}
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-1176988783) > 0)
	{
		if (func_30(Global_35, 2674.925f, -1389.901f, 45.4948f, 1) < 4f)
		{
			return 0;
		}
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-1389645547) > 0)
	{
		if (func_30(Global_35, 2944.418f, 1337.022f, 43.1089f, 1) < 4f)
		{
			return 0;
		}
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-130809593) > 0)
	{
		if (func_30(Global_35, 2644.537f, -1209.317f, 52.3504f, 1) < 4f)
		{
			return 0;
		}
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-651201458) > 0)
	{
		if (func_30(Global_35, 2780.151f, -1310.231f, 45.5924f, 1) < 4f)
		{
			return 0;
		}
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-2036486134) > 0)
	{
		if (func_30(Global_35, -283.7343f, 865.7388f, 120.1339f, 1) < 10f)
		{
			return 0;
		}
	}
	return 1;
}

void func_4(var uParam0, var uParam1)
{
	if (func_15(Global_43889))
	{
		AUDIO::_0x64B956F4E761DF5C(1);
		func_31();
	}
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam1);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Local_29.f_156);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Local_29.f_157);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Local_29.f_158);
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1935689->f_10217))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689->f_10217, Local_29.f_166);
	}
	if (func_23() == -1)
	{
		func_32();
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_5()
{
	int iVar0;

	if (func_33(0, 1, 0))
	{
		return 0;
	}
	if (func_34(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return 0;
	}
	if (PED::_0x336B3D200AB007CB(Global_35, Global_36, 50f, 0) > 0)
	{
		return 0;
	}
	if (!func_35())
	{
		return 0;
	}
	if (func_36())
	{
		return 0;
	}
	if (func_37() > 0)
	{
		return 0;
	}
	if (Global_1914319->f_18941.f_17)
	{
		return 0;
	}
	iVar0 = func_38(0);
	if (func_15(iVar0) && func_39(iVar0) == 8)
	{
		return 0;
	}
	if (func_40(16) || func_41(8192))
	{
		return 0;
	}
	return 1;
}

void func_6(bool bParam0, bool bParam1)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;

	if (func_23() == -1)
	{
		func_42();
	}
	else
	{
		return;
	}
	func_43();
	Global_40.f_9.f_14 = func_44();
	Global_40.f_9.f_20 = LAW::_GET_BOUNTY_FOR_PLAYER(PLAYER::GET_PLAYER_INDEX());
	Global_40.f_11999 = SAVE::_0xB00CE33465B5406D(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (func_45())
		{
			func_46(Global_1310720->f_1);
		}
		else if (func_47() == func_48(Global_36, 1) && func_49() != 2)
		{
			func_46(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_46(Global_36);
		}
		func_50(Global_36, &vVar0, &uVar4);
		if (!func_45())
		{
			if (func_51(vVar0, Global_36) < func_51(Global_40.f_9.f_7, Global_36))
			{
				func_46(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = func_48(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		func_50(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		MISC::OVERRIDE_SAVE_HOUSE(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		func_52(Global_1935630, 8192);
	}
	func_53();
}

int func_7()
{
	if (func_33(0, 0, 1))
	{
		return 0;
	}
	if (func_54())
	{
		return 0;
	}
	if (func_34(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return 0;
	}
	if (PLAYER::_0x72AD59F7B7FB6E24(PLAYER::GET_PLAYER_INDEX(), 5000))
	{
		return 0;
	}
	if (PED::_0x336B3D200AB007CB(Global_35, Global_36, 50f, 0) > 0)
	{
		return 0;
	}
	if (Global_1934266->f_60)
	{
		return 0;
	}
	if (Global_16)
	{
		return 0;
	}
	if (Global_1914319->f_18969)
	{
		return 0;
	}
	if (&Global_1956582)
	{
		return 0;
	}
	if (func_55(0))
	{
		return 0;
	}
	if (func_56())
	{
		return 0;
	}
	if (func_57())
	{
		return 0;
	}
	if (Global_1357549->f_1641 > 1)
	{
		return 0;
	}
	if (func_15(Global_43889))
	{
		return 0;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(27496334) > 0)
	{
		return 0;
	}
	if (func_58())
	{
		return 0;
	}
	if (PED::IS_PED_FALLING(Global_35))
	{
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(Global_35, true))
	{
		return 0;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(&Global_1900073, false))
	{
		return 0;
	}
	if (func_59())
	{
		return 0;
	}
	if (Global_36559 >= 2 && Global_36559 <= 5)
	{
		return 0;
	}
	if (func_41(4096))
	{
		return 0;
	}
	if (func_40(16) || func_41(8192))
	{
		return 0;
	}
	return 1;
}

void func_8(var uParam0)
{
	if (Global_43890)
	{
		return;
	}
}

void func_9(var uParam0)
{
	struct<2> Var0;
	char* sVar2;
	int iVar3;

	if (func_60(76))
	{
		Var0 = { func_61(909007663, 1325140787) };
		STATS::_0x91A4F58E01ED5E4C(&Var0, 6);
		Var0 = { func_61(909007663, 2101241783) };
		STATS::_0x91A4F58E01ED5E4C(&Var0, 22);
		Var0 = { func_61(909007663, -1296936294) };
		STATS::_0x91A4F58E01ED5E4C(&Var0, 19);
		Var0 = { func_61(909007663, -798388728) };
		STATS::_0x91A4F58E01ED5E4C(&Var0, 12);
		Var0 = { func_61(909007663, -1787586531) };
		STATS::_0x91A4F58E01ED5E4C(&Var0, 6);
		Var0 = { func_61(909007663, -1002834519) };
		STATS::_0x91A4F58E01ED5E4C(&Var0, 18);
		Var0 = { func_61(909007663, -50600144) };
		STATS::_0x91A4F58E01ED5E4C(&Var0, 1);
		Var0 = { func_61(909007663, -348503123) };
		STATS::_0x91A4F58E01ED5E4C(&Var0, 8);
		Var0 = { func_61(909007663, -528798161) };
		STATS::_0x91A4F58E01ED5E4C(&Var0, 15);
		Var0 = { func_61(909007663, 532323983) };
		STATS::_0x91A4F58E01ED5E4C(&Var0, 107);
		func_53();
	}
	uParam0->f_158 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "progress");
	sVar2 = func_64(func_63(func_62(joaat("total_progress_made"))), 1, 0);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_158, "completionPercent", MISC::_CREATE_VAR_STRING(6, "PM_SCR_PROG_PERCENT", sVar2));
	uParam0->f_161 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_158, "label", "");
	uParam0->f_162 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_158, "description", "");
	uParam0->f_163 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_158, "descriptionVisible", false);
	uParam0->f_164 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_158, "textureName", "");
	uParam0->f_165 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_158, "textureTxd", -637848863);
	uParam0->f_159 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_158, "itemList");
	iVar3 = 0;
	while (iVar3 < 40)
	{
		func_65(uParam0, iVar3);
		iVar3++;
	}
}

float func_10()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_66())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_67(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_68())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_69())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_67(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_70();
	fVar2 = func_71();
	fVar3 = func_72();
	fVar4 = func_73();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_74()));
	fVar7 = (func_67(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_75(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_76(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_67(0);
	}
	return func_77(fVar7, -100f, 100f);
}

void func_11(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_78(iParam0, 0, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[0]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[0]), bParam2);
}

float func_12()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_66())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_67(1);
	}
	if (Global_1347477->f_119)
	{
		return func_67(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_70();
	fVar2 = func_71();
	fVar3 = func_72();
	fVar4 = func_73();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_74()));
	fVar7 = (func_67(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_75(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_76(2, fVar9, fVar9 > 100f);
	return func_77(fVar7, -100f, 100f);
}

float func_13()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_66())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_67(2);
	}
	if (Global_1347477->f_119)
	{
		return func_67(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_70();
	fVar2 = func_71();
	fVar3 = func_72();
	fVar4 = func_73();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_74()));
	fVar7 = (func_67(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_75(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_76(3, fVar9, fVar9 > 100f);
	return func_77(fVar7, -100f, 100f);
}

void func_14()
{
	func_79(2, 3, 0);
	func_79(6, 18, 0);
	func_79(34, 13, 1);
	func_79(34, 19, 1);
	func_79(34, 26, 1);
	func_79(34, 13, 0);
	func_79(34, 19, 0);
	func_79(34, 26, 0);
}

bool func_15(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

void func_16(var uParam0)
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
				case -2075827635:
					switch (Var0.f_2)
					{
						case 1979383369:
							break;
						case 2084001267:
							break;
					}
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					break;
				case -1740156697:
					switch (Var0.f_2)
					{
						case -1330172908:
							break;
						case 1238474784:
							break;
						case 248393197:
							func_80(Var0.f_3);
							break;
						case 1537860827:
							func_81(uParam0, &Var0);
							break;
					}
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					break;
				case -1203660660:
					switch (Var0.f_2)
					{
						case -385109718:
							func_82();
							break;
						case -609314343:
							func_83();
							break;
						case 1371972537:
							func_84();
							break;
						case -17440837:
							func_85();
							break;
						case -1123713079:
							func_86();
							break;
						case -1332231262:
							break;
						case 2096096105:
							break;
						case -1086656831:
							break;
						case 1777696068:
							break;
						case 891622121:
							break;
						case 792408241:
							break;
						case 1070621771:
							break;
						case 1320195282:
							uParam0->f_167 = 1;
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

int func_17(var uParam0, var uParam1)
{
	vector3 vVar0;
	int iVar4;

	iVar4 = -4325789;
	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar4))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iVar4, &vVar0))
		{
			switch (vVar0.x)
			{
				case -1203660660:
					if (vVar0.z == 270525852)
					{
						uParam0->f_155 = !uParam0->f_155;
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_156, uParam0->f_155);
					}
					else if (vVar0.z == 920946524)
					{
						if (func_15(*uParam1))
						{
							return *uParam1;
						}
					}
					break;
				case -1740156697:
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_157, STATS::_0x4DAC398297981B87(vVar0.z));
					*uParam1 = func_87(vVar0.z);
					break;
				default:
					break;
			}
			UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
		}
	}
	return -1;
}

int func_18()
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

void func_19(var uParam0)
{
}

void func_20()
{
	func_88(1);
	func_89();
}

void func_21(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return;
	}
	if (!SCRIPTS::DOES_SCRIPT_WITH_NAME_HASH_EXIST(iParam0))
	{
		return;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iParam0) != 0)
	{
		SCRIPTS::SCRIPT_THREAD_ITERATOR_RESET();
		iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
		while (iVar0 != 0)
		{
			if (iParam0 == SCRIPTS::_GET_HASH_OF_THREAD(iVar0))
			{
				if (SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
				{
					PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iVar0, iParam1);
				}
			}
			iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
		}
	}
}

void func_22()
{
	struct<10> Var0;
	struct<16> Var10;

	if (func_2())
	{
		MISC::CLEAR_BIT(Global_1357505, 8);
		ANIMSCENE::_0xCDCD7B2D49AEE73A(1);
		GRAPHICS::_0xEC3D8C228FE553D7(0);
		Global_1357503 = 1;
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "camera_photomode", 32);
		Var10.f_14 = 1024;
		Var10.f_15 = 0;
		func_90(Var10, 0);
	}
}

int func_23()
{
	return Global_1572887->f_12;
}

bool func_24(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_25()
{
	return Global_1894899->f_2;
}

int func_26(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 7;
		case 79:
			return 0;
		case 43:
			return 1;
		case 98:
			return 2;
		case 58:
			return 3;
		case 71:
			return 4;
		case 4:
			return 5;
		case 76:
			return 8;
		case 9:
			return 6;
		case 5:
			return 9;
		case 38:
			return 10;
		case 105:
			return 11;
		case 92:
			return 12;
		case 78:
			return 13;
		case 26:
			return 14;
		case 37:
			return 15;
		case 115:
			return 16;
		default:
			break;
	}
	return -1;
}

bool func_27(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

bool func_28()
{
	return (Global_1935689->f_1 || &Global_1935689 == 1);
}

var func_29()
{
	return Global_1935689->f_1;
}

float func_30(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_31()
{
	Global_0.f_6 = MISC::GET_GAME_TIMER();
	Global_0.f_3 = { Global_36 };
	func_91(&Global_0);
}

void func_32()
{
	if (func_23() != -1)
	{
		return;
	}
	func_92();
	func_93();
	func_94();
	func_95();
	func_96();
	func_97();
	func_98();
}

int func_33(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (Global_1572887->f_12 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1898164->f_163;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1898164->f_164;
		}
		if (func_99())
		{
			return 1;
		}
		if (Global_1058888->f_3 && !Global_1572887->f_8)
		{
			if (((*Global_1055058)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*116*/])->f_114 && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return 1;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1898164->f_163;
		}
		else
		{
			return Global_1898164->f_164;
		}
	}
	if ((Global_1898164->f_1[0 /*5*/])->f_2 == 8)
	{
		iVar0 = func_100(&(Global_1898164->f_1[0 /*5*/]));
		if (func_101(iVar0) && func_102(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_15(&(Global_1898164->f_1[0 /*5*/])))
	{
		return 1;
	}
	if ((Global_1935630 && 40959 & (-1 - iParam0)) != 0)
	{
		return 1;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < &Global_1898438)
		{
			return 1;
		}
	}
	switch ((Global_1898164->f_1[0 /*5*/])->f_2)
	{
		case 0:
			return 0;
		case 1:
			return iParam0 & 1 == 0;
		case 4:
			return iParam0 & 2 == 0;
		case 6:
			return iParam0 & 4 == 0;
		case 2:
			return iParam0 & 16 == 0;
		case 5:
			return iParam0 & 32 == 0;
		case 9:
			return iParam0 & 64 == 0;
		case 8:
			return iParam0 & 8 == 0;
		case 10:
			return iParam0 & 512 == 0;
		case 3:
			return iParam0 & 128 == 0;
		case 11:
			return iParam0 & 256 == 0;
		default:
			break;
	}
	return 0;
}

int func_34(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_103(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_12 != -1)
	{
		if (iParam0 == Global_1225638->f_10)
		{
			if (!Global_1225638->f_11)
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

int func_35()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

bool func_36()
{
	return Global_1425247->f_53;
}

int func_37()
{
	int iVar0;
	int iVar1;

	if (Global_1572887->f_12 != -1)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 50)
	{
		if (&Global_1357549->f_1252[iVar1 /*3*/] != 0)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_38(int iParam0)
{
	return &(Global_1898164->f_1[iParam0 /*5*/]);
}

int func_39(int iParam0)
{
	if (!func_15(iParam0))
	{
		return 0;
	}
	return func_105(func_104(iParam0));
}

bool func_40(int iParam0)
{
	return (Global_1392040 && iParam0) != 0;
}

bool func_41(int iParam0)
{
	return (Global_1392040->f_1 && iParam0) != 0;
}

void func_42()
{
	if (func_23() != -1)
	{
		return;
	}
	if (!func_35())
	{
		return;
	}
	func_106(&(Global_40.f_40));
}

void func_43()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_40.f_11029)
	{
		if (VEHICLE::_0xC29996A337BDD099(((*Global_1425371)[iVar0 /*373*/])->f_1))
		{
			(Global_40.f_11029[iVar0 /*5*/])->f_1 = { VEHICLE::_0x1E8A921112891651(((*Global_1425371)[iVar0 /*373*/])->f_1) };
			(Global_40.f_11029[iVar0 /*5*/])->f_4 = VEHICLE::_0x67995318F5FAA496(((*Global_1425371)[iVar0 /*373*/])->f_1);
		}
		iVar0++;
	}
}

int func_44()
{
	return &Global_1899515;
}

bool func_45()
{
	return !func_107(Global_1310720->f_1);
}

void func_46(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

int func_47()
{
	return Global_40.f_4283.f_1;
}

int func_48(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_25();
	if (func_108(iVar0))
	{
		if (VOLUME::_0xF256A75210C5C0EB(((*Global_1888801)[iVar0 /*35*/])->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_109(vParam0, iParam3);
}

int func_49()
{
	return Global_40.f_4283.f_4;
}

void func_50(vector3 vParam0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;

	fVar0 = 1E+07f;
	fVar1 = 1E+07f;
	if (func_110())
	{
		fVar0 = func_111(vParam0, Global_40.f_6);
	}
	if (func_40(33554432))
	{
		if (!func_112(Global_40.f_2, 0f, 0f, 0f, 1056964608 /* Float: 0.5f */, 1))
		{
			fVar1 = func_111(vParam0, Global_40.f_2);
		}
	}
	if (fVar1 > 150f && fVar0 > 150f)
	{
		*uParam3 = { Global_36 };
		*uParam4 = 6;
		return;
	}
	if (fVar0 < fVar1)
	{
		*uParam3 = { Global_40.f_6 };
		*uParam4 = 1;
	}
	else
	{
		*uParam3 = { Global_40.f_2 };
		*uParam4 = 3;
	}
}

float func_51(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_52(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_53()
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	struct<2> Var6;
	float fVar8;
	int iVar9[50];
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;

	if (!func_24(&Global_1935630, 8192))
	{
		return;
	}
	if (func_113(32768))
	{
		return;
	}
	func_114(Global_1935630, 8192);
	fVar0 = 0f;
	fVar0 = (fVar0 + (0.9259259f * BUILTIN::TO_FLOAT(func_115(909007663, 1325140787))));
	fVar0 = (fVar0 + (0.2525252f * BUILTIN::TO_FLOAT(func_115(909007663, 2101241783))));
	fVar0 = (fVar0 + (0.2923976f * BUILTIN::TO_FLOAT(func_115(909007663, -1296936294))));
	fVar0 = (fVar0 + (0.462963f * BUILTIN::TO_FLOAT(func_115(909007663, -798388728))));
	fVar0 = (fVar0 + (0.9259259f * BUILTIN::TO_FLOAT(func_115(909007663, -1787586531))));
	fVar0 = (fVar0 + (0.308642f * BUILTIN::TO_FLOAT(func_115(909007663, -1002834519))));
	fVar0 = (fVar0 + (5.555555f * BUILTIN::TO_FLOAT(func_115(909007663, -50600144))));
	fVar0 = (fVar0 + (0.6944444f * BUILTIN::TO_FLOAT(func_115(909007663, -348503123))));
	fVar0 = (fVar0 + (0.3703704f * BUILTIN::TO_FLOAT(func_115(909007663, -528798161))));
	fVar0 = (fVar0 + (0.5f * func_116(10f, BUILTIN::TO_FLOAT(func_115(909007663, 551192206)))));
	fVar0 = (fVar0 + (0.6f * func_116(5f, BUILTIN::TO_FLOAT(func_115(909007663, -406093146)))));
	fVar0 = (fVar0 + (0.2f * func_116(25f, BUILTIN::TO_FLOAT(func_117(-1029789297)))));
	fVar0 = (fVar0 + (2f * func_116(1f, BUILTIN::TO_FLOAT(func_117(-843295694)))));
	fVar0 = (fVar0 + (0.3333333f * func_116(6f, BUILTIN::TO_FLOAT(func_117(64058978)))));
	fVar0 = (fVar0 + (3f * func_116(1f, BUILTIN::TO_FLOAT(func_117(795577402)))));
	iVar1 = func_118();
	fVar0 = (fVar0 + (0.1111111f * func_116(9f, BUILTIN::TO_FLOAT(iVar1))));
	fVar2 = (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 1665658745)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 1665658745)));
	fVar2 = func_119(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -263938772)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -263938772))));
	fVar2 = func_119(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 228647253)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 228647253))));
	fVar2 = func_119(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 1695604435)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 1695604435))));
	fVar2 = func_119(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -379038926)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -379038926))));
	fVar2 = func_119(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 1597499323)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 1597499323))));
	fVar2 = func_119(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -278663717)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -278663717))));
	fVar2 = func_119(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 586249988)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 586249988))));
	fVar2 = func_119(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -419800938)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -419800938))));
	fVar2 = func_119(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -1362069171)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -1362069171))));
	fVar2 = func_119(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, -740350755)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -740350755))));
	fVar2 = func_119(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, 1511070393)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 1511070393))));
	fVar0 = (fVar0 + func_116(1f, fVar2));
	fVar0 = (fVar0 + (0.05f * func_116(BUILTIN::TO_FLOAT(20), BUILTIN::TO_FLOAT(func_120()))));
	if (func_121(40))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_121(42))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_121(48))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_121(50))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_121(52))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	fVar2 = (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, 499813453)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, 499813453)));
	fVar2 = func_119(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, 666607663)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, 666607663))));
	fVar2 = func_119(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, -220219788)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, -220219788))));
	fVar2 = func_119(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, 218622660)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, 218622660))));
	fVar2 = func_119(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, 390004462)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, 390004462))));
	fVar2 = func_119(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(1765845133, 6410548)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(1765845133, 6410548))));
	fVar0 = (fVar0 + (1f * func_116(1f, fVar2)));
	fVar0 = (fVar0 + (0.2f * func_116(5f, BUILTIN::TO_FLOAT(func_117(1933084904)))));
	fVar0 = (fVar0 + (0.2f * func_116(5f, BUILTIN::TO_FLOAT(func_115(-1756227506, -734935893)))));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_122(COMPENDIUM::_0x729D52F61A5A9E22(1979337996), 50)) / BUILTIN::TO_FLOAT(50)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_122(COMPENDIUM::_0x729D52F61A5A9E22(-2125891426), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_122(COMPENDIUM::_0x729D52F61A5A9E22(joaat("fish")), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + COMPENDIUM::_0x725D52F21A5E9E22(joaat("gangs")));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_122(COMPENDIUM::_0x729D52F61A5A9E22(1807539419), 20)) / BUILTIN::TO_FLOAT(20)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_122(COMPENDIUM::_0x729D52F61A5A9E22(717108105), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_122(COMPENDIUM::_0x729D52F61A5A9E22(joaat("weapons")), 48)) / BUILTIN::TO_FLOAT(48)));
	func_123(&iVar3, &iVar4);
	fVar0 = (fVar0 + (2f * func_116((BUILTIN::TO_FLOAT(iVar3) / BUILTIN::TO_FLOAT(iVar4)), 1f)));
	fVar0 = (fVar0 + (2f * func_116(1f, BUILTIN::TO_FLOAT(func_124(-2116919750)))));
	fVar5 = BUILTIN::TO_FLOAT(func_125());
	fVar0 = (fVar0 + ((3f * fVar5) / BUILTIN::TO_FLOAT(9)));
	fVar0 = (fVar0 + ((1f / 4f) * func_116(1f, BUILTIN::TO_FLOAT(func_115(joaat("attempts"), -747096482)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_116(1f, BUILTIN::TO_FLOAT(func_115(joaat("attempts"), 549911940)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_116(1f, BUILTIN::TO_FLOAT(func_115(joaat("attempts"), -760820978)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_116(1f, BUILTIN::TO_FLOAT(func_115(joaat("attempts"), -1672018311)))));
	fVar0 = (fVar0 + (0.2f * func_116(5f, BUILTIN::TO_FLOAT(func_117(-1342635612)))));
	fVar0 = (fVar0 + (0.5f * func_116(1f, BUILTIN::TO_FLOAT(func_117(-2061916883)))));
	fVar0 = (fVar0 + (0.5f * func_116(1f, BUILTIN::TO_FLOAT(func_117(281346304)))));
	fVar0 = (fVar0 + (0.5f * func_116(1f, BUILTIN::TO_FLOAT(func_117(-299021541)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_116(1f, BUILTIN::TO_FLOAT(func_115(-1276738576, joaat("ammo"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_116(1f, BUILTIN::TO_FLOAT(func_115(-1276738576, -1555359431)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_116(1f, BUILTIN::TO_FLOAT(func_115(-1276738576, 644069854)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_116(1f, BUILTIN::TO_FLOAT(func_115(-1276738576, -97115714)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_116(1f, BUILTIN::TO_FLOAT(func_115(-1276738576, joaat("weapons"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_116(1f, BUILTIN::TO_FLOAT(func_115(-1276738576, 1455184052)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_116(1f, BUILTIN::TO_FLOAT(func_115(978382515, joaat("coach"))))));
	fVar0 = (fVar0 + ((1f / 4f) * func_116(1f, BUILTIN::TO_FLOAT(func_115(978382515, 574993838)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_116(1f, BUILTIN::TO_FLOAT(func_115(978382515, joaat("shop"))))));
	fVar0 = (fVar0 + ((1f / 4f) * func_116(1f, BUILTIN::TO_FLOAT(func_115(978382515, joaat("train"))))));
	Var6 = { func_62(joaat("total_progress_made")) };
	fVar8 = func_63(Var6);
	STATS::_0xE141F6B40B1E3683(&Var6, fVar0);
	if (fVar0 > fVar8)
	{
	}
	if (func_15(&Global_1898437))
	{
		iVar60 = 0;
		iVar61 = 0;
		while (iVar61 < &Global_1898329)
		{
			if (!func_15(Global_1898330[iVar61]))
			{
			}
			else
			{
				iVar62 = func_126(Global_1898330[iVar61]);
				if (iVar62 == 3 || iVar62 == 4)
				{
				}
				else if (iVar62 != 1 && iVar62 != 2)
				{
					func_127(Global_1898330[iVar61]);
				}
				else
				{
					func_128(iVar61, 0);
					if (func_39(Global_1898330[iVar61]) == 1)
					{
						iVar9[iVar60] = func_129(Global_1898330[iVar61]);
						iVar60++;
						if (iVar60 >= 50)
						{
						}
						else
						{
							iVar61++;
						}
						if (iVar60 < 50)
						{
							iVar63 = 0;
							while (iVar63 < Global_40.f_450)
							{
								if (&Global_40.f_450[iVar63] > -1 && &Global_40.f_450[iVar63] < 200)
								{
									iVar9[iVar60] = func_129(((*Global_1347702)[&Global_40.f_450[iVar63] /*49*/])->f_15);
									iVar60++;
									if (iVar60 >= 50)
									{
									}
									else
									{
										iVar63++;
									}
									if (fVar0 > fVar8)
									{
										TELEMETRY::_0x51EC204A6E5B5A1A(func_129(&Global_1898437), &iVar9);
									}
								}
							}
						}
					}
				}
			}
		}
	}

int func_54()
{
	if (func_23() != -1)
	{
		return 0;
	}
	if (!func_35())
	{
		return 0;
	}
	if (!func_130(((*Global_1835011)[1 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_130(((*Global_1835011)[2 /*74*/])->f_1, 1) && func_130(((*Global_1347702)[120 /*49*/])->f_15, 1)) && !func_130(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_130(((*Global_1835011)[37 /*74*/])->f_1, 1) && !func_130(((*Global_1835011)[39 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_130(((*Global_1835011)[57 /*74*/])->f_1, 1) && !func_130(((*Global_1835011)[60 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_130(((*Global_1835011)[26 /*74*/])->f_1, 1) && !func_130(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if ((func_130(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_130(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_130(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_130(((*Global_1835011)[75 /*74*/])->f_1, 1) && !func_130(((*Global_1347702)[1 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if (func_130(((*Global_1835011)[76 /*74*/])->f_1, 1) && !func_130(((*Global_1835011)[77 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_130(((*Global_1835011)[40 /*74*/])->f_1, 1) && func_130(((*Global_1835011)[41 /*74*/])->f_1, 1)) && !func_130(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_130(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_130(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_130(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_130(((*Global_1835011)[65 /*74*/])->f_1, 1) && func_130(((*Global_1835011)[66 /*74*/])->f_1, 1)) && !func_130(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 1;
	}
	return 0;
}

bool func_55(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319->f_17370;
	}
	return (Global_1914319->f_17370 || Global_1914319->f_18996.f_1);
}

bool func_56()
{
	return MISC::IS_BIT_SET(Global_1357549->f_1893, 0);
}

int func_57()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-92416669) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_58()
{
	return &Global_1935436 == 2;
}

int func_59()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 0;
	}
	if (!PED::_IS_PED_CARRYING(Global_35))
	{
		return 0;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar0);
	iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar0);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0));
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		else if (PERSISTENCE::_0xCFDA2518F322D836(iVar1))
		{
			ITEMSET::DESTROY_ITEMSET(iVar0);
			return 1;
		}
		iVar2++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return 0;
}

bool func_60(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_130(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
	}
	return (UNLOCK::_UNLOCK_IS_UNLOCKED(((*Global_1835011)[iParam0 /*74*/])->f_2) && !UNLOCK::_UNLOCK_IS_VISIBLE(((*Global_1835011)[iParam0 /*74*/])->f_2));
}

struct<2> func_61(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

struct<2> func_62(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

float func_63(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_FLOAT(&uParam0, &uVar0);
	return uVar0;
}

float func_64(float fParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	bVar0 = fParam0 >= 0f;
	iVar1 = BUILTIN::FLOOR(BUILTIN::POW(10f, BUILTIN::TO_FLOAT(iParam1)));
	fVar2 = (fParam0 * IntToFloat(iVar1));
	if (bParam2)
	{
		fVar2 = BUILTIN::TO_FLOAT(BUILTIN::CEIL(fVar2));
	}
	else
	{
		fVar2 = BUILTIN::TO_FLOAT(BUILTIN::FLOOR(fVar2));
	}
	fVar3 = (fVar2 / IntToFloat(iVar1));
	if (fVar3 < 0f && bVar0)
	{
		fVar3 = (fVar3 * -1f);
	}
	return fVar3;
}

void func_65(var uParam0, int iParam1)
{
	char cVar0[32];
	var uVar4;
	int iVar5;

	MISC::_INT_TO_STRING(iParam1, "%u", &cVar0);
	uVar4 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_158, &cVar0);
	if (func_131(iParam1))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar4, "label", func_132(iParam1));
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_159, iParam1, "itemEntryGroup", uVar4);
	}
	else
	{
		StringCopy(&cVar0, func_133(iParam1, &iVar5), 32);
		switch (iVar5)
		{
			case 0:
			case 2:
				if (func_134(iParam1, iVar5))
				{
					DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar4, "label", func_132(iParam1));
					DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar4, "value", &cVar0);
					DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar4, "isActive", true);
				}
				else
				{
					DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar4, "label", func_135(iParam1));
					DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar4, "value", "");
					DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar4, "isActive", false);
				}
				break;
			case 1:
				DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar4, "label", func_132(iParam1));
				DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar4, "isActive", false);
				DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar4, "value", "");
				DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar4, "textureName", joaat("check"));
				DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar4, "textureTxd", joaat("hud_textures"));
				DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar4, "textureVisible", true);
				break;
		}
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar4, "focus_event_hash", 1537860827);
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_159, iParam1, "itemEntry", uVar4);
	}
}

int func_66()
{
	if (Global_1572887->f_12 != -1)
	{
		return 0;
	}
	return Global_1347477->f_203;
}

float func_67(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

bool func_68()
{
	return func_136(12) <= -99f;
}

bool func_69()
{
	return func_136(12) >= 99f;
}

float func_70()
{
	float fVar0;
	int iVar1;

	fVar0 = func_136(13);
	iVar1 = func_137(fVar0);
	if (iVar1 == 0)
	{
		return 0.15f;
	}
	if (iVar1 == 10 || iVar1 == -10)
	{
		return -0.25f;
	}
	return 0f;
}

float func_71()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_72()
{
	if (func_138())
	{
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_73()
{
	if (Global_40.f_39 == 11966224)
	{
		return 0f;
	}
	if (Global_40.f_11095.f_67 >= 9)
	{
		return -0.2f;
	}
	if (Global_40.f_11095.f_67 >= 7)
	{
		return -0.05f;
	}
	return 0f;
}

float func_74()
{
	return Global_1955565->f_3;
}

void func_75(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_78(iParam0, 1, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[1]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[1]), bParam2);
}

void func_76(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_78(iParam0, 2, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[2]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[2]), bParam2);
	if (fParam1 > 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_20[2]), "RPG_ARROW_DOWN");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_24[2]), "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_28[2]), joaat("COLOR_RED"));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), true);
	}
	else if (fParam1 < 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_20[2]), "RPG_ARROW_UP");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_24[2]), "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_28[2]), joaat("COLOR_WHITE"));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), false);
	}
}

float func_77(float fParam0, float fParam1, float fParam2)
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

char* func_78(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
					{
						return "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
					}
					else
					{
						return func_139(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_139(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
			}
			break;
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
					return "PMPLAYER_CORE_PC_VALUE";
				case 1:
					return "PMPLAYER_TIME_VALUE_MINUTES";
				case 2:
					return "PMPLAYER_CORE_PC_VALUE";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_79(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_140(iParam0);
	iVar1 = func_140(iParam1);
	if (func_141(func_61(joaat("pick"), iVar1)) < 0)
	{
		return;
	}
	if (func_141(func_61(joaat("pick"), iVar0)) > 0)
	{
		if (func_141(func_61(-333926856, iVar0)) >= func_141(func_61(joaat("pick"), iVar0)))
		{
			iVar2 = (func_141(func_61(joaat("pick"), iVar1)) - func_141(func_61(-372368982, iVar1)));
			if (func_141(func_61(-333926856, iVar1)) < iVar2)
			{
				iVar3 = ((func_141(func_61(-333926856, iVar0)) - func_141(func_61(joaat("pick"), iVar0))) - func_141(func_61(-372368982, iVar0)));
				if (iVar3 > 0)
				{
					iVar4 = func_122(iVar3, iVar2);
					iVar4 = func_122((iVar2 - func_141(func_61(-333926856, iVar1))), iVar4);
					func_142(func_61(-333926856, iVar1), iVar4);
					func_143(func_61(-333926856, iVar0), iVar4);
				}
			}
		}
		else if ((func_141(func_61(-333926856, iVar0)) > 0 && func_141(func_61(joaat("pick"), iVar1)) > 0) && func_141(func_61(-333926856, iVar1)) <= 0)
		{
			func_142(func_61(-333926856, iVar1), 1);
			func_143(func_61(-333926856, iVar0), 1);
		}
	}
	else
	{
		iVar5 = func_141(func_61(-333926856, iVar0));
		if (iVar5 > 0)
		{
			iVar6 = (func_141(func_61(joaat("pick"), iVar1)) - func_141(func_61(-372368982, iVar1)));
			if (func_141(func_61(-333926856, iVar1)) < iVar6)
			{
				if (!bParam2 || func_141(func_61(-333926856, iVar1)) < 1)
				{
					iVar7 = func_122(iVar5, iVar6);
					if (bParam2)
					{
						iVar7 = 1;
					}
					else
					{
						iVar7 = func_122((iVar6 - func_141(func_61(-333926856, iVar1))), iVar7);
					}
					func_142(func_61(-333926856, iVar1), iVar7);
					func_143(func_61(-333926856, iVar0), iVar7);
				}
			}
		}
	}
}

void func_80(var uParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0, "rpg_pause_item_index");
	switch (Global_1955569->f_5.f_747)
	{
		case 0:
			func_144(iVar0);
			break;
		case 1:
			func_145(iVar0);
			break;
		case 2:
			func_146(iVar0);
			break;
		case 3:
			func_147(iVar0);
			break;
		case 4:
			func_148(iVar0);
			break;
	}
}

void func_81(var uParam0, var uParam1)
{
	int iVar0;
	char* sVar1;
	char cVar2[128];

	iVar0 = uParam1->f_1;
	sVar1 = DATABINDING::_DATABINDING_READ_DATA_STRING_FROM_PARENT(uParam1->f_3, "label");
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_161, sVar1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_163, true);
	if (func_149(iVar0))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_163, false);
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_160))
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_160);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_164, func_150(iVar0));
		uParam0->f_160 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_158, "checklist");
		func_151(uParam0, iVar0);
	}
	else
	{
		StringCopy(&cVar2, func_132(iVar0), 128);
		StringConCat(&cVar2, "_DESC", 128);
		if (HUD::DOES_TEXT_LABEL_EXIST(&cVar2) && !MISC::_DOES_STRING_EXIST_IN_STRING(sVar1, "Unknown"))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_162, &cVar2);
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_164, func_150(iVar0));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_162, "");
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_164, "UNDISCOVERED");
		}
	}
}

void func_82()
{
	char* sVar0;
	vector3 vVar1[24];
	bool bVar4;

	func_152(1, 1);
	Global_1955569->f_5.f_747 = 0;
	func_154(MISC::_CREATE_VAR_STRING(2, func_153(0)));
	func_155(0, "PMPLAYER_STATISTICS");
	func_156(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0);
	func_156(2, "PMPLAYER_HONOR", "", 1, 0, 1, func_157(Global_40.f_11095.f_35), "pausemenu_player");
	func_155(3, "PMPLAYER_CONDITIONS");
	StringCopy(&cVar1, DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[0])), 24);
	bVar4 = DATABINDING::_DATABINDING_READ_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[0]));
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_12[0]));
	if (bVar4)
	{
		func_156(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 1, bVar4, &cVar1, "pausemenu_player");
	}
	else
	{
		func_156(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 0, 0, 0, 0);
	}
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_12[1]));
	if (func_69())
	{
		func_156(5, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 1, 1, "rpg_hot", "pausemenu_player");
	}
	else if (func_68())
	{
		func_156(5, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 1, 1, "rpg_cold", "pausemenu_player");
	}
	else
	{
		func_156(5, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 0, 0, 0, 0);
	}
	if (Global_40.f_11095.f_43)
	{
		func_156(6, "PMPLAYER_CONDITION_TOXICITY", MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CONDITION_TOXICITY_POISONED"), 1, 1, 1, "rpg_sick", "pausemenu_player");
	}
	else
	{
		func_156(6, "PMPLAYER_CONDITION_TOXICITY", "", 0, 0, 0, 0, 0);
	}
	func_158(7);
	func_155(8, "PMPLAYER_PERKS");
	func_159(9, -121629511 /* GXTEntry: "Raven Claw Talisman" */, "PROVISION_TALISMAN_RAVEN_CLAW");
	func_159(10, -224110471 /* GXTEntry: "Beaver Tooth Trinket" */, "PROVISION_TRINKET_BEAVER_TOOTH");
	func_159(11, -935153695 /* GXTEntry: "Fox Claw Trinket" */, "PROVISION_TRINKET_FOX_CLAW");
	func_159(12, -269048282 /* GXTEntry: "Buck Antler Trinket" */, "PROVISION_TRINKET_BUCK_ANTLER");
	func_159(13, 1816443627 /* GXTEntry: "Ram Horn Trinket" */, "PROVISION_TRINKET_RAM_HORN");
	func_159(14, -127011478 /* GXTEntry: "Wolf Heart Trinket" */, "PROVISION_TRINKET_WOLF_HEART");
	func_159(15, 1620353486 /* GXTEntry: "Pronghorn Horn Trinket" */, "PROVISION_TRINKET_PRONGHORN_ANTLER");
	if (func_138())
	{
		func_159(16, -615217896 /* GXTEntry: "Eagle Talon Talisman" */, "PROVISION_TALISMAN_EAGLE_TALON");
	}
	if (func_2())
	{
		func_159(17, -1056342069 /* GXTEntry: "Cat Eye Trinket" */, "PROVISION_TRINKET_CAT_EYE");
		func_159(18, -1196089647 /* GXTEntry: "Shark Tooth Trinket" */, "PROVISION_TRINKET_SHARK_TOOTH");
		func_159(19, 611073244 /* GXTEntry: "Crow Beak Trinket" */, "PROVISION_TRINKET_CROW_BEAK");
	}
	func_159(20, -172243588 /* GXTEntry: "Ancient Arrowhead" */, "PROVISION_DISCO_ARROWHEAD_02");
	func_159(21, 1950809992 /* GXTEntry: "Farm, Field and Falconry" */, "DOCUMENT_FIELD_MANUAL");
	func_159(22, 2131771850, "CLOTHING_LEGENDARY_EAST_OUTFIT");
	func_160(0);
	func_161(0);
	func_144(1);
}

void func_83()
{
	char* sVar0;
	int iVar1;
	vector3 vVar2[24];
	bool bVar5;

	Global_1955569->f_5.f_747 = 1;
	func_152(1, 1);
	func_154(MISC::_CREATE_VAR_STRING(2, func_153(1)));
	func_155(0, "PMPLAYER_STATISTICS");
	func_156(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0);
	iVar1 = func_162(0);
	func_156(2, "PMPLAYER_PROGRESSION", MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_LEVEL", iVar1 + 1), 1, 0, 0, 0, 0);
	func_155(3, "PMPLAYER_CONDITIONS");
	StringCopy(&cVar2, DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[0])), 24);
	bVar5 = DATABINDING::_DATABINDING_READ_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[0]));
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_12[0]));
	if (bVar5)
	{
		func_156(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 1, bVar5, &cVar2, "pausemenu_player");
	}
	else
	{
		func_156(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 0, 0, 0, 0);
	}
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_12[1]));
	if (func_69())
	{
		func_156(5, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 1, 1, "rpg_hot", "pausemenu_player");
	}
	else if (func_68())
	{
		func_156(5, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 1, 1, "rpg_cold", "pausemenu_player");
	}
	else
	{
		func_156(5, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 0, 0, 0, 0);
	}
	if (Global_40.f_11095.f_43)
	{
		func_156(6, "PMPLAYER_CONDITION_TOXICITY", MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CONDITION_TOXICITY_POISONED"), 1, 1, 1, "rpg_sick", "pausemenu_player");
	}
	else
	{
		func_156(6, "PMPLAYER_CONDITION_TOXICITY", "", 0, 0, 0, 0, 0);
	}
	func_158(7);
	func_155(8, "PMPLAYER_PERKS");
	func_159(9, 1289585739 /* GXTEntry: "Tatanka Bison Horn Trinket" */, "PROVISION_TRINKET_BISON_HORN");
	func_159(10, 1631240196 /* GXTEntry: "Moose Antler Trinket" */, "PROVISION_TRINKET_MOOSE_ANTLER");
	func_159(11, -832719552 /* GXTEntry: "Bear Claw Talisman" */, "PROVISION_TALISMAN_BEAR_CLAW");
	func_159(12, 1768869276 /* GXTEntry: "Owl Feather Trinket" */, "PROVISION_TRINKET_OWL_FEATHER");
	if (func_138())
	{
		func_159(13, 655868243 /* GXTEntry: "Iguana Scale Trinket" */, "PROVISION_TRINKET_IGUANA_SCALE");
	}
	if (func_2())
	{
		func_159(14, -982895431 /* GXTEntry: "Turtle Shell Trinket" */, "PROVISION_TRINKET_TURTLE_SHELL");
	}
	func_159(15, 2131771850, "CLOTHING_LEGENDARY_EAST_OUTFIT");
	func_160(0);
	func_161(0);
	func_145(1);
	func_163("PMPLAYER_HEALTH_OVERVIEW_TOOLTIP");
}

void func_84()
{
	char* sVar0;
	int iVar1;
	vector3 vVar2[24];
	bool bVar5;

	Global_1955569->f_5.f_747 = 2;
	func_152(1, 1);
	func_154(MISC::_CREATE_VAR_STRING(2, func_153(2)));
	func_155(0, "PMPLAYER_STATISTICS");
	func_156(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0);
	iVar1 = func_162(1);
	func_156(2, "PMPLAYER_PROGRESSION", MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_LEVEL", iVar1 + 1), 1, 0, 0, 0, 0);
	func_155(3, "PMPLAYER_CONDITIONS");
	StringCopy(&cVar2, DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[0])), 24);
	bVar5 = DATABINDING::_DATABINDING_READ_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[0]));
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_12[0]));
	if (bVar5)
	{
		func_156(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 1, bVar5, &cVar2, "pausemenu_player");
	}
	else
	{
		func_156(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 0, 0, 0, 0);
	}
	func_158(5);
	func_155(6, "PMPLAYER_PERKS");
	func_159(7, 1299744282 /* GXTEntry: "Lion\'s Paw Trinket" */, "PROVISION_TRINKET_LION_PAW");
	func_159(8, 1441506783 /* GXTEntry: "Cougar Fang Trinket" */, "PROVISION_TRINKET_COUGAR_FANG");
	func_159(9, -1941112926 /* GXTEntry: "Bison Horn Talisman" */, "PROVISION_TALISMAN_BUFFALO_HORN");
	func_159(10, 1768869276 /* GXTEntry: "Owl Feather Trinket" */, "PROVISION_TRINKET_OWL_FEATHER");
	if (func_2())
	{
		func_159(11, -569248339 /* GXTEntry: "Hawk Talon Trinket" */, "PROVISION_TRINKET_HAWK_TALON");
	}
	func_159(12, 2131771850, "CLOTHING_LEGENDARY_EAST_OUTFIT");
	func_160(0);
	func_161(0);
	func_146(1);
	func_163("PMPLAYER_STAMINA_OVERVIEW_TOOLTIP");
}

void func_85()
{
	char* sVar0;
	int iVar1;
	vector3 vVar2[24];
	bool bVar5;

	Global_1955569->f_5.f_747 = 3;
	func_152(1, 1);
	func_154(MISC::_CREATE_VAR_STRING(2, func_153(3)));
	func_155(0, "PMPLAYER_STATISTICS");
	func_156(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0);
	iVar1 = func_162(2);
	func_156(2, "PMPLAYER_PROGRESSION", MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_LEVEL", iVar1 + 1), 1, 0, 0, 0, 0);
	func_155(3, "PMPLAYER_CONDITIONS");
	StringCopy(&cVar2, DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[0])), 24);
	bVar5 = DATABINDING::_DATABINDING_READ_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[0]));
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_12[0]));
	if (bVar5)
	{
		func_156(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 1, bVar5, &cVar2, "pausemenu_player");
	}
	else
	{
		func_156(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 0, 0, 0, 0);
	}
	func_158(5);
	func_155(6, "PMPLAYER_PERKS");
	func_159(7, -62615415 /* GXTEntry: "Alligator Tooth Talisman" */, "PROVISION_TALISMAN_ALLIGATOR_TOOTH");
	func_159(8, 780305678 /* GXTEntry: "Coyote Fang Trinket" */, "PROVISION_TRINKET_COYOTE_FANG");
	func_159(9, 517396587 /* GXTEntry: "Panther\'s Eye Trinket" */, "PROVISION_TRINKET_PANTHER_EYE");
	func_159(10, 1768869276 /* GXTEntry: "Owl Feather Trinket" */, "PROVISION_TRINKET_OWL_FEATHER");
	func_159(11, 2131771850, "CLOTHING_LEGENDARY_EAST_OUTFIT");
	func_160(0);
	func_161(0);
	func_147(1);
	func_163("PMPLAYER_DEADEYE_OVERVIEW_TOOLTIP");
}

void func_86()
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	char cVar10[64];
	char cVar18[64];
	char cVar26[64];
	char cVar34[64];
	float fVar42;
	var uVar43;
	int iVar44;
	bool bVar45;
	bool bVar46;
	int iVar47;
	int iVar48;
	struct<8> Var50;
	char* sVar58;

	func_152(1, 1);
	Global_1955569->f_5.f_747 = 4;
	iVar0 = -1;
	iVar1 = -1;
	if (func_164(0))
	{
		iVar0 = 0;
	}
	if (func_164(1))
	{
		iVar1 = 1;
	}
	if (func_166(Global_35, func_165(iVar1), 0) || iVar0 == -1)
	{
		iVar0 = iVar1;
	}
	if (iVar0 == -1)
	{
		return;
	}
	StringCopy(&cVar2, MISC::_CREATE_VAR_STRING(2, "HORSE_BONDING_LEVEL", func_167(iVar0)), 64);
	iVar47 = func_168(iVar0, 0);
	if (iVar47 <= 50)
	{
		StringCopy(&cVar10, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_CONDITION_CLEANLINESS_CLEAN"), 64);
	}
	else if (iVar47 < 100)
	{
		StringCopy(&cVar10, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_CONDITION_CLEANLINESS_DIRTY"), 64);
		bVar45 = true;
	}
	else
	{
		StringCopy(&cVar10, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_CONDITION_CLEANLINESS_FILTHY"), 64);
		bVar45 = true;
	}
	fVar42 = func_169(iVar0);
	if (fVar42 > 0f)
	{
		StringCopy(&cVar18, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_CONDITION_MOOD_AGITATED"), 64);
		bVar46 = true;
	}
	else
	{
		StringCopy(&cVar18, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_CONDITION_MOOD_CALM"), 64);
	}
	if (func_170(-415648720, &uVar43))
	{
		if (func_171(uVar43, &iVar48, 14460646, 0))
		{
			StringCopy(&cVar26, HUD::_GET_LABEL_TEXT_BY_HASH(iVar48), 64);
		}
	}
	if (func_170(986998820, &iVar44))
	{
		StringCopy(&cVar34, func_172(iVar44), 64);
	}
	Var50 = { func_173(iVar0) };
	sVar58 = MISC::_CREATE_VAR_STRING(2, "AT_HORSE");
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var50))
	{
		sVar58 = func_174(&Var50);
	}
	func_154(sVar58);
	func_155(0, "PMPLAYER_STATS");
	func_156(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0);
	func_156(2, "PMPLAYER_HORSE_PHYSIQUE_TITLE", "", 1, 0, 0, 0, 0);
	func_156(3, "PMPLAYER_HORSE_BONDING_TITLE", &cVar2, 1, 0, 0, 0, 0);
	func_156(4, "PMPLAYER_HORSE_HEALTH_TITLE", "", 1, 0, 0, 0, 0);
	func_156(5, "PMPLAYER_HORSE_STAMINA_TITLE", "", 1, 0, 0, 0, 0);
	func_155(6, "PMPLAYER_CONDITIONS");
	func_156(7, "PMPLAYER_HORSE_CONDITION_CLEANLINESS", &cVar10, 1, bVar45, bVar45, "rpg_horse_dirty", "pausemenu_player");
	func_156(8, "PMPLAYER_HORSE_CONDITION_MOOD", &cVar18, 1, bVar46, bVar46, "rpg_horse_agitation", "pausemenu_player");
	func_155(9, "PMPLAYER_HORSE_TACK");
	func_156(10, "PMPLAYER_HORSE_TACK_SADDLE_TITLE", &cVar26, 1, 0, 0, 0, 0);
	func_156(11, "PMPLAYER_HORSE_TACK_STIRRUPS_TITLE", &cVar34, 1, 0, 0, 0, 0);
	func_148(1);
}

int func_87(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = -1;
	iVar1 = func_175(iParam0);
	if (func_176(iVar1))
	{
		iVar0 = ((*Global_1835011)[iVar1 /*74*/])->f_1;
	}
	else
	{
		iVar2 = func_177(iParam0);
		if (func_101(iVar2))
		{
			iVar0 = ((*Global_1347702)[iVar2 /*49*/])->f_15;
		}
		else if (iParam0 == 2116153146)
		{
			iVar0 = func_178(0, 10, 11, 2116153146);
		}
	}
	return iVar0;
}

void func_88(bool bParam0)
{
	int iVar0;

	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_23() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_179(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_180();
		Global_1898077->f_9 = func_181(Global_1894899->f_2);
		func_182(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

void func_89()
{
	var uVar0;

	NETWORK::NETWORK_SET_RICH_PRESENCE(0, &uVar0, 1, 0);
}

void func_90(struct<16> Param0, int iParam16)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603->f_161 >= 10)
	{
		return;
	}
	if (!func_183(iParam16, 2))
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Param0.f_10))) > 0 || func_184(&(Param0.f_10)))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(((*Global_1934603)[iVar0 /*16*/])->f_10)))
		{
			*((*Global_1934603)[iVar0 /*16*/]) = { Param0 };
			Global_1934603->f_161++;
			func_185(iParam16);
			return;
		}
		iVar0++;
	}
}

void func_91(var uParam0)
{
	uParam0->f_2 = 0;
}

void func_92()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(33819255);
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(2116153146, 0);
			func_186(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(-121456797, false);
			func_187();
		}
		return;
	}
	if (!func_130(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	func_188();
	if (MISSIONDATA::_0x57E798B54C45EE1A(1685912227) >= 2)
	{
		if (MISSIONDATA::_0x57E798B54C45EE1A(2116153146) < 2)
		{
			MISSIONDATA::_0xE824CE7D13FCB300(2116153146, 2);
		}
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(-121456797, true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(645322743))
	{
		return;
	}
	func_186(1);
}

void func_93()
{
	if (!func_130(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(304788622))
	{
		return;
	}
	func_189(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(304788622, true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1968398307))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(-1968398307, true);
}

void func_94()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(-751383868);
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(1244328330))
		{
			func_190(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(1244328330, false);
		}
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(1244328330))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1383789777))
	{
		return;
	}
	if (!func_130(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(1244328330, true);
	func_190(1);
}

void func_95()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(-1499823613);
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(398807247))
		{
			func_191(15000, 0, 0, 0, 1);
			func_190(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(398807247, false);
		}
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(398807247))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1651350587))
	{
		return;
	}
	if (!func_130(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(398807247, true);
	func_192(15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
	func_190(1);
}

void func_96()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(-1491419385) > 0)
		{
			if ((!func_193(1191437462 /* GXTEntry: "Le Tresor des Morts Map 1" */, 1, 0) && !func_194(((*Global_1835011)[23 /*74*/])->f_1)) && !Global_43890)
			{
				func_189(1191437462 /* GXTEntry: "Le Tresor des Morts Map 1" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_195(1))
			{
				func_196(1);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(1809565830) > 0)
		{
			if ((!func_193(1119149048 /* GXTEntry: "Le Tresor des Morts Riddle Note" */, 1, 0) && !func_194(((*Global_1835011)[23 /*74*/])->f_1)) && !Global_43890)
			{
				func_189(1119149048 /* GXTEntry: "Le Tresor des Morts Riddle Note" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_195(2))
			{
				func_196(2);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(2056119786) > 0 && !func_195(4))
		{
			func_196(4);
		}
		if (func_195(0))
		{
			func_197(0);
		}
	}
	else
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(-1491419385) > 0)
		{
			if (func_193(1191437462 /* GXTEntry: "Le Tresor des Morts Map 1" */, 1, 0))
			{
				func_198(1191437462 /* GXTEntry: "Le Tresor des Morts Map 1" */, 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(1809565830) > 0)
		{
			if (func_193(1119149048 /* GXTEntry: "Le Tresor des Morts Riddle Note" */, 1, 0))
			{
				func_198(1119149048 /* GXTEntry: "Le Tresor des Morts Riddle Note" */, 1, 1, -142743235, 0);
			}
		}
		if (func_195(1))
		{
			func_197(1);
		}
		if (func_195(2))
		{
			func_197(2);
		}
		if (func_195(4))
		{
			func_197(4);
		}
		if (!func_195(0))
		{
			func_196(0);
		}
	}
}

void func_97()
{
	bool bVar0;
	struct<4> Var1;
	int iVar15;
	int iVar16;

	bVar0 = UNLOCK::_UNLOCK_IS_UNLOCKED(240039223);
	if (!bVar0)
	{
		return;
	}
	if (!func_130(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-236259196))
	{
		return;
	}
	Var1 = { func_199() };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
	{
		func_200(joaat("weapon_revolver_doubleaction"));
		if (func_201(joaat("weapon_revolver_doubleaction"), 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_199() };
		}
	}
	if (INVENTORY::_0xB881CA836CC4B6D4(&Var1))
	{
		func_202(-2055673461 /* GXTEntry: "Pearl Grip" */, Var1, 1423542233);
		func_202(-202131179 /* GXTEntry: "Long Barrel" */, Var1, -1264898804);
		func_202(2013836545 /* GXTEntry: "Gold" */, Var1, 1592019450);
		func_202(1497476650 /* GXTEntry: "Gold" */, Var1, 1117400455);
		func_202(1063571467 /* GXTEntry: "Gold" */, Var1, 1150213537);
		func_202(2107224237 /* GXTEntry: "Gold" */, Var1, 1598825281);
		func_202(1747981656 /* GXTEntry: "Gold" */, Var1, -712527121);
		func_202(-1371140647 /* GXTEntry: "Baroque" */, Var1, 454332195);
		func_202(-19142973 /* GXTEntry: "Gold" */, Var1, 256105670);
		func_202(-2074737817 /* GXTEntry: "Gold" */, Var1, -1328061889);
		func_202(-1114256243 /* GXTEntry: "Baroque" */, Var1, -782241404);
		func_202(-1653277288 /* GXTEntry: "Gold" */, Var1, 1669853467);
		func_202(1869398132 /* GXTEntry: "Baroque" */, Var1, -1559225678);
		func_202(459868358 /* GXTEntry: "Gold" */, Var1, -266425508);
		if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1) && !func_203())
		{
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar15, false, 2, false);
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar16, false, 0, false);
			if (func_204(iVar16))
			{
				if (iVar16 != joaat("weapon_revolver_doubleaction"))
				{
					if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar16))
					{
						if (func_205(24))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar16, true, 3, false, false);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_doubleaction"), true, 0, false, false);
					}
					else if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar16))
					{
						if ((func_205(24) && func_204(iVar15)) && iVar15 != joaat("weapon_revolver_doubleaction"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar15, true, 3, false, false);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_doubleaction"), true, 2, false, false);
					}
				}
			}
			else if (!func_204(iVar15))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_doubleaction"), true, 2, false, false);
			}
			else if (iVar15 != joaat("weapon_revolver_doubleaction"))
			{
				if (func_205(24))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar15, true, 3, false, false);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_doubleaction"), true, 2, false, false);
			}
		}
		UNLOCK::_UNLOCK_SET_UNLOCKED(-236259196, true);
	}
}

void func_98()
{
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(99890643))
	{
		return;
	}
	if (MISC::IS_PC_VERSION() || MISC::_IS_STADIA_VERSION())
	{
		UNLOCK::_UNLOCK_SET_UNLOCKED(99890643, true);
	}
	if (MISC::IS_ORBIS_VERSION())
	{
		UNLOCK::_UNLOCK_SET_UNLOCKED(99890643, true);
	}
	if (MISC::IS_DURANGO_VERSION())
	{
		UNLOCK::_UNLOCK_SET_UNLOCKED(99890643, true);
	}
}

int func_99()
{
	if (&Global_1048576)
	{
		return 1;
	}
	if (Global_1572887->f_4)
	{
		return 1;
	}
	if (&Global_524298)
	{
		return 1;
	}
	if (&Global_1048577)
	{
		return 1;
	}
	if (&Global_1051043 == -1 && Global_1572887->f_6 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

int func_100(int iParam0)
{
	if (!func_15(iParam0))
	{
		return -1;
	}
	return func_206(func_104(iParam0));
}

bool func_101(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_102(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_103(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1935630->f_18)
	{
		if ((bParam2 || Global_1935630->f_19 > 0) || Global_1935630->f_17 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1935630->f_15 == 1370593166)
	{
		return 0;
	}
	if (Global_1935630->f_20 > 0 || (bParam2 && Global_1935630->f_20 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1935630->f_13)
		{
			if (bParam2 || Global_1935630->f_21 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_104(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_12105[iParam0 /*7*/]);
	}
	if (iParam0 < 0 || iParam0 >= 20001)
	{
		return 0;
	}
	return &(Global_1058888->f_498[iParam0 /*2*/]);
}

int func_105(int iParam0)
{
	return iParam0 & 31;
}

void func_106(var uParam0)
{
	MISC::_COPY_MEMORY(uParam0, &(Global_1879534->f_7301), 243);
}

int func_107(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_108(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_109(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_207(vParam0);
	iVar1 = -1;
	if (Global_1894882[iVar0] > 0)
	{
		iVar2 = (Global_1894882[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = (*Global_1894065)[iVar0 /*51*/][iVar2];
			if (VOLUME::_DOES_VOLUME_EXIST(((*Global_1888801)[iVar4 /*35*/])->f_3))
			{
				if (VOLUME::_0xF256A75210C5C0EB(((*Global_1888801)[iVar4 /*35*/])->f_3, vParam0))
				{
					switch (((*Global_1888801)[iVar4 /*35*/])->f_20)
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

int func_110()
{
	if (func_60(43) && !func_60(44))
	{
		return 0;
	}
	if (func_60(67) && func_208() != 8)
	{
		return 0;
	}
	return 1;
}

float func_111(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

int func_112(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

bool func_113(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

void func_114(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_115(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_61(iParam0, iParam1) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

float func_116(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_117(int iParam0)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_62(iParam0) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

int func_118()
{
	int iVar0;

	if (func_209(Global_40.f_8863.f_154, 1))
	{
		iVar0++;
	}
	if (func_209(Global_40.f_8863.f_154, 2))
	{
		iVar0++;
	}
	if (func_209(Global_40.f_8863.f_154, 4))
	{
		iVar0++;
	}
	if (func_209(Global_40.f_8863.f_154, 8))
	{
		iVar0++;
	}
	if (func_209(Global_40.f_8863.f_154, 16))
	{
		iVar0++;
	}
	if (func_209(Global_40.f_8863.f_154, 32))
	{
		iVar0++;
	}
	if (func_209(Global_40.f_8863.f_154, 64))
	{
		iVar0++;
	}
	if (func_209(Global_40.f_8863.f_154, 128))
	{
		iVar0++;
	}
	if (func_209(Global_40.f_8863.f_154, 256))
	{
		iVar0++;
	}
	return iVar0;
}

float func_119(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

int func_120()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 <= (20 - 1))
	{
		iVar2 = func_210(iVar0);
		if (func_209(func_211(), iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_121(int iParam0)
{
	if (func_23() != -1)
	{
		return 0;
	}
	if (!func_101(iParam0))
	{
		return 0;
	}
	return func_130(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

int func_122(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_123(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	ENTITY::IS_ENTITY_DEAD(Global_35);
	*iParam0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 0);
	*iParam0 = (*iParam0 + ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 1));
	*iParam0 = (*iParam0 + ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 2));
	*iParam1 = ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 0);
	*iParam1 = (*iParam1 + ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 1));
	*iParam1 = (*iParam1 + ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 2));
	*iParam1 += 6;
	iVar0 = func_212(-1845241476, 0, 0);
	iVar1 = func_212(1654063339, 0, 0);
	iVar2 = func_212(1623931083, 0, 0);
	*iParam0 = (*iParam0 + ((iVar0 + iVar1) + iVar2));
}

int func_124(int iParam0)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_213(iParam0) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

int func_125()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar2 = func_214(iVar0);
		if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(iVar2) >= STATS::CHAL_GET_MAX_RANKS(iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_126(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_215(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

void func_127(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<6> Var2;

	if (&Global_1898329 <= 0)
	{
		return;
	}
	if (!func_15(iParam0))
	{
		return;
	}
	if (func_216(iParam0))
	{
		func_217(iParam0, 0, 2);
	}
	iVar0 = func_218(iParam0);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = iVar0;
	if (&Global_1898329 > 1)
	{
		(*Global_1898330)[iVar1] = Global_1898330[(&Global_1898329 - 1)];
		*((*Global_1898346)[iVar1 /*6*/]) = { *((*Global_1898346)[(&Global_1898329 - 1) /*6*/]) };
		(*Global_1898330)[(&Global_1898329 - 1)] = -1;
		*((*Global_1898346)[(&Global_1898329 - 1) /*6*/]) = { Var2 };
	}
	else
	{
		(*Global_1898330)[iVar1] = -1;
		*((*Global_1898346)[iVar1 /*6*/]) = { Var2 };
	}
	Global_1898329 = (&Global_1898329 - 1);
	if (&Global_1898329 < 0)
	{
		Global_1898329 = 0;
	}
}

void func_128(int iParam0, bool bParam1)
{
	if (((*Global_1898346)[iParam0 /*6*/])->f_2 == 0 || bParam1)
	{
		((*Global_1898346)[iParam0 /*6*/])->f_2 = func_104(Global_1898330[iParam0]);
		func_219(((*Global_1898346)[iParam0 /*6*/])->f_2, &(((*Global_1898346)[iParam0 /*6*/])->f_4), &(((*Global_1898346)[iParam0 /*6*/])->f_5), &(((*Global_1898346)[iParam0 /*6*/])->f_3));
	}
}

int func_129(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_5;
	}
	return (Global_1058888->f_498[iParam0 /*2*/])->f_1;
}

int func_130(int iParam0, bool bParam1)
{
	switch (func_220(iParam0))
	{
		case 5:
			return 1;
		case 6:
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_131(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 7:
		case 18:
		case 26:
		case 30:
			return 1;
	}
	return 0;
}

char* func_132(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PM_PROG_EVENTS";
		case 1:
			return "PM_PROG_EVENT_STORY";
		case 2:
			return "PM_PROG_EVENT_STRANGER";
		case 3:
			return "PM_PROG_EVENT_BOUNTY";
		case 4:
			return "PM_PROG_EVENT_RANDOM";
		case 5:
			return "PM_PROG_EVENT_AMBUSH";
		case 6:
			return "PM_PROG_EVENT_HIDEOUT";
		case 7:
			return "PM_PROG_COLLECTABLES";
		case 8:
			return "PM_PROG_COLLECT_DISCOVERABLES";
		case 9:
			return "PM_PROG_COLLECT_GRAVES";
		case 10:
			return "PM_PROG_COLLECT_CARDS";
		case 11:
			return "PM_PROG_COLLECT_BONES";
		case 12:
			return "PM_PROG_COLLECT_FISH";
		case 13:
			return "PM_PROG_COLLECT_EXOTICS";
		case 14:
			return "PM_PROG_COLLECT_ROCKS";
		case 15:
			return "PM_PROG_COLLECT_TAXIDERMY";
		case 16:
			return "PM_PROG_COLLECT_TREASURE";
		case 17:
			return "PM_PROG_COLLECT_DREAMCATCHER";
		case 31:
			return "PM_PROG_LOC_SHACKS";
		case 32:
			return "PM_PROG_LOC_LEG_ANIMALS";
		case 18:
			return "PM_PROG_COMPENDIUM";
		case 19:
			return "PM_PROG_COMP_ANIMALS";
		case 20:
			return "PM_PROG_COMP_EQUIP";
		case 21:
			return "PM_PROG_COMP_FISH";
		case 22:
			return "PM_PROG_COMP_GANGS";
		case 23:
			return "PM_PROG_COMP_HORSES";
		case 24:
			return "PM_PROG_COMP_PLANTS";
		case 25:
			return "PM_PROG_COMP_WEAPONS";
		case 26:
			return "PM_PROG_CHARACTER";
		case 27:
			return "PM_PROG_CHAR_RPG";
		case 28:
			return "PM_PROG_CHAR_BOND";
		case 29:
			return "PM_PROG_CHAR_CHALLENGES";
		case 30:
			return "PM_PROG_MISCELLANEOUS";
		case 33:
			return "PM_PROG_MISC_TABLE";
		case 34:
			return "PM_PROG_MISC_SPD";
		case 35:
			return "PM_PROG_MISC_BATH";
		case 36:
			return "PM_PROG_MISC_SHOW";
		case 37:
			return "PM_PROG_MISC_THEATRE";
		case 38:
			return "PM_PROG_MISC_CRAFT";
		case 39:
			return "PM_PROG_MISC_ROBBERY";
		default:
			break;
	}
	return "";
}

char* func_133(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case 1:
			iVar0 = func_115(909007663, 532323983);
			iVar1 = 107;
			if (iVar0 >= iVar1)
			{
				*iParam1 = 1;
			}
			else
			{
				*iParam1 = 0;
			}
			return MISC::_CREATE_VAR_STRING(2, "PM_PROG_STORY_VAR_STRING", iVar0);
		case 2:
			iVar0 = func_122(func_115(909007663, 551192206), 10);
			iVar1 = 10;
			break;
		case 3:
			iVar0 = func_122(func_115(909007663, -406093146), 5);
			iVar1 = 5;
			break;
		case 4:
			iVar0 = func_122(func_117(-1029789297), 25);
			iVar1 = 25;
			break;
		case 5:
			iVar0 = func_122(func_117(-843295694), 1);
			iVar1 = 1;
			break;
		case 6:
			iVar0 = func_122(func_117(64058978), 6);
			iVar1 = 6;
			break;
		case 8:
			iVar0 = func_122(func_117(795577402), 1);
			iVar1 = 1;
			break;
		case 9:
			iVar0 = func_118();
			iVar1 = 9;
			break;
		case 10:
			if (((((((((((COLLECTION::_0x5461C821D00FE15A(-2076669067, 1665658745) >= COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 1665658745) || COLLECTION::_0x5461C821D00FE15A(-2076669067, -263938772) >= COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -263938772)) || COLLECTION::_0x5461C821D00FE15A(-2076669067, 228647253) >= COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 228647253)) || COLLECTION::_0x5461C821D00FE15A(-2076669067, 1695604435) >= COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 1695604435)) || COLLECTION::_0x5461C821D00FE15A(-2076669067, -379038926) >= COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -379038926)) || COLLECTION::_0x5461C821D00FE15A(-2076669067, 1597499323) >= COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 1597499323)) || COLLECTION::_0x5461C821D00FE15A(-2076669067, -278663717) >= COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -278663717)) || COLLECTION::_0x5461C821D00FE15A(-2076669067, 586249988) >= COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 586249988)) || COLLECTION::_0x5461C821D00FE15A(-2076669067, -419800938) >= COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -419800938)) || COLLECTION::_0x5461C821D00FE15A(-2076669067, -1362069171) >= COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -1362069171)) || COLLECTION::_0x5461C821D00FE15A(-2076669067, -740350755) >= COLLECTION::_0x62CAB7DB62EAD434(-2076669067, -740350755)) || COLLECTION::_0x5461C821D00FE15A(-2076669067, 1511070393) >= COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 1511070393))
			{
				*iParam1 = 1;
				return MISC::_CREATE_VAR_STRING(2, "PM_PROG_VAR_STRING", 1, 1);
			}
			else
			{
				if (COLLECTION::_0x5461C821D00FE15A(-2076669067, 0) > 0)
				{
					*iParam1 = 0;
				}
				else
				{
					*iParam1 = 2;
				}
				return "";
			}
			break;
		case 11:
			if (func_121(39))
			{
				if (func_121(40))
				{
					*iParam1 = 1;
					return MISC::_CREATE_VAR_STRING(2, "PM_PROG_VAR_STRING", 1, 1);
				}
				else
				{
					*iParam1 = 0;
					return "";
				}
			}
			else
			{
				*iParam1 = 2;
				return "";
			}
			break;
		case 12:
			if (func_121(41))
			{
				if (func_121(42))
				{
					*iParam1 = 1;
					return MISC::_CREATE_VAR_STRING(2, "PM_PROG_VAR_STRING", 1, 1);
				}
				else
				{
					*iParam1 = 0;
					return "";
				}
			}
			else
			{
				*iParam1 = 2;
				return "";
			}
			break;
		case 13:
			if (func_121(43))
			{
				if (func_121(48))
				{
					*iParam1 = 1;
					return MISC::_CREATE_VAR_STRING(2, "PM_PROG_VAR_STRING", 1, 1);
				}
				else
				{
					*iParam1 = 0;
					return "";
				}
			}
			else
			{
				*iParam1 = 2;
				return "";
			}
			break;
		case 14:
			if (func_121(49))
			{
				if (func_121(50))
				{
					*iParam1 = 1;
					return MISC::_CREATE_VAR_STRING(2, "PM_PROG_VAR_STRING", 1, 1);
				}
				else
				{
					*iParam1 = 0;
					return "";
				}
			}
			else
			{
				*iParam1 = 2;
				return "";
			}
			break;
		case 15:
			if (func_121(51))
			{
				if (func_121(52))
				{
					*iParam1 = 1;
					return MISC::_CREATE_VAR_STRING(2, "PM_PROG_VAR_STRING", 1, 1);
				}
				else
				{
					*iParam1 = 0;
					return "";
				}
			}
			else
			{
				*iParam1 = 2;
				return "";
			}
			break;
		case 16:
			if (func_221() > 0)
			{
				if (((((func_222(499813453) || func_222(666607663)) || func_222(-220219788)) || func_222(218622660)) || func_222(390004462)) || func_222(6410548))
				{
					*iParam1 = 1;
					return MISC::_CREATE_VAR_STRING(2, "PM_PROG_VAR_STRING", 1, 1);
				}
				else
				{
					*iParam1 = 0;
					return "";
				}
			}
			else
			{
				*iParam1 = 2;
				return "";
			}
			break;
		case 17:
			iVar0 = func_120();
			iVar1 = 20;
			break;
		case 31:
			iVar0 = func_122(func_117(1933084904), 5);
			iVar1 = 5;
			break;
		case 32:
			iVar0 = func_122(func_115(-1756227506, -734935893), 5);
			iVar1 = 5;
			break;
		case 19:
			iVar0 = func_122(COMPENDIUM::_0x729D52F61A5A9E22(1979337996), 50);
			iVar1 = 50;
			break;
		case 20:
			iVar0 = func_122(COMPENDIUM::_0x729D52F61A5A9E22(-2125891426), 10);
			iVar1 = 10;
			break;
		case 21:
			iVar0 = func_122(COMPENDIUM::_0x729D52F61A5A9E22(joaat("fish")), 10);
			iVar1 = 10;
			break;
		case 22:
			iVar0 = COMPENDIUM::_0x729D52F61A5A9E22(joaat("gangs"));
			iVar1 = COMPENDIUM::_0x729D52461AEA9E22(joaat("gangs"));
			break;
		case 23:
			iVar0 = func_122(COMPENDIUM::_0x729D52F61A5A9E22(717108105), 10);
			iVar1 = 10;
			break;
		case 24:
			iVar0 = func_122(COMPENDIUM::_0x729D52F61A5A9E22(1807539419), 20);
			iVar1 = 20;
			break;
		case 25:
			iVar0 = func_122(COMPENDIUM::_0x729D52F61A5A9E22(joaat("weapons")), 48);
			iVar1 = 48;
			break;
		case 27:
			func_123(&iVar0, &iVar1);
			if (iVar0 == iVar1)
			{
				*iParam1 = 1;
			}
			else
			{
				*iParam1 = 0;
			}
			return "";
		case 28:
			iVar0 = func_122(1, func_124(-2116919750));
			iVar1 = 1;
			break;
		case 29:
			iVar0 = func_125();
			iVar1 = 9;
			break;
		case 33:
			iVar0 = func_122(1, func_115(joaat("attempts"), -747096482));
			iVar0 = (iVar0 + func_122(1, func_115(joaat("attempts"), 549911940)));
			iVar0 = (iVar0 + func_122(1, func_115(joaat("attempts"), -760820978)));
			iVar0 = (iVar0 + func_122(1, func_115(joaat("attempts"), -1672018311)));
			iVar1 = 4;
			break;
		case 34:
			iVar0 = func_122(5, func_117(-1342635612));
			iVar1 = 5;
			break;
		case 35:
			iVar0 = func_122(1, func_117(-2061916883));
			iVar1 = 1;
			break;
		case 36:
			iVar0 = func_122(1, func_117(281346304));
			iVar1 = 1;
			break;
		case 37:
			iVar0 = func_122(1, func_117(-299021541));
			iVar1 = 1;
			break;
		case 38:
			iVar0 = func_122(1, func_115(-1276738576, joaat("ammo")));
			iVar0 = (iVar0 + func_122(1, func_115(-1276738576, -1555359431)));
			iVar0 = (iVar0 + func_122(1, func_115(-1276738576, 644069854)));
			iVar0 = (iVar0 + func_122(1, func_115(-1276738576, -97115714)));
			iVar0 = (iVar0 + func_122(1, func_115(-1276738576, joaat("weapons"))));
			iVar0 = (iVar0 + func_122(1, func_115(-1276738576, 1455184052)));
			iVar1 = 6;
			break;
		case 39:
			iVar0 = func_122(1, func_115(978382515, joaat("coach")));
			iVar0 = (iVar0 + func_122(1, func_115(978382515, 574993838)));
			iVar0 = (iVar0 + func_122(1, func_115(978382515, joaat("shop"))));
			iVar0 = (iVar0 + func_122(1, func_115(978382515, joaat("train"))));
			iVar1 = 4;
			break;
	}
	if (iVar0 > 0)
	{
		if (iVar0 == iVar1)
		{
			*iParam1 = 1;
		}
		else
		{
			*iParam1 = 0;
		}
	}
	else
	{
		*iParam1 = 2;
	}
	if (iVar1 == 1 && iVar0 == 0)
	{
		return "";
	}
	return MISC::_CREATE_VAR_STRING(2, "PM_PROG_VAR_STRING", iVar0, iVar1);
}

int func_134(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 9:
			return func_60(76);
		case 3:
		case 5:
		case 11:
		case 12:
		case 13:
		case 14:
			return iParam1 == 0;
		case 15:
			return (func_212(1369162587 /* GXTEntry: "Hunting Request" */, 0, 0) > 0 || func_223() >= 1);
	}
	return 1;
}

char* func_135(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			return "PM_PROG_EVENT_UNKNOWN";
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
			return "PM_PROG_COLLECT_UNKNOWN";
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return "PM_PROG_COMP_UNKNOWN";
		case 27:
		case 28:
		case 29:
			return "PM_PROG_CHAR_UNKNOWN";
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
			return "PM_PROG_MISC_UNKNOWN";
	}
	return "";
}

float func_136(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_137(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

bool func_138()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797);
}

char* func_139(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_140(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -932875117 /* GXTEntry: "Alaskan Ginseng" */;
		case 3:
			return 1660962977 /* GXTEntry: "American Ginseng" */;
		case 4:
			return -131409450 /* GXTEntry: "Bay Bolete" */;
		case 5:
			return -1487527516 /* GXTEntry: "Blackberry" */;
		case 6:
			return 561629573 /* GXTEntry: "Blackcurrant" */;
		case 7:
			return 1829679323 /* GXTEntry: "Burdock Root" */;
		case 8:
			return -618617794 /* GXTEntry: "Chanterelles" */;
		case 11:
			return 653458791 /* GXTEntry: "Common Bulrush" */;
		case 12:
			return 437319607 /* GXTEntry: "Creeping Thyme" */;
		case 13:
			return -1519488075 /* GXTEntry: "Desert Sage" */;
		case 15:
			return 1014445254 /* GXTEntry: "English Mace" */;
		case 16:
			return 224814421 /* GXTEntry: "Evergreen Huckleberry" */;
		case 18:
			return 1012187868 /* GXTEntry: "Golden Currant" */;
		case 19:
			return -1040706491 /* GXTEntry: "Hummingbird Sage" */;
		case 20:
			return -1910627346 /* GXTEntry: "Indian Tobacco" */;
		case 23:
			return -1812487593 /* GXTEntry: "Milkweed" */;
		case 26:
			return 1983971282 /* GXTEntry: "Oleander Sage" */;
		case 27:
			return 1561519041 /* GXTEntry: "Oregano" */;
		case 28:
			return -980496853 /* GXTEntry: "Parasol Mushroom" */;
		case 29:
			return -1738887126 /* GXTEntry: "Prairie Poppy" */;
		case 31:
			return 424771379 /* GXTEntry: "Ram\'s Head" */;
		case 33:
			return 787316814 /* GXTEntry: "Red Raspberry" */;
		case 34:
			return 984616481 /* GXTEntry: "Red Sage" */;
		case 37:
			return 1078285403 /* GXTEntry: "Vanilla Flower" */;
		case 38:
			return -262897007 /* GXTEntry: "Violet Snowdrop" */;
		case 39:
			return -1727702531 /* GXTEntry: "Wild Carrot" */;
		case 40:
			return 1783324404 /* GXTEntry: "Wild Feverfew" */;
		case 41:
			return 1288848815 /* GXTEntry: "Wild Mint" */;
		case 42:
			return 918090738 /* GXTEntry: "Wintergreen Berry" */;
		case 43:
			return 170272501 /* GXTEntry: "Yarrow" */;
		case 1:
			return 2056650000 /* GXTEntry: "Acuna\'s Star Orchid" */;
		case 9:
			return -1195354638 /* GXTEntry: "Cigar Orchid" */;
		case 10:
			return 1077596967 /* GXTEntry: "Clamshell Orchid" */;
		case 14:
			return -2145199848 /* GXTEntry: "Dragon\'s Mouth Orchid" */;
		case 17:
			return 752824478 /* GXTEntry: "Ghost Orchid" */;
		case 21:
			return -819513569 /* GXTEntry: "Lady of the Night Orchid" */;
		case 22:
			return 1906968775 /* GXTEntry: "Lady Slipper Orchid" */;
		case 24:
			return -135434663 /* GXTEntry: "Moccasin Flower Orchid" */;
		case 25:
			return 920123680 /* GXTEntry: "Night Scented Orchid" */;
		case 30:
			return 150470908 /* GXTEntry: "Queen\'s Orchid" */;
		case 32:
			return -1665125257 /* GXTEntry: "Rat Tail Orchid" */;
		case 35:
			return 1587928307 /* GXTEntry: "Sparrow\'s Egg Orchid" */;
		case 36:
			return -1738925422 /* GXTEntry: "Spider Orchid" */;
	}
	return 0;
}

int func_141(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_INT(&uParam0, &uVar0);
	return uVar0;
}

void func_142(var uParam0, int iParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

void func_143(var uParam0, int iParam1, int iParam2)
{
	STATS::_0xBD861AE8A5181ED7(&uParam0, iParam2);
}

void func_144(int iParam0)
{
	float fVar0;

	func_224(0);
	func_225(0);
	func_226(0);
	func_160(0);
	func_161(0);
	func_227(0);
	func_228(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_230(func_229(0, 0), 0);
			func_232(func_231(0));
			func_233("PMPLAYER_OVERVIEW");
			func_152(0, 1);
			func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_GENERAL_OVERVIEW_HAIR"), MISC::_CREATE_VAR_STRING(2, func_234()), 0, 0, 0, 0, 0, 0, 0, 0);
			func_235(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_GENERAL_OVERVIEW_FACIAL_HAIR"), MISC::_CREATE_VAR_STRING(2, func_236()), 0, 0, 0, 0, 0, 0, 0, 0);
			func_163("PMPLAYER_OVERVIEW_TOOLTIP");
			func_224(1);
			func_225(1);
			func_226(1);
			break;
		case 2:
			if (func_1())
			{
				func_230("PLAYER_JOHN_HONOR", 0);
			}
			else
			{
				func_230("PLAYER_ARTHUR_HONOR", 0);
			}
			func_232("PMPLAYER_GENERAL_HONOR_DESC");
			func_233("PMPLAYER_HONOR");
			func_152(0, 1);
			fVar0 = ((1f - func_237()) * 100f);
			if (fVar0 == 0f)
			{
				func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_GENERAL_HONOR_STORE_PRICES"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 0), 0, 0, 0, 0, 0, 0, 0, 0);
			}
			else
			{
				func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_GENERAL_HONOR_STORE_PRICES"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", BUILTIN::ROUND(fVar0)), 0, 0, 0, 0, 0, 0, 0, 0);
			}
			func_163("PMPLAYER_HONOR_TOOLTIP");
			break;
		case 4:
			func_230(func_238(), 0);
			func_232("PMPLAYER_CONDITION_WEIGHT_DESC");
			func_233("PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT");
			func_152(0, 1);
			func_239(0);
			func_163("PMPLAYER_CONDITION_WEIGHT_TOOLTIP");
			break;
		case 5:
			func_230(func_240(), func_241());
			func_232("PMPLAYER_CONDITION_TEMPERATURE_DESC");
			func_233("PMPLAYER_CONDITION_TEMPERATURE");
			func_152(0, 1);
			func_242();
			func_163("PMPLAYER_CONDITION_TEMPERATURE_TOOLTIP");
			break;
		case 6:
			func_230(func_243(), func_244());
			func_232("PMPLAYER_CONDITION_TOXICITY_DESC");
			func_233("PMPLAYER_CONDITION_TOXICITY");
			func_152(0, 1);
			func_245();
			func_163("PMPLAYER_CONDITION_TOXICITY_TOOLTIP");
			break;
		case 7:
			func_230(func_246(), 0);
			func_232("PMPLAYER_CONDITION_WELLBEING_DESC");
			func_233("PMPLAYER_CONDITION_WELLBEING");
			func_152(0, 1);
			func_247(1, 1, 1);
			if (func_1())
			{
				func_163("PMPLAYER_CONDITION_WELLBEING_JOHN_TOOLTIP");
			}
			else
			{
				func_163("PMPLAYER_CONDITION_WELLBEING_TOOLTIP");
			}
			break;
		case 9:
			func_248(-121629511 /* GXTEntry: "Raven Claw Talisman" */, "PROVISION_TALISMAN_RAVEN_CLAW", "PROVISION_TALISMAN_RAVEN_CLAW_DESC", "TALISMAN_RAVEN_CLAW", 0);
			func_152(0, 1);
			break;
		case 10:
			func_248(-224110471 /* GXTEntry: "Beaver Tooth Trinket" */, "PROVISION_TRINKET_BEAVER_TOOTH", "PROVISION_TRINKET_BEAVER_TOOTH_DESC", "TRINKET_BEAVER_TOOTH", 0);
			func_152(0, 1);
			break;
		case 11:
			func_248(-935153695 /* GXTEntry: "Fox Claw Trinket" */, "PROVISION_TRINKET_FOX_CLAW", "PROVISION_TRINKET_FOX_CLAW_DESC", "TRINKET_FOX_CLAW", 0);
			func_152(0, 1);
			break;
		case 12:
			func_248(-269048282 /* GXTEntry: "Buck Antler Trinket" */, "PROVISION_TRINKET_BUCK_ANTLER", "PROVISION_TRINKET_BUCK_ANTLER_DESC", "TRINKET_BUCK_ANTLER", 0);
			func_152(0, 1);
			break;
		case 13:
			func_248(1816443627 /* GXTEntry: "Ram Horn Trinket" */, "PROVISION_TRINKET_RAM_HORN", "PROVISION_TRINKET_RAM_HORN_DESC", "TRINKET_RAM_HORN", 0);
			func_152(0, 1);
			break;
		case 14:
			func_248(-127011478 /* GXTEntry: "Wolf Heart Trinket" */, "PROVISION_TRINKET_WOLF_HEART", "PROVISION_TRINKET_WOLF_HEART_DESC", "TRINKET_WOLF_HEART", 0);
			func_152(0, 1);
			break;
		case 15:
			func_248(1620353486 /* GXTEntry: "Pronghorn Horn Trinket" */, "PROVISION_TRINKET_PRONGHORN_ANTLER", "PROVISION_TRINKET_PRONGHORN_ANTLER_DESC", "TRINKET_PRONGHORN_ANTLER", 0);
			func_152(0, 1);
			break;
		case 16:
			func_248(-615217896 /* GXTEntry: "Eagle Talon Talisman" */, "PROVISION_TALISMAN_EAGLE_TALON", "PROVISION_TALISMAN_EAGLE_TALON_DESC", "TALISMAN_EAGLE_TALON", 0);
			func_152(0, 1);
			break;
		case 17:
			func_248(-1056342069 /* GXTEntry: "Cat Eye Trinket" */, "PROVISION_TRINKET_CAT_EYE", "PROVISION_TRINKET_CAT_EYE_DESC", "PROVISION_TRINKET_CAT_EYE", "pausemenu_player_update");
			func_152(0, 1);
			break;
		case 18:
			func_248(-1196089647 /* GXTEntry: "Shark Tooth Trinket" */, "PROVISION_TRINKET_SHARK_TOOTH", "PROVISION_TRINKET_SHARK_TOOTH_DESC", "PROVISION_TRINKET_SHARK_TOOTH", "pausemenu_player_update");
			func_152(0, 1);
			break;
		case 19:
			func_248(611073244 /* GXTEntry: "Crow Beak Trinket" */, "PROVISION_TRINKET_CROW_BEAK", "PROVISION_TRINKET_CROW_BEAK_DESC", "PROVISION_TRINKET_CROW_BEAK", "pausemenu_player_update");
			func_152(0, 1);
			break;
		case 20:
			func_248(-172243588 /* GXTEntry: "Ancient Arrowhead" */, "PROVISION_DISCO_ARROWHEAD_02", "PROVISION_DISCO_ARROWHEAD_02_DESC", "PERK_ARROWHEAD", "pausemenu_player_update");
			func_152(0, 1);
			break;
		case 21:
			func_248(1950809992 /* GXTEntry: "Farm, Field and Falconry" */, "DOCUMENT_FIELD_MANUAL", "DOCUMENT_FIELD_MANUAL_DESC", "PERK_MANUAL", "pausemenu_player_update");
			func_152(0, 1);
			break;
		case 22:
			func_152(0, 1);
			func_249(-1);
			break;
	}
}

void func_145(int iParam0)
{
	char* sVar0;
	bool bVar1;
	bool bVar2;

	func_224(0);
	func_225(0);
	func_226(0);
	func_160(0);
	func_161(0);
	func_227(0);
	func_228(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_230(func_229(1, 0), 0);
			func_232(func_231(1));
			func_233("PMPLAYER_OVERVIEW");
			func_152(0, 1);
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1955569->f_5.f_2[1 /*36*/])->f_12[0]));
			func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1955569->f_5.f_2[1 /*36*/])->f_12[1]));
			func_235(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_TIME"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1955569->f_5.f_2[1 /*36*/])->f_12[2]));
			bVar1 = DATABINDING::_DATABINDING_READ_DATA_BOOL(&((Global_1955569->f_5.f_2[1 /*36*/])->f_16[2]));
			bVar2 = DATABINDING::_DATABINDING_READ_DATA_BOOL(&((Global_1955569->f_5.f_2[1 /*36*/])->f_32[2]));
			func_235(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar0, 1, 0, bVar1, 0, 0f, 0f, 0f, "RPG_Health");
			if (bVar1)
			{
				func_250(2, "RPG_ARROW_DOWN", 0);
			}
			else if (bVar2)
			{
				func_250(2, "RPG_ARROW_UP", 0);
			}
			func_224(1);
			func_163("");
			break;
		case 2:
			func_230(func_229(1, 0), 0);
			func_232("PMPLAYER_HEALTH_PROGRESSION_DESC");
			func_233("PMPLAYER_PROGRESSION");
			func_152(0, 1);
			func_251(0, "PMPLAYER_PROGRESSION_STAT_NEXT", "PMPLAYER_HEALTH_PROGRESSION_STAT_MAX", "toast_rpg_level_health");
			func_163("PMPLAYER_HEALTH_PROGRESSION_TOOLTIP");
			break;
		case 4:
			func_230(func_238(), 0);
			func_232("PMPLAYER_CONDITION_WEIGHT_DESC");
			func_233("PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT");
			func_152(0, 1);
			func_239(1);
			func_163("PMPLAYER_CONDITION_WEIGHT_TOOLTIP");
			break;
		case 5:
			func_230(func_240(), func_241());
			func_232("PMPLAYER_CONDITION_TEMPERATURE_DESC");
			func_233("PMPLAYER_CONDITION_TEMPERATURE");
			func_152(0, 1);
			func_242();
			func_163("PMPLAYER_CONDITION_TEMPERATURE_TOOLTIP");
			break;
		case 6:
			func_230(func_243(), func_244());
			func_232("PMPLAYER_CONDITION_TOXICITY_DESC");
			func_233("PMPLAYER_CONDITION_TOXICITY");
			func_152(0, 1);
			func_245();
			func_163("PMPLAYER_CONDITION_TOXICITY_TOOLTIP");
			break;
		case 7:
			func_230(func_246(), 0);
			func_232("PMPLAYER_CONDITION_WELLBEING_DESC");
			func_233("PMPLAYER_CONDITION_WELLBEING");
			func_152(0, 1);
			func_247(1, 0, 0);
			if (func_1())
			{
				func_163("PMPLAYER_CONDITION_WELLBEING_JOHN_TOOLTIP");
			}
			else
			{
				func_163("PMPLAYER_CONDITION_WELLBEING_TOOLTIP");
			}
			break;
		case 9:
			func_248(1289585739 /* GXTEntry: "Tatanka Bison Horn Trinket" */, "PROVISION_TRINKET_BISON_HORN", "PROVISION_TRINKET_BISON_HORN_DESC", "TRINKET_BISON_HORN", 0);
			func_152(0, 1);
			break;
		case 10:
			func_248(1631240196 /* GXTEntry: "Moose Antler Trinket" */, "PROVISION_TRINKET_MOOSE_ANTLER", "PROVISION_TRINKET_MOOSE_ANTLER_DESC", "TRINKET_MOOSE_ANTLER", 0);
			func_152(0, 1);
			break;
		case 11:
			func_248(-832719552 /* GXTEntry: "Bear Claw Talisman" */, "PROVISION_TALISMAN_BEAR_CLAW", "PROVISION_TALISMAN_BEAR_CLAW_DESC", "TALISMAN_BEAR_CLAW", 0);
			func_152(0, 1);
			break;
		case 12:
			func_248(1768869276 /* GXTEntry: "Owl Feather Trinket" */, "PROVISION_TRINKET_OWL_FEATHER", "PROVISION_TRINKET_OWL_FEATHER_DESC", "TRINKET_OWL_FEATHER", 0);
			func_152(0, 1);
			break;
		case 13:
			func_248(655868243 /* GXTEntry: "Iguana Scale Trinket" */, "PROVISION_TRINKET_IGUANA_SCALE", "PROVISION_TRINKET_IGUANA_SCALE_DESC", "TRINKET_IGUANA_SCALE", 0);
			func_152(0, 1);
			break;
		case 14:
			func_248(-982895431 /* GXTEntry: "Turtle Shell Trinket" */, "PROVISION_TRINKET_TURTLE_SHELL", "PROVISION_TRINKET_TURTLE_SHELL_DESC", "PROVISION_TRINKET_TURTLE_SHELL", "pausemenu_player_update");
			func_152(0, 1);
			break;
		case 15:
			func_152(0, 1);
			func_249(0);
			break;
	}
}

void func_146(int iParam0)
{
	char* sVar0;
	bool bVar1;
	bool bVar2;

	func_224(0);
	func_225(0);
	func_226(0);
	func_160(0);
	func_161(0);
	func_227(0);
	func_228(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_230(func_229(2, 0), 0);
			func_232(func_231(2));
			func_233("PMPLAYER_OVERVIEW");
			func_152(0, 1);
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1955569->f_5.f_2[2 /*36*/])->f_12[0]));
			func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Stamina");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1955569->f_5.f_2[2 /*36*/])->f_12[1]));
			func_235(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_TIME"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Stamina");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1955569->f_5.f_2[2 /*36*/])->f_12[2]));
			bVar1 = DATABINDING::_DATABINDING_READ_DATA_BOOL(&((Global_1955569->f_5.f_2[2 /*36*/])->f_16[2]));
			bVar2 = DATABINDING::_DATABINDING_READ_DATA_BOOL(&((Global_1955569->f_5.f_2[2 /*36*/])->f_32[2]));
			func_235(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar0, 1, 0, bVar1, 0, 0f, 0f, 0f, "RPG_Stamina");
			if (bVar1)
			{
				func_250(2, "RPG_ARROW_DOWN", 0);
			}
			else if (bVar2)
			{
				func_250(2, "RPG_ARROW_UP", 0);
			}
			func_225(1);
			func_163("");
			break;
		case 2:
			func_230(func_229(2, 0), 0);
			func_232("PMPLAYER_STAMINA_PROGRESSION_DESC");
			func_233("PMPLAYER_PROGRESSION");
			func_152(0, 1);
			func_251(1, "PMPLAYER_PROGRESSION_STAT_NEXT", "PMPLAYER_STAMINA_PROGRESSION_STAT_MAX", "toast_rpg_level_stamina");
			func_163("PMPLAYER_STAMINA_PROGRESSION_TOOLTIP");
			break;
		case 4:
			func_230(func_238(), 0);
			func_232("PMPLAYER_CONDITION_WEIGHT_DESC");
			func_233("PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT");
			func_152(0, 1);
			func_239(2);
			func_163("PMPLAYER_CONDITION_WEIGHT_TOOLTIP");
			break;
		case 5:
			func_230(func_246(), 0);
			func_232("PMPLAYER_CONDITION_WELLBEING_DESC");
			func_233("PMPLAYER_CONDITION_WELLBEING");
			func_152(0, 1);
			func_247(0, 1, 0);
			if (func_1())
			{
				func_163("PMPLAYER_CONDITION_WELLBEING_JOHN_TOOLTIP");
			}
			else
			{
				func_163("PMPLAYER_CONDITION_WELLBEING_TOOLTIP");
			}
			break;
		case 7:
			func_248(1299744282 /* GXTEntry: "Lion\'s Paw Trinket" */, "PROVISION_TRINKET_LION_PAW", "PROVISION_TRINKET_LION_PAW_DESC", "TRINKET_LION_PAW", 0);
			func_152(0, 1);
			break;
		case 8:
			func_248(1441506783 /* GXTEntry: "Cougar Fang Trinket" */, "PROVISION_TRINKET_COUGAR_FANG", "PROVISION_TRINKET_COUGAR_FANG_DESC", "TRINKET_COUGAR_FANG", 0);
			func_152(0, 1);
			break;
		case 9:
			func_248(-1941112926 /* GXTEntry: "Bison Horn Talisman" */, "PROVISION_TALISMAN_BUFFALO_HORN", "PROVISION_TALISMAN_BUFFALO_HORN_DESC", "TALISMAN_BUFFALO_HORN", 0);
			func_152(0, 1);
			break;
		case 10:
			func_248(1768869276 /* GXTEntry: "Owl Feather Trinket" */, "PROVISION_TRINKET_OWL_FEATHER", "PROVISION_TRINKET_OWL_FEATHER_DESC", "TRINKET_OWL_FEATHER", 0);
			func_152(0, 1);
			break;
		case 11:
			func_248(-569248339 /* GXTEntry: "Hawk Talon Trinket" */, "PROVISION_TRINKET_HAWK_TALON", "PROVISION_TRINKET_HAWK_TALON_DESC", "PROVISION_TRINKET_HAWK_TALON", "pausemenu_player_update");
			func_152(0, 1);
			break;
		case 12:
			func_152(0, 1);
			func_249(1);
			break;
	}
}

void func_147(int iParam0)
{
	char* sVar0;
	bool bVar1;
	bool bVar2;

	func_224(0);
	func_225(0);
	func_226(0);
	func_160(0);
	func_161(0);
	func_227(0);
	func_228(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_230(func_229(3, 0), 0);
			func_232(func_231(3));
			func_233("PMPLAYER_OVERVIEW");
			func_152(0, 1);
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1955569->f_5.f_2[3 /*36*/])->f_12[0]));
			func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Dead_Eye");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1955569->f_5.f_2[3 /*36*/])->f_12[1]));
			func_235(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_TIME"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Dead_Eye");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(&((Global_1955569->f_5.f_2[3 /*36*/])->f_12[2]));
			bVar1 = DATABINDING::_DATABINDING_READ_DATA_BOOL(&((Global_1955569->f_5.f_2[3 /*36*/])->f_16[2]));
			bVar2 = DATABINDING::_DATABINDING_READ_DATA_BOOL(&((Global_1955569->f_5.f_2[3 /*36*/])->f_32[2]));
			func_235(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar0, 1, 0, bVar1, 0, 0f, 0f, 0f, "RPG_Dead_Eye");
			if (bVar1)
			{
				func_250(2, "RPG_ARROW_DOWN", 0);
			}
			else if (bVar2)
			{
				func_250(2, "RPG_ARROW_UP", 0);
			}
			func_226(1);
			func_163("");
			break;
		case 2:
			func_230(func_229(3, 0), 0);
			func_232("PMPLAYER_DEAD_EYE_PROGRESSION_DESC");
			func_233("PMPLAYER_PROGRESSION");
			func_152(0, 1);
			func_251(2, "PMPLAYER_PROGRESSION_STAT_NEXT", "PMPLAYER_DEAD_EYE_PROGRESSION_STAT_MAX", "toast_rpg_level_deadeye");
			func_163("PMPLAYER_DEADEYE_PROGRESSION_TOOLTIP");
			break;
		case 4:
			func_230(func_238(), 0);
			func_232("PMPLAYER_CONDITION_WEIGHT_DESC");
			func_233("PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT");
			func_152(0, 1);
			func_239(3);
			func_163("PMPLAYER_CONDITION_WEIGHT_TOOLTIP");
			break;
		case 5:
			func_230(func_246(), 0);
			func_232("PMPLAYER_CONDITION_WELLBEING_DESC");
			func_233("PMPLAYER_CONDITION_WELLBEING");
			func_152(0, 1);
			func_247(0, 0, 1);
			if (func_1())
			{
				func_163("PMPLAYER_CONDITION_WELLBEING_JOHN_TOOLTIP");
			}
			else
			{
				func_163("PMPLAYER_CONDITION_WELLBEING_TOOLTIP");
			}
			break;
		case 7:
			func_248(-62615415 /* GXTEntry: "Alligator Tooth Talisman" */, "PROVISION_TALISMAN_ALLIGATOR_TOOTH", "PROVISION_TALISMAN_ALLIGATOR_TOOTH_DESC", "TALISMAN_ALLIGATOR_TOOTH", 0);
			func_152(0, 1);
			break;
		case 8:
			func_248(780305678 /* GXTEntry: "Coyote Fang Trinket" */, "PROVISION_TRINKET_COYOTE_FANG", "PROVISION_TRINKET_COYOTE_FANG_DESC", "TRINKET_COYOTE_FANG", 0);
			func_152(0, 1);
			break;
		case 9:
			func_248(517396587 /* GXTEntry: "Panther\'s Eye Trinket" */, "PROVISION_TRINKET_PANTHER_EYE", "PROVISION_TRINKET_PANTHER_EYE_DESC", "TRINKET_PANTHER_EYE", 0);
			func_152(0, 1);
			break;
		case 10:
			func_248(1768869276 /* GXTEntry: "Owl Feather Trinket" */, "PROVISION_TRINKET_OWL_FEATHER", "PROVISION_TRINKET_OWL_FEATHER_DESC", "TRINKET_OWL_FEATHER", 0);
			func_152(0, 1);
			break;
		case 11:
			func_152(0, 1);
			func_249(2);
			break;
	}
}

void func_148(int iParam0)
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
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	int iVar16;
	int iVar17;
	char cVar18[32];
	int iVar22;
	int iVar23;
	char* sVar24;

	iVar0 = -1;
	iVar1 = -1;
	if (func_164(0))
	{
		iVar0 = 0;
	}
	if (func_164(1))
	{
		iVar1 = 1;
	}
	if (func_166(Global_35, func_165(iVar1), 0) || iVar0 == -1)
	{
		iVar0 = iVar1;
	}
	if (iVar0 == -1)
	{
		return;
	}
	iVar2 = func_252(iVar0);
	iVar3 = func_165(iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		iVar4 = func_253(iVar3);
		iVar6 = func_254(iVar3);
	}
	else
	{
		iVar4 = func_255(iVar2);
		iVar6 = func_256(iVar2);
	}
	iVar5 = func_257(iVar0, 0);
	iVar7 = func_257(iVar0, 1);
	func_224(0);
	func_225(0);
	func_226(0);
	func_160(0);
	func_161(0);
	func_227(0);
	func_228(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_230(func_229(4, 0), 0);
			func_232(func_231(4));
			func_233("PMPLAYER_OVERVIEW");
			func_152(0, 1);
			if (iVar0 == 0 && func_258() == iVar0)
			{
				func_259(&iVar8, &iVar9);
				iVar8 = BUILTIN::FLOOR((IntToFloat(iVar8) * 0.01f));
				iVar9 = BUILTIN::FLOOR((IntToFloat(iVar9) * 0.01f));
			}
			if (func_260())
			{
				iVar8++;
			}
			fVar10 = (IntToFloat(func_261(iVar2) + 1) * 10f);
			fVar11 = (fVar10 + (BUILTIN::TO_FLOAT(iVar8) * 10f));
			fVar12 = ((fVar10 + (3f * 10f)) * 0.01f);
			fVar13 = (IntToFloat(func_262(iVar2) + 1) * 10f);
			fVar14 = (fVar13 + (BUILTIN::TO_FLOAT(iVar9) * 10f));
			fVar15 = ((fVar13 + (2f * 10f)) * 0.01f);
			func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_SPEED"), "", 0, 0, 0, 1, fVar10, fVar11, fVar12, 0);
			func_235(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_ACCELERATION"), "", 0, 0, 0, 1, fVar13, fVar14, fVar15, 0);
			func_235(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_HANDLING"), MISC::_CREATE_VAR_STRING(2, func_264(func_263(iVar2))), 0, 0, 0, 0, 0, 0, 0, 0);
			func_160(1);
			func_161(1);
			func_227(1);
			func_265(10, (IntToFloat(iVar4 + 1) / 10f), BUILTIN::ROUND(((IntToFloat(iVar5) / 100f) * 15f)));
			func_266(10, (IntToFloat(iVar6 + 1) / 10f), BUILTIN::ROUND(((IntToFloat(iVar7) / 100f) * 15f)));
			func_163("PMPLAYER_HORSE_OVERVIEW_TIP");
			break;
		case 2:
			func_230(func_229(4, 0), 0);
			func_232("PMPLAYER_HORSE_PHYSIQUE_DESC");
			func_233("PMPLAYER_HORSE_PHYSIQUE_TITLE");
			func_152(0, 1);
			iVar16 = func_267(iVar2);
			if (!ENTITY::IS_ENTITY_DEAD(iVar3))
			{
				iVar17 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar3, 13);
			}
			else
			{
				iVar17 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iVar2, 13);
			}
			if (iVar17 < 10)
			{
				StringCopy(&cVar18, "HORSE_WEIGHT_MALNOURISHED", 32);
			}
			else if (iVar17 < 30)
			{
				StringCopy(&cVar18, "HORSE_WEIGHT_THIN", 32);
			}
			else if (iVar17 < 70)
			{
				StringCopy(&cVar18, "HORSE_WEIGHT_FIT", 32);
			}
			else if (iVar17 < 90)
			{
				StringCopy(&cVar18, "HORSE_WEIGHT_OVERWEIGHT", 32);
			}
			else
			{
				StringCopy(&cVar18, "HORSE_WEIGHT_OBESE", 32);
			}
			func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_TYPE"), MISC::_CREATE_VAR_STRING(2, func_269(func_268(iVar2), iVar16)), 0, 0, 0, 0, 0, 0, 0, 0);
			func_235(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_BREED"), MISC::_CREATE_VAR_STRING(2, func_270(iVar16)), 0, 0, 0, 0, 0, 0, 0, 0);
			func_235(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_GENDER"), MISC::_CREATE_VAR_STRING(2, func_272(func_271(iVar0))), 0, 0, 0, 0, 0, 0, 0, 0);
			func_235(3, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT"), MISC::_CREATE_VAR_STRING(2, &cVar18), 0, 0, 0, 0, 0, 0, 0, 0);
			func_235(4, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_COAT"), MISC::_CREATE_VAR_STRING(2, func_273(iVar16)), 0, 0, 0, 0, 0, 0, 0, 0);
			func_163("PMPLAYER_HORSE_PHYSIQUE_TIP");
			break;
		case 3:
			if (func_1())
			{
				func_230("JOHN_HORSE_BONDING", 0);
			}
			else
			{
				func_230("HORSE_BONDING", 0);
			}
			func_232("PMPLAYER_HORSE_BONDING_DESC");
			func_233("PMPLAYER_HORSE_BONDING_TITLE");
			func_152(0, 1);
			iVar22 = func_167(iVar0);
			iVar23 = BUILTIN::FLOOR(func_274(iVar0));
			sVar24 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar2, 7, iVar22 + 1);
			func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_LEVEL"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", iVar22, 4), 0, 0, 0, 0, 0, 0, 0, 0);
			if (iVar22 < 4)
			{
				func_235(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_PROGRESSION_STAT_NEXT"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", iVar23, sVar24), 0, 0, 0, 0, 0, 0, 0, 0);
			}
			func_163("PMPLAYER_HORSE_BONDING_TIP");
			func_227(1);
			break;
		case 4:
			func_230("HORSE_HEALTH", 0);
			func_232("PMPLAYER_HORSE_HEALTH_DESC");
			func_233("PMPLAYER_HORSE_HEALTH_TITLE");
			func_152(0, 1);
			func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_LEVEL"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", iVar4 + 1, 10), 0, 0, 0, 0, 0, 0, 0, 0);
			func_235(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", iVar5), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Health");
			func_275(2, iVar0, 0);
			func_163("PMPLAYER_HORSE_HEALTH_TIP");
			break;
		case 5:
			func_230("HORSE_STAMINA", 0);
			func_232("PMPLAYER_HORSE_STAMINA_DESC");
			func_233("PMPLAYER_HORSE_STAMINA_TITLE");
			func_152(0, 1);
			func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_LEVEL"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", iVar6 + 1, 10), 0, 0, 0, 0, 0, 0, 0, 0);
			func_235(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", iVar7), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
			func_275(2, iVar0, 1);
			func_163("PMPLAYER_HORSE_STAMINA_TIP");
			break;
		case 7:
			if (func_1())
			{
				func_230("JOHN_HORSE_CLEANLINESS", 0);
			}
			else
			{
				func_230("HORSE_CLEANLINESS", 0);
			}
			func_232("PMPLAYER_HORSE_CONDITION_CLEANLINESS_DESC");
			func_233("PMPLAYER_HORSE_CONDITION_CLEANLINESS");
			func_152(0, 1);
			if (func_168(iVar0, 0) > 50)
			{
				func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(MISC::ABSF((0.25f * 100f)))), 1, 0, 1, 0, 0, 0, 0, "RPG_Horse_Health");
				func_250(0, "RPG_ARROW_DOWN", 0);
			}
			func_163("PMPLAYER_HORSE_CONDITION_CLEANLINESS_TIP");
			break;
		case 10:
			func_230(func_229(4, 0), 0);
			func_232("PMPLAYER_HORSE_TACK_SADDLE_DESC");
			func_233("PMPLAYER_HORSE_TACK_SADDLE_TITLE");
			func_152(0, 1);
			func_276();
			func_163("PMPLAYER_HORSE_TACK_SADDLE_TIP");
			break;
		case 8:
			if (func_1())
			{
				func_230("JOHN_HORSE_TEMPERAMENT", 0);
			}
			else
			{
				func_230("HORSE_TEMPERAMENT", 0);
			}
			func_232("PMPLAYER_HORSE_CONDITION_MOOD_DESC");
			func_233("PMPLAYER_HORSE_CONDITION_MOOD");
			func_152(0, 1);
			func_163("PMPLAYER_HORSE_CONDITION_MOOD_TIP");
			break;
		case 11:
			func_230("HORSE_TACK_STIRRUPS", 0);
			func_232("PMPLAYER_HORSE_TACK_STIRRUPS_DESC");
			func_233("PMPLAYER_HORSE_TACK_STIRRUPS_TITLE");
			func_152(0, 1);
			func_277();
			func_163("PMPLAYER_HORSE_TACK_STIRRUPS_TIP");
			break;
	}
}

int func_149(int iParam0)
{
	return 0;
	switch (iParam0)
	{
		case 6:
		case 29:
		case 33:
		case 38:
		case 39:
			return 1;
	}
	return 0;
}

char* func_150(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "STORY_MISSIONS";
		case 2:
			return "RANDOM_CHARACTER_MISSIONS";
		case 3:
			return "BOUNTY_HUNTER_MISSIONS";
		case 4:
			return "RANDOM_EVENTS";
		case 5:
			return "RIVAL_GANGS_AMBUSH";
		case 6:
			return "RIVAL_GANGS_HIDEOUTS";
		case 8:
			return "COLLECTABLES_DISCOVERABLES";
		case 9:
			return "COLLECTABLES_GRAVES";
		case 10:
			return "COLLECTABLES_CIG_CARDS";
		case 11:
			return "COLLECTABLES_DINO";
		case 12:
			return "COLLECTABLES_FISH";
		case 13:
			return "COLLECTABLES_EXOTICS";
		case 14:
			return "COLLECTABLES_ROCKS";
		case 15:
			return "COLLECTABLES_TAXIDERMY";
		case 16:
			return "COLLECTABLES_TREASURE";
		case 17:
			return "COLLECTABLES_DREAMCATCHERS";
		case 31:
			return "LOCATION_SHACKS";
		case 32:
			return "LOCATION_LEGENDARY_ANIMALS";
		case 19:
			return "COMPENDIUM_DISCOVER_ANIMALS";
		case 20:
			return "COMPENDIUM_DISCOVER_EQUIPMENT";
		case 21:
			return "COMPENDIUM_DISCOVER_FISH";
		case 22:
			return "COMPENDIUM_DISCOVER_GANGS";
		case 23:
			return "COMPENDIUM_DISCOVER_HORSES";
		case 24:
			return "COMPENDIUM_DISCOVER_PLANTS";
		case 25:
			return "COMPENDIUM_DISCOVER_WEAPONS";
		case 27:
			return "CHARACTER_MAX_RPG_TANKS";
		case 28:
			return "CHARACTER_HORSE_BOND";
		case 29:
			return "CHARACTER_CHALLENGES";
		case 33:
			return "MISC_TABLE_GAMES";
		case 34:
			return "MISC_SPECIAL_PEDS";
		case 35:
			return "MISC_BATH";
		case 36:
			return "MISC_SHOW";
		case 37:
			return "MISC_THEATRE";
		case 38:
			return "MISC_CRAFT_EACH_RECIPE";
		case 39:
			return "MISC_ROBBERIES";
		default:
			break;
	}
	return "STORY_MISSIONS";
}

void func_151(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 33:
			func_278(uParam0, 0, "MAP_CARD_MINIGAMES_BLACKJACK", 1);
			func_278(uParam0, 1, "MAP_CARD_MINIGAMES_DOMINOES_DRAW", 1);
			func_278(uParam0, 2, "MAP_CARD_MINIGAMES_FIVE_FINGER_FILLET_CLASSIC", 1);
			func_278(uParam0, 3, "MAP_CARD_MINIGAMES_POKER", 1);
			break;
	}
}

void func_152(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(Global_1955569->f_5.f_147.f_22);
	}
	if (bParam1)
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(Global_1955569->f_5.f_147.f_21);
	}
}

char* func_153(int iParam0)
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
			return "PMPLAYER_HORSE";
		default:
			break;
	}
	return "";
}

void func_154(char* sParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569->f_5.f_147, sParam0);
}

void func_155(int iParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1955569->f_5.f_147.f_24[iParam0 /*23*/])->f_16, sParam1);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1955569->f_5.f_147.f_22, iParam0, "player_group_item", (Global_1955569->f_5.f_147.f_24[iParam0 /*23*/])->f_15);
}

void func_156(int iParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5, char* sParam6, char* sParam7)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1955569->f_5.f_147.f_24[iParam0 /*23*/])->f_16, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1955569->f_5.f_147.f_24[iParam0 /*23*/])->f_17, sParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_147.f_24[iParam0 /*23*/])->f_18, bParam3);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_147.f_24[iParam0 /*23*/])->f_19, bParam4);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_147.f_24[iParam0 /*23*/])->f_22, bParam5);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1955569->f_5.f_147.f_24[iParam0 /*23*/])->f_20, sParam6);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1955569->f_5.f_147.f_24[iParam0 /*23*/])->f_21, sParam7);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1955569->f_5.f_147.f_22, iParam0, "player_list_item", (Global_1955569->f_5.f_147.f_24[iParam0 /*23*/])->f_15);
}

char* func_157(int iParam0)
{
	if (iParam0 <= -320)
	{
		return "HONOR_BAD_8";
	}
	else if (iParam0 <= -280)
	{
		return "HONOR_BAD_7";
	}
	else if (iParam0 <= -240)
	{
		return "HONOR_BAD_6";
	}
	else if (iParam0 <= -200)
	{
		return "HONOR_BAD_5";
	}
	else if (iParam0 <= -160)
	{
		return "HONOR_BAD_4";
	}
	else if (iParam0 <= -120)
	{
		return "HONOR_BAD_3";
	}
	else if (iParam0 <= -80)
	{
		return "HONOR_BAD_2";
	}
	else if (iParam0 < 0)
	{
		return "HONOR_BAD_1";
	}
	else if (iParam0 <= 40)
	{
		return "HONOR_GOOD_1";
	}
	else if (iParam0 >= 320)
	{
		return "HONOR_GOOD_8";
	}
	else if (iParam0 >= 280)
	{
		return "HONOR_GOOD_7";
	}
	else if (iParam0 >= 240)
	{
		return "HONOR_GOOD_6";
	}
	else if (iParam0 >= 200)
	{
		return "HONOR_GOOD_5";
	}
	else if (iParam0 >= 160)
	{
		return "HONOR_GOOD_4";
	}
	else if (iParam0 >= 120)
	{
		return "HONOR_GOOD_3";
	}
	else if (iParam0 >= 80)
	{
		return "HONOR_GOOD_2";
	}
	return "HONOR_GOOD_1";
}

void func_158(int iParam0)
{
	if (func_1())
	{
		func_156(iParam0, "PMPLAYER_CONDITION_WELLBEING", "", 0, 0, 0, 0, 0);
		return;
	}
	if (Global_40.f_11095.f_67 >= 9)
	{
		func_156(iParam0, "PMPLAYER_CONDITION_WELLBEING", MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CONDITION_WELLBEING_SICK2"), 1, 1, 1, "rpg_sick", "pausemenu_player");
	}
	else if (Global_40.f_11095.f_67 >= 7)
	{
		func_156(iParam0, "PMPLAYER_CONDITION_WELLBEING", MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CONDITION_WELLBEING_SICK1"), 1, 1, 1, "rpg_sick", "pausemenu_player");
	}
	else
	{
		func_156(iParam0, "PMPLAYER_CONDITION_WELLBEING", "", 0, 0, 0, 0, 0);
	}
}

void func_159(int iParam0, int iParam1, char* sParam2)
{
	if (func_193(iParam1, 1, 0))
	{
		func_156(iParam0, sParam2, "", 1, 0, 0, 0, 0);
	}
	else
	{
		func_156(iParam0, "PMPLAYER_PERK_UNDISCOVERED_TALISMAN", "", 0, 0, 0, 0, 0);
	}
}

void func_160(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569->f_5.f_147.f_9, bParam0);
}

void func_161(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569->f_5.f_147.f_10, bParam0);
}

int func_162(int iParam0)
{
	return func_279(&(Global_40.f_11095.f_11[iParam0]));
}

void func_163(char* sParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569->f_5.f_147.f_5, sParam0);
}

int func_164(int iParam0)
{
	iParam0 = func_280(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (func_281(iParam0) == 0)
	{
		return 0;
	}
	return 1;
}

int func_165(int iParam0)
{
	iParam0 = func_280(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/];
}

int func_166(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (bParam2)
			{
				return (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true) && PED::GET_MOUNT(iParam0) == iParam1);
			}
			else
			{
				return (PED::IS_PED_ON_MOUNT(iParam0) && PED::GET_MOUNT(iParam0) == iParam1);
			}
		}
	}
	return 0;
}

int func_167(int iParam0)
{
	iParam0 = func_280(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_372;
}

int func_168(int iParam0, int iParam1)
{
	iParam0 = func_280(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return &((Global_40.f_1095.f_1[iParam0 /*436*/])->f_407[iParam1 /*4*/]);
}

float func_169(int iParam0)
{
	int iVar0;
	var uVar1;

	iParam0 = func_280(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	if (!func_282(iParam0))
	{
		return 0f;
	}
	iVar0 = func_165(iParam0);
	uVar1 = func_283(iVar0);
	return uVar1;
}

int func_170(int iParam0, int iParam1)
{
	struct<4> Var0;

	if (!func_284(856287005, iParam0))
	{
		return 0;
	}
	Var0 = { func_285() };
	*iParam1 = func_286(Var0, iParam0, 0);
	if (!func_287(*iParam1, 0))
	{
		return 0;
	}
	return 1;
}

int func_171(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<19> Var1;

	Var1.f_2 = 5;
	Var1.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var1))
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

char* func_172(int iParam0)
{
	if (!func_287(iParam0, 0))
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(func_288(iParam0));
}

struct<8> func_173(int iParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, "", 64);
	iParam0 = func_280(iParam0);
	if (iParam0 == -1)
	{
		return cVar0;
	}
	if (iParam0 >= 7)
	{
		return cVar0;
	}
	return *(Global_40.f_1095.f_1[iParam0 /*436*/]);
}

var func_174(char[4] cParam0)
{
	return cParam0;
}

int func_175(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < &Global_1835011)
	{
		if (MISC::GET_HASH_KEY(&(((*Global_1835011)[iVar0 /*74*/])->f_8)) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_176(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

int func_177(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (MISC::GET_HASH_KEY(&(((*Global_1347702)[iVar0 /*49*/])->f_3)) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_178(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar3 = iParam0;
	iVar4 = iParam1;
	if (Global_1572887->f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 100;
				iParam3 = MISC::GET_HASH_KEY(&(((*Global_1835011)[iParam0 /*74*/])->f_8));
				break;
			case 2:
				iVar1 = 101;
				iVar2 = 170;
				break;
			case 3:
				iVar1 = 171;
				iVar2 = 190;
				break;
			case 4:
				iVar1 = 191;
				iVar2 = 230;
				break;
			case 5:
				iVar1 = 231;
				iVar2 = 260;
				break;
			case 6:
				iVar1 = 261;
				iVar2 = 290;
				break;
			case 7:
				iVar1 = 291;
				iVar2 = 370;
				break;
			case 8:
				iVar1 = 371;
				iVar2 = 570;
				iParam3 = MISC::GET_HASH_KEY(&(((*Global_1347702)[iParam0 /*49*/])->f_3));
				break;
			case 9:
				iVar1 = 571;
				iVar2 = 650;
				break;
			case 11:
				iVar1 = 651;
				iVar2 = 750;
				break;
			case 10:
				return -1;
			case 12:
				return -1;
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 200;
				break;
			case 2:
				iVar1 = 201;
				iVar2 = 15700;
				break;
			case 4:
				iVar1 = 15701;
				iVar2 = 16200;
				break;
			case 12:
				iVar1 = 16201;
				iVar2 = 19200;
				break;
			case 10:
				iVar1 = 19201;
				iVar2 = 20000;
				break;
			case 8:
				return -1;
			case 7:
				return -1;
			case 6:
				return -1;
			default:
				return -1;
		}
	}
	if (iVar2 >= func_289())
	{
		iVar2 = func_289();
	}
	iVar5 = func_290(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_104(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_104(iVar6) == 0)
			{
				return func_291(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
		iVar1 = 751;
		iVar2 = 770;
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_104(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_104(iVar6) == 0)
			{
				return func_291(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0 /*2*/] == iVar5)
			{
				return iVar0;
			}
			iVar0++;
		}
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0 /*2*/] == 0)
			{
				return func_291(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

void func_179(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_180()
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

int func_181(int iParam0)
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
		case 29:
			return 27;
		case 49:
			return 28;
		case 30:
			return 29;
		case 31:
			return 30;
		case 32:
			return 31;
		case 120:
			return 32;
		case 124:
			return 33;
		case 125:
			return 34;
		case 33:
			return 35;
		case 83:
			return 40;
		case 35:
			return 42;
		case 36:
			return 43;
		case 89:
			return 44;
		case 115:
			return 46;
		case 37:
			return 47;
		case 38:
			return 48;
		case 39:
			return 49;
		case 40:
			return 50;
		case 50:
			return 51;
		case 42:
			return 52;
		case 52:
			return 53;
		case 43:
			return 54;
		case 45:
			return 57;
		case 48:
			return 61;
		case 56:
			return 63;
		case 57:
			return 64;
		case 58:
			return 65;
		case 59:
			return 66;
		case 60:
			return 67;
		case 61:
			return 68;
		case 126:
			return 69;
		case 127:
			return 70;
		case 62:
			return 71;
		case 77:
			return 72;
		case 64:
			return 73;
		case 65:
			return 74;
		case 67:
			return 76;
		case 68:
			return 78;
		case 69:
			return 79;
		case 70:
			return 80;
		case 71:
			return 81;
		case 72:
			return 82;
		case 75:
			return 84;
		case 76:
			return 85;
		case 117:
			return 86;
		case 78:
			return 87;
		case 79:
			return 88;
		case 80:
			return 90;
		case 81:
			return 91;
		case 82:
			return 92;
		case 87:
			return 96;
		case 88:
			return 97;
		case 91:
			return 98;
		case 92:
			return 99;
		case 93:
			return 100;
		case 94:
			return 101;
		case 95:
			return 102;
		case 96:
			return 103;
		case 97:
			return 104;
		case 98:
			return 105;
		case 99:
			return 106;
		case 100:
			return 107;
		case 104:
			return 114;
		case 105:
			return 115;
		case 107:
			return 118;
		case 109:
			return 119;
		case 110:
			return 120;
		case 111:
			return 121;
		case 112:
			return 122;
		case 128:
			return 123;
		default:
			break;
	}
	return 0;
}

void func_182(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

bool func_183(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_184(char* sParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(((*Global_1934603)[iVar0 /*16*/])->f_10), sParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_185(int iParam0)
{
	if (func_183(iParam0, 1))
	{
		func_292(1);
	}
}

void func_186(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	if (bParam0)
	{
		func_189(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_189(-615217896 /* GXTEntry: "Eagle Talon Talisman" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_189(655868243 /* GXTEntry: "Iguana Scale Trinket" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_187();
		UNLOCK::_UNLOCK_SET_UNLOCKED(645322743, true);
	}
	else
	{
		func_293(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_294(-615217896 /* GXTEntry: "Eagle Talon Talisman" */);
		func_198(655868243 /* GXTEntry: "Iguana Scale Trinket" */, 1, 1, -142743235, 1);
		func_295(146323340, func_285());
		Var0 = { func_296() };
		if (func_297(&Var0) == -1387633835)
		{
			func_298(&Var0);
			func_299(Var0);
		}
		iVar7 = -868094182; /* GXTEntry: "Tennessee Walker - Chestnut Coat" */
		iVar8 = 1074477367;
		iVar9 = 1;
		func_300(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (func_301(iVar6) == 2010625508)
			{
				func_302(iVar6, iVar7);
				func_303(iVar6, iVar8);
				func_304(iVar6, iVar9);
				func_305(iVar6, 0);
				if (func_306(iVar6))
				{
					func_307(iVar6);
				}
				iVar10 = func_308(iVar8);
				func_309(iVar6, iVar10);
			}
			iVar6++;
		}
		UNLOCK::_UNLOCK_SET_UNLOCKED(645322743, false);
	}
}

int func_187()
{
	if (!func_310(-1898635967, func_285(), 1))
	{
		return 0;
	}
	if (func_138())
	{
		if (!func_310(146323340, func_285(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_188()
{
	func_311(joaat("weapon_pistol_volcanic"));
	func_311(joaat("weapon_shotgun_pump"));
	func_311(joaat("weapon_rifle_varmint"));
}

int func_189(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<13> Var11;
	int iVar34;
	struct<2> Var35;
	bool bVar37;

	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	if (!func_312(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_313(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_314(iParam0, bParam2);
	iVar2 = 0;
	if (func_212(iParam0, 0, 0) == 0)
	{
		if (func_315(iParam0))
		{
			iVar5 = func_316(iParam0);
			iVar6 = func_317(iVar5);
			iVar7 = func_318(iVar6) + 1;
			func_319(iVar5);
			if (func_320(38))
			{
				func_321(483, 0);
			}
			else
			{
				func_321(482, 0);
			}
			if (iVar7 == func_322(iVar6))
			{
				func_189(func_323(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_35() && func_324(4))
				{
					if (func_35() && (func_325(38) || func_320(38)))
					{
						func_327(38, func_323(iVar6), 0, 0, func_326(), 0, -1, 0);
						func_328(2);
					}
					else
					{
						func_327(38, func_323(iVar6), 0, 0, func_326(), 0, -1, 0);
						func_328(1);
					}
				}
			}
			else if (func_35() && func_324(4))
			{
				if (func_35() && (func_325(38) || func_320(38)))
				{
					func_327(38, 0, 0, 0, func_326(), 0, -1, 0);
					func_328(2);
				}
				else
				{
					func_327(38, 0, 0, 0, func_326(), 0, -1, 0);
					func_328(1);
				}
			}
			if (func_35() && func_324(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_35() && (func_325(38) || func_320(38)))
					{
						func_329(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_329(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_330(iParam0) == joaat("clothing"))
	{
		if ((!func_331(iParam0, 866047851) && !func_331(iParam0, -1979000645)) && !func_331(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_332(iParam0, 8388608) && !func_205(28))
	{
		func_333(28);
	}
	if (!bVar3)
	{
		if (func_331(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_334(iParam0) == -1447088266)
			{
				iVar1 = func_336(func_335(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_23() == -1)
					{
						func_200(iVar1);
					}
					if (func_337(0) && func_201(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_338(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
				if (WEAPON::_IS_AMMO_VALID(iVar1))
				{
					if (func_23() == -1)
					{
						func_200(iParam0);
					}
					if (func_337(0) && func_201(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_338(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_330(iParam0) == joaat("weapon"))
		{
			if (!func_339(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_330(iParam0) == joaat("ammo") && func_340(iParam0))
		{
			if (!func_341(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_331(iParam0, 866047851))
		{
			func_342(iParam0);
		}
		else if (func_331(iParam0, 2000026003))
		{
			func_343(iParam0);
		}
		else if (func_331(iParam0, -103750053))
		{
			func_142(func_213(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_142(func_61(-717883113, 2091222383), iVar0);
		}
		else if (func_331(iParam0, -121341956) && !func_331(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_130(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_321(498, 0);
				}
			}
			if (func_331(iParam0, -2017733358) || func_331(iParam0, -1369131378))
			{
				func_344(iParam0);
			}
		}
		else if (func_331(iParam0, -136654233))
		{
			if (func_331(iParam0, -1021472396))
			{
			}
		}
		else if (func_331(iParam0, -1466706512) && func_331(iParam0, 1147021565))
		{
			func_321(484, 0);
		}
		else if (func_331(iParam0, 1147021565) && func_331(iParam0, -524514947))
		{
		}
		else if (func_331(iParam0, 554195525))
		{
		}
		else if (func_331(iParam0, 589988438))
		{
			if (func_345())
			{
				func_346(1339418451, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_331(iParam0, 787083290) && func_331(iParam0, 949916894))
		{
			func_347(iParam0);
		}
		else if (func_331(iParam0, -1718133314))
		{
			func_348(iParam0);
		}
		else if (func_331(iParam0, -1738650224))
		{
			func_349(iParam0);
		}
		else if (func_331(iParam0, -1112814642) && func_331(iParam0, 949916894))
		{
			func_350(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_331(iParam0, 1841149704))
		{
			func_351();
		}
		else if (func_331(iParam0, 606799272))
		{
			func_352(iParam0, iParam1);
			func_353(iParam0);
		}
		else if (func_331(iParam0, -1112814642) && func_331(iParam0, -1697809989))
		{
			func_354(iParam0, 0, 0, 0);
		}
		else if (func_331(iParam0, -2017733358) || func_331(iParam0, -1369131378))
		{
			func_344(iParam0);
		}
		else if (func_331(iParam0, -1921346699))
		{
			if (func_23() != -1)
			{
				return 0;
			}
			func_355(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_331(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868: /* GXTEntry: "Special Lake Lure" */
					if (!func_193(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_189(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438: /* GXTEntry: "Special River Lure" */
					if (!func_193(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_189(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217: /* GXTEntry: "Special Swamp Lure" */
					if (!func_193(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_189(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653: /* GXTEntry: "Lake Lure" */
					if (!func_193(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_189(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425: /* GXTEntry: "River Lure" */
					if (!func_193(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_189(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104: /* GXTEntry: "Swamp Lure" */
					if (!func_193(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_189(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_331(iParam0, -839724752) && func_332(iParam0, 4))
		{
			if (!func_320(42))
			{
				func_356(iParam0);
			}
		}
		else if (func_331(iParam0, 1399091007))
		{
			func_357(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_331(iParam0, 1248798204))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case -593948563: /* GXTEntry: "Legend of the East Satchel" */
					iVar8 = -1281487556; /* GXTEntry: "Legend of the East Satchel" */
					break;
				case -1421669656: /* GXTEntry: "Tonics Satchel" */
					iVar8 = -59585102; /* GXTEntry: "Tonics Satchel" */
					break;
				case -830181022: /* GXTEntry: "Ingredients Satchel" */
					iVar8 = 1018123892; /* GXTEntry: "Ingredients Satchel" */
					break;
				case 917695895: /* GXTEntry: "Kit Satchel" */
					iVar8 = -1455768246; /* GXTEntry: "Kit Satchel" */
					break;
				case -1580595448: /* GXTEntry: "Provisions Satchel" */
					iVar8 = -921879912; /* GXTEntry: "Provisions Satchel" */
					break;
				case 1309992709: /* GXTEntry: "Materials Satchel" */
					iVar8 = 982182330; /* GXTEntry: "Materials Satchel" */
					break;
				case 1541618973: /* GXTEntry: "Valuables Satchel" */
					iVar8 = -1406390556; /* GXTEntry: "Valuables Satchel" */
					break;
			}
			if (iVar8 != 0)
			{
				func_189(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		switch (iParam0)
		{
			case 990323211: /* GXTEntry: "Bundle of Arrows" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1930309310;
				break;
			case 1143540373: /* GXTEntry: "Poison Throwing Knives" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1372580021;
				break;
			case -1073808995: /* GXTEntry: "Live Crickets" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1557306571;
				break;
			case 1903483453: /* GXTEntry: "Live Worms" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 306085243;
				break;
			case 224572565: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			case -13395913: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			case 1859340712: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			case -1614861441: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			case -1336735809: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			case -1109613870: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			case 637788839: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			case -1161163727: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			case 648503798: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			case -1434556002: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			case -843069275: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			case 1356680930: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			case -1185145312: /* GXTEntry: "Upgraded Off-Hand Holster" */
				func_333(24);
				if (&Global_1946804->f_1497.f_1[27 /*3*/] == &Global_1946804->f_57[27 /*11*/])
				{
					func_358(PLAYER::PLAYER_PED_ID(), -1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_359(&iVar9, 0))
				{
					func_201(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303: /* GXTEntry: "Upgraded Bandolier" */
				if (func_23() == -1 && &Global_1946804->f_1497.f_1[25 /*3*/] == &Global_1946804->f_57[25 /*11*/])
				{
					func_358(PLAYER::PLAYER_PED_ID(), 1171350303 /* GXTEntry: "Upgraded Bandolier" */, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("weapon_kit_binoculars"):
				break;
			case 2131771850:
				func_321(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_360();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_361();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_362();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_363();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_364();
				break;
			case -102111672: /* GXTEntry: "Map" */
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584: /* GXTEntry: "Jack Hall Gang Map 1" */
				func_365(499813453, 854119837, 0);
				func_366(499813453, 0);
				func_367(1);
				break;
			case 2127812557:
				func_365(499813453, -1292544588, 0);
				func_366(499813453, 0);
				func_367(2);
				break;
			case 808991383: /* GXTEntry: "Jack Hall Gang Map 3" */
				func_365(499813453, -1003325394, 0);
				func_366(499813453, 0);
				func_367(4);
				break;
			case 1134518629: /* GXTEntry: "High Stakes Treasure Map 1" */
				func_365(666607663, -335460405, 0);
				func_366(666607663, 0);
				func_368(1);
				break;
			case 902940106: /* GXTEntry: "High Stakes Treasure Map 2" */
				func_365(666607663, 903797617, 0);
				func_366(666607663, 0);
				func_368(2);
				break;
			case -418174898: /* GXTEntry: "High Stakes Treasure Map 3" */
				func_365(666607663, 669728650, 0);
				func_366(666607663, 0);
				func_368(4);
				break;
			case -648114971: /* GXTEntry: "The Poisonous Trail Map 1" */
				func_365(-220219788, 1214120047, 0);
				func_366(-220219788, 0);
				func_369(1);
				break;
			case 211153747: /* GXTEntry: "The Poisonous Trail Map 2" */
				func_365(-220219788, 655769340, 0);
				func_366(-220219788, 0);
				func_369(2);
				break;
			case -32876996: /* GXTEntry: "The Poisonous Trail Map 3" */
				func_365(-220219788, 885316185, 0);
				func_366(-220219788, 0);
				func_369(4);
				break;
			case 1191437462: /* GXTEntry: "Le Tresor des Morts Map 1" */
				func_365(218622660, -1491419385, 0);
				func_366(218622660, 0);
				func_196(1);
				break;
			case 1119149048: /* GXTEntry: "Le Tresor des Morts Riddle Note" */
				func_365(218622660, 1809565830, 0);
				func_366(218622660, 0);
				func_196(2);
				break;
			case 506073827: /* GXTEntry: "The Elemental Trail Map 1" */
				func_365(390004462, -628873767, 0);
				func_366(390004462, 0);
				func_370(1);
				break;
			case -1876986168: /* GXTEntry: "The Elemental Trail Map 2" */
				func_365(390004462, -405421956, 0);
				func_366(390004462, 0);
				func_370(2);
				break;
			case 2142623221:
				func_365(390004462, -1108972386, 0);
				func_366(390004462, 0);
				func_370(4);
				break;
			case 1508215381: /* GXTEntry: "Landmarks of Riches Map 1" */
				func_365(6410548, 1053716392, 0);
				func_366(6410548, 0);
				func_371(1);
				break;
			case -888935280: /* GXTEntry: "Landmarks of Riches Map 2" */
				func_365(6410548, 806507056, 0);
				func_366(6410548, 0);
				func_371(2);
				break;
			case -1252474566: /* GXTEntry: "Landmarks of Riches Map 3" */
				func_365(6410548, 1571925350, 0);
				func_366(6410548, 0);
				func_371(4);
				break;
			case -1465702449: /* GXTEntry: "Landmarks of Riches Map 4" */
				func_365(6410548, 1330352282, 0);
				func_366(6410548, 0);
				func_371(8);
				break;
			case -21093309: /* GXTEntry: "Aged Pirate Rum" */
				func_372(242, func_288(-21093309 /* GXTEntry: "Aged Pirate Rum" */), 0);
				break;
			case 204375141: /* GXTEntry: "Ginseng Elixir" */
				func_372(240, func_288(204375141 /* GXTEntry: "Ginseng Elixir" */), 0);
				break;
			case -417963070: /* GXTEntry: "Valerian Root" */
				func_372(241, func_288(-417963070 /* GXTEntry: "Valerian Root" */), 0);
				break;
			case -1080874779: /* GXTEntry: "Special Health Cure" */
			case -755485480: /* GXTEntry: "Potent Health Cure" */
			case 230530039: /* GXTEntry: "Health Cure" */
			case 299161628: /* GXTEntry: "Moonshine" */
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_373(594, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health Bar." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1067476102: /* GXTEntry: "Potent Bitters" */
			case -541584777: /* GXTEntry: "Opened Cocaine Gum" */
			case 206762213: /* GXTEntry: "Cocaine Gum" */
			case 1566032147: /* GXTEntry: "Special Bitters" */
			case 1973952589: /* GXTEntry: "Bitters" */
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_373(594, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Stamina Bar." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -653299524: /* GXTEntry: "Snake Oil" */
			case -486559882: /* GXTEntry: "Potent Snake Oil" */
			case -324053813: /* GXTEntry: "Chewing Tobacco" */
			case -223790555: /* GXTEntry: "Special Snake Oil" */
			case 998010398: /* GXTEntry: "Opened Chewing Tobacco" */
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_373(594, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1976480343: /* GXTEntry: "Special Miracle Tonic" */
			case -953313786: /* GXTEntry: "Miracle Tonic" */
			case 730856618: /* GXTEntry: "Potent Miracle Tonic" */
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_373(594, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health, Stamina and Dea" +
    "d Eye Bars." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -2034071102: /* GXTEntry: "Lamb Heart" */
			case -1939600995: /* GXTEntry: "Prime Rib" */
			case -1760041550: /* GXTEntry: "High Quality Beef Stew" */
			case -1708424762: /* GXTEntry: "Regional Beef Stew" */
			case -1598782722: /* GXTEntry: "Consomme" */
			case -1505924449: /* GXTEntry: "Fried Catfish" */
			case -1403873319: /* GXTEntry: "Prairie Chicken" */
			case -1335566375: /* GXTEntry: "Lamb Fry" */
			case -1192685521: /* GXTEntry: "Oyster Stew" */
			case 144810727: /* GXTEntry: "Turtle Soup" */
			case 567164682: /* GXTEntry: "Oatmeal" */
			case 1174625611: /* GXTEntry: "Corned Beef Hash" */
			case 1955751248: /* GXTEntry: "Roast Beef" */
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_373(595, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1977068039: /* GXTEntry: "High Quality Beef and Eggs Stew" */
			case -399865011: /* GXTEntry: "Regional Beef and Eggs Stew" */
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_373(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case 80178851: /* GXTEntry: "Hair Tonic" */
				func_321(488, 0);
				break;
			case 1613651027: /* GXTEntry: "Hair Pomade" */
				func_321(491, 0);
				break;
			case -885810591: /* GXTEntry: "Premium Cigarettes" */
				func_321(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_189(func_374(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_189(func_375(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535: /* GXTEntry: "Ground Coffee" */
				if (func_205(1))
				{
					func_321(487, 0);
				}
				break;
			case -898386032: /* GXTEntry: "Gun Oil" */
				func_321(486, 0);
				break;
			case -2035110427: /* GXTEntry: "Mortar and Pestle" */
				if (func_23() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case 1510719693: /* GXTEntry: "Coffee Percolator" */
				func_321(496, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return 0;
		}
		iVar10 = iParam0;
		func_376(&iVar10);
		if (!func_377(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_337(0))
		{
			return 1;
		}
		if (func_330(iParam0) == joaat("clothing"))
		{
			func_378(iParam0);
		}
		if (func_331(iParam0, -1979000645))
		{
			func_379(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_337(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_189(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_380(iVar2, 0);
		}
	}
	Var35 = { func_381(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::_0x6A0184E904CDF25E(&Var35, iVar0);
	}
	func_382(iParam0);
	if (fParam6 > 0f)
	{
		if (func_331(iParam0, -839724752))
		{
			func_383(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_384(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

void func_190(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1426541042))
		{
			return;
		}
		func_189(-1080874779 /* GXTEntry: "Special Health Cure" */, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_189(-223790555 /* GXTEntry: "Special Snake Oil" */, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_189(1566032147 /* GXTEntry: "Special Bitters" */, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_189(891311852 /* GXTEntry: "Minty Pork" */, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_189(-1353737667 /* GXTEntry: "Oregano Prime Beef" */, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_189(-330313895 /* GXTEntry: "Thyme Game" */, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_189(-2051332199 /* GXTEntry: "Oleander Sage" */, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_189(1237770824 /* GXTEntry: "Animal Fat" */, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_189(-1795542128 /* GXTEntry: "Special Horse Reviver" */, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_189(-1757588258 /* GXTEntry: "Horse Meal" */, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_189(-1921080134 /* GXTEntry: "Classic Oatcakes" */, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(-1426541042, true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1426541042))
		{
			return;
		}
		func_198(-1080874779 /* GXTEntry: "Special Health Cure" */, 3, 1, -142743235, 1);
		func_198(-223790555 /* GXTEntry: "Special Snake Oil" */, 3, 1, -142743235, 1);
		func_198(1566032147 /* GXTEntry: "Special Bitters" */, 3, 1, -142743235, 1);
		func_198(891311852 /* GXTEntry: "Minty Pork" */, 5, 1, -142743235, 1);
		func_198(-1353737667 /* GXTEntry: "Oregano Prime Beef" */, 5, 1, -142743235, 1);
		func_198(-330313895 /* GXTEntry: "Thyme Game" */, 5, 1, -142743235, 1);
		func_198(-2051332199 /* GXTEntry: "Oleander Sage" */, 5, 1, -142743235, 1);
		func_198(1237770824 /* GXTEntry: "Animal Fat" */, 5, 1, -142743235, 1);
		func_198(-1795542128 /* GXTEntry: "Special Horse Reviver" */, 3, 1, -142743235, 1);
		func_198(-1757588258 /* GXTEntry: "Horse Meal" */, 3, 1, -142743235, 1);
		func_198(-1921080134 /* GXTEntry: "Classic Oatcakes" */, 10, 1, -142743235, 1);
		iVar1 = -868094182; /* GXTEntry: "Tennessee Walker - Chestnut Coat" */
		iVar2 = 1074477367;
		iVar3 = 1;
		func_300(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_301(iVar0) == 153881023)
			{
				func_302(iVar0, iVar1);
				func_303(iVar0, iVar2);
				func_304(iVar0, iVar3);
				func_305(iVar0, 0);
				if (func_306(iVar0))
				{
					func_307(iVar0);
				}
				iVar4 = func_308(iVar2);
				func_309(iVar0, iVar4);
			}
			iVar0++;
		}
		func_187();
		UNLOCK::_UNLOCK_SET_UNLOCKED(-1426541042, false);
	}
}

void func_191(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_385(iParam0);
	if (bParam3)
	{
		func_386(iParam0, sParam1, iParam2);
	}
}

void func_192(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_387(iParam0, sParam4, iParam5);
	}
	func_388(iParam0, bParam1, fParam2, iParam3, iParam7);
}

bool func_193(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_287(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_330(iParam0);
	if (iVar0 == joaat("weapon"))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == joaat("ammo"))
	{
		if (!func_389(iParam0, 1))
		{
			return false;
		}
	}
	return func_212(iParam0, 0, bParam2) >= iParam1;
}

bool func_194(int iParam0)
{
	int iVar0;

	iVar0 = func_220(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_195(int iParam0)
{
	return (Global_40.f_12004.f_10 && iParam0) != 0;
}

void func_196(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_197(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 - (Global_40.f_12004.f_10 && iParam0));
}

int func_198(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;

	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_390(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_384(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_193(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_381(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((func_212(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_212(iParam0, 0, 0) - iParam1) < 0)
		{
			func_198(iParam0, func_212(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_330(iParam0) == joaat("weapon"))
	{
		if (!func_391(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_392(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_337(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_384(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_393(iParam0, iParam1);
	return 1;
}

struct<14> func_199()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;
	struct<10> Var17;
	struct<14> Var39;

	Var3.f_9 = -1591664384;
	Var17.f_9 = -1591664384;
	if (func_394("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_395(&Var3, iVar2, iVar0, iVar1))
			{
				Jump @136; //curOff = 80
			}
			else if (Var3.f_4 != joaat("weapon_revolver_doubleaction"))
			{
			}
			else if (func_396(Var3.f_4, &Var17, Var3.f_9))
			{
			}
			else
			{
				func_397(iVar0);
				return Var3;
			}
			iVar2++;
		}
		func_397(iVar0);
	}
	Var39.f_9 = -1591664384;
	return Var39;
}

void func_200(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_204(iParam0))
	{
		return;
	}
	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(iVar0, true);
}

int func_201(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_MELEE(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
	{
		Var0 = { func_398(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_399((375 + iVar28), 1);
			if (func_400(iParam0, &Var0, iVar5, 0))
			{
				if (func_396(iParam0, &Var6, iVar5))
				{
					Var29 = { func_401(iParam0, Var0, iVar5, 0) };
					func_402(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_337(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
					{
						return 0;
					}
					func_338(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_403(iParam0, iParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}

void func_202(int iParam0, struct<4> Param1, int iParam5)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<4> Var19;

	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (func_404(Param1, iParam5, &Var5, 0))
	{
		func_402(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_405(iParam0, &Var19, &Var0, 1, 752097756, 0);
	func_406(Var19, 1);
}

bool func_203()
{
	return (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_43799) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_43799, 0));
}

bool func_204(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

int func_205(int iParam0)
{
	if (!func_407(iParam0))
	{
		return 0;
	}
	return func_408(iParam0);
}

int func_206(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_207(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_409(vParam0, 0f, 0f, 0, 2);
	return func_409(vParam0, ((*Global_1894052)[iVar0 /*3*/])->f_1, ((*Global_1894052)[iVar0 /*3*/])->f_2, Global_1894052[iVar0 /*3*/], 4);
}

int func_208()
{
	return Global_40.f_4283;
}

bool func_209(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_210(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 4;
		case 2:
			return 8;
		case 3:
			return 16;
		case 4:
			return 32;
		case 5:
			return 64;
		case 6:
			return 128;
		case 7:
			return 256;
		case 8:
			return 512;
		case 9:
			return 1024;
		case 10:
			return 2048;
		case 11:
			return 4096;
		case 12:
			return 8192;
		case 13:
			return 16384;
		case 14:
			return 32768;
		case 15:
			return 65536;
		case 16:
			return 131072;
		case 17:
			return 262144;
		case 18:
			return 524288;
		case 19:
			return 1048576;
		default:
			break;
	}
	return 1;
}

var func_211()
{
	return Global_40.f_8863.f_148;
}

int func_212(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_330(iParam0);
	if (iVar0 == joaat("ammo") || (bParam1 && iVar0 == joaat("weapon")))
	{
		iVar1 = func_390(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("weapon"))
	{
		return func_410(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_411(bParam2), iParam0, 0);
	return iVar2;
}

struct<2> func_213(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

int func_214(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -707360575;
		case 1:
			return -1278339625;
		case 2:
			return 1880205078;
		case 3:
			return -1201174711;
		case 4:
			return 151582343;
		case 5:
			return 1231074654;
		case 6:
			return -642492359;
		case 7:
			return 1673898385;
		case 8:
			return 5171247;
		default:
			break;
	}
	return 0;
}

int func_215(int iParam0)
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

int func_216(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return 0;
		}
		iVar0 = (Global_12105[iParam0 /*7*/])->f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return 0;
		}
		iVar0 = func_126(iParam0);
	}
	if (iVar0 == 1)
	{
		return 1;
	}
	if (iVar0 == 2)
	{
		return 1;
	}
	return 0;
}

void func_217(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_15(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_194(iParam0) && !func_216(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_129(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_194(iParam0))
	{
		iParam2 = -1;
	}
	if (func_126(iParam0) == 3 || (func_126(iParam0) == 1 && STATS::_0x01F4D242765C6B24(func_129(iParam0))))
	{
		func_412(func_39(iParam0), func_129(iParam0), iParam2);
		if ((!func_15(Global_1572864->f_8) && !func_33(0, 1, 0)) && !func_24(&Global_1935630, 32768))
		{
			iVar0 = func_413(iParam0);
			if (iVar0 != -1)
			{
				func_88(0);
			}
			else if (func_39(iParam0) == 8)
			{
				iVar0 = func_414();
				if (iVar0 != -1)
				{
					func_88(0);
				}
			}
		}
	}
	func_415(iParam0, 0);
	if (func_38(0) == iParam0)
	{
		func_416(1);
		func_417(0);
		func_418(1);
	}
	func_419(iParam0, 1);
	func_420(iParam0);
}

int func_218(int iParam0)
{
	int iVar0;

	if (&Global_1898329 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (&Global_1898329 - 1))
	{
		if (Global_1898330[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_219(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_105(iParam0);
	*uParam1 = func_206(iParam0);
	*uParam2 = func_421(iParam0);
}

int func_220(int iParam0)
{
	if (!func_15(iParam0))
	{
		return -1;
	}
	return func_126(iParam0);
}

int func_221()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 24)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(func_422(iVar1)) > 0)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_222(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 499813453:
			iVar0 = -696705861;
			break;
		case 666607663:
			iVar0 = 1595354593;
			break;
		case -220219788:
			iVar0 = -2016706455;
			break;
		case 218622660:
			iVar0 = 2056119786;
			break;
		case 390004462:
			iVar0 = -878376933;
			break;
		case 6410548:
			iVar0 = 975496781;
			break;
		default:
			return false;
	}
	return COLLECTION::_0xF83D3DDA4D3C8169(iVar0) > 0;
}

int func_223()
{
	return COLLECTION::_0x3A65F4844913A047(678508515, -1160144609);
}

void func_224(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569->f_5.f_147.f_6, bParam0);
}

void func_225(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569->f_5.f_147.f_7, bParam0);
}

void func_226(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569->f_5.f_147.f_8, bParam0);
}

void func_227(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569->f_5.f_147.f_11, bParam0);
}

void func_228(bool bParam0, char* sParam1, char* sParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569->f_5.f_147.f_18, bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569->f_5.f_147.f_19, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569->f_5.f_147.f_20, sParam2);
}

char* func_229(int iParam0, bool bParam1)
{
	if (Global_40.f_39 == 11966224 || bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return "PLAYER_JOHN_GENERAL";
			case 1:
				return "PLAYER_JOHN_HEALTH";
			case 2:
				return "PLAYER_JOHN_STAMINA";
			case 3:
				return "PLAYER_JOHN_DEADEYE";
			case 4:
				return "HORSE_GENERAL";
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return "PLAYER_ARTHUR_GENERAL";
			case 1:
				return "PLAYER_ARTHUR_HEALTH";
			case 2:
				return "PLAYER_ARTHUR_STAMINA";
			case 3:
				return "PLAYER_ARTHUR_DEADEYE";
			case 4:
				return "HORSE_GENERAL";
			default:
				break;
		}
	}
	return "";
}

void func_230(char* sParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = func_423();
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569->f_5.f_147.f_3, sParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569->f_5.f_147.f_4, sParam1);
}

char* func_231(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PMPLAYER_GENERAL_DESC";
		case 1:
			return "PMPLAYER_HEALTH_DESC";
		case 2:
			return "PMPLAYER_STAMINA_DESC";
		case 3:
			return "PMPLAYER_DEADEYE_DESC";
		case 4:
			return "PMPLAYER_HORSE_DESC";
		default:
			break;
	}
	return "";
}

void func_232(char* sParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569->f_5.f_147.f_2, sParam0);
}

void func_233(char* sParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569->f_5.f_147.f_1, sParam0);
}

char* func_234()
{
	if (Global_40.f_7748.f_1 >= 7)
	{
		return "PMPLAYER_GENERAL_OVERVIEW_HAIR_LONG";
	}
	else if (Global_40.f_7748.f_1 >= 4)
	{
		return "PMPLAYER_GENERAL_OVERVIEW_HAIR_MEDIUM";
	}
	return "PMPLAYER_GENERAL_OVERVIEW_HAIR_SHORT";
}

void func_235(int iParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, char* sParam10)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1955569->f_5.f_147.f_24[iParam0 /*23*/])->f_4, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1955569->f_5.f_147.f_24[iParam0 /*23*/])->f_5, sParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_147.f_24[iParam0 /*23*/])->f_1, bParam3);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1955569->f_5.f_147.f_24[iParam0 /*23*/])->f_2, sParam10);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_147.f_24[iParam0 /*23*/])->f_6, bParam4);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_147.f_24[iParam0 /*23*/])->f_7, bParam5);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_147.f_24[iParam0 /*23*/])->f_11, bParam6);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT((Global_1955569->f_5.f_147.f_24[iParam0 /*23*/])->f_8, iParam7);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT((Global_1955569->f_5.f_147.f_24[iParam0 /*23*/])->f_9, iParam8);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT((Global_1955569->f_5.f_147.f_24[iParam0 /*23*/])->f_10, iParam9);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_147.f_24[iParam0 /*23*/])->f_12, false);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1955569->f_5.f_147.f_21, iParam0, "player_attribute_item", &(Global_1955569->f_5.f_147.f_24[iParam0 /*23*/]));
}

char* func_236()
{
	if (&Global_40.f_7731[0 /*5*/] >= 8 || &Global_40.f_7731[2 /*5*/] >= 8)
	{
		return "PMPLAYER_GENERAL_OVERVIEW_HAIR_LONG";
	}
	else if (&Global_40.f_7731[0 /*5*/] >= 4 || &Global_40.f_7731[2 /*5*/] >= 4)
	{
		return "PMPLAYER_GENERAL_OVERVIEW_HAIR_MEDIUM";
	}
	return "PMPLAYER_GENERAL_OVERVIEW_HAIR_SHORT";
}

float func_237()
{
	int iVar0;
	float fVar1;

	iVar0 = func_424();
	fVar1 = 1f;
	if (iVar0 < 80)
	{
		return fVar1;
	}
	if (iVar0 >= 280)
	{
		fVar1 = (fVar1 - 0.5f);
	}
	else if (iVar0 >= 200)
	{
		fVar1 = (fVar1 - 0.25f);
	}
	else
	{
		fVar1 = (fVar1 - 0.1f);
	}
	return fVar1;
}

char* func_238()
{
	if (func_1())
	{
		return "PLAYER_JOHN_WEIGHT";
	}
	return "PLAYER_ARTHUR_WEIGHT";
}

void func_239(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;

	switch (iParam0)
	{
		case 0:
			fVar0 = (MISC::ABSF(Global_40.f_11095.f_45) * 100f);
			fVar1 = (MISC::ABSF(Global_40.f_11095.f_62) * 100f);
			if (Global_40.f_11095.f_45 == 0f)
			{
				func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_STAMINA_DRAIN"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 0), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Stamina");
				func_235(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_DAMAGE_ABSORPTION"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 0), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
			}
			else if (Global_40.f_11095.f_45 > 0f)
			{
				func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_STAMINA_DRAIN"), MISC::_CREATE_VAR_STRING(6, "PMPLAYER_CORE_PC_MINUS_VALUE", fVar0), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Stamina");
				func_250(0, "RPG_ARROW_UP", 0);
				func_235(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_DAMAGE_ABSORPTION"), MISC::_CREATE_VAR_STRING(6, "PMPLAYER_CORE_PC_PLUS_VALUE", fVar1), 1, 0, 1, 0, 0f, 0f, 0f, "RPG_Health");
				func_250(1, "RPG_ARROW_DOWN", 0);
			}
			else
			{
				func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_STAMINA_DRAIN"), MISC::_CREATE_VAR_STRING(6, "PMPLAYER_CORE_PC_PLUS_VALUE", fVar0), 1, 0, 1, 0, 0f, 0f, 0f, "RPG_Stamina");
				func_250(0, "RPG_ARROW_DOWN", 0);
				func_235(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_DAMAGE_ABSORPTION"), MISC::_CREATE_VAR_STRING(6, "PMPLAYER_CORE_PC_MINUS_VALUE", fVar1), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
				func_250(1, "RPG_ARROW_UP", 0);
			}
			break;
		case 1:
		case 2:
		case 3:
			fVar2 = func_70();
			if (fVar2 < 0f)
			{
				func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", MISC::ABSI(BUILTIN::ROUND((100f * fVar2)))), 1, 0, 1, 0, 0f, 0f, 0f, func_425(iParam0));
				func_250(0, "RPG_ARROW_DOWN", 0);
			}
			else if (fVar2 == 0f)
			{
				func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", MISC::ABSI(BUILTIN::ROUND((100f * fVar2)))), 1, 0, 0, 0, 0f, 0f, 0f, func_425(iParam0));
			}
			else
			{
				func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", MISC::ABSI(BUILTIN::ROUND((100f * fVar2)))), 1, 0, 0, 0, 0f, 0f, 0f, func_425(iParam0));
				func_250(0, "RPG_ARROW_UP", 0);
			}
			break;
	}
}

char* func_240()
{
	if (func_1())
	{
		return "PLAYER_JOHN_TEMPERATURE";
	}
	return "PLAYER_ARTHUR_TEMPERATURE";
}

char* func_241()
{
	if (func_1())
	{
		return "pausemenu_player_update";
	}
	return "pausemenu_player";
}

void func_242()
{
	if (func_68() || func_69())
	{
		func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 900), 1, 0, 1, 0, 0f, 0f, 0f, "RPG_Health");
		func_250(0, "RPG_ARROW_DOWN", 0);
	}
	else
	{
		func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 0), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
	}
}

char* func_243()
{
	if (func_1())
	{
		return "PLAYER_JOHN_TOXICITY";
	}
	return "PLAYER_ARTHUR_TOXICITY";
}

char* func_244()
{
	if (func_1())
	{
		return "pausemenu_player_update";
	}
	return "pausemenu_player";
}

void func_245()
{
	if (Global_40.f_11095.f_43)
	{
		func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 900), 1, 0, 1, 0, 0f, 0f, 0f, "RPG_Health");
		func_250(0, "RPG_ARROW_DOWN", 0);
	}
	else
	{
		func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 0), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
	}
}

char* func_246()
{
	if (func_1())
	{
		return "PLAYER_JOHN_WELLBEING";
	}
	return "PLAYER_ARTHUR_WELLBEING";
}

void func_247(bool bParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	char* sVar1;
	bool bVar2;
	int iVar3;

	fVar0 = 0f;
	sVar1 = "PMPLAYER_CORE_PC_PLUS_VALUE";
	if (!func_1())
	{
		if (Global_40.f_11095.f_67 >= 7)
		{
			fVar0 = MISC::ABSF((100f * func_73()));
			sVar1 = "PMPLAYER_CORE_PC_PLUS_VALUE";
			bVar2 = true;
		}
	}
	if (bParam0)
	{
		func_235(iVar3, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, sVar1, BUILTIN::ROUND(fVar0)), 1, 0, bVar2, 0, 0f, 0f, 0f, "RPG_Health");
		if (bVar2)
		{
			func_250(iVar3, "RPG_ARROW_DOWN", 0);
		}
		iVar3++;
	}
	if (bParam1)
	{
		func_235(iVar3, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, sVar1, BUILTIN::ROUND(fVar0)), 1, 0, bVar2, 0, 0f, 0f, 0f, "RPG_Stamina");
		if (bVar2)
		{
			func_250(iVar3, "RPG_ARROW_DOWN", 0);
		}
		iVar3++;
	}
	if (bParam2)
	{
		func_235(iVar3, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, sVar1, BUILTIN::ROUND(fVar0)), 1, 0, bVar2, 0, 0f, 0f, 0f, "RPG_Dead_Eye");
		if (bVar2)
		{
			func_250(iVar3, "RPG_ARROW_DOWN", 0);
		}
	}
}

void func_248(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!func_193(iParam0, 1, 0))
	{
		func_230("UNDISCOVERED", 0);
		func_232("PMPLAYER_PERK_UNDISCOVERED_TALISMAN_DESC");
		func_233("PMPLAYER_PERK_UNDISCOVERED_TALISMAN");
	}
	else
	{
		func_230(sParam3, sParam4);
		func_232(sParam2);
		func_233(sParam1);
	}
	func_163("PMPLAYER_PERK_TOOLTIP");
}

void func_249(int iParam0)
{
	if (!func_193(2131771850, 1, 0))
	{
		func_230("UNDISCOVERED", 0);
		func_232("PMPLAYER_PERK_UNDISCOVERED_TALISMAN_DESC");
		func_233("PMPLAYER_PERK_UNDISCOVERED_TALISMAN");
	}
	else
	{
		func_230("PERK_LEGEND_OUTFIT", "pausemenu_player_update");
		func_232("CLOTHING_LEGENDARY_EAST_OUTFIT_DESC");
		func_233("CLOTHING_LEGENDARY_EAST_OUTFIT");
		switch (iParam0)
		{
			case 0:
			case 1:
			case 2:
				func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", 10), 1, 0, 0, 0, 0f, 0f, 0f, func_426(iParam0));
				func_235(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_XP_BONUS"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 10), 1, 0, 0, 0, 0f, 0f, 0f, func_426(iParam0));
				break;
			default:
				func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_WEAPON_CONDITION"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 10), 1, 0, 0, 0, 0, 0, 0, 0);
				func_235(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_LOOT_BONUS"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 10), 1, 0, 0, 0, 0, 0, 0, 0);
				func_235(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_MELEE_RESIST"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", 10), 1, 0, 0, 0, 0, 0, 0, 0);
				func_235(3, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_DAMAGE_RESIST"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", 10), 1, 0, 0, 0, 0, 0, 0, 0);
				func_235(4, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_EAGLE_EYE_DURATION"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_TIME_VALUE_SECONDS", 5), 1, 0, 0, 0, 0, 0, 0, 0);
				break;
		}
	}
	func_163("PMPLAYER_PERK_TOOLTIP");
}

void func_250(int iParam0, char* sParam1, char* sParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1955569->f_5.f_147.f_24[iParam0 /*23*/])->f_13, sParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1955569->f_5.f_147.f_24[iParam0 /*23*/])->f_14, sParam2);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1955569->f_5.f_147.f_24[iParam0 /*23*/])->f_14, "pausemenu_player_update");
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_147.f_24[iParam0 /*23*/])->f_12, true);
}

void func_251(int iParam0, char* sParam1, char* sParam2, char* sParam3)
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	char* sVar5;

	fVar0 = &Global_40.f_11095.f_11[iParam0];
	iVar1 = func_279(fVar0);
	fVar2 = BUILTIN::TO_FLOAT(func_427(iVar1 + 1));
	if (iVar1 == 7)
	{
		fVar2 = BUILTIN::TO_FLOAT(1100);
	}
	func_235(0, MISC::_CREATE_VAR_STRING(2, sParam1), MISC::_CREATE_VAR_STRING(18, "PMPLAYER_VALUE_X_OF_Y", BUILTIN::FLOOR(fVar0), fVar2), 0, 0, 0, 0, 0, 0, 0, 0);
	func_235(1, MISC::_CREATE_VAR_STRING(2, sParam2), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", iVar1 + 1, 7 + 1), 0, 0, 0, 0, 0, 0, 0, 0);
	switch (iParam0)
	{
		case 0:
			iVar3 = func_212(-1845241476, 0, 0);
			if (iVar3 > 0)
			{
				func_235(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HEALTH_PROGRESSION_STAT_BONUS"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", iVar3, 2), 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		case 1:
			iVar3 = func_212(1654063339, 0, 0);
			if (iVar3 > 0)
			{
				func_235(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_STAMINA_PROGRESSION_STAT_BONUS"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", iVar3, 2), 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		case 2:
			iVar3 = func_212(1623931083, 0, 0);
			if (iVar3 > 0)
			{
				func_235(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_DEAD_EYE_PROGRESSION_STAT_BONUS"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", iVar3, 2), 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
	}
	iVar4 = (iVar1 + iVar3) + 1;
	sVar5 = func_429(func_428(iVar4, 0));
	func_228(1, sVar5, sParam3);
}

int func_252(int iParam0)
{
	iParam0 = func_280(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_9;
}

int func_253(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, func_430());
	return iVar0;
}

int func_254(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, func_431());
	return iVar0;
}

int func_255(int iParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return 0;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iParam0, func_430());
	return iVar0;
}

int func_256(int iParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return 0;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iParam0, func_431());
	return iVar0;
}

int func_257(int iParam0, int iParam1)
{
	iParam0 = func_280(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return &((Global_40.f_1095.f_1[iParam0 /*436*/])->f_398[iParam1 /*4*/]);
}

int func_258()
{
	return Global_40.f_1095.f_3054;
}

int func_259(int iParam0, int iParam1)
{
	struct<2> Var0;
	vector3 vVar22;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;

	*iParam0 = 0;
	*iParam1 = 0;
	Var0.f_1 = 20;
	iVar31 = func_432(856287005);
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		iVar30 = func_433(856287005, iVar32);
		if (iVar30 != 0)
		{
			if (func_170(iVar30, &iVar29))
			{
				if (func_287(iVar29, 0))
				{
					if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iVar29, &Var0) && Var0 > 0)
					{
						iVar33 = 0;
						while (iVar33 < Var0)
						{
							if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var0.f_1[iVar33]), &vVar22))
							{
								if (vVar22.y == 2086291460)
								{
									*iParam1 = (*iParam1 + vVar22.z);
								}
								else if (vVar22.y == -1620444701)
								{
									*iParam0 = (*iParam0 + vVar22.z);
								}
							}
							iVar33++;
						}
					}
				}
			}
		}
		iVar32++;
	}
	return 1;
}

bool func_260()
{
	return Global_40.f_1095.f_3140.f_1;
}

int func_261(int iParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return 0;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iParam0, func_434());
	return iVar0;
}

int func_262(int iParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return 0;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iParam0, func_435());
	return iVar0;
}

int func_263(int iParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return -1;
	}
	iVar0 = func_436(iParam0);
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

char* func_264(int iParam0)
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

void func_265(int iParam0, float fParam1, int iParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1955569->f_5.f_147.f_12, iParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(Global_1955569->f_5.f_147.f_13, fParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1955569->f_5.f_147.f_14, iParam2);
}

void func_266(int iParam0, float fParam1, int iParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1955569->f_5.f_147.f_15, iParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(Global_1955569->f_5.f_147.f_16, fParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1955569->f_5.f_147.f_17, iParam2);
}

int func_267(int iParam0)
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
		case 604357666:
			return -540812301 /* GXTEntry: "Appaloosa - Few Spotted Coat" */;
		case -1029277326:
			return -179102320 /* GXTEntry: "Appaloosa - Brown Leopard Coat" */;
		case joaat("a_c_horse_appaloosa_leopard"):
			return -1266863668 /* GXTEntry: "Appaloosa - Leopard Coat" */;
		case joaat("a_c_horse_arabian_black"):
			return -2078767648 /* GXTEntry: "Arabian - Black Coat" */;
		case 1496579364:
			return -2055655009 /* GXTEntry: "Arabian - Red Chestnut Coat" */;
		case -1523757120:
			return -1506685618 /* GXTEntry: "Arabian - Red Chestnut Coat" */;
		case -403470324:
			return -852553462 /* GXTEntry: "Arabian - Rose Grey Bay Coat" */;
		case 1576849913:
			return -2105447887 /* GXTEntry: "Arabian - Warped Brindle Coat" */;
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
		case -1516219602:
			return 1427053849 /* GXTEntry: "Kentucky Saddler - Buttermilk Buckskin Coat" */;
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
		case -1063137731:
			return 955937750 /* GXTEntry: "Morgan - Liver Chestnut Coat" */;
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
		case 1048964673:
			return 2059232991 /* GXTEntry: "Tennessee Walker - Gold Palomino Coat" */;
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
		case -1356425746:
			return -1087523615 /* GXTEntry: "American Paint - Splashed White Coat" */;
		case joaat("a_c_horse_gang_bill"):
			return -496814209 /* GXTEntry: "Ardennes - Chestnut Coat" */;
		case joaat("a_c_horse_gang_charles"):
			return 2109055751 /* GXTEntry: "Appaloosa - Grey Snowcap Spotted Coat" */;
		case 1800725969:
			return -776673611 /* GXTEntry: "Nokota - Grey Roan Sabino Coat" */;
		case joaat("a_c_horse_gang_dutch"):
			return 1764402253 /* GXTEntry: "Arabian - White Albino Coat" */;
		case joaat("a_c_horse_gang_hosea"):
			return -1417310078 /* GXTEntry: "Turkoman - Silver Coat" */;
		case joaat("a_c_horse_gang_javier"):
			return 1096273915 /* GXTEntry: "American Paint - Grey Overo Coat" */;
		case joaat("a_c_horse_gang_john"):
			return 772751081 /* GXTEntry: "Hungarian Halfbred - Silver Dark Bay Coat" */;
		case -1486704931:
			return -1140435723 /* GXTEntry: "Nokota - Smoky Black Coat" */;
		case 1139858530:
			return 2002524329 /* GXTEntry: "Tennessee Walker - Flaxen Roan" */;
		case joaat("a_c_horse_gang_lenny"):
			return 1151530184 /* GXTEntry: "Mustang - Light Palomino Coat" */;
		case joaat("a_c_horse_gang_micah"):
			return -1266525037 /* GXTEntry: "Missouri Fox Trotter - Black Coat" */;
		case joaat("a_c_horse_gang_sadie"):
			return -2018137175 /* GXTEntry: "Turkoman - Gold Dapple Coat" */;
		case -575759638:
			return -574151692 /* GXTEntry: "Mustang - Dark Bay Roan Coat" */;
		case joaat("a_c_horse_gang_sean"):
			return 649786380 /* GXTEntry: "American Standardbred - Silver Tail Buckskin Coat" */;
		case joaat("a_c_horse_gang_trelawney"):
			return -1921328920 /* GXTEntry: "Appaloosa - Brown Leopard Coat" */;
		case 1760888205:
			return -837607790 /* GXTEntry: "Kentucky Saddler - Sabino Coat" */;
		case 291878635:
			return 370424594 /* GXTEntry: "Appaloosa - Few Spot Buckskin Coat" */;
		default:
			break;
	}
	return 0;
}

int func_268(int iParam0)
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
		case 604357666:
			return -311956671 /* GXTEntry: "Work" */;
		case -1029277326:
			return -311956671 /* GXTEntry: "Work" */;
		case joaat("a_c_horse_appaloosa_leopard"):
			return -311956671 /* GXTEntry: "Work" */;
		case joaat("a_c_horse_arabian_black"):
			return -2030355032 /* GXTEntry: "Superior" */;
		case 1496579364:
			return -2030355032 /* GXTEntry: "Superior" */;
		case -1523757120:
			return -2030355032 /* GXTEntry: "Superior" */;
		case -403470324:
			return -2030355032 /* GXTEntry: "Superior" */;
		case 1576849913:
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
		case -1516219602:
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
		case -1063137731:
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
		case 1048964673:
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
		case -1356425746:
			return 779169510;
		case joaat("a_c_horse_gang_bill"):
			return 779169510;
		case joaat("a_c_horse_gang_charles"):
			return 779169510;
		case 1800725969:
			return 779169510;
		case joaat("a_c_horse_gang_dutch"):
			return 779169510;
		case joaat("a_c_horse_gang_hosea"):
			return 779169510;
		case joaat("a_c_horse_gang_javier"):
			return 779169510;
		case joaat("a_c_horse_gang_john"):
			return 779169510;
		case -1486704931:
			return 779169510;
		case 1139858530:
			return 779169510;
		case joaat("a_c_horse_gang_lenny"):
			return 779169510;
		case joaat("a_c_horse_gang_micah"):
			return 779169510;
		case joaat("a_c_horse_gang_sadie"):
			return 779169510;
		case -575759638:
			return 779169510;
		case joaat("a_c_horse_gang_sean"):
			return 779169510;
		case joaat("a_c_horse_gang_trelawney"):
			return 779169510;
		case 1760888205:
			return 779169510;
		case 291878635:
			return 779169510;
		default:
			break;
	}
	return 779169510;
}

char* func_269(int iParam0, int iParam1)
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
			return func_437(iParam1);
		case -2030355032: /* GXTEntry: "Superior" */
			return "HORSE_CLASS_SUPERIOR";
		case 1090011026: /* GXTEntry: "Other" */
			return "HORSE_CLASS_OTHER";
		default:
			break;
	}
	return "";
}

var func_270(int iParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, func_438(iParam0), 64);
	StringConCat(&cVar0, "_BREED", 64);
	return func_174(&cVar0);
}

int func_271(int iParam0)
{
	iParam0 = func_280(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_10;
}

char* func_272(int iParam0)
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

char* func_273(int iParam0)
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
		case -540812301: /* GXTEntry: "Appaloosa - Few Spotted Coat" */
			return "COAT_FEWSPOTTED";
		case -179102320: /* GXTEntry: "Appaloosa - Brown Leopard Coat" */
			return "COAT_BRLEOP";
		case -1266863668: /* GXTEntry: "Appaloosa - Leopard Coat" */
			return "COAT_LEOP";
		case -2078767648: /* GXTEntry: "Arabian - Black Coat" */
			return "COAT_BLACK";
		case -2055655009: /* GXTEntry: "Arabian - Red Chestnut Coat" */
			return "COAT_REDCH";
		case -1506685618: /* GXTEntry: "Arabian - Red Chestnut Coat" */
			return "COAT_REDCH";
		case -852553462: /* GXTEntry: "Arabian - Rose Grey Bay Coat" */
			return "COAT_ROSEGREYBAY";
		case -2105447887: /* GXTEntry: "Arabian - Warped Brindle Coat" */
			return "COAT_WARPEDBRINDLE";
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
		case 1427053849: /* GXTEntry: "Kentucky Saddler - Buttermilk Buckskin Coat" */
			return "COAT_BUTTERMILKBUCKSKIN";
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
		case 955937750: /* GXTEntry: "Morgan - Liver Chestnut Coat" */
			return "COAT_LIVERCH";
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
		case 2059232991: /* GXTEntry: "Tennessee Walker - Gold Palomino Coat" */
			return "COAT_GOLDPALOMINO";
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
			return "COAT_NONE";
		default:
			break;
	}
	return "";
}

float func_274(int iParam0)
{
	iParam0 = func_280(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1;
}

void func_275(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	char* sVar1;

	fVar0 = (func_439(iParam1, iParam2) * 100f);
	sVar1 = func_139(0 == iParam2, "RPG_Horse_Health", "RPG_Horse_Stamina");
	if (fVar0 > 0f)
	{
		func_235(iParam0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(fVar0)), 1, 0, 1, 0, 0, 0, 0, sVar1);
		func_250(iParam0, "RPG_ARROW_DOWN", 0);
	}
	else if (fVar0 == 0f)
	{
		func_235(iParam0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(fVar0)), 1, 0, 0, 0, 0, 0, 0, sVar1);
	}
	else
	{
		func_235(iParam0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", BUILTIN::ROUND(fVar0)), 1, 0, 0, 0, 0, 0, 0, sVar1);
		func_250(iParam0, "RPG_ARROW_UP", 0);
	}
}

void func_276()
{
	int iVar0;
	struct<2> Var1;
	struct<6> Var23;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	int iVar34;
	int iVar35;
	char* sVar36;

	if (!func_170(-415648720, &iVar0))
	{
		return;
	}
	Var1.f_1 = 20;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iVar0, &Var1))
	{
		return;
	}
	iVar34 = 0;
	while (iVar34 < Var1)
	{
		if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var1.f_1[iVar34]), &Var23))
		{
		}
		else
		{
			switch (Var23.f_1)
			{
				case -225223329:
					fVar30 = Var23.f_5;
					break;
				case 1167068375:
					fVar31 = Var23.f_5;
					break;
				case -845587290:
					fVar32 = Var23.f_5;
					break;
				case 1605773431:
					fVar33 = Var23.f_5;
					break;
			}
		}
		iVar34++;
	}
	iVar35 = 0;
	sVar36 = "";
	if (fVar30 < 0f)
	{
		sVar36 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(MISC::ABSF(fVar30)));
	}
	else if (fVar30 > 0f)
	{
		sVar36 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", BUILTIN::ROUND(MISC::ABSF(fVar30)));
	}
	if (fVar30 != 0f)
	{
		func_235(iVar35, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar36, 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Health");
		iVar35++;
	}
	if (fVar31 < 0f)
	{
		sVar36 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(MISC::ABSF(fVar31)));
	}
	else if (fVar31 > 0f)
	{
		sVar36 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", BUILTIN::ROUND(MISC::ABSF(fVar31)));
	}
	if (fVar31 != 0f)
	{
		func_235(iVar35, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar36, 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
		iVar35++;
	}
	if (fVar32 < 0f)
	{
		sVar36 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(MISC::ABSF(fVar32)));
	}
	else if (fVar32 > 0f)
	{
		sVar36 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", BUILTIN::ROUND(MISC::ABSF(fVar32)));
	}
	if (fVar32 != 0f)
	{
		func_235(iVar35, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_DRAIN_RATE"), sVar36, 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
		iVar35++;
	}
	if (fVar33 > 0f)
	{
		sVar36 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(MISC::ABSF(fVar33)));
	}
	else if (fVar33 < 0f)
	{
		sVar36 = MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", BUILTIN::ROUND(MISC::ABSF(fVar33)));
	}
	if (fVar33 != 0f)
	{
		func_235(iVar35, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_REGEN_RATE"), sVar36, 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
		iVar35++;
	}
}

void func_277()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	struct<2> Var4;
	struct<6> Var26;
	int iVar33;

	if (func_170(986998820, &iVar0))
	{
		Var4.f_1 = 20;
		ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iVar0, &Var4);
		iVar33 = 0;
		while (iVar33 < Var4)
		{
			ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var4.f_1[iVar33]), &Var26);
			switch (Var26.f_1)
			{
				case 2086291460:
					iVar1 = (iVar1 + BUILTIN::FLOOR((IntToFloat(Var26.f_2) * 0.01f)));
					break;
				case -1620444701:
					iVar2 = (iVar2 + BUILTIN::FLOOR((IntToFloat(Var26.f_2) * 0.01f)));
					break;
				case -845587290:
					fVar3 = (fVar3 + Var26.f_5);
					break;
			}
			iVar33++;
		}
		func_235(0, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_ACCELERATION"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PLUS_VALUE", iVar1), 0, 0, 0, 0, 0, 0, 0, 0);
		func_235(1, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_SPEED"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PLUS_VALUE", iVar2), 0, 0, 0, 0, 0, 0, 0, 0);
		if (fVar3 <= 0f)
		{
			func_235(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(fVar3)), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
		}
		else
		{
			func_235(2, MISC::_CREATE_VAR_STRING(2, "PMPLAYER_DRAIN_RATE"), MISC::_CREATE_VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", BUILTIN::ROUND(MISC::ABSF(fVar3))), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
		}
	}
}

void func_278(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	char cVar0[32];
	var uVar4;

	IntToString(&cVar0, iParam1, 32);
	uVar4 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_158, &cVar0);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar4, "labelText", sParam2);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar4, "isComplete", bParam3);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_160, iParam1, "story_checklist_item", uVar4);
}

int func_279(float fParam0)
{
	if (fParam0 <= IntToFloat(-1))
	{
		return -1;
	}
	if (fParam0 < IntToFloat(50))
	{
		return 0;
	}
	if (fParam0 < IntToFloat(100))
	{
		return 1;
	}
	if (fParam0 < IntToFloat(200))
	{
		return 2;
	}
	if (fParam0 < IntToFloat(350))
	{
		return 3;
	}
	if (fParam0 < IntToFloat(550))
	{
		return 4;
	}
	if (fParam0 < IntToFloat(800))
	{
		return 5;
	}
	if (fParam0 < IntToFloat(1100))
	{
		return 6;
	}
	return 7;
}

int func_280(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_281(int iParam0)
{
	iParam0 = func_280(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_14;
}

int func_282(int iParam0)
{
	iParam0 = func_280(iParam0);
	if (iParam0 <= -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
	{
		return 1;
	}
	return 0;
}

float func_283(int iParam0)
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

int func_284(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam0 != 0)
	{
		iVar5 = func_334(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_432(iParam0);
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

struct<4> func_285()
{
	struct<4> Var0;

	Var0 = { func_440(0) };
	return func_401(856287005, Var0, -218846335, 0);
}

int func_286(struct<4> Param0, int iParam4, int iParam5)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_404(Param0, iParam4, &Var0, iParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_287(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_288(int iParam0)
{
	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

int func_289()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_290(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5)) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15));
}

int func_291(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (!func_441(iParam2))
	{
		return -1;
	}
	if (iParam0 < 0 || iParam0 > 511)
	{
		return -1;
	}
	if (iParam1 < 0 || iParam1 > 255)
	{
		return -1;
	}
	if (iParam3 < 0 || iParam3 > func_289())
	{
		return -1;
	}
	iVar0 = func_290(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_442(iVar1, 0);
	func_443(iVar1, 0);
	func_444(iVar1, 0);
	func_445(iVar1, 0);
	func_446(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_447(iVar1, iParam4);
	}
	return iVar1;
}

void func_292(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam0 == 1)
		{
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "Inspecting_Item", true);
		}
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Inspecting_Item"))
		{
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "Inspecting_Item");
		}
	}
}

void func_293(int iParam0)
{
	int iVar0[15];
	bool bVar16;
	bool bVar17;
	var uVar18[15];
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	var uVar39;
	bool bVar40;

	func_198(iParam0, 1, 1, -142743235, 1);
	iVar34 = func_448(iParam0, &uVar18);
	func_449(iParam0, &uVar18, &iVar34, 1);
	if (func_450() == -2125499975)
	{
		iVar38 = 2020890174;
	}
	else
	{
		iVar38 = 1105329772;
	}
	func_451(iParam0, &(Global_26795.f_627.f_121.f_20));
	func_452(iParam0, 1, 1);
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		func_198(&(uVar18[iVar36]), 1, 1, -142743235, 1);
		switch (func_334(&(uVar18[iVar36])))
		{
			case -2061583405:
				func_451(&(uVar18[iVar36]), &(Global_26795.f_627.f_121.f_21));
				break;
			case 81053684:
				func_451(&(uVar18[iVar36]), &(Global_26795.f_627.f_121.f_23));
				break;
			case -525676072:
				func_451(&(uVar18[iVar36]), &(Global_26795.f_627.f_121.f_22));
				break;
			case -1719060085:
				func_451(&(uVar18[iVar36]), &(Global_26795.f_627.f_121.f_24));
				break;
			case -413129408:
				func_451(&(uVar18[iVar36]), &(Global_26795.f_627.f_121.f_25));
				break;
		}
		func_452(&(uVar18[iVar36]), 1, 1);
		iVar0[iVar36] = func_454(func_453(&(uVar18[iVar36])), 1);
		iVar36++;
	}
	func_455(&(Global_1946804->f_1616));
	func_456(&(Global_1946804->f_1616), iVar38, &uVar39, 1, 0, 0, 0);
	*(Global_1946804->f_1616.f_1[8 /*3*/]) = { func_457(8, 0) };
	*(Global_1946804->f_1616.f_1[9 /*3*/]) = { func_457(9, 0) };
	*(Global_1946804->f_1616.f_1[0 /*3*/]) = { func_457(0, 0) };
	*(Global_1946804->f_1616.f_1[2 /*3*/]) = { func_457(2, 0) };
	*(Global_1946804->f_1616.f_1[3 /*3*/]) = { func_457(3, 0) };
	*(Global_1946804->f_1616.f_1[1 /*3*/]) = { func_457(1, 0) };
	*(Global_1946804->f_1616.f_1[5 /*3*/]) = { func_457(5, 0) };
	*(Global_1946804->f_1616.f_1[6 /*3*/]) = { func_457(6, 0) };
	*(Global_1946804->f_1616.f_1[7 /*3*/]) = { func_457(7, 0) };
	iVar35 = 0;
	while (iVar35 < 5)
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			if (&uVar18[iVar36] == func_458(&(iVar0[iVar36]), iVar35))
			{
				func_452(func_459(iVar35), 1, 1);
				func_460(iVar35);
				if (iVar35 == 0)
				{
					bVar17 = true;
					iVar37 = 0;
					while (iVar37 < 39)
					{
						if (!func_461(Global_1946804->f_1616.f_1[iVar37 /*3*/], 2))
						{
						}
						else
						{
							func_462(Global_1946804->f_1616.f_1[iVar37 /*3*/], iVar37, 0);
							*(Global_1946804->f_1497.f_1[iVar37 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar37 /*3*/]) };
						}
						iVar37++;
					}
				}
			}
			else
			{
				iVar36++;
			}
		}
		iVar35++;
	}
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (&uVar18[iVar36] == &Global_1946804->f_1497.f_1[&iVar0[iVar36] /*3*/])
		{
			bVar16 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if ((bVar16 || bVar17) || Global_40.f_7729 == func_463(iParam0))
	{
		if (!func_464(8))
		{
			if (func_450() == -2125499975)
			{
				if (bVar17)
				{
					func_456(&(Global_1946804->f_1616), 1661121390 /* GXTEntry: "The Gunslinger" */, &uVar39, 0, 1, 0, -2125499975);
					Global_1946804->f_1616 = 166243423; /* GXTEntry: "Custom Outfit" */
					func_465(&(Global_1946804->f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_466(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_463(iParam0))
				{
					Global_1905941 = 6;
				}
			}
			else
			{
				if (bVar17)
				{
					func_456(&(Global_1946804->f_1616), -361635024 /* GXTEntry: "The Cowboy" */, &uVar39, 0, 1, 0, 1160113249);
					Global_1946804->f_1616 = 166243423; /* GXTEntry: "Custom Outfit" */
					func_465(&(Global_1946804->f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_466(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_463(iParam0))
				{
					Global_1905941 = 62;
				}
			}
			if (bVar16 || Global_40.f_7729 == func_463(iParam0))
			{
				if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
				{
					func_467(Global_40.f_7729, 4096);
					func_468(&Global_1905941, 4096);
					Global_40.f_7729 = &Global_1905941;
				}
				else
				{
					func_469(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), &Global_1905941, 1, 0, 0);
				}
			}
		}
	}
	bVar40 = false;
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (&uVar18[iVar36] == &Global_26795.f_627.f_1.f_1.f_1[&iVar0[iVar36] /*3*/])
		{
			bVar40 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if (!bVar40)
	{
		return;
	}
	func_456(&(Global_1946804->f_1616), 1661121390 /* GXTEntry: "The Gunslinger" */, &uVar39, 0, 1, 0, -2125499975);
	func_456(&(Global_1946804->f_1616), 2020890174, &uVar39, 1, 0, 0, -2125499975);
	*(Global_1946804->f_1616.f_1[8 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[8 /*3*/]) };
	*(Global_1946804->f_1616.f_1[9 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[9 /*3*/]) };
	*(Global_1946804->f_1616.f_1[0 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[0 /*3*/]) };
	*(Global_1946804->f_1616.f_1[2 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[2 /*3*/]) };
	*(Global_1946804->f_1616.f_1[3 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[3 /*3*/]) };
	*(Global_1946804->f_1616.f_1[1 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[1 /*3*/]) };
	*(Global_1946804->f_1616.f_1[5 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[5 /*3*/]) };
	*(Global_1946804->f_1616.f_1[6 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[6 /*3*/]) };
	*(Global_1946804->f_1616.f_1[7 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[7 /*3*/]) };
	Global_26795.f_627 = Global_1946804->f_1616;
	Global_26795.f_627.f_1.f_1 = Global_1946804->f_1616;
	iVar36 = 0;
	while (iVar36 < 39)
	{
		*(Global_26795.f_627.f_1.f_1.f_1[iVar36 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar36 /*3*/]) };
		iVar36++;
	}
}

void func_294(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;

	func_198(iParam0, 1, 1, -142743235, 1);
	if (func_470(iParam0))
	{
		func_452(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_454(func_453(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_471(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1 /*11*/];
		*(Global_1946804->f_1616.f_1[iVar1 /*3*/]) = { vVar4 };
		(Global_1946804->f_1616.f_1[iVar1 /*3*/])->f_2 = ((Global_1946804->f_1497.f_1[iVar1 /*3*/])->f_2 || (Global_1946804->f_1378.f_1[iVar1 /*3*/])->f_2);
		iVar1++;
	}
	if (func_450() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_456(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_456(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*(Global_1946804->f_1616.f_1[8 /*3*/]) = { func_457(8, 0) };
	*(Global_1946804->f_1616.f_1[9 /*3*/]) = { func_457(9, 0) };
	*(Global_1946804->f_1616.f_1[0 /*3*/]) = { func_457(0, 0) };
	*(Global_1946804->f_1616.f_1[2 /*3*/]) = { func_457(2, 0) };
	*(Global_1946804->f_1616.f_1[3 /*3*/]) = { func_457(3, 0) };
	*(Global_1946804->f_1616.f_1[1 /*3*/]) = { func_457(1, 0) };
	*(Global_1946804->f_1616.f_1[5 /*3*/]) = { func_457(5, 0) };
	*(Global_1946804->f_1616.f_1[6 /*3*/]) = { func_457(6, 0) };
	*(Global_1946804->f_1616.f_1[7 /*3*/]) = { func_457(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_458(iVar8, iVar0))
				{
					func_462(Global_1946804->f_1616.f_1[iVar8 /*3*/], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_458(iVar8, iVar0))
		{
			func_462(Global_1946804->f_1616.f_1[iVar8 /*3*/], iVar8, iVar0);
		}
		iVar0++;
	}
	if (bVar7)
	{
		iVar8 = 0;
		while (iVar8 < 39)
		{
			if (iParam0 == &Global_1946804->f_1497.f_1[iVar8 /*3*/])
			{
				*(Global_1946804->f_1497.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
				bVar3 = true;
			}
			if (iParam0 == &Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/])
			{
				*(Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
				bVar3 = true;
			}
			if (bVar3)
			{
			}
			else
			{
				iVar8++;
			}
		}
	}
	else
	{
		if (iParam0 == &Global_1946804->f_1497.f_1[iVar8 /*3*/])
		{
			*(Global_1946804->f_1497.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
		}
		if (iParam0 == &Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/])
		{
			*(Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
		}
	}
	iVar1 = 0;
	while (iVar1 < 39)
	{
		*(Global_1946804->f_1378.f_1[iVar1 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar1 /*3*/]) };
		iVar1++;
	}
}

int func_295(int iParam0, struct<4> Param1)
{
	int iVar0;
	var uVar1;
	struct<2> Var3;
	var uVar7;
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
			if (func_287(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_472(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_473(&uVar7);
					if (func_402(Var3, &uVar7, &Var12, -1, -142743235, 0, 0))
					{
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

struct<6> func_296()
{
	struct<6> Var0;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;

	if (func_170(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_170(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_170(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_170(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_170(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_170(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

int func_297(var uParam0)
{
	return uParam0->f_1;
}

void func_298(var uParam0)
{
	func_474(uParam0);
	func_476(uParam0, func_475(-1346384396));
	func_477(uParam0, func_475(-712836614));
	func_478(uParam0, func_475(-1629133289));
	func_479(uParam0, func_475(1302066700));
	func_480(uParam0, func_475(599669344));
	func_481(uParam0, func_475(-1555511632));
}

void func_299(struct<6> Param0)
{
	if (!func_482(Param0.f_4, 1))
	{
	}
	if (!func_482(Param0, 1))
	{
	}
	if (!func_482(Param0.f_2, 1))
	{
	}
	if (!func_482(Param0.f_5, 1))
	{
	}
	if (!func_482(Param0.f_3, 1))
	{
	}
	if (!func_482(Param0.f_1, 1))
	{
	}
}

int func_300(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;

	*iParam0 = 0;
	*iParam1 = 0;
	*iParam2 = 0;
	if (func_35())
	{
		if (func_483())
		{
			bVar0 = false;
			if (!func_130(((*Global_1835011)[15 /*74*/])->f_1, 1) && !func_205(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*iParam0 = func_484();
				*iParam1 = func_485();
				*iParam2 = func_486();
				return 1;
			}
			else
			{
				*iParam0 = func_487();
				*iParam1 = func_488();
				*iParam2 = func_489();
				return 1;
			}
		}
		else if (func_1())
		{
			if (!func_130(((*Global_1835011)[60 /*74*/])->f_1, 1))
			{
				*iParam0 = func_490();
				*iParam1 = func_491();
				*iParam2 = func_492();
				return 1;
			}
			else
			{
				*iParam0 = func_493();
				*iParam1 = func_494();
				*iParam2 = func_495();
				return 1;
			}
		}
	}
	else if (func_483())
	{
		*iParam0 = func_496();
		*iParam1 = func_497();
		*iParam2 = func_498();
		return 1;
	}
	else if (func_1())
	{
		*iParam0 = func_499();
		*iParam1 = func_500();
		*iParam2 = func_501();
		return 1;
	}
	return 0;
}

int func_301(int iParam0)
{
	iParam0 = func_280(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_8;
}

void func_302(int iParam0, int iParam1)
{
	iParam0 = func_280(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_8 = iParam1;
}

void func_303(int iParam0, int iParam1)
{
	iParam0 = func_280(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_9 = iParam1;
}

void func_304(int iParam0, int iParam1)
{
	iParam0 = func_280(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_10 = iParam1;
}

void func_305(int iParam0, int iParam1)
{
	iParam0 = func_280(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_434 = iParam1;
}

int func_306(int iParam0)
{
	int iVar0;
	struct<4> Var1;

	iVar0 = func_502(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_440(0) };
	if (func_503(&Var1, iVar0, 0) > 0)
	{
		return 1;
	}
	return 0;
}

int func_307(int iParam0)
{
	struct<10> Var0;
	struct<5> Var29;

	Var0.f_9 = -1591664384;
	if (!func_504(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { Var0.f_5 };
	Var29.f_4 = Var0.f_9;
	if (!func_402(Var0.f_4, &Var0, &Var29, -1, -142743235, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_308(int iParam0)
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
		case 604357666:
			return 729407854;
		case -1029277326:
			return 2002245664 /* GXTEntry: "Appaloosa~n~Brown Leopard Coat" */;
		case joaat("a_c_horse_appaloosa_leopard"):
			return -1120227140 /* GXTEntry: "Appaloosa~n~Leopard Coat" */;
		case joaat("a_c_horse_arabian_black"):
			return 1142681594 /* GXTEntry: "Arabian~n~Black Coat" */;
		case 1496579364:
			return 1214981718 /* GXTEntry: "Arabian~n~Red Chestnut Coat" */;
		case -1523757120:
			return -845373950;
		case -403470324:
			return -864588185 /* GXTEntry: "Arabian~n~Rose Grey Bay Coat" */;
		case 1576849913:
			return 1482814085;
		case joaat("a_c_horse_arabian_white"):
			return -1040918754 /* GXTEntry: "Arabian~n~White Coat" */;
		case joaat("a_c_horse_ardennes_bayroan"):
			return 535545841 /* GXTEntry: "Ardennes~n~Bay Roan Coat" */;
		case -635239558:
			return 1686036388 /* GXTEntry: "Ardennes~n~Strawberry Roan Coat" */;
		case joaat("a_c_horse_ardennes_irongreyroan"):
			return -621245377 /* GXTEntry: "Ardennes~n~Iron Grey Roan Coat" */;
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
		case -1516219602:
			return -1158763155;
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
		case -1063137731:
			return -1565311117;
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
		case 1048964673:
			return -1219957736;
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
		case 900144280:
			return 1680713143 /* GXTEntry: "Thoroughbred~n~Reverse Dapple Black Coat" */;
		case 1133837220:
			return 344528703 /* GXTEntry: "Turkoman~n~Dark Bay Coat" */;
		case joaat("a_c_horse_turkoman_gold"):
			return -1674873797 /* GXTEntry: "Turkoman~n~Gold Coat" */;
		case -1604180548:
			return 281852151 /* GXTEntry: "Turkoman~n~Silver Coat" */;
		case joaat("a_c_donkey_01"):
			return -285185056;
		case -1028075925:
			return -1692268955 /* GXTEntry: "Appaloosa~n~Black Snowflake Coat" */;
		case 84224102:
			return 2130706226;
		case -1896838685:
			return -1754375530 /* GXTEntry: "Hungarian Halfbred~n~Liver Chestnut Coat" */;
		case -420599285:
			return -71211764 /* GXTEntry: "Missouri Fox Trotter~n~Sable Champagne Coat" */;
		case 478986344:
			return -1390353518 /* GXTEntry: "Mustang~n~Golden Dun Coat" */;
		case 446670976:
			return 330935532 /* GXTEntry: "Tennessee Walker~n~Mahogany Bay Coat" */;
		case joaat("a_c_horse_shire_ravenblack"):
			return -935042458 /* GXTEntry: "Shire~n~Raven Black Coat" */;
		case 549900435:
			return -41062704;
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

int func_309(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	if (!func_287(iParam1, 0))
	{
		return 0;
	}
	if (!func_505(iParam1))
	{
		return 0;
	}
	if (func_306(iParam0))
	{
		return 0;
	}
	iVar0 = func_502(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_440(0) };
	Var1.f_4 = iVar0;
	if (!func_405(iParam1, &uVar6, &Var1, 1, 752097756, 0))
	{
		return 0;
	}
	return 1;
}

int func_310(int iParam0, struct<4> Param1, bool bParam5)
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
			if (func_287(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_472(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_473(&Var7);
					if (func_405(Var3, &Var7, &Var12, 1, 752097756, 0))
					{
						if (bParam5)
						{
							func_406(Var7, 1);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_311(int iParam0)
{
	int iVar0;

	if (!func_204(iParam0))
	{
		return;
	}
	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_VISIBLE(iVar0, true);
}

int func_312(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_23() == -1)
	{
		if (func_506(iParam0) && func_507(iParam0))
		{
			func_508(iParam0, iParam1, 1, &bParam2, iParam3);
			return 0;
		}
	}
	else if (iParam0 == 1259508039)
	{
		bParam2 = true;
	}
	else if (iParam0 == joaat("weapon_unarmed"))
	{
		return 0;
	}
	return 1;
}

int func_313(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_509(iParam0, iParam1);
	Var0 = { func_398(iParam0, 0, 1) };
	iVar5 = func_510(iParam0, &Var0, 0, 0);
	iVar6 = func_511(iParam0, 0);
	if ((iVar5 > 1 && !func_54()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_331(iParam0, -2051813666))
		{
			func_321(583, 1);
		}
		else
		{
			func_321(582, 0);
		}
	}
	if (func_512(iParam0, &Var0, *iParam1, 0, 0))
	{
		if (iVar6 < iVar5)
		{
			*iParam1 = (iVar5 - iVar6);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_314(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_513(iParam0, -949239683))
	{
		case -1565009253:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1935496->f_59.f_6 = 1;
			Global_1935496->f_59.f_7 = 0;
			Global_1935496->f_59.f_1 = iParam0;
			Global_1935496->f_59.f_5 = MISC::GET_GAME_TIMER();
			break;
	}
}

bool func_315(int iParam0)
{
	if (func_23() != -1)
	{
		return false;
	}
	return func_316(iParam0) != 0;
}

int func_316(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_514())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_515(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_317(int iParam0)
{
	return COLLECTION::_0x6052B4DE6657684F(iParam0);
}

int func_318(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < func_514())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_317(iVar0))
		{
			if (func_193(func_515(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_319(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_516(48);
	func_517(0, -1);
}

int func_320(int iParam0)
{
	if (func_23() != -1)
	{
		return 0;
	}
	return func_130(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

void func_321(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_518(iParam0, &iVar0, &iVar1);
	if (!func_519(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_520(iVar0, iVar1);
}

int func_322(int iParam0)
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, iParam0);
}

int func_323(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

int func_324(int iParam0)
{
	if (func_23() != -1)
	{
		return 0;
	}
	return func_130(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
}

int func_325(int iParam0)
{
	if (func_23() != -1)
	{
		return 0;
	}
	if (!func_101(iParam0))
	{
		return 0;
	}
	return func_194(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

int func_326()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_193(func_521(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_327(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;

	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_35() && (func_325(38) || func_320(38)))
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				sVar5 = "COL_CC_INTRO";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
				iVar13 = 38816757; /* GXTEntry: "Smoking and Other Hobbies" */
			}
			else
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				sVar5 = "COL_CC_INTRO_PRE";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
				iVar13 = 578982838; /* GXTEntry: "A New Hobby" */
			}
			sVar4 = "COL_CC_TITLE";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = 12;
			iVar14 = -2076669067;
			break;
		case 39:
			if (func_35() && (func_325(39) || func_320(39)))
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_02";
				sVar5 = "COL_DB_INTRO";
				iVar9 = 3;
				iVar11 = 1162303770; /* GXTEntry: "Deborah MacGuiness" */
				iVar13 = -1223580455; /* GXTEntry: "A Test of Faith" */
			}
			else
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_01";
				sVar5 = "COL_DB_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
				iVar13 = 349797279; /* GXTEntry: "Digging up the Past" */
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_DB_TITLE";
			vVar6 = { 122.7758f, -185.4978f, 116.4383f };
			iVar10 = 30;
			iVar14 = -440187297;
			break;
		case 43:
			if (iParam3 == -1791518714)
			{
				sVar0 = "MISSION_RCEXO1";
				sVar3 = "RCEXO1_DESC";
				iVar10 = 30;
			}
			else if (iParam3 == -2087881550)
			{
				sVar0 = "MISSION_RCEXO2";
				sVar3 = "RCEXO2_DESC";
				iVar10 = 37;
			}
			else if (iParam3 == 1908068621)
			{
				sVar0 = "MISSION_RCEXO3";
				sVar3 = "RCEXO3_DESC";
				iVar10 = 40;
			}
			else if (iParam3 == 1611247019)
			{
				sVar0 = "MISSION_RCEXO4";
				sVar3 = "RCEXO4_DESC";
				iVar10 = 50;
			}
			else if (iParam3 == 1319635688)
			{
				sVar0 = "MISSION_RCEXO5";
				sVar3 = "RCEXO5_DESC";
				iVar10 = 25;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_EX_TITLE";
			sVar5 = "COL_EX_INTRO";
			vVar6 = { 2585.668f, -1009.616f, 44.97972f };
			iVar9 = func_522(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963; /* GXTEntry: "Duchesses and Other Animals" */
			break;
		case 41:
			if (func_35() && (func_325(41) || func_320(41)))
			{
				sVar0 = "MISSION_RCFSH2";
			}
			else
			{
				sVar0 = "MISSION_RCFSH1";
			}
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_RARE_FISH_01";
			sVar4 = "COL_LF_TITLE";
			sVar5 = "COL_LF_INTRO";
			vVar6 = { 337.3075f, -684.5404f, 41.8362f };
			iVar9 = 13;
			iVar14 = 1995362678;
			iVar11 = -273196610; /* GXTEntry: "Jeremy Gill" */
			iVar13 = -1666208710; /* GXTEntry: "A Fisher of Fish" */
			break;
		case 49:
			if (func_35() && (func_325(49) || func_320(49)))
			{
				sVar0 = "MISSION_RCRKF2";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				sVar5 = "COL_RC_INTRO";
				iVar9 = 3;
				iVar11 = -781551276; /* GXTEntry: "Francis Sinclair" */
				iVar13 = -170865073; /* GXTEntry: "Geology for Beginners" */
			}
			else
			{
				sVar0 = "MISSION_RCRKF1";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				sVar5 = "COL_RC_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
				iVar13 = 1974744712; /* GXTEntry: "Rock Carvings" */
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_RC_TITLE";
			vVar6 = { -2178.646f, -245.6886f, 191.1569f };
			iVar10 = 10;
			iVar14 = 2103522376;
			break;
		case 51:
			sVar0 = "MISSION_RCTAX1";
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			sVar4 = "COL_TX_TITLE";
			sVar5 = "COL_TX_INTRO";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = func_522(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931; /* GXTEntry: "Ms. L Hobbs" */
			iVar13 = -1424865411; /* GXTEntry: "A Better World, A New Friend" */
			break;
	}
	sVar2 = func_523(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_524(iParam0, iVar13, iVar14))
	{
	}
	if (func_525(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_526(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_527(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_528(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_529(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_328(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_329(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_35() && (func_325(38) || func_320(38)))
			{
				sVar1 = "COL_CC_INTRO";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
			}
			else
			{
				sVar1 = "COL_CC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
			}
			iVar6 = 38816757; /* GXTEntry: "Smoking and Other Hobbies" */
			break;
		case 39:
			sVar0 = "COL_DB_TITLE";
			sVar3 = "COL_DB_FOUND";
			iVar7 = -440187297;
			if (func_35() && (func_325(39) || func_320(39)))
			{
				sVar1 = "COL_DB_INTRO";
				iVar4 = 1162303770; /* GXTEntry: "Deborah MacGuiness" */
			}
			else
			{
				sVar1 = "COL_DB_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
			}
			iVar6 = -1223580455; /* GXTEntry: "A Test of Faith" */
			break;
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			sVar0 = "COL_EX_TITLE";
			sVar3 = "COL_EX_ITEMS_COLLECTED";
			sVar1 = "COL_EX_INTRO";
			iVar7 = -1531394072;
			iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = 911890963; /* GXTEntry: "Duchesses and Other Animals" */
			break;
		case 41:
			sVar0 = "COL_LF_TITLE";
			sVar3 = "COL_LF_CAUGHT";
			sVar1 = "COL_LF_INTRO";
			iVar7 = 1995362678;
			iVar4 = -273196610; /* GXTEntry: "Jeremy Gill" */
			iVar6 = -1666208710; /* GXTEntry: "A Fisher of Fish" */
			break;
		case 49:
			sVar0 = "COL_RC_TITLE";
			sVar3 = "COL_RC_FOUND";
			iVar7 = 2103522376;
			if (func_35() && (func_325(49) || func_320(49)))
			{
				sVar1 = "COL_RC_INTRO";
				iVar4 = -781551276; /* GXTEntry: "Francis Sinclair" */
			}
			else
			{
				sVar1 = "COL_RC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
			iVar6 = -170865073; /* GXTEntry: "Geology for Beginners" */
			break;
		case 51:
			sVar0 = "COL_TX_TITLE";
			sVar3 = "COL_TX_CARCASS_COLLECTED";
			sVar1 = "COL_TX_INTRO";
			iVar7 = 678508515;
			iVar4 = 1986498931; /* GXTEntry: "Ms. L Hobbs" */
			iVar6 = -1424865411; /* GXTEntry: "A Better World, A New Friend" */
			break;
	}
	if (iParam5 == 2)
	{
		sVar0 = "MISSION_COMPLETE";
		iVar4 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar5 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar5 = MISC::GET_HASH_KEY("toast_log_blips");
		sVar1 = "COL_ALL_LOG_UPDATED";
	}
	sVar2 = "COL_CTX_PLAYER_LOG";
	if (iVar7 == -2076669067)
	{
		if (func_35() && (func_325(38) || func_320(38)))
		{
			iVar6 = 38816757; /* GXTEntry: "Smoking and Other Hobbies" */
		}
		else
		{
			iVar6 = 578982838; /* GXTEntry: "A New Hobby" */
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 0)
		{
			iVar5 = iParam1;
			iVar4 = iParam2;
		}
		if (iParam5 == 2)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			func_530(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_530(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_532(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, func_531(func_323(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_530(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_530(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_35() && (func_325(39) || func_320(39)))
		{
			iVar6 = -1223580455; /* GXTEntry: "A Test of Faith" */
		}
		else
		{
			iVar6 = 349797279; /* GXTEntry: "Digging up the Past" */
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_530(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_530(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_35() && (func_325(49) || func_320(49)))
		{
			iVar6 = -170865073; /* GXTEntry: "Geology for Beginners" */
		}
		else
		{
			iVar6 = 1974744712; /* GXTEntry: "Rock Carvings" */
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_530(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_530(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_530(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_530(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_330(int iParam0)
{
	vector3 vVar0;

	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_331(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
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

int func_332(int iParam0, int iParam1)
{
	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

void func_333(int iParam0)
{
	if (!func_407(iParam0))
	{
		return;
	}
	func_533(iParam0);
	func_534(iParam0);
}

int func_334(int iParam0)
{
	struct<2> Var0;

	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_335(int iParam0, bool bParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case -1639263599: /* GXTEntry: "Throwing Knife" */
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 1222378998: /* GXTEntry: "Improved Throwing Knife" */
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 2074469742: /* GXTEntry: "Poison Throwing Knife" */
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 480079517: /* GXTEntry: "Dynamite" */
			iVar0 = joaat("weapon_thrown_dynamite");
			break;
		case 840671577: /* GXTEntry: "Dynamite - Volatile" */
			iVar0 = joaat("weapon_thrown_dynamite");
			break;
		case joaat("ammo_molotov"):
			iVar0 = joaat("weapon_thrown_molotov");
			break;
		case -2006166057: /* GXTEntry: "Fire Bottle - Volatile" */
			iVar0 = joaat("weapon_thrown_molotov");
			break;
		case 1235846615: /* GXTEntry: "Tomahawk" */
			iVar0 = joaat("weapon_thrown_tomahawk");
			break;
		case -228768324: /* GXTEntry: "Ancient Tomahawk" */
			iVar0 = joaat("weapon_thrown_tomahawk_ancient");
			break;
		case -1411922943: /* GXTEntry: "Tomahawk - Homing" */
			iVar0 = joaat("weapon_thrown_tomahawk");
			break;
		case -834103244: /* GXTEntry: "Tomahawk - Improved" */
			iVar0 = joaat("weapon_thrown_tomahawk");
			break;
		case 424030678: /* GXTEntry: "Hatchet" */
			iVar0 = joaat("weapon_melee_hatchet");
			break;
		case 446901936: /* GXTEntry: "Hunter Hatchet" */
			iVar0 = joaat("weapon_melee_hatchet_hunter");
			break;
		case -1092841802: /* GXTEntry: "Rusted Hunter Hatchet" */
			iVar0 = joaat("weapon_melee_hatchet_hunter_rusted");
			break;
		case -1452241321: /* GXTEntry: "Stone Hatchet" */
			iVar0 = joaat("weapon_melee_ancient_hatchet");
			break;
		case -1188697038: /* GXTEntry: "Cleaver" */
			iVar0 = joaat("weapon_melee_cleaver");
			break;
		case 1671758975: /* GXTEntry: "Double Bit Hatchet" */
			iVar0 = joaat("weapon_melee_hatchet_double_bit");
			break;
		case -893514737: /* GXTEntry: "Rusted Double Bit Hatchet" */
			iVar0 = joaat("weapon_melee_hatchet_double_bit_rusted");
			break;
		case -2063089161: /* GXTEntry: "Hewing Hatchet" */
			iVar0 = joaat("weapon_melee_hatchet_hewing");
			break;
		case -452897925: /* GXTEntry: "Viking Hatchet" */
			iVar0 = joaat("weapon_melee_hatchet_viking");
			break;
		default:
			break;
	}
	if (func_287(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_535(iVar0) || func_536(iVar0))
			{
				return iVar0;
			}
		}
		else
		{
			return iVar0;
		}
	}
	return iParam0;
}

int func_336(int iParam0, bool bParam1)
{
	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return iParam0;
	}
	if (!bParam1)
	{
	}
	return 0;
}

int func_337(bool bParam0)
{
	if (func_23() == -1)
	{
		return 1;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_411(bParam0));
}

int func_338(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_340(iParam0))
	{
		return 0;
	}
	if (!func_337(0))
	{
		return 0;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

int func_339(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;

	iVar0 = func_336(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_23() == -1)
		{
			func_200(iVar0);
			if (iParam1 == 1248274121)
			{
				func_537(iVar0);
			}
		}
		if (!func_512(iParam0, &uVar1, 1, 0, 0))
		{
			func_508(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_538(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				func_201(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("weapon_fishingrod") || iVar0 == joaat("weapon_kit_binoculars"))
			{
				func_201(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("weapon_lasso"))
			{
				func_201(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_IS_WEAPON_MELEE(iVar0))
			{
				if (iVar0 == joaat("weapon_melee_knife_john") && !func_1())
				{
					return 0;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(iParam0))
				{
				}
				else if (!func_539(iVar0))
				{
					func_201(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_201(iVar0, WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
			{
				iVar7 = func_540(Global_35, 2, 0, 1);
				if ((((func_204(iVar7) && !Global_43890) && iVar7 != iVar0) && !func_193(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 1, 0)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				if (func_204(iVar7) && func_193(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 1, 0))
				{
					if (!func_201(iVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return 0;
					}
				}
				else if (!func_201(iVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return 0;
				}
			}
			else if (!func_201(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return 0;
			}
		}
	}
	else
	{
		return 0;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(1) != 0 && iParam1 == 1248274121)
	{
		func_321(480, 1);
	}
	return 1;
}

bool func_340(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_341(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_340(iParam0))
	{
		return 0;
	}
	iVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (func_204(iVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_35, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (iVar4 == joaat("weapon_bow"))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::_GET_WEAPON_CLIP_SIZE(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (func_193(611073244 /* GXTEntry: "Crow Beak Trinket" */, 1, 0) && iParam2 == -897553835)
	{
		iVar6 = BUILTIN::CEIL((IntToFloat(iVar6) * 1.1f));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		func_372(func_541(iParam0), func_288(iParam0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_23() == -1)
		{
			if (func_130(((*Global_1835011)[14 /*74*/])->f_1, 1))
			{
				func_321(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_337(0))
	{
		if (func_338(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return func_377(iParam0, *iParam1, iParam2);
	}
	return 0;
}

void func_342(int iParam0)
{
	var uVar0;

	if ((iParam0 == -615217896 && !func_138()) || iParam0 != -615217896)
	{
		if (func_542(Global_35, iParam0, &uVar0))
		{
			func_358(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415: /* GXTEntry: "Alligator Tooth Talisman" */
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_364();
			break;
		case -832719552: /* GXTEntry: "Bear Claw Talisman" */
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_364();
			break;
		case -1941112926: /* GXTEntry: "Bison Horn Talisman" */
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_364();
			break;
		case -615217896: /* GXTEntry: "Eagle Talon Talisman" */
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_362();
			break;
		case -121629511: /* GXTEntry: "Raven Claw Talisman" */
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_360();
			break;
	}
}

void func_343(int iParam0)
{
	switch (iParam0)
	{
		case -224110471: /* GXTEntry: "Beaver Tooth Trinket" */
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_360();
			break;
		case 1289585739: /* GXTEntry: "Tatanka Bison Horn Trinket" */
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_361();
			break;
		case 1441506783: /* GXTEntry: "Cougar Fang Trinket" */
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678: /* GXTEntry: "Coyote Fang Trinket" */
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695: /* GXTEntry: "Fox Claw Trinket" */
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_362();
			break;
		case 655868243: /* GXTEntry: "Iguana Scale Trinket" */
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_363();
			break;
		case 1299744282: /* GXTEntry: "Lion\'s Paw Trinket" */
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 1631240196: /* GXTEntry: "Moose Antler Trinket" */
			Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
			break;
		case 1768869276: /* GXTEntry: "Owl Feather Trinket" */
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.15f);
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.15f);
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.15f);
			func_364();
			break;
		case -569248339: /* GXTEntry: "Hawk Talon Trinket" */
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_543();
			break;
		case -1196089647: /* GXTEntry: "Shark Tooth Trinket" */
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431: /* GXTEntry: "Turtle Shell Trinket" */
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_544();
			break;
		case -1056342069: /* GXTEntry: "Cat Eye Trinket" */
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

void func_344(int iParam0)
{
	bool bVar0;

	bVar0 = func_331(iParam0, -2017733358);
	if (func_545() < 3)
	{
		if (bVar0)
		{
			if (func_547(func_546(iParam0), iParam0))
			{
				func_372(79, func_288(func_546(iParam0)), 1);
			}
			else
			{
				func_372(78, func_288(func_546(iParam0)), 1);
			}
		}
		else
		{
			func_372(80, func_288(func_548(iParam0)), 1);
		}
	}
}

int func_345()
{
	if (((((func_549(839908568 /* GXTEntry: "Bounty Poster of Arthur" */, 400) || func_549(-1134030454 /* GXTEntry: "Bounty Notice" */, 400)) || func_549(623353496 /* GXTEntry: "Bounty Hunter\'s Orders" */, 400)) || func_549(-344413337 /* GXTEntry: "Poster of a Violent Criminal" */, 400)) || func_549(-1664948962 /* GXTEntry: "Bounty Hunter\'s Letter" */, 400)) || func_549(1795228059 /* GXTEntry: "Bounty Page" */, 400))
	{
		return 1;
	}
	return 0;
}

int func_346(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = func_550(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_387(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_388(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_347(int iParam0)
{
	switch (iParam0)
	{
		case -625427311: /* GXTEntry: "Letter from Ms. Hobbs" */
			func_327(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_329(51, 0, 0, 0, 0, -1, 0);
			func_551(8192);
			break;
		case 581047644: /* GXTEntry: "Invitation from Ms. Hobbs" */
			func_327(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_329(51, 0, 0, 0, 0, -1, 0);
			func_551(524288);
			break;
		case -644199619: /* GXTEntry: "Invitation from Deborah MacGuiness" */
			func_327(39, 0, 0, 0, 0, 0, 1, 0);
			func_329(39, 0, 0, 0, 0, -1, 0);
			func_552(16);
			break;
		case 684296857: /* GXTEntry: "Invitation from Jeremy Gill" */
			func_327(41, 0, 0, 0, 0, 0, 1, 0);
			func_329(41, 0, 0, 0, 0, -1, 0);
			func_553(8);
			break;
		case 466137807: /* GXTEntry: "Invitation from Francis Sinclair" */
			func_327(49, 0, 0, 0, 0, 0, 1, 0);
			func_329(49, 0, 0, 0, 0, -1, 0);
			func_554(16);
			break;
		case -1087522507: /* GXTEntry: "Exotic Collector\'s List" */
			func_327(43, 0, 0, -1791518714, func_555(1), 0, -1, 0);
			func_556(1);
			break;
		case -405829000: /* GXTEntry: "Exotic Collector\'s List" */
			func_327(43, 0, 0, -2087881550, func_555(2), 0, -1, 0);
			func_556(2);
			break;
		case 378660860: /* GXTEntry: "Exotic Collector\'s List" */
			func_327(43, 0, 0, 1908068621, func_555(4), 0, -1, 0);
			func_556(4);
			break;
		case 1566111097: /* GXTEntry: "Exotic Collector\'s List" */
			func_327(43, 0, 0, 1611247019, func_555(8), 0, -1, 0);
			func_556(8);
			break;
		case 1276007140: /* GXTEntry: "Exotic Collector\'s List" */
			func_327(43, 0, 0, 1319635688, func_555(16), 0, -1, 0);
			func_556(16);
			break;
	}
}

void func_348(int iParam0)
{
	if (func_557() == 1)
	{
		if (func_320(39))
		{
			func_321(342, 0);
		}
		else
		{
			func_321(343, 0);
			func_552(1);
		}
	}
	if (func_557() >= 30)
	{
		func_321(344, 0);
	}
	func_327(39, 0, 0, 0, 0, 0, -1, 0);
	func_329(39, 0, 0, func_557(), 30, 1, 0);
}

void func_349(int iParam0)
{
	if (func_558() == 1)
	{
		if (func_320(49))
		{
			func_321(409, 0);
		}
		else
		{
			func_321(410, 0);
			func_554(1);
		}
	}
	if (func_558() >= 10)
	{
		func_321(411, 0);
	}
	func_327(49, 0, 0, 0, 0, 0, -1, 0);
	func_329(49, 0, 0, func_558(), 10, 1, 0);
}

void func_350(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 1369162587: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(-949689219, 1);
			func_321(437, 0);
			func_321(440, 0);
			func_559(-949689219, 444160793 /* GXTEntry: "Perfect Squirrel Carcass" */, &sVar0, 1, 0, 0);
			func_327(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_329(51, 0, 0, sVar0, func_522(-949689219, 20), 1, 0);
			func_551(1);
			func_560(-748969569, 0, 0);
			break;
		case 1610047510: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(-1248968496, 1);
			func_559(-1248968496, -1969404854 /* GXTEntry: "Perfect Cardinal Carcass" */, &sVar0, 1, 0, 0);
			func_327(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_329(51, 0, 0, sVar0, func_522(-1248968496, 20), 1, 0);
			func_551(8);
			break;
		case 1317879106: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(1706369307, 1);
			func_559(1706369307, -832850511 /* GXTEntry: "Perfect Chipmunk Carcass" */, &sVar0, 1, 0, 0);
			func_327(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_329(51, 0, 0, sVar0, func_522(1706369307, 20), 1, 0);
			func_551(64);
			break;
		case 1062444751: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(1520110311, 1);
			func_559(1520110311, -100913452 /* GXTEntry: "Perfect Songbird Carcass" */, &sVar0, 1, 0, 0);
			func_327(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_329(51, 0, 0, sVar0, func_522(1520110311, 20), 1, 0);
			func_551(512);
			break;
		case 754186760: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(-1992824800, 1);
			func_321(438, 0);
			func_559(-1992824800, 905173572 /* GXTEntry: "Perfect Cedar Waxwing Carcass" */, &sVar0, 1, 0, 0);
			func_327(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_329(51, 0, 0, sVar0, func_522(-1992824800, 20), 1, 0);
			func_551(32768);
			break;
		default:
			func_321(439, 0);
			break;
	}
}

void func_351()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(-1278339625) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1278339625, -1316535105, 1);
	}
}

void func_352(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (func_23() == -1)
	{
		if (!func_320(43))
		{
			if (iParam0 == 281887510)
			{
				func_321(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_321(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_321(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_321(400, 0);
			}
		}
		else if (func_331(iParam0, 412399755))
		{
			func_561(-1791518714);
			if (func_562() == 0)
			{
				func_517(0, 10);
				iVar1 = func_563(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_564(iParam0) < func_565(iParam0))
					{
						func_327(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_329(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_320(44))
		{
			if (iParam0 == -222563712)
			{
				func_321(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_321(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_321(401, 0);
			}
		}
		else if (func_331(iParam0, 709057512))
		{
			func_561(-2087881550);
			if (func_562() == 1)
			{
				func_517(0, 10);
				iVar1 = func_563(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_564(iParam0) < func_565(iParam0))
					{
						func_327(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_329(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_320(45))
		{
			if (iParam0 == 2116770557)
			{
				func_321(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_321(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_321(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_321(398, 0);
			}
		}
		else if (func_331(iParam0, -1478961327))
		{
			func_561(1908068621);
			if (func_562() == 2)
			{
				func_517(0, 10);
				iVar1 = func_563(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_566(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0)) >= 25)
					{
						func_567(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0), 1);
						func_516(48);
					}
					if (func_564(iParam0) < func_565(iParam0))
					{
						func_327(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_329(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_564(iParam0) < func_565(iParam0))
					{
						func_327(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_329(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_320(46))
		{
			if (iParam0 == 2085530337)
			{
				func_321(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_321(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_321(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_321(406, 0);
			}
		}
		else if (func_331(iParam0, -1238404098))
		{
			func_561(1611247019);
			if (func_562() == 3)
			{
				func_517(0, 10);
				iVar1 = func_563(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_564(iParam0) < func_565(iParam0))
					{
						func_327(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_329(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_320(47))
		{
			if (iParam0 == -1521783510)
			{
				func_321(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_321(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_321(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_321(403, 0);
			}
		}
		else if (func_331(iParam0, 1160548794))
		{
			func_561(1319635688);
			if (func_562() == 4)
			{
				func_517(0, 10);
				iVar1 = func_563(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_564(iParam0) < func_565(iParam0))
					{
						func_327(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_329(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_353(int iParam0)
{
	int iVar0;

	if (iParam0 == 2116770557)
	{
		if (!func_566(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0)) >= 25)
		{
			func_567(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0), 1);
			func_516(48);
		}
	}
}

void func_354(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, 678508515, -1160144609);
		if (func_193(func_568(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_569(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_570(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_355(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_23() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_346(0, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255: /* GXTEntry: "$1.00" */
			func_346(-949580860, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493: /* GXTEntry: "$5.00" */
			func_346(-1171997683, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627: /* GXTEntry: "$10.00" */
			func_346(-2140931002, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377: /* GXTEntry: "Bill Fold" */
			func_346(-1116228267, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086: /* GXTEntry: "Small Bill Fold" */
			func_346(2112896861, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686: /* GXTEntry: "Bill Stack" */
			func_346(-1915150712, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991: /* GXTEntry: "Coin" */
			func_346(994220262, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101: /* GXTEntry: "Coin Purse" */
			func_346(-1388440107, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918: /* GXTEntry: "Coin Sack" */
			func_346(-1531790128, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765: /* GXTEntry: "Coin Stack" */
			func_346(1351791770, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903: /* GXTEntry: "Money Clip" */
			func_346(-161493966, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684: /* GXTEntry: "Money Stack" */
			func_346(668131102, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340: /* GXTEntry: "Money Pile" */
			if (!func_571())
			{
				func_346(1330954593, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740: /* GXTEntry: "Change Cup" */
			func_346(817681514, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264: /* GXTEntry: "Coin Cup" */
			func_346(1404311868, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970: /* GXTEntry: "$50.00" */
			func_346(-175152067, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1027115192: /* GXTEntry: "$100.00" */
			func_346(-526915387, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1064332555: /* GXTEntry: "$200.00" */
			func_346(101362741, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1954478446: /* GXTEntry: "$45.00" */
			func_346(1458818027, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -518592739: /* GXTEntry: "$50.00" */
			func_346(-1957208512, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -2010073778: /* GXTEntry: "$70.00" */
			func_346(2066857461, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -700133011: /* GXTEntry: "$100.00" */
			func_346(803940201, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1415414735: /* GXTEntry: "$120.00" */
			func_346(-1717765429, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case 2045548742: /* GXTEntry: "$150.00" */
			func_346(1379920914, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case 830381058: /* GXTEntry: "$350.00" */
			func_346(447209691, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
	}
}

void func_356(int iParam0)
{
	if (func_320(41))
	{
		func_321(363, 0);
	}
	else
	{
		func_321(362, 0);
	}
	switch (iParam0)
	{
		case 323124696: /* GXTEntry: "Legendary Bullhead Catfish" */
			func_572(-1865241121);
			func_573(-642026005);
			func_574(-642026005);
			func_517(0, 10);
			break;
		case -2108314374: /* GXTEntry: "Legendary Chain Pickerel" */
			func_572(2117142684);
			func_573(-940584364);
			func_574(-940584364);
			func_517(0, 10);
			break;
		case -1193798153: /* GXTEntry: "Legendary Lake Sturgeon" */
			func_572(-1409326024);
			func_573(1972645282);
			func_574(1972645282);
			func_517(0, 10);
			break;
		case -787702678: /* GXTEntry: "Legendary Largemouth Bass" */
			func_572(-641744968);
			func_573(1667205433);
			func_574(1667205433);
			func_517(0, 10);
			break;
		case -804542901: /* GXTEntry: "Legendary Longnose Gar" */
			func_572(-946988203);
			func_573(1362715885);
			func_574(1362715885);
			func_517(0, 10);
			break;
		case -1696275132: /* GXTEntry: "Legendary Muskie" */
			func_572(-646136018);
			func_573(1053540370);
			func_574(1053540370);
			func_517(0, 10);
			break;
		case -161595323: /* GXTEntry: "Legendary Perch" */
			func_572(-955835837);
			func_573(-1100103852);
			func_574(-1100103852);
			func_517(0, 10);
			break;
		case -1114363619: /* GXTEntry: "Legendary Redfin Pickerel" */
			func_572(-179276075);
			func_573(-1409869209);
			func_574(-1409869209);
			func_517(0, 10);
			break;
		case -368407134: /* GXTEntry: "Legendary Rock Bass" */
			func_572(-492711560);
			func_573(-1760235357);
			func_574(-1760235357);
			func_517(0, 10);
			break;
		case 1997759228: /* GXTEntry: "Legendary Smallmouth Bass" */
			func_572(1764383959);
			func_573(-138366827);
			func_574(-138366827);
			func_517(0, 10);
			break;
		case 1265573293: /* GXTEntry: "Legendary Sockeye Salmon" */
			func_572(317501533);
			func_573(-1261163843);
			func_574(-1261163843);
			func_517(0, 10);
			break;
		case -1030441283: /* GXTEntry: "Legendary Steelhead Trout" */
			func_572(817753087);
			func_573(-963523016);
			func_574(-963523016);
			func_517(0, 10);
			break;
		case -1490884871: /* GXTEntry: "Legendary Bluegill" */
			func_572(576606016);
			func_573(560825326);
			func_574(560825326);
			func_517(0, 10);
			break;
		case -395458616: /* GXTEntry: "Legendary Northern Pike" */
			func_572(814934957);
			func_573(858269539);
			func_574(858269539);
			break;
	}
}

void func_357(int iParam0, int iParam1)
{
	var uVar0;

	func_575(iParam0, iParam1, &uVar0);
}

int func_358(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_398(iParam1, 1, 0) };
		iParam3 = func_576(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_577(iParam1, iParam2, func_454(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_578(1, (func_23() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_454(iParam3, 1) /*11*/])
			{
				func_579(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_580(32768) && iParam1 != &Global_1946804->f_57[func_454(iParam3, 1) /*11*/])
			{
				func_581();
				func_579(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_579(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_582(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_579(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_583(0);
			func_584(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_579(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

int func_359(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	bool bVar17;
	int iVar18;
	int iVar19;

	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_540(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_540(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_394("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_395(&Var3, iVar2, iVar0, iVar1))
			{
				if (WEAPON::_IS_WEAPON_ONE_HANDED(Var3.f_4))
				{
					if (!bParam1)
					{
						if (Var3.f_4 == iVar18 || Var3.f_4 == iVar19)
						{
						}
						else
						{
							if (!bVar17)
							{
								*iParam0 = Var3.f_4;
								bVar17 = true;
							}
						}
						iVar2++;
						func_397(iVar0);
						if (*iParam0 != 0)
						{
							return 1;
						}
						return 0;
					}
				}
			}
		}
	}

void func_360()
{
	PLAYER::_0x11A7FF918EF6BC66(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_60));
}

void func_361()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_0x497A6539BB0E8787(PLAYER::PLAYER_ID(), (1f - fVar0), (1f - fVar1));
}

void func_362()
{
	PLAYER::_0xE0D6C2A146A5C993(PLAYER::PLAYER_ID(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_363()
{
	PLAYER::_0xB427911EA6DFFEF3(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_63));
}

void func_364()
{
	func_13();
	func_12();
	func_10();
}

void func_365(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	vector3 vVar4;

	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_JACK_HALL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -293111728; /* GXTEntry: "Jack Hall Gang Treasure" */
			break;
		case 666607663:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_HIGH_STAKES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 1406403390; /* GXTEntry: "High Stakes Treasure" */
			break;
		case -220219788:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_POISONOUS_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 917780075; /* GXTEntry: "The Poisonous Trail Treasure" */
			break;
		case 218622660:
			sVar3 = "COL_TH_SUB_TRESOR_DES_MORTS";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -857004026; /* GXTEntry: "Le Tresor des Morts Treasure" */
			break;
		case 390004462:
			sVar3 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -1108821735; /* GXTEntry: "The Elemental Trail Treasure" */
			break;
		case 6410548:
			sVar3 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -208135085; /* GXTEntry: "Landmarks Of Riches Treasure" */
			break;
	}
	switch (iParam1)
	{
		case 854119837:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_01";
			break;
		case -1292544588:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_02";
			break;
		case -1003325394:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_03";
			break;
		case -696705861:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_04";
			break;
		case -335460405:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_01";
			break;
		case 903797617:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_02";
			break;
		case 669728650:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_03";
			break;
		case 1595354593:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_04";
			break;
		case 1214120047:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_01";
			break;
		case 655769340:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_02";
			break;
		case 885316185:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_03";
			break;
		case -2016706455:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_04";
			break;
		case -1491419385:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_01";
			break;
		case 1809565830:
			sVar1 = "COL_TH_OBJ_RDL";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_02";
			break;
		case 2056119786:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_03";
			break;
		case -628873767:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01";
			break;
		case -405421956:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02";
			break;
		case -1108972386:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03";
			break;
		case -878376933:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04";
			break;
		case 1053716392:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01";
			break;
		case 806507056:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02";
			break;
		case 1571925350:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03";
			break;
		case 1330352282:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04";
			break;
		case 975496781:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_05";
			break;
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iVar0);
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iVar0, vVar4, MISC::GET_HASH_KEY("COL_TH_TITLE"), MISC::GET_HASH_KEY(sVar2), 0);
	}
	if (bParam2)
	{
		switch (iParam0)
		{
			case 499813453:
				sVar1 = "COL_TH_JACK_HALL_COMPLETE";
				break;
			case 666607663:
				sVar1 = "COL_TH_HIGH_STAKES_COMPLETE";
				break;
			case -220219788:
				sVar1 = "COL_TH_POISONOUS_TRAIL_COMPLETE";
				break;
			case 218622660:
				sVar1 = "COL_TH_TRESOR_DES_MORTS_COMPLETE";
				break;
			case 390004462:
				sVar1 = "COL_TH_ELEMENTAL_TRAIL_COMPLETE";
				break;
			case 6410548:
				sVar1 = "COL_TH_LANDMARKS_OF_RICHES_COMPLETE";
				break;
		}
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar0, MISC::GET_HASH_KEY(sVar1), sVar1, false, 0, 0);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iVar0, 1);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), MISC::GET_HASH_KEY("toast_log_blips"));
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("MISSION_RETH"), MISC::GET_HASH_KEY("SP_MISSIONS_19"));
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iVar0, MISC::_CREATE_VAR_STRING(2, sVar3));
}

void func_366(int iParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;

	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_JACK_HALL";
			iVar0 = -293111728; /* GXTEntry: "Jack Hall Gang Treasure" */
			break;
		case 666607663:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_HIGH_STAKES";
			iVar0 = 1406403390; /* GXTEntry: "High Stakes Treasure" */
			break;
		case -220219788:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_POISONOUS_TRAIL";
			iVar0 = 917780075; /* GXTEntry: "The Poisonous Trail Treasure" */
			break;
		case 218622660:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_TRESOR_DES_MORTS";
			iVar0 = -857004026; /* GXTEntry: "Le Tresor des Morts Treasure" */
			break;
		case 390004462:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			iVar0 = -1108821735; /* GXTEntry: "The Elemental Trail Treasure" */
			break;
		case 6410548:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			iVar0 = -208135085; /* GXTEntry: "Landmarks Of Riches Treasure" */
			break;
	}
	sVar3 = "COL_CTX_PLAYER_LOG";
	if (bParam1)
	{
		sVar1 = "MISSION_COMPLETE";
	}
	UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar0);
	func_530(MISC::_CREATE_VAR_STRING(2, sVar1), MISC::_CREATE_VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), 1433015236, MISC::_CREATE_VAR_STRING(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_367(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_368(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_369(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_370(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_371(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

void func_372(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_518(iParam0, &iVar0, &iVar1);
	if (!func_519(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_585(iParam0, 1024))
	{
		return;
	}
	func_520(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = uParam1;
	((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 2;
}

void func_373(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_518(iParam0, &iVar0, &iVar1);
	if (!func_519(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_585(iParam0, 1024))
	{
		return;
	}
	func_520(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = iParam1;
	if (!bParam3)
	{
		((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 1;
	}
	else
	{
		((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 5;
	}
}

int func_374()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = COLLECTION::_0x5461C821D00FE15A(-2076669067, 0);
	if (iVar0 == func_514())
	{
		return func_375();
	}
	iVar4 = (func_514() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_514())
	{
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar2, -2076669067, 0);
		if (!func_586(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_515(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_375()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_514());
	return func_515(COLLECTION::_0x126CBEBBA46693CF(iVar0, -2076669067, 0));
}

void func_376(int iParam0)
{
	switch (*iParam0)
	{
		case -1424823393: /* GXTEntry: "Opened Cigarettes" */
			*iParam0 = -885810591; /* GXTEntry: "Premium Cigarettes" */
			break;
		case 998010398: /* GXTEntry: "Opened Chewing Tobacco" */
			*iParam0 = -324053813; /* GXTEntry: "Chewing Tobacco" */
			break;
		case 1358243310: /* GXTEntry: "Opened Cigarettes" */
			*iParam0 = 1463786584; /* GXTEntry: "Cigarettes" */
			break;
		case -541584777: /* GXTEntry: "Opened Cocaine Gum" */
			*iParam0 = 206762213; /* GXTEntry: "Cocaine Gum" */
			break;
	}
}

int func_377(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_398(iParam0, 0, 1) };
	Var5 = { func_401(iParam0, Var0, Var0.f_4, 0) };
	return func_405(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_378(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_23() != -1)
	{
		return;
	}
	switch (func_334(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_587(81053684, 0) <= 0)
			{
				func_579(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_579(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_463(iParam0);
			if (func_588(iVar0))
			{
				func_589(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_579(30, iParam0, 0, 0, 0);
			}
			if (func_450() == -2125499975 || func_450() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935: /* GXTEntry: "The Summer Gunslinger" */
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case 1661121390: /* GXTEntry: "The Gunslinger" */
						func_579(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_450() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						func_579(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_590(-525676072, 0))
			{
				if (func_591(-525676072, &iVar1))
				{
					func_579(33, iVar1, 0, 0, 0);
				}
			}
			func_579(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_592(99217379))
		{
			func_358(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_333(24);
		if (func_359(&iVar2, 0))
		{
			func_201(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_379(int iParam0)
{
	if (func_331(iParam0, 943695443))
	{
		func_593(0, iParam0);
	}
	else if (func_331(iParam0, -2096528786))
	{
		func_593(1, iParam0);
	}
	else if (func_331(iParam0, -1094167013))
	{
		func_593(2, iParam0);
	}
	else if (func_331(iParam0, 1936654645))
	{
		func_593(3, iParam0);
	}
	else if (func_331(iParam0, 1306489306))
	{
		func_593(4, iParam0);
	}
	else if (func_331(iParam0, 435762317))
	{
		func_593(5, iParam0);
	}
	else if (func_331(iParam0, 1259363210))
	{
		func_593(6, iParam0);
	}
	else if (func_331(iParam0, 881398259))
	{
		func_593(7, iParam0);
	}
	else if (func_331(iParam0, -541549214))
	{
		func_593(8, iParam0);
	}
	else if (func_331(iParam0, 130796156))
	{
		func_593(-1, iParam0);
	}
}

int func_380(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	Var4.f_1 = 10;
	func_594(&Var4, 1356624740);
	return func_595(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_381(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_287(iParam0, 0))
	{
		return Var0;
	}
	if (func_331(iParam0, -305066475))
	{
		if (func_23() == -1)
		{
			if (func_331(iParam0, -537818634))
			{
				return func_62(189951448);
			}
			else
			{
				return func_62(1176172851);
			}
		}
	}
	else if (func_331(iParam0, -537818634))
	{
		return func_62(-963660207);
	}
	if (func_331(iParam0, 2084895747))
	{
		return func_62(1694039471);
	}
	return Var2;
}

void func_382(int iParam0)
{
	switch (iParam0)
	{
		case 236757114: /* GXTEntry: "Flight Feather" */
			if (func_23() == -1)
			{
				if (func_130(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_321(109, 1);
				}
			}
			break;
	}
}

void func_383(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_597(func_596(0));
	func_599(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_598(iParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_384(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	char* sVar13;
	int iVar14;
	char* sVar15;

	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_287(iParam0, 0))
	{
		return;
	}
	if (iParam0 == 1807503187)
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!func_600())
	{
		func_601(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_139(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_139(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_332(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_330(iParam0);
	iVar10 = 0;
	iVar11 = joaat("inventory");
	if ((iVar6 == joaat("ammo") && iParam0 != 424030678) && iParam0 != -1188697038)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	if (iVar6 == -1013984273 || iVar6 == 658570475)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_602(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		return;
	}
	iVar12 = joaat("COLOR_PURE_WHITE");
	sVar13 = "Transaction_Positive";
	iVar14 = 0;
	if (bVar0)
	{
		iVar12 = 619977481;
		sVar13 = "Transaction_Negative";
		iVar14 = 1;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar12 = -856358433;
		}
		else
		{
			iVar12 = -1905433004;
		}
	}
	sVar15 = func_603(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, func_288(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_331(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = MISC::_CREATE_VAR_STRING(0, func_288(iParam0));
	}
	func_599(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

void func_385(int iParam0)
{
	struct<2> Var0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_604(1) < iParam0)
	{
		iParam0 = func_604(1);
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	Var0 = { func_62(1644987397) };
	STATS::_0xBD861AE8A5181ED7(&Var0, iParam0);
}

void func_386(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_599(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, joaat("COLOR_RED"), 0, 0, 0, 1);
}

void func_387(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_599(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_388(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_605())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_599(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_606(iVar0);
			func_607(iVar0, 0, 0);
		}
		func_599(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_142(func_62(1644987397), iVar1);
	}
}

int func_389(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		return 0;
	}
	iVar0 = func_390(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_394("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_395(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_204(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_397(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_397(iVar1);
	}
	return 0;
}

int func_390(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_330(iParam0);
	if (iVar0 == joaat("weapon") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("ammo") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_331(iParam0, 1399091007))
	{
		func_575(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_391(int iParam0, int iParam1, bool bParam2, int iParam3)
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
	Var0 = { func_608(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_610(&Var0, func_609(0));
	}
	if (!func_611(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_395(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_402(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_397(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return 1;
}

int func_392(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_398(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_612(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_401(iParam0, Var0, Var0.f_4, bParam4) };
	return func_402(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_393(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_331(iParam0, 606799272))
		{
			func_613(iParam0, iParam1);
		}
		if (func_331(iParam0, -1112814642) && func_331(iParam0, -1697809989))
		{
			func_354(iParam0, iParam1, 1, 0);
		}
	}
}

int func_394(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_411(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_395(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_396(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_614(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

int func_397(int iParam0)
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

struct<5> func_398(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_440(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_330(iParam0))
	{
		case joaat("clothing"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0 = { func_401(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("weapon"):
			Var0 = { func_609(bParam1) };
			if (bParam2 && func_615(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_400(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_400(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_396(iParam0, &Var5, 1728382685 /* GXTEntry: "Right" */))
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
		case joaat("horse"):
			Var0.f_4 = 1782082944;
			break;
		case -1650247667:
			Var0.f_4 = -813824107;
			Var0 = { func_616(bParam1) };
			switch (func_334(iParam0))
			{
				case 664784405:
					Var0.f_4 = -1150938404;
					break;
				case 2020212423:
					Var0.f_4 = -1756997214;
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
			if (func_617(iParam0, -1823706425))
			{
				Var0 = { func_401(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_617(iParam0, -1483207246))
			{
				Var0 = { func_401(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
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
				Var27.f_9 = -1591664384;
				if (!func_618(Var0, &Var27, bParam1, 0))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var27.f_5 };
					Var0.f_4 = -833319691;
				}
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

int func_399(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
		case 1:
			return 1704602624;
		case 2:
			return 1214181762;
		case 3:
			return -430578371;
		case 4:
			return -730381952;
		case 5:
			return -253503777;
		case 6:
			return 1352275534;
		case 7:
			return 1666399168;
		case 8:
			return -1911121386;
		case 9:
			return 1756656691;
		case 10:
			return -1774867076;
		case 11:
			return -421952220;
		case 12:
			return -1087003323;
		case 13:
			return 1231618917;
		case 14:
			return -1183777174;
		case 15:
			return -841767082;
		case 16:
			return 1043717005;
		case 17:
			return 142663787;
		case 18:
			return 1718143051;
		case 19:
			return -6605744;
		case 20:
			return 953047564;
		case 21:
			return 769706682;
		case 22:
			return 1635590003;
		case 23:
			return -2047978619;
		case 24:
			return -586319254;
		case 25:
			return 249896112;
		case 26:
			return -1060513333;
		case 27:
			return 1317351007;
		case 28:
			return -500478573;
		case 29:
			return -806573802;
		case 30:
			return -1109949204;
		case 31:
			return -740156546;
		case 32:
			return -684532710;
		case 33:
			return 1158805436;
		case 34:
			return -559473670;
		case 35:
			return -797147251;
		case 36:
			return -382216265;
		case 37:
			return 1419177114;
		case 38:
			return 1704297235;
		case 39:
			return -1139016418;
		case 40:
			return 897705377;
		case 41:
			return 17961769;
		case 42:
			return 205582207;
		case 43:
			return 900740963;
		case 44:
			return -1369589344;
		case 45:
			return -1695823795;
		case 46:
			return -41453074;
		case 47:
			return 539767227;
		case 48:
			return 1210490314;
		case 49:
			return -399684751;
		case 50:
			return 2138893455;
		case 51:
			return -1617010487;
		case 52:
			return -832377028;
		case 53:
			return -428040245;
		case 54:
			return 1279288897;
		case 55:
			return -594897905;
		case 56:
			return -1360459240;
		case 57:
			return 1838428396;
		case 58:
			return -1467846997;
		case 59:
			return -490610263;
		case 60:
			return -1885413079;
		case 61:
			return 708884155;
		case 62:
			return -134459952;
		case 63:
			return -1912136700;
		case 64:
			return -1268031552;
		case 65:
			return 1177953227;
		case 66:
			return 2130805296;
		case 67:
			return 38093490;
		case 68:
			return -269153218;
		case 69:
			return -1995068011;
		case 70:
			return -164284834;
		case 71:
			return 1446463345;
		case 72:
			return 1501315823;
		case 73:
			return -750379482;
		case 74:
			return -929560937;
		case 75:
			return 608323241;
		case 76:
			return 1030796013;
		case 77:
			return 1915057434;
		case 78:
			return -1582276476;
		case 79:
			return 692059311;
		case 80:
			return 2062839241;
		case 81:
			return -1884531872;
		case 82:
			return -866434534;
		case 83:
			return -1252192421;
		case 84:
			return 1243288963;
		case 85:
			return -1953772189;
		case 86:
			return 754411745;
		case 87:
			return 545309006;
		case 88:
			return -1089810811;
		case 89:
			return 1957869400;
		case 90:
			return -241412332;
		case 91:
			return -1548010959;
		case 92:
			return 550150488;
		case 93:
			return 946565453;
		case 94:
			return 434443248;
		case 95:
			return -1709914938;
		case 96:
			return 366686112;
		case 97:
			return -1370063350;
		case 98:
			return 2126829550;
		case 99:
			return 226552910;
		case 100:
			return 721193431;
		case 101:
			return -315672460;
		case 102:
			return 623544501;
		case 103:
			return 259556714;
		case 104:
			return -2125361825;
		case 105:
			return 1078230356;
		case 106:
			return 1885364811;
		case 107:
			return 1630382737;
		case 108:
			return 1738245512;
		case 109:
			return 1540262216;
		case 110:
			return 1016871472;
		case 111:
			return 13829069;
		case 112:
			return 737051352;
		case 113:
			return 1734614610;
		case 114:
			return -208715295;
		case 115:
			return 1435062936;
		case 116:
			return 1483055553;
		case 117:
			return 380335002;
		case 118:
			return -1079385677;
		case 119:
			return 676610411;
		case 120:
			return 2145419552;
		case 121:
			return 657238733;
		case 122:
			return 1850579281;
		case 123:
			return -1923957384;
		case 124:
			return -1142828108;
		case 125:
			return -1400618531;
		case 126:
			return -1433857135;
		case 127:
			return 209987206;
		case 128:
			return 1686943047;
		case 129:
			return -59178517;
		case 130:
			return 2134884601;
		case 131:
			return 651707517;
		case 132:
			return -633788535;
		case 133:
			return 116394463;
		case 134:
			return -1196973875;
		case 135:
			return 801752086;
		case 136:
			return 184475332;
		case 137:
			return -1880922659;
		case 138:
			return -898138634;
		case 139:
			return -2107418444;
		case 140:
			return -679970099;
		case 141:
			return -1531392549;
		case 142:
			return 1612483376;
		case 143:
			return 463930900;
		case 144:
			return -632148238;
		case 145:
			return 55303249;
		case 146:
			return 2108322089;
		case 147:
			return -1358896714;
		case 148:
			return 74475632;
		case 149:
			return -28710953;
		case 150:
			return -1791599168;
		case 151:
			return 1605938169;
		case 152:
			return 1255242276;
		case 153:
			return 636467727;
		case 154:
			return -1567688525;
		case 155:
			return -77886679;
		case 156:
			return -1057900679;
		case 157:
			return -1960888134;
		case 158:
			return -1719717295;
		case 159:
			return -1779244911;
		case 160:
			return -670540863;
		case 161:
			return 223362311;
		case 162:
			return 1150824567;
		case 163:
			return 974471191;
		case 164:
			return 1989683968;
		case 165:
			return 254804477;
		case 166:
			return 192057609;
		case 167:
			return 1553957817;
		case 168:
			return 2099829015;
		case 169:
			return -840300007 /* GXTEntry: "Extremely durable, hand tooled Off-Hand Holster with elaborate rattlesnake and sk" +
    "ull decoration." */;
		case 170:
			return -1948423372;
		case 171:
			return 981083654;
		case 172:
			return 1283289876;
		case 173:
			return -606884489;
		case 174:
			return -100418572;
		case 175:
			return 663645231;
		case 176:
			return 1442217033;
		case 177:
			return 1410986244;
		case 178:
			return 847409839;
		case 179:
			return 923926911;
		case 180:
			return 109995826;
		case 181:
			return -747412737;
		case 182:
			return 1114341727;
		case 183:
			return -539456939;
		case 184:
			return 45887121;
		case 185:
			return 913271624;
		case 186:
			return -1652812715;
		case 187:
			return -1791365775;
		case 188:
			return -979299941;
		case 189:
			return 713062001;
		case 190:
			return -575045963;
		case 191:
			return 1852965262;
		case 192:
			return -1398836354;
		case 193:
			return -1829885298;
		case 194:
			return -1773850357;
		case 195:
			return -564258009;
		case 196:
			return 2016532685;
		case 197:
			return -1070563798;
		case 198:
			return -1619221343;
		case 199:
			return -345571691;
		case 200:
			return 544288390;
		case 201:
			return 159578294;
		case 202:
			return -76852849;
		case 203:
			return 1110295244;
		case 204:
			return 2104563477;
		case 205:
			return 1947827651;
		case 206:
			return -933072766;
		case 207:
			return 2104388648;
		case 208:
			return -1677140601;
		case 209:
			return -2133097881;
		case 210:
			return -826678792;
		case 211:
			return -513522325;
		case 212:
			return 1970588249;
		case 213:
			return -2080032591;
		case 214:
			return 1758847745;
		case 215:
			return 895010282;
		case 216:
			return 1786352060;
		case 217:
			return -833319691;
		case 218:
			return 1591329969;
		case 219:
			return 2123222014;
		case 220:
			return -1578397674;
		case 221:
			return 1473261684;
		case 222:
			return -241855024;
		case 223:
			return 12999093;
		case 224:
			return -6796437;
		case 225:
			return -268116367;
		case 226:
			return -636470867;
		case 227:
			return 1737668280;
		case 228:
			return 892807236;
		case 229:
			return -733247890;
		case 230:
			return 24047176;
		case 231:
			return -1561999014;
		case 232:
			return -2052774042;
		case 233:
			return -997150586;
		case 234:
			return -1189569496;
		case 235:
			return 46488141;
		case 236:
			return 1046566686;
		case 237:
			return 325139909;
		case 238:
			return -1585141069;
		case 239:
			return 802754820;
		case 240:
			return 1415981582;
		case 241:
			return -1886147520;
		case 242:
			return 654877947;
		case 243:
			return -415648720;
		case 244:
			return 1221327846;
		case 245:
			return 923162715;
		case 246:
			return 625423581;
		case 247:
			return 326668608;
		case 248:
			return 669530755;
		case 249:
			return 429759982;
		case 250:
			return -2111934838;
		case 251:
			return 1886178087;
		case 252:
			return 1587783573;
		case 253:
			return -279722001;
		case 254:
			return 1310070322;
		case 255:
			return 724026534;
		case 256:
			return 137387616;
		case 257:
			return -653439684;
		case 258:
			return 1376835592;
		case 259:
			return -1824203570;
		case 260:
			return -1654197998;
		case 261:
			return 798987653;
		case 262:
			return 976923323;
		case 263:
			return 1167442289;
		case 264:
			return 986998820;
		case 265:
			return -2119169513;
		case 266:
			return -2015960939;
		case 267:
			return -1287636759;
		case 268:
			return -706917073;
		case 269:
			return -2166805;
		case 270:
			return -1391602433;
		case 271:
			return 1782075221;
		case 272:
			return 1282544585;
		case 273:
			return 1732594027;
		case 274:
			return -1058817012;
		case 275:
			return 1090546265;
		case 276:
			return -1783120823;
		case 277:
			return -1535745896;
		case 278:
			return -2086922122;
		case 279:
			return -1675198649;
		case 280:
			return 1189497682;
		case 281:
			return -1565675519;
		case 282:
			return -268973591;
		case 283:
			return 1039159916;
		case 284:
			return 1111816631;
		case 285:
			return 405591388;
		case 286:
			return 897456793;
		case 287:
			return 104187473;
		case 288:
			return 773808542;
		case 289:
			return -1120669954;
		case 290:
			return -1389278274;
		case 291:
			return 552979403;
		case 292:
			return -1571578784;
		case 293:
			return -708312114;
		case 294:
			return 688823508;
		case 295:
			return -1622147240;
		case 296:
			return 830292162;
		case 297:
			return 226276782;
		case 298:
			return -678416628;
		case 299:
			return -1098528034;
		case 300:
			return 316207340;
		case 301:
			return -1909200748;
		case 302:
			return -939652363;
		case 303:
			return joaat("SLOTID_PROGRESSION");
		case 304:
			return -375447933;
		case 305:
			return 537014919;
		case 306:
			return 1784584921;
		case 307:
			return 1084182731;
		case 308:
			return -1045471300;
		case 309:
			return 1617414719;
		case 310:
			return -787761753;
		case 311:
			return -490616606;
		case 312:
			return 1491346514;
		case 313:
			return -1311702610;
		case 314:
			return -904250715;
		case 315:
			return 1034665895;
		case 316:
			return -101524555;
		case 317:
			return 1419152594;
		case 318:
			return -451359317;
		case 319:
			return -1915385310;
		case 320:
			return 1315162488;
		case 321:
			return -361152079;
		case 322:
			return -2041626192;
		case 323:
			return -2077812539;
		case 324:
			return -1371514637;
		case 325:
			return 1730017037;
		case 326:
			return 892816668;
		case 327:
			return -1994943603;
		case 328:
			return 603133554;
		case 329:
			return -30160144;
		case 330:
			return -1248299493;
		case 331:
			return 727393558;
		case 332:
			return 755611221;
		case 333:
			return -170255458;
		case 334:
			return 1011151573;
		case 335:
			return 1122339631;
		case 336:
			return 454815308;
		case 337:
			return 990701735;
		case 338:
			return -246340825;
		case 339:
			return -1410671073;
		case 340:
			return 1547608292;
		case 341:
			return -714132970;
		case 342:
			return 732290690;
		case 343:
			return 971340545;
		case 344:
			return -234132662;
		case 345:
			return -2143057988;
		case 346:
			return -993947465;
		case 347:
			return -486552269;
		case 348:
			return -1156317860;
		case 349:
			return 1229625803;
		case 350:
			return -388596167;
		case 351:
			return -1204639465;
		case 352:
			return -1384685096;
		case 353:
			return -2026728113;
		case 354:
			return -1228057307;
		case 355:
			return 1835126290;
		case 356:
			return 1890833594;
		case 357:
			return -751549960;
		case 358:
			return -1682270750;
		case 359:
			return -1839865333;
		case 360:
			return -1990383629;
		case 361:
			return 1712094016;
		case 362:
			return 1532953697;
		case 363:
			return 1620318083;
		case 364:
			return -307230331;
		case 365:
			return -1034549620;
		case 366:
			return -1293064293;
		case 367:
			return -1540142553;
		case 368:
			return -1769886012;
		case 369:
			return -1983081126;
		case 370:
			return -1106117124;
		case 371:
			return -1873108338;
		case 372:
			return -2097543219;
		case 373:
			return 155413195;
		case 374:
			return -1162387149;
		case 375:
			return 1728382685 /* GXTEntry: "Right" */;
		case 376:
			return -649335959 /* GXTEntry: "Left" */;
		case 377:
			return -1876502240;
		case 378:
			return -2107032155;
		case 379:
			return 619103418;
		case 380:
			return 1355448197;
		case 381:
			return 1681762005;
		case 382:
			return 1026887814;
		case 383:
			return 354352628;
		case 384:
			return 1519366642;
		case 385:
			return -82757515;
		case 386:
			return 386306655;
		case 387:
			return 1243962119;
		case 388:
			return 756214903;
		case 389:
			return -718417579;
		case 390:
			return -1445516411;
		case 391:
			return -672392892;
		case 392:
			return 1465341584;
		case 393:
			return -427758369;
		case 394:
			return -735647142;
		case 395:
			return 1535838048;
		case 396:
			return -602272282;
		case 397:
			return 2051264661;
		case 398:
			return 487172188;
		case 399:
			return 282270687;
		case 400:
			return 1607708943;
		case 401:
			return 1686264939;
		case 402:
			return 314786149;
		case 403:
			return 1402841185;
		case 404:
			return 1099170772;
		case 405:
			return 2125676786;
		case 406:
			return -363896735;
		case 407:
			return -468790222;
		case 408:
			return -1779133048;
		case 409:
			return 1732537631;
		case 410:
			return 1755095401;
		case 411:
			return 835771095;
		case 412:
			return 1963317232;
		case 413:
			return 259627919;
		case 414:
			return 1299075397;
		case 415:
			return -1509094230;
		case 416:
			return 61132362;
		case 417:
			return 1549741908;
		case 418:
			return 288484254;
		case 419:
			return -1877032947;
		case 420:
			return -1395676456;
		case 421:
			return 1136146715;
		case 422:
			return 468034421;
		case 423:
			return 1079459546;
		case 424:
			return -140369351;
		case 425:
			return 1822341990;
		case 426:
			return 1219701681;
		case 427:
			return 1601295268;
		case 428:
			return -1692460667;
		case 429:
			return 1471419228;
		case 430:
			return 907446160;
		case 431:
			return -1126482585;
		case 432:
			return 1911050315;
		case 433:
			return -1343525599;
		case 434:
			return 1261891225;
		case 435:
			return 763162704;
		case 436:
			return 1335861197;
		case 437:
			return 526744654;
		case 438:
			return -1177461517;
		case 439:
			return -241638635;
		case 440:
			return 1024262875;
		case 441:
			return 853355463;
		case 442:
			return -337288221;
		case 443:
			return 361381308;
		case 444:
			return -1264898804;
		case 445:
			return -585289073;
		case 446:
			return 1423542233;
		case 447:
			return -948489286;
		case 448:
			return 2063859257;
		case 449:
			return -1652627327;
		case 450:
			return -1959697839;
		case 451:
			return -1532267859;
		case 452:
			return -1410062763;
		case 453:
			return -901428716;
		case 454:
			return -1628873469;
		case 455:
			return 144855571;
		case 456:
			return -617589883;
		case 457:
			return -1306457086;
		case 458:
			return 1713542477;
		case 459:
			return -305542365;
		case 460:
			return 1985390213;
		case 461:
			return -2145069367;
		case 462:
			return -1674390752;
		case 463:
			return -2117214398;
		case 464:
			return 1880805647;
		case 465:
			return -62390436;
		case 466:
			return 1815288415;
		case 467:
			return 196214097;
		case 468:
			return -201958220;
		case 469:
			return 1400281261;
		case 470:
			return 1601515402;
		case 471:
			return -940704970;
		case 472:
			return -548371721;
		case 473:
			return -1022384613;
		case 474:
			return -357406394;
		case 475:
			return 1077068189;
		case 476:
			return -782241404;
		case 477:
			return 1669853467;
		case 478:
			return 1592019450;
		case 479:
			return 635273153;
		case 480:
			return -1559225678;
		case 481:
			return -266425508;
		case 482:
			return 1117400455;
		case 483:
			return 454332195;
		case 484:
			return -1328061889;
		case 485:
			return 561650932;
		case 486:
			return 256105670;
		case 487:
			return 1976779618;
		case 488:
			return -269095126;
		case 489:
			return 2145617267;
		case 490:
			return 1150213537;
		case 491:
			return 1598825281;
		case 492:
			return -712527121;
		case 493:
			return 1308553072;
		case 494:
			return 852866398;
		case 495:
			return -1794417972;
		case 496:
			return 293062146;
		case 497:
			return 95360094;
		case 498:
			return 807631773;
		case 499:
			return 1603958275;
		case 500:
			return 860052020;
		case 501:
			return -1885979781;
		case 502:
			return 746147970;
		case 503:
			return 666663006;
		case 504:
			return -2096186453;
		case 505:
			return 859409444;
		case 506:
			return -671427187;
		case 507:
			return 100192478;
		case 508:
			return 307812616;
		case 509:
			return 1670843243;
		case 510:
			return 899615863;
		case 511:
			return -298901850;
		case 512:
			return 1379186917;
		case 513:
			return -817206030;
		case 514:
			return -1150323212;
		case 515:
			return -247466821;
		case 516:
			return 427124242;
		case 517:
			return 855418120;
		case 518:
			return -777015093;
		case 519:
			return -722462870;
		case 520:
			return -937454324;
		case 521:
			return -339438116;
		case 522:
			return 2135639035;
		case 523:
			return 1254273765;
		case 524:
			return -792172668;
		case 525:
			return 1905987493;
		case 526:
			return 495693044;
		case 527:
			return -1693422950;
		case 528:
			return -205873076;
		case 529:
			return -2143114654;
		case 530:
			return -1420574021;
		case 531:
			return -1959250381;
		case 532:
			return -1088328663;
		case 533:
			return 513602003;
		case 534:
			return 359221401;
		case 535:
			return 1005272;
		case 536:
			return 1583044470;
		case 537:
			return 348853959;
		case 538:
			return 1045621973;
		case 539:
			return 1084576580;
		case 540:
			return 1651573695;
		case 541:
			return 1463321587;
		case 542:
			return -997505963;
		case 543:
			return -1649851713;
		case 544:
			return -386012962;
		case 545:
			return 1386101789;
		case 546:
			return 1227915917;
		case 547:
			return -218846335;
		case 548:
			return -352578118;
		case 549:
			return 1426626782;
		case 550:
			return -714081520;
		case 551:
			return 74547781;
		case 552:
			return 1271463052;
		case 553:
			return 1983140194;
		case 554:
			return 677262775;
		case 555:
			return -832337898;
		case 556:
			return -319249747;
		case 557:
			return -16955722;
		case 558:
			return -1360128126;
		case 559:
			return -1535425646;
		case 560:
			return -1063641743;
		case 561:
			return -1041133401;
		case 562:
			return 1380479304;
		case 563:
			return 600890828;
		case 564:
			return 733333190;
		case 565:
			return 1843035435;
		case 566:
			return -304127320;
		case 567:
			return 122470371;
		case 568:
			return 0;
		case 569:
			return -1591664384;
		case 570:
			return -673000374;
		case 571:
			return -1150938404;
		case 572:
			return -1756997214;
		case 573:
			return -813824107;
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

bool func_400(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_472(iParam0, *uParam1, iParam2, bParam3) > 0;
}

struct<4> func_401(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_287(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_411(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_402(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_619(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_618(*uParam1, &Var0, bParam6, 0))
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
	if (!func_337(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_411(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_403(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar1 = func_122(WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

int func_404(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	struct<4> Var0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x22E590F108289A9D(func_411(bParam6), &uParam0, iParam4, &Var0))
	{
		return 0;
	}
	if (!func_618(Var0, uParam5, bParam6, 0))
	{
		return 0;
	}
	return 1;
}

int func_405(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_287(iParam0, 0))
	{
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_512(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_337(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_411(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_406(struct<4> Param0, int iParam4)
{
	struct<11> Var0;

	if (!func_337(0))
	{
		return func_620(Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_618(Param0, &Var0, 0, 0))
	{
		return 0;
	}
	if (Var0.f_10 == iParam4)
	{
		return 1;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_411(0), &Param0, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_407(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_408(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

int func_409(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
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

int func_410(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_608(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_610(&Var0, func_609(0));
	}
	if (!func_611(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_397(iVar14);
	return uVar15;
}

int func_411(bool bParam0)
{
	if (func_23() == -1)
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

void func_412(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_23() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

int func_413(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (func_39(iParam0))
	{
		case 1:
			iVar0 = func_100(iParam0);
			return func_621(iVar0);
		case 8:
			iVar1 = func_100(iParam0);
			if (func_102(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
			{
				return func_622(iVar1);
			}
			break;
	}
	return -1;
}

int func_414()
{
	if (!func_130(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 0;
	}
	else if (!func_130(((*Global_1347702)[66 /*49*/])->f_15, 1))
	{
		return 1;
	}
	else if (!func_130(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 2;
	}
	else if (!func_130(((*Global_1835011)[38 /*74*/])->f_1, 1))
	{
		return 3;
	}
	else if (!func_130(((*Global_1347702)[68 /*49*/])->f_15, 1))
	{
		return 4;
	}
	else if (!func_130(((*Global_1835011)[59 /*74*/])->f_1, 1))
	{
		return 5;
	}
	else if (!func_130(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_415(int iParam0, int iParam1)
{
	if (!func_15(iParam0))
	{
		return;
	}
	func_442(iParam0, iParam1);
}

void func_416(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_114(Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_52(Global_1935630, 4194304);
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

int func_417(bool bParam0)
{
	if (!bParam0 && func_623(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(752193127, bParam0, 0);
	return 1;
}

void func_418(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_419(int iParam0, bool bParam1)
{
	if (func_23() != -1)
	{
		return;
	}
	if (func_38(0) != iParam0)
	{
		return;
	}
	if (func_624(iParam0))
	{
		if (bParam1)
		{
			func_625(-525676072);
		}
		else
		{
			func_626(-525676072);
		}
	}
}

int func_420(int iParam0)
{
	return func_628(func_627(iParam0));
}

int func_421(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 15) & 16383;
}

int func_422(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 854119837;
		case 1:
			return -1292544588;
		case 2:
			return -1003325394;
		case 3:
			return -696705861;
		case 4:
			return -335460405;
		case 5:
			return 903797617;
		case 6:
			return 669728650;
		case 7:
			return 1595354593;
		case 8:
			return 1214120047;
		case 9:
			return 655769340;
		case 10:
			return 885316185;
		case 11:
			return -2016706455;
		case 12:
			return -1491419385;
		case 13:
			return 1809565830;
		case 14:
			return 2056119786;
		case 15:
			return -628873767;
		case 16:
			return -405421956;
		case 17:
			return -1108972386;
		case 18:
			return -878376933;
		case 19:
			return 1053716392;
		case 20:
			return 806507056;
		case 21:
			return 1571925350;
		case 22:
			return 1330352282;
		case 23:
			return 975496781;
		default:
			break;
	}
	return 0;
}

char* func_423()
{
	return "pausemenu_player";
}

int func_424()
{
	int iVar0;

	iVar0 = func_629();
	if (iVar0 <= -320)
	{
		return -320;
	}
	if (iVar0 <= -280)
	{
		return -280;
	}
	if (iVar0 <= -240)
	{
		return -240;
	}
	if (iVar0 <= -200)
	{
		return -200;
	}
	if (iVar0 <= -160)
	{
		return -160;
	}
	if (iVar0 <= -120)
	{
		return -120;
	}
	if (iVar0 <= -80)
	{
		return -80;
	}
	if (iVar0 <= -40)
	{
		return -40;
	}
	if (iVar0 >= 320)
	{
		return 320;
	}
	if (iVar0 >= 280)
	{
		return 280;
	}
	if (iVar0 >= 240)
	{
		return 240;
	}
	if (iVar0 >= 200)
	{
		return 200;
	}
	if (iVar0 >= 160)
	{
		return 160;
	}
	if (iVar0 >= 120)
	{
		return 120;
	}
	if (iVar0 >= 80)
	{
		return 80;
	}
	if (iVar0 >= 40)
	{
		return 40;
	}
	return 0;
}

char* func_425(int iParam0)
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

char* func_426(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RPG_STAMINA";
		case 0:
			return "RPG_HEALTH";
		case 2:
			return "RPG_DEADEYE";
		default:
			break;
	}
	return "";
}

int func_427(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 0:
			return 0;
		case 1:
			return 50;
		case 2:
			return 100;
		case 3:
			return 200;
		case 4:
			return 350;
		case 5:
			return 550;
		case 6:
			return 800;
		case 7:
			return 1100;
		default:
			break;
	}
	return 0;
}

struct<4> func_428(int iParam0, int iParam1)
{
	char cVar0[32];

	if (iParam0 >= 10)
	{
		iParam1 = 0;
	}
	StringCopy(&cVar0, "TOAST_RPG_LEVEL_", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	return cVar0;
}

var func_429(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_430()
{
	return 0;
}

int func_431()
{
	return 1;
}

int func_432(int iParam0)
{
	int iVar0;

	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_334(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

int func_433(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 0)
	{
		iVar0 = func_334(iParam0);
		if (iVar0 != 0)
		{
			if (iParam1 >= 0 && iParam1 < func_432(iParam0))
			{
				if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar0, iParam1, &uVar1))
				{
					return uVar1;
				}
			}
		}
	}
	return 0;
}

int func_434()
{
	return 5;
}

int func_435()
{
	return 6;
}

int func_436(int iParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return 0;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iParam0, func_630());
	return iVar0;
}

char* func_437(int iParam0)
{
	switch (iParam0)
	{
		case -1179079660: /* GXTEntry: "Missouri Fox Trotter - Sable Champagne Coat" */
		case 1275638003: /* GXTEntry: "Missouri Fox Trotter - Amber Champagne Coat" */
		case 2083573823: /* GXTEntry: "Missouri Fox Trotter - Silver Dapple Pinto Coat" */
			return "HORSE_CLASS_RACEWORK";
		case -1597490733: /* GXTEntry: "Mustang - Grullo Dun Coat" */
		case -1428527735: /* GXTEntry: "Mustang - Tiger Striped Bay Coat" */
		case 805526368: /* GXTEntry: "Mustang - Golden Dun Coat" */
		case 2000205872: /* GXTEntry: "Mustang - Wild Bay Coat" */
			return "HORSE_CLASS_WARWORK";
		case -1882436593: /* GXTEntry: "Turkoman - Silver Coat" */
		case -225011104: /* GXTEntry: "Turkoman - Gold Coat" */
		case -136225010: /* GXTEntry: "Turkoman - Dark Bay Coat" */
			return "HORSE_CLASS_RACEWAR";
	}
	return "HORSE_CLASS_MULTI";
}

char* func_438(int iParam0)
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
		case -540812301: /* GXTEntry: "Appaloosa - Few Spotted Coat" */
			return "BREED_APPALOOSA_FEWSPOTTED_PC";
		case -179102320: /* GXTEntry: "Appaloosa - Brown Leopard Coat" */
			return "BREED_APPALOOSA_BROWNLEOPARD";
		case -1266863668: /* GXTEntry: "Appaloosa - Leopard Coat" */
			return "BREED_APPALOOSA_LEOPARD";
		case -2078767648: /* GXTEntry: "Arabian - Black Coat" */
			return "BREED_ARABIAN_BLACK";
		case -2055655009: /* GXTEntry: "Arabian - Red Chestnut Coat" */
			return "BREED_ARABIAN_REDCHESTNUT";
		case -1506685618: /* GXTEntry: "Arabian - Red Chestnut Coat" */
			return "BREED_ARABIAN_REDCHESTNUT_PC";
		case -852553462: /* GXTEntry: "Arabian - Rose Grey Bay Coat" */
			return "BREED_ARABIAN_ROSEGREYBAY";
		case -2105447887: /* GXTEntry: "Arabian - Warped Brindle Coat" */
			return "BREED_ARABIAN_WARPEDBRINDLE_PC";
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
		case 1427053849: /* GXTEntry: "Kentucky Saddler - Buttermilk Buckskin Coat" */
			return "BREED_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN_PC";
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
		case 955937750: /* GXTEntry: "Morgan - Liver Chestnut Coat" */
			return "BREED_MORGAN_LIVERCHESTNUT_PC";
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
		case 2059232991: /* GXTEntry: "Tennessee Walker - Gold Palomino Coat" */
			return "BREED_TENNESSEEWALKER_GOLDPALOMINO_PC";
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

float func_439(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;

	fVar0 = 0f;
	if (iParam1 == 0)
	{
		if (func_168(iParam0, 0) > 50)
		{
			fVar0 = (fVar0 + 0.25f);
		}
	}
	if (func_193(-184823984 /* GXTEntry: "Boar Tusk Talisman" */, 1, 0))
	{
		fVar0 = (fVar0 - -0.1f);
	}
	if (func_631() == 0 && func_258() == iParam0)
	{
		fVar1 = func_632(iParam1);
		fVar0 = (fVar0 - fVar1);
	}
	return fVar0;
}

struct<4> func_440(bool bParam0)
{
	return func_401(joaat("character"), func_633(), -1591664384, bParam0);
}

bool func_441(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_442(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_634(iParam0);
	}
	else
	{
		func_635(iParam0, iParam1);
	}
	func_636();
}

void func_443(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_2 = iParam1;
}

void func_444(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_3 = iParam1;
}

void func_445(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_4 = iParam1;
}

void func_446(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12105[iParam0 /*7*/] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0 /*2*/] = iParam1;
}

void func_447(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_5 = iParam1;
		return;
	}
	(Global_1058888->f_498[iParam0 /*2*/])->f_1 = iParam1;
}

int func_448(int iParam0, var uParam1)
{
	var uVar0;
	struct<2> Var1;
	int iVar8;

	iVar8 = 0;
	if (!func_637(iParam0, func_450()))
	{
		return 0;
	}
	Var1 = func_638(func_450());
	Var1.f_1 = iParam0;
	DATAFILE::_0x91DED5DD64BB2691(&Var1);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var1))
	{
		return 0;
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var1))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&uVar0, &Var1, joaat("component")))
		{
		}
		else
		{
			(*uParam1)[iVar8] = uVar0;
			iVar8++;
		}
	}
	return iVar8;
}

int func_449(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<10> Var5;
	int iVar19;
	struct<14> Var20;

	Var5.f_9 = -1591664384;
	iVar19 = func_638(func_450());
	Var20 = { func_608(0, -1591664384, -1591664384, -1591664384, -999503751, 0) };
	if (!func_611(&Var20, &iVar0, &iVar1, bParam3))
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (!func_395(&Var5, iVar2, iVar0, iVar1))
		{
		}
		else if (iParam0 == Var5.f_4)
		{
		}
		else
		{
			iVar4 = func_463(Var5.f_4);
			if (iVar4 >= 0 && iVar4 <= 5)
			{
			}
			else
			{
				iVar3 = (*iParam2 - 1);
				while (iVar3 >= 0)
				{
					func_639(&(Global_1946804->f_964), iVar19, Var5.f_4, joaat("component"), 1, uParam1[iVar3]);
					DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804->f_964));
					if (!DATAFILE::_0xED4413CEE1BF142C(&(Global_1946804->f_964)))
					{
					}
					else
					{
						*iParam2 = (*iParam2 - 1);
						(*uParam1)[iVar3] = uParam1[*iParam2];
						(*uParam1)[*iParam2] = 0;
					}
					iVar3 = (iVar3 + -1);
				}
			}
		}
		iVar2++;
	}
	func_397(iVar0);
	return 1;
}

int func_450()
{
	return Global_1946804->f_1;
}

void func_451(int iParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar2 = iParam0;
	if (!func_640(iVar2, &iVar0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_26795.f_627.f_121.f_19)
	{
		if (iVar2 == &Global_26795.f_627.f_121[iVar0])
		{
			bVar1 = true;
		}
		else
		{
			iVar0++;
		}
	}
	if (!bVar1)
	{
		return;
	}
	if (Global_26795.f_627.f_121.f_19 == 1)
	{
		Global_26795.f_627.f_121.f_19 = 0;
		*uParam1 = 0;
		Global_26795.f_627.f_121[0] = 0;
		return;
	}
	Global_26795.f_627.f_121.f_19 = (Global_26795.f_627.f_121.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_26795.f_627.f_121[iVar0] = &Global_26795.f_627.f_121[Global_26795.f_627.f_121.f_19];
	Global_26795.f_627.f_121[Global_26795.f_627.f_121.f_19] = 0;
}

void func_452(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	switch (func_334(iParam0))
	{
		case -2061583405:
			bVar0 = func_641(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_641(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_641(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_641(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_641(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_641(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_642();
	}
	if (bParam1)
	{
		func_643(0, 0);
	}
}

int func_453(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_398(iParam0, 1, 0) };
	return func_576(Var0.f_4);
}

int func_454(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		case -1889597427:
			return 0;
		case -1884748965:
			return 32;
		case -1586649372:
			return 33;
		case -1506259487:
			return 5;
		case -1505978566:
			return 22;
		case -1489346253:
			return 38;
		case -1364808185:
			return 19;
		case -1292426046:
			return 8;
		case -1197751823:
			return 20;
		case -1176744536:
			return 24;
		case -1130865351:
			return 31;
		case -1130352927:
			return 1;
		case -893163968:
			return 17;
		case -735900586:
			return 28;
		case -676503695:
			return 6;
		case -450913544:
			return 18;
		case -426430150:
			return 29;
		case -358215195:
			return 39;
		case -338487716:
			return 11;
		case -207860920:
			return 26;
		case 99217379:
			return 27;
		case 304805134:
			return 21;
		case 383349088:
			return 7;
		case 389988485:
			return 2;
		case 673166414:
			return 25;
		case 788010710:
			return 34;
		case 1108822547:
			return 10;
		case 1145151482:
			return 23;
		case 1250092473:
			return 16;
		case 1367443060:
			return 4;
		case 1422688607:
			return 9;
		case 1600962399:
			return 13;
		case 1672288269:
			return 15;
		case 1742327865:
			return 12;
		case 1780904876:
			return 3;
		case 1788623170:
			return 30;
		case 1849504272:
			return 14;
		case 1900541263:
			return 37;
		case 1958421083:
			return 35;
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

void func_455(var uParam0)
{
	int iVar0;

	*uParam0 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(uParam0->f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1497.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

int func_456(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<4> Var4;

	Var4 = func_638(iParam6);
	Var4.f_1 = iParam1;
	Var4.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var4);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		return 0;
	}
	DATAFILE::_0xA63CD20F19B961AB(&bVar2, &Var4, -1516819610);
	DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 2049745650);
	*bParam2 = bVar2;
	Global_1946804->f_2652 = 0;
	if (!bVar2 && !bParam3)
	{
		func_645(uParam0, func_644(iVar0), 1);
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_454(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, joaat("component")))
			{
			}
			else
			{
				Global_1946804->f_2612[Global_1946804->f_2652] = iVar1;
				Global_1946804->f_2652++;
				uParam0->f_1[iVar1 /*3*/] = iVar0;
				if (bParam5)
				{
					if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1441384))
					{
						(uParam0->f_1[iVar1 /*3*/])->f_1 = joaat("base");
					}
					else
					{
						Jump @343; //curOff = 278
						if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1194786549))
						{
							if (func_646(iVar3) && func_647(&(uParam0->f_1[iVar1 /*3*/]), iVar3, &iVar0))
							{
								(uParam0->f_1[iVar1 /*3*/])->f_1 = iVar0;
							}
						}
						else
						{
							(uParam0->f_1[iVar1 /*3*/])->f_1 = iVar0;
						}
					}
					if (bVar2)
					{
						iVar1 = 0;
						while (iVar1 < Global_1946804->f_2652)
						{
							func_648(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1] /*3*/]), &(Global_1946804->f_2612[iVar1]), 0, 0);
							iVar1++;
						}
					}
					if (bParam4)
					{
						*uParam0 = iParam1;
					}
					return 1;
				}
			}
		}
	}

Vector3 func_457(int iParam0, int iParam1)
{
	if (func_23() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		return *((Global_26795.f_26[iParam1 /*120*/])->f_1.f_1[iParam0 /*3*/]);
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	return *((Global_36637.f_45.f_350.f_26[iParam1 /*120*/])->f_1.f_1[iParam0 /*3*/]);
}

int func_458(int iParam0, int iParam1)
{
	vector3 vVar0;

	vVar0 = { func_457(iParam0, iParam1) };
	return vVar0.x;
}

int func_459(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_649();
	}
	if (func_23() == -1)
	{
		return (Global_26795.f_26[iParam0 /*120*/])->f_1;
	}
	return (Global_36637.f_45.f_350.f_26[iParam0 /*120*/])->f_1;
}

void func_460(int iParam0)
{
	int iVar0;
	var uVar1;

	if (func_23() == -1)
	{
		Global_26795.f_26[iParam0 /*120*/] = 0;
		(Global_26795.f_26[iParam0 /*120*/])->f_1 = 0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			uVar1 = &Global_1946804->f_57[iVar0 /*11*/];
			func_462(&uVar1, iVar0, iParam0);
			iVar0++;
		}
		return;
	}
	Global_36637.f_45.f_350.f_26[iParam0 /*120*/] = 0;
	(Global_36637.f_45.f_350.f_26[iParam0 /*120*/])->f_1 = 0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		uVar1 = &Global_1946804->f_57[iVar0 /*11*/];
		func_650(&uVar1, iVar0, iParam0);
		iVar0++;
	}
}

bool func_461(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

void func_462(var uParam0, int iParam1, int iParam2)
{
	*((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

int func_463(int iParam0)
{
	switch (iParam0)
	{
		case 439606975: /* GXTEntry: "Fancy Suit" */
			return 14;
		case 1661121390: /* GXTEntry: "The Gunslinger" */
			return 6;
		case 1164374808: /* GXTEntry: "Winter Outfit" */
			return 7;
		case 624063935: /* GXTEntry: "The Summer Gunslinger" */
			return 9;
		case -1476781101: /* GXTEntry: "Island Outfit" */
			return 10;
		case 1560492757: /* GXTEntry: "Robbery Outfit" */
			return 15;
		case -769081407: /* GXTEntry: "The Wittemore" */
			return 16;
		case 688004210: /* GXTEntry: "Police Outfit" */
			return 20;
		case 166243423: /* GXTEntry: "Custom Outfit" */
			return 0;
		case -1826731591: /* GXTEntry: "Brawler\'s Outfit" */
			return 24;
		case 2119049229:
			return 25;
		case 1352942778: /* GXTEntry: "The Rebel" */
			return 26;
		case 1964379549: /* GXTEntry: "The Innocent" */
			return 27;
		case 1201189539: /* GXTEntry: "The Pursuer" */
			return 28;
		case 1351927599: /* GXTEntry: "The Grizzlies Outlaw" */
			return 21;
		case 2032023096: /* GXTEntry: "The Nuevo Paraiso" */
			return 22;
		case 1784889667:
			return 13;
		case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
			return 8;
		case 1383300684: /* GXTEntry: "Saved Custom Outfit One" */
			return 1;
		case 2051441678: /* GXTEntry: "Saved Custom Outfit Two" */
			return 2;
		case 162509669: /* GXTEntry: "Saved Custom Outfit Three" */
			return 3;
		case 635948769: /* GXTEntry: "Saved Custom Outfit Four" */
			return 4;
		case 274995506: /* GXTEntry: "Saved Custom Outfit Five" */
			return 5;
		case 1902428294: /* GXTEntry: "The Wittemore" */
			return 17;
		case -2114499732:
			return 18;
		case 800827126:
			return 19;
		case 294553332: /* GXTEntry: "Island Outfit" */
			return 11;
		case 1788874135: /* GXTEntry: "Island Outfit Shackles" */
			return 12;
		case -1243402388:
			return 66;
		case 65931886:
			return 67;
		case 1371678229:
			return 68;
		case 2102263084:
			return 69;
		case -272211555: /* GXTEntry: "The Homesteader" */
			return 61;
		case -55563408:
			return 64;
		case -1914506115:
			return 71;
		case 802495462:
			return 75;
		case 842905332:
			return 77;
		case 1511551084:
			return 79;
		case -1725704631:
			return 81;
		case 1257427489:
			return 83;
		case -659341240:
			return 85;
		case 2038771525:
			return 87;
		case -535599244:
			return 89;
		case -389591806:
			return 73;
		case -1205612021: /* GXTEntry: "The Winter Cowboy" */
			return 70;
		case 890706995: /* GXTEntry: "The Cowhand" */
			return 93;
		case 1156438275: /* GXTEntry: "The Rancher" */
			return 90;
		case -1611873049: /* GXTEntry: "The Rancher" */
			return 91;
		case 594312243:
			return 92;
		case -978578725:
			return 94;
		case -361635024: /* GXTEntry: "The Cowboy" */
			return 62;
		case -1951220140:
			return 78;
		case 1460520700:
			return 76;
		case 523337834:
			return 80;
		case -19271249:
			return 82;
		case 214175524:
			return 84;
		case -1303643297:
			return 86;
		case 411856831:
			return 88;
		case -926815459:
			return 72;
		case -1300731953:
			return 74;
		case -409616653: /* GXTEntry: "The Homesteader" */
			return 65;
		case 509954990: /* GXTEntry: "The Chevalier" */
			return 29;
		case -445916744: /* GXTEntry: "The Heartlands" */
			return 30;
		case -866249154: /* GXTEntry: "The Gambler" */
			return 31;
		case -2077063704: /* GXTEntry: "The Earl" */
			return 32;
		case 205207539: /* GXTEntry: "The McLaughlin" */
			return 33;
		case -1033657275: /* GXTEntry: "The Josiah" */
			return 34;
		case 1806002837: /* GXTEntry: "The Farrier" */
			return 35;
		case 705324896: /* GXTEntry: "The Donegal" */
			return 36;
		case -1541763703: /* GXTEntry: "The Bulldogger" */
			return 37;
		case 387052410: /* GXTEntry: "The Ranch Hand" */
			return 38;
		case -361288914: /* GXTEntry: "The Scrapper" */
			return 39;
		case -911054515: /* GXTEntry: "The Armadillo" */
			return 40;
		case 1084200963: /* GXTEntry: "The Valentine" */
			return 41;
		case 1847948074: /* GXTEntry: "The Vaquero" */
			return 42;
		case -1212526764: /* GXTEntry: "The Dewberry Creek" */
			return 43;
		case 1851440270: /* GXTEntry: "The Clairmont" */
			return 44;
		case -2028985700: /* GXTEntry: "The Roscoe" */
			return 45;
		case 1074435214: /* GXTEntry: "The Estate Boss" */
			return 46;
		case -883015675: /* GXTEntry: "The Drover" */
			return 47;
		case -1047155604: /* GXTEntry: "The Calumet" */
			return 48;
		case 1123231221: /* GXTEntry: "The Cowpuncher" */
			return 49;
		case 1866989210: /* GXTEntry: "The Tumbleweed" */
			return 50;
		case 478183719: /* GXTEntry: "The Drifter" */
			return 51;
		case -1698955868: /* GXTEntry: "The Leatherman" */
			return 52;
		case -2029378634: /* GXTEntry: "The Cumberland" */
			return 53;
		case 1339864416: /* GXTEntry: "The Millesani" */
			return 54;
		case 890998115: /* GXTEntry: "The Faulkton" */
			return 55;
		case -1376288999: /* GXTEntry: "The Dolton" */
			return 56;
		case -1041123771: /* GXTEntry: "The Corson" */
			return 57;
		case 1389254668: /* GXTEntry: "The Saint Denis" */
			return 58;
		case -346112633: /* GXTEntry: "The Deauville" */
			return 59;
		case 773309172: /* GXTEntry: "The Bretagne" */
			return 60;
		case -291256376:
			return 23;
		default:
			break;
	}
	return -1;
}

bool func_464(int iParam0)
{
	return (Global_26795.f_774 && iParam0) != 0;
}

void func_465(var uParam0, int iParam1)
{
	int iVar0;

	if (func_23() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		(Global_26795.f_26[iParam1 /*120*/])->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_462(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	(Global_36637.f_45.f_350.f_26[iParam1 /*120*/])->f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_650(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
		iVar0++;
	}
}

void func_466(int iParam0, int iParam1, int iParam2)
{
	if (func_23() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			Global_26795.f_26[iParam1 /*120*/] = (Global_26795.f_26[iParam1 /*120*/] || iParam0);
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		Global_36637.f_45.f_350.f_26[iParam1 /*120*/] = (Global_36637.f_45.f_350.f_26[iParam1 /*120*/] || iParam0);
	}
}

void func_467(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_588(iParam0))
	{
		return;
	}
	iVar0 = (Global_40.f_7157[iParam0 /*3*/] && iParam1);
	Global_40.f_7157[iParam0 /*3*/] = (&Global_40.f_7157[iParam0 /*3*/] - iVar0);
}

void func_468(int iParam0, int iParam1)
{
	if (!func_588(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] = (Global_40.f_7157[iParam0 /*3*/] || iParam1);
}

int func_469(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = func_651(iParam1);
	if (iParam4 != 0)
	{
		iVar0 = iParam4;
	}
	else if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = func_459(iParam1);
	}
	if ((bParam3 && func_652(iParam1, 4096)) && Global_1946804->f_1497 == iParam4)
	{
		return 1;
	}
	Global_1905941 = iParam1;
	if ((iParam1 > 5 || iParam4 != 0) && !func_637(iVar0, Global_1946804->f_1))
	{
		return 0;
	}
	if (bParam2)
	{
		func_467(Global_40.f_7729, 4096);
		func_468(&Global_1905941, 4096);
		Global_40.f_7729 = &Global_1905941;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		func_653(iParam0);
	}
	func_654();
	if (!func_655(iParam1))
	{
		func_657(iVar0, iParam0, func_656(iParam1), 1, 0, 1);
	}
	func_658(iParam0);
	return 1;
}

int func_470(int iParam0)
{
	switch (func_334(iParam0))
	{
		case -2061583405:
			return 1;
		case -1719060085:
			return 1;
		case -999503751:
			return 1;
		case -525676072:
			return 1;
		case 81053684:
			return 1;
		case -413129408:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_471(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	if (func_23() == -1)
	{
		Var2 = -1394038466;
	}
	else
	{
		Var2 = 545953470;
	}
	Var2.f_1 = iParam0;
	Var2.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var2);
	while (DATAFILE::_0xED4413CEE1BF142C(&Var2))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar1, &Var2, -2008906477))
		{
			return;
		}
		iVar0 = func_454(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_659(Global_1946804->f_1378.f_1[iVar0 /*3*/], 2, 6);
		}
	}
}

int func_472(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_401(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_411(bParam6), &Var0, 0);
	return uVar4;
}

void func_473(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_474(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
}

int func_475(int iParam0)
{
	if (func_483())
	{
		switch (iParam0)
		{
			case -1346384396:
				return 1351319737 /* GXTEntry: "Color Combination One" */;
			case -712836614:
				return 1832924306 /* GXTEntry: "Chestnut & Charcoal" */;
			case -1629133289:
				return -960265739 /* GXTEntry: "Maple \'Duck Bill\' Horn" */;
			case 1302066700:
				return 1484641439 /* GXTEntry: "Belled Oxbow Stirrup" */;
			case 599669344:
				return -1742648548 /* GXTEntry: "Weathered Russet" */;
			case -1555511632:
				return -288915854 /* GXTEntry: "Weathered Dark Oak" */;
		}
	}
	else if (func_1())
	{
		switch (iParam0)
		{
			case -1346384396:
				return -5120398 /* GXTEntry: "Color Combination Two" */;
			case -712836614:
				return 540384851 /* GXTEntry: "Hickory" */;
			case -1629133289:
				return 859626502 /* GXTEntry: "Maple \'Torquemada\' Horn" */;
			case 1302066700:
				return -415239647 /* GXTEntry: "Slim-line Iron Stirrup" */;
			case 599669344:
				return 1436607742 /* GXTEntry: "Weathered Chestnut" */;
			case -1555511632:
				return 691935155 /* GXTEntry: "Chestnut" */;
		}
	}
	return 0;
}

void func_476(var uParam0, var uParam1)
{
	*uParam0 = uParam1;
}

void func_477(var uParam0, var uParam1)
{
	uParam0->f_1 = uParam1;
}

void func_478(var uParam0, var uParam1)
{
	uParam0->f_2 = uParam1;
}

void func_479(var uParam0, var uParam1)
{
	uParam0->f_3 = uParam1;
}

void func_480(var uParam0, var uParam1)
{
	uParam0->f_4 = uParam1;
}

void func_481(var uParam0, var uParam1)
{
	uParam0->f_5 = uParam1;
}

int func_482(int iParam0, int iParam1)
{
	var uVar0;
	var uVar5;
	int iVar9;
	struct<4> Var10;
	struct<4> Var14;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;

	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	if (!func_660(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return 0;
	}
	Var10 = { func_285() };
	Var14 = { func_401(iParam0, Var10, iVar9, 0) };
	if (func_406(Var14, iParam1))
	{
		if (func_661(iParam0))
		{
			if (func_170(325139909, &iVar18))
			{
				if (func_482(iVar18, 0))
				{
				}
			}
		}
		else if (func_662(iParam0))
		{
			if (func_170(325139909, &iVar19))
			{
				if (func_482(iVar19, 0))
				{
				}
			}
			if (func_170(986998820, &iVar20))
			{
				if (func_482(iVar20, 0))
				{
				}
			}
			iVar21 = func_663(iParam0);
			if (func_287(iVar21, 0))
			{
				if (func_482(iVar21, 1))
				{
				}
			}
		}
		func_664();
		return 1;
	}
	return 0;
}

int func_483()
{
	if (func_23() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

int func_484()
{
	return 1342496140 /* GXTEntry: "Tennessee Walker - Mahogany Bay Coat" */;
}

int func_485()
{
	return 446670976;
}

int func_486()
{
	return 1;
}

int func_487()
{
	return -868094182 /* GXTEntry: "Tennessee Walker - Chestnut Coat" */;
}

int func_488()
{
	return 1074477367;
}

int func_489()
{
	return 1;
}

int func_490()
{
	return -997197050 /* GXTEntry: "Thoroughbred - Seal Brown Coat" */;
}

int func_491()
{
	return -2063289686;
}

int func_492()
{
	return 2;
}

int func_493()
{
	return -868094182 /* GXTEntry: "Tennessee Walker - Chestnut Coat" */;
}

int func_494()
{
	return 1074477367;
}

int func_495()
{
	return 1;
}

int func_496()
{
	return 1235275977 /* GXTEntry: "Morgan - Bay Coat" */;
}

int func_497()
{
	return 2030804811;
}

int func_498()
{
	return 1;
}

int func_499()
{
	return 1974379573 /* GXTEntry: "Kentucky Saddler - Grey Coat" */;
}

int func_500()
{
	return 2024948086;
}

int func_501()
{
	return 1;
}

int func_502(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 7:
			return 1782082944;
		case 1:
			return -832337898;
		case 2:
			return 1271463052;
		case 3:
			return 1983140194;
		case 4:
			return 677262775;
	}
	return 0;
}

int func_503(var uParam0, int iParam1, bool bParam2)
{
	return INVENTORY::_0x033EE4B89F3AC545(func_411(bParam2), uParam0, iParam1);
}

int func_504(int iParam0, var uParam1)
{
	int iVar0;
	struct<10> Var1;
	struct<4> Var15;

	if (!func_306(iParam0))
	{
		return 0;
	}
	iVar0 = func_502(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_440(0) };
	if (!func_665(Var15, iVar0, &Var1, 0, 0))
	{
		return 0;
	}
	if (!func_666(&Var1, uParam1))
	{
		return 0;
	}
	return 1;
}

bool func_505(int iParam0)
{
	return func_330(iParam0) == joaat("horse");
}

bool func_506(int iParam0)
{
	return func_330(iParam0) == joaat("weapon");
}

int func_507(int iParam0)
{
	var uVar0;

	if (func_23() != -1)
	{
		return 0;
	}
	if (func_332(iParam0, 1048576))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_512(iParam0, &uVar0, 1, 0, 0);
	}
	return func_193(iParam0, 1, 0);
}

void func_508(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (func_330(iParam0) != joaat("weapon"))
	{
		return;
	}
	iVar0 = func_336(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !func_536(iVar0))
	{
		if (func_23() == -1)
		{
			func_200(iVar0);
		}
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, 0) && func_212(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_384(iParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_509(int iParam0, int iParam1)
{
	int iVar0;

	if (func_331(iParam0, 58855631))
	{
		func_667(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_510(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	if (!func_337(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_411(bParam3), iParam0);
}

int func_511(int iParam0, bool bParam1)
{
	if (func_340(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_411(bParam1), iParam0, 0);
}

int func_512(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;

	func_668(&iParam0);
	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	if (!func_337(0))
	{
		bParam3 = true;
	}
	if (func_506(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
		{
			Var0 = { func_609(0) };
			Var4.f_9 = -1591664384;
			if (!func_400(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
			{
				return 0;
			}
			else if (func_396(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
			{
				return 0;
			}
			if (func_615(iParam0, 1))
			{
				if (!func_400(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					return 0;
				}
				else if (func_396(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
				{
					return 0;
				}
			}
		}
		else if (!func_669(iParam0, &uVar26, 0))
		{
			return 0;
		}
		return 1;
	}
	iVar27 = func_510(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return 0;
	}
	else if (iVar27 == 0)
	{
		return 1;
	}
	if (bParam3)
	{
		iVar28 = func_472(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(func_411(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return 1;
	}
	return 0;
}

int func_513(int iParam0, int iParam1)
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

int func_514()
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 0);
}

int func_515(int iParam0)
{
	return COLLECTION::_0xEC3959E9950BF56B(iParam0);
}

void func_516(int iParam0)
{
	int iVar0;
	float fVar1;

	if (func_23() != -1)
	{
		return;
	}
	iVar0 = func_670(iParam0);
	fVar1 = func_671(iParam0);
	if ((Global_1347477->f_117 || !func_205(31)) || !func_672(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_162(iVar0) >= 7)
	{
		return;
	}
	if (iVar0 == 1)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_57));
	}
	else if (iVar0 == 0)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_55));
	}
	else if (iVar0 == 2)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_56));
	}
	fVar1 = (fVar1 * IntToFloat(Global_1347477->f_182));
	fVar1 = BUILTIN::TO_FLOAT(BUILTIN::ROUND(fVar1));
	func_673(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_599(MISC::_CREATE_VAR_STRING(6, func_674(iParam0), fVar1), "itemtype_textures", func_675(iVar0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_517(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_676(&Global_0, 8);
	}
	if (!func_35() || func_23() != -1)
	{
		return;
	}
	func_676(&Global_0, 1);
}

void func_518(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

int func_519(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_677(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_678(iParam0))
	{
		return 0;
	}
	if (func_679(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_585(iParam0, 1)) || func_113(32768))
	{
		if (!func_585(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_680())
	{
		return 0;
	}
	return 1;
}

void func_520(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_521(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588 /* GXTEntry: "Cigarette Cards Famous Gunslingers" */;
		case 1:
			return -1021394391 /* GXTEntry: "Cigarette Cards Artists & Poets" */;
		case 2:
			return -987306668 /* GXTEntry: "Cigarette Cards Vistas of America" */;
		case 3:
			return -1028735103 /* GXTEntry: "Cigarette Cards Gems Of Beauty" */;
		case 4:
			return 515229791 /* GXTEntry: "Cigarette Cards Flora of America" */;
		case 5:
			return -1230863414 /* GXTEntry: "Cigarette Cards Stars of the Stage" */;
		case 6:
			return 232875659 /* GXTEntry: "Cigarette Cards Fauna of North America" */;
		case 7:
			return 1423129537 /* GXTEntry: "Cigarette Cards Marvels of Travel" */;
		case 8:
			return -435742319 /* GXTEntry: "Cigarette Cards The World\'s Champions" */;
		case 9:
			return -1854702679 /* GXTEntry: "Cigarette Cards Amazing Inventions" */;
		case 10:
			return 1265323898 /* GXTEntry: "Cigarette Cards Breeds of Horses" */;
		case 11:
			return -479775696 /* GXTEntry: "Cigarette Cards Prominent Americans" */;
		default:
			break;
	}
	return 0;
}

int func_522(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_681(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_INT(&uVar5, &Var0);
	return uVar5;
}

char* func_523(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	switch (iParam1)
	{
		case -2076669067:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_CC_COMPLETE";
			}
			else if (func_326() >= 12)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_682(), 12);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_683(), 12);
			}
			break;
		case -440187297:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_DB_COMPLETE";
			}
			else if (func_557() >= 30)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_POSTED_OBJ", func_684(), 30);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_FOUND_OBJ", func_557(), 30);
			}
			break;
		case -1531394072:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_EX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_EX_ITEMS_COLLECTED_OBJ", sParam4, sParam5);
			}
			break;
		case 1995362678:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_LF_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_685(), 13);
			}
			break;
		case 2103522376:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_RC_COMPLETE";
			}
			else if (func_558() >= 10)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_POSTED_OBJ", func_686(), 10);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_FOUND_OBJ", func_558(), 10);
			}
			break;
		case 678508515:
			if (iParam2 == 3)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 4)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_READ_VACATION");
			}
			else if (iParam2 == 5)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_ON_VACATION");
			}
			else if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_RETURN_POST_OFFICE";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_TX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_522(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

int func_524(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -2076669067)
	{
		if (iParam1 == 38816757)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, 578982838))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, 578982838);
			}
		}
	}
	else if (iParam2 == -440187297)
	{
		if (iParam1 == -1223580455)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, 349797279))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, 349797279);
			}
		}
	}
	else if (iParam2 == 2103522376)
	{
		if (iParam1 == -170865073)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, 1974744712))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, 1974744712);
			}
		}
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iParam1);
	}
	return 1;
}

int func_525(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return 1;
}

int func_526(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, 0, 0);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, 1);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::_CREATE_VAR_STRING(2, sParam3));
	return 1;
}

int func_527(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_687(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_193(iVar2, 1, 0) || func_689(func_688(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_531(func_687(iVar0))), func_531(func_687(iVar0)), bVar1, 1, 0);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_557() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_690(iVar0)), func_690(iVar0), bVar1, 1, 0);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_684() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_690(iVar0)), func_690(iVar0), bVar1, 1, 0);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_690(iVar0)), func_690(iVar0), bVar1, 1, 0);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_568(iParam3, func_691(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_564(iVar2) - iParam7) >= func_522(iParam3, func_692(iVar0));
				}
				else
				{
					bVar1 = func_564(iVar2) >= func_522(iParam3, func_692(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_564(iVar2) + iParam7) >= func_522(iParam3, func_692(iVar0));
			}
			else
			{
				bVar1 = func_564(iVar2) >= func_522(iParam3, func_692(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_693(iVar2)), func_693(iVar2), bVar1, 1, 0);
		}
		if (iParam2 == 1995362678)
		{
			if (func_694(COLLECTION::_0x126CBEBBA46693CF(iVar0, 1995362678, 0)))
			{
				bVar1 = true;
			}
			else if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_695(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0))), func_695(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0)), bVar1, 1, 0);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_558() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_696(iVar0)), func_696(iVar0), bVar1, 1, 0);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_686() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_696(iVar0)), func_696(iVar0), bVar1, 1, 0);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_696(iVar0)), func_696(iVar0), bVar1, 1, 0);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_568(iParam3, func_691(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_564(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_697(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_697(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_172(iVar2)), func_172(iVar2), bVar1, 1, 0);
		}
		iVar0++;
	}
	return 1;
}

int func_528(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;

	bVar0 = false;
	if (iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == -2076669067)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_CC_ITEMS_DELIVERED"), "COL_CC_ITEMS_DELIVERED", bVar0, 1, 0);
	}
	if (iParam2 == -1531394072)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", bVar0, 1, 0);
	}
	if (iParam2 == 1995362678)
	{
		if (func_685() >= 13)
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_LF_ITEMS_DELIVERED"), "COL_LF_ITEMS_DELIVERED", bVar0, 1, 0);
	}
	if (((((((iParam3 == 7 || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 0) || iParam3 == 1) || iParam3 == 2) || iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == 678508515)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_TX_CARCASSES_MAILED"), "COL_TX_CARCASSES_MAILED", bVar0, 1, 0);
	}
	return 1;
}

int func_529(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_15(func_38(0)) && ((func_698(0) == 1 || func_698(0) == 8) || func_698(0) == 6))
	{
		iParam3 = 7;
	}
	if ((iParam2 == -440187297 || iParam2 == 1995362678) || iParam2 == 2103522376)
	{
		if (iParam3 == 7)
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, iParam1, 1, "");
		}
	}
	else if (iParam2 == 678508515)
	{
		if (iParam3 == 7)
		{
			if (bParam4)
			{
			}
			else
			{
				UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, iParam1, 1, "");
			}
		}
	}
	return 1;
}

var func_530(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = iParam7;
	Var0.f_1 = sParam8;
	Var0.f_2 = sParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = iParam4;
	Var0.f_4.f_1 = iParam6;
	Var0.f_4.f_2 = sParam5;
	Var13.f_7 = 1;
	Var13 = iParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _NAMESPACE71::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

char* func_531(int iParam0)
{
	switch (iParam0)
	{
		case 554799588: /* GXTEntry: "Cigarette Cards Famous Gunslingers" */
			return "COL_CC_GUN_SET";
		case -1021394391: /* GXTEntry: "Cigarette Cards Artists & Poets" */
			return "COL_CC_ART_SET";
		case -987306668: /* GXTEntry: "Cigarette Cards Vistas of America" */
			return "COL_CC_LND_SET";
		case -1028735103: /* GXTEntry: "Cigarette Cards Gems Of Beauty" */
			return "COL_CC_GRL_SET";
		case 515229791: /* GXTEntry: "Cigarette Cards Flora of America" */
			return "COL_CC_PLT_SET";
		case -1230863414: /* GXTEntry: "Cigarette Cards Stars of the Stage" */
			return "COL_CC_ACT_SET";
		case 232875659: /* GXTEntry: "Cigarette Cards Fauna of North America" */
			return "COL_CC_AML_SET";
		case 1423129537: /* GXTEntry: "Cigarette Cards Marvels of Travel" */
			return "COL_CC_VEH_SET";
		case -435742319: /* GXTEntry: "Cigarette Cards The World\'s Champions" */
			return "COL_CC_SPT_SET";
		case -1854702679: /* GXTEntry: "Cigarette Cards Amazing Inventions" */
			return "COL_CC_INV_SET";
		case 1265323898: /* GXTEntry: "Cigarette Cards Breeds of Horses" */
			return "COL_CC_HOR_SET";
		case -479775696: /* GXTEntry: "Cigarette Cards Prominent Americans" */
			return "COL_CC_PAM_SET";
		default:
			break;
	}
	return "";
}

var func_532(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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
	uVar21 = _NAMESPACE71::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

void func_533(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	MISC::SET_BIT(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_534(int iParam0)
{
	int iVar0;

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
			func_699(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_700(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_700(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_700(3);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			func_701(1);
			break;
		case 34:
			func_702(1);
			break;
		case 35:
			func_703(1);
			break;
		case 36:
			break;
		case 37:
			func_704(0);
			break;
		case 38:
			func_705(0);
			break;
		case 39:
			func_706(0);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if ((!&Global_1879534 && func_35()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_532("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_321(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_35()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_532("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_321(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_35()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_532("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_321(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_35()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_532("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_321(589, 0);
			break;
		case 24:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-200143754, true);
			UNLOCK::_UNLOCK_SET_VISIBLE(-200143754, true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			if (func_23() == -1)
			{
				if (!func_592(99217379) || func_707(99217379) == 2110595215)
				{
					if (func_1())
					{
						iVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						iVar0 = 899611344; /* GXTEntry: "Off-Hand Holster" */
					}
					if (!func_193(iVar0, 1, 0))
					{
						func_377(iVar0, 1, 752097756);
					}
					func_358(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_23() == -1)
			{
				if (!func_193(1013902307, 1, 0))
				{
					func_377(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_23() == -1)
			{
				if (!func_193(1013902307, 1, 0))
				{
					func_377(1013902307, 1, 752097756);
				}
				if (!func_193(142640135, 1, 0))
				{
					func_377(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_23() == -1)
			{
				if (!func_193(786809402, 1, 0))
				{
					func_377(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_23() == -1)
			{
				if (!func_193(786809402, 1, 0))
				{
					func_377(786809402, 1, 752097756);
				}
				if (!func_193(-518019409, 1, 0))
				{
					func_377(-518019409, 1, 752097756);
				}
			}
			break;
		case 23:
			PLAYER::_0x5B9813ECF7633FE8(0);
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
		case 30:
			break;
		case 44:
			break;
		case 45:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-843169622, true);
			Global_1935630->f_47 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			func_708();
			break;
		case 47:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-78935213, true);
			break;
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-384786155, true);
			break;
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(296662302, true);
			break;
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-1871453000, true);
			break;
		case 56:
			UNLOCK::_UNLOCK_SET_UNLOCKED(1397349651, true);
			break;
	}
}

int func_535(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_VISIBLE(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_536(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_537(int iParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630->f_12)
	{
		return;
	}
	if (WEAPON::_IS_WEAPON_BOW(iParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (WEAPON::_IS_WEAPON_PISTOL(iParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::_IS_WEAPON_REVOLVER(iParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::_IS_WEAPON_RIFLE(iParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::_IS_WEAPON_SHOTGUN(iParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	DECORATOR::DECOR_SET_INT(Global_35, sVar0, iParam0);
	iVar2 = func_44();
	func_709(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_35, sVar1, iVar2);
}

int func_538(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_710(iParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, 954660191) <= 0)
		{
			iVar0 = 10;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(iParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0) * 4;
		}
		iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
		if (iVar1 >= iVar0)
		{
			iVar0 = 0;
		}
		else if (iVar1 > 0)
		{
			iVar0 = (iVar0 - iVar1);
		}
	}
	return iVar0;
}

bool func_539(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

int func_540(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_541(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	if (WEAPON::_0x705BE297EEBDB95D(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			if (!func_205(50))
			{
				if (!func_205(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (!func_205(51))
			{
				if (!func_205(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

int func_542(int iParam0, int iParam1, var uParam2)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	if (!func_287(iParam1, 0))
	{
		return 0;
	}
	if (func_330(iParam1) != joaat("clothing"))
	{
		return 0;
	}
	bVar1 = func_23() != -1;
	iVar2 = PED::_GET_METAPED_TYPE(iParam0);
	if (func_334(iParam1) == -999503751)
	{
		return 1;
	}
	iVar4 = func_453(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return 0;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_331(iParam1, 866047851))
	{
		iVar5 = func_454(iVar4, 1);
		if (func_711(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5 /*3*/] != iVar8)
		{
			*uParam2 = -265166256; /* GXTEntry: "You are wearing too many of this item. Remove some before equipping more." */
			return 0;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (PED::_GET_PED_COMPONENT_CATEGORY(iVar8, iVar2, bVar1) == 2056714954 && PED::_IS_METAPED_USING_COMPONENT(iParam0, -1455751347))
			{
				*uParam2 = 111371848; /* GXTEntry: "Your shirt does not support this type of neckwear." */
				return 0;
			}
			iVar5 = 10;
			iVar3 = func_334(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745; /* GXTEntry: "Your neckwear does not allow for changing your collar." */
				return 0;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] != &Global_1946804->f_57[iVar5 /*11*/] && func_331(iParam1, -1638171711))
			{
				*uParam2 = 187275271; /* GXTEntry: "Your chaps do not support this." */
				return 0;
			}
			break;
		case 1900541263:
			iVar5 = 36;
			if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] == &Global_1946804->f_57[iVar5 /*11*/])
			{
				*uParam2 = 2143522536;
				return 0;
			}
			if (PED::_IS_METAPED_USING_COMPONENT(iParam0, -1968556728))
			{
				*uParam2 = -849690042; /* GXTEntry: "Your boots do not support having spurs." */
				return 0;
			}
			break;
		case -1505978566:
			if (func_712(1868067663, &uVar0))
			{
				*uParam2 = 939463734; /* GXTEntry: "Item cannot be worn with coats." */
				return 0;
			}
		case -1130865351:
		case -426430150:
		case 1788623170:
			if (!bVar7)
			{
			}
			else
			{
				iVar11 = PED::_GET_NUM_COMPONENTS_IN_PED(iParam0);
				iVar10 = func_713(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_713(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763; /* GXTEntry: "You are wearing too many items. Something must be removed to preview other items." +
    "" */
					return 0;
				}
				Jump @726; //curOff = 583
				iVar3 = func_334(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6 /*11*/] && func_331(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), -1638171711))
				{
					*uParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
					return 0;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] == &Global_1946804->f_57[iVar5 /*11*/])
					{
						*uParam2 = 2143522536;
						return 0;
					}
				}
			}
			*uParam2 = 0;
			return 1;
		}

void func_543()
{
	PLAYER::_0xFE7C9CF376D23342(PLAYER::PLAYER_ID(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_544()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	PLAYER::_0x08E22898A6AF4905(PLAYER::PLAYER_ID(), (1f - fVar0));
	PLAYER::_0xFECA17CF3343694B(PLAYER::PLAYER_ID(), (1f - fVar0));
	PLAYER::_0xBBADFB5E5E5766FB(PLAYER::PLAYER_ID(), (1f - fVar1));
}

int func_545()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_193(func_714(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_546(int iParam0)
{
	switch (iParam0)
	{
		case -1217729597: /* GXTEntry: "Gold Jointed Bracelet" */
		case 363594903: /* GXTEntry: "Vintage Civil War Handcuffs" */
		case 425319238: /* GXTEntry: "Legendary Alligator Tooth" */
			return -62615415 /* GXTEntry: "Alligator Tooth Talisman" */;
		case -1540119664: /* GXTEntry: "Legendary Bear Claw" */
		case 446659922: /* GXTEntry: "Silver Chain Bracelet" */
		case 2100194981: /* GXTEntry: "Quartz Chunk" */
			return -832719552 /* GXTEntry: "Bear Claw Talisman" */;
		case -1018798851: /* GXTEntry: "Cobalt Petrified Wood" */
		case -757567246: /* GXTEntry: "Gold Earring" */
		case -390982951: /* GXTEntry: "Legendary Boar Tusk" */
			return -184823984 /* GXTEntry: "Boar Tusk Talisman" */;
		case -2054602073: /* GXTEntry: "Legendary Bison Horn" */
		case -585121677: /* GXTEntry: "Silver Earring" */
		case -378441099: /* GXTEntry: "Abalone Shell Fragment" */
			return -1941112926 /* GXTEntry: "Bison Horn Talisman" */;
		case 1566949660: /* GXTEntry: "Old Brass Compass" */
			return -121629511 /* GXTEntry: "Raven Claw Talisman" */;
	}
	return 0;
}

int func_547(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case -62615415: /* GXTEntry: "Alligator Tooth Talisman" */
			if (iParam1 == 425319238)
			{
				iVar0 = 363594903; /* GXTEntry: "Vintage Civil War Handcuffs" */
				iVar1 = -1217729597; /* GXTEntry: "Gold Jointed Bracelet" */
			}
			else if (iParam1 == 363594903)
			{
				iVar0 = 425319238; /* GXTEntry: "Legendary Alligator Tooth" */
				iVar1 = -1217729597; /* GXTEntry: "Gold Jointed Bracelet" */
			}
			else
			{
				iVar0 = 425319238; /* GXTEntry: "Legendary Alligator Tooth" */
				iVar1 = 363594903; /* GXTEntry: "Vintage Civil War Handcuffs" */
			}
			break;
		case -832719552: /* GXTEntry: "Bear Claw Talisman" */
			if (iParam1 == -1540119664)
			{
				iVar0 = 2100194981; /* GXTEntry: "Quartz Chunk" */
				iVar1 = 446659922; /* GXTEntry: "Silver Chain Bracelet" */
			}
			else if (iParam1 == 2100194981)
			{
				iVar0 = -1540119664; /* GXTEntry: "Legendary Bear Claw" */
				iVar1 = 446659922; /* GXTEntry: "Silver Chain Bracelet" */
			}
			else
			{
				iVar0 = -1540119664; /* GXTEntry: "Legendary Bear Claw" */
				iVar1 = 2100194981; /* GXTEntry: "Quartz Chunk" */
			}
			break;
		case -184823984: /* GXTEntry: "Boar Tusk Talisman" */
			if (iParam1 == -390982951)
			{
				iVar0 = -1018798851; /* GXTEntry: "Cobalt Petrified Wood" */
				iVar1 = -757567246; /* GXTEntry: "Gold Earring" */
			}
			else if (iParam1 == -1018798851)
			{
				iVar0 = -390982951; /* GXTEntry: "Legendary Boar Tusk" */
				iVar1 = -757567246; /* GXTEntry: "Gold Earring" */
			}
			else
			{
				iVar0 = -390982951; /* GXTEntry: "Legendary Boar Tusk" */
				iVar1 = -1018798851; /* GXTEntry: "Cobalt Petrified Wood" */
			}
			break;
		case -1941112926: /* GXTEntry: "Bison Horn Talisman" */
			if (iParam1 == -2054602073)
			{
				iVar0 = -378441099; /* GXTEntry: "Abalone Shell Fragment" */
				iVar1 = -585121677; /* GXTEntry: "Silver Earring" */
			}
			else if (iParam1 == -378441099)
			{
				iVar0 = -2054602073; /* GXTEntry: "Legendary Bison Horn" */
				iVar1 = -585121677; /* GXTEntry: "Silver Earring" */
			}
			else
			{
				iVar0 = -2054602073; /* GXTEntry: "Legendary Bison Horn" */
				iVar1 = -378441099; /* GXTEntry: "Abalone Shell Fragment" */
			}
			break;
	}
	if (func_193(iVar0, 1, 0) && func_193(iVar1, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_548(int iParam0)
{
	switch (iParam0)
	{
		case 968830139: /* GXTEntry: "Legendary Beaver Tooth" */
			return -224110471 /* GXTEntry: "Beaver Tooth Trinket" */;
		case -649219937: /* GXTEntry: "Legendary Tatanka Bison Horn" */
			return 1289585739 /* GXTEntry: "Tatanka Bison Horn Trinket" */;
		case -858567048: /* GXTEntry: "Legendary Buck Antler" */
			return -269048282 /* GXTEntry: "Buck Antler Trinket" */;
		case -718162726: /* GXTEntry: "Legendary Cougar Fang" */
			return 1441506783 /* GXTEntry: "Cougar Fang Trinket" */;
		case -1284282080: /* GXTEntry: "Legendary Coyote Fang" */
			return 780305678 /* GXTEntry: "Coyote Fang Trinket" */;
		case -725003445: /* GXTEntry: "Legendary Elk Antler" */
			return 1811977508 /* GXTEntry: "Elk Antler Trinket" */;
		case -1445630104: /* GXTEntry: "Legendary Fox Claw" */
			return -935153695 /* GXTEntry: "Fox Claw Trinket" */;
		case 580970876: /* GXTEntry: "Lion\'s Paw" */
			return 1299744282 /* GXTEntry: "Lion\'s Paw Trinket" */;
		case 967601061: /* GXTEntry: "Legendary Moose Antler" */
			return 1631240196 /* GXTEntry: "Moose Antler Trinket" */;
		case 1946030891: /* GXTEntry: "Legendary Panther Eye" */
			return 517396587 /* GXTEntry: "Panther\'s Eye Trinket" */;
		case -1511404982: /* GXTEntry: "Legendary Pronghorn Horn" */
			return 1620353486 /* GXTEntry: "Pronghorn Horn Trinket" */;
		case -944465290: /* GXTEntry: "Legendary Ram Horn" */
			return 1816443627 /* GXTEntry: "Ram Horn Trinket" */;
		case -1701098855: /* GXTEntry: "Legendary Wolf Heart" */
			return -127011478 /* GXTEntry: "Wolf Heart Trinket" */;
		default:
			break;
	}
	return 0;
}

int func_549(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_715(iParam0);
	if (iVar0 != -15)
	{
		func_709(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_716(iVar0, 1);
	}
	return 0;
}

int func_550(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	int iVar25;

	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_193(1811977508 /* GXTEntry: "Elk Antler Trinket" */, 1, 0))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	MISC::_0x48E4D50F87A96AA5(Global_35, 1, 1, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (&Var1.f_1[iVar24] == 2084597891)
		{
			return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			iVar25 = &Var1.f_1[iVar24];
			if (func_287(iVar25, 0) && func_331(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_551(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_552(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_553(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_554(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_555(int iParam0)
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
	int iVar12;

	iVar0 = 0;
	switch (iParam0)
	{
		case 1:
			iVar9 = 281887510; /* GXTEntry: "Little Egret Plume" */
			iVar10 = -164081697; /* GXTEntry: "Reddish Egret Plume" */
			iVar11 = -1161319399; /* GXTEntry: "Snowy Egret Plume" */
			iVar12 = 728781265; /* GXTEntry: "Lady of the Night Orchid" */
			break;
		case 2:
			iVar9 = -222563712; /* GXTEntry: "Heron Plume" */
			iVar10 = 1794857344; /* GXTEntry: "Lady Slipper Orchid" */
			iVar11 = 1952409553; /* GXTEntry: "Moccasin Flower Orchid" */
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726; /* GXTEntry: "Acuna\'s Star Orchid" */
			iVar11 = -404270094; /* GXTEntry: "Cigar Orchid" */
			iVar12 = 2093126853; /* GXTEntry: "Ghost Orchid" */
			break;
		case 8:
			iVar9 = 2085530337; /* GXTEntry: "Spoonbill Plume" */
			iVar10 = -150591160; /* GXTEntry: "Night Scented Orchid" */
			iVar11 = -323969289; /* GXTEntry: "Rat Tail Orchid" */
			iVar12 = 1504361882; /* GXTEntry: "Spider Orchid" */
			break;
		case 16:
			iVar9 = -1521783510; /* GXTEntry: "Clamshell Orchid" */
			iVar10 = 1714875242; /* GXTEntry: "Dragon\'s Mouth Orchid" */
			iVar11 = 1019229063; /* GXTEntry: "Queen\'s Orchid" */
			iVar12 = 927763737; /* GXTEntry: "Sparrow\'s Egg Orchid" */
			break;
	}
	iVar1 = func_564(iVar9);
	iVar2 = func_564(iVar10);
	iVar3 = func_564(iVar11);
	iVar5 = func_565(iVar9);
	iVar6 = func_565(iVar10);
	iVar7 = func_565(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_564(iVar12);
		iVar8 = func_565(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam0 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

void func_556(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_557()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_717(COLLECTION::_0x126CBEBBA46693CF(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_558()
{
	return COLLECTION::_0x5461C821D00FE15A(2103522376, 0);
}

int func_559(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	switch (iParam0)
	{
		case -949689219:
			if (iParam1 == -1866642239)
			{
				iVar0 = 444160793; /* GXTEntry: "Perfect Squirrel Carcass" */
			}
			else if (iParam1 == 444160793)
			{
				iVar0 = -1866642239; /* GXTEntry: "Perfect Rabbit Carcass" */
			}
			break;
		case -1248968496:
			if (iParam1 == -1969404854)
			{
				iVar0 = 1761263432; /* GXTEntry: "Perfect Rat Carcass" */
				iVar1 = -843795569; /* GXTEntry: "Perfect Woodpecker Carcass" */
			}
			else if (iParam1 == 1761263432)
			{
				iVar0 = -1969404854; /* GXTEntry: "Perfect Cardinal Carcass" */
				iVar1 = -843795569; /* GXTEntry: "Perfect Woodpecker Carcass" */
			}
			else if (iParam1 == -843795569)
			{
				iVar0 = -1969404854; /* GXTEntry: "Perfect Cardinal Carcass" */
				iVar1 = 1761263432; /* GXTEntry: "Perfect Rat Carcass" */
			}
			break;
		case 1706369307:
			if (iParam1 == -832850511)
			{
				iVar0 = -935543049; /* GXTEntry: "Perfect Opossum Carcass" */
				iVar1 = -1464585113; /* GXTEntry: "Perfect Oriole Carcass" */
				iVar2 = -1290897778; /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (iParam1 == -935543049)
			{
				iVar0 = -832850511; /* GXTEntry: "Perfect Chipmunk Carcass" */
				iVar1 = -1464585113; /* GXTEntry: "Perfect Oriole Carcass" */
				iVar2 = -1290897778; /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (iParam1 == -1464585113)
			{
				iVar0 = -832850511; /* GXTEntry: "Perfect Chipmunk Carcass" */
				iVar1 = -935543049; /* GXTEntry: "Perfect Opossum Carcass" */
				iVar2 = -1290897778; /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (iParam1 == -1290897778)
			{
				iVar0 = -832850511; /* GXTEntry: "Perfect Chipmunk Carcass" */
				iVar1 = -935543049; /* GXTEntry: "Perfect Opossum Carcass" */
				iVar2 = -1464585113; /* GXTEntry: "Perfect Oriole Carcass" */
			}
			break;
		case 1520110311:
			if (iParam1 == -100913452)
			{
				iVar0 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				iVar1 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				iVar2 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
				iVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (iParam1 == 313332607)
			{
				iVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				iVar1 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				iVar2 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
				iVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (iParam1 == -124539232)
			{
				iVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				iVar1 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				iVar2 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
				iVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (iParam1 == 102446365)
			{
				iVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				iVar1 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				iVar2 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				iVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (iParam1 == -1882344824)
			{
				iVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				iVar1 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				iVar2 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				iVar3 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
			}
			break;
		case -1992824800:
			if (iParam1 == 905173572)
			{
				iVar0 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				iVar1 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				iVar2 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
				iVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (iParam1 == 1432949803)
			{
				iVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				iVar1 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				iVar2 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
				iVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (iParam1 == -983831788)
			{
				iVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				iVar1 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				iVar2 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
				iVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (iParam1 == 59384454)
			{
				iVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				iVar1 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				iVar2 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				iVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (iParam1 == 924882045)
			{
				iVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				iVar1 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				iVar2 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				iVar3 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
			}
			break;
	}
	if (iParam0 == -949689219)
	{
		if (bParam3)
		{
			if (func_697(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_697(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_697(iVar0))
		{
			*sParam2++;
		}
		if (func_697(iVar0))
		{
			return 1;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_697(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_697(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_697(iVar0))
		{
			*sParam2++;
		}
		if (func_697(iVar1))
		{
			*sParam2++;
		}
		if (func_697(iVar0) && func_697(iVar1))
		{
			return 1;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_697(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_697(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_697(iVar0))
		{
			*sParam2++;
		}
		if (func_697(iVar1))
		{
			*sParam2++;
		}
		if (func_697(iVar2))
		{
			*sParam2++;
		}
		if ((func_697(iVar0) && func_697(iVar1)) && func_697(iVar2))
		{
			return 1;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_697(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_697(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_697(iVar0))
		{
			*sParam2++;
		}
		if (func_697(iVar1))
		{
			*sParam2++;
		}
		if (func_697(iVar2))
		{
			*sParam2++;
		}
		if (func_697(iVar3))
		{
			*sParam2++;
		}
		if (((func_697(iVar0) && func_697(iVar1)) && func_697(iVar2)) && func_697(iVar3))
		{
			return 1;
		}
	}
	return 0;
}

void func_560(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_718(1497516462);
			func_719(2016141805);
			func_719(1010885152);
			func_719(-502324015);
			break;
		case 2016141805:
			func_719(1497516462);
			func_718(2016141805);
			func_719(1010885152);
			func_719(-502324015);
			break;
		case 1010885152:
			func_719(1497516462);
			func_719(2016141805);
			func_718(1010885152);
			func_719(-502324015);
			break;
		case -502324015:
			func_719(1497516462);
			func_719(2016141805);
			func_719(1010885152);
			func_718(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_719(-538889627);
			func_719(-538880323);
			func_719(-1056767524);
			func_718(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_720();
			func_718(iParam0);
			break;
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_721();
			func_718(iParam0);
			break;
		case 2019386373:
			func_719(-664252410);
			func_719(2109952320);
			func_718(2019386373);
			break;
		case -664252410:
			func_719(2019386373);
			func_719(2109952320);
			func_718(-664252410);
			break;
		case 2109952320:
			func_719(2019386373);
			func_719(-664252410);
			func_718(2109952320);
			break;
		case -1674179981:
			func_719(-1835851517);
			func_719(-1838352012);
			func_718(-1674179981);
			break;
		case -1835851517:
			func_719(-1674179981);
			func_719(-1838352012);
			func_718(-1835851517);
			break;
		case -1838352012:
			func_719(-1674179981);
			func_719(-1835851517);
			func_718(-1838352012);
			break;
		case -1717960576:
			func_719(210001842);
			func_718(-1717960576);
			break;
		case 210001842:
			func_719(-1717960576);
			func_718(210001842);
			break;
		case -150493654:
			func_719(-1271608261);
			func_719(1846061697);
			func_719(-1145519186);
			func_718(-150493654);
			break;
		case -1271608261:
			func_719(-150493654);
			func_719(1846061697);
			func_719(-1145519186);
			func_718(-1271608261);
			break;
		case 1846061697:
			func_719(-150493654);
			func_719(-1271608261);
			func_719(-1145519186);
			func_718(1846061697);
			break;
		case -1145519186:
			func_719(-150493654);
			func_719(-1271608261);
			func_719(1846061697);
			func_718(-1145519186);
			break;
		case 1766284049:
			func_719(280705402);
			func_719(1926308480);
			func_718(1766284049);
			break;
		case 280705402:
			func_719(1766284049);
			func_719(1926308480);
			func_718(280705402);
			break;
		case 1926308480:
			func_719(1766284049);
			func_719(280705402);
			func_718(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_719(439465264);
				func_718(1609506757);
			}
			else
			{
				func_719(1609506757);
				func_719(439465264);
			}
			break;
		case 439465264:
			if (func_623(1609506757))
			{
				if (bParam1)
				{
					func_718(439465264);
				}
				else
				{
					func_719(439465264);
				}
			}
			break;
		case 1822001510:
			func_719(-1612662716);
			func_718(1822001510);
			break;
		case -1612662716:
			func_719(1822001510);
			func_718(-1612662716);
			break;
		case 1306158345:
			func_719(1952610440);
			func_719(-223469678);
			func_719(-404698347);
			func_719(1517904467);
			func_718(1306158345);
			break;
		case 1952610440:
			func_719(1306158345);
			func_719(-223469678);
			func_719(-404698347);
			func_719(1517904467);
			func_718(1952610440);
			break;
		case -223469678:
			func_719(1306158345);
			func_719(1952610440);
			func_719(-404698347);
			func_719(1517904467);
			func_718(-223469678);
			break;
		case -404698347:
			func_719(1306158345);
			func_719(1952610440);
			func_719(-223469678);
			func_719(1517904467);
			func_718(-404698347);
			break;
		case 1517904467:
			func_719(1306158345);
			func_719(1952610440);
			func_719(-223469678);
			func_719(-404698347);
			func_718(1517904467);
			break;
		case 1376646519:
			func_719(931649776);
			func_719(-434590080);
			func_719(1743048395);
			func_719(449774763);
			func_718(1376646519);
			break;
		case 931649776:
			func_719(1376646519);
			func_719(-434590080);
			func_719(1743048395);
			func_719(449774763);
			func_718(931649776);
			break;
		case -434590080:
			func_719(1376646519);
			func_719(931649776);
			func_719(1743048395);
			func_719(449774763);
			func_718(-434590080);
			break;
		case 1743048395:
			func_719(1376646519);
			func_719(931649776);
			func_719(-434590080);
			func_719(449774763);
			func_718(1743048395);
			break;
		case 449774763:
			func_719(1376646519);
			func_719(931649776);
			func_719(-434590080);
			func_719(1743048395);
			func_718(449774763);
			break;
		case -1414537028:
			func_719(38162571);
			func_719(1350391819);
			func_719(54073871);
			func_718(-1414537028);
			break;
		case 38162571:
			func_719(-1414537028);
			func_719(1350391819);
			func_719(54073871);
			func_718(38162571);
			break;
		case 1350391819:
			func_719(-1414537028);
			func_719(38162571);
			func_719(54073871);
			func_718(1350391819);
			break;
		case 54073871:
			func_719(-1414537028);
			func_719(38162571);
			func_719(1350391819);
			func_718(54073871);
			break;
		case 198200492:
			func_718(198200492);
			func_719(-1124061431);
			func_719(52706132);
			func_719(-259123672);
			break;
		case -1124061431:
			func_719(198200492);
			func_718(-1124061431);
			func_719(52706132);
			func_719(-259123672);
			break;
		case 52706132:
			func_719(198200492);
			func_719(-1124061431);
			func_718(52706132);
			func_719(-259123672);
			break;
		case -259123672:
			func_719(198200492);
			func_719(-1124061431);
			func_719(52706132);
			func_718(-259123672);
			break;
		case -919512195:
			func_718(-919512195);
			func_719(-1925798111);
			func_719(420709909);
			func_719(1703426636);
			break;
		case -1925798111:
			func_718(-1925798111);
			func_719(-919512195);
			func_719(420709909);
			func_719(1703426636);
			break;
		case 420709909:
			func_718(420709909);
			func_719(-919512195);
			func_719(-1925798111);
			func_719(1703426636);
			break;
		case 1703426636:
			func_718(1703426636);
			func_719(-919512195);
			func_719(-1925798111);
			func_719(420709909);
			break;
		case -1223121209:
			func_718(-1223121209);
			func_719(630808005);
			break;
		case 630808005:
			func_718(630808005);
			func_719(-1223121209);
			break;
		case 1453909576:
			func_718(1453909576);
			func_719(1643531967);
			break;
		case 1643531967:
			func_718(1643531967);
			func_719(1453909576);
			break;
		case 0:
			func_718(0);
			func_719(473295046);
			func_719(-1738165526);
			break;
		case 473295046:
			func_718(473295046);
			func_719(0);
			func_719(-1738165526);
			break;
		case -1738165526:
			func_718(-1738165526);
			func_719(0);
			func_719(473295046);
			break;
		case 932909855:
			func_718(932909855);
			func_719(2051822093);
			break;
		case 2051822093:
			func_718(2051822093);
			func_719(932909855);
			break;
		case 405586984:
			func_718(405586984);
			func_719(1509509592);
			func_719(-959357075);
			func_719(-1311865656);
			break;
		case 1509509592:
			func_718(1509509592);
			func_719(405586984);
			func_719(-959357075);
			func_719(-1311865656);
			break;
		case -959357075:
			func_718(-959357075);
			func_719(1509509592);
			func_719(405586984);
			func_719(-1311865656);
			break;
		case -1311865656:
			func_718(-1311865656);
			func_719(1509509592);
			func_719(-959357075);
			func_719(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_718(-524145696);
			}
			else
			{
				func_719(-524145696);
			}
			func_719(1626481264);
			func_719(282809459);
			break;
		case 282809459:
			func_718(282809459);
			func_719(1626481264);
			func_719(-524145696);
			break;
		case 1626481264:
			func_718(1626481264);
			func_719(-524145696);
			func_719(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_718(885203519);
			}
			else
			{
				func_719(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_718(-1080627546);
			}
			else
			{
				func_719(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_623(iParam0))
				{
					func_718(iParam0);
				}
			}
			else if (func_623(iParam0))
			{
				func_719(iParam0);
			}
			break;
	}
}

void func_561(int iParam0)
{
	if (!func_722(iParam0))
	{
		func_724(func_723(iParam0));
	}
}

int func_562()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_722(COLLECTION::_0x126CBEBBA46693CF(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_563(int iParam0, int iParam1, int iParam2)
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
	int iVar12;

	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = 281887510; /* GXTEntry: "Little Egret Plume" */
			iVar10 = -164081697; /* GXTEntry: "Reddish Egret Plume" */
			iVar11 = -1161319399; /* GXTEntry: "Snowy Egret Plume" */
			iVar12 = 728781265; /* GXTEntry: "Lady of the Night Orchid" */
			break;
		case 2:
			iVar9 = -222563712; /* GXTEntry: "Heron Plume" */
			iVar10 = 1794857344; /* GXTEntry: "Lady Slipper Orchid" */
			iVar11 = 1952409553; /* GXTEntry: "Moccasin Flower Orchid" */
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726; /* GXTEntry: "Acuna\'s Star Orchid" */
			iVar11 = -404270094; /* GXTEntry: "Cigar Orchid" */
			iVar12 = 2093126853; /* GXTEntry: "Ghost Orchid" */
			break;
		case 8:
			iVar9 = 2085530337; /* GXTEntry: "Spoonbill Plume" */
			iVar10 = -150591160; /* GXTEntry: "Night Scented Orchid" */
			iVar11 = -323969289; /* GXTEntry: "Rat Tail Orchid" */
			iVar12 = 1504361882; /* GXTEntry: "Spider Orchid" */
			break;
		case 16:
			iVar9 = -1521783510; /* GXTEntry: "Clamshell Orchid" */
			iVar10 = 1714875242; /* GXTEntry: "Dragon\'s Mouth Orchid" */
			iVar11 = 1019229063; /* GXTEntry: "Queen\'s Orchid" */
			iVar12 = 927763737; /* GXTEntry: "Sparrow\'s Egg Orchid" */
			break;
	}
	iVar1 = func_564(iVar9);
	iVar2 = func_564(iVar10);
	iVar3 = func_564(iVar11);
	iVar5 = func_565(iVar9);
	iVar6 = func_565(iVar10);
	iVar7 = func_565(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_564(iVar12);
		iVar8 = func_565(iVar12);
	}
	if (iParam0 == iVar9)
	{
		if ((iVar1 + iParam1) >= iVar5)
		{
			iVar0 = (iVar0 + iVar5);
		}
		else
		{
			iVar0 = (iVar0 + (iVar1 + iParam1));
		}
	}
	else if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iParam0 == iVar10)
	{
		if ((iVar2 + iParam1) >= iVar6)
		{
			iVar0 = (iVar0 + iVar6);
		}
		else
		{
			iVar0 = (iVar0 + (iVar2 + iParam1));
		}
	}
	else if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iParam0 == iVar11)
	{
		if ((iVar3 + iParam1) >= iVar7)
		{
			iVar0 = (iVar0 + iVar7);
		}
		else
		{
			iVar0 = (iVar0 + (iVar3 + iParam1));
		}
	}
	else if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iParam0 == iVar12)
		{
			if ((iVar4 + iParam1) >= iVar8)
			{
				iVar0 = (iVar0 + iVar8);
			}
			else
			{
				iVar0 = (iVar0 + (iVar4 + iParam1));
			}
		}
		else if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

int func_564(int iParam0)
{
	int iVar0;

	if (func_193(iParam0, 1, 0))
	{
		iVar0 = func_212(iParam0, 0, 0);
	}
	return iVar0;
}

int func_565(int iParam0)
{
	switch (iParam0)
	{
		case 281887510: /* GXTEntry: "Little Egret Plume" */
			return 5;
		case -164081697: /* GXTEntry: "Reddish Egret Plume" */
			return 5;
		case -1161319399: /* GXTEntry: "Snowy Egret Plume" */
			return 5;
		case 728781265: /* GXTEntry: "Lady of the Night Orchid" */
			return 15;
		case -222563712: /* GXTEntry: "Heron Plume" */
			return 20;
		case 1794857344: /* GXTEntry: "Lady Slipper Orchid" */
			return 7;
		case 1952409553: /* GXTEntry: "Moccasin Flower Orchid" */
			return 10;
		case 2116770557:
			return 25;
		case -651064726: /* GXTEntry: "Acuna\'s Star Orchid" */
			return 3;
		case -404270094: /* GXTEntry: "Cigar Orchid" */
			return 7;
		case 2093126853: /* GXTEntry: "Ghost Orchid" */
			return 5;
		case 2085530337: /* GXTEntry: "Spoonbill Plume" */
			return 30;
		case -150591160: /* GXTEntry: "Night Scented Orchid" */
			return 5;
		case -323969289: /* GXTEntry: "Rat Tail Orchid" */
			return 10;
		case 1504361882: /* GXTEntry: "Spider Orchid" */
			return 5;
		case -1521783510: /* GXTEntry: "Clamshell Orchid" */
			return 5;
		case 1714875242: /* GXTEntry: "Dragon\'s Mouth Orchid" */
			return 5;
		case 1019229063: /* GXTEntry: "Queen\'s Orchid" */
			return 5;
		case 927763737: /* GXTEntry: "Sparrow\'s Egg Orchid" */
			return 10;
		default:
			break;
	}
	return 0;
}

int func_566(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0);
}

void func_567(int iParam0, int iParam1)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, iParam1);
}

int func_568(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_681(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	return uVar5;
}

void func_569(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_568(iParam1, 5) || iParam0 == func_568(iParam1, 6)) || iParam0 == func_568(iParam1, 7)) || iParam0 == func_568(iParam1, 8)) || iParam0 == func_568(iParam1, 9))
	{
		func_559(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_327(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_329(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_570(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 1;
	if ((((iParam0 == func_568(iParam1, 5) || iParam0 == func_568(iParam1, 6)) || iParam0 == func_568(iParam1, 7)) || iParam0 == func_568(iParam1, 8)) || iParam0 == func_568(iParam1, 9))
	{
		if (func_559(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_327(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_329(51, 0, 0, iVar0, func_522(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_327(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_329(51, 0, 0, iVar0, func_522(iParam1, 20), 1, 0);
			}
		}
	}
}

int func_571()
{
	if (func_194(((*Global_1347702)[37 /*49*/])->f_15) && Global_1392388->f_7)
	{
		return 1;
	}
	return 0;
}

void func_572(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
}

void func_573(int iParam0)
{
	if (!func_725(iParam0))
	{
		COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	}
}

void func_574(int iParam0)
{
	COLLECTION::_0x398FAB9C96A81924(iParam0, 1);
}

void func_575(int iParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case 1234009870: /* GXTEntry: "Revolver Cartridges - Regular" */
			*iParam1 = 1802325493;
			*uParam2 = 1681219929; /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case -1202134084: /* GXTEntry: "Opened Revolver Cartridges" */
			*iParam1 = -864693164;
			*uParam2 = 1681219929; /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case 1297050066: /* GXTEntry: "Revolver Cartridges - Express" */
			*iParam1 = -603289736;
			*uParam2 = 1232099469; /* GXTEntry: "Revolver Cartridges - Express" */
			break;
		case -1780177928: /* GXTEntry: "Revolver Cartridges - High Velocity" */
			*iParam1 = -1803237008;
			*uParam2 = -2084181920; /* GXTEntry: "Revolver Cartridges - High Velocity" */
			break;
		case -1467836497: /* GXTEntry: "Pistol Cartridges - Regular" */
			*iParam1 = -1175521284;
			*uParam2 = joaat("ammo_pistol");
			break;
		case 1723805622: /* GXTEntry: "Opened Pistol Cartridges" */
			*iParam1 = -1559549888;
			*uParam2 = joaat("ammo_pistol");
			break;
		case -153287664: /* GXTEntry: "Pistol Cartridges - Express" */
			*iParam1 = -1650796693;
			*uParam2 = 836939099; /* GXTEntry: "Pistol Cartridges - Express" */
			break;
		case 1845082736: /* GXTEntry: "Pistol Cartridges - High Velocity" */
			*iParam1 = -1521597660;
			*uParam2 = -1411815376; /* GXTEntry: "Pistol Cartridges - High Velocity" */
			break;
		case 406755377: /* GXTEntry: "Rifle Cartridges - Regular" */
			*iParam1 = -1288829256;
			*uParam2 = joaat("ammo_rifle");
			break;
		case 1469029564: /* GXTEntry: "Opened Rifle Cartridges" */
			*iParam1 = 1393841762;
			*uParam2 = joaat("ammo_rifle");
			break;
		case 45760211: /* GXTEntry: "Rifle Cartridges - Express" */
			*iParam1 = -851229814;
			*uParam2 = 1654725195; /* GXTEntry: "Rifle Cartridges - Express" */
			break;
		case -276295943: /* GXTEntry: "Rifle Cartridges - High Velocity" */
			*iParam1 = 914704115;
			*uParam2 = 1858824185; /* GXTEntry: "Rifle Cartridges - High Velocity" */
			break;
		case -2029793397: /* GXTEntry: "Repeater Cartridges - Regular" */
			*iParam1 = -219896679;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case 2120467495:
			*iParam1 = 516838334;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case -2075613923: /* GXTEntry: "Repeater Cartridges - Express" */
			*iParam1 = -385817936;
			*uParam2 = -578347576; /* GXTEntry: "Repeater Cartridges - Express" */
			break;
		case 122656217: /* GXTEntry: "Repeater Cartridges - High Velocity" */
			*iParam1 = 1192843172;
			*uParam2 = 231465488; /* GXTEntry: "Repeater Cartridges - High Velocity" */
			break;
		case 2107187484: /* GXTEntry: "Shotgun Shells - Regular" */
			*iParam1 = 954871696;
			*uParam2 = joaat("ammo_shotgun");
			break;
		case -791844268: /* GXTEntry: "Opened Shotgun Shells" */
			*iParam1 = -1217273132;
			*uParam2 = joaat("ammo_shotgun");
			break;
		case 305770744: /* GXTEntry: "Shotgun - Slug" */
			*iParam1 = -2087227528;
			*uParam2 = 314966081; /* GXTEntry: "Shotgun - Slug" */
			break;
		case 550900979: /* GXTEntry: "Rifle Cartridges - Varmint" */
			*iParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

int func_576(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1946804->f_57[iVar0 /*11*/])->f_8 == iParam0)
		{
			return func_726(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_577(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_727();
	if (iParam2 == 39)
	{
		Var0 = { func_398(iParam0, 1, 0) };
		iParam2 = func_454(func_576(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return 0;
	}
	if (func_331(iParam0, 866047851) && func_711(&(Global_1946804->f_1378)) >= 2)
	{
		return 0;
	}
	if ((func_580(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2 /*11*/])
	{
		func_728(func_726(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_729(iParam2);
	func_730(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && (Global_1946804->f_57[iParam2 /*11*/])->f_1 > 1)
	{
		func_659(Global_1946804->f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_659(Global_1946804->f_1497.f_1[iParam2 /*3*/], 4, 6);
	}
	func_648(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = (Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2 /*3*/] = iParam0;
	(Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1 = func_731(iParam0, iParam2, iParam1, func_23() != -1);
	if (bParam4)
	{
		func_732(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_732(&(Global_1946804->f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804->f_2589)
		{
			if (&Global_1946804->f_2589.f_2[iVar6 /*2*/] >= 0 && &Global_1946804->f_2589.f_2[iVar6 /*2*/] < 39)
			{
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6 /*2*/] /*2*/] = 0;
				(Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6 /*2*/] /*2*/])->f_1 = 0;
				func_733(func_726(&(Global_1946804->f_2589.f_2[iVar6 /*2*/]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return 1;
}

void func_578(bool bParam0, bool bParam1, bool bParam2)
{
	func_734(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

void func_579(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_735(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_736(Var0);
}

bool func_580(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_581()
{
	func_737(&(Global_1946804->f_2776));
	func_738(32768);
	func_733(1108822547, 8, 6);
}

int func_582(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_454(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/] || &Global_1946804->f_1378.f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_583(int iParam0)
{
	struct<4> Var0;

	if (func_739(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_740(Var0);
}

void func_584(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;

	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_740(Var0);
}

bool func_585(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_586(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_587(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1946804->f_2657.f_21;
		case 81053684:
			return Global_1946804->f_2657.f_23;
		case -525676072:
			return Global_1946804->f_2657.f_22;
		case -1719060085:
			return Global_1946804->f_2657.f_24;
		case -413129408:
			return Global_1946804->f_2657.f_25;
		case -999503751:
			if (bParam1)
			{
				return Global_1946804->f_2657.f_20;
			}
			else
			{
				return func_741();
			}
			break;
	}
	return 0;
}

int func_588(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return 0;
	}
	return 1;
}

void func_589(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!func_588(iParam0))
	{
		return;
	}
	if (func_742(iParam0))
	{
		return;
	}
	if (!func_743(iParam0))
	{
		func_744(iParam0, 1, 0);
	}
	iVar0 = func_651(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_652(iParam0, 512))
		{
			func_579(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_745() && !bParam1) && !func_33(0, 0, 1))
	{
		func_746(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_DONE", MISC::_CREATE_VAR_STRING(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_468(iParam0, 6);
	if (bParam2)
	{
		if (!func_33(0, 0, 1))
		{
			func_517(1, 4);
		}
	}
}

bool func_590(int iParam0, bool bParam1)
{
	return func_587(iParam0, 0) < func_747(iParam0, bParam1);
}

int func_591(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_334(iVar1) == iParam0)
		{
			*uParam1 = iVar1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_592(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_454(iParam0, 1) /*3*/] != &Global_1946804->f_57[func_454(iParam0, 1) /*11*/];
}

void func_593(int iParam0, int iParam1)
{
	if (func_331(iParam1, 130796156))
	{
		func_748(iParam1, 0);
	}
	else if (func_331(iParam1, 930141731))
	{
		func_748(iParam1, 1);
		func_749(iParam0);
	}
}

void func_594(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (&uParam0->f_1[iVar0] == iParam1)
		{
			return;
		}
		if ((((iParam1 == 617531372 && &uParam0->f_1[iVar0] == 291123060) || (iParam1 == 291123060 && &uParam0->f_1[iVar0] == 617531372)) || (iParam1 == 1356624740 && &uParam0->f_1[iVar0] == 1884295263)) || (iParam1 == 1884295263 && &uParam0->f_1[iVar0] == 1356624740))
		{
			uParam0->f_1[iVar0] = iParam1;
			return;
		}
		iVar0++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_595(int iParam0, var uParam1, var uParam2, int iParam3)
{
	var uVar0;
	struct<14> Var1;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	func_750(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_751(uParam2, iParam0, Var1);
	return 1;
}

int func_596(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_597(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		case 7:
			return "PROVISION_FISH_MUSKIE";
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		case 9:
			return "PROVISION_FISH_PERCH";
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		default:
			break;
	}
	return "FISHTYPE_UNKNOWN";
}

int func_598(int iParam0)
{
	var uVar0;

	if (!func_752(iParam0, &uVar0, joaat("inventory"), 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

var func_599(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	var uVar20;

	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _NAMESPACE71::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_753(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_600()
{
	return !&Global_1911774;
}

void func_601(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	Global_1911774->f_4[Global_1911774->f_3 /*4*/] = iParam0;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_1 = iParam1;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_2 = bParam2;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_3 = bParam3;
	if (Global_1911774->f_3 < 20)
	{
		Global_1911774->f_3++;
	}
}

int func_602(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_603(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_604(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_605()
{
	if (func_138())
	{
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();
	}
	return 0;
}

void func_606(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_754((Global_40.f_4283.f_325 + iParam0));
}

void func_607(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_605())
	{
		func_599(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
	else
	{
		func_599(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
}

struct<14> func_608(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	return Var0;
}

struct<4> func_609(bool bParam0)
{
	int iVar0;

	iVar0 = func_411(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224214))
		{
			*Global_1224214 = { func_401(923904168, func_440(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224222))
		{
			*Global_1224222 = { func_401(923904168, func_440(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_401(923904168, func_440(bParam0), -740156546, 0);
}

void func_610(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_611(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_411(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_612(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (func_619(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	if (!func_337(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_411(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

void func_613(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	if (func_23() == -1)
	{
		if (func_320(43))
		{
			if (func_331(iParam0, 412399755))
			{
				func_561(-1791518714);
				if (func_562() == 0)
				{
					func_517(0, 10);
					iVar0 = func_755(iParam0, iParam1, 1);
					if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
					{
						if (func_564(iParam0) < func_565(iParam0))
						{
							func_327(43, iParam0, iParam1, -1791518714, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_320(44))
		{
			if (func_331(iParam0, 709057512))
			{
				func_561(-2087881550);
				if (func_562() == 1)
				{
					func_517(0, 10);
					iVar0 = func_755(iParam0, iParam1, 2);
					if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
					{
						if (func_564(iParam0) < func_565(iParam0))
						{
							func_327(43, iParam0, iParam1, -2087881550, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_320(45))
		{
			if (func_331(iParam0, -1478961327))
			{
				func_561(1908068621);
				if (func_562() == 2)
				{
					func_517(0, 10);
					iVar0 = func_755(iParam0, iParam1, 4);
					if (((iParam0 == 2116770557 || iParam0 == -651064726) || iParam0 == -404270094) || iParam0 == 2093126853)
					{
						if (func_564(iParam0) < func_565(iParam0))
						{
							func_327(43, iParam0, iParam1, 1908068621, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_320(46))
		{
			if (func_331(iParam0, -1238404098))
			{
				func_561(1611247019);
				if (func_562() == 3)
				{
					func_517(0, 10);
					iVar0 = func_755(iParam0, iParam1, 8);
					if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
					{
						if (func_564(iParam0) < func_565(iParam0))
						{
							func_327(43, iParam0, iParam1, 1611247019, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_320(47))
		{
			if (func_331(iParam0, 1160548794))
			{
				func_561(1319635688);
				if (func_562() == 4)
				{
					func_517(0, 10);
					iVar0 = func_755(iParam0, iParam1, 16);
					if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
					{
						if (func_564(iParam0) < func_565(iParam0))
						{
							func_327(43, iParam0, iParam1, 1319635688, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

int func_614(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_411(0);
	*uParam1 = { func_401(iParam0, func_609(0), iParam3, 0) };
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

int func_615(int iParam0, bool bParam1)
{
	if (func_334(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_511(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0) > 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

struct<4> func_616(bool bParam0)
{
	int iVar0;

	iVar0 = func_411(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224218))
		{
			*Global_1224218 = { func_401(271701509, func_440(bParam0), 12999093, 0) };
		}
		return *Global_1224218;
	}
	return func_401(271701509, func_440(bParam0), 12999093, 0);
}

int func_617(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_334(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &uVar0))
		{
			if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, uVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

int func_618(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_411(bParam5), &uParam0, uParam4, !bParam6))
	{
		return 0;
	}
	return 1;
}

int func_619(int iParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_620(struct<4> Param0, int iParam4, bool bParam5)
{
	int iVar0;
	struct<11> Var1;
	int iVar15;
	struct<28> Var16;
	struct<17> Var44;
	struct<16> Var61;

	iVar0 = -1;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_618(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_330(Var1.f_4);
	if (iVar15 == joaat("horse"))
	{
		Var16 = { func_756(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_757(joaat("update"), &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("clothing"))
	{
		Var44 = { func_758(Param0, 1) };
		Var44.f_10 = iParam4;
		iVar0 = func_759(joaat("update"), &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var61 = { func_760(&Var1) };
		Var61.f_10 = iParam4;
		iVar0 = func_761(joaat("update"), &Var61, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_621(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
		case 5:
		case 6:
		case 9:
		case 10:
		case 11:
		case 13:
		case 14:
		case 15:
		case 25:
			return 1;
		case 12:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 26:
		case 53:
			return 2;
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 37:
			return 3;
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			return 4;
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			return 5;
		case 59:
			return 6;
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			return 7;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
			return 8;
	}
	return -1;
}

int func_622(int iParam0)
{
	switch (iParam0)
	{
		case 120:
			return 0;
		case 0:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 94:
		case 97:
		case 98:
		case 112:
		case 113:
		case 114:
			return 1;
		case 3:
		case 4:
		case 5:
		case 37:
		case 67:
		case 76:
		case 134:
			return 2;
		case 115:
		case 116:
			return 3;
		case 58:
		case 64:
		case 68:
		case 82:
		case 83:
			return 5;
		case 1:
		case 2:
		case 8:
		case 9:
		case 10:
		case 96:
			return 8;
	}
	return -1;
}

bool func_623(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_762(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

int func_624(int iParam0)
{
	if (!func_15(iParam0))
	{
		return 0;
	}
	switch (func_39(iParam0))
	{
		case 1:
			switch (func_100(iParam0))
			{
				case 9:
				case 18:
				case 23:
				case 24:
				case 26:
				case 33:
				case 34:
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 47:
				case 59:
				case 66:
					return 1;
			}
			break;
		case 8:
			switch (func_100(iParam0))
			{
				case 2:
				case 58:
				case 62:
				case 96:
					return 1;
			}
			break;
	}
	return 0;
}

void func_625(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_411(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_334(iVar1) == iParam0)
		{
			INVENTORY::_0x6A564540FAC12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_764(func_763(iParam0), 6);
}

void func_626(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_411(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_334(iVar1) == iParam0)
		{
			INVENTORY::_0x766315A564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_765(func_763(iParam0), 6);
}

int func_627(int iParam0)
{
	int iVar0;

	if (iParam0 == 0 || iParam0 == -1)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (&Global_1898164->f_1[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_628(int iParam0)
{
	struct<5> Var0;

	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 1)
	{
		Global_1898164->f_162 = 0;
		*(Global_1898164->f_1[0 /*5*/]) = { Var0 };
		return 1;
	}
	*(Global_1898164->f_1[iParam0 /*5*/]) = { Var0 };
	Global_1898164->f_162 = (Global_1898164->f_162 - 1);
	func_766(iParam0, Global_1898164->f_162);
	return 1;
}

int func_629()
{
	return Global_40.f_11095.f_35;
}

int func_630()
{
	return 4;
}

int func_631()
{
	return Global_40.f_1095.f_3054.f_1;
}

float func_632(int iParam0)
{
	var uVar0;

	uVar0 = &Global_1900383->f_393.f_8[iParam0];
	return uVar0;
}

struct<4> func_633()
{
	struct<4> Var0;

	return Var0;
}

int func_634(int iParam0)
{
	int iVar0;

	iVar0 = func_215(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_767(iVar0);
}

int func_635(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (Global_1058888->f_40501 >= 32)
	{
		return -1;
	}
	Var0 = -1;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	if (Global_1058888->f_40501 == 0)
	{
		*(Global_1058888->f_40501.f_1[Global_1058888->f_40501 /*2*/]) = { Var0 };
		Global_1058888->f_40501++;
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_1058888->f_40501)
	{
		if (iParam0 == &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
			return iVar2;
		}
		else if (iParam0 > &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			iVar2++;
		}
		else if (iParam0 < &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			func_768(iVar2);
			*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
			return iVar2;
		}
	}
	if (Global_1058888->f_40501 < 31)
	{
		iVar2 = Global_1058888->f_40501;
		*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
		Global_1058888->f_40501++;
		if (Global_1058888->f_40501 > 32)
		{
			Global_1058888->f_40501 = 32;
		}
		return iVar2;
	}
	return -1;
}

void func_636()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

bool func_637(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_638(iParam1);
	func_639(&(Global_1946804->f_964), iVar0, iParam0, -897569541, 1, iParam1);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804->f_964));
	return DATAFILE::_0xED4413CEE1BF142C(&(Global_1946804->f_964));
}

int func_638(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_450();
	}
	if (func_23() == -1)
	{
		if (iParam0 == 1160113249)
		{
			iVar0 = 1583685020;
		}
		else
		{
			iVar0 = -572793833;
		}
	}
	else
	{
		iVar0 = -2109211296;
	}
	return iVar0;
}

void func_639(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

int func_640(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946804->f_2657.f_19)
	{
		if (iParam0 == &Global_1946804->f_2657[*iParam1])
		{
			return 1;
		}
		*iParam1++;
	}
	return 0;
}

int func_641(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (!func_640(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_334(iParam0) != -999503751)
		{
			func_769(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_334(iParam0) != -999503751)
	{
		func_769(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_770(iParam0, 1);
	return 1;
}

void func_642()
{
	int iVar0;

	if (func_23() == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_2657.f_19)
		{
			Global_26795[iVar0] = &Global_1946804->f_2657[iVar0];
			iVar0++;
		}
		Global_26795.f_20 = Global_1946804->f_2657.f_20;
		Global_26795.f_21 = Global_1946804->f_2657.f_21;
		Global_26795.f_22 = Global_1946804->f_2657.f_22;
		Global_26795.f_23 = Global_1946804->f_2657.f_23;
		Global_26795.f_24 = Global_1946804->f_2657.f_24;
		Global_26795.f_19 = Global_1946804->f_2657.f_19;
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		Global_36637.f_45.f_350[iVar0] = &Global_1946804->f_2657[iVar0];
		iVar0++;
	}
	Global_36637.f_45.f_350.f_20 = Global_1946804->f_2657.f_20;
	Global_36637.f_45.f_350.f_21 = Global_1946804->f_2657.f_21;
	Global_36637.f_45.f_350.f_22 = Global_1946804->f_2657.f_22;
	Global_36637.f_45.f_350.f_23 = Global_1946804->f_2657.f_23;
	Global_36637.f_45.f_350.f_24 = Global_1946804->f_2657.f_24;
	Global_36637.f_45.f_350.f_19 = Global_1946804->f_2657.f_19;
}

void func_643(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_771(0);
	}
	if (bParam0)
	{
		func_735(8);
		func_735(512);
	}
	else
	{
		func_735(8);
		func_735(16);
	}
}

int func_644(int iParam0)
{
	switch (iParam0)
	{
		case 708211766:
			return 1;
		case -1815871154:
			return 2;
		case 1053922635:
			return 4;
		case -1248203249:
			return 8;
		case -1275860049:
			return 16;
		case -473313046:
			return 32;
		case 1009605579:
			return 64;
		case -92538845:
			return 128;
		case 350097565:
			return 256;
		case 346761890:
			return 512;
		case -915377750:
			return 1024;
		case -1283403230:
			return 2048;
		case 1024778115:
			return 4096;
		case 75507907:
			return 8192;
		case -1678578495:
			return 16384;
		case -1925540957:
			return 32768;
		case -2125161702:
			return 131072;
		case 1929486675:
			return 262144;
		case -1932005642:
			return 65536;
		case 315750675:
			return 524288;
		case -376594188:
			return -1;
		case -663436545:
			return 112;
		case 1042019528:
			return 1136;
		case -141044514:
			return 4208;
		case 884232794:
			return 8304;
		case 836721350:
			return 20480;
		case -1062102573:
			return 32833;
		case -884591393:
			return 96;
		case -1886898087:
			return 16496;
		case -1674046782:
			return 139376;
		case 1481630954:
			return 262256;
		case -366477279:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_645(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_461(uParam0->f_1[iVar0 /*3*/], 2))
		{
			iVar7 = func_726(iVar0, 1);
			if (func_772(iVar0, iParam1))
			{
				vVar4 = { func_457(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0 /*11*/] && vVar4.x != 0) && (&uParam0->f_1[iVar0 /*3*/] != vVar4.x || (uParam0->f_1[iVar0 /*3*/])->f_1 != vVar4.y))
				{
					*(uParam0->f_1[iVar0 /*3*/]) = { vVar4 };
				}
				if (func_773(iVar7, 4))
				{
					func_733(iVar7, 4, 6);
				}
			}
			else
			{
				func_774(iVar7, 4, 6);
				Jump @201; //curOff = 167
				if (bParam2)
				{
					vVar1.x = &Global_1946804->f_57[iVar0 /*11*/];
					*(uParam0->f_1[iVar0 /*3*/]) = { vVar1 };
				}
			}
			iVar0++;
		}
	}

int func_646(int iParam0)
{
	int iVar0;
	var uVar1;

	Global_1946804->f_964.f_2 = 0;
	if (func_23() == -1)
	{
		iVar0 = -380731322;
	}
	else
	{
		iVar0 = 1226838104;
	}
	func_639(&(Global_1946804->f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804->f_964));
	if (!DATAFILE::_0x44B3A36933AC009C(&uVar1, &(Global_1946804->f_964), 1409451727))
	{
		return 0;
	}
	return 1;
}

int func_647(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("base");
	return 1;
}

void func_648(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_334(&(uParam0->f_1[iParam2 /*3*/]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_772(iParam2, 65536) && &uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_730(iVar1, iVar3);
		}
	}
	if (func_592(-1586649372) && func_772(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_730(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case 698653232:
			if (iParam1 == &Global_1946804->f_57[iParam2 /*11*/])
			{
				iVar1 = 12;
				if (&uParam0->f_1[iVar1 /*3*/] == 1516947474)
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_730(iVar1, iVar3);
					}
				}
			}
			func_775(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_775(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
			iVar1 = 22;
			if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
			{
			}
			else
			{
				iVar0 = 16;
				if ((uParam0->f_1[iVar0 /*3*/])->f_1 == joaat("base") || (uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_730(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 525
				func_775(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/])->f_1 == joaat("base")
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = -1539589426;
					if (bParam4)
					{
						func_730(iVar1, iVar3);
					}
				}
				if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 1530758430)
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 1334603721;
					if (bParam4)
					{
						func_730(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 656
				func_775(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1170; //curOff = 691
				func_775(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_730(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 786
				func_775(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1170; //curOff = 807
				if (iParam1 == &Global_1946804->f_57[iParam2 /*11*/])
				{
					iVar1 = 37;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_730(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_730(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_334(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_730(iVar1, iVar3);
						}
					}
				}
				Jump @1170; //curOff = 1025
				iVar1 = 36;
				if (&uParam0->f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && func_331(&(Global_1946804->f_1497.f_1[iVar1 /*3*/]), -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = &Global_1946804->f_57[iParam2 /*11*/];
					(uParam0->f_1[iParam2 /*3*/])->f_1 = 0;
				}
				Jump @1170; //curOff = 1110
				iVar1 = 36;
				if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iParam2 /*3*/] = &Global_1946804->f_57[iParam2 /*11*/];
					(uParam0->f_1[iParam2 /*3*/])->f_1 = 0;
				}
			}
			switch (func_334(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_334(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_730(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_334(&(uParam0->f_1[iVar1 /*3*/])) || func_331(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_730(iVar1, iVar3);
						}
					}
					break;
			}
		}

int func_649()
{
	if (func_23() == -1)
	{
		return Global_26795.f_776;
	}
	return Global_36637.f_45.f_350.f_1011;
}

void func_650(var uParam0, int iParam1, int iParam2)
{
	*((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

int func_651(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 439606975 /* GXTEntry: "Fancy Suit" */;
		case 6:
			return 1661121390 /* GXTEntry: "The Gunslinger" */;
		case 7:
			return 1164374808 /* GXTEntry: "Winter Outfit" */;
		case 8:
			return 1160643979 /* GXTEntry: "The Winter Gunslinger" */;
		case 9:
			return 624063935 /* GXTEntry: "The Summer Gunslinger" */;
		case 10:
			return -1476781101 /* GXTEntry: "Island Outfit" */;
		case 11:
			return 294553332 /* GXTEntry: "Island Outfit" */;
		case 12:
			return 1788874135 /* GXTEntry: "Island Outfit Shackles" */;
		case 15:
			return 1560492757 /* GXTEntry: "Robbery Outfit" */;
		case 16:
			return -769081407 /* GXTEntry: "The Wittemore" */;
		case 17:
			return 1902428294 /* GXTEntry: "The Wittemore" */;
		case 18:
			return -2114499732;
		case 19:
			return 800827126;
		case 20:
			return 688004210 /* GXTEntry: "Police Outfit" */;
		case 0:
			return 166243423 /* GXTEntry: "Custom Outfit" */;
		case 1:
			return 1383300684 /* GXTEntry: "Saved Custom Outfit One" */;
		case 2:
			return 2051441678 /* GXTEntry: "Saved Custom Outfit Two" */;
		case 3:
			return 162509669 /* GXTEntry: "Saved Custom Outfit Three" */;
		case 4:
			return 635948769 /* GXTEntry: "Saved Custom Outfit Four" */;
		case 5:
			return 274995506 /* GXTEntry: "Saved Custom Outfit Five" */;
		case 24:
			return -1826731591 /* GXTEntry: "Brawler\'s Outfit" */;
		case 25:
			return 2119049229;
		case 26:
			return 1352942778 /* GXTEntry: "The Rebel" */;
		case 27:
			return 1964379549 /* GXTEntry: "The Innocent" */;
		case 28:
			return 1201189539 /* GXTEntry: "The Pursuer" */;
		case 21:
			return 1351927599 /* GXTEntry: "The Grizzlies Outlaw" */;
		case 22:
			return 2032023096 /* GXTEntry: "The Nuevo Paraiso" */;
		case 23:
			return -291256376;
		case 66:
			return -1243402388;
		case 67:
			return 65931886;
		case 68:
			return 1371678229;
		case 69:
			return 2102263084;
		case 61:
			return -272211555 /* GXTEntry: "The Homesteader" */;
		case 64:
			return -55563408;
		case 71:
			return -1914506115;
		case 75:
			return 802495462;
		case 77:
			return 842905332;
		case 78:
			return -1951220140;
		case 79:
			return 1511551084;
		case 81:
			return -1725704631;
		case 83:
			return 1257427489;
		case 85:
			return -659341240;
		case 87:
			return 2038771525;
		case 89:
			return -535599244;
		case 73:
			return -389591806;
		case 70:
			return -1205612021 /* GXTEntry: "The Winter Cowboy" */;
		case 93:
			return 890706995 /* GXTEntry: "The Cowhand" */;
		case 90:
			return 1156438275 /* GXTEntry: "The Rancher" */;
		case 91:
			return -1611873049 /* GXTEntry: "The Rancher" */;
		case 92:
			return 594312243;
		case 94:
			return -978578725;
		case 13:
			return 1784889667;
		case 62:
			return -361635024 /* GXTEntry: "The Cowboy" */;
		case 76:
			return 1460520700;
		case 80:
			return 523337834;
		case 82:
			return -19271249;
		case 84:
			return 214175524;
		case 86:
			return -1303643297;
		case 88:
			return 411856831;
		case 72:
			return -926815459;
		case 74:
			return -1300731953;
		case 65:
			return -409616653 /* GXTEntry: "The Homesteader" */;
		case 29:
			return 509954990 /* GXTEntry: "The Chevalier" */;
		case 30:
			return -445916744 /* GXTEntry: "The Heartlands" */;
		case 31:
			return -866249154 /* GXTEntry: "The Gambler" */;
		case 32:
			return -2077063704 /* GXTEntry: "The Earl" */;
		case 33:
			return 205207539 /* GXTEntry: "The McLaughlin" */;
		case 34:
			return -1033657275 /* GXTEntry: "The Josiah" */;
		case 35:
			return 1806002837 /* GXTEntry: "The Farrier" */;
		case 36:
			return 705324896 /* GXTEntry: "The Donegal" */;
		case 37:
			return -1541763703 /* GXTEntry: "The Bulldogger" */;
		case 38:
			return 387052410 /* GXTEntry: "The Ranch Hand" */;
		case 39:
			return -361288914 /* GXTEntry: "The Scrapper" */;
		case 40:
			return -911054515 /* GXTEntry: "The Armadillo" */;
		case 41:
			return 1084200963 /* GXTEntry: "The Valentine" */;
		case 42:
			return 1847948074 /* GXTEntry: "The Vaquero" */;
		case 43:
			return -1212526764 /* GXTEntry: "The Dewberry Creek" */;
		case 44:
			return 1851440270 /* GXTEntry: "The Clairmont" */;
		case 45:
			return -2028985700 /* GXTEntry: "The Roscoe" */;
		case 46:
			return 1074435214 /* GXTEntry: "The Estate Boss" */;
		case 47:
			return -883015675 /* GXTEntry: "The Drover" */;
		case 48:
			return -1047155604 /* GXTEntry: "The Calumet" */;
		case 49:
			return 1123231221 /* GXTEntry: "The Cowpuncher" */;
		case 50:
			return 1866989210 /* GXTEntry: "The Tumbleweed" */;
		case 51:
			return 478183719 /* GXTEntry: "The Drifter" */;
		case 52:
			return -1698955868 /* GXTEntry: "The Leatherman" */;
		case 53:
			return -2029378634 /* GXTEntry: "The Cumberland" */;
		case 54:
			return 1339864416 /* GXTEntry: "The Millesani" */;
		case 55:
			return 890998115 /* GXTEntry: "The Faulkton" */;
		case 56:
			return -1376288999 /* GXTEntry: "The Dolton" */;
		case 57:
			return -1041123771 /* GXTEntry: "The Corson" */;
		case 58:
			return 1389254668 /* GXTEntry: "The Saint Denis" */;
		case 59:
			return -346112633 /* GXTEntry: "The Deauville" */;
		case 60:
			return 773309172 /* GXTEntry: "The Bretagne" */;
		default:
			break;
	}
	return 0;
}

bool func_652(int iParam0, int iParam1)
{
	if (!func_588(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] && iParam1) != 0;
}

void func_653(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

void func_654()
{
	char* sVar0;

	if (PED::IS_PED_RAGDOLL(Global_35))
	{
		return;
	}
	if (CAM::_0xA24C1D341C6E0D53(1, 1, 1))
	{
		return;
	}
	if (!func_580(1))
	{
		return;
	}
	sVar0 = "outfit_change_unarmed";
	switch (Global_1946804->f_859)
	{
		case 1:
			sVar0 = "outfit_change_longarms";
			break;
		case 0:
			sVar0 = "outfit_change_offhand";
			break;
		case 2:
			sVar0 = "outfit_change_unarmed";
			break;
	}
	TASK::TASK_PLAY_ANIM(Global_35, func_776(), sVar0, 1090519040, -1056964608, -1, 67108880, 0, 0, 0, 0, "Satchel_and_ik_hand_helpers_filter", 0);
	func_738(1);
	STREAMING::REMOVE_ANIM_DICT(func_776());
}

int func_655(int iParam0)
{
	return 0;
}

int func_656(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 1;
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 1;
		case 5:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_657(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = false;
	iVar1 = 0;
	iVar2 = iParam0;
	iVar3 = -1;
	iVar4 = func_463(iParam0);
	if (iVar4 >= 0 && iVar4 <= 5)
	{
		iVar3 = iVar4;
	}
	if (func_23() != -1)
	{
		return;
	}
	func_727();
	if (bParam5)
	{
		if (!func_777(&(Global_1946804->f_1378), &bVar0, iVar2, iVar3, 1, 0))
		{
			return;
		}
	}
	if (func_580(32768) && &Global_1946804->f_1378.f_1[10 /*3*/] != &Global_1946804->f_57[10 /*11*/])
	{
		func_581();
	}
	func_778(iVar3, 1, 1, 1, 1, 1);
	func_579(31, 0, 0, 0, 0);
	func_583(0);
	if (!bParam3)
	{
		return;
	}
	if (bVar0)
	{
		iVar1 = 8;
	}
	if (!bParam4)
	{
		if (PED::IS_PED_A_PLAYER(iParam1))
		{
			func_579(2, iVar1, 2, 0, 0);
		}
		else
		{
			func_579(2, iVar1, 3, iParam1, 0);
		}
	}
	else
	{
		func_779(&(Global_1946804->f_1497), iParam1, 1, -1, 1, 1, 1);
	}
}

void func_658(int iParam0)
{
	PED::_0xE3144B932DFDFF65(iParam0, 0f, -1, 1, 1);
	PED::CLEAR_PED_ENV_DIRT(iParam0);
	PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 10, "ALL");
	PED::CLEAR_PED_BLOOD_DAMAGE(Global_35);
}

void func_659(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_660(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	var uVar2;
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
		iVar1 = func_334(iParam1);
		iVar5 = func_432(iParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &uVar2))
			{
				if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iVar1, uVar2))
				{
					*uParam4 = { func_398(iParam1, 0, 0) };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { func_401(iParam1, *uParam4, uParam4->f_4, 0) };
					*iParam2 = uVar2;
					return 1;
				}
			}
			iVar0++;
		}
		if (bParam5)
		{
			Var6.f_9 = -1591664384;
			Var20.f_9 = -1591664384;
			iVar34 = func_411(0);
			Var37 = { func_398(iParam1, 0, 0) };
			if (iParam6 != 0)
			{
				Var37.f_4 = iParam6;
			}
			Var42 = { func_401(iParam1, Var37, Var37.f_4, 0) };
			iVar35 = INVENTORY::_0xE843D21A8E2498AA(iVar34, &Var42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (INVENTORY::_0xCD9A485F2B383B44(iVar34, &Var42, iVar36, &Var6))
				{
					iVar1 = func_334(Var6.f_4);
					iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &uVar2))
						{
							if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iVar1, uVar2))
							{
								if (func_404(Var42, Var6.f_9, &Var20, 0))
								{
									uParam4->f_4 = Var6.f_9;
									*uParam4 = { Var6.f_5 };
									*uParam3 = { Var20 };
									*iParam2 = uVar2;
									return 1;
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
	return 0;
}

int func_661(int iParam0)
{
	if (!func_287(iParam0, 0))
	{
	}
	if (func_331(iParam0, 162787671))
	{
		return 1;
	}
	return 0;
}

int func_662(int iParam0)
{
	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	if (func_331(iParam0, -251515357))
	{
		return 1;
	}
	return 0;
}

int func_663(int iParam0)
{
	switch (iParam0)
	{
		case -1249891745: /* GXTEntry: "Alligator Ranch Cutter Saddle" */
			return 263080063 /* GXTEntry: "Trapper Blanket" */;
		case -769274720: /* GXTEntry: "Boar Mother Hubbard Saddle" */
			return -34331381 /* GXTEntry: "Trapper Blanket" */;
		case 893370428: /* GXTEntry: "Cougar McClelland Saddle" */
			return -993578318 /* GXTEntry: "Trapper Blanket" */;
		case 736792276: /* GXTEntry: "Beaver Roping Saddle" */
			return 579268144 /* GXTEntry: "Trapper Blanket" */;
		case -949205287: /* GXTEntry: "Panther Trail Saddle" */
			return 1104489688 /* GXTEntry: "Trapper Blanket" */;
	}
	return 0;
}

int func_664()
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar14;
	bool bVar15;
	struct<4> Var16;
	int iVar20;
	int iVar21;

	Var0 = { func_398(856287005, 0, 0) };
	Var5 = { func_401(856287005, Var0, Var0.f_4, 0) };
	iVar10 = func_334(856287005);
	if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, 0, &iVar11))
	{
		iVar14 = func_286(Var5, -415648720, 0);
	}
	if (!func_287(iVar14, 0))
	{
		return 0;
	}
	bVar15 = false;
	iVar20 = func_432(856287005);
	iVar9 = 0;
	while (iVar9 < iVar20)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, iVar9, &iVar11))
		{
			bVar15 = false;
			iVar21 = func_286(Var5, iVar11, 0);
			if (!func_287(iVar21, 0))
			{
				if (iVar11 == 325139909)
				{
					if (func_662(iVar14) || func_661(iVar14))
					{
					}
					else
					{
						Jump @219; //curOff = 194
						if (iVar11 == 986998820)
						{
							if (func_662(iVar14))
							{
							}
							else
							{
								bVar15 = true;
								Jump @259; //curOff = 222
								if (iVar11 == -1189569496)
								{
									if (!func_662(iVar14) && func_780(iVar21))
									{
										bVar15 = true;
									}
								}
								if (bVar15)
								{
									if (func_781(iVar11, &Var16, 1))
									{
										if (!func_406(Var16, 1))
										{
										}
									}
								}
							}
							iVar9++;
							return 1;
						}
					}
				}
			}
		}
	}

int func_665(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_411(bParam7);
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

int func_666(var uParam0, var uParam1)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_411(0), uParam0, uParam1, 29, 1))
	{
		return 0;
	}
	return 1;
}

int func_667(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return 1;
}

int func_668(int iParam0)
{
	if (!func_287(*iParam0, 0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case -1073808995: /* GXTEntry: "Live Crickets" */
			*iParam0 = -1753819339; /* GXTEntry: "Cricket Bait" */
			return 1;
		case 1903483453: /* GXTEntry: "Live Worms" */
			*iParam0 = -1527293029; /* GXTEntry: "Worm Bait" */
			return 1;
		case -541584777: /* GXTEntry: "Opened Cocaine Gum" */
			*iParam0 = 206762213; /* GXTEntry: "Cocaine Gum" */
			return 1;
		case 998010398: /* GXTEntry: "Opened Chewing Tobacco" */
			*iParam0 = -324053813; /* GXTEntry: "Chewing Tobacco" */
			return 1;
		case -1424823393: /* GXTEntry: "Opened Cigarettes" */
			*iParam0 = -885810591; /* GXTEntry: "Premium Cigarettes" */
			return 1;
		default:
			break;
	}
	return 0;
}

int func_669(int iParam0, var uParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	bool bVar28;
	int iVar29;

	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_398(iParam0, 0, 1) };
	iVar5 = 1728382685; /* GXTEntry: "Right" */
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_399((375 + iVar29), 1);
		if (func_400(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_396(iParam0, &Var6, iVar5);
			if ((bParam2 && bVar28) || !bVar28)
			{
				*uParam1 = iVar5;
				return 1;
			}
		}
		iVar29++;
	}
	return 0;
}

int func_670(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 1 && iVar0 <= 23)
	{
		return 0;
	}
	else if (iVar0 >= 24 && iVar0 <= 34)
	{
		return 1;
	}
	else if (iVar0 >= 35 && iVar0 <= 55)
	{
		return 2;
	}
	return 0;
}

float func_671(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 5f;
		case 2:
			return 20f;
		case 3:
			return 10f;
		case 4:
			return 10f;
		case 5:
			return 20f;
		case 6:
			return 10f;
		case 7:
			return 15f;
		case 8:
			return 15f;
		case 9:
			return 20f;
		case 10:
			return 5f;
		case 11:
			return 5f;
		case 12:
			return 10f;
		case 13:
			return 20f;
		case 14:
			return 30f;
		case 15:
			return 5f;
		case 16:
			return 5f;
		case 17:
			return 3f;
		case 18:
			return 20f;
		case 19:
			return func_782(iParam0);
		case 20:
			return 25f;
		case 21:
			return 50f;
		case 22:
			return 100f;
		case 23:
			return 150f;
		case 24:
			return 20f;
		case 25:
			return 10f;
		case 26:
			return 20f;
		case 27:
			return 20f;
		case 28:
			return 20f;
		case 29:
			return 20f;
		case 30:
			return func_782(iParam0);
		case 31:
			return 25f;
		case 32:
			return 50f;
		case 33:
			return 100f;
		case 34:
			return 150f;
		case 35:
			return 1f;
		case 36:
			return 5f;
		case 37:
			return 1f;
		case 38:
			return 3f;
		case 39:
			return 1f;
		case 40:
			return 1f;
		case 41:
			return 1f;
		case 42:
			return 5f;
		case 43:
			return 10f;
		case 49:
			return 20f;
		case 44:
			return 5f;
		case 45:
			return 5f;
		case 46:
			return 10f;
		case 47:
			return 10f;
		case 48:
			return 5f;
		case 50:
			return func_782(iParam0);
		case 51:
			return 25f;
		case 52:
			return 50f;
		case 53:
			return 100f;
		case 54:
			return 150f;
		case 55:
			return 5f;
		default:
			break;
	}
	return 0f;
}

int func_672(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_205(18);
		case 2:
			return func_205(20);
		case 1:
			return func_205(19);
		default:
			break;
	}
	return 1;
}

void func_673(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (func_23() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_205(31))
	{
		return;
	}
	iVar0 = func_162(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_162(iParam0);
	if (func_783(iParam0) && func_784(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_785(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_786(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_321(func_787(iParam0), 0);
					}
					func_788(iParam0, iVar2, iVar3);
					func_789(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

char* func_674(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_675(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 837097462;
		case 0:
			return 2001720289;
		case 2:
			return 234329797;
		default:
			break;
	}
	return 0;
}

void func_676(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_677(int iParam0, int iParam1)
{
	if (func_23() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_678(int iParam0)
{
	if (func_23() != -1)
	{
		if (func_585(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_585(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_679(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_585(iParam0, 65536) && !func_585(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_585(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_585(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_680()
{
	return Global_1905944->f_5694;
}

int func_681(int iParam0, var uParam1)
{
	if (!func_790(iParam0))
	{
		return 0;
	}
	*uParam1 = Global_1914270[iParam0];
	if (*uParam1 == 0)
	{
		return 0;
	}
	return 1;
}

int func_682()
{
	return func_791(Global_40.f_12018);
}

int func_683()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_521(iVar1);
		if (func_193(iVar2, 1, 0) || func_689(func_688(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_684()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_792(COLLECTION::_0x126CBEBBA46693CF(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_685()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_694(COLLECTION::_0x126CBEBBA46693CF(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_686()
{
	return COLLECTION::_0x3A65F4844913A047(2103522376, 0);
}

int func_687(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588 /* GXTEntry: "Cigarette Cards Famous Gunslingers" */;
		case 1:
			return -1021394391 /* GXTEntry: "Cigarette Cards Artists & Poets" */;
		case 2:
			return -987306668 /* GXTEntry: "Cigarette Cards Vistas of America" */;
		case 3:
			return -1028735103 /* GXTEntry: "Cigarette Cards Gems Of Beauty" */;
		case 4:
			return 515229791 /* GXTEntry: "Cigarette Cards Flora of America" */;
		case 5:
			return -1230863414 /* GXTEntry: "Cigarette Cards Stars of the Stage" */;
		case 6:
			return 232875659 /* GXTEntry: "Cigarette Cards Fauna of North America" */;
		case 7:
			return 1423129537 /* GXTEntry: "Cigarette Cards Marvels of Travel" */;
		case 8:
			return -435742319 /* GXTEntry: "Cigarette Cards The World\'s Champions" */;
		case 9:
			return -1854702679 /* GXTEntry: "Cigarette Cards Amazing Inventions" */;
		case 10:
			return 1265323898 /* GXTEntry: "Cigarette Cards Breeds of Horses" */;
		case 11:
			return -479775696 /* GXTEntry: "Cigarette Cards Prominent Americans" */;
		default:
			break;
	}
	return 0;
}

int func_688(int iParam0)
{
	switch (iParam0)
	{
		case -1230863414: /* GXTEntry: "Cigarette Cards Stars of the Stage" */
			return 1;
		case -1021394391: /* GXTEntry: "Cigarette Cards Artists & Poets" */
			return 8;
		case 232875659: /* GXTEntry: "Cigarette Cards Fauna of North America" */
			return 4;
		case -1028735103: /* GXTEntry: "Cigarette Cards Gems Of Beauty" */
			return 16;
		case 554799588: /* GXTEntry: "Cigarette Cards Famous Gunslingers" */
			return 32;
		case 1265323898: /* GXTEntry: "Cigarette Cards Breeds of Horses" */
			return 64;
		case -1854702679: /* GXTEntry: "Cigarette Cards Amazing Inventions" */
			return 128;
		case -987306668: /* GXTEntry: "Cigarette Cards Vistas of America" */
			return 256;
		case -479775696: /* GXTEntry: "Cigarette Cards Prominent Americans" */
			return 2;
		case 515229791: /* GXTEntry: "Cigarette Cards Flora of America" */
			return 512;
		case -435742319: /* GXTEntry: "Cigarette Cards The World\'s Champions" */
			return 1024;
		case 1423129537: /* GXTEntry: "Cigarette Cards Marvels of Travel" */
			return 2048;
		default:
			break;
	}
	return 0;
}

bool func_689(var uParam0)
{
	return (Global_40.f_12018 && uParam0) != 0;
}

char* func_690(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_DB_DINO_BONES_FOUND";
		case 1:
			return "COL_DB_SEND";
		case 2:
			return "COL_DB_COLLECT";
		default:
			break;
	}
	return "";
}

int func_691(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 6;
		case 2:
			return 7;
		case 3:
			return 8;
		case 4:
			return 9;
		default:
			break;
	}
	return 5;
}

int func_692(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15;
		case 1:
			return 16;
		case 2:
			return 17;
		case 3:
			return 18;
		case 4:
			return 19;
		default:
			break;
	}
	return 15;
}

char* func_693(int iParam0)
{
	switch (iParam0)
	{
		case 281887510: /* GXTEntry: "Little Egret Plume" */
			return "COL_EP_LITTLE_FOUND";
		case -164081697: /* GXTEntry: "Reddish Egret Plume" */
			return "COL_EP_REDDISH_FOUND";
		case -1161319399: /* GXTEntry: "Snowy Egret Plume" */
			return "COL_EP_SNOWY_FOUND";
		case 728781265: /* GXTEntry: "Lady of the Night Orchid" */
			return "COL_RO_LADY_OF_NIGHT_FOUND";
		case -222563712: /* GXTEntry: "Heron Plume" */
			return "COL_HF_FOUND";
		case 1794857344: /* GXTEntry: "Lady Slipper Orchid" */
			return "COL_RO_LADY_SLIPPER_FOUND";
		case 1952409553: /* GXTEntry: "Moccasin Flower Orchid" */
			return "COL_RO_MOCCASIN_FOUND";
		case 2116770557:
			return "COL_GF_FOUND";
		case -651064726: /* GXTEntry: "Acuna\'s Star Orchid" */
			return "COL_RO_ACUNAS_STAR_FOUND";
		case -404270094: /* GXTEntry: "Cigar Orchid" */
			return "COL_RO_CIGAR_FOUND";
		case 2093126853: /* GXTEntry: "Ghost Orchid" */
			return "COL_RO_GHOST_FOUND";
		case 2085530337: /* GXTEntry: "Spoonbill Plume" */
			return "COL_SF_FOUND";
		case -150591160: /* GXTEntry: "Night Scented Orchid" */
			return "COL_RO_NIGHT_SCENTED_FOUND";
		case -323969289: /* GXTEntry: "Rat Tail Orchid" */
			return "COL_RO_RAT_TAIL_FOUND";
		case 1504361882: /* GXTEntry: "Spider Orchid" */
			return "COL_RO_SPIDER_FOUND";
		case -1521783510: /* GXTEntry: "Clamshell Orchid" */
			return "COL_RO_CLAMSHELL_FOUND";
		case 1714875242: /* GXTEntry: "Dragon\'s Mouth Orchid" */
			return "COL_RO_DRAGONS_FOUND";
		case 1019229063: /* GXTEntry: "Queen\'s Orchid" */
			return "COL_RO_QUEENS_FOUND";
		case 927763737: /* GXTEntry: "Sparrow\'s Egg Orchid" */
			return "COL_RO_SPARROWS_FOUND";
		default:
			break;
	}
	return "";
}

bool func_694(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

char* func_695(int iParam0)
{
	switch (iParam0)
	{
		case -1865241121:
			return "PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY";
		case 2117142684:
			return "PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY";
		case -1409326024:
			return "PROVISION_FISH_LAKE_STURGEON_LEGENDARY";
		case -641744968:
			return "PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY";
		case -946988203:
			return "PROVISION_FISH_LONGNOSE_GAR_LEGENDARY";
		case -646136018:
			return "PROVISION_FISH_MUSKIE_LEGENDARY";
		case -955835837:
			return "PROVISION_FISH_PERCH_LEGENDARY";
		case -179276075:
			return "PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY";
		case -492711560:
			return "PROVISION_FISH_ROCK_BASS_LEGENDARY";
		case 1764383959:
			return "PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY";
		case 317501533:
			return "PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY";
		case 817753087:
			return "PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY";
		case 576606016:
			return "PROVISION_FISH_BLUEGILL_LEGENDARY";
		default:
			break;
	}
	return "";
}

char* func_696(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_RC_ROCK_FACES_FOUND";
		case 1:
			return "COL_RC_SEND";
		case 2:
			return "COL_RC_COLLECT";
		default:
			break;
	}
	return "";
}

int func_697(int iParam0)
{
	if (func_793(iParam0) && func_193(iParam0, 1, 0))
	{
		return 1;
	}
	else if (func_794(iParam0) && func_795(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_698(int iParam0)
{
	return (Global_1898164->f_1[iParam0 /*5*/])->f_2;
}

void func_699(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
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

void func_700(int iParam0)
{
	int iVar0;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1955569->f_5.f_1))
	{
		return;
	}
	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1955569->f_5.f_1) > iParam0)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1955569->f_5.f_1, iParam0);
		if (iVar0 == &Global_1955569->f_5.f_2[iParam0 /*36*/])
		{
			return;
		}
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1955569->f_5.f_1, iParam0, "pause_info_panel_list", &(Global_1955569->f_5.f_2[iParam0 /*36*/]));
}

void func_701(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 440, !bParam0);
}

void func_702(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 439, !bParam0);
}

void func_703(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 438, !bParam0);
}

void func_704(bool bParam0)
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

void func_705(bool bParam0)
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

void func_706(bool bParam0)
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

int func_707(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_454(iParam0, 1) /*3*/]);
}

void func_708()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1526891582))
	{
		func_796();
		UNLOCK::_UNLOCK_SET_UNLOCKED(-1526891582, true);
		func_200(joaat("weapon_revolver_cattleman_john"));
		func_377(joaat("weapon_revolver_cattleman_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_cattleman_john"), true, 2, false, false);
		func_200(joaat("weapon_melee_knife_john"));
		func_377(joaat("weapon_melee_knife_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_melee_knife_john"), true, 4, false, false);
	}
}

void func_709(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_797(*iParam0);
	iVar1 = func_798(*iParam0);
	iVar2 = func_799(*iParam0);
	iVar3 = func_800(*iParam0);
	iVar4 = func_801(*iParam0);
	iVar5 = func_802(*iParam0);
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
	iVar6 = func_803(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_803(iVar1, iVar0);
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
	func_804(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_710(int iParam0)
{
	return WEAPON::_IS_WEAPON_BOW(iParam0);
}

int func_711(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_331(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_331(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_331(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_331(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_331(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_331(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

int func_712(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_454(func_805(iParam0), 1);
	if (iVar1 >= 39)
	{
		return 0;
	}
	if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] != 0 && &Global_1946804->f_1497.f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1 /*3*/];
		if (func_334(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return 1;
		}
	}
	*uParam1 = 0;
	return 0;
}

int func_713(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == &Global_1946804->f_57[func_454(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_580(524288))
	{
		switch (iParam1)
		{
			case 673166414:
				iVar0++;
				break;
			case -207860920:
				iVar0++;
				break;
		}
	}
	iVar0 = (iVar0 + PED::_0x31B2E7F2E3C58B89(iParam0, joaat("base"), iParam2, bParam3));
	return iVar0;
}

int func_714(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 968830139 /* GXTEntry: "Legendary Beaver Tooth" */;
		case 1:
			return -649219937 /* GXTEntry: "Legendary Tatanka Bison Horn" */;
		case 2:
			return -858567048 /* GXTEntry: "Legendary Buck Antler" */;
		case 3:
			return -718162726 /* GXTEntry: "Legendary Cougar Fang" */;
		case 4:
			return -1284282080 /* GXTEntry: "Legendary Coyote Fang" */;
		case 5:
			return -725003445 /* GXTEntry: "Legendary Elk Antler" */;
		case 6:
			return -1445630104 /* GXTEntry: "Legendary Fox Claw" */;
		case 7:
			return 580970876 /* GXTEntry: "Lion\'s Paw" */;
		case 8:
			return 967601061 /* GXTEntry: "Legendary Moose Antler" */;
		case 9:
			return 1946030891 /* GXTEntry: "Legendary Panther Eye" */;
		case 10:
			return -1511404982 /* GXTEntry: "Legendary Pronghorn Horn" */;
		case 11:
			return -944465290 /* GXTEntry: "Legendary Ram Horn" */;
		case 12:
			return -1701098855 /* GXTEntry: "Legendary Wolf Heart" */;
		case 13:
			return 425319238 /* GXTEntry: "Legendary Alligator Tooth" */;
		case 14:
			return 363594903 /* GXTEntry: "Vintage Civil War Handcuffs" */;
		case 15:
			return -1217729597 /* GXTEntry: "Gold Jointed Bracelet" */;
		case 16:
			return -1540119664 /* GXTEntry: "Legendary Bear Claw" */;
		case 17:
			return 2100194981 /* GXTEntry: "Quartz Chunk" */;
		case 18:
			return 446659922 /* GXTEntry: "Silver Chain Bracelet" */;
		case 19:
			return -390982951 /* GXTEntry: "Legendary Boar Tusk" */;
		case 20:
			return -1018798851 /* GXTEntry: "Cobalt Petrified Wood" */;
		case 21:
			return -757567246 /* GXTEntry: "Gold Earring" */;
		case 22:
			return -2054602073 /* GXTEntry: "Legendary Bison Horn" */;
		case 23:
			return -378441099 /* GXTEntry: "Abalone Shell Fragment" */;
		case 24:
			return -585121677 /* GXTEntry: "Silver Earring" */;
		case 25:
			return 1566949660 /* GXTEntry: "Old Brass Compass" */;
		default:
			break;
	}
	return 0;
}

int func_715(int iParam0)
{
	return func_806(iParam0, -1);
}

bool func_716(int iParam0, bool bParam1)
{
	return func_807(func_44(), iParam0, bParam1);
}

bool func_717(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

void func_718(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_762(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		MISC::SET_BIT(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			MISC::SET_BIT(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			MISC::SET_BIT(((*Global_1055058)[iVar3 /*116*/])->f_72[iVar1], iVar2);
		}
		MISC::SET_BIT(Global_1058888->f_40567[iVar1], iVar2);
	}
	Global_1934765 = 0;
}

void func_719(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_762(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		MISC::CLEAR_BIT(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			MISC::CLEAR_BIT(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(((*Global_1055058)[iVar3 /*116*/])->f_72[iVar1], iVar2);
		}
	}
	Global_1934765 = 0;
}

void func_720()
{
	func_719(-939420910);
	func_719(-1187950766);
	func_719(356365161);
	func_719(753127042);
	func_719(-2038424081);
	func_719(1884271742);
	func_719(459290420);
}

void func_721()
{
	func_719(704802028);
	func_719(588987611);
	func_719(2008888900);
	func_719(1649996811);
	func_719(227918160);
	func_719(168171957);
	func_719(1193080109);
	func_719(-491981251);
	func_719(-639037538);
	func_719(-618620429);
}

bool func_722(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_723(int iParam0)
{
	switch (iParam0)
	{
		case -1791518714:
			return 1;
		case -2087881550:
			return 2;
		case 1908068621:
			return 4;
		case 1611247019:
			return 8;
		case 1319635688:
			return 16;
		default:
			break;
	}
	return 0;
}

void func_724(var uParam0)
{
	Global_40.f_12018.f_43 = (Global_40.f_12018.f_43 || uParam0);
}

bool func_725(var uParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(uParam0) > 0;
}

int func_726(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1889597427;
		case 1:
			return -1130352927;
		case 2:
			return 389988485;
		case 3:
			return 1780904876;
		case 4:
			return 1367443060;
		case 5:
			return -1506259487;
		case 6:
			return -676503695;
		case 7:
			return 383349088;
		case 8:
			return -1292426046;
		case 9:
			return 1422688607;
		case 10:
			return 1108822547;
		case 11:
			return -338487716;
		case 12:
			return 1742327865;
		case 13:
			return 1600962399;
		case 14:
			return 1849504272;
		case 15:
			return 1672288269;
		case 16:
			return 1250092473;
		case 17:
			return -893163968;
		case 18:
			return -450913544;
		case 19:
			return -1364808185;
		case 20:
			return -1197751823;
		case 21:
			return 304805134;
		case 22:
			return -1505978566;
		case 23:
			return 1145151482;
		case 24:
			return -1176744536;
		case 25:
			return 673166414;
		case 26:
			return -207860920;
		case 27:
			return 99217379;
		case 28:
			return -735900586;
		case 29:
			return -426430150;
		case 30:
			return 1788623170;
		case 31:
			return -1130865351;
		case 32:
			return -1884748965;
		case 33:
			return -1586649372;
		case 34:
			return 788010710;
		case 35:
			return 1958421083;
		case 36:
			return -1944638739;
		case 37:
			return 1900541263;
		case 38:
			return -1489346253;
		case 39:
			return -358215195;
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

void func_727()
{
	int iVar0;

	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(Global_1946804->f_1378.f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1497.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

void func_728(int iParam0)
{
	func_733(iParam0, 8, 6);
}

void func_729(int iParam0)
{
	func_808(&(Global_1946804->f_2589), iParam0);
}

void func_730(int iParam0, int iParam1)
{
	func_809(&(Global_1946804->f_2589), iParam0, iParam1);
}

int func_731(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;

	uVar0 = func_810(0);
	if (iParam2 != 0 && func_811(iParam0, uVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_647(iParam0, func_726(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_732(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;

	bVar6 = func_23() != -1;
	iVar7 = func_810(0);
	if (func_580(32768))
	{
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 39)
	{
		iVar0 = &Global_1946804->f_57.f_430[iVar2];
		if (iVar0 <= -1 || iVar0 >= 39)
		{
		}
		else
		{
			iVar5 = func_726(iVar0, 1);
			if (func_773(iVar5, 8))
			{
			}
			else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == joaat("MISSING") || &uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_773(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_713(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_812(uParam0);
				if (iVar3 > 0)
				{
					if (!func_580(524288))
					{
						func_735(524288);
						iVar1 = (iVar1 - iVar8);
					}
					iVar2 = iVar3;
					while (iVar2 <= 38)
					{
						iVar0 = &Global_1946804->f_57.f_430[iVar2];
						if (iVar0 <= -1 || iVar0 >= 39)
						{
						}
						else
						{
							iVar5 = func_726(iVar0, 1);
							if (func_773(iVar5, 8))
							{
							}
							else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == joaat("MISSING") || &uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_773(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_713(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									if (bParam1)
									{
										func_730(iVar0, iParam2);
									}
								}
								iVar1 = (iVar1 + iVar4);
							}
						}
						iVar2++;
					}
				}
				if ((iVar1 + iVar8) < 31)
				{
					func_738(524288);
				}
			}
		}
	}

void func_733(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_454(iParam0, 1) /*11*/])->f_10 = ((Global_1946804->f_57[func_454(iParam0, 1) /*11*/])->f_10 - ((Global_1946804->f_57[func_454(iParam0, 1) /*11*/])->f_10 && iParam1));
}

void func_734(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_813(&(uParam0->f_2[iVar0 /*2*/]), bParam1, bParam2);
		iVar0++;
	}
	if (func_23() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_814(2, Global_26795.f_776)) || Global_1946804->f_1497 != func_651(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (&Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804->f_1497 = func_651(Global_40.f_7729);
				Global_1946804->f_1378 = func_651(Global_40.f_7729);
				Global_26795.f_776 = 0;
				func_815(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_643(0, 1);
	}
}

void func_735(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_736(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	switch (Param0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
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
		case 20:
		case 21:
		case 22:
		case 26:
			if (Global_1946804->f_850 >= 25)
			{
				return;
			}
			if (func_816(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1946804->f_850)
				{
					iVar1 = ((Global_1946804->f_855 + iVar0) % 25);
					if ((&Global_1946804->f_668[iVar1 /*4*/] == Param0 && (Global_1946804->f_668[iVar1 /*4*/])->f_1 == Param0.f_1) && (Global_1946804->f_668[iVar1 /*4*/])->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_817(Param0);
			*(Global_1946804->f_668[Global_1946804->f_856 /*4*/]) = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_735(8);
			break;
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946804->f_851 >= 25)
			{
				return;
			}
			if (func_816(Param0))
			{
				return;
			}
			func_817(Param0);
			*(Global_1946804->f_567[Global_1946804->f_851 /*4*/]) = { Param0 };
			Global_1946804->f_851++;
			func_735(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_584(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_737(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_8 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3[0] = 0;
	uParam0->f_3[1] = 0;
	uParam0->f_3[2] = 0;
	uParam0->f_3[3] = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	if (uParam0->f_12)
	{
		PED::_0x13E7320C762F0477(uParam0->f_13);
	}
	uParam0->f_12 = 0;
}

void func_738(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_739(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_740(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_816(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1 /*4*/] == Param0 && (Global_1946804->f_769[iVar1 /*4*/])->f_2 == Param0.f_2) && (Global_1946804->f_769[iVar1 /*4*/])->f_3 == Param0.f_3) && (Global_1946804->f_769[iVar1 /*4*/])->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1 /*4*/] == 34 && func_816(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_817(Param0);
	*(Global_1946804->f_769[Global_1946804->f_854 /*4*/]) = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_735(8);
}

int func_741()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_334(iVar1) == -999503751)
		{
			if (func_818() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

int func_742(int iParam0)
{
	if (!func_588(iParam0))
	{
		return 0;
	}
	if (func_652(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

int func_743(int iParam0)
{
	if (!func_588(iParam0))
	{
		return 0;
	}
	if (func_652(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void func_744(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_588(iParam0))
	{
		return;
	}
	if (!func_743(iParam0))
	{
		func_468(iParam0, 2);
		if (bParam2)
		{
			if (!func_33(0, 0, 1))
			{
				func_517(1, 4);
			}
		}
		if ((!func_745() && !bParam1) && !func_33(0, 0, 1))
		{
			func_746(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_ADD", func_819(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

bool func_745()
{
	int iVar0;

	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) == 4);
}

var func_746(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_747(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -2061583405:
			iVar0 = Global_1946804->f_2657.f_26.f_1;
			break;
		case 81053684:
			iVar0 = 1;
			break;
		case -525676072:
			iVar0 = Global_1946804->f_2657.f_26.f_2;
			break;
		case -1719060085:
			iVar0 = 1;
			break;
		case -999503751:
			iVar0 = Global_1946804->f_2657.f_26;
			break;
		case -413129408:
			iVar0 = 1;
			break;
		default:
			return 0;
	}
	switch (iParam0)
	{
		case -999503751:
			if (iVar0 > 0 && !bParam1)
			{
				iVar0 = (iVar0 - 1);
			}
			break;
	}
	return iVar0;
}

void func_748(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_820(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_333(50);
			}
			else
			{
				func_333(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_333(51);
			}
			else
			{
				func_333(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_821(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_360();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_360();
			}
			break;
		case 3:
			func_333(24);
			if (bParam1)
			{
				if (!func_821(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_360();
				}
			}
			break;
	}
}

void func_749(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_822(0))
			{
				iVar0++;
			}
			if (func_822(2))
			{
				iVar0++;
			}
			if (func_822(4))
			{
				iVar0++;
			}
			if (!func_823(16))
			{
				if (iVar0 == 1)
				{
					func_824();
					func_321(456, 1);
					func_825(16);
				}
			}
			if (!func_823(32))
			{
				if (iVar0 >= 3)
				{
					func_824();
					func_321(456, 1);
					func_825(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_822(1))
			{
				iVar0++;
			}
			if (func_822(3))
			{
				iVar0++;
			}
			if (func_822(7))
			{
				iVar0++;
			}
			if (!func_823(1))
			{
				if (iVar0 == 1)
				{
					func_826();
					func_321(457, 1);
					func_825(1);
				}
			}
			if (!func_823(2))
			{
				if (iVar0 >= 3)
				{
					func_826();
					func_321(457, 1);
					func_825(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_822(5))
			{
				iVar0++;
			}
			if (func_822(6))
			{
				iVar0++;
			}
			if (func_822(8))
			{
				iVar0++;
			}
			if (!func_823(4))
			{
				if (iVar0 == 1)
				{
					func_827();
					func_321(455, 1);
					func_825(4);
				}
			}
			if (!func_823(8))
			{
				if (iVar0 >= 3)
				{
					func_827();
					func_321(455, 1);
					func_825(8);
				}
			}
			break;
	}
}

void func_750(var uParam0)
{
	func_594(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_594(uParam0, 617531372);
	}
	else
	{
		func_594(uParam0, 291123060);
	}
}

void func_751(var uParam0, int iParam1, struct<14> Param2)
{
	int iVar0;
	struct<21> Var1;

	if (!func_828(uParam0))
	{
		return;
	}
	if (&Global_1224865 < 20)
	{
		Global_1224865 = &Global_1224865 + 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1224865->f_1[iVar0 /*21*/]) = { *(Global_1224865->f_1[iVar0 + 1 /*21*/]) };
			iVar0++;
		}
	}
	Var1.f_7.f_2.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	*(Global_1224865->f_1[(&Global_1224865 - 1) /*21*/]) = { Var1 };
}

int func_752(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
				Jump @230; //curOff = 56
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
					Jump @230; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @230; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @230; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = iVar1;
					uParam1->f_1 = iVar2;
					uParam1->f_2 = iParam2;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_753(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

void func_754(int iParam0)
{
	struct<2> Var0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_62(1356759001) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

int func_755(int iParam0, int iParam1, int iParam2)
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
	int iVar12;

	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = 281887510; /* GXTEntry: "Little Egret Plume" */
			iVar10 = -164081697; /* GXTEntry: "Reddish Egret Plume" */
			iVar11 = -1161319399; /* GXTEntry: "Snowy Egret Plume" */
			iVar12 = 728781265; /* GXTEntry: "Lady of the Night Orchid" */
			break;
		case 2:
			iVar9 = -222563712; /* GXTEntry: "Heron Plume" */
			iVar10 = 1794857344; /* GXTEntry: "Lady Slipper Orchid" */
			iVar11 = 1952409553; /* GXTEntry: "Moccasin Flower Orchid" */
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726; /* GXTEntry: "Acuna\'s Star Orchid" */
			iVar11 = -404270094; /* GXTEntry: "Cigar Orchid" */
			iVar12 = 2093126853; /* GXTEntry: "Ghost Orchid" */
			break;
		case 8:
			iVar9 = 2085530337; /* GXTEntry: "Spoonbill Plume" */
			iVar10 = -150591160; /* GXTEntry: "Night Scented Orchid" */
			iVar11 = -323969289; /* GXTEntry: "Rat Tail Orchid" */
			iVar12 = 1504361882; /* GXTEntry: "Spider Orchid" */
			break;
		case 16:
			iVar9 = -1521783510; /* GXTEntry: "Clamshell Orchid" */
			iVar10 = 1714875242; /* GXTEntry: "Dragon\'s Mouth Orchid" */
			iVar11 = 1019229063; /* GXTEntry: "Queen\'s Orchid" */
			iVar12 = 927763737; /* GXTEntry: "Sparrow\'s Egg Orchid" */
			break;
	}
	iVar1 = func_564(iVar9);
	iVar2 = func_564(iVar10);
	iVar3 = func_564(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_564(iVar12);
	}
	iVar5 = func_565(iVar9);
	iVar6 = func_565(iVar10);
	iVar7 = func_565(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_565(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

struct<28> func_756(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_411(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_760(&Var28) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_757(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 28))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_829(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_829(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 28))
	{
		func_829(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<17> func_758(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_411(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_760(&Var17) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_759(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 17))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_829(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_829(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17))
	{
		func_829(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<16> func_760(var uParam0)
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
	return Var0;
}

int func_761(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 16))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_829(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_829(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16))
	{
		func_829(iVar0, 1);
		return iVar0;
	}
	return -1;
}

int func_762(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
		case -2106214197:
			return 104;
		case -2101264851:
			return 195;
		case -2073072369:
			return 59;
		case -2069570138:
			return 25;
		case -2066272360:
			return 357;
		case -2058120606:
			return 197;
		case -2038424081:
			return 49;
		case -2034257789:
			return 92;
		case -2022369555:
			return 265;
		case -2021582629:
			return 112;
		case -2020023971:
			return 278;
		case -1957523409:
			return 208;
		case -1952856164:
			return 165;
		case -1949204933:
			return 276;
		case -1925798111:
			return 41;
		case -1861414976:
			return 353;
		case -1852605133:
			return 10;
		case -1847672446:
			return 376;
		case -1840704908:
			return 289;
		case -1838712533:
			return 26;
		case -1838352012:
			return 57;
		case -1835851517:
			return 56;
		case -1831552326:
			return 123;
		case -1825294305:
			return 266;
		case -1824738758:
			return 277;
		case -1818850842:
			return 253;
		case -1799960545:
			return 257;
		case -1764522338:
			return 372;
		case -1763509974:
			return 141;
		case -1741667789:
			return 64;
		case -1738165526:
			return 3;
		case -1718674470:
			return 23;
		case -1717960576:
			return 61;
		case -1711895055:
			return 13;
		case -1706438978:
			return 233;
		case -1700452710:
			return 53;
		case -1674179981:
			return 55;
		case -1666278201:
			return 33;
		case -1612662716:
			return 201;
		case -1610966108:
			return 322;
		case -1582926490:
			return 146;
		case -1579419919:
			return 147;
		case -1558439474:
			return 301;
		case -1556423728:
			return 218;
		case -1532284567:
			return 116;
		case -1530132748:
			return 311;
		case -1524512402:
			return 209;
		case -1523910291:
			return 155;
		case -1455998786:
			return 338;
		case -1447311849:
			return 215;
		case -1436021162:
			return 172;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1419919497:
			return 22;
		case -1414537028:
			return 73;
		case -1405998267:
			return 105;
		case -1344601768:
			return 314;
		case -1340339190:
			return 331;
		case -1329135070:
			return 140;
		case -1318987693:
			return 222;
		case -1311865656:
			return 37;
		case -1296807958:
			return 320;
		case -1283202000:
			return 321;
		case -1282804314:
			return 270;
		case -1278074582:
			return 171;
		case -1271608261:
			return 98;
		case -1257057567:
			return 21;
		case -1241340344:
			return 300;
		case -1236261996:
			return 235;
		case -1232809834:
			return 113;
		case -1230112817:
			return 170;
		case -1223121209:
			return 126;
		case -1215445344:
			return 131;
		case -1209597203:
			return 333;
		case -1206122982:
			return 156;
		case -1187950766:
			return 45;
		case -1179948750:
			return 136;
		case -1170496998:
			return 46;
		case -1164215952:
			return 234;
		case -1151084372:
			return 124;
		case -1145519186:
			return 100;
		case -1124061431:
			return 242;
		case -1123615607:
			return 29;
		case -1080627546:
			return 378;
		case -1077783786:
			return 194;
		case -1063147448:
			return 151;
		case -1062490780:
			return 79;
		case -1060078174:
			return 239;
		case -1056767524:
			return 176;
		case -1053549743:
			return 58;
		case -1029225159:
			return 106;
		case -1014145132:
			return 288;
		case -978957786:
			return 251;
		case -959357075:
			return 36;
		case -950054349:
			return 152;
		case -939420910:
			return 44;
		case -939114198:
			return 221;
		case -919512195:
			return 40;
		case -911126844:
			return 336;
		case -897750037:
			return 334;
		case -895073533:
			return 356;
		case -879507474:
			return 236;
		case -868076593:
			return 84;
		case -857964358:
			return 83;
		case -853383233:
			return 65;
		case -851626677:
			return 339;
		case -828139293:
			return 260;
		case -811637947:
			return 245;
		case -796902762:
			return 88;
		case -792853067:
			return 254;
		case -789397228:
			return 262;
		case -785605431:
			return 250;
		case -781631220:
			return 345;
		case -764163380:
			return 228;
		case -748969569:
			return 78;
		case -741351766:
			return 60;
		case -736853952:
			return 366;
		case -734416508:
			return 340;
		case -699277634:
			return 4;
		case -693828600:
			return 323;
		case -683458244:
			return 80;
		case -666014935:
			return 157;
		case -664512648:
			return 67;
		case -664252410:
			return 191;
		case -644722288:
			return 261;
		case -640663440:
			return 214;
		case -639037538:
			return 185;
		case -628542779:
			return 71;
		case -622554983:
			return 370;
		case -618620429:
			return 187;
		case -545450213:
			return 377;
		case -538889627:
			return 175;
		case -538880323:
			return 174;
		case -534215902:
			return 130;
		case -524787708:
			return 352;
		case -524145696:
			return 117;
		case -523522517:
			return 364;
		case -515561750:
			return 238;
		case -503955743:
			return 249;
		case -502473159:
			return 343;
		case -502324015:
			return 8;
		case -491981251:
			return 186;
		case -468693731:
			return 111;
		case -464836488:
			return 268;
		case -460024530:
			return 316;
		case -434590080:
			return 225;
		case -404698347:
			return 205;
		case -397760715:
			return 143;
		case -389056691:
			return 272;
		case -360036154:
			return 368;
		case -356975260:
			return 103;
		case -355531636:
			return 337;
		case -351362068:
			return 220;
		case -350863510:
			return 162;
		case -349064220:
			return 362;
		case -334729750:
			return 69;
		case -333135263:
			return 361;
		case -330120947:
			return 360;
		case -306246697:
			return 375;
		case -299522880:
			return 213;
		case -270094635:
			return 267;
		case -261141318:
			return 30;
		case -259123672:
			return 244;
		case -254562075:
			return 132;
		case -238080464:
			return 121;
		case -233743613:
			return 273;
		case -223469678:
			return 204;
		case -220282381:
			return 139;
		case -191424539:
			return 149;
		case -182889087:
			return 177;
		case -154581735:
			return 309;
		case -150493654:
			return 97;
		case -144653976:
			return 219;
		case -129643890:
			return 11;
		case -108780030:
			return 317;
		case -108307814:
			return 28;
		case -99303535:
			return 167;
		case -86199844:
			return 145;
		case -80522843:
			return 154;
		case -76237062:
			return 373;
		case -75024673:
			return 258;
		case -63926460:
			return 89;
		case -61411516:
			return 325;
		case -35658630:
			return 24;
		case -25901845:
			return 290;
		case -9438024:
			return 129;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 153;
		case 8924991:
			return 297;
		case 26054262:
			return 248;
		case 26245360:
			return 237;
		case 38162571:
			return 74;
		case 52706132:
			return 243;
		case 54073871:
			return 76;
		case 74872959:
			return 348;
		case 93964309:
			return 358;
		case 94263042:
			return 291;
		case 106479759:
			return 101;
		case 141950038:
			return 114;
		case 153152452:
			return 86;
		case 168171957:
			return 183;
		case 171107021:
			return 381;
		case 171499483:
			return 283;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 241;
		case 210001842:
			return 62;
		case 224551212:
			return 142;
		case 227918160:
			return 182;
		case 229371495:
			return 344;
		case 235928616:
			return 286;
		case 249726958:
			return 164;
		case 269047710:
			return 54;
		case 273461605:
			return 81;
		case 280705402:
			return 95;
		case 282809459:
			return 119;
		case 299694527:
			return 275;
		case 300221584:
			return 138;
		case 302205488:
			return 216;
		case 311708813:
			return 198;
		case 320943355:
			return 133;
		case 330026330:
			return 66;
		case 345808947:
			return 287;
		case 356365161:
			return 47;
		case 371850993:
			return 281;
		case 373691918:
			return 188;
		case 374115931:
			return 90;
		case 405586984:
			return 34;
		case 407136781:
			return 173;
		case 409602249:
			return 293;
		case 417081698:
			return 17;
		case 417525590:
			return 303;
		case 420709909:
			return 42;
		case 426191476:
			return 15;
		case 434558613:
			return 199;
		case 439465264:
			return 108;
		case 440043364:
			return 31;
		case 442317566:
			return 302;
		case 449774763:
			return 227;
		case 459290420:
			return 52;
		case 469053995:
			return 231;
		case 473295046:
			return 2;
		case 476714362:
			return 232;
		case 478884033:
			return 148;
		case 479419429:
			return 305;
		case 509781469:
			return 350;
		case 514932331:
			return 246;
		case 522677506:
			return 279;
		case 526003171:
			return 355;
		case 527226204:
			return 159;
		case 544152906:
			return 115;
		case 559573222:
			return 252;
		case 582380806:
			return 326;
		case 588987611:
			return 179;
		case 618699440:
			return 77;
		case 630808005:
			return 128;
		case 651395116:
			return 294;
		case 657241756:
			return 189;
		case 664571177:
			return 312;
		case 665676602:
			return 296;
		case 682839815:
			return 327;
		case 689024866:
			return 134;
		case 689930684:
			return 207;
		case 704802028:
			return 178;
		case 723021499:
			return 264;
		case 747514327:
			return 354;
		case 753127042:
			return 48;
		case 757752139:
			return 109;
		case 784360470:
			return 330;
		case 791041526:
			return 18;
		case 817925178:
			return 240;
		case 868326136:
			return 285;
		case 885203519:
			return 379;
		case 885378256:
			return 351;
		case 929582877:
			return 335;
		case 931649776:
			return 224;
		case 932909855:
			return 298;
		case 945612176:
			return 247;
		case 965986934:
			return 19;
		case 976539083:
			return 310;
		case 1010885152:
			return 7;
		case 1015669983:
			return 122;
		case 1050128548:
			return 284;
		case 1064154891:
			return 110;
		case 1067254646:
			return 319;
		case 1074873669:
			return 144;
		case 1140218954:
			return 27;
		case 1151197909:
			return 256;
		case 1159471771:
			return 329;
		case 1160698568:
			return 135;
		case 1164928979:
			return 158;
		case 1166612791:
			return 347;
		case 1167397384:
			return 307;
		case 1177464213:
			return 38;
		case 1186594126:
			return 230;
		case 1193080109:
			return 184;
		case 1203043430:
			return 274;
		case 1205826474:
			return 85;
		case 1207048789:
			return 169;
		case 1213993593:
			return 160;
		case 1216784232:
			return 269;
		case 1221801385:
			return 374;
		case 1238086793:
			return 313;
		case 1250636944:
			return 259;
		case 1302228510:
			return 315;
		case 1306158345:
			return 202;
		case 1321892118:
			return 324;
		case 1350371763:
			return 20;
		case 1350391819:
			return 75;
		case 1352699670:
			return 271;
		case 1358491857:
			return 263;
		case 1360745816:
			return 82;
		case 1376646519:
			return 223;
		case 1399676951:
			return 210;
		case 1410198831:
			return 217;
		case 1433244935:
			return 166;
		case 1441416901:
			return 211;
		case 1446719356:
			return 380;
		case 1453909576:
			return 125;
		case 1466547629:
			return 120;
		case 1478132521:
			return 367;
		case 1485195808:
			return 50;
		case 1485494263:
			return 102;
		case 1488286867:
			return 295;
		case 1488453464:
			return 212;
		case 1497516462:
			return 5;
		case 1500064347:
			return 72;
		case 1509509592:
			return 35;
		case 1512816328:
			return 168;
		case 1517904467:
			return 206;
		case 1522511407:
			return 280;
		case 1549124796:
			return 342;
		case 1557082963:
			return 163;
		case 1582370975:
			return 359;
		case 1583012985:
			return 304;
		case 1591451572:
			return 365;
		case 1607768502:
			return 9;
		case 1609506757:
			return 107;
		case 1626481264:
			return 118;
		case 1643531967:
			return 127;
		case 1649996811:
			return 181;
		case 1660024373:
			return 150;
		case 1665756137:
			return 93;
		case 1672143046:
			return 383;
		case 1691618738:
			return 68;
		case 1698972798:
			return 318;
		case 1703398561:
			return 332;
		case 1703426636:
			return 43;
		case 1708045337:
			return 346;
		case 1713221411:
			return 137;
		case 1743048395:
			return 226;
		case 1744443559:
			return 349;
		case 1766284049:
			return 94;
		case 1776302352:
			return 363;
		case 1804403874:
			return 382;
		case 1822001510:
			return 200;
		case 1846061697:
			return 99;
		case 1850082804:
			return 196;
		case 1867912207:
			return 70;
		case 1884271742:
			return 51;
		case 1926308480:
			return 96;
		case 1932172605:
			return 328;
		case 1944170089:
			return 161;
		case 1947931439:
			return 229;
		case 1952610440:
			return 203;
		case 1954026328:
			return 371;
		case 1982676972:
			return 91;
		case 2008888900:
			return 180;
		case 2016141805:
			return 6;
		case 2019386373:
			return 190;
		case 2024121624:
			return 193;
		case 2024383613:
			return 369;
		case 2024769126:
			return 308;
		case 2037589949:
			return 63;
		case 2051822093:
			return 299;
		case 2077022393:
			return 306;
		case 2080210939:
			return 282;
		case 2091701359:
			return 39;
		case 2109952320:
			return 192;
		case 2113625508:
			return 341;
		case 2127577956:
			return 255;
		case 2136753624:
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

int func_763(int iParam0)
{
	switch (iParam0)
	{
		case -2061583405:
			return 2;
		case -1719060085:
			return 16;
		case -999503751:
			return 1;
		case -525676072:
			return 4;
		case 81053684:
			return 8;
		case -413129408:
			return 32;
		default:
			break;
	}
	return 0;
}

void func_764(var uParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && uParam0));
}

void func_765(var uParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || uParam0);
}

void func_766(int iParam0, int iParam1)
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
			func_830((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_830(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_15(&(Global_1898164->f_1[0 /*5*/])))
	{
		func_415(&(Global_1898164->f_1[0 /*5*/]), 3);
	}
}

int func_767(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = iParam0;
	while (iVar0 < Global_1058888->f_40501)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1058888->f_40501.f_1[iVar0 /*2*/]) = { *(Global_1058888->f_40501.f_1[iVar0 + 1 /*2*/]) };
		}
		iVar0++;
	}
	Var1 = -1;
	if (Global_1058888->f_40501 < 32)
	{
		*(Global_1058888->f_40501.f_1[Global_1058888->f_40501 /*2*/]) = { Var1 };
	}
	Global_1058888->f_40501 = (Global_1058888->f_40501 - 1);
	if (Global_1058888->f_40501 < 0)
	{
		Global_1058888->f_40501 = 0;
	}
	return 1;
}

int func_768(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = (Global_1058888->f_40501 - 1);
	Var1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1058888->f_40501.f_1[iVar0 + 1 /*2*/]) = { *(Global_1058888->f_40501.f_1[iVar0 /*2*/]) };
		}
		iVar0 = (iVar0 - 1);
	}
	*(Global_1058888->f_40501.f_1[iParam0 /*2*/]) = { Var1 };
	Global_1058888->f_40501++;
	if (Global_1058888->f_40501 > 32)
	{
		Global_1058888->f_40501 = 32;
	}
	return 1;
}

void func_769(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = func_831(iParam1);
	func_832(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_833(&(uParam0->f_26), iVar1);
		if (func_834(uParam0->f_26, &iVar0))
		{
			func_835(iVar0, iVar1);
		}
	}
}

int func_770(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_398(iParam0, 0, 0) };
	Var5 = { func_401(iParam0, Var0, Var0.f_4, 0) };
	if (func_472(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x9A113C660AEA3832(func_411(0), &Var5, iParam1);
	return 1;
}

void func_771(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

bool func_772(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[iParam0 /*11*/])->f_9 && iParam1) != 0;
}

bool func_773(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_454(iParam0, 1) /*11*/])->f_10 && iParam1) != 0;
}

void func_774(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_454(iParam0, 1) /*11*/])->f_10 = ((Global_1946804->f_57[func_454(iParam0, 1) /*11*/])->f_10 || iParam1);
}

void func_775(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	if (bParam4)
	{
		iVar0 = 3;
	}
	iVar1 = 12;
	iVar2 = 20;
	iVar3 = 16;
	if ((uParam0->f_1[iVar3 /*3*/])->f_1 == 1216705912 || (uParam0->f_1[iVar3 /*3*/])->f_1 == 654181853)
	{
		if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
		{
			(uParam0->f_1[iVar3 /*3*/])->f_1 = 1334603721;
		}
		else
		{
			(uParam0->f_1[iVar3 /*3*/])->f_1 = -1539589426;
			(uParam0->f_1[iVar1 /*3*/])->f_1 = joaat("base");
		}
		if (bParam2)
		{
			func_730(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_730(iVar3, iVar0);
		}
	}
	if ((uParam0->f_1[iVar2 /*3*/])->f_1 == -1333118809 || (uParam0->f_1[iVar2 /*3*/])->f_1 == joaat("custom"))
	{
		(uParam0->f_1[iVar2 /*3*/])->f_1 = joaat("base");
		if (bParam3)
		{
			func_730(iVar2, iVar0);
		}
	}
}

char* func_776()
{
	return "MECH_INVENTORY@CLOTHING@OUTFIT_CHANGE";
}

int func_777(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (!func_836(uParam0, iParam3, iParam2) && !func_456(uParam0, iParam2, bParam1, 0, bParam4, 0, 0))
	{
		return 0;
	}
	iVar0 = 10;
	if (func_580(32768))
	{
		if (!*bParam1 || (*bParam1 && &uParam0->f_1[iVar0 /*3*/] != &Global_1946804->f_57[iVar0 /*11*/]))
		{
			func_728(1108822547);
		}
		else
		{
			func_837(1108822547);
		}
	}
	func_732(uParam0, 0, 0);
	func_771(iParam5);
	return 1;
}

void func_778(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	if (bParam2)
	{
		if ((iParam0 == -1 || iParam0 == func_649()) || bParam5)
		{
			func_838();
		}
	}
	if (func_23() == -1)
	{
		iVar0 = Global_40.f_7729;
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "playerChangeOutfits") && DECORATOR::DECOR_GET_BOOL(Global_35, "playerChangeOutfits"))
		{
			iVar0 = &Global_1905941;
		}
		if ((bParam4 && iVar0 > 5) && func_839(Global_1946804->f_1497))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (&Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				iVar0 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804->f_1497 = func_651(Global_40.f_7729);
				Global_1946804->f_1378 = func_651(Global_40.f_7729);
				iParam3 = 1;
			}
		}
		iVar1 = func_656(iVar0);
	}
	if (iParam3 && iVar1)
	{
		func_815(iParam0, 0, 6);
	}
	if (bParam1)
	{
		func_643(0, 1);
	}
	func_771(0);
}

void func_779(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	bVar4 = func_23() != -1;
	Global_1946804->f_857 = 0;
	if (iParam3 == -1 && bParam6)
	{
		PED::_0x0BFA1BD465CDFEFD(iParam1);
		if (!bVar4)
		{
			if (Global_1347477->f_189 != 0)
			{
				PED::_SET_PED_BODY_COMPONENT(iParam1, Global_1347477->f_189);
			}
			if ((Global_1946804->f_1 == -2125499975 || Global_1946804->f_1 == -449205311) && Global_1347477->f_190 != 0)
			{
				PED::_SET_PED_BODY_COMPONENT(iParam1, Global_1347477->f_190);
			}
			func_735(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_840(iParam1, 29, bVar4, 1, 0);
			func_840(iParam1, 31, bVar4, 1, 0);
			func_840(iParam1, 30, bVar4, 1, 0);
			func_840(iParam1, 22, bVar4, 1, 0);
			func_840(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_580(32768) && func_773(1108822547, 8)) && func_772(10, iParam3))
	{
		func_841(iParam1, 0, 1);
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar1 = &Global_1946804->f_57.f_430[iVar0];
		if (iVar1 <= -1 || iVar1 >= 39)
		{
		}
		else
		{
			iVar3 = func_726(iVar1, 1);
			if (func_773(iVar3, 8))
			{
			}
			else if (&(Global_1946804->f_57[iVar1 /*11*/])->f_2[0] == joaat("MISSING") || &uParam0->f_1[iVar1 /*3*/] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1 /*3*/];
				if (!func_772(iVar1, iParam3))
				{
				}
				else if ((func_773(iVar3, 6) || &uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/]) || (uParam0->f_1[iVar1 /*3*/])->f_1 == 289238755)
				{
					if (!func_773(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_840(iParam1, iVar1, bVar4, 1, 0);
						}
						if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 289238755)
						{
							(Global_1946804->f_2456[iVar1 /*2*/])->f_1 = 289238755;
						}
						func_774(iVar3, 1, 6);
					}
				}
				else
				{
					if (!bParam6)
					{
						if ((!bParam2 && &uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_2456[iVar1 /*2*/]) && (uParam0->f_1[iVar1 /*3*/])->f_1 == (Global_1946804->f_2456[iVar1 /*2*/])->f_1)
						{
						}
						else
						{
							if ((Global_1946804->f_57[iVar1 /*11*/])->f_1 > 1)
							{
								func_840(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1 /*3*/]));
							}
							Global_1946804->f_2456[iVar1 /*2*/] = &uParam0->f_1[iVar1 /*3*/];
							(Global_1946804->f_2456[iVar1 /*2*/])->f_1 = (uParam0->f_1[iVar1 /*3*/])->f_1;
							if (func_773(iVar3, 1))
							{
								func_733(iVar3, 1, 6);
							}
							Global_1946804->f_857++;
							PED::_SET_PED_COMPONENT_ENABLED(iParam1, iVar2, false, bVar4, false);
							if ((uParam0->f_1[iVar1 /*3*/])->f_1 != 0)
							{
								PED::_0x66B957AAC2EAAEAB(iParam1, iVar2, (uParam0->f_1[iVar1 /*3*/])->f_1, 0, bVar4, 1);
							}
						}
						iVar0++;
						if (Global_1946804->f_857 <= 0)
						{
							return;
						}
						if (bParam4)
						{
							PED::_0xAAB86462966168CE(iParam1, bVar4);
							PED::_UPDATE_PED_VARIATION(iParam1, 0, 1, 1, 1, iParam5);
						}
					}
				}
			}
		}
	}

int func_780(int iParam0)
{
	if ((((iParam0 == 263080063 || iParam0 == -34331381) || iParam0 == -993578318) || iParam0 == 579268144) || iParam0 == 1104489688)
	{
		return 1;
	}
	return 0;
}

int func_781(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	struct<4> Var16;
	int iVar30;

	if (iParam0 == 0)
	{
		return 0;
	}
	Var2 = { func_608(0, iParam0, -1591664384, -1591664384, 0, 0) };
	func_610(&Var2, func_285());
	if (func_611(&Var2, &iVar0, &iVar1, 0))
	{
		Var16.f_9 = -1591664384;
		iVar30 = 0;
		while (iVar30 < iVar1)
		{
			if (func_395(&Var16, iVar30, iVar0, iVar1))
			{
				if (func_287(Var16.f_4, 0) && !Var16.f_10)
				{
					if (bParam2 && func_780(Var16.f_4))
					{
					}
					else
					{
						*uParam1 = { Var16 };
						func_397(iVar0);
						return 1;
					}
				}
			}
			iVar30++;
		}
		func_397(iVar0);
	}
	return 0;
}

float func_782(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar4 = func_670(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = &Global_40.f_11095.f_11[iVar4];
			iVar5 = func_279(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_427(iVar6) - func_427(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_783(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 4:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_784(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 13:
			return 1;
		case 14:
			return 1;
		case 16:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_785(float fParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_279(fParam0);
	fVar1 = BUILTIN::TO_FLOAT(func_427(iVar0));
	fVar2 = BUILTIN::TO_FLOAT(func_427(iVar0 + 1));
	fVar3 = (fVar2 - fVar1);
	iVar4 = BUILTIN::FLOOR((((fParam0 - fVar1) / fVar3) * 4f));
	iVar5 = BUILTIN::FLOOR((((fParam1 - fVar1) / fVar3) * 4f));
	if (iVar4 == iVar5)
	{
		return 0;
	}
	if (iVar5 >= 4 || iVar5 < 0)
	{
		return 0;
	}
	return iVar5;
}

int func_786(int iParam0)
{
	int iVar0;

	if (func_842(iParam0, &iVar0))
	{
		return func_427(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_843())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_843())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_843())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 4:
			return 0;
	}
	return 0;
}

int func_787(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 246;
		case 2:
			return 247;
		case 1:
			return 248;
		default:
			break;
	}
	return -1;
}

void func_788(int iParam0, int iParam1, int iParam2)
{
	char* sVar0;
	char* sVar1;
	bool bVar2;
	int iVar3;
	char* sVar4;
	char* sVar5;
	char* sVar6;
	char* sVar7;
	var uVar8;
	int iVar9;
	struct<6> Var10;

	if (iParam1 == 0)
	{
		return;
	}
	iVar3 = iParam1 + 1;
	if (iParam2 != 0)
	{
		sVar0 = "RPG_LEVEL_PROGRESS_TOAST";
		sVar1 = MISC::_CREATE_VAR_STRING(2, "RPG_LEVEL_PROGRESS_BODY", iParam2 * 25, iVar3 + 1);
	}
	else
	{
		sVar0 = "RPG_LEVEL_INCREASED_TOAST";
		sVar1 = MISC::_CREATE_VAR_STRING(2, "RPG_LEVEL_INCREASED_BODY", iVar3);
		bVar2 = true;
	}
	iVar3 = (iVar3 + func_844(iParam0));
	sVar4 = func_429(func_428(iVar3, iParam2));
	sVar6 = func_845(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = MISC::_CREATE_VAR_STRING(10, sVar0, func_426(iParam0));
	uVar8 = func_846(iParam0);
	iVar9 = MISC::GET_HASH_KEY(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = uVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_847(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&Var10);
	}
	func_530(sVar7, sVar1, uVar8, iVar9, -479097442, "INPUT_FEED_INTERACT_GENERIC", func_848(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_789(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

bool func_790(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_791(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_792(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

int func_793(int iParam0)
{
	switch (iParam0)
	{
		case 444160793: /* GXTEntry: "Perfect Squirrel Carcass" */
			return 1;
		case -1969404854: /* GXTEntry: "Perfect Cardinal Carcass" */
			return 1;
		case 1761263432: /* GXTEntry: "Perfect Rat Carcass" */
			return 1;
		case -843795569: /* GXTEntry: "Perfect Woodpecker Carcass" */
			return 1;
		case -832850511: /* GXTEntry: "Perfect Chipmunk Carcass" */
			return 1;
		case -1464585113: /* GXTEntry: "Perfect Oriole Carcass" */
			return 1;
		case -1290897778: /* GXTEntry: "Perfect Robin Carcass" */
			return 1;
		case -100913452: /* GXTEntry: "Perfect Songbird Carcass" */
			return 1;
		case 313332607: /* GXTEntry: "Perfect Sparrow Carcass" */
			return 1;
		case -124539232: /* GXTEntry: "Perfect Toad Carcass" */
			return 1;
		case 59384454: /* GXTEntry: "Perfect Crow Carcass" */
			return 1;
		case 905173572: /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
			return 1;
		case 1432949803: /* GXTEntry: "Perfect Bat Carcass" */
			return 1;
		case -983831788: /* GXTEntry: "Perfect Blue Jay Carcass" */
			return 1;
		case -1882344824: /* GXTEntry: "Perfect Bullfrog Carcass" */
			return 1;
		default:
			break;
	}
	return 0;
}

int func_794(int iParam0)
{
	switch (iParam0)
	{
		case -1866642239: /* GXTEntry: "Perfect Rabbit Carcass" */
			return 1;
		case -935543049: /* GXTEntry: "Perfect Opossum Carcass" */
			return 1;
		case 102446365: /* GXTEntry: "Perfect Skunk Carcass" */
			return 1;
		case 924882045: /* GXTEntry: "Perfect Beaver Carcass" */
			return 1;
		default:
			break;
	}
	return 0;
}

int func_795(int iParam0)
{
	int iVar0;
	struct<11> Var1;
	int iVar95;

	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_849(&iVar0, 0, iVar95, &Var1) && !func_849(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(Var1))
		{
			func_850(iVar0, &Var1);
			if (func_287(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_796()
{
	var uVar0;
	struct<4> Var30;

	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	uVar0 = 29;
	func_851(Global_35, &uVar0);
	Var30 = { func_440(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_852(0);
	func_853(7);
	func_854(-1623728698 /* GXTEntry: "Bandana" */, 1, 1, 0);
	if (func_450() == 1160113249)
	{
		func_854(-763730846 /* GXTEntry: "John\'s Classic Hat" */, 1, 1, 1);
		func_854(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	func_855(Global_35, &uVar0);
}

int func_797(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_856(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_798(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_799(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_800(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_801(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_802(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_803(int iParam0, int iParam1)
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

void func_804(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_857(iParam0, iParam6);
	func_858(iParam0, iParam5);
	func_859(iParam0, iParam4);
	func_860(iParam0, iParam3);
	func_861(iParam0, iParam2);
	func_862(iParam0, iParam1);
}

int func_805(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_576(iVar0);
}

int func_806(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;

	if (iParam1 < 0)
	{
		iParam1 = func_411(0);
	}
	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_857(&uVar6, iVar0);
	func_858(&uVar6, iVar1);
	func_859(&uVar6, iVar2);
	func_860(&uVar6, iVar3);
	func_861(&uVar6, iVar4);
	func_862(&uVar6, iVar5);
	return uVar6;
}

bool func_807(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_863(iParam1) || !func_863(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_808(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var4;

	Var2 = 39;
	Var4 = 10;
	Var4.f_1 = 39;
	Var4.f_1.f_2 = 39;
	Var4.f_1.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iVar0 < *uParam0)
		{
			if ((func_864(uParam0->f_2[iVar0 /*2*/], 2) || &uParam0->f_2[iVar0 /*2*/] == iParam1) || &uParam0->f_2[iVar0 /*2*/] == 39)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			else
			{
				if (func_864(uParam0->f_2[iVar0 /*2*/], 1))
				{
					func_865(uParam0->f_2[iVar0 /*2*/], 2, 6);
				}
				*(Var4[iVar1 /*2*/]) = { *(uParam0->f_2[iVar0 /*2*/]) };
				iVar1++;
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { *(Var4[iVar0 /*2*/]) };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}

void func_809(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_866(uParam0, 1))
	{
		func_867(uParam0, 1);
	}
	(uParam0->f_2[*uParam0 /*2*/])->f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

int func_810(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_450();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_811(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < PED::_0xFFCC2DB2D9953401(iParam0, uParam1, bParam3))
	{
		if (PED::_0x6243635AF2F1B826(iParam0, iVar0, uParam1, bParam3) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_812(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 25;
	iVar1 = 0;
	if (&uParam0->f_1[iVar0 /*3*/] != &Global_1946804->f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	iVar0 = 26;
	if (&uParam0->f_1[iVar0 /*3*/] != &Global_1946804->f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	return iVar1;
}

void func_813(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*(Global_1946804->f_1497.f_1[iParam0 /*3*/]) = { *(Global_1946804->f_1378.f_1[iParam0 /*3*/]) };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_23() == -1)
	{
		func_462(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_26795.f_776);
	}
	else
	{
		func_650(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_36637.f_45.f_350.f_1011);
	}
}

int func_814(int iParam0, int iParam1)
{
	if (func_23() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			return (Global_26795.f_26[iParam1 /*120*/] && iParam0) != 0;
		}
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		return (Global_36637.f_45.f_350.f_26[iParam1 /*120*/] && iParam0) != 0;
	}
	return 0;
}

void func_815(int iParam0, bool bParam1, int iParam2)
{
	func_465(&(Global_1946804->f_1378), iParam0);
	func_466(2, iParam0, 6);
	if (bParam1)
	{
		func_643(0, 1);
	}
}

bool func_816(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_817(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

int func_818()
{
	return Global_1946804->f_1497;
}

char* func_819(int iParam0)
{
	int iVar0;

	iVar0 = func_651(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_172(iVar0);
}

int func_820(int iParam0)
{
	int iVar0;

	if (func_868(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_869(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_870(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_871(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

int func_821(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_193(func_872(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 1)
	{
		return 1;
	}
	return 0;
}

int func_822(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_193(func_873(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 4)
	{
		return 1;
	}
	return 0;
}

bool func_823(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_824()
{
	int iVar0;

	if (func_23() != -1)
	{
		return;
	}
	func_377(1654063339, 1, 752097756);
	iVar0 = func_162(1);
	func_788(1, iVar0, 0);
}

void func_825(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_826()
{
	int iVar0;

	if (func_23() != -1)
	{
		return;
	}
	func_377(1623931083, 1, 752097756);
	iVar0 = func_162(2);
	func_788(2, iVar0, 0);
}

void func_827()
{
	int iVar0;

	if (func_23() != -1)
	{
		return;
	}
	func_377(-1845241476, 1, 752097756);
	iVar0 = func_162(0);
	func_788(0, iVar0, 0);
}

int func_828(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

void func_829(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1224226)
	{
		if (&Global_1224226->f_1[iVar0 /*9*/] == iParam0)
		{
			if ((Global_1224226->f_1[iVar0 /*9*/])->f_1 == iParam1)
			{
			}
			else
			{
				(Global_1224226->f_1[iVar0 /*9*/])->f_1 = iParam1;
			}
			return;
		}
		iVar0++;
	}
	func_874(iParam0, iParam1);
}

void func_830(int iParam0, int iParam1)
{
	struct<5> Var0;

	Var0 = { *(Global_1898164->f_1[iParam0 /*5*/]) };
	*(Global_1898164->f_1[iParam0 /*5*/]) = { *(Global_1898164->f_1[iParam1 /*5*/]) };
	*(Global_1898164->f_1[iParam1 /*5*/]) = { Var0 };
}

int func_831(int iParam0)
{
	return &(Global_1946804->f_2657.f_26.f_7[iParam0]);
}

void func_832(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = &Global_1946804->f_2657.f_26.f_7[iParam0];
	Global_1946804->f_2657.f_26.f_7[iParam0] = &Global_1946804->f_2657.f_26.f_7[iParam1];
	Global_1946804->f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_833(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_875(uParam0->f_1[iParam1 /*5*/]);
	*(uParam0->f_1[iParam1 /*5*/]) = { *(uParam0->f_1[*uParam0 /*5*/]) };
}

int func_834(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946804->f_2657.f_19)
	{
		if (&Global_1946804->f_2657.f_26.f_7[*iParam1] == iParam0)
		{
			return 1;
		}
		*iParam1++;
	}
	return 0;
}

void func_835(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = iParam1;
}

int func_836(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam2 != 0 && func_459(iParam1) != iParam2)
	{
		return 0;
	}
	if (func_814(2, iParam1))
	{
		func_876(uParam0, iParam1);
		return 1;
	}
	return 0;
}

void func_837(int iParam0)
{
	func_774(iParam0, 8, 6);
}

void func_838()
{
	int iVar0;

	Global_1946804->f_1497 = Global_1946804->f_1378;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(Global_1946804->f_1497.f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1378.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

int func_839(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_638(0);
	iVar1 = 0;
	func_639(&(Global_1946804->f_964), iVar0, iParam0, 0, 0, 0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804->f_964));
	if (!DATAFILE::_0xED4413CEE1BF142C(&(Global_1946804->f_964)))
	{
		return 0;
	}
	if (!DATAFILE::_0xA63CD20F19B961AB(&iVar1, &(Global_1946804->f_964), -1516819610))
	{
		return 0;
	}
	return iVar1;
}

void func_840(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_726(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_877(iParam4);
		}
		else if (iParam4 != &Global_1946804->f_57[iParam1 /*11*/])
		{
			iVar1 = PED::_GET_PED_COMPONENT_CATEGORY(iParam4, PED::_GET_METAPED_TYPE(iParam0), bParam2);
		}
	}
	if (bParam3)
	{
		iVar0 = 0;
		while (iVar0 < (Global_1946804->f_57[iParam1 /*11*/])->f_1)
		{
			if (&(Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0] != iVar1)
			{
				PED::_0xDF631E4BCE1B1FC4(iParam0, &((Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0]), 0, bParam2);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < (Global_1946804->f_57[iParam1 /*11*/])->f_1)
		{
			if (&(Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0] != iVar1)
			{
				PED::_SET_PED_COMPONENT_DISABLED(iParam0, &((Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0]), 0);
			}
			iVar0++;
		}
	}
}

void func_841(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 10;
	if (func_773(1108822547, 6))
	{
		if (bParam2)
		{
			func_840(iParam0, iVar0, func_23() != -1, 0, 0);
			func_774(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		PED::_0xBC6DF00D7A4A6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_733(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	PED::_UPDATE_PED_VARIATION(iParam0, 0, 1, 1, 1, 0);
}

int func_842(var uParam0, var uParam1)
{
	return 0;
}

int func_843()
{
	return 0;
}

int func_844(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_0xE787F05DFC977BDE(func_411(0), -1845241476, 0);
		case 1:
			return INVENTORY::_0xE787F05DFC977BDE(func_411(0), 1654063339, 0);
		case 2:
			return INVENTORY::_0xE787F05DFC977BDE(func_411(0), 1623931083, 0);
	}
	return 0;
}

char* func_845(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "health";
		case 0:
			return "stamina";
		case 2:
			return "dead_eye_level_up";
		default:
			break;
	}
	return "";
}

int func_846(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 444492752;
		case 0:
			return 1874233471;
		case 2:
			return -1285232277;
		default:
			break;
	}
	return 0;
}

int func_847(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		default:
			break;
	}
	return 0;
}

int func_848(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1896546861;
		case 1:
			return 304419444;
		case 2:
			return 1497019382;
		default:
			break;
	}
	return 0;
}

int func_849(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	struct<4> Var1;
	var uVar5;

	if (func_282(iParam1) && !func_878(iParam1))
	{
		iVar0 = func_165(iParam1);
	}
	else
	{
		return 0;
	}
	func_879(uParam3);
	uVar5 = func_880(iParam2);
	if (!PED::_0x608BC6A6AACD5036(&Var1, iVar0, uVar5, 0))
	{
		return 0;
	}
	*iParam0 = Var1.f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && !ENTITY::_0x88AD6CC10D8D35B2(*iParam0))
	{
		return 0;
	}
	*uParam3 = ENTITY::GET_ENTITY_MODEL(*iParam0);
	uParam3->f_2 = ENTITY::_0xD21C7418C590BB40(*iParam0);
	uParam3->f_3 = ENTITY::_GET_ENTITY_CARRY_CONFIG(*iParam0);
	return 1;
}

void func_850(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_881(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_882(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_851(var uParam0, var uParam1)
{
	var uVar0;
	int iVar30;
	int iVar31;

	if (ENTITY::IS_ENTITY_DEAD(uParam0))
	{
		return;
	}
	uVar0 = 29;
	MISC::_COPY_MEMORY(uParam1, &uVar0, 30);
	iVar30 = 0;
	while (iVar30 < 29)
	{
		iVar31 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar31, false, iVar30, true);
		if (func_204(iVar31))
		{
			(*uParam1)[iVar30] = iVar31;
		}
		else
		{
			(*uParam1)[iVar30] = 0;
		}
		iVar30++;
	}
}

void func_852(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_287(iVar1, 0))
		{
			func_452(iVar1, 0, bParam0);
		}
		Global_1946804->f_2657[iVar0] = 0;
		iVar0 = (iVar0 + -1);
	}
	Global_1946804->f_2657.f_20 = 0;
	Global_1946804->f_2657.f_21 = 0;
	Global_1946804->f_2657.f_22 = 0;
	Global_1946804->f_2657.f_23 = 0;
	Global_1946804->f_2657.f_24 = 0;
	Global_1946804->f_2657.f_25 = 0;
	Global_1946804->f_2657.f_19 = 0;
	Global_1946804->f_2657.f_26.f_6 = 0;
}

void func_853(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	Global_1946804->f_2657.f_26.f_2 = 3;
	Global_1946804->f_2657.f_26.f_1 = 3;
	Global_1946804->f_2657.f_26 = 3;
	if (func_23() == -1)
	{
		func_883(352481484);
		iVar0 = 0;
		while (iVar0 < Global_26795.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_26795[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_26795.f_20;
		Global_1946804->f_2657.f_21 = Global_26795.f_21;
		Global_1946804->f_2657.f_22 = Global_26795.f_22;
		Global_1946804->f_2657.f_23 = Global_26795.f_23;
		Global_1946804->f_2657.f_24 = Global_26795.f_24;
		Global_1946804->f_2657.f_25 = Global_26795.f_25;
		Global_1946804->f_2657.f_19 = Global_26795.f_19;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_36637.f_45.f_350.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_36637.f_45.f_350[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_36637.f_45.f_350.f_20;
		Global_1946804->f_2657.f_21 = Global_36637.f_45.f_350.f_21;
		Global_1946804->f_2657.f_22 = Global_36637.f_45.f_350.f_22;
		Global_1946804->f_2657.f_23 = Global_36637.f_45.f_350.f_23;
		Global_1946804->f_2657.f_24 = Global_36637.f_45.f_350.f_24;
		Global_1946804->f_2657.f_25 = Global_36637.f_45.f_350.f_25;
		Global_1946804->f_2657.f_19 = Global_36637.f_45.f_350.f_19;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar2 = &Global_1946804->f_2657[iVar0];
		if (func_334(iVar2) != -999503751)
		{
			func_884(&(Global_1946804->f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_770(iVar2, 0))
		{
			func_885(iVar2, &Global_1946804->f_1497.f_1[iVar1 /*3*/] == &Global_1946804->f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_854(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;

	if (!func_886(iParam0))
	{
		return;
	}
	iVar0 = func_334(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_887(iParam0, &(Global_1946804->f_2657.f_21), Global_1946804->f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_887(iParam0, &(Global_1946804->f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_887(iParam0, &(Global_1946804->f_2657.f_20), Global_1946804->f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_887(iParam0, &(Global_1946804->f_2657.f_22), Global_1946804->f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_887(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_887(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_888(0))
	{
		func_889(iParam0, 1);
		if (func_450() == 1160113249)
		{
			func_889(func_888(-2125499975), 0);
		}
		else
		{
			func_889(func_888(1160113249), 0);
		}
	}
	func_642();
	if (func_890(iVar0))
	{
		INVENTORY::_0x766315A564594401(func_411(0), iParam0, 0);
	}
	func_885(iParam0, bParam3);
	if (bParam2)
	{
		func_643(0, 0);
	}
}

void func_855(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (uParam1[iVar0] != 0)
		{
			if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, uParam1[iVar0], 0, 0))
			{
				if (func_536(uParam1[iVar0]))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, uParam1[iVar0], 0, false, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
			iVar1 = 0;
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, false, iVar0, true);
			if (iVar1 != uParam1[iVar0])
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, uParam1[iVar0], true, iVar0, false, false);
			}
		}
		iVar0++;
	}
}

int func_856(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_857(int iParam0, int iParam1)
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

void func_858(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_859(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_798(*iParam0);
	iVar1 = func_797(*iParam0);
	if (iParam1 < 1 || iParam1 > func_803(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_860(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_861(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_862(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

int func_863(int iParam0)
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
	iVar0 = func_802(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_801(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_800(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_797(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_798(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_799(iParam0);
	if (iVar5 < 1 || iVar5 > func_803(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

bool func_864(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_865(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_866(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_867(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_868(int iParam0)
{
	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	if (func_331(iParam0, -1066545920))
	{
		return 1;
	}
	return 0;
}

int func_869(int iParam0)
{
	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	if (func_331(iParam0, -284267618))
	{
		return 1;
	}
	return 0;
}

int func_870(int iParam0)
{
	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	if (func_331(iParam0, 363491182))
	{
		return 1;
	}
	return 0;
}

int func_871(int iParam0)
{
	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	if (func_331(iParam0, 1406113494))
	{
		return 1;
	}
	return 0;
}

int func_872(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_891(iParam0);
		case 1:
			return func_892(iParam0);
		case 2:
			return func_893(iParam0);
		case 3:
			return func_894(iParam0);
	}
	return 0;
}

int func_873(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_895(iParam0);
		case 1:
			return func_896(iParam0);
		case 2:
			return func_897(iParam0);
		case 3:
			return func_898(iParam0);
		case 4:
			return func_899(iParam0);
		case 5:
			return func_900(iParam0);
		case 6:
			return func_901(iParam0);
		case 7:
			return func_902(iParam0);
		case 8:
			return func_903(iParam0);
	}
	return 0;
}

void func_874(int iParam0, int iParam1)
{
	int iVar0;
	struct<9> Var1;

	if (iParam0 == -1)
	{
		return;
	}
	if (&Global_1224226 < 20)
	{
		Global_1224226 = &Global_1224226 + 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1224226->f_1[iVar0 /*9*/]) = { *(Global_1224226->f_1[iVar0 + 1 /*9*/]) };
			iVar0++;
		}
	}
	Var1 = -1;
	Var1 = iParam0;
	Var1.f_1 = iParam1;
	*(Global_1224226->f_1[(&Global_1224226 - 1) /*9*/]) = { Var1 };
}

void func_875(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_904(&(uParam0->f_3));
}

void func_876(var uParam0, int iParam1)
{
	int iVar0;

	if (func_23() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		*uParam0 = (Global_26795.f_26[iParam1 /*120*/])->f_1;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			*(uParam0->f_1[iVar0 /*3*/]) = { *((Global_26795.f_26[iParam1 /*120*/])->f_1.f_1[iVar0 /*3*/]) };
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	*uParam0 = (Global_36637.f_45.f_350.f_26[iParam1 /*120*/])->f_1;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(uParam0->f_1[iVar0 /*3*/]) = { *((Global_36637.f_45.f_350.f_26[iParam1 /*120*/])->f_1.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

int func_877(int iParam0)
{
	int iVar0;

	iVar0 = func_334(iParam0);
	switch (iVar0)
	{
		case -2061583405:
			return -1725579161;
		case -525676072:
			return 1249071452;
		default:
			break;
	}
	return 0;
}

int func_878(int iParam0)
{
	int iVar0;

	iParam0 = func_280(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_282(iParam0))
	{
		return 0;
	}
	iVar0 = func_165(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_879(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
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

int func_880(int iParam0)
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

void func_881(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam3 = PED::_GET_PED_DAMAGE(iParam0);
	*uParam2 = FLOCK::_0xF8B48A361DC388AE(iParam0);
	if (*uParam2 == 2)
	{
		*uParam1 = 4;
	}
	else if (*uParam2 == 1)
	{
		*uParam1 = 3;
	}
	else
	{
		*uParam4 = PED::_GET_PED_QUALITY(iParam0);
		switch (*uParam4)
		{
			case 0:
				*uParam1 = 0;
				break;
			case 1:
				*uParam1 = 1;
				break;
			case -1:
			case 2:
				*uParam1 = 2;
				break;
		}
	}
}

bool func_882(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;

	iVar0 = iParam3;
	iVar1 = iParam2;
	if (iVar0 < iVar1)
	{
		iParam2 = iVar0;
	}
	uVar2 = PED::_0x9E7738B291706746(uParam0, iParam1, iParam2);
	return uVar2;
}

void func_883(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;

	Var2 = -1;
	Var2.f_1 = -1;
	Var2.f_2 = -1;
	Var2.f_3 = -1;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	Var2.f_6 = -1;
	Var2.f_7 = -1;
	Var2.f_8 = -1;
	Var2.f_13 = -1;
	Var2 = { func_608(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_611(&Var2, &iVar0, &iVar1, 0))
	{
		if (iVar1 > 0)
		{
			switch (iParam0)
			{
				case 352481484:
					Global_1946804->f_2657.f_26.f_2 = 5;
					Global_1946804->f_2657.f_26.f_1 = 5;
					Global_1946804->f_2657.f_26 = 5;
					break;
			}
		}
		func_397(iVar0);
	}
}

void func_884(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_905(iParam2, *uParam0);
	func_906(uParam0->f_1[*uParam0 /*5*/], iParam1, -1, 1, 0);
	*uParam0++;
}

void func_885(int iParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_398(iParam0, 0, 0) };
	Var5 = { func_401(iParam0, Var0, Var0.f_4, 0) };
	if (func_472(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_411(0), &Var5, bParam1);
}

int func_886(int iParam0)
{
	if (func_23() == -1)
	{
		if (Global_40.f_4283 != 0)
		{
			if (iParam0 == 1164374808)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_887(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;

	iVar1 = iParam0;
	if (Global_1946804->f_2657.f_19 >= 18)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_640(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_770(iParam0, 0))
	{
		return 0;
	}
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = iVar1;
	if (func_334(iParam0) != -999503751)
	{
		func_884(&(Global_1946804->f_2657.f_26.f_26), iParam0, Global_1946804->f_2657.f_19);
	}
	Global_1946804->f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_888(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_450();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846 /* GXTEntry: "John\'s Classic Hat" */;
	}
	return -1535516064 /* GXTEntry: "Arthur\'s Hat" */;
}

int func_889(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_398(iParam0, 0, 0) };
	Var5 = { func_401(iParam0, Var0, Var0.f_4, 0) };
	if (func_472(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(iParam1, func_411(0), &Var5);
	return 1;
}

bool func_890(int iParam0)
{
	return func_907(func_763(iParam0));
}

int func_891(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 227686058 /* GXTEntry: "Bandit Bandolier" */;
		case 1:
			return 1877538667 /* GXTEntry: "Explorer Bandolier" */;
		case 2:
			return -747118240 /* GXTEntry: "Gambler Bandolier" */;
		case 3:
			return 356885366 /* GXTEntry: "Herbalist Bandolier" */;
		case 4:
			return -733784435 /* GXTEntry: "Master Hunter Bandolier" */;
		case 5:
			return -2010021430 /* GXTEntry: "Horseman Bandolier" */;
		case 6:
			return -1563051210 /* GXTEntry: "Sharpshooter Bandolier" */;
		case 7:
			return 1532314048 /* GXTEntry: "Survivalist Bandolier" */;
		case 8:
			return -1378972544 /* GXTEntry: "Weapons Expert Bandolier" */;
		default:
			break;
	}
	return 0;
}

int func_892(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -77597297 /* GXTEntry: "Bandit Gun Belt" */;
		case 1:
			return 1289620458 /* GXTEntry: "Explorer Gun Belt" */;
		case 2:
			return 351104126 /* GXTEntry: "Gambler Gun Belt" */;
		case 3:
			return -991258198 /* GXTEntry: "Herbalist Gun Belt" */;
		case 4:
			return -446539844 /* GXTEntry: "Master Hunter Gun Belt" */;
		case 5:
			return 2146082234;
		case 6:
			return 330185476 /* GXTEntry: "Sharpshooter Gun Belt" */;
		case 7:
			return -1208917184 /* GXTEntry: "Survivalist Gun Belt" */;
		case 8:
			return -12904227 /* GXTEntry: "Weapons Expert Gun Belt" */;
		default:
			break;
	}
	return 0;
}

int func_893(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 624387589 /* GXTEntry: "Bandit Holster" */;
		case 1:
			return 1398329674 /* GXTEntry: "Explorer Holster" */;
		case 2:
			return -35737408 /* GXTEntry: "Gambler Holster" */;
		case 3:
			return 651323163 /* GXTEntry: "Herbalist Holster" */;
		case 4:
			return 343794650 /* GXTEntry: "Master Hunter Holster" */;
		case 5:
			return 2072880089 /* GXTEntry: "Horseman Holster" */;
		case 6:
			return -2120749726 /* GXTEntry: "Sharpshooter Holster" */;
		case 7:
			return -1749072364 /* GXTEntry: "Survivalist Holster" */;
		case 8:
			return -583780175 /* GXTEntry: "Weapons Expert Holster" */;
		default:
			break;
	}
	return 0;
}

int func_894(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1066104444 /* GXTEntry: "Bandit Off-Hand Holster" */;
		case 1:
			return -567070698 /* GXTEntry: "Explorer Off-Hand Holster" */;
		case 2:
			return 797308288 /* GXTEntry: "Gambler Off-Hand Holster" */;
		case 3:
			return -1669506545 /* GXTEntry: "Herbalist Off-Hand Holster" */;
		case 4:
			return -1011624341 /* GXTEntry: "Master Hunter Off-Hand Holster" */;
		case 5:
			return 516134254 /* GXTEntry: "Horseman Off-Hand Holster" */;
		case 6:
			return -940514956 /* GXTEntry: "Sharpshooter Off-Hand Holster" */;
		case 7:
			return 2030473481 /* GXTEntry: "Survivalist Off-Hand Holster" */;
		case 8:
			return 2084389834 /* GXTEntry: "Weapons Expert Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_895(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 227686058 /* GXTEntry: "Bandit Bandolier" */;
		case 1:
			return -77597297 /* GXTEntry: "Bandit Gun Belt" */;
		case 2:
			return 624387589 /* GXTEntry: "Bandit Holster" */;
		case 3:
			return 1066104444 /* GXTEntry: "Bandit Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_896(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1877538667 /* GXTEntry: "Explorer Bandolier" */;
		case 1:
			return 1289620458 /* GXTEntry: "Explorer Gun Belt" */;
		case 2:
			return 1398329674 /* GXTEntry: "Explorer Holster" */;
		case 3:
			return -567070698 /* GXTEntry: "Explorer Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_897(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -747118240 /* GXTEntry: "Gambler Bandolier" */;
		case 1:
			return 351104126 /* GXTEntry: "Gambler Gun Belt" */;
		case 2:
			return -35737408 /* GXTEntry: "Gambler Holster" */;
		case 3:
			return 797308288 /* GXTEntry: "Gambler Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_898(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 356885366 /* GXTEntry: "Herbalist Bandolier" */;
		case 1:
			return -991258198 /* GXTEntry: "Herbalist Gun Belt" */;
		case 2:
			return 651323163 /* GXTEntry: "Herbalist Holster" */;
		case 3:
			return -1669506545 /* GXTEntry: "Herbalist Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_899(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -733784435 /* GXTEntry: "Master Hunter Bandolier" */;
		case 1:
			return -446539844 /* GXTEntry: "Master Hunter Gun Belt" */;
		case 2:
			return 343794650 /* GXTEntry: "Master Hunter Holster" */;
		case 3:
			return -1011624341 /* GXTEntry: "Master Hunter Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_900(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2010021430 /* GXTEntry: "Horseman Bandolier" */;
		case 1:
			return 2146082234;
		case 2:
			return 2072880089 /* GXTEntry: "Horseman Holster" */;
		case 3:
			return 516134254 /* GXTEntry: "Horseman Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_901(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1563051210 /* GXTEntry: "Sharpshooter Bandolier" */;
		case 1:
			return 330185476 /* GXTEntry: "Sharpshooter Gun Belt" */;
		case 2:
			return -2120749726 /* GXTEntry: "Sharpshooter Holster" */;
		case 3:
			return -940514956 /* GXTEntry: "Sharpshooter Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_902(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1532314048 /* GXTEntry: "Survivalist Bandolier" */;
		case 1:
			return -1208917184 /* GXTEntry: "Survivalist Gun Belt" */;
		case 2:
			return -1749072364 /* GXTEntry: "Survivalist Holster" */;
		case 3:
			return 2030473481 /* GXTEntry: "Survivalist Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_903(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1378972544 /* GXTEntry: "Weapons Expert Bandolier" */;
		case 1:
			return -12904227 /* GXTEntry: "Weapons Expert Gun Belt" */;
		case 2:
			return -583780175 /* GXTEntry: "Weapons Expert Holster" */;
		case 3:
			return 2084389834 /* GXTEntry: "Weapons Expert Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

void func_904(var uParam0)
{
	if (*uParam0 && PED::_0x93FFD92F05EC32FD(uParam0->f_1))
	{
		PED::_0x13E7320C762F0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_905(int iParam0, var uParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_906(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_0x93FFD92F05EC32FD(uParam0->f_3.f_1))
	{
		func_875(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_454(func_453(iParam1), 1);
		if (uParam0->f_1 == -1)
		{
		}
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
	uParam0->f_2 = iParam4;
	*uParam0 = iParam1;
	uParam0->f_3 = 0;
	if (bParam3)
	{
		func_908(uParam0);
	}
}

bool func_907(var uParam0)
{
	return (Global_1946804->f_2657.f_26.f_6 && uParam0) != 0;
}

void func_908(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_909(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

void func_909(var uParam0, var uParam1, var uParam2)
{
	var uVar0;

	uVar0 = func_910(func_450());
	if (*uParam0)
	{
		func_904(uParam0);
	}
	uParam0->f_1 = PED::_0xF6D9E1F3560CBF8E(uVar0, uParam1, 0, func_23() != -1, uParam2);
	*uParam0 = 1;
}

int func_910(int iParam0)
{
	if (func_23() == -1)
	{
		switch (iParam0)
		{
			case -2125499975:
				return 0;
			case -449205311:
				return 0;
			case 1160113249:
				return 0;
			default:
				break;
		}
		return 0;
	}
	switch (iParam0)
	{
		case 2026485318:
			return 0;
		case 24043185:
			return 1;
		default:
			break;
	}
	return 0;
}

