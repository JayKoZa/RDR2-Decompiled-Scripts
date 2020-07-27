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
#endregion

void __EntryFunction__()
{
	bool bVar0;

	func_1();
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	NETWORK::NETWORK_SET_SCRIPT_READY_FOR_EVENTS(true);
	bVar0 = false;
	while (!bVar0)
	{
		if (func_2() == -1)
		{
			bVar0 = SCRIPTS::_0x9E4EF615E307FBBE();
		}
		else
		{
			bVar0 = func_3(1, 1);
		}
		func_4();
		BUILTIN::WAIT(0);
	}
	func_5();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	Global_25756.f_324[0 /*8*/] = 0.5f;
	(Global_25756.f_324[0 /*8*/])->f_1 = 0.085f;
	(Global_25756.f_324[0 /*8*/])->f_2 = 0.9f;
	(Global_25756.f_324[0 /*8*/])->f_3 = 0.12f;
	Global_25756.f_324[1 /*8*/] = 0.5f;
	(Global_25756.f_324[1 /*8*/])->f_1 = 0.16f;
	(Global_25756.f_324[1 /*8*/])->f_2 = 0.9f;
	(Global_25756.f_324[1 /*8*/])->f_3 = 0.03f;
	(Global_25756.f_324[1 /*8*/])->f_4 = 100;
	(Global_25756.f_324[1 /*8*/])->f_5 = 60;
	(Global_25756.f_324[1 /*8*/])->f_6 = 58;
	(Global_25756.f_324[1 /*8*/])->f_7 = 200;
	Global_25756.f_197[0 /*21*/] = 1;
	(Global_25756.f_197[0 /*21*/])->f_3 = 0.5f;
	(Global_25756.f_197[0 /*21*/])->f_4 = 0.03f;
	(Global_25756.f_197[0 /*21*/])->f_1 = 0.1f;
	(Global_25756.f_197[0 /*21*/])->f_2 = 0.5f;
	Global_25756.f_197[1 /*21*/] = 1;
	(Global_25756.f_197[1 /*21*/])->f_3 = 0.5f;
	(Global_25756.f_197[1 /*21*/])->f_4 = 0.065f;
	(Global_25756.f_197[1 /*21*/])->f_1 = 0.1f;
	(Global_25756.f_197[1 /*21*/])->f_2 = 0.5f;
	Global_25756.f_197[2 /*21*/] = 1;
	(Global_25756.f_197[2 /*21*/])->f_3 = 0.5f;
	(Global_25756.f_197[2 /*21*/])->f_4 = 0.1f;
	(Global_25756.f_197[2 /*21*/])->f_1 = 0.1f;
	(Global_25756.f_197[2 /*21*/])->f_2 = 0.5f;
	Global_25756.f_197[3 /*21*/] = 1;
	(Global_25756.f_197[3 /*21*/])->f_3 = 0.89f;
	(Global_25756.f_197[3 /*21*/])->f_4 = 0.03f;
	(Global_25756.f_197[3 /*21*/])->f_1 = 0f;
	(Global_25756.f_197[3 /*21*/])->f_2 = 0.294f;
	StringCopy(&((Global_25756.f_197[3 /*21*/])->f_5), "Ctrl + Num8 - Show/Hide", 128);
	Global_25756.f_197[4 /*21*/] = 1;
	(Global_25756.f_197[4 /*21*/])->f_3 = 0.088f;
	(Global_25756.f_197[4 /*21*/])->f_4 = 0.03f;
	(Global_25756.f_197[4 /*21*/])->f_1 = 0f;
	(Global_25756.f_197[4 /*21*/])->f_2 = 0.294f;
	Global_25756.f_197[5 /*21*/] = 1;
	(Global_25756.f_197[5 /*21*/])->f_3 = 0.5f;
	(Global_25756.f_197[5 /*21*/])->f_4 = 0.148f;
	(Global_25756.f_197[5 /*21*/])->f_1 = 0.1f;
	(Global_25756.f_197[5 /*21*/])->f_2 = 0.3f;
	StringCopy(&((Global_25756.f_197[5 /*21*/])->f_5), "Critical error detected, this might cause unexpected behaviour. Please restart the game.", 128);
}

int func_2()
{
	return Global_1572887->f_13;
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

void func_4()
{
	func_6();
	if (func_7())
	{
		if (Global_25756.f_196)
		{
			Global_25756.f_192 = 1;
		}
		else
		{
			Global_25756.f_192 = func_8() > 1;
		}
		Global_25756.f_193 = func_9();
		Global_25756.f_194 = func_9();
	}
	else
	{
		Global_25756.f_196 = 0;
		Global_25756.f_192 = Global_25756.f_195;
		Global_25756.f_194 = Global_25756.f_195;
		Global_25756.f_193 = Global_25756.f_195;
		return;
	}
	func_10(1);
	func_11(Global_25756.f_1[0 /*19*/]);
	func_12();
	func_10(0);
}

void func_5()
{
	func_10(0);
}

void func_6()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < SCRIPTS::GET_NUMBER_OF_EVENTS(4))
	{
		iVar2 = SCRIPTS::GET_EVENT_AT_INDEX(4, iVar1);
		if (SCRIPTS::GET_EVENT_DATA(4, iVar1, &iVar0, 1))
		{
			if (func_13(iVar0, iVar2))
			{
			}
		}
		iVar1++;
	}
}

bool func_7()
{
	return Global_25756.f_195;
}

int func_8()
{
	return Global_25756;
}

bool func_9()
{
	return (Global_25756.f_1[0 /*19*/])->f_17 != 0;
}

void func_10(bool bParam0)
{
	if (bParam0)
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
	}
	else
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	}
}

void func_11(char* sParam0)
{
	float fVar0;
	float fVar1;

	if (!Global_25756.f_193)
	{
		return;
	}
	fVar0 = (IntToFloat(MISC::GET_GAME_TIMER()) / 1000f);
	fVar1 = ((0.5f * BUILTIN::SIN((250f * (fVar0 - 0f)))) + 0.5f);
	(Global_25756.f_324[0 /*8*/])->f_4 = BUILTIN::FLOOR(func_14(200f, 100f, fVar1));
	(Global_25756.f_324[0 /*8*/])->f_5 = BUILTIN::FLOOR(func_14(4f, 60f, fVar1));
	(Global_25756.f_324[0 /*8*/])->f_6 = BUILTIN::FLOOR(func_14(0f, 58f, fVar1));
	(Global_25756.f_324[0 /*8*/])->f_7 = BUILTIN::FLOOR(func_14(200f, 200f, fVar1));
	func_15(Global_25756.f_324[0 /*8*/]);
	StringCopy(&((Global_25756.f_197[0 /*21*/])->f_5), "Script: '", 128);
	StringConCat(&((Global_25756.f_197[0 /*21*/])->f_5), sParam0, 128);
	StringConCat(&((Global_25756.f_197[0 /*21*/])->f_5), "'", 128);
	func_16(Global_25756.f_197[0 /*21*/]);
	StringCopy(&((Global_25756.f_197[1 /*21*/])->f_5), func_17(sParam0->f_17), 128);
	func_16(Global_25756.f_197[1 /*21*/]);
	StringCopy(&((Global_25756.f_197[2 /*21*/])->f_5), "Frame: ", 128);
	StringIntConCat(&((Global_25756.f_197[2 /*21*/])->f_5), sParam0->f_18, 128);
	func_16(Global_25756.f_197[2 /*21*/]);
	StringCopy(&((Global_25756.f_197[4 /*21*/])->f_5), "Error Count: ", 128);
	StringIntConCat(&((Global_25756.f_197[4 /*21*/])->f_5), func_8(), 128);
	func_16(Global_25756.f_197[4 /*21*/]);
}

void func_12()
{
	if (!Global_25756.f_194)
	{
		return;
	}
	func_15(Global_25756.f_324[1 /*8*/]);
	func_16(Global_25756.f_197[5 /*21*/]);
}

int func_13(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 9;
	while (iVar0 >= 0)
	{
		if (iVar0 == 0)
		{
			StringCopy(Global_25756.f_1[iVar0 /*19*/], func_18(iParam0), 128);
			(Global_25756.f_1[iVar0 /*19*/])->f_16 = iParam0;
			(Global_25756.f_1[iVar0 /*19*/])->f_17 = iParam1;
			(Global_25756.f_1[iVar0 /*19*/])->f_18 = MISC::GET_FRAME_COUNT();
		}
		iVar1 = (iVar0 - 1);
		if (iVar1 < 0)
		{
		}
		else
		{
			MISC::_COPY_MEMORY(Global_25756.f_1[iVar0 /*19*/], Global_25756.f_1[iVar1 /*19*/], 19);
		}
		iVar0 = (iVar0 + -1);
	}
	Global_25756++;
	return 1;
}

float func_14(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

void func_15(var uParam0)
{
	GRAPHICS::DRAW_RECT(*uParam0, uParam0->f_1, uParam0->f_2, uParam0->f_3, uParam0->f_4, uParam0->f_5, uParam0->f_6, uParam0->f_7, false, true);
}

void func_16(var uParam0)
{
	if (*uParam0)
	{
		HUD::SET_TEXT_CENTRE(true);
	}
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 255);
	HUD::SET_TEXT_SCALE(uParam0->f_1, uParam0->f_2);
	func_19(uParam0->f_3, uParam0->f_4, "STRING", &(uParam0->f_5));
}

char* func_17(int iParam0)
{
	switch (iParam0)
	{
		case -921472336:
			return "UNKNOWN ERROR";
		case -992702923:
			return "ARRAY OVERRUN";
		case 397004310:
			return "INSTRUCTION LIMIT";
		case 2004694700:
			return "STACK OVERFLOW";
		case -1009774763:
			return "GLOBAL BLOCK INACCESSIBLE";
		case 1028822748:
			return "GLOBAL BLOCK NOT RESIDENT";
		default:
			break;
	}
	return func_18(iParam0);
}

var func_18(int iParam0)
{
	return MISC::_0x2B6846401D68E563(BUILTIN::TO_FLOAT(iParam0), 0);
}

void func_19(float fParam0, float fParam1, char* sParam2, char* sParam3)
{
	HUD::_DISPLAY_TEXT(MISC::_CREATE_VAR_STRING(10, "VAR_STRING_1", func_20(sParam3, joaat("COLOR_PURE_WHITE"))), fParam0, fParam1);
}

char* func_20(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_21(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

char* func_21(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

