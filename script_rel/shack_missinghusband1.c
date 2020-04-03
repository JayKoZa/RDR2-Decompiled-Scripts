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
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 6;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 6;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 6;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 6;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 4;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 3;
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
	struct<129> Local_73 = { 0, 0, 0, 0, 0, 0, 1259902592, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = -1;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 1097859072;
	var uLocal_219 = 1000;
	var uLocal_220 = 1067450368;
	var uLocal_221 = 5000;
	var uLocal_222 = 42;
	var uLocal_223 = 1103626240;
	var uLocal_224 = 1077936128;
	var uLocal_225 = 1106247680;
	var uLocal_226 = 1103101952;
	var uLocal_227 = 1097859072;
	var uLocal_228 = 1103626240;
	var uLocal_229 = 0;
	var uLocal_230[5] = { 0, 0, 0, 0, 0 };
	struct<57> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uScriptParam_57 = 0;
	var uScriptParam_58 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1(&ScriptParam_0);
	}
	while (func_2())
	{
		BUILTIN::WAIT(0);
		switch (ScriptParam_0.f_2)
		{
			case 0:
				if (func_3(&ScriptParam_0))
				{
					func_4(&ScriptParam_0, 1);
				}
				break;
			case 1:
				func_5(&ScriptParam_0);
				func_4(&ScriptParam_0, 2);
				break;
			case 2:
				if (func_6(&ScriptParam_0) && !func_7())
				{
					func_4(&ScriptParam_0, 3);
				}
				break;
			case 3:
				if (func_8(&ScriptParam_0, 0, 1, 1, 0))
				{
					if (func_9(&ScriptParam_0))
					{
						if (func_10(&ScriptParam_0))
						{
							func_4(&ScriptParam_0, 5);
						}
					}
				}
				break;
			case 5:
				func_11(&ScriptParam_0);
				func_4(&ScriptParam_0, 6);
				break;
			case 6:
				if (func_10(&ScriptParam_0))
				{
					func_4(&ScriptParam_0, 4);
				}
				break;
			case 4:
				if (func_12(&ScriptParam_0))
				{
					func_4(&ScriptParam_0, 7);
				}
				break;
			case 7:
				if (CAM::IS_SCREEN_FADED_IN())
				{
					func_4(&ScriptParam_0, 8);
				}
				break;
			case 8:
				if (ENTITY::IS_ENTITY_DEAD(Global_35))
				{
					func_1(&ScriptParam_0);
					return;
				}
				if (ScriptParam_0.f_48)
				{
					if (!TASK::_0x841475AC96E794D1(ScriptParam_0.f_56.f_1))
					{
						func_13(&ScriptParam_0);
						func_14(&ScriptParam_0);
						func_4(&ScriptParam_0, 9);
					}
				}
				else if (VOLUME::_DOES_VOLUME_EXIST(func_16(func_15())))
				{
					if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, func_16(func_15()), true, 0) || func_17(&ScriptParam_0))
					{
						func_13(&ScriptParam_0);
						func_14(&ScriptParam_0);
						func_4(&ScriptParam_0, 9);
					}
				}
				if (func_18(&ScriptParam_0))
				{
					func_4(&ScriptParam_0, 9);
				}
				break;
			case 9:
				func_1(&ScriptParam_0);
				break;
			default:
				break;
		}
	}
	func_1(&ScriptParam_0);
}

void func_1(var uParam0)
{
	func_19(uParam0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2()
{
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		return 0;
	}
	return 1;
}

int func_3(var uParam0)
{
	func_20(uParam0);
	func_21(uParam0);
	func_22(uParam0);
	if (func_23(uParam0))
	{
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_4(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

void func_5(var uParam0)
{
	if (uParam0->f_4 > 0)
	{
		PED::_0xF008E0BA1FE1D644(uParam0->f_4);
	}
	func_24(uParam0);
	func_25(uParam0);
	func_26(uParam0, 0);
	func_27(uParam0);
}

int func_6(var uParam0)
{
	if ((!func_28(uParam0) || !func_29(uParam0)) || !func_30(uParam0))
	{
		return 0;
	}
	if (uParam0->f_4 > 0)
	{
		if (!PED::_0x5C16855277819BBF() == uParam0->f_4)
		{
			return 0;
		}
	}
	return 1;
}

bool func_7()
{
	return func_31(&Global_1935630, 4096);
}

int func_8(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam1)
	{
		while (uParam0->f_20 < 6)
		{
			func_34(uParam0, func_32(uParam0, uParam0->f_20), func_33(uParam0, uParam0->f_20), uParam0->f_20, iParam2, iParam3, bParam4);
		}
		func_35(&(uParam0->f_21), 2);
		return 1;
	}
	else
	{
		switch (uParam0->f_21)
		{
			case 0:
				func_35(&(uParam0->f_21), 1);
				break;
			case 1:
				if (uParam0->f_20 < 6)
				{
					func_34(uParam0, func_32(uParam0, uParam0->f_20), func_33(uParam0, uParam0->f_20), uParam0->f_20, iParam2, iParam3, bParam4);
				}
				else
				{
					func_35(&(uParam0->f_21), 2);
				}
				break;
			case 2:
				return 1;
		}
	}
	return 0;
}

int func_9(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (!func_38(uParam0, func_36(uParam0, iVar0), func_37(uParam0, iVar0), iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_10(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[iVar0])))
		{
			if (!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_13[iVar0])))
			{
				if (!PED::_0xA0BC8FAED8CFEB3C(&(uParam0->f_13[iVar0])))
				{
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_11(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (!func_39(uParam0, iVar0) == 41788943)
		{
			if (!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_13[iVar0])))
			{
				func_40(&(uParam0->f_13[iVar0]), func_39(uParam0, iVar0));
			}
		}
		iVar0++;
	}
}

int func_12(var uParam0)
{
	if (!func_41(uParam0->f_3, 4))
	{
		if (!uParam0->f_48)
		{
			if (!func_41(Local_73.f_5, 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_29[0])))
				{
					ENTITY::FREEZE_ENTITY_POSITION(&(uParam0->f_29[0]), true);
					TASK::_0x78B4567E18B54480(&(uParam0->f_29[0]));
				}
			}
			return 1;
		}
		else
		{
			if (func_42(uParam0))
			{
				if (!func_41(Local_73.f_4, 1))
				{
					if (!func_41(Local_73.f_5, 4))
					{
						if (func_43(uParam0))
						{
							func_44(uParam0, 1, 1);
							func_44(uParam0, 2, 1);
							func_44(uParam0, 3, 1);
							if (!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_13[1])))
							{
								func_45(&(uParam0->f_13[1]));
								func_46(&(uParam0->f_13[1]), 0);
								func_48(&(uParam0->f_13[1]), func_47(uParam0, 1), 1, 0);
								PED::_0x6569F31A01B4C097(&(uParam0->f_13[1]), 4, 1);
								ENTITY::_0x18FF3110CF47115D(&(uParam0->f_13[1]), 10, 1);
							}
							func_49(uParam0, uParam0->f_36[1], 1);
						}
					}
					if ((!func_41(Local_73.f_5, 2) && !func_41(Local_73.f_5, 4)) && !func_41(Local_73.f_5, 8))
					{
						if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[0])))
						{
							ENTITY::SET_ENTITY_VISIBLE(&(uParam0->f_13[0]), true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uParam0->f_13[0]), false);
							AUDIO::STOP_PED_SPEAKING(&(uParam0->f_13[0]), true);
							PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), &(uParam0->f_13[0]), 7, 1, 1);
							PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), &(uParam0->f_13[0]), 19, 1, 1);
							PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), &(uParam0->f_13[0]), 20, 1, 1);
							PED::SET_PED_CONFIG_FLAG(&(uParam0->f_13[0]), 330, true);
							PED::SET_PED_CONFIG_FLAG(&(uParam0->f_13[0]), 413, true);
							PED::SET_PED_CONFIG_FLAG(&(uParam0->f_13[0]), 130, false);
						}
						if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[4])))
						{
							ENTITY::SET_ENTITY_VISIBLE(&(uParam0->f_13[4]), true);
						}
						if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[0])))
						{
							func_49(uParam0, uParam0->f_36[0], 0);
						}
					}
					func_50(&(Local_73.f_4), 1);
				}
				else
				{
					return 1;
				}
			}
			if (!func_41(Local_73.f_5, 8))
			{
				if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_29[1])) && !ENTITY::IS_ENTITY_DEAD(&(uParam0->f_29[1])))
				{
					ENTITY::FREEZE_ENTITY_POSITION(&(uParam0->f_29[1]), true);
					TASK::_0x78B4567E18B54480(&(uParam0->f_29[1]));
				}
			}
		}
	}
	else if (!func_41(uParam0->f_3, 8))
	{
		if (!func_41(Local_73.f_5, 16))
		{
			if (!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_29[0])))
			{
				ENTITY::FREEZE_ENTITY_POSITION(&(uParam0->f_29[0]), true);
				TASK::_0x78B4567E18B54480(&(uParam0->f_29[0]));
			}
		}
		return 1;
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_13(var uParam0)
{
	if (func_41(uParam0->f_3, 2048) && !func_41(uParam0->f_3, 64))
	{
		func_50(&(uParam0->f_3), 64);
	}
	else if (func_41(uParam0->f_3, 1024) && !func_41(uParam0->f_3, 32))
	{
		func_50(&(uParam0->f_3), 32);
	}
	else if (func_41(uParam0->f_3, 512) && !func_41(uParam0->f_3, 16))
	{
		func_50(&(uParam0->f_3), 16);
	}
	else if (func_41(uParam0->f_3, 256) && !func_41(uParam0->f_3, 8))
	{
		func_50(&(uParam0->f_3), 8);
	}
	else if (func_41(uParam0->f_3, 128) && !func_41(uParam0->f_3, 4))
	{
		func_50(&(uParam0->f_3), 4);
	}
	func_51(&(uParam0->f_5), &(uParam0->f_3));
}

void func_14(var uParam0)
{
}

int func_15()
{
	return 18;
}

int func_16(int iParam0)
{
	if (!func_52(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_3;
}

int func_17(var uParam0)
{
	return 0;
}

int func_18(var uParam0)
{
	if (Local_73 > 0 && Local_73 < 9)
	{
		func_53(uParam0);
		if (!func_41(uParam0->f_3, 8192))
		{
			if (((VOLUME::_DOES_VOLUME_EXIST(uParam0->f_46) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_46, true, 0)) || func_54(Global_35, func_32(uParam0, 0), 10f, 1, 1)) || func_54(Global_35, func_32(uParam0, 1), 10f, 1, 1))
			{
				func_55(uParam0);
			}
		}
	}
	switch (Local_73)
	{
		case 0:
			if (!func_41(uParam0->f_3, 4))
			{
				if (!uParam0->f_48)
				{
					if (!func_41(Local_73.f_5, 1))
					{
						func_56(&Local_73, 1, 1);
					}
					else
					{
						func_56(&Local_73, 8, 1);
					}
				}
				else if (!func_41(Local_73.f_5, 4) || !func_41(Local_73.f_5, 8))
				{
					if ((!func_41(Local_73.f_5, 2) && !func_41(Local_73.f_5, 4)) && !func_41(Local_73.f_5, 8))
					{
						func_57(&(Local_73.f_14), &(uParam0->f_36[0]));
						func_58(&(Local_73.f_14), 1);
						func_59(uParam0, &Local_73);
						func_56(&Local_73, 2, 1);
					}
					else
					{
						func_56(&Local_73, 6, 1);
					}
				}
				else
				{
					func_56(&Local_73, 8, 1);
				}
			}
			else if (!func_41(uParam0->f_3, 8))
			{
				func_56(&Local_73, 7, 1);
			}
			else
			{
				func_56(&Local_73, 8, 1);
			}
			break;
		case 1:
			func_60(uParam0, &Local_73);
			break;
		case 2:
			func_61(uParam0, &Local_73);
			if (!func_62(uParam0, &Local_73))
			{
				func_63(uParam0, &Local_73);
			}
			func_64(uParam0, &Local_73);
			break;
		case 3:
			func_61(uParam0, &Local_73);
			if (!func_62(uParam0, &Local_73))
			{
				func_65(uParam0, &Local_73);
			}
			func_64(uParam0, &Local_73);
			break;
		case 4:
			func_61(uParam0, &Local_73);
			if (!func_62(uParam0, &Local_73))
			{
				func_66(uParam0, &Local_73);
			}
			func_64(uParam0, &Local_73);
			break;
		case 5:
			func_61(uParam0, &Local_73);
			func_67(uParam0, &Local_73);
			func_64(uParam0, &Local_73);
			break;
		case 6:
			func_64(uParam0, &Local_73);
			break;
		case 7:
			func_60(uParam0, &Local_73);
			break;
		case 8:
			break;
		case 9:
			break;
	}
	return 0;
}

void func_19(var uParam0)
{
	func_68(uParam0);
	func_69(uParam0);
	func_70(uParam0, 0);
	func_71(uParam0, 0);
	func_72(uParam0);
	func_73(uParam0);
	func_74(uParam0);
	if (SCRIPTS::IS_THREAD_ACTIVE(*uParam0, false))
	{
		SCRIPTS::TERMINATE_THREAD(*uParam0);
	}
}

void func_20(var uParam0)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_46))
	{
		if (!func_76(func_75(uParam0)))
		{
			if ((uParam0->f_1 == 2 || uParam0->f_1 == 4) || uParam0->f_1 == 8)
			{
				uParam0->f_46 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(func_75(uParam0), func_77(uParam0), func_78(uParam0), "SHACK_VOLUME_RESTRICTION");
			}
			else
			{
				uParam0->f_46 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(func_75(uParam0), func_77(uParam0), func_78(uParam0), "SHACK_VOLUME_RESTRICTION");
			}
		}
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_46))
		{
			POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_46, 0, 0, 0, -1, -1, 0);
			POPULATION::_0xB56D41A694E42E86(uParam0->f_46, 0, 0, 0, -1, -1, 2);
		}
	}
	func_79(uParam0);
	if (func_80(uParam0))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_46))
		{
			if (!PED::_0x91A5F9CBEBB9D936(uParam0->f_45))
			{
				uParam0->f_45 = PED::_0x4C39C95AE5DB1329(uParam0->f_46, 0, 15);
			}
		}
	}
}

void func_21(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		if (!func_81(uParam0, iVar0))
		{
		}
		iVar0++;
	}
}

void func_22(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		uParam0->f_22[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		uParam0->f_6[iVar0] = 0;
		iVar0++;
	}
	switch (uParam0->f_1)
	{
		case 32768:
			if (!func_41(uParam0->f_3, 4))
			{
				uParam0->f_4 = 3;
				uParam0->f_6[0] = -1737978570;
				uParam0->f_6[1] = joaat("a_m_m_unicorpse_01");
				uParam0->f_6[2] = joaat("a_m_m_unicorpse_01");
				uParam0->f_22[0] = -1273905068;
			}
			else if (!func_41(uParam0->f_3, 8))
			{
				if (!func_82(-1282804314))
				{
					uParam0->f_4 = 3;
					uParam0->f_6[0] = -1737978570;
					uParam0->f_6[1] = joaat("a_m_m_unicorpse_01");
					uParam0->f_6[2] = joaat("a_m_m_unicorpse_01");
				}
				else
				{
					uParam0->f_4 = 2;
					uParam0->f_6[1] = joaat("a_m_m_unicorpse_01");
					uParam0->f_6[2] = joaat("a_m_m_unicorpse_01");
				}
			}
			break;
		case 131072:
			if (!func_41(uParam0->f_3, 4))
			{
				uParam0->f_4 = 2;
				uParam0->f_6[0] = joaat("u_m_y_shackstarvingkid_01");
				uParam0->f_6[1] = joaat("u_m_y_shackstarvingkid_01");
				uParam0->f_22[0] = joaat("p_cs_rt_envelope01x");
			}
			else
			{
				uParam0->f_4 = 2;
				uParam0->f_6[0] = joaat("u_m_y_shackstarvingkid_01");
				uParam0->f_6[1] = joaat("u_m_y_shackstarvingkid_01");
			}
			break;
		case 8192:
			if (!func_41(uParam0->f_3, 4))
			{
				if (uParam0->f_48)
				{
					if (!func_84(func_83(uParam0->f_5), 4) || !func_84(func_83(uParam0->f_5), 8))
					{
						uParam0->f_4 = 0;
						if ((((((!func_84(func_83(uParam0->f_5), 2) && !func_85(128, 0, 1)) && !func_86(PLAYER::GET_PLAYER_INDEX(), 1, 1, 1)) && !func_87()) && !func_88(20)) && !func_84(func_83(uParam0->f_5), 4)) && !func_84(func_83(uParam0->f_5), 8))
						{
							uParam0->f_4 += 2;
							uParam0->f_6[0] = 1385399145;
							uParam0->f_6[4] = -1038436471;
						}
						if (!func_84(func_83(uParam0->f_5), 4))
						{
							uParam0->f_4 += 3;
							uParam0->f_6[1] = joaat("a_m_m_unicorpse_01");
							uParam0->f_6[2] = -1038436471;
							uParam0->f_6[3] = -1038436471;
						}
						if (!func_84(func_83(uParam0->f_5), 8))
						{
							uParam0->f_22[1] = joaat("p_cs_rt_envelope01x");
						}
					}
				}
				else if (!func_84(func_83(uParam0->f_5), 1))
				{
					uParam0->f_22[0] = joaat("p_cs_rt_envelope01x");
				}
			}
			else if (!func_41(uParam0->f_3, 8))
			{
				uParam0->f_22[0] = joaat("p_cs_rt_envelope01x");
			}
			break;
		case 4096:
			if (!func_41(uParam0->f_3, 4))
			{
				uParam0->f_4 = 5;
				uParam0->f_6[0] = joaat("a_m_m_unicorpse_01");
				uParam0->f_6[1] = joaat("a_f_m_unicorpse_01");
				uParam0->f_6[2] = joaat("a_f_m_unicorpse_01");
				uParam0->f_6[3] = joaat("a_c_crow_01");
				uParam0->f_6[4] = joaat("a_c_crow_01");
			}
			else if (func_89(uParam0, 1126694912 /* Float: 168f */))
			{
				uParam0->f_4 = 2;
				uParam0->f_6[0] = joaat("a_m_m_unicorpse_01");
				uParam0->f_6[1] = joaat("a_f_m_unicorpse_01");
			}
			break;
		case 256:
			if (!func_41(uParam0->f_3, 4))
			{
				uParam0->f_4 = 5;
				uParam0->f_6[0] = joaat("a_m_m_unicorpse_01");
				uParam0->f_6[1] = joaat("a_m_m_unicorpse_01");
				uParam0->f_6[2] = joaat("a_c_crow_01");
				uParam0->f_6[3] = joaat("a_c_crow_01");
				uParam0->f_6[4] = joaat("a_c_crow_01");
			}
			break;
		case 64:
			if (!func_41(uParam0->f_3, 4))
			{
				uParam0->f_4 = 6;
				uParam0->f_6[0] = joaat("a_m_m_unicorpse_01");
				uParam0->f_6[1] = joaat("a_m_m_unicorpse_01");
				uParam0->f_6[2] = joaat("a_m_m_unicorpse_01");
				uParam0->f_6[3] = joaat("a_m_m_unicorpse_01");
				uParam0->f_6[4] = joaat("a_m_m_unicorpse_01");
				uParam0->f_6[5] = joaat("a_m_m_unicorpse_01");
			}
			break;
		case 16:
			uParam0->f_4 = 1;
			uParam0->f_6[0] = joaat("a_f_m_unicorpse_01");
			break;
		case 512:
			uParam0->f_4 = 5;
			uParam0->f_6[0] = joaat("a_m_m_unicorpse_01");
			uParam0->f_6[1] = joaat("a_m_m_unicorpse_01");
			uParam0->f_6[2] = joaat("a_f_m_unicorpse_01");
			uParam0->f_6[3] = joaat("a_f_m_unicorpse_01");
			uParam0->f_6[4] = joaat("a_m_y_unicorpse_01");
			break;
		case 32:
			if (func_89(uParam0, 1126694912 /* Float: 168f */))
			{
				uParam0->f_4 = 2;
				uParam0->f_6[0] = joaat("a_m_m_unicorpse_01");
				uParam0->f_6[1] = joaat("a_m_m_unicorpse_01");
			}
			break;
		case 16384:
			if (!func_41(uParam0->f_3, 4))
			{
				uParam0->f_4 = 3;
				uParam0->f_6[0] = joaat("a_m_m_unicorpse_01");
			}
			break;
		case 65536:
			if (!func_41(uParam0->f_3, 4))
			{
				uParam0->f_22[0] = 2062995136;
				if (!func_84(func_83(uParam0->f_5), 2))
				{
					uParam0->f_22[1] = joaat("p_cs_rt_envelope01x");
				}
			}
			break;
		case 2:
		case 4:
		case 8:
		case 128:
		case 1024:
		case 2048:
		case 262144:
			break;
		default:
			break;
	}
}

int func_23(var uParam0)
{
	if (!func_41(uParam0->f_3, 4))
	{
		if (uParam0->f_48)
		{
			func_90(&(Local_73.f_128));
		}
	}
	func_91(uParam0, &Local_73);
	return 1;
}

void func_24(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (!&uParam0->f_6[iVar0] == 0)
		{
			STREAMING::REQUEST_MODEL(&(uParam0->f_6[iVar0]), false);
		}
		iVar0++;
	}
}

void func_25(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (!&uParam0->f_22[iVar0] == 0)
		{
			STREAMING::REQUEST_MODEL(&(uParam0->f_22[iVar0]), false);
		}
		iVar0++;
	}
}

void func_26(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_92(uParam0, iVar0, 0)))
		{
			if (!ANIMSCENE::_0x25557E324489393C(&(uParam0->f_36[iVar0])))
			{
				if (func_93(uParam0, iVar0))
				{
					iParam1 = 8;
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(func_92(uParam0, iVar0, 1)))
				{
					uParam0->f_36[iVar0] = ANIMSCENE::_CREATE_ANIM_SCENE(func_92(uParam0, iVar0, 0), iParam1, func_92(uParam0, iVar0, 1), false, true);
				}
				else
				{
					uParam0->f_36[iVar0] = ANIMSCENE::_CREATE_ANIM_SCENE(func_92(uParam0, iVar0, 0), iParam1, 0, false, true);
				}
				ANIMSCENE::LOAD_ANIM_SCENE(&(uParam0->f_36[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_27(var uParam0)
{
}

int func_28(var uParam0)
{
	if (!func_94(uParam0) || !func_95(uParam0))
	{
		return 0;
	}
	return 1;
}

int func_29(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_92(uParam0, iVar0, 0)))
		{
			if (!ANIMSCENE::_0x477122B8D05E7968(&(uParam0->f_36[iVar0]), 1, 0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_30(var uParam0)
{
	return 1;
}

bool func_31(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

Vector3 func_32(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 32768:
			switch (iParam1)
			{
				case 0:
					return 2119f, -1836.355f, 41.5868f;
				case 1:
					return 2119.727f, -1834.759f, 41.5868f;
				case 2:
					return 2086.978f, -1817.427f, 42.94f;
				default:
					break;
			}
			break;
		case 131072:
			switch (iParam1)
			{
				case 0:
					return -689.3527f, 1046.65f, 134.253f;
				case 1:
					return -689.9694f, 1045.613f, 133.7922f;
				default:
					break;
			}
			break;
		case 8192:
			switch (iParam1)
			{
				case 0:
					return -1607.909f, -202.6873f, 160.0056f;
				case 1:
					return -1597.202f, -194.4726f, 140.2473f;
				case 2:
					return -1605.202f, -191.5559f, 146.978f;
				case 3:
					return -1598.868f, -190.1475f, 142.4308f;
				case 4:
					return -1621.278f, -211.1197f, 159.4808f;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return 1983.052f, 1192.364f, 170.4026f;
				default:
					break;
			}
			break;
		case 64:
			switch (iParam1)
			{
				case 0:
					return -2037.121f, -1901.752f, 109.4507f;
				case 1:
					return -2031.363f, -1932.45f, 108.5494f;
				case 2:
					return -2038.634f, -1898.968f, 109.3499f;
				case 3:
					return -2079.085f, -1890.234f, 112.6797f;
				case 4:
					return -2031.766f, -1930.215f, 108.6972f;
				case 5:
					return -2062.604f, -1926.374f, 112.3715f;
				default:
					break;
			}
			break;
		case 4096:
			switch (iParam1)
			{
				case 0:
					return 1133.502f, -979.8339f, 68.3721f;
				case 1:
					return 1130.892f, -979.0982f, 69.1826f;
				case 2:
					return 1129.659f, -985.3533f, 67.7327f;
				case 3:
					return 1129.455f, -984.3824f, 67.77183f;
				case 4:
					return 1130.085f, -985.6208f, 67.75238f;
				default:
					break;
			}
			break;
		case 256:
			switch (iParam1)
			{
				case 0:
					return 1586.795f, 2192.223f, 323.4134f;
				case 1:
					return 1592.79f, 2194.295f, 323.0721f;
				case 2:
					return 1593.036f, 2193.619f, 323.0598f;
				case 3:
					return 1592.932f, 2194.539f, 323.0347f;
				case 4:
					return 1592.46f, 2195.062f, 323.0381f;
				default:
					break;
			}
			break;
		case 512:
			switch (iParam1)
			{
				case 0:
					return 1889.1f, 304.105f, 77.0837f;
				case 1:
					return 1887.51f, 300.0471f, 78.8974f;
				case 2:
					return 1889.929f, 299.6248f, 76.7374f;
				case 3:
					return 1887.172f, 301.2639f, 76.0748f;
				case 4:
					return 1888.521f, 299.7741f, 76.1599f;
				default:
					break;
			}
			break;
		case 32:
			switch (iParam1)
			{
				case 0:
					return -155.9291f, 1491.316f, 115.17f;
				case 1:
					return -155.5224f, 1489.777f, 115.1745f;
				default:
					break;
			}
			break;
		case 16384:
			switch (iParam1)
			{
				case 0:
					return -2031.882f, 2082.897f, 331.4405f;
				default:
					break;
			}
			break;
		case 2:
		case 4:
		case 8:
		case 128:
		case 1024:
		case 2048:
		case 65536:
		case 262144:
			break;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_33(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 32768:
			switch (iParam1)
			{
				case 0:
					return 0.1f;
				case 1:
					return 124.56f;
				case 2:
					return -111.72f;
				default:
					break;
			}
			break;
		case 131072:
			switch (iParam1)
			{
				case 0:
					return -143.96f;
				case 1:
					return 125.28f;
				default:
					break;
			}
			break;
		case 8192:
			switch (iParam1)
			{
				case 0:
					return -74.96f;
				case 1:
					return 155.46f;
				case 2:
					return 0f;
				case 3:
					return 0f;
				case 4:
					return 117.5512f;
				default:
					break;
			}
			break;
		case 64:
			switch (iParam1)
			{
				case 0:
					return 176.81f;
				case 1:
					return 91.91f;
				case 2:
					return -96.42f;
				case 3:
					return -123.76f;
				case 4:
					return -179.66f;
				case 5:
					return -99.82f;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return 101.62f;
				default:
					break;
			}
			break;
		case 4096:
			switch (iParam1)
			{
				case 0:
					return -155.52f;
				case 1:
					return 146f;
				case 2:
					return -40.99f;
				case 3:
					return 16.8645f;
				case 4:
					return 182.1318f;
				default:
					break;
			}
			break;
		case 256:
			switch (iParam1)
			{
				case 0:
					return -33.09f;
				case 1:
					return -48.05f;
				case 2:
					return 182.1318f;
				case 3:
					return 182.1318f;
				case 4:
					return 182.1318f;
				default:
					break;
			}
			break;
		case 512:
			switch (iParam1)
			{
				case 0:
					return 180f;
				case 1:
					return 12.78f;
				case 2:
					return 72.46f;
				case 3:
					return -148.24f;
				case 4:
					return 55.1f;
				default:
					break;
			}
			break;
		case 32:
			switch (iParam1)
			{
				case 0:
					return 99.07f;
				case 1:
					return 166.65f;
				default:
					break;
			}
			break;
		case 16384:
			switch (iParam1)
			{
				case 0:
					return 135f;
				default:
					break;
			}
			break;
		case 2:
		case 4:
		case 8:
		case 128:
		case 1024:
		case 2048:
		case 65536:
		case 262144:
			break;
		default:
			break;
	}
	return 0f;
}

void func_34(var uParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	if (!&uParam0->f_6[iParam5] == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[iParam5])))
		{
			if (!func_96(uParam0, iParam5))
			{
				bParam8 = true;
			}
			if (uParam0->f_1 == 8192)
			{
				if (iParam5 == 2 || iParam5 == 3)
				{
					uParam0->f_13[iParam5] = func_97(&(uParam0->f_6[iParam5]), vParam1, iParam4, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0);
				}
				else
				{
					uParam0->f_13[iParam5] = func_97(&(uParam0->f_6[iParam5]), vParam1, iParam4, 1, 1, 0, 1, iParam7, 1, 0, 0, 0, 0);
				}
			}
			else
			{
				uParam0->f_13[iParam5] = func_97(&(uParam0->f_6[iParam5]), vParam1, iParam4, 1, 1, 0, 1, iParam7, 1, 0, 0, 0, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_13[iParam5])))
			{
				if (bParam6)
				{
					ENTITY::_0x9587913B9E772D29(&(uParam0->f_13[iParam5]), 0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uParam0->f_13[iParam5]), true);
				TASK::TASK_STAND_STILL(&(uParam0->f_13[iParam5]), -1);
				if (!bParam8)
				{
					ENTITY::SET_ENTITY_VISIBLE(&(uParam0->f_13[iParam5]), false);
				}
				uParam0->f_20++;
			}
		}
		else
		{
			uParam0->f_20++;
		}
	}
	else
	{
		uParam0->f_20++;
	}
}

void func_35(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

Vector3 func_36(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 32768:
			switch (iParam1)
			{
				case 0:
					return 2086.978f, -1817.427f, 42.94f;
				default:
					break;
			}
			break;
		case 16384:
			switch (iParam1)
			{
				case 0:
					return -2032.043f, 2082.895f, 331.7289f;
				default:
					break;
			}
			break;
		case 256:
			switch (iParam1)
			{
				case 0:
					return 1586.606f, 2192.719f, 323.4388f;
				case 1:
					return 1593.214f, 2194.468f, 323.0663f;
				default:
					break;
			}
			break;
		case 8192:
			switch (iParam1)
			{
				case 0:
					return -1724.69f, -86.3643f, 180.7049f;
				case 1:
					return -1590.34f, -182.8431f, 136.87f;
				default:
					break;
			}
			break;
		case 65536:
			switch (iParam1)
			{
				case 0:
					return 1389.486f, -2079.036f, 51.5495f;
				case 1:
					return 1390.9f, -2086f, 52.375f;
				default:
					break;
			}
			break;
		case 4096:
			switch (iParam1)
			{
				case 0:
					return 1129.4f, -985.02f, 67.78f;
				default:
					break;
			}
			break;
		case 131072:
			switch (iParam1)
			{
				case 0:
					return -690.8923f, 1044.765f, 134.669f;
				default:
					break;
			}
			break;
		case 2:
		case 4:
		case 8:
		case 16:
		case 32:
		case 128:
		case 512:
		case 1024:
		case 2048:
		case 262144:
			break;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_37(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 32768:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				default:
					break;
			}
			break;
		case 16384:
			switch (iParam1)
			{
				case 0:
					return -87.6368f, -17.6933f, -68.3214f;
				default:
					break;
			}
			break;
		case 256:
			switch (iParam1)
			{
				case 0:
					return 90f, 0f, 90f;
				case 1:
					return 90f, 0f, 0f;
				default:
					break;
			}
			break;
		case 8192:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 7f;
				default:
					break;
			}
			break;
		case 65536:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 180f;
				default:
					break;
			}
			break;
		case 4096:
			switch (iParam1)
			{
				case 0:
					return 90f, 0f, 90f;
				default:
					break;
			}
			break;
		case 131072:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -25f;
				default:
					break;
			}
			break;
		case 2:
		case 4:
		case 8:
		case 16:
		case 32:
		case 128:
		case 512:
		case 1024:
		case 2048:
		case 262144:
			break;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_38(var uParam0, vector3 vParam1, vector3 vParam4, int iParam7)
{
	if (!&uParam0->f_22[iParam7] == 0 && !func_76(vParam1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_29[iParam7])))
		{
			uParam0->f_29[iParam7] = OBJECT::CREATE_OBJECT(&(uParam0->f_22[iParam7]), vParam1, true, true, false, false, true);
			if (!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_29[iParam7])))
			{
				ENTITY::SET_ENTITY_COORDS(&(uParam0->f_29[iParam7]), vParam1, true, false, true, true);
				ENTITY::SET_ENTITY_ROTATION(&(uParam0->f_29[iParam7]), vParam4, 2, true);
			}
			else
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_39(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 32768:
			switch (iParam1)
			{
				case 0:
					if (!func_41(uParam0->f_3, 4))
					{
						return -1984759420;
					}
					else
					{
						return 50923185;
					}
					break;
				case 1:
					return 550457596;
				case 2:
					return 855242065;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return -183039148;
				default:
					break;
			}
			break;
		case 64:
			switch (iParam1)
			{
				case 0:
					return -2089787434;
				case 1:
					return 1908325491;
				case 2:
					return 254342877;
				case 3:
					return -52800960;
				case 4:
					return -1197356488;
				case 5:
					return -1427362099;
				default:
					break;
			}
			break;
		case 8192:
			switch (iParam1)
			{
				case 0:
					return 1980915318;
				case 1:
					return 569479591;
				case 2:
					return -937613161;
				case 3:
					return -937613161;
				default:
					break;
			}
			break;
		case 4096:
			switch (iParam1)
			{
				case 0:
					return 1112811077;
				case 1:
					return 1813871063;
				case 2:
					return 1112811077;
				default:
					break;
			}
			break;
		case 256:
			switch (iParam1)
			{
				case 0:
					return 816323515;
				case 1:
					return 1113964342;
				default:
					break;
			}
			break;
		case 512:
			switch (iParam1)
			{
				case 0:
					return 2058743928;
				case 1:
					return 794165431;
				case 2:
					return 989984119;
				case 3:
					return -565729830;
				case 4:
					return 1022043639;
				default:
					break;
			}
			break;
		case 32:
			switch (iParam1)
			{
				case 0:
					return 1156572673;
				case 1:
					return -938873797;
				default:
					break;
			}
			break;
		case 131072:
			switch (iParam1)
			{
				case 0:
					return 1202038884;
				case 1:
					return 1511738703;
				default:
					break;
			}
			break;
		case 16384:
			switch (iParam1)
			{
				case 0:
					return -774890814;
				default:
					break;
			}
			break;
		case 2:
		case 4:
		case 8:
		case 128:
		case 1024:
		case 2048:
		case 65536:
		case 262144:
			break;
		default:
			break;
	}
	return 41788943;
}

void func_40(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_98(iParam0, iParam1))
		{
			if (func_99(iParam0, iParam1))
			{
				if (func_100(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_101(iParam0);
				}
			}
			else
			{
				PED::_0x1902C4CFCC5BE57C(iParam0, iParam1);
				PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
			}
			PED::_0xE3144B932DFDFF65(iParam0, 0f, -1, 1, 1);
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 10, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 3);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 0);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 5);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 7);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 8);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 9);
		}
	}
}

bool func_41(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_42(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (!func_102(uParam0->f_13[iVar0], iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_43(var uParam0)
{
	if (!func_42(uParam0))
	{
		return 0;
	}
	func_103(uParam0, 5);
	return 1;
}

void func_44(var uParam0, int iParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[iParam1])))
	{
		if (ENTITY::IS_ENTITY_DEAD(&(uParam0->f_13[iParam1])))
		{
		}
		func_104(uParam0->f_13[iParam1], iParam2);
		func_105(uParam0->f_13[iParam1], 0);
		PED::SET_PED_CONFIG_FLAG(&(uParam0->f_13[iParam1]), 26, true);
		PED::_0xAE6004120C18DF97(&(uParam0->f_13[iParam1]), 1, 0);
		WEAPON::REMOVE_ALL_PED_WEAPONS(&(uParam0->f_13[iParam1]), true, true);
	}
}

void func_45(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "scripted_loot_only", true);
		ENTITY::_0x8C03CD6B5E0E85E8(iParam0, joaat("empty"));
	}
}

void func_46(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "honor_block"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_106(iParam1));
		DECORATOR::DECOR_SET_INT(iParam0, "honor_block", iVar0);
	}
}

int func_47(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 4096:
			return -211871734 /* GXTEntry: "Letter to Annette from Claude" */;
		case 8192:
			if (iParam1 == 0)
			{
				return 643954294 /* GXTEntry: "Wedding Certificate" */;
			}
			else if (iParam1 == 1)
			{
				return -1800171607 /* GXTEntry: "Bride Photograph" */;
			}
			break;
	}
	return 0;
}

void func_48(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		uVar0 = func_107(iParam0);
		func_108(iParam0, iParam1, iParam2, uVar0);
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type1"))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_type1", iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_amt1", iParam2);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_model1", iParam3);
		return;
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type2"))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_type2", iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_amt2", iParam2);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_model2", iParam3);
		return;
	}
}

void func_49(var uParam0, var uParam1, int iParam2)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_92(uParam0, iParam2, 0)))
	{
		if (ANIMSCENE::_0x25557E324489393C(*uParam1))
		{
			if (ANIMSCENE::_0x477122B8D05E7968(*uParam1, 1, 0))
			{
				func_109(uParam0, uParam1, iParam2);
				ANIMSCENE::START_ANIM_SCENE(*uParam1);
			}
		}
	}
}

void func_50(var uParam0, int iParam1)
{
	func_110(uParam0, iParam1);
}

int func_51(var uParam0, var uParam1)
{
	if (func_111(*uParam0))
	{
		func_112(*uParam0, *uParam1);
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

bool func_52(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_53(var uParam0)
{
	int iVar0;

	iVar0 = 1;
	while (iVar0 <= 3)
	{
		switch (&uLocal_230[iVar0])
		{
			case 0:
				func_113(uLocal_230[iVar0], 1);
				break;
			case 1:
				if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[iVar0])) && ENTITY::IS_ENTITY_DEAD(&(uParam0->f_13[iVar0])))
				{
					func_114(uParam0->f_13[iVar0], iVar0);
					ENTITY::SET_ENTITY_VISIBLE(&(uParam0->f_13[iVar0]), true);
					func_113(uLocal_230[iVar0], 7);
				}
				break;
			case 7:
				break;
		}
		iVar0++;
	}
}

int func_54(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (bParam6)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return 1;
		}
	}
	else if (func_115(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return 1;
	}
	return 0;
}

void func_55(var uParam0)
{
	int iVar0;

	if (!func_41(uParam0->f_3, 8192))
	{
		switch (uParam0->f_1)
		{
			case 16:
				iVar0 = -727372692;
				break;
			case 32:
				iVar0 = 532503220;
				break;
			case 64:
				iVar0 = 562599937;
				break;
			case 128:
				iVar0 = 1714554710;
				break;
			case 256:
				iVar0 = 1610646968;
				break;
			case 512:
				iVar0 = -1249289544;
				break;
			case 1024:
				iVar0 = -508074447;
				break;
			case 2048:
				iVar0 = -1917132299;
				break;
			case 4096:
				iVar0 = -763271696;
				break;
			case 8192:
				iVar0 = 1116308524;
				break;
			case 16384:
				iVar0 = 379859357;
				break;
			case 32768:
				iVar0 = 1822876181;
				break;
			case 65536:
				iVar0 = 1354284392;
				break;
			case 131072:
				iVar0 = 43681669;
				break;
			case 262144:
				iVar0 = 1871337449;
				break;
		}
		if (iVar0 != 0)
		{
			if (!MAP::_0x3F81EA4275D39D6F(iVar0))
			{
				MAP::_0xD8C7162AB2E2AF45(iVar0);
			}
		}
		func_50(&(uParam0->f_3), 8192);
		func_117(func_116(1933084904), 1);
	}
}

void func_56(int iParam0, int iParam1, bool bParam2)
{
	*iParam0 = iParam1;
	if (bParam2)
	{
		func_118(&(iParam0->f_1));
	}
}

void func_57(var uParam0, var uParam1)
{
	*uParam0 = uParam1;
}

void func_58(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
	uParam0->f_3 = uParam0->f_2;
	uParam0->f_2 = func_119(iParam1);
	uParam0->f_4 = func_120(iParam1);
	uParam0->f_5 = func_121(iParam1);
	uParam0->f_6 = func_122(iParam1);
	uParam0->f_7 = func_123(iParam1);
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = func_124(iParam1);
}

void func_59(var uParam0, int iParam1)
{
	func_125(&(iParam1->f_14.f_13), &(uParam0->f_13[0]), "MH1_STRANGER", 0);
	if (func_126())
	{
		func_125(&(iParam1->f_14.f_13), Global_35, "JOHN", 0);
	}
	else
	{
		func_125(&(iParam1->f_14.f_13), Global_35, "ARTHUR", 0);
	}
}

void func_60(var uParam0, int iParam1)
{
	if (!func_127(uParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_29[0])))
		{
			if (!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_29[0])))
			{
				if (func_54(Global_35, func_36(uParam0, 0), 15f, 1, 1))
				{
					if (!func_41(uParam0->f_3, 4))
					{
						TASK::_0xA6A76D666A281F2D(&(uParam0->f_29[0]), 1790626285);
					}
					else if (!func_41(uParam0->f_3, 8))
					{
						TASK::_0xA6A76D666A281F2D(&(uParam0->f_29[0]), 452635242);
					}
				}
				if (PED::_0x09B83E68DE004CD4(&(uParam0->f_29[0])) == Global_35)
				{
					if (!func_41(uParam0->f_3, 4))
					{
						func_128(uParam0, iParam1, 1);
					}
					else
					{
						func_129(uParam0, iParam1);
					}
					func_56(iParam1, 8, 1);
				}
			}
		}
	}
}

void func_61(var uParam0, int iParam1)
{
	if (((ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[0])) && !ENTITY::IS_ENTITY_DEAD(&(uParam0->f_13[0]))) && ENTITY::DOES_ENTITY_EXIST(Global_35)) && !ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		iParam1->f_6 = func_130(Global_35, &(uParam0->f_13[0]), 0, 0);
	}
	else
	{
		iParam1->f_6 = 1E+07f;
	}
}

int func_62(var uParam0, int iParam1)
{
	if (func_131(uParam0, iParam1))
	{
		func_132(uParam0, iParam1, 1, 1);
		func_56(iParam1, 5, 1);
		return 1;
	}
	return 0;
}

void func_63(var uParam0, int iParam1)
{
	int iVar0;

	if (func_133(&(iParam1->f_14), &(iParam1->f_4), 2))
	{
		iVar0 = func_134(uParam0);
		if (func_135(iParam1, 10f))
		{
			if (func_136())
			{
				func_58(&(iParam1->f_14), 5);
			}
			else if (iVar0 == 2)
			{
				func_58(&(iParam1->f_14), 4);
			}
			else
			{
				func_58(&(iParam1->f_14), 3);
			}
			func_137(uParam0, iParam1);
			func_56(iParam1, 3, 1);
		}
		else if (func_135(iParam1, 17f))
		{
			if (func_136())
			{
				func_58(&(iParam1->f_14), 5);
				func_56(iParam1, 3, 1);
			}
			else if (iVar0 == 2)
			{
				if (func_138(&(iParam1->f_14)) == 7)
				{
					func_58(&(iParam1->f_14), 0);
				}
				else
				{
					func_137(uParam0, iParam1);
					func_58(&(iParam1->f_14), 7);
				}
			}
			else if (func_138(&(iParam1->f_14)) == 6)
			{
				func_58(&(iParam1->f_14), 0);
			}
			else
			{
				func_137(uParam0, iParam1);
				func_58(&(iParam1->f_14), 6);
			}
		}
		else if (func_135(iParam1, 35f) && !func_136())
		{
			if (iVar0 == 2)
			{
				if (func_138(&(iParam1->f_14)) == 9)
				{
					func_58(&(iParam1->f_14), 0);
				}
				else
				{
					func_137(uParam0, iParam1);
					func_58(&(iParam1->f_14), 9);
				}
			}
			else if (func_138(&(iParam1->f_14)) == 8)
			{
				func_58(&(iParam1->f_14), 0);
			}
			else
			{
				func_137(uParam0, iParam1);
				func_58(&(iParam1->f_14), 8);
			}
		}
		else if (func_138(&(iParam1->f_14)) == 1)
		{
			func_58(&(iParam1->f_14), 2);
		}
		else
		{
			func_58(&(iParam1->f_14), 1);
		}
	}
}

void func_64(var uParam0, int iParam1)
{
	if ((!func_41(iParam1->f_4, 4) && !func_41(iParam1->f_5, 4)) && !func_127(uParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[1])) && ENTITY::_0xEF2D9ED7CE684F08(&(uParam0->f_13[1])) == Global_35)
		{
			func_50(&(iParam1->f_4), 4);
			func_128(uParam0, iParam1, 4);
			func_139(uParam0, 0);
		}
	}
	if (!func_127(uParam0))
	{
		if (!func_41(iParam1->f_5, 8))
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_29[1])))
			{
				if (!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_29[1])))
				{
					if (func_54(Global_35, func_36(uParam0, 1), 15f, 1, 1))
					{
						TASK::_0xA6A76D666A281F2D(&(uParam0->f_29[1]), 643954294);
						if (func_140())
						{
							if (func_141(643954294 /* GXTEntry: "Wedding Certificate" */))
							{
								func_128(uParam0, iParam1, 8);
							}
						}
					}
				}
			}
		}
	}
}

void func_65(var uParam0, int iParam1)
{
	if (func_133(&(iParam1->f_14), &(iParam1->f_4), 2))
	{
		func_132(uParam0, iParam1, 0, 0);
		func_118(&(iParam1->f_8));
		func_56(iParam1, 4, 1);
	}
}

void func_66(var uParam0, int iParam1)
{
	char[] cVar0[8];

	if (!func_135(iParam1, 50f))
	{
		if (func_142(&(iParam1->f_8)))
		{
			func_143(&(iParam1->f_8));
		}
		func_56(iParam1, 6, 1);
	}
	if (iParam1->f_7 < 4)
	{
		if (func_135(iParam1, 9f))
		{
			if (func_142(&(iParam1->f_8)))
			{
				if (func_144(&(iParam1->f_8), 9f))
				{
					iParam1->f_7++;
					cVar0 = func_145(iParam1->f_7);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(cVar0))
					{
						func_147(&(iParam1->f_14.f_13), func_146(cVar0), 0, -1, 0, 0);
					}
				}
			}
			else
			{
				func_118(&(iParam1->f_8));
			}
		}
		else if (func_142(&(iParam1->f_8)))
		{
			func_143(&(iParam1->f_8));
		}
	}
}

void func_67(var uParam0, int iParam1)
{
	if (!func_41(iParam1->f_4, 8))
	{
		if (!func_142(&(iParam1->f_11)))
		{
			func_118(&(iParam1->f_11));
		}
		else if (func_144(&(iParam1->f_11), 3.5f))
		{
			func_147(&(iParam1->f_14.f_13), func_146("MH1_AGGRO_FLEE"), 0, -1, 0, 0);
			func_50(&(iParam1->f_4), 8);
		}
	}
	if (!func_135(iParam1, 50f))
	{
		func_56(iParam1, 6, 1);
	}
}

void func_68(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[0])))
	{
		PED::SET_PED_KEEP_TASK(&(uParam0->f_13[0]), true);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0->f_13[0]);
	}
	if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[4])))
	{
		PED::SET_PED_KEEP_TASK(&(uParam0->f_13[4]), true);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0->f_13[4]);
	}
}

void func_69(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		if (TASK::_0x841475AC96E794D1(&(uParam0->f_41[iVar0])))
		{
			TASK::_0x81948DFE4F5A0283(&(uParam0->f_41[iVar0]));
		}
		iVar0++;
	}
}

void func_70(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		func_148(uParam0->f_29[iVar0], bParam1, iVar0);
		iVar0++;
	}
}

void func_71(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		func_149(uParam0->f_13[iVar0], bParam1, iVar0);
		iVar0++;
	}
}

void func_72(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_92(uParam0, iVar0, 0)))
		{
			if (ANIMSCENE::_0x25557E324489393C(&(uParam0->f_36[iVar0])))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(&(uParam0->f_36[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_73(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_46))
	{
		func_150(&(uParam0->f_45), uParam0->f_46, 0);
		VOLUME::_DELETE_VOLUME(uParam0->f_46);
	}
	func_151(uParam0);
}

void func_74(var uParam0)
{
	func_152(uParam0);
	func_153(uParam0);
}

Vector3 func_75(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 32768:
			return 2089.99f, -1817.414f, 41.9281f;
		case 131072:
			return -689.7184f, 1043.631f, 132.8593f;
		case 256:
			return 1586.992f, 2193.114f, 323.3805f;
		case 16:
			return 1984.216f, 1193.481f, 171.7942f;
		case 512:
			return 1888.297f, 301.679f, 77.312f;
		case 32:
			return -155.657f, 1489.998f, 117.244f;
		case 16384:
			return -1961.747f, 2159.31f, 326.6873f;
		case 64:
			return -2054.997f, -1910.598f, 110.9531f;
		case 128:
			return -2109.321f, 1843.872f, 256.096f;
		case 2048:
			return 1462.616f, 811.213f, 99.923f;
		case 4096:
			return 1134.45f, -979.7036f, 69.06891f;
		case 2:
			return -1553.813f, 257.88f, 110.429f;
		case 4:
			return 1462.772f, -1582.476f, 70.11337f;
		case 8:
			return 1794.212f, 458.8075f, 109.4694f;
		case 8192:
			return -1724.538f, -86.73952f, 180.7049f;
		case 1024:
			return -2370.197f, 472.3461f, 132.259f;
		case 65536:
			return 1389.648f, -2082.044f, 53.0335f;
		case 262144:
			return 1185.428f, -101.4211f, 96.4688f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_76(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_77(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 32768:
			return 0f, 0f, 45.54978f;
		case 131072:
			return 0f, 0f, -54.83283f;
		case 256:
			return 0f, 0f, 30.56075f;
		case 16:
			return 0f, 0f, -34.16869f;
		case 512:
			return 0f, 0f, 0f;
		case 32:
			return 0f, 0f, 25f;
		case 16384:
			return 0f, 0f, -4.355095f;
		case 64:
			return 0f, 0f, 0f;
		case 128:
			return 0f, 0f, 49.964f;
		case 2048:
			return 0f, 0f, 45f;
		case 4096:
			return 0f, 0f, -35.58028f;
		case 2:
			return 0f, 0f, 0f;
		case 4:
			return 0f, 0f, -26.22593f;
		case 8:
			return 0f, 0f, -15.84809f;
		case 8192:
			return 0f, 0f, -55.92001f;
		case 1024:
			return 0f, 0f, 0f;
		case 65536:
			return 0f, 0f, 19.96441f;
		case 262144:
			return 0f, 0f, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_78(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 32768:
			return 8.537304f, 6.882811f, 9.092137f;
		case 131072:
			return 7.909408f, 5.245724f, 9.092137f;
		case 256:
			return 4.106579f, 4.25f, 5.262621f;
		case 16:
			return 5.127945f, 9.805676f, 4f;
		case 512:
			return 5.76f, 7.6f, 3f;
		case 32:
			return 4f, 8f, 5f;
		case 16384:
			return 4.966977f, 5.789305f, 4.917263f;
		case 64:
			return 43.91189f, 39.83597f, 14.89902f;
		case 128:
			return 6f, 7f, 5f;
		case 2048:
			return 6.7f, 12.2f, 8f;
		case 4096:
			return 9.60421f, 6.498575f, 5f;
		case 2:
			return 12.61144f, 13.74787f, 21.60371f;
		case 4:
			return 18.62256f, 11.90544f, 36.47224f;
		case 8:
			return 19.32396f, 17.88757f, 40.77715f;
		case 8192:
			return 2f, 2f, 5f;
		case 1024:
			return 5f, 5f, 4f;
		case 65536:
			return 4.720003f, 10.4287f, 3f;
		case 262144:
			return 10.84954f, 5f, 5f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_79(var uParam0)
{
}

int func_80(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 32:
		case 128:
		case 256:
		case 512:
		case 16384:
		case 32768:
		case 131072:
			return 1;
		case 2:
		case 4:
		case 8:
		case 16:
		case 1024:
		case 2048:
		case 4096:
		case 8192:
		case 65536:
		case 262144:
			break;
		default:
			break;
	}
	return 0;
}

int func_81(var uParam0, int iParam1)
{
	if (!func_154(uParam0, iParam1) == 0 && !TASK::_0x841475AC96E794D1(&(uParam0->f_41[iParam1])))
	{
		uParam0->f_41[iParam1] = TASK::CREATE_SCENARIO_POINT(func_154(uParam0, iParam1), func_155(uParam0, iParam1), func_156(uParam0, iParam1), func_157(uParam0, iParam1), 0, 0);
	}
	return 1;
}

bool func_82(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_158(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

int func_83(int iParam0)
{
	if (!func_111(iParam0))
	{
		return -1;
	}
	return func_159(iParam0);
}

bool func_84(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_85(int iParam0, bool bParam1, bool bParam2)
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
		if (func_160())
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
		iVar0 = func_161(&(Global_1898164->f_1[0 /*5*/]));
		if (func_162(iVar0) && func_163(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_111(&(Global_1898164->f_1[0 /*5*/])))
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

int func_86(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_164(bParam1, bParam2, bParam3);
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

bool func_87()
{
	return Global_1310750->f_16077 != 0;
}

bool func_88(int iParam0)
{
	return ((*Global_1310750)[iParam0 /*111*/])->f_48;
}

int func_89(var uParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar1 = func_165();
	if (func_166(uParam0->f_1, &fVar0))
	{
		if (fVar0 > 0f)
		{
			fVar2 = (fVar1 - fVar0);
			if (fVar2 >= fParam1)
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_90(var uParam0)
{
	func_167(uParam0, 0);
	func_168(uParam0, 0);
	func_169(uParam0, 1);
	func_170(uParam0, 1);
	func_171(uParam0, 0);
	func_172(uParam0, 1);
	func_173(uParam0, 1, 1, 1);
}

void func_91(var uParam0, int iParam1)
{
	func_174(&(uParam0->f_5), &(iParam1->f_5));
}

char* func_92(var uParam0, int iParam1, int iParam2)
{
	switch (uParam0->f_1)
	{
		case 32768:
			if (!func_41(uParam0->f_3, 4))
			{
				switch (iParam1)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@shack_on_the_run@ig1_corpse";
							case 1:
								return "pb_dead";
							default:
								break;
						}
						break;
					case 1:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@shack_on_the_run@ig2_corpse";
							case 1:
								return "pb_dead";
							default:
								break;
						}
						break;
					case 2:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@shack_on_the_run@ig2";
							case 1:
								return "pb_base";
							default:
								break;
						}
						break;
				}
			}
			else if (!func_41(uParam0->f_3, 8))
			{
				switch (iParam1)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@shack_on_the_run@ig1_corpse";
							case 1:
								return "pb_dead";
							default:
								break;
						}
						break;
					case 1:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@shack_on_the_run@ig2_corpse";
							case 1:
								return "pb_dead";
							default:
								break;
						}
						break;
				}
			}
			break;
		case 131072:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return "script@beat@wilderness@discoverables@shack_starved_children@shack_dead_children";
						case 1:
							return "pl_dead_children";
						default:
							break;
					}
					break;
			}
			break;
		case 8192:
			if (!func_41(uParam0->f_3, 4))
			{
				if (uParam0->f_48)
				{
					switch (iParam1)
					{
						case 0:
							if ((!func_84(func_83(uParam0->f_5), 4) && !func_84(func_83(uParam0->f_5), 2)) && !func_84(func_83(uParam0->f_5), 8))
							{
								switch (iParam2)
								{
									case 0:
										return "script@ambient@discoverables@missing_husband@action";
									case 1:
										return "PBL_IDLE2";
									default:
										break;
								}
							}
							break;
						case 1:
							if (!func_84(func_83(uParam0->f_5), 4))
							{
								switch (iParam2)
								{
									case 0:
										return "script@beat@wilderness@discoverables@missing_husband@missing_husband";
									case 1:
										return "pl_missing_husband";
									default:
										break;
								}
							}
							break;
					}
				}
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return "script@ambient@discoverables@civil_war_bride@civil_war_bride";
						default:
							break;
					}
					break;
			}
			break;
		case 64:
			if (!func_41(uParam0->f_3, 4))
			{
				switch (iParam1)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@dead_settler@dead_settler";
							case 1:
								return "pl_dead_settler";
							default:
								break;
						}
						break;
				}
			}
			break;
		case 4096:
			if (!func_41(uParam0->f_3, 4) || func_89(uParam0, 1126694912 /* Float: 168f */))
			{
				switch (iParam1)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@shack_love_triangle@hisandher_pose";
							default:
								break;
						}
						break;
				}
			}
			break;
		case 256:
			if (!func_41(uParam0->f_3, 4))
			{
				switch (iParam1)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@shack_gunfight@pose";
							default:
								break;
						}
						break;
				}
			}
			break;
		case 512:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return "script@beat@wilderness@shack_happy_family@dead_family";
						default:
							break;
					}
					break;
			}
			break;
		case 32:
			if (func_89(uParam0, 1126694912 /* Float: 168f */))
			{
				switch (iParam1)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@shack_dead_rivals@shack_dead_rivals";
							default:
								break;
						}
						break;
				}
			}
			break;
		case 16384:
			if (!func_41(uParam0->f_3, 4))
			{
				switch (iParam1)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return "script@beat@wilderness@discoverables@missingmountainman@missingmountainman";
							case 1:
								return "pl_Base";
							default:
								break;
						}
						break;
				}
			}
			break;
		case 2:
		case 4:
		case 8:
		case 128:
		case 1024:
		case 2048:
		case 65536:
		case 262144:
			break;
		default:
			break;
	}
	return "";
}

int func_93(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 32768)
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			return 1;
		}
	}
	else if (uParam0->f_1 == 8192)
	{
		if (iParam1 == 1)
		{
			return 1;
		}
	}
	else if (((((((uParam0->f_1 == 131072 || uParam0->f_1 == 16) || uParam0->f_1 == 64) || uParam0->f_1 == 4096) || uParam0->f_1 == 256) || uParam0->f_1 == 512) || uParam0->f_1 == 32) || uParam0->f_1 == 16384)
	{
		return 1;
	}
	return 0;
}

int func_94(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (!&uParam0->f_22[iVar0] == 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED(&(uParam0->f_22[iVar0])))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_95(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (!&uParam0->f_6[iVar0] == 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED(&(uParam0->f_6[iVar0])))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_96(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 32768)
	{
		if (!func_41(uParam0->f_3, 4))
		{
			if (iParam1 == 1 || iParam1 == 2)
			{
				return 1;
			}
		}
		else if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			return 1;
		}
	}
	else if (uParam0->f_1 == 8192)
	{
		if ((iParam1 == 1 || iParam1 == 2) || iParam1 == 3)
		{
			return 1;
		}
	}
	else if (uParam0->f_1 == 256)
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			return 1;
		}
	}
	else if (uParam0->f_1 == 4096)
	{
		if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			return 1;
		}
	}
	else if (((((uParam0->f_1 == 131072 || uParam0->f_1 == 16) || uParam0->f_1 == 64) || uParam0->f_1 == 512) || uParam0->f_1 == 32) || uParam0->f_1 == 16384)
	{
		return 1;
	}
	return 0;
}

int func_97(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_175(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_98(int iParam0, int iParam1)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	bVar0 = PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, ENTITY::GET_ENTITY_MODEL(iParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

int func_99(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return 0;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (iVar0 == iParam1)
	{
		return 1;
	}
	return 0;
}

int func_100(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return 0;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (!func_98(iParam0, iVar0))
	{
		return 1;
	}
	if (iVar0 != iParam1)
	{
		return 0;
	}
	iVar1 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	return PED::_0x610438375E5D1801(iVar1);
}

void func_101(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

int func_102(var uParam0, int iParam1)
{
	if ((ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0)) && !ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(*uParam0))
	{
		return 0;
	}
	return 1;
}

void func_103(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		func_176(uParam0->f_13[iVar0], iParam1, iVar0);
		iVar0++;
	}
}

void func_104(var uParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
		}
		PED::_0x6569F31A01B4C097(*uParam0, 0, iParam1);
		PED::_0x6569F31A01B4C097(*uParam0, 1, iParam1);
		PED::_0x6569F31A01B4C097(*uParam0, 6, iParam1);
		PED::_0x6569F31A01B4C097(*uParam0, 4, iParam1);
	}
}

void func_105(var uParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
		}
		ENTITY::_0x18FF3110CF47115D(*uParam0, 2, iParam1);
		ENTITY::_0x18FF3110CF47115D(*uParam0, 3, iParam1);
		ENTITY::_0x18FF3110CF47115D(*uParam0, 7, iParam1);
		ENTITY::_0x18FF3110CF47115D(*uParam0, 9, iParam1);
		ENTITY::_0x18FF3110CF47115D(*uParam0, 10, iParam1);
	}
}

int func_106(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 2139774588:
			return 1;
		case 1142025875: /* GXTEntry: "Murder" */
			return 2;
		case 1587891565:
			return 4;
		case 1877013492: /* GXTEntry: "Frighten" */
			return 32;
		case -643014279: /* GXTEntry: "Killed Vermin" */
			return 64;
		case -597116214: /* GXTEntry: "Killed Domestic Animal" */
			return 128;
		case 551416228: /* GXTEntry: "Killed Horse" */
			return 256;
		case 1022576842: /* GXTEntry: "Stole Horse" */
			return 512;
		case 953325896: /* GXTEntry: "Stole Donkey" */
			return 1024;
		case 508358508: /* GXTEntry: "Stole Mule" */
			return 2048;
		case -735200598: /* GXTEntry: "Trampled Innocent" */
			return 4096;
		case -856432278:
			return 8192;
		case -2010847721: /* GXTEntry: "Abandon Dead Animals" */
			return 16384;
		case 446961221: /* GXTEntry: "Watched Animal Bleedout" */
			return 32768;
		case -1972216640: /* GXTEntry: "Antagonize" */
			return 65536;
		case 530833824: /* GXTEntry: "Theft" */
			return 131072;
		case 1682361219: /* GXTEntry: "Intervened" */
			return 262144;
		case 158959085: /* GXTEntry: "Wanted In Camp" */
			return 524288;
		case 1919819559: /* GXTEntry: "Donated Game" */
			return 1048576;
		case 1461411082: /* GXTEntry: "Item Request" */
			return 2097152;
		case -549508280: /* GXTEntry: "Long Absence" */
			return 4194304;
		default:
			break;
	}
	return 0;
}

int func_107(int iParam0)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			if (PED::IS_PED_HUMAN(iVar0))
			{
				if (PED::IS_PED_MALE(iVar0))
				{
					return 536905469;
				}
				else
				{
					return -352521166;
				}
			}
		}
	}
	return 205298116;
}

var func_108(int iParam0, int iParam1, int iParam2, var uParam3)
{
	struct<13> Var0;
	int iVar23;

	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = iParam2;
	iVar23 = 13;
	return ENTITY::_0xA88E215CEB0435C0(iParam0, &Var0, uParam3, iVar23, 2, 0);
}

void func_109(var uParam0, var uParam1, int iParam2)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_92(uParam0, iParam2, 0)))
	{
		if (ANIMSCENE::_0x25557E324489393C(*uParam1))
		{
			if (ANIMSCENE::_0x477122B8D05E7968(*uParam1, 1, 0))
			{
				func_177(uParam0, iParam2);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(func_92(uParam0, iParam2, 1)))
				{
					if (ANIMSCENE::_0xA9016536015DE29D(*uParam1, func_92(uParam0, iParam2, 1)))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam1, func_92(uParam0, iParam2, 1), true);
					}
				}
			}
		}
	}
}

void func_110(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_111(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

void func_112(int iParam0, var uParam1)
{
	if (!func_111(iParam0))
	{
		return;
	}
	func_178(iParam0, uParam1);
}

void func_113(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_114(var uParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
			iVar0 = 1048575;
			PED::SET_RAGDOLL_BLOCKING_FLAGS(*uParam0, iVar0);
		}
	}
}

float func_115(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

struct<2> func_116(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_117(var uParam0, int iParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

void func_118(var uParam0)
{
	func_179(uParam0, 0f);
}

char* func_119(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PBL_BASE";
		case 1:
			return "PBL_IDLE2";
		case 2:
			return "PBL_IDLE3";
		case 3:
			return "PBL_ACTION1_L";
		case 4:
			return "PBL_ACTION1_R";
		case 5:
			return "PBL_ACTION2";
		case 6:
			return "PBL_CALLOVER1_L";
		case 7:
			return "PBL_CALLOVER1_R";
		case 8:
			return "PBL_CALLOVER2_L";
		case 9:
			return "PBL_CALLOVER2_R";
		default:
			break;
	}
	return "";
}

char* func_120(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "base";
		case 1:
			return "IDLE_2";
		case 2:
			return "IDLE_3";
		case 3:
			return "ACTION1_L";
		case 4:
			return "ACTION1_R";
		case 5:
			return "ACTION2";
		case 6:
			return "CALLOVER1_L";
		case 7:
			return "CALLOVER1_R";
		case 8:
			return "CALLOVER2_L";
		case 9:
			return "CALLOVER2_R";
		default:
			break;
	}
	return "";
}

char* func_121(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "base";
		case 1:
			return "base";
		case 2:
			return "base";
		case 3:
			return "ACTION1_L";
		case 4:
			return "ACTION1_R";
		case 5:
			return "ACTION2";
		case 6:
			return "base";
		case 7:
			return "base";
		case 8:
			return "base";
		case 9:
			return "base";
		default:
			break;
	}
	return "";
}

int func_122(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 0;
		case 2:
			return 0;
		case 3:
			return 2;
		case 4:
			return 2;
		case 5:
			return 2;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 0;
		case 9:
			return 0;
		default:
			break;
	}
	return 2;
}

float func_123(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0.95f;
		case 1:
			return 0f;
		case 2:
			return 0f;
		case 3:
			return 0f;
		case 4:
			return 0f;
		case 5:
			return 0f;
		case 6:
			return 0f;
		case 7:
			return 0f;
		case 8:
			return 0f;
		case 9:
			return 0f;
		default:
			break;
	}
	return 0f;
}

char* func_124(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			return "";
		case 3:
		case 4:
		case 5:
			if (iParam0 == 5)
			{
				if (func_126())
				{
					return "MH1_HLP_ALTJ";
				}
				else
				{
					return "MH1_HLP_ALT";
				}
			}
			else if (func_126())
			{
				return "MH1_HLP_JOHN";
			}
			else
			{
				return "MH1_HLP_ARTHUR";
			}
			break;
		case 6:
		case 7:
		case 8:
		case 9:
			return "MH1_HEY";
	}
	return "";
}

void func_125(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_180(uParam0, iParam1, sParam2))
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

int func_126()
{
	if (func_181() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

bool func_127(var uParam0)
{
	int iVar0;

	if (!func_41(uParam0->f_3, 4))
	{
		iVar0 = 4;
	}
	else
	{
		iVar0 = 8;
	}
	return func_41(uParam0->f_3, iVar0);
}

void func_128(var uParam0, int iParam1, int iParam2)
{
	func_50(&(iParam1->f_5), iParam2);
	if ((func_41(iParam1->f_5, 1) && func_41(iParam1->f_5, 4)) && func_41(iParam1->f_5, 8))
	{
		func_129(uParam0, iParam1);
	}
	func_182(uParam0, iParam1);
}

void func_129(var uParam0, int iParam1)
{
	int iVar0;

	if (!func_41(uParam0->f_3, 4))
	{
		iVar0 = 4;
	}
	else
	{
		iVar0 = 8;
	}
	if (!func_41(uParam0->f_3, iVar0))
	{
		func_50(&(uParam0->f_3), iVar0);
		func_51(&(uParam0->f_5), &(uParam0->f_3));
		func_183(uParam0->f_1, &(iParam1->f_127));
	}
}

float func_130(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_131(var uParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[0])) && func_184(&(uParam0->f_13[0]), 0, &(iParam1->f_128), &(iParam1->f_156), 0, 0))
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[4])))
	{
		if (func_185(Global_35, &(uParam0->f_13[4]), 0) || func_184(&(uParam0->f_13[4]), 0, &(iParam1->f_128), &(iParam1->f_156), 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_132(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	float fVar1;

	func_128(uParam0, iParam1, 2);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uParam0->f_13[0]), false);
	if (bParam3)
	{
		func_186(1, 0, 0);
	}
	if (bParam2)
	{
		fVar1 = 1.5f;
	}
	else
	{
		fVar1 = 1f;
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[4])))
	{
		if (!bParam3)
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(&(uParam0->f_13[4]), true, false), fVar1, 20000, 3f, true, 40000f);
			TASK::TASK_MOUNT_ANIMAL(0, &(uParam0->f_13[4]), 20000, -1, fVar1, 1, 0, 0);
			TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 1.5f, 0, 0);
		}
		else
		{
			TASK::TASK_SMART_FLEE_PED(0, Global_35, 6000f, -1, 0, 2f, &(uParam0->f_13[4]));
		}
	}
	else if (!bParam3)
	{
		TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 1.5f, 0, 0);
	}
	else
	{
		TASK::TASK_SMART_FLEE_PED(0, Global_35, 6000f, -1, 0, 2f, 0);
	}
	func_187(&(uParam0->f_13[0]), &iVar0, 0, 0, 1, 1);
}

int func_133(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_8)
	{
		return 1;
	}
	if (func_188(uParam0))
	{
		if (func_189(uParam0, func_84(*uParam1, iParam2)))
		{
			func_190(uParam1, iParam2);
			return 1;
		}
	}
	return 0;
}

int func_134(var uParam0)
{
	return func_191(uParam0->f_13[0]);
}

int func_135(int iParam0, float fParam1)
{
	if (iParam0->f_6 <= fParam1)
	{
		return 1;
	}
	return 0;
}

int func_136()
{
	vector3 vVar0;

	if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
		if (vVar0.z <= 156.7f)
		{
			return 1;
		}
	}
	return 0;
}

void func_137(var uParam0, int iParam1)
{
	func_192(uParam0->f_13[0], &(iParam1->f_125), 4, 1515458263);
}

int func_138(var uParam0)
{
	return uParam0->f_1;
}

void func_139(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (func_96(uParam0, iVar0))
		{
			func_193(uParam0->f_13[iVar0], iParam1, iVar0);
		}
		iVar0++;
	}
}

int func_140()
{
	int iVar0;

	iVar0 = TASK::_0xD04241BBF6D03A5E(Global_35);
	if (TASK::_0x841475AC96E794D1(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_141(int iParam0)
{
	vector3 vVar0;
	int iVar10;

	if (TASK::_0xD04241BBF6D03A5E(Global_35) != 0)
	{
		iVar10 = 0;
		while (iVar10 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
		{
			if (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar10) == -1730772208)
			{
				if (SCRIPTS::GET_EVENT_DATA(0, iVar10, &vVar0, 10))
				{
					if (vVar0.z == iParam0 || iParam0 == 0)
					{
						return 1;
					}
				}
			}
			iVar10++;
		}
	}
	return 0;
}

bool func_142(var uParam0)
{
	return func_194(*uParam0, 1);
}

void func_143(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_144(var uParam0, float fParam1)
{
	if (func_195(uParam0, fParam1))
	{
		func_143(uParam0);
		return 1;
	}
	return 0;
}

char* func_145(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MH1_FOLLOW1";
		case 2:
			return "MH1_FOLLOW2";
		case 3:
			return "MH1_FOLLOW3";
		case 4:
			return "MH1_FOLLOW_FLEE";
		default:
			break;
	}
	return "";
}

Vector3 func_146(char* sParam0)
{
	vector3 vVar0[24];

	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

bool func_147(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!AUDIO::_0xD89504D9D7D5057D(&vParam1))
	{
		bVar0 = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&vParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_196(vParam1, uParam0);
		if (bParam6)
		{
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&vParam1, true, true, bParam7);
		}
		else
		{
			AUDIO::START_SCRIPT_CONVERSATION(&vParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			AUDIO::_0x40CA665AB9D8D505(&vParam1, iParam5);
		}
	}
	return bVar0;
}

void func_148(int* iParam0, bool bParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (bParam1)
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
		}
		else
		{
			OBJECT::DELETE_OBJECT(iParam0);
		}
	}
}

void func_149(int* iParam0, bool bParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (bParam1)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		}
		else if (!PED::GET_PED_CONFIG_FLAG(*iParam0, 186, true))
		{
			PED::DELETE_PED(iParam0);
		}
	}
}

void func_150(var uParam0, var uParam1, bool bParam2)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam1))
	{
		return;
	}
	PED::CLEAR_PED_NON_CREATION_AREA();
	POPULATION::_0xA1CFB35069D23C23(uParam1);
	POPULATION::_0x74C2B3DC0B294102(uParam1);
	if (PED::_0x91A5F9CBEBB9D936(*uParam0))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam0, bParam2);
	}
}

void func_151(var uParam0)
{
}

void func_152(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (!&uParam0->f_6[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(&(uParam0->f_6[iVar0]));
		}
		iVar0++;
	}
}

void func_153(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (!&uParam0->f_22[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(&(uParam0->f_22[iVar0]));
		}
		iVar0++;
	}
}

int func_154(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 2048:
			switch (iParam1)
			{
				case 0:
				case 1:
					break;
				case 2:
					break;
				default:
					break;
			}
			break;
		case 16:
			if (iParam1 == 0)
			{
				if (!func_41(uParam0->f_3, 4))
				{
					return -1206647372;
				}
			}
			break;
		case 262144:
			if (!func_41(uParam0->f_3, 4))
			{
				switch (iParam1)
				{
					case 0:
						return -2023583790;
					default:
						break;
				}
			}
			break;
		case 65536:
			break;
		case 2:
		case 4:
		case 8:
		case 32:
		case 128:
		case 256:
		case 512:
		case 1024:
		case 4096:
		case 8192:
		case 16384:
		case 32768:
		case 131072:
			break;
		default:
			break;
	}
	return 0;
}

Vector3 func_155(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 16:
			return 1984.534f, 1192.017f, 170.403f;
		case 2048:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				case 2:
					return 0f, 0f, 0f;
				default:
					break;
			}
			Jump @255; //curOff = 182
			switch (iParam1)
			{
				case 0:
					return 1189.531f, -103.881f, 94.897f;
				default:
					break;
			}
			Jump @255; //curOff = 220
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				default:
					break;
			}
			Jump @255; //curOff = 246
			return 0f, 0f, 0f;
		}

float func_156(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 16:
			return -110f;
		case 2048:
			switch (iParam1)
			{
				case 0:
					return 0f;
				case 1:
					return 0f;
				default:
					break;
			}
			Jump @213; //curOff = 156
			switch (iParam1)
			{
				case 0:
					return 0f;
				default:
					break;
			}
			Jump @213; //curOff = 180
			switch (iParam1)
			{
				case 0:
					return 0f;
				default:
					break;
			}
			Jump @213; //curOff = 204
			return 0f;
		}

float func_157(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 16:
			break;
		case 262144:
			switch (iParam1)
			{
				case 0:
					return 3f;
				default:
					break;
			}
			Jump @150; //curOff = 141
			return 0f;
		}

int func_158(int iParam0, int iParam1)
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

int func_159(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_4;
	}
	return 0;
}

int func_160()
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

int func_161(int iParam0)
{
	if (!func_111(iParam0))
	{
		return -1;
	}
	return func_198(func_197(iParam0));
}

bool func_162(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_163(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_164(bool bParam0, bool bParam1, bool bParam2)
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

float func_165()
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar6 = func_199();
	iVar4 = func_200(iVar6);
	iVar5 = func_201(iVar6);
	iVar3 = func_202(iVar5, iVar4);
	iVar2 = func_203(iVar6);
	iVar1 = func_204(iVar6);
	fVar0 = (((BUILTIN::TO_FLOAT(iVar1) + (BUILTIN::TO_FLOAT((iVar2 - 1)) * 24f)) + (BUILTIN::TO_FLOAT(iVar3) * 24f)) + ((BUILTIN::TO_FLOAT(iVar4) * 365.2422f) * 24f));
	return fVar0;
}

int func_166(int iParam0, float fParam1)
{
	int iVar0;

	iVar0 = func_205(iParam0);
	if (iVar0 != 0)
	{
		*fParam1 = func_206(iParam0);
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_167(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_207(&(uParam0->f_1), 16384);
	}
	else
	{
		func_208(&(uParam0->f_1), 16384);
	}
}

void func_168(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_207(&(uParam0->f_1), 2048);
	}
	else
	{
		func_208(&(uParam0->f_1), 2048);
	}
}

void func_169(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_207(&(uParam0->f_1), 256);
	}
	else
	{
		func_208(&(uParam0->f_1), 256);
	}
}

void func_170(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_208(uParam0, 16);
	}
	else
	{
		func_207(uParam0, 67108864);
		func_207(uParam0, 16);
	}
}

void func_171(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_207(&(uParam0->f_1), 128);
	}
	else
	{
		func_208(&(uParam0->f_1), 128);
	}
}

void func_172(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_208(uParam0, 256);
	}
	else
	{
		func_207(uParam0, 256);
	}
}

void func_173(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_208(uParam0, 268435456);
	}
	else
	{
		func_207(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_208(uParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_207(uParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_208(uParam0, 536870912);
	}
	else
	{
		func_207(uParam0, 536870912);
	}
}

int func_174(var uParam0, var uParam1)
{
	if (func_111(*uParam0))
	{
		*uParam1 = func_83(*uParam0);
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_175(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_209(iParam1))
		{
			func_40(iParam0, 41788943);
		}
		else if (bParam5)
		{
			PED::_SET_RANDOM_OUTFIT_VARIATION(iParam0, 1);
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
			func_210(iParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 502, true);
	}
	else if (PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (!bParam5)
		{
			PED::_SET_PED_OUTFIT_PRESET(iParam0, 0, 0);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_211(iParam0, 0);
			bVar0 = true;
		}
		func_212(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

void func_176(var uParam0, int iParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		_NAMESPACE29::_0x0EABF182FBB63D72(*uParam0, iParam1, 1);
	}
}

void func_177(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 32768:
			switch (iParam1)
			{
				case 0:
					func_214(uParam0->f_36[iParam1], uParam0->f_13[2], func_213(uParam0, 2), iParam1);
					break;
				case 1:
					func_214(uParam0->f_36[iParam1], uParam0->f_13[1], func_213(uParam0, 1), iParam1);
					break;
				case 2:
					if (!func_41(uParam0->f_3, 4))
					{
						func_214(uParam0->f_36[iParam1], uParam0->f_13[0], func_213(uParam0, 0), iParam1);
						func_216(uParam0->f_36[iParam1], uParam0->f_29[0], func_215(uParam0, 0), iParam1);
					}
					break;
			}
			break;
		case 131072:
			switch (iParam1)
			{
				case 0:
					func_214(uParam0->f_36[iParam1], uParam0->f_13[0], func_213(uParam0, 0), iParam1);
					func_214(uParam0->f_36[iParam1], uParam0->f_13[1], func_213(uParam0, 1), iParam1);
					break;
			}
			break;
		case 8192:
			if (!func_41(uParam0->f_3, 4))
			{
				if (uParam0->f_48)
				{
					switch (iParam1)
					{
						case 0:
							if ((!func_84(func_83(uParam0->f_5), 4) && !func_84(func_83(uParam0->f_5), 2)) && !func_84(func_83(uParam0->f_5), 8))
							{
								func_214(uParam0->f_36[iParam1], uParam0->f_13[0], func_213(uParam0, 0), iParam1);
							}
							break;
						case 1:
							if (!func_84(func_83(uParam0->f_5), 4))
							{
								func_214(uParam0->f_36[iParam1], uParam0->f_13[1], func_213(uParam0, 1), iParam1);
								func_214(uParam0->f_36[iParam1], uParam0->f_13[2], func_213(uParam0, 2), iParam1);
								func_214(uParam0->f_36[iParam1], uParam0->f_13[3], func_213(uParam0, 3), iParam1);
							}
							break;
					}
				}
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					func_214(uParam0->f_36[iParam1], uParam0->f_13[0], func_213(uParam0, 0), iParam1);
					break;
			}
			break;
		case 64:
			switch (iParam1)
			{
				case 0:
					func_214(uParam0->f_36[iParam1], uParam0->f_13[0], func_213(uParam0, 0), iParam1);
					func_214(uParam0->f_36[iParam1], uParam0->f_13[1], func_213(uParam0, 1), iParam1);
					func_214(uParam0->f_36[iParam1], uParam0->f_13[2], func_213(uParam0, 2), iParam1);
					func_214(uParam0->f_36[iParam1], uParam0->f_13[3], func_213(uParam0, 3), iParam1);
					func_214(uParam0->f_36[iParam1], uParam0->f_13[4], func_213(uParam0, 4), iParam1);
					func_214(uParam0->f_36[iParam1], uParam0->f_13[5], func_213(uParam0, 5), iParam1);
					break;
			}
			break;
		case 4096:
			switch (iParam1)
			{
				case 0:
					func_214(uParam0->f_36[iParam1], uParam0->f_13[0], func_213(uParam0, 0), iParam1);
					func_214(uParam0->f_36[iParam1], uParam0->f_13[1], func_213(uParam0, 1), iParam1);
					func_214(uParam0->f_36[iParam1], uParam0->f_13[2], func_213(uParam0, 2), iParam1);
					break;
			}
			break;
		case 256:
			switch (iParam1)
			{
				case 0:
					func_214(uParam0->f_36[iParam1], uParam0->f_13[0], func_213(uParam0, 0), iParam1);
					func_214(uParam0->f_36[iParam1], uParam0->f_13[1], func_213(uParam0, 1), iParam1);
					break;
			}
			break;
		case 512:
			switch (iParam1)
			{
				case 0:
					func_214(uParam0->f_36[iParam1], uParam0->f_13[0], func_213(uParam0, 0), iParam1);
					func_214(uParam0->f_36[iParam1], uParam0->f_13[1], func_213(uParam0, 1), iParam1);
					func_214(uParam0->f_36[iParam1], uParam0->f_13[2], func_213(uParam0, 2), iParam1);
					func_214(uParam0->f_36[iParam1], uParam0->f_13[3], func_213(uParam0, 3), iParam1);
					func_214(uParam0->f_36[iParam1], uParam0->f_13[4], func_213(uParam0, 4), iParam1);
					break;
			}
			break;
		case 32:
			switch (iParam1)
			{
				case 0:
					func_214(uParam0->f_36[iParam1], uParam0->f_13[0], func_213(uParam0, 0), iParam1);
					func_214(uParam0->f_36[iParam1], uParam0->f_13[1], func_213(uParam0, 1), iParam1);
					break;
			}
			break;
		case 16384:
			switch (iParam1)
			{
				case 0:
					func_214(uParam0->f_36[iParam1], uParam0->f_13[0], func_213(uParam0, 0), iParam1);
					break;
			}
			break;
		case 2:
		case 4:
		case 8:
		case 128:
		case 1024:
		case 2048:
		case 65536:
		case 262144:
			break;
		default:
			break;
	}
}

void func_178(int iParam0, var uParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_3 = uParam1;
}

void func_179(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_217() - fParam1);
	func_218(uParam0, 1);
	func_219(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_180(var uParam0, int iParam1, char* sParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam2, &(((*uParam0)[iVar1 /*4*/])->f_1)))
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
			StringCopy(&(((*uParam0)[uParam0->f_97 /*4*/])->f_1), sParam2, 24);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

int func_181()
{
	return Global_1572887->f_12;
}

void func_182(var uParam0, int iParam1)
{
	func_220(&(uParam0->f_5), &(iParam1->f_5));
}

int func_183(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_205(iParam0);
	if (iVar0 != 0)
	{
		*uParam1 = func_165();
		func_221(iParam0, *uParam1);
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_184(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_222(uParam2, 1, iVar0);
	}
	if (!Global_1935630->f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (func_223(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_224(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_225(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_224(iParam0, uParam2, *uParam3);
					return 1;
				}
				else if (func_226(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_224(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_227(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_224(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_26 && func_86(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_224(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_228(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_229(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_224(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_230(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_224(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_231(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_224(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (func_231(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_224(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_232(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_224(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_233(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_224(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_234(uParam2, 4000))
				{
					if ((func_235(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_236(uParam2, iParam0)) && func_237(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_224(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_235(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_236(uParam2, iParam0)) && func_237(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_224(iParam0, uParam2, *uParam3);
					return 1;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_238(iParam0, Global_1935630->f_41))
							{
								func_239();
								*uParam3 = 2;
								func_224(iParam0, uParam2, *uParam3);
								return 1;
							}
						}
					}
				}
			}
			else if (Global_1935630->f_40 == 0)
			{
				if (Global_1935630->f_41 != 0)
				{
					if (*uParam2 & 131072 == 0)
					{
						if (func_238(iParam0, Global_1935630->f_41))
						{
							func_239();
							*uParam3 = 2;
							func_224(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_240(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_241() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_239();
						*uParam3 = 2;
						func_224(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_242())
					{
						if (func_238(iParam0, Global_1935630->f_42))
						{
							func_239();
							*uParam3 = 2;
							func_224(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_243(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_224(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_244(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_224(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_245(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_224(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_246(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_224(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_247(uParam2, 4000))
				{
					if (func_248(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_224(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_249(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_224(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_250(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_224(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
	}
	return 0;
}

int func_185(int iParam0, int iParam1, bool bParam2)
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

void func_186(int iParam0, int iParam1, int iParam2)
{
	AUDIO::_0x36559148B78853B3(iParam0, iParam1, iParam2);
}

void func_187(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
{
	TASK::CLOSE_SEQUENCE_TASK(*iParam1);
	if (!bParam5 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam2 > 0f)
		{
			if (fParam3 < fParam2)
			{
				fParam3 = fParam2;
			}
			TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, *iParam1, fParam2, fParam3);
		}
		else
		{
			TASK::TASK_PERFORM_SEQUENCE(iParam0, *iParam1);
		}
	}
	if (bParam4)
	{
		TASK::CLEAR_SEQUENCE_TASK(iParam1);
	}
}

int func_188(var uParam0)
{
	int iVar0;

	if (uParam0->f_10)
	{
		return 1;
	}
	if (func_251(uParam0))
	{
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, uParam0->f_2) && !ANIMSCENE::_0x0DF57F86FE71DBE5(*uParam0, uParam0->f_2))
		{
			func_252(uParam0, uParam0->f_2);
		}
		else if (ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, uParam0->f_2) && !ANIMSCENE::_0x1F0E401031E20146(*uParam0, uParam0->f_2))
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam0, uParam0->f_2, true);
		}
		else if (ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, uParam0->f_2) && ANIMSCENE::_0x1F0E401031E20146(*uParam0, uParam0->f_2))
		{
			if (!uParam0->f_9)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3) && !MISC::ARE_STRINGS_EQUAL(uParam0->f_3, uParam0->f_2))
				{
					ANIMSCENE::_0xAE6ADA8FE7E84ACC(*uParam0, uParam0->f_3);
				}
				uParam0->f_9 = 1;
			}
			iVar0 = func_253(uParam0->f_1);
			if (!func_84(uParam0->f_12, iVar0))
			{
				func_186(1, 0, 0);
				func_147(&(uParam0->f_13), func_146(func_124(uParam0->f_1)), 0, -1, 0, 0);
				func_110(&(uParam0->f_12), iVar0);
			}
			uParam0->f_10 = 1;
			return 1;
		}
	}
	return 0;
}

int func_189(var uParam0, bool bParam1)
{
	if (uParam0->f_8)
	{
		return 1;
	}
	if (bParam1)
	{
		uParam0->f_8 = 1;
		return 1;
	}
	if (!func_251(uParam0))
	{
		uParam0->f_8 = 1;
		return 1;
	}
	if (ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, uParam0->f_2) && ANIMSCENE::_0x1F0E401031E20146(*uParam0, uParam0->f_2))
	{
		switch (uParam0->f_6)
		{
			case 0:
				if (ANIMSCENE::_0x8D81E7824B7753F7(*uParam0, uParam0->f_5, 1))
				{
					uParam0->f_8 = 1;
					return 1;
				}
				break;
			case 1:
				if (ANIMSCENE::_0x3FBC3F51BF12DFBF(*uParam0) >= uParam0->f_7)
				{
					uParam0->f_8 = 1;
					return 1;
				}
				break;
		}
	}
	return 0;
}

void func_190(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_191(var uParam0)
{
	vector3 vVar0;
	float fVar3;

	if (((ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0)) && ENTITY::DOES_ENTITY_EXIST(Global_35)) && !ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, false, false) };
		fVar3 = ENTITY::GET_ENTITY_HEADING(*uParam0);
		if (func_254(Global_35, vVar0, fVar3, 1065353216 /* Float: 1f */))
		{
			return 2;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_192(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (*uParam1 <= iParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
			MAP::ALLOW_SONAR_BLIPS(true);
			MAP::_TRIGGER_SONAR_BLIP_2(iParam3, *uParam0);
			*uParam1++;
		}
	}
}

void func_193(var uParam0, int iParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 186, true))
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 186, true);
		}
		if (PED::GET_PED_CONFIG_FLAG(*uParam0, 223, true))
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 223, false);
		}
		_NAMESPACE49::_0xE225CEF1901F6108(*uParam0, iParam1);
	}
}

bool func_194(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_195(var uParam0, float fParam1)
{
	if (!func_142(uParam0))
	{
		return 0;
	}
	if (func_255(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

void func_196(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam3[iVar0 /*4*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam3[iVar0 /*4*/]))
			{
				AUDIO::ADD_PED_TO_CONVERSATION(&uParam0, uParam3[iVar0 /*4*/], &(((*uParam3)[iVar0 /*4*/])->f_1));
			}
		}
		iVar0++;
	}
}

int func_197(int iParam0)
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

int func_198(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_199()
{
	return &Global_1899515;
}

int func_200(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_256(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_201(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_202(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = (iParam0 - 1);
	if (iVar1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = (iVar2 + func_257(iVar1, iParam1));
			iVar0++;
		}
	}
	return iVar2;
}

int func_203(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_204(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_205(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 1;
		case 4:
			return 2;
		case 8:
			return 3;
		case 16:
			return 4;
		case 32:
			return 5;
		case 64:
			return 6;
		case 128:
			return 7;
		case 256:
			return 8;
		case 512:
			return 9;
		case 1024:
			return 10;
		case 2048:
			return 11;
		case 4096:
			return 12;
		case 8192:
			return 13;
		case 16384:
			return 14;
		case 32768:
			return 15;
		case 65536:
			return 16;
		case 131072:
			return 17;
		case 262144:
			return 18;
		default:
			break;
	}
	return 0;
}

float func_206(int iParam0)
{
	int iVar0;

	iVar0 = func_205(iParam0);
	if (iVar0 == 0)
	{
		return 0f;
	}
	return &(Global_40.f_11959[iVar0]);
}

void func_207(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_208(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_209(int iParam0)
{
	switch (iParam0)
	{
		case joaat("cs_sistercalderon"):
		case joaat("cs_strsheriff_01"):
		case joaat("cs_mud2bigguy"):
		case joaat("cs_rainsfall"):
		case joaat("cs_penelopebraithwaite"):
		case joaat("cs_swampweirdosonny"):
		case joaat("cs_unidusterjail_01"):
		case joaat("cs_iangray"):
		case joaat("cs_tinyhermit"):
		case joaat("cs_timothydonahue"):
		case joaat("cs_princessisabeau"):
		case joaat("cs_leviticuscornwall"):
		case joaat("cs_didsbury"):
		case joaat("cs_featherstonchambers"):
		case joaat("cs_featsofstrength"):
		case joaat("cs_bandpianist"):
		case joaat("cs_escapeartistassistant"):
		case joaat("cs_garethbraithwaite"):
		case joaat("cs_creoleguy"):
		case joaat("cs_leighgray"):
		case joaat("cs_strawberryoutlaw_02"):
		case joaat("cs_gloria"):
		case joaat("cs_warvet"):
		case joaat("cs_jockgray"):
		case joaat("cs_davidgeddes"):
		case joaat("cs_guidomartelli"):
		case joaat("cs_duncangeddes"):
		case joaat("cs_dusterinformant_01"):
		case joaat("cs_pinkertongoon"):
		case joaat("cs_mickey"):
		case joaat("cs_twinbrother_02"):
		case joaat("cs_hestonjameson"):
		case joaat("cs_strdeputy_01"):
		case joaat("cs_abe"):
		case joaat("cs_oddfellowspinhead"):
		case joaat("cs_swampfreak"):
		case joaat("cs_mradler"):
		case joaat("cs_aberdeenpigfarmer"):
		case joaat("cs_hobartcrawley"):
		case joaat("cs_formyartbigwoman"):
		case joaat("cs_norrisforsythe"):
		case joaat("cs_jules"):
		case joaat("cs_tomdickens"):
		case joaat("cs_geraldbraithwaite"):
		case joaat("cs_paytah"):
		case joaat("cs_cancan_03"):
		case joaat("cs_grizzledjon"):
		case joaat("cs_wrobel"):
		case joaat("cs_meredith"):
		case joaat("cs_creepyoldlady"):
		case joaat("cs_nbxreceptionist_01"):
		case joaat("cs_nbxpolicechiefformal"):
		case joaat("cs_cornwalltrainconductor"):
		case joaat("cs_rhodeputy_01"):
		case joaat("cs_drmalcolmmacintosh"):
		case joaat("cs_leon"):
		case joaat("cs_sheriffowens"):
		case joaat("cs_sddoctor_01"):
		case joaat("cs_scottgray"):
		case joaat("cs_cancan_01"):
		case joaat("cs_creolecaptain"):
		case joaat("cs_brontesbutler"):
		case joaat("cs_janson"):
		case joaat("cs_forgivenwife_01"):
		case joaat("cs_tigerhandler"):
		case joaat("cs_frenchartist"):
		case joaat("cs_genstorymale"):
		case joaat("cs_clay"):
		case joaat("cs_strdeputy_02"):
		case joaat("cs_famousgunslinger_03"):
		case joaat("cs_bivcoachdriver"):
		case joaat("cs_braithwaitebutler"):
		case joaat("cs_cleet"):
		case joaat("cs_joe"):
		case joaat("cs_slavecatcher"):
		case joaat("cs_braithwaitemaid"):
		case joaat("cs_twingroupie_02"):
		case joaat("cs_mrsgeddes"):
		case joaat("cs_samaritan"):
		case joaat("cs_exconfedinformant"):
		case joaat("cs_frenchman_01"):
		case joaat("cs_bandsinger"):
		case joaat("cs_baptiste"):
		case joaat("cs_angusgeddes"):
		case joaat("cs_mysteriousstranger"):
		case joaat("cs_famousgunslinger_01"):
		case joaat("cs_bartholomewbraithwaite"):
		case joaat("cs_mixedracekid"):
		case joaat("cs_beatenupcaptain"):
		case joaat("cs_edgarross"):
		case joaat("cs_twingroupie_01"):
		case joaat("cs_mrsweathers"):
		case joaat("cs_jamie"):
		case joaat("cs_karensjohn_01"):
		case joaat("cs_thomasdown"):
		case joaat("cs_obediahhinton"):
		case joaat("cs_agnesdowd"):
		case joaat("cs_cavehermit"):
		case joaat("cs_brynntildon"):
		case joaat("cs_germanson"):
		case joaat("cs_brendacrawley"):
		case joaat("cs_colfavours"):
		case joaat("cs_rhodeskidnapvictim"):
		case joaat("cs_exconfedsleader_01"):
		case joaat("cs_cancan_04"):
		case joaat("cs_towncrier"):
		case joaat("cs_famousgunslinger_04"):
		case joaat("cs_dalemaroney"):
		case joaat("cs_angryhusband"):
		case joaat("cs_lillianpowell"):
		case joaat("cs_andershelgerson"):
		case joaat("cs_poorjoe"):
		case joaat("cs_braithwaiteservant"):
		case joaat("cs_brotherdorkins"):
		case joaat("cs_albertmason"):
		case joaat("cs_famousgunslinger_05"):
		case joaat("cs_balloonoperator"):
		case joaat("cs_albertcakeesquire"):
		case joaat("cs_mrsfellows"):
		case joaat("cs_cancanman_01"):
		case joaat("cs_poisonwellshaman"):
		case joaat("cs_cancan_02"):
		case joaat("cs_meredithsmother"):
		case joaat("cs_angel"):
		case joaat("cs_archerfordham"):
		case joaat("cs_disguisedduster_01"):
		case joaat("cs_chelonianmaster"):
		case joaat("cs_twinbrother_01"):
		case joaat("cs_germandaughter"):
		case joaat("cs_lemiuxassistant"):
		case joaat("cs_creoledoctor"):
		case joaat("cs_crackpotrobot"):
		case joaat("cs_bandbassist"):
		case joaat("cs_genstoryfemale"):
		case joaat("cs_marylinton"):
		case joaat("cs_valprayingman"):
		case joaat("cs_johnthebaptisingmadman"):
		case joaat("cs_mrs_calhoun"):
		case joaat("cs_theodorelevin"):
		case joaat("cs_nicholastimmins"):
		case joaat("cs_disguisedduster_03"):
		case joaat("cs_dinoboneslady"):
		case joaat("cs_beaugray"):
		case joaat("cs_strawberryoutlaw_01"):
		case joaat("cs_crackpotinventor"):
		case joaat("cs_hercule"):
		case joaat("cs_gavin"):
		case joaat("cs_levisimon"):
		case joaat("cs_londonderryson"):
		case joaat("cs_captainmonroe"):
		case joaat("cs_famousgunslinger_02"):
		case joaat("cs_mrslondonderry"):
		case joaat("cs_soothsayer"):
		case joaat("cs_tavishgray"):
		case joaat("cs_joebutler"):
		case joaat("cs_banddrummer"):
		case joaat("cs_lillymillet"):
		case joaat("cs_ansel_atherton"):
		case joaat("cs_rhodeputy_02"):
		case joaat("cs_edmundlowry"):
		case joaat("cs_disguisedduster_02"):
		case joaat("cs_magnifico"):
		case joaat("cs_artappraiser"):
		case joaat("cs_forgivenhusband_01"):
		case joaat("cs_reverendfortheringham"):
		case joaat("cs_daveycallender"):
		case joaat("cs_desmond"):
		case joaat("cs_adamgray"):
		case joaat("cs_jimcalloway"):
		case joaat("cs_sdsaloondrunk_01"):
		case joaat("cs_nbxdrunk"):
		case joaat("cs_germanmother"):
		case joaat("cs_ringmaster"):
		case joaat("cs_lucanapoli"):
		case joaat("cs_rhodesassistant"):
		case joaat("cs_aberdeensister"):
		case joaat("cs_nbxexecuted"):
		case joaat("cs_famousgunslinger_06"):
		case joaat("cs_johnweathers"):
		case joaat("cs_professorbell"):
		case joaat("cs_rhodessaloonbouncer"):
			return 1;
		default:
			break;
	}
	return 0;
}

void func_210(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	PED::_0xD710A5007C2AC539(iParam0, -1725579161, 1);
	if (bParam2)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

void func_211(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	PED::_0x1902C4CFCC5BE57C(iParam0, 1268180497);
	if (bParam1)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

void func_212(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		PED::_0x5653AB26C82938CF(iParam0, 41611, 0f);
	}
	else
	{
		PED::_0x5653AB26C82938CF(iParam0, 41611, 1f);
	}
}

char* func_213(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 32768:
			if (!func_41(uParam0->f_3, 4))
			{
				switch (iParam1)
				{
					case 0:
						return "male";
					case 1:
						return "Dead";
					case 2:
						return "Dead";
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 1:
						return "Dead";
					case 2:
						return "Dead";
					default:
						break;
				}
			}
			break;
		case 131072:
			switch (iParam1)
			{
				case 0:
					return "Starved_Boy_Bed";
				case 1:
					return "Starved_Boy_Floor";
				default:
					break;
			}
			break;
		case 8192:
			switch (iParam1)
			{
				case 0:
					return "male";
				case 1:
					return "Husband";
				case 2:
					return "Horse01";
				case 3:
					return "Horse01^1";
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return "Civil_War_Bride";
				default:
					break;
			}
			break;
		case 64:
			switch (iParam1)
			{
				case 0:
					return "Settler";
				case 1:
					return "Settler^1";
				case 2:
					return "Settler^2";
				case 3:
					return "Settler^3";
				case 4:
					return "Settler^4";
				case 5:
					return "Settler^5";
				default:
					break;
			}
			break;
		case 4096:
			switch (iParam1)
			{
				case 0:
					return "A_M_M_UNICORPSE_01";
				case 1:
					return "A_F_M_UNICORPSE_01";
				case 2:
					return "A_F_M_UNICORPSE_01^1";
				default:
					break;
			}
			break;
		case 256:
			switch (iParam1)
			{
				case 0:
					return "male01";
				case 1:
					return "male";
				default:
					break;
			}
			Jump @674; //curOff = 528
			switch (iParam1)
			{
				case 0:
					return "Father";
				case 1:
					return "Grandfather";
				case 2:
					return "Grandmother";
				case 3:
					return "Mother";
				case 4:
					return "Son";
				default:
					break;
			}
			Jump @674; //curOff = 604
			switch (iParam1)
			{
				case 0:
					return "Male01";
				case 1:
					return "Male02";
				default:
					break;
			}
			Jump @674; //curOff = 641
			switch (iParam1)
			{
				case 0:
					return "mountainman";
				default:
					break;
			}
			Jump @674; //curOff = 665
			return "";
		}

void func_214(var uParam0, var uParam1, char* sParam2, int iParam3)
{
	if (ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		if (ANIMSCENE::_0x477122B8D05E7968(*uParam0, 1, 0))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
			{
				if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
				{
					if (ANIMSCENE::_0x6F1F0B17109309DA(*uParam0, sParam2))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, sParam2, *uParam1, 0);
					}
				}
			}
		}
	}
}

char* func_215(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 32768:
			switch (iParam1)
			{
				case 0:
					return "chain";
				default:
					break;
			}
			break;
		case 131072:
			break;
		case 8192:
			break;
		case 128:
			switch (iParam1)
			{
				case 0:
					return "p_crutchjoe01x";
				default:
					break;
			}
			break;
		case 2:
		case 4:
		case 8:
		case 16:
		case 32:
		case 256:
		case 512:
		case 1024:
		case 2048:
		case 16384:
		case 65536:
		case 262144:
			break;
		default:
			break;
	}
	return "";
}

void func_216(var uParam0, var uParam1, char* sParam2, int iParam3)
{
	if (ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		if (ANIMSCENE::_0x477122B8D05E7968(*uParam0, 1, 0))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
			{
				if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
				{
					if (ANIMSCENE::_0x6F1F0B17109309DA(*uParam0, sParam2))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, sParam2, *uParam1, 0);
					}
				}
			}
		}
	}
}

float func_217()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_218(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_219(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_220(var uParam0, var uParam1)
{
	if (func_111(*uParam0))
	{
		func_258(*uParam0, *uParam1);
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_221(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_205(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	Global_40.f_11959[iVar0] = uParam1;
}

void func_222(var uParam0, bool bParam1, int iParam2)
{
	func_259(iParam2);
	if (Global_1572887->f_12 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return;
		}
		if (Global_1935630->f_12)
		{
			return;
		}
	}
	else
	{
		if (!Global_1225638->f_11)
		{
			return;
		}
		if (Global_1225638->f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		uParam0->f_10 = 0;
	}
	uParam0->f_5 = iParam2;
	if (Global_1572887->f_12 == -1)
	{
		uParam0->f_13 = Global_1935630->f_44;
	}
	else
	{
		uParam0->f_13 = func_260(0);
	}
	switch (uParam0->f_6)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!*uParam0 & 33554432 != 0)
				{
					if (uParam0->f_13 == joaat("weapon_thrown_dynamite"))
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
						{
							func_208(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_261(1))
						{
							func_208(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_261(1) || *uParam0 & 8192 != 0))
				{
					func_207(uParam0, 33554432);
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
	if (!uParam0->f_1 & 1024 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
		{
			if (func_262(uParam0))
			{
				uParam0->f_15 = func_241();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_241() - uParam0->f_15) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(uParam0->f_14))
				{
					uParam0->f_14 = 0;
					uParam0->f_15 = 0;
				}
			}
		}
	}
	uParam0->f_6++;
	if (uParam0->f_6 >= 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_7++;
		if (uParam0->f_7 > 4)
		{
			uParam0->f_7 = 0;
		}
	}
	func_263(uParam0);
}

int func_223(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return 0;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar0 == 0)
	{
		return 0;
	}
	switch (iVar0)
	{
		case -196899787:
		case 178452260:
		case joaat("event_shocking_dead_body"):
		case 1589923363:
			iVar1 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar0, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				return 0;
			}
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (!PED::IS_PED_HUMAN(iVar2))
			{
				return 0;
			}
			if (DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreDamageChecking"))
			{
				return 0;
			}
			if (iVar2 == Global_1935630->f_33)
			{
				return 0;
			}
			if (iVar2 == Global_1935630->f_32)
			{
				return 0;
			}
			if (!func_264(iParam0, uParam1, iVar2))
			{
				return 0;
			}
			if (func_265(iParam0, iVar2) <= func_266(uParam1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_224(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_267(iParam2, 1, 1, 1, 0))
	{
		func_208(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_268(uParam1, 1);
	func_269();
}

int func_225(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_270(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_271(uParam1);
			if (func_272(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_273(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_268(uParam1, 1);
						return 1;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_268(uParam1, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_226(int iParam0, int iParam1, var uParam2)
{
	float fVar0;
	float fVar1;

	if (iParam1 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	fVar0 = 85f;
	if (func_274(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_271(uParam2);
		if (func_272(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_273(uParam2)
				{
					func_268(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_227(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
	{
		return 0;
	}
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, 0, 0))
	{
		if (iVar2 == iVar0)
		{
			return 0;
		}
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return 0;
	}
	if (Global_1935630->f_40 != 0)
	{
		if (PED::_0xB676EFDA03DADA52(Global_1935630->f_40, 1) == iParam0)
		{
			return 0;
		}
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_264(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_273(uParam1)
		{
			fVar3 = func_271(uParam1);
			if (uParam1->f_12 < fVar3)
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar1, 17))
				{
					if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, fVar3, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_228(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_241();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return 1;
	}
	return 0;
}

int func_229(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_275(uParam2);
			if (!WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) || Global_1935630->f_46 == joaat("weapon_unarmed"))
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
			else if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0xEA522F991E120D45(Global_1935630->f_46))
			{
				PED::_0xD355E2F1BB41087E(iParam1, 5f);
			}
			else
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
		}
		if ((!WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) || Global_1935630->f_46 == joaat("weapon_unarmed")) || (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)))
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
			if (func_237(uParam2, iParam1))
			{
				func_268(uParam2, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_230(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_276(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && !WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_237(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_268(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_231(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_277(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_explosion"), vVar0, uParam2->f_22))
				{
					func_268(uParam2, 1);
					return 1;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_fire"), vVar0, uParam2->f_27))
				{
					func_268(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_potential_blast"), vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &vVar4, 0, 0);
					if (func_278(iParam1, vVar0, vVar4))
					{
						func_268(uParam2, 1);
						return 1;
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
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_explosion"), vVar0, uParam2->f_22))
				{
					func_268(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_potential_blast"), vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &vVar7, 0, 0);
					if (func_278(iParam1, vVar0, vVar7))
					{
						func_268(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	return 0;
}

int func_232(int iParam0, var uParam1)
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
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_264(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_279(&(Global_1935630->f_34[iVar0]));
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_280(&(Global_1935630->f_34[iVar0])))
			{
				if (fVar1 < 35f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(&(Global_1935630->f_34[iVar0]), "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(&(Global_1935630->f_34[iVar0]), "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB")))
					{
						*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
						*(vVar2[1 /*3*/]) = { vVar9 };
						uParam1->f_10 = iParam0;
						return 1;
					}
				}
			}
			if (func_281(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_282(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_283(uParam1, iParam0, fVar1, iVar0))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_233(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar5;
	vector3 vVar8;

	if (!EVENT::_0x1D1B448D719415AB(*iParam0))
	{
		return 0;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(*iParam0, 0, 0);
	switch (iVar0)
	{
		case joaat("event_shocking_property_damage"):
		case 2044016570:
			iVar1 = EVENT::_0x822A001BCEA5BD81(*iParam0, iVar0, 0, 0);
			iVar2 = EVENT::_0x38497F139981C5C9(*iParam0, iVar0, 0, 0);
			vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
			vVar8 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
			EVENT::_0x1A5C5D350068A673(*iParam0, 0);
			return 1;
	}
	return 0;
}

int func_234(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_241();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_235(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1, 1))
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
		if (func_284(iVar0, &iVar2))
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
	if (func_285(iVar0, iParam0))
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

int func_236(var uParam0, int iParam1)
{
	int iVar0;

	if (!DECORATOR::DECOR_EXIST_ON(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(iParam1, "iDamageFrame", uParam0->f_5))
		{
		}
	}
	else if (uParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

int func_237(var uParam0, int iParam1)
{
	if (func_286(uParam0))
	{
		return 1;
	}
	if (PED::_0x29FCE825613FEFCA(iParam1, 400))
	{
		return 1;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		return 0;
	}
	if ((PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 8, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 9, true)) || PED::IS_PED_BEING_STEALTH_KILLED(iParam1))
	{
		return 0;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 16, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 10, true))
	{
		return 0;
	}
	if (PED::_0xB65A4DAB460A19BD(Global_35) != 0)
	{
		return 1;
	}
	if (!PED::IS_PED_RAGDOLL(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_238(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return 1;
		}
		if (func_130(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_239()
{
}

int func_240(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
	if (iVar0 != 0 && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iVar0)))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
		if (func_287(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_241();
			return 1;
		}
		else if (VEHICLE::_0xA19447D83294E29F(iVar0, &iVar5, &iVar4))
		{
			if (iVar5 <= 0)
			{
				return 0;
			}
			else if (iVar4 == iVar5)
			{
				iVar6 = 0;
				while (iVar6 < iVar4)
				{
					iVar7 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar0, iVar6);
					if (ENTITY::DOES_ENTITY_EXIST(iVar7))
					{
						if (func_288(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_241();
								return 1;
							}
						}
					}
					iVar6++;
				}
			}
		}
	}
	return 0;
}

int func_241()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_242()
{
	if (Global_1935630->f_42 == 0)
	{
		return 0;
	}
	if (Global_1935630->f_42 == Global_1935630->f_40)
	{
		return 0;
	}
	if (Global_1935630->f_43 <= 0)
	{
		return 0;
	}
	if ((func_241() - Global_1935630->f_43) >= 10000)
	{
		return 0;
	}
	return 1;
}

int func_243(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return 0;
	}
	fVar0 = func_266(uParam0);
	if (uParam0->f_12 > func_289(uParam0) && uParam0->f_12 > fVar0)
	{
		return 0;
	}
	iVar2 = func_290(iParam1);
	iVar1 = func_291(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, Global_35, 1, 0) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, uParam0->f_14, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, uParam0->f_14, 1, 0) == 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_244(int iParam0, int iParam1, var uParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_292(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

int func_245(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (*uParam1 & 67108864 != 0)
	{
		return 1;
	}
	if (Global_1935630->f_24)
	{
		return 1;
	}
	if (*uParam1 & 33554432 != 0)
	{
		if (func_293(iParam0, uParam1, 1))
		{
			return 1;
		}
		if ((PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_35, 1, 0) == 1)
		{
			return 1;
		}
	}
	iVar0 = PED::GET_JACK_TARGET(Global_35);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return 0;
	}
	iVar1 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar1 == 0)
	{
		return 0;
	}
	switch (iVar1)
	{
		case -2027383723:
		case -870494873:
		case joaat("event_shocking_seen_car_stolen"):
		case 1201762715:
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (iVar4 != Global_35)
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			if (ENTITY::_0x88AD6CC10D8D35B2(iVar5))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			return 1;
		case -1601932249:
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (PED::_0x06087579E7AA85A9(iParam0, iVar4, -1f, -1f, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar4, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
				{
					if (!func_294(uParam1, iParam0))
					{
						if (func_288(iVar4, Global_36, 1) < 7f)
						{
							return 1;
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_246(int iParam0, var uParam1)
{
	if (!func_295(0))
	{
		return 0;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
		{
			return 1;
		}
	}
	return 0;
}

int func_247(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_241();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_248(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_249(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_241();
	}
	else if (func_241() - uParam1->f_4) > func_296(uParam1)
	{
		return func_297(iParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

int func_250(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIgnoreDamageChecking"))
	{
		return 0;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (Global_35 == iVar1 || Global_1935630->f_40 == iVar1)
	{
		return 1;
	}
	return 0;
}

int func_251(var uParam0)
{
	if (!ANIMSCENE::_0x477122B8D05E7968(*uParam0, 1, 0))
	{
		return 0;
	}
	if (ANIMSCENE::_0x34A0671BE613D3D0(*uParam0))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(*uParam0, 1, 0))
	{
		return 0;
	}
	if (ANIMSCENE::_0xD8254CB2C586412B(*uParam0, 0))
	{
		return 0;
	}
	if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(*uParam0, 0))
	{
		return 0;
	}
	return 1;
}

void func_252(var uParam0, var uParam1)
{
	if (ANIMSCENE::_0xA9016536015DE29D(*uParam0, uParam1))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam0, uParam1);
	}
}

int func_253(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			return 0;
		case 3:
		case 4:
		case 5:
			return 4;
		case 6:
		case 7:
		case 8:
		case 9:
			return 2;
	}
	return 0;
}

int func_254(int iParam0, vector3 vParam1, float fParam4, float fParam5)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (func_298(vParam1, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam4, 0f, fParam5, 0f), ENTITY::GET_ENTITY_COORDS(iParam0, true, false)))
	{
		return 0;
	}
	return 1;
}

float func_255(var uParam0)
{
	if (!func_142(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_299(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_217() - uParam0->f_1);
}

int func_256(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_257(int iParam0, int iParam1)
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

void func_258(int iParam0, var uParam1)
{
	if (!func_111(iParam0))
	{
		return;
	}
	func_300(iParam0, uParam1);
}

void func_259(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_301();
	if (Global_1935630->f_27)
	{
		Global_1935630->f_28 = MISC::GET_GAME_TIMER();
	}
	if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_44))
	{
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar1))
			{
			}
			else
			{
				uVar1 = Global_1935630->f_44;
			}
			Global_1935630->f_46 = uVar1;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_302(&(Global_1935630->f_34), &(Global_1935630->f_39));
			Global_1935630->f_38 = iParam0;
			break;
		case 1:
			Global_1935630->f_30 = PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 4000);
			if (!Global_1935630->f_30)
			{
				if (Global_1935630->f_44 == joaat("weapon_lasso"))
				{
					Global_1935630->f_30 = PED::_0xB65A4DAB460A19BD(Global_35) != 0;
				}
			}
			break;
		case 2:
			switch (Global_1935630->f_46)
			{
				case joaat("weapon_lasso"):
					Global_1935630->f_25 = 0;
					break;
				default:
					if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46))
					{
						Global_1935630->f_25 = PED::_0x285D36C5C72B0569(Global_35) <= 3f;
					}
					else
					{
						Global_1935630->f_25 = PED::_0x285D36C5C72B0569(Global_35) <= 1f;
					}
					if (Global_1935630->f_25)
					{
						Global_1935630->f_29 = MISC::GET_FRAME_COUNT();
					}
					break;
			}
			break;
		default:
			Global_1935630->f_38 = iParam0 + 1;
			break;
	}
	Global_22 |= 4;
}

var func_260(int iParam0)
{
	return &(Global_1109400->f_275[iParam0 /*3*/]);
}

int func_261(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_303(bParam0, &uVar0, &uVar1))
	{
		return 1;
	}
	return 0;
}

int func_262(var uParam0)
{
	int iVar0;

	iVar0 = Global_1935630->f_40;
	if (func_181() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_304(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_304(uParam0);
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_291(iVar0) == -1)
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iVar0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iVar0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return 0;
	}
	uParam0->f_14 = iVar0;
	return 1;
}

void func_263(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_305(uParam0);
	}
}

int func_264(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(iParam2))
	{
		iVar1 = func_291(iParam2);
	}
	else
	{
		iVar1 = func_290(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_291(iParam0);
	}
	else
	{
		iVar0 = func_290(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return 1;
		}
	}
	if (func_306(*uParam1, 8388608))
	{
		return 1;
	}
	iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	iVar3 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam2);
	switch (iVar2)
	{
		case -1976316465:
		case -1505548114:
		case -350651841:
		case -50399569:
		case 106566339:
		case 707888648:
		case 841021282:
			switch (iVar3)
			{
				case -1976316465:
				case -1505548114:
				case -350651841:
				case 841021282:
					return 1;
			}
			break;
	}
	if (iVar2 == iVar3)
	{
		return 1;
	}
	return 0;
}

float func_265(int iParam0, int iParam1)
{
	return func_130(iParam0, iParam1, 1, 1);
}

float func_266(var uParam0)
{
	return uParam0->f_26;
}

int func_267(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
			return 1;
		case 8192:
			return iParam4;
		default:
			break;
	}
	return 0;
}

void func_268(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_208(uParam0, 134217728);
	}
	else
	{
		func_207(uParam0, 134217728);
	}
}

void func_269()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

int func_270(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return 0;
	}
	if (Global_1935630->f_44 == joaat("weapon_lasso") && Global_1935630->f_27)
	{
	}
	else if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, 0, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar2) && iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2))
		{
			return 0;
		}
	}
	if (Global_1935630->f_40 != 0)
	{
		if (PED::_0xB676EFDA03DADA52(Global_1935630->f_40, 1) == iParam0)
		{
			return 0;
		}
	}
	if (bParam3)
	{
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_130(iVar0, iParam0, 1, 1) <= 4f)
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_0x6AD66548840472E5(func_307(iVar0, 0)))
		{
			if (func_308(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_271(var uParam0)
{
	return uParam0->f_17;
}

int func_272(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return 0;
	}
	fVar0 = -1f;
	if (!func_306(*uParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, fParam3, -1f, fVar0))
	{
		return 1;
	}
	if (*uParam0 & 32768 != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17))
		{
			return 1;
		}
	}
	return 0;
}

int func_273(var uParam0)
{
	return uParam0->f_18;
}

int func_274(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return 0;
	}
	if (bParam3)
	{
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, 0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_0x6AD66548840472E5(func_307(iVar0, 0)))
		{
			if (func_309(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_275(var uParam0)
{
	return uParam0->f_23;
}

int func_276(var uParam0)
{
	return uParam0->f_21;
}

int func_277(var uParam0)
{
	int iVar0;

	switch (uParam0->f_7)
	{
		case 0:
			switch (uParam0->f_6)
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
			switch (uParam0->f_6)
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
			switch (uParam0->f_6)
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
			switch (uParam0->f_6)
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
			switch (uParam0->f_6)
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

int func_278(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_310(iParam0, vParam4, 0.5f))
	{
		if (ENTITY::_0x0C9DBF48C6BA6E4C(iParam0, vParam4, 17))
		{
			return 1;
		}
	}
	if (BUILTIN::VDIST(vParam1, vParam4) < 5f)
	{
		return 1;
	}
	return 0;
}

int func_279(int iParam0)
{
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, false))
	{
		if (Global_1935630->f_44 == joaat("weapon_unarmed"))
		{
			return 1;
		}
		if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46))
		{
			if (WEAPON::_0x959383DCD42040DA(Global_1935630->f_46) || WEAPON::_0xC4DEC3CA8C365A5D(Global_1935630->f_46))
			{
				return 1;
			}
		}
	}
	if (func_311(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_280(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (PED::_0x772A1969F649E902(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_281(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_312(iParam1))
		{
			return 0;
		}
	}
	fVar0 = 5f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_282(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_312(iParam1))
		{
			return 0;
		}
	}
	fVar0 = 10f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_283(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_312(iParam1))
	{
		return 0;
	}
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x2BA9D7BF629F920C(iParam1);
	}
	if (fParam2 < fVar0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, &(Global_1935630->f_34[iParam3]), 17))
		{
			if (PED::_0x06087579E7AA85A9(iParam1, &(Global_1935630->f_34[iParam3]), -1f, -1f, -1f, -1f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_284(int iParam0, int iParam1)
{
	if (!TASK::_0xEFC4303DDC6E60D3(iParam0))
	{
		return 0;
	}
	*iParam1 = TASK::_0xED1F514AF4732258(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*iParam1, true))
	{
		return 0;
	}
	if (!PED::_0x2D64376CF437363E(*iParam1))
	{
		return 0;
	}
	return 1;
}

int func_285(int iParam0, int iParam1)
{
	if (PED::_0xB65A4DAB460A19BD(iParam0) == iParam1)
	{
		return 1;
	}
	if (func_313(iParam0, 1, 0, 0) != joaat("weapon_lasso"))
	{
		return 0;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iParam0, 16, 0))
	{
		if (PED::GET_MELEE_TARGET_FOR_PED(iParam0) == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_286(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

int func_287(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_288(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

float func_288(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

float func_289(var uParam0)
{
	return uParam0->f_24;
}

int func_290(int iParam0)
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

int func_291(int iParam0)
{
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iParam0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
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

int func_292(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (Global_1935630->f_40 != 0)
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
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_1935630->f_40, 1, 1))
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
			if (func_284(Global_35, &iVar1))
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
		fVar2 = func_130(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_130(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1935630->f_40, iParam0))
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

int func_293(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_303(1, &iVar0, &iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iVar0 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
				{
					if (!bParam2 || !func_294(uParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iVar1 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
			{
				if (!bParam2 || !func_294(uParam1, iVar1))
				{
					if (func_288(iVar1, Global_36, 1) < 5f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_294(var uParam0, int iParam1)
{
	int iVar0;

	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(iParam1, "bIsCriminal"))
	{
		return 1;
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam1, 4, false))
	{
		return 1;
	}
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam1);
	switch (iVar0)
	{
		case -1996978098:
		case -1448293989:
		case -350226955:
		case 266218800:
		case 555364152:
		case 1078461828:
		case 1222652248:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_295(int iParam0)
{
	if (func_126())
	{
		return 0;
	}
	return func_314(((*Global_1347702)[58 /*49*/])->f_15, 1);
}

int func_296(var uParam0)
{
	return uParam0->f_20;
}

int func_297(int iParam0, var uParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (uParam1->f_4 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = uParam1->f_12;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90f))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, Global_35))
		{
			return 1;
		}
	}
	return 0;
}

bool func_298(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, Vector3 vParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

bool func_299(var uParam0)
{
	return func_194(*uParam0, 2);
}

void func_300(int iParam0, var uParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_4 = uParam1;
}

int func_301()
{
	if (func_315())
	{
		return 0;
	}
	if (Global_1572887->f_12 == -1)
	{
		if (Global_1935630->f_44 == joaat("weapon_lasso"))
		{
			return PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_ATTACK"));
		}
		return PED::GET_PED_RESET_FLAG(Global_35, 311);
	}
	else
	{
		return &(Global_1955569->f_992[2]);
	}
	return 0;
}

void func_302(var uParam0, var uParam1)
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
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0[iVar1]))
			{
			}
			else if (!PED::IS_PED_HUMAN(uParam0[iVar1]) && !(DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "HorseTeamA") || DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "HorseTeamB")))
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "bIgnoreDamageChecking"))
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

int func_303(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_32))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630->f_32))
		{
			*iParam1 = Global_1935630->f_32;
			iVar0 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_33))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630->f_33))
		{
			if (PED::_0x3AA24CCC0D451379(Global_1935630->f_33) || ENTITY::IS_ENTITY_DEAD(Global_1935630->f_33))
			{
				*iParam2 = Global_1935630->f_33;
				iVar0 = 1;
			}
		}
	}
	if (Global_1935630->f_30 && !PED::IS_PED_INJURED(Global_35))
	{
		iVar1 = PED::_0xB65A4DAB460A19BD(Global_35);
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

int func_304(var uParam0)
{
	int iVar0;
	int iVar1;

	if (iVar0 == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_INTERACT_LOCKON_DETACH_HORSE")))
		{
			if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar1, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						if (PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iVar1)))
						{
							iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
							return iVar0;
						}
					}
				}
			}
		}
	}
	if (uParam0->f_6 == 3)
	{
		if (iVar0 == 0)
		{
			if (!Global_1935630->f_12)
			{
				iVar0 = PED::_0x4B19F171450E0D4F(Global_35);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = PED::_0xB65A4DAB460A19BD(Global_35);
		}
		if (iVar0 != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					iVar0 = 0;
				}
			}
		}
	}
	return iVar0;
}

void func_305(var uParam0)
{
	int iVar0;

	if (Global_1935630->f_38 == 0)
	{
		func_207(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Global_1935630->f_34[iVar0])))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(&(Global_1935630->f_34[iVar0])))
				{
					func_208(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}

bool func_306(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

var func_307(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_308(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_309(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_309(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	bVar2 = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &fVar0, &fVar1);
	if (bVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_310(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_311(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, joaat("weapon_unarmed"), iParam1))
		{
			return 1;
		}
		else if (!bParam2)
		{
			if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_44))
			{
				if (WEAPON::_0x959383DCD42040DA(Global_1935630->f_44) || Global_1935630->f_44 == joaat("weapon_melee_knife"))
				{
					if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, Global_1935630->f_44, iParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_312(int iParam0)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return 0;
	}
	iVar0 = TASK::_0x2D0571BB55879DA2(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if ((((((((iVar0 == -1689755873 || iVar0 == 1690225020) || iVar0 == 1774730608) || iVar0 == 309374745) || iVar0 == -363194080) || iVar0 == 640190094) || iVar0 == -1085971095) || iVar0 == 49488831) || iVar0 == 343112864)
	{
		return 1;
	}
	if (iVar0 == -2016812721 || iVar0 == 1097070152)
	{
		iVar0 = PED::_0xC22AA08A8ADB87D4(iParam0);
		if (iVar0 == 970972795)
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_313(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = joaat("weapon_unarmed");
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

int func_314(int iParam0, bool bParam1)
{
	switch (func_316(iParam0))
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

int func_315()
{
	switch (Global_1935630->f_44)
	{
		case joaat("weapon_melee_lantern"):
		case joaat("weapon_kit_binoculars"):
		case joaat("weapon_melee_lantern_electric"):
		case joaat("weapon_melee_davy_lantern"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_316(int iParam0)
{
	if (!func_111(iParam0))
	{
		return -1;
	}
	return func_317(iParam0);
}

int func_317(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_318(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

int func_318(int iParam0)
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

