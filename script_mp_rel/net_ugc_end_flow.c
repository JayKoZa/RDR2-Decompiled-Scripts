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
	var uLocal_14 = 0;
	var uLocal_15 = 0;
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
	struct<199> Local_32 = { 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_231 = 0;
	int iLocal_232 = 0;
	char* sLocal_233 = NULL;
	vector3 vLocal_234 = { 0f, 0f, 0f };
	vector3 vLocal_237 = { 0f, 0f, 0f };
	vector3 vLocal_240 = { 0f, 0f, 0f };
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	char cLocal_248[64] = "";
	char cLocal_256[64] = "";
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	float fLocal_271 = 0f;
	float fLocal_272 = 0f;
	int iLocal_273 = 0;
	float fLocal_274 = 0f;
	float fLocal_275 = 0f;
	float fLocal_276 = 0f;
	float fLocal_277 = 0f;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	var uLocal_283 = 0;
	int iLocal_284 = 0;
	var uLocal_285 = 0;
	struct<18> Local_286[4];
	vector3 vLocal_359 = { 0f, 0f, 0f };
	int iLocal_362 = 0;
	char cLocal_363[16] = "";
	var uLocal_365 = 0;
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
	struct<9> Local_379 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_388 = 0;
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
	var uLocal_405[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_438[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_471[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_488[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_505[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_514[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_523[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_540[4] = { 0, 0, 0, 0 };
	int iLocal_545 = 0;
	int iLocal_546 = 0;
	var uLocal_547 = 0;
	bool bLocal_548 = false;
	int iLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	float fLocal_552 = 0f;
	float fLocal_553 = 0f;
#endregion

void __EntryFunction__()
{
	uLocal_14 = GRAPHICS::_0x842CCC9491FFCD9B("MP_Trans_SceneToPhoto");
	uLocal_15 = GRAPHICS::_0x842CCC9491FFCD9B("MP_Trans_WinLose");
	iLocal_232 = -1;
	sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@8v8_v1";
	vLocal_234 = { -580.2f, -3626.5f, 79.94f };
	vLocal_237 = { -596.927f, -3639.072f, 80.6997f };
	vLocal_240 = { -561f, -3700f, 83f };
	iLocal_243 = -1633151965;
	iLocal_244 = -1616778617;
	iLocal_245 = -1852748182;
	iLocal_246 = 435889881;
	StringCopy(&cLocal_248, "mp_winlose_", 64);
	StringCopy(&cLocal_256, "mp_winlose", 64);
	iLocal_264 = 1081228448;
	iLocal_265 = 1081228448;
	iLocal_266 = 1373121931;
	iLocal_273 = 1;
	iLocal_278 = -1;
	StringCopy(&cLocal_363, "UIC", 16);
	iLocal_403 = PLAYER::GET_PLAYER_INDEX();
	iLocal_404 = PLAYER::GET_PLAYER_PED(iLocal_403);
	fLocal_552 = 1f;
	fLocal_553 = 1f;
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
		if (MISC::IS_BIT_SET(iLocal_397, 3))
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
	Global_1051084 = 0;
	PED::SET_PED_RESET_FLAG(iLocal_404, 240, true);
	func_18(&uLocal_16, 1, 0);
	func_19(&uLocal_16, 0);
	GRAPHICS::_0xF3E039322BFBD4D8(uLocal_14);
	GRAPHICS::_0xE75CDDEBF618C8FF(uLocal_14);
	GRAPHICS::_0xF3E039322BFBD4D8(uLocal_15);
	GRAPHICS::_0xE75CDDEBF618C8FF(uLocal_15);
	GRAPHICS::_0xFF8018C778349234(0);
	func_20(1);
}

int func_3()
{
	if (MISC::IS_BIT_SET(iLocal_395, 2) || iLocal_388 == 2)
	{
		return 1;
	}
	if (func_21(64))
	{
		return 1;
	}
	if (func_22(1, 1))
	{
		MISC::SET_BIT(&iLocal_396, 0);
		return 1;
	}
	if (&Global_2883584)
	{
		return 1;
	}
	if (func_23(128))
	{
		MISC::SET_BIT(&iLocal_396, 0);
		return 1;
	}
	if (func_21(2048))
	{
		MISC::SET_BIT(&iLocal_396, 0);
		return 1;
	}
	if (func_23(32))
	{
		return 1;
	}
	return 0;
}

int func_4()
{
	if (!MISC::IS_BIT_SET(iLocal_395, 3))
	{
		if (func_24())
		{
			MISC::SET_BIT(&iLocal_395, 3);
		}
		switch (&Global_262152)
		{
			case 0:
				if (!func_25())
				{
					MISC::CLEAR_BIT(&iLocal_395, 3);
				}
				break;
			case 1:
				if (!func_25())
				{
					MISC::CLEAR_BIT(&iLocal_395, 3);
				}
				if (!func_26())
				{
					MISC::CLEAR_BIT(&iLocal_395, 3);
				}
				break;
			case 3:
				if (!func_25())
				{
					MISC::CLEAR_BIT(&iLocal_395, 3);
				}
				if (!func_26())
				{
					MISC::CLEAR_BIT(&iLocal_395, 3);
				}
				break;
			case 2:
				break;
			case 4:
				MISC::CLEAR_BIT(&iLocal_395, 3);
				break;
		}
		if (MISC::IS_BIT_SET(iLocal_395, 3))
		{
			return 1;
		}
		else
		{
			if (func_5())
			{
				NETWORK::_0x236905C700FDB54D();
			}
			if (&Global_262152 != 4)
			{
			}
			return 0;
		}
	}
	return 1;
}

int func_5()
{
	if (MISC::IS_BIT_SET(iLocal_395, 1))
	{
		return 1;
	}
	else if (func_23(16))
	{
		MISC::SET_BIT(&iLocal_395, 1);
		return 1;
	}
	return 0;
}

bool func_6()
{
	int iVar0;
	vector3 vVar1;

	if (&Global_262152 == 1)
	{
		if (!MISC::IS_BIT_SET(iLocal_399, 0))
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if (ENTITY::DOES_ENTITY_EXIST(&(Global_1048684->f_22[iVar0 /*10*/])))
				{
					MISC::SET_BIT(&iLocal_399, 0);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(&(Global_1048684->f_22[iVar0 /*10*/]), true, true);
					ENTITY::FREEZE_ENTITY_POSITION(&(Global_1048684->f_22[iVar0 /*10*/]), true);
					ENTITY::SET_ENTITY_INVINCIBLE(&(Global_1048684->f_22[iVar0 /*10*/]), true);
					vVar1 = { ENTITY::GET_ENTITY_COORDS(&(Global_1048684->f_22[iVar0 /*10*/]), true, false) };
					func_27(uLocal_405[iVar0], Global_1048684->f_22[iVar0 /*10*/], &vVar1);
					if (!(Global_1048684->f_22[iVar0 /*10*/])->f_9)
					{
						func_28(&(uLocal_405[iVar0]), 0, 1);
					}
					PED::DELETE_PED(Global_1048684->f_22[iVar0 /*10*/]);
					if (ENTITY::DOES_ENTITY_EXIST(&(Global_1048684->f_343[iVar0])))
					{
						func_27(uLocal_438[iVar0], Global_1048684->f_343[iVar0], &vVar1);
						PED::DELETE_PED(Global_1048684->f_343[iVar0]);
					}
				}
				iVar0++;
			}
			return false;
		}
	}
	return MISC::IS_BIT_SET(iLocal_395, 0);
}

void func_7()
{
	func_29();
	func_30();
	switch (&Global_262152)
	{
		case 0:
			func_31();
			break;
		case 2:
			func_32();
			break;
		case 3:
			func_33();
			func_34();
			break;
		case 1:
			func_34();
			break;
		case 4:
			break;
	}
}

void func_8()
{
	int iVar0;

	func_1(1);
	func_35(0);
	func_36();
	if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
	{
		func_37(1);
		func_38(1);
	}
	func_39(1);
	if (!func_40(255))
	{
		func_41(3);
	}
	else
	{
		func_42(1);
		if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
		{
			func_43(64);
		}
	}
	func_44(0);
	if (!func_40(255))
	{
		iVar0 = 8;
		func_45(0, iVar0);
	}
	func_46(2048);
	UIAPPS::_CLOSE_ALL_APPS_IMMEDIATE();
	MISC::SET_BIT(&(Global_1956131->f_1), 5);
	iLocal_402 = Global_1048684->f_19;
	func_47(&iLocal_404);
	MISC::SET_BIT(&iLocal_395, 0);
}

void func_9()
{
	char* sVar0;

	AUDIO::_0xD9130842D7226045("RDRO_Camera_Flash_Pulse", 0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1048684->f_1)) || !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1048684->f_9)))
	{
		if (!MISC::IS_BIT_SET(iLocal_396, 4))
		{
			if (MISC::IS_BIT_SET(iLocal_396, 5) || GRAPHICS::_0xEEF83A759AE06A27(uLocal_14))
			{
				if (MISC::IS_BIT_SET(iLocal_396, 5) || GRAPHICS::_0x9AB192A9EF980EED(uLocal_14, 2, 0, &uLocal_283))
				{
					sVar0 = "photograph";
					if (MISC::IS_BIT_SET(iLocal_396, 5))
					{
						sVar0 = "photograph_death_screen_stats";
					}
					if (AUDIO::_0xE368E8422C860BA7(sVar0, "rdro_gamemode_transition_sounds", -2))
					{
						if (!MISC::IS_BIT_SET(iLocal_396, 7))
						{
							func_48();
						}
						else
						{
							func_49();
						}
						MISC::SET_BIT(&iLocal_396, 4);
						MISC::SET_BIT(&iLocal_396, 12);
						func_43(64);
						AUDIO::PLAY_SOUND_FRONTEND(sVar0, "rdro_gamemode_transition_sounds", true, 0);
						AUDIO::_0x9B1FC259187C97C0("photograph");
						func_50();
						vLocal_359 = { vLocal_234 };
						func_51(1, 0);
					}
				}
			}
			else if (func_52(16) && func_24())
			{
				func_53();
			}
		}
		else if ((GRAPHICS::_0xEEF83A759AE06A27(uLocal_14) && GRAPHICS::_0x9AB192A9EF980EED(uLocal_14, 2, 0, &uLocal_283)) || (GRAPHICS::_0xEEF83A759AE06A27(uLocal_15) && GRAPHICS::_0x9AB192A9EF980EED(uLocal_15, 2, 0, &uLocal_283)))
		{
			AUDIO::PLAY_SOUND_FRONTEND("camera_flash", "RDRO_Camera_Flash_Pulse", true, 0);
			AUDIO::_0x9B1FC259187C97C0("photograph");
		}
	}
}

void func_10()
{
	struct<10> Var0;

	if (&Global_1049158)
	{
		Global_1049148->f_5 = (Global_1048684->f_392.f_8 + Global_1048684->f_408.f_8);
		Global_1049148->f_6 = (Global_1048684->f_392.f_6 + Global_1048684->f_408.f_6);
		TELEMETRY::_0xA2058154357726BB(Global_1049159, Global_1049148);
		*Global_1049148 = { Var0 };
		Global_1049158 = 0;
	}
}

void func_11()
{
	int iVar0;

	if (!Global_1048684->f_456)
	{
		if (Global_1048684->f_455 || iLocal_284)
		{
			func_55(func_54(455921177, 701412595), 1);
			iVar0 = func_56(Global_1572887->f_106.f_9);
			switch (iVar0)
			{
				case 7:
					func_55(func_54(455921177, 112216621), 1);
					break;
				case 8:
					func_55(func_54(455921177, -1767965617), 1);
					break;
				case 9:
					func_55(func_54(455921177, 81153145), 1);
					break;
				case 2:
					func_55(func_54(455921177, 2090637823), 1);
					break;
				case 3:
					func_55(func_54(455921177, 2090637823), 1);
					break;
				case 4:
					func_55(func_54(455921177, -1740003396), 1);
					break;
				case 6:
					func_55(func_54(455921177, -141490041), 1);
					break;
				case 5:
					func_55(func_54(455921177, -2140118397), 1);
					break;
				case 19:
					func_55(func_54(455921177, 928731509), 1);
					break;
			}
		}
	}
}

void func_12()
{
	NETWORK::_0x236905C700FDB54D();
	func_57();
	func_58();
	func_59();
	switch (&Global_262152)
	{
		case 0:
			func_60();
			break;
		case 2:
			func_61();
			break;
		case 3:
			func_62();
			func_63();
			break;
		case 1:
			func_63();
			break;
	}
	func_64();
	func_10();
	HUD::_DISPLAY_HUD_COMPONENT(999578278);
	HUD::_DISPLAY_HUD_COMPONENT(690901814);
	func_65();
	func_66(1);
	func_16(2048);
	if (MISC::IS_BIT_SET(iLocal_396, 3))
	{
		func_67(-304137656, 0, 255, 0, 0);
	}
	Global_1048684->f_377 = 27;
	func_68(4);
	func_69(0);
	func_70();
	func_71(0);
	func_72(0);
	if (func_73())
	{
		func_74(0);
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
	return func_75(Global_1572887->f_7, 1);
}

void func_15(int iParam0)
{
	Global_265331->f_124445.f_134 = (Global_265331->f_124445.f_134 - (Global_265331->f_124445.f_134 && iParam0));
}

void func_16(int iParam0)
{
	Global_262151 = (&Global_262151 - (Global_262151 && iParam0));
}

void func_17(int iParam0)
{
	Global_265331->f_124445.f_134 = (Global_265331->f_124445.f_134 || iParam0);
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
	return (Global_265331->f_124445.f_134 && iParam0) != 0;
}

int func_22(bool bParam0, bool bParam1)
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

bool func_23(int iParam0)
{
	return (Global_262151 && iParam0) != 0;
}

int func_24()
{
	if (iLocal_280 < 100)
	{
		if (func_76(&cLocal_363, &iLocal_280))
		{
			iLocal_280 = 100;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_25()
{
	return 1;
}

int func_26()
{
	if (func_77())
	{
		if (func_78())
		{
			if (func_79(iLocal_243, iLocal_244, iLocal_246, iLocal_245))
			{
				if (func_80())
				{
					if (func_81())
					{
						if (func_82(&uLocal_16))
						{
							if (func_83())
							{
								STREAMING::_0x513F8AA5BF2F17CF(vLocal_234, 15f, 0);
								func_46(2);
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_27(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = PED::CLONE_PED(*uParam1, 0f, true, true);
	PED::CLONE_PED_TO_TARGET(*uParam1, *uParam0);
	ENTITY::SET_ENTITY_COORDS(*uParam0, *uParam2, true, false, true, true);
	ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(*uParam0, 0, 1);
	if (PED::IS_PED_DEAD_OR_DYING(*uParam0, true))
	{
		PED::REVIVE_INJURED_PED(*uParam0);
		ENTITY::_SET_ENTITY_HEALTH(*uParam0, ENTITY::GET_ENTITY_MAX_HEALTH(*uParam0, 0), 0);
	}
	PED::CLEAR_PED_DECORATIONS(*uParam0);
	PED::_0x2208438012482A1A(*uParam0, true, true);
	ENTITY::SET_ENTITY_INVINCIBLE(*uParam0, true);
	ENTITY::SET_ENTITY_VISIBLE(*uParam0, true);
}

void func_28(var uParam0, int iParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(uParam0))
	{
		return;
	}
	PED::_SET_PED_COMPONENT_DISABLED(uParam0, -1725579161, 1);
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(uParam0, 0, 1, 1, 1, 0);
	}
}

void func_29()
{
	NETWORK::_0x236905C700FDB54D();
	func_17(8);
	func_50();
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), true);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MAP"), true);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), true);
	func_39(1);
	func_84(1);
	func_85();
	UIFEED::_0xDD1232B332CBB9E7(1, 1, 0);
	CAM::_0x8910C24B7E0046EC();
	HUD::_HIDE_HUD_COMPONENT(999578278);
	func_66(0);
}

void func_30()
{
	if (MISC::IS_BIT_SET(iLocal_395, 4))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_545))
		{
			if (!bLocal_548)
			{
				uLocal_547 = ENTITY::_0x6F3068258A499E52(988533890, -561.1321f, -3694.189f, 81.9117f, 15);
				bLocal_548 = true;
			}
			else if (ENTITY::_0x1FF441D7954F8709(uLocal_547))
			{
				iLocal_545 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(uLocal_547));
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_545) && ENTITY::IS_ENTITY_VISIBLE(iLocal_545))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_545, false);
				}
			}
		}
	}
}

void func_31()
{
	if (PLAYER::IS_PLAYER_CONTROL_ON(iLocal_403))
	{
		func_45(0, 8);
	}
	switch (iLocal_388)
	{
		case 0:
			if (func_86(&uLocal_373))
			{
				if (func_87(&uLocal_373, 0, 0) > 2500)
				{
					func_88(&uLocal_16);
					HUD::_HIDE_HUD_COMPONENT(999578278);
					func_89(&Local_32, 1);
					func_90(&Local_32);
					func_91(1);
				}
			}
			else
			{
				func_92(&uLocal_373, 0, 0);
			}
			break;
		case 1:
			func_89(&Local_32, 1);
			func_91(2);
			break;
		case 2:
			MISC::SET_BIT(&iLocal_395, 2);
			break;
	}
}

void func_32()
{
	if (func_86(&uLocal_371))
	{
		if (!func_23(4096))
		{
			func_93(1);
			if (!func_23(256))
			{
				if (func_23(16))
				{
					func_16(16);
				}
			}
			if (func_87(&uLocal_371, 1, 0) > 5000 && func_94())
			{
				if (!&Global_1048577)
				{
					if (!func_95(255))
					{
						if (func_23(64) || func_96())
						{
							if (!func_23(256))
							{
								func_97(0);
							}
							GRAPHICS::_0xEDA5CBECF56E1386(uLocal_14);
							if (func_98())
							{
								func_99(4);
							}
							func_84(0);
							MISC::SET_BIT(&iLocal_395, 2);
						}
					}
				}
			}
		}
		else
		{
			func_100();
		}
	}
	else
	{
		if (!func_23(4096))
		{
			CAM::DO_SCREEN_FADE_OUT(1750);
		}
		func_92(&uLocal_371, 1, 0);
	}
}

void func_33()
{
	switch (iLocal_388)
	{
		case 0:
			switch (iLocal_390)
			{
				case 1:
					break;
			}
			break;
		case 1:
			switch (iLocal_389)
			{
				case 0:
					break;
			}
			break;
	}
}

void func_34()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	int iVar4;

	if (PLAYER::IS_PLAYER_CONTROL_ON(iLocal_403))
	{
		func_45(0, 8);
	}
	func_101();
	switch (iLocal_388)
	{
		case 0:
			switch (iLocal_390)
			{
				case 0:
					func_102();
					func_103();
					func_104(1);
					func_105(1);
					if (MISC::IS_BIT_SET(iLocal_398, 12))
					{
						MISC::_0x3373779BAF7CAF48("FOG", "fog_MP_Pred");
						MISC::_0x3373779BAF7CAF48("MISTY", "misty_MP_Pred");
						MISC::_0x3373779BAF7CAF48("SHOWER", "shower_MP_Pred");
						MISC::_0x3373779BAF7CAF48("THUNDERSTORM", "thunderstorm_MP_Pred");
					}
					else if (MISC::IS_BIT_SET(iLocal_398, 3))
					{
						MISC::_0x0E71C80FA4EC8147("FOG", true);
						MISC::_0x0E71C80FA4EC8147("MISTY", true);
						MISC::_0x0E71C80FA4EC8147("SHOWER", true);
						MISC::_0x0E71C80FA4EC8147("THUNDERSTORM", true);
					}
					func_106(1);
					break;
				case 1:
					if (!MISC::IS_BIT_SET(iLocal_396, 12))
					{
						return;
					}
					func_107();
					NETWORK::_0x65F040D91001ED4B(0);
					MISC::_0xCE7690C0A0D1C36D(0);
					MISC::_SET_WEATHER_TYPE(iLocal_247, true, true, false, 0f, false);
					func_108(1);
					if (iLocal_278 == -1)
					{
						if (MISC::IS_BIT_SET(iLocal_396, 31))
						{
							NETWORK::_NETWORK_CLOCK_TIME_OVERRIDE(0, 0, 0, 0, true);
						}
						else if (MISC::IS_BIT_SET(iLocal_396, 30))
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
						NETWORK::_NETWORK_CLOCK_TIME_OVERRIDE(iLocal_278, iLocal_279, 0, 0, true);
					}
					iLocal_281 = MISC::GET_GAME_TIMER();
					MISC::SET_BIT(&iLocal_396, 10);
					func_106(2);
					break;
				case 2:
					func_109();
					if ((((((MISC::IS_BIT_SET(iLocal_399, 3) && MISC::IS_BIT_SET(iLocal_399, 2)) && MISC::IS_BIT_SET(iLocal_399, 1)) && MISC::IS_BIT_SET(iLocal_399, 6)) && MISC::IS_BIT_SET(iLocal_399, 7)) && MISC::IS_BIT_SET(iLocal_399, 4)) && MISC::IS_BIT_SET(iLocal_399, 5))
					{
						func_106(3);
					}
					break;
				case 3:
					if (!MISC::IS_BIT_SET(iLocal_398, 9))
					{
						STREAMING::SET_FOCUS_POS_AND_VEL(vLocal_234, 0f, 0f, 0f);
					}
					else
					{
						STREAMING::SET_FOCUS_POS_AND_VEL(vLocal_240, 0f, 0f, 0f);
					}
					if (STREAMING::_IS_POSITION_INSIDE_IMAP_STREAMING_EXTENTS(iLocal_243, vLocal_234))
					{
						bVar0 = true;
					}
					else if (func_86(&uLocal_367) && func_87(&uLocal_367, 0, 0) > 3500)
					{
						if (STREAMING::GET_NUMBER_OF_STREAMING_REQUESTS() == 0)
						{
							bVar0 = true;
						}
						else
						{
							bVar0 = func_110();
						}
					}
					else
					{
						bVar0 = func_110();
					}
					if (bVar0 || (MISC::GET_GAME_TIMER() - iLocal_281) > 3500)
					{
						func_111(&uLocal_369);
						GRAPHICS::SET_TIMECYCLE_MODIFIER(&cLocal_248);
						iVar1 = 24;
						func_45(0, iVar1);
						func_92(&uLocal_371, 0, 0);
						func_112();
						func_106(4);
					}
					break;
				case 4:
					if (func_87(&uLocal_371, 0, 0) > 1000)
					{
						func_92(&uLocal_367, 0, 0);
						func_93(1);
						func_113();
						GRAPHICS::SET_TIMECYCLE_MODIFIER(&cLocal_248);
						func_91(1);
					}
					break;
			}
			break;
		case 1:
			if (!MISC::IS_BIT_SET(iLocal_398, 9))
			{
				STREAMING::SET_FOCUS_POS_AND_VEL(vLocal_234, 0f, 0f, 0f);
			}
			else
			{
				STREAMING::SET_FOCUS_POS_AND_VEL(vLocal_240, 0f, 0f, 0f);
			}
			VOICE::_0x1C38C3577901AF1F();
			func_114(Global_1049267, 1);
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 1);
			switch (iLocal_389)
			{
				case 0:
					if (!func_95(255))
					{
						if (func_115())
						{
							func_116(1);
						}
					}
					break;
				case 1:
					if (Local_32.f_198 < 2)
					{
						func_89(&Local_32, 0);
					}
					if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(0);
					}
					func_92(&uLocal_371, 0, 0);
					if (func_98())
					{
						func_99(4);
					}
					func_84(0);
					AUDIO::_0x9B1FC259187C97C0("winners_pose");
					if (func_52(2) || func_52(4))
					{
						AUDIO::PLAY_SOUND_FRONTEND("Strike_Heavy", "RDRO_Countdown_Clockwork_Sounds", true, 0);
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND("Strike_Light", "RDRO_Countdown_Clockwork_Sounds", true, 0);
					}
					AUDIO::TRIGGER_MUSIC_EVENT(&(Global_1048684->f_460));
					STREAMING::_0x5A8B01199C3E79C3();
					func_16(2);
					GRAPHICS::_0xEDA5CBECF56E1386(uLocal_14);
					GRAPHICS::ANIMPOSTFX_STOP_ALL();
					GRAPHICS::_0x3A9A281FF71249E9("RespawnMissionCheckpoint", 1250);
					func_116(2);
					break;
				case 2:
					if (!GRAPHICS::_0xEEF83A759AE06A27(uLocal_15))
					{
						if ((ANIMSCENE::_GET_ANIM_SCENE_DURATION(iLocal_232) - ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_232)) <= 1.2f)
						{
							GRAPHICS::_0x9B8D5D4CB8AF58B3(uLocal_15);
							MISC::SET_BIT(&iLocal_396, 4);
						}
					}
					if (func_117())
					{
						func_118(1);
						func_119(1);
						func_120();
						AUDIO::_0x9B1FC259187C97C0("photograph");
						func_92(&uLocal_375, 0, 0);
						func_92(&uLocal_377, 0, 0);
						iVar2 = PLAYER::PLAYER_ID();
						sVar3 = PLAYER::GET_PLAYER_NAME(iVar2);
						iVar4 = 0;
						while (iVar4 <= 3)
						{
							if (Global_1050004->f_14 <= 1)
							{
								if (MISC::ARE_STRINGS_EQUAL(&((Global_1050004->f_101[iVar4 /*23*/])->f_14.f_1), sVar3))
								{
									iLocal_284 = 1;
								}
								else
								{
									iVar4++;
								}
								func_116(3);
								Jump @1205; //curOff = 1182
								if (!func_86(&uLocal_371))
								{
									func_92(&uLocal_371, 0, 0);
								}
								Jump @1338; //curOff = 1205
								if (func_87(&uLocal_377, 0, 0) > 5000)
								{
									MISC::SET_BIT(&iLocal_397, 0);
									func_116(4);
								}
								else if (func_87(&uLocal_377, 0, 0) < 0 || !func_86(&uLocal_377))
								{
									func_92(&uLocal_377, 0, 0);
								}
								Jump @1338; //curOff = 1276
								func_89(&Local_32, 0);
								func_121(&Local_32, Global_1049267);
								func_122(&Local_32, Global_1049267, 1);
								if (func_123())
								{
									func_124();
									func_91(2);
								}
								func_121(&Local_32, &(Global_1050004->f_101));
								Jump @1352; //curOff = 1338
								MISC::SET_BIT(&iLocal_395, 2);
								if (MISC::IS_BIT_SET(iLocal_397, 1))
								{
									func_125();
								}
								if (MISC::IS_BIT_SET(iLocal_397, 0))
								{
									func_126();
								}
							}
						}
					}
			}
		}

void func_35(int iParam0)
{
	Global_1070356->f_27136.f_3 = 1;
	Global_1070356->f_27136.f_62.f_30 = iParam0;
	Global_1070356->f_27136.f_4 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_36()
{
	func_127(2);
}

void func_37(bool bParam0)
{
	if (!bParam0)
	{
		func_128(17);
	}
	else
	{
		func_129(17);
	}
}

void func_38(bool bParam0)
{
	if (!bParam0)
	{
		func_128(18);
	}
	else
	{
		func_129(18);
	}
}

void func_39(bool bParam0)
{
	if (!bParam0)
	{
		func_128(20);
	}
	else
	{
		func_129(20);
	}
}

bool func_40(int iParam0)
{
	if (iParam0 == 255)
	{
		return func_130();
	}
	return func_131(64, iParam0);
}

void func_41(int iParam0)
{
	Global_1099294->f_26.f_12 = iParam0;
}

void func_42(bool bParam0)
{
	if (!bParam0)
	{
		func_128(27);
	}
	else
	{
		func_129(27);
	}
}

void func_43(int iParam0)
{
	if (func_132(iParam0))
	{
		return;
	}
	Global_1099294->f_26.f_9 = (Global_1099294->f_26.f_9 || iParam0);
}

void func_44(bool bParam0)
{
	if (bParam0)
	{
		func_129(48);
	}
	else
	{
		func_128(48);
	}
}

void func_45(bool bParam0, int iParam1)
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
		func_133(iParam1);
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
	func_134(bVar1, bVar2, bVar3, (bVar4 || bVar5), bVar6, 0, bVar5);
}

void func_46(int iParam0)
{
	Global_262151 = (Global_262151 || iParam0);
}

void func_47(int iParam0)
{
	PED::SET_PED_RESET_FLAG(*iParam0, 129, true);
}

void func_48()
{
	if (func_52(17))
	{
		MISC::SET_BIT(&iLocal_396, 7);
		return;
	}
	Local_32.f_159 = &Global_1051067;
	Local_32.f_160 = &Global_1051068;
	func_135(Global_1049267, &Local_32, &uLocal_16, iLocal_402, func_52(15));
	MISC::SET_BIT(&iLocal_396, 7);
}

void func_49()
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
	func_136(&uLocal_16, cVar0, &(Global_1048684->f_9), " ", " ", " ", " ", Global_1048684->f_17);
	func_137(&uLocal_16);
	func_19(&uLocal_16, 1);
}

void func_50()
{
	if (UIAPPS::_IS_APP_RUNNING(29649618) || UIAPPS::_IS_APP_ACTIVE(29649618))
	{
		UIAPPS::_CLOSE_APP_BY_HASH_IMMEDIATE(29649618);
	}
	if (UIAPPS::_IS_APP_RUNNING(joaat("abilities")) || UIAPPS::_IS_APP_ACTIVE(joaat("abilities")))
	{
		UIAPPS::_CLOSE_APP_BY_HASH_IMMEDIATE(joaat("abilities"));
	}
	if (func_138())
	{
		func_139();
	}
	if (func_140())
	{
		func_141();
	}
}

void func_51(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(iLocal_396, 11) && !func_142(vLocal_359))
		{
			MISC::SET_BIT(&iLocal_396, 11);
			if (!MISC::IS_BIT_SET(iLocal_398, 9))
			{
				STREAMING::SET_FOCUS_POS_AND_VEL(vLocal_359, 0f, 0f, 0f);
			}
			else
			{
				STREAMING::SET_FOCUS_POS_AND_VEL(vLocal_240, 0f, 0f, 0f);
			}
		}
	}
	else if (MISC::IS_BIT_SET(iLocal_396, 11) || bParam1)
	{
		MISC::CLEAR_BIT(&iLocal_396, 11);
		STREAMING::CLEAR_FOCUS();
		vLocal_359 = { 0f, 0f, 0f };
	}
}

bool func_52(int iParam0)
{
	return MISC::IS_BIT_SET(&Global_1048684, iParam0);
}

void func_53()
{
	if (func_137(&uLocal_16))
	{
		func_92(&uLocal_371, 1, 0);
		if (!func_143(2))
		{
			AUDIO::PLAY_SOUND_FRONTEND("Winners_Screen", "RDROADV_Winners_Screen_Sounds", true, 0);
		}
		if (!GRAPHICS::_0xEEF83A759AE06A27(uLocal_14))
		{
			if (!func_98() || !func_144())
			{
				GRAPHICS::_0x9B8D5D4CB8AF58B3(uLocal_14);
			}
			else
			{
				MISC::SET_BIT(&iLocal_396, 5);
			}
			MISC::CLEAR_BIT(&iLocal_396, 4);
			func_145(16);
		}
	}
}

struct<2> func_54(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_55(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

int func_56(int iParam0)
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
		if (iParam0 != &Global_265331->f_117321.f_6758[iVar0])
		{
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (&Global_265331->f_117321.f_6725[iVar0] != &Global_265308->f_1[iVar1])
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

void func_57()
{
	if (!func_95(255))
	{
		func_37(0);
		func_38(0);
		if (func_23(64) || !func_14())
		{
			if (!func_21(64))
			{
				if (&Global_262152 != 0)
				{
					func_51(0, 0);
					if (!func_23(256))
					{
						if (MISC::IS_BIT_SET(&Global_1048684, 29) || MISC::IS_BIT_SET(&Global_1048684, 30))
						{
							if (MISC::IS_BIT_SET(&Global_1048684, 31))
							{
								func_146(1, 0);
								func_147(1);
							}
							else if (MISC::IS_BIT_SET(&Global_1048684, 28) || MISC::IS_BIT_SET(&Global_1048684, 27))
							{
								if (MISC::IS_BIT_SET(&Global_1048684, 27))
								{
									if (!func_142(Global_1048684->f_383))
									{
										func_148(Global_1048684->f_383, Global_1048684->f_386, 1);
									}
								}
								func_149(1, 0);
								func_147(2);
							}
							if (MISC::IS_BIT_SET(&Global_1048684, 29) && !func_142(Global_1048684->f_379))
							{
								func_150(Global_1048684->f_379, Global_1048684->f_382);
								func_147(4);
							}
							else
							{
								func_150(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING());
								func_147(8);
							}
						}
						else if (func_151() == 33)
						{
							func_152(5, 1);
							func_147(64);
						}
						else
						{
							func_147(16);
						}
					}
				}
				if (!func_153())
				{
					func_37(1);
					func_147(32);
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

void func_58()
{
	if (func_23(256))
	{
		MISC::SET_BIT(&iLocal_396, 2);
		CAM::DO_SCREEN_FADE_OUT(0);
		GRAPHICS::RESET_PAUSED_RENDERPHASES();
		HUD::_DISPLAY_HUD_COMPONENT(999578278);
		HUD::_DISPLAY_HUD_COMPONENT(690901814);
	}
	else if (func_23(64) || func_21(32))
	{
		MISC::SET_BIT(&iLocal_396, 1);
		while (!func_154(&bLocal_13) && !func_22(1, 1))
		{
			NETWORK::_0x236905C700FDB54D();
			BUILTIN::WAIT(0);
		}
		func_155();
	}
}

void func_59()
{
	var uVar0;
	int iVar36;

	func_156();
	func_157();
	func_41(0);
	func_158(64);
	func_38(0);
	func_39(0);
	func_42(0);
	func_84(0);
	func_159();
	func_160(0);
	func_161(0);
	func_124();
	MISC::CLEAR_BIT(&(Global_1956131->f_1), 5);
	Global_1048684->f_459 = 0;
	uVar0 = 32;
	func_162(&uVar0, PLAYER::GET_PLAYER_INDEX(), 0);
	HUD::_TEXT_DATABASE_DELETE("UIC");
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MAP"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), true);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 0, 1);
	NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(false);
	PED::SET_PED_RESET_FLAG(iLocal_404, 240, false);
	AUDIO::_0x531A78D6BF27014B("RDRO_Winners_Screen_Sounds");
	AUDIO::_0x531A78D6BF27014B("RDROADV_Winners_Screen_Sounds");
	AUDIO::_0x531A78D6BF27014B("RDRO_Countdown_Clockwork_Sounds");
	if (GRAPHICS::_0xEEF83A759AE06A27(uLocal_14))
	{
		GRAPHICS::_0xEDA5CBECF56E1386(uLocal_14);
	}
	if (GRAPHICS::_0xEEF83A759AE06A27(uLocal_15))
	{
		GRAPHICS::_0xEDA5CBECF56E1386(uLocal_15);
	}
	GRAPHICS::_0x71845905BCCDE781(uLocal_14);
	GRAPHICS::_0x71845905BCCDE781(uLocal_15);
	func_15(8);
	func_15(64);
	func_15(2048);
	func_16(64);
	func_16(1024);
	func_16(256);
	func_88(&uLocal_16);
	func_93(0);
	func_1(0);
	func_163();
	if (func_164(32, 255))
	{
		if (func_98())
		{
			func_99(4);
		}
		func_84(0);
	}
	NETWORK::NETWORK_CLEAR_CLOCK_TIME_OVERRIDE();
	MISC::_0xCE7690C0A0D1C36D(0);
	NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(false);
	STREAMING::SET_GAME_PAUSES_FOR_STREAMING(false);
	GRAPHICS::_0xFF8018C778349234(1);
	AUDIO::CANCEL_MUSIC_EVENT(&(Global_1048684->f_460));
	func_16(128);
	func_51(0, 1);
	GRAPHICS::_0x38D9D50F2085E9B3(uLocal_14);
	GRAPHICS::_0x38D9D50F2085E9B3(uLocal_15);
	if (!&Global_1049233)
	{
		MISC::_0x0E71C80FA4EC8147("FOG", true);
		MISC::_0x0E71C80FA4EC8147("MISTY", true);
		MISC::_0x0E71C80FA4EC8147("SHOWER", true);
		MISC::_0x0E71C80FA4EC8147("THUNDERSTORM", true);
	}
	func_108(0);
	iVar36 = 0;
	iVar36 = 0;
	while (iVar36 <= 3)
	{
		func_165((*Global_1049246)[iVar36 /*2*/]);
		iVar36++;
	}
	iVar36 = 0;
	while (iVar36 <= 3)
	{
		func_165((*Global_1049255)[iVar36 /*2*/]);
		iVar36++;
	}
}

void func_60()
{
	func_166(&Local_32, 1);
	func_167(&(Local_32.f_162));
	func_168();
}

void func_61()
{
}

void func_62()
{
}

void func_63()
{
	bool bVar0;
	int iVar1;
	var uVar2;

	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		STREAMING::_0x5A8B01199C3E79C3();
	}
	bVar0 = true;
	iVar1 = 0;
	func_92(&uVar2, 0, 0);
	while (!SCRIPTS::_0x9E4EF615E307FBBE() && bVar0)
	{
		bVar0 = false;
		if (STREAMING::_IS_IMAP_ACTIVE(iLocal_243))
		{
			func_169(iLocal_243);
			bVar0 = true;
		}
		if (STREAMING::_IS_IMAP_ACTIVE(iLocal_244))
		{
			func_169(iLocal_244);
			bVar0 = true;
		}
		if (STREAMING::_IS_IMAP_ACTIVE(iLocal_245))
		{
			func_169(iLocal_245);
			bVar0 = true;
		}
		if (STREAMING::_IS_IMAP_ACTIVE(iLocal_246))
		{
			func_169(iLocal_246);
			bVar0 = true;
		}
		iVar1++;
		if (func_87(&uVar2, 0, 0) > 2000 || iVar1 > 100)
		{
			bVar0 = false;
		}
		BUILTIN::WAIT(0);
	}
	STREAMING::SET_MAPDATACULLBOX_ENABLED(&cLocal_256, false);
	func_170();
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	STREAMING::_0xF01D21DF39554115(1);
	func_166(&Local_32, 0);
	func_167(&(Local_32.f_162));
	func_168();
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uLocal_231))
	{
		func_171(&Local_32, &uLocal_231);
	}
}

void func_64()
{
	if (MISC::IS_BIT_SET(iLocal_396, 1))
	{
		while (SCRIPTS::IS_THREAD_ACTIVE(&Global_1051088, false))
		{
			NETWORK::_0x236905C700FDB54D();
			BUILTIN::WAIT(0);
		}
	}
	else if (!MISC::IS_BIT_SET(iLocal_396, 2))
	{
	}
}

void func_65()
{
	Global_1912978 = 0;
}

void func_66(bool bParam0)
{
	if (bParam0)
	{
		Global_1949759->f_1381 = (Global_1949759->f_1381 - Global_1949759->f_1381 & 2);
	}
	else
	{
		Global_1949759->f_1381 |= 2;
	}
	func_172(bParam0);
}

int func_67(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_173(iParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

void func_68(int iParam0)
{
	Global_262152 = iParam0;
}

void func_69(int iParam0)
{
	Global_1048684->f_459 = iParam0;
}

void func_70()
{
	var uVar0;

	func_174(&uVar0, 1);
}

void func_71(bool bParam0)
{
	if (!&Global_2883584)
	{
		if (bParam0)
		{
			func_46(4);
		}
		else
		{
			func_16(4);
		}
	}
}

void func_72(bool bParam0)
{
	if (bParam0)
	{
		func_46(16);
	}
	else
	{
		func_16(16);
	}
}

bool func_73()
{
	return &Global_1048583;
}

void func_74(bool bParam0)
{
	struct<2> Var0;
	int iVar2;

	if (!&Global_1048583)
	{
		if (bParam0)
		{
			Global_1048583 = 1;
		}
	}
	else if (!bParam0)
	{
		Var0 = -1;
		Global_1048583 = 0;
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			*((*Global_1049246)[iVar2 /*2*/]) = { Var0 };
			*((*Global_1049255)[iVar2 /*2*/]) = { Var0 };
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 <= 0)
		{
			*((*Global_1049264)[iVar2 /*2*/]) = { Var0 };
			iVar2++;
		}
	}
}

bool func_75(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_76(char[4] cParam0, int iParam1)
{
	if (!HUD::_TEXT_DATABASE_HAS_LOADED(cParam0))
	{
		HUD::_TEXT_DATABASE_REQUEST(cParam0);
	}
	else
	{
		return 1;
	}
	*iParam1++;
	if (*iParam1 > 100)
	{
		return 1;
	}
	return 0;
}

int func_77()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;

	if (MISC::IS_BIT_SET(iLocal_396, 9))
	{
		return 1;
	}
	if (Global_1048684->f_377 == 27)
	{
		return 0;
	}
	func_175(0, 0, 0, 0);
	switch (Global_1048684->f_377)
	{
		case 0:
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@1v7";
			func_175(7, 2, 0, 0);
			break;
		case 23:
			MISC::SET_BIT(&iLocal_398, 10);
			MISC::SET_BIT(&iLocal_395, 4);
			MISC::SET_BIT(&iLocal_398, 12);
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@Predator_Win_V1";
			break;
		case 24:
			MISC::SET_BIT(&iLocal_398, 10);
			MISC::SET_BIT(&iLocal_395, 4);
			MISC::SET_BIT(&iLocal_398, 12);
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@Predator_Win_V2";
			break;
		case 25:
			MISC::SET_BIT(&iLocal_398, 10);
			MISC::SET_BIT(&iLocal_395, 4);
			MISC::SET_BIT(&iLocal_398, 12);
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@Predator_Win_V3";
			break;
		case 26:
			MISC::SET_BIT(&iLocal_398, 10);
			MISC::SET_BIT(&iLocal_395, 4);
			MISC::SET_BIT(&iLocal_398, 3);
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@Hunters_Win_V1";
			break;
		case 21:
			MISC::SET_BIT(&iLocal_398, 10);
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@Protector_Win_V1";
			func_175(0, 0, 0, 8);
			break;
		case 22:
			MISC::SET_BIT(&iLocal_398, 10);
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@@Protector_FailAlive_V1";
			func_175(0, 0, 0, 8);
			break;
		case 1:
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@4v4_v1";
			func_175(4, 2, 0, 0);
			func_176(2);
			break;
		case 2:
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@4v4_v2";
			func_175(4, 2, 0, 0);
			func_176(0);
			break;
		case 3:
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@4v4_v3";
			func_175(5, 0, 0, 0);
			break;
		case 4:
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@4v4_v4";
			MISC::SET_BIT(&iLocal_398, 7);
			MISC::SET_BIT(&iLocal_398, 5);
			func_175(4, 0, 0, 0);
			break;
		case 5:
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@7v1";
			func_175(1, 0, 0, 0);
			func_176(2);
			func_176(3);
			break;
		case 6:
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@8v8_v2";
			MISC::SET_BIT(&iLocal_398, 5);
			func_175(11, 0, 4, 0);
			break;
		case 7:
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@8v8_v1";
			func_175(8, 0, 0, 0);
			func_176(6);
			func_176(7);
			MISC::SET_BIT(&iLocal_398, 8);
			break;
		case 9:
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@8v8_v3";
			func_175(8, 4, 0, 0);
			func_176(6);
			func_176(7);
			break;
		case 8:
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@16v16_v1";
			func_175(15, 0, 16, 0);
			func_176(2);
			func_176(3);
			MISC::SET_BIT(&iLocal_398, 7);
			MISC::SET_BIT(&iLocal_398, 5);
			break;
		case 13:
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@GUNS_IN_THE_AIR";
			func_175(4, 2, 0, 0);
			func_177(5);
			func_177(7);
			MISC::SET_BIT(&iLocal_398, 11);
			break;
		case 12:
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@16v16_TOMBSTONE";
			func_175(1, 0, 0, 0);
			func_176(2);
			func_176(14);
			func_178(6);
			func_178(7);
			MISC::SET_BIT(&iLocal_398, 10);
			MISC::SET_BIT(&iLocal_398, 11);
			StringConCat(&cLocal_248, "tombstone_", 64);
			break;
		case 14:
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@WAGON";
			func_175(4, 0, 0, 0);
			MISC::SET_BIT(&iLocal_398, 9);
			MISC::SET_BIT(&iLocal_398, 7);
			MISC::SET_BIT(&iLocal_398, 5);
			MISC::SET_BIT(&iLocal_398, 10);
			MISC::SET_BIT(&iLocal_398, 11);
			StringConCat(&cLocal_248, "wagon_", 64);
			break;
		case 15:
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@HORSE_RACE@HORSE_RACE_v1";
			MISC::SET_BIT(&iLocal_398, 6);
			break;
		case 16:
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@HORSE_RACE@HORSE_RACE_v2";
			MISC::SET_BIT(&iLocal_398, 6);
			break;
		case 17:
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@HORSE_RACE@HORSE_RACE_v3";
			MISC::SET_BIT(&iLocal_398, 6);
			break;
		case 18:
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@HORSE_RACE@HORSE_RACE_v4";
			MISC::SET_BIT(&iLocal_398, 6);
			break;
		case 19:
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@HORSE_RACE@HORSE_RACE_v5";
			MISC::SET_BIT(&iLocal_398, 6);
			break;
		case 20:
			sLocal_233 = "SCRIPT@MP@ENDFLOW@ENDCELEBRATION@HORSE_RACE@HORSE_RACE_v6";
			MISC::SET_BIT(&iLocal_398, 6);
			break;
	}
	if (MISC::IS_BIT_SET(iLocal_398, 6))
	{
		MISC::SET_BIT(&iLocal_398, 4);
	}
	func_179();
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if (MISC::IS_BIT_SET(iLocal_398, 10))
	{
		if (iVar0 >= 22 || iVar0 <= 5)
		{
			MISC::SET_BIT(&iLocal_396, 31);
			iLocal_278 = 0;
		}
		else if ((iVar0 >= 5 && iVar0 <= 8) || (iVar0 >= 17 && iVar0 <= 22))
		{
			MISC::SET_BIT(&iLocal_396, 30);
			if (MISC::IS_BIT_SET(iLocal_398, 12))
			{
				iLocal_278 = 7;
			}
			else
			{
				iLocal_278 = 18;
			}
		}
		else
		{
			iLocal_278 = 13;
		}
	}
	else if (iVar0 >= 20 || iVar0 <= 5)
	{
		MISC::SET_BIT(&iLocal_396, 31);
		iLocal_278 = 0;
	}
	else if ((iVar0 >= 5 && iVar0 <= 8) || (iVar0 >= 17 && iVar0 <= 20))
	{
		MISC::SET_BIT(&iLocal_396, 30);
		iLocal_278 = 18;
	}
	else
	{
		iLocal_278 = 13;
	}
	iVar1 = Global_3145858->f_221;
	if (iVar1 == 0)
	{
		iVar2 = func_180(Global_3145858->f_188);
		switch (iVar2)
		{
			case 1:
			case 4:
			case 9:
			case 11:
			case 16:
				iVar1 = 1;
				break;
			case 3:
			case 12:
				iVar1 = 5;
				break;
			case 0:
			case 2:
			case 8:
			case 10:
				iVar1 = 2;
				break;
			case 5:
			case 6:
			case 7:
				iVar1 = 3;
				break;
			case 13:
			case 14:
			case 15:
				iVar1 = 4;
				break;
		}
	}
	switch (iVar1)
	{
		case 1:
			if (MISC::IS_BIT_SET(iLocal_398, 10))
			{
				iLocal_243 = 1834537343;
				iLocal_246 = 22956558;
				iLocal_247 = joaat("clouds");
				if (MISC::IS_BIT_SET(iLocal_398, 12))
				{
					if (MISC::IS_BIT_SET(iLocal_396, 30))
					{
						iLocal_247 = joaat("misty");
						func_181(-0.26f, -0.042f, 630f, 2354.531f, -2155.473f, -2101.975f);
					}
					else
					{
						iLocal_247 = joaat("fog");
						func_181(0.354f, -0.55f, 534f, 2695.09f, 1101.355f, -2409.212f);
					}
					StringCopy(&cLocal_248, "mp_winlose_predator_", 64);
					iLocal_244 = 324369003;
				}
				else if (MISC::IS_BIT_SET(iLocal_396, 31))
				{
					iLocal_247 = joaat("overcastdark");
					func_181(0.386f, -0.072f, 597f, 1831.857f, 29.148f, -1795.856f);
				}
				else if (MISC::IS_BIT_SET(iLocal_396, 30))
				{
					iLocal_278 = 17;
					if (MISC::IS_BIT_SET(iLocal_398, 9) || MISC::IS_BIT_SET(iLocal_398, 3))
					{
						func_181(-0.04f, 0.323f, 143.5f, -216.629f, 3978.264f, -3208.506f);
					}
					else
					{
						func_181(-0.007f, 0.602f, 374.75f, -35.357f, 146.108f, -3240.619f);
					}
				}
				else
				{
					func_181(0.119f, 0.471f, 374.75f, 1054.363f, 1879.716f, -1177.575f);
				}
			}
			else
			{
				iLocal_243 = -1633151965;
				iLocal_246 = 435889881;
				iLocal_244 = -1616778617;
				iLocal_245 = -1852748182;
				iLocal_247 = joaat("sunny");
			}
			StringConCat(&cLocal_248, "heartlands", 64);
			break;
		case 2:
			if (MISC::IS_BIT_SET(iLocal_398, 10))
			{
				iLocal_243 = -1645988897;
				iLocal_246 = 1614850834;
				iLocal_247 = joaat("fog");
				if (MISC::IS_BIT_SET(iLocal_398, 12))
				{
					if (MISC::IS_BIT_SET(iLocal_396, 30))
					{
						iLocal_247 = joaat("misty");
						func_181(-0.522f, 0.198f, 990.5f, 2461.041f, -2391.535f, -2293.49f);
					}
					StringCopy(&cLocal_248, "mp_winlose_predator_", 64);
					iLocal_244 = -281275366;
				}
				else if (MISC::IS_BIT_SET(iLocal_396, 30))
				{
					iLocal_278 = 19;
				}
			}
			else
			{
				iLocal_243 = 231100670;
				iLocal_246 = -2036638644;
				iLocal_244 = -209782407;
				iLocal_245 = -1068985587;
				iLocal_247 = joaat("misty");
			}
			StringConCat(&cLocal_248, "swamp", 64);
			StringConCat(&cLocal_256, "_swamp", 64);
			break;
		case 3:
			iLocal_247 = joaat("snowlight");
			if (MISC::IS_BIT_SET(iLocal_398, 10))
			{
				iLocal_243 = 505174455;
				iLocal_246 = 2135160782;
				if (MISC::IS_BIT_SET(iLocal_398, 12))
				{
					if (MISC::IS_BIT_SET(iLocal_396, 30))
					{
						iLocal_247 = joaat("misty");
						func_181(-0.522f, 0.198f, 990.5f, 2461.041f, -2391.535f, -2293.49f);
					}
					else
					{
						iLocal_247 = joaat("fog");
					}
					StringCopy(&cLocal_248, "mp_winlose_predator_", 64);
					iLocal_244 = -415953049;
				}
				else if (MISC::IS_BIT_SET(iLocal_396, 31))
				{
					iLocal_247 = joaat("snow");
				}
				else if (MISC::IS_BIT_SET(iLocal_396, 30))
				{
					if (MISC::IS_BIT_SET(iLocal_398, 9) || MISC::IS_BIT_SET(iLocal_398, 3))
					{
						iLocal_278 = 19;
						iLocal_279 = 40;
						func_181(0.021f, 0.102f, 357.2f, -2480.711f, 2086.622f, -2668.159f);
					}
					else
					{
						iLocal_278 = 20;
						func_181(0.179f, 0.701f, 610.75f, -2571.701f, 2238.057f, -2835.739f);
					}
				}
			}
			else
			{
				iLocal_243 = -1793687930;
				iLocal_246 = 908140270;
				iLocal_244 = 1417440092;
				iLocal_245 = 649433039;
			}
			StringConCat(&cLocal_248, "snow", 64);
			StringConCat(&cLocal_256, "_snow", 64);
			break;
		case 4:
			iLocal_247 = joaat("highpressure");
			if (MISC::IS_BIT_SET(iLocal_398, 10))
			{
				if (MISC::IS_BIT_SET(iLocal_398, 12))
				{
					if (MISC::IS_BIT_SET(iLocal_396, 30))
					{
						iLocal_247 = joaat("misty");
						func_181(-0.522f, 0.198f, 990.5f, 2461.041f, -2391.535f, -2293.49f);
					}
					else
					{
						iLocal_247 = joaat("fog");
						func_181(0.011f, -0.669f, -109.5f, 3843.674f, 407.221f, -81.17f);
					}
					StringCopy(&cLocal_248, "mp_winlose_predator_", 64);
					iLocal_244 = 948536844;
				}
				else if (MISC::IS_BIT_SET(iLocal_396, 30))
				{
					iLocal_247 = joaat("sunny");
					if (MISC::IS_BIT_SET(iLocal_398, 9) || MISC::IS_BIT_SET(iLocal_398, 3))
					{
						iLocal_278 = 20;
					}
					else
					{
						iLocal_278 = 18;
					}
				}
				iLocal_243 = -381473693;
				iLocal_246 = 1980374609;
			}
			else
			{
				iLocal_243 = 1234767744;
				iLocal_246 = 2077558044;
				iLocal_244 = -1336911409;
				iLocal_245 = -1029570958;
			}
			StringConCat(&cLocal_248, "desert", 64);
			StringConCat(&cLocal_256, "_desert", 64);
			break;
		case 5:
			if (MISC::IS_BIT_SET(iLocal_398, 10))
			{
				iLocal_247 = joaat("overcastdark");
				iLocal_243 = 1755785548;
				iLocal_246 = 1481756818;
				if (MISC::IS_BIT_SET(iLocal_398, 12))
				{
					if (MISC::IS_BIT_SET(iLocal_396, 30))
					{
						iLocal_247 = joaat("misty");
						func_181(0.839f, 0.768f, 577f, 2412.601f, -2271.631f, -2202.794f);
					}
					else
					{
						iLocal_247 = joaat("fog");
					}
					StringCopy(&cLocal_248, "mp_winlose_predator_", 64);
					iLocal_244 = -1344285417;
				}
				else if (MISC::IS_BIT_SET(iLocal_398, 9) || MISC::IS_BIT_SET(iLocal_398, 3))
				{
					if (MISC::IS_BIT_SET(iLocal_396, 31))
					{
						iLocal_247 = joaat("clouds");
						func_181(0.978f, -0.448f, 329f, 3233.729f, 262.921f, -2070.11f);
					}
					else if (MISC::IS_BIT_SET(iLocal_396, 30))
					{
						iLocal_278 = 19;
						func_181(0.845f, 0.141f, 1000f, -1787.396f, -454.858f, -401.799f);
					}
					else
					{
						func_181(0.738f, 0.189f, 803.75f, 1344.11f, 2463.37f, -1726.229f);
					}
				}
				else if (MISC::IS_BIT_SET(iLocal_396, 30))
				{
					iLocal_278 = 19;
					func_181(0.845f, 0.141f, 1000f, -1787.396f, -454.858f, -401.799f);
				}
				else
				{
					iLocal_247 = joaat("clouds");
					func_181(0.418f, 0.191f, 698.75f, 487.565f, 1166.487f, -492.181f);
				}
			}
			else
			{
				iLocal_247 = joaat("overcastdark");
				func_181(0.648f, -0.814f, 481.25f, -2237.9f, -1281.34f, -3051.36f);
				iLocal_243 = 56660208;
				iLocal_246 = 205032683;
				iLocal_244 = 686788855;
				iLocal_245 = -1228362565;
			}
			StringConCat(&cLocal_248, "forest", 64);
			StringConCat(&cLocal_256, "_forest", 64);
			break;
	}
	if (iVar1 != 0)
	{
		if (MISC::IS_BIT_SET(iLocal_396, 31))
		{
			StringConCat(&cLocal_248, "_night", 64);
		}
		else if (MISC::IS_BIT_SET(iLocal_396, 30))
		{
			StringConCat(&cLocal_248, "_dusk", 64);
		}
		else
		{
			StringConCat(&cLocal_248, "_day", 64);
		}
	}
	if (MISC::IS_BIT_SET(iLocal_398, 10))
	{
		vLocal_234 = { -569.954f, -3648.908f, 81.884f };
	}
	vLocal_234 = { vLocal_234 + func_182() };
	vLocal_240 = { vLocal_240 + func_182() };
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_232, vLocal_234, vVar3, 0);
	STREAMING::_0xF01D21DF39554115(0);
	STREAMING::SET_MAPDATACULLBOX_ENABLED(&cLocal_256, true);
	STREAMING::SET_GAME_PAUSES_FOR_STREAMING(true);
	STREAMING::_0x19ABCC581D28E6F9(1);
	MISC::SET_BIT(&iLocal_396, 9);
	return 1;
}

int func_78()
{
	int iVar0;
	int iVar1;

	if (Global_1048684->f_377 == 27)
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(iLocal_398, 5))
	{
		iLocal_264 = -1180707366;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_232, 1, 0) && !ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(iLocal_232, 0))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(iLocal_232, 1))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_232);
		}
		return 0;
	}
	else
	{
		if (MISC::IS_BIT_SET(iLocal_398, 11))
		{
			iVar1 = 0;
			while (iVar1 <= (Global_1048684->f_376 - 1))
			{
				if ((Global_1048684->f_22[iVar1 /*10*/])->f_9)
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
		func_183(Global_1048684->f_455, iVar0);
	}
	if (!MISC::IS_BIT_SET(iLocal_398, 8))
	{
		func_169(iLocal_245);
	}
	return 1;
}

int func_79(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = 1;
	if (!func_184(iParam0))
	{
		iVar0 = 0;
	}
	if (!func_184(iParam1))
	{
		iVar0 = 0;
	}
	if (!func_184(iParam2))
	{
		iVar0 = 0;
	}
	if (MISC::IS_BIT_SET(iLocal_398, 8))
	{
		if (!func_184(iParam3))
		{
			iVar0 = 0;
		}
	}
	if (!func_86(&uLocal_365))
	{
		func_92(&uLocal_365, 0, 0);
	}
	else if (func_87(&uLocal_365, 0, 0) > 30000)
	{
		return 1;
	}
	return iVar0;
}

int func_80()
{
	STREAMING::REQUEST_MODEL(iLocal_264, false);
	if (MISC::IS_BIT_SET(iLocal_398, 7))
	{
		STREAMING::REQUEST_MODEL(iLocal_265, false);
	}
	STREAMING::REQUEST_MODEL(joaat("p_chair09x"), false);
	STREAMING::REQUEST_MODEL(joaat("p_crate01x"), false);
	STREAMING::REQUEST_MODEL(-728725588, false);
	STREAMING::REQUEST_MODEL(joaat("p_crate02x"), false);
	STREAMING::REQUEST_MODEL(joaat("p_crate05x"), false);
	if (((((!STREAMING::HAS_MODEL_LOADED(iLocal_264) && !STREAMING::HAS_MODEL_LOADED(joaat("p_chair09x"))) && !STREAMING::HAS_MODEL_LOADED(joaat("p_crate01x"))) && !STREAMING::HAS_MODEL_LOADED(-728725588)) && !STREAMING::HAS_MODEL_LOADED(joaat("p_crate02x"))) && !STREAMING::HAS_MODEL_LOADED(joaat("p_crate05x")))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(iLocal_398, 7))
	{
		if (!STREAMING::HAS_MODEL_LOADED(iLocal_265))
		{
			return 0;
		}
	}
	return 1;
}

int func_81()
{
	return 1;
}

int func_82(var uParam0)
{
	if (!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(*uParam0))
	{
		return 0;
	}
	UISTATEMACHINE::_UIFLOWBLOCK_ENTER(*uParam0, uParam0->f_1);
	if (!UISTATEMACHINE::_UISTATEMACHINE_EXISTS(*uParam0))
	{
		UISTATEMACHINE::_UISTATEMACHINE_CREATE(*uParam0, *uParam0);
	}
	return 1;
}

int func_83()
{
	if (((AUDIO::_0xD9130842D7226045("RDROADV_Winners_Screen_Sounds", 0) && AUDIO::_0xD9130842D7226045("RDRO_Countdown_Clockwork_Sounds", 0)) && AUDIO::_0xD9130842D7226045("RDRO_Winners_Screen_Sounds", 0)) && AUDIO::_0xD9130842D7226045("RDRO_Camera_Flash_Pulse", 0))
	{
		if (AUDIO::PREPARE_MUSIC_EVENT(&(Global_1048684->f_460)))
		{
			if (!GRAPHICS::_0x59EA80079B86D8C7(uLocal_14) && !GRAPHICS::_0x59EA80079B86D8C7(uLocal_15))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_84(bool bParam0)
{
	if (!bParam0)
	{
		func_128(32);
	}
	else
	{
		func_129(32);
	}
	CAM::_0x63E5841A9264D016(bParam0);
}

void func_85()
{
	func_185(0);
}

bool func_86(var uParam0)
{
	return uParam0->f_1;
}

int func_87(var uParam0, bool bParam1, bool bParam2)
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

void func_88(var uParam0)
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

void func_89(var uParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_23(16);
	switch (uParam0->f_198)
	{
		case 0:
			func_186(1);
			func_187(&(uParam0->f_198), 1);
			break;
		case 1:
			AUDIO::_0xD9130842D7226045("MP_Leaderboard_Sounds", 1);
			func_187(&(uParam0->f_198), 2);
			break;
		case 2:
			iVar1 = UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(joaat("leaderboards"), func_188(bParam1));
			if (iVar1 == 0)
			{
				func_187(&(uParam0->f_198), 3);
			}
			else if (UIAPPS::_IS_APP_RUNNING(joaat("leaderboards")))
			{
				func_187(&(uParam0->f_198), 3);
			}
			break;
		case 3:
			if (UIAPPS::_IS_APP_RUNNING(joaat("leaderboards")))
			{
				if (!bVar0)
				{
					AUDIO::PLAY_SOUND_FRONTEND("Leaderboard_Show", "MP_Leaderboard_Sounds", true, 0);
				}
				UIAPPS::_REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("leaderboards"), func_189());
				func_187(&(uParam0->f_198), 4);
			}
			else if (func_190())
			{
				func_187(&(uParam0->f_198), 2);
			}
			break;
		case 4:
			if (MISC::IS_BIT_SET(uParam0->f_158, 13))
			{
				if (UIAPPS::_IS_APP_RUNNING(joaat("leaderboards")))
				{
					if (!bVar0)
					{
						AUDIO::PLAY_SOUND_FRONTEND("Leaderboard_Hide", "MP_Leaderboard_Sounds", true, 0);
					}
					UIAPPS::_CLOSE_APP_BY_HASH(joaat("leaderboards"));
					func_187(&(uParam0->f_198), 5);
				}
			}
			break;
		case 5:
			if (bParam1)
			{
				MISC::CLEAR_BIT(&(uParam0->f_158), 13);
				func_187(&(uParam0->f_198), 1);
			}
			else
			{
				func_187(&(uParam0->f_198), 6);
			}
			break;
		case 6:
			func_166(uParam0, bParam1);
			break;
	}
}

void func_90(var uParam0)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PostMatchAndLeaderboard");
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam0, "Title");
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(*uParam0, "LeaderboardList");
	uParam0->f_142 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(*uParam0, "LeaderboardList");
}

void func_91(int iParam0)
{
	iLocal_388 = iParam0;
}

void func_92(var uParam0, bool bParam1, bool bParam2)
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

void func_93(int iParam0)
{
	if (&Global_1048586 != iParam0)
	{
		Global_1048586 = iParam0;
	}
}

int func_94()
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return Global_1070356->f_5;
}

bool func_95(int iParam0)
{
	return func_164(1, iParam0);
}

bool func_96()
{
	return (Global_1048576 || Global_2883584) // PointerArith;
}

void func_97(int iParam0)
{
	int iVar0;

	iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	if (SCRIPTS::_DOES_THREAD_EXIST(Global_1939067->f_102.f_1) && Global_1939067->f_102.f_1 != iVar0)
	{
		return;
	}
	Global_1939067->f_102.f_1 = iVar0;
	Global_1939067->f_102 = iParam0;
}

bool func_98()
{
	return func_191(4);
}

void func_99(int iParam0)
{
	Global_1099294->f_197.f_13 = iParam0;
}

void func_100()
{
	bool bVar0;

	switch (iLocal_400)
	{
		case 0:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1070356->f_27136.f_19.f_4)))
			{
				Global_1048582 = 1;
				iLocal_401 = ANIMSCENE::_CREATE_ANIM_SCENE(&(Global_1070356->f_27136.f_19.f_4), 16512, 0, false, true);
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_401))
				{
					StringCopy(&(Global_1070356->f_27136.f_19.f_4), "", 128);
					ANIMSCENE::LOAD_ANIM_SCENE(iLocal_401);
					func_192(1);
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
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1070356->f_27136.f_19.f_20)))
			{
				if (!AUDIO::PREPARE_MUSIC_EVENT(&(Global_1070356->f_27136.f_19.f_20)))
				{
					bVar0 = false;
				}
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_401, 1, 0) && bVar0)
			{
				func_193(0);
				CAM::DO_SCREEN_FADE_IN(0);
				ANIMSCENE::START_ANIM_SCENE(iLocal_401);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1070356->f_27136.f_19.f_20)))
				{
					AUDIO::TRIGGER_MUSIC_EVENT(&(Global_1070356->f_27136.f_19.f_20));
					StringCopy(&(Global_1070356->f_27136.f_19.f_20), "", 128);
				}
				func_46(8192);
				func_192(2);
			}
			break;
		case 2:
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_401, 0))
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				func_192(3);
			}
			break;
		case 3:
			func_194(0, 0);
			ANIMSCENE::RESET_ANIM_SCENE(iLocal_401, 0);
			func_192(0);
			func_16(4096);
			break;
	}
}

void func_101()
{
	if (fLocal_271 != 0f || fLocal_272 != 0f)
	{
		GRAPHICS::_0xB8C984C0D47F4F07(fLocal_271, fLocal_272, iLocal_273);
	}
	if (fLocal_274 != 0f)
	{
		GRAPHICS::_0xC332C91388F5580B(fLocal_274);
	}
	if ((fLocal_275 != 0f || fLocal_276 != 0f) || fLocal_277 != 0f)
	{
		GRAPHICS::_0xFE7966DF01452F32(fLocal_275, fLocal_276, fLocal_277);
	}
}

void func_102()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	Local_32.f_159 = &Global_1051067;
	Local_32.f_160 = &Global_1051068;
	iVar0 = Global_1050004->f_14;
	iLocal_282 = Global_1048684->f_20;
	bVar1 = iVar0 > 1;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Global_1050004->f_27[0 /*18*/]))
	{
		func_195();
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			(Local_286[iVar2 /*18*/])->f_16 = (Global_1050004->f_27[iVar2 /*18*/])->f_16;
			*(Local_286[iVar2 /*18*/]) = { *(Global_1050004->f_27[iVar2 /*18*/]) };
			(Local_286[iVar2 /*18*/])->f_8 = { (Global_1050004->f_27[iVar2 /*18*/])->f_8 };
			(Local_286[iVar2 /*18*/])->f_17 = (Global_1050004->f_27[iVar2 /*18*/])->f_17;
			iVar2++;
		}
	}
	Local_32.f_162 = { *Global_1050842 };
	func_90(&Local_32);
	MISC::SET_BIT(&(Local_32.f_159), 11);
	if (MISC::IS_BIT_SET(Local_32.f_159, 8))
	{
		MISC::CLEAR_BIT(&(Local_32.f_159), 8);
	}
	if (MISC::IS_BIT_SET(Local_32.f_159, 20))
	{
		MISC::CLEAR_BIT(&(Local_32.f_159), 20);
	}
	func_196(&Local_32, &(Global_1050004->f_101), Global_1050919, 1, 1, bVar1, iLocal_282, iVar0, 0, 0, -1);
	func_197(&Local_32, Global_1050911);
}

void func_103()
{
	var uVar0;
	char* sVar1;
	int iVar2;

	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PostMatchAndLeaderboard");
	iVar2 = Global_1048684->f_17;
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
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar0, "winnerNameRawText", &(Global_1048684->f_9));
	DATABINDING::_DATABINDING_ADD_DATA_INT(uVar0, "winnerNameColor", iVar2);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar0, "mvpLabelRawText", HUD::_GET_LABEL_TEXT("UGC_END_MVP"));
	DATABINDING::_DATABINDING_ADD_DATA_INT(uVar0, "mvpLabelColor", (Local_286[0 /*18*/])->f_17);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar0, "mvpNameRawText", Local_286[0 /*18*/]);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uVar0, "mvpNameColor", (Local_286[0 /*18*/])->f_17);
}

void func_104(bool bParam0)
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

void func_105(bool bParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;

	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PostMatchAndLeaderboard");
	func_198(bParam0);
	uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar0, "revealScoreboardButton");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar1, "visible", bParam0);
	uVar2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar0, "acceptButton");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar2, "visible", bParam0);
}

void func_106(int iParam0)
{
	iLocal_390 = iParam0;
}

void func_107()
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];

	iVar0 = 0;
	while (iVar0 <= (Global_1048684->f_376 - 1))
	{
		if ((Global_1048684->f_22[iVar0 /*10*/])->f_9)
		{
			iVar1++;
			StringCopy(&cVar3, "win_", 16);
			if (iVar1 < 10)
			{
				StringConCat(&cVar3, "0", 16);
			}
			StringIntConCat(&cVar3, iVar1, 16);
			if (!PED::IS_PED_MALE(&(uLocal_405[iVar0])))
			{
				StringConCat(&cVar3, "F", 16);
			}
			ENTITY::SET_ENTITY_COLLISION(&(uLocal_405[iVar0]), false, false);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_232, &cVar3, &(uLocal_405[iVar0]), 0);
		}
		else if (!MISC::IS_BIT_SET(iLocal_398, 4))
		{
			iVar2++;
			StringCopy(&cVar3, "DEAD_0", 16);
			StringIntConCat(&cVar3, iVar2, 16);
			if (!PED::IS_PED_MALE(&(uLocal_405[iVar0])))
			{
				StringConCat(&cVar3, "F", 16);
			}
			ENTITY::SET_ENTITY_COLLISION(&(uLocal_405[iVar0]), false, false);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_232, &cVar3, &(uLocal_405[iVar0]), 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_438[iVar0])))
		{
			StringCopy(&cVar3, "horse_0", 16);
			StringIntConCat(&cVar3, iVar0 + 1, 16);
			ENTITY::SET_ENTITY_COLLISION(&(uLocal_438[iVar0]), false, false);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_232, &cVar3, &(uLocal_438[iVar0]), 0);
		}
		iVar0++;
	}
}

void func_108(int iParam0)
{
	if (&Global_1049234 != iParam0)
	{
		Global_1049234 = iParam0;
	}
}

void func_109()
{
	int iVar0;
	char cVar1[16];

	if (!MISC::IS_BIT_SET(iLocal_399, 5))
	{
		if (MISC::IS_BIT_SET(iLocal_398, 9))
		{
			STREAMING::REQUEST_MODEL(joaat("cart06"), false);
			if (STREAMING::HAS_MODEL_LOADED(joaat("cart06")))
			{
				iLocal_546 = VEHICLE::CREATE_VEHICLE(joaat("cart06"), vLocal_237, 0f, false, true, false, false);
				ENTITY::SET_ENTITY_COLLISION(iLocal_546, false, false);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_546, true);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_232, "cart06", iLocal_546, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cart06"));
				MISC::SET_BIT(&iLocal_399, 5);
			}
			return;
		}
		else
		{
			MISC::SET_BIT(&iLocal_399, 5);
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_399, 1))
	{
		STREAMING::REQUEST_MODEL(iLocal_264, false);
		if (MISC::IS_BIT_SET(iLocal_398, 7))
		{
			STREAMING::REQUEST_MODEL(iLocal_265, false);
			if (!STREAMING::HAS_MODEL_LOADED(iLocal_265))
			{
				return;
			}
		}
		if (!Global_1048684->f_455)
		{
			STREAMING::REQUEST_MODEL(iLocal_266, false);
			if (!STREAMING::HAS_MODEL_LOADED(iLocal_266))
			{
				return;
			}
		}
		if (STREAMING::HAS_MODEL_LOADED(iLocal_264))
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_267 - 1))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(&(iLocal_471[iVar0])))
				{
					if (iVar0 == 0)
					{
						if (!Global_1048684->f_455)
						{
							iLocal_471[iVar0] = OBJECT::CREATE_OBJECT(iLocal_266, vLocal_237, false, true, false, false, true);
						}
						else if (MISC::IS_BIT_SET(iLocal_398, 7))
						{
							iLocal_471[iVar0] = OBJECT::CREATE_OBJECT(iLocal_265, vLocal_237, false, true, false, false, true);
						}
						else
						{
							iLocal_471[iVar0] = OBJECT::CREATE_OBJECT(iLocal_264, vLocal_237, false, true, false, false, true);
						}
					}
					else
					{
						iLocal_471[iVar0] = OBJECT::CREATE_OBJECT(iLocal_264, vLocal_237, false, true, false, false, true);
					}
					StringCopy(&cVar1, "COFFIN_0", 16);
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					func_199(iLocal_471[iVar0], cVar1);
				}
				iVar0++;
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_264);
			if (MISC::IS_BIT_SET(iLocal_398, 7))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_265);
			}
			MISC::SET_BIT(&iLocal_399, 1);
		}
		return;
	}
	if (!MISC::IS_BIT_SET(iLocal_399, 4))
	{
		iVar0 = 0;
		while (iVar0 <= 15)
		{
			if (func_200(iVar0))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(&(uLocal_488[iVar0])) && MISC::IS_BIT_SET(iLocal_392, iVar0))
				{
					uLocal_488[iVar0] = WEAPON::_CREATE_WEAPON_OBJECT(joaat("weapon_repeater_carbine"), 1, vLocal_237, 1, 1065353216);
					StringCopy(&cVar1, "RIFLE_", 16);
					if (iVar0 < 10)
					{
						StringConCat(&cVar1, "0", 16);
					}
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					func_199(uLocal_488[iVar0], cVar1);
				}
			}
			iVar0++;
		}
		MISC::SET_BIT(&iLocal_399, 4);
		return;
	}
	if (!MISC::IS_BIT_SET(iLocal_399, 3))
	{
		if (MISC::IS_BIT_SET(iLocal_398, 6))
		{
			STREAMING::REQUEST_MODEL(-728725588, false);
			STREAMING::REQUEST_MODEL(joaat("p_crate02x"), false);
			STREAMING::REQUEST_MODEL(joaat("p_crate05x"), false);
			if ((STREAMING::HAS_MODEL_LOADED(-728725588) && STREAMING::HAS_MODEL_LOADED(joaat("p_crate02x"))) && STREAMING::HAS_MODEL_LOADED(joaat("p_crate05x")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(&(iLocal_540[0])))
				{
					iLocal_540[0] = OBJECT::CREATE_OBJECT(-728725588, vLocal_237, false, true, false, false, true);
					StringCopy(&cVar1, "CRATE_01", 16);
					func_199(iLocal_540[0], cVar1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(&(iLocal_540[1])))
				{
					iLocal_540[1] = OBJECT::CREATE_OBJECT(joaat("p_crate02x"), vLocal_237, false, true, false, false, true);
					StringCopy(&cVar1, "CRATE_02", 16);
					func_199(iLocal_540[1], cVar1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(&(iLocal_540[2])))
				{
					iLocal_540[2] = OBJECT::CREATE_OBJECT(joaat("p_crate05x"), vLocal_237, false, true, false, false, true);
					StringCopy(&cVar1, "CRATE_03", 16);
					func_199(iLocal_540[2], cVar1);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-728725588);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_crate02x"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_crate05x"));
				MISC::SET_BIT(&iLocal_399, 3);
				return;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(-2131982726, false);
			if (STREAMING::HAS_MODEL_LOADED(-2131982726))
			{
				iVar0 = 0;
				while (iVar0 <= (iLocal_268 - 1))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(&(iLocal_540[iVar0])))
					{
						iLocal_540[iVar0] = OBJECT::CREATE_OBJECT(-2131982726, vLocal_237, false, true, false, false, true);
						StringCopy(&cVar1, "CRATE_0", 16);
						StringIntConCat(&cVar1, iVar0 + 1, 16);
						func_199(iLocal_540[iVar0], cVar1);
					}
					iVar0++;
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-2131982726);
				MISC::SET_BIT(&iLocal_399, 3);
				return;
			}
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_399, 2))
	{
		STREAMING::REQUEST_MODEL(joaat("p_chair09x"), false);
		if (STREAMING::HAS_MODEL_LOADED(joaat("p_chair09x")))
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_269 - 1))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(&(iLocal_523[iVar0])))
				{
					iLocal_523[iVar0] = OBJECT::CREATE_OBJECT(joaat("p_chair09x"), vLocal_237, false, true, false, false, true);
					StringCopy(&cVar1, "CHAIR_", 16);
					if (iVar0 < 10)
					{
						StringConCat(&cVar1, "0", 16);
					}
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					func_199(iLocal_523[iVar0], cVar1);
				}
				iVar0++;
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_chair09x"));
			MISC::SET_BIT(&iLocal_399, 2);
			return;
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_399, 6))
	{
		STREAMING::REQUEST_MODEL(joaat("p_bottlejd01x"), false);
		if (STREAMING::HAS_MODEL_LOADED(joaat("p_bottlejd01x")))
		{
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (func_200(iVar0))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(&(iLocal_505[iVar0])) && MISC::IS_BIT_SET(iLocal_393, iVar0))
					{
						iLocal_505[iVar0] = OBJECT::CREATE_OBJECT(joaat("p_bottlejd01x"), vLocal_237, false, true, false, false, true);
						StringCopy(&cVar1, "JD_BOTTLE_0", 16);
						StringIntConCat(&cVar1, iVar0 + 1, 16);
						func_199(iLocal_505[iVar0], cVar1);
					}
				}
				iVar0++;
			}
			MISC::SET_BIT(&iLocal_399, 6);
			return;
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_399, 7))
	{
		STREAMING::REQUEST_MODEL(1666862677, false);
		if (STREAMING::HAS_MODEL_LOADED(1666862677))
		{
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (func_200(iVar0))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(&(iLocal_514[iVar0])) && MISC::IS_BIT_SET(iLocal_394, iVar0))
					{
						iLocal_514[iVar0] = OBJECT::CREATE_OBJECT(1666862677, vLocal_237, false, true, false, false, true);
						StringCopy(&cVar1, "SHOVEL_0", 16);
						StringIntConCat(&cVar1, iVar0 + 1, 16);
						func_199(iLocal_514[iVar0], cVar1);
					}
				}
				iVar0++;
			}
			MISC::SET_BIT(&iLocal_399, 7);
			return;
		}
	}
}

int func_110()
{
	if (!func_86(&uLocal_369))
	{
		func_92(&uLocal_369, 0, 0);
	}
	else if (func_87(&uLocal_369, 0, 0) >= 8500)
	{
		return 1;
	}
	return 0;
}

void func_111(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_112()
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
		TASK::_0x79559BAD83CCD038(iVar1, 3, 0, 0, 0, 1090519040);
	}
	if (PED::_0xB655DB7582AEC805(iVar1))
	{
		PED::_0xF6262491C7704A63(iVar1, 0);
	}
	PLAYER::_0x64FF4BF9AF59E139(iVar0, 1);
}

void func_113()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_405[iVar0])))
		{
			ENTITY::FREEZE_ENTITY_POSITION(&(uLocal_405[iVar0]), true);
			ENTITY::SET_ENTITY_INVINCIBLE(&(uLocal_405[iVar0]), true);
			if (PED::IS_PED_DEAD_OR_DYING(&(uLocal_405[iVar0]), true))
			{
				PED::RESURRECT_PED(&(uLocal_405[iVar0]));
			}
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(&(uLocal_405[iVar0]), 0, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uLocal_405[iVar0]), true);
			PED::_0xC991EF46FE323867(&(uLocal_405[iVar0]), 1);
			PED::_0x2208438012482A1A(&(uLocal_405[iVar0]), true, true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(&(Global_1048684->f_22[iVar0 /*10*/])))
		{
			PED::DELETE_PED(Global_1048684->f_22[iVar0 /*10*/]);
		}
		iVar0++;
	}
}

void func_114(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<7> Var3[7];
	int iVar53;
	int iVar54;

	func_124();
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (((*uParam0)[iVar0 /*23*/])->f_14 == 255 || ((*uParam0)[iVar0 /*23*/])->f_14 == iLocal_402)
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(((*uParam0)[iVar0 /*23*/])->f_14))
		{
		}
		else
		{
			func_201(((*uParam0)[iVar0 /*23*/])->f_14);
		}
		iVar0++;
	}
	if (bParam1)
	{
		iVar1 = GANG::_0x901E0DC25080C8B9(iLocal_402);
		if ((GANG::_0xD6F6ACF4392187FB(iVar1) && GANG::_0x0F99F6436528A089(iVar1)) && GANG::_0x93A91A351A07360E(iVar1))
		{
			iVar53 = GANG::_0xD1BF325C8252A982(iVar1, &Var3);
			if (iVar53 > 1 && iVar53 < 7)
			{
				iVar2 = 0;
				while (iVar2 <= (iVar53 - 1))
				{
					iVar54 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Var3[iVar2 /*7*/]);
					if (iVar54 == 255 || iVar54 == iLocal_402)
					{
					}
					else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar54))
					{
					}
					else if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(Var3[iVar2 /*7*/]))
					{
					}
					else
					{
						func_201(iVar54);
					}
					iVar2++;
				}
			}
		}
	}
}

int func_115()
{
	bool bVar0;

	if (!func_86(&uLocal_371))
	{
		func_92(&uLocal_371, 0, 0);
	}
	if (func_202())
	{
		if (func_87(&uLocal_371, 0, 0) < 0 && iLocal_362 > 2000)
		{
			bVar0 = true;
		}
		else if (func_87(&uLocal_371, 0, 0) > 8500)
		{
			bVar0 = true;
		}
		else if (STREAMING::_0x0909F71B5C070797() && func_87(&uLocal_371, 0, 0) > 4500)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (iLocal_232 != -1)
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_232, 0))
				{
					ANIMSCENE::START_ANIM_SCENE(iLocal_232);
					return 0;
				}
				else
				{
					func_19(&uLocal_16, 0);
					return 1;
				}
			}
		}
		else
		{
			iLocal_362++;
		}
	}
	return 0;
}

void func_116(int iParam0)
{
	iLocal_389 = iParam0;
}

int func_117()
{
	float fVar0;

	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_232, 0))
	{
		return 0;
	}
	fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_232);
	if (fVar0 > 0.92f)
	{
		return 1;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iLocal_232) || ANIMSCENE::_0xF94692EB9DC15D74(iLocal_232, 0))
	{
		return 1;
	}
	if (func_86(&uLocal_371) && func_87(&uLocal_371, 0, 0) > 30000)
	{
		return 1;
	}
	return 0;
}

void func_118(bool bParam0)
{
	var uVar0;

	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PostMatchAndLeaderboard");
	if (bParam0 && MISC::IS_STRING_NULL_OR_EMPTY(Local_286[0 /*18*/]))
	{
		return;
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar0, "showMvpComponent", bParam0);
}

void func_119(bool bParam0)
{
	var uVar0;

	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PostMatchAndLeaderboard");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar0, "showWinnerComponent", bParam0);
}

void func_120()
{
	int iVar0;
	char* sVar1;
	struct<2> Var2;
	struct<2> Var4;

	iVar0 = PLAYER::PLAYER_ID();
	sVar1 = PLAYER::GET_PLAYER_NAME(iVar0);
	if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && !MISC::IS_STRING_NULL_OR_EMPTY(Local_286[0 /*18*/])) && MISC::ARE_STRINGS_EQUAL(Local_286[0 /*18*/], sVar1))
	{
		Var2 = { func_54(1329559622, 0) };
		STATS::_0x6A0184E904CDF25E(&Var2, 1);
		Global_1049148->f_8 = 1;
		Global_1049232 = &Global_1049232 + 1;
	}
	else
	{
		Global_1049232 = 0;
	}
	Var4 = { func_54(382097737, 701412595) };
	STATS::_0x91A4F58E01ED5E4C(&Var4, &Global_1049232);
}

void func_121(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (((*uParam1)[iVar0 /*23*/])->f_14 == 255)
		{
		}
		else if (func_203(&(((*uParam1)[iVar0 /*23*/])->f_14)))
		{
			func_204(uParam0, &(((*uParam1)[iVar0 /*23*/])->f_14), iVar0, 1);
		}
		iVar0++;
	}
}

void func_122(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (((*uParam1)[iVar0 /*23*/])->f_14 == 255)
		{
		}
		else
		{
			func_205(uParam0, uParam1, iVar0, bParam2);
		}
		iVar0++;
	}
}

int func_123()
{
	vector3 vVar0;
	int iVar4;

	iVar4 = 361663434;
	if (!func_206())
	{
		if (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar4))
		{
			if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iVar4, &vVar0))
			{
				switch (vVar0.x)
				{
					case -1203660660:
						if (vVar0.z == -871313792 && !MISC::IS_BIT_SET(iLocal_396, 3))
						{
							func_207(1, 0);
							AUDIO::PLAY_SOUND_FRONTEND("like", "RDRO_Winners_Screen_Sounds", true, 0);
						}
						else if (vVar0.z == -1691214074 && !MISC::IS_BIT_SET(iLocal_396, 3))
						{
							func_207(0, 0);
							AUDIO::PLAY_SOUND_FRONTEND("dislike", "RDRO_Winners_Screen_Sounds", true, 0);
						}
						else if (vVar0.z == -1823128591)
						{
							func_208(&uLocal_285);
						}
						else if (vVar0.z == 1535578700)
						{
							func_209();
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
		return 1;
	}
	return 0;
}

void func_124()
{
	var uVar0;

	if (SCRIPTS::_0x179A6F0EE2E79026(&(Global_1070356->f_21175.f_5)))
	{
		Global_1070356->f_21175.f_5 = uVar0;
	}
}

void func_125()
{
	int iVar0;

	iVar0 = func_211(func_210());
	if (!MISC::IS_BIT_SET(iLocal_396, 6))
	{
		if (iVar0 > 0)
		{
			MISC::SET_BIT(&iLocal_396, 6);
			func_212(&Local_32, &uLocal_231, iVar0);
		}
	}
	else if (iVar0 < 0)
	{
		func_171(&Local_32, &uLocal_231);
	}
	else
	{
		func_213(&uLocal_231, iVar0);
	}
}

void func_126()
{
	char cVar0[32];
	float fVar4;
	bool bVar5;
	float fVar6;
	char cVar7[32];
	int iVar11;
	char[] cVar12[8];

	if (!MISC::IS_BIT_SET(iLocal_397, 2))
	{
		if (func_214(&(Global_1048684->f_424)))
		{
			fVar4 = (BUILTIN::TO_FLOAT(Global_1048684->f_436) / 100f);
			StringCopy(&cVar0, func_215(fVar4, 2), 32);
			func_216(&Local_32, &cVar0);
			if (Global_1048684->f_459 != 0)
			{
				func_55(func_54(1532301684, Global_1048684->f_459), Global_1048684->f_436);
			}
			MISC::SET_BIT(&iLocal_397, 2);
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_397, 3))
	{
		bVar5 = (func_214(&(Global_1048684->f_392)) && func_214(&(Global_1048684->f_408)));
		if (bVar5)
		{
			fVar6 = (BUILTIN::TO_FLOAT((Global_1048684->f_392.f_8 + Global_1048684->f_408.f_8)) / 100f);
			StringCopy(&cVar7, func_215(fVar6, 2), 32);
			func_217(&Local_32, &cVar7);
			iVar11 = (Global_1048684->f_392.f_6 + Global_1048684->f_408.f_6);
			MISC::_INT_TO_STRING(iVar11, "%d", &cVar12);
			func_218(&Local_32, &cVar12);
			if (Global_1048684->f_459 != 0)
			{
				func_55(func_54(-1901704681, Global_1048684->f_459), (Global_1048684->f_392.f_8 + Global_1048684->f_408.f_8));
			}
			MISC::SET_BIT(&iLocal_397, 3);
		}
	}
}

void func_127(int iParam0)
{
	func_219(&(Global_1070356->f_22101.f_4), iParam0);
}

int func_128(int iParam0)
{
	if (func_220(&(Global_1099294->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_129(int iParam0)
{
	if (func_221(&(Global_1099294->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_130()
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
	if (func_222(2048))
	{
		return 1;
	}
	if (func_223(1))
	{
		return 1;
	}
	if (Global_1099294->f_26.f_14 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_131(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1099294->f_3 && iParam0) != 0;
	}
	return (((*Global_1097610)[iParam1 /*51*/])->f_3 && iParam0) != 0;
}

bool func_132(int iParam0)
{
	return (Global_1099294->f_26.f_9 && iParam0) == iParam0;
}

void func_133(int iParam0)
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
		PLAYER::SET_PLAYER_CONTROL(iVar0, 1, 0, 0);
	}
	else
	{
		PLAYER::SET_PLAYER_CONTROL(iVar0, 1, 4, 0);
	}
	ENTITY::FREEZE_ENTITY_POSITION(iVar1, false);
	if (iParam0 & 512 != 0)
	{
	}
	else
	{
		func_224();
	}
	PLAYER::SET_PLAYER_INVINCIBLE(iVar0, false);
	if (!PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
	{
		ENTITY::SET_ENTITY_COLLISION(iVar1, true, false);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar1, true, false);
	}
}

void func_134(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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
	PLAYER::SET_PLAYER_CONTROL(iVar0, 0, iVar2, 0);
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
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, 0, !bParam6);
		}
	}
}

void func_135(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
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
	iVar40 = func_225(uParam0, iParam3);
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
		if ((BUILTIN::ROUND(((*uParam0)[iVar40 /*23*/])->f_7) == 88400000 || BUILTIN::ROUND(((*uParam0)[iVar40 /*23*/])->f_7) == 72800000) || BUILTIN::ROUND(((*uParam0)[iVar40 /*23*/])->f_7) == 86400000)
		{
			StringCopy(&cVar16, MISC::_CREATE_VAR_STRING(2, "POS_OOT"), 64);
		}
		else
		{
			MISC::SET_BIT(&iVar43, 7);
			StringCopy(&cVar16, MISC::_CREATE_VAR_STRING(10, "UIC_EF_TIM", func_226(BUILTIN::ROUND(((*uParam0)[iVar40 /*23*/])->f_7), iVar43, 0)), 64);
		}
	}
	else
	{
		iVar48 = func_227((*uParam0)[iVar40 /*23*/], uParam1->f_159, uParam1->f_160);
		iVar49 = func_228((*uParam0)[iVar40 /*23*/], uParam1->f_159, uParam1->f_160);
		iVar50 = func_229((*uParam0)[iVar40 /*23*/], uParam1->f_159, uParam1->f_160);
		iVar51 = func_230((*uParam0)[iVar40 /*23*/]);
		Var52 = { func_231(iVar48, uParam1->f_159, &bVar44) };
		Var56 = { func_232(iVar49, uParam1->f_159, uParam1->f_160, &bVar45) };
		Var60 = { func_233(iVar50, uParam1->f_159, uParam1->f_160, &bVar46) };
		Var64 = { func_234(&bVar47) };
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
	func_136(uParam2, &cVar0, "", &cVar8, &cVar16, &cVar24, &cVar32, joaat("COLOR_PURE_WHITE"));
	func_19(uParam2, 1);
}

void func_136(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7)
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
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(&(uParam0->f_6[0])))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&(uParam0->f_6[0]), sParam3);
	}
	else
	{
		uParam0->f_6[0] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "info0", sParam3);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(&(uParam0->f_6[1])))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&(uParam0->f_6[1]), sParam4);
	}
	else
	{
		uParam0->f_6[1] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "info1", sParam4);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(&(uParam0->f_6[2])))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&(uParam0->f_6[2]), sParam5);
	}
	else
	{
		uParam0->f_6[2] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "info2", sParam5);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(&(uParam0->f_6[3])))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&(uParam0->f_6[3]), sParam6);
	}
	else
	{
		uParam0->f_6[3] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "info3", sParam6);
	}
}

int func_137(var uParam0)
{
	if (!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(*uParam0))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(uParam0->f_15, 0))
	{
		return 1;
	}
	if (!UISTATEMACHINE::_0xF7C180F57F85D0B8(*uParam0))
	{
		func_82(uParam0);
		return 0;
	}
	UISTATEMACHINE::_UISTATEMACHINE_REQUEST_TRANSITION(*uParam0, uParam0->f_2);
	MISC::SET_BIT(&(uParam0->f_15), 0);
	return 1;
}

bool func_138()
{
	return Global_1896726->f_382;
}

void func_139()
{
	func_235(0);
}

bool func_140()
{
	return Global_1939231->f_1;
}

void func_141()
{
	Global_1939231->f_12 = 1;
}

int func_142(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_143(int iParam0)
{
	return &Global_262152 == iParam0;
}

bool func_144()
{
	return CAM::_0xA14D5FE82BCB1D9E();
}

void func_145(int iParam0)
{
	MISC::CLEAR_BIT(Global_1048684, iParam0);
}

void func_146(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_129(65);
		if (bParam1)
		{
			func_129(68);
		}
	}
	else
	{
		func_128(65);
		func_128(68);
	}
}

void func_147(int iParam0)
{
	func_219(Global_1051084, iParam0);
}

void func_148(vector3 vParam0, float fParam3, bool bParam4)
{
	char cVar0[64];
	char cVar8[64];

	if (bParam4)
	{
		StringCopy(&cVar0, MISC::_0x6C4DBF553885F9EB(vParam0), 64);
		StringCopy(&cVar8, MISC::_0x2B6846401D68E563(fParam3, 4), 64);
		Global_1099294->f_504 = { vParam0 };
		Global_1099294->f_507 = fParam3;
		func_129(49);
	}
	else
	{
		func_128(49);
	}
}

void func_149(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_129(61);
		if (bParam1)
		{
			func_129(68);
		}
	}
	else
	{
		func_128(61);
		func_128(49);
		func_128(68);
	}
}

int func_150(vector3 vParam0, float fParam3)
{
	if (func_142(vParam0))
	{
		return 0;
	}
	if (func_236(255) == 4)
	{
		return 0;
	}
	if (func_164(4, 255))
	{
	}
	func_129(4);
	func_237(&(Global_1099294->f_546));
	Global_1099294->f_546.f_6 = { vParam0 };
	Global_1099294->f_546 = fParam3;
	Global_1099294->f_546.f_5 = 1;
	Global_1099294->f_26.f_18 = 0;
	Global_1099294->f_26.f_19 = 0;
	func_238(Global_1099294->f_546, 36);
	return 1;
}

int func_151()
{
	return Global_1893575->f_2;
}

void func_152(int iParam0, bool bParam1)
{
	var uVar0;
	struct<7> Var30;

	if (!func_239(&(Var30.f_6), &Var30, 0))
	{
		Var30.f_6 = { (Global_1070356->f_22101.f_366[MISC::GET_RANDOM_INT_IN_RANGE(0, 16) /*272*/])->f_2 };
		Var30 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
	}
	Var30.f_5 = 1;
	func_129(85);
	if (func_240(iParam0, &uVar0))
	{
		func_241(&uVar0, &Var30, 1, 1, 1);
		if (bParam1)
		{
			func_128(0);
		}
		return;
	}
	func_242(Var30.f_6, Var30, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 1, 1);
	if (bParam1)
	{
		func_128(0);
	}
}

int func_153()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return 1;
	}
	return 0;
}

int func_154(bool bParam0)
{
	if (SCRIPTS::_DOES_THREAD_EXIST(&Global_1051088))
	{
		SCRIPTS::_0x7DE4643157AD646C(&Global_1051088);
		return 0;
	}
	SCRIPTS::REQUEST_SCRIPT("net_ugc_end_flow_transition_handler");
	if (SCRIPTS::HAS_SCRIPT_LOADED("net_ugc_end_flow_transition_handler"))
	{
		Global_1051087 = 0;
		Global_1051088 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS("net_ugc_end_flow_transition_handler", bParam0, 1, 5506);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_ugc_end_flow_transition_handler");
		return 1;
	}
	return 0;
}

void func_155()
{
	Global_1051087 = 1;
}

void func_156()
{
	Global_1070356->f_27136.f_3 = 0;
	Global_1070356->f_27136.f_4 = 0;
}

void func_157()
{
	func_243(2);
}

void func_158(int iParam0)
{
	if (!func_244(iParam0))
	{
		return;
	}
	Global_1099294->f_26.f_9 = (Global_1099294->f_26.f_9 - (Global_1099294->f_26.f_9 && iParam0));
}

void func_159()
{
	bool bVar0;
	int iVar1;

	if (func_236(255) == 4 || func_245(0))
	{
		Global_1099294->f_622 = 1;
		return;
	}
	bVar0 = func_245(35);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		Global_1099294->f_4[iVar1] = 0;
		iVar1++;
	}
	func_129(105);
	func_129(127);
	if (bVar0)
	{
		func_129(35);
	}
	Global_1099294->f_619 = 0;
	Global_1099294->f_620 = 0;
	Global_1099294->f_621 = 0;
	Global_1099294->f_622 = 0;
}

void func_160(bool bParam0)
{
	if (!bParam0)
	{
		func_128(28);
	}
	else
	{
		func_129(28);
	}
}

void func_161(bool bParam0)
{
	if (!bParam0)
	{
		func_128(14);
	}
	else
	{
		func_129(14);
	}
}

void func_162(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam1;
	MISC::SET_BIT(&iVar1, iVar0);
	func_246(uParam0, iVar1, iParam2);
}

void func_163()
{
	PLAYER::_0x93624B36E8851B42(PLAYER::GET_PLAYER_INDEX());
}

int func_164(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_247(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 == func_248())
	{
		return func_247(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1275573->f_22[iParam1])
	{
		return func_247(&(((*Global_1097610)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

void func_165(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
}

void func_166(var uParam0, bool bParam1)
{
	int iVar0;

	UIAPPS::_CLOSE_APP_BY_HASH(joaat("leaderboards"));
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
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(&(uParam0->f_143[iVar0])))
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(&(uParam0->f_143[iVar0]));
		}
		iVar0++;
	}
	AUDIO::_0x531A78D6BF27014B("MP_Leaderboard_Sounds");
	if (!bParam1)
	{
		func_167(&(uParam0->f_162));
	}
	func_186(0);
}

void func_167(var uParam0)
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

void func_168()
{
	Global_1070356->f_13 = 0;
	Global_1070356->f_12 = 50f;
}

int func_169(int iParam0)
{
	if (!STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		return 1;
	}
	if (func_249())
	{
		return 0;
	}
	STREAMING::_REMOVE_IMAP(iParam0);
	return 0;
}

void func_170()
{
	int iVar0;
	char cVar1[16];

	if (iLocal_232 != -1)
	{
		ANIMSCENE::ABORT_ANIM_SCENE(iLocal_232, false);
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Global_1048684->f_22[iVar0 /*10*/])))
			{
				PED::DELETE_PED(Global_1048684->f_22[iVar0 /*10*/]);
			}
			if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_405[iVar0])))
			{
				PED::DELETE_PED(uLocal_405[iVar0]);
			}
			iVar0++;
		}
		if (iLocal_232 != -1)
		{
			ANIMSCENE::ABORT_ANIM_SCENE(iLocal_232, false);
			iVar0 = 0;
			while (iVar0 <= 15)
			{
				if (ENTITY::DOES_ENTITY_EXIST(&(iLocal_471[iVar0])))
				{
					StringCopy(&cVar1, "COFFIN_0", 16);
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_232, &cVar1, &(iLocal_471[iVar0]));
					OBJECT::DELETE_OBJECT(iLocal_471[iVar0]);
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (ENTITY::DOES_ENTITY_EXIST(&(iLocal_540[iVar0])))
				{
					StringCopy(&cVar1, "CRATE_0", 16);
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_232, &cVar1, &(iLocal_540[iVar0]));
					OBJECT::DELETE_OBJECT(iLocal_540[iVar0]);
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 15)
			{
				if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_488[iVar0])))
				{
					StringCopy(&cVar1, "RIFLE_0", 16);
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_232, &cVar1, &(uLocal_488[iVar0]));
					OBJECT::DELETE_OBJECT(uLocal_488[iVar0]);
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(&(iLocal_505[iVar0])))
				{
					StringCopy(&cVar1, "JD_BOTTLE_0", 16);
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_232, &cVar1, &(iLocal_505[iVar0]));
					OBJECT::DELETE_OBJECT(iLocal_505[iVar0]);
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(&(iLocal_514[iVar0])))
				{
					StringCopy(&cVar1, "SHOVEL_0", 16);
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_232, &cVar1, &(iLocal_514[iVar0]));
					OBJECT::DELETE_OBJECT(iLocal_514[iVar0]);
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 15)
			{
				if (ENTITY::DOES_ENTITY_EXIST(&(iLocal_523[iVar0])))
				{
					StringCopy(&cVar1, "CHAIR_", 16);
					if (iVar0 < 10)
					{
						StringConCat(&cVar1, "0", 16);
					}
					StringIntConCat(&cVar1, iVar0 + 1, 16);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_232, &cVar1, &(iLocal_523[iVar0]));
					OBJECT::DELETE_OBJECT(iLocal_523[iVar0]);
				}
				iVar0++;
			}
		}
		ANIMSCENE::RESET_ANIM_SCENE(iLocal_232, 0);
		iLocal_232 = -1;
	}
}

void func_171(var uParam0, var uParam1)
{
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "gameStartTimerLabel", " ");
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(*uParam1);
}

void func_172(bool bParam0)
{
	Global_1939067->f_19 = !bParam0;
}

int func_173(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_250(iParam2, -372840566);
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
	func_251(uParam1, iParam0, Var3);
	return 1;
}

void func_174(var uParam0, bool bParam1)
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
	while (iVar1 <= (func_252(16385) - 1))
	{
		iVar2 = func_253(iVar1);
		func_254(iVar2, func_75(iVar0, iVar2), uParam0);
		iVar1++;
	}
}

void func_175(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iLocal_267 = iParam0;
	iLocal_268 = iParam1;
	iLocal_269 = iParam2;
	iLocal_270 = iParam3;
	if (iLocal_270 == 1)
	{
	}
}

void func_176(int iParam0)
{
	MISC::SET_BIT(&iLocal_392, iParam0);
}

void func_177(int iParam0)
{
	MISC::SET_BIT(&iLocal_393, iParam0);
}

void func_178(int iParam0)
{
	MISC::SET_BIT(&iLocal_394, iParam0);
}

void func_179()
{
	if (iLocal_232 == -1)
	{
		iLocal_232 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_233, 130, 0, false, true);
	}
}

int func_180(vector3 vParam0)
{
	return func_255(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

void func_181(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	fLocal_271 = fParam0;
	fLocal_272 = fParam1;
	fLocal_274 = fParam2;
	fLocal_275 = fParam3;
	fLocal_276 = fParam4;
	fLocal_277 = fParam5;
}

Vector3 func_182()
{
	switch (iLocal_243)
	{
		case -1645988897:
		case 231100670:
			return 0f, -440f, 0f;
		case -1793687930:
		case 505174455:
			return 0f, -880f, 0f;
		case -381473693:
		case 1234767744:
			return 0f, -1320f, 0f;
		case 56660208:
		case 1755785548:
			return 0f, -1760f, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_183(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		if (iParam1 >= 0 && iParam1 <= 4)
		{
			ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_232, "CameraIndex", 3, false);
		}
		else if (iParam1 >= 0 && iParam1 <= 8)
		{
			ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_232, "CameraIndex", 2, false);
		}
		else
		{
			ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_232, "CameraIndex", 1, false);
		}
	}
	else if (iParam1 >= 0 && iParam1 <= 4)
	{
		ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_232, "CameraIndex", 12, false);
	}
	else if (iParam1 >= 0 && iParam1 <= 8)
	{
		ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_232, "CameraIndex", 11, false);
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_232, "CameraIndex", 10, false);
	}
}

int func_184(int iParam0)
{
	if (STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		return 1;
	}
	if (func_249())
	{
		return 0;
	}
	STREAMING::_REQUEST_IMAP(iParam0);
	return 0;
}

void func_185(int iParam0)
{
	Global_1954472->f_1331.f_2 = 0f;
	Global_1954472->f_1331.f_1 = iParam0;
}

void func_186(int iParam0)
{
	if (Global_1903004->f_1 != iParam0)
	{
		Global_1903004->f_1 = iParam0;
	}
}

void func_187(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_188(bool bParam0)
{
	if (bParam0)
	{
		return joaat("leaderboard");
	}
	return -987928333;
}

int func_189()
{
	return 205122612;
}

int func_190()
{
	if (Global_1939067->f_20 && Global_1939067->f_5 == 1)
	{
		return 1;
	}
	return 0;
}

bool func_191(int iParam0)
{
	return (Global_1099294->f_197 && iParam0) != 0;
}

void func_192(int iParam0)
{
	iLocal_400 = iParam0;
}

void func_193(int iParam0)
{
	if (MISC::IS_BIT_SET(iLocal_549, iParam0))
	{
	}
	else
	{
		MISC::SET_BIT(&iLocal_549, iParam0);
		HUD::_HIDE_HUD_COMPONENT(func_256(iParam0));
	}
}

void func_194(int iParam0, bool bParam1)
{
	if (MISC::IS_BIT_SET(iLocal_549, iParam0) || bParam1)
	{
		MISC::CLEAR_BIT(&iLocal_549, iParam0);
		HUD::_DISPLAY_HUD_COMPONENT(func_256(iParam0));
	}
}

void func_195()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (MISC::ARE_STRINGS_EQUAL(&((Global_1050004->f_101[iVar0 /*23*/])->f_14.f_1), Global_1050004->f_27[0 /*18*/]))
		{
			(Global_1050004->f_101[iVar0 /*23*/])->f_13 = 1;
			return;
		}
		else
		{
			(Global_1050004->f_101[iVar0 /*23*/])->f_13 = 0;
		}
		iVar0++;
	}
}

void func_196(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10)
{
	func_257(uParam0, uParam1, uParam2, iParam7, bParam4, bParam3, bParam5, bParam8, bParam9, iParam10, iParam6);
	func_258(uParam0, uParam1, bParam5, iParam6, uParam2, MISC::IS_BIT_SET(uParam0->f_159, 5), iParam10);
}

void func_197(var uParam0, char* sParam1)
{
	if (!MISC::IS_BIT_SET(uParam0->f_158, 7))
	{
		MISC::SET_BIT(&(uParam0->f_158), 7);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Heading", sParam1);
	}
}

void func_198(bool bParam0)
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

void func_199(var uParam0, char[4] cParam1, char[4] cParam2)
{
	ENTITY::SET_ENTITY_COLLISION(*uParam0, false, false);
	ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_232, &cParam1, *uParam0, 0);
}

int func_200(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= (Global_1048684->f_376 - 1))
	{
		if ((Global_1048684->f_22[iVar0 /*10*/])->f_9)
		{
			if (iVar1 == iParam0)
			{
				return 1;
			}
			iVar1++;
		}
		iVar0++;
	}
	return 0;
}

void func_201(int iParam0)
{
	if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_21175.f_5), iParam0))
	{
		SCRIPTS::_0x31010318BA9897AC(&(Global_1070356->f_21175.f_5), iParam0);
		func_259(iParam0);
	}
}

bool func_202()
{
	switch (iLocal_391)
	{
		case 0:
			func_260();
			return false;
		case 1:
			func_261();
			return false;
		case 2:
			func_262();
			return false;
		default:
			break;
	}
	return iLocal_391 == 3;
}

int func_203(var uParam0)
{
	if (*uParam0 != 255)
	{
		return 1;
	}
	else if (Global_2883584 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1)))
	{
		return 1;
	}
	return 0;
}

void func_204(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	char cVar0[64];
	char cVar8[64];
	struct<8> Var16;

	StringCopy(&cVar0, "mp_lobby_textures", 64);
	StringCopy(&cVar8, "TEMP_PEDSHOT", 64);
	MemCopy(&Var16, {func_263(uParam0, *uParam1)}, 8);
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
		(*uParam0->f_45[iParam2 /*3*/])[0] = DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_12[iParam2]), "AvatarDictionary", &cVar0);
		(*uParam0->f_45[iParam2 /*3*/])[1] = DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_12[iParam2]), "AvatarTexture", &cVar8);
	}
}

void func_205(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	iVar0 = 0;
	iVar1 = PLAYER::PLAYER_ID();
	bVar2 = iVar1 == ((*uParam1)[iParam2 /*23*/])->f_14;
	iVar0 = func_264(uParam0, uParam1, iParam2, iVar1, bVar2);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(((*uParam1)[iParam2 /*23*/])->f_14) && VOICE::_0x919AF2D93E9AA89D(((*uParam1)[iParam2 /*23*/])->f_14))
	{
		bVar3 = VOICE::_0xEF6F2A35FAAF2ED7(((*uParam1)[iParam2 /*23*/])->f_14);
	}
	else
	{
		bVar3 = false;
	}
	if (bVar3)
	{
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iParam2]), "HeadsetIconVisible", bVar3);
	if (!bParam3)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(&(uParam0->f_12[iParam2]), "HeadsetIconColor", iVar0);
	}
	if (bVar3)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iParam2]), "ShowBlip", false);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iParam2]), "ShowBlip", true);
	}
}

bool func_206()
{
	return MISC::IS_BIT_SET(iLocal_396, 8);
}

void func_207(bool bParam0, bool bParam1)
{
	func_198(0);
	if (!bParam1)
	{
		Local_379 = &Global_1050902;
		Local_379.f_2 = Global_1050902->f_2;
		Local_379.f_1 = Global_1050902->f_1;
		Local_379.f_3 = Global_1050902->f_3;
		Local_379.f_5 = 0;
		Local_379.f_7 = Global_1050902->f_7;
		Local_379.f_8 = Global_1050902->f_8;
		if (func_52(2) || func_52(4))
		{
			Local_379.f_4 = 1;
		}
		else
		{
			Local_379.f_4 = 0;
		}
		if (bParam0)
		{
			Local_379.f_6 = 1f;
		}
		else
		{
			Local_379.f_6 = -1f;
		}
		TELEMETRY::_0xEF3C68F56BAD7B69(Global_1050878, &Local_379);
		func_67(-304137656, 0, 255, 0, 0);
	}
	MISC::SET_BIT(&iLocal_396, 3);
}

void func_208(var uParam0)
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

void func_209()
{
	func_265();
	func_104(0);
	func_97(0);
}

int func_210()
{
	if (func_21(1))
	{
		return Global_265331->f_124445.f_70.f_18;
	}
	if (((*Global_262996)[&Global_1275573 /*70*/])->f_1.f_18 != 2147483647)
	{
		return ((*Global_262996)[&Global_1275573 /*70*/])->f_1.f_18;
	}
	return -1;
}

int func_211(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = func_266();
	switch (iVar1)
	{
		case -1:
			return -1;
		case 0:
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if (&Global_262155->f_1[iVar0 /*5*/] == iParam0)
				{
					return (Global_262155->f_1[iVar0 /*5*/])->f_4;
				}
				iVar0++;
			}
			return -1;
		case 1:
			if (&Global_262155->f_1[Global_262155->f_162 /*5*/] == 2147483647)
			{
				return -1;
			}
			return (Global_262155->f_1[Global_262155->f_162 /*5*/])->f_4;
		default:
			break;
	}
	return -1;
}

void func_212(var uParam0, var uParam1, int iParam2)
{
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "gameStartTimerLabel", HUD::_GET_LABEL_TEXT("GAME_START_TIMER"));
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "gameStartTimer", func_267(iParam2));
}

void func_213(var uParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(*uParam0, func_267(iParam1));
}

int func_214(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

char* func_215(float fParam0, int iParam1)
{
	char* sVar0;

	sVar0 = MISC::_0x2B6846401D68E563(fParam0, iParam1);
	return func_268(sVar0, joaat("COLOR_PURE_WHITE"));
}

void func_216(var uParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "info_visible_06", true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(*uParam0, "info_value_06", sParam1);
}

void func_217(var uParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "info_visible_07", true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(*uParam0, "info_value_07", sParam1);
}

void func_218(var uParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "info_visible_08", true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(*uParam0, "info_value_08", sParam1);
}

void func_219(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_220(var uParam0, int iParam1, int iParam2)
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

bool func_221(var uParam0, int iParam1, int iParam2)
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

bool func_222(int iParam0)
{
	return (Global_1099294->f_26.f_9 && iParam0) != 0;
}

bool func_223(int iParam0)
{
	return (Global_1099294->f_26.f_7 && iParam0) != 0;
}

void func_224()
{
	if (!Global_1099294->f_16)
	{
		return;
	}
	Global_1070356->f_27136.f_5 = 1;
	AUDIO::_0x531A78D6BF27014B("rdro_gamemode_transition_sounds");
	AUDIO::_0x531A78D6BF27014B("rdro_gamemode_generic_sounds");
}

int func_225(var uParam0, int iParam1)
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
		if (((*uParam0)[iVar0 /*23*/])->f_14 == iParam1 || MISC::ARE_STRINGS_EQUAL(&(((*uParam0)[iVar0 /*23*/])->f_14.f_1), sVar1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

char* func_226(int iParam0, int iParam1, bool bParam2)
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
			return func_269(iParam0, 1, 2, MISC::IS_BIT_SET(iParam1, 12), 0, 0);
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
			return func_269(iParam0, 1, 2, MISC::IS_BIT_SET(iParam1, 12), 0, 0);
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
			return func_269(iParam0, 1, 2, 0, 0, 0);
		}
	}
	if (iParam0 < 0)
	{
		return "";
	}
	return func_270(&cVar0);
}

int func_227(var uParam0, int iParam1, var uParam2)
{
	float fVar0;

	fVar0 = uParam0->f_1;
	if (func_73())
	{
		func_271(uParam0, 0);
	}
	else if (MISC::IS_BIT_SET(iParam1, 19))
	{
		fVar0 = uParam0->f_6;
	}
	return BUILTIN::ROUND(fVar0);
}

int func_228(var uParam0, int iParam1, int iParam2)
{
	float fVar0;

	fVar0 = uParam0->f_2;
	if (func_73())
	{
		func_271(uParam0, 1);
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

int func_229(var uParam0, int iParam1, int iParam2)
{
	float fVar0;

	fVar0 = uParam0->f_2;
	if (func_73())
	{
		func_271(uParam0, 2);
	}
	else if (MISC::IS_BIT_SET(iParam1, 19) || MISC::IS_BIT_SET(iParam2, 5))
	{
		fVar0 = uParam0->f_5;
	}
	return BUILTIN::ROUND(fVar0);
}

int func_230(var uParam0)
{
	float fVar0;

	fVar0 = uParam0->f_2;
	if (func_73())
	{
		func_271(uParam0, 3);
	}
	return BUILTIN::ROUND(fVar0);
}

struct<4> func_231(int iParam0, int iParam1, bool bParam2)
{
	char cVar0[32];
	bool bVar4;

	if (func_73())
	{
		MemCopy(&cVar0, {func_272(0, bParam2)}, 4);
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

struct<4> func_232(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	char cVar0[32];
	bool bVar4;

	if (func_73())
	{
		MemCopy(&cVar0, {func_272(1, bParam3)}, 4);
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

struct<4> func_233(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	char cVar0[32];
	bool bVar4;

	if (func_73())
	{
		MemCopy(&cVar0, {func_272(2, bParam3)}, 4);
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

struct<4> func_234(bool bParam0)
{
	struct<4> Var0;

	if (func_73())
	{
		MemCopy(&Var0, {func_272(3, bParam0)}, 4);
	}
	return Var0;
}

void func_235(bool bParam0)
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

int func_236(int iParam0)
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

void func_237(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_238(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

int func_239(var uParam0, int iParam1, bool bParam2)
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
	iVar5 = func_273(iVar0);
	if (iVar5 <= 0)
	{
		return 0;
	}
	else
	{
		iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar5);
		if (func_274(iVar0, iVar6, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_240(int iParam0, var uParam1)
{
	var uVar0;
	vector3 vVar1;
	float fVar4;

	if (!func_275(iParam0))
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

void func_241(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	if (func_236(255) == 4)
	{
		return;
	}
	if (bParam3)
	{
		if (func_142(uParam0->f_17.f_6))
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
	if (func_142(uParam1->f_6))
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
	func_129(0);
	func_129(3);
	Global_1099294->f_586 = iParam2;
	Global_1099294->f_587 = bParam3;
	Global_1099294->f_588 = iParam4;
	func_276(&(Global_1099294->f_516));
	Global_1099294->f_516 = { *uParam0 };
	func_277(&(Global_1099294->f_555));
	Global_1099294->f_555 = { *uParam1 };
	Global_1099294->f_26.f_18 = 0;
	Global_1099294->f_26.f_19 = 0;
	func_278(Global_1099294->f_516, 36);
	func_279(Global_1099294->f_555, 36);
}

void func_242(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, float fParam8)
{
	vector3 vVar0;
	int iVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
	iVar3 = iParam3;
	if (!func_239(&vVar0, &iVar3, 1))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
		iVar3 = iParam3;
	}
	func_280(vParam0, iParam3, vVar0, iVar3, iParam4, iParam5, iParam6, iParam7, fParam8, 1);
}

void func_243(int iParam0)
{
	func_281(&(Global_1070356->f_22101.f_4), iParam0);
}

bool func_244(int iParam0)
{
	return (Global_1099294->f_26.f_9 && iParam0) != 0;
}

bool func_245(int iParam0)
{
	return (Global_1099294->f_4[Global_1100047[iParam0 /*2*/]] && ((*Global_1100047)[iParam0 /*2*/])->f_1) == ((*Global_1100047)[iParam0 /*2*/])->f_1;
}

void func_246(var uParam0, int iParam1, int iParam2)
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
	func_282(&Var0);
	uParam0->f_33 = (uParam0->f_33 || iParam1);
}

bool func_247(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_248()
{
	return Global_1099294->f_339;
}

bool func_249()
{
	return func_283() == 4;
}

void func_250(int iParam0, int iParam1)
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

void func_251(var uParam0, int iParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_214(uParam0))
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

int func_252(int iParam0)
{
	return func_284(iParam0) + 1;
}

int func_253(int iParam0)
{
	return BUILTIN::FLOOR(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(iParam0)));
}

void func_254(int iParam0, bool bParam1, var uParam2)
{
	switch (iParam0)
	{
		case 1:
			if (bParam1 || !func_75(*uParam2, 8))
			{
				func_285(-1484676996, bParam1);
			}
			func_286("MS_FortM_MP", bParam1);
			break;
		case 2:
			func_285(1510350995, bParam1);
			break;
		case 4:
			func_285(-1591103463, bParam1);
			break;
		case 8:
			if (bParam1 || !func_75(*uParam2, 1))
			{
				func_285(-1484676996, bParam1);
			}
			func_285(2075683947, bParam1);
			func_285(1646485471, bParam1);
			func_287(2075683947, bParam1);
			func_286("MS_MP001_MP_REVENGE01", bParam1);
			break;
		case 16:
			func_285(-2131576785, bParam1);
			func_285(-2137016051, bParam1);
			func_285(1193151399, bParam1);
			func_285(-1353871107, bParam1);
			func_285(2026630914, bParam1);
			func_285(-225844616, bParam1);
			func_286("MS_mp001_sisika", bParam1);
			break;
		case 64:
			func_285(-200270658, bParam1);
			func_285(-127497991, bParam1);
			func_286("MS_MP001_GUNVOUTDECISION03", bParam1);
			func_287(-127497991, bParam1);
			break;
		case 256:
			func_285(331698185, bParam1);
			break;
		case 128:
			func_287(-393752274, bParam1);
			break;
		case 512:
			func_285(-770646513, bParam1);
			break;
		case 32:
			func_285(-1876837239, bParam1);
			break;
		case 1024:
			func_285(401370450, bParam1);
			func_285(1183263476, bParam1);
			func_285(573140494, bParam1);
			break;
		case 2048:
			func_285(-1407497494, bParam1);
			func_285(-1161238459, bParam1);
			func_285(-1583237641, bParam1);
			break;
		case 4096:
			func_285(-1744971427, bParam1);
			break;
		case 8192:
			func_285(793572138, bParam1);
			break;
		case 16384:
			func_285(1773228786, bParam1);
			func_286("nav_moonshine_moon3_extended_terrain", bParam1);
			break;
	}
	if (bParam1)
	{
		func_219(uParam2, iParam0);
	}
	else
	{
		func_281(uParam2, iParam0);
	}
}

int func_255(int iParam0)
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

int func_256(int iParam0)
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

void func_257(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	char cVar1[32];

	if (bParam4)
	{
		if (func_73())
		{
			func_288(uParam0);
		}
		else
		{
			func_289(uParam0, bParam5, bParam7);
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
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_143[iVar0]), "Position", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_143[iVar0]), "Gamertag", "");
		DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_143[iVar0]), "GamertagColor", 0);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_143[iVar0]), "StatPriority", "");
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
		DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_12[iVar0]), "Position", 0);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(uParam0->f_12[iVar0]), "ShowCross", false);
		DATABINDING::_DATABINDING_ADD_DATA_HASH(&(uParam0->f_12[iVar0]), "CrossColor", joaat("COLOR_RED"));
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_12[iVar0]), "Gamertag", "");
		DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_12[iVar0]), "GamertagColor", 0);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(uParam0->f_12[iVar0]), "ShowCrewTag", true);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_12[iVar0]), "CrewTag", "");
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(uParam0->f_12[iVar0]), "ShowRank", true);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_12[iVar0]), "Rank", "0");
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(uParam0->f_12[iVar0]), "Spectating", false);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_12[iVar0]), "Stat0", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_12[iVar0]), "Stat1", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_12[iVar0]), "Stat2", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_12[iVar0]), "Stat3", "");
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(uParam0->f_12[iVar0]), "ShowBlip", func_290());
		DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_12[iVar0]), "BlipColor", 0);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_12[iVar0]), "Blip", "BLIP_AMBIENT_PED_MEDIUM");
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(uParam0->f_12[iVar0]), "isHighlighted", false);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(uParam0->f_12[iVar0]), "HeadsetIconVisible", false);
		DATABINDING::_DATABINDING_ADD_DATA_HASH(&(uParam0->f_12[iVar0]), "HeadsetIconColor", joaat("COLOR_PURE_WHITE"));
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(uParam0->f_12[iVar0]), "ShowBlip", true);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "info_visible_06", false);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "info_visible_07", false);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "info_visible_08", false);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "info_value_06", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "info_value_07", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "info_value_08", "");
		DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_12[iVar0]), "SetOverlayImg", 1);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(uParam0->f_12[iVar0]), "ShowOverlay", false);
		func_204(uParam0, &(((*uParam1)[iVar0 /*23*/])->f_14), iVar0, 0);
		iVar0++;
	}
	if (func_73())
	{
		func_291(uParam0, uParam1, uParam2, bParam6, bParam5, bParam7, bParam8, iParam9, iParam10);
	}
	else
	{
		func_292(uParam0, uParam1, uParam2, bParam6, bParam5, bParam7, bParam8, iParam9, iParam10);
	}
}

void func_258(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, int iParam6)
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
	if (Global_1939067->f_108)
	{
		iVar3 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_142);
		if (MISC::IS_BIT_SET(uParam0->f_159, 28) && uParam0->f_150 > 0)
		{
			iVar14 = uParam0->f_150;
			func_293(uParam4, &uVar4, uParam0->f_150, bVar16);
			func_294(uParam0, iParam6, &uVar4, &iVar13, &iVar14);
			iVar1 = 0;
			while (iVar1 <= (iVar14 - 1))
			{
				iVar17 = &uVar4[iVar1];
				if (iVar1 == 0 || iVar1 >= iVar13)
				{
					if ((iVar17 < 8 && iVar17 != -1) && iVar0 < 5)
					{
						func_295(uParam0->f_2, &(uParam0->f_143[iVar0]), "MiniListItem", iVar3, iVar0);
						iVar0++;
					}
				}
				iVar1++;
			}
		}
		else
		{
			func_296(uParam1, iParam6, &iVar13, &iVar14);
			iVar2 = 0;
			while (iVar2 <= iVar14)
			{
				if (iVar0 == 0 || iVar2 >= iVar13)
				{
					if (func_203(&(((*uParam1)[iVar2 /*23*/])->f_14)) && iVar0 < 5)
					{
						func_295(uParam0->f_2, &(uParam0->f_143[iVar0]), "MiniListItem", iVar3, iVar0);
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
		func_293(uParam4, &uVar4, uParam0->f_150, bVar16);
		func_297(uParam0, uParam1, iParam3, uParam0->f_150, bParam5);
		if (!bVar15)
		{
			iVar1 = 0;
			while (iVar1 <= (uParam0->f_150 - 1))
			{
				iVar19 = &uVar4[iVar1];
				if (iVar19 < 8 && iVar19 > -1)
				{
					func_295(uParam0->f_2, &(uParam0->f_3[iVar19]), "LeaderboardHeader", iVar3, iVar0);
					iVar0++;
					iVar2 = 0;
					while (iVar2 <= 31)
					{
						if (iVar19 == uParam1[iVar2 /*23*/] && func_203(&(((*uParam1)[iVar2 /*23*/])->f_14)))
						{
							func_295(uParam0->f_2, &(uParam0->f_12[iVar2]), "LeaderboardListItem", iVar3, iVar0);
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
			if (func_203(&(((*uParam1)[iVar2 /*23*/])->f_14)))
			{
				func_295(uParam0->f_2, &(uParam0->f_12[iVar2]), "LeaderboardListItem", iVar3, iVar0);
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
				func_295(uParam0->f_2, &(uParam0->f_12[iVar20]), "LeaderboardListItemBlank", iVar3, iVar0);
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

void func_259(int iParam0)
{
	if (!func_298(iParam0))
	{
		SCRIPTS::_0x31010318BA9897AC(&(Global_1070356->f_19683.f_260), iParam0);
	}
}

void func_260()
{
	func_299(1);
}

void func_261()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (Global_1048684->f_376 - 1))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(&(uLocal_405[iVar0])) && ENTITY::DOES_ENTITY_EXIST(&(uLocal_405[iVar0])))
		{
			return;
		}
		iVar0++;
	}
	func_299(2);
}

void func_262()
{
	func_299(3);
}

struct<16> func_263(var uParam0, int iParam1)
{
	struct<16> Var0;
	int iVar16;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return Var0;
	}
	if (func_300() > 0)
	{
		return Var0;
	}
	iVar16 = iParam1;
	switch (func_301(&Var0, iVar16, 1))
	{
		case 4:
			break;
		case 1:
			func_302(iVar16, 1);
			break;
		case 2:
			func_302(iVar16, 1);
			func_162(&(uParam0->f_162), iParam1, 0);
			break;
		case 3:
			break;
		case 0:
			break;
	}
	return Var0;
}

int func_264(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (MISC::IS_BIT_SET(uParam0->f_159, 11))
	{
		iVar0 = func_303(uParam1[iParam2 /*23*/], PLAYER::GET_PLAYER_TEAM(iParam3), uParam0->f_150, MISC::IS_BIT_SET(uParam0->f_159, 5), bParam4);
	}
	else if (MISC::IS_BIT_SET(uParam0->f_159, 16))
	{
		if (bParam4)
		{
			iVar0 = joaat("COLOR_PURE_WHITE");
		}
		else
		{
			iVar0 = func_304(((*uParam1)[iParam2 /*23*/])->f_14, 1, -1, 1);
		}
	}
	else
	{
		iVar0 = func_304(((*uParam1)[iParam2 /*23*/])->f_14, 1, -1, 1);
	}
	return iVar0;
}

void func_265()
{
	MISC::SET_BIT(&iLocal_396, 8);
}

int func_266()
{
	return &Global_262155;
}

char* func_267(int iParam0)
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

char* func_268(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_305(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

char* func_269(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
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
	iVar6 = func_306((iVar5 / 60), 0, 180);
	iVar7 = func_306((iVar5 % 60), 0, 60);
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

char* func_270(char* sParam0)
{
	return HUD::_0xD8402B858F4DDD88(sParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0));
}

int func_271(var uParam0, int iParam1)
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

struct<16> func_272(int iParam0, bool bParam1)
{
	char cVar0[128];

	StringCopy(&cVar0, "", 128);
	if (&Global_3145858->f_50929[iParam0 /*2*/] > -1)
	{
		*bParam1 = !func_307(&(Global_3145858->f_50929[iParam0 /*2*/]));
		return *(Global_3145858->f_42116[&Global_3145858->f_50929[iParam0 /*2*/] /*18*/]);
	}
	return cVar0;
}

int func_273(int iParam0)
{
	struct<4> Var0;

	Var0 = Global_1070356->f_22101.f_366.f_4357;
	Var0.f_2 = 1593794963;
	Var0.f_3 = iParam0;
	return DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
}

int func_274(int iParam0, int iParam1, var uParam2, int iParam3)
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
		DATAFILE::_DATAFILE_GET_FLOAT(iParam3, &Var0);
		return 1;
	}
	return 0;
}

bool func_275(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_276(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_277(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_278(struct<29> Param0, var uParam29, int iParam30)
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

void func_279(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

void func_280(vector3 vParam0, int iParam3, vector3 vParam4, int iParam7, float fParam8, float fParam9, bool bParam10, int iParam11, float fParam12, int iParam13)
{
	if (func_236(255) == 4)
	{
		return;
	}
	if (func_142(vParam0))
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
		func_308(0, 0, 0, 1);
	}
	func_129(0);
	func_129(3);
	Global_1099294->f_586 = iParam11;
	Global_1099294->f_587 = fParam12;
	Global_1099294->f_588 = iParam13;
	func_276(&(Global_1099294->f_516));
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
	func_277(&(Global_1099294->f_555));
	Global_1099294->f_555.f_6 = { vParam4 };
	Global_1099294->f_555 = iParam7;
	Global_1099294->f_555.f_5 = 1;
	Global_1099294->f_26.f_18 = 0;
	Global_1099294->f_26.f_19 = 0;
	func_278(Global_1099294->f_516, 36);
	func_279(Global_1099294->f_555, 36);
}

void func_281(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_282(var uParam0)
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
			func_309(vVar0);
			break;
		case 1:
			vVar0.x = uParam0->f_1;
			SCRIPTS::_0x20F4CB76689ACDBC(&(vVar0.f_2));
			func_309(vVar0);
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
					if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1275573->f_154[iVar3])))
					{
					}
					else if (&Global_1275573->f_154[iVar3] == Global_1275573->f_10)
					{
					}
					else
					{
						SCRIPTS::_0x31010318BA9897AC(&uVar5, &(Global_1275573->f_154[iVar3]));
					}
					iVar3++;
				}
				func_310(&Var6, uVar5);
				Jump @392; //curOff = 221
				if (!SCRIPTS::_0x179A6F0EE2E79026(&(uParam0->f_2)))
				{
					return;
				}
				vVar0.x = uParam0->f_1;
				vVar0.f_2 = uParam0->f_2;
				func_309(vVar0);
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
						if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1275573->f_154[iVar3])))
						{
						}
						else if (&Global_1275573->f_154[iVar3] == Global_1275573->f_10)
						{
						}
						else
						{
							SCRIPTS::_0x31010318BA9897AC(&uVar5, &(Global_1275573->f_154[iVar3]));
						}
						iVar3++;
					}
					func_310(&Var14, uVar5);
				}
			}
		}

int func_283()
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

int func_284(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = iParam0;
	while (iParam0 > 1)
	{
		iParam0 = BUILTIN::SHIFT_RIGHT(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

void func_285(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_311(iParam0);
	}
	else
	{
		func_312(iParam0);
	}
}

void func_286(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		func_313(sParam0);
	}
	else
	{
		func_314(sParam0);
	}
}

void func_287(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_315(iParam0);
	}
	else
	{
		func_316(iParam0);
	}
}

void func_288(var uParam0)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;

	sVar0 = func_317(uParam0->f_159, uParam0->f_160);
	sVar1 = func_318(uParam0->f_159, uParam0->f_160);
	sVar2 = func_319(uParam0->f_159, uParam0->f_160);
	sVar3 = func_320();
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

void func_289(var uParam0, bool bParam1, bool bParam2)
{
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
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat1", func_317(uParam0->f_159, uParam0->f_160));
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat1Color", joaat("COLOR_WHITE"));
	}
	else if (func_321(uParam0->f_159))
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
	if (!func_321(uParam0->f_159))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat2", func_318(uParam0->f_159, uParam0->f_160));
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat2Color", joaat("COLOR_WHITE"));
	}
	if (!MISC::IS_BIT_SET(uParam0->f_159, 3) || MISC::IS_BIT_SET(uParam0->f_159, 0))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat3", func_319(uParam0->f_159, uParam0->f_160));
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat3Color", joaat("COLOR_WHITE"));
	}
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "HeadingColor", joaat("COLOR_WHITE"));
}

int func_290()
{
	return 1;
}

void func_291(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
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

	if (Global_1939067->f_108)
	{
		func_322(uParam0, uParam1, uParam2, iParam7, iParam8);
	}
	else
	{
		func_121(uParam0, uParam1);
		iVar2 = PLAYER::PLAYER_ID();
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (!func_203(&(((*uParam1)[iVar0 /*23*/])->f_14)))
			{
			}
			else
			{
				iVar1++;
				func_205(uParam0, uParam1, iVar0, bParam4);
				if (bParam3)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "Position", func_323(uParam1, iVar0));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "Position", iVar1);
				}
				bVar3 = iVar2 == ((*uParam1)[iVar0 /*23*/])->f_14;
				iVar4 = func_264(uParam0, uParam1, iVar0, iVar2, bVar3);
				if (!bParam6)
				{
					if (!bParam4)
					{
						func_324(uParam0, uParam1, iVar0, bParam3, iVar4);
					}
				}
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Gamertag", &(((*uParam1)[iVar0 /*23*/])->f_14.f_1));
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "GamertagColor", iVar4);
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "CrewTag", func_325());
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Rank", func_326(((*uParam1)[iVar0 /*23*/])->f_14));
				if (!bParam4)
				{
					if (func_130())
					{
						if (func_327(((*uParam1)[iVar0 /*23*/])->f_14))
						{
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "Spectating", true);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "ShowRank", false);
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "Spectating", false);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "ShowRank", true);
						}
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "Spectating", false);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "ShowRank", true);
					}
				}
				if (bParam4)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat0", func_328(((*uParam1)[iVar0 /*23*/])->f_11));
				}
				else if (bParam5)
				{
				}
				fVar5 = func_329((*uParam1)[iVar0 /*23*/], uParam0->f_159);
				fVar6 = func_330((*uParam1)[iVar0 /*23*/], uParam0->f_159);
				fVar7 = func_331((*uParam1)[iVar0 /*23*/], uParam0->f_159, uParam0->f_160);
				fVar8 = func_332((*uParam1)[iVar0 /*23*/]);
				if (((*Global_1049246)[0 /*2*/])->f_1 != 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat1", MISC::_0x2B6846401D68E563(fVar5, 0));
				}
				if (((*Global_1049246)[1 /*2*/])->f_1 != 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat2", MISC::_0x2B6846401D68E563(fVar6, 0));
				}
				if (((*Global_1049246)[2 /*2*/])->f_1 != 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat3", MISC::_0x2B6846401D68E563(fVar7, 0));
				}
				if (((*Global_1049246)[3 /*2*/])->f_1 != 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "StatRounds", MISC::_0x2B6846401D68E563(fVar8, 0));
				}
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "isHighlighted", bVar3);
				if (bVar3)
				{
				}
				if (bParam4 && ((*uParam1)[iVar0 /*23*/])->f_13)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Blip", "BLIP_MVP");
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "BlipColor", -1777836132);
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "BlipColor", iVar4);
				}
			}
			iVar0++;
		}
		uParam0->f_149 = iVar1;
	}
}

void func_292(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
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

	if (Global_1939067->f_108)
	{
		func_333(uParam0, uParam1, uParam2, iParam7, iParam8);
	}
	else
	{
		func_121(uParam0, uParam1);
		iVar7 = PLAYER::PLAYER_ID();
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (!func_203(&(((*uParam1)[iVar0 /*23*/])->f_14)))
			{
			}
			else
			{
				iVar1++;
				func_205(uParam0, uParam1, iVar0, bParam4);
				if (bParam3)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "Position", func_323(uParam1, iVar0));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "Position", iVar1);
				}
				bVar8 = iVar7 == ((*uParam1)[iVar0 /*23*/])->f_14;
				iVar9 = func_264(uParam0, uParam1, iVar0, iVar7, bVar8);
				if (!bParam6)
				{
					if (!bParam4)
					{
						func_324(uParam0, uParam1, iVar0, bParam3, iVar9);
					}
				}
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Gamertag", &(((*uParam1)[iVar0 /*23*/])->f_14.f_1));
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "GamertagColor", iVar9);
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "CrewTag", func_325());
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Rank", func_326(((*uParam1)[iVar0 /*23*/])->f_14));
				if (!bParam4)
				{
					if (func_130())
					{
						if (func_327(((*uParam1)[iVar0 /*23*/])->f_14))
						{
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "Spectating", true);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "ShowRank", false);
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "Spectating", false);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "ShowRank", true);
						}
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "Spectating", false);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "ShowRank", true);
					}
				}
				if (bParam4)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat0", func_328(((*uParam1)[iVar0 /*23*/])->f_11));
				}
				else if (bParam5)
				{
					if (func_334(uParam0->f_159))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat1", MISC::_0x2B6846401D68E563(((*uParam1)[iVar0 /*23*/])->f_8, 0));
					}
					else if (func_321(uParam0->f_159))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat2", MISC::_0x2B6846401D68E563(((*uParam1)[iVar0 /*23*/])->f_8, 0));
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat0", MISC::_0x2B6846401D68E563(((*uParam1)[iVar0 /*23*/])->f_8, 0));
					}
				}
				if (MISC::IS_BIT_SET(uParam0->f_159, 3))
				{
					iVar10 = 0;
					if (MISC::IS_BIT_SET(uParam0->f_159, 0))
					{
						iVar2 = BUILTIN::ROUND(func_330((*uParam1)[iVar0 /*23*/], uParam0->f_159));
						iVar10 = "Stat2";
					}
					else
					{
						iVar2 = BUILTIN::ROUND(func_329((*uParam1)[iVar0 /*23*/], uParam0->f_159));
						iVar10 = "Stat1";
					}
					sVar5 = " ";
					if (func_335(iVar2))
					{
						iVar11 = uParam0->f_159;
						if (((*uParam1)[iVar0 /*23*/])->f_1 == 8.94E+07f)
						{
							MISC::CLEAR_BIT(&iVar11, 12);
						}
						sVar5 = func_226(iVar2, iVar11, 0);
					}
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), iVar10, sVar5);
				}
				else if (!MISC::IS_BIT_SET(uParam0->f_159, 0) && !MISC::IS_BIT_SET(uParam0->f_159, 17))
				{
					if (!MISC::IS_BIT_SET(uParam0->f_159, 18))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat1", MISC::_0x2B6846401D68E563(func_329((*uParam1)[iVar0 /*23*/], uParam0->f_159), func_336(uParam0, 1)));
					}
				}
				if (MISC::IS_BIT_SET(uParam0->f_159, 4))
				{
					iVar12 = 0;
					sVar6 = " ";
					if (MISC::IS_BIT_SET(uParam0->f_159, 0))
					{
						iVar12 = "Stat3";
						iVar3 = BUILTIN::ROUND(func_331((*uParam1)[iVar0 /*23*/], uParam0->f_159, uParam0->f_160));
					}
					else
					{
						iVar12 = "Stat2";
						iVar3 = BUILTIN::ROUND(func_330((*uParam1)[iVar0 /*23*/], uParam0->f_159));
					}
					if (func_335(iVar3))
					{
						sVar6 = func_269(iVar3, 1, 2, 0, 0, 0);
					}
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), iVar12, sVar6);
				}
				else if (MISC::IS_BIT_SET(uParam0->f_159, 15))
				{
					iVar13 = 0;
					if (MISC::IS_BIT_SET(uParam0->f_159, 0))
					{
						iVar13 = "Stat3";
						fVar14 = func_331((*uParam1)[iVar0 /*23*/], uParam0->f_159, uParam0->f_160);
					}
					else
					{
						iVar13 = "Stat2";
						fVar14 = func_330((*uParam1)[iVar0 /*23*/], uParam0->f_159);
					}
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), iVar13, MISC::_0x2B6846401D68E563(fVar14, 0));
				}
				else if ((!MISC::IS_BIT_SET(uParam0->f_159, 3) && !func_321(uParam0->f_159)) && !func_337(uParam0->f_159))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat2", MISC::_0x2B6846401D68E563(func_330((*uParam1)[iVar0 /*23*/], uParam0->f_159), func_336(uParam0, 2)));
				}
				if (!MISC::IS_BIT_SET(uParam0->f_159, 3))
				{
					if (MISC::IS_BIT_SET(uParam0->f_160, 0))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat3", "-");
					}
					else if (MISC::IS_BIT_SET(uParam0->f_159, 9))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat3", func_338(func_331((*uParam1)[iVar0 /*23*/], uParam0->f_159, uParam0->f_160)));
					}
					else if (MISC::IS_BIT_SET(uParam0->f_159, 10))
					{
						fVar4 = func_331((*uParam1)[iVar0 /*23*/], uParam0->f_159, uParam0->f_160);
						if (fVar4 >= 0f)
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat3", func_269(BUILTIN::FLOOR(fVar4), 1, 2, 0, 0, 0));
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat3", MISC::_CREATE_VAR_STRING(2, "FM_POSSE_RACE_LEADERBOARD_DNF"));
						}
					}
					else if (MISC::IS_BIT_SET(uParam0->f_159, 21))
					{
						iVar2 = BUILTIN::ROUND(func_331((*uParam1)[iVar0 /*23*/], uParam0->f_159, uParam0->f_160));
						sVar5 = " ";
						sVar5 = func_226(iVar2, uParam0->f_159, 0);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat3", sVar5);
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat3", MISC::_0x2B6846401D68E563(func_331((*uParam1)[iVar0 /*23*/], uParam0->f_159, uParam0->f_160), func_336(uParam0, 3)));
					}
				}
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "isHighlighted", bVar8);
				if (bVar8)
				{
				}
				if (bParam4 && ((*uParam1)[iVar0 /*23*/])->f_13)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Blip", "BLIP_MVP");
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "BlipColor", -1777836132);
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "BlipColor", iVar9);
				}
			}
			iVar0++;
		}
		uParam0->f_149 = iVar1;
	}
}

void func_293(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		(*uParam1)[iVar0] = uParam0[iVar0];
		iVar0++;
	}
	if (!bParam3)
	{
		if (iParam2 < 8 && uParam1[7] != -1)
		{
			(*uParam1)[(iParam2 - 1)] = uParam1[7];
			(*uParam1)[7] = -1;
		}
	}
}

void func_294(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam1 == uParam2[iVar0])
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

void func_295(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4)
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

void func_296(var uParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_203(&(((*uParam0)[iVar1 /*23*/])->f_14)))
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

void func_297(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
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
		cVar5 = { func_339(iVar0) };
		fVar2 = 0f;
		fVar3 = 0f;
		fVar4 = 0f;
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			if (iVar0 == uParam1[iVar1 /*23*/] && func_203(&(((*uParam1)[iVar1 /*23*/])->f_14)))
			{
				if (MISC::IS_BIT_SET(uParam0->f_159, 19))
				{
					if (((*uParam1)[iVar1 /*23*/])->f_6 != -1f && fVar2 == 0f)
					{
						fVar2 = (fVar2 + ((*uParam1)[iVar1 /*23*/])->f_6);
					}
					if (((*uParam1)[iVar1 /*23*/])->f_1 != -1f)
					{
						fVar3 = (fVar3 + ((*uParam1)[iVar1 /*23*/])->f_1);
					}
					if (((*uParam1)[iVar1 /*23*/])->f_5 != -1f)
					{
						fVar4 = (fVar4 + ((*uParam1)[iVar1 /*23*/])->f_5);
					}
				}
				else
				{
					if (((*uParam1)[iVar1 /*23*/])->f_1 != -1f)
					{
						fVar2 = (fVar2 + ((*uParam1)[iVar1 /*23*/])->f_1);
					}
					if (((*uParam1)[iVar1 /*23*/])->f_2 != -1f)
					{
						fVar3 = (fVar3 + ((*uParam1)[iVar1 /*23*/])->f_2);
					}
					if (((*uParam1)[iVar1 /*23*/])->f_5 != -1f)
					{
						fVar4 = (fVar4 + ((*uParam1)[iVar1 /*23*/])->f_5);
					}
				}
			}
			iVar1++;
		}
		if (!MISC::IS_BIT_SET(uParam0->f_159, 19))
		{
			if (MISC::IS_BIT_SET(uParam0->f_159, 25) || MISC::IS_BIT_SET(uParam0->f_159, 23))
			{
				if (func_340() == 0)
				{
					fVar4 = BUILTIN::TO_FLOAT(Global_1050928[iVar0]);
				}
			}
		}
		iVar13 = func_341(iVar0, iParam2, iParam3, bParam4, iParam2 == iVar0);
		DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_3[iVar0]), "HeadingColor", iVar13);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_3[iVar0]), "Heading", &cVar5);
		if (MISC::IS_BIT_SET(uParam0->f_159, 6))
		{
			DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_3[iVar0]), "Stat3Color", iVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_3[iVar0]), "Stat3", MISC::_0x2B6846401D68E563(fVar4, uParam0->f_151));
		}
		else if (func_334(uParam0->f_159))
		{
			DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_3[iVar0]), "Stat2Color", iVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_3[iVar0]), "Stat2", MISC::_0x2B6846401D68E563(fVar2, uParam0->f_151));
			fVar14 = fVar3;
			if (MISC::IS_BIT_SET(uParam0->f_159, 17))
			{
				fVar14 = fVar4;
			}
			DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_3[iVar0]), "Stat3Color", iVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_3[iVar0]), "Stat3", MISC::_0x2B6846401D68E563(fVar14, uParam0->f_151));
		}
		else if (func_321(uParam0->f_159))
		{
			DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_3[iVar0]), "Stat3Color", iVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_3[iVar0]), "Stat3", MISC::_0x2B6846401D68E563(fVar4, uParam0->f_151));
		}
		else
		{
			DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_3[iVar0]), "Stat1Color", iVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_3[iVar0]), "Stat1", MISC::_0x2B6846401D68E563(fVar2, uParam0->f_151));
			DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_3[iVar0]), "Stat2Color", iVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_3[iVar0]), "Stat2", MISC::_0x2B6846401D68E563(fVar3, uParam0->f_151));
			DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_3[iVar0]), "Stat3Color", iVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_3[iVar0]), "Stat3", MISC::_0x2B6846401D68E563(fVar4, uParam0->f_151));
		}
		iVar0++;
	}
}

bool func_298(int iParam0)
{
	return SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_19683.f_260), iParam0);
}

void func_299(int iParam0)
{
	iLocal_391 = iParam0;
}

int func_300()
{
	return Global_1132968->f_5808.f_325;
}

int func_301(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar10;
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
	iVar2 = func_342(iParam1, iParam2);
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
					uVar10 = func_343(iParam2);
					iVar1 = NETWORK::_LOCAL_PLAYER_PEDSHOT_TEXTURE_DOWNLOAD_REQUEST(iParam1, uVar10);
					if (iVar1 == -1)
					{
						return 3;
					}
					else if (iVar1 == 0)
					{
						func_344(iParam1, iParam2, 0);
						return 1;
					}
					func_345(iParam1, iParam2, iVar1);
					func_344(iParam1, iParam2, 3);
					break;
				case 3:
					iVar1 = func_346(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_344(iParam1, iParam2, 0);
						return 1;
					}
					iVar11 = NETWORK::_GET_STATUS_OF_TEXTURE_DOWNLOAD(iVar1);
					switch (iVar11)
					{
						case 0:
							func_344(iParam1, iParam2, 4);
							return 3;
						case 1:
							return 3;
						case 2:
							func_344(iParam1, iParam2, 0);
							return 1;
						default:
							break;
					}
					break;
				case 4:
					iVar1 = func_346(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_344(iParam1, iParam2, 0);
						return 1;
					}
					sVar12 = NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1);
					if (MISC::_0x375F5870A7B8BEC1(sVar12))
					{
						return 3;
					}
					func_344(iParam1, iParam2, 5);
					break;
				case 5:
					iVar1 = func_346(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_344(iParam1, iParam2, 0);
						return 1;
					}
					StringCopy(sParam0, NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1), 128);
					return 4;
			}
			break;
	}
	return 3;
}

void func_302(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	iVar1 = func_342(iParam0, iParam1);
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
			func_345(iParam0, iParam1, 0);
			func_344(iParam0, iParam1, 0);
		case 3:
		case 4:
		case 5:
			iVar2 = func_346(iParam0, iParam1);
			if (iVar2 != 0)
			{
				NETWORK::TEXTURE_DOWNLOAD_RELEASE(iVar2);
			}
			func_344(iParam0, iParam1, 0);
			break;
	}
}

int func_303(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (iParam2 > 1)
	{
		if (bParam3)
		{
			switch (iParam0)
			{
				case 0:
					return -275684858;
				case 1:
					return -1561147190;
				case 2:
					return -736318691;
				case 3:
					return 158864851;
				case 4:
					return 923463928;
				case 5:
					return -317694716;
				case 6:
					return 461388259;
				case 7:
					return 1811916478;
				default:
					break;
			}
			return joaat("COLOR_WHITE");
		}
		if (iParam1 == iParam0)
		{
			return 1765299542;
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
			return 1765299542;
		}
	}
	return -1031763995;
}

int func_304(int iParam0, bool bParam1, int iParam2, bool bParam3)
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
			return 636925055;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 636925055;
	}
	iVar2 = iParam0;
	if (func_348(func_347(0)) && func_349(func_347(0)) == 7)
	{
		bVar0 = true;
		iVar3 = 11;
		iVar4 = (iVar3 / 32);
		iVar5 = (iVar3 - iVar4 * 32);
		bVar1 = MISC::IS_BIT_SET(&(Global_3145858->f_6[iVar4]), iVar5);
	}
	if ((Global_1070356->f_19683.f_1[iVar2 /*8*/])->f_5 != 0)
	{
		return (Global_1070356->f_19683.f_1[iVar2 /*8*/])->f_5;
	}
	if (bParam3 && (Global_1070356->f_19683.f_1[iVar2 /*8*/])->f_6 != 0)
	{
		return (Global_1070356->f_19683.f_1[iVar2 /*8*/])->f_6;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (bVar0 && bVar1)
		{
			iVar6 = func_350(iParam0);
			if (iVar6 == -1031763995 && NETWORK::_NETWORK_IS_PLAYER_IN_SPECTATOR_MODE(iParam0))
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
			return func_351(iParam0);
		}
	}
	if (iVar2 < 0 || iVar2 >= 32)
	{
		return 0;
	}
	if (func_352((Global_1070356->f_19683.f_1[iVar2 /*8*/])->f_7, 1024))
	{
		return -508184943;
	}
	iVar7 = func_353(iParam0, 1);
	if (!bVar0)
	{
		if (func_354(iParam0, bParam1))
		{
			return func_351(iParam0);
		}
		else if (func_355(iParam0, bParam1))
		{
			if (func_356(iParam0, bParam1))
			{
				return 1891514641;
			}
			else
			{
				if (iVar7 > 5)
				{
					return -437407570;
				}
				else if (iVar7 > 3)
				{
					return -437407570;
				}
				else if (iVar7 > 1)
				{
					return 1201428499;
				}
				return 63157909;
			}
		}
	}
	else if (bVar1)
	{
		return func_350(iParam0);
	}
	else if (func_354(iParam0, bParam1))
	{
		if (PLAYER::PLAYER_ID() == iParam0)
		{
			return joaat("COLOR_WHITE");
		}
		else if (func_358(func_357(func_347(0)), 1) == 395262693)
		{
			return func_351(iParam0);
		}
		else
		{
			return func_351(iParam0);
		}
	}
	else if (func_355(iParam0, bParam1))
	{
		return 1891514641;
	}
	return 830499243;
}

char* func_305(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_306(int iParam0, int iParam1, int iParam2)
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

bool func_307(int iParam0)
{
	return func_359((Global_3145858->f_42116[iParam0 /*18*/])->f_17, 0);
}

void func_308(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_41(iParam0);
	if (!func_223(1))
	{
		return;
	}
	if (bParam1)
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_222(128) && !func_245(18))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_283() == 4)
	{
		func_128(17);
	}
	func_43(1024);
}

void func_309(vector3 vParam0)
{
	if (Global_1132968->f_5808.f_325 >= 50)
	{
		return;
	}
	if (vParam0.x == -1)
	{
		return;
	}
	*(Global_1132968->f_5808.f_326[Global_1132968->f_5808.f_324 /*3*/]) = { vParam0 };
	Global_1132968->f_5808.f_324 = (Global_1132968->f_5808.f_324 + 1 % 50);
	Global_1132968->f_5808.f_325++;
}

void func_310(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 182;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 3, &uParam1);
}

void func_311(int iParam0)
{
	if (!STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		func_184(iParam0);
	}
}

void func_312(int iParam0)
{
	if (STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		func_169(iParam0);
	}
}

void func_313(char* sParam0)
{
	if (!PATHFIND::_0x5AC0944C156E5F44(sParam0))
	{
		PATHFIND::_0x7C334FF4D9215912(sParam0);
	}
}

void func_314(char* sParam0)
{
	if (PATHFIND::_0x5AC0944C156E5F44(sParam0))
	{
		PATHFIND::_0x527B97C203BB8606(sParam0);
	}
}

void func_315(int iParam0)
{
	if (!GRAPHICS::_0xDE9BAD3292AA6D5E(iParam0))
	{
		GRAPHICS::_0xDFEA23EC90113657(iParam0);
	}
}

void func_316(int iParam0)
{
	if (GRAPHICS::_0xDE9BAD3292AA6D5E(iParam0))
	{
		GRAPHICS::_0xDD0BC0EDCB2162F6(iParam0);
	}
}

char* func_317(int iParam0, int iParam1)
{
	if (func_73())
	{
		return func_360(0);
	}
	else if ((MISC::IS_BIT_SET(iParam0, 0) || MISC::IS_BIT_SET(iParam0, 17)) || MISC::IS_BIT_SET(iParam0, 18))
	{
		return "";
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

char* func_318(int iParam0, int iParam1)
{
	if (func_73())
	{
		return func_360(1);
	}
	else if (func_321(iParam0) || func_337(iParam0))
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
			return func_361(iParam0);
		}
	}
	else if (func_334(iParam0) || MISC::IS_BIT_SET(iParam0, 19))
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

char* func_319(int iParam0, int iParam1)
{
	if (func_73())
	{
		return func_360(2);
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
	else if (MISC::IS_BIT_SET(iParam0, 6))
	{
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
		return func_361(iParam0);
	}
	else if ((MISC::IS_BIT_SET(iParam0, 0) && !MISC::IS_BIT_SET(iParam0, 17)) && !func_337(iParam0))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_DEATHS");
	}
	else if (func_321(iParam0) && !func_337(iParam0))
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

char* func_320()
{
	if (func_73())
	{
		return func_360(3);
	}
	return "";
}

bool func_321(int iParam0)
{
	return (MISC::IS_BIT_SET(iParam0, 0) && MISC::IS_BIT_SET(iParam0, 17));
}

void func_322(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
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
	bVar16 = ((*Global_1049264)[0 /*2*/])->f_1 == -1128715836;
	bVar17 = ((*Global_1049264)[0 /*2*/])->f_1 == 1691389412;
	bVar18 = ((*Global_1049264)[0 /*2*/])->f_1 == 2105734739;
	iVar2 = 0;
	while (iVar2 <= 4)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar2]), "Position", "");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar2]), "Gamertag", "");
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_143[iVar2]), "GamertagColor", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar2]), "StatPriority", "");
		iVar2++;
	}
	bVar19 = MISC::IS_BIT_SET(uParam0->f_159, 6);
	if (bVar16 && uParam0->f_150 > 0)
	{
		bVar20 = MISC::IS_BIT_SET(uParam0->f_159, 5);
		if ((bVar17 || bVar18) && func_340() == 0)
		{
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				fVar21[iVar0] = BUILTIN::TO_FLOAT(Global_1050928[iVar0]);
				iVar0++;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if (uParam1[iVar0 /*23*/] != -1 && uParam1[iVar0 /*23*/] < 8)
				{
					if (func_362((*uParam1)[iVar0 /*23*/], 0) != -1f)
					{
						fVar21[uParam1[iVar0 /*23*/]] = (&fVar21[uParam1[iVar0 /*23*/]] + func_362((*uParam1)[iVar0 /*23*/], 0));
					}
				}
				iVar0++;
			}
		}
		iVar5 = uParam0->f_150;
		func_293(uParam2, &uVar30, uParam0->f_150, bVar19);
		func_294(uParam0, iParam3, &uVar30, &iVar4, &iVar5);
		iVar2 = 0;
		while (iVar2 <= (iVar5 - 1))
		{
			iVar39 = &uVar30[iVar2];
			if (iVar2 == 0 || iVar2 >= iVar4)
			{
				if (iVar39 < 8 && iVar39 != -1)
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar15, iVar2 + 1, 8);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "Position", &cVar15);
						Var7 = { func_339(iVar39) };
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "Gamertag", &Var7);
						iVar40 = func_341(iVar39, iParam4, uParam0->f_150, bVar20, iParam4 == iVar39);
						DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_143[iVar3]), "GamertagColor", iVar40);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "StatPriority", MISC::_0x2B6846401D68E563(&(fVar21[iVar39]), uParam0->f_151));
					}
				}
			}
			iVar2++;
		}
	}
	else
	{
		func_296(uParam1, iParam3, &iVar4, &iVar5);
		iVar1 = 0;
		while (iVar1 <= iVar5)
		{
			if (iVar3 == 0 || iVar1 >= iVar4)
			{
				if (func_203(&(((*uParam1)[iVar1 /*23*/])->f_14)))
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar15, iVar1 + 1, 8);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "Position", &cVar15);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "Gamertag", &(((*uParam1)[iVar1 /*23*/])->f_14.f_1));
						bVar41 = iVar6 == ((*uParam1)[iVar1 /*23*/])->f_14;
						iVar42 = func_264(uParam0, uParam1, iVar1, iVar6, bVar41);
						DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_143[iVar3]), "GamertagColor", iVar42);
						sVar43 = "";
						sVar43 = MISC::_0x2B6846401D68E563(func_362((*uParam1)[iVar1 /*23*/], 0), 0);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "StatPriority", sVar43);
					}
				}
			}
			iVar1++;
		}
	}
}

int func_323(var uParam0, int iParam1)
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
		else if (uParam0[iParam1 /*23*/] == uParam0[iVar0 /*23*/] && func_203(&(((*uParam0)[iVar0 /*23*/])->f_14)))
		{
			iVar1++;
		}
		iVar0++;
	}
	return -1;
}

void func_324(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	switch (((*uParam1)[iParam2 /*23*/])->f_10)
	{
		case 1:
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iParam2]), "SetOverlayImg", 1);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iParam2]), "ShowOverlay", true);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iParam2]), "ShowCross", false);
			break;
		case 2:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iParam2]), "ShowCross", true);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iParam2]), "ShowOverlay", false);
			break;
		default:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iParam2]), "ShowCross", false);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iParam2]), "ShowOverlay", false);
			break;
	}
	if (bParam3)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(&(uParam0->f_12[iParam2]), "CrossColor", iParam4);
	}
}

char* func_325()
{
	return "RSN";
}

char* func_326(int iParam0)
{
	if (iParam0 >= 32 || iParam0 < 0)
	{
		return "-";
	}
	return MISC::_CREATE_VAR_STRING(2, "NUMBER", Global_1139395[iParam0 /*34*/]);
}

bool func_327(int iParam0)
{
	int iVar0;

	iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(func_363()));
	return iParam0 == iVar0;
}

char* func_328(int iParam0)
{
	if (iParam0 != 0)
	{
		return STATS::_0xB112B9262EC29C20(1852874750, iParam0);
	}
	return "";
}

float func_329(var uParam0, int iParam1)
{
	if (func_73())
	{
		return func_364(uParam0, 0);
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

float func_330(var uParam0, int iParam1)
{
	if (func_73())
	{
		func_364(uParam0, 1);
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
	else if (func_334(iParam1) || MISC::IS_BIT_SET(iParam1, 19))
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

var func_331(var uParam0, int iParam1, int iParam2)
{
	if (func_73())
	{
		func_364(uParam0, 2);
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
	else if (func_321(iParam1))
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

float func_332(var uParam0)
{
	if (func_73())
	{
		func_364(uParam0, 3);
	}
	return -1f;
}

void func_333(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
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
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar2]), "Position", "");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar2]), "Gamertag", "");
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_143[iVar2]), "GamertagColor", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar2]), "StatPriority", "");
		iVar2++;
	}
	bVar23 = MISC::IS_BIT_SET(uParam0->f_159, 6);
	if (bVar12 && uParam0->f_150 > 0)
	{
		bVar24 = MISC::IS_BIT_SET(uParam0->f_159, 5);
		if ((bVar10 || bVar8) && func_340() == 0)
		{
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				fVar25[iVar0] = BUILTIN::TO_FLOAT(Global_1050928[iVar0]);
				iVar0++;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if (uParam1[iVar0 /*23*/] != -1 && uParam1[iVar0 /*23*/] < 8)
				{
					if (bVar9)
					{
						if (((*uParam1)[iVar0 /*23*/])->f_1 != -1f)
						{
							fVar25[uParam1[iVar0 /*23*/]] = (&fVar25[uParam1[iVar0 /*23*/]] + ((*uParam1)[iVar0 /*23*/])->f_1);
						}
					}
					else if (bVar8)
					{
						if (((*uParam1)[iVar0 /*23*/])->f_5 != -1f)
						{
							fVar25[uParam1[iVar0 /*23*/]] = (&fVar25[uParam1[iVar0 /*23*/]] + ((*uParam1)[iVar0 /*23*/])->f_5);
						}
					}
					else if (bVar11)
					{
						if (((*uParam1)[iVar0 /*23*/])->f_8 != -1f)
						{
							fVar25[uParam1[iVar0 /*23*/]] = (&fVar25[uParam1[iVar0 /*23*/]] + ((*uParam1)[iVar0 /*23*/])->f_8);
						}
					}
					else if (((*uParam1)[iVar0 /*23*/])->f_1 != -1f)
					{
						fVar25[uParam1[iVar0 /*23*/]] = (&fVar25[uParam1[iVar0 /*23*/]] + ((*uParam1)[iVar0 /*23*/])->f_1);
					}
				}
				iVar0++;
			}
		}
		iVar6 = uParam0->f_150;
		func_293(uParam2, &uVar34, uParam0->f_150, bVar23);
		func_294(uParam0, iParam3, &uVar34, &iVar5, &iVar6);
		iVar2 = 0;
		while (iVar2 <= (iVar6 - 1))
		{
			iVar43 = &uVar34[iVar2];
			if (iVar2 == 0 || iVar2 >= iVar5)
			{
				if (iVar43 < 8 && iVar43 != -1)
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar22, iVar2 + 1, 8);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "Position", &cVar22);
						Var14 = { func_339(iVar43) };
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "Gamertag", &Var14);
						iVar44 = func_341(iVar43, iParam4, uParam0->f_150, bVar24, iParam4 == iVar43);
						DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_143[iVar3]), "GamertagColor", iVar44);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "StatPriority", MISC::_0x2B6846401D68E563(&(fVar25[iVar43]), uParam0->f_151));
					}
				}
			}
			iVar2++;
		}
	}
	else
	{
		func_296(uParam1, iParam3, &iVar5, &iVar6);
		iVar1 = 0;
		while (iVar1 <= iVar6)
		{
			if (iVar3 == 0 || iVar1 >= iVar5)
			{
				if (func_203(&(((*uParam1)[iVar1 /*23*/])->f_14)))
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar22, iVar1 + 1, 8);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "Position", &cVar22);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "Gamertag", &(((*uParam1)[iVar1 /*23*/])->f_14.f_1));
						bVar45 = iVar13 == ((*uParam1)[iVar1 /*23*/])->f_14;
						iVar46 = func_264(uParam0, uParam1, iVar1, iVar13, bVar45);
						DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_143[iVar3]), "GamertagColor", iVar46);
						sVar47 = "";
						if (bVar7)
						{
							if (MISC::IS_BIT_SET(uParam0->f_159, 26))
							{
								if (MISC::IS_BIT_SET(uParam0->f_159, 0))
								{
									sVar47 = MISC::_0x2B6846401D68E563(func_331((*uParam1)[iVar1 /*23*/], uParam0->f_159, uParam0->f_160), 0);
								}
								else
								{
									sVar47 = MISC::_0x2B6846401D68E563(func_330((*uParam1)[iVar1 /*23*/], uParam0->f_159), 0);
								}
							}
							else if (MISC::IS_BIT_SET(uParam0->f_159, 27))
							{
								iVar4 = BUILTIN::ROUND(func_329((*uParam1)[iVar1 /*23*/], uParam0->f_159));
								sVar47 = " ";
								if (func_335(iVar4))
								{
									iVar48 = uParam0->f_159;
									if (((*uParam1)[iVar1 /*23*/])->f_1 == 8.94E+07f)
									{
										MISC::CLEAR_BIT(&iVar48, 12);
									}
									sVar47 = func_226(iVar4, iVar48, 1);
								}
							}
							else
							{
								sVar47 = MISC::_0x2B6846401D68E563(func_329((*uParam1)[iVar1 /*23*/], uParam0->f_159), func_336(uParam0, 1));
							}
						}
						else if (bVar9)
						{
							sVar47 = MISC::_0x2B6846401D68E563(((*uParam1)[iVar1 /*23*/])->f_1, 0);
						}
						else if (bVar8 || bVar10)
						{
							if (MISC::IS_BIT_SET(uParam0->f_159, 9))
							{
								sVar47 = func_338(((*uParam1)[iVar1 /*23*/])->f_5);
							}
							else
							{
								sVar47 = MISC::_0x2B6846401D68E563(((*uParam1)[iVar1 /*23*/])->f_5, 0);
							}
						}
						else if (bVar11)
						{
							sVar47 = MISC::_0x2B6846401D68E563(((*uParam1)[iVar1 /*23*/])->f_8, 0);
						}
						else
						{
							sVar47 = MISC::_0x2B6846401D68E563(((*uParam1)[iVar1 /*23*/])->f_1, 0);
						}
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "StatPriority", sVar47);
					}
				}
			}
			iVar1++;
		}
	}
}

int func_334(int iParam0)
{
	if ((func_321(iParam0) || func_337(iParam0)) || MISC::IS_BIT_SET(iParam0, 18))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(iParam0, 0) || MISC::IS_BIT_SET(iParam0, 17))
	{
		return 1;
	}
	return 0;
}

int func_335(int iParam0)
{
	if ((iParam0 != 86400000 || iParam0 == 0) || iParam0 == BUILTIN::ROUND(-3f))
	{
		return 1;
	}
	return 0;
}

int func_336(var uParam0, int iParam1)
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

bool func_337(int iParam0)
{
	return (MISC::IS_BIT_SET(iParam0, 18) && MISC::IS_BIT_SET(iParam0, 17));
}

char* func_338(char* sParam0)
{
	return MISC::_CREATE_VAR_STRING(6, "FM_WEIGHT", sParam0);
}

struct<8> func_339(int iParam0)
{
	char cVar0[64];

	if (MISC::IS_STRING_NULL_OR_EMPTY((*Global_1050937)[iParam0 /*8*/]))
	{
		StringCopy(&cVar0, "TEAM_", 64);
		StringIntConCat(&cVar0, iParam0, 64);
		StringCopy(&cVar0, HUD::_GET_LABEL_TEXT(&cVar0), 64);
		return cVar0;
	}
	return *((*Global_1050937)[iParam0 /*8*/]);
}

int func_340()
{
	var uVar0;

	if (func_23(16))
	{
		uVar0 = Global_1050004->f_12;
	}
	else
	{
		uVar0 = func_365();
	}
	return uVar0;
}

int func_341(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	return func_303(iParam0, iParam1, iParam2, bParam3, bParam4);
}

int func_342(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	if (iParam1 <= -1)
	{
		return -1;
	}
	return &((Global_1132968->f_5808[iParam0 /*10*/])->f_5[iParam1]);
}

int func_343(int iParam0)
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

void func_344(int iParam0, int iParam1, int iParam2)
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
	(Global_1132968->f_5808[iParam0 /*10*/])->f_5[iParam1] = iParam2;
}

void func_345(int iParam0, int iParam1, int iParam2)
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
	(*Global_1132968->f_5808[iParam0 /*10*/])[iParam1] = iParam2;
}

int func_346(int iParam0, int iParam1)
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
	return Global_1132968->f_5808[iParam0 /*10*/][iParam1];
}

struct<2> func_347(int iParam0)
{
	return *(Global_1900718->f_1[iParam0 /*2*/]);
}

bool func_348(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_366(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_349(var uParam0, var uParam1)
{
	return uParam0;
}

int func_350(int iParam0)
{
	switch (PLAYER::GET_PLAYER_TEAM(iParam0))
	{
		case 0:
			return -275684858;
		case 1:
			return -1561147190;
		case 2:
			return -736318691;
		case 3:
			return 158864851;
		case 4:
			return 923463928;
		case 5:
			return -317694716;
		case 6:
			return 461388259;
		case 7:
			return 1811916478;
		case 8:
			return 1713937168;
		default:
			break;
	}
	return -1031763995;
}

int func_351(int iParam0)
{
	if (GANG::_0x901E0DC25080C8B9(iParam0) != Global_1275573->f_15 && !func_367())
	{
		return 636925055;
	}
	return -963477619;
}

bool func_352(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_353(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = BUILTIN::FLOOR(func_368(iParam0, bParam1));
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

int func_354(int iParam0, bool bParam1)
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
	else if (GANG::_0x81FB74C83C2ED69F(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_355(int iParam0, bool bParam1)
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
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26835), iVar0))
		{
			return false;
		}
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26836), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26834), iVar0))
		{
			return true;
		}
	}
	if (func_369(iParam0))
	{
		return true;
	}
	return !func_354(iParam0, 0);
}

int func_356(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 0;
	}
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (bParam1)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26835), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26836), iVar0))
		{
			return 0;
		}
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26834), iVar0))
		{
			return 1;
		}
	}
	if (func_370(iParam0))
	{
		return 0;
	}
	if (func_369(iParam0))
	{
		return 0;
	}
	if (func_371(iParam0))
	{
		return 1;
	}
	return func_372(iParam0);
}

int func_357(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_373(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_358(int iParam0, int iParam1)
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

bool func_359(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(iParam0, iParam1);
}

char* func_360(int iParam0)
{
	if (&Global_3145858->f_50919[iParam0 /*2*/] > -1)
	{
		if (func_307(&(Global_3145858->f_50919[iParam0 /*2*/])))
		{
			return MISC::_CREATE_VAR_STRING(2, Global_3145858->f_42116[&Global_3145858->f_50919[iParam0 /*2*/] /*18*/]);
		}
		return func_374(Global_3145858->f_42116[&Global_3145858->f_50919[iParam0 /*2*/] /*18*/]);
	}
	return "";
}

char* func_361(int iParam0)
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

float func_362(var uParam0, int iParam1)
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

var func_363()
{
	return Global_1099294->f_26.f_18;
}

float func_364(var uParam0, int iParam1)
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

int func_365()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_controller")) != 0)
	{
		return 0;
	}
	else if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-701235215) != 0)
	{
		return 1;
	}
	return 2;
}

int func_366(struct<2> Param0)
{
	int iVar0;

	if (!func_375(Param0))
	{
		return -1;
	}
	iVar0 = func_376(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1070356->f_17817.f_1[iVar0 /*3*/])->f_2;
}

int func_367()
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
	if (!func_375(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

float func_368(int iParam0, bool bParam1)
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
	if ((GANG::_0x149A2751AB66AC02(GANG::_0x901E0DC25080C8B9(iParam0)) > 1 && bParam1) && ((*Global_1097610)[iVar0 /*51*/])->f_18 >= ((*Global_1097610)[iVar0 /*51*/])->f_45)
	{
		return ((*Global_1097610)[iVar0 /*51*/])->f_18;
	}
	return ((*Global_1097610)[iVar0 /*51*/])->f_45;
}

int func_369(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26833), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_370(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_371(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26831), iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_372(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		func_377(iParam0);
		return false;
	}
	if (func_371(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) != 2)
		{
			func_378(iParam0, 5, 1, 1, 0, 0);
		}
		return true;
	}
	return (NETWORK::_0x862C5040F4888741(Global_1275573->f_10, iParam0) || NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) == 2);
}

int func_373(struct<2> Param0, var uParam2)
{
	if (!func_375(Param0))
	{
		return 0;
	}
	func_379(uParam2);
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

var func_374(var uParam0)
{
	return uParam0;
}

int func_375(struct<2> Param0)
{
	if (!func_380(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_381(Param0))
	{
		return 0;
	}
	return 1;
}

int func_376(struct<2> Param0)
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
	if (!func_373(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1070356->f_17817 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_373(*(Global_1070356->f_17817.f_1[iVar8 /*3*/]), &vVar3);
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

void func_377(int iParam0)
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
	func_382(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 0;
}

void func_378(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	bool bVar5;
	struct<8> Var6;

	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (func_383(iVar0, iParam1, iParam5))
	{
		iVar1 = 1;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] != 2)
	{
		if (!&Global_1275573->f_22[iVar0])
		{
			func_377(iParam0);
			return;
		}
		NETWORK::_0x51951DE06C0D1C40(iParam0, 2);
		Global_1070356->f_19683.f_1[iVar0 /*8*/] = 2;
		iVar1 = 1;
	}
	if (iParam2 && iVar1)
	{
		iVar2 = 0;
		while (iVar2 <= 31)
		{
			iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (iVar2 != &Global_1275573 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
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
						func_378(iVar3, iParam1, 0, 1, 0, 0);
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
			func_384(&Var6, uVar4);
		}
	}
}

void func_379(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

int func_380(int iParam0)
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

int func_381(int iParam0)
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

void func_382(int iParam0)
{
	if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 != 0)
	{
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = 0;
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 = 0;
	}
}

int func_383(int iParam0, int iParam1, int iParam2)
{
	if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 < iParam1)
	{
		if (iParam2 != 0)
		{
			(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = iParam2;
		}
		else
		{
			(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = Global_1275573->f_21;
		}
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 = iParam1;
		return 1;
	}
	else if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 == iParam1)
	{
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = Global_1275573->f_21;
		return 1;
	}
	return 0;
}

void func_384(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 179;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 2, &uParam1);
	func_385(*uParam0);
}

void func_385(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
}

