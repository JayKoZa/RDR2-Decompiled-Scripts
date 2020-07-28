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
	float fLocal_15 = 0f;
	float fLocal_16 = 0f;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	char* sLocal_22 = NULL;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()
{
	struct<234> Var0;
	bool bVar236;
	float fVar237;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	sLocal_21 = "props_misc@campfires@5_logs";
	sLocal_22 = "Script_PropCampfire";
	Var0 = 4;
	Var0.f_5 = 4;
	Var0.f_18.f_29 = 1;
	Var0.f_49 = 8;
	Var0.f_49.f_22 = -1;
	Var0.f_49.f_23 = 1;
	Var0.f_49.f_24 = 1;
	Var0.f_49.f_32 = 1;
	Var0.f_49.f_33 = -1;
	Var0.f_49.f_37 = 4;
	Var0.f_49.f_42 = 4;
	Var0.f_49.f_53 = 1;
	Var0.f_139 = 15933;
	Var0.f_143 = -1;
	Var0.f_145 = -1;
	Var0.f_149 = 9;
	Var0.f_165 = -1;
	Var0.f_175 = -1;
	Var0.f_176 = 1;
	Var0.f_187 = 1;
	Var0.f_191 = 1085378666;
	Var0.f_193.f_9 = 1084227584;
	Var0.f_193.f_10 = 1073741824;
	Var0.f_193.f_30 = 1;
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
	Var0.f_230 = { TASK::_GET_SCENARIO_POINT_COORDS(vScriptParam_0.y, 1) };
	Var0.f_233 = TASK::_GET_SCENARIO_POINT_HEADING(vScriptParam_0.y, 1);
	if (func_3(&Var0))
	{
		SCRIPTS::_0xE7282390542F570D(vScriptParam_0.x);
		func_1(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	bVar236 = false;
	while (!func_2(0, 0) && !bVar236)
	{
		switch (Var0.f_192)
		{
			case 0:
				fVar237 = func_4(Global_34, Var0.f_230, 1);
				if (!func_5() || fVar237 < 6400f)
				{
					Var0.f_187 = 0;
					func_6(&Var0, vScriptParam_0.z);
					STREAMING::REQUEST_MODEL(Var0.f_191, false);
					func_7(&(Var0.f_192), 1);
				}
				break;
			case 1:
				if (STREAMING::HAS_MODEL_LOADED(Var0.f_191))
				{
					func_7(&(Var0.f_192), 2);
				}
				break;
			case 2:
				Var0.f_141 = OBJECT::CREATE_OBJECT(Var0.f_191, Var0.f_230, false, false, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Var0.f_141, Var0.f_233);
				if (Global_1939045->f_21)
				{
					Var0.f_229 = VOLUME::_0x0EB78C2B156635B1(665633627, Var0.f_230, 0f, 0f, 0f, 0.3f, 0.3f, 2f);
				}
				func_7(&(Var0.f_192), 3);
				break;
			case 3:
				if (func_3(&Var0))
				{
					bVar236 = true;
				}
				else
				{
					fVar237 = func_4(Global_34, Var0.f_230, 1);
					if (fVar237 < func_8() || !Var0.f_193.f_34)
					{
						func_9(&(Var0.f_193), &(Var0.f_141));
					}
					if (!func_10(&Global_1939178, 4194304))
					{
						if (fVar237 < func_11() || Var0.f_142 == 7)
						{
							func_12(&Var0, 0);
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
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_141))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_141));
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_229))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_229);
	}
	func_13(uParam0, 1);
}

int func_2(bool bParam0, bool bParam1)
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

int func_3(var uParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = MISC::GET_GAME_TIMER();
	if ((iVar0 - uParam0->f_234) > 1000)
	{
		uVar1 = func_14(uParam0->f_230);
		if (func_15(uVar1, 8))
		{
			return 1;
		}
		if (func_15(uVar1, 1) || uParam0->f_235)
		{
			if (func_15(uParam0->f_139, 8192))
			{
				func_16(&(uParam0->f_139), 64);
			}
		}
		else if (func_15(uVar1, 2) && !uParam0->f_235)
		{
			if (!func_15(uParam0->f_139, 8192))
			{
				func_16(&(uParam0->f_139), 128);
			}
		}
		else if (func_17(0, 0, 1) && !func_18())
		{
			if (func_15(uParam0->f_139, 8192))
			{
				func_16(&(uParam0->f_139), 64);
			}
		}
		else if (!uParam0->f_235)
		{
			if (!func_15(uParam0->f_139, 8192))
			{
				func_16(&(uParam0->f_139), 128);
			}
		}
		if (func_15(uVar1, 32))
		{
			func_19(uParam0, 1, 0, 0, 0, 0, 0);
		}
		else if (func_15(uVar1, 4))
		{
			func_19(uParam0, 0, 1, 0, 0, 0, 0);
		}
		else if (func_15(uVar1, 16))
		{
			func_19(uParam0, 0, 0, 1, 0, 0, 0);
		}
		else if (func_15(uVar1, 64))
		{
			func_19(uParam0, 0, 0, 0, 1, 0, 0);
		}
		else if (func_15(uVar1, 128))
		{
			func_19(uParam0, 0, 0, 0, 0, 1, 0);
		}
		else if (func_15(uVar1, 256))
		{
			func_19(uParam0, 0, 0, 0, 0, 0, 1);
		}
		uParam0->f_234 = iVar0;
	}
	return 0;
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
	return func_20(vVar0, vParam1);
}

bool func_5()
{
	return (Global_1893575 & 1 != 0 && func_21() != -1);
}

void func_6(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case -1189729144:
			func_22(&(uParam0->f_139), 6144);
			if (func_23(1510719693 /* GXTEntry: "Coffee Percolator" */, 1))
			{
				func_16(&(uParam0->f_139), 1);
			}
			break;
		case 1403995973:
			func_22(&(uParam0->f_139), 9);
			if (func_23(1510719693 /* GXTEntry: "Coffee Percolator" */, 1))
			{
				func_16(&(uParam0->f_139), 1);
			}
			break;
		case -2140664311:
			func_22(&(uParam0->f_139), 7177);
			if (func_23(1510719693 /* GXTEntry: "Coffee Percolator" */, 1))
			{
				func_16(&(uParam0->f_139), 1);
			}
			break;
		case -1973379805:
			func_22(&(uParam0->f_139), 7177);
			if (func_23(1510719693 /* GXTEntry: "Coffee Percolator" */, 1))
			{
				func_16(&(uParam0->f_139), 1);
			}
			break;
		case -1307214023:
			func_22(&(uParam0->f_139), 6144);
			if (func_23(1510719693 /* GXTEntry: "Coffee Percolator" */, 1))
			{
				func_16(&(uParam0->f_139), 1);
			}
			break;
		case -886679600:
			func_22(&(uParam0->f_139), 6144);
			if (func_23(1510719693 /* GXTEntry: "Coffee Percolator" */, 1))
			{
				func_16(&(uParam0->f_139), 1);
			}
			break;
		case 1228786282:
			func_22(&(uParam0->f_139), 7817);
			func_16(&(uParam0->f_139), 64);
			uParam0->f_235 = 1;
			break;
		case -1241326640:
			func_22(&(uParam0->f_139), 7817);
			func_16(&(uParam0->f_139), 64);
			uParam0->f_235 = 1;
			break;
		case 1588618021:
			func_22(&(uParam0->f_139), 7817);
			func_16(&(uParam0->f_139), 64);
			uParam0->f_193.f_4 = 1;
			uParam0->f_235 = 1;
			break;
		case 1127868139:
			func_22(&(uParam0->f_139), 7817);
			func_16(&(uParam0->f_139), 64);
			uParam0->f_193.f_4 = 1;
			uParam0->f_235 = 1;
			break;
		default:
			break;
	}
}

void func_7(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

float func_8()
{
	if (func_10(&Global_1939178, 4194304))
	{
		return 1600f;
	}
	if (func_5())
	{
		if (func_21() == 5)
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

void func_9(var uParam0, var uParam1)
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
				STREAMING::REQUEST_ANIM_DICT(sLocal_21);
				STREAMING::_0x2B6529C54D29037A(sLocal_22);
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
			else if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_21) && STREAMING::_0x2C04D89A0FB4E244(sLocal_22))
			{
				TASK::TASK_MOVE_NETWORK_BY_NAME(*uParam0, sLocal_22, 0f, false, sLocal_21, 128);
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

bool func_10(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_11()
{
	if (func_5())
	{
		if (func_21() == 5)
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

int func_12(var uParam0, bool bParam1)
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
	if (uParam0->f_142 > 4 && uParam0->f_142 < 9)
	{
		func_33(0);
	}
	if (uParam0->f_142 > 3)
	{
		if (uParam0->f_142 != 9 && uParam0->f_142 != 4)
		{
			CAM::_0x18C3DFAC458783BB();
			func_34(uParam0);
		}
	}
	else if (uParam0->f_142 == 3)
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
	if (uParam0->f_190)
	{
		if (func_36(Global_34, 1, 0, 0) != joaat("weapon_unarmed"))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 320193935))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("weapon_unarmed"), true, 0, false, false);
				uParam0->f_190 = 0;
			}
		}
	}
	switch (uParam0->f_142)
	{
		case 0:
			if (func_37(uParam0))
			{
				func_38(uParam0);
			}
			func_39(uParam0);
			uParam0->f_49.f_28 = 1;
			func_40(uParam0, 1);
			break;
		case 1:
			if (func_37(uParam0))
			{
				func_38(uParam0);
			}
			if (func_41(uParam0))
			{
				func_40(uParam0, 2);
			}
			break;
		case 2:
			if (func_37(uParam0))
			{
				func_38(uParam0);
			}
			if (func_42(uParam0))
			{
				func_40(uParam0, 3);
			}
			break;
		case 3:
			if (func_37(uParam0))
			{
				AUDIO::_0x9428447DED71FC7E("Player_Campfire_Scenes");
				func_43(&(uParam0->f_49), 1, TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_34) != 1049986774);
				func_44(&(uParam0->f_49), 2);
				uParam0->f_189 = 0;
				func_38(uParam0);
			}
			func_45(uParam0);
			if (bParam1)
			{
				return 1;
			}
			func_46(8388608);
			if (!func_15(uParam0->f_139, 8192))
			{
				func_47(2048);
			}
			else
			{
				func_48(2048);
			}
			if (!uParam0->f_187)
			{
				func_47(1024);
			}
			else
			{
				func_48(1024);
			}
			if ((MISC::GET_GAME_TIMER() - uParam0->f_162) >= 500)
			{
				uParam0->f_163 = func_49(uParam0);
				uParam0->f_162 = MISC::GET_GAME_TIMER();
			}
			if (func_50(Global_34, uParam0->f_141, 1) > 36f)
			{
				func_51(uParam0);
				func_52(uParam0);
				func_53(8388608);
				if (!uParam0->f_187)
				{
					func_48(1024);
				}
				func_40(uParam0, 4);
				if (CAM::_0x927B810E43E99932(&(uParam0->f_18)))
				{
					CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_18));
				}
				return 0;
			}
			if (func_54(2097152) || func_15(uParam0->f_139, 64))
			{
				if (func_15(uParam0->f_139, 8192))
				{
					func_55(uParam0, 0);
					func_22(&(uParam0->f_139), 8192);
				}
				func_53(2097152);
				func_22(&(uParam0->f_139), 64);
			}
			else if (func_54(4194304) || func_15(uParam0->f_139, 128))
			{
				if (!func_15(uParam0->f_139, 8192))
				{
					func_55(uParam0, 1);
					func_16(&(uParam0->f_139), 8192);
				}
				func_53(4194304);
				func_22(&(uParam0->f_139), 128);
			}
			uParam0->f_143 = func_35(uParam0);
			if (uParam0->f_143 != -1)
			{
				func_56();
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
				iVar1 = ITEMSET::CREATE_ITEMSET(true);
				if (func_57(&iVar1, *(uParam0->f_5[uParam0->f_143 /*3*/]), 0.75f) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_34, 1))
				{
					TASK::CLEAR_PED_TASKS(Global_34, 1, 0);
				}
				ITEMSET::DESTROY_ITEMSET(iVar1);
			}
			if ((func_58(0) && uParam0->f_143 != -1) || (((uParam0->f_187 && func_54(268435456)) && func_54(16777216)) && Global_1956172->f_2))
			{
				uParam0->f_144 = func_59();
				func_40(uParam0, 5);
				if ((func_54(16777216) || uParam0->f_189) || Global_1956172->f_2)
				{
					if (func_54(268435456))
					{
						Global_1956172->f_2 = 0;
						func_53(16777216);
						func_44(&(uParam0->f_49), 2);
						func_60(uParam0, 0);
						func_40(uParam0, 7);
					}
				}
				func_52(uParam0);
			}
			else
			{
				func_61(uParam0);
				func_62(uParam0);
				if ((!func_63(4) && !func_54(536870912)) && func_15(uParam0->f_139, 8192))
				{
					if (uParam0->f_163 && func_50(Global_34, uParam0->f_141, 1) <= 9f)
					{
						uParam0->f_161 = func_64(HUD::_UIPROMPT_GET_GROUP_ACTIVE_PAGE(1754796591));
						HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(uParam0->f_141, func_65(func_15(uParam0->f_139, 16384), 1.75f, 3f), 1, 1, 1754796591, uParam0->f_161, 2);
					}
				}
				if ((func_54(16777216) && uParam0->f_187) || uParam0->f_189)
				{
					if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_34))
					{
						if (uParam0->f_165 != -1 && (MISC::GET_GAME_TIMER() - uParam0->f_165) > 1000)
						{
							func_53(16777216);
							uParam0->f_189 = 0;
							uParam0->f_165 = -1;
							TASK::CLEAR_PED_TASKS(Global_34, 1, 0);
							uParam0->f_146 = 0;
						}
						else
						{
							uParam0->f_146 = 2;
							func_66(uParam0);
							uParam0->f_165 = MISC::GET_GAME_TIMER();
							if (func_54(268435456))
							{
								func_53(16777216);
								uParam0->f_189 = 0;
								func_44(&(uParam0->f_49), 2);
								func_60(uParam0, 0);
								func_40(uParam0, 7);
							}
						}
					}
					else if (uParam0->f_146 == 2)
					{
						if ((MISC::GET_GAME_TIMER() - uParam0->f_165) > 10000)
						{
							TASK::CLEAR_PED_TASKS(Global_34, 1, 0);
							func_53(16777216);
							uParam0->f_189 = 0;
							uParam0->f_165 = -1;
							uParam0->f_146 = 0;
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
			if (func_50(Global_34, uParam0->f_141, 1) <= 36f)
			{
				func_40(uParam0, 3);
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
			func_67();
			if (!func_58(1))
			{
				func_33(0);
				uParam0->f_145 = -1;
				func_68(uParam0, 0);
				TASK::_0xFDECCA06E8B81346(Global_34);
				func_40(uParam0, 3);
			}
			else
			{
				if (uParam0->f_143 != -1)
				{
					func_56();
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -996707397))
				{
					func_68(uParam0, 0);
				}
				else
				{
					func_68(uParam0, 1);
				}
				func_69(uParam0);
				if (func_70(uParam0, 0, 0, -1))
				{
					func_68(uParam0, 0);
					if (uParam0->f_146 == 2)
					{
						func_44(&(uParam0->f_49), 2);
						func_60(uParam0, 0);
						func_40(uParam0, 7);
					}
					else if (uParam0->f_146 == 0)
					{
						func_40(uParam0, 9);
					}
					else if (uParam0->f_146 == 11 || uParam0->f_146 == 10)
					{
						func_40(uParam0, 8);
					}
					else
					{
						func_40(uParam0, 6);
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
			if (uParam0->f_143 != -1)
			{
				func_56();
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
			if (((ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 1070143458) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 2000) && !func_15(uParam0->f_140, 4)) && uParam0->f_146 != 1)
			{
				if (func_70(uParam0, 1, uParam0->f_146, uParam0->f_145))
				{
					if (uParam0->f_146 == 0)
					{
						func_40(uParam0, 9);
						func_51(uParam0);
						return 0;
					}
					else
					{
						func_68(uParam0, 0);
						uParam0->f_164 = MISC::GET_GAME_TIMER();
					}
				}
			}
			if (func_71(uParam0) || !TASK::PED_HAS_USE_SCENARIO_TASK(Global_34))
			{
				if ((uParam0->f_143 == uParam0->f_145 || uParam0->f_145 == -1) || uParam0->f_146 == 1)
				{
					if (uParam0->f_146 != 0)
					{
						uParam0->f_144 = uParam0->f_146;
					}
					if (uParam0->f_145 != -1)
					{
						uParam0->f_143 = uParam0->f_145;
					}
					else
					{
						uParam0->f_143 = func_35(uParam0);
					}
					uParam0->f_145 = -1;
					func_40(uParam0, 5);
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
			if (func_72(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 500)
			{
				if (((iVar2 == 1135271674 || iVar2 == 1844142525) || iVar2 == -571916863) || iVar2 == 825619760)
				{
					if (uParam0->f_146 == 11)
					{
						if (INVENTORY::_0x3D10D7179D7034AF(func_73(0), -569063887, 0))
						{
							INVENTORY::_0x6A564540FAC12211(func_73(0), -569063887);
						}
						func_74(-569063887 /* GXTEntry: "Journal" */, 0, 0, 0, 1, 0, 0);
						uParam0->f_164 = MISC::GET_GAME_TIMER();
						uParam0->f_146 = 0;
					}
					else if (uParam0->f_146 == 10)
					{
						func_74(1259508039 /* GXTEntry: "Satchel" */, 0, 0, 0, 1, 0, 0);
						uParam0->f_164 = MISC::GET_GAME_TIMER();
						uParam0->f_146 = 0;
					}
					else
					{
						uParam0->f_146 = 0;
						ATTRIBUTE::_0xD962F8579D702DB5();
						func_29(&(uParam0->f_172));
						func_40(uParam0, 5);
					}
				}
				else if (iVar2 == -597629206 || iVar2 == 1316803372)
				{
					func_75(36116464, 0.5f);
					uParam0->f_164 = MISC::GET_GAME_TIMER();
				}
				else if (iVar2 == -518407211 || iVar2 == 1662215698)
				{
					func_75(653141085, 2f);
					uParam0->f_164 = MISC::GET_GAME_TIMER();
				}
				else if (iVar2 == -1433449364 || iVar2 == 2058555960)
				{
					func_75(1335077954, 2f);
					uParam0->f_164 = MISC::GET_GAME_TIMER();
				}
			}
			if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_34))
			{
				ATTRIBUTE::_0xD962F8579D702DB5();
				uParam0->f_146 = 0;
				func_40(uParam0, 5);
			}
			break;
		case 7:
			HUD::_0xC9CAEAEEC1256E54(2011163970);
			if (func_37(uParam0))
			{
				func_76(-1199896558 /* GXTEntry: "Coffee" */, 1, 1, -142743235);
				func_38(uParam0);
			}
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			func_56();
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			if ((((func_77(uParam0, uParam0->f_144) || !TASK::PED_HAS_USE_SCENARIO_TASK(Global_34)) || TASK::_0x916B8E075ABC8B4E(Global_34, 1)) || FIRE::IS_ENTITY_ON_FIRE(Global_34)) || TASK::_0x0C3CB2E600C8977D(Global_34, 0))
			{
				AUDIO::_0x0F2A2175734926D8("cook_meat_sizzle_loop", "Player_Campfire_Sounds");
				func_76(-1199896558 /* GXTEntry: "Coffee" */, 1, 1, -142743235);
				func_43(&(uParam0->f_49), 1, 1);
				ATTRIBUTE::_0xD962F8579D702DB5();
				if (((!TASK::PED_HAS_USE_SCENARIO_TASK(Global_34) || TASK::_0x916B8E075ABC8B4E(Global_34, 1)) || FIRE::IS_ENTITY_ON_FIRE(Global_34)) || TASK::_0x0C3CB2E600C8977D(Global_34, 0))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_147))
					{
						OBJECT::DELETE_OBJECT(&(uParam0->f_147));
					}
					if (((func_78(0) && !func_79()) && !uParam0->f_182) && uParam0->f_49.f_73 != -1199896558)
					{
						if (((((((uParam0->f_138 == 3 || uParam0->f_138 == 4) || uParam0->f_138 == 11) || uParam0->f_138 == 16) || uParam0->f_138 == 7) || uParam0->f_138 == 6) || uParam0->f_138 == 14) || uParam0->f_138 == 15)
						{
							func_80(uParam0->f_49.f_73, 1, 1, 1, 0);
							uParam0->f_182 = 1;
						}
					}
					if (FIRE::IS_ENTITY_ON_FIRE(Global_34))
					{
						TASK::CLEAR_PED_TASKS(Global_34, 1, 0);
					}
				}
				uParam0->f_144 = 6;
				uParam0->f_146 = 6;
				func_29(&(uParam0->f_172));
				func_40(uParam0, 5);
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
				func_43(&(uParam0->f_49), 1, 1);
				func_40(uParam0, 3);
			}
			else if (!TASK::_0x0C3CB2E600C8977D(Global_34, 1))
			{
				func_81(uParam0);
			}
			break;
		case 10:
			return 1;
	}
	return 0;
}

void func_13(var uParam0, bool bParam1)
{
	func_51(uParam0);
	func_82(uParam0);
	func_83(uParam0);
	func_52(uParam0);
	if (CAM::_0x927B810E43E99932(&(uParam0->f_18)))
	{
		CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_18));
	}
	if (bParam1)
	{
		func_84(uParam0);
	}
	uParam0->f_165 = -1;
	uParam0->f_189 = 0;
	func_43(&(uParam0->f_49), 0, 1);
}

int func_14(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_85(Global_1939045[iVar0 /*2*/], vParam0))
		{
			return ((*Global_1939045)[iVar0 /*2*/])->f_1;
		}
		iVar0++;
	}
	return 0;
}

bool func_15(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_16(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_17(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_1572887->f_13 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1900718->f_67;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1900718->f_68;
		}
		if (func_86())
		{
			return 1;
		}
		if (Global_1070356->f_3 && !Global_1572887->f_9)
		{
			if ((((*Global_1055966)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*436*/])->f_428 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return 1;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1900718->f_67;
		}
		else
		{
			return Global_1900718->f_68;
		}
	}
	if (iParam0 == 0 && func_88(func_87(0)))
	{
		return 1;
	}
	if ((Global_1939178 && 81919 & (-1 - iParam0)) != 0)
	{
		return 1;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < &Global_1900853)
		{
			return 1;
		}
	}
	switch (func_89(func_87(0)))
	{
		case -1:
			return 0;
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
	return 0;
}

bool func_18()
{
	return Global_1913166->f_1578;
}

void func_19(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	uParam0->f_193.f_5 = iParam1;
	uParam0->f_193.f_2 = iParam2;
	uParam0->f_193.f_3 = iParam3;
	uParam0->f_193.f_2 = iParam4;
	uParam0->f_193.f_2 = iParam5;
	uParam0->f_193.f_2 = iParam6;
}

float func_20(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_21()
{
	return Global_1893575->f_2;
}

void func_22(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_23(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_90(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_91(iParam0);
	switch (iVar0)
	{
		case joaat("weapon"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, 0))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("ammo"):
			if (!func_92(iParam0, 1))
			{
				return false;
			}
			break;
		case joaat("clothing"):
			if (func_93(iParam0))
			{
				return true;
			}
			break;
	}
	return func_94(iParam0, 0, 0, 0) >= iParam1;
}

void func_24(var uParam0)
{
	bool bVar0;

	bVar0 = GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_29);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		OBJECT::_0x646564A3B7DF68F8(*uParam0, (0.65f + (uParam0->f_11 * 0.35f)), (0.65f + (uParam0->f_11 * 0.35f)));
		if (bVar0)
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Smoke", uParam0->f_17, true);
		}
		if (uParam0->f_1)
		{
			OBJECT::_0xC8E21C1677DC5E6F(*uParam0, (uParam0->f_12 * 0.5f));
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
			OBJECT::_0xC8E21C1677DC5E6F(*uParam0, (uParam0->f_12 * 0.5f));
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
			OBJECT::_0x7D7285EFEAB5AF15(*uParam0, uParam0->f_13);
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
			OBJECT::_SET_OBJECT_BURN_LEVEL(*uParam0, ((uParam0->f_15 * 0.9f) + 0.1f), 1);
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
	if (func_10(&Global_1939178, 4194304) || func_21() == 5)
	{
		return 1f;
	}
	return 0.5f;
}

int func_27(var uParam0, float fParam1)
{
	if (!func_95(uParam0))
	{
		return 0;
	}
	if (func_96(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
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
	func_97(uParam0, 0f);
}

void func_30(var uParam0)
{
	if (uParam0->f_80)
	{
		if (func_98(&(uParam0->f_79), &(uParam0->f_80)))
		{
			uParam0->f_80 = 0;
		}
	}
	if (uParam0->f_82)
	{
		if (func_98(&(uParam0->f_81), &(uParam0->f_82)))
		{
			uParam0->f_82 = 0;
		}
	}
	if (uParam0->f_84)
	{
		if (func_98(&(uParam0->f_83), &(uParam0->f_84)))
		{
			uParam0->f_84 = 0;
		}
	}
}

int func_31(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return 1;
	}
	if (func_99(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_99(iVar0, 2))
	{
		if (PED::_IS_PED_HOGTIED(iParam0))
		{
			return 0;
		}
	}
	if (func_99(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_99(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_99(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_99(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_99(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_99(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_32(var uParam0)
{
	int iVar0;

	if (func_54(16777216) || uParam0->f_142 == 7)
	{
		iVar0 = func_35(uParam0);
		if (iVar0 != -1)
		{
			if (!func_100(&(uParam0->f_149[6])))
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
		func_101(4);
	}
	func_101(2);
	MISC::SET_BIT(&(Global_1956131->f_1), 0);
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
	vVar0.f_3 = uParam0->f_141;
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

	iVar0 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_34, 0);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar0) && !TASK::_0x0C3CB2E600C8977D(Global_34, 1))
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0[iVar1]))
			{
				if (iVar0 == uParam0[iVar1])
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

bool func_37(var uParam0)
{
	return uParam0->f_183;
}

void func_38(var uParam0)
{
	uParam0->f_183 = 0;
}

void func_39(var uParam0)
{
	StringCopy(&(uParam0->f_18), "restbyfire_orbit_cam", 64);
	StringCopy(&(uParam0->f_18.f_8), "RESTBYFIRE_ORBIT_REQUEST", 64);
}

void func_40(var uParam0, int iParam1)
{
	uParam0->f_183 = 1;
	uParam0->f_142 = iParam1;
}

int func_41(var uParam0)
{
	return 1;
}

int func_42(var uParam0)
{
	vector3 vVar0;
	float fVar3;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_141))
	{
		if (func_15(uParam0->f_139, 512))
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_141, -0.966f, 0.203f, 0.5f) };
			*(uParam0->f_5[0 /*3*/]) = { vVar0 + Vector(1f, 0f, 0f) };
			fVar3 = (ENTITY::GET_ENTITY_HEADING(uParam0->f_141) + -99.171f);
			func_102(&vVar0, 1, 10, 0, 0);
			(*uParam0)[0] = TASK::CREATE_SCENARIO_POINT(1020517461, vVar0, fVar3, 0, 0, 0);
		}
		if (func_15(uParam0->f_139, 1024))
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_141, -0.212f, -1.045f, 0.5f) };
			*(uParam0->f_5[1 /*3*/]) = { vVar0 + Vector(1f, 0f, 0f) };
			fVar3 = (ENTITY::GET_ENTITY_HEADING(uParam0->f_141) + -11.405f);
			func_102(&vVar0, 1, 10, 0, 0);
			(*uParam0)[1] = TASK::CREATE_SCENARIO_POINT(1259174088, vVar0, fVar3, 0, 0, 0);
		}
		if (func_15(uParam0->f_139, 2048))
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_141, 1.025f, 0.043f, 0.5f) };
			*(uParam0->f_5[2 /*3*/]) = { vVar0 + Vector(1f, 0f, 0f) };
			fVar3 = (ENTITY::GET_ENTITY_HEADING(uParam0->f_141) + 91.78f);
			func_102(&vVar0, 1, 10, 0, 0);
			(*uParam0)[2] = TASK::CREATE_SCENARIO_POINT(-1075420544, vVar0, fVar3, 0, 0, 0);
		}
		if (func_15(uParam0->f_139, 4096))
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_141, 0.249f, 1.05f, 0.5f) };
			*(uParam0->f_5[3 /*3*/]) = { vVar0 + Vector(1f, 0f, 0f) };
			fVar3 = (ENTITY::GET_ENTITY_HEADING(uParam0->f_141) + 164.29f);
			func_102(&vVar0, 1, 10, 0, 0);
			(*uParam0)[3] = TASK::CREATE_SCENARIO_POINT(-1767895052, vVar0, fVar3, 0, 0, 0);
		}
		return 1;
	}
	return 0;
}

void func_43(var uParam0, bool bParam1, bool bParam2)
{
	func_103(uParam0);
	if (bParam2)
	{
		func_104(uParam0, 0);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_35);
	}
	if (func_105())
	{
		func_106(0);
	}
	if (bParam1)
	{
		func_107(uParam0);
		return;
	}
	if (HUD::_DOES_TEXT_DATABASE_EXIST(&(uParam0->f_18)))
	{
		HUD::_TEXT_DATABASE_DELETE(&(uParam0->f_18));
	}
	if (uParam0->f_23)
	{
		if (!CAM::IS_GAMEPLAY_CAM_RENDERING())
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
		CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_59))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_59);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_61))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_61);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_62))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_62);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_63))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_63);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_64))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_64);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_65))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_65);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_66))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_66);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_67))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_67);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_68))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_68);
	}
	func_98(&(uParam0->f_79), &(uParam0->f_80));
	func_98(&(uParam0->f_81), &(uParam0->f_82));
	func_98(&(uParam0->f_83), &(uParam0->f_84));
	TXD::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("satchel_textures");
	Global_1913166->f_1576 = 0;
	if (uParam0->f_25)
	{
		TASK::CLEAR_PED_TASKS(Global_34, 1, 0);
	}
	if (func_108() == -1)
	{
		func_44(uParam0, 18);
	}
	else
	{
		if (uParam0->f_9 == 11)
		{
			if (uParam0->f_22 == -1)
			{
				func_109(uParam0->f_73, uParam0->f_74, 1);
				func_110(uParam0->f_73, uParam0->f_21);
			}
		}
		if (!func_78(0) || func_79())
		{
			if (uParam0->f_34 > 0 && func_90(uParam0->f_73, 0))
			{
				uParam0->f_22 = func_109(uParam0->f_73, uParam0->f_74, uParam0->f_34);
				uParam0->f_34 = 0;
			}
		}
		uParam0->f_22 = -1;
		func_44(uParam0, 0);
	}
}

void func_44(var uParam0, int iParam1)
{
	if (uParam0->f_9 != iParam1)
	{
		uParam0->f_9 = iParam1;
		func_111(uParam0);
	}
}

void func_45(var uParam0)
{
	if (!CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_18)))
	{
		if (!CAM::_0xC285FD21294A1C49(&(uParam0->f_18)))
		{
			CAM::_0x6A4D224FC7643941(&(uParam0->f_18));
		}
	}
}

void func_46(int iParam0)
{
	if (!func_54(iParam0))
	{
		Global_1956172 = (Global_1956172 || iParam0);
	}
}

void func_47(int iParam0)
{
	if (!func_63(iParam0))
	{
		Global_1956172->f_1 = (Global_1956172->f_1 || iParam0);
	}
}

void func_48(int iParam0)
{
	if (func_63(iParam0))
	{
		Global_1956172->f_1 = (Global_1956172->f_1 - (Global_1956172->f_1 && iParam0));
	}
}

int func_49(var uParam0)
{
	int iVar0;
	int iVar1;

	uParam0->f_184 = 0;
	if (PED::_IS_PED_CARRYING(Global_34))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_34);
		if (ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			if (ENTITY::_0x9A100F1CF4546629(iVar1))
			{
				uParam0->f_184 = 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (func_54(134217728) || !func_15(uParam0->f_139, 8192))
	{
		return 0;
	}
	if (func_112(Global_34, 0))
	{
		return 0;
	}
	if (PED::_0x4912DFE492DB98CD(Global_34, "inInspectionMode"))
	{
		return 0;
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_34, 227, true))
	{
		return 0;
	}
	if (func_113(Global_34))
	{
		return 0;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_34))
	{
		return 0;
	}
	if (TASK::_0xD04241BBF6D03A5E(Global_34) != 0)
	{
		return 0;
	}
	if ((func_114(Global_34) || func_115(Global_34)) || func_116(Global_34))
	{
		return 0;
	}
	if (!func_117(Global_34, uParam0->f_141, -0.5f))
	{
		return 0;
	}
	if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(ENTITY::GET_ENTITY_COORDS(uParam0->f_141, true, false), 1.5f) > 2)
	{
		return 0;
	}
	if (func_108() == -1)
	{
		if (func_118())
		{
			return 0;
		}
	}
	else if (func_118() && !((Global_1915180->f_19742 == 28 || Global_1915180->f_19742 == 27) || Global_1915180->f_19742 == 29))
	{
		return 0;
	}
	if (func_119(uParam0) == -1)
	{
		return 0;
	}
	return 1;
}

float func_50(int iParam0, int iParam1, bool bParam2)
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
	return func_20(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

void func_51(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_100(&(uParam0->f_149[iVar0])))
		{
			func_120(uParam0->f_149[iVar0], 1, 1);
		}
		iVar0++;
	}
}

void func_52(var uParam0)
{
	func_120(&(uParam0->f_160), 1, 1);
	func_120(&(uParam0->f_159), 1, 1);
}

void func_53(int iParam0)
{
	if (func_54(iParam0))
	{
		Global_1956172 = (&Global_1956172 - (Global_1956172 && iParam0));
	}
}

bool func_54(int iParam0)
{
	return (Global_1956172 && iParam0) != 0;
}

void func_55(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0[iVar0]))
		{
			TASK::_SET_SCENARIO_POINT_FLAG(uParam0[iVar0], 8, !bParam1);
		}
		iVar0++;
	}
}

void func_56()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
}

int func_57(int iParam0, vector3 vParam1, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;

	iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER(vParam1, 0f, 0f, 0f, iParam4, iParam4, 1f);
	if (func_121(&iVar0))
	{
		func_122(iVar0);
		return 1;
	}
	iVar1 = ENTITY::_0x84CCF9A12942C83D(iVar0, *iParam0, 1, 1, 0, 0);
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		uVar3 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, *iParam0);
		iVar4 = MISC::_GET_ENTITY_FROM_ITEM(uVar3);
		if (ENTITY::IS_ENTITY_A_PED(iVar4))
		{
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar4);
			if (iVar5 != Global_34)
			{
				if (PED::_GET_CARRIER_AS_PED(iVar5) != Global_34)
				{
					func_122(iVar0);
					return 1;
				}
			}
		}
		iVar2++;
	}
	func_122(iVar0);
	return 0;
}

int func_58(bool bParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_34) && !TASK::_0x0C3CB2E600C8977D(Global_34, 1))
		{
			if (((TASK::_0x02EBBB3989B7E695(Global_34) || (bParam0 && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_34, 0))) || (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Global_34) && TASK::GET_TASK_MOVE_NETWORK_EVENT(Global_34, "SCENARIO_POINT_TRANS_COMPLETE"))) || (func_54(16777216) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -1208591336)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_59()
{
	int iVar0;

	iVar0 = PED::_0xC22AA08A8ADB87D4(Global_34);
	switch (iVar0)
	{
		case 512684539:
		case 970934364:
			return 3;
		case 1135271674:
		case 1844142525:
			return 6;
		case -571916863:
		case 825619760:
			return 8;
		case -597629206:
		case 1316803372:
			return 7;
		case -1879538536:
			return 1;
		case -777009509:
		case -734326242:
			return 4;
		default:
			break;
	}
	return 0;
}

void func_60(var uParam0, int iParam1)
{
	uParam0->f_138 = iParam1;
}

void func_61(var uParam0)
{
	if ((((!TASK::PED_HAS_USE_SCENARIO_TASK(Global_34) && uParam0->f_163) && !PED::_IS_PED_CARRYING(Global_34)) && !func_54(4)) && !WEAPON::_0x0DE0944ECCB3DF5D(Global_34))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_141))
		{
			if (!func_100(uParam0->f_159))
			{
				uParam0->f_159 = func_123("REST_BY_FIRE", joaat("INPUT_CONTEXT_Y"), uParam0->f_141, 1, 1, 1, 0, 5, 7f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0, 0);
			}
			else if (func_124(uParam0->f_159, 1))
			{
				func_66(uParam0);
				func_52(uParam0);
				uParam0->f_163 = 0;
			}
		}
	}
	else
	{
		func_125(uParam0);
	}
	if (func_100(uParam0->f_159))
	{
		func_126(uParam0->f_159, 1754796591, 0, 1);
	}
}

void func_62(var uParam0)
{
	if (uParam0->f_163)
	{
		if (!func_100(uParam0->f_160))
		{
			if (func_127(uParam0))
			{
				uParam0->f_160 = func_123("CRAFT_COOK", joaat("INPUT_CONTEXT_X"), uParam0->f_141, 1, 1, 1, 0, 5, 7f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0, 0);
				MISC::SET_BIT(&(Global_1956131->f_1), 2);
				MISC::SET_BIT(&(Global_1956131->f_1), 3);
				if (uParam0->f_184)
				{
					if (func_128(uParam0))
					{
						func_129(uParam0->f_160, "CAMP_REC_COOK", 1);
					}
					else
					{
						MISC::CLEAR_BIT(&(Global_1956131->f_1), 2);
						func_130(uParam0->f_160, 0, 1, 1);
					}
				}
			}
		}
		else if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_34) || WEAPON::_0x0DE0944ECCB3DF5D(Global_34))
		{
			func_52(uParam0);
			uParam0->f_163 = 0;
		}
		else if (func_54(16777216) || uParam0->f_189)
		{
			func_53(16777216);
			uParam0->f_189 = 1;
			func_52(uParam0);
			uParam0->f_163 = 0;
		}
		else
		{
			if (uParam0->f_184 != uParam0->f_185)
			{
				if (uParam0->f_184)
				{
					if (func_128(uParam0) && !func_100(Global_1939067->f_82))
					{
						func_129(uParam0->f_160, "CAMP_REC_COOK", 1);
						func_130(uParam0->f_160, 1, 1, 1);
						uParam0->f_186 = 1;
					}
					else
					{
						func_120(&(uParam0->f_160), 1, 1);
						uParam0->f_160 = func_123("CRAFT_COOK", joaat("INPUT_CONTEXT_X"), uParam0->f_141, 0, 1, 1, 0, 5, 7f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0, 0);
						func_130(uParam0->f_160, 0, 1, 1);
						uParam0->f_186 = 0;
					}
				}
				else
				{
					MISC::SET_BIT(&(Global_1956131->f_1), 2);
					MISC::SET_BIT(&(Global_1956131->f_1), 3);
					func_120(&(uParam0->f_160), 1, 1);
					uParam0->f_160 = func_123("CRAFT_COOK", joaat("INPUT_CONTEXT_X"), uParam0->f_141, 0, 1, 1, 0, 5, 7f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0, 0);
				}
				uParam0->f_185 = uParam0->f_184;
			}
			if (func_124(uParam0->f_160, 1))
			{
				uParam0->f_189 = 1;
				MISC::CLEAR_BIT(&(Global_1956131->f_1), 2);
				func_52(uParam0);
				uParam0->f_163 = 0;
				if (uParam0->f_184)
				{
					if (func_128(uParam0))
					{
						uParam0->f_186 = 1;
					}
					else
					{
						uParam0->f_186 = 0;
					}
				}
				if (uParam0->f_184 && uParam0->f_186)
				{
					func_46(268435456);
				}
			}
		}
	}
	else
	{
		func_120(&(uParam0->f_160), 1, 1);
	}
	if (func_100(uParam0->f_160))
	{
		func_126(uParam0->f_160, 1754796591, 0, 1);
	}
}

bool func_63(int iParam0)
{
	return (Global_1956172->f_1 && iParam0) != 0;
}

char* func_64(int iParam0)
{
	return "CAMPFIRE";
}

float func_65(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_66(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = func_119(uParam0);
	if (iVar0 == -1)
	{
		func_53(268435456);
		func_53(16777216);
		uParam0->f_189 = 0;
		uParam0->f_146 = 0;
		return;
	}
	if (func_54(268435456))
	{
		func_131(Global_34, 1, 1);
		switch (iVar0)
		{
			case 0:
			case 3:
				uParam0->f_146 = 2;
				TASK::_TASK_USE_SCENARIO_POINT(Global_34, uParam0[0], "WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE", 0, 0, 1, 0, 0, -1082130432, 0);
				uParam0->f_144 = 6;
				uParam0->f_143 = 0;
				break;
			case 1:
			case 2:
				uParam0->f_146 = 2;
				TASK::_TASK_USE_SCENARIO_POINT(Global_34, uParam0[1], "WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE", 0, 0, 1, 0, 0, -1082130432, 0);
				uParam0->f_144 = 6;
				uParam0->f_143 = 1;
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
				if (((func_54(16777216) || uParam0->f_189) || func_132(684307653, &iVar1)) || func_132(562107429, &iVar1))
				{
					bVar2 = true;
					if (func_133(0) || func_133(1))
					{
						bVar2 = false;
					}
					if (bVar2)
					{
						PED::_0xD65FDC686A031C83(Global_34, -1955932021, 3f);
					}
					if (PED::IS_PED_MALE(Global_34))
					{
						TASK::_TASK_USE_SCENARIO_POINT(Global_34, uParam0[iVar0], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR", 0, 1, 0, 0, 0, -1082130432, 0);
					}
					else
					{
						TASK::_TASK_USE_SCENARIO_POINT(Global_34, uParam0[iVar0], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_MP_FEMALE_A", 0, 1, 0, 0, 0, -1082130432, 0);
					}
				}
				else if (uParam0->f_146 == 1)
				{
					if (PED::IS_PED_MALE(Global_34))
					{
						TASK::_TASK_USE_SCENARIO_POINT(Global_34, uParam0[iVar0], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR", 0, 1, 0, 0, 0, -1082130432, 0);
					}
					else
					{
						TASK::_TASK_USE_SCENARIO_POINT(Global_34, uParam0[iVar0], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_MP_FEMALE_A", 0, 1, 0, 0, 0, -1082130432, 0);
					}
				}
				else if (func_134())
				{
					if (PED::IS_PED_MALE(Global_34))
					{
						TASK::_TASK_USE_SCENARIO_POINT(Global_34, uParam0[iVar0], "WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A", 0, 1, 0, 0, 0, -1082130432, 0);
					}
					else
					{
						TASK::_TASK_USE_SCENARIO_POINT(Global_34, uParam0[iVar0], "WORLD_PLAYER_CAMP_FIRE_SQUAT_FEMALE_A", 0, 1, 0, 0, 0, -1082130432, 0);
					}
				}
				else if (PED::IS_PED_MALE(Global_34))
				{
					TASK::_TASK_USE_SCENARIO_POINT(Global_34, uParam0[iVar0], "WORLD_PLAYER_CAMP_FIRE_SIT_MALE_A", 0, 1, 0, 0, 0, -1082130432, 0);
				}
				else
				{
					TASK::_TASK_USE_SCENARIO_POINT(Global_34, uParam0[iVar0], "WORLD_PLAYER_CAMP_FIRE_SIT_FEMALE_A", 0, 1, 0, 0, 0, -1082130432, 0);
				}
				break;
		}
		uParam0->f_143 = iVar0;
	}
}

void func_67()
{
	if (func_90(joaat("weapon_kit_binoculars"), 0))
	{
		func_135(32);
	}
	if (func_90(1652431022 /* GXTEntry: "Refined Binoculars" */, 0))
	{
		func_135(32);
	}
	if (func_90(joaat("weapon_kit_camera"), 0))
	{
		func_135(64);
	}
}

void func_68(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_100(&(uParam0->f_149[iVar0])))
		{
			if (func_136(&(uParam0->f_149[iVar0]), 0) == bParam1)
			{
			}
			else
			{
				func_130(&(uParam0->f_149[iVar0]), bParam1, 1, 1);
			}
		}
		iVar0++;
	}
}

void func_69(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::_0xC22AA08A8ADB87D4(Global_34);
	iVar1 = 0;
	if (iVar0 == 1135271674 || iVar0 == 1844142525)
	{
		if ((((((func_72(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 500) && !uParam0->f_189) && !func_54(16777216)) && uParam0->f_146 != 1) && !func_132(684307653, &iVar1)) && !func_132(562107429, &iVar1))
		{
			func_29(&(uParam0->f_172));
			func_75(-63615330, 0.5f);
			uParam0->f_164 = MISC::GET_GAME_TIMER();
		}
	}
	else if (iVar0 == -571916863 || iVar0 == 825619760)
	{
		if (func_72(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 500)
		{
			if (!func_95(&(uParam0->f_172)))
			{
				func_29(&(uParam0->f_172));
			}
			if (func_27(&(uParam0->f_172), 180f))
			{
				func_29(&(uParam0->f_172));
				if (!func_134())
				{
					func_75(1698735158, 0.5f);
					uParam0->f_164 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
	else if (iVar0 == -597629206 || iVar0 == 1316803372)
	{
		if (func_72(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 500)
		{
			if (!func_95(&(uParam0->f_172)))
			{
				func_29(&(uParam0->f_172));
			}
			if (func_27(&(uParam0->f_172), 10f))
			{
				if (func_134())
				{
					func_29(&(uParam0->f_172));
					uParam0->f_164 = MISC::GET_GAME_TIMER();
					func_75(-841180202, 0.5f);
				}
			}
		}
	}
	else if (iVar0 == -518407211 || iVar0 == 1662215698)
	{
		if (func_72(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 500)
		{
			func_75(653141085, 2f);
			uParam0->f_164 = MISC::GET_GAME_TIMER();
		}
	}
	else if (iVar0 == -1433449364 || iVar0 == 2058555960)
	{
		if (func_72(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 500)
		{
			func_75(1335077954, 2f);
			uParam0->f_164 = MISC::GET_GAME_TIMER();
		}
	}
}

int func_70(var uParam0, bool bParam1, int iParam2, int iParam3)
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
			iVar1 = uParam0->f_143;
		}
	}
	else
	{
		iVar1 = uParam0->f_143;
		iVar2 = uParam0->f_144;
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
					if (func_108() != 0)
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
			else if (func_108() != 0)
			{
				iVar0 = 544786;
			}
			else
			{
				iVar0 = 20498;
			}
			break;
	}
	if (TASK::_0x038B1F1674F0E242(Global_34) || uParam0->f_188)
	{
		iVar0 = 0;
	}
	else if (func_112(Global_34, 0) || WEAPON::_0x0DE0944ECCB3DF5D(Global_34))
	{
		if (!func_15(uParam0->f_140, 32))
		{
			func_137(207, 1);
			func_16(&(uParam0->f_140), 32);
		}
		iVar0 = 16;
	}
	func_138(uParam0, iVar0);
	if (uParam0->f_146 == 2)
	{
		func_68(uParam0, 0);
	}
	iVar3 = func_139(uParam0);
	if (iVar3 != -1)
	{
		if (uParam0->f_145 != -1)
		{
			uParam0->f_143 = uParam0->f_145;
		}
	}
	switch (iVar3)
	{
		case 0:
			func_103(&(uParam0->f_49));
			func_44(&(uParam0->f_49), 1);
			uParam0->f_146 = 6;
			break;
		case 8:
			func_51(uParam0);
			uParam0->f_188 = 1;
			break;
		case 2:
			func_44(&(uParam0->f_49), 2);
			func_60(uParam0, 0);
			uParam0->f_49.f_31 = 1;
			uParam0->f_146 = 2;
			func_51(uParam0);
			func_40(uParam0, 7);
			break;
		case 6:
			func_51(uParam0);
			uParam0->f_146 = 10;
			return 1;
		case 1:
			func_140(uParam0, func_15(uParam0->f_140, 16));
			uParam0->f_146 = 0;
			func_51(uParam0);
			break;
		default:
			return 0;
	}
	return 1;
}

int func_71(var uParam0)
{
	switch (uParam0->f_143)
	{
		case 0:
			return func_141(uParam0);
		case 1:
			return func_142(uParam0);
		case 2:
			return func_143(uParam0);
		case 3:
			return func_144(uParam0);
	}
	func_51(uParam0);
	return 0;
}

int func_72(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	bVar0 = PED::_0xC488B8C0E52560D8(Global_34);
	bVar1 = PED::_0x2DC0E8DCBD3546E9(Global_34);
	if ((bVar0 || bVar1) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 1944546609))
	{
		return 0;
	}
	if (bVar1 && uParam0->f_145 != -1)
	{
		iVar2 = func_35(uParam0);
		if (iVar2 != uParam0->f_145)
		{
			return 0;
		}
		if (uParam0->f_143 != iVar2)
		{
			uParam0->f_143 = iVar2;
			return 0;
		}
	}
	if (func_145())
	{
		return 0;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_34))
	{
		return 0;
	}
	return 1;
}

int func_73(bool bParam0)
{
	if (func_108() == -1)
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

int func_74(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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

	if (func_146())
	{
		Global_1939231->f_10479 = iParam0;
		func_147(iParam0, 1, -142743235, 0, 0);
		return 0;
	}
	if (!func_148(iParam0, bParam4))
	{
		return 0;
	}
	if (func_149(iParam0))
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
	if (iParam0 == -418848773)
	{
		UIAPPS::_LAUNCH_APP_WITH_ENTRY("player_menu", "mp_moonshine_selection");
	}
	if (func_150(iParam0, -2081717885))
	{
		func_151(iParam0, Var10, Var0, uVar27, bVar28, iVar29);
	}
	else if (func_150(iParam0, -1909684001))
	{
		func_152(iParam0, Var10, Var0, bVar28, iVar29);
	}
	else if (func_150(iParam0, 587975446))
	{
		func_153(iParam0, Var10);
	}
	else if (func_150(iParam0, 566155764))
	{
		if (!func_154(iParam0))
		{
			return 0;
		}
	}
	if (func_155(iParam0, bParam5, bParam6, bParam1))
	{
		Global_1912976 = iParam0;
		Global_1913165 = MISC::GET_GAME_TIMER();
		return 1;
	}
	if (func_150(iParam0, -1227898937))
	{
		Var0.f_2 = iParam0;
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "doc_newspaper", 32);
		Var10.f_14 = 1024;
		Var10.f_15 = 1;
		func_156(Var10, 1);
		iVar29 = 0;
		bVar28 = false;
	}
	else if ((func_150(iParam0, -1472964441) || func_150(iParam0, -228153877)) || func_150(iParam0, 566155764))
	{
	}
	else if (func_150(iParam0, 1919582297))
	{
		if (((func_157() || TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_34, 1)) || TASK::_0x0C3CB2E600C8977D(Global_34, 1)) || !PED::IS_PED_ON_FOOT(Global_34))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 1929383243: /* GXTEntry: "Herbivore Bait" */
			case 2036955137: /* GXTEntry: "Potent Herbivore Bait" */
				StringCopy(&(Var10.f_10), "item_bait_herbivore", 32);
				break;
			case -1635450397: /* GXTEntry: "Predator Bait" */
			case 1831763320: /* GXTEntry: "Potent Predator Bait" */
				StringCopy(&(Var10.f_10), "item_bait_predator", 32);
				break;
		}
		Var0.f_1 = iParam0;
		Var0.f_3 = bParam1;
		Var10 = { Var0 };
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_156(Var10, 0);
		bVar28 = false;
	}
	else if (func_158(iParam0))
	{
		Var0.f_3 = 0;
		Var0.f_1 = iParam0;
		Var0.f_2 = 0;
		Var0 = func_159(Global_1070356->f_26843.f_11.f_67);
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "net_player_wheel_item_use", 32);
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_156(Var10, 0);
		iVar29 = 1;
	}
	else if (func_91(iParam0) == joaat("clothing"))
	{
		if (!func_160(iParam0))
		{
			func_161("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, 1);
			return iVar29;
		}
		iVar32 = func_162(iParam0);
		switch (iVar32)
		{
			case -2061583405:
			case -999503751:
			case -525676072:
				bVar30 = func_163();
				break;
			default:
				bVar30 = true;
				break;
		}
		if (!bVar30)
		{
			if (func_164(PLAYER::PLAYER_ID()))
			{
				func_161("SI_ITEM_USE_OUTFITS_STATIONARY", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_161("SI_ITEM_USE_OUTFITS_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return iVar29;
		}
		if (iVar32 == -999503751)
		{
			if (Global_1951141->f_1657 != iParam0)
			{
				func_165(20, iParam0, 0, 0, 0);
			}
		}
		else
		{
			switch (iVar32)
			{
				case -525676072:
				case -68128151:
				case 81053684:
					func_166(iParam0, 0);
					return iVar29;
				case -2061583405:
					func_167(iParam0);
					func_165(35, 0, 0, 0, 0);
					return 1;
				case -1719060085:
					if (iParam0 == &Global_1951141->f_1657.f_1[23 /*3*/])
					{
						func_168(Global_34, 260271636 /* GXTEntry: "No Gloves" */, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
						PED::_0xCB9401F918CB0F75(Global_34, "PlayUnequipGlovesFidget", 1, 15);
						func_169(iParam0, 0);
						return 1;
					}
					else
					{
						PED::_0xCB9401F918CB0F75(Global_34, "PlayEquipGlovesFidget", 1, 15);
						func_169(iParam0, 1);
					}
					break;
				default:
					if (!func_150(iParam0, -1348134986))
					{
					}
					else
					{
						func_166(iParam0, 0);
					}
					break;
			}
			func_168(Global_34, iParam0, 0, -358215195, 1, 1, 1, 0, 0, 1, 1);
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1259508039: /* GXTEntry: "Satchel" */
				func_170(1);
				break;
			case -727924611: /* GXTEntry: "Wardrobe" */
				if (func_108() != -1)
				{
				}
				else if (!func_160(iParam0))
				{
					func_161("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, 1);
				}
				else
				{
					bVar30 = func_171(7, iParam0);
					bVar31 = func_171(1, iParam0);
					if (bVar31 && !bVar30)
					{
						if (MAP::DOES_BLIP_EXIST(Global_17094))
						{
							MAP::REMOVE_BLIP(&Global_17094);
						}
						Global_17094 = MAP::_0x3E593DF9C2962EC6(-1925605092);
						MAP::_BLIP_SET_MODIFIER(Global_17094, 673950256);
						func_161(MISC::_CREATE_VAR_STRING(0, -1680440926, Global_17094), 10000, 0, 0, 0, 1);
					}
					else if (!func_172(7))
					{
						func_161("SI_ITEM_USE_WARDROBE_NO_SADDLE", 10000, 0, 0, 0, 1);
					}
					else if (!bVar30)
					{
						if (func_174(Global_34, func_173(7), 0))
						{
							func_161("SI_ITEM_USE_WARDROBE_STATIONARY", 10000, 0, 0, 0, 1);
						}
						else
						{
							if (MAP::DOES_BLIP_EXIST(Global_17094))
							{
								MAP::REMOVE_BLIP(&Global_17094);
							}
							Global_17094 = MAP::_0x3E593DF9C2962EC6(-1925605092);
							MAP::_BLIP_SET_MODIFIER(Global_17094, 673950256);
							func_161(MISC::_CREATE_VAR_STRING(0, -482898802, Global_17094), 10000, 0, 0, 0, 1);
						}
					}
					else
					{
						iVar26 = 1338309244;
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
							func_156(Var10, 0);
						}
						Jump @2072; //curOff = 1569
						func_175();
						Jump @2072; //curOff = 1576
						if (!func_15(Global_1956172->f_1, 1) || func_15(Global_1956172->f_1, 512))
						{
							if (func_160(-1838434463 /* GXTEntry: "Camp" */))
							{
								if (func_176(1, 1))
								{
									func_177(2, 1);
								}
								else if (func_178(1))
								{
									func_161("GC_SELECT_HELP_FOLLOWER_DEAD", 10000, 0, 0, 0, 1);
								}
								else if (func_179())
								{
									func_161("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
								}
								else
								{
									if (GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
									{
										func_180();
									}
									else
									{
										func_161("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
									}
									func_181(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
								}
							}
							else if (!GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
							{
								func_161("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
								func_181(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
							}
							else if (func_179())
							{
								func_161("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
							}
							else
							{
								func_161("GC_SELECT_HELP_DISABLED", 10000, 0, 0, 0, 1);
							}
						}
						else
						{
							Global_1956172->f_1 |= 2;
							iVar29 = 1;
						}
						Jump @2072; //curOff = 1851
						if (!WEAPON::_IS_WEAPON_BINOCULARS(func_36(Global_34, 1, 0, 0)))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_34, iParam0, true, 0, false, false);
						}
						return 1;
						Jump @2072; //curOff = 1889
						if (func_36(Global_34, 1, 0, 0) != joaat("weapon_kit_camera"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("weapon_kit_camera"), true, 0, false, false);
						}
						return 1;
						Jump @2072; //curOff = 1930
						Jump @2072; //curOff = 1933
						func_137(533, 1);
						Jump @2072; //curOff = 1944
						func_182(1);
						Jump @2072; //curOff = 1952
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), -569063887, 1928812891, 1, 0, -1082130432);
						bVar28 = false;
						return 1;
						Jump @2072; //curOff = 1987
						UIAPPS::_LAUNCH_APP_BY_HASH(-76766502);
						if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-76766502) > 0)
						{
						}
						else
						{
							Var0.f_1 = iParam0;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "collectors_bag", 32);
							Var10.f_14 = 1024;
							func_156(Var10, 0);
						}
						return 1;
						Jump @2072; //curOff = 2063
						iVar29 = 0;
					}
				}
				if (bVar28)
				{
					HUD::_0xBFFF81E12A745A5F();
				}
				return iVar29;
		}
	}

int func_75(int iParam0, float fParam1)
{
	if (!PED::_0x68821369A2CEADD5(Global_34, iParam0))
	{
		PED::_0xD65FDC686A031C83(Global_34, iParam0, fParam1);
		PED::_0x6D07B371E9439019(Global_34);
		return 0;
	}
	return 1;
}

int func_76(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	struct<5> Var7;

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	if (iParam3 == -142743235)
	{
		if (func_183(iParam0))
		{
			iParam3 = 562618531;
		}
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_184(iParam0, 1);
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
			func_185(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
		}
		return 0;
	}
	if (!func_23(iParam0, 1))
	{
		return 0;
	}
	Var5 = { func_186(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((func_94(iParam0, 0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_94(iParam0, 0, 0, 0) - iParam1) < 0)
		{
			func_76(iParam0, func_94(iParam0, 0, 0, 0), bParam2, iParam3);
			return 0;
		}
	}
	if (func_91(iParam0) == joaat("weapon"))
	{
		if (!func_187(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_147(iParam0, iParam1, iParam3, bParam2, 0))
	{
		return 0;
	}
	else
	{
		Var7 = { func_188(iParam0, 0, 0) };
		if (func_78(0) && Var7.f_4 == 1084182731)
		{
			func_189(1, 0, 0);
		}
	}
	if (iParam0 == -569063887)
	{
		Global_1939067->f_21 = 0;
	}
	if (!func_78(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_185(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
	}
	return 1;
}

int func_77(var uParam0, var uParam1)
{
	func_46(131072);
	if (func_190(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_78(bool bParam0)
{
	if (func_108() == -1)
	{
		return 1;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_73(bParam0));
}

int func_79()
{
	if (INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(PLAYER::PLAYER_PED_ID()) != 3)
	{
		return 0;
	}
	return INVENTORY::_0xFC7563F482781A3D();
}

void func_80(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (!func_78(0) || func_79())
	{
		return;
	}
	if (!func_90(iParam0, 0))
	{
		return;
	}
	func_192(func_191(-413660030), iParam1);
	if (bParam3)
	{
		if (func_108() == -1)
		{
			if (func_150(iParam0, -1588156645))
			{
				iVar0 = func_194(func_193(iParam0, 0), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar0))
				{
					func_195(iVar0);
				}
			}
		}
		if (iParam4 == 0)
		{
			if (func_91(iParam0) == -1977020088)
			{
				if (func_196(iParam0, 0))
				{
					func_185(iParam0, 1, 0, 1, 0, 0, 0);
				}
			}
			else
			{
				func_197(iParam0, iParam1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		else
		{
			func_198(iParam0, iParam4, iParam1);
		}
	}
	func_199(iParam0, iParam1);
	Global_1051083 = iParam0;
}

void func_81(var uParam0)
{
	int iVar0;

	if (func_72(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 250)
	{
		iVar0 = PED::_0xC22AA08A8ADB87D4(Global_34);
		if (iVar0 == -518407211 || iVar0 == 1662215698)
		{
			func_75(653141085, 1086324736 /* Float: 6f */);
			uParam0->f_164 = MISC::GET_GAME_TIMER();
		}
		else if (iVar0 == -1433449364 || iVar0 == 2058555960)
		{
			func_75(1335077954, 1086324736 /* Float: 6f */);
			uParam0->f_164 = MISC::GET_GAME_TIMER();
		}
		else if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_34) && (MISC::GET_FRAME_COUNT() % 2) == 0)
		{
			TASK::CLEAR_PED_TASKS(Global_34, 1, 0);
		}
	}
}

void func_82(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0[iVar0]))
		{
			TASK::_DELETE_SCENARIO_POINT(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_83(var uParam0)
{
}

void func_84(var uParam0)
{
	uParam0->f_142 = 0;
	uParam0->f_143 = -1;
	uParam0->f_144 = 0;
	uParam0->f_145 = -1;
	uParam0->f_146 = 0;
	uParam0->f_141 = 0;
}

bool func_85(int iParam0, vector3 vParam1)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return false;
	}
	return VOLUME::_0xF256A75210C5C0EB(iParam0, vParam1);
}

int func_86()
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
	if (!func_88(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

struct<2> func_87(int iParam0)
{
	return *(Global_1900718->f_1[iParam0 /*2*/]);
}

int func_88(struct<2> Param0)
{
	if (!func_200(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_201(Param0))
	{
		return 0;
	}
	return 1;
}

int func_89(var uParam0, var uParam1)
{
	return uParam0;
}

int func_90(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_91(int iParam0)
{
	vector3 vVar0;

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_92(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	if (Global_1939178->f_6)
	{
		return 0;
	}
	iVar0 = func_184(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_202("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_203(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_204(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_205(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_205(iVar1);
	}
	return 0;
}

bool func_93(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_90(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_162(iParam0);
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
	iVar1 = func_206(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_207(&(Global_17172.f_54.f_644.f_1353.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_208(iParam0);
	iVar2 = func_207(&(Global_17172.f_54.f_644.f_1353.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17172.f_54.f_644.f_1353.f_5[iVar2 /*17*/];
}

int func_94(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_91(iParam0);
	if (iVar1 == joaat("ammo") || (bParam1 && iVar1 == joaat("weapon")))
	{
		iVar2 = func_184(iParam0, 1);
		if (iVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar2);
		}
	}
	else if (iVar1 == joaat("weapon"))
	{
		return func_209(iParam0, 0);
	}
	if (func_210(iParam0, joaat("default")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_73(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_211(iParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_73(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

bool func_95(var uParam0)
{
	return func_212(*uParam0, 1);
}

float func_96(var uParam0)
{
	if (!func_95(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_213(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_214() - uParam0->f_1);
}

void func_97(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_214() - fParam1);
	func_215(uParam0, 1);
	func_216(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_98(int* iParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 1;
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(*iParam0))
	{
		OBJECT::DELETE_OBJECT(iParam0);
		return 1;
	}
	*uParam1 = 1;
	NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(*iParam0);
	return 0;
}

bool func_99(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_100(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 60)
	{
		return false;
	}
	if (((*Global_1949759)[iParam0 /*23*/])->f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3);
}

void func_101(int iParam0)
{
	Global_1903007->f_302 = (Global_1903007->f_302 || iParam0);
}

int func_102(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_217(*uParam0, 0f, 0f, 0f))
	{
		return 1;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, iParam3) && !bVar2)
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
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, iParam3) && !bVar3)
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

void func_103(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_120((*uParam0)[iVar0], 1, 1);
		iVar0++;
	}
}

void func_104(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (UISTATEMACHINE::_UISTATEMACHINE_REQUEST_TRANSITION(-1624772174, 1383188602))
		{
		}
		else
		{
			UIAPPS::_CLOSE_APP_BY_HASH(-1624772174);
		}
	}
	else
	{
		UIAPPS::_CLOSE_APP_BY_HASH(-1624772174);
	}
	uParam0->f_54 = 0;
	func_53(8);
	ATTRIBUTE::_0xD962F8579D702DB5();
}

int func_105()
{
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "player_crafting_active"))
	{
		return DECORATOR::DECOR_GET_BOOL(PLAYER::PLAYER_PED_ID(), "player_crafting_active");
	}
	return 0;
}

void func_106(bool bParam0)
{
	if (bParam0)
	{
	}
	Global_1913166->f_1582 = bParam0;
	DECORATOR::DECOR_SET_BOOL(Global_34, "player_crafting_active", bParam0);
}

void func_107(var uParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_59))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_59, 0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_61))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_61, 0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_62))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_62, 0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_63))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_63, 0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_64))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_64, 0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_65))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_65, 0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_66))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_66, 0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_67))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_67, 0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_68))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_68, 0);
	}
	func_98(&(uParam0->f_79), &(uParam0->f_80));
	func_98(&(uParam0->f_81), &(uParam0->f_82));
	func_98(&(uParam0->f_83), &(uParam0->f_84));
}

int func_108()
{
	return Global_1572887->f_13;
}

int func_109(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	bool bVar6;
	struct<16> Var7;
	struct<16> Var23;

	if (!func_90(iParam0, 0))
	{
		return -1;
	}
	if (func_218(iParam0, iParam1, 0) < iParam2)
	{
		return -1;
	}
	Var0 = { func_188(iParam0, 1, 0) };
	if (func_219(iParam0, &Var0, iParam2, 0, 1, -1, 0))
	{
		return -1;
	}
	bVar6 = func_150(iParam0, 1992556171);
	if (bVar6)
	{
		iVar5 = func_220(iParam0, "SPEND STEW FEE", 1, 1, 0, iParam1);
	}
	else
	{
		Var7 = { func_221(iParam0, Var0, Var0.f_4, iParam2, 1) };
		Var7.f_13 = iParam1;
		Var7.f_12 = 1248274121;
		iVar5 = func_222(2113164098, &Var7, 1);
	}
	if (iVar5 == -1)
	{
		return -1;
	}
	Var23.f_7 = -142743235;
	Var23.f_1 = 1;
	func_223(iVar5, Var23);
	TELEMETRY::_0x78C2E029DB205A3A(iParam0, iParam1);
	return iVar5;
}

void func_110(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		func_224(11, 1, 0);
		iVar0++;
	}
	if (func_225(iParam0, 0))
	{
		func_226(40);
	}
	else
	{
		func_226(39);
	}
}

void func_111(var uParam0)
{
	uParam0->f_19 = 1;
}

int func_112(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

bool func_113(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

var func_114(int iParam0)
{
	return (func_227(iParam0, 4) || func_227(iParam0, 5));
}

int func_115(int iParam0)
{
	return func_227(iParam0, 7);
}

int func_116(int iParam0)
{
	return func_227(iParam0, 6);
}

bool func_117(int iParam0, int iParam1, float fParam2)
{
	return func_228(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

bool func_118()
{
	return (Global_1915180->f_20135 || Global_1915180->f_21989.f_1);
}

int func_119(var uParam0)
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
		if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0[iVar3]))
		{
			if (TASK::_GET_PED_USING_SCENARIO_POINT(uParam0[iVar3]) != 0)
			{
			}
			else if (!PED::_0xAB643407D0B26F07(Global_34, uParam0[iVar3], 0, 0, 1) && !func_54(268435456))
			{
			}
			else
			{
				ITEMSET::_0x20A4BF0E09BEE146(iVar2);
				if (func_57(&iVar2, TASK::_GET_SCENARIO_POINT_COORDS(uParam0[iVar3], 1), 1065353216 /* Float: 1f */))
				{
				}
				else
				{
					fVar4 = func_20(Global_35, *(uParam0->f_5[iVar3 /*3*/]));
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

void func_120(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_100(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_229(*uParam0);
	if (((*Global_1949759)[iVar0 /*23*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_230(iVar0);
	*uParam0 = 0;
}

int func_121(int iParam0)
{
	if (PED::_0xA1FBAC56D38563E2(*iParam0))
	{
		return 1;
	}
	return 0;
}

void func_122(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

int func_123(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
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
		if (func_231(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == ((*Global_1949759)[iVar0 /*23*/])->f_11 && iParam1 == ((*Global_1949759)[iVar0 /*23*/])->f_4)
				{
					if (iParam3 <= Global_1949759[iVar0 /*23*/])
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
				func_232(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

bool func_124(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_100(iParam0))
	{
		return false;
	}
	iVar0 = func_229(iParam0);
	if (HUD::_UIPROMPT_HAS_HOLD_AUTO_FILL_MODE(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		if (((*Global_1949759)[iVar0 /*23*/])->f_20)
		{
			iVar1 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iVar1 = MISC::_GET_SYSTEM_TIME();
		}
		uVar2 = HUD::_0x81801291806DBC50(((*Global_1949759)[iVar0 /*23*/])->f_3);
		if (!HUD::_UIPROMPT_IS_ACTIVE(((*Global_1949759)[iVar0 /*23*/])->f_3))
		{
			iVar3 = (iVar1 - ((*Global_1949759)[iVar0 /*23*/])->f_21);
			iVar4 = BUILTIN::FLOOR((IntToFloat(((*Global_1949759)[iVar0 /*23*/])->f_18) * (1f - ((*Global_1949759)[iVar0 /*23*/])->f_22)));
			if (iVar3 > iVar4)
			{
				return true;
			}
		}
		else
		{
			((*Global_1949759)[iVar0 /*23*/])->f_21 = iVar1;
			((*Global_1949759)[iVar0 /*23*/])->f_22 = uVar2;
		}
	}
	if (HUD::_UIPROMPT_HAS_MASH_MODE(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1949759)[iVar0 /*23*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

void func_125(var uParam0)
{
	if (func_100(uParam0->f_159))
	{
		func_120(&(uParam0->f_159), 1, 1);
	}
}

void func_126(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_100(iParam0))
	{
		return;
	}
	iVar0 = func_229(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_GROUP(((*Global_1949759)[iVar0 /*23*/])->f_3, iParam1, iParam2);
}

int func_127(var uParam0)
{
	if (WEAPON::_0x0DE0944ECCB3DF5D(Global_34))
	{
		return 0;
	}
	if (uParam0->f_189)
	{
		return 0;
	}
	if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_34))
	{
		return 0;
	}
	if (func_54(16777216))
	{
		return 0;
	}
	if (func_54(1))
	{
		return 0;
	}
	return 1;
}

int func_128(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_34);
	if (ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		iVar2 = func_233(iVar1);
		if (((func_234(iVar2) && !ENTITY::_0x8DE41E9902E85756(iVar0)) && FLOCK::_0xF8B48A361DC388AE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)) != 2) && !FIRE::_0xCDC25355C0D65963(iVar0))
		{
			uParam0->f_49.f_73 = iVar2;
			uParam0->f_49.f_74 = -214678071;
			if (func_100(uParam0->f_160))
			{
				func_126(uParam0->f_160, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iVar0), 0, 1);
			}
			return 1;
		}
	}
	return 0;
}

void func_129(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_100(iParam0))
	{
		return;
	}
	iVar0 = func_229(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1949759)[iVar0 /*23*/])->f_3, sParam1);
}

void func_130(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_100(iParam0))
	{
		return;
	}
	iVar0 = func_229(iParam0);
	if (bParam1)
	{
		func_235(iParam0, 4);
		if (bParam3)
		{
			func_236(iVar0, 1);
		}
		func_237(iVar0, 1);
	}
	else
	{
		func_238(iParam0, 4);
		func_237(iVar0, 0);
	}
}

void func_131(int iParam0, bool bParam1, bool bParam2)
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
	iVar0 = func_239(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!func_78(0) || func_79())
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		func_240(iVar1, 0);
	}
	else if (PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
	{
		Var2.f_1 = 10;
		Var2.f_12 = 10;
		MISC::_0x48E4D50F87A96AA5(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), 1, 1, ENTITY::GET_ENTITY_MODEL(iVar0), &Var2, 0);
		iVar25 = 0;
		while (iVar25 < 10)
		{
			iVar26 = &Var2.f_1[iVar25];
			if (func_90(iVar26, 0))
			{
				if (!bParam1 || func_241(iVar26))
				{
					func_197(iVar26, &(Var2.f_12[iVar25]), bParam2, 0, 0, 752097756, 0, 0, 0, 0);
				}
			}
			iVar25++;
		}
	}
	else
	{
		iVar39 = PED::_GET_PED_DAMAGE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0));
		if (func_23(-269048282 /* GXTEntry: "Buck Antler Trinket" */, 1))
		{
			if (iVar39 < 2 && MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
			{
				iVar40 = iVar39;
				iVar40++;
				iVar39 = iVar40;
			}
		}
		iVar41 = FLOCK::_0xF8B48A361DC388AE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0));
		iVar42 = func_242(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), iVar41);
		PED::_0x6B89FAA36FC909A3(&iVar27, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), iVar39, iVar42);
		iVar38 = 0;
		while (iVar38 < iVar27)
		{
			if (&iVar27[iVar38] != 0)
			{
				if (func_243(iVar0) && !func_244(&(iVar27[iVar38])))
				{
					iVar27[iVar38] = 0;
				}
				else if (!bParam1 || func_241(&(iVar27[iVar38])))
				{
					func_197(&(iVar27[iVar38]), 1, bParam2, 0, 0, 752097756, 0, 0, 0, 0);
				}
			}
			iVar38++;
		}
	}
	iVar43 = func_245(&iVar0);
	if (!func_90(iVar43, 0))
	{
		iVar43 = func_246(iVar0);
	}
	if (func_90(iVar43, 0))
	{
		func_247(iVar43, 1, 1, -142743235);
	}
	ENTITY::_0x0D0DB2B6AF19A987(&iVar0);
}

int func_132(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_249(func_248(iParam0), 1);
	if (iVar1 >= 39)
	{
		return 0;
	}
	if (&Global_1951141->f_1657.f_1[iVar1 /*3*/] != 0 && &Global_1951141->f_1657.f_1[iVar1 /*3*/] != &Global_1951141->f_81[iVar1 /*12*/])
	{
		iVar0 = &Global_1951141->f_1657.f_1[iVar1 /*3*/];
		if (func_162(iVar0) == iParam0 || (iParam0 == 81053684 && func_150(iVar0, -1348134986)))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	*iParam1 = 0;
	return 0;
}

int func_133(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_34, &iVar0, true, iParam0, false))
	{
		if (func_90(iVar0, 0))
		{
			if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0) || func_250(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_134()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = MISC::_GET_PREV_WEATHER_TYPE_HASH_NAME();
	if (((((iVar0 == joaat("rain") || iVar0 == joaat("shower")) || iVar0 == joaat("sleet")) || iVar0 == joaat("hurricane")) || iVar0 == joaat("thunderstorm")) || iVar0 == joaat("thunder"))
	{
		return 1;
	}
	iVar1 = MISC::_GET_NEXT_WEATHER_TYPE_HASH_NAME();
	if (((((iVar1 == joaat("rain") || iVar1 == joaat("shower")) || iVar1 == joaat("sleet")) || iVar1 == joaat("hurricane")) || iVar1 == joaat("thunderstorm")) || iVar1 == joaat("thunder"))
	{
		return 1;
	}
	iVar2 = func_251();
	if (((iVar2 == 0 || iVar2 == 7) || iVar2 == 2) || iVar2 == 10)
	{
		return 1;
	}
	return 0;
}

void func_135(int iParam0)
{
	Global_1939067->f_39 = (Global_1939067->f_39 || iParam0);
}

bool func_136(int iParam0, bool bParam1)
{
	if (bParam1 && !func_100(iParam0))
	{
		return false;
	}
	return !func_231(iParam0, 4);
}

void func_137(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_252(iParam0, &iVar0, &iVar1);
	if (!func_253(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_254(iVar0, iVar1);
}

void func_138(var uParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -996707397))
	{
		func_16(&(uParam0->f_140), 2);
	}
	else
	{
		func_22(&(uParam0->f_140), 2);
	}
	if (func_15(iParam1, 1))
	{
		if (!func_100(&(uParam0->f_149[0])))
		{
			uParam0->f_149[0] = func_255("KNEEL_FIRE", joaat("INPUT_CONTEXT_B"), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			func_126(&(uParam0->f_149[0]), 1754796591, 0, 1);
		}
	}
	else if (func_100(&(uParam0->f_149[0])))
	{
		func_120(uParam0->f_149[0], 1, 1);
	}
	if (((func_15(iParam1, 4096) && func_15(uParam0->f_139, 16)) && !func_54(536870912)) && uParam0->f_146 != 2)
	{
		MISC::SET_BIT(&(Global_1956131->f_1), 2);
		MISC::SET_BIT(&(Global_1956131->f_1), 3);
		if (!func_100(&(uParam0->f_149[2])))
		{
			uParam0->f_149[2] = func_255("CRAFT_COOK", joaat("INPUT_CONTEXT_X"), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			func_126(&(uParam0->f_149[2]), 1754796591, 0, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1956131->f_1), 2);
		if (func_100(&(uParam0->f_149[2])))
		{
			func_120(uParam0->f_149[2], 1, 1);
		}
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
	if (func_100(&(uParam0->f_149[6])))
	{
		func_120(uParam0->f_149[6], 1, 1);
	}
	if (func_54(134217728))
	{
		if (func_100(&(uParam0->f_149[6])))
		{
			func_130(&(uParam0->f_149[6]), 0, 1, 1);
		}
	}
	else if (func_100(&(uParam0->f_149[6])) && !func_136(&(uParam0->f_149[6]), 0))
	{
		func_130(&(uParam0->f_149[6]), 1, 1, 1);
	}
	if ((((func_54(1) || func_54(134217728)) || func_15(uParam0->f_140, 2)) && !func_54(4096)) && uParam0->f_146 != 2)
	{
		if (func_100(&(uParam0->f_149[2])))
		{
			func_130(&(uParam0->f_149[2]), 0, 1, 1);
		}
	}
	else if (func_100(&(uParam0->f_149[2])))
	{
		func_130(&(uParam0->f_149[2]), 1, 1, 1);
	}
	if ((func_15(iParam1, 16) && !func_54(536870912)) && uParam0->f_146 != 2)
	{
		if (!func_100(&(uParam0->f_149[1])))
		{
			uParam0->f_149[1] = func_255("LEAVE", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			if (func_15(iParam1, 524288) && uParam0->f_187)
			{
				func_256(&(uParam0->f_149[1]), 0, 1);
				func_257(&(uParam0->f_149[1]), 20, 1, 1);
				func_257(&(uParam0->f_149[1]), 13, 1, 1);
			}
			func_126(&(uParam0->f_149[1]), 1754796591, 0, 1);
		}
		if (func_15(iParam1, 524288) && uParam0->f_187)
		{
			if (!func_100(&(uParam0->f_149[8])))
			{
				uParam0->f_149[8] = func_255("LEAVE", joaat("INPUT_CONTEXT_B"), 2, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("MEDIUM_TIMED_EVENT"), 0);
				func_257(&(uParam0->f_149[8]), 19, 1, 1);
				func_257(&(uParam0->f_149[8]), 20, 1, 1);
				func_257(&(uParam0->f_149[8]), 13, 1, 1);
				func_258(uParam0->f_149[8], "INPUT_PCAMP_TEARDWN");
				func_126(&(uParam0->f_149[8]), 1754796591, 0, 1);
			}
		}
		else if (func_100(&(uParam0->f_149[8])))
		{
			func_120(uParam0->f_149[8], 1, 1);
		}
	}
	else
	{
		if (func_100(&(uParam0->f_149[1])))
		{
			func_120(uParam0->f_149[1], 1, 1);
		}
		if (func_100(&(uParam0->f_149[8])))
		{
			func_120(uParam0->f_149[8], 1, 1);
		}
	}
	if (func_54(1048576) || func_15(uParam0->f_140, 2))
	{
		if (func_100(&(uParam0->f_149[1])) && func_136(&(uParam0->f_149[1]), 0))
		{
			func_130(&(uParam0->f_149[1]), 0, 1, 1);
			if (func_15(iParam1, 524288) && uParam0->f_187)
			{
				func_256(&(uParam0->f_149[1]), 0, 1);
			}
		}
	}
	else if (func_100(&(uParam0->f_149[1])) && !func_136(&(uParam0->f_149[1]), 0))
	{
		func_130(&(uParam0->f_149[1]), 1, 1, 1);
		if (func_15(iParam1, 524288) && uParam0->f_187)
		{
			func_256(&(uParam0->f_149[1]), 0, 1);
		}
	}
	if (func_54(256))
	{
		if (func_100(&(uParam0->f_149[8])))
		{
			func_130(&(uParam0->f_149[8]), 0, 1, 1);
		}
	}
	else if (func_100(&(uParam0->f_149[8])))
	{
		func_130(&(uParam0->f_149[8]), 1, 1, 1);
	}
	uParam0->f_161 = func_64(HUD::_UIPROMPT_GET_GROUP_ACTIVE_PAGE(1754796591));
	iVar0 = 1;
	if (!func_54(536870912))
	{
		HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(uParam0->f_141, 3f, 1, iVar0, 1754796591, uParam0->f_161, 0);
	}
}

int func_139(var uParam0)
{
	int iVar0;

	if (func_54(16777216) || uParam0->f_189)
	{
		uParam0->f_189 = 0;
		func_53(16777216);
		uParam0->f_165 = -1;
		return 2;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_100(&(uParam0->f_149[iVar0])))
		{
			if (iVar0 == 1)
			{
				if (func_136(&(uParam0->f_149[iVar0]), 0))
				{
					if (func_259(&(uParam0->f_149[iVar0]), 1))
					{
						return iVar0;
					}
					else if (func_260())
					{
						if (!func_95(&(uParam0->f_166)))
						{
							func_29(&(uParam0->f_166));
						}
						if (func_261(&(uParam0->f_166), 0.5f))
						{
							return iVar0;
						}
					}
					else if (func_95(&(uParam0->f_166)))
					{
						func_262(&(uParam0->f_166));
					}
				}
			}
			else if (iVar0 == 8 || iVar0 == 6)
			{
				if (func_124(&(uParam0->f_149[iVar0]), 1))
				{
					return iVar0;
				}
				else if (iVar0 == 8)
				{
					if (func_263(&(uParam0->f_149[8]), 1))
					{
						if (!func_95(&(uParam0->f_49.f_86)))
						{
							func_29(&(uParam0->f_49.f_86));
						}
						else if (func_27(&(uParam0->f_49.f_86), 0.1f))
						{
							func_129(&(uParam0->f_149[8]), "CAMP_TEARDOWN", 1);
						}
					}
					else
					{
						if (func_95(&(uParam0->f_49.f_86)))
						{
							func_262(&(uParam0->f_49.f_86));
						}
						func_129(&(uParam0->f_149[8]), "LEAVE", 1);
					}
				}
			}
			else if (func_259(&(uParam0->f_149[iVar0]), 1))
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

void func_140(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_22(&(uParam0->f_140), 16);
	}
}

int func_141(var uParam0)
{
	if (func_264(uParam0) && !func_15(uParam0->f_140, 4))
	{
		return 1;
	}
	if (!func_72(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_146)
	{
		case 1:
			switch (uParam0->f_144)
			{
				case 8:
					func_75(-1890302844, 0.5f);
					break;
				case 7:
					func_75(36116464, 0.5f);
					break;
				case 6:
					if (func_75(420089068, 1f))
					{
						return 1;
					}
					break;
				default:
					func_265(uParam0);
					break;
			}
			break;
		case 6:
			func_266(uParam0);
			break;
	}
	return 0;
}

int func_142(var uParam0)
{
	if (func_264(uParam0) && !func_15(uParam0->f_140, 4))
	{
		return 1;
	}
	if (!func_72(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_146)
	{
		case 1:
			switch (uParam0->f_144)
			{
				case 8:
					func_75(-1890302844, 0.5f);
					break;
				case 7:
					func_75(36116464, 0.5f);
					break;
				case 6:
					func_75(1352801403, 1f);
					return 1;
				default:
					func_265(uParam0);
					break;
			}
			break;
		case 6:
			func_267(uParam0);
			break;
	}
	return 0;
}

int func_143(var uParam0)
{
	if (func_264(uParam0) && !func_15(uParam0->f_140, 4))
	{
		return 1;
	}
	if (!func_72(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_146)
	{
		case 1:
			switch (uParam0->f_144)
			{
				case 8:
					func_75(-1890302844, 0.5f);
					break;
				case 7:
					func_75(36116464, 0.5f);
					break;
				case 6:
					uParam0->f_145 = 1;
					if (func_268(Global_34, uParam0[1], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL3@MALE_A@KNEEL3_TRANS_COFFEE2", "KNEEL3_TRANS_COFFEE2", "WORLD_PLAYER_DYNAMIC_KNEEL_POST_FIRE_CRAFT"))
					{
						return 1;
					}
					break;
				default:
					func_265(uParam0);
					break;
			}
			break;
	}
	return 0;
}

int func_144(var uParam0)
{
	if (func_264(uParam0) && !func_15(uParam0->f_140, 4))
	{
		return 1;
	}
	if (!func_72(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_146)
	{
		case 1:
			switch (uParam0->f_144)
			{
				case 8:
					func_75(-1890302844, 0.5f);
					break;
				case 7:
					func_75(36116464, 0.5f);
					break;
				case 6:
					uParam0->f_145 = 0;
					if (func_268(Global_34, uParam0[0], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL4@MALE_A@KNEEL4_TRANS_COFFEE1", "KNEEL4_TRANS_COFFEE1", "WORLD_PLAYER_DYNAMIC_KNEEL_POST_FIRE_CRAFT"))
					{
						return 1;
					}
					break;
				default:
					func_265(uParam0);
					break;
			}
			break;
	}
	return 0;
}

bool func_145()
{
	return (Global_1939231->f_1 || &Global_1939231 == 1);
}

int func_146()
{
	if (Global_1939231->f_36 == 3)
	{
		return 1;
	}
	return 0;
}

int func_147(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	iVar0 = func_210(iParam0, joaat("default"));
	if (iVar0 != 0)
	{
		return func_269(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var1 = { func_188(iParam0, bParam4, 0) };
	Var6 = { func_270(iParam0, Var1, Var1.f_4, bParam4) };
	return func_271(iParam0, &Var6, &Var1, iParam1, iParam2, bParam3, bParam4);
}

int func_148(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	if (Global_1939231->f_7)
	{
		return 0;
	}
	if (((iParam0 != 1259508039 && iParam0 != -1838434463) && iParam0 != 2019377485) && bParam1)
	{
		iVar0 = func_272(iParam0);
		if (func_150(iParam0, 1147021565))
		{
			iVar0 |= 64;
		}
		if (!func_273(1, iVar0))
		{
			return 0;
		}
	}
	if (iParam0 == -1448210800 || iParam0 == -2035110427)
	{
		if (func_274())
		{
			return 0;
		}
	}
	if (!func_23(iParam0, 1))
	{
		HUD::_0xBFFF81E12A745A5F();
		return 0;
	}
	return 1;
}

int func_149(int iParam0)
{
	if (func_158(iParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x3D10D7179D7034AF(func_73(0), iParam0, func_275(0)))
	{
		return 0;
	}
	switch (iParam0)
	{
		case -1838434463: /* GXTEntry: "Camp" */
		case 2019377485: /* GXTEntry: "Camp" */
			if (!Global_1956172->f_2)
			{
				func_276(1, 1);
				TELEMETRY::_0x565EAA726B2CE3B7(0);
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 1807503187: /* GXTEntry: "Handheld Catalogue" */
			if (Global_1915180->f_21989.f_5 != 0)
			{
				func_161(func_277(), 10000, 0, 0, 0, 1);
				Global_1915180->f_21989.f_5 = 0;
			}
			break;
	}
	return 1;
}

int func_150(int iParam0, int iParam1)
{
	if (!func_90(iParam0, 0))
	{
		return func_279(func_278(iParam0), iParam1);
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

void func_151(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, int iParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, bool bParam28, int iParam29)
{
}

void func_152(int iParam0, var uParam1, var uParam2, bool bParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, bool bParam27, int iParam28)
{
}

void func_153(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)
{
}

int func_154(int iParam0)
{
	if (func_108() == 0 && func_281(func_280(iParam0), 1, 0) != 0)
	{
		func_161("NET_ALOOT_HELP_OPEN_FAIL", 10000, 0, 0, 0, 1);
		return 0;
	}
	return 1;
}

int func_155(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_282(iParam0, bParam1, 0, 0, -1082130432 /* Float: -1f */))
	{
		Global_1912977 = MISC::GET_GAME_TIMER() + 3000;
		return 1;
	}
	switch (func_283(iParam0, -949239683))
	{
		case 881567935:
			if (!bParam1)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 1245009814, 1, 0, -1082130432);
				return 1;
			}
			break;
		case 845883585:
			if (!bParam1)
			{
				if (!func_284())
				{
					if (func_285(&Global_34))
					{
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 616992297, 1, 0, -1082130432);
					}
					else
					{
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, -903856906, 1, 0, -1082130432);
					}
					return 1;
				}
				else
				{
					func_161("SI_ITEM_USE_POMADE_IS_ALREADY_APPLIED", 10000, 0, 0, 0, 1);
				}
			}
			break;
		case -1239610997:
			if (!bParam2)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 280850861, 1, 0, -1082130432);
			}
			else
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 1087288635, 1, 0, 0f);
				if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1912977 = MISC::GET_GAME_TIMER() + 3000;
			return 1;
		case 632545869:
			if (!bParam2)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, -268993254, 1, 0, -1082130432);
			}
			else
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, -1401979141, 1, 0, 0f);
				if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1912977 = MISC::GET_GAME_TIMER() + 3000;
			return 1;
		case -793205628:
			if (!bParam2)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 1834614641, 1, 0, -1082130432);
			}
			else
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 136592566, 1, 0, 0f);
				if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1912977 = MISC::GET_GAME_TIMER() + 3000;
			return 1;
		case 1451036371:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_34, 0) || PED::_0x5407B7288D0478B7(Global_34, 0) > 0)
				{
					func_286(iParam0);
				}
				else
				{
					func_287(iParam0);
				}
				return 1;
			}
			break;
		case -273840653:
			if (!bParam1)
			{
				func_288(iParam0, 1);
				return 1;
			}
			break;
		case 999632878:
			if (!bParam1)
			{
				func_289(iParam0, 1);
				return 1;
			}
			break;
		case 1130235258:
			if (!bParam1)
			{
				func_290(iParam0);
				return 1;
			}
			break;
		case -1915958659:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_34, 0) || PED::_0x5407B7288D0478B7(Global_34, 0) > 0)
				{
					func_286(iParam0);
				}
				else
				{
					func_291(iParam0);
				}
				return 1;
			}
			break;
		case 1859991422:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_34, 0) || PED::_0x5407B7288D0478B7(Global_34, 0) > 0)
				{
					func_286(iParam0);
				}
				else
				{
					func_292(iParam0);
				}
				return 1;
			}
			break;
		case 1891031775:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_34, 0) || PED::_0x5407B7288D0478B7(Global_34, 0) > 0)
				{
					func_286(iParam0);
				}
				else
				{
					func_293(iParam0);
				}
				return 1;
			}
			break;
		case -809056541:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_34, 0) || PED::_0x5407B7288D0478B7(Global_34, 0) > 0)
				{
					func_286(iParam0);
				}
				else
				{
					func_294(iParam0);
				}
				return 1;
			}
			break;
		case -1337515701:
			if (!bParam1)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, -1893721798, 1, 0, -1082130432);
				return 1;
			}
			break;
		case -262371497:
			if (!bParam1)
			{
				func_295(iParam0);
				return 1;
			}
			break;
		case 1443104131:
			if (!bParam1)
			{
				func_296(iParam0);
				return 1;
			}
			break;
		case -1919515848:
			if (!bParam1)
			{
				func_297(iParam0);
				return 1;
			}
			break;
		case 89124942:
			if (!bParam1)
			{
				func_286(iParam0);
				return 1;
			}
			break;
		case 238865292:
			if (!bParam1)
			{
				func_298(iParam0, bParam3);
				return 1;
			}
			break;
		case 1177617310:
			if (!bParam1)
			{
				func_299(iParam0, bParam3);
				return 1;
			}
			break;
	}
	return 0;
}

void func_156(struct<16> Param0, int iParam16)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1938417->f_161 >= 10)
	{
		return;
	}
	if (!func_300(iParam16, 2))
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Param0.f_10))) > 0 || func_301(&(Param0.f_10)))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(((*Global_1938417)[iVar0 /*16*/])->f_10)))
		{
			*((*Global_1938417)[iVar0 /*16*/]) = { Param0 };
			Global_1938417->f_161++;
			func_302(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_157()
{
	return Global_1893575 & 2 != 0;
}

int func_158(int iParam0)
{
	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	if (func_91(iParam0) == -1650247667)
	{
		return 1;
	}
	return 0;
}

int func_159(int iParam0)
{
	return func_303(iParam0);
}

int func_160(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_91(iParam0) == joaat("clothing"))
	{
		if (func_162(iParam0) == -999503751)
		{
		}
	}
	return 1;
}

var func_161(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_162(int iParam0)
{
	struct<2> Var0;

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_163()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::_0xF49F14462F0AE27C(iVar0);
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
		if (PED::_GET_RIDER_OF_MOUNT(iVar1, 0) != iVar2)
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

int func_164(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
	iVar1 = PLAYER::_0xF49F14462F0AE27C(iParam0);
	if (PED::IS_PED_ON_MOUNT(iVar0))
	{
		if (PED::_GET_RIDER_OF_MOUNT(iVar1, 0) == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

void func_165(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_304(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_305(Var0);
}

int func_166(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_306())
	{
		return 0;
	}
	if (!func_307(iParam0))
	{
		return 0;
	}
	if (func_308(iParam0))
	{
		iVar0 = 0;
		if (func_162(iParam0) == 81053684 || func_150(iParam0, -1348134986))
		{
			if (bParam1)
			{
				func_309(&iVar0, 2);
			}
		}
		return func_310(iParam0, iVar0);
	}
	return 0;
}

void func_167(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 10;
	iVar1 = &Global_1951141->f_1657.f_1[iVar0 /*3*/];
	if (iVar1 == iParam0)
	{
		PED::_0xCB9401F918CB0F75(Global_34, "PlayUnequipHatFidget", 1, 15);
		func_168(Global_34, -2065815962 /* GXTEntry: "No Hat" */, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
		func_169(iParam0, 0);
		return;
	}
	PED::_0xCB9401F918CB0F75(Global_34, "PlayEquipHatFidget", 1, 15);
	func_168(Global_34, iParam0, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
	if (func_311(32768))
	{
		PED::KNOCK_OFF_PED_PROP(Global_34, false, true, false, true);
		func_312();
		func_304(128);
		return;
	}
	if (iVar1 == &Global_1951141->f_81[iVar0 /*12*/])
	{
		func_169(iParam0, 1);
		return;
	}
	if (func_313(-2061583405, 0))
	{
		if (func_314(iVar1))
		{
			func_169(iVar1, 0);
		}
		else
		{
			func_315(iVar1, 1, 1, 0);
		}
		func_169(iParam0, 1);
		return;
	}
	if (func_314(iVar1))
	{
		func_169(iVar1, 0);
		func_169(iParam0, 1);
	}
	else if (func_314(iParam0))
	{
		if (iParam0 != func_316(0))
		{
			func_317(iParam0, iVar1);
			func_169(iParam0, 0);
			func_169(iVar1, 0);
		}
		else
		{
			PED::KNOCK_OFF_PED_PROP(Global_34, false, true, false, true);
			func_304(128);
			func_169(iParam0, 1);
		}
	}
}

int func_168(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	struct<5> Var0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_188(iParam1, 1, 0) };
		iParam3 = func_318(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_319(iParam1, iParam2, func_249(iParam3, 1), bParam4, 1))
	{
		return 0;
	}
	func_320(1, bParam5, bParam9, 1);
	if (bParam10)
	{
		if (func_321(iParam1, 0))
		{
			func_322(&(Global_1951141->f_1657.f_1[func_249(iParam3, 1) /*3*/]), 0);
		}
		else
		{
			func_322(iParam1, 1);
		}
	}
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam7 && iParam1 != &Global_1951141->f_81[func_249(iParam3, 1) /*12*/])
			{
				func_165(27, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_311(32768))
			{
				func_312();
				func_165(21, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		return 1;
	}
	iVar5 = func_323(iParam3);
	if (bParam8)
	{
		func_324(&iVar5, 4);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_165(19, 0, iVar5, 0, 0);
	}
	else
	{
		iVar5 |= 1;
		func_165(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_169(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_188(iParam0, 0, 0) };
	Var5 = { func_270(iParam0, Var0, Var0.f_4, 0) };
	if (func_325(iParam0, Var0, Var0.f_4, 0, 0, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_73(0), &Var5, iParam1);
}

void func_170(bool bParam0)
{
	if (bParam0)
	{
		Global_1939231 = 1;
	}
	else
	{
		Global_1939231 = 2;
	}
}

int func_171(int iParam0, int iParam1)
{
	int iVar0;

	iParam0 = func_326(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_173(iParam0);
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
		if (PED::_GET_RIDER_OF_MOUNT(iVar0, 0) == Global_34)
		{
			if (iParam1 == -727924611)
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (func_327(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_172(int iParam0)
{
	int iVar0;

	iParam0 = func_326(iParam0);
	if (iParam0 <= -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_173(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iParam0 == func_328())
		{
			return 1;
		}
		return 0;
	}
	if (iVar0 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_173(int iParam0)
{
	iParam0 = func_326(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1903007[iParam0 /*43*/];
}

int func_174(int iParam0, int iParam1, bool bParam2)
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

void func_175()
{
	if (func_329())
	{
		return;
	}
	if (func_330())
	{
		TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), 1807503187, -2005122350, 1, 0, -1082130432);
		Global_1915180->f_21989.f_1 = 1;
		Global_1051388->f_42 = 0;
		func_331();
	}
	else if (Global_1915180->f_21989.f_5 != 0)
	{
		func_161(func_277(), 10000, 0, 0, 0, 1);
		Global_1051388->f_3577 = 0;
		func_332(0);
		Global_1915180->f_21989.f_5 = 0;
	}
}

int func_176(int iParam0, int iParam1)
{
	int iVar0;

	if ((!func_333() || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || !NETWORK::NETWORK_IS_SESSION_ACTIVE())
	{
		return 0;
	}
	if (!func_334(16))
	{
		return 0;
	}
	if (func_335())
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-75008140))
		{
			return 0;
		}
	}
	if (!func_336())
	{
		return 0;
	}
	if (func_337(16))
	{
		return 0;
	}
	iVar0 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (iParam1 == 1 && (!GANG::_0xD6F6ACF4392187FB(iVar0) || !GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID())))
	{
		return 0;
	}
	if (iParam0 == 1 && func_99(Global_1131092->f_8, 1))
	{
		return 0;
	}
	if (func_179())
	{
		return 0;
	}
	return 1;
}

int func_177(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_338();
	}
	if (!func_339(bParam1, bParam1, !bParam1))
	{
		return 0;
	}
	func_340(iParam0);
	Global_1896726->f_386 = 1;
	Global_1896726->f_387 = bParam1;
	return 1;
}

bool func_178(int iParam0)
{
	return func_99(Global_1131092->f_8, iParam0);
}

int func_179()
{
	int iVar0;

	iVar0 = func_341(PLAYER::PLAYER_ID());
	if (iVar0 != -1)
	{
		if (((*Global_1125276)[iVar0 /*27*/])->f_18.f_1 != 0 && func_99(((*Global_1125276)[iVar0 /*27*/])->f_18, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_180()
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_87(0) };
	if (func_88(Var0))
	{
		if (Var0 == 6)
		{
			iVar2 = func_342(PLAYER::PLAYER_ID(), 0);
			if (iVar2 != -1)
			{
				if (func_343(iVar2) == -785841056)
				{
					func_161("GC_SELECT_FAIL_POSSE_VERSUS", 10000, 0, 0, 0, 1);
				}
				else if (iVar2 == 1)
				{
					func_161("GC_SELECT_FAIL_CHALLENGE", 10000, 0, 0, 0, 1);
				}
				else
				{
					func_161("GC_SELECT_FAIL_EVENT", 10000, 0, 0, 0, 1);
				}
			}
		}
		else
		{
			func_161("GC_SELECT_GENERAL_FAIL", 10000, 0, 0, 0, 1);
		}
	}
}

void func_181(int iParam0)
{
	struct<19> Var0;

	Var0.f_12 = -1;
	Var0.f_12.f_1 = -1;
	Var0.f_14 = 255;
	Var0.f_15 = 255;
	Var0.f_6 = iParam0;
	Var0.f_4 = 56;
	func_345(Var0, func_344(0, 8), 0, 0);
}

void func_182(bool bParam0)
{
	if ((func_108() != -1 || !bParam0) || func_113(Global_34))
	{
		func_346();
		return;
	}
}

bool func_183(int iParam0)
{
	return func_91(iParam0) == 2085633299;
}

int func_184(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_91(iParam0);
	if (iVar0 == joaat("weapon") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("ammo") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_150(iParam0, 1399091007))
	{
		func_347(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

void func_185(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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
	char* sVar19;
	char cVar20[128];

	if (!func_90(iParam0, 0))
	{
		return;
	}
	else if (iParam0 == 1807503187)
	{
		return;
	}
	else if (iParam1 == 0)
	{
		return;
	}
	if (!func_348() || bParam6)
	{
		func_349(iParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_350(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		StringCopy(&cVar2, func_350(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_351(iParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_91(iParam0);
	iVar10 = 0;
	iVar11 = joaat("inventory");
	if (((((((iVar6 == joaat("ammo") && iParam0 != 424030678) && iParam0 != -1188697038) && iParam0 != 446901936) && iParam0 != -228768324) && iParam0 != 34372170) && iParam0 != 963726415) && iParam0 != 1701457723)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	iVar12 = func_162(iParam0);
	if (((((((iVar6 == -1013984273 || iVar6 == 658570475) || iVar12 == -1674363638) || iVar12 == 252325943) || iVar12 == 829857647) || iVar12 == -636562458) || iVar12 == 1341188928) || iVar12 == 1216664798)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_352(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
		iVar13 = 619977481;
		sVar14 = "Transaction_Negative";
		iVar16 = 1;
	}
	if (func_150(iParam0, 474910316))
	{
		sVar17 = func_353(iParam0);
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
			iVar13 = -856358433;
		}
		else
		{
			iVar13 = -1905433004;
		}
	}
	if (func_150(iParam0, 1816585950))
	{
		iVar13 = 76603059;
	}
	iVar18 = func_354(iParam0);
	if ((func_355(iVar12) && func_150(iParam0, -306684263)) && iVar18 != 0)
	{
		iVar18 = func_356(iParam0);
	}
	sVar19 = func_357(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, iVar18), iVar1), iVar13);
	if (((((iParam1 == 1 || func_150(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar19 = MISC::_CREATE_VAR_STRING(0, iVar18);
	}
	if ((((((iVar12 == -1839668642 && iParam0 != -1713496139) && iParam0 != 1326838792) && iParam0 != -230310728) || ((iVar12 == 231148558 && iParam0 != 1733464892) && iParam0 != -598283164)) || (iVar12 == 252325943 && iParam0 != -860557048)) || (iVar12 == -636562458 && iParam0 != -2087489409))
	{
		sVar19 = MISC::_CREATE_VAR_STRING(0, func_358(iParam0, -442898163));
	}
	if (iVar12 == -126813555 || iVar12 == 1946043663)
	{
		if (!func_150(iParam0, 920823793))
		{
			StringCopy(&cVar20, "", 128);
			if (func_359(iParam0, &cVar20))
			{
				sVar19 = func_361(func_360(cVar20), joaat("COLOR_PURE_WHITE"));
			}
		}
	}
	func_362(sVar19, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar16, iVar13, sVar15, sVar14, 0, 1);
}

struct<2> func_186(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_90(iParam0, 0))
	{
		return Var0;
	}
	if (func_150(iParam0, -305066475))
	{
		if (func_108() == -1)
		{
			if (func_150(iParam0, -537818634))
			{
				return func_363(189951448);
			}
			else
			{
				return func_363(1176172851);
			}
		}
	}
	else if (func_150(iParam0, -537818634))
	{
		return func_363(-963660207);
	}
	if (func_150(iParam0, 2084895747))
	{
		return func_363(1694039471);
	}
	return Var2;
}

int func_187(int iParam0, int iParam1, bool bParam2, int iParam3)
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
	Var0 = { func_364(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam2)
	{
		func_366(&Var0, func_365(0));
	}
	if (!func_367(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_203(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_271(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_205(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return 1;
}

struct<5> func_188(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_368(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_91(iParam0);
	switch (iVar5)
	{
		case joaat("clothing"):
			Var0 = { func_270(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			break;
		case joaat("weapon"):
			Var0 = { func_365(bParam1) };
			if (bParam2 && func_369(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_370(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_370(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_371(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
		case joaat("coach"):
		case joaat("horse"):
			Var0.f_4 = 1782082944;
			break;
		case -1650247667:
			Var0.f_4 = -1591664384;
			Var0 = { func_372(bParam1) };
			switch (func_162(iParam0))
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
		case -2130996531:
		case joaat("dog"):
			if (func_373(iParam0, -1823706425))
			{
				Var0 = { func_270(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_373(iParam0, -1483207246))
			{
				Var0 = { func_270(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1911121386))
			{
				Var0 = { func_270(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_373(iParam0, -1653629781))
			{
				Var0 = { func_270(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_374(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_373(iParam0, -1653629781))
			{
				Var0 = { func_270(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1384535894);
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

void func_189(bool bParam0, bool bParam1, int iParam2)
{
	Global_1939231->f_4 = bParam0;
	Global_1939231->f_34 = iParam2;
	if (bParam1 || (func_375() && iParam2 == 0))
	{
		func_376(1);
		func_377(1);
	}
}

int func_190(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
	func_53(1024);
	uParam0->f_49.f_31 = 1;
	iVar0 = PED::_0xC22AA08A8ADB87D4(Global_34);
	if (func_54(268435456) && uParam0->f_138 < 9)
	{
		func_378(&(uParam0->f_49));
		func_379(&(uParam0->f_49));
		if ((MISC::GET_GAME_TIMER() - uParam0->f_165) > 1000 && func_380(&(uParam0->f_49)))
		{
			func_381();
			if (func_72(uParam0))
			{
				if (iVar0 == -571916863 || iVar0 == 825619760)
				{
					func_75(-1890302844, 0.5f);
					return 0;
				}
				else if (iVar0 == -597629206 || iVar0 == 1316803372)
				{
					func_75(36116464, 0.5f);
					return 0;
				}
			}
			else
			{
				return 0;
			}
			if (Global_1913166->f_1577 != 0)
			{
				uParam0->f_49.f_73 = Global_1913166->f_1577;
			}
			uParam0->f_49.f_74 = -214678071;
			uParam0->f_165 = -1;
			CAM::DO_SCREEN_FADE_IN(500);
			if (iVar0 == -518407211 || iVar0 == 1662215698)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("weapon_melee_knife"), true, 0, false, false);
				uParam0->f_190 = 1;
			}
			func_46(16384);
			func_53(65536);
			Global_1956172->f_2 = 0;
			if (func_78(0) && !func_79())
			{
				func_382(uParam0->f_49.f_73, uParam0->f_49.f_74, 1, 0, 0);
			}
			STATS::_0x378D3B1B11D9385B(uParam0->f_49.f_73);
			uParam0->f_176 = 3;
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_147))
			{
				OBJECT::DELETE_OBJECT(&(uParam0->f_147));
			}
			uParam0->f_147 = OBJECT::CREATE_OBJECT(func_383(uParam0->f_49.f_73), Global_35, false, false, false, false, true);
			if (PED::_0x3BBDD6143FF16F98(Global_34, uParam0->f_147, "p_meatChunks01x_PH_L_HAND", 0, 0, 1))
			{
			}
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_147, false);
			OBJECT::_SET_OBJECT_BURN_LEVEL(uParam0->f_147, 0f, 1);
			func_103(&(uParam0->f_49));
			func_44(&(uParam0->f_49), 2);
			uParam0->f_149[3] = func_255("CRAFT_FASTER", joaat("INPUT_GAME_MENU_ACCEPT"), 2, 0, 0, 6, 7000, 10000, 25, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			func_384(uParam0, 3, 0, 0);
			func_130(&(uParam0->f_149[3]), 0, 1, 1);
			func_126(&(uParam0->f_149[3]), -1067771379, 0, 1);
			uParam0->f_49.f_58 = 0;
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_49.f_35);
			func_16(&(uParam0->f_140), 16);
			func_60(uParam0, 9);
		}
		return 0;
	}
	if (uParam0->f_138 != 0)
	{
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
	}
	if (uParam0->f_138 > 0)
	{
		HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::_CREATE_VAR_STRING(0, uParam0->f_49.f_73), 1, 0, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 442509369))
	{
		uParam0->f_179++;
		if (uParam0->f_49.f_73 == -1199896558)
		{
			if (func_385())
			{
				func_386(1);
			}
			else if (func_387())
			{
				func_386(0);
			}
		}
		func_388(uParam0->f_49.f_73, BUILTIN::TO_FLOAT(uParam0->f_176), uParam0->f_179 >= uParam0->f_176);
	}
	if (func_78(0) && !func_79())
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -936525963))
		{
			uParam0->f_182 = 1;
			func_80(uParam0->f_49.f_73, 1, 1, 1, 0);
		}
	}
	if (uParam0->f_138 >= 10)
	{
		if (func_100(&(uParam0->f_149[5])) && func_259(&(uParam0->f_149[5]), 1))
		{
			uParam0->f_178 = 3;
		}
	}
	if (uParam0->f_49.f_22 != -1 && func_389(&(uParam0->f_49)) != 12)
	{
		if (func_390(uParam0->f_49.f_22))
		{
		}
		else
		{
			uParam0->f_49.f_22 = -1;
		}
	}
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Global_34, false);
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_34, 0, 1);
	switch (uParam0->f_138)
	{
		case 0:
			if (func_72(uParam0))
			{
				if (iVar0 == -571916863 || iVar0 == 825619760)
				{
					func_75(-1890302844, 0.5f);
					return 0;
				}
				else if (iVar0 == -597629206 || iVar0 == 1316803372)
				{
					func_75(36116464, 0.5f);
					return 0;
				}
			}
			if (((func_72(uParam0) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -1208591336)) && func_391(iVar0)) || func_389(&(uParam0->f_49)) == 12)
			{
				func_392(&(uParam0->f_49), 1);
				if (func_389(&(uParam0->f_49)) == 11)
				{
					if (func_234(uParam0->f_49.f_73))
					{
						func_393(uParam0);
					}
					else if (uParam0->f_49.f_76)
					{
						uParam0->f_176 = 1;
						func_46(131072);
						if (func_78(0) && !func_79())
						{
							func_382(uParam0->f_49.f_73, uParam0->f_49.f_74, 1, func_394(), 0);
						}
						func_44(&(uParam0->f_49), 0);
						func_103(&(uParam0->f_49));
						func_120(uParam0->f_149[3], 1, 1);
						iVar1 = 6000;
						iVar2 = 10000;
						if (func_15(uParam0->f_139, 16384))
						{
							iVar1 = BUILTIN::ROUND((IntToFloat(iVar1) * 0.8f));
							iVar2 = BUILTIN::ROUND((IntToFloat(iVar2) * 0.8f));
						}
						uParam0->f_149[3] = func_255("CRAFT_FASTER", joaat("INPUT_GAME_MENU_ACCEPT"), 2, 0, 0, 6, iVar1, iVar2, 25, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
						func_384(uParam0, 3, 0, 0);
						func_130(&(uParam0->f_149[3]), 0, 1, 1);
						func_126(&(uParam0->f_149[3]), -1067771379, 0, 1);
						func_395();
						uParam0->f_164 = MISC::GET_GAME_TIMER();
						func_60(uParam0, 1);
					}
					else
					{
						func_22(&(uParam0->f_140), 4);
						func_46(131072);
					}
				}
				else if (func_389(&(uParam0->f_49)) == 0)
				{
					func_68(uParam0, 1);
					func_53(131072);
					func_53(16384);
					func_46(262144);
					func_46(65536);
					if (func_54(8192))
					{
						func_44(&(uParam0->f_49), 0);
						uParam0->f_164 = MISC::GET_GAME_TIMER();
						func_103(&(uParam0->f_49));
						uParam0->f_181 = 0;
						return 1;
					}
				}
				else if (func_389(&(uParam0->f_49)) == 1 || func_112(Global_34, 0))
				{
					func_22(&(uParam0->f_140), 4);
					uParam0->f_49.f_31 = 0;
					func_140(uParam0, uParam0->f_49.f_23);
					func_68(uParam0, 1);
					func_103(&(uParam0->f_49));
					func_53(131072);
					func_53(16384);
					func_46(262144);
					func_46(65536);
					uParam0->f_146 = 6;
					uParam0->f_164 = MISC::GET_GAME_TIMER();
					uParam0->f_181 = 0;
					return 1;
				}
			}
			break;
		case 1:
			if (func_72(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 250)
			{
				if (iVar0 == -518407211 || iVar0 == 1662215698)
				{
					if (func_75(653141085, 1086324736 /* Float: 6f */))
					{
					}
				}
				else if (iVar0 == -1433449364 || iVar0 == 2058555960)
				{
					func_75(1520707380, 1086324736 /* Float: 6f */);
					func_60(uParam0, 2);
				}
				else
				{
					func_75(-1161086932, 1086324736 /* Float: 6f */);
					func_60(uParam0, 2);
				}
				uParam0->f_164 = MISC::GET_GAME_TIMER();
			}
			break;
		case 2:
			if (!func_136(&(uParam0->f_149[3]), 0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 500)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 1070143458) || func_72(uParam0))
				{
					func_130(&(uParam0->f_149[3]), 1, 1, 1);
				}
			}
			if (func_124(&(uParam0->f_149[3]), 1))
			{
				if (PAD::_0x1252C029FC8EBB4D())
				{
					PAD::_0x709BA8C08C5C008D();
				}
				func_384(uParam0, 3, 1, 0);
				func_120(uParam0->f_149[3], 1, 1);
				if (((func_91(uParam0->f_49.f_73) == 2085633299 && !func_150(uParam0->f_49.f_73, -1242251796)) && !func_150(uParam0->f_49.f_73, 1919582297)) && !func_150(uParam0->f_49.f_73, -651046900))
				{
					uParam0->f_149[5] = func_255("USE_ITEM", joaat("INPUT_GAME_MENU_TAB_RIGHT_SECONDARY"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
					func_126(&(uParam0->f_149[5]), -1067771379, 0, 1);
					func_257(&(uParam0->f_149[5]), 10, 1, 1);
					uParam0->f_149[4] = func_255("STOW_ITEM", joaat("INPUT_GAME_MENU_OPTION"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
					func_257(&(uParam0->f_149[4]), 10, 1, 1);
					func_126(&(uParam0->f_149[4]), -1067771379, 0, 1);
					if (func_283(uParam0->f_49.f_73, -1636519629) == -701492487)
					{
						func_129(&(uParam0->f_149[5]), "DRINK", 1);
						func_130(&(uParam0->f_149[4]), 0, 1, 1);
					}
					if (!func_396(2))
					{
						func_130(&(uParam0->f_149[5]), 0, 1, 1);
					}
					ATTRIBUTE::_0x7E2C766ADB2C5F1A(uParam0->f_49.f_73, 1);
				}
				if (!func_78(0) || func_79())
				{
					uParam0->f_49.f_22 = func_109(uParam0->f_49.f_73, uParam0->f_49.f_74, 1);
					if (func_100(&(uParam0->f_149[5])))
					{
						func_130(&(uParam0->f_149[5]), 0, 1, 1);
					}
				}
				uParam0->f_179 = 0;
				func_29(&(uParam0->f_169));
				uParam0->f_164 = MISC::GET_GAME_TIMER();
				uParam0->f_182 = 0;
				func_60(uParam0, 3);
			}
			else if (func_136(&(uParam0->f_149[3]), 0))
			{
				func_397(uParam0, iVar0);
			}
			break;
		case 3:
			if (func_72(uParam0))
			{
				if (func_261(&(uParam0->f_169), 0.1f))
				{
					if (iVar0 == -87088667 || iVar0 == -8536912)
					{
						uParam0->f_164 = MISC::GET_GAME_TIMER();
						func_75(-266297705, 1f);
						func_29(&(uParam0->f_169));
					}
					else
					{
						uParam0->f_164 = MISC::GET_GAME_TIMER();
						func_75(1581850152, 1086324736 /* Float: 6f */);
					}
				}
			}
			func_398(uParam0);
			if (func_100(&(uParam0->f_149[5])))
			{
				if (func_136(&(uParam0->f_149[5]), 0) && (func_259(&(uParam0->f_149[5]), 1) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_CRAFTING_EAT"))))
				{
					if (!func_78(0) || func_79())
					{
						func_76(uParam0->f_49.f_73, 1, 1, -142743235);
					}
					ATTRIBUTE::_0xD962F8579D702DB5();
					func_80(uParam0->f_49.f_73, 1, 1, 0, 0);
					func_120(uParam0->f_149[5], 1, 1);
					func_120(uParam0->f_149[4], 1, 1);
					func_399(uParam0, 1);
					func_53(131072);
					func_44(&(uParam0->f_49), 15);
					func_60(uParam0, 5);
					return 0;
				}
			}
			if ((!func_100(&(uParam0->f_149[5])) || (func_136(&(uParam0->f_149[4]), 0) && (func_400(&(uParam0->f_149[4]), 1) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_GAME_MENU_OPTION"))))) || func_112(Global_34, 0))
			{
				func_120(uParam0->f_149[5], 1, 1);
				func_120(uParam0->f_149[4], 1, 1);
				ATTRIBUTE::_0xD962F8579D702DB5();
				uParam0->f_164 = MISC::GET_GAME_TIMER();
				if (uParam0->f_181)
				{
					uParam0->f_181 = 0;
					func_104(&(uParam0->f_49), 0);
					AUDIO::PLAY_SOUND_FRONTEND("Exit", "SSCRFT_Sounds", true, 0);
					func_44(&(uParam0->f_49), 1);
				}
				else
				{
					func_44(&(uParam0->f_49), 15);
				}
				func_399(uParam0, 1);
				func_60(uParam0, 4);
				return 0;
			}
			break;
		case 4:
			if (func_72(uParam0) && ((MISC::GET_GAME_TIMER() - uParam0->f_164) > 100 || func_95(&(uParam0->f_169))))
			{
				if (iVar0 == -87088667 || iVar0 == -8536912)
				{
					func_75(-1530401853, 1086324736 /* Float: 6f */);
				}
				else if (iVar0 == 512684539 || iVar0 == 970934364)
				{
					func_75(-1463467224, 1086324736 /* Float: 6f */);
					func_75(1111052667, 1086324736 /* Float: 6f */);
				}
				else
				{
					func_75(1111052667, 1086324736 /* Float: 6f */);
				}
				uParam0->f_164 = MISC::GET_GAME_TIMER();
				func_60(uParam0, 7);
			}
			break;
		case 5:
			func_401();
			if (func_72(uParam0) && ((MISC::GET_GAME_TIMER() - uParam0->f_164) > 100 || func_95(&(uParam0->f_169))))
			{
				if (iVar0 == -87088667 || iVar0 == -8536912)
				{
					func_75(-1878840211, 1086324736 /* Float: 6f */);
				}
				else if (iVar0 == 512684539 || iVar0 == 970934364)
				{
					func_75(-1510453203, 1086324736 /* Float: 6f */);
					func_75(-1783213919, 1086324736 /* Float: 6f */);
				}
				else
				{
					func_75(-1783213919, 1086324736 /* Float: 6f */);
				}
				uParam0->f_164 = MISC::GET_GAME_TIMER();
				func_60(uParam0, 6);
			}
			break;
		case 9:
			if (func_72(uParam0))
			{
				if (iVar0 == -1433449364 || iVar0 == 2058555960)
				{
					func_75(1335077954, 1086324736 /* Float: 6f */);
					return 0;
				}
				uParam0->f_178 = 0;
				func_53(268435456);
				uParam0->f_164 = MISC::GET_GAME_TIMER();
				if (iVar0 == -518407211 || iVar0 == 1662215698)
				{
					func_75(-9448781, 1086324736 /* Float: 6f */);
					func_46(16384);
					func_60(uParam0, 10);
				}
				else
				{
					func_75(2101630952, 1086324736 /* Float: 6f */);
					func_46(16384);
					func_60(uParam0, 10);
				}
			}
			break;
		case 10:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -560091334))
			{
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_147, true);
			}
			if (!func_136(&(uParam0->f_149[3]), 0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 500)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 1070143458))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("cook_meat_sizzle_loop", uParam0->f_147, "Player_Campfire_Sounds", 0, 0, 0);
					AUDIO::_0x9821B68CD3E05F2B("distanceToFlame", 1f, "cook_meat_sizzle_loop", "Player_Campfire_Sounds");
					func_130(&(uParam0->f_149[3]), 1, 1, 1);
					func_402(&(uParam0->f_149[3]), 1);
				}
			}
			if (func_124(&(uParam0->f_149[3]), 1))
			{
				uParam0->f_175 = -1;
				OBJECT::_SET_OBJECT_BURN_LEVEL(uParam0->f_147, 1f, 1);
				if (PAD::_0x1252C029FC8EBB4D())
				{
					PAD::_0x709BA8C08C5C008D();
				}
				uParam0->f_149[4] = func_255("STOW_ITEM", joaat("INPUT_GAME_MENU_OPTION"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
				uParam0->f_149[5] = func_255("EAT_MEAT", joaat("INPUT_CRAFTING_EAT"), 1, 0, 0, 0, 570, 4000, 1, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
				func_257(&(uParam0->f_149[5]), 10, 1, 1);
				func_257(&(uParam0->f_149[4]), 10, 1, 1);
				func_126(&(uParam0->f_149[4]), -1067771379, 0, 1);
				func_126(&(uParam0->f_149[5]), -1067771379, 0, 1);
				if (func_403(uParam0->f_49.f_73, 1, 0) || func_63(64))
				{
					func_130(&(uParam0->f_149[4]), 0, 1, 1);
					func_48(64);
				}
				else if (!func_396(2))
				{
					func_130(&(uParam0->f_149[5]), 0, 1, 1);
				}
				func_120(uParam0->f_149[3], 1, 1);
				func_29(&(uParam0->f_169));
				func_53(16384);
				uParam0->f_179 = 0;
				if (!func_78(0) || func_79())
				{
					uParam0->f_49.f_22 = func_109(uParam0->f_49.f_73, uParam0->f_49.f_74, 1);
					func_130(&(uParam0->f_149[5]), 0, 1, 1);
				}
				ATTRIBUTE::_0x7E2C766ADB2C5F1A(uParam0->f_49.f_73, 1);
				AUDIO::_0x0F2A2175734926D8("cook_meat_sizzle_loop", "Player_Campfire_Sounds");
				uParam0->f_182 = 0;
				func_60(uParam0, 11);
			}
			else
			{
				func_397(uParam0, iVar0);
				if (uParam0->f_175 == -1)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 1070143458))
					{
						uParam0->f_175 = MISC::GET_GAME_TIMER();
					}
				}
				else
				{
					fVar3 = func_404(&(uParam0->f_149[3]), 1);
					fVar3 = func_405(fVar3, 0f, 1f);
					OBJECT::_SET_OBJECT_BURN_LEVEL(uParam0->f_147, (1f * fVar3), 1);
				}
			}
			break;
		case 11:
			if (func_72(uParam0))
			{
				if (func_261(&(uParam0->f_169), 0.1f))
				{
					uParam0->f_164 = MISC::GET_GAME_TIMER();
					if (iVar0 == -283636008 || iVar0 == -341412437)
					{
						func_75(-1065570550, 2f);
					}
					else
					{
						func_75(-1295988014, 2f);
					}
				}
			}
			func_398(uParam0);
			if (func_100(&(uParam0->f_149[5])))
			{
				if (func_136(&(uParam0->f_149[5]), 0) && (func_259(&(uParam0->f_149[5]), 1) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_CRAFTING_EAT"))))
				{
					uParam0->f_178 = (uParam0->f_178 - 1);
					if (uParam0->f_177)
					{
						uParam0->f_177 = 0;
					}
					ATTRIBUTE::_0xD962F8579D702DB5();
					func_80(uParam0->f_49.f_73, 1, 1, 0, 0);
					func_120(uParam0->f_149[5], 1, 1);
					func_120(uParam0->f_149[4], 1, 1);
					func_399(uParam0, 1);
					func_46(32768);
					if (!func_78(0) || func_79())
					{
						func_76(uParam0->f_49.f_73, 1, 1, -142743235);
					}
					uParam0->f_164 = MISC::GET_GAME_TIMER();
					func_60(uParam0, 13);
					return 0;
				}
			}
			if (func_100(&(uParam0->f_149[4])))
			{
				if ((((func_136(&(uParam0->f_149[4]), 0) && (func_259(&(uParam0->f_149[4]), 1) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_GAME_MENU_OPTION")))) || uParam0->f_180) || func_112(Global_34, 0)) || TASK::_0x916B8E075ABC8B4E(Global_34, 1))
				{
					func_47(16);
					uParam0->f_180 = 0;
					ATTRIBUTE::_0xD962F8579D702DB5();
					func_120(uParam0->f_149[4], 1, 1);
					func_120(uParam0->f_149[5], 1, 1);
					func_399(uParam0, 1);
					func_60(uParam0, 16);
					return 0;
				}
			}
			break;
		case 16:
			if (func_72(uParam0) && ((MISC::GET_GAME_TIMER() - uParam0->f_164) > 250 || func_95(&(uParam0->f_169))))
			{
				if (iVar0 == -283636008 || iVar0 == -341412437)
				{
					func_75(528569882, 1f);
				}
				else if (iVar0 == 1412614124 || iVar0 == 2134236454)
				{
					func_75(288708544, 1f);
				}
				else
				{
					func_75(-915834315, 1f);
				}
				uParam0->f_164 = MISC::GET_GAME_TIMER();
				func_60(uParam0, 15);
			}
			break;
		case 13:
			func_401();
			if (func_72(uParam0) && ((MISC::GET_GAME_TIMER() - uParam0->f_164) > 250 || func_95(&(uParam0->f_169))))
			{
				if (iVar0 == -283636008 || iVar0 == -341412437)
				{
					func_75(709478876, 1f);
				}
				else if (iVar0 == 1412614124 || iVar0 == 2134236454)
				{
					func_75(606164441, 1f);
				}
				else
				{
					func_75(-414126081, 2f);
				}
				uParam0->f_164 = MISC::GET_GAME_TIMER();
				func_60(uParam0, 14);
			}
			break;
		case 6:
		case 7:
		case 14:
		case 15:
			if (uParam0->f_138 == 14 || uParam0->f_138 == 6)
			{
				func_401();
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -243011316) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -1208591336))
			{
				func_406(uParam0, 1);
				func_53(32768);
				func_48(16);
				if (uParam0->f_138 == 14 || uParam0->f_138 == 15)
				{
					func_46(65536);
					func_60(uParam0, 12);
				}
				else
				{
					func_60(uParam0, 8);
				}
			}
			else if ((MISC::GET_GAME_TIMER() - uParam0->f_164) > 750)
			{
				if (!PED::_0xC488B8C0E52560D8(Global_34))
				{
					if (iVar0 == -518407211 || iVar0 == 1662215698)
					{
						func_46(65536);
						func_60(uParam0, 12);
					}
					else if (iVar0 == -1433449364 || iVar0 == 2058555960)
					{
						func_60(uParam0, 8);
					}
					else if (uParam0->f_138 == 14)
					{
						func_60(uParam0, 13);
					}
					else if (uParam0->f_138 == 15)
					{
						func_60(uParam0, 16);
					}
					else if (uParam0->f_138 == 7)
					{
						func_60(uParam0, 4);
					}
					else if (uParam0->f_138 == 6)
					{
						func_60(uParam0, 5);
					}
				}
			}
			break;
		case 8:
		case 12:
			func_46(1024);
			if (func_63(128))
			{
				if (func_136(&(uParam0->f_149[7]), 0))
				{
					func_130(&(uParam0->f_149[7]), 0, 1, 1);
				}
				if (func_136(&(uParam0->f_149[1]), 0))
				{
					func_130(&(uParam0->f_149[1]), 0, 1, 1);
				}
			}
			else
			{
				func_406(uParam0, 1);
			}
			if (func_136(&(uParam0->f_149[3]), 0))
			{
				if (func_112(Global_34, 0))
				{
					func_130(&(uParam0->f_149[3]), 0, 1, 1);
				}
			}
			if (func_259(&(uParam0->f_149[3]), 1))
			{
				func_53(65536);
				func_407(&(uParam0->f_149));
				if (uParam0->f_138 == 12)
				{
					func_393(uParam0);
				}
				else
				{
					func_408(uParam0);
				}
			}
			else if (func_259(&(uParam0->f_149[7]), 1))
			{
				func_53(65536);
				func_407(&(uParam0->f_149));
				func_60(uParam0, 0);
				func_44(&(uParam0->f_49), 15);
				uParam0->f_181 = 0;
			}
			else if (func_124(&(uParam0->f_149[1]), 1))
			{
				func_53(65536);
				func_407(&(uParam0->f_149));
				func_60(uParam0, 0);
				uParam0->f_181 = 0;
				func_104(&(uParam0->f_49), 0);
				AUDIO::PLAY_SOUND_FRONTEND("Exit", "SSCRFT_Sounds", true, 0);
				func_44(&(uParam0->f_49), 1);
				func_60(uParam0, 0);
				return 0;
			}
			else if (func_263(&(uParam0->f_149[1]), 1))
			{
				if (!func_95(&(uParam0->f_49.f_86)))
				{
					func_29(&(uParam0->f_49.f_86));
				}
				else if (func_27(&(uParam0->f_49.f_86), 0.1f))
				{
					func_129(&(uParam0->f_149[1]), "CAMP_REC_QUIT", 1);
				}
			}
			else
			{
				if (func_95(&(uParam0->f_49.f_86)))
				{
					func_262(&(uParam0->f_49.f_86));
				}
				if (func_100(&(uParam0->f_149[1])))
				{
					func_129(&(uParam0->f_149[1]), "CAMP_REC_BACK", 1);
				}
			}
			break;
	}
	return 0;
}

struct<2> func_191(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_192(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

int func_193(int iParam0, bool bParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case -1639263599: /* GXTEntry: "Throwing Knife" */
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case -1860710511:
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 1507636870:
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 1828724907:
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 1222378998: /* GXTEntry: "Improved Throwing Knife" */
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 2074469742: /* GXTEntry: "Poison Throwing Knife" */
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 1270940175:
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case -1857826511:
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
		case 34372170: /* GXTEntry: "Bolas" */
			iVar0 = 1151374672; /* GXTEntry: "Bolas" */
			break;
		case 963726415:
			iVar0 = -577893115;
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
	if (func_90(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_409(iVar0) || func_410(iVar0))
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

int func_194(int iParam0, bool bParam1)
{
	if (!func_90(iParam0, 0))
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

void func_195(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_13 != -1)
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

int func_196(int iParam0, bool bParam1)
{
	var uVar0;
	var uVar5;
	var uVar9;
	struct<5> Var10;
	var uVar15;

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	if (!func_411(iParam0, 856287005, &uVar9, &uVar5, &uVar0, 1, 0))
	{
		return 0;
	}
	Var10 = { func_412() };
	Var10.f_4 = uVar9;
	if (func_413(iParam0, &uVar15, &Var10, 1, 752097756, 0))
	{
		if (bParam1)
		{
			if (!func_414(iParam0, 1))
			{
			}
		}
		if (func_415(iParam0))
		{
			func_196(func_416(iParam0), 1);
		}
		func_417();
		return 1;
	}
	return 0;
}

int func_197(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	if (!func_418(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_419(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_420(iParam0, bParam2);
	iVar2 = 0;
	if (func_91(iParam0) == joaat("clothing"))
	{
		if (!func_150(iParam0, 866047851) && !func_150(iParam0, -1979000645))
		{
			bVar3 = true;
		}
	}
	if (func_351(iParam0, 8388608) && !func_421(27))
	{
		func_422(27);
	}
	func_423(iParam0);
	if (!bVar3)
	{
		if (func_150(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			iVar1 = func_194(func_193(iParam0, 1), 0);
			if (WEAPON::IS_WEAPON_VALID(iVar1))
			{
				if (func_108() == -1)
				{
					func_195(iVar1);
				}
				if (func_78(0) && func_424(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
				{
					func_425(iParam0, iVar0, iParam5);
					if (!bParam9)
					{
						bParam2 = false;
					}
				}
				else
				{
					func_426(iParam0, iVar0, iParam5);
				}
			}
		}
		else if (func_91(iParam0) == joaat("weapon"))
		{
			if (!func_427(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_91(iParam0) == joaat("ammo") && func_428(iParam0))
		{
			if (!func_429(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_150(iParam0, 866047851))
		{
		}
		else if (func_150(iParam0, 2000026003))
		{
		}
		else if (func_150(iParam0, -103750053))
		{
			func_192(func_191(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_192(func_430(-717883113, 2091222383), iVar0);
		}
		else if (func_150(iParam0, -121341956) && !func_150(iParam0, 606799272))
		{
			if (iParam0 != 191707516)
			{
				func_137(534, 0);
			}
			if (func_150(iParam0, -2017733358) || func_150(iParam0, -1369131378))
			{
			}
		}
		else if (func_150(iParam0, -136654233))
		{
			if (func_150(iParam0, -1021472396))
			{
			}
		}
		else if (func_150(iParam0, -1466706512) && func_150(iParam0, 1147021565))
		{
			func_137(517, 0);
		}
		else if (func_150(iParam0, 1147021565) && func_150(iParam0, -524514947))
		{
		}
		else if (func_150(iParam0, 554195525))
		{
		}
		else if (func_150(iParam0, 589988438))
		{
			if (func_431())
			{
				func_432(1339418451, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_150(iParam0, 787083290) && func_150(iParam0, 949916894))
		{
			func_433(iParam0);
		}
		else if (func_150(iParam0, -1718133314))
		{
			func_434(iParam0);
		}
		else if (func_150(iParam0, -1738650224))
		{
			func_435(iParam0);
		}
		else if (func_150(iParam0, -1112814642) && func_150(iParam0, 949916894))
		{
			func_436(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1939067->f_21 = 0;
		}
		else if (func_150(iParam0, 1841149704))
		{
			func_437();
		}
		else if (func_150(iParam0, -1979000645))
		{
		}
		else if (func_150(iParam0, 606799272))
		{
		}
		else if (func_150(iParam0, -1112814642) && func_150(iParam0, -1697809989))
		{
		}
		else if (func_150(iParam0, -2017733358) || func_150(iParam0, -1369131378))
		{
		}
		else if (func_150(iParam0, -1921346699))
		{
			return 0;
		}
		else if (func_150(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868: /* GXTEntry: "Special Lake Lure" */
					if (!func_23(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1))
					{
						func_197(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438: /* GXTEntry: "Special River Lure" */
					if (!func_23(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1))
					{
						func_197(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217: /* GXTEntry: "Special Swamp Lure" */
					if (!func_23(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1))
					{
						func_197(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653: /* GXTEntry: "Lake Lure" */
					if (!func_23(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1))
					{
						func_197(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425: /* GXTEntry: "River Lure" */
					if (!func_23(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1))
					{
						func_197(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104: /* GXTEntry: "Swamp Lure" */
					if (!func_23(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1))
					{
						func_197(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_150(iParam0, -839724752) && func_351(iParam0, 4))
		{
		}
		else if (func_150(iParam0, 1399091007))
		{
			func_438(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
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
			case 1127253961: /* GXTEntry: "Reward" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1531214887;
				break;
			case joaat("weapon_kit_binoculars"):
			case 1652431022: /* GXTEntry: "Refined Binoculars" */
				break;
			case -102111672: /* GXTEntry: "Map" */
				bParam2 = true;
				bVar4 = true;
				break;
			case -21093309: /* GXTEntry: "Aged Pirate Rum" */
				func_439(271, func_354(-21093309 /* GXTEntry: "Aged Pirate Rum" */), 0);
				break;
			case 204375141: /* GXTEntry: "Ginseng Elixir" */
				func_439(269, func_354(204375141 /* GXTEntry: "Ginseng Elixir" */), 0);
				break;
			case -417963070: /* GXTEntry: "Valerian Root" */
				func_439(270, func_354(-417963070 /* GXTEntry: "Valerian Root" */), 0);
				break;
			case -1080874779: /* GXTEntry: "Special Health Cure" */
			case -755485480: /* GXTEntry: "Potent Health Cure" */
			case 230530039: /* GXTEntry: "Health Cure" */
			case 299161628: /* GXTEntry: "Moonshine" */
				if (MISC::GET_GAME_TIMER() >= (Global_1939231->f_10487 + 60000))
				{
					func_440(683, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health Bar." */, 1, 1);
					Global_1939231->f_10487 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1067476102: /* GXTEntry: "Potent Bitters" */
			case -541584777: /* GXTEntry: "Opened Cocaine Gum" */
			case 206762213: /* GXTEntry: "Cocaine Gum" */
			case 1566032147: /* GXTEntry: "Special Bitters" */
			case 1973952589: /* GXTEntry: "Bitters" */
				if (MISC::GET_GAME_TIMER() >= (Global_1939231->f_10487 + 60000))
				{
					func_440(683, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Stamina Bar." */, 1, 1);
					Global_1939231->f_10487 = MISC::GET_GAME_TIMER();
				}
				break;
			case -653299524: /* GXTEntry: "Snake Oil" */
			case -486559882: /* GXTEntry: "Potent Snake Oil" */
			case -324053813: /* GXTEntry: "Chewing Tobacco" */
			case -223790555: /* GXTEntry: "Special Snake Oil" */
			case 998010398: /* GXTEntry: "Opened Chewing Tobacco" */
				if (MISC::GET_GAME_TIMER() >= (Global_1939231->f_10487 + 60000))
				{
					func_440(683, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1939231->f_10487 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1976480343: /* GXTEntry: "Special Miracle Tonic" */
			case -953313786: /* GXTEntry: "Miracle Tonic" */
			case 730856618: /* GXTEntry: "Potent Miracle Tonic" */
				if (MISC::GET_GAME_TIMER() >= (Global_1939231->f_10487 + 60000))
				{
					func_440(683, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health, Stamina and Dea" +
    "d Eye Bars." */, 1, 1);
					Global_1939231->f_10487 = MISC::GET_GAME_TIMER();
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
				if (MISC::GET_GAME_TIMER() >= (Global_1939231->f_10487 + 60000))
				{
					func_440(684, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1939231->f_10487 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1977068039: /* GXTEntry: "High Quality Beef and Eggs Stew" */
			case -399865011: /* GXTEntry: "Regional Beef and Eggs Stew" */
				if (MISC::GET_GAME_TIMER() >= (Global_1939231->f_10487 + 60000))
				{
					func_440(684, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1939231->f_10487 = MISC::GET_GAME_TIMER();
				}
				break;
			case 80178851: /* GXTEntry: "Hair Tonic" */
				func_137(524, 0);
				break;
			case 1613651027: /* GXTEntry: "Hair Pomade" */
				func_137(527, 0);
				break;
			case -885810591: /* GXTEntry: "Premium Cigarettes" */
				break;
			case -601932535: /* GXTEntry: "Ground Coffee" */
				if (func_421(1))
				{
					func_137(520, 0);
				}
				break;
			case -898386032: /* GXTEntry: "Gun Oil" */
				func_137(519, 0);
				break;
			case -2035110427: /* GXTEntry: "Mortar and Pestle" */
				if (func_108() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case 1510719693: /* GXTEntry: "Coffee Percolator" */
				func_137(532, 0);
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
		func_441(&iVar5);
		if (!func_426(iVar5, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_78(0))
		{
			return 1;
		}
		if (func_91(iParam0) == joaat("clothing"))
		{
			func_442(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_78(0) && !func_79())
		{
			Var6.f_1 = 10;
			Var6.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_34, 0, 0, iVar2, &Var6, 0);
			iVar29 = 0;
			while (iVar29 < Var6)
			{
				func_197(&(Var6.f_1[iVar29]), &(Var6.f_12[iVar29]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar29++;
			}
		}
		else
		{
			func_240(iVar2, 0);
		}
	}
	Var30 = { func_186(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var30))
	{
		STATS::_0x6A0184E904CDF25E(&Var30, iVar0);
	}
	func_443(iParam0);
	if (fParam6 > 0f)
	{
		if (func_150(iParam0, -839724752))
		{
			func_444(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar32 = iParam5 == 1248274121;
		func_185(iParam0, iVar0, 0, bVar32, 0, 0, 0);
	}
	return 1;
}

int func_198(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<4> Var1;
	var uVar6;

	if (!func_445(iParam0, iParam1))
	{
		return 0;
	}
	if (iParam1 == 1)
	{
		if (func_446(iParam0))
		{
			iVar0 = 0;
			if (func_447(iParam0, 369710026, &iVar0))
			{
				iParam2 = iVar0;
			}
		}
	}
	Var1.f_4 = func_448(iParam1);
	Var1 = { func_368(0) };
	if (!func_413(iParam0, &uVar6, &Var1, iParam2, 752097756, 1))
	{
		return 0;
	}
	return 1;
}

void func_199(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_449(iParam0) };
	STATS::_0x6A0184E904CDF25E(&Var0, iParam1);
	if (!func_150(iParam0, 1714518167))
	{
		Var0 = { func_450(iParam0) };
		STATS::_0x6A0184E904CDF25E(&Var0, iParam1);
	}
}

int func_200(int iParam0)
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

int func_201(int iParam0)
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

int func_202(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_73(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_203(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_204(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

int func_205(int iParam0)
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

int func_206(int iParam0)
{
	switch (iParam0)
	{
		case -577270367:
			return 241235545;
		case 194818087:
			return 1827902148;
		case -845885815:
			return 1301555144;
		case -1869018428: /* GXTEntry: "No Foundation" */
			return -2056583192;
		case 1710247623: /* GXTEntry: "No Blush" */
			return 1015239729;
		case 1964684696: /* GXTEntry: "No Eye Liner" */
			return -340627321;
		case -2087489409: /* GXTEntry: "No Eye Shadow" */
			return -875805376;
		case -860557048: /* GXTEntry: "No Lipstick" */
			return -768760704;
		case -28107610:
			return -2118203104;
		case -896045342:
			return 1285634184;
		case -643819742:
			return -559080197;
		case -1504407916:
			return -1180698265;
		case -1386156083:
			return -487028314;
		case 1687431937:
			return -1811760631;
		case 1613216286:
			return 1858448324;
		default:
			break;
	}
	return 0;
}

int func_207(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (((*uParam0)[iVar0 /*17*/])->f_1 == -1)
		{
		}
		else
		{
			if (((*uParam0)[iVar0 /*17*/])->f_16 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_208(int iParam0)
{
	int iVar0;

	iVar0 = func_162(iParam0);
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

int func_209(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_364(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_366(&Var0, func_365(0));
	}
	if (!func_367(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_205(iVar14);
	return uVar15;
}

int func_210(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

struct<4> func_211(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_188(iParam0, bParam1, 0) };
	return func_270(iParam0, Var0, Var0.f_4, bParam1);
}

bool func_212(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_213(var uParam0)
{
	return func_212(*uParam0, 2);
}

float func_214()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_215(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_216(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_217(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_218(int iParam0, int iParam1, bool bParam2)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	bool bVar33;
	int iVar34;
	int iVar35;
	int iVar36;

	if (!func_451(iParam0, iParam1, &Var0, &iVar31, 1, 0))
	{
		return 0;
	}
	bVar33 = (func_78(0) && !func_79());
	iVar34 = -1;
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32 /*2*/] == 0)
		{
			Jump @268; //curOff = 73
		}
		else
		{
			iVar35 = func_94(&(Var0[iVar32 /*2*/]), 0, !bVar33, 0);
			if (bVar33)
			{
				if (func_241(&(Var0[iVar32 /*2*/])) || func_452(&(Var0[iVar32 /*2*/])))
				{
					iVar35 = (iVar35 + func_453(&(Var0[iVar32 /*2*/]), 0));
					if (bParam2)
					{
						iVar36 = 0;
						iVar35 = (iVar35 + func_454(7, &(Var0[iVar32 /*2*/]), &iVar36));
					}
				}
				else if (bParam2)
				{
					iVar35 = (iVar35 + (func_455(7, &(Var0[iVar32 /*2*/])) + func_456(&(Var0[iVar32 /*2*/]))));
				}
			}
			if (iVar35 < (Var0[iVar32 /*2*/])->f_1)
			{
				return 0;
			}
			iVar35 = (iVar35 / (Var0[iVar32 /*2*/])->f_1);
			if (iVar34 == -1 || iVar35 < iVar34)
			{
				iVar34 = iVar35;
			}
		}
		iVar32++;
	}
	return iVar34;
}

int func_219(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	struct<4> Var0;
	struct<10> Var4;
	int iVar26;
	int iVar27;

	func_457(&iParam0);
	if (!func_90(iParam0, 0) && !func_458(func_278(iParam0), 2))
	{
		return 0;
	}
	if (!bParam3 && func_210(iParam0, joaat("default")) == 0)
	{
		bParam3 = true;
	}
	if (func_459(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		Var0 = { func_365(0) };
		Var4.f_9 = -1591664384;
		if (!func_370(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
		{
			return 0;
		}
		else if (func_371(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
		{
			return 0;
		}
		if (func_369(iParam0, 1))
		{
			if (!func_370(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
			{
				return 0;
			}
			else if (func_371(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
			{
				return 0;
			}
		}
		return 1;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_460(iParam0, uParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return 0;
	}
	else if (iVar26 == 0)
	{
		return 1;
	}
	iVar27 = func_325(iParam0, *uParam1, uParam1->f_4, bParam4, bParam3, iParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return 1;
	}
	return 0;
}

int func_220(int iParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;
	int iVar35;
	struct<14> Var36;
	int iVar52;
	struct<16> Var53;

	if (!func_90(iParam0, 0))
	{
		return -1;
	}
	if (func_91(iParam0) != 26423971)
	{
		return -1;
	}
	if (func_79())
	{
		bParam3 = true;
	}
	if (iParam5 == -570078785 || iParam5 == -915411861)
	{
		iVar0 = (func_461(iParam0, iParam5, 1, 0, 1, 2084597891 /* GXTEntry: "Money" */) * iParam2);
		iVar1 = 0;
		if (iVar0 <= 0)
		{
			iVar1 = (func_461(iParam0, iParam5, 1, 0, 1, 773203532 /* GXTEntry: "Gold Bar" */) * iParam2);
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
	else if (func_451(iParam0, iParam5, &Var2, &iVar33, 1, 0))
	{
		iVar35 = 0;
		while (iVar35 < iVar33)
		{
			iVar34 = ((Var2[iVar35 /*2*/])->f_1 * iParam2);
			if (!func_94(&(Var2[iVar35 /*2*/]), 0, bParam3, 0) >= iVar34)
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
	if (!bParam3 && func_78(0))
	{
		if (iVar0 > 0)
		{
			func_147(2084597891 /* GXTEntry: "Money" */, iVar0, -142743235, 0, 0);
		}
		else if (iVar1 > 0)
		{
			func_147(773203532 /* GXTEntry: "Gold Bar" */, iVar1, -142743235, 0, 0);
		}
		else if (func_462(iParam5))
		{
			iVar35 = 0;
			while (iVar35 < iVar33)
			{
				iVar34 = ((Var2[iVar35 /*2*/])->f_1 * iParam2);
				func_147(&(Var2[iVar35 /*2*/]), iVar34, -142743235, 0, 0);
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
	iVar52 = func_222(joaat("spend"), &Var36, bParam4);
	if (iVar52 == -1)
	{
	}
	else
	{
		Var53.f_7 = -142743235;
		StringCopy(&(Var53.f_12), sParam1, 32);
		func_223(iVar52, Var53);
	}
	return iVar52;
}

struct<16> func_221(int iParam0, struct<4> Param1, int iParam5, int iParam6, bool bParam7)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_4 = { Param1 };
	Var0 = { func_270(iParam0, Var0.f_4, iParam5, 1) };
	Var0.f_8 = iParam0;
	Var0.f_9 = iParam6;
	Var0.f_11 = iParam5;
	if (bParam7)
	{
		Var0.f_15 = func_210(iParam0, joaat("default"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_463() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_222(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_464(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			return func_465(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 16), iVar0, uParam1);
		}
	}
	else
	{
		return func_466(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_223(int iParam0, struct<16> Param1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1272170->f_20)
	{
		if (&Global_1272170->f_20.f_1[iVar0 /*20*/] == iParam0)
		{
			if ((Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1 == 1 || (Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1 == 5)
			{
				(Global_1272170->f_20.f_1[iVar0 /*20*/])->f_4 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

int func_224(int iParam0, bool bParam1, int iParam2)
{
	if (func_467(255))
	{
		return 1;
	}
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(522750908))
	{
		return 0;
	}
	if (!func_468(iParam0))
	{
		return 0;
	}
	if (!func_470(func_469(iParam0), !bParam1, iParam2, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_225(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_91(iParam0);
	switch (iParam1)
	{
		case 1:
			if ((func_150(iParam0, -537818634) || func_150(iParam0, -458578204)) && !func_150(iParam0, -1242251796))
			{
				return 1;
			}
			break;
		case 2:
			if (iVar0 == joaat("ammo"))
			{
				if (func_150(iParam0, -1588156645))
				{
					return 0;
				}
				return 1;
			}
			break;
		case 3:
			if (iVar0 == joaat("weapon"))
			{
				return 1;
			}
			else if (iVar0 == joaat("ammo"))
			{
				if (func_150(iParam0, -1588156645))
				{
					return 1;
				}
			}
			break;
		case 0:
			if ((func_234(iParam0) || func_283(iParam0, -1636519629) == -701492487) || iParam0 == 894654881)
			{
				return 1;
			}
			break;
		case 4:
			if (func_150(iParam0, 127710288))
			{
				return 1;
			}
			break;
		case 5:
			if (func_150(iParam0, -1242251796))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_226(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_471())
	{
		return 0;
	}
	if (!NETWORK::_0xDD73C9838CE7181D())
	{
		return 0;
	}
	iVar0 = func_472(iParam0);
	iVar1 = func_473(iVar0, 2);
	if (iVar1 >= 5)
	{
		return 0;
	}
	if (!func_470(func_474(iParam0), 0, 255, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_227(int iParam0, int iParam1)
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

bool func_228(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_229(int iParam0)
{
	return iParam0;
}

void func_230(int iParam0)
{
	if (!func_475(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		HUD::_UIPROMPT_DELETE(((*Global_1949759)[iParam0 /*23*/])->f_3);
	}
	((*Global_1949759)[iParam0 /*23*/])->f_4 = 0;
	(*Global_1949759)[iParam0 /*23*/] = 1;
	((*Global_1949759)[iParam0 /*23*/])->f_16 = 0;
	((*Global_1949759)[iParam0 /*23*/])->f_1 = 0;
	((*Global_1949759)[iParam0 /*23*/])->f_6 = { 0f, 0f, 0f };
	((*Global_1949759)[iParam0 /*23*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1949759)[iParam0 /*23*/])->f_9 = 0f;
	((*Global_1949759)[iParam0 /*23*/])->f_10 = 0;
	((*Global_1949759)[iParam0 /*23*/])->f_11 = 0;
	((*Global_1949759)[iParam0 /*23*/])->f_2 = 1;
	((*Global_1949759)[iParam0 /*23*/])->f_15 = -1f;
}

bool func_231(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1949759)[iParam0 /*23*/])->f_1 && iParam1) != 0;
}

void func_232(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;

	((*Global_1949759)[iParam0 /*23*/])->f_4 = iParam1;
	(*Global_1949759)[iParam0 /*23*/] = iParam4;
	((*Global_1949759)[iParam0 /*23*/])->f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	((*Global_1949759)[iParam0 /*23*/])->f_2 = iParam5;
	((*Global_1949759)[iParam0 /*23*/])->f_6 = { vParam6 };
	((*Global_1949759)[iParam0 /*23*/])->f_9 = fParam9;
	((*Global_1949759)[iParam0 /*23*/])->f_10 = iParam10;
	((*Global_1949759)[iParam0 /*23*/])->f_11 = iParam11;
	((*Global_1949759)[iParam0 /*23*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1949759)[iParam0 /*23*/])->f_5 = iParam12;
	((*Global_1949759)[iParam0 /*23*/])->f_1 = 2;
	((*Global_1949759)[iParam0 /*23*/])->f_17 = -1;
	((*Global_1949759)[iParam0 /*23*/])->f_18 = iParam16;
	((*Global_1949759)[iParam0 /*23*/])->f_19 = iParam15;
	((*Global_1949759)[iParam0 /*23*/])->f_20 = bParam25;
	((*Global_1949759)[iParam0 /*23*/])->f_22 = 0f;
	if (bParam25)
	{
		((*Global_1949759)[iParam0 /*23*/])->f_21 = MISC::GET_GAME_TIMER();
	}
	else
	{
		((*Global_1949759)[iParam0 /*23*/])->f_21 = MISC::_GET_SYSTEM_TIME();
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
	((*Global_1949759)[iParam0 /*23*/])->f_3 = iVar0;
	func_236(iParam0, 1);
	func_237(iParam0, 1);
	func_238(iParam0, 128);
}

int func_233(int iParam0)
{
	switch (iParam0)
	{
		case joaat("a_c_hawk_01"):
		case joaat("a_c_cormorant_01"):
		case joaat("a_c_songbird_01"):
		case joaat("a_c_oriole_01"):
		case joaat("a_c_robin_01"):
		case joaat("a_c_roseatespoonbill_01"):
		case joaat("a_c_sparrow_01"):
		case joaat("a_c_owl_01"):
		case joaat("a_c_raven_01"):
		case joaat("a_c_cranewhooping_01"):
		case joaat("a_c_redfootedbooby_01"):
		case joaat("a_c_cedarwaxwing_01"):
		case joaat("a_c_seagull_01"):
		case joaat("a_c_crow_01"):
		case joaat("a_c_pigeon"):
		case joaat("a_c_loon_01"):
		case joaat("a_c_woodpecker_01"):
		case 729471181:
		case joaat("a_c_egret_01"):
		case joaat("a_c_heron_01"):
		case joaat("a_c_vulture_01"):
		case joaat("a_c_californiacondor_01"):
		case joaat("a_c_eagle_01"):
		case joaat("a_c_bluejay_01"):
		case joaat("a_c_cardinal_01"):
			return 166398389 /* GXTEntry: "Plain Game Bird" */;
		case joaat("a_c_armadillo_01"):
		case joaat("a_c_snakeredboa_01"):
		case joaat("a_c_chipmunk_01"):
		case joaat("a_c_possum_01"):
		case joaat("a_c_skunk_01"):
		case joaat("a_c_badger_01"):
		case joaat("a_c_muskrat_01"):
		case joaat("a_c_snakewater_01"):
		case joaat("a_c_fox_01"):
		case joaat("a_c_coyote_01"):
		case joaat("a_c_snake_01"):
		case joaat("a_c_beaver_01"):
		case joaat("a_c_snakeblacktailrattle_01"):
		case joaat("a_c_rat_01"):
		case joaat("a_c_raccoon_01"):
		case joaat("a_c_snakeferdelance_01"):
		case joaat("a_c_squirrel_01"):
			return -467118139 /* GXTEntry: "Plain Stringy Meat" */;
		case joaat("a_c_iguana_01"):
		case joaat("a_c_turtlesea_01"):
		case joaat("a_c_frogbull_01"):
		case joaat("a_c_iguanadesert_01"):
		case joaat("a_c_turtlesnapping_01"):
		case joaat("a_c_toad_01"):
			return 524620511 /* GXTEntry: "Plain Herptile" */;
		case joaat("a_c_fishbluegil_01_sm"):
		case joaat("a_c_fishchannelcatfish_01_xl"):
		case joaat("a_c_fishlongnosegar_01_lg"):
		case joaat("a_c_fishbullheadcat_01_ms"):
		case joaat("a_c_fishbullheadcat_01_sm"):
		case joaat("a_c_fishchannelcatfish_01_lg"):
		case joaat("a_c_fishbluegil_01_ms"):
			return -1768405210 /* GXTEntry: "Gritty Fish" */;
		case joaat("a_c_bighornram_01"):
		case joaat("a_c_goat_01"):
		case joaat("a_c_sheep_01"):
			return -546209848 /* GXTEntry: "Plain Mutton" */;
		case joaat("a_c_fishrockbass_01_ms"):
		case joaat("a_c_fishsmallmouthbass_01_lg"):
		case joaat("a_c_fishmuskie_01_lg"):
		case joaat("a_c_fishchainpickerel_01_ms"):
		case joaat("a_c_fishperch_01_ms"):
		case joaat("a_c_fishlakesturgeon_01_lg"):
		case joaat("a_c_fishredfinpickerel_01_ms"):
		case joaat("a_c_fishrockbass_01_sm"):
		case joaat("a_c_fishlargemouthbass_01_ms"):
		case joaat("a_c_fishchainpickerel_01_sm"):
		case joaat("a_c_fishlargemouthbass_01_lg"):
		case joaat("a_c_fishredfinpickerel_01_sm"):
		case joaat("a_c_fishnorthernpike_01_lg"):
		case joaat("a_c_fishperch_01_sm"):
		case joaat("a_c_fishsmallmouthbass_01_ms"):
			return 880496229 /* GXTEntry: "Plain Flaky Fish" */;
		case joaat("a_c_chicken_01"):
		case joaat("a_c_turkeywild_01"):
		case joaat("a_c_turkey_01"):
		case joaat("a_c_turkey_02"):
		case joaat("a_c_goosecanada_01"):
		case joaat("a_c_rooster_01"):
		case joaat("a_c_prairiechicken_01"):
			return 2058993648 /* GXTEntry: "Plain Plump Bird" */;
		case joaat("a_c_cow"):
		case joaat("a_c_bull_01"):
		case joaat("a_c_ox_01"):
		case joaat("a_c_buffalo_01"):
			return -1535978095 /* GXTEntry: "Plain Prime Beef" */;
		case joaat("a_c_elk_01"):
		case joaat("a_c_buck_01"):
		case joaat("a_c_moose_01"):
		case joaat("a_c_deer_01"):
		case joaat("a_c_pronghorn_01"):
			return -151108755 /* GXTEntry: "Plain Venison" */;
		case joaat("a_c_pig_01"):
		case joaat("a_c_javelina_01"):
		case joaat("a_c_boar_01"):
			return 1663095412 /* GXTEntry: "Plain Pork" */;
		case joaat("a_c_duck_01"):
		case joaat("a_c_rabbit_01"):
		case joaat("a_c_pheasant_01"):
		case joaat("a_c_quail_01"):
			return -348823399 /* GXTEntry: "Plain Game" */;
		case joaat("a_c_fishsalmonsockeye_01_ms"):
		case joaat("a_c_fishrainbowtrout_01_lg"):
		case joaat("a_c_fishrainbowtrout_01_ms"):
		case joaat("a_c_fishsalmonsockeye_01_lg"):
			return -1240620284 /* GXTEntry: "Plain Succulent Fish" */;
		case joaat("a_c_parrot_01"):
		case joaat("a_c_pelican_01"):
		case joaat("a_c_carolinaparakeet_01"):
			return 532201260 /* GXTEntry: "Plain Exotic Bird" */;
		case joaat("a_c_alligator_01"):
		case joaat("a_c_alligator_02"):
		case joaat("a_c_alligator_03"):
		case joaat("a_c_wolf"):
		case joaat("a_c_bear_01"):
		case joaat("a_c_wolf_medium"):
		case joaat("a_c_wolf_small"):
		case joaat("a_c_cougar_01"):
		case joaat("a_c_bearblack_01"):
		case joaat("a_c_panther_01"):
			return 1610737930 /* GXTEntry: "Plain Big Game" */;
		case joaat("a_c_crab_01"):
			return -1277667710 /* GXTEntry: "Plain Crustacean" */;
	}
	return 0;
}

int func_234(int iParam0)
{
	if (func_91(iParam0) == 2085633299 && INVENTORY::_0x245D07651B1D183B(iParam0, 16777216))
	{
		return 1;
	}
	return 0;
}

void func_235(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949759)[iParam0 /*23*/])->f_1 = (((*Global_1949759)[iParam0 /*23*/])->f_1 - (((*Global_1949759)[iParam0 /*23*/])->f_1 && iParam1));
}

void func_236(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		if (((*Global_1949759)[iParam0 /*23*/])->f_5 == 5 && !func_231(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949759)[iParam0 /*23*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949759)[iParam0 /*23*/])->f_3, iParam1);
		}
	}
}

void func_237(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1949759)[iParam0 /*23*/])->f_3, iParam1);
	}
}

void func_238(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949759)[iParam0 /*23*/])->f_1 = (((*Global_1949759)[iParam0 /*23*/])->f_1 || iParam1);
}

int func_239(int iParam0)
{
	int iVar0;

	iVar0 = func_476(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && PED::IS_PED_INJURED(iVar0))
	{
		return iVar0;
	}
	return 0;
}

int func_240(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	if (0 == iParam0)
	{
		return 0;
	}
	Var4.f_1 = 10;
	func_477(&Var4, 1356624740);
	return func_478(iParam0, &Var4, &uVar0, iParam1);
}

int func_241(int iParam0)
{
	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	if (func_150(iParam0, -887064662))
	{
		return 1;
	}
	return func_452(iParam0);
}

int func_242(int iParam0, int iParam1)
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

int func_243(int iParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("a_c_fishbluegil_01_sm"):
		case joaat("a_c_crab_01"):
		case joaat("a_c_fishrockbass_01_ms"):
		case joaat("a_c_songbird_01"):
		case joaat("a_c_chipmunk_01"):
		case joaat("a_c_oriole_01"):
		case joaat("a_c_robin_01"):
		case joaat("a_c_fishchainpickerel_01_ms"):
		case joaat("a_c_sparrow_01"):
		case joaat("a_c_frogbull_01"):
		case joaat("a_c_fishperch_01_ms"):
		case joaat("a_c_cedarwaxwing_01"):
		case joaat("a_c_fishredfinpickerel_01_ms"):
		case joaat("a_c_fishrockbass_01_sm"):
		case joaat("a_c_fishsalmonsockeye_01_ms"):
		case joaat("a_c_crow_01"):
		case joaat("a_c_pigeon"):
		case joaat("a_c_fishlargemouthbass_01_ms"):
		case joaat("a_c_fishchainpickerel_01_sm"):
		case joaat("a_c_fishrainbowtrout_01_ms"):
		case joaat("a_c_woodpecker_01"):
		case joaat("a_c_fishredfinpickerel_01_sm"):
		case joaat("a_c_bat_01"):
		case joaat("a_c_fishbullheadcat_01_ms"):
		case joaat("a_c_fishperch_01_sm"):
		case 729471181:
		case joaat("a_c_rat_01"):
		case joaat("a_c_squirrel_01"):
		case joaat("a_c_fishbullheadcat_01_sm"):
		case joaat("a_c_toad_01"):
		case joaat("a_c_bluejay_01"):
		case joaat("a_c_carolinaparakeet_01"):
		case joaat("a_c_cardinal_01"):
		case joaat("a_c_fishsmallmouthbass_01_ms"):
		case joaat("a_c_fishbluegil_01_ms"):
		case joaat("a_c_quail_01"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_244(int iParam0)
{
	if (!func_90(iParam0, 0))
	{
	}
	if (func_150(iParam0, 1286414894))
	{
		return 1;
	}
	return 0;
}

int func_245(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*iParam0);
	return func_479(iVar0);
}

int func_246(int iParam0)
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
			iVar0 = func_479(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
		}
	}
	return iVar0;
}

int func_247(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	iParam1 = func_480(iParam0, iParam1, 1, 1, -142743235, 0, 1);
	if (iParam1 <= 0)
	{
		return 1;
	}
	return func_481(iParam0, iParam1, bParam2, iParam3);
}

int func_248(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_318(iVar0);
}

int func_249(int iParam0, int iParam1)
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

bool func_250(int iParam0)
{
	return WEAPON::_IS_WEAPON_BOW(iParam0);
}

int func_251()
{
	return Global_1896610->f_41;
}

void func_252(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

int func_253(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 30)
	{
		return 0;
	}
	if (func_482(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_483(iParam0))
	{
		return 0;
	}
	if (func_484(iParam0))
	{
		return 0;
	}
	if ((Global_1900718->f_67 && !func_485(iParam0, 1)) || func_486(32768))
	{
		if (!func_485(iParam0, 262144) || !Global_1904613->f_8198)
		{
			return 0;
		}
	}
	if (!func_487())
	{
		return 0;
	}
	return 1;
}

void func_254(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904613[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1904613)[iParam0] = uVar0;
}

int func_255(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_231(iVar0, 2))
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
		func_232(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216 /* Float: 1f */, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

void func_256(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_100(iParam0))
	{
		return;
	}
	iVar0 = func_229(iParam0);
	func_236(iVar0, iParam1);
}

void func_257(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_100(iParam0))
	{
		return;
	}
	iVar0 = func_229(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1949759)[iVar0 /*23*/])->f_3, iParam1, iParam2);
}

void func_258(var uParam0, char* sParam1)
{
	int iVar0;

	if (func_100(*uParam0))
	{
		iVar0 = func_229(*uParam0);
		if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iVar0 /*23*/])->f_3))
		{
			HUD::_UIPROMPT_SET_TAG(((*Global_1949759)[iVar0 /*23*/])->f_3, sParam1);
		}
	}
}

bool func_259(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_100(iParam0))
	{
		return false;
	}
	iVar0 = func_229(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

int func_260()
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = PAD::GET_DISABLED_CONTROL_NORMAL(0, joaat("INPUT_MOVE_LR"));
	fVar1 = PAD::GET_DISABLED_CONTROL_NORMAL(0, joaat("INPUT_MOVE_UD"));
	fVar2 = ((fVar0 * fVar0) + (fVar1 * fVar1));
	if (fVar2 >= (0.9f * 0.9f))
	{
		return 1;
	}
	return 0;
}

int func_261(var uParam0, float fParam1)
{
	if (func_27(uParam0, fParam1))
	{
		func_262(uParam0);
		return 1;
	}
	return 0;
}

void func_262(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_263(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_100(iParam0))
	{
		return false;
	}
	iVar0 = func_229(iParam0);
	if (!HUD::_UIPROMPT_HAS_HOLD_MODE(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return PAD::IS_CONTROL_PRESSED(2, ((*Global_1949759)[iVar0 /*23*/])->f_4);
	}
	return HUD::_UIPROMPT_IS_HOLD_MODE_RUNNING(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

int func_264(var uParam0)
{
	int iVar0;

	uParam0->f_144 = func_59();
	iVar0 = func_35(uParam0);
	if ((((uParam0->f_145 == -1 || iVar0 == uParam0->f_145) && (uParam0->f_146 == 0 || func_488(uParam0->f_144, uParam0->f_146))) || (uParam0->f_145 == -1 && func_488(uParam0->f_144, uParam0->f_146))) && !(PED::_0xC488B8C0E52560D8(Global_34) || PED::_0x2DC0E8DCBD3546E9(Global_34)))
	{
		uParam0->f_143 = iVar0;
		return 1;
	}
	return 0;
}

void func_265(var uParam0)
{
	int iVar0;

	iVar0 = PED::_0xC22AA08A8ADB87D4(Global_34);
	if (iVar0 == -518407211 || iVar0 == 1662215698)
	{
		if (func_72(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 500)
		{
			func_75(653141085, 2f);
			uParam0->f_164 = MISC::GET_GAME_TIMER();
		}
	}
	else if (iVar0 == -1433449364 || iVar0 == 2058555960)
	{
		if (func_72(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 500)
		{
			func_75(1335077954, 2f);
			uParam0->f_164 = MISC::GET_GAME_TIMER();
		}
	}
}

int func_266(var uParam0)
{
	if (uParam0->f_144 == 6 && func_58(1))
	{
		return 1;
	}
	else
	{
		switch (uParam0->f_144)
		{
			case 1:
				func_75(-73132177, 1086324736 /* Float: 6f */);
				break;
		}
	}
	return 0;
}

int func_267(var uParam0)
{
	if (uParam0->f_144 == 6 && func_58(1))
	{
		return 1;
	}
	else
	{
		switch (uParam0->f_144)
		{
			case 1:
				func_75(-73132177, 1086324736 /* Float: 6f */);
				break;
			case 8:
				func_75(-1890302844, 0.5f);
				break;
			case 7:
				func_75(36116464, 0.5f);
				break;
		}
	}
	return 0;
}

bool func_268(var uParam0, var uParam1, char* sParam2, char* sParam3, char* sParam4)
{
	PED::_0x6D07B371E9439019(Global_34);
	return TASK::_0x79197F7D2BB5E73A(uParam0, uParam1, sParam2, sParam3, sParam4, 0);
}

int func_269(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<6> Var1[5];
	int iVar32;
	int iVar33;
	int iVar34;
	struct<16> Var35;
	struct<16> Var51;

	if (func_489(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_210(iParam0, joaat("default"));
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_78(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_490(&Var1, &iVar32, iParam0, iVar0, iParam1, 1) || iVar32 < 1)
		{
			return 0;
		}
		iVar34 = -1;
		Var35.f_9 = 1;
		Var35.f_11 = -1591664384;
		iVar33 = 0;
		while (iVar33 < iVar32)
		{
			Var35 = { func_491(iParam0, Var1[iVar33 /*6*/]) };
			Var35.f_12 = iParam2;
			iVar34 = func_222(joaat("use"), &Var35, 1);
			if (iVar34 == -1)
			{
				return 0;
			}
			iVar33++;
		}
		if (iVar34 != -1)
		{
			Var51.f_7 = -142743235;
			Var51 = bParam3;
			Var51.f_7 = iParam2;
			func_223(iVar34, Var51);
			return 1;
		}
		return 0;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_73(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

struct<4> func_270(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_90(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_73(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_271(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;
	struct<13> Var15;
	struct<16> Var31;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_489(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_374(*uParam1, &Var0, bParam6, 0, -1))
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
	if (!func_78(bParam6))
	{
		iVar14 = -1;
		if (func_108() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_222(joaat("use"), &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31 = bParam5;
				Var31.f_7 = iParam4;
				func_223(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_73(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_272(int iParam0)
{
	if (func_150(iParam0, 1573112293))
	{
		return func_492(iParam0);
	}
	switch (func_162(iParam0))
	{
		case -77448735:
			if (func_493(iParam0))
			{
				return func_492(iParam0);
			}
			break;
		case -1393202694:
		case 2041469314:
			return func_492(iParam0);
		case -1520388130:
		case 1802292908:
			return func_494();
		case -2061583405:
		case 81053684:
		case 1477698721:
			return func_495();
		case -525676072:
			return func_495();
		case 1779021115:
			if (iParam0 == joaat("weapon_kit_camera"))
			{
				return func_496();
			}
			return func_497();
		case -1823706425:
			return func_498();
		case -854348463:
			return func_499();
		case -2101244071:
		case 664784405:
		case 874188557:
		case 2020212423:
			return func_500();
		default:
			if (func_90(iParam0, 0))
			{
				if (func_150(iParam0, 1919582297))
				{
					return func_501();
				}
				else if (iParam0 == -2035110427 || iParam0 == -1448210800)
				{
					return func_502();
				}
				else if (iParam0 == -1516555556)
				{
					return func_503();
				}
				else if (func_150(iParam0, 1147021565))
				{
					return func_504();
				}
			}
			return func_505();
	}
	return func_505();
}

int func_273(bool bParam0, int iParam1)
{
	int iVar0;

	if ((Global_1939178->f_6 || PED::IS_PED_DEAD_OR_DYING(Global_34, true)) || ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		return 0;
	}
	if (func_108() == 0)
	{
		if (func_506(131072))
		{
			return 0;
		}
	}
	if (!func_15(iParam1, 1))
	{
		if (func_506(1024))
		{
			return 0;
		}
	}
	if (Global_1939178->f_16)
	{
		return 0;
	}
	if (!func_15(iParam1, 2) && func_506(32))
	{
		return 0;
	}
	if (!func_15(iParam1, 4))
	{
		if (func_506(4096))
		{
			return 0;
		}
	}
	if (!func_15(iParam1, 8) && func_506(512))
	{
		return 0;
	}
	if (!func_15(iParam1, 512) && !func_507(bParam0))
	{
		return 0;
	}
	if (!func_15(iParam1, 262144) && !func_508(bParam0, func_15(iParam1, 524288)))
	{
		return 0;
	}
	if (!func_15(iParam1, 64) && !func_509(bParam0, iParam1, 1))
	{
		return 0;
	}
	if (!func_15(iParam1, 128))
	{
		if (func_510(Global_34, 1868526510) || func_511(Global_34))
		{
			if (bParam0)
			{
				func_161("ITEM_UNUSABLE_FULLY_MOUNTED", 10000, 0, 0, 0, 1);
			}
			return 0;
		}
	}
	if (!func_15(iParam1, 16))
	{
		if (func_511(Global_34))
		{
			iVar0 = PED::GET_MOUNT(Global_34);
			if (!func_512(iVar0, 1))
			{
				if (bParam0)
				{
					func_161("ITEM_UNUSABLE_HORSE_SPEED", 10000, 0, 0, 0, 1);
				}
				return 0;
			}
		}
	}
	if (!func_15(iParam1, 256) && func_506(8192))
	{
		return 0;
	}
	if (!func_15(iParam1, 1024) && func_506(65536))
	{
		if (bParam0)
		{
			func_161("ITEM_UNUSABLE_CINEMATIC_CAM", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (!func_15(iParam1, 2048))
	{
		if (func_506(32768))
		{
			return 0;
		}
	}
	if (!func_15(iParam1, 4096))
	{
		if (func_506(16384))
		{
			return 0;
		}
	}
	if (!func_15(iParam1, 8192))
	{
		if (!func_506(16))
		{
			return 0;
		}
	}
	if (!func_15(iParam1, 16384))
	{
		if (func_506(256))
		{
			return 0;
		}
	}
	if (!func_15(iParam1, 32768))
	{
		if (func_145())
		{
			if (bParam0)
			{
				func_161("ITEM_UNUSABLE_SATCHEL_OPEN", 10000, 0, 0, 0, 1);
			}
			return 0;
		}
	}
	if (!func_15(iParam1, 131072))
	{
		if (!func_506(524288))
		{
			return 0;
		}
	}
	if (!func_15(iParam1, 65536))
	{
		if (!func_506(262144))
		{
			return 0;
		}
	}
	if (!func_15(iParam1, 1048576))
	{
		if (!func_506(2097152))
		{
			return 0;
		}
	}
	if (!func_15(iParam1, 2097152))
	{
		if (!func_506(8388608))
		{
			return 0;
		}
	}
	if (!func_15(iParam1, 4194304))
	{
		if (!func_506(16777216))
		{
			return 0;
		}
	}
	if (!func_15(iParam1, 8388608))
	{
		if (func_506(33554432))
		{
			return 0;
		}
	}
	if (!func_15(iParam1, 16777216))
	{
		if (func_506(67108864))
		{
			return 0;
		}
	}
	if (!func_15(iParam1, 33554432))
	{
		if (func_506(134217728))
		{
			return 0;
		}
	}
	if (func_506(64))
	{
		return 0;
	}
	else if (func_506(128))
	{
		return 0;
	}
	else if (func_506(1048576))
	{
		return 0;
	}
	else if (func_506(4))
	{
		return 0;
	}
	return 1;
}

int func_274()
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return 0;
	}
	if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_34))
	{
		iVar0 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_34);
		iVar1 = iVar0;
		if (iVar1 != -1241981548 && iVar1 != 1049986774)
		{
			return 1;
		}
	}
	return 0;
}

var func_275(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915180->f_20136;
	}
	return (Global_1915180->f_20136 || Global_1915180->f_21989.f_1);
}

var func_276(int iParam0, int iParam1)
{
	return DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939231->f_1433.f_54.f_85);
}

char* func_277()
{
	switch (Global_1915180->f_21989.f_5)
	{
		case 0:
			return "SHOPS_HANDHELD_FAIL_NONE";
		case 1:
			return "SHOPS_HANDHELD_FAIL_NOT_READY";
		case 2:
			return "SHOPS_HANDHELD_FAIL_DISABLED";
		case 3:
			return "SHOPS_HANDHELD_FAIL_INSTANCED";
		case 4:
			return "SHOPS_HANDHELD_FAIL_SHOP_CL";
		case 5:
			return "SHOPS_HANDHELD_FAIL_NOT_OWN";
		case 8:
			return "SHOPS_HANDHELD_FAIL_WAIT_FOR_FREEROAM";
		case 6:
			return "SHOPS_HANDHELD_FAIL_PVP_ASSA";
		case 7:
			return "SHOPS_HANDHELD_FAIL_SHOPS_DISABLED_THIS_FRAME";
		case 9:
			return "SHOPS_HANDHELD_FAIL_PLAYER_DIED";
		case 10:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_COMBAT";
		case 11:
			return "SHOPS_HANDHELD_FAIL_PLAYER_RIDING";
		case 12:
			return "SHOPS_HANDHELD_FAIL_PLAYER_USING_TURRET";
		case 13:
			return "SHOPS_HANDHELD_FAIL_PLAYER_FALLING";
		case 14:
			return "SHOPS_HANDHELD_FAIL_PLAYER_INSPECTING";
		case 15:
			return "SHOPS_HANDHELD_FAIL_PLAYER_CARRYING";
		case 16:
			return "SHOPS_HANDHELD_FAIL_PLAYER_BROWSING";
		case 17:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_SCENARIO";
		case 18:
			return "SHOPS_HANDHELD_FAIL_PLAYER_SPECTATING";
		case 19:
			return "SHOPS_HANDHELD_FAIL_PLAYER_BRUSHING";
		case 20:
			return "SHOPS_HANDHELD_FAIL_IN_DEEP_WATER";
		case 21:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME";
		case 22:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_ARCHERY";
		case 23:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_CHALLENGE";
		case 24:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_DEAD_DROP";
		case 25:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_GOLDEN_SHOWDOWN";
		case 26:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_HOT_PROPERTY";
		case 27:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_KING_OF_THE_CASTLE";
		case 28:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_KING_OF_THE_RAILS";
		case 29:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_WRECKAGE";
		case 30:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_CONDOR_EGG";
		case 31:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV";
		case 34:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_BIGGEST_FISH";
		case 35:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_FLYING_BIRD";
		case 36:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_HERBALIST";
		case 32:
			return "SHOPS_HANDHELD_FAIL_MISSION_FEUD";
		case 33:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_HUNT_THE_POSSE_LEADER";
		case 37:
			return "SHOPS_HANDHELD_FAIL_PLAYER_MATCHMAKING";
		default:
			break;
	}
	return "";
}

int func_278(int iParam0)
{
	return iParam0;
}

int func_279(int iParam0, int iParam1)
{
	if (!func_458(iParam0, 2))
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

int func_280(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 49)
	{
		if (func_513(iVar0, iParam0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_281(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_514(iParam0))
	{
		return 1;
	}
	if (!func_515())
	{
		return 5;
	}
	if (!bParam1 && (Global_1199613->f_48[iParam0 /*21*/])->f_17)
	{
		if (bParam2 || Global_1199613->f_1.f_20 != 0)
		{
			return 2;
		}
	}
	if (!bParam2 && !func_516(iParam0))
	{
		return 3;
	}
	if (func_517(iParam0) && !func_518())
	{
		return 4;
	}
	return 0;
}

int func_282(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;

	switch (func_283(iParam0, -949239683))
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
				return 1;
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
				return 1;
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
				return 1;
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
				return 1;
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
				return 1;
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
				return 1;
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
				return 1;
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
				return 1;
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
				return 1;
			}
			break;
		case 871191033:
			if (!bParam1)
			{
				iVar0 = 1290994194;
				if (bParam2)
				{
					iVar0 = -59421711;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
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
				return 1;
			}
			break;
		case 82200319:
			if (!bParam1)
			{
				iVar0 = -1216929452;
				if (bParam2)
				{
					iVar0 = -1140851507;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
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
				return 1;
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
				return 1;
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
				return 1;
			}
			break;
	}
	return 0;
}

int func_283(int iParam0, int iParam1)
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

bool func_284()
{
	return (Global_1951141->f_1657.f_1[1 /*3*/])->f_1 == -282754472;
}

int func_285(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return 0;
	}
	if (func_519(*uParam0, -1725579161, 0))
	{
		return 1;
	}
	return 0;
}

void func_286(int iParam0)
{
	int iVar0;

	iVar0 = 406178289;
	switch (func_520())
	{
		case 0:
			iVar0 = 406178289;
			break;
		case 1:
			iVar0 = 187883304;
			break;
		case 3:
			iVar0 = 38531903;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		if (func_150(iParam0, 1573112293))
		{
			func_522(func_521(iParam0), 1, 1);
		}
		func_523(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_524(iParam0);
		func_76(iParam0, 1, 0, 562618531);
	}
}

void func_287(int iParam0)
{
	int iVar0;

	iVar0 = 16939881;
	switch (func_520())
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
		func_523(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_524(iParam0);
		func_76(iParam0, 1, 0, 562618531);
	}
}

void func_288(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = -45077177;
	switch (func_520())
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
		func_523(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_524(iParam0);
		func_76(iParam0, 1, 0, 562618531);
	}
}

void func_289(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 1700817728;
	switch (func_520())
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
		func_523(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_524(iParam0);
		func_76(iParam0, 1, 0, 562618531);
	}
}

void func_290(int iParam0)
{
	int iVar0;

	iVar0 = -362580870;
	switch (func_520())
	{
		case 0:
			iVar0 = -362580870;
			break;
		case 1:
			iVar0 = -1013825131;
			break;
		case 3:
			iVar0 = -1433021121;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_523(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_524(iParam0);
		func_76(iParam0, 1, 0, 562618531);
	}
}

void func_291(int iParam0)
{
	int iVar0;

	iVar0 = 2105609037;
	switch (func_520())
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
		func_523(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_524(iParam0);
		func_76(iParam0, 1, 0, 562618531);
	}
}

void func_292(int iParam0)
{
	int iVar0;

	iVar0 = 1964324114;
	switch (func_520())
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
		func_523(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_524(iParam0);
		func_76(iParam0, 1, 0, 562618531);
	}
}

void func_293(int iParam0)
{
	int iVar0;

	iVar0 = -1530144981;
	switch (func_520())
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
		func_523(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_524(iParam0);
		func_76(iParam0, 1, 0, 562618531);
	}
}

void func_294(int iParam0)
{
	int iVar0;

	iVar0 = -1074475556;
	switch (func_520())
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
		func_523(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_524(iParam0);
		func_76(iParam0, 1, 0, 562618531);
	}
}

void func_295(int iParam0)
{
	int iVar0;

	iVar0 = 1076410848;
	switch (func_520())
	{
		case 0:
			iVar0 = 1076410848;
			break;
		case 3:
			iVar0 = 1820106865;
			break;
		case 1:
			iVar0 = 1890537641;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_523(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_524(iParam0);
		func_76(iParam0, 1, 0, 562618531);
	}
}

void func_296(int iParam0)
{
	int iVar0;

	iVar0 = 1516413548;
	switch (func_520())
	{
		case 0:
			iVar0 = 1516413548;
			break;
		case 1:
			iVar0 = 1648161053;
			break;
		case 3:
			iVar0 = -1170654725;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_523(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_524(iParam0);
		func_76(iParam0, 1, 0, 562618531);
	}
}

void func_297(int iParam0)
{
	int iVar0;

	iVar0 = -1454586679;
	switch (func_520())
	{
		case 0:
			iVar0 = -1454586679;
			break;
		case 1:
			iVar0 = 1849268701;
			break;
		case 3:
			iVar0 = 881673189;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_523(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_524(iParam0);
		func_76(iParam0, 1, 0, 562618531);
	}
}

void func_298(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 1934039819;
	switch (func_520())
	{
		case 0:
			iVar0 = 1934039819;
			break;
		case 1:
			iVar0 = 1656393367;
			break;
		case 3:
			iVar0 = 1125253485;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		if (!func_523(Global_34, iParam0, iVar0, 1, 0) && bParam1)
		{
			func_524(iParam0);
			func_76(iParam0, 1, 0, 562618531);
		}
	}
	else
	{
		func_524(iParam0);
		func_76(iParam0, 1, 0, 562618531);
	}
}

void func_299(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = -1054661625;
	switch (func_520())
	{
		case 0:
			iVar0 = -1054661625;
			break;
		case 1:
			iVar0 = 1750832898;
			break;
		case 3:
			iVar0 = -1750311991;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		if (!func_523(Global_34, iParam0, iVar0, 1, bParam1) && bParam1)
		{
			func_524(iParam0);
			func_76(iParam0, 1, 0, 562618531);
		}
	}
	else
	{
		func_524(iParam0);
		func_76(iParam0, 1, 0, 562618531);
	}
}

bool func_300(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_301(char* sParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1938417->f_161)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(((*Global_1938417)[iVar0 /*16*/])->f_10), sParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_302(int iParam0)
{
	if (func_300(iParam0, 1))
	{
		func_525(1);
	}
}

int func_303(int iParam0)
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

void func_304(int iParam0)
{
	Global_1951141 = (Global_1951141 || iParam0);
}

void func_305(struct<4> Param0)
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
			if (Global_1951141->f_916 >= 25)
			{
				return;
			}
			if (func_526(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1951141->f_916)
				{
					iVar1 = ((Global_1951141->f_921 + iVar0) % 25);
					if ((&Global_1951141->f_734[iVar1 /*4*/] == Param0 && (Global_1951141->f_734[iVar1 /*4*/])->f_1 == Param0.f_1) && (Global_1951141->f_734[iVar1 /*4*/])->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_527(Param0);
			*(Global_1951141->f_734[Global_1951141->f_922 /*4*/]) = { Param0 };
			Global_1951141->f_916++;
			Global_1951141->f_922 = (Global_1951141->f_922 + 1 % 25);
			func_304(8);
			break;
		case 23:
		case 24:
		case 25:
			if (Global_1951141->f_917 >= 25)
			{
				return;
			}
			if (func_526(Param0))
			{
				return;
			}
			func_527(Param0);
			*(Global_1951141->f_633[Global_1951141->f_917 /*4*/]) = { Param0 };
			Global_1951141->f_917++;
			func_304(8);
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
			if (Global_1951141->f_918 >= 20)
			{
				return;
			}
			if (func_526(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1951141->f_918)
				{
					iVar1 = ((Global_1951141->f_919 + iVar0) % 20);
					if ((&Global_1951141->f_835[iVar1 /*4*/] == Param0 && (Global_1951141->f_835[iVar1 /*4*/])->f_1 == Param0.f_1) && (Global_1951141->f_835[iVar1 /*4*/])->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_527(Param0);
			*(Global_1951141->f_835[Global_1951141->f_920 /*4*/]) = { Param0 };
			Global_1951141->f_918++;
			Global_1951141->f_920 = (Global_1951141->f_920 + 1 % 20);
			func_304(8);
			break;
			break;
	}
}

bool func_306()
{
	return Global_1951141->f_3252;
}

int func_307(int iParam0)
{
	if (func_528())
	{
		return 0;
	}
	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	if (!func_23(iParam0, 1))
	{
		HUD::_0xBFFF81E12A745A5F();
		return 0;
	}
	return 1;
}

bool func_308(int iParam0)
{
	return func_529(iParam0);
}

void func_309(int iParam0, int iParam1)
{
	func_530(iParam0, iParam1);
}

int func_310(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	bVar3 = func_531(iParam0);
	if (func_150(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_532(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_533();
			}
			else
			{
				iVar0 = func_534();
			}
		}
		else if (bVar1)
		{
			iVar0 = func_535();
		}
		else
		{
			iVar0 = func_536();
		}
	}
	else if (func_537(&iVar2))
	{
		if (func_150(iVar2, -1303648999))
		{
			iVar0 = func_533();
		}
		else
		{
			iVar0 = func_534();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_535();
	}
	else
	{
		iVar0 = func_536();
	}
	if (iVar0 != 0)
	{
		Global_1951141->f_3251 = MISC::GET_GAME_TIMER();
		TASK::_TASK_ITEM_INTERACTION(Global_34, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

bool func_311(int iParam0)
{
	return (Global_1951141 && iParam0) != 0;
}

void func_312()
{
	Global_1951141->f_3235 = 0;
	Global_1951141->f_3235.f_1 = 0;
	Global_1951141->f_3235.f_8 = 0;
	Global_1951141->f_3235.f_2 = 0;
	Global_1951141->f_3235.f_3[0] = 0;
	Global_1951141->f_3235.f_3[1] = 0;
	Global_1951141->f_3235.f_3[2] = 0;
	Global_1951141->f_3235.f_3[3] = 0;
	Global_1951141->f_3235.f_9 = 0;
	Global_1951141->f_3235.f_10 = 0;
	Global_1951141->f_3235.f_11 = 0;
	if (Global_1951141->f_3235.f_12)
	{
		PED::_0x13E7320C762F0477(Global_1951141->f_3235.f_13);
	}
	Global_1951141->f_3235.f_12 = 0;
	func_538(32768);
	func_539(1108822547, 8, 6);
}

bool func_313(int iParam0, bool bParam1)
{
	return func_540(iParam0, 0) < func_541(iParam0, bParam1);
}

bool func_314(int iParam0)
{
	var uVar0;

	return func_542(iParam0, &uVar0);
}

void func_315(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_162(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_543(iParam0, &(Global_1951141->f_3109.f_27), Global_1951141->f_3109.f_32.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_543(iParam0, &(Global_1951141->f_3109.f_29), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_543(iParam0, &(Global_1951141->f_3109.f_26), Global_1951141->f_3109.f_32, bParam1);
			break;
		case -525676072:
			bVar1 = func_543(iParam0, &(Global_1951141->f_3109.f_28), Global_1951141->f_3109.f_32.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_543(iParam0, &(Global_1951141->f_3109.f_30), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_543(iParam0, &(Global_1951141->f_3109.f_30), 1, bParam1);
			break;
		default:
			if (func_150(iParam0, -1348134986))
			{
				bVar1 = func_543(iParam0, &(Global_1951141->f_3109.f_29), 1, bParam1);
			}
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_316(0))
	{
		func_544(iParam0, 1);
		if (func_545() == 1160113249)
		{
			func_544(func_316(-2125499975), 0);
		}
		else
		{
			func_544(func_316(1160113249), 0);
		}
	}
	func_546();
	if (func_547(iVar0) || (iVar0 != -999503751 && func_150(iParam0, -166674229)))
	{
		INVENTORY::_0x766315A564594401(func_73(0), iParam0, 0);
	}
	func_169(iParam0, iParam3);
	if (bParam2)
	{
		func_548(0, 0);
	}
}

int func_316(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_545();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846 /* GXTEntry: "John\'s Classic Hat" */;
	}
	return -1535516064 /* GXTEntry: "Arthur\'s Hat" */;
}

void func_317(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_162(iParam1);
	if (iVar0 == func_162(iParam0) || (func_150(iParam0, -1348134986) && func_150(iParam1, -1348134986)))
	{
		func_549(iParam0, iParam1, 1);
		return;
	}
}

int func_318(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1951141->f_81[iVar0 /*12*/])->f_9 == iParam0)
		{
			return func_550(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_319(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_551();
	if (iParam2 == 39)
	{
		Var0 = { func_188(iParam0, 1, 0) };
		iParam2 = func_249(func_318(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return 0;
	}
	if (func_311(32768) && iParam2 == 10)
	{
		func_552(1108822547);
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_553(iParam2);
	func_554(iParam2, iVar5);
	func_555(Global_1951141->f_1538.f_1[iParam2 /*3*/], 4, 6);
	func_555(Global_1951141->f_1657.f_1[iParam2 /*3*/], 4, 6);
	func_556(&(Global_1951141->f_1538), iParam0, iParam2, bParam4);
	if (iParam1 == 0)
	{
		iParam1 = (Global_1951141->f_1538.f_1[iParam2 /*3*/])->f_1;
	}
	Global_1951141->f_1538.f_1[iParam2 /*3*/] = iParam0;
	(Global_1951141->f_1538.f_1[iParam2 /*3*/])->f_1 = func_557(iParam0, iParam2, iParam1);
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1951141->f_2760)
		{
			if (&Global_1951141->f_2760.f_2[iVar6 /*2*/] >= 0 && &Global_1951141->f_2760.f_2[iVar6 /*2*/] < 39)
			{
				Global_1951141->f_2627[&Global_1951141->f_2760.f_2[iVar6 /*2*/] /*2*/] = 0;
				(Global_1951141->f_2627[&Global_1951141->f_2760.f_2[iVar6 /*2*/] /*2*/])->f_1 = 0;
				func_539(func_550(&(Global_1951141->f_2760.f_2[iVar6 /*2*/]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return 1;
}

void func_320(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	func_558(&(Global_1951141->f_2760), bParam0, bParam1, bParam2, bParam3);
}

int func_321(int iParam0, bool bParam1)
{
	if (!func_90(iParam0, 0))
	{
	}
	if (!bParam1 && (iParam0 == -1713496139 || iParam0 == -598283164))
	{
		return 0;
	}
	if (func_150(iParam0, 265372629))
	{
		return 1;
	}
	return 0;
}

int func_322(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<5> Var4;
	int iVar9;

	Var4 = { func_188(iParam0, 0, 0) };
	if (func_321(iParam0, 0))
	{
		iVar9 = func_559(Var4, Var4.f_4, 0, -1);
		if (iVar9 != 0)
		{
			Var4 = { func_188(iVar9, 0, 0) };
			Var0 = { func_270(iVar9, Var4, Var4.f_4, 0) };
			return func_560(Var0, 0);
		}
		return 1;
	}
	Var0 = { func_270(iParam0, Var4, Var4.f_4, 0) };
	return func_560(Var0, iParam1);
}

int func_323(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_249(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (&Global_1951141->f_1657.f_1[iVar1 /*3*/] == &Global_1951141->f_81[iVar1 /*12*/] || &Global_1951141->f_1538.f_1[iVar1 /*3*/] == &Global_1951141->f_81[iVar1 /*12*/])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_324(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_325(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_210(iParam0, joaat("default")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_270(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_73(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_73(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

int func_326(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_39.f_277;
	}
	return iParam0;
}

int func_327(int iParam0)
{
	int iVar0;

	iParam0 = func_326(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_173(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (func_561(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_328()
{
	return Global_39.f_277.f_3019;
}

bool func_329()
{
	return Global_1915180->f_21989.f_1;
}

bool func_330()
{
	return Global_1915180->f_21989;
}

void func_331()
{
	PAD::_0x2804658EB7D8A50B(4, 666989068);
}

void func_332(int iParam0)
{
	Global_1051388->f_3578 = iParam0;
}

int func_333()
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return Global_1070356->f_3;
}

bool func_334(int iParam0)
{
	return func_99(((*Global_1128435)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/])->f_73, iParam0);
}

int func_335()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return 1;
	}
	return 0;
}

bool func_336()
{
	return !func_334(2);
}

bool func_337(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1185962->f_1 && iParam0) != 0;
}

void func_338()
{
	if (!UIAPPS::_IS_ANY_APP_RUNNING())
	{
		return;
	}
	UIAPPS::_CLOSE_ALL_APPS();
}

int func_339(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = func_563(bParam2, func_562(), 1, 0, 1, 1, 1, bParam0, bParam1);
	if (!bVar0)
	{
		return 0;
	}
	return 1;
}

void func_340(int iParam0)
{
	Global_1896726->f_390 = iParam0;
}

int func_341(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return ((*Global_1128435)[iVar0 /*83*/])->f_38.f_3;
	}
	return -1;
}

int func_342(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		iVar0 = iParam0;
		iVar1 = 0;
		while (iVar1 <= 7)
		{
			if ((Global_1184573->f_1[iVar1 /*26*/])->f_1 != -1 && func_564(iVar1, 64, iVar0))
			{
				if (bParam1)
				{
					if (&Global_1185132->f_66[iVar1 /*20*/] >= 2)
					{
						return (Global_1184573->f_1[iVar1 /*26*/])->f_1;
					}
				}
				else if (&Global_1185132->f_66[iVar1 /*20*/] >= 5)
				{
					return (Global_1184573->f_1[iVar1 /*26*/])->f_1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_343(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return &(Global_1185132->f_1[iParam0 /*4*/]);
}

var func_344(int iParam0, int iParam1)
{
	return func_565(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_345(struct<19> Param0, var uParam19, bool bParam20, bool bParam21)
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
				func_566(&(Global_1070356->f_21258), Var0);
				return;
			}
		}
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param0, 19, 5, &uParam19);
}

void func_346()
{
	Global_1913166->f_1583 = MISC::GET_GAME_TIMER();
	Global_1913166->f_1581 = 1;
}

void func_347(int iParam0, int iParam1, var uParam2)
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

bool func_348()
{
	return !&Global_1912978;
}

void func_349(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1912978->f_3)
	{
		if ((((&Global_1912978->f_4[iVar0 /*6*/] == iParam0 && (Global_1912978->f_4[iVar0 /*6*/])->f_2 == bParam2) && (Global_1912978->f_4[iVar0 /*6*/])->f_3 == bParam3) && (Global_1912978->f_4[iVar0 /*6*/])->f_4 == bParam4) && (Global_1912978->f_4[iVar0 /*6*/])->f_5 == bParam5)
		{
			(Global_1912978->f_4[iVar0 /*6*/])->f_1 = ((Global_1912978->f_4[iVar0 /*6*/])->f_1 + iParam1);
			return;
		}
		iVar0++;
	}
	if (Global_1912978->f_3 < 19)
	{
		Global_1912978->f_4[Global_1912978->f_3 /*6*/] = iParam0;
		(Global_1912978->f_4[Global_1912978->f_3 /*6*/])->f_1 = iParam1;
		(Global_1912978->f_4[Global_1912978->f_3 /*6*/])->f_2 = bParam2;
		(Global_1912978->f_4[Global_1912978->f_3 /*6*/])->f_3 = bParam3;
		(Global_1912978->f_4[Global_1912978->f_3 /*6*/])->f_4 = bParam4;
		(Global_1912978->f_4[Global_1912978->f_3 /*6*/])->f_5 = bParam5;
		Global_1912978->f_3++;
	}
}

char* func_350(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_351(int iParam0, int iParam1)
{
	if (!func_90(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

int func_352(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_353(int iParam0)
{
	if (func_150(iParam0, -1995062316))
	{
		return "collectible_arrowheads";
	}
	if (func_150(iParam0, 1239889275))
	{
		return "collectible_liquor_bottles";
	}
	if (func_150(iParam0, 143267379))
	{
		return "collectible_coins";
	}
	if (func_150(iParam0, -944041124))
	{
		return "colectible_heirlooms";
	}
	if (func_150(iParam0, 1562621600))
	{
		return "collectible_jewelry";
	}
	if (func_150(iParam0, -149719013))
	{
		return "collectible_bird_eggs";
	}
	if (func_150(iParam0, 1940829793))
	{
		return "collectible_tarot_cards";
	}
	if (func_150(iParam0, 781094263))
	{
		return "collectible_flowers";
	}
	return "";
}

int func_354(int iParam0)
{
	int iVar0;

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_567(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

int func_355(int iParam0)
{
	switch (iParam0)
	{
		case -1696039442:
		case 688466329:
		case 759802290:
			return 0;
		default:
			break;
	}
	return 1;
}

int func_356(int iParam0)
{
	struct<19> Var0;
	int iVar35;

	if (!func_90(iParam0, 0))
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
			if ((Var0.f_18[iVar35 /*2*/])->f_1 == 14460646)
			{
				if (&Var0.f_18[iVar35 /*2*/] != 0)
				{
					return &(Var0.f_18[iVar35 /*2*/]);
				}
			}
			iVar35++;
		}
	}
	return 0;
}

char* func_357(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_358(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_568(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

int func_359(int iParam0, char* sParam1)
{
	int iVar0;
	char cVar1[128];

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	StringCopy(sParam1, func_569(iParam0), 128);
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (!func_570(iParam0))
	{
		return 0;
	}
	StringCopy(&cVar1, func_571(iParam0), 128);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
		return 0;
	}
	StringConCat(&cVar1, " - ", 128);
	iVar0 = (iVar0 + HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar1));
	StringConCat(&cVar1, sParam1, 128);
	if (iVar0 >= 127)
	{
		return 0;
	}
	*sParam1 = { cVar1 };
	return 1;
}

var func_360(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

char* func_361(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_357(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_362(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_572(sParam0, sParam1, iParam2);
	return uVar20;
}

struct<2> func_363(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

struct<14> func_364(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

struct<4> func_365(bool bParam0)
{
	int iVar0;

	iVar0 = func_73(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_4)))
		{
			Global_1272170->f_4 = { func_270(923904168, func_368(bParam0), -740156546, bParam0) };
		}
		return Global_1272170->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_16)))
		{
			Global_1272170->f_16 = { func_270(923904168, func_368(bParam0), -740156546, 0) };
		}
		return Global_1272170->f_16;
	}
	return func_270(923904168, func_368(bParam0), -740156546, 0);
}

void func_366(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_367(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_73(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

struct<4> func_368(bool bParam0)
{
	int iVar0;

	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_73(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1272170))
			{
				*Global_1272170 = { func_270(joaat("character"), func_463(), -1591664384, bParam0) };
			}
			return *Global_1272170;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_12)))
			{
				Global_1272170->f_12 = { func_270(joaat("character"), func_463(), -1591664384, 0) };
			}
			return Global_1272170->f_12;
		}
	}
	return func_270(joaat("character"), func_463(), -1591664384, bParam0);
}

int func_369(int iParam0, bool bParam1)
{
	if (func_162(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_573();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_370(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_325(iParam0, *uParam1, iParam2, bParam3, 1, iParam4) > 0;
}

int func_371(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_574(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_372(bool bParam0)
{
	int iVar0;

	iVar0 = func_73(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_8)))
		{
			Global_1272170->f_8 = { func_270(271701509, func_368(bParam0), 12999093, 0) };
		}
		return Global_1272170->f_8;
	}
	return func_270(271701509, func_368(bParam0), 12999093, 0);
}

int func_373(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_162(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (func_575(iParam0, iParam1, iVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

bool func_374(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_576(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_375()
{
	if ((Global_1939231->f_10485 != (Global_1939231->f_38.f_203 - 1) || func_578(func_577(0), Global_1939231->f_10478, 0, 1, 1) > 0) || Global_1939231->f_10485 == 15)
	{
		return 1;
	}
	func_579();
	if (Global_1939231->f_6)
	{
		return 1;
	}
	return 0;
}

void func_376(int iParam0)
{
	Global_1939231->f_10 = iParam0;
}

void func_377(int iParam0)
{
	Global_1939231->f_9 = iParam0;
}

void func_378(var uParam0)
{
	StringCopy(&(uParam0->f_18), "CAMP", 8);
}

void func_379(var uParam0)
{
	if (HUD::_DOES_TEXT_DATABASE_EXIST(&(uParam0->f_18)))
	{
		HUD::_TEXT_DATABASE_REQUEST(&(uParam0->f_18));
	}
	TXD::REQUEST_STREAMED_TEXTURE_DICT("satchel_textures", false);
	if (uParam0->f_25)
	{
		return;
	}
	STREAMING::REQUEST_ANIM_DICT("MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A");
	STREAMING::REQUEST_ANIM_DICT("MP_AMB_PLAYER@CRAFTING@FALLBACKS@IN_HAND@FEMALE_A");
	STREAMING::REQUEST_MODEL(809653548, false);
	STREAMING::REQUEST_MODEL(975914773, false);
	STREAMING::REQUEST_MODEL(1537403900, false);
	STREAMING::REQUEST_MODEL(-236347221, false);
	STREAMING::REQUEST_MODEL(-91245513, false);
	STREAMING::REQUEST_MODEL(-655768729, false);
	STREAMING::REQUEST_MODEL(joaat("w_melee_tomahawk01"), false);
	STREAMING::REQUEST_MODEL(joaat("w_melee_knife05"), false);
	STREAMING::REQUEST_MODEL(joaat("p_cs_rag01x"), false);
	STREAMING::REQUEST_MODEL(-467664954, false);
	STREAMING::REQUEST_MODEL(-856043142, false);
	STREAMING::REQUEST_MODEL(-370340297, false);
	STREAMING::REQUEST_MODEL(1974613782, false);
	STREAMING::REQUEST_MODEL(400517539, false);
	STREAMING::REQUEST_MODEL(-1906499827, false);
	func_580(uParam0);
	if (uParam0->f_28)
	{
		STREAMING::REQUEST_MODEL(-194504515, false);
		STREAMING::REQUEST_MODEL(-2049449981, false);
		STREAMING::REQUEST_MODEL(-1172163183, false);
		STREAMING::REQUEST_MODEL(222541312, false);
		STREAMING::REQUEST_MODEL(1289914954, false);
	}
}

int func_380(var uParam0)
{
	if (func_581(&(uParam0->f_18)))
	{
		if (!HUD::_TEXT_DATABASE_HAS_LOADED(&(uParam0->f_18)))
		{
			return 0;
		}
	}
	if (!TXD::HAS_STREAMED_TEXTURE_DICT_LOADED("satchel_textures"))
	{
		return 0;
	}
	if (uParam0->f_25)
	{
		return 1;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A"))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MP_AMB_PLAYER@CRAFTING@FALLBACKS@IN_HAND@FEMALE_A"))
	{
		return 0;
	}
	if (!func_582(uParam0, &(uParam0->f_59)))
	{
		return 0;
	}
	if (!func_582(uParam0, &(uParam0->f_61)))
	{
		return 0;
	}
	if (!func_582(uParam0, &(uParam0->f_62)))
	{
		return 0;
	}
	if (!func_582(uParam0, &(uParam0->f_63)))
	{
		return 0;
	}
	if (!func_582(uParam0, &(uParam0->f_64)))
	{
		return 0;
	}
	if (!func_582(uParam0, &(uParam0->f_65)))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(809653548))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(975914773))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(1537403900))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-236347221))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-655768729))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("w_melee_tomahawk01")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("w_melee_knife05")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-91245513))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-370340297))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-467664954))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-856043142))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(1974613782))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(400517539))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-1906499827))
	{
		return 0;
	}
	if (uParam0->f_28)
	{
		if (!STREAMING::HAS_MODEL_LOADED(-194504515))
		{
			return 0;
		}
		if (!STREAMING::HAS_MODEL_LOADED(-2049449981))
		{
			return 0;
		}
		if (!STREAMING::HAS_MODEL_LOADED(-1172163183))
		{
			return 0;
		}
		if (!STREAMING::HAS_MODEL_LOADED(222541312))
		{
			return 0;
		}
		if (!STREAMING::HAS_MODEL_LOADED(1289914954))
		{
			return 0;
		}
	}
	return 1;
}

int func_381()
{
	int iVar0;
	int iVar1;

	if (!func_537(&iVar0))
	{
		return 0;
	}
	PED::_0x2208438012482A1A(Global_34, false, false);
	PED::_0xC494C76A34266E82(Global_34, 13);
	iVar1 = func_583(iVar0);
	if (iVar1 == -358215195)
	{
		return 0;
	}
	func_584(&(Global_1951141->f_81[func_249(iVar1, 1) /*12*/]), 8);
	func_165(22, 0, 0, 0, 0);
	return 1;
}

int func_382(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	TELEMETRY::_0x78C2E029DB205A3A(iParam0, iParam1);
	return func_585(iParam0, iParam1, bParam2, bParam3, iParam4);
}

int func_383(int iParam0)
{
	int iVar0;

	iVar0 = func_586(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return 1289914954;
}

void func_384(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (bParam2)
	{
		uParam0->f_49.f_21++;
	}
	if (uParam0->f_49.f_33 == -1)
	{
		iVar0 = func_94(uParam0->f_49.f_73, 0, 0, 0);
		iVar1 = func_587(uParam0->f_49.f_73, 0);
		iVar2 = func_218(uParam0->f_49.f_73, uParam0->f_49.f_74, func_394());
		if (iVar1 == -1)
		{
			iVar1 = iVar2;
		}
		else
		{
			iVar1 = (iVar1 - iVar0);
		}
		uParam0->f_49.f_33 = func_588(iVar1, iVar2);
	}
	if (func_234(uParam0->f_49.f_73))
	{
		if (bParam3)
		{
			func_129(&(uParam0->f_149[iParam1]), "CAMP_REC_COOK_AGN", 1);
		}
		else
		{
			func_129(&(uParam0->f_149[iParam1]), "CAMP_REC_COOK", 1);
		}
	}
	else if (bParam3)
	{
		if (func_283(uParam0->f_49.f_73, -1636519629) == -701492487)
		{
			func_129(&(uParam0->f_149[iParam1]), "CAMP_REC_BREW_AGN", 1);
		}
		else
		{
			func_129(&(uParam0->f_149[iParam1]), "CAMP_REC_MAKE_AGN", 1);
		}
	}
	else if (func_283(uParam0->f_49.f_73, -1636519629) == -701492487)
	{
		func_129(&(uParam0->f_149[iParam1]), "CAMP_REC_BREW", 1);
	}
	else
	{
		func_129(&(uParam0->f_149[iParam1]), "CAMP_REC_MAKE", 1);
	}
}

bool func_385()
{
	return &Global_1939008 == 2;
}

void func_386(int iParam0)
{
	if (iParam0 >= &Global_1939008)
	{
		return;
	}
	Global_1939008->f_1 = iParam0;
}

bool func_387()
{
	return &Global_1939008 == 1;
}

void func_388(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	struct<2> Var11;
	struct<7> Var33[20];

	if ((func_150(iParam0, 1573112293) || func_150(iParam0, 672467738)) || func_150(iParam0, -550842268))
	{
		bVar10 = true;
	}
	Var11.f_1 = 20;
	ATTRIBUTE::_0xD962F8579D702DB5();
	Global_1939067->f_26 = 0;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iParam0, &Var11))
	{
		iVar0 = 0;
		while (iVar0 < Var11)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var11.f_1[iVar0]), Var33[iVar0 /*7*/]))
			{
				switch ((Var33[iVar0 /*7*/])->f_1)
				{
					case -943921969:
						uVar1 = func_589(0, (IntToFloat((Var33[iVar0 /*7*/])->f_2) / fParam1));
						func_590((IntToFloat((Var33[iVar0 /*7*/])->f_2) / fParam1));
						bVar9 = true;
						break;
					case -1104847406:
						uVar3 = func_589(2, (IntToFloat((Var33[iVar0 /*7*/])->f_2) / fParam1));
						func_591((IntToFloat((Var33[iVar0 /*7*/])->f_2) / fParam1), 0);
						bVar8 = true;
						break;
					case 381158954:
						uVar2 = func_589(1, (IntToFloat((Var33[iVar0 /*7*/])->f_2) / fParam1));
						func_592((IntToFloat((Var33[iVar0 /*7*/])->f_2) / fParam1));
						break;
					case -416929031:
						fVar4 = func_593((IntToFloat((Var33[iVar0 /*7*/])->f_2) / fParam1), ((Var33[iVar0 /*7*/])->f_5 / fParam1));
						func_594(0, fVar4, 1, 1, bVar10);
						bVar9 = true;
						break;
					case 1857353317:
						fVar5 = func_593((IntToFloat((Var33[iVar0 /*7*/])->f_2) / fParam1), ((Var33[iVar0 /*7*/])->f_5 / fParam1));
						func_594(2, fVar5, 1, 1, bVar10);
						bVar8 = true;
						break;
					case 1681823811:
						fVar6 = func_593((IntToFloat((Var33[iVar0 /*7*/])->f_2) / fParam1), ((Var33[iVar0 /*7*/])->f_5 / fParam1));
						func_594(1, fVar6, 1, 1, bVar10);
						break;
					case -816334026:
						func_595((BUILTIN::TO_FLOAT((Var33[iVar0 /*7*/])->f_2) / fParam1), 1);
						break;
					default:
						if (bParam2)
						{
							switch ((Var33[iVar0 /*7*/])->f_1)
							{
								case 2062242710:
									fVar7 = func_596(BUILTIN::TO_FLOAT((Var33[iVar0 /*7*/])->f_3), (Var33[iVar0 /*7*/])->f_4);
									func_597(19, fVar7, 1, 1);
									bVar9 = true;
									break;
								case -826379728:
									fVar7 = func_596(BUILTIN::TO_FLOAT((Var33[iVar0 /*7*/])->f_3), (Var33[iVar0 /*7*/])->f_4);
									func_597(20, fVar7, 1, 1);
									bVar8 = true;
									break;
								case -1191740624:
									fVar7 = func_596(BUILTIN::TO_FLOAT((Var33[iVar0 /*7*/])->f_3), (Var33[iVar0 /*7*/])->f_4);
									func_597(18, fVar7, 1, 1);
									break;
								case 1869697234:
									fVar7 = func_596(BUILTIN::TO_FLOAT((Var33[iVar0 /*7*/])->f_3), (Var33[iVar0 /*7*/])->f_4);
									func_597(0, fVar7, 1, 1);
									bVar9 = true;
									break;
								case 1342237631:
									fVar7 = func_596(BUILTIN::TO_FLOAT((Var33[iVar0 /*7*/])->f_3), (Var33[iVar0 /*7*/])->f_4);
									func_597(2, fVar7, 1, 1);
									bVar8 = true;
									break;
								case -1240225157:
									fVar7 = func_596(BUILTIN::TO_FLOAT((Var33[iVar0 /*7*/])->f_3), (Var33[iVar0 /*7*/])->f_4);
									func_597(1, fVar7, 1, 1);
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
			func_598(iParam0, bVar8, bVar9, 562618531);
		}
		PLAYER::_0x0E1DB1F8F5B561DC(uVar1, uVar2, uVar3, BUILTIN::ROUND(fVar4), BUILTIN::ROUND(fVar6), BUILTIN::ROUND(fVar5));
	}
}

int func_389(var uParam0)
{
	return uParam0->f_9;
}

int func_390(int iParam0)
{
	int iVar0;

	iVar0 = func_599(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return 1;
	}
	return 0;
}

int func_391(int iParam0)
{
	switch (iParam0)
	{
		case -1433449364:
		case -597629206:
		case -571916863:
		case -518407211:
		case 825619760:
		case 1135271674:
		case 1316803372:
		case 1662215698:
		case 1844142525:
		case 2058555960:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_392(var uParam0, int iParam1)
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

	uVar0[0] = uParam0[1];
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34) || Global_1939178->f_6)
	{
		func_43(uParam0, 0, 1);
	}
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Global_34, false);
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_34, 0, 1);
	if (func_108() != -1 && func_600())
	{
		if (func_136(uParam0[0], 0))
		{
			func_103(uParam0);
			func_111(uParam0);
		}
		return;
	}
	if (uParam0->f_54)
	{
		HUD::_0xC9CAEAEEC1256E54(-469828803);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_Y"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	switch (func_389(uParam0))
	{
		case 2:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (func_601(uParam0))
			{
				func_378(uParam0);
				func_379(uParam0);
				func_602(uParam0);
			}
			if (func_380(uParam0))
			{
				func_44(uParam0, 3);
			}
			break;
		case 3:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (func_108() == 0 && CAM::_0x251241CAEC707106())
			{
				func_103(uParam0);
				return;
			}
			if (func_601(uParam0))
			{
				func_103(uParam0);
				func_602(uParam0);
				if (func_105())
				{
					func_106(0);
				}
			}
			if (((uParam0->f_30 || func_259(uParam0[0], 1)) || func_54(8192)) || uParam0->f_31)
			{
				func_603(uParam0);
			}
			break;
		case 4:
			if (!uParam0->f_54)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_604(uParam0))
			{
				uParam0->f_58 = 1;
				func_44(uParam0, 5);
			}
			break;
		case 5:
			if (!uParam0->f_54)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_605(uParam0))
			{
				func_44(uParam0, 6);
			}
			break;
		case 6:
			if (!uParam0->f_54)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_606(uParam0))
			{
				func_44(uParam0, 7);
			}
			break;
		case 7:
			if (!uParam0->f_54)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_601(uParam0))
			{
				func_607(uParam0);
				func_602(uParam0);
				return;
			}
			if (UIAPPS::_IS_APP_ACTIVE(29649618) || UIAPPS::_IS_APP_RUNNING(29649618))
			{
				return;
			}
			if (func_608(uParam0, 0))
			{
				if (func_609(uParam0, 0) || (uParam0->f_25 && UIAPPS::_IS_APP_ACTIVE(-1624772174)))
				{
					func_44(uParam0, 8);
				}
				else if (uParam0->f_28)
				{
					func_44(uParam0, 1);
				}
				else
				{
					func_44(uParam0, 0);
				}
			}
			break;
		case 15:
			if (!uParam0->f_54)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (!uParam0->f_58)
			{
				func_44(uParam0, 4);
				return;
			}
			if (UIAPPS::_IS_APP_ACTIVE(29649618) || UIAPPS::_IS_APP_RUNNING(29649618))
			{
				return;
			}
			if (func_610(uParam0))
			{
				func_609(uParam0, 1);
				func_44(uParam0, 8);
			}
			break;
		case 8:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (UIAPPS::_IS_APP_ACTIVE(-1624772174))
			{
				if (UISTATEMACHINE::_0xF7C180F57F85D0B8(-1624772174))
				{
					Global_1913166->f_1580 = 0;
					func_44(uParam0, 10);
				}
			}
			break;
		case 9:
			if (!uParam0->f_54)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (UIAPPS::_IS_APP_ACTIVE(29649618) || UIAPPS::_IS_APP_RUNNING(29649618))
			{
				return;
			}
			if (func_601(uParam0))
			{
				func_607(uParam0);
				func_602(uParam0);
				return;
			}
			if (func_608(uParam0, 1))
			{
				func_44(uParam0, 10);
			}
			break;
		case 10:
			func_611(0);
			if (func_601(uParam0))
			{
				func_612(uParam0);
				func_602(uParam0);
			}
			if (func_613(uParam0))
			{
				return;
			}
			if (Global_1913166->f_1580)
			{
				Global_1913166->f_1580 = 0;
				ATTRIBUTE::_0xD962F8579D702DB5();
				func_614(uParam0);
				uParam0->f_73 = 0;
				uParam0->f_74 = 0;
				func_615(uParam0, 0, 0);
				func_130(uParam0[5], 0, 1, 1);
				func_44(uParam0, 9);
			}
			else if (func_616(uParam0[2], 1) || !UIAPPS::_IS_APP_RUNNING(-1624772174))
			{
				if (uParam0->f_30)
				{
					func_44(uParam0, 18);
				}
				else
				{
					func_104(uParam0, 0);
					func_617("Exit", "SSCRFT_Sounds", 1);
					if (uParam0->f_31)
					{
						uParam0->f_31 = 0;
						func_44(uParam0, 1);
					}
					else
					{
						func_44(uParam0, 3);
					}
				}
			}
			else if (func_259(uParam0[7], 1))
			{
				func_618(uParam0);
			}
			else if (func_259(uParam0[1], 1))
			{
				func_619(uParam0);
			}
			else if (func_259(uParam0[3], 1))
			{
				ATTRIBUTE::_0xD962F8579D702DB5();
				uParam0->f_53 = !uParam0->f_53;
				func_614(uParam0);
				func_617("toggle_craftable_all", "SSCRFT_Sounds", 1);
				uParam0->f_73 = 0;
				uParam0->f_74 = 0;
				func_615(uParam0, 0, 0);
				func_130(uParam0[5], 0, 1, 1);
				func_44(uParam0, 9);
			}
			else if (func_620(uParam0[5], 0, 1))
			{
				if (uParam0->f_75)
				{
					func_617("Nav_Left", "SSCRFT_Sounds", 1);
					func_621(uParam0, 0);
				}
			}
			else if (func_620(uParam0[5], 1, 1))
			{
				if (uParam0->f_75)
				{
					func_617("Nav_Right", "SSCRFT_Sounds", 1);
					func_621(uParam0, 1);
				}
			}
			else if (func_616(uParam0[6], 1))
			{
				func_617("toggle_ingredients_effects", "SSCRFT_Sounds", 1);
				func_622(uParam0, 1);
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
							func_623(uParam0);
						}
						else if (vVar3.x == -1740156697)
						{
							func_624(uParam0, &vVar3);
						}
						else if (vVar3.x == -1203660660)
						{
							if (vVar3.z == -2127505795)
							{
								func_619(uParam0);
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
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::_CREATE_VAR_STRING(0, uParam0->f_73), 1, 0, 0, 0);
			func_611(0);
			iVar7 = PED::_0xC22AA08A8ADB87D4(Global_34);
			iVar8 = func_283(uParam0->f_73, -1636519629);
			if (iVar7 == -1433449364 || iVar7 == 2058555960)
			{
				if (!PED::_0x68821369A2CEADD5(Global_34, 1335077954))
				{
					PED::_0xD65FDC686A031C83(Global_34, 1335077954, 6f);
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
				if (iVar7 == -518407211 || iVar7 == 1662215698)
				{
					if (!PED::_0x68821369A2CEADD5(Global_34, 653141085))
					{
						PED::_0xD65FDC686A031C83(Global_34, 653141085, 6f);
						PED::_0x6D07B371E9439019(Global_34);
					}
					return;
				}
				else
				{
					WEAPON::_HIDE_PED_WEAPONS(Global_34, 2, 0);
				}
				if (((((((((iVar8 == 414472632 && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_59, 1, 0)) || (iVar8 == -1136843638 && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_62, 1, 0))) || (uParam0->f_85 != 0 && !STREAMING::HAS_MODEL_LOADED(uParam0->f_85))) || (iVar8 == -732326901 && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_64, 1, 0))) || (iVar8 == 786205940 && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_63, 1, 0))) || (iVar8 == -1141771998 && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_65, 1, 0))) || (iVar8 == 364689687 && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_66, 1, 0))) || (iVar8 == -842117252 && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_67, 1, 0))) || (iVar8 == -1610298873 && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_68, 1, 0)))
				{
					return;
				}
				else if (uParam0->f_60)
				{
					func_625(uParam0);
					uParam0->f_60 = 0;
				}
			}
			else
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_61, 1, 0) || (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_34, 1) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_34, 0)))
				{
					return;
				}
				else if (uParam0->f_60)
				{
					func_625(uParam0);
					uParam0->f_60 = 0;
				}
				if (iVar7 != -518407211 && iVar7 != 1662215698)
				{
					if (uParam0->f_28)
					{
						if ((PED::_0xC488B8C0E52560D8(Global_34) || PED::_0x2DC0E8DCBD3546E9(Global_34)) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 1944546609))
						{
							return;
						}
						if (!PED::_0x68821369A2CEADD5(Global_34, 796456488))
						{
							PED::_0xD65FDC686A031C83(Global_34, 796456488, 2f);
							PED::_0x6D07B371E9439019(Global_34);
						}
						return;
					}
				}
			}
			if (func_601(uParam0))
			{
				func_602(uParam0);
				func_626(uParam0, 0, &uVar0);
				func_625(uParam0);
				if (func_100(uParam0[1]))
				{
					func_120((*uParam0)[1], 1, 1);
				}
				if (func_627(iVar8))
				{
					uParam0->f_49 = 250;
					(*uParam0)[1] = func_255("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, uParam0->f_49, uParam0->f_49 + 1, 1, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
					func_615(uParam0, uParam0->f_73, uParam0->f_74);
					func_126(uParam0[1], -1067771379, 0, 1);
					func_257(uParam0[1], 10, 1, 1);
					func_257(uParam0[1], 11, 1, 1);
					func_130(uParam0[1], 0, 1, 1);
				}
				else
				{
					(*uParam0)[1] = func_255("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, 250, 251, 1, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
					func_126(uParam0[1], -1067771379, 0, 1);
					func_256(uParam0[1], 1, 1);
					func_257(uParam0[1], 10, 1, 1);
					func_257(uParam0[1], 11, 1, 1);
					func_130(uParam0[1], 0, 1, 1);
				}
				return;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -563455375))
			{
				PAD::_0x5F217BC1190503D8("CRFT_BLIP_LIGHT", 0.2f);
			}
			if (func_627(iVar8))
			{
				if (!uParam0->f_32)
				{
					if (func_136(uParam0[1], 0))
					{
						if (func_400(uParam0[1], 1) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_GAME_MENU_ACCEPT")))
						{
							uParam0->f_32 = 1;
							func_130(uParam0[1], 0, 1, 1);
							func_130(uParam0[4], 0, 1, 1);
						}
					}
				}
				if ((((((iVar8 == -1136843638 || iVar8 == -732326901) || iVar8 == 786205940) || iVar8 == -1141771998) || iVar8 == 364689687) || iVar8 == -842117252) || iVar8 == -1610298873)
				{
					if (uParam0->f_85 != 0)
					{
						if ((uParam0->f_85 == 1186037675 && ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -1011038463)) || (uParam0->f_85 != 1186037675 && ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 2024314131)))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_81))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_81))
								{
									OBJECT::DELETE_OBJECT(&(uParam0->f_81));
								}
								else
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_81);
								}
							}
							if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_81))
							{
								if (func_150(uParam0->f_73, -1588156645) && iVar8 != -842117252)
								{
									uParam0->f_81 = WEAPON::_CREATE_WEAPON_OBJECT(func_193(uParam0->f_73, 0), 1, Global_35, 1, 1065353216);
									ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_81, false, false);
									if (iVar8 == -1610298873)
									{
										ANIMSCENE::SET_ANIM_SCENE_ENTITY(func_628(uParam0, iVar8), "DYNAMITE", uParam0->f_81, 0);
									}
								}
								else
								{
									uParam0->f_81 = OBJECT::CREATE_OBJECT(uParam0->f_85, Global_35, true, NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, false);
									ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_81, false, false);
								}
								if (iVar8 == 786205940)
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_81, Global_34, PED::GET_PED_BONE_INDEX(Global_34, 37709), 0f, 0.5f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0, 0);
								}
								else if (iVar8 == -1141771998 || iVar8 == -1610298873)
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_81, Global_34, PED::GET_PED_BONE_INDEX(Global_34, 37709), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0, 0);
								}
								else if (iVar8 == -842117252)
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_81, Global_34, PED::GET_PED_BONE_INDEX(Global_34, 37709), 0f, 0f, 0.1f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0, 0);
								}
								else if (iVar8 == -1136843638 && !PED::IS_PED_MALE(Global_34))
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_81, Global_34, PED::GET_PED_BONE_INDEX(Global_34, 7966), 0f, 0.5f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0, 0);
								}
								else
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_81, Global_34, PED::GET_PED_BONE_INDEX(Global_34, 7966), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0, 0);
								}
							}
						}
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 966057053))
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_81))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_81))
							{
								OBJECT::DELETE_OBJECT(&(uParam0->f_81));
							}
							else
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_81);
							}
						}
						if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_81))
						{
							if (iVar8 == -732326901 || iVar8 == 364689687)
							{
								uParam0->f_81 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("weapon_thrown_throwing_knives"), 1, Global_35, 1, 1065353216);
							}
							else if (iVar8 == -1141771998)
							{
								uParam0->f_81 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("weapon_thrown_tomahawk"), 1, Global_35, 1, 1065353216);
							}
							else if (iVar8 == -842117252)
							{
								if (uParam0->f_73 == 963726415)
								{
									uParam0->f_81 = OBJECT::CREATE_OBJECT(400517539, Global_35, true, NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, true);
								}
								else
								{
									uParam0->f_81 = OBJECT::CREATE_OBJECT(-370340297, Global_35, true, NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, true);
								}
							}
							else if (iVar8 == -1610298873)
							{
								uParam0->f_81 = OBJECT::CREATE_OBJECT(1974613782, Global_35, true, NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, true);
								if (iVar8 == -1610298873)
								{
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(func_628(uParam0, iVar8), "DYNAMITE", uParam0->f_81, 0);
								}
							}
							else
							{
								uParam0->f_81 = OBJECT::CREATE_OBJECT(-655768729, Global_35, true, NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, false);
							}
						}
						ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_81, false, false);
						if (iVar8 == 786205940)
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_81, Global_34, PED::GET_PED_BONE_INDEX(Global_34, 37709), 0f, 0.5f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0, 0);
						}
						else if ((iVar8 == -1141771998 || iVar8 == -1610298873) || iVar8 == -842117252)
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_81, Global_34, PED::GET_PED_BONE_INDEX(Global_34, 37709), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0, 0);
						}
						else if (iVar8 == -1136843638 && !PED::IS_PED_MALE(Global_34))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_81, Global_34, PED::GET_PED_BONE_INDEX(Global_34, 7966), 0f, 0.5f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0, 0);
						}
						else
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_81, Global_34, PED::GET_PED_BONE_INDEX(Global_34, 7966), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0, 0);
						}
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 1394836706))
					{
						func_98(&(uParam0->f_81), &(uParam0->f_82));
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 1471149551))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_83))
						{
							ENTITY::SET_ENTITY_VISIBLE(uParam0->f_83, true);
						}
					}
				}
				else if (iVar8 == 414472632 || iVar8 == -715814988)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 966057053))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_79, true);
					}
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -61921192))
				{
					if (func_78(0) && !func_79())
					{
						func_382(uParam0->f_73, uParam0->f_74, 1, func_394(), 0);
						func_80(uParam0->f_73, 1, 0, 1, 0);
					}
					if (iVar8 == -842117252)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_81))
						{
							func_98(&(uParam0->f_81), &(uParam0->f_82));
						}
					}
					uParam0->f_21++;
					uParam0->f_34++;
					if ((!func_629(uParam0->f_73, uParam0->f_74, 0, func_394(), 0) || func_403(uParam0->f_73, 1, 0)) || uParam0->f_21 >= uParam0->f_33)
					{
						if (!func_78(0) || func_79())
						{
							uParam0->f_22 = func_109(uParam0->f_73, uParam0->f_74, uParam0->f_34);
							uParam0->f_34 = 0;
						}
						func_630(uParam0, iVar8, 0);
						return;
					}
				}
				if (!uParam0->f_32)
				{
					if (!(func_136(uParam0[1], 0) && PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_GAME_MENU_ACCEPT"))))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 596390595))
						{
							if (!func_78(0) || func_79())
							{
								uParam0->f_22 = func_109(uParam0->f_73, uParam0->f_74, uParam0->f_34);
								uParam0->f_34 = 0;
							}
							func_630(uParam0, iVar8, 1);
						}
					}
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 1290366555) && uParam0->f_21 < (uParam0->f_33 - 1))
				{
					func_130(uParam0[1], 1, 1, 1);
					func_130(uParam0[4], 1, 1, 1);
					uParam0->f_32 = 0;
				}
				if (ANIMSCENE::_0xB89FCFF19DAFFF28(func_628(uParam0, iVar8), "player"))
				{
					if (!func_78(0) || func_79())
					{
						uParam0->f_22 = func_109(uParam0->f_73, uParam0->f_74, uParam0->f_34);
						uParam0->f_34 = 0;
					}
					func_630(uParam0, iVar8, 0);
				}
			}
			else if (func_27(&(uParam0->f_86), (IntToFloat(uParam0->f_49) / 1000f)))
			{
				if (!func_78(0) || func_79())
				{
					if (uParam0->f_22 == -1)
					{
						uParam0->f_22 = func_109(uParam0->f_73, uParam0->f_74, 1);
						if (uParam0->f_22 == -1)
						{
							func_630(uParam0, iVar8, 0);
						}
					}
					else if (func_390(uParam0->f_22))
					{
					}
					uParam0->f_22 = -1;
				}
				else
				{
					func_382(uParam0->f_73, uParam0->f_74, 1, func_394(), 0);
					func_80(uParam0->f_73, 1, 1, 1, 0);
				}
				uParam0->f_33 = -1;
				uParam0->f_34 = 0;
				func_53(131072);
				func_98(&(uParam0->f_81), &(uParam0->f_82));
				uParam0->f_51 = 0;
				bVar9 = true;
				if (!func_629(uParam0->f_73, uParam0->f_74, 0, func_394(), 0) || func_403(uParam0->f_73, 1, 0))
				{
					bVar9 = false;
				}
				func_630(uParam0, iVar8, bVar9);
			}
			break;
		case 0:
			if (func_105())
			{
				func_106(0);
			}
			if (func_601(uParam0))
			{
				func_103(uParam0);
				func_602(uParam0);
			}
			break;
		case 13:
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::_CREATE_VAR_STRING(0, uParam0->f_73), 1, 0, 0, 0);
			func_611(0);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_83))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -2015667492))
				{
					func_98(&(uParam0->f_83), &(uParam0->f_84));
				}
			}
			if (!func_63(128))
			{
				if (!func_136(uParam0[2], 0))
				{
					func_130(uParam0[2], 1, 1, 1);
					func_256(uParam0[2], 0, 1);
				}
				if (!func_136(uParam0[4], 0))
				{
					func_130(uParam0[4], 1, 1, 1);
					func_256(uParam0[4], 1, 1);
				}
			}
			if (func_616(uParam0[2], 1))
			{
				func_103(uParam0);
				func_262(&(uParam0->f_86));
				func_44(uParam0, 14);
				return;
			}
			else if (func_124(uParam0[4], 1))
			{
				func_103(uParam0);
				func_98(&(uParam0->f_81), &(uParam0->f_82));
				func_98(&(uParam0->f_79), &(uParam0->f_80));
				func_98(&(uParam0->f_83), &(uParam0->f_84));
				iVar10 = PED::_0x569F1E1237508DEB(Global_34);
				if (iVar10 != -518407211 && iVar10 != 1662215698)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("weapon_unarmed"), true, 0, false, false);
				}
				iVar8 = func_283(uParam0->f_73, -1636519629);
				iVar11 = func_628(uParam0, iVar8);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iVar11, "player", Global_34);
				func_104(uParam0, 0);
				func_617("Exit", "SSCRFT_Sounds", 1);
				if (uParam0->f_28)
				{
					func_44(uParam0, 1);
				}
				else
				{
					func_44(uParam0, 0);
				}
				return;
			}
			else if (func_259(uParam0[1], 1))
			{
				func_130(uParam0[4], 0, 1, 1);
				func_130(uParam0[2], 0, 1, 1);
				func_130(uParam0[1], 0, 1, 1);
				iVar8 = func_283(uParam0->f_73, -1636519629);
				iVar12 = func_628(uParam0, iVar8);
				if (iVar12 != 0)
				{
					ANIMSCENE::RESET_ANIM_SCENE(iVar12, "pl_craft");
					ANIMSCENE::LOAD_ANIM_SCENE(iVar12);
				}
				func_262(&(uParam0->f_86));
				uParam0->f_32 = 0;
				func_44(uParam0, 12);
				return;
			}
			if (func_263(uParam0[4], 1))
			{
				if (!func_95(&(uParam0->f_86)))
				{
					func_29(&(uParam0->f_86));
				}
				else if (func_27(&(uParam0->f_86), 0.1f))
				{
					func_129(uParam0[4], "CAMP_REC_QUIT", 1);
				}
			}
			else
			{
				if (func_95(&(uParam0->f_86)))
				{
					func_262(&(uParam0->f_86));
				}
				func_129(uParam0[4], "CAMP_REC_BACK", 1);
			}
			break;
		case 14:
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::_CREATE_VAR_STRING(0, uParam0->f_73), 1, 0, 0, 0);
			func_611(0);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_83))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -2015667492))
				{
					func_98(&(uParam0->f_83), &(uParam0->f_84));
				}
			}
			iVar8 = func_283(uParam0->f_73, -1636519629);
			iVar13 = func_628(uParam0, iVar8);
			if ((iVar13 == 0 || (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar13) || ANIMSCENE::_0xF94692EB9DC15D74(iVar13, 0))) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -1208591336))
			{
				func_98(&(uParam0->f_81), &(uParam0->f_82));
				func_98(&(uParam0->f_79), &(uParam0->f_80));
				func_98(&(uParam0->f_83), &(uParam0->f_84));
				iVar14 = PED::_0x569F1E1237508DEB(Global_34);
				if (iVar14 != -518407211 && iVar14 != 1662215698)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("weapon_unarmed"), true, 0, false, false);
				}
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iVar13, "player", Global_34);
				func_44(uParam0, 15);
			}
			break;
		case 16:
			iVar15 = func_631();
			if (iVar15 == PLAYER::PLAYER_ID())
			{
				uParam0->f_22 = func_109(uParam0->f_73, uParam0->f_74, 1);
				func_44(uParam0, 17);
			}
			else if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar15) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar15))
			{
				func_44(uParam0, 10);
			}
			else if (func_27(&(uParam0->f_86), 5f))
			{
				func_262(&(uParam0->f_86));
				func_44(uParam0, 10);
			}
			break;
		case 17:
			if (!func_390(uParam0->f_22))
			{
				if (func_599(uParam0->f_22) != 3)
				{
					func_632(0);
				}
				else
				{
					func_633(uParam0->f_73);
					PED::_0xD65FDC686A031C83(Global_34, -752808711, 1f);
					func_634(uParam0);
					if (func_150(uParam0->f_73, -2011345500))
					{
						func_470(-1266356243, 0, 255, 0, 0);
					}
					uParam0->f_27 = uParam0->f_73;
				}
				func_44(uParam0, 15);
			}
			else
			{
				func_635(1);
				HUD::_UIPROMPT_DISABLE_PROMPTS_THIS_FRAME();
				PAD::DISABLE_ALL_CONTROL_ACTIONS(2);
			}
			break;
		case 1:
			if (func_105())
			{
				func_106(0);
			}
			if (func_601(uParam0))
			{
				if (func_100(uParam0[0]))
				{
					func_130(uParam0[0], 0, 1, 1);
				}
				func_602(uParam0);
			}
			break;
		case 18:
			if (func_105())
			{
				func_106(0);
			}
			if (func_601(uParam0))
			{
				func_602(uParam0);
			}
			if (uParam0->f_25)
			{
				TASK::CLEAR_PED_TASKS(Global_34, 1, 0);
			}
			func_104(uParam0, 0);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_35);
			Global_1913166->f_1576 = 0;
			SCRIPTS::TERMINATE_THIS_THREAD();
			break;
	}
}

void func_393(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (uParam0->f_49.f_74 == 278772510)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		func_192(func_191(1281481195), 1);
	}
	STATS::_0x378D3B1B11D9385B(uParam0->f_49.f_73);
	func_46(16384);
	func_53(65536);
	func_48(16);
	if (func_78(0) && !func_79())
	{
		func_382(uParam0->f_49.f_73, uParam0->f_49.f_74, 1, func_394(), 0);
	}
	func_120(uParam0->f_149[3], 1, 1);
	if (bVar0)
	{
		iVar1 = 7000;
		iVar2 = 10000;
		if (func_15(uParam0->f_139, 16384))
		{
			iVar1 = BUILTIN::ROUND((IntToFloat(iVar1) * 0.8f));
			iVar2 = BUILTIN::ROUND((IntToFloat(iVar2) * 0.8f));
		}
		uParam0->f_149[3] = func_255("CRAFT_FASTER", joaat("INPUT_GAME_MENU_ACCEPT"), 2, 0, 0, 6, iVar1, iVar2, 35, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	else
	{
		iVar1 = 7000;
		iVar2 = 10000;
		if (func_15(uParam0->f_139, 16384))
		{
			iVar1 = BUILTIN::ROUND((IntToFloat(iVar1) * 0.8f));
			iVar2 = BUILTIN::ROUND((IntToFloat(iVar2) * 0.8f));
		}
		uParam0->f_149[3] = func_255("CRAFT_FASTER", joaat("INPUT_GAME_MENU_ACCEPT"), 2, 0, 0, 6, iVar1, iVar2, 25, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	func_384(uParam0, 3, 0, 0);
	func_130(&(uParam0->f_149[3]), 0, 1, 1);
	func_126(&(uParam0->f_149[3]), -1067771379, 0, 1);
	uParam0->f_164 = MISC::GET_GAME_TIMER();
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_147))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_147));
	}
	uParam0->f_147 = OBJECT::CREATE_OBJECT(func_383(uParam0->f_49.f_73), Global_35, false, false, false, false, true);
	if (PED::_0x3BBDD6143FF16F98(Global_34, uParam0->f_147, "p_meatChunks01x_PH_L_HAND", 0, 0, 1))
	{
	}
	ENTITY::SET_ENTITY_VISIBLE(uParam0->f_147, false);
	OBJECT::_SET_OBJECT_BURN_LEVEL(uParam0->f_147, 0f, 1);
	uParam0->f_176 = 3;
	func_103(&(uParam0->f_49));
	func_44(&(uParam0->f_49), 0);
	func_395();
	AUDIO::_0xAC84686C06184B0D("cooking", "Player_Campfire_Scenes");
	func_60(uParam0, 9);
}

int func_394()
{
	int iVar0;
	int iVar1;

	iVar0 = func_173(7);
	if (!PED::IS_PED_INJURED(iVar0))
	{
		if (func_50(Global_34, iVar0, 1) < 400f)
		{
			iVar1 = 1;
		}
	}
	return iVar1;
}

int func_395()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_306())
	{
		return 0;
	}
	if (!func_537(&iVar0))
	{
		return 0;
	}
	if (!func_307(iVar0))
	{
		return 0;
	}
	iVar1 = func_583(iVar0);
	if (iVar1 == -358215195)
	{
		return 0;
	}
	func_309(&iVar2, 1);
	return func_310(iVar0, iVar2);
}

bool func_396(int iParam0)
{
	return func_99(Global_1939067->f_38, iParam0);
}

void func_397(var uParam0, int iParam1)
{
	bool bVar0;

	if (func_263(&(uParam0->f_149[3]), 1))
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
		case 1412614124:
		case 2134236454:
			if (bVar0)
			{
				if (func_72(uParam0))
				{
					if (func_75(1868334347, 0.5f))
					{
						uParam0->f_164 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
		case -341412437:
		case -283636008:
			if (!bVar0)
			{
				if (func_72(uParam0))
				{
					if (func_75(-1169480623, 0.5f))
					{
						uParam0->f_164 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
		case 512684539:
		case 970934364:
			if (bVar0)
			{
				if (func_72(uParam0))
				{
					if (func_75(-348575163, 0.5f))
					{
						uParam0->f_164 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
		case -87088667:
		case -8536912:
			if (!bVar0)
			{
				if (func_72(uParam0))
				{
					if (func_75(-266297705, 0.5f))
					{
						uParam0->f_164 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
	}
}

void func_398(var uParam0)
{
	if (!func_100(&(uParam0->f_149[5])))
	{
		return;
	}
	if (!func_396(2))
	{
		func_130(&(uParam0->f_149[5]), 0, 1, 1);
		return;
	}
	if (func_390(uParam0->f_49.f_22))
	{
		func_130(&(uParam0->f_149[5]), 0, 1, 1);
		return;
	}
	func_401();
	func_130(&(uParam0->f_149[5]), 1, 1, 1);
}

void func_399(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		uParam0->f_149[3] = func_255("CRAFT_FASTER", joaat("INPUT_GAME_MENU_ACCEPT"), 2, 0, 0, 0, 7000, 10000, 25, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		func_384(uParam0, 3, 0, 1);
		func_130(&(uParam0->f_149[3]), 0, 1, 1);
		func_126(&(uParam0->f_149[3]), -1067771379, 0, 1);
	}
	uParam0->f_149[7] = func_255("CAMP_REC_BACK", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	uParam0->f_149[1] = func_255("CAMP_REC_BACK", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("MEDIUM_TIMED_EVENT"), 0);
	func_258(uParam0->f_149[1], "INPUT_PCRAFT_EXIT");
	func_256(&(uParam0->f_149[7]), 0, 1);
	func_126(&(uParam0->f_149[7]), -1067771379, 0, 1);
	func_126(&(uParam0->f_149[1]), -1067771379, 0, 1);
	func_257(&(uParam0->f_149[1]), 19, 1, 1);
	func_257(&(uParam0->f_149[1]), 20, 1, 1);
	func_257(&(uParam0->f_149[1]), 13, 1, 1);
	func_257(&(uParam0->f_149[7]), 13, 1, 1);
	func_130(&(uParam0->f_149[7]), 0, 1, 1);
	func_130(&(uParam0->f_149[1]), 0, 1, 1);
}

bool func_400(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_100(iParam0))
	{
		return false;
	}
	iVar0 = func_229(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

void func_401()
{
	HUD::_0xC9CAEAEEC1256E54(func_636(2));
	HUD::_0xC9CAEAEEC1256E54(func_636(0));
	HUD::_0xC9CAEAEEC1256E54(func_636(1));
	HUD::_0xC9CAEAEEC1256E54(func_637(2));
	HUD::_0xC9CAEAEEC1256E54(func_637(0));
	HUD::_0xC9CAEAEEC1256E54(func_637(1));
}

void func_402(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_100(iParam0))
	{
		return;
	}
	iVar0 = func_229(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

bool func_403(int iParam0, int iParam1, bool bParam2)
{
	struct<5> Var0;

	Var0 = { func_188(iParam0, 0, 0) };
	return func_219(iParam0, &Var0, iParam1, 0, bParam2, -1, 0);
}

float func_404(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_100(iParam0))
	{
		return 0f;
	}
	iVar0 = func_229(iParam0);
	if (HUD::_UIPROMPT_HAS_MASH_MODE(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return HUD::_UIPROMPT_GET_MASH_MODE_PROGRESS(((*Global_1949759)[iVar0 /*23*/])->f_3);
	}
	return HUD::_0x81801291806DBC50(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

float func_405(float fParam0, float fParam1, float fParam2)
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

void func_406(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_136(&(uParam0->f_149[3]), 0))
		{
			if (((func_100(&(uParam0->f_149[3])) && (uParam0->f_49.f_73 == -1199896558 || !func_403(uParam0->f_49.f_73, 1, 0))) && !func_390(uParam0->f_49.f_22)) && func_629(uParam0->f_49.f_73, uParam0->f_49.f_74, 0, func_394(), 0))
			{
				func_130(&(uParam0->f_149[3]), 1, 1, 1);
			}
		}
	}
	if (!func_136(&(uParam0->f_149[7]), 0))
	{
		func_130(&(uParam0->f_149[7]), 1, 1, 1);
		func_256(&(uParam0->f_149[7]), 0, 1);
	}
	if (!func_136(&(uParam0->f_149[1]), 0))
	{
		func_130(&(uParam0->f_149[1]), 1, 1, 1);
	}
}

void func_407(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_120((*uParam0)[iVar0], 1, 1);
		iVar0++;
	}
}

void func_408(var uParam0)
{
	int iVar0;
	int iVar1;

	func_120(uParam0->f_149[3], 1, 1);
	iVar0 = 6000;
	iVar1 = 10000;
	if (func_15(uParam0->f_139, 16384))
	{
		iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * 0.8f));
		iVar1 = BUILTIN::ROUND((IntToFloat(iVar1) * 0.8f));
	}
	uParam0->f_149[3] = func_255("CRAFT_FASTER", joaat("INPUT_GAME_MENU_ACCEPT"), 2, 0, 0, 6, iVar0, iVar1, 25, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	func_384(uParam0, 3, 0, 0);
	func_126(&(uParam0->f_149[3]), -1067771379, 0, 1);
	if (func_78(0) && !func_79())
	{
		func_382(uParam0->f_49.f_73, uParam0->f_49.f_74, 1, func_394(), 0);
	}
	func_130(&(uParam0->f_149[3]), 0, 1, 1);
	func_395();
	uParam0->f_164 = MISC::GET_GAME_TIMER();
	AUDIO::_0xAC84686C06184B0D("crafting", "Player_Campfire_Scenes");
	func_60(uParam0, 1);
}

int func_409(int iParam0)
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

int func_410(int iParam0)
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

int func_411(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
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
		iVar1 = func_162(iParam1);
		iVar5 = func_638(iParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &iVar2))
			{
				if (func_575(iParam0, iVar1, iVar2))
				{
					*uParam4 = { func_188(iParam1, 0, 0) };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { func_270(iParam1, *uParam4, uParam4->f_4, 0) };
					*iParam2 = iVar2;
					return 1;
				}
			}
			iVar0++;
		}
		if (bParam5)
		{
			Var6.f_9 = -1591664384;
			Var20.f_9 = -1591664384;
			iVar34 = func_73(0);
			Var37 = { func_188(iParam1, 0, 0) };
			if (iParam6 != 0)
			{
				Var37.f_4 = iParam6;
			}
			Var42 = { func_270(iParam1, Var37, Var37.f_4, 0) };
			iVar35 = INVENTORY::_0xE843D21A8E2498AA(iVar34, &Var42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (INVENTORY::_0xCD9A485F2B383B44(iVar34, &Var42, iVar36, &Var6))
				{
					iVar1 = func_162(Var6.f_4);
					iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &iVar2))
						{
							if (func_575(iParam0, iVar1, iVar2))
							{
								if (func_639(Var42, Var6.f_9, &Var20, 0, -1))
								{
									uParam4->f_4 = Var6.f_9;
									*uParam4 = { Var6.f_5 };
									*uParam3 = { Var20 };
									*iParam2 = iVar2;
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

struct<4> func_412()
{
	struct<4> Var0;

	Var0 = { func_368(0) };
	return func_270(856287005, Var0, -218846335, 0);
}

int func_413(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_219(iParam0, uParam2, iParam3, bParam5, 0, -1, 0))
	{
		return 0;
	}
	if (!func_78(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_73(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_414(int iParam0, int iParam1)
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

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	if (!func_411(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return 0;
	}
	Var10 = { func_412() };
	Var14 = { func_270(iParam0, Var10, iVar9, 0) };
	if (func_560(Var14, iParam1))
	{
		if (func_640(iParam0))
		{
			if (func_641(325139909, &iVar18))
			{
				if (func_414(iVar18, 0))
				{
				}
			}
		}
		else if (func_642(iParam0))
		{
			if (func_641(325139909, &iVar19))
			{
				if (func_414(iVar19, 0))
				{
				}
			}
			if (func_641(-1189569496, &iVar20))
			{
				if (func_414(iVar20, 0))
				{
				}
			}
		}
		else if (func_643(iParam0))
		{
			if (func_641(325139909, &iVar21))
			{
				if (func_414(iVar21, 0))
				{
				}
			}
			if (func_641(-1189569496, &iVar22))
			{
				if (func_414(iVar22, 0))
				{
				}
			}
			if (func_641(-997150586, &iVar23))
			{
				if (func_414(iVar23, 0))
				{
				}
			}
		}
		else if (func_415(iParam0))
		{
			if (func_641(325139909, &iVar24))
			{
				if (func_414(iVar24, 0))
				{
				}
			}
			if (func_641(986998820, &iVar25))
			{
				if (func_414(iVar25, 0))
				{
				}
			}
			iVar26 = func_416(iParam0);
			if (func_90(iVar26, 0))
			{
				if (func_414(iVar26, 1))
				{
				}
			}
		}
		func_417();
		return 1;
	}
	return 0;
}

int func_415(int iParam0)
{
	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	if (func_150(iParam0, -251515357))
	{
		return 1;
	}
	return 0;
}

int func_416(int iParam0)
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

int func_417()
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

	Var0 = { func_188(856287005, 0, 0) };
	Var5 = { func_270(856287005, Var0, Var0.f_4, 0) };
	iVar10 = func_162(856287005);
	if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, 0, &iVar11))
	{
		iVar14 = func_559(Var5, -415648720, 0, -1);
	}
	if (!func_90(iVar14, 0))
	{
		return 0;
	}
	bVar15 = false;
	iVar20 = func_638(856287005);
	iVar9 = 0;
	while (iVar9 < iVar20)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, iVar9, &iVar11))
		{
			bVar15 = false;
			iVar21 = func_559(Var5, iVar11, 0, -1);
			if (!func_90(iVar21, 0))
			{
				if (iVar11 == 325139909)
				{
					if (((func_415(iVar14) || func_640(iVar14)) || func_642(iVar14)) || func_643(iVar14))
					{
					}
					else
					{
						Jump @307; //curOff = 220
						if (iVar11 == -1189569496)
						{
							if (func_642(iVar14) || func_643(iVar14))
							{
							}
							else
							{
								Jump @307; //curOff = 257
								if (iVar11 == -997150586)
								{
									if (func_643(iVar14))
									{
									}
									else
									{
										Jump @307; //curOff = 282
										if (iVar11 == 986998820)
										{
											if (func_415(iVar14))
											{
											}
											else
											{
												bVar15 = true;
												Jump @347; //curOff = 310
												if (iVar11 == -1189569496)
												{
													if (!func_415(iVar14) && func_644(iVar21))
													{
														bVar15 = true;
													}
												}
												if (bVar15)
												{
													if (func_645(iVar11, &Var16, 1))
													{
														if (!func_560(Var16, 1))
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

int func_418(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_108() == -1)
	{
		if (func_459(iParam0) && func_646(iParam0))
		{
			func_647(iParam0, iParam1, 1, &bParam2, iParam3);
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

int func_419(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_648(iParam0, iParam1);
	Var0 = { func_188(iParam0, 0, 1) };
	iVar5 = func_460(iParam0, &Var0, 0, 0);
	iVar6 = func_649(iParam0, 0, 0, 0);
	if (iVar5 > 1 && (iVar6 + iParam2) >= iVar5)
	{
		if (func_150(iParam0, -2051813666))
		{
			func_137(672, 1);
		}
		else if (func_108() == -1)
		{
			func_137(671, 0);
		}
	}
	if (func_219(iParam0, &Var0, *iParam1, 0, 0, -1, 0))
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

void func_420(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	if (!func_650())
	{
		return;
	}
	switch (func_283(iParam0, -949239683))
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
			Global_1939067->f_70.f_5 = 1;
			Global_1939067->f_70.f_6 = 0;
			Global_1939067->f_70.f_1 = iParam0;
			break;
	}
}

int func_421(int iParam0)
{
	if (!func_651(iParam0))
	{
		return 0;
	}
	return func_652(iParam0);
}

void func_422(int iParam0)
{
	if (!func_651(iParam0))
	{
		return;
	}
	func_653(iParam0);
	func_654(iParam0);
}

void func_423(int iParam0)
{
	if (func_150(iParam0, -1522723129))
	{
		func_470(-848633709, 0, 255, 0, 0);
	}
	else if (func_150(iParam0, -283942357))
	{
		func_470(-981153234, 0, 255, 0, 0);
	}
	else if (func_150(iParam0, 683680997))
	{
		func_470(-756350192, 0, 255, 0, 0);
	}
	else if (func_150(iParam0, 1307628809))
	{
		func_470(603094518, 0, 255, 0, 0);
	}
}

int func_424(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<4> Var27;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_MELEE(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, 0))
	{
		Var0 = { func_188(iParam0, 0, 1) };
		if (func_370(iParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -1591664384;
			if (func_371(iParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_270(iParam0, Var0, Var0.f_4, 0) };
				func_271(iParam0, &Var27, &Var0, 1, -142743235, 1, 0);
			}
		}
	}
	if (func_78(0))
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, 0))
		{
			return 0;
		}
		func_425(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
		func_655(iParam0, iParam1);
		return 1;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, 0))
	{
		return 0;
	}
	if (iParam1 > 0)
	{
	}
	WEAPON::_GIVE_WEAPON_TO_PED_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
	return 1;
}

int func_425(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_428(iParam0))
	{
		return 0;
	}
	if (!func_78(0))
	{
		return 0;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_34, iParam0, iParam1, iParam2);
	return 1;
}

int func_426(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	iVar0 = func_210(iParam0, joaat("default"));
	if (iVar0 != 0)
	{
		return func_656(iParam0, iParam1, iParam2);
	}
	Var1 = { func_188(iParam0, 0, 1) };
	Var6 = { func_270(iParam0, Var1, Var1.f_4, 0) };
	return func_413(iParam0, &Var6, &Var1, iParam1, iParam2, 0);
}

int func_427(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;

	iVar0 = func_194(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_108() == -1)
		{
			func_195(iVar0);
			if (iParam1 == 1248274121)
			{
				func_657(iVar0);
			}
		}
		if (!func_219(iParam0, &uVar1, 1, 0, 0, -1, 0))
		{
			func_647(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_658(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				func_424(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("weapon_fishingrod") || WEAPON::_IS_WEAPON_BINOCULARS(iVar0))
			{
				func_424(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_IS_WEAPON_LASSO(iVar0))
			{
				func_424(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_IS_WEAPON_MELEE(iVar0))
			{
				if (iVar0 == joaat("weapon_melee_knife_john") && !func_659())
				{
					return 0;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(iParam0))
				{
				}
				else if (!func_660(iVar0))
				{
					func_424(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_424(iVar0, WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
			{
				iVar7 = func_661(Global_34, 2, 0, 1);
				if ((((func_204(iVar7) && !Global_26386) && iVar7 != iVar0) && !func_23(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 1)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_34, iVar7);
				}
				if (func_204(iVar7) && func_23(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 1))
				{
					if (!func_424(iVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return 0;
					}
				}
				else if (!func_424(iVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return 0;
				}
			}
			else if (!func_424(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_137(513, 1);
	}
	return 1;
}

bool func_428(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_429(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_428(iParam0))
	{
		return 0;
	}
	iVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	if (func_204(iVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_34, &iVar2, iVar4);
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
		func_439(func_662(iParam0), func_354(iParam0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_78(0))
	{
		if (func_425(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return func_426(iParam0, *iParam1, iParam2);
	}
	return 0;
}

struct<2> func_430(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

int func_431()
{
	return 0;
}

int func_432(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;

	if (func_108() == 0)
	{
		func_240(iParam0, 0);
		return 0;
	}
	iVar0 = func_663(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_664(iVar0, sParam4, iParam5, 0);
	}
	func_665(iVar0, bParam1, fParam2, iParam3);
	return iVar0;
}

void func_433(int iParam0)
{
}

void func_434(int iParam0)
{
}

void func_435(int iParam0)
{
}

void func_436(int iParam0)
{
}

void func_437()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(-1278339625) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1278339625, -1316535105, 1);
	}
}

void func_438(int iParam0, int iParam1)
{
	var uVar0;

	func_347(iParam0, iParam1, &uVar0);
}

void func_439(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_252(iParam0, &iVar0, &iVar1);
	if (!func_253(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_485(iParam0, 1024))
	{
		return;
	}
	func_254(iVar0, iVar1);
	(Global_1904613->f_31[iParam0 /*9*/])->f_3[0 /*2*/] = iParam1;
	((Global_1904613->f_31[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 2;
}

void func_440(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_252(iParam0, &iVar0, &iVar1);
	if (!func_253(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_485(iParam0, 1024))
	{
		return;
	}
	func_254(iVar0, iVar1);
	(Global_1904613->f_31[iParam0 /*9*/])->f_3[0 /*2*/] = iParam1;
	if (!bParam3)
	{
		((Global_1904613->f_31[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 1;
	}
	else
	{
		((Global_1904613->f_31[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 5;
	}
}

void func_441(int iParam0)
{
	switch (*iParam0)
	{
		case -1424823393: /* GXTEntry: "Opened Cigarettes" */
			*iParam0 = -885810591; /* GXTEntry: "Premium Cigarettes" */
			break;
		case 1358243310: /* GXTEntry: "Opened Cigarettes" */
			*iParam0 = 1463786584; /* GXTEntry: "Cigarettes" */
			break;
		case -541584777: /* GXTEntry: "Opened Cocaine Gum" */
			*iParam0 = 206762213; /* GXTEntry: "Cocaine Gum" */
			break;
	}
}

void func_442(int iParam0)
{
	if (func_108() != -1)
	{
		return;
	}
}

void func_443(int iParam0)
{
	switch (iParam0)
	{
		case 236757114: /* GXTEntry: "Flight Feather" */
			break;
	}
}

void func_444(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_666(Global_1902942->f_37);
	func_362(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_667(iParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_445(int iParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = func_448(iParam1);
	if (!func_668(iParam0, Var0.f_4))
	{
		return 0;
	}
	iVar5 = func_460(iParam0, &Var0, 0, 0);
	iVar6 = func_649(iParam0, 0, 0, 0);
	if (iVar5 >= 0 && iVar6 > iVar5)
	{
		return 0;
	}
	return 1;
}

int func_446(int iParam0)
{
	if (!func_90(iParam0, 0))
	{
	}
	if (func_150(iParam0, -1881667932))
	{
		return 1;
	}
	return 0;
}

int func_447(int iParam0, int iParam1, int iParam2)
{
	struct<10> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<2> Var14[10];
	int iVar35;
	int iVar36;

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	*iParam2 = 0;
	Var0 = { func_669(-1591664384, -1591664384, 0, 0, iParam1, 0, -1, 0, 0) };
	iVar11 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var0, &iVar10, 1);
	if (iVar11 != -1)
	{
		iVar12 = 0;
		while (iVar12 < iVar10)
		{
			if (ITEMDATABASE::_0x8750F69A720C2E41(iVar11, iVar12, &iVar13))
			{
				if (func_451(iVar13, iParam1, &Var14, &iVar35, 1, 0))
				{
					iVar36 = 0;
					while (iVar36 < iVar35)
					{
						if (iParam0 == &Var14[iVar36 /*2*/])
						{
							*iParam2 = (*iParam2 + (Var14[iVar36 /*2*/])->f_1);
						}
						iVar36++;
					}
				}
			}
			iVar12++;
		}
		ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar11);
	}
	return 1;
}

int func_448(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1084182731;
		case 1:
			return -1360128126;
		case 2:
			return 1426626782;
		case 3:
			return 1227915917;
		default:
			break;
	}
	return 1084182731;
}

struct<2> func_449(int iParam0)
{
	return func_430(-1108808256, iParam0);
}

struct<2> func_450(int iParam0)
{
	struct<2> Var0;

	if (func_225(iParam0, 0))
	{
		Var0 = { func_430(-1276738576, -1555359431) };
	}
	else if (func_225(iParam0, 2))
	{
		Var0 = { func_430(-1276738576, joaat("ammo")) };
	}
	else if (func_225(iParam0, 5))
	{
		Var0 = { func_430(-1276738576, 644069854) };
	}
	else if (func_225(iParam0, 1))
	{
		Var0 = { func_430(-1276738576, -97115714) };
	}
	else if (func_225(iParam0, 3))
	{
		Var0 = { func_430(-1276738576, joaat("weapons")) };
	}
	else if (func_225(iParam0, 4))
	{
		Var0 = { func_430(-1276738576, 1455184052) };
	}
	return Var0;
}

int func_451(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return 0;
	}
	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	*iParam3 = ITEMDATABASE::_0xDEE7B3C76ED664BE(iParam0, iParam1);
	if (*iParam3 == 0)
	{
		if (!bParam5)
		{
		}
		return 0;
	}
	if (!bParam5)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!ITEMDATABASE::_0xAD73B614DF26CF8A(iParam0, iParam1, iVar0, (*uParam2)[iVar0 /*2*/]))
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
		func_670(iParam0, iParam1, uParam2, *iParam3);
	}
	return 1;
}

int func_452(int iParam0)
{
	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	if (func_150(iParam0, -839724752))
	{
		return 1;
	}
	return 0;
}

int func_453(int iParam0, int iParam1)
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

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	if (!func_241(iParam0) && !func_452(iParam0))
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
	iVar13 = func_283(iParam0, 1697966752);
	if (iVar13 == 0)
	{
		return 0;
	}
	Var3 = { func_669(-1591664384, -1591664384, 0, 235313564, 0, 0, -1, iVar13, 0) };
	if (func_671(Var3, &iVar1, &iVar2, 0))
	{
		iVar15 = 0;
		while (iVar15 < iVar2)
		{
			iVar14 = func_672(iVar15, iVar1);
			if (func_90(iVar14, 0) && iParam0 != iVar14)
			{
				iVar16 = func_673(iVar14);
				if (iVar16 != 0)
				{
					iVar17 = func_674(iVar14, iParam1);
					if (iVar17 > 0)
					{
						iVar0 = (iVar0 + (iVar17 * func_676(iVar16, func_675(iVar14), iParam0)));
					}
				}
			}
			iVar15++;
		}
		func_677(iVar1);
	}
	return iVar0;
}

int func_454(int iParam0, int iParam1, int iParam2)
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

	iParam0 = func_326(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_90(iParam1, 0))
	{
		return 0;
	}
	if (!func_678(iParam0))
	{
		return 0;
	}
	iVar0 = func_173(iParam0);
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
		if (!func_679(iVar28))
		{
		}
		else
		{
			MISC::_0x48E4D50F87A96AA5(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar28), 1, 1, ENTITY::GET_ENTITY_MODEL(iVar28), &Var3, 0);
			iVar29 = 0;
			while (iVar29 < 10)
			{
				iVar30 = &Var3.f_1[iVar29];
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

int func_455(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iParam0 = func_326(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_90(iParam1, 0))
	{
		return 0;
	}
	if (!func_678(iParam0))
	{
		return 0;
	}
	iVar0 = func_173(iParam0);
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

int func_456(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_90(iParam0, 0))
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

int func_457(int iParam0)
{
	if (!func_90(*iParam0, 0))
	{
		return 0;
	}
	if (!func_680(*iParam0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case -1073808995: /* GXTEntry: "Live Crickets" */
			*iParam0 = -1753819339; /* GXTEntry: "Cricket Bait" */
			break;
		case 1903483453: /* GXTEntry: "Live Worms" */
			*iParam0 = -1527293029; /* GXTEntry: "Worm Bait" */
			break;
		case -541584777: /* GXTEntry: "Opened Cocaine Gum" */
			*iParam0 = 206762213; /* GXTEntry: "Cocaine Gum" */
			break;
		case 998010398: /* GXTEntry: "Opened Chewing Tobacco" */
			*iParam0 = -324053813; /* GXTEntry: "Chewing Tobacco" */
			break;
		case -1424823393: /* GXTEntry: "Opened Cigarettes" */
			*iParam0 = -885810591; /* GXTEntry: "Premium Cigarettes" */
			break;
		default:
			return 0;
	}
	return 1;
}

int func_458(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

bool func_459(int iParam0)
{
	return func_91(iParam0) == joaat("weapon");
}

int func_460(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_90(iParam0, 0) && !func_458(func_278(iParam0), 2))
	{
		return 0;
	}
	if (func_91(iParam0) == 26423971)
	{
		return -1;
	}
	if (!bParam2 && func_210(iParam0, joaat("default")) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_73(bParam3), iParam0);
}

int func_461(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if ((bParam4 && iParam1 == -915411861) && func_681(iParam0, 59806960))
	{
		iParam1 = 59806960;
	}
	if (func_682(iParam0))
	{
		return func_684(func_683(iParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_451(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32 /*2*/] == 2084597891 || &Var0[iVar32 /*2*/] == 773203532)
		{
			if (iParam5 != 0 && &Var0[iVar32 /*2*/] != iParam5)
			{
			}
			else
			{
				return (Var0[iVar32 /*2*/])->f_1;
				Jump @204; //curOff = 188
				if (&Var0[iVar32 /*2*/] == 0)
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

int func_462(int iParam0)
{
	switch (iParam0)
	{
		case -1103707655:
		case 205718222:
		case 866168015:
			return 1;
		default:
			break;
	}
	return 0;
}

struct<4> func_463()
{
	struct<4> Var0;

	return Var0;
}

int func_464(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, uParam1);
	if (iParam0 == joaat("use"))
	{
		if (func_99(iVar0, 2048))
		{
			return 0;
		}
	}
	else if (func_99(iVar0, 8))
	{
		return 0;
	}
	else if (func_99(iVar0, 16))
	{
		return 0;
	}
	else if (func_99(iVar0, 65536))
	{
		return 0;
	}
	return 1;
}

int func_465(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_685(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_685(iParam1, 2, 0, 0);
	return -1;
}

int func_466(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_685(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

int func_467(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return func_686(35, iParam0);
}

int func_468(int iParam0)
{
	if (iParam0 >= 1 && iParam0 <= 182)
	{
		return 1;
	}
	return 0;
}

int func_469(int iParam0)
{
	if (!func_468(iParam0))
	{
		return 0;
	}
	return (Global_1132968->f_11[iParam0 /*3*/])->f_2;
}

bool func_470(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_687(iParam0, &uVar25, &Var12, &Var0, bParam1, iParam2, iParam3, bParam4);
}

bool func_471()
{
	return (func_688(0) && func_688(1));
}

int func_472(int iParam0)
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

int func_473(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_689(1);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1954472->f_1331.f_50[iParam0]);
		case 1:
			return &(Global_1954472->f_1465.f_2.f_50[iParam0]);
		default:
			break;
	}
	return 1;
}

int func_474(int iParam0)
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

bool func_475(int iParam0)
{
	return func_231(iParam0, 2);
}

int func_476(int iParam0)
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

void func_477(var uParam0, int iParam1)
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
		if (&uParam0->f_1[iVar1] == iParam1)
		{
			return;
		}
		switch (iParam1)
		{
			case 291123060:
			case 617531372:
				if (&uParam0->f_1[iVar1] == 617531372 || &uParam0->f_1[iVar1] == 291123060)
				{
					bVar0 = true;
				}
				break;
			case 1356624740:
			case 1884295263:
				if (&uParam0->f_1[iVar1] == 1356624740 || &uParam0->f_1[iVar1] == 1884295263)
				{
					bVar0 = true;
				}
				break;
			case -1850666435:
			case 1551239286:
			case 1937393363:
				if ((&uParam0->f_1[iVar1] == 1551239286 || &uParam0->f_1[iVar1] == -1850666435) || &uParam0->f_1[iVar1] == 1937393363)
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

int func_478(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_690(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_691(uParam2, iParam0, Var1);
	return 1;
}

int func_479(int iParam0)
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
	iVar2 = func_692(iVar0);
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
			iVar6 = func_693(iVar5);
			if (iVar6 != 0)
			{
				return iVar6;
			}
		}
		return iVar5;
	}
	switch (iVar1)
	{
		case 2:
			return -776155824 /* GXTEntry: "Animal Carcass Perfect" */;
		case 1:
			return 1715058708 /* GXTEntry: "Animal Carcass Good Quality" */;
		case 0:
			return -45650221 /* GXTEntry: "Animal Carcass Poor" */;
		default:
			break;
	}
	return -45650221 /* GXTEntry: "Animal Carcass Poor" */;
}

int func_480(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;

	iVar0 = func_577(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar1 = func_694(iVar0, iParam0);
		if (iParam1 < iVar1)
		{
			iVar1 = iParam1;
		}
		iParam1 = (iParam1 - iVar1);
		func_695(&iVar0, iParam0, &iVar1, bParam3, iParam4, iParam5);
		iParam1 = (iParam1 + iVar1);
	}
	iParam1 = func_696(PLAYER::PLAYER_PED_ID(), iParam0, iParam1, bParam2, iParam5);
	if (iParam1 <= 0)
	{
		return iParam1;
	}
	return iParam1;
}

int func_481(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_94(iParam0, 0, 0, 0);
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
		if (!func_76(iParam0, iVar1, bParam2, iParam3))
		{
			return 0;
		}
		else
		{
			func_697(iParam0, iVar1, 0);
		}
	}
	if (iVar2 > 0)
	{
		if (!func_698(iParam0, iVar2, bParam2, iParam3))
		{
			return 0;
		}
		else
		{
			func_697(iParam0, iVar1, 0);
		}
		if (!bParam2)
		{
			func_161("SHOP_SELL_HORSE_SATCHEL", 10000, 0, 0, 0, 1);
		}
	}
	return 1;
}

bool func_482(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(&(Global_17172.f_2563[iParam0]), iParam1);
}

int func_483(int iParam0)
{
	if (func_485(iParam0, 4))
	{
		return 0;
	}
	return 1;
}

int func_484(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if ((Global_1904613->f_31[iParam0 /*9*/])->f_2 & 98304 == 0)
	{
		return 0;
	}
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar0 = 0;
	while (iVar0 < Global_39.f_3327)
	{
		if ((Global_39.f_3327[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if ((Global_1904613->f_31[iParam0 /*9*/])->f_2 & 131072 != 0)
			{
				iVar3 = 2;
			}
			if ((Global_1904613->f_31[iParam0 /*9*/])->f_2 & 524288 != 0)
			{
				iVar3 = 5;
			}
			iVar2 = (&Global_39.f_3327[iVar0 /*3*/] - iVar1);
			if ((Global_39.f_3327[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && (Global_1904613->f_31[iParam0 /*9*/])->f_2 & 32768 != 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_485(int iParam0, int iParam1)
{
	return ((Global_1904613->f_31[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_486(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_487()
{
	if (!func_335())
	{
		return 0;
	}
	return Global_1904613->f_8196;
}

int func_488(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return 1;
	}
	if (iParam0 == 6 && iParam1 == 4)
	{
		return 1;
	}
	return 0;
}

int func_489(int iParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_490(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	var uVar0;

	*iParam1 = 0;
	if (iParam4 < 1)
	{
		return 0;
	}
	if (iParam3 == 0)
	{
		iParam3 = func_210(iParam2, joaat("default"));
		if (iParam3 == 0)
		{
			return 0;
		}
	}
	uVar0 = 5;
	if (!NETSHOPPING::_0xD1555FBC96C88444(iParam2, iParam3, iParam4, &uVar0, 5))
	{
		return 0;
	}
	if (!func_699(uParam0, iParam1, &uVar0, iParam4, bParam5))
	{
		return 0;
	}
	return 1;
}

struct<16> func_491(int iParam0, var uParam1)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_270(iParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = iParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

int func_492(int iParam0)
{
	if (func_90(iParam0, 0))
	{
		if (func_150(iParam0, -1242251796))
		{
			if (func_150(iParam0, 2060589226))
			{
				return func_700();
			}
			return func_701();
		}
		else if (func_150(iParam0, 1919582297))
		{
			return func_501();
		}
		else if (func_150(iParam0, 1647670816))
		{
			return func_702();
		}
		else if (func_150(iParam0, 1147021565))
		{
			return func_504();
		}
	}
	if (Global_1939067->f_12)
	{
		return func_701();
	}
	else
	{
		return func_504();
	}
	return func_504();
}

int func_493(int iParam0)
{
	if ((((((((((func_150(iParam0, 1147021565) || func_150(iParam0, -136654233)) || func_150(iParam0, -524514947)) || func_150(iParam0, -1238310989)) || func_150(iParam0, 1765172170)) || func_150(iParam0, 1490540191)) || func_150(iParam0, 1573112293)) || func_150(iParam0, -1242251796)) || func_150(iParam0, 1919582297)) || func_150(iParam0, -2085281117)) || iParam0 == -1994237933)
	{
		return 1;
	}
	return 0;
}

int func_494()
{
	return 32759936;
}

int func_495()
{
	return 33012981;
}

int func_496()
{
	return 24885248;
}

int func_497()
{
	return 33269904;
}

int func_498()
{
	return 16228343;
}

int func_499()
{
	return 33269760;
}

int func_500()
{
	return 33030143;
}

int func_501()
{
	return 33274887;
}

int func_502()
{
	return 32189572;
}

int func_503()
{
	return 31080423;
}

int func_504()
{
	return 33012951;
}

int func_505()
{
	return 33022080;
}

bool func_506(int iParam0)
{
	return func_99(Global_1939067->f_7, iParam0);
}

int func_507(bool bParam0)
{
	int iVar0;

	if (func_506(1) && !Global_1956172->f_2)
	{
		if (bParam0)
		{
			func_161("ITEM_UNUSABLE_PICKING_UP", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if ((func_506(2) && !Global_1956172->f_2) && MISC::GET_GAME_TIMER() >= Global_17150)
	{
		if (bParam0)
		{
			iVar0 = func_703(Global_34);
			if (iVar0 != 0)
			{
				if (ENTITY::_0x9A100F1CF4546629(iVar0))
				{
					func_161("ITEM_UNUSABLE_SKINNING", 10000, 0, 0, 0, 1);
					return 0;
				}
			}
			func_161("ITEM_UNUSABLE_LOOTING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_506(4194304))
	{
		return 0;
	}
	return 1;
}

int func_508(bool bParam0, bool bParam1)
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
					return 1;
				default:
					break;
			}
		}
		if (bParam0)
		{
			func_161("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	return 1;
}

int func_509(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (PED::_0x1D46B417F926D34D(Global_34))
	{
		return 0;
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(Global_34, true))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(Global_34, false))
		{
			return 0;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_34);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		switch (iVar1)
		{
			case joaat("rowboat"):
			case joaat("handcart"):
				if (bParam0)
				{
					func_161("ITEM_UNUSABLE_VEHICLE", 10000, 0, 0, 0, 1);
				}
				return 0;
			case joaat("breach_cannon"):
			case joaat("gatling_gun"):
			case joaat("gatlingmaxim02"):
			case joaat("hotchkiss_cannon"):
				if (bParam0)
				{
					func_161("ITEM_UNUSABLE_CANNON", 10000, 0, 0, 0, 1);
				}
				return 0;
		}
		if (!func_15(iParam1, 32) && !PED::IS_PED_ON_MOUNT(Global_34))
		{
			if (bParam2 || VEHICLE::_0x2963B5C1637E8A27(iVar0) == Global_34)
			{
				return 0;
			}
		}
	}
	else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Global_34))
	{
		return 0;
	}
	return 1;
}

int func_510(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return 1;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_511(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true);
	}
	return 0;
}

int func_512(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;

	if (bParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			return 0;
		}
		if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
		{
			return 0;
		}
	}
	fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
	fVar1 = PED::_0xCA95924C893A0C91(iParam0, fVar0);
	if (fVar1 <= 1.5f)
	{
		return 1;
	}
	return 0;
}

int func_513(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (&(Global_1199613->f_48[iParam0 /*21*/])->f_18[iVar0] != 0 && &(Global_1199613->f_48[iParam0 /*21*/])->f_18[iVar0] == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_514(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 50);
}

int func_515()
{
	if (Global_17172.f_2954 == 1)
	{
		return 0;
	}
	if (func_704(4))
	{
		return 0;
	}
	if (func_518())
	{
		return 1;
	}
	if (func_705())
	{
		return 0;
	}
	if (func_706(1, 255))
	{
		return 0;
	}
	if (func_88(func_707()) && Global_1199613->f_1.f_20 != 3)
	{
		return 0;
	}
	return 1;
}

int func_516(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (&(Global_1199613->f_48[iParam0 /*21*/])->f_18[iVar0] != 0 && func_23(&((Global_1199613->f_48[iParam0 /*21*/])->f_18[iVar0]), 1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_517(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (&(Global_1199613->f_48[iParam0 /*21*/])->f_18[iVar0] != 0 && func_708(&((Global_1199613->f_48[iParam0 /*21*/])->f_18[iVar0])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_518()
{
	return func_709(func_87(0));
}

bool func_519(int iParam0, int iParam1, bool bParam2)
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

int func_520()
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
	if (iVar1 == joaat("weapon_unarmed"))
	{
		if (iVar0 == joaat("weapon_unarmed"))
		{
			return 1;
		}
		else if ((((WEAPON::IS_WEAPON_VALID(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0)) && !func_250(iVar0)) && !PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_34, true)) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_34, false) && !CAM::_0xA24C1D341C6E0D53(1, 0, 0)))
		{
			return 3;
		}
		else if (WEAPON::_IS_WEAPON_BINOCULARS(iVar0))
		{
			return 1;
		}
		else if ((WEAPON::IS_WEAPON_VALID(iVar0) && func_250(iVar0)) || WEAPON::_IS_WEAPON_LASSO(iVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iVar0 == joaat("weapon_unarmed"))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_521(int iParam0)
{
	switch (iParam0)
	{
		case 1433048902: /* GXTEntry: "Ginseng" */
			return 2;
		case -1602657245: /* GXTEntry: "Bay Bolete" */
			return 4;
		case -1991037110: /* GXTEntry: "Blackberry" */
			return 5;
		case 1047281747: /* GXTEntry: "Currant" */
			return 6;
		case -398744080: /* GXTEntry: "Burdock Root" */
			return 7;
		case -1066874997: /* GXTEntry: "Chanterelle" */
			return 8;
		case -2085219828: /* GXTEntry: "Common Bulrush" */
			return 11;
		case 2064962445: /* GXTEntry: "Creeping Thyme" */
			return 12;
		case -1620920647: /* GXTEntry: "English Mace" */
			return 15;
		case -1664530975: /* GXTEntry: "Evergreen Huckleberry" */
			return 16;
		case -597058368: /* GXTEntry: "Indian Tobacco" */
			return 20;
		case 128702355: /* GXTEntry: "Milkweed" */
			return 23;
		case -2051332199: /* GXTEntry: "Oleander Sage" */
			return 26;
		case 546981776: /* GXTEntry: "Oregano" */
			return 27;
		case -2013384490: /* GXTEntry: "Parasol Mushroom" */
			return 28;
		case 228922461: /* GXTEntry: "Prairie Poppy" */
			return 29;
		case -746674788: /* GXTEntry: "Ram\'s Head" */
			return 31;
		case 599861917: /* GXTEntry: "Raspberry" */
			return 33;
		case -1781387050: /* GXTEntry: "Sage" */
			return 34;
		case 2006811763: /* GXTEntry: "Vanilla Flower" */
			return 37;
		case -90546043: /* GXTEntry: "Violet Snowdrop" */
			return 38;
		case 1216456215: /* GXTEntry: "Wild Carrot" */
			return 48;
		case 746300881: /* GXTEntry: "Wild Feverfew" */
			return 49;
		case -435006002: /* GXTEntry: "Wild Mint" */
			return 50;
		case -624139784: /* GXTEntry: "Wintergreen Berry" */
			return 51;
		case -529638012: /* GXTEntry: "Yarrow" */
			return 52;
		case 1338475089: /* GXTEntry: "Agarita" */
			return 39;
		case 2605459: /* GXTEntry: "Texas Bluebonnet" */
			return 40;
		case 1071702353: /* GXTEntry: "Bitterweed" */
			return 41;
		case -1183422860: /* GXTEntry: "Blood Flower" */
			return 42;
		case -1957546791: /* GXTEntry: "Cardinal Flower" */
			return 43;
		case -589542533: /* GXTEntry: "Chocolate Daisy" */
			return 44;
		case -1776738559: /* GXTEntry: "Creek Plum" */
			return 45;
		case 1602215994: /* GXTEntry: "Wild Rhubarb" */
			return 46;
		case -396757268: /* GXTEntry: "Wisteria" */
			return 47;
	}
	return 0;
}

void func_522(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_710(iParam0);
	iVar1 = func_521(iVar0);
	if (iVar1 != iParam0)
	{
		func_711(iVar1, 4);
	}
	if (!func_712(iParam0))
	{
		return;
	}
	if (func_713(iParam0))
	{
		return;
	}
	func_711(iParam0, 4);
	func_714(iParam0, bParam1);
	if (!func_715(iParam0))
	{
		func_716(iParam0, 1, 0);
	}
	if (bParam1)
	{
		if (!func_17(0, 0, 1))
		{
			func_717(1, 6);
		}
	}
}

int func_523(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (TASK::_0x2D19BC4DF626CBE7(iParam0, iParam1, iParam2, iParam3))
	{
		TASK::_TASK_ITEM_INTERACTION(iParam0, iParam1, iParam2, iParam3, 0, -1082130432);
		Global_1939067->f_26 = 1;
		return 1;
	}
	ATTRIBUTE::_0xD962F8579D702DB5();
	return 0;
}

void func_524(int iParam0)
{
	struct<2> Var0;
	struct<6> Var22;
	int iVar29;
	var uVar30;
	var uVar31;
	var uVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	bool bVar37;
	bool bVar38;
	bool bVar39;

	Var0.f_1 = 20;
	if ((func_150(iParam0, 1573112293) || func_150(iParam0, 672467738)) || func_150(iParam0, -550842268))
	{
		bVar37 = true;
	}
	if (func_91(iParam0) == 2085633299)
	{
		ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iParam0, &Var0);
		ATTRIBUTE::_0xD962F8579D702DB5();
		iVar29 = 0;
		while (iVar29 < Var0)
		{
			if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var0.f_1[iVar29]), &Var22))
			{
			}
			else if (-943921969 == Var22.f_1)
			{
				uVar30 = func_718(0, Var22.f_2);
				func_719(Var22.f_2);
				bVar39 = true;
			}
			else if (-1104847406 == Var22.f_1)
			{
				uVar31 = func_718(2, Var22.f_2);
				func_720(Var22.f_2, 0);
				bVar38 = true;
			}
			else if (381158954 == Var22.f_1)
			{
				uVar32 = func_718(1, Var22.f_2);
				func_721(Var22.f_2);
			}
			else if (-416929031 == Var22.f_1)
			{
				fVar33 = func_593(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
				func_594(0, fVar33, 1, 1, bVar37);
				bVar39 = true;
			}
			else if (1857353317 == Var22.f_1)
			{
				fVar34 = func_593(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
				func_594(2, fVar34, 1, 1, bVar37);
				bVar38 = true;
			}
			else if (1681823811 == Var22.f_1)
			{
				fVar35 = func_593(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
				func_594(1, fVar35, 1, 1, bVar37);
			}
			else if (2062242710 == Var22.f_1)
			{
				fVar36 = func_596(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_597(19, fVar36, 1, 1);
				bVar39 = true;
			}
			else if (-826379728 == Var22.f_1)
			{
				fVar36 = func_596(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_597(20, fVar36, 1, 1);
				bVar38 = true;
			}
			else if (-1191740624 == Var22.f_1)
			{
				fVar36 = func_596(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_597(18, fVar36, 1, 1);
			}
			else if (1869697234 == Var22.f_1)
			{
				fVar36 = func_596(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_597(0, fVar36, 1, 1);
				bVar39 = true;
			}
			else if (1342237631 == Var22.f_1)
			{
				fVar36 = func_596(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_597(2, fVar36, 1, 1);
				bVar38 = true;
			}
			else if (-1240225157 == Var22.f_1)
			{
				fVar36 = func_596(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_597(1, fVar36, 1, 1);
			}
			else if (-816334026 == Var22.f_1)
			{
				func_595(BUILTIN::TO_FLOAT(Var22.f_2), 1);
			}
			iVar29++;
		}
		if (bVar39 || func_150(iParam0, -537818634))
		{
			func_192(func_363(-704089207), 1);
		}
		if (func_150(iParam0, -1457797660))
		{
			func_192(func_363(-1909697259), 1);
		}
		if (bVar38)
		{
			func_192(func_363(704570463), 1);
		}
		if (iParam0 == -241345764 || iParam0 == -1735850413)
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1823988672, 1517929953, 1);
		}
		PLAYER::_0x0E1DB1F8F5B561DC(uVar30, uVar32, uVar31, BUILTIN::ROUND((fVar33 / 2f)), BUILTIN::ROUND((fVar35 / 2f)), BUILTIN::ROUND((fVar34 / 2f)));
	}
}

void func_525(int iParam0)
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

bool func_526(int iParam0)
{
	return &Global_1951141->f_593[iParam0] > 0;
}

void func_527(int iParam0)
{
	Global_1951141->f_593[iParam0] = &Global_1951141->f_593[iParam0] + 1;
}

int func_528()
{
	if (Global_1951141->f_3253)
	{
		return 1;
	}
	if (MISC::ABSI((MISC::GET_GAME_TIMER() - Global_1951141->f_3251)) < 1250)
	{
		return 1;
	}
	if (func_722())
	{
		return 1;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_34))
	{
		return 1;
	}
	return 0;
}

int func_529(int iParam0)
{
	int iVar0;

	iVar0 = func_162(iParam0);
	if ((iVar0 == 81053684 || iVar0 == -525676072) || func_150(iParam0, -1348134986))
	{
		return 1;
	}
	return 0;
}

void func_530(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_531(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_537(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_532(int iParam0)
{
	if (-1829635046 == func_723(81053684))
	{
		if (func_537(iParam0))
		{
			return 1;
		}
	}
	else if (func_132(-525676072, iParam0))
	{
		if (func_537(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_533()
{
	int iVar0;

	iVar0 = 1549701178;
	switch (func_520())
	{
		case 0:
			iVar0 = 1549701178;
			break;
		case 3:
			iVar0 = 949387044;
			break;
		case 1:
			iVar0 = -22529868;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_534()
{
	int iVar0;

	iVar0 = 614608656;
	switch (func_520())
	{
		case 0:
			iVar0 = 614608656;
			break;
		case 3:
			iVar0 = -1290316291;
			break;
		case 1:
			iVar0 = 1918034163;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_535()
{
	int iVar0;

	iVar0 = -1832677570;
	switch (func_520())
	{
		case 0:
			iVar0 = -1832677570;
			break;
		case 3:
			iVar0 = -362314920;
			break;
		case 1:
			iVar0 = -1336137422;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_536()
{
	int iVar0;

	iVar0 = 1623252156;
	switch (func_520())
	{
		case 0:
			iVar0 = 1623252156;
			break;
		case 3:
			iVar0 = -1469902924;
			break;
		case 1:
			iVar0 = 170763280;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_537(int iParam0)
{
	if (func_132(81053684, iParam0))
	{
		return 1;
	}
	if (func_132(-525676072, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_538(int iParam0)
{
	Global_1951141 = (&Global_1951141 - (Global_1951141 && iParam0));
}

void func_539(int iParam0, int iParam1, int iParam2)
{
	(Global_1951141->f_81[func_249(iParam0, 1) /*12*/])->f_11 = ((Global_1951141->f_81[func_249(iParam0, 1) /*12*/])->f_11 - ((Global_1951141->f_81[func_249(iParam0, 1) /*12*/])->f_11 && iParam1));
}

int func_540(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1951141->f_3109.f_27;
		case 81053684:
			return Global_1951141->f_3109.f_29;
		case -525676072:
			return Global_1951141->f_3109.f_28;
		case -1719060085:
			return Global_1951141->f_3109.f_30;
		case -413129408:
			return Global_1951141->f_3109.f_31;
		case -999503751:
			if (bParam1)
			{
				return Global_1951141->f_3109.f_26;
			}
			else
			{
				return func_724();
			}
			break;
	}
	return 0;
}

int func_541(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -2061583405:
			iVar0 = Global_1951141->f_3109.f_32.f_1;
			break;
		case 81053684:
			iVar0 = 1;
			break;
		case -525676072:
			iVar0 = Global_1951141->f_3109.f_32.f_2;
			break;
		case -1719060085:
			iVar0 = 1;
			break;
		case -999503751:
			iVar0 = Global_1951141->f_3109.f_32;
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

int func_542(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1951141->f_3109.f_25)
	{
		if (iParam0 == &Global_1951141->f_3109[*iParam1])
		{
			return 1;
		}
		*iParam1++;
	}
	return 0;
}

int func_543(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;

	iVar1 = iParam0;
	if (Global_1951141->f_3109.f_25 >= 24)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_542(iVar1, &uVar0))
	{
		return 0;
	}
	if (!func_725(iParam0, 0))
	{
		return 0;
	}
	if (bParam3 && !func_726(iParam0, 0))
	{
		return 0;
	}
	Global_1951141->f_3109[Global_1951141->f_3109.f_25] = iVar1;
	Global_1951141->f_3109.f_25++;
	*uParam1++;
	return 1;
}

int func_544(int iParam0, int iParam1)
{
	return 1;
}

int func_545()
{
	return Global_1951141->f_1;
}

void func_546()
{
	int iVar0;

	if (func_108() == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_1951141->f_3109.f_25)
		{
			Global_11553[iVar0] = &Global_1951141->f_3109[iVar0];
			iVar0++;
		}
		Global_11553.f_26 = Global_1951141->f_3109.f_26;
		Global_11553.f_27 = Global_1951141->f_3109.f_27;
		Global_11553.f_28 = Global_1951141->f_3109.f_28;
		Global_11553.f_29 = Global_1951141->f_3109.f_29;
		Global_11553.f_30 = Global_1951141->f_3109.f_30;
		Global_11553.f_25 = Global_1951141->f_3109.f_25;
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1951141->f_3109.f_25)
	{
		Global_17172.f_54.f_644[iVar0] = &Global_1951141->f_3109[iVar0];
		iVar0++;
	}
	Global_17172.f_54.f_644.f_26 = Global_1951141->f_3109.f_26;
	Global_17172.f_54.f_644.f_27 = Global_1951141->f_3109.f_27;
	Global_17172.f_54.f_644.f_28 = Global_1951141->f_3109.f_28;
	Global_17172.f_54.f_644.f_29 = Global_1951141->f_3109.f_29;
	Global_17172.f_54.f_644.f_30 = Global_1951141->f_3109.f_30;
	Global_17172.f_54.f_644.f_25 = Global_1951141->f_3109.f_25;
}

bool func_547(int iParam0)
{
	return func_728(func_727(iParam0));
}

void func_548(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_729();
	}
	if (bParam0)
	{
		func_304(8);
		func_304(512);
	}
	else
	{
		func_304(8);
		func_304(16);
	}
}

void func_549(int iParam0, int iParam1, bool bParam2)
{
	func_730(iParam0, 0, 0);
	func_315(iParam1, 1, bParam2, 0);
}

int func_550(int iParam0, int iParam1)
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
			return 735520874;
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

void func_551()
{
	int iVar0;

	Global_1951141->f_1538 = Global_1951141->f_1657;
	Global_1951141->f_1534 = Global_1951141->f_1536;
	Global_1951141->f_1534.f_1 = Global_1951141->f_1536.f_1;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(Global_1951141->f_1538.f_1[iVar0 /*3*/]) = { *(Global_1951141->f_1657.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

void func_552(int iParam0)
{
	func_539(iParam0, 8, 6);
}

void func_553(int iParam0)
{
	func_731(&(Global_1951141->f_2760), iParam0);
}

void func_554(int iParam0, int iParam1)
{
	func_732(&(Global_1951141->f_2760), iParam0, iParam1);
}

void func_555(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_556(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar2 = 0;
	iVar3 = iParam1;
	iVar4 = func_162(iVar3);
	iVar5 = 0;
	if (func_545() == 24043185)
	{
		iVar2 = 1;
	}
	if (bParam3)
	{
		iVar5 = 3;
	}
	switch (iVar4)
	{
		case 1297434125:
			if (iParam1 == &Global_1951141->f_81[iParam2 /*12*/])
			{
			}
			else
			{
				iVar0 = 16;
				if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
				{
					if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 0 || (uParam0->f_1[iVar0 /*3*/])->f_1 == joaat("base"))
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = -1539589426;
					}
					else
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 1334603721;
					}
					func_554(iVar0, iVar5);
				}
				Jump @3216; //curOff = 253
				if (iParam1 == &Global_1951141->f_81[iParam2 /*12*/])
				{
				}
				else
				{
					iVar0 = 34;
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
						func_554(iVar0, iVar5);
					}
					iVar0 = 36;
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
						func_554(iVar0, iVar5);
					}
					iVar0 = 37;
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_150(iVar3, -1278198125))
					{
						uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						func_554(iVar0, iVar5);
					}
					iVar0 = 18;
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
					{
						iVar1 = &uParam0->f_1[iVar0 /*3*/];
						if (912453393 == func_162(iVar1) && (uParam0->f_1[iVar0 /*3*/])->f_1 != -2081918609)
						{
							(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
							func_554(iVar0, iVar5);
						}
					}
					Jump @3216; //curOff = 543
					if (iParam1 == &Global_1951141->f_81[iParam2 /*12*/])
					{
					}
					else
					{
						iVar0 = 36;
						func_554(iVar0, iVar5);
						if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_150(iVar3, -1473580422))
						{
							iVar1 = &uParam0->f_1[iVar0 /*3*/];
							if (func_150(iVar1, 1469783911))
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
							}
							else if (func_733(&(uParam0->f_1[iVar0 /*3*/]), iVar2, -2081918609) != -1)
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
							}
							else
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
							}
						}
						iVar0 = 18;
						if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_150(iVar3, 1583165364))
						{
							iVar1 = &uParam0->f_1[iVar0 /*3*/];
							if (func_162(iVar1) == 912453393)
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
								func_554(iVar0, iVar5);
							}
						}
						iVar0 = 35;
						if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_150(iVar3, -1650340550))
						{
							iVar1 = &uParam0->f_1[iVar0 /*3*/];
							if (func_162(iVar1) == 1769055947)
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_554(iVar0, iVar5);
							}
						}
						Jump @3216; //curOff = 918
						if (iParam1 == &Global_1951141->f_81[iParam2 /*12*/])
						{
						}
						else
						{
							iVar0 = 36;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_150(iVar3, 1718965018))
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
							}
							func_554(iVar0, iVar5);
							iVar0 = 35;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_554(iVar0, iVar5);
							}
							iVar0 = 20;
							iVar1 = &uParam0->f_1[iVar0 /*3*/];
							if ((&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_150(iVar1, 1090938458)) && func_150(iVar3, 475297062))
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_554(iVar0, iVar5);
							}
							Jump @3216; //curOff = 1171
							func_554(36, iVar5);
							iVar0 = 18;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_554(iVar0, iVar5);
							}
							iVar0 = 17;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_554(iVar0, iVar5);
							}
							iVar0 = 35;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && 1769055947 == func_162(&(uParam0->f_1[iVar0 /*3*/])))
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_554(iVar0, iVar5);
							}
							iVar0 = 29;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_554(iVar0, iVar5);
							}
							Jump @3216; //curOff = 1454
							func_554(16, iVar5);
							if (func_321(iVar3, 0))
							{
							}
							else
							{
								iVar0 = 29;
								if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_150(iVar3, 1126863852))
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									func_554(iVar0, iVar5);
								}
								iVar0 = 16;
								if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_150(iVar3, -985549034))
								{
									if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
									{
										(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
									}
									else if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1334603721)
									{
										(uParam0->f_1[iVar0 /*3*/])->f_1 = -1539589426;
									}
								}
								iVar0 = 12;
								if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_150(iVar3, -1527414429))
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									func_554(iVar0, iVar5);
								}
								Jump @3216; //curOff = 1747
								if (func_321(iVar3, 0))
								{
								}
								else
								{
									iVar0 = 12;
									if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_150(iVar3, -1527414429))
									{
										uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
										(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
										func_554(iVar0, iVar5);
									}
									iVar0 = 16;
									if (((uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430 || (uParam0->f_1[iVar0 /*3*/])->f_1 == 1334603721) && func_150(iVar3, -985549034))
									{
										if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
										{
											(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
											func_554(iVar0, iVar5);
										}
										else if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1334603721)
										{
											(uParam0->f_1[iVar0 /*3*/])->f_1 = -1539589426;
											func_554(iVar0, iVar5);
										}
									}
									Jump @3216; //curOff = 1988
									if (func_321(iVar3, 0))
									{
									}
									else
									{
										iVar0 = 17;
										if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
										{
											uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
											(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
											func_554(iVar0, iVar5);
										}
										if ((uParam0->f_1[iParam2 /*3*/])->f_1 != -2081918609)
										{
											iVar0 = 34;
											iVar1 = &uParam0->f_1[iVar0 /*3*/];
											if (func_150(iVar1, 1583165364))
											{
												(uParam0->f_1[iParam2 /*3*/])->f_1 = -2081918609;
												func_554(iParam2, iVar5);
											}
											else
											{
												iVar0 = 35;
												iVar1 = &uParam0->f_1[iVar0 /*3*/];
												if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && 1769055947 == func_162(iVar1))
												{
													(uParam0->f_1[iParam2 /*3*/])->f_1 = -2081918609;
													func_554(iParam2, iVar5);
												}
											}
										}
										Jump @3216; //curOff = 2214
										if (func_321(iVar3, 0))
										{
										}
										else
										{
											iVar0 = 12;
											if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												func_554(iVar0, iVar5);
											}
											iVar0 = 13;
											if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												func_554(iVar0, iVar5);
											}
											iVar0 = 25;
											if (&Global_1951141->f_1657.f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_150(iVar3, 675650051))
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												func_554(iVar0, iVar5);
											}
											Jump @3216; //curOff = 2438
											if (iParam1 == &Global_1951141->f_81[iParam2 /*12*/])
											{
												iVar0 = 37;
												if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_554(iVar0, iVar5);
												}
												iVar0 = 38;
												if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_554(iVar0, iVar5);
												}
												iVar0 = 35;
												if (-923693316 == func_162(&(uParam0->f_1[iVar0 /*3*/])))
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_554(iVar0, iVar5);
												}
											}
											else
											{
												iVar0 = 35;
												iVar1 = &uParam0->f_1[iVar0 /*3*/];
												if ((func_150(iVar3, 813132419) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/]) && func_162(iVar1) == -923693316)
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_554(iVar0, iVar5);
												}
												if ((func_150(iVar3, -1650340550) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/]) && func_162(iVar1) == 1769055947)
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_554(iVar0, iVar5);
												}
												iVar0 = 37;
												if (func_150(iVar3, -1278198125) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_554(iVar0, iVar5);
												}
											}
											Jump @3216; //curOff = 2921
											iVar0 = 37;
											if (func_150(iVar3, -1278198125) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												func_554(iVar0, iVar5);
											}
											Jump @3216; //curOff = 3003
											iVar0 = 10;
											if (-525676072 == func_162(&(uParam0->f_1[iVar0 /*3*/])))
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												func_554(iVar0, iVar5);
											}
											Jump @3216; //curOff = 3067
											iVar0 = 12;
											if (81053684 == func_162(&(uParam0->f_1[iVar0 /*3*/])))
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												func_554(iVar0, iVar5);
											}
											Jump @3216; //curOff = 3131
											if (!func_150(iVar3, -1348134986))
											{
											}
											else
											{
												iVar0 = 10;
												if (-525676072 == func_162(&(uParam0->f_1[iVar0 /*3*/])))
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_554(iVar0, iVar5);
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
			switch (func_550(iParam2, 1))
			{
				case -207860920:
					if (func_734(99217379) && func_150(iVar3, -1230785684))
					{
						iVar0 = 27;
						uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						func_554(iVar0, iVar5);
					}
					break;
				case 1742327865:
					iVar0 = 16;
					if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
						func_554(iVar0, iVar5);
					}
					else if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1334603721)
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = -1539589426;
						func_554(iVar0, iVar5);
					}
					break;
				case 1250092473:
					iVar0 = 12;
					if (2056714954 == PED::_GET_PED_COMPONENT_CATEGORY(&(uParam0->f_1[iVar0 /*3*/]), iVar2, 1))
					{
						if ((iParam1 == &Global_1951141->f_81[iParam2 /*12*/] || func_150(iVar3, 1872585553)) || iVar4 == 1882579758)
						{
							uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
							(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
							func_554(iVar0, iVar5);
						}
					}
					iVar0 = 17;
					if (!func_321(&(uParam0->f_1[iVar0 /*3*/]), 0) && func_150(iVar3, 1467402774))
					{
						uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						func_554(iVar0, iVar5);
					}
					iVar0 = 29;
					if (!func_321(&(uParam0->f_1[iVar0 /*3*/]), 0) && func_150(iVar3, 1126863852))
					{
						uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						func_554(iVar0, iVar5);
					}
					break;
				case -1130352927:
					if (iParam1 == -230310728 || iParam1 == 1326838792)
					{
						(uParam0->f_1[iParam2 /*3*/])->f_1 = 289238755;
					}
					else if ((uParam0->f_1[iParam2 /*3*/])->f_1 == 289238755)
					{
						(uParam0->f_1[iParam2 /*3*/])->f_1 = joaat("base");
					}
					break;
				case 1367443060:
					if (iParam1 == 1733464892)
					{
						(uParam0->f_1[iParam2 /*3*/])->f_1 = 289238755;
					}
					else if ((uParam0->f_1[iParam2 /*3*/])->f_1 == 289238755)
					{
						(uParam0->f_1[iParam2 /*3*/])->f_1 = joaat("base");
					}
					break;
			}
		}

int func_557(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	if (func_545() == 24043185)
	{
		iVar0 = 1;
	}
	if (iParam2 == 289238755)
	{
		return 289238755;
	}
	if (iParam2 != 0 && func_733(iParam0, iVar0, iParam2) != -1)
	{
		return iParam2;
	}
	if (func_735(iParam0, func_550(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_558(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;

	if (*uParam0 <= 0)
	{
		return;
	}
	if (func_311(4718592))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_736(&(uParam0->f_2[iVar0 /*2*/]), bParam1, bParam2);
		iVar0++;
	}
	if (bParam4)
	{
		bVar1 = false;
		if (Global_1951141->f_1657 != 491602716 || !func_737(2, -1))
		{
			bVar1 = true;
		}
		else if (!func_150(Global_1951141->f_1657, -166674229) && (Global_1951141->f_1657 != 491602716 || !func_737(2, -1)))
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			Global_1951141->f_1657 = 491602716; /* GXTEntry: "Custom Outfit" */
			Global_1951141->f_1538 = 491602716; /* GXTEntry: "Custom Outfit" */
			func_738(-1, 0, 6);
			func_165(27, 0, 0, 0, 0);
		}
	}
	if (bParam3)
	{
		func_548(0, 1);
	}
}

int func_559(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_739(&uParam0, iParam4, bParam5, iParam6);
}

int func_560(struct<4> Param0, int iParam4)
{
	struct<11> Var0;

	if (!func_78(0))
	{
		return func_740(Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_374(Param0, &Var0, 0, 0, -1))
	{
		return 0;
	}
	if (Var0.f_10 == iParam4)
	{
		return 1;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_73(0), &Param0, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_561(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (func_741(Global_34, iParam0, 0, 1) < 2f && PED::_0xD543D3A8FDE4F185(Global_34, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_562()
{
	return Global_1915180->f_20141;
}

int func_563(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
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
	iVar0 = &Global_1275573->f_154[&Global_1275573];
	iVar1 = Global_1275573->f_8;
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
			if (PED::_0x4912DFE492DB98CD(Global_34, "inInspectionMode"))
			{
				return 0;
			}
		}
		if (bParam0 && !PLAYER::IS_PLAYER_CONTROL_ON(iVar0))
		{
			if (bParam6 && Global_1099294->f_3 & 32 != 0)
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
		if (Global_1915180->f_20136 || Global_1915180->f_21989.f_1)
		{
			return 0;
		}
		if (TASK::_0xD04241BBF6D03A5E(Global_34) != 0)
		{
			return 0;
		}
	}
	if (func_742())
	{
		return 0;
	}
	if (Global_15)
	{
		return 0;
	}
	if (!bParam2 && (((Global_1939067->f_10 || Global_1939067->f_11) || Global_1939067->f_12) || Global_1939067->f_13))
	{
		return 0;
	}
	if (!bParam3)
	{
		iVar4 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (Global_1225057->f_9330 != -1)
		{
			return 0;
		}
		if (((*Global_1122836)[iVar4 /*54*/])->f_34 & 1 != 0 && ((*Global_1122836)[iVar4 /*54*/])->f_34 & 2 == 0)
		{
			return 0;
		}
		if (Global_1124829->f_293)
		{
			return 0;
		}
		if (Global_1572887->f_106.f_75 > 10 && Global_1572887->f_106.f_75 < 14)
		{
			return 0;
		}
		else if (Global_1572887->f_106.f_75 > 14)
		{
			return 0;
		}
	}
	if (!bParam8)
	{
		if ((SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(2) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(8)) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(9))
		{
			if ((Global_1048576 || Global_2883584) // PointerArith)
			{
				return 0;
			}
			if (&Global_1048581)
			{
				return 0;
			}
			if (&Global_1048585)
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_564(int iParam0, int iParam1, int iParam2)
{
	return func_99((*Global_1184801)[iParam2 /*10*/][iParam0], iParam1);
}

var func_565(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_743() != 0)
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
	iVar5 = Global_1275573->f_10;
	iVar6 = Global_1275573->f_15;
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
			case 665633627:
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_744());
				break;
			case -432403087:
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_744());
				break;
			case -1612834106:
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_744());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_745(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1275573->f_154[iVar2])))
		{
			iVar10 = &Global_1275573->f_154[iVar2];
			bVar3 = false;
			bVar4 = false;
			if (iVar9 & 1 != 0 && iVar10 == iVar5)
			{
				bVar3 = true;
			}
			if (func_467(iVar2))
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
					else if (&Global_1275573->f_88[iVar2])
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8192 != 0 && func_746(iVar2) != 1)
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
					if (!func_747(iVar10))
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3 && bVar7)
			{
				if (!VOLUME::_0xF256A75210C5C0EB(iVar8, ENTITY::GET_ENTITY_COORDS(iVar11, false, false)))
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

int func_566(var uParam0, struct<21> Param1)
{
	if (!func_748(uParam0))
	{
		return 0;
	}
	*(uParam0->f_2[*uParam0 /*21*/]) = { Param1 };
	*uParam0++;
	return 1;
}

int func_567(int iParam0)
{
	switch (iParam0)
	{
		case -59585102: /* GXTEntry: "Tonics Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_REMEDIES_MP");
		case 1018123892: /* GXTEntry: "Ingredients Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_INGREDIENTS_MP");
		case 982182330: /* GXTEntry: "Materials Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_MATERIALS_MP");
		case -1406390556: /* GXTEntry: "Valuables Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_VALUABLES_MP");
		case -1455768246: /* GXTEntry: "Kit Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_KIT_MP");
		case -921879912: /* GXTEntry: "Provisions Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_PROVISIONS_MP");
	}
	return 0;
}

int func_568(int iParam0, int iParam1)
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
			if ((Var0[iVar43 /*2*/])->f_1 == iParam1)
			{
				iVar41 = &Var0[iVar43 /*2*/];
				return iVar41;
			}
			iVar43++;
		}
	}
	return 0;
}

char* func_569(int iParam0)
{
	int iVar0;

	if (!func_90(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_354(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

int func_570(int iParam0)
{
	if (func_162(iParam0) == -126813555 || func_162(iParam0) == 1946043663)
	{
		return 1;
	}
	return 0;
}

char* func_571(int iParam0)
{
	int iVar0;

	if (!func_90(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_356(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

void func_572(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

bool func_573()
{
	return (func_649(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0, 0, 0) > 0 && func_559(func_270(889965687 /* GXTEntry: "Wardrobe" */, func_368(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_574(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_73(0);
	*uParam1 = { func_270(iParam0, func_365(0), iParam3, 0) };
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

int func_575(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 487172188)
	{
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("default")) == -1925887917)
		{
			return 0;
		}
	}
	return ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, iParam2);
}

int func_576(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_73(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

int func_577(int iParam0)
{
	return PLAYER::_0xF49F14462F0AE27C(PLAYER::GET_PLAYER_INDEX());
}

int func_578(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = func_94(iParam1, bParam2, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = (iVar0 + func_749(INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iParam0), iParam1));
	}
	if (bParam3)
	{
		iVar0 = (iVar0 + func_750(iParam1, bParam4));
	}
	return iVar0;
}

void func_579()
{
	if (!func_90(Global_1939231->f_10478, 0))
	{
		Global_1939231->f_6 = 0;
	}
	else if ((((func_283(Global_1939231->f_10478, 1224357681) != 0 && Global_1939231->f_10477 != 0) && Global_1939231->f_10477 != -2074770370) && !Global_1915180->f_20136) && !Global_1915180->f_21989.f_1)
	{
		Global_1939231->f_6 = 1;
	}
	else
	{
		Global_1939231->f_6 = 0;
	}
}

void func_580(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_59))
	{
		if (PED::IS_PED_MALE(Global_34))
		{
			uParam0->f_59 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_explosive", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_59 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_explosive_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_59);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_61))
	{
		if (PED::IS_PED_MALE(Global_34))
		{
			uParam0->f_61 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_split", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_61 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_split_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_61);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_62))
	{
		if (PED::IS_PED_MALE(Global_34))
		{
			uParam0->f_62 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_modify_arrows", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_62 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_modify_arrows_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_62);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_63))
	{
		if (PED::IS_PED_MALE(Global_34))
		{
			uParam0->f_63 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_arrows", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_63 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_arrows_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_63);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_64))
	{
		if (PED::IS_PED_MALE(Global_34))
		{
			uParam0->f_64 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_throwingknives_improved", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_64 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_throwingknives_improved_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_64);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_65))
	{
		if (PED::IS_PED_MALE(Global_34))
		{
			uParam0->f_65 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_tomahawk", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_65 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_tomahawk_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_65);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_66))
	{
		if (PED::IS_PED_MALE(Global_34))
		{
			uParam0->f_66 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_poison_throwingknives", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_66 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_poison_throwingknives_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_66);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_67))
	{
		if (PED::IS_PED_MALE(Global_34))
		{
			uParam0->f_67 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_fire_bottle", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_67 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_fire_bottle_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_67);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_68))
	{
		if (PED::IS_PED_MALE(Global_34))
		{
			uParam0->f_68 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_volatile_dynamite", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_68 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_volatile_dynamite_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_68);
	}
}

bool func_581(char* sParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(sParam0);
}

int func_582(var uParam0, var uParam1)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam1))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam1, 1, 0))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADING(*uParam1, 1))
			{
				return 0;
			}
			else
			{
				ANIMSCENE::LOAD_ANIM_SCENE(*uParam1);
				return 0;
			}
		}
	}
	else
	{
		func_580(uParam0);
		return 0;
	}
	return 1;
}

int func_583(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_188(iParam0, 1, 0) };
	return func_318(Var0.f_4);
}

void func_584(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	iVar1 = func_583(iParam0);
	iVar2 = func_249(iVar1, 1);
	if (iVar2 == 39)
	{
		return;
	}
	if (func_751(iParam0) && func_314(iParam0))
	{
		iParam1 |= 64;
	}
	if (((iVar1 == 1108822547 && func_311(32768)) || &Global_1951141->f_1657.f_1[iVar2 /*3*/] != &Global_1951141->f_81[iVar2 /*12*/]) && iParam0 != &Global_1951141->f_1657.f_1[iVar2 /*3*/])
	{
		if (func_751(&(Global_1951141->f_1657.f_1[iVar2 /*3*/])) && func_314(&(Global_1951141->f_1657.f_1[iVar2 /*3*/])))
		{
			iParam1 |= 32;
		}
		if ((Global_1951141->f_81[iVar2 /*12*/])->f_1 > 1)
		{
			iParam1 |= 16;
		}
		iVar3 = 0;
		switch (func_162(iParam0))
		{
			case 81053684:
				if (func_132(-525676072, &uVar0))
				{
					iVar3 = func_249(func_248(-525676072), 1);
					if (iVar3 == 39)
					{
					}
					else
					{
						Global_1951141->f_2548[iVar3 /*2*/] = &Global_1951141->f_81[iVar3 /*12*/];
						Jump @465; //curOff = 294
						if (func_311(32768))
						{
							func_552(func_550(iVar2, 1));
						}
						if (func_132(81053684, &uVar4))
						{
							iVar3 = func_249(func_248(81053684), 1);
							if (iVar3 == 39)
							{
							}
							else
							{
								Global_1951141->f_2548[iVar3 /*2*/] = &Global_1951141->f_81[iVar3 /*12*/];
								Jump @465; //curOff = 380
								if (!func_150(iParam0, -1348134986))
								{
								}
								else
								{
									if (func_132(-525676072, &uVar0))
									{
										iVar3 = func_249(func_248(-525676072), 1);
										if (iVar3 == 39)
										{
										}
										else
										{
											Global_1951141->f_2548[iVar3 /*2*/] = &Global_1951141->f_81[iVar3 /*12*/];
										}
										Global_1951141->f_2548[iVar2 /*2*/] = iParam0;
										func_752(iVar1, iParam1, 6);
									}
								}
							}
						}
					}
				}
		}
	}

int func_585(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar33;
	int iVar34;
	var uVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;

	if (!func_78(0))
	{
		return 0;
	}
	else if (func_79())
	{
		return 0;
	}
	if (iParam4 != 0)
	{
		bParam3 = false;
	}
	if (!func_753(iParam0, 1, iParam1, &iVar31, &uVar35, bParam3, iParam4))
	{
		iVar33 = iVar31;
		return 0;
	}
	if (func_451(iParam0, iParam1, &Var0, &iVar34, 1, 0))
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			iVar33 = &Var0[iVar36 /*2*/];
			if (func_90(iVar33, 0))
			{
				if (iVar33 == 2084597891)
				{
					func_754((Var0[iVar36 /*2*/])->f_1, 0, 0, bParam2, 0);
				}
				else if (bParam3)
				{
					if (func_241(iVar33) || func_452(iVar33))
					{
						if (!func_23(iVar33, (Var0[iVar36 /*2*/])->f_1))
						{
							iVar37 = func_755(7, iVar33, (Var0[iVar36 /*2*/])->f_1);
						}
						func_147(iVar33, iVar37, 562618531, 0, 0);
						(Var0[iVar36 /*2*/])->f_1 = ((Var0[iVar36 /*2*/])->f_1 - iVar37);
						if ((Var0[iVar36 /*2*/])->f_1 > 0)
						{
							if (!func_23(iVar33, (Var0[iVar36 /*2*/])->f_1))
							{
								func_756(iVar33, (Var0[iVar36 /*2*/])->f_1);
							}
							if (func_23(iVar33, (Var0[iVar36 /*2*/])->f_1))
							{
								func_76(iVar33, (Var0[iVar36 /*2*/])->f_1, bParam2, -142743235);
							}
						}
					}
					else
					{
						if (func_456(iVar33) > 0)
						{
							func_757(iVar33);
							(Var0[iVar36 /*2*/])->f_1 = ((Var0[iVar36 /*2*/])->f_1 - 1);
						}
						if ((Var0[iVar36 /*2*/])->f_1 > 0)
						{
							if (func_455(7, iVar33) > 0)
							{
								func_758(7, iVar33, (Var0[iVar36 /*2*/])->f_1);
								(Var0[iVar36 /*2*/])->f_1 = ((Var0[iVar36 /*2*/])->f_1 - func_758(7, iVar33, (Var0[iVar36 /*2*/])->f_1));
							}
						}
						if ((Var0[iVar36 /*2*/])->f_1 > 0)
						{
							func_76(iVar33, (Var0[iVar36 /*2*/])->f_1, bParam2, 562618531);
						}
					}
				}
				else if (iParam4 == 0)
				{
					if (func_241(iVar33) || func_452(iVar33))
					{
						if (!func_23(iVar33, (Var0[iVar36 /*2*/])->f_1))
						{
							func_756(iVar33, (Var0[iVar36 /*2*/])->f_1);
						}
					}
					func_76(iVar33, (Var0[iVar36 /*2*/])->f_1, bParam2, 562618531);
				}
				else
				{
					func_759(iVar33, iParam4, (Var0[iVar36 /*2*/])->f_1, 562618531);
				}
				iVar38 = func_521(iVar33);
				if (func_712(iVar38))
				{
					iVar39 = func_760(iVar38);
					func_192(func_430(-333926856, iVar39), (Var0[iVar36 /*2*/])->f_1);
				}
			}
			iVar36++;
		}
		return 1;
	}
	return 0;
}

int func_586(int iParam0)
{
	struct<5> Var0;

	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_4;
}

int func_587(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_188(iParam0, 0, 0) };
	return func_460(iParam0, &Var0, 0, bParam1);
}

int func_588(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

float func_589(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	switch (iParam0)
	{
		case 0:
			fVar0 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_34));
			fVar1 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_34, 0));
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

void func_590(float fParam0)
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
	iVar1 = func_761(2);
	func_762((fParam0 * IntToFloat(iVar1)), 0);
}

void func_591(float fParam0, bool bParam1)
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
	iVar0 = func_763(2);
	func_764((fParam0 * IntToFloat(iVar0)), 0, bParam1);
}

void func_592(float fParam0)
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
	iVar1 = func_765(2);
	func_766((fParam0 * IntToFloat(iVar1)), 0);
}

float func_593(float fParam0, float fParam1)
{
	if (fParam1 != 0f)
	{
		return ((fParam1 / 100f) * 100f);
	}
	return ((fParam0 / 8f) * 100f);
}

void func_594(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (fParam1 == 0f)
	{
		return;
	}
	if (bParam4)
	{
		fParam1 = func_767(iParam0, fParam1, 1);
	}
	func_769(iParam0, (func_768(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

void func_595(float fParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	fVar0 = func_770(13, 2);
	if (fParam0 > 10f)
	{
		fParam0 = 10f;
	}
	if (func_771())
	{
		iVar1 = func_772(fVar0);
		fVar0 = (fVar0 + fParam0);
		iVar2 = func_772(fVar0);
		if (iVar1 != iVar2)
		{
			Global_1954472->f_1331.f_107 = func_773();
			func_774(&(Global_1954472->f_1331.f_107), 0, 0, 1, 0, 0, 0, 0);
		}
		func_775(13, func_405(fVar0, 0f, 100f), 2);
	}
	if (bParam1)
	{
		Global_17172.f_54.f_2438.f_41++;
		if (5 == Global_17172.f_54.f_2438.f_41)
		{
			func_137(109, 0);
		}
	}
}

float func_596(float fParam0, int iParam1)
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

int func_597(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	return func_776(iParam0, fParam1, bParam2, iParam3);
}

void func_598(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (bParam2 || func_150(iParam0, -537818634))
	{
		func_192(func_363(-704089207), 1);
	}
	if (func_150(iParam0, -1457797660))
	{
		func_192(func_363(-1909697259), 1);
	}
	if (func_150(iParam0, 1573112293))
	{
		func_777(func_521(iParam0), 1);
	}
	if (func_150(iParam0, 1939071949))
	{
		func_192(func_430(joaat("used"), -939665347), 1);
	}
	if (func_150(iParam0, 1992556171))
	{
		func_192(func_363(-1295035230), 1);
	}
	if (func_150(iParam0, 1239889275))
	{
		func_192(func_363(905765416), 1);
	}
	switch (iParam0)
	{
		case -1921080134: /* GXTEntry: "Classic Oatcakes" */
		case -635441454: /* GXTEntry: "Sugar Cube" */
		case 1448771675: /* GXTEntry: "Hay" */
			func_192(func_430(joaat("used"), -2049431929 /* GXTEntry: "Feed Bag" */), 1);
			break;
	}
	switch (iParam0)
	{
		case 299161628: /* GXTEntry: "Moonshine" */
			func_192(func_430(joaat("used"), 304473406), 1);
			break;
		case -1907044919: /* GXTEntry: "Opened Kentucky Bourbon" */
		case 688258043: /* GXTEntry: "Kentucky Bourbon" */
			func_192(func_430(joaat("used"), joaat("whiskey")), 1);
			break;
		case -541584777: /* GXTEntry: "Opened Cocaine Gum" */
		case 206762213: /* GXTEntry: "Cocaine Gum" */
			func_192(func_430(joaat("used"), 2119695263), 1);
			break;
		case -653299524: /* GXTEntry: "Snake Oil" */
		case -486559882: /* GXTEntry: "Potent Snake Oil" */
		case 376981280: /* GXTEntry: "Opened Snake Oil" */
			func_192(func_430(joaat("used"), -1791969490), 1);
			break;
		case -324053813: /* GXTEntry: "Chewing Tobacco" */
		case 998010398: /* GXTEntry: "Opened Chewing Tobacco" */
			func_192(func_430(joaat("used"), -155567636), 1);
			break;
		case -2042563684: /* GXTEntry: "Horse Medicine" */
		case -1871448371: /* GXTEntry: "Special Horse Medicine" */
		case -834705084: /* GXTEntry: "Opened Horse Medicine" */
		case -623409049: /* GXTEntry: "Potent Horse Medicine" */
			func_192(func_430(joaat("used"), 497247514), 1);
			break;
		case 1929383243: /* GXTEntry: "Herbivore Bait" */
		case 2036955137: /* GXTEntry: "Potent Herbivore Bait" */
			func_192(func_430(joaat("used"), -868741806), 1);
			break;
		case -1635450397: /* GXTEntry: "Predator Bait" */
		case 1831763320: /* GXTEntry: "Potent Predator Bait" */
			func_192(func_430(joaat("used"), -208442209), 1);
			break;
	}
	if (func_108() == -1)
	{
		if (iParam0 == -1976480343)
		{
			func_192(func_430(joaat("used"), 595572217), 1);
		}
	}
	if (bParam1)
	{
		func_192(func_363(704570463), 1);
	}
	func_778(iParam0, iParam3);
}

int func_599(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1272170->f_20)
	{
		if (&Global_1272170->f_20.f_1[iVar0 /*20*/] == iParam0)
		{
			return (Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1;
		}
		iVar0++;
	}
	return 0;
}

bool func_600()
{
	return Global_1896726->f_382;
}

bool func_601(var uParam0)
{
	return uParam0->f_19;
}

void func_602(var uParam0)
{
	uParam0->f_19 = 0;
}

void func_603(var uParam0)
{
	func_106(1);
	func_44(uParam0, 4);
}

int func_604(var uParam0)
{
	int iVar0;

	if (uParam0->f_25)
	{
		Global_1913166->f_1576 = 0;
		uParam0->f_51 = 0;
		iVar0 = GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(((*Global_1913166)[0 /*9*/])->f_1))
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*Global_1913166)[0 /*9*/])->f_1);
		}
		uParam0->f_26 = func_779(iVar0);
		uParam0->f_27 = func_780(iVar0);
		func_781(uParam0, uParam0->f_26, 1472825031);
		func_781(uParam0, -1171462349, 1472825031);
		func_781(uParam0, 1689071181, 1472825031);
		func_781(uParam0, -1612693182, 1472825031);
		func_781(uParam0, 1856073229, 1472825031);
		return 1;
	}
	if (uParam0->f_50 == 0)
	{
		Global_1913166->f_1576 = 0;
		uParam0->f_51 = 0;
		func_782(uParam0, 600942249);
		uParam0->f_50++;
		return 0;
	}
	else if (uParam0->f_50 == 1)
	{
		func_782(uParam0, -257768755);
		uParam0->f_50++;
		return 0;
	}
	else
	{
		func_782(uParam0, -214678071);
		uParam0->f_50 = 0;
	}
	uParam0->f_51 = 0;
	return 1;
}

int func_605(var uParam0)
{
	int iVar0;
	char cVar1[16];

	uParam0->f_55 = 0;
	uParam0->f_56 = 0;
	if (uParam0->f_25 && DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_35))
	{
		return 1;
	}
	uParam0->f_35 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "CraftingDatastore");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_35, "filter", func_784(uParam0->f_25, -583079595, func_783(uParam0->f_48)));
	if (uParam0->f_25)
	{
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_35, "filterCount", 1);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_35, "filterIndex", 0);
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_35, "headerText", -1710561039);
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_35, "filterCount", 5 + 1);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_35, "filterIndex", uParam0->f_48);
	}
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_35, "tipText", "");
	uParam0->f_47 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_35, "recipes_lines");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_35, "variantVisible", false);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_35, "variantText", " ");
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_35, "variantCount", 0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_35, "variantIndex", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_35, "ShowRpgDescription", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_35, "ShowRpgPlayer", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_35, "ShowRpgHorse", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_35, "RPGDescription", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_35, "ShowIngredients", true);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&cVar1, "ingredient", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		func_785(uParam0->f_37[iVar0], &cVar1, uParam0);
		StringCopy(&cVar1, "tip", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		uParam0->f_42[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_35, &cVar1);
		StringCopy(&cVar1, "Text", 16);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_42[iVar0]), &cVar1, "");
		StringCopy(&cVar1, "Enabled", 16);
		DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_42[iVar0]), &cVar1, 0);
		iVar0++;
	}
	return 1;
}

int func_606(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	bVar2 = func_394();
	iVar0 = uParam0->f_51;
	while (iVar0 <= (Global_1913166->f_1576 - 1))
	{
		if (func_90(((*Global_1913166)[iVar0 /*9*/])->f_6, 0))
		{
			func_786(uParam0, 0, iVar0, bVar2, 1, 0);
			if (iVar1 >= 10)
			{
				uParam0->f_51 = iVar0 + 1;
				return 0;
			}
			iVar1++;
		}
		iVar0++;
	}
	uParam0->f_51 = 0;
	if (uParam0->f_56 == 0)
	{
		uParam0->f_53 = 0;
	}
	uParam0->f_52 = 0;
	return 1;
}

void func_607(var uParam0)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_36))
	{
		uParam0->f_36 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_35, "recipes");
	}
	else
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_36);
	}
	uParam0->f_72 = 600942249;
	uParam0->f_71 = 0;
	uParam0->f_70 = 0;
}

int func_608(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	bVar2 = func_394();
	iVar0 = uParam0->f_51;
	while (iVar0 <= (Global_1913166->f_1576 - 1))
	{
		if ((uParam0->f_53 && ((*Global_1913166)[iVar0 /*9*/])->f_2) || !uParam0->f_53)
		{
			if (Global_1913166->f_1585 != 0)
			{
				bVar3 = func_150(((*Global_1913166)[iVar0 /*9*/])->f_6, Global_1913166->f_1585);
				if (uParam0->f_77 == bVar3)
				{
				}
				else
				{
					func_786(uParam0, 1, iVar0, bVar2, 0, bParam1);
					if (iVar1 >= 50)
					{
						uParam0->f_51 = iVar0 + 1;
						return 0;
					}
					iVar1++;
				}
				iVar0++;
				uParam0->f_51 = 0;
				if (!uParam0->f_77 && Global_1913166->f_1585 != 0)
				{
					uParam0->f_77 = 1;
					return 0;
				}
				uParam0->f_52 = 0;
				uParam0->f_77 = 0;
				return 1;
			}
		}
	}

int func_609(var uParam0, bool bParam1)
{
	int iVar0;

	uParam0->f_54 = 1;
	if (bParam1 && UIAPPS::_IS_APP_ACTIVE(-1624772174))
	{
		if (UISTATEMACHINE::_UISTATEMACHINE_REQUEST_TRANSITION(-1624772174, 1014850361))
		{
			func_46(8);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		iVar0 = UIAPPS::_LAUNCH_APP_BY_HASH(-1624772174);
		if (iVar0 == 0)
		{
			func_46(8);
			return 1;
		}
	}
	return 0;
}

int func_610(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	bVar2 = func_394();
	iVar0 = uParam0->f_51;
	while (iVar0 <= (Global_1913166->f_1576 - 1))
	{
		func_787(uParam0, iVar0, bVar2, 0, 1, 0, 1);
		if (iVar1 >= 50)
		{
			uParam0->f_51 = iVar0 + 1;
			return 0;
		}
		iVar1++;
		iVar0++;
	}
	uParam0->f_57 = 0;
	uParam0->f_51 = 0;
	return 1;
}

void func_611(bool bParam0)
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
	iVar0 = func_788(Global_34);
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

void func_612(var uParam0)
{
	int iVar0;

	func_103(uParam0);
	func_789(uParam0, 1);
	(*uParam0)[2] = func_255("CAMP_REC_QUIT", joaat("INPUT_GAME_MENU_CANCEL"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	if (func_63(32))
	{
		func_130(uParam0[2], 0, 1, 1);
	}
	else
	{
		func_130(uParam0[2], 1, 1, 1);
	}
	(*uParam0)[1] = func_255("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	if (!uParam0->f_25)
	{
		if (func_90(uParam0->f_71, 0))
		{
			uParam0->f_73 = uParam0->f_71;
			uParam0->f_74 = uParam0->f_72;
			func_790(uParam0, &(uParam0->f_70));
		}
		else
		{
			uParam0->f_73 = 0;
		}
		if (func_90(uParam0->f_71, 0))
		{
			if (func_234(uParam0->f_71))
			{
				func_129(uParam0[1], "CAMP_REC_COOK", 1);
			}
			else if (func_283(uParam0->f_71, -1636519629) == -701492487)
			{
				func_129(uParam0[1], "CAMP_REC_BREW", 1);
			}
			else
			{
				func_129(uParam0[1], "CAMP_REC_MAKE", 1);
			}
		}
		(*uParam0)[3] = func_255(func_791(uParam0), joaat("INPUT_GAME_MENU_EXTRA_OPTION"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	else
	{
		(*uParam0)[7] = func_255("CAMP_ADD_TASK", joaat("INPUT_GAME_MENU_RS"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	(*uParam0)[5] = func_792("RECIPE", joaat("INPUT_GAME_MENU_LEFT"), joaat("INPUT_GAME_MENU_RIGHT"), 0);
	func_793(uParam0[5], joaat("INPUT_GAME_MENU_LEFT"));
	func_793(uParam0[5], joaat("INPUT_GAME_MENU_RIGHT"));
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_69))
	{
		iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_69, "iNumCostVariants");
	}
	if (iVar0 > 1 && func_90(uParam0->f_73, 0))
	{
		func_130(uParam0[5], 1, 1, 1);
	}
	else
	{
		func_130(uParam0[5], 0, 1, 1);
	}
	(*uParam0)[6] = func_255("INFO", joaat("INPUT_GAME_MENU_OPTION"), 1, 0, 0, 2, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	if (!uParam0->f_78)
	{
		func_129(uParam0[6], "INFO", 1);
	}
	else
	{
		func_129(uParam0[6], "INGREDIENTS", 1);
	}
	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_36) == 0)
	{
		func_614(uParam0);
		func_130(uParam0[6], 0, 1, 1);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_NO_REC_TIP"));
	}
	func_615(uParam0, uParam0->f_73, uParam0->f_74);
}

int func_613(var uParam0)
{
	int iVar0;

	if (!uParam0->f_25)
	{
		return 0;
	}
	iVar0 = GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (uParam0->f_27 != func_780(iVar0))
	{
		uParam0->f_27 = func_780(iVar0);
		func_44(uParam0, 15);
		return 1;
	}
	if (uParam0->f_26 != func_779(iVar0))
	{
		func_44(uParam0, 4);
		return 1;
	}
	return 0;
}

void func_614(var uParam0)
{
	int iVar0;

	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_47);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_37[iVar0]), "visible", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_37[iVar0]), "inUse", 0);
		iVar0++;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_35, "tipText", "");
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "variantVisible", 0);
}

void func_615(var uParam0, int iParam1, int iParam2)
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

	if (!func_90(iParam1, 0))
	{
		if (func_100(uParam0[1]))
		{
			func_130(uParam0[1], 0, 1, 1);
		}
		return;
	}
	bVar2 = func_394();
	bVar3 = true;
	bVar4 = false;
	if (!Global_1913166->f_1579 && func_794(iParam1, iParam2, 1))
	{
		bVar4 = true;
		bVar3 = false;
	}
	else if (!func_795(iParam1, iParam2, &uVar1, &uVar0, &iVar5, 0, bVar2, 0) || func_390(uParam0->f_22))
	{
		bVar3 = false;
	}
	else if (uParam0->f_25 && !func_796(iParam1))
	{
		bVar3 = false;
	}
	if (bVar3)
	{
		if ((iParam1 != -1199896558 && func_403(iParam1, 1, 0)) || (!uParam0->f_28 && ((uParam0->f_76 || iParam2 == -214678071) || iParam2 == 278772510)))
		{
			bVar3 = false;
		}
		else if (!func_396(2) && func_283(iParam1, -1636519629) == -701492487)
		{
			bVar3 = false;
		}
		else if (uParam0->f_33 == -1)
		{
			iVar6 = func_94(iParam1, 0, 0, 0);
			iVar7 = func_587(iParam1, 0);
			iVar8 = func_218(iParam1, iParam2, bVar2);
			if (iVar7 == -1)
			{
				iVar7 = iVar8;
			}
			else
			{
				iVar7 = (iVar7 - iVar6);
			}
			uParam0->f_33 = func_588(iVar7, iVar8);
		}
	}
	if (func_100(uParam0[1]))
	{
		if (uParam0->f_25)
		{
			func_129(uParam0[1], "DONATE_ING", 1);
		}
		else if (func_234(iParam1))
		{
			func_129(uParam0[1], "CAMP_REC_COOK", 1);
		}
		else if (func_283(iParam1, -1636519629) == -701492487)
		{
			func_129(uParam0[1], "CAMP_REC_BREW", 1);
		}
		else
		{
			func_129(uParam0[1], "CAMP_REC_MAKE", 1);
		}
		func_130(uParam0[1], bVar3, 1, 1);
	}
	func_797(iParam1, iParam2, uParam0, iVar5, bVar4);
	if (func_100(uParam0[6]))
	{
		func_130(uParam0[6], !bVar4, 1, 1);
	}
	func_798(uParam0);
}

bool func_616(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_100(iParam0))
	{
		return false;
	}
	iVar0 = func_229(iParam0);
	return HUD::_UIPROMPT_IS_JUST_RELEASED(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

void func_617(char* sParam0, char* sParam1, int iParam2)
{
	int iVar0;

	iVar0 = AUDIO::GET_SOUND_ID();
	if (iVar0 != -1)
	{
		AUDIO::_0xCE5D0FFE83939AF1(iVar0, sParam0, sParam1, iParam2);
		(*Global_1956139)[Global_1956139->f_25] = iVar0;
		Global_1956139->f_25 = (Global_1956139->f_25 + 1 % 24);
	}
}

void func_618(var uParam0)
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

	if (func_90(uParam0->f_73, 0))
	{
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(8, uParam0->f_73))
		{
			return;
		}
		UILOG::_UILOG_ADD_ENTRY_HASH(8, uParam0->f_73, Global_35, uParam0->f_73, -2136842124, 0);
		func_451(uParam0->f_73, uParam0->f_74, &Var1, &iVar0, 1, 0);
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(8, uParam0->f_73, 0, "CAMP_RECIPE_LOG_ALL_OBJ", false, 1, 0);
		iVar33 = 0;
		while (iVar33 < iVar0)
		{
			if (iVar33 >= 4)
			{
			}
			else
			{
				iVar34 = &Var1[iVar33 /*2*/];
				if (func_90(iVar34, 0))
				{
					iVar36 = func_94(iVar34, 0, 0, 0);
					sVar35 = MISC::_CREATE_VAR_STRING(130, "CAMP_RECIPE_LOG_OBJ", iVar36, (Var1[iVar33 /*2*/])->f_1, MISC::_CREATE_VAR_STRING(0, iVar34));
					bVar37 = func_23(iVar34, (Var1[iVar33 /*2*/])->f_1);
					if (bVar37)
					{
						iVar32++;
					}
					UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(8, uParam0->f_73, iVar34, sVar35, bVar37, 1, 1);
				}
				iVar33++;
			}
		}
		if (func_799(uParam0->f_73, &Var38, joaat("inventory"), 0, 0, 0))
		{
			UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(8, uParam0->f_73, Var38, Var38.f_1);
			UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(8, uParam0->f_73, Var38, Var38.f_1);
		}
		Global_1131092->f_339.f_16 = uParam0->f_73;
		Global_1131092->f_339.f_17 = uParam0->f_74;
		sVar41 = MISC::_CREATE_VAR_STRING(2, "CAMP_RECIPE_LOG_MISSION_DTL", iVar32, iVar0);
		UILOG::_0x763637F9B838B0A7(8, uParam0->f_73, sVar41);
	}
	func_798(uParam0);
}

void func_619(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_136(uParam0[1], 0))
	{
		return;
	}
	if (uParam0->f_25)
	{
		if (func_90(uParam0->f_73, 0))
		{
			func_632(1);
			func_29(&(uParam0->f_86));
			func_44(uParam0, 16);
		}
		return;
	}
	func_104(uParam0, 1);
	func_120((*uParam0)[1], 1, 1);
	func_120((*uParam0)[5], 1, 1);
	func_120((*uParam0)[6], 1, 1);
	func_120((*uParam0)[3], 1, 1);
	func_120((*uParam0)[7], 1, 1);
	uParam0->f_32 = 1;
	if (!uParam0->f_76 && !func_234(uParam0->f_73))
	{
		func_46(131072);
		iVar0 = func_283(uParam0->f_73, -1636519629);
		iVar1 = func_628(uParam0, iVar0);
		if (iVar1 != 0)
		{
			uParam0->f_32 = 0;
			ANIMSCENE::RESET_ANIM_SCENE(iVar1, "pl_craft");
			ANIMSCENE::LOAD_ANIM_SCENE(iVar1);
			uParam0->f_85 = 0;
			if (iVar0 != -1610298873)
			{
				if (iVar0 == -842117252)
				{
					if (uParam0->f_73 == 963726415)
					{
						uParam0->f_85 = -1906499827;
					}
					else
					{
						uParam0->f_85 = -467664954;
					}
				}
				else if (func_150(uParam0->f_73, -1588156645))
				{
					uParam0->f_85 = func_586(func_193(uParam0->f_73, 0));
				}
				else if (func_150(uParam0->f_73, 457423347))
				{
					uParam0->f_85 = -193645029;
				}
				else if (func_150(uParam0->f_73, -1846429632))
				{
					uParam0->f_85 = 2132464141;
				}
				else if (func_150(uParam0->f_73, -1067199465))
				{
					uParam0->f_85 = 1186037675;
				}
				else
				{
					uParam0->f_85 = func_586(uParam0->f_73);
				}
			}
			if (uParam0->f_85 != 0)
			{
				STREAMING::REQUEST_MODEL(uParam0->f_85, false);
			}
		}
		func_129(uParam0[2], "CAMP_REC_BACK", 1);
		func_126(uParam0[2], -1067771379, 0, 1);
		func_130(uParam0[2], 0, 1, 1);
		func_256(uParam0[2], 0, 1);
		(*uParam0)[4] = func_255("CAMP_REC_BACK", joaat("INPUT_GAME_MENU_CANCEL"), 1, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("MEDIUM_TIMED_EVENT"), 0);
		func_258((*uParam0)[4], "INPUT_PCRAFT_EXIT");
		func_126(uParam0[4], -1067771379, 0, 1);
		func_130(uParam0[4], 0, 1, 1);
		func_257(uParam0[4], 19, 1, 1);
		func_257(uParam0[4], 20, 1, 1);
		func_257(uParam0[4], 13, 1, 1);
		func_257(uParam0[2], 13, 1, 1);
		if (func_100(uParam0[2]))
		{
			func_126(uParam0[2], -1067771379, 0, 1);
		}
		uParam0->f_34 = 0;
		func_44(uParam0, 12);
	}
	else
	{
		func_44(uParam0, 11);
	}
}

bool func_620(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_100(iParam0))
	{
		return false;
	}
	iVar0 = func_229(iParam0);
	return HUD::_UIPROMPT_HAS_STANDARD_MODE_COMPLETED(((*Global_1949759)[iVar0 /*23*/])->f_3, iParam1);
}

void func_621(var uParam0, bool bParam1)
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
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_69))
	{
		iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_69, "iCurCostVariant");
		iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_69, "iNumCostVariants");
		bVar2 = false;
		if (uParam0->f_74 == -214678071 || uParam0->f_74 == 278772510)
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
				Var5 = { func_669(-1591664384, -1591664384, 0, 0, -214678071, 0, -1, func_283(uParam0->f_73, 1697966752), 0) };
				if (func_671(Var5, &iVar3, &iVar4, 0))
				{
					if (iVar4 > 0)
					{
						uParam0->f_74 = -214678071;
						uParam0->f_73 = func_672(0, iVar3);
						bVar2 = true;
					}
					func_677(iVar3);
				}
			}
			else
			{
				Var5 = { func_669(-1591664384, -1591664384, 0, 0, 278772510, 0, -1, func_283(uParam0->f_73, 1697966752), 0) };
				if (func_671(Var5, &iVar3, &iVar4, 0))
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
							iVar17 = func_672(iVar16, iVar3);
							if (func_150(iVar17, iVar15))
							{
								uParam0->f_74 = 278772510;
								uParam0->f_73 = iVar17;
								bVar2 = true;
							}
							else
							{
								iVar16++;
							}
						}
					}
					func_677(iVar3);
				}
			}
		}
		else
		{
			iVar18 = ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(uParam0->f_73);
			Var19.f_4 = 15;
			Var19.f_36 = 10;
			while ((((Var19.f_2 != 1644203656 || Var19 == -489628648) || Var19 == -2141192156) || (!Global_1913166->f_1579 && func_794(uParam0->f_73, Var19, 1))) && iVar66 < iVar18)
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
				if (ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COST(uParam0->f_73, iVar0, &Var19))
				{
				}
			}
			uParam0->f_74 = Var19;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_69, "eCost", uParam0->f_74);
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_69, "eOutputItem", uParam0->f_73);
		iVar67 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_69, "iIndex");
		if (iVar67 >= 0 && iVar67 < &Global_1913166)
		{
			iVar68 = ((*Global_1913166)[iVar67 /*9*/])->f_8;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_69, "iCurCostVariant", iVar0);
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_35, "variantIndex", (iVar0 + 1 - iVar68));
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_35, "variantText", MISC::_CREATE_VAR_STRING(0, uParam0->f_73));
		uParam0->f_33 = -1;
		uParam0->f_21 = 0;
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgDescription"))
		{
			ATTRIBUTE::_0x7E2C766ADB2C5F1A(uParam0->f_73, 1);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_35, "RPGDescription", func_800(uParam0->f_73));
		func_787(uParam0, -1, func_394(), uParam0->f_69, 0, bVar2, 0);
		func_615(uParam0, uParam0->f_73, uParam0->f_74);
	}
}

void func_622(var uParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		uParam0->f_78 = !uParam0->f_78;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgDescription", uParam0->f_78);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowIngredients", !uParam0->f_78);
	if (!uParam0->f_78)
	{
		if (func_100(uParam0[6]))
		{
			func_129(uParam0[6], "INFO", 1);
		}
		ATTRIBUTE::_0xD962F8579D702DB5();
		func_801(uParam0);
	}
	else
	{
		if (func_100(uParam0[6]))
		{
			func_129(uParam0[6], "INGREDIENTS", 1);
		}
		func_802(uParam0);
	}
	if (uParam0->f_74 == -214678071)
	{
		if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_69, "enabled") == 1)
		{
			if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_69, "iNumCostVariants") <= 1 && uParam0->f_78)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CAMP_MEAT_POOR"));
			}
			else
			{
				iVar0 = func_218(uParam0->f_73, uParam0->f_74, func_394());
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "COOK_ING_HAVE", iVar0));
			}
		}
	}
}

void func_623(var uParam0)
{
	if (uParam0->f_25)
	{
		return;
	}
	ATTRIBUTE::_0xD962F8579D702DB5();
	func_803(uParam0);
	func_614(uParam0);
	func_801(uParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgDescription", 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowIngredients", 0);
	uParam0->f_73 = 0;
	uParam0->f_74 = 0;
	func_615(uParam0, 0, 0);
	func_44(uParam0, 9);
}

void func_624(var uParam0, int iParam1)
{
	func_614(uParam0);
	func_801(uParam0);
	func_790(uParam0, &(iParam1->f_3));
}

void func_625(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_283(uParam0->f_73, -1636519629);
	if (iVar0 == 414472632)
	{
		uParam0->f_49 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_79))
		{
			iVar1 = func_804(uParam0->f_73);
			if (iVar1 != 0)
			{
				uParam0->f_79 = OBJECT::CREATE_OBJECT(iVar1, Global_35, true, NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, false);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_79, false, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_79, Global_34, PED::GET_PED_BONE_INDEX(Global_34, 37709), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0, 0);
			}
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_59, "player", Global_34, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_59);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_59, "pl_craft", true);
	}
	else if (iVar0 == -1136843638)
	{
		uParam0->f_49 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_62, "arrow", uParam0->f_81, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_62, "player", Global_34, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_62);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_62, "pl_craft", true);
	}
	else if (iVar0 == 786205940)
	{
		uParam0->f_49 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_63, "player", Global_34, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_63);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_63, "pl_craft", true);
	}
	else if (iVar0 == -715814988)
	{
		uParam0->f_49 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_61, "player", Global_34, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_79))
		{
			iVar2 = func_804(uParam0->f_73);
			if (iVar2 != 0)
			{
				uParam0->f_79 = OBJECT::CREATE_OBJECT(iVar2, Global_35, true, NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, false);
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_79, false);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_79, false, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_79, Global_34, PED::GET_PED_BONE_INDEX(Global_34, 37709), func_805(uParam0->f_73), 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0, 0);
			}
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_61, "bullet", uParam0->f_79, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_61);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_61, "pl_craft", true);
	}
	else if (iVar0 == -732326901)
	{
		uParam0->f_49 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_81))
		{
			uParam0->f_81 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("weapon_thrown_throwing_knives"), 1, Global_35, 1, 1065353216);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_81, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_81, false, false);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_64, "player", Global_34, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_64);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_64, "pl_craft", true);
	}
	else if (iVar0 == -1141771998)
	{
		uParam0->f_49 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_81))
		{
			uParam0->f_81 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("weapon_thrown_tomahawk"), 1, Global_35, 1, 1065353216);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_81, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_81, false, false);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_65, "player", Global_34, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_65);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_65, "pl_craft", true);
	}
	else if (iVar0 == 364689687)
	{
		uParam0->f_49 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_81))
		{
			uParam0->f_81 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("weapon_thrown_throwing_knives"), 1, Global_35, 1, 1065353216);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_81, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_81, false, false);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_83))
		{
			uParam0->f_83 = OBJECT::CREATE_OBJECT(joaat("p_cs_rag01x"), Global_35, true, NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_83, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_83, false, false);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_66, "RAG", uParam0->f_83, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_66, "player", Global_34, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_66);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_66, "pl_craft", true);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_65, "pl_craft", true);
	}
	else if (iVar0 == -842117252)
	{
		uParam0->f_49 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_67, "player", Global_34, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_67);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_67, "pl_craft", true);
	}
	else if (iVar0 == -1610298873)
	{
		uParam0->f_49 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_68, "player", Global_34, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_68);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_68, "pl_craft", true);
	}
	else
	{
		uParam0->f_49 = BUILTIN::ROUND((ENTITY::GET_ANIM_DURATION(func_806(uParam0->f_73), func_807(uParam0->f_73)) * 1000f));
		func_29(&(uParam0->f_86));
		TASK::TASK_PLAY_ANIM(Global_34, func_806(uParam0->f_73), func_807(uParam0->f_73), 1090519040, -1056964608, -1, 67108880, 0, 0, 4096, 0, "Satchel_Only_filter", 0);
	}
}

void func_626(var uParam0, bool bParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_100(uParam0[iVar0]))
		{
			iVar1 = 0;
			while (iVar1 < *uParam2)
			{
				if (func_100(uParam2[iVar1]))
				{
					if (uParam0[iVar0] == uParam2[iVar1])
					{
					}
				}
				iVar1++;
			}
			func_130(uParam0[iVar0], bParam1, 1, 1);
		}
		iVar0++;
	}
}

int func_627(int iParam0)
{
	if ((((((((iParam0 == -715814988 || iParam0 == -1136843638) || iParam0 == -732326901) || iParam0 == 786205940) || iParam0 == -1141771998) || iParam0 == 364689687) || iParam0 == 414472632) || iParam0 == -842117252) || iParam0 == -1610298873)
	{
		return 1;
	}
	return 0;
}

int func_628(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case -715814988:
			return uParam0->f_61;
		case -732326901:
			return uParam0->f_64;
		case -1136843638:
			return uParam0->f_62;
		case 786205940:
			return uParam0->f_63;
		case -1141771998:
			return uParam0->f_65;
		case 364689687:
			return uParam0->f_66;
		case 414472632:
			return uParam0->f_59;
		case -842117252:
			return uParam0->f_67;
		case -1610298873:
			return uParam0->f_68;
		default:
			break;
	}
	return 0;
}

bool func_629(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	var uVar0;
	var uVar1;
	var uVar2;

	return func_795(iParam0, iParam1, &uVar0, &uVar1, &uVar2, bParam2, bParam3, iParam4);
}

void func_630(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	uParam0->f_51 = 0;
	func_46(262144);
	func_98(&(uParam0->f_81), &(uParam0->f_82));
	func_98(&(uParam0->f_79), &(uParam0->f_80));
	iVar0 = func_628(uParam0, iParam1);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(iVar0, "bStopLoop", true, false);
	if (!func_63(128))
	{
		func_130(uParam0[2], 1, 1, 1);
		func_130(uParam0[4], 1, 1, 1);
	}
	func_256(uParam0[2], 0, 1);
	func_256(uParam0[4], 1, 1);
	func_402(uParam0[1], 1);
	func_120((*uParam0)[1], 1, 1);
	(*uParam0)[1] = func_255("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, uParam0->f_49, uParam0->f_49 + 1, 1, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	func_257(uParam0[1], 11, 1, 1);
	func_257(uParam0[1], 19, 1, 1);
	func_126(uParam0[1], -1067771379, 0, 1);
	func_130(uParam0[1], bParam2, 1, 1);
	func_44(uParam0, 13);
}

int func_631()
{
	int iVar0;

	iVar0 = GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return ((*Global_1128435)[iVar0 /*83*/])->f_38.f_28.f_2;
	}
	return 255;
}

void func_632(bool bParam0)
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
	func_809(iVar14, Var0, func_808(GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))));
}

void func_633(var uParam0)
{
	int iVar0;

	iVar0 = GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (iVar0 == PLAYER::PLAYER_ID())
	{
		func_810(iVar0, 1);
		func_811(iVar0, uParam0);
		func_813(func_812(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())), uParam0);
	}
	else
	{
		func_632(0);
		func_814(uParam0);
	}
}

void func_634(var uParam0)
{
	var uVar0;
	vector3 vVar4;

	if (TELEMETRY::_0xF184B3ECE36219CF(uParam0->f_22, &uVar0))
	{
		vVar4 = { func_815(&Global_1275573) };
		TELEMETRY::_0xDF516E598D966D06(&uVar0, 0, vVar4.z, 0, 1, 1084182731, 531932013, uParam0->f_73, func_150(uParam0->f_73, -2011345500));
	}
}

void func_635(int iParam0)
{
	if (Global_1939067->f_102.f_2 >= iParam0)
	{
		return;
	}
	Global_1939067->f_102.f_2 = iParam0;
}

int func_636(int iParam0)
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

int func_637(int iParam0)
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

int func_638(int iParam0)
{
	int iVar0;

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_162(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

bool func_639(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6, int iParam7)
{
	return func_816(&uParam0, iParam4, uParam5, bParam6, iParam7);
}

int func_640(int iParam0)
{
	if (!func_90(iParam0, 0))
	{
	}
	if (func_150(iParam0, 162787671))
	{
		return 1;
	}
	return 0;
}

int func_641(int iParam0, int iParam1)
{
	struct<4> Var0;

	if (!func_817(856287005, iParam0))
	{
		return 0;
	}
	Var0 = { func_412() };
	*iParam1 = func_559(Var0, iParam0, 0, -1);
	if (!func_90(*iParam1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_642(int iParam0)
{
	if (!func_90(iParam0, 0))
	{
	}
	return ((iParam0 == 1362183957 || iParam0 == 563996796) || iParam0 == -1128398025);
}

bool func_643(int iParam0)
{
	if (!func_90(iParam0, 0))
	{
	}
	return iParam0 == 2031387366;
}

int func_644(int iParam0)
{
	if ((((iParam0 == 263080063 || iParam0 == -34331381) || iParam0 == -993578318) || iParam0 == 579268144) || iParam0 == 1104489688)
	{
		return 1;
	}
	return 0;
}

int func_645(int iParam0, var uParam1, bool bParam2)
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
	Var2 = { func_364(0, iParam0, -1591664384, -1591664384, 0, 0, 0) };
	func_366(&Var2, func_412());
	if (func_367(&Var2, &iVar0, &iVar1, 0))
	{
		Var16.f_9 = -1591664384;
		iVar30 = 0;
		while (iVar30 < iVar1)
		{
			if (func_203(&Var16, iVar30, iVar0, iVar1))
			{
				if (func_90(Var16.f_4, 0) && !Var16.f_10)
				{
					if (bParam2 && func_644(Var16.f_4))
					{
					}
					else
					{
						*uParam1 = { Var16 };
						func_205(iVar0);
						return 1;
					}
				}
			}
			iVar30++;
		}
		func_205(iVar0);
	}
	return 0;
}

int func_646(int iParam0)
{
	var uVar0;

	if (func_108() != -1)
	{
		return 0;
	}
	if (func_351(iParam0, 1048576))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_219(iParam0, &uVar0, 1, 0, 0, -1, 0);
	}
	return func_23(iParam0, 1);
}

void func_647(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (func_91(iParam0) != joaat("weapon"))
	{
		return;
	}
	iVar0 = func_194(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !func_410(iVar0))
	{
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, iVar0, 0, 0) && func_94(iParam0, 0, 0, 0) == 0))
		{
			if (func_108() == -1)
			{
				func_195(iVar0);
			}
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_185(iParam0, iParam1, 0, 0, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_648(int iParam0, int iParam1)
{
	if (func_150(iParam0, 58855631))
	{
		func_818(iParam0, -915411861, iParam1, 1);
	}
}

int func_649(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_428(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_73(bParam1), iParam0, iParam3);
}

int func_650()
{
	if (((((!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_34, -1) && !PED::IS_PED_USING_ANY_SCENARIO(Global_34)) && !func_819(Global_34, 1369124074)) && !func_819(Global_34, 713668775)) && !TASK::_0xEC7E480FF8BD0BED(Global_34)) && !PED::IS_PED_IN_ANY_VEHICLE(Global_34, false))
	{
		return 1;
	}
	return 0;
}

int func_651(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_652(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_39.f_3434[iVar1]), iVar2);
}

void func_653(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_39.f_3434[iVar1];
	MISC::SET_BIT(&uVar3, iVar2);
	Global_39.f_3434[iVar1] = uVar3;
}

void func_654(int iParam0)
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
			func_820(1);
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
			func_821(1);
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_821(2);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_821(3);
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
			func_822(1);
			break;
		case 33:
			func_823(1);
			break;
		case 34:
			func_824(1);
			break;
		case 35:
			break;
		case 36:
			func_825(0);
			break;
		case 37:
			func_826(0);
			break;
		case 38:
			func_827(0);
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
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if (func_828() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_829("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_137(675, 0);
			break;
		case 3:
			if (func_828() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_829("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_137(676, 0);
			break;
		case 4:
			if (func_828() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_829("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_137(677, 0);
			break;
		case 5:
			if (func_828() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_829("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_137(678, 0);
			break;
		case 23:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-200143754, true);
			UNLOCK::_UNLOCK_SET_VISIBLE(-200143754, true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			break;
		case 47:
			if (func_108() == -1)
			{
				if (!func_23(1013902307, 1))
				{
					func_426(1013902307, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_108() == -1)
			{
				if (!func_23(1013902307, 1))
				{
					func_426(1013902307, 1, 752097756);
				}
				if (!func_23(142640135, 1))
				{
					func_426(142640135, 1, 752097756);
				}
			}
			break;
		case 48:
			if (func_108() == -1)
			{
				if (!func_23(786809402, 1))
				{
					func_426(786809402, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_108() == -1)
			{
				if (!func_23(786809402, 1))
				{
					func_426(786809402, 1, 752097756);
				}
				if (!func_23(-518019409, 1))
				{
					func_426(-518019409, 1, 752097756);
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
			UNLOCK::_UNLOCK_SET_UNLOCKED(-843169622, true);
			Global_1939178->f_41 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 45:
			break;
		case 46:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 51:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-78935213, true);
			break;
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-384786155, true);
			break;
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(296662302, true);
			break;
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-1871453000, true);
			break;
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(1397349651, true);
			break;
	}
}

void func_655(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_34, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar2 = func_588(WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_34, iParam0, iVar2);
		if (WEAPON::GET_MAX_AMMO(Global_34, &iVar1, iParam0) && WEAPON::GET_AMMO_IN_PED_WEAPON(Global_34, iParam0) > iVar1)
		{
			WEAPON::SET_PED_AMMO(Global_34, iParam0, iVar1);
		}
	}
}

int func_656(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_210(iParam0, joaat("default"));
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_188(iParam0, 0, 0) };
	if (func_219(iParam0, &Var1, iParam1, 0, 0, -1, 0))
	{
		return 0;
	}
	if (!func_78(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_73(0), &uVar6, &Var1, iParam0, Var1.f_4, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

void func_657(int iParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34) || Global_1939178->f_6)
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
	iVar2 = func_773();
	func_774(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_34, sVar1, iVar2);
}

int func_658(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_250(iParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, 954660191) <= 0)
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

int func_659()
{
	return 0;
}

bool func_660(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

int func_661(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_662(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	if (WEAPON::_0x705BE297EEBDB95D(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			if (!func_421(49))
			{
				if (!func_421(47))
				{
					return 149;
				}
				return 151;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (!func_421(50))
			{
				if (!func_421(48))
				{
					return 150;
				}
				return 152;
			}
		}
	}
	return 153;
}

int func_663(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	int iVar25;

	if (func_108() == 0)
	{
		return 0;
	}
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_23(1811977508 /* GXTEntry: "Elk Antler Trinket" */, 1))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	MISC::_0x48E4D50F87A96AA5(Global_34, 1, 1, iParam0, &Var1, 0);
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
			if (func_90(iVar25, 0) && func_150(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_664(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (bParam3)
		{
			func_830(iParam0, 1000);
			return;
		}
		sParam1 = "FEED_MONEY_EARN";
	}
	func_362(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_665(int iParam0, bool bParam1, float fParam2, int iParam3)
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
		if (func_831() || func_832())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_362(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
		}
		func_362(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, 752097756);
		func_192(func_363(1644987397), iVar1);
	}
}

char* func_666(int iParam0)
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

int func_667(int iParam0)
{
	var uVar0;

	if (!func_799(iParam0, &uVar0, joaat("inventory"), 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

int func_668(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (iParam0 != 0)
	{
		iVar3 = func_162(iParam0);
		if (iVar3 != 0)
		{
			iVar4 = func_833(iParam0);
			iVar0 = 0;
			while (iVar0 < iVar4)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar3, iVar0, &iVar1))
				{
					iVar2 = iVar1;
					if (iVar2 == iParam1)
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

struct<10> func_669(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

void func_670(int iParam0, int iParam1, var uParam2, int iParam3)
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
		uVar6 = &Var7.f_1[iVar1];
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
							if (uParam2[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
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
		if (&fVar21[iVar0] != 1f)
		{
			((*uParam2)[iVar0 /*2*/])->f_1 = (BUILTIN::ROUND((IntToFloat((10000 * ((*uParam2)[iVar0 /*2*/])->f_1)) * (&fVar21[iVar0] / 1f))) / 10000);
		}
		iVar0++;
	}
}

int func_671(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_672(int iParam0, int iParam1)
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

int func_673(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -151356522: /* GXTEntry: "Poor Bluegill" */
		case 1006434513: /* GXTEntry: "Bluegill" */
			iVar0 = joaat("a_c_fishbluegil_01_sm");
			break;
		case 306916738: /* GXTEntry: "Bullhead Catfish" */
		case 1481288777: /* GXTEntry: "Poor Bullhead Catfish" */
			iVar0 = joaat("a_c_fishbullheadcat_01_sm");
			break;
		case -1824685471: /* GXTEntry: "Poor Chain Pickerel" */
		case 724563284: /* GXTEntry: "Chain Pickerel" */
			iVar0 = joaat("a_c_fishchainpickerel_01_sm");
			break;
		case 803930024: /* GXTEntry: "Poor Channel Catfish" */
		case 1917027383: /* GXTEntry: "Channel Catfish" */
			iVar0 = joaat("a_c_fishchannelcatfish_01_lg");
			break;
		case -855052577: /* GXTEntry: "Lake Sturgeon" */
		case 1111663869: /* GXTEntry: "Poor Lake Sturgeon" */
			iVar0 = joaat("a_c_fishlakesturgeon_01_lg");
			break;
		case -5376850: /* GXTEntry: "Largemouth Bass" */
		case 1425358430: /* GXTEntry: "Poor Largemouth Bass" */
			iVar0 = joaat("a_c_fishlargemouthbass_01_ms");
			break;
		case 1297433586: /* GXTEntry: "Poor Longnose Gar" */
		case 1338219162: /* GXTEntry: "Longnose Gar" */
			iVar0 = joaat("a_c_fishlongnosegar_01_lg");
			break;
		case -1538397860: /* GXTEntry: "Muskie" */
		case -293259613: /* GXTEntry: "Poor Muskie" */
			iVar0 = joaat("a_c_fishmuskie_01_lg");
			break;
		case 193037129: /* GXTEntry: "Northern Pike" */
		case 588902637: /* GXTEntry: "Poor Northern Pike" */
			iVar0 = joaat("a_c_fishnorthernpike_01_lg");
			break;
		case -861419347: /* GXTEntry: "Poor Perch" */
		case 1416872916: /* GXTEntry: "Perch" */
			iVar0 = joaat("a_c_fishperch_01_sm");
			break;
		case 357567274: /* GXTEntry: "Poor Redfin Pickerel" */
		case 1500919793: /* GXTEntry: "Redfin Pickerel" */
			iVar0 = joaat("a_c_fishredfinpickerel_01_sm");
			break;
		case 683583793: /* GXTEntry: "Poor Rock Bass" */
		case 1042542561: /* GXTEntry: "Rock Bass" */
			iVar0 = joaat("a_c_fishrockbass_01_sm");
			break;
		case -1202625002: /* GXTEntry: "Poor Smallmouth Bass" */
		case 56657913: /* GXTEntry: "Smallmouth Bass" */
			iVar0 = joaat("a_c_fishsmallmouthbass_01_ms");
			break;
		case 485620834: /* GXTEntry: "Poor Sockeye Salmon" */
		case 1570826681: /* GXTEntry: "Sockeye Salmon" */
			iVar0 = joaat("a_c_fishsalmonsockeye_01_ms");
			break;
		case 727522818: /* GXTEntry: "Poor Steelhead Trout" */
		case 785407605: /* GXTEntry: "Steelhead Trout" */
			iVar0 = joaat("a_c_fishrainbowtrout_01_ms");
			break;
		case -1457420231: /* GXTEntry: "Good Bat Carcass" */
		case 563848610: /* GXTEntry: "Poor Bat Carcass" */
		case 1432949803: /* GXTEntry: "Perfect Bat Carcass" */
			iVar0 = joaat("a_c_bat_01");
			break;
		case -2120099592: /* GXTEntry: "Poor Blue Jay Carcass" */
		case -983831788: /* GXTEntry: "Perfect Blue Jay Carcass" */
		case 1848456619: /* GXTEntry: "Good Blue Jay Carcass" */
			iVar0 = joaat("a_c_bluejay_01");
			break;
		case -1882344824: /* GXTEntry: "Perfect Bullfrog Carcass" */
		case -1640704323: /* GXTEntry: "Good Bullfrog Carcass" */
		case -1134447619: /* GXTEntry: "Poor Bullfrog Carcass" */
			iVar0 = joaat("a_c_frogbull_01");
			break;
		case -1969404854: /* GXTEntry: "Perfect Cardinal Carcass" */
		case 183958842: /* GXTEntry: "Good Cardinal Carcass" */
		case 1948158930: /* GXTEntry: "Poor Cardinal Carcass" */
			iVar0 = joaat("a_c_cardinal_01");
			break;
		case -1323780599: /* GXTEntry: "Poor Cedar Waxwing Carcass" */
		case -532099639: /* GXTEntry: "Good Cedar Waxwing Carcass" */
		case 905173572: /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
			iVar0 = joaat("a_c_cedarwaxwing_01");
			break;
		case -1586332975: /* GXTEntry: "Poor Chipmunk Carcass" */
		case -832850511: /* GXTEntry: "Perfect Chipmunk Carcass" */
		case 1857501916: /* GXTEntry: "Good Chipmunk Carcass" */
			iVar0 = joaat("a_c_chipmunk_01");
			break;
		case -1888757291: /* GXTEntry: "Perfect Crab Carcass" */
		case 894877715: /* GXTEntry: "Good Crab Carcass" */
		case 995863399: /* GXTEntry: "Poor Crab Carcass" */
			iVar0 = joaat("a_c_crab_01");
			break;
		case -1905834457: /* GXTEntry: "Good Crow Carcass" */
		case -110353515: /* GXTEntry: "Poor Crow Carcass" */
		case 59384454: /* GXTEntry: "Perfect Crow Carcass" */
			iVar0 = joaat("a_c_crow_01");
			break;
		case -1464585113: /* GXTEntry: "Perfect Oriole Carcass" */
		case -610456424: /* GXTEntry: "Poor Oriole Carcass" */
		case -284151822: /* GXTEntry: "Good Oriole Carcass" */
			iVar0 = joaat("a_c_oriole_01");
			break;
		case -1956973834: /* GXTEntry: "Perfect Carolina Parakeet Carcass" */
		case -738999731: /* GXTEntry: "Poor Carolina Parakeet Carcass" */
		case 566023444: /* GXTEntry: "Good Carolina Parakeet Carcass" */
			iVar0 = joaat("a_c_carolinaparakeet_01");
			break;
		case -1999212658: /* GXTEntry: "Poor Pigeon Carcass" */
		case -593435395: /* GXTEntry: "Good Pigeon Carcass" */
		case -245335326: /* GXTEntry: "Perfect Pigeon Carcass" */
			iVar0 = joaat("a_c_pigeon");
			break;
		case -1726572562: /* GXTEntry: "Good Quail Carcass" */
		case -1017987135: /* GXTEntry: "Perfect Quail Carcass" */
		case 2058475216: /* GXTEntry: "Poor Quail Carcass" */
			iVar0 = joaat("a_c_quail_01");
			break;
		case -1909348309: /* GXTEntry: "Good Rat Carcass" */
		case -1788506246: /* GXTEntry: "Poor Rat Carcass" */
		case 1761263432: /* GXTEntry: "Perfect Rat Carcass" */
			iVar0 = joaat("a_c_rat_01");
			break;
		case -1290897778: /* GXTEntry: "Perfect Robin Carcass" */
		case -350704687: /* GXTEntry: "Poor Robin Carcass" */
		case 765892430: /* GXTEntry: "Good Robin Carcass" */
			iVar0 = joaat("a_c_robin_01");
			break;
		case -318217782: /* GXTEntry: "Good Songbird Carcass" */
		case -100913452: /* GXTEntry: "Perfect Songbird Carcass" */
		case 72307351: /* GXTEntry: "Poor Songbird Carcass" */
			iVar0 = joaat("a_c_songbird_01");
			break;
		case -1867587109: /* GXTEntry: "Good Sparrow Carcass" */
		case 182158309: /* GXTEntry: "Poor Sparrow Carcass" */
		case 313332607: /* GXTEntry: "Perfect Sparrow Carcass" */
			iVar0 = joaat("a_c_sparrow_01");
			break;
		case 444160793: /* GXTEntry: "Perfect Squirrel Carcass" */
		case 1205453831: /* GXTEntry: "Poor Squirrel Carcass" */
		case 1815539745: /* GXTEntry: "Good Squirrel Carcass" */
			iVar0 = joaat("a_c_squirrel_01");
			break;
		case -2123600216: /* GXTEntry: "Poor Toad Carcass" */
		case -146690338: /* GXTEntry: "Good Toad Carcass" */
		case -124539232: /* GXTEntry: "Perfect Toad Carcass" */
			iVar0 = joaat("a_c_toad_01");
			break;
		case -1403731492: /* GXTEntry: "Good Woodpecker Carcass" */
		case -843795569: /* GXTEntry: "Perfect Woodpecker Carcass" */
		case 1496267371: /* GXTEntry: "Poor Woodpecker Carcass" */
			iVar0 = joaat("a_c_woodpecker_01");
			break;
	}
	return iVar0;
}

int func_674(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_368(0) };
	Var0.f_4 = func_448(iParam1);
	Var5 = { func_270(iParam0, Var0, Var0.f_4, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var5))
	{
		return 0;
	}
	iVar9 = INVENTORY::_0xC97E0D2302382211(func_73(0), &Var5, 0);
	return iVar9;
}

int func_675(int iParam0)
{
	if (func_150(iParam0, 1064293907))
	{
		return 2;
	}
	else if (func_150(iParam0, -1218707194))
	{
		return 1;
	}
	else if (func_150(iParam0, 1888974372))
	{
		return 0;
	}
	return 1;
}

int func_676(int iParam0, int iParam1, int iParam2)
{
	var uVar0[15];
	int iVar16;
	int iVar17;

	PED::_0xB29C553BA582D09E(&uVar0, iParam0, iParam1, 1);
	iVar16 = 0;
	iVar17 = 0;
	while (iVar17 < 15)
	{
		if (func_90(&(uVar0[iVar17]), 0) && iParam2 == &uVar0[iVar17])
		{
			iVar16++;
		}
		iVar17++;
	}
	return iVar16;
}

int func_677(int iParam0)
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

int func_678(int iParam0)
{
	iParam0 = func_326(iParam0);
	if (iParam0 <= -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1903007[iParam0 /*43*/]))
	{
		return 1;
	}
	return 0;
}

int func_679(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (!ENTITY::_0x9A100F1CF4546629(iVar0))
	{
		return 0;
	}
	if (FLOCK::_0xF8B48A361DC388AE(iVar0) == 2)
	{
		return 0;
	}
	if (ENTITY::_0x8DE41E9902E85756(iParam0))
	{
		return 0;
	}
	if (FIRE::_0xCDC25355C0D65963(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_680(int iParam0)
{
	return func_150(iParam0, 1279601681);
}

bool func_681(int iParam0, int iParam1)
{
	if (!func_90(iParam0, 0))
	{
		return false;
	}
	if (func_682(iParam0))
	{
		return func_834(func_683(iParam0, 0), iParam1, 0);
	}
	return ITEMDATABASE::_0xDEE7B3C76ED664BE(iParam0, iParam1) > 0;
}

int func_682(int iParam0)
{
	if (func_150(iParam0, 75135761))
	{
		return 1;
	}
	return 0;
}

int func_683(int iParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_90(iParam0, 0))
	{
		return func_835(func_278(iParam0), bParam1);
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

int func_684(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_836(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if ((&Var0[iVar32 /*2*/] == 2084597891 || &Var0[iVar32 /*2*/] == 773203532) || &Var0[iVar32 /*2*/] == -1295114026)
		{
			return (Var0[iVar32 /*2*/])->f_1;
		}
		else if (&Var0[iVar32 /*2*/] == 0)
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

void func_685(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1272170->f_20)
	{
		if (&Global_1272170->f_20.f_1[iVar0 /*20*/] == iParam0)
		{
			if ((Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1 == iParam1)
			{
			}
			else
			{
				(Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1 = iParam1;
			}
			if (iParam2 != 0 && iParam3 != 0)
			{
				(Global_1272170->f_20.f_1[iVar0 /*20*/])->f_2 = iParam2;
				(Global_1272170->f_20.f_1[iVar0 /*20*/])->f_3 = iParam3;
			}
			return;
		}
		iVar0++;
	}
	func_837(iParam0, iParam1, iParam2, iParam3);
}

int func_686(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_838(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 == func_839())
	{
		return func_838(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1275573->f_22[iParam1])
	{
		return func_838(&(((*Global_1097610)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

int func_687(int iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5, int iParam6, bool bParam7)
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
		func_840(iParam2, -372840566);
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
	func_841(uParam1, iParam0, Var3);
	return 1;
}

bool func_688(int iParam0)
{
	return func_838(&(Global_1954472->f_1465), iParam0, 1);
}

int func_689(int iParam0)
{
	return func_842(func_688(iParam0));
}

void func_690(var uParam0)
{
	func_477(uParam0, 143479330);
	if (func_545() == 2026485318)
	{
		func_477(uParam0, 617531372);
	}
	else
	{
		func_477(uParam0, 291123060);
	}
}

void func_691(var uParam0, int iParam1, struct<14> Param2)
{
	int iVar0;
	struct<21> Var1;

	if (!func_843(uParam0))
	{
		return;
	}
	if (Global_1272170->f_2518 < 20)
	{
		Global_1272170->f_2518++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1272170->f_2518.f_1[iVar0 /*21*/]) = { *(Global_1272170->f_2518.f_1[iVar0 + 1 /*21*/]) };
			iVar0++;
		}
	}
	Var1.f_7.f_2.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	*(Global_1272170->f_2518.f_1[(Global_1272170->f_2518 - 1) /*21*/]) = { Var1 };
}

int func_692(int iParam0)
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

int func_693(int iParam0)
{
	switch (iParam0)
	{
		case 915880986: /* GXTEntry: "Good Alligator Carcass" */
			return 1908704263 /* GXTEntry: "Good Skinned Alligator Carcass" */;
		case -1424697962: /* GXTEntry: "Perfect Alligator Carcass" */
			return -2112217546 /* GXTEntry: "Perfect Skinned Alligator Carcass" */;
		case -1643384846: /* GXTEntry: "Poor Alligator Carcass" */
			return -1745255175 /* GXTEntry: "Poor Skinned Alligator Carcass" */;
		case -847420802: /* GXTEntry: "Good Armadillo Carcass" */
			return -237368063 /* GXTEntry: "Good Skinned Armadillo Carcass" */;
		case -662726703: /* GXTEntry: "Perfect Armadillo Carcass" */
			return 1598967299 /* GXTEntry: "Perfect Skinned Armadillo Carcass" */;
		case 1760886130: /* GXTEntry: "Poor Armadillo Carcass" */
			return -1809464109 /* GXTEntry: "Poor Skinned Armadillo Carcass" */;
		case -1243653490: /* GXTEntry: "Good Badger Carcass" */
			return -165201917 /* GXTEntry: "Good Skinned Badger Carcass" */;
		case 1988467099: /* GXTEntry: "Perfect Badger Carcass" */
			return 815147738 /* GXTEntry: "Perfect Skinned Badger Carcass" */;
		case -674590015: /* GXTEntry: "Poor Badger Carcass" */
			return 1287583539 /* GXTEntry: "Poor Skinned Badger Carcass" */;
		case -1480423460: /* GXTEntry: "Good Beaver Carcass" */
			return -2126985311 /* GXTEntry: "Good Skinned Beaver Carcass" */;
		case 924882045: /* GXTEntry: "Perfect Beaver Carcass" */
			return -1268352491 /* GXTEntry: "Perfect Skinned Beaver Carcass" */;
		case 1415608202: /* GXTEntry: "Poor Beaver Carcass" */
			return -1940225526 /* GXTEntry: "Poor Skinned Beaver Carcass" */;
		case -593311590: /* GXTEntry: "Good Bighorn Sheep Carcass" */
			return -212307068 /* GXTEntry: "Good Skinned Bighorn Sheep Carcass" */;
		case 765085831: /* GXTEntry: "Perfect Bighorn Sheep Carcass" */
			return 355421032 /* GXTEntry: "Perfect Skinned Bighorn Sheep Carcass" */;
		case 2094730711: /* GXTEntry: "Poor Bighorn Sheep Carcass" */
			return 1657729714 /* GXTEntry: "Poor Skinned Bighorn Sheep Carcass" */;
		case -1310590179: /* GXTEntry: "Good Buck Carcass" */
			return 1350692346 /* GXTEntry: "Good Skinned Buck Carcass" */;
		case 992366796: /* GXTEntry: "Perfect Buck Carcass" */
			return -257850294 /* GXTEntry: "Perfect Skinned Buck Carcass" */;
		case -244657613: /* GXTEntry: "Poor Buck Carcass" */
			return -918541014 /* GXTEntry: "Poor Skinned Buck Carcass" */;
		case -2026210939: /* GXTEntry: "Good California Condor Carcass" */
			return -947573795 /* GXTEntry: "Good Plucked California Condor Carcass" */;
		case -1252472243: /* GXTEntry: "Perfect California Condor Carcass" */
			return -2068302756 /* GXTEntry: "Perfect Plucked California Condor Carcass" */;
		case -980016656: /* GXTEntry: "Poor California Condor Carcass" */
			return 1650829985 /* GXTEntry: "Poor Plucked California Condor Carcass" */;
		case -758005668: /* GXTEntry: "Good Chicken Carcass" */
			return -1808044035 /* GXTEntry: "Good Skinned Chicken Carcass" */;
		case -2139551030: /* GXTEntry: "Perfect Chicken Carcass" */
			return -1952647655 /* GXTEntry: "Perfect Skinned Chicken Carcass" */;
		case 1607144310: /* GXTEntry: "Poor Chicken Carcass" */
			return 1293221440 /* GXTEntry: "Poor Skinned Chicken Carcass" */;
		case 80093385: /* GXTEntry: "Good Cormorant Carcass" */
			return -642946194 /* GXTEntry: "Good Plucked Cormorant Carcass" */;
		case -867655342: /* GXTEntry: "Perfect Cormorant Carcass" */
			return 819214075 /* GXTEntry: "Perfect Plucked Cormorant Carcass" */;
		case 991092621: /* GXTEntry: "Poor Cormorant Carcass" */
			return -858652427 /* GXTEntry: "Poor Plucked Cormorant Carcass" */;
		case 871746664: /* GXTEntry: "Good Cougar Carcass" */
			return 395625948 /* GXTEntry: "Good Skinned Cougar Carcass" */;
		case 1626949878: /* GXTEntry: "Perfect Cougar Carcass" */
			return -2063800922 /* GXTEntry: "Perfect Skinned Cougar Carcass" */;
		case -1722483116: /* GXTEntry: "Poor Cougar Carcass" */
			return -2117103642 /* GXTEntry: "Poor Skinned Cougar Carcass" */;
		case -1739474417: /* GXTEntry: "Good Coyote Carcass" */
			return -1583694057 /* GXTEntry: "Good Skinned Coyote Carcass" */;
		case -161524199: /* GXTEntry: "Perfect Coyote Carcass" */
			return -1550918713 /* GXTEntry: "Perfect Skinned Coyote Carcass" */;
		case 156979555: /* GXTEntry: "Poor Coyote Carcass" */
			return 836539658 /* GXTEntry: "Poor Skinned Coyote Carcass" */;
		case 322141256: /* GXTEntry: "Good Crane Carcass" */
			return 773062352 /* GXTEntry: "Good Plucked Crane Carcass" */;
		case 1310120320: /* GXTEntry: "Perfect Crane Carcass" */
			return 1306100270 /* GXTEntry: "Perfect Plucked Crane Carcass" */;
		case -1228376431: /* GXTEntry: "Poor Crane Carcass" */
			return -1063194668 /* GXTEntry: "Poor Plucked Crane Carcass" */;
		case 472142656: /* GXTEntry: "Good Deer Carcass" */
			return 337839068 /* GXTEntry: "Good Skinned Deer Carcass" */;
		case -1837840093: /* GXTEntry: "Perfect Deer Carcass" */
			return -1426520714 /* GXTEntry: "Perfect Skinned Deer Carcass" */;
		case 58634176: /* GXTEntry: "Poor Deer Carcass" */
			return -1456429189 /* GXTEntry: "Poor Skinned Deer Carcass" */;
		case 1023080408: /* GXTEntry: "Good Duck Carcass" */
			return -2032809253 /* GXTEntry: "Good Skinned Duck Carcass" */;
		case 1001171791: /* GXTEntry: "Perfect Duck Carcass" */
			return 781728005 /* GXTEntry: "Perfect Skinned Duck Carcass" */;
		case 1210345318: /* GXTEntry: "Poor Duck Carcass" */
			return 1202409779 /* GXTEntry: "Poor Skinned Duck Carcass" */;
		case 399553313: /* GXTEntry: "Good Eagle Carcass" */
			return 1520877300 /* GXTEntry: "Good Plucked Eagle Carcass" */;
		case -1422869557: /* GXTEntry: "Perfect Eagle Carcass" */
			return -1736624361 /* GXTEntry: "Perfect Plucked Eagle Carcass" */;
		case -1378812236: /* GXTEntry: "Poor Eagle Carcass" */
			return 719465997 /* GXTEntry: "Poor Plucked Eagle Carcass" */;
		case 1011003885: /* GXTEntry: "Good Egret Carcass" */
			return -361486526 /* GXTEntry: "Good Skinned Egret Carcass" */;
		case 651035143: /* GXTEntry: "Perfect Egret Carcass" */
			return -765274711 /* GXTEntry: "Perfect Skinned Egret Carcass" */;
		case 2013022756: /* GXTEntry: "Poor Egret Carcass" */
			return -887205673 /* GXTEntry: "Poor Skinned Egret Carcass" */;
		case -1186289527: /* GXTEntry: "Good Fox Carcass" */
			return -784020903 /* GXTEntry: "Good Skinned Fox Carcass" */;
		case 877935135: /* GXTEntry: "Perfect Fox Carcass" */
			return -886117938 /* GXTEntry: "Perfect Skinned Fox Carcass" */;
		case -39646495: /* GXTEntry: "Poor Fox Carcass" */
			return -1416771220 /* GXTEntry: "Poor Skinned Fox Carcass" */;
		case 1582593525: /* GXTEntry: "Good Gila Monster Carcass" */
			return 1648676911 /* GXTEntry: "Good Skinned Gila Monster Carcass" */;
		case -246542229: /* GXTEntry: "Perfect Gila Monster Carcass" */
			return 2103833563 /* GXTEntry: "Perfect Skinned Gila Monster Carcass" */;
		case -529454751: /* GXTEntry: "Poor Gila Monster Carcass" */
			return -831636369 /* GXTEntry: "Poor Skinned Gila Monster Carcass" */;
		case -46978629: /* GXTEntry: "Good Goat Carcass" */
			return -852290935 /* GXTEntry: "Good Skinned Goat Carcass" */;
		case -1347000030: /* GXTEntry: "Perfect Goat Carcass" */
			return -1870415962 /* GXTEntry: "Perfect Skinned Goat Carcass" */;
		case -505583391: /* GXTEntry: "Poor Goat Carcass" */
			return -788684109 /* GXTEntry: "Poor Skinned Goat Carcass" */;
		case 1645887374: /* GXTEntry: "Good Goose Carcass" */
			return 1416435145 /* GXTEntry: "Good Skinned Goose Carcass" */;
		case -1559227925: /* GXTEntry: "Perfect Goose Carcass" */
			return -1483088274 /* GXTEntry: "Perfect Skinned Goose Carcass" */;
		case 1562528937: /* GXTEntry: "Poor Goose Carcass" */
			return -791867098 /* GXTEntry: "Poor Skinned Goose Carcass" */;
		case -1471526136: /* GXTEntry: "Good Hawk Carcass" */
			return -1689552552 /* GXTEntry: "Good Plucked Hawk Carcass" */;
		case -1440794801: /* GXTEntry: "Perfect Hawk Carcass" */
			return -1850779170 /* GXTEntry: "Perfect Plucked Hawk Carcass" */;
		case 2144711797:
			return -121487803 /* GXTEntry: "Poor Plucked Hawk Carcass" */;
		case 718825539: /* GXTEntry: "Good Heron Carcass" */
			return -1280499288 /* GXTEntry: "Good Skinned Heron Carcass" */;
		case 2105263879: /* GXTEntry: "Perfect Heron Carcass" */
			return 820245961 /* GXTEntry: "Perfect Skinned Heron Carcass" */;
		case -905842006: /* GXTEntry: "Poor Heron Carcass" */
			return -889526774 /* GXTEntry: "Poor Skinned Heron Carcass" */;
		case 1191274340: /* GXTEntry: "Good Iguana Carcass" */
			return -521025998 /* GXTEntry: "Good Skinned Iguana Carcass" */;
		case 1613453781: /* GXTEntry: "Perfect Iguana Carcass" */
			return 1583031244 /* GXTEntry: "Perfect Skinned Iguana Carcass" */;
		case -1030182399: /* GXTEntry: "Poor Iguana Carcass" */
			return -2115599211 /* GXTEntry: "Poor Skinned Iguana Carcass" */;
		case 987967309: /* GXTEntry: "Good Loon Carcass" */
			return -767176802 /* GXTEntry: "Good Skinned Loon Carcass" */;
		case -1060737769: /* GXTEntry: "Perfect Loon Carcass" */
			return -750945821 /* GXTEntry: "Perfect Skinned Loon Carcass" */;
		case 553310445: /* GXTEntry: "Poor Loon Carcass" */
			return -2135749211 /* GXTEntry: "Poor Skinned Loon Carcass" */;
		case -1838865945: /* GXTEntry: "Good Muskrat Carcass" */
			return 2063108046 /* GXTEntry: "Good Skinned Muskrat Carcass" */;
		case 1418092959: /* GXTEntry: "Perfect Muskrat Carcass" */
			return 1299111759 /* GXTEntry: "Perfect Skinned Muskrat Carcass" */;
		case -1315697778: /* GXTEntry: "Poor Muskrat Carcass" */
			return 1595322723 /* GXTEntry: "Poor Skinned Muskrat Carcass" */;
		case -1772126340: /* GXTEntry: "Good Opossum Carcass" */
			return 784918835 /* GXTEntry: "Good Skinned Opossum Carcass" */;
		case -935543049: /* GXTEntry: "Perfect Opossum Carcass" */
			return -676310905 /* GXTEntry: "Perfect Skinned Opossum Carcass" */;
		case 1772544356: /* GXTEntry: "Poor Opossum Carcass" */
			return -1719545959 /* GXTEntry: "Poor Skinned Opossum Carcass" */;
		case -266273535: /* GXTEntry: "Good Owl Carcass" */
			return -2142423934 /* GXTEntry: "Good Plucked Owl Carcass" */;
		case -1670544626: /* GXTEntry: "Perfect Owl Carcass" */
			return 747751566 /* GXTEntry: "Perfect Plucked Owl Carcass" */;
		case 1290960696: /* GXTEntry: "Poor Owl Carcass" */
			return -1942682403 /* GXTEntry: "Poor Plucked Owl Carcass" */;
		case 1913571052: /* GXTEntry: "Good Panther Carcass" */
			return 1018433784 /* GXTEntry: "Good Skinned Panther Carcass" */;
		case 1717601520: /* GXTEntry: "Perfect Panther Carcass" */
			return -796185392 /* GXTEntry: "Perfect Skinned Panther Carcass" */;
		case 430397370: /* GXTEntry: "Poor Panther Carcass" */
			return -49549406 /* GXTEntry: "Poor Skinned Panther Carcass" */;
		case 16287711: /* GXTEntry: "Good Parrot Carcass" */
			return 857788498 /* GXTEntry: "Good Plucked Parrot Carcass" */;
		case -1356230367: /* GXTEntry: "Perfect Parrot Carcass" */
			return 1223148871 /* GXTEntry: "Perfect Plucked Parrot Carcass" */;
		case 1417331079: /* GXTEntry: "Poor Parrot Carcass" */
			return 939407236 /* GXTEntry: "Poor Plucked Parrot Carcass" */;
		case -884124246: /* GXTEntry: "Good Pelican Carcass" */
			return 1608778431 /* GXTEntry: "Good Plucked Pelican Carcass" */;
		case 1884610748: /* GXTEntry: "Perfect Pelican Carcass" */
			return -2033821082 /* GXTEntry: "Perfect Plucked Pelican Carcass" */;
		case 746558492: /* GXTEntry: "Poor Pelican Carcass" */
			return -993340234 /* GXTEntry: "Poor Plucked Pelican Carcass" */;
		case -892811627: /* GXTEntry: "Good Pheasant Carcass" */
			return -1861062075 /* GXTEntry: "Good Skinned Pheasant Carcass" */;
		case -2040522845: /* GXTEntry: "Perfect Pheasant Carcass" */
			return 1645001514 /* GXTEntry: "Perfect Skinned Pheasant Carcass" */;
		case -1224510844: /* GXTEntry: "Poor Pheasant Carcass" */
			return 782371031 /* GXTEntry: "Poor Skinned Pheasant Carcass" */;
		case 1334837390: /* GXTEntry: "Good Pig Carcass" */
			return 1255529169 /* GXTEntry: "Good Skinned Pig Carcass" */;
		case 339620522: /* GXTEntry: "Perfect Pig Carcass" */
			return 70898308 /* GXTEntry: "Perfect Skinned Pig Carcass" */;
		case 1770451033: /* GXTEntry: "Poor Pig Carcass" */
			return -1050350982 /* GXTEntry: "Poor Skinned Pig Carcass" */;
		case 756657535: /* GXTEntry: "Good Prairie Chicken Carcass" */
			return 581781784 /* GXTEntry: "Good Skinned Prairie Chicken Carcass" */;
		case 862898895: /* GXTEntry: "Perfect Prairie Chicken Carcass" */
			return -1363330863 /* GXTEntry: "Perfect Skinned Prairie Chicken Carcass" */;
		case 1997845858: /* GXTEntry: "Poor Prairie Chicken Carcass" */
			return -1780911288 /* GXTEntry: "Poor Skinned Prairie Chicken Carcass" */;
		case -1930144509: /* GXTEntry: "Good Pronghorn Carcass" */
			return 1018306802 /* GXTEntry: "Good Skinned Pronghorn Carcass" */;
		case 1846915545: /* GXTEntry: "Perfect Pronghorn Carcass" */
			return 1615521415 /* GXTEntry: "Perfect Skinned Pronghorn Carcass" */;
		case -1816929509: /* GXTEntry: "Poor Pronghorn Carcass" */
			return -1499066338 /* GXTEntry: "Poor Skinned Pronghorn Carcass" */;
		case 1197831625: /* GXTEntry: "Good Rabbit Carcass" */
			return 1711081908 /* GXTEntry: "Good Skinned Rabbit Carcass" */;
		case -1866642239: /* GXTEntry: "Perfect Rabbit Carcass" */
			return -164705 /* GXTEntry: "Perfect Skinned Rabbit Carcass" */;
		case -1508120809: /* GXTEntry: "Poor Rabbit Carcass" */
			return -2044044647 /* GXTEntry: "Poor Skinned Rabbit Carcass" */;
		case -1007681885: /* GXTEntry: "Good Raccoon Carcass" */
			return -859583379 /* GXTEntry: "Good Skinned Raccoon Carcass" */;
		case 434924608: /* GXTEntry: "Perfect Raccoon Carcass" */
			return -759504052 /* GXTEntry: "Perfect Skinned Raccoon Carcass" */;
		case 1666393029: /* GXTEntry: "Poor Raccoon Carcass" */
			return 700225820 /* GXTEntry: "Poor Skinned Raccoon Carcass" */;
		case -1814593136: /* GXTEntry: "Good Ram Carcass" */
			return 136458586 /* GXTEntry: "Good Skinned Ram Carcass" */;
		case -1188120304: /* GXTEntry: "Perfect Ram Carcass" */
			return 799105420 /* GXTEntry: "Perfect Skinned Ram Carcass" */;
		case 1978734761: /* GXTEntry: "Poor Ram Carcass" */
			return -481655757 /* GXTEntry: "Poor Skinned Ram Carcass" */;
		case -824902132: /* GXTEntry: "Good Raven Carcass" */
			return 484160931 /* GXTEntry: "Good Plucked Raven Carcass" */;
		case -1015531226: /* GXTEntry: "Perfect Raven Carcass" */
			return 1010699907 /* GXTEntry: "Perfect Plucked Raven Carcass" */;
		case -581619522: /* GXTEntry: "Poor Raven Carcass" */
			return 1550264248 /* GXTEntry: "Poor Plucked Raven Carcass" */;
		case -861854914: /* GXTEntry: "Good Red-footed Booby Carcass" */
			return -371992731 /* GXTEntry: "Good Plucked Red-footed Booby Carcass" */;
		case -545447034: /* GXTEntry: "Perfect Red-footed Booby Carcass" */
			return 1090294483 /* GXTEntry: "Perfect Plucked Red-footed Booby Carcass" */;
		case -1824684934: /* GXTEntry: "Poor Red-footed Booby Carcass" */
			return -274175035 /* GXTEntry: "Poor Plucked Red-footed Booby Carcass" */;
		case 980653387: /* GXTEntry: "Good Rooster Carcass" */
			return -1064414912 /* GXTEntry: "Good Skinned Rooster Carcass" */;
		case -1011598664: /* GXTEntry: "Perfect Rooster Carcass" */
			return -2091620305 /* GXTEntry: "Perfect Skinned Rooster Carcass" */;
		case -177476569: /* GXTEntry: "Poor Rooster Carcass" */
			return -468684824 /* GXTEntry: "Poor Skinned Rooster Carcass" */;
		case 416630124: /* GXTEntry: "Good Roseate Spoonbill Carcass" */
			return 1668870118 /* GXTEntry: "Good Skinned Roseate Spoonbill Carcass" */;
		case 1925728375: /* GXTEntry: "Perfect Roseate Spoonbill Carcass" */
			return -534004020 /* GXTEntry: "Perfect Skinned Roseate Spoonbill Carcass" */;
		case -1080457688: /* GXTEntry: "Poor Roseate Spoonbill Carcass" */
			return -2126925270 /* GXTEntry: "Poor Skinned Roseate Spoonbill Carcass" */;
		case 1742676369: /* GXTEntry: "Good Seagull Carcass" */
			return 2008380517 /* GXTEntry: "Good Plucked Seagull Carcass" */;
		case -899751553: /* GXTEntry: "Perfect Seagull Carcass" */
			return -510697884 /* GXTEntry: "Perfect Plucked Seagull Carcass" */;
		case 431501574: /* GXTEntry: "Poor Seagull Carcass" */
			return -955209948 /* GXTEntry: "Poor Plucked Seagull Carcass" */;
		case 2126795269:
			return 1459836898 /* GXTEntry: "Good Skinned Sheep Carcass" */;
		case 1489051752: /* GXTEntry: "Perfect Sheep Carcass" */
			return 303969766 /* GXTEntry: "Perfect Skinned Sheep Carcass" */;
		case -1705499323: /* GXTEntry: "Poor Sheep Carcass" */
			return -1707588662 /* GXTEntry: "Poor Skinned Sheep Carcass" */;
		case -2013445740: /* GXTEntry: "Good Skunk Carcass" */
			return -1224075784 /* GXTEntry: "Good Skinned Skunk Carcass" */;
		case 102446365: /* GXTEntry: "Perfect Skunk Carcass" */
			return -1806671048 /* GXTEntry: "Perfect Skinned Skunk Carcass" */;
		case -1927342740: /* GXTEntry: "Poor Skunk Carcass" */
			return 749765420 /* GXTEntry: "Poor Skinned Skunk Carcass" */;
		case -410900360: /* GXTEntry: "Good Black-tailed Rattlesnake Carcass" */
			return 462936163 /* GXTEntry: "Good Skinned Black-Tailed Rattlesnake Carcass" */;
		case -1073614594: /* GXTEntry: "Perfect Black-tailed Rattlesnake Carcass" */
			return -8888941 /* GXTEntry: "Perfect Skinned Black-Tailed Rattlesnake Carcass" */;
		case 2060013792: /* GXTEntry: "Poor Black-tailed Rattlesnake Carcass" */
			return 1640227110 /* GXTEntry: "Poor Skinned Black-Tailed Rattlesnake Carcass" */;
		case 581032175: /* GXTEntry: "Good Red Boa Carcass" */
			return -1241188722 /* GXTEntry: "Good Skinned Red Boa Carcass" */;
		case -581931638: /* GXTEntry: "Perfect Red Boa Carcass" */
			return -1030962659 /* GXTEntry: "Perfect Skinned Red Boa Carcass" */;
		case -1528265128: /* GXTEntry: "Poor Red Boa Carcass" */
			return 112552982 /* GXTEntry: "Poor Skinned Red Boa Carcass" */;
		case -142632645: /* GXTEntry: "Good Copperhead Carcass" */
			return -1599578931 /* GXTEntry: "Good Skinned Copperhead Carcass" */;
		case -2048519180: /* GXTEntry: "Perfect Copperhead Carcass" */
			return 1296331626 /* GXTEntry: "Perfect Skinned Copperhead Carcass" */;
		case 1442025993: /* GXTEntry: "Poor Copperhead Carcass" */
			return -1256398198 /* GXTEntry: "Poor Skinned Copperhead Carcass" */;
		case 441195430: /* GXTEntry: "Good Fer-de-Lance Carcass" */
			return 1297800973 /* GXTEntry: "Good Skinned Fer-de-lance Carcass" */;
		case 748665395: /* GXTEntry: "Perfect Fer-de-Lance Carcass" */
			return 1772582754 /* GXTEntry: "Perfect Skinned Fer-de-lance Carcass" */;
		case 351048413: /* GXTEntry: "Poor Fer-de-Lance Carcass" */
			return -1459876379 /* GXTEntry: "Poor Skinned Fer-de-lance Carcass" */;
		case -914779013: /* GXTEntry: "Good Snake Carcass" */
			return 1127406863 /* GXTEntry: "Good Skinned Snake Carcass" */;
		case 1323485831: /* GXTEntry: "Perfect Snake Carcass" */
			return 1779996957 /* GXTEntry: "Perfect Skinned Snake Carcass" */;
		case -365111821: /* GXTEntry: "Poor Snake Carcass" */
			return 1885306923 /* GXTEntry: "Poor Skinned Snake Carcass" */;
		case 101495387: /* GXTEntry: "Good Water Snake Carcass" */
			return 1244107697 /* GXTEntry: "Good Skinned Water Snake Carcass" */;
		case 157917500: /* GXTEntry: "Perfect Water Snake Carcass" */
			return -1201555940 /* GXTEntry: "Perfect Skinned Water Snake Carcass" */;
		case -936537044: /* GXTEntry: "Poor Water Snake Carcass" */
			return -668487833 /* GXTEntry: "Poor Skinned Water Snake Carcass" */;
		case -1610329427: /* GXTEntry: "Good Turkey Carcass" */
			return -1178150148 /* GXTEntry: "Good Skinned Turkey Carcass" */;
		case -1836227998: /* GXTEntry: "Perfect Turkey Carcass" */
			return 1171158615 /* GXTEntry: "Perfect Skinned Turkey Carcass" */;
		case 619479575: /* GXTEntry: "Poor Turkey Carcass" */
			return -2123554124 /* GXTEntry: "Poor Skinned Turkey Carcass" */;
		case -1444929945: /* GXTEntry: "Good Snapping Turtle Carcass" */
			return 1806705761 /* GXTEntry: "Good Skinned Snapping Turtle Carcass" */;
		case -929322235: /* GXTEntry: "Perfect Snapping Turtle Carcass" */
			return 404581836 /* GXTEntry: "Perfect Skinned Snapping Turtle Carcass" */;
		case -548076717: /* GXTEntry: "Poor Snapping Turtle Carcass" */
			return 987197489 /* GXTEntry: "Poor Skinned Snapping Turtle Carcass" */;
		case -281211381: /* GXTEntry: "Good Vulture Carcass" */
			return -1259715647 /* GXTEntry: "Good Plucked Vulture Carcass" */;
		case 493457089: /* GXTEntry: "Perfect Vulture Carcass" */
			return -1716717840 /* GXTEntry: "Perfect Plucked Vulture Carcass" */;
		case -479485786: /* GXTEntry: "Poor Vulture Carcass" */
			return -196277007 /* GXTEntry: "Poor Plucked Vulture Carcass" */;
		case 27838955: /* GXTEntry: "Good Wolf Carcass" */
			return -2064457926 /* GXTEntry: "Good Skinned Wolf Carcass" */;
		case 1641833719: /* GXTEntry: "Perfect Wolf Carcass" */
			return 561267454 /* GXTEntry: "Perfect Skinned Wolf Carcass" */;
		case -314933180: /* GXTEntry: "Poor Wolf Carcass" */
			return 686253083 /* GXTEntry: "Poor Skinned Wolf Carcass" */;
		default:
			break;
	}
	return 0;
}

int func_694(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return func_749(INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iParam0), iParam1);
	}
	return 0;
}

int func_695(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	struct<2> Var0;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	if (func_844(*iParam0, iParam1, *iParam2, bParam3, iParam4))
	{
		Var0 = { func_186(iParam1) };
		if (STATS::_STAT_ID_IS_VALID(&Var0))
		{
			STATS::_0xBD861AE8A5181ED7(&Var0, *iParam2);
		}
		*iParam2 = func_696(*iParam0, iParam1, *iParam2, 1, iParam5);
		if (*iParam2 > 0)
		{
			if (func_845(iParam1))
			{
				if (!func_846(0, iParam1, *iParam2))
				{
				}
				if (func_847(PLAYER::PLAYER_ID(), 1, 0))
				{
					ENTITY::_0x18FF3110CF47115D(*iParam0, 32, 1);
				}
				else
				{
					ENTITY::_0x18FF3110CF47115D(*iParam0, 32, 0);
				}
				*iParam2 = func_848(*iParam0, iParam1, *iParam2);
			}
		}
		*iParam2 = 0;
		func_189(1, 0, 0);
		return 1;
	}
	return 0;
}

int func_696(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<11> Var6;
	var uVar101;

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
				iVar0 = func_849(iVar2);
				if (!func_850(iVar0, &uVar101))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar2))
					{
						if ((iParam4 == 2 && ENTITY::_0x8DE41E9902E85756(iVar2)) || (iParam4 == 1 && !ENTITY::_0x8DE41E9902E85756(iVar2)))
						{
						}
						else if (iVar0 == iParam1)
						{
							iVar5 = 0;
							while (iVar5 < 3)
							{
								if ((Global_1270530->f_1002.f_245[iVar5 /*4*/])->f_3 == iVar2)
								{
									func_851(&Var6, Global_1903929->f_131[iVar5 /*95*/]);
								}
								else
								{
									iVar5++;
								}
							}
							if (bParam3)
							{
								func_852(iVar2);
								if (((Global_1915180->f_20136 || Global_1915180->f_21989.f_1) && Global_1915180->f_19742 == 29) && ENTITY::IS_ENTITY_A_PED(iVar2))
								{
									STATS::_0x831BF01C56149A8A(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2));
								}
								ENTITY::_0x0D0DB2B6AF19A987(&iVar2);
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

void func_697(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (Global_1915180->f_20135)
	{
		if (Global_1915180->f_19742 == 29)
		{
			if (func_244(iParam0))
			{
				iVar1 = 0;
				if (bParam2)
				{
					switch (func_853(iParam0))
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
					STATS::_0x7C2ABF6E556B21FC(func_854(iParam0), iVar1, func_150(iParam0, 1064293907), 0);
					iVar0++;
				}
			}
		}
	}
}

bool func_698(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<2> Var0;

	Var0 = { func_186(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var0))
	{
		STATS::_0xBD861AE8A5181ED7(&Var0, iParam1);
	}
	func_855(iParam0, iParam1);
	return func_856(iParam0, iParam1, bParam2, iParam3);
}

int func_699(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;

	*iParam1 = 0;
	if (*uParam0 != 5)
	{
		return 0;
	}
	else if (*uParam2 != 5)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iParam3 < 1)
		{
			Jump @200; //curOff = 49
		}
		else if (((*uParam2)[iVar0 /*6*/])->f_4 == 0)
		{
			Jump @191; //curOff = 67
		}
		else if (((*uParam2)[iVar0 /*6*/])->f_5 == 0)
		{
		}
		else
		{
			*((*uParam0)[*iParam1 /*6*/]) = { *((*uParam2)[iVar0 /*6*/]) };
			((*uParam0)[*iParam1 /*6*/])->f_4 = ((*uParam2)[iVar0 /*6*/])->f_4;
			if (((*uParam2)[iVar0 /*6*/])->f_5 > iParam3)
			{
				((*uParam0)[*iParam1 /*6*/])->f_5 = iParam3;
				iParam3 = 0;
			}
			else
			{
				((*uParam0)[*iParam1 /*6*/])->f_5 = ((*uParam2)[iVar0 /*6*/])->f_5;
				iParam3 = (iParam3 - ((*uParam0)[*iParam1 /*6*/])->f_5);
			}
			*iParam1++;
		}
		iVar0++;
	}
	if (bParam4 && iParam3 > 0)
	{
		*iParam1 = 0;
		return 0;
	}
	return 1;
}

int func_700()
{
	return 31014903;
}

int func_701()
{
	return 31113207;
}

int func_702()
{
	return 28818647;
}

int func_703(int iParam0)
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

bool func_704(int iParam0)
{
	return func_99(Global_1199613->f_1196, iParam0);
}

bool func_705()
{
	return Global_262996[&Global_1275573 /*70*/] > 2;
}

bool func_706(int iParam0, int iParam1)
{
	if (!Global_1070356->f_3)
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
	return (Global_1185577[iParam1 /*12*/] && iParam0) != 0;
}

struct<2> func_707()
{
	if (Global_1184439->f_129 <= 0)
	{
		return func_87(0);
	}
	if (Global_1184439->f_130 < 0 || Global_1184439->f_131 == 0)
	{
		return func_87(0);
	}
	return ((*Global_1184439)[Global_1184439->f_130 /*4*/])->f_1;
}

int func_708(int iParam0)
{
	if (func_857(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

bool func_709(struct<2> Param0)
{
	return func_858(Param0, 1, 4);
}

int func_710(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 1433048902 /* GXTEntry: "Ginseng" */;
		case 3:
			return 1433048902 /* GXTEntry: "Ginseng" */;
		case 4:
			return -1602657245 /* GXTEntry: "Bay Bolete" */;
		case 5:
			return -1991037110 /* GXTEntry: "Blackberry" */;
		case 6:
			return 1047281747 /* GXTEntry: "Currant" */;
		case 7:
			return -398744080 /* GXTEntry: "Burdock Root" */;
		case 8:
			return -1066874997 /* GXTEntry: "Chanterelle" */;
		case 11:
			return -2085219828 /* GXTEntry: "Common Bulrush" */;
		case 12:
			return 2064962445 /* GXTEntry: "Creeping Thyme" */;
		case 13:
			return -1781387050 /* GXTEntry: "Sage" */;
		case 15:
			return -1620920647 /* GXTEntry: "English Mace" */;
		case 16:
			return -1664530975 /* GXTEntry: "Evergreen Huckleberry" */;
		case 18:
			return 1047281747 /* GXTEntry: "Currant" */;
		case 19:
			return -1781387050 /* GXTEntry: "Sage" */;
		case 20:
			return -597058368 /* GXTEntry: "Indian Tobacco" */;
		case 23:
			return 128702355 /* GXTEntry: "Milkweed" */;
		case 26:
			return -2051332199 /* GXTEntry: "Oleander Sage" */;
		case 27:
			return 546981776 /* GXTEntry: "Oregano" */;
		case 28:
			return -2013384490 /* GXTEntry: "Parasol Mushroom" */;
		case 29:
			return 228922461 /* GXTEntry: "Prairie Poppy" */;
		case 31:
			return -746674788 /* GXTEntry: "Ram\'s Head" */;
		case 33:
			return 599861917 /* GXTEntry: "Raspberry" */;
		case 34:
			return -1781387050 /* GXTEntry: "Sage" */;
		case 37:
			return 2006811763 /* GXTEntry: "Vanilla Flower" */;
		case 38:
			return -90546043 /* GXTEntry: "Violet Snowdrop" */;
		case 48:
			return 1216456215 /* GXTEntry: "Wild Carrot" */;
		case 49:
			return 746300881 /* GXTEntry: "Wild Feverfew" */;
		case 50:
			return -435006002 /* GXTEntry: "Wild Mint" */;
		case 51:
			return -624139784 /* GXTEntry: "Wintergreen Berry" */;
		case 52:
			return -529638012 /* GXTEntry: "Yarrow" */;
		case 39:
			return 1338475089 /* GXTEntry: "Agarita" */;
		case 40:
			return 2605459 /* GXTEntry: "Texas Bluebonnet" */;
		case 41:
			return 1071702353 /* GXTEntry: "Bitterweed" */;
		case 42:
			return -1183422860 /* GXTEntry: "Blood Flower" */;
		case 43:
			return -1957546791 /* GXTEntry: "Cardinal Flower" */;
		case 44:
			return -589542533 /* GXTEntry: "Chocolate Daisy" */;
		case 45:
			return -1776738559 /* GXTEntry: "Creek Plum" */;
		case 46:
			return 1602215994 /* GXTEntry: "Wild Rhubarb" */;
		case 47:
			return -396757268 /* GXTEntry: "Wisteria" */;
		default:
			break;
	}
	return 0;
}

void func_711(int iParam0, int iParam1)
{
	if (!func_712(iParam0))
	{
		return;
	}
	if (func_108() != -1)
	{
		Global_17172[iParam0] = (Global_17172[iParam0] || iParam1);
		return;
	}
	Global_39.f_4458[iParam0] = (Global_39.f_4458[iParam0] || iParam1);
}

bool func_712(int iParam0)
{
	return !iParam0 <= 0;
}

int func_713(int iParam0)
{
	if (!func_712(iParam0))
	{
		return 0;
	}
	return func_859(iParam0, 4, 1);
}

void func_714(int iParam0, bool bParam1)
{
	if (!func_712(iParam0))
	{
		return;
	}
	if (func_860(iParam0))
	{
		return;
	}
	func_711(iParam0, 2);
	if (bParam1)
	{
		if (!func_17(0, 0, 1))
		{
			if (func_108() == -1)
			{
				func_717(1, 6);
			}
			else
			{
				func_861(1, 1017438712);
			}
		}
	}
}

int func_715(int iParam0)
{
	if (!func_712(iParam0))
	{
		return 0;
	}
	return func_859(iParam0, 1, 1);
}

void func_716(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_712(iParam0))
	{
		return;
	}
	if (func_715(iParam0))
	{
		return;
	}
	if (!bParam1)
	{
		bParam1 = func_862(iParam0);
	}
	if (!bParam1)
	{
		func_863(iParam0);
	}
	func_711(iParam0, 1);
	func_714(iParam0, 1);
	if (bParam2)
	{
		if (!func_17(0, 0, 1))
		{
			func_717(1, 6);
		}
	}
}

void func_717(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_864(&Global_0, 8);
	}
	if (!func_828() || func_108() != -1)
	{
		return;
	}
	func_864(&Global_0, 1);
}

float func_718(int iParam0, int iParam1)
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
			fVar2 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_34, 0));
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

void func_719(int iParam0)
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
	iVar1 = func_761(2);
	func_762(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_720(int iParam0, bool bParam1)
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
	iVar0 = func_763(2);
	func_764(BUILTIN::TO_FLOAT((iParam0 * iVar0)), 0, bParam1);
}

void func_721(int iParam0)
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
	iVar1 = func_765(2);
	func_766(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

bool func_722()
{
	int iVar0;

	iVar0 = &Global_1951141->f_593[8];
	iVar0 = (&Global_1951141->f_593[10] + iVar0);
	iVar0 = (&Global_1951141->f_593[1] + iVar0);
	iVar0 = (&Global_1951141->f_593[2] + iVar0);
	iVar0 = (&Global_1951141->f_593[5] + iVar0);
	iVar0 = (&Global_1951141->f_593[25] + iVar0);
	iVar0 = (&Global_1951141->f_593[22] + iVar0);
	iVar0 = (&Global_1951141->f_593[18] + iVar0);
	iVar0 = (&Global_1951141->f_593[19] + iVar0);
	return iVar0 > 0;
}

int func_723(int iParam0)
{
	int iVar0;

	iVar0 = func_249(func_248(iParam0), 1);
	if (iVar0 != 39)
	{
		return (Global_1951141->f_1657.f_1[iVar0 /*3*/])->f_1;
	}
	return 0;
}

int func_724()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1951141->f_3109.f_25)
	{
		iVar1 = &Global_1951141->f_3109[iVar0];
		if (func_162(iVar1) == -999503751)
		{
			if (func_865() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

int func_725(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		iParam1 = func_866(0);
	}
	if (func_162(iParam0) == -999503751 && func_867(iParam0) != -1)
	{
		return 1;
	}
	if (iParam1 == 2026485318)
	{
		return func_150(iParam0, -287432114);
	}
	else if (iParam1 == 24043185)
	{
		return func_150(iParam0, -133342564);
	}
	return 0;
}

int func_726(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_188(iParam0, 0, 0) };
	Var5 = { func_270(iParam0, Var0, Var0.f_4, 0) };
	if (func_325(iParam0, Var0, Var0.f_4, 0, 0, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x9A113C660AEA3832(func_73(0), &Var5, iParam1);
	return 1;
}

int func_727(int iParam0)
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

bool func_728(var uParam0)
{
	return (Global_1951141->f_3109.f_32.f_6 && uParam0) != 0;
}

void func_729()
{
	Global_1951141->f_1054 = 0;
}

void func_730(int iParam0, bool bParam1, bool bParam2)
{
	struct<2> Var0;
	var uVar119;
	int iVar120;
	int iVar121;

	switch (func_162(iParam0))
	{
		case -2061583405:
			func_868(iParam0, &(Global_1951141->f_3109.f_27));
			break;
		case 81053684:
			func_868(iParam0, &(Global_1951141->f_3109.f_29));
			break;
		case -999503751:
			func_868(iParam0, &(Global_1951141->f_3109.f_26));
			if (func_150(iParam0, -166674229))
			{
				Var0.f_1 = 39;
				if (func_869(&Var0, iParam0, &uVar119, 0, 1, 0, 0, 0))
				{
					iVar120 = 0;
					while (iVar120 < 39)
					{
						iVar121 = &Var0.f_1[iVar120 /*3*/];
						if (func_90(iVar121, 0))
						{
							func_730(iVar121, 0, 0);
						}
						iVar120++;
					}
				}
			}
			break;
		case -525676072:
			func_868(iParam0, &(Global_1951141->f_3109.f_28));
			break;
		case -1719060085:
			func_868(iParam0, &(Global_1951141->f_3109.f_30));
			break;
		case -413129408:
			func_868(iParam0, &(Global_1951141->f_3109.f_31));
			break;
		default:
			if (func_150(iParam0, -1348134986))
			{
				func_868(iParam0, &(Global_1951141->f_3109.f_29));
			}
			break;
	}
	if (bParam2)
	{
		func_546();
	}
	if (bParam1)
	{
		func_548(0, 0);
	}
}

void func_731(var uParam0, int iParam1)
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
			if ((func_870(uParam0->f_2[iVar0 /*2*/], 2) || &uParam0->f_2[iVar0 /*2*/] == iParam1) || &uParam0->f_2[iVar0 /*2*/] == 39)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			else
			{
				if (func_870(uParam0->f_2[iVar0 /*2*/], 1))
				{
					func_871(uParam0->f_2[iVar0 /*2*/], 2, 6);
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

void func_732(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_872(uParam0, 1))
	{
		func_873(uParam0, 1);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (&uParam0->f_2[iVar0 /*2*/] == iParam1)
		{
			(uParam0->f_2[iVar0 /*2*/])->f_1 = iParam2;
			return;
		}
		if ((Global_1951141->f_81[&uParam0->f_2[iVar0 /*2*/] /*12*/])->f_2 > (Global_1951141->f_81[iParam1 /*12*/])->f_2)
		{
			iVar1 = *uParam0;
			while (iVar1 >= iVar0 + 1)
			{
				*(uParam0->f_2[iVar1 /*2*/]) = { *(uParam0->f_2[(iVar1 - 1) /*2*/]) };
				iVar1 = (iVar1 + -1);
			}
			uParam0->f_2[iVar0 /*2*/] = iParam1;
			(uParam0->f_2[iVar0 /*2*/])->f_1 = iParam2;
			*uParam0++;
			return;
		}
		iVar0++;
	}
	(uParam0->f_2[*uParam0 /*2*/])->f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

int func_733(int iParam0, int iParam1, int iParam2)
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

bool func_734(int iParam0)
{
	return &Global_1951141->f_1657.f_1[func_249(iParam0, 1) /*3*/] != &Global_1951141->f_81[func_249(iParam0, 1) /*12*/];
}

int func_735(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("base");
	return 1;
}

void func_736(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*(Global_1951141->f_1657.f_1[iParam0 /*3*/]) = { *(Global_1951141->f_1538.f_1[iParam0 /*3*/]) };
	}
	if (!bParam2)
	{
		return;
	}
	func_874(Global_1951141->f_1657.f_1[iParam0 /*3*/], iParam0, Global_17172.f_54.f_644.f_1776);
}

int func_737(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17172.f_54.f_644.f_1776;
	}
	if (iParam1 > -1 && iParam1 < 11)
	{
		return (Global_17172.f_54.f_644.f_32[iParam1 /*120*/] && iParam0) != 0;
	}
	return 0;
}

void func_738(int iParam0, bool bParam1, int iParam2)
{
	func_875(&(Global_1951141->f_1538), iParam0);
	func_876(2, iParam0, 6);
	if (bParam1)
	{
		func_548(0, 1);
	}
}

int func_739(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_816(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_740(struct<4> Param0, int iParam4, bool bParam5)
{
	int iVar0;
	struct<11> Var1;
	int iVar15;
	struct<28> Var16;
	struct<25> Var44;
	struct<17> Var69;
	struct<16> Var86;

	iVar0 = -1;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_374(Param0, &Var1, 1, 0, -1))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_91(Var1.f_4);
	if (iVar15 == joaat("horse"))
	{
		Var16 = { func_877(Param0, 1, 0) };
		Var16.f_10 = iParam4;
		iVar0 = func_878(joaat("update"), &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("coach"))
	{
		Var44 = { func_879(Param0, 1, 0) };
		Var44.f_10 = iParam4;
		iVar0 = func_880(joaat("update"), &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("clothing"))
	{
		Var69 = { func_881(Param0, 1, 0) };
		Var69.f_10 = iParam4;
		iVar0 = func_882(joaat("update"), &Var69, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var86 = { func_883(&Var1, 0) };
		Var86.f_10 = iParam4;
		iVar0 = func_222(joaat("update"), &Var86, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

float func_741(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_742()
{
	return (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_26285) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_26285, 0));
}

int func_743()
{
	return Global_1051202->f_12;
}

char* func_744()
{
	return "unnamed";
}

int func_745(int iParam0)
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

int func_746(int iParam0)
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

bool func_747(int iParam0)
{
	if (func_884(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) != 1)
		{
			func_885(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) == 1;
}

int func_748(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return 0;
	}
	return 1;
}

int func_749(int iParam0, int iParam1)
{
	struct<4> Var0;
	int iVar4;

	if (!func_90(iParam1, 0))
	{
		return 0;
	}
	Var0 = { func_886(iParam0, iParam1) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_0xC97E0D2302382211(iParam0, &Var0, 0);
	return iVar4;
}

int func_750(int iParam0, bool bParam1)
{
	if (!bParam1 || func_887())
	{
		return func_325(iParam0, func_368(1), -2015960939, 1, 1, 0);
	}
	return 0;
}

int func_751(int iParam0)
{
	switch (func_162(iParam0))
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
	if (func_150(iParam0, -1348134986))
	{
		return 1;
	}
	return 0;
}

void func_752(int iParam0, int iParam1, int iParam2)
{
	(Global_1951141->f_2548[func_249(iParam0, 1) /*2*/])->f_1 = ((Global_1951141->f_2548[func_249(iParam0, 1) /*2*/])->f_1 || iParam1);
}

int func_753(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6)
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

	if (func_682(iParam0))
	{
		return func_888(func_683(iParam0, 1), iParam2, uParam3);
	}
	if (!func_451(iParam0, iParam2, &Var0, &iVar31, 1, 0))
	{
		return 0;
	}
	bVar35 = (func_78(0) && !func_79());
	if (iParam6 != 0)
	{
		if (func_108() == 0)
		{
			return 0;
		}
		bParam5 = false;
	}
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (&Var0[iVar34 /*2*/] == 0 || &Var0[iVar34 /*2*/] == 1412640604)
		{
		}
		else
		{
			iVar32 = ((Var0[iVar34 /*2*/])->f_1 * iParam1);
			if (&Var0[iVar34 /*2*/] == 2084597891 && func_889(iVar32))
			{
				Jump @438; //curOff = 179
			}
			else if (&Var0[iVar34 /*2*/] == 773203532 && func_890(iVar32))
			{
			}
			else
			{
				if (iParam6 != 0)
				{
					iVar33 = func_674(&(Var0[iVar34 /*2*/]), iParam6);
				}
				else
				{
					iVar33 = func_94(&(Var0[iVar34 /*2*/]), 0, !bVar35, 1);
				}
				if (iVar33 >= iVar32)
				{
				}
				else if (bVar35)
				{
					if (func_241(&(Var0[iVar34 /*2*/])) || func_452(&(Var0[iVar34 /*2*/])))
					{
						iVar36 = 0;
						if (bParam5)
						{
							iVar37 = func_454(7, &(Var0[iVar34 /*2*/]), &iVar36);
						}
						iVar38 = func_453(&(Var0[iVar34 /*2*/]), iParam6);
						if (((iVar33 + iVar37) + iVar38) >= iVar32)
						{
							if ((iVar33 + iVar38) < iVar32 && ENTITY::DOES_ENTITY_EXIST(iVar36))
							{
								*iParam4 = iVar36;
							}
						}
						else
						{
							Jump @422; //curOff = 378
							if (bParam5 && ((iVar33 + func_455(7, &(Var0[iVar34 /*2*/]))) + func_456(&(Var0[iVar34 /*2*/]))) >= iVar32)
							{
							}
							else
							{
								*uParam3 = { *(Var0[iVar34 /*2*/]) };
								return 0;
							}
						}
						iVar34++;
						return 1;
					}
				}
			}
		}
	}

void func_754(int iParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (func_108() == 0)
	{
		iVar0 = func_891();
		if (iVar0 < iParam0)
		{
			iParam0 = iVar0;
		}
		func_892(iParam0, sParam1, -142743235, bParam4);
	}
	else
	{
		func_893(iParam0);
		if (bParam3)
		{
			func_894(iParam0, sParam1, iParam2);
		}
	}
}

int func_755(int iParam0, int iParam1, int iParam2)
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

	iParam0 = func_326(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_90(iParam1, 0))
	{
		return 0;
	}
	if (!func_678(iParam0))
	{
		return 0;
	}
	iVar0 = func_173(iParam0);
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
			if (!func_679(iVar28))
			{
			}
			else
			{
				MISC::_0x48E4D50F87A96AA5(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar28), 1, 1, ENTITY::GET_ENTITY_MODEL(iVar28), &Var3, 0);
				iVar29 = 0;
				while (iVar29 < 10)
				{
					iVar30 = &Var3.f_1[iVar29];
					if (iVar30 == iParam1)
					{
						func_426(iParam1, 1, 752097756);
						if (ENTITY::DOES_ENTITY_EXIST(iVar28))
						{
							iVar31 = func_245(&iVar28);
							if (!func_90(iVar31, 0))
							{
								iVar31 = func_246(iVar28);
							}
							if (func_90(iVar31, 0))
							{
								func_247(iVar31, 1, 1, -142743235);
							}
							ENTITY::_0x0D0DB2B6AF19A987(&iVar28);
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

void func_756(int iParam0, int iParam1)
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
		iVar12 = func_283(iParam0, 1697966752);
		if (iVar12 == 0)
		{
			return;
		}
		Var2 = { func_669(-1591664384, -1591664384, 0, 235313564, 0, 0, -1, iVar12, 0) };
		if (func_671(Var2, &iVar0, &iVar1, 0))
		{
			iVar14 = 0;
			while (iVar14 < iVar1)
			{
				if (iParam1 <= 0)
				{
				}
				else
				{
					iVar13 = func_672(iVar14, iVar0);
					if (func_90(iVar13, 0) && iParam0 != iVar13)
					{
						iVar15 = func_94(iVar13, 0, 0, 0);
						while (iVar15 > 0 && iParam1 > 0)
						{
							iParam1 = (iParam1 - func_895(iVar13, iParam0, 0));
							iVar15 = (iVar15 - 1);
						}
					}
					iVar14++;
				}
			}
			func_677(iVar0);
		}
	}
}

void func_757(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2[10];
	int iVar13;
	int iVar14;
	int iVar15;

	if (!func_90(iParam0, 0))
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
				iVar13 = func_896(iVar1, &uVar2);
				iVar14 = 0;
				while (iVar14 < iVar13)
				{
					if (&uVar2[iVar14] == iParam0)
					{
						ENTITY::_0x0D0DB2B6AF19A987(&iVar0);
					}
					else
					{
						iVar14++;
					}
				}
			}
			else if (PED::_0x9E7738B291706746(&iVar15, iVar1, PED::_GET_PED_DAMAGE(iVar1)) && iVar15 == iParam0)
			{
				ENTITY::_0x0D0DB2B6AF19A987(&iVar0);
			}
		}
	}
}

int func_758(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iParam0 = func_326(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_90(iParam1, 0))
	{
		return 0;
	}
	if (!func_678(iParam0))
	{
		return 0;
	}
	iVar0 = func_173(iParam0);
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
		else if (func_856(iParam1, iParam2, 1, -142743235))
		{
			iVar2++;
		}
		iVar3++;
	}
	return iVar2;
}

int func_759(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<5> Var0;
	struct<4> Var5;

	if (func_108() == 0)
	{
		return 0;
	}
	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	if (iParam2 < 1)
	{
		return 0;
	}
	Var0 = { func_368(0) };
	Var0.f_4 = func_448(iParam1);
	Var5 = { func_270(iParam0, Var0, Var0.f_4, 0) };
	if (!func_271(iParam0, &Var5, &Var0, iParam2, iParam3, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_760(int iParam0)
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
		case 48:
			return -1727702531 /* GXTEntry: "Wild Carrot" */;
		case 49:
			return 1783324404 /* GXTEntry: "Wild Feverfew" */;
		case 50:
			return 1288848815 /* GXTEntry: "Wild Mint" */;
		case 51:
			return 918090738 /* GXTEntry: "Wintergreen Berry" */;
		case 52:
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
		case 39:
			return 656594395;
		case 41:
			return -1174738785;
		case 42:
			return 1073505629;
		case 40:
			return -658674894;
		case 43:
			return -1504155535;
		case 44:
			return -1917345716;
		case 45:
			return 1823406682;
		case 46:
			return -1003637772;
		case 47:
			return -1571524081;
	}
	return 0;
}

int func_761(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_689(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1954472->f_1446;
		case 1:
			return Global_1954472->f_1465.f_136;
		default:
			break;
	}
	return -1;
}

void func_762(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1275573->f_8;
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

int func_763(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_689(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1954472->f_1446.f_1;
		case 1:
			return Global_1954472->f_1465.f_136.f_1;
		default:
			break;
	}
	return -1;
}

void func_764(float fParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = PLAYER::PLAYER_ID();
	if (fParam0 > 0f && func_897(iVar0))
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

int func_765(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_689(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1954472->f_1446.f_2;
		case 1:
			return Global_1954472->f_1465.f_136.f_2;
		default:
			break;
	}
	return -1;
}

void func_766(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1275573->f_8;
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

float func_767(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_773();
	func_898(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_899(iParam0, 2);
	if (func_901(iVar0, func_900(iParam0, 2), 1))
	{
		func_902(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_137(103, bParam2);
		return 0f;
	}
	func_903(iParam0, func_773(), 2);
	func_902(iParam0, iVar1 + 1, 2);
	return fParam1;
}

float func_768(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_689(2);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1954472->f_1331.f_6[iParam0 /*3*/]);
		case 1:
			return &(Global_1954472->f_1465.f_2.f_6[iParam0 /*3*/]);
		default:
			break;
	}
	return -1f;
}

int func_769(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (iParam5 == 2)
	{
		iParam5 = func_689(2);
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (func_904(iVar0, iParam0, fParam1))
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
			func_905(iParam0, 7000, iParam5);
		}
		func_906(iVar0, iParam0, fParam1);
		func_907(iParam0, fParam1, bParam4, iParam5);
	}
	return 1;
}

float func_770(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_689(1);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1954472->f_1331.f_26[iParam0]);
		case 1:
			return &(Global_1954472->f_1465.f_2.f_26[iParam0]);
		default:
			break;
	}
	return -1f;
}

int func_771()
{
	if (Global_1954472->f_1331.f_107 == -15)
	{
		return 1;
	}
	return func_908(Global_1954472->f_1331.f_107, 0);
}

int func_772(float fParam0)
{
	float fVar0;

	fVar0 = fParam0;
	fVar0 = ((2f * fVar0) - 100f);
	return BUILTIN::ROUND(((fVar0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

int func_773()
{
	return &Global_1902689;
}

void func_774(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_909(*iParam0);
	iVar1 = func_910(*iParam0);
	iVar2 = func_911(*iParam0);
	iVar3 = func_912(*iParam0);
	iVar4 = func_913(*iParam0);
	iVar5 = func_914(*iParam0);
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
	iVar6 = func_915(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_915(iVar1, iVar0);
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
	func_916(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_775(int iParam0, float fParam1, int iParam2)
{
	if (!func_917(iParam0))
	{
		return 0;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_689(2);
	}
	func_918(iParam0, fParam1, iParam2);
	if (!ENTITY::IS_ENTITY_DEAD(Global_1275573->f_8))
	{
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_1275573->f_8, iParam0, BUILTIN::FLOOR(fParam1));
	}
	return 1;
}

int func_776(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	char* sVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_PED_ID();
	if (fParam1 == -1f)
	{
		if (func_919(iParam0))
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
				sVar0 = func_920(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_719(-1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar1, iParam0, fParam1, iParam3);
			Global_17172.f_54.f_2438.f_34[0 /*2*/] = fParam1;
			break;
		case 1:
			if (bParam2)
			{
				sVar0 = func_920(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_921(1775828486);
			func_721(-1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar1, iParam0, fParam1, iParam3);
			Global_17172.f_54.f_2438.f_34[1 /*2*/] = fParam1;
			break;
		case 2:
			if (bParam2)
			{
				sVar0 = func_920(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_720(-1, 0);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar1, iParam0, fParam1, iParam3);
			Global_17172.f_54.f_2438.f_34[2 /*2*/] = fParam1;
			break;
		case 19:
			func_921(350943398);
			func_922(0, 1, 1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar1, iParam0, fParam1, iParam3);
			(Global_17172.f_54.f_2438.f_34[0 /*2*/])->f_1 = fParam1;
			break;
		case 18:
			func_922(1, 1, 1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar1, iParam0, fParam1, iParam3);
			(Global_17172.f_54.f_2438.f_34[1 /*2*/])->f_1 = fParam1;
			break;
		case 20:
			func_922(2, 1, 1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar1, iParam0, fParam1, iParam3);
			(Global_17172.f_54.f_2438.f_34[2 /*2*/])->f_1 = fParam1;
			break;
		default:
			return 0;
	}
	return 1;
}

void func_777(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_430(-372368982, func_760(iParam0)) };
	STATS::_0x6A0184E904CDF25E(&Var0, iParam1);
	func_192(func_191(106002964), iParam1);
}

void func_778(int iParam0, int iParam1)
{
	int iVar0;

	if (func_108() == 0)
	{
		iVar0 = func_283(iParam0, -949239683);
		if (iParam1 == -1387038764)
		{
			return;
		}
		if (func_150(iParam0, -136654233))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1823988672, -609313610, 1);
		}
		if ((func_150(iParam0, 1765172170) || 1443104131 == iVar0) || -1919515848 == iVar0)
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1823988672, 733633210, 1);
		}
		if (func_150(iParam0, 1573112293))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1823988672, -1274788474, 1);
		}
		if (func_150(iParam0, -2085281117) && !func_150(iParam0, -1237028043))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1823988672, -1456129530, 1);
		}
		if (func_150(iParam0, 200705431))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1823988672, 1380824593, 1);
		}
		if (((func_150(iParam0, -887064662) || func_150(iParam0, -839724752)) || func_150(iParam0, 1264218912)) || iParam0 == -1994237933)
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1823988672, 381139323, 1);
		}
		if (func_150(iParam0, -764700608))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1823988672, 1844266867, 1);
		}
	}
}

int func_779(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return ((*Global_1128435)[iParam0 /*83*/])->f_38.f_28;
}

int func_780(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return ((*Global_1128435)[iParam0 /*83*/])->f_38.f_28.f_1;
}

void func_781(var uParam0, int iParam1, int iParam2)
{
	((*Global_1913166)[uParam0->f_51 /*9*/])->f_5 = iParam2;
	((*Global_1913166)[uParam0->f_51 /*9*/])->f_6 = iParam1;
	((*Global_1913166)[uParam0->f_51 /*9*/])->f_7 = 1;
	((*Global_1913166)[uParam0->f_51 /*9*/])->f_8 = 0;
	Global_1913166->f_1576++;
	uParam0->f_51++;
	if ((iParam2 == 600942249 || iParam2 == -257768755) || iParam2 == 1472825031)
	{
		func_923(uParam0, iParam1, iParam2);
	}
	else if (iParam2 == -214678071)
	{
		func_924(uParam0, iParam1);
	}
}

int func_782(var uParam0, int iParam1)
{
	struct<10> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	Var0 = { func_669(-1591664384, -1591664384, 0, 0, iParam1, 0, -1, Global_1913166->f_1584, 0) };
	if (func_671(Var0, &iVar10, &iVar11, 0))
	{
		iVar12 = 0;
		while (iVar12 < iVar11)
		{
			iVar13 = func_672(iVar12, iVar10);
			if (func_90(iVar13, 0))
			{
				if (uParam0->f_51 >= 175)
				{
				}
				else
				{
					if (Global_1913166->f_1584 == 0 && func_150(iVar13, 302810039))
					{
						if (!(Global_1913166->f_1585 != 0 && func_150(iVar13, Global_1913166->f_1585)))
						{
						}
						else if (func_150(iVar13, 266762988))
						{
						}
						else
						{
							func_781(uParam0, iVar13, iParam1);
							func_925(uParam0, iVar13, iParam1);
						}
						iVar12++;
						func_926(&iVar10);
						return 1;
						return 0;
					}
				}
			}
		}
	}

int func_783(int iParam0)
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

int func_784(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_785(var uParam0, char[4] cParam1, var uParam2)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam2->f_35, cParam1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "visible", false);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "texture", "");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "textureDictionary", "inventory_items");
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "count", 3);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "enabled", 1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "inUse", false);
}

void func_786(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;

	iVar0 = ((*Global_1913166)[iParam2 /*9*/])->f_6;
	if ((iParam4 || uParam0->f_25) || func_225(iVar0, uParam0->f_48))
	{
		if (bParam1)
		{
			if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(((*Global_1913166)[iParam2 /*9*/])->f_1))
			{
				if (bParam5)
				{
					func_787(uParam0, -1, bParam3, ((*Global_1913166)[iParam2 /*9*/])->f_1, 1, 0, 1);
				}
				DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_36, uParam0->f_52, -2047994727, ((*Global_1913166)[iParam2 /*9*/])->f_1);
			}
			else
			{
				func_927(uParam0, iParam2, bParam1, bParam3);
			}
		}
		else
		{
			if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(((*Global_1913166)[iParam2 /*9*/])->f_1))
			{
				DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*Global_1913166)[iParam2 /*9*/])->f_1);
			}
			func_927(uParam0, iParam2, 0, bParam3);
		}
		if (uParam0->f_52 == 0)
		{
			uParam0->f_71 = ((*Global_1913166)[iParam2 /*9*/])->f_6;
			uParam0->f_72 = ((*Global_1913166)[iParam2 /*9*/])->f_5;
			uParam0->f_70 = ((*Global_1913166)[iParam2 /*9*/])->f_1;
		}
		uParam0->f_52++;
	}
}

void func_787(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
	iVar0 = ((*Global_1913166)[iParam1 /*9*/])->f_1;
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iVar0))
	{
		return;
	}
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar0, "eOutputItem");
	iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar0, "eCost");
	iVar3 = iVar1;
	iVar4 = iVar2;
	iVar5 = func_218(iVar3, iVar4, bParam2);
	iVar6 = func_94(iVar3, 0, 0, 0);
	iVar7 = func_587(iVar3, 0);
	if (iVar7 != -1)
	{
		iVar7 = (iVar7 - iVar6);
	}
	else
	{
		iVar7 = iVar5;
	}
	StringIntConCat(&cVar8, func_588(iVar7, iVar5), 8);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(iVar0, "count", &cVar8);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, "visible", 0);
	if (uParam0->f_25)
	{
		iVar9 = func_784((iVar5 > 0 && func_796(iVar3)), 1, 0);
	}
	else
	{
		iVar9 = func_784((iVar7 > 0 && iVar5 > 0), 1, 0);
	}
	bVar10 = false;
	if (iVar9 == 0 && func_928(iVar3))
	{
		if (func_929(iVar3, iVar4, uParam0, bParam2, &iVar11, &iVar12, &iVar13))
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
	if (!uParam0->f_28)
	{
		if ((iVar4 == -214678071 || iVar4 == 278772510) || DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(iVar0, "bFireCrafting"))
		{
			iVar9 = 0;
		}
	}
	if (!Global_1913166->f_1579 && func_794(iVar3, iVar4, 1))
	{
		iVar9 = 0;
		iVar14 = 1;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, "lockVisible", iVar14);
	if (iVar9 == 1)
	{
		if (!func_396(2) && func_283(iVar3, -1636519629) == -701492487)
		{
			((*Global_1913166)[iParam1 /*9*/])->f_2 = 0;
			iVar9 = 0;
		}
		else
		{
			((*Global_1913166)[iParam1 /*9*/])->f_2 = 1;
		}
	}
	else
	{
		if (((uParam0->f_53 && iVar9 == 0) && ((*Global_1913166)[iParam1 /*9*/])->f_2) && bParam4)
		{
			DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(uParam0->f_36, iVar0);
		}
		((*Global_1913166)[iParam1 /*9*/])->f_2 = 0;
	}
	if (bParam5)
	{
		if (func_352(iVar3, &Var15, joaat("inventory"), 0, 0, 0))
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
				if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var18.f_1[iVar41]), &Var42))
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
	if (!uParam0->f_28)
	{
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(iVar0, "bFireCrafting"))
		{
			iVar9 = 0;
		}
	}
	if (bVar10 && !bParam6)
	{
		iVar9 = 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "enabled", iVar9);
}

int func_788(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		return PED::GET_MOUNT(iParam0);
	}
	return 0;
}

void func_789(var uParam0, bool bParam1)
{
	int iVar0;

	if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_10))
	{
		iVar0 = TASK::_GET_ENTITY_SCENARIO_POINT_IS_ATTACHED_TO(uParam0->f_10);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		ENTITY::SET_ENTITY_COLLISION(iVar0, bParam1, false);
	}
}

void func_790(var uParam0, var uParam1)
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
	if (func_90(iVar2, 0) && (uParam0->f_25 || func_225(iVar2, uParam0->f_48)))
	{
		uParam0->f_33 = -1;
		uParam0->f_21 = 0;
		uParam0->f_73 = iVar2;
		uParam0->f_74 = iVar1;
		func_120((*uParam0)[1], 1, 1);
		iVar3 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iNumCostVariants");
		if (iVar3 > 1)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "variantVisible", 1);
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_35, "variantText", MISC::_CREATE_VAR_STRING(0, uParam0->f_73));
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_35, "variantCount", iVar3);
			iVar4 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iCurCostVariant");
			iVar5 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iIndex");
			if (iVar5 >= 0 && iVar5 < &Global_1913166)
			{
				iVar6 = ((*Global_1913166)[iVar5 /*9*/])->f_8;
			}
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_35, "variantIndex", (iVar4 + 1 - iVar6));
			uParam0->f_75 = 1;
			if (func_100(uParam0[5]))
			{
				func_130(uParam0[5], 1, 1, 1);
			}
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "variantVisible", 0);
			uParam0->f_75 = 0;
			if (func_100(uParam0[5]))
			{
				func_130(uParam0[5], 0, 1, 1);
			}
		}
		uParam0->f_49 = BUILTIN::ROUND((ENTITY::GET_ANIM_DURATION(func_806(uParam0->f_73), func_807(uParam0->f_73)) * 1000f));
		uParam0->f_76 = DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*uParam1, "bFireCrafting");
		uParam0->f_69 = *uParam1;
		(*uParam0)[1] = func_255("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		func_615(uParam0, uParam0->f_73, uParam0->f_74);
		func_257(uParam0[1], 11, 1, 1);
		if (Global_1913166->f_1579 || !func_794(uParam0->f_73, uParam0->f_74, 1))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_35, "RPGDescription", func_800(iVar2));
			func_622(uParam0, 0);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_35, "RPGDescription", 0);
		}
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgDescription"))
		{
			if (Global_1913166->f_1579 || !func_794(uParam0->f_73, uParam0->f_74, 1))
			{
				func_802(uParam0);
			}
		}
	}
}

char* func_791(var uParam0)
{
	if (uParam0->f_53)
	{
		return "CAMP_REC_ALL";
	}
	return "CAMP_REC_AVL";
}

int func_792(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_231(iVar0, 2))
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
		func_232(iVar1, iParam1, sParam0, 0, 3, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 0, iParam2, joaat("SHORT_TIMED_EVENT"), 0);
		return iVar1;
	}
	return 0;
}

void func_793(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_100(iParam0))
	{
		return;
	}
	iVar0 = func_229(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ALLOWED_ACTION(((*Global_1949759)[iVar0 /*23*/])->f_3, iParam1);
}

int func_794(int iParam0, int iParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if (!func_90(iParam0, 0))
	{
		return func_930(func_278(iParam0), iParam1, bParam2);
	}
	if (func_682(iParam0))
	{
		return func_931(func_683(iParam0, 1), iParam1);
	}
	if ((bParam2 && func_108() == 0) && !UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
	{
		return 1;
	}
	if (!func_932(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return 0;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = &uVar0[iVar12];
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

int func_795(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	struct<2> Var0;

	*uParam2 = 0;
	*uParam3 = 0;
	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	if ((!Global_1913166->f_1579 && func_794(iParam0, iParam1, 1)) && !bParam5)
	{
		return 0;
	}
	if (!func_753(iParam0, 1, iParam1, &Var0, iParam4, bParam6, iParam7))
	{
		*uParam2 = Var0;
		*uParam3 = Var0.f_1;
		return 0;
	}
	return 1;
}

bool func_796(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_934(func_933());
	iVar1 = func_934(iParam0);
	return iVar1 > iVar0;
}

bool func_797(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
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
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam2->f_47);
	iVar33 = 0;
	while (iVar33 < 4)
	{
		DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(uParam2->f_47, &(uParam2->f_42[iVar33]));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam2->f_37[iVar33]), "visible", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam2->f_37[iVar33]), "inUse", 0);
		iVar33++;
	}
	if (!bParam4 && func_451(iParam0, iParam1, &Var0, &iVar32, 1, 0))
	{
		iVar33 = 0;
		while (iVar33 < iVar32)
		{
			if (iVar33 >= 4)
			{
			}
			else
			{
				iVar31 = &Var0[iVar33 /*2*/];
				if (func_90(iVar31, 0))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam2->f_37[iVar33]), "visible", 1);
					if (func_352(iVar31, &Var35, joaat("inventory"), 0, 0, 0))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam2->f_37[iVar33]), "texture", Var35);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam2->f_37[iVar33]), "textureDictionary", Var35.f_1);
					}
					iVar38 = func_94(iVar31, 0, 0, 0);
					bVar39 = iVar38 >= (Var0[iVar33 /*2*/])->f_1;
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam2->f_37[iVar33]), "count", iVar38);
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam2->f_37[iVar33]), "enabled", func_784(bVar39, 1, 0));
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam2->f_37[iVar33]), "inUse", 1);
					if (!bVar39)
					{
						bVar34 = false;
					}
					sVar40 = MISC::_CREATE_VAR_STRING(10, "CRFT_ING_LIST", MISC::_CREATE_VAR_STRING(0, &(Var0[iVar33 /*2*/])), (Var0[iVar33 /*2*/])->f_1);
					StringCopy(&cVar41, "Text", 16);
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam2->f_42[iVar33]), &cVar41, sVar40);
					StringCopy(&cVar41, "Enabled", 16);
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam2->f_42[iVar33]), &cVar41, func_784(bVar39, 1, 0));
					DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam2->f_47, -1, 309940639, &(uParam2->f_42[iVar33]));
				}
				iVar33++;
			}
		}
	}
	if (bVar34)
	{
		if (!uParam2->f_28 && ((uParam2->f_76 || uParam2->f_74 == -214678071) || uParam2->f_74 == 278772510))
		{
			bVar34 = false;
			if (func_234(iParam0))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_FIRE_CK"));
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_FIRE"));
			}
		}
		else
		{
			iVar43 = func_94(iParam0, 0, 0, 0);
			iVar44 = func_587(iParam0, 0);
			if (uParam2->f_25 && !func_796(iParam0))
			{
				bVar34 = false;
				iVar45 = func_933();
				if (iParam0 == iVar45)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "STEW_MADE"));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "STEW_MADE_BETTER"));
				}
			}
			else if ((iVar44 - iVar43) > 0 || iVar44 == -1)
			{
				iVar46 = func_283(iParam0, -1636519629);
				if (!func_396(2) && iVar46 == -701492487)
				{
					bVar34 = false;
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_CONS"));
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iParam3))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(34, "CRFT_BREAK", 1, MISC::_CREATE_VAR_STRING(0, PLAYER::_0x0139637A3BFF8B6D(iParam3, &uVar47))));
				}
				else
				{
					iVar48 = func_218(iParam0, uParam2->f_74, func_394());
					if (uParam2->f_25)
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, func_935(iParam0)));
					}
					else if (uParam2->f_74 == -214678071)
					{
						if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam2->f_69, "iNumCostVariants") <= 1 && DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam2->f_35, "ShowRpgDescription"))
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CAMP_MEAT_POOR"));
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "COOK_ING_HAVE", iVar48));
						}
					}
					else if (uParam2->f_74 == 278772510)
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "COOK_ING_HAVE", iVar48));
					}
					else if (iVar46 == -701492487)
					{
						if (iVar48 == 1)
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "BREW_ING_HAVE1", iVar48));
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "BREW_ING_HAVE", iVar48));
						}
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_HAVE", iVar48));
					}
				}
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(130, "CRFT_ING_MAX", iVar43, iVar44, MISC::_CREATE_VAR_STRING(0, iParam0)));
				bVar34 = false;
			}
		}
	}
	else if (bParam4)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_LOCK"));
	}
	else if (!uParam2->f_28 && ((uParam2->f_76 || uParam2->f_74 == -214678071) || uParam2->f_74 == 278772510))
	{
		bVar34 = false;
		if (func_234(iParam0))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_FIRE_CK"));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_FIRE"));
		}
	}
	else if (uParam2->f_25 && !func_796(iParam0))
	{
		iVar49 = func_933();
		if (iParam0 == iVar49)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "STEW_MADE"));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "STEW_MADE_BETTER"));
		}
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_NEED"));
	}
	return bVar34;
}

void func_798(var uParam0)
{
	if (uParam0->f_25)
	{
		if (!func_150(uParam0->f_73, -2011345500))
		{
			func_120((*uParam0)[7], 1, 1);
			return;
		}
		if (!func_100(uParam0[7]))
		{
			(*uParam0)[7] = func_255("CAMP_ADD_TASK", joaat("INPUT_GAME_MENU_RS"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		}
		if ((uParam0->f_33 > 0 || uParam0->f_73 == Global_1131092->f_339.f_16) || !func_796(uParam0->f_73))
		{
			func_130(uParam0[7], 0, 1, 1);
		}
		else
		{
			func_130(uParam0[7], 1, 1, 1);
		}
	}
}

int func_799(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_800(int iParam0)
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

void func_801(var uParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgHorse", 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgPlayer", 0);
}

void func_802(var uParam0)
{
	if ((func_150(uParam0->f_73, 1147021565) || uParam0->f_25) && !func_150(uParam0->f_73, 1919582297))
	{
		if (func_225(uParam0->f_73, 5))
		{
			ATTRIBUTE::_0x7E2C766ADB2C5F1A(uParam0->f_73, 2);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgHorse", 1);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgPlayer", 0);
		}
		else
		{
			ATTRIBUTE::_0x7E2C766ADB2C5F1A(uParam0->f_73, 1);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgHorse", 0);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgPlayer", 1);
		}
	}
	else
	{
		ATTRIBUTE::_0xD962F8579D702DB5();
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgHorse", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgPlayer", 0);
	}
}

void func_803(var uParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_35, "filterIndex");
	uParam0->f_48 = iVar0;
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_35, "filter", func_783(uParam0->f_48));
}

int func_804(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	if (WEAPON::_IS_WEAPON_PISTOL(iVar0))
	{
		return -236347221;
	}
	else if (WEAPON::_IS_WEAPON_REVOLVER(iVar0))
	{
		return 1537403900;
	}
	else if (WEAPON::_IS_WEAPON_RIFLE(iVar0))
	{
		return 809653548;
	}
	else if (WEAPON::_IS_WEAPON_REPEATER(iVar0))
	{
		return 975914773;
	}
	else if (WEAPON::_IS_WEAPON_SHOTGUN(iVar0))
	{
		return -91245513;
	}
	return 0;
}

Vector3 func_805(int iParam0)
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

char* func_806(var uParam0)
{
	if (PED::IS_PED_MALE(Global_34))
	{
		return "MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A";
	}
	return "MP_AMB_PLAYER@CRAFTING@FALLBACKS@IN_HAND@FEMALE_A";
}

char* func_807(var uParam0)
{
	return "craft_trans_stow";
}

var func_808(int iParam0)
{
	var uVar0;

	SCRIPTS::_0x31010318BA9897AC(&uVar0, iParam0);
	return uVar0;
}

void func_809(int iParam0, struct<5> Param1, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam15))
	{
		return;
	}
	if (!func_936(0))
	{
		return;
	}
	Param1 = 10;
	Param1.f_1 = PLAYER::PLAYER_ID();
	Param1.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Param1.f_4 = iParam0;
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param1, 14, 13, &uParam15);
}

void func_810(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		if ((!NETWORK::NETWORK_IS_PLAYER_ACTIVE(((*Global_1128435)[iVar0 /*83*/])->f_38.f_28.f_2) || ((*Global_1128435)[iVar0 /*83*/])->f_38.f_28.f_2 == iParam0) || bParam1)
		{
			((*Global_1128435)[iVar0 /*83*/])->f_38.f_28.f_2 = 255;
			((*Global_1128435)[iVar0 /*83*/])->f_38.f_28.f_3 = -1;
		}
	}
}

void func_811(int iParam0, var uParam1)
{
	struct<7> Var0;
	struct<5> Var7;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	CLOCK::_0x86A68E84E5884951(&Var0);
	Var7.f_3 = 2;
	Var7.f_4 = 24;
	CLOCK::_0x28EEACE9B43D9597(&Var0, &Var7, &Var0);
	((*Global_1128435)[iParam0 /*83*/])->f_38.f_28.f_1 = uParam1;
	Global_1131092->f_339.f_1 = uParam1;
	Global_1131092->f_339.f_9 = { Var0 };
}

int func_812(int iParam0)
{
	if (!GANG::_0xD6F6ACF4392187FB(iParam0))
	{
		return -1;
	}
	if (iParam0 == GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))
	{
		return func_341(PLAYER::PLAYER_ID());
	}
	return func_937(GANG::_0x4BE6C13A45CCA8EC(iParam0));
}

void func_813(var uParam0, var uParam1)
{
	struct<14> Var0;

	Var0.f_8 = uParam0;
	Var0.f_12 = uParam1;
	func_809(17, Var0, func_344(0, 8));
}

void func_814(var uParam0)
{
	struct<14> Var0;

	Var0.f_12 = uParam0;
	func_809(13, Var0, func_808(GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))));
}

Vector3 func_815(int iParam0)
{
	if (iParam0 == 255)
	{
		return ((*Global_1128435)[func_839() /*83*/])->f_38;
	}
	return ((*Global_1128435)[iParam0 /*83*/])->f_38;
}

int func_816(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_73(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return 0;
	}
	if (!func_576(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_817(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam0 != 0)
	{
		iVar5 = func_162(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_638(iParam0);
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

int func_818(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_90(iParam0, 0) && !func_458(func_278(iParam0), 2))
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

int func_819(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

void func_820(bool bParam0)
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

void func_821(int iParam0)
{
	int iVar0;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1954472->f_5.f_7))
	{
		return;
	}
	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1954472->f_5.f_7) > iParam0)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1954472->f_5.f_7, iParam0);
		if (iVar0 == &Global_1954472->f_5.f_14[iParam0 /*82*/])
		{
			return;
		}
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1954472->f_5.f_7, iParam0, "pause_info_panel_list", &(Global_1954472->f_5.f_14[iParam0 /*82*/]));
}

void func_822(bool bParam0)
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

void func_823(bool bParam0)
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

void func_824(bool bParam0)
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

void func_825(bool bParam0)
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

void func_826(bool bParam0)
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

void func_827(bool bParam0)
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

int func_828()
{
	return 1;
	if (Global_1572887->f_13 == 0)
	{
		return 1;
	}
	return Global_39.f_1;
}

var func_829(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

void func_830(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_938())
	{
		Global_1912978->f_125 = MISC::GET_GAME_TIMER();
		Global_1912978->f_126 = iParam1;
	}
	Global_1912978->f_127 = (Global_1912978->f_127 + iParam0);
}

bool func_831()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797);
}

bool func_832()
{
	return DLC::IS_DLC_PRESENT(-2112896652);
}

int func_833(int iParam0)
{
	int iVar0;

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_162(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar0);
}

int func_834(int iParam0, int iParam1, bool bParam2)
{
	if (!func_939(iParam0))
	{
		return 0;
	}
	if (ITEMDATABASE::_0xF540239F9937033B(iParam0, iParam1) == 0)
	{
		return 0;
	}
	if (bParam2)
	{
		return !func_931(iParam0, iParam1);
	}
	return 1;
}

int func_835(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_458(iParam0, 2))
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

int func_836(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return 0;
	}
	if (!func_939(iParam0))
	{
		return 0;
	}
	*iParam3 = ITEMDATABASE::_0xF540239F9937033B(iParam0, iParam1);
	if (*iParam3 == 0)
	{
		if (!bParam4)
		{
		}
		return 0;
	}
	if (!bParam4)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!ITEMDATABASE::_0xF27F01BBF5ACD3F3(iParam0, iParam1, iVar0, (*uParam2)[iVar0 /*2*/]))
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
		func_940(iParam0, iParam1, uParam2, *iParam3);
	}
	return 1;
}

void func_837(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<20> Var1;

	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1272170->f_20 < 20)
	{
		Global_1272170->f_20++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1272170->f_20.f_1[iVar0 /*20*/]) = { *(Global_1272170->f_20.f_1[iVar0 + 1 /*20*/]) };
			iVar0++;
		}
	}
	Var1 = -1;
	Var1.f_4.f_7 = -142743235;
	Var1 = iParam0;
	Var1.f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Var1.f_2 = iParam2;
		Var1.f_3 = iParam3;
	}
	*(Global_1272170->f_20.f_1[(Global_1272170->f_20 - 1) /*20*/]) = { Var1 };
}

bool func_838(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_839()
{
	return Global_1099294->f_339;
}

void func_840(int iParam0, int iParam1)
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

void func_841(var uParam0, int iParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_843(uParam0))
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

int func_842(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_843(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_844(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_941(INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iParam0), iParam1, iParam2, bParam3, iParam4);
}

int func_845(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_942(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 51)
	{
		iVar1 = func_943(iVar0, 1);
		iVar2 = iVar1;
		if (iParam0 == iVar2)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_846(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iParam0 = func_326(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_944(iParam1);
	if (iVar0 != 0)
	{
		iVar1 = func_945(iVar0, 1);
		if (iVar1 > -1)
		{
			iVar2 = &Global_1903929->f_417[iVar1];
			if (iVar2 > 0)
			{
				iVar3 = iParam2;
				if (iVar3 > iVar2)
				{
					iVar3 = iVar2;
				}
				if (!func_946(iVar3, 0))
				{
				}
				Global_1903929->f_417[iVar1] = (&Global_1903929->f_417[iVar1] - iVar3);
				return 1;
			}
		}
	}
	return 0;
}

bool func_847(int iParam0, int iParam1, bool bParam2)
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
	return func_947(iVar0, bParam2) >= func_948(bParam2);
}

int func_848(int iParam0, int iParam1, int iParam2)
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
		if (iParam0 != PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID()) || NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
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
			iVar1 = &((*Global_1269869)[PLAYER::PLAYER_ID() /*20*/])->f_16[iVar0];
			if (iVar1 == iParam1)
			{
				((*Global_1269869)[PLAYER::PLAYER_ID() /*20*/])->f_16[iVar0] = 0;
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

int func_849(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::_0x9A100F1CF4546629(iParam0) || ENTITY::_0xC346A546612C49A9(iParam0))
	{
		iVar0 = func_245(&iParam0);
		if (!func_90(iVar0, 0))
		{
			iVar0 = func_246(iParam0);
		}
	}
	else
	{
		iVar0 = func_246(iParam0);
	}
	return iVar0;
}

bool func_850(int iParam0, int iParam1)
{
	*iParam1 = func_949(iParam0);
	return *iParam1 != 0;
}

void func_851(var uParam0, var uParam1)
{
	MISC::_COPY_MEMORY(uParam1, uParam0, 95);
}

void func_852(int iParam0)
{
	int iVar0;
	var uVar1[10];
	int iVar12;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	func_896(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), &uVar1);
	iVar12 = 0;
	while (iVar12 < 10)
	{
		if (func_90(&(uVar1[iVar12]), 0))
		{
			if (func_150(&(uVar1[iVar12]), -1690954218))
			{
				func_950(iVar0, -1760041550 /* GXTEntry: "High Quality Beef Stew" */);
			}
			else if (func_150(&(uVar1[iVar12]), 1149630095))
			{
				func_950(iVar0, -1760041550 /* GXTEntry: "High Quality Beef Stew" */);
			}
			else if (func_150(&(uVar1[iVar12]), 194498509))
			{
				func_950(iVar0, 116793994 /* GXTEntry: "Medium Quality Beef Stew" */);
			}
			else if (func_150(&(uVar1[iVar12]), 43251425))
			{
				func_950(iVar0, 1869130580 /* GXTEntry: "Low Quality Beef Stew" */);
			}
			else
			{
				func_950(iVar0, 1869130580 /* GXTEntry: "Low Quality Beef Stew" */);
			}
		}
		iVar12++;
	}
}

int func_853(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_850(iParam0, &iVar1))
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

int func_854(int iParam0)
{
	switch (iParam0)
	{
		case -151356522: /* GXTEntry: "Poor Bluegill" */
		case 1006434513: /* GXTEntry: "Bluegill" */
			return 158537911 /* GXTEntry: "Bluegill" */;
		case 306916738: /* GXTEntry: "Bullhead Catfish" */
		case 1481288777: /* GXTEntry: "Poor Bullhead Catfish" */
			return -1062286052 /* GXTEntry: "Bullhead Catfish" */;
		case -1824685471: /* GXTEntry: "Poor Chain Pickerel" */
		case 724563284: /* GXTEntry: "Chain Pickerel" */
			return -785236358 /* GXTEntry: "Chain Pickerel" */;
		case 803930024: /* GXTEntry: "Poor Channel Catfish" */
		case 1917027383: /* GXTEntry: "Channel Catfish" */
			return -1450728546 /* GXTEntry: "Channel Catfish" */;
		case -855052577: /* GXTEntry: "Lake Sturgeon" */
		case 1111663869: /* GXTEntry: "Poor Lake Sturgeon" */
			return -1295437670 /* GXTEntry: "Lake Sturgeon" */;
		case -5376850: /* GXTEntry: "Largemouth Bass" */
		case 1425358430: /* GXTEntry: "Poor Largemouth Bass" */
			return 1767657451 /* GXTEntry: "Largemouth Bass" */;
		case 1297433586: /* GXTEntry: "Poor Longnose Gar" */
		case 1338219162: /* GXTEntry: "Longnose Gar" */
			return -1222065966 /* GXTEntry: "Longnose Gar" */;
		case -1538397860: /* GXTEntry: "Muskie" */
		case -293259613: /* GXTEntry: "Poor Muskie" */
			return -897542141 /* GXTEntry: "Muskie" */;
		case 193037129: /* GXTEntry: "Northern Pike" */
		case 588902637: /* GXTEntry: "Poor Northern Pike" */
			return -1458047097 /* GXTEntry: "Northern Pike" */;
		case -861419347: /* GXTEntry: "Poor Perch" */
		case 1416872916: /* GXTEntry: "Perch" */
			return -1713740144 /* GXTEntry: "Perch" */;
		case 357567274: /* GXTEntry: "Poor Redfin Pickerel" */
		case 1500919793: /* GXTEntry: "Redfin Pickerel" */
			return -1518011865 /* GXTEntry: "Redfin Pickerel" */;
		case 683583793: /* GXTEntry: "Poor Rock Bass" */
		case 1042542561: /* GXTEntry: "Rock Bass" */
			return -1268607968 /* GXTEntry: "Rock Bass" */;
		case -1202625002: /* GXTEntry: "Poor Smallmouth Bass" */
		case 56657913: /* GXTEntry: "Smallmouth Bass" */
			return -1666587802 /* GXTEntry: "Smallmouth Bass" */;
		case 485620834: /* GXTEntry: "Poor Sockeye Salmon" */
		case 1570826681: /* GXTEntry: "Sockeye Salmon" */
			return 759956813 /* GXTEntry: "Sockeye Salmon" */;
		case 727522818: /* GXTEntry: "Poor Steelhead Trout" */
		case 785407605: /* GXTEntry: "Steelhead Trout" */
			return -129858069 /* GXTEntry: "Steelhead Trout" */;
		case -1457420231: /* GXTEntry: "Good Bat Carcass" */
		case 563848610: /* GXTEntry: "Poor Bat Carcass" */
		case 1432949803: /* GXTEntry: "Perfect Bat Carcass" */
			return 783089120 /* GXTEntry: "Bat" */;
		case -2120099592: /* GXTEntry: "Poor Blue Jay Carcass" */
		case -983831788: /* GXTEntry: "Perfect Blue Jay Carcass" */
		case 1848456619: /* GXTEntry: "Good Blue Jay Carcass" */
			return 1516275256 /* GXTEntry: "Blue Jay" */;
		case -1882344824: /* GXTEntry: "Perfect Bullfrog Carcass" */
		case -1640704323: /* GXTEntry: "Good Bullfrog Carcass" */
		case -1134447619: /* GXTEntry: "Poor Bullfrog Carcass" */
			return 1339926283 /* GXTEntry: "Bullfrog" */;
		case -1323780599: /* GXTEntry: "Poor Cedar Waxwing Carcass" */
		case -532099639: /* GXTEntry: "Good Cedar Waxwing Carcass" */
		case 905173572: /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
			return -1273168083 /* GXTEntry: "Cedar Waxwing" */;
		case -867655342: /* GXTEntry: "Perfect Cormorant Carcass" */
		case 80093385: /* GXTEntry: "Good Cormorant Carcass" */
		case 991092621: /* GXTEntry: "Poor Cormorant Carcass" */
			return 1677450645 /* GXTEntry: "Cormorant" */;
		case -1956973834: /* GXTEntry: "Perfect Carolina Parakeet Carcass" */
		case -738999731: /* GXTEntry: "Poor Carolina Parakeet Carcass" */
		case 566023444: /* GXTEntry: "Good Carolina Parakeet Carcass" */
			return -1906789582 /* GXTEntry: "Parakeet" */;
		case -1905834457: /* GXTEntry: "Good Crow Carcass" */
		case -110353515: /* GXTEntry: "Poor Crow Carcass" */
		case 59384454: /* GXTEntry: "Perfect Crow Carcass" */
			return 613321581 /* GXTEntry: "Crow" */;
		case 444160793: /* GXTEntry: "Perfect Squirrel Carcass" */
		case 1205453831: /* GXTEntry: "Poor Squirrel Carcass" */
		case 1815539745: /* GXTEntry: "Good Squirrel Carcass" */
			return -581264978 /* GXTEntry: "Squirrel" */;
		case -1969404854: /* GXTEntry: "Perfect Cardinal Carcass" */
		case 183958842: /* GXTEntry: "Good Cardinal Carcass" */
		case 1948158930: /* GXTEntry: "Poor Cardinal Carcass" */
			return 1075520399 /* GXTEntry: "Cardinal" */;
		case -1586332975: /* GXTEntry: "Poor Chipmunk Carcass" */
		case -832850511: /* GXTEntry: "Perfect Chipmunk Carcass" */
		case 1857501916: /* GXTEntry: "Good Chipmunk Carcass" */
			return -2045434273 /* GXTEntry: "Chipmunk" */;
		case -1888757291: /* GXTEntry: "Perfect Crab Carcass" */
		case 894877715: /* GXTEntry: "Good Crab Carcass" */
		case 995863399: /* GXTEntry: "Poor Crab Carcass" */
			return 1220494366 /* GXTEntry: "Crab" */;
		case -1974778216: /* GXTEntry: "Poor Crawfish Carcass" */
		case -381243381: /* GXTEntry: "Perfect Crawfish Carcass" */
		case -210676278: /* GXTEntry: "Good Crawfish Carcass" */
			return 1798104140;
		case -529454751: /* GXTEntry: "Poor Gila Monster Carcass" */
		case -246542229: /* GXTEntry: "Perfect Gila Monster Carcass" */
		case 1582593525: /* GXTEntry: "Good Gila Monster Carcass" */
			return 1735171971 /* GXTEntry: "Lizard" */;
		case -1030182399: /* GXTEntry: "Poor Iguana Carcass" */
		case 1191274340: /* GXTEntry: "Good Iguana Carcass" */
		case 1613453781: /* GXTEntry: "Perfect Iguana Carcass" */
			return 843200239 /* GXTEntry: "Iguana" */;
		case -1464585113: /* GXTEntry: "Perfect Oriole Carcass" */
		case -610456424: /* GXTEntry: "Poor Oriole Carcass" */
		case -284151822: /* GXTEntry: "Good Oriole Carcass" */
			return 562612880 /* GXTEntry: "Oriole" */;
		case -1999212658: /* GXTEntry: "Poor Pigeon Carcass" */
		case -593435395: /* GXTEntry: "Good Pigeon Carcass" */
		case -245335326: /* GXTEntry: "Perfect Pigeon Carcass" */
			return 1948286917 /* GXTEntry: "Pigeon" */;
		case -1726572562: /* GXTEntry: "Good Quail Carcass" */
		case -1017987135: /* GXTEntry: "Perfect Quail Carcass" */
		case 2058475216: /* GXTEntry: "Poor Quail Carcass" */
			return -756458312 /* GXTEntry: "Quail" */;
		case -1909348309: /* GXTEntry: "Good Rat Carcass" */
		case -1788506246: /* GXTEntry: "Poor Rat Carcass" */
		case 1761263432: /* GXTEntry: "Perfect Rat Carcass" */
			return -705312705 /* GXTEntry: "Rat" */;
		case -1824684934: /* GXTEntry: "Poor Red-footed Booby Carcass" */
		case -861854914: /* GXTEntry: "Good Red-footed Booby Carcass" */
		case -545447034: /* GXTEntry: "Perfect Red-footed Booby Carcass" */
			return 886059398 /* GXTEntry: "Bird" */;
		case -1290897778: /* GXTEntry: "Perfect Robin Carcass" */
		case -350704687: /* GXTEntry: "Poor Robin Carcass" */
		case 765892430: /* GXTEntry: "Good Robin Carcass" */
			return 2018874380 /* GXTEntry: "Robin" */;
		case -1080457688: /* GXTEntry: "Poor Roseate Spoonbill Carcass" */
		case 416630124: /* GXTEntry: "Good Roseate Spoonbill Carcass" */
		case 1925728375: /* GXTEntry: "Perfect Roseate Spoonbill Carcass" */
			return -1181288733 /* GXTEntry: "Spoonbill" */;
		case -1867587109: /* GXTEntry: "Good Sparrow Carcass" */
		case 182158309: /* GXTEntry: "Poor Sparrow Carcass" */
		case 313332607: /* GXTEntry: "Perfect Sparrow Carcass" */
			return -143561573 /* GXTEntry: "Sparrow" */;
		case -318217782: /* GXTEntry: "Good Songbird Carcass" */
		case -100913452: /* GXTEntry: "Perfect Songbird Carcass" */
		case 72307351: /* GXTEntry: "Poor Songbird Carcass" */
			return 395345271 /* GXTEntry: "Songbird" */;
		case -2123600216: /* GXTEntry: "Poor Toad Carcass" */
		case -146690338: /* GXTEntry: "Good Toad Carcass" */
		case -124539232: /* GXTEntry: "Perfect Toad Carcass" */
			return 725092441 /* GXTEntry: "Toad" */;
		case -1403731492: /* GXTEntry: "Good Woodpecker Carcass" */
		case -843795569: /* GXTEntry: "Perfect Woodpecker Carcass" */
		case 1496267371: /* GXTEntry: "Poor Woodpecker Carcass" */
			return -391309265;
		case -1643384846: /* GXTEntry: "Poor Alligator Carcass" */
		case -1424697962: /* GXTEntry: "Perfect Alligator Carcass" */
		case 915880986: /* GXTEntry: "Good Alligator Carcass" */
			return -1472826885 /* GXTEntry: "Alligator" */;
		case -847420802: /* GXTEntry: "Good Armadillo Carcass" */
		case -662726703: /* GXTEntry: "Perfect Armadillo Carcass" */
		case 1760886130: /* GXTEntry: "Poor Armadillo Carcass" */
			return -43987615 /* GXTEntry: "Armadillo" */;
		case -1243653490: /* GXTEntry: "Good Badger Carcass" */
		case -674590015: /* GXTEntry: "Poor Badger Carcass" */
		case 1988467099: /* GXTEntry: "Perfect Badger Carcass" */
			return 597440621 /* GXTEntry: "Badger" */;
		case -1480423460: /* GXTEntry: "Good Beaver Carcass" */
		case 924882045: /* GXTEntry: "Perfect Beaver Carcass" */
		case 1415608202: /* GXTEntry: "Poor Beaver Carcass" */
			return 1297902195 /* GXTEntry: "Beaver" */;
		case -593311590: /* GXTEntry: "Good Bighorn Sheep Carcass" */
		case 765085831: /* GXTEntry: "Perfect Bighorn Sheep Carcass" */
		case 2094730711: /* GXTEntry: "Poor Bighorn Sheep Carcass" */
			return -1427844561 /* GXTEntry: "Sheep" */;
		case -1310590179: /* GXTEntry: "Good Buck Carcass" */
		case -244657613: /* GXTEntry: "Poor Buck Carcass" */
		case 992366796: /* GXTEntry: "Perfect Buck Carcass" */
			return -1055552242 /* GXTEntry: "Buck" */;
		case -2026210939: /* GXTEntry: "Good California Condor Carcass" */
		case -1252472243: /* GXTEntry: "Perfect California Condor Carcass" */
		case -980016656: /* GXTEntry: "Poor California Condor Carcass" */
			return -1847199476 /* GXTEntry: "Californian Condor" */;
		case -2139551030: /* GXTEntry: "Perfect Chicken Carcass" */
		case -758005668: /* GXTEntry: "Good Chicken Carcass" */
		case 1607144310: /* GXTEntry: "Poor Chicken Carcass" */
			return 2059272711 /* GXTEntry: "Chicken" */;
		case -1722483116: /* GXTEntry: "Poor Cougar Carcass" */
		case 871746664: /* GXTEntry: "Good Cougar Carcass" */
		case 1626949878: /* GXTEntry: "Perfect Cougar Carcass" */
			return -1071812884 /* GXTEntry: "Cougar" */;
		case -1739474417: /* GXTEntry: "Good Coyote Carcass" */
		case -161524199: /* GXTEntry: "Perfect Coyote Carcass" */
		case 156979555: /* GXTEntry: "Poor Coyote Carcass" */
			return -564442545 /* GXTEntry: "Coyote" */;
		case -1228376431: /* GXTEntry: "Poor Crane Carcass" */
		case 322141256: /* GXTEntry: "Good Crane Carcass" */
		case 1310120320: /* GXTEntry: "Perfect Crane Carcass" */
			return -1923720634 /* GXTEntry: "Crane" */;
		case -1837840093: /* GXTEntry: "Perfect Deer Carcass" */
		case 58634176: /* GXTEntry: "Poor Deer Carcass" */
		case 472142656: /* GXTEntry: "Good Deer Carcass" */
			return -510702611 /* GXTEntry: "Deer" */;
		case 1001171791: /* GXTEntry: "Perfect Duck Carcass" */
		case 1023080408: /* GXTEntry: "Good Duck Carcass" */
		case 1210345318: /* GXTEntry: "Poor Duck Carcass" */
			return -1350246467 /* GXTEntry: "Duck" */;
		case -1422869557: /* GXTEntry: "Perfect Eagle Carcass" */
		case -1378812236: /* GXTEntry: "Poor Eagle Carcass" */
		case 399553313: /* GXTEntry: "Good Eagle Carcass" */
			return 2104011353 /* GXTEntry: "Eagle" */;
		case 651035143: /* GXTEntry: "Perfect Egret Carcass" */
		case 1011003885: /* GXTEntry: "Good Egret Carcass" */
		case 2013022756: /* GXTEntry: "Poor Egret Carcass" */
			return 1157397403 /* GXTEntry: "Egret" */;
		case -1186289527: /* GXTEntry: "Good Fox Carcass" */
		case -39646495: /* GXTEntry: "Poor Fox Carcass" */
		case 877935135: /* GXTEntry: "Perfect Fox Carcass" */
			return -1003674917 /* GXTEntry: "Fox" */;
		case -1347000030: /* GXTEntry: "Perfect Goat Carcass" */
		case -505583391: /* GXTEntry: "Poor Goat Carcass" */
		case -46978629: /* GXTEntry: "Good Goat Carcass" */
			return 365206122 /* GXTEntry: "Goat" */;
		case -1559227925: /* GXTEntry: "Perfect Goose Carcass" */
		case 1562528937: /* GXTEntry: "Poor Goose Carcass" */
		case 1645887374: /* GXTEntry: "Good Goose Carcass" */
			return 731537518 /* GXTEntry: "Goose" */;
		case -1471526136: /* GXTEntry: "Good Hawk Carcass" */
		case -1440794801: /* GXTEntry: "Perfect Hawk Carcass" */
		case 2144711797:
			return 524696643 /* GXTEntry: "Hawk" */;
		case -905842006: /* GXTEntry: "Poor Heron Carcass" */
		case 718825539: /* GXTEntry: "Good Heron Carcass" */
		case 2105263879: /* GXTEntry: "Perfect Heron Carcass" */
			return 768271981 /* GXTEntry: "Heron" */;
		case -1060737769: /* GXTEntry: "Perfect Loon Carcass" */
		case 553310445: /* GXTEntry: "Poor Loon Carcass" */
		case 987967309: /* GXTEntry: "Good Loon Carcass" */
			return -1453172462 /* GXTEntry: "Loon" */;
		case -1838865945: /* GXTEntry: "Good Muskrat Carcass" */
		case -1315697778: /* GXTEntry: "Poor Muskrat Carcass" */
		case 1418092959: /* GXTEntry: "Perfect Muskrat Carcass" */
			return 1053713682 /* GXTEntry: "Muskrat" */;
		case -1772126340: /* GXTEntry: "Good Opossum Carcass" */
		case -935543049: /* GXTEntry: "Perfect Opossum Carcass" */
		case 1772544356: /* GXTEntry: "Poor Opossum Carcass" */
			return -905573570 /* GXTEntry: "Opossum" */;
		case -1670544626: /* GXTEntry: "Perfect Owl Carcass" */
		case -266273535: /* GXTEntry: "Good Owl Carcass" */
		case 1290960696: /* GXTEntry: "Poor Owl Carcass" */
			return 313926162 /* GXTEntry: "Owl" */;
		case 430397370: /* GXTEntry: "Poor Panther Carcass" */
		case 1717601520: /* GXTEntry: "Perfect Panther Carcass" */
		case 1913571052: /* GXTEntry: "Good Panther Carcass" */
			return 184430925 /* GXTEntry: "Panther" */;
		case -1356230367: /* GXTEntry: "Perfect Parrot Carcass" */
		case 16287711: /* GXTEntry: "Good Parrot Carcass" */
		case 1417331079: /* GXTEntry: "Poor Parrot Carcass" */
			return 1623821606 /* GXTEntry: "Parrot" */;
		case -884124246: /* GXTEntry: "Good Pelican Carcass" */
		case 746558492: /* GXTEntry: "Poor Pelican Carcass" */
		case 1884610748: /* GXTEntry: "Perfect Pelican Carcass" */
			return -454952368 /* GXTEntry: "Pelican" */;
		case -2040522845: /* GXTEntry: "Perfect Pheasant Carcass" */
		case -1224510844: /* GXTEntry: "Poor Pheasant Carcass" */
		case -892811627: /* GXTEntry: "Good Pheasant Carcass" */
			return -1315516671 /* GXTEntry: "Pheasant" */;
		case 339620522: /* GXTEntry: "Perfect Pig Carcass" */
		case 1334837390: /* GXTEntry: "Good Pig Carcass" */
		case 1770451033: /* GXTEntry: "Poor Pig Carcass" */
			return 238849077 /* GXTEntry: "Pig" */;
		case 756657535: /* GXTEntry: "Good Prairie Chicken Carcass" */
		case 862898895: /* GXTEntry: "Perfect Prairie Chicken Carcass" */
		case 1997845858: /* GXTEntry: "Poor Prairie Chicken Carcass" */
			return -943371758 /* GXTEntry: "Chicken" */;
		case -1930144509: /* GXTEntry: "Good Pronghorn Carcass" */
		case -1816929509: /* GXTEntry: "Poor Pronghorn Carcass" */
		case 1846915545: /* GXTEntry: "Perfect Pronghorn Carcass" */
			return -10873946 /* GXTEntry: "Pronghorn" */;
		case -1866642239: /* GXTEntry: "Perfect Rabbit Carcass" */
		case -1508120809: /* GXTEntry: "Poor Rabbit Carcass" */
		case 1197831625: /* GXTEntry: "Good Rabbit Carcass" */
			return -1523680261 /* GXTEntry: "Rabbit" */;
		case -1007681885: /* GXTEntry: "Good Raccoon Carcass" */
		case 434924608: /* GXTEntry: "Perfect Raccoon Carcass" */
		case 1666393029: /* GXTEntry: "Poor Raccoon Carcass" */
			return 915670869 /* GXTEntry: "Raccoon" */;
		case -1814593136: /* GXTEntry: "Good Ram Carcass" */
		case -1188120304: /* GXTEntry: "Perfect Ram Carcass" */
		case 1978734761: /* GXTEntry: "Poor Ram Carcass" */
			return -868889795;
		case -1015531226: /* GXTEntry: "Perfect Raven Carcass" */
		case -824902132: /* GXTEntry: "Good Raven Carcass" */
		case -581619522: /* GXTEntry: "Poor Raven Carcass" */
			return -1592962144 /* GXTEntry: "Raven" */;
		case -1011598664: /* GXTEntry: "Perfect Rooster Carcass" */
		case -177476569: /* GXTEntry: "Poor Rooster Carcass" */
		case 980653387: /* GXTEntry: "Good Rooster Carcass" */
			return -262717989 /* GXTEntry: "Rooster" */;
		case -899751553: /* GXTEntry: "Perfect Seagull Carcass" */
		case 431501574: /* GXTEntry: "Poor Seagull Carcass" */
		case 1742676369: /* GXTEntry: "Good Seagull Carcass" */
			return 1398366530;
		case -1705499323: /* GXTEntry: "Poor Sheep Carcass" */
		case 1489051752: /* GXTEntry: "Perfect Sheep Carcass" */
		case 2126795269:
			return -1427844561 /* GXTEntry: "Sheep" */;
		case -2013445740: /* GXTEntry: "Good Skunk Carcass" */
		case -1927342740: /* GXTEntry: "Poor Skunk Carcass" */
		case 102446365: /* GXTEntry: "Perfect Skunk Carcass" */
			return -998653403 /* GXTEntry: "Skunk" */;
		case -1073614594: /* GXTEntry: "Perfect Black-tailed Rattlesnake Carcass" */
		case -410900360: /* GXTEntry: "Good Black-tailed Rattlesnake Carcass" */
		case 2060013792: /* GXTEntry: "Poor Black-tailed Rattlesnake Carcass" */
			return -946474842 /* GXTEntry: "Black-tailed Rattlesnake" */;
		case -1528265128: /* GXTEntry: "Poor Red Boa Carcass" */
		case -581931638: /* GXTEntry: "Perfect Red Boa Carcass" */
		case 581032175: /* GXTEntry: "Good Red Boa Carcass" */
			return -547357240 /* GXTEntry: "Snake" */;
		case -2048519180: /* GXTEntry: "Perfect Copperhead Carcass" */
		case -142632645: /* GXTEntry: "Good Copperhead Carcass" */
		case 1442025993: /* GXTEntry: "Poor Copperhead Carcass" */
			return -518676029;
		case 351048413: /* GXTEntry: "Poor Fer-de-Lance Carcass" */
		case 441195430: /* GXTEntry: "Good Fer-de-Lance Carcass" */
		case 748665395: /* GXTEntry: "Perfect Fer-de-Lance Carcass" */
			return -764925634 /* GXTEntry: "Snake" */;
		case -914779013: /* GXTEntry: "Good Snake Carcass" */
		case -365111821: /* GXTEntry: "Poor Snake Carcass" */
		case 1323485831: /* GXTEntry: "Perfect Snake Carcass" */
			return -946474842 /* GXTEntry: "Black-tailed Rattlesnake" */;
		case -936537044: /* GXTEntry: "Poor Water Snake Carcass" */
		case 101495387: /* GXTEntry: "Good Water Snake Carcass" */
		case 157917500: /* GXTEntry: "Perfect Water Snake Carcass" */
			return -2050228659 /* GXTEntry: "Snake" */;
		case -1836227998: /* GXTEntry: "Perfect Turkey Carcass" */
		case -1610329427: /* GXTEntry: "Good Turkey Carcass" */
		case 619479575: /* GXTEntry: "Poor Turkey Carcass" */
			return -2087684184 /* GXTEntry: "Turkey" */;
		case -1444929945: /* GXTEntry: "Good Snapping Turtle Carcass" */
		case -929322235: /* GXTEntry: "Perfect Snapping Turtle Carcass" */
		case -548076717: /* GXTEntry: "Poor Snapping Turtle Carcass" */
			return 288450344;
		case -479485786: /* GXTEntry: "Poor Vulture Carcass" */
		case -281211381: /* GXTEntry: "Good Vulture Carcass" */
		case 493457089: /* GXTEntry: "Perfect Vulture Carcass" */
			return 848629876 /* GXTEntry: "Vulture" */;
		case -314933180: /* GXTEntry: "Poor Wolf Carcass" */
		case 27838955: /* GXTEntry: "Good Wolf Carcass" */
		case 1641833719: /* GXTEntry: "Perfect Wolf Carcass" */
			return -439919843 /* GXTEntry: "Wolf" */;
		default:
			break;
	}
	return -1740237568;
}

void func_855(int iParam0, int iParam1)
{
	int iVar0;

	if (func_108() == -1)
	{
		iVar0 = func_173(7);
	}
	else
	{
		iVar0 = PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID());
	}
	func_848(iVar0, iParam0, iParam1);
}

int func_856(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_368(0) };
	Var0.f_4 = 724026534;
	Var5 = { func_270(iParam0, Var0, Var0.f_4, 0) };
	return func_271(iParam0, &Var5, &Var0, iParam1, iParam3, bParam2, 0);
}

int func_857(int iParam0)
{
	switch (iParam0)
	{
		case -934992753: /* GXTEntry: "Treasure Map - South Dewberry" */
		case -841961450: /* GXTEntry: "Treasure Map - South Dewberry" */
		case 451529179: /* GXTEntry: "Treasure Map - South Dewberry" */
		case 612720002: /* GXTEntry: "Treasure Map - South Dewberry" */
		case 847313273: /* GXTEntry: "Treasure Map - South Dewberry" */
			return 0;
		case -1640936415: /* GXTEntry: "Treasure Map - Valentine Outskirts" */
		case -1069379473: /* GXTEntry: "Treasure Map - Valentine Outskirts" */
		case -737921038: /* GXTEntry: "Treasure Map - Valentine Outskirts" */
		case -447391084: /* GXTEntry: "Treasure Map - Valentine Outskirts" */
		case -148898263: /* GXTEntry: "Treasure Map - Valentine Outskirts" */
			return 1;
		case -1577213137: /* GXTEntry: "Treasure Map - Montana River Bend" */
		case -1100096485: /* GXTEntry: "Treasure Map - Montana River Bend" */
		case -1094001463: /* GXTEntry: "Treasure Map - Montana River Bend" */
		case -863930314: /* GXTEntry: "Treasure Map - Montana River Bend" */
		case -862160776: /* GXTEntry: "Treasure Map - Montana River Bend" */
			return 2;
		case -1809751726: /* GXTEntry: "Treasure Map - Gaptooth Desert" */
		case 640288085: /* GXTEntry: "Treasure Map - Gaptooth Desert" */
		case 931276805: /* GXTEntry: "Treasure Map - Gaptooth Desert" */
		case 1236716654: /* GXTEntry: "Treasure Map - Gaptooth Desert" */
		case 1855821387: /* GXTEntry: "Treasure Map - Gaptooth Desert" */
			return 3;
		default:
			break;
	}
	return -1;
}

bool func_858(struct<2> Param0, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_88(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_951(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

bool func_859(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_712(iParam0))
		{
			return false;
		}
	}
	if (Global_1572887->f_13 != -1)
	{
		return (Global_17172[iParam0] && iParam1) != 0;
	}
	return (Global_39.f_4458[iParam0] && iParam1) != 0;
}

int func_860(int iParam0)
{
	if (!func_712(iParam0))
	{
		return 0;
	}
	return func_859(iParam0, 2, 1);
}

int func_861(bool bParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1099294->f_16)
	{
		return 0;
	}
	if (!func_952())
	{
		return 0;
	}
	if (!func_335())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_864(&Global_0, 8);
	}
	func_864(&Global_0, 1);
	return 1;
}

int func_862(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 9:
		case 10:
		case 14:
		case 17:
		case 21:
		case 22:
		case 24:
		case 25:
		case 30:
		case 32:
		case 35:
		case 36:
			return 1;
		default:
			return 0;
	}
	return 0;
}

void func_863(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			func_137(239, 0);
			break;
		case 16:
			func_137(240, 0);
			break;
		case 33:
			func_137(241, 0);
			break;
		case 51:
			func_137(242, 0);
			break;
		case 2:
			func_137(243, 0);
			break;
		case 3:
			func_137(244, 0);
			break;
		case 52:
			func_137(245, 0);
			break;
		case 15:
			func_137(246, 0);
			break;
		case 23:
			func_137(247, 0);
			break;
		case 37:
			func_137(248, 0);
			break;
		case 26:
			func_137(249, 0);
			break;
		case 13:
			func_137(250, 0);
			break;
		case 19:
			func_137(251, 0);
			break;
		case 34:
			func_137(252, 0);
			break;
		case 38:
			func_137(253, 0);
			break;
		case 49:
			func_137(254, 0);
			break;
		case 7:
			func_137(255, 0);
			break;
		case 20:
			func_137(256, 0);
			break;
		case 18:
			func_137(257, 0);
			break;
		case 6:
			func_137(258, 0);
			break;
		case 29:
			func_137(259, 0);
			break;
		case 48:
			func_137(260, 0);
			break;
		case 11:
			break;
		case 4:
			func_137(262, 0);
			break;
		case 8:
			func_137(263, 0);
			break;
		case 28:
			func_137(264, 0);
			break;
		case 31:
			func_137(265, 0);
			break;
		case 12:
			func_137(266, 0);
			break;
		case 27:
			func_137(267, 0);
			break;
		case 50:
			func_137(268, 0);
			break;
	}
}

void func_864(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_865()
{
	return Global_1951141->f_1657;
}

int func_866(bool bParam0)
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
	Var15 = { func_270(889965687 /* GXTEntry: "Wardrobe" */, func_368(1), 1034665895, 1) };
	iVar19 = func_559(Var15, 552979403, 1, -1);
	if (iVar19 != 0)
	{
		if (iVar19 == -1645121954)
		{
			iVar14 = 24043185;
		}
		else if (iVar19 == 897974632)
		{
			iVar14 = 2026485318;
		}
		return iVar14;
	}
	Var22 = { func_364(0, -1591664384, 552979403, -1591664384, 0, 0, 0) };
	if (func_367(&Var22, &iVar20, &iVar21, 1))
	{
		if (iVar21 > 0 && func_203(&Var0, 0, iVar20, iVar21))
		{
			if (Var0.f_4 == -1645121954)
			{
				iVar14 = 24043185;
			}
			else if (Var0.f_4 == 897974632)
			{
				iVar14 = 2026485318;
			}
			else
			{
				func_205(iVar20);
				return 0;
			}
			if (bParam0)
			{
				func_560(Var0, 1);
			}
			func_205(iVar20);
			return iVar14;
		}
		func_205(iVar20);
	}
	return 0;
}

int func_867(int iParam0)
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

int func_868(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (!func_542(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1951141->f_3109.f_25 == 1)
	{
		Global_1951141->f_3109.f_25 = 0;
		*uParam1 = 0;
		Global_1951141->f_3109[0] = 0;
		return 1;
	}
	Global_1951141->f_3109.f_25 = (Global_1951141->f_3109.f_25 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1951141->f_3109[iVar0] = &Global_1951141->f_3109[Global_1951141->f_3109.f_25];
	Global_1951141->f_3109[Global_1951141->f_3109.f_25] = 0;
	func_726(iParam0, 1);
	return 1;
}

int func_869(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<4> Var4;
	int iVar11;

	iVar11 = 0;
	Var4 = func_953(iParam6);
	Var4.f_1 = iParam1;
	Var4.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var4);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		return 0;
	}
	DATAFILE::_0xA63CD20F19B961AB(&bVar2, &Var4, -1516819610);
	DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 2049745650);
	*uParam2 = bVar2;
	if (!bVar2 && !bParam3)
	{
		func_955(uParam0, func_954(iVar0), 1, 1, bParam7);
	}
	if (bVar2 && DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, -1212855483))
	{
		iVar11 = func_954(iVar0);
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_249(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, joaat("component")))
			{
			}
			else
			{
				uParam0->f_1[iVar1 /*3*/] = iVar0;
				if (bVar2 && iVar11 != 0)
				{
					func_956(iVar3, 16, 6);
				}
				if (bParam5)
				{
					if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1441384))
					{
						(uParam0->f_1[iVar1 /*3*/])->f_1 = joaat("base");
					}
					else
					{
						Jump @361; //curOff = 296
						if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1194786549))
						{
							if (func_957(iVar3) && func_735(&(uParam0->f_1[iVar1 /*3*/]), iVar3, &iVar0))
							{
								(uParam0->f_1[iVar1 /*3*/])->f_1 = iVar0;
							}
						}
						else
						{
							(uParam0->f_1[iVar1 /*3*/])->f_1 = iVar0;
						}
					}
					if (bVar2 && iVar11 != 0)
					{
						func_959(uParam0, iVar11, func_958(iParam1) != 0);
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

bool func_870(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_871(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_872(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_873(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_874(var uParam0, int iParam1, int iParam2)
{
	*((Global_17172.f_54.f_644.f_32[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
}

void func_875(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == -1)
	{
		iParam1 = Global_17172.f_54.f_644.f_1776;
	}
	(Global_17172.f_54.f_644.f_32[iParam1 /*120*/])->f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_874(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
		iVar0++;
	}
}

void func_876(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17172.f_54.f_644.f_1776;
	}
	if (iParam1 > -1 && iParam1 < 11)
	{
		Global_17172.f_54.f_644.f_32[iParam1 /*120*/] = (Global_17172.f_54.f_644.f_32[iParam1 /*120*/] || iParam0);
	}
}

struct<28> func_877(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_73(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_883(&Var28, bParam5) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_878(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_464(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			return func_465(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 28), iVar0, uParam1);
		}
	}
	else
	{
		return func_466(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 28), iVar0, uParam1);
	}
	return -1;
}

struct<25> func_879(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_73(bParam4), &uParam0, &Var25, 24, 1))
	{
		return Var0;
	}
	Var0 = { func_883(&Var25, bParam5) };
	Var0.f_16 = { Var25.f_15 };
	Var0.f_24 = Var25.f_23;
	return Var0;
}

int func_880(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			return func_465(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 25), iVar0, uParam1);
		}
	}
	else
	{
		return func_466(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 25), iVar0, uParam1);
	}
	return -1;
}

struct<17> func_881(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_73(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_883(&Var17, bParam5) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_882(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_464(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			return func_465(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 17), iVar0, uParam1);
		}
	}
	else
	{
		return func_466(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17), iVar0, uParam1);
	}
	return -1;
}

struct<16> func_883(var uParam0, bool bParam1)
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
		Var0.f_15 = func_210(uParam0->f_4, joaat("default"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_463() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_884(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), iParam0))
	{
		return 1;
	}
	return 0;
}

void func_885(int iParam0)
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
	if (!&Global_1275573->f_22[iVar0])
	{
		func_960(iParam0);
		return;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_961(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 1;
}

struct<4> func_886(int iParam0, int iParam1)
{
	struct<5> Var0;

	Var0 = { func_962(iParam0) };
	return func_963(iParam0, iParam1, Var0, Var0.f_4);
}

int func_887()
{
	int iVar0;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	iVar0 = PLAYER::_0xB9050A97594C8832(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!func_964(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_888(int iParam0, int iParam1, var uParam2)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_836(iParam0, iParam1, &Var0, &iVar31, 0, 1))
	{
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			if (&Var0[iVar32 /*2*/] == 2084597891)
			{
				if (!func_889((Var0[iVar32 /*2*/])->f_1))
				{
					return 0;
				}
			}
			else if (&Var0[iVar32 /*2*/] == 773203532)
			{
				if (!func_890((Var0[iVar32 /*2*/])->f_1))
				{
					return 0;
				}
			}
			else if (func_94(&(Var0[iVar32 /*2*/]), 0, 0, 1) < (Var0[iVar32 /*2*/])->f_1)
			{
				*uParam2 = { *(Var0[iVar32 /*2*/]) };
				return 0;
			}
			iVar32++;
		}
	}
	return 1;
}

bool func_889(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_108() == 0)
	{
		return func_965(iParam0);
	}
	return iParam0 <= func_891();
}

bool func_890(int iParam0)
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

int func_891()
{
	if (func_108() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_892(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	int iVar0;
	struct<5> Var1;
	struct<16> Var6;
	struct<16> Var22;

	iVar0 = -1;
	Var1 = { func_188(2084597891 /* GXTEntry: "Money" */, 1, 0) };
	Var6 = { func_221(2084597891 /* GXTEntry: "Money" */, Var1, Var1.f_4, iParam0, 1) };
	Var6.f_12 = iParam2;
	iVar0 = func_222(joaat("use"), &Var6, bParam3);
	if (iVar0 == -1)
	{
	}
	else
	{
		Var22.f_7 = -142743235;
		StringCopy(&(Var22.f_12), sParam1, 32);
		func_223(iVar0, Var22);
	}
	return iVar0;
}

void func_893(int iParam0)
{
	struct<2> Var0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_891() < iParam0)
	{
		iParam0 = func_891();
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	Var0 = { func_363(1644987397) };
	STATS::_0xBD861AE8A5181ED7(&Var0, iParam0);
}

void func_894(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_362(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, joaat("COLOR_RED"), 0, 0, 0, 1);
}

int func_895(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	struct<4> Var8;
	int iVar12;
	struct<16> Var13;

	iVar0 = -1;
	iVar1 = func_675(iParam0);
	iVar2 = func_673(iParam0);
	if (iVar2 != 0)
	{
		if (!func_78(0) || func_79())
		{
			if (bParam2)
			{
				func_192(func_430(149041100, -1740237568), 1);
				return func_966(iVar2, iVar1, iParam0, iParam1);
			}
			Var3 = { func_188(iParam0, 1, 0) };
			Var8 = { func_270(iParam0, Var3, Var3.f_4, 1) };
			iVar12 = func_967(iParam0, &Var8, 1, -142743235, 0, 1);
			if (iVar12 != -1)
			{
				Var13.f_7 = -142743235;
				Var13 = 1;
				Var13.f_3 = 1;
				func_223(iVar12, Var13);
			}
			return 0;
		}
		if (func_76(iParam0, 1, 1, -142743235))
		{
			iVar0 = func_966(iVar2, iVar1, iParam0, iParam1);
		}
	}
	return iVar0;
}

int func_896(int iParam0, var uParam1)
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
	if (Global_17095.f_2 != 3)
	{
		iVar1 = Global_17095.f_2;
	}
	uVar4 = PED::_0x6B89FAA36FC909A3(uParam1, iParam0, iVar0, iVar2);
	return uVar4;
}

bool func_897(int iParam0)
{
	float fVar0;

	fVar0 = (func_968(iParam0) - PLAYER::_0xDF66A37936D5F3D9(iParam0));
	return fVar0 <= 1f;
}

void func_898(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_909(*iParam0);
	iVar1 = func_910(*iParam0);
	iVar2 = func_911(*iParam0);
	iVar3 = func_912(*iParam0);
	iVar4 = func_913(*iParam0);
	iVar5 = func_914(*iParam0);
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
		iVar7 = func_915(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_916(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_899(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_689(2);
	}
	switch (iParam1)
	{
		case 0:
			return (Global_1954472->f_1331.f_6[iParam0 /*3*/])->f_2;
		case 1:
			return (Global_1954472->f_1465.f_2.f_6[iParam0 /*3*/])->f_2;
		default:
			break;
	}
	return -1;
}

int func_900(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_689(2);
	}
	switch (iParam1)
	{
		case 0:
			return (Global_1954472->f_1331.f_6[iParam0 /*3*/])->f_1;
		case 1:
			return (Global_1954472->f_1465.f_2.f_6[iParam0 /*3*/])->f_1;
		default:
			break;
	}
	return -15;
}

bool func_901(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_969(iParam1) || !func_969(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_902(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_689(2);
	}
	switch (iParam2)
	{
		case 0:
			(Global_1954472->f_1331.f_6[iParam0 /*3*/])->f_2 = iParam1;
			break;
		case 1:
			(Global_1954472->f_1465.f_2.f_6[iParam0 /*3*/])->f_2 = iParam1;
			break;
		default:
			break;
	}
}

void func_903(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_689(2);
	}
	switch (iParam2)
	{
		case 0:
			(Global_1954472->f_1331.f_6[iParam0 /*3*/])->f_1 = iParam1;
			break;
		case 1:
			(Global_1954472->f_1465.f_2.f_6[iParam0 /*3*/])->f_1 = iParam1;
			break;
		default:
			break;
	}
}

int func_904(int iParam0, int iParam1, float fParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (fParam2 > 100f)
	{
		fParam2 = 100f;
	}
	else if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iParam0, func_970(iParam1), BUILTIN::CEIL(fParam2));
	return 1;
}

void func_905(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_689(2);
	}
	if (iParam1 > 0)
	{
		iParam1 = (iParam1 + MISC::GET_GAME_TIMER());
	}
	switch (iParam2)
	{
		case 0:
			Global_1954472->f_1331.f_16[iParam0 /*3*/] = iParam1;
			break;
		case 1:
			Global_1954472->f_1465.f_2.f_16[iParam0 /*3*/] = iParam1;
			break;
		default:
			break;
	}
}

void func_906(int iParam0, int iParam1, float fParam2)
{
	char* sVar0;

	sVar0 = func_971(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		PED::_0x437C08DB4FEBE2BD(iParam0, func_972(iParam1), fParam2, -1);
	}
}

void func_907(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	var uVar0;

	if (iParam3 == 2)
	{
		iParam3 = func_689(2);
	}
	uVar0 = Global_1275573->f_21;
	func_973(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_974(iParam0, uVar0, iParam3);
	}
}

bool func_908(int iParam0, bool bParam1)
{
	return func_901(func_773(), iParam0, bParam1);
}

int func_909(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_784(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_910(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_911(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_912(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_913(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_914(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_915(int iParam0, int iParam1)
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

void func_916(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_975(iParam0, iParam6);
	func_976(iParam0, iParam5);
	func_977(iParam0, iParam4);
	func_978(iParam0, iParam3);
	func_979(iParam0, iParam2);
	func_980(iParam0, iParam1);
}

int func_917(int iParam0)
{
	if (func_919(iParam0))
	{
		return 1;
	}
	else if (func_981(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_918(int iParam0, float fParam1, int iParam2)
{
	if (fParam1 <= 0f)
	{
		return;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_689(1);
	}
	switch (iParam2)
	{
		case 0:
			Global_1954472->f_1331.f_26[iParam0] = fParam1;
			break;
		case 1:
			Global_1954472->f_1465.f_2.f_26[iParam0] = fParam1;
			break;
		default:
			break;
	}
}

int func_919(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		default:
			break;
	}
	return 0;
}

char* func_920(int iParam0)
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

void func_921(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6[20];

	iVar1 = Global_1140484->f_41657.f_1.f_42;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar0 = &Global_1140484->f_41657.f_1[iVar2 /*2*/];
		iVar3 = func_982(iVar0, 1);
		if (&Global_1140484->f_30603.f_847[iVar3 /*12*/] == iParam0)
		{
			func_983(iVar0);
			Global_1140484->f_41657.f_1.f_42 = (Global_1140484->f_41657.f_1.f_42 - 1);
		}
		else
		{
			*(Var6[iVar4 /*2*/]) = { *(Global_1140484->f_41657.f_1[iVar2 /*2*/]) };
			iVar4++;
		}
		iVar2++;
	}
	iVar5 = 0;
	while (iVar5 < iVar4)
	{
		*(Global_1140484->f_41657.f_1[iVar5 /*2*/]) = { *(Var6[iVar5 /*2*/]) };
		iVar5++;
	}
}

void func_922(int iParam0, bool bParam1, bool bParam2)
{
	func_769(iParam0, 100f, bParam1, bParam2, 1, 2);
}

void func_923(var uParam0, int iParam1, int iParam2)
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
				if ((Var1.f_2 == 1644203656 && (Var1 != -489628648 && Var1 != -2141192156)) && (Global_1913166->f_1579 || !func_794(iParam1, Var1, 1)))
				{
					((*Global_1913166)[(uParam0->f_51 - 1) /*9*/])->f_7++;
				}
			}
			else
			{
				((*Global_1913166)[(uParam0->f_51 - 1) /*9*/])->f_8 = iVar48;
			}
		}
		iVar48++;
	}
}

void func_924(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	int iVar13;
	int iVar14;

	iVar2 = func_283(iParam1, 1697966752);
	if (iVar2 == 0)
	{
		return;
	}
	Var3 = { func_669(-1591664384, -1591664384, 0, 0, 278772510, 0, -1, iVar2, 0) };
	if (func_671(Var3, &iVar0, &iVar1, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar1)
		{
			iVar14 = func_672(iVar13, iVar0);
			if (func_90(iVar14, 0))
			{
				if (Global_1913166->f_1579 || !func_794(iVar14, 278772510, 1))
				{
					((*Global_1913166)[(uParam0->f_51 - 1) /*9*/])->f_7++;
				}
			}
			iVar13++;
		}
		func_677(iVar0);
	}
}

void func_925(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	int iVar13;
	int iVar14;

	iVar2 = func_283(iParam1, -1859264326);
	if (iVar2 == 0)
	{
		return;
	}
	Var3 = { func_669(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar2, 0) };
	if (func_671(Var3, &iVar0, &iVar1, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar1)
		{
			if (uParam0->f_51 >= 175)
			{
			}
			else
			{
				iVar14 = func_672(iVar13, iVar0);
				if (func_90(iVar14, 0) && iVar14 != iParam1)
				{
					func_781(uParam0, iVar14, iParam2);
				}
				iVar13++;
			}
		}
		func_677(iVar0);
	}
}

void func_926(int iParam0)
{
	func_677(*iParam0);
	*iParam0 = -1;
}

void func_927(var uParam0, int iParam1, bool bParam2, bool bParam3)
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

	iVar0 = ((*Global_1913166)[iParam1 /*9*/])->f_6;
	StringCopy(&cVar1, "r_", 32);
	StringIntConCat(&cVar1, iVar0, 32);
	StringIntConCat(&cVar1, iParam1, 32);
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(((*Global_1913166)[iParam1 /*9*/])->f_1))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*Global_1913166)[iParam1 /*9*/])->f_1);
	}
	iVar5 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_36, &cVar1);
	((*Global_1913166)[iParam1 /*9*/])->f_1 = iVar5;
	iVar6 = ((*Global_1913166)[iParam1 /*9*/])->f_5;
	iVar7 = func_218(iVar0, iVar6, bParam3);
	iVar8 = func_94(iVar0, 0, 0, 0);
	iVar9 = func_587(iVar0, 0);
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
	if (!Global_1913166->f_1579 && func_794(iVar0, iVar6, 1))
	{
		bVar10 = true;
		((*Global_1913166)[iParam1 /*9*/])->f_7 = 0;
	}
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "iCurCostVariant", ((*Global_1913166)[iParam1 /*9*/])->f_8);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "iNumCostVariants", ((*Global_1913166)[iParam1 /*9*/])->f_7);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "bFireCrafting", iVar6 == -257768755);
	StringIntConCat(&cVar11, func_588(iVar9, iVar7), 8);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar5, "count", &cVar11);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "visible", false);
	bVar13 = false;
	if (uParam0->f_25)
	{
		iVar12 = func_784(((iVar7 > 0 && func_796(iVar0)) && !bVar10), 1, 0);
	}
	else
	{
		iVar12 = func_784(((iVar9 > 0 && iVar7 > 0) && !bVar10), 1, 0);
	}
	if (iVar12 == 0 && func_928(iVar0))
	{
		if (func_929(iVar0, iVar6, uParam0, bParam3, &iVar14, &iVar15, &iVar16))
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
	if (func_352(iVar0, &Var17, joaat("inventory"), 0, 0, 0))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar5, "texture", Var17);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar5, "textureDictionary", Var17.f_1);
	}
	if (!uParam0->f_28)
	{
		if ((iVar6 == -214678071 || iVar6 == 278772510) || iVar6 == -257768755)
		{
			iVar12 = 0;
		}
	}
	if (iVar12 == 1)
	{
		if (!func_396(2) && func_283(iVar0, -1636519629) == -701492487)
		{
			((*Global_1913166)[iParam1 /*9*/])->f_2 = 0;
			iVar12 = 0;
		}
		else
		{
			uParam0->f_55++;
			if (func_225(iVar0, uParam0->f_48))
			{
				uParam0->f_56++;
			}
			((*Global_1913166)[iParam1 /*9*/])->f_2 = 1;
		}
	}
	else
	{
		((*Global_1913166)[iParam1 /*9*/])->f_2 = 0;
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
			if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var20.f_1[iVar43]), &Var44))
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
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_36, -1, -2047994727, iVar5);
	}
}

int func_928(int iParam0)
{
	if (func_54(4096))
	{
		if (func_283(iParam0, 1697966752) != 337650881)
		{
			return 0;
		}
	}
	else if (func_54(8192))
	{
		if (iParam0 != 1831763320)
		{
			return 0;
		}
	}
	return 1;
}

int func_929(int iParam0, int iParam1, var uParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
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

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	if (!Global_1913166->f_1579 && func_794(iParam0, iParam1, 1))
	{
		return 0;
	}
	if (uParam2->f_25 && !func_796(iParam0))
	{
		return 0;
	}
	if (iParam1 == -214678071 || iParam1 == 278772510)
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
		iVar12 = func_283(iParam0, 1697966752);
		if (iVar12 == 0)
		{
			return 0;
		}
		Var2 = { func_669(-1591664384, -1591664384, 0, 0, 278772510, 0, -1, iVar12, 0) };
		if (func_671(Var2, &iVar0, &iVar1, 0))
		{
			iVar13 = 0;
			while (iVar13 < iVar1)
			{
				iVar14 = func_672(iVar13, iVar0);
				if (iParam0 == iVar14)
				{
				}
				else if (!Global_1913166->f_1579 && func_794(iVar14, 278772510, 1))
				{
				}
				else if (func_629(iVar14, 278772510, 0, bParam3, 0) && !func_403(iVar14, 1, 0))
				{
					func_677(iVar0);
					*iParam4 = iVar14;
					*iParam5 = 278772510;
					*iParam6 = iVar13;
					return 1;
				}
				iVar13++;
			}
			func_677(iVar0);
		}
		if (iParam1 == 278772510)
		{
			Var2 = { func_669(-1591664384, -1591664384, 0, 0, -214678071, 0, -1, iVar12, 0) };
			if (func_671(Var2, &iVar0, &iVar1, 0))
			{
				iVar15 = 0;
				while (iVar15 < iVar1)
				{
					iVar16 = func_672(iVar15, iVar0);
					if (iParam0 == iVar16)
					{
					}
					else if (!Global_1913166->f_1579 && func_794(iVar16, -214678071, 1))
					{
					}
					else if (func_629(iVar16, -214678071, 0, bParam3, 0) && !func_403(iVar16, 1, 0))
					{
						func_677(iVar0);
						*iParam4 = iVar16;
						*iParam5 = -214678071;
						*iParam6 = iVar15;
						return 1;
					}
					iVar15++;
				}
				func_677(iVar0);
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
				if (Var18.f_2 == 1644203656)
				{
					if ((Var18 != -489628648 && Var18 != -2141192156) && (Global_1913166->f_1579 || !func_794(iParam0, Var18, 1)))
					{
						if (func_629(iParam0, Var18, 0, bParam3, 0) && !func_403(iParam0, 1, 0))
						{
							*iParam4 = iParam0;
							*iParam5 = Var18;
							*iParam6 = iVar65;
							return 1;
						}
					}
				}
			}
			iVar65++;
		}
	}
	return 0;
}

int func_930(int iParam0, int iParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if (!func_458(iParam0, 2))
	{
		return 0;
	}
	if ((bParam2 && func_108() == 0) && !UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
	{
		return 1;
	}
	if (!func_984(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return 0;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = &uVar0[iVar12];
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

int func_931(int iParam0, int iParam1)
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
		return 0;
	}
	iVar473 = 0;
	iVar474 = 0;
	while (iVar474 < iVar471)
	{
		if (&Var0[iVar474 /*47*/] == iParam1)
		{
			iVar473 = (Var0[iVar474 /*47*/])->f_35;
			iVar475 = 0;
			while (iVar475 < iVar473)
			{
				iVar472 = &(Var0[iVar474 /*47*/])->f_36[iVar475];
				if (iVar472 == 0)
				{
				}
				else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar472))
				{
					return 1;
				}
				iVar475++;
			}
		}
		iVar474++;
	}
	return 0;
}

int func_932(int iParam0, int iParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return 0;
	}
	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		return 0;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = &Var0.f_36[iVar47];
		iVar47++;
	}
	return 1;
}

int func_933()
{
	int iVar0;

	iVar0 = GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	return func_780(iVar0);
}

int func_934(int iParam0)
{
	switch (iParam0)
	{
		case -1171462349:
			return 4;
		case 1689071181:
			return 3;
		case -1612693182:
			return 2;
		case 1856073229:
			return 1;
		case 1046181202:
			return 0;
		default:
			break;
	}
	if (func_150(iParam0, -2011345500))
	{
		return 5;
	}
	return 0;
}

char* func_935(int iParam0)
{
	switch (func_934(iParam0))
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

int func_936(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1126368->f_2017 == 0 || (MISC::_GET_SYSTEM_TIME() - Global_1126368->f_2017) >= 1000)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (Global_1126368->f_2017 == 0)
	{
		Global_1126368->f_2017 = MISC::_GET_SYSTEM_TIME();
	}
	else if ((MISC::_GET_SYSTEM_TIME() - Global_1126368->f_2017) >= 1000)
	{
		Global_1126368->f_2017 = MISC::_GET_SYSTEM_TIME();
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_937(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return -1;
	}
	if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1125276->f_1091), iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (((*Global_1125276)[iVar0 /*27*/])->f_9 == iParam0 && Global_1125276[iVar0 /*27*/] != 3)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_938()
{
	return Global_1912978->f_127 == 0;
}

int func_939(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_BUY_AWARD_KEY_VALID(iParam0);
}

void func_940(int iParam0, int iParam1, var uParam2, int iParam3)
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
		uVar6 = &Var7.f_1[iVar1];
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
							if (uParam2[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
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
		if (&fVar21[iVar0] != 1f)
		{
			((*uParam2)[iVar0 /*2*/])->f_1 = (BUILTIN::ROUND((IntToFloat((10000 * ((*uParam2)[iVar0 /*2*/])->f_1)) * (&fVar21[iVar0] / 1f))) / 10000);
		}
		iVar0++;
	}
}

int func_941(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<2> Var3;

	if (!func_90(iParam1, 0))
	{
		return 0;
	}
	bVar0 = iParam4 == 562618531;
	bVar1 = iParam4 == 1992602754;
	bVar2 = iParam4 == -1387038764;
	if (!func_985(iParam0, iParam1, 1))
	{
		return 0;
	}
	Var3 = { func_186(iParam1) };
	if (STATS::_STAT_ID_IS_VALID(&Var3))
	{
		if ((func_749(iParam0, iParam1) - iParam2) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var3, iParam2);
		}
		else if ((func_749(iParam0, iParam1) - iParam2) < 0)
		{
			func_941(iParam0, iParam1, func_94(iParam1, 0, 0, 0), bParam3, iParam4);
			return 0;
		}
	}
	if (!func_986(iParam0, iParam1, iParam2, iParam4, bParam3))
	{
		return 0;
	}
	if (!bParam3 && iParam1 != 1309979101)
	{
		func_185(iParam1, -iParam2, bVar0, bVar1, bVar2, 0, 0);
	}
	return 1;
}

int func_942(int iParam0)
{
	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0x4AEF1FB5B9011D75(iParam0);
}

int func_943(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -802026654 /* GXTEntry: "Good Alligator Skin" */;
		case 1:
			return 1806153689 /* GXTEntry: "Poor Alligator Skin" */;
		case 2:
			return -1625078531 /* GXTEntry: "Perfect Alligator Skin" */;
		case 3:
			return -2059726619 /* GXTEntry: "Good Beaver Pelt" */;
		case 4:
			return -1569450319 /* GXTEntry: "Poor Beaver Pelt" */;
		case 5:
			return 854596618 /* GXTEntry: "Perfect Beaver Pelt" */;
		case 6:
			return 2116849039;
		case 7:
			return 1248540072 /* GXTEntry: "Poor Boar Pelt" */;
		case 8:
			return -1858513856 /* GXTEntry: "Perfect Boar Pelt" */;
		case 9:
			return -868657362 /* GXTEntry: "Good Buck Pelt" */;
		case 10:
			return 1603936352 /* GXTEntry: "Poor Buck Pelt" */;
		case 11:
			return -702790226 /* GXTEntry: "Perfect Buck Pelt" */;
		case 12:
			return 459744337 /* GXTEntry: "Good Cougar Pelt" */;
		case 13:
			return 1914602340 /* GXTEntry: "Poor Cougar Pelt" */;
		case 14:
			return -1791452194 /* GXTEntry: "Perfect Cougar Pelt" */;
		case 15:
			return 1150939141 /* GXTEntry: "Good Coyote Pelt" */;
		case 16:
			return -1558096473 /* GXTEntry: "Poor Coyote Pelt" */;
		case 17:
			return -794277189 /* GXTEntry: "Perfect Coyote Pelt" */;
		case 18:
			return -1827027577 /* GXTEntry: "Good Deer Pelt" */;
		case 19:
			return -662178186 /* GXTEntry: "Poor Deer Pelt" */;
		case 20:
			return -1035515486 /* GXTEntry: "Perfect Deer Pelt" */;
		case 21:
			return 238733925 /* GXTEntry: "Good Fox Pelt" */;
		case 22:
			return 1647012424 /* GXTEntry: "Poor Fox Pelt" */;
		case 23:
			return 500722008 /* GXTEntry: "Perfect Fox Pelt" */;
		case 24:
			return 1710714415 /* GXTEntry: "Good Goat Hide" */;
		case 25:
			return 699990316 /* GXTEntry: "Poor Goat Hide" */;
		case 26:
			return -1648383828 /* GXTEntry: "Perfect Goat Hide" */;
		case 27:
			return -1379330323 /* GXTEntry: "Good Collared Peccary Pig Pelt" */;
		case 28:
			return -99092070 /* GXTEntry: "Poor Collared Peccary Pig Pelt" */;
		case 29:
			return 1963510418 /* GXTEntry: "Perfect Collared Peccary Pig Pelt" */;
		case 30:
			return 2047376405 /* GXTEntry: "White Cougar Pelt" */;
		case 31:
			return -395646254 /* GXTEntry: "Good Panther Pelt" */;
		case 32:
			return 1584468323 /* GXTEntry: "Poor Panther Pelt" */;
		case 33:
			return 1969175294 /* GXTEntry: "Perfect Panther Pelt" */;
		case 34:
			return 657906142 /* GXTEntry: "Legendary Panther Pelt" */;
		case 35:
			return -57190831 /* GXTEntry: "Good Pig Hide" */;
		case 36:
			return -308965548 /* GXTEntry: "Poor Pig Hide" */;
		case 37:
			return -1102272634 /* GXTEntry: "Perfect Pig Hide" */;
		case 38:
			return 554578289 /* GXTEntry: "Good Pronghorn Hide" */;
		case 39:
			return -983605026 /* GXTEntry: "Poor Pronghorn Hide" */;
		case 40:
			return -1544126829 /* GXTEntry: "Perfect Pronghorn Hide" */;
		case 41:
			return -476045512 /* GXTEntry: "Good Ram Hide" */;
		case 42:
			return 1796037447 /* GXTEntry: "Poor Ram Hide" */;
		case 43:
			return 1795984405 /* GXTEntry: "Perfect Ram Hide" */;
		case 44:
			return -1317365569 /* GXTEntry: "Good Sheep Hide" */;
		case 45:
			return 1729948479 /* GXTEntry: "Poor Sheep Hide" */;
		case 46:
			return 1466150167 /* GXTEntry: "Perfect Sheep Hide" */;
		case 47:
			return 1145777975 /* GXTEntry: "Good Wolf Pelt" */;
		case 48:
			return 85441452 /* GXTEntry: "Poor Wolf Pelt" */;
		case 49:
			return 653400939 /* GXTEntry: "Perfect Wolf Pelt" */;
		case 50:
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

int func_944(int iParam0)
{
	if (!func_845(iParam0))
	{
		return 0;
	}
	return iParam0;
}

int func_945(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2059726619: /* GXTEntry: "Good Beaver Pelt" */
			return 3;
		case -1858513856: /* GXTEntry: "Perfect Boar Pelt" */
			return 8;
		case -1827027577: /* GXTEntry: "Good Deer Pelt" */
			return 18;
		case -1791452194: /* GXTEntry: "Perfect Cougar Pelt" */
			return 14;
		case -1648383828: /* GXTEntry: "Perfect Goat Hide" */
			return 26;
		case -1625078531: /* GXTEntry: "Perfect Alligator Skin" */
			return 2;
		case -1569450319: /* GXTEntry: "Poor Beaver Pelt" */
			return 4;
		case -1558096473: /* GXTEntry: "Poor Coyote Pelt" */
			return 16;
		case -1544126829: /* GXTEntry: "Perfect Pronghorn Hide" */
			return 40;
		case -1379330323: /* GXTEntry: "Good Collared Peccary Pig Pelt" */
			return 27;
		case -1317365569: /* GXTEntry: "Good Sheep Hide" */
			return 44;
		case -1102272634: /* GXTEntry: "Perfect Pig Hide" */
			return 37;
		case -1035515486: /* GXTEntry: "Perfect Deer Pelt" */
			return 20;
		case -983605026: /* GXTEntry: "Poor Pronghorn Hide" */
			return 39;
		case -868657362: /* GXTEntry: "Good Buck Pelt" */
			return 9;
		case -802026654: /* GXTEntry: "Good Alligator Skin" */
			return 0;
		case -794277189: /* GXTEntry: "Perfect Coyote Pelt" */
			return 17;
		case -702790226: /* GXTEntry: "Perfect Buck Pelt" */
			return 11;
		case -662178186: /* GXTEntry: "Poor Deer Pelt" */
			return 19;
		case -476045512: /* GXTEntry: "Good Ram Hide" */
			return 41;
		case -395646254: /* GXTEntry: "Good Panther Pelt" */
			return 31;
		case -308965548: /* GXTEntry: "Poor Pig Hide" */
			return 36;
		case -99092070: /* GXTEntry: "Poor Collared Peccary Pig Pelt" */
			return 28;
		case -57190831: /* GXTEntry: "Good Pig Hide" */
			return 35;
		case 0:
			return 50;
		case 85441452: /* GXTEntry: "Poor Wolf Pelt" */
			return 48;
		case 238733925: /* GXTEntry: "Good Fox Pelt" */
			return 21;
		case 459744337: /* GXTEntry: "Good Cougar Pelt" */
			return 12;
		case 500722008: /* GXTEntry: "Perfect Fox Pelt" */
			return 23;
		case 554578289: /* GXTEntry: "Good Pronghorn Hide" */
			return 38;
		case 653400939: /* GXTEntry: "Perfect Wolf Pelt" */
			return 49;
		case 657906142: /* GXTEntry: "Legendary Panther Pelt" */
			return 34;
		case 699990316: /* GXTEntry: "Poor Goat Hide" */
			return 25;
		case 854596618: /* GXTEntry: "Perfect Beaver Pelt" */
			return 5;
		case 1145777975: /* GXTEntry: "Good Wolf Pelt" */
			return 47;
		case 1150939141: /* GXTEntry: "Good Coyote Pelt" */
			return 15;
		case 1248540072: /* GXTEntry: "Poor Boar Pelt" */
			return 7;
		case 1466150167: /* GXTEntry: "Perfect Sheep Hide" */
			return 46;
		case 1584468323: /* GXTEntry: "Poor Panther Pelt" */
			return 32;
		case 1603936352: /* GXTEntry: "Poor Buck Pelt" */
			return 10;
		case 1647012424: /* GXTEntry: "Poor Fox Pelt" */
			return 22;
		case 1710714415: /* GXTEntry: "Good Goat Hide" */
			return 24;
		case 1729948479: /* GXTEntry: "Poor Sheep Hide" */
			return 45;
		case 1795984405: /* GXTEntry: "Perfect Ram Hide" */
			return 43;
		case 1796037447: /* GXTEntry: "Poor Ram Hide" */
			return 42;
		case 1806153689: /* GXTEntry: "Poor Alligator Skin" */
			return 1;
		case 1914602340: /* GXTEntry: "Poor Cougar Pelt" */
			return 13;
		case 1963510418: /* GXTEntry: "Perfect Collared Peccary Pig Pelt" */
			return 29;
		case 1969175294: /* GXTEntry: "Perfect Panther Pelt" */
			return 33;
		case 2047376405: /* GXTEntry: "White Cougar Pelt" */
			return 30;
		case 2116849039:
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

int func_946(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_ID();
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return 0;
	}
	iVar1 = iVar0;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return 0;
	}
	if (func_947(iVar1, bParam1) == 0)
	{
		return 0;
	}
	iVar2 = iParam0;
	if (iVar2 > func_947(iVar1, bParam1))
	{
		iVar2 = func_947(iVar1, bParam1);
	}
	if (!bParam1)
	{
		((*Global_1269869)[iVar1 /*20*/])->f_8 = (((*Global_1269869)[iVar1 /*20*/])->f_8 - iVar2);
	}
	else
	{
		((*Global_1269869)[iVar1 /*20*/])->f_9 = (((*Global_1269869)[iVar1 /*20*/])->f_9 - iVar2);
	}
	if (func_947(iVar1, bParam1) < 0)
	{
		if (!bParam1)
		{
			((*Global_1269869)[iVar1 /*20*/])->f_8 = 0;
		}
		else
		{
			((*Global_1269869)[iVar1 /*20*/])->f_9 = 0;
		}
	}
	else if (func_947(iVar1, bParam1) > func_948(bParam1))
	{
		if (!bParam1)
		{
			((*Global_1269869)[iVar1 /*20*/])->f_8 = func_948(bParam1);
		}
		else
		{
			((*Global_1269869)[iVar1 /*20*/])->f_9 = func_948(bParam1);
		}
	}
	return 1;
}

int func_947(int iParam0, bool bParam1)
{
	return func_784(bParam1, ((*Global_1269869)[iParam0 /*20*/])->f_9, ((*Global_1269869)[iParam0 /*20*/])->f_8);
}

int func_948(bool bParam0)
{
	return func_784(bParam0, Global_1901929->f_638.f_30, Global_1901929->f_638.f_29);
}

int func_949(int iParam0)
{
	switch (iParam0)
	{
		case 1908704263: /* GXTEntry: "Good Skinned Alligator Carcass" */
			return 915880986 /* GXTEntry: "Good Alligator Carcass" */;
		case -2112217546: /* GXTEntry: "Perfect Skinned Alligator Carcass" */
			return -1424697962 /* GXTEntry: "Perfect Alligator Carcass" */;
		case -1745255175: /* GXTEntry: "Poor Skinned Alligator Carcass" */
			return -1643384846 /* GXTEntry: "Poor Alligator Carcass" */;
		case -237368063: /* GXTEntry: "Good Skinned Armadillo Carcass" */
			return -847420802 /* GXTEntry: "Good Armadillo Carcass" */;
		case 1598967299: /* GXTEntry: "Perfect Skinned Armadillo Carcass" */
			return -662726703 /* GXTEntry: "Perfect Armadillo Carcass" */;
		case -1809464109: /* GXTEntry: "Poor Skinned Armadillo Carcass" */
			return 1760886130 /* GXTEntry: "Poor Armadillo Carcass" */;
		case -165201917: /* GXTEntry: "Good Skinned Badger Carcass" */
			return -1243653490 /* GXTEntry: "Good Badger Carcass" */;
		case 815147738: /* GXTEntry: "Perfect Skinned Badger Carcass" */
			return 1988467099 /* GXTEntry: "Perfect Badger Carcass" */;
		case 1287583539: /* GXTEntry: "Poor Skinned Badger Carcass" */
			return -674590015 /* GXTEntry: "Poor Badger Carcass" */;
		case -2126985311: /* GXTEntry: "Good Skinned Beaver Carcass" */
			return -1480423460 /* GXTEntry: "Good Beaver Carcass" */;
		case -1268352491: /* GXTEntry: "Perfect Skinned Beaver Carcass" */
			return 924882045 /* GXTEntry: "Perfect Beaver Carcass" */;
		case -1940225526: /* GXTEntry: "Poor Skinned Beaver Carcass" */
			return 1415608202 /* GXTEntry: "Poor Beaver Carcass" */;
		case -212307068: /* GXTEntry: "Good Skinned Bighorn Sheep Carcass" */
			return -593311590 /* GXTEntry: "Good Bighorn Sheep Carcass" */;
		case 355421032: /* GXTEntry: "Perfect Skinned Bighorn Sheep Carcass" */
			return 765085831 /* GXTEntry: "Perfect Bighorn Sheep Carcass" */;
		case 1657729714: /* GXTEntry: "Poor Skinned Bighorn Sheep Carcass" */
			return 2094730711 /* GXTEntry: "Poor Bighorn Sheep Carcass" */;
		case 1350692346: /* GXTEntry: "Good Skinned Buck Carcass" */
			return -1310590179 /* GXTEntry: "Good Buck Carcass" */;
		case -257850294: /* GXTEntry: "Perfect Skinned Buck Carcass" */
			return 992366796 /* GXTEntry: "Perfect Buck Carcass" */;
		case -918541014: /* GXTEntry: "Poor Skinned Buck Carcass" */
			return -244657613 /* GXTEntry: "Poor Buck Carcass" */;
		case -947573795: /* GXTEntry: "Good Plucked California Condor Carcass" */
			return -2026210939 /* GXTEntry: "Good California Condor Carcass" */;
		case -2068302756: /* GXTEntry: "Perfect Plucked California Condor Carcass" */
			return -1252472243 /* GXTEntry: "Perfect California Condor Carcass" */;
		case 1650829985: /* GXTEntry: "Poor Plucked California Condor Carcass" */
			return -980016656 /* GXTEntry: "Poor California Condor Carcass" */;
		case -1808044035: /* GXTEntry: "Good Skinned Chicken Carcass" */
			return -758005668 /* GXTEntry: "Good Chicken Carcass" */;
		case -1952647655: /* GXTEntry: "Perfect Skinned Chicken Carcass" */
			return -2139551030 /* GXTEntry: "Perfect Chicken Carcass" */;
		case 1293221440: /* GXTEntry: "Poor Skinned Chicken Carcass" */
			return 1607144310 /* GXTEntry: "Poor Chicken Carcass" */;
		case -642946194: /* GXTEntry: "Good Plucked Cormorant Carcass" */
			return 80093385 /* GXTEntry: "Good Cormorant Carcass" */;
		case 819214075: /* GXTEntry: "Perfect Plucked Cormorant Carcass" */
			return -867655342 /* GXTEntry: "Perfect Cormorant Carcass" */;
		case -858652427: /* GXTEntry: "Poor Plucked Cormorant Carcass" */
			return 991092621 /* GXTEntry: "Poor Cormorant Carcass" */;
		case 395625948: /* GXTEntry: "Good Skinned Cougar Carcass" */
			return 871746664 /* GXTEntry: "Good Cougar Carcass" */;
		case -2063800922: /* GXTEntry: "Perfect Skinned Cougar Carcass" */
			return 1626949878 /* GXTEntry: "Perfect Cougar Carcass" */;
		case -2117103642: /* GXTEntry: "Poor Skinned Cougar Carcass" */
			return -1722483116 /* GXTEntry: "Poor Cougar Carcass" */;
		case -1583694057: /* GXTEntry: "Good Skinned Coyote Carcass" */
			return -1739474417 /* GXTEntry: "Good Coyote Carcass" */;
		case -1550918713: /* GXTEntry: "Perfect Skinned Coyote Carcass" */
			return -161524199 /* GXTEntry: "Perfect Coyote Carcass" */;
		case 836539658: /* GXTEntry: "Poor Skinned Coyote Carcass" */
			return 156979555 /* GXTEntry: "Poor Coyote Carcass" */;
		case 773062352: /* GXTEntry: "Good Plucked Crane Carcass" */
			return 322141256 /* GXTEntry: "Good Crane Carcass" */;
		case 1306100270: /* GXTEntry: "Perfect Plucked Crane Carcass" */
			return 1310120320 /* GXTEntry: "Perfect Crane Carcass" */;
		case -1063194668: /* GXTEntry: "Poor Plucked Crane Carcass" */
			return -1228376431 /* GXTEntry: "Poor Crane Carcass" */;
		case 337839068: /* GXTEntry: "Good Skinned Deer Carcass" */
			return 472142656 /* GXTEntry: "Good Deer Carcass" */;
		case -1426520714: /* GXTEntry: "Perfect Skinned Deer Carcass" */
			return -1837840093 /* GXTEntry: "Perfect Deer Carcass" */;
		case -1456429189: /* GXTEntry: "Poor Skinned Deer Carcass" */
			return 58634176 /* GXTEntry: "Poor Deer Carcass" */;
		case -2032809253: /* GXTEntry: "Good Skinned Duck Carcass" */
			return 1023080408 /* GXTEntry: "Good Duck Carcass" */;
		case 781728005: /* GXTEntry: "Perfect Skinned Duck Carcass" */
			return 1001171791 /* GXTEntry: "Perfect Duck Carcass" */;
		case 1202409779: /* GXTEntry: "Poor Skinned Duck Carcass" */
			return 1210345318 /* GXTEntry: "Poor Duck Carcass" */;
		case 1520877300: /* GXTEntry: "Good Plucked Eagle Carcass" */
			return 399553313 /* GXTEntry: "Good Eagle Carcass" */;
		case -1736624361: /* GXTEntry: "Perfect Plucked Eagle Carcass" */
			return -1422869557 /* GXTEntry: "Perfect Eagle Carcass" */;
		case 719465997: /* GXTEntry: "Poor Plucked Eagle Carcass" */
			return -1378812236 /* GXTEntry: "Poor Eagle Carcass" */;
		case -361486526: /* GXTEntry: "Good Skinned Egret Carcass" */
			return 1011003885 /* GXTEntry: "Good Egret Carcass" */;
		case -765274711: /* GXTEntry: "Perfect Skinned Egret Carcass" */
			return 651035143 /* GXTEntry: "Perfect Egret Carcass" */;
		case -887205673: /* GXTEntry: "Poor Skinned Egret Carcass" */
			return 2013022756 /* GXTEntry: "Poor Egret Carcass" */;
		case -784020903: /* GXTEntry: "Good Skinned Fox Carcass" */
			return -1186289527 /* GXTEntry: "Good Fox Carcass" */;
		case -886117938: /* GXTEntry: "Perfect Skinned Fox Carcass" */
			return 877935135 /* GXTEntry: "Perfect Fox Carcass" */;
		case -1416771220: /* GXTEntry: "Poor Skinned Fox Carcass" */
			return -39646495 /* GXTEntry: "Poor Fox Carcass" */;
		case 1648676911: /* GXTEntry: "Good Skinned Gila Monster Carcass" */
			return 1582593525 /* GXTEntry: "Good Gila Monster Carcass" */;
		case 2103833563: /* GXTEntry: "Perfect Skinned Gila Monster Carcass" */
			return -246542229 /* GXTEntry: "Perfect Gila Monster Carcass" */;
		case -831636369: /* GXTEntry: "Poor Skinned Gila Monster Carcass" */
			return -529454751 /* GXTEntry: "Poor Gila Monster Carcass" */;
		case -852290935: /* GXTEntry: "Good Skinned Goat Carcass" */
			return -46978629 /* GXTEntry: "Good Goat Carcass" */;
		case -1870415962: /* GXTEntry: "Perfect Skinned Goat Carcass" */
			return -1347000030 /* GXTEntry: "Perfect Goat Carcass" */;
		case -788684109: /* GXTEntry: "Poor Skinned Goat Carcass" */
			return -505583391 /* GXTEntry: "Poor Goat Carcass" */;
		case 1416435145: /* GXTEntry: "Good Skinned Goose Carcass" */
			return 1645887374 /* GXTEntry: "Good Goose Carcass" */;
		case -1483088274: /* GXTEntry: "Perfect Skinned Goose Carcass" */
			return -1559227925 /* GXTEntry: "Perfect Goose Carcass" */;
		case -791867098: /* GXTEntry: "Poor Skinned Goose Carcass" */
			return 1562528937 /* GXTEntry: "Poor Goose Carcass" */;
		case -1689552552: /* GXTEntry: "Good Plucked Hawk Carcass" */
			return -1471526136 /* GXTEntry: "Good Hawk Carcass" */;
		case -1850779170: /* GXTEntry: "Perfect Plucked Hawk Carcass" */
			return -1440794801 /* GXTEntry: "Perfect Hawk Carcass" */;
		case -121487803: /* GXTEntry: "Poor Plucked Hawk Carcass" */
			return 2144711797;
		case -1280499288: /* GXTEntry: "Good Skinned Heron Carcass" */
			return 718825539 /* GXTEntry: "Good Heron Carcass" */;
		case 820245961: /* GXTEntry: "Perfect Skinned Heron Carcass" */
			return 2105263879 /* GXTEntry: "Perfect Heron Carcass" */;
		case -889526774: /* GXTEntry: "Poor Skinned Heron Carcass" */
			return -905842006 /* GXTEntry: "Poor Heron Carcass" */;
		case -521025998: /* GXTEntry: "Good Skinned Iguana Carcass" */
			return 1191274340 /* GXTEntry: "Good Iguana Carcass" */;
		case 1583031244: /* GXTEntry: "Perfect Skinned Iguana Carcass" */
			return 1613453781 /* GXTEntry: "Perfect Iguana Carcass" */;
		case -2115599211: /* GXTEntry: "Poor Skinned Iguana Carcass" */
			return -1030182399 /* GXTEntry: "Poor Iguana Carcass" */;
		case -767176802: /* GXTEntry: "Good Skinned Loon Carcass" */
			return 987967309 /* GXTEntry: "Good Loon Carcass" */;
		case -750945821: /* GXTEntry: "Perfect Skinned Loon Carcass" */
			return -1060737769 /* GXTEntry: "Perfect Loon Carcass" */;
		case -2135749211: /* GXTEntry: "Poor Skinned Loon Carcass" */
			return 553310445 /* GXTEntry: "Poor Loon Carcass" */;
		case 2063108046: /* GXTEntry: "Good Skinned Muskrat Carcass" */
			return -1838865945 /* GXTEntry: "Good Muskrat Carcass" */;
		case 1299111759: /* GXTEntry: "Perfect Skinned Muskrat Carcass" */
			return 1418092959 /* GXTEntry: "Perfect Muskrat Carcass" */;
		case 1595322723: /* GXTEntry: "Poor Skinned Muskrat Carcass" */
			return -1315697778 /* GXTEntry: "Poor Muskrat Carcass" */;
		case 784918835: /* GXTEntry: "Good Skinned Opossum Carcass" */
			return -1772126340 /* GXTEntry: "Good Opossum Carcass" */;
		case -676310905: /* GXTEntry: "Perfect Skinned Opossum Carcass" */
			return -935543049 /* GXTEntry: "Perfect Opossum Carcass" */;
		case -1719545959: /* GXTEntry: "Poor Skinned Opossum Carcass" */
			return 1772544356 /* GXTEntry: "Poor Opossum Carcass" */;
		case -2142423934: /* GXTEntry: "Good Plucked Owl Carcass" */
			return -266273535 /* GXTEntry: "Good Owl Carcass" */;
		case 747751566: /* GXTEntry: "Perfect Plucked Owl Carcass" */
			return -1670544626 /* GXTEntry: "Perfect Owl Carcass" */;
		case -1942682403: /* GXTEntry: "Poor Plucked Owl Carcass" */
			return 1290960696 /* GXTEntry: "Poor Owl Carcass" */;
		case 1018433784: /* GXTEntry: "Good Skinned Panther Carcass" */
			return 1913571052 /* GXTEntry: "Good Panther Carcass" */;
		case -796185392: /* GXTEntry: "Perfect Skinned Panther Carcass" */
			return 1717601520 /* GXTEntry: "Perfect Panther Carcass" */;
		case -49549406: /* GXTEntry: "Poor Skinned Panther Carcass" */
			return 430397370 /* GXTEntry: "Poor Panther Carcass" */;
		case 857788498: /* GXTEntry: "Good Plucked Parrot Carcass" */
			return 16287711 /* GXTEntry: "Good Parrot Carcass" */;
		case 1223148871: /* GXTEntry: "Perfect Plucked Parrot Carcass" */
			return -1356230367 /* GXTEntry: "Perfect Parrot Carcass" */;
		case 939407236: /* GXTEntry: "Poor Plucked Parrot Carcass" */
			return 1417331079 /* GXTEntry: "Poor Parrot Carcass" */;
		case 1608778431: /* GXTEntry: "Good Plucked Pelican Carcass" */
			return -884124246 /* GXTEntry: "Good Pelican Carcass" */;
		case -2033821082: /* GXTEntry: "Perfect Plucked Pelican Carcass" */
			return 1884610748 /* GXTEntry: "Perfect Pelican Carcass" */;
		case -993340234: /* GXTEntry: "Poor Plucked Pelican Carcass" */
			return 746558492 /* GXTEntry: "Poor Pelican Carcass" */;
		case -1861062075: /* GXTEntry: "Good Skinned Pheasant Carcass" */
			return -892811627 /* GXTEntry: "Good Pheasant Carcass" */;
		case 1645001514: /* GXTEntry: "Perfect Skinned Pheasant Carcass" */
			return -2040522845 /* GXTEntry: "Perfect Pheasant Carcass" */;
		case 782371031: /* GXTEntry: "Poor Skinned Pheasant Carcass" */
			return -1224510844 /* GXTEntry: "Poor Pheasant Carcass" */;
		case 1255529169: /* GXTEntry: "Good Skinned Pig Carcass" */
			return 1334837390 /* GXTEntry: "Good Pig Carcass" */;
		case 70898308: /* GXTEntry: "Perfect Skinned Pig Carcass" */
			return 339620522 /* GXTEntry: "Perfect Pig Carcass" */;
		case -1050350982: /* GXTEntry: "Poor Skinned Pig Carcass" */
			return 1770451033 /* GXTEntry: "Poor Pig Carcass" */;
		case 581781784: /* GXTEntry: "Good Skinned Prairie Chicken Carcass" */
			return 756657535 /* GXTEntry: "Good Prairie Chicken Carcass" */;
		case -1363330863: /* GXTEntry: "Perfect Skinned Prairie Chicken Carcass" */
			return 862898895 /* GXTEntry: "Perfect Prairie Chicken Carcass" */;
		case -1780911288: /* GXTEntry: "Poor Skinned Prairie Chicken Carcass" */
			return 1997845858 /* GXTEntry: "Poor Prairie Chicken Carcass" */;
		case 1018306802: /* GXTEntry: "Good Skinned Pronghorn Carcass" */
			return -1930144509 /* GXTEntry: "Good Pronghorn Carcass" */;
		case 1615521415: /* GXTEntry: "Perfect Skinned Pronghorn Carcass" */
			return 1846915545 /* GXTEntry: "Perfect Pronghorn Carcass" */;
		case -1499066338: /* GXTEntry: "Poor Skinned Pronghorn Carcass" */
			return -1816929509 /* GXTEntry: "Poor Pronghorn Carcass" */;
		case 1711081908: /* GXTEntry: "Good Skinned Rabbit Carcass" */
			return 1197831625 /* GXTEntry: "Good Rabbit Carcass" */;
		case -164705: /* GXTEntry: "Perfect Skinned Rabbit Carcass" */
			return -1866642239 /* GXTEntry: "Perfect Rabbit Carcass" */;
		case -2044044647: /* GXTEntry: "Poor Skinned Rabbit Carcass" */
			return -1508120809 /* GXTEntry: "Poor Rabbit Carcass" */;
		case -859583379: /* GXTEntry: "Good Skinned Raccoon Carcass" */
			return -1007681885 /* GXTEntry: "Good Raccoon Carcass" */;
		case -759504052: /* GXTEntry: "Perfect Skinned Raccoon Carcass" */
			return 434924608 /* GXTEntry: "Perfect Raccoon Carcass" */;
		case 700225820: /* GXTEntry: "Poor Skinned Raccoon Carcass" */
			return 1666393029 /* GXTEntry: "Poor Raccoon Carcass" */;
		case 136458586: /* GXTEntry: "Good Skinned Ram Carcass" */
			return -1814593136 /* GXTEntry: "Good Ram Carcass" */;
		case 799105420: /* GXTEntry: "Perfect Skinned Ram Carcass" */
			return -1188120304 /* GXTEntry: "Perfect Ram Carcass" */;
		case -481655757: /* GXTEntry: "Poor Skinned Ram Carcass" */
			return 1978734761 /* GXTEntry: "Poor Ram Carcass" */;
		case 484160931: /* GXTEntry: "Good Plucked Raven Carcass" */
			return -824902132 /* GXTEntry: "Good Raven Carcass" */;
		case 1010699907: /* GXTEntry: "Perfect Plucked Raven Carcass" */
			return -1015531226 /* GXTEntry: "Perfect Raven Carcass" */;
		case 1550264248: /* GXTEntry: "Poor Plucked Raven Carcass" */
			return -581619522 /* GXTEntry: "Poor Raven Carcass" */;
		case -371992731: /* GXTEntry: "Good Plucked Red-footed Booby Carcass" */
			return -861854914 /* GXTEntry: "Good Red-footed Booby Carcass" */;
		case 1090294483: /* GXTEntry: "Perfect Plucked Red-footed Booby Carcass" */
			return -545447034 /* GXTEntry: "Perfect Red-footed Booby Carcass" */;
		case -274175035: /* GXTEntry: "Poor Plucked Red-footed Booby Carcass" */
			return -1824684934 /* GXTEntry: "Poor Red-footed Booby Carcass" */;
		case -1064414912: /* GXTEntry: "Good Skinned Rooster Carcass" */
			return 980653387 /* GXTEntry: "Good Rooster Carcass" */;
		case -2091620305: /* GXTEntry: "Perfect Skinned Rooster Carcass" */
			return -1011598664 /* GXTEntry: "Perfect Rooster Carcass" */;
		case -468684824: /* GXTEntry: "Poor Skinned Rooster Carcass" */
			return -177476569 /* GXTEntry: "Poor Rooster Carcass" */;
		case 1668870118: /* GXTEntry: "Good Skinned Roseate Spoonbill Carcass" */
			return 416630124 /* GXTEntry: "Good Roseate Spoonbill Carcass" */;
		case -534004020: /* GXTEntry: "Perfect Skinned Roseate Spoonbill Carcass" */
			return 1925728375 /* GXTEntry: "Perfect Roseate Spoonbill Carcass" */;
		case -2126925270: /* GXTEntry: "Poor Skinned Roseate Spoonbill Carcass" */
			return -1080457688 /* GXTEntry: "Poor Roseate Spoonbill Carcass" */;
		case 2008380517: /* GXTEntry: "Good Plucked Seagull Carcass" */
			return 1742676369 /* GXTEntry: "Good Seagull Carcass" */;
		case -510697884: /* GXTEntry: "Perfect Plucked Seagull Carcass" */
			return -899751553 /* GXTEntry: "Perfect Seagull Carcass" */;
		case -955209948: /* GXTEntry: "Poor Plucked Seagull Carcass" */
			return 431501574 /* GXTEntry: "Poor Seagull Carcass" */;
		case 1459836898: /* GXTEntry: "Good Skinned Sheep Carcass" */
			return 2126795269;
		case 303969766: /* GXTEntry: "Perfect Skinned Sheep Carcass" */
			return 1489051752 /* GXTEntry: "Perfect Sheep Carcass" */;
		case -1707588662: /* GXTEntry: "Poor Skinned Sheep Carcass" */
			return -1705499323 /* GXTEntry: "Poor Sheep Carcass" */;
		case -1224075784: /* GXTEntry: "Good Skinned Skunk Carcass" */
			return -2013445740 /* GXTEntry: "Good Skunk Carcass" */;
		case -1806671048: /* GXTEntry: "Perfect Skinned Skunk Carcass" */
			return 102446365 /* GXTEntry: "Perfect Skunk Carcass" */;
		case 749765420: /* GXTEntry: "Poor Skinned Skunk Carcass" */
			return -1927342740 /* GXTEntry: "Poor Skunk Carcass" */;
		case 462936163: /* GXTEntry: "Good Skinned Black-Tailed Rattlesnake Carcass" */
			return -410900360 /* GXTEntry: "Good Black-tailed Rattlesnake Carcass" */;
		case -8888941: /* GXTEntry: "Perfect Skinned Black-Tailed Rattlesnake Carcass" */
			return -1073614594 /* GXTEntry: "Perfect Black-tailed Rattlesnake Carcass" */;
		case 1640227110: /* GXTEntry: "Poor Skinned Black-Tailed Rattlesnake Carcass" */
			return 2060013792 /* GXTEntry: "Poor Black-tailed Rattlesnake Carcass" */;
		case -1241188722: /* GXTEntry: "Good Skinned Red Boa Carcass" */
			return 581032175 /* GXTEntry: "Good Red Boa Carcass" */;
		case -1030962659: /* GXTEntry: "Perfect Skinned Red Boa Carcass" */
			return -581931638 /* GXTEntry: "Perfect Red Boa Carcass" */;
		case 112552982: /* GXTEntry: "Poor Skinned Red Boa Carcass" */
			return -1528265128 /* GXTEntry: "Poor Red Boa Carcass" */;
		case -1599578931: /* GXTEntry: "Good Skinned Copperhead Carcass" */
			return -142632645 /* GXTEntry: "Good Copperhead Carcass" */;
		case 1296331626: /* GXTEntry: "Perfect Skinned Copperhead Carcass" */
			return -2048519180 /* GXTEntry: "Perfect Copperhead Carcass" */;
		case -1256398198: /* GXTEntry: "Poor Skinned Copperhead Carcass" */
			return 1442025993 /* GXTEntry: "Poor Copperhead Carcass" */;
		case 1297800973: /* GXTEntry: "Good Skinned Fer-de-lance Carcass" */
			return 441195430 /* GXTEntry: "Good Fer-de-Lance Carcass" */;
		case 1772582754: /* GXTEntry: "Perfect Skinned Fer-de-lance Carcass" */
			return 748665395 /* GXTEntry: "Perfect Fer-de-Lance Carcass" */;
		case -1459876379: /* GXTEntry: "Poor Skinned Fer-de-lance Carcass" */
			return 351048413 /* GXTEntry: "Poor Fer-de-Lance Carcass" */;
		case 1127406863: /* GXTEntry: "Good Skinned Snake Carcass" */
			return -914779013 /* GXTEntry: "Good Snake Carcass" */;
		case 1779996957: /* GXTEntry: "Perfect Skinned Snake Carcass" */
			return 1323485831 /* GXTEntry: "Perfect Snake Carcass" */;
		case 1885306923: /* GXTEntry: "Poor Skinned Snake Carcass" */
			return -365111821 /* GXTEntry: "Poor Snake Carcass" */;
		case 1244107697: /* GXTEntry: "Good Skinned Water Snake Carcass" */
			return 101495387 /* GXTEntry: "Good Water Snake Carcass" */;
		case -1201555940: /* GXTEntry: "Perfect Skinned Water Snake Carcass" */
			return 157917500 /* GXTEntry: "Perfect Water Snake Carcass" */;
		case -668487833: /* GXTEntry: "Poor Skinned Water Snake Carcass" */
			return -936537044 /* GXTEntry: "Poor Water Snake Carcass" */;
		case -1178150148: /* GXTEntry: "Good Skinned Turkey Carcass" */
			return -1610329427 /* GXTEntry: "Good Turkey Carcass" */;
		case 1171158615: /* GXTEntry: "Perfect Skinned Turkey Carcass" */
			return -1836227998 /* GXTEntry: "Perfect Turkey Carcass" */;
		case -2123554124: /* GXTEntry: "Poor Skinned Turkey Carcass" */
			return 619479575 /* GXTEntry: "Poor Turkey Carcass" */;
		case 1806705761: /* GXTEntry: "Good Skinned Snapping Turtle Carcass" */
			return -1444929945 /* GXTEntry: "Good Snapping Turtle Carcass" */;
		case 404581836: /* GXTEntry: "Perfect Skinned Snapping Turtle Carcass" */
			return -929322235 /* GXTEntry: "Perfect Snapping Turtle Carcass" */;
		case 987197489: /* GXTEntry: "Poor Skinned Snapping Turtle Carcass" */
			return -548076717 /* GXTEntry: "Poor Snapping Turtle Carcass" */;
		case -1259715647: /* GXTEntry: "Good Plucked Vulture Carcass" */
			return -281211381 /* GXTEntry: "Good Vulture Carcass" */;
		case -1716717840: /* GXTEntry: "Perfect Plucked Vulture Carcass" */
			return 493457089 /* GXTEntry: "Perfect Vulture Carcass" */;
		case -196277007: /* GXTEntry: "Poor Plucked Vulture Carcass" */
			return -479485786 /* GXTEntry: "Poor Vulture Carcass" */;
		case -2064457926: /* GXTEntry: "Good Skinned Wolf Carcass" */
			return 27838955 /* GXTEntry: "Good Wolf Carcass" */;
		case 561267454: /* GXTEntry: "Perfect Skinned Wolf Carcass" */
			return 1641833719 /* GXTEntry: "Perfect Wolf Carcass" */;
		case 686253083: /* GXTEntry: "Poor Skinned Wolf Carcass" */
			return -314933180 /* GXTEntry: "Poor Wolf Carcass" */;
		default:
			break;
	}
	return 0;
}

void func_950(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1[10];
	int iVar12;
	int iVar13;

	iVar1[0] = 878851736; /* GXTEntry: "Beef Stew" */
	iVar1[1] = 1762298001; /* GXTEntry: "Beef and Eggs Stew" */
	iVar1[2] = 1869130580; /* GXTEntry: "Low Quality Beef Stew" */
	iVar1[3] = 1336518004; /* GXTEntry: "Low Quality Beef and Eggs Stew" */
	iVar1[4] = 116793994; /* GXTEntry: "Medium Quality Beef Stew" */
	iVar1[5] = 515084529; /* GXTEntry: "Medium Quality Beef and Eggs Stew" */
	iVar1[6] = -1760041550; /* GXTEntry: "High Quality Beef Stew" */
	iVar1[7] = -1977068039; /* GXTEntry: "High Quality Beef and Eggs Stew" */
	iVar1[8] = -1708424762; /* GXTEntry: "Regional Beef Stew" */
	iVar1[9] = -399865011; /* GXTEntry: "Regional Beef and Eggs Stew" */
	iVar12 = 0;
	iVar13 = 0;
	while (iVar13 <= 9)
	{
		if (iParam1 == &iVar1[iVar13])
		{
			if (iVar13 > iVar12)
			{
				uVar0 = &iVar1[iVar13];
			}
		}
		iVar13++;
	}
	func_987(iParam0, &uVar0);
	func_988(&uVar0);
}

int func_951(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_989(Param0);
	}
	return -1;
}

bool func_952()
{
	return !Global_1572887->f_9;
}

int func_953(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_545();
	}
	if (iParam0 == 2026485318)
	{
		return -1806335803;
	}
	else if (iParam0 == 24043185)
	{
		return -971050805;
	}
	return 0;
}

int func_954(int iParam0)
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
			return 256;
		case 350097565:
			return 512;
		case 346761890:
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

void func_955(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_990(uParam0->f_1[iVar0 /*3*/], 2))
		{
			if (func_991(iVar0, iParam1))
			{
				vVar4 = { func_992(iVar0, -1) };
				if (((!bParam4 && vVar4.x != &Global_1951141->f_81[iVar0 /*12*/]) && vVar4.x != 0) && (&uParam0->f_1[iVar0 /*3*/] != vVar4.x || (uParam0->f_1[iVar0 /*3*/])->f_1 != vVar4.y))
				{
					*(uParam0->f_1[iVar0 /*3*/]) = { vVar4 };
				}
				if (func_993(iVar0, 4))
				{
					func_994(iVar0, 4, 6);
				}
			}
			else
			{
				if (bParam3)
				{
					func_995(iVar0, 4, 6);
				}
				Jump @205; //curOff = 171
				if (bParam2)
				{
					vVar1.x = &Global_1951141->f_81[iVar0 /*12*/];
					*(uParam0->f_1[iVar0 /*3*/]) = { vVar1 };
				}
			}
			iVar0++;
		}
	}

void func_956(int iParam0, int iParam1, int iParam2)
{
	(Global_1951141->f_81[func_249(iParam0, 1) /*12*/])->f_11 = ((Global_1951141->f_81[func_249(iParam0, 1) /*12*/])->f_11 || iParam1);
}

int func_957(int iParam0)
{
	int iVar0;
	var uVar1;

	Global_1951141->f_1040.f_2 = 0;
	iVar0 = 1226838104;
	func_996(&(Global_1951141->f_1040), iVar0, -367421157, 1409451727, 1, iParam0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1951141->f_1040));
	if (!DATAFILE::_0x44B3A36933AC009C(&uVar1, &(Global_1951141->f_1040), 1409451727))
	{
		return 0;
	}
	return 1;
}

int func_958(int iParam0)
{
	var uVar0[5];
	int iVar6;

	if (!func_90(iParam0, 0))
	{
		return 0;
	}
	iVar6 = ITEMDATABASE::_0x8870895BA5ED9385(iParam0, 761377030, &uVar0);
	if (iVar6 > 0)
	{
		return &(uVar0[0]);
	}
	return 0;
}

void func_959(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (func_150(&(uParam0->f_1[34 /*3*/]), -166674229))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (&(Global_1951141->f_81[iVar0 /*12*/])->f_3[0] == joaat("MISSING") || &uParam0->f_1[iVar0 /*3*/] == 0)
		{
		}
		else if (!bParam2 && func_958(&(uParam0->f_1[iVar0 /*3*/])) != 0)
		{
		}
		else if (!func_991(iVar0, iParam1))
		{
		}
		else if (func_993(iVar0, 16))
		{
			func_994(iVar0, 16, 6);
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
			(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
		}
		iVar0++;
	}
}

void func_960(int iParam0)
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
	func_961(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 0;
}

void func_961(int iParam0)
{
	if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 != 0)
	{
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = 0;
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 = 0;
	}
}

struct<5> func_962(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_963(iParam0, joaat("character"), func_463(), -1591664384) };
	Var0.f_4 = 1084182731;
	return Var0;
}

struct<4> func_963(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, int iParam6)
{
	struct<4> Var0;

	if (!func_90(iParam1, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(iParam0, &uParam2, iParam1, iParam6, &Var0);
	return Var0;
}

int func_964(int iParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case -1698498246:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_965(int iParam0)
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

int func_966(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<2> Var1;
	var uVar13[15];
	int iVar29;
	int iVar30;

	if (!func_78(0) || func_79())
	{
		iVar0 = iParam0;
		Var1.f_1 = 10;
		func_998(iParam1, func_997(iParam2), &Var1, 1);
		if (func_999(iVar0, &Var1, 0))
		{
		}
		func_137(499, 0);
		return 0;
	}
	PED::_0xB29C553BA582D09E(&uVar13, iParam0, iParam1, func_997(iParam2));
	iVar29 = 0;
	while (iVar29 < 15)
	{
		if ((func_90(&(uVar13[iVar29]), 0) && !func_150(&(uVar13[iVar29]), 1286414894)) && !&uVar13[iVar29] == iParam2)
		{
			func_197(&(uVar13[iVar29]), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			if (iParam3 != 0)
			{
				if (iParam3 == &uVar13[iVar29])
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
	func_189(func_78(0), 0, 0);
	return iVar30;
}

int func_967(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<12> Var0;
	struct<16> Var14;
	int iVar30;
	struct<16> Var31;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return -1;
	}
	if (func_489(iParam0))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	if (!func_374(*uParam1, &Var0, 1, 0, -1))
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
	Var14 = { func_883(&Var0, 0) };
	Var14.f_9 = iParam2;
	Var14.f_12 = iParam3;
	iVar30 = -1;
	iVar30 = func_222(joaat("use"), &Var14, bParam5);
	if (bParam4 && iVar30 != -1)
	{
		Var31.f_7 = -142743235;
		Var31 = 1;
		func_223(iVar30, Var31);
	}
	return iVar30;
}

float func_968(int iParam0)
{
	return (PLAYER::_0x592F58BC4D2A2CF3(iParam0, 0) - IntToFloat(func_1000(2)));
}

int func_969(int iParam0)
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
	iVar0 = func_914(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_913(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_912(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_909(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_910(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_911(iParam0);
	if (iVar5 < 1 || iVar5 > func_915(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_970(int iParam0)
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

char* func_971(int iParam0)
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

char* func_972(int iParam0)
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

void func_973(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_689(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1954472->f_1331.f_6[iParam0 /*3*/] = fParam1;
			break;
		case 1:
			Global_1954472->f_1465.f_2.f_6[iParam0 /*3*/] = fParam1;
			break;
		default:
			break;
	}
}

void func_974(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_689(2);
	}
	switch (iParam2)
	{
		case 0:
			(Global_1954472->f_1331.f_16[iParam0 /*3*/])->f_2 = uParam1;
			break;
		case 1:
			(Global_1954472->f_1465.f_2.f_16[iParam0 /*3*/])->f_2 = uParam1;
			break;
		default:
			break;
	}
}

void func_975(int iParam0, int iParam1)
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

void func_976(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_977(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_910(*iParam0);
	iVar1 = func_909(*iParam0);
	if (iParam1 < 1 || iParam1 > func_915(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_978(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_979(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_980(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

int func_981(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 1;
		case 13:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_982(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2101912686:
			return 13;
		case -2006026692:
			return 166;
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
			return 163;
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
		case -1631930150:
			return 161;
		case -1629969648:
			return 164;
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
			return 162;
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
		case -286632741:
			return 8;
		case -267135864:
			return 138;
		case -233204301:
			return 105;
		case -203268054:
			return 143;
		case -161625840:
			return 167;
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
			return 171;
		case 320758674:
			return 158;
		case 352539363:
			return 169;
		case 398279342:
			return 34;
		case 408582472:
			return 5;
		case 420477860:
			return 25;
		case 509781427:
			return 93;
		case 550487527:
			return 35;
		case 576694808:
			return 165;
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
		case 1323028278:
			return 41;
		case 1374979106:
			return 28;
		case 1405624312:
			return 146;
		case 1444077748:
			return 23;
		case 1498983922:
			return 84;
		case 1554410187:
			return 73;
		case 1585362808:
			return 16;
		case 1614000521:
			return 170;
		case 1636352616:
			return 151;
		case 1662680949:
			return 168;
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

int func_983(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_1001(iParam0))
	{
		return 0;
	}
	iVar0 = func_982(iParam0, 1);
	if (!func_1002(&(Global_1140484->f_30603.f_847[iVar0 /*12*/])))
	{
		return 1;
	}
	iVar3 = func_1003(&(Global_1140484->f_30603.f_847[iVar0 /*12*/]), 1);
	iVar4 = 0;
	while (iVar4 < (Global_1140484->f_30603[iVar3 /*6*/])->f_5)
	{
		iVar1 = Global_1140484->f_30603[iVar3 /*6*/][iVar4];
		switch (func_1004(iParam0, iVar1))
		{
			case 0:
				func_1005(iVar1, iParam0, iVar4);
				break;
			case 1:
				iVar5 = 0;
				while (iVar5 < Global_1140484->f_30603.f_10924)
				{
					if (&Global_1140484->f_30603.f_8871[iVar5 /*3*/] != iVar1 || (Global_1140484->f_30603.f_8871[iVar5 /*3*/])->f_1 != iParam0)
					{
					}
					else
					{
						func_1005(iVar1, iParam0, iVar4);
						func_1006(Global_1140484->f_30603.f_8871[iVar5 /*3*/]);
						Global_1140484->f_30603.f_10924 = (Global_1140484->f_30603.f_10924 - 1);
						*(Global_1140484->f_30603.f_8871[iVar5 /*3*/]) = { *(Global_1140484->f_30603.f_8871[Global_1140484->f_30603.f_10924 /*3*/]) };
						func_1006(Global_1140484->f_30603.f_8871[Global_1140484->f_30603.f_10924 /*3*/]);
					}
					else
					{
						iVar5++;
					}
				}
				break;
			case 2:
				Jump @554; //curOff = 357
				iVar2 = func_1007(iVar1, 1);
				func_1008(iVar2, -1);
				if ((Global_1140484->f_30603.f_2900[iVar2 /*31*/])->f_29 <= 0)
				{
					func_1009(iVar2, 0);
					iVar6 = 0;
					while (iVar6 < Global_1140484->f_30603.f_8870)
					{
						if (&Global_1140484->f_30603.f_8683[iVar6] != iVar1)
						{
						}
						else
						{
							Global_1140484->f_30603.f_8683[iVar6] = -1;
							Global_1140484->f_30603.f_8870 = (Global_1140484->f_30603.f_8870 - 1);
							Global_1140484->f_30603.f_8683[iVar6] = &Global_1140484->f_30603.f_8683[Global_1140484->f_30603.f_8870];
							Global_1140484->f_30603.f_8683[Global_1140484->f_30603.f_8870] = -1;
						}
						else
						{
							iVar6++;
						}
					}
				}
				iVar4++;
			}
			Global_1140484->f_30603.f_847[iVar0 /*12*/] = -1;
			func_1010(Global_1140484->f_30603.f_847[iVar0 /*12*/]);
			return 1;
		}

int func_984(int iParam0, int iParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return 0;
	}
	if (!func_458(iParam0, 2))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!func_1011(iParam0, iParam1, &Var0))
	{
		return 0;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = &Var0.f_36[iVar47];
		iVar47++;
	}
	return 1;
}

bool func_985(int iParam0, int iParam1, int iParam2)
{
	if (!func_90(iParam1, 0))
	{
		return false;
	}
	return func_749(iParam0, iParam1) >= iParam2;
}

int func_986(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_90(iParam1, 0))
	{
		return 0;
	}
	if (iParam2 < 1)
	{
		return 0;
	}
	Var0 = { func_962(iParam0) };
	Var5 = { func_963(iParam0, iParam1, Var0, Var0.f_4) };
	return func_1012(iParam0, iParam1, &Var5, iParam2, iParam3, bParam4);
}

void func_987(int iParam0, var uParam1)
{
}

void func_988(var uParam0)
{
}

int func_989(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_1013(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

bool func_990(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_991(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 39)
	{
		return false;
	}
	return ((Global_1951141->f_81[iParam0 /*12*/])->f_10 && iParam1) != 0;
}

Vector3 func_992(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17172.f_54.f_644.f_1776;
	}
	return *((Global_17172.f_54.f_644.f_32[iParam1 /*120*/])->f_1.f_1[iParam0 /*3*/]);
}

bool func_993(int iParam0, int iParam1)
{
	return ((Global_1951141->f_81[iParam0 /*12*/])->f_11 && iParam1) != 0;
}

void func_994(int iParam0, int iParam1, int iParam2)
{
	(Global_1951141->f_81[iParam0 /*12*/])->f_11 = ((Global_1951141->f_81[iParam0 /*12*/])->f_11 - ((Global_1951141->f_81[iParam0 /*12*/])->f_11 && iParam1));
}

void func_995(int iParam0, int iParam1, int iParam2)
{
	(Global_1951141->f_81[iParam0 /*12*/])->f_11 = ((Global_1951141->f_81[iParam0 /*12*/])->f_11 || iParam1);
}

void func_996(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

int func_997(int iParam0)
{
	if (func_150(iParam0, 1064293907))
	{
		return 2;
	}
	else if (func_150(iParam0, -1218707194))
	{
		return 1;
	}
	else if (func_150(iParam0, 1888974372))
	{
		return 0;
	}
	return 1;
}

struct<12> func_998(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1112574294;
					break;
				case 1:
					iVar0 = -132480015;
					break;
				case 2:
					iVar0 = 1838524355;
					break;
				case 3:
					iVar0 = 781424689;
					break;
				case 4:
					iVar0 = 1547693994;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 = -684991368;
					break;
				case 1:
					iVar0 = -832325162;
					break;
				case 2:
					iVar0 = -346003361;
					break;
				case 3:
					iVar0 = 264694784;
					break;
				case 4:
					iVar0 = -559967702;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1341408997;
					break;
				case 1:
					iVar0 = -254777578;
					break;
				case 2:
					iVar0 = -379118674;
					break;
				case 3:
					iVar0 = -1624584872;
					break;
				case 4:
					iVar0 = 1526992527;
					break;
			}
			break;
	}
	if (bParam3)
	{
		func_477(uParam2, 1528001899);
	}
	else
	{
		func_477(uParam2, 1884295263);
	}
	func_477(uParam2, iVar0);
	return *uParam2;
}

int func_999(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (0 == iParam0)
	{
		return 0;
	}
	return func_478(iParam0, uParam1, &uVar0, iParam2);
}

int func_1000(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_761(2) * 2;
		case 1:
			return func_765(2) * 2;
		case 2:
			return func_763(2) * 2;
		default:
			break;
	}
	return -1;
}

int func_1001(int iParam0)
{
	int iVar0;

	iVar0 = func_982(iParam0, 1);
	if (iVar0 < 2 || iVar0 >= 171)
	{
		return 0;
	}
	return 1;
}

int func_1002(int iParam0)
{
	int iVar0;

	iVar0 = func_1003(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 141)
	{
		return 0;
	}
	return 1;
}

int func_1003(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2137819446:
			return 100;
		case -2131931188:
			return 127;
		case -2130179962:
			return 63;
		case -2059502051:
			return 65;
		case -2056449621:
			return 93;
		case -1973221270:
			return 64;
		case -1969715419:
			return 35;
		case -1968787770:
			return 6;
		case -1957895818:
			return 56;
		case -1952291530:
			return 130;
		case -1950424573:
			return 54;
		case -1910888845:
			return 110;
		case -1883405573:
			return 78;
		case -1844803100:
			return 80;
		case -1831687141:
			return 62;
		case -1810408560:
			return 73;
		case -1805785047:
			return 41;
		case -1759910473:
			return 25;
		case -1756646040:
			return 92;
		case -1741565123:
			return 47;
		case -1609480552:
			return 61;
		case -1596526341:
			return 3;
		case -1573606823:
			return 49;
		case -1510695159:
			return 138;
		case -1504620904:
			return 107;
		case -1462866101:
			return 111;
		case -1405836475:
			return 55;
		case -1360021450:
			return 9;
		case -1356583879:
			return 128;
		case -1242362177:
			return 46;
		case -1235458416:
			return 74;
		case -1234968784:
			return 69;
		case -1234548949:
			return 7;
		case -1143906885:
			return 122;
		case -1140308479:
			return 134;
		case -1105699593:
			return 141;
		case -1008191715:
			return 1;
		case -985141745:
			return 79;
		case -974857798:
			return 131;
		case -914097888:
			return 123;
		case -900341092:
			return 133;
		case -859661758:
			return 60;
		case -810885450:
			return 40;
		case -750368411:
			return 48;
		case -691826426:
			return 77;
		case -608746625:
			return 17;
		case -567710817:
			return 2;
		case -565327488:
			return 72;
		case -559775780:
			return 117;
		case -549372097:
			return 59;
		case -455491084:
			return 85;
		case -447950391:
			return 94;
		case -418060375:
			return 4;
		case -391691334:
			return 68;
		case -375368707:
			return 58;
		case -357713093:
			return 119;
		case -336340230:
			return 115;
		case -309456186:
			return 10;
		case -300915357:
			return 136;
		case -252777454:
			return 126;
		case -190717545:
			return 30;
		case -179898515:
			return 118;
		case -179343615:
			return 140;
		case -132268497:
			return 132;
		case -120658935:
			return 67;
		case -97080319:
			return 43;
		case -93340399:
			return 106;
		case -2338369:
			return 39;
		case -1:
			return 0;
		case 18275459:
			return 8;
		case 47725914:
			return 11;
		case 151887407:
			return 18;
		case 153569762:
			return 44;
		case 163503896:
			return 101;
		case 183566846:
			return 15;
		case 193887912:
			return 113;
		case 225804550:
			return 124;
		case 267361268:
			return 86;
		case 272084311:
			return 71;
		case 312483235:
			return 29;
		case 349431355:
			return 105;
		case 350943398:
			return 102;
		case 383280474:
			return 12;
		case 467901857:
			return 51;
		case 508502713:
			return 125;
		case 548902645:
			return 109;
		case 591249118:
			return 28;
		case 611341556:
			return 16;
		case 618168626:
			return 26;
		case 620773281:
			return 98;
		case 668358831:
			return 139;
		case 677513315:
			return 45;
		case 713112284:
			return 50;
		case 722162219:
			return 88;
		case 730253571:
			return 36;
		case 731266401:
			return 90;
		case 785001351:
			return 135;
		case 793035862:
			return 81;
		case 802887669:
			return 114;
		case 828060856:
			return 38;
		case 837742789:
			return 70;
		case 900184247:
			return 21;
		case 924932702:
			return 14;
		case 969398724:
			return 89;
		case 1014273190:
			return 96;
		case 1033330939:
			return 82;
		case 1034286944:
			return 87;
		case 1123546272:
			return 104;
		case 1138545953:
			return 20;
		case 1157170123:
			return 75;
		case 1159895828:
			return 31;
		case 1296512587:
			return 97;
		case 1377989036:
			return 19;
		case 1423325819:
			return 32;
		case 1476796894:
			return 24;
		case 1486559056:
			return 120;
		case 1493749872:
			return 112;
		case 1500545235:
			return 129;
		case 1507470319:
			return 83;
		case 1543468593:
			return 137;
		case 1568867811:
			return 57;
		case 1625043854:
			return 22;
		case 1667258255:
			return 33;
		case 1695199279:
			return 121;
		case 1699722938:
			return 13;
		case 1746978940:
			return 84;
		case 1764814366:
			return 95;
		case 1767031434:
			return 116;
		case 1775828486:
			return 103;
		case 1830439946:
			return 23;
		case 1851839077:
			return 99;
		case 1860260195:
			return 66;
		case 1885285188:
			return 52;
		case 1905466026:
			return 27;
		case 1925734249:
			return 76;
		case 1938325642:
			return 5;
		case 2079700825:
			return 42;
		case 2081475118:
			return 37;
		case 2093509505:
			return 34;
		case 2100718034:
			return 108;
		case 2117355246:
			return 53;
		case 2146493981:
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

int func_1004(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_1014(iParam0);
	iVar1 = &Global_1275573;
	iVar2 = func_1007(iParam1, 1);
	switch ((Global_1140484->f_30603.f_2900[iVar2 /*31*/])->f_1)
	{
		case -1912291748:
			if (iVar1 == iVar0)
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
		case joaat("duration"):
		case -594821844:
		case 348502922:
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

int func_1005(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;

	if (!func_1001(iParam1))
	{
		return 0;
	}
	if (!func_1015(iParam0))
	{
		return 0;
	}
	iVar0 = func_1007(iParam0, 1);
	func_1016(iParam0, iParam1, iParam2);
	if (func_1017(*(Global_1140484->f_30603.f_2900[iVar0 /*31*/])) && func_1018(iParam0, (Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4))
	{
		vVar1 = { func_1019((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4) };
		if (func_1020(vVar1))
		{
			if (func_1021(vVar1.x, vVar1.y, vVar1.z))
			{
				func_1022((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4, vVar1.x, vVar1.y, vVar1.z);
			}
			else
			{
				func_1023((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4);
			}
		}
		else
		{
			func_1023((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4);
		}
	}
	return 1;
}

void func_1006(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
}

int func_1007(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2139291255:
			return 145;
		case -2133203822:
			return 108;
		case -2119961771:
			return 90;
		case -2117138640:
			return 79;
		case -2115524796:
			return 60;
		case -2108980762:
			return 137;
		case -2088744988:
			return 91;
		case -2056483403:
			return 75;
		case -2008161946:
			return 26;
		case -2006179687:
			return 170;
		case -1961023994:
			return 92;
		case -1958950493:
			return 183;
		case -1954641284:
			return 28;
		case -1946267644:
			return 130;
		case -1925826694:
			return 49;
		case -1920322236:
			return 22;
		case -1886192107:
			return 55;
		case -1854279248:
			return 6;
		case -1853627206:
			return 134;
		case -1851126253:
			return 29;
		case -1847886830:
			return 16;
		case -1841577353:
			return 112;
		case -1840959475:
			return 106;
		case -1808210911:
			return 30;
		case -1803458707:
			return 8;
		case -1761885354:
			return 111;
		case -1749044999:
			return 96;
		case -1698597704:
			return 45;
		case -1631537135:
			return 63;
		case -1599892133:
			return 38;
		case -1514337705:
			return 177;
		case -1498884346:
			return 151;
		case -1448841146:
			return 50;
		case -1445919747:
			return 117;
		case -1441068914:
			return 39;
		case -1426414385:
			return 172;
		case -1421504146:
			return 109;
		case -1419242781:
			return 33;
		case -1394912816:
			return 186;
		case -1378028573:
			return 27;
		case -1370534631:
			return 110;
		case -1327315394:
			return 1;
		case -1311380047:
			return 46;
		case -1299791944:
			return 2;
		case -1280685390:
			return 132;
		case -1268916163:
			return 119;
		case -1256990268:
			return 76;
		case -1139172958:
			return 61;
		case -1112015628:
			return 163;
		case -1094465110:
			return 47;
		case -1038422902:
			return 74;
		case -1011126213:
			return 31;
		case -964953325:
			return 123;
		case -955252868:
			return 124;
		case -932897324:
			return 11;
		case -931584677:
			return 103;
		case -925634234:
			return 21;
		case -750441842:
			return 174;
		case -649515024:
			return 142;
		case -624920400:
			return 81;
		case -612675573:
			return 148;
		case -572117096:
			return 182;
		case -562496675:
			return 57;
		case -562150430:
			return 171;
		case -560965516:
			return 48;
		case -554207528:
			return 59;
		case -539762089:
			return 97;
		case -529396121:
			return 175;
		case -454200664:
			return 104;
		case -440727241:
			return 19;
		case -423133485:
			return 133;
		case -403292810:
			return 113;
		case -398496662:
			return 23;
		case -343145237:
			return 155;
		case -342633876:
			return 5;
		case -334674962:
			return 13;
		case -332283977:
			return 66;
		case -306011710:
			return 4;
		case -280832639:
			return 51;
		case -276166656:
			return 162;
		case -269291543:
			return 68;
		case -206787059:
			return 35;
		case -164741307:
			return 105;
		case -158245263:
			return 41;
		case -147416760:
			return 150;
		case -97000889:
			return 86;
		case -91604267:
			return 159;
		case -1:
			return 0;
		case 25589062:
			return 56;
		case 39330853:
			return 125;
		case 78014060:
			return 9;
		case 81243326:
			return 69;
		case 141777963:
			return 15;
		case 183131704:
			return 167;
		case 200623432:
			return 64;
		case 221495846:
			return 165;
		case 224471061:
			return 98;
		case 233412256:
			return 77;
		case 279713143:
			return 161;
		case 285724035:
			return 54;
		case 302482713:
			return 136;
		case 347710188:
			return 89;
		case 350341162:
			return 127;
		case 447464746:
			return 129;
		case 570385280:
			return 185;
		case 593083875:
			return 80;
		case 639606025:
			return 70;
		case 654960265:
			return 95;
		case 668064801:
			return 184;
		case 671416267:
			return 107;
		case 673708797:
			return 139;
		case 694721787:
			return 20;
		case 702532569:
			return 82;
		case 720207812:
			return 168;
		case 724367341:
			return 65;
		case 726043209:
			return 58;
		case 728769635:
			return 83;
		case 756791452:
			return 149;
		case 763061271:
			return 18;
		case 775646007:
			return 102;
		case 783509408:
			return 160;
		case 794883372:
			return 176;
		case 805902559:
			return 84;
		case 817456409:
			return 100;
		case 835146902:
			return 181;
		case 841152146:
			return 93;
		case 886162534:
			return 131;
		case 937140932:
			return 173;
		case 997052462:
			return 152;
		case 1034295275:
			return 17;
		case 1040501041:
			return 122;
		case 1093424641:
			return 115;
		case 1139016431:
			return 34;
		case 1144080006:
			return 32;
		case 1171151366:
			return 43;
		case 1175961229:
			return 138;
		case 1193587137:
			return 166;
		case 1201719505:
			return 42;
		case 1203687692:
			return 10;
		case 1208331227:
			return 12;
		case 1211076549:
			return 73;
		case 1265311313:
			return 36;
		case 1268462011:
			return 37;
		case 1294394742:
			return 179;
		case 1295163466:
			return 114;
		case 1300622865:
			return 99;
		case 1312155508:
			return 144;
		case 1324420970:
			return 25;
		case 1328995848:
			return 88;
		case 1336349861:
			return 143;
		case 1336429519:
			return 140;
		case 1390582854:
			return 94;
		case 1413720692:
			return 158;
		case 1433853218:
			return 85;
		case 1452940977:
			return 87;
		case 1480202237:
			return 178;
		case 1482822775:
			return 146;
		case 1514854451:
			return 180;
		case 1522457772:
			return 147;
		case 1523275824:
			return 62;
		case 1524301922:
			return 78;
		case 1557116130:
			return 126;
		case 1557362410:
			return 116;
		case 1578015076:
			return 72;
		case 1578708778:
			return 67;
		case 1596748830:
			return 101;
		case 1608803012:
			return 128;
		case 1644017723:
			return 153;
		case 1687654048:
			return 71;
		case 1704907062:
			return 169;
		case 1726722300:
			return 135;
		case 1744707601:
			return 3;
		case 1746613639:
			return 121;
		case 1767173923:
			return 141;
		case 1798083308:
			return 24;
		case 1813411238:
			return 157;
		case 1835150954:
			return 40;
		case 1903955831:
			return 7;
		case 1913593527:
			return 53;
		case 1930815945:
			return 118;
		case 1938151130:
			return 44;
		case 1976949991:
			return 156;
		case 2028487040:
			return 52;
		case 2051020894:
			return 164;
		case 2081856931:
			return 120;
		case 2113464199:
			return 154;
		case 2126590447:
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

void func_1008(int iParam0, int iParam1)
{
	(Global_1140484->f_30603.f_2900[iParam0 /*31*/])->f_29 = ((Global_1140484->f_30603.f_2900[iParam0 /*31*/])->f_29 + iParam1);
}

void func_1009(int iParam0, int iParam1)
{
	(Global_1140484->f_30603.f_2900[iParam0 /*31*/])->f_29 = iParam1;
}

void func_1010(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_1[iVar0 /*2*/] = 0;
		(uParam0->f_1[iVar0 /*2*/])->f_1 = 0;
		iVar0++;
	}
}

int func_1011(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = ITEMDATABASE::_0x7A35A72A692BE9DB(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (ITEMDATABASE::_0x3A0B667ABFF87F6E(iParam0, iVar0, uParam2) && *uParam2 == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1012(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<12> Var0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_489(iParam1))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_1024(iParam0, *uParam2, &Var0, 0))
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

int func_1013(struct<2> Param0, var uParam2)
{
	if (!func_88(Param0))
	{
		return 0;
	}
	func_1025(uParam2);
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

int func_1014(int iParam0)
{
	if (func_1026(iParam0))
	{
		return (func_1027(iParam0) % 32);
	}
	return &Global_1275573;
}

int func_1015(int iParam0)
{
	int iVar0;

	iVar0 = func_1007(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 186)
	{
		return 0;
	}
	return 1;
}

int func_1016(int iParam0, int iParam1, int iParam2)
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

	iVar0 = func_982(iParam1, 1);
	iVar1 = func_1007(iParam0, 1);
	iVar2 = func_1003(&(Global_1140484->f_30603.f_847[iVar0 /*12*/]), 1);
	if (Global_1140484->f_30603[iVar2 /*6*/][iParam2] != iParam0)
	{
		return 0;
	}
	if (!&(Global_1140484->f_30603.f_847[iVar0 /*12*/])->f_1[iParam2 /*2*/])
	{
		return 1;
	}
	(Global_1140484->f_30603.f_847[iVar0 /*12*/])->f_1[iParam2 /*2*/] = 0;
	iVar4 = 0;
	while (iVar4 < (Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_16)
	{
		iVar3 = &(Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_6[iVar4 /*3*/];
		iVar5 = func_1028(iVar3, 1);
		if (!func_1029(iVar3))
		{
		}
		else
		{
			(Global_1140484->f_2001[iVar5 /*192*/])->f_1[iVar1] = (&(Global_1140484->f_2001[iVar5 /*192*/])->f_1[iVar1] - 1);
			(Global_1140484->f_2001[iVar5 /*192*/])->f_188 = ((Global_1140484->f_2001[iVar5 /*192*/])->f_188 - func_1030((Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_6[iVar4 /*3*/]));
			func_1031(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < (Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_28)
	{
		iVar6 = &(Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_17[iVar7 /*2*/];
		if (!func_1032(iVar6))
		{
		}
		else
		{
			iVar8 = func_1033(iVar6, 1);
			(*Global_1140484->f_18706[iVar8 /*195*/])[iVar1] = (Global_1140484->f_18706[iVar8 /*195*/][iVar1] - 1);
			if (Global_1140484->f_18706[iVar8 /*195*/][iVar1] <= 0)
			{
				MISC::_0xB909149F2BB5F6DA(&((Global_1140484->f_18706[iVar8 /*195*/])->f_187), iVar1);
			}
			if (!MISC::_0x80E9C316EF84DD81(&((Global_1140484->f_18706[iVar8 /*195*/])->f_187)))
			{
				(Global_1140484->f_18706[iVar8 /*195*/])->f_194 = 0;
				func_1034(iVar6);
			}
		}
		iVar7++;
	}
	return 1;
}

bool func_1017(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	return Param0.f_4 != 0;
}

bool func_1018(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_1015(iParam0))
	{
		return false;
	}
	if (!func_1035(iParam1))
	{
		return false;
	}
	iVar0 = func_1036(iParam1, 1);
	return &Global_1140484->f_30603.f_8667[iVar0 /*3*/] == iParam0;
}

Vector3 func_1019(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_1037(iParam0);
	if (iVar0 == -1)
	{
		vVar1 = -1;
		vVar1.f_2 = -1;
		return vVar1;
	}
	return *(Global_1140484->f_30603.f_8871[iVar0 /*3*/]);
}

int func_1020(vector3 vParam0)
{
	if (!func_1015(vParam0.x))
	{
		return 0;
	}
	if (!func_1001(vParam0.y))
	{
		return 0;
	}
	if (!func_1038(vParam0.z))
	{
		return 0;
	}
	return 1;
}

int func_1021(int iParam0, int iParam1, int iParam2)
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

	iVar0 = func_982(iParam1, 1);
	iVar1 = func_1007(iParam0, 1);
	iVar2 = func_1003(&(Global_1140484->f_30603.f_847[iVar0 /*12*/]), 1);
	if (Global_1140484->f_30603[iVar2 /*6*/][iParam2] != iParam0)
	{
		return 0;
	}
	((Global_1140484->f_30603.f_847[iVar0 /*12*/])->f_1[iParam2 /*2*/])->f_1 = Global_1275573->f_21;
	if (&(Global_1140484->f_30603.f_847[iVar0 /*12*/])->f_1[iParam2 /*2*/])
	{
		return 1;
	}
	(Global_1140484->f_30603.f_847[iVar0 /*12*/])->f_1[iParam2 /*2*/] = 1;
	iVar4 = 0;
	while (iVar4 < (Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_16)
	{
		iVar3 = &(Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_6[iVar4 /*3*/];
		iVar5 = func_1028(iVar3, 1);
		if (!func_1029(iVar3))
		{
		}
		else
		{
			(Global_1140484->f_2001[iVar5 /*192*/])->f_1[iVar1] = &(Global_1140484->f_2001[iVar5 /*192*/])->f_1[iVar1] + 1;
			(Global_1140484->f_2001[iVar5 /*192*/])->f_188 = ((Global_1140484->f_2001[iVar5 /*192*/])->f_188 + func_1030((Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_6[iVar4 /*3*/]));
			func_1039(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < (Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_28)
	{
		iVar6 = &(Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_17[iVar7 /*2*/];
		if (!func_1032(iVar6))
		{
		}
		else if (!func_1040((Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_17[iVar7 /*2*/]))
		{
		}
		else
		{
			iVar8 = func_1033(iVar6, 1);
			(*Global_1140484->f_18706[iVar8 /*195*/])[iVar1] = Global_1140484->f_18706[iVar8 /*195*/][iVar1] + 1;
			MISC::_0xE84AAC1B22A73E99(&((Global_1140484->f_18706[iVar8 /*195*/])->f_187), iVar1);
			if (!(Global_1140484->f_18706[iVar8 /*195*/])->f_194)
			{
				(Global_1140484->f_18706[iVar8 /*195*/])->f_194 = 1;
				func_1041(iVar6);
			}
		}
		iVar7++;
	}
	func_1042((Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_2);
	return 1;
}

void func_1022(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_1035(iParam0))
	{
		return;
	}
	iVar0 = func_1036(iParam0, 1);
	if (!func_1015(iParam1))
	{
		return;
	}
	if (!func_1001(iParam2))
	{
		return;
	}
	if (!func_1038(iParam3))
	{
		return;
	}
	Global_1140484->f_30603.f_8667[iVar0 /*3*/] = iParam1;
	(Global_1140484->f_30603.f_8667[iVar0 /*3*/])->f_1 = iParam2;
	(Global_1140484->f_30603.f_8667[iVar0 /*3*/])->f_2 = iParam3;
}

void func_1023(int iParam0)
{
	int iVar0;

	if (!func_1035(iParam0))
	{
		return;
	}
	iVar0 = func_1036(iParam0, 1);
	Global_1140484->f_30603.f_8667[iVar0 /*3*/] = -1;
	(Global_1140484->f_30603.f_8667[iVar0 /*3*/])->f_1 = 0;
	(Global_1140484->f_30603.f_8667[iVar0 /*3*/])->f_2 = -1;
}

int func_1024(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam1))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam0, &uParam1, iParam5, !bParam6))
	{
		return 0;
	}
	return 1;
}

void func_1025(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

int func_1026(int iParam0)
{
	int iVar0;

	iVar0 = func_982(iParam0, 1);
	if (iVar0 >= 2 && iVar0 <= 129)
	{
		return 1;
	}
	return 0;
}

int func_1027(int iParam0)
{
	int iVar0;

	iVar0 = func_982(iParam0, 1);
	if (func_1026(iParam0))
	{
		return (iVar0 - 2);
	}
	else if (func_1043(iParam0))
	{
		return (iVar0 - 130);
	}
	else if (func_1044(iParam0))
	{
		return (iVar0 - 161);
	}
	else if (func_1045(iParam0))
	{
		return (iVar0 - 162);
	}
	else if (func_1046(iParam0))
	{
		return (iVar0 - 170);
	}
	else if (func_1047(iParam0))
	{
		return (iVar0 - 150);
	}
	return -1;
}

int func_1028(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1988557796:
			return 49;
		case -1936069272:
			return 47;
		case -1926692092:
			return 42;
		case -1846416021:
			return 58;
		case -1721745367:
			return 2;
		case -1701192079:
			return 41;
		case -1659620438:
			return 50;
		case -1607530002:
			return 61;
		case -1589052195:
			return 37;
		case -1575020444:
			return 86;
		case -1572802418:
			return 67;
		case -1514969696:
			return 74;
		case -1397050499:
			return 53;
		case -1349331938:
			return 43;
		case -1345921497:
			return 29;
		case -1309904053:
			return 22;
		case -1290490489:
			return 7;
		case -1202225775:
			return 56;
		case -1080116020:
			return 23;
		case -1079033682:
			return 46;
		case -1059185085:
			return 25;
		case -1003690472:
			return 51;
		case -851757466:
			return 64;
		case -744806636:
			return 52;
		case -516489227:
			return 11;
		case -514416345:
			return 63;
		case -484540420:
			return 36;
		case -483049716:
			return 71;
		case -400566333:
			return 14;
		case -391623459:
			return 69;
		case -374018223:
			return 59;
		case -349428415:
			return 39;
		case -231535884:
			return 15;
		case -201802680:
			return 1;
		case -85606741:
			return 62;
		case -77989269:
			return 76;
		case -1:
			return 0;
		case 66478954:
			return 85;
		case 146438590:
			return 83;
		case 198507096:
			return 68;
		case 222365748:
			return 78;
		case 295732030:
			return 40;
		case 340029732:
			return 66;
		case 374652900:
			return 82;
		case 410940916:
			return 84;
		case 515706097:
			return 5;
		case 527883710:
			return 44;
		case 549685826:
			return 60;
		case 641300611:
			return 81;
		case 696211072:
			return 30;
		case 778435476:
			return 19;
		case 808428606:
			return 4;
		case 854463919:
			return 79;
		case 857703729:
			return 48;
		case 874892169:
			return 87;
		case 886907851:
			return 16;
		case 995847993:
			return 65;
		case 1061744811:
			return 6;
		case 1149992366:
			return 27;
		case 1221256507:
			return 8;
		case 1247001946:
			return 72;
		case 1275912274:
			return 45;
		case 1333289277:
			return 20;
		case 1341193408:
			return 10;
		case 1447875596:
			return 75;
		case 1495919075:
			return 70;
		case 1509485650:
			return 17;
		case 1546732394:
			return 34;
		case 1572090083:
			return 55;
		case 1608132015:
			return 38;
		case 1664203120:
			return 32;
		case 1679987408:
			return 54;
		case 1728485678:
			return 28;
		case 1742416595:
			return 3;
		case 1766148221:
			return 73;
		case 1768495249:
			return 21;
		case 1900095956:
			return 18;
		case 1946296046:
			return 12;
		case 1968069853:
			return 24;
		case 1997267529:
			return 31;
		case 2000631014:
			return 77;
		case 2019620375:
			return 57;
		case 2037894795:
			return 9;
		case 2048982041:
			return 33;
		case 2063781084:
			return 13;
		case 2082272090:
			return 35;
		case 2089824257:
			return 26;
		case 2128780735:
			return 80;
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

int func_1029(int iParam0)
{
	int iVar0;

	iVar0 = func_1028(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 87)
	{
		return 0;
	}
	return 1;
}

float func_1030(var uParam0)
{
	var uVar0;

	if (uParam0->f_2 != 0)
	{
		uVar0 = func_1048(794259616, uParam0->f_2, uParam0->f_1, "");
		return uVar0;
	}
	return uParam0->f_1;
}

void func_1031(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_1029(iParam0))
	{
		return;
	}
	iVar0 = func_1028(iParam0, 1);
	if (!func_1049(&(Global_1140484->f_2001[iVar0 /*192*/])))
	{
		return;
	}
	(*(*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])[iVar0] = ((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/][iVar0] - 1);
	if ((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/][iVar0] > 0)
	{
		return;
	}
	(*(*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])[iVar0] = 0;
	(Global_1140484->f_2001[iVar0 /*192*/])->f_191 = 0;
	if (!func_1050((Global_1140484->f_2001[iVar0 /*192*/])->f_190))
	{
		return;
	}
	iVar1 = func_1051((Global_1140484->f_2001[iVar0 /*192*/])->f_190, 1);
	((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])->f_88[iVar1] = (&((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])->f_88[iVar1] - 1);
	if (&((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])->f_88[iVar1] > 0)
	{
		return;
	}
	iVar2 = 0;
	while (iVar2 < (Global_1140484->f_41529[iVar1 /*25*/])->f_23)
	{
		if (Global_1140484->f_41529[iVar1 /*25*/][iVar2] != &Global_1140484->f_2001[iVar0 /*192*/])
		{
		}
		else
		{
			(*Global_1140484->f_41529[iVar1 /*25*/])[iVar2] = -1;
			(Global_1140484->f_41529[iVar1 /*25*/])->f_23 = ((Global_1140484->f_41529[iVar1 /*25*/])->f_23 - 1);
			(*Global_1140484->f_41529[iVar1 /*25*/])[iVar2] = Global_1140484->f_41529[iVar1 /*25*/][(Global_1140484->f_41529[iVar1 /*25*/])->f_23];
			(*Global_1140484->f_41529[iVar1 /*25*/])[(Global_1140484->f_41529[iVar1 /*25*/])->f_23] = -1;
		}
		else
		{
			iVar2++;
		}
	}
}

int func_1032(int iParam0)
{
	int iVar0;

	iVar0 = func_1033(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 61)
	{
		return 0;
	}
	return 1;
}

int func_1033(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2116044775:
			return 49;
		case -2103256604:
			return 12;
		case -2073453362:
			return 11;
		case -2041025962:
			return 60;
		case -1930487908:
			return 2;
		case -1913155192:
			return 41;
		case -1771755729:
			return 28;
		case -1751121159:
			return 50;
		case -1730553768:
			return 3;
		case -1655894020:
			return 25;
		case -1604680733:
			return 10;
		case -1511575465:
			return 34;
		case -1328991329:
			return 5;
		case -1136429013:
			return 45;
		case -1115905480:
			return 31;
		case -1026481003:
			return 6;
		case -966751997:
			return 13;
		case -824728332:
			return 33;
		case -718742742:
			return 55;
		case -698163919:
			return 32;
		case -662966589:
			return 1;
		case -549693655:
			return 14;
		case -488644714:
			return 4;
		case -430422799:
			return 36;
		case -350459285:
			return 61;
		case -268774736:
			return 40;
		case -220644763:
			return 26;
		case -199042163:
			return 56;
		case -191252842:
			return 22;
		case -166765081:
			return 51;
		case -106166013:
			return 19;
		case -1:
			return 0;
		case 50982971:
			return 17;
		case 125946764:
			return 20;
		case 367160929:
			return 57;
		case 482459685:
			return 24;
		case 492808644:
			return 18;
		case 539654946:
			return 23;
		case 656937467:
			return 39;
		case 692490127:
			return 15;
		case 718630298:
			return 52;
		case 785261183:
			return 48;
		case 793826854:
			return 21;
		case 892655276:
			return 46;
		case 907911269:
			return 27;
		case 955977457:
			return 43;
		case 966561884:
			return 7;
		case 988751276:
			return 30;
		case 1159158432:
			return 58;
		case 1204983685:
			return 37;
		case 1242495215:
			return 9;
		case 1254069395:
			return 59;
		case 1341326366:
			return 54;
		case 1348456703:
			return 35;
		case 1442295985:
			return 38;
		case 1527078018:
			return 42;
		case 1565429580:
			return 53;
		case 1696309427:
			return 44;
		case 1870637439:
			return 16;
		case 2067881273:
			return 8;
		case 2093700568:
			return 47;
		case 2113555978:
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

void func_1034(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case -1730553768:
		case -488644714:
			func_1052();
			break;
		case -2103256604:
			func_1053();
			break;
		case 692490127:
			PED::_REMOVE_PED_WOUND_EFFECT(iVar0, 0f);
			break;
		case 50982971:
			PED::_0xA5950E16B8F31052(iVar0, 0, 0);
			GRAPHICS::_0xC5CB91D65852ED7E(func_1054(iParam0));
			break;
		case 1870637439:
			GRAPHICS::_0xC5CB91D65852ED7E(func_1054(iParam0));
			break;
		case 492808644:
			GRAPHICS::_0xC5CB91D65852ED7E(func_1054(iParam0));
			break;
		case 125946764:
			ATTRIBUTE::_0x3FC4C027FD0936F4(5);
			func_137(105, 1);
			break;
		case -106166013:
			GRAPHICS::_0xC5CB91D65852ED7E(func_1054(iParam0));
			break;
		case 1204983685:
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 19);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 1);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 18);
			break;
		case 1442295985:
			NETWORK::_0x442B4347B6EC36E8(iVar0, 0, true);
			break;
		case 656937467:
			ATTRIBUTE::_0x3FC4C027FD0936F4(15);
			break;
		case -430422799:
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 19);
			break;
		case 539654946:
			PLAYER::_0x5F8E0303C229C84B(iVar1, "");
			break;
		case -1655894020:
		case 482459685:
		case 907911269:
			func_1056(func_1055(iParam0));
			break;
		case -1771755729:
		case -220644763:
			PLAYER::_0x768E81AE285A4B67(iVar1, 0);
			PLAYER::_0xE910932F4B30BE23(iVar1);
			PLAYER::_0x0E9057A9DA78D0F8(iVar1, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 0);
			break;
		case 2113555978:
			GRAPHICS::_0xAF4D239B8903FCBE();
			PLAYER::_0x768E81AE285A4B67(iVar1, 0);
			PLAYER::_0xE910932F4B30BE23(iVar1);
			PLAYER::_0x0E9057A9DA78D0F8(iVar1, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 0);
			break;
		case 785261183:
			PLAYER::_0xCE285A4413B00B7F(iVar1, 1);
			break;
		case 793826854:
			func_1057();
			break;
		case -166765081:
		case 718630298:
		case 1341326366:
		case 1565429580:
			func_1049(17);
			break;
		case -824728332:
			func_1049(16);
			break;
	}
}

int func_1035(int iParam0)
{
	int iVar0;

	iVar0 = func_1036(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return 0;
	}
	return 1;
}

int func_1036(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1290685708:
			return 1;
		case -1038992817:
			return 5;
		case -950874556:
			return 4;
		case -290151400:
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

int func_1037(int iParam0)
{
	int iVar0;
	struct<31> Var1;
	struct<31> Var32;
	int iVar63;
	int iVar64;
	int iVar65;

	iVar0 = func_1058(iParam0);
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
	while (iVar65 < Global_1140484->f_30603.f_10924)
	{
		iVar64 = func_1007(&(Global_1140484->f_30603.f_8871[iVar65 /*3*/]), 1);
		if ((Global_1140484->f_30603.f_2900[iVar64 /*31*/])->f_4 != iParam0)
		{
		}
		else if (&Global_1140484->f_30603.f_8871[iVar65 /*3*/] == iVar0)
		{
		}
		else if (!func_1059(&(Global_1140484->f_30603.f_8871[iVar65 /*3*/]), (Global_1140484->f_30603.f_8871[iVar65 /*3*/])->f_1))
		{
		}
		else
		{
			Var1 = { func_1060(&(Global_1140484->f_30603.f_8871[iVar65 /*3*/])) };
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

int func_1038(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		return 0;
	}
	return 1;
}

void func_1039(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_1029(iParam0))
	{
		return;
	}
	iVar0 = func_1028(iParam0, 1);
	if (!func_1049(&(Global_1140484->f_2001[iVar0 /*192*/])))
	{
		return;
	}
	(*(*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])[iVar0] = (*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/][iVar0] + 1;
	(Global_1140484->f_2001[iVar0 /*192*/])->f_191 = 1;
	if (!func_1050((Global_1140484->f_2001[iVar0 /*192*/])->f_190))
	{
		return;
	}
	iVar1 = func_1051((Global_1140484->f_2001[iVar0 /*192*/])->f_190, 1);
	((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])->f_88[iVar1] = &((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])->f_88[iVar1] + 1;
	iVar2 = 0;
	while (iVar2 < (Global_1140484->f_41529[iVar1 /*25*/])->f_23)
	{
		if (Global_1140484->f_41529[iVar1 /*25*/][iVar2] == &Global_1140484->f_2001[iVar0 /*192*/])
		{
			return;
		}
		iVar2++;
	}
	(*Global_1140484->f_41529[iVar1 /*25*/])[(Global_1140484->f_41529[iVar1 /*25*/])->f_23] = &Global_1140484->f_2001[iVar0 /*192*/];
	(Global_1140484->f_41529[iVar1 /*25*/])->f_23++;
}

int func_1040(var uParam0)
{
	var uVar0;

	if (uParam0->f_1 != 0)
	{
		uVar0 = func_1061(794259616, uParam0->f_1, 1, "");
		return uVar0;
	}
	return 1;
}

void func_1041(int iParam0)
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
		case -488644714:
			func_1052();
			break;
		case -2103256604:
			func_1053();
			break;
		case 692490127:
			PED::_SET_PED_WOUND_EFFECT(iVar0, 2, 14411, 0f, 0f, 0f, 0f, 0f, -1f, 1f);
			break;
		case 50982971:
			PED::_0xA5950E16B8F31052(iVar0, 1, 0);
			GRAPHICS::ANIMPOSTFX_PLAY(func_1054(iParam0));
			break;
		case 1870637439:
			GRAPHICS::ANIMPOSTFX_PLAY(func_1054(iParam0));
			break;
		case 492808644:
			GRAPHICS::ANIMPOSTFX_PLAY(func_1054(iParam0));
			break;
		case 125946764:
			ATTRIBUTE::_0xFB6E111908502871(5);
			func_137(104, 1);
			break;
		case -106166013:
			GRAPHICS::ANIMPOSTFX_PLAY(func_1054(iParam0));
			break;
		case 1204983685:
			break;
		case 656937467:
			ATTRIBUTE::_0xFB6E111908502871(15);
			break;
		case 539654946:
			PLAYER::_0x5F8E0303C229C84B(iVar1, "focusfire");
			break;
		case 482459685:
			iVar2 = func_1055(iParam0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_1062(iParam0, 0));
			func_1063(iVar2, 0, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_1062(iParam0, 1));
			func_1063(iVar2, 1, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_1062(iParam0, 2));
			func_1063(iVar2, 2, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_1062(iParam0, 3));
			func_1063(iVar2, 2, 1, iVar3, 0);
			break;
		case -1655894020:
			iVar2 = func_1055(iParam0);
			func_1063(iVar2, 3, 1, -1, 1);
			break;
		case 907911269:
			iVar2 = func_1055(iParam0);
			func_1063(iVar2, 4, 1, -1, 0);
			break;
		case -220644763:
			PLAYER::_0x768E81AE285A4B67(iVar1, 1014693585);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 8);
			PLAYER::_0x131E294EF60160DF(iVar1, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 1);
			break;
		case -1771755729:
			PLAYER::_0x768E81AE285A4B67(iVar1, 1936842089);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 8);
			PLAYER::_0x131E294EF60160DF(iVar1, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 1);
			break;
		case 2113555978:
			GRAPHICS::_0x249CD6B7285536F2(0f, 2f, 2f);
			PLAYER::_0x768E81AE285A4B67(iVar1, 1979474018);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 25);
			PLAYER::_0x263D69767F76059C(iVar1, 2);
			break;
		case 785261183:
			PLAYER::_0xCE285A4413B00B7F(iVar1, 0);
			break;
		case 793826854:
			func_1064();
			break;
		case -166765081:
		case 718630298:
		case 1341326366:
		case 1565429580:
			func_1049(17);
			break;
		case -824728332:
			func_1049(16);
			break;
	}
}

void func_1042(int iParam0)
{
	char* sVar0;
	char* sVar1;

	if (iParam0 == 0)
	{
		return;
	}
	sVar0 = func_1065(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	sVar1 = func_1066(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return;
	}
	AUDIO::_PLAY_SOUND_FROM_ENTITY(sVar0, Global_1275573->f_8, sVar1, 0, 0, 0);
}

int func_1043(int iParam0)
{
	int iVar0;

	iVar0 = func_982(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return 1;
	}
	return 0;
}

int func_1044(int iParam0)
{
	int iVar0;

	iVar0 = func_982(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return 1;
	}
	return 0;
}

int func_1045(int iParam0)
{
	int iVar0;

	iVar0 = func_982(iParam0, 1);
	if (iVar0 >= 162 && iVar0 <= 169)
	{
		return 1;
	}
	return 0;
}

int func_1046(int iParam0)
{
	int iVar0;

	iVar0 = func_982(iParam0, 1);
	if (iVar0 >= 170 && iVar0 <= 170)
	{
		return 1;
	}
	return 0;
}

int func_1047(int iParam0)
{
	int iVar0;

	iVar0 = func_982(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 160)
	{
		return 1;
	}
	return 0;
}

float func_1048(int iParam0, int iParam1, float fParam2, char* sParam3)
{
	struct<11> Var0;
	float fVar22;

	if (func_1067(iParam0, iParam1, &Var0))
	{
		fVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_FLOAT(iParam0, iParam1, Var0.f_10.f_1);
	}
	else
	{
		fVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_FLOAT(iParam0, iParam1, fParam2);
	}
	return fVar22;
}

int func_1049(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 21)
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		return 1;
	}
	if (MISC::_0x8F4F050054005C27(&(Global_1140484->f_1998), iParam0))
	{
		return 1;
	}
	if (Global_1140484->f_1997 >= 21)
	{
		return 0;
	}
	Global_1140484->f_1975[Global_1140484->f_1997] = iParam0;
	Global_1140484->f_1997++;
	return 1;
}

int func_1050(int iParam0)
{
	int iVar0;

	iVar0 = func_1051(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 5)
	{
		return 0;
	}
	return 1;
}

int func_1051(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1745889187:
			return 3;
		case -1016837116:
			return 5;
		case 0:
			return 0;
		case 370243254:
			return 4;
		case 1213888609:
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

void func_1052()
{
	bool bVar0;
	bool bVar1;

	if ((Global_1140484->f_18706[3 /*195*/])->f_194)
	{
		bVar0 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1275573->f_8, 550, bVar0);
	if ((Global_1140484->f_18706[4 /*195*/])->f_194)
	{
		bVar1 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1275573->f_8, 556, bVar1);
}

void func_1053()
{
	bool bVar0;

	bVar0 = false;
	if ((Global_1140484->f_18706[12 /*195*/])->f_194)
	{
		bVar0 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1275573->f_8, 263, bVar0);
}

char* func_1054(int iParam0)
{
	switch (iParam0)
	{
		case 1870637439:
			return "MP_ArrowDrain";
		case 492808644:
			return "MP_ArrowDisorient";
		case 50982971:
			return "MP_ArrowTracking";
		case -106166013:
			return "MP_MoonshineToxic";
		default:
			break;
	}
	return "";
}

int func_1055(int iParam0)
{
	switch (iParam0)
	{
		case 482459685:
			return -843895567;
		case -1655894020:
			return -1655894020;
		case 907911269:
			return 907911269;
		default:
			break;
	}
	return 0;
}

void func_1056(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (((*Global_1182208)[iVar0 /*8*/])->f_5 == iParam0)
		{
			((*Global_1182208)[iVar0 /*8*/])->f_7 = 1;
			((*Global_1182208)[iVar0 /*8*/])->f_5 = 0;
		}
		iVar0++;
	}
}

void func_1057()
{
	PED::SET_PED_CONFIG_FLAG(Global_1275573->f_8, 305, false);
	PED::_0x801917E7D7BCE418(Global_1275573->f_8);
}

int func_1058(int iParam0)
{
	int iVar0;

	if (!func_1035(iParam0))
	{
		return -1;
	}
	iVar0 = func_1036(iParam0, 1);
	return &(Global_1140484->f_30603.f_8667[iVar0 /*3*/]);
}

int func_1059(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<31> Var4;

	if (!func_1015(iParam0))
	{
		return 0;
	}
	iVar0 = func_1007(iParam0, 1);
	iVar2 = (Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4;
	if (func_1017(*(Global_1140484->f_30603.f_2900[iVar0 /*31*/])))
	{
		iVar3 = &Global_1140484->f_30603.f_8667[func_1036(iVar2, 1) /*3*/];
		Var4 = { func_1060(iVar3) };
		if (iVar3 != iParam0 && (Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_5 <= Var4.f_5)
		{
			return 0;
		}
	}
	switch (&Global_1140484->f_30603.f_2900[iVar0 /*31*/])
	{
		case -1606735498:
		case -1455211650:
		case -1324410551:
		case -1276912520:
		case -1028878953:
		case -992973338:
		case -971275364:
		case -932644421:
		case -590004554:
		case -528257357:
		case -193993646:
		case -166662497:
		case -23641105:
		case 37083370:
		case 52193493:
		case 180258367:
		case 429965152:
		case 461381338:
		case 522523138:
		case 589907865:
		case 979390476:
		case 1028557598:
		case 1154303630:
		case 1254162401:
		case 1269394302:
		case 1305415806:
		case 1461424861:
		case 1691008805:
		case 1759133423:
		case 1810352391:
		case 1915097582:
		case 1921800945:
		case 2046842849:
		case 2116793692:
			return 1;
		case 1245579893:
			if (!func_1068() && !func_1069())
			{
				return 0;
			}
			return 1;
		case -2010146101:
			if (!func_1068())
			{
				return 0;
			}
			return 1;
		case -2139108927:
			iVar1 = func_1014(iParam1);
			if (iVar1 == &Global_1275573)
			{
				return 0;
			}
			return 1;
		case -2129621195:
			iVar1 = func_1014(iParam1);
			if (iVar1 == &Global_1275573)
			{
				return 0;
			}
			if (!GANG::_0x424B17A7DC5C90BC(&(Global_1275573->f_154[&Global_1275573])))
			{
				return 0;
			}
			if (!GANG::_0x81FB74C83C2ED69F(&(Global_1275573->f_154[iVar1])))
			{
				return 0;
			}
			return 1;
		case 190804938:
			iVar1 = func_1014(iParam1);
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(&(Global_1275573->f_154[iVar1])))
			{
				return 0;
			}
			if (iVar1 != &Global_1275573 && !func_747(&(Global_1275573->f_154[iVar1])))
			{
				return 0;
			}
			if (!func_1070(512, iVar1))
			{
				return 0;
			}
			return 1;
		case -1503245593:
			if (!&Global_1954472->f_1616[8])
			{
				return 0;
			}
			iVar1 = func_1014(iParam1);
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(&(Global_1275573->f_154[iVar1])))
			{
				return 0;
			}
			if (PED::_0x0C31C51168E80365(Global_1275573->f_8) != PLAYER::GET_PLAYER_PED(&(Global_1275573->f_154[iVar1])))
			{
				return 0;
			}
			return 1;
		default:
			break;
	}
	return 0;
}

struct<31> func_1060(int iParam0)
{
	int iVar0;

	iVar0 = func_1007(iParam0, 1);
	return *(Global_1140484->f_30603.f_2900[iVar0 /*31*/]);
}

bool func_1061(int iParam0, int iParam1, bool bParam2, char* sParam3)
{
	struct<11> Var0;
	bool bVar22;

	if (func_1067(iParam0, iParam1, &Var0))
	{
		bVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_BOOL(iParam0, iParam1, Var0.f_10.f_2);
	}
	else
	{
		bVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_BOOL(iParam0, iParam1, bParam2);
	}
	return bVar22;
}

char* func_1062(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 482459685:
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

void func_1063(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Global_1182208[iVar0 /*8*/]) && !((*Global_1182208)[iVar0 /*8*/])->f_6)
		{
			((*Global_1182208)[iVar0 /*8*/])->f_5 = iParam0;
			((*Global_1182208)[iVar0 /*8*/])->f_1 = iParam1;
			((*Global_1182208)[iVar0 /*8*/])->f_2 = iParam2;
			((*Global_1182208)[iVar0 /*8*/])->f_3 = iParam3;
			((*Global_1182208)[iVar0 /*8*/])->f_4 = iParam4;
			((*Global_1182208)[iVar0 /*8*/])->f_6 = 1;
			return;
		}
		iVar0++;
	}
}

void func_1064()
{
	PED::SET_PED_CONFIG_FLAG(Global_1275573->f_8, 305, true);
	PED::_0x05CE6AF4DF071D23(Global_1275573->f_8, 0.7f);
}

char* func_1065(int iParam0)
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

char* func_1066(int iParam0)
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

int func_1067(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;
	int iVar7;

	Var0 = -178401592;
	Var0.f_1 = iParam0;
	Var0.f_2 = joaat("name");
	Var0.f_3 = 1;
	Var0.f_4 = iParam1;
	DATAFILE::_0x91DED5DD64BB2691(&Var0);
	if (DATAFILE::_0x44B3A36933AC009C(&iVar7, &Var0, joaat("name")))
	{
		*uParam2 = iParam0;
		uParam2->f_9 = iParam1;
		StringCopy(&(uParam2->f_1), "", 64);
		StringIntConCat(&(uParam2->f_1), iVar7, 64);
		DATAFILE::_0x44B3A36933AC009C(&iVar7, &Var0, joaat("type"));
		uParam2->f_10.f_3 = func_1071(iVar7);
		uParam2->f_14.f_3 = uParam2->f_10.f_3;
		uParam2->f_18.f_3 = uParam2->f_10.f_3;
		switch (uParam2->f_10.f_3)
		{
			case 0:
				if (!DATAFILE::_0x52FC26D2D2FC2987(&(uParam2->f_10), &Var0, joaat("default")))
				{
				}
				break;
			case 1:
				if (!DATAFILE::_0xB2B42607F7867576(&(uParam2->f_10.f_1), &Var0, joaat("default")))
				{
				}
				break;
			case 2:
				if (!DATAFILE::_0xA63CD20F19B961AB(&(uParam2->f_10.f_2), &Var0, joaat("default")))
				{
				}
				break;
		}
		switch (uParam2->f_14.f_3)
		{
			case 0:
				DATAFILE::_0x52FC26D2D2FC2987(&(uParam2->f_14), &Var0, joaat("min"));
				break;
			case 1:
				DATAFILE::_0xB2B42607F7867576(&(uParam2->f_14.f_1), &Var0, joaat("min"));
				break;
			case 2:
				DATAFILE::_0xA63CD20F19B961AB(&(uParam2->f_14.f_2), &Var0, joaat("min"));
				break;
		}
		switch (uParam2->f_18.f_3)
		{
			case 0:
				DATAFILE::_0x52FC26D2D2FC2987(&(uParam2->f_18), &Var0, joaat("max"));
				break;
			case 1:
				DATAFILE::_0xB2B42607F7867576(&(uParam2->f_18.f_1), &Var0, joaat("max"));
				break;
			case 2:
				DATAFILE::_0xA63CD20F19B961AB(&(uParam2->f_18.f_2), &Var0, joaat("max"));
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
		return 1;
	}
	return 0;
}

bool func_1068()
{
	return Global_1572887->f_6;
}

int func_1069()
{
	if (!&Global_1048577)
	{
		return 0;
	}
	if (!func_88(func_87(0)))
	{
		return 0;
	}
	if (&Global_3145858 != -504335712)
	{
		return 0;
	}
	if (func_1072(Global_524288->f_39792))
	{
		return 1;
	}
	return 0;
}

bool func_1070(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1099294->f_3 && iParam0) != 0;
	}
	return (((*Global_1097610)[iParam1 /*51*/])->f_3 && iParam0) != 0;
}

int func_1071(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case joaat("int"):
			iVar0 = 0;
			break;
		case joaat("float"):
			iVar0 = 1;
			break;
		case joaat("bool"):
			iVar0 = 2;
			break;
	}
	return iVar0;
}

bool func_1072(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

