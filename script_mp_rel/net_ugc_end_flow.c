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
	bool bLocal_13 = false;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 1224195223;
	var uLocal_18 = 1825312110;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 4;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	struct<200> Local_32 = { 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_232 = 0;
	int iLocal_233 = 0;
	char* sLocal_234 = NULL;
	vector3 vLocal_235 = { 0f, 0f, 0f };
	vector3 vLocal_238 = { 0f, 0f, 0f };
	vector3 vLocal_241 = { 0f, 0f, 0f };
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	char cLocal_249[64] = "";
	char cLocal_257[64] = "";
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	float fLocal_272 = 0f;
	float fLocal_273 = 0f;
	int iLocal_274 = 0;
	float fLocal_275 = 0f;
	float fLocal_276 = 0f;
	float fLocal_277 = 0f;
	float fLocal_278 = 0f;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	var uLocal_284 = 0;
	int iLocal_285 = 0;
	var uLocal_286 = 0;
	struct<18> Local_287[4];
	vector3 vLocal_360 = { 0f, 0f, 0f };
	int iLocal_363 = 0;
	char cLocal_364[16] = "";
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	struct<9> Local_380 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	int iLocal_392 = 0;
	int iLocal_393 = 0;
	int iLocal_394 = 0;
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	int iLocal_404 = 0;
	int iLocal_405 = 0;
	var uLocal_406[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_439[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_472[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_505 = 0;
	struct<5> Local_506[5];
	struct<5> Local_532[2];
	int iLocal_543[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_560[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_577[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_586[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_595[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_612[4] = { 0, 0, 0, 0 };
	int iLocal_617 = 0;
	int iLocal_618 = 0;
	var uLocal_619 = 0;
	bool bLocal_620 = false;
	int iLocal_621 = 0;
	float fLocal_622 = 0f;
	float fLocal_623 = 0f;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_14 = GRAPHICS::_0x842CCC9491FFCD9B("MP_Trans_SceneToPhoto");
	iLocal_15 = GRAPHICS::_0x842CCC9491FFCD9B("MP_Trans_WinLose");
	iLocal_233 = -1;
	sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@8v8_v1";
	vLocal_235 = { -580.2f, -3626.5f, 79.94f };
	vLocal_238 = { -596.927f, -3639.072f, 80.6997f };
	vLocal_241 = { -561f, -3700f, 83f };
	iLocal_244 = joaat("MP001_U_07P_WINLOSE");
	iLocal_245 = -1616778617;
	iLocal_246 = -1852748182;
	iLocal_247 = 435889881;
	StringCopy(&cLocal_249, "mp_winlose_", 64);
	StringCopy(&cLocal_257, "mp_winlose", 64);
	iLocal_265 = joaat("MP004_S_MP_COFFIN01X");
	iLocal_266 = joaat("MP004_S_MP_COFFIN01X");
	iLocal_267 = joaat("MP004_S_MP_COFFINDECOR01X");
	iLocal_274 = 1;
	iLocal_279 = -1;
	StringCopy(&cLocal_364, "UIC", 16);
	iLocal_404 = PLAYER::GET_PLAYER_INDEX();
	iLocal_405 = PLAYER::GET_PLAYER_PED(iLocal_404);
	fLocal_622 = 1f;
	fLocal_623 = 1f;
	func_1(1);
	func_2();
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	while (!func_3())
	{
		if (func_4())
		{
			if (func_5())
			{
				if (func_6())
				{
					func_7();
				}
				else
				{
					func_8();
				}
			}
		}
		func_9();
		if (MISC::IS_BIT_SET(iLocal_398, 3))
		{
			func_10();
		}
		BUILTIN::WAIT(0);
	}
	func_11();
	func_12();
	func_1(0);
	func_13();
}

void func_1(int iParam0)
{
	Global_1048581 = iParam0;
}

void func_2()
{
	bLocal_13 = func_14();
	func_15(64);
	func_15(2048);
	func_15(4096);
	func_16(8);
	func_17(8);
	Global_1051134 = 0;
	PED::SET_PED_RESET_FLAG(iLocal_405, 240, true);
	func_18(&uLocal_16, 1, 0);
	func_19(&uLocal_16, 0);
	GRAPHICS::_0xF3E039322BFBD4D8(iLocal_14);
	GRAPHICS::_0xE75CDDEBF618C8FF(iLocal_14);
	GRAPHICS::_0xF3E039322BFBD4D8(iLocal_15);
	GRAPHICS::_0xE75CDDEBF618C8FF(iLocal_15);
	GRAPHICS::_0xFF8018C778349234(0);
	func_20(1);
}

bool func_3()
{
	if (MISC::IS_BIT_SET(iLocal_396, 2) || iLocal_389 == 2)
	{
		return true;
	}
	if (func_21(64))
	{
		return true;
	}
	if (func_22(1, 1))
	{
		MISC::SET_BIT(&iLocal_397, 0);
		return true;
	}
	if (Global_2883584)
	{
		return true;
	}
	if (func_23(128))
	{
		MISC::SET_BIT(&iLocal_397, 0);
		return true;
	}
	if (func_21(2048))
	{
		MISC::SET_BIT(&iLocal_397, 0);
		return true;
	}
	if (func_23(32))
	{
		return true;
	}
	return false;
}

bool func_4()
{
	if (!MISC::IS_BIT_SET(iLocal_396, 3))
	{
		if (func_24())
		{
			MISC::SET_BIT(&iLocal_396, 3);
		}
		switch (Global_262152)
		{
			case 0:
				if (!func_25())
				{
					MISC::CLEAR_BIT(&iLocal_396, 3);
				}
				break;
			case 1:
				if (!func_25())
				{
					MISC::CLEAR_BIT(&iLocal_396, 3);
				}
				if (!func_26())
				{
					MISC::CLEAR_BIT(&iLocal_396, 3);
				}
				break;
			case 3:
				if (!func_25())
				{
					MISC::CLEAR_BIT(&iLocal_396, 3);
				}
				if (!func_26())
				{
					MISC::CLEAR_BIT(&iLocal_396, 3);
				}
				break;
			case 2:
				break;
			case 4:
				MISC::CLEAR_BIT(&iLocal_396, 3);
				break;
		}
		if (MISC::IS_BIT_SET(iLocal_396, 3))
		{
			return true;
		}
		else
		{
			if (func_5())
			{
				NETWORK::_0x236905C700FDB54D();
			}
			if (Global_262152 != 4)
			{
			}
			return false;
		}
	}
	return true;
}

bool func_5()
{
	if (MISC::IS_BIT_SET(iLocal_396, 1))
	{
		return true;
	}
	else if (func_23(16))
	{
		MISC::SET_BIT(&iLocal_396, 1);
		return true;
	}
	return false;
}

bool func_6()
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	if (Global_262152 == 1)
	{
		if (!MISC::IS_BIT_SET(iLocal_400, 0))
		{
			iVar1 = 0;
			while (iVar1 <= 31)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1048684.f_22[iVar1 /*10*/]))
				{
					if (!func_27(iVar1))
					{
						bVar0 = false;
					}
				}
				iVar1++;
			}
			if (bVar0)
			{
				MISC::SET_BIT(&iLocal_400, 0);
			}
			else
			{
				return false;
			}
		}
	}
	return MISC::IS_BIT_SET(iLocal_396, 0);
}

void func_7()
{
	func_28();
	func_29();
	switch (Global_262152)
	{
		case 0:
			func_30();
			break;
		case 2:
			func_31();
			break;
		case 3:
			func_32();
			func_33();
			break;
		case 1:
			func_33();
			break;
		case 4:
			break;
	}
}

void func_8()
{
	int iVar0;

	func_1(1);
	func_34(0);
	func_35();
	if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
	{
		func_36(1);
		func_37(1);
	}
	func_38(1);
	if (!func_39(255))
	{
		func_40(3);
	}
	else
	{
		func_41(1);
		if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
		{
			func_42(64);
		}
	}
	func_43(0);
	if (!func_39(255))
	{
		iVar0 = 8;
		func_44(0, iVar0);
	}
	func_45(2048);
	UIAPPS::_CLOSE_ALL_APPS_IMMEDIATE();
	MISC::SET_BIT(&(Global_1957959.f_1), 5);
	iLocal_403 = Global_1048684.f_19;
	func_46(&iLocal_405);
	MISC::SET_BIT(&iLocal_396, 0);
}

void func_9()
{
	char* sVar0;

	AUDIO::_0xD9130842D7226045("RDRO_Camera_Flash_Pulse", 0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1048684.f_1)) || !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1048684.f_9)))
	{
		if (!MISC::IS_BIT_SET(iLocal_397, 4))
		{
			if (MISC::IS_BIT_SET(iLocal_397, 5) || GRAPHICS::_0xEEF83A759AE06A27(iLocal_14))
			{
				if (MISC::IS_BIT_SET(iLocal_397, 5) || GRAPHICS::_0x9AB192A9EF980EED(iLocal_14, 2, false, &uLocal_284))
				{
					sVar0 = "photograph";
					if (MISC::IS_BIT_SET(iLocal_397, 5))
					{
						sVar0 = "photograph_death_screen_stats";
					}
					if (AUDIO::_0xE368E8422C860BA7(sVar0, "rdro_gamemode_transition_sounds", -2))
					{
						if (!MISC::IS_BIT_SET(iLocal_397, 7))
						{
							func_47();
						}
						else
						{
							func_48();
						}
						MISC::SET_BIT(&iLocal_397, 4);
						MISC::SET_BIT(&iLocal_397, 12);
						func_42(64);
						AUDIO::PLAY_SOUND_FRONTEND(sVar0, "rdro_gamemode_transition_sounds", true, 0);
						AUDIO::_0x9B1FC259187C97C0("photograph");
						func_49();
						vLocal_360 = { vLocal_235 };
						func_50(1, 0);
					}
				}
			}
			else if (func_51(16) && func_24())
			{
				func_52();
			}
		}
		else if ((GRAPHICS::_0xEEF83A759AE06A27(iLocal_14) && GRAPHICS::_0x9AB192A9EF980EED(iLocal_14, 2, false, &uLocal_284)) || (GRAPHICS::_0xEEF83A759AE06A27(iLocal_15) && GRAPHICS::_0x9AB192A9EF980EED(iLocal_15, 2, false, &uLocal_284)))
		{
			AUDIO::PLAY_SOUND_FRONTEND("camera_flash", "RDRO_Camera_Flash_Pulse", true, 0);
			AUDIO::_0x9B1FC259187C97C0("photograph");
		}
	}
}

void func_10()
{
	struct<10> Var0;

	if (Global_1049169)
	{
		Global_1049159.f_5 = (Global_1048684.f_403.f_8 + Global_1048684.f_419.f_8);
		Global_1049159.f_6 = (Global_1048684.f_403.f_6 + Global_1048684.f_419.f_6);
		TELEMETRY::_TELEMETRY_MATCH_OVER(&Global_1049196, &Global_1049159, &Global_1049170, &Global_1049175, Global_3145858.f_60002 == 1);
		Global_1049159 = { Var0 };
		Global_1049169 = 0;
	}
}

void func_11()
{
	int iVar0;

	if (!Global_1048684.f_467)
	{
		if (Global_1048684.f_466 || iLocal_285)
		{
			func_54(func_53(joaat("TIMES_PLACED_TOP"), joaat("SHOWDOWN")), 1);
			iVar0 = func_55(Global_1572887.f_106.f_9);
			switch (iVar0)
			{
				case 7:
					func_54(func_53(joaat("TIMES_PLACED_TOP"), joaat("NET_PLAYLIST_ELIMINATION_SMALL")), 1);
					break;
				case 8:
					func_54(func_53(joaat("TIMES_PLACED_TOP"), joaat("NET_PLAYLIST_ELIMINATION_MEDIUM")), 1);
					break;
				case 9:
					func_54(func_53(joaat("TIMES_PLACED_TOP"), joaat("NET_PLAYLIST_ELIMINATION_LARGE")), 1);
					break;
				case 2:
					func_54(func_53(joaat("TIMES_PLACED_TOP"), joaat("NET_PLAYLIST_ADVERSARY_MEDIUM")), 1);
					break;
				case 3:
					func_54(func_53(joaat("TIMES_PLACED_TOP"), joaat("NET_PLAYLIST_ADVERSARY_MEDIUM")), 1);
					break;
				case 4:
					func_54(func_53(joaat("TIMES_PLACED_TOP"), joaat("NET_PLAYLIST_ADVERSARY_LARGE")), 1);
					break;
				case 6:
					func_54(func_53(joaat("TIMES_PLACED_TOP"), joaat("NET_PLAYLIST_GUN_RUSH_FREE_FOR_ALL")), 1);
					break;
				case 5:
					func_54(func_53(joaat("TIMES_PLACED_TOP"), joaat("NET_PLAYLIST_GUN_RUSH_TEAMS")), 1);
					break;
				case 19:
					func_54(func_53(joaat("TIMES_PLACED_TOP"), joaat("NET_PLAYLIST_CAPTURE")), 1);
					break;
			}
		}
	}
}

void func_12()
{
	NETWORK::_0x236905C700FDB54D();
	func_56();
	func_57();
	func_58();
	switch (Global_262152)
	{
		case 0:
			func_59();
			break;
		case 2:
			func_60();
			break;
		case 3:
			func_61();
			func_62();
			break;
		case 1:
			func_62();
			break;
	}
	func_63();
	func_10();
	HUD::_DISPLAY_HUD_COMPONENT(999578278);
	HUD::_DISPLAY_HUD_COMPONENT(690901814);
	func_64();
	func_65(1);
	func_16(2048);
	if (MISC::IS_BIT_SET(iLocal_397, 3))
	{
		func_66(-304137656, 0, 255, 0, 0);
	}
	Global_1048684.f_377 = 28;
	func_67(4);
	func_68(0);
	func_69();
	func_70(0);
	func_71(0);
	if (func_72())
	{
		func_73(0);
	}
	Global_1048582 = 0;
	GRAPHICS::ANIMPOSTFX_STOP_ALL();
}

void func_13()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_14()
{
	return func_74(Global_1572887.f_7, 1);
}

void func_15(int iParam0)
{
	Global_265377.f_124517.f_135 = (Global_265377.f_124517.f_135 - (Global_265377.f_124517.f_135 && iParam0));
}

void func_16(int iParam0)
{
	Global_262151 = (Global_262151 - (Global_262151 && iParam0));
}

void func_17(int iParam0)
{
	Global_265377.f_124517.f_135 = (Global_265377.f_124517.f_135 || iParam0);
}

void func_18(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*uParam0 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(-434015292);
	}
	else if (bParam2)
	{
		*uParam0 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(1781462046);
	}
	else
	{
		*uParam0 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(-242590942);
	}
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "transitionData");
}

void func_19(var uParam0, bool bParam1)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_3))
	{
		uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "transitionData");
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_11))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_11, bParam1);
	}
	else
	{
		uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_3, "showTransitionScreen", bParam1);
	}
}

void func_20(bool bParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;

	if (bParam0)
	{
	}
	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PostMatchAndLeaderboard");
	uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar0, "acceptbutton");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar1, "visible", bParam0);
	uVar2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar0, "menuUpButton");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar2, "visible", bParam0);
	uVar3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar0, "menuDownButton");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar3, "visible", bParam0);
}

bool func_21(int iParam0)
{
	return (Global_265377.f_124517.f_135 && iParam0) != 0;
}

bool func_22(bool bParam0, bool bParam1)
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

bool func_23(int iParam0)
{
	return (Global_262151 && iParam0) != 0;
}

bool func_24()
{
	if (iLocal_281 < 100)
	{
		if (func_75(&cLocal_364, &iLocal_281))
		{
			iLocal_281 = 100;
		}
		else
		{
			return false;
		}
	}
	return true;
}

bool func_25()
{
	return true;
}

bool func_26()
{
	if (func_76())
	{
		if (func_77())
		{
			if (func_78(iLocal_244, iLocal_245, iLocal_247, iLocal_246))
			{
				if (func_79())
				{
					if (func_80())
					{
						if (func_81(&uLocal_16))
						{
							if (func_82())
							{
								STREAMING::_0x513F8AA5BF2F17CF(vLocal_235, 15f, 0);
								func_45(2);
								return true;
							}
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_27(int iParam0)
{
	vector3 vVar0;

	switch (iLocal_439[iParam0])
	{
		case 0:
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1048684.f_22[iParam0 /*10*/], true, true);
			ENTITY::FREEZE_ENTITY_POSITION(Global_1048684.f_22[iParam0 /*10*/], true);
			ENTITY::SET_ENTITY_INVINCIBLE(Global_1048684.f_22[iParam0 /*10*/], true);
			vVar0 = { ENTITY::GET_ENTITY_COORDS(Global_1048684.f_22[iParam0 /*10*/], true, false) };
			func_83(&(uLocal_406[iParam0]), &(Global_1048684.f_22[iParam0 /*10*/]), &vVar0);
			PED::_0x59BD177A1A48600A(uLocal_406[iParam0], 1);
			if (ENTITY::DOES_ENTITY_EXIST(Global_1048684.f_343[iParam0]))
			{
				func_83(&(uLocal_472[iParam0]), &(Global_1048684.f_343[iParam0]), &vVar0);
			}
			iLocal_439[iParam0] = 1;
			break;
		case 1:
			if (Global_1048684.f_22[iParam0 /*10*/].f_9)
			{
				iLocal_439[iParam0] = 2;
			}
			else if (!PED::_0xA0BC8FAED8CFEB3C(uLocal_406[iParam0]))
			{
			}
			else
			{
				func_84(uLocal_406[iParam0], 1, 1);
				iLocal_439[iParam0] = 2;
				Jump @326; //curOff = 255
				if (ENTITY::DOES_ENTITY_EXIST(Global_1048684.f_22[iParam0 /*10*/]))
				{
					PED::DELETE_PED(&(Global_1048684.f_22[iParam0 /*10*/]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Global_1048684.f_343[iParam0]))
				{
					PED::DELETE_PED(&(Global_1048684.f_343[iParam0]));
				}
				return true;
			}
			return false;
			default:
				break;
	}
}

void func_28()
{
	NETWORK::_0x236905C700FDB54D();
	func_17(8);
	func_49();
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), true);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MAP"), true);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), true);
	func_38(1);
	func_85(1);
	func_86();
	UIFEED::_0xDD1232B332CBB9E7(1, 1, 0);
	CAM::_0x8910C24B7E0046EC();
	HUD::_HIDE_HUD_COMPONENT(999578278);
	func_65(0);
}

void func_29()
{
	if (MISC::IS_BIT_SET(iLocal_396, 4))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_617))
		{
			if (!bLocal_620)
			{
				uLocal_619 = ENTITY::_0x6F3068258A499E52(joaat("P_CAMPFIREFRESH01X"), -561.1321f, -3694.189f, 81.9117f, 15);
				bLocal_620 = true;
			}
			else if (ENTITY::_0x1FF441D7954F8709(uLocal_619))
			{
				iLocal_617 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(uLocal_619));
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_617) && ENTITY::IS_ENTITY_VISIBLE(iLocal_617))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_617, false);
				}
			}
		}
	}
}

void func_30()
{
	if (PLAYER::IS_PLAYER_CONTROL_ON(iLocal_404))
	{
		func_44(0, 8);
	}
	switch (iLocal_389)
	{
		case 0:
			if (func_87(&uLocal_374))
			{
				if (func_88(&uLocal_374, 0, 0) > 2500)
				{
					func_89(&uLocal_16);
					HUD::_HIDE_HUD_COMPONENT(999578278);
					func_90(&Local_32, 1);
					func_91(&Local_32);
					func_92(1);
				}
			}
			else
			{
				func_93(&uLocal_374, 0, 0);
			}
			break;
		case 1:
			func_90(&Local_32, 1);
			func_92(2);
			break;
		case 2:
			MISC::SET_BIT(&iLocal_396, 2);
			break;
	}
}

void func_31()
{
	if (func_87(&uLocal_372))
	{
		if (!func_23(4096))
		{
			if (func_23(16384))
			{
				return;
			}
			func_94(1);
			if (!func_23(256))
			{
				if (func_23(16))
				{
					func_16(16);
				}
			}
			if (func_88(&uLocal_372, 1, 0) > 5000 && func_95())
			{
				if (!Global_1048577)
				{
					if (!func_96(255))
					{
						if (func_23(64) || func_97())
						{
							if (!func_23(256))
							{
								func_98(0);
							}
							GRAPHICS::_0xEDA5CBECF56E1386(iLocal_14);
							if (func_99())
							{
								func_100(4, 0);
							}
							func_85(0);
							MISC::SET_BIT(&iLocal_396, 2);
						}
					}
				}
			}
		}
		else
		{
			func_101();
		}
	}
	else
	{
		if (!func_23(4096))
		{
			CAM::DO_SCREEN_FADE_OUT(1750);
		}
		func_93(&uLocal_372, 1, 0);
	}
}

void func_32()
{
	switch (iLocal_389)
	{
		case 0:
			switch (iLocal_391)
			{
				case 1:
					break;
			}
			break;
		case 1:
			switch (iLocal_390)
			{
				case 0:
					break;
			}
			break;
	}
}

void func_33()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	int iVar4;

	if (PLAYER::IS_PLAYER_CONTROL_ON(iLocal_404))
	{
		func_44(0, 8);
	}
	func_102();
	switch (iLocal_389)
	{
		case 0:
			switch (iLocal_391)
			{
				case 0:
					func_103();
					func_104();
					func_105(1);
					func_106(1);
					func_107();
					func_108(1);
					break;
				case 1:
					if (!MISC::IS_BIT_SET(iLocal_397, 12))
					{
						return;
					}
					func_109();
					func_110();
					iLocal_505 = 0;
					func_108(2);
					break;
				case 2:
					if (func_111() != 0)
					{
						func_108(3);
					}
					break;
				case 3:
					if (func_112() != 0)
					{
						func_108(4);
					}
					break;
				case 4:
					if (!MISC::IS_BIT_SET(iLocal_399, 9))
					{
						STREAMING::SET_FOCUS_POS_AND_VEL(vLocal_235, 0f, 0f, 0f);
					}
					else
					{
						STREAMING::SET_FOCUS_POS_AND_VEL(vLocal_241, 0f, 0f, 0f);
					}
					if (STREAMING::_IS_POSITION_INSIDE_IMAP_STREAMING_EXTENTS(iLocal_244, vLocal_235))
					{
						bVar0 = true;
					}
					else if (func_87(&uLocal_368) && func_88(&uLocal_368, 0, 0) > 3500)
					{
						if (STREAMING::GET_NUMBER_OF_STREAMING_REQUESTS() == 0)
						{
							bVar0 = true;
						}
						else
						{
							bVar0 = func_113();
						}
					}
					else
					{
						bVar0 = func_113();
					}
					if (bVar0 || (MISC::GET_GAME_TIMER() - iLocal_282) > 3500)
					{
						func_114(&uLocal_370);
						GRAPHICS::SET_TIMECYCLE_MODIFIER(&cLocal_249);
						iVar1 = 24;
						func_44(0, iVar1);
						func_93(&uLocal_372, 0, 0);
						func_115();
						func_108(5);
					}
					break;
				case 5:
					if (func_88(&uLocal_372, 0, 0) > 1000)
					{
						func_93(&uLocal_368, 0, 0);
						func_94(1);
						func_116();
						GRAPHICS::SET_TIMECYCLE_MODIFIER(&cLocal_249);
						func_92(1);
					}
					break;
			}
			break;
		case 1:
			if (!MISC::IS_BIT_SET(iLocal_399, 9))
			{
				STREAMING::SET_FOCUS_POS_AND_VEL(vLocal_235, 0f, 0f, 0f);
			}
			else
			{
				STREAMING::SET_FOCUS_POS_AND_VEL(vLocal_241, 0f, 0f, 0f);
			}
			VOICE::_0x1C38C3577901AF1F();
			func_117(&Global_1049313, 1);
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 1);
			switch (iLocal_390)
			{
				case 0:
					if (!func_96(255))
					{
						if (func_118())
						{
							func_119(1);
						}
					}
					break;
				case 1:
					if (Local_32.f_199 < 2)
					{
						func_90(&Local_32, 0);
					}
					if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(0);
					}
					func_93(&uLocal_372, 0, 0);
					if (func_99())
					{
						func_100(4, 0);
					}
					func_85(0);
					AUDIO::_0x9B1FC259187C97C0("winners_pose");
					if (func_51(2) || func_51(4))
					{
						AUDIO::PLAY_SOUND_FRONTEND("Strike_Heavy", "RDRO_Countdown_Clockwork_Sounds", true, 0);
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND("Strike_Light", "RDRO_Countdown_Clockwork_Sounds", true, 0);
					}
					AUDIO::TRIGGER_MUSIC_EVENT(&(Global_1048684.f_471));
					STREAMING::_0x5A8B01199C3E79C3();
					func_16(2);
					GRAPHICS::_0xEDA5CBECF56E1386(iLocal_14);
					GRAPHICS::ANIMPOSTFX_STOP_ALL();
					GRAPHICS::_ANIMPOSTFX_PLAY_TIMED("RespawnMissionCheckpoint", 1250);
					func_119(2);
					break;
				case 2:
					if (!GRAPHICS::_0xEEF83A759AE06A27(iLocal_15))
					{
						if ((ANIMSCENE::_GET_ANIM_SCENE_DURATION(iLocal_233) - ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_233)) <= 1.2f)
						{
							GRAPHICS::_0x9B8D5D4CB8AF58B3(iLocal_15);
							MISC::SET_BIT(&iLocal_397, 4);
						}
					}
					if (func_120())
					{
						func_121(1);
						func_122(1);
						func_123();
						AUDIO::_0x9B1FC259187C97C0("photograph");
						func_93(&uLocal_376, 0, 0);
						func_93(&uLocal_378, 0, 0);
						iVar2 = PLAYER::PLAYER_ID();
						sVar3 = PLAYER::GET_PLAYER_NAME(iVar2);
						iVar4 = 0;
						while (iVar4 <= 3)
						{
							if (Global_1050050.f_14 <= 1)
							{
								if (MISC::ARE_STRINGS_EQUAL(&(Global_1050050.f_101[iVar4 /*23*/].f_14.f_1), sVar3))
								{
									iLocal_285 = 1;
								}
								else
								{
									iVar4++;
								}
								func_119(3);
								Jump @921; //curOff = 898
								if (!func_87(&uLocal_372))
								{
									func_93(&uLocal_372, 0, 0);
								}
								Jump @1054; //curOff = 921
								if (func_88(&uLocal_378, 0, 0) > 5000)
								{
									MISC::SET_BIT(&iLocal_398, 0);
									func_119(4);
								}
								else if (func_88(&uLocal_378, 0, 0) < 0 || !func_87(&uLocal_378))
								{
									func_93(&uLocal_378, 0, 0);
								}
								Jump @1054; //curOff = 992
								func_90(&Local_32, 0);
								func_124(&Local_32, &Global_1049313);
								func_125(&Local_32, &Global_1049313, 1);
								if (func_126())
								{
									func_127();
									func_92(2);
								}
								func_124(&Local_32, &(Global_1050050.f_101));
								Jump @1068; //curOff = 1054
								MISC::SET_BIT(&iLocal_396, 2);
								if (MISC::IS_BIT_SET(iLocal_398, 1))
								{
									func_128();
								}
								if (MISC::IS_BIT_SET(iLocal_398, 0))
								{
									func_129();
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

void func_34(int iParam0)
{
	Global_1071686.f_28662.f_3 = 1;
	Global_1071686.f_28662.f_65.f_30 = iParam0;
	Global_1071686.f_28662.f_4 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_35()
{
	func_130(2);
}

void func_36(bool bParam0)
{
	if (!bParam0)
	{
		func_131(18);
	}
	else
	{
		func_132(18);
	}
}

void func_37(bool bParam0)
{
	if (!bParam0)
	{
		func_131(19);
	}
	else
	{
		func_132(19);
	}
}

void func_38(bool bParam0)
{
	if (!bParam0)
	{
		func_131(21);
	}
	else
	{
		func_132(21);
	}
}

bool func_39(int iParam0)
{
	if (iParam0 == 255)
	{
		return func_133();
	}
	return func_134(64, iParam0);
}

void func_40(int iParam0)
{
	Global_1102219.f_26.f_12 = iParam0;
}

void func_41(bool bParam0)
{
	if (!bParam0)
	{
		func_131(28);
	}
	else
	{
		func_132(28);
	}
}

void func_42(int iParam0)
{
	if (func_135(iParam0))
	{
		return;
	}
	Global_1102219.f_26.f_9 = (Global_1102219.f_26.f_9 || iParam0);
}

void func_43(bool bParam0)
{
	if (bParam0)
	{
		func_132(49);
	}
	else
	{
		func_131(49);
	}
}

void func_44(bool bParam0, int iParam1)
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
		func_136(iParam1);
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
	func_137(bVar1, bVar2, bVar3, (bVar4 || bVar5), bVar6, 0, bVar5);
}

void func_45(int iParam0)
{
	Global_262151 = (Global_262151 || iParam0);
}

void func_46(int iParam0)
{
	PED::SET_PED_RESET_FLAG(*iParam0, 129, true);
}

void func_47()
{
	if (func_51(17))
	{
		MISC::SET_BIT(&iLocal_397, 7);
		return;
	}
	Local_32.f_159 = Global_1051114;
	Local_32.f_160 = Global_1051115;
	func_138(&Global_1049313, &Local_32, &uLocal_16, iLocal_403, func_51(15));
	MISC::SET_BIT(&iLocal_397, 7);
}

void func_48()
{
	char[] cVar0[8];

	if (Local_32.f_150 > 1)
	{
		cVar0 = HUD::_GET_LABEL_TEXT("UIC_EF_WINS");
	}
	else
	{
		cVar0 = HUD::_GET_LABEL_TEXT("UIC_EF_WIN");
	}
	func_139(&uLocal_16, cVar0, &(Global_1048684.f_9), " ", " ", " ", " ", Global_1048684.f_17);
	func_140(&uLocal_16);
	func_19(&uLocal_16, 1);
}

void func_49()
{
	if (UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("PAUSE_MENU")) || UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("PAUSE_MENU")))
	{
		UIAPPS::_CLOSE_APP_BY_HASH_IMMEDIATE(joaat("PAUSE_MENU"));
	}
	if (UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("ABILITIES")) || UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("ABILITIES")))
	{
		UIAPPS::_CLOSE_APP_BY_HASH_IMMEDIATE(joaat("ABILITIES"));
	}
	if (func_141())
	{
		func_142();
	}
	if (func_143())
	{
		func_144();
	}
}

void func_50(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(iLocal_397, 11) && !func_145(vLocal_360))
		{
			MISC::SET_BIT(&iLocal_397, 11);
			if (!MISC::IS_BIT_SET(iLocal_399, 9))
			{
				STREAMING::SET_FOCUS_POS_AND_VEL(vLocal_360, 0f, 0f, 0f);
			}
			else
			{
				STREAMING::SET_FOCUS_POS_AND_VEL(vLocal_241, 0f, 0f, 0f);
			}
		}
	}
	else if (MISC::IS_BIT_SET(iLocal_397, 11) || bParam1)
	{
		MISC::CLEAR_BIT(&iLocal_397, 11);
		STREAMING::CLEAR_FOCUS();
		vLocal_360 = { 0f, 0f, 0f };
	}
}

bool func_51(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1048684, iParam0);
}

void func_52()
{
	if (func_140(&uLocal_16))
	{
		func_93(&uLocal_372, 1, 0);
		if (!func_146(2))
		{
			AUDIO::PLAY_SOUND_FRONTEND("Winners_Screen", "RDROADV_Winners_Screen_Sounds", true, 0);
		}
		if (!GRAPHICS::_0xEEF83A759AE06A27(iLocal_14))
		{
			if (!func_99() || !func_147())
			{
				GRAPHICS::_0x9B8D5D4CB8AF58B3(iLocal_14);
			}
			else
			{
				MISC::SET_BIT(&iLocal_397, 5);
			}
			MISC::CLEAR_BIT(&iLocal_397, 4);
			func_148(16);
		}
	}
}

struct<2> func_53(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_54(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

int func_55(int iParam0)
{
	int iVar0;
	int iVar1;

	if (6 == iParam0)
	{
		return 10;
	}
	if (5 == iParam0)
	{
		return 11;
	}
	if (7 == iParam0)
	{
		return 12;
	}
	if (8 == iParam0)
	{
		return 13;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (iParam0 != Global_265377.f_117359.f_6758[iVar0])
		{
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (Global_265377.f_117359.f_6725[iVar0] != Global_265354.f_1[iVar1])
				{
				}
				else
				{
					return iVar1;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_56()
{
	if (!func_96(255))
	{
		func_36(0);
		func_37(0);
		if (func_23(64) || !func_14())
		{
			if (!func_21(64))
			{
				if (Global_262152 != 0)
				{
					func_50(0, 0);
					if (!func_23(256))
					{
						if (MISC::IS_BIT_SET(Global_1048684, 29) || MISC::IS_BIT_SET(Global_1048684, 30))
						{
							if (MISC::IS_BIT_SET(Global_1048684, 31))
							{
								func_149(1, 0);
								func_150(1);
							}
							else if (MISC::IS_BIT_SET(Global_1048684, 28) || MISC::IS_BIT_SET(Global_1048684, 27))
							{
								if (MISC::IS_BIT_SET(Global_1048684, 27))
								{
									if (!func_145(Global_1048684.f_394))
									{
										func_151(Global_1048684.f_394, Global_1048684.f_397, 1);
									}
								}
								func_152(1, 0);
								func_150(2);
							}
							if (MISC::IS_BIT_SET(Global_1048684, 29) && !func_145(Global_1048684.f_390))
							{
								func_153(Global_1048684.f_390, Global_1048684.f_393);
								func_150(4);
							}
							else
							{
								func_153(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING());
								func_150(8);
							}
						}
						else if (func_154() == 33)
						{
							func_155(5, 1);
							func_150(64);
						}
						else
						{
							func_150(16);
						}
					}
				}
				if (!func_156())
				{
					func_36(1);
					func_150(32);
				}
			}
			if (!func_23(256))
			{
				CAM::DO_SCREEN_FADE_OUT(150);
			}
		}
		else
		{
			func_17(4096);
		}
	}
}

void func_57()
{
	if (func_23(256))
	{
		MISC::SET_BIT(&iLocal_397, 2);
		CAM::DO_SCREEN_FADE_OUT(0);
		GRAPHICS::RESET_PAUSED_RENDERPHASES();
		HUD::_DISPLAY_HUD_COMPONENT(999578278);
		HUD::_DISPLAY_HUD_COMPONENT(690901814);
	}
	else if (func_23(64) || func_21(32))
	{
		MISC::SET_BIT(&iLocal_397, 1);
		while (!func_157(&bLocal_13) && !func_22(1, 1))
		{
			NETWORK::_0x236905C700FDB54D();
			BUILTIN::WAIT(0);
		}
		func_158();
	}
}

void func_58()
{
	var uVar0;
	int iVar37;

	func_159();
	func_160();
	func_40(0);
	func_161(64);
	func_37(0);
	func_38(0);
	func_41(0);
	func_85(0);
	func_162();
	func_163(0);
	func_164(0);
	func_127();
	MISC::CLEAR_BIT(&(Global_1957959.f_1), 5);
	Global_1048684.f_470 = 0;
	uVar0 = 32;
	func_165(&uVar0, PLAYER::GET_PLAYER_INDEX(), 0);
	HUD::_TEXT_DATABASE_DELETE("UIC");
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MAP"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), true);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false, true);
	NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(false);
	PED::SET_PED_RESET_FLAG(iLocal_405, 240, false);
	AUDIO::_0x531A78D6BF27014B("RDRO_Winners_Screen_Sounds");
	AUDIO::_0x531A78D6BF27014B("RDROADV_Winners_Screen_Sounds");
	AUDIO::_0x531A78D6BF27014B("RDRO_Countdown_Clockwork_Sounds");
	if (GRAPHICS::_0xEEF83A759AE06A27(iLocal_14))
	{
		GRAPHICS::_0xEDA5CBECF56E1386(iLocal_14);
	}
	if (GRAPHICS::_0xEEF83A759AE06A27(iLocal_15))
	{
		GRAPHICS::_0xEDA5CBECF56E1386(iLocal_15);
	}
	GRAPHICS::_0x71845905BCCDE781(iLocal_14);
	GRAPHICS::_0x71845905BCCDE781(iLocal_15);
	func_15(8);
	func_15(64);
	func_15(2048);
	func_16(64);
	func_16(1024);
	func_16(256);
	func_89(&uLocal_16);
	func_94(0);
	func_1(0);
	func_166();
	if (func_167(33, 255))
	{
		if (func_99())
		{
			func_100(4, 0);
		}
		func_85(0);
	}
	NETWORK::NETWORK_CLEAR_CLOCK_TIME_OVERRIDE();
	MISC::_0xCE7690C0A0D1C36D(0);
	NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(false);
	STREAMING::SET_GAME_PAUSES_FOR_STREAMING(false);
	GRAPHICS::_0xFF8018C778349234(1);
	AUDIO::CANCEL_MUSIC_EVENT(&(Global_1048684.f_471));
	func_16(128);
	func_50(0, 1);
	GRAPHICS::_0x38D9D50F2085E9B3(iLocal_14);
	GRAPHICS::_0x38D9D50F2085E9B3(iLocal_15);
	if (!Global_1049270)
	{
		MISC::_0x0E71C80FA4EC8147("FOG", true);
		MISC::_0x0E71C80FA4EC8147("MISTY", true);
		MISC::_0x0E71C80FA4EC8147("SHOWER", true);
		MISC::_0x0E71C80FA4EC8147("THUNDERSTORM", true);
	}
	func_168(0);
	iVar37 = 0;
	iVar37 = 0;
	while (iVar37 <= 3)
	{
		func_169(&(Global_1049283[iVar37 /*3*/]));
		iVar37++;
	}
	iVar37 = 0;
	while (iVar37 <= 3)
	{
		func_169(&(Global_1049296[iVar37 /*3*/]));
		iVar37++;
	}
}

void func_59()
{
	func_170(&Local_32, 1);
	func_171(&(Local_32.f_162));
	func_172();
}

void func_60()
{
}

void func_61()
{
}

void func_62()
{
	bool bVar0;
	int iVar1;
	var uVar2;

	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		STREAMING::_0x5A8B01199C3E79C3();
	}
	Global_1071686.f_10 = Global_1048684.f_20;
	bVar0 = true;
	iVar1 = 0;
	func_93(&uVar2, 0, 0);
	while (!SCRIPTS::_0x9E4EF615E307FBBE() && bVar0)
	{
		bVar0 = false;
		if (STREAMING::_IS_IMAP_ACTIVE(iLocal_244))
		{
			func_173(iLocal_244);
			bVar0 = true;
		}
		if (STREAMING::_IS_IMAP_ACTIVE(iLocal_245))
		{
			func_173(iLocal_245);
			bVar0 = true;
		}
		if (STREAMING::_IS_IMAP_ACTIVE(iLocal_246))
		{
			func_173(iLocal_246);
			bVar0 = true;
		}
		if (STREAMING::_IS_IMAP_ACTIVE(iLocal_247))
		{
			func_173(iLocal_247);
			bVar0 = true;
		}
		iVar1++;
		if (func_88(&uVar2, 0, 0) > 2000 || iVar1 > 100)
		{
			bVar0 = false;
		}
		BUILTIN::WAIT(0);
	}
	STREAMING::SET_MAPDATACULLBOX_ENABLED(&cLocal_257, false);
	func_174();
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	STREAMING::_0xF01D21DF39554115(1);
	func_170(&Local_32, 0);
	func_171(&(Local_32.f_162));
	func_172();
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uLocal_232))
	{
		func_175(&Local_32, &uLocal_232);
	}
}

void func_63()
{
	if (MISC::IS_BIT_SET(iLocal_397, 1))
	{
		while (SCRIPTS::IS_THREAD_ACTIVE(Global_1051138, false))
		{
			NETWORK::_0x236905C700FDB54D();
			BUILTIN::WAIT(0);
		}
	}
	else if (!MISC::IS_BIT_SET(iLocal_397, 2))
	{
	}
}

void func_64()
{
	Global_1913504 = 0;
}

void func_65(bool bParam0)
{
	if (bParam0)
	{
		Global_1951255.f_1381 = (Global_1951255.f_1381 - Global_1951255.f_1381 & 2);
	}
	else
	{
		Global_1951255.f_1381 |= 2;
	}
	func_176(bParam0);
}

int func_66(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_177(iParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

void func_67(int iParam0)
{
	Global_262152 = iParam0;
}

void func_68(int iParam0)
{
	Global_1048684.f_470 = iParam0;
}

void func_69()
{
	var uVar0;

	func_178(&uVar0, 1);
}

void func_70(bool bParam0)
{
	if (!Global_2883584)
	{
		if (bParam0)
		{
			func_45(4);
		}
		else
		{
			func_16(4);
		}
	}
}

void func_71(bool bParam0)
{
	if (bParam0)
	{
		func_45(16);
	}
	else
	{
		func_16(16);
	}
}

bool func_72()
{
	return Global_1048583;
}

void func_73(bool bParam0)
{
	vector3 vVar0;
	int iVar3;

	if (!Global_1048583)
	{
		if (bParam0)
		{
			Global_1048583 = 1;
		}
	}
	else if (!bParam0)
	{
		vVar0 = -1;
		vVar0.f_1 = -1;
		Global_1048583 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 <= 3)
		{
			Global_1049283[iVar3 /*3*/] = { vVar0 };
			Global_1049296[iVar3 /*3*/] = { vVar0 };
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 <= 0)
		{
			Global_1049309[iVar3 /*3*/] = { vVar0 };
			iVar3++;
		}
	}
}

bool func_74(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_75(char* sParam0, int iParam1)
{
	if (!HUD::_TEXT_DATABASE_HAS_LOADED(sParam0))
	{
		HUD::_TEXT_DATABASE_REQUEST(sParam0);
	}
	else
	{
		return true;
	}
	*iParam1++;
	if (*iParam1 > 100)
	{
		return true;
	}
	return false;
}

bool func_76()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;

	if (MISC::IS_BIT_SET(iLocal_397, 9))
	{
		return true;
	}
	if (Global_1048684.f_377 == 28)
	{
		return false;
	}
	func_179(0, 0, 0, 0);
	switch (Global_1048684.f_377)
	{
		case 27:
			MISC::SET_BIT(&iLocal_399, 2);
			MISC::SET_BIT(&iLocal_399, 4);
			MISC::SET_BIT(&iLocal_399, 11);
			MISC::SET_BIT(&iLocal_399, 10);
			MISC::SET_BIT(&iLocal_396, 4);
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@TEAM_GROUPING@HALLOWEEN@TEAM@CELEBRATION_TEAM";
			func_180(423112700, -1302444521, "NPC_", 1);
			iVar0 = 0;
			while (iVar0 < Global_1048684.f_376)
			{
				if (!Global_1048684.f_22[iVar0 /*10*/].f_9)
				{
				}
				else
				{
					func_181(joaat("MP007_P_MP_NIGHTSTALKER_MASK01X"), "SKULL_WIN_", PED::IS_PED_MALE(Global_1048684.f_22[iVar0 /*10*/]));
				}
				iVar0++;
			}
			break;
		case 0:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@1v7";
			func_179(7, 2, 0, 0);
			break;
		case 23:
			MISC::SET_BIT(&iLocal_399, 10);
			MISC::SET_BIT(&iLocal_396, 4);
			MISC::SET_BIT(&iLocal_399, 12);
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@Predator_Win_V1";
			break;
		case 24:
			MISC::SET_BIT(&iLocal_399, 10);
			MISC::SET_BIT(&iLocal_396, 4);
			MISC::SET_BIT(&iLocal_399, 12);
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@Predator_Win_V2";
			break;
		case 25:
			MISC::SET_BIT(&iLocal_399, 10);
			MISC::SET_BIT(&iLocal_396, 4);
			MISC::SET_BIT(&iLocal_399, 12);
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@Predator_Win_V3";
			break;
		case 26:
			MISC::SET_BIT(&iLocal_399, 10);
			MISC::SET_BIT(&iLocal_396, 4);
			MISC::SET_BIT(&iLocal_399, 3);
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@Hunters_Win_V1";
			break;
		case 21:
			MISC::SET_BIT(&iLocal_399, 10);
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@Protector_Win_V1";
			func_179(0, 0, 0, 8);
			break;
		case 22:
			MISC::SET_BIT(&iLocal_399, 10);
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@@Protector_FailAlive_V1";
			func_179(0, 0, 0, 8);
			break;
		case 1:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@4v4_v1";
			func_179(4, 2, 0, 0);
			func_182(2);
			break;
		case 2:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@4v4_v2";
			func_179(4, 2, 0, 0);
			func_182(0);
			break;
		case 3:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@4v4_v3";
			func_179(5, 0, 0, 0);
			break;
		case 4:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@4v4_v4";
			MISC::SET_BIT(&iLocal_399, 7);
			MISC::SET_BIT(&iLocal_399, 5);
			func_179(4, 0, 0, 0);
			break;
		case 5:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@7v1";
			func_179(1, 0, 0, 0);
			func_182(2);
			func_182(3);
			break;
		case 6:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@8v8_v2";
			MISC::SET_BIT(&iLocal_399, 5);
			func_179(11, 0, 4, 0);
			break;
		case 7:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@8v8_v1";
			func_179(8, 0, 0, 0);
			func_182(6);
			func_182(7);
			MISC::SET_BIT(&iLocal_399, 8);
			break;
		case 9:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@8v8_v3";
			func_179(8, 4, 0, 0);
			func_182(6);
			func_182(7);
			break;
		case 8:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@16v16_v1";
			func_179(15, 0, 16, 0);
			func_182(2);
			func_182(3);
			MISC::SET_BIT(&iLocal_399, 7);
			MISC::SET_BIT(&iLocal_399, 5);
			break;
		case 13:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@GUNS_IN_THE_AIR";
			func_179(4, 2, 0, 0);
			func_183(5);
			func_183(7);
			MISC::SET_BIT(&iLocal_399, 11);
			break;
		case 12:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@16v16_TOMBSTONE";
			func_179(1, 0, 0, 0);
			func_182(2);
			func_182(14);
			func_184(6);
			func_184(7);
			MISC::SET_BIT(&iLocal_399, 10);
			MISC::SET_BIT(&iLocal_399, 11);
			StringConCat(&cLocal_249, "tombstone_", 64);
			break;
		case 14:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@WAGON";
			func_179(4, 0, 0, 0);
			MISC::SET_BIT(&iLocal_399, 9);
			MISC::SET_BIT(&iLocal_399, 7);
			MISC::SET_BIT(&iLocal_399, 5);
			MISC::SET_BIT(&iLocal_399, 10);
			MISC::SET_BIT(&iLocal_399, 11);
			StringConCat(&cLocal_249, "wagon_", 64);
			break;
		case 15:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@HORSE_RACE@HORSE_RACE_v1";
			MISC::SET_BIT(&iLocal_399, 6);
			break;
		case 16:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@HORSE_RACE@HORSE_RACE_v2";
			MISC::SET_BIT(&iLocal_399, 6);
			break;
		case 17:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@HORSE_RACE@HORSE_RACE_v3";
			MISC::SET_BIT(&iLocal_399, 6);
			break;
		case 18:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@HORSE_RACE@HORSE_RACE_v4";
			MISC::SET_BIT(&iLocal_399, 6);
			break;
		case 19:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@HORSE_RACE@HORSE_RACE_v5";
			MISC::SET_BIT(&iLocal_399, 6);
			break;
		case 20:
			sLocal_234 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@HORSE_RACE@HORSE_RACE_v6";
			MISC::SET_BIT(&iLocal_399, 6);
			break;
	}
	if (MISC::IS_BIT_SET(iLocal_399, 6))
	{
		MISC::SET_BIT(&iLocal_399, 4);
	}
	func_185();
	iVar1 = CLOCK::GET_CLOCK_HOURS();
	if (MISC::IS_BIT_SET(iLocal_399, 10))
	{
		if (iVar1 >= 22 || iVar1 <= 5)
		{
			MISC::SET_BIT(&iLocal_397, 31);
			iLocal_279 = 0;
		}
		else if ((iVar1 >= 5 && iVar1 <= 8) || (iVar1 >= 17 && iVar1 <= 22))
		{
			MISC::SET_BIT(&iLocal_397, 30);
			if (MISC::IS_BIT_SET(iLocal_399, 12) || MISC::IS_BIT_SET(iLocal_399, 2))
			{
				iLocal_279 = 7;
			}
			else
			{
				iLocal_279 = 18;
			}
		}
		else
		{
			iLocal_279 = 13;
		}
	}
	else if (iVar1 >= 20 || iVar1 <= 5)
	{
		MISC::SET_BIT(&iLocal_397, 31);
		iLocal_279 = 0;
	}
	else if ((iVar1 >= 5 && iVar1 <= 8) || (iVar1 >= 17 && iVar1 <= 20))
	{
		MISC::SET_BIT(&iLocal_397, 30);
		iLocal_279 = 18;
	}
	else
	{
		iLocal_279 = 13;
	}
	iVar2 = Global_3145858.f_229;
	if (iVar2 == 0)
	{
		iVar3 = func_186(Global_3145858.f_196);
		switch (iVar3)
		{
			case 1:
			case 4:
			case 9:
			case 11:
			case 16:
				iVar2 = 1;
				break;
			case 3:
			case 12:
				iVar2 = 5;
				break;
			case 0:
			case 2:
			case 8:
			case 10:
				iVar2 = 2;
				break;
			case 5:
			case 6:
			case 7:
				iVar2 = 3;
				break;
			case 13:
			case 14:
			case 15:
				iVar2 = 4;
				break;
		}
	}
	switch (iVar2)
	{
		case 1:
			if (MISC::IS_BIT_SET(iLocal_399, 10))
			{
				iLocal_244 = 1834537343;
				iLocal_247 = 22956558;
				iLocal_248 = joaat("CLOUDS");
				if (MISC::IS_BIT_SET(iLocal_399, 12) || MISC::IS_BIT_SET(iLocal_399, 2))
				{
					if (MISC::IS_BIT_SET(iLocal_397, 30))
					{
						iLocal_248 = joaat("MISTY");
						func_187(-0.26f, -0.042f, 630f, 2354.531f, -2155.473f, -2101.975f);
					}
					else
					{
						iLocal_248 = joaat("FOG");
						func_187(0.354f, -0.55f, 534f, 2695.09f, 1101.355f, -2409.212f);
					}
					StringCopy(&cLocal_249, "mp_winlose_predator_", 64);
					if (MISC::IS_BIT_SET(iLocal_399, 12))
					{
						iLocal_245 = 324369003;
					}
				}
				else if (MISC::IS_BIT_SET(iLocal_397, 31))
				{
					iLocal_248 = joaat("OVERCASTDARK");
					func_187(0.386f, -0.072f, 597f, 1831.857f, 29.148f, -1795.856f);
				}
				else if (MISC::IS_BIT_SET(iLocal_397, 30))
				{
					iLocal_279 = 17;
					if (MISC::IS_BIT_SET(iLocal_399, 9) || MISC::IS_BIT_SET(iLocal_399, 3))
					{
						func_187(-0.04f, 0.323f, 143.5f, -216.629f, 3978.264f, -3208.506f);
					}
					else
					{
						func_187(-0.007f, 0.602f, 374.75f, -35.357f, 146.108f, -3240.619f);
					}
				}
				else
				{
					func_187(0.119f, 0.471f, 374.75f, 1054.363f, 1879.716f, -1177.575f);
				}
			}
			else
			{
				iLocal_244 = joaat("MP001_U_07P_WINLOSE");
				iLocal_247 = 435889881;
				iLocal_245 = -1616778617;
				iLocal_246 = -1852748182;
				iLocal_248 = joaat("SUNNY");
			}
			StringConCat(&cLocal_249, "heartlands", 64);
			break;
		case 2:
			if (MISC::IS_BIT_SET(iLocal_399, 10))
			{
				iLocal_244 = -1645988897;
				iLocal_247 = 1614850834;
				iLocal_248 = joaat("FOG");
				if (MISC::IS_BIT_SET(iLocal_399, 12) || MISC::IS_BIT_SET(iLocal_399, 2))
				{
					if (MISC::IS_BIT_SET(iLocal_397, 30))
					{
						iLocal_248 = joaat("MISTY");
						func_187(-0.522f, 0.198f, 990.5f, 2461.041f, -2391.535f, -2293.49f);
					}
					StringCopy(&cLocal_249, "mp_winlose_predator_", 64);
					if (MISC::IS_BIT_SET(iLocal_399, 12))
					{
						iLocal_245 = -281275366;
					}
				}
				else if (MISC::IS_BIT_SET(iLocal_397, 30))
				{
					iLocal_279 = 19;
				}
			}
			else
			{
				iLocal_244 = joaat("MP001_MP_WINLOSE_SWAMP");
				iLocal_247 = -2036638644;
				iLocal_245 = -209782407;
				iLocal_246 = -1068985587;
				iLocal_248 = joaat("MISTY");
			}
			StringConCat(&cLocal_249, "swamp", 64);
			StringConCat(&cLocal_257, "_swamp", 64);
			break;
		case 3:
			iLocal_248 = joaat("SNOWLIGHT");
			if (MISC::IS_BIT_SET(iLocal_399, 10))
			{
				iLocal_244 = joaat("MP001_CELEB_SCREEN_SNOW");
				iLocal_247 = 2135160782;
				if (MISC::IS_BIT_SET(iLocal_399, 12) || MISC::IS_BIT_SET(iLocal_399, 2))
				{
					if (MISC::IS_BIT_SET(iLocal_397, 30))
					{
						iLocal_248 = joaat("MISTY");
						func_187(-0.522f, 0.198f, 990.5f, 2461.041f, -2391.535f, -2293.49f);
					}
					else
					{
						iLocal_248 = joaat("FOG");
					}
					StringCopy(&cLocal_249, "mp_winlose_predator_", 64);
					if (MISC::IS_BIT_SET(iLocal_399, 12))
					{
						iLocal_245 = -415953049;
					}
				}
				else if (MISC::IS_BIT_SET(iLocal_397, 31))
				{
					iLocal_248 = joaat("SNOW");
				}
				else if (MISC::IS_BIT_SET(iLocal_397, 30))
				{
					if (MISC::IS_BIT_SET(iLocal_399, 9) || MISC::IS_BIT_SET(iLocal_399, 3))
					{
						iLocal_279 = 19;
						iLocal_280 = 40;
						func_187(0.021f, 0.102f, 357.2f, -2480.711f, 2086.622f, -2668.159f);
					}
					else
					{
						iLocal_279 = 20;
						func_187(0.179f, 0.701f, 610.75f, -2571.701f, 2238.057f, -2835.739f);
					}
				}
			}
			else
			{
				iLocal_244 = joaat("MP001_MP_WINLOSE_SNOW");
				iLocal_247 = 908140270;
				iLocal_245 = 1417440092;
				iLocal_246 = 649433039;
			}
			StringConCat(&cLocal_249, "snow", 64);
			StringConCat(&cLocal_257, "_snow", 64);
			break;
		case 4:
			iLocal_248 = joaat("HIGHPRESSURE");
			if (MISC::IS_BIT_SET(iLocal_399, 10))
			{
				if (MISC::IS_BIT_SET(iLocal_399, 12) || MISC::IS_BIT_SET(iLocal_399, 2))
				{
					if (MISC::IS_BIT_SET(iLocal_397, 30))
					{
						iLocal_248 = joaat("MISTY");
						func_187(-0.522f, 0.198f, 990.5f, 2461.041f, -2391.535f, -2293.49f);
					}
					else
					{
						iLocal_248 = joaat("FOG");
						func_187(0.011f, -0.669f, -109.5f, 3843.674f, 407.221f, -81.17f);
					}
					StringCopy(&cLocal_249, "mp_winlose_predator_", 64);
					if (MISC::IS_BIT_SET(iLocal_399, 12))
					{
						iLocal_245 = 948536844;
					}
				}
				else if (MISC::IS_BIT_SET(iLocal_397, 30))
				{
					iLocal_248 = joaat("SUNNY");
					if (MISC::IS_BIT_SET(iLocal_399, 9) || MISC::IS_BIT_SET(iLocal_399, 3))
					{
						iLocal_279 = 20;
					}
					else
					{
						iLocal_279 = 18;
					}
				}
				iLocal_244 = joaat("MP001_CELEB_SCREEN_DESERT");
				iLocal_247 = 1980374609;
			}
			else
			{
				iLocal_244 = joaat("MP001_MP_WINLOSE_DESERT");
				iLocal_247 = 2077558044;
				iLocal_245 = -1336911409;
				iLocal_246 = -1029570958;
			}
			StringConCat(&cLocal_249, "desert", 64);
			StringConCat(&cLocal_257, "_desert", 64);
			break;
		case 5:
			if (MISC::IS_BIT_SET(iLocal_399, 10))
			{
				iLocal_248 = joaat("OVERCASTDARK");
				iLocal_244 = 1755785548;
				iLocal_247 = 1481756818;
				if (MISC::IS_BIT_SET(iLocal_399, 12) || MISC::IS_BIT_SET(iLocal_399, 2))
				{
					if (MISC::IS_BIT_SET(iLocal_397, 30))
					{
						iLocal_248 = joaat("MISTY");
						func_187(0.839f, 0.768f, 577f, 2412.601f, -2271.631f, -2202.794f);
					}
					else
					{
						iLocal_248 = joaat("FOG");
					}
					StringCopy(&cLocal_249, "mp_winlose_predator_", 64);
					if (MISC::IS_BIT_SET(iLocal_399, 12))
					{
						iLocal_245 = -1344285417;
					}
				}
				else if (MISC::IS_BIT_SET(iLocal_399, 9) || MISC::IS_BIT_SET(iLocal_399, 3))
				{
					if (MISC::IS_BIT_SET(iLocal_397, 31))
					{
						iLocal_248 = joaat("CLOUDS");
						func_187(0.978f, -0.448f, 329f, 3233.729f, 262.921f, -2070.11f);
					}
					else if (MISC::IS_BIT_SET(iLocal_397, 30))
					{
						iLocal_279 = 19;
						func_187(0.845f, 0.141f, 1000f, -1787.396f, -454.858f, -401.799f);
					}
					else
					{
						func_187(0.738f, 0.189f, 803.75f, 1344.11f, 2463.37f, -1726.229f);
					}
				}
				else if (MISC::IS_BIT_SET(iLocal_397, 30))
				{
					iLocal_279 = 19;
					func_187(0.845f, 0.141f, 1000f, -1787.396f, -454.858f, -401.799f);
				}
				else
				{
					iLocal_248 = joaat("CLOUDS");
					func_187(0.418f, 0.191f, 698.75f, 487.565f, 1166.487f, -492.181f);
				}
			}
			else
			{
				iLocal_248 = joaat("OVERCASTDARK");
				func_187(0.648f, -0.814f, 481.25f, -2237.9f, -1281.34f, -3051.36f);
				iLocal_244 = joaat("MP001_MP_WINLOSE_FOREST");
				iLocal_247 = 205032683;
				iLocal_245 = 686788855;
				iLocal_246 = -1228362565;
			}
			StringConCat(&cLocal_249, "forest", 64);
			StringConCat(&cLocal_257, "_forest", 64);
			break;
	}
	if (iVar2 != 0)
	{
		if (MISC::IS_BIT_SET(iLocal_397, 31))
		{
			StringConCat(&cLocal_249, "_night", 64);
		}
		else if (MISC::IS_BIT_SET(iLocal_397, 30))
		{
			StringConCat(&cLocal_249, "_dusk", 64);
		}
		else
		{
			StringConCat(&cLocal_249, "_day", 64);
		}
	}
	if (MISC::IS_BIT_SET(iLocal_399, 10))
	{
		vLocal_235 = { -569.954f, -3648.908f, 81.884f };
	}
	vLocal_235 = { vLocal_235 + func_188() };
	vLocal_241 = { vLocal_241 + func_188() };
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_233, vLocal_235, vVar4, 0);
	STREAMING::_0xF01D21DF39554115(0);
	STREAMING::SET_MAPDATACULLBOX_ENABLED(&cLocal_257, true);
	STREAMING::SET_GAME_PAUSES_FOR_STREAMING(true);
	STREAMING::_0x19ABCC581D28E6F9(1);
	MISC::SET_BIT(&iLocal_397, 9);
	return true;
}

bool func_77()
{
	int iVar0;
	int iVar1;

	if (Global_1048684.f_377 == 28)
	{
		return false;
	}
	if (MISC::IS_BIT_SET(iLocal_399, 5))
	{
		iLocal_265 = joaat("P_COFFIN01X");
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_233, true, false) && !ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(iLocal_233, false))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(iLocal_233, true))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_233);
		}
		return false;
	}
	else
	{
		if (MISC::IS_BIT_SET(iLocal_399, 11))
		{
			iVar1 = 0;
			while (iVar1 <= (Global_1048684.f_376 - 1))
			{
				if (Global_1048684.f_22[iVar1 /*10*/].f_9)
				{
					iVar0++;
				}
				iVar1++;
			}
		}
		else
		{
			iVar0 = -1;
		}
		func_189(Global_1048684.f_466, iVar0);
	}
	if (!MISC::IS_BIT_SET(iLocal_399, 8))
	{
		func_173(iLocal_246);
	}
	return true;
}

bool func_78(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = 1;
	if (!func_190(iParam0))
	{
		iVar0 = 0;
	}
	if (!func_190(iParam1))
	{
		iVar0 = 0;
	}
	if (!func_190(iParam2))
	{
		iVar0 = 0;
	}
	if (MISC::IS_BIT_SET(iLocal_399, 8))
	{
		if (!func_190(iParam3))
		{
			iVar0 = 0;
		}
	}
	if (!func_87(&uLocal_366))
	{
		func_93(&uLocal_366, 0, 0);
	}
	else if (func_88(&uLocal_366, 0, 0) > 30000)
	{
		return true;
	}
	return iVar0;
}

bool func_79()
{
	STREAMING::REQUEST_MODEL(iLocal_265, false);
	if (MISC::IS_BIT_SET(iLocal_399, 7))
	{
		STREAMING::REQUEST_MODEL(iLocal_266, false);
	}
	STREAMING::REQUEST_MODEL(joaat("P_CHAIR09X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_CRATE01X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_CRATESTACK02BX"), false);
	STREAMING::REQUEST_MODEL(joaat("P_CRATE02X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_CRATE05X"), false);
	if (((((!STREAMING::HAS_MODEL_LOADED(iLocal_265) && !STREAMING::HAS_MODEL_LOADED(joaat("P_CHAIR09X"))) && !STREAMING::HAS_MODEL_LOADED(joaat("P_CRATE01X"))) && !STREAMING::HAS_MODEL_LOADED(joaat("P_CRATESTACK02BX"))) && !STREAMING::HAS_MODEL_LOADED(joaat("P_CRATE02X"))) && !STREAMING::HAS_MODEL_LOADED(joaat("P_CRATE05X")))
	{
		return false;
	}
	if (MISC::IS_BIT_SET(iLocal_399, 7))
	{
		if (!STREAMING::HAS_MODEL_LOADED(iLocal_266))
		{
			return false;
		}
	}
	if (func_191(&Local_506) == 0)
	{
		return false;
	}
	if (func_191(&Local_532) == 0)
	{
		return false;
	}
	return true;
}

bool func_80()
{
	return true;
}

bool func_81(var uParam0)
{
	if (!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(*uParam0))
	{
		return false;
	}
	UISTATEMACHINE::_UIFLOWBLOCK_ENTER(*uParam0, uParam0->f_1);
	if (!UISTATEMACHINE::_UISTATEMACHINE_EXISTS(*uParam0))
	{
		UISTATEMACHINE::_UISTATEMACHINE_CREATE(*uParam0, *uParam0);
	}
	return true;
}

bool func_82()
{
	if (((AUDIO::_0xD9130842D7226045("RDROADV_Winners_Screen_Sounds", 0) && AUDIO::_0xD9130842D7226045("RDRO_Countdown_Clockwork_Sounds", 0)) && AUDIO::_0xD9130842D7226045("RDRO_Winners_Screen_Sounds", 0)) && AUDIO::_0xD9130842D7226045("RDRO_Camera_Flash_Pulse", 0))
	{
		if (AUDIO::PREPARE_MUSIC_EVENT(&(Global_1048684.f_471)))
		{
			if (!GRAPHICS::_0x59EA80079B86D8C7(iLocal_14) && !GRAPHICS::_0x59EA80079B86D8C7(iLocal_15))
			{
				return true;
			}
		}
	}
	return false;
}

void func_83(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = PED::CLONE_PED(*uParam1, 0f, true, true);
	ENTITY::SET_ENTITY_COORDS(*uParam0, *uParam2, true, false, true, true);
	ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(*uParam0, false, true);
	if (PED::IS_PED_DEAD_OR_DYING(*uParam0, true))
	{
		PED::REVIVE_INJURED_PED(*uParam0);
		ENTITY::_SET_ENTITY_HEALTH(*uParam0, ENTITY::GET_ENTITY_MAX_HEALTH(*uParam0, false), 0);
	}
	PED::CLEAR_PED_DECORATIONS(*uParam0);
	PED::_0x2208438012482A1A(*uParam0, true, true);
	ENTITY::SET_ENTITY_INVINCIBLE(*uParam0, true);
	ENTITY::SET_ENTITY_VISIBLE(*uParam0, true);
}

void func_84(int iParam0, bool bParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::_0xDF631E4BCE1B1FC4(iParam0, joaat("HATS"), 0, 1);
	}
	else
	{
		PED::_SET_PED_COMPONENT_DISABLED(iParam0, joaat("HATS"), 1);
	}
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_85(bool bParam0)
{
	if (!bParam0)
	{
		func_131(33);
	}
	else
	{
		func_132(33);
	}
	CAM::_0x63E5841A9264D016(bParam0);
}

void func_86()
{
	func_192(0);
}

bool func_87(var uParam0)
{
	return uParam0->f_1;
}

int func_88(var uParam0, bool bParam1, bool bParam2)
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

void func_89(var uParam0)
{
	var uVar0;

	if (UISTATEMACHINE::_UISTATEMACHINE_EXISTS(*uParam0))
	{
		uVar0 = *uParam0;
		UISTATEMACHINE::_UISTATEMACHINE_DESTROY_AND_CLEAR(&uVar0);
		UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(uParam0);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_3))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_3);
	}
}

void func_90(var uParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_23(16);
	switch (uParam0->f_199)
	{
		case 0:
			func_193(1);
			func_194(&(uParam0->f_199), 1);
			break;
		case 1:
			AUDIO::_0xD9130842D7226045("MP_Leaderboard_Sounds", 1);
			func_194(&(uParam0->f_199), 2);
			break;
		case 2:
			iVar1 = UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(joaat("LEADERBOARDS"), func_195(bParam1));
			if (iVar1 == 0)
			{
				func_194(&(uParam0->f_199), 3);
			}
			else if (UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("LEADERBOARDS")))
			{
				func_194(&(uParam0->f_199), 3);
			}
			break;
		case 3:
			if (UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("LEADERBOARDS")))
			{
				if (!bVar0)
				{
					AUDIO::PLAY_SOUND_FRONTEND("Leaderboard_Show", "MP_Leaderboard_Sounds", true, 0);
				}
				UIAPPS::_REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("LEADERBOARDS"), func_196());
				func_194(&(uParam0->f_199), 4);
			}
			else if (func_197())
			{
				func_194(&(uParam0->f_199), 2);
			}
			break;
		case 4:
			if (MISC::IS_BIT_SET(uParam0->f_158, 13))
			{
				if (UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("LEADERBOARDS")))
				{
					if (!bVar0)
					{
						AUDIO::PLAY_SOUND_FRONTEND("Leaderboard_Hide", "MP_Leaderboard_Sounds", true, 0);
					}
					UIAPPS::_CLOSE_APP_BY_HASH(joaat("LEADERBOARDS"));
					func_194(&(uParam0->f_199), 5);
				}
			}
			break;
		case 5:
			if (bParam1)
			{
				MISC::CLEAR_BIT(&(uParam0->f_158), 13);
				func_194(&(uParam0->f_199), 1);
			}
			else
			{
				func_194(&(uParam0->f_199), 6);
			}
			break;
		case 6:
			func_170(uParam0, bParam1);
			break;
	}
}

void func_91(var uParam0)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PostMatchAndLeaderboard");
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam0, "Title");
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(*uParam0, "LeaderboardList");
	uParam0->f_142 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(*uParam0, "LeaderboardList");
}

void func_92(int iParam0)
{
	iLocal_389 = iParam0;
}

void func_93(var uParam0, bool bParam1, bool bParam2)
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

void func_94(int iParam0)
{
	if (Global_1048586 != iParam0)
	{
		Global_1048586 = iParam0;
	}
}

bool func_95()
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return Global_1071686.f_5;
}

bool func_96(int iParam0)
{
	return func_167(1, iParam0);
}

bool func_97()
{
	return (Global_1048576 || Global_2883584);
}

void func_98(int iParam0)
{
	int iVar0;

	iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	if (SCRIPTS::_DOES_THREAD_EXIST(Global_1940144.f_105.f_1) && Global_1940144.f_105.f_1 != iVar0)
	{
		return;
	}
	Global_1940144.f_105.f_1 = iVar0;
	Global_1940144.f_105 = iParam0;
}

bool func_99()
{
	return func_198(4);
}

void func_100(int iParam0, bool bParam1)
{
	Global_1102219.f_3520.f_13 = iParam0;
	if (bParam1)
	{
		Global_1102219.f_3520.f_12 = Global_1102219.f_3520.f_13;
	}
}

void func_101()
{
	bool bVar0;

	switch (iLocal_401)
	{
		case 0:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1071686.f_28662.f_22.f_4)))
			{
				Global_1048582 = 1;
				iLocal_402 = ANIMSCENE::_CREATE_ANIM_SCENE(&(Global_1071686.f_28662.f_22.f_4), 16512, 0, false, true);
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_402))
				{
					StringCopy(&(Global_1071686.f_28662.f_22.f_4), "", 128);
					ANIMSCENE::LOAD_ANIM_SCENE(iLocal_402);
					func_199(1);
				}
			}
			else
			{
				CAM::DO_SCREEN_FADE_OUT(1750);
				func_16(4096);
			}
			break;
		case 1:
			bVar0 = true;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1071686.f_28662.f_22.f_20)))
			{
				if (!AUDIO::PREPARE_MUSIC_EVENT(&(Global_1071686.f_28662.f_22.f_20)))
				{
					bVar0 = false;
				}
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_402, true, false) && bVar0)
			{
				func_200(0);
				CAM::DO_SCREEN_FADE_IN(0);
				ANIMSCENE::START_ANIM_SCENE(iLocal_402);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1071686.f_28662.f_22.f_20)))
				{
					AUDIO::TRIGGER_MUSIC_EVENT(&(Global_1071686.f_28662.f_22.f_20));
					StringCopy(&(Global_1071686.f_28662.f_22.f_20), "", 128);
				}
				func_45(8192);
				func_199(2);
			}
			break;
		case 2:
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_402, false))
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				func_199(3);
			}
			break;
		case 3:
			func_201(0, 0);
			ANIMSCENE::RESET_ANIM_SCENE(iLocal_402, 0);
			func_199(0);
			func_16(4096);
			break;
	}
}

void func_102()
{
	if (fLocal_272 != 0f || fLocal_273 != 0f)
	{
		GRAPHICS::_0xB8C984C0D47F4F07(fLocal_272, fLocal_273, iLocal_274);
	}
	if (fLocal_275 != 0f)
	{
		GRAPHICS::_0xC332C91388F5580B(fLocal_275);
	}
	if ((fLocal_276 != 0f || fLocal_277 != 0f) || fLocal_278 != 0f)
	{
		GRAPHICS::_0xFE7966DF01452F32(fLocal_276, fLocal_277, fLocal_278);
	}
}

void func_103()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	Local_32.f_159 = Global_1051114;
	Local_32.f_160 = Global_1051115;
	iVar0 = Global_1050050.f_14;
	iLocal_283 = Global_1048684.f_20;
	bVar1 = iVar0 > 1;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1050050.f_27[0 /*18*/])))
	{
		func_202();
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			Local_287[iVar2 /*18*/].f_16 = Global_1050050.f_27[iVar2 /*18*/].f_16;
			Local_287[iVar2 /*18*/] = { Global_1050050.f_27[iVar2 /*18*/] };
			Local_287[iVar2 /*18*/].f_8 = { Global_1050050.f_27[iVar2 /*18*/].f_8 };
			Local_287[iVar2 /*18*/].f_17 = Global_1050050.f_27[iVar2 /*18*/].f_17;
			iVar2++;
		}
	}
	Local_32.f_162 = { Global_1050888 };
	func_91(&Local_32);
	MISC::SET_BIT(&(Local_32.f_159), 11);
	if (MISC::IS_BIT_SET(Local_32.f_159, 8))
	{
		MISC::CLEAR_BIT(&(Local_32.f_159), 8);
	}
	if (MISC::IS_BIT_SET(Local_32.f_159, 20))
	{
		MISC::CLEAR_BIT(&(Local_32.f_159), 20);
	}
	func_203(&Local_32, &(Global_1050050.f_101), &Global_1050966, 1, 1, bVar1, iLocal_283, iVar0, 0, 0, -1);
	func_204(&Local_32, &Global_1050958);
}

void func_104()
{
	var uVar0;
	char* sVar1;
	int iVar2;

	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PostMatchAndLeaderboard");
	iVar2 = Global_1048684.f_17;
	if (Local_32.f_150 > 1)
	{
		sVar1 = HUD::_GET_LABEL_TEXT("UIC_EF_WINS");
	}
	else
	{
		sVar1 = HUD::_GET_LABEL_TEXT("UIC_EF_WIN");
	}
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar0, "winnerLabelRawText", sVar1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uVar0, "winnerLabelColor", joaat("COLOR_WHITE"));
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar0, "winnerNameRawText", &(Global_1048684.f_9));
	DATABINDING::_DATABINDING_ADD_DATA_INT(uVar0, "winnerNameColor", iVar2);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar0, "mvpLabelRawText", HUD::_GET_LABEL_TEXT("UGC_END_MVP"));
	DATABINDING::_DATABINDING_ADD_DATA_INT(uVar0, "mvpLabelColor", Local_287[0 /*18*/].f_17);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar0, "mvpNameRawText", &(Local_287[0 /*18*/]));
	DATABINDING::_DATABINDING_ADD_DATA_INT(uVar0, "mvpNameColor", Local_287[0 /*18*/].f_17);
}

void func_105(bool bParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;

	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PostMatchAndLeaderboard");
	uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar0, "likeButton");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar1, "enabled", bParam0);
	uVar2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar0, "dislikeButton");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar2, "enabled", bParam0);
	uVar3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar0, "revealScoreboardButton");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar3, "enabled", bParam0);
	uVar4 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar0, "acceptButton");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar4, "enabled", bParam0);
}

void func_106(bool bParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;

	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PostMatchAndLeaderboard");
	func_205(bParam0);
	uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar0, "revealScoreboardButton");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar1, "visible", bParam0);
	uVar2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar0, "acceptButton");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar2, "visible", bParam0);
}

void func_107()
{
	if (MISC::IS_BIT_SET(iLocal_399, 12) || MISC::IS_BIT_SET(iLocal_399, 2))
	{
		MISC::_0x3373779BAF7CAF48("FOG", "fog_MP_Pred");
		MISC::_0x3373779BAF7CAF48("MISTY", "misty_MP_Pred");
		MISC::_0x3373779BAF7CAF48("SHOWER", "shower_MP_Pred");
		MISC::_0x3373779BAF7CAF48("THUNDERSTORM", "thunderstorm_MP_Pred");
	}
	else if (MISC::IS_BIT_SET(iLocal_399, 3))
	{
		MISC::_0x0E71C80FA4EC8147("FOG", true);
		MISC::_0x0E71C80FA4EC8147("MISTY", true);
		MISC::_0x0E71C80FA4EC8147("SHOWER", true);
		MISC::_0x0E71C80FA4EC8147("THUNDERSTORM", true);
	}
}

void func_108(int iParam0)
{
	iLocal_391 = iParam0;
}

void func_109()
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];

	iVar0 = 0;
	while (iVar0 <= (Global_1048684.f_376 - 1))
	{
		if (Global_1048684.f_22[iVar0 /*10*/].f_9)
		{
			iVar1++;
			StringCopy(&cVar3, "win_", 16);
			if (iVar1 < 10)
			{
				StringConCat(&cVar3, "0", 16);
			}
			StringIntConCat(&cVar3, iVar1, 16);
			if (!PED::IS_PED_MALE(uLocal_406[iVar0]))
			{
				StringConCat(&cVar3, "F", 16);
			}
			ENTITY::SET_ENTITY_COLLISION(uLocal_406[iVar0], false, false);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_233, &cVar3, uLocal_406[iVar0], 0);
		}
		else if (!MISC::IS_BIT_SET(iLocal_399, 4))
		{
			iVar2++;
			StringCopy(&cVar3, "DEAD_0", 16);
			StringIntConCat(&cVar3, iVar2, 16);
			if (!PED::IS_PED_MALE(uLocal_406[iVar0]))
			{
				StringConCat(&cVar3, "F", 16);
			}
			ENTITY::SET_ENTITY_COLLISION(uLocal_406[iVar0], false, false);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_233, &cVar3, uLocal_406[iVar0], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_472[iVar0]))
		{
			StringCopy(&cVar3, "horse_0", 16);
			StringIntConCat(&cVar3, iVar0 + 1, 16);
			ENTITY::SET_ENTITY_COLLISION(uLocal_472[iVar0], false, false);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_233, &cVar3, uLocal_472[iVar0], 0);
		}
		iVar0++;
	}
}

void func_110()
{
	NETWORK::_0x65F040D91001ED4B(0);
	MISC::_0xCE7690C0A0D1C36D(0);
	MISC::_SET_WEATHER_TYPE(iLocal_248, true, true, false, 0f, false);
	func_168(1);
	if (iLocal_279 == -1)
	{
		if (MISC::IS_BIT_SET(iLocal_397, 31))
		{
			NETWORK::_NETWORK_CLOCK_TIME_OVERRIDE(0, 0, 0, 0, true);
		}
		else if (MISC::IS_BIT_SET(iLocal_397, 30))
		{
			NETWORK::_NETWORK_CLOCK_TIME_OVERRIDE(18, 0, 0, 0, true);
		}
		else
		{
			NETWORK::_NETWORK_CLOCK_TIME_OVERRIDE(13, 0, 0, 0, true);
		}
	}
	else
	{
		NETWORK::_NETWORK_CLOCK_TIME_OVERRIDE(iLocal_279, iLocal_280, 0, 0, true);
	}
	iLocal_282 = MISC::GET_GAME_TIMER();
	MISC::SET_BIT(&iLocal_397, 10);
}

int func_111()
{
	int iVar0;

	if (!func_206())
	{
		return 0;
	}
	iLocal_505++;
	if (iLocal_505 < 5)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_506[iVar0 /*5*/].f_4))
		{
		}
		else
		{
			PED::_SET_PED_OUTFIT_PRESET(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Local_506[iVar0 /*5*/].f_4), Global_1048684.f_378[iVar0 /*2*/].f_1, false);
			PED::_UPDATE_PED_VARIATION(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Local_506[iVar0 /*5*/].f_4), false, true, true, true, false);
			func_207(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Local_506[iVar0 /*5*/].f_4), Local_506[iVar0 /*5*/].f_1);
		}
		iVar0++;
	}
	return 1;
}

int func_112()
{
	int iVar0;
	char cVar1[16];

	if (func_208() == 0)
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(iLocal_400, 5))
	{
		if (MISC::IS_BIT_SET(iLocal_399, 9))
		{
			STREAMING::REQUEST_MODEL(joaat("CART06"), false);
			if (STREAMING::HAS_MODEL_LOADED(joaat("CART06")))
			{
				iLocal_618 = VEHICLE::CREATE_VEHICLE(joaat("CART06"), vLocal_238, 0f, false, true, false, false);
				ENTITY::SET_ENTITY_COLLISION(iLocal_618, false, false);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_618, true);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_233, "cart06", iLocal_618, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("CART06"));
				MISC::SET_BIT(&iLocal_400, 5);
				return 1;
			}
			return 0;
		}
		else
		{
			MISC::SET_BIT(&iLocal_400, 5);
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_400, 1))
	{
		STREAMING::REQUEST_MODEL(iLocal_265, false);
		if (MISC::IS_BIT_SET(iLocal_399, 7))
		{
			STREAMING::REQUEST_MODEL(iLocal_266, false);
			if (!STREAMING::HAS_MODEL_LOADED(iLocal_266))
			{
				return 1;
			}
		}
		if (!Global_1048684.f_466)
		{
			STREAMING::REQUEST_MODEL(iLocal_267, false);
			if (!STREAMING::HAS_MODEL_LOADED(iLocal_267))
			{
				return 0;
			}
		}
		if (STREAMING::HAS_MODEL_LOADED(iLocal_265))
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_268 - 1))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_543[iVar0]))
				{
					if (iVar0 == 0)
					{
						if (!Global_1048684.f_466)
						{
							iLocal_543[iVar0] = OBJECT::CREATE_OBJECT(iLocal_267, vLocal_238, false, true, false, false, true);
						}
						else if (MISC::IS_BIT_SET(iLocal_399, 7))
						{
							iLocal_543[iVar0] = OBJECT::CREATE_OBJECT(iLocal_266, vLocal_238, false, true, false, false, true);
						}
						else
						{
							iLocal_543[iVar0] = OBJECT::CREATE_OBJECT(iLocal_265, vLocal_238, false, true, false, false, true);
						}
					}
					else
					{
						iLocal_543[iVar0] = OBJECT::CREATE_OBJECT(iLocal_265, vLocal_238, false, true, false, false, true);
					}
					StringCopy(&cVar1, "COFFIN_0", 16);
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					func_209(&(iLocal_543[iVar0]), cVar1);
				}
				iVar0++;
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_265);
			if (MISC::IS_BIT_SET(iLocal_399, 7))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_266);
			}
			MISC::SET_BIT(&iLocal_400, 1);
		}
		return 0;
	}
	if (!MISC::IS_BIT_SET(iLocal_400, 4))
	{
		iVar0 = 0;
		while (iVar0 <= 15)
		{
			if (func_210(iVar0))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_560[iVar0]) && MISC::IS_BIT_SET(iLocal_393, iVar0))
				{
					iLocal_560[iVar0] = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_REPEATER_CARBINE"), 1, vLocal_238, true, 1f);
					StringCopy(&cVar1, "RIFLE_", 16);
					if (iVar0 < 10)
					{
						StringConCat(&cVar1, "0", 16);
					}
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					func_209(&(iLocal_560[iVar0]), cVar1);
				}
			}
			iVar0++;
		}
		MISC::SET_BIT(&iLocal_400, 4);
		return 0;
	}
	if (!MISC::IS_BIT_SET(iLocal_400, 3))
	{
		if (MISC::IS_BIT_SET(iLocal_399, 6))
		{
			STREAMING::REQUEST_MODEL(joaat("P_CRATESTACK02BX"), false);
			STREAMING::REQUEST_MODEL(joaat("P_CRATE02X"), false);
			STREAMING::REQUEST_MODEL(joaat("P_CRATE05X"), false);
			if ((STREAMING::HAS_MODEL_LOADED(joaat("P_CRATESTACK02BX")) && STREAMING::HAS_MODEL_LOADED(joaat("P_CRATE02X"))) && STREAMING::HAS_MODEL_LOADED(joaat("P_CRATE05X")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_612[0]))
				{
					iLocal_612[0] = OBJECT::CREATE_OBJECT(joaat("P_CRATESTACK02BX"), vLocal_238, false, true, false, false, true);
					StringCopy(&cVar1, "CRATE_01", 16);
					func_209(&(iLocal_612[0]), cVar1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_612[1]))
				{
					iLocal_612[1] = OBJECT::CREATE_OBJECT(joaat("P_CRATE02X"), vLocal_238, false, true, false, false, true);
					StringCopy(&cVar1, "CRATE_02", 16);
					func_209(&(iLocal_612[1]), cVar1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_612[2]))
				{
					iLocal_612[2] = OBJECT::CREATE_OBJECT(joaat("P_CRATE05X"), vLocal_238, false, true, false, false, true);
					StringCopy(&cVar1, "CRATE_03", 16);
					func_209(&(iLocal_612[2]), cVar1);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CRATESTACK02BX"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CRATE02X"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CRATE05X"));
				MISC::SET_BIT(&iLocal_400, 3);
				return 0;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(joaat("MP001_P_MP_CRATETNT03X"), false);
			if (STREAMING::HAS_MODEL_LOADED(joaat("MP001_P_MP_CRATETNT03X")))
			{
				iVar0 = 0;
				while (iVar0 <= (iLocal_269 - 1))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_612[iVar0]))
					{
						iLocal_612[iVar0] = OBJECT::CREATE_OBJECT(joaat("MP001_P_MP_CRATETNT03X"), vLocal_238, false, true, false, false, true);
						StringCopy(&cVar1, "CRATE_0", 16);
						StringIntConCat(&cVar1, iVar0 + 1, 16);
						func_209(&(iLocal_612[iVar0]), cVar1);
					}
					iVar0++;
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("MP001_P_MP_CRATETNT03X"));
				MISC::SET_BIT(&iLocal_400, 3);
				return 0;
			}
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_400, 2))
	{
		STREAMING::REQUEST_MODEL(joaat("P_CHAIR09X"), false);
		if (STREAMING::HAS_MODEL_LOADED(joaat("P_CHAIR09X")))
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_270 - 1))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_595[iVar0]))
				{
					iLocal_595[iVar0] = OBJECT::CREATE_OBJECT(joaat("P_CHAIR09X"), vLocal_238, false, true, false, false, true);
					StringCopy(&cVar1, "CHAIR_", 16);
					if (iVar0 < 10)
					{
						StringConCat(&cVar1, "0", 16);
					}
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					func_209(&(iLocal_595[iVar0]), cVar1);
				}
				iVar0++;
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CHAIR09X"));
			MISC::SET_BIT(&iLocal_400, 2);
			return 0;
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_400, 6))
	{
		STREAMING::REQUEST_MODEL(joaat("P_BOTTLEJD01X"), false);
		if (STREAMING::HAS_MODEL_LOADED(joaat("P_BOTTLEJD01X")))
		{
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (func_210(iVar0))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_577[iVar0]) && MISC::IS_BIT_SET(iLocal_394, iVar0))
					{
						iLocal_577[iVar0] = OBJECT::CREATE_OBJECT(joaat("P_BOTTLEJD01X"), vLocal_238, false, true, false, false, true);
						StringCopy(&cVar1, "JD_BOTTLE_0", 16);
						StringIntConCat(&cVar1, iVar0 + 1, 16);
						func_209(&(iLocal_577[iVar0]), cVar1);
					}
				}
				iVar0++;
			}
			MISC::SET_BIT(&iLocal_400, 6);
			return 0;
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_400, 7))
	{
		STREAMING::REQUEST_MODEL(joaat("P_SHOVEL02X"), false);
		if (STREAMING::HAS_MODEL_LOADED(joaat("P_SHOVEL02X")))
		{
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (func_210(iVar0))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_586[iVar0]) && MISC::IS_BIT_SET(iLocal_395, iVar0))
					{
						iLocal_586[iVar0] = OBJECT::CREATE_OBJECT(joaat("P_SHOVEL02X"), vLocal_238, false, true, false, false, true);
						StringCopy(&cVar1, "SHOVEL_0", 16);
						StringIntConCat(&cVar1, iVar0 + 1, 16);
						func_209(&(iLocal_586[iVar0]), cVar1);
					}
				}
				iVar0++;
			}
			MISC::SET_BIT(&iLocal_400, 7);
			return 0;
		}
	}
	if ((((((MISC::IS_BIT_SET(iLocal_400, 3) && MISC::IS_BIT_SET(iLocal_400, 2)) && MISC::IS_BIT_SET(iLocal_400, 1)) && MISC::IS_BIT_SET(iLocal_400, 6)) && MISC::IS_BIT_SET(iLocal_400, 7)) && MISC::IS_BIT_SET(iLocal_400, 4)) && MISC::IS_BIT_SET(iLocal_400, 5))
	{
		return 1;
	}
	return 0;
}

int func_113()
{
	if (!func_87(&uLocal_370))
	{
		func_93(&uLocal_370, 0, 0);
	}
	else if (func_88(&uLocal_370, 0, 0) >= 8500)
	{
		return 1;
	}
	return 0;
}

void func_114(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_115()
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
	if (PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		PED::RESURRECT_PED(iVar1);
	}
	if (PED::_IS_PED_HOGTIED(iVar1))
	{
		TASK::_0x79559BAD83CCD038(iVar1, 3, 0, 0, 0, 1090519040 /* Float: 8f */);
	}
	if (PED::_0xB655DB7582AEC805(iVar1))
	{
		PED::_0xF6262491C7704A63(iVar1, 0);
	}
	PLAYER::_0x64FF4BF9AF59E139(iVar0, 1);
}

void func_116()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_406[iVar0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_406[iVar0], true);
			ENTITY::SET_ENTITY_INVINCIBLE(uLocal_406[iVar0], true);
			if (PED::IS_PED_DEAD_OR_DYING(uLocal_406[iVar0], true))
			{
				PED::RESURRECT_PED(uLocal_406[iVar0]);
			}
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_406[iVar0], false, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_406[iVar0], true);
			PED::_0xC991EF46FE323867(uLocal_406[iVar0], 1);
			PED::_0x2208438012482A1A(uLocal_406[iVar0], true, true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_1048684.f_22[iVar0 /*10*/]))
		{
			PED::DELETE_PED(&(Global_1048684.f_22[iVar0 /*10*/]));
		}
		iVar0++;
	}
}

void func_117(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<7> Var3[7];
	int iVar53;
	int iVar54;

	func_127();
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((uParam0[iVar0 /*23*/])->f_14 == 255 || (uParam0[iVar0 /*23*/])->f_14 == iLocal_403)
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE((uParam0[iVar0 /*23*/])->f_14))
		{
		}
		else
		{
			func_211((uParam0[iVar0 /*23*/])->f_14);
		}
		iVar0++;
	}
	if (bParam1)
	{
		iVar1 = GANG::_0x901E0DC25080C8B9(iLocal_403);
		if ((GANG::_0xD6F6ACF4392187FB(iVar1) && GANG::_0x0F99F6436528A089(iVar1)) && GANG::_0x93A91A351A07360E(iVar1))
		{
			iVar53 = GANG::_0xD1BF325C8252A982(iVar1, &Var3);
			if (iVar53 > 1 && iVar53 < 7)
			{
				iVar2 = 0;
				while (iVar2 <= (iVar53 - 1))
				{
					iVar54 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var3[iVar2 /*7*/]));
					if (iVar54 == 255 || iVar54 == iLocal_403)
					{
					}
					else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar54))
					{
					}
					else if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(Var3[iVar2 /*7*/])))
					{
					}
					else
					{
						func_211(iVar54);
					}
					iVar2++;
				}
			}
		}
	}
}

bool func_118()
{
	bool bVar0;

	if (!func_87(&uLocal_372))
	{
		func_93(&uLocal_372, 0, 0);
	}
	if (func_212())
	{
		if (func_88(&uLocal_372, 0, 0) < 0 && iLocal_363 > 2000)
		{
			bVar0 = true;
		}
		else if (func_88(&uLocal_372, 0, 0) > 8500)
		{
			bVar0 = true;
		}
		else if (STREAMING::_0x0909F71B5C070797() && func_88(&uLocal_372, 0, 0) > 4500)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (iLocal_233 != -1)
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_233, false))
				{
					ANIMSCENE::START_ANIM_SCENE(iLocal_233);
					return false;
				}
				else
				{
					func_19(&uLocal_16, 0);
					return true;
				}
			}
		}
		else
		{
			iLocal_363++;
		}
	}
	return false;
}

void func_119(int iParam0)
{
	iLocal_390 = iParam0;
}

bool func_120()
{
	float fVar0;

	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_233, false))
	{
		return false;
	}
	fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_233);
	if (fVar0 > 0.92f)
	{
		return true;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iLocal_233) || ANIMSCENE::_0xF94692EB9DC15D74(iLocal_233, 0))
	{
		return true;
	}
	if (func_87(&uLocal_372) && func_88(&uLocal_372, 0, 0) > 30000)
	{
		return true;
	}
	return false;
}

void func_121(bool bParam0)
{
	var uVar0;

	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PostMatchAndLeaderboard");
	if (bParam0 && MISC::IS_STRING_NULL_OR_EMPTY(&(Local_287[0 /*18*/])))
	{
		return;
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar0, "showMvpComponent", bParam0);
}

void func_122(bool bParam0)
{
	var uVar0;

	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PostMatchAndLeaderboard");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar0, "showWinnerComponent", bParam0);
}

void func_123()
{
	int iVar0;
	char* sVar1;
	struct<2> Var2;
	struct<2> Var4;

	iVar0 = PLAYER::PLAYER_ID();
	sVar1 = PLAYER::GET_PLAYER_NAME(iVar0);
	if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Local_287[0 /*18*/]))) && MISC::ARE_STRINGS_EQUAL(&(Local_287[0 /*18*/]), sVar1))
	{
		Var2 = { func_53(joaat("TIMES_MVP"), 0) };
		STATS::_STAT_ID_INCREMENT_INT(&Var2, 1);
		Global_1049159.f_8 = 1;
		Global_1049269++;
	}
	else
	{
		Global_1049269 = 0;
	}
	Var4 = { func_53(joaat("HIGHEST_STREAK_MVP"), joaat("SHOWDOWN")) };
	STATS::_0x91A4F58E01ED5E4C(&Var4, Global_1049269);
}

void func_124(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((uParam1[iVar0 /*23*/])->f_14 == 255)
		{
		}
		else if (func_213(&((uParam1[iVar0 /*23*/])->f_14)))
		{
			func_214(uParam0, &((uParam1[iVar0 /*23*/])->f_14), iVar0, 1);
		}
		iVar0++;
	}
}

void func_125(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((uParam1[iVar0 /*23*/])->f_14 == 255)
		{
		}
		else
		{
			func_215(uParam0, uParam1, iVar0, bParam2);
		}
		iVar0++;
	}
}

bool func_126()
{
	vector3 vVar0;
	int iVar4;

	iVar4 = 361663434;
	if (!func_216())
	{
		if (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar4))
		{
			if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iVar4, &vVar0))
			{
				switch (vVar0.x)
				{
					case -1203660660:
						if (vVar0.z == -871313792 && !MISC::IS_BIT_SET(iLocal_397, 3))
						{
							func_217(1, 0);
							AUDIO::PLAY_SOUND_FRONTEND("like", "RDRO_Winners_Screen_Sounds", true, 0);
						}
						else if (vVar0.z == -1691214074 && !MISC::IS_BIT_SET(iLocal_397, 3))
						{
							func_217(0, 0);
							AUDIO::PLAY_SOUND_FRONTEND("dislike", "RDRO_Winners_Screen_Sounds", true, 0);
						}
						else if (vVar0.z == -1823128591)
						{
							func_218(&uLocal_286);
						}
						else if (vVar0.z == 1535578700)
						{
							func_219();
							CAM::DO_SCREEN_FADE_OUT(150);
							AUDIO::PLAY_SOUND_FRONTEND("enter", "RDRO_Winners_Screen_Sounds", true, 0);
						}
						break;
				}
				UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
			}
		}
	}
	else
	{
		if (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar4))
		{
			UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
		}
		return true;
	}
	return false;
}

void func_127()
{
	var uVar0;

	if (SCRIPTS::_0x179A6F0EE2E79026(&(Global_1071686.f_22961.f_5)))
	{
		Global_1071686.f_22961.f_5 = uVar0;
	}
}

void func_128()
{
	int iVar0;

	iVar0 = func_221(func_220());
	if (!MISC::IS_BIT_SET(iLocal_397, 6))
	{
		if (iVar0 > 0)
		{
			MISC::SET_BIT(&iLocal_397, 6);
			func_222(&Local_32, &uLocal_232, iVar0);
		}
	}
	else if (iVar0 < 0)
	{
		func_175(&Local_32, &uLocal_232);
	}
	else
	{
		func_223(&uLocal_232, iVar0);
	}
}

void func_129()
{
	char cVar0[32];
	float fVar4;
	bool bVar5;
	float fVar6;
	char cVar7[32];
	int iVar11;
	char[] cVar12[8];

	if (!MISC::IS_BIT_SET(iLocal_398, 2))
	{
		if (func_224(&(Global_1048684.f_435)))
		{
			fVar4 = (BUILTIN::TO_FLOAT(Global_1048684.f_447) / 100f);
			StringCopy(&cVar0, func_225(fVar4, 2), 32);
			func_226(&Local_32, &cVar0);
			if (Global_1048684.f_470 != 0)
			{
				func_54(func_53(joaat("GOLD_WON"), Global_1048684.f_470), Global_1048684.f_447);
			}
			MISC::SET_BIT(&iLocal_398, 2);
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_398, 3))
	{
		bVar5 = (func_224(&(Global_1048684.f_403)) && func_224(&(Global_1048684.f_419)));
		if (bVar5)
		{
			fVar6 = (BUILTIN::TO_FLOAT((Global_1048684.f_403.f_8 + Global_1048684.f_419.f_8)) / 100f);
			StringCopy(&cVar7, func_225(fVar6, 2), 32);
			func_227(&Local_32, &cVar7);
			iVar11 = (Global_1048684.f_403.f_6 + Global_1048684.f_419.f_6);
			MISC::_INT_TO_STRING(iVar11, "%d", &cVar12);
			func_228(&Local_32, &cVar12);
			if (Global_1048684.f_470 != 0)
			{
				func_54(func_53(joaat("CASH_WON"), Global_1048684.f_470), (Global_1048684.f_403.f_8 + Global_1048684.f_419.f_8));
			}
			MISC::SET_BIT(&iLocal_398, 3);
		}
	}
}

void func_130(int iParam0)
{
	func_229(&(Global_1071686.f_23887.f_4), iParam0);
}

int func_131(int iParam0)
{
	if (func_230(&(Global_1102219.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_132(int iParam0)
{
	if (func_231(&(Global_1102219.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_133()
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
	if (func_232(2048))
	{
		return true;
	}
	if (func_233(1))
	{
		return true;
	}
	if (Global_1102219.f_26.f_3337 != 0)
	{
		return true;
	}
	return false;
}

bool func_134(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219.f_3 && iParam0) != 0;
	}
	return (Global_1100469[iParam1 /*53*/].f_3 && iParam0) != 0;
}

bool func_135(int iParam0)
{
	return (Global_1102219.f_26.f_9 && iParam0) == iParam0;
}

void func_136(int iParam0)
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
		func_234();
	}
	PLAYER::SET_PLAYER_INVINCIBLE(iVar0, false);
	if (!PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
	{
		ENTITY::SET_ENTITY_COLLISION(iVar1, true, false);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar1, true, false);
	}
}

void func_137(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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

void func_138(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	char cVar0[64];
	char cVar8[64];
	char cVar16[64];
	char cVar24[64];
	char cVar32[64];
	int iVar40;
	char cVar41[16];
	int iVar43;
	bool bVar44;
	bool bVar45;
	bool bVar46;
	bool bVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	struct<4> Var52;
	struct<4> Var56;
	struct<4> Var60;
	struct<4> Var64;
	char cVar68[32];
	char cVar72[32];
	char cVar76[32];
	char cVar80[32];

	StringCopy(&cVar0, PLAYER::GET_PLAYER_NAME(iParam3), 64);
	iVar40 = func_235(uParam0, iParam3);
	if (!MISC::IS_BIT_SET(uParam2->f_15, 0))
	{
		return;
	}
	if (bParam4)
	{
		StringCopy(&cVar16, MISC::_CREATE_VAR_STRING(2, "UIC_EF_TIM"), 64);
		StringCopy(&cVar41, "POS_", 16);
		StringIntConCat(&cVar41, iVar40 + 1, 16);
		StringCopy(&cVar8, MISC::_CREATE_VAR_STRING(2, &cVar41), 64);
		if ((BUILTIN::ROUND((uParam0[iVar40 /*23*/])->f_7) == 88400000 || BUILTIN::ROUND((uParam0[iVar40 /*23*/])->f_7) == 72800000) || BUILTIN::ROUND((uParam0[iVar40 /*23*/])->f_7) == 86400000)
		{
			StringCopy(&cVar16, MISC::_CREATE_VAR_STRING(2, "POS_OOT"), 64);
		}
		else
		{
			MISC::SET_BIT(&iVar43, 7);
			StringCopy(&cVar16, MISC::_CREATE_VAR_STRING(10, "UIC_EF_TIM", func_236(BUILTIN::ROUND((uParam0[iVar40 /*23*/])->f_7), iVar43, 0)), 64);
		}
	}
	else
	{
		iVar48 = func_237(uParam0[iVar40 /*23*/], uParam1->f_159, uParam1->f_160);
		iVar49 = func_238(uParam0[iVar40 /*23*/], uParam1->f_159, uParam1->f_160);
		iVar50 = func_239(uParam0[iVar40 /*23*/], uParam1->f_159, uParam1->f_160);
		iVar51 = func_240(uParam0[iVar40 /*23*/]);
		Var52 = { func_241(iVar48, uParam1->f_159, &bVar44) };
		Var56 = { func_242(iVar49, uParam1->f_159, uParam1->f_160, &bVar45) };
		Var60 = { func_243(iVar50, uParam1->f_159, uParam1->f_160, &bVar46) };
		Var64 = { func_244(&bVar47) };
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var52))
		{
			if (bVar44)
			{
				IntToString(&cVar68, iVar48, 32);
				StringConCat(&cVar68, " ", 32);
				StringConCat(&cVar68, &Var52, 32);
				StringCopy(&cVar8, MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", &cVar68), 64);
			}
			else
			{
				cVar68 = { Var52 };
				StringCopy(&cVar8, MISC::_CREATE_VAR_STRING(2, &cVar68, iVar48), 64);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var56))
		{
			if (bVar45)
			{
				IntToString(&cVar72, iVar49, 32);
				StringConCat(&cVar72, " ", 32);
				StringConCat(&cVar72, &Var56, 32);
				StringCopy(&cVar16, MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", &cVar72), 64);
			}
			else
			{
				cVar72 = { Var56 };
				StringCopy(&cVar16, MISC::_CREATE_VAR_STRING(2, &cVar72, iVar49), 64);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var60))
		{
			if (bVar46)
			{
				IntToString(&cVar76, iVar50, 32);
				StringConCat(&cVar76, " ", 32);
				StringConCat(&cVar76, &Var60, 32);
				StringCopy(&cVar24, MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", &cVar76), 64);
			}
			else
			{
				cVar76 = { Var60 };
				StringCopy(&cVar24, MISC::_CREATE_VAR_STRING(2, &cVar76, iVar50), 64);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var64))
		{
			if (bVar47)
			{
				IntToString(&cVar80, iVar51, 32);
				StringConCat(&cVar80, " ", 32);
				StringConCat(&cVar80, &Var64, 32);
				StringCopy(&cVar32, MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", &cVar80), 64);
			}
			else
			{
				cVar80 = { Var64 };
				StringCopy(&cVar32, MISC::_CREATE_VAR_STRING(2, &cVar80, iVar51), 64);
			}
		}
	}
	func_139(uParam2, &cVar0, "", &cVar8, &cVar16, &cVar24, &cVar32, joaat("COLOR_PURE_WHITE"));
	func_19(uParam2, 1);
}

void func_139(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_3))
	{
		uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "transitionData");
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_4))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_4, sParam1);
	}
	else
	{
		uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "gamerTag", sParam1);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_5))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_5, sParam2);
	}
	else
	{
		uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "teamName", sParam2);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_12))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_12, iParam7);
	}
	else
	{
		uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3, "teamNameColor", iParam7);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_6[0]))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_6[0], sParam3);
	}
	else
	{
		uParam0->f_6[0] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "info0", sParam3);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_6[1]))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_6[1], sParam4);
	}
	else
	{
		uParam0->f_6[1] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "info1", sParam4);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_6[2]))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_6[2], sParam5);
	}
	else
	{
		uParam0->f_6[2] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "info2", sParam5);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_6[3]))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_6[3], sParam6);
	}
	else
	{
		uParam0->f_6[3] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "info3", sParam6);
	}
}

bool func_140(var uParam0)
{
	if (!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(*uParam0))
	{
		return false;
	}
	if (MISC::IS_BIT_SET(uParam0->f_15, 0))
	{
		return true;
	}
	if (!UISTATEMACHINE::_0xF7C180F57F85D0B8(*uParam0))
	{
		func_81(uParam0);
		return false;
	}
	UISTATEMACHINE::_UISTATEMACHINE_REQUEST_TRANSITION(*uParam0, uParam0->f_2);
	MISC::SET_BIT(&(uParam0->f_15), 0);
	return true;
}

bool func_141()
{
	return Global_1896738.f_382;
}

void func_142()
{
	func_245(0);
}

bool func_143()
{
	return Global_1940311.f_1;
}

void func_144()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("SATCHEL")) > 0)
	{
		Global_1940311.f_12 = 1;
	}
}

bool func_145(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_146(int iParam0)
{
	return Global_262152 == iParam0;
}

bool func_147()
{
	return CAM::_0xA14D5FE82BCB1D9E();
}

void func_148(int iParam0)
{
	MISC::CLEAR_BIT(&Global_1048684, iParam0);
}

void func_149(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_132(66);
		if (bParam1)
		{
			func_132(69);
		}
	}
	else
	{
		func_131(66);
		func_131(69);
	}
}

void func_150(int iParam0)
{
	func_229(&Global_1051134, iParam0);
}

void func_151(vector3 vParam0, float fParam3, bool bParam4)
{
	char cVar0[64];
	char cVar8[64];

	if (bParam4)
	{
		StringCopy(&cVar0, MISC::_0x6C4DBF553885F9EB(vParam0), 64);
		StringCopy(&cVar8, MISC::_0x2B6846401D68E563(fParam3, 4), 64);
		Global_1102219.f_3837 = { vParam0 };
		Global_1102219.f_3840 = fParam3;
		func_132(50);
	}
	else
	{
		func_131(50);
	}
}

void func_152(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_132(62);
		if (bParam1)
		{
			func_132(69);
		}
	}
	else
	{
		func_131(62);
		func_131(50);
		func_131(69);
	}
}

int func_153(vector3 vParam0, var uParam3)
{
	if (func_145(vParam0))
	{
		return 0;
	}
	if (func_246(255) == 4)
	{
		return 0;
	}
	if (func_167(4, 255))
	{
	}
	func_132(4);
	func_247(&(Global_1102219.f_3879));
	Global_1102219.f_3879.f_6 = { vParam0 };
	Global_1102219.f_3879 = uParam3;
	Global_1102219.f_3879.f_5 = 1;
	Global_1102219.f_26.f_3341 = 0;
	Global_1102219.f_26.f_3342 = 0;
	func_248(Global_1102219.f_3879, 36);
	return 1;
}

int func_154()
{
	return Global_1893587.f_2;
}

void func_155(int iParam0, bool bParam1)
{
	var uVar0;
	struct<7> Var30;

	if (!func_249(&(Var30.f_6), &Var30))
	{
		Var30.f_6 = { Global_1071686.f_23887.f_366[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
		Var30 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
	}
	Var30.f_5 = 1;
	func_132(88);
	if (func_250(iParam0, &uVar0))
	{
		func_251(&uVar0, &Var30, 1, 1, 1);
		if (bParam1)
		{
			func_131(0);
		}
		return;
	}
	func_252(Var30.f_6, Var30, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 1, 1);
	if (bParam1)
	{
		func_131(0);
	}
}

bool func_156()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

bool func_157(bool bParam0)
{
	if (SCRIPTS::_DOES_THREAD_EXIST(Global_1051138))
	{
		SCRIPTS::_0x7DE4643157AD646C(Global_1051138);
		return false;
	}
	SCRIPTS::REQUEST_SCRIPT("net_ugc_end_flow_transition_handler");
	if (SCRIPTS::HAS_SCRIPT_LOADED("net_ugc_end_flow_transition_handler"))
	{
		Global_1051137 = 0;
		Global_1051138 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS("net_ugc_end_flow_transition_handler", bParam0, 1, 5506);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_ugc_end_flow_transition_handler");
		return true;
	}
	return false;
}

void func_158()
{
	Global_1051137 = 1;
}

void func_159()
{
	Global_1071686.f_28662.f_3 = 0;
	Global_1071686.f_28662.f_4 = 0;
}

void func_160()
{
	func_253(2);
}

void func_161(int iParam0)
{
	if (!func_254(iParam0))
	{
		return;
	}
	Global_1102219.f_26.f_9 = (Global_1102219.f_26.f_9 - (Global_1102219.f_26.f_9 && iParam0));
}

void func_162()
{
	bool bVar0;
	int iVar1;

	if (func_246(255) == 4 || func_255(0))
	{
		Global_1102219.f_3955 = 1;
		return;
	}
	bVar0 = func_255(36);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		Global_1102219.f_4[iVar1] = 0;
		iVar1++;
	}
	func_132(109);
	func_132(131);
	if (bVar0)
	{
		func_132(36);
	}
	Global_1102219.f_3952 = 0;
	Global_1102219.f_3953 = 0;
	Global_1102219.f_3954 = 0;
	Global_1102219.f_3955 = 0;
}

void func_163(bool bParam0)
{
	if (!bParam0)
	{
		func_131(29);
	}
	else
	{
		func_132(29);
	}
}

void func_164(bool bParam0)
{
	if (!bParam0)
	{
		func_131(15);
	}
	else
	{
		func_132(15);
	}
}

void func_165(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam1;
	MISC::SET_BIT(&iVar1, iVar0);
	func_256(uParam0, iVar1, iParam2);
}

void func_166()
{
	PLAYER::_0x93624B36E8851B42(PLAYER::GET_PLAYER_INDEX());
}

bool func_167(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_257(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 == func_258())
	{
		return func_257(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1296859.f_22[iParam1])
	{
		return func_257(&(Global_1100469[iParam1 /*53*/].f_4), iVar0, 5);
	}
	return false;
}

void func_168(int iParam0)
{
	if (Global_1049271 != iParam0)
	{
		Global_1049271 = iParam0;
	}
}

void func_169(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
}

void func_170(var uParam0, bool bParam1)
{
	int iVar0;

	UIAPPS::_CLOSE_APP_BY_HASH(joaat("LEADERBOARDS"));
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam0))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(*uParam0);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_142))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_142);
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_143[iVar0]))
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_143[iVar0]);
		}
		iVar0++;
	}
	AUDIO::_0x531A78D6BF27014B("MP_Leaderboard_Sounds");
	if (!bParam1)
	{
		func_171(&(uParam0->f_162));
	}
	func_193(0);
}

void func_171(var uParam0)
{
	int iVar0;

	uParam0->f_33 = 0;
	uParam0->f_34 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		(*uParam0)[iVar0] = 255;
		iVar0++;
	}
}

void func_172()
{
	Global_1071686.f_15 = 0;
	Global_1071686.f_14 = 50f;
}

int func_173(int iParam0)
{
	if (!STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		return 1;
	}
	if (func_259())
	{
		return 0;
	}
	STREAMING::_REMOVE_IMAP(iParam0);
	return 0;
}

void func_174()
{
	int iVar0;
	char cVar1[16];

	if (iLocal_233 != -1)
	{
		ANIMSCENE::ABORT_ANIM_SCENE(iLocal_233, false);
		func_260(&Local_506);
		func_261(&Local_506);
		func_260(&Local_532);
		func_261(&Local_532);
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1048684.f_22[iVar0 /*10*/]))
			{
				PED::DELETE_PED(&(Global_1048684.f_22[iVar0 /*10*/]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_406[iVar0]))
			{
				PED::DELETE_PED(&(uLocal_406[iVar0]));
			}
			iVar0++;
		}
		if (iLocal_233 != -1)
		{
			ANIMSCENE::ABORT_ANIM_SCENE(iLocal_233, false);
			iVar0 = 0;
			while (iVar0 <= 15)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_543[iVar0]))
				{
					StringCopy(&cVar1, "COFFIN_0", 16);
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_233, &cVar1, iLocal_543[iVar0]);
					OBJECT::DELETE_OBJECT(&(iLocal_543[iVar0]));
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_612[iVar0]))
				{
					StringCopy(&cVar1, "CRATE_0", 16);
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_233, &cVar1, iLocal_612[iVar0]);
					OBJECT::DELETE_OBJECT(&(iLocal_612[iVar0]));
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 15)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_560[iVar0]))
				{
					StringCopy(&cVar1, "RIFLE_0", 16);
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_233, &cVar1, iLocal_560[iVar0]);
					OBJECT::DELETE_OBJECT(&(iLocal_560[iVar0]));
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_577[iVar0]))
				{
					StringCopy(&cVar1, "JD_BOTTLE_0", 16);
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_233, &cVar1, iLocal_577[iVar0]);
					OBJECT::DELETE_OBJECT(&(iLocal_577[iVar0]));
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_586[iVar0]))
				{
					StringCopy(&cVar1, "SHOVEL_0", 16);
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_233, &cVar1, iLocal_586[iVar0]);
					OBJECT::DELETE_OBJECT(&(iLocal_586[iVar0]));
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 15)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_595[iVar0]))
				{
					StringCopy(&cVar1, "CHAIR_", 16);
					if (iVar0 < 10)
					{
						StringConCat(&cVar1, "0", 16);
					}
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_233, &cVar1, iLocal_595[iVar0]);
					OBJECT::DELETE_OBJECT(&(iLocal_595[iVar0]));
				}
				iVar0++;
			}
		}
		ANIMSCENE::RESET_ANIM_SCENE(iLocal_233, 0);
		iLocal_233 = -1;
	}
}

void func_175(var uParam0, var uParam1)
{
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "gameStartTimerLabel", " ");
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(*uParam1);
}

void func_176(bool bParam0)
{
	Global_1940144.f_19 = !bParam0;
}

int func_177(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_262(iParam2, -372840566);
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
	func_263(uParam1, iParam0, Var3);
	return 1;
}

void func_178(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = *uParam0;
	if (bParam1)
	{
		iVar0 = 0;
	}
	iVar1 = 0;
	while (iVar1 <= (func_264(16385) - 1))
	{
		iVar2 = func_265(iVar1);
		func_266(iVar2, func_74(iVar0, iVar2), uParam0);
		iVar1++;
	}
}

void func_179(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iLocal_268 = iParam0;
	iLocal_269 = iParam1;
	iLocal_270 = iParam2;
	iLocal_271 = iParam3;
	if (iLocal_271 == 1)
	{
	}
}

void func_180(int iParam0, int iParam1, char* sParam2, bool bParam3)
{
	vector3 vVar0[24];
	int iVar3;

	StringCopy(&cVar0, sParam2, 24);
	iVar3 = 0;
	while (iVar3 < 5)
	{
		if (!func_74(Global_1048684.f_378[iVar3 /*2*/], 4))
		{
		}
		else
		{
			if (func_74(Global_1048684.f_378[iVar3 /*2*/], 2))
			{
				Local_506[iVar3 /*5*/] = iParam1;
			}
			else
			{
				Local_506[iVar3 /*5*/] = iParam0;
			}
			StringCopy(&cVar0, sParam2, 24);
			if (iVar3 < 10)
			{
				StringConCat(&cVar0, "0", 24);
			}
			StringIntConCat(&cVar0, iVar3 + 1, 24);
			if (bParam3 && func_74(Global_1048684.f_378[iVar3 /*2*/], 2))
			{
				StringConCat(&cVar0, "F", 24);
			}
			Local_506[iVar3 /*5*/].f_1 = { cVar0 };
		}
		iVar3++;
	}
}

void func_181(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;
	vector3 vVar1[24];

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Local_532[iVar0 /*5*/] != 0)
		{
		}
		else
		{
			StringCopy(&cVar1, sParam1, 24);
			if (iVar0 < 10)
			{
				StringConCat(&cVar1, "0", 24);
			}
			StringIntConCat(&cVar1, iVar0 + 1, 24);
			if (!bParam2)
			{
				StringConCat(&cVar1, "F", 24);
			}
			Local_532[iVar0 /*5*/].f_1 = { cVar1 };
			Local_532[iVar0 /*5*/] = iParam0;
			return;
		}
		iVar0++;
	}
}

void func_182(int iParam0)
{
	MISC::SET_BIT(&iLocal_393, iParam0);
}

void func_183(int iParam0)
{
	MISC::SET_BIT(&iLocal_394, iParam0);
}

void func_184(int iParam0)
{
	MISC::SET_BIT(&iLocal_395, iParam0);
}

void func_185()
{
	if (iLocal_233 == -1)
	{
		iLocal_233 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_234, 130, 0, false, true);
	}
}

int func_186(vector3 vParam0)
{
	return func_267(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

void func_187(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	fLocal_272 = fParam0;
	fLocal_273 = fParam1;
	fLocal_275 = fParam2;
	fLocal_276 = fParam3;
	fLocal_277 = fParam4;
	fLocal_278 = fParam5;
}

Vector3 func_188()
{
	switch (iLocal_244)
	{
		case -1645988897:
		case joaat("MP001_MP_WINLOSE_SWAMP"):
			return 0f, -440f, 0f;
		case joaat("MP001_MP_WINLOSE_SNOW"):
		case joaat("MP001_CELEB_SCREEN_SNOW"):
			return 0f, -880f, 0f;
		case joaat("MP001_CELEB_SCREEN_DESERT"):
		case joaat("MP001_MP_WINLOSE_DESERT"):
			return 0f, -1320f, 0f;
		case joaat("MP001_MP_WINLOSE_FOREST"):
		case 1755785548:
			return 0f, -1760f, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_189(bool bParam0, int iParam1)
{
	if (func_268(iParam1))
	{
		return;
	}
	if (bParam0)
	{
		if (iParam1 >= 0 && iParam1 <= 4)
		{
			ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_233, "CameraIndex", 3, false);
		}
		else if (iParam1 >= 0 && iParam1 <= 8)
		{
			ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_233, "CameraIndex", 2, false);
		}
		else
		{
			ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_233, "CameraIndex", 1, false);
		}
	}
	else if (iParam1 >= 0 && iParam1 <= 4)
	{
		ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_233, "CameraIndex", 12, false);
	}
	else if (iParam1 >= 0 && iParam1 <= 8)
	{
		ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_233, "CameraIndex", 11, false);
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_233, "CameraIndex", 10, false);
	}
}

bool func_190(int iParam0)
{
	if (STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		return true;
	}
	if (func_259())
	{
		return false;
	}
	STREAMING::_REQUEST_IMAP(iParam0);
	return false;
}

int func_191(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_269((*uParam0)[iVar0 /*5*/]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_192(int iParam0)
{
	Global_1956200.f_1431.f_2 = 0f;
	Global_1956200.f_1431.f_1 = iParam0;
}

void func_193(int iParam0)
{
	if (Global_1903133.f_1 != iParam0)
	{
		Global_1903133.f_1 = iParam0;
	}
}

void func_194(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_195(bool bParam0)
{
	if (bParam0)
	{
		return joaat("LEADERBOARD");
	}
	return -987928333;
}

int func_196()
{
	return 205122612;
}

bool func_197()
{
	if (Global_1940144.f_20 && Global_1940144.f_5 == 1)
	{
		return true;
	}
	return false;
}

bool func_198(int iParam0)
{
	return (Global_1102219.f_3520 && iParam0) != 0;
}

void func_199(int iParam0)
{
	iLocal_401 = iParam0;
}

void func_200(int iParam0)
{
	if (MISC::IS_BIT_SET(iLocal_621, iParam0))
	{
	}
	else
	{
		MISC::SET_BIT(&iLocal_621, iParam0);
		HUD::_HIDE_HUD_COMPONENT(func_270(iParam0));
	}
}

void func_201(int iParam0, bool bParam1)
{
	if (MISC::IS_BIT_SET(iLocal_621, iParam0) || bParam1)
	{
		MISC::CLEAR_BIT(&iLocal_621, iParam0);
		HUD::_DISPLAY_HUD_COMPONENT(func_270(iParam0));
	}
}

void func_202()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_1050050.f_101[iVar0 /*23*/].f_14.f_1), &(Global_1050050.f_27[0 /*18*/])))
		{
			Global_1050050.f_101[iVar0 /*23*/].f_13 = 1;
			return;
		}
		else
		{
			Global_1050050.f_101[iVar0 /*23*/].f_13 = 0;
		}
		iVar0++;
	}
}

void func_203(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10)
{
	func_271(uParam0, uParam1, uParam2, iParam7, bParam4, bParam3, bParam5, bParam8, bParam9, iParam10, iParam6);
	func_272(uParam0, uParam1, bParam5, iParam6, uParam2, MISC::IS_BIT_SET(uParam0->f_159, 5), iParam10);
}

void func_204(var uParam0, char* sParam1)
{
	if (!MISC::IS_BIT_SET(uParam0->f_158, 7))
	{
		MISC::SET_BIT(&(uParam0->f_158), 7);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Heading", sParam1);
	}
}

void func_205(bool bParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;

	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PostMatchAndLeaderboard");
	uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar0, "likeButton");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar1, "visible", bParam0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar1, "enabled", bParam0);
	uVar2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar0, "dislikeButton");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar2, "visible", bParam0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar2, "enabled", bParam0);
}

bool func_206()
{
	if (!func_74(Global_1048684.f_378[iLocal_505 /*2*/], 4))
	{
		return true;
	}
	if (Local_506[iLocal_505 /*5*/] == 0)
	{
		return true;
	}
	Local_506[iLocal_505 /*5*/].f_4 = PED::CREATE_PED(Local_506[iLocal_505 /*5*/], vLocal_235, 0f, false, true, false, false);
	return true;
}

void func_207(int iParam0, var uParam1, var uParam2, var uParam3)
{
	ENTITY::SET_ENTITY_COLLISION(iParam0, false, false);
	ENTITY::FREEZE_ENTITY_POSITION(iParam0, true);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_233, &uParam1, iParam0, 0);
}

int func_208()
{
	int iVar0;

	if (MISC::IS_BIT_SET(iLocal_399, 8))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Local_532[iVar0 /*5*/] == 0)
		{
		}
		else
		{
			Local_532[iVar0 /*5*/].f_4 = OBJECT::CREATE_OBJECT(Local_532[iVar0 /*5*/], vLocal_235, false, true, false, false, true);
			func_273(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(Local_532[iVar0 /*5*/].f_4), Local_532[iVar0 /*5*/].f_1);
		}
		iVar0++;
	}
	MISC::SET_BIT(&iLocal_399, 8);
	return 1;
}

void func_209(var uParam0, char[4] cParam1, char[4] cParam2)
{
	ENTITY::SET_ENTITY_COLLISION(*uParam0, false, false);
	ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_233, &cParam1, *uParam0, 0);
}

bool func_210(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= (Global_1048684.f_376 - 1))
	{
		if (Global_1048684.f_22[iVar0 /*10*/].f_9)
		{
			if (iVar1 == iParam0)
			{
				return true;
			}
			iVar1++;
		}
		iVar0++;
	}
	return false;
}

void func_211(int iParam0)
{
	if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_22961.f_5), iParam0))
	{
		SCRIPTS::_0x31010318BA9897AC(&(Global_1071686.f_22961.f_5), iParam0);
		func_274(iParam0);
	}
}

bool func_212()
{
	switch (iLocal_392)
	{
		case 0:
			func_275();
			return false;
		case 1:
			func_276();
			return false;
		case 2:
			func_277();
			return false;
		default:
			break;
	}
	return iLocal_392 == 3;
}

bool func_213(var uParam0)
{
	if (*uParam0 != 255)
	{
		return true;
	}
	else if (Global_2883584 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1)))
	{
		return true;
	}
	return false;
}

void func_214(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	char cVar0[64];
	char cVar8[64];
	struct<8> Var16;

	if (func_278() > 0)
	{
		return;
	}
	StringCopy(&cVar0, "mp_lobby_textures", 64);
	StringCopy(&cVar8, "TEMP_PEDSHOT", 64);
	MemCopy(&Var16, {func_279(uParam0, *uParam1)}, 8);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var16) && !MISC::ARE_STRINGS_EQUAL(&Var16, "Invalid Handle"))
	{
		cVar0 = { Var16 };
		cVar8 = { Var16 };
	}
	if (bParam3)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_45[iParam2 /*3*/][0], &cVar0);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_45[iParam2 /*3*/][1], &cVar8);
	}
	else
	{
		uParam0->f_45[iParam2 /*3*/][0] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iParam2], "AvatarDictionary", &cVar0);
		uParam0->f_45[iParam2 /*3*/][1] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iParam2], "AvatarTexture", &cVar8);
	}
}

void func_215(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	iVar0 = 0;
	iVar1 = PLAYER::PLAYER_ID();
	bVar2 = iVar1 == (uParam1[iParam2 /*23*/])->f_14;
	iVar0 = func_280(uParam0, uParam1, iParam2, iVar1, bVar2);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE((uParam1[iParam2 /*23*/])->f_14) && VOICE::_0x919AF2D93E9AA89D((uParam1[iParam2 /*23*/])->f_14))
	{
		bVar3 = VOICE::_0xEF6F2A35FAAF2ED7((uParam1[iParam2 /*23*/])->f_14);
	}
	else
	{
		bVar3 = false;
	}
	if (bVar3)
	{
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iParam2], "HeadsetIconVisible", bVar3);
	if (!bParam3)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_12[iParam2], "HeadsetIconColor", iVar0);
	}
	if (bVar3)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iParam2], "ShowBlip", false);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iParam2], "ShowBlip", true);
	}
}

bool func_216()
{
	return MISC::IS_BIT_SET(iLocal_397, 8);
}

void func_217(bool bParam0, bool bParam1)
{
	func_205(0);
	if (!bParam1)
	{
		Local_380 = Global_1050949;
		Local_380.f_2 = Global_1050949.f_2;
		Local_380.f_1 = Global_1050949.f_1;
		Local_380.f_3 = Global_1050949.f_3;
		Local_380.f_5 = 0;
		Local_380.f_7 = Global_1050949.f_7;
		Local_380.f_8 = Global_1050949.f_8;
		if (func_51(2) || func_51(4))
		{
			Local_380.f_4 = 1;
		}
		else
		{
			Local_380.f_4 = 0;
		}
		if (bParam0)
		{
			Local_380.f_6 = 1f;
		}
		else
		{
			Local_380.f_6 = -1f;
		}
		TELEMETRY::_0xEF3C68F56BAD7B69(&Global_1050925, &Local_380);
		func_66(-304137656, 0, 255, 0, 0);
	}
	MISC::SET_BIT(&iLocal_397, 3);
}

void func_218(var uParam0)
{
	var uVar0;

	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PostMatchAndLeaderboard");
	if (*uParam0)
	{
		*uParam0 = 0;
	}
	else
	{
		*uParam0 = 1;
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar0, "revealScoreboard", *uParam0);
}

void func_219()
{
	func_281();
	func_105(0);
	func_98(0);
}

int func_220()
{
	if (func_21(1))
	{
		return Global_265377.f_124517.f_71.f_18;
	}
	if (Global_263042[Global_1296859 /*70*/].f_1.f_18 != 2147483647)
	{
		return Global_263042[Global_1296859 /*70*/].f_1.f_18;
	}
	return -1;
}

int func_221(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = func_282();
	switch (iVar1)
	{
		case -1:
			return -1;
		case 0:
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if (Global_262155.f_1[iVar0 /*5*/] == iParam0)
				{
					return Global_262155.f_1[iVar0 /*5*/].f_4;
				}
				iVar0++;
			}
			return -1;
		case 1:
			if (Global_262155.f_1[Global_262155.f_162 /*5*/] == 2147483647)
			{
				return -1;
			}
			return Global_262155.f_1[Global_262155.f_162 /*5*/].f_4;
		default:
			break;
	}
	return -1;
}

void func_222(var uParam0, var uParam1, int iParam2)
{
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "gameStartTimerLabel", HUD::_GET_LABEL_TEXT("GAME_START_TIMER"));
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "gameStartTimer", func_283(iParam2));
}

void func_223(var uParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(*uParam0, func_283(iParam1));
}

bool func_224(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

char* func_225(float fParam0, int iParam1)
{
	char* sVar0;

	sVar0 = MISC::_0x2B6846401D68E563(fParam0, iParam1);
	return func_284(sVar0, joaat("COLOR_PURE_WHITE"));
}

void func_226(var uParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "info_visible_06", true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(*uParam0, "info_value_06", sParam1);
}

void func_227(var uParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "info_visible_07", true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(*uParam0, "info_value_07", sParam1);
}

void func_228(var uParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "info_visible_08", true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(*uParam0, "info_value_08", sParam1);
}

void func_229(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_230(var uParam0, int iParam1, int iParam2)
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

bool func_231(var uParam0, int iParam1, int iParam2)
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

bool func_232(int iParam0)
{
	return (Global_1102219.f_26.f_9 && iParam0) != 0;
}

bool func_233(int iParam0)
{
	return (Global_1102219.f_26.f_7 && iParam0) != 0;
}

void func_234()
{
	if (!Global_1102219.f_16)
	{
		return;
	}
	Global_1071686.f_28662.f_5 = 1;
	AUDIO::_0x531A78D6BF27014B("rdro_gamemode_transition_sounds");
	AUDIO::_0x531A78D6BF27014B("rdro_gamemode_generic_sounds");
}

int func_235(var uParam0, int iParam1)
{
	int iVar0;
	char* sVar1;

	if (iParam1 == 255)
	{
		return 0;
	}
	sVar1 = PLAYER::GET_PLAYER_NAME(iParam1);
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((uParam0[iVar0 /*23*/])->f_14 == iParam1 || MISC::ARE_STRINGS_EQUAL(&((uParam0[iVar0 /*23*/])->f_14.f_1), sVar1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

char* func_236(int iParam0, int iParam1, bool bParam2)
{
	char cVar0[32];

	StringCopy(&cVar0, "", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	if (bParam2)
	{
		if (iParam0 == 0)
		{
			return " ";
		}
		else if ((((iParam0 == 1000000000 || iParam0 == 88400000) || iParam0 == 72800000) || iParam0 == 87400000) || iParam0 == BUILTIN::ROUND(-3f))
		{
			return "--:--:--";
		}
		else
		{
			return func_285(iParam0, 1, 2, MISC::IS_BIT_SET(iParam1, 12), 0, 0);
		}
	}
	else if ((MISC::IS_BIT_SET(iParam1, 3) || MISC::IS_BIT_SET(iParam1, 4)) || MISC::IS_BIT_SET(iParam1, 7))
	{
		if (iParam0 == 0)
		{
			return HUD::_GET_LABEL_TEXT("POS_LEAD");
		}
		else if (iParam0 == 88400000 || iParam0 == 72800000)
		{
			return HUD::_GET_LABEL_TEXT("POS_DNF");
		}
		else if (iParam0 == 87400000)
		{
			return HUD::_GET_LABEL_TEXT("POS_ELIM");
		}
		else if (iParam0 == BUILTIN::ROUND(-3f))
		{
			return "--:--:--";
		}
		else
		{
			return func_285(iParam0, 1, 2, MISC::IS_BIT_SET(iParam1, 12), 0, 0);
		}
	}
	if (MISC::IS_BIT_SET(iParam1, 21))
	{
		if (iParam0 <= 0 || iParam0 == 1000000000)
		{
			return "--:--:--";
		}
		else
		{
			return func_285(iParam0, 1, 2, 0, 0, 0);
		}
	}
	if (iParam0 < 0)
	{
		return "";
	}
	return func_286(&cVar0);
}

int func_237(var uParam0, int iParam1, var uParam2)
{
	float fVar0;

	fVar0 = uParam0->f_1;
	if (func_72())
	{
		func_287(uParam0, 0);
	}
	else if (MISC::IS_BIT_SET(iParam1, 19))
	{
		fVar0 = uParam0->f_6;
	}
	return BUILTIN::ROUND(fVar0);
}

int func_238(var uParam0, int iParam1, int iParam2)
{
	float fVar0;

	fVar0 = uParam0->f_2;
	if (func_72())
	{
		func_287(uParam0, 1);
	}
	else
	{
		if (MISC::IS_BIT_SET(iParam1, 19))
		{
			fVar0 = uParam0->f_1;
		}
		if (MISC::IS_BIT_SET(iParam2, 2))
		{
			fVar0 = uParam0->f_5;
		}
	}
	return BUILTIN::ROUND(fVar0);
}

int func_239(var uParam0, int iParam1, int iParam2)
{
	float fVar0;

	fVar0 = uParam0->f_2;
	if (func_72())
	{
		func_287(uParam0, 2);
	}
	else if (MISC::IS_BIT_SET(iParam1, 19) || MISC::IS_BIT_SET(iParam2, 5))
	{
		fVar0 = uParam0->f_5;
	}
	return BUILTIN::ROUND(fVar0);
}

int func_240(var uParam0)
{
	float fVar0;

	fVar0 = uParam0->f_2;
	if (func_72())
	{
		func_287(uParam0, 3);
	}
	return BUILTIN::ROUND(fVar0);
}

struct<4> func_241(int iParam0, int iParam1, var uParam2)
{
	char cVar0[32];
	bool bVar4;

	if (func_72())
	{
		MemCopy(&cVar0, {func_288(0, uParam2)}, 4);
	}
	else
	{
		bVar4 = IntToFloat(iParam0) == 1f;
		if (MISC::IS_BIT_SET(iParam1, 19))
		{
			if (bVar4)
			{
				StringCopy(&cVar0, "UIC_EF_BOUS", 32);
			}
			else
			{
				StringCopy(&cVar0, "UIC_EF_BOUP", 32);
			}
		}
		else if (bVar4)
		{
			StringCopy(&cVar0, "UIC_EF_KILLS", 32);
		}
		else
		{
			StringCopy(&cVar0, "UIC_EF_KILLP", 32);
		}
	}
	return cVar0;
}

struct<4> func_242(int iParam0, int iParam1, int iParam2, var uParam3)
{
	char cVar0[32];
	bool bVar4;

	if (func_72())
	{
		MemCopy(&cVar0, {func_288(1, uParam3)}, 4);
	}
	else
	{
		bVar4 = IntToFloat(iParam0) == 1f;
		if (MISC::IS_BIT_SET(iParam2, 1) || MISC::IS_BIT_SET(iParam2, 2))
		{
			if (bVar4)
			{
				StringCopy(&cVar0, "UIC_EF_DELIVS", 32);
			}
			else
			{
				StringCopy(&cVar0, "UIC_EF_DELIVP", 32);
			}
		}
		else if (MISC::IS_BIT_SET(iParam1, 19))
		{
			if (bVar4)
			{
				StringCopy(&cVar0, "UIC_EF_KILLS", 32);
			}
			else
			{
				StringCopy(&cVar0, "UIC_EF_KILLP", 32);
			}
		}
		else if (MISC::IS_BIT_SET(iParam1, 20))
		{
			StringCopy(&cVar0, "UIC_EF_ACC", 32);
		}
		else if (bVar4)
		{
			StringCopy(&cVar0, "UIC_EF_DEATHS", 32);
		}
		else
		{
			StringCopy(&cVar0, "UIC_EF_DEATHP", 32);
		}
	}
	return cVar0;
}

struct<4> func_243(int iParam0, int iParam1, int iParam2, var uParam3)
{
	char cVar0[32];
	bool bVar4;

	if (func_72())
	{
		MemCopy(&cVar0, {func_288(2, uParam3)}, 4);
	}
	else
	{
		bVar4 = iParam0 == true;
		if (MISC::IS_BIT_SET(iParam2, 5))
		{
			if (bVar4)
			{
				StringCopy(&cVar0, "UIC_EF_PNTS", 32);
			}
			else
			{
				StringCopy(&cVar0, "UIC_EF_PNTP", 32);
			}
		}
		else if (MISC::IS_BIT_SET(iParam1, 19))
		{
			if (bVar4)
			{
				StringCopy(&cVar0, "UIC_EF_CAPTS", 32);
			}
			else
			{
				StringCopy(&cVar0, "UIC_EF_CAPTP", 32);
			}
		}
	}
	return cVar0;
}

struct<4> func_244(var uParam0)
{
	struct<4> Var0;

	if (func_72())
	{
		MemCopy(&Var0, {func_288(3, uParam0)}, 4);
	}
	return Var0;
}

void func_245(bool bParam0)
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

int func_246(int iParam0)
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

void func_247(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_248(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

bool func_249(var uParam0, var uParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;

	uVar0 = Global_1071686.f_23887.f_366[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/];
	iVar1 = func_289(uVar0);
	if (iVar1 <= 0)
	{
		return false;
	}
	else
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
		if (func_290(uVar0, iVar2, uParam0, uParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_250(int iParam0, var uParam1)
{
	var uVar0;
	vector3 vVar1;
	float fVar4;

	if (!func_291(iParam0))
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

void func_251(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	if (func_246(255) == 4)
	{
		return;
	}
	if (bParam3)
	{
		if (func_145(uParam0->f_17.f_6))
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
	if (func_145(uParam1->f_6))
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
	func_132(0);
	func_132(3);
	Global_1102219.f_3919 = iParam2;
	Global_1102219.f_3920 = bParam3;
	Global_1102219.f_3921 = iParam4;
	func_292(&(Global_1102219.f_3849));
	Global_1102219.f_3849 = { *uParam0 };
	func_293(&(Global_1102219.f_3888));
	Global_1102219.f_3888 = { *uParam1 };
	Global_1102219.f_26.f_3341 = 0;
	Global_1102219.f_26.f_3342 = 0;
	func_294(Global_1102219.f_3849, 36);
	func_295(Global_1102219.f_3888, 36);
}

void func_252(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, float fParam8)
{
	vector3 vVar0;
	int iVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
	iVar3 = iParam3;
	if (!func_296(Global_1296859.f_17, &vVar0, &iVar3))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
		iVar3 = iParam3;
	}
	func_297(vParam0, iParam3, vVar0, iVar3, iParam4, iParam5, iParam6, iParam7, fParam8, 1);
}

void func_253(int iParam0)
{
	func_298(&(Global_1071686.f_23887.f_4), iParam0);
}

bool func_254(int iParam0)
{
	return (Global_1102219.f_26.f_9 && iParam0) != 0;
}

bool func_255(int iParam0)
{
	return (Global_1102219.f_4[Global_1106305[iParam0 /*2*/]] && Global_1106305[iParam0 /*2*/].f_1) == Global_1106305[iParam0 /*2*/].f_1;
}

void func_256(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (iParam1 == 0)
	{
		return;
	}
	Var0.f_1 = 1;
	Var0 = 2;
	Var0.f_3 = iParam2;
	iVar4 = iParam1;
	Var0.f_2 = iVar4;
	func_299(&Var0);
	uParam0->f_33 = (uParam0->f_33 || iParam1);
}

bool func_257(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_258()
{
	return Global_1102219.f_3672;
}

bool func_259()
{
	return func_300() == 4;
}

void func_260(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0 /*5*/] != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED((*uParam0)[iVar0 /*5*/]);
		}
		iVar0++;
	}
}

void func_261(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST((uParam0[iVar0 /*5*/])->f_4))
		{
		}
		else
		{
			ENTITY::DELETE_ENTITY(&((uParam0[iVar0 /*5*/])->f_4));
		}
		iVar0++;
	}
}

void func_262(int iParam0, int iParam1)
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

void func_263(var uParam0, int iParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_224(uParam0))
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

int func_264(int iParam0)
{
	return func_301(iParam0) + 1;
}

int func_265(int iParam0)
{
	return BUILTIN::SHIFT_LEFT(1, iParam0);
}

void func_266(int iParam0, bool bParam1, var uParam2)
{
	switch (iParam0)
	{
		case 1:
			if (bParam1 || !func_74(*uParam2, 8))
			{
				func_302(-1484676996, bParam1);
			}
			func_303("MS_FortM_MP", bParam1);
			break;
		case 2:
			func_302(1510350995, bParam1);
			break;
		case 4:
			func_302(-1591103463, bParam1);
			break;
		case 8:
			if (bParam1 || !func_74(*uParam2, 1))
			{
				func_302(-1484676996, bParam1);
			}
			func_302(joaat("MP001_MP_REVENGE1_MERCER"), bParam1);
			func_302(1646485471, bParam1);
			func_304(joaat("MP001_MP_REVENGE1_MERCER"), bParam1);
			func_303("MS_MP001_MP_REVENGE01", bParam1);
			break;
		case 16:
			func_302(-2131576785, bParam1);
			func_302(-2137016051, bParam1);
			func_302(1193151399, bParam1);
			func_302(-1353871107, bParam1);
			func_302(2026630914, bParam1);
			func_302(-225844616, bParam1);
			func_303("MS_mp001_sisika", bParam1);
			break;
		case 64:
			func_302(-200270658, bParam1);
			func_302(joaat("MP001_GUNVOUTDECISION03_02"), bParam1);
			func_303("MS_MP001_GUNVOUTDECISION03", bParam1);
			func_304(joaat("MP001_GUNVOUTDECISION03_02"), bParam1);
			break;
		case 256:
			func_302(331698185, bParam1);
			break;
		case 128:
			func_304(joaat("MP001_MP_GUN1"), bParam1);
			break;
		case 512:
			func_302(-770646513, bParam1);
			break;
		case 32:
			func_302(-1876837239, bParam1);
			break;
		case 1024:
			func_302(401370450, bParam1);
			func_302(1183263476, bParam1);
			func_302(573140494, bParam1);
			break;
		case 2048:
			func_302(-1407497494, bParam1);
			func_302(-1161238459, bParam1);
			func_302(-1583237641, bParam1);
			break;
		case 4096:
			func_302(-1744971427, bParam1);
			break;
		case 8192:
			func_302(793572138, bParam1);
			break;
		case 16384:
			func_302(1773228786, bParam1);
			func_303("nav_moonshine_moon3_extended_terrain", bParam1);
			break;
	}
	if (bParam1)
	{
		func_229(uParam2, iParam0);
	}
	else
	{
		func_298(uParam2, iParam0);
	}
}

int func_267(int iParam0)
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

bool func_268(int iParam0)
{
	if (MISC::IS_BIT_SET(iLocal_399, 2))
	{
		if (iParam0 >= 0 && iParam0 <= 1)
		{
			ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_233, "CameraIndex", 11, false);
		}
		else
		{
			ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_233, "CameraIndex", 1, false);
		}
		return true;
	}
	return false;
}

bool func_269(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_270(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 598430796;
		case 1:
			return 690901814;
		case 3:
			return 2083323686;
		case 2:
			return 474191950;
		case 4:
			return 128623374;
		case 6:
			return -993263478;
		case 7:
			return 1344742130;
		case 8:
			return 537169871;
		case 9:
			return -1763610107;
		case 10:
			return 68203906;
		case 11:
			return 253418738;
		case 12:
			return 433996714;
		case 13:
			return 999578278;
	}
	return 0;
}

void func_271(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	char cVar1[32];

	if (bParam4)
	{
		if (func_72())
		{
			func_305(uParam0);
		}
		else
		{
			func_306(uParam0, bParam5, bParam7);
		}
	}
	uParam0->f_149 = 0;
	if (iParam3 != -1)
	{
		uParam0->f_150 = iParam3;
	}
	if (MISC::IS_BIT_SET(uParam0->f_159, 5))
	{
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		StringCopy(&cVar1, "MiniListItem_", 32);
		if (iVar0 < 10)
		{
			StringConCat(&cVar1, "0", 32);
		}
		StringIntConCat(&cVar1, iVar0, 32);
		uParam0->f_143[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam0, &cVar1);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_143[iVar0], "Position", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_143[iVar0], "Gamertag", "");
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_143[iVar0], "GamertagColor", 0);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_143[iVar0], "StatPriority", "");
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		StringCopy(&cVar1, "LeaderboardListItem_", 32);
		if (iVar0 < 10)
		{
			StringConCat(&cVar1, "0", 32);
		}
		StringIntConCat(&cVar1, iVar0, 32);
		uParam0->f_12[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam0, &cVar1);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_12[iVar0], "Position", 0);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_12[iVar0], "ShowCross", false);
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_12[iVar0], "CrossColor", joaat("COLOR_RED"));
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iVar0], "Gamertag", "");
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_12[iVar0], "GamertagColor", 0);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_12[iVar0], "ShowCrewTag", true);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iVar0], "CrewTag", "");
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_12[iVar0], "ShowRank", true);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iVar0], "Rank", "0");
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_12[iVar0], "Spectating", false);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iVar0], "Stat0", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iVar0], "Stat1", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iVar0], "Stat2", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iVar0], "Stat3", "");
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_12[iVar0], "ShowBlip", func_307());
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_12[iVar0], "BlipColor", 0);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iVar0], "Blip", "BLIP_AMBIENT_PED_MEDIUM");
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_12[iVar0], "isHighlighted", false);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_12[iVar0], "HeadsetIconVisible", false);
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_12[iVar0], "HeadsetIconColor", joaat("COLOR_PURE_WHITE"));
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_12[iVar0], "ShowBlip", true);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "info_visible_06", false);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "info_visible_07", false);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "info_visible_08", false);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "info_value_06", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "info_value_07", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "info_value_08", "");
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_12[iVar0], "SetOverlayImg", 1);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_12[iVar0], "ShowOverlay", false);
		func_214(uParam0, &((uParam1[iVar0 /*23*/])->f_14), iVar0, 0);
		iVar0++;
	}
	if (func_72())
	{
		func_308(uParam0, uParam1, uParam2, bParam6, bParam5, bParam7, bParam8, iParam9, iParam10);
	}
	else
	{
		func_309(uParam0, uParam1, uParam2, bParam6, bParam5, bParam7, bParam8, iParam9, iParam10);
	}
}

void func_272(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4[8];
	int iVar13;
	int iVar14;
	bool bVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;

	iVar13 = 0;
	iVar14 = 32;
	bVar16 = MISC::IS_BIT_SET(uParam0->f_159, 6);
	if (Global_1940144.f_111)
	{
		iVar3 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_142);
		if (MISC::IS_BIT_SET(uParam0->f_159, 28) && uParam0->f_150 > 0)
		{
			iVar14 = uParam0->f_150;
			func_310(uParam4, &uVar4, uParam0->f_150, bVar16);
			func_311(uParam0, iParam6, &uVar4, &iVar13, &iVar14);
			iVar1 = 0;
			while (iVar1 <= (iVar14 - 1))
			{
				iVar17 = uVar4[iVar1];
				if (iVar1 == 0 || iVar1 >= iVar13)
				{
					if ((iVar17 < 8 && iVar17 != -1) && iVar0 < 5)
					{
						func_312(uParam0->f_2, uParam0->f_143[iVar0], "MiniListItem", iVar3, iVar0);
						iVar0++;
					}
				}
				iVar1++;
			}
		}
		else
		{
			func_313(uParam1, iParam6, &iVar13, &iVar14);
			iVar2 = 0;
			while (iVar2 <= iVar14)
			{
				if (iVar0 == 0 || iVar2 >= iVar13)
				{
					if (func_213(&((uParam1[iVar2 /*23*/])->f_14)) && iVar0 < 5)
					{
						func_312(uParam0->f_2, uParam0->f_143[iVar0], "MiniListItem", iVar3, iVar0);
						iVar0++;
					}
				}
				iVar2++;
			}
		}
		iVar3 = (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_142) - 1);
		if (iVar0 <= iVar3)
		{
			iVar18 = iVar3;
			while (iVar18 >= iVar0)
			{
				DATABINDING::_0x6318FB3BE37E11B3(uParam0->f_142, iVar18);
				iVar18 = (iVar18 + -1);
			}
		}
		return;
	}
	iVar3 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_2);
	if (bParam2 && uParam0->f_150 > 0)
	{
		func_310(uParam4, &uVar4, uParam0->f_150, bVar16);
		func_314(uParam0, uParam1, iParam3, uParam0->f_150, bParam5);
		if (!bVar15)
		{
			iVar1 = 0;
			while (iVar1 <= (uParam0->f_150 - 1))
			{
				iVar19 = uVar4[iVar1];
				if (iVar19 < 8 && iVar19 > -1)
				{
					func_312(uParam0->f_2, uParam0->f_3[iVar19], "LeaderboardHeader", iVar3, iVar0);
					iVar0++;
					iVar2 = 0;
					while (iVar2 <= 31)
					{
						if (iVar19 == (*uParam1)[iVar2 /*23*/] && func_213(&((uParam1[iVar2 /*23*/])->f_14)))
						{
							func_312(uParam0->f_2, uParam0->f_12[iVar2], "LeaderboardListItem", iVar3, iVar0);
							iVar0++;
						}
						iVar2++;
					}
				}
				iVar1++;
			}
		}
	}
	else
	{
		iVar2 = 0;
		while (iVar2 <= 31)
		{
			if (func_213(&((uParam1[iVar2 /*23*/])->f_14)))
			{
				func_312(uParam0->f_2, uParam0->f_12[iVar2], "LeaderboardListItem", iVar3, iVar0);
				iVar0++;
			}
			iVar2++;
		}
	}
	if (uParam0->f_149 > 0 || iVar0 > 0)
	{
		if (iVar0 < 3)
		{
			iVar20 = iVar0;
			while (iVar20 <= 3)
			{
				func_312(uParam0->f_2, uParam0->f_12[iVar20], "LeaderboardListItemBlank", iVar3, iVar0);
				iVar0++;
				iVar20++;
			}
		}
	}
	iVar3 = (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_2) - 1);
	if (iVar0 <= iVar3)
	{
		iVar21 = iVar3;
		while (iVar21 >= iVar0)
		{
			DATABINDING::_0x6318FB3BE37E11B3(uParam0->f_2, iVar21);
			iVar21 = (iVar21 + -1);
		}
	}
}

void func_273(int iParam0, var uParam1, var uParam2, var uParam3)
{
	ENTITY::SET_ENTITY_COLLISION(iParam0, false, false);
	ENTITY::FREEZE_ENTITY_POSITION(iParam0, true);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_233, &uParam1, iParam0, 0);
}

void func_274(int iParam0)
{
	if (!func_315(iParam0))
	{
		SCRIPTS::_0x31010318BA9897AC(&(Global_1071686.f_21416.f_260), iParam0);
	}
}

void func_275()
{
	func_316(1);
}

void func_276()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (Global_1048684.f_376 - 1))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(uLocal_406[iVar0]) && ENTITY::DOES_ENTITY_EXIST(uLocal_406[iVar0]))
		{
			return;
		}
		iVar0++;
	}
	func_316(2);
}

void func_277()
{
	func_316(3);
}

int func_278()
{
	return Global_1139381.f_5079.f_325;
}

struct<16> func_279(var uParam0, int iParam1)
{
	struct<16> Var0;
	int iVar16;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return Var0;
	}
	iVar16 = iParam1;
	switch (func_317(&Var0, iVar16, 1))
	{
		case 4:
			break;
		case 1:
			func_318(iVar16, 1);
			break;
		case 2:
			func_318(iVar16, 1);
			func_165(&(uParam0->f_162), iParam1, 0);
			break;
		case 3:
			break;
		case 0:
			break;
	}
	return Var0;
}

int func_280(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (MISC::IS_BIT_SET(uParam0->f_159, 11))
	{
		iVar0 = func_319((*uParam1)[iParam2 /*23*/], PLAYER::GET_PLAYER_TEAM(iParam3), uParam0->f_150, MISC::IS_BIT_SET(uParam0->f_159, 5), bParam4);
	}
	else if (MISC::IS_BIT_SET(uParam0->f_159, 16))
	{
		if (bParam4)
		{
			iVar0 = joaat("COLOR_PURE_WHITE");
		}
		else
		{
			iVar0 = func_320((uParam1[iParam2 /*23*/])->f_14, 1, -1, 1);
		}
	}
	else
	{
		iVar0 = func_320((uParam1[iParam2 /*23*/])->f_14, 1, -1, 1);
	}
	return iVar0;
}

void func_281()
{
	MISC::SET_BIT(&iLocal_397, 8);
}

var func_282()
{
	return Global_262155;
}

char* func_283(int iParam0)
{
	int iVar0;
	char cVar1[64];

	iVar0 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iParam0) / 60f));
	iParam0 = (iParam0 - iVar0 * 60);
	if (iVar0 > 0)
	{
		if (iVar0 < 10)
		{
			StringIntConCat(&cVar1, 0, 64);
		}
		StringIntConCat(&cVar1, iVar0, 64);
	}
	else
	{
		StringConCat(&cVar1, "00", 64);
	}
	StringConCat(&cVar1, ":", 64);
	if (iParam0 < 10)
	{
		StringConCat(&cVar1, "0", 64);
	}
	StringIntConCat(&cVar1, iParam0, 64);
	return HUD::_0xD8402B858F4DDD88(&cVar1, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar1));
}

char* func_284(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_321(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

char* func_285(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	char cVar0[32];
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	char cVar8[32];

	StringCopy(&cVar0, "", 32);
	if (bParam3)
	{
		if (iParam0 != 0)
		{
			StringConCat(&cVar0, "+", 32);
			iParam0 = (iParam0 * -1);
		}
		else
		{
			return "";
		}
	}
	fVar4 = (IntToFloat(iParam0) / 1000f);
	if (bParam5)
	{
		iVar5 = BUILTIN::CEIL(fVar4);
	}
	else
	{
		iVar5 = BUILTIN::FLOOR(fVar4);
	}
	iVar6 = func_322((iVar5 / 60), 0, 180);
	iVar7 = func_322((iVar5 % 60), 0, 60);
	if (iVar6 <= 9)
	{
		StringConCat(&cVar0, "0", 32);
	}
	StringIntConCat(&cVar0, iVar6, 32);
	if (iVar7 <= 9)
	{
		StringConCat(&cVar0, ":0", 32);
	}
	else
	{
		StringConCat(&cVar0, ":", 32);
	}
	StringIntConCat(&cVar0, iVar7, 32);
	if (bParam1)
	{
		StringConCat(&cVar0, ".", 32);
		iVar9 = (iParam0 % 1000);
		if (iVar9 < 10)
		{
			StringConCat(&cVar8, "00", 8);
		}
		else if (iVar9 < 100)
		{
			StringConCat(&cVar8, "0", 8);
		}
		StringIntConCat(&cVar8, iVar9, 8);
		if (iParam2 > 3 || iParam2 < 1)
		{
			iParam2 = 3;
		}
		iVar10 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar8);
		if (iParam2 > iVar10)
		{
			iParam2 = iVar10;
		}
		StringCopy(&cVar8, HUD::_0xD8402B858F4DDD88(&cVar8, iParam2), 8);
		StringConCat(&cVar0, &cVar8, 32);
	}
	if (!bParam4)
	{
		StringConCat(&cVar0, " ", 32);
	}
	return HUD::_0xD8402B858F4DDD88(&cVar0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0));
}

char* func_286(char* sParam0)
{
	return HUD::_0xD8402B858F4DDD88(sParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0));
}

int func_287(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return BUILTIN::ROUND(uParam0->f_5);
		case 1:
			return BUILTIN::ROUND(uParam0->f_6);
		case 2:
			return BUILTIN::ROUND(uParam0->f_7);
		case 3:
			return BUILTIN::ROUND(uParam0->f_8);
		default:
			break;
	}
	return 0;
}

struct<16> func_288(int iParam0, var uParam1)
{
	char cVar0[128];

	StringCopy(&cVar0, "", 128);
	if (Global_3145858.f_61357[iParam0 /*3*/].f_1 > -1)
	{
		*uParam1 = !func_323(Global_3145858.f_61357[iParam0 /*3*/].f_1);
		return Global_3145858.f_52528[Global_3145858.f_61357[iParam0 /*3*/].f_1 /*18*/];
	}
	return cVar0;
}

int func_289(var uParam0)
{
	struct<4> Var0;

	Var0 = Global_1071686.f_23887.f_366.f_4085;
	Var0.f_2 = 1593794963;
	Var0.f_3 = uParam0;
	return DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
}

bool func_290(var uParam0, int iParam1, var uParam2, int iParam3)
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
		DATAFILE::_DATAFILE_GET_FLOAT(iParam3, &Var0);
		return true;
	}
	return false;
}

bool func_291(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_292(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_293(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_294(struct<29> Param0, var uParam29, int iParam30)
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

void func_295(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

bool func_296(vector3 vParam0, var uParam3, int iParam4)
{
	var uVar0;
	int iVar1;
	int iVar2;

	uVar0 = Global_1071686.f_23887.f_366[func_324(vParam0) /*272*/];
	iVar1 = func_289(uVar0);
	if (iVar1 <= 0)
	{
		return false;
	}
	else
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
		if (func_290(uVar0, iVar2, uParam3, iParam4))
		{
			return true;
		}
	}
	return false;
}

void func_297(vector3 vParam0, int iParam3, vector3 vParam4, int iParam7, float fParam8, float fParam9, bool bParam10, int iParam11, float fParam12, int iParam13)
{
	if (func_246(255) == 4)
	{
		return;
	}
	if (func_145(vParam0))
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
		func_325(0, 0, 0, 1);
	}
	func_132(0);
	func_132(3);
	Global_1102219.f_3919 = iParam11;
	Global_1102219.f_3920 = fParam12;
	Global_1102219.f_3921 = iParam13;
	func_292(&(Global_1102219.f_3849));
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
	func_293(&(Global_1102219.f_3888));
	Global_1102219.f_3888.f_6 = { vParam4 };
	Global_1102219.f_3888 = iParam7;
	Global_1102219.f_3888.f_5 = 1;
	Global_1102219.f_26.f_3341 = 0;
	Global_1102219.f_26.f_3342 = 0;
	func_294(Global_1102219.f_3849, 36);
	func_295(Global_1102219.f_3888, 36);
}

void func_298(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_299(var uParam0)
{
	vector3 vVar0;
	int iVar3;
	var uVar4;
	var uVar5;
	struct<8> Var6;
	struct<8> Var14;

	vVar0 = -1;
	vVar0.f_1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	switch (*uParam0)
	{
		case 0:
			vVar0.x = 0;
			SCRIPTS::_0x31010318BA9897AC(&(vVar0.f_2), PLAYER::NETWORK_PLAYER_ID_TO_INT());
			func_326(vVar0);
			break;
		case 1:
			vVar0.x = uParam0->f_1;
			SCRIPTS::_0x20F4CB76689ACDBC(&(vVar0.f_2));
			func_326(vVar0);
			if (!uParam0->f_3)
			{
			}
			else
			{
				Var6.f_4 = 0;
				Var6.f_6 = uParam0->f_1;
				Var6.f_5 = *uParam0;
				Var6.f_7 = uVar4;
				iVar3 = 0;
				iVar3 = 0;
				while (iVar3 < 32)
				{
					if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1296859.f_154[iVar3]))
					{
					}
					else if (Global_1296859.f_154[iVar3] == Global_1296859.f_10)
					{
					}
					else
					{
						SCRIPTS::_0x31010318BA9897AC(&uVar5, Global_1296859.f_154[iVar3]);
					}
					iVar3++;
				}
				func_327(&Var6, uVar5);
				Jump @392; //curOff = 221
				if (!SCRIPTS::_0x179A6F0EE2E79026(&(uParam0->f_2)))
				{
					return;
				}
				vVar0.x = uParam0->f_1;
				vVar0.f_2 = uParam0->f_2;
				func_326(vVar0);
				if (!uParam0->f_3)
				{
				}
				else
				{
					Var14.f_4 = 0;
					Var14.f_6 = uParam0->f_1;
					Var14.f_5 = *uParam0;
					Var14.f_7 = uParam0->f_2;
					iVar3 = 0;
					iVar3 = 0;
					while (iVar3 < 32)
					{
						if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1296859.f_154[iVar3]))
						{
						}
						else if (Global_1296859.f_154[iVar3] == Global_1296859.f_10)
						{
						}
						else
						{
							SCRIPTS::_0x31010318BA9897AC(&uVar5, Global_1296859.f_154[iVar3]);
						}
						iVar3++;
					}
					func_327(&Var14, uVar5);
				}
			}
			default:
				break;
	}
}

int func_300()
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

int func_301(int iParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = 0;
	uVar1 = iParam0;
	if (MISC::IS_BIT_SET(iParam0, 31))
	{
		iVar0++;
		iParam0 ^= -1;
	}
	while (iParam0 > 1)
	{
		iParam0 = BUILTIN::SHIFT_RIGHT(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

void func_302(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_328(iParam0);
	}
	else
	{
		func_329(iParam0);
	}
}

void func_303(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		func_330(sParam0);
	}
	else
	{
		func_331(sParam0);
	}
}

void func_304(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_332(iParam0);
	}
	else
	{
		func_333(iParam0);
	}
}

void func_305(var uParam0)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;

	sVar0 = func_334(uParam0->f_159, uParam0->f_160);
	sVar1 = func_335(uParam0->f_159, uParam0->f_160);
	sVar2 = func_336(uParam0->f_159, uParam0->f_160);
	sVar3 = func_337();
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat1", sVar0);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat1Color", joaat("COLOR_WHITE"));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat2", sVar1);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat2Color", joaat("COLOR_WHITE"));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat3", sVar2);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat3Color", joaat("COLOR_WHITE"));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "StatRounds", sVar3);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "StatRoundsColor", joaat("COLOR_WHITE"));
	}
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "HeadingColor", joaat("COLOR_WHITE"));
}

void func_306(var uParam0, bool bParam1, bool bParam2)
{
	if (func_338(uParam0->f_159) || func_339(uParam0->f_159))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat1", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat2", "");
	}
	if (!MISC::IS_BIT_SET(uParam0->f_159, 0) && !MISC::IS_BIT_SET(uParam0->f_159, 17))
	{
		if (!MISC::IS_BIT_SET(uParam0->f_159, 3))
		{
			if (bParam2)
			{
				DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat0", HUD::_GET_LABEL_TEXT("UIC_LDR_RNDW"));
				DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat0Color", joaat("COLOR_WHITE"));
			}
		}
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat1", func_334(uParam0->f_159, uParam0->f_160));
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat1Color", joaat("COLOR_WHITE"));
	}
	else if (func_339(uParam0->f_159))
	{
		if (!MISC::IS_BIT_SET(uParam0->f_159, 3))
		{
			if (bParam2)
			{
				DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat2", HUD::_GET_LABEL_TEXT("UIC_LDR_RNDW"));
				DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat2Color", joaat("COLOR_WHITE"));
			}
		}
	}
	else if (!MISC::IS_BIT_SET(uParam0->f_159, 3))
	{
		if (bParam2)
		{
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat1", HUD::_GET_LABEL_TEXT("UIC_LDR_RNDW"));
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat1Color", joaat("COLOR_WHITE"));
		}
	}
	if (!func_339(uParam0->f_159))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat2", func_335(uParam0->f_159, uParam0->f_160));
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat2Color", joaat("COLOR_WHITE"));
	}
	if (!MISC::IS_BIT_SET(uParam0->f_159, 3) || MISC::IS_BIT_SET(uParam0->f_159, 0))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat3", func_336(uParam0->f_159, uParam0->f_160));
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat3Color", joaat("COLOR_WHITE"));
	}
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "HeadingColor", joaat("COLOR_WHITE"));
}

int func_307()
{
	return 1;
}

void func_308(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;

	if (Global_1940144.f_111)
	{
		func_340(uParam0, uParam1, uParam2, iParam7, iParam8);
	}
	else
	{
		func_124(uParam0, uParam1);
		iVar2 = PLAYER::PLAYER_ID();
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (!func_213(&((uParam1[iVar0 /*23*/])->f_14)))
			{
			}
			else
			{
				iVar1++;
				func_215(uParam0, uParam1, iVar0, bParam4);
				if (bParam3)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "Position", func_341(uParam1, iVar0));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "Position", iVar1);
				}
				bVar3 = iVar2 == (uParam1[iVar0 /*23*/])->f_14;
				iVar4 = func_280(uParam0, uParam1, iVar0, iVar2, bVar3);
				if (!bParam6)
				{
					if (!bParam4)
					{
						func_342(uParam0, uParam1, iVar0, bParam3, iVar4);
					}
				}
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Gamertag", &((uParam1[iVar0 /*23*/])->f_14.f_1));
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "GamertagColor", iVar4);
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "CrewTag", func_343());
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Rank", func_344((uParam1[iVar0 /*23*/])->f_14));
				if (!bParam4)
				{
					if (func_133())
					{
						if (func_345((uParam1[iVar0 /*23*/])->f_14))
						{
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "Spectating", true);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "ShowRank", false);
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "Spectating", false);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "ShowRank", true);
						}
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "Spectating", false);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "ShowRank", true);
					}
				}
				if (bParam4)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat0", func_346((uParam1[iVar0 /*23*/])->f_11));
				}
				else if (bParam5)
				{
				}
				fVar5 = func_347(uParam1[iVar0 /*23*/], uParam0->f_159);
				fVar6 = func_348(uParam1[iVar0 /*23*/], uParam0->f_159);
				fVar7 = func_349(uParam1[iVar0 /*23*/], uParam0->f_159, uParam0->f_160);
				fVar8 = func_350(uParam1[iVar0 /*23*/]);
				if (Global_1049283[0 /*3*/].f_2 != 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat1", MISC::_0x2B6846401D68E563(fVar5, 0));
				}
				if (Global_1049283[1 /*3*/].f_2 != 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat2", MISC::_0x2B6846401D68E563(fVar6, 0));
				}
				if (Global_1049283[2 /*3*/].f_2 != 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat3", MISC::_0x2B6846401D68E563(fVar7, 0));
				}
				if (Global_1049283[3 /*3*/].f_2 != 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "StatRounds", MISC::_0x2B6846401D68E563(fVar8, 0));
				}
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "isHighlighted", bVar3);
				if (bVar3)
				{
				}
				if (bParam4 && (uParam1[iVar0 /*23*/])->f_13)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Blip", "BLIP_MVP");
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "BlipColor", joaat("COLOR_YELLOW"));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "BlipColor", iVar4);
				}
			}
			iVar0++;
		}
		uParam0->f_149 = iVar1;
	}
}

void func_309(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	float fVar14;

	if (Global_1940144.f_111)
	{
		func_351(uParam0, uParam1, uParam2, iParam7, iParam8);
	}
	else
	{
		func_124(uParam0, uParam1);
		iVar7 = PLAYER::PLAYER_ID();
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (!func_213(&((uParam1[iVar0 /*23*/])->f_14)))
			{
			}
			else
			{
				iVar1++;
				func_215(uParam0, uParam1, iVar0, bParam4);
				if (bParam3)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "Position", func_341(uParam1, iVar0));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "Position", iVar1);
				}
				bVar8 = iVar7 == (uParam1[iVar0 /*23*/])->f_14;
				iVar9 = func_280(uParam0, uParam1, iVar0, iVar7, bVar8);
				if (!bParam6)
				{
					if (!bParam4)
					{
						func_342(uParam0, uParam1, iVar0, bParam3, iVar9);
					}
				}
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Gamertag", &((uParam1[iVar0 /*23*/])->f_14.f_1));
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "GamertagColor", iVar9);
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "CrewTag", func_343());
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Rank", func_344((uParam1[iVar0 /*23*/])->f_14));
				if (!bParam4)
				{
					if (func_133())
					{
						if (func_345((uParam1[iVar0 /*23*/])->f_14))
						{
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "Spectating", true);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "ShowRank", false);
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "Spectating", false);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "ShowRank", true);
						}
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "Spectating", false);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "ShowRank", true);
					}
				}
				if (bParam4)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat0", func_346((uParam1[iVar0 /*23*/])->f_11));
				}
				else if (bParam5)
				{
					if (func_352(uParam0->f_159))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat1", MISC::_0x2B6846401D68E563((uParam1[iVar0 /*23*/])->f_8, 0));
					}
					else if (func_339(uParam0->f_159))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat2", MISC::_0x2B6846401D68E563((uParam1[iVar0 /*23*/])->f_8, 0));
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat0", MISC::_0x2B6846401D68E563((uParam1[iVar0 /*23*/])->f_8, 0));
					}
				}
				if (MISC::IS_BIT_SET(uParam0->f_159, 3))
				{
					iVar10 = 0;
					if (MISC::IS_BIT_SET(uParam0->f_159, 0))
					{
						iVar2 = BUILTIN::ROUND(func_348(uParam1[iVar0 /*23*/], uParam0->f_159));
						iVar10 = "Stat2";
					}
					else
					{
						iVar2 = BUILTIN::ROUND(func_347(uParam1[iVar0 /*23*/], uParam0->f_159));
						iVar10 = "Stat1";
					}
					sVar5 = " ";
					if (func_353(iVar2))
					{
						iVar11 = uParam0->f_159;
						if ((uParam1[iVar0 /*23*/])->f_1 == 8.94E+07f)
						{
							MISC::CLEAR_BIT(&iVar11, 12);
						}
						sVar5 = func_236(iVar2, iVar11, 0);
					}
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], iVar10, sVar5);
				}
				else if (!MISC::IS_BIT_SET(uParam0->f_159, 0) && !MISC::IS_BIT_SET(uParam0->f_159, 17))
				{
					if (!MISC::IS_BIT_SET(uParam0->f_159, 18))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat1", MISC::_0x2B6846401D68E563(func_347(uParam1[iVar0 /*23*/], uParam0->f_159), func_354(uParam0, 1)));
					}
				}
				if (MISC::IS_BIT_SET(uParam0->f_159, 4))
				{
					iVar12 = 0;
					sVar6 = " ";
					if (MISC::IS_BIT_SET(uParam0->f_159, 0))
					{
						iVar12 = "Stat3";
						iVar3 = BUILTIN::ROUND(func_349(uParam1[iVar0 /*23*/], uParam0->f_159, uParam0->f_160));
					}
					else
					{
						iVar12 = "Stat2";
						iVar3 = BUILTIN::ROUND(func_348(uParam1[iVar0 /*23*/], uParam0->f_159));
					}
					if (func_353(iVar3))
					{
						sVar6 = func_285(iVar3, 1, 2, 0, 0, 0);
					}
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], iVar12, sVar6);
				}
				else if (MISC::IS_BIT_SET(uParam0->f_159, 15))
				{
					iVar13 = 0;
					if (MISC::IS_BIT_SET(uParam0->f_159, 0))
					{
						iVar13 = "Stat3";
						fVar14 = func_349(uParam1[iVar0 /*23*/], uParam0->f_159, uParam0->f_160);
					}
					else
					{
						iVar13 = "Stat2";
						fVar14 = func_348(uParam1[iVar0 /*23*/], uParam0->f_159);
					}
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], iVar13, MISC::_0x2B6846401D68E563(fVar14, 0));
				}
				else if ((!MISC::IS_BIT_SET(uParam0->f_159, 3) && !func_339(uParam0->f_159)) && !func_338(uParam0->f_159))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat2", MISC::_0x2B6846401D68E563(func_348(uParam1[iVar0 /*23*/], uParam0->f_159), func_354(uParam0, 2)));
				}
				if (!MISC::IS_BIT_SET(uParam0->f_159, 3))
				{
					if (MISC::IS_BIT_SET(uParam0->f_160, 0))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat3", "-");
					}
					else if (MISC::IS_BIT_SET(uParam0->f_159, 9))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat3", func_355(func_349(uParam1[iVar0 /*23*/], uParam0->f_159, uParam0->f_160)));
					}
					else if (MISC::IS_BIT_SET(uParam0->f_159, 10))
					{
						fVar4 = func_349(uParam1[iVar0 /*23*/], uParam0->f_159, uParam0->f_160);
						if (fVar4 >= 0f)
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat3", func_285(BUILTIN::FLOOR(fVar4), 1, 2, 0, 0, 0));
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat3", MISC::_CREATE_VAR_STRING(2, "FM_POSSE_RACE_LEADERBOARD_DNF"));
						}
					}
					else if (MISC::IS_BIT_SET(uParam0->f_159, 21))
					{
						iVar2 = BUILTIN::ROUND(func_349(uParam1[iVar0 /*23*/], uParam0->f_159, uParam0->f_160));
						sVar5 = " ";
						sVar5 = func_236(iVar2, uParam0->f_159, 0);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat3", sVar5);
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat3", MISC::_0x2B6846401D68E563(func_349(uParam1[iVar0 /*23*/], uParam0->f_159, uParam0->f_160), func_354(uParam0, 3)));
					}
				}
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "isHighlighted", bVar8);
				if (bVar8)
				{
				}
				if (bParam4 && (uParam1[iVar0 /*23*/])->f_13)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Blip", "BLIP_MVP");
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "BlipColor", joaat("COLOR_YELLOW"));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "BlipColor", iVar9);
				}
			}
			iVar0++;
		}
		uParam0->f_149 = iVar1;
	}
}

void func_310(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		(*uParam1)[iVar0] = (*uParam0)[iVar0];
		iVar0++;
	}
	if (!bParam3)
	{
		if (iParam2 < 8 && (*uParam1)[7] != -1)
		{
			(*uParam1)[(iParam2 - 1)] = (*uParam1)[7];
			(*uParam1)[7] = -1;
		}
	}
}

void func_311(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam1 == (*uParam2)[iVar0])
		{
			iParam1 = iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	*iParam3 = (iParam1 - 1);
	*iParam4 = iParam1 + 2;
	if (*iParam4 >= uParam0->f_150)
	{
		*iParam4 = uParam0->f_150;
		*iParam3 = (uParam0->f_150 - 3);
	}
	if (*iParam3 < 0)
	{
		*iParam3 = 0;
	}
	if (*iParam4 < 5 && uParam0->f_150 > 5)
	{
		*iParam4 = 5;
	}
	if (*iParam4 < uParam0->f_150 && uParam0->f_150 < 5)
	{
		*iParam4 = uParam0->f_150;
	}
	if (*iParam4 > 8)
	{
		*iParam4 = 8;
	}
}

void func_312(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4)
{
	if (iParam4 < iParam3)
	{
		if (iParam1 != DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(uParam0, iParam4))
		{
			DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(uParam0, iParam1);
			DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0, iParam4, sParam2, iParam1);
		}
	}
	else
	{
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0, iParam4, sParam2, iParam1);
	}
}

void func_313(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar3 = -1;
	iVar4 = -1;
	iVar6 = -1;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (func_213(&((uParam0[iVar1 /*23*/])->f_14)))
		{
			if (iVar1 < iParam1)
			{
				iVar3 = iVar2;
				iVar2 = iVar1;
			}
			else if (iVar1 > iParam1)
			{
				iVar5++;
				if (iVar5 < 4)
				{
					iVar6 = iVar1;
				}
			}
			iVar0++;
			iVar4 = iVar1;
		}
		iVar1++;
	}
	*iParam2 = iVar2;
	if (iVar6 != -1)
	{
		*iParam3 = iVar6;
	}
	else
	{
		*iParam3 = iVar4;
	}
	if (*iParam3 >= iVar4 && iVar6 == -1)
	{
		*iParam3 = iVar4;
		if (iVar3 != -1)
		{
			*iParam2 = iVar3;
		}
		else
		{
			*iParam2 = iVar2;
		}
	}
	if (*iParam2 < 0)
	{
		*iParam2 = 0;
	}
}

void func_314(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	char cVar5[64];
	int iVar13;
	float fVar14;

	iVar0 = 0;
	while (iVar0 <= (uParam0->f_150 - 1))
	{
		StringCopy(&cVar5, "LeaderboardListHeader_", 64);
		if (iVar0 < 10)
		{
			StringConCat(&cVar5, "0", 64);
		}
		StringIntConCat(&cVar5, iVar0, 64);
		uParam0->f_3[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam0, &cVar5);
		cVar5 = { func_356(iVar0) };
		fVar2 = 0f;
		fVar3 = 0f;
		fVar4 = 0f;
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			if (iVar0 == (*uParam1)[iVar1 /*23*/] && func_213(&((uParam1[iVar1 /*23*/])->f_14)))
			{
				if (MISC::IS_BIT_SET(uParam0->f_159, 19))
				{
					if ((uParam1[iVar1 /*23*/])->f_6 != -1f && fVar2 == 0f)
					{
						fVar2 = (fVar2 + (uParam1[iVar1 /*23*/])->f_6);
					}
					if ((uParam1[iVar1 /*23*/])->f_1 != -1f)
					{
						fVar3 = (fVar3 + (uParam1[iVar1 /*23*/])->f_1);
					}
					if ((uParam1[iVar1 /*23*/])->f_5 != -1f)
					{
						fVar4 = (fVar4 + (uParam1[iVar1 /*23*/])->f_5);
					}
				}
				else
				{
					if ((uParam1[iVar1 /*23*/])->f_1 != -1f)
					{
						fVar2 = (fVar2 + (uParam1[iVar1 /*23*/])->f_1);
					}
					if ((uParam1[iVar1 /*23*/])->f_2 != -1f)
					{
						fVar3 = (fVar3 + (uParam1[iVar1 /*23*/])->f_2);
					}
					if ((uParam1[iVar1 /*23*/])->f_5 != -1f)
					{
						fVar4 = (fVar4 + (uParam1[iVar1 /*23*/])->f_5);
					}
				}
			}
			iVar1++;
		}
		if (!MISC::IS_BIT_SET(uParam0->f_159, 19))
		{
			if (MISC::IS_BIT_SET(uParam0->f_159, 25) || MISC::IS_BIT_SET(uParam0->f_159, 23))
			{
				if (func_357() == 0)
				{
					fVar4 = BUILTIN::TO_FLOAT(Global_1050975[iVar0]);
				}
			}
		}
		iVar13 = func_358(iVar0, iParam2, iParam3, bParam4, iParam2 == iVar0);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3[iVar0], "HeadingColor", iVar13);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3[iVar0], "Heading", &cVar5);
		if (MISC::IS_BIT_SET(uParam0->f_159, 6))
		{
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3[iVar0], "Stat3Color", iVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3[iVar0], "Stat3", MISC::_0x2B6846401D68E563(fVar4, uParam0->f_151));
		}
		else if (func_352(uParam0->f_159))
		{
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3[iVar0], "Stat2Color", iVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3[iVar0], "Stat2", MISC::_0x2B6846401D68E563(fVar2, uParam0->f_151));
			fVar14 = fVar3;
			if (MISC::IS_BIT_SET(uParam0->f_159, 17))
			{
				fVar14 = fVar4;
			}
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3[iVar0], "Stat3Color", iVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3[iVar0], "Stat3", MISC::_0x2B6846401D68E563(fVar14, uParam0->f_151));
		}
		else if (func_339(uParam0->f_159))
		{
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3[iVar0], "Stat3Color", iVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3[iVar0], "Stat3", MISC::_0x2B6846401D68E563(fVar4, uParam0->f_151));
		}
		else
		{
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3[iVar0], "Stat1Color", iVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3[iVar0], "Stat1", MISC::_0x2B6846401D68E563(fVar2, uParam0->f_151));
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3[iVar0], "Stat2Color", iVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3[iVar0], "Stat2", MISC::_0x2B6846401D68E563(fVar3, uParam0->f_151));
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3[iVar0], "Stat3Color", iVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3[iVar0], "Stat3", MISC::_0x2B6846401D68E563(fVar4, uParam0->f_151));
		}
		iVar0++;
	}
}

bool func_315(int iParam0)
{
	return SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_21416.f_260), iParam0);
}

void func_316(int iParam0)
{
	iLocal_392 = iParam0;
}

int func_317(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar10;
	int iVar11;
	char* sVar12;

	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 1;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam1);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 1;
	}
	StringCopy(sParam0, "", 128);
	iVar2 = func_359(iParam1, iParam2);
	switch (iParam2)
	{
		case 0:
			NETWORK::NETWORK_HANDLE_FROM_PLAYER(PLAYER::INT_TO_PLAYERINDEX(iParam1), &uVar3);
			if (!NETWORK::NETWORK_IS_HANDLE_VALID(&uVar3))
			{
				return 1;
			}
			StringCopy(sParam0, NETWORK::_0xB5C4B18B12A2AF23(&uVar3, iParam2), 128);
			return 4;
		case 1:
		case 2:
			switch (iVar2)
			{
				case 0:
				default:
					return 1;
					return 2;
				case 1:
					return 3;
				case 2:
					iVar10 = func_360(iParam2);
					iVar1 = NETWORK::_LOCAL_PLAYER_PEDSHOT_TEXTURE_DOWNLOAD_REQUEST(iParam1, iVar10);
					if (iVar1 == -1)
					{
						return 3;
					}
					else if (iVar1 == 0)
					{
						func_361(iParam1, iParam2, 0);
						return 1;
					}
					func_362(iParam1, iParam2, iVar1);
					func_361(iParam1, iParam2, 3);
					break;
				case 3:
					iVar1 = func_363(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_361(iParam1, iParam2, 0);
						return 1;
					}
					iVar11 = NETWORK::GET_STATUS_OF_TEXTURE_DOWNLOAD(iVar1);
					switch (iVar11)
					{
						case 0:
							func_361(iParam1, iParam2, 4);
							return 3;
						case 1:
							return 3;
						case 2:
							func_361(iParam1, iParam2, 0);
							return 1;
						default:
							break;
					}
					break;
				case 4:
					iVar1 = func_363(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_361(iParam1, iParam2, 0);
						return 1;
					}
					sVar12 = NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1);
					if (MISC::_IS_STRING_SPACE(sVar12))
					{
						return 3;
					}
					func_361(iParam1, iParam2, 5);
					break;
				case 5:
					iVar1 = func_363(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_361(iParam1, iParam2, 0);
						return 1;
					}
					StringCopy(sParam0, NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1), 128);
					return 4;
			}
			break;
	}
	return 3;
}

void func_318(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	iVar1 = func_359(iParam0, iParam1);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	switch (iVar1)
	{
		case 1:
		case 2:
		default:
			return;
			func_362(iParam0, iParam1, 0);
			func_361(iParam0, iParam1, 0);
		case 3:
		case 4:
		case 5:
			iVar2 = func_363(iParam0, iParam1);
			if (iVar2 != 0)
			{
				NETWORK::TEXTURE_DOWNLOAD_RELEASE(iVar2);
			}
			func_361(iParam0, iParam1, 0);
			break;
	}
}

int func_319(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (iParam2 > 1)
	{
		if (bParam3)
		{
			switch (iParam0)
			{
				case 0:
					return joaat("COLOR_NET_PLAYER3");
				case 1:
					return joaat("COLOR_NET_PLAYER4");
				case 2:
					return joaat("COLOR_NET_PLAYER5");
				case 3:
					return joaat("COLOR_NET_PLAYER6");
				case 4:
					return joaat("COLOR_NET_PLAYER7");
				case 5:
					return joaat("COLOR_NET_PLAYER8");
				case 6:
					return joaat("COLOR_NET_PLAYER9");
				case 7:
					return joaat("COLOR_NET_PLAYER10");
				default:
					break;
			}
			return joaat("COLOR_WHITE");
		}
		if (iParam1 == iParam0)
		{
			return joaat("COLOR_NET_PLAYER1");
		}
	}
	else if (bParam4)
	{
		if (iParam2 < 2)
		{
			return joaat("COLOR_WHITE");
		}
		else
		{
			return joaat("COLOR_NET_PLAYER1");
		}
	}
	return joaat("COLOR_NET_PLAYER2");
}

int func_320(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		if (iParam2 == -1)
		{
			return joaat("COLOR_GREYDARK");
		}
		else
		{
			return joaat("COLOR_POSSE_NEUTRAL");
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return joaat("COLOR_POSSE_NEUTRAL");
	}
	iVar2 = iParam0;
	if (func_365(func_364(0)) && func_366(func_364(0)) == 7)
	{
		bVar0 = true;
		iVar3 = 11;
		iVar4 = (iVar3 / 32);
		iVar5 = (iVar3 - iVar4 * 32);
		bVar1 = MISC::IS_BIT_SET(Global_3145858.f_6[iVar4], iVar5);
	}
	if (Global_1071686.f_21416.f_1[iVar2 /*8*/].f_5 != 0)
	{
		return Global_1071686.f_21416.f_1[iVar2 /*8*/].f_5;
	}
	if (bParam3 && Global_1071686.f_21416.f_1[iVar2 /*8*/].f_6 != 0)
	{
		return Global_1071686.f_21416.f_1[iVar2 /*8*/].f_6;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (bVar0 && bVar1)
		{
			iVar6 = func_367(iParam0);
			if (iVar6 == joaat("COLOR_NET_PLAYER2") && NETWORK::_NETWORK_IS_PLAYER_IN_SPECTATOR_MODE(iParam0))
			{
				return joaat("COLOR_WHITE");
			}
			else
			{
				return iVar6;
			}
		}
		else
		{
			return func_368(iParam0);
		}
	}
	if (iVar2 < 0 || iVar2 >= 32)
	{
		return 0;
	}
	if (func_369(Global_1071686.f_21416.f_1[iVar2 /*8*/].f_7, 1024))
	{
		return joaat("COLOR_WINNING_PLAYER");
	}
	iVar7 = func_370(iParam0, 1);
	if (!bVar0)
	{
		if (func_371(iParam0, bParam1))
		{
			return func_368(iParam0);
		}
		else if (func_372(iParam0, bParam1))
		{
			if (func_373(iParam0, bParam1))
			{
				return joaat("COLOR_POSSE_ENEMY");
			}
			else
			{
				if (iVar7 > 5)
				{
					return joaat("COLOR_NOTORIETY_HIGH");
				}
				else if (iVar7 > 3)
				{
					return joaat("COLOR_NOTORIETY_HIGH");
				}
				else if (iVar7 > 1)
				{
					return joaat("COLOR_NOTORIETY_MEDIUM");
				}
				return joaat("COLOR_NOTORIETY_LOW");
			}
		}
	}
	else if (bVar1)
	{
		return func_367(iParam0);
	}
	else if (func_371(iParam0, bParam1))
	{
		if (PLAYER::PLAYER_ID() == iParam0)
		{
			return joaat("COLOR_WHITE");
		}
		else if (func_375(func_374(func_364(0)), 1) == 395262693)
		{
			return func_368(iParam0);
		}
		else
		{
			return func_368(iParam0);
		}
	}
	else if (func_372(iParam0, bParam1))
	{
		return joaat("COLOR_POSSE_ENEMY");
	}
	return joaat("COLOR_FRIENDLY");
}

char* func_321(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_322(int iParam0, int iParam1, int iParam2)
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

bool func_323(int iParam0)
{
	return func_376(Global_3145858.f_52528[iParam0 /*18*/].f_17, 0);
}

int func_324(vector3 vParam0)
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

void func_325(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_40(iParam0);
	if (!func_233(1))
	{
		return;
	}
	if (bParam1)
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_232(128) && !func_255(19))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_300() == 4)
	{
		func_131(18);
	}
	func_42(1024);
}

void func_326(vector3 vParam0)
{
	if (Global_1139381.f_5079.f_325 >= 50)
	{
		return;
	}
	if (vParam0.x == -1)
	{
		return;
	}
	Global_1139381.f_5079.f_326[Global_1139381.f_5079.f_324 /*3*/] = { vParam0 };
	Global_1139381.f_5079.f_324 = (Global_1139381.f_5079.f_324 + 1 % 50);
	Global_1139381.f_5079.f_325++;
}

void func_327(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 186;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 3, &uParam1);
}

void func_328(int iParam0)
{
	if (!STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		func_190(iParam0);
	}
}

void func_329(int iParam0)
{
	if (STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		func_173(iParam0);
	}
}

void func_330(char* sParam0)
{
	if (!PATHFIND::_0x5AC0944C156E5F44(sParam0))
	{
		PATHFIND::_0x7C334FF4D9215912(sParam0);
	}
}

void func_331(char* sParam0)
{
	if (PATHFIND::_0x5AC0944C156E5F44(sParam0))
	{
		PATHFIND::_0x527B97C203BB8606(sParam0);
	}
}

void func_332(int iParam0)
{
	if (!GRAPHICS::_0xDE9BAD3292AA6D5E(iParam0))
	{
		GRAPHICS::_0xDFEA23EC90113657(iParam0);
	}
}

void func_333(int iParam0)
{
	if (GRAPHICS::_0xDE9BAD3292AA6D5E(iParam0))
	{
		GRAPHICS::_0xDD0BC0EDCB2162F6(iParam0);
	}
}

char* func_334(int iParam0, int iParam1)
{
	if (func_72())
	{
		return func_377(0);
	}
	else if ((MISC::IS_BIT_SET(iParam0, 0) || MISC::IS_BIT_SET(iParam0, 17)) || MISC::IS_BIT_SET(iParam0, 18))
	{
		return "";
	}
	else if (MISC::IS_BIT_SET(iParam1, 12))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_WP_LEADERBOARD_PHOTOS_TAKEN");
	}
	else if (MISC::IS_BIT_SET(iParam0, 6))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_KILLS");
	}
	else if (MISC::IS_BIT_SET(iParam0, 3))
	{
		return MISC::_CREATE_VAR_STRING(2, "UIC_LB_TIME");
	}
	else if (MISC::IS_BIT_SET(iParam0, 19))
	{
		return MISC::_CREATE_VAR_STRING(2, "UIC_LB_BOUT");
	}
	else if (MISC::IS_BIT_SET(iParam1, 3))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_FISHING_LEADERBOARD_HOOKED");
	}
	else if (MISC::IS_BIT_SET(iParam1, 6))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_ESC_CONVICTS_LEADERBOARD_ALIVE");
	}
	else if (MISC::IS_BIT_SET(iParam1, 8))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_ROUNDUP_LEADERBOARD_TOTAL");
	}
	return MISC::_CREATE_VAR_STRING(2, "UIC_LB_KILLS");
}

char* func_335(int iParam0, int iParam1)
{
	if (func_72())
	{
		return func_377(1);
	}
	else if (func_339(iParam0) || func_338(iParam0))
	{
		return "";
	}
	else if (MISC::IS_BIT_SET(iParam1, 9))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_KILLS");
	}
	else if (MISC::IS_BIT_SET(iParam1, 1))
	{
		return MISC::_CREATE_VAR_STRING(2, "UIC_LB_DEL");
	}
	else if (MISC::IS_BIT_SET(iParam1, 12))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_WP_LEADERBOARD_BEST_PHOTO");
	}
	else if (MISC::IS_BIT_SET(iParam0, 6))
	{
		if (MISC::IS_BIT_SET(iParam0, 0))
		{
			return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_KILLS");
		}
		else
		{
			return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_DEATHS");
		}
	}
	else if (MISC::IS_BIT_SET(iParam0, 3))
	{
		if (MISC::IS_BIT_SET(iParam0, 0))
		{
			return HUD::_GET_LABEL_TEXT("UIC_LB_TIME");
		}
		else
		{
			return func_378(iParam0);
		}
	}
	else if (func_352(iParam0) || MISC::IS_BIT_SET(iParam0, 19))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_KILLS");
	}
	else if (MISC::IS_BIT_SET(iParam0, 8))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_VAL");
	}
	else if (MISC::IS_BIT_SET(iParam0, 20))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_ACC");
	}
	else if (MISC::IS_BIT_SET(iParam1, 3))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_FISHING_LEADERBOARD_CAUGHT");
	}
	else if (MISC::IS_BIT_SET(iParam1, 4))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_HUNTING_LEADERBOARD_KILLS");
	}
	else if (MISC::IS_BIT_SET(iParam1, 6))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_ESC_CONVICTS_LEADERBOARD_DEAD");
	}
	else if (MISC::IS_BIT_SET(iParam1, 8))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_ESC_CONVICTS_LEADERBOARD_ALIVE");
	}
	return HUD::_GET_LABEL_TEXT("UIC_LB_DEATHS");
}

char* func_336(int iParam0, int iParam1)
{
	if (func_72())
	{
		return func_377(2);
	}
	else if (MISC::IS_BIT_SET(iParam0, 13))
	{
		return HUD::_GET_LABEL_TEXT("FM_POSSE_RACE_LEADERBOARD_SCORE");
	}
	else if (MISC::IS_BIT_SET(iParam1, 9))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_GOODS_TRAIN_LEADERBOARD_GOODS");
	}
	else if (MISC::IS_BIT_SET(iParam1, 7))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_WRECKAGE_LEADERBOARD_FOUND");
	}
	else if (MISC::IS_BIT_SET(iParam1, 11))
	{
		return MISC::_CREATE_VAR_STRING(2, "FME_AT_SCORE_TAG");
	}
	else if (MISC::IS_BIT_SET(iParam1, 12))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_WP_LEADERBOARD_POINTS");
	}
	else if (MISC::IS_BIT_SET(iParam0, 6))
	{
		if (MISC::IS_BIT_SET(iParam1, 13))
		{
			return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_KILLS");
		}
		if (MISC::IS_BIT_SET(iParam0, 0))
		{
			return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_DEATHS");
		}
		else
		{
			return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_SCORE");
		}
	}
	else if (MISC::IS_BIT_SET(iParam0, 3) && MISC::IS_BIT_SET(iParam0, 0))
	{
		return func_378(iParam0);
	}
	else if ((MISC::IS_BIT_SET(iParam0, 0) && !MISC::IS_BIT_SET(iParam0, 17)) && !func_338(iParam0))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_DEATHS");
	}
	else if (func_339(iParam0) && !func_338(iParam0))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_KILLS");
	}
	else if (MISC::IS_BIT_SET(iParam0, 2) || MISC::IS_BIT_SET(iParam0, 19))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_CAPS");
	}
	else if (MISC::IS_BIT_SET(iParam1, 2))
	{
		return MISC::_CREATE_VAR_STRING(2, "UIC_LB_DEL");
	}
	else if (MISC::IS_BIT_SET(iParam0, 14))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_BOUT");
	}
	else if (MISC::IS_BIT_SET(iParam0, 21))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_TA");
	}
	else if (MISC::IS_BIT_SET(iParam1, 3))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_FISHING_LEADERBOARD_WEIGHT");
	}
	else if (MISC::IS_BIT_SET(iParam1, 4))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_SCORE");
	}
	else if (MISC::IS_BIT_SET(iParam1, 6))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_SCORE");
	}
	else if (MISC::IS_BIT_SET(iParam1, 8))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_ESC_CONVICTS_LEADERBOARD_DEAD");
	}
	return HUD::_GET_LABEL_TEXT("UIC_LB_SCORE");
}

char* func_337()
{
	if (func_72())
	{
		return func_377(3);
	}
	return "";
}

bool func_338(int iParam0)
{
	return (MISC::IS_BIT_SET(iParam0, 18) && MISC::IS_BIT_SET(iParam0, 17));
}

bool func_339(int iParam0)
{
	return (MISC::IS_BIT_SET(iParam0, 0) && MISC::IS_BIT_SET(iParam0, 17));
}

void func_340(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<8> Var7;
	char[] cVar15[8];
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	float fVar21[8];
	var uVar30[8];
	int iVar39;
	int iVar40;
	bool bVar41;
	int iVar42;
	char* sVar43;

	iVar4 = 0;
	iVar5 = 32;
	iVar6 = PLAYER::PLAYER_ID();
	bVar16 = Global_1049309[0 /*3*/].f_2 == -1128715836;
	bVar17 = Global_1049309[0 /*3*/].f_2 == 1691389412;
	bVar18 = Global_1049309[0 /*3*/].f_2 == 2105734739;
	iVar2 = 0;
	while (iVar2 <= 4)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar2], "Position", "");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar2], "Gamertag", "");
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_143[iVar2], "GamertagColor", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar2], "StatPriority", "");
		iVar2++;
	}
	bVar19 = MISC::IS_BIT_SET(uParam0->f_159, 6);
	if (bVar16 && uParam0->f_150 > 0)
	{
		bVar20 = MISC::IS_BIT_SET(uParam0->f_159, 5);
		if ((bVar17 || bVar18) && func_357() == 0)
		{
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				fVar21[iVar0] = BUILTIN::TO_FLOAT(Global_1050975[iVar0]);
				iVar0++;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if ((*uParam1)[iVar0 /*23*/] != -1 && (*uParam1)[iVar0 /*23*/] < 8)
				{
					if (func_379(uParam1[iVar0 /*23*/], 0) != -1f)
					{
						fVar21[(*uParam1)[iVar0 /*23*/]] = (fVar21[(*uParam1)[iVar0 /*23*/]] + func_379(uParam1[iVar0 /*23*/], 0));
					}
				}
				iVar0++;
			}
		}
		iVar5 = uParam0->f_150;
		func_310(uParam2, &uVar30, uParam0->f_150, bVar19);
		func_311(uParam0, iParam3, &uVar30, &iVar4, &iVar5);
		iVar2 = 0;
		while (iVar2 <= (iVar5 - 1))
		{
			iVar39 = uVar30[iVar2];
			if (iVar2 == 0 || iVar2 >= iVar4)
			{
				if (iVar39 < 8 && iVar39 != -1)
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar15, iVar2 + 1, 8);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar3], "Position", &cVar15);
						Var7 = { func_356(iVar39) };
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar3], "Gamertag", &Var7);
						iVar40 = func_358(iVar39, iParam4, uParam0->f_150, bVar20, iParam4 == iVar39);
						DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_143[iVar3], "GamertagColor", iVar40);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar3], "StatPriority", MISC::_0x2B6846401D68E563(fVar21[iVar39], uParam0->f_151));
					}
				}
			}
			iVar2++;
		}
	}
	else
	{
		func_313(uParam1, iParam3, &iVar4, &iVar5);
		iVar1 = 0;
		while (iVar1 <= iVar5)
		{
			if (iVar3 == 0 || iVar1 >= iVar4)
			{
				if (func_213(&((uParam1[iVar1 /*23*/])->f_14)))
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar15, iVar1 + 1, 8);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar3], "Position", &cVar15);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar3], "Gamertag", &((uParam1[iVar1 /*23*/])->f_14.f_1));
						bVar41 = iVar6 == (uParam1[iVar1 /*23*/])->f_14;
						iVar42 = func_280(uParam0, uParam1, iVar1, iVar6, bVar41);
						DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_143[iVar3], "GamertagColor", iVar42);
						sVar43 = "";
						sVar43 = MISC::_0x2B6846401D68E563(func_379(uParam1[iVar1 /*23*/], 0), 0);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar3], "StatPriority", sVar43);
					}
				}
			}
			iVar1++;
		}
	}
}

int func_341(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (iParam1 == iVar0)
		{
			return iVar1 + 1;
		}
		else if ((*uParam0)[iParam1 /*23*/] == (*uParam0)[iVar0 /*23*/] && func_213(&((uParam0[iVar0 /*23*/])->f_14)))
		{
			iVar1++;
		}
		iVar0++;
	}
	return -1;
}

void func_342(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	switch ((uParam1[iParam2 /*23*/])->f_10)
	{
		case 1:
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iParam2], "SetOverlayImg", 1);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iParam2], "ShowOverlay", true);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iParam2], "ShowCross", false);
			break;
		case 2:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iParam2], "ShowCross", true);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iParam2], "ShowOverlay", false);
			break;
		default:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iParam2], "ShowCross", false);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iParam2], "ShowOverlay", false);
			break;
	}
	if (bParam3)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_12[iParam2], "CrossColor", iParam4);
	}
}

char* func_343()
{
	return "RSN";
}

char* func_344(int iParam0)
{
	if (iParam0 >= 32 || iParam0 < 0)
	{
		return "-";
	}
	return MISC::_CREATE_VAR_STRING(2, "NUMBER", Global_1145091[iParam0 /*35*/]);
}

bool func_345(int iParam0)
{
	int iVar0;

	iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(func_380()));
	return iParam0 == iVar0;
}

char* func_346(int iParam0)
{
	if (iParam0 != 0)
	{
		return STATS::_0xB112B9262EC29C20(joaat("MP_PLAYINGSTYLES"), iParam0);
	}
	return "";
}

float func_347(var uParam0, int iParam1)
{
	if (func_72())
	{
		return func_381(uParam0, 0);
	}
	else if (MISC::IS_BIT_SET(iParam1, 3))
	{
		return uParam0->f_7;
	}
	else if (MISC::IS_BIT_SET(iParam1, 19))
	{
		return uParam0->f_6;
	}
	return uParam0->f_1;
}

float func_348(var uParam0, int iParam1)
{
	if (func_72())
	{
		func_381(uParam0, 1);
	}
	else if (MISC::IS_BIT_SET(iParam1, 3))
	{
		if (MISC::IS_BIT_SET(iParam1, 0))
		{
			return uParam0->f_7;
		}
		else if (MISC::IS_BIT_SET(iParam1, 4) || MISC::IS_BIT_SET(iParam1, 15))
		{
			return uParam0->f_8;
		}
	}
	else if (func_352(iParam1) || MISC::IS_BIT_SET(iParam1, 19))
	{
		return uParam0->f_1;
	}
	else if (MISC::IS_BIT_SET(iParam1, 8))
	{
		return uParam0->f_6;
	}
	else if (MISC::IS_BIT_SET(iParam1, 20))
	{
		return uParam0->f_6;
	}
	return uParam0->f_2;
}

char* func_349(var uParam0, int iParam1, int iParam2)
{
	if (func_72())
	{
		func_381(uParam0, 2);
	}
	else if (MISC::IS_BIT_SET(iParam1, 0) && !MISC::IS_BIT_SET(iParam1, 17))
	{
		if (MISC::IS_BIT_SET(iParam1, 3) && (MISC::IS_BIT_SET(iParam1, 4) || MISC::IS_BIT_SET(iParam1, 15)))
		{
			return uParam0->f_8;
		}
		return uParam0->f_2;
	}
	else if (MISC::IS_BIT_SET(iParam1, 21))
	{
		return uParam0->f_7;
	}
	else if (func_339(iParam1))
	{
		return uParam0->f_1;
	}
	else if (MISC::IS_BIT_SET(iParam1, 14))
	{
		return uParam0->f_8;
	}
	else if (MISC::IS_BIT_SET(iParam2, 8))
	{
		return uParam0->f_3;
	}
	return uParam0->f_5;
}

float func_350(var uParam0)
{
	if (func_72())
	{
		func_381(uParam0, 3);
	}
	return -1f;
}

void func_351(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	struct<8> Var14;
	char[] cVar22[8];
	bool bVar23;
	bool bVar24;
	float fVar25[8];
	var uVar34[8];
	int iVar43;
	int iVar44;
	bool bVar45;
	int iVar46;
	char* sVar47;
	int iVar48;

	iVar5 = 0;
	iVar6 = 32;
	bVar7 = MISC::IS_BIT_SET(uParam0->f_159, 3);
	bVar8 = MISC::IS_BIT_SET(uParam0->f_159, 23);
	bVar9 = MISC::IS_BIT_SET(uParam0->f_159, 24);
	bVar10 = MISC::IS_BIT_SET(uParam0->f_159, 25);
	bVar11 = MISC::IS_BIT_SET(uParam0->f_160, 10);
	bVar12 = MISC::IS_BIT_SET(uParam0->f_159, 28);
	iVar13 = PLAYER::PLAYER_ID();
	iVar2 = 0;
	while (iVar2 <= 4)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar2], "Position", "");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar2], "Gamertag", "");
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_143[iVar2], "GamertagColor", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar2], "StatPriority", "");
		iVar2++;
	}
	bVar23 = MISC::IS_BIT_SET(uParam0->f_159, 6);
	if (bVar12 && uParam0->f_150 > 0)
	{
		bVar24 = MISC::IS_BIT_SET(uParam0->f_159, 5);
		if ((bVar10 || bVar8) && func_357() == 0)
		{
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				fVar25[iVar0] = BUILTIN::TO_FLOAT(Global_1050975[iVar0]);
				iVar0++;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if ((*uParam1)[iVar0 /*23*/] != -1 && (*uParam1)[iVar0 /*23*/] < 8)
				{
					if (bVar9)
					{
						if ((uParam1[iVar0 /*23*/])->f_1 != -1f)
						{
							fVar25[(*uParam1)[iVar0 /*23*/]] = (fVar25[(*uParam1)[iVar0 /*23*/]] + (uParam1[iVar0 /*23*/])->f_1);
						}
					}
					else if (bVar8)
					{
						if ((uParam1[iVar0 /*23*/])->f_5 != -1f)
						{
							fVar25[(*uParam1)[iVar0 /*23*/]] = (fVar25[(*uParam1)[iVar0 /*23*/]] + (uParam1[iVar0 /*23*/])->f_5);
						}
					}
					else if (bVar11)
					{
						if ((uParam1[iVar0 /*23*/])->f_8 != -1f)
						{
							fVar25[(*uParam1)[iVar0 /*23*/]] = (fVar25[(*uParam1)[iVar0 /*23*/]] + (uParam1[iVar0 /*23*/])->f_8);
						}
					}
					else if ((uParam1[iVar0 /*23*/])->f_1 != -1f)
					{
						fVar25[(*uParam1)[iVar0 /*23*/]] = (fVar25[(*uParam1)[iVar0 /*23*/]] + (uParam1[iVar0 /*23*/])->f_1);
					}
				}
				iVar0++;
			}
		}
		iVar6 = uParam0->f_150;
		func_310(uParam2, &uVar34, uParam0->f_150, bVar23);
		func_311(uParam0, iParam3, &uVar34, &iVar5, &iVar6);
		iVar2 = 0;
		while (iVar2 <= (iVar6 - 1))
		{
			iVar43 = uVar34[iVar2];
			if (iVar2 == 0 || iVar2 >= iVar5)
			{
				if (iVar43 < 8 && iVar43 != -1)
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar22, iVar2 + 1, 8);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar3], "Position", &cVar22);
						Var14 = { func_356(iVar43) };
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar3], "Gamertag", &Var14);
						iVar44 = func_358(iVar43, iParam4, uParam0->f_150, bVar24, iParam4 == iVar43);
						DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_143[iVar3], "GamertagColor", iVar44);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar3], "StatPriority", MISC::_0x2B6846401D68E563(fVar25[iVar43], uParam0->f_151));
					}
				}
			}
			iVar2++;
		}
	}
	else
	{
		func_313(uParam1, iParam3, &iVar5, &iVar6);
		iVar1 = 0;
		while (iVar1 <= iVar6)
		{
			if (iVar3 == 0 || iVar1 >= iVar5)
			{
				if (func_213(&((uParam1[iVar1 /*23*/])->f_14)))
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar22, iVar1 + 1, 8);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar3], "Position", &cVar22);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar3], "Gamertag", &((uParam1[iVar1 /*23*/])->f_14.f_1));
						bVar45 = iVar13 == (uParam1[iVar1 /*23*/])->f_14;
						iVar46 = func_280(uParam0, uParam1, iVar1, iVar13, bVar45);
						DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_143[iVar3], "GamertagColor", iVar46);
						sVar47 = "";
						if (bVar7)
						{
							if (MISC::IS_BIT_SET(uParam0->f_159, 26))
							{
								if (MISC::IS_BIT_SET(uParam0->f_159, 0))
								{
									sVar47 = MISC::_0x2B6846401D68E563(func_349(uParam1[iVar1 /*23*/], uParam0->f_159, uParam0->f_160), 0);
								}
								else
								{
									sVar47 = MISC::_0x2B6846401D68E563(func_348(uParam1[iVar1 /*23*/], uParam0->f_159), 0);
								}
							}
							else if (MISC::IS_BIT_SET(uParam0->f_159, 27))
							{
								iVar4 = BUILTIN::ROUND(func_347(uParam1[iVar1 /*23*/], uParam0->f_159));
								sVar47 = " ";
								if (func_353(iVar4))
								{
									iVar48 = uParam0->f_159;
									if ((uParam1[iVar1 /*23*/])->f_1 == 8.94E+07f)
									{
										MISC::CLEAR_BIT(&iVar48, 12);
									}
									sVar47 = func_236(iVar4, iVar48, 1);
								}
							}
							else
							{
								sVar47 = MISC::_0x2B6846401D68E563(func_347(uParam1[iVar1 /*23*/], uParam0->f_159), func_354(uParam0, 1));
							}
						}
						else if (bVar9)
						{
							sVar47 = MISC::_0x2B6846401D68E563((uParam1[iVar1 /*23*/])->f_1, 0);
						}
						else if (bVar8 || bVar10)
						{
							if (MISC::IS_BIT_SET(uParam0->f_159, 9))
							{
								sVar47 = func_355((uParam1[iVar1 /*23*/])->f_5);
							}
							else
							{
								sVar47 = MISC::_0x2B6846401D68E563((uParam1[iVar1 /*23*/])->f_5, 0);
							}
						}
						else if (bVar11)
						{
							sVar47 = MISC::_0x2B6846401D68E563((uParam1[iVar1 /*23*/])->f_8, 0);
						}
						else
						{
							sVar47 = MISC::_0x2B6846401D68E563((uParam1[iVar1 /*23*/])->f_1, 0);
						}
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar3], "StatPriority", sVar47);
					}
				}
			}
			iVar1++;
		}
	}
}

bool func_352(int iParam0)
{
	if ((func_339(iParam0) || func_338(iParam0)) || MISC::IS_BIT_SET(iParam0, 18))
	{
		return false;
	}
	if (MISC::IS_BIT_SET(iParam0, 0) || MISC::IS_BIT_SET(iParam0, 17))
	{
		return true;
	}
	return false;
}

bool func_353(int iParam0)
{
	if ((iParam0 != 86400000 || iParam0 == 0) || iParam0 == BUILTIN::ROUND(-3f))
	{
		return true;
	}
	return false;
}

int func_354(var uParam0, int iParam1)
{
	if (iParam1 == 1 && MISC::IS_BIT_SET(uParam0->f_159, 29))
	{
		return uParam0->f_151;
	}
	if (iParam1 == 2 && MISC::IS_BIT_SET(uParam0->f_159, 30))
	{
		return uParam0->f_151;
	}
	if (iParam1 == 3 && MISC::IS_BIT_SET(uParam0->f_159, 31))
	{
		return uParam0->f_151;
	}
	return 0;
}

char* func_355(char* sParam0)
{
	return MISC::_CREATE_VAR_STRING(6, "FM_WEIGHT", sParam0);
}

struct<8> func_356(int iParam0)
{
	char cVar0[64];

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1050984[iParam0 /*8*/])))
	{
		StringCopy(&cVar0, "TEAM_", 64);
		StringIntConCat(&cVar0, iParam0, 64);
		StringCopy(&cVar0, HUD::_GET_LABEL_TEXT(&cVar0), 64);
		return cVar0;
	}
	return Global_1050984[iParam0 /*8*/];
}

int func_357()
{
	int iVar0;

	if (func_23(16))
	{
		iVar0 = Global_1050050.f_12;
	}
	else
	{
		iVar0 = func_382();
	}
	return iVar0;
}

int func_358(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	return func_319(iParam0, iParam1, iParam2, bParam3, bParam4);
}

int func_359(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	if (iParam1 <= -1)
	{
		return -1;
	}
	return Global_1139381.f_5079[iParam0 /*10*/].f_5[iParam1];
}

int func_360(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		default:
			return 2;
			return 2;
		case 2:
			return 3;
	}
}

void func_361(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam2 == -1)
	{
		return;
	}
	if (iParam1 <= -1)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	Global_1139381.f_5079[iParam0 /*10*/].f_5[iParam1] = iParam2;
}

void func_362(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 <= -1)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	Global_1139381.f_5079[iParam0 /*10*/][iParam1] = iParam2;
}

int func_363(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 <= -1)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 0;
	}
	return Global_1139381.f_5079[iParam0 /*10*/][iParam1];
}

struct<2> func_364(int iParam0)
{
	return Global_1900736.f_1[iParam0 /*2*/];
}

bool func_365(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_383(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_366(var uParam0, var uParam1)
{
	return uParam0;
}

int func_367(int iParam0)
{
	switch (PLAYER::GET_PLAYER_TEAM(iParam0))
	{
		case 0:
			return joaat("COLOR_NET_PLAYER3");
		case 1:
			return joaat("COLOR_NET_PLAYER4");
		case 2:
			return joaat("COLOR_NET_PLAYER5");
		case 3:
			return joaat("COLOR_NET_PLAYER6");
		case 4:
			return joaat("COLOR_NET_PLAYER7");
		case 5:
			return joaat("COLOR_NET_PLAYER8");
		case 6:
			return joaat("COLOR_NET_PLAYER9");
		case 7:
			return joaat("COLOR_NET_PLAYER10");
		case 8:
			return joaat("COLOR_NET_PLAYER11");
		default:
			break;
	}
	return joaat("COLOR_NET_PLAYER2");
}

int func_368(int iParam0)
{
	if (GANG::_0x901E0DC25080C8B9(iParam0) != Global_1296859.f_15 && !func_384())
	{
		return joaat("COLOR_POSSE_NEUTRAL");
	}
	return joaat("COLOR_POSSE_ALLY");
}

bool func_369(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_370(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = BUILTIN::FLOOR(func_385(iParam0, bParam1));
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

bool func_371(int iParam0, bool bParam1)
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

bool func_372(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return false;
	}
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return true;
	}
	if (bParam1)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28349), iVar0))
		{
			return false;
		}
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28350), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28348), iVar0))
		{
			return true;
		}
	}
	if (func_386(iParam0))
	{
		return true;
	}
	return !func_371(iParam0, 0);
}

bool func_373(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return false;
	}
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (bParam1)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28349), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28350), iVar0))
		{
			return false;
		}
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28348), iVar0))
		{
			return true;
		}
	}
	if (func_387(iParam0))
	{
		return false;
	}
	if (func_386(iParam0))
	{
		return false;
	}
	if (func_388(iParam0))
	{
		return true;
	}
	return func_389(iParam0);
}

int func_374(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_390(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_375(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -504335712;
		case 1:
			return 395262693;
		case 2:
			return -933924539;
		case 3:
			return 371211549;
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

bool func_376(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(iParam0, iParam1);
}

char* func_377(int iParam0)
{
	if (Global_3145858.f_61343[iParam0 /*3*/].f_1 > -1)
	{
		if (func_323(Global_3145858.f_61343[iParam0 /*3*/].f_1))
		{
			return MISC::_CREATE_VAR_STRING(2, &(Global_3145858.f_52528[Global_3145858.f_61343[iParam0 /*3*/].f_1 /*18*/]));
		}
		return func_391(&(Global_3145858.f_52528[Global_3145858.f_61343[iParam0 /*3*/].f_1 /*18*/]));
	}
	return "";
}

char* func_378(int iParam0)
{
	if (MISC::IS_BIT_SET(iParam0, 4))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_BLAP");
	}
	if (MISC::IS_BIT_SET(iParam0, 15))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_CPCO");
	}
	return "";
}

float func_379(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return uParam0->f_9;
		default:
			break;
	}
	return 0f;
}

var func_380()
{
	return Global_1102219.f_26.f_3341;
}

float func_381(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return uParam0->f_1;
		case 1:
			return uParam0->f_2;
		case 2:
			return uParam0->f_3;
		case 3:
			return uParam0->f_4;
		default:
			break;
	}
	return 0f;
}

int func_382()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("FM_MISSION_CONTROLLER")) != 0)
	{
		return 0;
	}
	else if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("FM_DEATHMATCH_CONTROLLER")) != 0)
	{
		return 1;
	}
	return 2;
}

int func_383(struct<2> Param0)
{
	int iVar0;

	if (!func_392(Param0))
	{
		return -1;
	}
	iVar0 = func_393(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1071686.f_19550.f_1[iVar0 /*3*/].f_2;
}

bool func_384()
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
	if (!func_392(Global_1051213) && Global_1572887.f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

float func_385(int iParam0, bool bParam1)
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

bool func_386(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28347), iParam0))
	{
		return true;
	}
	return false;
}

bool func_387(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28346), iParam0))
	{
		return true;
	}
	return false;
}

bool func_388(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28345), iParam0))
	{
		return true;
	}
	return false;
}

bool func_389(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		func_394(iParam0);
		return false;
	}
	if (func_388(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) != 2)
		{
			func_395(iParam0, 5, 1, 1, 0, 0);
		}
		return true;
	}
	return (NETWORK::_0x862C5040F4888741(Global_1296859.f_10, iParam0) || NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) == 2);
}

bool func_390(struct<2> Param0, var uParam2)
{
	if (!func_392(Param0))
	{
		return false;
	}
	func_396(uParam2);
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

var func_391(var uParam0)
{
	return uParam0;
}

bool func_392(struct<2> Param0)
{
	if (!func_397(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_398(Param0))
	{
		return false;
	}
	return true;
}

int func_393(struct<2> Param0)
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
	if (!func_390(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1071686.f_19550 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_390(Global_1071686.f_19550.f_1[iVar8 /*3*/], &vVar3);
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

void func_394(int iParam0)
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
	func_399(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 0;
}

void func_395(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	bool bVar5;
	struct<8> Var6;

	if (Global_1572887.f_16 != 0 || Global_1572887.f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (func_400(iVar0, iParam1, iParam5))
	{
		iVar1 = 1;
	}
	if (Global_1071686.f_21416.f_1[iVar0 /*8*/] != 2)
	{
		if (!Global_1296859.f_22[iVar0])
		{
			func_394(iParam0);
			return;
		}
		NETWORK::_0x51951DE06C0D1C40(iParam0, 2);
		Global_1071686.f_21416.f_1[iVar0 /*8*/] = 2;
		iVar1 = 1;
	}
	if (iParam2 && iVar1)
	{
		iVar2 = 0;
		while (iVar2 <= 31)
		{
			iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (iVar2 != Global_1296859 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
			{
				if (GANG::_0x81FB74C83C2ED69F(iVar3))
				{
					if (bParam3)
					{
						SCRIPTS::_0x31010318BA9897AC(&uVar4, iVar2);
						bVar5 = true;
					}
				}
				else if (GANG::_0x3F59FE6F37869576(iVar3, iParam0))
				{
					if (bParam4)
					{
						SCRIPTS::_0x31010318BA9897AC(&uVar4, iVar2);
						bVar5 = true;
					}
					if (iVar2 != iVar0)
					{
						func_395(iVar3, iParam1, 0, 1, 0, 0);
					}
				}
			}
			iVar2++;
		}
		if (bVar5)
		{
			Var6.f_6 = 255;
			Var6.f_4 = 1;
			Var6.f_6 = iParam0;
			Var6.f_7 = iParam1;
			func_401(&Var6, uVar4);
		}
	}
}

void func_396(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

bool func_397(int iParam0)
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

int func_398(int iParam0)
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

void func_399(int iParam0)
{
	if (Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

bool func_400(int iParam0, int iParam1, int iParam2)
{
	if (Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 < iParam1)
	{
		if (iParam2 != 0)
		{
			Global_1071686.f_21416.f_1[iParam0 /*8*/].f_2 = iParam2;
		}
		else
		{
			Global_1071686.f_21416.f_1[iParam0 /*8*/].f_2 = Global_1296859.f_21;
		}
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 = iParam1;
		return true;
	}
	else if (Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 == iParam1)
	{
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_2 = Global_1296859.f_21;
		return true;
	}
	return false;
}

void func_401(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 183;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 2, &uParam1);
	func_402(*uParam0);
}

void func_402(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
}

