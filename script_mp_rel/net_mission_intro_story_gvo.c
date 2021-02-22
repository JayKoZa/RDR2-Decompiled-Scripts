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
	struct<100> Local_16 = { 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2147483647, 0, 0, 0, 0, -504335712, 0, 3, -1, 0, 0, 0, 1, 1, 1, 32, 1, -2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_116 = 0;
	var uLocal_117 = 32;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 32;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 1;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 2;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 2;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	if (!func_1(&uLocal_212, &uScriptParam_0))
	{
		func_2(&uLocal_238, &uLocal_212, "MI_INITIALIZE - failed");
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	while (!func_3(1, 1))
	{
		func_4(&uLocal_212, &uLocal_238);
		BUILTIN::WAIT(0);
	}
	while (!SCRIPTS::_0x380FFA15B72408FB(1440))
	{
		BUILTIN::WAIT(0);
	}
	func_2(&uLocal_238, &uLocal_212, "End reached");
}

bool func_1(var uParam0, var uParam1)
{
	uParam0->f_25 = *uParam1;
	return true;
}

void func_2(var uParam0, var uParam1, char* sParam2)
{
	Stack.Push(uParam1);
	Call_Loc(uParam0->f_4);
	func_5(uParam1);
	func_6(uParam1);
	func_7(uParam1);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_3(bool bParam0, bool bParam1)
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

void func_4(var uParam0, var uParam1)
{
	struct<4> Var0;

	switch (func_8(uParam0))
	{
		case 0:
			func_9(uParam0, uParam1);
			if (!func_10(uParam1))
			{
				func_2(uParam1, uParam0, "MI_INITIALIZE - FALSE");
			}
			Stack.Push(uParam0);
			Call_Loc(*uParam1);
			if (!StackVal)
			{
				func_2(uParam1, uParam0, "fpInitialize - FALSE");
			}
			func_11(uParam0);
			func_12(uParam0, 1);
			break;
		case 1:
			Stack.Push(uParam0);
			Call_Loc(uParam1->f_1);
			if (StackVal)
			{
				func_12(uParam0, 2);
			}
			break;
		case 2:
			Stack.Push(uParam0);
			Call_Loc(uParam1->f_2);
			func_12(uParam0, 3);
			break;
		case 3:
			Stack.Push(uParam0);
			Stack.Push(&Var0);
			Call_Loc(uParam1->f_5);
			if (StackVal)
			{
				func_2(uParam1, uParam0, func_13(Var0));
			}
			func_14(uParam0);
			func_15(uParam0);
			func_16(uParam0);
			func_17(uParam0, uParam1);
			Stack.Push(uParam0);
			Call_Loc(uParam1->f_3);
			if (func_18(uParam0, 1))
			{
				CAM::_0x702B75DC9D3EDE56(true);
			}
			if (func_18(uParam0, 2))
			{
				NETWORK::_0x236905C700FDB54D();
			}
			if (func_18(uParam0, 4))
			{
				if (func_19())
				{
					func_20();
				}
			}
			if (func_21(uParam0))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), false);
				if (func_22())
				{
					func_23();
				}
			}
			break;
	}
}

void func_5(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_12[iVar0 /*3*/].f_1))
		{
			VOLUME::_DELETE_VOLUME(uParam0->f_12[iVar0 /*3*/].f_1);
		}
		iVar0++;
	}
}

void func_6(var uParam0)
{
	if (uParam0->f_10 == 0)
	{
		return;
	}
	_NAMESPACE77::_0x00A15B94CBA4F76F(uParam0->f_10);
	uParam0->f_10 = 0;
}

void func_7(var uParam0)
{
	if (uParam0->f_11 == 0)
	{
		return;
	}
	UIFEED::_0x2F901291EF177B02(uParam0->f_11, 0);
	uParam0->f_11 = 0;
}

int func_8(var uParam0)
{
	return *uParam0;
}

void func_9(var uParam0, var uParam1)
{
	int iVar0;

	*uParam1 = 1646;
	uParam1->f_1 = 1655;
	uParam1->f_2 = 1664;
	uParam1->f_3 = 1672;
	uParam1->f_4 = 1680;
	uParam1->f_5 = 1688;
	uParam1->f_6 = 1697;
	uParam1->f_7 = 1705;
	uParam1->f_8 = 1713;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_12[iVar0 /*3*/].f_2 = -1;
		uParam0->f_12[iVar0 /*3*/] = 0;
		iVar0++;
	}
	uParam0->f_19 = 0;
	func_33(uParam0, 0, 2f);
	func_33(uParam0, 1, 0.25f);
}

bool func_10(var uParam0)
{
	*uParam0 = 1741;
	uParam0->f_1 = 1887;
	uParam0->f_2 = 1916;
	uParam0->f_3 = 2172;
	uParam0->f_4 = 3143;
	uParam0->f_5 = 3333;
	uParam0->f_6 = 3559;
	uParam0->f_8 = 3613;
	return true;
}

void func_11(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_3[iVar0 /*3*/] = 1;
		iVar0++;
	}
}

void func_12(var uParam0, int iParam1)
{
	if (*uParam0 == iParam1)
	{
		return;
	}
	*uParam0 = iParam1;
}

char* func_13(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

void func_14(var uParam0)
{
	uParam0->f_2 = 0;
}

void func_15(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_3[iVar0 /*3*/].f_2 = (uParam0->f_3[iVar0 /*3*/].f_2 + MISC::GET_FRAME_TIME());
		if (uParam0->f_3[iVar0 /*3*/].f_2 >= uParam0->f_3[iVar0 /*3*/].f_1)
		{
			uParam0->f_3[iVar0 /*3*/].f_2 = 0f;
			uParam0->f_3[iVar0 /*3*/] = 1;
		}
		else
		{
			uParam0->f_3[iVar0 /*3*/] = 0;
		}
		iVar0++;
	}
}

void func_16(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_42(uParam0, 0))
	{
		return;
	}
	iVar0 = func_43(uParam0);
	if (GANG::_0xD6F6ACF4392187FB(Global_1296859.f_15))
	{
		iVar1 = GANG::_0x149A2751AB66AC02(Global_1296859.f_15);
	}
	else
	{
		iVar1 = 1;
	}
	if (iVar0 != iVar1)
	{
		func_44(uParam0, iVar1);
		func_45(uParam0, 0, 1);
	}
}

void func_17(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;

	if (uParam0->f_19 == 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < uParam0->f_19)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_12[iVar1 /*3*/].f_1))
		{
			if (func_42(uParam0, 1))
			{
				bVar0 = ENTITY::IS_ENTITY_IN_VOLUME(Global_1296859.f_8, uParam0->f_12[iVar1 /*3*/].f_1, true, 0);
				if (bVar0 != uParam0->f_12[iVar1 /*3*/])
				{
					if (bVar0)
					{
						Stack.Push(uParam0);
						Stack.Push(iVar1);
						Call_Loc(uParam1->f_6);
					}
					else
					{
						Stack.Push(uParam0);
						Stack.Push(iVar1);
						Call_Loc(uParam1->f_8);
					}
					uParam0->f_12[iVar1 /*3*/] = bVar0;
				}
			}
			if (uParam0->f_12[iVar1 /*3*/])
			{
				Stack.Push(uParam0);
				Stack.Push(iVar1);
				Call_Loc(uParam1->f_7);
			}
		}
		iVar1++;
	}
}

bool func_18(var uParam0, int iParam1)
{
	return func_46(uParam0->f_1, iParam1);
}

bool func_19()
{
	return Global_1896738.f_382;
}

void func_20()
{
	func_47(0);
}

bool func_21(var uParam0)
{
	return func_18(uParam0, 3);
}

bool func_22()
{
	if (UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("PAUSE_MENU")) || UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("PAUSE_MENU")))
	{
		return true;
	}
	return false;
}

int func_23()
{
	if (!UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("PAUSE_MENU")) && !UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("PAUSE_MENU")))
	{
		return 0;
	}
	UIAPPS::_CLOSE_APP_BY_HASH(joaat("PAUSE_MENU"));
	return 1;
}

int func_24(var uParam0)
{
	return 1;
}

int func_25(var uParam0)
{
	return 1;
}

void func_26(var uParam0)
{
}

void func_27(var uParam0)
{
}

void func_28(var uParam0)
{
}

int func_29(var uParam0, var uParam1)
{
	return 0;
}

void func_30(var uParam0, var uParam1)
{
}

void func_31(var uParam0, var uParam1)
{
}

void func_32(var uParam0, var uParam1)
{
}

void func_33(var uParam0, int iParam1, float fParam2)
{
	uParam0->f_3[iParam1 /*3*/].f_1 = fParam2;
}

int func_34(var uParam0)
{
	int iVar0;

	iVar0 = func_48(uParam0);
	if (!func_49(iVar0))
	{
		return 0;
	}
	func_50(&Local_16);
	func_51(&Local_16, 0);
	func_52(&Local_16, iVar0);
	func_53(&Local_16, 0);
	func_55(&Local_16, func_54(iVar0));
	if (func_56(iVar0))
	{
		func_57(&Local_16, 0, 1);
	}
	if (!func_58(&Local_16, iVar0))
	{
		return 0;
	}
	func_59(&Local_16, &(Global_1835011[iVar0 /*72*/].f_42));
	if (func_56(iVar0))
	{
		func_60(&Local_16, 0);
	}
	else
	{
		func_60(&Local_16, 1);
	}
	return 1;
}

int func_35(var uParam0)
{
	int iVar0;

	iVar0 = 1;
	if (!func_61(&Local_16))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_36(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	vector3 vVar6;

	if (!func_63(func_62(&Local_16), &iVar0, 1065353216 /* Float: 1f */))
	{
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iVar0))
	{
		iVar0 = VOLUME::_CREATE_VOLUME_SPHERE(func_64(func_62(&Local_16)), 0f, 0f, 0f, 10f, 10f, 10f);
	}
	if (!func_65(uParam0, &iVar0, 0))
	{
	}
	if (!func_63(func_62(&Local_16), &iVar1, 2f))
	{
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iVar1))
	{
		iVar1 = VOLUME::_CREATE_VOLUME_SPHERE(func_64(func_62(&Local_16)), 0f, 0f, 0f, 15f, 15f, 15f);
	}
	if (!func_65(uParam0, &iVar1, 1))
	{
	}
	if (func_66(func_62(&Local_16), &vVar2, &fVar5))
	{
		func_67(&Local_16, fVar5, vVar2);
	}
	else if (VOLUME::_DOES_VOLUME_EXIST(iVar1))
	{
		vVar6 = { VOLUME::_GET_VOLUME_SCALE(iVar1) };
		fVar5 = vVar6.x;
		if (fVar5 < vVar6.y)
		{
			fVar5 = vVar6.y;
		}
		vVar2 = { VOLUME::_GET_VOLUME_COORDS(iVar1) };
		func_67(&Local_16, fVar5, vVar2);
	}
}

void func_37(var uParam0)
{
	int iVar0;

	iVar0 = func_62(&Local_16);
	func_68(&Local_16);
	if (func_69(&Local_16, 7))
	{
		func_70(&Local_16);
	}
	if (func_69(&Local_16, 3))
	{
		func_71();
	}
	if (func_69(&Local_16, 14))
	{
		if (func_72(&Local_16))
		{
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(func_73(&Local_16), func_74(&Local_16));
			MISC::CLEAR_AREA(func_73(&Local_16), func_74(&Local_16), 65537);
		}
	}
	func_75(&Local_16);
	func_76(&Local_16);
	func_77(&Local_16);
	if (func_78(&Local_16))
	{
		func_80(func_79(func_62(&Local_16)));
	}
	if (func_69(&Local_16, 5))
	{
		if (func_49(iVar0))
		{
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-459030638, MISC::_CREATE_VAR_STRING(34, "BLIP_ID_TEXT_KEY_PAIRING", Global_1835011[iVar0 /*72*/].f_28, &(Global_1835011[iVar0 /*72*/].f_42)), 1, 0, 0, 0);
		}
	}
	switch (func_81(&Local_16))
	{
		case 0:
			if (func_69(&Local_16, 7))
			{
				func_82(&Local_16, 0);
			}
			if (func_83(uParam0))
			{
				func_84(uParam0, 0);
			}
			if (!func_69(&Local_16, 4))
			{
			}
			else if (func_85(uParam0, &Local_16))
			{
			}
			else
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
				func_53(&Local_16, 1);
				Jump @968; //curOff = 353
				if (func_86(uParam0, &Local_16))
				{
					if (GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
					{
						func_53(&Local_16, 2);
					}
					else
					{
						func_87(1048576);
						func_53(&Local_16, 6);
					}
				}
				Jump @968; //curOff = 403
				if (func_88() || func_89())
				{
					func_90(7);
					func_91(&Local_16, 0);
					func_92(&Local_16);
					return;
				}
				if (func_93())
				{
					func_53(&Local_16, 8);
				}
				if (func_94(&Local_16, uParam0))
				{
					switch (func_95(&Local_16))
					{
						case 0:
							func_96(&Local_16, "RDRO_COOP_Matchmaking_Sounds", "start_matchmaking");
							func_97(&Local_16, 0);
							func_53(&Local_16, 3);
							break;
						case 1:
							func_96(&Local_16, "RDRO_COOP_Matchmaking_Sounds", "start_matchmaking");
							func_97(&Local_16, 0);
							func_53(&Local_16, 4);
							break;
						case 2:
							func_96(&Local_16, "RDRO_COOP_Matchmaking_Sounds", "exit");
							func_97(&Local_16, 0);
							func_53(&Local_16, 8);
							break;
					}
				}
				Jump @968; //curOff = 591
				if (func_98() || func_99())
				{
					if (func_69(&Local_16, 5))
					{
						func_92(&Local_16);
					}
					if (Local_16.f_99)
					{
						func_100(&Local_16);
					}
				}
				if (func_98() && !func_69(&Local_16, 13))
				{
					func_96(&Local_16, "rdro_gamemode_transition_sounds", "landscape_to_lobby");
					func_57(&Local_16, 13, 1);
				}
				if (func_101(1048576))
				{
					func_87(1048576);
					func_53(&Local_16, 8);
				}
				func_102(&Local_16, uParam0);
				Jump @968; //curOff = 719
				if (func_103(uParam0, &Local_16))
				{
					if (func_104(&Local_16, uParam0))
					{
						func_53(&Local_16, 5);
					}
					else
					{
						func_53(&Local_16, 0);
					}
				}
				Jump @968; //curOff = 761
				func_105(&Local_16, uParam0);
				Jump @968; //curOff = 773
				switch (func_106())
				{
					case 7:
						func_57(&Local_16, 6, 1);
						func_53(&Local_16, 0);
						break;
					case 2:
					case 4:
					case 5:
						func_90(6);
						break;
					case 3:
					case 8:
						func_53(&Local_16, 8);
						break;
				}
				Jump @968; //curOff = 859
				func_107(&Local_16, uParam0);
				Jump @968; //curOff = 870
				if (func_108(&Local_16, uParam0))
				{
					func_57(&Local_16, 6, 0);
					func_109(uParam0, 0);
					func_110(&Local_16, func_79(func_62(&Local_16)));
					func_51(&Local_16, 0);
					func_57(&Local_16, 3, 0);
					func_53(&Local_16, 0);
					func_57(&Local_16, 14, 0);
					func_111(uParam0, 0);
					PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACTION_MENU"), true);
				}
			}
			default:
				break;
	}
}

void func_38(var uParam0)
{
	if (func_112() == func_62(&Local_16))
	{
		func_113(-1);
	}
	if (!func_69(&Local_16, 6))
	{
		func_114(&Local_16);
		TASK::CLEAR_PED_TASKS(Global_34, true, false);
		func_115(0);
	}
	else if (func_116(&Local_16) == 0)
	{
		func_115(0);
	}
	func_82(&Local_16, 0);
	func_117(&Local_16);
	func_118(&Local_16);
	func_119(&Local_16, 0);
	func_87(2048);
	func_120(uParam0, &Local_16);
	func_121(&Local_16);
	func_92(&Local_16);
	func_100(&Local_16);
	func_122(&Local_16);
	func_123(1);
	NETWORK::_0x4B05B97BA46F419D(1);
	func_7(uParam0);
	func_124(736);
	func_124(737);
	func_110(&Local_16, func_79(func_62(&Local_16)));
}

int func_39(var uParam0, char* sParam1)
{
	int iVar0;
	float fVar1;

	StringCopy(sParam1, "", 32);
	if (func_125(2))
	{
		StringCopy(sParam1, "INTRO_FLOW_REQUESTED", 32);
		return 1;
	}
	if (PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		StringCopy(sParam1, "IS_PED_DEAD_OR_DYING", 32);
		return 1;
	}
	iVar0 = func_62(&Local_16);
	if (func_49(iVar0))
	{
		fVar1 = func_126(func_64(iVar0), Global_35);
		if (fVar1 >= (Global_1835011[iVar0 /*72*/].f_61 * Global_1835011[iVar0 /*72*/].f_61) && !func_127(&(Global_1835011[iVar0 /*72*/].f_30), 32768))
		{
			StringCopy(sParam1, "OVER_DISATNCE", 32);
			return 1;
		}
	}
	if (SCRIPTS::DOES_SCRIPT_EXIST("net_mc_vs_mission_intro"))
	{
		if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE("net_mc_vs_mission_intro", -1, true, 0))
		{
			StringCopy(sParam1, "lobby is active", 32);
			return 1;
		}
	}
	if (func_128(&Local_16))
	{
		StringCopy(sParam1, "Request via gvo", 32);
		return 1;
	}
	return 0;
}

void func_40(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_57(&Local_16, 4, 1);
			break;
		case 1:
			func_129(uParam0);
			func_130(uParam0);
			break;
	}
}

void func_41(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_57(&Local_16, 4, 0);
			break;
	}
}

bool func_42(var uParam0, int iParam1)
{
	return uParam0->f_3[iParam1 /*3*/];
}

int func_43(var uParam0)
{
	return uParam0->f_23;
}

void func_44(var uParam0, int iParam1)
{
	uParam0->f_23 = iParam1;
}

void func_45(var uParam0, int iParam1, bool bParam2)
{
	if (func_46(uParam0->f_2, iParam1) == bParam2)
	{
		return;
	}
	if (bParam2)
	{
		func_131(&(uParam0->f_2), iParam1);
	}
	else
	{
		func_132(&(uParam0->f_2), iParam1);
	}
}

bool func_46(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(iParam0, iParam1);
}

void func_47(bool bParam0)
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

var func_48(var uParam0)
{
	return uParam0->f_25;
}

bool func_49(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

void func_50(int iParam0)
{
	iParam0->f_181.f_9 = 0;
	iParam0->f_181.f_8 = 0;
	StringCopy(&(iParam0->f_181), "", 32);
	StringCopy(&(iParam0->f_181.f_4), "", 32);
}

void func_51(int iParam0, int iParam1)
{
	if (iParam0->f_68 == iParam1)
	{
		return;
	}
	iParam0->f_68 = iParam1;
}

void func_52(var uParam0, int iParam1)
{
	uParam0->f_65 = iParam1;
}

void func_53(int iParam0, int iParam1)
{
	if (iParam0->f_66 == iParam1)
	{
		return;
	}
	iParam0->f_66 = iParam1;
}

char[] func_54(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return "script@MPSTORY@MPCLAY2@INT_LOOPS@session_screen_rhodes";
		case 10:
			return "script@MPSTORY@MPCLAY2@INT_LOOPS@session_screen_valentine";
		case 11:
			return "script@MPSTORY@MPCLAY2@INT_LOOPS@session_screen_blackwater";
		case 12:
			return "script@MPSTORY@MPCLAY2@INT_LOOPS@session_screen_tumbleweed";
		case 13:
			return "script@MPSTORY@MPGVO1@INT_LOOPS@session_screen";
		case 14:
			return "script@MPSTORY@MPGVO2@INT_LOOPS@session_screen";
		case 15:
			return "script@MPSTORY@MPGVO3@INT_LOOPS@session_screen";
		case 16:
			return "script@MPSTORY@MPOUT1@INT@session_screen";
		case 17:
			return "script@MPSTORY@MPOUT2@INT@session_screen";
		case 21:
			return "script@MPSTORY@MPPOUT3@INT@session_screen";
		case 22:
			return "script@MPSTORY@MPPOUT4@INT@session_screen";
		case 18:
			return "script@MPSTORY@MPGUN1@INT_LOOPS@session_screen";
		case 19:
			return "script@MPSTORY@MPGUN2@INT_LOOPS@session_screen";
		case 23:
			return "script@MPSTORY@MPGUN3@INT@session_screen";
		case 24:
			return "script@MPSTORY@MPGUN4@INT@session_screen";
		case 20:
			return "script@MPSTORY@MPREV1@INT_LOOPS@session_screen";
		case 25:
			return "script@MPSTORY@MPREV2@INT_LEADIN@session_screen";
		default:
			break;
	}
	return "";
}

void func_55(var uParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	uParam0->f_169.f_2 = sParam1;
	func_133(uParam0, 4, 1);
}

bool func_56(int iParam0)
{
	return (iParam0 >= 9 && iParam0 <= 12);
}

void func_57(int* iParam0, int iParam1, bool bParam2)
{
	if (func_46(*iParam0, iParam1) == bParam2)
	{
		return;
	}
	if (bParam2)
	{
		func_131(iParam0, iParam1);
	}
	else
	{
		func_132(iParam0, iParam1);
	}
}

bool func_58(int iParam0, int iParam1)
{
	if (!func_49(iParam1))
	{
		return false;
	}
	if (!func_135(&(iParam0->f_1), func_134(iParam1), -1, -1, 3))
	{
		return false;
	}
	iParam0->f_1.f_53 = { func_136(iParam1) };
	return true;
}

void func_59(int iParam0, var uParam1)
{
	iParam0->f_81 = uParam1;
}

void func_60(int iParam0, int iParam1)
{
	iParam0->f_67 = iParam1;
}

bool func_61(int iParam0)
{
	return true;
}

int func_62(int iParam0)
{
	return iParam0->f_65;
}

bool func_63(int iParam0, var uParam1, float fParam2)
{
	int iVar0;
	int iVar1[2];
	int iVar4;
	int iVar5;
	vector3 vVar6;

	if (VOLUME::_DOES_VOLUME_EXIST(*uParam1))
	{
		VOLUME::_DELETE_VOLUME(*uParam1);
	}
	iVar0 = 1;
	switch (iParam0)
	{
		case 13:
			iVar1[0] = VOLUME::_CREATE_VOLUME_BOX(-5534.267f, -2922.495f, -1.138973f, 0f, 0f, 25f, 11.5f, 8f, 4f);
			iVar1[1] = VOLUME::_CREATE_VOLUME_BOX(-5530.571f, -2925.733f, -1.100101f, -1E-06f, 0f, 25f, 7.5f, 17f, 4f);
			iVar0 = 2;
			break;
		case 14:
			iVar1[0] = VOLUME::_CREATE_VOLUME_BOX(-610.5784f, -28.02551f, 85.96289f, 0f, 0f, 20f, 11f, 10f, 7f);
			iVar1[1] = VOLUME::_CREATE_VOLUME_BOX(-604.8222f, -25.74674f, 86.09907f, 0f, 0f, 20.42736f, 8.209583f, 13.92787f, 4f);
			iVar0 = 2;
			break;
		case 15:
			iVar1[0] = VOLUME::_CREATE_VOLUME_SPHERE(-2689.728f, -2180.124f, 79.55766f, 0f, 0f, 0f, 11f, 11f, 11f);
			break;
		case 18:
			iVar1[0] = VOLUME::_CREATE_VOLUME_SPHERE(-1934.125f, -1415.843f, 106f, 0f, 0f, 0f, 20f, 20f, 20f);
			break;
		case 19:
			iVar1[0] = VOLUME::_CREATE_VOLUME_BOX(2946.162f, 781.5414f, 52.10509f, 0f, 0f, -51.24265f, 16f, 14f, 5f);
			break;
		case 23:
			iVar1[0] = VOLUME::_CREATE_VOLUME_SPHERE(134.4836f, 162.8693f, 111.2966f, 0f, 0f, 0f, 16f, 16f, 16f);
			break;
		case 24:
			iVar1[0] = VOLUME::_CREATE_VOLUME_BOX(-4785.134f, -2723.821f, -13.18157f, 0f, 0f, 0f, 22f, 10f, 13f);
			break;
		case 16:
			iVar1[0] = VOLUME::_CREATE_VOLUME_BOX(1179.889f, -182.5767f, 100f, 0f, 0f, 11.12833f, 15f, 19f, 7f);
			break;
		case 17:
			iVar1[0] = VOLUME::_CREATE_VOLUME_BOX(302.3684f, 1293.414f, 197.4161f, 0f, 0f, 0f, 25f, 19f, 7f);
			break;
		case 21:
			iVar1[0] = VOLUME::_CREATE_VOLUME_SPHERE(-1505.026f, -789.1925f, 102.3174f, 0f, 0f, 0f, 10f, 10f, 10f);
			break;
		case 22:
			iVar1[0] = VOLUME::_CREATE_VOLUME_BOX(2691.341f, -1117.55f, 52.21643f, 0f, 0f, 0f, 28f, 20f, 7f);
			break;
		case 20:
			iVar1[0] = VOLUME::_CREATE_VOLUME_SPHERE(-3849.203f, -3025.146f, -7.923075f, 0f, 0f, 20.68501f, 10.99867f, 7.910746f, 10f);
			break;
		case 25:
			iVar1[0] = VOLUME::_CREATE_VOLUME_BOX(-1203.146f, -1953.965f, 41.06992f, 0f, 0f, 62.99999f, 19f, 9f, 10f);
			break;
		case 9:
			iVar1[0] = VOLUME::_CREATE_VOLUME_SPHERE(1141.434f, -1384.818f, 64f, 0f, 0f, 0f, 10f, 10f, 10f);
			break;
		case 10:
			iVar1[0] = VOLUME::_CREATE_VOLUME_SPHERE(-443.1747f, 505.624f, 96.55238f, 0f, 0f, 48.08072f, 14.79244f, 13.19966f, 11f);
			break;
		case 11:
			iVar1[0] = VOLUME::_CREATE_VOLUME_SPHERE(-1990.893f, -1370.456f, 115.6611f, 0f, 0f, 0f, 11f, 11f, 11f);
			break;
		case 12:
			iVar1[0] = VOLUME::_CREATE_VOLUME_SPHERE(-5571.527f, -2577.124f, -8.26538f, 0f, 0f, 0f, 16f, 16f, 16f);
			break;
		default:
			return false;
	}
	iVar5 = 0;
	while (iVar5 < iVar1)
	{
		iVar4 = iVar1[iVar5];
		if (VOLUME::_DOES_VOLUME_EXIST(iVar4))
		{
			vVar6 = { VOLUME::_GET_VOLUME_SCALE(iVar4) };
			vVar6 = { vVar6 * Vector(fParam2, fParam2, fParam2) };
			VOLUME::_SET_VOLUME_SCALE(iVar4, vVar6);
		}
		iVar5++;
	}
	if (iVar0 == 1)
	{
		*uParam1 = iVar1[0];
	}
	else
	{
		*uParam1 = VOLUME::_CREATE_VOLUME_AGGREGATE();
		if (VOLUME::_DOES_VOLUME_EXIST(*uParam1))
		{
			iVar5 = 0;
			while (iVar5 < iVar0)
			{
				if (VOLUME::_DOES_VOLUME_EXIST(iVar1[iVar5]))
				{
					VOLUME::_0x6E0D3C3F828DA773(*uParam1, iVar1[iVar5]);
				}
				iVar5++;
			}
		}
	}
	return true;
}

Vector3 func_64(int iParam0)
{
	return Global_1835011[iParam0 /*72*/].f_19;
}

bool func_65(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_19 >= 2)
	{
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(*iParam1))
	{
		return false;
	}
	uParam0->f_12[uParam0->f_19 /*3*/] = 0;
	uParam0->f_12[uParam0->f_19 /*3*/].f_1 = *iParam1;
	uParam0->f_12[uParam0->f_19 /*3*/].f_2 = iParam2;
	uParam0->f_19++;
	return true;
}

bool func_66(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 24:
			*uParam1 = { -4808.043f, -2710.505f, -13.56443f };
			*uParam2 = 31f;
			return true;
		case 19:
			*uParam1 = { 2945.94f, 777.777f, 52.595f };
			*uParam2 = 12f;
			return true;
		case 14:
			*uParam1 = { -605.29f, -26.549f, 83.642f };
			*uParam2 = 8f;
			return true;
		default:
			break;
	}
	return false;
}

void func_67(int iParam0, float fParam1, vector3 vParam2)
{
	iParam0->f_191 = 1;
	iParam0->f_192 = fParam1;
	iParam0->f_193 = { vParam2 };
}

void func_68(int iParam0)
{
	if (func_81(iParam0) != 0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MAP"), true);
	}
}

bool func_69(int iParam0, int iParam1)
{
	return func_46(*iParam0, iParam1);
}

void func_70(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
		}
		else
		{
			NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(iVar1, false);
			iVar2 = PLAYER::_GET_MOUNT_OF_PLAYER(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				ENTITY::_0xFF9965C47FA404DA(iVar2, false);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iParam0->f_101.f_33)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_101[iVar0]))
		{
		}
		else
		{
			ENTITY::_0xFF9965C47FA404DA(iParam0->f_101[iVar0], false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iParam0->f_101.f_67)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_101.f_34[iVar0]))
		{
		}
		else
		{
			ENTITY::_0xFF9965C47FA404DA(iParam0->f_101.f_34[iVar0], false);
		}
		iVar0++;
	}
}

void func_71()
{
	if (LAW::_GET_WANTED_INTENSITY_FOR_PLAYER(PLAYER::PLAYER_ID()) > 0)
	{
		if (func_137())
		{
			func_138();
		}
		func_139();
	}
}

bool func_72(int iParam0)
{
	return iParam0->f_191;
}

Vector3 func_73(int iParam0)
{
	return iParam0->f_193;
}

var func_74(int iParam0)
{
	return iParam0->f_192;
}

void func_75(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (iParam0->f_181.f_8 || iParam0->f_181.f_9)
	{
		if (AUDIO::_0xD9130842D7226045(&(iParam0->f_181), 0))
		{
			iVar0 = 1;
		}
	}
	if (iVar0 && iParam0->f_181.f_8)
	{
		AUDIO::PLAY_SOUND_FRONTEND(&(iParam0->f_181.f_4), &(iParam0->f_181), true, 0);
		iParam0->f_181.f_9 = 0;
		iParam0->f_181.f_8 = 0;
	}
}

void func_76(int iParam0)
{
	int iVar0;
	char cVar1[64];
	char cVar9[64];
	int iVar17;
	int iVar18;
	char* sVar19;
	char* sVar20;
	int iVar21;
	int iVar22;

	if (!func_69(iParam0, 10) && func_69(iParam0, 8))
	{
		iVar0 = func_62(iParam0);
		if (func_49(iVar0))
		{
			StringCopy(&cVar1, "", 64);
			if (func_140(iVar0, &cVar1))
			{
				StringCopy(&cVar9, "", 64);
				if (func_141(iVar0, &cVar9))
				{
					iVar17 = MISC::GET_HASH_KEY(&cVar9);
					if (TXD::_DOES_STREAMED_TXD_EXIST(iVar17))
					{
						TXD::_REQUEST_STREAMED_TXD(iVar17, false);
						if (TXD::_HAS_STREAMED_TXD_LOADED(iVar17))
						{
							if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_88.f_4))
							{
								DATABINDING::_DATABINDING_WRITE_DATA_STRING(iParam0->f_88.f_4, &cVar1);
							}
							if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_88.f_5))
							{
								DATABINDING::_DATABINDING_WRITE_DATA_STRING(iParam0->f_88.f_5, &cVar9);
							}
							func_57(iParam0, 10, 1);
						}
					}
					else
					{
						func_57(iParam0, 10, 1);
					}
				}
				else
				{
					func_57(iParam0, 10, 1);
				}
			}
			else
			{
				func_57(iParam0, 10, 1);
			}
		}
		else
		{
			func_57(iParam0, 10, 1);
		}
	}
	if (!func_69(iParam0, 9))
	{
		if (!func_69(iParam0, 8))
		{
		}
		else
		{
			sVar19 = func_142(iParam0->f_1.f_45, &iVar18);
			switch (iVar18)
			{
				case 1:
					break;
				case 0:
				case 3:
				case 4:
					func_143();
					break;
				case 5:
					if (iParam0->f_100 <= 0)
					{
						iParam0->f_100 = MISC::ABSI(NETWORK::GET_CLOUD_TIME_AS_INT());
					}
					else if (MISC::ABSI((NETWORK::GET_CLOUD_TIME_AS_INT() - iParam0->f_100)) >= 10)
					{
						func_143();
						iParam0->f_100 = 0;
					}
					break;
				case 2:
					if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_88.f_7))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING(iParam0->f_88.f_7, sVar19);
					}
					func_57(iParam0, 9, 1);
					break;
			}
		}
	}
	switch (func_144(iParam0))
	{
		case 0:
			func_57(iParam0, 11, 0);
			if (!func_145(iParam0))
			{
				func_146(iParam0, 6);
				return;
			}
			func_146(iParam0, 1);
			break;
		case 1:
			iVar21 = func_62(iParam0);
			if (func_49(iVar21))
			{
				sVar20 = func_147(&(Global_1835011[iVar21 /*72*/].f_42));
			}
			if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_88.f_2))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(iParam0->f_88.f_2, sVar20);
			}
			if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_88.f_3))
			{
				iVar22 = iParam0->f_1.f_26;
				if (iVar22 == -1759663922)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(iParam0->f_88.f_3, MISC::_CREATE_VAR_STRING(2, "PM_SCR_MPPRG_COOP"));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(iParam0->f_88.f_3, MISC::_CREATE_VAR_STRING(2, func_148(iVar22)));
				}
			}
			if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_88.f_8))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(iParam0->f_88.f_8, MISC::_CREATE_VAR_STRING(2, "PLAYER_RANGE", iParam0->f_1.f_32, iParam0->f_1.f_33));
			}
			func_57(iParam0, 11, 1);
			func_146(iParam0, 2);
			break;
		case 2:
			if (func_81(&Local_16) == 0)
			{
				return;
			}
			if (func_149(iParam0))
			{
				if (func_150())
				{
					func_151(iParam0->f_75[3], 0);
					func_146(iParam0, 3);
				}
				else
				{
					func_146(iParam0, 6);
				}
			}
			break;
		case 3:
			func_151(iParam0->f_75[3], 1);
			func_146(iParam0, 4);
			break;
		case 4:
			if (!func_149(iParam0))
			{
				func_151(iParam0->f_75[3], 0);
				func_146(iParam0, 5);
			}
			break;
		case 5:
			func_146(iParam0, 6);
			break;
		case 6:
			func_151(iParam0->f_75[3], 1);
			func_97(iParam0, 0);
			func_100(iParam0);
			func_146(iParam0, 0);
			break;
	}
}

void func_77(int iParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_169.f_3))
	{
		func_133(iParam0, 1, ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0->f_169.f_3, false));
	}
	switch (func_152(iParam0))
	{
		case 0:
			if (!func_153(iParam0, 4))
			{
				return;
			}
			func_133(iParam0, 4, 0);
			func_133(iParam0, 2, 0);
			func_154(iParam0, 1);
			break;
		case 1:
			iParam0->f_169.f_3 = ANIMSCENE::_CREATE_ANIM_SCENE(iParam0->f_169.f_2, 1, 0, false, true);
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_169.f_3))
			{
				func_154(iParam0, 9);
				return;
			}
			func_154(iParam0, 2);
			break;
		case 2:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_169.f_3))
			{
				func_154(iParam0, 9);
				return;
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0->f_169.f_3, true, false) || !ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(iParam0->f_169.f_3, false))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(iParam0->f_169.f_3, true))
				{
					ANIMSCENE::RESET_ANIM_SCENE(iParam0->f_169.f_3, 0);
					ANIMSCENE::LOAD_ANIM_SCENE(iParam0->f_169.f_3);
				}
				return;
			}
			func_133(iParam0, 2, 1);
			func_154(iParam0, 3);
			break;
		case 3:
			if (!func_153(iParam0, 0))
			{
				return;
			}
			func_133(iParam0, 0, 0);
			func_154(iParam0, 4);
			break;
		case 4:
			ANIMSCENE::START_ANIM_SCENE(iParam0->f_169.f_3);
			func_154(iParam0, 5);
			break;
		case 5:
			if (func_153(iParam0, 3))
			{
				func_133(iParam0, 3, 0);
				func_154(iParam0, 6);
			}
			break;
		case 6:
			ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_169.f_3);
			func_154(iParam0, 7);
			break;
		case 7:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_169.f_3))
			{
				func_154(iParam0, 8);
				return;
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0->f_169.f_3, false))
			{
				func_154(iParam0, 8);
				return;
			}
			break;
		case 8:
			iParam0->f_169.f_3 = -1;
			func_133(iParam0, 4, 1);
			func_154(iParam0, 0);
			break;
		case 9:
			func_154(iParam0, 0);
			break;
	}
}

bool func_78(int iParam0)
{
	return func_69(iParam0, 12);
}

char* func_79(int iParam0)
{
	return "mp@freemode_cams@CoopMissionTriggers";
}

bool func_80(char* sParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return false;
	}
	if (CAM::_0xAA235E2F2C09E952(sParam0))
	{
		return true;
	}
	if (!CAM::_0x595550376B7EA230(sParam0))
	{
		CAM::_0x1B3C2D961F5FC0E1(sParam0);
	}
	return false;
}

int func_81(int iParam0)
{
	return iParam0->f_66;
}

void func_82(int* iParam0, bool bParam1)
{
	func_57(iParam0, 7, bParam1);
	if (bParam1)
	{
		func_155(iParam0);
	}
	else
	{
		func_156(iParam0);
	}
}

bool func_83(var uParam0)
{
	return func_18(uParam0, 2);
}

void func_84(var uParam0, bool bParam1)
{
	func_157(uParam0, 2, bParam1);
}

bool func_85(var uParam0, int iParam1)
{
	if (func_158(255))
	{
		return true;
	}
	if (!GANG::_0xD6F6ACF4392187FB(Global_1296859.f_15))
	{
		return true;
	}
	if (Global_1296859.f_16 < 0 || Global_1296859.f_16 >= 32)
	{
		return true;
	}
	if (!Global_1296859.f_22[Global_1296859.f_16])
	{
		return true;
	}
	if (PED::IS_PED_INJURED(Global_1296859.f_8))
	{
		return true;
	}
	if (func_88() || func_89())
	{
		func_90(7);
		return true;
	}
	if (func_161(func_159(func_62(iParam1)), func_160(Global_1296859.f_16)) != 0)
	{
		func_90(3);
		return true;
	}
	if (func_162(func_62(iParam1)))
	{
		func_90(2);
		return true;
	}
	if (func_163(uParam0) > iParam1->f_1.f_33)
	{
		func_90(1);
		return true;
	}
	if (!func_164(func_62(iParam1)))
	{
		return true;
	}
	if (func_166(func_165()))
	{
		return true;
	}
	if (func_167())
	{
		return true;
	}
	if (func_168())
	{
		return true;
	}
	if (func_169())
	{
		return true;
	}
	if (SCRIPTS::_DOES_THREAD_EXIST(Global_265377.f_124745) && SCRIPTS::IS_THREAD_ACTIVE(Global_265377.f_124745, false))
	{
		return true;
	}
	if (CAM::_0x139EFB0A71DD9011())
	{
		return true;
	}
	if (PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return true;
	}
	if (PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::_IS_PED_FALLING_2(PLAYER::PLAYER_PED_ID()))
	{
		return true;
	}
	if (func_89() || func_88())
	{
		return true;
	}
	return false;
}

bool func_86(var uParam0, int iParam1)
{
	bool bVar0;

	switch (func_170(iParam1))
	{
		case 0:
			func_171();
			func_111(uParam0, 1);
			func_109(uParam0, 1);
			func_84(uParam0, 1);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(func_79(func_62(iParam1))))
			{
				func_172(&Local_16);
			}
			func_123(0);
			TASK::TASK_STAND_STILL(Global_34, -1);
			func_173(1);
			func_174();
			func_175(&Local_16, "RDRO_COOP_Matchmaking_Sounds");
			func_57(iParam1, 3, 1);
			func_57(&Local_16, 13, 0);
			func_176(iParam1, 1);
			break;
		case 1:
			if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 0.5f)
			{
				func_176(iParam1, 2);
			}
			break;
		case 2:
			bVar0 = true;
			if (!func_177(&(iParam1->f_82)))
			{
				func_178(&(iParam1->f_82), 0);
			}
			if (!func_69(iParam1, 11))
			{
				bVar0 = false;
			}
			if (!func_179())
			{
				bVar0 = false;
			}
			if (func_180(&(iParam1->f_82)) >= 10f)
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_181(&(iParam1->f_82));
				func_176(iParam1, 3);
			}
			break;
		case 3:
			func_176(iParam1, 0);
			return true;
	}
	return false;
}

void func_87(int iParam0)
{
	func_182(&(Global_1572887.f_106.f_15), iParam0);
}

bool func_88()
{
	return (Global_1296851.f_2.f_1 == 2 || Global_1296851.f_2.f_1 == 1);
}

bool func_89()
{
	struct<7> Var0[7];
	int iVar50;
	int iVar51;
	int iVar52;

	if (!GANG::_0x0F99F6436528A089(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())))
	{
		return false;
	}
	if (!GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	iVar51 = GANG::_0xD1BF325C8252A982(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()), &Var0);
	iVar50 = 0;
	while (iVar50 <= (iVar51 - 1))
	{
		iVar52 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var0[iVar50 /*7*/]));
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar52) || PLAYER::IS_PLAYER_DEAD(iVar52))
		{
		}
		else if (func_183(1048576, iVar52))
		{
			return true;
		}
		iVar50++;
	}
	return false;
}

void func_90(int iParam0)
{
	if (iParam0 == 0)
	{
		return;
	}
	func_53(&Local_16, 7);
	func_184(&Local_16, iParam0);
}

void func_91(int iParam0, int iParam1)
{
	if (iParam0->f_72 == iParam1)
	{
		return;
	}
	iParam0->f_72 = iParam1;
}

void func_92(int* iParam0)
{
	func_57(iParam0, 5, 0);
	func_185(&(iParam0->f_75));
	if (func_186(iParam0->f_69))
	{
		func_187(1);
	}
}

bool func_93()
{
	return Global_1572887.f_266.f_84 != 0;
}

bool func_94(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	switch (func_188(iParam0))
	{
		case 0:
			func_174();
			func_189();
			func_7(uParam1);
			if (!func_177(&(iParam0->f_175)))
			{
				func_178(&(iParam0->f_175), 0);
			}
			if (!func_190(iParam0))
			{
				if (func_69(iParam0, 2))
				{
					if (func_177(&(iParam0->f_175)) && func_180(&(iParam0->f_175)) >= 5f)
					{
					}
					else
					{
						return false;
					}
				}
				else if (func_191(iParam0))
				{
					func_57(iParam0, 2, 1);
					return false;
				}
				else
				{
					return false;
				}
			}
			func_96(&Local_16, "RDRO_COOP_Matchmaking_Sounds", "game_to_prematchmaking");
			func_192();
			func_181(&(iParam0->f_175));
			func_82(iParam0, 1);
			func_119(iParam0, 1);
			func_57(iParam0, 2, 0);
			func_193(&Local_16, -1);
			func_194(iParam0->f_65, 0);
			func_195(uParam1, iParam0, 0);
			func_57(&Local_16, 14, 1);
			iParam0->f_86 = func_163(uParam1);
			func_91(iParam0, 1);
			break;
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
			iVar0 = func_163(uParam1);
			if (iParam0->f_86 != iVar0)
			{
				iParam0->f_86 = iVar0;
				if (iVar0 <= Local_16.f_1.f_33 && iVar0 >= Local_16.f_1.f_32)
				{
					func_195(uParam1, iParam0, 0);
				}
				else
				{
					func_90(1);
					func_91(iParam0, 0);
					func_92(iParam0);
					return true;
				}
			}
			VOICE::_0xB3E8841F6BDAF83E();
			iVar1 = func_196(iParam0);
			switch (iVar1)
			{
				case -1:
					return false;
				case 0:
				case 1:
					if (func_112() == func_62(iParam0))
					{
						func_197(11);
					}
					else
					{
						func_197(10);
					}
					break;
			}
			func_7(uParam1);
			func_124(736);
			func_124(737);
			if (iVar1 == 3)
			{
				func_97(&Local_16, !func_149(&Local_16));
				func_96(&Local_16, "RDRO_COOP_Matchmaking_Sounds", "show_info");
				return false;
			}
			func_193(iParam0, iVar1);
			func_91(iParam0, 2);
			break;
		case 2:
			func_91(iParam0, 0);
			func_92(iParam0);
			return true;
	}
	return false;
}

int func_95(var uParam0)
{
	return uParam0->f_73;
}

int func_96(int iParam0, char* sParam1, char* sParam2)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (iParam0->f_181.f_8)
	{
	}
	if (!func_175(iParam0, sParam1))
	{
		return 0;
	}
	StringCopy(&(iParam0->f_181.f_4), sParam2, 32);
	iParam0->f_181.f_8 = 1;
	return 1;
}

void func_97(int iParam0, bool bParam1)
{
	iParam0->f_99 = bParam1;
	if (bParam1)
	{
		func_198(iParam0->f_75[3], MISC::_CREATE_VAR_STRING(2, "INTERACT_TARGET_HIDE_INFO"));
	}
	else
	{
		func_198(iParam0->f_75[3], MISC::_CREATE_VAR_STRING(2, "INTERACT_TARGET_SHOW_INFO"));
	}
}

bool func_98()
{
	return Global_1071686.f_28662.f_65.f_42 != 0;
}

bool func_99()
{
	return Global_1071686.f_28662.f_22.f_3 != 0;
}

void func_100(int iParam0)
{
	iParam0->f_99 = 0;
	iParam0->f_98 = 0;
	if (UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("MP_MISSION_INFO")))
	{
		UIAPPS::_CLOSE_APP_BY_HASH(joaat("MP_MISSION_INFO"));
	}
}

bool func_101(int iParam0)
{
	return (Global_1572887.f_106.f_15 && iParam0) != 0;
}

int func_102(int iParam0, var uParam1)
{
	int iVar0;

	switch (func_188(iParam0))
	{
		case 0:
			func_174();
			if (!func_177(&(iParam0->f_175)))
			{
				func_178(&(iParam0->f_175), 0);
			}
			if (!func_190(iParam0))
			{
				if (func_69(iParam0, 2))
				{
					if (func_177(&(iParam0->f_175)) && func_180(&(iParam0->f_175)) >= 5f)
					{
					}
					else
					{
						return 0;
					}
				}
				else if (func_191(iParam0))
				{
					func_57(iParam0, 2, 1);
					return 0;
				}
				else
				{
					return 0;
				}
			}
			func_96(&Local_16, "RDRO_COOP_Matchmaking_Sounds", "game_to_prematchmaking");
			func_181(&(iParam0->f_175));
			func_97(&Local_16, 1);
			func_82(iParam0, 1);
			func_119(iParam0, 1);
			func_57(iParam0, 2, 0);
			func_193(&Local_16, -1);
			func_195(uParam1, iParam0, 2);
			func_199(2048);
			func_91(iParam0, 1);
			break;
		case 1:
			if (func_158(255))
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_200(iParam0);
					return 0;
				}
				else
				{
					return 0;
				}
			}
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
			VOICE::_0xB3E8841F6BDAF83E();
			iVar0 = func_196(iParam0);
			if (iVar0 == -1)
			{
				return 0;
			}
			if (iVar0 == 3)
			{
				func_97(&Local_16, !func_149(&Local_16));
				func_96(&Local_16, "RDRO_COOP_Matchmaking_Sounds", "show_info");
				return 0;
			}
			if (iVar0 == 2)
			{
				func_53(iParam0, 8);
				func_96(&Local_16, "RDRO_COOP_Matchmaking_Sounds", "exit");
				func_91(iParam0, 0);
				func_92(iParam0);
				return 1;
			}
			break;
	}
	return 0;
}

bool func_103(var uParam0, int iParam1)
{
	func_201(iParam1);
	func_96(iParam1, "rdro_gamemode_transition_sounds", "landscape_to_lobby");
	return true;
}

bool func_104(int iParam0, var uParam1)
{
	int iVar0;

	if (Global_1296859 != Global_1296859.f_16)
	{
		return false;
	}
	iVar0 = 805306375;
	if (func_202(iParam0))
	{
		iVar0 |= 1024;
	}
	func_203(iParam0->f_1, iParam0->f_1.f_53, iVar0, 1, 0);
	func_204(2);
	return true;
}

int func_105(int iParam0, var uParam1)
{
	int iVar0;

	switch (func_205(iParam0))
	{
		case 0:
			if (!func_177(&(iParam0->f_178)))
			{
				func_178(&(iParam0->f_178), 0);
			}
			if (func_78(iParam0) && func_80(func_79(func_62(&Local_16))))
			{
				func_206(uParam1);
				if (func_190(iParam0))
				{
					if (CAM::_0xA2B1C7EF759A63CE() < 1f)
					{
						return 0;
					}
					func_118(iParam0);
				}
			}
			else if (func_207(&(iParam0->f_178)) < 3f)
			{
				return 0;
			}
			func_181(&(iParam0->f_178));
			func_51(iParam0, 1);
			break;
		case 1:
			func_208(6);
			switch (func_116(&Local_16))
			{
				case 0:
					func_209(iParam0->f_1, iParam0->f_1.f_53);
					break;
				case 1:
					iVar0 = 2;
					func_203(iParam0->f_1, iParam0->f_1.f_53, iVar0, 1, 0);
					break;
			}
			func_57(&Local_16, 6, 1);
			func_92(iParam0);
			func_51(iParam0, 2);
			break;
		case 2:
			func_208(6);
			switch (func_106())
			{
				case 7:
					func_51(iParam0, 3);
					return 0;
				case 2:
				case 4:
				case 5:
					func_51(iParam0, 4);
					return 0;
				case 3:
				case 8:
					func_53(&Local_16, 8);
					break;
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_CONTEXT_B")))
			{
				func_96(&Local_16, "RDRO_COOP_Matchmaking_Sounds", "exit");
				func_51(iParam0, 5);
				return 0;
			}
			break;
		case 3:
			if (func_103(uParam1, &Local_16))
			{
				func_92(iParam0);
				func_51(&Local_16, 1);
				func_53(&Local_16, 0);
				return 1;
			}
			break;
		case 4:
			func_92(iParam0);
			func_51(&Local_16, 1);
			func_53(&Local_16, 8);
			return 1;
		case 5:
			func_210(1);
			func_123(1);
			func_92(iParam0);
			func_51(&Local_16, 1);
			func_53(&Local_16, 8);
			return 1;
	}
	return 0;
}

int func_106()
{
	return Global_1572887.f_360.f_7;
}

void func_107(int iParam0, var uParam1)
{
	struct<19> Var0;
	char* sVar19;
	char* sVar20;
	int iVar21;

	switch (func_211(iParam0))
	{
		case 0:
			if (func_112() == func_62(iParam0))
			{
				func_192();
			}
			if (func_212(iParam0) == 0)
			{
				func_53(&Local_16, 0);
				return;
			}
			switch (func_212(iParam0))
			{
				case 1:
					if (func_163(uParam1) < iParam0->f_1.f_32)
					{
						sVar20 = "MP_COOP_GIVER_ALERT_SUB_POSSE_SIZE_SMALL";
						Var0.f_3.f_3 = 1;
						Var0.f_3 = joaat("IB_PROCEED");
					}
					else if (func_163(uParam1) > iParam0->f_1.f_33)
					{
						sVar20 = "MP_COOP_GIVER_ALERT_SUB_POSSE_SIZE_HIGH";
					}
					else
					{
						func_53(&Local_16, 0);
						return;
					}
					break;
				case 2:
					sVar20 = "MP_COOP_GIVER_ALERT_SUB_COOLDOWN";
					break;
				case 3:
					switch (func_161(func_159(func_62(iParam0)), func_160(Global_1296859.f_16)))
					{
						case 1:
							sVar20 = "MP_COOP_GIVER_ALERT_SUB_HONOR_LOW";
							break;
						case 2:
							sVar20 = "MP_COOP_GIVER_ALERT_SUB_HONOR_HIGH";
							break;
					}
					break;
				case 7:
					sVar20 = "MP_COOP_GIVER_ALERT_IN_JAIL";
					break;
				case 4:
					sVar20 = "MP_COOP_GIVER_ALERT_SUB_LEADER";
					break;
				case 5:
					sVar20 = "MP_COOP_GIVER_ALERT_SUB_WANTED";
					break;
				case 6:
					sVar20 = "MP_COOP_GIVER_ALERT_SUB_MISSION_START_FAILED";
					break;
			}
			sVar19 = "GLOBAL_ALERT_ALT";
			Var0.f_7.f_3 = 1;
			Var0.f_7 = joaat("IB_EXIT");
			Var0.f_2 = 0;
			func_84(uParam1, 1);
			func_213(uParam1, Var0, sVar19, sVar20);
			func_214(iParam0, 1);
			break;
		case 1:
			if (!func_215(uParam1))
			{
				return;
			}
			iVar21 = func_216();
			if (iVar21 == -1577439368)
			{
				return;
			}
			switch (func_212(iParam0))
			{
				case 1:
					switch (iVar21)
					{
						case 2074623703:
							func_53(&Local_16, 2);
							break;
						case 1400745903:
							func_53(&Local_16, 8);
							break;
					}
					break;
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					switch (iVar21)
					{
						case 1400745903:
							func_53(&Local_16, 8);
							break;
					}
					break;
			}
			if (func_81(&Local_16) == 7)
			{
				func_53(&Local_16, 0);
			}
			func_120(uParam1, iParam0);
			break;
	}
}

bool func_108(int* iParam0, var uParam1)
{
	vector3 vVar0;
	var uVar3;
	int iVar4;
	vector3 vVar5;
	float fVar8;
	float fVar9;
	bool bVar10;
	int iVar11;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;

	switch (func_217(iParam0))
	{
		case 0:
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(150);
				}
				return false;
			}
			if (func_158(255))
			{
			}
			func_218(&Local_16);
			func_118(&Local_16);
			func_92(iParam0);
			func_100(&Local_16);
			func_120(uParam1, &Local_16);
			func_181(&(iParam0->f_175));
			func_219(uParam1);
			if (func_220(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::_GET_SEAT_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == -1)
				{
					iVar4 = PED::GET_MOUNT(PLAYER::PLAYER_PED_ID());
					if (ENTITY::DOES_ENTITY_EXIST(iVar4))
					{
						func_221(1, 1);
					}
				}
			}
			func_222(1);
			if (func_112() == func_62(iParam0))
			{
				func_223(iParam0, 3);
			}
			else if (func_224(func_62(iParam0), &vVar0, &uVar3))
			{
				func_223(iParam0, 2);
			}
			else
			{
				func_223(iParam0, 1);
			}
			break;
		case 3:
			if (!func_225(&vVar0))
			{
				func_223(iParam0, 1);
				return false;
			}
			func_226(vVar0, uVar3, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 1, 1);
			func_113(-1);
			func_223(iParam0, 4);
			break;
		case 2:
			func_224(func_62(iParam0), &vVar0, &uVar3);
			func_227(vVar0, uVar3, 1);
			func_223(iParam0, 4);
			break;
		case 1:
			fVar8 = 1E+17f;
			bVar10 = true;
			iVar11 = 0;
			if (VOLUME::_DOES_VOLUME_EXIST(uParam1->f_12[iVar11 /*3*/].f_1))
			{
				vVar18 = { VOLUME::_GET_VOLUME_COORDS(uParam1->f_12[iVar11 /*3*/].f_1) };
				VOLUME::_GET_VOLUME_BOUNDS(uParam1->f_12[iVar11 /*3*/].f_1, &vVar12, &vVar15);
				vVar12 = { vVar12 - vVar18 };
				vVar15 = { vVar15 - vVar18 };
				if (MISC::ABSF(vVar15.x) < fVar8)
				{
					fVar8 = vVar15.x;
				}
				if (MISC::ABSF(vVar15.y) < fVar8)
				{
					fVar8 = vVar15.y;
				}
				if (MISC::ABSF(vVar12.x) < fVar8)
				{
					fVar8 = vVar12.x;
				}
				if (MISC::ABSF(vVar12.y) < fVar8)
				{
					fVar8 = vVar12.y;
				}
				fVar8 = MISC::ABSF(fVar8);
				fVar9 = (fVar8 + 20f);
				vVar5 = { vVar18 };
			}
			else
			{
				bVar10 = false;
			}
			if (bVar10)
			{
				func_226(vVar5, 0f, fVar8, fVar9, 1, 1, 1);
			}
			else
			{
				func_228(1, 1);
			}
			func_223(iParam0, 4);
			break;
		case 4:
			if ((CAM::IS_SCREEN_FADING_IN() || CAM::IS_SCREEN_FADED_IN()) || !func_158(255))
			{
				func_119(&Local_16, 0);
				func_82(&Local_16, 0);
			}
			if (func_158(255))
			{
				return false;
			}
			func_57(iParam0, 4, 0);
			func_223(iParam0, 0);
			return true;
	}
	return false;
}

void func_109(var uParam0, bool bParam1)
{
	func_157(uParam0, 4, bParam1);
}

int func_110(int* iParam0, char* sParam1)
{
	func_57(iParam0, 12, 0);
	if (!CAM::_0xAA235E2F2C09E952(sParam1))
	{
		return 0;
	}
	CAM::_0x2412216FCC7B4E3E(sParam1);
	return 1;
}

void func_111(var uParam0, bool bParam1)
{
	func_157(uParam0, 3, bParam1);
}

int func_112()
{
	return Global_1211315.f_2;
}

void func_113(int iParam0)
{
	int iVar0;

	if (iParam0 == -1 && Global_1211315.f_2 != -1)
	{
		iVar0 = func_229(Global_1835011[Global_1211315.f_2 /*72*/].f_1);
		if (func_230(iVar0))
		{
			func_231(Global_1211315.f_2, 1);
			func_232(Global_1211315.f_2, -1, 0, 1, 1, 0, 0);
			func_233(Global_1211315.f_2);
			func_234(Global_1211315.f_2);
		}
		Global_1211315.f_4 = { 0f, 0f, 0f };
		Global_1211315.f_3 = 0;
		func_192();
	}
	Global_1211315.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
	Global_1211315.f_2 = iParam0;
}

void func_114(int iParam0)
{
}

int func_115(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (bParam0)
	{
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		iVar0 = -1;
		iVar1 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
		if (!GANG::_0xD6F6ACF4392187FB(iVar1))
		{
			return 0;
		}
		iVar2 = GANG::_0x4BE6C13A45CCA8EC(iVar1);
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar2))
		{
			return 0;
		}
		iVar0 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar2);
		NETWORK::_0x4B05B97BA46F419D(0);
		if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
		}
		else
		{
			NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, iVar0, false);
		}
	}
	else
	{
		NETWORK::_0x4B05B97BA46F419D(1);
		if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			return 1;
		}
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, true, 32, true);
	}
	return 1;
}

int func_116(int iParam0)
{
	return iParam0->f_67;
}

void func_117(int iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(iParam0->f_181)))
	{
		AUDIO::_0x531A78D6BF27014B(&(iParam0->f_181));
	}
	func_50(iParam0);
}

int func_118(int iParam0)
{
	func_235(0, -1, 0);
	return 1;
}

void func_119(int* iParam0, bool bParam1)
{
	func_57(iParam0, 7, bParam1);
	if (!func_169() || bParam1)
	{
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(PLAYER::PLAYER_PED_ID(), bParam1, false);
		func_236(!bParam1, 540);
	}
}

void func_120(var uParam0, int iParam1)
{
	func_214(iParam1, 0);
	func_184(iParam1, 0);
	func_6(uParam0);
}

void func_121(int iParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_169.f_3))
	{
	}
	ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_169.f_3);
}

void func_122(int* iParam0)
{
	func_57(iParam0, 8, 0);
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_88.f_1))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(iParam0->f_88.f_1, 1);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_88))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iParam0->f_88);
	}
}

void func_123(bool bParam0)
{
	struct<15> Var0;

	if (NETWORK::_0xAADED99A6B268A27() != bParam0)
	{
		Var0 = 1;
		Var0.f_1.f_4 = 10;
		Var0[0 /*15*/] = 15;
		NETWORK::_NETWORK_ALLOW_SESSION_TO_MERGE(bParam0, &Var0);
	}
}

void func_124(int iParam0)
{
	if (!func_237(iParam0))
	{
		return;
	}
	func_187(1);
}

bool func_125(int iParam0)
{
	return (Global_262153 && iParam0) != 0;
}

float func_126(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_127(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_128(int iParam0)
{
	return func_69(iParam0, 15);
}

void func_129(var uParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	if (ENTITY::DOES_ENTITY_EXIST(Global_1296859.f_8) && PED::_IS_PED_CARRYING(Global_1296859.f_8))
	{
		bVar0 = true;
	}
	else
	{
		iVar1 = PLAYER::_GET_MOUNT_OF_PLAYER(Global_1296859.f_10);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			if (PED::_IS_PED_CARRYING(iVar1))
			{
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
		func_238(uParam0, "MI_STOW_WARN", 1);
	}
}

void func_130(var uParam0)
{
	int iVar0;

	if (func_137())
	{
		iVar0 = func_62(&Local_16);
		func_238(uParam0, MISC::_CREATE_VAR_STRING(2, "MI_WANTED_WARN", Global_1835011[iVar0 /*72*/].f_28, func_239()), 1);
	}
}

void func_131(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_132(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_133(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_131(&(iParam0->f_169.f_1), iParam1);
	}
	else
	{
		func_132(&(iParam0->f_169.f_1), iParam1);
	}
}

int func_134(int iParam0)
{
	if (!func_49(iParam0))
	{
		return 0;
	}
	if (func_240() == -1)
	{
		return 0;
	}
	return Global_1835011[iParam0 /*72*/].f_51;
}

bool func_135(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (iParam1 == 0)
	{
		return false;
	}
	if (uParam0->f_16 == iParam1)
	{
		func_241(uParam0, 4194304);
		return true;
	}
	iVar0 = func_242(iParam1);
	if (iVar0 == -1)
	{
		return false;
	}
	MemCopy(&(uParam0->f_27), {Global_265377.f_4[iVar0 /*51*/]}, 3);
	uParam0->f_37 = { Global_265377.f_4[iVar0 /*51*/].f_7 };
	uParam0->f_45 = Global_265377.f_4[iVar0 /*51*/].f_22;
	uParam0->f_46 = Global_265377.f_4[iVar0 /*51*/].f_30;
	uParam0->f_16 = Global_265377.f_4[iVar0 /*51*/].f_28;
	uParam0->f_17 = Global_265377.f_63755[iVar0 /*8*/];
	uParam0->f_61 = { Global_265377.f_4[iVar0 /*51*/].f_24 };
	uParam0->f_30 = Global_265377.f_4[iVar0 /*51*/].f_34;
	uParam0->f_32 = Global_265377.f_4[iVar0 /*51*/].f_32;
	uParam0->f_33 = Global_265377.f_4[iVar0 /*51*/].f_33;
	uParam0->f_21 = 1;
	uParam0->f_21.f_1 = 0;
	uParam0->f_21.f_4 = iParam4;
	uParam0->f_21.f_2 = Global_265377.f_4[iVar0 /*51*/].f_29;
	uParam0->f_21.f_3 = Global_265377.f_4[iVar0 /*51*/].f_31;
	uParam0->f_26 = Global_265377.f_4[iVar0 /*51*/].f_31;
	uParam0->f_34 = Global_265377.f_4[iVar0 /*51*/].f_40;
	uParam0->f_1 = { Global_265377.f_4[iVar0 /*51*/].f_15 };
	MemCopy(&(uParam0->f_8), {Global_265377.f_4[iVar0 /*51*/].f_4}, 8);
	func_243(&(Global_265377.f_4[iVar0 /*51*/]));
	if (iParam2 != -1)
	{
		if ((uParam0->f_21.f_2 == -933924539 && func_244(iParam2)) || (uParam0->f_21.f_2 == 395262693 && func_245(iParam2)))
		{
			uParam0->f_21.f_3 = iParam2;
			uParam0->f_26 = iParam2;
		}
	}
	if (iParam3 > 0)
	{
		uParam0->f_30 = iParam3;
	}
	iVar1 = func_246(Global_265377.f_63755[iVar0 /*8*/]);
	vVar2 = { func_247(uParam0->f_17) };
	if (iVar1 != -1)
	{
		uParam0->f_53 = { func_136(iVar1) };
	}
	else if (func_248(uParam0->f_17))
	{
		uParam0->f_53 = { func_250(func_249(uParam0->f_17)) };
	}
	else if (vVar2.y != -1 && vVar2.x != -1)
	{
		uParam0->f_53 = { func_251(&vVar2) };
	}
	else
	{
		uParam0->f_53 = { func_252(uParam0->f_16) };
		if (!func_166(uParam0->f_53))
		{
			uParam0->f_53 = { func_254(func_253(uParam0->f_21.f_2)) };
		}
	}
	func_255(uParam0);
	func_241(uParam0, 4194304);
	return true;
}

struct<2> func_136(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 100)
	{
		return func_256();
	}
	return Global_1835011[iParam0 /*72*/].f_1;
}

bool func_137()
{
	return (func_257(Global_1296859.f_10, 1, 0, 1) && func_239() > 0);
}

void func_138()
{
	int iVar0;

	if (!GANG::_0x424B17A7DC5C90BC(Global_1296859.f_10))
	{
		return;
	}
	iVar0 = func_239();
	if (iVar0 > 0)
	{
		func_258(iVar0, 0, -142743235, 0);
	}
}

void func_139()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	LAW::_0x062B4A4A3396351D(iVar0);
	func_259();
}

bool func_140(int iParam0, char* sParam1)
{
	switch (iParam0)
	{
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
		default:
			break;
	}
	return false;
	StringCopy(sParam1, "image", 64);
	return true;
}

bool func_141(int iParam0, char* sParam1)
{
	switch (iParam0)
	{
		case 9:
		default:
			return false;
			StringCopy(sParam1, "map_card_story_clay2_rhodes", 64);
		case 11:
			StringCopy(sParam1, "map_card_story_clay2_blackwater", 64);
			break;
		case 12:
			StringCopy(sParam1, "map_card_story_clay2_tumbleweed", 64);
			break;
		case 10:
			StringCopy(sParam1, "map_card_story_clay2_valentine", 64);
			break;
		case 13:
			StringCopy(sParam1, "map_card_story_gunvout_1", 64);
			break;
		case 14:
			StringCopy(sParam1, "map_card_story_gunvout_2", 64);
			break;
		case 15:
			StringCopy(sParam1, "map_card_story_gunvout_3", 64);
			break;
		case 16:
			StringCopy(sParam1, "map_card_story_outlaw_1", 64);
			break;
		case 17:
			StringCopy(sParam1, "map_card_story_outlaw_2", 64);
			break;
		case 18:
			StringCopy(sParam1, "map_card_story_gunslinger_1", 64);
			break;
		case 19:
			StringCopy(sParam1, "map_card_story_gunslinger_2", 64);
			break;
		case 20:
			StringCopy(sParam1, "map_card_story_revenge_1", 64);
			break;
		case 21:
			StringCopy(sParam1, "map_card_story_outlaw_3", 64);
			break;
		case 22:
			StringCopy(sParam1, "map_card_story_outlaw_4", 64);
			break;
		case 23:
			StringCopy(sParam1, "map_card_story_gunslinger_3", 64);
			break;
		case 24:
			StringCopy(sParam1, "map_card_story_gunslinger_4", 64);
			break;
		case 25:
			StringCopy(sParam1, "map_card_story_revenge_2", 64);
			break;
	}
	return true;
}

char* func_142(int iParam0, int iParam1)
{
	char* sVar0;

	if (Global_265377.f_124386.f_130 > 0 && Global_265377.f_124386.f_130 != iParam0)
	{
		*iParam1 = 5;
		return "";
	}
	switch (Global_265377.f_124386)
	{
		case 0:
			if (!NETWORK::_0x2D5DC831176D0114(iParam0))
			{
				func_260(1);
			}
			else
			{
				NETWORK::_0x68103E2247887242();
				func_260(1);
			}
			break;
		case 1:
			NETWORK::UGC_REQUEST_CACHED_DESCRIPTION(iParam0);
			func_260(2);
			break;
		case 2:
			if (!NETWORK::_0xEBFA8D50ADDC54C4(iParam0))
			{
				*iParam1 = 1;
				return "";
			}
			if (NETWORK::_0x162C23CA83ED0A62(iParam0))
			{
				func_260(3);
			}
			else
			{
				func_260(0);
				*iParam1 = 3;
				return "";
			}
			break;
		case 3:
			sVar0 = NETWORK::UGC_GET_CACHED_DESCRIPTION(iParam0, 512);
			NETWORK::_0x5A34CD9C3C5BEC44(iParam0);
			func_260(0);
			*iParam1 = 2;
			return sVar0;
	}
	*iParam1 = 1;
	return "";
}

void func_143()
{
	func_260(0);
	Global_265377.f_124386.f_130 = 0;
}

int func_144(int iParam0)
{
	return iParam0->f_98;
}

bool func_145(int iParam0)
{
	if (func_69(iParam0, 8))
	{
		return true;
	}
	iParam0->f_88 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "lobby_data");
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_88))
	{
		return false;
	}
	iParam0->f_88.f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(iParam0->f_88, "rm_host_visibility", 0);
	iParam0->f_88.f_2 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iParam0->f_88, "main_title", "");
	iParam0->f_88.f_3 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iParam0->f_88, "sub_title", "");
	iParam0->f_88.f_4 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iParam0->f_88, "details_photo_image", "");
	iParam0->f_88.f_5 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iParam0->f_88, "details_photo_dictionary", "");
	iParam0->f_88.f_9 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iParam0->f_88, "dsFooter", "");
	iParam0->f_88 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "lobby_data");
	iParam0->f_88.f_6 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "lobby_details_data");
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_88.f_6))
	{
		iParam0->f_88.f_7 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iParam0->f_88.f_6, "job_description", "");
		iParam0->f_88.f_8 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iParam0->f_88.f_6, "playercount_requirement", "");
	}
	func_57(iParam0, 8, 1);
	return true;
}

void func_146(int iParam0, int iParam1)
{
	if (iParam0->f_98 == iParam1)
	{
		return;
	}
	iParam0->f_98 = iParam1;
}

char* func_147(var uParam0)
{
	return uParam0;
}

char* func_148(int iParam0)
{
	switch (iParam0)
	{
		case -1759663922:
			return "UGC_MST_STRY";
		case -318976023:
			return "UGC_MST_LGNDB";
		case 772881414:
			return "UGC_MST_MNSHN";
		case 603385332:
			return "UGC_MST_DEL";
		case 534981680:
			return "UGC_MST_ESCF";
		case -915869673:
			return "UGC_MST_TTYG";
		case -360644098:
			return "UGC_MST_TTYT";
		case 1520184724:
			return "UGC_MST_AFGPO";
		case -777132493:
			return "UGC_MST_PDR";
		case -163684180:
			return "UGC_MST_SOW";
		case -1649482077:
			return "UGC_MST_UIS";
		case -698288936:
			return "UGC_MST_PROT";
		case joaat("UGC_SUBTYPE_MISSION_PREDATOR_HUNT"):
			return "UGC_MST_PDH";
		case 604251967:
			return "UGC_MST_FOU";
		case 1078150940:
			return "UGC_MST_AWIP";
		case 482206342:
			return "UGC_MST_LEG";
		default:
			break;
	}
	return "Invalid MISSION_SUB_TYPE";
}

bool func_149(int iParam0)
{
	return iParam0->f_99;
}

bool func_150()
{
	if (UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(joaat("MP_MISSION_INFO"), 1392996949) == 0)
	{
		return true;
	}
	return false;
}

void func_151(int iParam0, bool bParam1)
{
	int iVar0;

	if (func_261(iParam0))
	{
		iVar0 = func_262(iParam0);
		if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iVar0 /*23*/].f_3))
		{
			HUD::_UIPROMPT_SET_ENABLED(Global_1951255[iVar0 /*23*/].f_3, bParam1);
		}
	}
}

int func_152(int iParam0)
{
	return iParam0->f_169;
}

bool func_153(int iParam0, int iParam1)
{
	return func_46(iParam0->f_169.f_1, iParam1);
}

void func_154(int iParam0, int iParam1)
{
	iParam0->f_169 = iParam1;
}

void func_155(int* iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar4 = 0;
	while (iVar4 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar4);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
		}
		else
		{
			iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
			}
			else if (PED::IS_PED_INJURED(iVar2))
			{
			}
			else
			{
				if (func_220(iVar2))
				{
					iVar3 = func_263(iVar2);
					if (ENTITY::DOES_ENTITY_EXIST(iVar3))
					{
						func_264(iParam0, &iVar3);
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar2, false))
				{
					iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar2, false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						func_265(iParam0, &iVar0);
					}
				}
			}
		}
		iVar4++;
	}
}

void func_156(int* iParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;

	iParam0->f_101.f_67 = 0;
	iParam0->f_101.f_33 = 0;
	iVar0 = func_266();
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_101.f_34[iVar2]))
		{
			ENTITY::SET_ENTITY_VISIBLE(iParam0->f_101.f_34[iVar2], true);
		}
		MISC::_COPY_MEMORY(&(iParam0->f_101.f_34[iVar2]), &uVar1, 1);
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_101[iVar2]))
		{
			ENTITY::SET_ENTITY_VISIBLE(iParam0->f_101[iVar2], true);
		}
		MISC::_COPY_MEMORY(&(iParam0->f_101[iVar2]), &iVar0, 1);
		iVar2++;
	}
}

void func_157(var uParam0, int iParam1, bool bParam2)
{
	if (func_46(uParam0->f_1, iParam1) == bParam2)
	{
		return;
	}
	if (bParam2)
	{
		func_131(&(uParam0->f_1), iParam1);
	}
	else
	{
		func_132(&(uParam0->f_1), iParam1);
	}
}

bool func_158(int iParam0)
{
	return func_267(1, iParam0);
}

int func_159(int iParam0)
{
	return Global_1835011[iParam0 /*72*/].f_52;
}

int func_160(int iParam0)
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

int func_161(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 >= 8 && iParam0 < 8)
	{
		return 2;
	}
	else if (iParam1 <= 7 && iParam0 > 7)
	{
		return 1;
	}
	return 0;
}

bool func_162(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 13 && iParam0 <= 15)
	{
		return false;
	}
	if (func_268(iParam0))
	{
		if (!func_269(iParam0, &iVar0))
		{
			return false;
		}
	}
	else if (!func_270(iParam0, &iVar0))
	{
		return false;
	}
	iVar1 = GANG::_0x901E0DC25080C8B9(PLAYER::GET_PLAYER_INDEX());
	if (GANG::_0xD6F6ACF4392187FB(iVar1))
	{
		if (GANG::_0x149A2751AB66AC02(iVar1) > 1)
		{
			iVar2 = GANG::_0x4BE6C13A45CCA8EC(iVar1);
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar2))
			{
				return true;
			}
			iVar0 = Global_1056141[iVar2 /*471*/].f_15.f_23;
		}
	}
	if (iVar0 <= 0)
	{
		return false;
	}
	iVar3 = MISC::ABSI((NETWORK::GET_CLOUD_TIME_AS_INT() - iVar0));
	iVar4 = func_271(iParam0);
	if (func_268(iParam0))
	{
		iVar4 = func_272(iParam0);
	}
	return iVar3 < iVar4;
}

int func_163(var uParam0)
{
	if (GANG::_0xD6F6ACF4392187FB(Global_1296859.f_15))
	{
		return GANG::_0x149A2751AB66AC02(Global_1296859.f_15);
	}
	return 1;
}

bool func_164(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_273(Global_1835011[iParam0 /*72*/].f_1);
}

struct<2> func_165()
{
	if (Global_1196205.f_129 <= 0)
	{
		return func_274(0);
	}
	if (Global_1196205.f_130 < 0 || Global_1196205.f_131 == 0)
	{
		return func_274(0);
	}
	return Global_1196205[Global_1196205.f_130 /*4*/].f_1;
}

bool func_166(struct<2> Param0)
{
	if (!func_275(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_276(Param0))
	{
		return false;
	}
	return true;
}

bool func_167()
{
	return func_277() >= 15;
}

bool func_168()
{
	return Global_1572887.f_106.f_75 != 1;
}

bool func_169()
{
	return Global_263042[Global_1296859 /*70*/] > 2;
}

int func_170(var uParam0)
{
	return uParam0->f_85;
}

void func_171()
{
	func_278(128);
}

void func_172(int* iParam0)
{
	func_57(iParam0, 12, 1);
}

void func_173(bool bParam0)
{
	if (func_279())
	{
		Global_1958008 = 1;
	}
	if (func_280(joaat("CAMERA_ITEM")))
	{
	}
	if (bParam0 && (Global_1940258.f_38 == joaat("WEAPON_KIT_CAMERA") || Global_1940258.f_38 == joaat("WEAPON_KIT_CAMERA_ADVANCED")))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
		Global_1940258.f_38 = joaat("WEAPON_UNARMED");
	}
}

void func_174()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("SATCHEL")) > 0)
	{
		Global_1940311.f_12 = 1;
	}
}

bool func_175(int iParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(iParam0->f_181)) && !MISC::ARE_STRINGS_EQUAL(sParam1, &(iParam0->f_181)))
	{
		AUDIO::_0x531A78D6BF27014B(&(iParam0->f_181));
	}
	StringCopy(&(iParam0->f_181), sParam1, 32);
	iParam0->f_181.f_9 = 1;
	return true;
}

void func_176(int iParam0, int iParam1)
{
	if (iParam0->f_85 == iParam1)
	{
		return;
	}
	iParam0->f_85 = iParam1;
}

bool func_177(var uParam0)
{
	return func_281(*uParam0, 1);
}

void func_178(var uParam0, bool bParam1)
{
	if (bParam1 || !func_177(uParam0))
	{
		func_282(uParam0);
	}
}

bool func_179()
{
	bool bVar0;
	int iVar1;

	if (PED::_IS_PED_CARRYING(Global_1296859.f_8))
	{
		iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_1296859.f_8);
		bVar0 = true;
	}
	else if (func_283(&iVar1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_A_PED(iVar1)) && PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1)))
		{
			func_284(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1)));
		}
		return false;
	}
	return true;
}

float func_180(var uParam0)
{
	if (!func_177(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_285(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_286() - uParam0->f_1);
}

void func_181(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_182(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_183(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219.f_3 && iParam0) != 0;
	}
	return (Global_1100469[iParam1 /*53*/].f_3 && iParam0) != 0;
}

void func_184(int iParam0, int iParam1)
{
	if (iParam0->f_174 == iParam1)
	{
		return;
	}
	iParam0->f_174 = iParam1;
}

void func_185(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_287(uParam0[iVar0], 1, 1);
		iVar0++;
	}
}

bool func_186(int iParam0)
{
	int iVar0;

	iVar0 = UIFEED::_0xC17F69E1418CD11F(1);
	if (iVar0 == 0)
	{
		return false;
	}
	return (iVar0 == iParam0 && UIFEED::_0x59FA676177DBE4C9(iVar0) <= 4);
}

void func_187(int iParam0)
{
	UIFEED::_0xDD1232B332CBB9E7(1, iParam0, 0);
}

int func_188(var uParam0)
{
	return uParam0->f_72;
}

void func_189()
{
	if (func_288())
	{
		Global_1915715.f_22504.f_1 = 0;
	}
}

bool func_190(int iParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_1071686.f_28662.f_58.f_1) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_1071686.f_28662.f_58.f_1, false))
	{
		return false;
	}
	return true;
}

bool func_191(int iParam0)
{
	func_235(1, iParam0->f_65, 0);
	return true;
}

void func_192()
{
	Global_1211315.f_7 = 0;
}

void func_193(int iParam0, int iParam1)
{
	if (iParam0->f_73 == iParam1)
	{
		return;
	}
	iParam0->f_73 = iParam1;
}

void func_194(int iParam0, bool bParam1)
{
	if (!func_289(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 13:
			if (bParam1)
			{
				if (!PLAYER::_0x354F689C4FFAAB37(PLAYER::_0x8E84119A23C16623(joaat("CS_MP_SHERIFFFREEMAN"), 0, 0)))
				{
					PLAYER::_0x7C32191D9FB2BDEA(PLAYER::_0x8E84119A23C16623(joaat("CS_MP_SHERIFFFREEMAN"), 0, 0));
				}
			}
			break;
		case 16:
			if (!PLAYER::_0x354F689C4FFAAB37(PLAYER::_0x8E84119A23C16623(joaat("CS_MP_SAMSON_FINCH"), 0, 0)))
			{
				PLAYER::_0x7C32191D9FB2BDEA(PLAYER::_0x8E84119A23C16623(joaat("CS_MP_SAMSON_FINCH"), 0, 0));
			}
			break;
	}
}

void func_195(var uParam0, int iParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	func_185(&(iParam1->f_75));
	switch (iParam2)
	{
		case 0:
			bVar0 = false;
			bVar1 = false;
			if (func_69(iParam1, 0))
			{
				bVar0 = true;
			}
			else
			{
				iVar2 = func_163(uParam0);
				if (iVar2 < iParam1->f_1.f_32)
				{
					bVar0 = true;
				}
				else if (iVar2 >= iParam1->f_1.f_32 && iVar2 < iParam1->f_1.f_33)
				{
					bVar0 = true;
					bVar1 = true;
				}
				else if (iVar2 == iParam1->f_1.f_33)
				{
					bVar1 = true;
				}
			}
			if (func_56(func_62(iParam1)))
			{
				func_238(uParam0, "MP_COOP_TUTORIAL_MATCHMAKING", 1);
			}
			else if (bVar0)
			{
				if (bVar1)
				{
					func_290(736, 0);
				}
				else
				{
					func_290(737, 0);
				}
			}
			if (bVar1)
			{
				iParam1->f_75[0] = func_292(func_291(0), joaat("INPUT_GAME_MENU_ACCEPT"), 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			}
			if (bVar0)
			{
				iParam1->f_75[1] = func_292(func_291(1), joaat("INPUT_GAME_MENU_OPTION"), 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			}
			iParam1->f_75[2] = func_292(func_291(2), joaat("INPUT_GAME_MENU_CANCEL"), 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			iParam1->f_75[3] = func_292("INTERACT_TARGET_SHOW_INFO", joaat("INPUT_GAME_MENU_EXTRA_OPTION"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			break;
		case 1:
			iParam1->f_75[2] = func_292("FLOW_CAMP_CANCEL_MATCHMAKE", joaat("INPUT_GAME_MENU_CANCEL"), 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			iParam1->f_69 = func_293(MISC::_CREATE_VAR_STRING(2, "MP_COOP_CANCEL_MATCHMAKING"), 0, 0, 1);
			break;
		case 2:
			iParam1->f_75[2] = func_292("IB_CANCEL", joaat("INPUT_GAME_MENU_CANCEL"), 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			break;
	}
	iVar3 = 0;
	while (iVar3 < 4)
	{
		if (!func_261(iParam1->f_75[iVar3]))
		{
		}
		else
		{
			func_294(iParam1->f_75[iVar3], 6, 1);
			func_295(iParam1->f_75[iVar3], -459030638, 0, 1);
		}
		iVar3++;
	}
	func_57(iParam1, 5, 1);
}

int func_196(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_261(iParam0->f_75[iVar0]))
		{
		}
		else if (func_296(iParam0->f_75[iVar0], 0) || func_297(iParam0->f_75[iVar0], 0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_197(int iParam0)
{
	Global_1572887.f_106.f_14 = iParam0;
}

void func_198(int iParam0, char* sParam1)
{
	int iVar0;

	if (func_261(iParam0))
	{
		iVar0 = func_262(iParam0);
		if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iVar0 /*23*/].f_3))
		{
			HUD::_UIPROMPT_SET_TAG(Global_1951255[iVar0 /*23*/].f_3, sParam1);
			HUD::_UIPROMPT_SET_TEXT(Global_1951255[iVar0 /*23*/].f_3, sParam1);
		}
	}
}

void func_199(int iParam0)
{
	func_298(&(Global_1572887.f_106.f_15), iParam0);
}

void func_200(int* iParam0)
{
	func_57(iParam0, 15, 1);
}

void func_201(var uParam0)
{
	func_299(1, 1, 0, 0, 0, 0, 0, 0, 0);
}

bool func_202(int iParam0)
{
	int iVar0;
	struct<7> Var1[7];
	int iVar51;
	vector3 vVar52;
	float fVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;

	if (!GANG::_0xD6F6ACF4392187FB(Global_1296859.f_15))
	{
		return false;
	}
	iVar0 = func_62(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	iVar51 = GANG::_0xD1BF325C8252A982(Global_1296859.f_15, &Var1);
	vVar52 = { Global_1835011[iVar0 /*72*/].f_19 };
	fVar55 = (Global_1835011[iVar0 /*72*/].f_60 * Global_1835011[iVar0 /*72*/].f_60);
	iVar56 = 0;
	while (iVar56 < iVar51)
	{
		if (!NETWORK::NETWORK_IS_HANDLE_VALID(&(Var1[iVar56 /*7*/])))
		{
		}
		else
		{
			iVar59 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var1[iVar56 /*7*/]));
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar59))
			{
			}
			else
			{
				iVar57++;
				if (BUILTIN::VDIST2(vVar52, func_300(iVar59)) <= fVar55)
				{
					iVar58++;
				}
			}
		}
		iVar56++;
	}
	return iVar57 == iVar58;
}

void func_203(struct<34> Param0, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, struct<2> Param64, int iParam66, int iParam67, int iParam68)
{
	func_301(iParam67, Param0.f_33, 2, Param0.f_17, Param64, iParam66, -1, 0, 0, iParam68);
}

void func_204(int iParam0)
{
	if (!func_302(Global_1056141[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*471*/].f_15.f_11, iParam0))
	{
	}
	func_298(&(Global_1056141[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*471*/].f_15.f_11), iParam0);
}

int func_205(int iParam0)
{
	return iParam0->f_68;
}

void func_206(var uParam0)
{
	func_157(uParam0, 1, 1);
}

float func_207(var uParam0)
{
	if (!func_177(uParam0))
	{
		return 0f;
	}
	if (func_285(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_286() - uParam0->f_1);
}

void func_208(int iParam0)
{
	if (Global_1940144.f_105.f_2 >= iParam0)
	{
		return;
	}
	Global_1940144.f_105.f_2 = iParam0;
}

void func_209(struct<34> Param0, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, struct<2> Param64)
{
	func_301(1, Param0.f_33, 2, Param0.f_17, Param64, 2, -1, 0, 1, 0);
}

void func_210(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;

	NETWORK::_0xC505036A35AFD01B(false);
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = GANG::_0x901E0DC25080C8B9(iVar0);
	if (GANG::_0x4BE6C13A45CCA8EC(iVar1) == iVar0)
	{
		uVar2 = func_303(iVar1);
		SCRIPTS::_0xD426E2E3288469D6(&uVar2, Global_1296859);
		func_304(uVar2);
	}
	func_305(10, bParam0, 0, 0);
}

int func_211(var uParam0)
{
	return uParam0->f_173;
}

int func_212(int iParam0)
{
	return iParam0->f_174;
}

void func_213(var uParam0, var uParam1, char* sParam2, char* sParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, char[4] cParam20, char* sParam21)
{
	func_6(uParam0);
	uParam0->f_10 = func_306(&uParam1, cParam20, sParam21, 0, 0, 1);
}

void func_214(int iParam0, int iParam1)
{
	if (iParam0->f_173 == iParam1)
	{
		return;
	}
	iParam0->f_173 = iParam1;
}

bool func_215(var uParam0)
{
	return uParam0->f_10 != 0;
}

int func_216()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = joaat("WARNING_FEED");
	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar0))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iVar0, &vVar1))
		{
			switch (vVar1.x)
			{
				case -1203660660:
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar0);
					return vVar1.z;
				default:
					break;
			}
		}
		UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar0);
	}
	return -1577439368;
}

int func_217(var uParam0)
{
	return uParam0->f_74;
}

void func_218(int iParam0)
{
	func_299(0, 1, 0, 0, 1, 0, 0, 0, 0);
}

void func_219(var uParam0)
{
	func_157(uParam0, 1, 0);
}

bool func_220(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

void func_221(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_307(66);
		if (bParam1)
		{
			func_307(69);
		}
	}
	else
	{
		func_308(66);
		func_308(69);
	}
}

void func_222(bool bParam0)
{
	if (!bParam0)
	{
		func_308(19);
	}
	else
	{
		func_307(19);
	}
}

void func_223(int* iParam0, int iParam1)
{
	if (iParam0->f_74 == iParam1)
	{
		return;
	}
	iParam0->f_74 = iParam1;
}

bool func_224(int iParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	float fVar3;

	if (!func_49(iParam0))
	{
		return false;
	}
	vVar0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 9:
			vVar0 = { 1151.934f, -1387.466f, 63.8776f };
			fVar3 = 241.341f;
			break;
		case 10:
			vVar0 = { -427.9599f, 517.3432f, 97.3329f };
			fVar3 = 309.9268f;
			break;
		case 11:
			vVar0 = { -1961.41f, -1371.143f, 111.9102f };
			fVar3 = 273.9211f;
			break;
		case 12:
			vVar0 = { -5553.804f, -2575.463f, -10.1006f };
			fVar3 = 256.4703f;
			break;
	}
	if (!func_309(vVar0))
	{
		*uParam1 = { vVar0 };
		*uParam2 = fVar3;
		return true;
	}
	return false;
}

bool func_225(var uParam0)
{
	if (func_309(Global_1211315.f_4))
	{
		return false;
	}
	*uParam0 = { Global_1211315.f_4 };
	return true;
}

void func_226(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, float fParam8)
{
	vector3 vVar0;
	int iVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
	iVar3 = iParam3;
	if (!func_310(Global_1296859.f_17, &vVar0, &iVar3))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
		iVar3 = iParam3;
	}
	func_311(vParam0, iParam3, vVar0, iVar3, iParam4, iParam5, iParam6, iParam7, fParam8, 1);
}

void func_227(vector3 vParam0, var uParam3, bool bParam4)
{
	if (func_312(vParam0, uParam3))
	{
		func_228(1, bParam4);
	}
}

void func_228(bool bParam0, bool bParam1)
{
	if (func_313(255) == 4)
	{
		return;
	}
	if (func_309(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_308(0);
	}
	else
	{
		if (bParam1)
		{
			func_314(0, 0, 0, 1);
		}
		func_307(0);
		func_315(&(Global_1102219.f_3849));
		Global_1102219.f_3849 = 0f;
		Global_1102219.f_3849.f_5 = 1;
		Global_1102219.f_3849.f_16 = 0;
		Global_1102219.f_3849.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1102219.f_3849.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102219.f_3849.f_17 = { Global_1901947.f_50.f_1, Global_1901947.f_50.f_1, Global_1901947.f_50.f_1 };
		Global_1102219.f_3849.f_17.f_9 = joaat("VOLSPHERE");
		func_316(&(Global_1102219.f_3888));
		Global_1102219.f_3888.f_6 = { Global_1102219.f_3849.f_17.f_6 };
		Global_1102219.f_3888 = Global_1102219.f_3849;
		Global_1102219.f_3888.f_5 = 1;
		if (bParam1)
		{
			Global_1102219.f_26.f_3341 = 0;
			Global_1102219.f_26.f_3342 = 0;
		}
	}
	func_317(Global_1102219.f_3849, 36);
	func_318(Global_1102219.f_3888, 36);
}

int func_229(struct<2> Param0)
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
		if (func_319(Global_1900807[iVar0 /*2*/], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_230(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return true;
}

void func_231(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_229(Global_1835011[iParam0 /*72*/].f_1);
	if (!func_230(iVar0))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1900838[iVar0 /*2*/]))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(Global_1900838[iVar0 /*2*/]));
	}
	if (func_320(iVar0, 48))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1835011[iParam0 /*72*/].f_13));
	}
	if (bParam1)
	{
		func_322(func_321(4, iParam0), 0);
		func_323(Global_1835011[iParam0 /*72*/].f_1, 0, 2, 0, 0);
	}
	if (Global_1835011[iParam0 /*72*/].f_32 != -1)
	{
		Global_1835011[iParam0 /*72*/].f_32 = -1;
	}
	func_324(iParam0);
}

void func_232(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	struct<4> Var0;

	if (!func_230(iParam1))
	{
		iParam1 = func_229(func_325(iParam0));
		if (!func_230(iParam1))
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
		func_326(iParam0, iParam5, iParam1);
	}
	if (func_320(iParam1, 48))
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
		func_327(Global_1835011[iParam0 /*72*/].f_1);
	}
	else
	{
		func_328(iParam1, 3831);
	}
	Global_1835011[iParam0 /*72*/].f_71 = 0;
}

void func_233(int iParam0)
{
	var uVar0;

	MemCopy(&uVar0, {Global_1835011[iParam0 /*72*/].f_4}, 3);
	if ((func_240() != -1 && !MISC::IS_STRING_NULL_OR_EMPTY(&uVar0)) && SCRIPTS::IS_THREAD_ACTIVE(Global_1835011[iParam0 /*72*/].f_8, false))
	{
		SCRIPTS::_0x7DE4643157AD646C(Global_1835011[iParam0 /*72*/].f_8);
	}
}

void func_234(var uParam0)
{
	int iVar0;

	if (!func_329(uParam0))
	{
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0))
	{
		return;
	}
	if (!func_330(uParam0, iVar0))
	{
		return;
	}
	MISC::_0xB909149F2BB5F6DA(&(Global_1056141[iVar0 /*471*/].f_15.f_20), uParam0);
}

void func_235(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		if (iParam1 == -1)
		{
			return;
		}
		Global_1071686.f_28662.f_58.f_2 = 1;
		Global_1071686.f_28662.f_58 = iParam1;
	}
	else
	{
		Global_1071686.f_28662.f_58.f_3 = 1;
		Global_1071686.f_28662.f_58.f_4 = iParam2;
	}
}

void func_236(bool bParam0, int iParam1)
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
		func_331(iParam1);
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
	func_332(bVar1, bVar2, bVar3, (bVar4 || bVar5), bVar6, 0, bVar5);
}

bool func_237(int iParam0)
{
	int iVar0;

	iVar0 = UIFEED::_0xC17F69E1418CD11F(1);
	if (iVar0 != 0)
	{
		return iVar0 == Global_1904651.f_33[iParam0 /*9*/].f_1;
	}
	return false;
}

int func_238(var uParam0, char* sParam1, bool bParam2)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (!bParam2)
	{
		if (func_333(uParam0->f_11))
		{
			return 0;
		}
	}
	uParam0->f_11 = func_334(sParam1, 10000, 0, 0, 0, 1);
	return 1;
}

int func_239()
{
	int iVar0;

	iVar0 = func_335(120839576, 59806960, 1, 0, 1, 0);
	if (!func_336(iVar0))
	{
		iVar0 = MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return iVar0;
}

int func_240()
{
	return Global_1572887.f_13;
}

void func_241(var uParam0, int iParam1)
{
	uParam0->f_20 = (uParam0->f_20 || iParam1);
}

int func_242(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Global_265377.f_2)
	{
		if (Global_265377.f_63755[iVar0 /*8*/] == iParam0)
		{
			return iVar0;
		}
		if (Global_265377.f_4[iVar0 /*51*/].f_28 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_243(char* sParam0)
{
	StringCopy(&(Global_1572887.f_106.f_91.f_6), sParam0, 32);
}

bool func_244(int iParam0)
{
	if (func_337(iParam0, 0) == -1)
	{
		return false;
	}
	return true;
}

bool func_245(int iParam0)
{
	if (func_338(iParam0, 0) == -1)
	{
		return false;
	}
	return true;
}

int func_246(int iParam0)
{
	int iVar0;

	if (func_240() == -1)
	{
		return -1;
	}
	iVar0 = 9;
	while (iVar0 <= 25)
	{
		if (func_134(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

Vector3 func_247(int iParam0)
{
	struct<2> Var0;
	vector3 vVar5;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12;

	vVar5 = -1;
	vVar5.f_1 = -1;
	vVar5.f_2 = -1;
	if (!func_339(&Var0))
	{
		return vVar5;
	}
	if (!func_340(&Var0, 13, 0, 0, 1))
	{
		return vVar5;
	}
	if (!func_340(&Var0, 17, 0, 0, 1))
	{
		return vVar5;
	}
	uVar12 = Var0.f_1;
	iVar9 = func_341(&Var0, 0);
	iVar8 = 0;
	while (iVar8 <= (iVar9 - 1))
	{
		Var0.f_1 = uVar12;
		if (!func_340(&Var0, 19, iVar8, 0, 1))
		{
		}
		else if (!func_340(&Var0, 20, 0, 0, 1))
		{
		}
		else
		{
			iVar10 = func_341(&Var0, 1);
			if (!func_340(&Var0, 22, iParam0, 0, 0))
			{
			}
			else
			{
				iVar11 = DATAFILE::_0xE13634BB6BAF0734(Var0, Var0.f_1);
				vVar5.x = iVar8;
				vVar5.f_1 = ((iVar10 - iVar11) - 1);
			}
			else
			{
				iVar8++;
			}
			return vVar5;
		}
	}
}

bool func_248(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return func_249(iParam0) != -1;
}

int func_249(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		iVar1 = iVar0;
		if (iParam0 == func_342(iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -1;
}

struct<2> func_250(int iParam0)
{
	return func_343(iParam0);
}

struct<2> func_251(int iParam0)
{
	var uVar0;
	int iVar5;

	if (!func_339(&uVar0))
	{
		return func_256();
	}
	if (!func_340(&uVar0, 13, 0, 0, 1))
	{
		return func_256();
	}
	if (!func_340(&uVar0, 17, 0, 0, 1))
	{
		return func_256();
	}
	if (!func_340(&uVar0, 19, *iParam0, 0, 1))
	{
		return func_256();
	}
	if (!func_340(&uVar0, 20, 0, 0, 1))
	{
		return func_256();
	}
	if (!func_340(&uVar0, 23, iParam0->f_1, 0, 1))
	{
		return func_256();
	}
	iVar5 = func_344(&uVar0);
	return func_254(iVar5);
}

struct<2> func_252(int iParam0)
{
	var uVar0;
	struct<5> Var5;

	if (iParam0 == 0)
	{
		return func_256();
	}
	if (!func_345(&uVar0, 7, iParam0, 76966722))
	{
		return func_256();
	}
	func_346(7, &uVar0, &Var5);
	if (Var5.f_4 != 7)
	{
		return func_256();
	}
	return func_347(Var5.f_3, Var5.f_4);
}

int func_253(int iParam0)
{
	switch (iParam0)
	{
		case -504335712:
			return joaat("MP_VS_MISSION");
		case 395262693:
			return joaat("MP_DEATHMATCH");
		case -933924539:
			return joaat("MP_RACE");
		default:
			break;
	}
	return 0;
}

struct<2> func_254(int iParam0)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_347(iParam0, 2) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_347(iParam0, 7) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_347(iParam0, 5) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_347(iParam0, 6) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_347(iParam0, 8) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_347(iParam0, 3) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_347(iParam0, 4) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	return func_256();
}

void func_255(var uParam0)
{
	uParam0->f_20 = 0;
}

struct<2> func_256()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

int func_257(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_348(bParam1, bParam2, bParam3);
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

int func_258(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	int iVar0;
	struct<5> Var1;
	struct<16> Var6;
	struct<17> Var22;

	iVar0 = -1;
	Var1 = { func_349(joaat("CURRENCY_CASH"), 1, 0) };
	Var6 = { func_350(joaat("CURRENCY_CASH"), Var1, Var1.f_4, iParam0, 1) };
	Var6.f_12 = iParam2;
	iVar0 = func_351(joaat("USE"), &Var6, bParam3);
	if (iVar0 == -1)
	{
	}
	else
	{
		Var22.f_7 = -142743235;
		Var22.f_16 = -1;
		StringCopy(&(Var22.f_12), sParam1, 32);
		func_352(iVar0, Var22);
	}
	return iVar0;
}

void func_259()
{
	int iVar0;

	VOLUME::_0x748C5F51A18CB8F0(0);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_353(iVar0))
		{
			func_354(iVar0);
		}
		iVar0++;
	}
	VOLUME::_0x748C5F51A18CB8F0(1);
}

void func_260(int iParam0)
{
	Global_265377.f_124386 = iParam0;
}

bool func_261(int iParam0)
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

int func_262(int iParam0)
{
	return iParam0;
}

int func_263(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		return PED::GET_MOUNT(iParam0);
	}
	return 0;
}

int func_264(int* iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return 0;
	}
	if (iParam0->f_101.f_33 >= 32)
	{
		return 0;
	}
	iParam0->f_101[iParam0->f_101.f_33] = *iParam1;
	iParam0->f_101.f_33++;
	return 1;
}

int func_265(int* iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return 0;
	}
	if (iParam0->f_101.f_67 >= 32)
	{
		return 0;
	}
	iParam0->f_101.f_34[iParam0->f_101.f_67] = *iParam1;
	iParam0->f_101.f_67++;
	return 1;
}

int func_266()
{
	return -1;
}

bool func_267(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_355(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 == func_356())
	{
		return func_355(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1296859.f_22[iParam1])
	{
		return func_355(&(Global_1100469[iParam1 /*53*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_268(int iParam0)
{
	int iVar0;

	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	iVar0 = func_321(2, iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	return NETWORK::_0xFBE782B3165AC8EC(iVar0);
}

bool func_269(int iParam0, int* iParam1)
{
	struct<2> Var0;

	*iParam1 = -1;
	switch (iParam0)
	{
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
			Var0 = { func_357(joaat("GVO_FLOW_REPLAY_TIMESTAMP")) };
			STATS::STAT_ID_GET_INT(&Var0, iParam1);
			return true;
		default:
			break;
	}
	return false;
}

bool func_270(int iParam0, int* iParam1)
{
	struct<2> Var0;

	*iParam1 = -1;
	switch (iParam0)
	{
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
			Var0 = { func_357(joaat("GVO_FLOW_INITIAL_TIMESTAMP")) };
			STATS::STAT_ID_GET_INT(&Var0, iParam1);
			return true;
		default:
			break;
	}
	return false;
}

int func_271(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 == 25)
	{
		return Global_1901947.f_50.f_26 * 2;
	}
	return Global_1901947.f_50.f_26;
}

int func_272(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1901947.f_50.f_27;
}

bool func_273(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_358(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

struct<2> func_274(int iParam0)
{
	return Global_1900736.f_1[iParam0 /*2*/];
}

bool func_275(int iParam0)
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

int func_276(int iParam0)
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

int func_277()
{
	return Global_1572887.f_106.f_75;
}

void func_278(int iParam0)
{
	func_359(&Global_1301321, iParam0);
}

bool func_279()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("CAMERA_ITEM")) > 0)
	{
		return true;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("NET_ADVANCED_CAMERA")) > 0)
	{
		return true;
	}
	return false;
}

bool func_280(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1939493.f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(Global_1939493[iVar0 /*16*/].f_10)))
		{
			func_360(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_281(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_282(var uParam0)
{
	func_361(uParam0, 0f);
}

bool func_283(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_MOUNT(Global_1296859.f_8);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iVar0);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_A_PED(iVar1)) && PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1)))
		{
			if (PED::_IS_PED_HOGTIED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1)))
			{
				*iParam0 = iVar1;
				return true;
			}
		}
	}
	return false;
}

void func_284(int iParam0)
{
	vector3 vVar0;
	var uVar4;

	vVar0.x = 196;
	vVar0.f_1 = PLAYER::PLAYER_ID();
	vVar0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_0x31010318BA9897AC(&uVar4, iParam0);
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &vVar0, 4, 16, &uVar4);
}

bool func_285(var uParam0)
{
	return func_281(*uParam0, 2);
}

float func_286()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_287(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_261(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_262(*uParam0);
	if (Global_1951255[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_362(iVar0);
	*uParam0 = 0;
}

bool func_288()
{
	return Global_1915715.f_22504.f_1;
}

bool func_289(int iParam0)
{
	switch (iParam0)
	{
		case 16:
			if ((!func_268(13) || !func_268(14)) || !func_268(15))
			{
				return false;
			}
			break;
		case 17:
			if ((!func_268(13) || !func_268(14)) || !func_268(15))
			{
				return false;
			}
			if (!func_268(16))
			{
				return false;
			}
			break;
		case 18:
			if ((!func_268(13) || !func_268(14)) || !func_268(15))
			{
				return false;
			}
			break;
		case 19:
			if ((!func_268(13) || !func_268(14)) || !func_268(15))
			{
				return false;
			}
			if (!func_268(18))
			{
				return false;
			}
			break;
		case 20:
			if ((!func_268(13) || !func_268(14)) || !func_268(15))
			{
				return false;
			}
			if (!func_268(16) && !func_268(18))
			{
				return false;
			}
			if (!func_268(17) && !func_268(19))
			{
				return false;
			}
			break;
		case 21:
			if ((!func_268(13) || !func_268(14)) || !func_268(15))
			{
				return false;
			}
			if (!func_268(16))
			{
				return false;
			}
			if (!func_268(17))
			{
				return false;
			}
			break;
		case 22:
			if ((!func_268(13) || !func_268(14)) || !func_268(15))
			{
				return false;
			}
			if (!func_268(16))
			{
				return false;
			}
			if (!func_268(17))
			{
				return false;
			}
			if (!func_268(21))
			{
				return false;
			}
			break;
		case 23:
			if ((!func_268(13) || !func_268(14)) || !func_268(15))
			{
				return false;
			}
			if (!func_268(18))
			{
				return false;
			}
			if (!func_268(19))
			{
				return false;
			}
			break;
		case 24:
			if ((!func_268(13) || !func_268(14)) || !func_268(15))
			{
				return false;
			}
			if (!func_268(18))
			{
				return false;
			}
			if (!func_268(19))
			{
				return false;
			}
			if (!func_268(23))
			{
				return false;
			}
			break;
		case 25:
			if ((!func_268(13) || !func_268(14)) || !func_268(15))
			{
				return false;
			}
			if (!func_268(16) && !func_268(18))
			{
				return false;
			}
			if (!func_268(17) && !func_268(19))
			{
				return false;
			}
			if (!func_268(21) && !func_268(24))
			{
				return false;
			}
			if (!func_268(22) && !func_268(24))
			{
				return false;
			}
			if (!func_268(20))
			{
				return false;
			}
			break;
	}
	return true;
}

void func_290(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_363(iParam0, &iVar0, &iVar1);
	if (!func_364(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_365(iVar0, iVar1);
}

char* func_291(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "FLOW_CAMP_O1";
		case 1:
			return "FLOW_CAMP_O2";
		case 2:
			return "FLOW_CAMP_O3";
		default:
			break;
	}
	return "";
}

int func_292(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
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
		if (func_366(iVar0, 2))
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
		func_367(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

var func_293(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	return func_334(sParam0, -1, iParam1, iParam2, 0, iParam3);
}

void func_294(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_261(iParam0))
	{
		return;
	}
	iVar0 = func_262(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1951255[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_0xF4A5C4509BF923B1(Global_1951255[iVar0 /*23*/].f_3, iParam1);
}

void func_295(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_261(iParam0))
	{
		return;
	}
	iVar0 = func_262(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1951255[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_GROUP(Global_1951255[iVar0 /*23*/].f_3, iParam1, iParam2);
}

bool func_296(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_261(iParam0))
	{
		return false;
	}
	iVar0 = func_262(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(Global_1951255[iVar0 /*23*/].f_3);
}

bool func_297(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_261(iParam0))
	{
		return false;
	}
	iVar0 = func_262(iParam0);
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

void func_298(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_299(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	if (bParam0)
	{
		Global_1071686.f_28662.f_65.f_28 = 1;
		Global_1071686.f_28662.f_65.f_29 = iParam3;
		Global_1071686.f_28662.f_65.f_26 = iParam6;
		Global_1071686.f_28662.f_65.f_27 = iParam8;
		if (bParam7)
		{
			MISC::SET_BIT(&(Global_1071686.f_28662.f_65.f_8), 18);
		}
	}
	else
	{
		Global_1071686.f_28662.f_65.f_30 = 1;
		Global_1071686.f_28662.f_65.f_33 = !bParam1;
		Global_1071686.f_28662.f_65.f_31 = iParam2;
		Global_1071686.f_28662.f_65.f_32 = iParam4;
		Global_1071686.f_28662.f_65.f_35 = iParam5;
		if (MISC::IS_BIT_SET(Global_1071686.f_28662.f_65.f_8, 18))
		{
			MISC::CLEAR_BIT(&(Global_1071686.f_28662.f_65.f_8), 18);
		}
	}
}

Vector3 func_300(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

int func_301(int iParam0, var uParam1, int iParam2, int iParam3, struct<2> Param4, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10)
{
	struct<7> Var0;
	char cVar57[64];
	struct<56> Var65;

	if (!func_368(iParam2, iParam3))
	{
		return 0;
	}
	if (func_168() && Global_1572887.f_106.f_75 != 9)
	{
		return 0;
	}
	if (!func_369(Global_1296859.f_10))
	{
		return 0;
	}
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_5 = 1;
	Var0.f_6 = 7;
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	Var0.f_2 = 1;
	Var0.f_3 = { Param4 };
	func_370(&Var0);
	func_371(iParam2, iParam3, iParam7, 1);
	func_372(Param4, 1);
	func_373(iParam6);
	func_374(iParam9);
	func_375(iParam10, 1);
	if ((func_166(Param4) && !func_376()) && Global_1211325 == -1)
	{
		func_377(Param4);
	}
	NETWORK::_NETWORK_SESSION_SET_PLAYER_FLAGS(1);
	if (iParam2 != 2)
	{
		func_378();
	}
	if (func_376())
	{
		func_379(Param4);
	}
	else if (iParam2 == 3)
	{
		if (!func_101(268435456))
		{
			if (!UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("PLAYER_MENU")))
			{
				func_380(1, 0);
			}
		}
	}
	else
	{
		if (iParam2 == 2)
		{
			Var65 = 255;
			Var65.f_18 = 2147483647;
			Var65.f_21.f_2 = -504335712;
			Var65.f_21.f_4 = 3;
			Var65.f_26 = -1;
			Var65.f_30 = 1;
			Var65.f_31 = 1;
			Var65.f_32 = 1;
			Var65.f_33 = 32;
			Var65.f_34 = 1;
			Var65.f_35 = -2;
			Var65.f_47.f_5 = -1;
			Var65.f_53 = -1;
			Var65.f_53.f_1 = -1;
			Var65.f_55.f_3 = -1;
			func_135(&Var65, iParam3, -1, -1, 3);
			StringCopy(&cVar57, func_381(&(Var65.f_37), joaat("COLOR_PURE_WHITE")), 64);
		}
		else if (iParam2 == 1)
		{
			StringCopy(&cVar57, MISC::_CREATE_VAR_STRING(2, func_382(iParam3)), 64);
		}
		else
		{
			StringCopy(&cVar57, MISC::_CREATE_VAR_STRING(2, func_384(func_383(), iParam3)), 64);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1572887.f_106.f_151, &cVar57);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1572887.f_106.f_153, MISC::_CREATE_VAR_STRING(2, "NM_PLAYLIST_MATCHMADE_PLAYERS", 1));
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_106.f_154);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_106.f_155);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_106.f_156);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_106.f_157);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_106.f_158);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_106.f_159);
	}
	if ((!GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()) && func_385(255, 0)) && !bParam8)
	{
		func_386("NM_MATCHMAKING_WARNING");
	}
	func_387(10);
	return 1;
}

bool func_302(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

var func_303(int iParam0)
{
	struct<7> Var0[7];
	var uVar50;
	int iVar51;
	int iVar52;
	int iVar53;

	iVar51 = GANG::_0xD1BF325C8252A982(iParam0, &Var0);
	if (iVar51 == 0)
	{
		return uVar50;
	}
	iVar52 = 0;
	iVar52 = 0;
	while (iVar52 <= (iVar51 - 1))
	{
		iVar53 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var0[iVar52 /*7*/]));
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar53))
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar50, iVar53);
		}
		iVar52++;
	}
	return uVar50;
}

void func_304(var uParam0)
{
	struct<17> Var0;

	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam0))
	{
		return;
	}
	Var0.f_16.f_1 = -1;
	Var0.f_16.f_2 = -1;
	Var0.f_16.f_3 = -1;
	Var0.f_16.f_3.f_1 = -1;
	Var0 = 51;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Var0.f_4 = 3;
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Var0, 27, 28, &uParam0);
}

int func_305(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_388() && !bParam3)
	{
		return 0;
	}
	if (!bParam2)
	{
		func_389(0);
	}
	func_390();
	if (func_385(255, 0))
	{
		if (GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) != PLAYER::PLAYER_ID())
		{
			if (!bParam2 && bParam1)
			{
				func_391(1);
			}
		}
	}
	if (NETWORK::NETWORK_IS_SESSION_ACTIVE())
	{
		NETWORK::_NETWORK_SESSION_SET_PLAYER_FLAGS(0);
	}
	func_392();
	func_387(21);
	Global_1572887.f_106.f_91.f_1 = Global_1572887.f_106.f_9;
	Global_1572887.f_106.f_91.f_2 = iParam0;
	Global_1572887.f_106.f_91.f_4 = (MISC::GET_GAME_TIMER() - Global_1572887.f_106.f_76);
	func_393();
	return 1;
}

var func_306(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	var uVar4;

	Var0 = iParam4;
	Var0.f_1 = iParam3;
	Var0.f_2 = sParam1;
	Var0.f_3 = sParam2;
	uVar4 = _NAMESPACE77::_0x339E16B41780FC35(uParam0, &Var0, iParam5);
	return uVar4;
}

int func_307(int iParam0)
{
	if (func_394(&(Global_1102219.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_308(int iParam0)
{
	if (func_395(&(Global_1102219.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_309(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_310(vector3 vParam0, var uParam3, int iParam4)
{
	var uVar0;
	int iVar1;
	int iVar2;

	uVar0 = Global_1071686.f_23887.f_366[func_396(vParam0) /*272*/];
	iVar1 = func_397(uVar0);
	if (iVar1 <= 0)
	{
		return false;
	}
	else
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
		if (func_398(uVar0, iVar2, uParam3, iParam4))
		{
			return true;
		}
	}
	return false;
}

void func_311(vector3 vParam0, int iParam3, vector3 vParam4, int iParam7, float fParam8, float fParam9, bool bParam10, int iParam11, float fParam12, int iParam13)
{
	if (func_313(255) == 4)
	{
		return;
	}
	if (func_309(vParam0))
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
		func_314(0, 0, 0, 1);
	}
	func_307(0);
	func_307(3);
	Global_1102219.f_3919 = iParam11;
	Global_1102219.f_3920 = fParam12;
	Global_1102219.f_3921 = iParam13;
	func_315(&(Global_1102219.f_3849));
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
	func_316(&(Global_1102219.f_3888));
	Global_1102219.f_3888.f_6 = { vParam4 };
	Global_1102219.f_3888 = iParam7;
	Global_1102219.f_3888.f_5 = 1;
	Global_1102219.f_26.f_3341 = 0;
	Global_1102219.f_26.f_3342 = 0;
	func_317(Global_1102219.f_3849, 36);
	func_318(Global_1102219.f_3888, 36);
}

bool func_312(vector3 vParam0, var uParam3)
{
	if (func_309(vParam0))
	{
		return false;
	}
	if (func_313(255) == 4)
	{
		return false;
	}
	if (func_267(4, 255))
	{
	}
	func_307(4);
	func_399(&(Global_1102219.f_3879));
	Global_1102219.f_3879.f_6 = { vParam0 };
	Global_1102219.f_3879 = uParam3;
	Global_1102219.f_3879.f_5 = 1;
	Global_1102219.f_26.f_3341 = 0;
	Global_1102219.f_26.f_3342 = 0;
	func_400(Global_1102219.f_3879, 36);
	return true;
}

int func_313(int iParam0)
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

void func_314(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_401(iParam0);
	if (!func_402(1))
	{
		return;
	}
	if (bParam1)
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_403(128) && !func_404(19))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_405() == 4)
	{
		func_308(18);
	}
	func_406(1024);
}

void func_315(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_316(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_317(struct<29> Param0, var uParam29, int iParam30)
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

void func_318(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

bool func_319(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_320(int iParam0, int iParam1)
{
	return (func_230(iParam0) && (Global_1900838[iParam0 /*2*/].f_1 && iParam1) != 0);
}

int func_321(int iParam0, int iParam1)
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

int func_322(int iParam0, int iParam1)
{
	struct<30> Var0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (Global_1293346.f_458.f_1546 >= 40)
	{
		func_407();
		return -1;
	}
	Var0 = -1;
	Var0.f_5.f_1 = 11;
	Var0.f_18.f_1 = 10;
	Var0.f_4 = iParam0;
	Var0 = func_408();
	Var0.f_3 = iParam1;
	func_409(Var0, 0);
	return Var0;
}

void func_323(struct<2> Param0, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;

	if (!func_166(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (!func_410(Param0) && !func_273(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (func_411(Param0) == 0)
	{
	}
	if ((iParam3 == 0 || iParam3 == 1) || iParam3 == 4)
	{
		if (func_358(Param0) == 3)
		{
			func_412(1, -1706799532);
		}
		else if (func_358(Param0) == 4)
		{
			func_412(0, -1706799532);
		}
	}
	if ((func_358(Param0) == 3 || func_358(Param0) == 1) || ((bParam5 && func_358(Param0) == 4) && STATS::_0x01F4D242765C6B24(func_411(Param0))))
	{
		if (iParam3 != -1)
		{
			func_413(Param0, iParam3, iParam4, 255, 0);
		}
		else
		{
			func_413(Param0, 2, iParam4, 255, 0);
		}
	}
	func_414(Param0, 0);
	if (func_319(func_274(0), Param0))
	{
		func_415(1);
		func_416(0);
		func_417(0);
		func_418(1);
	}
	func_419(Param0);
	Global_1051252.f_45.f_1 = 1;
	iVar0 = func_420(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		MISC::_0x1096603B519C905F("");
	}
}

void func_324(int iParam0)
{
	Global_1139381.f_4912[iParam0 /*3*/] = UNLOCK::_UNLOCK_IS_NEW(Global_1835011[iParam0 /*72*/].f_3);
	Global_1139381.f_4912[iParam0 /*3*/].f_2 = UNLOCK::_UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*72*/].f_3);
	Global_1139381.f_4912[iParam0 /*3*/].f_1 = UNLOCK::_UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*72*/].f_3);
}

struct<2> func_325(int iParam0)
{
	if (!func_49(iParam0))
	{
		return func_256();
	}
	return Global_1835011[iParam0 /*72*/].f_1;
}

int func_326(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_421(32768))
	{
		return 0;
	}
	iVar0 = func_240();
	if (func_127(&(Global_1835011[iParam0 /*72*/].f_30), 512) && !func_127(&(Global_1835011[iParam0 /*72*/].f_30), 1024))
	{
		if (func_422())
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
		if (func_423(iParam0, iVar0))
		{
			vVar4 = { func_424(iParam0) };
			Global_1835011[iParam0 /*72*/].f_65 = VOLUME::_CREATE_VOLUME_SPHERE(vVar4, 0f, 0f, 0f, 19f, 19f, 19f);
			if (VOLUME::_DOES_VOLUME_EXIST(Global_1835011[iParam0 /*72*/].f_65))
			{
				Global_1835011[iParam0 /*72*/].f_28 = MAP::_0xA6EF0C54A3443E70(1673015813, Global_1835011[iParam0 /*72*/].f_65);
			}
		}
		else if (bVar3)
		{
			Global_1835011[iParam0 /*72*/].f_28 = MAP::_BLIP_ADD_FOR_COORD(1673015813, func_425(iParam0));
		}
		else
		{
			Global_1835011[iParam0 /*72*/].f_28 = MAP::_BLIP_ADD_FOR_COORD(1673015813, func_64(iParam0));
		}
		Global_1835011[iParam0 /*72*/].f_29 = 1673015813;
		bVar1 = true;
		if (iParam2 != -1)
		{
			if (bVar2)
			{
				func_426(iParam2, 4194304);
			}
			else
			{
				func_328(iParam2, 4194304);
			}
		}
		MAP::SET_BLIP_FLASH_TIMER(Global_1835011[iParam0 /*72*/].f_28, 71, Global_1835011[iParam0 /*72*/].f_3);
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*72*/].f_28))
	{
		return 0;
	}
	func_427(iParam0);
	if (bVar1)
	{
		MAP::SET_BLIP_SPRITE(Global_1835011[iParam0 /*72*/].f_28, Global_1835011[iParam0 /*72*/].f_27, true);
		if (iVar0 != -1)
		{
			MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(Global_1835011[iParam0 /*72*/].f_28, &(Global_1835011[iParam0 /*72*/].f_42));
		}
		if (!func_127(&(Global_1835011[iParam0 /*72*/].f_30), 1024))
		{
			MAP::_BLIP_SET_MODIFIER(Global_1835011[iParam0 /*72*/].f_28, 580546400);
			func_428(&(Global_1835011[iParam0 /*72*/].f_30), 1024);
		}
		if (func_127(&(Global_1835011[iParam0 /*72*/].f_30), 524288))
		{
			MAP::_BLIP_SET_MODIFIER(Global_1835011[iParam0 /*72*/].f_28, -401963276);
		}
		if (func_127(&(Global_1835011[iParam0 /*72*/].f_30), 1048576))
		{
			MAP::_BLIP_SET_MODIFIER(Global_1835011[iParam0 /*72*/].f_28, -1878373110);
			MAP::_BLIP_SET_MODIFIER(Global_1835011[iParam0 /*72*/].f_28, 231194138);
		}
	}
	return 1;
}

void func_327(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	if (Global_1900806 <= 0)
	{
		return;
	}
	if (!func_166(Param0))
	{
		return;
	}
	if (func_273(Param0))
	{
		func_323(Param0, 0, -1, 0, 0);
	}
	iVar0 = func_229(Param0);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = iVar0;
	if (Global_1900806 > 1)
	{
		Global_1900807[iVar1 /*2*/] = { Global_1900807[(Global_1900806 - 1) /*2*/] };
		Global_1900838[iVar1 /*2*/] = { Global_1900838[(Global_1900806 - 1) /*2*/] };
		func_429(&(Global_1900807[(Global_1900806 - 1) /*2*/]));
		Global_1900838[(Global_1900806 - 1) /*2*/] = { Var2 };
	}
	else
	{
		func_429(&(Global_1900807[iVar1 /*2*/]));
		Global_1900838[iVar1 /*2*/] = { Var2 };
	}
	Global_1900806 = (Global_1900806 - 1);
	if (Global_1900806 < 0)
	{
		Global_1900806 = 0;
	}
}

void func_328(int iParam0, int iParam1)
{
	if (!func_230(iParam0))
	{
		return;
	}
	Global_1900838[iParam0 /*2*/].f_1 = (Global_1900838[iParam0 /*2*/].f_1 - (Global_1900838[iParam0 /*2*/].f_1 && iParam1));
}

bool func_329(var uParam0)
{
	int iVar0;

	iVar0 = uParam0;
	return (iVar0 >= 0 && iVar0 < 64);
}

bool func_330(var uParam0, int iParam1)
{
	if (!func_329(uParam0))
	{
		return false;
	}
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam1) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(iParam1))
	{
		return false;
	}
	return MISC::_0x8F4F050054005C27(&(Global_1056141[iParam1 /*471*/].f_15.f_20), uParam0);
}

void func_331(int iParam0)
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
		func_430();
	}
	PLAYER::SET_PLAYER_INVINCIBLE(iVar0, false);
	if (!PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
	{
		ENTITY::SET_ENTITY_COLLISION(iVar1, true, false);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar1, true, false);
	}
}

void func_332(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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

bool func_333(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return UIFEED::_0x59FA676177DBE4C9(iParam0) == 4;
}

var func_334(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_335(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if ((bParam4 && iParam1 == -915411861) && func_431(iParam0, 59806960))
	{
		iParam1 = 59806960;
	}
	if (func_432(iParam0))
	{
		return func_434(func_433(iParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_435(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_336(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_240() == 0)
	{
		return func_436(iParam0);
	}
	return iParam0 <= func_437();
}

int func_337(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1957416901:
			return 7;
		case -1185533313:
			return 10;
		case -784189810:
			return 0;
		case -79999383:
			return 6;
		case -63669280:
			return 2;
		case 218185167:
			return 8;
		case 851921060:
			return 3;
		case 1457860192:
			return 5;
		case 1579717899:
			return 1;
		case 1744858848:
			return 9;
		case 2028478397:
			return 4;
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

int func_338(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1918441640:
			return 2;
		case -1581094459:
			return 8;
		case -1437925683:
			return 12;
		case -725256130:
			return 17;
		case -632356431:
			return 14;
		case -559809431:
			return 10;
		case -548018579:
			return 13;
		case -533426613:
			return 1;
		case -457802746:
			return 3;
		case -222655798:
			return 16;
		case 10577687:
			return 15;
		case 424482930:
			return 6;
		case 1153715636:
			return 5;
		case 1175500245:
			return 11;
		case 1272390114:
			return 7;
		case 1788958412:
			return 4;
		case 1816768801:
			return 0;
		case 1842544025:
			return 9;
		case 1943481570:
			return 18;
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

bool func_339(var uParam0)
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

bool func_340(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

int func_341(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	return DATAFILE::_DATAFILE_GET_NUM_NODES(uParam0);
}

int func_342(int iParam0)
{
	return Global_1297047[iParam0 /*37*/].f_9;
}

struct<2> func_343(int iParam0)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	MISC::_COPY_MEMORY(&Var0, &(Global_1297047[iParam0 /*37*/].f_6), 2);
	return Var0;
}

var func_344(var uParam0)
{
	return func_438(uParam0, 60, 1);
}

bool func_345(var uParam0, int iParam1, int iParam2, int iParam3)
{
	*uParam0 = Global_1139381.f_7;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = func_439(iParam1);
	uParam0->f_4 = iParam2;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

void func_346(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_440(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_441(iVar0);
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
			uParam2->f_5 = func_442(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_443(iVar0);
		}
		uParam1->f_2 = 162343104;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_444(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_7 = func_445(iVar0);
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

struct<2> func_347(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_446(iParam0, &(Global_1071686.f_636), func_276(iParam1));
			break;
		case 3:
			Var0.f_1 = func_446(iParam0, &(Global_1071686.f_636.f_602), func_276(iParam1));
			break;
		case 4:
			Var0.f_1 = func_446(iParam0, &(Global_1071686.f_636.f_2104), func_276(iParam1));
			break;
		case 5:
			Var0.f_1 = func_446(iParam0, &(Global_1071686.f_636.f_12606), func_276(iParam1));
			break;
		case 6:
			Var0.f_1 = func_446(iParam0, &(Global_1071686.f_636.f_12908), func_276(iParam1));
			break;
		case 7:
			Var0.f_1 = func_446(iParam0, &(Global_1071686.f_636.f_15910), func_276(iParam1));
			break;
		case 8:
			Var0.f_1 = func_446(iParam0, &(Global_1071686.f_636.f_16512), func_276(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_256();
	}
	return Var0;
}

int func_348(bool bParam0, bool bParam1, bool bParam2)
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

struct<5> func_349(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_447(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_448(iParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_449(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_450(bParam1) };
			if (bParam2 && func_451(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_452(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_452(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_453(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_454(bParam1) };
			switch (func_455(iParam0))
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
			if (func_456(iParam0, -1823706425))
			{
				Var0 = { func_449(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_456(iParam0, -1483207246))
			{
				Var0 = { func_449(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1911121386))
			{
				Var0 = { func_449(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_456(iParam0, -1653629781))
			{
				Var0 = { func_449(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_457(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_456(iParam0, -1653629781))
			{
				Var0 = { func_449(1384535894, Var0, 1784584921, bParam1) };
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

struct<16> func_350(int iParam0, struct<4> Param1, int iParam5, int iParam6, bool bParam7)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_4 = { Param1 };
	Var0 = { func_449(iParam0, Var0.f_4, iParam5, 1) };
	Var0.f_8 = iParam0;
	Var0.f_9 = iParam6;
	Var0.f_11 = iParam5;
	if (bParam7)
	{
		Var0.f_15 = func_458(iParam0, joaat("DEFAULT"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_459() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_351(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_460(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_462(func_461(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_463(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_352(int iParam0, struct<17> Param1)
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

bool func_353(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

void func_354(int iParam0)
{
	int iVar0;
	int iVar1;

	VOLUME::_0x748C5F51A18CB8F0(0);
	if (!func_353(iParam0))
	{
		return;
	}
	func_464(iParam0, 0);
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (func_465(iVar0))
		{
			if (func_467(func_466(iVar0, 1, 1)) == iParam0)
			{
				func_468(iVar0, 0);
				func_469(iVar0, 0, 350);
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 17)
	{
		if (func_470(iVar1))
		{
			if (func_471(iVar1) == iParam0)
			{
				func_472(iVar1, 0);
			}
		}
		iVar1++;
	}
	VOLUME::_0x748C5F51A18CB8F0(1);
}

bool func_355(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_356()
{
	return Global_1102219.f_3672;
}

struct<2> func_357(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

int func_358(struct<2> Param0)
{
	int iVar0;

	if (!func_166(Param0))
	{
		return -1;
	}
	iVar0 = func_473(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1071686.f_19550.f_1[iVar0 /*3*/].f_2;
}

void func_359(var uParam0, int iParam1)
{
	func_474(uParam0, iParam1);
}

void func_360(int iParam0)
{
	struct<16> Var0;

	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1939493[iParam0 /*16*/].f_10)))
	{
		return;
	}
	Global_1939493[iParam0 /*16*/] = { Var0 };
	Global_1939493.f_161 = (Global_1939493.f_161 - 1);
	if (Global_1939493.f_161 < 0)
	{
		Global_1939493.f_161 = 0;
	}
}

void func_361(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_286() - fParam1);
	func_475(uParam0, 1);
	func_476(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_362(int iParam0)
{
	if (!func_477(iParam0))
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

void func_363(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

bool func_364(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_478(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_479(iParam0))
	{
		return false;
	}
	if (func_480(iParam0))
	{
		return false;
	}
	if ((Global_1900736.f_67 && !func_481(iParam0, 1)) || func_421(32768))
	{
		if (!func_481(iParam0, 262144) || !Global_1904651.f_8686)
		{
			return false;
		}
	}
	if (!func_482())
	{
		return false;
	}
	return true;
}

void func_365(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904651[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904651[iParam0] = uVar0;
}

bool func_366(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951255[iParam0 /*23*/].f_1 && iParam1) != 0;
}

void func_367(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_483(iParam0, 1);
	func_484(iParam0, 1);
	func_485(iParam0, 128);
}

bool func_368(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam0 == 3)
	{
		return iParam1 != -1;
	}
	return iParam1 != 0;
}

bool func_369(int iParam0)
{
	int iVar0;

	iVar0 = GANG::_0x901E0DC25080C8B9(iParam0);
	if (GANG::_0x0F99F6436528A089(iVar0) && !GANG::_0x424B17A7DC5C90BC(iParam0))
	{
		return false;
	}
	return true;
}

void func_370(var uParam0)
{
	MISC::_COPY_MEMORY(&(Global_1572887.f_106.f_17), uParam0, 57);
}

void func_371(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	Global_1572887.f_106 = iParam0;
	Global_1572887.f_106.f_9 = iParam1;
	Global_1572887.f_106.f_10 = iParam2;
	if (bParam3)
	{
		func_486();
	}
}

void func_372(struct<2> Param0, bool bParam2)
{
	Global_1572887.f_106.f_11 = { Param0 };
	if (bParam2)
	{
		func_486();
	}
}

void func_373(int iParam0)
{
	Global_1572887.f_106.f_15 = iParam0;
}

void func_374(int iParam0)
{
	Global_1572887.f_106.f_13 = iParam0;
}

void func_375(int iParam0, bool bParam1)
{
	Global_1572887.f_106.f_74 = iParam0;
	if (bParam1)
	{
		func_486();
	}
}

bool func_376()
{
	if (func_383() != 0)
	{
		return false;
	}
	if (Global_1572887.f_106.f_9 >= 5 && Global_1572887.f_106.f_9 <= 8)
	{
		return false;
	}
	return true;
}

int func_377(struct<2> Param0)
{
	if (func_487())
	{
		return 0;
	}
	if (!func_166(Param0))
	{
		return 0;
	}
	Global_1051213 = { Param0 };
	return 1;
}

void func_378()
{
	Global_1056141[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*471*/].f_15.f_11 = 0;
}

void func_379(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<8> Var3;

	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_106.f_153);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_106.f_154);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_106.f_155);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_106.f_156);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_106.f_157);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_106.f_158);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_106.f_159);
	iVar0 = func_488(Param0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = func_489(iVar0);
	if (iVar1 == -1)
	{
		return;
	}
	uVar2 = func_490(iVar0);
	Var3 = { func_491(iVar1, uVar2) };
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1572887.f_106.f_151, MISC::_CREATE_VAR_STRING(2, &Var3));
}

int func_380(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_492();
	}
	if (!func_493(bParam1, bParam1, !bParam1))
	{
		return 0;
	}
	func_494(iParam0);
	Global_1896738.f_386 = 1;
	Global_1896738.f_387 = bParam1;
	return 1;
}

char* func_381(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_495(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

char* func_382(int iParam0)
{
	int iVar0;

	iVar0 = func_496(iParam0);
	if (iVar0 == Global_265354.f_1[0])
	{
		return "NM_BUCKET_RACE";
	}
	if (iVar0 == Global_265354.f_1[1])
	{
		return "NET_PLAYLIST_FEATURED_SERIES_001";
	}
	if (iVar0 == Global_265354.f_1[5])
	{
		return "NET_PLAYLIST_SPECIAL_SERIES_1";
	}
	if (iVar0 == Global_265354.f_1[6])
	{
		return "NET_PLAYLIST_SPECIAL_SERIES_2";
	}
	if (iVar0 == Global_265354.f_1[7])
	{
		return "NET_PLAYLIST_ELIMINATION_SMALL";
	}
	if (iVar0 == Global_265354.f_1[8])
	{
		return "NET_PLAYLIST_ELIMINATION_MEDIUM";
	}
	if (iVar0 == Global_265354.f_1[9])
	{
		return "NET_PLAYLIST_ELIMINATION_LARGE";
	}
	if (iVar0 == Global_265354.f_1[2])
	{
		return "NET_PLAYLIST_ADVERSARY_SERIES_SMALL";
	}
	if (iVar0 == Global_265354.f_1[3])
	{
		return "NET_PLAYLIST_ADVERSARY_SERIES_MEDIUM";
	}
	if (iVar0 == Global_265354.f_1[4])
	{
		return "NET_PLAYLIST_ADVERSARY_SERIES_LARGE";
	}
	if (iVar0 == Global_265354.f_1[15])
	{
		return "NM_BUCKET_ORBIS_SERIES_1";
	}
	if (iVar0 == Global_265354.f_1[16])
	{
		return "NM_BUCKET_ORBIS_SERIES_2";
	}
	if (iVar0 == Global_265354.f_1[17])
	{
		return "NM_BUCKET_ORBIS_SERIES_3";
	}
	if (iVar0 == Global_265354.f_1[19])
	{
		return "NET_PLAYLIST_CAPTURE";
	}
	if (iVar0 == Global_265354.f_1[18])
	{
		return "NET_PLAYLIST_SHOOTOUT";
	}
	return "Unmapped bucket hash";
}

int func_383()
{
	return Global_1572887.f_106;
}

char* func_384(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "NM_BUCKET_EIGHT_PLAYER";
				case 1:
					return "NM_BUCKET_RACE";
				case 2:
					return "NM_BUCKET_TWELVE_PLAYER";
				case 3:
					return "NM_BUCKET_ADVERSARIAL";
				case 6:
					return "NM_BUCKET_NOMINATED_SERIES";
				case 5:
					return "NM_BUCKET_NOMINATED_SERIES_SMALL";
				case 7:
					return "NM_BUCKET_NOMINATED_SERIES_MEDIUM";
				case 8:
					return "NM_BUCKET_NOMINATED_SERIES_LARGE";
				case 23:
					return "NM_BUCKET_MISSION_2_PLAYER";
				case 24:
					return "NM_BUCKET_FOUR_PLAYER";
				case 25:
					return "NM_BUCKET_EIGHT_PLAYER";
				case 26:
					return "NM_BUCKET_MISSION_10_PLAYER";
				case 27:
					return "NM_BUCKET_TWELVE_PLAYER";
				case 28:
					return "NM_BUCKET_ADVERSARIAL";
				default:
					break;
			}
			break;
	}
	return "Invalid Net Matchmaking Bucket";
}

bool func_385(int iParam0, bool bParam1)
{
	bool bVar0;

	bVar0 = false;
	if (iParam0 == 255)
	{
		bVar0 = true;
		iParam0 = func_356();
	}
	else if (iParam0 == func_356())
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam1)
		{
			return Global_1296859.f_14;
		}
	}
	if (!bVar0)
	{
		if (!Global_1296859.f_22[iParam0])
		{
			return false;
		}
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Global_1296859.f_154[iParam0]))
		{
			return false;
		}
	}
	if (GANG::_0x149A2751AB66AC02(GANG::_0x901E0DC25080C8B9(Global_1296859.f_154[iParam0])) <= 1)
	{
		return false;
	}
	return true;
}

var func_386(char* sParam0)
{
	char* sVar0;
	var uVar1;

	sVar0 = MISC::_CREATE_VAR_STRING(2, sParam0);
	uVar1 = func_497(sVar0, -2, 0, 0, 0, 1);
	return uVar1;
}

void func_387(int iParam0)
{
	Global_1572887.f_106.f_75 = iParam0;
}

bool func_388()
{
	return func_277() > 11;
}

void func_389(bool bParam0)
{
	int iVar0;
	bool bVar1;
	struct<31> Var2;

	iVar0 = PLAYER::PLAYER_ID();
	bVar1 = false;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		bVar1 = GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(iVar0)) == iVar0;
	}
	if (NETWORK::_0x8FB7C254CFCBF78E(&(Global_1572887.f_360)) && (bParam0 || bVar1))
	{
		NETWORK::_0xE72E5C1289BD1F40(&(Global_1572887.f_360));
	}
	Var2.f_5 = 2;
	Var2.f_22 = -1;
	Var2.f_23 = -1;
	Var2.f_24 = -1;
	Var2.f_29 = -1;
	Global_1572887.f_360 = { Var2 };
}

void func_390()
{
	if (UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("PLAYER_MENU")))
	{
		UIAPPS::_CLOSE_APP_BY_HASH(joaat("PLAYER_MENU"));
	}
}

void func_391(int iParam0)
{
	int iVar0;
	int iVar1;

	POSSE::_0xC08AFF658B2E51DA(&iVar0);
	if (iVar0 != 0)
	{
		func_298(&(Global_1194053.f_3), 32);
		func_298(&(Global_1194053.f_4), 12);
		Global_1194053.f_498 = iVar0;
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()) && GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
		{
			func_298(&(Global_1194053.f_4), 2);
		}
		POSSE::_0xC08BFF658B2E51DA(0);
		Global_1194053.f_5[5] = 0;
		func_298(&(Global_1194053.f_5[5]), 1);
	}
	Global_1194053.f_5[3] = 0;
	func_298(&(Global_1194053.f_5[3]), 1);
	iVar1 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (!GANG::_0xD6F6ACF4392187FB(iVar1))
	{
		func_298(&(Global_1194053.f_5[3]), 6);
		return;
	}
	if (!GANG::_0x0F99F6436528A089(iVar1))
	{
		func_298(&(Global_1194053.f_5[3]), 6);
		return;
	}
	GANG::_0x0A04A07BC3074EDB(iParam0);
}

void func_392()
{
	Global_1956200.f_1431.f_108 = 0;
	Global_1956200.f_1431.f_108.f_1 = 0f;
	Global_1956200.f_1431.f_108.f_3 = 0f;
	Global_1956200.f_1431.f_108.f_2 = 0f;
	Global_1956200.f_1431.f_108.f_4 = 0f;
	Global_1956200.f_1431.f_108.f_6 = 0f;
	Global_1956200.f_1431.f_108.f_5 = 0f;
}

void func_393()
{
	if (Global_1572887.f_106.f_91)
	{
		return;
	}
	Global_1572887.f_106.f_91 = 1;
	TELEMETRY::_TELEMETRY_MATCH_QUEUE(Global_1572887.f_106.f_91.f_1, Global_1572887.f_106.f_91.f_2, Global_1572887.f_106.f_91.f_3, Global_1572887.f_106.f_91.f_4, Global_1572887.f_106.f_91.f_5, &(Global_1572887.f_106.f_91.f_6));
}

bool func_394(var uParam0, int iParam1, int iParam2)
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

bool func_395(var uParam0, int iParam1, int iParam2)
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

int func_396(vector3 vParam0)
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

int func_397(var uParam0)
{
	struct<4> Var0;

	Var0 = Global_1071686.f_23887.f_366.f_4085;
	Var0.f_2 = 1593794963;
	Var0.f_3 = uParam0;
	return DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
}

bool func_398(var uParam0, int iParam1, var uParam2, int iParam3)
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

void func_399(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_400(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

void func_401(int iParam0)
{
	Global_1102219.f_26.f_12 = iParam0;
}

bool func_402(int iParam0)
{
	return (Global_1102219.f_26.f_7 && iParam0) != 0;
}

bool func_403(int iParam0)
{
	return (Global_1102219.f_26.f_9 && iParam0) != 0;
}

bool func_404(int iParam0)
{
	return (Global_1102219.f_4[Global_1106305[iParam0 /*2*/]] && Global_1106305[iParam0 /*2*/].f_1) == Global_1106305[iParam0 /*2*/].f_1;
}

int func_405()
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

void func_406(int iParam0)
{
	if (func_498(iParam0))
	{
		return;
	}
	Global_1102219.f_26.f_9 = (Global_1102219.f_26.f_9 || iParam0);
}

void func_407()
{
}

var func_408()
{
	Global_1293346.f_458.f_1552++;
	if (Global_1293346.f_458.f_1552 >= 2147483646)
	{
		Global_1293346.f_458.f_1552 = 0;
	}
	return Global_1293346.f_458.f_1552;
}

void func_409(struct<30> Param0, int iParam30)
{
	switch (iParam30)
	{
		case 0:
			Global_1293346.f_458.f_44[func_499() /*30*/] = { Param0 };
			func_500((func_499() + 1 % 40));
			Global_1293346.f_458.f_1546++;
			break;
		case 1:
			Global_1293346.f_458.f_1245[func_501() /*30*/] = { Param0 };
			func_502((func_501() + 1 % 10));
			Global_1293346.f_458.f_1547++;
			break;
	}
}

bool func_410(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_358(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_411(struct<2> Param0)
{
	return func_503(Param0);
}

int func_412(bool bParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1102219.f_16)
	{
		return 0;
	}
	if (!func_504())
	{
		return 0;
	}
	if (!func_505())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_506(&Global_0, 8);
	}
	func_506(&Global_0, 1);
	return 1;
}

void func_413(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;

	iVar0 = func_507(func_420(Param0));
	iVar1 = func_411(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_240() == 0)
	{
		Var2 = Global_265377.f_124517.f_71.f_17;
		func_508(Param0, &Var2);
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

void func_414(struct<2> Param0, int iParam2)
{
	if (!func_166(Param0))
	{
		return;
	}
	if (iParam2 == 0 || iParam2 == -1)
	{
		func_509(Param0);
	}
	else
	{
		func_510(Param0, iParam2);
	}
	func_511();
}

void func_415(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_512(&Global_1940258, 8388608);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_513(&Global_1940258, 8388608);
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

void func_416(bool bParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2[24];

	iVar0 = 0;
	while (iVar0 <= 58)
	{
		iVar1 = func_514(iVar0, 1);
		if ((iVar1 == joaat("CRIME_MURDER_PLAYER") || iVar1 == joaat("CRIME_MURDER_PLAYER_HORSE")) || iVar1 == joaat("CRIME_TRAMPLE_PLAYER"))
		{
		}
		else
		{
			if (bParam0)
			{
				StringCopy(&cVar2, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_515(cVar2);
			}
			else
			{
				func_516();
			}
			LAW::_0xF611DE44AEB36A1D(iVar1, bParam0);
		}
		iVar0++;
	}
}

int func_417(bool bParam0)
{
	if (!bParam0 && func_517(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

void func_418(int iParam0)
{
	Global_1900736 = (Global_1900736 || iParam0);
}

int func_419(struct<2> Param0)
{
	return func_519(func_518(Param0));
}

int func_420(var uParam0, var uParam1)
{
	return uParam0;
}

bool func_421(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_422()
{
	int iVar0;

	iVar0 = UIFEED::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && UIFEED::_0x59FA676177DBE4C9(iVar0) == 4);
}

bool func_423(int iParam0, int iParam1)
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

Vector3 func_424(int iParam0)
{
	return Global_1835011[iParam0 /*72*/].f_19;
}

Vector3 func_425(int iParam0)
{
	return Global_1835011[iParam0 /*72*/].f_19;
}

void func_426(int iParam0, int iParam1)
{
	if (!func_230(iParam0))
	{
		return;
	}
	Global_1900838[iParam0 /*2*/].f_1 = (Global_1900838[iParam0 /*2*/].f_1 || iParam1);
}

void func_427(int iParam0)
{
	if (func_240() == -1)
	{
		return;
	}
	if (Global_1835011[iParam0 /*72*/].f_3 != 0 && UNLOCK::_UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*72*/].f_3))
	{
		UNLOCK::_UNLOCK_SET_NEW(Global_1835011[iParam0 /*72*/].f_3, false);
	}
	func_324(iParam0);
}

void func_428(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_429(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

void func_430()
{
	if (!Global_1102219.f_16)
	{
		return;
	}
	Global_1071686.f_28662.f_5 = 1;
	AUDIO::_0x531A78D6BF27014B("rdro_gamemode_transition_sounds");
	AUDIO::_0x531A78D6BF27014B("rdro_gamemode_generic_sounds");
}

bool func_431(int iParam0, int iParam1)
{
	if (!func_520(iParam0, 0))
	{
		return false;
	}
	if (func_432(iParam0))
	{
		return func_521(func_433(iParam0, 0), iParam1, 0);
	}
	return ITEMDATABASE::_0xDEE7B3C76ED664BE(iParam0, iParam1) > 0;
}

bool func_432(int iParam0)
{
	if (func_522(iParam0, 75135761))
	{
		return true;
	}
	return false;
}

int func_433(int iParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_520(iParam0, 0))
	{
		return func_524(func_523(iParam0), bParam1);
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

int func_434(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_525(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_435(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*uParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_520(iParam0, 0))
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
		func_526(iParam0, iParam1, uParam2, *uParam3);
	}
	return true;
}

bool func_436(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iParam0, 0);
}

int func_437()
{
	if (func_240() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

var func_438(var uParam0, int iParam1, int iParam2)
{
	var uVar0;

	uParam0->f_2 = iParam1;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, uParam0))
	{
	}
	return uVar0;
}

int func_439(int iParam0)
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

int func_440(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_527(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_441(int iParam0)
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

int func_442(int iParam0)
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

int func_443(int iParam0)
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

int func_444(int iParam0)
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

int func_445(int iParam0)
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

int func_446(int iParam0, var uParam1, int iParam2)
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

struct<4> func_447(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_528(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1293346))
			{
				Global_1293346 = { func_449(joaat("CHARACTER"), func_459(), -1591664384, bParam0) };
			}
			return Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_12)))
			{
				Global_1293346.f_12 = { func_449(joaat("CHARACTER"), func_459(), -1591664384, 0) };
			}
			return Global_1293346.f_12;
		}
	}
	return func_449(joaat("CHARACTER"), func_459(), -1591664384, bParam0);
}

int func_448(int iParam0)
{
	vector3 vVar0;

	if (!func_520(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_449(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_520(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_528(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

struct<4> func_450(bool bParam0)
{
	int iVar0;

	iVar0 = func_528(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_4)))
		{
			Global_1293346.f_4 = { func_449(923904168, func_447(bParam0), -740156546, bParam0) };
		}
		return Global_1293346.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_16)))
		{
			Global_1293346.f_16 = { func_449(923904168, func_447(bParam0), -740156546, 0) };
		}
		return Global_1293346.f_16;
	}
	return func_449(923904168, func_447(bParam0), -740156546, 0);
}

bool func_451(int iParam0, bool bParam1)
{
	if (func_455(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_529();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_452(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_530(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_453(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_531(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_454(bool bParam0)
{
	int iVar0;

	iVar0 = func_528(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_8)))
		{
			Global_1293346.f_8 = { func_449(271701509, func_447(bParam0), 12999093, 0) };
		}
		return Global_1293346.f_8;
	}
	return func_449(271701509, func_447(bParam0), 12999093, 0);
}

int func_455(int iParam0)
{
	struct<2> Var0;

	if (!func_520(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_456(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_455(iParam0);
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
			if (func_532(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_457(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_533(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_458(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

struct<4> func_459()
{
	struct<4> Var0;

	return Var0;
}

bool func_460(int iParam0, var uParam1)
{
	var uVar0;

	uVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, uParam1);
	if (iParam0 == joaat("USE"))
	{
		if ((func_534(uParam1->f_8, iParam0, uVar0, 2048) || func_534(uParam1->f_8, iParam0, uVar0, 32768)) || func_534(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_534(uParam1->f_8, iParam0, uVar0, 4) || func_534(uParam1->f_8, iParam0, uVar0, 256)) || func_534(uParam1->f_8, iParam0, uVar0, 65536)) || func_534(uParam1->f_8, iParam0, uVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SPEND"))
	{
		if (((func_534(uParam1->f_8, iParam0, uVar0, 1) || func_534(uParam1->f_8, iParam0, uVar0, 8)) || func_534(uParam1->f_8, iParam0, uVar0, 65536)) || func_534(uParam1->f_8, iParam0, uVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SELL"))
	{
		if (((func_534(uParam1->f_8, iParam0, uVar0, 1) || func_534(uParam1->f_8, iParam0, uVar0, 16)) || func_534(uParam1->f_8, iParam0, uVar0, 2)) || func_534(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_534(uParam1->f_8, iParam0, uVar0, 8) || func_534(uParam1->f_8, iParam0, uVar0, 4096)) || func_534(uParam1->f_8, iParam0, uVar0, 256)) || func_534(uParam1->f_8, iParam0, uVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_461(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_462(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_535(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_535(iParam1, 2, 0, 0);
	return -1;
}

int func_463(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_535(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

void func_464(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_353(iParam0))
	{
		return;
	}
	if (func_536(iParam0, 2) && !bParam1)
	{
		return;
	}
	if (bParam1)
	{
		func_537(iParam0, 1);
	}
	else
	{
		func_538(iParam0, 1);
	}
	func_539(iParam0, bParam1);
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_471(iVar0) == iParam0)
		{
			func_472(iVar0, 0);
		}
		iVar0++;
	}
}

bool func_465(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_466(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 81:
			if (func_540(iParam0))
			{
				return joaat("LAW_REGION_VALENTINE_LOCKDOWN");
			}
			else
			{
				return joaat("LAW_REGION_VALENTINE");
			}
			break;
		case 111:
			if (func_540(iParam0))
			{
				return joaat("LAW_REGION_RHODES_LOCKDOWN");
			}
			else
			{
				return joaat("LAW_REGION_RHODES");
			}
			break;
		case 5:
			if (func_240() != -1 && func_541() == joaat("LAW_REGION_SAINT_DENIS_RURAL"))
			{
				return joaat("LAW_REGION_SAINT_DENIS_RURAL");
			}
			else
			{
				return joaat("LAW_REGION_SAINT_DENIS");
			}
			break;
		case 66:
			return joaat("LAW_REGION_MANICATO");
		case 83:
			return joaat("LAW_REGION_ANNESBURG");
		case 26:
			return joaat("LAW_REGION_STRAWBERRY");
		case 40:
			if (!bParam1 || func_240() != -1)
			{
				return joaat("LAW_REGION_BLACKWATER");
			}
			if (func_542(44))
			{
				return joaat("LAW_REGION_BLACKWATER");
			}
			else
			{
				return joaat("LAW_REGION_BLACKWATER_MAINGAME");
			}
			break;
		case 98:
			if (func_240() != -1)
			{
				return joaat("LAW_REGION_ROANOKE_RIDGE");
			}
			else
			{
				return joaat("LAW_REGION_VAN_HORN");
			}
			break;
		case 70:
			return joaat("LAW_REGION_CORNWALL");
		case 74:
			return joaat("LAW_REGION_EMERALD_RANCH");
		case 99:
			return joaat("LAW_REGION_BRAITHWAITE_MANOR");
		case 101:
			return joaat("LAW_REGION_CALIGA_HALL");
		case 62:
			return joaat("LAW_REGION_AGUASDULCES");
		case 3:
			return joaat("LAW_REGION_LAGRAS");
		case 33:
			return joaat("LAW_REGION_SISIKA");
		case 87:
			if (func_240() != -1)
			{
				return joaat("LAW_REGION_ROANOKE_RIDGE");
			}
			else
			{
				return joaat("LAW_REGION_BUTCHER_CREEK");
			}
			break;
		case 37:
			return joaat("LAW_REGION_FORT_WALLACE");
		case 60:
			if (func_240() != -1)
			{
				return joaat("LAW_REGION_GRIZZLIES");
			}
			else
			{
				return joaat("LAW_REGION_WAPITI");
			}
			break;
		case 135:
			return joaat("LAW_REGION_MACFARLANES_RANCH");
		case 127:
			return joaat("LAW_REGION_ARMADILLO");
		case 131:
			return joaat("LAW_REGION_RIDGEWOOD_FARM");
		case 121:
			return joaat("LAW_REGION_TUMBLEWEED");
		case 136:
			if (func_240() != -1)
			{
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS");
			}
			if (!bParam1)
			{
				return joaat("LAW_REGION_THIEVES_LANDING");
			}
			if (func_542(44))
			{
				return joaat("LAW_REGION_THIEVES_LANDING");
			}
			else
			{
				return joaat("LAW_REGION_THIEVES_LANDING_MAINGAME");
			}
			break;
		case 22:
			return joaat("LAW_REGION_PRONGHORN_RANCH");
		case 39:
			return joaat("LAW_REGION_BEECHERS_HOPE");
		case 4:
		case 9:
		case 45:
		case 63:
		case 76:
		case 84:
		case 104:
			break;
		case 116:
			return joaat("LAW_REGION_MANZANITA_POST");
	}
	if (bParam2)
	{
		iVar0 = func_543(iParam0);
		if (iVar0 != -1)
		{
			return func_544(iVar0, bParam1);
		}
	}
	return 0;
}

int func_467(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case joaat("LAW_REGION_OCCUPIED_CARAVAN_CAMP"):
			return -1;
		case joaat("LAW_REGION_CUMBERLAND_FOREST"):
		case joaat("LAW_REGION_VALENTINE"):
		case joaat("LAW_REGION_HEARTLANDS"):
		case joaat("LAW_REGION_CORNWALL"):
		case joaat("LAW_REGION_FORT_WALLACE"):
		case joaat("LAW_REGION_VALENTINE_LOCKDOWN"):
		case joaat("LAW_REGION_BUTCHER_CREEK"):
		case joaat("LAW_REGION_ROANOKE_RIDGE"):
		case joaat("LAW_REGION_EMERALD_RANCH"):
		case joaat("LAW_REGION_VAN_HORN"):
		case joaat("LAW_REGION_ANNESBURG"):
		case joaat("LAW_REGION_WAPITI"):
			return 1;
		case joaat("LAW_REGION_BAYOU_NWA"):
		case joaat("LAW_REGION_RHODES"):
		case joaat("LAW_REGION_RHODES_LOCKDOWN"):
		case joaat("LAW_REGION_LAGRAS"):
		case joaat("LAW_REGION_CALIGA_HALL"):
		case joaat("LAW_REGION_BLUEGILL_MARSH"):
		case joaat("LAW_REGION_SISIKA"):
		case joaat("LAW_REGION_BRAITHWAITE_MANOR"):
		case joaat("LAW_REGION_SAINT_DENIS"):
		case joaat("LAW_REGION_SCARLETT_MEADOWS"):
			return 2;
		case joaat("LAW_REGION_GRIZZLIES"):
			return 0;
		case joaat("LAW_REGION_MANICATO"):
		case joaat("LAW_REGION_GUAMA"):
		case joaat("LAW_REGION_AGUASDULCES"):
			return 5;
		case joaat("LAW_REGION_MANZANITA_POST"):
		case joaat("LAW_REGION_GREAT_PLAINS_MAINGAME"):
		case joaat("LAW_REGION_MANZANITA_POST_MAINGAME"):
		case joaat("LAW_REGION_GREAT_PLAINS"):
		case joaat("LAW_REGION_TALL_TREES"):
		case joaat("LAW_REGION_STRAWBERRY"):
		case joaat("LAW_REGION_BEECHERS_HOPE"):
		case joaat("LAW_REGION_TALL_TREES_MAINGAME"):
		case joaat("LAW_REGION_PRONGHORN_RANCH"):
		case joaat("LAW_REGION_BIG_VALLEY"):
		case joaat("LAW_REGION_BLACKWATER"):
		case joaat("LAW_REGION_BLACKWATER_MAINGAME"):
			return 3;
		case joaat("LAW_REGION_OLD_MAP_WILDERNESS_MAINGAME"):
		case joaat("LAW_REGION_OLD_MAP_WILDERNESS"):
		case joaat("LAW_REGION_ARMADILLO"):
		case joaat("LAW_REGION_TUMBLEWEED"):
		case joaat("LAW_REGION_MACFARLANES_RANCH"):
		case joaat("LAW_REGION_THIEVES_LANDING"):
		case joaat("LAW_REGION_THIEVES_LANDING_MAINGAME"):
		case joaat("LAW_REGION_RIDGEWOOD_FARM"):
			return 4;
	}
	return -1;
}

void func_468(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_465(iParam0))
	{
		return;
	}
	bVar0 = func_545(iParam0, 67108864);
	if (bParam1)
	{
		if (!bVar0)
		{
			func_547(iParam0, func_546());
			func_548(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_549(iParam0, 67108864);
		func_547(iParam0, -15);
	}
	func_550(iParam0);
}

void func_469(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (!func_465(iParam0))
	{
		return;
	}
	if (func_551(iParam0) && !bParam1)
	{
		return;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1887339[iParam0 /*36*/].f_6))
	{
		iVar0 = Global_1887339[iParam0 /*36*/].f_6;
	}
	else
	{
		iVar0 = func_552(iParam0);
	}
	bVar1 = func_545(iParam0, 33554432);
	if (bParam1)
	{
		iVar2 = func_553(iParam0);
		if (iParam2 > iVar2)
		{
			func_554(iParam0, func_546());
			func_555(iParam0, iParam2);
		}
		if (!bVar1)
		{
			func_548(iParam0, 33554432);
			if (VOLUME::_DOES_VOLUME_EXIST(iVar0))
			{
				if (iParam0 == 40)
				{
					iVar3 = 0;
				}
				else
				{
					iVar3 = 1;
				}
				PATHFIND::_0xF2A2177AC848B3A8(iVar0, 0, iVar3);
			}
		}
	}
	else if (bVar1)
	{
		func_549(iParam0, 33554432);
		func_554(iParam0, -15);
		if (VOLUME::_DOES_VOLUME_EXIST(iVar0))
		{
			PATHFIND::_0xF2A2177AC848B3A8(iVar0, 1, 1);
		}
	}
	func_556(iParam0);
}

bool func_470(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

int func_471(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 2:
			return 2;
		case 11:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 3:
			return 1;
		case 4:
			return 3;
		case 12:
			return 3;
		case 1:
			return 3;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 5;
		case 13:
			return 4;
		case 14:
			return 4;
		case 15:
			return 4;
		case 16:
			return 4;
		default:
			break;
	}
	return -1;
}

void func_472(int iParam0, bool bParam1)
{
	if (!func_470(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_557(iParam0, 1);
	}
	else
	{
		if (func_558(iParam0))
		{
			return;
		}
		func_559(iParam0, 1);
	}
	func_560(iParam0, bParam1);
}

int func_473(struct<2> Param0)
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
	if (!func_561(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1071686.f_19550 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_561(Global_1071686.f_19550.f_1[iVar8 /*3*/], &vVar3);
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

void func_474(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_475(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_476(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_477(int iParam0)
{
	return func_366(iParam0, 2);
}

bool func_478(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17411.f_2565[iParam0], iParam1);
}

bool func_479(int iParam0)
{
	if (func_481(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_480(int iParam0)
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

bool func_481(int iParam0, int iParam1)
{
	return (Global_1904651.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_482()
{
	if (!func_505())
	{
		return false;
	}
	return Global_1904651.f_8684;
}

void func_483(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		if (Global_1951255[iParam0 /*23*/].f_5 == 5 && !func_366(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_484(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1951255[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_485(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951255[iParam0 /*23*/].f_1 = (Global_1951255[iParam0 /*23*/].f_1 || iParam1);
}

void func_486()
{
	int iVar0;

	if (func_240() == -1)
	{
		return;
	}
	iVar0 = Global_1296859;
	if (func_302(Global_1572887.f_7, 1))
	{
		func_298(&(Global_1056141[iVar0 /*471*/].f_187.f_10), 4);
	}
	else
	{
		func_182(&(Global_1056141[iVar0 /*471*/].f_187.f_10), 4);
	}
	Global_1056141[iVar0 /*471*/].f_187 = Global_1572887.f_106;
	Global_1056141[iVar0 /*471*/].f_187.f_1 = Global_1572887.f_106.f_9;
	Global_1056141[iVar0 /*471*/].f_187.f_2 = Global_1572887.f_106.f_10;
	Global_1056141[iVar0 /*471*/].f_187.f_3 = { Global_1572887.f_106.f_11 };
	Global_1056141[iVar0 /*471*/].f_187.f_8 = Global_1572887.f_106.f_13;
	Global_1056141[iVar0 /*471*/].f_187.f_5 = { Global_1572887.f_360 };
	Global_1056141[iVar0 /*471*/].f_187.f_9 = Global_1572887.f_106.f_74;
	if (func_101(1024))
	{
		func_298(&(Global_1056141[iVar0 /*471*/].f_187.f_10), 2);
	}
	else
	{
		func_182(&(Global_1056141[iVar0 /*471*/].f_187.f_10), 2);
	}
}

bool func_487()
{
	return func_166(Global_1051213);
}

int func_488(struct<2> Param0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (func_319(Global_1196898.f_78[iVar0 /*20*/].f_7, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_489(int iParam0)
{
	return Global_1196898.f_78[iParam0 /*20*/].f_3;
}

var func_490(int iParam0)
{
	return Global_1196339.f_1[iParam0 /*26*/].f_3;
}

struct<8> func_491(int iParam0, var uParam1)
{
	struct<8> Var0;
	struct<5> Var8;

	if (((func_562(&Var8, iParam0) && func_563(&Var8)) && func_564(&Var8, uParam1)) && func_565(&Var8))
	{
		func_566(Var8, 37194763, &Var0, 1);
	}
	return Var0;
}

void func_492()
{
	if (!UIAPPS::_IS_ANY_APP_RUNNING())
	{
		return;
	}
	UIAPPS::_CLOSE_ALL_APPS();
}

bool func_493(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = func_568(bParam2, func_567(), 1, 0, 1, 1, 1, bParam0, bParam1);
	if (!bVar0)
	{
		return false;
	}
	return true;
}

void func_494(int iParam0)
{
	Global_1896738.f_390 = iParam0;
}

char* func_495(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_496(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Global_265377.f_117359.f_6758[iVar0] == iParam0)
		{
			return Global_265377.f_117359.f_6725[iVar0];
		}
		iVar0++;
	}
	return 0;
}

var func_497(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar17;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar17 = UIFEED::_SHOW_SIMPLE_RIGHT_TEXT(&Var0, &Var13, iParam5);
	return uVar17;
}

bool func_498(int iParam0)
{
	return (Global_1102219.f_26.f_9 && iParam0) == iParam0;
}

int func_499()
{
	if (Global_1293346.f_458.f_1548 >= 40 || Global_1293346.f_458.f_1548 < 0)
	{
		Global_1293346.f_458.f_1548 = 0;
	}
	return Global_1293346.f_458.f_1548;
}

void func_500(int iParam0)
{
	if (iParam0 >= 40 || iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_1293346.f_458.f_1548 = iParam0;
}

int func_501()
{
	if (Global_1293346.f_458.f_1549 >= 10 || Global_1293346.f_458.f_1549 < 0)
	{
		Global_1293346.f_458.f_1549 = 0;
	}
	return Global_1293346.f_458.f_1549;
}

void func_502(int iParam0)
{
	if (iParam0 >= 10 || iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_1293346.f_458.f_1549 = iParam0;
}

int func_503(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_561(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

bool func_504()
{
	return !Global_1572887.f_9;
}

bool func_505()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

void func_506(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_507(int iParam0)
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

void func_508(struct<2> Param0, var uParam2)
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
	switch (func_420(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_570(func_569(Param0));
			iVar5 = func_571(iVar4);
			if (!func_572(iVar5, 0))
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

int func_509(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_473(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_573(iVar0);
}

int func_510(struct<2> Param0, int iParam2)
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
	if (!func_561(Param0, &vVar0))
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
		func_561(Global_1071686.f_19550.f_1[iVar9 /*3*/], &vVar3);
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
			func_574(iVar9);
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

void func_511()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	while (iVar0 < Global_1071686.f_19550)
	{
		if (func_561(Global_1071686.f_19550.f_1[iVar0 /*3*/], &vVar1))
		{
		}
		iVar0++;
	}
}

void func_512(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_513(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_514(int iParam0, int iParam1)
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

void func_515(char[12] cParam0)
{
	Global_1939161.f_75.f_67 = { cParam0 };
}

void func_516()
{
	StringCopy(&(Global_1939161.f_75.f_67), "", 24);
}

bool func_517(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_575(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_576(iVar1))
	{
		if (Global_1071686.f_19648.f_24 && !func_577(iParam0))
		{
			return false;
		}
		return (MISC::IS_BIT_SET(Global_1071686.f_19648[iVar1], iVar2) || MISC::IS_BIT_SET(Global_39.f_110[iVar1], iVar2));
	}
	return MISC::IS_BIT_SET(Global_39.f_110[iVar1], iVar2);
}

int func_518(struct<2> Param0)
{
	int iVar0;

	if (!func_166(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_319(Global_1900736.f_1[iVar0 /*2*/], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_519(int iParam0)
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
		func_429(&(Global_1900736.f_1[0 /*2*/]));
		return 1;
	}
	func_429(&(Global_1900736.f_1[iParam0 /*2*/]));
	Global_1900736.f_66 = (Global_1900736.f_66 - 1);
	func_578(iParam0, Global_1900736.f_66);
	return 1;
}

bool func_520(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_521(int iParam0, int iParam1, bool bParam2)
{
	if (!func_579(iParam0))
	{
		return false;
	}
	if (ITEMDATABASE::_0xF540239F9937033B(iParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_580(iParam0, iParam1);
	}
	return true;
}

int func_522(int iParam0, int iParam1)
{
	if (!func_520(iParam0, 0))
	{
		return func_581(func_523(iParam0), iParam1);
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

int func_523(int iParam0)
{
	return iParam0;
}

int func_524(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_582(iParam0, 2))
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

bool func_525(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*uParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_579(iParam0))
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
		func_583(iParam0, iParam1, uParam2, *uParam3);
	}
	return true;
}

void func_526(int iParam0, int iParam1, var uParam2, int iParam3)
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
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_455((*uParam2)[iVar0 /*2*/]) != -829303394)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_527(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_584(iParam0, uParam1, &uVar0))
	{
		func_585(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

int func_528(bool bParam0)
{
	if (func_240() == -1)
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

bool func_529()
{
	return (func_586(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_587(func_449(joaat("WARDROBE"), func_447(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_530(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_520(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_458(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_449(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_528(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_528(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_531(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_528(0);
	*uParam1 = { func_449(iParam0, func_450(0), iParam3, 0) };
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

bool func_532(int iParam0, int iParam1, int iParam2)
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

bool func_533(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_528(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

int func_534(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_588(uParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_535(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_589(iParam0, iParam1, iParam2, iParam3);
}

bool func_536(int iParam0, int iParam1)
{
	if (!func_353(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_13 == -1)
	{
		return (Global_39.f_190[iParam0 /*12*/].f_5 && iParam1) != 0;
	}
	return (Global_1071686.f_21325[iParam0 /*12*/].f_5 && iParam1) != 0;
}

void func_537(int iParam0, int iParam1)
{
	if (!func_353(iParam0))
	{
		return;
	}
	if (!func_536(iParam0, iParam1))
	{
	}
	if (Global_1572887.f_13 == -1)
	{
		Global_39.f_190[iParam0 /*12*/].f_5 = (Global_39.f_190[iParam0 /*12*/].f_5 || iParam1);
		return;
	}
	Global_1071686.f_21325[iParam0 /*12*/].f_5 = (Global_1071686.f_21325[iParam0 /*12*/].f_5 || iParam1);
}

void func_538(int iParam0, int iParam1)
{
	if (!func_353(iParam0))
	{
		return;
	}
	if (Global_1572887.f_13 == -1)
	{
		Global_39.f_190[iParam0 /*12*/].f_5 = (Global_39.f_190[iParam0 /*12*/].f_5 - (Global_39.f_190[iParam0 /*12*/].f_5 && iParam1));
		return;
	}
	Global_1071686.f_21325[iParam0 /*12*/].f_5 = (Global_1071686.f_21325[iParam0 /*12*/].f_5 - (Global_1071686.f_21325[iParam0 /*12*/].f_5 && iParam1));
}

void func_539(int iParam0, bool bParam1)
{
	if (!func_353(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_591(func_590(iParam0));
	}
	else
	{
		func_592(func_590(iParam0));
	}
}

bool func_540(int iParam0)
{
	if (!func_465(iParam0))
	{
		return false;
	}
	return func_545(iParam0, 33554432);
}

int func_541()
{
	return Global_1939161.f_26;
}

bool func_542(int iParam0)
{
	if (!func_593(iParam0))
	{
		return false;
	}
	return func_594(iParam0);
}

int func_543(int iParam0)
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
	else if (iParam0 <= 121)
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

int func_544(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("LAW_REGION_BAYOU_NWA");
		case 1:
			return joaat("LAW_REGION_BIG_VALLEY");
		case 2:
			return joaat("LAW_REGION_BLUEGILL_MARSH");
		case 3:
			return joaat("LAW_REGION_CUMBERLAND_FOREST");
		case 4:
			if (!bParam1 || func_240() != -1)
			{
				return joaat("LAW_REGION_GREAT_PLAINS");
			}
			if (func_542(44))
			{
				return joaat("LAW_REGION_GREAT_PLAINS");
			}
			else
			{
				return joaat("LAW_REGION_GREAT_PLAINS_MAINGAME");
			}
			break;
		case 5:
			return joaat("LAW_REGION_GRIZZLIES");
		case 6:
			return joaat("LAW_REGION_GRIZZLIES");
		case 7:
			return joaat("LAW_REGION_GRIZZLIES");
		case 8:
			return joaat("LAW_REGION_GUAMA");
		case 9:
			return joaat("LAW_REGION_HEARTLANDS");
		case 10:
			return joaat("LAW_REGION_ROANOKE_RIDGE");
		case 11:
			return joaat("LAW_REGION_SCARLETT_MEADOWS");
		case 12:
			if (!bParam1 || func_240() != -1)
			{
				return joaat("LAW_REGION_TALL_TREES");
			}
			if (func_542(44))
			{
				return joaat("LAW_REGION_TALL_TREES");
			}
			else
			{
				return joaat("LAW_REGION_TALL_TREES_MAINGAME");
			}
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			if (!bParam1 || func_240() != -1)
			{
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS");
			}
			if (func_542(44))
			{
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS");
			}
			else
			{
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS_MAINGAME");
			}
			break;
	}
	return 0;
}

bool func_545(int iParam0, int iParam1)
{
	if (Global_1572887.f_13 == -1)
	{
		return (Global_8123[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1071686.f_19674[iParam0 /*11*/] && iParam1) != 0;
}

int func_546()
{
	return Global_1902818;
}

void func_547(int iParam0, int iParam1)
{
	if (Global_1572887.f_13 == -1)
	{
		Global_8123[iParam0 /*11*/].f_2 = iParam1;
		return;
	}
	Global_1071686.f_19674[iParam0 /*11*/].f_2 = iParam1;
}

void func_548(int iParam0, int iParam1)
{
	if (Global_1572887.f_13 == -1)
	{
		Global_8123[iParam0 /*11*/] = (Global_8123[iParam0 /*11*/] || iParam1);
	}
	else
	{
		Global_1071686.f_19674[iParam0 /*11*/] = (Global_1071686.f_19674[iParam0 /*11*/] || iParam1);
	}
}

void func_549(int iParam0, int iParam1)
{
	if (Global_1572887.f_13 == -1)
	{
		Global_8123[iParam0 /*11*/] = (Global_8123[iParam0 /*11*/] - (Global_8123[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1071686.f_19674[iParam0 /*11*/] = (Global_1071686.f_19674[iParam0 /*11*/] - (Global_1071686.f_19674[iParam0 /*11*/] && iParam1));
}

void func_550(int iParam0)
{
	if (!func_465(iParam0))
	{
		return;
	}
	if (func_595(iParam0))
	{
		func_596(iParam0);
	}
	else
	{
		func_597(iParam0);
	}
}

bool func_551(int iParam0)
{
	if (!func_465(iParam0))
	{
		return false;
	}
	return func_545(iParam0, 16777216);
}

int func_552(int iParam0)
{
	if (!func_465(iParam0))
	{
		return 0;
	}
	return Global_1887339[iParam0 /*36*/].f_4;
}

int func_553(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_465(iParam0))
	{
		return 0;
	}
	iVar0 = func_598(iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	iVar1 = func_600(func_599(iParam0));
	iVar2 = (iVar0 - iVar1);
	if (iVar2 < 0)
	{
		iVar2 = 0;
	}
	return iVar2;
}

void func_554(int iParam0, int iParam1)
{
	if (Global_1572887.f_13 == -1)
	{
		Global_8123[iParam0 /*11*/].f_1 = iParam1;
		return;
	}
	Global_1071686.f_19674[iParam0 /*11*/].f_1 = iParam1;
}

void func_555(int iParam0, int iParam1)
{
	if (!func_465(iParam0))
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	Global_8123[iParam0 /*11*/].f_3 = iParam1;
}

void func_556(int iParam0)
{
	if (!func_465(iParam0))
	{
		return;
	}
	if (func_540(iParam0) && func_601(iParam0))
	{
		func_591(func_602(iParam0, 0));
	}
	else
	{
		func_592(func_602(iParam0, 0));
	}
}

void func_557(int iParam0, int iParam1)
{
	if (!func_470(iParam0))
	{
		return;
	}
	if (!func_603(iParam0, iParam1))
	{
	}
	if (Global_1572887.f_13 == -1)
	{
		Global_39.f_263[iParam0] = (Global_39.f_263[iParam0] || iParam1);
		return;
	}
	Global_1071686.f_21398[iParam0] = (Global_1071686.f_21398[iParam0] || iParam1);
}

bool func_558(int iParam0)
{
	if (!func_470(iParam0))
	{
		return false;
	}
	return func_603(iParam0, 2);
}

void func_559(int iParam0, int iParam1)
{
	if (!func_470(iParam0))
	{
		return;
	}
	if (Global_1572887.f_13 == -1)
	{
		Global_39.f_263[iParam0] = (Global_39.f_263[iParam0] - (Global_39.f_263[iParam0] && iParam1));
		return;
	}
	Global_1071686.f_21398[iParam0] = (Global_1071686.f_21398[iParam0] - (Global_1071686.f_21398[iParam0] && iParam1));
}

void func_560(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_470(iParam0))
	{
		return;
	}
	if (iParam0 == 8)
	{
		return;
	}
	iVar0 = func_604(iParam0);
	if (bParam1)
	{
		func_591(iVar0);
	}
	else
	{
		func_592(iVar0);
	}
}

bool func_561(struct<2> Param0, var uParam2)
{
	if (!func_166(Param0))
	{
		return false;
	}
	func_605(uParam2);
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

bool func_562(var uParam0, int iParam1)
{
	if (!DATAFILE::_0x7907969497EA92F5(Global_1196898.f_455))
	{
		return false;
	}
	*uParam0 = Global_1196898.f_455;
	uParam0->f_2 = -1093317127;
	uParam0->f_3 = func_606(iParam1);
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_563(var uParam0)
{
	uParam0->f_2 = -310067910;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_564(var uParam0, var uParam1)
{
	uParam0->f_2 = -1739269194;
	uParam0->f_3 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_565(var uParam0)
{
	uParam0->f_2 = 1701407264;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_566(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_STRING(uParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

bool func_567()
{
	return Global_1915715.f_20643;
}

int func_568(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	if (!bParam7 && UIAPPS::_IS_ANY_APP_RUNNING())
	{
		return 0;
	}
	iVar0 = Global_1296859.f_154[Global_1296859];
	iVar1 = Global_1296859.f_8;
	bVar2 = ENTITY::IS_ENTITY_DEAD(iVar1);
	bVar3 = PED::_0xB655DB7582AEC805(iVar1);
	if (bVar2 || bVar3)
	{
		if (!bParam5)
		{
			return 0;
		}
	}
	else
	{
		if (!bParam4)
		{
			if (TASK::_0xEC7E480FF8BD0BED(Global_34))
			{
				return 0;
			}
			if (PED::_GET_PED_BLACKBOARD_BOOL(Global_34, "inInspectionMode"))
			{
				return 0;
			}
		}
		if (bParam0 && !PLAYER::IS_PLAYER_CONTROL_ON(iVar0))
		{
			if (bParam6 && Global_1102219.f_3 & 32 != 0)
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON(iVar1, "iMinigameSeat"))
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (!bParam1)
	{
		if (Global_1915715.f_20638 || Global_1915715.f_22504.f_1)
		{
			return 0;
		}
		if (TASK::_0xD04241BBF6D03A5E(Global_34) != 0)
		{
			return 0;
		}
	}
	if (func_607())
	{
		return 0;
	}
	if (Global_15)
	{
		return 0;
	}
	if (!bParam2 && (((Global_1940144.f_10 || Global_1940144.f_11) || Global_1940144.f_12) || Global_1940144.f_13))
	{
		return 0;
	}
	if (!bParam3)
	{
		iVar4 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (Global_1248240.f_9297 != -1)
		{
			return 0;
		}
		if (Global_1128574[iVar4 /*56*/].f_34 & 1 != 0 && Global_1128574[iVar4 /*56*/].f_34 & 2 == 0)
		{
			return 0;
		}
		if (Global_1130634.f_293)
		{
			return 0;
		}
		if (Global_1572887.f_106.f_75 > 11 && Global_1572887.f_106.f_75 < 15)
		{
			return 0;
		}
		else if (Global_1572887.f_106.f_75 > 15)
		{
			return 0;
		}
	}
	if (!bParam8)
	{
		if ((SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(2) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(8)) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(9))
		{
			if (Global_1048576 || Global_2883584)
			{
				return 0;
			}
			if (Global_1048581)
			{
				return 0;
			}
			if (Global_1048585)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_569(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_561(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_570(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_608(&Var1, iParam0))
	{
		iVar0 = ((func_609() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_571(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1257541[iParam0 /*5*/].f_2;
}

bool func_572(int iParam0, int iParam1)
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

int func_573(int iParam0)
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

int func_574(int iParam0)
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

int func_575(int iParam0, int iParam1)
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

bool func_576(int iParam0)
{
	int iVar0;

	iVar0 = func_610(iParam0);
	if (iVar0 < 336)
	{
		return false;
	}
	return true;
}

bool func_577(int iParam0)
{
	if (iParam0 == joaat("WS_MP_HIDEOUT_CLEMENS_COVE"))
	{
		return true;
	}
	return false;
}

void func_578(int iParam0, int iParam1)
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
			func_611((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_611(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_166(Global_1900736.f_1[0 /*2*/]))
	{
		func_414(Global_1900736.f_1[0 /*2*/], 3);
	}
}

bool func_579(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_BUY_AWARD_KEY_VALID(iParam0);
}

bool func_580(int iParam0, int iParam1)
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

int func_581(int iParam0, int iParam1)
{
	if (!func_582(iParam0, 2))
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

bool func_582(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

void func_583(int iParam0, int iParam1, var uParam2, int iParam3)
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
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_455((*uParam2)[iVar0 /*2*/]) != -829303394)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_584(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381.f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_439(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_585(var uParam0, int iParam1, var uParam2)
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

int func_586(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_612(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_528(bParam1), iParam0, iParam3);
}

int func_587(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_613(&uParam0, iParam4, bParam5, iParam6);
}

bool func_588(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_589(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_614(&(Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/]));
	Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/] = iParam0;
	Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

int func_590(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return joaat("STATE_LEMOYNE");
		case 3:
			return joaat("STATE_WEST_ELIZABETH");
		case 1:
			return joaat("STATE_NEW_HANOVER");
		case 0:
			return joaat("STATE_AMBARINO");
		case 4:
			return joaat("STATE_NEW_AUSTIN");
		case 5:
			return joaat("STATE_GUARMA");
		default:
			break;
	}
	return 0;
}

void func_591(int iParam0)
{
	int iVar0;

	if (func_615(iParam0) == 62)
	{
		MAP::_0x563FCB6620523917(-1145496915, -1482012664);
		MAP::_0x563FCB6620523917(-1043953850, -1482012664);
		MAP::_0x563FCB6620523917(-1783502982, -1482012664);
	}
	else
	{
		iVar0 = -1482012664;
		if (((func_616(iParam0) == 4 || func_616(iParam0) == 12) || func_471(func_616(iParam0)) == 4) || (func_603(func_616(iParam0), 8) && ((func_616(iParam0) == 2 || func_616(iParam0) == 0) || func_616(iParam0) == 10)))
		{
			iVar0 = -1305340593;
		}
		MAP::_0x563FCB6620523917(iParam0, iVar0);
	}
}

void func_592(int iParam0)
{
	if (func_615(iParam0) == 62)
	{
		MAP::_0x6786D7AFAC3162B3(-1145496915);
		MAP::_0x6786D7AFAC3162B3(-1043953850);
		MAP::_0x6786D7AFAC3162B3(-1783502982);
	}
	else if (MAP::_0xE38450DBCBC70E3D(iParam0, -1305340593) || MAP::_0xE38450DBCBC70E3D(iParam0, -1482012664))
	{
		MAP::_0x6786D7AFAC3162B3(iParam0);
	}
}

bool func_593(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_594(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_39.f_3643[iVar1], iVar2);
}

bool func_595(int iParam0)
{
	if (!func_465(iParam0))
	{
		return false;
	}
	return func_545(iParam0, 67108864);
}

void func_596(int iParam0)
{
	char cVar0[64];
	char* sVar8;

	StringCopy(&cVar0, func_617(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_618(cVar0);
	MAP::_0x563FCB6620523917(MISC::GET_HASH_KEY(sVar8), -1482012664);
}

void func_597(int iParam0)
{
	char cVar0[64];
	char* sVar8;
	int iVar9;

	StringCopy(&cVar0, func_617(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_618(cVar0);
	iVar9 = MISC::GET_HASH_KEY(sVar8);
	if (MAP::_0xE38450DBCBC70E3D(iVar9, -1305340593) || MAP::_0xE38450DBCBC70E3D(iVar9, -1482012664))
	{
		MAP::_0x6786D7AFAC3162B3(iVar9);
	}
}

int func_598(int iParam0)
{
	if (!func_465(iParam0))
	{
		return 0;
	}
	if (func_551(iParam0))
	{
		return -1;
	}
	return Global_8123[iParam0 /*11*/].f_3;
}

int func_599(int iParam0)
{
	if (!func_465(iParam0))
	{
		return -15;
	}
	if (Global_1572887.f_13 == -1)
	{
		return Global_8123[iParam0 /*11*/].f_1;
	}
	return Global_1071686.f_19674[iParam0 /*11*/].f_1;
}

int func_600(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;

	if (!func_619(iParam0))
	{
		return 0;
	}
	func_620(iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	fVar6 = ((((((BUILTIN::TO_FLOAT(iVar0) / 60f) + BUILTIN::TO_FLOAT(iVar1)) + (BUILTIN::TO_FLOAT(iVar2) * 60f)) + ((BUILTIN::TO_FLOAT(iVar3) * 24f) * 60f)) + (((BUILTIN::TO_FLOAT(iVar4) * 30.4375f) * 24f) * 60f)) + (((BUILTIN::TO_FLOAT(iVar5) * 365.25f) * 24f) * 60f));
	iVar7 = BUILTIN::ROUND(fVar6);
	return iVar7;
}

bool func_601(int iParam0)
{
	if (!func_465(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 26:
		case 33:
		case 37:
		case 40:
		case 62:
		case 66:
		case 81:
		case 83:
		case 99:
		case 101:
		case 111:
		case 121:
			return true;
	}
	return false;
}

int func_602(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("REGION_BAY_CRAWDADWILLIES");
		case 1:
			return joaat("REGION_BAY_MACOMBS_END");
		case 2:
			return joaat("REGION_BAY_MERKINSWALLER");
		case 3:
			return joaat("REGION_BAY_LAGRAS");
		case 4:
			return joaat("REGION_BAY_LAKAY");
		case 5:
			return joaat("REGION_BAY_SAINT_DENIS");
		case 6:
			return joaat("REGION_BAY_ORANGE_PLANTATION");
		case 7:
			return joaat("REGION_BAY_SERIAL_KILLER");
		case 8:
			return joaat("REGION_BAY_SERENDIPITY");
		case 9:
			return joaat("REGION_BAY_SHADYBELLE");
		case 10:
			return joaat("REGION_BAY_SILTWATERSTRAND");
		case 11:
			return joaat("REGION_BGV_APPLESEEDTIMBER");
		case 12:
			return joaat("REGION_BGV_BERYLS_DREAM");
		case 13:
			return joaat("REGION_BGV_BLACKBONEFOREST_TRAPPER");
		case 14:
			return joaat("REGION_BGV_DAKOTARIVER_TRAPPER");
		case 15:
			return joaat("REGION_BGV_FORTRIGGS");
		case 16:
			return joaat("REGION_BGV_HANGINGDOG");
		case 17:
			return joaat("REGION_BGV_LONEMULESTEAD");
		case 18:
			return joaat("REGION_BGV_MISSING_HUSBAND");
		case 19:
			return joaat("REGION_BGV_MONTO_REST");
		case 20:
			return joaat("REGION_BGV_OWANJILA_DAM");
		case 21:
			return joaat("REGION_BGV_PAINTEDSKY");
		case 22:
			return joaat("REGION_BGV_PRONGHORN");
		case 24:
			return joaat("REGION_BGV_SHACK");
		case 23:
			return joaat("REGION_BGV_RIGGS_STATION");
		case 25:
			return joaat("REGION_BGV_SHEPHERDS_RISE");
		case 26:
			return joaat("REGION_BGV_STRAWBERRY");
		case 27:
			return joaat("REGION_BGV_VALLEY_VIEW");
		case 28:
			return joaat("REGION_BGV_WALLACE_STATION");
		case 30:
			return joaat("REGION_BGV_WATSONSCABIN");
		case 29:
			return joaat("REGION_BGV_OLD_MAN_JONES");
		case 31:
			return joaat("REGION_BLU_CANEBREAK_MANOR");
		case 32:
			return joaat("REGION_BLU_COPPERHEAD");
		case 33:
			return joaat("REGION_BLU_SISIKA");
		case 34:
			return joaat("REGION_BLU_TRAVELLING_SALESMAN");
		case 35:
			return joaat("REGION_CML_BACCHUSBRIDGE");
		case 36:
			return joaat("REGION_CML_DINO_LADY");
		case 37:
			return joaat("REGION_CML_OLDFORTWALLACE");
		case 38:
			return joaat("REGION_CML_SIXPOINTCABIN");
		case 39:
			return joaat("REGION_GRT_BEECHERS");
		case 40:
			return joaat("REGION_GRT_BLACKWATER");
		case 41:
			return joaat("REGION_GRT_QUAKERS_COVE");
		case 42:
			return joaat("REGION_GRZ_ADLERRANCH");
		case 43:
			return joaat("REGION_GRZ_DEAD_RIVAL");
		case 53:
			return joaat("REGION_GRZ_CALUMETRAVINE");
		case 54:
			return joaat("REGION_GRE_CIVIL_WAR_BRIDE");
		case 44:
			return joaat("REGION_GRZ_CHEZPORTER");
		case 55:
			return joaat("REGION_GRZ_COHUTTA");
		case 45:
			return joaat("REGION_GRZ_COLTER");
		case 56:
			return joaat("REGION_GRZ_COTORRA_SPRINGS");
		case 46:
			return joaat("REGION_GRZ_FROZEN_EXPLORER");
		case 57:
			return joaat("REGION_GRZ_GUNFIGHT");
		case 47:
			return joaat("REGION_GRZ_MILLESANI_CLAIM");
		case 48:
			return joaat("REGION_GRZ_MOUNTAIN_MAN");
		case 49:
			return joaat("REGION_GRZ_MOUNT_HAGEN_PEAK");
		case 50:
			return joaat("REGION_GRZ_STARVING_CHILDREN");
		case 51:
			return joaat("REGION_GRZ_TEMPEST_RIM");
		case 58:
			return joaat("REGION_GRZ_THELOFT");
		case 59:
			return joaat("REGION_GRE_VETERAN");
		case 60:
			return joaat("REGION_GRZ_WAPITI");
		case 52:
			return joaat("REGION_GRZ_WINTERMINING_TOWN");
		case 61:
			return joaat("REGION_GRZ_TRAVELLING_SALESMAN");
		case 62:
			return joaat("REGION_GUA_AGUASDULCES");
		case 63:
			return joaat("REGION_GUA_CAMP");
		case 64:
			return joaat("REGION_GUA_CINCOTORRES");
		case 65:
			return joaat("REGION_GUA_LACAPILLA");
		case 66:
			return joaat("REGION_GUA_MANICATO");
		case 67:
			return joaat("REGION_HRT_ABANDONED_MILL");
		case 69:
			return joaat("REGION_HRT_CARMODYDELL");
		case 70:
			return joaat("REGION_HRT_CORNWALLKEROSENE");
		case 71:
			return joaat("REGION_HRT_CROP_FARM");
		case 72:
			return joaat("REGION_HRT_CUMBERLANDFALLS");
		case 73:
			return joaat("REGION_HRT_DOWNSRANCH");
		case 74:
			return joaat("REGION_HRT_EMERALDRANCH");
		case 75:
			return joaat("REGION_HRT_GRANGERS_HOGGERY");
		case 76:
			return joaat("REGION_HRT_HORSESHOEOVERLOOK");
		case 77:
			return joaat("REGION_HRT_LARNEDSOD");
		case 78:
			return joaat("REGION_HRT_LOONY_CULT");
		case 79:
			return joaat("REGION_HRT_LUCKYSCABIN");
		case 80:
			return joaat("REGION_HRT_SWANSONS_STATION");
		case 81:
			return joaat("REGION_HRT_VALENTINE");
		case 82:
			return joaat("REGION_ROA_ABERDEENPIGFARM");
		case 83:
			return joaat("REGION_ROA_ANNESBURG");
		case 84:
			return joaat("REGION_ROA_BEAVERHOLLOW");
		case 68:
			return joaat("REGION_ROA_BEECHERS_C");
		case 85:
			return joaat("REGION_ROA_BLACK_BALSAM_RISE");
		case 86:
			return joaat("REGION_ROA_BRANDYWINE_DROP");
		case 87:
			return joaat("REGION_ROA_BUTCHERCREEK");
		case 88:
			return joaat("REGION_ROA_DOVERHILL");
		case 89:
			return joaat("REGION_ROA_HAPPY_FAMILY");
		case 90:
			return joaat("REGION_ROA_ISOLATIONIST");
		case 91:
			return joaat("REGION_ROA_MACLEANSHOUSE");
		case 92:
			return joaat("REGION_ROA_MOSSY_FLATS");
		case 93:
			return joaat("REGION_ROA_ROANOKE_VALLEY");
		case 94:
			return joaat("REGION_ROA_ROCKYSEVEN");
		case 95:
			return joaat("REGION_ROA_TRAPPER");
		case 97:
			return joaat("REGION_ROA_VANHORNMANSION");
		case 98:
			return joaat("REGION_ROA_VANHORNPOST");
		case 96:
			return joaat("REGION_ROA_OLD_MAN_JONES");
		case 99:
			return joaat("REGION_SCM_BRAITHWAITEMANOR");
		case 100:
			return joaat("REGION_SCM_BULGERGLADE");
		case 101:
			return joaat("REGION_SCM_CALIGAHALL");
		case 102:
			return joaat("REGION_SCM_CATFISHJACKSONS");
		case 103:
			return joaat("REGION_SCM_CLEMENSCOVE");
		case 104:
			return joaat("REGION_SCM_CLEMENSPOINT");
		case 105:
			return joaat("REGION_SCM_COMPSONS_STEAD");
		case 106:
			return joaat("REGION_SCM_DAIRY_FARM");
		case 107:
			return joaat("REGION_SCM_HORSE_SHOP");
		case 108:
			return joaat("REGION_SCM_LONNIESSHACK");
		case 109:
			return joaat("REGION_SCM_LOVE_TRIANGLE");
		case 110:
			return joaat("REGION_SCM_RADLEYS_PASTURE");
		case 111:
			return joaat("REGION_SCM_RHODES");
		case 112:
			return joaat("REGION_SCM_SLAVE_PEN");
		case 113:
			return joaat("REGION_TAL_AURORA_BASIN");
		case 115:
			return joaat("REGION_TAL_COCHINAY");
		case 116:
			return joaat("REGION_TAL_MANZANITAPOST");
		case 117:
			return joaat("REGION_TAL_PACIFICUNIONRR");
		case 118:
			return joaat("REGION_TAL_TANNERSREACH");
		case 114:
			return joaat("REGION_TAL_DEAD_SETTLER");
		case 119:
			return joaat("REGION_TAL_TRAPPER");
		case 135:
			return joaat("REGION_HEN_MACFARLANES_RANCH");
		case 136:
			return joaat("REGION_HEN_THIEVES_LANDING");
		case 137:
			return joaat("REGION_HEN_TRAVELLING_SALESMAN");
		case 138:
			return -1573562784;
		case 127:
			return joaat("REGION_CHO_ARMADILLO");
		case 128:
			return joaat("REGION_CHO_COOTS_CHAPEL");
		case 129:
			return joaat("REGION_CHO_DON_JULIO_HOUSE");
		case 131:
			return joaat("REGION_CHO_RIDGEWOOD_FARM");
		case 130:
			return joaat("REGION_CHO_RILEYS_CHARGE");
		case 132:
			return joaat("REGION_CHO_TWIN_ROCKS");
		case 133:
			return joaat("REGION_CHO_TRAVELLING_SALESMAN");
		case 134:
			return 1869665995;
		case 120:
			return joaat("REGION_GAP_GAPTOOTH_BREACH");
		case 121:
			return joaat("REGION_GAP_TUMBLEWEED");
		case 122:
			return joaat("REGION_GAP_RATHSKELLER_FORK");
		case 123:
			return joaat("REGION_RIO_BENEDICT_POINT");
		case 124:
			return joaat("REGION_RIO_FORT_MERCER");
		case 125:
			return joaat("REGION_RIO_PLAIN_VIEW");
		case 126:
			return joaat("REGION_RIO_TRAVELLING_SALESMAN");
		case 139:
			return joaat("REGION_CENTRALUNIONRR");
		default:
			break;
	}
	if (bParam1)
	{
		return joaat("WILDERNESS");
	}
	return 0;
}

bool func_603(int iParam0, int iParam1)
{
	if (!func_470(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_13 == -1)
	{
		return (Global_39.f_263[iParam0] && iParam1) != 0;
	}
	return (Global_1071686.f_21398[iParam0] && iParam1) != 0;
}

int func_604(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DISTRICT_BAYOU_NWA");
		case 1:
			return joaat("DISTRICT_BIG_VALLEY");
		case 2:
			return joaat("DISTRICT_BLUEGILL_MARSH");
		case 3:
			return joaat("DISTRICT_CUMBERLAND_FOREST");
		case 4:
			return joaat("DISTRICT_GREAT_PLAINS");
		case 5:
			return joaat("DISTRICT_GRIZZLIES");
		case 6:
			return joaat("DISTRICT_GRIZZLIES_EAST");
		case 7:
			return joaat("DISTRICT_GRIZZLIES_WEST");
		case 8:
			return joaat("DISTRICT_GUAMA");
		case 9:
			return joaat("DISTRICT_HEARTLAND");
		case 10:
			return joaat("DISTRICT_ROANOKE_RIDGE");
		case 11:
			return joaat("DISTRICT_SCARLETT_MEADOWS");
		case 12:
			return joaat("DISTRICT_TALL_TREES");
		case 15:
			return joaat("DISTRICT_CHOLLA_SPRINGS");
		case 13:
			return joaat("DISTRICT_GAPTOOTH_RIDGE");
		case 16:
			return joaat("DISTRICT_HENNIGANS_STEAD");
		case 14:
			return joaat("DISTRICT_RIO_BRAVO");
		default:
			break;
	}
	return 1776960747;
}

void func_605(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

int func_606(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("ARCHERY");
		case 1:
			return joaat("CHALLENGES");
		case 2:
			return joaat("DEAD_DROP");
		case 3:
			return joaat("GOLDEN_HAT");
		case 4:
			return joaat("HOT_PROPERTY");
		case 5:
			return joaat("KING_OF_THE_CASTLE");
		case 6:
			return joaat("KING_OF_THE_RAILS");
		case 15:
			return joaat("PV_CHALLENGE_HERBALIST");
		case 16:
			return joaat("PV_CHALLENGE_BIGGEST_FISH");
		case 17:
			return joaat("PV_CHALLENGE_FLYING_BIRD");
		case 18:
			return joaat("HUNT_THE_POSSE_LEADER");
		case 8:
			return joaat("ESCAPED_CONVICTS");
		case 10:
			return joaat("SUPPLY_TRAIN");
		case 9:
			return joaat("ROUND_UP");
		case 11:
			return joaat("WRECKAGE");
		case 12:
			return joaat("CONDOR_EGG");
		case 13:
			return -27117790;
		case 14:
			return 1653867545;
		case 7:
			return -142235487;
		default:
			break;
	}
	return 0;
}

bool func_607()
{
	return (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_26538) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_26538, false));
}

bool func_608(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541.f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (DATAFILE::_0x603AC35FD4602C76(*uParam0) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

int func_609()
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

int func_610(int iParam0)
{
	return func_621(iParam0) + 30;
}

void func_611(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { Global_1900736.f_1[iParam0 /*2*/] };
	Global_1900736.f_1[iParam0 /*2*/] = { Global_1900736.f_1[iParam1 /*2*/] };
	Global_1900736.f_1[iParam1 /*2*/] = { Var0 };
}

bool func_612(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_613(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_622(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

void func_614(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_623(&(uParam0->f_4));
}

int func_615(int iParam0)
{
	switch (iParam0)
	{
		case -2085163631:
			return 0;
		case joaat("REGION_BAY_CRAWDADWILLIES"):
			return 0;
		case joaat("REGION_BAY_MACOMBS_END"):
			return 1;
		case joaat("REGION_BAY_MERKINSWALLER"):
			return 2;
		case joaat("REGION_BAY_LAGRAS"):
			return 3;
		case joaat("REGION_BAY_LAKAY"):
			return 4;
		case joaat("REGION_BAY_SAINT_DENIS"):
			return 5;
		case joaat("REGION_BAY_ORANGE_PLANTATION"):
			return 6;
		case joaat("REGION_BAY_SERIAL_KILLER"):
			return 7;
		case joaat("REGION_BAY_SERENDIPITY"):
			return 8;
		case joaat("REGION_BAY_SHADYBELLE"):
			return 9;
		case joaat("REGION_BAY_SILTWATERSTRAND"):
			return 10;
		case joaat("REGION_BGV_APPLESEEDTIMBER"):
			return 11;
		case joaat("REGION_BGV_BERYLS_DREAM"):
			return 12;
		case joaat("REGION_BGV_BLACKBONEFOREST_TRAPPER"):
			return 13;
		case joaat("REGION_BGV_DAKOTARIVER_TRAPPER"):
			return 14;
		case joaat("REGION_BGV_FORTRIGGS"):
			return 15;
		case joaat("REGION_BGV_HANGINGDOG"):
			return 16;
		case joaat("REGION_BGV_LONEMULESTEAD"):
			return 17;
		case joaat("REGION_BGV_MISSING_HUSBAND"):
			return 18;
		case joaat("REGION_BGV_MONTO_REST"):
			return 19;
		case joaat("REGION_BGV_OWANJILA_DAM"):
			return 20;
		case joaat("REGION_BGV_PAINTEDSKY"):
			return 21;
		case joaat("REGION_BGV_PRONGHORN"):
			return 22;
		case joaat("REGION_BGV_RIGGS_STATION"):
			return 23;
		case joaat("REGION_BGV_SHACK"):
			return 24;
		case joaat("REGION_BGV_SHEPHERDS_RISE"):
			return 25;
		case joaat("REGION_BGV_STRAWBERRY"):
			return 26;
		case joaat("REGION_BGV_VALLEY_VIEW"):
			return 27;
		case joaat("REGION_BGV_WATSONSCABIN"):
			return 30;
		case joaat("REGION_BGV_OLD_MAN_JONES"):
			return 29;
		case joaat("REGION_BLU_CANEBREAK_MANOR"):
			return 31;
		case joaat("REGION_BLU_COPPERHEAD"):
			return 32;
		case joaat("REGION_BLU_SISIKA"):
			return 33;
		case joaat("REGION_BLU_TRAVELLING_SALESMAN"):
			return 34;
		case joaat("REGION_CML_BACCHUSBRIDGE"):
			return 35;
		case joaat("REGION_CML_DINO_LADY"):
			return 36;
		case joaat("REGION_CML_OLDFORTWALLACE"):
			return 37;
		case joaat("REGION_CML_SIXPOINTCABIN"):
			return 38;
		case joaat("REGION_GRT_BEECHERS"):
			return 39;
		case joaat("REGION_GRT_BLACKWATER"):
			return 40;
		case joaat("REGION_GRT_QUAKERS_COVE"):
			return 41;
		case joaat("REGION_GRZ_ADLERRANCH"):
			return 42;
		case joaat("REGION_GRZ_DEAD_RIVAL"):
			return 43;
		case joaat("REGION_GRZ_CALUMETRAVINE"):
			return 53;
		case joaat("REGION_GRE_CIVIL_WAR_BRIDE"):
			return 54;
		case joaat("REGION_GRZ_CHEZPORTER"):
			return 44;
		case joaat("REGION_GRZ_COHUTTA"):
			return 55;
		case joaat("REGION_GRZ_COLTER"):
			return 45;
		case joaat("REGION_GRZ_COTORRA_SPRINGS"):
			return 56;
		case joaat("REGION_GRZ_FROZEN_EXPLORER"):
			return 46;
		case joaat("REGION_GRZ_GUNFIGHT"):
			return 57;
		case joaat("REGION_GRZ_MILLESANI_CLAIM"):
			return 47;
		case joaat("REGION_GRZ_MOUNTAIN_MAN"):
			return 48;
		case joaat("REGION_GRZ_MOUNT_HAGEN_PEAK"):
			return 49;
		case joaat("REGION_GRZ_STARVING_CHILDREN"):
			return 50;
		case joaat("REGION_GRZ_TEMPEST_RIM"):
			return 51;
		case joaat("REGION_GRZ_THELOFT"):
			return 58;
		case joaat("REGION_BGV_WALLACE_STATION"):
			return 28;
		case joaat("REGION_GRE_VETERAN"):
			return 59;
		case joaat("REGION_GRZ_WAPITI"):
			return 60;
		case joaat("REGION_GRZ_WINTERMINING_TOWN"):
			return 52;
		case joaat("REGION_GRZ_TRAVELLING_SALESMAN"):
			return 61;
		case joaat("REGION_GUA_AGUASDULCES"):
			return 62;
		case joaat("REGION_GUA_CAMP"):
			return 63;
		case joaat("REGION_GUA_CINCOTORRES"):
			return 64;
		case joaat("REGION_GUA_LACAPILLA"):
			return 65;
		case joaat("REGION_GUA_MANICATO"):
			return 66;
		case joaat("REGION_HRT_ABANDONED_MILL"):
			return 67;
		case joaat("REGION_HRT_CARMODYDELL"):
			return 69;
		case joaat("REGION_HRT_CORNWALLKEROSENE"):
			return 70;
		case joaat("REGION_HRT_CROP_FARM"):
			return 71;
		case joaat("REGION_HRT_CUMBERLANDFALLS"):
			return 72;
		case joaat("REGION_HRT_DOWNSRANCH"):
			return 73;
		case joaat("REGION_HRT_EMERALDRANCH"):
			return 74;
		case joaat("REGION_HRT_GRANGERS_HOGGERY"):
			return 75;
		case joaat("REGION_HRT_HORSESHOEOVERLOOK"):
			return 76;
		case joaat("REGION_HRT_LARNEDSOD"):
			return 77;
		case joaat("REGION_HRT_LOONY_CULT"):
			return 78;
		case joaat("REGION_HRT_LUCKYSCABIN"):
			return 79;
		case joaat("REGION_HRT_SWANSONS_STATION"):
			return 80;
		case joaat("REGION_HRT_VALENTINE"):
			return 81;
		case joaat("REGION_ROA_ABERDEENPIGFARM"):
			return 82;
		case joaat("REGION_ROA_ANNESBURG"):
			return 83;
		case joaat("REGION_ROA_BEECHERS_C"):
			return 68;
		case joaat("REGION_ROA_BEAVERHOLLOW"):
			return 84;
		case joaat("REGION_ROA_BLACK_BALSAM_RISE"):
			return 85;
		case joaat("REGION_ROA_BRANDYWINE_DROP"):
			return 86;
		case joaat("REGION_ROA_BUTCHERCREEK"):
			return 87;
		case joaat("REGION_ROA_DOVERHILL"):
			return 88;
		case joaat("REGION_ROA_HAPPY_FAMILY"):
			return 89;
		case joaat("REGION_ROA_ISOLATIONIST"):
			return 90;
		case joaat("REGION_ROA_MACLEANSHOUSE"):
			return 91;
		case joaat("REGION_ROA_MOSSY_FLATS"):
			return 92;
		case joaat("REGION_ROA_ROANOKE_VALLEY"):
			return 93;
		case joaat("REGION_ROA_ROCKYSEVEN"):
			return 94;
		case joaat("REGION_ROA_TRAPPER"):
			return 95;
		case joaat("REGION_ROA_VANHORNMANSION"):
			return 97;
		case joaat("REGION_ROA_VANHORNPOST"):
			return 98;
		case joaat("REGION_ROA_OLD_MAN_JONES"):
			return 96;
		case joaat("REGION_SCM_BRAITHWAITEMANOR"):
			return 99;
		case joaat("REGION_SCM_BULGERGLADE"):
			return 100;
		case joaat("REGION_SCM_CALIGAHALL"):
			return 101;
		case joaat("REGION_SCM_CATFISHJACKSONS"):
			return 102;
		case joaat("REGION_SCM_CLEMENSCOVE"):
			return 103;
		case joaat("REGION_SCM_CLEMENSPOINT"):
			return 104;
		case joaat("REGION_SCM_HORSE_SHOP"):
			return 107;
		case joaat("REGION_SCM_LONNIESSHACK"):
			return 108;
		case joaat("REGION_SCM_LOVE_TRIANGLE"):
			return 109;
		case joaat("REGION_SCM_COMPSONS_STEAD"):
			return 105;
		case joaat("REGION_SCM_DAIRY_FARM"):
			return 106;
		case joaat("REGION_SCM_RADLEYS_PASTURE"):
			return 110;
		case joaat("REGION_SCM_RHODES"):
			return 111;
		case joaat("REGION_SCM_SLAVE_PEN"):
			return 112;
		case joaat("REGION_TAL_AURORA_BASIN"):
			return 113;
		case joaat("REGION_TAL_DEAD_SETTLER"):
			return 114;
		case joaat("REGION_TAL_COCHINAY"):
			return 115;
		case joaat("REGION_TAL_MANZANITAPOST"):
			return 116;
		case joaat("REGION_TAL_PACIFICUNIONRR"):
			return 117;
		case joaat("REGION_TAL_TANNERSREACH"):
			return 118;
		case joaat("REGION_TAL_TRAPPER"):
			return 119;
		case joaat("REGION_HEN_MACFARLANES_RANCH"):
			return 135;
		case joaat("REGION_HEN_THIEVES_LANDING"):
			return 136;
		case joaat("REGION_HEN_TRAVELLING_SALESMAN"):
			return 137;
		case -1573562784:
			return 138;
		case joaat("REGION_CHO_ARMADILLO"):
			return 127;
		case joaat("REGION_CHO_COOTS_CHAPEL"):
			return 128;
		case joaat("REGION_CHO_DON_JULIO_HOUSE"):
			return 129;
		case joaat("REGION_CHO_RIDGEWOOD_FARM"):
			return 131;
		case joaat("REGION_CHO_RILEYS_CHARGE"):
			return 130;
		case joaat("REGION_CHO_TWIN_ROCKS"):
			return 132;
		case joaat("REGION_CHO_TRAVELLING_SALESMAN"):
			return 133;
		case 1869665995:
			return 134;
		case joaat("REGION_GAP_GAPTOOTH_BREACH"):
			return 120;
		case joaat("REGION_GAP_TUMBLEWEED"):
			return 121;
		case joaat("REGION_GAP_RATHSKELLER_FORK"):
			return 122;
		case joaat("REGION_RIO_BENEDICT_POINT"):
			return 123;
		case joaat("REGION_RIO_FORT_MERCER"):
			return 124;
		case joaat("REGION_RIO_PLAIN_VIEW"):
			return 125;
		case joaat("REGION_RIO_TRAVELLING_SALESMAN"):
			return 126;
		case joaat("REGION_CENTRALUNIONRR"):
			return 139;
		default:
			break;
	}
	return -1;
}

int func_616(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DISTRICT_BAYOU_NWA"):
			return 0;
		case joaat("DISTRICT_BIG_VALLEY"):
			return 1;
		case joaat("DISTRICT_BLUEGILL_MARSH"):
			return 2;
		case joaat("DISTRICT_CUMBERLAND_FOREST"):
			return 3;
		case joaat("DISTRICT_GREAT_PLAINS"):
			return 4;
		case joaat("DISTRICT_GRIZZLIES"):
			return 5;
		case joaat("DISTRICT_GRIZZLIES_EAST"):
			return 6;
		case joaat("DISTRICT_GRIZZLIES_WEST"):
			return 7;
		case joaat("DISTRICT_GUAMA"):
			return 8;
		case joaat("DISTRICT_HEARTLAND"):
			return 9;
		case joaat("DISTRICT_ROANOKE_RIDGE"):
			return 10;
		case joaat("DISTRICT_SCARLETT_MEADOWS"):
			return 11;
		case joaat("DISTRICT_TALL_TREES"):
			return 12;
		case joaat("DISTRICT_GAPTOOTH_RIDGE"):
			return 13;
		case joaat("DISTRICT_RIO_BRAVO"):
			return 14;
		case joaat("DISTRICT_CHOLLA_SPRINGS"):
			return 15;
		case joaat("DISTRICT_HENNIGANS_STEAD"):
			return 16;
		default:
			break;
	}
	return -1;
}

char* func_617(int iParam0)
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
		case 30:
			return "REGION_BGV_WATSONSCABIN";
		case 29:
			return "REGION_BGV_OLD_MAN_JONES";
		case 31:
			return "REGION_BLU_CANEBREAK_MANOR";
		case 32:
			return "REGION_BLU_COPPERHEAD";
		case 33:
			return "REGION_BLU_SISIKA";
		case 34:
			return "REGION_BLU_TRAVELLING_SALESMAN";
		case 35:
			return "REGION_CML_BACCHUSBRIDGE";
		case 36:
			return "REGION_CML_DINO_LADY";
		case 37:
			return "REGION_CML_OLDFORTWALLACE";
		case 38:
			return "REGION_CML_SIXPOINTCABIN";
		case 39:
			return "REGION_GRT_BEECHERS";
		case 40:
			return "REGION_GRT_BLACKWATER";
		case 41:
			return "REGION_GRT_QUAKERS_COVE";
		case 42:
			return "REGION_GRZ_ADLERRANCH";
		case 43:
			return "REGION_GRZ_DEAD_RIVAL";
		case 53:
			return "REGION_GRZ_CALUMETRAVINE";
		case 54:
			return "REGION_GRE_CIVIL_WAR_BRIDE";
		case 44:
			return "REGION_GRZ_CHEZPORTER";
		case 55:
			return "REGION_GRZ_COHUTTA";
		case 45:
			return "REGION_GRZ_COLTER";
		case 56:
			return "REGION_GRZ_COTORRA_SPRINGS";
		case 46:
			return "REGION_GRZ_FROZEN_EXPLORER";
		case 57:
			return "REGION_GRZ_GUNFIGHT";
		case 47:
			return "REGION_GRZ_MILLESANI_CLAIM";
		case 48:
			return "REGION_GRZ_MOUNTAIN_MAN";
		case 49:
			return "REGION_GRZ_MOUNT_HAGEN_PEAK";
		case 50:
			return "REGION_GRZ_STARVING_CHILDREN";
		case 51:
			return "REGION_GRZ_TEMPEST_RIM";
		case 58:
			return "REGION_GRZ_THELOFT";
		case 59:
			return "REGION_GRE_VETERAN";
		case 60:
			return "REGION_GRZ_WAPITI";
		case 52:
			return "REGION_GRZ_WINTERMINING_TOWN";
		case 61:
			return "REGION_GRZ_TRAVELLING_SALESMAN";
		case 62:
			return "REGION_GUA_AGUASDULCES";
		case 63:
			return "REGION_GUA_CAMP";
		case 64:
			return "REGION_GUA_CINCOTORRES";
		case 65:
			return "REGION_GUA_LACAPILLA";
		case 66:
			return "REGION_GUA_MANICATO";
		case 67:
			return "REGION_HRT_ABANDONED_MILL";
		case 69:
			return "REGION_HRT_CARMODYDELL";
		case 70:
			return "REGION_HRT_CORNWALLKEROSENE";
		case 71:
			return "REGION_HRT_CROP_FARM";
		case 72:
			return "REGION_HRT_CUMBERLANDFALLS";
		case 73:
			return "REGION_HRT_DOWNSRANCH";
		case 74:
			return "REGION_HRT_EMERALDRANCH";
		case 75:
			return "REGION_HRT_GRANGERS_HOGGERY";
		case 76:
			return "REGION_HRT_HORSESHOEOVERLOOK";
		case 77:
			return "REGION_HRT_LARNEDSOD";
		case 78:
			return "REGION_HRT_LOONY_CULT";
		case 79:
			return "REGION_HRT_LUCKYSCABIN";
		case 80:
			return "REGION_HRT_SWANSONS_STATION";
		case 81:
			return "REGION_HRT_VALENTINE";
		case 82:
			return "REGION_ROA_ABERDEENPIGFARM";
		case 83:
			return "REGION_ROA_ANNESBURG";
		case 84:
			return "REGION_ROA_BEAVERHOLLOW";
		case 68:
			return "REGION_ROA_BEECHERS_C";
		case 85:
			return "REGION_ROA_BLACK_BALSAM_RISE";
		case 86:
			return "REGION_ROA_BRANDYWINE_DROP";
		case 87:
			return "REGION_ROA_BUTCHERCREEK";
		case 88:
			return "REGION_ROA_DOVERHILL";
		case 89:
			return "REGION_ROA_HAPPY_FAMILY";
		case 90:
			return "REGION_ROA_ISOLATIONIST";
		case 91:
			return "REGION_ROA_MACLEANSHOUSE";
		case 92:
			return "REGION_ROA_MOSSY_FLATS";
		case 93:
			return "REGION_ROA_ROANOKE_VALLEY";
		case 94:
			return "REGION_ROA_ROCKYSEVEN";
		case 95:
			return "REGION_ROA_TRAPPER";
		case 97:
			return "REGION_ROA_VANHORNMANSION";
		case 98:
			return "REGION_ROA_VANHORNPOST";
		case 96:
			return "REGION_ROA_OLD_MAN_JONES";
		case 99:
			return "REGION_SCM_BRAITHWAITEMANOR";
		case 100:
			return "REGION_SCM_BULGERGLADE";
		case 101:
			return "REGION_SCM_CALIGAHALL";
		case 102:
			return "REGION_SCM_CATFISHJACKSONS";
		case 103:
			return "REGION_SCM_CLEMENSCOVE";
		case 104:
			return "REGION_SCM_CLEMENSPOINT";
		case 105:
			return "REGION_SCM_COMPSONS_STEAD";
		case 106:
			return "REGION_SCM_DAIRY_FARM";
		case 107:
			return "REGION_SCM_HORSE_SHOP";
		case 108:
			return "REGION_SCM_LONNIESSHACK";
		case 109:
			return "REGION_SCM_LOVE_TRIANGLE";
		case 110:
			return "REGION_SCM_RADLEYS_PASTURE";
		case 111:
			return "REGION_SCM_RHODES";
		case 112:
			return "REGION_SCM_SLAVE_PEN";
		case 113:
			return "REGION_TAL_AURORA_BASIN";
		case 114:
			return "REGION_TAL_DEAD_SETTLER";
		case 115:
			return "REGION_TAL_COCHINAY";
		case 116:
			return "REGION_TAL_MANZANITAPOST";
		case 117:
			return "REGION_TAL_PACIFICUNIONRR";
		case 118:
			return "REGION_TAL_TANNERSREACH";
		case 119:
			return "REGION_TAL_TRAPPER";
		case 135:
			return "REGION_HEN_MACFARLANES_RANCH";
		case 136:
			return "REGION_HEN_THIEVES_LANDING";
		case 137:
			return "REGION_HEN_TRAVELLING_SALESMAN";
		case 138:
			return "REGION_HEN_HARRIET";
		case 127:
			return "REGION_CHO_ARMADILLO";
		case 128:
			return "REGION_CHO_COOTS_CHAPEL";
		case 129:
			return "REGION_CHO_DON_JULIO_HOUSE";
		case 131:
			return "REGION_CHO_RIDGEWOOD_FARM";
		case 130:
			return "REGION_CHO_RILEYS_CHARGE";
		case 132:
			return "REGION_CHO_TWIN_ROCKS";
		case 133:
			return "REGION_CHO_TRAVELLING_SALESMAN";
		case 134:
			return "REGION_CHO_TRAPPER";
		case 120:
			return "REGION_GAP_GAPTOOTH_BREACH";
		case 121:
			return "REGION_GAP_TUMBLEWEED";
		case 122:
			return "REGION_GAP_RATHSKELLER_FORK";
		case 123:
			return "REGION_RIO_BENEDICT_POINT";
		case 124:
			return "REGION_RIO_FORT_MERCER";
		case 125:
			return "REGION_RIO_PLAIN_VIEW";
		case 126:
			return "REGION_RIO_TRAVELLING_SALESMAN";
		case 139:
			return "REGION_CENTRALUNIONRR";
		default:
			break;
	}
	return "REGION_INVALID";
	return "REGION_INVALID";
}

var func_618(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

bool func_619(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_624(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_625(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_626(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_627(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_628(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_629(iParam0);
	if (iVar5 < 1 || iVar5 > func_630(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_620(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_631(func_546(), iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6);
}

int func_621(int iParam0)
{
	return iParam0 * 31;
}

bool func_622(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_528(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_533(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

void func_623(var uParam0)
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

int func_624(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_625(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_626(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_627(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_632(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_628(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_629(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_630(int iParam0, int iParam1)
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

void func_631(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_633(iParam0, iParam1, 1))
	{
		iVar0 = func_628(iParam1);
		iVar1 = func_627(iParam0);
		iVar2 = (func_627(iParam0) - func_627(iParam1));
		iVar3 = (func_628(iParam0) - func_628(iParam1));
		iVar4 = (func_629(iParam0) - func_629(iParam1));
		iVar5 = (func_626(iParam0) - func_626(iParam1));
		iVar6 = (func_625(iParam0) - func_625(iParam1));
		iVar7 = (func_624(iParam0) - func_624(iParam1));
	}
	else
	{
		iVar0 = func_628(iParam0);
		iVar1 = func_627(iParam1);
		iVar2 = (func_627(iParam1) - func_627(iParam0));
		iVar3 = (func_628(iParam1) - func_628(iParam0));
		iVar4 = (func_629(iParam1) - func_629(iParam0));
		iVar5 = (func_626(iParam1) - func_626(iParam0));
		iVar6 = (func_625(iParam1) - func_625(iParam0));
		iVar7 = (func_624(iParam1) - func_624(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_630(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = BUILTIN::ROUND(func_634(BUILTIN::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*iParam2 = iVar7;
	*iParam3 = iVar6;
	*iParam4 = iVar5;
	*iParam5 = iVar4;
	*iParam6 = iVar3;
	*iParam7 = iVar2;
}

int func_632(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_633(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_619(iParam1) || !func_619(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

float func_634(float fParam0, float fParam1, float fParam2)
{
	float fVar0;

	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(BUILTIN::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

