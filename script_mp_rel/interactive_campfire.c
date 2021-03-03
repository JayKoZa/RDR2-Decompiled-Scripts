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
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()
{
	struct<206> Var0;
	bool bVar208;
	float fVar209;

	fLocal_13 = 1f;
	fLocal_14 = 1f;
	sLocal_19 = "props_misc@campfires@5_logs";
	sLocal_20 = "Script_PropCampfire";
	Var0 = 4;
	Var0.f_5 = 4;
	Var0.f_18.f_29 = 1;
	Var0.f_49 = 192;
	Var0.f_49.f_1 = 8;
	Var0.f_49.f_23 = -1;
	Var0.f_49.f_26 = -1;
	Var0.f_49.f_30 = 4;
	Var0.f_49.f_35 = 4;
	Var0.f_125 = 15933;
	Var0.f_126 = 8192;
	Var0.f_129 = -1;
	Var0.f_131 = -1;
	Var0.f_135 = 9;
	Var0.f_150 = -1;
	Var0.f_160 = -1;
	Var0.f_161 = 1;
	Var0.f_163 = joaat("P_CAMPFIRE02X_COMBO");
	Var0.f_165.f_9 = 1084227584;
	Var0.f_165.f_10 = 1073741824;
	Var0.f_165.f_30 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		SCRIPTS::_0xE7282390542F570D(vScriptParam_0.x);
		func_1(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (func_2(0, 0) || !TASK::_DOES_SCENARIO_POINT_EXIST(vScriptParam_0.y))
	{
		SCRIPTS::_0xE7282390542F570D(vScriptParam_0.x);
		func_1(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	Var0.f_202 = { TASK::_GET_SCENARIO_POINT_COORDS(vScriptParam_0.y, true) };
	Var0.f_205 = TASK::_GET_SCENARIO_POINT_HEADING(vScriptParam_0.y, true);
	if (func_3(&Var0))
	{
		SCRIPTS::_0xE7282390542F570D(vScriptParam_0.x);
		func_1(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	bVar208 = false;
	while (!func_2(0, 0) && !bVar208)
	{
		switch (Var0.f_164)
		{
			case 0:
				fVar209 = func_4(Global_34, Var0.f_202, 1);
				if (!func_5() || fVar209 < 6400f)
				{
					func_6(&(Var0.f_126), 8192);
					func_7(&Var0, vScriptParam_0.z);
					STREAMING::REQUEST_MODEL(Var0.f_163, false);
					func_8(&(Var0.f_164), 1);
				}
				break;
			case 1:
				if (STREAMING::HAS_MODEL_LOADED(Var0.f_163))
				{
					func_8(&(Var0.f_164), 2);
				}
				break;
			case 2:
				Var0.f_127 = OBJECT::CREATE_OBJECT(Var0.f_163, Var0.f_202, false, false, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Var0.f_127, Var0.f_205);
				if (Global_1940122.f_21)
				{
					Var0.f_201 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), Var0.f_202, 0f, 0f, 0f, 0.3f, 0.3f, 2f);
				}
				func_8(&(Var0.f_164), 3);
				break;
			case 3:
				if (func_3(&Var0))
				{
					bVar208 = true;
				}
				else
				{
					fVar209 = func_4(Global_34, Var0.f_202, 1);
					if (fVar209 < func_9() || !Var0.f_165.f_34)
					{
						func_10(&(Var0.f_165), &(Var0.f_127));
					}
					if (!func_11(Global_1940258, 4194304))
					{
						if (fVar209 < func_12() || Var0.f_128 == 7)
						{
							func_13(&Var0, 0);
						}
					}
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Var0);
	SCRIPTS::_0xE7282390542F570D(vScriptParam_0.x);
}

void func_1(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_127))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_127));
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_201))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_201);
	}
	func_14(uParam0, 1);
}

bool func_2(bool bParam0, bool bParam1)
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

bool func_3(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = MISC::GET_GAME_TIMER();
	if ((iVar0 - uParam0->f_206) > 1000)
	{
		iVar1 = func_15(uParam0->f_202);
		if (func_16(iVar1, 8))
		{
			return true;
		}
		if (func_16(iVar1, 1) || uParam0->f_207)
		{
			if (func_16(uParam0->f_125, 8192))
			{
				func_17(&(uParam0->f_125), 64);
			}
		}
		else if (func_16(iVar1, 2) && !uParam0->f_207)
		{
			if (!func_16(uParam0->f_125, 8192))
			{
				func_17(&(uParam0->f_125), 128);
			}
		}
		else if (func_18(0, 0, 1) && !func_19())
		{
			if (func_16(uParam0->f_125, 8192))
			{
				func_17(&(uParam0->f_125), 64);
			}
		}
		else if (!uParam0->f_207)
		{
			if (!func_16(uParam0->f_125, 8192))
			{
				func_17(&(uParam0->f_125), 128);
			}
		}
		if (func_16(iVar1, 32))
		{
			func_20(uParam0, 1, 0, 0, 0, 0, 0);
		}
		else if (func_16(iVar1, 4))
		{
			func_20(uParam0, 0, 1, 0, 0, 0, 0);
		}
		else if (func_16(iVar1, 16))
		{
			func_20(uParam0, 0, 0, 1, 0, 0, 0);
		}
		else if (func_16(iVar1, 64))
		{
			func_20(uParam0, 0, 0, 0, 1, 0, 0);
		}
		else if (func_16(iVar1, 128))
		{
			func_20(uParam0, 0, 0, 0, 0, 1, 0);
		}
		else if (func_16(iVar1, 256))
		{
			func_20(uParam0, 0, 0, 0, 0, 0, 1);
		}
		uParam0->f_206 = iVar0;
	}
	return false;
}

float func_4(int iParam0, vector3 vParam1, bool bParam4)
{
	vector3 vVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	}
	if (bParam4)
	{
		return BUILTIN::VDIST2(vVar0, vParam1);
	}
	return func_21(vVar0, vParam1);
}

bool func_5()
{
	return (Global_1893587 & 1 != 0 && func_22() != -1);
}

void func_6(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_7(var uParam0, int iParam1)
{
	uParam0->f_49.f_11 = -1711536035;
	switch (iParam1)
	{
		case joaat("WB_INTERACTIVE_CAMPFIRE_CARAVAN"):
			func_6(&(uParam0->f_125), 6144);
			if (func_23(joaat("UPGRADE_UPG_COFFEE_KIT"), 1))
			{
				func_17(&(uParam0->f_125), 1);
			}
			break;
		case joaat("WB_INTERACTIVE_CAMPFIRE_DFLT"):
			func_6(&(uParam0->f_125), 9);
			if (func_23(joaat("UPGRADE_UPG_COFFEE_KIT"), 1))
			{
				func_17(&(uParam0->f_125), 1);
			}
			break;
		case joaat("WB_INTERACTIVE_CAMPFIRE_FIREPLACE"):
			func_6(&(uParam0->f_125), 7177);
			if (func_23(joaat("UPGRADE_UPG_COFFEE_KIT"), 1))
			{
				func_17(&(uParam0->f_125), 1);
			}
			break;
		case joaat("WB_INTERACTIVE_CAMPFIRE_FIREPLACE_IN_TOWNS"):
			func_6(&(uParam0->f_125), 7177);
			if (func_23(joaat("UPGRADE_UPG_COFFEE_KIT"), 1))
			{
				func_17(&(uParam0->f_125), 1);
			}
			break;
		case joaat("WB_INTERACTIVE_CAMPFIRE_MP_TWOPOINT"):
			func_6(&(uParam0->f_125), 6144);
			if (func_23(joaat("UPGRADE_UPG_COFFEE_KIT"), 1))
			{
				func_17(&(uParam0->f_125), 1);
			}
			break;
		case joaat("WB_INTERACTIVE_CAMPFIRE_TWOPOINT"):
			func_6(&(uParam0->f_125), 6144);
			if (func_23(joaat("UPGRADE_UPG_COFFEE_KIT"), 1))
			{
				func_17(&(uParam0->f_125), 1);
			}
			break;
		case joaat("WB_NON_INTERACTIVE_CAMPFIRE"):
			func_6(&(uParam0->f_125), 7817);
			func_17(&(uParam0->f_125), 64);
			uParam0->f_207 = 1;
			break;
		case joaat("WB_NON_INTERACTIVE_CAMPFIRE_IN_TOWNS"):
			func_6(&(uParam0->f_125), 7817);
			func_17(&(uParam0->f_125), 64);
			uParam0->f_207 = 1;
			break;
		case joaat("WB_NON_INTERACTIVE_CAMPFIRE_UNDERPOT"):
			func_6(&(uParam0->f_125), 7817);
			func_17(&(uParam0->f_125), 64);
			uParam0->f_165.f_4 = 1;
			uParam0->f_207 = 1;
			break;
		case joaat("WB_NON_INTERACTIVE_CAMPFIRE_UNDERPOT_IN_TOWNS"):
			func_6(&(uParam0->f_125), 7817);
			func_17(&(uParam0->f_125), 64);
			uParam0->f_165.f_4 = 1;
			uParam0->f_207 = 1;
			break;
		default:
			break;
	}
}

void func_8(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

float func_9()
{
	if (func_11(Global_1940258, 4194304))
	{
		return 1600f;
	}
	if (func_5())
	{
		if (func_22() == 5)
		{
			return 3600f;
		}
		else
		{
			return 6400f;
		}
	}
	return 10000f;
}

void func_10(var uParam0, var uParam1)
{
	float fVar0;
	float fVar1;

	fVar0 = 0.019f;
	func_24(uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		fVar1 = MISC::GET_RAIN_LEVEL();
		if ((fVar1 > 0f && uParam0->f_9 >= 1f) && !uParam0->f_3)
		{
			func_25(uParam0, 4);
		}
		else if (uParam0->f_5)
		{
			func_25(uParam0, 0);
		}
		else if (uParam0->f_2)
		{
			func_25(uParam0, 2);
		}
		else if (uParam0->f_3)
		{
			func_25(uParam0, 5);
		}
		else if (uParam0->f_6)
		{
			func_25(uParam0, 6);
		}
		else if (uParam0->f_7)
		{
			func_25(uParam0, 7);
		}
		else if (uParam0->f_8)
		{
			func_25(uParam0, 8);
		}
		else if (func_27(&(uParam0->f_31), func_26()))
		{
			func_28(uParam0);
		}
	}
	switch (uParam0->f_30)
	{
		case 0:
			if (uParam0->f_1)
			{
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogBurnRate", 0f);
			}
			if (uParam0->f_1 && uParam0->f_9 <= 2f)
			{
				uParam0->f_20 = 0.25f;
				uParam0->f_21 = 0.015f;
				uParam0->f_22 = 0.25f;
				uParam0->f_23 = 0.015f;
				uParam0->f_24 = 0.5f;
				uParam0->f_25 = 0.01f;
				uParam0->f_26 = 0.5f;
				uParam0->f_27 = 0.01f;
				uParam0->f_28 = 0.1f;
			}
			else
			{
				uParam0->f_24 = 1f;
			}
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0) == 0)
			{
				*uParam0 = *uParam1;
			}
			else
			{
				uParam0->f_30 = 2;
			}
			break;
		case 2:
			if (uParam0->f_1)
			{
				func_25(uParam0, 0);
				STREAMING::REQUEST_ANIM_DICT(sLocal_19);
				STREAMING::_REQUEST_MOVE_NETWORK_DEF(sLocal_20);
			}
			else
			{
				if (uParam0->f_5)
				{
					func_25(uParam0, 0);
				}
				else if (uParam0->f_2)
				{
					func_25(uParam0, 2);
				}
				else if (uParam0->f_3)
				{
					func_25(uParam0, 5);
				}
				else if (uParam0->f_6)
				{
					func_25(uParam0, 6);
				}
				else if (uParam0->f_7)
				{
					func_25(uParam0, 7);
				}
				else if (uParam0->f_8)
				{
					func_25(uParam0, 8);
				}
				else
				{
					func_25(uParam0, 0);
				}
				uParam0->f_35 = 1;
			}
			GRAPHICS::_SET_LIGHTS_TYPE_FOR_ENTITY(*uParam0, 20);
			GRAPHICS::_SET_LIGHTS_COLOR_FOR_ENTITY(*uParam0, 255, 50, 9);
			uParam0->f_29 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("ent_amb_campfire_dynamic", *uParam0, 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_29))
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Flames", uParam0->f_27, true);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Embers", uParam0->f_25, true);
			}
			uParam0->f_30 = 3;
			break;
		case 3:
			if (!uParam0->f_1)
			{
				uParam0->f_30 = 4;
			}
			else if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_19) && STREAMING::_HAS_MOVE_NETWORK_DEF_LOADED(sLocal_20))
			{
				TASK::TASK_MOVE_NETWORK_BY_NAME(*uParam0, sLocal_20, 0f, false, sLocal_19, 128);
				uParam0->f_30 = 5;
			}
			func_29(&(uParam0->f_31));
			break;
		case 4:
			uParam0->f_34 = 1;
			break;
		case 5:
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(*uParam0))
			{
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogCount", uParam0->f_9);
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogSet", uParam0->f_10);
				uParam0->f_30 = 6;
			}
			break;
		case 6:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogCount", uParam0->f_9);
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogSet", uParam0->f_10);
			if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(*uParam0))
			{
				uParam0->f_34 = 1;
				if (uParam0->f_1 && MISC::GET_RAIN_LEVEL() <= 0f)
				{
					if (uParam0->f_9 <= 2f)
					{
						uParam0->f_30 = 0;
					}
					else if (TASK::_0x844CEEE428EA35B0(*uParam0, "BurnPhase") <= 0f || TASK::_0x844CEEE428EA35B0(*uParam0, "BurnPhase") >= 1f)
					{
						uParam0->f_30 = 8;
					}
					else
					{
						TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogBurnRate", fVar0);
					}
				}
				else
				{
					uParam0->f_30 = 0;
				}
			}
			break;
		case 7:
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(*uParam0))
			{
				if (TASK::GET_TASK_MOVE_NETWORK_EVENT(*uParam0, "AddLogFinished"))
				{
					uParam0->f_30 = 8;
				}
			}
			break;
		case 8:
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(*uParam0))
			{
				if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(*uParam0))
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam0, "CollapseLog");
					uParam0->f_24 = (uParam0->f_24 + (1f / 5f));
					uParam0->f_30 = 9;
				}
			}
			break;
		case 9:
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(*uParam0))
			{
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogBurnRate", fVar0);
				if (TASK::GET_TASK_MOVE_NETWORK_EVENT(*uParam0, "CollapseLogFinished"))
				{
					uParam0->f_21 = (uParam0->f_21 - (1f / 5f));
					uParam0->f_22 = (uParam0->f_22 - (0.5f / 5f));
					uParam0->f_25 = (uParam0->f_25 - (1f / 5f));
					uParam0->f_26 = (uParam0->f_26 - (1f / 5f));
					uParam0->f_27 = (uParam0->f_27 - (1.55f / 5f));
					uParam0->f_9 = (uParam0->f_9 - 1f);
					if (uParam0->f_9 == 4f)
					{
						uParam0->f_20 = 0.8f;
						uParam0->f_23 = 0.4f;
					}
					else if (uParam0->f_9 == 3f)
					{
						uParam0->f_20 = 0.7f;
						uParam0->f_23 = 0.3f;
					}
					else if (uParam0->f_9 == 2f)
					{
						uParam0->f_20 = 0.6f;
						uParam0->f_23 = 0.2f;
					}
					else if (uParam0->f_9 == 1f)
					{
						uParam0->f_20 = 0.5f;
						uParam0->f_23 = 0.1f;
					}
					uParam0->f_30 = 6;
				}
			}
			break;
		case 10:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogBurnRate", 0f);
			break;
	}
}

bool func_11(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_12()
{
	if (func_5())
	{
		if (func_22() == 5)
		{
			return 400f;
		}
		else
		{
			return 1600f;
		}
	}
	return 6400f;
}

int func_13(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_30(&(uParam0->f_49));
	if (!func_31(Global_34, 0))
	{
		return 0;
	}
	func_32(uParam0);
	if (uParam0->f_128 > 4 && uParam0->f_128 < 9)
	{
		func_33(0);
	}
	if (uParam0->f_128 > 3)
	{
		if (uParam0->f_128 != 9 && uParam0->f_128 != 4)
		{
			CAM::_0x18C3DFAC458783BB();
			func_34(uParam0);
		}
	}
	else if (uParam0->f_128 == 3)
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_34, 1))
		{
			iVar0 = func_35(uParam0);
			if (iVar0 >= 0 && iVar0 <= 3)
			{
				func_34(uParam0);
			}
		}
		else if (CAM::_0x927B810E43E99932(&(uParam0->f_18)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_18));
		}
	}
	if (func_16(uParam0->f_126, 65536))
	{
		if (func_36(Global_34, 1, 0, 0) != joaat("WEAPON_UNARMED"))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, joaat("HOLSTERWEAPON")))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
				func_6(&(uParam0->f_126), 65536);
			}
		}
	}
	switch (uParam0->f_128)
	{
		case 0:
			if (func_37(uParam0))
			{
				func_38(uParam0);
			}
			func_39(uParam0);
			func_40(&(uParam0->f_49), 4);
			func_41(uParam0, 1);
			break;
		case 1:
			if (func_37(uParam0))
			{
				func_38(uParam0);
			}
			if (func_42(uParam0))
			{
				func_41(uParam0, 2);
			}
			break;
		case 2:
			if (func_37(uParam0))
			{
				func_38(uParam0);
			}
			if (func_43(uParam0))
			{
				func_41(uParam0, 3);
			}
			break;
		case 3:
			if (func_37(uParam0))
			{
				AUDIO::_0x9428447DED71FC7E("Player_Campfire_Scenes");
				func_44(&(uParam0->f_49), 1, TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_34) != joaat("WORLD_PLAYER_MP_STEW_POT_DONATION"));
				func_45(&(uParam0->f_49), 2);
				func_6(&(uParam0->f_126), 32768);
				func_38(uParam0);
			}
			func_46(uParam0);
			if (bParam1)
			{
				return 1;
			}
			func_47(8);
			if ((MISC::GET_GAME_TIMER() - uParam0->f_148) >= 500)
			{
				if (func_48(uParam0))
				{
					func_17(&(uParam0->f_126), 131072);
				}
				else
				{
					func_6(&(uParam0->f_126), 131072);
				}
				uParam0->f_148 = MISC::GET_GAME_TIMER();
			}
			if (func_49(Global_34, uParam0->f_127, 1) > 36f)
			{
				func_50(uParam0);
				func_51(uParam0);
				func_52(8);
				func_41(uParam0, 4);
				if (CAM::_0x927B810E43E99932(&(uParam0->f_18)))
				{
					CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_18));
				}
				return 0;
			}
			if (func_16(uParam0->f_125, 64))
			{
				if (func_16(uParam0->f_125, 8192))
				{
					func_53(uParam0, 0);
					func_6(&(uParam0->f_125), 8192);
				}
				func_6(&(uParam0->f_125), 64);
			}
			else if (func_16(uParam0->f_125, 128))
			{
				if (!func_16(uParam0->f_125, 8192))
				{
					func_53(uParam0, 1);
					func_17(&(uParam0->f_125), 8192);
				}
				func_6(&(uParam0->f_125), 128);
			}
			uParam0->f_129 = func_35(uParam0);
			if (uParam0->f_129 != -1)
			{
				func_54();
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
				iVar1 = ITEMSET::CREATE_ITEMSET(true);
				if (func_55(&iVar1, uParam0->f_5[uParam0->f_129 /*3*/], 0.75f) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_34, 1))
				{
					TASK::CLEAR_PED_TASKS(Global_34, true, false);
				}
				ITEMSET::DESTROY_ITEMSET(iVar1);
			}
			if ((func_56(0) && uParam0->f_129 != -1) || ((func_16(uParam0->f_126, 8192) && func_57(64)) && func_57(16)))
			{
				uParam0->f_130 = func_58();
				func_41(uParam0, 5);
				if (func_57(16) || func_16(uParam0->f_126, 32768))
				{
					if (func_57(64))
					{
						func_52(16);
						func_45(&(uParam0->f_49), 2);
						func_59(uParam0, 0);
						func_41(uParam0, 7);
					}
				}
				func_51(uParam0);
			}
			else
			{
				func_60(uParam0);
				func_61(uParam0);
				if (!func_57(128) && func_16(uParam0->f_125, 8192))
				{
					if (func_16(uParam0->f_126, 131072) && func_49(Global_34, uParam0->f_127, 1) <= 9f)
					{
						uParam0->f_147 = func_62(HUD::_UIPROMPT_GET_GROUP_ACTIVE_PAGE(1754796591));
						HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(uParam0->f_127, func_63(func_16(uParam0->f_125, 16384), 1.75f, 3f), 1, 1, 1754796591, uParam0->f_147, 2);
					}
				}
				if ((func_57(16) && func_16(uParam0->f_126, 8192)) || func_16(uParam0->f_126, 32768))
				{
					if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_34))
					{
						if (uParam0->f_150 != -1 && (MISC::GET_GAME_TIMER() - uParam0->f_150) > 1000)
						{
							func_52(16);
							func_6(&(uParam0->f_126), 32768);
							uParam0->f_150 = -1;
							TASK::CLEAR_PED_TASKS(Global_34, true, false);
							uParam0->f_132 = 0;
						}
						else
						{
							uParam0->f_132 = 2;
							func_64(uParam0);
							uParam0->f_150 = MISC::GET_GAME_TIMER();
							if (func_57(64))
							{
								func_52(16);
								func_6(&(uParam0->f_126), 32768);
								func_45(&(uParam0->f_49), 2);
								func_59(uParam0, 0);
								func_41(uParam0, 7);
							}
						}
					}
					else if (uParam0->f_132 == 2)
					{
						if ((MISC::GET_GAME_TIMER() - uParam0->f_150) > 10000)
						{
							TASK::CLEAR_PED_TASKS(Global_34, true, false);
							func_52(16);
							func_6(&(uParam0->f_126), 32768);
							uParam0->f_150 = -1;
							uParam0->f_132 = 0;
						}
					}
				}
			}
			break;
		case 4:
			if (func_37(uParam0))
			{
				func_38(uParam0);
			}
			if (func_49(Global_34, uParam0->f_127, 1) <= 36f)
			{
				func_41(uParam0, 3);
			}
			break;
		case 5:
			if (func_37(uParam0))
			{
				AUDIO::_0x6339C1EA3979B5F7("idle", "Player_Campfire_Scenes");
				func_38(uParam0);
			}
			HUD::_0xC9CAEAEEC1256E54(2011163970);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_RADAR_MODE"), false);
			func_65();
			if (!func_56(1))
			{
				func_33(0);
				uParam0->f_131 = -1;
				func_66(uParam0, 0);
				TASK::_0xFDECCA06E8B81346(Global_34);
				func_41(uParam0, 3);
			}
			else
			{
				if (uParam0->f_129 != -1)
				{
					func_54();
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -996707397))
				{
					func_66(uParam0, 0);
				}
				else
				{
					func_66(uParam0, 1);
				}
				func_67(uParam0);
				if (func_68(uParam0, 0, 0, -1))
				{
					func_66(uParam0, 0);
					if (uParam0->f_132 == 2)
					{
						func_45(&(uParam0->f_49), 2);
						func_59(uParam0, 0);
						func_41(uParam0, 7);
					}
					else if (uParam0->f_132 == 0)
					{
						func_41(uParam0, 9);
					}
					else if (uParam0->f_132 == 11 || uParam0->f_132 == 10)
					{
						func_41(uParam0, 8);
					}
					else
					{
						func_41(uParam0, 6);
					}
				}
			}
			break;
		case 6:
			HUD::_0xC9CAEAEEC1256E54(2011163970);
			if (func_37(uParam0))
			{
				func_38(uParam0);
			}
			if (uParam0->f_129 != -1)
			{
				func_54();
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
			if (((ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 1070143458) && (MISC::GET_GAME_TIMER() - uParam0->f_149) > 2000) && !func_16(uParam0->f_126, 4)) && uParam0->f_132 != 1)
			{
				if (func_68(uParam0, 1, uParam0->f_132, uParam0->f_131))
				{
					if (uParam0->f_132 == 0)
					{
						func_41(uParam0, 9);
						func_50(uParam0);
						return 0;
					}
					else
					{
						func_66(uParam0, 0);
						uParam0->f_149 = MISC::GET_GAME_TIMER();
					}
				}
			}
			if (func_69(uParam0) || !TASK::PED_HAS_USE_SCENARIO_TASK(Global_34))
			{
				if ((uParam0->f_129 == uParam0->f_131 || uParam0->f_131 == -1) || uParam0->f_132 == 1)
				{
					if (uParam0->f_132 != 0)
					{
						uParam0->f_130 = uParam0->f_132;
					}
					if (uParam0->f_131 != -1)
					{
						uParam0->f_129 = uParam0->f_131;
					}
					else
					{
						uParam0->f_129 = func_35(uParam0);
					}
					uParam0->f_131 = -1;
					func_41(uParam0, 5);
				}
			}
			break;
		case 8:
			HUD::_0xC9CAEAEEC1256E54(2011163970);
			if (func_37(uParam0))
			{
				func_38(uParam0);
			}
			iVar2 = PED::_0xC22AA08A8ADB87D4(Global_34);
			if (func_70(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_149) > 500)
			{
				if (((iVar2 == joaat("WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR") || iVar2 == joaat("WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_MP_FEMALE_A")) || iVar2 == joaat("WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A")) || iVar2 == joaat("WORLD_PLAYER_CAMP_FIRE_SQUAT_FEMALE_A"))
				{
					if (uParam0->f_132 == 11)
					{
						if (INVENTORY::_0x3D10D7179D7034AF(func_71(0), joaat("DOCUMENT_PLAYER_JOURNAL"), 0))
						{
							INVENTORY::_0x6A564540FAC12211(func_71(0), joaat("DOCUMENT_PLAYER_JOURNAL"));
						}
						func_72(joaat("DOCUMENT_PLAYER_JOURNAL"), 0, 0, 0, 1, 0, 0);
						uParam0->f_149 = MISC::GET_GAME_TIMER();
						uParam0->f_132 = 0;
					}
					else if (uParam0->f_132 == 10)
					{
						func_72(joaat("CUSTOM_SATCHEL"), 0, 0, 0, 1, 0, 0);
						uParam0->f_149 = MISC::GET_GAME_TIMER();
						uParam0->f_132 = 0;
					}
					else
					{
						uParam0->f_132 = 0;
						ATTRIBUTE::_0xD962F8579D702DB5();
						func_29(&(uParam0->f_157));
						func_41(uParam0, 5);
					}
				}
				else if (iVar2 == joaat("WORLD_PLAYER_CAMP_FIRE_SIT_MALE_A") || iVar2 == joaat("WORLD_PLAYER_CAMP_FIRE_SIT_FEMALE_A"))
				{
					func_73(joaat("SIT_TRANS_KNEEL"), 0.5f);
					uParam0->f_149 = MISC::GET_GAME_TIMER();
				}
				else if (iVar2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE") || iVar2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"))
				{
					func_73(joaat("KNIFE1_TRANS_KNEEL1"), 2f);
					uParam0->f_149 = MISC::GET_GAME_TIMER();
				}
				else if (iVar2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP") || iVar2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP_MP_FEMALE_A"))
				{
					func_73(joaat("KNEELFIRECRAFTCUP_TRANS_KNEEL1"), 2f);
					uParam0->f_149 = MISC::GET_GAME_TIMER();
				}
			}
			if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_34))
			{
				ATTRIBUTE::_0xD962F8579D702DB5();
				uParam0->f_132 = 0;
				func_41(uParam0, 5);
			}
			break;
		case 7:
			HUD::_0xC9CAEAEEC1256E54(2011163970);
			if (func_37(uParam0))
			{
				func_74(joaat("CONSUMABLE_COFFEE"), 1, 1, -142743235);
				func_38(uParam0);
			}
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			func_54();
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			if ((((func_75(uParam0, uParam0->f_130) || !TASK::PED_HAS_USE_SCENARIO_TASK(Global_34)) || TASK::_0x916B8E075ABC8B4E(Global_34, 1)) || FIRE::IS_ENTITY_ON_FIRE(Global_34)) || TASK::_0x0C3CB2E600C8977D(Global_34, 0))
			{
				AUDIO::_STOP_SOUND_WITH_NAME("cook_meat_sizzle_loop", "Player_Campfire_Sounds");
				func_74(joaat("CONSUMABLE_COFFEE"), 1, 1, -142743235);
				func_44(&(uParam0->f_49), 1, 1);
				ATTRIBUTE::_0xD962F8579D702DB5();
				if (((!TASK::PED_HAS_USE_SCENARIO_TASK(Global_34) || TASK::_0x916B8E075ABC8B4E(Global_34, 1)) || FIRE::IS_ENTITY_ON_FIRE(Global_34)) || TASK::_0x0C3CB2E600C8977D(Global_34, 0))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_133))
					{
						OBJECT::DELETE_OBJECT(&(uParam0->f_133));
					}
					if (((func_76(0) && !func_77()) && !func_16(uParam0->f_126, 256)) && uParam0->f_49.f_61 != joaat("CONSUMABLE_COFFEE"))
					{
						if (((((((uParam0->f_124 == 3 || uParam0->f_124 == 4) || uParam0->f_124 == 11) || uParam0->f_124 == 16) || uParam0->f_124 == 7) || uParam0->f_124 == 6) || uParam0->f_124 == 14) || uParam0->f_124 == 15)
						{
							func_78(uParam0->f_49.f_61, 1, 1, 1, 0);
							func_17(&(uParam0->f_126), 256);
						}
					}
					if (FIRE::IS_ENTITY_ON_FIRE(Global_34))
					{
						TASK::CLEAR_PED_TASKS(Global_34, true, false);
					}
				}
				uParam0->f_130 = 6;
				uParam0->f_132 = 6;
				func_29(&(uParam0->f_157));
				func_41(uParam0, 5);
			}
			break;
		case 9:
			if (func_37(uParam0))
			{
				func_38(uParam0);
			}
			if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_34))
			{
				ATTRIBUTE::_0xD962F8579D702DB5();
				func_44(&(uParam0->f_49), 1, 1);
				func_41(uParam0, 3);
			}
			else if (!TASK::_0x0C3CB2E600C8977D(Global_34, 1))
			{
				func_79(uParam0);
			}
			break;
		case 10:
			return 1;
	}
	return 0;
}

void func_14(var uParam0, bool bParam1)
{
	func_50(uParam0);
	func_80(uParam0);
	func_81(uParam0);
	func_51(uParam0);
	if (CAM::_0x927B810E43E99932(&(uParam0->f_18)))
	{
		CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_18));
	}
	if (bParam1)
	{
		func_82(uParam0);
	}
	uParam0->f_150 = -1;
	func_6(&(uParam0->f_126), 32768);
	func_44(&(uParam0->f_49), 0, 1);
}

int func_15(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_83(Global_1940122[iVar0 /*2*/], vParam0))
		{
			return Global_1940122[iVar0 /*2*/].f_1;
		}
		iVar0++;
	}
	return 0;
}

bool func_16(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_17(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_18(int iParam0, bool bParam1, bool bParam2)
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
		if (func_84())
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
	if (iParam0 == 0 && func_86(func_85(0)))
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
	switch (func_87(func_85(0)))
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

bool func_19()
{
	return Global_1913694.f_1578;
}

void func_20(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	uParam0->f_165.f_5 = iParam1;
	uParam0->f_165.f_2 = iParam2;
	uParam0->f_165.f_3 = iParam3;
	uParam0->f_165.f_2 = iParam4;
	uParam0->f_165.f_2 = iParam5;
	uParam0->f_165.f_2 = iParam6;
}

float func_21(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_22()
{
	return Global_1893587.f_2;
}

bool func_23(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_88(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_89(iParam0);
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
			if (!func_90(iParam0, 1))
			{
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_91(iParam0))
			{
				return true;
			}
			break;
	}
	return func_92(iParam0, 0, 0, 0) >= iParam1;
}

void func_24(var uParam0)
{
	bool bVar0;

	bVar0 = GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_29);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		OBJECT::_SET_OBJECT_BURN_SPEED(*uParam0, (0.65f + (uParam0->f_11 * 0.35f)), (0.65f + (uParam0->f_11 * 0.35f)));
		if (bVar0)
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Smoke", uParam0->f_17, true);
		}
		if (uParam0->f_1)
		{
			OBJECT::_SET_OBJECT_BURN_INTENSITY(*uParam0, (uParam0->f_12 * 0.5f));
			if (bVar0)
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Flames", uParam0->f_18, true);
			}
		}
	}
	if (uParam0->f_12 != uParam0->f_21 || uParam0->f_35)
	{
		if (uParam0->f_35)
		{
			uParam0->f_12 = uParam0->f_21;
		}
		else
		{
			uParam0->f_12 = (((uParam0->f_12 * 15f) + uParam0->f_21) / 16f);
		}
		if (MISC::ABSF((uParam0->f_12 - uParam0->f_21)) < 0.0025f)
		{
			uParam0->f_12 = uParam0->f_21;
			OBJECT::_SET_OBJECT_BURN_INTENSITY(*uParam0, (uParam0->f_12 * 0.5f));
		}
	}
	if (uParam0->f_13 != uParam0->f_22 || uParam0->f_35)
	{
		if (uParam0->f_35)
		{
			uParam0->f_13 = uParam0->f_22;
		}
		else
		{
			uParam0->f_13 = (((uParam0->f_13 * 12f) + uParam0->f_22) / 13f);
		}
		if (MISC::ABSF((uParam0->f_13 - uParam0->f_22)) < 0.0025f)
		{
			uParam0->f_13 = uParam0->f_22;
			OBJECT::_SET_OBJECT_BURN_OPACITY(*uParam0, uParam0->f_13);
		}
	}
	if (uParam0->f_14 != uParam0->f_23 || uParam0->f_35)
	{
		if (uParam0->f_35)
		{
			uParam0->f_14 = uParam0->f_23;
		}
		else
		{
			uParam0->f_14 = (((uParam0->f_14 * 14f) + uParam0->f_23) / 15f);
		}
		if (MISC::ABSF((uParam0->f_14 - uParam0->f_23)) < 0.005f && !uParam0->f_35)
		{
			uParam0->f_14 = uParam0->f_23;
		}
		else if (uParam0->f_14 != uParam0->f_23 || uParam0->f_35)
		{
			OBJECT::_0xF49574E2332A8F06(*uParam0, (uParam0->f_14 * 0.33f));
		}
	}
	if (uParam0->f_15 != uParam0->f_24 || uParam0->f_35)
	{
		if (uParam0->f_35)
		{
			uParam0->f_15 = uParam0->f_24;
		}
		else
		{
			uParam0->f_15 = (((uParam0->f_15 * 19f) + uParam0->f_24) / 20f);
		}
		if (MISC::ABSF((uParam0->f_15 - uParam0->f_24)) < 0.0025f)
		{
			uParam0->f_15 = uParam0->f_24;
			OBJECT::_SET_OBJECT_BURN_LEVEL(*uParam0, ((uParam0->f_15 * 0.9f) + 0.1f), true);
		}
	}
	if (uParam0->f_4)
	{
		if (bVar0)
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Under", uParam0->f_16, true);
		}
	}
	else if ((uParam0->f_16 != uParam0->f_25 || uParam0->f_35) && bVar0)
	{
		if (uParam0->f_35)
		{
			uParam0->f_16 = uParam0->f_25;
		}
		else
		{
			uParam0->f_16 = (((uParam0->f_16 * 15f) + uParam0->f_25) / 16f);
		}
		if (MISC::ABSF((uParam0->f_16 - uParam0->f_25)) < 0.0025f)
		{
			uParam0->f_16 = uParam0->f_25;
			if (bVar0)
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Embers", uParam0->f_16, false);
			}
		}
	}
	if (uParam0->f_4)
	{
		if (bVar0)
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Under", uParam0->f_17, true);
		}
	}
	else if ((uParam0->f_17 != uParam0->f_26 || uParam0->f_35) && bVar0)
	{
		if (uParam0->f_35)
		{
			uParam0->f_17 = uParam0->f_26;
		}
		else
		{
			uParam0->f_17 = (((uParam0->f_17 * 15f) + uParam0->f_26) / 16f);
		}
		if (MISC::ABSF((uParam0->f_17 - uParam0->f_26)) < 0.0025f)
		{
			uParam0->f_17 = uParam0->f_26;
			if (bVar0)
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Smoke", uParam0->f_17, true);
			}
		}
	}
	if ((uParam0->f_18 != uParam0->f_27 || uParam0->f_35) && bVar0)
	{
		if (uParam0->f_35)
		{
			uParam0->f_18 = uParam0->f_27;
		}
		else
		{
			uParam0->f_18 = (((uParam0->f_18 * 19f) + uParam0->f_27) / 20f);
		}
		if (MISC::ABSF((uParam0->f_18 - uParam0->f_27)) < 0.0025f)
		{
			uParam0->f_18 = uParam0->f_27;
			if (bVar0)
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Flames", uParam0->f_18, true);
			}
		}
	}
	if ((uParam0->f_19 != uParam0->f_28 || uParam0->f_35) && bVar0)
	{
		if (uParam0->f_35)
		{
			uParam0->f_19 = uParam0->f_28;
		}
		else
		{
			uParam0->f_19 = (((uParam0->f_19 * 19f) + uParam0->f_28) / 20f);
		}
		if (MISC::ABSF((uParam0->f_19 - uParam0->f_28)) < 0.0025f)
		{
			uParam0->f_19 = uParam0->f_28;
			if (bVar0)
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Smolder", uParam0->f_19, true);
			}
		}
	}
	if (uParam0->f_18 < 0f)
	{
		uParam0->f_18 = 0f;
	}
	if (uParam0->f_18 > 1f)
	{
		uParam0->f_18 = 1f;
	}
	if (uParam0->f_12 < 0f)
	{
		uParam0->f_12 = 0f;
	}
	if (uParam0->f_12 > 1f)
	{
		uParam0->f_12 = 1f;
	}
	if (uParam0->f_11 < 0.5f)
	{
		uParam0->f_11 = 0.5f;
	}
	if (uParam0->f_11 > 1f)
	{
		uParam0->f_11 = 1f;
	}
	if (bVar0)
	{
		uParam0->f_35 = 0;
	}
}

void func_25(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			uParam0->f_20 = 0.9f;
			uParam0->f_21 = 1f;
			uParam0->f_22 = 1f;
			uParam0->f_23 = 0.9f;
			uParam0->f_24 = 0.99f;
			uParam0->f_25 = 1f;
			uParam0->f_26 = 0.75f;
			uParam0->f_27 = 1f;
			uParam0->f_28 = 0f;
			break;
		case 1:
			uParam0->f_20 = 0.66f;
			uParam0->f_21 = 0.66f;
			uParam0->f_22 = 0.6f;
			uParam0->f_23 = 0.5f;
			uParam0->f_24 = 0.88f;
			uParam0->f_25 = 0.66f;
			uParam0->f_26 = 0.66f;
			uParam0->f_27 = 0.66f;
			uParam0->f_28 = 0f;
			break;
		case 2:
			uParam0->f_20 = 0.25f;
			uParam0->f_21 = 0.25f;
			uParam0->f_22 = 0.25f;
			uParam0->f_23 = 0.25f;
			uParam0->f_24 = 0.77f;
			uParam0->f_25 = 0.2f;
			uParam0->f_26 = 0.5f;
			uParam0->f_27 = 0.2f;
			uParam0->f_28 = 0f;
			break;
		case 3:
			uParam0->f_20 = 0.2f;
			uParam0->f_21 = 0.1f;
			uParam0->f_22 = 0.22f;
			uParam0->f_23 = 0.1f;
			uParam0->f_24 = 0.66f;
			uParam0->f_25 = 0.1f;
			uParam0->f_26 = 0.5f;
			uParam0->f_27 = 0.1f;
			uParam0->f_28 = 0f;
			break;
		case 4:
			uParam0->f_20 = 0.15f;
			uParam0->f_21 = 0.01f;
			uParam0->f_22 = 0.2f;
			uParam0->f_23 = 0.018f;
			uParam0->f_24 = 0.55f;
			uParam0->f_25 = 0.005f;
			uParam0->f_26 = 0.25f;
			uParam0->f_27 = 0.01f;
			uParam0->f_28 = 0.6f;
			break;
		case 5:
			uParam0->f_20 = 0f;
			uParam0->f_21 = 0f;
			uParam0->f_22 = 1f;
			uParam0->f_23 = 0f;
			uParam0->f_24 = 1f;
			uParam0->f_25 = 0.2f;
			uParam0->f_26 = 0.66f;
			uParam0->f_27 = 0f;
			uParam0->f_28 = 1f;
			break;
		case 6:
			uParam0->f_20 = 0f;
			uParam0->f_21 = 0f;
			uParam0->f_22 = 0f;
			uParam0->f_23 = 0f;
			uParam0->f_24 = 0f;
			uParam0->f_25 = 0f;
			uParam0->f_26 = 0f;
			uParam0->f_27 = 0f;
			uParam0->f_28 = 0f;
			break;
		case 7:
			uParam0->f_20 = 0.4f;
			uParam0->f_21 = 0.2f;
			uParam0->f_22 = 0.2f;
			uParam0->f_23 = 0.02f;
			uParam0->f_24 = 0f;
			uParam0->f_25 = 0f;
			uParam0->f_26 = 0f;
			uParam0->f_27 = 0.01f;
			uParam0->f_28 = 0f;
			break;
		case 8:
			uParam0->f_20 = 0f;
			uParam0->f_21 = 0.06f;
			uParam0->f_22 = 0.1f;
			uParam0->f_23 = 0.01f;
			uParam0->f_24 = 0f;
			uParam0->f_25 = 0f;
			uParam0->f_26 = 0f;
			uParam0->f_27 = 0f;
			uParam0->f_28 = 0f;
			break;
	}
}

float func_26()
{
	if (func_11(Global_1940258, 4194304) || func_22() == 5)
	{
		return 1f;
	}
	return 0.5f;
}

bool func_27(var uParam0, float fParam1)
{
	if (!func_93(uParam0))
	{
		return false;
	}
	if (func_94(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_28(var uParam0)
{
	int iVar0;

	if (!uParam0->f_1)
	{
		iVar0 = CLOCK::GET_CLOCK_HOURS();
		if (iVar0 >= 2 && iVar0 < 4)
		{
			func_25(uParam0, 1);
		}
		else if (iVar0 >= 4 && iVar0 < 6)
		{
			func_25(uParam0, 2);
		}
		else if (iVar0 >= 6 && iVar0 < 12)
		{
			func_25(uParam0, 3);
		}
		else if (iVar0 >= 12 && iVar0 < 17)
		{
			func_25(uParam0, 2);
		}
		else if (iVar0 >= 17 && iVar0 < 19)
		{
			func_25(uParam0, 1);
		}
		else
		{
			func_25(uParam0, 0);
		}
		func_29(&(uParam0->f_31));
	}
}

void func_29(var uParam0)
{
	func_95(uParam0, 0f);
}

void func_30(var uParam0)
{
	if (uParam0->f_64)
	{
		if (func_96(&(uParam0->f_63), &(uParam0->f_64)))
		{
			uParam0->f_64 = 0;
		}
	}
	if (uParam0->f_66)
	{
		if (func_96(&(uParam0->f_65), &(uParam0->f_66)))
		{
			uParam0->f_66 = 0;
		}
	}
	if (uParam0->f_68)
	{
		if (func_96(&(uParam0->f_67), &(uParam0->f_68)))
		{
			uParam0->f_68 = 0;
		}
	}
}

bool func_31(int iParam0, int iParam1)
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
	if (func_97(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_97(iVar0, 2))
	{
		if (PED::_IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_97(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_97(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_97(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_97(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return false;
		}
	}
	if (func_97(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_97(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_32(var uParam0)
{
	int iVar0;

	if (func_57(16) || uParam0->f_128 == 7)
	{
		iVar0 = func_35(uParam0);
		if (iVar0 != -1)
		{
			if (!func_98(uParam0->f_135[6]))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
		}
	}
}

void func_33(bool bParam0)
{
	if (bParam0)
	{
		func_99(4);
	}
	func_99(2);
	MISC::SET_BIT(&(Global_1957959.f_1), 0);
}

void func_34(var uParam0)
{
	vector3 vVar0;
	bool bVar25;
	bool bVar26;

	vVar0.f_4 = -1;
	vVar0.f_8 = 2;
	vVar0.f_9 = 1;
	vVar0.f_10 = 1;
	vVar0.f_11 = 1;
	vVar0.f_13 = 1;
	vVar0.f_14 = 2;
	vVar0.f_15 = 2;
	vVar0.f_16 = 3;
	vVar0.f_19 = 3;
	vVar0.f_20 = 1;
	vVar0.f_21 = 3;
	vVar0.f_22 = 3;
	vVar0.f_8 = 0;
	vVar0.f_14 = 0;
	vVar0.f_3 = uParam0->f_127;
	vVar0 = { 0f, 0f, 0.5f };
	_NAMESPACE29::_0x66F9EB44342BB4C5(Global_34, &vVar0);
	bVar25 = false;
	bVar26 = false;
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_34, 0))
	{
		bVar26 = true;
	}
	if (!bVar26)
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_34, 1))
		{
			bVar25 = true;
		}
	}
	if (bVar26 || (bVar25 && ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -1206250122)))
	{
		if (CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_18)))
		{
			if (!CAM::_0x927B810E43E99932(&(uParam0->f_18)))
			{
				CAM::_0xB8B207C34285E978(&(uParam0->f_18));
			}
		}
	}
}

int func_35(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_34, false);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar0) && !TASK::_0x0C3CB2E600C8977D(Global_34, 1))
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (TASK::_DOES_SCENARIO_POINT_EXIST((*uParam0)[iVar1]))
			{
				if (iVar0 == (*uParam0)[iVar1])
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_36(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_37(var uParam0)
{
	return func_16(uParam0->f_126, 512);
}

void func_38(var uParam0)
{
	func_6(&(uParam0->f_126), 512);
}

void func_39(var uParam0)
{
	StringCopy(&(uParam0->f_18), "restbyfire_orbit_cam", 64);
	StringCopy(&(uParam0->f_18.f_8), "RESTBYFIRE_ORBIT_REQUEST", 64);
}

void func_40(var uParam0, int iParam1)
{
	func_17(uParam0, iParam1);
}

void func_41(var uParam0, int iParam1)
{
	func_17(&(uParam0->f_126), 512);
	uParam0->f_128 = iParam1;
}

bool func_42(var uParam0)
{
	return true;
}

bool func_43(var uParam0)
{
	vector3 vVar0;
	float fVar3;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_127))
	{
		if (func_16(uParam0->f_125, 512))
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_127, -0.966f, 0.203f, 0.5f) };
			uParam0->f_5[0 /*3*/] = { vVar0 + Vector(1f, 0f, 0f) };
			fVar3 = (ENTITY::GET_ENTITY_HEADING(uParam0->f_127) + -99.171f);
			func_100(&vVar0, 1, 10, 0, 0);
			(*uParam0)[0] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL1"), vVar0, fVar3, 0, 0, 0);
		}
		if (func_16(uParam0->f_125, 1024))
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_127, -0.212f, -1.045f, 0.5f) };
			uParam0->f_5[1 /*3*/] = { vVar0 + Vector(1f, 0f, 0f) };
			fVar3 = (ENTITY::GET_ENTITY_HEADING(uParam0->f_127) + -11.405f);
			func_100(&vVar0, 1, 10, 0, 0);
			(*uParam0)[1] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL2"), vVar0, fVar3, 0, 0, 0);
		}
		if (func_16(uParam0->f_125, 2048))
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_127, 1.025f, 0.043f, 0.5f) };
			uParam0->f_5[2 /*3*/] = { vVar0 + Vector(1f, 0f, 0f) };
			fVar3 = (ENTITY::GET_ENTITY_HEADING(uParam0->f_127) + 91.78f);
			func_100(&vVar0, 1, 10, 0, 0);
			(*uParam0)[2] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL3"), vVar0, fVar3, 0, 0, 0);
		}
		if (func_16(uParam0->f_125, 4096))
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_127, 0.249f, 1.05f, 0.5f) };
			uParam0->f_5[3 /*3*/] = { vVar0 + Vector(1f, 0f, 0f) };
			fVar3 = (ENTITY::GET_ENTITY_HEADING(uParam0->f_127) + 164.29f);
			func_100(&vVar0, 1, 10, 0, 0);
			(*uParam0)[3] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL4"), vVar0, fVar3, 0, 0, 0);
		}
		return true;
	}
	return false;
}

void func_44(var uParam0, bool bParam1, bool bParam2)
{
	func_101(uParam0);
	if (bParam2)
	{
		func_102(uParam0, 0);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_28);
	}
	if (func_103())
	{
		func_104(0);
	}
	if (bParam1)
	{
		func_105(uParam0);
		return;
	}
	if (HUD::_DOES_TEXT_DATABASE_EXIST(&(uParam0->f_20)))
	{
		HUD::_TEXT_DATABASE_DELETE(&(uParam0->f_20));
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_48))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_48);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_49))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_49);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_50))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_50);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_51))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_51);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_52))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_52);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_53))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_53);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_54))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_54);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_55))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_55);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_56))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_56);
	}
	func_96(&(uParam0->f_63), &(uParam0->f_64));
	func_96(&(uParam0->f_65), &(uParam0->f_66));
	func_96(&(uParam0->f_67), &(uParam0->f_68));
	TXD::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("satchel_textures");
	Global_1913694.f_1576 = 0;
	if (func_106(uParam0, 2))
	{
		TASK::CLEAR_PED_TASKS(Global_34, true, false);
	}
	if (func_107() == -1)
	{
		func_45(uParam0, 18);
	}
	else
	{
		if (uParam0->f_10 == 11)
		{
			if (uParam0->f_23 == -1)
			{
				func_108(uParam0->f_61, uParam0->f_62, 1, uParam0->f_11);
				func_109(uParam0->f_61, uParam0->f_22);
			}
		}
		if (!func_76(0) || func_77())
		{
			if (uParam0->f_27 > 0 && func_88(uParam0->f_61, 0))
			{
				uParam0->f_23 = func_108(uParam0->f_61, uParam0->f_62, uParam0->f_27, uParam0->f_11);
				if (uParam0->f_11 == 2133510819)
				{
					func_111(func_110(joaat("MADE"), -444296448), uParam0->f_27);
				}
				uParam0->f_27 = 0;
			}
		}
		uParam0->f_23 = -1;
		func_45(uParam0, 0);
	}
}

void func_45(var uParam0, int iParam1)
{
	if (uParam0->f_10 != iParam1)
	{
		uParam0->f_10 = iParam1;
		func_112(uParam0);
	}
}

void func_46(var uParam0)
{
	if (!CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_18)))
	{
		if (!CAM::_0xC285FD21294A1C49(&(uParam0->f_18)))
		{
			CAM::_0x6A4D224FC7643941(&(uParam0->f_18));
		}
	}
}

void func_47(int iParam0)
{
	if (!func_57(iParam0))
	{
		Global_1958000 = (Global_1958000 || iParam0);
	}
}

bool func_48(var uParam0)
{
	int iVar0;
	int iVar1;

	func_6(&(uParam0->f_126), 1024);
	if (PED::_IS_PED_CARRYING(Global_34))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_34);
		if (ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			if (ENTITY::_0x9A100F1CF4546629(iVar1))
			{
				func_17(&(uParam0->f_126), 1024);
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	if (func_57(32) || !func_16(uParam0->f_125, 8192))
	{
		return false;
	}
	if (func_113(Global_34, 0))
	{
		return false;
	}
	if (PED::_GET_PED_BLACKBOARD_BOOL(Global_34, "inInspectionMode"))
	{
		return false;
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_34, 227, true))
	{
		return false;
	}
	if (func_114(Global_34))
	{
		return false;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_34))
	{
		return false;
	}
	if (TASK::_0xD04241BBF6D03A5E(Global_34) != 0)
	{
		return false;
	}
	if ((func_115(Global_34) || func_116(Global_34)) || func_117(Global_34))
	{
		return false;
	}
	if (!func_118(Global_34, uParam0->f_127, -0.5f))
	{
		return false;
	}
	if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(ENTITY::GET_ENTITY_COORDS(uParam0->f_127, true, false), 1.5f) > 2)
	{
		return false;
	}
	if (func_107() == -1)
	{
		if (func_119())
		{
			return false;
		}
	}
	else if (func_119() && !((Global_1915715.f_20241 == 28 || Global_1915715.f_20241 == 27) || Global_1915715.f_20241 == 29))
	{
		return false;
	}
	if (func_120(uParam0) == -1)
	{
		return false;
	}
	return true;
}

float func_49(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	}
	return func_21(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

void func_50(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_98(uParam0->f_135[iVar0]))
		{
			func_121(&(uParam0->f_135[iVar0]), 1, 1);
		}
		iVar0++;
	}
}

void func_51(var uParam0)
{
	func_121(&(uParam0->f_146), 1, 1);
	func_121(&(uParam0->f_145), 1, 1);
}

void func_52(int iParam0)
{
	if (func_57(iParam0))
	{
		Global_1958000 = (Global_1958000 - (Global_1958000 && iParam0));
	}
}

void func_53(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST((*uParam0)[iVar0]))
		{
			TASK::_SET_SCENARIO_POINT_FLAG((*uParam0)[iVar0], 8, !bParam1);
		}
		iVar0++;
	}
}

void func_54()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
}

bool func_55(int iParam0, vector3 vParam1, float fParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER(vParam1, 0f, 0f, 0f, fParam4, fParam4, 1f);
	if (func_122(&vParam1, 1073741824 /* Float: 2f */))
	{
		func_123(iVar0);
		return true;
	}
	iVar1 = ENTITY::_0x84CCF9A12942C83D(iVar0, *iParam0, 1, 1, 0, 0);
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar3 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, *iParam0);
		iVar4 = MISC::_GET_ENTITY_FROM_ITEM(iVar3);
		if (ENTITY::IS_ENTITY_A_PED(iVar4))
		{
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar4);
			if (iVar5 != Global_34)
			{
				if (PED::_GET_CARRIER_AS_PED(iVar5) != Global_34)
				{
					func_123(iVar0);
					return true;
				}
			}
		}
		iVar2++;
	}
	func_123(iVar0);
	return false;
}

bool func_56(bool bParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_34) && !TASK::_0x0C3CB2E600C8977D(Global_34, 1))
		{
			if (((TASK::_0x02EBBB3989B7E695(Global_34) || (bParam0 && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_34, 0))) || (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Global_34) && TASK::GET_TASK_MOVE_NETWORK_EVENT(Global_34, "SCENARIO_POINT_TRANS_COMPLETE"))) || (func_57(16) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -1208591336)))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_57(int iParam0)
{
	return (Global_1958000 && iParam0) != 0;
}

int func_58()
{
	int iVar0;

	iVar0 = PED::_0xC22AA08A8ADB87D4(Global_34);
	switch (iVar0)
	{
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT"):
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_MP_FEMALE_A"):
			return 3;
		case joaat("WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR"):
		case joaat("WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_MP_FEMALE_A"):
			return 6;
		case joaat("WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A"):
		case joaat("WORLD_PLAYER_CAMP_FIRE_SQUAT_FEMALE_A"):
			return 8;
		case joaat("WORLD_PLAYER_CAMP_FIRE_SIT_MALE_A"):
		case joaat("WORLD_PLAYER_CAMP_FIRE_SIT_FEMALE_A"):
			return 7;
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COFFEE_ARTHUR"):
			return 1;
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_POST_FIRE_CRAFT_MP_FEMALE_A"):
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_POST_FIRE_CRAFT"):
			return 4;
		default:
			break;
	}
	return 0;
}

void func_59(var uParam0, int iParam1)
{
	uParam0->f_124 = iParam1;
}

void func_60(var uParam0)
{
	if (((!TASK::PED_HAS_USE_SCENARIO_TASK(Global_34) && func_16(uParam0->f_126, 131072)) && !PED::_IS_PED_CARRYING(Global_34)) && !WEAPON::_0x0DE0944ECCB3DF5D(Global_34))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_127))
		{
			if (!func_98(uParam0->f_145))
			{
				uParam0->f_145 = func_124("REST_BY_FIRE", joaat("INPUT_CONTEXT_Y"), uParam0->f_127, 1, 1, 1, 0, 5, 7f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0, 0);
			}
			else if (func_125(uParam0->f_145, 1))
			{
				func_64(uParam0);
				func_51(uParam0);
				func_6(&(uParam0->f_126), 131072);
			}
		}
	}
	else
	{
		func_126(uParam0);
	}
	if (func_98(uParam0->f_145))
	{
		func_127(uParam0->f_145, 1754796591, 0, 1);
	}
}

void func_61(var uParam0)
{
	if (func_16(uParam0->f_126, 131072))
	{
		if (!func_98(uParam0->f_146))
		{
			if (func_128(uParam0))
			{
				uParam0->f_146 = func_124("CRAFT_COOK", joaat("INPUT_CONTEXT_X"), uParam0->f_127, 1, 1, 1, 0, 5, 7f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0, 0);
				MISC::SET_BIT(&(Global_1957959.f_1), 2);
				MISC::SET_BIT(&(Global_1957959.f_1), 3);
				if (func_16(uParam0->f_126, 1024))
				{
					if (func_129(uParam0))
					{
						func_130(uParam0->f_146, "CAMP_REC_COOK", 1);
					}
					else
					{
						MISC::CLEAR_BIT(&(Global_1957959.f_1), 2);
						func_131(uParam0->f_146, 0, 1, 1);
					}
				}
			}
		}
		else if (((((TASK::PED_HAS_USE_SCENARIO_TASK(Global_34) || WEAPON::_0x0DE0944ECCB3DF5D(Global_34)) || func_132(joaat("NET_ADVANCED_CAMERA"))) || func_132(joaat("CAMERA_ITEM"))) || func_133()) || Global_1940258.f_38 == joaat("WEAPON_KIT_CAMERA_ADVANCED"))
		{
			func_51(uParam0);
			func_6(&(uParam0->f_126), 131072);
		}
		else if (func_57(16) || func_16(uParam0->f_126, 32768))
		{
			func_52(16);
			func_17(&(uParam0->f_126), 32768);
			func_51(uParam0);
			func_6(&(uParam0->f_126), 131072);
		}
		else
		{
			if (func_16(uParam0->f_126, 1024) != func_16(uParam0->f_126, 2048))
			{
				if (func_16(uParam0->f_126, 1024))
				{
					if (func_129(uParam0) && !func_98(Global_1940144.f_85))
					{
						func_130(uParam0->f_146, "CAMP_REC_COOK", 1);
						func_131(uParam0->f_146, 1, 1, 1);
						func_17(&(uParam0->f_126), 4096);
					}
					else
					{
						func_121(&(uParam0->f_146), 1, 1);
						uParam0->f_146 = func_124("CRAFT_COOK", joaat("INPUT_CONTEXT_X"), uParam0->f_127, 0, 1, 1, 0, 5, 7f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0, 0);
						func_131(uParam0->f_146, 0, 1, 1);
						func_6(&(uParam0->f_126), 4096);
					}
				}
				else
				{
					MISC::SET_BIT(&(Global_1957959.f_1), 2);
					MISC::SET_BIT(&(Global_1957959.f_1), 3);
					func_121(&(uParam0->f_146), 1, 1);
					uParam0->f_146 = func_124("CRAFT_COOK", joaat("INPUT_CONTEXT_X"), uParam0->f_127, 0, 1, 1, 0, 5, 7f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0, 0);
				}
				if (func_16(uParam0->f_126, 1024))
				{
					func_17(&(uParam0->f_126), 2048);
				}
				else
				{
					func_6(&(uParam0->f_126), 2048);
				}
			}
			if (func_125(uParam0->f_146, 1))
			{
				func_17(&(uParam0->f_126), 32768);
				MISC::CLEAR_BIT(&(Global_1957959.f_1), 2);
				func_51(uParam0);
				func_6(&(uParam0->f_126), 131072);
				if (func_16(uParam0->f_126, 1024))
				{
					if (func_129(uParam0))
					{
						func_17(&(uParam0->f_126), 4096);
					}
					else
					{
						func_6(&(uParam0->f_126), 4096);
					}
				}
				if (func_16(uParam0->f_126, 1024) && func_16(uParam0->f_126, 4096))
				{
					func_47(64);
				}
			}
		}
	}
	else
	{
		func_121(&(uParam0->f_146), 1, 1);
	}
	if (func_98(uParam0->f_146))
	{
		func_127(uParam0->f_146, 1754796591, 0, 1);
	}
}

char* func_62(int iParam0)
{
	return "CAMPFIRE";
}

float func_63(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_64(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = func_120(uParam0);
	if (iVar0 == -1)
	{
		func_52(64);
		func_52(16);
		func_6(&(uParam0->f_126), 32768);
		uParam0->f_132 = 0;
		return;
	}
	if (func_57(64))
	{
		func_134(Global_34, 1, 1);
		switch (iVar0)
		{
			case 0:
			case 3:
				uParam0->f_132 = 2;
				TASK::_TASK_USE_SCENARIO_POINT(Global_34, (*uParam0)[0], "WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE", 0, false, true, 0, false, -1f, false);
				uParam0->f_130 = 6;
				uParam0->f_129 = 0;
				break;
			case 1:
			case 2:
				uParam0->f_132 = 2;
				TASK::_TASK_USE_SCENARIO_POINT(Global_34, (*uParam0)[1], "WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE", 0, false, true, 0, false, -1f, false);
				uParam0->f_130 = 6;
				uParam0->f_129 = 1;
				break;
		}
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	else
	{
		switch (iVar0)
		{
			case 0:
			case 1:
			case 2:
			case 3:
				iVar1 = 0;
				if (((func_57(16) || func_16(uParam0->f_126, 32768)) || func_135(684307653, &iVar1)) || func_135(562107429, &iVar1))
				{
					bVar2 = true;
					if (func_136(0) || func_136(1))
					{
						bVar2 = false;
					}
					if (bVar2)
					{
						PED::_0xD65FDC686A031C83(Global_34, joaat("DYNAMIC_KNEEL_QUICK_ENTER"), 3f);
					}
					if (PED::IS_PED_MALE(Global_34))
					{
						TASK::_TASK_USE_SCENARIO_POINT(Global_34, (*uParam0)[iVar0], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR", 0, true, false, 0, false, -1f, false);
					}
					else
					{
						TASK::_TASK_USE_SCENARIO_POINT(Global_34, (*uParam0)[iVar0], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_MP_FEMALE_A", 0, true, false, 0, false, -1f, false);
					}
				}
				else if (uParam0->f_132 == 1)
				{
					if (PED::IS_PED_MALE(Global_34))
					{
						TASK::_TASK_USE_SCENARIO_POINT(Global_34, (*uParam0)[iVar0], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR", 0, true, false, 0, false, -1f, false);
					}
					else
					{
						TASK::_TASK_USE_SCENARIO_POINT(Global_34, (*uParam0)[iVar0], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_MP_FEMALE_A", 0, true, false, 0, false, -1f, false);
					}
				}
				else if (func_137())
				{
					if (PED::IS_PED_MALE(Global_34))
					{
						TASK::_TASK_USE_SCENARIO_POINT(Global_34, (*uParam0)[iVar0], "WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A", 0, true, false, 0, false, -1f, false);
					}
					else
					{
						TASK::_TASK_USE_SCENARIO_POINT(Global_34, (*uParam0)[iVar0], "WORLD_PLAYER_CAMP_FIRE_SQUAT_FEMALE_A", 0, true, false, 0, false, -1f, false);
					}
				}
				else if (PED::IS_PED_MALE(Global_34))
				{
					TASK::_TASK_USE_SCENARIO_POINT(Global_34, (*uParam0)[iVar0], "WORLD_PLAYER_CAMP_FIRE_SIT_MALE_A", 0, true, false, 0, false, -1f, false);
				}
				else
				{
					TASK::_TASK_USE_SCENARIO_POINT(Global_34, (*uParam0)[iVar0], "WORLD_PLAYER_CAMP_FIRE_SIT_FEMALE_A", 0, true, false, 0, false, -1f, false);
				}
				break;
		}
		uParam0->f_129 = iVar0;
	}
}

void func_65()
{
	if (func_88(joaat("WEAPON_KIT_BINOCULARS"), 0))
	{
		func_138(32);
	}
	if (func_88(joaat("WEAPON_KIT_BINOCULARS_IMPROVED"), 0))
	{
		func_138(32);
	}
	if (func_88(joaat("WEAPON_KIT_CAMERA"), 0))
	{
		func_138(64);
	}
	if (func_88(joaat("WEAPON_KIT_CAMERA_ADVANCED"), 0))
	{
		func_138(131072);
	}
}

void func_66(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_98(uParam0->f_135[iVar0]))
		{
			if (func_139(uParam0->f_135[iVar0], 0) == bParam1)
			{
			}
			else
			{
				func_131(uParam0->f_135[iVar0], bParam1, 1, 1);
			}
		}
		iVar0++;
	}
}

void func_67(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::_0xC22AA08A8ADB87D4(Global_34);
	iVar1 = 0;
	if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_MP_FEMALE_A"))
	{
		if ((((((func_70(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_149) > 500) && !func_16(uParam0->f_126, 32768)) && !func_57(16)) && uParam0->f_132 != 1) && !func_135(684307653, &iVar1)) && !func_135(562107429, &iVar1))
		{
			func_29(&(uParam0->f_157));
			func_73(joaat("KNEEL_TRANS_SQUAT"), 0.5f);
			uParam0->f_149 = MISC::GET_GAME_TIMER();
		}
	}
	else if (iVar0 == joaat("WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A") || iVar0 == joaat("WORLD_PLAYER_CAMP_FIRE_SQUAT_FEMALE_A"))
	{
		if (func_70(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_149) > 500)
		{
			if (!func_93(&(uParam0->f_157)))
			{
				func_29(&(uParam0->f_157));
			}
			if (func_27(&(uParam0->f_157), 180f))
			{
				func_29(&(uParam0->f_157));
				if (!func_137())
				{
					func_73(joaat("SQUAT_TRANS_SIT"), 0.5f);
					uParam0->f_149 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
	else if (iVar0 == joaat("WORLD_PLAYER_CAMP_FIRE_SIT_MALE_A") || iVar0 == joaat("WORLD_PLAYER_CAMP_FIRE_SIT_FEMALE_A"))
	{
		if (func_70(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_149) > 500)
		{
			if (!func_93(&(uParam0->f_157)))
			{
				func_29(&(uParam0->f_157));
			}
			if (func_27(&(uParam0->f_157), 10f))
			{
				if (func_137())
				{
					func_29(&(uParam0->f_157));
					uParam0->f_149 = MISC::GET_GAME_TIMER();
					func_73(joaat("SIT_TRANS_SQUAT"), 0.5f);
				}
			}
		}
	}
	else if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"))
	{
		if (func_70(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_149) > 500)
		{
			func_73(joaat("KNIFE1_TRANS_KNEEL1"), 2f);
			uParam0->f_149 = MISC::GET_GAME_TIMER();
		}
	}
	else if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP_MP_FEMALE_A"))
	{
		if (func_70(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_149) > 500)
		{
			func_73(joaat("KNEELFIRECRAFTCUP_TRANS_KNEEL1"), 2f);
			uParam0->f_149 = MISC::GET_GAME_TIMER();
		}
	}
}

bool func_68(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam1)
	{
		iVar2 = iParam2;
		if (iParam3 != -1)
		{
			iVar1 = iParam3;
		}
		else
		{
			iVar1 = uParam0->f_129;
		}
	}
	else
	{
		iVar1 = uParam0->f_129;
		iVar2 = uParam0->f_130;
	}
	switch (iVar1)
	{
		case 0:
		case 1:
			switch (iVar2)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
				case 4:
					iVar0 = 0;
					break;
				default:
					if (func_107() != 0 || func_16(uParam0->f_126, 64))
					{
						iVar0 = 544786;
					}
					else
					{
						iVar0 = 20498;
					}
					break;
			}
			break;
		case 2:
		case 3:
			if ((iVar2 == 3 || iVar2 == 4) || iVar2 == 1)
			{
				iVar0 = 0;
			}
			else if (func_107() != 0 || func_16(uParam0->f_126, 64))
			{
				iVar0 = 544786;
			}
			else
			{
				iVar0 = 20498;
			}
			break;
	}
	if (TASK::_0x038B1F1674F0E242(Global_34) || func_16(uParam0->f_126, 16384))
	{
		iVar0 = 0;
	}
	else if (func_113(Global_34, 0) || WEAPON::_0x0DE0944ECCB3DF5D(Global_34))
	{
		if (!func_16(uParam0->f_126, 32))
		{
			func_140(207, 1);
			func_17(&(uParam0->f_126), 32);
		}
		iVar0 = 16;
	}
	func_141(uParam0, iVar0);
	if (uParam0->f_132 == 2)
	{
		func_66(uParam0, 0);
	}
	iVar3 = func_142(uParam0);
	if (iVar3 != -1)
	{
		if (uParam0->f_131 != -1)
		{
			uParam0->f_129 = uParam0->f_131;
		}
	}
	switch (iVar3)
	{
		case 0:
			func_101(&(uParam0->f_49));
			func_45(&(uParam0->f_49), 1);
			uParam0->f_132 = 6;
			break;
		case 8:
			func_50(uParam0);
			func_17(&(uParam0->f_126), 16384);
			break;
		case 2:
			func_45(&(uParam0->f_49), 2);
			func_59(uParam0, 0);
			func_40(&(uParam0->f_49), 32);
			uParam0->f_132 = 2;
			func_50(uParam0);
			func_41(uParam0, 7);
			break;
		case 6:
			func_50(uParam0);
			uParam0->f_132 = 10;
			return true;
		case 1:
			uParam0->f_132 = 0;
			func_50(uParam0);
			break;
		default:
			return false;
	}
	return true;
}

bool func_69(var uParam0)
{
	switch (uParam0->f_129)
	{
		case 0:
			return func_143(uParam0);
		case 1:
			return func_144(uParam0);
		case 2:
			return func_145(uParam0);
		case 3:
			return func_146(uParam0);
	}
	func_50(uParam0);
	return false;
}

bool func_70(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	bVar0 = PED::_0xC488B8C0E52560D8(Global_34);
	bVar1 = PED::_0x2DC0E8DCBD3546E9(Global_34);
	if ((bVar0 || bVar1) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 1944546609))
	{
		return false;
	}
	if (bVar1 && uParam0->f_131 != -1)
	{
		iVar2 = func_35(uParam0);
		if (iVar2 != uParam0->f_131)
		{
			return false;
		}
		if (uParam0->f_129 != iVar2)
		{
			uParam0->f_129 = iVar2;
			return false;
		}
	}
	if (func_147())
	{
		return false;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_34))
	{
		return false;
	}
	return true;
}

int func_71(bool bParam0)
{
	if (func_107() == -1)
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

int func_72(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	struct<10> Var0;
	struct<16> Var10;
	int iVar26;
	var uVar27;
	bool bVar28;
	int iVar29;
	bool bVar30;
	bool bVar31;
	int iVar32;

	if (func_148())
	{
		Global_1940311.f_10894 = iParam0;
		func_149(iParam0, 1, -142743235, 0, 0);
		return 0;
	}
	if (!func_150(iParam0, bParam4))
	{
		return 0;
	}
	if (func_151(iParam0))
	{
		return 0;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_34) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 108107462))
	{
		return 0;
	}
	bVar28 = true;
	iVar29 = 1;
	Var0.f_4 = iParam3;
	Var0.f_5 = 1;
	if (iParam0 == joaat("KIT_MOONSHINER_MAGGIES_MAP"))
	{
		UIAPPS::_LAUNCH_APP_WITH_ENTRY("player_menu", "mp_moonshine_selection");
	}
	if (func_152(iParam0))
	{
		Global_1913502 = iParam0;
		Global_1913693 = MISC::GET_GAME_TIMER();
		Global_1913503 = MISC::GET_GAME_TIMER() + 3000;
		return 1;
	}
	if (func_153(iParam0, -2081717885))
	{
		func_154(iParam0, Var10, Var0, uVar27, bVar28, iVar29);
	}
	else if (func_153(iParam0, -1909684001))
	{
		func_155(iParam0, Var10, Var0, bVar28, iVar29);
	}
	else if (func_153(iParam0, 587975446))
	{
		func_156(iParam0, Var10);
	}
	else if (func_153(iParam0, 566155764))
	{
		if (!func_157(iParam0))
		{
			return 0;
		}
	}
	if (func_158(iParam0, bParam5, bParam6, bParam1))
	{
		Global_1913502 = iParam0;
		Global_1913693 = MISC::GET_GAME_TIMER();
		return 1;
	}
	if (func_153(iParam0, -1227898937))
	{
		Var0.f_2 = iParam0;
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "doc_newspaper", 32);
		Var10.f_14 = 1024;
		Var10.f_15 = 1;
		func_159(Var10, 1);
		iVar29 = 0;
		bVar28 = false;
	}
	else if ((func_153(iParam0, -1472964441) || func_153(iParam0, -228153877)) || func_153(iParam0, 566155764))
	{
	}
	else if (func_153(iParam0, 1919582297))
	{
		if (((func_160() || TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_34, 1)) || TASK::_0x0C3CB2E600C8977D(Global_34, 1)) || !PED::IS_PED_ON_FOOT(Global_34))
		{
			return 0;
		}
		switch (iParam0)
		{
			case joaat("CONSUMABLE_HERBIVORE_BAIT"):
			case joaat("CONSUMABLE_POTENT_HERBIVORE_BAIT"):
				StringCopy(&(Var10.f_10), "item_bait_herbivore", 32);
				break;
			case joaat("CONSUMABLE_PREDATOR_BAIT"):
			case joaat("CONSUMABLE_POTENT_PREDATOR_BAIT"):
				StringCopy(&(Var10.f_10), "item_bait_predator", 32);
				break;
			case joaat("CONSUMABLE_ROLE_NATURALIST_LEGENDARY_ANIMAL_PHEROMONE"):
				StringCopy(&(Var10.f_10), "item_legendary_animal_pheromone", 32);
				break;
		}
		Var0.f_1 = iParam0;
		Var0.f_3 = bParam1;
		Var10 = { Var0 };
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_159(Var10, 0);
		bVar28 = false;
	}
	else if (func_161(iParam0))
	{
		Var0.f_3 = 0;
		Var0.f_1 = iParam0;
		Var0.f_2 = 0;
		Var0 = func_162(Global_1071686.f_28357.f_11.f_67);
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "net_player_wheel_item_use", 32);
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_159(Var10, 0);
		iVar29 = 1;
	}
	else if (func_89(iParam0) == joaat("CLOTHING"))
	{
		if (!func_163(iParam0))
		{
			func_164("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, 1);
			return iVar29;
		}
		iVar32 = func_165(iParam0);
		switch (iVar32)
		{
			case -2061583405:
			case -999503751:
			case -525676072:
				bVar30 = func_166();
				break;
			default:
				bVar30 = true;
				break;
		}
		if (!bVar30)
		{
			if (func_167(PLAYER::PLAYER_ID()))
			{
				func_164("SI_ITEM_USE_OUTFITS_STATIONARY", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_164("SI_ITEM_USE_OUTFITS_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return iVar29;
		}
		if (iVar32 == -999503751)
		{
			if (Global_1952637.f_1675 != iParam0)
			{
				func_168(20, iParam0, 0, 0, 0);
			}
		}
		else
		{
			switch (iVar32)
			{
				case -525676072:
				case -68128151:
				case 81053684:
					func_169(iParam0, 0);
					return iVar29;
				case -2061583405:
					func_170(iParam0);
					func_168(35, 0, 0, 0, 0);
					return 1;
				case -1719060085:
					if (iParam0 == Global_1952637.f_1675.f_1[23 /*3*/])
					{
						func_171(Global_34, joaat("CLOTHING_ITEM_GLOVES_NONE"), 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
						PED::_SET_PED_BLACKBOARD_BOOL(Global_34, "PlayUnequipGlovesFidget", true, 15);
						func_172(iParam0, 0, 0);
						return 1;
					}
					else
					{
						PED::_SET_PED_BLACKBOARD_BOOL(Global_34, "PlayEquipGlovesFidget", true, 15);
						func_172(iParam0, 1, 0);
					}
					break;
				case 119907797:
				case 1388798186:
					if (iParam0 == Global_1952637.f_1675.f_1[10 /*3*/])
					{
						func_171(Global_34, Global_1952637.f_83[10 /*12*/], 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
						func_172(iParam0, 0, 0);
						return 1;
					}
					else
					{
						func_172(iParam0, 1, 0);
						func_173(-2061583405, 0);
						if (iVar32 == 1388798186)
						{
							func_173(119907797, 0);
						}
						else if (iVar32 == 119907797)
						{
							func_173(1388798186, 0);
						}
					}
					break;
				default:
					if (!func_153(iParam0, 160827531))
					{
					}
					else
					{
						func_169(iParam0, 0);
					}
					break;
			}
			func_171(Global_34, iParam0, 0, -358215195, 1, 1, 1, 0, 0, 1, 1);
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("CUSTOM_SATCHEL"):
				func_174(1);
				break;
			case joaat("KIT_WARDROBE"):
				if (func_107() != -1)
				{
				}
				else if (!func_163(iParam0))
				{
					func_164("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, 1);
				}
				else
				{
					bVar30 = func_175(7, iParam0);
					bVar31 = func_175(1, iParam0);
					if (bVar31 && !bVar30)
					{
						if (MAP::DOES_BLIP_EXIST(Global_17332))
						{
							MAP::REMOVE_BLIP(&Global_17332);
						}
						Global_17332 = MAP::_0x3E593DF9C2962EC6(joaat("BLIP_STYLE_PLAYER_HORSE"));
						MAP::_BLIP_SET_MODIFIER(Global_17332, 673950256);
						func_164(MISC::_CREATE_VAR_STRING(0, -1680440926, Global_17332), 10000, 0, 0, 0, 1);
					}
					else if (!func_176(7))
					{
						func_164("SI_ITEM_USE_WARDROBE_NO_SADDLE", 10000, 0, 0, 0, 1);
					}
					else if (!bVar30)
					{
						if (func_178(Global_34, func_177(7), 0))
						{
							func_164("SI_ITEM_USE_WARDROBE_STATIONARY", 10000, 0, 0, 0, 1);
						}
						else
						{
							if (MAP::DOES_BLIP_EXIST(Global_17332))
							{
								MAP::REMOVE_BLIP(&Global_17332);
							}
							Global_17332 = MAP::_0x3E593DF9C2962EC6(joaat("BLIP_STYLE_PLAYER_HORSE"));
							MAP::_BLIP_SET_MODIFIER(Global_17332, 673950256);
							func_164(MISC::_CREATE_VAR_STRING(0, -482898802, Global_17332), 10000, 0, 0, 0, 1);
						}
					}
					else
					{
						iVar26 = joaat("PLAYER_WARDROBE");
						if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iVar26) > 0)
						{
						}
						else
						{
							Var0.f_1 = iParam0;
							Var0.f_2 = 51499045;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "player_wardrobe", 32);
							Var10.f_14 = 1024;
							Var10.f_15 = 1;
							func_159(Var10, 0);
						}
						Jump @2407; //curOff = 1789
						func_179();
						Jump @2407; //curOff = 1796
						if (func_163(joaat("KIT_CAMP")))
						{
							if (func_180(1, 1))
							{
								func_181(2, 1);
							}
							else if (func_182(1))
							{
								func_164("GC_SELECT_HELP_FOLLOWER_DEAD", 10000, 0, 0, 0, 1);
							}
							else if (func_183())
							{
								func_164("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
							}
							else
							{
								if (GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
								{
									func_184();
								}
								else
								{
									func_164("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
								}
								func_185(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
							}
						}
						else if (!GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
						{
							func_164("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
							func_185(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
						}
						else if (func_183())
						{
							func_164("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
						}
						else
						{
							func_164("GC_SELECT_HELP_DISABLED", 10000, 0, 0, 0, 1);
						}
						Jump @2407; //curOff = 2017
						if (!WEAPON::_IS_WEAPON_BINOCULARS(func_36(Global_34, 1, 0, 0)))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_34, iParam0, false, 0, false, false);
						}
						return 1;
						Jump @2407; //curOff = 2055
						if (func_36(Global_34, 1, 0, 0) != iParam0)
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_34, iParam0, false, 0, false, false);
						}
						return 1;
						Jump @2407; //curOff = 2090
						Jump @2407; //curOff = 2093
						func_140(535, 1);
						Jump @2407; //curOff = 2104
						func_186(1);
						Jump @2407; //curOff = 2112
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), joaat("DOCUMENT_PLAYER_JOURNAL"), 1928812891, 1, 0, -1082130432 /* Float: -1f */);
						bVar28 = false;
						return 1;
						Jump @2407; //curOff = 2147
						UIAPPS::_LAUNCH_APP_BY_HASH(joaat("COLLECTORS"));
						if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("COLLECTORS")) > 0)
						{
						}
						else
						{
							Var0.f_1 = iParam0;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "collectors_bag", 32);
							Var10.f_14 = 1024;
							func_159(Var10, 0);
						}
						return 1;
						Jump @2407; //curOff = 2223
						UIAPPS::_CLOSE_APP_BY_HASH(joaat("SATCHEL"));
						if (SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME() == joaat("SATCHEL_UI_EVENT_HANDLER"))
						{
							UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(1976336482, 1261159557);
						}
						else
						{
							UIAPPS::_LAUNCH_APP_BY_HASH(1976336482);
						}
						if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("FIELD_GUIDE")) > 0)
						{
						}
						else
						{
							Var0.f_1 = iParam0;
							Var0.f_3 = !SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME() != joaat("SATCHEL_UI_EVENT_HANDLER");
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "field_guide", 32);
							Var10.f_14 = 1024;
							func_159(Var10, 0);
						}
						return 1;
						Jump @2407; //curOff = 2353
						if (Global_1138048[PLAYER::PLAYER_ID() /*8*/].f_4)
						{
							func_164("NET_WCAMP_OWNER_CAMP_RUNNING", 10000, 0, 0, 0, 1);
						}
						else
						{
							func_187();
						}
						return 1;
						Jump @2407; //curOff = 2398
						iVar29 = 0;
					}
				}
				if (bVar28)
				{
					HUD::_0xBFFF81E12A745A5F();
				}
				return iVar29;
				default:
					break;
		}
	}
}

bool func_73(int iParam0, float fParam1)
{
	if (!PED::_0x68821369A2CEADD5(Global_34, iParam0))
	{
		PED::_0xD65FDC686A031C83(Global_34, iParam0, fParam1);
		PED::_0x6D07B371E9439019(Global_34);
		return false;
	}
	return true;
}

bool func_74(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	struct<5> Var7;

	if (!func_88(iParam0, 0))
	{
		return false;
	}
	if (iParam3 == -142743235)
	{
		if (func_188(iParam0))
		{
			iParam3 = 562618531;
		}
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_189(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return false;
		}
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_34, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_190(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
		}
		return false;
	}
	if (!func_23(iParam0, 1))
	{
		return false;
	}
	Var5 = { func_191(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((func_92(iParam0, 0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_92(iParam0, 0, 0, 0) - iParam1) < 0)
		{
			func_74(iParam0, func_92(iParam0, 0, 0, 0), bParam2, iParam3);
			return false;
		}
	}
	if (func_89(iParam0) == joaat("WEAPON"))
	{
		if (!func_192(iParam0, iParam1, 0, iParam3))
		{
			return false;
		}
	}
	else if (!func_149(iParam0, iParam1, iParam3, bParam2, 0))
	{
		return false;
	}
	else
	{
		Var7 = { func_193(iParam0, 0, 0) };
		if (func_76(0) && Var7.f_4 == 1084182731)
		{
			func_194(1, 0, 0);
		}
	}
	if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1940144.f_21 = 0;
	}
	if (!func_76(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		func_190(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
	}
	return true;
}

bool func_75(var uParam0, var uParam1)
{
	if (func_195(uParam0))
	{
		return true;
	}
	return false;
}

bool func_76(bool bParam0)
{
	if (func_107() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_71(bParam0));
}

bool func_77()
{
	if (INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(PLAYER::PLAYER_PED_ID()) != 3)
	{
		return false;
	}
	return INVENTORY::_0xFC7563F482781A3D();
}

void func_78(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (!func_76(0) || func_77())
	{
		return;
	}
	if (!func_88(iParam0, 0))
	{
		return;
	}
	func_111(func_196(joaat("ITEMS_CRAFTED")), iParam1);
	if (bParam3)
	{
		if (func_107() == -1)
		{
			if (func_153(iParam0, -1588156645))
			{
				iVar0 = func_198(func_197(iParam0, 0), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar0))
				{
					func_199(iVar0);
				}
			}
		}
		if (iParam4 == 0)
		{
			if (func_89(iParam0) == joaat("HORSE_EQUIPMENT"))
			{
				if (func_200(iParam0, 0))
				{
					func_190(iParam0, 1, 0, 1, 0, 0, 0);
				}
			}
			else
			{
				func_201(iParam0, iParam1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		else
		{
			func_202(iParam0, iParam4, iParam1);
		}
	}
	func_203(iParam0, iParam1);
	Global_1051133 = iParam0;
}

void func_79(var uParam0)
{
	int iVar0;

	if (func_70(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_149) > 250)
	{
		iVar0 = PED::_0xC22AA08A8ADB87D4(Global_34);
		if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"))
		{
			func_73(joaat("KNIFE1_TRANS_KNEEL1"), 1086324736 /* Float: 6f */);
			uParam0->f_149 = MISC::GET_GAME_TIMER();
		}
		else if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP_MP_FEMALE_A"))
		{
			func_73(joaat("KNEELFIRECRAFTCUP_TRANS_KNEEL1"), 1086324736 /* Float: 6f */);
			uParam0->f_149 = MISC::GET_GAME_TIMER();
		}
		else if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_34) && (MISC::GET_FRAME_COUNT() % 2) == 0)
		{
			TASK::CLEAR_PED_TASKS(Global_34, true, false);
		}
	}
}

void func_80(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST((*uParam0)[iVar0]))
		{
			TASK::_DELETE_SCENARIO_POINT((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_81(var uParam0)
{
}

void func_82(var uParam0)
{
	uParam0->f_128 = 0;
	uParam0->f_129 = -1;
	uParam0->f_130 = 0;
	uParam0->f_131 = -1;
	uParam0->f_132 = 0;
	uParam0->f_127 = 0;
}

bool func_83(int iParam0, vector3 vParam1)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return false;
	}
	return VOLUME::_IS_POSITION_INSIDE_VOLUME(iParam0, vParam1);
}

bool func_84()
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
	if (!func_86(Global_1051213) && Global_1572887.f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

struct<2> func_85(int iParam0)
{
	return Global_1900736.f_1[iParam0 /*2*/];
}

bool func_86(struct<2> Param0)
{
	if (!func_204(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_205(Param0))
	{
		return false;
	}
	return true;
}

int func_87(var uParam0, var uParam1)
{
	return uParam0;
}

bool func_88(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_89(int iParam0)
{
	vector3 vVar0;

	if (!func_88(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_90(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_88(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258.f_6)
	{
		return false;
	}
	iVar0 = func_189(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_206("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_207(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_208(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_209(iVar1);
				return true;
			}
			iVar3++;
		}
		func_209(iVar1);
	}
	return false;
}

bool func_91(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_88(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_165(iParam0);
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
	iVar1 = func_210(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_211(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_212(iParam0);
	iVar2 = func_211(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == Global_17411.f_55.f_644.f_1354.f_5[iVar2 /*17*/];
}

int func_92(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_88(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_89(iParam0);
	if (iVar1 == joaat("AMMO") || (bParam1 && iVar1 == joaat("WEAPON")))
	{
		iVar2 = func_189(iParam0, 1);
		if (iVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar2);
		}
	}
	else if (iVar1 == joaat("WEAPON"))
	{
		return func_213(iParam0, 0);
	}
	if (func_214(iParam0, joaat("DEFAULT")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_71(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_215(iParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_71(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

bool func_93(var uParam0)
{
	return func_216(*uParam0, 1);
}

float func_94(var uParam0)
{
	if (!func_93(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_217(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_218() - uParam0->f_1);
}

void func_95(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_218() - fParam1);
	func_219(uParam0, 1);
	func_220(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_96(int* iParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return true;
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(*iParam0))
	{
		OBJECT::DELETE_OBJECT(iParam0);
		return true;
	}
	*uParam1 = 1;
	NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(*iParam0);
	return false;
}

bool func_97(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_98(int iParam0)
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

void func_99(int iParam0)
{
	Global_1903136.f_302 = (Global_1903136.f_302 || iParam0);
}

int func_100(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_221(*uParam0, 0f, 0f, 0f))
	{
		return 1;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, bParam3) && !bVar2)
	{
		if (iVar1 < iParam2)
		{
			iVar1++;
			vVar4.f_2 = (vVar4.z + IntToFloat(iParam1));
			STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		}
		else
		{
			bVar2 = true;
		}
	}
	if (bParam4)
	{
		vVar4 = { *uParam0 };
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
		STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, bParam3) && !bVar3)
		{
			if (iVar1 < iParam2)
			{
				iVar1++;
				vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
				STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
			}
			else
			{
				bVar3 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = uVar0;
		return 1;
	}
	if (bVar2 && bVar3)
	{
		return 0;
	}
	uParam0->f_2 = uVar0;
	return 1;
}

void func_101(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_1)
	{
		func_121(&(uParam0->f_1[iVar0]), 1, 1);
		iVar0++;
	}
}

void func_102(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (UISTATEMACHINE::_UISTATEMACHINE_REQUEST_TRANSITION(joaat("CRAFTING"), 1383188602))
		{
		}
		else
		{
			UIAPPS::_CLOSE_APP_BY_HASH(joaat("CRAFTING"));
		}
	}
	else
	{
		UIAPPS::_CLOSE_APP_BY_HASH(joaat("CRAFTING"));
	}
	func_222(uParam0, 256);
	ATTRIBUTE::_0xD962F8579D702DB5();
}

bool func_103()
{
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "player_crafting_active"))
	{
		return DECORATOR::DECOR_GET_BOOL(PLAYER::PLAYER_PED_ID(), "player_crafting_active");
	}
	return false;
}

void func_104(bool bParam0)
{
	if (bParam0)
	{
	}
	Global_1913694.f_1582 = bParam0;
	DECORATOR::DECOR_SET_BOOL(Global_34, "player_crafting_active", bParam0);
}

void func_105(var uParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_48))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_48, 0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_49))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_49, 0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_50))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_50, 0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_51))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_51, 0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_52))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_52, 0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_53))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_53, 0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_54))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_54, 0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_55))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_55, 0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_56))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_56, 0);
	}
	func_96(&(uParam0->f_63), &(uParam0->f_64));
	func_96(&(uParam0->f_65), &(uParam0->f_66));
	func_96(&(uParam0->f_67), &(uParam0->f_68));
}

bool func_106(var uParam0, int iParam1)
{
	return func_16(*uParam0, iParam1);
}

int func_107()
{
	return Global_1572887.f_13;
}

int func_108(int iParam0, int iParam1, int iParam2, var uParam3)
{
	var uVar0;
	struct<5> Var2;
	int iVar7;
	int iVar8;
	struct<2> Var9;
	struct<12> Var19;
	struct<12> Var36;
	struct<17> Var52;

	if (!func_88(iParam0, 0))
	{
		return -1;
	}
	if (func_223(iParam0))
	{
		if (!func_225(func_224(iParam0), iParam1, &uVar0, 0, 0))
		{
			return -1;
		}
	}
	else if (func_226(iParam0, iParam1, 0, 0) < iParam2)
	{
		return -1;
	}
	Var2 = { func_193(iParam0, 1, 0) };
	if (func_227(iParam0, &Var2, iParam2, 0, 1, -1, 0))
	{
		return -1;
	}
	iVar7 = -1;
	iVar8 = func_165(iParam0);
	if (iVar8 == 1388422710)
	{
		iVar7 = func_228(iParam0, "SPEND STEW FEE", 1, 1, 0, iParam1);
	}
	else
	{
		Var9 = -1;
		Var9.f_1 = -1;
		if (func_223(iParam0))
		{
			Var19.f_9 = 1;
			Var19.f_11 = -1591664384;
			if (!func_229(&Var9, func_224(iParam0), &Var19, 1, iParam1, -1, 0, 0))
			{
				return -1;
			}
		}
		else
		{
			Var36.f_9 = 1;
			Var36.f_11 = -1591664384;
			if (!func_230(&Var9, iParam0, Var2, Var2.f_4, iParam2, &Var36, 1, iParam1, -1, 1))
			{
				return -1;
			}
		}
		iVar7 = Var9.f_1;
	}
	if (iVar7 == -1)
	{
		return -1;
	}
	Var52.f_7 = -142743235;
	Var52.f_16 = -1;
	Var52.f_1 = 1;
	if (iParam0 == -1283929968)
	{
		Var52.f_1 = 0;
	}
	if (func_223(iParam0))
	{
		if (func_231(func_224(iParam0), iParam1) == 1400824947)
		{
			Var52.f_1 = 0;
		}
	}
	else if (func_232(iParam0, iParam1) == 1400824947)
	{
		Var52.f_1 = 0;
	}
	func_233(iVar7, Var52);
	TELEMETRY::_TELEMETRY_CRAFT_ITEM(iParam0, iParam1, uParam3);
	return iVar7;
}

void func_109(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		func_234(11, 1, 0);
		iVar0++;
	}
	if (func_235(iParam0, 0))
	{
		func_236(40);
	}
	else
	{
		func_236(39);
	}
}

struct<2> func_110(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_111(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

void func_112(var uParam0)
{
	func_40(uParam0, 1);
}

bool func_113(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_114(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

var func_115(int iParam0)
{
	return (func_237(iParam0, 4) || func_237(iParam0, 5));
}

int func_116(int iParam0)
{
	return func_237(iParam0, 7);
}

int func_117(int iParam0)
{
	return func_237(iParam0, 6);
}

bool func_118(int iParam0, int iParam1, float fParam2)
{
	return func_238(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

bool func_119()
{
	return (Global_1915715.f_20637 || Global_1915715.f_22504.f_1);
}

int func_120(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;

	fVar0 = 10000f;
	iVar1 = -1;
	iVar2 = ITEMSET::CREATE_ITEMSET(true);
	iVar3 = 0;
	while (iVar3 < 4)
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST((*uParam0)[iVar3]))
		{
			if (TASK::_GET_PED_USING_SCENARIO_POINT((*uParam0)[iVar3]) != 0)
			{
			}
			else if (!PED::_0xAB643407D0B26F07(Global_34, (*uParam0)[iVar3], 0, 0, 1) && !func_57(64))
			{
			}
			else
			{
				ITEMSET::_CLEAR_ITEMSET(iVar2);
				if (func_55(&iVar2, TASK::_GET_SCENARIO_POINT_COORDS((*uParam0)[iVar3], true), 1065353216 /* Float: 1f */))
				{
				}
				else
				{
					fVar4 = func_21(Global_35, uParam0->f_5[iVar3 /*3*/]);
					if (fVar4 < fVar0)
					{
						iVar1 = iVar3;
						fVar0 = fVar4;
					}
				}
			}
		}
		iVar3++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar2);
	return iVar1;
}

void func_121(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_98(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_239(*uParam0);
	if (Global_1951255[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_240(iVar0);
	*uParam0 = 0;
}

bool func_122(var uParam0, float fParam1)
{
	int iVar0;

	iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER(*uParam0, 0f, 0f, 0f, fParam1, fParam1, 1f);
	if (PED::_0xA1FBAC56D38563E2(iVar0))
	{
		func_123(iVar0);
		return true;
	}
	if (func_241(&iVar0))
	{
		func_123(iVar0);
		return true;
	}
	func_123(iVar0);
	return false;
}

void func_123(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

int func_124(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_242(iVar0, 2))
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
				func_243(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

bool func_125(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_98(iParam0))
	{
		return false;
	}
	iVar0 = func_239(iParam0);
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

void func_126(var uParam0)
{
	if (func_98(uParam0->f_145))
	{
		func_121(&(uParam0->f_145), 1, 1);
	}
}

void func_127(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_98(iParam0))
	{
		return;
	}
	iVar0 = func_239(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1951255[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_GROUP(Global_1951255[iVar0 /*23*/].f_3, iParam1, iParam2);
}

bool func_128(var uParam0)
{
	if (WEAPON::_0x0DE0944ECCB3DF5D(Global_34))
	{
		return false;
	}
	if (func_16(uParam0->f_126, 32768))
	{
		return false;
	}
	if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_34))
	{
		return false;
	}
	if (func_57(16))
	{
		return false;
	}
	return true;
}

bool func_129(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_34);
	if (ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		iVar2 = func_244(iVar1);
		if (((func_245(iVar2) && !ENTITY::_0x8DE41E9902E85756(iVar0)) && FLOCK::_0xF8B48A361DC388AE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)) != 2) && !FIRE::_0xCDC25355C0D65963(iVar0))
		{
			uParam0->f_49.f_61 = iVar2;
			uParam0->f_49.f_62 = -214678071;
			if (func_98(uParam0->f_146))
			{
				func_127(uParam0->f_146, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iVar0), 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_130(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_98(iParam0))
	{
		return;
	}
	iVar0 = func_239(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1951255[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1951255[iVar0 /*23*/].f_3, sParam1);
}

void func_131(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_98(iParam0))
	{
		return;
	}
	iVar0 = func_239(iParam0);
	if (bParam1)
	{
		func_246(iParam0, 4);
		if (bParam3)
		{
			func_247(iVar0, 1);
		}
		func_248(iVar0, 1);
	}
	else
	{
		func_249(iParam0, 4);
		func_248(iVar0, 0);
	}
}

bool func_132(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1939493.f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(Global_1939493[iVar0 /*16*/].f_10)))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_133()
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

void func_134(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar25;
	int iVar26;
	int iVar27[10];
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	iVar0 = func_250(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!func_76(0) || func_77())
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		func_251(iVar1, 0);
	}
	else if (PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
	{
		Var2.f_1 = 10;
		Var2.f_12 = 10;
		MISC::_0x48E4D50F87A96AA5(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), 1, 1, ENTITY::GET_ENTITY_MODEL(iVar0), &Var2, 0);
		iVar25 = 0;
		while (iVar25 < 10)
		{
			iVar26 = Var2.f_1[iVar25];
			if (func_88(iVar26, 0))
			{
				if (!bParam1 || func_252(iVar26))
				{
					func_201(iVar26, Var2.f_12[iVar25], bParam2, 0, 0, 752097756, 0, 0, 0, 0);
				}
			}
			iVar25++;
		}
	}
	else
	{
		iVar39 = PED::_GET_PED_DAMAGE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0));
		if (func_23(joaat("PROVISION_TRINKET_BUCK_ANTLER"), 1))
		{
			if (iVar39 < 2 && MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
			{
				iVar40 = iVar39;
				iVar40++;
				iVar39 = iVar40;
			}
		}
		iVar41 = FLOCK::_0xF8B48A361DC388AE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0));
		iVar42 = func_253(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), iVar41);
		PED::_0x6B89FAA36FC909A3(&iVar27, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), iVar39, iVar42);
		iVar38 = 0;
		while (iVar38 < iVar27)
		{
			if (iVar27[iVar38] != 0)
			{
				if (func_254(iVar0) && !func_255(iVar27[iVar38]))
				{
					iVar27[iVar38] = 0;
				}
				else if (!bParam1 || func_252(iVar27[iVar38]))
				{
					func_201(iVar27[iVar38], 1, bParam2, 0, 0, 752097756, 0, 0, 0, 0);
				}
			}
			iVar38++;
		}
	}
	iVar43 = func_256(&iVar0);
	if (!func_88(iVar43, 0))
	{
		iVar43 = func_257(iVar0);
	}
	if (func_88(iVar43, 0))
	{
		func_258(iVar43, 1, 1, -142743235);
	}
	ENTITY::_DELETE_CARRIABLE(&iVar0);
}

bool func_135(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_260(func_259(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1952637.f_1675.f_1[iVar1 /*3*/] != 0 && Global_1952637.f_1675.f_1[iVar1 /*3*/] != Global_1952637.f_83[iVar1 /*12*/])
	{
		iVar0 = Global_1952637.f_1675.f_1[iVar1 /*3*/];
		if (func_165(iVar0) == iParam0 || (iParam0 == 81053684 && func_153(iVar0, 160827531)))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

int func_136(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_34, &iVar0, true, iParam0, false))
	{
		if (func_88(iVar0, 0))
		{
			if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0) || func_261(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_137()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = MISC::_GET_PREV_WEATHER_TYPE_HASH_NAME();
	if (((((iVar0 == joaat("RAIN") || iVar0 == joaat("SHOWER")) || iVar0 == joaat("SLEET")) || iVar0 == joaat("HURRICANE")) || iVar0 == joaat("THUNDERSTORM")) || iVar0 == joaat("THUNDER"))
	{
		return true;
	}
	iVar1 = MISC::_GET_NEXT_WEATHER_TYPE_HASH_NAME();
	if (((((iVar1 == joaat("RAIN") || iVar1 == joaat("SHOWER")) || iVar1 == joaat("SLEET")) || iVar1 == joaat("HURRICANE")) || iVar1 == joaat("THUNDERSTORM")) || iVar1 == joaat("THUNDER"))
	{
		return true;
	}
	iVar2 = func_262();
	if (((iVar2 == 0 || iVar2 == 7) || iVar2 == 2) || iVar2 == 10)
	{
		return true;
	}
	return false;
}

void func_138(int iParam0)
{
	Global_1940144.f_39 = (Global_1940144.f_39 || iParam0);
}

bool func_139(int iParam0, bool bParam1)
{
	if (bParam1 && !func_98(iParam0))
	{
		return false;
	}
	return !func_242(iParam0, 4);
}

void func_140(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_263(iParam0, &iVar0, &iVar1);
	if (!func_264(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_265(iVar0, iVar1);
}

void func_141(var uParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -996707397))
	{
		func_17(&(uParam0->f_126), 2);
	}
	else
	{
		func_6(&(uParam0->f_126), 2);
	}
	if (func_16(iParam1, 1))
	{
		if (!func_98(uParam0->f_135[0]))
		{
			uParam0->f_135[0] = func_266("KNEEL_FIRE", joaat("INPUT_CONTEXT_B"), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			func_127(uParam0->f_135[0], 1754796591, 0, 1);
		}
	}
	else if (func_98(uParam0->f_135[0]))
	{
		func_121(&(uParam0->f_135[0]), 1, 1);
	}
	if (((func_16(iParam1, 4096) && func_16(uParam0->f_125, 16)) && !func_57(128)) && uParam0->f_132 != 2)
	{
		MISC::SET_BIT(&(Global_1957959.f_1), 2);
		MISC::SET_BIT(&(Global_1957959.f_1), 3);
		if (!func_98(uParam0->f_135[2]))
		{
			uParam0->f_135[2] = func_266("CRAFT_COOK", joaat("INPUT_CONTEXT_X"), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			func_127(uParam0->f_135[2], 1754796591, 0, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1957959.f_1), 2);
		if (func_98(uParam0->f_135[2]))
		{
			func_121(&(uParam0->f_135[2]), 1, 1);
		}
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
	if (func_98(uParam0->f_135[6]))
	{
		func_121(&(uParam0->f_135[6]), 1, 1);
	}
	if (func_57(32))
	{
		if (func_98(uParam0->f_135[6]))
		{
			func_131(uParam0->f_135[6], 0, 1, 1);
		}
	}
	else if (func_98(uParam0->f_135[6]) && !func_139(uParam0->f_135[6], 0))
	{
		func_131(uParam0->f_135[6], 1, 1, 1);
	}
	if (func_57(32) || (func_16(uParam0->f_126, 2) && uParam0->f_132 != 2))
	{
		if (func_98(uParam0->f_135[2]))
		{
			func_131(uParam0->f_135[2], 0, 1, 1);
		}
	}
	else if (func_98(uParam0->f_135[2]))
	{
		func_131(uParam0->f_135[2], 1, 1, 1);
	}
	if ((func_16(iParam1, 16) && !func_57(128)) && uParam0->f_132 != 2)
	{
		if (!func_98(uParam0->f_135[1]))
		{
			uParam0->f_135[1] = func_266("LEAVE", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			if (func_16(iParam1, 524288) && func_16(uParam0->f_126, 8192))
			{
				func_267(uParam0->f_135[1], 0, 1);
				func_268(uParam0->f_135[1], 20, 1, 1);
				func_268(uParam0->f_135[1], 13, 1, 1);
			}
			func_127(uParam0->f_135[1], 1754796591, 0, 1);
		}
		if (func_16(iParam1, 524288) && func_16(uParam0->f_126, 8192))
		{
			if (!func_98(uParam0->f_135[8]))
			{
				uParam0->f_135[8] = func_266("LEAVE", joaat("INPUT_CONTEXT_B"), 2, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("MEDIUM_TIMED_EVENT"), 0);
				func_268(uParam0->f_135[8], 19, 1, 1);
				func_268(uParam0->f_135[8], 20, 1, 1);
				func_268(uParam0->f_135[8], 13, 1, 1);
				func_269(&(uParam0->f_135[8]), "INPUT_PCAMP_TEARDWN");
				func_127(uParam0->f_135[8], 1754796591, 0, 1);
			}
		}
		else if (func_98(uParam0->f_135[8]))
		{
			func_121(&(uParam0->f_135[8]), 1, 1);
		}
	}
	else
	{
		if (func_98(uParam0->f_135[1]))
		{
			func_121(&(uParam0->f_135[1]), 1, 1);
		}
		if (func_98(uParam0->f_135[8]))
		{
			func_121(&(uParam0->f_135[8]), 1, 1);
		}
	}
	if (func_16(uParam0->f_126, 2))
	{
		if (func_98(uParam0->f_135[1]) && func_139(uParam0->f_135[1], 0))
		{
			func_131(uParam0->f_135[1], 0, 1, 1);
			if (func_16(iParam1, 524288) && func_16(uParam0->f_126, 8192))
			{
				func_267(uParam0->f_135[1], 0, 1);
			}
		}
	}
	else if (func_98(uParam0->f_135[1]) && !func_139(uParam0->f_135[1], 0))
	{
		func_131(uParam0->f_135[1], 1, 1, 1);
		if (func_16(iParam1, 524288) && func_16(uParam0->f_126, 8192))
		{
			func_267(uParam0->f_135[1], 0, 1);
		}
	}
	if (func_98(uParam0->f_135[8]))
	{
		func_131(uParam0->f_135[8], 1, 1, 1);
	}
	uParam0->f_147 = func_62(HUD::_UIPROMPT_GET_GROUP_ACTIVE_PAGE(1754796591));
	iVar0 = 1;
	if (!func_57(128))
	{
		HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(uParam0->f_127, 3f, 1, iVar0, 1754796591, uParam0->f_147, 0);
	}
}

int func_142(var uParam0)
{
	int iVar0;

	if (func_57(16) || func_16(uParam0->f_126, 32768))
	{
		func_6(&(uParam0->f_126), 32768);
		func_52(16);
		uParam0->f_150 = -1;
		return 2;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_98(uParam0->f_135[iVar0]))
		{
			if (iVar0 == 1)
			{
				if (func_139(uParam0->f_135[iVar0], 0))
				{
					if (func_270(uParam0->f_135[iVar0], 1))
					{
						return iVar0;
					}
					else if (func_271())
					{
						if (!func_93(&(uParam0->f_151)))
						{
							func_29(&(uParam0->f_151));
						}
						if (func_272(&(uParam0->f_151), 0.5f))
						{
							return iVar0;
						}
					}
					else if (func_93(&(uParam0->f_151)))
					{
						func_273(&(uParam0->f_151));
					}
				}
			}
			else if (iVar0 == 8 || iVar0 == 6)
			{
				if (func_125(uParam0->f_135[iVar0], 1))
				{
					return iVar0;
				}
				else if (iVar0 == 8)
				{
					if (func_274(uParam0->f_135[8], 1))
					{
						if (!func_93(&(uParam0->f_49.f_70)))
						{
							func_29(&(uParam0->f_49.f_70));
						}
						else if (func_27(&(uParam0->f_49.f_70), 0.1f))
						{
							func_130(uParam0->f_135[8], "CAMP_TEARDOWN", 1);
						}
					}
					else
					{
						if (func_93(&(uParam0->f_49.f_70)))
						{
							func_273(&(uParam0->f_49.f_70));
						}
						func_130(uParam0->f_135[8], "LEAVE", 1);
					}
				}
			}
			else if (func_270(uParam0->f_135[iVar0], 1))
			{
				if (iVar0 == 2)
				{
					AUDIO::PLAY_SOUND_FRONTEND("Craft_Items_Enter", "SSCRFT_Sounds", true, 0);
				}
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_143(var uParam0)
{
	if (func_275(uParam0) && !func_16(uParam0->f_126, 4))
	{
		return 1;
	}
	if (!func_70(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_132)
	{
		case 1:
			switch (uParam0->f_130)
			{
				case 8:
					func_73(joaat("SQUAT_TRANS_KNEEL"), 0.5f);
					break;
				case 7:
					func_73(joaat("SIT_TRANS_KNEEL"), 0.5f);
					break;
				case 6:
					if (func_73(joaat("KNEEL1_TRANS_COFFEE1"), 1f))
					{
						return 1;
					}
					break;
				default:
					func_276(uParam0);
					break;
			}
			break;
		case 6:
			func_277(uParam0);
			break;
	}
	return 0;
}

int func_144(var uParam0)
{
	if (func_275(uParam0) && !func_16(uParam0->f_126, 4))
	{
		return 1;
	}
	if (!func_70(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_132)
	{
		case 1:
			switch (uParam0->f_130)
			{
				case 8:
					func_73(joaat("SQUAT_TRANS_KNEEL"), 0.5f);
					break;
				case 7:
					func_73(joaat("SIT_TRANS_KNEEL"), 0.5f);
					break;
				case 6:
					func_73(joaat("KNEEL2_TRANS_COFFEE2"), 1f);
					return 1;
				default:
					func_276(uParam0);
					break;
			}
			break;
		case 6:
			func_278(uParam0);
			break;
	}
	return 0;
}

int func_145(var uParam0)
{
	if (func_275(uParam0) && !func_16(uParam0->f_126, 4))
	{
		return 1;
	}
	if (!func_70(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_132)
	{
		case 1:
			switch (uParam0->f_130)
			{
				case 8:
					func_73(joaat("SQUAT_TRANS_KNEEL"), 0.5f);
					break;
				case 7:
					func_73(joaat("SIT_TRANS_KNEEL"), 0.5f);
					break;
				case 6:
					uParam0->f_131 = 1;
					if (func_279(Global_34, (*uParam0)[1], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL3@MALE_A@KNEEL3_TRANS_COFFEE2", "KNEEL3_TRANS_COFFEE2", "WORLD_PLAYER_DYNAMIC_KNEEL_POST_FIRE_CRAFT"))
					{
						return 1;
					}
					break;
				default:
					func_276(uParam0);
					break;
			}
			break;
	}
	return 0;
}

int func_146(var uParam0)
{
	if (func_275(uParam0) && !func_16(uParam0->f_126, 4))
	{
		return 1;
	}
	if (!func_70(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_132)
	{
		case 1:
			switch (uParam0->f_130)
			{
				case 8:
					func_73(joaat("SQUAT_TRANS_KNEEL"), 0.5f);
					break;
				case 7:
					func_73(joaat("SIT_TRANS_KNEEL"), 0.5f);
					break;
				case 6:
					uParam0->f_131 = 0;
					if (func_279(Global_34, (*uParam0)[0], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL4@MALE_A@KNEEL4_TRANS_COFFEE1", "KNEEL4_TRANS_COFFEE1", "WORLD_PLAYER_DYNAMIC_KNEEL_POST_FIRE_CRAFT"))
					{
						return 1;
					}
					break;
				default:
					func_276(uParam0);
					break;
			}
			break;
	}
	return 0;
}

bool func_147()
{
	return (Global_1940311.f_1 || Global_1940311 == 1);
}

bool func_148()
{
	if (Global_1940311.f_36 == 3)
	{
		return true;
	}
	return false;
}

bool func_149(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_88(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_214(iParam0, joaat("DEFAULT"));
	if (iVar0 != 0)
	{
		return func_280(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var1 = { func_193(iParam0, bParam4, 0) };
	Var6 = { func_281(iParam0, Var1, Var1.f_4, bParam4) };
	return func_282(iParam0, &Var6, &Var1, iParam1, iParam2, bParam3, bParam4);
}

bool func_150(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_88(iParam0, 0))
	{
		return false;
	}
	if (Global_1940311.f_7)
	{
		return false;
	}
	if (((iParam0 != joaat("CUSTOM_SATCHEL") && iParam0 != joaat("KIT_CAMP")) && iParam0 != joaat("KIT_CAMP_SIMPLE")) && bParam1)
	{
		iVar0 = func_283(iParam0);
		if (func_153(iParam0, 1147021565))
		{
			iVar0 |= 64;
		}
		if (!func_284(1, iVar0))
		{
			return false;
		}
	}
	if (iParam0 == -1448210800 || iParam0 == joaat("UPGRADE_UPG_MORTAR_PESTLE"))
	{
		if (func_285())
		{
			return false;
		}
	}
	if (!func_23(iParam0, 1))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	return true;
}

bool func_151(int iParam0)
{
	if (func_161(iParam0))
	{
		return false;
	}
	if (!INVENTORY::_0x3D10D7179D7034AF(func_71(0), iParam0, func_286(0)))
	{
		return false;
	}
	switch (iParam0)
	{
		case joaat("KIT_CAMP"):
		case joaat("KIT_CAMP_SIMPLE"):
			func_287(1, 1);
			TELEMETRY::_TELEMETRY_CAMP_CREATED(0);
			return true;
		case joaat("KIT_HANDHELD_CATALOG"):
			if (func_288() != -1)
			{
				func_164(func_289(), 10000, 0, 0, 0, 1);
				func_290(-1);
			}
			break;
	}
	return true;
}

bool func_152(int iParam0)
{
	struct<16> Var0;

	if (iParam0 == joaat("DOCUMENT_MAP_ROLE_NATURALIST_LEGENDARY_ANIMAL"))
	{
		StringCopy(&(Var0.f_10), "legendary_animal_map", 32);
		Var0.f_14 = 512;
		func_159(Var0, 0);
		return true;
	}
	return false;
}

bool func_153(int iParam0, int iParam1)
{
	if (!func_88(iParam0, 0))
	{
		return func_292(func_291(iParam0), iParam1);
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1120943070))
	{
		return true;
	}
	return false;
}

void func_154(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, int iParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, bool bParam28, int iParam29)
{
}

void func_155(int iParam0, var uParam1, var uParam2, bool bParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, bool bParam27, int iParam28)
{
}

void func_156(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)
{
}

bool func_157(int iParam0)
{
	if (func_107() == 0 && func_294(func_293(iParam0), 1, 0) != 0)
	{
		func_164("NET_ALOOT_HELP_OPEN_FAIL", 10000, 0, 0, 0, 1);
		return false;
	}
	return true;
}

bool func_158(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_295(iParam0, bParam1, 0, 0, -1082130432 /* Float: -1f */))
	{
		Global_1913503 = MISC::GET_GAME_TIMER() + 3000;
		return true;
	}
	switch (func_296(iParam0, -949239683))
	{
		case 881567935:
			if (!bParam1)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 1245009814, 1, 0, -1082130432 /* Float: -1f */);
				return true;
			}
			break;
		case 845883585:
			if (!bParam1)
			{
				if (!func_297())
				{
					if (func_298(&Global_34))
					{
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, joaat("APPLY_POMADE_WITH_HAT"), 1, 0, -1082130432 /* Float: -1f */);
					}
					else
					{
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, joaat("APPLY_POMADE_WITH_NO_HAT"), 1, 0, -1082130432 /* Float: -1f */);
					}
					return true;
				}
				else
				{
					func_164("SI_ITEM_USE_POMADE_IS_ALREADY_APPLIED", 10000, 0, 0, 0, 1);
				}
			}
			break;
		case -1239610997:
			if (!bParam2)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 280850861, 1, 0, -1082130432 /* Float: -1f */);
			}
			else
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 1087288635, 1, 0, 0f);
				if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1913503 = MISC::GET_GAME_TIMER() + 3000;
			return true;
		case 632545869:
			if (!bParam2)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, -268993254, 1, 0, -1082130432 /* Float: -1f */);
			}
			else
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, -1401979141, 1, 0, 0f);
				if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1913503 = MISC::GET_GAME_TIMER() + 3000;
			return true;
		case -793205628:
			if (!bParam2)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 1834614641, 1, 0, -1082130432 /* Float: -1f */);
			}
			else
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 136592566, 1, 0, 0f);
				if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1913503 = MISC::GET_GAME_TIMER() + 3000;
			return true;
		case 1451036371:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_34, 0) || PED::_0x5407B7288D0478B7(Global_34, 0) > 0)
				{
					func_299(iParam0);
				}
				else
				{
					func_300(iParam0);
				}
				return true;
			}
			break;
		case -273840653:
			if (!bParam1)
			{
				func_301(iParam0, 1);
				return true;
			}
			break;
		case 999632878:
			if (!bParam1)
			{
				func_302(iParam0, 1);
				return true;
			}
			break;
		case 1130235258:
			if (!bParam1)
			{
				func_303(iParam0);
				return true;
			}
			break;
		case -1915958659:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_34, 0) || PED::_0x5407B7288D0478B7(Global_34, 0) > 0)
				{
					func_299(iParam0);
				}
				else
				{
					func_304(iParam0);
				}
				return true;
			}
			break;
		case 1859991422:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_34, 0) || PED::_0x5407B7288D0478B7(Global_34, 0) > 0)
				{
					func_299(iParam0);
				}
				else
				{
					func_305(iParam0);
				}
				return true;
			}
			break;
		case 1891031775:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_34, 0) || PED::_0x5407B7288D0478B7(Global_34, 0) > 0)
				{
					func_299(iParam0);
				}
				else
				{
					func_306(iParam0);
				}
				return true;
			}
			break;
		case -809056541:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_34, 0) || PED::_0x5407B7288D0478B7(Global_34, 0) > 0)
				{
					func_299(iParam0);
				}
				else
				{
					func_307(iParam0);
				}
				return true;
			}
			break;
		case -1337515701:
			if (!bParam1)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, joaat("POCKET_WATCH_INSPECT_UNHOLSTER"), 1, 0, -1082130432 /* Float: -1f */);
				return true;
			}
			break;
		case -262371497:
			if (!bParam1)
			{
				func_308(iParam0);
				return true;
			}
			break;
		case 1443104131:
			if (!bParam1)
			{
				func_309(iParam0);
				return true;
			}
			break;
		case -1919515848:
			if (!bParam1)
			{
				func_310(iParam0);
				return true;
			}
			break;
		case 89124942:
			if (!bParam1)
			{
				func_299(iParam0);
				return true;
			}
			break;
		case 238865292:
			if (!bParam1)
			{
				func_311(iParam0, bParam3);
				return true;
			}
			break;
		case 1177617310:
			if (!bParam1)
			{
				func_312(iParam0, bParam3);
				return true;
			}
			break;
	}
	return false;
}

void func_159(struct<16> Param0, int iParam16)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1939493.f_161 >= 10)
	{
		return;
	}
	if (!func_313(iParam16, 2))
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Param0.f_10))) > 0 || func_314(&(Param0.f_10)))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1939493[iVar0 /*16*/].f_10)))
		{
			Global_1939493[iVar0 /*16*/] = { Param0 };
			Global_1939493.f_161++;
			func_315(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_160()
{
	return Global_1893587 & 2 != 0;
}

bool func_161(int iParam0)
{
	if (!func_88(iParam0, 0))
	{
		return false;
	}
	if (func_89(iParam0) == joaat("EMOTE"))
	{
		return true;
	}
	return false;
}

int func_162(int iParam0)
{
	return func_316(iParam0);
}

bool func_163(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (func_89(iParam0) == joaat("CLOTHING"))
	{
		if (func_165(iParam0) == -999503751)
		{
		}
	}
	return true;
}

var func_164(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_165(int iParam0)
{
	struct<2> Var0;

	if (!func_88(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_166()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::_GET_MOUNT_OF_PLAYER(iVar0);
	iVar2 = PLAYER::GET_PLAYER_PED(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1) || PED::IS_PED_INJURED(iVar1))
	{
		return 0;
	}
	if (PED::IS_PED_SWIMMING(iVar2) || PED::IS_PED_SWIMMING(iVar1))
	{
		return 0;
	}
	if (PED::IS_PED_ON_MOUNT(iVar2))
	{
		if (PED::_GET_RIDER_OF_MOUNT(iVar1, false) != iVar2)
		{
			return 0;
		}
	}
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
	vVar6 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, vVar6, true) < 2f && PED::_0xD543D3A8FDE4F185(iVar2, iVar1))
	{
		return 1;
	}
	return 0;
}

bool func_167(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
	iVar1 = PLAYER::_GET_MOUNT_OF_PLAYER(iParam0);
	if (PED::IS_PED_ON_MOUNT(iVar0))
	{
		if (PED::_GET_RIDER_OF_MOUNT(iVar1, false) == iVar0)
		{
			return true;
		}
	}
	return false;
}

void func_168(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_317(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_318(Var0);
}

int func_169(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_319())
	{
		return 0;
	}
	if (!func_320(iParam0))
	{
		return 0;
	}
	if (func_321(iParam0))
	{
		iVar0 = 0;
		if ((func_165(iParam0) == 81053684 || func_153(iParam0, 160827531)) && !func_153(iParam0, -1303648999))
		{
			if (bParam1)
			{
				func_322(&iVar0, 2);
			}
		}
		return func_323(iParam0, iVar0);
	}
	return 0;
}

void func_170(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 10;
	iVar1 = Global_1952637.f_1675.f_1[iVar0 /*3*/];
	if (iVar1 == iParam0)
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_34, "PlayUnequipHatFidget", true, 15);
		func_171(Global_34, joaat("CLOTHING_ITEM_HAT_NONE"), 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
		func_172(iParam0, 0, 0);
		return;
	}
	PED::_SET_PED_BLACKBOARD_BOOL(Global_34, "PlayEquipHatFidget", true, 15);
	func_171(Global_34, iParam0, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
	if (func_324(32768))
	{
		PED::KNOCK_OFF_PED_PROP(Global_34, false, true, false, true);
		func_325();
		func_317(128);
		return;
	}
	if (iVar1 == Global_1952637.f_83[iVar0 /*12*/])
	{
		func_172(iParam0, 1, 0);
		return;
	}
	if (func_326(-2061583405, 0))
	{
		if (func_327(iVar1))
		{
			func_172(iVar1, 0, 0);
		}
		else
		{
			func_328(iVar1, 1, 1, 0, 0, 0);
		}
		func_172(iParam0, 1, 0);
		return;
	}
	if (func_327(iVar1))
	{
		func_172(iVar1, 0, 0);
		func_172(iParam0, 1, 0);
	}
	else if (func_327(iParam0))
	{
		if (iParam0 != func_329(0))
		{
			func_330(iParam0, iVar1, 0, 0, 0);
			func_172(iParam0, 0, 0);
			func_172(iVar1, 0, 0);
		}
		else
		{
			PED::KNOCK_OFF_PED_PROP(Global_34, false, true, false, true);
			func_317(128);
			func_172(iParam0, 1, 0);
		}
	}
}

int func_171(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	struct<5> Var0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_193(iParam1, 1, 0) };
		iParam3 = func_331(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_332(iParam1, iParam2, func_260(iParam3, 1), bParam4, 1, 0, 1))
	{
		return 0;
	}
	func_333(1, bParam5, bParam9, 1);
	if (bParam10)
	{
		if (func_334(iParam1, 0))
		{
			func_335(Global_1952637.f_1675.f_1[func_260(iParam3, 1) /*3*/], 0, 0);
		}
		else
		{
			func_335(iParam1, 1, 0);
		}
	}
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam7 && iParam1 != Global_1952637.f_83[func_260(iParam3, 1) /*12*/])
			{
				func_168(27, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_324(32768))
			{
				func_325();
				func_168(21, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		return 1;
	}
	iVar5 = func_336(iParam3);
	if (bParam4)
	{
		iVar5 |= 2;
	}
	if (bParam8)
	{
		func_337(&iVar5, 4);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_168(19, 0, iVar5, 0, 0);
	}
	else
	{
		iVar5 |= 1;
		func_168(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_172(int iParam0, int iParam1, bool bParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_193(iParam0, bParam2, 0) };
	Var5 = { func_281(iParam0, Var0, Var0.f_4, bParam2) };
	if (func_338(iParam0, Var0, Var0.f_4, bParam2, 0, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_71(bParam2), &Var5, iParam1);
}

int func_173(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	struct<4> Var8;

	iVar2 = 0;
	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar7))
	{
		return 0;
	}
	Var8 = { func_281(joaat("WARDROBE"), func_339(bParam1), 1034665895, bParam1) };
	iVar0 = 0;
	while (iVar0 < Global_1952637.f_3334.f_26)
	{
		iVar1 = Global_1952637.f_3334[iVar0];
		if (func_165(iVar1) == iParam0 || (iParam0 == 81053684 && func_153(iVar1, 160827531)))
		{
			Var3 = { func_281(iVar1, Var8, iVar7, bParam1) };
			if (INVENTORY::_0x70E3A884ED000A01(func_71(bParam1), &Var3))
			{
				iVar2 = iVar1;
				INVENTORY::_0x65A5F70F4A292EBE(func_71(bParam1), &Var3, 0);
			}
		}
		iVar0++;
	}
	return iVar2;
}

void func_174(bool bParam0)
{
	if (bParam0)
	{
		Global_1940311 = 1;
	}
	else
	{
		Global_1940311 = 2;
	}
}

int func_175(int iParam0, int iParam1)
{
	int iVar0;

	iParam0 = func_340(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_177(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_SWIMMING(Global_34) || PED::IS_PED_SWIMMING(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_ON_MOUNT(Global_34))
	{
		if (PED::_GET_RIDER_OF_MOUNT(iVar0, false) == Global_34)
		{
			if (iParam1 == joaat("KIT_WARDROBE"))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (func_341(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_176(int iParam0)
{
	int iVar0;

	iParam0 = func_340(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = func_177(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iParam0 == func_342())
		{
			return true;
		}
		return false;
	}
	if (iVar0 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()))
	{
		return true;
	}
	return false;
}

int func_177(int iParam0)
{
	iParam0 = func_340(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1903136[iParam0 /*43*/];
}

bool func_178(int iParam0, int iParam1, bool bParam2)
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
	return false;
}

void func_179()
{
	int iVar0;

	if (func_343())
	{
		return;
	}
	if (func_344(8))
	{
		switch (Global_1051439.f_3629)
		{
			case 0:
				if (func_344(16))
				{
					if (PED::IS_PED_USING_ANY_SCENARIO(Global_34))
					{
						PED::_0xF1C03A5352243A30(Global_34);
						TASK::CLEAR_PED_TASKS(Global_34, true, false);
					}
					func_345(16);
				}
				func_346(1);
				break;
			case 1:
				if (PED::IS_PED_USING_ANY_SCENARIO(Global_34))
				{
				}
				else
				{
					func_345(8);
					func_346(0);
				}
		}
		return;
	}
	if (func_347())
	{
		TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), joaat("KIT_HANDHELD_CATALOG"), joaat("MP_CATALOGUE_UNHOLSTER_S1"), 1, 0, -1082130432 /* Float: -1f */);
		Global_1915715.f_22504.f_1 = 1;
		Global_1051439.f_43 = 0;
		func_348();
	}
	else
	{
		iVar0 = func_350(func_349());
		if (iVar0 != -1)
		{
			func_164(func_289(), 10000, 0, 0, 0, 1);
			Global_1051439.f_3628 = 0;
			Global_1051439.f_3629 = 0;
			func_351(0);
			func_290(-1);
		}
	}
}

bool func_180(int iParam0, int iParam1)
{
	int iVar0;

	if ((!func_352() || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || !NETWORK::NETWORK_IS_SESSION_ACTIVE())
	{
		return false;
	}
	if (!func_353(16))
	{
		return false;
	}
	if (func_354())
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("FEATURE_POSSE_CAMP")))
		{
			return false;
		}
	}
	if (!func_355())
	{
		return false;
	}
	if (func_356(16))
	{
		return false;
	}
	iVar0 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (iParam1 == 1 && (!GANG::_0xD6F6ACF4392187FB(iVar0) || !GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID())))
	{
		return false;
	}
	if (iParam0 == 1 && func_97(Global_1137047.f_8, 1))
	{
		return false;
	}
	if (func_183())
	{
		return false;
	}
	return true;
}

int func_181(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_357();
	}
	if (!func_358(bParam1, bParam1, !bParam1))
	{
		return 0;
	}
	func_359(iParam0);
	Global_1896738.f_386 = 1;
	Global_1896738.f_387 = bParam1;
	return 1;
}

bool func_182(int iParam0)
{
	return func_97(Global_1137047.f_8, iParam0);
}

bool func_183()
{
	int iVar0;

	iVar0 = func_360(PLAYER::PLAYER_ID());
	if (iVar0 != -1)
	{
		if (Global_1131196[iVar0 /*27*/].f_18.f_1 != 0 && func_97(Global_1131196[iVar0 /*27*/].f_18, 1))
		{
			return true;
		}
	}
	return false;
}

void func_184()
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_85(0) };
	if (func_86(Var0))
	{
		if (Var0 == 6)
		{
			iVar2 = func_361(PLAYER::PLAYER_ID(), 0);
			if (iVar2 != -1)
			{
				if (func_362(iVar2) == joaat("POSSE_VERSUS"))
				{
					func_164("GC_SELECT_FAIL_POSSE_VERSUS", 10000, 0, 0, 0, 1);
				}
				else if (iVar2 == 1)
				{
					func_164("GC_SELECT_FAIL_CHALLENGE", 10000, 0, 0, 0, 1);
				}
				else
				{
					func_164("GC_SELECT_FAIL_EVENT", 10000, 0, 0, 0, 1);
				}
			}
		}
		else
		{
			func_164("GC_SELECT_GENERAL_FAIL", 10000, 0, 0, 0, 1);
		}
	}
}

void func_185(int iParam0)
{
	struct<19> Var0;

	Var0.f_12 = -1;
	Var0.f_12.f_1 = -1;
	Var0.f_14 = 255;
	Var0.f_15 = 255;
	Var0.f_6 = iParam0;
	Var0.f_4 = 56;
	func_364(Var0, func_363(0, 8), 0, 0);
}

void func_186(bool bParam0)
{
	if ((func_107() != -1 || !bParam0) || func_114(Global_34))
	{
		func_365();
		return;
	}
}

void func_187()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	func_366(1, iVar0);
}

bool func_188(int iParam0)
{
	return func_89(iParam0) == joaat("CONSUMABLE");
}

int func_189(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_88(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_89(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_153(iParam0, 1399091007))
	{
		func_367(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

void func_190(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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

	if (!func_88(iParam0, 0))
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
	if (!func_368() || bParam6)
	{
		func_369(iParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_370(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam0 == joaat("AMMO_MOONSHINEJUG_MP"))
	{
		StringCopy(&cVar2, "ITEM_GET_PUMP", 32);
	}
	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		StringCopy(&cVar2, func_370(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_371(iParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_89(iParam0);
	iVar10 = 0;
	iVar11 = joaat("INVENTORY");
	if (((((((iVar6 == joaat("AMMO") && iParam0 != joaat("AMMO_HATCHET")) && iParam0 != joaat("AMMO_HATCHET_CLEAVER")) && iParam0 != joaat("AMMO_HATCHET_HUNTER")) && iParam0 != joaat("AMMO_TOMAHAWK_ANCIENT")) && iParam0 != joaat("AMMO_BOLAS")) && iParam0 != joaat("AMMO_POISONBOTTLE")) && iParam0 != joaat("AMMO_MOONSHINEJUG_MP"))
	{
		iVar10 = joaat("AMMO_TYPES");
		iVar11 = joaat("AMMO_TYPES");
	}
	iVar12 = func_165(iParam0);
	if (((((((iVar6 == joaat("WEAPON_MOD") || iVar6 == joaat("WEAPON_DECORATION")) || iVar12 == -1674363638) || iVar12 == 252325943) || iVar12 == 829857647) || iVar12 == -636562458) || iVar12 == 1341188928) || iVar12 == 1216664798)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_372(iParam0, &Var7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
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
	if (func_153(iParam0, 474910316))
	{
		sVar17 = func_373(iParam0);
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
	if (func_153(iParam0, 1816585950))
	{
		iVar13 = joaat("COLOR_OBJECTIVE");
	}
	if (func_374(iParam0))
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
	iVar18 = func_375(iParam0);
	if ((func_376(iVar12) && func_153(iParam0, -306684263)) && iVar18 != 0)
	{
		iVar18 = func_377(iParam0);
	}
	else if (func_89(iParam0) == joaat("CLOTHING"))
	{
		iVar19 = func_378(iParam0);
		if (func_88(iVar19, 0))
		{
			iVar18 = func_375(iVar19);
		}
	}
	if (func_379(iParam0, 1443104131) && bParam3)
	{
		iVar20 = 1;
		func_380(iParam0, -915411861, &iVar20, 0);
		iVar1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(iVar20)));
		iParam1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iParam1) / BUILTIN::TO_FLOAT(iVar20)));
	}
	sVar21 = func_381(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, iVar18), iVar1), iVar13);
	if (iParam1 == 1)
	{
		sVar21 = MISC::_CREATE_VAR_STRING(0, iVar18);
	}
	if ((((((iVar12 == -1839668642 && iParam0 != joaat("CLOTHING_ITEM_HAIR_NONE")) && iParam0 != 1326838792) && iParam0 != -230310728) || ((iVar12 == 231148558 && iParam0 != joaat("CLOTHING_ITEM_M_BEARD_STUBBLE")) && iParam0 != joaat("CLOTHING_ITEM_BEARD_NONE"))) || (iVar12 == 252325943 && iParam0 != joaat("CLOTHING_BLEND_LIPSTICK_NONE"))) || (iVar12 == -636562458 && iParam0 != joaat("CLOTHING_BLEND_EYESHADOW_NONE")))
	{
		sVar21 = MISC::_CREATE_VAR_STRING(0, func_382(iParam0, -442898163));
	}
	if (iVar12 == -126813555 || iVar12 == 1946043663)
	{
		StringCopy(&cVar22, "", 128);
		if (func_383(iParam0, &cVar22))
		{
			sVar21 = func_385(func_384(cVar22), joaat("COLOR_PURE_WHITE"));
		}
	}
	func_386(sVar21, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar16, iVar13, sVar15, sVar14, 0, 1);
}

struct<2> func_191(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_88(iParam0, 0))
	{
		return Var0;
	}
	if (func_153(iParam0, -305066475))
	{
		if (func_107() == -1)
		{
			if (func_153(iParam0, -537818634))
			{
				return func_387(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_387(joaat("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_153(iParam0, -537818634))
	{
		return func_387(joaat("MEDICINE_ITEMS"));
	}
	if (func_153(iParam0, 2084895747))
	{
		return func_387(joaat("LOCK_BREAKER_ITEMS"));
	}
	return Var2;
}

bool func_192(int iParam0, int iParam1, bool bParam2, int iParam3)
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
	Var0 = { func_388(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam2)
	{
		func_390(&Var0, func_389(0));
	}
	if (!func_391(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_207(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_282(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_209(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

struct<5> func_193(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_339(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_89(iParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_281(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_389(bParam1) };
			if (bParam2 && func_392(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_393(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_393(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_394(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_395(bParam1) };
			switch (func_165(iParam0))
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
			if (func_396(iParam0, -1823706425))
			{
				Var0 = { func_281(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_396(iParam0, -1483207246))
			{
				Var0 = { func_281(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1911121386))
			{
				Var0 = { func_281(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_396(iParam0, -1653629781))
			{
				Var0 = { func_281(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_397(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_396(iParam0, -1653629781))
			{
				Var0 = { func_281(1384535894, Var0, 1784584921, bParam1) };
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

void func_194(bool bParam0, bool bParam1, int iParam2)
{
	Global_1940311.f_4 = bParam0;
	Global_1940311.f_34 = iParam2;
	if (bParam1 || (func_398() && iParam2 == 0))
	{
		func_399(1);
		func_400(1);
	}
}

bool func_195(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
	func_40(&(uParam0->f_49), 32);
	iVar0 = PED::_0xC22AA08A8ADB87D4(Global_34);
	if (func_57(64) && uParam0->f_124 < 9)
	{
		func_401(&(uParam0->f_49));
		func_402(&(uParam0->f_49));
		if ((MISC::GET_GAME_TIMER() - uParam0->f_150) > 1000 && func_403(&(uParam0->f_49)))
		{
			func_404();
			if (func_70(uParam0))
			{
				if (iVar0 == joaat("WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A") || iVar0 == joaat("WORLD_PLAYER_CAMP_FIRE_SQUAT_FEMALE_A"))
				{
					func_73(joaat("SQUAT_TRANS_KNEEL"), 0.5f);
					return false;
				}
				else if (iVar0 == joaat("WORLD_PLAYER_CAMP_FIRE_SIT_MALE_A") || iVar0 == joaat("WORLD_PLAYER_CAMP_FIRE_SIT_FEMALE_A"))
				{
					func_73(joaat("SIT_TRANS_KNEEL"), 0.5f);
					return false;
				}
			}
			else
			{
				return false;
			}
			if (Global_1913694.f_1577 != 0)
			{
				uParam0->f_49.f_61 = Global_1913694.f_1577;
			}
			uParam0->f_49.f_62 = -214678071;
			uParam0->f_150 = -1;
			CAM::DO_SCREEN_FADE_IN(500);
			if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_MELEE_KNIFE"), true, 0, false, false);
				func_17(&(uParam0->f_126), 65536);
			}
			func_47(2);
			if (func_76(0) && !func_77())
			{
				func_405(uParam0->f_49.f_61, uParam0->f_49.f_62, 1, 0, uParam0->f_49.f_11);
			}
			STATS::_0x378D3B1B11D9385B(uParam0->f_49.f_61);
			uParam0->f_161 = 3;
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_133))
			{
				OBJECT::DELETE_OBJECT(&(uParam0->f_133));
			}
			uParam0->f_133 = OBJECT::CREATE_OBJECT(func_406(uParam0->f_49.f_61), Global_35, false, false, false, false, true);
			if (PED::_0x3BBDD6143FF16F98(Global_34, uParam0->f_133, "p_meatChunks01x_PH_L_HAND", 0, 0, 1))
			{
			}
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_133, false);
			OBJECT::_SET_OBJECT_BURN_LEVEL(uParam0->f_133, 0f, true);
			func_101(&(uParam0->f_49));
			func_45(&(uParam0->f_49), 2);
			uParam0->f_135[3] = func_266("CRAFT_FASTER", joaat("INPUT_GAME_MENU_ACCEPT"), 2, 0, 0, 6, 7000, 10000, 25, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			func_407(uParam0, 3, 0, 0);
			func_131(uParam0->f_135[3], 0, 1, 1);
			func_127(uParam0->f_135[3], -1067771379, 0, 1);
			func_222(&(uParam0->f_49), 1024);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_49.f_28);
			func_59(uParam0, 9);
		}
		return false;
	}
	if (uParam0->f_124 != 0)
	{
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
	}
	if (uParam0->f_124 > 0)
	{
		HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::_CREATE_VAR_STRING(0, uParam0->f_49.f_61), 1, 0, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 442509369))
	{
		uParam0->f_162++;
		if (uParam0->f_49.f_61 == joaat("CONSUMABLE_COFFEE"))
		{
			if (func_408())
			{
				func_409(1);
			}
			else if (func_410())
			{
				func_409(0);
			}
		}
		func_411(uParam0->f_49.f_61, BUILTIN::TO_FLOAT(uParam0->f_161), uParam0->f_162 >= uParam0->f_161);
	}
	if (func_76(0) && !func_77())
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -936525963))
		{
			func_17(&(uParam0->f_126), 256);
			func_78(uParam0->f_49.f_61, 1, 1, 1, 0);
		}
	}
	if (uParam0->f_49.f_23 != -1 && func_412(&(uParam0->f_49)) != 12)
	{
		if (func_413(uParam0->f_49.f_23))
		{
		}
		else
		{
			uParam0->f_49.f_23 = -1;
		}
	}
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Global_34, false);
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_34, 0, 1);
	switch (uParam0->f_124)
	{
		case 0:
			if (func_70(uParam0))
			{
				if (iVar0 == joaat("WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A") || iVar0 == joaat("WORLD_PLAYER_CAMP_FIRE_SQUAT_FEMALE_A"))
				{
					func_73(joaat("SQUAT_TRANS_KNEEL"), 0.5f);
					return false;
				}
				else if (iVar0 == joaat("WORLD_PLAYER_CAMP_FIRE_SIT_MALE_A") || iVar0 == joaat("WORLD_PLAYER_CAMP_FIRE_SIT_FEMALE_A"))
				{
					func_73(joaat("SIT_TRANS_KNEEL"), 0.5f);
					return false;
				}
			}
			if (((func_70(uParam0) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -1208591336)) && func_414(iVar0)) || func_412(&(uParam0->f_49)) == 12)
			{
				func_415(&(uParam0->f_49), 1);
				if (func_412(&(uParam0->f_49)) == 11)
				{
					if (func_245(uParam0->f_49.f_61))
					{
						func_416(uParam0);
					}
					else if (func_106(&(uParam0->f_49), 8192))
					{
						uParam0->f_161 = 1;
						if (func_76(0) && !func_77())
						{
							func_405(uParam0->f_49.f_61, uParam0->f_49.f_62, 1, func_417(), uParam0->f_49.f_11);
						}
						func_45(&(uParam0->f_49), 0);
						func_101(&(uParam0->f_49));
						func_121(&(uParam0->f_135[3]), 1, 1);
						iVar1 = 6000;
						iVar2 = 10000;
						if (func_16(uParam0->f_125, 16384))
						{
							iVar1 = BUILTIN::ROUND((IntToFloat(iVar1) * 0.8f));
							iVar2 = BUILTIN::ROUND((IntToFloat(iVar2) * 0.8f));
						}
						uParam0->f_135[3] = func_266("CRAFT_FASTER", joaat("INPUT_GAME_MENU_ACCEPT"), 2, 0, 0, 6, iVar1, iVar2, 25, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
						func_407(uParam0, 3, 0, 0);
						func_131(uParam0->f_135[3], 0, 1, 1);
						func_127(uParam0->f_135[3], -1067771379, 0, 1);
						func_418();
						uParam0->f_149 = MISC::GET_GAME_TIMER();
						func_59(uParam0, 1);
					}
					else
					{
						func_6(&(uParam0->f_126), 4);
					}
				}
				else if (func_412(&(uParam0->f_49)) == 0)
				{
					func_66(uParam0, 1);
					func_52(2);
				}
				else if (func_412(&(uParam0->f_49)) == 1 || func_113(Global_34, 0))
				{
					func_6(&(uParam0->f_126), 4);
					func_222(&(uParam0->f_49), 32);
					func_66(uParam0, 1);
					func_101(&(uParam0->f_49));
					func_52(2);
					uParam0->f_132 = 6;
					uParam0->f_149 = MISC::GET_GAME_TIMER();
					func_6(&(uParam0->f_126), 128);
					return true;
				}
			}
			break;
		case 1:
			if (func_70(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_149) > 250)
			{
				if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"))
				{
					if (func_73(joaat("KNIFE1_TRANS_KNEEL1"), 1086324736 /* Float: 6f */))
					{
					}
				}
				else if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP_MP_FEMALE_A"))
				{
					func_73(joaat("KNEELFIRECRAFTCUP_TRANS_KNEELFIRECRAFT"), 1086324736 /* Float: 6f */);
					func_59(uParam0, 2);
				}
				else
				{
					func_73(joaat("KNEEL1_TRANS_KNEELFIRECRAFT"), 1086324736 /* Float: 6f */);
					func_59(uParam0, 2);
				}
				uParam0->f_149 = MISC::GET_GAME_TIMER();
			}
			break;
		case 2:
			if (!func_139(uParam0->f_135[3], 0) && (MISC::GET_GAME_TIMER() - uParam0->f_149) > 500)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 1070143458) || func_70(uParam0))
				{
					func_131(uParam0->f_135[3], 1, 1, 1);
				}
			}
			if (func_125(uParam0->f_135[3], 1))
			{
				if (PAD::_0x1252C029FC8EBB4D())
				{
					PAD::_0x709BA8C08C5C008D();
				}
				func_407(uParam0, 3, 1, 0);
				func_121(&(uParam0->f_135[3]), 1, 1);
				if ((((func_89(uParam0->f_49.f_61) == joaat("CONSUMABLE") && !func_153(uParam0->f_49.f_61, -1242251796)) && !func_153(uParam0->f_49.f_61, 1919582297)) && !func_153(uParam0->f_49.f_61, -651046900)) && !func_153(uParam0->f_49.f_61, 127710288))
				{
					uParam0->f_135[5] = func_266("USE_ITEM", joaat("INPUT_GAME_MENU_TAB_RIGHT_SECONDARY"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
					func_127(uParam0->f_135[5], -1067771379, 0, 1);
					func_268(uParam0->f_135[5], 10, 1, 1);
					uParam0->f_135[4] = func_266("STOW_ITEM", joaat("INPUT_GAME_MENU_OPTION"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
					func_268(uParam0->f_135[4], 10, 1, 1);
					func_127(uParam0->f_135[4], -1067771379, 0, 1);
					if (func_296(uParam0->f_49.f_61, -1636519629) == -701492487)
					{
						func_130(uParam0->f_135[5], "DRINK", 1);
						func_131(uParam0->f_135[4], 0, 1, 1);
					}
					if (!func_419(2))
					{
						func_131(uParam0->f_135[5], 0, 1, 1);
					}
					ATTRIBUTE::_0x7E2C766ADB2C5F1A(uParam0->f_49.f_61, 1);
				}
				if (!func_76(0) || func_77())
				{
					uParam0->f_49.f_23 = func_108(uParam0->f_49.f_61, uParam0->f_49.f_62, 1, uParam0->f_49.f_11);
					if (func_98(uParam0->f_135[5]))
					{
						func_131(uParam0->f_135[5], 0, 1, 1);
					}
				}
				uParam0->f_162 = 0;
				func_29(&(uParam0->f_154));
				uParam0->f_149 = MISC::GET_GAME_TIMER();
				func_6(&(uParam0->f_126), 256);
				func_59(uParam0, 3);
			}
			else if (func_139(uParam0->f_135[3], 0))
			{
				func_420(uParam0, iVar0);
			}
			break;
		case 3:
			if (func_70(uParam0))
			{
				if (func_272(&(uParam0->f_154), 0.1f))
				{
					if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_ACTIVE") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_ACTIVE_MP_FEMALE_A"))
					{
						uParam0->f_149 = MISC::GET_GAME_TIMER();
						func_73(joaat("KNEELFIRECRAFTACTIVE_TRANS_KNEELFIRECRAFT"), 1f);
						func_29(&(uParam0->f_154));
					}
					else
					{
						uParam0->f_149 = MISC::GET_GAME_TIMER();
						func_73(joaat("KNEELFIRECRAFT_TRANS_KNEELPOSTFIRECRAFT"), 1086324736 /* Float: 6f */);
					}
				}
			}
			func_421(uParam0);
			if (func_98(uParam0->f_135[5]))
			{
				if (func_139(uParam0->f_135[5], 0) && (func_270(uParam0->f_135[5], 1) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_CRAFTING_EAT"))))
				{
					if (!func_76(0) || func_77())
					{
						func_74(uParam0->f_49.f_61, 1, 1, -142743235);
					}
					ATTRIBUTE::_0xD962F8579D702DB5();
					func_78(uParam0->f_49.f_61, 1, 1, 0, 0);
					func_121(&(uParam0->f_135[5]), 1, 1);
					func_121(&(uParam0->f_135[4]), 1, 1);
					func_422(uParam0, 1);
					func_45(&(uParam0->f_49), 15);
					func_59(uParam0, 5);
					return false;
				}
			}
			if ((!func_98(uParam0->f_135[5]) || (func_139(uParam0->f_135[4], 0) && (func_423(uParam0->f_135[4], 1) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_GAME_MENU_OPTION"))))) || func_113(Global_34, 0))
			{
				func_121(&(uParam0->f_135[5]), 1, 1);
				func_121(&(uParam0->f_135[4]), 1, 1);
				ATTRIBUTE::_0xD962F8579D702DB5();
				uParam0->f_149 = MISC::GET_GAME_TIMER();
				if (func_16(uParam0->f_126, 128))
				{
					func_6(&(uParam0->f_126), 128);
					func_102(&(uParam0->f_49), 0);
					AUDIO::PLAY_SOUND_FRONTEND("Exit", "SSCRFT_Sounds", true, 0);
					func_45(&(uParam0->f_49), 1);
				}
				else
				{
					func_45(&(uParam0->f_49), 15);
				}
				func_422(uParam0, 1);
				func_59(uParam0, 4);
				return false;
			}
			break;
		case 4:
			if (func_70(uParam0) && ((MISC::GET_GAME_TIMER() - uParam0->f_149) > 100 || func_93(&(uParam0->f_154))))
			{
				if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_ACTIVE") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_ACTIVE_MP_FEMALE_A"))
				{
					func_73(joaat("KNEELFIRECRAFTACTIVE_TRANS_KNEELFIRECRAFTCUP_STOW"), 1086324736 /* Float: 6f */);
				}
				else if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_MP_FEMALE_A"))
				{
					func_73(joaat("KNEELFIRECRAFT_TRANS_KNEELFIRECRAFTCUP_STOW"), 1086324736 /* Float: 6f */);
					func_73(joaat("KNEELPOSTFIRECRAFT_TRANS_KNEELFIRECRAFTCUP_STOW"), 1086324736 /* Float: 6f */);
				}
				else
				{
					func_73(joaat("KNEELPOSTFIRECRAFT_TRANS_KNEELFIRECRAFTCUP_STOW"), 1086324736 /* Float: 6f */);
				}
				uParam0->f_149 = MISC::GET_GAME_TIMER();
				func_59(uParam0, 7);
			}
			break;
		case 5:
			func_424();
			if (func_70(uParam0) && ((MISC::GET_GAME_TIMER() - uParam0->f_149) > 100 || func_93(&(uParam0->f_154))))
			{
				if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_ACTIVE") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_ACTIVE_MP_FEMALE_A"))
				{
					func_73(joaat("KNEELFIRECRAFTACTIVE_TRANS_KNEELFIRECRAFTCUP_CONSUME"), 1086324736 /* Float: 6f */);
				}
				else if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_MP_FEMALE_A"))
				{
					func_73(joaat("KNEELFIRECRAFT_TRANS_KNEELFIRECRAFTCUP_CONSUME"), 1086324736 /* Float: 6f */);
					func_73(joaat("KNEELPOSTFIRECRAFT_TRANS_KNEELFIRECRAFTCUP_CONSUME"), 1086324736 /* Float: 6f */);
				}
				else
				{
					func_73(joaat("KNEELPOSTFIRECRAFT_TRANS_KNEELFIRECRAFTCUP_CONSUME"), 1086324736 /* Float: 6f */);
				}
				uParam0->f_149 = MISC::GET_GAME_TIMER();
				func_59(uParam0, 6);
			}
			break;
		case 9:
			if (func_70(uParam0))
			{
				if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP_MP_FEMALE_A"))
				{
					func_73(joaat("KNEELFIRECRAFTCUP_TRANS_KNEEL1"), 1086324736 /* Float: 6f */);
					return false;
				}
				func_52(64);
				uParam0->f_149 = MISC::GET_GAME_TIMER();
				if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"))
				{
					func_73(joaat("KNIFE1_TRANS_COOKKNIFE"), 1086324736 /* Float: 6f */);
					func_47(2);
					func_59(uParam0, 10);
				}
				else
				{
					func_73(joaat("KNEEL1_TRANS_COOKKNIFE"), 1086324736 /* Float: 6f */);
					func_47(2);
					func_59(uParam0, 10);
				}
			}
			break;
		case 10:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -560091334))
			{
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_133, true);
			}
			if (!func_139(uParam0->f_135[3], 0) && (MISC::GET_GAME_TIMER() - uParam0->f_149) > 500)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 1070143458))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("cook_meat_sizzle_loop", uParam0->f_133, "Player_Campfire_Sounds", false, 0, 0);
					AUDIO::_0x9821B68CD3E05F2B("distanceToFlame", 1f, "cook_meat_sizzle_loop", "Player_Campfire_Sounds");
					func_131(uParam0->f_135[3], 1, 1, 1);
					func_425(uParam0->f_135[3], 1);
				}
			}
			if (func_125(uParam0->f_135[3], 1))
			{
				uParam0->f_160 = -1;
				OBJECT::_SET_OBJECT_BURN_LEVEL(uParam0->f_133, 1f, true);
				if (PAD::_0x1252C029FC8EBB4D())
				{
					PAD::_0x709BA8C08C5C008D();
				}
				uParam0->f_135[4] = func_266("STOW_ITEM", joaat("INPUT_GAME_MENU_OPTION"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
				uParam0->f_135[5] = func_266("EAT_MEAT", joaat("INPUT_CRAFTING_EAT"), 1, 0, 0, 0, 570, 4000, 1, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
				func_268(uParam0->f_135[5], 10, 1, 1);
				func_268(uParam0->f_135[4], 10, 1, 1);
				func_127(uParam0->f_135[4], -1067771379, 0, 1);
				func_127(uParam0->f_135[5], -1067771379, 0, 1);
				if (func_426(uParam0->f_49.f_61, 1, 0))
				{
					func_131(uParam0->f_135[4], 0, 1, 1);
				}
				else if (!func_419(2))
				{
					func_131(uParam0->f_135[5], 0, 1, 1);
				}
				func_121(&(uParam0->f_135[3]), 1, 1);
				func_29(&(uParam0->f_154));
				func_52(2);
				uParam0->f_162 = 0;
				if (!func_76(0) || func_77())
				{
					uParam0->f_49.f_23 = func_108(uParam0->f_49.f_61, uParam0->f_49.f_62, 1, uParam0->f_49.f_11);
					func_131(uParam0->f_135[5], 0, 1, 1);
				}
				ATTRIBUTE::_0x7E2C766ADB2C5F1A(uParam0->f_49.f_61, 1);
				AUDIO::_STOP_SOUND_WITH_NAME("cook_meat_sizzle_loop", "Player_Campfire_Sounds");
				func_6(&(uParam0->f_126), 256);
				func_59(uParam0, 11);
			}
			else
			{
				func_420(uParam0, iVar0);
				if (uParam0->f_160 == -1)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 1070143458))
					{
						uParam0->f_160 = MISC::GET_GAME_TIMER();
					}
				}
				else
				{
					fVar3 = func_427(uParam0->f_135[3], 1);
					fVar3 = func_428(fVar3, 0f, 1f);
					OBJECT::_SET_OBJECT_BURN_LEVEL(uParam0->f_133, (1f * fVar3), true);
				}
			}
			break;
		case 11:
			if (func_70(uParam0))
			{
				if (func_272(&(uParam0->f_154), 0.1f))
				{
					uParam0->f_149 = MISC::GET_GAME_TIMER();
					if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ACTIVE_ARTHUR") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ACTIVE_MP_FEMALE_A"))
					{
						func_73(joaat("COOKKNIFE_SEAR_TRANS_BETWEEN_BITES"), 2f);
					}
					else
					{
						func_73(joaat("COOKKNIFE_TRANS_BETWEEN_BITES"), 2f);
					}
				}
			}
			func_421(uParam0);
			if (func_98(uParam0->f_135[5]))
			{
				if (func_139(uParam0->f_135[5], 0) && (func_270(uParam0->f_135[5], 1) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_CRAFTING_EAT"))))
				{
					ATTRIBUTE::_0xD962F8579D702DB5();
					func_78(uParam0->f_49.f_61, 1, 1, 0, 0);
					func_121(&(uParam0->f_135[5]), 1, 1);
					func_121(&(uParam0->f_135[4]), 1, 1);
					func_422(uParam0, 1);
					if (!func_76(0) || func_77())
					{
						func_74(uParam0->f_49.f_61, 1, 1, -142743235);
					}
					uParam0->f_149 = MISC::GET_GAME_TIMER();
					func_59(uParam0, 13);
					return false;
				}
			}
			if (func_98(uParam0->f_135[4]))
			{
				if (((func_139(uParam0->f_135[4], 0) && (func_270(uParam0->f_135[4], 1) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_GAME_MENU_OPTION")))) || func_113(Global_34, 0)) || TASK::_0x916B8E075ABC8B4E(Global_34, 1))
				{
					ATTRIBUTE::_0xD962F8579D702DB5();
					func_121(&(uParam0->f_135[4]), 1, 1);
					func_121(&(uParam0->f_135[5]), 1, 1);
					func_422(uParam0, 1);
					func_59(uParam0, 16);
					return false;
				}
			}
			break;
		case 16:
			if (func_70(uParam0) && ((MISC::GET_GAME_TIMER() - uParam0->f_149) > 250 || func_93(&(uParam0->f_154))))
			{
				if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ACTIVE_ARTHUR") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ACTIVE_MP_FEMALE_A"))
				{
					func_73(joaat("COOKKNIFE_SEAR_TRANS_KNIFE1_STOW"), 1f);
				}
				else if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ARTHUR") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_MP_FEMALE_A"))
				{
					func_73(joaat("COOKKNIFE_TRANS_KNIFE1_STOW"), 1f);
				}
				else
				{
					func_73(joaat("BETWEEN_BITES_TRANS_KNIFE1_STOW"), 1f);
				}
				uParam0->f_149 = MISC::GET_GAME_TIMER();
				func_59(uParam0, 15);
			}
			break;
		case 13:
			func_424();
			if (func_70(uParam0) && ((MISC::GET_GAME_TIMER() - uParam0->f_149) > 250 || func_93(&(uParam0->f_154))))
			{
				if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ACTIVE_ARTHUR") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ACTIVE_MP_FEMALE_A"))
				{
					func_73(joaat("COOKKNIFE_SEAR_TRANS_KNIFE1_EAT"), 1f);
				}
				else if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ARTHUR") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_MP_FEMALE_A"))
				{
					func_73(joaat("COOKKNIFE_TRANS_KNIFE1_EAT"), 1f);
				}
				else
				{
					func_73(joaat("BETWEEN_BITES_TRANS_KNIFE1_EAT"), 2f);
				}
				uParam0->f_149 = MISC::GET_GAME_TIMER();
				func_59(uParam0, 14);
			}
			break;
		case 6:
		case 7:
		case 14:
		case 15:
			if (uParam0->f_124 == 14 || uParam0->f_124 == 6)
			{
				func_424();
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -243011316) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -1208591336))
			{
				func_429(uParam0, 1);
				if (uParam0->f_124 == 14 || uParam0->f_124 == 15)
				{
					if (func_57(256))
					{
						func_111(func_110(joaat("COOKED"), -444296448), 1);
					}
					func_59(uParam0, 12);
				}
				else
				{
					if (func_57(256))
					{
						func_111(func_110(joaat("MADE"), -444296448), 1);
					}
					func_59(uParam0, 8);
				}
			}
			else if ((MISC::GET_GAME_TIMER() - uParam0->f_149) > 750)
			{
				if (!PED::_0xC488B8C0E52560D8(Global_34))
				{
					if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"))
					{
						func_59(uParam0, 12);
					}
					else if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP_MP_FEMALE_A"))
					{
						func_59(uParam0, 8);
					}
					else if (uParam0->f_124 == 14)
					{
						func_59(uParam0, 13);
					}
					else if (uParam0->f_124 == 15)
					{
						func_59(uParam0, 16);
					}
					else if (uParam0->f_124 == 7)
					{
						func_59(uParam0, 4);
					}
					else if (uParam0->f_124 == 6)
					{
						func_59(uParam0, 5);
					}
				}
			}
			break;
		case 8:
		case 12:
			if (func_139(uParam0->f_135[3], 0))
			{
				if (func_113(Global_34, 0))
				{
					func_131(uParam0->f_135[3], 0, 1, 1);
				}
			}
			if (func_270(uParam0->f_135[3], 1))
			{
				func_430(&(uParam0->f_135));
				if (uParam0->f_124 == 12)
				{
					func_416(uParam0);
				}
				else
				{
					func_431(uParam0);
				}
			}
			else if (func_270(uParam0->f_135[7], 1))
			{
				func_430(&(uParam0->f_135));
				func_59(uParam0, 0);
				func_45(&(uParam0->f_49), 15);
				func_6(&(uParam0->f_126), 128);
			}
			else if (func_125(uParam0->f_135[1], 1))
			{
				func_430(&(uParam0->f_135));
				func_59(uParam0, 0);
				func_6(&(uParam0->f_126), 128);
				func_102(&(uParam0->f_49), 0);
				AUDIO::PLAY_SOUND_FRONTEND("Exit", "SSCRFT_Sounds", true, 0);
				func_45(&(uParam0->f_49), 1);
				func_59(uParam0, 0);
				return false;
			}
			else if (func_274(uParam0->f_135[1], 1))
			{
				if (!func_93(&(uParam0->f_49.f_70)))
				{
					func_29(&(uParam0->f_49.f_70));
				}
				else if (func_27(&(uParam0->f_49.f_70), 0.1f))
				{
					func_130(uParam0->f_135[1], "CAMP_REC_QUIT", 1);
				}
			}
			else
			{
				if (func_93(&(uParam0->f_49.f_70)))
				{
					func_273(&(uParam0->f_49.f_70));
				}
				if (func_98(uParam0->f_135[1]))
				{
					func_130(uParam0->f_135[1], "CAMP_REC_BACK", 1);
				}
			}
			break;
	}
	return false;
}

struct<2> func_196(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

int func_197(int iParam0, bool bParam1)
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
	if (func_88(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_432(iVar0) || func_433(iVar0))
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

int func_198(int iParam0, bool bParam1)
{
	if (!func_88(iParam0, 0))
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

void func_199(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_13 != -1)
	{
		return;
	}
	if (!func_208(iParam0))
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

bool func_200(int iParam0, bool bParam1)
{
	var uVar0;
	var uVar5;
	var uVar9;
	struct<5> Var10;
	var uVar15;

	if (!func_88(iParam0, 0))
	{
		return false;
	}
	if (!func_434(iParam0, 856287005, &uVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	Var10 = { func_435() };
	Var10.f_4 = uVar9;
	if (func_436(iParam0, &uVar15, &Var10, 1, 752097756, 0))
	{
		if (bParam1)
		{
			if (!func_437(iParam0, 1))
			{
			}
		}
		if (func_438(iParam0))
		{
			func_200(func_439(iParam0), 1);
		}
		func_440();
		return true;
	}
	return false;
}

int func_201(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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

	if (!func_88(iParam0, 0))
	{
		return 0;
	}
	if (!func_441(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_442(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_443(iParam0, bParam2);
	iVar2 = 0;
	if (func_89(iParam0) == joaat("CLOTHING"))
	{
		if (!func_153(iParam0, 866047851) && !func_153(iParam0, -1979000645))
		{
			bVar3 = true;
		}
	}
	if (func_371(iParam0, 8388608) && !func_444(27))
	{
		func_445(27);
	}
	func_446(iParam0);
	if (!bVar3)
	{
		if (func_153(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			iVar1 = func_198(func_197(iParam0, 1), 0);
			if (WEAPON::IS_WEAPON_VALID(iVar1))
			{
				if (func_107() == -1)
				{
					func_199(iVar1);
				}
				if (func_76(0) && func_447(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
				{
					func_448(iParam0, iVar0, iParam5);
					if (!bParam9)
					{
						bParam2 = false;
					}
				}
				else
				{
					func_449(iParam0, iVar0, iParam5);
				}
			}
		}
		else if (func_89(iParam0) == joaat("WEAPON"))
		{
			if (!func_450(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_89(iParam0) == joaat("AMMO") && func_451(iParam0))
		{
			if (!func_452(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_153(iParam0, -103750053))
		{
			func_111(func_196(joaat("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			func_111(func_110(joaat("COLLECTED"), joaat("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (func_153(iParam0, -121341956) && !func_153(iParam0, 606799272))
		{
			if (iParam0 != joaat("WEAPON_KIT_DETECTOR"))
			{
				func_140(536, 0);
			}
			if (func_153(iParam0, -2017733358) || func_153(iParam0, -1369131378))
			{
			}
		}
		else if (func_153(iParam0, -136654233))
		{
			if (func_153(iParam0, -1021472396))
			{
			}
		}
		else if (func_153(iParam0, -1466706512) && func_153(iParam0, 1147021565))
		{
			func_140(519, 0);
		}
		else if (func_153(iParam0, 1147021565) && func_153(iParam0, -524514947))
		{
		}
		else if (func_153(iParam0, 554195525))
		{
		}
		else if (func_153(iParam0, 589988438))
		{
			if (func_453())
			{
				func_454(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_153(iParam0, 787083290) && func_153(iParam0, 949916894))
		{
			func_455(iParam0);
		}
		else if (func_153(iParam0, -1718133314))
		{
			func_456(iParam0);
		}
		else if (func_153(iParam0, -1738650224))
		{
			func_457(iParam0);
		}
		else if (func_153(iParam0, -1112814642) && func_153(iParam0, 949916894))
		{
			func_458(iParam0);
		}
		else if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1940144.f_21 = 0;
		}
		else if (func_153(iParam0, 1841149704))
		{
			func_459();
		}
		else if (func_153(iParam0, -1979000645))
		{
		}
		else if (func_153(iParam0, 606799272))
		{
		}
		else if (func_153(iParam0, -1112814642) && func_153(iParam0, -1697809989))
		{
		}
		else if (func_153(iParam0, -2017733358) || func_153(iParam0, -1369131378))
		{
		}
		else if (func_153(iParam0, -1921346699))
		{
			return 0;
		}
		else if (func_153(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_23(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1))
					{
						func_201(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_23(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1))
					{
						func_201(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_23(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1))
					{
						func_201(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_23(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1))
					{
						func_201(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_23(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1))
					{
						func_201(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_23(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1))
					{
						func_201(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_153(iParam0, -839724752) && func_371(iParam0, 4))
		{
		}
		else if (func_153(iParam0, 1399091007))
		{
			func_460(iParam0, &iVar2);
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
				func_461(272, func_375(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				func_461(270, func_375(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				func_461(271, func_375(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"):
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940311.f_10903 + 60000))
				{
					func_462(685, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_462(685, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_462(685, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1940311.f_10903 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940311.f_10903 + 60000))
				{
					func_462(685, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_462(686, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1940311.f_10903 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940311.f_10903 + 60000))
				{
					func_462(686, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1940311.f_10903 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				func_140(526, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				func_140(529, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_444(1))
				{
					func_140(522, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				func_140(521, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_107() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				func_140(534, 0);
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
		func_463(&iVar5);
		if (!func_449(iVar5, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_76(0))
		{
			return 1;
		}
		if (func_89(iParam0) == joaat("CLOTHING"))
		{
			func_464(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_76(0) && !func_77())
		{
			Var6.f_1 = 10;
			Var6.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_34, 0, 0, iVar2, &Var6, 0);
			iVar29 = 0;
			while (iVar29 < Var6)
			{
				func_201(Var6.f_1[iVar29], Var6.f_12[iVar29], 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar29++;
			}
		}
		else
		{
			func_251(iVar2, 0);
		}
	}
	Var30 = { func_191(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var30))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var30, iVar0);
	}
	func_465(iParam0);
	if (fParam6 > 0f)
	{
		if (func_153(iParam0, -839724752))
		{
			func_466(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar32 = iParam5 == 1248274121;
		func_190(iParam0, iVar0, 0, bVar32, 0, 0, 0);
	}
	return 1;
}

int func_202(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	var uVar5;

	if (!func_467(iParam0, iParam1))
	{
		return 0;
	}
	Var0.f_4 = func_468(iParam1);
	Var0 = { func_339(0) };
	if (!func_436(iParam0, &uVar5, &Var0, iParam2, 752097756, 1))
	{
		return 0;
	}
	return 1;
}

void func_203(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_469(iParam0) };
	STATS::_STAT_ID_INCREMENT_INT(&Var0, iParam1);
	if (!func_153(iParam0, 1714518167))
	{
		Var0 = { func_470(iParam0) };
		if (Var0.f_1 != 0)
		{
			STATS::_STAT_ID_INCREMENT_INT(&Var0, iParam1);
		}
	}
}

bool func_204(int iParam0)
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

int func_205(int iParam0)
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

bool func_206(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_71(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_207(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_208(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

int func_209(int iParam0)
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

int func_210(int iParam0)
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

int func_211(var uParam0, int iParam1)
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

int func_212(int iParam0)
{
	int iVar0;

	iVar0 = func_165(iParam0);
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

int func_213(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_388(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_390(&Var0, func_389(0));
	}
	if (!func_391(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_209(iVar14);
	return uVar15;
}

int func_214(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

struct<4> func_215(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_193(iParam0, bParam1, 0) };
	return func_281(iParam0, Var0, Var0.f_4, bParam1);
}

bool func_216(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_217(var uParam0)
{
	return func_216(*uParam0, 2);
}

float func_218()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_219(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_220(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_221(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_222(var uParam0, int iParam1)
{
	func_6(uParam0, iParam1);
}

bool func_223(int iParam0)
{
	return (func_471(iParam0) && func_153(iParam0, 1584357097));
}

int func_224(int iParam0)
{
	if (!func_223(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 731907282:
			return 195889874;
		case 1561454517:
			return 465087209;
		case 1254834984:
			return -311177636;
		case 1829957287:
			return 857944907;
		case 919634467:
			return -1729036567;
		case -28339930:
			return -2035393948;
		case 507515628:
			return -284580868;
		case -1975194892:
			return 73453226;
		case 2039957913:
			return 329215271;
		case 1502511939:
			return 1942551232;
		case 1809065934:
			return 518344954;
		case -997271222:
			return 1353200767;
		case -878058438:
			return -668553641;
		case -1617589234:
			return -431273312;
		case -1042952050:
			return -1111852673;
		case -2050900874:
			return -856521084;
		case -1815586685:
			return -412238982;
		case -51500315:
			return -260158053;
		case 1348094862:
			return 863949896;
		case 1646522145:
			return 1693169437;
		case 1156363443:
			return 387193715;
		case 1952092069:
			return -1816797957;
		case -2109461640:
			return -1533903180;
		case -1806184545:
			return 1874334976;
		case -1053842899:
			return -2015093177;
		case -755677768:
			return -1841483015;
		case 767294276:
			return -600422706;
		case 1311814185:
			return -229245945;
		case -840486512:
			return -526428006;
		case -1029170414:
			return 1651235889;
		case -831411723:
			return -882484202;
		case -429434400:
			return 1973137538;
		case -131203731:
			return -1830556910;
		case 1800445393:
			return 596295460;
		case 2047228732:
			return 290265769;
		case -2027203194:
			return 2081091619;
		case -609641686:
			return 516107635;
		case 154924622:
			return 207980728;
		case -142781743:
			return -99130340;
		case -533360838:
			return 1220617347;
		case -464283790:
			return -553725692;
		case -186533746:
			return -1123513064;
		case -1593520704:
			return -769187178;
		case 1260724738:
			return -1889559288;
		case -297375678:
			return 2100623539;
		case 1701653225:
			return -1303234828;
		case 1386939749:
			return 2105724242;
		case 1103717282:
			return 1767482612;
		case 1332088703:
			return 1366042262;
		case 1034120186:
			return 2091613460;
		case 532885562:
			return 1728467402;
		case -452048774:
			return 974561281;
		case -1085571851:
			return 1934791288;
		case -862677113:
			return -1633818354;
		case 1890828381:
			return -1707282708;
		case 1864875333:
			return 1682604808;
		case -320325540:
			return 1029354793;
		case -1278925815:
			return 1640403026;
		case -80071950:
			return -1229833684;
		case -781656240:
			return -2040374903;
		case 525029001:
			return 463034341;
		case 1717296181:
			return 149336704;
		case 1894117705:
			return 1146825064;
		case 1464921218:
			return -979751655;
		case 550403966:
			return -1219424121;
		case 856007660:
			return 1019812717;
		case -1617179117:
			return 862573726;
		case 1784374159:
			return 1100771587;
		case 2081818376:
			return 1455922005;
		case -1615607679:
			return 1686296029;
		case -1894668475:
			return 1957000738;
		case 2095710966:
			return 1656345167;
		case -260985198:
			return -354862110;
		case -1179959034:
			return -146516808;
		case -873142887:
			return -337101316;
		case 245915270:
			return 518337236;
		case 844146134:
			return 966617156;
		case 538640747:
			return 677332424;
		case 560856018:
			return 9691481;
		case -1382149068:
			return -240893062;
		case -188079477:
			return -547676440;
		case 1578729681:
			return 526083803;
		case 1879581870:
			return -1364982418;
		case 948647349:
			return -1058723344;
		default:
			break;
	}
	return 0;
}

bool func_225(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;

	if (!func_472(iParam0, iParam1, &Var0, &iVar31, 0, 1))
	{
		return false;
	}
	iVar34 = -1;
	if (Global_1915715.f_20638)
	{
		iVar34 = Global_1915715.f_20241;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			if (Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH"))
			{
				if (!bParam4 && !func_473(Var0[iVar32 /*2*/].f_1))
				{
					return false;
				}
			}
			else if (Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
			{
				if (!bParam4 && !func_474(Var0[iVar32 /*2*/].f_1))
				{
					return false;
				}
			}
			else
			{
				iVar33 = func_475(iVar34, Var0[iVar32 /*2*/]);
				if (iVar33 != 0)
				{
					iVar35 = func_476(Var0[iVar32 /*2*/], iVar33);
				}
				else
				{
					iVar35 = func_92(Var0[iVar32 /*2*/], 0, bParam3, 1);
				}
				if (iVar35 < Var0[iVar32 /*2*/].f_1)
				{
					*uParam2 = { Var0[iVar32 /*2*/] };
					return false;
				}
			}
			iVar32++;
		}
	}
	return true;
}

int func_226(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	bool bVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;

	if (!func_477(iParam0, iParam1, &Var0, &iVar31, 1, 0))
	{
		return 0;
	}
	bVar33 = ((!bParam3 && func_76(0)) && !func_77());
	iVar34 = -1;
	iVar35 = -1;
	if (Global_1915715.f_20638)
	{
		iVar35 = Global_1915715.f_20241;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == 0)
		{
			Jump @338; //curOff = 103
		}
		else
		{
			iVar36 = func_475(iVar35, Var0[iVar32 /*2*/]);
			if (iVar36 != 0)
			{
				bParam2 = false;
				iVar37 = func_476(Var0[iVar32 /*2*/], iVar36);
			}
			else
			{
				iVar37 = func_92(Var0[iVar32 /*2*/], 0, !bVar33, 1);
			}
			if (bVar33)
			{
				if (func_252(Var0[iVar32 /*2*/]) || func_478(Var0[iVar32 /*2*/]))
				{
					iVar37 = (iVar37 + func_479(Var0[iVar32 /*2*/], 0));
					if (bParam2)
					{
						iVar38 = 0;
						iVar37 = (iVar37 + func_480(7, Var0[iVar32 /*2*/], &iVar38));
					}
				}
				else if (bParam2)
				{
					iVar37 = (iVar37 + (func_481(7, Var0[iVar32 /*2*/]) + func_482(Var0[iVar32 /*2*/])));
				}
			}
			if (iVar37 < Var0[iVar32 /*2*/].f_1)
			{
				return 0;
			}
			iVar37 = (iVar37 / Var0[iVar32 /*2*/].f_1);
			if (iVar34 == -1 || iVar37 < iVar34)
			{
				iVar34 = iVar37;
			}
		}
		iVar32++;
	}
	return iVar34;
}

bool func_227(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	struct<4> Var0;
	struct<10> Var4;
	int iVar26;
	int iVar27;

	func_483(&iParam0);
	if (!func_88(iParam0, 0) && !func_484(func_291(iParam0), 2))
	{
		return false;
	}
	if (!bParam3 && func_214(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam3 = true;
	}
	if (func_485(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		Var0 = { func_389(0) };
		Var4.f_9 = -1591664384;
		if (!func_393(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
		{
			return false;
		}
		else if (func_394(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
		{
			return false;
		}
		if (func_392(iParam0, 1))
		{
			if (!func_393(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
			{
				return false;
			}
			else if (func_394(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
			{
				return false;
			}
		}
		return true;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_486(iParam0, uParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return false;
	}
	else if (iVar26 == 0)
	{
		return true;
	}
	iVar27 = func_338(iParam0, *uParam1, uParam1->f_4, bParam4, bParam3, iParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return true;
	}
	return false;
}

int func_228(int iParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;
	int iVar35;
	struct<14> Var36;
	int iVar52;
	struct<17> Var53;

	if (!func_88(iParam0, 0))
	{
		return -1;
	}
	if (func_89(iParam0) != joaat("FEE"))
	{
		return -1;
	}
	if (func_77())
	{
		bParam3 = true;
	}
	if (iParam5 == -570078785 || iParam5 == -915411861)
	{
		iVar0 = (func_487(iParam0, iParam5, 1, 0, 1, joaat("CURRENCY_CASH")) * iParam2);
		iVar1 = 0;
		if (iVar0 <= 0)
		{
			iVar1 = (func_487(iParam0, iParam5, 1, 0, 1, joaat("CURRENCY_GOLD_BAR")) * iParam2);
			if (iVar1 <= 0)
			{
				return -1;
			}
		}
		if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar0, iVar1))
		{
			return -1;
		}
	}
	else if (func_477(iParam0, iParam5, &Var2, &iVar33, 1, 0))
	{
		iVar35 = 0;
		while (iVar35 < iVar33)
		{
			iVar34 = (Var2[iVar35 /*2*/].f_1 * iParam2);
			if (!func_92(Var2[iVar35 /*2*/], 0, bParam3, 0) >= iVar34)
			{
				return -1;
			}
			iVar35++;
		}
	}
	else
	{
		return -1;
	}
	if (!bParam3 && func_76(0))
	{
		if (iVar0 > 0)
		{
			func_149(joaat("CURRENCY_CASH"), iVar0, -142743235, 0, 0);
		}
		else if (iVar1 > 0)
		{
			func_149(joaat("CURRENCY_GOLD_BAR"), iVar1, -142743235, 0, 0);
		}
		else if (func_488(iParam5))
		{
			iVar35 = 0;
			while (iVar35 < iVar33)
			{
				iVar34 = (Var2[iVar35 /*2*/].f_1 * iParam2);
				func_149(Var2[iVar35 /*2*/], iVar34, -142743235, 0, 0);
				iVar35++;
			}
		}
		return -1;
	}
	Var36.f_9 = 1;
	Var36.f_11 = -1591664384;
	Var36.f_8 = iParam0;
	Var36.f_9 = iParam2;
	Var36.f_13 = iParam5;
	Var36.f_12 = -142743235;
	iVar52 = func_489(joaat("SPEND"), &Var36, bParam4);
	if (iVar52 == -1)
	{
	}
	else
	{
		Var53.f_7 = -142743235;
		Var53.f_16 = -1;
		StringCopy(&(Var53.f_12), sParam1, 32);
		func_233(iVar52, Var53);
	}
	return iVar52;
}

bool func_229(int* iParam0, int iParam1, var uParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;

	if (!func_490(iParam0, 0))
	{
		return false;
	}
	if (iParam4 == 0)
	{
		iParam4 = func_491(iParam1, 0, 1, iParam5, bParam6);
	}
	if (!func_492(iParam1, iParam4, iParam5))
	{
		return false;
	}
	uParam2->f_16 = iParam1;
	uParam2->f_8 = iParam1;
	uParam2->f_9 = 1;
	uParam2->f_13 = iParam4;
	uParam2->f_12 = 1248274121;
	iVar0 = 541670136;
	if (bParam7)
	{
		iVar0 = joaat("BATCH");
	}
	if (!func_493(iParam0, uParam2, iVar0, iParam4, bParam3))
	{
		return false;
	}
	return true;
}

bool func_230(int* iParam0, int iParam1, struct<4> Param2, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11, int iParam12)
{
	struct<16> Var0;

	if (!func_490(iParam0, 0))
	{
		return false;
	}
	if (!func_494(iParam0, iParam1, Param2, iParam6, iParam10, iParam7, iParam11, iParam12))
	{
		return false;
	}
	Var0 = { func_495(iParam1, Param2, iParam6, iParam7, iParam12) };
	Var0.f_13 = iParam10;
	Var0.f_12 = 1248274121;
	*iParam8 = { Var0 };
	if (!func_496(iParam0, &Var0, 2113164098, bParam9, iParam11))
	{
		return false;
	}
	return true;
}

int func_231(int iParam0, int iParam1)
{
	struct<37> Var0;
	int iVar47;
	int iVar48;

	Var0.f_4 = 15;
	Var0.f_36 = 10;
	iVar47 = ITEMDATABASE::_0x12DF9C58201DD19A(iParam0);
	if (iVar47 == 0)
	{
		return 0;
	}
	iVar48 = 0;
	while (iVar48 < iVar47)
	{
		if (ITEMDATABASE::_0x1FC25AEB5F76B38D(iParam0, iVar48, &Var0) && Var0 == iParam1)
		{
			return Var0.f_2;
		}
		iVar48++;
	}
	return 0;
}

int func_232(int iParam0, int iParam1)
{
	struct<37> Var0;

	if (func_497(iParam0))
	{
		return func_231(func_498(iParam0, 1), iParam1);
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		return 0;
	}
	return Var0.f_2;
}

void func_233(int iParam0, struct<17> Param1)
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

int func_234(int iParam0, bool bParam1, int iParam2)
{
	if (func_499(255))
	{
		return 1;
	}
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("FEATURE_XP")))
	{
		return 0;
	}
	if (!func_500(iParam0))
	{
		return 0;
	}
	if (!func_502(func_501(iParam0), !bParam1, iParam2, 0, 0))
	{
		return 0;
	}
	return 1;
}

bool func_235(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_88(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_89(iParam0);
	switch (iParam1)
	{
		case 1:
			if (((func_153(iParam0, -537818634) || func_153(iParam0, -458578204)) && !func_153(iParam0, -1242251796)) && !func_153(iParam0, 127710288))
			{
				return true;
			}
			break;
		case 2:
			if (iVar0 == joaat("AMMO"))
			{
				if (func_153(iParam0, -1588156645))
				{
					return false;
				}
				return true;
			}
			break;
		case 3:
			if (iVar0 == joaat("WEAPON"))
			{
				return true;
			}
			else if (iVar0 == joaat("AMMO"))
			{
				if (func_153(iParam0, -1588156645))
				{
					return true;
				}
			}
			break;
		case 0:
			if ((func_245(iParam0) || func_296(iParam0, -1636519629) == -701492487) || iParam0 == joaat("PROVISION_MOONSHINE_POISON"))
			{
				return true;
			}
			break;
		case 4:
			if (func_153(iParam0, 127710288))
			{
				return true;
			}
			break;
		case 5:
			if (func_153(iParam0, -1242251796))
			{
				return true;
			}
			break;
	}
	return false;
}

int func_236(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_503())
	{
		return 0;
	}
	if (!NETWORK::_0xDD73C9838CE7181D())
	{
		return 0;
	}
	if (func_504())
	{
		return 0;
	}
	iVar0 = func_505(iParam0);
	iVar1 = func_506(iVar0, 2);
	if (iVar1 >= 5)
	{
		return 0;
	}
	if (!func_502(func_507(iParam0), 0, 255, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_237(int iParam0, int iParam1)
{
	var uVar0;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, 1);
	if (iVar4 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_238(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_239(int iParam0)
{
	return iParam0;
}

void func_240(int iParam0)
{
	if (!func_508(iParam0))
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

bool func_241(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar1 = ENTITY::_0x84CCF9A12942C83D(*iParam0, iVar0, 1, 1, 0, 0);
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar3 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0);
		iVar4 = MISC::_GET_ENTITY_FROM_ITEM(iVar3);
		if (ENTITY::IS_ENTITY_DEAD(iVar4))
		{
			ITEMSET::DESTROY_ITEMSET(iVar0);
			return true;
		}
		iVar2++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return false;
}

bool func_242(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951255[iParam0 /*23*/].f_1 && iParam1) != 0;
}

void func_243(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_247(iParam0, 1);
	func_248(iParam0, 1);
	func_249(iParam0, 128);
}

int func_244(int iParam0)
{
	switch (iParam0)
	{
		case joaat("A_C_HAWK_01"):
		case joaat("A_C_CORMORANT_01"):
		case joaat("A_C_SONGBIRD_01"):
		case joaat("A_C_ORIOLE_01"):
		case joaat("A_C_ROBIN_01"):
		case joaat("A_C_ROSEATESPOONBILL_01"):
		case joaat("A_C_SPARROW_01"):
		case joaat("A_C_OWL_01"):
		case joaat("A_C_RAVEN_01"):
		case joaat("A_C_CRANEWHOOPING_01"):
		case joaat("A_C_REDFOOTEDBOOBY_01"):
		case joaat("A_C_CEDARWAXWING_01"):
		case joaat("A_C_SEAGULL_01"):
		case joaat("A_C_CROW_01"):
		case joaat("A_C_PIGEON"):
		case joaat("A_C_LOON_01"):
		case joaat("A_C_WOODPECKER_01"):
		case joaat("A_C_WOODPECKER_02"):
		case joaat("A_C_EGRET_01"):
		case joaat("A_C_HERON_01"):
		case joaat("A_C_VULTURE_01"):
		case joaat("A_C_CALIFORNIACONDOR_01"):
		case joaat("A_C_EAGLE_01"):
		case joaat("A_C_BLUEJAY_01"):
		case joaat("A_C_CARDINAL_01"):
			return joaat("CONSUMABLE_GAMEY_BIRD_COOKED");
		case joaat("A_C_ARMADILLO_01"):
		case joaat("A_C_SNAKEREDBOA_01"):
		case joaat("A_C_CHIPMUNK_01"):
		case joaat("A_C_POSSUM_01"):
		case joaat("A_C_SKUNK_01"):
		case joaat("A_C_BADGER_01"):
		case joaat("A_C_MUSKRAT_01"):
		case joaat("A_C_SNAKEWATER_01"):
		case joaat("A_C_FOX_01"):
		case joaat("A_C_COYOTE_01"):
		case joaat("A_C_SNAKE_01"):
		case joaat("A_C_BEAVER_01"):
		case joaat("A_C_SNAKEBLACKTAILRATTLE_01"):
		case joaat("A_C_RAT_01"):
		case joaat("A_C_RACCOON_01"):
		case joaat("A_C_SNAKEFERDELANCE_01"):
		case joaat("A_C_SQUIRREL_01"):
			return joaat("CONSUMABLE_STRING_MEAT_COOKED");
		case joaat("A_C_IGUANA_01"):
		case joaat("A_C_TURTLESEA_01"):
		case joaat("A_C_FROGBULL_01"):
		case joaat("A_C_IGUANADESERT_01"):
		case joaat("A_C_TURTLESNAPPING_01"):
		case joaat("A_C_TOAD_01"):
			return joaat("CONSUMABLE_HERPTILE_MEAT_COOKED");
		case joaat("A_C_FISHBLUEGIL_01_SM"):
		case joaat("A_C_FISHCHANNELCATFISH_01_XL"):
		case joaat("A_C_FISHLONGNOSEGAR_01_LG"):
		case joaat("A_C_FISHBULLHEADCAT_01_MS"):
		case joaat("A_C_FISHBULLHEADCAT_01_SM"):
		case joaat("A_C_FISHCHANNELCATFISH_01_LG"):
		case joaat("A_C_FISHBLUEGIL_01_MS"):
			return joaat("CONSUMABLE_GRITTY_FISH_MEAT_COOKED");
		case joaat("A_C_BIGHORNRAM_01"):
		case joaat("A_C_GOAT_01"):
		case joaat("A_C_SHEEP_01"):
			return joaat("CONSUMABLE_GRISTLY_MUTTON_COOKED");
		case joaat("A_C_FISHROCKBASS_01_MS"):
		case joaat("A_C_FISHSMALLMOUTHBASS_01_LG"):
		case joaat("A_C_FISHMUSKIE_01_LG"):
		case joaat("A_C_FISHCHAINPICKEREL_01_MS"):
		case joaat("A_C_FISHPERCH_01_MS"):
		case joaat("A_C_FISHLAKESTURGEON_01_LG"):
		case joaat("A_C_FISHREDFINPICKEREL_01_MS"):
		case joaat("A_C_FISHROCKBASS_01_SM"):
		case joaat("A_C_FISHLARGEMOUTHBASS_01_MS"):
		case joaat("A_C_FISHCHAINPICKEREL_01_SM"):
		case joaat("A_C_FISHLARGEMOUTHBASS_01_LG"):
		case joaat("A_C_FISHREDFINPICKEREL_01_SM"):
		case joaat("A_C_FISHNORTHERNPIKE_01_LG"):
		case joaat("A_C_FISHPERCH_01_SM"):
		case joaat("A_C_FISHSMALLMOUTHBASS_01_MS"):
			return joaat("CONSUMABLE_FLAKEY_FISH_COOKED");
		case joaat("A_C_CHICKEN_01"):
		case joaat("A_C_TURKEYWILD_01"):
		case joaat("A_C_TURKEY_01"):
		case joaat("A_C_TURKEY_02"):
		case joaat("A_C_GOOSECANADA_01"):
		case joaat("A_C_ROOSTER_01"):
		case joaat("A_C_PRAIRIECHICKEN_01"):
			return joaat("CONSUMABLE_PLUMP_BIRD_COOKED");
		case joaat("A_C_COW"):
		case joaat("A_C_BULL_01"):
		case joaat("A_C_OX_01"):
		case joaat("A_C_BUFFALO_01"):
			return joaat("CONSUMABLE_PRIME_BEEF_COOKED");
		case joaat("A_C_ELK_01"):
		case joaat("A_C_BUCK_01"):
		case joaat("A_C_MOOSE_01"):
		case joaat("A_C_DEER_01"):
		case joaat("A_C_PRONGHORN_01"):
			return joaat("CONSUMABLE_MATURE_VENISON_COOKED");
		case joaat("A_C_PIG_01"):
		case joaat("A_C_JAVELINA_01"):
		case joaat("A_C_BOAR_01"):
			return joaat("CONSUMABLE_TENDER_PORK_COOKED");
		case joaat("A_C_DUCK_01"):
		case joaat("A_C_RABBIT_01"):
		case joaat("A_C_PHEASANT_01"):
		case joaat("A_C_QUAIL_01"):
			return joaat("CONSUMABLE_GAME_MEAT_COOKED");
		case joaat("A_C_FISHSALMONSOCKEYE_01_MS"):
		case joaat("A_C_FISHRAINBOWTROUT_01_LG"):
		case joaat("A_C_FISHRAINBOWTROUT_01_MS"):
		case joaat("A_C_FISHSALMONSOCKEYE_01_LG"):
			return joaat("CONSUMABLE_SUCCULENT_FISH_COOKED");
		case joaat("A_C_PARROT_01"):
		case joaat("A_C_PELICAN_01"):
		case joaat("A_C_CAROLINAPARAKEET_01"):
			return joaat("CONSUMABLE_EXOTIC_BIRD_COOKED");
		case joaat("A_C_ALLIGATOR_01"):
		case joaat("A_C_ALLIGATOR_02"):
		case joaat("A_C_ALLIGATOR_03"):
		case joaat("A_C_WOLF"):
		case joaat("A_C_BEAR_01"):
		case joaat("A_C_WOLF_MEDIUM"):
		case joaat("A_C_WOLF_SMALL"):
		case joaat("A_C_COUGAR_01"):
		case joaat("A_C_BEARBLACK_01"):
		case joaat("A_C_PANTHER_01"):
			return joaat("CONSUMABLE_BIG_GAME_MEAT_COOKED");
		case joaat("A_C_CRAB_01"):
			return joaat("CONSUMABLE_CRUSTACEAN_MEAT_COOKED");
	}
	return 0;
}

bool func_245(int iParam0)
{
	if (func_89(iParam0) == joaat("CONSUMABLE") && INVENTORY::_0x245D07651B1D183B(iParam0, 16777216))
	{
		return true;
	}
	return false;
}

void func_246(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951255[iParam0 /*23*/].f_1 = (Global_1951255[iParam0 /*23*/].f_1 - (Global_1951255[iParam0 /*23*/].f_1 && iParam1));
}

void func_247(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		if (Global_1951255[iParam0 /*23*/].f_5 == 5 && !func_242(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_248(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1951255[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_249(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951255[iParam0 /*23*/].f_1 = (Global_1951255[iParam0 /*23*/].f_1 || iParam1);
}

int func_250(int iParam0)
{
	int iVar0;

	iVar0 = func_509(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && PED::IS_PED_INJURED(iVar0))
	{
		return iVar0;
	}
	return 0;
}

int func_251(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	if (0 == iParam0)
	{
		return 0;
	}
	Var4.f_1 = 10;
	func_510(&Var4, joaat("LOOT_TYPE_NORMAL"));
	return func_511(iParam0, &Var4, &uVar0, iParam1, 0);
}

bool func_252(int iParam0)
{
	if (!func_88(iParam0, 0))
	{
		return false;
	}
	if (func_153(iParam0, joaat("CI_TAG_ITEM_MEAT_ANIMAL")))
	{
		return true;
	}
	return func_478(iParam0);
}

int func_253(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam1 == 2)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 1)
	{
		iVar0 = 3;
	}
	else
	{
		iVar1 = PED::_GET_PED_QUALITY(iParam0);
		switch (iVar1)
		{
			case 0:
				iVar0 = 0;
				break;
			case 1:
				iVar0 = 1;
				break;
			case -1:
			case 2:
				iVar0 = 2;
				break;
		}
	}
	return iVar0;
}

bool func_254(int iParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("A_C_FISHBLUEGIL_01_SM"):
		case joaat("A_C_CRAB_01"):
		case joaat("A_C_FISHROCKBASS_01_MS"):
		case joaat("A_C_SONGBIRD_01"):
		case joaat("A_C_CHIPMUNK_01"):
		case joaat("A_C_ORIOLE_01"):
		case joaat("A_C_ROBIN_01"):
		case joaat("A_C_FISHCHAINPICKEREL_01_MS"):
		case joaat("A_C_SPARROW_01"):
		case joaat("A_C_FROGBULL_01"):
		case joaat("A_C_FISHPERCH_01_MS"):
		case joaat("A_C_CEDARWAXWING_01"):
		case joaat("A_C_FISHREDFINPICKEREL_01_MS"):
		case joaat("A_C_FISHROCKBASS_01_SM"):
		case joaat("A_C_FISHSALMONSOCKEYE_01_MS"):
		case joaat("A_C_CROW_01"):
		case joaat("A_C_PIGEON"):
		case joaat("A_C_FISHLARGEMOUTHBASS_01_MS"):
		case joaat("A_C_FISHCHAINPICKEREL_01_SM"):
		case joaat("A_C_FISHRAINBOWTROUT_01_MS"):
		case joaat("A_C_WOODPECKER_01"):
		case joaat("A_C_FISHREDFINPICKEREL_01_SM"):
		case joaat("A_C_BAT_01"):
		case joaat("A_C_FISHBULLHEADCAT_01_MS"):
		case joaat("A_C_FISHPERCH_01_SM"):
		case joaat("A_C_WOODPECKER_02"):
		case joaat("A_C_RAT_01"):
		case joaat("A_C_SQUIRREL_01"):
		case joaat("A_C_FISHBULLHEADCAT_01_SM"):
		case joaat("A_C_TOAD_01"):
		case joaat("A_C_BLUEJAY_01"):
		case joaat("A_C_CAROLINAPARAKEET_01"):
		case joaat("A_C_CARDINAL_01"):
		case joaat("A_C_FISHSMALLMOUTHBASS_01_MS"):
		case joaat("A_C_FISHBLUEGIL_01_MS"):
		case joaat("A_C_QUAIL_01"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_255(int iParam0)
{
	if (!func_88(iParam0, 0))
	{
	}
	if (func_153(iParam0, 1286414894))
	{
		return true;
	}
	return false;
}

int func_256(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*iParam0);
	return func_512(iVar0);
}

int func_257(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::_0x31FEF6A20F00B963(iParam0);
	if (iVar0 == 0)
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar0 = func_512(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
		}
	}
	return iVar0;
}

int func_258(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	iParam1 = func_513(iParam0, iParam1, 1, 1, -142743235, 0, 1);
	if (iParam1 <= 0)
	{
		return 1;
	}
	return func_514(iParam0, iParam1, bParam2, iParam3);
}

int func_259(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_331(iVar0);
}

int func_260(int iParam0, int iParam1)
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

bool func_261(int iParam0)
{
	return WEAPON::_IS_WEAPON_BOW(iParam0);
}

int func_262()
{
	return Global_1896622.f_41;
}

void func_263(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_264(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_515(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_516(iParam0))
	{
		return false;
	}
	if (func_517(iParam0))
	{
		return false;
	}
	if ((Global_1900736.f_67 && !func_518(iParam0, 1)) || func_519(32768))
	{
		if (!func_518(iParam0, 262144) || !Global_1904651.f_8686)
		{
			return false;
		}
	}
	if (!func_520())
	{
		return false;
	}
	return true;
}

void func_265(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904651[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904651[iParam0] = uVar0;
}

int func_266(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
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
		if (func_242(iVar0, 2))
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
		func_243(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216 /* Float: 1f */, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

void func_267(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_98(iParam0))
	{
		return;
	}
	iVar0 = func_239(iParam0);
	func_247(iVar0, bParam1);
}

void func_268(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_98(iParam0))
	{
		return;
	}
	iVar0 = func_239(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1951255[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1951255[iVar0 /*23*/].f_3, iParam1, iParam2);
}

void func_269(var uParam0, char* sParam1)
{
	int iVar0;

	if (func_98(*uParam0))
	{
		iVar0 = func_239(*uParam0);
		if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iVar0 /*23*/].f_3))
		{
			HUD::_UIPROMPT_SET_TAG(Global_1951255[iVar0 /*23*/].f_3, sParam1);
		}
	}
}

bool func_270(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_98(iParam0))
	{
		return false;
	}
	iVar0 = func_239(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(Global_1951255[iVar0 /*23*/].f_3);
}

bool func_271()
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = PAD::GET_DISABLED_CONTROL_NORMAL(0, joaat("INPUT_MOVE_LR"));
	fVar1 = PAD::GET_DISABLED_CONTROL_NORMAL(0, joaat("INPUT_MOVE_UD"));
	fVar2 = ((fVar0 * fVar0) + (fVar1 * fVar1));
	if (fVar2 >= (0.9f * 0.9f))
	{
		return true;
	}
	return false;
}

bool func_272(var uParam0, float fParam1)
{
	if (func_27(uParam0, fParam1))
	{
		func_273(uParam0);
		return true;
	}
	return false;
}

void func_273(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_274(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_98(iParam0))
	{
		return false;
	}
	iVar0 = func_239(iParam0);
	if (!HUD::_UIPROMPT_HAS_HOLD_MODE(Global_1951255[iVar0 /*23*/].f_3))
	{
		return PAD::IS_CONTROL_PRESSED(2, Global_1951255[iVar0 /*23*/].f_4);
	}
	return HUD::_UIPROMPT_IS_HOLD_MODE_RUNNING(Global_1951255[iVar0 /*23*/].f_3);
}

bool func_275(var uParam0)
{
	int iVar0;

	uParam0->f_130 = func_58();
	iVar0 = func_35(uParam0);
	if ((((uParam0->f_131 == -1 || iVar0 == uParam0->f_131) && (uParam0->f_132 == 0 || func_521(uParam0->f_130, uParam0->f_132))) || (uParam0->f_131 == -1 && func_521(uParam0->f_130, uParam0->f_132))) && !(PED::_0xC488B8C0E52560D8(Global_34) || PED::_0x2DC0E8DCBD3546E9(Global_34)))
	{
		uParam0->f_129 = iVar0;
		return true;
	}
	return false;
}

void func_276(var uParam0)
{
	int iVar0;

	iVar0 = PED::_0xC22AA08A8ADB87D4(Global_34);
	if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"))
	{
		if (func_70(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_149) > 500)
		{
			func_73(joaat("KNIFE1_TRANS_KNEEL1"), 2f);
			uParam0->f_149 = MISC::GET_GAME_TIMER();
		}
	}
	else if (iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP") || iVar0 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP_MP_FEMALE_A"))
	{
		if (func_70(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_149) > 500)
		{
			func_73(joaat("KNEELFIRECRAFTCUP_TRANS_KNEEL1"), 2f);
			uParam0->f_149 = MISC::GET_GAME_TIMER();
		}
	}
}

int func_277(var uParam0)
{
	if (uParam0->f_130 == 6 && func_56(1))
	{
		return 1;
	}
	else
	{
		switch (uParam0->f_130)
		{
			case 1:
				func_73(joaat("COFFEE_TRANS_KNEEL"), 1086324736 /* Float: 6f */);
				break;
		}
	}
	return 0;
}

int func_278(var uParam0)
{
	if (uParam0->f_130 == 6 && func_56(1))
	{
		return 1;
	}
	else
	{
		switch (uParam0->f_130)
		{
			case 1:
				func_73(joaat("COFFEE_TRANS_KNEEL"), 1086324736 /* Float: 6f */);
				break;
			case 8:
				func_73(joaat("SQUAT_TRANS_KNEEL"), 0.5f);
				break;
			case 7:
				func_73(joaat("SIT_TRANS_KNEEL"), 0.5f);
				break;
		}
	}
	return 0;
}

bool func_279(var uParam0, var uParam1, char* sParam2, char* sParam3, char* sParam4)
{
	PED::_0x6D07B371E9439019(uParam0);
	return TASK::_0x79197F7D2BB5E73A(uParam0, uParam1, sParam2, sParam3, sParam4, 0);
}

int func_280(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<6> Var1[10];
	int iVar62;
	int iVar63;
	int iVar64;
	struct<16> Var65;
	struct<17> Var81;

	if (func_522(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_214(iParam0, joaat("DEFAULT"));
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_76(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_523(&Var1, &iVar62, iParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -1591664384;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_524(iParam0, &(Var1[iVar63 /*6*/])) };
			Var65.f_12 = iParam2;
			iVar64 = func_489(joaat("USE"), &Var65, 1);
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
			func_233(iVar64, Var81);
			return 1;
		}
		return 0;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_71(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

struct<4> func_281(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_88(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_71(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_282(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<14> Var0;
	int iVar14;
	struct<13> Var15;
	struct<17> Var31;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return false;
	}
	if (func_522(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_397(*uParam1, &Var0, bParam6, 0, -1))
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
	if (!func_76(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_107() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_489(joaat("USE"), &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31.f_16 = -1;
				Var31 = bParam5;
				Var31.f_7 = iParam4;
				func_233(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_71(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_283(int iParam0)
{
	if (func_153(iParam0, 1573112293))
	{
		return func_525(iParam0);
	}
	if (func_526(iParam0))
	{
		return func_527();
	}
	switch (func_165(iParam0))
	{
		case -77448735:
			if (func_528(iParam0))
			{
				return func_525(iParam0);
			}
			break;
		case -1393202694:
		case 2041469314:
			return func_525(iParam0);
		case -1520388130:
		case 1802292908:
			return func_529();
		case -2061583405:
		case 81053684:
		case 1477698721:
			return func_530();
		case -525676072:
			return func_530();
		case 1779021115:
			if (iParam0 == joaat("WEAPON_KIT_CAMERA") || iParam0 == joaat("WEAPON_KIT_CAMERA_ADVANCED"))
			{
				return func_531();
			}
			return func_532();
		case -1823706425:
			if (iParam0 == joaat("KIT_CAMP_WILDERNESS"))
			{
				return func_533();
			}
			else
			{
				return func_534();
			}
			break;
		case -854348463:
			return func_535();
		case -2101244071:
		case 664784405:
		case 874188557:
		case 2020212423:
			return func_536();
		default:
			if (func_88(iParam0, 0))
			{
				if (func_153(iParam0, 1919582297))
				{
					return func_537();
				}
				else if (iParam0 == joaat("UPGRADE_UPG_MORTAR_PESTLE") || iParam0 == -1448210800)
				{
					return func_538();
				}
				else if (iParam0 == joaat("KIT_HORSE_BRUSH"))
				{
					return func_539();
				}
				else if (func_153(iParam0, 1147021565))
				{
					return func_540();
				}
			}
			return func_541();
	}
	return func_541();
}

bool func_284(bool bParam0, int iParam1)
{
	int iVar0;

	if ((Global_1940258.f_6 || PED::IS_PED_DEAD_OR_DYING(Global_34, true)) || ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		return false;
	}
	if (func_107() == 0)
	{
		if (func_542(131072))
		{
			return false;
		}
	}
	if (!func_16(iParam1, 1))
	{
		if (func_542(1024))
		{
			return false;
		}
	}
	if (Global_1940258.f_16)
	{
		return false;
	}
	if (!func_16(iParam1, 2) && func_542(32))
	{
		return false;
	}
	if (!func_16(iParam1, 4))
	{
		if (func_542(4096))
		{
			return false;
		}
	}
	if (!func_16(iParam1, 8) && func_542(512))
	{
		return false;
	}
	if (!func_16(iParam1, 512) && !func_543(bParam0))
	{
		return false;
	}
	if (!func_16(iParam1, 262144) && !func_544(bParam0, func_16(iParam1, 524288)))
	{
		return false;
	}
	if (!func_16(iParam1, 64) && !func_545(bParam0, iParam1, 1))
	{
		return false;
	}
	if (!func_16(iParam1, 128))
	{
		if (func_546(Global_34, 1868526510) || PED::IS_PED_ON_MOUNT(Global_34))
		{
			if (bParam0)
			{
				func_164("ITEM_UNUSABLE_FULLY_MOUNTED", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (!func_16(iParam1, 16))
	{
		if (func_547(Global_34))
		{
			iVar0 = PED::GET_MOUNT(Global_34);
			if (!func_548(iVar0, 1))
			{
				if (bParam0)
				{
					func_164("ITEM_UNUSABLE_HORSE_SPEED", 10000, 0, 0, 0, 1);
				}
				return false;
			}
		}
	}
	if (!func_16(iParam1, 256) && func_542(8192))
	{
		return false;
	}
	if (!func_16(iParam1, 1024) && func_542(65536))
	{
		if (bParam0)
		{
			func_164("ITEM_UNUSABLE_CINEMATIC_CAM", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!func_16(iParam1, 2048))
	{
		if (func_542(32768))
		{
			return false;
		}
	}
	if (!func_16(iParam1, 4096))
	{
		if (func_542(16384))
		{
			return false;
		}
	}
	if (!func_16(iParam1, 8192))
	{
		if (!func_542(16))
		{
			return false;
		}
	}
	if (!func_16(iParam1, 67108864))
	{
		if (!func_542(268435456))
		{
			return false;
		}
	}
	if (!func_16(iParam1, 16384))
	{
		if (func_542(256))
		{
			return false;
		}
	}
	if (!func_16(iParam1, 32768))
	{
		if (func_147())
		{
			if (bParam0)
			{
				func_164("ITEM_UNUSABLE_SATCHEL_OPEN", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (!func_16(iParam1, 131072))
	{
		if (!func_542(524288))
		{
			return false;
		}
	}
	if (!func_16(iParam1, 65536))
	{
		if (!func_542(262144))
		{
			return false;
		}
	}
	if (!func_16(iParam1, 1048576))
	{
		if (!func_542(2097152))
		{
			return false;
		}
	}
	if (!func_16(iParam1, 2097152))
	{
		if (!func_542(8388608))
		{
			return false;
		}
	}
	if (!func_16(iParam1, 4194304))
	{
		if (!func_542(16777216))
		{
			return false;
		}
	}
	if (!func_16(iParam1, 8388608))
	{
		if (func_542(33554432))
		{
			return false;
		}
	}
	if (!func_16(iParam1, 16777216))
	{
		if (func_542(67108864))
		{
			return false;
		}
	}
	if (!func_16(iParam1, 33554432))
	{
		if (func_542(134217728))
		{
			return false;
		}
	}
	if (func_542(64))
	{
		return false;
	}
	else if (func_542(128))
	{
		return false;
	}
	else if (func_542(1048576))
	{
		return false;
	}
	else if (func_542(4))
	{
		return false;
	}
	if (!func_16(iParam1, 134217728))
	{
		if (func_57(256))
		{
			return false;
		}
	}
	return true;
}

bool func_285()
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return false;
	}
	if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_34))
	{
		iVar0 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_34);
		iVar1 = iVar0;
		if (iVar1 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL") && iVar1 != joaat("WORLD_PLAYER_MP_STEW_POT_DONATION"))
		{
			return true;
		}
	}
	return false;
}

bool func_286(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715.f_20638;
	}
	return (Global_1915715.f_20638 || Global_1915715.f_22504.f_1);
}

var func_287(int iParam0, int iParam1)
{
	return DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940311.f_1433.f_54.f_85);
}

int func_288()
{
	return Global_1915715.f_22504.f_5;
}

char* func_289()
{
	int iVar0;
	struct<2> Var1;
	int iVar3;

	iVar0 = func_288();
	switch (iVar0)
	{
		case 0:
			return "SHOPS_HANDHELD_FAIL_NONE";
		case 1:
			return "SHOPS_HANDHELD_FAIL_NOT_READY";
		case 3:
			return "SHOPS_HANDHELD_FAIL_DISABLED";
		case 4:
			return "SHOPS_HANDHELD_FAIL_INSTANCED";
		case 5:
			return "SHOPS_HANDHELD_FAIL_SHOP_CL";
		case 6:
			return "SHOPS_HANDHELD_FAIL_NOT_OWN";
		case 9:
			return "SHOPS_HANDHELD_FAIL_WAIT_FOR_FREEROAM";
		case 7:
			return "SHOPS_HANDHELD_FAIL_PVP_ASSA";
		case 8:
			return "SHOPS_HANDHELD_FAIL_SHOPS_DISABLED_THIS_FRAME";
		case 12:
			return "SHOPS_HANDHELD_FAIL_PLAYER_DIED";
		case 13:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_COMBAT";
		case 11:
			return "SHOPS_HANDHELD_FAIL_PLAYER_RIDING";
		case 14:
			return "SHOPS_HANDHELD_FAIL_PLAYER_USING_TURRET";
		case 15:
			return "SHOPS_HANDHELD_FAIL_PLAYER_FALLING";
		case 16:
			return "SHOPS_HANDHELD_FAIL_PLAYER_INSPECTING";
		case 17:
			return "SHOPS_HANDHELD_FAIL_PLAYER_CARRYING";
		case 18:
			return "SHOPS_HANDHELD_FAIL_PLAYER_BROWSING";
		case 19:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_SCENARIO";
		case 20:
			return "SHOPS_HANDHELD_FAIL_PLAYER_SPECTATING";
		case 21:
			return "SHOPS_HANDHELD_FAIL_PLAYER_BRUSHING";
		case 22:
			return "SHOPS_HANDHELD_FAIL_IN_DEEP_WATER";
		case 23:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME";
		case 24:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_ARCHERY";
		case 25:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_CHALLENGE";
		case 26:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_DEAD_DROP";
		case 27:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_GOLDEN_SHOWDOWN";
		case 28:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_HOT_PROPERTY";
		case 29:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_KING_OF_THE_CASTLE";
		case 30:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_KING_OF_THE_RAILS";
		case 31:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_WRECKAGE";
		case 32:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_CONDOR_EGG";
		case 33:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_ANIMAL_TAGGING";
		case 35:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_PROTECT_LEGENDARY_ANIMAL";
		case 34:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_WILDLIFE_PHOTOGRAPHER";
		case 37:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV";
		case 39:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_BIGGEST_FISH";
		case 40:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_FLYING_BIRD";
		case 41:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_HERBALIST";
		case 36:
			return "SHOPS_HANDHELD_FAIL_MISSION_FEUD";
		case 38:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_HUNT_THE_POSSE_LEADER";
		case 42:
			return "SHOPS_HANDHELD_FAIL_PLAYER_MATCHMAKING";
		case 46:
			Var1 = -1;
			Var1.f_1 = -1;
			Var1 = { func_85(0) };
			if (!func_86(Var1))
			{
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
			}
			iVar3 = func_549(&Var1, 1);
			if (iVar3 == -1)
			{
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
			}
			if (!func_550(iVar3, 461218520, 1))
			{
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
			}
			return func_552(func_551(iVar3, 461218520));
	}
	return "";
}

void func_290(int iParam0)
{
	Global_1915715.f_22504.f_5 = iParam0;
}

int func_291(int iParam0)
{
	return iParam0;
}

int func_292(int iParam0, int iParam1)
{
	if (!func_484(iParam0, 2))
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

int func_293(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 49)
	{
		if (func_553(iVar0, iParam0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_294(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_554(iParam0))
	{
		return 1;
	}
	if (!func_555(iParam0))
	{
		return 5;
	}
	if (!bParam1 && Global_1211392.f_48[iParam0 /*21*/].f_17)
	{
		if (bParam2 || Global_1211392.f_1.f_20 != 0)
		{
			return 2;
		}
	}
	if (!bParam2 && !func_556(iParam0))
	{
		return 3;
	}
	if (func_557(iParam0) && !func_558())
	{
		return 4;
	}
	return 0;
}

bool func_295(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;

	switch (func_296(iParam0, -949239683))
	{
		case -1420737577:
			if (!bParam1)
			{
				iVar0 = 2129866661;
				if (bParam2)
				{
					iVar0 = 1607869040;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 1712126263:
			if (!bParam1)
			{
				iVar0 = 1589555562;
				if (bParam2)
				{
					iVar0 = -1424266966;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -1229959999:
			if (!bParam1)
			{
				iVar0 = 1159762194;
				if (bParam2)
				{
					iVar0 = -1791047090;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -1050374492:
			if (!bParam1)
			{
				iVar0 = 343713021;
				if (bParam2)
				{
					iVar0 = 760057945;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 1513351077:
			if (!bParam1)
			{
				iVar0 = 889797228;
				if (bParam2)
				{
					iVar0 = -1043439814;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -1565009253:
			if (!bParam1)
			{
				iVar0 = 1254219723;
				if (bParam2)
				{
					iVar0 = -2077441721;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 733893097:
			if (!bParam1)
			{
				iVar0 = 436157482;
				if (bParam2)
				{
					iVar0 = 1972630951;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -164980960:
			if (!bParam1)
			{
				iVar0 = -138141811;
				if (bParam2)
				{
					iVar0 = 2000759837;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 1894156335:
			if (!bParam1)
			{
				iVar0 = 1801769345;
				if (bParam2)
				{
					iVar0 = 374699583;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 871191033:
			if (!bParam1)
			{
				iVar0 = joaat("DOCUMENT_INSPECT@PAPER_D2_H32_ROLLED_INTRO");
				if (bParam2)
				{
					iVar0 = joaat("DOCUMENT_INSPECT@PAPER_D2_H32_ROLLED_BASE");
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -1273369295:
			if (!bParam1)
			{
				iVar0 = -27851152;
				if (bParam2)
				{
					iVar0 = -1340223099;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 82200319:
			if (!bParam1)
			{
				iVar0 = joaat("DOCUMENT_INSPECT@NEWSPAPER_INTRO");
				if (bParam2)
				{
					iVar0 = joaat("DOCUMENT_INSPECT@NEWSPAPER_BASE");
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -873135685:
			if (!bParam1)
			{
				iVar0 = -1418730365;
				if (bParam2)
				{
					iVar0 = -1570312122;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 24248412:
			if (!bParam1)
			{
				iVar0 = 1014486005;
				if (bParam2)
				{
					iVar0 = 416212934;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 10252101:
			if (!bParam1)
			{
				iVar0 = -1246302402;
				if (bParam2)
				{
					iVar0 = -1791047090;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
	}
	return false;
}

int func_296(int iParam0, int iParam1)
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

bool func_297()
{
	return Global_1952637.f_1675.f_1[1 /*3*/].f_1 == joaat("POMADE");
}

bool func_298(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return false;
	}
	if (func_559(*uParam0, joaat("HATS"), 0))
	{
		return true;
	}
	return false;
}

void func_299(int iParam0)
{
	int iVar0;

	iVar0 = joaat("USE_HANDFULL_SATCHEL_LEFT_HAND_QUICK");
	switch (func_560())
	{
		case 0:
			iVar0 = joaat("USE_HANDFULL_SATCHEL_LEFT_HAND_QUICK");
			break;
		case 1:
			iVar0 = joaat("USE_HANDFULL_SATCHEL_UNARMED_QUICK");
			break;
		case 3:
			iVar0 = joaat("USE_HANDFULL_SATCHEL_RIFLE_QUICK");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		if (func_153(iParam0, 1573112293))
		{
			func_562(func_561(iParam0), 1, 1);
		}
		func_563(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_564(iParam0);
		func_74(iParam0, 1, 0, 562618531);
	}
}

void func_300(int iParam0)
{
	int iVar0;

	iVar0 = 16939881;
	switch (func_560())
	{
		case 0:
			iVar0 = 16939881;
			break;
		case 1:
			iVar0 = -1165614444;
			break;
		case 3:
			iVar0 = 968591133;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_563(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_564(iParam0);
		func_74(iParam0, 1, 0, 562618531);
	}
}

void func_301(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = -45077177;
	switch (func_560())
	{
		case 0:
			if (bParam1)
			{
				iVar0 = -2137817968;
			}
			else
			{
				iVar0 = -45077177;
			}
			break;
		case 1:
			if (bParam1)
			{
				iVar0 = -1947358597;
			}
			else
			{
				iVar0 = 36807409;
			}
			break;
		case 3:
			if (bParam1)
			{
				iVar0 = -750686877;
			}
			else
			{
				iVar0 = 1293288723;
			}
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_563(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_564(iParam0);
		func_74(iParam0, 1, 0, 562618531);
	}
}

void func_302(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 1700817728;
	switch (func_560())
	{
		case 0:
			if (bParam1)
			{
				iVar0 = -447623645;
			}
			else
			{
				iVar0 = 1700817728;
			}
			break;
		case 1:
			if (bParam1)
			{
				iVar0 = 1880532390;
			}
			else
			{
				iVar0 = -480771797;
			}
			break;
		case 3:
			if (bParam1)
			{
				iVar0 = 468890170;
			}
			else
			{
				iVar0 = 764367205;
			}
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_563(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_564(iParam0);
		func_74(iParam0, 1, 0, 562618531);
	}
}

void func_303(int iParam0)
{
	int iVar0;

	iVar0 = joaat("USE_LARGE_BOTTLE_COMBAT_LEFT_HAND");
	switch (func_560())
	{
		case 0:
			iVar0 = joaat("USE_LARGE_BOTTLE_COMBAT_LEFT_HAND");
			break;
		case 1:
			iVar0 = joaat("USE_LARGE_BOTTLE_COMBAT_RIGHT_HAND");
			break;
		case 3:
			iVar0 = joaat("USE_LARGE_BOTTLE_COMBAT_RIFLE");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_563(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_564(iParam0);
		func_74(iParam0, 1, 0, 562618531);
	}
}

void func_304(int iParam0)
{
	int iVar0;

	iVar0 = 2105609037;
	switch (func_560())
	{
		case 0:
			iVar0 = 2105609037;
			break;
		case 3:
			iVar0 = -457187977;
			break;
		case 1:
			iVar0 = -1595716047;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_563(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_564(iParam0);
		func_74(iParam0, 1, 0, 562618531);
	}
}

void func_305(int iParam0)
{
	int iVar0;

	iVar0 = 1964324114;
	switch (func_560())
	{
		case 0:
			iVar0 = 1964324114;
			break;
		case 3:
			iVar0 = -654111932;
			break;
		case 1:
			iVar0 = 1826089606;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_563(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_564(iParam0);
		func_74(iParam0, 1, 0, 562618531);
	}
}

void func_306(int iParam0)
{
	int iVar0;

	iVar0 = -1530144981;
	switch (func_560())
	{
		case 0:
			iVar0 = -1530144981;
			break;
		case 3:
			iVar0 = -389189374;
			break;
		case 1:
			iVar0 = -312546963;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_563(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_564(iParam0);
		func_74(iParam0, 1, 0, 562618531);
	}
}

void func_307(int iParam0)
{
	int iVar0;

	iVar0 = -1074475556;
	switch (func_560())
	{
		case 0:
			iVar0 = -1074475556;
			break;
		case 3:
			iVar0 = 392506445;
			break;
		case 1:
			iVar0 = -1846586910;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_563(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_564(iParam0);
		func_74(iParam0, 1, 0, 562618531);
	}
}

void func_308(int iParam0)
{
	int iVar0;

	iVar0 = joaat("USE_STIMULANT_INJECTION_QUICK_LEFT_HAND");
	switch (func_560())
	{
		case 0:
			iVar0 = joaat("USE_STIMULANT_INJECTION_QUICK_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("USE_STIMULANT_INJECTION_QUICK_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("USE_STIMULANT_INJECTION_QUICK_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_563(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_564(iParam0);
		func_74(iParam0, 1, 0, 562618531);
	}
}

void func_309(int iParam0)
{
	int iVar0;

	iVar0 = joaat("QUICK_SMOKE_CIGARETTE_LEFT_HAND");
	switch (func_560())
	{
		case 0:
			iVar0 = joaat("QUICK_SMOKE_CIGARETTE_LEFT_HAND");
			break;
		case 1:
			iVar0 = joaat("QUICK_SMOKE_CIGARETTE_RIGHT_HAND");
			break;
		case 3:
			iVar0 = joaat("QUICK_SMOKE_CIGARETTE_RIFLE");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_563(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_564(iParam0);
		func_74(iParam0, 1, 0, 562618531);
	}
}

void func_310(int iParam0)
{
	int iVar0;

	iVar0 = joaat("QUICK_SMOKE_CIGAR_LEFT_HAND");
	switch (func_560())
	{
		case 0:
			iVar0 = joaat("QUICK_SMOKE_CIGAR_LEFT_HAND");
			break;
		case 1:
			iVar0 = joaat("QUICK_SMOKE_CIGAR_RIGHT_HAND");
			break;
		case 3:
			iVar0 = joaat("QUICK_SMOKE_CIGAR_RIFLE");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_563(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_564(iParam0);
		func_74(iParam0, 1, 0, 562618531);
	}
}

void func_311(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = joaat("USE_TONIC_SATCHEL_LEFT_HAND_QUICK");
	switch (func_560())
	{
		case 0:
			iVar0 = joaat("USE_TONIC_SATCHEL_LEFT_HAND_QUICK");
			break;
		case 1:
			iVar0 = joaat("USE_TONIC_SATCHEL_UNARMED_QUICK");
			break;
		case 3:
			iVar0 = joaat("USE_TONIC_SATCHEL_RIFLE_QUICK");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		if (!func_563(Global_34, iParam0, iVar0, 1, 0) && bParam1)
		{
			func_564(iParam0);
			func_74(iParam0, 1, 0, 562618531);
		}
	}
	else
	{
		func_564(iParam0);
		func_74(iParam0, 1, 0, 562618531);
	}
}

void func_312(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = joaat("USE_TONIC_POTENT_SATCHEL_LEFT_HAND_QUICK");
	switch (func_560())
	{
		case 0:
			iVar0 = joaat("USE_TONIC_POTENT_SATCHEL_LEFT_HAND_QUICK");
			break;
		case 1:
			iVar0 = joaat("USE_TONIC_POTENT_SATCHEL_UNARMED_QUICK");
			break;
		case 3:
			iVar0 = joaat("USE_TONIC_POTENT_SATCHEL_RIFLE_QUICK");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		if (!func_563(Global_34, iParam0, iVar0, 1, bParam1) && bParam1)
		{
			func_564(iParam0);
			func_74(iParam0, 1, 0, 562618531);
		}
	}
	else
	{
		func_564(iParam0);
		func_74(iParam0, 1, 0, 562618531);
	}
}

bool func_313(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_314(char* sParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1939493.f_161)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_1939493[iVar0 /*16*/].f_10), sParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_315(int iParam0)
{
	if (func_313(iParam0, 1))
	{
		func_565(1);
	}
}

int func_316(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 0;
		case 3:
			return 3;
		default:
			break;
	}
	return -1;
	return -1;
}

void func_317(int iParam0)
{
	Global_1952637 = (Global_1952637 || iParam0);
}

void func_318(struct<4> Param0)
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
		case 23:
			if (Global_1952637.f_918 >= 25)
			{
				return;
			}
			if (func_566(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1952637.f_918)
				{
					iVar1 = ((Global_1952637.f_923 + iVar0) % 25);
					if ((Global_1952637.f_736[iVar1 /*4*/] == Param0 && Global_1952637.f_736[iVar1 /*4*/].f_1 == Param0.f_1) && Global_1952637.f_736[iVar1 /*4*/].f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_567(Param0);
			Global_1952637.f_736[Global_1952637.f_924 /*4*/] = { Param0 };
			Global_1952637.f_918++;
			Global_1952637.f_924 = (Global_1952637.f_924 + 1 % 25);
			func_317(8);
			break;
		case 24:
		case 25:
			if (Global_1952637.f_919 >= 25)
			{
				return;
			}
			if (func_566(Param0))
			{
				return;
			}
			func_567(Param0);
			Global_1952637.f_635[Global_1952637.f_919 /*4*/] = { Param0 };
			Global_1952637.f_919++;
			func_317(8);
			break;
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 36:
		case 37:
		case 38:
			if (Global_1952637.f_920 >= 20)
			{
				return;
			}
			if (func_566(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1952637.f_920)
				{
					iVar1 = ((Global_1952637.f_921 + iVar0) % 20);
					if ((Global_1952637.f_837[iVar1 /*4*/] == Param0 && Global_1952637.f_837[iVar1 /*4*/].f_1 == Param0.f_1) && Global_1952637.f_837[iVar1 /*4*/].f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_567(Param0);
			Global_1952637.f_837[Global_1952637.f_922 /*4*/] = { Param0 };
			Global_1952637.f_920++;
			Global_1952637.f_922 = (Global_1952637.f_922 + 1 % 20);
			func_317(8);
			break;
			break;
	}
}

bool func_319()
{
	return Global_1952637.f_3484;
}

bool func_320(int iParam0)
{
	if (func_568())
	{
		return false;
	}
	if (!func_88(iParam0, 0))
	{
		return false;
	}
	if (!func_23(iParam0, 1))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	return true;
}

int func_321(int iParam0)
{
	return func_569(iParam0);
}

void func_322(int iParam0, int iParam1)
{
	func_570(iParam0, iParam1);
}

int func_323(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	bVar3 = func_571(iParam0);
	if (func_165(iParam0) == -525676072 || func_153(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_572(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_573();
			}
			else
			{
				iVar0 = func_574();
			}
		}
		else if (bVar1)
		{
			iVar0 = func_575();
		}
		else
		{
			iVar0 = func_576();
		}
	}
	else if (func_577(&iVar2))
	{
		if (func_153(iVar2, -1303648999) || func_165(iVar2) == -525676072)
		{
			iVar0 = func_573();
		}
		else
		{
			iVar0 = func_574();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_575();
	}
	else
	{
		iVar0 = func_576();
	}
	if (iVar0 != 0)
	{
		Global_1952637.f_3483 = MISC::GET_GAME_TIMER();
		TASK::_TASK_ITEM_INTERACTION(Global_34, iParam0, iVar0, 1, iParam1, -1082130432 /* Float: -1f */);
		return 1;
	}
	return 0;
}

bool func_324(int iParam0)
{
	return (Global_1952637 && iParam0) != 0;
}

void func_325()
{
	Global_1952637.f_3467 = 0;
	Global_1952637.f_3467.f_1 = 0;
	Global_1952637.f_3467.f_8 = 0;
	Global_1952637.f_3467.f_2 = 0;
	Global_1952637.f_3467.f_3[0] = 0;
	Global_1952637.f_3467.f_3[1] = 0;
	Global_1952637.f_3467.f_3[2] = 0;
	Global_1952637.f_3467.f_3[3] = 0;
	Global_1952637.f_3467.f_9 = 0;
	Global_1952637.f_3467.f_10 = 0;
	Global_1952637.f_3467.f_11 = 0;
	if (Global_1952637.f_3467.f_12)
	{
		PED::_0x13E7320C762F0477(Global_1952637.f_3467.f_13);
	}
	Global_1952637.f_3467.f_12 = 0;
	func_578(32768);
	func_579(1108822547, 8, 6);
}

bool func_326(int iParam0, bool bParam1)
{
	return func_580(iParam0, 0) < func_581(iParam0, bParam1);
}

bool func_327(int iParam0)
{
	var uVar0;

	return func_582(iParam0, &uVar0);
}

void func_328(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_165(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			if (func_153(iParam0, 1584357097))
			{
				return;
			}
			bVar1 = func_583(iParam0, &(Global_1952637.f_3334.f_28), Global_1952637.f_3334.f_33.f_1, bParam1, bParam5);
			break;
		case 81053684:
			bVar1 = func_583(iParam0, &(Global_1952637.f_3334.f_30), 1, bParam1, bParam5);
			break;
		case -999503751:
			bVar1 = func_583(iParam0, &(Global_1952637.f_3334.f_27), Global_1952637.f_3334.f_33, bParam1, bParam5);
			break;
		case -525676072:
			bVar1 = func_583(iParam0, &(Global_1952637.f_3334.f_29), Global_1952637.f_3334.f_33.f_2, bParam1, bParam5);
			break;
		case -1719060085:
			bVar1 = func_583(iParam0, &(Global_1952637.f_3334.f_31), 1, bParam1, bParam5);
			break;
		case 119907797:
			bVar1 = func_583(iParam0, &(Global_1952637.f_3334.f_32), 1, bParam1, bParam5);
			break;
		case 1388798186:
			bVar1 = func_583(iParam0, &(Global_1952637.f_3334.f_33.f_7), 1, bParam1, bParam5);
			break;
		default:
			if (func_153(iParam0, 160827531))
			{
				bVar1 = func_583(iParam0, &(Global_1952637.f_3334.f_30), 1, bParam1, bParam5);
			}
			break;
	}
	if (!bVar1)
	{
		return;
	}
	func_584();
	if (func_585(iVar0) || (iVar0 != -999503751 && func_153(iParam0, -166674229)))
	{
		INVENTORY::_0x766315A564594401(func_71(bParam5), iParam0, 0);
	}
	func_172(iParam0, iParam3, bParam5);
	if (bParam4)
	{
		func_586(1, iParam0);
	}
	if (bParam2)
	{
		func_587(0, 0);
	}
}

int func_329(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_588();
	}
	if (iParam0 == 1160113249)
	{
		return joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000");
	}
	return joaat("CLOTHING_ITEM_HAT_PZERO_000");
}

void func_330(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (func_589(iParam0, iParam1))
	{
		func_590(iParam0, iParam1, 1, bParam2, iParam3, bParam4);
		return;
	}
}

int func_331(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1952637.f_83[iVar0 /*12*/].f_9 == iParam0)
		{
			return func_591(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

bool func_332(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_592();
	if (iParam2 == 39)
	{
		Var0 = { func_193(iParam0, 1, 0) };
		iParam2 = func_260(func_331(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_324(32768) && iParam2 == 10)
	{
		func_593(1108822547);
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	if (func_334(iParam0, 1))
	{
		func_594(&(Global_1952637.f_1556), &iParam0, iParam2, bParam5);
	}
	if (bParam6)
	{
		func_595(iParam2);
	}
	func_596(iParam2, iVar5);
	func_597(&(Global_1952637.f_1556.f_1[iParam2 /*3*/]), 4, 6);
	func_597(&(Global_1952637.f_1675.f_1[iParam2 /*3*/]), 4, 6);
	func_598(&(Global_1952637.f_1556), iParam0, iParam2, 1, iVar5);
	if (iParam1 == 0)
	{
		iParam1 = Global_1952637.f_1556.f_1[iParam2 /*3*/].f_1;
	}
	Global_1952637.f_1556.f_1[iParam2 /*3*/] = iParam0;
	Global_1952637.f_1556.f_1[iParam2 /*3*/].f_1 = func_599(iParam0, iParam2, iParam1);
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1952637.f_2897)
		{
			if (Global_1952637.f_2897.f_2[iVar6 /*2*/] >= 0 && Global_1952637.f_2897.f_2[iVar6 /*2*/] < 39)
			{
				Global_1952637.f_2764[Global_1952637.f_2897.f_2[iVar6 /*2*/] /*2*/] = 0;
				Global_1952637.f_2764[Global_1952637.f_2897.f_2[iVar6 /*2*/] /*2*/].f_1 = 0;
				func_579(func_591(Global_1952637.f_2897.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_333(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	func_600(&(Global_1952637.f_2897), bParam0, bParam1, bParam2, bParam3);
}

bool func_334(int iParam0, bool bParam1)
{
	if (!func_88(iParam0, 0))
	{
	}
	if (!bParam1 && (iParam0 == joaat("CLOTHING_ITEM_HAIR_NONE") || iParam0 == joaat("CLOTHING_ITEM_BEARD_NONE")))
	{
		return false;
	}
	if (func_153(iParam0, 265372629))
	{
		return true;
	}
	return false;
}

bool func_335(int iParam0, int iParam1, bool bParam2)
{
	struct<4> Var0;
	struct<5> Var4;
	int iVar9;

	Var4 = { func_193(iParam0, bParam2, 0) };
	if (func_334(iParam0, 0))
	{
		iVar9 = func_601(Var4, Var4.f_4, bParam2, -1);
		if (iVar9 != 0)
		{
			Var4 = { func_193(iVar9, bParam2, 0) };
			Var0 = { func_281(iVar9, Var4, Var4.f_4, bParam2) };
			return func_602(Var0, 0, bParam2);
		}
		return true;
	}
	Var0 = { func_281(iParam0, Var4, Var4.f_4, bParam2) };
	return func_602(Var0, iParam1, bParam2);
}

int func_336(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_260(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (Global_1952637.f_1675.f_1[iVar1 /*3*/] == Global_1952637.f_83[iVar1 /*12*/] || Global_1952637.f_1556.f_1[iVar1 /*3*/] == Global_1952637.f_83[iVar1 /*12*/])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_337(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_338(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_88(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_214(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_281(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_71(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_71(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

struct<4> func_339(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_71(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1293346))
			{
				Global_1293346 = { func_281(joaat("CHARACTER"), func_603(), -1591664384, bParam0) };
			}
			return Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_12)))
			{
				Global_1293346.f_12 = { func_281(joaat("CHARACTER"), func_603(), -1591664384, 0) };
			}
			return Global_1293346.f_12;
		}
	}
	return func_281(joaat("CHARACTER"), func_603(), -1591664384, bParam0);
}

int func_340(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_39.f_281;
	}
	return iParam0;
}

bool func_341(int iParam0)
{
	int iVar0;

	iParam0 = func_340(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = func_177(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return false;
	}
	if (func_604(iVar0))
	{
		return true;
	}
	return false;
}

int func_342()
{
	return Global_39.f_281.f_3222;
}

bool func_343()
{
	return Global_1915715.f_22504.f_1;
}

bool func_344(int iParam0)
{
	return (Global_1051439.f_3628 && iParam0) != 0;
}

void func_345(int iParam0)
{
	Global_1051439.f_3628 = (Global_1051439.f_3628 - (Global_1051439.f_3628 && iParam0));
}

void func_346(int iParam0)
{
	Global_1051439.f_3629 = iParam0;
}

bool func_347()
{
	return Global_1915715.f_22504;
}

void func_348()
{
	PAD::_SET_CONTROL_CONTEXT(4, joaat("HANDHELDCATALOGUE"));
}

bool func_349()
{
	return func_344(4);
}

int func_350(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_605())
	{
		return 3;
	}
	if ((SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("PAUSE_MENU")) > 0 && Global_1051439.f_3630 == 0) && !bParam0)
	{
		return 45;
	}
	if (Global_1915715.f_20638)
	{
		return 10;
	}
	if (Global_1051439.f_3718 != 0)
	{
		return 0;
	}
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
		return 12;
	}
	if ((func_606(1106247680 /* Float: 30f */, 0) || PED::_IS_PED_HOGTIED(Global_34)) || PED::_IS_PED_HOGTYING(Global_34))
	{
		return 13;
	}
	if (PED::_0x1D46B417F926D34D(Global_34) || PED::IS_PED_IN_ANY_TRAIN(Global_34))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_USING(Global_34);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
			switch (iVar2)
			{
				case joaat("BREACH_CANNON"):
				case joaat("GATLING_GUN"):
				case joaat("GATLINGMAXIM02"):
				case joaat("HOTCHKISS_CANNON"):
					return 14;
			}
		}
		return 11;
	}
	if (TASK::_0x038B1F1674F0E242(Global_34) && !Global_1915715.f_22504.f_1)
	{
		return 16;
	}
	if (PED::_IS_PED_CARRYING(Global_34))
	{
		return 17;
	}
	if (TASK::_0xD04241BBF6D03A5E(PLAYER::PLAYER_PED_ID()) != 0)
	{
		return 18;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(Global_34))
	{
		iVar3 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_34);
		if ((iVar3 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL") && iVar3 != joaat("PROP_PLAYER_DYNAMIC_SEAT_CHAIR_TABLE")) && iVar3 != joaat("PROP_PLAYER_SEAT_CHAIR_DYNAMIC"))
		{
			return 19;
		}
	}
	if (func_607(255))
	{
		return 3;
	}
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		return 44;
	}
	if ((Global_1108365.f_935.f_28 != -1 && Global_1108365.f_935.f_28 != 6) && Global_1108365.f_935.f_28 != 8)
	{
		if (func_608(Global_1108365.f_935.f_28))
		{
			return 36;
		}
		else
		{
			return 37;
		}
	}
	if (PED::_0x2942457417A5FD24(Global_34) >= 1f)
	{
		return 22;
	}
	if (Global_1572887.f_106.f_75 >= 11 && Global_1572887.f_106.f_75 < 15)
	{
		return 42;
	}
	if (((PED::IS_PED_FALLING(Global_34) || PED::IS_PED_CLIMBING(Global_34)) || PED::_IS_PED_SLIDING(Global_34)) || PED::IS_PED_SWIMMING(Global_34))
	{
		return 15;
	}
	if (PED::_0x7FC84E85D98F063D(Global_34))
	{
		return 21;
	}
	if (func_504())
	{
		return 43;
	}
	return -1;
}

void func_351(int iParam0)
{
	int iVar0;

	if (!func_349())
	{
		func_609(1);
	}
	Global_1051439.f_3630 = iParam0;
	iVar0 = func_350(1);
	if (iVar0 != -1)
	{
		func_290(iVar0);
		func_610(0);
	}
	else
	{
		func_610(1);
	}
}

bool func_352()
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return Global_1071686.f_3;
}

bool func_353(int iParam0)
{
	return func_97(Global_1134390[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_73, iParam0);
}

bool func_354()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

bool func_355()
{
	return !func_353(2);
}

bool func_356(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return (Global_1197740.f_1 && iParam0) != 0;
}

void func_357()
{
	if (!UIAPPS::_IS_ANY_APP_RUNNING())
	{
		return;
	}
	UIAPPS::_CLOSE_ALL_APPS();
}

bool func_358(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = func_612(bParam2, func_611(), 1, 0, 1, 1, 1, bParam0, bParam1);
	if (!bVar0)
	{
		return false;
	}
	return true;
}

void func_359(int iParam0)
{
	Global_1896738.f_390 = iParam0;
}

int func_360(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return Global_1134390[iVar0 /*83*/].f_38.f_3;
	}
	return -1;
}

int func_361(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		iVar0 = iParam0;
		iVar1 = 0;
		while (iVar1 <= 7)
		{
			if (Global_1196339.f_1[iVar1 /*26*/].f_1 != -1 && func_613(iVar1, 64, iVar0))
			{
				if (bParam1)
				{
					if (Global_1196898.f_78[iVar1 /*20*/] >= 2)
					{
						return Global_1196339.f_1[iVar1 /*26*/].f_1;
					}
				}
				else if (Global_1196898.f_78[iVar1 /*20*/] >= 5)
				{
					return Global_1196339.f_1[iVar1 /*26*/].f_1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_362(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1196898.f_1[iParam0 /*4*/];
}

var func_363(int iParam0, int iParam1)
{
	return func_614(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("VOLCYLINDER"), iParam0, iParam1);
}

void func_364(struct<19> Param0, var uParam19, bool bParam20, bool bParam21)
{
	struct<21> Var0;

	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam19))
	{
		return;
	}
	Param0 = 0;
	Param0.f_1 = PLAYER::PLAYER_ID();
	Param0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (!bParam20)
	{
		if (Param0.f_18)
		{
			if (bParam21)
			{
				Var0.f_12 = -1;
				Var0.f_12.f_1 = -1;
				Var0.f_14 = 255;
				Var0.f_15 = 255;
				Var0.f_20 = -1;
				Var0 = { Param0 };
				Var0.f_19 = uParam19;
				Var0.f_20 = Param0.f_2;
				func_615(&(Global_1071686.f_23044), Var0);
				return;
			}
		}
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param0, 19, 5, &uParam19);
}

void func_365()
{
	Global_1913694.f_1583 = MISC::GET_GAME_TIMER();
	Global_1913694.f_1581 = 1;
}

void func_366(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	Global_1138048[iVar0 /*8*/].f_7 = (Global_1138048[iVar0 /*8*/].f_7 || iParam0);
}

void func_367(int iParam0, int iParam1, var uParam2)
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

bool func_368()
{
	return !Global_1913504;
}

void func_369(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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

char* func_370(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_371(int iParam0, int iParam1)
{
	if (!func_88(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

bool func_372(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
					*sParam1 = { Var3.f_2[iVar0 /*3*/] };
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

char* func_373(int iParam0)
{
	if (func_153(iParam0, -1995062316))
	{
		return "collectible_arrowheads";
	}
	if (func_153(iParam0, 1239889275))
	{
		return "collectible_liquor_bottles";
	}
	if (func_153(iParam0, 143267379))
	{
		return "collectible_coins";
	}
	if (func_153(iParam0, -944041124))
	{
		return "colectible_heirlooms";
	}
	if (func_153(iParam0, 1562621600))
	{
		return "collectible_jewelry";
	}
	if (func_153(iParam0, -149719013))
	{
		return "collectible_bird_eggs";
	}
	if (func_153(iParam0, 1940829793))
	{
		return "collectible_tarot_cards";
	}
	if (func_153(iParam0, 781094263))
	{
		return "collectible_flowers";
	}
	if (((func_153(iParam0, -352095726) || func_153(iParam0, -2014783736)) || func_153(iParam0, -545064757)) || func_153(iParam0, 679186220))
	{
		return "collectible_found_fossil";
	}
	return "";
}

bool func_374(int iParam0)
{
	if (func_153(iParam0, -189374246))
	{
		if (((func_616(iParam0, joaat("CI_TAG_FOLDER_ANIMAL_SAMPLES_LEGENDARY_ALBINO")) || func_616(iParam0, joaat("CI_TAG_FOLDER_ANIMAL_SAMPLES_LEGENDARY_MELANISTIC"))) || func_616(iParam0, joaat("CI_TAG_FOLDER_ANIMAL_SAMPLES_LEGENDARY_PATTERNED"))) || func_616(iParam0, joaat("CI_TAG_FOLDER_ANIMAL_SAMPLES_LEGENDARY_RED_BLONDE")))
		{
			return true;
		}
	}
	if (func_153(iParam0, -753854379) || func_153(iParam0, 173360570))
	{
		return true;
	}
	return false;
}

int func_375(int iParam0)
{
	int iVar0;

	if (!func_88(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_617(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

bool func_376(int iParam0)
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

int func_377(int iParam0)
{
	struct<19> Var0;
	int iVar35;

	if (!func_88(iParam0, 0))
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

int func_378(int iParam0)
{
	int iVar0;
	struct<10> Var1;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;

	iVar0 = func_618(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_619(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
	if (func_620(Var1, &iVar11, &iVar12, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar12)
		{
			if (ITEMDATABASE::_0x8750F69A720C2E41(iVar11, iVar13, &iVar14) && func_621(iVar14))
			{
				func_622(iVar11);
				return iVar14;
			}
			iVar13++;
		}
		func_622(iVar11);
	}
	return 0;
}

bool func_379(int iParam0, int iParam1)
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

bool func_380(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_88(iParam0, 0) && !func_484(func_291(iParam0), 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return false;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return true;
}

char* func_381(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_382(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_623(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

bool func_383(int iParam0, char* sParam1)
{
	int iVar0;
	char cVar1[128];

	if (!func_88(iParam0, 0))
	{
		return false;
	}
	StringCopy(sParam1, func_624(iParam0), 128);
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (!func_625(iParam0))
	{
		return false;
	}
	StringCopy(&cVar1, func_626(iParam0), 128);
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

char* func_384(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

char* func_385(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_381(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_386(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_627(sParam0, sParam1, iParam2);
	return uVar20;
}

struct<2> func_387(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

struct<14> func_388(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

struct<4> func_389(bool bParam0)
{
	int iVar0;

	iVar0 = func_71(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_4)))
		{
			Global_1293346.f_4 = { func_281(923904168, func_339(bParam0), -740156546, bParam0) };
		}
		return Global_1293346.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_16)))
		{
			Global_1293346.f_16 = { func_281(923904168, func_339(bParam0), -740156546, 0) };
		}
		return Global_1293346.f_16;
	}
	return func_281(923904168, func_339(bParam0), -740156546, 0);
}

void func_390(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_391(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_71(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_392(int iParam0, bool bParam1)
{
	if (func_165(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_628();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_393(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_338(iParam0, *uParam1, iParam2, bParam3, 1, iParam4) > 0;
}

bool func_394(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_629(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_395(bool bParam0)
{
	int iVar0;

	iVar0 = func_71(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_8)))
		{
			Global_1293346.f_8 = { func_281(271701509, func_339(bParam0), 12999093, 0) };
		}
		return Global_1293346.f_8;
	}
	return func_281(271701509, func_339(bParam0), 12999093, 0);
}

bool func_396(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_165(iParam0);
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
			if (func_630(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_397(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_631(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

bool func_398()
{
	if ((Global_1940311.f_10901 != (Global_1940311.f_38.f_203 - 1) || func_633(func_632(0), Global_1940311.f_10893, 0, 1, 1) > 0) || Global_1940311.f_10901 == 15)
	{
		return true;
	}
	func_634();
	if (Global_1940311.f_6)
	{
		return true;
	}
	return false;
}

void func_399(int iParam0)
{
	Global_1940311.f_10 = iParam0;
}

void func_400(int iParam0)
{
	Global_1940311.f_9 = iParam0;
}

void func_401(var uParam0)
{
	StringCopy(&(uParam0->f_20), "CAMP", 8);
}

void func_402(var uParam0)
{
	if (HUD::_DOES_TEXT_DATABASE_EXIST(&(uParam0->f_20)))
	{
		HUD::_TEXT_DATABASE_REQUEST(&(uParam0->f_20));
	}
	TXD::REQUEST_STREAMED_TEXTURE_DICT("satchel_textures", false);
	if (func_106(uParam0, 2))
	{
		return;
	}
	STREAMING::REQUEST_ANIM_DICT("MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A");
	STREAMING::REQUEST_ANIM_DICT("MP_AMB_PLAYER@CRAFTING@FALLBACKS@IN_HAND@FEMALE_A");
	STREAMING::REQUEST_MODEL(joaat("S_AMMO_RIFLE"), false);
	STREAMING::REQUEST_MODEL(joaat("S_AMMO_REPEATER"), false);
	STREAMING::REQUEST_MODEL(joaat("S_AMMO_45MM"), false);
	STREAMING::REQUEST_MODEL(joaat("S_AMMO_9MM"), false);
	STREAMING::REQUEST_MODEL(joaat("S_AMMO_SHOTGUN"), false);
	STREAMING::REQUEST_MODEL(joaat("S_CFT_ARROW"), false);
	STREAMING::REQUEST_MODEL(joaat("W_MELEE_TOMAHAWK01"), false);
	STREAMING::REQUEST_MODEL(joaat("W_MELEE_KNIFE05"), false);
	STREAMING::REQUEST_MODEL(joaat("P_CS_RAG01X"), false);
	STREAMING::REQUEST_MODEL(joaat("S_CFT_MOLOTOV01"), false);
	STREAMING::REQUEST_MODEL(joaat("S_CFT_MOLOTOV02"), false);
	STREAMING::REQUEST_MODEL(joaat("P_MOLOTOVEMPTY01X"), false);
	STREAMING::REQUEST_MODEL(joaat("W_STICK_DYNAMITE01"), false);
	STREAMING::REQUEST_MODEL(joaat("MP006_P_POISONEMPTY01X"), false);
	STREAMING::REQUEST_MODEL(joaat("MP006_S_CFT_POISONBOTTLE01"), false);
	func_635(uParam0);
	if (func_106(uParam0, 4))
	{
		STREAMING::REQUEST_MODEL(joaat("P_WHITEFISHFILET01XB"), false);
		STREAMING::REQUEST_MODEL(joaat("P_REDFISHFILET01XB"), false);
		STREAMING::REQUEST_MODEL(joaat("P_WHITEFLESHYMEAT01XB"), false);
		STREAMING::REQUEST_MODEL(joaat("P_REDBIRDBREAST01XB"), false);
		STREAMING::REQUEST_MODEL(joaat("P_REDEFLESHYMEAT01XB"), false);
	}
}

bool func_403(var uParam0)
{
	if (func_636(&(uParam0->f_20)))
	{
		if (!HUD::_TEXT_DATABASE_HAS_LOADED(&(uParam0->f_20)))
		{
			return false;
		}
	}
	if (!TXD::HAS_STREAMED_TEXTURE_DICT_LOADED("satchel_textures"))
	{
		return false;
	}
	if (func_106(uParam0, 2))
	{
		return true;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A"))
	{
		return false;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MP_AMB_PLAYER@CRAFTING@FALLBACKS@IN_HAND@FEMALE_A"))
	{
		return false;
	}
	if (!func_637(uParam0, &(uParam0->f_48)))
	{
		return false;
	}
	if (!func_637(uParam0, &(uParam0->f_49)))
	{
		return false;
	}
	if (!func_637(uParam0, &(uParam0->f_50)))
	{
		return false;
	}
	if (!func_637(uParam0, &(uParam0->f_51)))
	{
		return false;
	}
	if (!func_637(uParam0, &(uParam0->f_52)))
	{
		return false;
	}
	if (!func_637(uParam0, &(uParam0->f_53)))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_AMMO_RIFLE")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_AMMO_REPEATER")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_AMMO_45MM")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_AMMO_9MM")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_CFT_ARROW")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("W_MELEE_TOMAHAWK01")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("W_MELEE_KNIFE05")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_AMMO_SHOTGUN")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("P_MOLOTOVEMPTY01X")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_CFT_MOLOTOV01")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_CFT_MOLOTOV02")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("W_STICK_DYNAMITE01")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("MP006_P_POISONEMPTY01X")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("MP006_S_CFT_POISONBOTTLE01")))
	{
		return false;
	}
	if (func_106(uParam0, 4))
	{
		if (!STREAMING::HAS_MODEL_LOADED(joaat("P_WHITEFISHFILET01XB")))
		{
			return false;
		}
		if (!STREAMING::HAS_MODEL_LOADED(joaat("P_REDFISHFILET01XB")))
		{
			return false;
		}
		if (!STREAMING::HAS_MODEL_LOADED(joaat("P_WHITEFLESHYMEAT01XB")))
		{
			return false;
		}
		if (!STREAMING::HAS_MODEL_LOADED(joaat("P_REDBIRDBREAST01XB")))
		{
			return false;
		}
		if (!STREAMING::HAS_MODEL_LOADED(joaat("P_REDEFLESHYMEAT01XB")))
		{
			return false;
		}
	}
	return true;
}

int func_404()
{
	int iVar0;
	int iVar1;

	if (!func_577(&iVar0))
	{
		return 0;
	}
	PED::_0x2208438012482A1A(Global_34, false, false);
	PED::_0xC494C76A34266E82(Global_34, 13);
	iVar1 = func_638(iVar0);
	if (iVar1 == -358215195)
	{
		return 0;
	}
	func_639(Global_1952637.f_83[func_260(iVar1, 1) /*12*/], 8);
	func_168(23, 0, 0, 0, 0);
	return 1;
}

int func_405(int iParam0, int iParam1, bool bParam2, bool bParam3, var uParam4)
{
	TELEMETRY::_TELEMETRY_CRAFT_ITEM(iParam0, iParam1, uParam4);
	return func_640(iParam0, iParam1, bParam2, bParam3);
}

int func_406(int iParam0)
{
	int iVar0;

	iVar0 = func_641(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return joaat("P_REDEFLESHYMEAT01XB");
}

void func_407(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (bParam2)
	{
		uParam0->f_49.f_22++;
	}
	if (uParam0->f_49.f_26 == -1)
	{
		iVar0 = func_92(uParam0->f_49.f_61, 0, 0, 0);
		iVar1 = func_642(uParam0->f_49.f_61, 0);
		iVar2 = func_226(uParam0->f_49.f_61, uParam0->f_49.f_62, func_417(), 0);
		if (iVar1 == -1)
		{
			iVar1 = iVar2;
		}
		else
		{
			iVar1 = (iVar1 - iVar0);
		}
		uParam0->f_49.f_26 = func_643(iVar1, iVar2);
	}
	if (func_245(uParam0->f_49.f_61))
	{
		if (bParam3)
		{
			func_130(uParam0->f_135[iParam1], "CAMP_REC_COOK_AGN", 1);
		}
		else
		{
			func_130(uParam0->f_135[iParam1], "CAMP_REC_COOK", 1);
		}
	}
	else if (bParam3)
	{
		if (func_296(uParam0->f_49.f_61, -1636519629) == -701492487)
		{
			func_130(uParam0->f_135[iParam1], "CAMP_REC_BREW_AGN", 1);
		}
		else
		{
			func_130(uParam0->f_135[iParam1], "CAMP_REC_MAKE_AGN", 1);
		}
	}
	else if (func_296(uParam0->f_49.f_61, -1636519629) == -701492487)
	{
		func_130(uParam0->f_135[iParam1], "CAMP_REC_BREW", 1);
	}
	else
	{
		func_130(uParam0->f_135[iParam1], "CAMP_REC_MAKE", 1);
	}
}

bool func_408()
{
	return Global_1940085 == 2;
}

void func_409(int iParam0)
{
	if (iParam0 >= Global_1940085)
	{
		return;
	}
	Global_1940085.f_1 = iParam0;
}

bool func_410()
{
	return Global_1940085 == 1;
}

void func_411(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	struct<2> Var11;
	struct<7> Var33[20];

	if ((func_153(iParam0, 1573112293) || func_153(iParam0, 672467738)) || func_153(iParam0, -550842268))
	{
		bVar10 = true;
	}
	Var11.f_1 = 20;
	ATTRIBUTE::_0xD962F8579D702DB5();
	Global_1940144.f_26 = 0;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iParam0, &Var11))
	{
		iVar0 = 0;
		while (iVar0 < Var11)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(Var11.f_1[iVar0], &(Var33[iVar0 /*7*/])))
			{
				switch (Var33[iVar0 /*7*/].f_1)
				{
					case -943921969:
						fVar1 = func_644(0, (IntToFloat(Var33[iVar0 /*7*/].f_2) / fParam1));
						func_645((IntToFloat(Var33[iVar0 /*7*/].f_2) / fParam1));
						bVar9 = true;
						break;
					case -1104847406:
						fVar3 = func_644(2, (IntToFloat(Var33[iVar0 /*7*/].f_2) / fParam1));
						func_646((IntToFloat(Var33[iVar0 /*7*/].f_2) / fParam1), 0);
						bVar8 = true;
						break;
					case 381158954:
						fVar2 = func_644(1, (IntToFloat(Var33[iVar0 /*7*/].f_2) / fParam1));
						func_647((IntToFloat(Var33[iVar0 /*7*/].f_2) / fParam1));
						break;
					case -416929031:
						fVar4 = func_648((IntToFloat(Var33[iVar0 /*7*/].f_2) / fParam1), (Var33[iVar0 /*7*/].f_5 / fParam1));
						func_649(0, fVar4, 1, 1, bVar10);
						bVar9 = true;
						break;
					case 1857353317:
						fVar5 = func_648((IntToFloat(Var33[iVar0 /*7*/].f_2) / fParam1), (Var33[iVar0 /*7*/].f_5 / fParam1));
						func_649(2, fVar5, 1, 1, bVar10);
						bVar8 = true;
						break;
					case 1681823811:
						fVar6 = func_648((IntToFloat(Var33[iVar0 /*7*/].f_2) / fParam1), (Var33[iVar0 /*7*/].f_5 / fParam1));
						func_649(1, fVar6, 1, 1, bVar10);
						break;
					case -816334026:
						func_650((BUILTIN::TO_FLOAT(Var33[iVar0 /*7*/].f_2) / fParam1), 1);
						break;
					default:
						if (bParam2)
						{
							switch (Var33[iVar0 /*7*/].f_1)
							{
								case 2062242710:
									fVar7 = func_651(BUILTIN::TO_FLOAT(Var33[iVar0 /*7*/].f_3), Var33[iVar0 /*7*/].f_4);
									func_652(19, fVar7, 1, 1);
									bVar9 = true;
									break;
								case -826379728:
									fVar7 = func_651(BUILTIN::TO_FLOAT(Var33[iVar0 /*7*/].f_3), Var33[iVar0 /*7*/].f_4);
									func_652(20, fVar7, 1, 1);
									bVar8 = true;
									break;
								case -1191740624:
									fVar7 = func_651(BUILTIN::TO_FLOAT(Var33[iVar0 /*7*/].f_3), Var33[iVar0 /*7*/].f_4);
									func_652(18, fVar7, 1, 1);
									break;
								case 1869697234:
									fVar7 = func_651(BUILTIN::TO_FLOAT(Var33[iVar0 /*7*/].f_3), Var33[iVar0 /*7*/].f_4);
									func_652(0, fVar7, 1, 1);
									bVar9 = true;
									break;
								case 1342237631:
									fVar7 = func_651(BUILTIN::TO_FLOAT(Var33[iVar0 /*7*/].f_3), Var33[iVar0 /*7*/].f_4);
									func_652(2, fVar7, 1, 1);
									bVar8 = true;
									break;
								case -1240225157:
									fVar7 = func_651(BUILTIN::TO_FLOAT(Var33[iVar0 /*7*/].f_3), Var33[iVar0 /*7*/].f_4);
									func_652(1, fVar7, 1, 1);
									break;
							}
						}
						break;
				}
			}
			iVar0++;
		}
		if (bParam2)
		{
			func_653(iParam0, bVar8, bVar9, 562618531);
		}
		PLAYER::_0x0E1DB1F8F5B561DC(fVar1, fVar2, fVar3, BUILTIN::ROUND(fVar4), BUILTIN::ROUND(fVar6), BUILTIN::ROUND(fVar5));
	}
}

int func_412(var uParam0)
{
	return uParam0->f_10;
}

bool func_413(int iParam0)
{
	int iVar0;

	iVar0 = func_654(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

bool func_414(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP"):
		case joaat("WORLD_PLAYER_CAMP_FIRE_SIT_MALE_A"):
		case joaat("WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A"):
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE"):
		case joaat("WORLD_PLAYER_CAMP_FIRE_SQUAT_FEMALE_A"):
		case joaat("WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR"):
		case joaat("WORLD_PLAYER_CAMP_FIRE_SIT_FEMALE_A"):
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"):
		case joaat("WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_MP_FEMALE_A"):
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP_MP_FEMALE_A"):
			return true;
		default:
			break;
	}
	return false;
}

void func_415(var uParam0, int iParam1)
{
	var uVar0[1];
	int iVar2;
	vector3 vVar3;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;

	uVar0[0] = uParam0->f_1[1];
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34) || Global_1940258.f_6)
	{
		func_44(uParam0, 0, 1);
	}
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Global_34, false);
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_34, 0, 1);
	if (func_107() != -1 && func_655())
	{
		if (func_139(uParam0->f_1[0], 0))
		{
			func_101(uParam0);
			func_112(uParam0);
		}
		return;
	}
	if (func_106(uParam0, 256))
	{
		HUD::_0xC9CAEAEEC1256E54(-469828803);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_Y"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	switch (func_412(uParam0))
	{
		case 2:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (func_656(uParam0))
			{
				func_401(uParam0);
				func_402(uParam0);
				func_657(uParam0);
			}
			if (func_403(uParam0))
			{
				func_45(uParam0, 3);
			}
			break;
		case 3:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (func_107() == 0 && CAM::_0x251241CAEC707106())
			{
				func_101(uParam0);
				return;
			}
			if (func_656(uParam0))
			{
				func_101(uParam0);
				func_657(uParam0);
				if (func_103())
				{
					func_104(0);
				}
			}
			if ((func_106(uParam0, 16) || func_270(uParam0->f_1[0], 1)) || func_106(uParam0, 32))
			{
				func_658(uParam0);
			}
			break;
		case 4:
			if (!func_106(uParam0, 256))
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_659(uParam0))
			{
				func_40(uParam0, 1024);
				func_45(uParam0, 5);
			}
			break;
		case 5:
			if (!func_106(uParam0, 256))
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_660(uParam0))
			{
				func_45(uParam0, 6);
			}
			break;
		case 6:
			if (!func_106(uParam0, 256))
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_661(uParam0))
			{
				func_45(uParam0, 7);
			}
			break;
		case 7:
			if (!func_106(uParam0, 256))
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_656(uParam0))
			{
				func_662(uParam0);
				func_657(uParam0);
				return;
			}
			if (UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("PAUSE_MENU")) || UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("PAUSE_MENU")))
			{
				return;
			}
			if (func_663(uParam0, 0))
			{
				if (func_664(uParam0, func_106(uParam0, 65536)) || ((func_106(uParam0, 2) || func_106(uParam0, 65536)) && UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("CRAFTING"))))
				{
					func_222(uParam0, 65536);
					func_45(uParam0, 8);
				}
				else if (func_106(uParam0, 4))
				{
					func_45(uParam0, 1);
				}
				else
				{
					func_45(uParam0, 0);
				}
			}
			break;
		case 15:
			if (!func_106(uParam0, 256))
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (!func_106(uParam0, 1024))
			{
				func_45(uParam0, 4);
				return;
			}
			if (UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("PAUSE_MENU")) || UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("PAUSE_MENU")))
			{
				return;
			}
			if (func_665(uParam0))
			{
				func_664(uParam0, 1);
				func_45(uParam0, 8);
			}
			break;
		case 8:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("CRAFTING")))
			{
				if (UISTATEMACHINE::_0xF7C180F57F85D0B8(joaat("CRAFTING")))
				{
					Global_1913694.f_1580 = 0;
					func_45(uParam0, 10);
				}
			}
			break;
		case 9:
			if (!func_106(uParam0, 256))
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("PAUSE_MENU")) || UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("PAUSE_MENU")))
			{
				return;
			}
			if (func_656(uParam0))
			{
				func_662(uParam0);
				func_657(uParam0);
				return;
			}
			if (func_663(uParam0, 1))
			{
				func_45(uParam0, 10);
			}
			break;
		case 10:
			func_666(0);
			if (func_656(uParam0))
			{
				func_667(uParam0);
				func_657(uParam0);
			}
			if (func_668(uParam0) || func_669(uParam0))
			{
				return;
			}
			if (Global_1913694.f_1580)
			{
				Global_1913694.f_1580 = 0;
				ATTRIBUTE::_0xD962F8579D702DB5();
				func_670(uParam0);
				uParam0->f_61 = 0;
				uParam0->f_62 = 0;
				func_671(uParam0, 0, 0);
				func_131(uParam0->f_1[5], 0, 1, 1);
				func_45(uParam0, 9);
			}
			else if (func_672(uParam0->f_1[2], 1) || !UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("CRAFTING")))
			{
				if (func_106(uParam0, 16))
				{
					func_45(uParam0, 18);
				}
				else
				{
					func_102(uParam0, 0);
					func_673("Exit", "SSCRFT_Sounds", 1);
					if (func_106(uParam0, 32))
					{
						func_222(uParam0, 32);
						func_45(uParam0, 1);
					}
					else
					{
						func_45(uParam0, 3);
					}
				}
			}
			else if (func_270(uParam0->f_1[7], 1))
			{
				func_674(uParam0);
			}
			else if (func_270(uParam0->f_1[1], 1))
			{
				func_675(uParam0);
			}
			else if (func_270(uParam0->f_1[3], 1))
			{
				ATTRIBUTE::_0xD962F8579D702DB5();
				if (func_106(uParam0, 128))
				{
					func_222(uParam0, 128);
				}
				else
				{
					func_40(uParam0, 128);
				}
				func_670(uParam0);
				func_673("toggle_craftable_all", "SSCRFT_Sounds", 1);
				uParam0->f_61 = 0;
				uParam0->f_62 = 0;
				func_671(uParam0, 0, 0);
				func_131(uParam0->f_1[5], 0, 1, 1);
				func_45(uParam0, 9);
			}
			else if (func_676(uParam0->f_1[5], 0, 1))
			{
				if (func_106(uParam0, 4096))
				{
					func_673("Nav_Left", "SSCRFT_Sounds", 1);
					func_677(uParam0, 0);
				}
			}
			else if (func_676(uParam0->f_1[5], 1, 1))
			{
				if (func_106(uParam0, 4096))
				{
					func_673("Nav_Right", "SSCRFT_Sounds", 1);
					func_677(uParam0, 1);
				}
			}
			else if (func_672(uParam0->f_1[6], 1))
			{
				func_673("toggle_ingredients_effects", "SSCRFT_Sounds", 1);
				func_678(uParam0, 1);
			}
			else
			{
				iVar2 = -813979060;
				while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar2))
				{
					if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iVar2, &vVar3))
					{
						if (vVar3.x == 703281244 || vVar3.x == -722926211)
						{
							func_679(uParam0);
						}
						else if (vVar3.x == -1740156697)
						{
							func_680(uParam0, &vVar3);
						}
						else if (vVar3.x == -1203660660)
						{
							if (vVar3.z == -2127505795)
							{
								func_675(uParam0);
							}
						}
						UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar2);
					}
				}
			}
			break;
		case 11:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
			break;
		case 12:
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::_CREATE_VAR_STRING(0, uParam0->f_61), 1, 0, 0, 0);
			func_666(0);
			iVar7 = PED::_0xC22AA08A8ADB87D4(Global_34);
			iVar8 = func_296(uParam0->f_61, -1636519629);
			if (iVar7 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP") || iVar7 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP_MP_FEMALE_A"))
			{
				if (!PED::_0x68821369A2CEADD5(Global_34, joaat("KNEELFIRECRAFTCUP_TRANS_KNEEL1")))
				{
					PED::_0xD65FDC686A031C83(Global_34, joaat("KNEELFIRECRAFTCUP_TRANS_KNEEL1"), 6f);
					PED::_0x6D07B371E9439019(Global_34);
				}
				return;
			}
			if (iVar8 != -715814988)
			{
				if ((PED::_0xC488B8C0E52560D8(Global_34) || PED::_0x2DC0E8DCBD3546E9(Global_34)) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 1944546609))
				{
					return;
				}
				if (iVar7 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE") || iVar7 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"))
				{
					if (!PED::_0x68821369A2CEADD5(Global_34, joaat("KNIFE1_TRANS_KNEEL1")))
					{
						PED::_0xD65FDC686A031C83(Global_34, joaat("KNIFE1_TRANS_KNEEL1"), 6f);
						PED::_0x6D07B371E9439019(Global_34);
					}
					return;
				}
				else
				{
					WEAPON::_HIDE_PED_WEAPONS(Global_34, 2, false);
				}
				if (((((((((iVar8 == 414472632 && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_48, true, false)) || (iVar8 == -1136843638 && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_50, true, false))) || (uParam0->f_69 != 0 && !STREAMING::HAS_MODEL_LOADED(uParam0->f_69))) || (iVar8 == -732326901 && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_52, true, false))) || (iVar8 == 786205940 && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_51, true, false))) || (iVar8 == -1141771998 && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_53, true, false))) || (iVar8 == 364689687 && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_54, true, false))) || (iVar8 == -842117252 && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_55, true, false))) || (iVar8 == -1610298873 && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_56, true, false)))
				{
					return;
				}
				else if (func_106(uParam0, 2048))
				{
					func_681(uParam0);
					func_222(uParam0, 2048);
				}
			}
			else
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_49, true, false) || (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_34, 1) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_34, 0)))
				{
					return;
				}
				else if (func_106(uParam0, 2048))
				{
					func_681(uParam0);
					func_222(uParam0, 2048);
				}
				if (iVar7 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE") && iVar7 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"))
				{
					if (func_106(uParam0, 4))
					{
						if ((PED::_0xC488B8C0E52560D8(Global_34) || PED::_0x2DC0E8DCBD3546E9(Global_34)) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 1944546609))
						{
							return;
						}
						if (!PED::_0x68821369A2CEADD5(Global_34, joaat("KNEEL1_TRANS_KNIFE1")))
						{
							PED::_0xD65FDC686A031C83(Global_34, joaat("KNEEL1_TRANS_KNIFE1"), 2f);
							PED::_0x6D07B371E9439019(Global_34);
						}
						return;
					}
				}
			}
			if (func_656(uParam0))
			{
				func_657(uParam0);
				func_682(uParam0, 0, &uVar0);
				func_681(uParam0);
				if (func_98(uParam0->f_1[1]))
				{
					func_121(&(uParam0->f_1[1]), 1, 1);
				}
				if (func_683(iVar8))
				{
					uParam0->f_42 = 250;
					uParam0->f_1[1] = func_266("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, uParam0->f_42, uParam0->f_42 + 1, 1, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
					func_671(uParam0, uParam0->f_61, uParam0->f_62);
					func_127(uParam0->f_1[1], -1067771379, 0, 1);
					func_268(uParam0->f_1[1], 10, 1, 1);
					func_268(uParam0->f_1[1], 11, 1, 1);
					func_131(uParam0->f_1[1], 0, 1, 1);
				}
				else
				{
					uParam0->f_1[1] = func_266("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, 250, 251, 1, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
					func_127(uParam0->f_1[1], -1067771379, 0, 1);
					func_267(uParam0->f_1[1], 1, 1);
					func_268(uParam0->f_1[1], 10, 1, 1);
					func_268(uParam0->f_1[1], 11, 1, 1);
					func_131(uParam0->f_1[1], 0, 1, 1);
				}
				return;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -563455375))
			{
				PAD::_0x5F217BC1190503D8("CRFT_BLIP_LIGHT", 0.2f);
			}
			if (func_683(iVar8))
			{
				if (!func_106(uParam0, 64))
				{
					if (func_139(uParam0->f_1[1], 0))
					{
						if (func_423(uParam0->f_1[1], 1) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_GAME_MENU_ACCEPT")))
						{
							func_40(uParam0, 64);
							func_131(uParam0->f_1[1], 0, 1, 1);
							func_131(uParam0->f_1[4], 0, 1, 1);
						}
					}
				}
				if ((((((iVar8 == -1136843638 || iVar8 == -732326901) || iVar8 == 786205940) || iVar8 == -1141771998) || iVar8 == 364689687) || iVar8 == -842117252) || iVar8 == -1610298873)
				{
					if (uParam0->f_69 != 0)
					{
						if ((uParam0->f_69 == joaat("S_CFT_ARROW_SMALLGAME") && ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -1011038463)) || (uParam0->f_69 != joaat("S_CFT_ARROW_SMALLGAME") && ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 2024314131)))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_65))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_65))
								{
									OBJECT::DELETE_OBJECT(&(uParam0->f_65));
								}
								else
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_65);
								}
							}
							if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_65))
							{
								if (func_153(uParam0->f_61, -1588156645) && iVar8 != -842117252)
								{
									uParam0->f_65 = WEAPON::_CREATE_WEAPON_OBJECT(func_197(uParam0->f_61, 0), 1, Global_35, true, 1f);
									ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_65, false, false);
									if (iVar8 == -1610298873)
									{
										ANIMSCENE::SET_ANIM_SCENE_ENTITY(func_684(uParam0, iVar8), "DYNAMITE", uParam0->f_65, 0);
									}
								}
								else
								{
									uParam0->f_65 = OBJECT::CREATE_OBJECT(uParam0->f_69, Global_35, true, (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()), false, false, false);
									ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_65, false, false);
								}
								if (iVar8 == 786205940)
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_65, Global_34, PED::GET_PED_BONE_INDEX(Global_34, 37709), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
								}
								else if (iVar8 == -1141771998 || iVar8 == -1610298873)
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_65, Global_34, PED::GET_PED_BONE_INDEX(Global_34, 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
								}
								else if (iVar8 == -842117252)
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_65, Global_34, PED::GET_PED_BONE_INDEX(Global_34, 37709), 0f, 0f, 0.1f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
								}
								else if (iVar8 == -1136843638 && !PED::IS_PED_MALE(Global_34))
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_65, Global_34, PED::GET_PED_BONE_INDEX(Global_34, 7966), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
								}
								else
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_65, Global_34, PED::GET_PED_BONE_INDEX(Global_34, 7966), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
								}
							}
						}
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 966057053))
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_65))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_65))
							{
								OBJECT::DELETE_OBJECT(&(uParam0->f_65));
							}
							else
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_65);
							}
						}
						if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_65))
						{
							if (iVar8 == -732326901 || iVar8 == 364689687)
							{
								uParam0->f_65 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_THROWN_THROWING_KNIVES"), 1, Global_35, true, 1f);
							}
							else if (iVar8 == -1141771998)
							{
								uParam0->f_65 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_THROWN_TOMAHAWK"), 1, Global_35, true, 1f);
							}
							else if (iVar8 == -842117252)
							{
								if (uParam0->f_61 == joaat("AMMO_POISONBOTTLE"))
								{
									uParam0->f_65 = OBJECT::CREATE_OBJECT(joaat("MP006_P_POISONEMPTY01X"), Global_35, true, (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()), false, false, true);
								}
								else
								{
									uParam0->f_65 = OBJECT::CREATE_OBJECT(joaat("P_MOLOTOVEMPTY01X"), Global_35, true, (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()), false, false, true);
								}
							}
							else if (iVar8 == -1610298873)
							{
								uParam0->f_65 = OBJECT::CREATE_OBJECT(joaat("W_STICK_DYNAMITE01"), Global_35, true, (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()), false, false, true);
								if (iVar8 == -1610298873)
								{
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(func_684(uParam0, iVar8), "DYNAMITE", uParam0->f_65, 0);
								}
							}
							else
							{
								uParam0->f_65 = OBJECT::CREATE_OBJECT(joaat("S_CFT_ARROW"), Global_35, true, (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()), false, false, false);
							}
						}
						ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_65, false, false);
						if (iVar8 == 786205940)
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_65, Global_34, PED::GET_PED_BONE_INDEX(Global_34, 37709), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						}
						else if ((iVar8 == -1141771998 || iVar8 == -1610298873) || iVar8 == -842117252)
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_65, Global_34, PED::GET_PED_BONE_INDEX(Global_34, 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						}
						else if (iVar8 == -1136843638 && !PED::IS_PED_MALE(Global_34))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_65, Global_34, PED::GET_PED_BONE_INDEX(Global_34, 7966), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						}
						else
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_65, Global_34, PED::GET_PED_BONE_INDEX(Global_34, 7966), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						}
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 1394836706))
					{
						func_96(&(uParam0->f_65), &(uParam0->f_66));
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 1471149551))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_67))
						{
							ENTITY::SET_ENTITY_VISIBLE(uParam0->f_67, true);
						}
					}
				}
				else if (iVar8 == 414472632 || iVar8 == -715814988)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 966057053))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_63, true);
					}
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -61921192))
				{
					if (func_76(0) && !func_77())
					{
						func_405(uParam0->f_61, uParam0->f_62, 1, func_417(), uParam0->f_11);
						func_78(uParam0->f_61, 1, 0, 1, 0);
					}
					if (iVar8 == -842117252)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_65))
						{
							func_96(&(uParam0->f_65), &(uParam0->f_66));
						}
					}
					uParam0->f_22++;
					uParam0->f_27++;
					if ((!func_685(uParam0->f_61, uParam0->f_62, 0, func_417(), 0) || func_426(uParam0->f_61, 1, 0)) || uParam0->f_22 >= uParam0->f_26)
					{
						if (!func_76(0) || func_77())
						{
							uParam0->f_23 = func_108(uParam0->f_61, uParam0->f_62, uParam0->f_27, uParam0->f_11);
							if (uParam0->f_11 == 2133510819)
							{
								func_111(func_110(joaat("MADE"), -444296448), uParam0->f_27);
							}
							uParam0->f_27 = 0;
						}
						func_686(uParam0, iVar8, 0);
						return;
					}
				}
				if (!func_106(uParam0, 64))
				{
					if (!(func_139(uParam0->f_1[1], 0) && PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_GAME_MENU_ACCEPT"))))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, joaat("SAFETOBREAKOUT")))
						{
							if (!func_76(0) || func_77())
							{
								uParam0->f_23 = func_108(uParam0->f_61, uParam0->f_62, uParam0->f_27, uParam0->f_11);
								if (uParam0->f_11 == 2133510819)
								{
									func_111(func_110(joaat("MADE"), -444296448), uParam0->f_27);
								}
								uParam0->f_27 = 0;
							}
							func_686(uParam0, iVar8, 1);
						}
					}
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 1290366555) && uParam0->f_22 < (uParam0->f_26 - 1))
				{
					func_131(uParam0->f_1[1], 1, 1, 1);
					func_131(uParam0->f_1[4], 1, 1, 1);
					func_222(uParam0, 64);
				}
				if (ANIMSCENE::_0xB89FCFF19DAFFF28(func_684(uParam0, iVar8), "player"))
				{
					if (!func_76(0) || func_77())
					{
						uParam0->f_23 = func_108(uParam0->f_61, uParam0->f_62, uParam0->f_27, uParam0->f_11);
						if (uParam0->f_11 == 2133510819)
						{
							func_111(func_110(joaat("MADE"), -444296448), uParam0->f_27);
						}
						uParam0->f_27 = 0;
					}
					func_686(uParam0, iVar8, 0);
				}
			}
			else if (func_27(&(uParam0->f_70), (IntToFloat(uParam0->f_42) / 1000f)))
			{
				if (!func_76(0) || func_77())
				{
					if (uParam0->f_23 == -1)
					{
						uParam0->f_23 = func_108(uParam0->f_61, uParam0->f_62, 1, uParam0->f_11);
						if (uParam0->f_11 == 2133510819)
						{
							func_111(func_110(joaat("MADE"), -444296448), 1);
						}
						if (uParam0->f_23 == -1)
						{
							func_686(uParam0, iVar8, 0);
						}
					}
					else if (func_413(uParam0->f_23))
					{
					}
					uParam0->f_23 = -1;
				}
				else
				{
					func_405(uParam0->f_61, uParam0->f_62, 1, func_417(), uParam0->f_11);
					func_78(uParam0->f_61, 1, 1, 1, 0);
				}
				uParam0->f_26 = -1;
				uParam0->f_27 = 0;
				func_96(&(uParam0->f_65), &(uParam0->f_66));
				uParam0->f_44 = 0;
				bVar9 = true;
				if (!func_685(uParam0->f_61, uParam0->f_62, 0, func_417(), 0) || func_426(uParam0->f_61, 1, 0))
				{
					bVar9 = false;
				}
				func_686(uParam0, iVar8, bVar9);
			}
			break;
		case 0:
			if (func_103())
			{
				func_104(0);
			}
			if (func_656(uParam0))
			{
				func_101(uParam0);
				func_657(uParam0);
			}
			break;
		case 13:
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::_CREATE_VAR_STRING(0, uParam0->f_61), 1, 0, 0, 0);
			func_666(0);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_67))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -2015667492))
				{
					func_96(&(uParam0->f_67), &(uParam0->f_68));
				}
			}
			if (!func_139(uParam0->f_1[2], 0))
			{
				func_131(uParam0->f_1[2], 1, 1, 1);
				func_267(uParam0->f_1[2], 0, 1);
			}
			if (!func_139(uParam0->f_1[4], 0))
			{
				func_131(uParam0->f_1[4], 1, 1, 1);
				func_267(uParam0->f_1[4], 1, 1);
			}
			if (func_672(uParam0->f_1[2], 1))
			{
				func_101(uParam0);
				func_273(&(uParam0->f_70));
				func_45(uParam0, 14);
				return;
			}
			else if (func_125(uParam0->f_1[4], 1))
			{
				func_101(uParam0);
				func_96(&(uParam0->f_65), &(uParam0->f_66));
				func_96(&(uParam0->f_63), &(uParam0->f_64));
				func_96(&(uParam0->f_67), &(uParam0->f_68));
				iVar10 = PED::_0x569F1E1237508DEB(Global_34);
				if (iVar10 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE") && iVar10 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
				}
				iVar8 = func_296(uParam0->f_61, -1636519629);
				iVar11 = func_684(uParam0, iVar8);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iVar11, "player", Global_34);
				func_102(uParam0, 0);
				func_673("Exit", "SSCRFT_Sounds", 1);
				if (func_106(uParam0, 4))
				{
					func_45(uParam0, 1);
				}
				else
				{
					func_45(uParam0, 0);
				}
				return;
			}
			else if (func_270(uParam0->f_1[1], 1))
			{
				func_131(uParam0->f_1[4], 0, 1, 1);
				func_131(uParam0->f_1[2], 0, 1, 1);
				func_131(uParam0->f_1[1], 0, 1, 1);
				iVar8 = func_296(uParam0->f_61, -1636519629);
				iVar12 = func_684(uParam0, iVar8);
				if (iVar12 != 0)
				{
					ANIMSCENE::RESET_ANIM_SCENE(iVar12, "pl_craft");
					ANIMSCENE::LOAD_ANIM_SCENE(iVar12);
				}
				func_273(&(uParam0->f_70));
				func_222(uParam0, 64);
				func_45(uParam0, 12);
				return;
			}
			if (func_274(uParam0->f_1[4], 1))
			{
				if (!func_93(&(uParam0->f_70)))
				{
					func_29(&(uParam0->f_70));
				}
				else if (func_27(&(uParam0->f_70), 0.1f))
				{
					func_130(uParam0->f_1[4], "CAMP_REC_QUIT", 1);
				}
			}
			else
			{
				if (func_93(&(uParam0->f_70)))
				{
					func_273(&(uParam0->f_70));
				}
				func_130(uParam0->f_1[4], "CAMP_REC_BACK", 1);
			}
			break;
		case 14:
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::_CREATE_VAR_STRING(0, uParam0->f_61), 1, 0, 0, 0);
			func_666(0);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_67))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -2015667492))
				{
					func_96(&(uParam0->f_67), &(uParam0->f_68));
				}
			}
			iVar8 = func_296(uParam0->f_61, -1636519629);
			iVar13 = func_684(uParam0, iVar8);
			if ((iVar13 == 0 || (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar13) || ANIMSCENE::_0xF94692EB9DC15D74(iVar13, 0))) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -1208591336))
			{
				func_96(&(uParam0->f_65), &(uParam0->f_66));
				func_96(&(uParam0->f_63), &(uParam0->f_64));
				func_96(&(uParam0->f_67), &(uParam0->f_68));
				iVar14 = PED::_0x569F1E1237508DEB(Global_34);
				if (iVar14 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE") && iVar14 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
				}
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iVar13, "player", Global_34);
				if (!func_669(uParam0))
				{
					func_45(uParam0, 15);
				}
			}
			break;
		case 16:
			iVar15 = func_687();
			if (iVar15 == PLAYER::PLAYER_ID())
			{
				uParam0->f_23 = func_108(uParam0->f_61, uParam0->f_62, 1, uParam0->f_11);
				func_45(uParam0, 17);
			}
			else if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar15) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar15))
			{
				func_45(uParam0, 10);
			}
			else if (func_27(&(uParam0->f_70), 5f))
			{
				func_273(&(uParam0->f_70));
				func_45(uParam0, 10);
			}
			break;
		case 17:
			if (!func_413(uParam0->f_23) && func_688(1))
			{
				if (func_654(uParam0->f_23) != 3)
				{
					func_689(0);
				}
				else
				{
					func_690(uParam0->f_61);
					PED::_0xD65FDC686A031C83(Global_34, joaat("STEWPOT_ACTION"), 1f);
					func_203(uParam0->f_61, 1);
					func_691(uParam0);
					if (func_153(uParam0->f_61, -2011345500))
					{
						func_502(-1266356243, 0, 255, 0, 0);
					}
					uParam0->f_25 = uParam0->f_61;
				}
				func_45(uParam0, 15);
			}
			else
			{
				func_692(1);
				HUD::_UIPROMPT_DISABLE_PROMPTS_THIS_FRAME();
				PAD::DISABLE_ALL_CONTROL_ACTIONS(2);
			}
			break;
		case 1:
			if (func_103())
			{
				func_104(0);
			}
			if (func_656(uParam0))
			{
				if (func_98(uParam0->f_1[0]))
				{
					func_131(uParam0->f_1[0], 0, 1, 1);
				}
				func_657(uParam0);
			}
			break;
		case 18:
			if (func_103())
			{
				func_104(0);
			}
			if (func_656(uParam0))
			{
				func_657(uParam0);
			}
			if (func_106(uParam0, 2))
			{
				TASK::CLEAR_PED_TASKS(Global_34, true, false);
			}
			func_102(uParam0, 0);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_28);
			Global_1913694.f_1576 = 0;
			SCRIPTS::TERMINATE_THIS_THREAD();
			break;
	}
}

void func_416(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (uParam0->f_49.f_62 == joaat("COST_CRAFTING_GRILL"))
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		func_111(func_196(joaat("FOOD_SEASONED")), 1);
	}
	STATS::_0x378D3B1B11D9385B(uParam0->f_49.f_61);
	func_47(2);
	if (func_76(0) && !func_77())
	{
		func_405(uParam0->f_49.f_61, uParam0->f_49.f_62, 1, func_417(), uParam0->f_49.f_11);
	}
	func_121(&(uParam0->f_135[3]), 1, 1);
	if (bVar0)
	{
		iVar1 = 7000;
		iVar2 = 10000;
		if (func_16(uParam0->f_125, 16384))
		{
			iVar1 = BUILTIN::ROUND((IntToFloat(iVar1) * 0.8f));
			iVar2 = BUILTIN::ROUND((IntToFloat(iVar2) * 0.8f));
		}
		uParam0->f_135[3] = func_266("CRAFT_FASTER", joaat("INPUT_GAME_MENU_ACCEPT"), 2, 0, 0, 6, iVar1, iVar2, 35, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	else
	{
		iVar1 = 7000;
		iVar2 = 10000;
		if (func_16(uParam0->f_125, 16384))
		{
			iVar1 = BUILTIN::ROUND((IntToFloat(iVar1) * 0.8f));
			iVar2 = BUILTIN::ROUND((IntToFloat(iVar2) * 0.8f));
		}
		uParam0->f_135[3] = func_266("CRAFT_FASTER", joaat("INPUT_GAME_MENU_ACCEPT"), 2, 0, 0, 6, iVar1, iVar2, 25, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	func_407(uParam0, 3, 0, 0);
	func_131(uParam0->f_135[3], 0, 1, 1);
	func_127(uParam0->f_135[3], -1067771379, 0, 1);
	uParam0->f_149 = MISC::GET_GAME_TIMER();
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_133))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_133));
	}
	uParam0->f_133 = OBJECT::CREATE_OBJECT(func_406(uParam0->f_49.f_61), Global_35, false, false, false, false, true);
	if (PED::_0x3BBDD6143FF16F98(Global_34, uParam0->f_133, "p_meatChunks01x_PH_L_HAND", 0, 0, 1))
	{
	}
	ENTITY::SET_ENTITY_VISIBLE(uParam0->f_133, false);
	OBJECT::_SET_OBJECT_BURN_LEVEL(uParam0->f_133, 0f, true);
	uParam0->f_161 = 3;
	func_101(&(uParam0->f_49));
	func_45(&(uParam0->f_49), 0);
	func_418();
	AUDIO::_0xAC84686C06184B0D("cooking", "Player_Campfire_Scenes");
	func_59(uParam0, 9);
}

bool func_417()
{
	int iVar0;
	int iVar1;

	iVar0 = func_177(7);
	if (!PED::IS_PED_INJURED(iVar0))
	{
		if (func_49(Global_34, iVar0, 1) < 400f)
		{
			iVar1 = 1;
		}
	}
	return iVar1;
}

int func_418()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_319())
	{
		return 0;
	}
	if (!func_577(&iVar0))
	{
		return 0;
	}
	if (!func_320(iVar0))
	{
		return 0;
	}
	iVar1 = func_638(iVar0);
	if (iVar1 == -358215195)
	{
		return 0;
	}
	func_322(&iVar2, 1);
	return func_323(iVar0, iVar2);
}

bool func_419(int iParam0)
{
	return func_97(Global_1940144.f_38, iParam0);
}

void func_420(var uParam0, int iParam1)
{
	bool bVar0;

	if (func_274(uParam0->f_135[3], 1))
	{
		bVar0 = true;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -1812847403))
	{
		if (PAD::_0x1252C029FC8EBB4D())
		{
			AUDIO::_0x9821B68CD3E05F2B("distanceToFlame", 1f, "cook_meat_sizzle_loop", "Player_Campfire_Sounds");
			PAD::_0x709BA8C08C5C008D();
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 1738621174))
	{
		if (!PAD::_0x1252C029FC8EBB4D())
		{
			AUDIO::_0x9821B68CD3E05F2B("distanceToFlame", 0f, "cook_meat_sizzle_loop", "Player_Campfire_Sounds");
			PAD::_0x5F217BC1190503D8("CRFT_SEAR_MEAT", 7f);
		}
	}
	switch (iParam1)
	{
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ARTHUR"):
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_MP_FEMALE_A"):
			if (bVar0)
			{
				if (func_70(uParam0))
				{
					if (func_73(joaat("COOKKNIFE_TRANS_COOKKNIFE_ACTIVE"), 0.5f))
					{
						uParam0->f_149 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ACTIVE_MP_FEMALE_A"):
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ACTIVE_ARTHUR"):
			if (!bVar0)
			{
				if (func_70(uParam0))
				{
					if (func_73(joaat("COOKKNIFE_ACTIVE_TRANS_COOKKNIFE"), 0.5f))
					{
						uParam0->f_149 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT"):
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_MP_FEMALE_A"):
			if (bVar0)
			{
				if (func_70(uParam0))
				{
					if (func_73(joaat("KNEELFIRECRAFT_TRANS_KNEELFIRECRAFTACTIVE"), 0.5f))
					{
						uParam0->f_149 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_ACTIVE"):
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_ACTIVE_MP_FEMALE_A"):
			if (!bVar0)
			{
				if (func_70(uParam0))
				{
					if (func_73(joaat("KNEELFIRECRAFTACTIVE_TRANS_KNEELFIRECRAFT"), 0.5f))
					{
						uParam0->f_149 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
	}
}

void func_421(var uParam0)
{
	if (!func_98(uParam0->f_135[5]))
	{
		return;
	}
	if (!func_419(2))
	{
		func_131(uParam0->f_135[5], 0, 1, 1);
		return;
	}
	if (func_413(uParam0->f_49.f_23))
	{
		func_131(uParam0->f_135[5], 0, 1, 1);
		return;
	}
	func_424();
	func_131(uParam0->f_135[5], 1, 1, 1);
}

void func_422(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		uParam0->f_135[3] = func_266("CRAFT_FASTER", joaat("INPUT_GAME_MENU_ACCEPT"), 2, 0, 0, 0, 7000, 10000, 25, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		func_407(uParam0, 3, 0, 1);
		func_131(uParam0->f_135[3], 0, 1, 1);
		func_127(uParam0->f_135[3], -1067771379, 0, 1);
	}
	uParam0->f_135[7] = func_266("CAMP_REC_BACK", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	uParam0->f_135[1] = func_266("CAMP_REC_BACK", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("MEDIUM_TIMED_EVENT"), 0);
	func_269(&(uParam0->f_135[1]), "INPUT_PCRAFT_EXIT");
	func_267(uParam0->f_135[7], 0, 1);
	func_127(uParam0->f_135[7], -1067771379, 0, 1);
	func_127(uParam0->f_135[1], -1067771379, 0, 1);
	func_268(uParam0->f_135[1], 19, 1, 1);
	func_268(uParam0->f_135[1], 20, 1, 1);
	func_268(uParam0->f_135[1], 13, 1, 1);
	func_268(uParam0->f_135[7], 13, 1, 1);
	func_131(uParam0->f_135[7], 0, 1, 1);
	func_131(uParam0->f_135[1], 0, 1, 1);
}

bool func_423(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_98(iParam0))
	{
		return false;
	}
	iVar0 = func_239(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(Global_1951255[iVar0 /*23*/].f_3);
}

void func_424()
{
	HUD::_0xC9CAEAEEC1256E54(func_693(2));
	HUD::_0xC9CAEAEEC1256E54(func_693(0));
	HUD::_0xC9CAEAEEC1256E54(func_693(1));
	HUD::_0xC9CAEAEEC1256E54(func_694(2));
	HUD::_0xC9CAEAEEC1256E54(func_694(0));
	HUD::_0xC9CAEAEEC1256E54(func_694(1));
}

void func_425(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_98(iParam0))
	{
		return;
	}
	iVar0 = func_239(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(Global_1951255[iVar0 /*23*/].f_3);
}

bool func_426(int iParam0, int iParam1, bool bParam2)
{
	struct<5> Var0;

	Var0 = { func_193(iParam0, 0, 0) };
	return func_227(iParam0, &Var0, iParam1, 0, bParam2, -1, 0);
}

float func_427(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_98(iParam0))
	{
		return 0f;
	}
	iVar0 = func_239(iParam0);
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1951255[iVar0 /*23*/].f_3))
	{
		return HUD::_UIPROMPT_GET_MASH_MODE_PROGRESS(Global_1951255[iVar0 /*23*/].f_3);
	}
	return HUD::_0x81801291806DBC50(Global_1951255[iVar0 /*23*/].f_3);
}

float func_428(float fParam0, float fParam1, float fParam2)
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

void func_429(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_139(uParam0->f_135[3], 0))
		{
			if (((func_98(uParam0->f_135[3]) && (uParam0->f_49.f_61 == joaat("CONSUMABLE_COFFEE") || !func_426(uParam0->f_49.f_61, 1, 0))) && !func_413(uParam0->f_49.f_23)) && func_685(uParam0->f_49.f_61, uParam0->f_49.f_62, 0, func_417(), 0))
			{
				func_131(uParam0->f_135[3], 1, 1, 1);
			}
		}
	}
	if (!func_139(uParam0->f_135[7], 0))
	{
		func_131(uParam0->f_135[7], 1, 1, 1);
		func_267(uParam0->f_135[7], 0, 1);
	}
	if (!func_139(uParam0->f_135[1], 0))
	{
		func_131(uParam0->f_135[1], 1, 1, 1);
	}
}

void func_430(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_121(uParam0[iVar0], 1, 1);
		iVar0++;
	}
}

void func_431(var uParam0)
{
	int iVar0;
	int iVar1;

	func_121(&(uParam0->f_135[3]), 1, 1);
	iVar0 = 6000;
	iVar1 = 10000;
	if (func_16(uParam0->f_125, 16384))
	{
		iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * 0.8f));
		iVar1 = BUILTIN::ROUND((IntToFloat(iVar1) * 0.8f));
	}
	uParam0->f_135[3] = func_266("CRAFT_FASTER", joaat("INPUT_GAME_MENU_ACCEPT"), 2, 0, 0, 6, iVar0, iVar1, 25, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	func_407(uParam0, 3, 0, 0);
	func_127(uParam0->f_135[3], -1067771379, 0, 1);
	if (func_76(0) && !func_77())
	{
		func_405(uParam0->f_49.f_61, uParam0->f_49.f_62, 1, func_417(), uParam0->f_49.f_11);
	}
	func_131(uParam0->f_135[3], 0, 1, 1);
	func_418();
	uParam0->f_149 = MISC::GET_GAME_TIMER();
	AUDIO::_0xAC84686C06184B0D("crafting", "Player_Campfire_Scenes");
	func_59(uParam0, 1);
}

bool func_432(int iParam0)
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

bool func_433(int iParam0)
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

bool func_434(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
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
		iVar1 = func_165(iParam1);
		iVar5 = func_695(iParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &iVar2))
			{
				if (func_630(iParam0, iVar1, iVar2))
				{
					*uParam4 = { func_193(iParam1, 0, 0) };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { func_281(iParam1, *uParam4, uParam4->f_4, 0) };
					*iParam2 = iVar2;
					return true;
				}
			}
			iVar0++;
		}
		if (bParam5)
		{
			Var6.f_9 = -1591664384;
			Var20.f_9 = -1591664384;
			iVar34 = func_71(0);
			Var37 = { func_193(iParam1, 0, 0) };
			if (iParam6 != 0)
			{
				Var37.f_4 = iParam6;
			}
			Var42 = { func_281(iParam1, Var37, Var37.f_4, 0) };
			iVar35 = INVENTORY::_0xE843D21A8E2498AA(iVar34, &Var42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (INVENTORY::_0xCD9A485F2B383B44(iVar34, &Var42, iVar36, &Var6))
				{
					iVar1 = func_165(Var6.f_4);
					iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &iVar2))
						{
							if (func_630(iParam0, iVar1, iVar2))
							{
								if (func_696(Var42, Var6.f_9, &Var20, 0, -1))
								{
									uParam4->f_4 = Var6.f_9;
									*uParam4 = { Var6.f_5 };
									*uParam3 = { Var20 };
									*iParam2 = iVar2;
									return true;
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
	return false;
}

struct<4> func_435()
{
	struct<4> Var0;

	Var0 = { func_339(0) };
	return func_281(856287005, Var0, -218846335, 0);
}

bool func_436(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_88(iParam0, 0))
	{
		return false;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return false;
	}
	if (func_227(iParam0, uParam2, iParam3, bParam5, 0, -1, 0))
	{
		return false;
	}
	if (!func_76(0))
	{
		return false;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_71(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_437(int iParam0, int iParam1)
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
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;

	if (!func_88(iParam0, 0))
	{
		return false;
	}
	if (!func_434(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	Var10 = { func_435() };
	Var14 = { func_281(iParam0, Var10, iVar9, 0) };
	if (func_602(Var14, iParam1, 0))
	{
		if (func_697(iParam0))
		{
			if (func_698(joaat("SLOTID_HORSE_HORN"), &iVar18))
			{
				if (func_437(iVar18, 0))
				{
				}
			}
		}
		else if (func_699(iParam0))
		{
			if (func_698(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_437(iVar19, 0))
				{
				}
			}
			if (func_698(joaat("SLOTID_HORSE_BLANKET"), &iVar20))
			{
				if (func_437(iVar20, 0))
				{
				}
			}
		}
		else if (func_700(iParam0))
		{
			if (func_698(joaat("SLOTID_HORSE_HORN"), &iVar21))
			{
				if (func_437(iVar21, 0))
				{
				}
			}
			if (func_698(joaat("SLOTID_HORSE_BLANKET"), &iVar22))
			{
				if (func_437(iVar22, 0))
				{
				}
			}
			if (func_698(joaat("SLOTID_HORSE_BEDROLL"), &iVar23))
			{
				if (func_437(iVar23, 0))
				{
				}
			}
		}
		else if (func_438(iParam0))
		{
			if (func_698(joaat("SLOTID_HORSE_HORN"), &iVar24))
			{
				if (func_437(iVar24, 0))
				{
				}
			}
			if (func_698(joaat("SLOTID_HORSE_STIRRUP"), &iVar25))
			{
				if (func_437(iVar25, 0))
				{
				}
			}
			iVar26 = func_439(iParam0);
			if (func_88(iVar26, 0))
			{
				if (func_437(iVar26, 1))
				{
				}
			}
		}
		func_440();
		return true;
	}
	return false;
}

bool func_438(int iParam0)
{
	if (!func_88(iParam0, 0))
	{
		return false;
	}
	if (func_153(iParam0, -251515357))
	{
		return true;
	}
	return false;
}

int func_439(int iParam0)
{
	switch (iParam0)
	{
		case joaat("HORSE_EQUIPMENT_WESTERN_01_SPECIAL_NEW_SADDLE_000"):
			return 263080063 /* GXTEntry: "Trapper Blanket" */;
		case joaat("HORSE_EQUIPMENT_MOTHERHUBBARD_01_SPECIAL_NEW_SADDLE_000"):
			return -34331381 /* GXTEntry: "Trapper Blanket" */;
		case joaat("HORSE_EQUIPMENT_MCCLELLAN_01_SPECIAL_NEW_SADDLE_000"):
			return -993578318 /* GXTEntry: "Trapper Blanket" */;
		case joaat("HORSE_EQUIPMENT_WESTERN_03_SPECIAL_NEW_SADDLE_000"):
			return 579268144 /* GXTEntry: "Trapper Blanket" */;
		case joaat("HORSE_EQUIPMENT_WESTERN_04_SPECIAL_NEW_SADDLE_000"):
			return 1104489688 /* GXTEntry: "Trapper Blanket" */;
	}
	return 0;
}

int func_440()
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

	Var0 = { func_193(856287005, 0, 0) };
	Var5 = { func_281(856287005, Var0, Var0.f_4, 0) };
	iVar10 = func_165(856287005);
	if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, 0, &iVar11))
	{
		iVar14 = func_601(Var5, joaat("SLOTID_HORSE_SADDLE"), 0, -1);
	}
	if (!func_88(iVar14, 0))
	{
		return 0;
	}
	bVar15 = false;
	iVar20 = func_695(856287005);
	iVar9 = 0;
	while (iVar9 < iVar20)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, iVar9, &iVar11))
		{
			bVar15 = false;
			iVar21 = func_601(Var5, iVar11, 0, -1);
			if (!func_88(iVar21, 0))
			{
				if (iVar11 == joaat("SLOTID_HORSE_HORN"))
				{
					if (((func_438(iVar14) || func_697(iVar14)) || func_699(iVar14)) || func_700(iVar14))
					{
					}
					else
					{
						Jump @307; //curOff = 220
						if (iVar11 == joaat("SLOTID_HORSE_BLANKET"))
						{
							if (func_699(iVar14) || func_700(iVar14))
							{
							}
							else
							{
								Jump @307; //curOff = 257
								if (iVar11 == joaat("SLOTID_HORSE_BEDROLL"))
								{
									if (func_700(iVar14))
									{
									}
									else
									{
										Jump @307; //curOff = 282
										if (iVar11 == joaat("SLOTID_HORSE_STIRRUP"))
										{
											if (func_438(iVar14))
											{
											}
											else
											{
												bVar15 = true;
												Jump @347; //curOff = 310
												if (iVar11 == joaat("SLOTID_HORSE_BLANKET"))
												{
													if (!func_438(iVar14) && func_701(iVar21))
													{
														bVar15 = true;
													}
												}
												if (bVar15)
												{
													if (func_702(iVar11, &Var16, 1))
													{
														if (!func_602(Var16, 1, 0))
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
				}
			}
		}
	}
}

bool func_441(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_107() == -1)
	{
		if (func_485(iParam0) && func_703(iParam0))
		{
			func_704(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_442(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_705(iParam0, iParam1);
	Var0 = { func_193(iParam0, 0, 1) };
	iVar5 = func_486(iParam0, &Var0, 0, 0);
	iVar6 = func_706(iParam0, 0, 0, 0);
	if (iVar5 > 1 && (iVar6 + iParam2) >= iVar5)
	{
		if (func_153(iParam0, -2051813666))
		{
			func_140(674, 1);
		}
		else if (func_107() == -1)
		{
			func_140(673, 0);
		}
	}
	if (func_227(iParam0, &Var0, *iParam1, 0, 0, -1, 0))
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

void func_443(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	if (!func_707())
	{
		return;
	}
	switch (func_296(iParam0, -949239683))
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

bool func_444(int iParam0)
{
	if (!func_708(iParam0))
	{
		return false;
	}
	return func_709(iParam0);
}

void func_445(int iParam0)
{
	if (!func_708(iParam0))
	{
		return;
	}
	func_710(iParam0);
	func_711(iParam0);
}

void func_446(int iParam0)
{
	if (func_153(iParam0, -1522723129))
	{
		func_502(-848633709, 0, 255, 0, 0);
	}
	else if (func_153(iParam0, -283942357))
	{
		func_502(-981153234, 0, 255, 0, 0);
	}
	else if (func_153(iParam0, 683680997))
	{
		func_502(-756350192, 0, 255, 0, 0);
	}
	else if (func_153(iParam0, 1307628809))
	{
		func_502(603094518, 0, 255, 0, 0);
	}
}

bool func_447(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_193(iParam0, 0, 1) };
		if (func_393(iParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -1591664384;
			if (func_394(iParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_281(iParam0, Var0, Var0.f_4, 0) };
				func_282(iParam0, &Var27, &Var0, 1, -142743235, 1, 0);
			}
		}
	}
	if (func_76(0))
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, false))
		{
			return false;
		}
		func_448(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
		func_712(iParam0, iParam1);
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

bool func_448(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_451(iParam0))
	{
		return false;
	}
	if (!func_76(0))
	{
		return false;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_34, iParam0, iParam1, iParam2);
	return true;
}

bool func_449(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_88(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_214(iParam0, joaat("DEFAULT"));
	if (iVar0 != 0)
	{
		return func_713(iParam0, iParam1, iParam2);
	}
	Var1 = { func_193(iParam0, 0, 1) };
	Var6 = { func_281(iParam0, Var1, Var1.f_4, 0) };
	return func_436(iParam0, &Var6, &Var1, iParam1, iParam2, 0);
}

bool func_450(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;

	iVar0 = func_198(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_107() == -1)
		{
			func_199(iVar0);
			if (iParam1 == 1248274121)
			{
				func_714(iVar0);
			}
		}
		if (!func_227(iParam0, &uVar1, 1, 0, 0, -1, 0))
		{
			func_704(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_715(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				func_447(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_FISHINGROD") || WEAPON::_IS_WEAPON_BINOCULARS(iVar0))
			{
				func_447(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_IS_WEAPON_LASSO(iVar0))
			{
				func_447(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_IS_WEAPON_MELEE(iVar0))
			{
				if (iVar0 == joaat("WEAPON_MELEE_KNIFE_JOHN") && !func_716())
				{
					return false;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(iParam0))
				{
				}
				else if (!func_717(iVar0))
				{
					func_447(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_447(iVar0, WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
			{
				iVar7 = func_718(Global_34, 2, 0, 1);
				if ((((func_208(iVar7) && !Global_26640) && iVar7 != iVar0) && !func_23(joaat("UPGRADE_OFFHAND_HOLSTER"), 1)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_34, iVar7);
				}
				if (func_208(iVar7) && func_23(joaat("UPGRADE_OFFHAND_HOLSTER"), 1))
				{
					if (!func_447(iVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_447(iVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_447(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_140(515, 1);
	}
	return true;
}

bool func_451(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

bool func_452(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_451(iParam0))
	{
		return false;
	}
	iVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	if (func_208(iVar4))
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
		func_461(func_719(iParam0), func_375(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_76(0))
	{
		if (func_448(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_449(iParam0, *iParam1, iParam2);
	}
	return false;
}

bool func_453()
{
	return false;
}

int func_454(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;

	if (func_107() == 0)
	{
		func_251(iParam0, 0);
		return 0;
	}
	iVar0 = func_720(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_721(iVar0, sParam4, iParam5, 0);
	}
	func_722(iVar0, bParam1, fParam2, iParam3);
	return iVar0;
}

void func_455(int iParam0)
{
}

void func_456(int iParam0)
{
}

void func_457(int iParam0)
{
}

void func_458(int iParam0)
{
}

void func_459()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("SP_CHAL_EXPL_ROOT")) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("SP_CHAL_EXPL_ROOT"), joaat("ACW_EXPL_RANK_01_TREASURE"), 1);
	}
}

void func_460(int iParam0, int iParam1)
{
	var uVar0;

	func_367(iParam0, iParam1, &uVar0);
}

void func_461(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_263(iParam0, &iVar0, &iVar1);
	if (!func_264(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_518(iParam0, 1024))
	{
		return;
	}
	func_265(iVar0, iVar1);
	Global_1904651.f_33[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	Global_1904651.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

void func_462(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_263(iParam0, &iVar0, &iVar1);
	if (!func_264(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_518(iParam0, 1024))
	{
		return;
	}
	func_265(iVar0, iVar1);
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

void func_463(int iParam0)
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

void func_464(int iParam0)
{
	if (func_107() != -1)
	{
		return;
	}
}

void func_465(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			break;
	}
}

void func_466(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_723(Global_1903071.f_37);
	func_386(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_724(iParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

bool func_467(int iParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	if (!func_88(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = func_468(iParam1);
	if (!func_725(iParam0, Var0.f_4))
	{
		return false;
	}
	iVar5 = func_486(iParam0, &Var0, 0, 0);
	iVar6 = func_706(iParam0, 0, 0, 0);
	if (iVar5 >= 0 && iVar6 > iVar5)
	{
		return false;
	}
	return true;
}

int func_468(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1084182731;
		case 1:
			return -1360128126;
		default:
			break;
	}
	return 1084182731;
}

struct<2> func_469(int iParam0)
{
	return func_110(joaat("MADE"), iParam0);
}

struct<2> func_470(int iParam0)
{
	struct<2> Var0;

	if (func_235(iParam0, 0))
	{
		Var0 = { func_110(joaat("MADE_RECIPE_TYPE"), joaat("FOOD")) };
	}
	else if (func_235(iParam0, 2))
	{
		Var0 = { func_110(joaat("MADE_RECIPE_TYPE"), joaat("AMMO")) };
	}
	else if (func_235(iParam0, 5))
	{
		Var0 = { func_110(joaat("MADE_RECIPE_TYPE"), joaat("HORSE_CARE")) };
	}
	else if (func_235(iParam0, 1))
	{
		Var0 = { func_110(joaat("MADE_RECIPE_TYPE"), joaat("REMEDIES")) };
	}
	else if (func_235(iParam0, 3))
	{
		Var0 = { func_110(joaat("MADE_RECIPE_TYPE"), joaat("WEAPONS")) };
	}
	else if (func_235(iParam0, 4))
	{
		Var0 = { func_110(joaat("MADE_RECIPE_TYPE"), joaat("HUNTING")) };
	}
	return Var0;
}

bool func_471(int iParam0)
{
	return func_165(iParam0) == 1868067663;
}

bool func_472(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_726(iParam0))
	{
		return false;
	}
	*iParam3 = ITEMDATABASE::_0xF540239F9937033B(iParam0, iParam1);
	if (*iParam3 == 0)
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
	while (iVar0 < *iParam3)
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
		func_727(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_473(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_107() == 0)
	{
		return func_728(iParam0);
	}
	return iParam0 <= func_729();
}

bool func_474(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(0, iParam0);
}

int func_475(int iParam0, int iParam1)
{
	if (iParam0 == 15 && func_153(iParam1, -2051813666))
	{
		return 1;
	}
	return 0;
}

int func_476(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;

	if (!func_88(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_339(0) };
	Var0.f_4 = func_468(iParam1);
	Var5 = { func_281(iParam0, Var0, Var0.f_4, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var5))
	{
		return 0;
	}
	iVar9 = INVENTORY::_0xC97E0D2302382211(func_71(0), &Var5, 0);
	return iVar9;
}

bool func_477(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_88(iParam0, 0))
	{
		return false;
	}
	*iParam3 = ITEMDATABASE::_0xDEE7B3C76ED664BE(iParam0, iParam1);
	if (*iParam3 == 0)
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
	while (iVar0 < *iParam3)
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
		func_730(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_478(int iParam0)
{
	if (!func_88(iParam0, 0))
	{
		return false;
	}
	if (func_153(iParam0, -839724752))
	{
		return true;
	}
	return false;
}

int func_479(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;

	if (!func_88(iParam0, 0))
	{
		return 0;
	}
	if (!func_252(iParam0) && !func_478(iParam0))
	{
		return 0;
	}
	Var3 = -1;
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	Var3.f_3 = -1;
	Var3.f_4 = -1;
	Var3.f_5 = -1;
	Var3.f_6 = -1;
	Var3.f_7 = -1;
	Var3.f_8 = -1;
	iVar13 = func_296(iParam0, 1697966752);
	if (iVar13 == 0)
	{
		return 0;
	}
	Var3 = { func_619(-1591664384, -1591664384, 0, 235313564, 0, 0, -1, iVar13, 0) };
	if (func_620(Var3, &iVar1, &iVar2, 0))
	{
		iVar15 = 0;
		while (iVar15 < iVar2)
		{
			iVar14 = func_731(iVar15, iVar1);
			if (func_88(iVar14, 0) && iParam0 != iVar14)
			{
				iVar16 = func_732(iVar14);
				if (iVar16 != 0)
				{
					iVar17 = func_476(iVar14, iParam1);
					if (iVar17 > 0)
					{
						iVar0 = (iVar0 + (iVar17 * func_734(iVar16, func_733(iVar14), iParam0)));
					}
				}
			}
			iVar15++;
		}
		func_622(iVar1);
	}
	return iVar0;
}

int func_480(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;

	iParam0 = func_340(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_88(iParam1, 0))
	{
		return 0;
	}
	if (!func_735(iParam0))
	{
		return 0;
	}
	iVar0 = func_177(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 0;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
	iVar2 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	Var3.f_1 = 10;
	Var3.f_12 = 10;
	iVar26 = 0;
	iVar27 = 0;
	while (iVar27 < iVar2)
	{
		iVar28 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar27, iVar1));
		if (!func_736(iVar28))
		{
		}
		else
		{
			MISC::_0x48E4D50F87A96AA5(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar28), 1, 1, ENTITY::GET_ENTITY_MODEL(iVar28), &Var3, 0);
			iVar29 = 0;
			while (iVar29 < 10)
			{
				iVar30 = Var3.f_1[iVar29];
				if (iVar30 == iParam1)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(*iParam2))
					{
						*iParam2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar28);
					}
					iVar26++;
				}
				iVar29++;
			}
		}
		iVar27++;
	}
	if (ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		ITEMSET::DESTROY_ITEMSET(iVar1);
	}
	return iVar26;
}

int func_481(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iParam0 = func_340(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_88(iParam1, 0))
	{
		return 0;
	}
	if (!func_735(iParam0))
	{
		return 0;
	}
	iVar0 = func_177(iParam0);
	iVar1 = iParam1;
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (PED::_0x0CEEB6F4780B1F2F(iVar0, iVar3) != iVar1)
		{
		}
		else
		{
			iVar2++;
		}
		iVar3++;
	}
	return iVar2;
}

int func_482(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_88(iParam0, 0))
	{
		return 0;
	}
	if (PED::_IS_PED_CARRYING(Global_34))
	{
		iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_34);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_A_PED(iVar1))
		{
			if (iParam0 == ENTITY::_0x31FEF6A20F00B963(iVar1))
			{
				iVar0++;
			}
		}
	}
	return iVar0;
}

int func_483(int iParam0)
{
	if (!func_88(*iParam0, 0))
	{
		return 0;
	}
	if (!func_737(*iParam0))
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

bool func_484(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

bool func_485(int iParam0)
{
	return func_89(iParam0) == joaat("WEAPON");
}

int func_486(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_88(iParam0, 0) && !func_484(func_291(iParam0), 2))
	{
		return 0;
	}
	if (func_89(iParam0) == joaat("FEE"))
	{
		return -1;
	}
	if (!bParam2 && func_214(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_71(bParam3), iParam0);
}

int func_487(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if ((bParam4 && iParam1 == -915411861) && func_738(iParam0, 59806960))
	{
		iParam1 = 59806960;
	}
	if (func_497(iParam0))
	{
		return func_739(func_498(iParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_477(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_488(int iParam0)
{
	switch (iParam0)
	{
		case -1103707655:
		case 205718222:
		case 866168015:
			return true;
		default:
			break;
	}
	return false;
}

int func_489(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_740(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_742(func_741(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_743(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

bool func_490(int* iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_744(iParam0))
		{
			return false;
		}
	}
	if (func_745(&(iParam0->f_6)))
	{
		if (NETWORK::_0xE10F2D7715ABABEC(&(iParam0->f_6)))
		{
			return false;
		}
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(2113164098))
	{
		return false;
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(joaat("SELL")))
	{
		return false;
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(joaat("UPDATE")))
	{
		return false;
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(joaat("USE")))
	{
		return false;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return false;
	}
	if (NETSHOPPING::_CASHINVENTORY_IS_CONNECTION_FAULTED())
	{
		return false;
	}
	if (NETSHOPPING::_CASHINVENTORY_INIT_SESSION_IS_FAULTED())
	{
		return false;
	}
	return true;
}

int func_491(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	if (!func_726(iParam0))
	{
		return 0;
	}
	bVar1 = func_16(iParam3, 2);
	bVar2 = func_746(iParam0, -570078785, bVar1);
	bVar3 = func_746(iParam0, -915411861, bVar1);
	if (func_746(iParam0, 997808187, bVar1))
	{
		iParam1 = 997808187;
	}
	else if (bParam4 && (func_747(iParam0, &iVar0) || func_748(iParam0, &iVar0)))
	{
		iParam1 = iVar0;
	}
	else if (bVar2 && !bVar3)
	{
		iParam1 = -570078785;
	}
	else if (bVar2 && bVar3)
	{
		if (func_749())
		{
			iParam1 = -570078785;
		}
		else
		{
			iParam1 = -915411861;
		}
	}
	else if (bVar3)
	{
		iParam1 = -915411861;
	}
	else if (func_750(15) && func_746(iParam0, 369710026, bVar1))
	{
		iParam1 = 369710026;
	}
	if (iParam1 == 0 && bParam2)
	{
		return -915411861;
	}
	return iParam1;
}

bool func_492(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (!func_746(iParam0, iParam1, 0))
	{
		return false;
	}
	if (func_16(iParam2, 2))
	{
		if (func_751(iParam0, iParam1))
		{
			return false;
		}
	}
	if (NETWORK::_0xFBE782B3165AC8EC(iParam0))
	{
		return false;
	}
	if (func_16(iParam2, 8))
	{
		return func_752(iParam0, iParam1);
	}
	return true;
}

bool func_493(int* iParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	var uVar0;
	int iVar31;

	uVar0 = 15;
	if (!func_472(uParam1->f_16, iParam3, &uVar0, &iVar31, 0, 1))
	{
		return false;
	}
	switch (iVar31)
	{
		case 1:
			return func_753(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 2:
			return func_754(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 3:
			return func_755(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 4:
			return func_756(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 5:
			return func_757(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 6:
			return func_758(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 7:
			return func_759(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 8:
			return func_760(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 9:
			return func_761(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 10:
			return func_762(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 11:
			return func_763(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 12:
			return func_764(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 13:
			return func_765(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 14:
			return func_766(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 15:
			return func_767(iParam0, uParam1, iParam2, &uVar0, bParam4);
		default:
			break;
	}
	return false;
}

bool func_494(int* iParam0, int iParam1, struct<4> Param2, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	struct<10> Var0;
	struct<4> Var14;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;

	if (func_16(iParam9, 32))
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Param2))
		{
			return false;
		}
		Var0.f_9 = -1591664384;
		if (!func_397(Param2, &Var0, 1, 0, -1))
		{
			return false;
		}
		if (!func_630(iParam1, func_165(Var0.f_4), iParam6))
		{
			return false;
		}
	}
	if (func_16(iParam9, 1))
	{
		if (!func_768(iParam1))
		{
			return false;
		}
	}
	if (func_16(iParam9, 2))
	{
		if (func_769(iParam1, iParam7, 1))
		{
			return false;
		}
	}
	if (func_16(iParam9, 4))
	{
		if (!bParam10 && !INVENTORY::_0xB881CA836CC4B6D4(&Param2))
		{
			return false;
		}
		Var14.f_4 = iParam6;
		Var14 = { Param2 };
		iVar19 = func_338(iParam1, Param2, iParam6, 1, !bParam10, 0);
		iVar20 = func_486(iParam1, &Var14, !bParam10, 1);
		iVar21 = 1;
		if (func_380(iParam1, iParam7, &iVar21, 0))
		{
		}
		iVar22 = (func_770(iParam0, iParam1) * iVar21);
		if (iVar22 > 0)
		{
		}
		if (iVar20 >= 0)
		{
			iVar23 = (iVar20 - (iVar19 + iVar22));
			iVar24 = (iParam8 * iVar21);
			if (iVar24 > iVar20)
			{
				iVar24 = iVar20;
			}
			if (iVar23 <= 0)
			{
				return false;
			}
			else if ((iVar24 - iVar23) >= iVar21)
			{
				return false;
			}
		}
	}
	if (func_16(iParam9, 8))
	{
		return func_771(iParam0, iParam1, iParam7, iParam8);
	}
	return true;
}

struct<16> func_495(int iParam0, struct<4> Param1, int iParam5, int iParam6, bool bParam7)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_4 = { Param1 };
	Var0 = { func_281(iParam0, Var0.f_4, iParam5, 1) };
	Var0.f_8 = iParam0;
	Var0.f_9 = iParam6;
	Var0.f_11 = iParam5;
	if (bParam7)
	{
		Var0.f_15 = func_214(iParam0, joaat("DEFAULT"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_603() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

bool func_496(int* iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;
	int iVar31;

	uVar0 = 15;
	if (!func_477(uParam1->f_8, uParam1->f_13, &uVar0, &iVar31, 1, 0))
	{
		return false;
	}
	switch (iVar31)
	{
		case 1:
			return func_772(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 2:
			return func_773(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 3:
			return func_774(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 4:
			return func_775(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 5:
			return func_776(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 6:
			return func_777(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 7:
			return func_778(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 8:
			return func_779(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 9:
			return func_780(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 10:
			return func_781(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 11:
			return func_782(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 12:
			return func_783(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 13:
			return func_784(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 14:
			return func_785(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 15:
			return func_786(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		default:
			break;
	}
	return false;
}

bool func_497(int iParam0)
{
	if (func_153(iParam0, 75135761))
	{
		return true;
	}
	return false;
}

int func_498(int iParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_88(iParam0, 0))
	{
		return func_787(func_291(iParam0), bParam1);
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

bool func_499(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return func_788(36, iParam0);
}

bool func_500(int iParam0)
{
	if (iParam0 >= 1 && iParam0 <= 184)
	{
		return true;
	}
	return false;
}

int func_501(int iParam0)
{
	if (!func_500(iParam0))
	{
		return 0;
	}
	return Global_1139381.f_11[iParam0 /*3*/].f_2;
}

bool func_502(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_789(iParam0, &uVar25, &Var12, &Var0, bParam1, iParam2, iParam3, bParam4);
}

bool func_503()
{
	return (func_790(0) && func_790(1));
}

bool func_504()
{
	return (Global_1952637.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1952637.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE"));
}

int func_505(int iParam0)
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

int func_506(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_791(1);
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

int func_507(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -84152915;
		case 2:
			return -1789085602;
		case 3:
			return -593725333;
		case 4:
			return 1619211297;
		case 5:
			return -1448204146;
		case 6:
			return -1918007793;
		case 7:
			return -2108757294;
		case 8:
			return -787840584;
		case 9:
			return -7905424;
		case 10:
			return -376205482;
		case 11:
			return -1753179328;
		case 12:
			return -1876855008;
		case 13:
			return 550082662;
		case 14:
			return -1964113;
		case 15:
			return 196458601;
		case 16:
			return 22941087;
		case 17:
			return 2017633379;
		case 24:
			return 253945992;
		case 25:
			return -1689046118;
		case 26:
			return -483357612;
		case 27:
			return -430722038;
		case 28:
			return 64082831;
		case 35:
			return -1498321291;
		case 36:
			return 1654907663;
		case 37:
			return 1059449568;
		case 38:
			return 2073287291;
		case 39:
			return 1110270789;
		case 40:
			return 417802449;
		case 41:
			return 2136672177;
		case 42:
			return -1930911028;
		case 43:
			return -739528491;
		case 55:
			return 2075984360;
		default:
			break;
	}
	return 0;
}

bool func_508(int iParam0)
{
	return func_242(iParam0, 2);
}

int func_509(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			return iVar1;
		}
	}
	return 0;
}

void func_510(var uParam0, int iParam1)
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

int func_511(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
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
	func_792(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_3.f_1 = 10;
	Var1 = iParam3;
	Var1.f_3 = { *uParam1 };
	Var1.f_2 = iParam4;
	func_793(uParam2, iParam0, Var1);
	return 1;
}

int func_512(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	iVar1 = PED::_GET_PED_DAMAGE(iVar0);
	iVar2 = func_794(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	iVar3 = iVar1;
	iVar4 = iVar2;
	if (iVar4 < iVar3)
	{
		iVar1 = iVar4;
	}
	if (!PED::_0x9E7738B291706746(&iVar5, iVar0, iVar1))
	{
		return 0;
	}
	if (iVar5 != 0)
	{
		if (PED::_IS_METAPED_USING_COMPONENT(iVar0, 43391475) || ENTITY::_0x8DE41E9902E85756(iVar0))
		{
			iVar6 = func_795(iVar5);
			return iVar6;
		}
		return iVar5;
	}
	switch (iVar1)
	{
		case 2:
			return joaat("PROVISION_ANIMAL_CARCASS_PERFECT");
		case 1:
			return joaat("PROVISION_ANIMAL_CARCASS_HIGH_QUALITY");
		case 0:
			return joaat("PROVISION_ANIMAL_CARCASS_POOR");
		default:
			break;
	}
	return joaat("PROVISION_ANIMAL_CARCASS_POOR");
}

int func_513(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;

	iVar0 = func_632(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar1 = func_796(iVar0, iParam0);
		if (iVar1 > 0)
		{
			if (iParam1 < iVar1)
			{
				iVar1 = iParam1;
			}
			iParam1 = (iParam1 - iVar1);
			func_797(&iVar0, iParam0, &iVar1, bParam3, iParam4, iParam5);
			iParam1 = (iParam1 + iVar1);
		}
	}
	iParam1 = func_798(PLAYER::PLAYER_PED_ID(), iParam0, iParam1, bParam2, iParam5);
	if (iParam1 <= 0)
	{
		return iParam1;
	}
	return iParam1;
}

int func_514(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_92(iParam0, 0, 0, 0);
	if (iVar0 >= iParam1)
	{
		iVar1 = iParam1;
	}
	else
	{
		iVar1 = iVar0;
		iVar2 = (iParam1 - iVar1);
	}
	if (iVar1 > 0)
	{
		if (!func_74(iParam0, iVar1, bParam2, iParam3))
		{
			return 0;
		}
		else
		{
			func_799(iParam0, iVar1, 0);
		}
	}
	if (iVar2 > 0)
	{
		if (!func_800(iParam0, iVar2, bParam2, iParam3))
		{
			return 0;
		}
		else
		{
			func_799(iParam0, iVar1, 0);
		}
		if (!bParam2)
		{
			func_164("SHOP_SELL_HORSE_SATCHEL", 10000, 0, 0, 0, 1);
		}
	}
	return 1;
}

bool func_515(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17411.f_2565[iParam0], iParam1);
}

bool func_516(int iParam0)
{
	if (func_518(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_517(int iParam0)
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

bool func_518(int iParam0, int iParam1)
{
	return (Global_1904651.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_519(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_520()
{
	if (!func_354())
	{
		return false;
	}
	return Global_1904651.f_8684;
}

bool func_521(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return true;
	}
	if (iParam0 == 6 && iParam1 == 4)
	{
		return true;
	}
	return false;
}

bool func_522(int iParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

bool func_523(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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
		iParam3 = func_214(iParam2, joaat("DEFAULT"));
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!NETSHOPPING::_0xD1555FBC96C88444(iParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_801(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

struct<16> func_524(int iParam0, var uParam1)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_281(iParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = iParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

int func_525(int iParam0)
{
	if (func_88(iParam0, 0))
	{
		if (func_153(iParam0, -1242251796))
		{
			if (func_153(iParam0, 2060589226))
			{
				return func_802();
			}
			return func_803();
		}
		else if (func_153(iParam0, 1919582297))
		{
			return func_537();
		}
		else if (func_153(iParam0, 1647670816))
		{
			return func_804();
		}
		else if (func_153(iParam0, 1147021565))
		{
			return func_540();
		}
	}
	if (Global_1940144.f_12)
	{
		return func_803();
	}
	else
	{
		return func_540();
	}
	return func_540();
}

bool func_526(int iParam0)
{
	return (iParam0 == joaat("KIT_ROLE_NATURALIST_COMPENDIUM") || iParam0 == joaat("KIT_COLLECTORS_BAG"));
}

int func_527()
{
	return 234350720;
}

bool func_528(int iParam0)
{
	if ((((((((((func_153(iParam0, 1147021565) || func_153(iParam0, -136654233)) || func_153(iParam0, -524514947)) || func_153(iParam0, -1238310989)) || func_153(iParam0, 1765172170)) || func_153(iParam0, 1490540191)) || func_153(iParam0, 1573112293)) || func_153(iParam0, -1242251796)) || func_153(iParam0, 1919582297)) || func_153(iParam0, -2085281117)) || iParam0 == joaat("CONSUMABLE_OFFAL"))
	{
		return true;
	}
	return false;
}

int func_529()
{
	return 234086528;
}

int func_530()
{
	return 234339573;
}

int func_531()
{
	return 226211840;
}

int func_532()
{
	return 234596496;
}

int func_533()
{
	return 150191252;
}

int func_534()
{
	return 217554935;
}

int func_535()
{
	return 234596352;
}

int func_536()
{
	return 167247871;
}

int func_537()
{
	return 99859463;
}

int func_538()
{
	return 233516164;
}

int func_539()
{
	return 232407015;
}

int func_540()
{
	return 234339543;
}

int func_541()
{
	return 234348672;
}

bool func_542(int iParam0)
{
	return func_97(Global_1940144.f_7, iParam0);
}

bool func_543(bool bParam0)
{
	int iVar0;

	if (func_542(1))
	{
		if (bParam0)
		{
			func_164("ITEM_UNUSABLE_PICKING_UP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_542(2) && MISC::GET_GAME_TIMER() >= Global_17388)
	{
		if (bParam0)
		{
			iVar0 = func_805(Global_34);
			if (iVar0 != 0)
			{
				if (ENTITY::_0x9A100F1CF4546629(iVar0))
				{
					func_164("ITEM_UNUSABLE_SKINNING", 10000, 0, 0, 0, 1);
					return false;
				}
			}
			func_164("ITEM_UNUSABLE_LOOTING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_542(4194304))
	{
		return false;
	}
	return true;
}

bool func_544(bool bParam0, bool bParam1)
{
	struct<2> Var0;

	if (PED::_IS_PED_CARRYING(Global_34))
	{
		PED::_0x6B67320E0D57856A(Global_34, &Var0, 2, 0);
		if (bParam1)
		{
			switch (Var0.f_1)
			{
				case 4:
					return true;
				default:
					break;
			}
		}
		if (bParam0)
		{
			func_164("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_545(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (PED::_0x1D46B417F926D34D(Global_34))
	{
		return false;
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(Global_34, true))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(Global_34, false))
		{
			return false;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_34);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		switch (iVar1)
		{
			case joaat("ROWBOAT"):
			case joaat("HANDCART"):
				if (bParam0)
				{
					func_164("ITEM_UNUSABLE_VEHICLE", 10000, 0, 0, 0, 1);
				}
				return false;
			case joaat("BREACH_CANNON"):
			case joaat("GATLING_GUN"):
			case joaat("GATLINGMAXIM02"):
			case joaat("HOTCHKISS_CANNON"):
				if (bParam0)
				{
					func_164("ITEM_UNUSABLE_CANNON", 10000, 0, 0, 0, 1);
				}
				return false;
		}
		if (!func_16(iParam1, 32) && !PED::IS_PED_ON_MOUNT(Global_34))
		{
			if (bParam2 || VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(iVar0) == Global_34)
			{
				return false;
			}
		}
	}
	else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Global_34))
	{
		return false;
	}
	return true;
}

bool func_546(int iParam0, int iParam1)
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

bool func_547(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true);
	}
	return false;
}

bool func_548(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;

	if (bParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			return false;
		}
		if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
		{
			return false;
		}
	}
	fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
	fVar1 = PED::_0xCA95924C893A0C91(iParam0, fVar0);
	if (fVar1 <= 1.5f)
	{
		return true;
	}
	return false;
}

int func_549(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!func_86(*iParam0))
	{
		return -1;
	}
	iVar0 = -1;
	iVar5 = func_806(*iParam0);
	switch (*iParam0)
	{
		case 4:
			iVar2 = iVar5;
			iVar1 = func_807(iVar2);
			if (iVar1 == -1)
			{
			}
			else
			{
				iVar0 = func_808(iVar1);
			}
			break;
		case 3:
			iVar3 = func_809(iVar5);
			iVar4 = func_810(iVar3);
			if (iVar4 == -1)
			{
			}
			else
			{
				iVar0 = func_811(iVar4);
			}
			break;
		default:
			break;
	}
	return iVar0;
}

bool func_550(int iParam0, int iParam1, bool bParam2)
{
	return !MISC::_IS_STRING_SPACE(func_552(func_812(iParam0, iParam1, bParam2)));
}

struct<8> func_551(int iParam0, int iParam1)
{
	return func_812(iParam0, iParam1, 1);
}

char* func_552(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

bool func_553(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (Global_1211392.f_48[iParam0 /*21*/].f_18[iVar0] != 0 && Global_1211392.f_48[iParam0 /*21*/].f_18[iVar0] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_554(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 50);
}

bool func_555(int iParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (Global_17411.f_2966 == 1)
	{
		if (iParam0 == -1)
		{
			return false;
		}
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (Global_17411.f_2966.f_1[iVar1 /*5*/].f_4 == 0)
			{
			}
			else if (func_813(Global_17411.f_2966.f_1[iVar1 /*5*/].f_1))
			{
			}
			else
			{
				iVar2 = 0;
				while (iVar2 <= 3)
				{
					if (func_813(Global_1211392.f_48[iParam0 /*21*/][iVar2 /*4*/].f_1))
					{
					}
					else
					{
						fVar0 = func_814(Global_17411.f_2966.f_1[iVar1 /*5*/].f_1, Global_1211392.f_48[iParam0 /*21*/][iVar2 /*4*/].f_1);
						if (fVar0 < 300f)
						{
							return false;
						}
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	if (func_815(4))
	{
		return false;
	}
	if (func_558())
	{
		return true;
	}
	if (func_816())
	{
		return false;
	}
	if (func_817(1, 255))
	{
		return false;
	}
	if (func_86(func_818()) && Global_1211392.f_1.f_20 != 3)
	{
		return false;
	}
	return true;
}

bool func_556(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (Global_1211392.f_48[iParam0 /*21*/].f_18[iVar0] != 0 && func_23(Global_1211392.f_48[iParam0 /*21*/].f_18[iVar0], 1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_557(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (Global_1211392.f_48[iParam0 /*21*/].f_18[iVar0] != 0 && func_819(Global_1211392.f_48[iParam0 /*21*/].f_18[iVar0]))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_558()
{
	return func_820(func_85(0));
}

bool func_559(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			return false;
		}
	}
	return PED::_IS_METAPED_USING_COMPONENT(iParam0, iParam1);
}

int func_560()
{
	int iVar0;
	int iVar1;

	if (PED::_IS_PED_CARRYING(Global_34))
	{
		return 1;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_34, &iVar0, true, 0, false))
	{
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_34, &iVar1, true, 1, false))
	{
	}
	if (iVar1 == joaat("WEAPON_UNARMED"))
	{
		if (iVar0 == joaat("WEAPON_UNARMED"))
		{
			return 1;
		}
		else if ((((WEAPON::IS_WEAPON_VALID(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0)) && !func_261(iVar0)) && !PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_34, true)) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_34, false) && !CAM::_0xA24C1D341C6E0D53(1, 0, 0)))
		{
			return 3;
		}
		else if (WEAPON::_IS_WEAPON_BINOCULARS(iVar0))
		{
			return 1;
		}
		else if ((WEAPON::IS_WEAPON_VALID(iVar0) && func_261(iVar0)) || WEAPON::_IS_WEAPON_LASSO(iVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iVar0 == joaat("WEAPON_UNARMED"))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_561(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CONSUMABLE_HERB_GINSENG"):
			return 2;
		case joaat("CONSUMABLE_HERB_BAY_BOLETE"):
			return 4;
		case joaat("CONSUMABLE_HERB_BLACK_BERRY"):
			return 5;
		case joaat("CONSUMABLE_HERB_CURRANT"):
			return 6;
		case joaat("CONSUMABLE_HERB_BURDOCK_ROOT"):
			return 7;
		case joaat("CONSUMABLE_HERB_CHANTERELLES"):
			return 8;
		case joaat("CONSUMABLE_HERB_COMMON_BULRUSH"):
			return 11;
		case joaat("CONSUMABLE_HERB_CREEPING_THYME"):
			return 12;
		case joaat("CONSUMABLE_HERB_ENGLISH_MACE"):
			return 15;
		case joaat("CONSUMABLE_HERB_EVERGREEN_HUCKLEBERRY"):
			return 16;
		case joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"):
			return 21;
		case joaat("CONSUMABLE_HERB_MILKWEED"):
			return 24;
		case joaat("CONSUMABLE_HERB_OLEANDER_SAGE"):
			return 27;
		case joaat("CONSUMABLE_HERB_OREGANO"):
			return 28;
		case joaat("CONSUMABLE_HERB_PARASOL_MUSHROOM"):
			return 29;
		case joaat("CONSUMABLE_HERB_PRAIRIE_POPPY"):
			return 30;
		case joaat("CONSUMABLE_HERB_RAMS_HEAD"):
			return 32;
		case joaat("CONSUMABLE_HERB_RED_RASPBERRY"):
			return 34;
		case joaat("CONSUMABLE_HERB_SAGE"):
			return 35;
		case joaat("CONSUMABLE_HERB_VANILLA_FLOWER"):
			return 38;
		case joaat("CONSUMABLE_HERB_VIOLET_SNOWDROP"):
			return 39;
		case joaat("CONSUMABLE_HERB_WILD_CARROTS"):
			return 49;
		case joaat("CONSUMABLE_HERB_WILD_FEVERFEW"):
			return 50;
		case joaat("CONSUMABLE_HERB_WILD_MINT"):
			return 51;
		case joaat("CONSUMABLE_HERB_WINTERGREEN_BERRY"):
			return 52;
		case joaat("CONSUMABLE_HERB_YARROW"):
			return 53;
		case joaat("PROVISION_WLDFLWR_AGARITA"):
			return 40;
		case joaat("PROVISION_WLDFLWR_TEXAS_BLUE_BONNET"):
			return 41;
		case joaat("PROVISION_WLDFLWR_BITTERWEED"):
			return 42;
		case joaat("PROVISION_WLDFLWR_BLOOD_FLOWER"):
			return 43;
		case joaat("PROVISION_WLDFLWR_CARDINAL_FLOWER"):
			return 44;
		case joaat("PROVISION_WLDFLWR_CHOCOLATE_DAISY"):
			return 45;
		case joaat("PROVISION_WLDFLWR_CREEK_PLUM"):
			return 46;
		case joaat("PROVISION_WLDFLWR_WILD_RHUBARB"):
			return 47;
		case joaat("PROVISION_WLDFLWR_WISTERIA"):
			return 48;
	}
	return 0;
}

void func_562(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_821(iParam0);
	iVar1 = func_561(iVar0);
	if (iVar1 != iParam0)
	{
		func_822(iVar1, 4);
	}
	if (!func_823(iParam0))
	{
		return;
	}
	if (func_824(iParam0))
	{
		return;
	}
	func_822(iParam0, 4);
	func_825(iParam0, bParam1);
	if (!func_826(iParam0))
	{
		func_827(iParam0, 1, 0);
	}
	if (bParam1)
	{
		if (!func_18(0, 0, 1))
		{
			func_828(1, 6);
		}
	}
}

bool func_563(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (TASK::_0x2D19BC4DF626CBE7(iParam0, iParam1, iParam2, iParam3))
	{
		TASK::_TASK_ITEM_INTERACTION(iParam0, iParam1, iParam2, iParam3, 0, -1082130432 /* Float: -1f */);
		Global_1940144.f_26 = 1;
		return true;
	}
	ATTRIBUTE::_0xD962F8579D702DB5();
	return false;
}

void func_564(int iParam0)
{
	struct<2> Var0;
	struct<6> Var22;
	int iVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	bool bVar37;
	bool bVar38;
	bool bVar39;

	Var0.f_1 = 20;
	if ((func_153(iParam0, 1573112293) || func_153(iParam0, 672467738)) || func_153(iParam0, -550842268))
	{
		bVar37 = true;
	}
	if (func_89(iParam0) == joaat("CONSUMABLE"))
	{
		ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iParam0, &Var0);
		ATTRIBUTE::_0xD962F8579D702DB5();
		iVar29 = 0;
		while (iVar29 < Var0)
		{
			if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(Var0.f_1[iVar29], &Var22))
			{
			}
			else if (-943921969 == Var22.f_1)
			{
				fVar30 = func_829(0, Var22.f_2);
				func_830(Var22.f_2);
				bVar39 = true;
			}
			else if (-1104847406 == Var22.f_1)
			{
				fVar31 = func_829(2, Var22.f_2);
				func_831(Var22.f_2, 0);
				bVar38 = true;
			}
			else if (381158954 == Var22.f_1)
			{
				fVar32 = func_829(1, Var22.f_2);
				func_832(Var22.f_2);
			}
			else if (-416929031 == Var22.f_1)
			{
				fVar33 = func_648(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
				func_649(0, fVar33, 1, 1, bVar37);
				bVar39 = true;
			}
			else if (1857353317 == Var22.f_1)
			{
				fVar34 = func_648(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
				func_649(2, fVar34, 1, 1, bVar37);
				bVar38 = true;
			}
			else if (1681823811 == Var22.f_1)
			{
				fVar35 = func_648(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
				func_649(1, fVar35, 1, 1, bVar37);
			}
			else if (2062242710 == Var22.f_1)
			{
				fVar36 = func_651(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_652(19, fVar36, 1, 1);
				bVar39 = true;
			}
			else if (-826379728 == Var22.f_1)
			{
				fVar36 = func_651(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_652(20, fVar36, 1, 1);
				bVar38 = true;
			}
			else if (-1191740624 == Var22.f_1)
			{
				fVar36 = func_651(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_652(18, fVar36, 1, 1);
			}
			else if (1869697234 == Var22.f_1)
			{
				fVar36 = func_651(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_652(0, fVar36, 1, 1);
				bVar39 = true;
			}
			else if (1342237631 == Var22.f_1)
			{
				fVar36 = func_651(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_652(2, fVar36, 1, 1);
				bVar38 = true;
			}
			else if (-1240225157 == Var22.f_1)
			{
				fVar36 = func_651(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_652(1, fVar36, 1, 1);
			}
			else if (-816334026 == Var22.f_1)
			{
				func_650(BUILTIN::TO_FLOAT(Var22.f_2), 1);
			}
			iVar29++;
		}
		if (bVar39 || func_153(iParam0, -537818634))
		{
			func_111(func_387(joaat("MEDICINE_ITEMS_USED")), 1);
		}
		if (func_153(iParam0, -1457797660))
		{
			func_111(func_387(joaat("PROVISION_ITEMS_USED")), 1);
		}
		if (bVar38)
		{
			func_111(func_387(joaat("DEADEYE_ITEMS_USED")), 1);
		}
		switch (iParam0)
		{
			case -1735850413: /* GXTEntry: "Pickled Egg" */
			case -241345764: /* GXTEntry: "Almonds" */
				STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_CONSUMABLE_SALOONSNACK_00"), 1);
				break;
		}
		PLAYER::_0x0E1DB1F8F5B561DC(fVar30, fVar32, fVar31, BUILTIN::ROUND((fVar33 / 2f)), BUILTIN::ROUND((fVar35 / 2f)), BUILTIN::ROUND((fVar34 / 2f)));
	}
}

void func_565(int iParam0)
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

bool func_566(int iParam0)
{
	return Global_1952637.f_595[iParam0] > 0;
}

void func_567(int iParam0)
{
	Global_1952637.f_595[iParam0]++;
}

bool func_568()
{
	if (Global_1952637.f_3485)
	{
		return true;
	}
	if (MISC::ABSI((MISC::GET_GAME_TIMER() - Global_1952637.f_3483)) < 1250)
	{
		return true;
	}
	if (func_833())
	{
		return true;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_34))
	{
		return true;
	}
	return false;
}

int func_569(int iParam0)
{
	int iVar0;

	iVar0 = func_165(iParam0);
	if (((iVar0 == 81053684 || iVar0 == -525676072) || func_153(iParam0, 160827531)) || func_153(iParam0, -1303648999))
	{
		return 1;
	}
	return 0;
}

void func_570(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_571(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_577(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_572(int iParam0)
{
	if (-1829635046 == func_834(81053684))
	{
		if (func_577(iParam0))
		{
			return true;
		}
	}
	else if (func_135(-525676072, iParam0) || func_153(func_835(1742327865), -1303648999))
	{
		if (func_577(iParam0))
		{
			return true;
		}
	}
	return false;
}

int func_573()
{
	int iVar0;

	iVar0 = joaat("MASK_OFF_LEFT_HAND");
	switch (func_560())
	{
		case 0:
			iVar0 = joaat("MASK_OFF_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("MASK_OFF_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("MASK_OFF_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_574()
{
	int iVar0;

	iVar0 = joaat("BANDANA_OFF_LEFT_HAND");
	switch (func_560())
	{
		case 0:
			iVar0 = joaat("BANDANA_OFF_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("BANDANA_OFF_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("BANDANA_OFF_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_575()
{
	int iVar0;

	iVar0 = joaat("MASK_ON_LEFT_HAND");
	switch (func_560())
	{
		case 0:
			iVar0 = joaat("MASK_ON_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("MASK_ON_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("MASK_ON_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_576()
{
	int iVar0;

	iVar0 = joaat("BANDANA_ON_LEFT_HAND");
	switch (func_560())
	{
		case 0:
			iVar0 = joaat("BANDANA_ON_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("BANDANA_ON_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("BANDANA_ON_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

bool func_577(int iParam0)
{
	if (func_135(81053684, iParam0))
	{
		return true;
	}
	if (func_135(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

void func_578(int iParam0)
{
	Global_1952637 = (Global_1952637 - (Global_1952637 && iParam0));
}

void func_579(int iParam0, int iParam1, int iParam2)
{
	Global_1952637.f_83[func_260(iParam0, 1) /*12*/].f_11 = (Global_1952637.f_83[func_260(iParam0, 1) /*12*/].f_11 - (Global_1952637.f_83[func_260(iParam0, 1) /*12*/].f_11 && iParam1));
}

int func_580(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1952637.f_3334.f_28;
		case 81053684:
			return Global_1952637.f_3334.f_30;
		case -525676072:
			return Global_1952637.f_3334.f_29;
		case -1719060085:
			return Global_1952637.f_3334.f_31;
		case 1388798186:
			return Global_1952637.f_3334.f_33.f_7;
		case 119907797:
			return Global_1952637.f_3334.f_32;
		case -999503751:
			if (bParam1)
			{
				return Global_1952637.f_3334.f_27;
			}
			else
			{
				return func_836();
			}
			break;
	}
	return 0;
}

int func_581(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -2061583405:
			iVar0 = Global_1952637.f_3334.f_33.f_1;
			break;
		case 81053684:
			iVar0 = 1;
			break;
		case -525676072:
			iVar0 = Global_1952637.f_3334.f_33.f_2;
			break;
		case -1719060085:
			iVar0 = 1;
			break;
		case -999503751:
			iVar0 = Global_1952637.f_3334.f_33;
			break;
		case 1388798186:
			iVar0 = 1;
			break;
		case 119907797:
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

bool func_582(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1952637.f_3334.f_26)
	{
		if (iParam0 == Global_1952637.f_3334[*uParam1])
		{
			return true;
		}
		*uParam1++;
	}
	return false;
}

int func_583(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;

	iVar1 = iParam0;
	if (Global_1952637.f_3334.f_26 >= 25)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_582(iVar1, &uVar0))
	{
		return 0;
	}
	if (!func_837(iParam0, 0))
	{
		return 0;
	}
	if (bParam3 && !func_838(iParam0, 0, bParam4))
	{
		return 0;
	}
	Global_1952637.f_3334[Global_1952637.f_3334.f_26] = iVar1;
	Global_1952637.f_3334.f_26++;
	*uParam1++;
	return 1;
}

void func_584()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1952637.f_3334.f_26)
	{
		Global_17411.f_55.f_644[iVar0] = Global_1952637.f_3334[iVar0];
		iVar0++;
	}
	Global_17411.f_55.f_644.f_27 = Global_1952637.f_3334.f_27;
	Global_17411.f_55.f_644.f_28 = Global_1952637.f_3334.f_28;
	Global_17411.f_55.f_644.f_29 = Global_1952637.f_3334.f_29;
	Global_17411.f_55.f_644.f_30 = Global_1952637.f_3334.f_30;
	Global_17411.f_55.f_644.f_31 = Global_1952637.f_3334.f_31;
	Global_17411.f_55.f_644.f_32 = Global_1952637.f_3334.f_32;
	Global_17411.f_55.f_644.f_26 = Global_1952637.f_3334.f_26;
}

bool func_585(int iParam0)
{
	return func_840(func_839(iParam0));
}

void func_586(bool bParam0, int iParam1)
{
	struct<2> Var0;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	char* sVar10;

	if (!func_88(iParam1, 0))
	{
		return;
	}
	iVar7 = -1;
	if (!func_372(iParam1, &Var0, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		Var0 = "_PLACEHOLDER";
		Var0.f_1 = "inventory_items";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var0))
	{
		return;
	}
	if (bParam0)
	{
		sVar4 = "Transaction_Positive";
		iVar6 = joaat("COLOR_PURE_WHITE");
		iVar7 = func_841(iParam1);
		if ((iVar7 > 0 && iVar7 < 11) && func_842(4, iVar7))
		{
			sVar3 = "OUTFIT_STORED_LITERAL";
			sVar5 = func_552(func_843(iVar7));
		}
		else
		{
			iVar8 = func_378(iParam1);
			if (func_88(iVar8, 0))
			{
				iParam1 = iVar8;
			}
			sVar3 = "ITEM_STORED";
			sVar5 = MISC::_CREATE_VAR_STRING(0, func_375(iParam1));
		}
	}
	else
	{
		sVar4 = "Transaction_Positive";
		iVar6 = joaat("COLOR_PURE_WHITE");
		iVar7 = func_841(iParam1);
		if ((iVar7 > 0 && iVar7 < 11) && func_842(4, iVar7))
		{
			sVar3 = "OUTFIT_REMOVED_LITERAL";
			sVar5 = func_552(func_843(iVar7));
		}
		else
		{
			iVar9 = func_378(iParam1);
			if (func_88(iVar9, 0))
			{
				iParam1 = iVar9;
			}
			sVar3 = "ITEM_REMOVED";
			sVar5 = MISC::_CREATE_VAR_STRING(0, func_375(iParam1));
		}
	}
	sVar10 = func_381(MISC::_CREATE_VAR_STRING(10, sVar3, sVar5), iVar6);
	func_386(sVar10, Var0.f_1, MISC::GET_HASH_KEY(Var0), 0, iVar6, "Transaction_Feed_Sounds", sVar4, 0, 1);
}

void func_587(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_844();
	}
	if (bParam0)
	{
		func_317(8);
		func_317(512);
	}
	else
	{
		func_317(8);
		func_317(16);
	}
}

int func_588()
{
	return Global_1952637.f_1;
}

bool func_589(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_165(iParam1);
	iVar1 = func_165(iParam0);
	if (iVar0 == iVar1)
	{
		return true;
	}
	if (func_845(iParam1) && func_845(iParam0))
	{
		return true;
	}
	return false;
}

void func_590(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	func_846(iParam0, 0, 0, bParam3, bParam5);
	func_328(iParam1, 1, bParam2, iParam4, bParam3, bParam5);
}

int func_591(int iParam0, int iParam1)
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

void func_592()
{
	int iVar0;

	Global_1952637.f_1556 = Global_1952637.f_1675;
	Global_1952637.f_1552 = Global_1952637.f_1554;
	Global_1952637.f_1552.f_1 = Global_1952637.f_1554.f_1;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_1952637.f_1556.f_1[iVar0 /*3*/] = { Global_1952637.f_1675.f_1[iVar0 /*3*/] };
		iVar0++;
	}
}

void func_593(int iParam0)
{
	func_579(iParam0, 8, 6);
}

void func_594(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	if (bParam3)
	{
		if ((*iParam1 == joaat("CLOTHING_ITEM_OVERALLS_NONE") || *iParam1 == joaat("CLOTHING_ITEM_PANTS_NONE")) || *iParam1 == 750544038)
		{
			iVar0 = 16;
			if (func_165(uParam0->f_1[iVar0 /*3*/]) != 1882579758)
			{
				return;
			}
			iVar1 = func_847(uParam0->f_1[iVar0 /*3*/]);
			if (iVar1 != 0 && iVar1 != Global_1952637.f_83[iParam2 /*12*/])
			{
				*iParam1 = iVar1;
				return;
			}
		}
		if (!func_848(*iParam1, iParam2))
		{
			*iParam1 = Global_1952637.f_1675.f_1[iParam2 /*3*/];
			return;
		}
	}
	*iParam1 = Global_1952637.f_83[iParam2 /*12*/];
}

void func_595(int iParam0)
{
	func_849(&(Global_1952637.f_2897), iParam0);
}

void func_596(int iParam0, int iParam1)
{
	if (iParam1 & 8 != 0)
	{
		return;
	}
	func_850(&(Global_1952637.f_2897), iParam0, iParam1);
}

void func_597(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_598(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	bool bVar1;

	iVar0 = iParam1;
	bVar1 = func_334(iVar0, 1);
	if (bParam3 && func_153(uParam0->f_1[iParam2 /*3*/], 343781202))
	{
		func_851(uParam0, uParam0->f_1[iParam2 /*3*/]);
	}
	switch (func_591(iParam2, 1))
	{
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			func_852(uParam0, iVar0, iParam2, iParam4);
			break;
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			func_853(uParam0, iVar0, iParam2);
			break;
		case -338487716:
			func_854(uParam0, iVar0, bVar1, iParam4);
			break;
		case 1108822547:
			func_855(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1742327865:
			func_856(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1250092473:
			func_857(uParam0, bVar1, iVar0, iParam2, iParam4);
			break;
		case -893163968:
			func_858(uParam0, bVar1, iVar0, iParam4);
			break;
		case -450913544:
			func_859(uParam0, bVar1, iVar0, iParam2, iParam4);
			break;
		case -1197751823:
			func_860(uParam0, bVar1, iVar0, iParam4);
			break;
		case 304805134:
			func_861(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1145151482:
			func_862(uParam0, bVar1, iParam4);
			break;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			func_863(uParam0, bVar1, iVar0, iParam4);
			break;
		case -426430150:
			func_864(uParam0, bVar1, iParam4);
			break;
		case 788010710:
			func_865(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1958421083:
			func_866(uParam0, bVar1, iVar0, iParam4);
			break;
		case -1944638739:
			func_867(uParam0, bVar1, iVar0, iParam4);
			break;
	}
}

int func_599(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	if (func_588() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 1;
	}
	if (iParam2 == 289238755)
	{
		return 289238755;
	}
	if (iParam2 != 0 && func_868(iParam0, iVar0, iParam2) != -1)
	{
		return iParam2;
	}
	if (func_869(iParam0, func_591(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_600(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;

	if (*uParam0 <= 0)
	{
		return;
	}
	if (func_324(4718592))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_870(uParam0->f_2[iVar0 /*2*/], bParam1, bParam2);
		iVar0++;
	}
	if (bParam4)
	{
		bVar1 = false;
		if (Global_1952637.f_1675 != 491602716 || !func_842(2, -1))
		{
			bVar1 = true;
		}
		else if (!func_153(Global_1952637.f_1675, -166674229) && (Global_1952637.f_1675 != 491602716 || !func_842(2, -1)))
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			Global_1952637.f_1675 = 491602716; /* GXTEntry: "Custom Outfit" */
			Global_1952637.f_1556 = 491602716; /* GXTEntry: "Custom Outfit" */
			func_871(-1, 0, 6);
			func_168(27, 0, 65536, 0, 0);
		}
	}
	if (bParam3)
	{
		func_587(0, 1);
	}
}

int func_601(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_872(&uParam0, iParam4, bParam5, iParam6);
}

bool func_602(struct<4> Param0, int iParam4, bool bParam5)
{
	struct<11> Var0;

	if (!func_76(0))
	{
		return func_873(&Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_397(Param0, &Var0, bParam5, 0, -1))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_71(bParam5), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

struct<4> func_603()
{
	struct<4> Var0;

	return Var0;
}

bool func_604(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (func_874(Global_34, iParam0, 0, 1) < 2f && PED::_0xD543D3A8FDE4F185(Global_34, iParam0))
	{
		return true;
	}
	return false;
}

bool func_605()
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SHOP_ANYWHERE_HANDHELD")))
	{
		func_290(2);
		return false;
	}
	if (!func_354())
	{
		func_290(9);
		return false;
	}
	if (Global_1051439.f_72[34 /*75*/].f_1 & 128 != 0)
	{
		func_290(3);
		return false;
	}
	Var0 = { func_85(0) };
	if (func_86(Var0))
	{
		iVar2 = -1;
		switch (Var0)
		{
			case 6:
				iVar3 = func_361(PLAYER::PLAYER_ID(), 0);
				if (iVar3 != -1)
				{
					iVar2 = func_875(iVar3);
				}
				break;
			case 3:
			case 4:
				iVar4 = func_549(&Var0, 0);
				if (iVar4 != -1)
				{
					if (func_550(iVar4, 461218520, 0))
					{
						iVar2 = 46;
					}
				}
				break;
		}
		if (iVar2 != -1)
		{
			func_290(iVar2);
			return false;
		}
	}
	if (func_876())
	{
		func_290(4);
		return false;
	}
	if (func_817(4, PLAYER::NETWORK_PLAYER_ID_TO_INT()) && Global_1051439.f_72[34 /*75*/].f_49 & 1073741824 == 0)
	{
		func_290(5);
		return false;
	}
	if (func_877(131072, 255))
	{
		func_290(7);
		return false;
	}
	if (func_878())
	{
		func_290(8);
		return false;
	}
	return true;
}

bool func_606(int iParam0, int iParam1)
{
	if (((PED::IS_PED_IN_COMBAT(Global_34, 0) || PED::IS_PED_IN_MELEE_COMBAT(Global_34)) || func_16(iParam1, 1024)) && PED::_0x336B3D200AB007CB(Global_34, Global_35, iParam0, iParam1) > 0)
	{
		return true;
	}
	return false;
}

bool func_607(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219.f_3 & 32 != 0;
	}
	return func_877(32, iParam0);
}

bool func_608(int iParam0)
{
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 3)
	{
		return true;
	}
	return false;
}

void func_609(bool bParam0)
{
	if (bParam0)
	{
		func_879(4);
	}
	else
	{
		func_345(4);
	}
}

void func_610(bool bParam0)
{
	if (!(bParam0 && Global_1915715.f_22504))
	{
		if (bParam0)
		{
			INVENTORY::_0x6A564540FAC12211(2, joaat("KIT_HANDHELD_CATALOG"));
		}
		else
		{
			INVENTORY::_0x766315A564594401(2, joaat("KIT_HANDHELD_CATALOG"), 0);
		}
	}
	Global_1915715.f_22504 = bParam0;
}

bool func_611()
{
	return Global_1915715.f_20643;
}

int func_612(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
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
	if (func_880())
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

bool func_613(int iParam0, int iParam1, int iParam2)
{
	return func_97(Global_1196567[iParam2 /*10*/][iParam0], iParam1);
}

var func_614(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	SCRIPTS::_0xDE544B7EC0C187CC(&uVar0);
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return uVar0;
	}
	if (func_881() != 0)
	{
		iVar1 = PLAYER::PLAYER_ID();
		if (iVar1 >= 0 && iVar1 < 32)
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar1);
		}
		return uVar0;
	}
	iVar2 = 0;
	bVar3 = false;
	bVar4 = false;
	iVar5 = Global_1296859.f_10;
	iVar6 = Global_1296859.f_15;
	bVar7 = true;
	iVar9 = iParam10;
	if (BUILTIN::VMAG2(vParam6) < 1f)
	{
		bVar7 = false;
	}
	else
	{
		switch (iParam9)
		{
			case joaat("VOLCYLINDER"):
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_882());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_882());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_882());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_883(PLAYER::GET_PLAYER_TEAM(iVar5)));
	}
	if (iVar9 & 8 != 0 && iVar9 & 32768 != 0)
	{
		iVar9 |= 65536;
		iVar9 = (iVar9 - iVar9 & 40952);
	}
	if (iVar9 & 4 != 0)
	{
		if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iVar9 = (iVar9 - iVar9 & 4);
			iVar9 |= 0;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1296859.f_154[iVar2]))
		{
			iVar10 = Global_1296859.f_154[iVar2];
			bVar3 = false;
			bVar4 = false;
			if (iVar9 & 1 != 0 && iVar10 == iVar5)
			{
				bVar3 = true;
			}
			if (func_499(iVar2))
			{
				bVar3 = true;
			}
			iVar11 = PLAYER::GET_PLAYER_PED(iVar10);
			if (!bVar3)
			{
				if (iVar9 & 2 != 0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iVar11))
					{
						bVar3 = true;
					}
					else if (Global_1296859.f_88[iVar2])
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8192 != 0 && func_884(iVar2) != 1)
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 16384 != 0 && PED::_0xB655DB7582AEC805(iVar11))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 4 != 0 && !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar10))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8176 != 0)
				{
					switch (PLAYER::GET_PLAYER_TEAM(iVar10))
					{
						case -1:
							if (iVar9 & 16 != 0)
							{
								bVar4 = true;
							}
							break;
						case 0:
							if (iVar9 & 32 != 0)
							{
								bVar4 = true;
							}
							break;
						case 1:
							if (iVar9 & 64 != 0)
							{
								bVar4 = true;
							}
							break;
						case 2:
							if (iVar9 & 128 != 0)
							{
								bVar4 = true;
							}
							break;
						case 3:
							if (iVar9 & 256 != 0)
							{
								bVar4 = true;
							}
							break;
						case 4:
							if (iVar9 & 512 != 0)
							{
								bVar4 = true;
							}
							break;
						case 5:
							if (iVar9 & 1024 != 0)
							{
								bVar4 = true;
							}
							break;
						case 6:
							if (iVar9 & 2048 != 0)
							{
								bVar4 = true;
							}
							break;
						case 8:
							if (iVar9 & 4096 != 0)
							{
								bVar4 = true;
							}
							break;
					}
					if (!bVar4)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 32768 != 0)
				{
					if (GANG::_0x901E0DC25080C8B9(iVar10) != iVar6)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 65536 != 0)
				{
					if (!func_885(iVar10))
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3 && bVar7)
			{
				if (!VOLUME::_IS_POSITION_INSIDE_VOLUME(iVar8, ENTITY::GET_ENTITY_COORDS(iVar11, false, false)))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar2);
			}
		}
		iVar2++;
	}
	if (bVar7)
	{
		VOLUME::_DELETE_VOLUME(iVar8);
	}
	return uVar0;
}

int func_615(var uParam0, struct<21> Param1)
{
	if (!func_886(uParam0))
	{
		return 0;
	}
	uParam0->f_2[*uParam0 /*21*/] = { Param1 };
	*uParam0++;
	return 1;
}

int func_616(int iParam0, int iParam1)
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

int func_617(int iParam0)
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

int func_618(int iParam0)
{
	var uVar0[5];
	int iVar6;

	if (!func_88(iParam0, 0))
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

struct<10> func_619(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_620(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

bool func_621(int iParam0)
{
	if (!func_88(iParam0, 0))
	{
	}
	if (func_153(iParam0, -393037696))
	{
		return true;
	}
	return false;
}

int func_622(int iParam0)
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

int func_623(int iParam0, int iParam1)
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

char* func_624(int iParam0)
{
	int iVar0;

	if (!func_88(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_375(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

bool func_625(int iParam0)
{
	if (func_165(iParam0) == -126813555 || func_165(iParam0) == 1946043663)
	{
		return true;
	}
	return false;
}

char* func_626(int iParam0)
{
	int iVar0;

	if (!func_88(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_377(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

void func_627(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

bool func_628()
{
	return (func_706(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_601(func_281(joaat("WARDROBE"), func_339(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_629(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_71(0);
	*uParam1 = { func_281(iParam0, func_389(0), iParam3, 0) };
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

bool func_630(int iParam0, int iParam1, int iParam2)
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

bool func_631(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_71(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

int func_632(int iParam0)
{
	return PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::GET_PLAYER_INDEX());
}

int func_633(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = func_92(iParam1, bParam2, 0, 0);
	iVar0 = (iVar0 + func_887(iParam0, iParam1));
	if (bParam3)
	{
		iVar0 = (iVar0 + func_888(iParam1, bParam4));
	}
	return iVar0;
}

void func_634()
{
	if (!func_88(Global_1940311.f_10893, 0))
	{
		Global_1940311.f_6 = 0;
	}
	else if ((((func_296(Global_1940311.f_10893, 1224357681) != 0 && Global_1940311.f_10892 != 0) && Global_1940311.f_10892 != -2074770370) && !Global_1915715.f_20638) && !Global_1915715.f_22504.f_1)
	{
		Global_1940311.f_6 = 1;
	}
	else
	{
		Global_1940311.f_6 = 0;
	}
}

void func_635(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_48))
	{
		if (PED::IS_PED_MALE(Global_34))
		{
			uParam0->f_48 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_explosive", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_48 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_explosive_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_48);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_49))
	{
		if (PED::IS_PED_MALE(Global_34))
		{
			uParam0->f_49 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_split", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_49 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_split_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_49);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_50))
	{
		if (PED::IS_PED_MALE(Global_34))
		{
			uParam0->f_50 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_modify_arrows", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_50 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_modify_arrows_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_50);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_51))
	{
		if (PED::IS_PED_MALE(Global_34))
		{
			uParam0->f_51 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_arrows", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_51 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_arrows_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_51);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_52))
	{
		if (PED::IS_PED_MALE(Global_34))
		{
			uParam0->f_52 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_throwingknives_improved", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_52 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_throwingknives_improved_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_52);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_53))
	{
		if (PED::IS_PED_MALE(Global_34))
		{
			uParam0->f_53 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_tomahawk", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_53 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_tomahawk_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_53);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_54))
	{
		if (PED::IS_PED_MALE(Global_34))
		{
			uParam0->f_54 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_poison_throwingknives", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_54 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_poison_throwingknives_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_54);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_55))
	{
		if (PED::IS_PED_MALE(Global_34))
		{
			uParam0->f_55 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_fire_bottle", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_55 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_fire_bottle_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_55);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_56))
	{
		if (PED::IS_PED_MALE(Global_34))
		{
			uParam0->f_56 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_volatile_dynamite", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_56 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_volatile_dynamite_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_56);
	}
}

bool func_636(char* sParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(sParam0);
}

bool func_637(var uParam0, var uParam1)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam1))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam1, true, false))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADING(*uParam1, true))
			{
				return false;
			}
			else
			{
				ANIMSCENE::LOAD_ANIM_SCENE(*uParam1);
				return false;
			}
		}
	}
	else
	{
		func_635(uParam0);
		return false;
	}
	return true;
}

int func_638(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_193(iParam0, 1, 0) };
	return func_331(Var0.f_4);
}

void func_639(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	iVar1 = func_638(iParam0);
	iVar2 = func_260(iVar1, 1);
	if (iVar2 == 39)
	{
		return;
	}
	if (func_889(iParam0) && func_327(iParam0))
	{
		iParam1 |= 64;
	}
	if ((iVar1 == 1108822547 && func_324(32768)) || iParam0 != Global_1952637.f_1675.f_1[iVar2 /*3*/])
	{
		if (func_889(Global_1952637.f_1675.f_1[iVar2 /*3*/]) && func_327(Global_1952637.f_1675.f_1[iVar2 /*3*/]))
		{
			iParam1 |= 32;
		}
		if (Global_1952637.f_83[iVar2 /*12*/].f_1 > 1)
		{
			iParam1 |= 16;
		}
		iVar3 = 0;
		switch (func_165(iParam0))
		{
			case 81053684:
				if (func_135(-525676072, &uVar0))
				{
					iVar3 = func_260(func_259(-525676072), 1);
					if (iVar3 == 39)
					{
					}
					else
					{
						Global_1952637.f_2685[iVar3 /*2*/] = Global_1952637.f_83[iVar3 /*12*/];
						if (func_153(iParam0, -180472385) && func_135(1024667707, &uVar0))
						{
							iVar3 = func_260(func_259(1024667707), 1);
							if (iVar3 == 39)
							{
							}
							else
							{
								Global_1952637.f_2685[iVar3 /*2*/] = Global_1952637.f_83[iVar3 /*12*/];
								Jump @513; //curOff = 342
								if (func_324(32768))
								{
									func_593(func_591(iVar2, 1));
								}
								if (func_135(81053684, &uVar4))
								{
									iVar3 = func_260(func_259(81053684), 1);
									if (iVar3 == 39)
									{
									}
									else
									{
										Global_1952637.f_2685[iVar3 /*2*/] = Global_1952637.f_83[iVar3 /*12*/];
										Jump @513; //curOff = 428
										if (!func_153(iParam0, 160827531))
										{
										}
										else
										{
											if (func_135(-525676072, &uVar0))
											{
												iVar3 = func_260(func_259(-525676072), 1);
												if (iVar3 == 39)
												{
												}
												else
												{
													Global_1952637.f_2685[iVar3 /*2*/] = Global_1952637.f_83[iVar3 /*12*/];
												}
												Global_1952637.f_2685[iVar2 /*2*/] = iParam0;
												func_890(iVar1, iParam1, 6);
											}
										}
									}
								}
							}
						}
					}
				}
				default:
					break;
		}
	}
}

int func_640(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	struct<2> Var1[15];
	int iVar32;
	int iVar34;
	int iVar35;
	var uVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;

	if (!func_76(0))
	{
		return 0;
	}
	else if (func_77())
	{
		return 0;
	}
	iVar0 = -1;
	if (Global_1915715.f_20638)
	{
		iVar0 = Global_1915715.f_20241;
	}
	if (!func_891(iParam0, 1, iParam1, &iVar32, &uVar36, bParam3, 0, 0))
	{
		iVar34 = iVar32;
		return 0;
	}
	if (func_477(iParam0, iParam1, &Var1, &iVar35, 1, 0))
	{
		iVar38 = 0;
		while (iVar38 < iVar35)
		{
			iVar34 = Var1[iVar38 /*2*/];
			iVar37 = func_475(iVar0, iVar34);
			if (iVar37 != 0)
			{
				bParam3 = false;
			}
			if (func_88(iVar34, 0))
			{
				if (iVar34 == joaat("CURRENCY_CASH"))
				{
					func_892(Var1[iVar38 /*2*/].f_1, 0, 0, bParam2, 0);
				}
				else if (bParam3)
				{
					if (func_252(iVar34) || func_478(iVar34))
					{
						if (!func_23(iVar34, Var1[iVar38 /*2*/].f_1))
						{
							iVar39 = func_893(7, iVar34, Var1[iVar38 /*2*/].f_1);
						}
						func_149(iVar34, iVar39, 562618531, 0, 0);
						Var1[iVar38 /*2*/].f_1 = (Var1[iVar38 /*2*/].f_1 - iVar39);
						if (Var1[iVar38 /*2*/].f_1 > 0)
						{
							if (!func_23(iVar34, Var1[iVar38 /*2*/].f_1))
							{
								func_894(iVar34, Var1[iVar38 /*2*/].f_1);
							}
							if (func_23(iVar34, Var1[iVar38 /*2*/].f_1))
							{
								func_74(iVar34, Var1[iVar38 /*2*/].f_1, bParam2, -142743235);
							}
						}
					}
					else
					{
						if (func_482(iVar34) > 0)
						{
							func_895(iVar34);
							Var1[iVar38 /*2*/].f_1 = (Var1[iVar38 /*2*/].f_1 - 1);
						}
						if (Var1[iVar38 /*2*/].f_1 > 0)
						{
							if (func_481(7, iVar34) > 0)
							{
								func_896(7, iVar34, Var1[iVar38 /*2*/].f_1);
								Var1[iVar38 /*2*/].f_1 = (Var1[iVar38 /*2*/].f_1 - func_896(7, iVar34, Var1[iVar38 /*2*/].f_1));
							}
						}
						if (Var1[iVar38 /*2*/].f_1 > 0)
						{
							func_74(iVar34, Var1[iVar38 /*2*/].f_1, bParam2, 562618531);
						}
					}
				}
				else if (iVar37 == 0)
				{
					if (func_252(iVar34) || func_478(iVar34))
					{
						if (!func_23(iVar34, Var1[iVar38 /*2*/].f_1))
						{
							func_894(iVar34, Var1[iVar38 /*2*/].f_1);
						}
					}
					func_74(iVar34, Var1[iVar38 /*2*/].f_1, bParam2, 562618531);
				}
				else
				{
					func_897(iVar34, iVar37, Var1[iVar38 /*2*/].f_1, 562618531);
				}
				iVar40 = func_561(iVar34);
				if (func_823(iVar40))
				{
					iVar41 = func_898(iVar40);
					func_111(func_110(joaat("USED_IN_RECIPE"), iVar41), Var1[iVar38 /*2*/].f_1);
				}
			}
			iVar38++;
		}
		return 1;
	}
	return 0;
}

int func_641(int iParam0)
{
	struct<5> Var0;

	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_4;
}

int func_642(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_193(iParam0, 0, 0) };
	return func_486(iParam0, &Var0, 0, bParam1);
}

int func_643(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

float func_644(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	switch (iParam0)
	{
		case 0:
			fVar0 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_34));
			fVar1 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_34, false));
			break;
		case 1:
			fVar0 = PED::_GET_PED_STAMINA(Global_34);
			fVar1 = PED::_GET_PED_MAX_STAMINA(Global_34);
			break;
		case 2:
			fVar0 = PLAYER::_0xA81D24AE0AF99A5E(PLAYER::GET_PLAYER_INDEX());
			fVar1 = PLAYER::_0x592F58BC4D2A2CF3(PLAYER::GET_PLAYER_INDEX(), 0);
			break;
	}
	fVar3 = (fParam1 + fVar0);
	if (fVar3 > fVar1)
	{
		fVar2 = (fVar1 - fVar0);
	}
	else
	{
		fVar2 = (fVar3 - fVar0);
	}
	return (fVar2 / 2f);
}

void func_645(float fParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (fParam0 == 0f)
	{
		return;
	}
	else if (fParam0 == -1f)
	{
		fParam0 = BUILTIN::TO_FLOAT(PED::_0x16F2C8C084AB2092(iVar0));
	}
	iVar1 = func_899(2);
	func_900((fParam0 * IntToFloat(iVar1)), 0);
}

void func_646(float fParam0, bool bParam1)
{
	int iVar0;

	if (fParam0 == 0f)
	{
		return;
	}
	else if (fParam0 == -1f)
	{
		fParam0 = BUILTIN::TO_FLOAT(10);
	}
	iVar0 = func_901(2);
	func_902((fParam0 * IntToFloat(iVar0)), 0, bParam1);
}

void func_647(float fParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (fParam0 == 0f)
	{
		return;
	}
	else if (fParam0 == -1f)
	{
		fParam0 = BUILTIN::TO_FLOAT(PED::_0xFC3B580C4380B5B7(iVar0));
	}
	iVar1 = func_903(2);
	func_904((fParam0 * IntToFloat(iVar1)), 0);
}

float func_648(float fParam0, float fParam1)
{
	if (fParam1 != 0f)
	{
		return ((fParam1 / 100f) * 100f);
	}
	return ((fParam0 / 8f) * 100f);
}

void func_649(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (fParam1 == 0f)
	{
		return;
	}
	if (bParam4)
	{
		fParam1 = func_905(iParam0, fParam1, 1);
	}
	func_907(iParam0, (func_906(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

void func_650(float fParam0, bool bParam1)
{
	if (fParam0 > 10f)
	{
		fParam0 = 10f;
	}
	if (func_908())
	{
		func_909(fParam0, 0);
	}
	if (bParam1)
	{
		Global_17411.f_55.f_2439.f_41++;
		if (5 == Global_17411.f_55.f_2439.f_41)
		{
			func_140(109, 0);
		}
	}
}

float func_651(float fParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return (fParam0 * 0.033f);
		case 1:
			return (fParam0 * 2f);
		case 2:
			return (fParam0 * 120f);
		case 3:
			return (fParam0 * 2880f);
		default:
			break;
	}
	return fParam0;
}

int func_652(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	return func_910(iParam0, fParam1, bParam2, bParam3);
}

void func_653(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (bParam2 || func_153(iParam0, -537818634))
	{
		func_111(func_387(joaat("MEDICINE_ITEMS_USED")), 1);
	}
	if (func_153(iParam0, -1457797660))
	{
		func_111(func_387(joaat("PROVISION_ITEMS_USED")), 1);
	}
	if (func_153(iParam0, 1573112293))
	{
		func_911(func_561(iParam0), 1);
	}
	if (func_153(iParam0, 1939071949))
	{
		func_111(func_110(joaat("USED"), joaat("TONIC")), 1);
	}
	if (func_153(iParam0, 1992556171))
	{
		func_111(func_387(joaat("CAMP_STEWS_CONSUMED")), 1);
	}
	if (func_153(iParam0, 1239889275))
	{
		func_111(func_387(joaat("ANTIQUE_BOTTLES_DRUNK")), 1);
	}
	switch (iParam0)
	{
		case joaat("CONSUMABLE_OAT_CAKES"):
		case joaat("CONSUMABLE_SUGARCUBE"):
		case joaat("CONSUMABLE_HAYCUBE"):
			func_111(func_110(joaat("USED"), joaat("FEED_BAG")), 1);
			break;
	}
	switch (iParam0)
	{
		case joaat("CONSUMABLE_TONIC_BLENDING"):
			func_111(func_110(joaat("USED"), -1875859641), 1);
			break;
		case joaat("CONSUMABLE_MOONSHINE"):
			func_111(func_110(joaat("USED"), joaat("MOONSHINE")), 1);
			break;
		case joaat("CONSUMABLE_WHISKEY_USED"):
		case joaat("CONSUMABLE_WHISKEY"):
			func_111(func_110(joaat("USED"), joaat("WHISKEY")), 1);
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM"):
			func_111(func_110(joaat("USED"), joaat("COCAINE_GUM")), 1);
			break;
		case joaat("CONSUMABLE_SNAKE_OIL"):
		case joaat("CONSUMABLE_POTENT_SNAKE_OIL"):
		case joaat("CONSUMABLE_SNAKE_OIL_USED"):
			func_111(func_110(joaat("USED"), joaat("SNAKE_OIL")), 1);
			break;
		case joaat("CONSUMABLE_CHEWING_TOBACCO"):
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			func_111(func_110(joaat("USED"), joaat("CHEWING_TOBACCO")), 1);
			break;
		case joaat("CONSUMABLE_HORSE_MEDICINE"):
		case joaat("CONSUMABLE_SPECIAL_HORSE_MEDICINE"):
		case joaat("CONSUMABLE_HORSE_MEDICINE_USED"):
		case joaat("CONSUMABLE_POTENT_HORSE_MEDICINE"):
			func_111(func_110(joaat("USED"), joaat("HORSE_PILLS")), 1);
			break;
		case joaat("CONSUMABLE_HERBIVORE_BAIT"):
		case joaat("CONSUMABLE_POTENT_HERBIVORE_BAIT"):
			func_111(func_110(joaat("USED"), joaat("POTENT_HERBIVORE_BAIT")), 1);
			break;
		case joaat("CONSUMABLE_PREDATOR_BAIT"):
		case joaat("CONSUMABLE_POTENT_PREDATOR_BAIT"):
			func_111(func_110(joaat("USED"), joaat("POTENT_PREDATOR_BAIT")), 1);
			break;
	}
	if (func_107() == -1)
	{
		if (iParam0 == joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"))
		{
			func_111(func_110(joaat("USED"), joaat("SPECIAL_TONIC")), 1);
		}
	}
	if (bParam1)
	{
		func_111(func_387(joaat("DEADEYE_ITEMS_USED")), 1);
	}
	func_912(iParam0, iParam3);
}

int func_654(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346.f_20)
	{
		if (Global_1293346.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			return Global_1293346.f_20.f_1[iVar0 /*21*/].f_1;
		}
		iVar0++;
	}
	return 0;
}

bool func_655()
{
	return Global_1896738.f_382;
}

bool func_656(var uParam0)
{
	return func_106(uParam0, 1);
}

void func_657(var uParam0)
{
	func_222(uParam0, 1);
}

void func_658(var uParam0)
{
	func_104(1);
	func_45(uParam0, 4);
}

bool func_659(var uParam0)
{
	int iVar0;

	uParam0->f_74 = Global_1913694.f_1584;
	uParam0->f_73 = Global_1913694.f_1585;
	if (func_106(uParam0, 2))
	{
		Global_1913694.f_1576 = 0;
		uParam0->f_44 = 0;
		iVar0 = GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1913694[0 /*9*/].f_1))
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1913694[0 /*9*/].f_1);
		}
		uParam0->f_24 = func_913(iVar0);
		uParam0->f_25 = func_914(iVar0);
		func_915(uParam0, uParam0->f_24, 1472825031);
		func_915(uParam0, joaat("FEE_MEAL_CAMP_STEW_BEST"), 1472825031);
		func_915(uParam0, joaat("FEE_MEAL_CAMP_STEW_HIGH"), 1472825031);
		func_915(uParam0, joaat("FEE_MEAL_CAMP_STEW_MED"), 1472825031);
		func_915(uParam0, joaat("FEE_MEAL_CAMP_STEW_LOW"), 1472825031);
		return true;
	}
	if (uParam0->f_43 == 0)
	{
		Global_1913694.f_1576 = 0;
		uParam0->f_44 = 0;
		func_916(uParam0, 600942249);
		uParam0->f_43++;
		return false;
	}
	else if (uParam0->f_43 == 1)
	{
		func_916(uParam0, -257768755);
		uParam0->f_43++;
		return false;
	}
	else
	{
		func_916(uParam0, -214678071);
		uParam0->f_43 = 0;
	}
	uParam0->f_44 = 0;
	return true;
}

bool func_660(var uParam0)
{
	int iVar0;
	char cVar1[16];

	uParam0->f_46 = 0;
	uParam0->f_47 = 0;
	if ((func_106(uParam0, 2) || func_106(uParam0, 65536)) && DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_28))
	{
		return true;
	}
	uParam0->f_28 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "CraftingDatastore");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_28, "filter", func_918(func_106(uParam0, 2), joaat("RECIPES"), func_917(uParam0->f_41)));
	if (func_106(uParam0, 2))
	{
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_28, "filterCount", 1);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_28, "filterIndex", 0);
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_28, "headerText", -1710561039);
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_28, "filterCount", 5 + 1);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_28, "filterIndex", uParam0->f_41);
	}
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_28, "tipText", "");
	uParam0->f_40 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_28, "recipes_lines");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_28, "variantVisible", false);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_28, "variantText", " ");
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_28, "variantCount", 0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_28, "variantIndex", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_28, "ShowRpgDescription", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_28, "ShowRpgPlayer", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_28, "ShowRpgHorse", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_28, "RPGDescription", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_28, "ShowIngredients", true);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&cVar1, "ingredient", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		func_919(&(uParam0->f_30[iVar0]), &cVar1, uParam0);
		StringCopy(&cVar1, "tip", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		uParam0->f_35[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_28, &cVar1);
		StringCopy(&cVar1, "Text", 16);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_35[iVar0], &cVar1, "");
		StringCopy(&cVar1, "Enabled", 16);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_35[iVar0], &cVar1, 0);
		iVar0++;
	}
	return true;
}

bool func_661(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	bVar2 = func_417();
	iVar0 = uParam0->f_44;
	while (iVar0 <= (Global_1913694.f_1576 - 1))
	{
		if (func_88(Global_1913694[iVar0 /*9*/].f_6, 0))
		{
			func_920(uParam0, 0, iVar0, bVar2, 1, 0);
			if (iVar1 >= 10)
			{
				uParam0->f_44 = iVar0 + 1;
				return false;
			}
			iVar1++;
		}
		iVar0++;
	}
	uParam0->f_44 = 0;
	if (uParam0->f_47 == 0)
	{
		func_222(uParam0, 128);
	}
	uParam0->f_45 = 0;
	return true;
}

void func_662(var uParam0)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_29))
	{
		uParam0->f_29 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_28, "recipes");
	}
	else
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_29);
	}
	uParam0->f_60 = 600942249;
	uParam0->f_59 = 0;
	uParam0->f_58 = 0;
}

bool func_663(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	bVar2 = func_417();
	iVar0 = uParam0->f_44;
	while (iVar0 <= (Global_1913694.f_1576 - 1))
	{
		if ((func_106(uParam0, 128) && Global_1913694[iVar0 /*9*/].f_2) || !func_106(uParam0, 128))
		{
			if (Global_1913694.f_1585 != 0)
			{
				uParam0->f_73 = Global_1913694.f_1585;
				bVar3 = func_153(Global_1913694[iVar0 /*9*/].f_6, Global_1913694.f_1585);
				if (func_106(uParam0, 16384) == bVar3)
				{
				}
				else
				{
					func_920(uParam0, 1, iVar0, bVar2, 0, bParam1);
					if (iVar1 >= 50)
					{
						uParam0->f_44 = iVar0 + 1;
						return false;
					}
					iVar1++;
				}
				iVar0++;
				uParam0->f_44 = 0;
				if (!func_106(uParam0, 16384) && Global_1913694.f_1585 != 0)
				{
					func_40(uParam0, 16384);
					return false;
				}
				uParam0->f_45 = 0;
				func_222(uParam0, 16384);
				return true;
			}
		}
	}
}

bool func_664(var uParam0, bool bParam1)
{
	int iVar0;

	func_40(uParam0, 256);
	if (bParam1 && UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("CRAFTING")))
	{
		if (UISTATEMACHINE::_UISTATEMACHINE_REQUEST_TRANSITION(joaat("CRAFTING"), 1014850361))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		iVar0 = UIAPPS::_LAUNCH_APP_BY_HASH(joaat("CRAFTING"));
		if (iVar0 == 0)
		{
			return true;
		}
	}
	return false;
}

bool func_665(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	bVar2 = func_417();
	iVar0 = uParam0->f_44;
	while (iVar0 <= (Global_1913694.f_1576 - 1))
	{
		func_921(uParam0, iVar0, bVar2, 0, 1, 0, 1);
		if (iVar1 >= 50)
		{
			uParam0->f_44 = iVar0 + 1;
			return false;
		}
		iVar1++;
		iVar0++;
	}
	func_222(uParam0, 512);
	uParam0->f_44 = 0;
	return true;
}

void func_666(bool bParam0)
{
	int iVar0;

	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_EQUIP_ITEM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
	iVar0 = func_922(Global_34);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1f);
	}
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_UP"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_DOWN"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_LS"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_STICK_DOWN"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_STICK_UP"), false);
	}
}

void func_667(var uParam0)
{
	int iVar0;

	func_101(uParam0);
	func_923(uParam0, 1);
	uParam0->f_1[2] = func_266("CAMP_REC_QUIT", joaat("INPUT_GAME_MENU_CANCEL"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	func_131(uParam0->f_1[2], 1, 1, 1);
	uParam0->f_1[1] = func_266("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	if (!func_106(uParam0, 2))
	{
		if (func_88(uParam0->f_59, 0))
		{
			uParam0->f_61 = uParam0->f_59;
			uParam0->f_62 = uParam0->f_60;
			func_924(uParam0, &(uParam0->f_58));
		}
		else
		{
			uParam0->f_61 = 0;
		}
		if (func_88(uParam0->f_59, 0))
		{
			if (func_245(uParam0->f_59))
			{
				func_130(uParam0->f_1[1], "CAMP_REC_COOK", 1);
			}
			else if (func_296(uParam0->f_59, -1636519629) == -701492487)
			{
				func_130(uParam0->f_1[1], "CAMP_REC_BREW", 1);
			}
			else
			{
				func_130(uParam0->f_1[1], "CAMP_REC_MAKE", 1);
			}
		}
		uParam0->f_1[3] = func_266(func_925(uParam0), joaat("INPUT_GAME_MENU_EXTRA_OPTION"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	else
	{
		uParam0->f_1[7] = func_266("CAMP_ADD_TASK", joaat("INPUT_GAME_MENU_RS"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	uParam0->f_1[5] = func_926("RECIPE", joaat("INPUT_GAME_MENU_LEFT"), joaat("INPUT_GAME_MENU_RIGHT"), 0);
	func_927(uParam0->f_1[5], joaat("INPUT_GAME_MENU_LEFT"));
	func_927(uParam0->f_1[5], joaat("INPUT_GAME_MENU_RIGHT"));
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_57))
	{
		iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_57, "iNumCostVariants");
	}
	if (iVar0 > 1 && func_88(uParam0->f_61, 0))
	{
		func_131(uParam0->f_1[5], 1, 1, 1);
	}
	else
	{
		func_131(uParam0->f_1[5], 0, 1, 1);
	}
	uParam0->f_1[6] = func_266("INFO", joaat("INPUT_GAME_MENU_OPTION"), 1, 0, 0, 2, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	if (!func_106(uParam0, 32768))
	{
		func_130(uParam0->f_1[6], "INFO", 1);
	}
	else
	{
		func_130(uParam0->f_1[6], "INGREDIENTS", 1);
	}
	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_29) == 0)
	{
		func_670(uParam0);
		func_131(uParam0->f_1[6], 0, 1, 1);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_28, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_NO_REC_TIP"));
	}
	func_671(uParam0, uParam0->f_61, uParam0->f_62);
}

bool func_668(var uParam0)
{
	int iVar0;

	if (!func_106(uParam0, 2))
	{
		return false;
	}
	iVar0 = GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (uParam0->f_25 != func_914(iVar0))
	{
		uParam0->f_25 = func_914(iVar0);
		func_45(uParam0, 15);
		return true;
	}
	if (uParam0->f_24 != func_913(iVar0))
	{
		func_45(uParam0, 4);
		return true;
	}
	return false;
}

bool func_669(var uParam0)
{
	if (Global_1913694.f_1584 != uParam0->f_74 || Global_1913694.f_1585 != uParam0->f_73)
	{
		uParam0->f_74 = Global_1913694.f_1584;
		uParam0->f_73 = Global_1913694.f_1585;
		func_40(uParam0, 65536);
		func_45(uParam0, 4);
		return true;
	}
	return false;
}

void func_670(var uParam0)
{
	int iVar0;

	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_40);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_30[iVar0], "visible", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_30[iVar0], "inUse", 0);
		iVar0++;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_28, "tipText", "");
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_28, "variantVisible", 0);
}

void func_671(var uParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	if (!func_88(iParam1, 0))
	{
		if (func_98(uParam0->f_1[1]))
		{
			func_131(uParam0->f_1[1], 0, 1, 1);
		}
		return;
	}
	bVar2 = func_417();
	bVar3 = true;
	bVar4 = false;
	if (!Global_1913694.f_1579 && func_769(iParam1, iParam2, 1))
	{
		bVar4 = true;
		bVar3 = false;
	}
	else if (!func_928(iParam1, iParam2, &uVar1, &uVar0, &iVar5, 0, bVar2, 0) || func_413(uParam0->f_23))
	{
		bVar3 = false;
	}
	else if (func_106(uParam0, 2) && !func_929(iParam1))
	{
		bVar3 = false;
	}
	if (bVar3)
	{
		if ((iParam1 != joaat("CONSUMABLE_COFFEE") && func_426(iParam1, 1, 0)) || (!func_106(uParam0, 4) && ((func_106(uParam0, 8192) || iParam2 == -214678071) || iParam2 == joaat("COST_CRAFTING_GRILL"))))
		{
			bVar3 = false;
		}
		else if (!func_419(2) && func_296(iParam1, -1636519629) == -701492487)
		{
			bVar3 = false;
		}
		else if (uParam0->f_26 == -1)
		{
			iVar6 = func_92(iParam1, 0, 0, 0);
			iVar7 = func_642(iParam1, 0);
			iVar8 = func_226(iParam1, iParam2, bVar2, 0);
			if (iVar7 == -1)
			{
				iVar7 = iVar8;
			}
			else
			{
				iVar7 = (iVar7 - iVar6);
			}
			uParam0->f_26 = func_643(iVar7, iVar8);
		}
	}
	if (func_98(uParam0->f_1[1]))
	{
		if (func_106(uParam0, 2))
		{
			func_130(uParam0->f_1[1], "DONATE_ING", 1);
		}
		else if (func_245(iParam1))
		{
			func_130(uParam0->f_1[1], "CAMP_REC_COOK", 1);
		}
		else if (func_296(iParam1, -1636519629) == -701492487)
		{
			func_130(uParam0->f_1[1], "CAMP_REC_BREW", 1);
		}
		else
		{
			func_130(uParam0->f_1[1], "CAMP_REC_MAKE", 1);
		}
		func_131(uParam0->f_1[1], bVar3, 1, 1);
	}
	func_930(iParam1, iParam2, uParam0, iVar5, bVar4);
	if (func_98(uParam0->f_1[6]))
	{
		func_131(uParam0->f_1[6], !bVar4, 1, 1);
	}
	func_931(uParam0);
}

bool func_672(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_98(iParam0))
	{
		return false;
	}
	iVar0 = func_239(iParam0);
	return HUD::_UIPROMPT_IS_JUST_RELEASED(Global_1951255[iVar0 /*23*/].f_3);
}

void func_673(char* sParam0, char* sParam1, int iParam2)
{
	int iVar0;

	iVar0 = AUDIO::GET_SOUND_ID();
	if (iVar0 != -1)
	{
		AUDIO::_0xCE5D0FFE83939AF1(iVar0, sParam0, sParam1, iParam2);
		Global_1957967[Global_1957967.f_25] = iVar0;
		Global_1957967.f_25 = (Global_1957967.f_25 + 1 % 24);
	}
}

void func_674(var uParam0)
{
	int iVar0;
	struct<2> Var1[15];
	int iVar32;
	int iVar33;
	int iVar34;
	char* sVar35;
	int iVar36;
	bool bVar37;
	struct<2> Var38;
	char* sVar41;

	if (func_88(uParam0->f_61, 0))
	{
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(7, uParam0->f_61))
		{
			return;
		}
		UILOG::_UILOG_ADD_ENTRY_HASH(7, uParam0->f_61, Global_35, uParam0->f_61, -2136842124 /* GXTEntry: "Cripps makes a special stew every 3 days. Collect the required ingredients and dr" +
    "op them off at your Camp." */, 0);
		func_477(uParam0->f_61, uParam0->f_62, &Var1, &iVar0, 1, 0);
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(7, uParam0->f_61, 0, "CAMP_RECIPE_LOG_ALL_OBJ", false, true, false);
		iVar33 = 0;
		while (iVar33 < iVar0)
		{
			if (iVar33 >= 4)
			{
			}
			else
			{
				iVar34 = Var1[iVar33 /*2*/];
				if (func_88(iVar34, 0))
				{
					iVar36 = func_92(iVar34, 0, 0, 0);
					sVar35 = MISC::_CREATE_VAR_STRING(130, "CAMP_RECIPE_LOG_OBJ", iVar36, Var1[iVar33 /*2*/].f_1, MISC::_CREATE_VAR_STRING(0, iVar34));
					bVar37 = func_23(iVar34, Var1[iVar33 /*2*/].f_1);
					if (bVar37)
					{
						iVar32++;
					}
					UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(7, uParam0->f_61, iVar34, sVar35, bVar37, true, true);
				}
				iVar33++;
			}
		}
		if (func_932(uParam0->f_61, &Var38, joaat("INVENTORY"), 0, 0, 0))
		{
			UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(7, uParam0->f_61, Var38, Var38.f_1);
			UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(7, uParam0->f_61, Var38, Var38.f_1);
		}
		Global_1137047.f_339.f_16 = uParam0->f_61;
		Global_1137047.f_339.f_17 = uParam0->f_62;
		sVar41 = MISC::_CREATE_VAR_STRING(2, "CAMP_RECIPE_LOG_MISSION_DTL", iVar32, iVar0);
		UILOG::_0x763637F9B838B0A7(7, uParam0->f_61, sVar41);
		AUDIO::PLAY_SOUND_FRONTEND("add_to_log", "SSCRFT_Sounds", true, 0);
	}
	func_931(uParam0);
}

void func_675(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_139(uParam0->f_1[1], 0))
	{
		return;
	}
	if (func_106(uParam0, 2))
	{
		if (func_88(uParam0->f_61, 0))
		{
			func_689(1);
			func_29(&(uParam0->f_70));
			func_45(uParam0, 16);
		}
		return;
	}
	func_102(uParam0, 1);
	func_121(&(uParam0->f_1[1]), 1, 1);
	func_121(&(uParam0->f_1[5]), 1, 1);
	func_121(&(uParam0->f_1[6]), 1, 1);
	func_121(&(uParam0->f_1[3]), 1, 1);
	func_121(&(uParam0->f_1[7]), 1, 1);
	func_40(uParam0, 64);
	if (!func_106(uParam0, 8192) && !func_245(uParam0->f_61))
	{
		iVar0 = func_296(uParam0->f_61, -1636519629);
		iVar1 = func_684(uParam0, iVar0);
		if (iVar1 != 0)
		{
			func_222(uParam0, 64);
			ANIMSCENE::RESET_ANIM_SCENE(iVar1, "pl_craft");
			ANIMSCENE::LOAD_ANIM_SCENE(iVar1);
			uParam0->f_69 = 0;
			if (iVar0 != -1610298873)
			{
				if (iVar0 == -842117252)
				{
					if (uParam0->f_61 == joaat("AMMO_POISONBOTTLE"))
					{
						uParam0->f_69 = joaat("MP006_S_CFT_POISONBOTTLE01");
					}
					else
					{
						uParam0->f_69 = joaat("S_CFT_MOLOTOV01");
					}
				}
				else if (func_153(uParam0->f_61, -1588156645))
				{
					uParam0->f_69 = func_641(func_197(uParam0->f_61, 0));
				}
				else if (func_153(uParam0->f_61, 457423347))
				{
					uParam0->f_69 = joaat("S_CFT_ARROW_DYNAMITE");
				}
				else if (func_153(uParam0->f_61, -1846429632))
				{
					uParam0->f_69 = joaat("S_CFT_ARROW_FIRE");
				}
				else if (func_153(uParam0->f_61, -1067199465))
				{
					uParam0->f_69 = joaat("S_CFT_ARROW_SMALLGAME");
				}
				else
				{
					uParam0->f_69 = func_641(uParam0->f_61);
				}
			}
			if (uParam0->f_69 != 0)
			{
				STREAMING::REQUEST_MODEL(uParam0->f_69, false);
			}
		}
		func_130(uParam0->f_1[2], "CAMP_REC_BACK", 1);
		func_127(uParam0->f_1[2], -1067771379, 0, 1);
		func_131(uParam0->f_1[2], 0, 1, 1);
		func_267(uParam0->f_1[2], 0, 1);
		uParam0->f_1[4] = func_266("CAMP_REC_BACK", joaat("INPUT_GAME_MENU_CANCEL"), 1, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("MEDIUM_TIMED_EVENT"), 0);
		func_269(&(uParam0->f_1[4]), "INPUT_PCRAFT_EXIT");
		func_127(uParam0->f_1[4], -1067771379, 0, 1);
		func_131(uParam0->f_1[4], 0, 1, 1);
		func_268(uParam0->f_1[4], 19, 1, 1);
		func_268(uParam0->f_1[4], 20, 1, 1);
		func_268(uParam0->f_1[4], 13, 1, 1);
		func_268(uParam0->f_1[2], 13, 1, 1);
		if (func_98(uParam0->f_1[2]))
		{
			func_127(uParam0->f_1[2], -1067771379, 0, 1);
		}
		uParam0->f_27 = 0;
		func_45(uParam0, 12);
	}
	else
	{
		func_45(uParam0, 11);
	}
}

bool func_676(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_98(iParam0))
	{
		return false;
	}
	iVar0 = func_239(iParam0);
	return HUD::_UIPROMPT_HAS_STANDARD_MODE_COMPLETED(Global_1951255[iVar0 /*23*/].f_3, iParam1);
}

void func_677(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<10> Var5;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	struct<37> Var19;
	int iVar66;
	int iVar67;
	int iVar68;

	ATTRIBUTE::_0xD962F8579D702DB5();
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_57))
	{
		iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_57, "iCurCostVariant");
		iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_57, "iNumCostVariants");
		bVar2 = false;
		if (uParam0->f_62 == -214678071 || uParam0->f_62 == joaat("COST_CRAFTING_GRILL"))
		{
			if (bParam1)
			{
				iVar0++;
			}
			else
			{
				iVar0 = (iVar0 - 1);
			}
			if (iVar0 < 0)
			{
				iVar0 = (iVar1 - 1);
			}
			else if (iVar0 >= iVar1)
			{
				iVar0 = 0;
			}
			Var5 = -1;
			Var5.f_1 = -1;
			Var5.f_2 = -1;
			Var5.f_3 = -1;
			Var5.f_4 = -1;
			Var5.f_5 = -1;
			Var5.f_6 = -1;
			Var5.f_7 = -1;
			Var5.f_8 = -1;
			if (iVar0 == 0)
			{
				Var5 = { func_619(-1591664384, -1591664384, 0, 0, -214678071, 0, -1, func_296(uParam0->f_61, 1697966752), 0) };
				if (func_620(Var5, &iVar3, &iVar4, 0))
				{
					if (iVar4 > 0)
					{
						uParam0->f_62 = -214678071;
						uParam0->f_61 = func_731(0, iVar3);
						bVar2 = true;
					}
					func_622(iVar3);
				}
			}
			else
			{
				Var5 = { func_619(-1591664384, -1591664384, 0, 0, joaat("COST_CRAFTING_GRILL"), 0, -1, func_296(uParam0->f_61, 1697966752), 0) };
				if (func_620(Var5, &iVar3, &iVar4, 0))
				{
					if (iVar4 > 0)
					{
						if (iVar0 == 1)
						{
							iVar15 = 2127114599;
						}
						else if (iVar0 == 2)
						{
							iVar15 = -1864584831;
						}
						else if (iVar0 == 3)
						{
							iVar15 = 1967571132;
						}
						iVar16 = 0;
						while (iVar16 < iVar4)
						{
							iVar17 = func_731(iVar16, iVar3);
							if (func_153(iVar17, iVar15))
							{
								uParam0->f_62 = joaat("COST_CRAFTING_GRILL");
								uParam0->f_61 = iVar17;
								bVar2 = true;
							}
							else
							{
								iVar16++;
							}
						}
					}
					func_622(iVar3);
				}
			}
		}
		else
		{
			iVar18 = ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(uParam0->f_61);
			Var19.f_4 = 15;
			Var19.f_36 = 10;
			while ((((Var19.f_2 != joaat("COST_TYPE_CRAFT") || Var19 == -489628648) || Var19 == -2141192156) || (!Global_1913694.f_1579 && func_769(uParam0->f_61, Var19, 1))) && iVar66 < iVar18)
			{
				iVar66++;
				if (bParam1)
				{
					iVar0++;
				}
				else
				{
					iVar0 = (iVar0 - 1);
				}
				if (iVar0 < 0)
				{
					iVar0 = (iVar18 - 1);
				}
				else if (iVar0 >= iVar18)
				{
					iVar0 = 0;
				}
				if (ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COST(uParam0->f_61, iVar0, &Var19))
				{
				}
			}
			uParam0->f_62 = Var19;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_57, "eCost", uParam0->f_62);
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_57, "eOutputItem", uParam0->f_61);
		iVar67 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_57, "iIndex");
		if (iVar67 >= 0 && iVar67 < Global_1913694)
		{
			iVar68 = Global_1913694[iVar67 /*9*/].f_8;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_57, "iCurCostVariant", iVar0);
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_28, "variantIndex", (iVar0 + 1 - iVar68));
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_28, "variantText", MISC::_CREATE_VAR_STRING(0, uParam0->f_61));
		uParam0->f_26 = -1;
		uParam0->f_22 = 0;
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_28, "ShowRpgDescription"))
		{
			ATTRIBUTE::_0x7E2C766ADB2C5F1A(uParam0->f_61, 1);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_28, "RPGDescription", func_933(uParam0->f_61));
		func_921(uParam0, -1, func_417(), uParam0->f_57, 0, bVar2, 0);
		func_671(uParam0, uParam0->f_61, uParam0->f_62);
	}
}

void func_678(var uParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		if (func_106(uParam0, 32768))
		{
			func_222(uParam0, 32768);
		}
		else
		{
			func_40(uParam0, 32768);
		}
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_28, "ShowRpgDescription", func_106(uParam0, 32768));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_28, "ShowIngredients", !func_106(uParam0, 32768));
	if (!func_106(uParam0, 32768))
	{
		if (func_98(uParam0->f_1[6]))
		{
			func_130(uParam0->f_1[6], "INFO", 1);
		}
		ATTRIBUTE::_0xD962F8579D702DB5();
		func_934(uParam0);
	}
	else
	{
		if (func_98(uParam0->f_1[6]))
		{
			func_130(uParam0->f_1[6], "INGREDIENTS", 1);
		}
		func_935(uParam0);
	}
	if (uParam0->f_62 == -214678071)
	{
		if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_57, "enabled") == 1)
		{
			if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_57, "iNumCostVariants") <= 1 && func_106(uParam0, 32768))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_28, "tipText", MISC::_CREATE_VAR_STRING(2, "CAMP_MEAT_POOR"));
			}
			else
			{
				iVar0 = func_226(uParam0->f_61, uParam0->f_62, func_417(), 0);
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_28, "tipText", MISC::_CREATE_VAR_STRING(2, "COOK_ING_HAVE", iVar0));
			}
		}
	}
}

void func_679(var uParam0)
{
	if (func_106(uParam0, 2))
	{
		return;
	}
	ATTRIBUTE::_0xD962F8579D702DB5();
	func_936(uParam0);
	func_670(uParam0);
	func_934(uParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_28, "ShowRpgDescription", 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_28, "ShowIngredients", 0);
	uParam0->f_61 = 0;
	uParam0->f_62 = 0;
	func_671(uParam0, 0, 0);
	func_45(uParam0, 9);
}

void func_680(var uParam0, int iParam1)
{
	func_670(uParam0);
	func_934(uParam0);
	func_924(uParam0, &(iParam1->f_3));
}

void func_681(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_296(uParam0->f_61, -1636519629);
	if (iVar0 == 414472632)
	{
		uParam0->f_42 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_63))
		{
			iVar1 = func_937(uParam0->f_61);
			if (iVar1 != 0)
			{
				uParam0->f_63 = OBJECT::CREATE_OBJECT(iVar1, Global_35, true, (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()), false, false, false);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_63, false, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_63, Global_34, PED::GET_PED_BONE_INDEX(Global_34, 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
			}
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_48, "player", Global_34, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_48);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_48, "pl_craft", true);
	}
	else if (iVar0 == -1136843638)
	{
		uParam0->f_42 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_50, "arrow", uParam0->f_65, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_50, "player", Global_34, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_50);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_50, "pl_craft", true);
	}
	else if (iVar0 == 786205940)
	{
		uParam0->f_42 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_51, "player", Global_34, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_51);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_51, "pl_craft", true);
	}
	else if (iVar0 == -715814988)
	{
		uParam0->f_42 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_49, "player", Global_34, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_63))
		{
			iVar2 = func_937(uParam0->f_61);
			if (iVar2 != 0)
			{
				uParam0->f_63 = OBJECT::CREATE_OBJECT(iVar2, Global_35, true, (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()), false, false, false);
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_63, false);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_63, false, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_63, Global_34, PED::GET_PED_BONE_INDEX(Global_34, 37709), func_938(uParam0->f_61), 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			}
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_49, "bullet", uParam0->f_63, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_49);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_49, "pl_craft", true);
	}
	else if (iVar0 == -732326901)
	{
		uParam0->f_42 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_65))
		{
			uParam0->f_65 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_THROWN_THROWING_KNIVES"), 1, Global_35, true, 1f);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_65, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_65, false, false);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_52, "player", Global_34, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_52);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_52, "pl_craft", true);
	}
	else if (iVar0 == -1141771998)
	{
		uParam0->f_42 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_65))
		{
			uParam0->f_65 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_THROWN_TOMAHAWK"), 1, Global_35, true, 1f);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_65, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_65, false, false);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_53, "player", Global_34, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_53);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_53, "pl_craft", true);
	}
	else if (iVar0 == 364689687)
	{
		uParam0->f_42 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_65))
		{
			uParam0->f_65 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_THROWN_THROWING_KNIVES"), 1, Global_35, true, 1f);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_65, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_65, false, false);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_67))
		{
			uParam0->f_67 = OBJECT::CREATE_OBJECT(joaat("P_CS_RAG01X"), Global_35, true, (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()), false, false, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_67, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_67, false, false);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_54, "RAG", uParam0->f_67, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_54, "player", Global_34, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_54);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_54, "pl_craft", true);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_53, "pl_craft", true);
	}
	else if (iVar0 == -842117252)
	{
		uParam0->f_42 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_55, "player", Global_34, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_55);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_55, "pl_craft", true);
	}
	else if (iVar0 == -1610298873)
	{
		uParam0->f_42 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_56, "player", Global_34, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_56);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_56, "pl_craft", true);
	}
	else
	{
		uParam0->f_42 = BUILTIN::ROUND((ENTITY::GET_ANIM_DURATION(func_939(uParam0->f_61), func_940(uParam0->f_61)) * 1000f));
		func_29(&(uParam0->f_70));
		TASK::TASK_PLAY_ANIM(Global_34, func_939(uParam0->f_61), func_940(uParam0->f_61), 8f, -8f, -1, 67108880, 0f, false, 4096, false, "Satchel_Only_filter", false);
	}
}

void func_682(var uParam0, bool bParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < uParam0->f_1)
	{
		if (func_98(uParam0->f_1[iVar0]))
		{
			iVar1 = 0;
			while (iVar1 < *uParam2)
			{
				if (func_98((*uParam2)[iVar1]))
				{
					if (uParam0->f_1[iVar0] == (*uParam2)[iVar1])
					{
					}
				}
				iVar1++;
			}
			func_131(uParam0->f_1[iVar0], bParam1, 1, 1);
		}
		iVar0++;
	}
}

bool func_683(int iParam0)
{
	if ((((((((iParam0 == -715814988 || iParam0 == -1136843638) || iParam0 == -732326901) || iParam0 == 786205940) || iParam0 == -1141771998) || iParam0 == 364689687) || iParam0 == 414472632) || iParam0 == -842117252) || iParam0 == -1610298873)
	{
		return true;
	}
	return false;
}

int func_684(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case -715814988:
			return uParam0->f_49;
		case -732326901:
			return uParam0->f_52;
		case -1136843638:
			return uParam0->f_50;
		case 786205940:
			return uParam0->f_51;
		case -1141771998:
			return uParam0->f_53;
		case 364689687:
			return uParam0->f_54;
		case 414472632:
			return uParam0->f_48;
		case -842117252:
			return uParam0->f_55;
		case -1610298873:
			return uParam0->f_56;
		default:
			break;
	}
	return 0;
}

bool func_685(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	var uVar1;
	var uVar2;

	return func_928(iParam0, iParam1, &uVar0, &uVar1, &uVar2, bParam2, bParam3, bParam4);
}

void func_686(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	uParam0->f_44 = 0;
	func_96(&(uParam0->f_65), &(uParam0->f_66));
	func_96(&(uParam0->f_63), &(uParam0->f_64));
	iVar0 = func_684(uParam0, iParam1);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(iVar0, "bStopLoop", true, false);
	func_131(uParam0->f_1[2], 1, 1, 1);
	func_131(uParam0->f_1[4], 1, 1, 1);
	func_267(uParam0->f_1[2], 0, 1);
	func_267(uParam0->f_1[4], 1, 1);
	func_425(uParam0->f_1[1], 1);
	func_121(&(uParam0->f_1[1]), 1, 1);
	uParam0->f_1[1] = func_266("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, uParam0->f_42, uParam0->f_42 + 1, 1, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	func_268(uParam0->f_1[1], 11, 1, 1);
	func_268(uParam0->f_1[1], 19, 1, 1);
	func_127(uParam0->f_1[1], -1067771379, 0, 1);
	func_131(uParam0->f_1[1], bParam2, 1, 1);
	func_45(uParam0, 13);
}

int func_687()
{
	int iVar0;

	iVar0 = GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return Global_1134390[iVar0 /*83*/].f_38.f_28.f_2;
	}
	return 255;
}

bool func_688(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1132288.f_2050 == 0 || (MISC::_GET_SYSTEM_TIME() - Global_1132288.f_2050) >= 1000)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (Global_1132288.f_2050 == 0)
	{
		Global_1132288.f_2050 = MISC::_GET_SYSTEM_TIME();
	}
	else if ((MISC::_GET_SYSTEM_TIME() - Global_1132288.f_2050) >= 1000)
	{
		Global_1132288.f_2050 = MISC::_GET_SYSTEM_TIME();
	}
	else
	{
		return false;
	}
	return true;
}

void func_689(bool bParam0)
{
	struct<14> Var0;
	int iVar14;

	if (bParam0)
	{
		iVar14 = 14;
	}
	else
	{
		iVar14 = 15;
	}
	func_942(iVar14, Var0, func_941(GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))));
}

void func_690(var uParam0)
{
	int iVar0;

	iVar0 = GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (iVar0 == PLAYER::PLAYER_ID())
	{
		func_943(iVar0, 1);
		func_944(iVar0, uParam0);
		func_946(func_945(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())), uParam0);
	}
	else
	{
		func_947(uParam0);
	}
}

void func_691(var uParam0)
{
	var uVar0;
	vector3 vVar4;
	int iVar7;
	bool bVar8;
	int iVar9;
	struct<2> Var10[15];

	if (TELEMETRY::_0xF184B3ECE36219CF(uParam0->f_23, &uVar0))
	{
		vVar4 = { func_948(Global_1296859) };
		iVar7 = 0;
		bVar8 = func_153(uParam0->f_61, -2011345500);
		if (!bVar8)
		{
			if (func_477(uParam0->f_61, uParam0->f_62, &Var10, &iVar9, 1, 0) && iVar9 > 0)
			{
				iVar7 = Var10[0 /*2*/];
			}
		}
		TELEMETRY::_TELEMETRY_CAMP_DONATE(&uVar0, iVar7, vVar4.z, 0, 1, 1084182731, joaat("STEW_POT"), uParam0->f_61, bVar8);
	}
}

void func_692(int iParam0)
{
	if (Global_1940144.f_105.f_2 >= iParam0)
	{
		return;
	}
	Global_1940144.f_105.f_2 = iParam0;
}

int func_693(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1898574875;
		case 2:
			return 1506296948;
		case 1:
			return 308865989;
		default:
			break;
	}
	return 1898574875;
}

int func_694(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1135800718;
		case 2:
			return -402975377;
		case 1:
			return -2074936164;
		default:
			break;
	}
	return -1135800718;
}

int func_695(int iParam0)
{
	int iVar0;

	if (!func_88(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_165(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

bool func_696(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6, int iParam7)
{
	return func_949(&uParam0, iParam4, uParam5, bParam6, iParam7);
}

bool func_697(int iParam0)
{
	if (!func_88(iParam0, 0))
	{
	}
	if (func_153(iParam0, 162787671))
	{
		return true;
	}
	return false;
}

bool func_698(int iParam0, int iParam1)
{
	struct<4> Var0;

	if (!func_950(856287005, iParam0))
	{
		return false;
	}
	Var0 = { func_435() };
	*iParam1 = func_601(Var0, iParam0, 0, -1);
	if (!func_88(*iParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_699(int iParam0)
{
	if (!func_88(iParam0, 0))
	{
	}
	return ((iParam0 == 1362183957 || iParam0 == 563996796) || iParam0 == joaat("HORSE_EQUIPMENT_MOONSHINERSADDLE_001_IMPROVED_NEW_SADDLE_000"));
}

bool func_700(int iParam0)
{
	if (!func_88(iParam0, 0))
	{
	}
	return (iParam0 == 2031387366 || iParam0 == joaat("HORSE_EQUIPMENT_NATURALISTSADDLE_001_IMPROVED_NEW_SADDLE_000"));
}

bool func_701(int iParam0)
{
	if ((((iParam0 == 263080063 || iParam0 == -34331381) || iParam0 == -993578318) || iParam0 == 579268144) || iParam0 == 1104489688)
	{
		return true;
	}
	return false;
}

bool func_702(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	struct<4> Var16;
	int iVar30;

	if (iParam0 == 0)
	{
		return false;
	}
	Var2 = { func_388(0, iParam0, -1591664384, -1591664384, 0, 0, 0) };
	func_390(&Var2, func_435());
	if (func_391(&Var2, &iVar0, &iVar1, 0))
	{
		Var16.f_9 = -1591664384;
		iVar30 = 0;
		while (iVar30 < iVar1)
		{
			if (func_207(&Var16, iVar30, iVar0, iVar1))
			{
				if (func_88(Var16.f_4, 0) && !Var16.f_10)
				{
					if (bParam2 && func_701(Var16.f_4))
					{
					}
					else
					{
						*uParam1 = { Var16 };
						func_209(iVar0);
						return true;
					}
				}
			}
			iVar30++;
		}
		func_209(iVar0);
	}
	return false;
}

bool func_703(int iParam0)
{
	var uVar0;

	if (func_107() != -1)
	{
		return false;
	}
	if (func_371(iParam0, 1048576))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_227(iParam0, &uVar0, 1, 0, 0, -1, 0);
	}
	return func_23(iParam0, 1);
}

void func_704(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (func_89(iParam0) != joaat("WEAPON"))
	{
		return;
	}
	iVar0 = func_198(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !func_433(iVar0))
	{
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, iVar0, 0, false) && func_92(iParam0, 0, 0, 0) == 0))
		{
			if (func_107() == -1)
			{
				func_199(iVar0);
			}
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_190(iParam0, iParam1, 0, 0, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_705(int iParam0, int iParam1)
{
	if (func_153(iParam0, 58855631))
	{
		func_380(iParam0, -915411861, iParam1, 1);
	}
}

int func_706(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_451(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_71(bParam1), iParam0, iParam3);
}

bool func_707()
{
	if (((((!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_34, -1) && !PED::IS_PED_USING_ANY_SCENARIO(Global_34)) && !func_951(Global_34, 1369124074)) && !func_951(Global_34, 713668775)) && !TASK::_0xEC7E480FF8BD0BED(Global_34)) && !PED::IS_PED_IN_ANY_VEHICLE(Global_34, false))
	{
		return true;
	}
	return false;
}

bool func_708(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_709(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_39.f_3643[iVar1], iVar2);
}

void func_710(int iParam0)
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

void func_711(int iParam0)
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
			func_952(1);
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
			func_953(1);
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_953(2);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_953(3);
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
			func_954(1);
			break;
		case 33:
			func_955(1);
			break;
		case 34:
			func_956(1);
			break;
		case 35:
			break;
		case 36:
			func_957(0);
			break;
		case 37:
			func_958(0);
			break;
		case 38:
			func_959(0);
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
			if (func_960() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_961("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_140(677, 0);
			break;
		case 3:
			if (func_960() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_961("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_140(678, 0);
			break;
		case 4:
			if (func_960() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_961("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_140(679, 0);
			break;
		case 5:
			if (func_960() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_961("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_140(680, 0);
			break;
		case 23:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			break;
		case 47:
			if (func_107() == -1)
			{
				if (!func_23(1013902307, 1))
				{
					func_449(1013902307, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_107() == -1)
			{
				if (!func_23(1013902307, 1))
				{
					func_449(1013902307, 1, 752097756);
				}
				if (!func_23(142640135, 1))
				{
					func_449(142640135, 1, 752097756);
				}
			}
			break;
		case 48:
			if (func_107() == -1)
			{
				if (!func_23(786809402, 1))
				{
					func_449(786809402, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_107() == -1)
			{
				if (!func_23(786809402, 1))
				{
					func_449(786809402, 1, 752097756);
				}
				if (!func_23(-518019409, 1))
				{
					func_449(-518019409, 1, 752097756);
				}
			}
			break;
		case 22:
			PLAYER::_0x5B9813ECF7633FE8(0);
			break;
		case 24:
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
		case 43:
			break;
		case 44:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), true);
			Global_1940258.f_41 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 45:
			break;
		case 46:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 51:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), true);
			break;
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), true);
			break;
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), true);
			break;
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("COMPENDIUM"), true);
			break;
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), true);
			break;
	}
}

void func_712(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_34, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar2 = func_643(WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_34, iParam0, iVar2);
		if (WEAPON::GET_MAX_AMMO(Global_34, &iVar1, iParam0) && WEAPON::GET_AMMO_IN_PED_WEAPON(Global_34, iParam0) > iVar1)
		{
			WEAPON::SET_PED_AMMO(Global_34, iParam0, iVar1);
		}
	}
}

int func_713(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	if (!func_88(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_214(iParam0, joaat("DEFAULT"));
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_193(iParam0, 0, 0) };
	if (func_227(iParam0, &Var1, iParam1, 0, 0, -1, 0))
	{
		return 0;
	}
	if (!func_76(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_71(0), &uVar6, &Var1, iParam0, Var1.f_4, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

void func_714(int iParam0)
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
	iVar2 = func_962();
	func_963(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_34, sVar1, iVar2);
}

int func_715(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_261(iParam0))
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

bool func_716()
{
	return false;
}

bool func_717(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

int func_718(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_719(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	if (WEAPON::_0x705BE297EEBDB95D(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			if (!func_444(49))
			{
				if (!func_444(47))
				{
					return 149;
				}
				return 151;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (!func_444(50))
			{
				if (!func_444(48))
				{
					return 150;
				}
				return 152;
			}
		}
	}
	return 153;
}

int func_720(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	int iVar25;

	if (func_107() == 0)
	{
		return 0;
	}
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_23(joaat("PROVISION_TRINKET_ELK_ANTLER"), 1))
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
			if (func_88(iVar25, 0) && func_153(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_721(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (bParam3)
		{
			func_964(iParam0, 1000);
			return;
		}
		sParam1 = "FEED_MONEY_EARN";
	}
	func_386(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_722(int iParam0, bool bParam1, float fParam2, int iParam3)
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
		if (func_965() || func_966())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_386(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_TOTAL_TAKE"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
		}
		func_386(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, 752097756);
		func_111(func_387(joaat("CAREER_CASH")), iVar1);
	}
}

char* func_723(int iParam0)
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

int func_724(int iParam0)
{
	var uVar0;

	if (!func_932(iParam0, &uVar0, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		return joaat("_PLACEHOLDER");
	}
	return uVar0;
}

bool func_725(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (iParam0 != 0)
	{
		iVar3 = func_165(iParam0);
		if (iVar3 != 0)
		{
			iVar4 = func_967(iParam0);
			iVar0 = 0;
			while (iVar0 < iVar4)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar3, iVar0, &iVar1))
				{
					iVar2 = iVar1;
					if (iVar2 == iParam1)
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

bool func_726(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_BUY_AWARD_KEY_VALID(iParam0);
}

void func_727(int iParam0, int iParam1, var uParam2, int iParam3)
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
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_165((*uParam2)[iVar0 /*2*/]) != -829303394)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_728(int iParam0)
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

int func_729()
{
	if (func_107() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

void func_730(int iParam0, int iParam1, var uParam2, int iParam3)
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
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_165((*uParam2)[iVar0 /*2*/]) != -829303394)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

int func_731(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 0)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= ITEMDATABASE::_0xD389A2549C4EFB30(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	if (!ITEMDATABASE::_0x8750F69A720C2E41(iParam1, iParam0, &iVar0))
	{
		return 0;
	}
	return iVar0;
}

int func_732(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("PROVISION_FISH_BLUEGILL_POOR"):
		case joaat("PROVISION_FISH_BLUEGILL"):
			iVar0 = joaat("A_C_FISHBLUEGIL_01_SM");
			break;
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH"):
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_POOR"):
			iVar0 = joaat("A_C_FISHBULLHEADCAT_01_SM");
			break;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_POOR"):
		case joaat("PROVISION_FISH_CHAIN_PICKEREL"):
			iVar0 = joaat("A_C_FISHCHAINPICKEREL_01_SM");
			break;
		case joaat("PROVISION_FISH_CHANNEL_CATFISH_POOR"):
		case joaat("PROVISION_FISH_CHANNEL_CATFISH"):
			iVar0 = joaat("A_C_FISHCHANNELCATFISH_01_LG");
			break;
		case joaat("PROVISION_FISH_LAKE_STURGEON"):
		case joaat("PROVISION_FISH_LAKE_STURGEON_POOR"):
			iVar0 = joaat("A_C_FISHLAKESTURGEON_01_LG");
			break;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS"):
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_POOR"):
			iVar0 = joaat("A_C_FISHLARGEMOUTHBASS_01_MS");
			break;
		case joaat("PROVISION_FISH_LONGNOSE_GAR_POOR"):
		case joaat("PROVISION_FISH_LONGNOSE_GAR"):
			iVar0 = joaat("A_C_FISHLONGNOSEGAR_01_LG");
			break;
		case joaat("PROVISION_FISH_MUSKIE"):
		case joaat("PROVISION_FISH_MUSKIE_POOR"):
			iVar0 = joaat("A_C_FISHMUSKIE_01_LG");
			break;
		case joaat("PROVISION_FISH_NORTHERN_PIKE"):
		case joaat("PROVISION_FISH_NORTHERN_PIKE_POOR"):
			iVar0 = joaat("A_C_FISHNORTHERNPIKE_01_LG");
			break;
		case joaat("PROVISION_FISH_PERCH_POOR"):
		case joaat("PROVISION_FISH_PERCH"):
			iVar0 = joaat("A_C_FISHPERCH_01_SM");
			break;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_POOR"):
		case joaat("PROVISION_FISH_REDFIN_PICKEREL"):
			iVar0 = joaat("A_C_FISHREDFINPICKEREL_01_SM");
			break;
		case joaat("PROVISION_FISH_ROCK_BASS_POOR"):
		case joaat("PROVISION_FISH_ROCK_BASS"):
			iVar0 = joaat("A_C_FISHROCKBASS_01_SM");
			break;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_POOR"):
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS"):
			iVar0 = joaat("A_C_FISHSMALLMOUTHBASS_01_MS");
			break;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_POOR"):
		case joaat("PROVISION_FISH_SOCKEYE_SALMON"):
			iVar0 = joaat("A_C_FISHSALMONSOCKEYE_01_MS");
			break;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_POOR"):
		case joaat("PROVISION_FISH_STEELHEAD_TROUT"):
			iVar0 = joaat("A_C_FISHRAINBOWTROUT_01_MS");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			iVar0 = joaat("A_C_BAT_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_HIGH_QUALITY"):
			iVar0 = joaat("A_C_BLUEJAY_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_POOR"):
			iVar0 = joaat("A_C_FROGBULL_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_POOR"):
			iVar0 = joaat("A_C_CARDINAL_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			iVar0 = joaat("A_C_CEDARWAXWING_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_HIGH_QUALITY"):
			iVar0 = joaat("A_C_CHIPMUNK_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_POOR"):
			iVar0 = joaat("A_C_CRAB_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			iVar0 = joaat("A_C_CROW_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_HIGH_QUALITY"):
			iVar0 = joaat("A_C_ORIOLE_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_HIGH_QUALITY"):
			iVar0 = joaat("A_C_CAROLINAPARAKEET_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_PERFECT"):
			iVar0 = joaat("A_C_PIGEON");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_POOR"):
			iVar0 = joaat("A_C_QUAIL_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			iVar0 = joaat("A_C_RAT_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_HIGH_QUALITY"):
			iVar0 = joaat("A_C_ROBIN_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_POOR"):
			iVar0 = joaat("A_C_SONGBIRD_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			iVar0 = joaat("A_C_SPARROW_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_HIGH_QUALITY"):
			iVar0 = joaat("A_C_SQUIRREL_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			iVar0 = joaat("A_C_TOAD_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_POOR"):
			iVar0 = joaat("A_C_WOODPECKER_01");
			break;
	}
	return iVar0;
}

int func_733(int iParam0)
{
	if (func_153(iParam0, 1064293907))
	{
		return 2;
	}
	else if (func_153(iParam0, -1218707194))
	{
		return 1;
	}
	else if (func_153(iParam0, 1888974372))
	{
		return 0;
	}
	return 1;
}

int func_734(int iParam0, int iParam1, int iParam2)
{
	var uVar0[15];
	int iVar16;
	int iVar17;

	PED::_0xB29C553BA582D09E(&uVar0, iParam0, iParam1, 1);
	iVar16 = 0;
	iVar17 = 0;
	while (iVar17 < 15)
	{
		if (func_88(uVar0[iVar17], 0) && iParam2 == uVar0[iVar17])
		{
			iVar16++;
		}
		iVar17++;
	}
	return iVar16;
}

bool func_735(int iParam0)
{
	iParam0 = func_340(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1903136[iParam0 /*43*/]))
	{
		return true;
	}
	return false;
}

bool func_736(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (!ENTITY::_0x9A100F1CF4546629(iVar0))
	{
		return false;
	}
	if (FLOCK::_0xF8B48A361DC388AE(iVar0) == 2)
	{
		return false;
	}
	if (ENTITY::_0x8DE41E9902E85756(iParam0))
	{
		return false;
	}
	if (FIRE::_0xCDC25355C0D65963(iParam0))
	{
		return false;
	}
	return true;
}

bool func_737(int iParam0)
{
	return func_153(iParam0, 1279601681);
}

bool func_738(int iParam0, int iParam1)
{
	if (!func_88(iParam0, 0))
	{
		return false;
	}
	if (func_497(iParam0))
	{
		return func_746(func_498(iParam0, 0), iParam1, 0);
	}
	return ITEMDATABASE::_0xDEE7B3C76ED664BE(iParam0, iParam1) > 0;
}

int func_739(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_472(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_740(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, uParam1);
	if (iParam0 == joaat("USE"))
	{
		if ((func_968(uParam1->f_8, iParam0, iVar0, 2048) || func_968(uParam1->f_8, iParam0, iVar0, 32768)) || func_968(uParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_968(uParam1->f_8, iParam0, iVar0, 4) || func_968(uParam1->f_8, iParam0, iVar0, 256)) || func_968(uParam1->f_8, iParam0, iVar0, 65536)) || func_968(uParam1->f_8, iParam0, iVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SPEND"))
	{
		if (((func_968(uParam1->f_8, iParam0, iVar0, 1) || func_968(uParam1->f_8, iParam0, iVar0, 8)) || func_968(uParam1->f_8, iParam0, iVar0, 65536)) || func_968(uParam1->f_8, iParam0, iVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SELL"))
	{
		if (((func_968(uParam1->f_8, iParam0, iVar0, 1) || func_968(uParam1->f_8, iParam0, iVar0, 16)) || func_968(uParam1->f_8, iParam0, iVar0, 2)) || func_968(uParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_968(uParam1->f_8, iParam0, iVar0, 8) || func_968(uParam1->f_8, iParam0, iVar0, 4096)) || func_968(uParam1->f_8, iParam0, iVar0, 256)) || func_968(uParam1->f_8, iParam0, iVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_741(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_742(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_969(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_969(iParam1, 2, 0, 0);
	return -1;
}

int func_743(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_969(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

bool func_744(int* iParam0)
{
	int iVar0;

	if (iParam0->f_1 == -1)
	{
		return false;
	}
	iVar0 = func_970(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

bool func_745(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_746(int iParam0, int iParam1, bool bParam2)
{
	if (!func_726(iParam0))
	{
		return false;
	}
	if (ITEMDATABASE::_0xF540239F9937033B(iParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_751(iParam0, iParam1);
	}
	return true;
}

bool func_747(int iParam0, int iParam1)
{
	*iParam1 = func_971(iParam0, 1);
	return *iParam1 != 0;
}

bool func_748(int iParam0, int iParam1)
{
	*iParam1 = func_972(iParam0, 1, 0);
	return *iParam1 != 0;
}

bool func_749()
{
	return Global_1915715.f_22477;
}

bool func_750(int iParam0)
{
	if (iParam0 == 34 && Global_1915715.f_22504.f_1)
	{
		return true;
	}
	if (func_286(1))
	{
		if (Global_1915715.f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_751(int iParam0, int iParam1)
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

int func_752(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (iParam1 == -570078785)
	{
		iVar0 = func_739(iParam0, -570078785, 0, 1);
		if (iVar0 == 0)
		{
		}
		if (!func_474(iVar0))
		{
			if (Global_1915715.f_20644)
			{
				func_974(MISC::_CREATE_VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", func_973(iVar0)));
			}
			return 0;
		}
	}
	else if (iParam1 == -915411861)
	{
		iVar1 = func_739(iParam0, -915411861, 0, 1);
		if (iVar1 == 0)
		{
		}
		if (!func_473(iVar1))
		{
			if (Global_1915715.f_20644)
			{
				func_974("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (iParam1 == 997808187)
	{
		return 1;
	}
	if (!func_225(iParam0, iParam1, &uVar2, 1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_753(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 1;
	Var0.f_1.f_1 = 10;
	return func_975(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_754(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 2;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	return func_975(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_755(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 3;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	return func_975(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_756(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 4;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	return func_975(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_757(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 5;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_975(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_758(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 6;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_975(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_759(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 7;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_975(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_760(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 8;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_975(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_761(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 9;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_975(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_762(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 10;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_975(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_763(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 11;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_975(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_764(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 12;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_975(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_765(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 13;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_975(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_766(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 14;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_975(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_767(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 15;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_975(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_768(int iParam0)
{
	bool bVar0;
	int iVar1;

	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_107() == -1)
	{
		if (func_485(iParam0))
		{
			iVar1 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
			bVar0 = UNLOCK::_UNLOCK_IS_VISIBLE(iVar1);
		}
		else
		{
			return true;
		}
	}
	else
	{
		bVar0 = UNLOCK::_UNLOCK_IS_VISIBLE(iParam0);
	}
	return bVar0;
}

bool func_769(int iParam0, int iParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if (!func_88(iParam0, 0))
	{
		return func_976(func_291(iParam0), iParam1, bParam2);
	}
	if (func_497(iParam0))
	{
		return func_751(func_498(iParam0, 1), iParam1);
	}
	if ((bParam2 && func_107() == 0) && !UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
	{
		return true;
	}
	if (!func_977(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return false;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar13))
		{
			return true;
		}
		iVar12++;
	}
	return false;
}

int func_770(int* iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<12> Var3;

	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		iVar2 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0);
		Var3.f_9 = 1;
		Var3.f_11 = -1591664384;
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ITEM_INFO(*iParam0, iVar1, &Var3))
			{
			}
			else if (Var3.f_8 != iParam1)
			{
			}
			else
			{
				iVar0 = (iVar0 + Var3.f_9);
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_771(int* iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar6;

	if (func_978(iParam1, 1) && !func_979(iParam1, 1))
	{
		if (Global_1915715.f_20644)
		{
			func_974(MISC::_CREATE_VAR_STRING(2, "SHOP_H_TOO_POOR_TOKEN"));
		}
		return 0;
	}
	if (iParam2 == -570078785)
	{
		iVar0 = func_487(iParam1, -570078785, 1, 0, 1, 0);
		if (iVar0 == 0)
		{
		}
		iVar1 = (iVar0 * iParam3);
		if (!func_474((iVar1 + func_980(iParam0, iParam2))))
		{
			if (Global_1915715.f_20644)
			{
				func_974(MISC::_CREATE_VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", (iVar1 / 100)));
			}
			return 0;
		}
	}
	else if (iParam2 == -915411861)
	{
		iVar2 = func_487(iParam1, -915411861, 1, 0, 1, 0);
		if (iVar2 == 0)
		{
		}
		iVar3 = (iVar2 * iParam3);
		if (!func_473((iVar3 + func_980(iParam0, iParam2))))
		{
			if (Global_1915715.f_20644)
			{
				func_974("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (iParam2 == 997808187)
	{
		return 1;
	}
	if (func_484(func_291(iParam1), 2))
	{
		if (!func_981(func_291(iParam1), iParam3, iParam2, &uVar4, 1))
		{
			return 0;
		}
	}
	else if (func_88(iParam1, 0))
	{
		if (!func_891(iParam1, iParam3, iParam2, &uVar4, &uVar6, 0, 1, 0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_772(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 1;
	Var0.f_1.f_1 = 10;
	return func_982(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_773(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 2;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	return func_982(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_774(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 3;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	return func_982(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_775(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 4;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	return func_982(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_776(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 5;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_982(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_777(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 6;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_982(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_778(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 7;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_982(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_779(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 8;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_982(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_780(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 9;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_982(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_781(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 10;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_982(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_782(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 11;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_982(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_783(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 12;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_982(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_784(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 13;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_982(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_785(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 14;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_982(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_786(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 15;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_982(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

int func_787(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_484(iParam0, 2))
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

bool func_788(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_983(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 == func_984())
	{
		return func_983(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1296859.f_22[iParam1])
	{
		return func_983(&(Global_1100469[iParam1 /*53*/].f_4), iVar0, 5);
	}
	return false;
}

int func_789(int iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5, int iParam6, bool bParam7)
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
		func_985(iParam2, -372840566);
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
	Var3.f_13 = bParam4;
	Var3.f_16 = iParam5;
	Var3.f_14 = iParam6;
	Var3 = { *iParam2 };
	func_986(uParam1, iParam0, Var3);
	return 1;
}

bool func_790(int iParam0)
{
	return func_983(&(Global_1956200.f_1565), iParam0, 1);
}

int func_791(int iParam0)
{
	return func_987(func_790(iParam0));
}

void func_792(var uParam0)
{
	func_510(uParam0, joaat("MULTIPLAYER_GAME"));
	if (func_588() == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		func_510(uParam0, joaat("LOOTER_PED_IS_MALE"));
	}
	else
	{
		func_510(uParam0, joaat("LOOTER_PED_IS_FEMALE"));
	}
}

void func_793(var uParam0, int iParam1, struct<15> Param2)
{
	int iVar0;
	struct<22> Var1;

	if (!func_745(uParam0))
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

int func_794(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 2;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return iVar0;
	}
	iVar1 = PED::_GET_PED_QUALITY(iParam0);
	switch (iVar1)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case -1:
		case 2:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

int func_795(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BADGER_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BADGER_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BADGER_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BEAVER_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BEAVER_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BEAVER_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BUCK_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BUCK_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BUCK_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CHICKEN_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CHICKEN_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CHICKEN_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CORMORANT_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CORMORANT_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CORMORANT_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_COUGAR_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_COUGAR_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_COUGAR_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_COYOTE_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_COYOTE_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_COYOTE_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CRANE_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CRANE_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CRANE_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_DEER_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_DEER_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_DEER_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_DUCK_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_DUCK_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_DUCK_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_EAGLE_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_EAGLE_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_EAGLE_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_EGRET_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_EGRET_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_EGRET_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_FOX_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_FOX_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_FOX_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_GILA_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_GILA_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_GILA_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_GOAT_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_GOAT_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_GOAT_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_GOOSE_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_GOOSE_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_GOOSE_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_HAWK_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_HAWK_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_HAWK_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_HERON_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_HERON_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_HERON_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_IGUANA_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_IGUANA_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_IGUANA_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_LOON_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_LOON_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_LOON_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_OWL_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_OWL_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_OWL_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PANTHER_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PANTHER_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PANTHER_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PARROT_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PARROT_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PARROT_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PELICAN_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PELICAN_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PELICAN_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PHEASANT_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PHEASANT_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PHEASANT_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PIG_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PIG_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PIG_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RABBIT_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RABBIT_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RABBIT_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RACOON_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RACOON_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RACOON_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RAM_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RAM_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RAM_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RAVEN_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RAVEN_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RAVEN_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ROOSTER_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ROOSTER_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ROOSTER_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SEAGULL_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SEAGULL_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SEAGULL_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SHEEP_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SHEEP_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SHEEP_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SKUNK_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SKUNK_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SKUNK_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_TURKEY_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_TURKEY_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_TURKEY_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_VULTURE_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_VULTURE_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_VULTURE_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_WOLF_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_WOLF_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_WOLF_POOR");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_BEAVER_LEGENDARY_01"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_BEAVER_LEGENDARY_01");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_BEAVER_LEGENDARY_02"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_BEAVER_LEGENDARY_02");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_BEAVER_LEGENDARY_03"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_BEAVER_LEGENDARY_03");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_BUCK_LEGENDARY_01"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_BUCK_LEGENDARY_01");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_BUCK_LEGENDARY_02"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_BUCK_LEGENDARY_02");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_BUCK_LEGENDARY_03"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_BUCK_LEGENDARY_03");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_COUGAR_LEGENDARY_01"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_COUGAR_LEGENDARY_01");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_COUGAR_LEGENDARY_02"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_COUGAR_LEGENDARY_02");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_COUGAR_LEGENDARY_03"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_COUGAR_LEGENDARY_03");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_COYOTE_LEGENDARY_01"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_COYOTE_LEGENDARY_01");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_COYOTE_LEGENDARY_02"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_COYOTE_LEGENDARY_02");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_COYOTE_LEGENDARY_03"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_COYOTE_LEGENDARY_03");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_FOX_LEGENDARY_01"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_FOX_LEGENDARY_01");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_FOX_LEGENDARY_02"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_FOX_LEGENDARY_02");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_FOX_LEGENDARY_03"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_FOX_LEGENDARY_03");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_PANTHER_LEGENDARY_01"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_PANTHER_LEGENDARY_01");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_PANTHER_LEGENDARY_02"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_PANTHER_LEGENDARY_02");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_PANTHER_LEGENDARY_03"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_PANTHER_LEGENDARY_03");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_RAM_LEGENDARY_01"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_RAM_LEGENDARY_01");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_RAM_LEGENDARY_02"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_RAM_LEGENDARY_02");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_RAM_LEGENDARY_03"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_RAM_LEGENDARY_03");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_WOLF_LEGENDARY_01"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_WOLF_LEGENDARY_01");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_WOLF_LEGENDARY_02"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_WOLF_LEGENDARY_02");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_WOLF_LEGENDARY_03"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_WOLF_LEGENDARY_03");
		default:
			break;
	}
	return 0;
}

int func_796(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (func_988(iParam1))
	{
		iVar1 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (Global_1904087.f_113[iVar0 /*96*/].f_1 == iParam1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1291734.f_938.f_245[iVar0 /*4*/].f_3))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_1291734.f_938.f_245[iVar0 /*4*/].f_3))
					{
						iVar1++;
					}
				}
			}
			iVar0++;
		}
		return iVar1;
	}
	return func_887(iParam0, iParam1);
}

int func_797(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	struct<2> Var0;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	if (func_989(*iParam0, iParam1, *iParam2, bParam3, iParam4))
	{
		Var0 = { func_191(iParam1) };
		if (STATS::_STAT_ID_IS_VALID(&Var0))
		{
			STATS::_0xBD861AE8A5181ED7(&Var0, *iParam2);
		}
		*iParam2 = func_798(*iParam0, iParam1, *iParam2, 1, iParam5);
		if (*iParam2 > 0)
		{
			if (func_990(iParam1))
			{
				if (!func_991(0, iParam1, *iParam2))
				{
				}
				if (func_992(PLAYER::PLAYER_ID(), 1, 0))
				{
					ENTITY::_0x18FF3110CF47115D(*iParam0, 32, 1);
				}
				else
				{
					ENTITY::_0x18FF3110CF47115D(*iParam0, 32, 0);
				}
				*iParam2 = func_993(*iParam0, iParam1, *iParam2);
			}
		}
		*iParam2 = 0;
		func_194(1, 0, 0);
		return 1;
	}
	return 0;
}

int func_798(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<11> Var6;
	var uVar102;

	if (!PED::_IS_PED_CARRYING(iParam0))
	{
		return iParam2;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar1);
	iVar4 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	Var6.f_10 = 10;
	iVar3 = 0;
	while (iVar3 < iVar4)
	{
		if (iParam2 == 0)
		{
		}
		else
		{
			iVar2 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar1));
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
			}
			else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
			{
			}
			else
			{
				iVar0 = func_994(iVar2);
				if (!func_995(iVar0, &uVar102))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar2))
					{
						if ((iParam4 == 2 && ENTITY::_0x8DE41E9902E85756(iVar2)) || (iParam4 == 1 && !ENTITY::_0x8DE41E9902E85756(iVar2)))
						{
						}
						else if (iVar0 == iParam1)
						{
							if (iParam0 == PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::PLAYER_ID()))
							{
								iVar5 = 0;
								while (iVar5 < 3)
								{
									if (Global_1291734.f_938.f_245[iVar5 /*4*/].f_3 == iVar2)
									{
										func_996(&Var6, &(Global_1904087.f_113[iVar5 /*96*/]));
									}
									else
									{
										iVar5++;
									}
								}
							}
							if (bParam3)
							{
								if (Global_1915715.f_20638 || Global_1915715.f_22504.f_1)
								{
									if (Global_1915715.f_20241 == 29 && ENTITY::IS_ENTITY_A_PED(iVar2))
									{
										if (func_153(iVar0, -753854379) || func_153(iVar0, 173360570))
										{
											PED::_SET_PED_DAMAGE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2), 2);
										}
										STATS::_0x831BF01C56149A8A(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2));
									}
									if (iParam0 == PLAYER::PLAYER_PED_ID())
									{
										func_190(iVar0, -1, 0, 1, 0, 0, 0);
									}
								}
								ENTITY::_DELETE_CARRIABLE(&iVar2);
							}
							else
							{
								PED::_0xED00D72F81CF7278(iVar2, 0, 0);
							}
							iParam2 = (iParam2 - 1);
						}
						iVar3++;
						ITEMSET::DESTROY_ITEMSET(iVar1);
						return iParam2;
					}
				}
			}
		}
	}
}

void func_799(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (Global_1915715.f_20637)
	{
		if (Global_1915715.f_20241 == 29)
		{
			if (func_255(iParam0))
			{
				iVar1 = 0;
				if (bParam2)
				{
					switch (func_997(iParam0))
					{
						case 2:
							iVar1 = 1;
							break;
						case 4:
							iVar1 = 3;
							break;
						case 8:
							iVar1 = 4;
							break;
					}
				}
				iVar0 = 0;
				while (iVar0 <= (iParam1 - 1))
				{
					STATS::_0x7C2ABF6E556B21FC(func_998(iParam0), iVar1, func_153(iParam0, 1064293907), 0);
					iVar0++;
				}
			}
		}
	}
}

bool func_800(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<2> Var0;

	Var0 = { func_191(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var0))
	{
		STATS::_0xBD861AE8A5181ED7(&Var0, iParam1);
	}
	func_999(iParam0, iParam1);
	return func_1000(iParam0, iParam1, bParam2, iParam3);
}

bool func_801(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		else if (func_1001(uParam0[iVar0 /*6*/]))
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
				*(uParam0[iVar0 /*6*/]) = { func_603() };
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

int func_802()
{
	return 232341495;
}

int func_803()
{
	return 232439799;
}

int func_804()
{
	return 230145239;
}

int func_805(int iParam0)
{
	var uVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 0, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 2, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 1, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	return 0;
}

int func_806(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_1002(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_807(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_1003(&Var1, iParam0))
	{
		iVar0 = ((func_1004() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_808(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return Global_1257541[iParam0 /*5*/].f_1;
}

int func_809(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1336837986;
		case 1:
			return 2124631622;
		case 2:
			return joaat("ROBBERY_TRAIN");
		case 3:
			return 1443764480;
		case 4:
			return -668110249;
		case 5:
			return -1381389849;
		case 6:
			return 536699577;
		case 7:
			return 541147288;
		case 8:
			return 377122918;
		case 9:
			return 1158195437;
		case 10:
			return joaat("AMBUSH");
		case 11:
			return -621956193;
		case 12:
			return joaat("GANG_EVENT_SHOWDOWN");
		case 13:
			return joaat("GANG_EVENT_IMPROMPTU_RACE");
		case 14:
			return -867762478;
		case 15:
			return 602097925;
		case 16:
			return joaat("TRAIN_ESCORT");
		case 17:
			return joaat("IWD_1V1");
		case 18:
			return joaat("IWD_PVP");
		case 20:
			return joaat("IWD_PF");
		case 21:
			return joaat("IWD_PLF");
		case 28:
			return joaat("IWD_F");
		case 19:
			return joaat("IWD_INF");
		case 22:
			return joaat("ASSASSINATION");
		case 23:
			return joaat("ASSASSINATION_TRACKING");
		case 24:
			return joaat("ASSASSINATION_PVP_PLAYER");
		case 25:
			return joaat("ASSASSINATION_PVP_POSSE");
		case 26:
			return joaat("COACH_HOLDUP_ROBBERY");
		case 27:
			return joaat("COACH_HOLDUP_KIDNAPPING");
		case 30:
			return 1518877519;
		default:
			break;
	}
	return 0;
}

var func_810(int iParam0)
{
	int iVar0;

	iVar0 = func_1006(0, (func_1005() - 1), &iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_1007(iVar0);
}

int func_811(int iParam0)
{
	return Global_1109804.f_5737[iParam0 /*5*/];
}

struct<8> func_812(int iParam0, int iParam1, bool bParam2)
{
	struct<5> Var0;
	struct<8> Var5;

	if (!func_1008(iParam0))
	{
		return Var5;
	}
	if (!func_1009(&Var0))
	{
		return Var5;
	}
	if (!func_1010(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_1010(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return Var5;
	}
	if (!func_1010(Var0, &(Var0.f_1), 19, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_1010(Var0, &(Var0.f_1), 21, iParam1, 0, bParam2))
	{
		if (bParam2)
		{
		}
		return Var5;
	}
	return func_1011(Var0);
}

bool func_813(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

float func_814(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

bool func_815(int iParam0)
{
	return func_97(Global_1211392.f_1196, iParam0);
}

bool func_816()
{
	return Global_263042[Global_1296859 /*70*/] > 2;
}

bool func_817(int iParam0, int iParam1)
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

struct<2> func_818()
{
	if (Global_1196205.f_129 <= 0)
	{
		return func_85(0);
	}
	if (Global_1196205.f_130 < 0 || Global_1196205.f_131 == 0)
	{
		return func_85(0);
	}
	return Global_1196205[Global_1196205.f_130 /*4*/].f_1;
}

bool func_819(int iParam0)
{
	if (func_1012(iParam0) == -1)
	{
		return false;
	}
	return true;
}

bool func_820(struct<2> Param0)
{
	return func_1013(Param0, 1, 4);
}

int func_821(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return joaat("CONSUMABLE_HERB_GINSENG");
		case 3:
			return joaat("CONSUMABLE_HERB_GINSENG");
		case 4:
			return joaat("CONSUMABLE_HERB_BAY_BOLETE");
		case 5:
			return joaat("CONSUMABLE_HERB_BLACK_BERRY");
		case 6:
			return joaat("CONSUMABLE_HERB_CURRANT");
		case 7:
			return joaat("CONSUMABLE_HERB_BURDOCK_ROOT");
		case 8:
			return joaat("CONSUMABLE_HERB_CHANTERELLES");
		case 11:
			return joaat("CONSUMABLE_HERB_COMMON_BULRUSH");
		case 12:
			return joaat("CONSUMABLE_HERB_CREEPING_THYME");
		case 13:
			return joaat("CONSUMABLE_HERB_SAGE");
		case 15:
			return joaat("CONSUMABLE_HERB_ENGLISH_MACE");
		case 16:
			return joaat("CONSUMABLE_HERB_EVERGREEN_HUCKLEBERRY");
		case 18:
			return joaat("CONSUMABLE_HERB_CURRANT");
		case 19:
			return joaat("CONSUMABLE_HERB_HARRIETUM");
		case 20:
			return joaat("CONSUMABLE_HERB_SAGE");
		case 21:
			return joaat("CONSUMABLE_HERB_INDIAN_TOBACCO");
		case 24:
			return joaat("CONSUMABLE_HERB_MILKWEED");
		case 27:
			return joaat("CONSUMABLE_HERB_OLEANDER_SAGE");
		case 28:
			return joaat("CONSUMABLE_HERB_OREGANO");
		case 29:
			return joaat("CONSUMABLE_HERB_PARASOL_MUSHROOM");
		case 30:
			return joaat("CONSUMABLE_HERB_PRAIRIE_POPPY");
		case 32:
			return joaat("CONSUMABLE_HERB_RAMS_HEAD");
		case 34:
			return joaat("CONSUMABLE_HERB_RED_RASPBERRY");
		case 35:
			return joaat("CONSUMABLE_HERB_SAGE");
		case 38:
			return joaat("CONSUMABLE_HERB_VANILLA_FLOWER");
		case 39:
			return joaat("CONSUMABLE_HERB_VIOLET_SNOWDROP");
		case 49:
			return joaat("CONSUMABLE_HERB_WILD_CARROTS");
		case 50:
			return joaat("CONSUMABLE_HERB_WILD_FEVERFEW");
		case 51:
			return joaat("CONSUMABLE_HERB_WILD_MINT");
		case 52:
			return joaat("CONSUMABLE_HERB_WINTERGREEN_BERRY");
		case 53:
			return joaat("CONSUMABLE_HERB_YARROW");
		case 40:
			return joaat("PROVISION_WLDFLWR_AGARITA");
		case 41:
			return joaat("PROVISION_WLDFLWR_TEXAS_BLUE_BONNET");
		case 42:
			return joaat("PROVISION_WLDFLWR_BITTERWEED");
		case 43:
			return joaat("PROVISION_WLDFLWR_BLOOD_FLOWER");
		case 44:
			return joaat("PROVISION_WLDFLWR_CARDINAL_FLOWER");
		case 45:
			return joaat("PROVISION_WLDFLWR_CHOCOLATE_DAISY");
		case 46:
			return joaat("PROVISION_WLDFLWR_CREEK_PLUM");
		case 47:
			return joaat("PROVISION_WLDFLWR_WILD_RHUBARB");
		case 48:
			return joaat("PROVISION_WLDFLWR_WISTERIA");
		default:
			break;
	}
	return 0;
}

void func_822(int iParam0, int iParam1)
{
	if (!func_823(iParam0))
	{
		return;
	}
	if (func_107() != -1)
	{
		Global_17411[iParam0] = (Global_17411[iParam0] || iParam1);
		return;
	}
	Global_39.f_4667[iParam0] = (Global_39.f_4667[iParam0] || iParam1);
}

bool func_823(int iParam0)
{
	return !iParam0 <= 0;
}

bool func_824(int iParam0)
{
	if (!func_823(iParam0))
	{
		return false;
	}
	return func_1014(iParam0, 4, 1);
}

void func_825(int iParam0, bool bParam1)
{
	if (!func_823(iParam0))
	{
		return;
	}
	if (func_1015(iParam0))
	{
		return;
	}
	func_822(iParam0, 2);
	if (bParam1)
	{
		if (!func_18(0, 0, 1))
		{
			if (func_107() == -1)
			{
				func_828(1, 6);
			}
			else
			{
				func_1016(1, 1017438712);
			}
		}
	}
}

bool func_826(int iParam0)
{
	if (!func_823(iParam0))
	{
		return false;
	}
	return func_1014(iParam0, 1, 1);
}

void func_827(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_823(iParam0))
	{
		return;
	}
	if (func_826(iParam0))
	{
		return;
	}
	if (!bParam1)
	{
		bParam1 = func_1017(iParam0);
	}
	if (!bParam1)
	{
		func_1018(iParam0);
	}
	func_822(iParam0, 1);
	func_825(iParam0, 1);
	if (bParam2)
	{
		if (!func_18(0, 0, 1))
		{
			func_828(1, 6);
		}
	}
}

void func_828(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_1019(&Global_0, 8);
	}
	if (!func_960() || func_107() != -1)
	{
		return;
	}
	func_1019(&Global_0, 1);
}

float func_829(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	if (iParam1 == -1)
	{
		fVar3 = (fVar2 - fVar1);
		return (fVar3 / 2f);
	}
	switch (iParam0)
	{
		case 0:
			fVar1 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_34));
			fVar2 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_34, false));
			iVar0 = 50;
			break;
		case 1:
			fVar1 = PED::_GET_PED_STAMINA(Global_34);
			fVar2 = PED::_GET_PED_MAX_STAMINA(Global_34);
			iVar0 = 8;
			break;
		case 2:
			fVar1 = PLAYER::_0xA81D24AE0AF99A5E(PLAYER::GET_PLAYER_INDEX());
			fVar2 = PLAYER::_0x592F58BC4D2A2CF3(PLAYER::GET_PLAYER_INDEX(), 0);
			iVar0 = 14;
			break;
	}
	fVar4 = (IntToFloat((iVar0 * iParam1)) + fVar1);
	if (fVar4 > fVar2)
	{
		fVar3 = (fVar2 - fVar1);
	}
	else
	{
		fVar3 = (fVar4 - fVar1);
	}
	return (fVar3 / 2f);
}

void func_830(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_0x16F2C8C084AB2092(iVar0);
	}
	iVar1 = func_899(2);
	func_900(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_831(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = 10;
	}
	iVar0 = func_901(2);
	func_902(BUILTIN::TO_FLOAT((iParam0 * iVar0)), 0, bParam1);
}

void func_832(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_0xFC3B580C4380B5B7(iVar0);
	}
	iVar1 = func_903(2);
	func_904(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

bool func_833()
{
	int iVar0;

	iVar0 = Global_1952637.f_595[8];
	iVar0 = (iVar0 + Global_1952637.f_595[10]);
	iVar0 = (iVar0 + Global_1952637.f_595[1]);
	iVar0 = (iVar0 + Global_1952637.f_595[2]);
	iVar0 = (iVar0 + Global_1952637.f_595[5]);
	iVar0 = (iVar0 + Global_1952637.f_595[25]);
	iVar0 = (iVar0 + Global_1952637.f_595[23]);
	iVar0 = (iVar0 + Global_1952637.f_595[18]);
	iVar0 = (iVar0 + Global_1952637.f_595[19]);
	return iVar0 > 0;
}

int func_834(int iParam0)
{
	int iVar0;

	iVar0 = func_260(func_259(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1952637.f_1675.f_1[iVar0 /*3*/].f_1;
	}
	return 0;
}

int func_835(int iParam0)
{
	return Global_1952637.f_1675.f_1[func_260(iParam0, 1) /*3*/];
}

int func_836()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1952637.f_3334.f_26)
	{
		iVar1 = Global_1952637.f_3334[iVar0];
		if (func_165(iVar1) == -999503751)
		{
			if (func_1020() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_837(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		iParam1 = func_1021(0);
	}
	if (func_165(iParam0) == -999503751 && func_841(iParam0) != -1)
	{
		return true;
	}
	if (iParam1 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		return func_153(iParam0, -287432114);
	}
	else if (iParam1 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		return func_153(iParam0, -133342564);
	}
	return false;
}

bool func_838(int iParam0, int iParam1, bool bParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_193(iParam0, bParam2, 0) };
	Var5 = { func_281(iParam0, Var0, Var0.f_4, bParam2) };
	if (func_338(iParam0, Var0, Var0.f_4, bParam2, 0, 0) <= 0)
	{
		return false;
	}
	INVENTORY::_0x9A113C660AEA3832(func_71(bParam2), &Var5, iParam1);
	return true;
}

int func_839(int iParam0)
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
		case 119907797:
			return 32;
		case 1388798186:
			return 64;
		default:
			break;
	}
	return 0;
}

bool func_840(int iParam0)
{
	return (Global_1952637.f_3334.f_33.f_6 && iParam0) != 0;
}

int func_841(int iParam0)
{
	switch (iParam0)
	{
		case 491602716: /* GXTEntry: "Custom Outfit" */
			return 0;
		case 217155793: /* GXTEntry: "Outfit One" */
			return 1;
		case 97391779: /* GXTEntry: "Outfit Two" */
			return 2;
		case -808817534: /* GXTEntry: "Outfit Three" */
			return 3;
		case 1270922359: /* GXTEntry: "Outfit Four" */
			return 4;
		case -2011879201: /* GXTEntry: "Outfit Five" */
			return 5;
		case -1063340820: /* GXTEntry: "Outfit Six" */
			return 6;
		case 2127262701:
			return 7;
		case -1323870201: /* GXTEntry: "Outfit Eight" */
			return 8;
		case 1632140501: /* GXTEntry: "Outfit Nine" */
			return 9;
		case 967218463: /* GXTEntry: "Outfit Ten" */
			return 10;
		default:
			break;
	}
	return -1;
}

bool func_842(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	if (iParam1 > -1 && iParam1 < 11)
	{
		return (Global_17411.f_55.f_644.f_33[iParam1 /*120*/] && iParam0) != 0;
	}
	return false;
}

struct<8> func_843(int iParam0)
{
	char cVar0[64];

	if (func_842(4, iParam0))
	{
		return Global_17411.f_2625[iParam0 /*8*/];
	}
	StringCopy(&cVar0, HUD::_GET_LABEL_TEXT_BY_HASH(func_1022(iParam0)), 64);
	return cVar0;
}

void func_844()
{
	Global_1952637.f_1057 = 0;
}

int func_845(int iParam0)
{
	if (!func_88(iParam0, 0))
	{
		return 0;
	}
	if (func_153(iParam0, 160827531) || func_165(iParam0) == 81053684)
	{
		return 1;
	}
	return 0;
}

void func_846(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	struct<2> Var1;
	var uVar120;
	int iVar121;
	int iVar122;

	bVar0 = false;
	switch (func_165(iParam0))
	{
		case -2061583405:
			bVar0 = func_1023(iParam0, &(Global_1952637.f_3334.f_28), bParam4);
			break;
		case 81053684:
			bVar0 = func_1023(iParam0, &(Global_1952637.f_3334.f_30), bParam4);
			break;
		case -999503751:
			bVar0 = func_1023(iParam0, &(Global_1952637.f_3334.f_27), bParam4);
			if (func_153(iParam0, -166674229))
			{
				Var1.f_1 = 39;
				if (func_1024(&Var1, iParam0, &uVar120, 0, 1, 0, 0, 0, 1, 8))
				{
					iVar121 = 0;
					while (iVar121 < 39)
					{
						iVar122 = Var1.f_1[iVar121 /*3*/];
						if (func_88(iVar122, 0))
						{
							func_846(iVar122, 0, 0, 0, 0);
						}
						iVar121++;
					}
				}
			}
			break;
		case -525676072:
			bVar0 = func_1023(iParam0, &(Global_1952637.f_3334.f_29), bParam4);
			break;
		case -1719060085:
			bVar0 = func_1023(iParam0, &(Global_1952637.f_3334.f_31), bParam4);
			break;
		case 119907797:
			bVar0 = func_1023(iParam0, &(Global_1952637.f_3334.f_32), bParam4);
			break;
		case 1388798186:
			bVar0 = func_1023(iParam0, &(Global_1952637.f_3334.f_33.f_7), bParam4);
			break;
		default:
			if (func_153(iParam0, 160827531))
			{
				bVar0 = func_1023(iParam0, &(Global_1952637.f_3334.f_30), bParam4);
			}
			break;
	}
	if (bParam3 && bVar0)
	{
		func_586(0, iParam0);
	}
	if (bParam2)
	{
		func_584();
	}
	if (bParam1)
	{
		func_587(0, 0);
	}
}

int func_847(int iParam0)
{
	var uVar0;
	var uVar1;

	func_1025(&uVar1, 9044914, iParam0, 0, 0, 0);
	DATAFILE::_0x91DED5DD64BB2691(&uVar1);
	while (DATAFILE::_0xED4413CEE1BF142C(&uVar1))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&uVar0, &uVar1, -1168434056))
		{
			return 0;
		}
		return uVar0;
	}
	return 0;
}

bool func_848(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_165(Global_1952637.f_1675.f_1[iParam1 /*3*/]);
	if (func_165(iParam0) == iVar0)
	{
		return true;
	}
	else if (iParam0 == joaat("CLOTHING_ITEM_BANDANA_NONE"))
	{
		return func_153(Global_1952637.f_1675.f_1[iParam1 /*3*/], 160827531);
	}
	else if (iParam0 == 491480257)
	{
		return (iVar0 == -2061583405 || iVar0 == 2086043523);
	}
	else if (iParam0 == joaat("CLOTHING_ITEM_CHAPS_NONE"))
	{
		return iVar0 == -923693316;
	}
	else if (iParam0 == joaat("CLOTHING_ITEM_SHIRT_NONE"))
	{
		return iVar0 == 1882579758;
	}
	return false;
}

void func_849(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	Var2 = 39;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_1952637.f_2897.f_35[iVar0 /*2*/] = { Var2 };
		if (iVar0 < *uParam0)
		{
			if ((func_1026(&(uParam0->f_2[iVar0 /*2*/]), 2) || uParam0->f_2[iVar0 /*2*/] == iParam1) || uParam0->f_2[iVar0 /*2*/] == 39)
			{
				uParam0->f_2[iVar0 /*2*/] = { Var2 };
			}
			else
			{
				if (func_1026(&(uParam0->f_2[iVar0 /*2*/]), 1))
				{
					func_1027(&(uParam0->f_2[iVar0 /*2*/]), 2, 6);
				}
				Global_1952637.f_2897.f_35[iVar1 /*2*/] = { uParam0->f_2[iVar0 /*2*/] };
				iVar1++;
				uParam0->f_2[iVar0 /*2*/] = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				uParam0->f_2[iVar0 /*2*/] = { Global_1952637.f_2897.f_35[iVar0 /*2*/] };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}
}

void func_850(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (*uParam0 + 1 >= 16)
	{
		return;
	}
	if (!func_1028(uParam0, 1))
	{
		func_1029(uParam0, 1);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (uParam0->f_2[iVar0 /*2*/] == iParam1)
		{
			uParam0->f_2[iVar0 /*2*/].f_1 = iParam2;
			return;
		}
		if (Global_1952637.f_83[uParam0->f_2[iVar0 /*2*/] /*12*/].f_2 > Global_1952637.f_83[iParam1 /*12*/].f_2)
		{
			iVar1 = *uParam0;
			while (iVar1 >= iVar0 + 1)
			{
				uParam0->f_2[iVar1 /*2*/] = { uParam0->f_2[(iVar1 - 1) /*2*/] };
				iVar1 = (iVar1 + -1);
			}
			uParam0->f_2[iVar0 /*2*/] = iParam1;
			uParam0->f_2[iVar0 /*2*/].f_1 = iParam2;
			*uParam0++;
			return;
		}
		iVar0++;
	}
	uParam0->f_2[*uParam0 /*2*/].f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

void func_851(var uParam0, var uParam1)
{
	struct<4> Var0;
	int iVar7;
	int iVar8;

	Var0 = func_1030(0);
	Var0.f_1 = uParam1;
	Var0.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var0);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var0))
	{
		return;
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var0))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar7, &Var0, 1409451727))
		{
		}
		else
		{
			iVar8 = func_260(iVar7, 1);
			if (iVar8 < 0 || iVar8 > 39)
			{
			}
			else if (!DATAFILE::_0x44B3A36933AC009C(&iVar7, &Var0, joaat("COMPONENT")))
			{
			}
			else if (uParam0->f_1[iVar8 /*3*/] != iVar7)
			{
			}
			else
			{
				uParam0->f_1[iVar8 /*3*/] = Global_1952637.f_83[iVar8 /*12*/];
				uParam0->f_1[iVar8 /*3*/].f_1 = 0;
				func_596(iVar8, 0);
			}
		}
	}
}

void func_852(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (iParam1 == -230310728 || iParam1 == 1326838792)
	{
		uParam0->f_1[iParam2 /*3*/].f_1 = 289238755;
	}
	else if (uParam0->f_1[iParam2 /*3*/].f_1 == 289238755)
	{
		uParam0->f_1[iParam2 /*3*/].f_1 = joaat("BASE");
	}
	iVar0 = 10;
	iVar1 = func_165(uParam0->f_1[iVar0 /*3*/]);
	if (iVar1 == 119907797)
	{
		if (func_153(iParam1, 458991572))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_596(iVar0, iParam3);
		}
	}
	else if (iVar1 == 2086043523)
	{
		if (func_153(iParam1, -93469181))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_596(iVar0, iParam3);
		}
	}
	iVar0 = 11;
	if (func_153(uParam0->f_1[iVar0 /*3*/], -1446529222) && func_153(iParam1, -93469181))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam3);
	}
	iVar0 = 12;
	if ((uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_153(iParam1, -93469181)) && func_153(uParam0->f_1[iVar0 /*3*/], -1303648999))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam3);
	}
}

void func_853(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == joaat("CLOTHING_ITEM_M_BEARD_STUBBLE"))
	{
		uParam0->f_1[iParam2 /*3*/].f_1 = 289238755;
	}
	else if (uParam0->f_1[iParam2 /*3*/].f_1 == 289238755)
	{
		uParam0->f_1[iParam2 /*3*/].f_1 = joaat("BASE");
	}
}

void func_854(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		return;
	}
	iVar0 = 12;
	iVar1 = uParam0->f_1[iVar0 /*3*/];
	if (!func_334(iVar1, 0) && func_153(iVar1, -180472385))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam3);
	}
	iVar0 = 10;
	iVar1 = uParam0->f_1[iVar0 /*3*/];
	if ((iVar1 != Global_1952637.f_83[iVar0 /*12*/] && func_165(iVar1) == 2086043523) && func_153(iParam1, -93469181))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam3);
	}
}

void func_855(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_165(iParam2))
	{
		case -525676072:
			func_1031(uParam0, bParam1, iParam3);
			break;
		case 2086043523:
			func_1032(uParam0, bParam1, iParam3);
			break;
	}
}

void func_856(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = 18;
	if (func_165(uParam0->f_1[iVar0 /*3*/]) == 912453393)
	{
		func_596(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	if (func_165(iParam2) == 81053684 || func_153(iParam2, 160827531))
	{
		func_1033(uParam0, bParam1, iParam3);
	}
	iVar0 = 11;
	if (func_153(iParam2, -180472385) && !func_334(uParam0->f_1[iVar0 /*3*/], 0))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam3);
	}
	if (func_153(iParam2, -1303648999))
	{
		return;
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/].f_1 == 1530758430)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
		func_596(iVar0, iParam3);
		iVar0 = 20;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
		{
			func_596(iVar0, iParam3);
		}
	}
	else if (uParam0->f_1[iVar0 /*3*/].f_1 == 1334603721)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = -1539589426;
		func_596(iVar0, iParam3);
		iVar0 = 20;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
		{
			func_596(iVar0, iParam3);
		}
	}
}

void func_857(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 12;
	iVar1 = 0;
	if (func_588() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar1 = 1;
	}
	if (joaat("NECKTIES") == PED::_GET_PED_COMPONENT_CATEGORY(uParam0->f_1[iVar0 /*3*/], iVar1, true))
	{
		if ((bParam1 || func_153(iParam2, 1872585553)) || func_165(iParam2) == 1882579758)
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_596(iVar0, iParam4);
		}
	}
	iVar0 = 17;
	if (!func_334(uParam0->f_1[iVar0 /*3*/], 0) && func_153(iParam2, 1467402774))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam4);
	}
	iVar0 = 29;
	if (!func_334(uParam0->f_1[iVar0 /*3*/], 0) && func_153(iParam2, 1126863852))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam4);
	}
	iVar0 = 34;
	iVar2 = uParam0->f_1[iVar0 /*3*/];
	if (func_165(iVar2) == 1759215194 && func_165(iParam2) == 1882579758)
	{
		uParam0->f_1[iVar0 /*3*/] = func_847(iParam2);
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam4);
	}
	else if (func_1034(iVar2, bParam1, iVar1))
	{
		iVar2 = uParam0->f_1[18 /*3*/];
		iVar3 = 0;
		if (func_165(iVar2) == 912453393 && func_1035(32))
		{
			iVar3 |= 1;
		}
		if (func_153(iParam2, 525391395))
		{
			iVar3 |= 2;
		}
		iVar2 = func_1036(Global_1952637.f_83[iVar0 /*12*/].f_9, iVar3);
		if (iVar2 != 0)
		{
			uParam0->f_1[iVar0 /*3*/] = iVar2;
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_596(iVar0, iParam4);
			func_865(uParam0, 0, iVar2, iParam4);
		}
	}
	iVar0 = 21;
	if (func_334(uParam0->f_1[iVar0 /*3*/], 0))
	{
		return;
	}
	func_596(iVar0, iParam4);
	if (uParam0->f_1[iParam3 /*3*/].f_1 == -1539589426 || uParam0->f_1[iParam3 /*3*/].f_1 == 1334603721)
	{
		return;
	}
	if (uParam0->f_1[iParam3 /*3*/].f_1 == 0 || uParam0->f_1[iParam3 /*3*/].f_1 == joaat("BASE"))
	{
		if (func_868(iParam2, iVar1, -1539589426) >= 0)
		{
			uParam0->f_1[iParam3 /*3*/].f_1 = -1539589426;
			return;
		}
	}
	if (func_868(iParam2, iVar1, 1334603721) >= 0)
	{
		uParam0->f_1[iParam3 /*3*/].f_1 = 1334603721;
	}
}

void func_858(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_153(iParam2, 358628372))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam3);
	}
}

void func_859(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	switch (func_165(iParam2))
	{
		case 698653232:
			func_1037(uParam0, bParam1, iParam2, iParam4);
			break;
		case 912453393:
			func_1038(uParam0, bParam1, iParam3, iParam4);
			break;
	}
}

void func_860(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_165(iParam2))
	{
		case -1080198344:
		case 1868067663:
			func_1039(uParam0, bParam1, iParam2, iParam3);
			break;
		case 294388917:
			func_1040(uParam0, bParam1, iParam2, iParam3);
			break;
	}
}

void func_861(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 18;
	if (func_165(uParam0->f_1[iVar0 /*3*/]) == 912453393)
	{
		func_596(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	iVar1 = 0;
	if (func_588() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar1 = 1;
	}
	iVar0 = 23;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_153(iParam2, 1537768121))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam3);
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		func_596(iVar0, iParam3);
		if (uParam0->f_1[iVar0 /*3*/].f_1 == -1539589426 || uParam0->f_1[iVar0 /*3*/].f_1 == 1334603721)
		{
			return;
		}
		if (uParam0->f_1[iVar0 /*3*/].f_1 == 0 || uParam0->f_1[iVar0 /*3*/].f_1 == joaat("BASE"))
		{
			if (func_868(uParam0->f_1[iVar0 /*3*/], iVar1, -1539589426) >= 0)
			{
				uParam0->f_1[iVar0 /*3*/].f_1 = -1539589426;
				return;
			}
		}
		if (func_868(uParam0->f_1[iVar0 /*3*/], iVar1, 1334603721) >= 0)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = 1334603721;
		}
	}
}

void func_862(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 21;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_153(uParam0->f_1[iVar0 /*3*/], 1537768121))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam2);
	}
}

void func_863(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	if (func_1041(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) && func_153(iParam2, -1230785684))
	{
		iVar0 = 27;
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam3);
	}
	iVar0 = 32;
	if (!func_334(uParam0->f_1[iVar0 /*3*/], 0) && func_153(iParam2, 1016511012))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam3);
	}
}

void func_864(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_153(uParam0->f_1[iVar0 /*3*/], 358628372))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam2);
	}
}

void func_865(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_165(iParam2))
	{
		case 1759215194:
			func_1042(uParam0, iParam3);
			break;
		case 1223979091:
		case 2047428024:
			func_1043(uParam0, bParam1, iParam2, iParam3);
			break;
		case 684307653:
			func_1044(uParam0, bParam1, iParam2, iParam3);
			break;
		case 502936876:
			func_1045(uParam0, bParam1, iParam3);
			break;
		case -1740828670:
			func_1046(uParam0, bParam1, iParam2, iParam3);
			break;
		case 344283346:
			func_1047(uParam0, bParam1, iParam3);
			break;
	}
}

void func_866(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_165(iParam2))
	{
		case 1769055947:
			func_1048(uParam0, bParam1, iParam2, iParam3);
			break;
		case -923693316:
			func_1049(uParam0, bParam1, iParam2, iParam3);
			break;
	}
}

void func_867(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		func_1050(uParam0, iParam3, 0, 1);
		return;
	}
	iVar0 = 35;
	iVar1 = uParam0->f_1[iVar0 /*3*/];
	if ((func_153(iParam2, 813132419) && uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/]) && func_165(iVar1) == -923693316)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam3);
	}
	if ((func_153(iParam2, -1650340550) && uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/]) && func_165(iVar1) == 1769055947)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam3);
	}
	iVar0 = 37;
	if (func_153(iParam2, -1278198125) && uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam3);
	}
}

int func_868(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < PED::_0xFFCC2DB2D9953401(iParam0, iParam1, 1))
	{
		if (PED::_0x6243635AF2F1B826(iParam0, iVar0, iParam1, 1) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_869(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("BASE");
	return true;
}

void func_870(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		Global_1952637.f_1675.f_1[iParam0 /*3*/] = { Global_1952637.f_1556.f_1[iParam0 /*3*/] };
	}
	if (!bParam2)
	{
		return;
	}
	func_1051(&(Global_1952637.f_1675.f_1[iParam0 /*3*/]), iParam0, Global_17411.f_55.f_644.f_1777);
}

void func_871(int iParam0, bool bParam1, int iParam2)
{
	func_1052(&(Global_1952637.f_1556), iParam0);
	func_1053(2, iParam0, 6);
	if (bParam1)
	{
		func_587(0, 1);
	}
}

int func_872(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_949(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_873(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	struct<14> Var1;
	int iVar15;
	struct<28> Var16;
	struct<25> Var44;
	struct<17> Var69;
	struct<16> Var86;

	iVar0 = -1;
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_397(*uParam0, &Var1, 1, 0, -1))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam1)
	{
		return iVar0;
	}
	if (Var1.f_13)
	{
		return iVar0;
	}
	iVar15 = func_89(Var1.f_4);
	if (iVar15 == joaat("HORSE"))
	{
		Var16 = { func_1054(*uParam0, 1, 0) };
		Var16.f_10 = iParam1;
		iVar0 = func_1055(joaat("UPDATE"), &Var16, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("COACH"))
	{
		Var44 = { func_1056(*uParam0, 1, 0) };
		Var44.f_10 = iParam1;
		iVar0 = func_1057(joaat("UPDATE"), &Var44, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("CLOTHING"))
	{
		Var69 = { func_1058(*uParam0, 1, 0) };
		Var69.f_10 = iParam1;
		iVar0 = func_1059(joaat("UPDATE"), &Var69, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var86 = { func_1060(&Var1, 0) };
		Var86.f_10 = iParam1;
		iVar0 = func_489(joaat("UPDATE"), &Var86, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

float func_874(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_875(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 24;
		case 1:
			return 25;
		case 2:
			return 26;
		case 3:
			return 27;
		case 4:
			return 28;
		case 5:
			return 29;
		case 6:
			return 30;
		case 18:
			return 38;
		case 16:
			return 39;
		case 17:
			return 40;
		case 15:
			return 41;
		case 11:
			return 31;
		case 12:
			return 32;
		case 13:
			return 33;
		case 14:
			return 35;
		case 7:
			return 34;
		default:
			break;
	}
	if (func_362(iParam0) == joaat("POSSE_VERSUS"))
	{
		return 37;
	}
	return 23;
}

bool func_876()
{
	if ((func_84() || Global_1572887.f_106.f_75 > 10) || func_1061())
	{
		if ((!func_558() && Global_265377.f_124517.f_71.f_21.f_2 != -504335712) && !func_1062(Global_265377.f_124517.f_71.f_21.f_3))
		{
			return true;
		}
	}
	return false;
}

bool func_877(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219.f_3 && iParam0) != 0;
	}
	return (Global_1100469[iParam1 /*53*/].f_3 && iParam0) != 0;
}

bool func_878()
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	return (Global_1051439.f_3259 == iVar0 || Global_1051439.f_3259 == (iVar0 - 1));
}

void func_879(int iParam0)
{
	Global_1051439.f_3628 = (Global_1051439.f_3628 || iParam0);
}

bool func_880()
{
	return (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_26538) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_26538, false));
}

int func_881()
{
	return Global_1051252.f_12;
}

char* func_882()
{
	return "unnamed";
}

int func_883(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -1:
			iVar0 = 16;
			break;
		case 0:
			iVar0 = 32;
			break;
		case 1:
			iVar0 = 64;
			break;
		case 2:
			iVar0 = 128;
			break;
		case 3:
			iVar0 = 256;
			break;
		case 4:
			iVar0 = 512;
			break;
		case 5:
			iVar0 = 1024;
			break;
		case 6:
			iVar0 = 2048;
			break;
		case 8:
			iVar0 = 4096;
			break;
	}
	return iVar0;
}

int func_884(int iParam0)
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

bool func_885(int iParam0)
{
	if (func_1063(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) != 1)
		{
			func_1064(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) == 1;
}

bool func_886(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return false;
	}
	return true;
}

int func_887(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (func_988(iParam1))
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
			return func_1065(INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iParam0), iParam1);
		}
	}
	return 0;
}

int func_888(int iParam0, bool bParam1)
{
	if (!bParam1 || func_1066())
	{
		return func_338(iParam0, func_339(1), -2015960939, 1, 1, 0);
	}
	return 0;
}

bool func_889(int iParam0)
{
	switch (func_165(iParam0))
	{
		case -2061583405:
			return true;
		case -1719060085:
			return true;
		case -999503751:
			return true;
		case -525676072:
			return true;
		case 81053684:
			return true;
		case 119907797:
			return true;
		case 1388798186:
			return true;
		default:
			break;
	}
	if (func_153(iParam0, 160827531))
	{
		return true;
	}
	return false;
}

void func_890(int iParam0, int iParam1, int iParam2)
{
	Global_1952637.f_2685[func_260(iParam0, 1) /*2*/].f_1 = (Global_1952637.f_2685[func_260(iParam0, 1) /*2*/].f_1 || iParam1);
}

bool func_891(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	bool bVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;

	if (func_497(iParam0))
	{
		return func_225(func_498(iParam0, 1), iParam2, uParam3, 1, 0);
	}
	if (!func_477(iParam0, iParam2, &Var0, &iVar31, 1, 0))
	{
		return false;
	}
	bVar35 = ((!bParam6 && func_76(0)) && !func_77());
	iVar37 = -1;
	if (Global_1915715.f_20638)
	{
		iVar37 = Global_1915715.f_20241;
	}
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (Var0[iVar34 /*2*/] == 0 || Var0[iVar34 /*2*/] == 1412640604)
		{
		}
		else
		{
			iVar32 = (Var0[iVar34 /*2*/].f_1 * iParam1);
			if (Var0[iVar34 /*2*/] == joaat("CURRENCY_CASH") && (bParam7 || func_473(iVar32)))
			{
				Jump @482; //curOff = 198
			}
			else if (Var0[iVar34 /*2*/] == joaat("CURRENCY_GOLD_BAR") && (bParam7 || func_474(iVar32)))
			{
			}
			else
			{
				iVar36 = func_475(iVar37, Var0[iVar34 /*2*/]);
				if (iVar36 != 0)
				{
					bParam5 = false;
					iVar33 = func_476(Var0[iVar34 /*2*/], iVar36);
				}
				else
				{
					iVar33 = func_92(Var0[iVar34 /*2*/], 0, !bVar35, 1);
				}
				if (iVar33 >= iVar32)
				{
				}
				else if (bVar35)
				{
					if (func_252(Var0[iVar34 /*2*/]) || func_478(Var0[iVar34 /*2*/]))
					{
						iVar38 = 0;
						if (bParam5)
						{
							iVar39 = func_480(7, Var0[iVar34 /*2*/], &iVar38);
						}
						iVar40 = func_479(Var0[iVar34 /*2*/], iVar36);
						if (((iVar33 + iVar39) + iVar40) >= iVar32)
						{
							if ((iVar33 + iVar40) < iVar32 && ENTITY::DOES_ENTITY_EXIST(iVar38))
							{
								*iParam4 = iVar38;
							}
						}
						else
						{
							Jump @466; //curOff = 422
							if (bParam5 && ((iVar33 + func_481(7, Var0[iVar34 /*2*/])) + func_482(Var0[iVar34 /*2*/])) >= iVar32)
							{
							}
							else
							{
								*uParam3 = { Var0[iVar34 /*2*/] };
								return false;
							}
						}
						iVar34++;
						return true;
					}
				}
			}
		}
	}
}

void func_892(int iParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (func_107() == 0)
	{
		iVar0 = func_729();
		if (iVar0 < iParam0)
		{
			iParam0 = iVar0;
		}
		func_1067(iParam0, sParam1, -142743235, bParam4);
	}
	else
	{
		func_1068(iParam0);
		if (bParam3)
		{
			func_1069(iParam0, sParam1, iParam2);
		}
	}
}

int func_893(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;

	iParam0 = func_340(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_88(iParam1, 0))
	{
		return 0;
	}
	if (!func_735(iParam0))
	{
		return 0;
	}
	iVar0 = func_177(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 0;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
	iVar2 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	Var3.f_1 = 10;
	Var3.f_12 = 10;
	iVar26 = 0;
	iVar27 = 0;
	while (iVar27 < iVar2)
	{
		if (iVar26 >= iParam2)
		{
		}
		else
		{
			iVar28 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar27, iVar1));
			if (!func_736(iVar28))
			{
			}
			else
			{
				MISC::_0x48E4D50F87A96AA5(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar28), 1, 1, ENTITY::GET_ENTITY_MODEL(iVar28), &Var3, 0);
				iVar29 = 0;
				while (iVar29 < 10)
				{
					iVar30 = Var3.f_1[iVar29];
					if (iVar30 == iParam1)
					{
						func_449(iParam1, 1, 752097756);
						if (ENTITY::DOES_ENTITY_EXIST(iVar28))
						{
							iVar31 = func_256(&iVar28);
							if (!func_88(iVar31, 0))
							{
								iVar31 = func_257(iVar28);
							}
							if (func_88(iVar31, 0))
							{
								func_258(iVar31, 1, 1, -142743235);
							}
							ENTITY::_DELETE_CARRIABLE(&iVar28);
						}
						iVar26++;
					}
					iVar29++;
				}
			}
			iVar27++;
		}
	}
	if (ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		ITEMSET::DESTROY_ITEMSET(iVar1);
	}
	return iVar26;
}

void func_894(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<10> Var2;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;

	if (iParam1 > 0)
	{
		Var2 = -1;
		Var2.f_1 = -1;
		Var2.f_2 = -1;
		Var2.f_3 = -1;
		Var2.f_4 = -1;
		Var2.f_5 = -1;
		Var2.f_6 = -1;
		Var2.f_7 = -1;
		Var2.f_8 = -1;
		iVar12 = func_296(iParam0, 1697966752);
		if (iVar12 == 0)
		{
			return;
		}
		Var2 = { func_619(-1591664384, -1591664384, 0, 235313564, 0, 0, -1, iVar12, 0) };
		if (func_620(Var2, &iVar0, &iVar1, 0))
		{
			iVar14 = 0;
			while (iVar14 < iVar1)
			{
				if (iParam1 <= 0)
				{
				}
				else
				{
					iVar13 = func_731(iVar14, iVar0);
					if (func_88(iVar13, 0) && iParam0 != iVar13)
					{
						iVar15 = func_92(iVar13, 0, 0, 0);
						while (iVar15 > 0 && iParam1 > 0)
						{
							iParam1 = (iParam1 - func_1070(iVar13, iParam0, 0));
							iVar15 = (iVar15 - 1);
						}
					}
					iVar14++;
				}
			}
			func_622(iVar0);
		}
	}
}

void func_895(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2[10];
	int iVar13;
	int iVar14;
	int iVar15;

	if (!func_88(iParam0, 0))
	{
	}
	if (PED::_IS_PED_CARRYING(Global_34))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_34);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			if (ENTITY::IS_ENTITY_A_PED(iVar0))
			{
				iVar13 = func_1071(iVar1, &uVar2);
				iVar14 = 0;
				while (iVar14 < iVar13)
				{
					if (uVar2[iVar14] == iParam0)
					{
						ENTITY::_DELETE_CARRIABLE(&iVar0);
					}
					else
					{
						iVar14++;
					}
				}
			}
			else if (PED::_0x9E7738B291706746(&iVar15, iVar1, PED::_GET_PED_DAMAGE(iVar1)) && iVar15 == iParam0)
			{
				ENTITY::_DELETE_CARRIABLE(&iVar0);
			}
		}
	}
}

int func_896(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iParam0 = func_340(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_88(iParam1, 0))
	{
		return 0;
	}
	if (!func_735(iParam0))
	{
		return 0;
	}
	iVar0 = func_177(iParam0);
	iVar1 = iParam1;
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 0;
	}
	iVar2 = 0;
	iVar3 = 0;
	while (iVar3 < iParam2)
	{
		if (PED::_0x0CEEB6F4780B1F2F(iVar0, iVar3) != iVar1)
		{
		}
		else if (func_1000(iParam1, iParam2, 1, -142743235))
		{
			iVar2++;
		}
		iVar3++;
	}
	return iVar2;
}

int func_897(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<5> Var0;
	struct<4> Var5;

	if (func_107() == 0)
	{
		return 0;
	}
	if (!func_88(iParam0, 0))
	{
		return 0;
	}
	if (iParam2 < 1)
	{
		return 0;
	}
	Var0 = { func_339(0) };
	Var0.f_4 = func_468(iParam1);
	Var5 = { func_281(iParam0, Var0, Var0.f_4, 0) };
	if (!func_282(iParam0, &Var5, &Var0, iParam2, iParam3, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_898(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return joaat("HERB_ALASKAN_GINSENG");
		case 3:
			return joaat("HERB_AMERICAN_GINSENG");
		case 4:
			return joaat("HERB_BAY_BOLETE");
		case 5:
			return joaat("HERB_BLACK_BERRY");
		case 6:
			return joaat("HERB_BLACK_CURRANT");
		case 7:
			return joaat("HERB_BURDOCK_ROOT");
		case 8:
			return joaat("HERB_CHANTERELLES");
		case 11:
			return joaat("HERB_COMMON_BULRUSH");
		case 12:
			return joaat("HERB_CREEPING_THYME");
		case 13:
			return joaat("HERB_DESERT_SAGE");
		case 15:
			return joaat("HERB_ENGLISH_MACE");
		case 16:
			return joaat("HERB_EVERGREEN_HUCKLEBERRY");
		case 18:
			return joaat("HERB_GOLDEN_CURRANT");
		case 19:
			return joaat("HERB_HARRIETUM_OFFICINALIS");
		case 20:
			return joaat("HERB_HUMMINGBIRD_SAGE");
		case 21:
			return joaat("HERB_INDIAN_TOBACCO");
		case 24:
			return joaat("HERB_MILKWEED");
		case 27:
			return joaat("HERB_OLEANDER_SAGE");
		case 28:
			return joaat("HERB_OREGANO");
		case 29:
			return joaat("HERB_PARASOL_MUSHROOM");
		case 30:
			return joaat("HERB_PRAIRIE_POPPY");
		case 32:
			return joaat("HERB_RAMS_HEAD");
		case 34:
			return joaat("HERB_RED_RASPBERRY");
		case 35:
			return joaat("HERB_RED_SAGE");
		case 38:
			return joaat("HERB_VANILLA_FLOWER");
		case 39:
			return joaat("HERB_VIOLET_SNOWDROP");
		case 49:
			return joaat("HERB_WILD_CARROTS");
		case 50:
			return joaat("HERB_WILD_FEVERFEW");
		case 51:
			return joaat("HERB_WILD_MINT");
		case 52:
			return joaat("HERB_WINTERGREEN_BERRY");
		case 53:
			return joaat("HERB_YARROW");
		case 1:
			return joaat("HERB_ACUNAS_STAR_ORCHID");
		case 9:
			return joaat("HERB_CIGAR_ORCHID");
		case 10:
			return joaat("HERB_CLAMSHELL_ORCHID");
		case 14:
			return joaat("HERB_DRAGONS_MOUTH_ORCHID");
		case 17:
			return joaat("HERB_GHOST_ORCHID");
		case 22:
			return joaat("HERB_LADY_OF_NIGHT_ORCHID");
		case 23:
			return joaat("HERB_LADY_SLIPPER_ORCHID");
		case 25:
			return joaat("HERB_MOCCASIN_FLOWER_ORCHID");
		case 26:
			return joaat("HERB_NIGHT_SCENTED_ORCHID");
		case 31:
			return joaat("HERB_QUEENS_ORCHID");
		case 33:
			return joaat("HERB_RAT_TAIL_ORCHID");
		case 36:
			return joaat("HERB_SPARROWS_EGG_ORCHID");
		case 37:
			return joaat("HERB_SPIDER_ORCHID");
		case 40:
			return joaat("HERB_WILD_FLWR_AGARITA");
		case 42:
			return joaat("HERB_WILD_FLWR_BITTERWEED");
		case 43:
			return joaat("HERB_WILD_FLWR_BLOOD_FLOWER");
		case 41:
			return joaat("HERB_WILD_FLWR_BLUE_BONNET");
		case 44:
			return joaat("HERB_WILD_FLWR_CARDINAL_FLOWER");
		case 45:
			return joaat("HERB_WILD_FLWR_CHOCOLATE_DAISY");
		case 46:
			return joaat("HERB_WILD_FLWR_CREEK_PLUM");
		case 47:
			return joaat("HERB_WILD_FLWR_RHUBARB");
		case 48:
			return joaat("HERB_WILD_FLWR_WISTERIA");
	}
	return 0;
}

int func_899(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_791(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956200.f_1546;
		case 1:
			return Global_1956200.f_1565.f_136;
		default:
			break;
	}
	return -1;
}

void func_900(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1296859.f_8;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	ENTITY::_0x835F131E7DC8F97A(iParam1, fParam0, 0, 0);
}

int func_901(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_791(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956200.f_1546.f_1;
		case 1:
			return Global_1956200.f_1565.f_136.f_1;
		default:
			break;
	}
	return -1;
}

void func_902(float fParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = PLAYER::PLAYER_ID();
	if (fParam0 > 0f && func_1072(iVar0))
	{
		return;
	}
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if ((PLAYER::_0xB16223CB7DA965F0(iVar0) && fParam0 > 0f) && !bParam2)
	{
		return;
	}
	if (fParam0 == 0f)
	{
		return;
	}
	fVar2 = PLAYER::_0xAB3773E7AA1E9DCC(iVar0);
	if (fParam0 < 0f && bParam1 == 1)
	{
		bParam1 = false;
	}
	if (!bParam1)
	{
		PLAYER::_0x5A498FCA232F71E1(iVar0, 1f);
	}
	if (fParam0 > 0f)
	{
		PLAYER::_0x51345AE20F22C261(iVar0, fParam0, 0, 0, 1);
	}
	else
	{
		PLAYER::_0x200114E99552462B(iVar0, fParam0, 0);
	}
	if (!bParam1)
	{
		PLAYER::_0x5A498FCA232F71E1(iVar0, fVar2);
	}
}

int func_903(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_791(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956200.f_1546.f_2;
		case 1:
			return Global_1956200.f_1565.f_136.f_2;
		default:
			break;
	}
	return -1;
}

void func_904(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1296859.f_8;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	PED::_CHARGE_PED_STAMINA(iParam1, fParam0);
}

float func_905(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_962();
	func_1073(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_1074(iParam0, 2);
	if (func_1076(iVar0, func_1075(iParam0, 2), 1))
	{
		func_1077(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_140(103, bParam2);
		return 0f;
	}
	func_1078(iParam0, func_962(), 2);
	func_1077(iParam0, iVar1 + 1, 2);
	return fParam1;
}

float func_906(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_791(2);
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

int func_907(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (iParam5 == 2)
	{
		iParam5 = func_791(2);
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (func_1079(iVar0, iParam0, fParam1))
	{
		if (bParam2)
		{
			if (fParam1 >= 100f)
			{
				AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
			}
		}
		if (bParam3)
		{
			func_1080(iParam0, 7000, iParam5);
		}
		func_1081(iVar0, iParam0, fParam1);
		func_1082(iParam0, fParam1, bParam4, iParam5);
	}
	return 1;
}

bool func_908()
{
	if (Global_1956200.f_1431.f_107 == -15)
	{
		return true;
	}
	return func_1083(Global_1956200.f_1431.f_107, 0);
}

void func_909(float fParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	fVar0 = func_1084(13, 2);
	iVar1 = func_1085(fVar0);
	fVar0 = (fVar0 + fParam0);
	fVar0 = func_428(fVar0, 0f, 100f);
	iVar2 = func_1085(fVar0);
	if (iVar1 != iVar2)
	{
		Global_1956200.f_1431.f_107 = func_962();
		func_963(&(Global_1956200.f_1431.f_107), 0, 0, 1, 0, 0, 0, 0);
	}
	func_1086(13, fVar0, 2);
	Global_1956200.f_1431.f_99 = iParam1;
}

int func_910(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	char* sVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_PED_ID();
	if (fParam1 == -1f)
	{
		if (func_1087(iParam0))
		{
			fParam1 = 30f;
		}
		else
		{
			fParam1 = 30f;
		}
	}
	else if (fParam1 <= 0f)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (bParam2)
			{
				sVar0 = func_1088(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_830(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[0 /*2*/] = fParam1;
			break;
		case 1:
			if (bParam2)
			{
				sVar0 = func_1088(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_1089(joaat("STATUS_EFFECT__TRACKING"));
			func_832(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[1 /*2*/] = fParam1;
			break;
		case 2:
			if (bParam2)
			{
				sVar0 = func_1088(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_831(-1, 0);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[2 /*2*/] = fParam1;
			break;
		case 19:
			func_1089(joaat("STATUS_EFFECT__POISON"));
			func_1090(0, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[0 /*2*/].f_1 = fParam1;
			break;
		case 18:
			func_1090(1, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[1 /*2*/].f_1 = fParam1;
			break;
		case 20:
			func_1090(2, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[2 /*2*/].f_1 = fParam1;
			break;
		default:
			return 0;
	}
	return 1;
}

void func_911(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_110(joaat("EATEN"), func_898(iParam0)) };
	STATS::_STAT_ID_INCREMENT_INT(&Var0, iParam1);
	func_111(func_196(joaat("HERBS_EATEN")), iParam1);
}

void func_912(int iParam0, int iParam1)
{
	int iVar0;

	if (func_107() == 0)
	{
		iVar0 = func_296(iParam0, -949239683);
		if (iParam1 == -1387038764)
		{
			return;
		}
		if (func_153(iParam0, -136654233))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_CONSUMABLE_CANNEDGOODSEATEN_00"), 1);
		}
		if ((func_153(iParam0, 1765172170) || 1443104131 == iVar0) || -1919515848 == iVar0)
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_CONSUMABLE_TOBACCOSMOKEDCHEWED_00"), 1);
		}
		if (func_153(iParam0, 1573112293))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_CONSUMABLE_HERBSTASTED_00"), 1);
		}
		if (func_153(iParam0, -2085281117) && !func_153(iParam0, -1237028043))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_CONSUMABLE_FRESHPRODUCEEATEN_00"), 1);
		}
		if (func_153(iParam0, 200705431))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_CONSUMABLE_DRYGOODSEATEN_00"), 1);
		}
		if (((func_153(iParam0, joaat("CI_TAG_ITEM_MEAT_ANIMAL")) || func_153(iParam0, -839724752)) || func_153(iParam0, 1264218912)) || iParam0 == joaat("CONSUMABLE_OFFAL"))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_CONSUMABLE_MEATEATEN_00"), 1);
		}
		if (func_153(iParam0, -764700608))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_CONSUMABLE_TONICOILUSED_00"), 1);
		}
		if ((iParam0 == joaat("CONSUMABLE_CANDY_BAG") || iParam0 == joaat("CONSUMABLE_CHOCOLATE_BAR")) || iParam0 == joaat("CONSUMABLE_PEPPERMINT"))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), -1075364325, 1);
		}
		if (iParam0 == joaat("CONSUMABLE_COFFEE"))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), 2024753712, 1);
		}
	}
}

int func_913(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return Global_1134390[iParam0 /*83*/].f_38.f_28;
}

int func_914(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return Global_1134390[iParam0 /*83*/].f_38.f_28.f_1;
}

void func_915(var uParam0, int iParam1, int iParam2)
{
	Global_1913694[uParam0->f_44 /*9*/].f_5 = iParam2;
	Global_1913694[uParam0->f_44 /*9*/].f_6 = iParam1;
	Global_1913694[uParam0->f_44 /*9*/].f_7 = 1;
	Global_1913694[uParam0->f_44 /*9*/].f_8 = 0;
	Global_1913694.f_1576++;
	uParam0->f_44++;
	if ((iParam2 == 600942249 || iParam2 == -257768755) || iParam2 == 1472825031)
	{
		func_1091(uParam0, iParam1, iParam2);
	}
	else if (iParam2 == -214678071)
	{
		func_1092(uParam0, iParam1);
	}
}

int func_916(var uParam0, int iParam1)
{
	struct<10> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	Var0 = { func_619(-1591664384, -1591664384, 0, 0, iParam1, 0, -1, Global_1913694.f_1584, 0) };
	if (func_620(Var0, &iVar10, &iVar11, 0))
	{
		iVar12 = 0;
		while (iVar12 < iVar11)
		{
			iVar13 = func_731(iVar12, iVar10);
			if (func_88(iVar13, 0))
			{
				if (uParam0->f_44 >= 175)
				{
				}
				else
				{
					if (Global_1913694.f_1584 == 0 && func_153(iVar13, 302810039))
					{
						if (!(Global_1913694.f_1585 != 0 && func_153(iVar13, Global_1913694.f_1585)))
						{
						}
						else if (func_153(iVar13, 266762988))
						{
						}
						else
						{
							func_915(uParam0, iVar13, iParam1);
							func_1093(uParam0, iVar13, iParam1);
						}
						iVar12++;
						func_1094(&iVar10);
						return 1;
						return 0;
					}
				}
			}
		}
	}
}

int func_917(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1795740370;
		case 1:
			return 461149715;
		case 2:
			return 210507310;
		case 3:
			return -1182908601;
		case 4:
			return 1647118377;
		case 5:
			return -867280435;
		default:
			break;
	}
	return 0;
}

int func_918(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_919(var uParam0, char[4] cParam1, var uParam2)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam2->f_28, cParam1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "visible", false);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "texture", "");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "textureDictionary", "inventory_items");
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "count", 3);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "enabled", 1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "inUse", false);
}

void func_920(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = Global_1913694[iParam2 /*9*/].f_6;
	if ((bParam4 || func_106(uParam0, 2)) || func_235(iVar0, uParam0->f_41))
	{
		if (bParam1)
		{
			if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1913694[iParam2 /*9*/].f_1))
			{
				if (bParam5)
				{
					func_921(uParam0, -1, bParam3, Global_1913694[iParam2 /*9*/].f_1, 1, 0, 1);
				}
				DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_29, uParam0->f_45, -2047994727, Global_1913694[iParam2 /*9*/].f_1);
			}
			else
			{
				func_1095(uParam0, iParam2, bParam1, bParam3);
			}
		}
		else
		{
			if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1913694[iParam2 /*9*/].f_1))
			{
				DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1913694[iParam2 /*9*/].f_1);
			}
			func_1095(uParam0, iParam2, 0, bParam3);
		}
		if (uParam0->f_45 == 0)
		{
			uParam0->f_59 = Global_1913694[iParam2 /*9*/].f_6;
			uParam0->f_60 = Global_1913694[iParam2 /*9*/].f_5;
			uParam0->f_58 = Global_1913694[iParam2 /*9*/].f_1;
		}
		uParam0->f_45++;
	}
}

void func_921(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	char[] cVar8[8];
	int iVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<2> Var15;
	struct<2> Var18;
	int iVar40;
	int iVar41;
	struct<7> Var42;
	int iVar49;

	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam3))
	{
		iParam1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam3, "iIndex");
	}
	iVar0 = Global_1913694[iParam1 /*9*/].f_1;
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iVar0))
	{
		return;
	}
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar0, "eOutputItem");
	iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar0, "eCost");
	iVar3 = iVar1;
	iVar4 = iVar2;
	iVar5 = func_226(iVar3, iVar4, bParam2, 0);
	iVar6 = func_92(iVar3, 0, 0, 0);
	iVar7 = func_642(iVar3, 0);
	if (iVar7 != -1)
	{
		iVar7 = (iVar7 - iVar6);
	}
	else
	{
		iVar7 = iVar5;
	}
	StringIntConCat(&cVar8, func_643(iVar7, iVar5), 8);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(iVar0, "count", &cVar8);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, "visible", 0);
	if (func_106(uParam0, 2))
	{
		iVar9 = func_918((iVar5 > 0 && func_929(iVar3)), 1, 0);
	}
	else
	{
		iVar9 = func_918((iVar7 > 0 && iVar5 > 0), 1, 0);
	}
	bVar10 = false;
	if (iVar9 == 0 && func_1096(iVar3))
	{
		if (func_1097(iVar3, iVar4, uParam0, bParam2, &iVar11, &iVar12, &iVar13))
		{
			iVar9 = 1;
			bVar10 = true;
			if (bParam6)
			{
				iVar3 = iVar11;
				iVar4 = iVar12;
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "name", iVar11);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "eOutputItem", iVar11);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "eCost", iVar12);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "iCurCostVariant", iVar13);
				bParam5 = true;
			}
		}
	}
	if (!func_106(uParam0, 4))
	{
		if ((iVar4 == -214678071 || iVar4 == joaat("COST_CRAFTING_GRILL")) || DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(iVar0, "bFireCrafting"))
		{
			iVar9 = 0;
		}
	}
	if (!Global_1913694.f_1579 && func_769(iVar3, iVar4, 1))
	{
		iVar9 = 0;
		iVar14 = 1;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, "lockVisible", iVar14);
	if (iVar9 == 1)
	{
		if (!func_419(2) && func_296(iVar3, -1636519629) == -701492487)
		{
			Global_1913694[iParam1 /*9*/].f_2 = 0;
			iVar9 = 0;
		}
		else
		{
			Global_1913694[iParam1 /*9*/].f_2 = 1;
		}
	}
	else
	{
		if (((func_106(uParam0, 128) && iVar9 == 0) && Global_1913694[iParam1 /*9*/].f_2) && bParam4)
		{
			DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(uParam0->f_29, iVar0);
		}
		Global_1913694[iParam1 /*9*/].f_2 = 0;
	}
	if (bParam5)
	{
		if (func_372(iVar3, &Var15, joaat("INVENTORY"), 0, 0, 0))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(iVar0, "texture", Var15);
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(iVar0, "textureDictionary", Var15.f_1);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "name", iVar3);
		Var18.f_1 = 20;
		iVar40 = 0;
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "deadeyeCoreDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "deadeyeDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaCoreDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthHorseDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreHorseDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaCoreHorseDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaHorseDurationCategory", 0);
		if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iVar3, &Var18))
		{
			iVar41 = 0;
			while (iVar41 < Var18)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(Var18.f_1[iVar41], &Var42))
				{
					iVar49 = Var42.f_2;
					switch (Var42.f_1)
					{
						case -1104847406:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "deadeye", iVar49);
							break;
						case 1857353317:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "deadeyeCore", iVar49);
							break;
						case -826379728:
							iVar40 = 1;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "deadeyeCore", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "deadeyeCoreDurationCategory", Var42.f_6);
							break;
						case 1342237631:
							iVar40 = 1;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "deadeye", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "deadeyeDurationCategory", Var42.f_6);
							break;
						case -943921969:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "health", iVar49);
							break;
						case -416929031:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCore", iVar49);
							break;
						case 1869697234:
							iVar40 = 1;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "health", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthDurationCategory", Var42.f_6);
							break;
						case 2062242710:
							iVar40 = 1;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCore", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreDurationCategory", Var42.f_6);
							break;
						case 381158954:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "stamina", iVar49);
							break;
						case 1681823811:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaCore", iVar49);
							break;
						case -1191740624:
							iVar40 = 1;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaCore", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaCoreDurationCategory", Var42.f_6);
							break;
						case -1240225157:
							iVar40 = 1;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "stamina", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaDurationCategory", Var42.f_6);
							break;
						case 978049229:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthHorse", iVar49);
							break;
						case -778289619:
							iVar40 = 1;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthHorse", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthHorseDurationCategory", Var42.f_6);
							break;
						case -1918697215:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCoreHorse", iVar49);
							break;
						case 1136630075:
							iVar40 = 1;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCoreHorse", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreHorseDurationCategory", Var42.f_6);
							break;
						case 855745648:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaCoreHorse", iVar49);
							break;
						case 1365603835:
							iVar40 = 1;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaCoreHorse", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaCoreHorseDurationCategory", Var42.f_6);
							break;
						case 1497139093:
							iVar40 = 1;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaHorse", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaHorseDurationCategory", Var42.f_6);
							break;
					}
				}
				iVar41++;
			}
		}
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, "overpower", iVar40);
	}
	if (!func_106(uParam0, 4) && DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(iVar0, "bFireCrafting"))
	{
		iVar9 = 0;
	}
	if (bVar10 && !bParam6)
	{
		iVar9 = 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "enabled", iVar9);
}

int func_922(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		return PED::GET_MOUNT(iParam0);
	}
	return 0;
}

void func_923(var uParam0, bool bParam1)
{
	int iVar0;

	if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_12))
	{
		iVar0 = TASK::_GET_ENTITY_SCENARIO_POINT_IS_ATTACHED_TO(uParam0->f_12);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		ENTITY::SET_ENTITY_COLLISION(iVar0, bParam1, false);
	}
}

void func_924(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	ATTRIBUTE::_0xD962F8579D702DB5();
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "eOutputItem");
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "eCost");
	iVar2 = iVar0;
	ATTRIBUTE::_0xD962F8579D702DB5();
	if (func_88(iVar2, 0) && (func_106(uParam0, 2) || func_235(iVar2, uParam0->f_41)))
	{
		uParam0->f_26 = -1;
		uParam0->f_22 = 0;
		uParam0->f_61 = iVar2;
		uParam0->f_62 = iVar1;
		func_121(&(uParam0->f_1[1]), 1, 1);
		iVar3 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iNumCostVariants");
		if (iVar3 > 1)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_28, "variantVisible", 1);
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_28, "variantText", MISC::_CREATE_VAR_STRING(0, uParam0->f_61));
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_28, "variantCount", iVar3);
			iVar4 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iCurCostVariant");
			iVar5 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iIndex");
			if (iVar5 >= 0 && iVar5 < Global_1913694)
			{
				iVar6 = Global_1913694[iVar5 /*9*/].f_8;
			}
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_28, "variantIndex", (iVar4 + 1 - iVar6));
			func_40(uParam0, 4096);
			if (func_98(uParam0->f_1[5]))
			{
				func_131(uParam0->f_1[5], 1, 1, 1);
			}
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_28, "variantVisible", 0);
			func_222(uParam0, 4096);
			if (func_98(uParam0->f_1[5]))
			{
				func_131(uParam0->f_1[5], 0, 1, 1);
			}
		}
		if (!func_106(uParam0, 2))
		{
			uParam0->f_42 = BUILTIN::ROUND((ENTITY::GET_ANIM_DURATION(func_939(uParam0->f_61), func_940(uParam0->f_61)) * 1000f));
		}
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*uParam1, "bFireCrafting"))
		{
			func_40(uParam0, 8192);
		}
		else
		{
			func_222(uParam0, 8192);
		}
		uParam0->f_57 = *uParam1;
		uParam0->f_1[1] = func_266("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		func_671(uParam0, uParam0->f_61, uParam0->f_62);
		func_268(uParam0->f_1[1], 11, 1, 1);
		if (Global_1913694.f_1579 || !func_769(uParam0->f_61, uParam0->f_62, 1))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_28, "RPGDescription", func_933(iVar2));
			func_678(uParam0, 0);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_28, "RPGDescription", 0);
		}
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_28, "ShowRpgDescription"))
		{
			if (Global_1913694.f_1579 || !func_769(uParam0->f_61, uParam0->f_62, 1))
			{
				func_935(uParam0);
			}
		}
	}
}

char* func_925(var uParam0)
{
	if (func_106(uParam0, 128))
	{
		return "CAMP_REC_ALL";
	}
	return "CAMP_REC_AVL";
}

int func_926(char* sParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_242(iVar0, 2))
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
		func_243(iVar1, iParam1, sParam0, 0, 3, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 0, iParam2, joaat("SHORT_TIMED_EVENT"), 0);
		return iVar1;
	}
	return 0;
}

void func_927(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_98(iParam0))
	{
		return;
	}
	iVar0 = func_239(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1951255[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ALLOWED_ACTION(Global_1951255[iVar0 /*23*/].f_3, iParam1);
}

bool func_928(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	struct<2> Var0;

	*uParam2 = 0;
	*uParam3 = 0;
	if (!func_88(iParam0, 0))
	{
		return false;
	}
	if (!Global_1913694.f_1579 && !bParam5)
	{
		if (func_223(iParam0))
		{
			if (func_751(func_224(iParam0), iParam1))
			{
				return false;
			}
		}
		else if (func_769(iParam0, iParam1, 1))
		{
			return false;
		}
	}
	if (func_223(iParam0))
	{
		if (func_225(func_224(iParam0), iParam1, &Var0, 0, bParam7))
		{
			return true;
		}
	}
	else if (func_891(iParam0, 1, iParam1, &Var0, iParam4, bParam6, 0, bParam7))
	{
		return true;
	}
	*uParam2 = Var0;
	*uParam3 = Var0.f_1;
	return false;
}

bool func_929(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1099(func_1098());
	iVar1 = func_1099(iParam0);
	return iVar1 > iVar0;
}

bool func_930(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	bool bVar34;
	struct<2> Var35;
	int iVar38;
	bool bVar39;
	char* sVar40;
	char cVar41[16];
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	var uVar47;
	int iVar48;
	int iVar49;

	bVar34 = !bParam4;
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam2->f_40);
	iVar33 = 0;
	while (iVar33 < 4)
	{
		DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(uParam2->f_40, uParam2->f_35[iVar33]);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam2->f_30[iVar33], "visible", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam2->f_30[iVar33], "inUse", 0);
		iVar33++;
	}
	if (!bParam4 && func_477(iParam0, iParam1, &Var0, &iVar32, 1, 0))
	{
		iVar33 = 0;
		while (iVar33 < iVar32)
		{
			if (iVar33 >= 4)
			{
			}
			else
			{
				iVar31 = Var0[iVar33 /*2*/];
				if (func_88(iVar31, 0))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam2->f_30[iVar33], "visible", 1);
					if (func_372(iVar31, &Var35, joaat("INVENTORY"), 0, 0, 0))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_30[iVar33], "texture", Var35);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_30[iVar33], "textureDictionary", Var35.f_1);
					}
					iVar38 = func_92(iVar31, 0, 0, 0);
					bVar39 = iVar38 >= Var0[iVar33 /*2*/].f_1;
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam2->f_30[iVar33], "count", iVar38);
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam2->f_30[iVar33], "enabled", func_918(bVar39, 1, 0));
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam2->f_30[iVar33], "inUse", 1);
					if (!bVar39)
					{
						bVar34 = false;
					}
					sVar40 = MISC::_CREATE_VAR_STRING(10, "CRFT_ING_LIST", MISC::_CREATE_VAR_STRING(0, Var0[iVar33 /*2*/]), Var0[iVar33 /*2*/].f_1);
					StringCopy(&cVar41, "Text", 16);
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35[iVar33], &cVar41, sVar40);
					StringCopy(&cVar41, "Enabled", 16);
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam2->f_35[iVar33], &cVar41, func_918(bVar39, 1, 0));
					DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam2->f_40, -1, 309940639, uParam2->f_35[iVar33]);
				}
				iVar33++;
			}
		}
	}
	if (bVar34)
	{
		if (!func_106(uParam2, 4) && ((func_106(uParam2, 8192) || uParam2->f_62 == -214678071) || uParam2->f_62 == joaat("COST_CRAFTING_GRILL")))
		{
			bVar34 = false;
			if (func_245(iParam0))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_28, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_FIRE_CK"));
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_28, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_FIRE"));
			}
		}
		else
		{
			iVar43 = func_92(iParam0, 0, 0, 0);
			iVar44 = func_642(iParam0, 0);
			if (func_106(uParam2, 2) && !func_929(iParam0))
			{
				bVar34 = false;
				iVar45 = func_1098();
				if (iParam0 == iVar45)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_28, "tipText", MISC::_CREATE_VAR_STRING(2, "STEW_MADE"));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_28, "tipText", MISC::_CREATE_VAR_STRING(2, "STEW_MADE_BETTER"));
				}
			}
			else if ((iVar44 - iVar43) > 0 || iVar44 == -1)
			{
				iVar46 = func_296(iParam0, -1636519629);
				if (!func_419(2) && iVar46 == -701492487)
				{
					bVar34 = false;
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_28, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_CONS"));
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iParam3))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_28, "tipText", MISC::_CREATE_VAR_STRING(34, "CRFT_BREAK", 1, MISC::_CREATE_VAR_STRING(0, PLAYER::_0x0139637A3BFF8B6D(iParam3, &uVar47))));
				}
				else
				{
					iVar48 = func_226(iParam0, uParam2->f_62, func_417(), 0);
					if (func_106(uParam2, 2))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_28, "tipText", MISC::_CREATE_VAR_STRING(2, func_1100(iParam0)));
					}
					else if (uParam2->f_62 == -214678071)
					{
						if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam2->f_57, "iNumCostVariants") <= 1 && DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam2->f_28, "ShowRpgDescription"))
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_28, "tipText", MISC::_CREATE_VAR_STRING(2, "CAMP_MEAT_POOR"));
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_28, "tipText", MISC::_CREATE_VAR_STRING(2, "COOK_ING_HAVE", iVar48));
						}
					}
					else if (uParam2->f_62 == joaat("COST_CRAFTING_GRILL"))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_28, "tipText", MISC::_CREATE_VAR_STRING(2, "COOK_ING_HAVE", iVar48));
					}
					else if (iVar46 == -701492487)
					{
						if (iVar48 == 1)
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_28, "tipText", MISC::_CREATE_VAR_STRING(2, "BREW_ING_HAVE1", iVar48));
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_28, "tipText", MISC::_CREATE_VAR_STRING(2, "BREW_ING_HAVE", iVar48));
						}
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_28, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_HAVE", iVar48));
					}
				}
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_28, "tipText", MISC::_CREATE_VAR_STRING(130, "CRFT_ING_MAX", iVar43, iVar44, MISC::_CREATE_VAR_STRING(0, iParam0)));
				bVar34 = false;
			}
		}
	}
	else if (bParam4)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_28, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_LOCK"));
	}
	else if (!func_106(uParam2, 4) && ((func_106(uParam2, 8192) || uParam2->f_62 == -214678071) || uParam2->f_62 == joaat("COST_CRAFTING_GRILL")))
	{
		bVar34 = false;
		if (func_245(iParam0))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_28, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_FIRE_CK"));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_28, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_FIRE"));
		}
	}
	else if (func_106(uParam2, 2) && !func_929(iParam0))
	{
		iVar49 = func_1098();
		if (iParam0 == iVar49)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_28, "tipText", MISC::_CREATE_VAR_STRING(2, "STEW_MADE"));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_28, "tipText", MISC::_CREATE_VAR_STRING(2, "STEW_MADE_BETTER"));
		}
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_28, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_NEED"));
	}
	return bVar34;
}

void func_931(var uParam0)
{
	if (func_106(uParam0, 2))
	{
		if (!func_153(uParam0->f_61, -2011345500))
		{
			func_121(&(uParam0->f_1[7]), 1, 1);
			return;
		}
		if (!func_98(uParam0->f_1[7]))
		{
			uParam0->f_1[7] = func_266("CAMP_ADD_TASK", joaat("INPUT_GAME_MENU_RS"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		}
		if ((uParam0->f_26 > 0 || uParam0->f_61 == Global_1137047.f_339.f_16) || !func_929(uParam0->f_61))
		{
			func_131(uParam0->f_1[7], 0, 1, 1);
		}
		else
		{
			func_131(uParam0->f_1[7], 1, 1, 1);
		}
	}
}

bool func_932(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
				Jump @232; //curOff = 56
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
					Jump @232; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @232; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @232; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*iParam1 = iVar1;
					iParam1->f_1 = iVar2;
					iParam1->f_2 = iParam2;
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

int func_933(int iParam0)
{
	struct<19> Var0;

	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var0))
	{
		return Var0.f_1;
	}
	return 0;
}

void func_934(var uParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_28, "ShowRpgHorse", 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_28, "ShowRpgPlayer", 0);
}

void func_935(var uParam0)
{
	if ((func_153(uParam0->f_61, 1147021565) || func_106(uParam0, 2)) && !func_153(uParam0->f_61, 1919582297))
	{
		if (func_235(uParam0->f_61, 5))
		{
			ATTRIBUTE::_0x7E2C766ADB2C5F1A(uParam0->f_61, 2);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_28, "ShowRpgHorse", 1);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_28, "ShowRpgPlayer", 0);
		}
		else
		{
			ATTRIBUTE::_0x7E2C766ADB2C5F1A(uParam0->f_61, 1);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_28, "ShowRpgHorse", 0);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_28, "ShowRpgPlayer", 1);
		}
	}
	else
	{
		ATTRIBUTE::_0xD962F8579D702DB5();
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_28, "ShowRpgHorse", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_28, "ShowRpgPlayer", 0);
	}
}

void func_936(var uParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_28, "filterIndex");
	uParam0->f_41 = iVar0;
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_28, "filter", func_917(uParam0->f_41));
}

int func_937(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	if (WEAPON::_IS_WEAPON_PISTOL(iVar0))
	{
		return joaat("S_AMMO_9MM");
	}
	else if (WEAPON::_IS_WEAPON_REVOLVER(iVar0))
	{
		return joaat("S_AMMO_45MM");
	}
	else if (WEAPON::_IS_WEAPON_RIFLE(iVar0))
	{
		return joaat("S_AMMO_RIFLE");
	}
	else if (WEAPON::_IS_WEAPON_REPEATER(iVar0))
	{
		return joaat("S_AMMO_REPEATER");
	}
	else if (WEAPON::_IS_WEAPON_SHOTGUN(iVar0))
	{
		return joaat("S_AMMO_SHOTGUN");
	}
	return 0;
}

Vector3 func_938(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	if (WEAPON::_IS_WEAPON_PISTOL(iVar0))
	{
		return 0f, 0f, 0f;
	}
	else if (WEAPON::_IS_WEAPON_REVOLVER(iVar0))
	{
		return -0.005f, 0f, 0f;
	}
	else if (WEAPON::_IS_WEAPON_RIFLE(iVar0))
	{
		return -0.03f, 0f, 0f;
	}
	else if (WEAPON::_IS_WEAPON_REPEATER(iVar0))
	{
		return 0.005f, 0f, 0f;
	}
	else if (WEAPON::_IS_WEAPON_SHOTGUN(iVar0))
	{
		return 0f, 0f, 0f;
	}
	return 0f, 0f, 0f;
}

char* func_939(var uParam0)
{
	if (PED::IS_PED_MALE(Global_34))
	{
		return "MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A";
	}
	return "MP_AMB_PLAYER@CRAFTING@FALLBACKS@IN_HAND@FEMALE_A";
}

char* func_940(var uParam0)
{
	return "craft_trans_stow";
}

var func_941(int iParam0)
{
	var uVar0;

	SCRIPTS::_0x31010318BA9897AC(&uVar0, iParam0);
	return uVar0;
}

void func_942(int iParam0, struct<5> Param1, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam15))
	{
		return;
	}
	if (!func_688(0))
	{
		return;
	}
	Param1 = 10;
	Param1.f_1 = PLAYER::PLAYER_ID();
	Param1.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Param1.f_4 = iParam0;
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param1, 14, 13, &uParam15);
}

void func_943(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		if ((!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1134390[iVar0 /*83*/].f_38.f_28.f_2) || Global_1134390[iVar0 /*83*/].f_38.f_28.f_2 == iParam0) || bParam1)
		{
			Global_1134390[iVar0 /*83*/].f_38.f_28.f_2 = 255;
			Global_1134390[iVar0 /*83*/].f_38.f_28.f_3 = -1;
		}
	}
}

void func_944(int iParam0, var uParam1)
{
	struct<7> Var0;
	struct<5> Var7;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	CLOCK::_GET_POSIX_TIME_STRUCT(&Var0);
	Var7.f_3 = 2;
	Var7.f_4 = 24;
	CLOCK::_ADD_TIME_TO_DATE_TIME(&Var0, &Var7, &Var0);
	Global_1134390[iParam0 /*83*/].f_38.f_28.f_1 = uParam1;
	Global_1137047.f_339.f_1 = uParam1;
	Global_1137047.f_339.f_9 = { Var0 };
}

int func_945(int iParam0)
{
	if (!GANG::_0xD6F6ACF4392187FB(iParam0))
	{
		return -1;
	}
	if (iParam0 == GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))
	{
		return func_360(PLAYER::PLAYER_ID());
	}
	return func_1101(GANG::_0x4BE6C13A45CCA8EC(iParam0));
}

void func_946(int iParam0, var uParam1)
{
	struct<14> Var0;

	Var0.f_8 = iParam0;
	Var0.f_12 = uParam1;
	func_942(17, Var0, func_363(0, 8));
}

void func_947(var uParam0)
{
	struct<14> Var0;

	Var0.f_12 = uParam0;
	func_942(13, Var0, func_941(GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))));
}

Vector3 func_948(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1134390[func_984() /*83*/].f_38;
	}
	return Global_1134390[iParam0 /*83*/].f_38;
}

bool func_949(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_71(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_631(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_950(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam0 != 0)
	{
		iVar5 = func_165(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_695(iParam0);
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

bool func_951(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_952(bool bParam0)
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

void func_953(int iParam0)
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

void func_954(bool bParam0)
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

void func_955(bool bParam0)
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

void func_956(bool bParam0)
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

void func_957(bool bParam0)
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

void func_958(bool bParam0)
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

void func_959(bool bParam0)
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

bool func_960()
{
	return true;
	if (Global_1572887.f_13 == 0)
	{
		return true;
	}
	return Global_39.f_1;
}

var func_961(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

int func_962()
{
	return Global_1902818;
}

void func_963(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_1102(*iParam0);
	iVar1 = func_1103(*iParam0);
	iVar2 = func_1104(*iParam0);
	iVar3 = func_1105(*iParam0);
	iVar4 = func_1106(*iParam0);
	iVar5 = func_1107(*iParam0);
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
	iVar6 = func_1108(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_1108(iVar1, iVar0);
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
	func_1109(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_964(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_1110())
	{
		Global_1913504.f_125 = MISC::GET_GAME_TIMER();
		Global_1913504.f_126 = iParam1;
	}
	Global_1913504.f_127 = (Global_1913504.f_127 + iParam0);
}

bool func_965()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

bool func_966()
{
	return DLC::IS_DLC_PRESENT(joaat("DLC_ULTIMATEEDITION"));
}

int func_967(int iParam0)
{
	int iVar0;

	if (!func_88(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_165(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar0);
}

int func_968(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_97(iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_969(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_1111(iParam0, iParam1, iParam2, iParam3);
}

int func_970(int* iParam0)
{
	return func_1112(iParam0->f_1);
}

int func_971(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_1113(iVar0, 1, 0);
		if (!func_472(iParam0, iVar33, &Var2, &iVar1, 0, 1))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_1114(Var2[iVar34 /*2*/]))
				{
					if (!bParam1 || func_92(Var2[iVar34 /*2*/], 0, 1, 1) > 0)
					{
						return iVar33;
					}
					Jump @134; //curOff = 106
				}
				else if (Var2[iVar34 /*2*/] == 0)
				{
				}
				else
				{
					iVar34++;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_972(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	struct<2> Var9[15];
	int iVar40;
	int iVar41;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar40 = func_1113(iVar0, 0, 1);
		if (!func_472(iParam0, iVar40, &Var9, &iVar1, 0, 1))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_1115(Var9[iVar41 /*2*/]))
				{
					if (!bParam1 || func_92(Var9[iVar41 /*2*/], 0, 1, 1) > 0)
					{
						bVar8 = true;
					}
				}
				else if (Var9[iVar41 /*2*/] == joaat("CURRENCY_CASH") || Var9[iVar41 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
				{
					if ((bParam2 && Var9[iVar41 /*2*/] == joaat("CURRENCY_CASH")) || (!bParam2 && Var9[iVar41 /*2*/] == joaat("CURRENCY_GOLD_BAR")))
					{
						if (iVar4 == 0 || (bVar6 && Var9[iVar41 /*2*/].f_1 < iVar2))
						{
							iVar5 = iVar40;
							iVar3 = Var9[iVar41 /*2*/].f_1;
							iVar7 = 1;
						}
					}
					else if (iVar4 == 0 || Var9[iVar41 /*2*/].f_1 < iVar2)
					{
						iVar5 = iVar40;
						iVar3 = Var9[iVar41 /*2*/].f_1;
						iVar7 = 0;
					}
				}
				else if (Var9[iVar41 /*2*/] == 0)
				{
				}
				else
				{
					iVar41++;
				}
			}
			if (bVar8 && iVar5 != 0)
			{
				iVar4 = iVar5;
				iVar2 = iVar3;
				bVar6 = iVar7;
			}
		}
		iVar0++;
	}
	return iVar4;
}

int func_973(int iParam0)
{
	return (iParam0 / 100);
}

void func_974(char* sParam0)
{
	Global_1915715.f_22470 = func_164(sParam0, 10000, 0, 0, 0, 1);
}

bool func_975(int* iParam0, var uParam1, int iParam2, var uParam3, int iParam4, var uParam5, bool bParam6)
{
	int iVar0;

	if (*uParam5 < iParam4)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if ((*uParam3)[iVar0 /*2*/] == 0 || (uParam3[iVar0 /*2*/])->f_1 == 0)
		{
			Jump @101; //curOff = 54
		}
		else if (!func_1116((*uParam3)[iVar0 /*2*/], (uParam3[iVar0 /*2*/])->f_1, uParam5[iVar0 /*42*/]))
		{
			return false;
		}
		iVar0++;
	}
	return func_1117(iParam0, uParam1, uParam5, iParam2, bParam6);
}

int func_976(int iParam0, int iParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if (!func_484(iParam0, 2))
	{
		return 0;
	}
	if ((bParam2 && func_107() == 0) && !UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
	{
		return 1;
	}
	if (!func_1118(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return 0;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar13))
		{
			return 1;
		}
		iVar12++;
	}
	return 0;
}

bool func_977(int iParam0, int iParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_88(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		return false;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = Var0.f_36[iVar47];
		iVar47++;
	}
	return true;
}

bool func_978(int iParam0, bool bParam1)
{
	if (!func_153(iParam0, 947377998))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_153(iParam0, -1090933859))
		{
			return func_498(iParam0, 1) != 0;
		}
		if ((func_769(iParam0, -915411861, 0) || func_769(iParam0, 600942249, 0)) || func_769(iParam0, -570078785, 0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

bool func_979(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;

	iVar0 = func_1119(iParam0, 1);
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_751(iVar0, -2141192156))
	{
		return false;
	}
	if (bParam1)
	{
		if (!func_225(iVar0, -2141192156, &uVar1, 0, 0))
		{
			return false;
		}
	}
	return true;
}

int func_980(int* iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;

	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		iVar2 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0);
		Var3.f_9 = 1;
		Var3.f_11 = -1591664384;
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ITEM_INFO(*iParam0, iVar1, &Var3))
			{
			}
			else if (iParam1 != Var3.f_13)
			{
			}
			else
			{
				iVar0 = (iVar0 + (func_487(Var3.f_8, iParam1, 1, 0, 1, 0) * Var3.f_9));
			}
			iVar1++;
		}
	}
	return iVar0;
}

bool func_981(int iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	bool bVar35;

	if (!func_1120(iParam0, iParam2, &Var0, &iVar31, 1, 0))
	{
		return false;
	}
	bVar35 = ((!bParam4 && func_76(0)) && !func_77());
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (Var0[iVar34 /*2*/] == 0 || Var0[iVar34 /*2*/] == 1412640604)
		{
		}
		else
		{
			iVar32 = (Var0[iVar34 /*2*/].f_1 * iParam1);
			if (Var0[iVar34 /*2*/] == joaat("CURRENCY_CASH") && func_473(iVar32))
			{
				Jump @217; //curOff = 139
			}
			else if (Var0[iVar34 /*2*/] == joaat("CURRENCY_GOLD_BAR") && func_474(iVar32))
			{
			}
			else
			{
				iVar33 = func_92(Var0[iVar34 /*2*/], 0, !bVar35, 0);
				if (iVar33 >= iVar32)
				{
				}
				else
				{
					*uParam3 = { Var0[iVar34 /*2*/] };
					return false;
				}
			}
			iVar34++;
		}
	}
	return true;
}

bool func_982(int* iParam0, var uParam1, int iParam2, var uParam3, int iParam4, var uParam5, bool bParam6, int iParam7)
{
	int iVar0;

	if (*uParam5 < iParam4)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if ((*uParam3)[iVar0 /*2*/] == 0 || (uParam3[iVar0 /*2*/])->f_1 == 0)
		{
			Jump @106; //curOff = 54
		}
		else if (!func_1116((*uParam3)[iVar0 /*2*/], ((uParam3[iVar0 /*2*/])->f_1 * uParam1->f_9), uParam5[iVar0 /*42*/]))
		{
			return false;
		}
		iVar0++;
	}
	return func_1121(iParam0, uParam1, uParam5, iParam2, bParam6, iParam7);
}

bool func_983(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_984()
{
	return Global_1102219.f_3672;
}

void func_985(int iParam0, int iParam1)
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

void func_986(var uParam0, int iParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_745(uParam0))
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

int func_987(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

bool func_988(int iParam0)
{
	if (!func_379(iParam0, 1955773996))
	{
		return false;
	}
	if (!func_1122(iParam0, 1))
	{
		return false;
	}
	return true;
}

int func_989(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_1123(INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iParam0), iParam1, iParam2, bParam3, iParam4);
}

bool func_990(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_1124(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 77)
	{
		iVar1 = func_1125(iVar0, 1);
		iVar2 = iVar1;
		if (iParam0 == iVar2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_991(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iParam0 = func_340(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = func_1126(iParam1);
	if (iVar0 != 0)
	{
		iVar1 = func_1127(iVar0, 1);
		if (iVar1 > -1)
		{
			iVar2 = Global_1904087.f_402[iVar1];
			if (iVar2 > 0)
			{
				iVar3 = iParam2;
				if (iVar3 > iVar2)
				{
					iVar3 = iVar2;
				}
				if (!func_1128(iVar3, 0))
				{
				}
				Global_1904087.f_402[iVar1] = (Global_1904087.f_402[iVar1] - iVar3);
				return true;
			}
		}
	}
	return false;
}

bool func_992(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return iParam1;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return iParam1;
	}
	return func_1129(iVar0, bParam2) >= func_1130(bParam2);
}

int func_993(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return iParam2;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = 2;
	while (iVar0 >= 0)
	{
		if (iParam0 != PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::PLAYER_ID()) || NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
		{
			iVar1 = PED::_0x0CEEB6F4780B1F2F(iParam0, iVar0);
			if (iVar1 == iParam1)
			{
				PED::_0x627F7F3A0C4C51FF(iParam0, iParam1);
				iParam2 = (iParam2 - 1);
			}
		}
		else
		{
			iVar1 = Global_1291106[PLAYER::PLAYER_ID() /*19*/].f_15[iVar0];
			if (iVar1 == iParam1)
			{
				Global_1291106[PLAYER::PLAYER_ID() /*19*/].f_15[iVar0] = 0;
				iParam2 = (iParam2 - 1);
			}
		}
		if (iParam2 <= 0)
		{
		}
		else
		{
			iVar0 = (iVar0 + -1);
		}
	}
	return iParam2;
}

int func_994(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::_0x9A100F1CF4546629(iParam0) || ENTITY::_0xC346A546612C49A9(iParam0))
	{
		iVar0 = func_256(&iParam0);
		if (!func_88(iVar0, 0))
		{
			iVar0 = func_257(iParam0);
		}
	}
	else
	{
		iVar0 = func_257(iParam0);
	}
	return iVar0;
}

bool func_995(int iParam0, int iParam1)
{
	*iParam1 = func_1131(iParam0);
	return *iParam1 != 0;
}

void func_996(var uParam0, var uParam1)
{
	MISC::_COPY_MEMORY(uParam1, uParam0, 96);
}

int func_997(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_995(iParam0, &iVar1))
	{
		iParam0 = iVar1;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_SATCHEL_DATA(iParam0, &iVar0))
	{
		return -1;
	}
	switch (iVar0)
	{
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 4;
		case 4:
			return 8;
		default:
			break;
	}
	return -1;
}

int func_998(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_FISH_BLUEGILL_POOR"):
		case joaat("PROVISION_FISH_BLUEGILL"):
			return joaat("AT_FBLUEGIL");
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH"):
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_POOR"):
			return joaat("AT_FBULLHEADCATFISH");
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_POOR"):
		case joaat("PROVISION_FISH_CHAIN_PICKEREL"):
			return joaat("AT_FCHAINPICKEREL");
		case joaat("PROVISION_FISH_CHANNEL_CATFISH_POOR"):
		case joaat("PROVISION_FISH_CHANNEL_CATFISH"):
			return joaat("AT_FCHANNELCATFISH");
		case joaat("PROVISION_FISH_LAKE_STURGEON"):
		case joaat("PROVISION_FISH_LAKE_STURGEON_POOR"):
			return joaat("AT_FLAKESTURGEON");
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS"):
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_POOR"):
			return joaat("AT_FLARGEMOUTHBASS");
		case joaat("PROVISION_FISH_LONGNOSE_GAR_POOR"):
		case joaat("PROVISION_FISH_LONGNOSE_GAR"):
			return joaat("AT_FLONGNOSEGAR");
		case joaat("PROVISION_FISH_MUSKIE"):
		case joaat("PROVISION_FISH_MUSKIE_POOR"):
			return joaat("AT_FMUSKIE");
		case joaat("PROVISION_FISH_NORTHERN_PIKE"):
		case joaat("PROVISION_FISH_NORTHERN_PIKE_POOR"):
			return joaat("AT_FNORTHERNPIKE");
		case joaat("PROVISION_FISH_PERCH_POOR"):
		case joaat("PROVISION_FISH_PERCH"):
			return joaat("AT_FPERCH");
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_POOR"):
		case joaat("PROVISION_FISH_REDFIN_PICKEREL"):
			return joaat("AT_FREDFINPICKEREL");
		case joaat("PROVISION_FISH_ROCK_BASS_POOR"):
		case joaat("PROVISION_FISH_ROCK_BASS"):
			return joaat("AT_FROCKBASS");
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_POOR"):
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS"):
			return joaat("AT_FSMALLMOUTHBASS");
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_POOR"):
		case joaat("PROVISION_FISH_SOCKEYE_SALMON"):
			return joaat("AT_FSALMONSOCKEYE");
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_POOR"):
		case joaat("PROVISION_FISH_STEELHEAD_TROUT"):
			return joaat("AT_FRAINBOWTROUT");
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			return joaat("AT_BAT");
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_HIGH_QUALITY"):
			return joaat("AT_BLUEJAY");
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_POOR"):
			return joaat("AT_BULLFROG");
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			return joaat("AT_CEDARWAXWING");
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_POOR"):
			return joaat("AT_CORMORANT");
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_HIGH_QUALITY"):
			return joaat("AT_CAROLINAPARAKEET");
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			return joaat("AT_CROW");
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_HIGH_QUALITY"):
			return joaat("AT_SQUIRREL");
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_POOR"):
			return joaat("AT_CARDINAL");
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_HIGH_QUALITY"):
			return joaat("AT_CHIPMUNK");
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_POOR"):
			return joaat("AT_CRAB");
		case joaat("PROVISION_ANIMAL_CARCASS_CRAWFISH_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAWFISH_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAWFISH_HIGH_QUALITY"):
			return joaat("AT_CRAYFISH");
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_HIGH_QUALITY"):
			return joaat("AT_GILAMONSTER");
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_PERFECT"):
			return joaat("AT_IGUANA");
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_HIGH_QUALITY"):
			return joaat("AT_ORIOLE");
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_PERFECT"):
			return joaat("AT_PIGEON");
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_POOR"):
			return joaat("AT_QUAIL");
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			return joaat("AT_RAT");
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_PERFECT"):
			return joaat("AT_REDFOOTEDBOOBY");
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_HIGH_QUALITY"):
			return joaat("AT_ROBIN");
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_PERFECT"):
			return joaat("AT_ROSESPOONBILL");
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			return joaat("AT_SPARROW");
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_POOR"):
			return joaat("AT_SONGBIRD");
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			return joaat("AT_TOAD");
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_POOR"):
			return joaat("AT_WOODPECKER_PILEATED");
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_HIGH_QUALITY"):
			return joaat("AT_GATOR");
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_POOR"):
			return joaat("AT_ARMADILLO");
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_PERFECT"):
			return joaat("AT_BADGER");
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_POOR"):
			return joaat("AT_BEAVER");
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_POOR"):
			return joaat("AT_SHEEP");
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_PERFECT"):
			return joaat("AT_BUCK");
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_POOR"):
			return joaat("AT_CALIFORNIACONDOR");
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_POOR"):
			return joaat("AT_CHICKEN");
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_PERFECT"):
			return joaat("AT_COUGAR");
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_POOR"):
			return joaat("AT_COYOTE");
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_PERFECT"):
			return joaat("AT_CRANE");
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY"):
			return joaat("AT_DEER");
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR"):
			return joaat("AT_DUCK");
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_HIGH_QUALITY"):
			return joaat("AT_EAGLE");
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_POOR"):
			return joaat("AT_EGRET");
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_PERFECT"):
			return joaat("AT_FOX");
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_HIGH_QUALITY"):
			return joaat("AT_GOAT");
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_HIGH_QUALITY"):
			return joaat("AT_GOOSE");
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_POOR"):
			return joaat("AT_HAWK");
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_PERFECT"):
			return joaat("AT_HERON");
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_HIGH_QUALITY"):
			return joaat("AT_LOON");
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_PERFECT"):
			return joaat("AT_MUSKRAT");
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_POOR"):
			return joaat("AT_POSSUM");
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_POOR"):
			return joaat("AT_OWL");
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_HIGH_QUALITY"):
			return joaat("AT_PANTHER");
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_POOR"):
			return joaat("AT_PARROT");
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_PERFECT"):
			return joaat("AT_PELICAN");
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_HIGH_QUALITY"):
			return joaat("AT_PHEASANT");
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_POOR"):
			return joaat("AT_PIG");
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_POOR"):
			return joaat("AT_CHICKEN_PRAIRIE");
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT"):
			return joaat("AT_PRONGHORN");
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_HIGH_QUALITY"):
			return joaat("AT_RABBIT");
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_POOR"):
			return joaat("AT_RACCOON");
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_POOR"):
			return joaat("AT_RAM_DESERT");
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_POOR"):
			return joaat("AT_RAVEN");
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_HIGH_QUALITY"):
			return joaat("AT_ROOSTER");
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_HIGH_QUALITY"):
			return joaat("AT_SEAGULL");
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_HIGH_QUALITY"):
			return joaat("AT_SHEEP");
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"):
			return joaat("AT_SKUNK");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_POOR"):
			return joaat("AT_SNAKE_BLACK");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_HIGH_QUALITY"):
			return joaat("AT_SNAKE_BOA");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_POOR"):
			return joaat("AT_SNAKE_COPPER_NORTH");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_PERFECT"):
			return joaat("AT_SNAKE_FERDELANCE");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_PERFECT"):
			return joaat("AT_SNAKE_BLACK");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_PERFECT"):
			return joaat("AT_SNAKE_WATER");
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR"):
			return joaat("AT_TURKEY");
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_POOR"):
			return joaat("AT_TURTLE_SNAP");
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_PERFECT"):
			return joaat("AT_VULTURE");
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_PERFECT"):
			return joaat("AT_WOLF");
		default:
			break;
	}
	return joaat("SMALL_ANIMALS");
}

void func_999(int iParam0, int iParam1)
{
	int iVar0;

	if (func_107() == -1)
	{
		iVar0 = func_177(7);
	}
	else
	{
		iVar0 = PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::PLAYER_ID());
	}
	func_993(iVar0, iParam0, iParam1);
}

bool func_1000(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_88(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_339(0) };
	Var0.f_4 = 724026534;
	Var5 = { func_281(iParam0, Var0, Var0.f_4, 0) };
	return func_282(iParam0, &Var5, &Var0, iParam1, iParam3, bParam2, 0);
}

bool func_1001(var uParam0)
{
	if (!func_1132(uParam0))
	{
		return false;
	}
	return INVENTORY::_0x0137C77A2EC64536(uParam0);
}

bool func_1002(struct<2> Param0, var uParam2)
{
	if (!func_86(Param0))
	{
		return false;
	}
	func_1133(uParam2);
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

bool func_1003(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541.f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (DATAFILE::_0x603AC35FD4602C76(*uParam0) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

int func_1004()
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

int func_1005()
{
	return Global_1109804.f_5737.f_632;
}

int func_1006(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam0 > iParam1)
	{
		return -1;
	}
	iVar0 = ((iParam0 + iParam1) / 2);
	if (*iParam2 < Global_1109804.f_5737.f_451[iVar0 /*2*/])
	{
		return func_1006(iParam0, (iVar0 - 1), iParam2);
	}
	if (*iParam2 > Global_1109804.f_5737.f_451[iVar0 /*2*/])
	{
		return func_1006(iVar0 + 1, iParam1, iParam2);
	}
	return iVar0;
}

var func_1007(int iParam0)
{
	return Global_1109804.f_5737.f_451[iParam0 /*2*/].f_1;
}

bool func_1008(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 70);
}

bool func_1009(var uParam0)
{
	var uVar0;
	var uVar1;

	uVar0 = func_1134();
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

bool func_1010(struct<5> Param0, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	Param0.f_2 = iParam6;
	Param0.f_3 = iParam7;
	Param0.f_4 = iParam8;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(bParam5, &Param0))
	{
		return false;
	}
	return true;
}

struct<8> func_1011(struct<5> Param0)
{
	return func_1135(Param0, 52, 1);
}

int func_1012(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_RHODES_2"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_RHODES_3"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_RHODES_1"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_RHODES_4"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_RHODES_5"):
			return 0;
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_VALENTINE_5"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_VALENTINE_2"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_VALENTINE_1"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_VALENTINE_4"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_VALENTINE_3"):
			return 1;
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_BLACKWATER_5"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_BLACKWATER_2"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_BLACKWATER_4"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_BLACKWATER_3"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_BLACKWATER_1"):
			return 2;
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_TUMBLEWEED_2"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_TUMBLEWEED_1"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_TUMBLEWEED_4"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_TUMBLEWEED_3"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_TUMBLEWEED_5"):
			return 3;
		default:
			break;
	}
	return -1;
}

bool func_1013(struct<2> Param0, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_86(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_1136(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

bool func_1014(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_823(iParam0))
		{
			return false;
		}
	}
	if (Global_1572887.f_13 != -1)
	{
		return (Global_17411[iParam0] && iParam1) != 0;
	}
	return (Global_39.f_4667[iParam0] && iParam1) != 0;
}

bool func_1015(int iParam0)
{
	if (!func_823(iParam0))
	{
		return false;
	}
	return func_1014(iParam0, 2, 1);
}

int func_1016(bool bParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1102219.f_16)
	{
		return 0;
	}
	if (!func_1137())
	{
		return 0;
	}
	if (!func_354())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_1019(&Global_0, 8);
	}
	func_1019(&Global_0, 1);
	return 1;
}

int func_1017(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 9:
		case 10:
		case 14:
		case 17:
		case 22:
		case 23:
		case 25:
		case 26:
		case 31:
		case 33:
		case 36:
		case 37:
			return 1;
		default:
			return 0;
	}
	return 0;
}

void func_1018(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			func_140(239, 0);
			break;
		case 16:
			func_140(240, 0);
			break;
		case 34:
			func_140(241, 0);
			break;
		case 52:
			func_140(242, 0);
			break;
		case 2:
			func_140(243, 0);
			break;
		case 3:
			func_140(244, 0);
			break;
		case 53:
			func_140(245, 0);
			break;
		case 15:
			func_140(246, 0);
			break;
		case 24:
			func_140(247, 0);
			break;
		case 38:
			func_140(248, 0);
			break;
		case 27:
			func_140(249, 0);
			break;
		case 13:
			func_140(250, 0);
			break;
		case 19:
			func_140(251, 0);
			break;
		case 20:
			func_140(252, 0);
			break;
		case 35:
			func_140(253, 0);
			break;
		case 39:
			func_140(254, 0);
			break;
		case 50:
			func_140(255, 0);
			break;
		case 7:
			func_140(256, 0);
			break;
		case 21:
			func_140(257, 0);
			break;
		case 18:
			func_140(258, 0);
			break;
		case 6:
			func_140(259, 0);
			break;
		case 30:
			func_140(260, 0);
			break;
		case 49:
			func_140(261, 0);
			break;
		case 11:
			break;
		case 4:
			func_140(263, 0);
			break;
		case 8:
			func_140(264, 0);
			break;
		case 29:
			func_140(265, 0);
			break;
		case 32:
			func_140(266, 0);
			break;
		case 12:
			func_140(267, 0);
			break;
		case 28:
			func_140(268, 0);
			break;
		case 51:
			func_140(269, 0);
			break;
	}
}

void func_1019(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1020()
{
	return Global_1952637.f_1675;
}

int func_1021(bool bParam0)
{
	struct<4> Var0;
	int iVar14;
	struct<4> Var15;
	int iVar19;
	int iVar20;
	int iVar21;
	struct<14> Var22;

	Var0.f_9 = -1591664384;
	iVar14 = 0;
	Var15 = { func_281(joaat("WARDROBE"), func_339(1), 1034665895, 1) };
	iVar19 = func_601(Var15, 552979403, 1, -1);
	if (iVar19 != 0)
	{
		if (iVar19 == joaat("CLOTHING_MP_FEMALE_PLAYER_CHARACTER"))
		{
			iVar14 = joaat("MPC_PLAYER_TYPE_MP_FEMALE");
		}
		else if (iVar19 == joaat("CLOTHING_MP_MALE_PLAYER_CHARACTER"))
		{
			iVar14 = joaat("MPC_PLAYER_TYPE_MP_MALE");
		}
		return iVar14;
	}
	Var22 = { func_388(0, -1591664384, 552979403, -1591664384, 0, 0, 0) };
	if (func_391(&Var22, &iVar20, &iVar21, 1))
	{
		if (iVar21 > 0 && func_207(&Var0, 0, iVar20, iVar21))
		{
			if (Var0.f_4 == joaat("CLOTHING_MP_FEMALE_PLAYER_CHARACTER"))
			{
				iVar14 = joaat("MPC_PLAYER_TYPE_MP_FEMALE");
			}
			else if (Var0.f_4 == joaat("CLOTHING_MP_MALE_PLAYER_CHARACTER"))
			{
				iVar14 = joaat("MPC_PLAYER_TYPE_MP_MALE");
			}
			else
			{
				func_209(iVar20);
				return 0;
			}
			if (bParam0)
			{
				func_602(Var0, 1, 0);
			}
			func_209(iVar20);
			return iVar14;
		}
		func_209(iVar20);
	}
	return 0;
}

int func_1022(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 217155793 /* GXTEntry: "Outfit One" */;
		case 2:
			return 97391779 /* GXTEntry: "Outfit Two" */;
		case 3:
			return -808817534 /* GXTEntry: "Outfit Three" */;
		case 4:
			return 1270922359 /* GXTEntry: "Outfit Four" */;
		case 5:
			return -2011879201 /* GXTEntry: "Outfit Five" */;
		case 6:
			return -1063340820 /* GXTEntry: "Outfit Six" */;
		case 7:
			return 2127262701;
		case 8:
			return -1323870201 /* GXTEntry: "Outfit Eight" */;
		case 9:
			return 1632140501 /* GXTEntry: "Outfit Nine" */;
		case 10:
			return 967218463 /* GXTEntry: "Outfit Ten" */;
		default:
			break;
	}
	return 0;
}

bool func_1023(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;

	if (*uParam1 <= 0)
	{
		*uParam1 = 0;
		return false;
	}
	if (Global_1952637.f_3334.f_26 <= 1)
	{
		Global_1952637.f_3334.f_26 = 0;
		*uParam1 = 0;
		Global_1952637.f_3334[0] = 0;
		return true;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1952637.f_3334.f_26 - 1))
	{
		if (iParam0 == Global_1952637.f_3334[iVar0])
		{
			bVar1 = true;
		}
		if (bVar1 && iVar0 < (Global_1952637.f_3334.f_26 - 1))
		{
			Global_1952637.f_3334[iVar0] = Global_1952637.f_3334[iVar0 + 1];
		}
		iVar0++;
	}
	if (bVar1)
	{
		Global_1952637.f_3334.f_26 = (Global_1952637.f_3334.f_26 - 1);
		*uParam1 = (*uParam1 - 1);
		Global_1952637.f_3334[Global_1952637.f_3334.f_26] = 0;
		func_838(iParam0, 1, bParam2);
	}
	return bVar1;
}

bool func_1024(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<4> Var4;
	int iVar11;

	iVar11 = 0;
	Var4 = func_1030(iParam6);
	Var4.f_1 = iParam1;
	Var4.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var4);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		return false;
	}
	DATAFILE::_0xA63CD20F19B961AB(&bVar2, &Var4, -1516819610);
	DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 2049745650);
	*uParam2 = bVar2;
	if (!bVar2 && !bParam3)
	{
		func_1139(uParam0, func_1138(iVar0), 1, 1, bParam7);
	}
	if (bVar2)
	{
		if (iParam9 != 8)
		{
			func_595(-1);
		}
		if (DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, -1212855483))
		{
			iVar11 = func_1138(iVar0);
		}
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_260(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, joaat("COMPONENT")))
			{
			}
			else
			{
				uParam0->f_1[iVar1 /*3*/] = iVar0;
				if (bVar2)
				{
					func_1140(iVar3, 16, 6);
				}
				if (bParam5)
				{
					if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1441384))
					{
						uParam0->f_1[iVar1 /*3*/].f_1 = joaat("BASE");
					}
					else
					{
						Jump @362; //curOff = 297
						if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1194786549))
						{
							if (func_1141(iVar3) && func_869(uParam0->f_1[iVar1 /*3*/], iVar3, &iVar0))
							{
								uParam0->f_1[iVar1 /*3*/].f_1 = iVar0;
							}
						}
						else
						{
							uParam0->f_1[iVar1 /*3*/].f_1 = iVar0;
						}
					}
					iVar1 = 16;
					if (bVar2)
					{
						if (!bParam8)
						{
							func_1143(uParam0, iVar11, func_1142(iParam1) != 0, iParam9);
						}
					}
					else if ((((func_588() == joaat("MPC_PLAYER_TYPE_MP_FEMALE") && uParam0->f_1[iVar1 /*3*/] == Global_1952637.f_83[iVar1 /*12*/]) && func_1142(uParam0->f_1[34 /*3*/]) == 0) && !func_324(32)) && !func_324(64))
					{
						uParam0->f_1[iVar1 /*3*/] = func_1036(-1293064293, 0);
						uParam0->f_1[iVar1 /*3*/].f_1 = joaat("BASE");
						func_598(uParam0, uParam0->f_1[iVar1 /*3*/], iVar1, 0, iParam9);
					}
					if (bParam4)
					{
						*uParam0 = iParam1;
					}
					return true;
				}
			}
		}
	}
}

void func_1025(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

bool func_1026(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1027(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_1028(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1029(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_1030(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_588();
	}
	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		return -1806335803;
	}
	else if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		return -971050805;
	}
	return 0;
}

void func_1031(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	iVar1 = uParam0->f_1[iVar0 /*3*/];
	if (func_153(iVar1, 160827531) || func_165(iVar1) == 81053684)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam2);
	}
}

void func_1032(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 11;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_153(uParam0->f_1[iVar0 /*3*/], -93469181))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam2);
	}
}

void func_1033(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 10;
	if (-525676072 == func_165(uParam0->f_1[iVar0 /*3*/]))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam2);
	}
}

bool func_1034(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_165(iParam0);
	if (iParam2 == 0)
	{
		return (iVar0 == 1759215194 || iVar0 == 344283346);
	}
	return (!bParam1 && (iVar0 == -1740828670 || iVar0 == 344283346));
}

bool func_1035(int iParam0)
{
	return (Global_17411.f_55.f_644.f_1734 && iParam0) != 0;
}

int func_1036(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;

	iVar2 = 0;
	Var3 = { func_388(0, -1591664384, iParam0, -1591664384, 0, 0, 0) };
	if (func_391(&Var3, &iVar0, &iVar1, 1))
	{
		if (iVar1 > 0)
		{
			iVar2 = func_1144(iVar0, iVar1, iParam1);
		}
		func_209(iVar0);
	}
	return iVar2;
}

void func_1037(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	if ((uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_153(iParam2, -1527414429)) && !func_153(uParam0->f_1[iVar0 /*3*/], -1303648999))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam3);
	}
	iVar0 = 16;
	if ((uParam0->f_1[iVar0 /*3*/].f_1 == 1530758430 || uParam0->f_1[iVar0 /*3*/].f_1 == 1334603721) && func_153(iParam2, -985549034))
	{
		if (uParam0->f_1[iVar0 /*3*/].f_1 == 1530758430)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
			func_596(iVar0, iParam3);
		}
		else if (uParam0->f_1[iVar0 /*3*/].f_1 == 1334603721)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -1539589426;
			func_596(iVar0, iParam3);
		}
	}
}

void func_1038(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam3);
	}
	if (uParam0->f_1[iParam2 /*3*/].f_1 != -2081918609)
	{
		iVar0 = 34;
		iVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_153(iVar1, 1583165364))
		{
			uParam0->f_1[iParam2 /*3*/].f_1 = -2081918609;
			func_596(iParam2, iParam3);
		}
		else
		{
			iVar0 = 35;
			iVar1 = uParam0->f_1[iVar0 /*3*/];
			if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && 1769055947 == func_165(iVar1))
			{
				uParam0->f_1[iParam2 /*3*/].f_1 = -2081918609;
				func_596(iParam2, iParam3);
			}
		}
	}
}

void func_1039(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = 16;
	func_596(iVar0, iParam3);
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		func_596(iVar0, iParam3);
	}
	if (bParam1)
	{
		iVar0 = 21;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
		{
			func_596(iVar0, iParam3);
			func_861(uParam0, 0, uParam0->f_1[iVar0 /*3*/], iParam3);
		}
		return;
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_153(iParam2, 1126863852))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam3);
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_153(iParam2, -985549034))
	{
		if (uParam0->f_1[iVar0 /*3*/].f_1 == 1530758430)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
		}
		else if (uParam0->f_1[iVar0 /*3*/].f_1 == 1334603721)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -1539589426;
		}
	}
	iVar0 = 12;
	if ((uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_153(iParam2, -1527414429)) && !func_153(uParam0->f_1[iVar0 /*3*/], -1303648999))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam3);
	}
}

void func_1040(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		func_596(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && !func_153(uParam0->f_1[iVar0 /*3*/], -1303648999))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam3);
	}
	iVar0 = 13;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam3);
	}
	iVar0 = 25;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_153(iParam2, 675650051))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam3);
	}
}

bool func_1041(int iParam0)
{
	return Global_1952637.f_1675.f_1[func_260(iParam0, 1) /*3*/] != Global_1952637.f_83[func_260(iParam0, 1) /*12*/];
}

void func_1042(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam1);
	}
	iVar0 = 20;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		func_596(iVar0, iParam1);
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
		func_596(iVar0, iParam1);
	}
}

void func_1043(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (bParam1)
	{
		return;
	}
	bVar2 = false;
	iVar3 = 0;
	if (func_588() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar3 = 1;
	}
	if (func_588() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 16;
		if (uParam0->f_1[iVar0 /*3*/] == Global_1952637.f_83[iVar0 /*12*/] && func_165(uParam0->f_1[18 /*3*/]) != 912453393)
		{
			uParam0->f_1[iVar0 /*3*/] = func_1036(Global_1952637.f_83[iVar0 /*12*/].f_9, 0);
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_596(iVar0, iParam3);
		}
	}
	iVar0 = 36;
	func_596(iVar0, iParam3);
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_153(iParam2, -1473580422))
	{
		iVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_153(iVar1, 1469783911))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		}
		else if (func_868(uParam0->f_1[iVar0 /*3*/], iVar3, -2081918609) != -1)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -2081918609;
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
		}
	}
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		iVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_165(iVar1) == 912453393)
		{
			bVar2 = true;
			if (func_153(iParam2, 1583165364))
			{
				uParam0->f_1[iVar0 /*3*/].f_1 = -2081918609;
				func_596(iVar0, iParam3);
			}
		}
	}
	iVar0 = 20;
	iVar1 = uParam0->f_1[iVar0 /*3*/];
	if (iVar1 != Global_1952637.f_83[iVar0 /*12*/])
	{
		if (func_165(iVar1) == 1868067663 && func_153(iParam2, -1016441646))
		{
			func_1145(uParam0, iVar0, iParam3);
		}
		else if (bVar2)
		{
			func_596(iVar0, iParam3);
		}
	}
	iVar0 = 34;
	if (1759215194 == func_165(uParam0->f_1[iVar0 /*3*/]))
	{
		func_596(16, iParam3);
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_153(iParam2, -1650340550))
	{
		iVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_165(iVar1) == 1769055947)
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_596(iVar0, iParam3);
		}
	}
}

void func_1044(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		return;
	}
	if (func_588() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 16;
		if (uParam0->f_1[iVar0 /*3*/] == Global_1952637.f_83[iVar0 /*12*/] && func_165(uParam0->f_1[18 /*3*/]) != 912453393)
		{
			uParam0->f_1[iVar0 /*3*/] = func_1036(Global_1952637.f_83[iVar0 /*12*/].f_9, 0);
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_596(iVar0, iParam3);
		}
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		if (func_153(uParam0->f_1[iVar0 /*3*/], -2093434733))
		{
			func_1050(uParam0, iParam3, 1, 0);
		}
		else if (func_153(iParam2, 1718965018))
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
		}
	}
	func_596(iVar0, iParam3);
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam3);
	}
	iVar0 = 20;
	iVar1 = uParam0->f_1[iVar0 /*3*/];
	if ((uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_153(iVar1, 1090938458)) && func_153(iParam2, 475297062))
	{
		func_1145(uParam0, iVar0, iParam3);
	}
}

void func_1045(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		return;
	}
	func_596(36, iParam2);
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam2);
	}
	if (func_588() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 16;
		if (uParam0->f_1[iVar0 /*3*/] == Global_1952637.f_83[iVar0 /*12*/])
		{
			iVar0 = 16;
			uParam0->f_1[iVar0 /*3*/] = func_1036(Global_1952637.f_83[iVar0 /*12*/].f_9, 0);
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_596(iVar0, iParam2);
		}
	}
	iVar0 = 20;
	iVar1 = uParam0->f_1[iVar0 /*3*/];
	if (iVar1 != Global_1952637.f_83[iVar0 /*12*/] && func_153(iVar1, 353024991))
	{
		func_1145(uParam0, iVar0, iParam2);
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam2);
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && 1769055947 == func_165(uParam0->f_1[iVar0 /*3*/]))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam2);
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam2);
	}
}

void func_1046(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 20;
	iVar1 = uParam0->f_1[iVar0 /*3*/];
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_165(iVar1) == 294388917)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam3);
	}
	iVar0 = 18;
	iVar1 = uParam0->f_1[iVar0 /*3*/];
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		if (func_165(iVar1) == 912453393)
		{
			if (uParam0->f_1[iVar0 /*3*/].f_1 != joaat("BASE"))
			{
				uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
				func_596(iVar0, iParam3);
			}
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_596(iVar0, iParam3);
		}
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam3);
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam3);
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam3);
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam3);
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		if (func_153(uParam0->f_1[iVar0 /*3*/], -2093434733))
		{
			func_1050(uParam0, iParam3, 1, 0);
		}
		else if (func_153(iParam2, 1718965018))
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
		}
	}
}

void func_1047(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 20;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		func_1145(uParam0, iVar0, iParam2);
	}
	iVar0 = 21;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam2);
	}
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam2);
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam2);
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam2);
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam2);
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam2);
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		if (func_153(uParam0->f_1[iVar0 /*3*/], -2093434733))
		{
			func_1050(uParam0, iParam2, 1, 0);
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
			func_596(iVar0, iParam2);
		}
	}
}

void func_1048(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 34;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
		func_596(iVar0, iParam3);
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = -2081918609;
		func_596(iVar0, iParam3);
	}
	iVar0 = 37;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_153(iParam2, -1278198125))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam3);
	}
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		iVar1 = uParam0->f_1[iVar0 /*3*/];
		if (912453393 == func_165(iVar1) && uParam0->f_1[iVar0 /*3*/].f_1 != -2081918609)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -2081918609;
			func_596(iVar0, iParam3);
		}
	}
}

void func_1049(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 37;
	if (func_153(iParam2, -1278198125) && uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam3);
	}
}

void func_1050(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 36;
	if (bParam2)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam1);
	}
	iVar0 = 37;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam1);
	}
	iVar0 = 38;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam1);
	}
	iVar0 = 35;
	if (bParam3 && -923693316 == func_165(uParam0->f_1[iVar0 /*3*/]))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_596(iVar0, iParam1);
	}
}

void func_1051(var uParam0, int iParam1, int iParam2)
{
	Global_17411.f_55.f_644.f_33[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
}

void func_1052(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	Global_17411.f_55.f_644.f_33[iParam1 /*120*/].f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_1051(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
		iVar0++;
	}
}

void func_1053(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	if (iParam1 > -1 && iParam1 < 11)
	{
		Global_17411.f_55.f_644.f_33[iParam1 /*120*/] = (Global_17411.f_55.f_644.f_33[iParam1 /*120*/] || iParam0);
	}
}

struct<28> func_1054(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_71(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_1060(&Var28, bParam5) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_1055(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_740(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_742(func_1146(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_743(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 28), iVar0, uParam1);
	}
	return -1;
}

struct<25> func_1056(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<25> Var0;
	struct<24> Var25;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return Var0;
	}
	Var25.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_71(bParam4), &uParam0, &Var25, 24, 1))
	{
		return Var0;
	}
	Var0 = { func_1060(&Var25, bParam5) };
	Var0.f_16 = { Var25.f_15 };
	Var0.f_24 = Var25.f_23;
	return Var0;
}

int func_1057(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_742(func_1147(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_743(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 25), iVar0, uParam1);
	}
	return -1;
}

struct<17> func_1058(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_71(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_1060(&Var17, bParam5) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_1059(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_740(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_742(func_1148(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_743(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17), iVar0, uParam1);
	}
	return -1;
}

struct<16> func_1060(var uParam0, bool bParam1)
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
	if (bParam1)
	{
		Var0.f_15 = func_214(uParam0->f_4, joaat("DEFAULT"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_603() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

bool func_1061()
{
	return func_86(Global_1051213);
}

bool func_1062(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

bool func_1063(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_1064(int iParam0)
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
	if (!Global_1296859.f_22[iVar0])
	{
		func_1149(iParam0);
		return;
	}
	if (Global_1071686.f_21416.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_1150(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 1;
}

int func_1065(int iParam0, int iParam1)
{
	struct<4> Var0;
	int iVar4;

	if (!func_88(iParam1, 0))
	{
		return 0;
	}
	Var0 = { func_1151(iParam0, iParam1) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_0xC97E0D2302382211(iParam0, &Var0, 0);
	return iVar4;
}

bool func_1066()
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
	if (!func_1152(iVar0))
	{
		return false;
	}
	return true;
}

int func_1067(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	int iVar0;
	struct<5> Var1;
	struct<16> Var6;
	struct<17> Var22;

	iVar0 = -1;
	Var1 = { func_193(joaat("CURRENCY_CASH"), 1, 0) };
	Var6 = { func_1153(joaat("CURRENCY_CASH"), Var1, Var1.f_4, iParam0, 1) };
	Var6.f_12 = iParam2;
	iVar0 = func_489(joaat("USE"), &Var6, bParam3);
	if (iVar0 == -1)
	{
	}
	else
	{
		Var22.f_7 = -142743235;
		Var22.f_16 = -1;
		StringCopy(&(Var22.f_12), sParam1, 32);
		func_233(iVar0, Var22);
	}
	return iVar0;
}

void func_1068(int iParam0)
{
	struct<2> Var0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_729() < iParam0)
	{
		iParam0 = func_729();
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	Var0 = { func_387(joaat("CAREER_CASH")) };
	STATS::_0xBD861AE8A5181ED7(&Var0, iParam0);
}

void func_1069(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_386(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 1, joaat("COLOR_RED"), 0, 0, 0, 1);
}

int func_1070(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	struct<4> Var8;
	int iVar12;
	struct<17> Var13;

	iVar0 = -1;
	iVar1 = func_733(iParam0);
	iVar2 = func_732(iParam0);
	if (iVar2 != 0)
	{
		if (!func_76(0) || func_77())
		{
			if (bParam2)
			{
				func_111(func_110(joaat("BROKEN_DOWN"), joaat("SMALL_ANIMALS")), 1);
				return func_1154(iVar2, iVar1, iParam0, iParam1);
			}
			Var3 = { func_193(iParam0, 1, 0) };
			Var8 = { func_281(iParam0, Var3, Var3.f_4, 1) };
			iVar12 = func_1155(iParam0, &Var8, 1, -142743235, 0, 1);
			if (iVar12 != -1)
			{
				Var13.f_7 = -142743235;
				Var13.f_16 = -1;
				Var13 = 1;
				Var13.f_3 = 1;
				func_233(iVar12, Var13);
			}
			return 0;
		}
		if (func_74(iParam0, 1, 1, -142743235))
		{
			iVar0 = func_1154(iVar2, iVar1, iParam0, iParam1);
		}
	}
	return iVar0;
}

int func_1071(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::_0x9A100F1CF4546629(iParam0) && !ENTITY::_0xC346A546612C49A9(iParam0))
	{
		return 0;
	}
	iVar0 = PED::_GET_PED_DAMAGE(iParam0);
	iVar1 = FLOCK::_0xF8B48A361DC388AE(iParam0);
	if (iVar1 == 2)
	{
		iVar2 = 4;
	}
	else if (iVar1 == 1)
	{
		iVar2 = 3;
	}
	else
	{
		iVar3 = PED::_GET_PED_QUALITY(iParam0);
		switch (iVar3)
		{
			case 0:
				iVar2 = 0;
				break;
			case 1:
				iVar2 = 1;
				break;
			case -1:
			case 2:
				iVar2 = 2;
				break;
		}
	}
	if (Global_17333.f_2 != 3)
	{
		iVar1 = Global_17333.f_2;
	}
	uVar4 = PED::_0x6B89FAA36FC909A3(uParam1, iParam0, iVar0, iVar2);
	return uVar4;
}

bool func_1072(int iParam0)
{
	float fVar0;

	fVar0 = (func_1156(iParam0) - PLAYER::_0xDF66A37936D5F3D9(iParam0));
	return fVar0 <= 1f;
}

void func_1073(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_1102(*iParam0);
	iVar1 = func_1103(*iParam0);
	iVar2 = func_1104(*iParam0);
	iVar3 = func_1105(*iParam0);
	iVar4 = func_1106(*iParam0);
	iVar5 = func_1107(*iParam0);
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
	iVar5 = (iVar5 - iParam1);
	while (iVar5 < 0)
	{
		iParam2++;
		iVar5 += 60;
	}
	iVar4 = (iVar4 - iParam2);
	while (iVar4 < 0)
	{
		iParam3++;
		iVar4 += 60;
	}
	iVar3 = (iVar3 - iParam3);
	while (iVar3 < 0)
	{
		iParam4++;
		iVar3 += 24;
	}
	iVar2 = (iVar2 - iParam4);
	while (iVar2 <= 0)
	{
		iParam5++;
		iVar6 = (iVar1 - 1);
		if (iVar6 < 0)
		{
			iParam6++;
			iVar1 += 12;
		}
		iVar7 = func_1108(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_1109(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_1074(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_791(2);
	}
	switch (iParam1)
	{
		case 0:
			return Global_1956200.f_1431.f_6[iParam0 /*3*/].f_2;
		case 1:
			return Global_1956200.f_1565.f_2.f_6[iParam0 /*3*/].f_2;
		default:
			break;
	}
	return -1;
}

int func_1075(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_791(2);
	}
	switch (iParam1)
	{
		case 0:
			return Global_1956200.f_1431.f_6[iParam0 /*3*/].f_1;
		case 1:
			return Global_1956200.f_1565.f_2.f_6[iParam0 /*3*/].f_1;
		default:
			break;
	}
	return -15;
}

bool func_1076(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1157(iParam1) || !func_1157(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_1077(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_791(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200.f_1431.f_6[iParam0 /*3*/].f_2 = iParam1;
			break;
		case 1:
			Global_1956200.f_1565.f_2.f_6[iParam0 /*3*/].f_2 = iParam1;
			break;
		default:
			break;
	}
}

void func_1078(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_791(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200.f_1431.f_6[iParam0 /*3*/].f_1 = iParam1;
			break;
		case 1:
			Global_1956200.f_1565.f_2.f_6[iParam0 /*3*/].f_1 = iParam1;
			break;
		default:
			break;
	}
}

bool func_1079(int iParam0, int iParam1, float fParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (fParam2 > 100f)
	{
		fParam2 = 100f;
	}
	else if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iParam0, func_1158(iParam1), BUILTIN::CEIL(fParam2));
	return true;
}

void func_1080(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_791(2);
	}
	if (iParam1 > 0)
	{
		iParam1 = (iParam1 + MISC::GET_GAME_TIMER());
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200.f_1431.f_16[iParam0 /*3*/] = iParam1;
			break;
		case 1:
			Global_1956200.f_1565.f_2.f_16[iParam0 /*3*/] = iParam1;
			break;
		default:
			break;
	}
}

void func_1081(int iParam0, int iParam1, float fParam2)
{
	char* sVar0;

	sVar0 = func_1159(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		PED::_SET_PED_BLACKBOARD_FLOAT(iParam0, func_1160(iParam1), fParam2, -1);
	}
}

void func_1082(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	var uVar0;

	if (iParam3 == 2)
	{
		iParam3 = func_791(2);
	}
	uVar0 = Global_1296859.f_21;
	func_1161(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_1162(iParam0, uVar0, iParam3);
	}
}

bool func_1083(int iParam0, bool bParam1)
{
	return func_1076(func_962(), iParam0, bParam1);
}

float func_1084(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_791(1);
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

int func_1085(float fParam0)
{
	float fVar0;

	fVar0 = fParam0;
	fVar0 = ((2f * fVar0) - 100f);
	return BUILTIN::ROUND(((fVar0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

int func_1086(int iParam0, float fParam1, int iParam2)
{
	if (!func_1163(iParam0))
	{
		return 0;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_791(2);
	}
	func_1164(iParam0, fParam1, iParam2);
	if (!ENTITY::IS_ENTITY_DEAD(Global_1296859.f_8))
	{
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_1296859.f_8, iParam0, BUILTIN::FLOOR(fParam1));
	}
	return 1;
}

bool func_1087(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return true;
		case 0:
			return true;
		case 2:
			return true;
		default:
			break;
	}
	return false;
}

char* func_1088(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PlayerOverpower";
		case 1:
			return "PlayerOverpower";
		case 2:
			return "PlayerOverpower";
		default:
			break;
	}
	return "";
}

void func_1089(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6[20];

	iVar1 = Global_1146212.f_47689.f_1.f_42;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar0 = Global_1146212.f_47689.f_1[iVar2 /*2*/];
		iVar3 = func_1165(iVar0, 1);
		if (Global_1146212.f_35859.f_919[iVar3 /*12*/] == iParam0)
		{
			func_1166(iVar0);
			Global_1146212.f_47689.f_1.f_42 = (Global_1146212.f_47689.f_1.f_42 - 1);
		}
		else
		{
			Var6[iVar4 /*2*/] = { Global_1146212.f_47689.f_1[iVar2 /*2*/] };
			iVar4++;
		}
		iVar2++;
	}
	iVar5 = 0;
	while (iVar5 < iVar4)
	{
		Global_1146212.f_47689.f_1[iVar5 /*2*/] = { Var6[iVar5 /*2*/] };
		iVar5++;
	}
}

void func_1090(int iParam0, bool bParam1, bool bParam2)
{
	func_907(iParam0, 100f, bParam1, bParam2, 1, 2);
}

void func_1091(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<37> Var1;
	int iVar48;

	iVar0 = ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(iParam1);
	Var1.f_4 = 15;
	Var1.f_36 = 10;
	iVar48 = 0;
	while (iVar48 < iVar0)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COST(iParam1, iVar48, &Var1))
		{
			if (Var1 != iParam2)
			{
				if ((Var1.f_2 == joaat("COST_TYPE_CRAFT") && (Var1 != -489628648 && Var1 != -2141192156)) && (Global_1913694.f_1579 || !func_769(iParam1, Var1, 1)))
				{
					Global_1913694[(uParam0->f_44 - 1) /*9*/].f_7++;
				}
			}
			else
			{
				Global_1913694[(uParam0->f_44 - 1) /*9*/].f_8 = iVar48;
			}
		}
		iVar48++;
	}
}

void func_1092(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	int iVar13;
	int iVar14;

	iVar2 = func_296(iParam1, 1697966752);
	if (iVar2 == 0)
	{
		return;
	}
	Var3 = { func_619(-1591664384, -1591664384, 0, 0, joaat("COST_CRAFTING_GRILL"), 0, -1, iVar2, 0) };
	if (func_620(Var3, &iVar0, &iVar1, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar1)
		{
			iVar14 = func_731(iVar13, iVar0);
			if (func_88(iVar14, 0))
			{
				if (Global_1913694.f_1579 || !func_769(iVar14, joaat("COST_CRAFTING_GRILL"), 1))
				{
					Global_1913694[(uParam0->f_44 - 1) /*9*/].f_7++;
				}
			}
			iVar13++;
		}
		func_622(iVar0);
	}
}

void func_1093(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	int iVar13;
	int iVar14;

	iVar2 = func_296(iParam1, -1859264326);
	if (iVar2 == 0)
	{
		return;
	}
	Var3 = { func_619(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar2, 0) };
	if (func_620(Var3, &iVar0, &iVar1, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar1)
		{
			if (uParam0->f_44 >= 175)
			{
			}
			else
			{
				iVar14 = func_731(iVar13, iVar0);
				if (func_88(iVar14, 0) && iVar14 != iParam1)
				{
					func_915(uParam0, iVar14, iParam2);
				}
				iVar13++;
			}
		}
		func_622(iVar0);
	}
}

void func_1094(int iParam0)
{
	func_622(*iParam0);
	*iParam0 = -1;
}

void func_1095(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	char cVar1[32];
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	char[] cVar11[8];
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	struct<2> Var17;
	struct<2> Var20;
	bool bVar42;
	int iVar43;
	struct<7> Var44;
	int iVar51;

	iVar0 = Global_1913694[iParam1 /*9*/].f_6;
	StringCopy(&cVar1, "r_", 32);
	StringIntConCat(&cVar1, iVar0, 32);
	StringIntConCat(&cVar1, iParam1, 32);
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1913694[iParam1 /*9*/].f_1))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1913694[iParam1 /*9*/].f_1);
	}
	iVar5 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_29, &cVar1);
	Global_1913694[iParam1 /*9*/].f_1 = iVar5;
	iVar6 = Global_1913694[iParam1 /*9*/].f_5;
	iVar7 = func_226(iVar0, iVar6, bParam3, 0);
	iVar8 = func_92(iVar0, 0, 0, 0);
	iVar9 = func_642(iVar0, 0);
	if (iVar9 != -1)
	{
		iVar9 = (iVar9 - iVar8);
	}
	else
	{
		iVar9 = iVar7;
	}
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "name", iVar0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "eOutputItem", iVar0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "eCost", iVar6);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "iIndex", iParam1);
	if (!Global_1913694.f_1579 && func_769(iVar0, iVar6, 1))
	{
		bVar10 = true;
		Global_1913694[iParam1 /*9*/].f_7 = 0;
	}
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "iCurCostVariant", Global_1913694[iParam1 /*9*/].f_8);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "iNumCostVariants", Global_1913694[iParam1 /*9*/].f_7);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "bFireCrafting", iVar6 == -257768755);
	StringIntConCat(&cVar11, func_643(iVar9, iVar7), 8);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar5, "count", &cVar11);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "visible", false);
	bVar13 = false;
	if (func_106(uParam0, 2))
	{
		iVar12 = func_918(((iVar7 > 0 && func_929(iVar0)) && !bVar10), 1, 0);
	}
	else
	{
		iVar12 = func_918(((iVar9 > 0 && iVar7 > 0) && !bVar10), 1, 0);
	}
	if (iVar12 == 0 && func_1096(iVar0))
	{
		if (func_1097(iVar0, iVar6, uParam0, bParam3, &iVar14, &iVar15, &iVar16))
		{
			iVar12 = 1;
			bVar13 = true;
			iVar0 = iVar14;
			iVar6 = iVar15;
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "name", iVar14);
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar5, "eOutputItem", iVar14);
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar5, "eCost", iVar15);
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar5, "iCurCostVariant", iVar16);
		}
	}
	if (func_372(iVar0, &Var17, joaat("INVENTORY"), 0, 0, 0))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar5, "texture", Var17);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar5, "textureDictionary", Var17.f_1);
	}
	if (!func_106(uParam0, 4))
	{
		if ((iVar6 == -214678071 || iVar6 == joaat("COST_CRAFTING_GRILL")) || iVar6 == -257768755)
		{
			iVar12 = 0;
		}
	}
	if (iVar12 == 1)
	{
		if (!func_419(2) && func_296(iVar0, -1636519629) == -701492487)
		{
			Global_1913694[iParam1 /*9*/].f_2 = 0;
			iVar12 = 0;
		}
		else
		{
			uParam0->f_46++;
			if (func_235(iVar0, uParam0->f_41))
			{
				uParam0->f_47++;
			}
			Global_1913694[iParam1 /*9*/].f_2 = 1;
		}
	}
	else
	{
		Global_1913694[iParam1 /*9*/].f_2 = 0;
	}
	if (bVar13)
	{
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "lockVisible", bVar10);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "enabled", iVar12);
	Var20.f_1 = 20;
	bVar42 = false;
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "deadeyeCoreDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "deadeyeDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthCoreDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaCoreDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthHorseDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthCoreHorseDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaCoreHorseDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaHorseDurationCategory", 0);
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iVar0, &Var20))
	{
		iVar43 = 0;
		while (iVar43 < Var20)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(Var20.f_1[iVar43], &Var44))
			{
				iVar51 = Var44.f_2;
				switch (Var44.f_1)
				{
					case -1104847406:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "deadeye", iVar51);
						break;
					case 1857353317:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "deadeyeCore", iVar51);
						break;
					case -826379728:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "deadeyeCore", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "deadeyeCoreDurationCategory", Var44.f_6);
						break;
					case 1342237631:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "deadeye", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "deadeyeDurationCategory", Var44.f_6);
						break;
					case -943921969:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "health", iVar51);
						break;
					case -416929031:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCore", iVar51);
						break;
					case 1869697234:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "health", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthDurationCategory", Var44.f_6);
						break;
					case 2062242710:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCore", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthCoreDurationCategory", Var44.f_6);
						break;
					case 381158954:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "stamina", iVar51);
						break;
					case 1681823811:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaCore", iVar51);
						break;
					case -1191740624:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaCore", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "staminaCoreDurationCategory", Var44.f_6);
						break;
					case -1240225157:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "stamina", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "staminaDurationCategory", Var44.f_6);
						break;
					case 978049229:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthHorse", iVar51);
						break;
					case -778289619:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthHorse", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthHorseDurationCategory", Var44.f_6);
						break;
					case -1918697215:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCoreHorse", iVar51);
						break;
					case 1136630075:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCoreHorse", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthCoreHorseDurationCategory", Var44.f_6);
						break;
					case 855745648:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaCoreHorse", iVar51);
						break;
					case 1365603835:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaCoreHorse", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "staminaCoreHorseDurationCategory", Var44.f_6);
						break;
					case 1497139093:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaHorse", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "staminaHorseDurationCategory", Var44.f_6);
						break;
				}
			}
			iVar43++;
		}
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "overpower", bVar42);
	if (bParam2)
	{
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_29, -1, -2047994727, iVar5);
	}
}

bool func_1096(int iParam0)
{
	return true;
}

bool func_1097(int iParam0, int iParam1, var uParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	struct<10> Var2;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	struct<37> Var18;
	int iVar65;

	if (!func_88(iParam0, 0))
	{
		return false;
	}
	if (!Global_1913694.f_1579 && func_769(iParam0, iParam1, 1))
	{
		return false;
	}
	if (func_106(uParam2, 2) && !func_929(iParam0))
	{
		return false;
	}
	if (iParam1 == -214678071 || iParam1 == joaat("COST_CRAFTING_GRILL"))
	{
		Var2 = -1;
		Var2.f_1 = -1;
		Var2.f_2 = -1;
		Var2.f_3 = -1;
		Var2.f_4 = -1;
		Var2.f_5 = -1;
		Var2.f_6 = -1;
		Var2.f_7 = -1;
		Var2.f_8 = -1;
		iVar12 = func_296(iParam0, 1697966752);
		if (iVar12 == 0)
		{
			return false;
		}
		Var2 = { func_619(-1591664384, -1591664384, 0, 0, joaat("COST_CRAFTING_GRILL"), 0, -1, iVar12, 0) };
		if (func_620(Var2, &iVar0, &iVar1, 0))
		{
			iVar13 = 0;
			while (iVar13 < iVar1)
			{
				iVar14 = func_731(iVar13, iVar0);
				if (iParam0 == iVar14)
				{
				}
				else if (!Global_1913694.f_1579 && func_769(iVar14, joaat("COST_CRAFTING_GRILL"), 1))
				{
				}
				else if (func_685(iVar14, joaat("COST_CRAFTING_GRILL"), 0, bParam3, 0) && !func_426(iVar14, 1, 0))
				{
					func_622(iVar0);
					*iParam4 = iVar14;
					*iParam5 = joaat("COST_CRAFTING_GRILL");
					*iParam6 = iVar13;
					return true;
				}
				iVar13++;
			}
			func_622(iVar0);
		}
		if (iParam1 == joaat("COST_CRAFTING_GRILL"))
		{
			Var2 = { func_619(-1591664384, -1591664384, 0, 0, -214678071, 0, -1, iVar12, 0) };
			if (func_620(Var2, &iVar0, &iVar1, 0))
			{
				iVar15 = 0;
				while (iVar15 < iVar1)
				{
					iVar16 = func_731(iVar15, iVar0);
					if (iParam0 == iVar16)
					{
					}
					else if (!Global_1913694.f_1579 && func_769(iVar16, -214678071, 1))
					{
					}
					else if (func_685(iVar16, -214678071, 0, bParam3, 0) && !func_426(iVar16, 1, 0))
					{
						func_622(iVar0);
						*iParam4 = iVar16;
						*iParam5 = -214678071;
						*iParam6 = iVar15;
						return true;
					}
					iVar15++;
				}
				func_622(iVar0);
			}
		}
	}
	else
	{
		iVar17 = ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(iParam0);
		Var18.f_4 = 15;
		Var18.f_36 = 10;
		iVar65 = 0;
		while (iVar65 < iVar17)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COST(iParam0, iVar65, &Var18))
			{
				if (Var18.f_2 == joaat("COST_TYPE_CRAFT"))
				{
					if ((Var18 != -489628648 && Var18 != -2141192156) && (Global_1913694.f_1579 || !func_769(iParam0, Var18, 1)))
					{
						if (func_685(iParam0, Var18, 0, bParam3, 0) && !func_426(iParam0, 1, 0))
						{
							*iParam4 = iParam0;
							*iParam5 = Var18;
							*iParam6 = iVar65;
							return true;
						}
					}
				}
			}
			iVar65++;
		}
	}
	return false;
}

int func_1098()
{
	int iVar0;

	iVar0 = GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	return func_914(iVar0);
}

int func_1099(int iParam0)
{
	switch (iParam0)
	{
		case joaat("FEE_MEAL_CAMP_STEW_BEST"):
			return 4;
		case joaat("FEE_MEAL_CAMP_STEW_HIGH"):
			return 3;
		case joaat("FEE_MEAL_CAMP_STEW_MED"):
			return 2;
		case joaat("FEE_MEAL_CAMP_STEW_LOW"):
			return 1;
		case 1046181202:
			return 0;
		default:
			break;
	}
	if (func_153(iParam0, -2011345500))
	{
		return 5;
	}
	return 0;
}

char* func_1100(int iParam0)
{
	switch (func_1099(iParam0))
	{
		case 5:
			return "STEW_TIP_DAILY";
		case 4:
			return "STEW_TIP_BEST";
		case 3:
			return "STEW_TIP_HIGH";
		case 2:
			return "STEW_TIP_MED";
		case 1:
			return "STEW_TIP_LOW";
		default:
			break;
	}
	return "STEW_TIP_LOW";
}

int func_1101(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return -1;
	}
	if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1131196.f_1091), iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Global_1131196[iVar0 /*27*/].f_9 == iParam0 && Global_1131196[iVar0 /*27*/] != 3)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1102(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_918(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_1103(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_1104(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_1105(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_1106(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_1107(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_1108(int iParam0, int iParam1)
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

void func_1109(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1167(iParam0, iParam6);
	func_1168(iParam0, iParam5);
	func_1169(iParam0, iParam4);
	func_1170(iParam0, iParam3);
	func_1171(iParam0, iParam2);
	func_1172(iParam0, iParam1);
}

bool func_1110()
{
	return Global_1913504.f_127 == 0;
}

void func_1111(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_1173(&(Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/]));
	Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/] = iParam0;
	Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

int func_1112(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_654(iParam0);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 5)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT_STATUS(iParam0, &iVar1))
		{
			if ((iVar1 == 4 || iVar1 == 2) || (iVar0 == 0 && iVar1 != 0))
			{
				func_969(iParam0, iVar1, 0, 0);
				iVar0 = iVar1;
			}
		}
		else if (iVar0 == 1 || iVar0 == 5)
		{
			func_969(iParam0, 4, 0, 0);
		}
	}
	return iVar0;
}

int func_1113(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 205718222;
			case 1:
				return 866168015;
			case 2:
				return -1103707655;
			default:
				break;
		}
		iVar0 = 3;
	}
	if (bParam2)
	{
		switch ((iParam0 - iVar0))
		{
			case 0:
				return 75922725;
			case 1:
				return 1070046552;
			case 2:
				return -1843707398;
			case 3:
				return -1571233163;
			case 4:
				return -1197011183;
			default:
				break;
		}
	}
	return 0;
}

bool func_1114(int iParam0)
{
	return func_165(iParam0) == 1946043663;
}

bool func_1115(int iParam0)
{
	return func_165(iParam0) == -126813555;
}

bool func_1116(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	struct<6> Var7[10];
	int iVar68;
	int iVar69;

	*uParam2 = iParam0;
	if (func_286(0))
	{
		iVar5 = func_475(func_1174(), iParam0);
		if (iVar5 != 0)
		{
			Var0 = { func_339(1) };
			Var0.f_4 = func_468(iVar5);
			uParam2->f_1[0 /*4*/] = { func_281(iParam0, Var0, Var0.f_4, 1) };
			if (INVENTORY::_0xB881CA836CC4B6D4(&(uParam2->f_1[0 /*4*/])))
			{
				return true;
			}
		}
	}
	iVar6 = func_214(iParam0, joaat("DEFAULT"));
	if (iVar6 != 0)
	{
		if (!func_523(&Var7, &iVar68, iParam0, iVar6, iParam1, 1) || iVar68 < 1)
		{
			return false;
		}
		iVar69 = 0;
		while (iVar69 < iVar68)
		{
			uParam2->f_1[iVar69 /*4*/] = { func_281(iParam0, Var7[iVar69 /*6*/], Var7[iVar69 /*6*/].f_4, 1) };
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(uParam2->f_1[iVar69 /*4*/])))
			{
				return false;
			}
			iVar69++;
		}
		return true;
	}
	Var0 = { func_193(iParam0, 1, 0) };
	uParam2->f_1[0 /*4*/] = { func_281(iParam0, Var0, Var0.f_4, 1) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&(uParam2->f_1[0 /*4*/])))
	{
		return false;
	}
	return true;
}

bool func_1117(int* iParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	if (iParam3 != 541670136 && iParam3 != joaat("BATCH"))
	{
		return false;
	}
	if (!func_1175(*uParam1))
	{
		return false;
	}
	if (!func_1176(iParam0, iParam3))
	{
		return false;
	}
	if (NETSHOPPING::_0xA3B8D31C13CB4239(*iParam0, 541670136, uParam1, 17, uParam2, *uParam2))
	{
	}
	else
	{
		return false;
	}
	return func_1177(iParam0, bParam4);
}

bool func_1118(int iParam0, int iParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_484(iParam0, 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!func_1178(iParam0, iParam1, &Var0))
	{
		return false;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = Var0.f_36[iVar47];
		iVar47++;
	}
	return true;
}

int func_1119(int iParam0, bool bParam1)
{
	if (!func_978(iParam0, bParam1))
	{
		return 0;
	}
	if (iParam0 == joaat("DOCUMENT_PAMPHLET_TRACKING_ARROW"))
	{
		return func_498(joaat("AMMO_ARROW_TRACKING"), 1);
	}
	else if (iParam0 == joaat("DOCUMENT_PAMPHLET_POISON_BOTTLE"))
	{
		return func_498(joaat("AMMO_POISONBOTTLE"), 1);
	}
	else if (iParam0 == joaat("DOCUMENT_PAMPHLET_ANIMAL_REVIVER"))
	{
		return func_498(joaat("CONSUMABLE_TONIC_ANIMAL_REVIVER"), 1);
	}
	else if (iParam0 == joaat("DOCUMENT_PAMPHLET_AMMO_22_TRANQUILIZER"))
	{
		return func_498(joaat("AMMO_22_TRANQUILIZER"), 1);
	}
	else if (iParam0 == joaat("DOCUMENT_PAMPHLET_LEGENDARY_PHEROMONES"))
	{
		return func_498(joaat("CONSUMABLE_ROLE_NATURALIST_LEGENDARY_ANIMAL_PHEROMONE"), 1);
	}
	else if (iParam0 == joaat("DOCUMENT_PAMPHLET_TONIC_BLENDING"))
	{
		return func_498(joaat("CONSUMABLE_TONIC_BLENDING"), 1);
	}
	return func_498(iParam0, 1);
}

bool func_1120(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_484(iParam0, 2))
	{
		return false;
	}
	*iParam3 = ITEMDATABASE::_0x388088BFF3681189(iParam0, iParam1);
	if (*iParam3 == 0)
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
	while (iVar0 < *iParam3)
	{
		if (!ITEMDATABASE::_0xB542632693D53408(iParam0, iParam1, iVar0, uParam2[iVar0 /*2*/]))
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
		func_1179(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_1121(int* iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, int iParam5)
{
	if ((iParam3 != 2113164098 && iParam3 != joaat("SELL")) && iParam3 != joaat("USE"))
	{
		return false;
	}
	if (!func_1180(iParam3, uParam1, iParam5))
	{
		return false;
	}
	if (!func_1176(iParam0, iParam3))
	{
		return false;
	}
	if (func_1181(*iParam0, iParam3, uParam1, uParam2))
	{
	}
	else
	{
		return false;
	}
	return func_1177(iParam0, bParam4);
}

bool func_1122(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1182(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return iVar0 > iParam1;
}

int func_1123(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<2> Var3;

	if (!func_88(iParam1, 0))
	{
		return 0;
	}
	bVar0 = iParam4 == 562618531;
	bVar1 = iParam4 == 1992602754;
	bVar2 = iParam4 == -1387038764;
	if (!func_1183(iParam0, iParam1, 1))
	{
		return 0;
	}
	Var3 = { func_191(iParam1) };
	if (STATS::_STAT_ID_IS_VALID(&Var3))
	{
		if ((func_1065(iParam0, iParam1) - iParam2) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var3, iParam2);
		}
		else if ((func_1065(iParam0, iParam1) - iParam2) < 0)
		{
			func_1123(iParam0, iParam1, func_92(iParam1, 0, 0, 0), bParam3, iParam4);
			return 0;
		}
	}
	if (!func_1184(iParam0, iParam1, iParam2, iParam4, bParam3))
	{
		return 0;
	}
	if (!bParam3 && iParam1 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		func_190(iParam1, -iParam2, bVar0, bVar1, bVar2, 0, 0);
	}
	return 1;
}

bool func_1124(int iParam0)
{
	if (!func_88(iParam0, 0))
	{
		return false;
	}
	return (func_153(iParam0, 1686880204) || INVENTORY::_0x4AEF1FB5B9011D75(iParam0));
}

int func_1125(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_ALLIGATOR_SKIN");
		case 1:
			return joaat("PROVISION_ALLIGATOR_SKIN_POOR");
		case 2:
			return joaat("PROVISION_ALLIGATOR_SKIN_PRISTINE");
		case 3:
			return joaat("PROVISION_BEAVER_FUR");
		case 4:
			return joaat("PROVISION_BEAVER_FUR_POOR");
		case 5:
			return joaat("PROVISION_BEAVER_FUR_PRISTINE");
		case 6:
			return joaat("PROVISION_BOAR_SKIN");
		case 7:
			return joaat("PROVISION_BOAR_SKIN_POOR");
		case 8:
			return joaat("PROVISION_BOAR_SKIN_PRISTINE");
		case 9:
			return joaat("PROVISION_BUCK_FUR");
		case 10:
			return joaat("PROVISION_BUCK_FUR_POOR");
		case 11:
			return joaat("PROVISION_BUCK_FUR_PRISTINE");
		case 12:
			return joaat("PROVISION_COUGAR_FUR");
		case 13:
			return joaat("PROVISION_COUGAR_FUR_POOR");
		case 14:
			return joaat("PROVISION_COUGAR_FUR_PRISTINE");
		case 15:
			return joaat("PROVISION_COYOTE_FUR");
		case 16:
			return joaat("PROVISION_COYOTE_FUR_POOR");
		case 17:
			return joaat("PROVISION_COYOTE_FUR_PRISTINE");
		case 18:
			return joaat("PROVISION_DEER_HIDE");
		case 19:
			return joaat("PROVISION_DEER_HIDE_POOR");
		case 20:
			return joaat("PROVISION_DEER_HIDE_PRISTINE");
		case 21:
			return joaat("PROVISION_FOX_FUR");
		case 22:
			return joaat("PROVISION_FOX_FUR_POOR");
		case 23:
			return joaat("PROVISION_FOX_FUR_PRISTINE");
		case 24:
			return joaat("PROVISION_GOAT_HAIR");
		case 25:
			return joaat("PROVISION_GOAT_HAIR_POOR");
		case 26:
			return joaat("PROVISION_GOAT_HAIR_PRISTINE");
		case 27:
			return joaat("PROVISION_JAVELINA_SKIN");
		case 28:
			return joaat("PROVISION_JAVELINA_SKIN_POOR");
		case 29:
			return joaat("PROVISION_JAVELINA_SKIN_PRISTINE");
		case 30:
			return joaat("PROVISION_LOANSHARK_SKINS");
		case 31:
			return joaat("PROVISION_PANTHER_FUR");
		case 32:
			return joaat("PROVISION_PANTHER_FUR_POOR");
		case 33:
			return joaat("PROVISION_PANTHER_FUR_PRISTINE");
		case 34:
			return joaat("PROVISION_PIG_SKIN");
		case 35:
			return joaat("PROVISION_PIG_SKIN_POOR");
		case 36:
			return joaat("PROVISION_PIG_SKIN_PRISTINE");
		case 37:
			return joaat("PROVISION_PRONGHORN_FUR");
		case 38:
			return joaat("PROVISION_PRONGHORN_FUR_POOR");
		case 39:
			return joaat("PROVISION_PRONGHORN_FUR_PRISTINE");
		case 40:
			return joaat("PROVISION_RAM_HIDE");
		case 41:
			return joaat("PROVISION_RAM_HIDE_POOR");
		case 42:
			return joaat("PROVISION_RAM_HIDE_PRISTINE");
		case 43:
			return joaat("PROVISION_SHEEP_WOOL");
		case 44:
			return joaat("PROVISION_SHEEP_WOOL_POOR");
		case 45:
			return joaat("PROVISION_SHEEP_WOOL_PRISTINE");
		case 46:
			return joaat("PROVISION_WOLF_FUR");
		case 47:
			return joaat("PROVISION_WOLF_FUR_POOR");
		case 48:
			return joaat("PROVISION_WOLF_FUR_PRISTINE");
		case 49:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_BEAVER_LEGENDARY_01");
		case 50:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_BEAVER_LEGENDARY_02");
		case 51:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_BEAVER_LEGENDARY_03");
		case 52:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_BOAR_LEGENDARY_01");
		case 53:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_BOAR_LEGENDARY_02");
		case 54:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_BOAR_LEGENDARY_03");
		case 55:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_BUCK_LEGENDARY_01");
		case 56:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_BUCK_LEGENDARY_02");
		case 57:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_BUCK_LEGENDARY_03");
		case 58:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_COUGAR_LEGENDARY_01");
		case 59:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_COUGAR_LEGENDARY_02");
		case 60:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_COUGAR_LEGENDARY_03");
		case 61:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_COYOTE_LEGENDARY_01");
		case 62:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_COYOTE_LEGENDARY_02");
		case 63:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_COYOTE_LEGENDARY_03");
		case 64:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_FOX_LEGENDARY_01");
		case 65:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_FOX_LEGENDARY_02");
		case 66:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_FOX_LEGENDARY_03");
		case 67:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_PANTHER_LEGENDARY_01");
		case 68:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_PANTHER_LEGENDARY_02");
		case 69:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_PANTHER_LEGENDARY_03");
		case 70:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_RAM_LEGENDARY_01");
		case 71:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_RAM_LEGENDARY_02");
		case 72:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_RAM_LEGENDARY_03");
		case 73:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_WOLF_LEGENDARY_01");
		case 74:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_WOLF_LEGENDARY_02");
		case 75:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_WOLF_LEGENDARY_03");
		case 76:
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

int func_1126(int iParam0)
{
	if (!func_990(iParam0))
	{
		return 0;
	}
	return iParam0;
}

int func_1127(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BEAVER_FUR"):
			return 3;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_WOLF_LEGENDARY_01"):
			return 73;
		case joaat("PROVISION_BOAR_SKIN_PRISTINE"):
			return 8;
		case joaat("PROVISION_DEER_HIDE"):
			return 18;
		case joaat("PROVISION_COUGAR_FUR_PRISTINE"):
			return 14;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BEAVER_LEGENDARY_03"):
			return 51;
		case joaat("PROVISION_GOAT_HAIR_PRISTINE"):
			return 26;
		case joaat("PROVISION_ALLIGATOR_SKIN_PRISTINE"):
			return 2;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BOAR_LEGENDARY_01"):
			return 52;
		case joaat("PROVISION_BEAVER_FUR_POOR"):
			return 4;
		case joaat("PROVISION_COYOTE_FUR_POOR"):
			return 16;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_WOLF_LEGENDARY_02"):
			return 74;
		case joaat("PROVISION_PRONGHORN_FUR_PRISTINE"):
			return 39;
		case joaat("PROVISION_JAVELINA_SKIN"):
			return 27;
		case joaat("PROVISION_SHEEP_WOOL"):
			return 43;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_FOX_LEGENDARY_02"):
			return 65;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BOAR_LEGENDARY_02"):
			return 53;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BUCK_LEGENDARY_02"):
			return 56;
		case joaat("PROVISION_PIG_SKIN_PRISTINE"):
			return 36;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_COYOTE_LEGENDARY_01"):
			return 61;
		case joaat("PROVISION_DEER_HIDE_PRISTINE"):
			return 20;
		case joaat("PROVISION_PRONGHORN_FUR_POOR"):
			return 38;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_FOX_LEGENDARY_03"):
			return 66;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BOAR_LEGENDARY_03"):
			return 54;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_WOLF_LEGENDARY_03"):
			return 75;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_RAM_LEGENDARY_02"):
			return 71;
		case joaat("PROVISION_BUCK_FUR"):
			return 9;
		case joaat("PROVISION_ALLIGATOR_SKIN"):
			return 0;
		case joaat("PROVISION_COYOTE_FUR_PRISTINE"):
			return 17;
		case joaat("PROVISION_BUCK_FUR_PRISTINE"):
			return 11;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_RAM_LEGENDARY_01"):
			return 70;
		case joaat("PROVISION_DEER_HIDE_POOR"):
			return 19;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_RAM_LEGENDARY_03"):
			return 72;
		case joaat("PROVISION_RAM_HIDE"):
			return 40;
		case joaat("PROVISION_PANTHER_FUR"):
			return 31;
		case joaat("PROVISION_PIG_SKIN_POOR"):
			return 35;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BUCK_LEGENDARY_01"):
			return 55;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BEAVER_LEGENDARY_02"):
			return 50;
		case joaat("PROVISION_JAVELINA_SKIN_POOR"):
			return 28;
		case joaat("PROVISION_PIG_SKIN"):
			return 34;
		case 0:
			return 76;
		case joaat("PROVISION_WOLF_FUR_POOR"):
			return 47;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BEAVER_LEGENDARY_01"):
			return 49;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_COUGAR_LEGENDARY_03"):
			return 60;
		case joaat("PROVISION_FOX_FUR"):
			return 21;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_COUGAR_LEGENDARY_02"):
			return 59;
		case joaat("PROVISION_COUGAR_FUR"):
			return 12;
		case joaat("PROVISION_FOX_FUR_PRISTINE"):
			return 23;
		case joaat("PROVISION_PRONGHORN_FUR"):
			return 37;
		case joaat("PROVISION_WOLF_FUR_PRISTINE"):
			return 48;
		case joaat("PROVISION_GOAT_HAIR_POOR"):
			return 25;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_COUGAR_LEGENDARY_01"):
			return 58;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_PANTHER_LEGENDARY_02"):
			return 68;
		case joaat("PROVISION_BEAVER_FUR_PRISTINE"):
			return 5;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BUCK_LEGENDARY_03"):
			return 57;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_COYOTE_LEGENDARY_03"):
			return 63;
		case joaat("PROVISION_WOLF_FUR"):
			return 46;
		case joaat("PROVISION_COYOTE_FUR"):
			return 15;
		case joaat("PROVISION_BOAR_SKIN_POOR"):
			return 7;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_FOX_LEGENDARY_01"):
			return 64;
		case joaat("PROVISION_SHEEP_WOOL_PRISTINE"):
			return 45;
		case joaat("PROVISION_PANTHER_FUR_POOR"):
			return 32;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_PANTHER_LEGENDARY_03"):
			return 69;
		case joaat("PROVISION_BUCK_FUR_POOR"):
			return 10;
		case joaat("PROVISION_FOX_FUR_POOR"):
			return 22;
		case joaat("PROVISION_GOAT_HAIR"):
			return 24;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_COYOTE_LEGENDARY_02"):
			return 62;
		case joaat("PROVISION_SHEEP_WOOL_POOR"):
			return 44;
		case joaat("PROVISION_RAM_HIDE_PRISTINE"):
			return 42;
		case joaat("PROVISION_RAM_HIDE_POOR"):
			return 41;
		case joaat("PROVISION_ALLIGATOR_SKIN_POOR"):
			return 1;
		case joaat("PROVISION_COUGAR_FUR_POOR"):
			return 13;
		case joaat("PROVISION_JAVELINA_SKIN_PRISTINE"):
			return 29;
		case joaat("PROVISION_PANTHER_FUR_PRISTINE"):
			return 33;
		case joaat("PROVISION_LOANSHARK_SKINS"):
			return 30;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_PANTHER_LEGENDARY_01"):
			return 67;
		case joaat("PROVISION_BOAR_SKIN"):
			return 6;
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

bool func_1128(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_ID();
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return false;
	}
	iVar1 = iVar0;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return false;
	}
	if (func_1129(iVar1, bParam1) == 0)
	{
		return false;
	}
	iVar2 = iParam0;
	if (iVar2 > func_1129(iVar1, bParam1))
	{
		iVar2 = func_1129(iVar1, bParam1);
	}
	if (!bParam1)
	{
		Global_1291106[iVar1 /*19*/].f_7 = (Global_1291106[iVar1 /*19*/].f_7 - iVar2);
	}
	else
	{
		Global_1291106[iVar1 /*19*/].f_8 = (Global_1291106[iVar1 /*19*/].f_8 - iVar2);
	}
	if (func_1129(iVar1, bParam1) < 0)
	{
		if (!bParam1)
		{
			Global_1291106[iVar1 /*19*/].f_7 = 0;
		}
		else
		{
			Global_1291106[iVar1 /*19*/].f_8 = 0;
		}
	}
	else if (func_1129(iVar1, bParam1) > func_1130(bParam1))
	{
		if (!bParam1)
		{
			Global_1291106[iVar1 /*19*/].f_7 = func_1130(bParam1);
		}
		else
		{
			Global_1291106[iVar1 /*19*/].f_8 = func_1130(bParam1);
		}
	}
	return true;
}

int func_1129(int iParam0, bool bParam1)
{
	return func_918(bParam1, Global_1291106[iParam0 /*19*/].f_8, Global_1291106[iParam0 /*19*/].f_7);
}

int func_1130(bool bParam0)
{
	return func_918(bParam0, Global_1901947.f_681.f_30, Global_1901947.f_681.f_29);
}

int func_1131(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_BADGER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_BADGER_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_BADGER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_BADGER_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_BADGER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_BADGER_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_BEAVER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_BEAVER_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_BEAVER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_BEAVER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_BEAVER_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_BUCK_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_BUCK_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_BUCK_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_BUCK_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_CHICKEN_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_CHICKEN_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_CHICKEN_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_CORMORANT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_CORMORANT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_CORMORANT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_COUGAR_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_COUGAR_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_COUGAR_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_COUGAR_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_COUGAR_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_COUGAR_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_COYOTE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_COYOTE_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_COYOTE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_COYOTE_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_COYOTE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_COYOTE_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_CRANE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_CRANE_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_CRANE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_CRANE_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_CRANE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_CRANE_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_DEER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_DEER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_DEER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_DUCK_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_DUCK_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_DUCK_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_EAGLE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_EAGLE_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_EAGLE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_EAGLE_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_EAGLE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_EAGLE_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_EGRET_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_EGRET_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_EGRET_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_EGRET_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_EGRET_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_EGRET_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_FOX_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_FOX_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_FOX_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_FOX_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_FOX_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_FOX_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_GILA_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_GILA_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_GILA_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_GILA_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_GILA_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_GILA_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_GOAT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_GOAT_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_GOAT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_GOAT_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_GOAT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_GOAT_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_GOOSE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_GOOSE_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_GOOSE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_GOOSE_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_GOOSE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_GOOSE_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_HAWK_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_HAWK_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_HAWK_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_HAWK_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_HAWK_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_HAWK_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_HERON_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_HERON_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_HERON_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_HERON_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_HERON_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_HERON_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_IGUANA_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_IGUANA_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_IGUANA_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_IGUANA_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_IGUANA_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_IGUANA_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_LOON_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_LOON_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_LOON_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_LOON_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_LOON_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_LOON_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_OWL_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_OWL_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_OWL_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_OWL_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_OWL_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_OWL_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_PANTHER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PANTHER_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_PANTHER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PANTHER_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_PANTHER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PANTHER_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_PARROT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PARROT_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_PARROT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PARROT_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_PARROT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PARROT_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_PELICAN_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PELICAN_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_PELICAN_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PELICAN_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_PELICAN_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PELICAN_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_PHEASANT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_PHEASANT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_PHEASANT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_PIG_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PIG_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_PIG_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PIG_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_PIG_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PIG_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_RABBIT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_RABBIT_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_RABBIT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_RABBIT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_RACOON_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_RACOON_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_RACOON_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_RACOON_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_RACOON_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_RACOON_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_RAM_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_RAM_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_RAM_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_RAM_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_RAM_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_RAM_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_RAVEN_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_RAVEN_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_RAVEN_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_RAVEN_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_RAVEN_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_RAVEN_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_ROOSTER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_ROOSTER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_ROOSTER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_SEAGULL_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_SEAGULL_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_SEAGULL_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_SHEEP_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SHEEP_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_SHEEP_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SHEEP_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_SHEEP_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SHEEP_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_SKUNK_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SKUNK_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_SKUNK_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_SKUNK_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SKUNK_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_TURKEY_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_TURKEY_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_TURKEY_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_VULTURE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_VULTURE_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_VULTURE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_VULTURE_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_VULTURE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_VULTURE_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_WOLF_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_WOLF_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_WOLF_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_WOLF_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_WOLF_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_WOLF_POOR");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_BEAVER_LEGENDARY_01"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_BEAVER_LEGENDARY_01");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_BEAVER_LEGENDARY_02"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_BEAVER_LEGENDARY_02");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_BEAVER_LEGENDARY_03"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_BEAVER_LEGENDARY_03");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_BUCK_LEGENDARY_01"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_BUCK_LEGENDARY_01");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_BUCK_LEGENDARY_02"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_BUCK_LEGENDARY_02");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_BUCK_LEGENDARY_03"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_BUCK_LEGENDARY_03");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_COUGAR_LEGENDARY_01"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_COUGAR_LEGENDARY_01");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_COUGAR_LEGENDARY_02"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_COUGAR_LEGENDARY_02");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_COUGAR_LEGENDARY_03"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_COUGAR_LEGENDARY_03");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_COYOTE_LEGENDARY_01"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_COYOTE_LEGENDARY_01");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_COYOTE_LEGENDARY_02"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_COYOTE_LEGENDARY_02");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_COYOTE_LEGENDARY_03"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_COYOTE_LEGENDARY_03");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_FOX_LEGENDARY_01"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_FOX_LEGENDARY_01");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_FOX_LEGENDARY_02"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_FOX_LEGENDARY_02");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_FOX_LEGENDARY_03"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_FOX_LEGENDARY_03");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_PANTHER_LEGENDARY_01"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_PANTHER_LEGENDARY_01");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_PANTHER_LEGENDARY_02"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_PANTHER_LEGENDARY_02");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_PANTHER_LEGENDARY_03"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_PANTHER_LEGENDARY_03");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_RAM_LEGENDARY_01"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_RAM_LEGENDARY_01");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_RAM_LEGENDARY_02"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_RAM_LEGENDARY_02");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_RAM_LEGENDARY_03"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_RAM_LEGENDARY_03");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_WOLF_LEGENDARY_01"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_WOLF_LEGENDARY_01");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_WOLF_LEGENDARY_02"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_WOLF_LEGENDARY_02");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_WOLF_LEGENDARY_03"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_WOLF_LEGENDARY_03");
		default:
			break;
	}
	return 0;
}

bool func_1132(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

void func_1133(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

var func_1134()
{
	return Global_1071686.f_28448[32 /*4*/].f_3;
}

struct<8> func_1135(vector3 vParam0, var uParam3, var uParam4, int iParam5, int iParam6)
{
	struct<8> Var0;

	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_STRING(&Var0, &vParam0))
	{
	}
	return Var0;
}

int func_1136(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_806(Param0);
	}
	return -1;
}

bool func_1137()
{
	return !Global_1572887.f_9;
}

int func_1138(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_APPAREL"):
			return 1;
		case joaat("MPC_SYSTEM_TAG_INFO_CHEST_APPAREL"):
			return 2;
		case joaat("MPC_SYSTEM_TAG_INFO_LEG_APPAREL"):
			return 4;
		case joaat("MPC_SYSTEM_TAG_INFO_APPAREL"):
			return 8;
		case joaat("MPC_SYSTEM_TAG_INFO_BODY"):
			return 16;
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_FEATURES"):
			return 32;
		case joaat("MPC_SYSTEM_TAG_INFO_HAIR"):
			return 64;
		case joaat("MPC_SYSTEM_TAG_INFO_UPPER_BODY"):
			return 256;
		case joaat("MPC_SYSTEM_TAG_INFO_LOWER_BODY"):
			return 512;
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_OVERLAY"):
			return 1024;
		case -915377750:
			return 2048;
		case -1283403230:
			return 4096;
		case 1024778115:
			return 8192;
		case 75507907:
			return 16384;
		case -1678578495:
			return 32768;
		case -1925540957:
			return 65536;
		case -1932005642:
			return 131072;
		case -803648582:
			return 128;
		case 351949263:
			return 262144;
		case -597281578:
			return 524288;
		case 465720259:
			return 1048576;
		case 396349281:
			return 2097152;
		case -376594188:
			return -1;
		case -663436545:
			return 112;
		case 1042019528:
			return 2160;
		case -141044514:
			return 8304;
		case 884232794:
			return 16496;
		case 836721350:
			return 40960;
		case -1062102573:
			return 65601;
		case -884591393:
			return 96;
		case -1886898087:
			return 32880;
		case -1629261761:
			return 2049;
		case -366477279:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_1139(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1185(&(uParam0->f_1[iVar0 /*3*/]), 2))
		{
			if (func_1186(iVar0, iParam1))
			{
				vVar4 = { func_1187(iVar0, -1) };
				if (((!bParam4 && vVar4.x != Global_1952637.f_83[iVar0 /*12*/]) && vVar4.x != 0) && (uParam0->f_1[iVar0 /*3*/] != vVar4.x || uParam0->f_1[iVar0 /*3*/].f_1 != vVar4.y))
				{
					uParam0->f_1[iVar0 /*3*/] = { vVar4 };
				}
				if (func_1188(iVar0, 4))
				{
					func_1189(iVar0, 4, 6);
				}
			}
			else
			{
				if (bParam3)
				{
					func_1190(iVar0, 4, 6);
				}
				Jump @205; //curOff = 171
				if (bParam2)
				{
					vVar1.x = Global_1952637.f_83[iVar0 /*12*/];
					uParam0->f_1[iVar0 /*3*/] = { vVar1 };
				}
			}
			iVar0++;
		}
	}
}

void func_1140(int iParam0, int iParam1, int iParam2)
{
	Global_1952637.f_83[func_260(iParam0, 1) /*12*/].f_11 = (Global_1952637.f_83[func_260(iParam0, 1) /*12*/].f_11 || iParam1);
}

bool func_1141(int iParam0)
{
	int iVar0;
	var uVar1;

	Global_1952637.f_1043.f_2 = 0;
	iVar0 = 1226838104;
	func_1025(&(Global_1952637.f_1043), iVar0, -367421157, 1409451727, 1, iParam0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1952637.f_1043));
	if (!DATAFILE::_0x44B3A36933AC009C(&uVar1, &(Global_1952637.f_1043), 1409451727))
	{
		return false;
	}
	return true;
}

int func_1142(int iParam0)
{
	var uVar0[5];
	int iVar6;

	if (!func_88(iParam0, 0))
	{
		return 0;
	}
	iVar6 = ITEMDATABASE::_0x8870895BA5ED9385(iParam0, 761377030, &uVar0);
	if (iVar6 > 0)
	{
		return uVar0[0];
	}
	return 0;
}

void func_1143(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (func_153(uParam0->f_1[34 /*3*/], -166674229))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		bVar1 = func_1188(iVar0, 16);
		if (bVar1)
		{
			func_1189(iVar0, 16, 9);
		}
		if (Global_1952637.f_83[iVar0 /*12*/].f_3[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
		{
		}
		else
		{
			if (bVar1)
			{
				func_596(iVar0, iParam3);
			}
			if (!bParam2 && func_1142(uParam0->f_1[iVar0 /*3*/]) != 0)
			{
			}
			else if (func_1186(iVar0, iParam1) && !bVar1)
			{
				uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
				uParam0->f_1[iVar0 /*3*/].f_1 = 0;
				func_598(uParam0, uParam0->f_1[iVar0 /*3*/], iVar0, 1, iParam3);
				func_596(iVar0, iParam3);
			}
			else if (bVar1 && !bParam2)
			{
				func_598(uParam0, uParam0->f_1[iVar0 /*3*/], iVar0, 0, iParam3);
			}
		}
		iVar0++;
	}
}

int func_1144(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<10> Var1;
	int iVar15;
	int iVar16;

	Var1.f_9 = -1591664384;
	iVar16 = 0;
	if (func_588() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar16 = 1;
	}
	iParam2 |= 28;
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (!func_207(&Var1, iVar0, iParam0, iParam1))
		{
		}
		else if (PED::_GET_PED_COMPONENT_CATEGORY(Var1.f_4, iVar16, true) == 0)
		{
			if ((Var1.f_4 != joaat("CLOTHING_ITEM_M_BEARD_STUBBLE") && Var1.f_4 != 1326838792) && Var1.f_4 != -230310728)
			{
			}
			else if (func_1142(Var1.f_4) != 0)
			{
			}
			else if (func_153(Var1.f_4, -166674229))
			{
			}
			else if (func_153(Var1.f_4, 525391395))
			{
			}
			else
			{
				iVar15 = func_165(Var1.f_4);
				if (func_1192(iParam2, func_1191(iVar15)))
				{
				}
				else
				{
					return Var1.f_4;
				}
			}
			iVar0++;
			return 0;
		}
	}
}

void func_1145(var uParam0, int iParam1, int iParam2)
{
	if (func_153(uParam0->f_1[iParam1 /*3*/], 343781202))
	{
		func_851(uParam0, uParam0->f_1[iParam1 /*3*/]);
	}
	else
	{
		uParam0->f_1[iParam1 /*3*/] = Global_1952637.f_83[iParam1 /*12*/];
		uParam0->f_1[iParam1 /*3*/].f_1 = 0;
		func_596(iParam1, iParam2);
	}
}

bool func_1146(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 28, uParam2, 0);
}

bool func_1147(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 25, uParam2, 0);
}

bool func_1148(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

void func_1149(int iParam0)
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
	func_1150(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 0;
}

void func_1150(int iParam0)
{
	if (Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

struct<4> func_1151(int iParam0, int iParam1)
{
	struct<5> Var0;

	Var0 = { func_1193(iParam0) };
	return func_1194(iParam0, iParam1, Var0, Var0.f_4);
}

bool func_1152(int iParam0)
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

struct<16> func_1153(int iParam0, struct<4> Param1, int iParam5, int iParam6, bool bParam7)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_4 = { Param1 };
	Var0 = { func_281(iParam0, Var0.f_4, iParam5, 1) };
	Var0.f_8 = iParam0;
	Var0.f_9 = iParam6;
	Var0.f_11 = iParam5;
	if (bParam7)
	{
		Var0.f_15 = func_214(iParam0, joaat("DEFAULT"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_603() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_1154(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<2> Var1;
	var uVar13[15];
	int iVar29;
	int iVar30;

	if (!func_76(0) || func_77())
	{
		iVar0 = iParam0;
		Var1.f_1 = 10;
		func_1196(iParam1, func_1195(iParam2), &Var1, 1);
		if (func_1197(iVar0, &Var1, 0, 0))
		{
		}
		func_140(501, 0);
		return 0;
	}
	PED::_0xB29C553BA582D09E(&uVar13, iParam0, iParam1, func_1195(iParam2));
	iVar29 = 0;
	while (iVar29 < 15)
	{
		if ((func_88(uVar13[iVar29], 0) && !func_153(uVar13[iVar29], 1286414894)) && !uVar13[iVar29] == iParam2)
		{
			func_201(uVar13[iVar29], 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			if (iParam3 != 0)
			{
				if (iParam3 == uVar13[iVar29])
				{
					iVar30++;
				}
			}
			else
			{
				iVar30++;
			}
		}
		iVar29++;
	}
	func_194(func_76(0), 0, 0);
	return iVar30;
}

int func_1155(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<14> Var0;
	struct<16> Var14;
	int iVar30;
	struct<17> Var31;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return -1;
	}
	if (func_522(iParam0))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	if (!func_397(*uParam1, &Var0, 1, 0, -1))
	{
		return -1;
	}
	if (Var0.f_13)
	{
		return -1;
	}
	if (iParam2 < 0)
	{
		iParam2 = Var0.f_11;
	}
	else if (iParam2 > Var0.f_11)
	{
		iParam2 = Var0.f_11;
	}
	Var14 = { func_1060(&Var0, 0) };
	Var14.f_9 = iParam2;
	Var14.f_12 = iParam3;
	iVar30 = -1;
	iVar30 = func_489(joaat("USE"), &Var14, bParam5);
	if (bParam4 && iVar30 != -1)
	{
		Var31.f_7 = -142743235;
		Var31.f_16 = -1;
		Var31 = 1;
		func_233(iVar30, Var31);
	}
	return iVar30;
}

float func_1156(int iParam0)
{
	return (PLAYER::_0x592F58BC4D2A2CF3(iParam0, 0) - IntToFloat(func_1198(2)));
}

bool func_1157(int iParam0)
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
	iVar0 = func_1107(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_1106(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_1105(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_1102(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_1103(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_1104(iParam0);
	if (iVar5 < 1 || iVar5 > func_1108(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

int func_1158(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 0;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

char* func_1159(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HealthCoreValue";
		case 1:
			return "StaminaCoreValue";
		case 2:
			return "DeadEyeCoreValue";
		default:
			break;
	}
	return "";
}

char* func_1160(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "isLowHealthCoreActive";
		case 1:
			return "isLowStaminaCoreActive";
		case 2:
			return "isLowDeadEyeCoreActive";
		default:
			break;
	}
	return "";
}

void func_1161(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_791(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200.f_1431.f_6[iParam0 /*3*/] = fParam1;
			break;
		case 1:
			Global_1956200.f_1565.f_2.f_6[iParam0 /*3*/] = fParam1;
			break;
		default:
			break;
	}
}

void func_1162(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_791(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200.f_1431.f_16[iParam0 /*3*/].f_2 = uParam1;
			break;
		case 1:
			Global_1956200.f_1565.f_2.f_16[iParam0 /*3*/].f_2 = uParam1;
			break;
		default:
			break;
	}
}

bool func_1163(int iParam0)
{
	if (func_1087(iParam0))
	{
		return true;
	}
	else if (func_1199(iParam0))
	{
		return true;
	}
	return false;
}

void func_1164(int iParam0, float fParam1, int iParam2)
{
	if (fParam1 < 0f)
	{
		return;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_791(1);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200.f_1431.f_26[iParam0] = fParam1;
			break;
		case 1:
			Global_1956200.f_1565.f_2.f_26[iParam0] = fParam1;
			break;
		default:
			break;
	}
}

int func_1165(int iParam0, int iParam1)
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

int func_1166(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_1200(iParam0))
	{
		return 0;
	}
	iVar0 = func_1165(iParam0, 1);
	if (!func_1201(Global_1146212.f_35859.f_919[iVar0 /*12*/]))
	{
		return 1;
	}
	iVar3 = func_1202(Global_1146212.f_35859.f_919[iVar0 /*12*/], 1);
	iVar4 = 0;
	while (iVar4 < Global_1146212.f_35859[iVar3 /*6*/].f_5)
	{
		iVar1 = Global_1146212.f_35859[iVar3 /*6*/][iVar4];
		switch (func_1203(iParam0, iVar1))
		{
			case 0:
				func_1204(iVar1, iParam0, iVar4);
				break;
			case 1:
				iVar5 = 0;
				while (iVar5 < Global_1146212.f_35859.f_11700)
				{
					if (Global_1146212.f_35859.f_9503[iVar5 /*3*/] != iVar1 || Global_1146212.f_35859.f_9503[iVar5 /*3*/].f_1 != iParam0)
					{
					}
					else
					{
						func_1204(iVar1, iParam0, iVar4);
						func_1205(&(Global_1146212.f_35859.f_9503[iVar5 /*3*/]));
						Global_1146212.f_35859.f_11700 = (Global_1146212.f_35859.f_11700 - 1);
						Global_1146212.f_35859.f_9503[iVar5 /*3*/] = { Global_1146212.f_35859.f_9503[Global_1146212.f_35859.f_11700 /*3*/] };
						func_1205(&(Global_1146212.f_35859.f_9503[Global_1146212.f_35859.f_11700 /*3*/]));
					}
					else
					{
						iVar5++;
					}
				}
				break;
			case 2:
				Jump @606; //curOff = 387
				iVar2 = func_1206(iVar1, 1);
				func_1207(iVar2, -1);
				if (Global_1146212.f_35859.f_3116[iVar2 /*31*/].f_29 <= 0)
				{
					func_1208(iVar2, 0);
					iVar6 = 0;
					while (iVar6 < Global_1146212.f_35859.f_9502)
					{
						if (Global_1146212.f_35859.f_9302[iVar6] != iVar1)
						{
						}
						else
						{
							Global_1146212.f_35859.f_9302[iVar6] = -1;
							Global_1146212.f_35859.f_9502 = (Global_1146212.f_35859.f_9502 - 1);
							Global_1146212.f_35859.f_9302[iVar6] = Global_1146212.f_35859.f_9302[Global_1146212.f_35859.f_9502];
							Global_1146212.f_35859.f_9302[Global_1146212.f_35859.f_9502] = -1;
						}
						else
						{
							iVar6++;
						}
					}
				}
				iVar4++;
			}
			Global_1146212.f_35859.f_919[iVar0 /*12*/] = -1;
			func_1209(&(Global_1146212.f_35859.f_919[iVar0 /*12*/]));
			return 1;
		}

void func_1167(int iParam0, int iParam1)
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

void func_1168(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_1169(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1103(*iParam0);
	iVar1 = func_1102(*iParam0);
	if (iParam1 < 1 || iParam1 > func_1108(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_1170(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_1171(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_1172(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

void func_1173(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_1210(&(uParam0->f_4));
}

int func_1174()
{
	return Global_1915715.f_20241;
}

bool func_1175(struct<17> Param0)
{
	if (!func_726(Param0.f_16))
	{
		return false;
	}
	return true;
}

bool func_1176(int* iParam0, int iParam1)
{
	int iVar0;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		if (!func_1211(iParam0, iParam1))
		{
			return false;
		}
	}
	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*iParam0);
	if (iVar0 != iParam1 || NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0) >= 50)
	{
		if (!func_1212(iParam0))
		{
			return false;
		}
		if (!func_1211(iParam0, iParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_1177(int* iParam0, bool bParam1)
{
	iParam0->f_2++;
	if (bParam1)
	{
		return func_1212(iParam0);
	}
	return true;
}

bool func_1178(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = ITEMDATABASE::_0x7A35A72A692BE9DB(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (ITEMDATABASE::_0x3A0B667ABFF87F6E(iParam0, iVar0, uParam2) && *uParam2 == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1179(int iParam0, int iParam1, var uParam2, int iParam3)
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
	if (!ITEMDATABASE::_0xA97EE5E4589FCF5A(iParam0, &Var7) || Var7 == 0)
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
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_165((*uParam2)[iVar0 /*2*/]) != -829303394)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_1180(int iParam0, var uParam1, int iParam2)
{
	if (uParam1->f_9 < 1)
	{
		return false;
	}
	if (!func_88(uParam1->f_8, 0) && !func_484(func_291(uParam1->f_8), 2))
	{
		return false;
	}
	if (func_16(iParam2, 128))
	{
		if (func_165(uParam1->f_8) == 0)
		{
			return false;
		}
	}
	if (func_16(iParam2, 16))
	{
		if (!func_740(iParam0, uParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_1181(int iParam0, int iParam1, var uParam2, var uParam3)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 16, uParam3, *uParam3);
}

int func_1182(int iParam0)
{
	var uVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_SATCHEL_DATA(iParam0, &uVar0))
	{
		return -1;
	}
	return uVar0;
}

bool func_1183(int iParam0, int iParam1, int iParam2)
{
	if (!func_88(iParam1, 0))
	{
		return false;
	}
	return func_1065(iParam0, iParam1) >= iParam2;
}

int func_1184(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_88(iParam1, 0))
	{
		return 0;
	}
	if (iParam2 < 1)
	{
		return 0;
	}
	Var0 = { func_1193(iParam0) };
	Var5 = { func_1194(iParam0, iParam1, Var0, Var0.f_4) };
	return func_1213(iParam0, iParam1, &Var5, iParam2, iParam3, bParam4);
}

bool func_1185(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_1186(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 39)
	{
		return false;
	}
	return (Global_1952637.f_83[iParam0 /*12*/].f_10 && iParam1) != 0;
}

Vector3 func_1187(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	return Global_17411.f_55.f_644.f_33[iParam1 /*120*/].f_1.f_1[iParam0 /*3*/];
}

bool func_1188(int iParam0, int iParam1)
{
	return (Global_1952637.f_83[iParam0 /*12*/].f_11 && iParam1) != 0;
}

void func_1189(int iParam0, int iParam1, int iParam2)
{
	Global_1952637.f_83[iParam0 /*12*/].f_11 = (Global_1952637.f_83[iParam0 /*12*/].f_11 - (Global_1952637.f_83[iParam0 /*12*/].f_11 && iParam1));
}

void func_1190(int iParam0, int iParam1, int iParam2)
{
	Global_1952637.f_83[iParam0 /*12*/].f_11 = (Global_1952637.f_83[iParam0 /*12*/].f_11 || iParam1);
}

int func_1191(int iParam0)
{
	switch (iParam0)
	{
		case 502936876:
			return 1;
		case 684307653:
			return 2;
		case 1759215194:
			return 4;
		case -1740828670:
			return 8;
		case 344283346:
			return 16;
		default:
			break;
	}
	return 0;
}

bool func_1192(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

struct<5> func_1193(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_1194(iParam0, joaat("CHARACTER"), func_603(), -1591664384) };
	Var0.f_4 = 1084182731;
	return Var0;
}

struct<4> func_1194(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, int iParam6)
{
	struct<4> Var0;

	if (!func_88(iParam1, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(iParam0, &uParam2, iParam1, iParam6, &Var0);
	return Var0;
}

int func_1195(int iParam0)
{
	if (func_153(iParam0, 1064293907))
	{
		return 2;
	}
	else if (func_153(iParam0, -1218707194))
	{
		return 1;
	}
	else if (func_153(iParam0, 1888974372))
	{
		return 0;
	}
	return 1;
}

struct<12> func_1196(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("SKINNING_DAMAGE_POOR_QUALITY_POOR");
					break;
				case 1:
					iVar0 = joaat("SKINNING_DAMAGE_POOR_QUALITY_GOOD");
					break;
				case 2:
					iVar0 = joaat("SKINNING_DAMAGE_POOR_QUALITY_PERFECT");
					break;
				case 3:
					iVar0 = joaat("SKINNING_DAMAGE_POOR_QUALITY_RARE");
					break;
				case 4:
					iVar0 = joaat("SKINNING_DAMAGE_POOR_QUALITY_LEGENDARY");
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("SKINNING_DAMAGE_GOOD_QUALITY_POOR");
					break;
				case 1:
					iVar0 = joaat("SKINNING_DAMAGE_GOOD_QUALITY_GOOD");
					break;
				case 2:
					iVar0 = joaat("SKINNING_DAMAGE_GOOD_QUALITY_PERFECT");
					break;
				case 3:
					iVar0 = joaat("SKINNING_DAMAGE_GOOD_QUALITY_RARE");
					break;
				case 4:
					iVar0 = joaat("SKINNING_DAMAGE_GOOD_QUALITY_LEGENDARY");
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("SKINNING_DAMAGE_PERFECT_QUALITY_POOR");
					break;
				case 1:
					iVar0 = joaat("SKINNING_DAMAGE_PERFECT_QUALITY_GOOD");
					break;
				case 2:
					iVar0 = joaat("SKINNING_DAMAGE_PERFECT_QUALITY_PERFECT");
					break;
				case 3:
					iVar0 = joaat("SKINNING_DAMAGE_PERFECT_QUALITY_RARE");
					break;
				case 4:
					iVar0 = joaat("SKINNING_DAMAGE_PERFECT_QUALITY_LEGENDARY");
					break;
			}
			break;
	}
	if (bParam3)
	{
		func_510(uParam2, joaat("LOOT_TYPE_BREAKDOWN"));
	}
	else
	{
		func_510(uParam2, joaat("LOOT_TYPE_SKINNING"));
	}
	func_510(uParam2, iVar0);
	return *uParam2;
}

int func_1197(int iParam0, var uParam1, int iParam2, int iParam3)
{
	var uVar0;

	if (0 == iParam0)
	{
		return 0;
	}
	return func_511(iParam0, uParam1, &uVar0, iParam2, iParam3);
}

int func_1198(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_899(2) * 2;
		case 1:
			return func_903(2) * 2;
		case 2:
			return func_901(2) * 2;
		default:
			break;
	}
	return -1;
}

bool func_1199(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return true;
		case 13:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1200(int iParam0)
{
	int iVar0;

	iVar0 = func_1165(iParam0, 1);
	if (iVar0 < 2 || iVar0 >= 183)
	{
		return false;
	}
	return true;
}

bool func_1201(int iParam0)
{
	int iVar0;

	iVar0 = func_1202(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 153)
	{
		return false;
	}
	return true;
}

int func_1202(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_3"):
			return 100;
		case joaat("CONTENT__PREDATOR__LEVEL_0"):
			return 136;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_3"):
			return 63;
		case -2082434331:
			return 152;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_2"):
			return 65;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_2"):
			return 93;
		case -2038430863:
			return 151;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_1"):
			return 64;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_2"):
			return 35;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_3"):
			return 6;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2"):
			return 56;
		case joaat("CONTENT__PREDATOR__LEVEL_3"):
			return 139;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_3"):
			return 54;
		case joaat("UNLOCK__ROLE__POTENTIAL_BONUS"):
			return 110;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_2"):
			return 78;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_1"):
			return 80;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_2"):
			return 62;
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME"):
			return 73;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_2"):
			return 41;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_1"):
			return 25;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_1"):
			return 92;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2"):
			return 47;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_1"):
			return 61;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_3"):
			return 3;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_1"):
			return 49;
		case joaat("CONTENT__ACTIVE_DEED__FIRE_VULNERABILITY"):
			return 148;
		case joaat("UNLOCK__ROLE__AWARENESS_BONUS"):
			return 107;
		case joaat("UNLOCK__ROLE__INTUITION_BONUS"):
			return 111;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1"):
			return 55;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_3"):
			return 9;
		case joaat("CONTENT__PREDATOR__LEVEL_1"):
			return 137;
		case -1246069683:
			return 124;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1"):
			return 46;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_1"):
			return 74;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_3"):
			return 69;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_1"):
			return 7;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_4"):
			return 131;
		case joaat("CONTENT__PREDATOR__LEVEL_7"):
			return 143;
		case -1105699593:
			return 153;
		case -1047626954:
			return 118;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_1"):
			return 1;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_3"):
			return 79;
		case -980934770:
			return 125;
		case joaat("CONTENT__PREDATOR__LEVEL_4"):
			return 140;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_5"):
			return 132;
		case joaat("CONTENT__PREDATOR__LEVEL_6"):
			return 142;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_3"):
			return 60;
		case -821191074:
			return 115;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_1"):
			return 40;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3"):
			return 48;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_1"):
			return 77;
		case joaat("ABILITY_CARD__HANGMAN_TIER_2"):
			return 17;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_2"):
			return 2;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_3"):
			return 72;
		case joaat("EQUIPMENT__NED_KELLY_FREEROAM"):
			return 121;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_2"):
			return 59;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_3"):
			return 85;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_3"):
			return 94;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_1"):
			return 4;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_2"):
			return 68;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_1"):
			return 58;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_1"):
			return 128;
		case joaat("EQUIPMENT__NED_KELLY_ADVERSARY"):
			return 119;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_1"):
			return 10;
		case joaat("CONTENT__HUNTED__MASKED"):
			return 146;
		case joaat("CONTENT__PASSIVE_MODE"):
			return 135;
		case -193167881:
			return 127;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_3"):
			return 30;
		case joaat("EQUIPMENT__NED_KELLY_GOLDEN"):
			return 122;
		case joaat("CONSUMABLE__DAILY_STEW"):
			return 150;
		case joaat("CONTENT__PREDATOR__LEVEL_5"):
			return 141;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_1"):
			return 67;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_1"):
			return 43;
		case joaat("UNLOCK__ROLE__EFFICIENCY_BONUS"):
			return 106;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_3"):
			return 39;
		case -1:
			return 0;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_2"):
			return 8;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_2"):
			return 11;
		case 130533095:
			return 126;
		case joaat("ABILITY_CARD__HANGMAN_TIER_3"):
			return 18;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_2"):
			return 44;
		case 158579484:
			return 117;
		case joaat("STATUS_EFFECT__TOXIC_MOONSHINE"):
			return 101;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_3"):
			return 15;
		case joaat("UNLOCK__ROLE__EAGLE_EYE_PLUS"):
			return 113;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_6"):
			return 133;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_1"):
			return 86;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_2"):
			return 71;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_2"):
			return 29;
		case joaat("UNLOCK__ROLE__PERCEPTION_BONUS"):
			return 105;
		case joaat("STATUS_EFFECT__POISON"):
			return 102;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_3"):
			return 12;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_3"):
			return 51;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_7"):
			return 134;
		case joaat("UNLOCK__ROLE__PROTECTION_MOONSHINE_BONUS"):
			return 109;
		case 549687162:
			return 145;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_1"):
			return 28;
		case joaat("ABILITY_CARD__HANGMAN_TIER_1"):
			return 16;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_2"):
			return 26;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_1"):
			return 98;
		case joaat("CONTENT__ACTIVE_DEED__BOUNTER_HUNTER_ACCURACY_DEBUFF"):
			return 149;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_3"):
			return 45;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_2"):
			return 50;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_3"):
			return 88;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_3"):
			return 36;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_2"):
			return 90;
		case joaat("CONTENT__PREDATOR__LEVEL_8"):
			return 144;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_2"):
			return 81;
		case joaat("UNLOCK__ROLE__MASTER_DISTILLER_BONUS"):
			return 114;
		case 808176588:
			return 116;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_2"):
			return 38;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_1"):
			return 70;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_3"):
			return 21;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_2"):
			return 14;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_1"):
			return 89;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2"):
			return 96;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_3"):
			return 82;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_2"):
			return 87;
		case joaat("UNLOCK__ROLE__FOCUS_BONUS"):
			return 104;
		case 1130659268:
			return 123;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_2"):
			return 20;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_2"):
			return 75;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_1"):
			return 31;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3"):
			return 97;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_1"):
			return 19;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_2"):
			return 32;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_3"):
			return 24;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_2"):
			return 129;
		case joaat("UNLOCK__ROLE__DIVINATION_BONUS"):
			return 112;
		case joaat("CONTENT__PREDATOR__LEVEL_2"):
			return 138;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_1"):
			return 83;
		case joaat("CONTENT__ACTIVE_DEED__EAGLE_EYE_GENERIC_BUFF"):
			return 147;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3"):
			return 57;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_1"):
			return 22;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_3"):
			return 33;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_3"):
			return 130;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_1"):
			return 13;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_2"):
			return 84;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1"):
			return 95;
		case joaat("EQUIPMENT__NED_KELLY_COOP"):
			return 120;
		case joaat("STATUS_EFFECT__TRACKING"):
			return 103;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_2"):
			return 23;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_2"):
			return 99;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_3"):
			return 66;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_1"):
			return 52;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_3"):
			return 27;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_3"):
			return 76;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_2"):
			return 5;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_3"):
			return 42;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_1"):
			return 37;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_1"):
			return 34;
		case joaat("UNLOCK__ROLE__PROTECTION_TRADER_BONUS"):
			return 108;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_2"):
			return 53;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_3"):
			return 91;
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

int func_1203(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_1214(iParam0);
	iVar1 = Global_1296859;
	iVar2 = func_1206(iParam1, 1);
	switch (Global_1146212.f_35859.f_3116[iVar2 /*31*/].f_1)
	{
		case joaat("ON_DISABLE"):
			if (iVar1 == iVar0)
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
		case joaat("DURATION"):
		case joaat("DURATION_OR_MISS"):
		case joaat("ALLY_LEAVE_DEADEYE"):
		case 1002704651:
		case 1270499458:
			return 1;
		default:
			if (iVar1 == iVar0)
			{
				return 1;
			}
			break;
	}
	return 2;
}

int func_1204(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;

	if (!func_1200(iParam1))
	{
		return 0;
	}
	if (!func_1215(iParam0))
	{
		return 0;
	}
	iVar0 = func_1206(iParam0, 1);
	func_1216(iParam0, iParam1, iParam2);
	if (func_1217(Global_1146212.f_35859.f_3116[iVar0 /*31*/]) && func_1218(iParam0, Global_1146212.f_35859.f_3116[iVar0 /*31*/].f_4))
	{
		vVar1 = { func_1219(Global_1146212.f_35859.f_3116[iVar0 /*31*/].f_4) };
		if (func_1220(vVar1))
		{
			if (func_1221(vVar1.x, vVar1.y, vVar1.z))
			{
				func_1222(Global_1146212.f_35859.f_3116[iVar0 /*31*/].f_4, vVar1.x, vVar1.y, vVar1.z);
			}
			else
			{
				func_1223(Global_1146212.f_35859.f_3116[iVar0 /*31*/].f_4);
			}
		}
		else
		{
			func_1223(Global_1146212.f_35859.f_3116[iVar0 /*31*/].f_4);
		}
	}
	return 1;
}

void func_1205(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
}

int func_1206(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("UNLOCK__ROLE__POTENTIAL_BONUS_EFFECT"):
			return 145;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_2_EFFECT"):
			return 108;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_1_EFFECT"):
			return 90;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2_LOCAL_EFFECT"):
			return 79;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_3_EFFECT"):
			return 60;
		case joaat("STATUS_EFFECT__POISON_EFFECT"):
			return 137;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_2_EFFECT"):
			return 91;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_2_EFFECT"):
			return 75;
		case -2019073637:
			return 198;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_3_EFFECT"):
			return 26;
		case joaat("CONTENT__PREDATOR__LEVEL_2_EFFECTS"):
			return 180;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_3_EFFECT"):
			return 92;
		case joaat("CONTENT__ACTIVE_DEED__FIRE_VULNERABILITY_EFFECT"):
			return 194;
		case joaat("ABILITY_CARD__HANGMAN_TIER_2_EFFECT"):
			return 28;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2_DAMAGE_TAKEN_EFFECT"):
			return 130;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_3_EFFECT"):
			return 49;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_3_EFFECT"):
			return 22;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_1_EFFECT"):
			return 55;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_DEALT_ON_HORSEBACK_INDICATOR"):
			return 6;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_2_EFFECT"):
			return 134;
		case joaat("ABILITY_CARD__HANGMAN_TIER_3_EFFECT"):
			return 29;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_3_EFFECT"):
			return 16;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_3_EFFECT"):
			return 112;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_3_EFFECT"):
			return 106;
		case joaat("ABILITY_CARD__HANGMAN_INDICATOR"):
			return 30;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGED_INDICATOR"):
			return 8;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_2_EFFECT"):
			return 111;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_2_EFFECT"):
			return 96;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_3_EFFECT"):
			return 45;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1_EFFECT"):
			return 63;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_2_EFFECT"):
			return 38;
		case joaat("CONTENT__PREDATOR__BASE_EFFECTS"):
			return 188;
		case joaat("EQUIPMENT__NED_KELLY_BASE_IMMUNITIES"):
			return 156;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_INDICATOR"):
			return 50;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_1_EFFECT"):
			return 117;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_3_EFFECT"):
			return 39;
		case joaat("CONTENT__PREDATOR__LEVEL_4_EFFECTS"):
			return 182;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_3_EFFECT"):
			return 109;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_3_EFFECT"):
			return 33;
		case -1394912816:
			return 199;
		case -1391351739:
			return 166;
		case joaat("ABILITY_CARD__HANGMAN_TIER_1_EFFECT"):
			return 27;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_1_EFFECT"):
			return 110;
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_1_COST"):
			return 1;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_PENALTY"):
			return 46;
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_2_COST"):
			return 2;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3_DAMAGE_TAKEN_EFFECT"):
			return 132;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_3_EFFECT"):
			return 119;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_3_EFFECT"):
			return 76;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_AURA"):
			return 61;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_7_EFFECT"):
			return 173;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_1_EFFECT"):
			return 47;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_1_EFFECT"):
			return 74;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_1_EFFECT"):
			return 31;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_1_EFFECT"):
			return 123;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_2_EFFECT"):
			return 124;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_2_EFFECT"):
			return 11;
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME_INDICATOR"):
			return 103;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_2_EFFECT"):
			return 21;
		case joaat("CONTENT__PREDATOR__LEVEL_6_EFFECTS"):
			return 184;
		case -749371485:
			return 164;
		case joaat("UNLOCK__ROLE__AWARENESS_BONUS_EFFECT"):
			return 142;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3_LOCAL_EFFECT"):
			return 81;
		case joaat("UNLOCK__ROLE__EAGLE_EYE_PLUS_EFFECT"):
			return 148;
		case joaat("CONTENT__ACTIVE_DEED__EAGLE_EYE_GENERIC_BUFF_EFFECT"):
			return 193;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_3_EFFECT"):
			return 57;
		case joaat("CONTENT__PREDATOR__LEVEL_3_EFFECTS"):
			return 181;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_2_EFFECT"):
			return 48;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_2_EFFECT"):
			return 59;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_3_EFFECT"):
			return 97;
		case joaat("CONTENT__PREDATOR__LEVEL_7_EFFECTS"):
			return 185;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_1_EFFECT"):
			return 104;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_3_EFFECT"):
			return 19;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_1_EFFECT"):
			return 133;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_1_EFFECT"):
			return 113;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_INDICATOR"):
			return 23;
		case joaat("EQUIPMENT__NED_KELLY_FREEROAM_EFFECT"):
			return 160;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_TAKEN_INDICATOR"):
			return 5;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_AURA"):
			return 13;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3_COST"):
			return 66;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_DEALT_INDICATOR"):
			return 4;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_1_COST"):
			return 51;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_6_EFFECT"):
			return 172;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_PENALTY"):
			return 68;
		case -254950601:
			return 152;
		case -242870769:
			return 163;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_2_EFFECT"):
			return 35;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_2_EFFECT"):
			return 105;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_2_EFFECT"):
			return 41;
		case joaat("EQUIPMENT__NED_KELLY_BASE_EFFECTS"):
			return 155;
		case -124368414:
			return 197;
		case -106398498:
			return 153;
		case -97000889:
			return 86;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_3_EFFECT"):
			return 169;
		case -1:
			return 0;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_2_EFFECT"):
			return 56;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_3_EFFECT"):
			return 125;
		case joaat("ABILITY_CARD__DEFAULT_WINDED_INDICATOR"):
			return 9;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_1_EFFECT"):
			return 69;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_2_EFFECT"):
			return 15;
		case joaat("CONTENT__PASSIVE_MODE__IMMUNITIES_EFFECT"):
			return 177;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2_COST"):
			return 64;
		case joaat("CONTENT__PASSIVE_MODE__MOUNT_EFFECTS"):
			return 175;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_1_EFFECT"):
			return 98;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1_LOCAL_EFFECT"):
			return 77;
		case 275909046:
			return 151;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_5_EFFECT"):
			return 171;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_INDICATOR"):
			return 54;
		case joaat("STATUS_EFFECT__TOXIC_MOONSHINE_EFFECT"):
			return 136;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_3_EFFECT"):
			return 89;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1_DAMAGE_DEALT_EFFECT"):
			return 127;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2_DAMAGE_DEALT_EFFECT"):
			return 129;
		case 558636891:
			return 187;
		case joaat("CONSUMABLE__DAILY_STEW_EFFECT"):
			return 196;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2_REMOTE_EFFECT"):
			return 80;
		case 634217179:
			return 150;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_2_EFFECT"):
			return 70;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_1_EFFECT"):
			return 95;
		case joaat("CONTENT__ACTIVE_DEED__BOUNTER_HUNTER_ACCURACY_DEBUFF_EFFECT"):
			return 195;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_1_EFFECT"):
			return 107;
		case joaat("UNLOCK__ROLE__FOCUS_BONUS_EFFECT"):
			return 139;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_1_EFFECT"):
			return 20;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3_REMOTE_EFFECT"):
			return 82;
		case joaat("CONTENT__PREDATOR__LEVEL_0_EFFECTS"):
			return 178;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2_EFFECT"):
			return 65;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_1_EFFECT"):
			return 58;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_1_EFFECT"):
			return 83;
		case joaat("UNLOCK__ROLE__MASTER_DISTILLER_BONUS_EFFECT"):
			return 149;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_2_EFFECT"):
			return 18;
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME_COST"):
			return 102;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_4_EFFECT"):
			return 170;
		case joaat("CONTENT__PREDATOR__LEVEL_8_EFFECTS"):
			return 186;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_2_EFFECT"):
			return 84;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_3_EFFECT"):
			return 100;
		case joaat("CONTENT__HUNTED__MASKED_EFFECTS"):
			return 192;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_DEADEYE_INDICATOR"):
			return 93;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3_DAMAGE_DEALT_EFFECT"):
			return 131;
		case joaat("CONTENT__PREDATOR__LEVEL_5_EFFECTS"):
			return 183;
		case joaat("EQUIPMENT__NED_KELLY_BASE_RESTRICTIONS"):
			return 157;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_1_EFFECT"):
			return 17;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_3_EFFECT"):
			return 122;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_3_EFFECT"):
			return 115;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_1_EFFECT"):
			return 34;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_2_EFFECT"):
			return 32;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_1_EFFECT"):
			return 43;
		case joaat("STATUS_EFFECT__TRACKING_EFFECT"):
			return 138;
		case joaat("CONTENT__PASSIVE_MODE__VEHICLE_EFFECTS"):
			return 176;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_3_EFFECT"):
			return 42;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_1_EFFECT"):
			return 10;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_3_EFFECT"):
			return 12;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_AURA"):
			return 73;
		case 1256374770:
			return 165;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_3_EFFECT"):
			return 36;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_1_EFFECT"):
			return 37;
		case joaat("CONTENT__PREDATOR__BASE_IMMUNITIES"):
			return 190;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_2_EFFECT"):
			return 114;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_2_EFFECT"):
			return 99;
		case 1305406380:
			return 162;
		case joaat("UNLOCK__ROLE__PROTECTION_MOONSHINE_BONUS_EFFECT"):
			return 144;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_2_EFFECT"):
			return 25;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_2_EFFECT"):
			return 88;
		case joaat("UNLOCK__ROLE__PROTECTION_TRADER_BONUS_EFFECT"):
			return 143;
		case joaat("UNLOCK__ROLE__PERCEPTION_BONUS_EFFECT"):
			return 140;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_EAGLE_EYE_INDICATOR"):
			return 94;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_2_EFFECT"):
			return 168;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_3_EFFECT"):
			return 85;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_1_EFFECT"):
			return 87;
		case 1462245043:
			return 154;
		case joaat("CONTENT__PREDATOR__BASE_EFFECTS_VULNERABLE"):
			return 189;
		case joaat("UNLOCK__ROLE__INTUITION_BONUS_EFFECT"):
			return 146;
		case joaat("CONTENT__PREDATOR__RESPAWN_EFFECTS"):
			return 191;
		case joaat("UNLOCK__ROLE__DIVINATION_BONUS_EFFECT"):
			return 147;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1_COST"):
			return 62;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1_REMOTE_EFFECT"):
			return 78;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_INDICATOR"):
			return 126;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_INDICATOR"):
			return 116;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_PENALTIES"):
			return 72;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3_EFFECT"):
			return 67;
		case joaat("ABILITY_CARD__WINNING_STREAK_INDICATOR"):
			return 101;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1_DAMAGE_TAKEN_EFFECT"):
			return 128;
		case joaat("EQUIPMENT__NED_KELLY_ADVERSARY_EFFECT"):
			return 158;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_3_EFFECT"):
			return 71;
		case joaat("CONTENT__PREDATOR__LEVEL_1_EFFECTS"):
			return 179;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_3_EFFECT"):
			return 135;
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_3_COST"):
			return 3;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_2_EFFECT"):
			return 121;
		case joaat("UNLOCK__ROLE__EFFICIENCY_BONUS_EFFECT"):
			return 141;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_1_EFFECT"):
			return 24;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_1_EFFECT"):
			return 167;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_1_EFFECT"):
			return 40;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_TAKEN_ON_HORSEBACK_INDICATOR"):
			return 7;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_3_COST"):
			return 53;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_2_EFFECT"):
			return 118;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_2_EFFECT"):
			return 44;
		case joaat("EQUIPMENT__NED_KELLY_GOLDEN_EFFECT"):
			return 161;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_2_COST"):
			return 52;
		case joaat("CONTENT__PASSIVE_MODE__DAMAGE_EFFECTS"):
			return 174;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_1_EFFECT"):
			return 120;
		case joaat("EQUIPMENT__NED_KELLY_COOP_EFFECT"):
			return 159;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_1_EFFECT"):
			return 14;
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

void func_1207(int iParam0, int iParam1)
{
	Global_1146212.f_35859.f_3116[iParam0 /*31*/].f_29 = (Global_1146212.f_35859.f_3116[iParam0 /*31*/].f_29 + iParam1);
}

void func_1208(int iParam0, int iParam1)
{
	Global_1146212.f_35859.f_3116[iParam0 /*31*/].f_29 = iParam1;
}

void func_1209(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_1[iVar0 /*2*/] = 0;
		uParam0->f_1[iVar0 /*2*/].f_1 = 0;
		iVar0++;
	}
}

void func_1210(var uParam0)
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

bool func_1211(int* iParam0, int iParam1)
{
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(iParam0, joaat("BASKET"), iParam1))
	{
		return false;
	}
	return true;
}

bool func_1212(int* iParam0)
{
	int iVar0;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		func_969(*iParam0, 0, 0, 0);
		return true;
	}
	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(*iParam0);
		func_969(*iParam0, 4, 0, 0);
		return true;
	}
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(*iParam0))
	{
		func_969(*iParam0, 2, 0, 0);
		return false;
	}
	func_969(*iParam0, 1, 0, 0);
	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*iParam0);
	if (iVar0 == 2113164098 || iVar0 == 541670136)
	{
		iParam0->f_3 = 1;
	}
	iParam0->f_1 = *iParam0;
	*iParam0 = -1;
	iParam0->f_2 = 0;
	return true;
}

int func_1213(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<12> Var0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_522(iParam1))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_1224(iParam0, *uParam2, &Var0, 0))
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
	if (!INVENTORY::_0x3E4E811480B3AE79(iParam0, uParam2, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_1214(int iParam0)
{
	if (func_1225(iParam0))
	{
		return (func_1226(iParam0) % 32);
	}
	return Global_1296859;
}

bool func_1215(int iParam0)
{
	int iVar0;

	iVar0 = func_1206(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 199)
	{
		return false;
	}
	return true;
}

int func_1216(int iParam0, int iParam1, int iParam2)
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

	iVar0 = func_1165(iParam1, 1);
	iVar1 = func_1206(iParam0, 1);
	iVar2 = func_1202(Global_1146212.f_35859.f_919[iVar0 /*12*/], 1);
	if (Global_1146212.f_35859[iVar2 /*6*/][iParam2] != iParam0)
	{
		return 0;
	}
	if (!Global_1146212.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/])
	{
		return 1;
	}
	Global_1146212.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/] = 0;
	iVar4 = 0;
	while (iVar4 < Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_16)
	{
		iVar3 = Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/];
		iVar5 = func_1227(iVar3, 1);
		if (!func_1228(iVar3))
		{
		}
		else
		{
			Global_1146212.f_2169[iVar5 /*205*/].f_1[iVar1] = (Global_1146212.f_2169[iVar5 /*205*/].f_1[iVar1] - 1);
			Global_1146212.f_2169[iVar5 /*205*/].f_201 = (Global_1146212.f_2169[iVar5 /*205*/].f_201 - func_1229(&(Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/])));
			func_1230(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_28)
	{
		iVar6 = Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/];
		if (!func_1231(iVar6))
		{
		}
		else
		{
			iVar8 = func_1232(iVar6, 1);
			Global_1146212.f_21645[iVar8 /*209*/][iVar1] = (Global_1146212.f_21645[iVar8 /*209*/][iVar1] - 1);
			if (Global_1146212.f_21645[iVar8 /*209*/][iVar1] <= 0)
			{
				MISC::_0xB909149F2BB5F6DA(&(Global_1146212.f_21645[iVar8 /*209*/].f_200), iVar1);
			}
			if (!MISC::_0x80E9C316EF84DD81(&(Global_1146212.f_21645[iVar8 /*209*/].f_200)))
			{
				Global_1146212.f_21645[iVar8 /*209*/].f_208 = 0;
				func_1233(iVar6);
			}
		}
		iVar7++;
	}
	return 1;
}

bool func_1217(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	return Param0.f_4 != 0;
}

bool func_1218(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_1215(iParam0))
	{
		return false;
	}
	if (!func_1234(iParam1))
	{
		return false;
	}
	iVar0 = func_1235(iParam1, 1);
	return Global_1146212.f_35859.f_9286[iVar0 /*3*/] == iParam0;
}

Vector3 func_1219(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_1236(iParam0);
	if (iVar0 == -1)
	{
		vVar1 = -1;
		vVar1.f_2 = -1;
		return vVar1;
	}
	return Global_1146212.f_35859.f_9503[iVar0 /*3*/];
}

bool func_1220(vector3 vParam0)
{
	if (!func_1215(vParam0.x))
	{
		return false;
	}
	if (!func_1200(vParam0.y))
	{
		return false;
	}
	if (!func_1237(vParam0.z))
	{
		return false;
	}
	return true;
}

bool func_1221(int iParam0, int iParam1, int iParam2)
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

	iVar0 = func_1165(iParam1, 1);
	iVar1 = func_1206(iParam0, 1);
	iVar2 = func_1202(Global_1146212.f_35859.f_919[iVar0 /*12*/], 1);
	if (Global_1146212.f_35859[iVar2 /*6*/][iParam2] != iParam0)
	{
		return false;
	}
	Global_1146212.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/].f_1 = Global_1296859.f_21;
	if (Global_1146212.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/])
	{
		return true;
	}
	Global_1146212.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/] = 1;
	iVar4 = 0;
	while (iVar4 < Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_16)
	{
		iVar3 = Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/];
		iVar5 = func_1227(iVar3, 1);
		if (!func_1228(iVar3))
		{
		}
		else
		{
			Global_1146212.f_2169[iVar5 /*205*/].f_1[iVar1]++;
			Global_1146212.f_2169[iVar5 /*205*/].f_201 = (Global_1146212.f_2169[iVar5 /*205*/].f_201 + func_1229(&(Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/])));
			func_1238(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_28)
	{
		iVar6 = Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/];
		if (!func_1231(iVar6))
		{
		}
		else if (!func_1239(&(Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/])))
		{
		}
		else
		{
			iVar8 = func_1232(iVar6, 1);
			Global_1146212.f_21645[iVar8 /*209*/][iVar1]++;
			MISC::_0xE84AAC1B22A73E99(&(Global_1146212.f_21645[iVar8 /*209*/].f_200), iVar1);
			if (!Global_1146212.f_21645[iVar8 /*209*/].f_208)
			{
				Global_1146212.f_21645[iVar8 /*209*/].f_208 = 1;
				func_1240(iVar6);
			}
		}
		iVar7++;
	}
	func_1241(Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_2);
	return true;
}

void func_1222(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_1234(iParam0))
	{
		return;
	}
	iVar0 = func_1235(iParam0, 1);
	if (!func_1215(iParam1))
	{
		return;
	}
	if (!func_1200(iParam2))
	{
		return;
	}
	if (!func_1237(iParam3))
	{
		return;
	}
	Global_1146212.f_35859.f_9286[iVar0 /*3*/] = iParam1;
	Global_1146212.f_35859.f_9286[iVar0 /*3*/].f_1 = iParam2;
	Global_1146212.f_35859.f_9286[iVar0 /*3*/].f_2 = iParam3;
}

void func_1223(int iParam0)
{
	int iVar0;

	if (!func_1234(iParam0))
	{
		return;
	}
	iVar0 = func_1235(iParam0, 1);
	Global_1146212.f_35859.f_9286[iVar0 /*3*/] = -1;
	Global_1146212.f_35859.f_9286[iVar0 /*3*/].f_1 = 0;
	Global_1146212.f_35859.f_9286[iVar0 /*3*/].f_2 = -1;
}

bool func_1224(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam1))
	{
		return false;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam0, &uParam1, iParam5, !bParam6))
	{
		return false;
	}
	return true;
}

bool func_1225(int iParam0)
{
	int iVar0;

	iVar0 = func_1165(iParam0, 1);
	if (iVar0 >= 2 && iVar0 <= 129)
	{
		return true;
	}
	return false;
}

int func_1226(int iParam0)
{
	int iVar0;

	iVar0 = func_1165(iParam0, 1);
	if (func_1225(iParam0))
	{
		return (iVar0 - 2);
	}
	else if (func_1242(iParam0))
	{
		return (iVar0 - 130);
	}
	else if (func_1243(iParam0))
	{
		return (iVar0 - 166);
	}
	else if (func_1244(iParam0))
	{
		return (iVar0 - 167);
	}
	else if (func_1245(iParam0))
	{
		return (iVar0 - 172);
	}
	else if (func_1246(iParam0))
	{
		return (iVar0 - 180);
	}
	else if (func_1247(iParam0))
	{
		return (iVar0 - 150);
	}
	return -1;
}

int func_1227(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2123992989:
			return 59;
		case joaat("MDEFENSE__BULLET"):
			return 49;
		case -1936069272:
			return 47;
		case joaat("MHEALTH__REGEN_RATE"):
			return 42;
		case joaat("MHORSE__TRAMPLE_DAMAGE"):
			return 58;
		case joaat("ADEADEYE_COST_PER_SHOT"):
			return 2;
		case joaat("MWEAPON__BOW_STAMINA_DRAIN"):
			return 41;
		case joaat("MDEFENSE__BULLET_USING_MELEE_WEAPON"):
			return 50;
		case joaat("MACCURACY__LOCAL_PLAYER_ACCURACY_FLOOR_MODIFIER"):
			return 64;
		case joaat("MDAMAGE__DISTANCE_CLOSE"):
			return 37;
		case -1575020444:
			return 94;
		case -1572802418:
			return 71;
		case joaat("ALASSO__DAMAGE_DEALT_PER_SECOND"):
			return 78;
		case joaat("MDEFENSE__EXPLOSIVE"):
			return 53;
		case -1349331938:
			return 43;
		case joaat("MDAMAGE__MISSING_HEALTH_CONVERSION"):
			return 29;
		case joaat("ASTAMINA__ALTER_TANK_PER_SECOND_PERCENT"):
			return 22;
		case joaat("ADEADEYE__ALTER_CORE_PER_SECOND_PERCENT"):
			return 7;
		case joaat("MHORSE__DEFENSE"):
			return 56;
		case joaat("ASTAMINA__HORSE_GAIN_ON_HORSEBACK_KILL_PERCENT"):
			return 23;
		case joaat("MDEFENSE__RANGED"):
			return 46;
		case joaat("MDAMAGE__ALL_WEAPONS_DIFFERENT_WEAPON"):
			return 25;
		case joaat("MDEFENSE__BULLET_PER_CONSECUTIVE_SHOT"):
			return 51;
		case joaat("MEAGLE_EYE__DEPLETION_RATE"):
			return 67;
		case joaat("MDEFENSE__FIRE"):
			return 52;
		case joaat("AHEALTH__GAIN_ON_KILL_PERCENT"):
			return 11;
		case joaat("MRPG_ATTIRBUTE_CORE_DRAIN_RATE"):
			return 66;
		case joaat("MDAMAGE__EXPLOSIVE_WEAPONS"):
			return 36;
		case joaat("MSTAMINA__REGEN_RATE"):
			return 75;
		case joaat("AHEALTH__ALTER_TANK_PER_SECOND_PERCENT"):
			return 14;
		case joaat("MDEADEYE__GAIN_MULTIPLIER_WITH_REPEATER"):
			return 73;
		case -377364039:
			return 60;
		case joaat("MACCURACY__AI_MODIFIER"):
			return 62;
		case joaat("MDAMAGE__FALLOFF"):
			return 39;
		case joaat("AHEALTH__ALTER_TOTAL_PER_MINUTE_PERCENT"):
			return 15;
		case joaat("ADEADEYE_COST_DURATION"):
			return 1;
		case joaat("MACCURACY__REMOTE_PLAYER_ACCURACY_FLOOR_MODIFIER"):
			return 65;
		case joaat("MSKILL__PERCEPTION"):
			return 83;
		case -1:
			return 0;
		case 66478954:
			return 93;
		case 91687087:
			return 79;
		case joaat("MSKILL__DISTILLER"):
			return 90;
		case 194431787:
			return 61;
		case joaat("MDEADEYE__GAIN_MULTIPLIER"):
			return 72;
		case joaat("MSKILL__PROTECTION_TRADER"):
			return 85;
		case joaat("MWEAPON__BOW_DRAW_TIME"):
			return 40;
		case joaat("MDEADEYE__DEPLETION_RATE"):
			return 70;
		case joaat("MSKILL__DIVINATION"):
			return 89;
		case 410940916:
			return 92;
		case 447408404:
			return 81;
		case joaat("ADEADEYE__GAIN_ON_HEADSHOT_PERCENT"):
			return 5;
		case joaat("MHEALTH__RECHARGE_RATE"):
			return 44;
		case joaat("MACCURACY__LOCAL_PLAYER_MODIFIER"):
			return 63;
		case joaat("MSKILL__INTUITION"):
			return 88;
		case joaat("MDAMAGE__MELEE"):
			return 30;
		case joaat("AHORSE__HEALTH_GAIN_ON_DAMAGE_TAKEN_PERCENT"):
			return 19;
		case joaat("ADEADEYE__GAIN_ON_REVIVE_PERCENT"):
			return 4;
		case joaat("MSKILL__PROTECTION_MOONSHINE"):
			return 86;
		case joaat("MDEFENSE__PLAYERS"):
			return 48;
		case 874892169:
			return 95;
		case joaat("AHEALTH__ALTER_CORE_PER_SECOND_PERCENT"):
			return 16;
		case 920214733:
			return 91;
		case joaat("MINCAPACITATION__BLEEDOUT_TIME"):
			return 68;
		case joaat("ADEADEYE__ALTER_TANK_PER_SECOND_PERCENT"):
			return 6;
		case joaat("MDAMAGE__ALL_WEAPONS_AIMING_WITHOUT_FIRING"):
			return 27;
		case joaat("ADEADEYE__ALTER_TANK_DAMAGE_TAKEN_PERCENT"):
			return 8;
		case joaat("MSTAMINA__REGEN_RATE_HEALTH_CONVERSION"):
			return 76;
		case joaat("MDEFENSE__MELEE"):
			return 45;
		case joaat("AHORSE__STAMINA_GAIN_ON_DAMAGE_TAKEN_PERCENT"):
			return 20;
		case joaat("AHEALTH__GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 10;
		case 1356998909:
			return 80;
		case joaat("MSKILL__FOCUS"):
			return 82;
		case joaat("MDEADEYE__GAIN_MULTIPLIER_STR_WEAPON"):
			return 74;
		case joaat("AHORSE__HEALTH_GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 17;
		case 1546732394:
			return 34;
		case joaat("MDEFENSE__STAMINA_CONVERSION"):
			return 55;
		case joaat("MDAMAGE__DISTANCE_FAR"):
			return 38;
		case joaat("MDAMAGE__BULLETS"):
			return 32;
		case joaat("MDEFENSE__STRENGTH_IN_NUMBERS"):
			return 54;
		case 1727267699:
			return 69;
		case joaat("MDAMAGE__STAMINA_CONVERSION"):
			return 28;
		case joaat("ADEADEYE_COST_ACTIVATION"):
			return 3;
		case joaat("MSTAMINA__SPRINT_DEPLETION_RATE"):
			return 77;
		case joaat("ASTAMINA__ALTER_CORE_PER_SECOND_PERCENT"):
			return 21;
		case joaat("AHORSE__STAMINA_GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 18;
		case joaat("AHEALTH__GAIN_KILL_PERCENT_STR_WEAPON"):
			return 12;
		case joaat("MDAMAGE__ALL_WEAPONS"):
			return 24;
		case joaat("MDAMAGE__THROWN"):
			return 31;
		case joaat("MSKILL__AWARENESS"):
			return 84;
		case joaat("MHORSE__DEFENSE_PLAYERS"):
			return 57;
		case joaat("ADEADEYE__ALTER_TANK_BULLET_DAMAGE_TAKEN_PERCENT"):
			return 9;
		case joaat("MDAMAGE__SHOTGUN"):
			return 33;
		case joaat("AHEALTH__GAIN_KILL_PERCENT_NON_STR_WEAPON"):
			return 13;
		case joaat("MDAMAGE__BULLET_PER_CONSECUTIVE_SHOT"):
			return 35;
		case joaat("MDAMAGE__ALL_WEAPONS_SINCE_LAST_SHOT"):
			return 26;
		case joaat("MSKILL__POTENTIAL"):
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

bool func_1228(int iParam0)
{
	int iVar0;

	iVar0 = func_1227(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 95)
	{
		return false;
	}
	return true;
}

float func_1229(var uParam0)
{
	float fVar0;

	if (uParam0->f_2 != 0)
	{
		fVar0 = func_1248(794259616, uParam0->f_2, uParam0->f_1, "");
		return fVar0;
	}
	return uParam0->f_1;
}

void func_1230(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_1228(iParam0))
	{
		return;
	}
	iVar0 = func_1227(iParam0, 1);
	if (!func_1249(Global_1146212.f_2169[iVar0 /*205*/]))
	{
		return;
	}
	Global_1146212[Global_1146212.f_2169[iVar0 /*205*/] /*102*/][iVar0] = (Global_1146212[Global_1146212.f_2169[iVar0 /*205*/] /*102*/][iVar0] - 1);
	if (Global_1146212[Global_1146212.f_2169[iVar0 /*205*/] /*102*/][iVar0] > 0)
	{
		return;
	}
	Global_1146212[Global_1146212.f_2169[iVar0 /*205*/] /*102*/][iVar0] = 0;
	Global_1146212.f_2169[iVar0 /*205*/].f_204 = 0;
	if (!func_1250(Global_1146212.f_2169[iVar0 /*205*/].f_203))
	{
		return;
	}
	iVar1 = func_1251(Global_1146212.f_2169[iVar0 /*205*/].f_203, 1);
	Global_1146212[Global_1146212.f_2169[iVar0 /*205*/] /*102*/].f_96[iVar1] = (Global_1146212[Global_1146212.f_2169[iVar0 /*205*/] /*102*/].f_96[iVar1] - 1);
	if (Global_1146212[Global_1146212.f_2169[iVar0 /*205*/] /*102*/].f_96[iVar1] > 0)
	{
		return;
	}
	iVar2 = 0;
	while (iVar2 < Global_1146212.f_47561[iVar1 /*25*/].f_23)
	{
		if (Global_1146212.f_47561[iVar1 /*25*/][iVar2] != Global_1146212.f_2169[iVar0 /*205*/])
		{
		}
		else
		{
			Global_1146212.f_47561[iVar1 /*25*/][iVar2] = -1;
			Global_1146212.f_47561[iVar1 /*25*/].f_23 = (Global_1146212.f_47561[iVar1 /*25*/].f_23 - 1);
			Global_1146212.f_47561[iVar1 /*25*/][iVar2] = Global_1146212.f_47561[iVar1 /*25*/][Global_1146212.f_47561[iVar1 /*25*/].f_23];
			Global_1146212.f_47561[iVar1 /*25*/][Global_1146212.f_47561[iVar1 /*25*/].f_23] = -1;
		}
		else
		{
			iVar2++;
		}
	}
}

bool func_1231(int iParam0)
{
	int iVar0;

	iVar0 = func_1232(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 68)
	{
		return false;
	}
	return true;
}

int func_1232(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("EAGLE_EYE_HIGHLIGHT_BOUNTIES"):
			return 52;
		case joaat("HEADSHOT_IMMUNITY"):
			return 12;
		case joaat("HAT_BLOCKS_HEADSHOT"):
			return 11;
		case joaat("ANIMAL_TURN_IN_EFFICIENCY"):
			return 64;
		case joaat("DISABLE_HEALTH_REGENERATION"):
			return 2;
		case joaat("FIRE_CAP_INFINTE"):
			return 41;
		case joaat("SLOW_AND_STEADY_AURA"):
			return 28;
		case joaat("EAGLE_EYE_HIGHLIGHT_EARTH"):
			return 53;
		case -1730553768:
			return 3;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			return 25;
		case -1651690657:
			return 65;
		case joaat("NO_CRITICAL_DAMAGE_AGAINST_PLAYERS"):
			return 10;
		case -1583192324:
			return 66;
		case joaat("REVIVE_ON_BLEEDOUT"):
			return 34;
		case -1486292178:
			return 67;
		case joaat("LASSO_IMMUNITY"):
			return 5;
		case joaat("DISABLE_JUMPING"):
			return 45;
		case joaat("GRAPPLE_IMMUNITY_FROM_AI"):
			return 31;
		case -1026481003:
			return 6;
		case joaat("TAGGING_IMMUNITY"):
			return 13;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			return 33;
		case joaat("ON_HORSE_SPEED_RESTRICTION_JOG"):
			return 59;
		case joaat("FATAL_MELEE_IMMUNITY"):
			return 32;
		case joaat("FORCE_HEALTH_REGEN"):
			return 1;
		case joaat("CONFUSION_EFFECT"):
			return 14;
		case joaat("FULL_LOCKON_IMMUNITY"):
			return 4;
		case joaat("OVERPOWER_INFINITE_HEALTH"):
			return 36;
		case -350459285:
			return 68;
		case joaat("DAMAGE_CAP_INFINTE"):
			return 40;
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			return 26;
		case -199042163:
			return 60;
		case joaat("NED_KELLY_ADVERSARY"):
			return 22;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
			return 55;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			return 19;
		case -1:
			return 0;
		case joaat("TRAIL_EFFECT"):
			return 17;
		case joaat("POISON_EFFECT"):
			return 20;
		case joaat("ON_HORSE_SPEED_RESTRICTION_WALK"):
			return 61;
		case joaat("SLIPPERY_BASTARD_VFX"):
			return 24;
		case joaat("DISORIENT_EFFECT"):
			return 18;
		case joaat("FOCUS_FIRE_VFX"):
			return 23;
		case joaat("PREDATOR_ICON_DISPLAY"):
			return 39;
		case joaat("WOUND_EFFECT"):
			return 15;
		case 718630298:
			return 56;
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			return 48;
		case joaat("NED_KELLY_BASE"):
			return 21;
		case joaat("DISABLE_COMBAT_DIVE"):
			return 46;
		case joaat("SLOW_AND_STEADY_VFX"):
			return 27;
		case joaat("DISABLE_FACIAL_ACTIONS"):
			return 43;
		case joaat("CANNOT_LOCK_ON_PLAYERS"):
			return 7;
		case joaat("GRAPPLE_IMMUNITY_FROM_PLAYERS"):
			return 30;
		case 1037859088:
			return 51;
		case 1066450193:
			return 54;
		case 1159158432:
			return 62;
		case joaat("OVERPOWER_PREDATOR"):
			return 37;
		case 1242495215:
			return 9;
		case joaat("ON_HORSE_SPEED_RESTRICTION_IGNORE_MOUNT_CLASS"):
			return 63;
		case 1341326366:
			return 58;
		case joaat("OVERRIDE_INFINITE_DEADEYE"):
			return 35;
		case 1398483650:
			return 50;
		case joaat("PULSE_REPOST_STATE"):
			return 38;
		case joaat("DISABLE_CONSUMABLES"):
			return 42;
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			return 57;
		case joaat("DISABLE_INCAPACITATION"):
			return 44;
		case joaat("DRAIN_EFFECT"):
			return 16;
		case 1898374676:
			return 49;
		case 2067881273:
			return 8;
		case joaat("DISABLE_DROWNING"):
			return 47;
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			return 29;
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

void func_1233(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			func_1252();
			break;
		case joaat("HEADSHOT_IMMUNITY"):
			func_1253();
			break;
		case joaat("WOUND_EFFECT"):
			PED::_REMOVE_PED_WOUND_EFFECT(iVar0, 0f);
			break;
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(iVar0, false, 0f);
			GRAPHICS::_0xC5CB91D65852ED7E(func_1254(iParam0));
			break;
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::_0xC5CB91D65852ED7E(func_1254(iParam0));
			break;
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::_0xC5CB91D65852ED7E(func_1254(iParam0));
			break;
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_0x3FC4C027FD0936F4(5);
			func_140(105, 1);
			break;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::_0xC5CB91D65852ED7E(func_1254(iParam0));
			break;
		case joaat("OVERPOWER_PREDATOR"):
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 19);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 1);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 18);
			break;
		case joaat("PULSE_REPOST_STATE"):
			NETWORK::_0x442B4347B6EC36E8(iVar0, 0, true);
			break;
		case joaat("PREDATOR_ICON_DISPLAY"):
			ATTRIBUTE::_0x3FC4C027FD0936F4(15);
			break;
		case joaat("OVERPOWER_INFINITE_HEALTH"):
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 19);
			break;
		case joaat("FOCUS_FIRE_VFX"):
			PLAYER::_0x5F8E0303C229C84B(iVar1, "");
			break;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
		case joaat("SLIPPERY_BASTARD_VFX"):
		case joaat("SLOW_AND_STEADY_VFX"):
			func_1256(func_1255(iParam0));
			break;
		case joaat("SLOW_AND_STEADY_AURA"):
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			PLAYER::_0x768E81AE285A4B67(iVar1, 0);
			PLAYER::_0xE910932F4B30BE23(iVar1);
			PLAYER::_0x0E9057A9DA78D0F8(iVar1, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 0);
			break;
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			GRAPHICS::_0xAF4D239B8903FCBE();
			PLAYER::_0x768E81AE285A4B67(iVar1, 0);
			PLAYER::_0xE910932F4B30BE23(iVar1);
			PLAYER::_0x0E9057A9DA78D0F8(iVar1, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 0);
			break;
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			PLAYER::_0xCE285A4413B00B7F(iVar1, 1);
			break;
		case 1898374676:
			PLAYER::_SET_PLAYER_CAN_MERCY_KILL(iVar1, false);
			break;
		case 1398483650:
			PLAYER::_0xDFC85C5199045026(iVar1, 1f);
			PLAYER::_0x6FA957D1B55941C1(iVar1, -1f);
			break;
		case joaat("NED_KELLY_BASE"):
			func_1257();
			break;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_1249(17);
			break;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_1249(16);
			break;
	}
}

bool func_1234(int iParam0)
{
	int iVar0;

	iVar0 = func_1235(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_1235(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("FOCUS_FIRE"):
			return 1;
		case -1038992817:
			return 5;
		case -950874556:
			return 4;
		case joaat("QUITE_AN_INSPIRATION"):
			return 3;
		case 0:
			return 0;
		case 1938826026:
			return 2;
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

int func_1236(int iParam0)
{
	int iVar0;
	struct<31> Var1;
	struct<31> Var32;
	int iVar63;
	int iVar64;
	int iVar65;

	iVar0 = func_1258(iParam0);
	Var1.f_3 = 1065353216;
	Var1.f_5 = -1;
	Var1.f_6 = 3;
	Var1.f_6.f_1 = -1;
	Var1.f_6.f_1.f_3 = -1;
	Var1.f_6.f_1.f_3.f_3 = -1;
	Var1.f_17 = 5;
	Var32.f_3 = 1065353216;
	Var32.f_5 = -1;
	Var32.f_6 = 3;
	Var32.f_6.f_1 = -1;
	Var32.f_6.f_1.f_3 = -1;
	Var32.f_6.f_1.f_3.f_3 = -1;
	Var32.f_17 = 5;
	iVar63 = -1;
	iVar65 = 0;
	while (iVar65 < Global_1146212.f_35859.f_11700)
	{
		iVar64 = func_1206(Global_1146212.f_35859.f_9503[iVar65 /*3*/], 1);
		if (Global_1146212.f_35859.f_3116[iVar64 /*31*/].f_4 != iParam0)
		{
		}
		else if (Global_1146212.f_35859.f_9503[iVar65 /*3*/] == iVar0)
		{
		}
		else if (!func_1259(Global_1146212.f_35859.f_9503[iVar65 /*3*/], Global_1146212.f_35859.f_9503[iVar65 /*3*/].f_1))
		{
		}
		else
		{
			Var1 = { func_1260(Global_1146212.f_35859.f_9503[iVar65 /*3*/]) };
			if (Var1.f_5 > Var32.f_5)
			{
				Var32 = { Var1 };
				iVar63 = iVar65;
			}
		}
		iVar65++;
	}
	return iVar63;
}

bool func_1237(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		return false;
	}
	return true;
}

void func_1238(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_1228(iParam0))
	{
		return;
	}
	iVar0 = func_1227(iParam0, 1);
	if (!func_1249(Global_1146212.f_2169[iVar0 /*205*/]))
	{
		return;
	}
	Global_1146212[Global_1146212.f_2169[iVar0 /*205*/] /*102*/][iVar0]++;
	Global_1146212.f_2169[iVar0 /*205*/].f_204 = 1;
	if (!func_1250(Global_1146212.f_2169[iVar0 /*205*/].f_203))
	{
		return;
	}
	iVar1 = func_1251(Global_1146212.f_2169[iVar0 /*205*/].f_203, 1);
	Global_1146212[Global_1146212.f_2169[iVar0 /*205*/] /*102*/].f_96[iVar1]++;
	iVar2 = 0;
	while (iVar2 < Global_1146212.f_47561[iVar1 /*25*/].f_23)
	{
		if (Global_1146212.f_47561[iVar1 /*25*/][iVar2] == Global_1146212.f_2169[iVar0 /*205*/])
		{
			return;
		}
		iVar2++;
	}
	Global_1146212.f_47561[iVar1 /*25*/][Global_1146212.f_47561[iVar1 /*25*/].f_23] = Global_1146212.f_2169[iVar0 /*205*/];
	Global_1146212.f_47561[iVar1 /*25*/].f_23++;
}

bool func_1239(var uParam0)
{
	bool bVar0;

	if (uParam0->f_1 != 0)
	{
		bVar0 = func_1261(794259616, uParam0->f_1, 1, "");
		return bVar0;
	}
	return true;
}

void func_1240(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			func_1252();
			break;
		case joaat("HEADSHOT_IMMUNITY"):
			func_1253();
			break;
		case joaat("WOUND_EFFECT"):
			PED::_SET_PED_WOUND_EFFECT(iVar0, 2, 14411, 0f, 0f, 0f, 0f, 0f, -1f, 1f);
			break;
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(iVar0, true, 0f);
			GRAPHICS::ANIMPOSTFX_PLAY(func_1254(iParam0));
			break;
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_1254(iParam0));
			break;
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_1254(iParam0));
			break;
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_0xFB6E111908502871(5);
			func_140(104, 1);
			break;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_1254(iParam0));
			break;
		case joaat("OVERPOWER_PREDATOR"):
			break;
		case joaat("PREDATOR_ICON_DISPLAY"):
			ATTRIBUTE::_0xFB6E111908502871(15);
			break;
		case joaat("FOCUS_FIRE_VFX"):
			PLAYER::_0x5F8E0303C229C84B(iVar1, "focusfire");
			break;
		case joaat("SLIPPERY_BASTARD_VFX"):
			iVar2 = func_1255(iParam0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_1262(iParam0, 0));
			func_1263(iVar2, 0, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_1262(iParam0, 1));
			func_1263(iVar2, 1, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_1262(iParam0, 2));
			func_1263(iVar2, 2, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_1262(iParam0, 3));
			func_1263(iVar2, 2, 1, iVar3, 0);
			break;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			iVar2 = func_1255(iParam0);
			func_1263(iVar2, 3, 1, -1, 1);
			break;
		case joaat("SLOW_AND_STEADY_VFX"):
			iVar2 = func_1255(iParam0);
			func_1263(iVar2, 4, 1, -1, 0);
			break;
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			PLAYER::_0x768E81AE285A4B67(iVar1, 1014693585);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 8);
			PLAYER::_0x131E294EF60160DF(iVar1, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 1);
			break;
		case joaat("SLOW_AND_STEADY_AURA"):
			PLAYER::_0x768E81AE285A4B67(iVar1, 1936842089);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 8);
			PLAYER::_0x131E294EF60160DF(iVar1, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 1);
			break;
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			GRAPHICS::_0x249CD6B7285536F2(0f, 2f, 2f);
			PLAYER::_0x768E81AE285A4B67(iVar1, 1979474018);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 25);
			PLAYER::_0x263D69767F76059C(iVar1, 2);
			break;
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			PLAYER::_0xCE285A4413B00B7F(iVar1, 0);
			break;
		case 1898374676:
			PLAYER::_SET_PLAYER_CAN_MERCY_KILL(iVar1, true);
			break;
		case 1398483650:
			PLAYER::_0xDFC85C5199045026(iVar1, 0.5f);
			PLAYER::_0x6FA957D1B55941C1(iVar1, 2f);
			break;
		case joaat("NED_KELLY_BASE"):
			func_1264();
			break;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_1249(17);
			break;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_1249(16);
			break;
	}
}

void func_1241(int iParam0)
{
	char* sVar0;
	char* sVar1;

	if (iParam0 == 0)
	{
		return;
	}
	sVar0 = func_1265(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	sVar1 = func_1266(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return;
	}
	AUDIO::_PLAY_SOUND_FROM_ENTITY(sVar0, Global_1296859.f_8, sVar1, false, 0, 0);
}

bool func_1242(int iParam0)
{
	int iVar0;

	iVar0 = func_1165(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return true;
	}
	return false;
}

bool func_1243(int iParam0)
{
	int iVar0;

	iVar0 = func_1165(iParam0, 1);
	if (iVar0 >= 166 && iVar0 <= 166)
	{
		return true;
	}
	return false;
}

bool func_1244(int iParam0)
{
	int iVar0;

	iVar0 = func_1165(iParam0, 1);
	if (iVar0 >= 167 && iVar0 <= 171)
	{
		return true;
	}
	return false;
}

bool func_1245(int iParam0)
{
	int iVar0;

	iVar0 = func_1165(iParam0, 1);
	if (iVar0 >= 172 && iVar0 <= 179)
	{
		return true;
	}
	return false;
}

bool func_1246(int iParam0)
{
	int iVar0;

	iVar0 = func_1165(iParam0, 1);
	if (iVar0 >= 180 && iVar0 <= 182)
	{
		return true;
	}
	return false;
}

bool func_1247(int iParam0)
{
	int iVar0;

	iVar0 = func_1165(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 165)
	{
		return true;
	}
	return false;
}

float func_1248(int iParam0, int iParam1, float fParam2, char* sParam3)
{
	struct<11> Var0;
	float fVar22;

	if (func_1267(iParam0, iParam1, &Var0))
	{
		fVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_FLOAT(iParam0, iParam1, Var0.f_10.f_1);
	}
	else
	{
		fVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_FLOAT(iParam0, iParam1, fParam2);
	}
	return fVar22;
}

bool func_1249(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 21)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	if (MISC::_0x8F4F050054005C27(&(Global_1146212.f_2166), iParam0))
	{
		return true;
	}
	if (Global_1146212.f_2165 >= 21)
	{
		return false;
	}
	Global_1146212.f_2143[Global_1146212.f_2165] = iParam0;
	Global_1146212.f_2165++;
	return true;
}

bool func_1250(int iParam0)
{
	int iVar0;

	iVar0 = func_1251(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_1251(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("CONSECUTIVE_DAMAGE_DEALT"):
			return 3;
		case -1016837116:
			return 5;
		case 0:
			return 0;
		case joaat("CONSECUTIVE_DAMAGE_TAKEN"):
			return 4;
		case joaat("NEARBY_ALLIES"):
			return 2;
		case 1416591065:
			return 1;
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

void func_1252()
{
	bool bVar0;
	bool bVar1;

	if (Global_1146212.f_21645[3 /*209*/].f_208)
	{
		bVar0 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1296859.f_8, 550, bVar0);
	if (Global_1146212.f_21645[4 /*209*/].f_208)
	{
		if (!func_97(Global_1298536[Global_1296859 /*87*/].f_86, 1))
		{
			bVar1 = true;
		}
	}
	PED::SET_PED_CONFIG_FLAG(Global_1296859.f_8, 556, bVar1);
}

void func_1253()
{
	bool bVar0;

	bVar0 = false;
	if (Global_1146212.f_21645[12 /*209*/].f_208)
	{
		bVar0 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1296859.f_8, 263, bVar0);
}

char* func_1254(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DRAIN_EFFECT"):
			return "MP_ArrowDrain";
		case joaat("DISORIENT_EFFECT"):
			return "MP_ArrowDisorient";
		case joaat("TRAIL_EFFECT"):
			return "MP_ArrowTracking";
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			return "MP_MoonshineToxic";
		default:
			break;
	}
	return "";
}

int func_1255(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SLIPPERY_BASTARD_VFX"):
			return -843895567;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			return joaat("MOMENT_TO_RECUPERATE_VFX");
		case joaat("SLOW_AND_STEADY_VFX"):
			return joaat("SLOW_AND_STEADY_VFX");
		default:
			break;
	}
	return 0;
}

void func_1256(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_1193972[iVar0 /*8*/].f_5 == iParam0)
		{
			Global_1193972[iVar0 /*8*/].f_7 = 1;
			Global_1193972[iVar0 /*8*/].f_5 = 0;
		}
		iVar0++;
	}
}

void func_1257()
{
	PED::SET_PED_CONFIG_FLAG(Global_1296859.f_8, 305, false);
	PED::_0x801917E7D7BCE418(Global_1296859.f_8);
}

int func_1258(int iParam0)
{
	int iVar0;

	if (!func_1234(iParam0))
	{
		return -1;
	}
	iVar0 = func_1235(iParam0, 1);
	return Global_1146212.f_35859.f_9286[iVar0 /*3*/];
}

bool func_1259(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<31> Var4;

	if (!func_1215(iParam0))
	{
		return false;
	}
	iVar0 = func_1206(iParam0, 1);
	iVar2 = Global_1146212.f_35859.f_3116[iVar0 /*31*/].f_4;
	if (func_1217(Global_1146212.f_35859.f_3116[iVar0 /*31*/]))
	{
		iVar3 = Global_1146212.f_35859.f_9286[func_1235(iVar2, 1) /*3*/];
		Var4 = { func_1260(iVar3) };
		if (iVar3 != iParam0 && Global_1146212.f_35859.f_3116[iVar0 /*31*/].f_5 <= Var4.f_5)
		{
			return false;
		}
	}
	switch (Global_1146212.f_35859.f_3116[iVar0 /*31*/])
	{
		case -1606735498:
		case joaat("ON_HEADSHOT"):
		case joaat("ENTER_WEARING_HAT"):
		case joaat("ENTER_SPRINTING"):
		case joaat("ENTER_MOUNTED"):
		case joaat("ENTER_DUAL_WIELD"):
		case -971275364:
		case joaat("ON_KILL"):
		case joaat("ENTER_SCENARIO"):
		case joaat("ENTER_REVIVER"):
		case -193993646:
		case joaat("ENTER_ALLY_NEARBY"):
		case -23641105:
		case joaat("ON_DAMAGE_TAKEN"):
		case joaat("ENTER_MELEE"):
		case joaat("ON_DAMAGE_DEALT_FROM_HORSEBACK"):
		case 429965152:
		case joaat("ON_DAMAGE_TAKEN_FROM_HORSEBACK"):
		case joaat("ENTER_WINDED"):
		case joaat("ENTER_NO_HAT"):
		case joaat("ON_ENABLE"):
		case joaat("ENTER_EAGLE_EYE"):
		case joaat("ENTER_DEADEYE"):
		case joaat("ENTER_SCOPED"):
		case joaat("ENTER_COVER"):
		case 1305415806:
		case 1461424861:
		case 1691008805:
		case joaat("ENTER_DAMAGED"):
		case joaat("ON_DAMAGE_DEALT"):
		case joaat("ENTER_REVIVED"):
		case joaat("ENTER_LASSOING"):
		case joaat("ENTER_IN_VEHICLE"):
		case 2116793692:
			return true;
		case joaat("ENTER_FREEROAM_OR_COOP"):
			if (!func_1268() && !func_1269())
			{
				return false;
			}
			return true;
		case -2010146101:
			if (!func_1268())
			{
				return false;
			}
			return true;
		case joaat("ENTER_REVIVED_REMOTE"):
			iVar1 = func_1214(iParam1);
			if (iVar1 == Global_1296859)
			{
				return false;
			}
			return true;
		case -2129621195:
			iVar1 = func_1214(iParam1);
			if (iVar1 == Global_1296859)
			{
				return false;
			}
			if (!GANG::_0x424B17A7DC5C90BC(Global_1296859.f_154[Global_1296859]))
			{
				return false;
			}
			if (!GANG::_0x81FB74C83C2ED69F(Global_1296859.f_154[iVar1]))
			{
				return false;
			}
			return true;
		case joaat("ALLY_ENTER_DEADEYE"):
			iVar1 = func_1214(iParam1);
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Global_1296859.f_154[iVar1]))
			{
				return false;
			}
			if (iVar1 != Global_1296859 && !func_885(Global_1296859.f_154[iVar1]))
			{
				return false;
			}
			if (!func_877(512, iVar1))
			{
				return false;
			}
			return true;
		case -1503245593:
			if (!Global_1956200.f_1716[8])
			{
				return false;
			}
			iVar1 = func_1214(iParam1);
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Global_1296859.f_154[iVar1]))
			{
				return false;
			}
			if (PED::_0x0C31C51168E80365(Global_1296859.f_8) != PLAYER::GET_PLAYER_PED(Global_1296859.f_154[iVar1]))
			{
				return false;
			}
			return true;
		default:
			break;
	}
	return false;
}

struct<31> func_1260(int iParam0)
{
	int iVar0;

	iVar0 = func_1206(iParam0, 1);
	return Global_1146212.f_35859.f_3116[iVar0 /*31*/];
}

bool func_1261(int iParam0, int iParam1, bool bParam2, char* sParam3)
{
	struct<11> Var0;
	bool bVar22;

	if (func_1267(iParam0, iParam1, &Var0))
	{
		bVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_BOOL(iParam0, iParam1, Var0.f_10.f_2);
	}
	else
	{
		bVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_BOOL(iParam0, iParam1, bParam2);
	}
	return bVar22;
}

char* func_1262(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("SLIPPERY_BASTARD_VFX"):
			switch (iParam1)
			{
				case 0:
					return "PH_HEAD";
				case 1:
					return "CP_CHEST";
				case 2:
					return "CP_R_UpperArm";
				case 3:
					return "CP_L_UpperArm";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_1263(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Global_1193972[iVar0 /*8*/]) && !Global_1193972[iVar0 /*8*/].f_6)
		{
			Global_1193972[iVar0 /*8*/].f_5 = iParam0;
			Global_1193972[iVar0 /*8*/].f_1 = iParam1;
			Global_1193972[iVar0 /*8*/].f_2 = iParam2;
			Global_1193972[iVar0 /*8*/].f_3 = iParam3;
			Global_1193972[iVar0 /*8*/].f_4 = iParam4;
			Global_1193972[iVar0 /*8*/].f_6 = 1;
			return;
		}
		iVar0++;
	}
}

void func_1264()
{
	PED::SET_PED_CONFIG_FLAG(Global_1296859.f_8, 305, true);
	PED::_0x05CE6AF4DF071D23(Global_1296859.f_8, 0.7f);
}

char* func_1265(int iParam0)
{
	switch (iParam0)
	{
		case -1822335806:
			return "Head_Shot_Ricco";
		default:
			break;
	}
	return "";
}

char* func_1266(int iParam0)
{
	switch (iParam0)
	{
		case -1822335806:
			return "RDRO_Ability_Cards_SFX_Sounds";
		default:
			break;
	}
	return "";
}

bool func_1267(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;
	int iVar7;

	Var0 = -178401592;
	Var0.f_1 = iParam0;
	Var0.f_2 = joaat("NAME");
	Var0.f_3 = 1;
	Var0.f_4 = iParam1;
	DATAFILE::_0x91DED5DD64BB2691(&Var0);
	if (DATAFILE::_0x44B3A36933AC009C(&iVar7, &Var0, joaat("NAME")))
	{
		*uParam2 = iParam0;
		uParam2->f_9 = iParam1;
		StringCopy(&(uParam2->f_1), "", 64);
		StringIntConCat(&(uParam2->f_1), iVar7, 64);
		DATAFILE::_0x44B3A36933AC009C(&iVar7, &Var0, joaat("TYPE"));
		uParam2->f_10.f_3 = func_1270(iVar7);
		uParam2->f_14.f_3 = uParam2->f_10.f_3;
		uParam2->f_18.f_3 = uParam2->f_10.f_3;
		switch (uParam2->f_10.f_3)
		{
			case 0:
				if (!DATAFILE::_0x52FC26D2D2FC2987(&(uParam2->f_10), &Var0, joaat("DEFAULT")))
				{
				}
				break;
			case 1:
				if (!DATAFILE::_0xB2B42607F7867576(&(uParam2->f_10.f_1), &Var0, joaat("DEFAULT")))
				{
				}
				break;
			case 2:
				if (!DATAFILE::_0xA63CD20F19B961AB(&(uParam2->f_10.f_2), &Var0, joaat("DEFAULT")))
				{
				}
				break;
		}
		switch (uParam2->f_14.f_3)
		{
			case 0:
				DATAFILE::_0x52FC26D2D2FC2987(&(uParam2->f_14), &Var0, joaat("MIN"));
				break;
			case 1:
				DATAFILE::_0xB2B42607F7867576(&(uParam2->f_14.f_1), &Var0, joaat("MIN"));
				break;
			case 2:
				DATAFILE::_0xA63CD20F19B961AB(&(uParam2->f_14.f_2), &Var0, joaat("MIN"));
				break;
		}
		switch (uParam2->f_18.f_3)
		{
			case 0:
				DATAFILE::_0x52FC26D2D2FC2987(&(uParam2->f_18), &Var0, joaat("MAX"));
				break;
			case 1:
				DATAFILE::_0xB2B42607F7867576(&(uParam2->f_18.f_1), &Var0, joaat("MAX"));
				break;
			case 2:
				DATAFILE::_0xA63CD20F19B961AB(&(uParam2->f_18.f_2), &Var0, joaat("MAX"));
				break;
		}
		switch (uParam2->f_10.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		switch (uParam2->f_14.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		switch (uParam2->f_18.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		return true;
	}
	return false;
}

bool func_1268()
{
	return Global_1572887.f_6;
}

bool func_1269()
{
	if (!Global_1048577)
	{
		return false;
	}
	if (!func_86(func_85(0)))
	{
		return false;
	}
	if (Global_3145858 != -504335712)
	{
		return false;
	}
	if (func_1062(Global_524288.f_40400))
	{
		return true;
	}
	return false;
}

int func_1270(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case joaat("INT"):
			iVar0 = 0;
			break;
		case joaat("FLOAT"):
			iVar0 = 1;
			break;
		case joaat("BOOL"):
			iVar0 = 2;
			break;
	}
	return iVar0;
}

