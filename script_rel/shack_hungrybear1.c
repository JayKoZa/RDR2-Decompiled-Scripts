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
	struct<279> Local_73 = { 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1124266369, 1282171014, 1605749521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1103101952, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
					if (!TASK::_DOES_SCENARIO_POINT_EXIST(ScriptParam_0.f_56.f_1))
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

bool func_2()
{
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		return false;
	}
	return true;
}

bool func_3(var uParam0)
{
	func_20(uParam0);
	func_21(uParam0);
	func_22(uParam0);
	if (func_23(uParam0))
	{
	}
	else
	{
		return false;
	}
	return true;
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

bool func_6(var uParam0)
{
	if ((!func_28(uParam0) || !func_29(uParam0)) || !func_30(uParam0))
	{
		return false;
	}
	if (uParam0->f_4 > 0)
	{
		if (!PED::_0x5C16855277819BBF() == uParam0->f_4)
		{
			return false;
		}
	}
	return true;
}

bool func_7()
{
	return func_31(Global_1935630, 4096);
}

bool func_8(var uParam0, bool bParam1, float fParam2, int iParam3, bool bParam4)
{
	if (bParam1)
	{
		while (uParam0->f_20 < 6)
		{
			func_34(uParam0, func_32(uParam0, uParam0->f_20), func_33(uParam0, uParam0->f_20), uParam0->f_20, fParam2, iParam3, bParam4);
		}
		func_35(&(uParam0->f_21), 2);
		return true;
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
					func_34(uParam0, func_32(uParam0, uParam0->f_20), func_33(uParam0, uParam0->f_20), uParam0->f_20, fParam2, iParam3, bParam4);
				}
				else
				{
					func_35(&(uParam0->f_21), 2);
				}
				break;
			case 2:
				return true;
		}
	}
	return false;
}

bool func_9(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (!func_38(uParam0, func_36(uParam0, iVar0), func_37(uParam0, iVar0), iVar0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_10(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[iVar0]))
			{
				if (!PED::_0xA0BC8FAED8CFEB3C(uParam0->f_13[iVar0]))
				{
					return false;
				}
			}
			else
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_11(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (!func_39(uParam0, iVar0) == joaat("META_OUTFIT_DEFAULT"))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[iVar0]))
			{
				func_40(uParam0->f_13[iVar0], func_39(uParam0, iVar0));
			}
		}
		iVar0++;
	}
}

bool func_12(var uParam0)
{
	return true;
}

void func_13(var uParam0)
{
	if (func_41(uParam0->f_3, 2048) && !func_41(uParam0->f_3, 64))
	{
		func_42(&(uParam0->f_3), 64);
	}
	else if (func_41(uParam0->f_3, 1024) && !func_41(uParam0->f_3, 32))
	{
		func_42(&(uParam0->f_3), 32);
	}
	else if (func_41(uParam0->f_3, 512) && !func_41(uParam0->f_3, 16))
	{
		func_42(&(uParam0->f_3), 16);
	}
	else if (func_41(uParam0->f_3, 256) && !func_41(uParam0->f_3, 8))
	{
		func_42(&(uParam0->f_3), 8);
	}
	else if (func_41(uParam0->f_3, 128) && !func_41(uParam0->f_3, 4))
	{
		func_42(&(uParam0->f_3), 4);
	}
	func_43(&(uParam0->f_5), &(uParam0->f_3));
}

void func_14(var uParam0)
{
}

int func_15()
{
	return 22;
}

int func_16(int iParam0)
{
	if (!func_44(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_3;
}

bool func_17(var uParam0)
{
	if ((ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::IS_ENTITY_DEAD(Global_35)) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, false, false), func_45(), true) >= 110f)
	{
		return true;
	}
	return false;
}

bool func_18(var uParam0)
{
	struct<6> Var0;
	float fVar6;

	func_46(&Local_73);
	if (Local_73 >= 4)
	{
		if (!func_41(uParam0->f_3, 8192))
		{
			if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_46) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_46, true, 0))
			{
				func_47(uParam0);
			}
		}
		func_48(uParam0, &Local_73);
		if (!Local_73.f_264)
		{
			if (!Local_73.f_278)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_73.f_102))
				{
					if (PED::IS_PED_DEAD_OR_DYING(Local_73.f_102, true))
					{
						if (func_49(Local_73.f_102, Local_73.f_186, 0, 0))
						{
							PED::_0x6569F31A01B4C097(Local_73.f_102, 13, 1);
						}
						Local_73.f_278 = 1;
					}
				}
			}
		}
	}
	switch (Local_73)
	{
		case 0:
			Local_73.f_249 = "shb_int_SP";
			func_50(&Local_73);
			func_51(1610014965, 0, 0);
			if (!func_41(uParam0->f_3, 4))
			{
				func_52(&Local_73, 1);
			}
			else
			{
				func_53(uParam0, &Local_73);
				Local_73.f_265 = 1;
				if (func_54(1024, &fVar6))
				{
					if ((func_55() - fVar6) >= 168f)
					{
						Local_73.f_265 = 0;
					}
				}
				Local_73.f_264 = 1;
				func_52(&Local_73, 1);
			}
			break;
		case 1:
			if (func_56(&Local_73))
			{
				func_52(&Local_73, 3);
			}
			break;
		case 3:
			if (func_57(&Local_73))
			{
				func_52(&Local_73, 4);
			}
			break;
		case 2:
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_73.f_102, false, true);
			if (func_58(Global_35, Local_73.f_210, 1, 0))
			{
				func_52(&Local_73, 4);
			}
			else
			{
				Var0 = { func_59(0) };
				Var0.f_5 = (Var0.f_5 - 180f);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_73.f_102, Local_73.f_252, Var0.f_5, true, false, true);
				func_52(&Local_73, 11);
			}
			break;
		case 4:
			if (func_60(&Local_73))
			{
				if (!Local_73.f_264)
				{
					func_52(&Local_73, 5);
				}
				else
				{
					func_52(&Local_73, 17);
				}
			}
			break;
		case 5:
			if (!func_58(Global_35, Local_73.f_210, 1, 0))
			{
				func_52(&Local_73, 2);
			}
			if (func_61(&Local_73))
			{
				func_62(uParam0, &Local_73);
				func_52(&Local_73, 8);
			}
			else if (func_63(&Local_73))
			{
				func_62(uParam0, &Local_73);
				func_52(&Local_73, 6);
			}
			break;
		case 6:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (func_64(&Local_73))
			{
				func_62(uParam0, &Local_73);
				func_52(&Local_73, 7);
			}
			break;
		case 7:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (func_65(&Local_73))
			{
				func_52(&Local_73, 8);
			}
			break;
		case 8:
			if (func_66(&Local_73))
			{
				func_52(&Local_73, 10);
			}
			break;
		case 10:
			if (func_67(&Local_73))
			{
				func_52(&Local_73, 17);
			}
			break;
		case 9:
			if (func_68(&Local_73))
			{
				func_52(&Local_73, 17);
			}
			else if (func_41(Local_73.f_237, 32))
			{
				func_52(&Local_73, 10);
			}
			break;
		case 11:
			if (func_58(Global_35, Local_73.f_210, 1, 0))
			{
				func_52(&Local_73, 2);
			}
			if ((func_61(&Local_73) || func_69(&Local_73)) || func_70(&Local_73))
			{
				func_42(&(Local_73.f_237), 4096);
				ENTITY::SET_ENTITY_HEADING(Local_73.f_102, 163f);
				func_71(&(Local_73.f_261), 1);
				func_62(uParam0, &Local_73);
				func_52(&Local_73, 12);
			}
			break;
		case 12:
			if (func_72(&Local_73))
			{
				func_73(&Local_73);
				func_52(&Local_73, 13);
			}
			break;
		case 13:
			func_74();
			func_73(&Local_73);
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_73.f_102, "shack_hb1_backexit"))
			{
				func_75(Local_73.f_102, 1.5f);
			}
			if (func_61(&Local_73) || (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_73.f_102, "shack_hb1_backexit") || TASK::GET_PED_WAYPOINT_PROGRESS(Local_73.f_102) >= 2))
			{
				func_76(&Local_73);
				func_52(&Local_73, 14);
			}
			break;
		case 14:
			func_73(&Local_73);
			if (!TASK::GET_SCRIPT_TASK_STATUS(Local_73.f_102, 242628503, true) == 1)
			{
				func_77(&Local_73);
				Local_73.f_263 = MISC::GET_GAME_TIMER() + 4000;
				func_52(&Local_73, 15);
			}
			break;
		case 15:
			if (MISC::GET_GAME_TIMER() < Local_73.f_263 && !func_78(Local_73.f_102, joaat("SCRIPT_TASK_GRAPPLE")))
			{
				func_73(&Local_73);
			}
			if (func_67(&Local_73))
			{
				func_52(&Local_73, 17);
			}
			break;
		case 17:
			if (func_79(uParam0->f_5))
			{
				func_62(uParam0, &Local_73);
				if (func_80(uParam0->f_5) || func_81(uParam0->f_5))
				{
					func_82(uParam0->f_5, 0, 2);
				}
			}
			break;
		default:
			break;
	}
	return false;
}

void func_19(var uParam0)
{
	func_83(uParam0);
	func_84(uParam0);
	func_85(uParam0, 0);
	func_86(uParam0, 0);
	func_87(uParam0);
	func_88(uParam0);
	func_89(uParam0);
	if (SCRIPTS::IS_THREAD_ACTIVE(*uParam0, false))
	{
		SCRIPTS::TERMINATE_THREAD(*uParam0);
	}
}

void func_20(var uParam0)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_46))
	{
		if (!func_91(func_90(uParam0)))
		{
			if ((uParam0->f_1 == 2 || uParam0->f_1 == 4) || uParam0->f_1 == 8)
			{
				uParam0->f_46 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(func_90(uParam0), func_92(uParam0), func_93(uParam0), "SHACK_VOLUME_RESTRICTION");
			}
			else
			{
				uParam0->f_46 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(func_90(uParam0), func_92(uParam0), func_93(uParam0), "SHACK_VOLUME_RESTRICTION");
			}
		}
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_46))
		{
			POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_46, 0, 0, 0, -1, -1, 0);
			POPULATION::_0xB56D41A694E42E86(uParam0->f_46, 0, 0, 0, -1, -1, 2);
		}
	}
	func_94(uParam0);
	if (func_95(uParam0))
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
		if (!func_96(uParam0, iVar0))
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
				uParam0->f_6[0] = joaat("SHACK_ONTHERUN_MALES_01");
				uParam0->f_6[1] = joaat("A_M_M_UNICORPSE_01");
				uParam0->f_6[2] = joaat("A_M_M_UNICORPSE_01");
				uParam0->f_22[0] = joaat("P_CS_SHACKLELEG01X");
			}
			else if (!func_41(uParam0->f_3, 8))
			{
				if (!func_97(-1282804314))
				{
					uParam0->f_4 = 3;
					uParam0->f_6[0] = joaat("SHACK_ONTHERUN_MALES_01");
					uParam0->f_6[1] = joaat("A_M_M_UNICORPSE_01");
					uParam0->f_6[2] = joaat("A_M_M_UNICORPSE_01");
				}
				else
				{
					uParam0->f_4 = 2;
					uParam0->f_6[1] = joaat("A_M_M_UNICORPSE_01");
					uParam0->f_6[2] = joaat("A_M_M_UNICORPSE_01");
				}
			}
			break;
		case 131072:
			if (!func_41(uParam0->f_3, 4))
			{
				uParam0->f_4 = 2;
				uParam0->f_6[0] = joaat("U_M_Y_SHACKSTARVINGKID_01");
				uParam0->f_6[1] = joaat("U_M_Y_SHACKSTARVINGKID_01");
				uParam0->f_22[0] = joaat("P_CS_RT_ENVELOPE01X");
			}
			else
			{
				uParam0->f_4 = 2;
				uParam0->f_6[0] = joaat("U_M_Y_SHACKSTARVINGKID_01");
				uParam0->f_6[1] = joaat("U_M_Y_SHACKSTARVINGKID_01");
			}
			break;
		case 8192:
			if (!func_41(uParam0->f_3, 4))
			{
				if (uParam0->f_48)
				{
					if (!func_99(func_98(uParam0->f_5), 4) || !func_99(func_98(uParam0->f_5), 8))
					{
						uParam0->f_4 = 0;
						if ((((((!func_99(func_98(uParam0->f_5), 2) && !func_100(128, 0, 1)) && !func_101(PLAYER::GET_PLAYER_INDEX(), 1, 1, 1)) && !func_102()) && !func_103(20)) && !func_99(func_98(uParam0->f_5), 4)) && !func_99(func_98(uParam0->f_5), 8))
						{
							uParam0->f_4 += 2;
							uParam0->f_6[0] = joaat("SHACK_MISSINGHUSBAND_MALES_01");
							uParam0->f_6[4] = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
						}
						if (!func_99(func_98(uParam0->f_5), 4))
						{
							uParam0->f_4 += 3;
							uParam0->f_6[1] = joaat("A_M_M_UNICORPSE_01");
							uParam0->f_6[2] = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
							uParam0->f_6[3] = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
						}
						if (!func_99(func_98(uParam0->f_5), 8))
						{
							uParam0->f_22[1] = joaat("P_CS_RT_ENVELOPE01X");
						}
					}
				}
				else if (!func_99(func_98(uParam0->f_5), 1))
				{
					uParam0->f_22[0] = joaat("P_CS_RT_ENVELOPE01X");
				}
			}
			else if (!func_41(uParam0->f_3, 8))
			{
				uParam0->f_22[0] = joaat("P_CS_RT_ENVELOPE01X");
			}
			break;
		case 4096:
			if (!func_41(uParam0->f_3, 4))
			{
				uParam0->f_4 = 5;
				uParam0->f_6[0] = joaat("A_M_M_UNICORPSE_01");
				uParam0->f_6[1] = joaat("A_F_M_UNICORPSE_01");
				uParam0->f_6[2] = joaat("A_F_M_UNICORPSE_01");
				uParam0->f_6[3] = joaat("A_C_CROW_01");
				uParam0->f_6[4] = joaat("A_C_CROW_01");
			}
			else if (func_104(uParam0, 1126694912 /* Float: 168f */))
			{
				uParam0->f_4 = 2;
				uParam0->f_6[0] = joaat("A_M_M_UNICORPSE_01");
				uParam0->f_6[1] = joaat("A_F_M_UNICORPSE_01");
			}
			break;
		case 256:
			if (!func_41(uParam0->f_3, 4))
			{
				uParam0->f_4 = 5;
				uParam0->f_6[0] = joaat("A_M_M_UNICORPSE_01");
				uParam0->f_6[1] = joaat("A_M_M_UNICORPSE_01");
				uParam0->f_6[2] = joaat("A_C_CROW_01");
				uParam0->f_6[3] = joaat("A_C_CROW_01");
				uParam0->f_6[4] = joaat("A_C_CROW_01");
			}
			break;
		case 64:
			if (!func_41(uParam0->f_3, 4))
			{
				uParam0->f_4 = 6;
				uParam0->f_6[0] = joaat("A_M_M_UNICORPSE_01");
				uParam0->f_6[1] = joaat("A_M_M_UNICORPSE_01");
				uParam0->f_6[2] = joaat("A_M_M_UNICORPSE_01");
				uParam0->f_6[3] = joaat("A_M_M_UNICORPSE_01");
				uParam0->f_6[4] = joaat("A_M_M_UNICORPSE_01");
				uParam0->f_6[5] = joaat("A_M_M_UNICORPSE_01");
			}
			break;
		case 16:
			uParam0->f_4 = 1;
			uParam0->f_6[0] = joaat("A_F_M_UNICORPSE_01");
			break;
		case 512:
			uParam0->f_4 = 5;
			uParam0->f_6[0] = joaat("A_M_M_UNICORPSE_01");
			uParam0->f_6[1] = joaat("A_M_M_UNICORPSE_01");
			uParam0->f_6[2] = joaat("A_F_M_UNICORPSE_01");
			uParam0->f_6[3] = joaat("A_F_M_UNICORPSE_01");
			uParam0->f_6[4] = joaat("A_M_Y_UNICORPSE_01");
			break;
		case 32:
			if (func_104(uParam0, 1126694912 /* Float: 168f */))
			{
				uParam0->f_4 = 2;
				uParam0->f_6[0] = joaat("A_M_M_UNICORPSE_01");
				uParam0->f_6[1] = joaat("A_M_M_UNICORPSE_01");
			}
			break;
		case 16384:
			if (!func_41(uParam0->f_3, 4))
			{
				uParam0->f_4 = 3;
				uParam0->f_6[0] = joaat("A_M_M_UNICORPSE_01");
			}
			break;
		case 65536:
			if (!func_41(uParam0->f_3, 4))
			{
				uParam0->f_22[0] = joaat("P_LNNHOUSE_STASH02");
				if (!func_99(func_98(uParam0->f_5), 2))
				{
					uParam0->f_22[1] = joaat("P_CS_RT_ENVELOPE01X");
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

bool func_23(var uParam0)
{
	return true;
}

void func_24(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (!uParam0->f_6[iVar0] == 0)
		{
			STREAMING::REQUEST_MODEL(uParam0->f_6[iVar0], false);
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
		if (!uParam0->f_22[iVar0] == 0)
		{
			STREAMING::REQUEST_MODEL(uParam0->f_22[iVar0], false);
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
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_105(uParam0, iVar0, 0)))
		{
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_36[iVar0]))
			{
				if (func_106(uParam0, iVar0))
				{
					iParam1 = 8;
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(func_105(uParam0, iVar0, 1)))
				{
					uParam0->f_36[iVar0] = ANIMSCENE::_CREATE_ANIM_SCENE(func_105(uParam0, iVar0, 0), iParam1, func_105(uParam0, iVar0, 1), false, true);
				}
				else
				{
					uParam0->f_36[iVar0] = ANIMSCENE::_CREATE_ANIM_SCENE(func_105(uParam0, iVar0, 0), iParam1, 0, false, true);
				}
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_36[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_27(var uParam0)
{
}

bool func_28(var uParam0)
{
	if (!func_107(uParam0) || !func_108(uParam0))
	{
		return false;
	}
	return true;
}

bool func_29(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_105(uParam0, iVar0, 0)))
		{
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_36[iVar0], true, false))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_30(var uParam0)
{
	return true;
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

void func_34(var uParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	if (!uParam0->f_6[iParam5] == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iParam5]))
		{
			if (!func_109(uParam0, iParam5))
			{
				bParam8 = true;
			}
			if (uParam0->f_1 == 8192)
			{
				if (iParam5 == 2 || iParam5 == 3)
				{
					uParam0->f_13[iParam5] = func_110(uParam0->f_6[iParam5], vParam1, fParam4, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0);
				}
				else
				{
					uParam0->f_13[iParam5] = func_110(uParam0->f_6[iParam5], vParam1, fParam4, 1, 1, 0, 1, iParam7, 1, 0, 0, 0, 0);
				}
			}
			else
			{
				uParam0->f_13[iParam5] = func_110(uParam0->f_6[iParam5], vParam1, fParam4, 1, 1, 0, 1, iParam7, 1, 0, 0, 0, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[iParam5]))
			{
				if (bParam6)
				{
					ENTITY::_0x9587913B9E772D29(uParam0->f_13[iParam5], 0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_13[iParam5], true);
				TASK::TASK_STAND_STILL(uParam0->f_13[iParam5], -1);
				if (!bParam8)
				{
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_13[iParam5], false);
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

bool func_38(var uParam0, vector3 vParam1, vector3 vParam4, int iParam7)
{
	if (!uParam0->f_22[iParam7] == 0 && !func_91(vParam1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_29[iParam7]))
		{
			uParam0->f_29[iParam7] = OBJECT::CREATE_OBJECT(uParam0->f_22[iParam7], vParam1, true, true, false, false, true);
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_29[iParam7]))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_29[iParam7], vParam1, true, false, true, true);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_29[iParam7], vParam4, 2, true);
			}
			else
			{
				return false;
			}
		}
	}
	return true;
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
	return joaat("META_OUTFIT_DEFAULT");
}

void func_40(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_111(iParam0, iParam1))
		{
			if (func_112(iParam0, iParam1))
			{
				if (func_113(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_114(iParam0);
				}
			}
			else
			{
				PED::_SET_PED_BODY_COMPONENT(iParam0, iParam1);
				PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
			}
			PED::_0xE3144B932DFDFF65(iParam0, 0f, -1, true, true);
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

bool func_41(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_42(var uParam0, int iParam1)
{
	func_115(uParam0, iParam1);
}

int func_43(var uParam0, var uParam1)
{
	if (func_79(*uParam0))
	{
		func_116(*uParam0, *uParam1);
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

bool func_44(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

Vector3 func_45()
{
	return -2370.027f, 472.4625f, 131.2446f;
}

void func_46(int iParam0)
{
	if (!iParam0->f_264)
	{
		if (!func_41(iParam0->f_237, 131072))
		{
			if (*iParam0 >= 4 || *iParam0 == 2)
			{
				if ((!func_61(iParam0) && !func_69(iParam0)) && (((*iParam0 == 5 || *iParam0 == 11) || *iParam0 == 2) || *iParam0 == 4))
				{
					if ((INTERIOR::IS_INTERIOR_READY(iParam0->f_250) && ENTITY::DOES_ENTITY_EXIST(func_117(1610014965, 0))) && VOLUME::_DOES_VOLUME_EXIST(iParam0->f_222))
					{
						iParam0->f_261 = func_118(func_117(1610014965, 0), iParam0->f_222, 274);
						func_42(&(iParam0->f_237), 131072);
					}
				}
				else
				{
					func_42(&(iParam0->f_237), 131072);
				}
			}
		}
	}
}

void func_47(var uParam0)
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
			if (!MAP::_MAP_IS_DISCOVERY_ACTIVE(iVar0))
			{
				MAP::_0xD8C7162AB2E2AF45(iVar0);
			}
		}
		func_42(&(uParam0->f_3), 8192);
		func_120(func_119(joaat("SHACK_FOUND")), 1);
	}
}

void func_48(var uParam0, int iParam1)
{
	if (!func_41(iParam1->f_238, 1))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iParam1->f_266) && !ENTITY::IS_ENTITY_DEAD(iParam1->f_266)) && func_121(Global_35, ENTITY::GET_ENTITY_COORDS(iParam1->f_266, true, false), 15f, 1, 1))
		{
			TASK::_0xA6A76D666A281F2D(iParam1->f_266, 1238534972 /* GXTEntry: "A Day\'s Walk Poem" */);
			if (func_122())
			{
				if (func_123(1238534972 /* GXTEntry: "A Day\'s Walk Poem" */))
				{
					func_124(uParam0, iParam1, 1);
				}
			}
		}
	}
	if (!func_41(iParam1->f_238, 2))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iParam1->f_272) && !ENTITY::IS_ENTITY_DEAD(iParam1->f_272)) && func_121(Global_35, ENTITY::GET_ENTITY_COORDS(iParam1->f_272, true, false), 15f, 1, 1))
		{
			TASK::_0xA6A76D666A281F2D(iParam1->f_272, -1679052943 /* GXTEntry: "Dear Annabella Poem" */);
			if (func_122())
			{
				if (func_123(-1679052943 /* GXTEntry: "Dear Annabella Poem" */))
				{
					func_124(uParam0, iParam1, 2);
				}
			}
		}
	}
}

bool func_49(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, true, 0);
}

void func_50(int iParam0)
{
	iParam0->f_252 = { -2370.775f, 473.4859f, 131.2296f };
	iParam0->f_255 = { -2369.245f, 466.5723f, 132.0232f };
	iParam0->f_258 = { -2370.027f, 472.4625f, 131.2446f };
}

int func_51(int iParam0, bool bParam1, bool bParam2)
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
	{
		if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(Global_1051081.f_15[0])) && bParam1)
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, true, false, Global_1051081.f_15[0], 0, false);
		}
		else
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, false, false, 0, 0, false);
		}
	}
	else if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(Global_1051081.f_15[0])) && bParam1)
	{
		if (!OBJECT::_IS_DOOR_REGISTERED_WITH_NETWORK(iParam0))
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, true, false, Global_1051081.f_15[0], 0, false);
		}
	}
	if (bParam2)
	{
		OBJECT::_0x1F1FABFE9B2A1254(iParam0, 1);
	}
	return iParam0;
}

void func_52(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

void func_53(var uParam0, int iParam1)
{
	func_125(&(uParam0->f_5), &(iParam1->f_238));
}

bool func_54(int iParam0, float fParam1)
{
	int iVar0;

	iVar0 = func_126(iParam0);
	if (iVar0 != 0)
	{
		*fParam1 = func_127(iParam0);
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

float func_55()
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar6 = func_128();
	iVar4 = func_129(iVar6);
	iVar5 = func_130(iVar6);
	iVar3 = func_131(iVar5, iVar4);
	iVar2 = func_132(iVar6);
	iVar1 = func_133(iVar6);
	fVar0 = (((BUILTIN::TO_FLOAT(iVar1) + (BUILTIN::TO_FLOAT((iVar2 - 1)) * 24f)) + (BUILTIN::TO_FLOAT(iVar3) * 24f)) + ((BUILTIN::TO_FLOAT(iVar4) * 365.2422f) * 24f));
	return fVar0;
}

bool func_56(int iParam0)
{
	PED::_0xED9582B3DA8F02B4(2);
	if (!iParam0->f_264)
	{
		STREAMING::REQUEST_MODEL(iParam0->f_99, false);
		STREAMING::REQUEST_ANIM_DICT(func_134());
		TASK::REQUEST_WAYPOINT_RECORDING("shack_hb1_backexit");
		if (!STREAMING::HAS_MODEL_LOADED(iParam0->f_99))
		{
		}
	}
	if (!func_41(iParam0->f_238, 1) || !func_41(iParam0->f_238, 2))
	{
		STREAMING::REQUEST_MODEL(iParam0->f_101, false);
	}
	if (!iParam0->f_264 || iParam0->f_265)
	{
		STREAMING::REQUEST_MODEL(iParam0->f_100, false);
	}
	if ((!iParam0->f_264 || iParam0->f_265) && !STREAMING::HAS_MODEL_LOADED(iParam0->f_100))
	{
	}
	if (!iParam0->f_264)
	{
		if ((((STREAMING::HAS_MODEL_LOADED(iParam0->f_99) && STREAMING::HAS_MODEL_LOADED(iParam0->f_100)) && STREAMING::HAS_ANIM_DICT_LOADED(func_134())) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("shack_hb1_backexit")) && ((func_41(iParam0->f_238, 1) && func_41(iParam0->f_238, 2)) || STREAMING::HAS_MODEL_LOADED(iParam0->f_101)))
		{
			return true;
		}
	}
	else if ((!iParam0->f_265 || STREAMING::HAS_MODEL_LOADED(iParam0->f_100)) && ((func_41(iParam0->f_238, 1) && func_41(iParam0->f_238, 2)) || STREAMING::HAS_MODEL_LOADED(iParam0->f_101)))
	{
		return true;
	}
	return false;
}

bool func_57(int iParam0)
{
	if (!iParam0->f_264)
	{
		if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_240))
		{
			iParam0->f_240 = ANIMSCENE::_CREATE_ANIM_SCENE(func_135(), 0, 0, false, true);
			return false;
		}
	}
	if (!iParam0->f_264 || iParam0->f_265)
	{
		if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_241))
		{
			iParam0->f_241 = ANIMSCENE::_CREATE_ANIM_SCENE(func_136(), 0, 0, false, true);
			return false;
		}
	}
	if (!iParam0->f_264)
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0->f_240, true, false) || !ANIMSCENE::_IS_ANIM_SCENE_LOADING(iParam0->f_240, true))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(iParam0->f_240);
		}
	}
	if (!iParam0->f_264 || iParam0->f_265)
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0->f_241, true, false) || !ANIMSCENE::_IS_ANIM_SCENE_LOADING(iParam0->f_241, true))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(iParam0->f_241);
		}
	}
	if (!func_137(&(iParam0->f_114), 0))
	{
		return false;
	}
	else if (!func_41(iParam0->f_237, 16384))
	{
		func_42(&(iParam0->f_237), 16384);
		func_138(iParam0->f_114, "HungryBear_REBlock", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
	}
	if (!func_137(&(iParam0->f_126), 3))
	{
		return false;
	}
	if (!func_137(&(iParam0->f_138), 4))
	{
		return false;
	}
	if (!func_137(&(iParam0->f_150), 5))
	{
		return false;
	}
	if (!func_137(&(iParam0->f_162), 6))
	{
		return false;
	}
	if (!func_137(&(iParam0->f_174), 7))
	{
		return false;
	}
	if (!func_137(&(iParam0->f_186), 8))
	{
		return false;
	}
	if (!func_137(&(iParam0->f_198), 9))
	{
		return false;
	}
	if (!func_137(&(iParam0->f_210), 1))
	{
		return false;
	}
	if (!func_137(&(iParam0->f_222), 2))
	{
		return false;
	}
	if (!func_41(iParam0->f_237, 32768))
	{
		if (func_139(&(iParam0->f_186), iParam0))
		{
			func_42(&(iParam0->f_237), 32768);
		}
		return false;
	}
	if (!iParam0->f_264)
	{
		if (!func_140(&(iParam0->f_102), iParam0->f_99, 0, 0))
		{
			return false;
		}
		if (!func_141(&(iParam0->f_102), &(iParam0->f_237), 64))
		{
			return false;
		}
	}
	if (!iParam0->f_264 || iParam0->f_265)
	{
		if (!func_140(&(iParam0->f_108), iParam0->f_100, 1, 0))
		{
			return false;
		}
		if (!func_142(&(iParam0->f_108), &(iParam0->f_237), 128))
		{
			return false;
		}
	}
	if (!func_41(iParam0->f_238, 1))
	{
		if (!func_143(&(iParam0->f_266), 1, &(iParam0->f_101)))
		{
			return false;
		}
	}
	if (!func_41(iParam0->f_238, 2))
	{
		if (!func_143(&(iParam0->f_272), 2, &(iParam0->f_101)))
		{
			return false;
		}
	}
	if (!func_41(iParam0->f_238, 1))
	{
		func_144(&(iParam0->f_266), 1);
	}
	if (!func_41(iParam0->f_238, 2))
	{
		func_144(&(iParam0->f_272), 2);
	}
	if (!func_41(iParam0->f_237, 65536))
	{
		if (!iParam0->f_264)
		{
			if (func_145(1610014965) && func_146(iParam0))
			{
				OBJECT::_0x7F458B543006C8FE(1610014965, 1);
				OBJECT::_0x7F458B543006C8FE(1610014965, 2);
				OBJECT::_0x7F458B543006C8FE(1610014965, 4);
				OBJECT::_0x7F458B543006C8FE(1610014965, 8);
				OBJECT::_0x7F458B543006C8FE(1610014965, 16);
				func_42(&(iParam0->f_237), 65536);
			}
			else
			{
				return false;
			}
		}
		else if (func_146(iParam0))
		{
			func_42(&(iParam0->f_237), 65536);
		}
		else
		{
			return false;
		}
	}
	if (!iParam0->f_264)
	{
		PED::_0xD355E2F1BB41087E(iParam0->f_102, 5f);
	}
	PED::_0xFD6943B6DF77E449(iParam0->f_108, false);
	PED::SET_PED_CAN_BE_TARGETTED(iParam0->f_108, false);
	return true;
}

bool func_58(int iParam0, int iParam1, bool bParam2, int iParam3)
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

struct<6> func_59(int iParam0)
{
	struct<6> Var0;

	switch (iParam0)
	{
		case 0:
			Var0.f_2 = { -2369.335f, 470.2792f, 132.1248f };
			Var0.f_5 = 13.39f;
			break;
		case 1:
			Var0.f_2 = { -2369.742f, 472.3454f, 131.2147f };
			Var0.f_5 = 52.8992f;
			break;
		default:
			break;
	}
	return Var0;
}

bool func_60(int iParam0)
{
	if (!iParam0->f_264 || iParam0->f_265)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_241) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0->f_241, true, false))
		{
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0->f_241, false))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0->f_108, false, true);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_241, "man", iParam0->f_108, 0);
				ANIMSCENE::START_ANIM_SCENE(iParam0->f_241);
				ANIMSCENE::SET_ANIM_SCENE_PAUSED(iParam0->f_241, true);
				if (!iParam0->f_264)
				{
					return false;
				}
				else
				{
					return true;
				}
			}
		}
	}
	else
	{
		return true;
	}
	if (!iParam0->f_264)
	{
		if ((ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0->f_240, true, false) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0->f_241, true, false)) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(iParam0->f_241))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_240, "bear_att", iParam0->f_102, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_240, "player_vic", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_240, "door", func_117(1610014965, 0), 0);
			return true;
		}
	}
	return false;
}

bool func_61(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_102))
	{
		if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0->f_102, Global_35, 1, 1) || FIRE::IS_ENTITY_ON_FIRE(iParam0->f_102)) || FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(ENTITY::GET_ENTITY_COORDS(iParam0->f_102, true, false), 9f) > 0)
		{
			return true;
		}
	}
	return false;
}

void func_62(var uParam0, int iParam1)
{
	if (!func_41(uParam0->f_3, 4) && !iParam1->f_264)
	{
		func_42(&(uParam0->f_3), 4);
		func_43(&(uParam0->f_5), &(uParam0->f_3));
		func_147(uParam0->f_1, &(iParam1->f_242));
	}
}

bool func_63(int iParam0)
{
	struct<6> Var0;

	Var0 = { func_148(0) };
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_108) && !func_41(iParam0->f_237, 8192))
	{
		GRAPHICS::_ADD_BLOOD_POOL(Var0.f_2, true);
		func_42(&(iParam0->f_237), 8192);
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_102))
	{
		if (!func_41(iParam0->f_237, 32))
		{
			func_42(&(iParam0->f_237), 32);
		}
		return false;
	}
	if (func_58(Global_35, iParam0->f_150, 1, 0) && !func_41(iParam0->f_237, 256))
	{
		AUDIO::PLAY_ANIMAL_VOCALIZATION(iParam0->f_102, "ROAR", false);
		func_42(&(iParam0->f_237), 256);
	}
	if (func_58(Global_35, iParam0->f_126, 1, 0))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 27, true);
		if (func_149(1610014965))
		{
			func_74();
			return false;
		}
	}
	else if (!func_149(1610014965))
	{
		func_150(1610014965, 1);
	}
	if (func_58(Global_35, iParam0->f_174, 1, 0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
	}
	if (func_58(Global_35, iParam0->f_126, 1, 0))
	{
		iParam0->f_262 = 1;
		if (iParam0->f_262)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
			func_151();
			if (!func_41(iParam0->f_237, 4096) && !func_41(iParam0->f_237, 2048))
			{
				if (!func_149(1610014965) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_240))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0->f_240, false))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_240, "bear_att", iParam0->f_102, 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_240, "player_vic", Global_35, 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_240, "door", func_117(1610014965, 0), 0);
						ANIMSCENE::START_ANIM_SCENE(iParam0->f_240);
					}
					else
					{
						PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
						func_42(&(iParam0->f_237), 2048);
						return true;
					}
				}
			}
		}
	}
	else
	{
		iParam0->f_262 = 0;
	}
	return false;
}

bool func_64(int iParam0)
{
	if (func_41(iParam0->f_237, 4096))
	{
		return true;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iParam0->f_240, false))
	{
		if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0->f_240) >= 0.95f)
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				return true;
			}
		}
	}
	else
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_102))
	{
		if (!func_41(iParam0->f_237, 32))
		{
			func_42(&(iParam0->f_237), 32);
		}
		return false;
	}
	return false;
}

bool func_65(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_102))
	{
		if (!func_41(iParam0->f_237, 32))
		{
			func_42(&(iParam0->f_237), 32);
		}
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_102))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return false;
	}
	if (!func_41(iParam0->f_237, 4096))
	{
		if (!func_78(iParam0->f_102, joaat("SCRIPT_TASK_GRAPPLE")))
		{
			TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(iParam0->f_102, Global_35, joaat("AR_BEAR_CHALLENGE_FRONT_SHORT"), 0f, 0.2f, 1, 0);
			func_71(&(iParam0->f_261), 1);
			return true;
		}
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_162, true, 0))
	{
		func_71(&(iParam0->f_261), 1);
		return true;
	}
	return false;
}

bool func_66(int iParam0)
{
	func_152(iParam0);
	if (!func_41(iParam0->f_237, 4096))
	{
		if (PED::_0x3BDFCF25B58B0415(Global_35))
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
			}
		}
		if (!func_153(&(iParam0->f_234)))
		{
			func_154(&(iParam0->f_234), 0f);
		}
		if (func_155(&(iParam0->f_234)) > 5f)
		{
			func_156(iParam0->f_102, 0, 0);
		}
	}
	else if ((!PED::IS_PED_IN_COMBAT(iParam0->f_102, 0) && !func_78(iParam0->f_102, joaat("SCRIPT_TASK_GRAPPLE"))) && !func_78(iParam0->f_102, 780511057))
	{
		TASK::TASK_COMBAT_PED(iParam0->f_102, Global_35, 0, 0);
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_102))
	{
		if (!func_41(iParam0->f_237, 32))
		{
			func_42(&(iParam0->f_237), 32);
		}
		return true;
	}
	if (!func_157(Global_35, iParam0->f_102, 20f, 1))
	{
		return true;
	}
	return false;
}

bool func_67(int iParam0)
{
	if (!func_41(iParam0->f_237, 4096))
	{
		if (!func_153(&(iParam0->f_234)))
		{
			func_154(&(iParam0->f_234), 0f);
		}
		if (func_155(&(iParam0->f_234)) > 1f)
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
			}
		}
		if (func_155(&(iParam0->f_234)) > 5f)
		{
			func_156(iParam0->f_102, 0, 0);
		}
	}
	else
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_102) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(iParam0->f_102, Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
			return true;
		}
		if (((!ENTITY::IS_ENTITY_DEAD(iParam0->f_102) && !PED::IS_PED_IN_COMBAT(iParam0->f_102, 0)) && !func_78(iParam0->f_102, joaat("SCRIPT_TASK_GRAPPLE"))) && !func_78(iParam0->f_102, 780511057))
		{
			TASK::TASK_COMBAT_PED(iParam0->f_102, Global_35, 0, 0);
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_102))
	{
		return true;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_162, true, 0))
	{
		return true;
	}
	return false;
}

bool func_68(int iParam0)
{
	if (!func_41(iParam0->f_237, 4096))
	{
		if (!func_153(&(iParam0->f_234)))
		{
			func_154(&(iParam0->f_234), 0f);
		}
		if (func_155(&(iParam0->f_234)) > 5f)
		{
			func_156(iParam0->f_102, 0, 0);
		}
	}
	else if ((!PED::IS_PED_IN_COMBAT(iParam0->f_102, 0) && !func_78(iParam0->f_102, joaat("SCRIPT_TASK_GRAPPLE"))) && !func_78(iParam0->f_102, 780511057))
	{
		TASK::TASK_COMBAT_PED(iParam0->f_102, Global_35, 0, 0);
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_102))
	{
		if (!func_41(iParam0->f_237, 32))
		{
			func_42(&(iParam0->f_237), 32);
		}
		return false;
	}
	if (func_78(iParam0->f_102, 1435919172))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0->f_102, false, true);
		return true;
	}
	return false;
}

bool func_69(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_102))
	{
		return false;
	}
	if (PED::_0x09D7AFD3716DA8E1(iParam0->f_102, 250))
	{
		return true;
	}
	if (func_158(iParam0->f_102, 1090519040 /* Float: 8f */, 1103626240 /* Float: 25f */, 100f, 0) && func_159(&Global_35))
	{
		return true;
	}
	return false;
}

bool func_70(int iParam0)
{
	if (func_58(Global_35, iParam0->f_138, 1, 0) && !func_58(Global_35, iParam0->f_186, 1, 0))
	{
		return true;
	}
	return false;
}

void func_71(var uParam0, bool bParam1)
{
	if (*uParam0 > -1 && *uParam0 < 4)
	{
		if (Global_1955500[*uParam0 /*16*/].f_3 == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			if (func_160(1, 1) == *uParam0)
			{
				func_161(-1, 1, 1);
			}
			if (bParam1)
			{
				func_162(Global_1955500[*uParam0 /*16*/].f_1);
			}
			Global_1955500[*uParam0 /*16*/] = 0;
			Global_1955500[*uParam0 /*16*/].f_2 = 0;
			Global_1955500[*uParam0 /*16*/].f_3 = 0;
			*uParam0 = -1;
		}
	}
}

bool func_72(int iParam0)
{
	struct<6> Var0;

	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iParam0->f_102, "shack_hb1_backexit"))
	{
		return true;
	}
	else
	{
		Var0 = { func_59(0) };
		Var0.f_5 = 190.9057f;
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0->f_102, false, true);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0->f_102, iParam0->f_252, Var0.f_5, true, false, true);
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iParam0->f_102, "shack_hb1_backexit", 0, 0, -1, 0, 0, -1);
	}
	return false;
}

void func_73(int iParam0)
{
	struct<23> Var0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_102))
	{
		return;
	}
	if (Global_1935630.f_12)
	{
		return;
	}
	Var0.f_4 = -1;
	Var0.f_8 = 2;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 2;
	Var0.f_15 = 2;
	Var0.f_16 = 3;
	Var0.f_19 = 3;
	Var0.f_20 = 1;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	Var0.f_3 = Global_35;
	Var0 = { 0f, 0f, 0f };
	Var0.f_4 = 21030;
	Var0.f_8 = 4;
	Var0.f_19 = 4;
	Var0.f_20 = 4;
	Var0.f_21 = 4;
	Var0.f_22 = 4;
	Var0.f_13 = 3;
	Var0.f_7 = 0;
	_NAMESPACE29::_0x66F9EB44342BB4C5(iParam0->f_102, &Var0);
}

void func_74()
{
	if (func_149(1610014965))
	{
		OBJECT::_0x0C0A373D181BF900(1610014965);
		func_163(1610014965, 1);
	}
}

void func_75(int iParam0, float fParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iParam0, 0))
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam0, fParam1, 0, -1082130432 /* Float: -1f */, 0);
		}
	}
}

void func_76(int iParam0)
{
	POPULATION::_0xB56D41A694E42E86(iParam0->f_186, 0, 2230271, 0, -1, -1, 2);
}

void func_77(int iParam0)
{
	int iVar0;

	func_152(iParam0);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
	func_164(iParam0->f_102, &iVar0, 0, 0, 1, 1);
}

bool func_78(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return true;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 0)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_79(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_80(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return false;
		}
		iVar0 = Global_12106[iParam0 /*7*/].f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return false;
		}
		iVar0 = func_165(iParam0);
	}
	if (iVar0 == 1)
	{
		return true;
	}
	if (iVar0 == 2)
	{
		return true;
	}
	return false;
}

bool func_81(int iParam0)
{
	int iVar0;

	iVar0 = func_166(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_82(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_79(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_81(iParam0) && !func_80(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_167(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_81(iParam0))
	{
		iParam2 = -1;
	}
	if (func_165(iParam0) == 3 || (func_165(iParam0) == 1 && STATS::_0x01F4D242765C6B24(func_167(iParam0))))
	{
		func_169(func_168(iParam0), func_167(iParam0), iParam2);
		if ((!func_79(Global_1572864.f_8) && !func_100(0, 1, 0)) && !func_31(Global_1935630, 32768))
		{
			iVar0 = func_170(iParam0);
			if (iVar0 != -1)
			{
				func_171(0);
			}
			else if (func_168(iParam0) == 8)
			{
				iVar0 = func_172();
				if (iVar0 != -1)
				{
					func_171(0);
				}
			}
		}
	}
	func_173(iParam0, 0);
	if (func_174(0) == iParam0)
	{
		func_175(1);
		func_176(0);
		func_177(1);
	}
	func_178(iParam0, 1);
	func_179(iParam0);
}

void func_83(var uParam0)
{
	func_180(uParam0, &Local_73);
}

void func_84(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_41[iVar0]))
		{
			TASK::_DELETE_SCENARIO_POINT(uParam0->f_41[iVar0]);
		}
		iVar0++;
	}
}

void func_85(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		func_181(&(uParam0->f_29[iVar0]), bParam1, iVar0);
		iVar0++;
	}
}

void func_86(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		func_182(&(uParam0->f_13[iVar0]), bParam1, iVar0);
		iVar0++;
	}
}

void func_87(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_105(uParam0, iVar0, 0)))
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_36[iVar0]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_36[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_88(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_46))
	{
		func_183(&(uParam0->f_45), uParam0->f_46, 0);
		VOLUME::_DELETE_VOLUME(uParam0->f_46);
	}
	func_184(uParam0);
}

void func_89(var uParam0)
{
	func_185(uParam0);
	func_186(uParam0);
}

Vector3 func_90(var uParam0)
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

bool func_91(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

Vector3 func_92(var uParam0)
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

Vector3 func_93(var uParam0)
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

void func_94(var uParam0)
{
}

bool func_95(var uParam0)
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
			return true;
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
	return false;
}

bool func_96(var uParam0, int iParam1)
{
	if (!func_187(uParam0, iParam1) == 0 && !TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_41[iParam1]))
	{
		uParam0->f_41[iParam1] = TASK::CREATE_SCENARIO_POINT(func_187(uParam0, iParam1), func_188(uParam0, iParam1), func_189(uParam0, iParam1), func_190(uParam0, iParam1), 0, 0);
	}
	return true;
}

bool func_97(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_191(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40567[iVar1], iVar2);
}

int func_98(int iParam0)
{
	if (!func_79(iParam0))
	{
		return -1;
	}
	return func_192(iParam0);
}

bool func_99(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_100(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (Global_1572887.f_12 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1898164.f_163;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1898164.f_164;
		}
		if (func_193())
		{
			return true;
		}
		if (Global_1058888.f_3 && !Global_1572887.f_8)
		{
			if (Global_1055058[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*116*/].f_114 && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return true;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1898164.f_163;
		}
		else
		{
			return Global_1898164.f_164;
		}
	}
	if (Global_1898164.f_1[0 /*5*/].f_2 == 8)
	{
		iVar0 = func_194(Global_1898164.f_1[0 /*5*/]);
		if (func_195(iVar0) && func_196(Global_1347702[iVar0 /*49*/].f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_79(Global_1898164.f_1[0 /*5*/]))
	{
		return true;
	}
	if ((Global_1935630 && 40959 & (-1 - iParam0)) != 0)
	{
		return true;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < Global_1898438)
		{
			return true;
		}
	}
	switch (Global_1898164.f_1[0 /*5*/].f_2)
	{
		case 0:
			return false;
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
	return false;
}

int func_101(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_197(bParam1, bParam2, bParam3);
	}
	if (Global_1572887.f_12 != -1)
	{
		if (iParam0 == Global_1225639.f_10)
		{
			if (!Global_1225639.f_11)
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

bool func_102()
{
	return Global_1310750.f_16077 != 0;
}

bool func_103(int iParam0)
{
	return Global_1310750[iParam0 /*111*/].f_48;
}

bool func_104(var uParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar1 = func_55();
	if (func_54(uParam0->f_1, &fVar0))
	{
		if (fVar0 > 0f)
		{
			fVar2 = (fVar1 - fVar0);
			if (fVar2 >= fParam1)
			{
				return false;
			}
		}
	}
	return true;
}

char* func_105(var uParam0, int iParam1, int iParam2)
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
							if ((!func_99(func_98(uParam0->f_5), 4) && !func_99(func_98(uParam0->f_5), 2)) && !func_99(func_98(uParam0->f_5), 8))
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
							if (!func_99(func_98(uParam0->f_5), 4))
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
			if (!func_41(uParam0->f_3, 4) || func_104(uParam0, 1126694912 /* Float: 168f */))
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
			if (func_104(uParam0, 1126694912 /* Float: 168f */))
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

bool func_106(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 32768)
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			return true;
		}
	}
	else if (uParam0->f_1 == 8192)
	{
		if (iParam1 == 1)
		{
			return true;
		}
	}
	else if (((((((uParam0->f_1 == 131072 || uParam0->f_1 == 16) || uParam0->f_1 == 64) || uParam0->f_1 == 4096) || uParam0->f_1 == 256) || uParam0->f_1 == 512) || uParam0->f_1 == 32) || uParam0->f_1 == 16384)
	{
		return true;
	}
	return false;
}

bool func_107(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (!uParam0->f_22[iVar0] == 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_22[iVar0]))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_108(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (!uParam0->f_6[iVar0] == 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_6[iVar0]))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_109(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 32768)
	{
		if (!func_41(uParam0->f_3, 4))
		{
			if (iParam1 == 1 || iParam1 == 2)
			{
				return true;
			}
		}
		else if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			return true;
		}
	}
	else if (uParam0->f_1 == 8192)
	{
		if ((iParam1 == 1 || iParam1 == 2) || iParam1 == 3)
		{
			return true;
		}
	}
	else if (uParam0->f_1 == 256)
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			return true;
		}
	}
	else if (uParam0->f_1 == 4096)
	{
		if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			return true;
		}
	}
	else if (((((uParam0->f_1 == 131072 || uParam0->f_1 == 16) || uParam0->f_1 == 64) || uParam0->f_1 == 512) || uParam0->f_1 == 32) || uParam0->f_1 == 16384)
	{
		return true;
	}
	return false;
}

int func_110(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_198(iVar0, iParam0, bParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_111(int iParam0, int iParam1)
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

bool func_112(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (iVar0 == iParam1)
	{
		return true;
	}
	return false;
}

bool func_113(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (!func_111(iParam0, iVar0))
	{
		return true;
	}
	if (iVar0 != iParam1)
	{
		return false;
	}
	iVar1 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	return PED::_0x610438375E5D1801(iVar1);
}

void func_114(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

void func_115(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_116(int iParam0, var uParam1)
{
	if (!func_79(iParam0))
	{
		return;
	}
	func_199(iParam0, uParam1);
}

int func_117(int iParam0, int iParam1)
{
	int iVar0;

	func_51(iParam0, 0, 0);
	if (func_145(iParam0))
	{
		iVar0 = ENTITY::_0xF7424890E4A094C0(iParam0, iParam1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return iVar0;
		}
	}
	return 0;
}

int func_118(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_200();
	if (iVar0 == -1)
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		return -1;
	}
	if ((iVar0 > -1 && iVar0 < 4) && VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		Global_1955500[iVar0 /*16*/].f_1 = iParam1;
		Global_1955500[iVar0 /*16*/].f_2 = iParam0;
		Global_1955500[iVar0 /*16*/] = 0;
		Global_1955500[iVar0 /*16*/].f_3 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (func_201(iParam2, 128))
		{
			PED::_0x7C00CFC48A782DC0(iParam1, iParam0, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		}
		if (func_41(Global_1955500[iVar0 /*16*/], 0))
		{
			func_202(iVar0, 1024);
			func_202(iVar0, 16);
			func_202(iVar0, 256);
		}
		func_202(iVar0, iParam2);
	}
	return iVar0;
}

struct<2> func_119(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_120(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

bool func_121(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (bParam6)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return true;
		}
	}
	else if (func_203(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

bool func_122()
{
	int iVar0;

	iVar0 = TASK::_0xD04241BBF6D03A5E(Global_35);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar0))
	{
		return true;
	}
	return false;
}

bool func_123(int iParam0)
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
						return true;
					}
				}
			}
			iVar10++;
		}
	}
	return false;
}

void func_124(var uParam0, int iParam1, int iParam2)
{
	func_42(&(iParam1->f_238), iParam2);
	func_204(uParam0, iParam1);
}

int func_125(var uParam0, var uParam1)
{
	if (func_79(*uParam0))
	{
		*uParam1 = func_98(*uParam0);
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_126(int iParam0)
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

float func_127(int iParam0)
{
	int iVar0;

	iVar0 = func_126(iParam0);
	if (iVar0 == 0)
	{
		return 0f;
	}
	return Global_40.f_11959[iVar0];
}

int func_128()
{
	return Global_1899515;
}

int func_129(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_205(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_130(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_131(int iParam0, int iParam1)
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
			iVar2 = (iVar2 + func_206(iVar1, iParam1));
			iVar0++;
		}
	}
	return iVar2;
}

int func_132(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_133(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

char* func_134()
{
	return "creatures_mammal@bear@grapple@streamed_core";
}

char* func_135()
{
	return "script@ambient@animal@hungry_bear_shack@intro";
}

char* func_136()
{
	return "script@beat@wilderness@hungrybearshack@hungry_bear_shack";
}

bool func_137(var uParam0, int iParam1)
{
	struct<12> Var0;

	if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		Var0 = { func_207(iParam1) };
		*uParam0 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0.f_1, Var0.f_2, Var0.f_5, Var0.f_8, Var0.f_11);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		return true;
	}
	return false;
}

int func_138(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;

	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return 0;
	}
	vVar0 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
	vVar3 = { VOLUME::_GET_VOLUME_SCALE(iParam0) };
	iVar6 = func_208(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

bool func_139(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		return true;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar3 = ENTITY::_0x886171A12F400B89(*uParam0, iVar0, 1);
	if (iVar3 > 0)
	{
		iVar4 = 0;
		while (iVar4 < iVar3)
		{
			iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar0);
			iVar2 = MISC::_GET_PED_FROM_INDEXED_ITEM(iVar1);
			if (PED::IS_PED_MODEL(iVar2, iParam1->f_100) || (PED::IS_PED_MODEL(iVar2, iParam1->f_99) && !ENTITY::IS_ENTITY_DEAD(iVar2)))
			{
				PED::DELETE_PED(&iVar2);
			}
			iVar4++;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return true;
}

bool func_140(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<6> Var0;

	Var0 = { func_59(iParam2) };
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		*uParam0 = func_110(iParam1, Var0.f_2, Var0.f_5, 1, 1, bParam3, 1, 1, 1, 0, 0, 0, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	return true;
}

bool func_141(var uParam0, var uParam1, int iParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0) && !func_41(*uParam1, iParam2))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, joaat("REL_WILD_ANIMAL_PREDATOR"));
		PED::SET_PED_CONFIG_FLAG(*uParam0, 6, true);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 529, true);
		TASK::TASK_STAND_STILL(*uParam0, -1);
		func_42(uParam1, iParam2);
	}
	if (func_41(*uParam1, iParam2))
	{
		return true;
	}
	return false;
}

bool func_142(var uParam0, var uParam1, int iParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0) && !func_41(*uParam1, iParam2))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, true, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, joaat("REL_CIVMALE"));
		PED::SET_PED_CONFIG_FLAG(*uParam0, 6, true);
		func_209(uParam0, 0);
		func_210(uParam0, 0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 26, true);
		PED::_0xAE6004120C18DF97(*uParam0, 1, 0);
		PED::_0x6569F31A01B4C097(*uParam0, 4, 0);
		ENTITY::_0x18FF3110CF47115D(*uParam0, 10, 0);
		WEAPON::REMOVE_ALL_PED_WEAPONS(*uParam0, true, true);
		TASK::TASK_STAND_STILL(*uParam0, -1);
		func_42(uParam1, iParam2);
	}
	if (func_41(*uParam1, iParam2))
	{
		return true;
	}
	return false;
}

bool func_143(var uParam0, int iParam1, var uParam2)
{
	struct<6> Var0;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		Var0 = { func_148(iParam1) };
		*uParam0 = OBJECT::CREATE_OBJECT(*uParam2, Var0.f_2, true, true, false, false, true);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(*uParam0, Var0.f_2, Var0.f_5, true, false, true);
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return true;
	}
	return false;
}

void func_144(var uParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return;
	}
	if (iParam1 == 1 || iParam1 == 2)
	{
		TASK::_0x78B4567E18B54480(*uParam0);
	}
}

bool func_145(int iParam0)
{
	if (func_211(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return false;
}

bool func_146(int iParam0)
{
	if (!INTERIOR::IS_VALID_INTERIOR(iParam0->f_250))
	{
		iParam0->f_250 = INTERIOR::GET_INTERIOR_AT_COORDS(iParam0->f_258);
	}
	if ((INTERIOR::IS_VALID_INTERIOR(iParam0->f_250) && INTERIOR::_IS_INTERIOR_ENTITY_SET_VALID(iParam0->f_250, iParam0->f_249)) && !INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iParam0->f_250, iParam0->f_249))
	{
		INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iParam0->f_250, iParam0->f_249, 0);
	}
	if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iParam0->f_250, iParam0->f_249))
	{
		return true;
	}
	return false;
}

int func_147(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_126(iParam0);
	if (iVar0 != 0)
	{
		*uParam1 = func_55();
		func_212(iParam0, *uParam1);
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

struct<6> func_148(int iParam0)
{
	struct<6> Var0;

	switch (iParam0)
	{
		case 0:
			Var0.f_2 = { -2370.42f, 472.7022f, 131.2184f };
			Var0.f_5 = 52.8992f;
			break;
		case 1:
			Var0.f_2 = { -2368.544f, 474.3839f, 131.832f };
			Var0.f_5 = 87f;
			break;
		case 2:
			Var0.f_2 = { -2368.586f, 474.3005f, 131.8526f };
			Var0.f_5 = 47f;
			break;
		default:
			break;
	}
	return Var0;
}

bool func_149(int iParam0)
{
	func_51(iParam0, 0, 0);
	if (func_145(iParam0))
	{
		return OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 1;
	}
	return false;
}

void func_150(int iParam0, int iParam1)
{
	func_213(iParam0, 1, 0, 0, 0, 0, 0, 0);
}

void func_151()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
}

void func_152(int iParam0)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_102) && !MAP::DOES_BLIP_EXIST(iParam0->f_251))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_102, false);
		iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0->f_102);
		if (MAP::DOES_BLIP_EXIST(iVar0))
		{
			MAP::REMOVE_BLIP(&iVar0);
		}
		iParam0->f_251 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iParam0->f_102);
		func_214(iParam0->f_102, 942020339, 1);
	}
}

bool func_153(var uParam0)
{
	return func_215(*uParam0, 1);
}

void func_154(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_216() - fParam1);
	func_217(uParam0, 1);
	func_218(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_155(var uParam0)
{
	if (!func_153(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_219(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_216() - uParam0->f_1);
}

void func_156(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(iParam0, true);
		}
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 243, true);
		}
		if (Global_35 == iParam0)
		{
		}
		ENTITY::_SET_ENTITY_HEALTH(iParam0, 0, 0);
	}
}

bool func_157(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

bool func_158(int iParam0, float fParam1, float fParam2, float fParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;
	float fVar14;

	if (!Global_1935630.f_27 && !bParam4)
	{
		return false;
	}
	if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_AIM")))
	{
		fVar0 = func_220(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
		if (fVar0 < fParam3 && fVar0 > 0.5f)
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0, false))
			{
				if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar1, 0, 0))
				{
					iVar2 = iParam0;
					if (iVar1 == iVar2)
					{
						return false;
					}
				}
				iVar3 = func_221(PLAYER::PLAYER_PED_ID(), 0);
				if (func_222(iVar3) && !PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_ATTACK")))
				{
					return false;
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false) && PED::WAS_PED_SKELETON_UPDATED(iParam0))
				{
					vVar4 = { PED::GET_PED_BONE_COORDS(iParam0, 21030, 0f, 0f, 0f) };
				}
				else
				{
					vVar4 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
				}
				vVar7 = { func_223(0) };
				vVar10 = { func_224(vVar4 - CAM::GET_GAMEPLAY_CAM_COORD()) };
				fVar13 = MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar10.x, vVar10.y, vVar7.x, vVar7.y));
				fVar14 = MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar10.y, vVar10.z, vVar7.y, vVar7.z));
				if (fVar13 < fParam1)
				{
					if (fVar14 < fParam2)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_159(var uParam0)
{
	if (!func_225(*uParam0, 0))
	{
		return false;
	}
	return PED::IS_PED_SHOOTING(*uParam0);
}

int func_160(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_226();
	if (bParam1 && ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return -1;
	}
	return Global_1955499;
}

void func_161(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_226();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		iVar1 = 0;
		iVar2 = iParam0;
		if (iParam0 == -1)
		{
			iVar2 = func_160(iParam1, bParam2);
			if (iVar2 != -1)
			{
				iVar1 = Global_1955500[iVar2 /*16*/].f_2;
				if (func_227(iVar2, 512))
				{
					PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), 0);
				}
			}
		}
		TASK::TASK_CLEAR_LOOK_AT(iVar0);
		PED::_0xAAC0EE3B4999ABB5(iVar0, 0);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), true);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					TASK::TASK_CLEAR_LOOK_AT(iVar3);
				}
			}
		}
		Global_1955499 = -1;
	}
}

void func_162(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

void func_163(int iParam0, int iParam1)
{
	func_213(iParam0, 0, 0, 0, 1, 0, 0, 0);
}

void func_164(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

int func_165(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_228(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40501.f_1[iVar0 /*2*/].f_1;
}

int func_166(int iParam0)
{
	if (!func_79(iParam0))
	{
		return -1;
	}
	return func_165(iParam0);
}

int func_167(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_5;
	}
	return Global_1058888.f_498[iParam0 /*2*/].f_1;
}

int func_168(int iParam0)
{
	if (!func_79(iParam0))
	{
		return 0;
	}
	return func_230(func_229(iParam0));
}

void func_169(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_231() == 0)
	{
		vVar0.x = Global_265238.f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

int func_170(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (func_168(iParam0))
	{
		case 1:
			iVar0 = func_194(iParam0);
			return func_232(iVar0);
		case 8:
			iVar1 = func_194(iParam0);
			if (func_196(Global_1347702[iVar1 /*49*/].f_12, 1))
			{
				return func_233(iVar1);
			}
			break;
	}
	return -1;
}

void func_171(bool bParam0)
{
	int iVar0;

	if (Global_1898077.f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_231() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077.f_2 == 4 && Global_1898077.f_12 != Global_1898077.f_13) && !bParam0)
	{
		Global_1898077.f_1 = Global_1898077.f_2;
		Global_1898077.f_12 = Global_1898077.f_13;
		func_234(iVar0, Global_1898077.f_12);
	}
	else
	{
		Global_1898077.f_1 = 0;
		Global_1898077.f_7 = iVar0;
		Global_1898077.f_8 = func_235();
		Global_1898077.f_9 = func_236(Global_1894899.f_2);
		func_237(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
	}
	Global_1898077.f_2 = 0;
}

int func_172()
{
	if (!func_238(Global_1835011[4 /*74*/].f_1, 1))
	{
		return 0;
	}
	else if (!func_238(Global_1347702[66 /*49*/].f_15, 1))
	{
		return 1;
	}
	else if (!func_238(Global_1347702[67 /*49*/].f_15, 1))
	{
		return 2;
	}
	else if (!func_238(Global_1835011[38 /*74*/].f_1, 1))
	{
		return 3;
	}
	else if (!func_238(Global_1347702[68 /*49*/].f_15, 1))
	{
		return 4;
	}
	else if (!func_238(Global_1835011[59 /*74*/].f_1, 1))
	{
		return 5;
	}
	else if (!func_238(Global_1835011[67 /*74*/].f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_173(int iParam0, int iParam1)
{
	if (!func_79(iParam0))
	{
		return;
	}
	func_239(iParam0, iParam1);
}

int func_174(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

void func_175(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_240(&Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_241(&Global_1935630, 4194304);
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

int func_176(bool bParam0)
{
	if (!bParam0 && func_97(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

void func_177(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_178(int iParam0, bool bParam1)
{
	if (func_231() != -1)
	{
		return;
	}
	if (func_174(0) != iParam0)
	{
		return;
	}
	if (func_242(iParam0))
	{
		if (bParam1)
		{
			func_243(-525676072);
		}
		else
		{
			func_244(-525676072);
		}
	}
}

int func_179(int iParam0)
{
	return func_246(func_245(iParam0));
}

void func_180(var uParam0, var uParam1)
{
	if (func_79(uParam0->f_5) && (func_80(uParam0->f_5) || func_81(uParam0->f_5)))
	{
		func_82(uParam0->f_5, 0, 2);
	}
	if (func_31(Global_1935630, 128))
	{
		func_240(&Global_1935630, 128);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam1->f_114))
	{
		func_247(uParam1->f_114);
		VOLUME::_DELETE_VOLUME(uParam1->f_114);
	}
	if (!uParam1->f_264)
	{
		if (!func_41(uParam0->f_3, 4))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_102))
			{
				PED::DELETE_PED(&(uParam1->f_102));
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_102))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam1->f_102));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_266))
	{
		OBJECT::DELETE_OBJECT(&(uParam1->f_266));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_272))
	{
		OBJECT::DELETE_OBJECT(&(uParam1->f_272));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_108))
	{
		PED::DELETE_PED(&(uParam1->f_108));
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam1->f_126))
	{
		VOLUME::_DELETE_VOLUME(uParam1->f_126);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam1->f_138))
	{
		VOLUME::_DELETE_VOLUME(uParam1->f_138);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam1->f_150))
	{
		VOLUME::_DELETE_VOLUME(uParam1->f_150);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam1->f_162))
	{
		VOLUME::_DELETE_VOLUME(uParam1->f_162);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam1->f_174))
	{
		VOLUME::_DELETE_VOLUME(uParam1->f_174);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam1->f_186))
	{
		VOLUME::_DELETE_VOLUME(uParam1->f_186);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam1->f_198))
	{
		VOLUME::_DELETE_VOLUME(uParam1->f_198);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam1->f_210))
	{
		VOLUME::_DELETE_VOLUME(uParam1->f_198);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam1->f_222))
	{
		VOLUME::_DELETE_VOLUME(uParam1->f_198);
	}
	if ((INTERIOR::IS_VALID_INTERIOR(uParam1->f_250) && INTERIOR::_IS_INTERIOR_ENTITY_SET_VALID(uParam1->f_250, uParam1->f_249)) && INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(uParam1->f_250, uParam1->f_249))
	{
		INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(uParam1->f_250, uParam1->f_249, true);
	}
	TASK::REMOVE_WAYPOINT_RECORDING("shack_hb1_backexit");
}

void func_181(int* iParam0, bool bParam1, int iParam2)
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

void func_182(int* iParam0, bool bParam1, int iParam2)
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

void func_183(var uParam0, int iParam1, bool bParam2)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	PED::CLEAR_PED_NON_CREATION_AREA();
	POPULATION::_0xA1CFB35069D23C23(iParam1);
	POPULATION::_0x74C2B3DC0B294102(iParam1);
	if (PED::_0x91A5F9CBEBB9D936(*uParam0))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam0, bParam2);
	}
}

void func_184(var uParam0)
{
}

void func_185(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (!uParam0->f_6[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_6[iVar0]);
		}
		iVar0++;
	}
}

void func_186(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		if (!uParam0->f_22[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_22[iVar0]);
		}
		iVar0++;
	}
}

int func_187(var uParam0, int iParam1)
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
					return joaat("WORLD_PLAYER_INSPECT_LETTER_80CM_PAPER_W15_1_H24_FOLDVERTICAL_P_CS_LETTER03X");
				}
			}
			break;
		case 262144:
			if (!func_41(uParam0->f_3, 4))
			{
				switch (iParam1)
				{
					case 0:
						return joaat("PROP_PLAYER_STR_GEN_BSMT_LOOT");
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

Vector3 func_188(var uParam0, int iParam1)
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

float func_189(var uParam0, int iParam1)
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

float func_190(var uParam0, int iParam1)
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

int func_191(int iParam0, int iParam1)
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
		case joaat("WS_MP_FETCH_OTH_TALL_TREES"):
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
		case joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
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
		case joaat("WS_MP_HIDEOUT_CUMBERLAND_FALLS"):
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
		case joaat("WS_MP_HIDEOUT_SEA_OF_CORONADO"):
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
		case joaat("WS_MP_HIDEOUT_ROCKY_SEVEN"):
			return 331;
		case -1329135070:
			return 140;
		case -1318987693:
			return 222;
		case -1311865656:
			return 37;
		case joaat("WS_MP_HIDEOUT_QUAKERS_COVE"):
			return 320;
		case joaat("WS_MP_HIDEOUT_THE_LOFT"):
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
		case joaat("WS_MP_HIDEOUT_RATTLESNAKE_HOLLOW"):
			return 336;
		case joaat("WS_MP_HIDEOUT_CUERA_SECO"):
			return 334;
		case joaat("WS_MP_FETCH_OTH_SHEPHERDS_RISE"):
			return 356;
		case -879507474:
			return 236;
		case -868076593:
			return 84;
		case -857964358:
			return 83;
		case -853383233:
			return 65;
		case joaat("WS_MP_HIDEOUT_CHOLLA_SPRINGS"):
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
		case joaat("WS_MP_INTRO_HIDEOUT_RHODES"):
			return 345;
		case -764163380:
			return 228;
		case -748969569:
			return 78;
		case -741351766:
			return 60;
		case -736853952:
			return 366;
		case joaat("WS_MP_HIDEOUT_OLD_BACCHUS_PLACE"):
			return 340;
		case -699277634:
			return 4;
		case joaat("WS_MP_HIDEOUT_FORT_RIGGS"):
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
		case joaat("WS_MP_CAMP_DEFEND_GREAT_PLAINS_CIRCLE"):
			return 352;
		case -524145696:
			return 117;
		case -523522517:
			return 364;
		case -515561750:
			return 238;
		case -503955743:
			return 249;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_BLACKWATER"):
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
		case joaat("WS_MP_HIDEOUT_REPENTANCE"):
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
		case joaat("WS_MP_HIDEOUT_FARMHOUSE"):
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
		case joaat("WS_MP_HIDEOUT_COLTER"):
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
		case joaat("WS_MP_INTRO_HIDEOUT_TUMBLEWEED"):
			return 348;
		case joaat("WS_MP_FETCH_OTH_CASTORS"):
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
		case joaat("WS_MP_INTRO_JESSICA_CAMP_TUMBLEWEED"):
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
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_CIRCLE"):
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
		case joaat("WS_MP_HIDEOUT_ABANDONED_MINING_STATION"):
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
		case joaat("WS_MP_CAMP_DEFEND_TWO_ROCKS"):
			return 354;
		case 753127042:
			return 48;
		case 757752139:
			return 109;
		case joaat("WS_MP_HIDEOUT_SHIP_ROCK"):
			return 330;
		case 791041526:
			return 18;
		case 817925178:
			return 240;
		case 868326136:
			return 285;
		case 885203519:
			return 379;
		case joaat("WS_MP_CAMP_DEFEND_GRIZZLIES_CIRCLE"):
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
		case joaat("WS_MP_HIDEOUT_TALL_TREES"):
			return 329;
		case 1160698568:
			return 135;
		case 1164928979:
			return 158;
		case joaat("WS_MP_INTRO_HIDEOUT_BLACKWATER"):
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
		case joaat("WS_MP_HIDEOUT_LAKAY"):
			return 313;
		case 1250636944:
			return 259;
		case joaat("WS_MP_HIDEOUT_BEAVER_HOLLOW"):
			return 315;
		case 1306158345:
			return 202;
		case joaat("WS_MP_HIDEOUT_STILLWATER_STRANDS"):
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
		case joaat("WS_MP_INTRO_JESSICA_CAMP_VALENTINE"):
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
		case joaat("WS_MP_HIDEOUT_SOLOMONS_FOLLY"):
			return 332;
		case 1703426636:
			return 43;
		case joaat("WS_MP_INTRO_HIDEOUT_VALENTINE"):
			return 346;
		case 1713221411:
			return 137;
		case 1743048395:
			return 226;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_HILLTOP"):
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
		case joaat("WS_MP_HIDEOUT_CLEMENS_COVE"):
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
		case joaat("WS_MP_INTRO_JESSICA_CAMP_RHODES"):
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

int func_192(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_4;
	}
	return 0;
}

bool func_193()
{
	if (Global_1048576)
	{
		return true;
	}
	if (Global_1572887.f_4)
	{
		return true;
	}
	if (Global_524298)
	{
		return true;
	}
	if (Global_1048577)
	{
		return true;
	}
	if (Global_1051043 == -1 && Global_1572887.f_6 & 1 != 0)
	{
		return true;
	}
	return false;
}

int func_194(int iParam0)
{
	if (!func_79(iParam0))
	{
		return -1;
	}
	return func_248(func_229(iParam0));
}

bool func_195(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_196(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_197(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1935630.f_18)
	{
		if ((bParam2 || Global_1935630.f_19 > 0) || Global_1935630.f_17 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1935630.f_15 == 1370593166)
	{
		return 0;
	}
	if (Global_1935630.f_20 > 0 || (bParam2 && Global_1935630.f_20 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1935630.f_13)
		{
			if (bParam2 || Global_1935630.f_21 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_198(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_249(iParam1))
		{
			func_40(iParam0, joaat("META_OUTFIT_DEFAULT"));
		}
		else if (bParam5)
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
			func_250(iParam0, 0, 1);
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
			func_251(iParam0, 0);
			bVar0 = true;
		}
		func_252(iParam0, bParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_199(int iParam0, var uParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_3 = uParam1;
}

int func_200()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_253(iVar0, 1, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_201(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_202(int iParam0, int iParam1)
{
	if (func_253(iParam0, 1, 1))
	{
		func_42(&(Global_1955500[iParam0 /*16*/]), iParam1);
	}
}

float func_203(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_204(var uParam0, int iParam1)
{
	func_254(&(uParam0->f_5), &(iParam1->f_238));
}

int func_205(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_206(int iParam0, int iParam1)
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

struct<12> func_207(int iParam0)
{
	struct<12> Var0;

	switch (iParam0)
	{
		case 0:
			Var0.f_1 = joaat("VOLCYLINDER");
			Var0.f_2 = { -2371.143f, 477.8526f, 118.7753f };
			Var0.f_5 = { 0f, 0f, 0f };
			Var0.f_8 = { 75f, 75f, 75f };
			Var0.f_11 = "HungryBearRandomEvent";
			break;
		case 1:
			Var0.f_1 = joaat("VOLBOX");
			Var0.f_2 = { -2370.062f, 481.551f, 124.813f };
			Var0.f_5 = { -20f, 0f, 0f };
			Var0.f_8 = { 20f, 22f, 13f };
			Var0.f_11 = "HungryBearFrontApproach";
			break;
		case 2:
			Var0.f_1 = joaat("VOLBOX");
			Var0.f_2 = { -2371.35f, 475.243f, 132.299f };
			Var0.f_5 = { 0f, 0f, 0f };
			Var0.f_8 = { 2.443f, 3.995f, 2.647f };
			Var0.f_11 = "HungryBearFrontBuffer";
			break;
		case 3:
			Var0.f_1 = joaat("VOLBOX");
			Var0.f_2 = { -2371.35f, 475.243f, 132.299f };
			Var0.f_5 = { 0f, 0f, 0f };
			Var0.f_8 = { 1.443f, 1.395f, 2.647f };
			Var0.f_11 = "HungryBearFrontDoor";
			break;
		case 4:
			Var0.f_1 = joaat("VOLBOX");
			Var0.f_2 = { -2369.906f, 461.0042f, 132.2916f };
			Var0.f_5 = { -20f, 0f, 0f };
			Var0.f_8 = { 15f, 20f, 10f };
			Var0.f_11 = "HungryBearBack";
			break;
		case 5:
			Var0.f_1 = joaat("VOLCYLINDER");
			Var0.f_2 = { -2370.159f, 473.2869f, 135.0301f };
			Var0.f_5 = { 0f, 0f, 0f };
			Var0.f_8 = { 15f, 15f, 9f };
			Var0.f_11 = "HungryBearAudio";
			break;
		case 6:
			Var0.f_1 = joaat("VOLCYLINDER");
			Var0.f_2 = { -2370.159f, 473.2869f, 165.9346f };
			Var0.f_5 = { 0f, 0f, 0f };
			Var0.f_8 = { 100f, 100f, 50f };
			Var0.f_11 = "HungryBearEscape";
			break;
		case 7:
			Var0.f_1 = joaat("VOLBOX");
			Var0.f_2 = { -2371.53f, 477.6144f, 131.8061f };
			Var0.f_5 = { 0f, 0f, 0f };
			Var0.f_8 = { 7f, 4f, 5f };
			Var0.f_11 = "HungryBearPorch";
			break;
		case 8:
			Var0.f_1 = joaat("VOLBOX");
			Var0.f_2 = { -2370.197f, 472.3461f, 132.259f };
			Var0.f_5 = { 0f, 0f, 0f };
			Var0.f_8 = { 5f, 5f, 4f };
			Var0.f_11 = "HungryBearCabin";
			break;
		case 9:
			Var0.f_1 = joaat("VOLCYLINDER");
			Var0.f_2 = { VOLUME::_GET_VOLUME_COORDS(func_16(func_15())) };
			Var0.f_5 = { VOLUME::_GET_VOLUME_ROTATION(func_16(func_15())) };
			Var0.f_8 = { VOLUME::_GET_VOLUME_SCALE(func_16(func_15())) };
			Var0.f_11 = "HungryBearRegion";
			break;
		default:
			break;
	}
	if (func_91(Var0.f_2))
	{
	}
	return Var0;
}

int func_208(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, float fParam9)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (!bParam8 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_91(vParam0))
	{
		return 0;
	}
	iVar1 = 0;
	if (!bParam5)
	{
		iVar1 |= 2;
	}
	iVar1 |= 1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam6))
	{
		if (func_255(vParam0))
		{
			return 0;
		}
		iVar0 = VOLUME::_0x00BBF7CEAE8C666A(vParam0, fParam3, iVar1, 0);
	}
	else
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam6, false, false) };
		iVar0 = VOLUME::_0xF383E96C4904DF0C(iParam6, fParam3, iVar1, 0);
	}
	if (bParam7 != 0)
	{
		VOLUME::_0xB440F4E35393FC39(iVar0, bParam7);
	}
	if (fParam9 >= 0f)
	{
		VOLUME::_0xD460135C98940274(iVar0, fParam9);
	}
	func_256(iVar0, bParam8);
	return iVar0;
}

void func_209(var uParam0, int iParam1)
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

void func_210(var uParam0, int iParam1)
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

bool func_211(int iParam0)
{
	return iParam0 != 0;
}

void func_212(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_126(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	Global_40.f_11959[iVar0] = uParam1;
}

void func_213(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	func_51(iParam0, 0, 0);
	if (func_145(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam2, bParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_257(iParam0, fParam2, 1, bParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_258(iParam0, 1);
			}
			else
			{
				func_259(iParam0, 1);
			}
		}
		else
		{
			func_260(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_0x276AAF0F1C7F2494(iParam0, 1);
		}
	}
	else if (func_261())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

bool func_214(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || (iParam2 == 1 && ENTITY::IS_ENTITY_DEAD(iParam0)))
	{
		return false;
	}
	iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
	if (!MAP::DOES_BLIP_EXIST(iVar0))
	{
		return false;
	}
	return MAP::_BLIP_SET_MODIFIER(iVar0, iParam1);
}

bool func_215(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_216()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_217(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_218(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_219(var uParam0)
{
	return func_215(*uParam0, 2);
}

float func_220(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_221(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_222(int iParam0)
{
	return WEAPON::_IS_WEAPON_BOW(iParam0);
}

Vector3 func_223(int iParam0)
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
	return func_224((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

Vector3 func_224(vector3 vParam0)
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

bool func_225(int iParam0, int iParam1)
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
	if (func_41(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_41(iVar0, 2))
	{
		if (PED::_IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_41(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_41(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_41(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_41(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return false;
		}
	}
	if (func_41(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_41(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_226()
{
	switch (func_231())
	{
		case 0:
			return PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
		default:
			break;
	}
	return Global_35;
}

bool func_227(int iParam0, int iParam1)
{
	if (func_253(iParam0, 1, 1))
	{
		return func_41(Global_1955500[iParam0 /*16*/], iParam1);
	}
	return false;
}

int func_228(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1058888.f_40501 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = (Global_1058888.f_40501 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (Global_1058888.f_40501.f_1[iVar2 /*2*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (Global_1058888.f_40501.f_1[iVar2 /*2*/] < iParam0)
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

int func_229(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/];
	}
	if (iParam0 < 0 || iParam0 >= 20001)
	{
		return 0;
	}
	return Global_1058888.f_498[iParam0 /*2*/];
}

int func_230(int iParam0)
{
	return iParam0 & 31;
}

int func_231()
{
	return Global_1572887.f_12;
}

int func_232(int iParam0)
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

int func_233(int iParam0)
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

void func_234(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_235()
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

int func_236(int iParam0)
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

void func_237(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

bool func_238(int iParam0, bool bParam1)
{
	switch (func_166(iParam0))
	{
		case 5:
			return true;
		case 6:
			if (bParam1)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_239(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_262(iParam0);
	}
	else
	{
		func_263(iParam0, iParam1);
	}
	func_264();
}

void func_240(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_241(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_242(int iParam0)
{
	if (!func_79(iParam0))
	{
		return false;
	}
	switch (func_168(iParam0))
	{
		case 1:
			switch (func_194(iParam0))
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
					return true;
			}
			break;
		case 8:
			switch (func_194(iParam0))
			{
				case 2:
				case 58:
				case 62:
				case 96:
					return true;
			}
			break;
	}
	return false;
}

void func_243(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_265(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (func_266(iVar1) == iParam0)
		{
			INVENTORY::_0x6A564540FAC12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_268(func_267(iParam0), 6);
}

void func_244(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_265(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (func_266(iVar1) == iParam0)
		{
			INVENTORY::_0x766315A564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_269(func_267(iParam0), 6);
}

int func_245(int iParam0)
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
		if (Global_1898164.f_1[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_246(int iParam0)
{
	struct<5> Var0;

	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1898164.f_162 == 0)
	{
		return 0;
	}
	if (Global_1898164.f_162 == 1)
	{
		Global_1898164.f_162 = 0;
		Global_1898164.f_1[0 /*5*/] = { Var0 };
		return 1;
	}
	Global_1898164.f_1[iParam0 /*5*/] = { Var0 };
	Global_1898164.f_162 = (Global_1898164.f_162 - 1);
	func_270(iParam0, Global_1898164.f_162);
	return 1;
}

void func_247(int iParam0)
{
	vector3 vVar0;

	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
	func_271(vVar0, 0);
}

int func_248(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

bool func_249(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CS_SISTERCALDERON"):
		case joaat("CS_STRSHERIFF_01"):
		case joaat("CS_MUD2BIGGUY"):
		case joaat("CS_RAINSFALL"):
		case joaat("CS_PENELOPEBRAITHWAITE"):
		case joaat("CS_SWAMPWEIRDOSONNY"):
		case joaat("CS_UNIDUSTERJAIL_01"):
		case joaat("CS_IANGRAY"):
		case joaat("CS_TINYHERMIT"):
		case joaat("CS_TIMOTHYDONAHUE"):
		case joaat("CS_PRINCESSISABEAU"):
		case joaat("CS_LEVITICUSCORNWALL"):
		case joaat("CS_DIDSBURY"):
		case joaat("CS_FEATHERSTONCHAMBERS"):
		case joaat("CS_FEATSOFSTRENGTH"):
		case joaat("CS_BANDPIANIST"):
		case joaat("CS_ESCAPEARTISTASSISTANT"):
		case joaat("CS_GARETHBRAITHWAITE"):
		case joaat("CS_CREOLEGUY"):
		case joaat("CS_LEIGHGRAY"):
		case joaat("CS_STRAWBERRYOUTLAW_02"):
		case joaat("CS_GLORIA"):
		case joaat("CS_WARVET"):
		case joaat("CS_JOCKGRAY"):
		case joaat("CS_DAVIDGEDDES"):
		case joaat("CS_GUIDOMARTELLI"):
		case joaat("CS_DUNCANGEDDES"):
		case joaat("CS_DUSTERINFORMANT_01"):
		case joaat("CS_PINKERTONGOON"):
		case joaat("CS_MICKEY"):
		case joaat("CS_TWINBROTHER_02"):
		case joaat("CS_HESTONJAMESON"):
		case joaat("CS_STRDEPUTY_01"):
		case joaat("CS_ABE"):
		case joaat("CS_ODDFELLOWSPINHEAD"):
		case joaat("CS_SWAMPFREAK"):
		case joaat("CS_MRADLER"):
		case joaat("CS_ABERDEENPIGFARMER"):
		case joaat("CS_HOBARTCRAWLEY"):
		case joaat("CS_FORMYARTBIGWOMAN"):
		case joaat("CS_NORRISFORSYTHE"):
		case joaat("CS_JULES"):
		case joaat("CS_TOMDICKENS"):
		case joaat("CS_GERALDBRAITHWAITE"):
		case joaat("CS_PAYTAH"):
		case joaat("CS_CANCAN_03"):
		case joaat("CS_GRIZZLEDJON"):
		case joaat("CS_WROBEL"):
		case joaat("CS_MEREDITH"):
		case joaat("CS_CREEPYOLDLADY"):
		case joaat("CS_NBXRECEPTIONIST_01"):
		case joaat("CS_NBXPOLICECHIEFFORMAL"):
		case joaat("CS_CORNWALLTRAINCONDUCTOR"):
		case joaat("CS_RHODEPUTY_01"):
		case joaat("CS_DRMALCOLMMACINTOSH"):
		case joaat("CS_LEON"):
		case joaat("CS_SHERIFFOWENS"):
		case joaat("CS_SDDOCTOR_01"):
		case joaat("CS_SCOTTGRAY"):
		case joaat("CS_CANCAN_01"):
		case joaat("CS_CREOLECAPTAIN"):
		case joaat("CS_BRONTESBUTLER"):
		case joaat("CS_JANSON"):
		case joaat("CS_FORGIVENWIFE_01"):
		case joaat("CS_TIGERHANDLER"):
		case joaat("CS_FRENCHARTIST"):
		case joaat("CS_GENSTORYMALE"):
		case joaat("CS_CLAY"):
		case joaat("CS_STRDEPUTY_02"):
		case joaat("CS_FAMOUSGUNSLINGER_03"):
		case joaat("CS_BIVCOACHDRIVER"):
		case joaat("CS_BRAITHWAITEBUTLER"):
		case joaat("CS_CLEET"):
		case joaat("CS_JOE"):
		case joaat("CS_SLAVECATCHER"):
		case joaat("CS_BRAITHWAITEMAID"):
		case joaat("CS_TWINGROUPIE_02"):
		case joaat("CS_MRSGEDDES"):
		case joaat("CS_SAMARITAN"):
		case joaat("CS_EXCONFEDINFORMANT"):
		case joaat("CS_FRENCHMAN_01"):
		case joaat("CS_BANDSINGER"):
		case joaat("CS_BAPTISTE"):
		case joaat("CS_ANGUSGEDDES"):
		case joaat("CS_MYSTERIOUSSTRANGER"):
		case joaat("CS_FAMOUSGUNSLINGER_01"):
		case joaat("CS_BARTHOLOMEWBRAITHWAITE"):
		case joaat("CS_MIXEDRACEKID"):
		case joaat("CS_BEATENUPCAPTAIN"):
		case joaat("CS_EDGARROSS"):
		case joaat("CS_TWINGROUPIE_01"):
		case joaat("CS_MRSWEATHERS"):
		case joaat("CS_JAMIE"):
		case joaat("CS_KARENSJOHN_01"):
		case joaat("CS_THOMASDOWN"):
		case joaat("CS_OBEDIAHHINTON"):
		case joaat("CS_AGNESDOWD"):
		case joaat("CS_CAVEHERMIT"):
		case joaat("CS_BRYNNTILDON"):
		case joaat("CS_GERMANSON"):
		case joaat("CS_BRENDACRAWLEY"):
		case joaat("CS_COLFAVOURS"):
		case joaat("CS_RHODESKIDNAPVICTIM"):
		case joaat("CS_EXCONFEDSLEADER_01"):
		case joaat("CS_CANCAN_04"):
		case joaat("CS_TOWNCRIER"):
		case joaat("CS_FAMOUSGUNSLINGER_04"):
		case joaat("CS_DALEMARONEY"):
		case joaat("CS_ANGRYHUSBAND"):
		case joaat("CS_LILLIANPOWELL"):
		case joaat("CS_ANDERSHELGERSON"):
		case joaat("CS_POORJOE"):
		case joaat("CS_BRAITHWAITESERVANT"):
		case joaat("CS_BROTHERDORKINS"):
		case joaat("CS_ALBERTMASON"):
		case joaat("CS_FAMOUSGUNSLINGER_05"):
		case joaat("CS_BALLOONOPERATOR"):
		case joaat("CS_ALBERTCAKEESQUIRE"):
		case joaat("CS_MRSFELLOWS"):
		case joaat("CS_CANCANMAN_01"):
		case joaat("CS_POISONWELLSHAMAN"):
		case joaat("CS_CANCAN_02"):
		case joaat("CS_MEREDITHSMOTHER"):
		case joaat("CS_ANGEL"):
		case joaat("CS_ARCHERFORDHAM"):
		case joaat("CS_DISGUISEDDUSTER_01"):
		case joaat("CS_CHELONIANMASTER"):
		case joaat("CS_TWINBROTHER_01"):
		case joaat("CS_GERMANDAUGHTER"):
		case joaat("CS_LEMIUXASSISTANT"):
		case joaat("CS_CREOLEDOCTOR"):
		case joaat("CS_CRACKPOTROBOT"):
		case joaat("CS_BANDBASSIST"):
		case joaat("CS_GENSTORYFEMALE"):
		case joaat("CS_MARYLINTON"):
		case joaat("CS_VALPRAYINGMAN"):
		case joaat("CS_JOHNTHEBAPTISINGMADMAN"):
		case joaat("CS_MRS_CALHOUN"):
		case joaat("CS_THEODORELEVIN"):
		case joaat("CS_NICHOLASTIMMINS"):
		case joaat("CS_DISGUISEDDUSTER_03"):
		case joaat("CS_DINOBONESLADY"):
		case joaat("CS_BEAUGRAY"):
		case joaat("CS_STRAWBERRYOUTLAW_01"):
		case joaat("CS_CRACKPOTINVENTOR"):
		case joaat("CS_HERCULE"):
		case joaat("CS_GAVIN"):
		case joaat("CS_LEVISIMON"):
		case joaat("CS_LONDONDERRYSON"):
		case joaat("CS_CAPTAINMONROE"):
		case joaat("CS_FAMOUSGUNSLINGER_02"):
		case joaat("CS_MRSLONDONDERRY"):
		case joaat("CS_SOOTHSAYER"):
		case joaat("CS_TAVISHGRAY"):
		case joaat("CS_JOEBUTLER"):
		case joaat("CS_BANDDRUMMER"):
		case joaat("CS_LILLYMILLET"):
		case joaat("CS_ANSEL_ATHERTON"):
		case joaat("CS_RHODEPUTY_02"):
		case joaat("CS_EDMUNDLOWRY"):
		case joaat("CS_DISGUISEDDUSTER_02"):
		case joaat("CS_MAGNIFICO"):
		case joaat("CS_ARTAPPRAISER"):
		case joaat("CS_FORGIVENHUSBAND_01"):
		case joaat("CS_REVERENDFORTHERINGHAM"):
		case joaat("CS_DAVEYCALLENDER"):
		case joaat("CS_DESMOND"):
		case joaat("CS_ADAMGRAY"):
		case joaat("CS_JIMCALLOWAY"):
		case joaat("CS_SDSALOONDRUNK_01"):
		case joaat("CS_NBXDRUNK"):
		case joaat("CS_GERMANMOTHER"):
		case joaat("CS_RINGMASTER"):
		case joaat("CS_LUCANAPOLI"):
		case joaat("CS_RHODESASSISTANT"):
		case joaat("CS_ABERDEENSISTER"):
		case joaat("CS_NBXEXECUTED"):
		case joaat("CS_FAMOUSGUNSLINGER_06"):
		case joaat("CS_JOHNWEATHERS"):
		case joaat("CS_PROFESSORBELL"):
		case joaat("CS_RHODESSALOONBOUNCER"):
			return true;
		default:
			break;
	}
	return false;
}

void func_250(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	PED::_SET_PED_COMPONENT_DISABLED(iParam0, joaat("HATS"), 1);
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_251(int iParam0, bool bParam1)
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

void func_252(int iParam0, bool bParam1)
{
	if (bParam1 == 1)
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, 41611, 0f);
	}
	else
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, 41611, 1f);
	}
}

bool func_253(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 > -1 && iParam0 < 4)
	{
		if (!bParam1 || VOLUME::_DOES_VOLUME_EXIST(Global_1955500[iParam0 /*16*/].f_1))
		{
			if (!bParam2 || ENTITY::DOES_ENTITY_EXIST(Global_1955500[iParam0 /*16*/].f_2))
			{
				return true;
			}
		}
	}
	return false;
}

int func_254(var uParam0, var uParam1)
{
	if (func_79(*uParam0))
	{
		func_272(*uParam0, *uParam1);
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

bool func_255(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

int func_256(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!bParam1 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (!VOLUME::_0xF6A8A652A6B186CD(iParam0))
	{
	}
	iVar1 = 0;
	while (iVar1 < Global_1911670)
	{
		iVar0 = Global_1911670[iVar1];
		if (!VOLUME::_0xF6A8A652A6B186CD(iVar0) || iVar0 == iParam0)
		{
			Global_1911670[iVar1] = iParam0;
			return 1;
		}
		iVar1++;
	}
	return 0;
}

void func_257(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (func_145(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam1, bParam3);
	}
}

void func_258(int iParam0, bool bParam1)
{
	if (func_145(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_259(int iParam0, bool bParam1)
{
	if (func_145(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_260(int iParam0, bool bParam1)
{
	if (func_145(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

bool func_261()
{
	return true;
}

int func_262(int iParam0)
{
	int iVar0;

	iVar0 = func_228(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_273(iVar0);
}

int func_263(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (Global_1058888.f_40501 >= 32)
	{
		return -1;
	}
	Var0 = -1;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	if (Global_1058888.f_40501 == 0)
	{
		Global_1058888.f_40501.f_1[Global_1058888.f_40501 /*2*/] = { Var0 };
		Global_1058888.f_40501++;
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_1058888.f_40501)
	{
		if (iParam0 == Global_1058888.f_40501.f_1[iVar2 /*2*/])
		{
			Global_1058888.f_40501.f_1[iVar2 /*2*/] = { Var0 };
			return iVar2;
		}
		else if (iParam0 > Global_1058888.f_40501.f_1[iVar2 /*2*/])
		{
			iVar2++;
		}
		else if (iParam0 < Global_1058888.f_40501.f_1[iVar2 /*2*/])
		{
			func_274(iVar2);
			Global_1058888.f_40501.f_1[iVar2 /*2*/] = { Var0 };
			return iVar2;
		}
	}
	if (Global_1058888.f_40501 < 31)
	{
		iVar2 = Global_1058888.f_40501;
		Global_1058888.f_40501.f_1[iVar2 /*2*/] = { Var0 };
		Global_1058888.f_40501++;
		if (Global_1058888.f_40501 > 32)
		{
			Global_1058888.f_40501 = 32;
		}
		return iVar2;
	}
	return -1;
}

void func_264()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888.f_40501)
	{
		iVar0++;
	}
}

int func_265(bool bParam0)
{
	if (func_231() == -1)
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

int func_266(int iParam0)
{
	struct<2> Var0;

	if (!func_275(iParam0, 0))
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

void func_268(int iParam0, int iParam1)
{
	Global_1946804.f_2657.f_26.f_6 = (Global_1946804.f_2657.f_26.f_6 - (Global_1946804.f_2657.f_26.f_6 && iParam0));
}

void func_269(int iParam0, int iParam1)
{
	Global_1946804.f_2657.f_26.f_6 = (Global_1946804.f_2657.f_26.f_6 || iParam0);
}

void func_270(int iParam0, int iParam1)
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
			func_276((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_276(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_79(Global_1898164.f_1[0 /*5*/]))
	{
		func_173(Global_1898164.f_1[0 /*5*/], 3);
	}
}

void func_271(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_91(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (VOLUME::_0xF6A8A652A6B186CD(iVar1))
		{
			vVar2 = { VOLUME::_0xC4019CF9AE8E931A(iVar1) };
			if (func_277(vVar2, vParam0, 2f, 1))
			{
				if (iParam3 == 0 || VOLUME::_0x769BB7626B8CDB06(vVar2, 2f, 0, iParam3, 16384))
				{
					VOLUME::_0xFDFECC6EE4491E11(iVar1);
					Global_1911670[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

void func_272(int iParam0, var uParam1)
{
	if (!func_79(iParam0))
	{
		return;
	}
	func_278(iParam0, uParam1);
}

int func_273(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = iParam0;
	while (iVar0 < Global_1058888.f_40501)
	{
		if (iVar0 + 1 < 32)
		{
			Global_1058888.f_40501.f_1[iVar0 /*2*/] = { Global_1058888.f_40501.f_1[iVar0 + 1 /*2*/] };
		}
		iVar0++;
	}
	Var1 = -1;
	if (Global_1058888.f_40501 < 32)
	{
		Global_1058888.f_40501.f_1[Global_1058888.f_40501 /*2*/] = { Var1 };
	}
	Global_1058888.f_40501 = (Global_1058888.f_40501 - 1);
	if (Global_1058888.f_40501 < 0)
	{
		Global_1058888.f_40501 = 0;
	}
	return 1;
}

int func_274(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = (Global_1058888.f_40501 - 1);
	Var1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			Global_1058888.f_40501.f_1[iVar0 + 1 /*2*/] = { Global_1058888.f_40501.f_1[iVar0 /*2*/] };
		}
		iVar0 = (iVar0 - 1);
	}
	Global_1058888.f_40501.f_1[iParam0 /*2*/] = { Var1 };
	Global_1058888.f_40501++;
	if (Global_1058888.f_40501 > 32)
	{
		Global_1058888.f_40501 = 32;
	}
	return 1;
}

bool func_275(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

void func_276(int iParam0, int iParam1)
{
	struct<5> Var0;

	Var0 = { Global_1898164.f_1[iParam0 /*5*/] };
	Global_1898164.f_1[iParam0 /*5*/] = { Global_1898164.f_1[iParam1 /*5*/] };
	Global_1898164.f_1[iParam1 /*5*/] = { Var0 };
}

bool func_277(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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
				return true;
			}
		}
	}
	return false;
}

void func_278(int iParam0, var uParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_4 = uParam1;
}

