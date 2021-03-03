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
	struct<66> Local_18 = { 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0 } ;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = -1;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 1097859072;
	var uLocal_102 = 1000;
	var uLocal_103 = 500;
	var uLocal_104 = 1067450368;
	var uLocal_105 = 5000;
	var uLocal_106 = 42;
	var uLocal_107 = 1103626240;
	var uLocal_108 = 1077936128;
	var uLocal_109 = 1106247680;
	var uLocal_110 = 1103101952;
	var uLocal_111 = 1109393408;
	var uLocal_112 = 1097859072;
	var uLocal_113 = 1103626240;
	var uLocal_114 = 1067450368;
	var uLocal_115 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion

void __EntryFunction__()
{
	struct<189> Var0;

	fLocal_16 = 1f;
	fLocal_17 = 1f;
	Var0.f_1 = -1;
	Var0.f_12 = 24;
	Var0.f_114 = joaat("INPUT_CONTEXT_Y");
	Var0.f_125 = 2;
	Var0.f_125.f_1.f_2 = 570;
	Var0.f_125.f_1.f_3 = 1065353216;
	Var0.f_125.f_1.f_4 = -1082130432;
	Var0.f_125.f_1.f_9 = 2;
	Var0.f_125.f_1.f_17.f_2 = 570;
	Var0.f_125.f_1.f_17.f_3 = 1065353216;
	Var0.f_125.f_1.f_17.f_4 = -1082130432;
	Var0.f_125.f_1.f_17.f_9 = 2;
	Var0.f_160.f_1 = -1;
	Var0.f_160.f_3 = -1;
	Var0.f_160.f_6 = -1;
	Var0.f_160.f_12 = 1073741824;
	Var0.f_160.f_16 = 1;
	Var0.f_181 = 1;
	Var0.f_1 = vScriptParam_0.y;
	Var0.f_119 = vScriptParam_0.z;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1(&Var0);
	}
	Var0.f_188 = func_2();
	if (!func_3(&Var0))
	{
		func_1(&Var0);
	}
	while (!func_4(&Var0))
	{
		switch (Var0.f_11)
		{
			case 0:
				func_5(&Var0);
				Var0.f_11 = 1;
				break;
			case 1:
				if (func_6(&Var0))
				{
					Var0.f_11 = 2;
				}
				break;
			case 2:
				if (func_7(&Var0) && func_8(&Var0))
				{
					Var0.f_11 = 3;
				}
				break;
			case 3:
				if (func_9(&Var0, 0))
				{
					func_10(&Var0);
				}
				else
				{
					func_11(&Var0);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_182))
				{
					Var0.f_11 = 2;
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Var0);
}

void func_1(var uParam0)
{
	func_12(uParam0);
	if (func_13(uParam0->f_183))
	{
		func_14(&(uParam0->f_183), 1, 1);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_187))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_187));
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_6))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_6);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2()
{
	return Global_1893587.f_2;
}

bool func_3(var uParam0)
{
	uParam0->f_111 = "BUY_TICKET";
	uParam0->f_112 = "SHOW_GET_INFO";
	uParam0->f_9 = 1;
	uParam0->f_120 = 0;
	uParam0->f_184 = { 0f, 1f, 0f };
	uParam0->f_113 = "";
	uParam0->f_8 = 1;
	uParam0->f_124 = 3f;
	uParam0->f_2 = { func_15(uParam0->f_1) };
	Local_18.f_23 = uParam0->f_119;
	if (func_16(Local_18.f_23))
	{
		uParam0->f_7 = 1;
	}
	uParam0->f_122 = 0;
	uParam0->f_117 = func_17(uParam0->f_1);
	if (uParam0->f_117 >= 100)
	{
		uParam0->f_111 = "BUY_TICKET_DLR";
	}
	func_18(uParam0, 0);
	func_19(&(Local_18.f_43), &(Local_18.f_44), Local_18.f_23);
	switch (func_2())
	{
		case 5:
			uParam0->f_110 = "NBX_Bartender";
			break;
		case 40:
			uParam0->f_110 = "NBX_Bartender";
			break;
		case 81:
			uParam0->f_110 = "NBX_Bartender";
			break;
	}
	return true;
}

bool func_4(var uParam0)
{
	float fVar0;

	uParam0->f_189++;
	if (uParam0->f_189 < 10)
	{
		return false;
	}
	uParam0->f_189 = 0;
	if (func_2() != uParam0->f_188 || uParam0->f_188 == -1)
	{
		return true;
	}
	if (!uParam0->f_122 && func_20(0, 1, 1))
	{
		return true;
	}
	if (uParam0->f_11 == 4)
	{
		return true;
	}
	fVar0 = func_21(Global_34, uParam0->f_2, 1);
	if (fVar0 > 60f)
	{
		return true;
	}
	return false;
}

void func_5(var uParam0)
{
	PED::_0xF008E0BA1FE1D644(1);
	if (*uParam0 != 0)
	{
		STREAMING::REQUEST_MODEL(*uParam0, false);
	}
}

bool func_6(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (!STREAMING::HAS_MODEL_LOADED(*uParam0))
		{
			return false;
		}
	}
	if (uParam0->f_1 != -1)
	{
		if (!PERSCHAR::_0x800DF3FC913355F3(func_22(uParam0->f_1)))
		{
			return false;
		}
	}
	if (!func_23(uParam0))
	{
		return false;
	}
	return PED::_0x5E420FF293EE5472();
}

int func_7(var uParam0)
{
	int iVar0;

	func_24(uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_182))
	{
		if (*uParam0 != 0)
		{
			uParam0->f_182 = func_25(*uParam0, uParam0->f_2, uParam0->f_5, 1, 1, 0, 1, 1, 1, 0, 0);
		}
		else if (uParam0->f_1 != -1)
		{
			if (uParam0->f_9)
			{
				if (func_21(Global_34, uParam0->f_2, 1) < 100f)
				{
					if (!func_26(uParam0->f_1, 0, 0, 0, 0, 0))
					{
						return 0;
					}
				}
			}
			uParam0->f_182 = func_27(uParam0->f_1);
		}
		else
		{
			func_1(uParam0);
		}
		return 0;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_110))
	{
		func_28(&(uParam0->f_12), uParam0->f_182, uParam0->f_110, 0);
	}
	switch (uParam0->f_1)
	{
		case 3:
		case 70:
		case 250:
		case 277:
		case 278:
		case 342:
		case 466:
		case 503:
			func_18(uParam0, 0);
			break;
	}
	if (!func_9(uParam0, 0) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_111))
	{
		if (uParam0->f_117 > 0)
		{
			uParam0->f_183 = func_29("STRING", uParam0->f_114, uParam0->f_182, 1, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
			func_30(uParam0->f_183, uParam0->f_111, (BUILTIN::TO_FLOAT(uParam0->f_117) / 100f), 2, 1);
		}
		else
		{
			uParam0->f_183 = func_29(uParam0->f_111, uParam0->f_114, uParam0->f_182, 1, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
		}
		if (!func_31(uParam0->f_184))
		{
			func_32(uParam0->f_183, uParam0->f_184, 1);
		}
	}
	if (uParam0->f_120 != 0)
	{
		if (!uParam0->f_10)
		{
			if (!MAP::DOES_BLIP_EXIST(uParam0->f_187))
			{
				uParam0->f_187 = func_33(uParam0->f_182, uParam0->f_120, 1, 1);
			}
			if (uParam0->f_121 != 0)
			{
				MAP::SET_BLIP_SPRITE(uParam0->f_187, uParam0->f_121, true);
			}
		}
		else
		{
			if (!MAP::DOES_BLIP_EXIST(uParam0->f_187))
			{
				uParam0->f_187 = MAP::_BLIP_ADD_FOR_COORD(uParam0->f_120, uParam0->f_2);
			}
			if (uParam0->f_121 != 0)
			{
				MAP::SET_BLIP_SPRITE(uParam0->f_187, uParam0->f_121, true);
				iVar0 = func_34(uParam0->f_121);
				if (iVar0 != 0)
				{
					MAP::SET_BLIP_FLASH_TIMER(uParam0->f_187, iVar0, -1);
				}
			}
		}
	}
	if (uParam0->f_8 && !ENTITY::IS_ENTITY_DEAD(uParam0->f_182))
	{
		PED::_0xAE6004120C18DF97(uParam0->f_182, 0, 0);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_6))
	{
		if (func_9(uParam0, 0))
		{
			if (uParam0->f_124 > 0f)
			{
				uParam0->f_6 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(ENTITY::GET_ENTITY_COORDS(uParam0->f_182, false, false), 0f, 0f, 0f, uParam0->f_124, uParam0->f_124, 1.7f, "Interact_Ped - volProximityRng");
			}
			else
			{
				uParam0->f_6 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(ENTITY::GET_ENTITY_COORDS(uParam0->f_182, false, false), 0f, 0f, 0f, 5f, 5f, 1.7f, "Interact_Ped - volProximityRng");
			}
		}
		else
		{
			uParam0->f_6 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(ENTITY::GET_ENTITY_COORDS(uParam0->f_182, false, false), 0f, 0f, 0f, 3.5f, 3.5f, 1.7f, "Interact_Ped - volProximityRng");
		}
	}
	return 1;
}

int func_8(var uParam0)
{
	if (func_9(uParam0, 0))
	{
		if (uParam0->f_117 > 0)
		{
			if (uParam0->f_117 >= 100)
			{
				func_35(&(uParam0->f_125[0 /*17*/]), uParam0->f_111, BUILTIN::ROUND(BUILTIN::TO_FLOAT((uParam0->f_117 / 100))), 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1);
			}
			else
			{
				func_35(&(uParam0->f_125[0 /*17*/]), uParam0->f_111, uParam0->f_117, 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1);
			}
		}
		else
		{
			func_36(&(uParam0->f_125[0 /*17*/]), uParam0->f_111, 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		}
		if (uParam0->f_7)
		{
			func_36(&(uParam0->f_125[1 /*17*/]), uParam0->f_112, 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
		}
	}
	return 1;
}

bool func_9(var uParam0, int iParam1)
{
	return MISC::IS_BIT_SET(uParam0->f_118, iParam1);
}

int func_10(var uParam0)
{
	int iVar0;

	func_37(uParam0);
	if (uParam0->f_123 == 1)
	{
		return 0;
	}
	if (func_38(Global_34, uParam0->f_6, 0, 0))
	{
		func_39(uParam0);
	}
	else
	{
		func_40(uParam0);
	}
	if (uParam0->f_124 > 0f)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_182))
		{
			if ((func_41(Global_34, uParam0->f_182, 1, 1) > uParam0->f_124 || AUDIO::IS_ANY_SPEECH_PLAYING(Global_34)) || AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_182))
			{
				func_42(&(uParam0->f_125[0 /*17*/]));
				if (uParam0->f_7)
				{
					func_42(&(uParam0->f_125[1 /*17*/]));
				}
			}
			iVar0 = func_44(&(uParam0->f_182), &(uParam0->f_160), uParam0->f_124, &(uParam0->f_125), 0, 3, 1, uParam0->f_113, func_43(2, 0, 0), 0, 0, 2, uParam0->f_124);
		}
		else
		{
			iVar0 = -1;
		}
	}
	else
	{
		iVar0 = func_44(&(uParam0->f_182), &(uParam0->f_160), 5f, &(uParam0->f_125), 0, 3, 0, uParam0->f_113, func_43(2, 0, 0), 0, 0, 2, -1082130432 /* Float: -1f */);
	}
	switch (iVar0)
	{
		case 0:
			func_45(uParam0);
			return 1;
		case 1:
			func_46(uParam0);
			return 1;
	}
	return 0;
}

int func_11(var uParam0)
{
	func_37(uParam0);
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_6))
	{
		if (func_38(Global_34, uParam0->f_6, 1, 0))
		{
			func_39(uParam0);
		}
	}
	if (func_13(uParam0->f_183))
	{
		if (func_47(uParam0->f_183, 1))
		{
			func_45(uParam0);
			return 1;
		}
	}
	return 0;
}

void func_12(var uParam0)
{
	int iVar0;

	func_48(&(Local_18.f_10[0 /*3*/]), "IG2");
	func_48(&(Local_18.f_10[1 /*3*/]), "IG3");
	func_48(&(Local_18.f_10[2 /*3*/]), "IG4");
	func_49(&Local_18);
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (func_52(func_50(iVar0), func_51(Local_18.f_23)))
		{
			AUDIO::STOP_STREAM(AUDIO::_0x0556C784FA056628(func_50(iVar0), func_51(Local_18.f_23)));
		}
		else
		{
			iVar0++;
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_18.f_44))
	{
		VOLUME::_DELETE_VOLUME(Local_18.f_44);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_18.f_43))
	{
		VOLUME::_DELETE_VOLUME(Local_18.f_43);
	}
	if (func_53(uParam0->f_1))
	{
		func_54(uParam0->f_1, 0, 1, 0, 0);
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_182, false);
	if (func_55(Global_1958010.f_1321, 16))
	{
		func_56(&(Global_1958010.f_1321), 16);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		TASK::TASK_CLEAR_LOOK_AT(Global_34);
		PED::_0xAAC0EE3B4999ABB5(Global_34, 0);
	}
}

bool func_13(int iParam0)
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

void func_14(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_13(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_57(*uParam0);
	if (Global_1951255[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_58(iVar0);
	*uParam0 = 0;
}

Vector3 func_15(int iParam0)
{
	switch (iParam0)
	{
		case 277:
			return 2542.098f, -1282.514f, 48.21795f;
		case 278:
			return 2687.112f, -1361.769f, 47.24998f;
		case 33:
			return -355.2777f, 704.6901f, 116.0523f;
		case 519:
			return -790.1024f, -1362.621f, 42.90462f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_16(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return true;
	}
	return false;
}

int func_17(int iParam0)
{
	int iVar0;

	iVar0 = 200;
	switch (iParam0)
	{
		case 277:
			iVar0 = func_59(-1110862888 /* GXTEntry: "Theatre Ticket" */, -915411861, 1, 0, 1, 0);
			break;
		case 278:
			if (func_60(44))
			{
				iVar0 = func_59(2037803338 /* GXTEntry: "Movie Ticket" */, -915411861, 1, 0, 1, 0);
			}
			else
			{
				iVar0 = func_59(1242466573 /* GXTEntry: "Magic Lantern Ticket" */, -915411861, 1, 0, 1, 0);
			}
			break;
		case 519:
			iVar0 = func_59(2037803338 /* GXTEntry: "Movie Ticket" */, -915411861, 1, 0, 1, 0);
			break;
		case 33:
			iVar0 = func_59(1242466573 /* GXTEntry: "Magic Lantern Ticket" */, -915411861, 1, 0, 1, 0);
			break;
	}
	return iVar0;
}

void func_18(var uParam0, int iParam1)
{
	MISC::SET_BIT(&(uParam0->f_118), iParam1);
}

void func_19(var uParam0, var uParam1, int iParam2)
{
	switch (iParam2)
	{
		case 0:
			if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
			{
				*uParam0 = VOLUME::_CREATE_VOLUME_AGGREGATE();
				VOLUME::_0xBCE668AAF83608BE(*uParam0, 2538.033f, -1279.347f, 49.98048f, 0f, 0f, 11.90726f, 5.5f, 5.5f, 2f);
				VOLUME::_0x39816F6F94F385AD(*uParam0, 2545.899f, -1284.449f, 52.68468f, 0f, 0f, 0f, 19.06469f, 21.41224f, 12.2805f);
				VOLUME::_0x39816F6F94F385AD(*uParam0, 2537.024f, -1293.295f, 52.62739f, 0f, 0f, 0f, 8.533219f, 26.71697f, 9.024663f);
			}
			if (!VOLUME::_DOES_VOLUME_EXIST(*uParam1))
			{
				*uParam1 = VOLUME::_CREATE_VOLUME_AGGREGATE();
				VOLUME::_0x39816F6F94F385AD(*uParam1, 2533.624f, -1276.359f, 49.78957f, 0f, 0f, -25.0941f, 2.553831f, 2.187363f, 3.282658f);
				VOLUME::_0x39816F6F94F385AD(*uParam1, 2535.758f, -1273.773f, 49.78957f, 0f, 0f, -64.99103f, 2.553831f, 2.187363f, 3.282658f);
			}
			break;
		case 1:
		case 2:
			if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
			{
				*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2689.602f, -1359.844f, 48.57206f, 0f, 0f, 38.71428f, 4.602314f, 8.88861f, 3.333464f, "TheaterWepCheck");
			}
			if (!VOLUME::_DOES_VOLUME_EXIST(*uParam1))
			{
				*uParam1 = VOLUME::_CREATE_VOLUME_AGGREGATE();
				VOLUME::_0x39816F6F94F385AD(*uParam1, 2685.939f, -1360.082f, 48.17015f, 0f, 0f, 39.667f, 1f, 1.110557f, 2.040186f);
				VOLUME::_0x39816F6F94F385AD(*uParam1, 2689.12f, -1363.918f, 48.17015f, 0f, 0f, 39.667f, 1f, 1.110557f, 2.040186f);
			}
			break;
		case 3:
			if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
			{
				*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-347.6901f, 704.0504f, 118.0073f, 0f, 0f, 14.63188f, 3.596706f, 3.045884f, 2.800292f, "TheaterWepCheck");
			}
			break;
		case 4:
			if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
			{
				*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-788.5135f, -1362.535f, 44.1069f, 0f, 0f, 0f, 4.696677f, 8.721128f, 2.973177f, "TheaterWepCheck");
			}
			if (!VOLUME::_DOES_VOLUME_EXIST(*uParam1))
			{
				*uParam1 = VOLUME::_CREATE_VOLUME_AGGREGATE();
				VOLUME::_0x39816F6F94F385AD(*uParam1, -791.2835f, -1359.049f, 43.89287f, 0f, 0f, 0f, 1.288786f, 1f, 2.321684f);
				VOLUME::_0x39816F6F94F385AD(*uParam1, -791.2835f, -1366.186f, 43.89287f, 0f, 0f, 0f, 1.288786f, 1f, 2.321684f);
			}
			break;
	}
}

bool func_20(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_1572887.f_13 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1900736.f_67;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1900736.f_68;
		}
		if (func_61())
		{
			return true;
		}
		if (Global_1071686.f_3 && !Global_1572887.f_9)
		{
			if ((Global_1056141[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*471*/].f_463 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return true;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1900736.f_67;
		}
		else
		{
			return Global_1900736.f_68;
		}
	}
	if (iParam0 == 0 && func_63(func_62(0)))
	{
		return true;
	}
	if ((Global_1940258 && 81919 & (-1 - iParam0)) != 0)
	{
		return true;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < Global_1900871)
		{
			return true;
		}
	}
	switch (func_64(func_62(0)))
	{
		case -1:
			return false;
		case 2:
			return iParam0 & 1 == 0;
		case 5:
			return iParam0 & 2 == 0;
		case 3:
			return iParam0 & 16 == 0;
		case 4:
			return iParam0 & 32 == 0;
		case 7:
			return iParam0 & 1024 == 0;
		default:
			break;
	}
	return false;
}

float func_21(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_22(int iParam0)
{
	if (!func_65(iParam0))
	{
		return 0;
	}
	return Global_1893775[iParam0 /*3*/].f_1;
}

bool func_23(var uParam0)
{
	return true;
}

void func_24(var uParam0)
{
}

int func_25(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, false, false);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_66(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_26(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	vector3 vVar0;
	int iVar3;

	if (!func_65(iParam0))
	{
		return false;
	}
	if (!func_68(func_67(iParam0)))
	{
		return true;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(func_22(iParam0)))
	{
		func_69(iParam0, 0);
		return false;
	}
	vVar0 = { iParam2, iParam3, iParam4 };
	if (!func_70(iParam0, 0))
	{
		if (bParam1)
		{
			if (!func_71(iParam0))
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	if (!func_31(vVar0))
	{
		PERSCHAR::_0x59C7AD6FEA2AC449(func_22(iParam0), vVar0);
	}
	if (bParam5)
	{
		iVar3 = PERSCHAR::_0x08FC896D2CB31FCC(func_22(iParam0), 0);
	}
	else
	{
		iVar3 = PERSCHAR::_0x0CADC3A977997472(func_22(iParam0), 0);
	}
	if (!func_31(vVar0))
	{
		PERSCHAR::_0xBB68908CD11AEBDC(func_22(iParam0));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return true;
	}
	return false;
}

int func_27(int iParam0)
{
	int iVar0;

	iVar0 = func_22(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(iVar0))
	{
		return 0;
	}
	return PERSCHAR::_0x31C70A716CAE1FEE(iVar0);
}

void func_28(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_72(uParam0, iParam1, sParam2))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1)))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam1, bParam3);
			}
		}
	}
}

int func_29(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_73(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == Global_1951255[iVar0 /*23*/].f_11 && iParam1 == Global_1951255[iVar0 /*23*/].f_4)
				{
					if (iParam3 <= Global_1951255[iVar0 /*23*/])
					{
						return iVar0;
					}
				}
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				func_74(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_30(int iParam0, char* sParam1, char* sParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_13(iParam0))
	{
		return;
	}
	iVar0 = func_57(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1951255[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1951255[iVar0 /*23*/].f_3, MISC::_CREATE_VAR_STRING(6, sParam1, sParam2));
}

bool func_31(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_32(int iParam0, vector3 vParam1, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_13(iParam0))
	{
		return;
	}
	iVar0 = func_57(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1951255[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_CONTEXT_SET_POINT(Global_1951255[iVar0 /*23*/].f_3, vParam1);
	Global_1951255[iVar0 /*23*/].f_12 = { vParam1 };
}

int func_33(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || (iParam2 == 1 && ENTITY::IS_ENTITY_DEAD(iParam0)))
	{
		return 0;
	}
	iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
	if (!MAP::DOES_BLIP_EXIST(iVar0))
	{
		iVar0 = MAP::_BLIP_ADD_FOR_ENTITY(iParam1, iParam0);
	}
	else
	{
		MAP::_BLIP_SET_STYLE(iVar0, iParam1);
	}
	if (bParam3)
	{
		if ((iParam1 == 408396114 || iParam1 == 1259054292) || iParam1 == -308585968)
		{
			MAP::_BLIP_SET_MODIFIER(iVar0, 231194138);
		}
	}
	return iVar0;
}

int func_34(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BLIP_MG_POKER"):
			return 3;
		case joaat("BLIP_MG_BLACKJACK"):
			return 1;
		case joaat("BLIP_FENCE_BUILDING"):
			return 7;
		case joaat("BLIP_MG_DOMINOES"):
			return 2;
		case joaat("BLIP_MG_FISHING"):
			return 67;
		case joaat("BLIP_MG_FIVE_FINGER_FILLET"):
			return 4;
		case joaat("BLIP_SUMMER_COW"):
			return 5;
		case joaat("BLIP_MG_DOMINOES_ALL3S"):
			return 8;
		case joaat("BLIP_MG_DOMINOES_ALL5S"):
			return 9;
		case joaat("BLIP_MG_DOMINOES_DRAW"):
			return 10;
		case joaat("BLIP_MG_FIVE_FINGER_FILLET_BURNOUT"):
			return 11;
		case joaat("BLIP_MG_FIVE_FINGER_FILLET_GUTS"):
			return 12;
		case joaat("BLIP_PROC_LOANSHARK"):
			return 14;
		case joaat("BLIP_AMBIENT_HERD"):
			return 13;
		case joaat("BLIP_PROC_BOUNTY_POSTER"):
			return 16;
		case joaat("BLIP_AMBIENT_COACH"):
			return 17;
		case joaat("BLIP_AMBIENT_TRAIN"):
			return 18;
		case joaat("BLIP_AMBIENT_RIVERBOAT"):
			return 19;
		case joaat("BLIP_AMBIENT_QUARTERMASTER"):
			return 22;
		case joaat("BLIP_SHOP_STORE"):
			return 20;
		case joaat("BLIP_SHOP_SHADY_STORE"):
			return 21;
		case joaat("BLIP_SHOP_GUNSMITH"):
			return 23;
		case joaat("BLIP_SHOP_COACH_FENCING"):
			return 24;
		case joaat("BLIP_SHOP_DOCTOR"):
			return 25;
		case joaat("BLIP_SHOP_TAILOR"):
			return 26;
		case joaat("BLIP_SHOP_BLACKSMITH"):
			return 28;
		case joaat("BLIP_SHOP_TRAINER"):
			return 29;
		case joaat("BLIP_POST_OFFICE"):
			return 33;
		case joaat("BLIP_POST_OFFICE_REC"):
			return 34;
		case joaat("BLIP_SHOP_TRAIN"):
			return 30;
		case joaat("BLIP_SHOP_BARBER"):
			return 31;
		case joaat("BLIP_SHOP_BUTCHER"):
			return 32;
		case joaat("BLIP_SHOP_TACKLE"):
			return 35;
		case joaat("BLIP_SHOP_ANIMAL_TRAPPER"):
			return 36;
		case joaat("BLIP_MP_ROLE_NATURALIST"):
			return 51;
		case joaat("BLIP_SHOP_HORSE"):
			return 37;
		case joaat("BLIP_SHOP_HORSE_FENCING"):
			return 38;
		case joaat("BLIP_SHOP_HORSE_SADDLE"):
			return 39;
		case joaat("BLIP_SHOP_HONOR"):
			return 45;
		case joaat("BLIP_SHOP_WARDROBE"):
			return 52;
		case joaat("BLIP_MP_TRAVELLING_SALESWOMAN"):
			return 48;
		case joaat("BLIP_BUSINESS_MOONSHINE"):
			return 49;
		case joaat("BLIP_MP_ROLE_MOONSHINER"):
			return 99;
		case joaat("BLIP_MOONSHINE_STILL"):
			return 50;
		case joaat("BLIP_PHOTO_STUDIO"):
			return 41;
		case joaat("BLIP_HOTEL_BED"):
			return 40;
		case joaat("BLIP_SALOON"):
			return 27;
		case joaat("BLIP_STABLE"):
			return 53;
		case joaat("BLIP_PROC_HOME"):
			return 54;
		case joaat("BLIP_PROC_HOME_LOCKED"):
			return 55;
		case joaat("BLIP_AMBIENT_TELEGRAPH"):
			return 57;
		case joaat("BLIP_AMBIENT_COACH_TAXI"):
			return 58;
		case joaat("BLIP_AMBIENT_THEATRE"):
			return 59;
		case joaat("BLIP_REGION_CARAVAN"):
			return 60;
		case joaat("BLIP_EVENT_APPLESEED"):
			return 61;
		case joaat("BLIP_EVENT_CASTOR"):
			return 62;
		case joaat("BLIP_EVENT_RAILROAD_CAMP"):
			return 63;
		case joaat("BLIP_EVENT_RIGGS_CAMP"):
			return 64;
		case joaat("BLIP_REGION_HIDEOUT"):
			return 65;
		case joaat("BLIP_TOWN"):
			return 70;
		default:
			break;
	}
	return 0;
}

void func_35(int* iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	iParam0->f_14 = iParam2;
	func_75(iParam0, 1);
	func_36(iParam0, uParam1, iParam3, iParam4, iParam5, iParam6, iParam7, bParam8, 0);
}

void func_36(int* iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = uParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = iParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_13(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_76(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_77(iParam0->f_6, iParam0->f_5, 0);
			}
			func_78(iParam0->f_6, 0, 1, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_79(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_37(var uParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = func_80(Local_18.f_23);
	Local_18.f_31 = 0;
	if (!Local_18.f_33)
	{
		if (func_81(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1) || LAW::_0xF46108C50A22B029())
		{
			Local_18.f_33 = 1;
		}
	}
	else if (!func_81(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1) && !LAW::_0xF46108C50A22B029())
	{
		Local_18.f_33 = 0;
	}
	Local_18.f_34 = func_38(Global_34, Local_18.f_43, 1, 0);
	Local_18.f_35 = func_38(Global_34, Global_1958010.f_7[Global_39.f_4648[Local_18.f_23] /*31*/].f_4, 1, 0);
	func_82(uParam0, &Local_18);
	func_83(uParam0, &Local_18);
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_182))
	{
		if (!func_55(Local_18.f_24, 4096))
		{
			func_84(&(Local_18.f_24), 4096);
		}
		if (!Local_18.f_31)
		{
			if (Local_18 != 0)
			{
				Local_18 = 0;
			}
			return;
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_182) && !Local_18.f_31)
	{
		return;
	}
	else
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_182, 49, true);
	}
	bVar1 = func_60(44);
	if (Local_18.f_23 == 1 && bVar1)
	{
		uParam0->f_11 = 4;
	}
	if (Local_18.f_23 == 2 && !bVar1)
	{
		uParam0->f_11 = 4;
	}
	switch (Local_18)
	{
		case 0:
			if (!DECORATOR::DECOR_EXIST_ON(uParam0->f_182, "bUpdatedPlayer"))
			{
				DECORATOR::DECOR_SET_BOOL(uParam0->f_182, "bUpdatedPlayer", true);
			}
			if (!func_53(uParam0->f_1))
			{
				func_85(uParam0->f_1, 1, 0, 0, 1, 1);
			}
			func_49(&Local_18);
			func_86(uParam0, &Local_18, 0);
			func_87(uParam0, &Local_18, 0);
			func_88(uParam0, 0);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_182, 130, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_182, 315, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_182, 330, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_182, 44, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_182, 174, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_182, 448, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_182, true);
			func_89(&(Local_18.f_65), 1);
			func_90(&(Local_18.f_65), 1);
			func_91(&(Local_18.f_65), 1);
			func_92(&(Local_18.f_65), 1);
			func_93(&(Local_18.f_65), 1);
			func_94(&(Local_18.f_65), 0);
			func_95(&(Local_18.f_65), 1);
			func_96(&(Local_18.f_65), 1);
			func_97(&(Local_18.f_65), 1);
			func_98(&(Local_18.f_65), 1);
			func_99(&(Local_18.f_65), 0);
			func_100(&(Local_18.f_65), 1);
			func_101(&(Local_18.f_65), 0);
			func_92(&(Local_18.f_65), 1);
			func_102(&(Local_18.f_65), 1);
			func_103(&(Local_18.f_65), 0);
			func_104(&(Local_18.f_65), 0);
			func_105(&(Local_18.f_65), 0);
			func_106(&(Local_18.f_65), 0);
			if (!func_52(func_50(Local_18.f_25), func_51(Local_18.f_23)))
			{
				Local_18.f_25 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
			}
			func_56(&(Local_18.f_24), 65536);
			func_107(&Local_18, 1);
			break;
		case 1:
			func_108(uParam0, &Local_18);
			if ((Local_18.f_23 == 3 && !func_55(Local_18.f_24, 65536)) && func_109())
			{
				func_84(&(Local_18.f_24), 65536);
			}
			if (!func_111(func_110(uParam0->f_1)))
			{
				if (!func_112(&(uParam0->f_125[0 /*17*/]), 0))
				{
					func_113(&(uParam0->f_125[0 /*17*/]), 1);
				}
				if (uParam0->f_7 && !func_112(&(uParam0->f_125[1 /*17*/]), 0))
				{
					func_113(&(uParam0->f_125[1 /*17*/]), 1);
				}
			}
			else
			{
				if (func_112(&(uParam0->f_125[0 /*17*/]), 0))
				{
					func_113(&(uParam0->f_125[0 /*17*/]), 0);
				}
				if (uParam0->f_7 && func_112(&(uParam0->f_125[1 /*17*/]), 0))
				{
					func_113(&(uParam0->f_125[1 /*17*/]), 0);
				}
			}
			if (!TASK::_DOES_SCENARIO_POINT_EXIST(Local_18.f_64) && PED::_IS_PED_USING_SCENARIO_HASH(uParam0->f_182, joaat("WORLD_HUMAN_SHOPKEEPER")))
			{
				Local_18.f_64 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(uParam0->f_182, false);
			}
			func_114(uParam0);
			if (bVar0 && uParam0->f_1 == 277)
			{
				func_115(uParam0, &Local_18);
			}
			else if (Local_18.f_31)
			{
			}
			else
			{
				func_116(&Local_18, uParam0);
				func_117(uParam0, &Local_18);
			}
			break;
		case 2:
			break;
	}
}

bool func_38(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, bParam2, iParam3);
}

void func_39(var uParam0)
{
	bool bVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_182))
	{
		return;
	}
	bVar0 = func_80(Local_18.f_23);
	if (!func_55(Local_18.f_24, 16384) && !PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
	{
		func_118(&Local_18);
		if (bVar0)
		{
			uParam0->f_111 = "SHOW_ODDFELLOW";
		}
		else if (func_119(&Local_18))
		{
			uParam0->f_111 = "SHOW_USE_TICKET";
		}
		else if (Local_18.f_23 == 0)
		{
			uParam0->f_111 = "BUY_TICKET_DLR";
		}
		else
		{
			uParam0->f_111 = "BUY_TICKET";
		}
		func_79(&(uParam0->f_125[0 /*17*/]), uParam0->f_111);
		func_84(&(Local_18.f_24), 16384);
	}
	if ((!func_55(Local_18.f_24, 262144) && !func_111(Local_18.f_23)) && !Global_1958010.f_1323)
	{
		func_120("SHOW_HLP_NOSHOW", 10000, 0, 0, 0, 1);
		func_84(&(Local_18.f_24), 262144);
	}
	if (!func_80(Local_18.f_23))
	{
		if (Local_18.f_31)
		{
			if (func_111(func_110(uParam0->f_1)) && !func_121(func_110(uParam0->f_1)))
			{
				func_87(uParam0, &Local_18, 1);
			}
		}
		if (func_55(Global_39.f_4648.f_12, 4) && !func_55(Global_39.f_4648.f_12, 8))
		{
			if (func_111(func_110(uParam0->f_1)) && !func_121(func_110(uParam0->f_1)))
			{
				func_87(uParam0, &Local_18, 1);
			}
		}
		if (!func_13(uParam0->f_125[0 /*17*/].f_6))
		{
			if (func_111(func_110(uParam0->f_1)) && !func_121(func_110(uParam0->f_1)))
			{
				iVar1 = 0;
				while (iVar1 <= 40)
				{
					if (Global_1958010.f_7[iVar1 /*31*/].f_6 == uParam0->f_182)
					{
						uParam0->f_117 = Global_1958010.f_7[iVar1 /*31*/].f_28;
					}
					iVar1++;
				}
				func_8(uParam0);
			}
		}
	}
}

void func_40(var uParam0)
{
	if (func_55(Local_18.f_24, 16384))
	{
		func_56(&(Local_18.f_24), 16384);
	}
}

float func_41(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && bParam3)
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) && bParam3)
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false), bParam2);
}

void func_42(int* iParam0)
{
	func_75(iParam0, 9);
}

int func_43(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
			iVar0 = 64;
			break;
		case 3:
			iVar0 = 192;
			break;
		case 2:
			iVar0 = 208;
			break;
		case 4:
			iVar0 = 212;
			break;
		case 5:
			iVar0 = 77;
			break;
		case 7:
			iVar0 = 76;
			break;
		case 6:
			iVar0 = 96;
			break;
		default:
			iVar0 = 1;
			break;
	}
	iVar0 |= 16777216;
	if (iParam1 != 0)
	{
		iVar0 = (iVar0 || iParam1);
	}
	if (iParam2 != 0)
	{
		iVar0 = (iVar0 - (iVar0 && iParam2));
	}
	return iVar0;
}

int func_44(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	var uVar8;
	var uVar9;

	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		func_122(&iParam8);
		bVar0 = false;
		bVar1 = ((iParam9 == 0 || !VOLUME::_DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_34, iParam9, false, 0));
		bVar2 = iParam8 & 32 != false;
		bVar3 = iParam8 & 524288 != false;
		bVar4 = iParam8 & 16777216 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar7 = func_123(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_35, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 281, true);
		}
		if (bVar4)
		{
			bVar0 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_34) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_34));
		}
		if (bVar6 || (bVar4 && bVar0))
		{
			func_124(&(iParam1->f_13));
		}
		if (func_125(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar1)
				{
					if (func_126(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar7))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
					}
				}
				break;
			case 1:
				if (!bVar1 || !fVar7 <= (fParam2 + 5f))
				{
					func_127(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_128(*uParam0, 1, 1);
						}
					}
					else if (func_129(iParam1, 22))
					{
						func_128(*uParam0, 0, 1);
					}
				}
				if (func_130(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_131(uParam0, 1, iParam1, fParam2, uParam3, bVar2, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar3);
					func_132(iParam8);
					if (func_133(uParam0, iParam1, fVar7, fParam2, uParam3, bVar2, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar3, bVar6, bVar4, bVar0, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									func_134(uParam3);
								}
							}
							return iParam1->f_1;
						}
					}
					else if (iParam1->f_2 != 2)
					{
						if (iParam1->f_1 != -1)
						{
							iParam1->f_1 = -1;
						}
					}
				}
				else
				{
					func_135(iParam1, uParam3, fVar7);
					if (func_136(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						if (!bVar3)
						{
							func_137(uParam3, 0, 0, 1, 1);
						}
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_138(uParam0, iParam1, fParam4, bVar5))
				{
					uVar8 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return uVar8;
				}
				break;
			case 2:
				if (func_130(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_139(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar2);
					func_133(uParam0, iParam1, fVar7, fParam2, uParam3, bVar2, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar3, bVar6, bVar4, bVar0, 1);
					func_131(uParam0, func_130(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar2, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar3);
					func_132(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar3)
					{
						func_137(uParam3, 0, 0, 1, 1);
					}
					func_140(iParam1, 1);
				}
				func_135(iParam1, uParam3, fVar7);
				if (func_138(uParam0, iParam1, fParam4, bVar5))
				{
					if (iParam8 & 512 != 0)
					{
						iParam1->f_2 = 0;
					}
					else
					{
						iParam1->f_2 = 1;
					}
					uVar9 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return uVar9;
				}
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 3))
		{
			func_141(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_45(var uParam0)
{
	if (!func_80(Local_18.f_23))
	{
		if (uParam0->f_117 > 0 && (func_142() >= uParam0->f_117 || func_119(&Local_18)))
		{
			func_84(&(Local_18.f_24), 4);
			func_113(&(uParam0->f_125[0 /*17*/]), 1);
			func_87(uParam0, &Local_18, 1);
			func_143(uParam0, &Local_18, 1);
		}
	}
	else
	{
		func_84(&(Local_18.f_24), 4);
		func_113(&(uParam0->f_125[0 /*17*/]), 1);
		func_87(uParam0, &Local_18, 1);
		func_143(uParam0, &Local_18, 1);
	}
}

void func_46(var uParam0)
{
	func_84(&(Local_18.f_24), 524288);
	uParam0->f_7 = 0;
	func_113(&(uParam0->f_125[1 /*17*/]), 1);
}

bool func_47(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_13(iParam0))
	{
		return false;
	}
	iVar0 = func_57(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(Global_1951255[iVar0 /*23*/].f_3);
}

void func_48(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	ANIMSCENE::_DELETE_ANIM_SCENE(*uParam0);
	uParam0->f_1 = 0;
}

void func_49(int iParam0)
{
	if (iParam0->f_33)
	{
		return;
	}
	switch (iParam0->f_23)
	{
		case 0:
			func_144(212326452, 0, 0f, 0, 0, 0, 0, 0);
			func_144(-80890560, 0, 0f, 0, 0, 0, 0, 0);
			func_144(-302077142, 0, 0f, 0, 0, 0, 0, 0);
			func_144(-531755063, 0, 0f, 0, 0, 0, 0, 0);
			break;
		case 1:
			func_144(-2034821814, 0, 0f, 0, 0, 0, 0, 0);
			func_144(-786191838, 0, 0f, 0, 0, 0, 0, 0);
			func_144(-1518382426, 0, 0f, 0, 0, 0, 0, 0);
			func_144(-223351546, 0, 0f, 0, 0, 0, 0, 0);
			break;
		case 2:
			func_144(235202295, 0, 0f, 0, 0, 0, 0, 0);
			func_144(-71941542, 0, 0f, 0, 0, 0, 0, 0);
			func_144(-723815263, 0, 0f, 0, 0, 0, 0, 0);
			func_144(1920184275, 0, 0f, 0, 0, 0, 0, 0);
			break;
		case 3:
			break;
		case 4:
			func_144(1373799284, 0, 0f, 0, 0, 0, 0, 0);
			func_144(1735175816, 0, 0f, 0, 0, 0, 0, 0);
			break;
	}
	iParam0->f_36 = 0;
}

char* func_50(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
			return "Post_Show_Dars_Ragtime_on_de_Moon_Music";
		case 1:
			return "Post_Show_La_Bohemienne_Music";
		case 2:
			return "Post_Show_Rough_Riders_March_Music";
		case 3:
			return "Post_Show_The_Harlem_Rag_Music";
		case 4:
			return "Post_Show_The_Mississippi_Rag_Music";
		case 5:
			return "Pre_Show_Galop_du_Carnival_Music";
		case 6:
			return "Pre_Show_Ma_Ragtime_Baby_Music";
		case 7:
			return "Pre_Show_The_Bosn_Rag_Music";
		case 8:
			return "Pre_Show_The_Keyhole_in_the_Door_Music";
		case 9:
			return "Pre_Show_Walking_for_dat_Cake_Music";
		default:
			break;
	}
	return "Post_Show_Dars_Ragtime_on_de_Moon_Music";
}

char* func_51(int iParam0)
{
	if (iParam0 == 3)
	{
		return "wax_cylinder_show_music";
	}
	return "3235391231_intro";
}

bool func_52(char* sParam0, char* sParam1)
{
	int iVar0;

	iVar0 = AUDIO::_0x0556C784FA056628(sParam0, sParam1);
	if (iVar0 != -1 && AUDIO::IS_STREAM_PLAYING(iVar0))
	{
		return true;
	}
	return false;
}

bool func_53(int iParam0)
{
	if (!func_65(iParam0))
	{
		return false;
	}
	return Global_1893775[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_54(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_65(iParam0))
	{
		return;
	}
	if (!func_145(iParam0, 1))
	{
		return;
	}
	if (!func_145(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_53(iParam0)) && func_146(iParam0))
	{
		return;
	}
	func_147(iParam0, 1);
	func_148(iParam0);
	if (func_68(func_67(iParam0)))
	{
		iVar0 = func_22(iParam0);
		if (!PERSCHAR::_0x800DF3FC913355F3(iVar0))
		{
			return;
		}
		PERSCHAR::_0xBB68908CD11AEBDC(iVar0);
		PERSCHAR::_0xB65E7F733956CF25(iVar0);
		if (bParam2 && !PERSCHAR::_0xEB98B38CA60742D7(iVar0))
		{
			PERSCHAR::_0x631CD2D77FDC0316(iVar0);
		}
		iVar1 = PERSCHAR::_0x31C70A716CAE1FEE(iVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			PED::SET_PED_CONFIG_FLAG(iVar1, 171, false);
		}
		if (bParam1)
		{
			PERSCHAR::_0x7B204F88F6C3D287(iVar0);
		}
		func_147(iParam0, 16);
	}
	if (func_145(iParam0, 128) && !bParam3)
	{
		func_149(iParam0, 0);
	}
}

bool func_55(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_56(var uParam0, int iParam1)
{
	func_150(uParam0, iParam1);
}

int func_57(int iParam0)
{
	return iParam0;
}

void func_58(int iParam0)
{
	if (!func_151(iParam0))
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

int func_59(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if ((bParam4 && iParam1 == -915411861) && func_152(iParam0, 59806960))
	{
		iParam1 = 59806960;
	}
	if (func_153(iParam0))
	{
		return func_155(func_154(iParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_156(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
		{
			if (iParam5 != 0 && Var0[iVar32 /*2*/] != iParam5)
			{
			}
			else
			{
				return Var0[iVar32 /*2*/].f_1;
				Jump @204; //curOff = 188
				if (Var0[iVar32 /*2*/] == 0)
				{
				}
				else
				{
					iVar32++;
				}
				if (!bParam3)
				{
				}
				return 0;
			}
		}
	}
}

bool func_60(int iParam0)
{
	if (!func_157(iParam0))
	{
		return false;
	}
	return func_158(iParam0);
}

bool func_61()
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
	if (!func_63(Global_1051213) && Global_1572887.f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

struct<2> func_62(int iParam0)
{
	return Global_1900736.f_1[iParam0 /*2*/];
}

bool func_63(struct<2> Param0)
{
	if (!func_159(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_160(Param0))
	{
		return false;
	}
	return true;
}

int func_64(var uParam0, var uParam1)
{
	return uParam0;
}

bool func_65(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 948);
}

void func_66(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar0 = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
	if (!bParam7)
	{
		if (bParam5)
		{
			PED::_SET_RANDOM_OUTFIT_VARIATION(iParam0, true);
			bVar0 = true;
		}
	}
	if (PED::IS_PED_HUMAN(iParam0))
	{
		if (bParam6)
		{
			WEAPON::_0x899A04AFCC725D04(iParam0, WEAPON::_0xD42514C182121C23(iParam1));
		}
		if (PED::IS_PED_MALE(iParam0) && !bParam3)
		{
			func_161(iParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 502, true);
	}
	else if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (!bParam5)
		{
			PED::_SET_PED_OUTFIT_PRESET(iParam0, 0, false);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_162(iParam0, 0);
			bVar0 = true;
		}
		func_163(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

int func_67(int iParam0)
{
	if (!func_65(iParam0))
	{
		return 0;
	}
	return Global_1893775[iParam0 /*3*/];
}

bool func_68(int iParam0)
{
	return iParam0 != 0;
}

int func_69(int iParam0, bool bParam1)
{
	if (!func_65(iParam0))
	{
		return 0;
	}
	if (!func_145(iParam0, 2))
	{
		return 0;
	}
	if (func_145(iParam0, 32) && !bParam1)
	{
		func_164(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_67(iParam0)));
		if (func_165() == -1)
		{
			if (func_145(iParam0, 2048))
			{
				PERSCHAR::_0x49A8C2CD97815215(func_22(iParam0));
				func_147(iParam0, 2048);
			}
			PERSCHAR::_0xFCC6DB8DBE709BC8(func_22(iParam0));
		}
		return 0;
	}
	if (!func_166(iParam0) && func_165() == -1)
	{
		return 0;
	}
	if (PERSCHAR::_0x800DF3FC913355F3(func_22(iParam0)))
	{
		func_147(iParam0, 128);
		return 1;
	}
	func_164(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_67(iParam0)));
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_22(iParam0));
	if (func_145(iParam0, 2048))
	{
		PERSCHAR::_0x49A8C2CD97815215(func_22(iParam0));
		func_147(iParam0, 2048);
	}
	return 1;
}

bool func_70(int iParam0, bool bParam1)
{
	if (func_165() != -1)
	{
		return false;
	}
	if (!func_65(iParam0))
	{
		return false;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(func_22(iParam0)))
	{
		return false;
	}
	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_27(iParam0)))
	{
		return false;
	}
	return !PERSCHAR::_0xEB98B38CA60742D7(func_22(iParam0));
}

bool func_71(int iParam0)
{
	if (!func_65(iParam0))
	{
		return false;
	}
	if (PERSCHAR::_0x800DF3FC913355F3(func_22(iParam0)))
	{
		PERSCHAR::_0x49A8C2CD97815215(func_22(iParam0));
		if (!ENTITY::DOES_ENTITY_EXIST(PERSCHAR::_0x0CADC3A977997472(func_22(iParam0), 0)))
		{
			return false;
		}
	}
	return true;
}

bool func_72(var uParam0, int iParam1, char* sParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam2, &((uParam0[iVar1 /*4*/])->f_1)))
		{
			(*uParam0)[iVar1 /*4*/] = iParam1;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		if (uParam0->f_97 < 24)
		{
			(*uParam0)[uParam0->f_97 /*4*/] = iParam1;
			StringCopy(&((uParam0[uParam0->f_97 /*4*/])->f_1), sParam2, 24);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

bool func_73(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951255[iParam0 /*23*/].f_1 && iParam1) != 0;
}

void func_74(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_167(iParam0, 1);
	func_168(iParam0, 1);
	func_169(iParam0, 128);
}

void func_75(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_76(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_13(iParam0))
	{
		return;
	}
	iVar0 = func_57(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1951255[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1951255[iVar0 /*23*/].f_3, MISC::_CREATE_VAR_STRING(2, sParam1, sParam2));
}

void func_77(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_13(iParam0))
	{
		return;
	}
	iVar0 = func_57(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1951255[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1951255[iVar0 /*23*/].f_3, sParam1);
}

void func_78(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_13(iParam0))
	{
		return;
	}
	iVar0 = func_57(iParam0);
	if (bParam1)
	{
		func_170(iParam0, 4);
		if (bParam3)
		{
			func_167(iVar0, 1);
		}
		func_168(iVar0, 1);
	}
	else
	{
		func_169(iParam0, 4);
		func_168(iVar0, 0);
	}
}

void func_79(int* iParam0, char* sParam1)
{
	if (func_13(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_77(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_171(iParam0, 1);
}

bool func_80(int iParam0)
{
	if (func_55(Global_1958010.f_1321, 16) && iParam0 == 0)
	{
		return true;
	}
	if ((func_55(Global_39.f_4648.f_12, 1) && !func_55(Global_39.f_4648.f_12, 2)) && iParam0 == 0)
	{
		return true;
	}
	return false;
}

int func_81(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_172(bParam1, bParam2, bParam3);
	}
	if (Global_1572887.f_13 != -1)
	{
		if (iParam0 == Global_1296859.f_10)
		{
			if (!Global_1296859.f_11)
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

void func_82(var uParam0, var uParam1)
{
	if (uParam1->f_33 || uParam1->f_32)
	{
		if (!func_173(uParam0))
		{
			func_88(uParam0, 1);
			func_86(uParam0, uParam1, 0);
		}
		if (!uParam1->f_36)
		{
			func_174(uParam1);
		}
	}
	else
	{
		if (func_173(uParam0))
		{
			func_88(uParam0, 0);
		}
		if (uParam1->f_36)
		{
			func_49(uParam1);
		}
	}
}

void func_83(var uParam0, var uParam1)
{
	switch (uParam1->f_8)
	{
		case 0:
			if (!func_111(func_110(uParam0->f_1)))
			{
				func_175(&(uParam1->f_2), 5);
				func_176(&(uParam1->f_8), 3);
			}
			else
			{
				if (func_177(uParam0, uParam1))
				{
				}
				if (Global_1958010.f_1323)
				{
					func_176(&(uParam1->f_8), 1);
				}
			}
			break;
		case 1:
			if ((Global_1958010.f_1325 && uParam1->f_2 < 5) && uParam1->f_2 != 0)
			{
				func_175(&(uParam1->f_2), 5);
			}
			if (Global_1958010.f_1324)
			{
				func_176(&(uParam1->f_8), 2);
			}
			break;
		case 2:
			if (Global_1958010.f_1324)
			{
				if (func_177(uParam0, uParam1))
				{
					func_176(&(uParam1->f_8), 3);
				}
			}
			else
			{
				func_176(&(uParam1->f_8), 1);
			}
			if (!Global_1958010.f_1323)
			{
				if (func_177(uParam0, uParam1))
				{
					func_176(&(uParam1->f_8), 3);
				}
			}
			break;
		case 3:
			if (func_111(func_110(uParam0->f_1)))
			{
				func_176(&(uParam1->f_8), 0);
			}
			break;
	}
	func_178(uParam0, uParam1);
}

void func_84(var uParam0, int iParam1)
{
	func_179(uParam0, iParam1);
}

int func_85(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	if (!func_180(iParam0, 1))
	{
		return 0;
	}
	if (func_68(func_67(iParam0)))
	{
		iVar1 = func_22(iParam0);
		if (!PERSCHAR::_0x800DF3FC913355F3(iVar1))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PERSCHAR::_0xEB98B38CA60742D7(iVar1))
			{
				PERSCHAR::_0x49A8C2CD97815215(iVar1);
			}
		}
		PERSCHAR::_0x6759BEE6762E140B(iVar1);
		iVar0 = PERSCHAR::_0x0CADC3A977997472(iVar1, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return 0;
		}
	}
	if ((bParam4 && !func_53(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 171, bParam5);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	func_181(iParam0, 1);
	func_182(iParam0);
	if (bParam3)
	{
		func_181(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

void func_86(var uParam0, int iParam1, int iParam2)
{
	Global_1958010.f_1279[func_110(uParam0->f_1) /*7*/].f_3 = iParam2;
	Global_1958010.f_1279[func_110(uParam0->f_1) /*7*/].f_4 = iParam2;
}

void func_87(var uParam0, int iParam1, int iParam2)
{
	Global_1958010.f_1279[func_110(uParam0->f_1) /*7*/].f_2 = iParam2;
}

void func_88(var uParam0, int iParam1)
{
	Global_1958010.f_1279[func_110(uParam0->f_1) /*7*/].f_5 = iParam1;
}

void func_89(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_183(&(uParam0->f_2), 4);
	}
	else
	{
		func_184(&(uParam0->f_2), 4);
	}
}

void func_90(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_183(&(uParam0->f_2), 2);
	}
	else
	{
		func_184(&(uParam0->f_2), 2);
	}
}

void func_91(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_183(&(uParam0->f_2), 2048);
	}
	else
	{
		func_184(&(uParam0->f_2), 2048);
	}
}

void func_92(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_183(&(uParam0->f_2), 16384);
	}
	else
	{
		func_184(&(uParam0->f_2), 16384);
	}
}

void func_93(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_183(&(uParam0->f_2), 1);
	}
	else
	{
		func_184(&(uParam0->f_2), 1);
	}
}

void func_94(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_184(uParam0, 128);
	}
	else
	{
		func_183(uParam0, 128);
	}
}

void func_95(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_183(&(uParam0->f_2), 8);
	}
	else
	{
		func_184(&(uParam0->f_2), 8);
	}
}

void func_96(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_184(uParam0, 32);
	}
	else
	{
		func_183(uParam0, 32);
	}
}

void func_97(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_184(uParam0, 256);
	}
	else
	{
		func_183(uParam0, 256);
	}
}

void func_98(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_183(&(uParam0->f_2), 16);
	}
	else
	{
		func_184(&(uParam0->f_2), 16);
	}
}

void func_99(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_184(uParam0, 16);
	}
	else
	{
		func_183(uParam0, 67108864);
		func_183(uParam0, 16);
	}
}

void func_100(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_184(uParam0, 8);
	}
	else
	{
		func_183(uParam0, 8);
	}
}

void func_101(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_183(&(uParam0->f_2), 256);
	}
	else
	{
		func_184(&(uParam0->f_2), 256);
	}
}

void func_102(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_183(&(uParam0->f_2), 524288);
	}
	else
	{
		func_184(&(uParam0->f_2), 524288);
	}
}

void func_103(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_184(uParam0, 4);
	}
	else
	{
		func_183(uParam0, 4);
	}
}

void func_104(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_183(&(uParam0->f_2), 1024);
	}
	else
	{
		func_184(&(uParam0->f_2), 1024);
	}
}

void func_105(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_183(&(uParam0->f_2), 131072);
	}
	else
	{
		func_184(&(uParam0->f_2), 131072);
	}
}

void func_106(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_184(uParam0, 2);
	}
	else
	{
		func_183(uParam0, 2);
	}
}

void func_107(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

void func_108(var uParam0, int iParam1)
{
	int iVar0;

	switch (iParam1->f_7)
	{
		case 0:
			if (iParam1->f_34 && !iParam1->f_35)
			{
				func_185(&(iParam1->f_7), 1);
			}
			break;
		case 1:
			HUD::_0xC9CAEAEEC1256E54(1664736751);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
			if (func_186(uParam0->f_182, 0, 0, 0))
			{
				if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_ATTACK")))
				{
					iParam1->f_32 = 1;
				}
			}
			else if (!iParam1->f_32)
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(Global_34, &iVar0, true, 0, false) && iVar0 != joaat("WEAPON_UNARMED"))
				{
					func_187(0);
				}
				if (WEAPON::GET_CURRENT_PED_WEAPON(Global_34, &iVar0, true, 1, false) && iVar0 != joaat("WEAPON_UNARMED"))
				{
					func_187(1);
				}
			}
			if ((((!iParam1->f_34 || iParam1->f_35) || iParam1->f_33) || PED::IS_PED_IN_COMBAT(Global_34, 0)) || iParam1->f_32)
			{
				func_185(&(iParam1->f_7), 2);
			}
			break;
		case 2:
			if ((!iParam1->f_33 && !PED::IS_PED_IN_COMBAT(Global_34, 0)) && !iParam1->f_32)
			{
				func_185(&(iParam1->f_7), 0);
			}
			break;
	}
}

bool func_109()
{
	int iVar0;
	bool bVar1;

	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(-348.416f, 699.4218f, 117.6852f);
	if (INTERIOR::IS_VALID_INTERIOR(iVar0) && INTERIOR::IS_INTERIOR_READY(iVar0))
	{
		bVar1 = true;
		if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "val_magiclantern_intgroup_closed"))
		{
			INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, "val_magiclantern_intgroup_closed", 0);
			bVar1 = false;
		}
		if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "val_magiclantern_intgroup_open"))
		{
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, "val_magiclantern_intgroup_open", true);
			bVar1 = false;
		}
		if (bVar1)
		{
			return true;
		}
	}
	return false;
}

int func_110(int iParam0)
{
	switch (iParam0)
	{
		case 277:
			return 0;
		case 278:
			if (func_60(44))
			{
				return 2;
			}
			else
			{
				return 1;
			}
			break;
		case 519:
			return 4;
		case 33:
			return 3;
	}
	return -1;
}

bool func_111(int iParam0)
{
	return Global_1958010.f_1279[iParam0 /*7*/].f_3;
}

bool func_112(var uParam0, bool bParam1)
{
	if (!bParam1 || func_13(uParam0->f_6))
	{
		return func_188(uParam0, 4);
	}
	return false;
}

void func_113(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_188(iParam0, 4))
		{
			func_14(&(iParam0->f_6), 1, 1);
			func_75(iParam0, 4);
		}
	}
	else if (func_188(iParam0, 4))
	{
		func_171(iParam0, 4);
		func_75(iParam0, 14);
	}
}

void func_114(var uParam0)
{
	vector3 vVar0;

	if (uParam0->f_1 == 33)
	{
		if (func_111(func_110(33)))
		{
			if (!func_189(1015669983) || func_121(3))
			{
				func_190(1015669983);
			}
		}
		else if (!Global_1958010.f_1323 && func_189(1015669983))
		{
			vVar0 = { -352.0567f, 704.7408f, 117.9537f };
			if (func_21(Global_34, vVar0, 1) > 30f)
			{
				func_191(1015669983);
			}
		}
	}
}

int func_115(var uParam0, int iParam1)
{
	if (!Global_1958010.f_1323)
	{
		if (func_55(Global_1958010.f_1321, 16) && func_21(Global_34, func_15(uParam0->f_1), 1) > 40f)
		{
			func_56(&(Global_1958010.f_1321), 16);
			if (iParam1->f_1 < 11)
			{
				func_192(&(iParam1->f_1), 11);
			}
		}
	}
	switch (iParam1->f_1)
	{
		case 0:
			STREAMING::REQUEST_MODEL(func_193(0), false);
			STREAMING::REQUEST_MODEL(func_193(1), false);
			func_192(&(iParam1->f_1), 1);
			break;
		case 1:
			if (!func_197(&(iParam1->f_10[0 /*3*/]), func_194(0), func_196(func_195()), 1))
			{
				return 0;
			}
			if (!func_197(&(iParam1->f_10[1 /*3*/]), func_194(1), func_198(), 1))
			{
				return 0;
			}
			if (!func_197(&(iParam1->f_10[2 /*3*/]), func_194(2), func_199(2), 1))
			{
				return 0;
			}
			if (!STREAMING::HAS_MODEL_LOADED(func_193(0)) && !STREAMING::HAS_MODEL_LOADED(func_193(1)))
			{
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_45[0]))
			{
				iParam1->f_45[0] = OBJECT::CREATE_OBJECT(func_193(0), 2542.248f, -1281.838f, 49.28225f, true, true, false, false, true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_45[1]))
			{
				iParam1->f_45[1] = OBJECT::CREATE_OBJECT(func_193(1), 2542.248f, -1281.838f, 49.28225f, true, true, false, false, true);
			}
			if (!func_195() && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_10[0 /*3*/]))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam1->f_10[0 /*3*/], "b_playerArthur", true, false);
			}
			func_200(iParam1);
			func_192(&(iParam1->f_1), 2);
			break;
		case 2:
			if (func_38(Global_34, iParam1->f_51[1], 1, 0) && func_55(iParam1->f_24, 4))
			{
				func_56(&(iParam1->f_24), 4);
				func_192(&(iParam1->f_1), 3);
			}
			break;
		case 3:
			func_201(uParam0, &(iParam1->f_10[0 /*3*/]));
			func_192(&(iParam1->f_1), 4);
			break;
		case 4:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam1->f_10[0 /*3*/], false) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam1->f_10[0 /*3*/]) > 0.85f)
			{
				func_87(uParam0, iParam1, 1);
				func_192(&(iParam1->f_1), 5);
			}
			break;
		case 5:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_10[0 /*3*/]) && ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iParam1->f_10[0 /*3*/], false))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iParam1->f_10[0 /*3*/]);
			}
			if (func_55(Global_1958010.f_1321, 32) && func_38(Global_34, iParam1->f_51[0], 1, 0))
			{
				func_192(&(iParam1->f_1), 6);
			}
			break;
		case 6:
			func_202(uParam0, &(iParam1->f_10[1 /*3*/]), iParam1);
			func_192(&(iParam1->f_1), 7);
			break;
		case 7:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_10[1 /*3*/]) && (ANIMSCENE::_0x005E6F28DD7ED58D(iParam1->f_10[1 /*3*/], "s_m_m_sdticketseller_01") || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam1->f_10[1 /*3*/]) > 0.5f))
			{
				func_192(&(iParam1->f_1), 8);
			}
			break;
		case 8:
			if (func_21(Global_34, func_15(uParam0->f_1), 1) > 30f)
			{
				func_192(&(iParam1->f_1), 10);
				return 0;
			}
			if (ANIMSCENE::_0x005E6F28DD7ED58D(iParam1->f_10[1 /*3*/], "s_m_m_sdticketseller_01") && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_182, -982327190, true) != 1)
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_182, 2552.9f, -1284.376f, 48.21795f, true, false, true, true);
				TASK::TASK_STAND_STILL(uParam0->f_182, -1);
			}
			if (!func_13(iParam1->f_62[0]))
			{
				iParam1->f_62[0] = func_203("TAKE_LETTER", joaat("INPUT_CONTEXT_Y"), iParam1->f_51[1], 3, 1, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
			}
			else if (func_47(iParam1->f_62[0], 1))
			{
				func_14(&(iParam1->f_62[0]), 1, 1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 256, false);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_34, 2541.031f, -1281.497f, 49.21795f, 1f, 20000, 0.25f, 0, -136.15f);
				func_192(&(iParam1->f_1), 9);
			}
			break;
		case 9:
			if (ANIMSCENE::_0x005E6F28DD7ED58D(iParam1->f_10[1 /*3*/], "s_m_m_sdticketseller_01") && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_182, -982327190, true) != 1)
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_182, 2552.9f, -1284.376f, 48.21795f, true, false, true, true);
				TASK::TASK_STAND_STILL(uParam0->f_182, -1);
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(Global_34, 713668775, true) == 8 || func_21(Global_34, 2541.031f, -1281.497f, 49.21795f, 1) < 0.5f)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				func_204(uParam0, &(iParam1->f_10[2 /*3*/]), iParam1);
				func_192(&(iParam1->f_1), 10);
			}
			break;
		case 10:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_10[1 /*3*/]))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam1->f_10[1 /*3*/], true, false))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam1->f_10[1 /*3*/], false))
					{
						if (ANIMSCENE::_0x005E6F28DD7ED58D(iParam1->f_10[1 /*3*/], "s_m_m_sdticketseller_01") && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_182, -982327190, true) != 1)
						{
							ENTITY::SET_ENTITY_COORDS(uParam0->f_182, 2552.9f, -1284.376f, 48.21795f, true, false, true, true);
							TASK::TASK_STAND_STILL(uParam0->f_182, -1);
						}
					}
					else
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(iParam1->f_10[1 /*3*/]);
					}
				}
			}
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_10[0 /*3*/]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam1->f_10[0 /*3*/], true, false)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam1->f_10[0 /*3*/], false))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iParam1->f_10[0 /*3*/]);
			}
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_10[2 /*3*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam1->f_10[2 /*3*/], false)) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam1->f_10[2 /*3*/]) > 0.5f)
			{
				if (!func_55(iParam1->f_24, 131072))
				{
					func_205(joaat("DOCUMENT_ODDFELLOWS_LETTER"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					func_206(4000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
					if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_45[0]))
					{
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iParam1->f_45[0]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_45[1]))
					{
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iParam1->f_45[1]));
					}
					func_84(&(iParam1->f_24), 131072);
				}
			}
			if (func_21(Global_34, func_15(uParam0->f_1), 1) > 30f)
			{
				func_192(&(iParam1->f_1), 11);
			}
			break;
		case 11:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_10[0 /*3*/]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam1->f_10[0 /*3*/], true, false))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iParam1->f_10[0 /*3*/]);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_10[1 /*3*/]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam1->f_10[1 /*3*/], true, false))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iParam1->f_10[1 /*3*/]);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_10[2 /*3*/]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam1->f_10[2 /*3*/], true, false))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iParam1->f_10[2 /*3*/]);
			}
			if (func_13(iParam1->f_62[0]))
			{
				func_14(&(iParam1->f_62[0]), 1, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_45[0]))
			{
				OBJECT::DELETE_OBJECT(&(iParam1->f_45[0]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_45[1]))
			{
				OBJECT::DELETE_OBJECT(&(iParam1->f_45[1]));
			}
			func_56(&(Global_1958010.f_1321), 16);
			func_192(&(iParam1->f_1), 12);
			break;
		case 12:
			return 1;
	}
	return 0;
}

void func_116(int iParam0, var uParam1)
{
	switch (iParam0->f_9)
	{
		case 0:
			if (func_55(iParam0->f_24, 524288))
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_34) && func_208(Global_34, "WHATS_PLAYING", 291934926, uParam1->f_182, 1, func_207(func_195()), 0, 1))
				{
					func_124(&(iParam0->f_37));
					func_209(&(iParam0->f_9), 1);
				}
			}
			break;
		case 1:
			if (!func_210(1) && func_211(&(iParam0->f_37)) > 2f)
			{
				func_209(&(iParam0->f_9), 2);
			}
			break;
		case 2:
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(uParam1->f_182) && func_208(uParam1->f_182, func_212(Global_39.f_4648[iParam0->f_23]), 291934926, Global_34, 1, func_213(uParam1->f_1), 0, 1))
			{
				func_124(&(iParam0->f_37));
				func_209(&(iParam0->f_9), 3);
			}
			break;
		case 3:
			if ((!AUDIO::IS_ANY_SPEECH_PLAYING(uParam1->f_182) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_34)) && func_211(&(iParam0->f_37)) > 3f)
			{
				func_124(&(iParam0->f_37));
				func_209(&(iParam0->f_9), 4);
			}
			break;
		case 4:
			if (func_211(&(iParam0->f_37)) > 45f)
			{
				func_124(&(iParam0->f_37));
				func_209(&(iParam0->f_9), 5);
			}
			break;
		case 5:
			if (!Global_1958010.f_1323)
			{
				func_56(&(iParam0->f_24), 524288);
				uParam1->f_7 = 1;
				func_113(&(uParam1->f_125[1 /*17*/]), 0);
				func_209(&(iParam0->f_9), 0);
			}
			break;
	}
}

void func_117(var uParam0, int iParam1)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;

	fVar0 = 150f;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_182))
	{
		fVar0 = func_41(Global_34, uParam0->f_182, 1, 1);
	}
	bVar1 = false;
	if (func_214(uParam0->f_182, 1, 1, 1, 0, 0) || func_215(uParam0->f_182, 1090519040 /* Float: 8f */, 1103626240 /* Float: 25f */, 1097859072 /* Float: 15f */, 0))
	{
		if (PED::GET_PED_RESET_FLAG(Global_34, 311))
		{
			bVar1 = true;
		}
	}
	if ((iParam1->f_32 && !bVar1) && fVar0 > 40f)
	{
		iParam1->f_32 = 0;
	}
	if ((iParam1->f_3 >= 3 && iParam1->f_3 != 7) && fVar0 < 40f)
	{
		if (iParam1->f_33 || func_216(uParam0->f_182, 0, &(iParam1->f_65), &(iParam1->f_97), 0, 0))
		{
			if (iParam1->f_3 == 3)
			{
				if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uParam0->f_182, iParam1->f_10[3 /*3*/]))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iParam1->f_10[3 /*3*/], "SHOPKEEPER", uParam0->f_182);
					func_217(iParam1, 0);
					func_218(&(iParam1->f_3), 4);
					func_124(&(iParam1->f_59));
					func_219(&(iParam1->f_6), 3);
				}
				else
				{
					TASK::TASK_COWER(uParam0->f_182, -1, Global_34, 0);
					func_218(&(iParam1->f_3), 7);
				}
			}
		}
	}
	if (iParam1->f_5 != -1)
	{
		if (((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_10[3 /*3*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam1->f_10[3 /*3*/], false)) && ANIMSCENE::_0x23E33CB9F4A3F547(iParam1->f_10[3 /*3*/], func_220(iParam1->f_5))) && ANIMSCENE::_0x1F0E401031E20146(iParam1->f_10[3 /*3*/], func_220(iParam1->f_4)))
		{
			ANIMSCENE::_0xAE6ADA8FE7E84ACC(iParam1->f_10[3 /*3*/], func_220(iParam1->f_5));
			iParam1->f_5 = -1;
		}
	}
	if (func_55(iParam1->f_24, 4096))
	{
		iParam1->f_3 = 9;
		func_56(&(iParam1->f_24), 4096);
	}
	switch (iParam1->f_3)
	{
		case 0:
			iParam1->f_27 = 1;
			iParam1->f_29 = 1;
			func_118(iParam1);
			func_217(iParam1, 10);
			func_221(iParam1);
			func_222(&(iParam1->f_51[2]), &(iParam1->f_51[3]), func_110(uParam0->f_1));
			func_218(&(iParam1->f_3), 1);
			break;
		case 1:
			if (!func_197(&(iParam1->f_10[3 /*3*/]), func_194(3), func_220(10), 1))
			{
				return;
			}
			if (!func_223(iParam1))
			{
				return;
			}
			if (!func_224(iParam1, ENTITY::GET_ENTITY_COORDS(uParam0->f_182, true, false), func_110(uParam0->f_1)))
			{
				return;
			}
			func_218(&(iParam1->f_3), 2);
			break;
		case 2:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_10[3 /*3*/]) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_182))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1->f_10[3 /*3*/], "ARTHUR", Global_34, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1->f_10[3 /*3*/], "SHOPKEEPER", uParam0->f_182, 0);
				func_225(iParam1, func_110(uParam0->f_1));
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iParam1->f_10[3 /*3*/], func_226(func_110(uParam0->f_1)), func_227(func_110(uParam0->f_1)), 2);
				ANIMSCENE::START_ANIM_SCENE(iParam1->f_10[3 /*3*/]);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_193(2));
				func_218(&(iParam1->f_3), 3);
			}
			break;
		case 3:
			if (bVar1)
			{
				func_87(uParam0, iParam1, 0);
				func_143(uParam0, iParam1, 0);
				func_86(uParam0, iParam1, 0);
				func_217(iParam1, 0);
				func_218(&(iParam1->f_3), 4);
				func_124(&(iParam1->f_59));
				iParam1->f_32 = 1;
				func_219(&(iParam1->f_6), 3);
			}
			func_228(uParam0, iParam1, bVar1, fVar0);
			break;
		case 4:
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam1->f_10[3 /*3*/], false))
			{
				if (!func_229(&(iParam1->f_10[3 /*3*/]), func_220(iParam1->f_4), func_220(iParam1->f_4)))
				{
					return;
				}
				func_230(&(iParam1->f_10[3 /*3*/]), func_220(iParam1->f_4), func_220(iParam1->f_4));
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_182, true);
				ANIMSCENE::START_ANIM_SCENE(iParam1->f_10[3 /*3*/]);
				func_218(&(iParam1->f_3), 3);
			}
			else
			{
				if (!func_229(&(iParam1->f_10[3 /*3*/]), func_220(iParam1->f_4), func_220(iParam1->f_4)))
				{
					return;
				}
				if (iParam1->f_4 == 5 || iParam1->f_4 == 4)
				{
					bVar2 = false;
					if (WEAPON::GET_CURRENT_PED_WEAPON(Global_34, &iVar3, true, 0, false) && iVar3 != joaat("WEAPON_UNARMED"))
					{
						func_187(0);
						bVar2 = true;
					}
					if (WEAPON::GET_CURRENT_PED_WEAPON(Global_34, &iVar3, true, 1, false) && iVar3 != joaat("WEAPON_UNARMED"))
					{
						func_187(1);
						bVar2 = true;
					}
					if (!bVar2)
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1->f_10[3 /*3*/], "SHOPKEEPER", uParam0->f_182, 0);
						TASK::TASK_ENTER_ANIM_SCENE(Global_34, iParam1->f_10[3 /*3*/], "ARTHUR", func_220(iParam1->f_4), 1069379748 /* Float: 1.48f */, 0, 0, 20000, -1082130432 /* Float: -1f */);
						func_218(&(iParam1->f_3), 5);
					}
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1->f_10[3 /*3*/], "SHOPKEEPER", uParam0->f_182, 0);
					if (iParam1->f_4 == 0 || iParam1->f_4 == 1)
					{
						func_124(&(iParam1->f_56));
						func_230(&(iParam1->f_10[3 /*3*/]), func_220(iParam1->f_4), func_220(iParam1->f_4));
						func_218(&(iParam1->f_3), 7);
					}
					else
					{
						func_124(&(iParam1->f_59));
						func_230(&(iParam1->f_10[3 /*3*/]), func_220(iParam1->f_4), func_220(iParam1->f_4));
						func_218(&(iParam1->f_3), 3);
					}
				}
			}
			if (((iParam1->f_4 != 5 && iParam1->f_4 != 4) && iParam1->f_4 != 9) && iParam1->f_4 != 10)
			{
				func_208(uParam0->f_182, func_231(iParam1->f_4, 0), 291934926, Global_34, 1, func_213(uParam0->f_1), 0, 1);
			}
			break;
		case 5:
			if (ANIMSCENE::_0x337F1CC8EE895601(iParam1->f_10[3 /*3*/], "ARTHUR"))
			{
				func_230(&(iParam1->f_10[3 /*3*/]), func_220(iParam1->f_4), func_220(iParam1->f_4));
				func_218(&(iParam1->f_3), 6);
			}
			break;
		case 6:
			if ((ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam1->f_10[3 /*3*/], false) && ANIMSCENE::_0x1F0E401031E20146(iParam1->f_10[3 /*3*/], func_220(iParam1->f_4))) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam1->f_10[3 /*3*/]) > 0.267f)
			{
				if (func_119(iParam1))
				{
					func_232(iParam1);
					func_56(&(iParam1->f_24), 16384);
				}
				else
				{
					func_208(Global_34, "TICKET_PLEASE", 291934926, uParam0->f_182, 1, func_207(func_195()), 0, 1);
					func_233(uParam0->f_117, 0, 0, 1, 0);
				}
				func_218(&(iParam1->f_3), 3);
			}
			break;
		case 7:
			if (!func_55(iParam1->f_24, 8192))
			{
				if (!iParam1->f_33)
				{
					func_234(uParam0);
				}
				func_84(&(iParam1->f_24), 8192);
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_182, 474215631, true) != 1)
			{
				if (((func_235(&(iParam1->f_56)) > 5f && !ANIMSCENE::_0x1F0E401031E20146(iParam1->f_10[3 /*3*/], func_220(1))) && !ANIMSCENE::_0x1F0E401031E20146(iParam1->f_10[3 /*3*/], func_220(3))) && !ANIMSCENE::_0x1F0E401031E20146(iParam1->f_10[3 /*3*/], func_220(0)))
				{
					TASK::TASK_COWER(uParam0->f_182, -1, Global_34, 0);
				}
			}
			if (!iParam1->f_33 && !iParam1->f_32)
			{
				func_236(uParam0, iParam1);
				func_218(&(iParam1->f_3), 0);
				return;
			}
			if (func_235(&(iParam1->f_56)) > 10f && !func_55(iParam1->f_24, 32))
			{
				func_217(iParam1, 1);
				func_84(&(iParam1->f_24), 32);
				func_218(&(iParam1->f_3), 4);
			}
			break;
		case 9:
			func_236(uParam0, iParam1);
			func_218(&(iParam1->f_3), 0);
			break;
		case 8:
			break;
		case 10:
			break;
	}
}

void func_118(int iParam0)
{
	if (!iParam0->f_40 && func_237(-1110862888 /* GXTEntry: "Theatre Ticket" */, 1))
	{
		iParam0->f_40 = 1;
	}
	if (!iParam0->f_41 && func_237(1242466573 /* GXTEntry: "Magic Lantern Ticket" */, 1))
	{
		iParam0->f_41 = 1;
	}
	if (!iParam0->f_42 && func_237(2037803338 /* GXTEntry: "Movie Ticket" */, 1))
	{
		iParam0->f_42 = 1;
	}
}

bool func_119(int iParam0)
{
	switch (iParam0->f_23)
	{
		case 1:
		case 3:
			if (iParam0->f_41)
			{
				return true;
			}
			break;
		case 2:
		case 4:
			if (iParam0->f_42)
			{
				return true;
			}
			break;
		case 0:
			if (iParam0->f_40)
			{
				return true;
			}
			break;
	}
	return false;
}

var func_120(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_121(int iParam0)
{
	return Global_1958010.f_1279[iParam0 /*7*/].f_2;
}

void func_122(var uParam0)
{
	if (*uParam0 & 1 != 0)
	{
		*uParam0 |= 64 | 16 | 16777216;
	}
}

float func_123(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_124(var uParam0)
{
	func_238(uParam0, 0f);
}

bool func_125(int iParam0, var uParam1, var uParam2)
{
	if (uParam1->f_11 != 0)
	{
		if (func_239(iParam0, uParam1))
		{
			if (!func_240(uParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_137(uParam2, 0, 0, 1, 0);
				func_184(&(uParam1->f_10), 1);
			}
			return true;
		}
		else if (func_240(uParam1->f_10, 1))
		{
			func_241(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_183(&(uParam1->f_10), 1);
		}
	}
	return false;
}

bool func_126(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	char cVar0[32];
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;

	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		bVar4 = func_240(iParam4, 32);
		func_242(iParam1, uParam2, 0);
		iVar5 = func_243(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return true;
		}
		iVar6 = 0;
		if (!func_240(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_240(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_240(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_240(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_240(iParam4, 8388608) || func_240(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_240(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_240(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_129(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_129(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_240(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (MISC::_0x870708A6E147A9AD(*uParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = func_244(uParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
						{
							iParam6 = MISC::GET_HASH_KEY(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*uParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 301, false);
			if (func_240(iParam4, 268435456))
			{
				iVar8 = func_245(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_246(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (func_129(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, false);
			}
			if (func_240(iParam4, 2) || func_240(iParam4, 16))
			{
				func_128(*uParam0, 1, 1);
			}
			else
			{
				func_128(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_127(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

void func_128(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_129(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

bool func_130(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = (!VOLUME::_DOES_VOLUME_EXIST(iParam2) || ENTITY::IS_ENTITY_IN_VOLUME(Global_34, iParam2, true, 0));
	bVar1 = iParam1 & 32 != false;
	bVar2 = iParam1 & 65792 != false;
	bVar3 = iParam1 & 1179648 != false;
	if (bVar0)
	{
		if (bVar1)
		{
			return true;
		}
		if (func_186(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_131(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	int iVar0;

	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					MISC::SET_BIT(uParam4[iVar0 /*17*/], 14);
					iVar0++;
				}
			}
			func_247(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_240(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_132(int iParam0)
{
	if (func_240(iParam0, 4))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK2"), true);
	}
	if (func_240(iParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD"), false);
	}
	if (func_240(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
	}
}

bool func_133(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	float fVar12;

	iVar1 = func_142();
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_34);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = PED::_IS_PED_CARRYING(Global_34);
	fVar12 = -1f;
	if (func_248(&(iParam1->f_13)))
	{
		fVar12 = func_211(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_13((uParam4[iVar0 /*17*/])->f_6);
		func_249(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_250(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_251(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_137(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_252(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						func_242(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET((*uParam4)[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (!bVar2)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_11))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_12))
							{
								TASK::TASK_PLAY_ANIM(Global_34, (uParam4[iVar0 /*17*/])->f_11, (uParam4[iVar0 /*17*/])->f_12, 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
							}
						}
					}
					if (func_253(iParam1, fParam6, iParam1->f_9))
					{
						func_124(&(iParam1->f_18));
						if (bVar6)
						{
							func_252(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		func_254(iParam1, fParam2);
	}
	return bVar5;
}

void func_134(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 20))
		{
			if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 21))
			{
				MISC::CLEAR_BIT(uParam0[iVar0 /*17*/], 20);
				MISC::CLEAR_BIT(uParam0[iVar0 /*17*/], 21);
			}
		}
		iVar0++;
	}
}

void func_135(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_255(uParam1[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET((*uParam1)[iVar0 /*17*/], 20))
			{
				func_254(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_136(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (func_256(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_257(iParam1, 0);
				func_242(iParam1, uParam2, func_129(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

void func_137(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_13((uParam0[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_14(&((uParam0[iVar0 /*17*/])->f_6), 1, 1);
					if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 1))
					{
						HUD::_DISPLAY_HUD_COMPONENT(-1744263063);
					}
					if (bParam2)
					{
						(uParam0[iVar0 /*17*/])->f_7 = 0;
						(*uParam0)[iVar0 /*17*/] = 0;
						(uParam0[iVar0 /*17*/])->f_5 = "";
						(uParam0[iVar0 /*17*/])->f_14 = 0;
						(uParam0[iVar0 /*17*/])->f_13 = "";
						(uParam0[iVar0 /*17*/])->f_15 = 0;
						(uParam0[iVar0 /*17*/])->f_11 = "";
						(uParam0[iVar0 /*17*/])->f_12 = "";
					}
				}
				iVar0++;
			}
		}
	}
}

bool func_138(var uParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
		{
			return false;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0f)
		{
			func_124(&(iParam1->f_18));
			return false;
		}
		else if (func_248(&(iParam1->f_18)))
		{
			func_258(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_248(&(iParam1->f_18)))
	{
		return true;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_34) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_34))
		{
			return false;
		}
	}
	return func_259(&(iParam1->f_18), fParam2);
	return true;
}

void func_139(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_249(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_140(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_141(int* iParam0, var uParam1)
{
	int iVar0;
	struct<17> Var1;
	struct<10> Var22;

	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var22.f_2 = 570;
	Var22.f_3 = 1065353216;
	Var22.f_4 = -1082130432;
	Var22.f_9 = 2;
	func_242(iParam0, uParam1, 1);
	func_137(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

int func_142()
{
	if (func_165() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

void func_143(var uParam0, int iParam1, bool bParam2)
{
	if (DECORATOR::DECOR_EXIST_ON(uParam0->f_182, "bUpdatedPlayer"))
	{
		DECORATOR::DECOR_SET_BOOL(uParam0->f_182, "bUpdatedPlayer", bParam2);
	}
	iParam1->f_30 = bParam2;
}

void func_144(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	func_260(iParam0, 0, 0);
	if (func_261(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam2, bParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_262(iParam0, fParam2, 1, bParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_263(iParam0, 1);
			}
			else
			{
				func_264(iParam0, 1);
			}
		}
		else
		{
			func_265(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_0x276AAF0F1C7F2494(iParam0, 1);
		}
	}
	else if (func_266())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

bool func_145(int iParam0, int iParam1)
{
	if (func_165() != -1)
	{
		return false;
	}
	if (!func_65(iParam0))
	{
		return false;
	}
	return (Global_9892[iParam0 /*2*/] && iParam1) != 0;
}

bool func_146(int iParam0)
{
	if (!func_65(iParam0))
	{
		return false;
	}
	return SCRIPTS::_DOES_THREAD_EXIST(Global_1893775[iParam0 /*3*/].f_2);
}

void func_147(int iParam0, int iParam1)
{
	if (func_165() != -1)
	{
		return;
	}
	if (!func_65(iParam0))
	{
		return;
	}
	Global_9892[iParam0 /*2*/] = (Global_9892[iParam0 /*2*/] - (Global_9892[iParam0 /*2*/] && iParam1));
}

void func_148(int iParam0)
{
	int iVar0;

	if (!func_65(iParam0))
	{
		return;
	}
	iVar0 = func_27(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	Global_1893775[iParam0 /*3*/].f_2 = 0;
}

int func_149(int iParam0, bool bParam1)
{
	if (!func_65(iParam0))
	{
		return 0;
	}
	if (!func_145(iParam0, 2))
	{
		return 0;
	}
	if (func_67(iParam0) == 0)
	{
		return 1;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(func_22(iParam0)))
	{
		return 1;
	}
	if (func_145(iParam0, 1) && !bParam1)
	{
		func_181(iParam0, 128);
		return 1;
	}
	func_147(iParam0, 129);
	func_148(iParam0);
	PERSCHAR::_0xFC77C5B44D5FF7C0(func_22(iParam0));
	func_164(iParam0, 0);
	return 1;
}

void func_150(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_151(int iParam0)
{
	return func_73(iParam0, 2);
}

bool func_152(int iParam0, int iParam1)
{
	if (!func_267(iParam0, 0))
	{
		return false;
	}
	if (func_153(iParam0))
	{
		return func_268(func_154(iParam0, 0), iParam1, 0);
	}
	return ITEMDATABASE::_0xDEE7B3C76ED664BE(iParam0, iParam1) > 0;
}

bool func_153(int iParam0)
{
	if (func_269(iParam0, 75135761))
	{
		return true;
	}
	return false;
}

int func_154(int iParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_267(iParam0, 0))
	{
		return func_271(func_270(iParam0), bParam1);
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0) || Var0.f_5 == 0)
	{
		return 0;
	}
	if (bParam1 && NETWORK::_0xFBE782B3165AC8EC(Var0.f_5))
	{
		return 0;
	}
	return Var0.f_5;
}

int func_155(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_272(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if ((Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR")) || Var0[iVar32 /*2*/] == joaat("CHARACTER_ROLE_TOKEN"))
		{
			return Var0[iVar32 /*2*/].f_1;
		}
		else if (Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam2)
	{
	}
	return 0;
}

bool func_156(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*uParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_267(iParam0, 0))
	{
		return false;
	}
	*uParam3 = ITEMDATABASE::_0xDEE7B3C76ED664BE(iParam0, iParam1);
	if (*uParam3 == 0)
	{
		if (!bParam5)
		{
		}
		return false;
	}
	if (!bParam5)
	{
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (!ITEMDATABASE::_0xAD73B614DF26CF8A(iParam0, iParam1, iVar0, uParam2[iVar0 /*2*/]))
		{
			Jump @113; //curOff = 101
		}
		else if (!bParam5)
		{
		}
		iVar0++;
	}
	if (bParam4)
	{
		func_273(iParam0, iParam1, uParam2, *uParam3);
	}
	return true;
}

bool func_157(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_158(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_39.f_3643[iVar1], iVar2);
}

bool func_159(int iParam0)
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

int func_160(int iParam0)
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

void func_161(int iParam0, bool bParam1, bool bParam2)
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

void func_162(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	PED::_SET_PED_BODY_COMPONENT(iParam0, joaat("META_HORSE_SADDLE_ONLY"));
	if (bParam1)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_163(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, 41611, 0f);
	}
	else
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, 41611, 1f);
	}
}

void func_164(int iParam0, int iParam1)
{
	if (!func_65(iParam0))
	{
		return;
	}
	Global_1893775[iParam0 /*3*/].f_1 = iParam1;
}

int func_165()
{
	return Global_1572887.f_13;
}

bool func_166(int iParam0)
{
	if (!func_65(iParam0))
	{
		return false;
	}
	if (!func_145(iParam0, 2))
	{
		return false;
	}
	return true;
}

void func_167(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		if (Global_1951255[iParam0 /*23*/].f_5 == 5 && !func_73(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_168(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1951255[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_169(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951255[iParam0 /*23*/].f_1 = (Global_1951255[iParam0 /*23*/].f_1 || iParam1);
}

void func_170(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951255[iParam0 /*23*/].f_1 = (Global_1951255[iParam0 /*23*/].f_1 - (Global_1951255[iParam0 /*23*/].f_1 && iParam1));
}

void func_171(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_172(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1940258.f_12)
	{
		if ((bParam2 || Global_1940258.f_13 > 0) || Global_1940258.f_11 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1940258.f_9 == 1370593166)
	{
		return 0;
	}
	if (Global_1940258.f_14 > 0 || (bParam2 && Global_1940258.f_14 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1940258.f_7)
		{
			if (bParam2 || Global_1940258.f_15 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_173(var uParam0)
{
	return Global_1958010.f_1279[func_110(uParam0->f_1) /*7*/].f_5;
}

void func_174(var uParam0)
{
	if ((uParam0->f_34 || uParam0->f_35) || func_38(Global_34, uParam0->f_44, 1, 0))
	{
		return;
	}
	switch (uParam0->f_23)
	{
		case 0:
			func_144(212326452, 1, 0f, 0, 0, 0, 0, 0);
			func_144(-80890560, 1, 0f, 0, 0, 0, 0, 0);
			func_144(-302077142, 1, 0f, 0, 0, 0, 0, 0);
			func_144(-531755063, 1, 0f, 0, 0, 0, 0, 0);
			break;
		case 1:
			func_144(-2034821814, 1, 0f, 0, 0, 0, 0, 0);
			func_144(-786191838, 1, 0f, 0, 0, 0, 0, 0);
			func_144(-1518382426, 1, 0f, 0, 0, 0, 0, 0);
			func_144(-223351546, 1, 0f, 0, 0, 0, 0, 0);
			break;
		case 2:
			func_144(235202295, 1, 0f, 0, 0, 0, 0, 0);
			func_144(-71941542, 1, 0f, 0, 0, 0, 0, 0);
			func_144(-723815263, 1, 0f, 0, 0, 0, 0, 0);
			func_144(1920184275, 1, 0f, 0, 0, 0, 0, 0);
			break;
		case 3:
			break;
		case 4:
			func_144(1373799284, 1, 0f, 0, 0, 0, 0, 0);
			func_144(1735175816, 1, 0f, 0, 0, 0, 0, 0);
			break;
	}
	uParam0->f_36 = 1;
}

void func_175(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_176(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_177(var uParam0, var uParam1)
{
	float fVar0;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_182))
	{
		fVar0 = func_41(Global_34, uParam0->f_182, 1, 1);
	}
	else
	{
		fVar0 = 150f;
	}
	if (fVar0 < 30f)
	{
		if ((uParam1->f_2 == 6 || uParam1->f_2 == 5) || uParam1->f_2 == 0)
		{
			func_175(&(uParam1->f_2), 1);
			return false;
		}
	}
	else if (fVar0 > 40f)
	{
		if (uParam1->f_2 != 5 && uParam1->f_2 != 6)
		{
			func_175(&(uParam1->f_2), 5);
			return true;
		}
	}
	return false;
}

void func_178(var uParam0, var uParam1)
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	switch (uParam1->f_2)
	{
		case 0:
			break;
		case 1:
			if (AUDIO::LOAD_STREAM(func_50(uParam1->f_25), func_51(uParam1->f_23)))
			{
				func_175(&(uParam1->f_2), 2);
			}
			break;
		case 2:
			AUDIO::PLAY_STREAM_FROM_POSITION(func_274(uParam0->f_1), AUDIO::_0x0556C784FA056628(func_50(uParam1->f_25), func_51(uParam1->f_23)));
			func_175(&(uParam1->f_2), 3);
			break;
		case 3:
			if (!AUDIO::IS_STREAM_PLAYING(AUDIO::_0x0556C784FA056628(func_50(uParam1->f_25), func_51(uParam1->f_23))))
			{
				func_175(&(uParam1->f_2), 4);
			}
			break;
		case 4:
			uParam1->f_25++;
			if (uParam1->f_25 >= 10)
			{
				uParam1->f_25 = 0;
			}
			func_175(&(uParam1->f_2), 1);
			break;
		case 5:
			if (func_52(func_50(uParam1->f_25), func_51(uParam1->f_23)))
			{
				AUDIO::STOP_STREAM(AUDIO::_0x0556C784FA056628(func_50(uParam1->f_25), func_51(uParam1->f_23)));
				func_175(&(uParam1->f_2), 6);
			}
			break;
		case 6:
			break;
	}
}

void func_179(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_180(int iParam0, bool bParam1)
{
	if (!func_65(iParam0))
	{
		return false;
	}
	if ((func_145(iParam0, 1) && !func_53(iParam0)) && func_146(iParam0))
	{
		return false;
	}
	if (!func_145(iParam0, 2))
	{
		return false;
	}
	if (!bParam1)
	{
		if (!func_70(iParam0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_181(int iParam0, int iParam1)
{
	if (func_165() != -1)
	{
		return;
	}
	if (!func_65(iParam0))
	{
		return;
	}
	Global_9892[iParam0 /*2*/] = (Global_9892[iParam0 /*2*/] || iParam1);
}

void func_182(int iParam0)
{
	if (!func_65(iParam0))
	{
		return;
	}
	Global_1893775[iParam0 /*3*/].f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_183(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_184(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_185(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_186(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_275(16))
	{
		return Global_1940258.f_51 == iParam0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar0, bParam2, bParam3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar0))
				{
					func_276(16);
					Global_1940258.f_51 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					if (Global_1940258.f_51 == iParam0)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_187(int iParam0)
{
	int iVar0;

	iVar0 = func_277(Global_34, 0, iParam0, 0);
	if (func_278(iVar0))
	{
		if (WEAPON::_0x2C83212A7AA51D3D(iVar0))
		{
			WEAPON::_0xCEF4C65DE502D367(Global_34, 1, iParam0, 1, 0);
		}
		else if (func_279(iVar0))
		{
			if (func_278(func_277(Global_34, 0, 7, 0)) || func_278(func_277(Global_34, 0, 9, 0)))
			{
				if (func_278(func_277(Global_34, 0, 8, 0)))
				{
					func_280(iVar0);
				}
				else
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_34, iVar0, true, 8, false, false);
				}
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_34, iVar0, true, 7, false, false);
			}
		}
		else if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0) && iVar0 != joaat("WEAPON_FISHINGROD"))
		{
			if (func_278(func_277(Global_34, 0, 7, 0)) || func_278(func_277(Global_34, 0, 9, 0)))
			{
				if (func_278(func_277(Global_34, 0, 10, 0)))
				{
					func_280(iVar0);
				}
				else
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_34, iVar0, true, 10, false, false);
				}
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_34, iVar0, true, 9, false, false);
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (iParam0 == 0)
			{
				if (!func_278(func_277(Global_34, 0, 2, 0)))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_34, iVar0, true, 2, false, false);
				}
				else
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_34, iVar0, true, 3, false, false);
				}
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_34, iVar0, true, 3, false, false);
			}
		}
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, iParam0, false, false);
	}
}

bool func_188(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

bool func_189(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_281(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_282(iVar1))
	{
		if (Global_1071686.f_19648.f_24 && !func_283(iParam0))
		{
			return false;
		}
		return (MISC::IS_BIT_SET(Global_1071686.f_19648[iVar1], iVar2) || MISC::IS_BIT_SET(Global_39.f_110[iVar1], iVar2));
	}
	return MISC::IS_BIT_SET(Global_39.f_110[iVar1], iVar2);
}

void func_190(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_281(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(&(Global_39.f_110[iVar1]), iVar2);
	Global_1939655 = 0;
}

void func_191(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_281(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::CLEAR_BIT(&(Global_39.f_110[iVar1]), iVar2);
	Global_1939655 = 0;
}

void func_192(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_193(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("P_CS_LETTER03X");
		case 1:
			return joaat("P_MONEYSTACK01X");
		case 2:
			return joaat("P_COINSTACK02");
		case 3:
			return joaat("P_FOLDEDBILLSXSMALL01BX");
		case 4:
			return joaat("P_CS_ADMITTICKET01X");
		default:
			break;
	}
	return 0;
}

char* func_194(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@rcm@roddf@ig@roddf_s3@ig2_boxofficegreet";
		case 1:
			return "script@rcm@roddf@ig@roddf_s3@ig3_boxofficeleave";
		case 2:
			return "script@rcm@roddf@ig@roddf_s3@ig4_boxofficecollect";
		case 3:
			return "script@shows@magic_lantern@ig1_ticket_collector@action";
		default:
			break;
	}
	return "[THEATER_TT_GET_ANIM_SCENE_NAME] - FAIL -- 0";
}

bool func_195()
{
	return false;
}

char* func_196(bool bParam0)
{
	return "pl_Conv_TicketTeller_Arthur";
}

bool func_197(var uParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam0, true, false))
	{
		return true;
	}
	if (!uParam0->f_1 && !ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		if (bParam3)
		{
			*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, 0, sParam2, false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
		uParam0->f_1 = 1;
	}
	return false;
}

char* func_198()
{
	return "pl_Convo_LetterPickup";
}

char* func_199(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_Enter_45L";
		case 1:
			return "pl_Enter_45R";
		case 2:
			return "pl_Enter_F_NoWalk";
		case 3:
			return "pl_Enter_F_Walk";
		default:
			break;
	}
	return "[THEATER_TT_GET_ODDF_COLLECT_PLAYLIST] -- FAIL -- 1";
}

void func_200(int iParam0)
{
	int iVar0;
	struct<10> Var1;
	int iVar12;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		iVar12 = iVar0;
		Var1 = { func_284(iVar12) };
		iParam0->f_51[iVar12] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var1.f_10, Var1, Var1.f_3, Var1.f_6, Var1.f_9);
		iVar0++;
	}
}

void func_201(var uParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_182) || ENTITY::IS_ENTITY_DEAD(uParam0->f_182))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "s_m_m_sdticketseller_01", uParam0->f_182, 0);
	if (!func_195())
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "ARTHUR", Global_34, 0);
		func_285(uParam1, "b_playerArthur", 1, "IG2");
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "JOHN", Global_34, 0);
	}
	ANIMSCENE::START_ANIM_SCENE(*uParam1);
}

void func_202(var uParam0, var uParam1, int iParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_182) || ENTITY::IS_ENTITY_DEAD(uParam0->f_182))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "s_m_m_sdticketseller_01", uParam0->f_182, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam2->f_45[0]))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "P_CS_LETTER03X", iParam2->f_45[0], 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2->f_45[1]))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "p_moneyStack01x", iParam2->f_45[1], 0);
	}
	if (!func_195())
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "ARTHUR", Global_34, 0);
		func_285(uParam1, "b_playerArthur", 1, "IG3");
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "JOHN", Global_34, 0);
	}
	ANIMSCENE::START_ANIM_SCENE(*uParam1);
}

int func_203(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13)
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
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_73(iVar0, 2))
		{
			if (iParam2 == Global_1951255[iVar0 /*23*/].f_10 && iParam1 == Global_1951255[iVar0 /*23*/].f_4)
			{
				return iVar0;
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
		func_74(iVar1, iParam1, sParam0, 2, iParam3, iParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1065353216 /* Float: 1f */, 0, 0, 0, iParam12, bParam13);
		return iVar1;
	}
	return 0;
}

void func_204(var uParam0, var uParam1, int iParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_182) || ENTITY::IS_ENTITY_DEAD(uParam0->f_182))
	{
		return;
	}
	if (!func_195())
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "player_zero", Global_34, 0);
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "player_zero", Global_34, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2->f_45[0]))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "p_cs_letter03x", iParam2->f_45[0], 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2->f_45[1]))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "p_moneyStack01x", iParam2->f_45[1], 0);
	}
	ANIMSCENE::START_ANIM_SCENE(*uParam1);
}

int func_205(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	struct<13> Var6;
	int iVar29;
	struct<2> Var30;
	bool bVar32;

	if (!func_267(iParam0, 0))
	{
		return 0;
	}
	if (!func_286(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_287(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_288(iParam0, bParam2);
	iVar2 = 0;
	if (func_289(iParam0) == joaat("CLOTHING"))
	{
		if (!func_269(iParam0, 866047851) && !func_269(iParam0, -1979000645))
		{
			bVar3 = true;
		}
	}
	if (func_290(iParam0, 8388608) && !func_60(27))
	{
		func_291(27);
	}
	func_292(iParam0);
	if (!bVar3)
	{
		if (func_269(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			iVar1 = func_294(func_293(iParam0, 1), 0);
			if (WEAPON::IS_WEAPON_VALID(iVar1))
			{
				if (func_165() == -1)
				{
					func_295(iVar1);
				}
				if (func_296(0) && func_297(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
				{
					func_298(iParam0, iVar0, iParam5);
					if (!bParam9)
					{
						bParam2 = false;
					}
				}
				else
				{
					func_299(iParam0, iVar0, iParam5);
				}
			}
		}
		else if (func_289(iParam0) == joaat("WEAPON"))
		{
			if (!func_300(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_289(iParam0) == joaat("AMMO") && func_301(iParam0))
		{
			if (!func_302(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_269(iParam0, -103750053))
		{
			func_304(func_303(joaat("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			func_304(func_305(joaat("COLLECTED"), joaat("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (func_269(iParam0, -121341956) && !func_269(iParam0, 606799272))
		{
			if (iParam0 != joaat("WEAPON_KIT_DETECTOR"))
			{
				func_306(536, 0);
			}
			if (func_269(iParam0, -2017733358) || func_269(iParam0, -1369131378))
			{
			}
		}
		else if (func_269(iParam0, -136654233))
		{
			if (func_269(iParam0, -1021472396))
			{
			}
		}
		else if (func_269(iParam0, -1466706512) && func_269(iParam0, 1147021565))
		{
			func_306(519, 0);
		}
		else if (func_269(iParam0, 1147021565) && func_269(iParam0, -524514947))
		{
		}
		else if (func_269(iParam0, 554195525))
		{
		}
		else if (func_269(iParam0, 589988438))
		{
			if (func_307())
			{
				func_308(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_269(iParam0, 787083290) && func_269(iParam0, 949916894))
		{
			func_309(iParam0);
		}
		else if (func_269(iParam0, -1718133314))
		{
			func_310(iParam0);
		}
		else if (func_269(iParam0, -1738650224))
		{
			func_311(iParam0);
		}
		else if (func_269(iParam0, -1112814642) && func_269(iParam0, 949916894))
		{
			func_312(iParam0);
		}
		else if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1940144.f_21 = 0;
		}
		else if (func_269(iParam0, 1841149704))
		{
			func_313();
		}
		else if (func_269(iParam0, -1979000645))
		{
		}
		else if (func_269(iParam0, 606799272))
		{
		}
		else if (func_269(iParam0, -1112814642) && func_269(iParam0, -1697809989))
		{
		}
		else if (func_269(iParam0, -2017733358) || func_269(iParam0, -1369131378))
		{
		}
		else if (func_269(iParam0, -1921346699))
		{
			return 0;
		}
		else if (func_269(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_237(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1))
					{
						func_205(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_237(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1))
					{
						func_205(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_237(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1))
					{
						func_205(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_237(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1))
					{
						func_205(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_237(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1))
					{
						func_205(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_237(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1))
					{
						func_205(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_269(iParam0, -839724752) && func_290(iParam0, 4))
		{
		}
		else if (func_269(iParam0, 1399091007))
		{
			func_314(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		switch (iParam0)
		{
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("ARROW_BUNDLE");
				break;
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
			case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_CRICKETS");
				break;
			case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_WORMS");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("PROVISION_MP_TREASURE_MAP_REWARDS_BOX_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("REWARD_ABANDONED_LOOT_MALE");
				break;
			case joaat("WEAPON_KIT_BINOCULARS"):
			case joaat("WEAPON_KIT_BINOCULARS_IMPROVED"):
				break;
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
				func_316(272, func_315(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				func_316(270, func_315(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				func_316(271, func_315(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"):
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940311.f_10903 + 60000))
				{
					func_317(685, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health Bar." */, 1, 1);
					Global_1940311.f_10903 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_POTENT_RESTORATIVE"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM"):
			case joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"):
			case joaat("CONSUMABLE_RESTORATIVE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940311.f_10903 + 60000))
				{
					func_317(685, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Stamina Bar." */, 1, 1);
					Global_1940311.f_10903 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SNAKE_OIL"):
			case joaat("CONSUMABLE_POTENT_SNAKE_OIL"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO"):
			case joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940311.f_10903 + 60000))
				{
					func_317(685, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1940311.f_10903 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940311.f_10903 + 60000))
				{
					func_317(685, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health, Stamina and Dea" +
    "d Eye Bars." */, 1, 1);
					Global_1940311.f_10903 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_LAMB_HEART"):
			case joaat("CONSUMABLE_MEAL_PRIME_RIB"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL"):
			case joaat("CONSUMABLE_MEAL_CONSOMME"):
			case joaat("CONSUMABLE_MEAL_FRIED_CATFISH"):
			case joaat("CONSUMABLE_MEAL_PRAIRIE_CHICKEN"):
			case joaat("CONSUMABLE_MEAL_LAMB_FRY"):
			case joaat("CONSUMABLE_MEAL_OYSTER_STEW"):
			case joaat("CONSUMABLE_MEAL_TURTLE_SOUP"):
			case joaat("CONSUMABLE_MEAL_OATMEAL"):
			case joaat("CONSUMABLE_MEAL_CORNED_BEEF_HASH"):
			case joaat("CONSUMABLE_MEAL_ROAST_BEEF"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940311.f_10903 + 60000))
				{
					func_317(686, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1940311.f_10903 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940311.f_10903 + 60000))
				{
					func_317(686, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1940311.f_10903 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				func_306(526, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				func_306(529, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_60(1))
				{
					func_306(522, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				func_306(521, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_165() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				func_306(534, 0);
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
		iVar5 = iParam0;
		func_318(&iVar5);
		if (!func_299(iVar5, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_296(0))
		{
			return 1;
		}
		if (func_289(iParam0) == joaat("CLOTHING"))
		{
			func_319(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_296(0) && !func_320())
		{
			Var6.f_1 = 10;
			Var6.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_34, 0, 0, iVar2, &Var6, 0);
			iVar29 = 0;
			while (iVar29 < Var6)
			{
				func_205(Var6.f_1[iVar29], Var6.f_12[iVar29], 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar29++;
			}
		}
		else
		{
			func_321(iVar2, 0);
		}
	}
	Var30 = { func_322(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var30))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var30, iVar0);
	}
	func_323(iParam0);
	if (fParam6 > 0f)
	{
		if (func_269(iParam0, -839724752))
		{
			func_324(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar32 = iParam5 == 1248274121;
		func_325(iParam0, iVar0, 0, bVar32, 0, 0, 0);
	}
	return 1;
}

void func_206(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6)
{
	if (func_165() == 0)
	{
		if (((func_326(iParam0, sParam4, bParam6) == -1 && !bParam6) && func_296(0)) && !func_320())
		{
			func_327(iParam0, sParam4, iParam5, 0);
		}
	}
	else
	{
		if (!bParam1)
		{
			func_327(iParam0, sParam4, iParam5, 0);
		}
		func_328(iParam0, bParam1, fParam2, iParam3);
	}
}

char* func_207(bool bParam0)
{
	if (bParam0)
	{
		return "JOHN_PLAYER";
	}
	return "ARTHUR";
}

bool func_208(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = sParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = uParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_329(iParam0, &Var0);
}

void func_209(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_210(int iParam0)
{
	return AUDIO::_0xA2CAC9DEF0195E6F(iParam0);
}

float func_211(var uParam0)
{
	if (!func_248(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_330(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_331() - uParam0->f_1);
}

char* func_212(int iParam0)
{
	switch (iParam0)
	{
		case 21:
		case 31:
			return "MAGIC_LANTERN_THE_BEAR";
		case 22:
		case 32:
			return "MAGIC_LANTERN_JOSIAH_BLACKWATER";
		case 23:
		case 33:
			return "MAGIC_LANTERN_WONDERS_OF_THE_AGE";
		case 24:
		case 34:
			return "MAGIC_LANTERN_SAVIORS_SAVAGES";
		case 25:
		case 35:
			return "MAGIC_LANTERN_GHOSTLY_SERENADE";
		case 26:
		case 36:
			return "MOVIE_DIRECT_CURRENT_DAMNATION";
		case 27:
		case 37:
			return "MOVIE_FARMERS_DAUGHTER";
		case 28:
		case 38:
			return "MOVIE_MODERN_MEDICINE";
		case 29:
		case 39:
			return "MOVIE_BEAUMONT_THE_BURLY";
		case 30:
		case 40:
			return "MOVIE_SKETCHING_FOR_SWEETHEART";
		default:
			break;
	}
	return "FAIL";
}

char* func_213(int iParam0)
{
	switch (iParam0)
	{
		case 33:
			return "JK_TICKET_TAKER";
		case 519:
			return "FH_TOWNDEALER";
		case 277:
			return "JS_TOWNDEALER";
		case 278:
			return "FH_TOWNDEALER";
		default:
			break;
	}
	return "JK_TICKET_TAKER";
}

bool func_214(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return false;
	}
	if ((WEAPON::_IS_WEAPON_LASSO(Global_1940258.f_38) || joaat("WEAPON_THROWN_BOLAS") == Global_1940258.f_38) && Global_1940258.f_21)
	{
	}
	else if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, false, false))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar2) && iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2))
		{
			return false;
		}
	}
	if (Global_1940258.f_34 != 0)
	{
		if (PED::_GET_RIDER_OF_MOUNT(Global_1940258.f_34, true) == iParam0)
		{
			return false;
		}
	}
	if (bParam3)
	{
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_41(iVar0, iParam0, 1, 1) <= 4f)
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(func_332(iVar0, 0)))
		{
			if (func_333(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_215(int iParam0, float fParam1, float fParam2, float fParam3, bool bParam4)
{
	return func_334(iParam0, fParam1, fParam2, fParam3, bParam4);
}

int func_216(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_6)
	{
		func_335(uParam2, 1, iVar0);
	}
	if (!Global_1940258.f_6 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_13 = fParam5;
		}
		else
		{
			uParam2->f_13 = BUILTIN::VDIST(Global_35, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_2 & 128 != 0)
		{
			if (func_336(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_337(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1940258.f_21)
		{
			if (!uParam2->f_2 & 8 != 0)
			{
				if (func_338(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_337(iParam0, uParam2, *uParam3);
					return 1;
				}
				else if (func_339(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_337(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_340(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_337(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1940258.f_20 && func_81(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_2 & 524288 == 0))
		{
			if (!uParam2->f_2 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_337(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1940258.f_19)
		{
			if (func_341(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_2 & 4 != 0)
				{
					if (func_342(Global_34, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_337(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
				if (!uParam2->f_2 & 256 != 0)
				{
					if (func_343(Global_34, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_337(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_2 & 16 != 0)
		{
			if ((uParam2->f_6 - Global_1940258.f_23) < 300)
			{
				if (func_344(Global_34, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_337(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (func_344(Global_34, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_337(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1940258.f_33 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_345(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_337(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1940258.f_19 || uParam2->f_13 < 20f)
			{
				if (func_346(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_337(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1940258.f_24 || Global_1940258.f_25)
		{
			if (!uParam2->f_2 & 2 != 0)
			{
				if (func_347(uParam2, 4000))
				{
					if ((func_348(iParam0, Global_1940258.f_35, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_349(uParam2, iParam0)) && func_350(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_337(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_2 & 2 != 0)
		{
			if (uParam2->f_13 < 4f)
			{
				if ((func_348(iParam0, Global_1940258.f_35, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_349(uParam2, iParam0)) && func_350(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_337(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (Global_1940258.f_34 == 0)
			{
				if (Global_1940258.f_35 != 0)
				{
					if (func_351(iParam0, Global_1940258.f_35))
					{
						func_352();
						*uParam3 = 2;
						func_337(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (uParam2->f_13 < 10f)
			{
				if (func_353(uParam2, iParam0) || (uParam2->f_10 > 0 && (func_354() - uParam2->f_10) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_352();
						*uParam3 = 2;
						func_337(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (Global_1940258.f_36 != 0)
			{
				if (func_355())
				{
					if (func_351(iParam0, Global_1940258.f_36))
					{
						func_352();
						*uParam3 = 2;
						func_337(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_2 & 1024 != 0)
		{
			if (func_356(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_337(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (func_357(uParam2, iParam0))
		{
			*uParam3 = 1048576;
			func_337(iParam0, uParam2, *uParam3);
			return 1;
		}
		if (uParam2->f_13 < uParam2->f_29)
		{
			if (!uParam2->f_2 & 2048 != 0)
			{
				if (func_358(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_337(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_7 == 2)
				{
					if (func_359(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_337(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_360(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_337(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_13 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_361(uParam2, 4000))
				{
					if (func_362(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_337(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_13 < uParam2->f_21)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_363(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_5 = 0;
					func_337(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_2 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_364(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_337(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
	}
	return 0;
}

void func_217(int iParam0, int iParam1)
{
	iParam0->f_5 = iParam0->f_4;
	iParam0->f_4 = iParam1;
}

void func_218(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_219(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

char* func_220(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PL_AggroCower";
		case 2:
			return "PL_AggroRun";
		case 3:
			return "PL_CowerBase";
		case 1:
			return "PL_CowerGoAway";
		case 4:
			return "PL_BuyLt";
		case 5:
			return "PL_BuyRt";
		case 6:
			return "PL_Greet1";
		case 7:
			return "PL_Greet2";
		case 8:
			return "PL_HelpYou";
		case 15:
			return "PL_NoShow1";
		case 16:
			return "PL_NoShow2";
		case 9:
			return "PL_OpenCurtain";
		case 11:
			return "PL_ShowNegLt";
		case 12:
			return "PL_ShowNegRt";
		case 13:
			return "PL_ShowPosLt";
		case 14:
			return "PL_ShowPosRt";
		case 10:
			return "Pl_Base";
		default:
			break;
	}
	return "[THEATER_TT_GET_TICKET_COLLECTOR_PLAYLIST] -- FAIL -- 77";
}

void func_221(int iParam0)
{
	if (func_119(iParam0))
	{
		STREAMING::REQUEST_MODEL(func_193(4), false);
	}
	else if (iParam0->f_23 == 0)
	{
		STREAMING::REQUEST_MODEL(func_193(3), false);
	}
	else
	{
		STREAMING::REQUEST_MODEL(func_193(2), false);
	}
}

void func_222(var uParam0, var uParam1, int iParam2)
{
	struct<7> Var0;

	switch (iParam2)
	{
		case 0:
			if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
			{
				Var0 = { func_284(2) };
				*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(Var0, Var0.f_3, Var0.f_6, "TICKET_TAKER_INTERACT_SMALL");
			}
			if (!VOLUME::_DOES_VOLUME_EXIST(*uParam1))
			{
				Var0 = { func_284(3) };
				*uParam1 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(Var0, Var0.f_3, Var0.f_6, "TICKET_TAKER_INTERACT_LARGE");
			}
			break;
		case 1:
		case 2:
			if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
			{
				*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2685.265f, -1363.339f, 48.15632f, 0f, 0f, 40.164f, 2.969626f, 2.725822f, 3.152676f, "TICKET_TAKER_INTERACT_SMALL");
			}
			if (!VOLUME::_DOES_VOLUME_EXIST(*uParam1))
			{
				*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2685.704f, -1362.969f, 48.15632f, 0f, 0f, 40.164f, 4.125022f, 8.24628f, 3.152676f, "TICKET_TAKER_INTERACT_LARGE");
			}
			break;
		case 4:
			if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
			{
				*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-788.2858f, -1362.648f, 44.1069f, 0f, 0f, 0f, 2.572522f, 2.070467f, 2.851869f, "TICKET_TAKER_INTERACT_SMALL");
			}
			if (!VOLUME::_DOES_VOLUME_EXIST(*uParam1))
			{
				*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-787.9954f, -1362.648f, 44.1069f, 0f, 0f, 0f, 2.967766f, 7.108891f, 2.851869f, "TICKET_TAKER_INTERACT_LARGE");
			}
			break;
		case 3:
			if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
			{
				*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-353.9453f, 707.1058f, 117.0155f, 0f, 0f, -29.98282f, 3.680929f, 4.116389f, 2.594225f, "TICKET_TAKER_INTERACT_SMALL");
			}
			if (!VOLUME::_DOES_VOLUME_EXIST(*uParam1))
			{
				*uParam1 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-353.0224f, 707.7128f, 117.0762f, 0f, 0f, 0f, 3f, 3f, 1.726511f, "TICKET_TAKER_INTERACT_LARGE");
			}
			break;
	}
}

bool func_223(int iParam0)
{
	if (func_119(iParam0))
	{
		if (STREAMING::HAS_MODEL_LOADED(func_193(4)))
		{
			return true;
		}
	}
	else if (iParam0->f_23 == 0)
	{
		if (STREAMING::HAS_MODEL_LOADED(func_193(3)))
		{
			return true;
		}
	}
	else if (STREAMING::HAS_MODEL_LOADED(func_193(2)))
	{
		return true;
	}
	return false;
}

bool func_224(int iParam0, vector3 vParam1, int iParam4)
{
	if (func_119(iParam0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_45[4]))
		{
			iParam0->f_45[4] = OBJECT::CREATE_OBJECT(func_193(4), vParam1, true, true, false, false, true);
			return false;
		}
	}
	else if (iParam4 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_45[3]))
		{
			iParam0->f_45[3] = OBJECT::CREATE_OBJECT(func_193(3), vParam1, true, true, false, false, true);
			return false;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_45[2]))
	{
		iParam0->f_45[2] = OBJECT::CREATE_OBJECT(func_193(2), vParam1, true, true, false, false, true);
		return false;
	}
	return true;
}

void func_225(int iParam0, int iParam1)
{
	if (func_119(iParam0))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_10[3 /*3*/], "COINS", iParam0->f_45[4], 0);
	}
	else if (iParam1 == 0)
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_10[3 /*3*/], "COINS", iParam0->f_45[3], 0);
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_10[3 /*3*/], "COINS", iParam0->f_45[2], 0);
	}
}

Vector3 func_226(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2542.176f, -1282.525f, 48.218f;
		case 1:
			return 2686.802f, -1362.095f, 47.215f;
		case 2:
			return 2686.802f, -1362.095f, 47.215f;
		case 4:
			return -789.7354f, -1362.636f, 42.82219f;
		case 3:
			return -355.1843f, 705.1395f, 115.9362f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_227(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f, 0f, 47.261f;
		case 1:
			return 0f, 0f, 129.887f;
		case 2:
			return 0f, 0f, 129.887f;
		case 4:
			return 0f, 0f, -90.358f;
		case 3:
			return 0f, 0f, -31.467f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_228(var uParam0, int iParam1, bool bParam2, float fParam3)
{
	bool bVar0;

	bVar0 = func_210(1);
	switch (iParam1->f_6)
	{
		case 0:
			if (!func_248(&(iParam1->f_59)))
			{
				func_124(&(iParam1->f_59));
			}
			if ((((!func_121(func_110(uParam0->f_1)) && !func_55(iParam1->f_24, 2)) && func_38(Global_34, iParam1->f_51[3], 1, 0)) && !Global_1958010.f_1323) && !bParam2)
			{
				func_217(iParam1, 6);
				func_124(&(iParam1->f_59));
				func_218(&(iParam1->f_3), 4);
				func_84(&(iParam1->f_24), 2);
			}
			if (((((((!func_55(iParam1->f_24, 128) && !Global_1958010.f_1323) && !bVar0) && func_55(iParam1->f_24, 2)) && func_38(Global_34, iParam1->f_51[3], 1, 0)) && !bParam2) && func_211(&(iParam1->f_59)) > 15f) && !AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_182))
			{
				func_124(&(iParam1->f_59));
				func_84(&(iParam1->f_24), 128);
				iParam1->f_27++;
				func_217(iParam1, 8);
				func_218(&(iParam1->f_3), 4);
			}
			if ((((((func_55(iParam1->f_24, 128) && !Global_1958010.f_1323) && !bVar0) && func_211(&(iParam1->f_59)) > (15f * IntToFloat(iParam1->f_27))) && iParam1->f_26 <= 3) && func_38(Global_34, iParam1->f_51[3], 1, 0)) && !AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_182))
			{
				func_208(uParam0->f_182, func_365(func_110(uParam0->f_1)), 291934926, Global_34, 1, func_213(uParam0->f_1), 0, 1);
				iParam1->f_26++;
				iParam1->f_27++;
				func_124(&(iParam1->f_59));
			}
			if (func_55(iParam1->f_24, 4) && !Global_1958010.f_1323)
			{
				func_217(iParam1, func_366(func_110(uParam0->f_1)));
				func_56(&(iParam1->f_24), 4);
				func_84(&(iParam1->f_24), 8);
				func_219(&(iParam1->f_6), 1);
				func_124(&(iParam1->f_59));
				func_84(&(iParam1->f_24), 2);
				func_84(&(iParam1->f_24), 128);
				func_218(&(iParam1->f_3), 4);
			}
			if (!func_111(func_110(uParam0->f_1)))
			{
				func_219(&(iParam1->f_6), 3);
			}
			break;
		case 1:
			if (!func_55(iParam1->f_24, 2048) && func_38(Global_34, Global_1958010.f_7[Global_39.f_4648[func_110(uParam0->f_1)] /*31*/].f_4, 1, 0))
			{
				func_84(&(iParam1->f_24), 2048);
			}
			if (!func_55(iParam1->f_24, 1024))
			{
				switch (func_110(uParam0->f_1))
				{
					case 3:
						if (ANIMSCENE::_0x1F0E401031E20146(iParam1->f_10[3 /*3*/], func_220(func_366(func_110(uParam0->f_1)))) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam1->f_10[3 /*3*/]) > 0.5f)
						{
							func_208(uParam0->f_182, func_367(func_110(uParam0->f_1)), 291934926, Global_34, 1, func_213(uParam0->f_1), 0, 1);
							func_84(&(iParam1->f_24), 1024);
						}
						break;
					case 0:
					case 1:
					case 2:
					case 4:
						if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam1->f_10[3 /*3*/]) > 0.4f)
						{
							func_208(uParam0->f_182, func_367(func_110(uParam0->f_1)), 291934926, Global_34, 1, func_213(uParam0->f_1), 0, 1);
							func_84(&(iParam1->f_24), 1024);
						}
						break;
				}
			}
			if (!func_55(iParam1->f_24, 16) && func_110(uParam0->f_1) == 3)
			{
				if ((func_55(iParam1->f_24, 8) && ANIMSCENE::_0x1F0E401031E20146(iParam1->f_10[3 /*3*/], func_220(5))) && !bParam2)
				{
					if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_34, iParam1->f_10[3 /*3*/]))
					{
						func_190(1015669983);
						func_84(&(iParam1->f_24), 16);
					}
				}
			}
			if (!func_55(iParam1->f_24, 512) && func_55(iParam1->f_24, 2048))
			{
				if (((!Global_1958010.f_1324 && func_38(Global_34, iParam1->f_51[3], 1, 0)) && func_235(&(iParam1->f_59)) > 25f) && !bVar0)
				{
					func_84(&(iParam1->f_24), 512);
					func_217(iParam1, 12);
					func_218(&(iParam1->f_3), 4);
				}
			}
			if (!func_55(iParam1->f_24, 256) && func_55(iParam1->f_24, 2048))
			{
				if (((Global_1958010.f_1324 && func_38(Global_34, iParam1->f_51[3], 1, 0)) && func_235(&(iParam1->f_59)) > 25f) && !bVar0)
				{
					func_84(&(iParam1->f_24), 256);
					func_217(iParam1, 14);
					func_218(&(iParam1->f_3), 4);
				}
			}
			if (!Global_1958010.f_1323)
			{
				func_124(&(iParam1->f_59));
				func_219(&(iParam1->f_6), 2);
			}
			if (func_111(func_110(uParam0->f_1)) && !Global_1958010.f_1323)
			{
				func_368(iParam1);
				func_217(iParam1, 10);
				func_218(&(iParam1->f_3), 4);
				func_124(&(iParam1->f_59));
				func_219(&(iParam1->f_6), 0);
			}
			break;
		case 2:
			if ((((!func_55(iParam1->f_24, 64) && func_38(Global_34, iParam1->f_51[3], 1, 0)) && !Global_1958010.f_1323) && func_235(&(iParam1->f_59)) > 30f) && !func_111(func_110(uParam0->f_1)))
			{
				func_217(iParam1, 15);
				func_218(&(iParam1->f_3), 4);
				func_84(&(iParam1->f_24), 64);
			}
			if ((((func_55(iParam1->f_24, 64) && iParam1->f_28 < 3) && func_211(&(iParam1->f_59)) > (15f * IntToFloat(iParam1->f_29))) && func_38(Global_34, iParam1->f_51[3], 1, 0)) && !AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_182))
			{
				func_208(uParam0->f_182, func_365(func_110(uParam0->f_1)), 291934926, Global_34, 1, func_213(uParam0->f_1), 0, 1);
				iParam1->f_28++;
				iParam1->f_29++;
				func_124(&(iParam1->f_59));
			}
			if (func_111(func_110(uParam0->f_1)))
			{
				func_368(iParam1);
				func_217(iParam1, 10);
				func_218(&(iParam1->f_3), 4);
				func_124(&(iParam1->f_59));
				func_219(&(iParam1->f_6), 0);
			}
			break;
		case 3:
			if (((!func_55(iParam1->f_24, 64) && func_38(Global_34, iParam1->f_51[3], 1, 0)) && !Global_1958010.f_1323) && !func_111(func_110(uParam0->f_1)))
			{
				func_217(iParam1, 15);
				func_218(&(iParam1->f_3), 4);
				func_84(&(iParam1->f_24), 64);
			}
			if (((func_55(iParam1->f_24, 64) && iParam1->f_28 < 3) && func_211(&(iParam1->f_59)) > (15f * IntToFloat(iParam1->f_29))) && func_38(Global_34, iParam1->f_51[3], 1, 0))
			{
				func_208(uParam0->f_182, func_365(func_110(uParam0->f_1)), 291934926, Global_34, 1, func_213(uParam0->f_1), 0, 1);
				iParam1->f_28++;
				iParam1->f_29++;
				func_124(&(iParam1->f_59));
			}
			if (func_111(func_110(uParam0->f_1)))
			{
				func_368(iParam1);
				func_217(iParam1, 10);
				func_218(&(iParam1->f_3), 4);
				func_124(&(iParam1->f_59));
				func_219(&(iParam1->f_6), 0);
			}
			break;
	}
}

bool func_229(var uParam0, char* sParam1, char[4] cParam2)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return false;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, sParam1) || !ANIMSCENE::_0x0DF57F86FE71DBE5(*uParam0, sParam1))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam0, sParam1);
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, sParam1))
	{
		return false;
	}
	return true;
}

void func_230(var uParam0, char* sParam1, char[4] cParam2)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, sParam1))
	{
		return;
	}
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam0, sParam1, true);
}

char* func_231(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "GENERIC_FRIGHTENED_HIGH";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "LAW_THREAT";
				default:
					break;
			}
			break;
		case 4:
		case 5:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "ENJOY_THE_SHOW";
				default:
					break;
			}
			break;
		case 6:
		case 7:
			if (PED::_IS_PED_CARRYING(Global_34))
			{
				iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_34);
				iVar1 = ENTITY::GET_ENTITY_TYPE(iVar0);
				if (iVar1 == 1)
				{
					return "WELCOME_GET_THAT_OUT_OF_HERE";
				}
			}
			if (func_369(&uVar2))
			{
				return "WELCOME_MASK";
			}
			switch (iParam1)
			{
				case 0:
					return "WELCOME";
				case 1:
					return "WELCOME_MALE";
				case 2:
					return "WELCOME_FEMALE";
				default:
					break;
			}
			break;
		case 8:
			if (PED::_IS_PED_CARRYING(Global_34))
			{
				iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_34);
				iVar1 = ENTITY::GET_ENTITY_TYPE(iVar0);
				if (iVar1 == 1)
				{
					return "WELCOME_GET_THAT_OUT_OF_HERE";
				}
			}
			if (func_369(&uVar2))
			{
				return "WELCOME_MASK";
			}
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "HANGING_AROUND_NO_PURCHASE";
				default:
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "WELCOME_NO_SHOW";
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "HANGING_AROUND_NO_SHOW";
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "ENJOY_THE_SHOW";
				default:
					break;
			}
			break;
		case 11:
		case 12:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "FAREWELL_DURING_SHOW";
				default:
					break;
			}
			break;
		case 13:
		case 14:
			switch (iParam1)
			{
				case 0:
					return "FAREWELL_AFTER_SHOW";
				case 1:
					return "FAREWELL_AFTER_SHOW_MALE";
				case 2:
					return "FAREWELL_AFTER_SHOW_FEMALE";
				default:
					break;
			}
			break;
	}
	return "WELCOME";
}

void func_232(int iParam0)
{
	switch (iParam0->f_23)
	{
		case 4:
			if (iParam0->f_42)
			{
				iParam0->f_42 = 0;
				func_370(2037803338 /* GXTEntry: "Movie Ticket" */, 1, 0, -142743235);
			}
			break;
		case 1:
			if (iParam0->f_41)
			{
				iParam0->f_41 = 0;
				func_370(1242466573 /* GXTEntry: "Magic Lantern Ticket" */, 1, 0, -142743235);
			}
			break;
		case 2:
			if (iParam0->f_42)
			{
				iParam0->f_42 = 0;
				func_370(2037803338 /* GXTEntry: "Movie Ticket" */, 1, 0, -142743235);
			}
			break;
		case 0:
			if (iParam0->f_40)
			{
				iParam0->f_40 = 0;
				func_370(-1110862888 /* GXTEntry: "Theatre Ticket" */, 1, 0, -142743235);
			}
			break;
		case 3:
			if (iParam0->f_41)
			{
				iParam0->f_41 = 0;
				func_370(1242466573 /* GXTEntry: "Magic Lantern Ticket" */, 1, 0, -142743235);
			}
			break;
	}
}

void func_233(int iParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (func_165() == 0)
	{
		iVar0 = func_142();
		if (iVar0 < iParam0)
		{
			iParam0 = iVar0;
		}
		func_371(iParam0, sParam1, -142743235, bParam4);
	}
	else
	{
		func_372(iParam0);
		if (bParam3)
		{
			func_373(iParam0, sParam1, iParam2);
		}
	}
}

void func_234(var uParam0)
{
	int iVar0;
	int iVar1;
	var uVar2[3];
	var uVar6[1];
	struct<10> Var8;

	uVar6[0] = uParam0->f_182;
	iVar0 = func_375(&uVar2, &uVar6, 3, Global_35, 50f, 0, 0, 0, func_374(uParam0->f_188), 1, 1, -1082130432 /* Float: -1f */, 0, 1);
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uVar2[iVar1]) && !ENTITY::IS_ENTITY_DEAD(uVar2[iVar1])) && !LAW::_0x40851BCC33ACD9AB(uVar2[iVar1]))
		{
			Var8 = Global_34;
			Var8.f_3 = { Global_35 };
			Var8.f_6 = func_376();
			Var8.f_9 = 1;
			Var8.f_2 = joaat("CRIME_THREATEN");
			Var8.f_1 = uVar2[iVar1];
			Var8.f_8 = 1;
			Var8.f_7 = 1000;
			LAW::_0x018F30D762E62DF8(uVar2[iVar1], &Var8);
			func_377(uVar2[iVar1], Global_35, 2, 1, 1);
			TASK::_TASK_SMART_FLEE_STYLE_PED(uVar2[iVar1], Global_34, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
		}
		iVar1++;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_182, true);
}

float func_235(var uParam0)
{
	if (!func_248(uParam0))
	{
		return 0f;
	}
	if (func_330(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_331() - uParam0->f_1);
}

void func_236(var uParam0, int iParam1)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_10[0 /*3*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iParam1->f_10[0 /*3*/]);
	}
	iParam1->f_10[3 /*3*/] = -1;
	iParam1->f_10[3 /*3*/].f_1 = 0;
	iParam1->f_5 = -1;
	iParam1->f_4 = -1;
	func_88(uParam0, 0);
	func_368(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_45[2]))
	{
		OBJECT::DELETE_OBJECT(&(iParam1->f_45[2]));
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_10[0 /*3*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iParam1->f_10[0 /*3*/]);
	}
	iParam1->f_10[0 /*3*/] = -1;
	iParam1->f_10[0 /*3*/].f_1 = 0;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_10[1 /*3*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iParam1->f_10[1 /*3*/]);
	}
	iParam1->f_10[1 /*3*/] = -1;
	iParam1->f_10[1 /*3*/].f_1 = 0;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_10[2 /*3*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iParam1->f_10[2 /*3*/]);
	}
	iParam1->f_10[2 /*3*/] = -1;
	iParam1->f_10[2 /*3*/].f_1 = 0;
}

bool func_237(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_267(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_289(iParam0);
	switch (iVar0)
	{
		case joaat("WEAPON"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, false))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("AMMO"):
			if (!func_378(iParam0, 1))
			{
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_379(iParam0))
			{
				return true;
			}
			break;
	}
	return func_380(iParam0, 0, 0, 0) >= iParam1;
}

void func_238(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_331() - fParam1);
	func_381(uParam0, 1);
	func_382(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_239(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;

	if (uParam1->f_11 & 1 != 0)
	{
		if (PED::_IS_PED_LASSOED(iParam0))
		{
			return true;
		}
	}
	if (uParam1->f_11 & 2 != 0)
	{
		if (PED::_IS_PED_HOGTIED(iParam0))
		{
			return true;
		}
	}
	bVar0 = uParam1->f_11 & 4 != false;
	bVar1 = uParam1->f_11 & 8 != false;
	if (bVar0 || bVar1)
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, func_383((bVar1 && !bVar0), Global_34, 0)))
		{
			return true;
		}
	}
	return false;
}

bool func_240(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_241(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_255(uParam0[iVar0 /*17*/]))
		{
			func_75(uParam0[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

void func_242(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_14(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_384(iParam0, 0);
		}
	}
}

int func_243(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		func_385(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_13((uParam2[iVar0 /*17*/])->f_6))
		{
			func_75(uParam2[iVar0 /*17*/], 11);
			return Global_1951255[(uParam2[iVar0 /*17*/])->f_6 /*23*/].f_3;
		}
	}
	return 0;
}

int func_244(var uParam0)
{
	return 0;
}

int func_245(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((uParam0[iVar0 /*17*/])->f_7 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_246(int* iParam0, int* iParam1)
{
	if (!func_129(iParam0, 23))
	{
		if (iParam1->f_7 == joaat("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_75(iParam1, 19);
			func_257(iParam0, 23);
			func_386(iParam1, 2);
		}
	}
}

void func_247(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_385(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

bool func_248(var uParam0)
{
	return func_387(*uParam0, 1);
}

void func_249(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_255(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_385(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_250(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_388(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_389(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_78(iParam2->f_6, 0, 1, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_78(iParam2->f_6, 1, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_390(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_251(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_391(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_392(iParam1, 1))
	{
		func_393(iParam1, 1);
		return true;
	}
	return false;
}

void func_252(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_394(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

bool func_253(int* iParam0, float fParam1, bool bParam2)
{
	if (iParam0->f_2 != 3)
	{
		if (bParam2 || fParam1 > 0f)
		{
			return true;
		}
	}
	return false;
}

void func_254(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_34, 203, true);
	}
}

bool func_255(int* iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_256(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;

	iVar1 = SCRIPTS::GET_NUMBER_OF_EVENTS(0);
	if (iVar1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0))
			{
				case joaat("EVENT_PLAYER_PROMPT_TRIGGERED"):
					if (SCRIPTS::GET_EVENT_DATA(0, iVar0, &vVar3, 10))
					{
						iVar2 = vVar3.x;
						switch (iVar2)
						{
							case 9:
								if (ENTITY::IS_ENTITY_A_PED(vVar3.z))
								{
									if (iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar3.z))
									{
										return true;
									}
								}
								break;
						}
					}
					break;
			}
			iVar0++;
		}
	}
	return false;
}

void func_257(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_258(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_259(var uParam0, float fParam1)
{
	if (func_395(uParam0, fParam1))
	{
		func_258(uParam0);
		return 1;
	}
	return 0;
}

int func_260(int iParam0, bool bParam1, bool bParam2)
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
	{
		if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(Global_1051252.f_16[0])) && bParam1)
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, true, false, Global_1051252.f_16[0], 0, false);
		}
		else
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, false, false, 0, 0, false);
		}
	}
	else if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(Global_1051252.f_16[0])) && bParam1)
	{
		if (!OBJECT::_IS_DOOR_REGISTERED_WITH_NETWORK(iParam0))
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, true, false, Global_1051252.f_16[0], 0, false);
		}
	}
	if (bParam2)
	{
		OBJECT::_0x1F1FABFE9B2A1254(iParam0, 1);
	}
	return iParam0;
}

bool func_261(int iParam0)
{
	if (func_396(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return false;
}

void func_262(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (func_261(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam1, bParam3);
	}
}

void func_263(int iParam0, bool bParam1)
{
	if (func_261(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_264(int iParam0, bool bParam1)
{
	if (func_261(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_265(int iParam0, bool bParam1)
{
	if (func_261(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

bool func_266()
{
	return true;
}

bool func_267(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_268(int iParam0, int iParam1, bool bParam2)
{
	if (!func_397(iParam0))
	{
		return false;
	}
	if (ITEMDATABASE::_0xF540239F9937033B(iParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_398(iParam0, iParam1);
	}
	return true;
}

int func_269(int iParam0, int iParam1)
{
	if (!func_267(iParam0, 0))
	{
		return func_399(func_270(iParam0), iParam1);
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

int func_270(int iParam0)
{
	return iParam0;
}

int func_271(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_400(iParam0, 2))
	{
		return 0;
	}
	iVar0 = 0;
	if ((iVar0 != 0 && bParam1) && NETWORK::_0xFBE782B3165AC8EC(iVar0))
	{
		return 0;
	}
	return iVar0;
}

bool func_272(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*uParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_397(iParam0))
	{
		return false;
	}
	*uParam3 = ITEMDATABASE::_0xF540239F9937033B(iParam0, iParam1);
	if (*uParam3 == 0)
	{
		if (!bParam4)
		{
		}
		return false;
	}
	if (!bParam4)
	{
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (!ITEMDATABASE::_0xF27F01BBF5ACD3F3(iParam0, iParam1, iVar0, uParam2[iVar0 /*2*/]))
		{
			Jump @112; //curOff = 100
		}
		else if (!bParam4)
		{
		}
		iVar0++;
	}
	if (bParam5)
	{
		func_401(iParam0, iParam1, uParam2, *uParam3);
	}
	return true;
}

void func_273(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<2> Var7;
	struct<2> Var19;
	float fVar21[15];

	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_GET_ITEM_PRICE_MODIFIERS(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = Var7.f_1[iVar1];
		iVar4 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIED_PRICES(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != iParam1)
			{
			}
			else
			{
				iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIERS(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_MODIFIER(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if ((*uParam2)[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (fVar21[iVar0] != 1f && (uParam2[iVar0 /*2*/])->f_1 > 0)
		{
			if (*uParam2)[iVar0 /*2*/] == joaat("CURRENCY_GOLD_BAR")
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 100f))) / 1000000) * 100;
			}
			else
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 100f))) / 10000);
			}
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_402((*uParam2)[iVar0 /*2*/]) != -829303394)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

Vector3 func_274(int iParam0)
{
	switch (iParam0)
	{
		case 277:
			return 2546.542f, -1300.307f, 49.53876f;
		case 278:
			return 2697.939f, -1352.872f, 49.41832f;
		case 33:
			return -351.5715f, 700.468f, 118.3245f;
		case 519:
			return -777.8935f, -1362.579f, 45.98574f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_275(int iParam0)
{
	return (Global_19 && iParam0) != 0;
}

void func_276(int iParam0)
{
	Global_19 = (Global_19 || iParam0);
}

int func_277(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = joaat("WEAPON_UNARMED");
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

bool func_278(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

bool func_279(int iParam0)
{
	return WEAPON::_IS_WEAPON_BOW(iParam0);
}

void func_280(int iParam0)
{
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, false))
	{
		return;
	}
	if (Global_26640)
	{
		return;
	}
	WEAPON::_0xE9BD19F8121ADE3E(Global_34, iParam0);
}

int func_281(int iParam0, int iParam1)
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

bool func_282(int iParam0)
{
	int iVar0;

	iVar0 = func_403(iParam0);
	if (iVar0 < 336)
	{
		return false;
	}
	return true;
}

bool func_283(int iParam0)
{
	if (iParam0 == joaat("WS_MP_HIDEOUT_CLEMENS_COVE"))
	{
		return true;
	}
	return false;
}

struct<11> func_284(int iParam0)
{
	struct<11> Var0;

	switch (iParam0)
	{
		case 0:
			Var0 = { 2537.884f, -1278.321f, 48.21795f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = { 4f, 4f, 5f };
			Var0.f_9 = "TICKET_TAKER_VAN_FRONT_ENTRANCE";
			Var0.f_10 = joaat("VOLCYLINDER");
			break;
		case 1:
			Var0 = { 2540.43f, -1280.87f, 48.01795f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = { 2f, 2f, 4f };
			Var0.f_9 = "TICKET_TAKER_VAN_TICKET_FENCE";
			Var0.f_10 = joaat("VOLCYLINDER");
			break;
		case 2:
			Var0 = { 2540.47f, -1280.896f, 49.50146f };
			Var0.f_3 = { 0f, 0f, -135.6275f };
			Var0.f_6 = { 2.411322f, 2.714174f, 3.024515f };
			Var0.f_9 = "THEATER_TT_INTERACT_SMALL_ZONE";
			Var0.f_10 = joaat("VOLBOX");
			break;
		case 3:
			Var0 = { 2538.789f, -1279.76f, 49.71677f };
			Var0.f_3 = { 0f, 0f, 11.90726f };
			Var0.f_6 = { 3.5f, 3.5f, 1.642595f };
			Var0.f_9 = "TICKET_TT_INTERACT_LARGE_ZONE";
			Var0.f_10 = joaat("VOLCYLINDER");
			break;
	}
	return Var0;
}

void func_285(var uParam0, char* sParam1, bool bParam2, char* sParam3)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	if (ANIMSCENE::_0x6F1F0B17109309DA(*uParam0, sParam1))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, sParam1, bParam2, false);
	}
}

bool func_286(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_165() == -1)
	{
		if (func_404(iParam0) && func_405(iParam0))
		{
			func_406(iParam0, iParam1, 1, &bParam2, iParam3);
			return false;
		}
	}
	else if (iParam0 == joaat("CUSTOM_SATCHEL"))
	{
		bParam2 = true;
	}
	else if (iParam0 == joaat("WEAPON_UNARMED"))
	{
		return false;
	}
	return true;
}

bool func_287(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_407(iParam0, iParam1);
	Var0 = { func_408(iParam0, 0, 1) };
	iVar5 = func_409(iParam0, &Var0, 0, 0);
	iVar6 = func_410(iParam0, 0, 0, 0);
	if (iVar5 > 1 && (iVar6 + iParam2) >= iVar5)
	{
		if (func_269(iParam0, -2051813666))
		{
			func_306(674, 1);
		}
		else if (func_165() == -1)
		{
			func_306(673, 0);
		}
	}
	if (func_411(iParam0, &Var0, *iParam1, 0, 0, -1, 0))
	{
		if (iVar6 < iVar5)
		{
			*iParam1 = (iVar5 - iVar6);
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_288(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	if (!func_412())
	{
		return;
	}
	switch (func_413(iParam0, -949239683))
	{
		case -1565009253:
		case -1420737577:
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
			Global_1940144.f_70.f_5 = 1;
			Global_1940144.f_70.f_6 = 0;
			Global_1940144.f_70.f_1 = iParam0;
			break;
	}
}

int func_289(int iParam0)
{
	vector3 vVar0;

	if (!func_267(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_290(int iParam0, int iParam1)
{
	if (!func_267(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

void func_291(int iParam0)
{
	if (!func_157(iParam0))
	{
		return;
	}
	func_414(iParam0);
	func_415(iParam0);
}

void func_292(int iParam0)
{
	if (func_269(iParam0, -1522723129))
	{
		func_416(-848633709, 0, 255, 0, 0);
	}
	else if (func_269(iParam0, -283942357))
	{
		func_416(-981153234, 0, 255, 0, 0);
	}
	else if (func_269(iParam0, 683680997))
	{
		func_416(-756350192, 0, 255, 0, 0);
	}
	else if (func_269(iParam0, 1307628809))
	{
		func_416(603094518, 0, 255, 0, 0);
	}
}

int func_293(int iParam0, bool bParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case joaat("AMMO_THROWING_KNIVES"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_CONFUSE"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_DISORIENT"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_DRAIN"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_IMPROVED"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_POISON"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_TRAIL"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_WOUND"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_DYNAMITE"):
			iVar0 = joaat("WEAPON_THROWN_DYNAMITE");
			break;
		case joaat("AMMO_DYNAMITE_VOLATILE"):
			iVar0 = joaat("WEAPON_THROWN_DYNAMITE");
			break;
		case joaat("AMMO_MOLOTOV"):
			iVar0 = joaat("WEAPON_THROWN_MOLOTOV");
			break;
		case joaat("AMMO_MOLOTOV_VOLATILE"):
			iVar0 = joaat("WEAPON_THROWN_MOLOTOV");
			break;
		case joaat("AMMO_TOMAHAWK"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_TOMAHAWK_ANCIENT"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK_ANCIENT");
			break;
		case joaat("AMMO_TOMAHAWK_HOMING"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_TOMAHAWK_IMPROVED"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_BOLAS"):
			iVar0 = joaat("WEAPON_THROWN_BOLAS");
			break;
		case joaat("AMMO_POISONBOTTLE"):
			iVar0 = joaat("WEAPON_THROWN_POISONBOTTLE");
			break;
		case joaat("AMMO_HATCHET"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET");
			break;
		case joaat("AMMO_HATCHET_HUNTER"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER");
			break;
		case joaat("AMMO_HATCHET_HUNTER_RUSTED"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER_RUSTED");
			break;
		case joaat("AMMO_HATCHET_ANCIENT"):
			iVar0 = joaat("WEAPON_MELEE_ANCIENT_HATCHET");
			break;
		case joaat("AMMO_HATCHET_CLEAVER"):
			iVar0 = joaat("WEAPON_MELEE_CLEAVER");
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT");
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT_RUSTED"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT_RUSTED");
			break;
		case joaat("AMMO_HATCHET_HEWING"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HEWING");
			break;
		case joaat("AMMO_HATCHET_VIKING"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_VIKING");
			break;
		default:
			break;
	}
	if (func_267(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_417(iVar0) || func_418(iVar0))
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

int func_294(int iParam0, bool bParam1)
{
	if (!func_267(iParam0, 0))
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

void func_295(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_13 != -1)
	{
		return;
	}
	if (!func_278(iParam0))
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

bool func_296(bool bParam0)
{
	if (func_165() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_419(bParam0));
}

bool func_297(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<4> Var27;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_MELEE(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, false))
	{
		Var0 = { func_408(iParam0, 0, 1) };
		if (func_420(iParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -1591664384;
			if (func_421(iParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_422(iParam0, Var0, Var0.f_4, 0) };
				func_423(iParam0, &Var27, &Var0, 1, -142743235, 1, 0);
			}
		}
	}
	if (func_296(0))
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, false))
		{
			return false;
		}
		func_298(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
		func_424(iParam0, iParam1);
		return true;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, false))
	{
		return false;
	}
	if (iParam1 > 0)
	{
	}
	WEAPON::_GIVE_WEAPON_TO_PED_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
	return true;
}

bool func_298(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_301(iParam0))
	{
		return false;
	}
	if (!func_296(0))
	{
		return false;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_34, iParam0, iParam1, iParam2);
	return true;
}

int func_299(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_267(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	iVar0 = func_425(iParam0, joaat("DEFAULT"));
	if (iVar0 != 0)
	{
		return func_426(iParam0, iParam1, iParam2);
	}
	Var1 = { func_408(iParam0, 0, 1) };
	Var6 = { func_422(iParam0, Var1, Var1.f_4, 0) };
	return func_427(iParam0, &Var6, &Var1, iParam1, iParam2, 0);
}

bool func_300(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;

	iVar0 = func_294(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_165() == -1)
		{
			func_295(iVar0);
			if (iParam1 == 1248274121)
			{
				func_428(iVar0);
			}
		}
		if (!func_411(iParam0, &uVar1, 1, 0, 0, -1, 0))
		{
			func_406(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_429(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				func_297(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_FISHINGROD") || WEAPON::_IS_WEAPON_BINOCULARS(iVar0))
			{
				func_297(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_IS_WEAPON_LASSO(iVar0))
			{
				func_297(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_IS_WEAPON_MELEE(iVar0))
			{
				if (iVar0 == joaat("WEAPON_MELEE_KNIFE_JOHN") && !func_195())
				{
					return false;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(iParam0))
				{
				}
				else if (!func_430(iVar0))
				{
					func_297(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_297(iVar0, WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
			{
				iVar7 = func_431(Global_34, 2, 0, 1);
				if ((((func_278(iVar7) && !Global_26640) && iVar7 != iVar0) && !func_237(joaat("UPGRADE_OFFHAND_HOLSTER"), 1)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_34, iVar7);
				}
				if (func_278(iVar7) && func_237(joaat("UPGRADE_OFFHAND_HOLSTER"), 1))
				{
					if (!func_297(iVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_297(iVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_297(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(1) != 0 && iParam1 == 1248274121)
	{
		func_306(515, 1);
	}
	return true;
}

bool func_301(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_302(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_301(iParam0))
	{
		return 0;
	}
	iVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	if (func_278(iVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_34, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (WEAPON::_IS_WEAPON_BOW(iVar4))
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
		func_316(func_432(iParam0), func_315(iParam0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_296(0))
	{
		if (func_298(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return func_299(iParam0, *iParam1, iParam2);
	}
	return 0;
}

struct<2> func_303(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_304(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

struct<2> func_305(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_306(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_433(iParam0, &iVar0, &iVar1);
	if (!func_434(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_435(iVar0, iVar1);
}

bool func_307()
{
	return false;
}

int func_308(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;

	if (func_165() == 0)
	{
		func_321(iParam0, 0);
		return 0;
	}
	iVar0 = func_436(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_327(iVar0, sParam4, iParam5, 0);
	}
	func_328(iVar0, bParam1, fParam2, iParam3);
	return iVar0;
}

void func_309(int iParam0)
{
}

void func_310(int iParam0)
{
}

void func_311(int iParam0)
{
}

void func_312(int iParam0)
{
}

void func_313()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("SP_CHAL_EXPL_ROOT")) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("SP_CHAL_EXPL_ROOT"), joaat("ACW_EXPL_RANK_01_TREASURE"), 1);
	}
}

void func_314(int iParam0, int iParam1)
{
	var uVar0;

	func_437(iParam0, iParam1, &uVar0);
}

int func_315(int iParam0)
{
	int iVar0;

	if (!func_267(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_438(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

void func_316(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_433(iParam0, &iVar0, &iVar1);
	if (!func_434(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_439(iParam0, 1024))
	{
		return;
	}
	func_435(iVar0, iVar1);
	Global_1904651.f_33[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	Global_1904651.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

void func_317(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_433(iParam0, &iVar0, &iVar1);
	if (!func_434(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_439(iParam0, 1024))
	{
		return;
	}
	func_435(iVar0, iVar1);
	Global_1904651.f_33[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	if (!bParam3)
	{
		Global_1904651.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 1;
	}
	else
	{
		Global_1904651.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 5;
	}
}

void func_318(int iParam0)
{
	switch (*iParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			break;
		case joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"):
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP");
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*iParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM");
			break;
	}
}

void func_319(int iParam0)
{
	if (func_165() != -1)
	{
		return;
	}
}

bool func_320()
{
	if (INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(PLAYER::PLAYER_PED_ID()) != 3)
	{
		return false;
	}
	return INVENTORY::_0xFC7563F482781A3D();
}

int func_321(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	if (0 == iParam0)
	{
		return 0;
	}
	Var4.f_1 = 10;
	func_440(&Var4, joaat("LOOT_TYPE_NORMAL"));
	return func_441(iParam0, &Var4, &uVar0, iParam1, 0);
}

struct<2> func_322(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_267(iParam0, 0))
	{
		return Var0;
	}
	if (func_269(iParam0, -305066475))
	{
		if (func_165() == -1)
		{
			if (func_269(iParam0, -537818634))
			{
				return func_442(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_442(joaat("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_269(iParam0, -537818634))
	{
		return func_442(joaat("MEDICINE_ITEMS"));
	}
	if (func_269(iParam0, 2084895747))
	{
		return func_442(joaat("LOCK_BREAKER_ITEMS"));
	}
	return Var2;
}

void func_323(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			break;
	}
}

void func_324(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_443(Global_1903071.f_37);
	func_445(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_444(iParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_325(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	char* sVar14;
	char* sVar15;
	int iVar16;
	char* sVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	char* sVar21;
	char cVar22[128];

	if (!func_267(iParam0, 0))
	{
		return;
	}
	else if (iParam0 == joaat("KIT_HANDHELD_CATALOG"))
	{
		return;
	}
	else if (iParam1 == 0)
	{
		return;
	}
	if (!func_446() || bParam6)
	{
		func_447(iParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_448(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam0 == joaat("AMMO_MOONSHINEJUG_MP"))
	{
		StringCopy(&cVar2, "ITEM_GET_PUMP", 32);
	}
	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		StringCopy(&cVar2, func_448(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_290(iParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_289(iParam0);
	iVar10 = 0;
	iVar11 = joaat("INVENTORY");
	if (((((((iVar6 == joaat("AMMO") && iParam0 != joaat("AMMO_HATCHET")) && iParam0 != joaat("AMMO_HATCHET_CLEAVER")) && iParam0 != joaat("AMMO_HATCHET_HUNTER")) && iParam0 != joaat("AMMO_TOMAHAWK_ANCIENT")) && iParam0 != joaat("AMMO_BOLAS")) && iParam0 != joaat("AMMO_POISONBOTTLE")) && iParam0 != joaat("AMMO_MOONSHINEJUG_MP"))
	{
		iVar10 = joaat("AMMO_TYPES");
		iVar11 = joaat("AMMO_TYPES");
	}
	iVar12 = func_402(iParam0);
	if (((((((iVar6 == joaat("WEAPON_MOD") || iVar6 == joaat("WEAPON_DECORATION")) || iVar12 == -1674363638) || iVar12 == 252325943) || iVar12 == 829857647) || iVar12 == -636562458) || iVar12 == 1341188928) || iVar12 == 1216664798)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_449(iParam0, &Var7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (bParam5)
	{
		Var7 = "ITEMTYPE_ORDERED_ITEM";
		Var7.f_1 = "itemtype_textures";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		return;
	}
	iVar13 = joaat("COLOR_PURE_WHITE");
	sVar14 = "Transaction_Positive";
	sVar15 = "Transaction_Feed_Sounds";
	iVar16 = 0;
	if (bVar0)
	{
		iVar13 = joaat("COLOR_GREYMID");
		sVar14 = "Transaction_Negative";
		iVar16 = 1;
	}
	if (func_269(iParam0, 474910316))
	{
		sVar17 = func_450(iParam0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar17))
		{
			sVar14 = sVar17;
			sVar15 = "RDRO_Collectible_Sounds_Travelling_Saleswoman";
		}
	}
	if (ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar13 = joaat("COLOR_RPG_SPECIAL_1");
		}
		else
		{
			iVar13 = joaat("COLOR_YELLOWDARK");
		}
	}
	if (func_269(iParam0, 1816585950))
	{
		iVar13 = joaat("COLOR_OBJECTIVE");
	}
	if (func_451(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar13 = joaat("COLOR_YELLOW");
		}
		else
		{
			iVar13 = joaat("COLOR_YELLOWDARK");
		}
	}
	iVar18 = func_315(iParam0);
	if ((func_452(iVar12) && func_269(iParam0, -306684263)) && iVar18 != 0)
	{
		iVar18 = func_453(iParam0);
	}
	else if (func_289(iParam0) == joaat("CLOTHING"))
	{
		iVar19 = func_454(iParam0);
		if (func_267(iVar19, 0))
		{
			iVar18 = func_315(iVar19);
		}
	}
	if (func_455(iParam0, 1443104131) && bParam3)
	{
		iVar20 = 1;
		func_456(iParam0, -915411861, &iVar20, 0);
		iVar1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(iVar20)));
		iParam1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iParam1) / BUILTIN::TO_FLOAT(iVar20)));
	}
	sVar21 = func_457(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, iVar18), iVar1), iVar13);
	if (iParam1 == 1)
	{
		sVar21 = MISC::_CREATE_VAR_STRING(0, iVar18);
	}
	if ((((((iVar12 == -1839668642 && iParam0 != joaat("CLOTHING_ITEM_HAIR_NONE")) && iParam0 != 1326838792) && iParam0 != -230310728) || ((iVar12 == 231148558 && iParam0 != joaat("CLOTHING_ITEM_M_BEARD_STUBBLE")) && iParam0 != joaat("CLOTHING_ITEM_BEARD_NONE"))) || (iVar12 == 252325943 && iParam0 != joaat("CLOTHING_BLEND_LIPSTICK_NONE"))) || (iVar12 == -636562458 && iParam0 != joaat("CLOTHING_BLEND_EYESHADOW_NONE")))
	{
		sVar21 = MISC::_CREATE_VAR_STRING(0, func_458(iParam0, -442898163));
	}
	if (iVar12 == -126813555 || iVar12 == 1946043663)
	{
		StringCopy(&cVar22, "", 128);
		if (func_459(iParam0, &cVar22))
		{
			sVar21 = func_461(func_460(cVar22), joaat("COLOR_PURE_WHITE"));
		}
	}
	func_445(sVar21, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar16, iVar13, sVar15, sVar14, 0, 1);
}

int func_326(int iParam0, char* sParam1, bool bParam2)
{
	if (func_320())
	{
		bParam2 = true;
	}
	if (!bParam2 && func_296(0))
	{
		func_299(joaat("CURRENCY_CASH"), iParam0, -334626412);
		return -1;
	}
	return -1;
}

void func_327(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (bParam3)
		{
			func_462(iParam0, 1000);
			return;
		}
		sParam1 = "FEED_MONEY_EARN";
	}
	func_445(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_328(int iParam0, bool bParam1, float fParam2, int iParam3)
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
		if (func_463() || func_464())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_445(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_TOTAL_TAKE"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
		}
		func_445(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, 752097756);
		func_304(func_442(joaat("CAREER_CASH")), iVar1);
	}
}

bool func_329(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

bool func_330(var uParam0)
{
	return func_387(*uParam0, 2);
}

float func_331()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_332(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_333(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_465(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

int func_334(int iParam0, float fParam1, float fParam2, float fParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	int iVar14;

	if (!Global_1940258.f_21 && !bParam4)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_AIM")))
	{
		fVar0 = func_41(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
		if (fVar0 < fParam3 && fVar0 > 0.5f)
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0, false))
			{
				if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar1, false, false))
				{
					if (iVar1 == iParam0)
					{
						return 0;
					}
				}
				iVar2 = func_332(PLAYER::PLAYER_PED_ID(), 0);
				if (func_279(iVar2) && !PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_ATTACK")))
				{
					return 0;
				}
				vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
				if (ENTITY::IS_ENTITY_A_PED(iParam0))
				{
					iVar14 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
					if (PED::IS_PED_IN_ANY_VEHICLE(iVar14, false) && PED::WAS_PED_SKELETON_UPDATED(iVar14))
					{
						vVar3 = { PED::GET_PED_BONE_COORDS(iVar14, 21030, 0f, 0f, 0f) };
					}
				}
				vVar6 = { func_466(0) };
				vVar9 = { func_467(vVar3 - CAM::GET_GAMEPLAY_CAM_COORD()) };
				fVar12 = MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar9.x, vVar9.y, vVar6.x, vVar6.y));
				fVar13 = MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar9.y, vVar9.z, vVar6.y, vVar6.z));
				if (fVar12 < fParam1)
				{
					if (fVar13 < fParam2)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_335(var uParam0, bool bParam1, int iParam2)
{
	func_468(iParam2);
	if (Global_1572887.f_13 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
		{
			return;
		}
		if (Global_1940258.f_6)
		{
			return;
		}
	}
	else
	{
		if (!Global_1296859.f_11)
		{
			return;
		}
		if (Global_1296859.f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		uParam0->f_11 = 0;
	}
	uParam0->f_6 = iParam2;
	if (Global_1572887.f_13 == -1)
	{
		uParam0->f_14 = Global_1940258.f_38;
	}
	else
	{
		uParam0->f_14 = func_469(0);
	}
	switch (uParam0->f_7)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!*uParam0 & 33554432 != 0)
				{
					if (uParam0->f_14 == joaat("WEAPON_THROWN_DYNAMITE"))
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_34))
						{
							func_184(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_470(1, 1))
						{
							func_184(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_34) && (!func_470(1, 1) || *uParam0 & 8192 != 0))
				{
					func_183(uParam0, 33554432);
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	if (!uParam0->f_2 & 1024 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_15))
		{
			if (func_471(uParam0))
			{
				uParam0->f_16 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else if (uParam0->f_16 != 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(uParam0->f_16, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(uParam0->f_15))
				{
					uParam0->f_15 = 0;
					uParam0->f_16 = 0;
				}
			}
		}
	}
	uParam0->f_7++;
	if (uParam0->f_7 >= 4)
	{
		uParam0->f_7 = 0;
		uParam0->f_8++;
		if (uParam0->f_8 > 4)
		{
			uParam0->f_8 = 0;
		}
	}
	func_472(uParam0);
}

bool func_336(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return false;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar0 == 0)
	{
		return false;
	}
	switch (iVar0)
	{
		case joaat("EVENT_ACQUAINTANCE_PED_DEAD"):
		case joaat("EVENT_PED_SEEN_DEAD_PED"):
		case joaat("EVENT_SHOCKING_DEAD_BODY"):
		case joaat("EVENT_DEAD_PED_FOUND"):
			iVar1 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar0, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				return false;
			}
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (!PED::IS_PED_HUMAN(iVar2))
			{
				return false;
			}
			if (DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreDamageChecking"))
			{
				return false;
			}
			if (iVar2 == Global_1940258.f_27)
			{
				return false;
			}
			if (iVar2 == Global_1940258.f_26)
			{
				return false;
			}
			if (!func_473(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_474(iParam0, iVar2) <= func_475(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_337(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_11 = iParam0;
	}
	if (func_476(iParam2, 1, 1, 1, 0))
	{
		func_184(uParam1, 2048);
	}
	uParam1->f_17 = iParam2;
	func_477(uParam1, 1);
	func_478();
}

bool func_338(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_214(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_13 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_13 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_479(uParam1);
			if (func_480(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_3 == 0)
				{
					uParam1->f_3 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_3);
				iVar3 = func_481(uParam1);
				if (uParam1->f_3 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_477(uParam1, 1);
						return true;
					}
					else if (uParam1->f_13 < 3.5f)
					{
						if (iVar2 > func_482(uParam1))
						{
							func_477(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_339(int iParam0, int iParam1, var uParam2)
{
	float fVar0;
	float fVar1;

	if (iParam1 == 0)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return false;
	}
	fVar0 = 85f;
	if (func_483(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_13 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_13 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_479(uParam2);
		if (func_480(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_3 == 0)
			{
				uParam2->f_3 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_3 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_3) > func_481(uParam2)
				{
					func_477(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_340(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
	{
		return false;
	}
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, false, false))
	{
		if (iVar2 == iVar0)
		{
			return false;
		}
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return false;
	}
	if (Global_1940258.f_34 != 0)
	{
		if (PED::_GET_RIDER_OF_MOUNT(Global_1940258.f_34, true) == iParam0)
		{
			return false;
		}
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_473(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_4 == 0)
		{
			uParam1->f_4 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_4) > func_481(uParam1)
		{
			fVar3 = func_479(uParam1);
			if (uParam1->f_13 < fVar3)
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar1, 17))
				{
					if (PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, fVar3, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_341(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_354();
	iVar1 = (iVar0 - uParam0->f_9);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_342(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_484(uParam2);
			if (!WEAPON::IS_WEAPON_VALID(Global_1940258.f_40) || Global_1940258.f_40 == joaat("WEAPON_UNARMED"))
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
			else if (WEAPON::IS_WEAPON_VALID(Global_1940258.f_40) && WEAPON::_0xEA522F991E120D45(Global_1940258.f_40))
			{
				PED::_0xD355E2F1BB41087E(iParam1, 5f);
			}
			else
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
		}
		if ((!WEAPON::IS_WEAPON_VALID(Global_1940258.f_40) || Global_1940258.f_40 == joaat("WEAPON_UNARMED")) || (WEAPON::IS_WEAPON_VALID(Global_1940258.f_40) && WEAPON::_0x5809DBCA0A37C82B(Global_1940258.f_40)))
		{
			fVar2 = 3f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1f;
			iVar1 = 1000;
		}
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), iParam1, iVar1) && PED::_0x285D36C5C72B0569(uParam0) <= fVar2)
		{
			if (func_350(uParam2, iParam1))
			{
				func_477(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_343(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_13 < IntToFloat(func_485(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1940258.f_40) && !WEAPON::_0x5809DBCA0A37C82B(Global_1940258.f_40)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_34, &uVar0))
		{
			if (func_350(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_477(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_344(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_486(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_24))
				{
					func_477(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, uParam2->f_30))
				{
					func_477(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_24))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_29, &vVar4, 0, 0);
					if (func_487(iParam1, vVar0, vVar4))
					{
						func_477(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_24))
				{
					func_477(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_24))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_29, &vVar7, 0, 0);
					if (func_487(iParam1, vVar0, vVar7))
					{
						func_477(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_TOXIC_MOONSHINE_CLOUD"), vVar0, 15f) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_TOXIC_MOONSHINE"), vVar0, 15f))
	{
		return true;
	}
	return false;
}

bool func_345(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2[2];
	vector3 vVar9;
	bool bVar12;
	bool bVar13;

	vVar9 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1940258.f_33)
	{
		if (!func_473(iParam0, uParam1, Global_1940258.f_28[iVar0]) || iParam0 == Global_1940258.f_28[iVar0])
		{
		}
		else
		{
			bVar13 = func_488(Global_1940258.f_28[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1940258.f_28[iVar0], false, false), vVar9);
			if (func_489(Global_1940258.f_28[iVar0]))
			{
				if (fVar1 < 35f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(Global_1940258.f_28[iVar0], "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(Global_1940258.f_28[iVar0], "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB")))
					{
						vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940258.f_28[iVar0], false, false) };
						vVar2[1 /*3*/] = { vVar9 };
						uParam1->f_11 = iParam0;
						return true;
					}
				}
			}
			if (func_490(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940258.f_28[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_491(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940258.f_28[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_492(uParam1, iParam0, fVar1, iVar0))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940258.f_28[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_346(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar5;
	vector3 vVar8;

	if (!EVENT::_0x1D1B448D719415AB(*iParam0))
	{
		return false;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(*iParam0, 0, 0);
	switch (iVar0)
	{
		case joaat("EVENT_SHOCKING_PROPERTY_DAMAGE"):
		case joaat("EVENT_SHOCKING_WINDOW_SMASHED"):
			iVar1 = EVENT::_0x822A001BCEA5BD81(*iParam0, iVar0, 0, 0);
			iVar2 = EVENT::_0x38497F139981C5C9(*iParam0, iVar0, 0, 0);
			vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
			vVar8 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
			EVENT::_0x1A5C5D350068A673(*iParam0, 0);
			return true;
	}
	return false;
}

bool func_347(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_354();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_348(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1, 1) || DECORATOR::DECOR_EXIST_ON(iParam0, "DamagedByPlayer"))
			{
				return 1;
			}
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, 1, 1))
				{
					return 1;
				}
			}
			if (PED::IS_PED_ON_MOUNT(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(iVar0)))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PED::GET_MOUNT(iVar0), 1, 1))
					{
						return 1;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (func_493(iVar0, &iVar2))
		{
			if ((PED::IS_PED_RAGDOLL(iParam0) || PED::_0x947E43F544B6AB34(iParam0, PLAYER::PLAYER_ID(), 10, 1000)) || (!bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar2, iParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 400))
		{
			return 1;
		}
	}
	if (func_494(iVar0, iParam0))
	{
		return 1;
	}
	if (PED::_0xD0B7AEB56229D317(PLAYER::PLAYER_PED_ID()) == iParam0)
	{
		if (PED::_0x0E99E3BF11BB6367(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_BEING_JACKED(iParam0))
		{
			if (PED::GET_PEDS_JACKER(iParam0) == iVar0)
			{
				return 1;
			}
		}
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iVar0, 8, 0))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_349(var uParam0, int iParam1)
{
	int iVar0;

	if (!DECORATOR::DECOR_EXIST_ON(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(iParam1, "iDamageFrame", uParam0->f_6))
		{
		}
	}
	else if (uParam0->f_6 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_350(var uParam0, int iParam1)
{
	if (func_495(uParam0))
	{
		return true;
	}
	if (PED::_0x29FCE825613FEFCA(iParam1, 400))
	{
		return true;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		return false;
	}
	if ((PED::IS_PED_PERFORMING_MELEE_ACTION(Global_34, 8, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 9, true)) || PED::IS_PED_BEING_STEALTH_KILLED(iParam1))
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_34, 16, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 10, true))
	{
		return false;
	}
	if (PED::_GET_LASSO_TARGET(Global_34) != 0)
	{
		return true;
	}
	if (WEAPON::_0x8D50F43298AB9545(Global_34, iParam1))
	{
		return true;
	}
	if (!PED::IS_PED_RAGDOLL(iParam1))
	{
		return true;
	}
	return false;
}

bool func_351(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_41(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_352()
{
}

bool func_353(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_34);
	if (iVar0 != 0 && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iVar0)))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
		if (func_496(iVar0, iParam1, vVar1))
		{
			uParam0->f_10 = func_354();
			return true;
		}
		else if (VEHICLE::_0xA19447D83294E29F(iVar0, &iVar5, &iVar4))
		{
			if (iVar5 <= 0)
			{
				return false;
			}
			else if (iVar4 == iVar5)
			{
				iVar6 = 0;
				while (iVar6 < iVar4)
				{
					iVar7 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar0, iVar6);
					if (ENTITY::DOES_ENTITY_EXIST(iVar7))
					{
						if (func_21(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_10 = func_354();
								return true;
							}
						}
					}
					iVar6++;
				}
			}
		}
	}
	return false;
}

int func_354()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_355()
{
	if (Global_1940258.f_36 == 0)
	{
		return false;
	}
	if (Global_1940258.f_36 == Global_1940258.f_34)
	{
		return false;
	}
	if (Global_1940258.f_37 <= 0)
	{
		return false;
	}
	if ((func_354() - Global_1940258.f_37) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_356(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_15))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return false;
	}
	fVar0 = func_475(uParam0);
	if (uParam0->f_13 > func_497(uParam0) && uParam0->f_13 > fVar0)
	{
		return false;
	}
	iVar2 = func_498(iParam1);
	iVar1 = func_499(uParam0->f_15);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_13 <= fVar0 || PED::_0x9D9473CB82D83A30(iParam1, Global_34, 0) == 1) || PED::_0x9D9473CB82D83A30(iParam1, uParam0->f_15, 0) == 1)
		{
			return true;
		}
	}
	return false;
}

bool func_357(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	float fVar8;

	if (!Global_1940258.f_50)
	{
		return false;
	}
	if (!uParam0->f_1 & 1 != 0)
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (func_500(iVar0, iParam1, 1060437492 /* Float: 0.707f */) != 0)
	{
		return false;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
	vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	fVar7 = func_501(vVar1, vVar4);
	fVar8 = MISC::ABSF((vVar1.z - vVar4.z));
	if (fVar8 >= 2f)
	{
		return false;
	}
	if (fVar7 > uParam0->f_31)
	{
		return false;
	}
	return true;
}

int func_358(int iParam0, int iParam1, var uParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (uParam2->f_13 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_502(iParam0, iParam1, bVar0, bVar2, uParam2->f_13, bVar1);
}

bool func_359(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (*uParam1 & 67108864 != 0)
	{
		return true;
	}
	if (Global_1940258.f_18)
	{
		return true;
	}
	if (*uParam1 & 33554432 != 0)
	{
		if (func_503(iParam0, uParam1, 1))
		{
			return true;
		}
		if ((PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17)) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_34, 1, 0) == 1)
		{
			return true;
		}
	}
	iVar0 = PED::GET_JACK_TARGET(Global_34);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true)) || Global_1940258.f_24)
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, -1f, -1f, -1f))
		{
			return true;
		}
	}
	if (!func_504(iParam0))
	{
		return false;
	}
	iVar1 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar1 == 0)
	{
		return false;
	}
	switch (iVar1)
	{
		case joaat("EVENT_SHOCKING_SEEN_PED_ROBBED"):
		case joaat("EVENT_SHOCKING_SEEN_PED_INTIMIDATED"):
		case joaat("EVENT_SHOCKING_SEEN_CAR_STOLEN"):
		case joaat("EVENT_SHOCKING_MOUNT_STOLEN"):
			if (func_505(uParam1))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (iVar4 != Global_34)
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			if (ENTITY::_0x88AD6CC10D8D35B2(iVar5))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			return true;
		case joaat("EVENT_SHOCKING_ENTITY_HOGTIED"):
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (PED::_0x06087579E7AA85A9(iParam0, iVar4, -1f, -1f, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar4, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17))
				{
					if (!func_506(uParam1, iParam0))
					{
						if (func_21(iVar4, Global_35, 1) < 7f)
						{
							return true;
						}
					}
				}
			}
			break;
		case joaat("EVENT_SHOCKING_SEEN_MELEE_ACTION"):
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (!PED::IS_PED_A_PLAYER(iVar4) || !PED::IS_PED_A_PLAYER(iVar5))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			if (PED::_0x06087579E7AA85A9(iParam0, iVar4, -1f, -1f, -1f, -1f) || PED::_0x06087579E7AA85A9(iParam0, iVar5, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar4, 17) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar5, 17))
				{
					return true;
				}
			}
			EVENT::_0x1A5C5D350068A673(iParam0, 0);
			return false;
	}
	return false;
}

bool func_360(int iParam0, var uParam1)
{
	if (!func_507(0))
	{
		return false;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_34, 90f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17))
		{
			return true;
		}
	}
	return false;
}

bool func_361(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_354();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_362(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_363(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_5 == 0)
	{
		uParam1->f_5 = func_354();
	}
	else if (func_354() - uParam1->f_5) > func_508(uParam1)
	{
		return func_509(iParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

bool func_364(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIgnoreDamageChecking"))
	{
		return false;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (Global_34 == iVar1 || Global_1940258.f_34 == iVar1)
	{
		return true;
	}
	return false;
}

char* func_365(int iParam0)
{
	int iVar0;

	if (func_111(iParam0))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 11);
		if (iVar0 < 5)
		{
			return "HANGING_AROUND_NO_PURCHASE";
		}
	}
	else
	{
		return "HANGING_AROUND_NO_SHOW";
	}
	return "TAKE_YOUR_TIME";
}

int func_366(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 5;
		case 2:
			return 5;
		case 4:
			return 4;
		case 3:
			return 5;
	}
	return 5;
}

char* func_367(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return "DIRECTIONS_VALENTINE_MAGIC_LANTERN";
		case 4:
			return "DIRECTIONS_BLACKWATER_IMPERIAL";
		case 0:
			return "DIRECTIONS_SAINT_DENIS_RALEUR";
		case 1:
		case 2:
			return "DIRECTIONS_SAINT_DENIS_FONTANA";
		default:
			break;
	}
	return "DIRECTIONS_SAINT_DENIS_RALEUR";
}

void func_368(int iParam0)
{
	iParam0->f_26 = 0;
	iParam0->f_27 = 1;
	iParam0->f_28 = 0;
	iParam0->f_29 = 1;
	func_56(&(iParam0->f_24), 8);
	func_56(&(iParam0->f_24), 2);
	func_56(&(iParam0->f_24), 32);
	func_56(&(iParam0->f_24), 128);
	func_56(&(iParam0->f_24), 256);
	func_56(&(iParam0->f_24), 512);
	func_56(&(iParam0->f_24), 16);
	func_56(&(iParam0->f_24), 1024);
	func_56(&(iParam0->f_24), 64);
	func_56(&(iParam0->f_24), 2048);
	func_56(&(iParam0->f_24), 16384);
	func_56(&(iParam0->f_24), 8192);
}

bool func_369(var uParam0)
{
	if (-1829635046 == func_510(81053684))
	{
		if (func_511(uParam0))
		{
			return true;
		}
	}
	else if (func_512(-525676072, uParam0) || func_269(func_513(1742327865), -1303648999))
	{
		if (func_511(uParam0))
		{
			return true;
		}
	}
	return false;
}

int func_370(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	struct<5> Var7;

	if (!func_267(iParam0, 0))
	{
		return 0;
	}
	if (iParam3 == -142743235)
	{
		if (func_514(iParam0))
		{
			iParam3 = 562618531;
		}
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_515(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_34, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_325(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
		}
		return 0;
	}
	if (!func_237(iParam0, 1))
	{
		return 0;
	}
	Var5 = { func_322(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((func_380(iParam0, 0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_380(iParam0, 0, 0, 0) - iParam1) < 0)
		{
			func_370(iParam0, func_380(iParam0, 0, 0, 0), bParam2, iParam3);
			return 0;
		}
	}
	if (func_289(iParam0) == joaat("WEAPON"))
	{
		if (!func_516(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_517(iParam0, iParam1, iParam3, bParam2, 0))
	{
		return 0;
	}
	else
	{
		Var7 = { func_408(iParam0, 0, 0) };
		if (func_296(0) && Var7.f_4 == 1084182731)
		{
			func_518(1, 0, 0);
		}
	}
	if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1940144.f_21 = 0;
	}
	if (!func_296(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		func_325(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
	}
	return 1;
}

int func_371(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	int iVar0;
	struct<5> Var1;
	struct<16> Var6;
	struct<17> Var22;

	iVar0 = -1;
	Var1 = { func_408(joaat("CURRENCY_CASH"), 1, 0) };
	Var6 = { func_519(joaat("CURRENCY_CASH"), Var1, Var1.f_4, iParam0, 1) };
	Var6.f_12 = iParam2;
	iVar0 = func_520(joaat("USE"), &Var6, bParam3);
	if (iVar0 == -1)
	{
	}
	else
	{
		Var22.f_7 = -142743235;
		Var22.f_16 = -1;
		StringCopy(&(Var22.f_12), sParam1, 32);
		func_521(iVar0, Var22);
	}
	return iVar0;
}

void func_372(int iParam0)
{
	struct<2> Var0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_142() < iParam0)
	{
		iParam0 = func_142();
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	Var0 = { func_442(joaat("CAREER_CASH")) };
	STATS::_0xBD861AE8A5181ED7(&Var0, iParam0);
}

void func_373(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_445(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 1, joaat("COLOR_RED"), 0, 0, 0, 1);
}

bool func_374(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return joaat("NBX_CIVILIANS");
		case 81:
			return joaat("VAL_CIVILIANS");
		case 40:
			return joaat("BLA_UPPERCLASS");
		default:
			break;
	}
	return -1;
}

int func_375(var uParam0, var uParam1, int iParam2, vector3 vParam3, float fParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, float fParam13, bool bParam14, bool bParam15)
{
	int iVar0;
	int iVar1;

	if (fParam13 <= 0f)
	{
		iVar0 = VOLUME::_CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	}
	else
	{
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam13);
	}
	iVar1 = func_522(uParam0, uParam1, iParam2, iVar0, bParam7, bParam8, bParam9, bParam10, bParam11, bParam12, bParam14, bParam15);
	func_523(iVar0);
	return iVar1;
}

var func_376()
{
	return Global_1939161.f_26;
}

void func_377(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6)
{
	if (!func_524(iParam0, 0))
	{
		return;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return;
	}
	if (iParam5 && PED::_0xF9331B3A314EB49D(iParam0))
	{
		PED::_0xF1C03A5352243A30(iParam0);
		return;
	}
	if (func_31(vParam1))
	{
	}
	switch (iParam4)
	{
		case 3:
			PED::_0x802092B07E3B1EEA(iParam0, vParam1, iParam6);
			break;
		case 5:
			PED::_0x463803429297117C(iParam0, vParam1, iParam6, 0);
			break;
		case 6:
			PED::_0x62FDAD5E01D2DD47(iParam0, vParam1, iParam6, 0);
			break;
		case 4:
			PED::_0xEC6935EBE0847B90(iParam0, vParam1);
			break;
		case 2:
			PED::_0xEEED8FAFEC331A70(iParam0, vParam1, iParam6);
			break;
		case 1:
			PED::_0xF1C03A5352243A30(iParam0);
			break;
		case 7:
			PED::_0xA3A9299C4F2ADB98(iParam0);
			break;
		default:
			PED::_0xA3A9299C4F2ADB98(iParam0);
			break;
	}
}

bool func_378(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_267(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258.f_6)
	{
		return false;
	}
	iVar0 = func_515(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_525("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_526(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_278(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_527(iVar1);
				return true;
			}
			iVar3++;
		}
		func_527(iVar1);
	}
	return false;
}

bool func_379(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_267(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_402(iParam0);
	switch (iVar0)
	{
		case -636562458:
		case 252325943:
		case 829857647:
		case 1216664798:
		case 1341188928:
			break;
		default:
			return false;
	}
	iVar1 = func_528(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_529(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_530(iParam0);
	iVar2 = func_529(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == Global_17411.f_55.f_644.f_1354.f_5[iVar2 /*17*/];
}

int func_380(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_267(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_289(iParam0);
	if (iVar1 == joaat("AMMO") || (bParam1 && iVar1 == joaat("WEAPON")))
	{
		iVar2 = func_515(iParam0, 1);
		if (iVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar2);
		}
	}
	else if (iVar1 == joaat("WEAPON"))
	{
		return func_531(iParam0, 0);
	}
	if (func_425(iParam0, joaat("DEFAULT")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_419(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_532(iParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_419(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

void func_381(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_382(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_383(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_384(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_258(&(iParam0->f_18));
}

void func_385(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;

	if (func_13(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_14(&(iParam1->f_6), 0, 1);
	}
	if (!func_13(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_255(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_29(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (func_13(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_390(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_533(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_534(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_76(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
					HUD::_HIDE_HUD_COMPONENT(-1744263063);
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_533(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_78(iParam1->f_6, 0, 1, 1);
				}
				else
				{
					func_78(iParam1->f_6, 1, 1, 1);
				}
			}
		}
	}
}

void func_386(int* iParam0, int iParam1)
{
	if (!func_188(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_75(iParam0, 14);
		}
	}
}

bool func_387(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_388(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
{
	bool bVar0;
	bool bVar1;

	bVar0 = (MISC::IS_BIT_SET(*iParam1, 0) && !MISC::IS_BIT_SET(*iParam1, 4));
	if (MISC::IS_BIT_SET(*iParam1, 13))
	{
		return true;
	}
	if (bParam10)
	{
		if (MISC::IS_BIT_SET(*iParam1, 20))
		{
			if (!MISC::IS_BIT_SET(*iParam0, 25))
			{
				MISC::SET_BIT(iParam0, 24);
			}
			return true;
		}
	}
	if (MISC::IS_BIT_SET(*iParam1, 9))
	{
		MISC::CLEAR_BIT(iParam1, 9);
		return true;
	}
	if (bParam6)
	{
		if (MISC::IS_BIT_SET(*iParam1, 6))
		{
			return true;
		}
	}
	else if (MISC::IS_BIT_SET(*iParam1, 5))
	{
		return true;
	}
	if (MISC::IS_BIT_SET(*iParam1, 7))
	{
		if (fParam5 > iParam1->f_4)
		{
			return true;
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 17))
	{
		if (bParam3)
		{
			if (bParam4)
			{
				return true;
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 18))
	{
		if (MISC::IS_BIT_SET(*iParam1, 8))
		{
			bVar1 = false;
			if (fParam9 > -1f)
			{
				if (fParam9 < iParam1->f_3)
				{
					bVar1 = true;
				}
			}
			if (!bParam7)
			{
				if (bParam8 || bVar1)
				{
					return true;
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 2))
	{
		if (MISC::IS_BIT_SET(*iParam1, 1))
		{
			if (iParam11 < iParam1->f_14)
			{
				return true;
			}
		}
	}
	return !bVar0;
}

bool func_389(int iParam0, bool bParam1)
{
	if (bParam1 && !func_13(iParam0))
	{
		return false;
	}
	return !func_73(iParam0, 4);
}

void func_390(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (bParam3 && !func_13(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_57(iParam0);
	func_533(iParam0, 18, 0, 1);
	func_533(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UIPROMPT_SET_GROUP(Global_1951255[iVar0 /*23*/].f_3, iParam4, iParam2);
}

bool func_391(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_13(iParam0))
	{
		return false;
	}
	iVar0 = func_57(iParam0);
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

bool func_392(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_13(iParam0))
	{
		return false;
	}
	iVar0 = func_57(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(Global_1951255[iVar0 /*23*/].f_3);
}

void func_393(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_13(iParam0))
	{
		return;
	}
	iVar0 = func_57(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(Global_1951255[iVar0 /*23*/].f_3);
}

void func_394(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_188(iParam0, 13))
	{
		func_75(iParam0, 0);
	}
	else
	{
		func_171(iParam0, 0);
	}
	if (func_13(iParam0->f_6))
	{
		if (bParam2)
		{
			func_14(&(iParam0->f_6), 0, 1);
		}
	}
}

bool func_395(var uParam0, float fParam1)
{
	if (!func_248(uParam0))
	{
		return false;
	}
	if (func_211(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_396(int iParam0)
{
	return iParam0 != 0;
}

bool func_397(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_BUY_AWARD_KEY_VALID(iParam0);
}

bool func_398(int iParam0, int iParam1)
{
	struct<47> Var0;
	int iVar471;
	int iVar472;
	int iVar473;
	int iVar474;
	int iVar475;

	Var0 = 10;
	Var0.f_1.f_4 = 15;
	Var0.f_1.f_36 = 10;
	Var0.f_1.f_47.f_4 = 15;
	Var0.f_1.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_BUY_AWARD_ACQUIRE_COSTS(iParam0, &Var0, &iVar471, 10) || iVar471 == 0)
	{
		return false;
	}
	iVar473 = 0;
	iVar474 = 0;
	while (iVar474 < iVar471)
	{
		if (Var0[iVar474 /*47*/] == iParam1)
		{
			iVar473 = Var0[iVar474 /*47*/].f_35;
			iVar475 = 0;
			while (iVar475 < iVar473)
			{
				iVar472 = Var0[iVar474 /*47*/].f_36[iVar475];
				if (iVar472 == 0)
				{
				}
				else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar472))
				{
					return true;
				}
				iVar475++;
			}
		}
		iVar474++;
	}
	return false;
}

int func_399(int iParam0, int iParam1)
{
	if (!func_400(iParam0, 2))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_0x99C6EA66DFE73757(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

bool func_400(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

void func_401(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<2> Var7;
	struct<2> Var19;
	float fVar21[15];

	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!ITEMDATABASE::_0xE81D0378A384E755(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = Var7.f_1[iVar1];
		iVar4 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIED_PRICES(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != iParam1)
			{
			}
			else
			{
				iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIERS(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_MODIFIER(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if ((*uParam2)[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (fVar21[iVar0] != 1f && (uParam2[iVar0 /*2*/])->f_1 > 0)
		{
			if (*uParam2)[iVar0 /*2*/] == joaat("CURRENCY_GOLD_BAR")
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 100f))) / 1000000) * 100;
			}
			else
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 100f))) / 10000);
			}
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_402((*uParam2)[iVar0 /*2*/]) != -829303394)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

int func_402(int iParam0)
{
	struct<2> Var0;

	if (!func_267(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_403(int iParam0)
{
	return func_535(iParam0) + 30;
}

bool func_404(int iParam0)
{
	return func_289(iParam0) == joaat("WEAPON");
}

bool func_405(int iParam0)
{
	var uVar0;

	if (func_165() != -1)
	{
		return false;
	}
	if (func_290(iParam0, 1048576))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_411(iParam0, &uVar0, 1, 0, 0, -1, 0);
	}
	return func_237(iParam0, 1);
}

void func_406(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (func_289(iParam0) != joaat("WEAPON"))
	{
		return;
	}
	iVar0 = func_294(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !func_418(iVar0))
	{
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, iVar0, 0, false) && func_380(iParam0, 0, 0, 0) == 0))
		{
			if (func_165() == -1)
			{
				func_295(iVar0);
			}
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_325(iParam0, iParam1, 0, 0, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_407(int iParam0, int iParam1)
{
	if (func_269(iParam0, 58855631))
	{
		func_456(iParam0, -915411861, iParam1, 1);
	}
}

struct<5> func_408(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_536(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_289(iParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_422(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_537(bParam1) };
			if (bParam2 && func_538(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_420(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_420(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_421(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
		case joaat("COACH"):
		case joaat("HORSE"):
			Var0.f_4 = 1782082944;
			break;
		case joaat("EMOTE"):
			Var0.f_4 = -1591664384;
			Var0 = { func_539(bParam1) };
			switch (func_402(iParam0))
			{
				case -1070622585:
					Var0.f_4 = -6796437;
					break;
				case -1057349201:
					Var0.f_4 = 1473261684;
					break;
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_540(iParam0, -1823706425))
			{
				Var0 = { func_422(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_540(iParam0, -1483207246))
			{
				Var0 = { func_422(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1911121386))
			{
				Var0 = { func_422(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_540(iParam0, -1653629781))
			{
				Var0 = { func_422(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1384535894);
			}
			break;
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
				Var28.f_9 = -1591664384;
				if (!func_541(Var0, &Var28, bParam1, 0, -1))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var28.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -718417579))
			{
				Var0.f_4 = -718417579;
			}
			else if (func_540(iParam0, -1653629781))
			{
				Var0 = { func_422(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1384535894);
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("CHARACTER"));
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_409(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_267(iParam0, 0) && !func_400(func_270(iParam0), 2))
	{
		return 0;
	}
	if (func_289(iParam0) == joaat("FEE"))
	{
		return -1;
	}
	if (!bParam2 && func_425(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_419(bParam3), iParam0);
}

int func_410(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_301(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_419(bParam1), iParam0, iParam3);
}

bool func_411(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	struct<4> Var0;
	struct<10> Var4;
	int iVar26;
	int iVar27;

	func_542(&iParam0);
	if (!func_267(iParam0, 0) && !func_400(func_270(iParam0), 2))
	{
		return false;
	}
	if (!bParam3 && func_425(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam3 = true;
	}
	if (func_404(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		Var0 = { func_537(0) };
		Var4.f_9 = -1591664384;
		if (!func_420(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
		{
			return false;
		}
		else if (func_421(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
		{
			return false;
		}
		if (func_538(iParam0, 1))
		{
			if (!func_420(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
			{
				return false;
			}
			else if (func_421(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
			{
				return false;
			}
		}
		return true;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_409(iParam0, uParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return false;
	}
	else if (iVar26 == 0)
	{
		return true;
	}
	iVar27 = func_543(iParam0, *uParam1, uParam1->f_4, bParam4, bParam3, iParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return true;
	}
	return false;
}

bool func_412()
{
	if (((((!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_34, -1) && !PED::IS_PED_USING_ANY_SCENARIO(Global_34)) && !func_544(Global_34, 1369124074)) && !func_544(Global_34, 713668775)) && !TASK::_0xEC7E480FF8BD0BED(Global_34)) && !PED::IS_PED_IN_ANY_VEHICLE(Global_34, false))
	{
		return true;
	}
	return false;
}

int func_413(int iParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;

	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(iParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if (Var0[iVar42 /*2*/].f_1 == iParam1)
			{
				return Var0[iVar42 /*2*/];
			}
			iVar42++;
		}
	}
	return 0;
}

void func_414(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = Global_39.f_3643[iVar1];
	MISC::SET_BIT(&uVar3, iVar2);
	Global_39.f_3643[iVar1] = uVar3;
}

void func_415(int iParam0)
{
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
			func_545(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_546(1);
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_546(2);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_546(3);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 30:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 31:
			break;
		case 32:
			func_547(1);
			break;
		case 33:
			func_548(1);
			break;
		case 34:
			func_549(1);
			break;
		case 35:
			break;
		case 36:
			func_550(0);
			break;
		case 37:
			func_551(0);
			break;
		case 38:
			func_552(0);
			break;
		case 39:
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if (func_553() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_554("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_306(677, 0);
			break;
		case 3:
			if (func_553() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_554("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_306(678, 0);
			break;
		case 4:
			if (func_553() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_554("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_306(679, 0);
			Jump @1404; //curOff = 873
			if (func_553() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_554("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_306(680, 0);
			Jump @1404; //curOff = 996
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			Jump @1404; //curOff = 1028
			if (func_165() == -1)
			{
				if (!func_237(1013902307, 1))
				{
					func_299(1013902307, 1, 752097756);
				}
			}
			Jump @1404; //curOff = 1069
			if (func_165() == -1)
			{
				if (!func_237(1013902307, 1))
				{
					func_299(1013902307, 1, 752097756);
				}
				if (!func_237(142640135, 1))
				{
					func_299(142640135, 1, 752097756);
				}
			}
			Jump @1404; //curOff = 1140
			if (func_165() == -1)
			{
				if (!func_237(786809402, 1))
				{
					func_299(786809402, 1, 752097756);
				}
			}
			Jump @1404; //curOff = 1181
			if (func_165() == -1)
			{
				if (!func_237(786809402, 1))
				{
					func_299(786809402, 1, 752097756);
				}
				if (!func_237(-518019409, 1))
				{
					func_299(-518019409, 1, 752097756);
				}
			}
			Jump @1404; //curOff = 1252
			PLAYER::_0x5B9813ECF7633FE8(0);
			Jump @1404; //curOff = 1260
			Jump @1404; //curOff = 1263
			Jump @1404; //curOff = 1266
			Jump @1404; //curOff = 1269
			Jump @1404; //curOff = 1272
			Jump @1404; //curOff = 1275
			Jump @1404; //curOff = 1278
			Jump @1404; //curOff = 1281
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), true);
			Global_1940258.f_41 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			Jump @1404; //curOff = 1321
			Jump @1404; //curOff = 1324
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 1);
			Jump @1404; //curOff = 1336
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), true);
			Jump @1404; //curOff = 1349
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), true);
			Jump @1404; //curOff = 1362
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), true);
			Jump @1404; //curOff = 1375
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("COMPENDIUM"), true);
			Jump @1404; //curOff = 1388
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), true);
		}

int func_416(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_555(iParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

bool func_417(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (UNLOCK::_UNLOCK_IS_VISIBLE(iVar0))
	{
		return true;
	}
	return false;
}

bool func_418(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		return true;
	}
	return false;
}

int func_419(bool bParam0)
{
	if (func_165() == -1)
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

bool func_420(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_543(iParam0, *uParam1, iParam2, bParam3, 1, iParam4) > 0;
}

bool func_421(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_556(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_422(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_267(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_419(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_423(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<14> Var0;
	int iVar14;
	struct<13> Var15;
	struct<17> Var31;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return false;
	}
	if (func_557(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_541(*uParam1, &Var0, bParam6, 0, -1))
	{
		return false;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_296(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_165() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_520(joaat("USE"), &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31.f_16 = -1;
				Var31 = bParam5;
				Var31.f_7 = iParam4;
				func_521(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_419(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_424(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_34, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar2 = func_558(WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_34, iParam0, iVar2);
		if (WEAPON::GET_MAX_AMMO(Global_34, &iVar1, iParam0) && WEAPON::GET_AMMO_IN_PED_WEAPON(Global_34, iParam0) > iVar1)
		{
			WEAPON::SET_PED_AMMO(Global_34, iParam0, iVar1);
		}
	}
}

int func_425(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

int func_426(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	if (!func_267(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_425(iParam0, joaat("DEFAULT"));
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_408(iParam0, 0, 0) };
	if (func_411(iParam0, &Var1, iParam1, 0, 0, -1, 0))
	{
		return 0;
	}
	if (!func_296(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_419(0), &uVar6, &Var1, iParam0, Var1.f_4, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

int func_427(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_267(iParam0, 0))
	{
		return 0;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_411(iParam0, uParam2, iParam3, bParam5, 0, -1, 0))
	{
		return 0;
	}
	if (!func_296(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_419(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_428(int iParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34) || Global_1940258.f_6)
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
	DECORATOR::DECOR_SET_INT(Global_34, sVar0, iParam0);
	iVar2 = func_559();
	func_560(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_34, sVar1, iVar2);
}

int func_429(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_279(iParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, joaat("AMMO_ARROW")) <= 0)
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
		iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
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

bool func_430(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

int func_431(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_432(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	if (WEAPON::_0x705BE297EEBDB95D(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			if (!func_60(49))
			{
				if (!func_60(47))
				{
					return 149;
				}
				return 151;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (!func_60(50))
			{
				if (!func_60(48))
				{
					return 150;
				}
				return 152;
			}
		}
	}
	return 153;
}

void func_433(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_434(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_561(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_562(iParam0))
	{
		return false;
	}
	if (func_563(iParam0))
	{
		return false;
	}
	if ((Global_1900736.f_67 && !func_439(iParam0, 1)) || func_564(32768))
	{
		if (!func_439(iParam0, 262144) || !Global_1904651.f_8686)
		{
			return false;
		}
	}
	if (!func_565())
	{
		return false;
	}
	return true;
}

void func_435(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904651[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904651[iParam0] = uVar0;
}

int func_436(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	int iVar25;

	if (func_165() == 0)
	{
		return 0;
	}
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_237(joaat("PROVISION_TRINKET_ELK_ANTLER"), 1))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	MISC::_0x48E4D50F87A96AA5(Global_34, 1, 1, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (Var1.f_1[iVar24] == joaat("CURRENCY_CASH"))
		{
			return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			iVar25 = Var1.f_1[iVar24];
			if (func_267(iVar25, 0) && func_269(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_437(int iParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REVOLVER_EXPRESS");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REVOLVER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*iParam1 = joaat("PISTOL_AMMO_BOX");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*iParam1 = joaat("PISTOL_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("PISTOL_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_PISTOL_EXPRESS");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("PISTOL_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_PISTOL_HIGH_VELOCITY");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*iParam1 = joaat("RIFLE_AMMO_BOX");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*iParam1 = joaat("RIFLE_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("RIFLE_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_RIFLE_EXPRESS");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("RIFLE_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_RIFLE_HIGH_VELOCITY");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*iParam1 = joaat("REPEATER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*iParam1 = joaat("REPEATER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("REPEATER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REPEATER_EXPRESS");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("REPEATER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REPEATER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*iParam1 = joaat("SHOTGUN_AMMO_BOX");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*iParam1 = joaat("SHOTGUN_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*iParam1 = joaat("SHOTGUN_AMMO_BOX_SLUG");
			*uParam2 = joaat("AMMO_SHOTGUN_SLUG");
			break;
		case joaat("AMMO_22_AMMOBOX"):
			*iParam1 = joaat("22_AMMO_BOX");
			*uParam2 = joaat("AMMO_22");
			break;
	}
}

int func_438(int iParam0)
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

bool func_439(int iParam0, int iParam1)
{
	return (Global_1904651.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

void func_440(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	if (iParam1 == 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (uParam0->f_1[iVar1] == iParam1)
		{
			return;
		}
		switch (iParam1)
		{
			case joaat("LOOTER_PED_IS_FEMALE"):
			case joaat("LOOTER_PED_IS_MALE"):
				if (uParam0->f_1[iVar1] == joaat("LOOTER_PED_IS_MALE") || uParam0->f_1[iVar1] == joaat("LOOTER_PED_IS_FEMALE"))
				{
					bVar0 = true;
				}
				break;
			case joaat("LOOT_TYPE_NORMAL"):
			case joaat("LOOT_TYPE_SKINNING"):
				if (uParam0->f_1[iVar1] == joaat("LOOT_TYPE_NORMAL") || uParam0->f_1[iVar1] == joaat("LOOT_TYPE_SKINNING"))
				{
					bVar0 = true;
				}
				break;
			case joaat("FISHING_RESULT_RUINED"):
			case joaat("FISHING_RESULT_NORMAL"):
			case joaat("FISHING_RESULT_LEGENDARY"):
				if ((uParam0->f_1[iVar1] == joaat("FISHING_RESULT_NORMAL") || uParam0->f_1[iVar1] == joaat("FISHING_RESULT_RUINED")) || uParam0->f_1[iVar1] == joaat("FISHING_RESULT_LEGENDARY"))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			uParam0->f_1[iVar1] = iParam1;
			return;
		}
		iVar1++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_441(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	var uVar0;
	struct<15> Var1;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	func_566(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_3.f_1 = 10;
	Var1 = iParam3;
	Var1.f_3 = { *uParam1 };
	Var1.f_2 = iParam4;
	func_567(uParam2, iParam0, Var1);
	return 1;
}

struct<2> func_442(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

char* func_443(int iParam0)
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

int func_444(int iParam0)
{
	var uVar0;

	if (!func_568(iParam0, &uVar0, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		return joaat("_PLACEHOLDER");
	}
	return uVar0;
}

var func_445(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	uVar20 = UIFEED::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_569(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_446()
{
	return !Global_1913504;
}

void func_447(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1913504.f_3)
	{
		if ((((Global_1913504.f_4[iVar0 /*6*/] == iParam0 && Global_1913504.f_4[iVar0 /*6*/].f_2 == bParam2) && Global_1913504.f_4[iVar0 /*6*/].f_3 == bParam3) && Global_1913504.f_4[iVar0 /*6*/].f_4 == bParam4) && Global_1913504.f_4[iVar0 /*6*/].f_5 == bParam5)
		{
			Global_1913504.f_4[iVar0 /*6*/].f_1 = (Global_1913504.f_4[iVar0 /*6*/].f_1 + iParam1);
			return;
		}
		iVar0++;
	}
	if (Global_1913504.f_3 < 19)
	{
		Global_1913504.f_4[Global_1913504.f_3 /*6*/] = iParam0;
		Global_1913504.f_4[Global_1913504.f_3 /*6*/].f_1 = iParam1;
		Global_1913504.f_4[Global_1913504.f_3 /*6*/].f_2 = bParam2;
		Global_1913504.f_4[Global_1913504.f_3 /*6*/].f_3 = bParam3;
		Global_1913504.f_4[Global_1913504.f_3 /*6*/].f_4 = bParam4;
		Global_1913504.f_4[Global_1913504.f_3 /*6*/].f_5 = bParam5;
		Global_1913504.f_3++;
	}
}

char* func_448(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_449(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
			if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/]))
			{
				Jump @227; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/].f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/]);
				iVar2 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/].f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0 /*3*/].f_2 != iParam2)
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
					*uParam1 = { Var3.f_2[iVar0 /*3*/] };
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

char* func_450(int iParam0)
{
	if (func_269(iParam0, -1995062316))
	{
		return "collectible_arrowheads";
	}
	if (func_269(iParam0, 1239889275))
	{
		return "collectible_liquor_bottles";
	}
	if (func_269(iParam0, 143267379))
	{
		return "collectible_coins";
	}
	if (func_269(iParam0, -944041124))
	{
		return "colectible_heirlooms";
	}
	if (func_269(iParam0, 1562621600))
	{
		return "collectible_jewelry";
	}
	if (func_269(iParam0, -149719013))
	{
		return "collectible_bird_eggs";
	}
	if (func_269(iParam0, 1940829793))
	{
		return "collectible_tarot_cards";
	}
	if (func_269(iParam0, 781094263))
	{
		return "collectible_flowers";
	}
	if (((func_269(iParam0, -352095726) || func_269(iParam0, -2014783736)) || func_269(iParam0, -545064757)) || func_269(iParam0, 679186220))
	{
		return "collectible_found_fossil";
	}
	return "";
}

bool func_451(int iParam0)
{
	if (func_269(iParam0, -189374246))
	{
		if (((func_570(iParam0, joaat("CI_TAG_FOLDER_ANIMAL_SAMPLES_LEGENDARY_ALBINO")) || func_570(iParam0, joaat("CI_TAG_FOLDER_ANIMAL_SAMPLES_LEGENDARY_MELANISTIC"))) || func_570(iParam0, joaat("CI_TAG_FOLDER_ANIMAL_SAMPLES_LEGENDARY_PATTERNED"))) || func_570(iParam0, joaat("CI_TAG_FOLDER_ANIMAL_SAMPLES_LEGENDARY_RED_BLONDE")))
		{
			return true;
		}
	}
	if (func_269(iParam0, -753854379) || func_269(iParam0, 173360570))
	{
		return true;
	}
	return false;
}

bool func_452(int iParam0)
{
	switch (iParam0)
	{
		case -1696039442:
		case 688466329:
		case 759802290:
			return false;
		default:
			break;
	}
	return true;
}

int func_453(int iParam0)
{
	struct<19> Var0;
	int iVar35;

	if (!func_267(iParam0, 0))
	{
		return 0;
	}
	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var0))
	{
		iVar35 = 0;
		while (iVar35 < 8)
		{
			if (Var0.f_18[iVar35 /*2*/].f_1 == 14460646)
			{
				if (Var0.f_18[iVar35 /*2*/] != 0)
				{
					return Var0.f_18[iVar35 /*2*/];
				}
			}
			iVar35++;
		}
	}
	return 0;
}

int func_454(int iParam0)
{
	int iVar0;
	struct<10> Var1;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;

	iVar0 = func_571(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_572(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
	if (func_573(Var1, &iVar11, &iVar12, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar12)
		{
			if (ITEMDATABASE::_0x8750F69A720C2E41(iVar11, iVar13, &iVar14) && func_574(iVar14))
			{
				func_575(iVar11);
				return iVar14;
			}
			iVar13++;
		}
		func_575(iVar11);
	}
	return 0;
}

bool func_455(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, -949239683))
	{
		return true;
	}
	return false;
}

int func_456(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_267(iParam0, 0) && !func_400(func_270(iParam0), 2))
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

char* func_457(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_458(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_576(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

bool func_459(int iParam0, char* sParam1)
{
	int iVar0;
	char cVar1[128];

	if (!func_267(iParam0, 0))
	{
		return false;
	}
	StringCopy(sParam1, func_577(iParam0), 128);
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (!func_578(iParam0))
	{
		return false;
	}
	StringCopy(&cVar1, func_579(iParam0), 128);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
		return false;
	}
	StringConCat(&cVar1, " - ", 128);
	iVar0 = (iVar0 + HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar1));
	StringConCat(&cVar1, sParam1, 128);
	if (iVar0 >= 127)
	{
		return false;
	}
	*sParam1 = { cVar1 };
	return true;
}

char* func_460(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

char* func_461(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_457(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

void func_462(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_580())
	{
		Global_1913504.f_125 = MISC::GET_GAME_TIMER();
		Global_1913504.f_126 = iParam1;
	}
	Global_1913504.f_127 = (Global_1913504.f_127 + iParam0);
}

bool func_463()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

bool func_464()
{
	return DLC::IS_DLC_PRESENT(joaat("DLC_ULTIMATEEDITION"));
}

bool func_465(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	bVar2 = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &fVar0, &fVar1);
	if (bVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return true;
		}
	}
	return false;
}

Vector3 func_466(int iParam0)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;

	if (!CAM::DOES_CAM_EXIST(iParam0))
	{
		vVar0 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	else
	{
		vVar0 = { CAM::GET_CAM_ROT(iParam0, 2) };
	}
	fVar3 = BUILTIN::SIN(vVar0.z);
	fVar4 = BUILTIN::COS(vVar0.z);
	fVar5 = BUILTIN::SIN(vVar0.x);
	fVar6 = BUILTIN::COS(vVar0.x);
	return func_467((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

Vector3 func_467(vector3 vParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

void func_468(int iParam0)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	bool bVar3;

	if (Global_19 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1940258.f_32);
	Global_1940258.f_21 = func_581();
	if (Global_1940258.f_21)
	{
		Global_1940258.f_22 = MISC::GET_GAME_TIMER();
	}
	bVar1 = false;
	if (WEAPON::IS_WEAPON_VALID(Global_1940258.f_38))
	{
		bVar1 = true;
		if (PED::IS_PED_SHOOTING(Global_34))
		{
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_34, &uVar2))
			{
			}
			else
			{
				uVar2 = Global_1940258.f_38;
			}
			Global_1940258.f_40 = uVar2;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_582(&(Global_1940258.f_28), &(Global_1940258.f_33));
			Global_1940258.f_32 = iParam0;
			break;
		case 1:
			Global_1940258.f_24 = PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 4000);
			if (!Global_1940258.f_24)
			{
				if (bVar1 && WEAPON::_IS_WEAPON_LASSO(Global_1940258.f_38))
				{
					Global_1940258.f_24 = PED::_GET_LASSO_TARGET(Global_34) != 0;
				}
				if (Global_1940258.f_40 == joaat("WEAPON_THROWN_BOLAS"))
				{
					Global_1940258.f_24 = WEAPON::_0x46D42883E873C1D7(Global_34) > 0;
				}
			}
			break;
		case 2:
			bVar3 = WEAPON::IS_WEAPON_VALID(Global_1940258.f_40);
			if (bVar3 && WEAPON::_IS_WEAPON_LASSO(Global_1940258.f_40))
			{
				Global_1940258.f_19 = 0;
			}
			else
			{
				if (bVar3 && WEAPON::_0x5809DBCA0A37C82B(Global_1940258.f_40))
				{
					Global_1940258.f_19 = PED::_0x285D36C5C72B0569(Global_34) <= 3f;
				}
				else
				{
					Global_1940258.f_19 = PED::_0x285D36C5C72B0569(Global_34) <= 1f;
				}
				if (Global_1940258.f_19)
				{
					Global_1940258.f_23 = MISC::GET_FRAME_COUNT();
				}
			}
			break;
		default:
			Global_1940258.f_32 = iParam0 + 1;
			break;
	}
	Global_19 |= 4;
}

var func_469(int iParam0)
{
	return Global_1102219.f_3705[iParam0 /*3*/];
}

bool func_470(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (func_583(bParam0, &iVar0, &iVar1))
	{
		if (bParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && PED::GET_PED_CONFIG_FLAG(iVar0, 6, false))
			{
				return false;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && PED::GET_PED_CONFIG_FLAG(iVar1, 6, false))
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

bool func_471(var uParam0)
{
	int iVar0;

	iVar0 = Global_1940258.f_34;
	if (func_165() == -1)
	{
		if (Global_1940258.f_34 == 0)
		{
			iVar0 = func_584(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1940258.f_34) || !Global_1956200.f_1716[4])
	{
		iVar0 = func_584(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_499(iVar0) == -1)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
	{
		return false;
	}
	uParam0->f_15 = iVar0;
	return true;
}

void func_472(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_585(uParam0);
	}
}

bool func_473(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam2))
	{
		iVar1 = func_499(iParam2);
	}
	else
	{
		iVar1 = func_498(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_499(iParam0);
	}
	else
	{
		iVar0 = func_498(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_240(*uParam1, 8388608))
	{
		return true;
	}
	iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	iVar3 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam2);
	switch (iVar2)
	{
		case joaat("REL_CIVMALE"):
		case joaat("REL_RE_VICTIM"):
		case joaat("REL_CIVNATIVE"):
		case joaat("REL_PINKERTONS"):
		case joaat("REL_GUAMA_LAW"):
		case joaat("REL_COP"):
		case joaat("REL_CIVFEMALE"):
			switch (iVar3)
			{
				case joaat("REL_CIVMALE"):
				case joaat("REL_RE_VICTIM"):
				case joaat("REL_CIVNATIVE"):
				case joaat("REL_CIVFEMALE"):
					return true;
			}
			break;
	}
	if (iVar2 == iVar3)
	{
		return true;
	}
	return false;
}

float func_474(int iParam0, int iParam1)
{
	return func_41(iParam0, iParam1, 1, 1);
}

float func_475(var uParam0)
{
	return uParam0->f_29;
}

bool func_476(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 8:
			return iParam2;
		case 4:
		case 16:
			return iParam1;
		case 32:
		case 64:
		case 128:
			return iParam3;
		case 1:
		case 2:
		case 2048:
			return true;
		case 8192:
			return iParam4;
		default:
			break;
	}
	return false;
}

void func_477(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_184(uParam0, 134217728);
	}
	else
	{
		func_183(uParam0, 134217728);
	}
}

void func_478()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

float func_479(var uParam0)
{
	return uParam0->f_18;
}

bool func_480(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_13 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_240(*uParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (PED::_0x06087579E7AA85A9(iParam1, Global_34, -1f, fParam3, -1f, fVar0))
	{
		return true;
	}
	if (*uParam0 & 32768 != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_34, 17))
		{
			return true;
		}
	}
	return false;
}

int func_481(var uParam0)
{
	return uParam0->f_19;
}

int func_482(var uParam0)
{
	return uParam0->f_20;
}

bool func_483(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return false;
	}
	if (bParam3)
	{
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, false) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(func_332(iVar0, 0)))
		{
			if (func_465(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_484(var uParam0)
{
	return uParam0->f_25;
}

int func_485(var uParam0)
{
	return uParam0->f_23;
}

int func_486(var uParam0)
{
	int iVar0;

	switch (uParam0->f_8)
	{
		case 0:
			switch (uParam0->f_7)
			{
				case 1:
					iVar0 = 0;
					break;
				case 2:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 1:
			switch (uParam0->f_7)
			{
				case 3:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
		case 2:
			switch (uParam0->f_7)
			{
				case 2:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 1:
					iVar0 = 2;
					break;
			}
			break;
		case 3:
			switch (uParam0->f_7)
			{
				case 2:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 4:
			switch (uParam0->f_7)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
	}
	if (*uParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_487(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_586(iParam0, vParam4, 0.5f))
	{
		if (ENTITY::_0x0C9DBF48C6BA6E4C(iParam0, vParam4, 17))
		{
			return true;
		}
	}
	if (BUILTIN::VDIST(vParam1, vParam4) < 5f)
	{
		return true;
	}
	return false;
}

int func_488(int iParam0)
{
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, false))
	{
		if (Global_1940258.f_38 == joaat("WEAPON_UNARMED"))
		{
			return 1;
		}
		if (WEAPON::IS_WEAPON_VALID(Global_1940258.f_40))
		{
			if (WEAPON::_IS_WEAPON_MELEE(Global_1940258.f_40) || WEAPON::_IS_WEAPON_BOW(Global_1940258.f_40))
			{
				return 1;
			}
		}
	}
	if (func_587(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_489(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (PED::_IS_THIS_MODEL_A_HORSE(iVar0))
	{
		return true;
	}
	return false;
}

bool func_490(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_588(iParam1))
		{
			return false;
		}
	}
	fVar0 = 5f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_491(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_588(iParam1))
		{
			return false;
		}
	}
	fVar0 = 10f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_492(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = func_589(uParam0);
	if (func_588(iParam1))
	{
		return false;
	}
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x2BA9D7BF629F920C(iParam1);
	}
	if (fParam2 < fVar0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_1940258.f_28[iParam3], 17))
		{
			if (PED::_0x06087579E7AA85A9(iParam1, Global_1940258.f_28[iParam3], -1f, -1f, -1f, -1f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_493(int iParam0, int iParam1)
{
	if (!TASK::_0xEFC4303DDC6E60D3(iParam0))
	{
		return false;
	}
	*iParam1 = TASK::_0xED1F514AF4732258(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*iParam1, true))
	{
		return false;
	}
	if (!PED::_0x2D64376CF437363E(*iParam1))
	{
		return false;
	}
	return true;
}

bool func_494(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (WEAPON::_0x8D50F43298AB9545(iParam0, iParam1))
	{
		return true;
	}
	if (!WEAPON::_IS_WEAPON_LASSO(func_277(iParam0, 1, 0, 0)) && !func_277(iParam0, 1, 0, 0) == joaat("WEAPON_THROWN_BOLAS"))
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iParam0, 16, 0))
	{
		if (PED::GET_MELEE_TARGET_FOR_PED(iParam0) == iParam1)
		{
			return true;
		}
	}
	return false;
}

bool func_495(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_496(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_21(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_497(var uParam0)
{
	return uParam0->f_26;
}

int func_498(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, true))
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_499(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, true))
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_500(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_590(iParam0, vVar0, iParam2);
}

float func_501(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

int func_502(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (Global_1940258.f_34 != 0)
	{
		bVar0 = true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), 1, 1))
		{
			return 1;
		}
	}
	if (bVar0)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_1940258.f_34, 1, 1))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 10, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 11, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (bParam3)
		{
			if (func_493(Global_34, &iVar1))
			{
				if (fParam4 < 4f)
				{
					if (PED::IS_PED_RAGDOLL(iParam0) || (!bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar1, iParam0)))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 400))
		{
			return 1;
		}
	}
	if (fParam4 <= 0f)
	{
		fVar2 = func_41(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
	}
	else
	{
		fVar2 = fParam4;
	}
	if (fVar2 < 1f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			if (!bParam2)
			{
				return 1;
			}
			else if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (func_41(iParam0, Global_1940258.f_34, 0, 1) < 2.5f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1940258.f_34, iParam0))
			{
				if (!bParam2)
				{
					return 1;
				}
				else if (PED::IS_PED_RAGDOLL(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_503(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_583(1, &iVar0, &iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iVar0 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17))
				{
					if (!bParam2 || !func_506(uParam1, iVar0))
					{
						return true;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iVar1 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17))
			{
				if (!bParam2 || !func_506(uParam1, iVar1))
				{
					if (func_21(iVar1, Global_35, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_504(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!EVENT::_0x83D43F0FD5276E4D(iParam0, 0))
	{
		return false;
	}
	return true;
}

bool func_505(var uParam0)
{
	return func_240(*uParam0, 131072);
}

bool func_506(var uParam0, int iParam1)
{
	int iVar0;

	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(iParam1, "bIsCriminal"))
	{
		return true;
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam1, 4, false))
	{
		return true;
	}
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam1);
	switch (iVar0)
	{
		case joaat("REL_GANG_ODRISCOLL"):
		case joaat("REL_GANG_SKINNER_BROTHERS"):
		case joaat("REL_GUNSLINGERS"):
		case joaat("REL_GANG_CREOLE"):
		case joaat("REL_GANG_LEMOYNE_RAIDERS"):
		case joaat("REL_GANG_MURFREE_BROOD"):
		case joaat("REL_CRIMINALS"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_507(int iParam0)
{
	return false;
}

int func_508(var uParam0)
{
	return uParam0->f_22;
}

int func_509(int iParam0, var uParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (uParam1->f_5 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = uParam1->f_13;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_34, 90f))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, Global_34))
		{
			return 1;
		}
	}
	return 0;
}

int func_510(int iParam0)
{
	int iVar0;

	iVar0 = func_592(func_591(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1952637.f_1675.f_1[iVar0 /*3*/].f_1;
	}
	return 0;
}

bool func_511(var uParam0)
{
	if (func_512(81053684, uParam0))
	{
		return true;
	}
	if (func_512(-525676072, uParam0))
	{
		return true;
	}
	return false;
}

bool func_512(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_592(func_591(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1952637.f_1675.f_1[iVar1 /*3*/] != 0 && Global_1952637.f_1675.f_1[iVar1 /*3*/] != Global_1952637.f_83[iVar1 /*12*/])
	{
		iVar0 = Global_1952637.f_1675.f_1[iVar1 /*3*/];
		if (func_402(iVar0) == iParam0 || (iParam0 == 81053684 && func_269(iVar0, 160827531)))
		{
			*uParam1 = iVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

int func_513(int iParam0)
{
	return Global_1952637.f_1675.f_1[func_592(iParam0, 1) /*3*/];
}

bool func_514(int iParam0)
{
	return func_289(iParam0) == joaat("CONSUMABLE");
}

int func_515(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_267(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_289(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_269(iParam0, 1399091007))
	{
		func_437(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_516(int iParam0, int iParam1, bool bParam2, int iParam3)
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
		return false;
	}
	Var0 = { func_593(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam2)
	{
		func_594(&Var0, func_537(0));
	}
	if (!func_595(&Var0, &iVar14, &iVar15, 0))
	{
		return false;
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
			if (!func_526(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_423(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_527(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_517(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_267(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_425(iParam0, joaat("DEFAULT"));
	if (iVar0 != 0)
	{
		return func_596(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var1 = { func_408(iParam0, bParam4, 0) };
	Var6 = { func_422(iParam0, Var1, Var1.f_4, bParam4) };
	return func_423(iParam0, &Var6, &Var1, iParam1, iParam2, bParam3, bParam4);
}

void func_518(int iParam0, bool bParam1, int iParam2)
{
	Global_1940311.f_4 = iParam0;
	Global_1940311.f_34 = iParam2;
	if (bParam1 || (func_597() && iParam2 == 0))
	{
		func_598(1);
		func_599(1);
	}
}

struct<16> func_519(int iParam0, struct<4> Param1, int iParam5, int iParam6, bool bParam7)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_4 = { Param1 };
	Var0 = { func_422(iParam0, Var0.f_4, iParam5, 1) };
	Var0.f_8 = iParam0;
	Var0.f_9 = iParam6;
	Var0.f_11 = iParam5;
	if (bParam7)
	{
		Var0.f_15 = func_425(iParam0, joaat("DEFAULT"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_600() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_520(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_601(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_603(func_602(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_604(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_521(int iParam0, struct<17> Param1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346.f_20)
	{
		if (Global_1293346.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			if (Global_1293346.f_20.f_1[iVar0 /*21*/].f_1 == 1 || Global_1293346.f_20.f_1[iVar0 /*21*/].f_1 == 5)
			{
				Global_1293346.f_20.f_1[iVar0 /*21*/].f_4 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

int func_522(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_0x886171A12F400B89(iParam3, iVar0, 1);
	if (iVar6 > 0)
	{
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0);
			iVar2 = iVar1;
			if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && iVar4 < *uParam0) && iVar4 < iParam2)
			{
				if (func_605(iVar2, bParam4, bParam6, bParam8, bParam9, bParam10) && !DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreThisPed"))
				{
					if (!func_606(iVar2, uParam1))
					{
						bVar3 = false;
						if (bParam7 != -1)
						{
							iVar7 = 0;
							iVar7 = 0;
							while (iVar7 < POPULATION::GET_NUM_MODELS_IN_POPULATION_SET(bParam7))
							{
								if (PED::IS_PED_MODEL(iVar2, POPULATION::GET_PED_MODEL_NAME_IN_POPULATION_SET(bParam7, iVar7)))
								{
									bVar3 = true;
								}
								else
								{
									iVar7++;
								}
							}
						}
						else
						{
							bVar3 = true;
						}
						if (bVar3)
						{
							if (!bParam11)
							{
								if (!ENTITY::IS_ENTITY_DEAD(iVar2))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, bParam5);
								}
							}
							(*uParam0)[iVar4] = iVar2;
							iVar4++;
						}
					}
				}
			}
			iVar5++;
		}
	}
	if (iVar4 >= (iParam2 - 1) && iVar6 >= iParam2)
	{
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar4;
}

void func_523(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

bool func_524(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return true;
	}
	if (func_55(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_55(iVar0, 2))
	{
		if (PED::_IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_55(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_55(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_55(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_55(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return false;
		}
	}
	if (func_55(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_55(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_525(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_419(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_526(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_527(int iParam0)
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

int func_528(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CLOTHING_BLEND_FRECKLES_NONE"):
			return 241235545;
		case joaat("CLOTHING_BLEND_MOLES_NONE"):
			return 1827902148;
		case joaat("CLOTHING_BLEND_SPOTS_NONE"):
			return 1301555144;
		case joaat("CLOTHING_BLEND_FOUNDATION_NONE"):
			return -2056583192;
		case joaat("CLOTHING_BLEND_BLUSHER_NONE"):
			return 1015239729;
		case joaat("CLOTHING_BLEND_EYELINER_NONE"):
			return -340627321;
		case joaat("CLOTHING_BLEND_EYESHADOW_NONE"):
			return -875805376;
		case joaat("CLOTHING_BLEND_LIPSTICK_NONE"):
			return -768760704;
		case joaat("CLOTHING_BLEND_FACIAL_HAIR_NONE"):
			return -2118203104;
		case joaat("CLOTHING_BLEND_GRIME_NONE"):
			return 1285634184;
		case -643819742:
			return -559080197;
		case joaat("CLOTHING_BLEND_COMPLEXION_NONE"):
			return -1180698265;
		case joaat("CLOTHING_BLEND_COMPLEXION_2_NONE"):
			return -487028314;
		case 1687431937:
			return -1811760631;
		case joaat("CLOTHING_BLEND_SCAR_NONE"):
			return 1858448324;
		default:
			break;
	}
	return 0;
}

int func_529(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 22)
	{
		if ((uParam0[iVar0 /*17*/])->f_1 == -1)
		{
		}
		else
		{
			if ((uParam0[iVar0 /*17*/])->f_16 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_530(int iParam0)
{
	int iVar0;

	iVar0 = func_402(iParam0);
	switch (iVar0)
	{
		case 1341188928:
			return -2056583192;
		case 1216664798:
			return 1015239729;
		case 829857647:
			return -340627321;
		case -636562458:
			return -875805376;
		case 252325943:
			return -768760704;
		default:
			break;
	}
	return 0;
}

int func_531(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_593(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_594(&Var0, func_537(0));
	}
	if (!func_595(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_527(iVar14);
	return uVar15;
}

struct<4> func_532(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_408(iParam0, bParam1, 0) };
	return func_422(iParam0, Var0, Var0.f_4, bParam1);
}

void func_533(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_13(iParam0))
	{
		return;
	}
	iVar0 = func_57(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1951255[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1951255[iVar0 /*23*/].f_3, iParam1, iParam2);
}

void func_534(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_13(iParam0))
	{
		return;
	}
	iVar0 = func_57(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1951255[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1951255[iVar0 /*23*/].f_3, MISC::_CREATE_VAR_STRING(10, sParam1, sParam2, sParam3));
}

int func_535(int iParam0)
{
	return iParam0 * 31;
}

struct<4> func_536(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_419(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1293346))
			{
				Global_1293346 = { func_422(joaat("CHARACTER"), func_600(), -1591664384, bParam0) };
			}
			return Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_12)))
			{
				Global_1293346.f_12 = { func_422(joaat("CHARACTER"), func_600(), -1591664384, 0) };
			}
			return Global_1293346.f_12;
		}
	}
	return func_422(joaat("CHARACTER"), func_600(), -1591664384, bParam0);
}

struct<4> func_537(bool bParam0)
{
	int iVar0;

	iVar0 = func_419(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_4)))
		{
			Global_1293346.f_4 = { func_422(923904168, func_536(bParam0), -740156546, bParam0) };
		}
		return Global_1293346.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_16)))
		{
			Global_1293346.f_16 = { func_422(923904168, func_536(bParam0), -740156546, 0) };
		}
		return Global_1293346.f_16;
	}
	return func_422(923904168, func_536(bParam0), -740156546, 0);
}

bool func_538(int iParam0, bool bParam1)
{
	if (func_402(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_607();
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_539(bool bParam0)
{
	int iVar0;

	iVar0 = func_419(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_8)))
		{
			Global_1293346.f_8 = { func_422(271701509, func_536(bParam0), 12999093, 0) };
		}
		return Global_1293346.f_8;
	}
	return func_422(271701509, func_536(bParam0), 12999093, 0);
}

bool func_540(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_402(iParam0);
	if (iVar1 == -1015256479)
	{
		return false;
	}
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (func_608(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_541(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_609(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_542(int iParam0)
{
	if (!func_267(*iParam0, 0))
	{
		return 0;
	}
	if (!func_610(*iParam0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
			*iParam0 = joaat("UPGRADE_FSH_BAIT_CRICKET");
			break;
		case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
			*iParam0 = joaat("UPGRADE_FSH_BAIT_WORM");
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*iParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM");
			break;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			*iParam0 = joaat("CONSUMABLE_CHEWING_TOBACCO");
			break;
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			break;
		default:
			return 0;
	}
	return 1;
}

int func_543(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_267(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_425(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_422(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_419(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_419(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_544(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_545(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
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

void func_546(int iParam0)
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

void func_547(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34) || PED::IS_PED_INJURED(Global_34))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_34, 440, !bParam0);
}

void func_548(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34) || PED::IS_PED_INJURED(Global_34))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_34, 439, !bParam0);
}

void func_549(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34) || PED::IS_PED_INJURED(Global_34))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_34, 438, !bParam0);
}

void func_550(bool bParam0)
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

void func_551(bool bParam0)
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

void func_552(bool bParam0)
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

bool func_553()
{
	return true;
	if (Global_1572887.f_13 == 0)
	{
		return true;
	}
	return Global_39.f_1;
}

var func_554(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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
	Var13.f_7 = 1;
	uVar21 = UIFEED::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

int func_555(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_611(iParam2, -372840566);
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
	func_612(uParam1, iParam0, Var3);
	return 1;
}

bool func_556(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_419(0);
	*uParam1 = { func_422(iParam0, func_537(0), iParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return false;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam1, uParam2, 22, 1))
	{
		return false;
	}
	return true;
}

bool func_557(int iParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

int func_558(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_559()
{
	return Global_1902818;
}

void func_560(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_613(*iParam0);
	iVar1 = func_614(*iParam0);
	iVar2 = func_615(*iParam0);
	iVar3 = func_616(*iParam0);
	iVar4 = func_617(*iParam0);
	iVar5 = func_618(*iParam0);
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
	iVar6 = func_619(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_619(iVar1, iVar0);
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
	func_620(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_561(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17411.f_2565[iParam0], iParam1);
}

bool func_562(int iParam0)
{
	if (func_439(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_563(int iParam0)
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

bool func_564(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_565()
{
	if (!func_621())
	{
		return false;
	}
	return Global_1904651.f_8684;
}

void func_566(var uParam0)
{
	func_440(uParam0, joaat("MULTIPLAYER_GAME"));
	if (func_622() == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		func_440(uParam0, joaat("LOOTER_PED_IS_MALE"));
	}
	else
	{
		func_440(uParam0, joaat("LOOTER_PED_IS_FEMALE"));
	}
}

void func_567(var uParam0, int iParam1, struct<15> Param2)
{
	int iVar0;
	struct<22> Var1;

	if (!func_623(uParam0))
	{
		return;
	}
	if (Global_1293346.f_2538 < 20)
	{
		Global_1293346.f_2538++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1293346.f_2538.f_1[iVar0 /*22*/] = { Global_1293346.f_2538.f_1[iVar0 + 1 /*22*/] };
			iVar0++;
		}
	}
	Var1.f_7.f_3.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	Global_1293346.f_2538.f_1[(Global_1293346.f_2538 - 1) /*22*/] = { Var1 };
}

bool func_568(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
			if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/]))
			{
				Jump @230; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/].f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/]);
				iVar2 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/].f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0 /*3*/].f_2 != iParam2)
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
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

void func_569(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

int func_570(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1224357681))
	{
		return 1;
	}
	return 0;
}

int func_571(int iParam0)
{
	var uVar0[5];
	int iVar6;

	if (!func_267(iParam0, 0))
	{
		return 0;
	}
	iVar6 = ITEMDATABASE::_0x8870895BA5ED9385(iParam0, -442898163, &uVar0);
	if (iVar6 > 0)
	{
		return uVar0[0];
	}
	return 0;
}

struct<10> func_572(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<10> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	if (iParam0 != 0 && iParam0 != -1591664384)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0)
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
	if (iParam6 != -1)
	{
		Var0.f_6 = iParam6;
	}
	if (iParam7 != 0)
	{
		Var0.f_8 = iParam7;
	}
	if (iParam8 != 0)
	{
		Var0.f_7 = iParam8;
	}
	return Var0;
}

bool func_573(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_574(int iParam0)
{
	if (!func_267(iParam0, 0))
	{
	}
	if (func_269(iParam0, -393037696))
	{
		return 1;
	}
	return 0;
}

int func_575(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!ITEMDATABASE::_0xCBB7B6EDFA933ADE(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_576(int iParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;
	int iVar43;

	iVar41 = 0;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(iParam0, &Var0, &iVar42, 20))
	{
		iVar43 = 0;
		while (iVar43 < iVar42)
		{
			if (Var0[iVar43 /*2*/].f_1 == iParam1)
			{
				iVar41 = Var0[iVar43 /*2*/];
				return iVar41;
			}
			iVar43++;
		}
	}
	return 0;
}

char* func_577(int iParam0)
{
	int iVar0;

	if (!func_267(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_315(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

bool func_578(int iParam0)
{
	if (func_402(iParam0) == -126813555 || func_402(iParam0) == 1946043663)
	{
		return true;
	}
	return false;
}

char* func_579(int iParam0)
{
	int iVar0;

	if (!func_267(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_453(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

bool func_580()
{
	return Global_1913504.f_127 == 0;
}

bool func_581()
{
	if (func_624())
	{
		return false;
	}
	if (Global_1572887.f_13 == -1)
	{
		if (Global_1940258.f_38 == joaat("WEAPON_LASSO"))
		{
			return PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_ATTACK"));
		}
		return PED::GET_PED_RESET_FLAG(Global_34, 311);
	}
	else
	{
		return Global_1956200.f_1716[3];
	}
	return false;
}

void func_582(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = PLAYER::PLAYER_ID();
	if (!PLAYER::_0x72AD59F7B7FB6E24(iVar2, 200))
	{
		*uParam1 = 0;
		return;
	}
	if (PLAYER::_0x1A6E84F13C952094(iVar2, 200, uParam0))
	{
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar1]))
			{
			}
			else if (!PED::IS_PED_HUMAN((*uParam0)[iVar1]) && !(DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar1], "HorseTeamA") || DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar1], "HorseTeamB")))
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar1], "bIgnoreDamageChecking"))
			{
			}
			else
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	*uParam1 = iVar0;
}

bool func_583(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1940258.f_26))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1940258.f_26))
		{
			*iParam1 = Global_1940258.f_26;
			iVar0 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1940258.f_27))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1940258.f_27))
		{
			if (PED::_IS_PED_HOGTIED(Global_1940258.f_27) || ENTITY::IS_ENTITY_DEAD(Global_1940258.f_27))
			{
				*iParam2 = Global_1940258.f_27;
				iVar0 = 1;
			}
		}
	}
	if (Global_1940258.f_24 && !PED::IS_PED_INJURED(Global_34))
	{
		iVar1 = PED::_GET_LASSO_TARGET(Global_34);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!bParam0 || PED::IS_PED_HUMAN(iVar1))
			{
				*iParam1 = iVar1;
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_584(var uParam0)
{
	int iVar0;
	int iVar1;

	if (iVar0 == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_INTERACT_LOCKON_DETACH_HORSE")) && !PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
		{
			if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar1, false, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iVar1)))
						{
							iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
							return iVar0;
						}
					}
				}
			}
		}
	}
	if (uParam0->f_7 == 3)
	{
		if (iVar0 == 0)
		{
			if (!Global_1940258.f_6)
			{
				iVar0 = PED::_0x4B19F171450E0D4F(Global_34);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = PED::_GET_LASSO_TARGET(Global_34);
		}
		if (iVar0 != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					iVar0 = 0;
				}
			}
		}
	}
	return iVar0;
}

void func_585(var uParam0)
{
	int iVar0;

	if (Global_1940258.f_32 == 0)
	{
		func_183(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1940258.f_33)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1940258.f_28[iVar0]))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1940258.f_28[iVar0]))
				{
					func_184(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

bool func_586(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_587(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, joaat("WEAPON_UNARMED"), iParam1))
		{
			return true;
		}
		else if (!bParam2)
		{
			if (WEAPON::IS_WEAPON_VALID(Global_1940258.f_38))
			{
				if (WEAPON::_IS_WEAPON_MELEE(Global_1940258.f_38) || Global_1940258.f_38 == joaat("WEAPON_MELEE_KNIFE"))
				{
					if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, Global_1940258.f_38, iParam1))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_588(int iParam0)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return false;
	}
	iVar0 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (((((((((iVar0 == joaat("WORLD_PLAYER_SLEEP_GROUND") || iVar0 == joaat("PROP_PLAYER_SLEEP_A_FRAME_TENT_PLAYER_CAMPS")) || iVar0 == joaat("WORLD_HUMAN_SLEEP_GROUND_ARM")) || iVar0 == joaat("WORLD_HUMAN_SLEEP_GROUND_PILLOW")) || iVar0 == joaat("WORLD_ANIMAL_DOG_SLEEPING")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW")) || iVar0 == joaat("PROP_PLAYER_PRPTY_SAVE_GAME")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW_LEFT")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW_RIGHT")) || iVar0 == joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME"))
	{
		return true;
	}
	if (iVar0 == joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME") || iVar0 == joaat("WORLD_PLAYER_SLEEP_BEDROLL"))
	{
		iVar0 = PED::_0xC22AA08A8ADB87D4(iParam0);
		if (iVar0 == joaat("PROP_PLAYER_SLEEP_TENT_MALE_A"))
		{
			return true;
		}
		return false;
	}
	return false;
}

float func_589(var uParam0)
{
	return uParam0->f_28;
}

int func_590(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
		vVar3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_625(vVar3, vVar6);
	if (MISC::ABSF(fVar9) > fParam4)
	{
		if (fVar9 > 0f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_626(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

int func_591(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_627(iVar0);
}

int func_592(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		case joaat("MP_COMPONENT_TYPE_HEAD"):
			return 0;
		case -1884748965:
			return 32;
		case -1586649372:
			return 33;
		case -1505978566:
			return 22;
		case -1489346253:
			return 38;
		case -1364808185:
			return 19;
		case joaat("MP_COMPONENT_TYPE_UPPER_BODY"):
			return 8;
		case -1197751823:
			return 20;
		case joaat("MP_COMPONENT_TYPE_SATCHEL"):
			return 24;
		case -1130865351:
			return 31;
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			return 1;
		case -893163968:
			return 17;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_4"):
			return 28;
		case joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS"):
			return 6;
		case -450913544:
			return 18;
		case -426430150:
			return 29;
		case -358215195:
			return 39;
		case -338487716:
			return 11;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			return 26;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_3"):
			return 27;
		case 304805134:
			return 21;
		case joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE"):
			return 7;
		case joaat("MP_COMPONENT_TYPE_EYES"):
			return 2;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
			return 25;
		case 735520874:
			return 5;
		case 788010710:
			return 34;
		case 1108822547:
			return 10;
		case 1145151482:
			return 23;
		case 1250092473:
			return 16;
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			return 4;
		case joaat("MP_COMPONENT_TYPE_LOWER_BODY"):
			return 9;
		case 1600962399:
			return 13;
		case 1672288269:
			return 15;
		case 1742327865:
			return 12;
		case joaat("MP_COMPONENT_TYPE_TEETH"):
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

struct<14> func_593(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_594(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_595(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_419(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_596(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<6> Var1[10];
	int iVar62;
	int iVar63;
	int iVar64;
	struct<16> Var65;
	struct<17> Var81;

	if (func_557(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_425(iParam0, joaat("DEFAULT"));
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_296(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_628(&Var1, &iVar62, iParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -1591664384;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_629(iParam0, &(Var1[iVar63 /*6*/])) };
			Var65.f_12 = iParam2;
			iVar64 = func_520(joaat("USE"), &Var65, 1);
			if (iVar64 == -1)
			{
				return 0;
			}
			iVar63++;
		}
		if (iVar64 != -1)
		{
			Var81.f_7 = -142743235;
			Var81.f_16 = -1;
			Var81 = bParam3;
			Var81.f_7 = iParam2;
			func_521(iVar64, Var81);
			return 1;
		}
		return 0;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_419(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

bool func_597()
{
	if ((Global_1940311.f_10901 != (Global_1940311.f_38.f_203 - 1) || func_631(func_630(0), Global_1940311.f_10893, 0, 1, 1) > 0) || Global_1940311.f_10901 == 15)
	{
		return true;
	}
	func_632();
	if (Global_1940311.f_6)
	{
		return true;
	}
	return false;
}

void func_598(int iParam0)
{
	Global_1940311.f_10 = iParam0;
}

void func_599(int iParam0)
{
	Global_1940311.f_9 = iParam0;
}

struct<4> func_600()
{
	struct<4> Var0;

	return Var0;
}

bool func_601(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, uParam1);
	if (iParam0 == joaat("USE"))
	{
		if ((func_633(uParam1->f_8, iParam0, iVar0, 2048) || func_633(uParam1->f_8, iParam0, iVar0, 32768)) || func_633(uParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_633(uParam1->f_8, iParam0, iVar0, 4) || func_633(uParam1->f_8, iParam0, iVar0, 256)) || func_633(uParam1->f_8, iParam0, iVar0, 65536)) || func_633(uParam1->f_8, iParam0, iVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SPEND"))
	{
		if (((func_633(uParam1->f_8, iParam0, iVar0, 1) || func_633(uParam1->f_8, iParam0, iVar0, 8)) || func_633(uParam1->f_8, iParam0, iVar0, 65536)) || func_633(uParam1->f_8, iParam0, iVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SELL"))
	{
		if (((func_633(uParam1->f_8, iParam0, iVar0, 1) || func_633(uParam1->f_8, iParam0, iVar0, 16)) || func_633(uParam1->f_8, iParam0, iVar0, 2)) || func_633(uParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_633(uParam1->f_8, iParam0, iVar0, 8) || func_633(uParam1->f_8, iParam0, iVar0, 4096)) || func_633(uParam1->f_8, iParam0, iVar0, 256)) || func_633(uParam1->f_8, iParam0, iVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_602(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_603(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_634(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_634(iParam1, 2, 0, 0);
	return -1;
}

int func_604(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_634(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

bool func_605(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (bParam3 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!bParam5 && !PED::IS_PED_HUMAN(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			return false;
		}
	}
	if (bParam4)
	{
		if (PED::IS_PED_ON_MOUNT(iParam0))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (func_635(iParam0, 0) != -1)
		{
			return false;
		}
	}
	return true;
}

bool func_606(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (iParam0 == (*uParam1)[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_607()
{
	return (func_410(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_636(func_422(joaat("WARDROBE"), func_536(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_608(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 487172188)
	{
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("DEFAULT")) == -1925887917)
		{
			return false;
		}
	}
	return ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, iParam2);
}

bool func_609(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_419(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

bool func_610(int iParam0)
{
	return func_269(iParam0, 1279601681);
}

void func_611(int iParam0, int iParam1)
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

void func_612(var uParam0, int iParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_623(uParam0))
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

int func_613(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_637(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_614(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_615(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_616(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_617(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_618(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_619(int iParam0, int iParam1)
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

void func_620(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_638(iParam0, iParam6);
	func_639(iParam0, iParam5);
	func_640(iParam0, iParam4);
	func_641(iParam0, iParam3);
	func_642(iParam0, iParam2);
	func_643(iParam0, iParam1);
}

bool func_621()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

int func_622()
{
	return Global_1952637.f_1;
}

bool func_623(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_624()
{
	switch (Global_1940258.f_38)
	{
		case joaat("WEAPON_MELEE_LANTERN"):
		case joaat("WEAPON_KIT_BINOCULARS"):
		case joaat("WEAPON_MELEE_LANTERN_ELECTRIC"):
		case joaat("WEAPON_MELEE_DAVY_LANTERN"):
		case joaat("WEAPON_KIT_BINOCULARS_IMPROVED"):
			return true;
		default:
			break;
	}
	return false;
}

float func_625(vector3 vParam0, vector3 vParam3)
{
	float fVar0;

	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		vParam0.x = (vParam0.x / fVar0);
		vParam0.f_1 = (vParam0.y / fVar0);
	}
	fVar0 = BUILTIN::VMAG(vParam3);
	if (fVar0 != 0f)
	{
		vParam3.x = (vParam3.x / fVar0);
		vParam3.f_1 = (vParam3.y / fVar0);
	}
	return ((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y));
}

bool func_626(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

int func_627(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1952637.f_83[iVar0 /*12*/].f_9 == iParam0)
		{
			return func_644(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

bool func_628(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	*iParam1 = 0;
	if (iParam4 < 1)
	{
		return false;
	}
	else if (*uParam0 != 10)
	{
		return false;
	}
	if (iParam3 == 0)
	{
		iParam3 = func_425(iParam2, joaat("DEFAULT"));
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!NETSHOPPING::_0xD1555FBC96C88444(iParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_645(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

struct<16> func_629(int iParam0, var uParam1)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_422(iParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = iParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

int func_630(int iParam0)
{
	return PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::GET_PLAYER_INDEX());
}

int func_631(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = func_380(iParam1, bParam2, 0, 0);
	iVar0 = (iVar0 + func_646(iParam0, iParam1));
	if (bParam3)
	{
		iVar0 = (iVar0 + func_647(iParam1, bParam4));
	}
	return iVar0;
}

void func_632()
{
	if (!func_267(Global_1940311.f_10893, 0))
	{
		Global_1940311.f_6 = 0;
	}
	else if ((((func_413(Global_1940311.f_10893, 1224357681) != 0 && Global_1940311.f_10892 != 0) && Global_1940311.f_10892 != -2074770370) && !Global_1915715.f_20638) && !Global_1915715.f_22504.f_1)
	{
		Global_1940311.f_6 = 1;
	}
	else
	{
		Global_1940311.f_6 = 0;
	}
}

int func_633(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_55(iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_634(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346.f_20)
	{
		if (Global_1293346.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			if (Global_1293346.f_20.f_1[iVar0 /*21*/].f_1 == iParam1)
			{
			}
			else
			{
				Global_1293346.f_20.f_1[iVar0 /*21*/].f_1 = iParam1;
			}
			if (iParam2 != 0 && iParam3 != 0)
			{
				Global_1293346.f_20.f_1[iVar0 /*21*/].f_2 = iParam2;
				Global_1293346.f_20.f_1[iVar0 /*21*/].f_3 = iParam3;
			}
			return;
		}
		iVar0++;
	}
	func_648(iParam0, iParam1, iParam2, iParam3);
}

int func_635(int iParam0, bool bParam1)
{
	return func_649(iParam0, Global_1893587.f_2, bParam1);
}

int func_636(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_650(&uParam0, iParam4, bParam5, iParam6);
}

int func_637(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_638(int iParam0, int iParam1)
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

void func_639(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_640(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_614(*iParam0);
	iVar1 = func_613(*iParam0);
	if (iParam1 < 1 || iParam1 > func_619(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_641(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_642(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_643(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

int func_644(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("MP_COMPONENT_TYPE_HEAD");
		case 1:
			return joaat("MP_COMPONENT_TYPE_HAIR");
		case 2:
			return joaat("MP_COMPONENT_TYPE_EYES");
		case 3:
			return joaat("MP_COMPONENT_TYPE_TEETH");
		case 4:
			return joaat("MP_COMPONENT_TYPE_BEARD");
		case 5:
			return 735520874;
		case 6:
			return joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS");
		case 7:
			return joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE");
		case 8:
			return joaat("MP_COMPONENT_TYPE_UPPER_BODY");
		case 9:
			return joaat("MP_COMPONENT_TYPE_LOWER_BODY");
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
			return joaat("MP_COMPONENT_TYPE_SATCHEL");
		case 25:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_1");
		case 26:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_2");
		case 27:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_3");
		case 28:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_4");
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

bool func_645(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	*iParam1 = 0;
	if (*uParam0 != 10)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iParam2 < 1)
		{
			Jump @253; //curOff = 37
		}
		else if ((uParam0[iVar0 /*6*/])->f_4 == 0)
		{
			Jump @244; //curOff = 55
		}
		else if ((uParam0[iVar0 /*6*/])->f_5 == 0)
		{
			Jump @244; //curOff = 73
		}
		else if (func_651(uParam0[iVar0 /*6*/]))
		{
		}
		else
		{
			if (iVar0 != *iParam1)
			{
				*(uParam0[*iParam1 /*6*/]) = { *(uParam0[iVar0 /*6*/]) };
				(uParam0[*iParam1 /*6*/])->f_4 = (uParam0[iVar0 /*6*/])->f_4;
			}
			if ((uParam0[iVar0 /*6*/])->f_5 > iParam2)
			{
				(uParam0[*iParam1 /*6*/])->f_5 = iParam2;
				iParam2 = 0;
			}
			else
			{
				(uParam0[*iParam1 /*6*/])->f_5 = (uParam0[iVar0 /*6*/])->f_5;
				iParam2 = (iParam2 - (uParam0[*iParam1 /*6*/])->f_5);
			}
			if (iVar0 > *iParam1)
			{
				*(uParam0[iVar0 /*6*/]) = { func_600() };
				(uParam0[iVar0 /*6*/])->f_4 = 0;
				(uParam0[iVar0 /*6*/])->f_5 = 0;
			}
			*iParam1++;
		}
		iVar0++;
	}
	if (bParam3 && iParam2 > 0)
	{
		*iParam1 = 0;
		return false;
	}
	return true;
}

int func_646(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (func_652(iParam1))
		{
			iVar0 = 0;
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (Global_1904087.f_113[iVar1 /*96*/].f_1 == iParam1)
				{
					iVar0++;
				}
				iVar1++;
			}
			return iVar0;
		}
		else
		{
			return func_653(INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iParam0), iParam1);
		}
	}
	return 0;
}

int func_647(int iParam0, bool bParam1)
{
	if (!bParam1 || func_654())
	{
		return func_543(iParam0, func_536(1), -2015960939, 1, 1, 0);
	}
	return 0;
}

void func_648(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1293346.f_20 < 20)
	{
		Global_1293346.f_20++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1293346.f_20.f_1[iVar0 /*21*/] = { Global_1293346.f_20.f_1[iVar0 + 1 /*21*/] };
			iVar0++;
		}
	}
	func_655(&(Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/]));
	Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/] = iParam0;
	Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

int func_649(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_656(iParam1, &iVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_657(iParam0, iVar0, iVar1, bParam2);
}

int func_650(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_658(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_651(var uParam0)
{
	if (!func_659(uParam0))
	{
		return false;
	}
	return INVENTORY::_0x0137C77A2EC64536(uParam0);
}

bool func_652(int iParam0)
{
	if (!func_455(iParam0, 1955773996))
	{
		return false;
	}
	if (!func_660(iParam0, 1))
	{
		return false;
	}
	return true;
}

int func_653(int iParam0, int iParam1)
{
	struct<4> Var0;
	int iVar4;

	if (!func_267(iParam1, 0))
	{
		return 0;
	}
	Var0 = { func_661(iParam0, iParam1) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_0xC97E0D2302382211(iParam0, &Var0, 0);
	return iVar4;
}

bool func_654()
{
	int iVar0;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	iVar0 = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (!func_662(iVar0))
	{
		return false;
	}
	return true;
}

void func_655(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_663(&(uParam0->f_4));
}

bool func_656(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_165() != -1;
	switch (iParam0)
	{
		case 81:
			*uParam1 = 0;
			if (bParam3)
			{
				*iParam2 = 47;
			}
			else
			{
				*iParam2 = 63;
			}
			if (bVar0)
			{
				*iParam2 = 5;
			}
			break;
		case 111:
			*uParam1 = 69;
			if (bParam3)
			{
				*iParam2 = 127;
			}
			else
			{
				*iParam2 = 136;
			}
			if (bVar0)
			{
				*iParam2 = 72;
			}
			break;
		case 5:
			*uParam1 = 137;
			*iParam2 = 318;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 66:
			*uParam1 = 374;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 374;
			}
			break;
		case 83:
			*uParam1 = 376;
			*iParam2 = 425;
			if (bVar0)
			{
				*iParam2 = 378;
			}
			break;
		case 98:
			*uParam1 = 437;
			*iParam2 = 465;
			if (bVar0)
			{
				*iParam2 = 437;
			}
			break;
		case 26:
			*uParam1 = 466;
			if (bParam3)
			{
				*iParam2 = 494;
			}
			else
			{
				*iParam2 = 496;
			}
			if (bVar0)
			{
				*iParam2 = 466;
			}
			break;
		case 40:
			*uParam1 = 502;
			*iParam2 = 547;
			if (bVar0)
			{
				*iParam2 = 503;
			}
			break;
		case 73:
			*uParam1 = 548;
			*iParam2 = 559;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*uParam1 = 560;
			*iParam2 = 582;
			if (bVar0)
			{
				*iParam2 = 560;
			}
			break;
		case 74:
			*uParam1 = 583;
			if (bParam3)
			{
				*iParam2 = 592;
			}
			else
			{
				*iParam2 = 606;
			}
			if (bVar0)
			{
				*iParam2 = 584;
			}
			break;
		case 80:
			*uParam1 = 497;
			*iParam2 = 500;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 99:
			*uParam1 = 607;
			*iParam2 = 619;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*uParam1 = 620;
			*iParam2 = 635;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 103:
			*uParam1 = 636;
			*iParam2 = 637;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*uParam1 = 638;
			*iParam2 = 650;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*uParam1 = 651;
			*iParam2 = 652;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 33:
			*uParam1 = 319;
			*iParam2 = 338;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 87:
			*uParam1 = 653;
			if (bParam3)
			{
				*iParam2 = 667;
			}
			else
			{
				*iParam2 = 684;
			}
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 37:
			*uParam1 = 685;
			*iParam2 = 694;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 60:
			*uParam1 = 695;
			*iParam2 = 702;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*uParam1 = 709;
			}
			else
			{
				*uParam1 = 703;
			}
			*iParam2 = 717;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*uParam1 = 718;
			*iParam2 = 724;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 69:
			*uParam1 = 730;
			*iParam2 = 734;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 71:
			*uParam1 = 739;
			*iParam2 = 744;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 75:
			*uParam1 = 745;
			*iParam2 = 748;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*uParam1 = 725;
			*iParam2 = 726;
			break;
		case 102:
			*uParam1 = 735;
			*iParam2 = 737;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 30:
			*uParam1 = 738;
			*iParam2 = 738;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 106:
			*uParam1 = 749;
			*iParam2 = 757;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 108:
			*uParam1 = 758;
			*iParam2 = 761;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*uParam1 = 727;
			*iParam2 = 729;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 131:
			*uParam1 = 785;
			*iParam2 = 787;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 91:
			*uParam1 = 762;
			*iParam2 = 766;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 135:
			*uParam1 = 767;
			*iParam2 = 773;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 127:
			*uParam1 = 426;
			*iParam2 = 436;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 121:
			*uParam1 = 339;
			*iParam2 = 369;
			if (bVar0)
			{
				*iParam2 = 369;
			}
			break;
		case 132:
			*uParam1 = 370;
			*iParam2 = 373;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 122:
			*uParam1 = 777;
			*iParam2 = 784;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*uParam1 = 774;
			*iParam2 = 776;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 44:
			*uParam1 = 788;
			*iParam2 = 792;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 94:
			*uParam1 = 793;
			*iParam2 = 794;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*uParam1 = 795;
			*iParam2 = 795;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*uParam1 = 796;
			*iParam2 = 797;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 107:
			*uParam1 = 798;
			*iParam2 = 800;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 123:
			*uParam1 = 501;
			*iParam2 = 501;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*uParam1 = 801;
			*iParam2 = 827;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 139:
			*uParam1 = 828;
			*iParam2 = 851;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		default:
			*uParam1 = -1;
			*iParam2 = -1;
			break;
	}
	if (*uParam1 == -1 || *iParam2 == -1)
	{
		return false;
	}
	return true;
}

int func_657(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(iParam0) && !bParam3)
	{
		return -1;
	}
	iVar0 = PERSCHAR::_0x32A1E3B83D501096(iParam0);
	if (!PERSCHAR::_0x800DF3FC913355F3(iVar0))
	{
		return -1;
	}
	iVar1 = iParam1;
	iVar1 = iParam1;
	while (iVar1 <= iParam2)
	{
		iVar2 = iVar1;
		if (func_67(iVar2) != 0 && PERSCHAR::_0x800DF3FC913355F3(func_22(iVar2)))
		{
			if (func_22(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

bool func_658(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_419(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_609(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_659(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_660(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_664(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return iVar0 > iParam1;
}

struct<4> func_661(int iParam0, int iParam1)
{
	struct<5> Var0;

	Var0 = { func_665(iParam0) };
	return func_666(iParam0, iParam1, Var0, Var0.f_4);
}

bool func_662(int iParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("HUNTERCART01"):
			return true;
		default:
			break;
	}
	return false;
}

void func_663(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = -142743235;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	uParam0->f_8.f_3 = 0;
	StringCopy(&(uParam0->f_12), "", 32);
	uParam0->f_16 = -1;
}

int func_664(int iParam0)
{
	var uVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_SATCHEL_DATA(iParam0, &uVar0))
	{
		return -1;
	}
	return uVar0;
}

struct<5> func_665(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_666(iParam0, joaat("CHARACTER"), func_600(), -1591664384) };
	Var0.f_4 = 1084182731;
	return Var0;
}

struct<4> func_666(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, int iParam6)
{
	struct<4> Var0;

	if (!func_267(iParam1, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(iParam0, &uParam2, iParam1, iParam6, &Var0);
	return Var0;
}

