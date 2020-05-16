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
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()
{
	struct<253> Var0;
	bool bVar255;
	float fVar256;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_14 = "props_misc@campfires@5_logs";
	sLocal_15 = "Script_PropCampfire";
	Var0 = 6;
	Var0.f_7 = 6;
	Var0.f_26.f_29 = 1;
	Var0.f_57 = 7;
	Var0.f_57.f_21 = -1;
	Var0.f_57.f_22 = 1;
	Var0.f_57.f_23 = 1;
	Var0.f_57.f_36 = 1;
	Var0.f_57.f_37 = -1;
	Var0.f_57.f_41 = 4;
	Var0.f_57.f_46 = 4;
	Var0.f_57.f_57 = 1;
	Var0.f_150 = 16191;
	Var0.f_151 = 131136;
	Var0.f_154 = -1;
	Var0.f_156 = -1;
	Var0.f_162 = 18;
	Var0.f_186 = 6;
	Var0.f_187 = -1;
	Var0.f_191 = -2016812721;
	Var0.f_197 = -1;
	Var0.f_207 = -1;
	Var0.f_208 = 1;
	Var0.f_210 = 1085378666;
	Var0.f_212.f_9 = 1084227584;
	Var0.f_212.f_10 = 1073741824;
	Var0.f_212.f_30 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		SCRIPTS::_0xE7282390542F570D(vScriptParam_0.x);
		func_1(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(vScriptParam_0.y))
	{
		SCRIPTS::_0xE7282390542F570D(vScriptParam_0.x);
		func_1(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	Var0.f_249 = { TASK::_GET_SCENARIO_POINT_COORDS(vScriptParam_0.y, 1) };
	Var0.f_252 = TASK::_GET_SCENARIO_POINT_HEADING(vScriptParam_0.y, 1);
	if (func_2(&Var0))
	{
		SCRIPTS::_0xE7282390542F570D(vScriptParam_0.x);
		func_1(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	bVar255 = false;
	while (!func_3(1) && !bVar255)
	{
		switch (Var0.f_211)
		{
			case 0:
				fVar256 = func_4(Global_35, Var0.f_249, 1);
				if (!func_5() || fVar256 < 6400f)
				{
					func_6(&(Var0.f_151), 131072);
					func_7(&Var0, vScriptParam_0.z);
					STREAMING::REQUEST_MODEL(Var0.f_210, false);
					func_8(&(Var0.f_211), 1);
				}
				break;
			case 1:
				if (STREAMING::HAS_MODEL_LOADED(Var0.f_210))
				{
					func_8(&(Var0.f_211), 2);
				}
				break;
			case 2:
				Var0.f_152 = OBJECT::CREATE_OBJECT(Var0.f_210, Var0.f_249, false, false, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Var0.f_152, Var0.f_252);
				Var0.f_248 = VOLUME::_0x0EB78C2B156635B1(665633627, Var0.f_249, 0f, 0f, 0f, 0.3f, 0.3f, 2f);
				func_8(&(Var0.f_211), 3);
				break;
			case 3:
				if (func_2(&Var0))
				{
					bVar255 = true;
				}
				else
				{
					fVar256 = func_4(Global_35, Var0.f_249, 1);
					if (fVar256 < func_9() || !Var0.f_212.f_34)
					{
						func_10(&(Var0.f_212), &(Var0.f_152));
					}
					if (!func_11(&Global_1935630, 2097152))
					{
						if (fVar256 < func_12())
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
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_152))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_152));
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_248))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_248);
	}
	func_14(uParam0, 1);
}

int func_2(var uParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = MISC::GET_GAME_TIMER();
	if ((iVar0 - uParam0->f_253) > 1000)
	{
		uVar1 = func_15(uParam0->f_249);
		if (func_16(uVar1, 8))
		{
			return 1;
		}
		if (func_16(uVar1, 1) || uParam0->f_254)
		{
			if (func_16(uParam0->f_150, 8192))
			{
				func_17(&(uParam0->f_150), 64);
			}
		}
		else if (func_16(uVar1, 2) && !uParam0->f_254)
		{
			if (!func_16(uParam0->f_150, 8192))
			{
				func_17(&(uParam0->f_150), 128);
			}
		}
		else if (func_18(0, 0, 1) && !func_19())
		{
			if (func_16(uParam0->f_150, 8192))
			{
				func_17(&(uParam0->f_150), 64);
			}
		}
		else if (!uParam0->f_254)
		{
			if (!func_16(uParam0->f_150, 8192))
			{
				func_17(&(uParam0->f_150), 128);
			}
		}
		if (func_16(uVar1, 32))
		{
			func_20(uParam0, 1, 0, 0, 0, 0, 0);
		}
		else if (func_16(uVar1, 4))
		{
			func_20(uParam0, 0, 1, 0, 0, 0, 0);
		}
		else if (func_16(uVar1, 16))
		{
			func_20(uParam0, 0, 0, 1, 0, 0, 0);
		}
		else if (func_16(uVar1, 64))
		{
			func_20(uParam0, 0, 0, 0, 1, 0, 0);
		}
		else if (func_16(uVar1, 128))
		{
			func_20(uParam0, 0, 0, 0, 0, 1, 0);
		}
		else if (func_16(uVar1, 256))
		{
			func_20(uParam0, 0, 0, 0, 0, 0, 1);
		}
		uParam0->f_253 = iVar0;
	}
	return 0;
}

int func_3(bool bParam0)
{
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
	return func_21(vVar0, vParam1);
}

bool func_5()
{
	return (Global_1894899 & 1 != 0 && func_22() != -1);
}

void func_6(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_7(var uParam0, int iParam1)
{
	if (func_23() == -1)
	{
		if (!func_24(4))
		{
			func_6(&(uParam0->f_150), 8075);
			func_17(&(uParam0->f_150), 64);
			uParam0->f_254 = 1;
			return;
		}
	}
	switch (iParam1)
	{
		case -1189729144:
			func_6(&(uParam0->f_150), 6402);
			if (func_25(1510719693 /* GXTEntry: "Coffee Percolator" */, 1, 0))
			{
				func_17(&(uParam0->f_150), 1);
			}
			break;
		case 1403995973:
			func_6(&(uParam0->f_150), 267);
			if (func_25(1510719693 /* GXTEntry: "Coffee Percolator" */, 1, 0))
			{
				func_17(&(uParam0->f_150), 1);
			}
			break;
		case -2140664311:
			func_6(&(uParam0->f_150), 7435);
			if (func_25(1510719693 /* GXTEntry: "Coffee Percolator" */, 1, 0))
			{
				func_17(&(uParam0->f_150), 1);
			}
			break;
		case -1973379805:
			func_6(&(uParam0->f_150), 7435);
			if (func_25(1510719693 /* GXTEntry: "Coffee Percolator" */, 1, 0))
			{
				func_17(&(uParam0->f_150), 1);
			}
			break;
		case -886679600:
			func_6(&(uParam0->f_150), 6402);
			if (func_25(1510719693 /* GXTEntry: "Coffee Percolator" */, 1, 0))
			{
				func_17(&(uParam0->f_150), 1);
			}
			break;
		case 1228786282:
			func_6(&(uParam0->f_150), 8075);
			func_17(&(uParam0->f_150), 64);
			uParam0->f_254 = 1;
			break;
		case -1241326640:
			func_6(&(uParam0->f_150), 8075);
			func_17(&(uParam0->f_150), 64);
			uParam0->f_254 = 1;
			break;
		case 1588618021:
			func_6(&(uParam0->f_150), 8075);
			func_17(&(uParam0->f_150), 64);
			uParam0->f_212.f_4 = 1;
			uParam0->f_254 = 1;
			break;
		case 1127868139:
			func_6(&(uParam0->f_150), 8075);
			func_17(&(uParam0->f_150), 64);
			uParam0->f_212.f_4 = 1;
			uParam0->f_254 = 1;
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
	if (func_11(&Global_1935630, 2097152))
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
	func_26(uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		fVar1 = MISC::GET_RAIN_LEVEL();
		if ((fVar1 > 0f && uParam0->f_9 >= 1f) && !uParam0->f_3)
		{
			func_27(uParam0, 4);
		}
		else if (uParam0->f_5)
		{
			func_27(uParam0, 0);
		}
		else if (uParam0->f_2)
		{
			func_27(uParam0, 2);
		}
		else if (uParam0->f_3)
		{
			func_27(uParam0, 5);
		}
		else if (uParam0->f_6)
		{
			func_27(uParam0, 6);
		}
		else if (uParam0->f_7)
		{
			func_27(uParam0, 7);
		}
		else if (uParam0->f_8)
		{
			func_27(uParam0, 8);
		}
		else if (func_29(&(uParam0->f_31), func_28()))
		{
			func_30(uParam0);
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
				func_27(uParam0, 0);
				STREAMING::REQUEST_ANIM_DICT(sLocal_14);
				STREAMING::_0x2B6529C54D29037A(sLocal_15);
			}
			else
			{
				if (uParam0->f_5)
				{
					func_27(uParam0, 0);
				}
				else if (uParam0->f_2)
				{
					func_27(uParam0, 2);
				}
				else if (uParam0->f_3)
				{
					func_27(uParam0, 5);
				}
				else if (uParam0->f_6)
				{
					func_27(uParam0, 6);
				}
				else if (uParam0->f_7)
				{
					func_27(uParam0, 7);
				}
				else if (uParam0->f_8)
				{
					func_27(uParam0, 8);
				}
				else
				{
					func_27(uParam0, 0);
				}
				uParam0->f_35 = 1;
			}
			GRAPHICS::_0xAB72C67163DC4DB4(*uParam0, 20);
			GRAPHICS::_SET_LIGHTS_COLOR_FOR_ENTITY(*uParam0, 255, 50, 9);
			uParam0->f_29 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("ent_amb_campfire_dynamic", *uParam0, 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_29))
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Flames", uParam0->f_27, false);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Embers", uParam0->f_25, false);
			}
			uParam0->f_30 = 3;
			break;
		case 3:
			if (!uParam0->f_1)
			{
				uParam0->f_30 = 4;
			}
			else if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_14) && STREAMING::_0x2C04D89A0FB4E244(sLocal_15))
			{
				TASK::TASK_MOVE_NETWORK_BY_NAME(*uParam0, sLocal_15, 0f, false, sLocal_14, 128);
				uParam0->f_30 = 5;
			}
			func_31(&(uParam0->f_31));
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
	vector3 vVar1;
	int iVar4;
	char* sVar5;

	if (!func_32(Global_35, 0))
	{
		return 0;
	}
	func_33(uParam0);
	if (uParam0->f_153 > 4 && uParam0->f_153 < 13)
	{
		func_34(0);
	}
	if (uParam0->f_153 > 3)
	{
		if (((uParam0->f_153 != 8 && uParam0->f_153 != 13) && uParam0->f_153 != 4) && uParam0->f_154 != 5)
		{
			CAM::_0x18C3DFAC458783BB();
			func_35(uParam0);
		}
	}
	else
	{
		if (uParam0->f_153 == 3)
		{
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
			{
				iVar0 = func_36(uParam0);
				if (iVar0 >= 0 && iVar0 <= 3)
				{
					func_35(uParam0);
				}
			}
			else if (CAM::_0x927B810E43E99932(&(uParam0->f_26)))
			{
				CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_26));
			}
		}
		if (func_16(uParam0->f_151, 64))
		{
			HUD::_DISPLAY_HUD_COMPONENT(2011163970);
			func_6(&(uParam0->f_151), 64);
		}
	}
	if (func_16(uParam0->f_151, 2097152))
	{
		if (func_37(Global_35, 1, 0, 0) != joaat("weapon_unarmed"))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 320193935))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
				func_6(&(uParam0->f_151), 2097152);
			}
		}
	}
	switch (uParam0->f_153)
	{
		case 0:
			if (func_38(uParam0))
			{
				func_39(uParam0);
			}
			func_40(uParam0);
			uParam0->f_57.f_31 = 1;
			uParam0->f_57.f_32 = func_16(uParam0->f_150, 8);
			func_41(uParam0, 1);
			break;
		case 1:
			if (func_38(uParam0))
			{
				func_39(uParam0);
			}
			if (func_42(uParam0))
			{
				func_41(uParam0, 2);
			}
			break;
		case 2:
			if (func_38(uParam0))
			{
				func_39(uParam0);
			}
			if (func_43(uParam0))
			{
				func_41(uParam0, 3);
			}
			break;
		case 3:
			if (func_38(uParam0))
			{
				AUDIO::_0x9428447DED71FC7E("Player_Campfire_Scenes");
				func_44(&(uParam0->f_57), 1);
				func_45(&(uParam0->f_57), 2);
				func_39(uParam0);
			}
			func_46(uParam0);
			if (bParam1)
			{
				return 1;
			}
			func_47(8388608);
			if (!func_16(uParam0->f_150, 8192))
			{
				func_48(2048);
			}
			else
			{
				func_49(2048);
			}
			if (!func_16(uParam0->f_151, 131072))
			{
				func_48(1024);
			}
			else
			{
				if (!TASK::_DOES_SCENARIO_POINT_EXIST(uParam0[5]))
				{
					if (func_50(uParam0->f_188))
					{
						uParam0->f_188 = { 2.526f, 2.68f, 0f };
					}
					vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(uParam0->f_152, true, false), ENTITY::GET_ENTITY_HEADING(uParam0->f_152), uParam0->f_188) };
					*(uParam0->f_7[5 /*3*/]) = { vVar1 + Vector(1f, 0f, 0f) };
					(*uParam0)[5] = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vVar1, uParam0->f_191, 1.5f, 0, 0);
				}
				func_49(1024);
			}
			if ((MISC::GET_GAME_TIMER() - uParam0->f_194) >= 500)
			{
				if (func_51(uParam0))
				{
					func_17(&(uParam0->f_151), 4194304);
				}
				else
				{
					func_6(&(uParam0->f_151), 4194304);
				}
				uParam0->f_194 = MISC::GET_GAME_TIMER();
			}
			if (func_52(Global_35, uParam0->f_152, 1) > 36f)
			{
				func_53(uParam0);
				func_54(uParam0);
				func_55(8388608);
				if (!func_16(uParam0->f_151, 131072))
				{
					func_49(1024);
				}
				func_41(uParam0, 4);
				if (CAM::_0x927B810E43E99932(&(uParam0->f_26)))
				{
					CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_26));
				}
				return 0;
			}
			if (func_56(2097152) || func_16(uParam0->f_150, 64))
			{
				if (func_16(uParam0->f_150, 8192))
				{
					func_57(uParam0, 0);
					func_6(&(uParam0->f_150), 8192);
				}
				func_55(2097152);
				func_6(&(uParam0->f_150), 64);
			}
			else if (func_56(4194304) || func_16(uParam0->f_150, 128))
			{
				if (!func_16(uParam0->f_150, 8192))
				{
					func_57(uParam0, 1);
					func_17(&(uParam0->f_150), 8192);
				}
				func_55(4194304);
				func_6(&(uParam0->f_150), 128);
			}
			func_58(uParam0);
			if (func_16(uParam0->f_151, 1))
			{
				func_41(uParam0, 6);
				uParam0->f_157 = 10;
				func_17(&(uParam0->f_151), 64);
				HUD::_HIDE_HUD_COMPONENT(2011163970);
			}
			else
			{
				uParam0->f_154 = func_36(uParam0);
				if (uParam0->f_154 != -1 && uParam0->f_154 != 5)
				{
					func_59();
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
				}
				if ((func_60(uParam0->f_154 == 4) && uParam0->f_154 != -1) || (((func_16(uParam0->f_151, 131072) && func_56(268435456)) && func_56(16777216)) && Global_1392040->f_2))
				{
					uParam0->f_155 = func_61();
					HUD::_HIDE_HUD_COMPONENT(2011163970);
					func_17(&(uParam0->f_151), 64);
					func_41(uParam0, 5);
					if ((func_56(16777216) || func_16(uParam0->f_151, 524288)) || Global_1392040->f_2)
					{
						if (func_56(268435456))
						{
							Global_1392040->f_2 = 0;
							func_55(16777216);
							func_45(&(uParam0->f_57), 2);
							func_62(uParam0, 0);
							func_41(uParam0, 10);
						}
					}
					else if (func_23() == -1)
					{
						if (func_24(4) && !func_18(0, 0, 1))
						{
							func_63(99, 1);
						}
					}
					func_54(uParam0);
				}
				else
				{
					func_64(uParam0);
					func_65(uParam0);
					if ((!func_66(4) && !func_56(536870912)) && func_16(uParam0->f_150, 8192))
					{
						if (func_16(uParam0->f_151, 4194304) && func_52(Global_35, uParam0->f_152, 1) <= 9f)
						{
							uParam0->f_185 = func_67(HUD::_UIPROMPT_GET_GROUP_ACTIVE_PAGE(1754796591));
							HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(uParam0->f_152, 3f, 0, 1, 1754796591, uParam0->f_185, 2);
						}
						else if ((func_16(uParam0->f_151, 131072) && func_52(Global_35, uParam0->f_152, 1) > 9f) && func_52(Global_35, uParam0->f_152, 1) < 25f)
						{
							uParam0->f_185 = func_67(0);
							if (!HUD::_UIPROMPT_DOES_AMBIENT_GROUP_EXIST(1754796591))
							{
								HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(uParam0->f_152, 5f, 0, 1, -523698323, uParam0->f_185, 2);
							}
						}
					}
					if ((func_56(16777216) && func_16(uParam0->f_151, 131072)) || func_16(uParam0->f_151, 524288))
					{
						if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
						{
							if (uParam0->f_197 != -1 && (MISC::GET_GAME_TIMER() - uParam0->f_197) > 1000)
							{
								func_55(16777216);
								func_6(&(uParam0->f_151), 524288);
								uParam0->f_197 = -1;
								TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
								uParam0->f_157 = 0;
							}
							else
							{
								uParam0->f_157 = 2;
								func_68(uParam0);
								uParam0->f_197 = MISC::GET_GAME_TIMER();
								if (func_56(268435456))
								{
									func_55(16777216);
									func_6(&(uParam0->f_151), 524288);
									func_17(&(uParam0->f_151), 64);
									HUD::_HIDE_HUD_COMPONENT(2011163970);
									func_45(&(uParam0->f_57), 2);
									func_62(uParam0, 0);
									func_41(uParam0, 10);
								}
							}
						}
						else if (uParam0->f_157 == 2)
						{
							if ((MISC::GET_GAME_TIMER() - uParam0->f_197) > 10000)
							{
								TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
								func_55(16777216);
								func_6(&(uParam0->f_151), 524288);
								uParam0->f_197 = -1;
								uParam0->f_157 = 0;
							}
						}
						else if (uParam0->f_154 == 5)
						{
							func_41(uParam0, 9);
						}
					}
				}
				Jump @4934; //curOff = 1996
				if (func_38(uParam0))
				{
					func_39(uParam0);
				}
				if (func_52(Global_35, uParam0->f_152, 1) <= 36f)
				{
					func_41(uParam0, 3);
				}
				Jump @4934; //curOff = 2042
				if (func_38(uParam0))
				{
					AUDIO::_0x6339C1EA3979B5F7("idle", "Player_Campfire_Scenes");
					func_39(uParam0);
				}
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_RADAR_MODE"), false);
				func_69();
				func_58(uParam0);
				if ((func_70(&(uParam0->f_162[17])) && func_71(&(uParam0->f_162[17]), 1)) && func_72())
				{
					func_73(&Global_43906, 4);
				}
				else if (!func_60(1) || func_74(&Global_43906, 8))
				{
					func_34(0);
					uParam0->f_156 = -1;
					func_75(uParam0, 0);
					if (func_74(&Global_43906, 8))
					{
						func_17(&(uParam0->f_151), 262144);
						func_41(uParam0, 13);
					}
					else
					{
						func_76();
						func_41(uParam0, 3);
					}
				}
				else
				{
					if (uParam0->f_154 != -1 && uParam0->f_154 != 5)
					{
						func_59();
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -996707397) || func_77() == 1)
					{
						func_75(uParam0, 0);
					}
					else
					{
						func_75(uParam0, 1);
					}
					func_78(uParam0);
					if (uParam0->f_157 == 1 || func_79(uParam0, 0, 0, -1))
					{
						func_76();
						if (uParam0->f_157 != 10)
						{
							func_75(uParam0, 0);
						}
						else
						{
							func_53(uParam0);
						}
						if (uParam0->f_157 == 2)
						{
							if (uParam0->f_154 == 5)
							{
								func_41(uParam0, 9);
							}
							else
							{
								func_45(&(uParam0->f_57), 2);
								func_62(uParam0, 0);
								func_41(uParam0, 10);
							}
						}
						else if (uParam0->f_157 == 0)
						{
							func_41(uParam0, 13);
						}
						else if (uParam0->f_157 == 12 || uParam0->f_157 == 11)
						{
							func_41(uParam0, 11);
						}
						else
						{
							if (uParam0->f_157 == 1)
							{
								uParam0->f_57.f_84 = (uParam0->f_57.f_84 - 1);
							}
							func_41(uParam0, 6);
						}
					}
				}
				Jump @4934; //curOff = 2498
				if (func_38(uParam0))
				{
					func_39(uParam0);
				}
				if (uParam0->f_154 != -1 && uParam0->f_154 != 5)
				{
					func_59();
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
				}
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
				if (((ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1070143458) && (MISC::GET_GAME_TIMER() - uParam0->f_196) > 2000) && !func_16(uParam0->f_151, 4)) && uParam0->f_157 != 1)
				{
					if (func_79(uParam0, 1, uParam0->f_157, uParam0->f_156))
					{
						if (uParam0->f_157 == 0)
						{
							func_41(uParam0, 13);
							func_53(uParam0);
							return 0;
						}
						else
						{
							func_75(uParam0, 0);
							uParam0->f_196 = MISC::GET_GAME_TIMER();
						}
					}
				}
				if ((func_80(uParam0) || !TASK::PED_HAS_USE_SCENARIO_TASK(Global_35)) || func_16(uParam0->f_151, 1))
				{
					if (uParam0->f_157 == 10 || func_16(uParam0->f_151, 1))
					{
						uParam0->f_156 = -1;
						AUDIO::_0x6339C1EA3979B5F7("Fade_To_Black", "Sleep_Respawn_Scenes");
						func_41(uParam0, 8);
					}
					else if ((uParam0->f_154 == uParam0->f_156 || uParam0->f_156 == -1) || uParam0->f_157 == 1)
					{
						if (uParam0->f_157 != 0)
						{
							uParam0->f_155 = uParam0->f_157;
						}
						if (uParam0->f_156 != -1)
						{
							uParam0->f_154 = uParam0->f_156;
						}
						else
						{
							uParam0->f_154 = func_36(uParam0);
						}
						uParam0->f_156 = -1;
						if (uParam0->f_157 == 1)
						{
							uParam0->f_157 = 6;
							uParam0->f_155 = 6;
							uParam0->f_162[8] = func_81("DRINK", joaat("INPUT_CRAFTING_EAT"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
							func_82(&(uParam0->f_162[8]), -1067771379, 0, 1);
							func_83(&(uParam0->f_162[8]), 10, 1, 1);
							func_84(&(uParam0->f_162[8]), 0, 1);
							func_41(uParam0, 12);
						}
						else
						{
							func_41(uParam0, 5);
						}
					}
				}
				Jump @4934; //curOff = 3012
				if (func_38(uParam0))
				{
					func_39(uParam0);
				}
				iVar4 = PED::_0xC22AA08A8ADB87D4(Global_35);
				if (func_85(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_196) > 500)
				{
					if ((iVar4 == 1135271674 || iVar4 == -571916863) || iVar4 == -229964281)
					{
						if (uParam0->f_157 == 12)
						{
							if (INVENTORY::_0x3D10D7179D7034AF(func_86(0), -569063887, 0))
							{
								INVENTORY::_0x6A564540FAC12211(func_86(0), -569063887);
							}
							func_87(-569063887 /* GXTEntry: "Journal" */, 0, 0, 0, 1, 0, 0);
							uParam0->f_196 = MISC::GET_GAME_TIMER();
							uParam0->f_157 = 0;
						}
						else if (uParam0->f_157 == 11)
						{
							func_87(1259508039 /* GXTEntry: "Satchel" */, 0, 0, 0, 1, 0, 0);
							uParam0->f_196 = MISC::GET_GAME_TIMER();
							uParam0->f_157 = 0;
						}
						else
						{
							uParam0->f_157 = 0;
							ATTRIBUTE::_0xD962F8579D702DB5();
							func_31(&(uParam0->f_204));
							func_41(uParam0, 5);
						}
					}
					else if (iVar4 == -597629206)
					{
						func_88(36116464, 0.5f);
						uParam0->f_196 = MISC::GET_GAME_TIMER();
					}
					else if (iVar4 == -518407211)
					{
						func_88(653141085, 2f);
						uParam0->f_196 = MISC::GET_GAME_TIMER();
					}
					else if (iVar4 == -1433449364)
					{
						func_88(1335077954, 2f);
						uParam0->f_196 = MISC::GET_GAME_TIMER();
					}
				}
				if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
				{
					ATTRIBUTE::_0xD962F8579D702DB5();
					uParam0->f_157 = 0;
					func_41(uParam0, 5);
				}
				Jump @4934; //curOff = 3370
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
				HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::_CREATE_VAR_STRING(0, -1199896558), 1, 0, 0, 0);
				iVar4 = PED::_0x569F1E1237508DEB(Global_35);
				func_89(uParam0, iVar4);
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 442509369))
				{
					if (func_90())
					{
						func_91(1);
					}
					else if (func_92())
					{
						func_91(0);
					}
					func_93(-1199896558 /* GXTEntry: "Coffee" */, 1f, 1);
				}
				if ((func_85(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_196) > 500) && iVar4 == -1433449364)
				{
					func_41(uParam0, 5);
				}
				if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
				{
					ATTRIBUTE::_0xD962F8579D702DB5();
					uParam0->f_157 = 0;
					func_41(uParam0, 5);
				}
				Jump @4934; //curOff = 3597
				if (func_38(uParam0))
				{
					func_39(uParam0);
					switch (uParam0->f_155)
					{
						case 8:
							func_88(-1890302844, 0.5f);
							break;
						case 7:
							func_88(36116464, 0.5f);
							break;
					}
				}
				func_94(uParam0);
				Jump @4934; //curOff = 3680
				if (func_38(uParam0))
				{
					func_39(uParam0);
				}
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					if (func_85(uParam0))
					{
						TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
					}
					CAM::DO_SCREEN_FADE_OUT(1500);
				}
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					if (uParam0->f_154 != 0)
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, 1, 1);
						TASK::_TASK_USE_SCENARIO_POINT(Global_35, uParam0[0], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR", 0, 0, 1, 0, 0, -1082130432, 0);
						uParam0->f_196 = MISC::GET_GAME_TIMER();
						uParam0->f_154 = 0;
					}
					else if ((MISC::GET_GAME_TIMER() - uParam0->f_196) > 500)
					{
						CAM::DO_SCREEN_FADE_IN(1000);
						func_95(77.236f, -5.6759f);
						func_45(&(uParam0->f_57), 2);
						func_62(uParam0, 0);
						func_41(uParam0, 10);
					}
				}
				Jump @4934; //curOff = 3867
				if (func_38(uParam0))
				{
					func_39(uParam0);
				}
				CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
				func_96(uParam0);
				func_59();
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
				if ((((func_97(uParam0, uParam0->f_155) || !TASK::PED_HAS_USE_SCENARIO_TASK(Global_35)) || TASK::_0x916B8E075ABC8B4E(Global_35, 1)) || FIRE::IS_ENTITY_ON_FIRE(Global_35)) || TASK::_0x0C3CB2E600C8977D(Global_35, 0))
				{
					ENTITY::SET_ENTITY_PROOFS(Global_35, 0, false);
					AUDIO::_0x0F2A2175734926D8("cook_meat_sizzle_loop", "Player_Campfire_Sounds");
					func_44(&(uParam0->f_57), 1);
					ATTRIBUTE::_0xD962F8579D702DB5();
					if (((!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35) || TASK::_0x916B8E075ABC8B4E(Global_35, 1)) || FIRE::IS_ENTITY_ON_FIRE(Global_35)) || TASK::_0x0C3CB2E600C8977D(Global_35, 0))
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							CAM::DO_SCREEN_FADE_IN(500);
						}
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_160))
						{
							OBJECT::DELETE_OBJECT(&(uParam0->f_160));
						}
						if (func_98(0) && !func_16(uParam0->f_151, 1024))
						{
							if (((((((uParam0->f_149 == 3 || uParam0->f_149 == 4) || uParam0->f_149 == 15) || uParam0->f_149 == 20) || uParam0->f_149 == 7) || uParam0->f_149 == 6) || uParam0->f_149 == 18) || uParam0->f_149 == 19)
							{
								func_99(uParam0->f_57.f_77, 1, 1, 1, 0);
								func_17(&(uParam0->f_151), 1024);
							}
						}
						if (FIRE::IS_ENTITY_ON_FIRE(Global_35))
						{
							TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
						}
					}
					if (uParam0->f_154 == 4)
					{
						uParam0->f_155 = 9;
						uParam0->f_157 = 9;
					}
					else
					{
						uParam0->f_155 = 6;
						uParam0->f_157 = 6;
					}
					func_31(&(uParam0->f_204));
					func_41(uParam0, 5);
				}
				Jump @4934; //curOff = 4366
				if (func_38(uParam0))
				{
					func_39(uParam0);
				}
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				if ((!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT()) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -954213463))
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
				}
				if ((func_16(uParam0->f_151, 1) || ANIMSCENE::_0xF94692EB9DC15D74(uParam0->f_195, 0)) || CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::_0x8910C24B7E0046EC();
					func_53(uParam0);
					if (ANIMSCENE::_0x25557E324489393C(uParam0->f_193))
					{
						if (!ANIMSCENE::_0x477122B8D05E7968(uParam0->f_193, 1, 0))
						{
							if (!ANIMSCENE::_0x59606519FF9D3EC2(uParam0->f_193, 1))
							{
								ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_193);
							}
						}
						else
						{
							func_100(Global_36);
							Global_40.f_9 = 0;
							func_101(0, 7);
							func_6(&(uParam0->f_151), 1);
							AUDIO::_0xAC84686C06184B0D("Clouds", "Sleep_Respawn_Scenes");
							ANIMSCENE::START_ANIM_SCENE(uParam0->f_193);
							AUDIO::TRIGGER_MUSIC_EVENT("SLEEP_TRANSITION_START");
							func_102(14, 1);
							func_103();
							if (!TASK::_DOES_SCENARIO_POINT_EXIST(uParam0[5]))
							{
								(*uParam0)[5] = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(*(uParam0->f_7[5 /*3*/]), uParam0->f_191, 1f, 0, 0);
							}
							if (uParam0->f_191 == -2016812721)
							{
								sVar5 = "PROP_PLAYER_SLEEP_TENT_MALE_A";
							}
							else
							{
								sVar5 = "WORLD_PLAYER_SLEEP_BEDROLL_ARTHUR";
							}
							func_6(&(uParam0->f_151), 4);
							TASK::_TASK_USE_SCENARIO_POINT(Global_35, uParam0[5], sVar5, 0, 0, 1, 0, 0, -1082130432, 0);
							if (CAM::_0x927B810E43E99932(&(uParam0->f_26)))
							{
								CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_26));
							}
							func_104(1);
							CLOCK::ADVANCE_CLOCK_TIME_TO(uParam0->f_186, 0, 0);
							TELEMETRY::_0xF9F14080D80937BD(uParam0->f_186);
							if (!func_18(0, 0, 1))
							{
								MISC::SET_RANDOM_WEATHER_TYPE(true, true);
							}
							func_105(1);
							func_106(Global_36, 300f, 0, 0);
							func_107(-1, 0, 0, 0, 0);
							func_108(0);
							func_109(PLAYER::_GET_DEADEYE_ABILITY_LEVEL(PLAYER::PLAYER_ID()));
							uParam0->f_156 = -1;
							func_17(&(uParam0->f_151), 1048576);
							PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
							func_41(uParam0, 3);
						}
					}
					else
					{
						func_41(uParam0, 3);
					}
				}
				Jump @4934; //curOff = 4840
				if (func_38(uParam0))
				{
					func_48(8192);
					func_39(uParam0);
				}
				if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
				{
					ATTRIBUTE::_0xD962F8579D702DB5();
					func_49(8192);
					func_44(&(uParam0->f_57), 1);
					func_41(uParam0, 3);
				}
				else if (!TASK::_0x0C3CB2E600C8977D(Global_35, 1))
				{
					func_110(uParam0);
				}
				Jump @4934; //curOff = 4924
				return 1;
			}
			return 0;
		}

void func_14(var uParam0, bool bParam1)
{
	func_53(uParam0);
	func_111(uParam0);
	func_112(uParam0);
	func_54(uParam0);
	if (CAM::_0x927B810E43E99932(&(uParam0->f_26)))
	{
		CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_26));
	}
	if (bParam1)
	{
		func_113(uParam0);
	}
	uParam0->f_197 = -1;
	func_44(&(uParam0->f_57), 0);
}

int func_15(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_114(Global_1935475[iVar0 /*2*/], vParam0))
		{
			return ((*Global_1935475)[iVar0 /*2*/])->f_1;
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

int func_18(int iParam0, bool bParam1, bool bParam2)
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
		if (func_115())
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
		iVar0 = func_116(&(Global_1898164->f_1[0 /*5*/]));
		if (func_117(iVar0) && func_118(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_119(&(Global_1898164->f_1[0 /*5*/])))
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

bool func_19()
{
	return Global_1911914->f_1578;
}

void func_20(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	uParam0->f_212.f_5 = iParam1;
	uParam0->f_212.f_2 = iParam2;
	uParam0->f_212.f_3 = iParam3;
	uParam0->f_212.f_2 = iParam4;
	uParam0->f_212.f_2 = iParam5;
	uParam0->f_212.f_2 = iParam6;
}

float func_21(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_22()
{
	return Global_1894899->f_2;
}

int func_23()
{
	return Global_1572887->f_12;
}

bool func_24(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_120(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
	}
	return (UNLOCK::_UNLOCK_IS_UNLOCKED(((*Global_1835011)[iParam0 /*74*/])->f_2) && !UNLOCK::_UNLOCK_IS_VISIBLE(((*Global_1835011)[iParam0 /*74*/])->f_2));
}

bool func_25(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_121(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_122(iParam0);
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
		if (!func_123(iParam0, 1))
		{
			return false;
		}
	}
	return func_124(iParam0, 0, bParam2) >= iParam1;
}

void func_26(var uParam0)
{
	bool bVar0;

	bVar0 = GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_29);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		OBJECT::_0x646564A3B7DF68F8(*uParam0, (0.65f + (uParam0->f_11 * 0.35f)), (0.65f + (uParam0->f_11 * 0.35f)));
		if (bVar0)
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Smoke", uParam0->f_17, false);
		}
		if (uParam0->f_1)
		{
			OBJECT::_0xC8E21C1677DC5E6F(*uParam0, (uParam0->f_12 * 0.5f));
			if (bVar0)
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Flames", uParam0->f_18, false);
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
			OBJECT::_0x2797C633DCDBBAC5(*uParam0, ((uParam0->f_15 * 0.9f) + 0.1f), 1);
		}
	}
	if (uParam0->f_4)
	{
		if (bVar0)
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Under", uParam0->f_16, false);
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
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Under", uParam0->f_17, false);
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
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Smoke", uParam0->f_17, false);
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
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Flames", uParam0->f_18, false);
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
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Smolder", uParam0->f_19, false);
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

void func_27(var uParam0, int iParam1)
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

float func_28()
{
	if (func_11(&Global_1935630, 2097152) || func_22() == 5)
	{
		return 1f;
	}
	return 0.5f;
}

int func_29(var uParam0, float fParam1)
{
	if (!func_125(uParam0))
	{
		return 0;
	}
	if (func_126(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

void func_30(var uParam0)
{
	int iVar0;

	if (!uParam0->f_1)
	{
		iVar0 = CLOCK::GET_CLOCK_HOURS();
		if (iVar0 >= 2 && iVar0 < 4)
		{
			func_27(uParam0, 1);
		}
		else if (iVar0 >= 4 && iVar0 < 6)
		{
			func_27(uParam0, 2);
		}
		else if (iVar0 >= 6 && iVar0 < 12)
		{
			func_27(uParam0, 3);
		}
		else if (iVar0 >= 12 && iVar0 < 17)
		{
			func_27(uParam0, 2);
		}
		else if (iVar0 >= 17 && iVar0 < 19)
		{
			func_27(uParam0, 1);
		}
		else
		{
			func_27(uParam0, 0);
		}
		func_31(&(uParam0->f_31));
	}
}

void func_31(var uParam0)
{
	func_127(uParam0, 0f);
}

int func_32(int iParam0, int iParam1)
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
	if (func_128(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_128(iVar0, 2))
	{
		if (PED::_IS_PED_HOGTIED(iParam0))
		{
			return 0;
		}
	}
	if (func_128(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_128(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_128(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_128(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_128(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_128(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_33(var uParam0)
{
	int iVar0;

	if (func_56(16777216) || uParam0->f_153 == 10)
	{
		iVar0 = func_36(uParam0);
		if (iVar0 != -1 && iVar0 != 5)
		{
			if (!func_70(&(uParam0->f_162[10])))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			}
			if (!func_70(&(uParam0->f_162[9])))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
		}
	}
}

void func_34(bool bParam0)
{
	if (bParam0)
	{
		func_129(4);
	}
	func_129(2);
	MISC::SET_BIT(&(Global_1956578->f_1), 0);
}

void func_35(var uParam0)
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
	vVar0.f_3 = uParam0->f_152;
	vVar0 = { 0f, 0f, 0.5f };
	_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &vVar0);
	bVar25 = false;
	bVar26 = false;
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
	{
		bVar26 = true;
	}
	if (!bVar26)
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
		{
			bVar25 = true;
		}
	}
	if (bVar26 || (bVar25 && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1206250122)))
	{
		if (CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_26)))
		{
			if (!CAM::_0x927B810E43E99932(&(uParam0->f_26)))
			{
				CAM::_0xB8B207C34285E978(&(uParam0->f_26));
			}
		}
	}
}

int func_36(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = TASK::_0xDF7993356F52359A(Global_35, 0);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar0) && !TASK::_0x0C3CB2E600C8977D(Global_35, 1))
	{
		iVar1 = 0;
		while (iVar1 < 6)
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

int func_37(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_38(var uParam0)
{
	return func_16(uParam0->f_151, 4096);
}

void func_39(var uParam0)
{
	func_6(&(uParam0->f_151), 4096);
}

void func_40(var uParam0)
{
	StringCopy(&(uParam0->f_26), "restbyfire_orbit_cam", 64);
	StringCopy(&(uParam0->f_26.f_8), "RESTBYFIRE_ORBIT_REQUEST", 64);
}

void func_41(var uParam0, int iParam1)
{
	func_17(&(uParam0->f_151), 4096);
	uParam0->f_153 = iParam1;
}

int func_42(var uParam0)
{
	return 1;
}

int func_43(var uParam0)
{
	vector3 vVar0;
	float fVar3;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_152))
	{
		if (func_16(uParam0->f_150, 512))
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_152, -0.966f, 0.203f, 0f) };
			*(uParam0->f_7[0 /*3*/]) = { vVar0 + Vector(1f, 0f, 0f) };
			fVar3 = (ENTITY::GET_ENTITY_HEADING(uParam0->f_152) + -99.171f);
			(*uParam0)[0] = TASK::CREATE_SCENARIO_POINT(1020517461, vVar0, fVar3, 0, 0, 0);
		}
		if (func_16(uParam0->f_150, 1024))
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_152, -0.212f, -1.045f, 0f) };
			*(uParam0->f_7[1 /*3*/]) = { vVar0 + Vector(1f, 0f, 0f) };
			fVar3 = (ENTITY::GET_ENTITY_HEADING(uParam0->f_152) + -11.405f);
			(*uParam0)[1] = TASK::CREATE_SCENARIO_POINT(1259174088, vVar0, fVar3, 0, 0, 0);
		}
		if (func_16(uParam0->f_150, 2048))
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_152, 1.025f, 0.043f, 0f) };
			*(uParam0->f_7[2 /*3*/]) = { vVar0 + Vector(1f, 0f, 0f) };
			fVar3 = (ENTITY::GET_ENTITY_HEADING(uParam0->f_152) + 91.78f);
			(*uParam0)[2] = TASK::CREATE_SCENARIO_POINT(-1075420544, vVar0, fVar3, 0, 0, 0);
		}
		if (func_16(uParam0->f_150, 4096))
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_152, 0.249f, 1.05f, 0f) };
			*(uParam0->f_7[3 /*3*/]) = { vVar0 + Vector(1f, 0f, 0f) };
			fVar3 = (ENTITY::GET_ENTITY_HEADING(uParam0->f_152) + 164.29f);
			(*uParam0)[3] = TASK::CREATE_SCENARIO_POINT(-1767895052, vVar0, fVar3, 0, 0, 0);
		}
		if (func_16(uParam0->f_150, 2))
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_152, -1.534f, 0.233f, 0.5f) };
			*(uParam0->f_7[4 /*3*/]) = { vVar0 + Vector(0.5f, 0f, 0f) };
			fVar3 = (ENTITY::GET_ENTITY_HEADING(uParam0->f_152) + -97.186f);
			(*uParam0)[4] = TASK::CREATE_SCENARIO_POINT(889554021, vVar0, fVar3, 0, 0, 0);
			TASK::_0x5AF19B6CC2115D34(uParam0[4], 51, 1);
		}
		if (!TASK::_DOES_SCENARIO_POINT_EXIST(uParam0[5]))
		{
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(uParam0->f_152, true, false), ENTITY::GET_ENTITY_HEADING(uParam0->f_152), uParam0->f_188) };
			*(uParam0->f_7[5 /*3*/]) = { vVar0 + Vector(1f, 0f, 0f) };
			(*uParam0)[5] = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vVar0, uParam0->f_191, 1f, 0, 0);
		}
		return 1;
	}
	return 0;
}

void func_44(var uParam0, bool bParam1)
{
	func_130(uParam0);
	func_131(uParam0, 0);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_39);
	if (func_132())
	{
		func_133(0);
	}
	if (bParam1)
	{
		func_134(uParam0);
		return;
	}
	if (HUD::_DOES_TEXT_DATABASE_EXIST(&(uParam0->f_17)))
	{
		HUD::_TEXT_DATABASE_DELETE(&(uParam0->f_17));
	}
	if (uParam0->f_22)
	{
		if (!CAM::IS_GAMEPLAY_CAM_RENDERING())
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
		CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_63))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_63);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_65))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_65);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_66))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_66);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_67))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_67);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_68))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_68);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_69))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_69);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_70))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_70);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_71))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_71);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_72))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_72);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_85))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_85));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_86));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_87))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_87));
	}
	TXD::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("satchel_textures");
	Global_1911914->f_1576 = 0;
	if (func_23() == -1)
	{
		func_45(uParam0, 16);
	}
	else
	{
		if (uParam0->f_8 == 11)
		{
			if (uParam0->f_21 == -1)
			{
				func_135(uParam0->f_77, uParam0->f_78);
				func_136(uParam0->f_77, uParam0->f_20);
			}
		}
		uParam0->f_21 = -1;
		func_45(uParam0, 0);
	}
}

void func_45(var uParam0, int iParam1)
{
	if (uParam0->f_8 != iParam1)
	{
		uParam0->f_8 = iParam1;
		func_137(uParam0);
	}
}

void func_46(var uParam0)
{
	if (!CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_26)))
	{
		if (!CAM::_0xC285FD21294A1C49(&(uParam0->f_26)))
		{
			CAM::_0x6A4D224FC7643941(&(uParam0->f_26));
		}
	}
}

void func_47(int iParam0)
{
	if (!func_56(iParam0))
	{
		Global_1392040 = (Global_1392040 || iParam0);
	}
}

void func_48(int iParam0)
{
	if (!func_66(iParam0))
	{
		Global_1392040->f_1 = (Global_1392040->f_1 || iParam0);
	}
}

void func_49(int iParam0)
{
	if (func_66(iParam0))
	{
		Global_1392040->f_1 = (Global_1392040->f_1 - (Global_1392040->f_1 && iParam0));
	}
}

int func_50(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_51(var uParam0)
{
	int iVar0;
	int iVar1;

	func_6(&(uParam0->f_151), 16384);
	if (PED::_IS_PED_CARRYING(Global_35))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
		if (ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			if (ENTITY::_0x9A100F1CF4546629(iVar1))
			{
				func_17(&(uParam0->f_151), 16384);
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
	if (func_56(134217728) || !func_16(uParam0->f_150, 8192))
	{
		return 0;
	}
	if (func_138(Global_35, 0))
	{
		return 0;
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_195))
	{
		if (ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_195, 0))
		{
			return 0;
		}
	}
	if (PED::_0x4912DFE492DB98CD(Global_35, "inInspectionMode"))
	{
		return 0;
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_35, 227, true))
	{
		return 0;
	}
	if (func_139(Global_35))
	{
		return 0;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35))
	{
		return 0;
	}
	if (TASK::_0xD04241BBF6D03A5E(Global_35) != 0)
	{
		return 0;
	}
	if ((func_140(Global_35) || func_141(Global_35)) || func_142(Global_35))
	{
		return 0;
	}
	if (!func_143(Global_35, uParam0->f_152, -0.5f))
	{
		return 0;
	}
	if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(ENTITY::GET_ENTITY_COORDS(uParam0->f_152, true, false), 1.5f) > 2)
	{
		return 0;
	}
	return 1;
}

float func_52(int iParam0, int iParam1, bool bParam2)
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

void func_53(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (func_70(&(uParam0->f_162[iVar0])))
		{
			func_144(uParam0->f_162[iVar0], 1, 1);
		}
		iVar0++;
	}
}

void func_54(var uParam0)
{
	func_144(&(uParam0->f_183), 1, 1);
	func_144(&(uParam0->f_182), 1, 1);
	func_144(&(uParam0->f_181), 1, 1);
}

void func_55(int iParam0)
{
	if (func_56(iParam0))
	{
		Global_1392040 = (&Global_1392040 - (Global_1392040 && iParam0));
	}
}

bool func_56(int iParam0)
{
	return (Global_1392040 && iParam0) != 0;
}

void func_57(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0[iVar0]) && uParam0[iVar0] != uParam0[5])
		{
			TASK::_0x5AF19B6CC2115D34(uParam0[iVar0], 8, !bParam1);
		}
		iVar0++;
	}
}

void func_58(var uParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_193))
	{
		if (ANIMSCENE::_0xCDC5512A407CF08D(uParam0->f_193))
		{
			PED::_0xD65FDC686A031C83(Global_35, -1961588683, 3f);
			AUDIO::_0x9428447DED71FC7E("Sleep_Respawn_Scenes");
			AUDIO::TRIGGER_MUSIC_EVENT("SLEEP_TRANSITION_STOP");
			CAM::DO_SCREEN_FADE_OUT(0);
			CAM::DO_SCREEN_FADE_IN(1500);
			func_145(1);
			func_146();
			if (TASK::_0x2D0571BB55879DA2(Global_35) == 1097070152)
			{
				func_95(98.2971f, -4.2336f);
				PED::_0xEC6935EBE0847B90(Global_35, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Global_36, ENTITY::GET_ENTITY_HEADING(Global_35), -5f, 0f, 0f));
				TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
			}
			func_105(0);
			Global_1392040->f_7 = func_147();
		}
		if (ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_193, 0))
		{
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			CAM::_0x8910C24B7E0046EC();
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			func_34(0);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
		}
	}
}

void func_59()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
}

int func_60(bool bParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_35) && !TASK::_0x0C3CB2E600C8977D(Global_35, 1))
		{
			if (((TASK::_0x02EBBB3989B7E695(Global_35) || (bParam0 && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))) || (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Global_35) && TASK::GET_TASK_MOVE_NETWORK_EVENT(Global_35, "SCENARIO_POINT_TRANS_COMPLETE"))) || (func_56(16777216) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1208591336)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_61()
{
	int iVar0;

	iVar0 = PED::_0xC22AA08A8ADB87D4(Global_35);
	switch (iVar0)
	{
		case -229964281:
			return 9;
		case 512684539:
			return 3;
		case 1135271674:
			return 6;
		case -571916863:
			return 8;
		case -597629206:
			return 7;
		case -1879538536:
			return 1;
		case -734326242:
			return 4;
		default:
			break;
	}
	return 0;
}

void func_62(var uParam0, int iParam1)
{
	uParam0->f_149 = iParam1;
}

void func_63(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_148(iParam0, &iVar0, &iVar1);
	if (!func_149(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_150(iVar0, iVar1);
}

void func_64(var uParam0)
{
	if (((!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35) && func_16(uParam0->f_151, 4194304)) && !PED::_IS_PED_CARRYING(Global_35)) && !func_56(4))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_152))
		{
			if (!func_70(uParam0->f_181))
			{
				uParam0->f_181 = func_151("REST_BY_FIRE", joaat("INPUT_CONTEXT_Y"), uParam0->f_152, 1, 1, 1, 0, 5, 9f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0, 0);
			}
			else if (func_152(uParam0->f_181, 1))
			{
				func_68(uParam0);
				func_54(uParam0);
				func_6(&(uParam0->f_151), 4194304);
			}
			if (uParam0->f_57.f_84 > 0 && (func_21(Global_36, TASK::_GET_SCENARIO_POINT_COORDS(uParam0[0], 1)) < 0.5625f || func_21(Global_36, TASK::_GET_SCENARIO_POINT_COORDS(uParam0[1], 1)) < 0.5625f))
			{
				func_96(uParam0);
				if (!func_70(uParam0->f_183))
				{
					uParam0->f_183 = func_151("POUR_COFFEE", joaat("INPUT_CONTEXT_A"), uParam0->f_152, 1, 1, 1, 0, 5, 9f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0, 0);
					func_82(uParam0->f_183, 1754796591, 0, 1);
				}
				else if (func_152(uParam0->f_183, 1))
				{
					uParam0->f_157 = 1;
					func_68(uParam0);
					func_54(uParam0);
					func_6(&(uParam0->f_151), 4194304);
				}
			}
			else if (func_70(uParam0->f_183))
			{
				func_153(uParam0);
			}
		}
	}
	else
	{
		func_153(uParam0);
		func_154(uParam0);
	}
	if (func_70(uParam0->f_181))
	{
		func_82(uParam0->f_181, 1754796591, 0, 1);
	}
}

void func_65(var uParam0)
{
	if (func_16(uParam0->f_151, 4194304))
	{
		if (!func_70(uParam0->f_182))
		{
			if (((((!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35) && !func_56(16777216)) && !func_56(4096)) && !func_56(1)) && !func_155()) && !func_16(uParam0->f_151, 524288))
			{
				uParam0->f_182 = func_151("CRAFT_COOK", joaat("INPUT_CONTEXT_X"), uParam0->f_152, 0, 1, 1, 0, 5, 7f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0, 0);
				MISC::SET_BIT(&(Global_1956578->f_1), 2);
				MISC::SET_BIT(&(Global_1956578->f_1), 3);
				if (func_16(uParam0->f_151, 16384))
				{
					if (func_156(uParam0))
					{
						func_157(uParam0->f_182, "CAMP_REC_COOK", 1);
					}
					else
					{
						MISC::CLEAR_BIT(&(Global_1956578->f_1), 2);
						func_84(uParam0->f_182, 0, 1);
					}
				}
			}
		}
		else if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
		{
			func_54(uParam0);
			func_6(&(uParam0->f_151), 4194304);
		}
		else if (func_56(16777216) || func_16(uParam0->f_151, 524288))
		{
			func_55(16777216);
			func_17(&(uParam0->f_151), 524288);
			func_54(uParam0);
			func_6(&(uParam0->f_151), 4194304);
		}
		else
		{
			if (func_16(uParam0->f_151, 16384) != func_16(uParam0->f_151, 32768))
			{
				if (func_16(uParam0->f_151, 16384))
				{
					if (func_156(uParam0) && !func_70(Global_1935496->f_114))
					{
						func_157(uParam0->f_182, "CAMP_REC_COOK", 1);
						func_84(uParam0->f_182, 1, 1);
						func_17(&(uParam0->f_151), 65536);
					}
					else
					{
						func_144(&(uParam0->f_182), 1, 1);
						uParam0->f_182 = func_151("CRAFT_COOK", joaat("INPUT_CONTEXT_X"), uParam0->f_152, 0, 1, 1, 0, 5, 7f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0, 0);
						func_84(uParam0->f_182, 0, 1);
						func_6(&(uParam0->f_151), 65536);
					}
				}
				else
				{
					MISC::SET_BIT(&(Global_1956578->f_1), 2);
					MISC::SET_BIT(&(Global_1956578->f_1), 3);
					func_144(&(uParam0->f_182), 1, 1);
					uParam0->f_182 = func_151("CRAFT_COOK", joaat("INPUT_CONTEXT_X"), uParam0->f_152, 0, 1, 1, 0, 5, 7f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0, 0);
				}
				if (func_16(uParam0->f_151, 16384))
				{
					func_17(&(uParam0->f_151), 32768);
				}
				else
				{
					func_6(&(uParam0->f_151), 32768);
				}
			}
			if (func_152(uParam0->f_182, 1))
			{
				func_17(&(uParam0->f_151), 524288);
				MISC::CLEAR_BIT(&(Global_1956578->f_1), 2);
				func_54(uParam0);
				func_6(&(uParam0->f_151), 4194304);
				if (func_16(uParam0->f_151, 16384))
				{
					if (func_156(uParam0))
					{
						func_17(&(uParam0->f_151), 65536);
					}
					else
					{
						func_6(&(uParam0->f_151), 65536);
					}
				}
				if (func_16(uParam0->f_151, 16384) && func_16(uParam0->f_151, 65536))
				{
					func_47(268435456);
				}
			}
		}
	}
	else
	{
		func_144(&(uParam0->f_182), 1, 1);
	}
	if (func_70(uParam0->f_182))
	{
		func_82(uParam0->f_182, 1754796591, 0, 1);
	}
}

bool func_66(int iParam0)
{
	return (Global_1392040->f_1 && iParam0) != 0;
}

char* func_67(int iParam0)
{
	return "CAMPFIRE";
}

void func_68(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	bool bVar5;

	fVar0 = 10000f;
	iVar1 = -1;
	iVar2 = ITEMSET::CREATE_ITEMSET(true);
	iVar3 = 0;
	while (iVar3 < 6)
	{
		if (iVar3 < 5)
		{
			if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0[iVar3]))
			{
				if (TASK::_0x5BA659955369B0E2(uParam0[iVar3]) != 0)
				{
				}
				else if (!PED::_0xAB643407D0B26F07(Global_35, uParam0[iVar3], 0, 0, 1) && !func_56(268435456))
				{
				}
				else
				{
					ITEMSET::_0x20A4BF0E09BEE146(iVar2);
					if (func_158(&iVar2, TASK::_GET_SCENARIO_POINT_COORDS(uParam0[iVar3], 1)))
					{
					}
					else
					{
						fVar4 = func_21(Global_36, *(uParam0->f_7[iVar3 /*3*/]));
						if (fVar4 < fVar0)
						{
							iVar1 = iVar3;
							fVar0 = fVar4;
						}
					}
				}
			}
		}
		iVar3++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar2);
	if (iVar1 == -1)
	{
		func_55(268435456);
		func_55(16777216);
		func_6(&(uParam0->f_151), 524288);
		uParam0->f_157 = 0;
		return;
	}
	if (func_56(268435456))
	{
		func_159(Global_35, 1, 1);
		switch (iVar1)
		{
			case 4:
				uParam0->f_157 = 2;
				TASK::_TASK_USE_SCENARIO_POINT(Global_35, uParam0[4], "PROP_PLAYER_SEAT_CHAIR_PLAYER_CAMP", 0, 0, 1, 0, 0, -1082130432, 0);
				uParam0->f_155 = 9;
				uParam0->f_154 = 4;
				break;
			case 0:
			case 3:
				uParam0->f_157 = 2;
				TASK::_TASK_USE_SCENARIO_POINT(Global_35, uParam0[0], "WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE", 0, 0, 1, 0, 0, -1082130432, 0);
				uParam0->f_155 = 6;
				uParam0->f_154 = 0;
				break;
			case 1:
			case 2:
				uParam0->f_157 = 2;
				TASK::_TASK_USE_SCENARIO_POINT(Global_35, uParam0[1], "WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE", 0, 0, 1, 0, 0, -1082130432, 0);
				uParam0->f_155 = 6;
				uParam0->f_154 = 1;
				break;
		}
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	else
	{
		switch (iVar1)
		{
			case 4:
				TASK::_TASK_USE_SCENARIO_POINT(Global_35, uParam0[iVar1], "PROP_PLAYER_SEAT_CHAIR_PLAYER_CAMP", 0, 1, 0, 0, 0, -1082130432, 0);
				break;
			case 0:
			case 1:
			case 2:
			case 3:
				if (func_56(16777216) || func_16(uParam0->f_151, 524288))
				{
					bVar5 = true;
					if (func_160(0) || func_160(1))
					{
						bVar5 = false;
					}
					if (bVar5)
					{
						PED::_0xD65FDC686A031C83(Global_35, -1955932021, 3f);
					}
					TASK::_TASK_USE_SCENARIO_POINT(Global_35, uParam0[iVar1], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR", 0, 1, 0, 0, 0, -1082130432, 0);
				}
				else if (uParam0->f_157 == 1)
				{
					TASK::_TASK_USE_SCENARIO_POINT(Global_35, uParam0[iVar1], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR", 0, 1, 0, 0, 0, -1082130432, 0);
				}
				else if (func_161())
				{
					TASK::_TASK_USE_SCENARIO_POINT(Global_35, uParam0[iVar1], "WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A", 0, 1, 0, 0, 0, -1082130432, 0);
				}
				else
				{
					TASK::_TASK_USE_SCENARIO_POINT(Global_35, uParam0[iVar1], "WORLD_PLAYER_CAMP_FIRE_SIT_MALE_A", 0, 1, 0, 0, 0, -1082130432, 0);
				}
				break;
		}
		uParam0->f_154 = iVar1;
	}
}

void func_69()
{
	if (func_121(joaat("weapon_kit_binoculars"), 0))
	{
		func_162(32);
	}
	if (func_121(joaat("weapon_kit_camera"), 0))
	{
		func_162(64);
	}
}

bool func_70(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 48)
	{
		return false;
	}
	if (((*Global_1945938)[iParam0 /*18*/])->f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3);
}

bool func_71(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_70(iParam0))
	{
		return false;
	}
	iVar0 = func_163(iParam0);
	return HUD::_UIPROMPT_IS_JUST_RELEASED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

bool func_72()
{
	return (((!UIAPPS::_IS_APP_ACTIVE(1433015236) && !Global_1898068->f_4) && !func_164()) && UIAPPS::_CAN_LAUNCH_APP_BY_HASH(1833066477));
}

void func_73(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_74(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_75(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (func_70(&(uParam0->f_162[iVar0])))
		{
			if (func_165(&(uParam0->f_162[iVar0]), 0) == bParam1)
			{
			}
			else
			{
				func_84(&(uParam0->f_162[iVar0]), bParam1, 1);
			}
		}
		iVar0++;
	}
}

void func_76()
{
	if (UIAPPS::_IS_APP_ACTIVE(1833066477) && func_77() != 0)
	{
		func_73(&Global_43906, 16);
	}
}

int func_77()
{
	return Global_43907;
}

void func_78(var uParam0)
{
	int iVar0;

	iVar0 = PED::_0xC22AA08A8ADB87D4(Global_35);
	if (iVar0 == -597629206)
	{
		ENTITY::SET_ENTITY_PROOFS(Global_35, 2, false);
	}
	else
	{
		ENTITY::SET_ENTITY_PROOFS(Global_35, 0, false);
	}
	if (iVar0 == 1135271674)
	{
		if (((((func_85(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_196) > 500) && !func_16(uParam0->f_151, 524288)) && !func_56(16777216)) && !func_166(15)) && uParam0->f_157 != 1)
		{
			func_31(&(uParam0->f_204));
			func_88(-63615330, 0.5f);
			uParam0->f_196 = MISC::GET_GAME_TIMER();
		}
	}
	else if (iVar0 == -571916863)
	{
		if (func_85(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_196) > 500)
		{
			if (!func_125(&(uParam0->f_204)))
			{
				func_31(&(uParam0->f_204));
			}
			if (func_29(&(uParam0->f_204), 180f))
			{
				func_31(&(uParam0->f_204));
				if (!func_161())
				{
					func_88(1698735158, 0.5f);
					uParam0->f_196 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
	else if (iVar0 == -597629206)
	{
		if (func_85(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_196) > 500)
		{
			if (!func_125(&(uParam0->f_204)))
			{
				func_31(&(uParam0->f_204));
			}
			if (func_29(&(uParam0->f_204), 10f))
			{
				if (func_161())
				{
					func_31(&(uParam0->f_204));
					uParam0->f_196 = MISC::GET_GAME_TIMER();
					func_88(-841180202, 0.5f);
				}
			}
		}
	}
	else if (iVar0 == -518407211)
	{
		if (func_85(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_196) > 500)
		{
			func_88(653141085, 2f);
			uParam0->f_196 = MISC::GET_GAME_TIMER();
		}
	}
	else if (iVar0 == -1433449364)
	{
		if (func_85(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_196) > 500)
		{
			func_88(1335077954, 2f);
			uParam0->f_196 = MISC::GET_GAME_TIMER();
		}
	}
}

int func_79(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_167())
	{
		if (bParam1)
		{
			iVar2 = iParam2;
			if (iParam3 != -1)
			{
				iVar1 = iParam3;
			}
			else
			{
				iVar1 = uParam0->f_154;
			}
		}
		else
		{
			iVar1 = uParam0->f_154;
			iVar2 = uParam0->f_155;
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
						if (func_23() != 0)
						{
							iVar0 = 544882;
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
				else if (func_23() != 0)
				{
					iVar0 = 544882;
				}
				else
				{
					iVar0 = 20498;
				}
				break;
			case 4:
				switch (iVar2)
				{
					case 1:
						iVar0 = 56;
						break;
					default:
						if (func_23() != 0)
						{
							iVar0 = 544880;
						}
						else
						{
							iVar0 = 20498;
						}
						break;
				}
				break;
		}
	}
	if ((TASK::_0x038B1F1674F0E242(Global_35) || Global_1357517) // PointerArith || func_16(uParam0->f_151, 262144))
	{
		iVar0 = 0;
	}
	else if (func_138(Global_35, 0))
	{
		if (!func_16(uParam0->f_151, 32))
		{
			func_63(178, 1);
			func_17(&(uParam0->f_151), 32);
		}
		iVar0 = 16;
	}
	func_168(uParam0, iVar0);
	if (uParam0->f_157 == 2)
	{
		func_75(uParam0, 0);
	}
	iVar3 = func_169(uParam0);
	if (iVar3 != -1)
	{
		if (uParam0->f_156 != -1)
		{
			uParam0->f_154 = uParam0->f_156;
		}
	}
	switch (iVar3)
	{
		case 0:
			func_130(&(uParam0->f_57));
			func_45(&(uParam0->f_57), 1);
			uParam0->f_157 = 6;
			break;
		case 2:
			func_53(uParam0);
			uParam0->f_157 = 1;
			break;
		case 4:
			uParam0->f_187 = -1;
			func_53(uParam0);
			func_41(uParam0, 7);
			return 0;
		case 16:
			HUD::_DISPLAY_HUD_COMPONENT(2011163970);
			func_53(uParam0);
			func_17(&(uParam0->f_151), 262144);
			break;
		case 5:
			func_45(&(uParam0->f_57), 2);
			func_62(uParam0, 0);
			uParam0->f_57.f_35 = 1;
			uParam0->f_157 = 2;
			func_53(uParam0);
			func_41(uParam0, 10);
			break;
		case 9:
			func_53(uParam0);
			uParam0->f_157 = 12;
			return 1;
		case 10:
			func_53(uParam0);
			uParam0->f_157 = 11;
			return 1;
		case 3:
			func_170(uParam0, func_16(uParam0->f_151, 16));
			uParam0->f_157 = 0;
			func_53(uParam0);
			HUD::_DISPLAY_HUD_COMPONENT(2011163970);
			break;
		default:
			return 0;
	}
	return 1;
}

int func_80(var uParam0)
{
	if (uParam0->f_157 == 10)
	{
		return func_94(uParam0);
	}
	else
	{
		switch (uParam0->f_154)
		{
			case 0:
				return func_171(uParam0);
			case 1:
				return func_172(uParam0);
			case 2:
				return func_173(uParam0);
			case 3:
				return func_174(uParam0);
			case 4:
				return func_175(uParam0);
		}
	}
	func_53(uParam0);
	return 0;
}

int func_81(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
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
	while (iVar0 < 48)
	{
		if (func_176(iVar0, 2))
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
		func_177(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216 /* Float: 1f */, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

void func_82(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_70(iParam0))
	{
		return;
	}
	iVar0 = func_163(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_GROUP(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1, iParam2);
}

void func_83(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_70(iParam0))
	{
		return;
	}
	iVar0 = func_163(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1, iParam2);
}

void func_84(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_70(iParam0))
	{
		return;
	}
	iVar0 = func_163(iParam0);
	if (bParam1)
	{
		func_178(iParam0, 4);
		func_179(iVar0, 1);
		func_180(iVar0, 1);
	}
	else
	{
		func_181(iParam0, 4);
		func_180(iVar0, 0);
	}
}

int func_85(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	bVar0 = PED::_0xC488B8C0E52560D8(Global_35);
	bVar1 = PED::_0x2DC0E8DCBD3546E9(Global_35);
	if ((bVar0 || bVar1) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1944546609))
	{
		return 0;
	}
	if (bVar1 && uParam0->f_156 != -1)
	{
		iVar2 = func_36(uParam0);
		if (iVar2 != uParam0->f_156)
		{
			return 0;
		}
		if (uParam0->f_154 != iVar2)
		{
			uParam0->f_154 = iVar2;
			return 0;
		}
	}
	if (func_182())
	{
		return 0;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35))
	{
		return 0;
	}
	return 1;
}

int func_86(bool bParam0)
{
	if (func_23() == -1)
	{
		if (!bParam0 && INVENTORY::_0x7C7E4AB748EA3B07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_0x13D234A2A3F66E63(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

int func_87(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	struct<10> Var0;
	struct<16> Var10;
	int iVar26;
	int iVar27;
	int iVar28;
	var uVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	int iVar33;
	bool bVar34;
	bool bVar35;
	bool bVar36;

	if (func_183())
	{
		Global_1935689->f_10191 = iParam0;
		func_184(iParam0, 1, -142743235, 0, 0);
		return 0;
	}
	if (func_185())
	{
		HUD::_0xBFFF81E12A745A5F();
		func_186(iParam0, 0);
		func_184(func_187(), 1, -142743235, 0, 0);
		return 0;
	}
	if (!func_188(iParam0, bParam4))
	{
		return 0;
	}
	if (func_189(iParam0))
	{
		return 0;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
	{
		return 0;
	}
	iVar31 = 0;
	bVar32 = true;
	iVar33 = 1;
	bVar34 = true;
	Var0.f_4 = iParam3;
	Var0.f_5 = 1;
	if (func_190(iParam0, -2081717885))
	{
		func_191(iParam0, Var10, Var0, uVar29, bVar32, iVar33);
	}
	else if (func_190(iParam0, -1909684001))
	{
		func_192(iParam0, Var10, Var0, bVar32, iVar33);
	}
	else if (func_190(iParam0, 587975446))
	{
		func_193(iParam0, Var10);
	}
	else if (func_190(iParam0, 566155764))
	{
		if (!func_194(iParam0))
		{
			return 0;
		}
	}
	if (func_195(iParam0, bParam5, bParam6))
	{
		Global_1911772 = iParam0;
		Global_1911913 = MISC::GET_GAME_TIMER();
		return 1;
	}
	if (func_190(iParam0, -1227898937))
	{
		Var0.f_2 = iParam0;
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "doc_newspaper", 32);
		Var10.f_14 = 1024;
		Var10.f_15 = 1;
		func_196(Var10, 1);
		iVar33 = 0;
		bVar32 = false;
	}
	else if ((func_190(iParam0, -1472964441) || func_190(iParam0, -228153877)) || func_190(iParam0, 566155764))
	{
	}
	else if (func_190(iParam0, 1919582297))
	{
		if (((func_197() || TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1)) || TASK::_0x0C3CB2E600C8977D(Global_35, 1)) || !PED::IS_PED_ON_FOOT(Global_35))
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
		Var0.f_3 = iParam1;
		Var10 = { Var0 };
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_196(Var10, 0);
		bVar32 = false;
	}
	else if (func_122(iParam0) == -1650247667)
	{
		Var0.f_3 = 0;
		Var0.f_1 = iParam0;
		Var0.f_2 = 0;
		Var0 = func_198(Global_1058888->f_49121.f_4.f_31);
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "net_player_wheel_item_use", 32);
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_196(Var10, 0);
		iVar33 = 1;
	}
	else if (func_122(iParam0) == joaat("clothing"))
	{
		if (func_199(iParam0) == -999503751)
		{
			if (func_23() != -1)
			{
				return iVar33;
			}
			if (!func_200(iParam0))
			{
				func_201("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, 1);
				return iVar33;
			}
			bVar35 = func_202(7, iParam0);
			bVar36 = func_202(1, iParam0);
			if (bVar36 && !bVar35)
			{
				func_201("SI_ITEM_USE_OUTFITS_TEMP_HORSE", 10000, 0, 0, 0, 1);
				return iVar33;
			}
			if (!func_203(7))
			{
				func_201("SI_ITEM_USE_OUTFITS_NO_SADDLE", 10000, 0, 0, 0, 1);
				return iVar33;
			}
			if (!bVar35)
			{
				if (func_205(Global_35, func_204(7), 0))
				{
					func_201("SI_ITEM_USE_OUTFITS_STATIONARY", 10000, 0, 0, 0, 1);
				}
				else
				{
					func_201("SI_ITEM_USE_OUTFITS_NEAR_HORSE", 10000, 0, 0, 0, 1);
				}
				return iVar33;
			}
			iVar30 = func_206(iParam0);
			if (iVar30 == -1)
			{
				func_207(20, iParam0, 8, 0, 0);
			}
			else
			{
				func_207(20, iParam0, 0, 0, 0);
			}
		}
		else
		{
			switch (func_199(iParam0))
			{
				case -525676072:
				case -68128151:
				case 81053684:
					func_208(iParam0, 0);
					return iVar33;
				case -2061583405:
					func_209(iParam0);
					return 1;
				case -1719060085:
					if (iParam0 == &Global_1946804->f_1497.f_1[23 /*3*/])
					{
						func_210(Global_35, 260271636 /* GXTEntry: "No Gloves" */, 0, -358215195, 1, 1, 1, 0, 1, 0);
						PED::_0xCB9401F918CB0F75(Global_35, "PlayUnequipGlovesFidget", 1, 15);
						func_211(iParam0, 0);
						return 1;
					}
					else
					{
						PED::_0xCB9401F918CB0F75(Global_35, "PlayEquipGlovesFidget", 1, 15);
						func_211(iParam0, 1);
					}
					break;
			}
			func_210(Global_35, iParam0, 0, -358215195, 1, 1, 1, 0, 0, 0);
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1259508039: /* GXTEntry: "Satchel" */
				func_212(1);
				break;
			case -727924611: /* GXTEntry: "Wardrobe" */
				if (func_23() != -1)
				{
				}
				else if (!func_200(iParam0))
				{
					func_201("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, 1);
				}
				else
				{
					bVar35 = func_202(7, iParam0);
					bVar36 = func_202(1, iParam0);
					if (bVar36 && !bVar35)
					{
						if (MAP::DOES_BLIP_EXIST(Global_36558))
						{
							MAP::REMOVE_BLIP(&Global_36558);
						}
						Global_36558 = MAP::_0x3E593DF9C2962EC6(-1925605092);
						MAP::_0x662D364ABF16DE2F(Global_36558, 673950256);
						func_201(MISC::_CREATE_VAR_STRING(0, -1680440926, Global_36558), 10000, 0, 0, 0, 1);
					}
					else if (!func_203(7))
					{
						func_201("SI_ITEM_USE_WARDROBE_NO_SADDLE", 10000, 0, 0, 0, 1);
					}
					else if (!bVar35)
					{
						if (func_205(Global_35, func_204(7), 0))
						{
							func_201("SI_ITEM_USE_WARDROBE_STATIONARY", 10000, 0, 0, 0, 1);
						}
						else
						{
							if (MAP::DOES_BLIP_EXIST(Global_36558))
							{
								MAP::REMOVE_BLIP(&Global_36558);
							}
							Global_36558 = MAP::_0x3E593DF9C2962EC6(-1925605092);
							MAP::_0x662D364ABF16DE2F(Global_36558, 673950256);
							func_201(MISC::_CREATE_VAR_STRING(0, -482898802, Global_36558), 10000, 0, 0, 0, 1);
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
							func_196(Var10, 0);
						}
						Jump @2541; //curOff = 1636
						func_213();
						Jump @2541; //curOff = 1643
						if (!func_16(Global_1392040->f_1, 1) || func_16(Global_1392040->f_1, 512))
						{
							if (func_23() == -1)
							{
								if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("player_camp")) > 3)
								{
								}
								else
								{
									StringCopy(&(Var10.f_10), "player_camp", 32);
									Var10.f_14 = 6096;
									if (func_214(120))
									{
										iVar31 |= 8;
										Var0.f_6 = { -1407.407f, 1508.33f, 239f };
										Var0.f_6.f_3 = 260f;
									}
									else if (func_166(15))
									{
										iVar31 |= 16;
										Var0.f_6 = { 1775.903f, 1255.647f, 189.6069f };
										Var0.f_6.f_3 = 90f;
									}
									else if (!func_200(iParam0) || ((!func_216(Global_35, func_204(7), func_215(7), 1) || func_217() != 0) && !func_216(Global_35, Global_1900383->f_393, 5f, 1)))
									{
										iVar31 |= 128 | 32;
									}
									if ((func_16(iVar31, 128) && Global_1357522->f_10[1]) // PointerArith)
									{
										Global_1357522->f_10[1] = 0;
									}
									else if ((!func_16(iVar31, 128) && Global_1357522->f_10[0]) // PointerArith)
									{
										Global_1357522->f_10[0] = 0;
									}
									Var0 = iVar31;
									Var10 = { Var0 };
									Var10.f_15 = 1;
									func_196(Var10, 2);
								}
							}
							else if (func_200(-1838434463 /* GXTEntry: "Camp" */))
							{
								if (func_218(1))
								{
									func_219(2);
								}
								else if (func_220(1))
								{
									func_201("GC_SELECT_HELP_FOLLOWER_DEAD", 10000, 0, 0, 0, 1);
								}
								else
								{
									if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
									{
										func_201("GC_SELECT_GENERAL_FAIL", 10000, 0, 0, 0, 1);
									}
									else
									{
										func_201("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
									}
									func_221(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
								}
							}
							else if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
							{
								func_201("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
								func_221(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
							}
							else
							{
								func_201("GC_SELECT_HELP_DISABLED", 10000, 0, 0, 0, 1);
							}
						}
						else
						{
							Global_1392040->f_1 |= 2;
							iVar33 = 1;
						}
						Jump @2541; //curOff = 2207
						if (func_37(Global_35, 1, 0, 0) != joaat("weapon_kit_binoculars"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_kit_binoculars"), true, 0, false, false);
						}
						return 1;
						Jump @2541; //curOff = 2248
						if (func_37(Global_35, 1, 0, 0) != joaat("weapon_kit_camera"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_kit_camera"), true, 0, false, false);
						}
						return 1;
						Jump @2541; //curOff = 2289
						iVar27 = func_222(func_22());
						iVar28 = func_223();
						if (func_224(iVar27))
						{
							if (iVar27 == iVar28 && !func_225())
							{
								bVar34 = false;
							}
						}
						if (bVar34)
						{
							func_201("PROPERTY_SHAVE_INV", 10000, 0, 0, 0, 1);
						}
						Jump @2541; //curOff = 2359
						func_226(iParam0, 1, 0, 562618531, 0);
						Jump @2541; //curOff = 2377
						func_63(497, 1);
						Jump @2541; //curOff = 2388
						func_227(1);
						Jump @2541; //curOff = 2396
						func_226(iParam0, 1, 0, 562618531, 0);
						func_228(136579449 /* GXTEntry: "Beau\'s Bracelet" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						Jump @2541; //curOff = 2437
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), -569063887, 1928812891, 1, 0, -1082130432);
						bVar32 = false;
						return 1;
						Jump @2541; //curOff = 2472
						Var0.f_2 = -7337301; /* GXTEntry: "English Spelling Practice" */
						Var10 = { Var0 };
						StringCopy(&(Var10.f_10), "native_american_journal", 32);
						Var10.f_14 = 512;
						Var10.f_15 = 1;
						func_196(Var10, 0);
						iVar33 = 0;
						bVar32 = false;
						Jump @2541; //curOff = 2532
						iVar33 = 0;
					}
				}
				if (bVar32)
				{
					HUD::_0xBFFF81E12A745A5F();
				}
				return iVar33;
		}
	}

int func_88(int iParam0, float fParam1)
{
	if (!PED::_0x68821369A2CEADD5(Global_35, iParam0))
	{
		PED::_0xD65FDC686A031C83(Global_35, iParam0, fParam1);
		PED::_0x6D07B371E9439019(Global_35);
		return 0;
	}
	return 1;
}

int func_89(var uParam0, int iParam1)
{
	if (!func_85(uParam0) || (MISC::GET_GAME_TIMER() - uParam0->f_196) < 500)
	{
		return 0;
	}
	if (!func_70(&(uParam0->f_162[8])))
	{
		return 0;
	}
	if (!func_165(&(uParam0->f_162[8]), 0) && iParam1 == -734326242)
	{
		func_84(&(uParam0->f_162[8]), 1, 1);
	}
	if (func_229(&(uParam0->f_162[8]), 1))
	{
		func_88(-1783213919, 1086324736 /* Float: 6f */);
		func_144(uParam0->f_162[8], 1, 1);
		return 1;
	}
	return 0;
}

bool func_90()
{
	return &Global_1935436 == 2;
}

void func_91(int iParam0)
{
	if (iParam0 >= &Global_1935436)
	{
		return;
	}
	Global_1935436->f_1 = iParam0;
}

bool func_92()
{
	return &Global_1935436 == 1;
}

void func_93(int iParam0, float fParam1, bool bParam2)
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
	var uVar9;
	var uVar10;
	struct<2> Var11;
	struct<7> Var33[20];
	bool bVar174;
	bool bVar175;

	if ((func_190(iParam0, 1573112293) || func_190(iParam0, 672467738)) || func_190(iParam0, -550842268))
	{
		bVar8 = true;
	}
	Var11.f_1 = 20;
	ATTRIBUTE::_0xD962F8579D702DB5();
	Global_1935496->f_26 = 0;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iParam0, &Var11))
	{
		iVar0 = 0;
		while (iVar0 < Var11)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var11.f_1[iVar0]), Var33[iVar0 /*7*/]))
			{
				if (-943921969 == (Var33[iVar0 /*7*/])->f_1)
				{
					fVar1 = func_230(0, (IntToFloat((Var33[iVar0 /*7*/])->f_2) / fParam1));
					func_231((IntToFloat((Var33[iVar0 /*7*/])->f_2) / fParam1), 1);
					func_232(0, 7000);
					bVar175 = true;
				}
				else if (-1104847406 == (Var33[iVar0 /*7*/])->f_1)
				{
					fVar3 = func_230(2, (IntToFloat((Var33[iVar0 /*7*/])->f_2) / fParam1));
					func_233((IntToFloat((Var33[iVar0 /*7*/])->f_2) / fParam1));
					func_232(2, 7000);
					bVar174 = true;
				}
				else if (381158954 == (Var33[iVar0 /*7*/])->f_1)
				{
					fVar2 = func_230(1, (IntToFloat((Var33[iVar0 /*7*/])->f_2) / fParam1));
					func_234((IntToFloat((Var33[iVar0 /*7*/])->f_2) / fParam1));
					func_232(1, 7000);
				}
				else if (-416929031 == (Var33[iVar0 /*7*/])->f_1)
				{
					fVar4 = func_235((IntToFloat((Var33[iVar0 /*7*/])->f_2) / fParam1), ((Var33[iVar0 /*7*/])->f_5 / fParam1));
					if (func_236(&uVar9, &uVar10, fVar4))
					{
						func_237(fVar4, 1, bVar8, 1);
						func_232(0, 7000);
						bVar175 = true;
					}
				}
				else if (1857353317 == (Var33[iVar0 /*7*/])->f_1)
				{
					fVar5 = func_235((IntToFloat((Var33[iVar0 /*7*/])->f_2) / fParam1), ((Var33[iVar0 /*7*/])->f_5 / fParam1));
					if (func_236(&uVar9, &uVar10, fVar5))
					{
						func_238(fVar5, 1, bVar8, 1);
						func_232(2, 7000);
						bVar174 = true;
					}
				}
				else if (1681823811 == (Var33[iVar0 /*7*/])->f_1)
				{
					fVar6 = func_235((IntToFloat((Var33[iVar0 /*7*/])->f_2) / fParam1), ((Var33[iVar0 /*7*/])->f_5 / fParam1));
					if (func_236(&uVar9, &uVar10, fVar6))
					{
						func_239(fVar6, 1, bVar8, 1);
						func_232(1, 7000);
					}
				}
				else if (-816334026 == (Var33[iVar0 /*7*/])->f_1)
				{
					func_240((BUILTIN::TO_FLOAT((Var33[iVar0 /*7*/])->f_2) / fParam1), 1);
				}
				else if (bParam2)
				{
					if (2062242710 == (Var33[iVar0 /*7*/])->f_1)
					{
						fVar7 = func_241(BUILTIN::TO_FLOAT((Var33[iVar0 /*7*/])->f_3), (Var33[iVar0 /*7*/])->f_4);
						func_242(19, fVar7);
						bVar175 = true;
					}
					else if (-826379728 == (Var33[iVar0 /*7*/])->f_1)
					{
						fVar7 = func_241(BUILTIN::TO_FLOAT((Var33[iVar0 /*7*/])->f_3), (Var33[iVar0 /*7*/])->f_4);
						func_242(20, fVar7);
						bVar174 = true;
					}
					else if (-1191740624 == (Var33[iVar0 /*7*/])->f_1)
					{
						fVar7 = func_241(BUILTIN::TO_FLOAT((Var33[iVar0 /*7*/])->f_3), (Var33[iVar0 /*7*/])->f_4);
						func_242(18, fVar7);
					}
					else if (1869697234 == (Var33[iVar0 /*7*/])->f_1)
					{
						fVar7 = func_241(BUILTIN::TO_FLOAT((Var33[iVar0 /*7*/])->f_3), (Var33[iVar0 /*7*/])->f_4);
						func_242(0, fVar7);
						bVar175 = true;
					}
					else if (1342237631 == (Var33[iVar0 /*7*/])->f_1)
					{
						fVar7 = func_241(BUILTIN::TO_FLOAT((Var33[iVar0 /*7*/])->f_3), (Var33[iVar0 /*7*/])->f_4);
						func_242(2, fVar7);
						bVar174 = true;
					}
					else if (-1240225157 == (Var33[iVar0 /*7*/])->f_1)
					{
						fVar7 = func_241(BUILTIN::TO_FLOAT((Var33[iVar0 /*7*/])->f_3), (Var33[iVar0 /*7*/])->f_4);
						func_242(1, fVar7);
					}
				}
			}
			iVar0++;
		}
		func_243(iParam0, bParam2, bVar174, bVar175);
		PLAYER::_0x0E1DB1F8F5B561DC(fVar1, fVar2, fVar3, BUILTIN::ROUND((fVar4 / 2f)), BUILTIN::ROUND((fVar6 / 2f)), BUILTIN::ROUND((fVar5 / 2f)));
	}
}

int func_94(var uParam0)
{
	bool bVar0;
	int iVar1;

	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_WHISTLE"), false);
	if (!func_16(uParam0->f_151, 8))
	{
		func_244(uParam0);
		HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(1323335645, "SLEEP", 1, 0, 0, 0);
		bVar0 = false;
		if (func_229(&(uParam0->f_162[12]), 1))
		{
			bVar0 = true;
			uParam0->f_186 = 6;
		}
		else if (func_229(&(uParam0->f_162[13]), 1))
		{
			bVar0 = true;
			uParam0->f_186 = 12;
		}
		else if (func_229(&(uParam0->f_162[14]), 1))
		{
			bVar0 = true;
			uParam0->f_186 = 18;
		}
		else if (func_229(&(uParam0->f_162[15]), 1))
		{
			bVar0 = true;
			uParam0->f_186 = 0;
		}
		if (bVar0)
		{
			uParam0->f_187 = -1;
			if (!TASK::_DOES_SCENARIO_POINT_EXIST(uParam0[5]))
			{
				(*uParam0)[5] = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(*(uParam0->f_7[5 /*3*/]), uParam0->f_191, 3f, 0, 0);
			}
			func_17(&(uParam0->f_151), 8);
			func_48(256);
			if (!func_16(uParam0->f_151, 1))
			{
				if (uParam0->f_154 == 4)
				{
					uParam0->f_195 = ANIMSCENE::_CREATE_ANIM_SCENE("scenario@MECH@CAMP_SETUP@sit_yawn_exit", 0, 0, false, true);
				}
				else
				{
					uParam0->f_195 = ANIMSCENE::_CREATE_ANIM_SCENE("scenario@MECH@CAMP_SETUP@kneel_yawn_exit", 0, 0, false, true);
				}
			}
			uParam0->f_156 = 5;
			uParam0->f_193 = ANIMSCENE::_CREATE_ANIM_SCENE(func_245(uParam0->f_186), 0, 0, false, true);
			if (func_56(524288))
			{
				uParam0->f_186 = 6;
			}
			if (Global_1392040->f_7 == -15)
			{
				Global_1392040->f_7 = func_147();
			}
			iVar1 = Global_1392040->f_7;
			func_246(&iVar1, 0, 0, 3, 0, 0, 0, 0);
			if (!func_247(iVar1))
			{
				Global_1392040->f_8++;
			}
			else
			{
				Global_1392040->f_8 = 0;
			}
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_193);
			func_53(uParam0);
		}
		else
		{
			func_49(256);
		}
	}
	else if (func_16(uParam0->f_151, 8))
	{
		if (!func_16(uParam0->f_151, 1))
		{
			if (func_248(uParam0->f_195))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_195, "player", Global_35, 0);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_195, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_ENTITY_ROTATION(Global_35, 2), 2);
				ANIMSCENE::START_ANIM_SCENE(uParam0->f_195);
				func_6(&(uParam0->f_151), 8);
				func_49(256);
				uParam0->f_187 = -1;
				func_41(uParam0, 8);
				return 1;
			}
			else
			{
				func_248(uParam0->f_195);
				return 0;
			}
		}
	}
	if (func_229(&(uParam0->f_162[3]), 1) || !TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
	{
		func_49(256);
		uParam0->f_187 = -1;
		func_53(uParam0);
		func_41(uParam0, 5);
		return 1;
	}
	return 0;
}

void func_95(int iParam0, float fParam1)
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(iParam0, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam1, 1f);
}

void func_96(var uParam0)
{
	if (!func_16(uParam0->f_151, 2048))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_159))
		{
			uParam0->f_159 = TASK::_0x295514F198EFD0CA(uParam0[0], "p_boiler02x");
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_159))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_159, true);
			func_17(&(uParam0->f_150), 1);
			uParam0->f_57.f_83 = 1;
		}
		else
		{
			func_6(&(uParam0->f_150), 1);
			uParam0->f_57.f_83 = 0;
		}
		func_17(&(uParam0->f_151), 2048);
	}
	else if (uParam0->f_57.f_83)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_159))
		{
			uParam0->f_57.f_83 = 0;
			func_6(&(uParam0->f_150), 1);
			uParam0->f_57.f_84 = 0;
		}
	}
}

int func_97(var uParam0, var uParam1)
{
	func_47(131072);
	if (func_249(uParam0))
	{
		ENTITY::SET_ENTITY_PROOFS(Global_35, 0, false);
		return 1;
	}
	else
	{
		ENTITY::SET_ENTITY_PROOFS(Global_35, 2, false);
	}
	return 0;
}

int func_98(bool bParam0)
{
	if (func_23() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_86(bParam0));
}

void func_99(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	struct<2> Var1;
	vector3 vVar3;
	int iVar10;

	if (!func_121(iParam0, 0))
	{
		return;
	}
	func_251(func_250(-413660030), iParam1);
	if (bParam3 && iParam0 != -1199896558)
	{
		if (func_23() == -1)
		{
			if (func_190(iParam0, -1588156645))
			{
				iVar0 = func_253(func_252(iParam0, 0), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar0))
				{
					func_254(iVar0);
				}
			}
		}
		if (iParam4 == 0)
		{
			if (func_122(iParam0) == -1977020088)
			{
				if (func_255(iParam0, 0))
				{
					func_256(iParam0, 1, 0, 1, 0);
				}
			}
			else
			{
				func_228(iParam0, iParam1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		else
		{
			func_257(iParam0, iParam4, iParam1);
		}
	}
	Var1 = { func_258(iParam0) };
	STATS::_0x6A0184E904CDF25E(&Var1, iParam1);
	if (func_259(iParam0, 0))
	{
		Var1 = { func_260(-1276738576, -1555359431) };
	}
	else if (func_259(iParam0, 2))
	{
		Var1 = { func_260(-1276738576, joaat("ammo")) };
	}
	else if (func_259(iParam0, 5))
	{
		Var1 = { func_260(-1276738576, 644069854) };
	}
	else if (func_259(iParam0, 1))
	{
		Var1 = { func_260(-1276738576, -97115714) };
	}
	else if (func_259(iParam0, 3))
	{
		Var1 = { func_260(-1276738576, joaat("weapons")) };
	}
	else if (func_259(iParam0, 4))
	{
		Var1 = { func_260(-1276738576, 1455184052) };
	}
	STATS::_0x6A0184E904CDF25E(&Var1, 1);
	if (func_23() == 0)
	{
		Global_1051039 = iParam0;
		return;
	}
	if (bParam2)
	{
		if (func_259(iParam0, 0))
		{
			func_261(40);
		}
		else
		{
			func_261(39);
		}
	}
	iVar10 = 0;
	if ((ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar3) && vVar3.z == joaat("clothing")) && func_262(Global_35, iParam0, &iVar10))
	{
		func_210(Global_35, iParam0, 0, -358215195, 1, 1, 1, 0, 1, 0);
	}
}

void func_100(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

void func_101(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_263(&Global_0, 8);
	}
	if (!func_264() || func_23() != -1)
	{
		return;
	}
	func_263(&Global_0, 1);
}

void func_102(int iParam0, bool bParam1)
{
	float fVar0;

	fVar0 = BUILTIN::TO_FLOAT(iParam0);
	if (Global_1347477->f_4 + 60000) > MISC::GET_GAME_TIMER()
	{
		fVar0 = (BUILTIN::TO_FLOAT(iParam0) - Global_1347477->f_5);
	}
	if (fVar0 > 0f)
	{
		PLAYER::_0x51345AE20F22C261(PLAYER::PLAYER_ID(), fVar0, 0, 0, 0);
		Global_1347477->f_5 = BUILTIN::TO_FLOAT(iParam0);
		func_232(2, 7000);
	}
	Global_1347477->f_4 = MISC::GET_GAME_TIMER();
	func_265(0);
	if (bParam1)
	{
		func_266(100f);
	}
}

void func_103()
{
	if (func_267(0))
	{
		func_268(0, 0, 100);
		func_268(0, 1, 100);
	}
	if (func_267(1))
	{
		func_268(1, 0, 100);
		func_268(1, 1, 100);
	}
}

void func_104(bool bParam0)
{
	if (bParam0)
	{
		Global_1935436->f_9 = 0f;
	}
	Global_1935436->f_8 = 0f;
	Global_1935436->f_12.f_1 = 0f;
	Global_1935436->f_12 = 0f;
	Global_1935436->f_12.f_3 = 0f;
	Global_1935436->f_12.f_2 = 0f;
	Global_1935436->f_12.f_4 = 0;
	PLAYER::_0x3C4AE8506638C7E2(PLAYER::GET_PLAYER_INDEX(), 1);
	PLAYER::_0x8F44EBB3BA8F6D44(PLAYER::GET_PLAYER_INDEX(), 0);
	PED::_0x06D26A96CA1BCA75(Global_35, 10, 0f, 0);
	AUDIO::SET_PED_IS_DRUNK(Global_35, false);
	PED::_0x406CCF555B04FAD3(Global_35, 0, 0f);
	func_269(0f);
	Global_1935436->f_11 = 1;
	if (func_270())
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "ARTHUR");
	}
	else
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "JOHN_PLAYER");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
	{
		func_271();
	}
	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	}
}

void func_105(int iParam0)
{
	Global_1392040->f_6 = iParam0;
}

void func_106(vector3 vParam0, float fParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 1048576;
	if (bParam4)
	{
		iVar0 |= 131072;
	}
	if (bParam5)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_107(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_272() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0 /*9*/];
		if (((func_273(iVar1) && !func_274(iVar1, iParam2)) && (!bParam3 || !func_275(iVar1))) && (!bParam4 || !func_276(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_277(iVar0);
			}
		}
		iVar0++;
	}
}

void func_108(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (iParam0 == 0 && Global_43890 == 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (&Global_40.f_11922[iVar0] == 0)
		{
			Jump @96; //curOff = 52
		}
		else
		{
			func_278(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_279(1);
	}
}

void func_109(int iParam0)
{
	PLAYER::_0x51345AE20F22C261(PLAYER::PLAYER_ID(), BUILTIN::TO_FLOAT(iParam0 * 14), 0, 0, 0);
}

void func_110(var uParam0)
{
	int iVar0;

	if (func_85(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_196) > 250)
	{
		iVar0 = PED::_0xC22AA08A8ADB87D4(Global_35);
		if (iVar0 == -518407211)
		{
			func_88(653141085, 1086324736 /* Float: 6f */);
			uParam0->f_196 = MISC::GET_GAME_TIMER();
		}
		else if (iVar0 == -1433449364)
		{
			func_88(1335077954, 1086324736 /* Float: 6f */);
			uParam0->f_196 = MISC::GET_GAME_TIMER();
		}
		else if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_35) && (MISC::GET_FRAME_COUNT() % 2) == 0)
		{
			TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
		}
	}
}

void func_111(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0[iVar0]))
		{
			TASK::_0x81948DFE4F5A0283(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_112(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_159) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_159, true))
	{
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&(uParam0->f_159));
	}
}

void func_113(var uParam0)
{
	uParam0->f_153 = 0;
	uParam0->f_154 = -1;
	uParam0->f_155 = 0;
	uParam0->f_156 = -1;
	uParam0->f_157 = 0;
	uParam0->f_158 = 0;
	uParam0->f_152 = 0;
	uParam0->f_159 = 0;
}

bool func_114(int iParam0, vector3 vParam1)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return false;
	}
	return VOLUME::_0xF256A75210C5C0EB(iParam0, vParam1);
}

int func_115()
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

int func_116(int iParam0)
{
	if (!func_119(iParam0))
	{
		return -1;
	}
	return func_281(func_280(iParam0));
}

bool func_117(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_118(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_119(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_120(int iParam0, bool bParam1)
{
	switch (func_282(iParam0))
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

int func_121(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_122(int iParam0)
{
	vector3 vVar0;

	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_123(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		return 0;
	}
	iVar0 = func_283(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_284("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_285(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_286(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_287(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_287(iVar1);
	}
	return 0;
}

int func_124(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_122(iParam0);
	if (iVar0 == joaat("ammo") || (bParam1 && iVar0 == joaat("weapon")))
	{
		iVar1 = func_283(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("weapon"))
	{
		return func_288(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_86(bParam2), iParam0, 0);
	return iVar2;
}

bool func_125(var uParam0)
{
	return func_289(*uParam0, 1);
}

float func_126(var uParam0)
{
	if (!func_125(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_290(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_291() - uParam0->f_1);
}

void func_127(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_291() - fParam1);
	func_292(uParam0, 1);
	func_293(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_128(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_129(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

void func_130(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_144((*uParam0)[iVar0], 1, 1);
		iVar0++;
	}
}

void func_131(var uParam0, bool bParam1)
{
	func_294(0);
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
	uParam0->f_58 = 0;
	func_55(8);
	ATTRIBUTE::_0xD962F8579D702DB5();
}

int func_132()
{
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "player_crafting_active"))
	{
		return DECORATOR::DECOR_GET_BOOL(PLAYER::PLAYER_PED_ID(), "player_crafting_active");
	}
	return 0;
}

void func_133(bool bParam0)
{
	if (bParam0)
	{
	}
	Global_1911914->f_1582 = bParam0;
	DECORATOR::DECOR_SET_BOOL(Global_35, "player_crafting_active", bParam0);
}

void func_134(var uParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_63))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_63, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_65))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_65, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_66))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_66, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_67))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_67, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_68))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_68, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_69))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_69, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_70))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_70, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_71))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_71, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_72))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_72, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_85))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_85));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_86));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_87))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_87));
	}
}

int func_135(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<16> Var5;
	int iVar21;
	struct<7> Var22;
	struct<2> Var29;

	if (!func_121(iParam0, 0))
	{
		return -1;
	}
	if (!func_295(iParam0, iParam1, 0, 0, 0, 1))
	{
		return -1;
	}
	Var0 = { func_296(iParam0, 1, 0) };
	if (func_297(iParam0, &Var0, 1, 0, 1))
	{
		return -1;
	}
	Var5 = { func_298(iParam0, Var0, Var0.f_4, 1) };
	Var5.f_13 = iParam1;
	Var5.f_12 = 1248274121;
	iVar21 = func_299(2113164098, &Var5, 1);
	if (iVar21 == -1)
	{
		return -1;
	}
	Var22.f_1 = 1;
	func_300(iVar21, Var22);
	Var29 = { func_258(iParam0) };
	STATS::_0x6A0184E904CDF25E(&Var29, 1);
	return iVar21;
}

void func_136(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		func_301(11, 1, 0);
		iVar0++;
	}
	if (func_259(iParam0, 0))
	{
		func_302(40);
	}
	else
	{
		func_302(39);
	}
}

void func_137(var uParam0)
{
	uParam0->f_18 = 1;
}

int func_138(int iParam0, int iParam1)
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

bool func_139(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

bool func_140(int iParam0)
{
	return (func_303(iParam0, 4) || func_303(iParam0, 5));
}

bool func_141(int iParam0)
{
	return func_303(iParam0, 7);
}

bool func_142(int iParam0)
{
	return func_303(iParam0, 6);
}

bool func_143(int iParam0, int iParam1, float fParam2)
{
	return func_304(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

void func_144(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_70(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_163(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_305(iVar0);
	*uParam0 = 0;
}

void func_145(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < Global_1879534->f_7300)
	{
		if (!MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar1 /*4*/]), 2))
		{
			if (MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar1 /*4*/]), 1))
			{
				switch (&Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar1 /*4*/])->f_1 /*3*/])
				{
					case -2093459088:
						iVar0 = (Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar1 /*4*/])->f_1 /*3*/])->f_2;
						if (func_306(iVar0))
						{
							if (func_307(iVar0))
							{
								func_308(iVar0, bParam0);
							}
						}
						break;
				}
			}
		}
		iVar1++;
	}
}

void func_146()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (func_117(&(Global_40.f_450[iVar0])))
		{
			if (((*Global_1347702)[&Global_40.f_450[iVar0] /*49*/])->f_14 & 2 != 0)
			{
				func_309(&(Global_40.f_450[iVar0]), 1, 0);
			}
		}
		iVar0++;
	}
}

int func_147()
{
	return &Global_1899515;
}

void func_148(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

int func_149(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_310(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_311(iParam0))
	{
		return 0;
	}
	if (func_312(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_313(iParam0, 1)) || func_314(32768))
	{
		if (!func_313(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_315())
	{
		return 0;
	}
	return 1;
}

void func_150(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_151(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
	while (iVar0 < 48)
	{
		if (func_176(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == ((*Global_1945938)[iVar0 /*18*/])->f_11 && iParam1 == ((*Global_1945938)[iVar0 /*18*/])->f_4)
				{
					if (iParam3 <= Global_1945938[iVar0 /*18*/])
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
				func_177(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

bool func_152(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_70(iParam0))
	{
		return false;
	}
	iVar0 = func_163(iParam0);
	if (HUD::_UIPROMPT_HAS_MASH_MODE(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_153(var uParam0)
{
	if (func_70(uParam0->f_183))
	{
		func_144(&(uParam0->f_183), 1, 1);
	}
}

void func_154(var uParam0)
{
	if (func_70(uParam0->f_181))
	{
		func_144(&(uParam0->f_181), 1, 1);
	}
}

bool func_155()
{
	return (Global_1914319->f_17369 || Global_1914319->f_18996.f_1);
}

int func_156(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
	if (ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		iVar2 = func_316(iVar1);
		if (((func_317(iVar2) && !ENTITY::_0x8DE41E9902E85756(iVar0)) && FLOCK::_0xF8B48A361DC388AE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)) != 2) && !FIRE::_0xCDC25355C0D65963(iVar0))
		{
			uParam0->f_57.f_77 = iVar2;
			uParam0->f_57.f_78 = -214678071;
			if (func_70(uParam0->f_182))
			{
				func_82(uParam0->f_182, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iVar0), 0, 1);
			}
			return 1;
		}
	}
	return 0;
}

void func_157(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_70(iParam0))
	{
		return;
	}
	iVar0 = func_163(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, sParam1);
}

int func_158(var uParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;

	iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER(vParam1, 0f, 0f, 0f, 1f, 1f, 1f);
	iVar1 = ENTITY::_0x84CCF9A12942C83D(iVar0, *uParam0, 1, 1, 0, 0);
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		uVar3 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, *uParam0);
		iVar4 = MISC::_GET_ENTITY_FROM_ITEM(uVar3);
		if (ENTITY::IS_ENTITY_A_PED(iVar4))
		{
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar4);
			if (iVar5 != Global_35)
			{
				if (PED::_GET_CARRIER_AS_PED(iVar5) != Global_35)
				{
					func_318(iVar0);
					return 1;
				}
			}
		}
		iVar2++;
	}
	func_318(iVar0);
	return 0;
}

void func_159(int iParam0, bool bParam1, bool bParam2)
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
	var uVar42;
	int iVar43;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	iVar0 = func_319(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!func_98(0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		func_320(iVar1, 0);
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
			if (func_121(iVar26, 0))
			{
				if (!bParam1 || func_321(iVar26))
				{
					func_228(iVar26, &(Var2.f_12[iVar25]), bParam2, 0, 0, 752097756, 0, 0, 0, 0);
				}
			}
			iVar25++;
		}
	}
	else
	{
		iVar39 = PED::_GET_PED_DAMAGE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0));
		if (func_25(-269048282 /* GXTEntry: "Buck Antler Trinket" */, 1, 0))
		{
			if (iVar39 < 2 && MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
			{
				iVar40 = iVar39;
				iVar40++;
				iVar39 = iVar40;
			}
		}
		iVar41 = FLOCK::_0xF8B48A361DC388AE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0));
		uVar42 = func_322(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), iVar41);
		PED::_0x6B89FAA36FC909A3(&iVar27, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), iVar39, uVar42);
		iVar38 = 0;
		while (iVar38 < iVar27)
		{
			if (&iVar27[iVar38] != 0)
			{
				if (func_323(iVar0) && !func_324(&(iVar27[iVar38])))
				{
					iVar27[iVar38] = 0;
				}
				else if (!bParam1 || func_321(&(iVar27[iVar38])))
				{
					func_228(&(iVar27[iVar38]), 1, bParam2, 0, 0, 752097756, 0, 0, 0, 0);
				}
			}
			iVar38++;
		}
	}
	iVar43 = func_325(iVar0);
	if (!func_121(iVar43, 0))
	{
		iVar43 = func_326(iVar0);
	}
	if (func_121(iVar43, 0))
	{
		func_327(iVar43, 1, 1, -142743235, 0);
	}
	ENTITY::_0x0D0DB2B6AF19A987(&iVar0);
}

int func_160(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, iParam0, false))
	{
		if (func_121(iVar0, 0))
		{
			if (WEAPON::_0x0556E9D2ECF39D01(iVar0) || func_328(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_161()
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
	iVar2 = func_329();
	if (((iVar2 == 0 || iVar2 == 7) || iVar2 == 2) || iVar2 == 10)
	{
		return 1;
	}
	return 0;
}

void func_162(int iParam0)
{
	Global_1935496->f_29 = (Global_1935496->f_29 || iParam0);
}

int func_163(int iParam0)
{
	return iParam0;
}

bool func_164()
{
	return &Global_1898068;
}

bool func_165(int iParam0, bool bParam1)
{
	if (bParam1 && !func_70(iParam0))
	{
		return false;
	}
	return !func_176(iParam0, 4);
}

int func_166(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_330(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

bool func_167()
{
	return SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(130487986) > 0;
}

void func_168(var uParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -996707397))
	{
		func_17(&(uParam0->f_151), 2);
	}
	else
	{
		func_6(&(uParam0->f_151), 2);
	}
	if (func_16(iParam1, 1))
	{
		if (!func_70(&(uParam0->f_162[0])))
		{
			uParam0->f_162[0] = func_81("KNEEL_FIRE", joaat("INPUT_CONTEXT_B"), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			func_82(&(uParam0->f_162[0]), 1754796591, 0, 1);
		}
	}
	else if (func_70(&(uParam0->f_162[0])))
	{
		func_144(uParam0->f_162[0], 1, 1);
	}
	if (((func_16(iParam1, 4096) && func_16(uParam0->f_150, 16)) && !func_56(536870912)) && uParam0->f_157 != 2)
	{
		MISC::SET_BIT(&(Global_1956578->f_1), 2);
		MISC::SET_BIT(&(Global_1956578->f_1), 3);
		if (!func_70(&(uParam0->f_162[5])))
		{
			uParam0->f_162[5] = func_81("CRAFT_COOK", joaat("INPUT_CONTEXT_X"), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			func_82(&(uParam0->f_162[5]), 1754796591, 0, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1956578->f_1), 2);
		if (func_70(&(uParam0->f_162[5])))
		{
			func_144(uParam0->f_162[5], 1, 1);
		}
	}
	if (func_16(iParam1, 64) && func_16(uParam0->f_150, 16384))
	{
		if (!func_70(&(uParam0->f_162[17])))
		{
			uParam0->f_162[17] = func_81("CAMP_FT_PROMPT", joaat("INPUT_CONTEXT_A"), 2, 0, 0, 2, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			func_82(&(uParam0->f_162[17]), 1754796591, 0, 1);
		}
	}
	else if (func_70(&(uParam0->f_162[17])))
	{
		func_144(uParam0->f_162[17], 1, 1);
	}
	if ((((func_16(iParam1, 16384) && !func_56(536870912)) && uParam0->f_157 != 2) && func_23() != 0) && !func_166(15))
	{
		if (!func_70(&(uParam0->f_162[9])) && func_25(-569063887 /* GXTEntry: "Journal" */, 1, 0))
		{
			uParam0->f_162[9] = func_81("JOURNAL", joaat("INPUT_OPEN_JOURNAL"), 3, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("MEDIUM_TIMED_EVENT"), 0);
			func_83(&(uParam0->f_162[9]), 21, 1, 1);
			func_83(&(uParam0->f_162[9]), 13, 1, 1);
			func_83(&(uParam0->f_162[9]), 20, 1, 1);
			func_82(&(uParam0->f_162[9]), 1754796591, 0, 1);
		}
		if (!func_70(&(uParam0->f_162[10])))
		{
			uParam0->f_162[10] = func_81("CAMP_SATCHEL", joaat("INPUT_OPEN_SATCHEL_MENU"), 3, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("MEDIUM_TIMED_EVENT"), 0);
			func_83(&(uParam0->f_162[10]), 21, 1, 1);
			func_82(&(uParam0->f_162[10]), 1754796591, 0, 1);
		}
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
	}
	else
	{
		if (uParam0->f_154 != 5)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
		}
		if (func_70(&(uParam0->f_162[9])))
		{
			func_144(uParam0->f_162[9], 1, 1);
		}
		if (func_70(&(uParam0->f_162[10])))
		{
			func_144(uParam0->f_162[10], 1, 1);
		}
	}
	if (func_56(134217728))
	{
		if (func_70(&(uParam0->f_162[9])))
		{
			func_84(&(uParam0->f_162[9]), 0, 1);
		}
		if (func_70(&(uParam0->f_162[10])))
		{
			func_84(&(uParam0->f_162[10]), 0, 1);
		}
	}
	else
	{
		if (func_70(&(uParam0->f_162[9])) && !func_165(&(uParam0->f_162[9]), 0))
		{
			func_84(&(uParam0->f_162[9]), 1, 1);
		}
		if (func_70(&(uParam0->f_162[10])) && !func_165(&(uParam0->f_162[10]), 0))
		{
			func_84(&(uParam0->f_162[10]), 1, 1);
		}
	}
	if ((((func_56(1) || func_56(134217728)) || func_16(uParam0->f_151, 2)) && !func_56(4096)) && uParam0->f_157 != 2)
	{
		if (func_70(&(uParam0->f_162[5])))
		{
			func_84(&(uParam0->f_162[5]), 0, 1);
		}
	}
	else if (func_70(&(uParam0->f_162[5])))
	{
		func_84(&(uParam0->f_162[5]), 1, 1);
	}
	if ((func_16(iParam1, 2) && func_16(uParam0->f_150, 1)) && uParam0->f_57.f_84 > 0)
	{
		func_96(uParam0);
		if (!func_70(&(uParam0->f_162[2])))
		{
			uParam0->f_162[2] = func_81("POUR_COFFEE", joaat("INPUT_CONTEXT_A"), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			func_82(&(uParam0->f_162[2]), 1754796591, 0, 1);
		}
	}
	else if (func_70(&(uParam0->f_162[2])))
	{
		func_144(uParam0->f_162[2], 1, 1);
	}
	if (func_16(iParam1, 8) && func_16(uParam0->f_150, 2))
	{
		if (!func_70(&(uParam0->f_162[1])))
		{
			if (uParam0->f_154 == 4)
			{
				uParam0->f_162[1] = func_81("PLAYER_SIT", joaat("INPUT_CONTEXT_B"), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			}
			else if (func_16(iParam1, 32))
			{
				uParam0->f_162[1] = func_81("PLAYER_SIT", joaat("INPUT_CONTEXT_X"), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			}
			else
			{
				uParam0->f_162[1] = func_81("PLAYER_SIT", joaat("INPUT_CONTEXT_Y"), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			}
			func_82(&(uParam0->f_162[1]), 1754796591, 0, 1);
		}
	}
	else if (func_70(&(uParam0->f_162[1])))
	{
		func_144(uParam0->f_162[1], 1, 1);
	}
	if (func_56(4) || func_16(uParam0->f_151, 2))
	{
		if (func_70(&(uParam0->f_162[1])))
		{
			func_84(&(uParam0->f_162[1]), 0, 1);
		}
	}
	else if (func_70(&(uParam0->f_162[1])))
	{
		func_84(&(uParam0->f_162[1]), 1, 1);
	}
	if ((func_16(iParam1, 16) && !func_56(536870912)) && uParam0->f_157 != 2)
	{
		if (!func_70(&(uParam0->f_162[3])))
		{
			uParam0->f_162[3] = func_81("LEAVE", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			if (func_16(iParam1, 524288) && func_16(uParam0->f_151, 131072))
			{
				func_331(&(uParam0->f_162[3]), 0, 1);
				func_83(&(uParam0->f_162[3]), 20, 1, 1);
				func_83(&(uParam0->f_162[3]), 13, 1, 1);
			}
			func_82(&(uParam0->f_162[3]), 1754796591, 0, 1);
		}
		if (func_16(iParam1, 524288) && func_16(uParam0->f_151, 131072))
		{
			if (!func_70(&(uParam0->f_162[16])))
			{
				uParam0->f_162[16] = func_81("LEAVE", joaat("INPUT_CONTEXT_B"), 2, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("MEDIUM_TIMED_EVENT"), 0);
				func_83(&(uParam0->f_162[16]), 19, 1, 1);
				func_83(&(uParam0->f_162[16]), 20, 1, 1);
				func_83(&(uParam0->f_162[16]), 13, 1, 1);
				func_332(uParam0->f_162[16], "INPUT_PCAMP_TEARDWN");
				func_82(&(uParam0->f_162[16]), 1754796591, 0, 1);
			}
		}
		else if (func_70(&(uParam0->f_162[16])))
		{
			func_144(uParam0->f_162[16], 1, 1);
		}
	}
	else
	{
		if (func_70(&(uParam0->f_162[3])))
		{
			func_144(uParam0->f_162[3], 1, 1);
		}
		if (func_70(&(uParam0->f_162[16])))
		{
			func_144(uParam0->f_162[16], 1, 1);
		}
	}
	if (func_56(1048576) || func_16(uParam0->f_151, 2))
	{
		if (func_70(&(uParam0->f_162[3])) && func_165(&(uParam0->f_162[3]), 0))
		{
			func_84(&(uParam0->f_162[3]), 0, 1);
			if (func_16(iParam1, 524288) && func_16(uParam0->f_151, 131072))
			{
				func_331(&(uParam0->f_162[3]), 0, 1);
			}
		}
	}
	else if (func_70(&(uParam0->f_162[3])) && !func_165(&(uParam0->f_162[3]), 0))
	{
		func_84(&(uParam0->f_162[3]), 1, 1);
		if (func_16(iParam1, 524288) && func_16(uParam0->f_151, 131072))
		{
			func_331(&(uParam0->f_162[3]), 0, 1);
		}
	}
	if (func_56(256))
	{
		if (func_70(&(uParam0->f_162[16])))
		{
			func_84(&(uParam0->f_162[16]), 0, 1);
		}
	}
	else if (func_70(&(uParam0->f_162[16])))
	{
		func_84(&(uParam0->f_162[16]), 1, 1);
	}
	if (func_23() != 0 && func_16(uParam0->f_150, 256))
	{
		if (!func_56(2048) || func_16(uParam0->f_151, 2))
		{
			if (((func_16(iParam1, 32) && !func_56(536870912)) && uParam0->f_157 != 2) && func_333(uParam0))
			{
				if (!func_70(&(uParam0->f_162[4])))
				{
					uParam0->f_162[4] = func_81("SLEEP", joaat("INPUT_CONTEXT_Y"), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
					func_82(&(uParam0->f_162[4]), 1754796591, 0, 1);
				}
			}
			else if (func_70(&(uParam0->f_162[4])))
			{
				func_144(uParam0->f_162[4], 1, 1);
			}
		}
	}
	if (((func_56(2048) || func_56(134217728)) || func_16(uParam0->f_151, 2)) || func_334(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		if (func_70(&(uParam0->f_162[4])))
		{
			func_84(&(uParam0->f_162[4]), 0, 1);
		}
	}
	else if (func_70(&(uParam0->f_162[4])))
	{
		func_84(&(uParam0->f_162[4]), 1, 1);
	}
	uParam0->f_185 = func_67(HUD::_UIPROMPT_GET_GROUP_ACTIVE_PAGE(1754796591));
	iVar0 = 1;
	if (!func_56(536870912))
	{
		HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(uParam0->f_152, 3f, 0, iVar0, 1754796591, uParam0->f_185, 0);
	}
}

int func_169(var uParam0)
{
	int iVar0;

	if (func_56(16777216) || func_16(uParam0->f_151, 524288))
	{
		func_6(&(uParam0->f_151), 524288);
		func_55(16777216);
		uParam0->f_197 = -1;
		return 5;
	}
	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (func_70(&(uParam0->f_162[iVar0])))
		{
			if (iVar0 == 3)
			{
				if (func_165(&(uParam0->f_162[iVar0]), 0))
				{
					if (func_229(&(uParam0->f_162[iVar0]), 1))
					{
						return iVar0;
					}
					else if (func_335())
					{
						if (!func_125(&(uParam0->f_198)))
						{
							func_31(&(uParam0->f_198));
						}
						if (func_336(&(uParam0->f_198), 0.5f))
						{
							return iVar0;
						}
					}
					else if (func_125(&(uParam0->f_198)))
					{
						func_337(&(uParam0->f_198));
					}
				}
			}
			else if ((iVar0 == 16 || iVar0 == 9) || iVar0 == 10)
			{
				if (func_152(&(uParam0->f_162[iVar0]), 1))
				{
					return iVar0;
				}
				else if (iVar0 == 16)
				{
					if (func_338(&(uParam0->f_162[16]), 1))
					{
						if (!func_125(&(uParam0->f_57.f_89)))
						{
							func_31(&(uParam0->f_57.f_89));
						}
						else if (func_29(&(uParam0->f_57.f_89), 0.1f))
						{
							func_157(&(uParam0->f_162[16]), "CAMP_TEARDOWN", 1);
						}
					}
					else
					{
						if (func_125(&(uParam0->f_57.f_89)))
						{
							func_337(&(uParam0->f_57.f_89));
						}
						func_157(&(uParam0->f_162[16]), "LEAVE", 1);
					}
				}
			}
			else if (func_229(&(uParam0->f_162[iVar0]), 1))
			{
				if (iVar0 == 5)
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

void func_170(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_6(&(uParam0->f_151), 16);
	}
}

int func_171(var uParam0)
{
	if (func_339(uParam0) && !func_16(uParam0->f_151, 4))
	{
		return 1;
	}
	if (!func_85(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_157)
	{
		case 1:
			switch (uParam0->f_155)
			{
				case 8:
					func_88(-1890302844, 0.5f);
					break;
				case 7:
					func_88(36116464, 0.5f);
					break;
				case 6:
					if (func_340(uParam0, 0))
					{
						if (func_88(420089068, 1f))
						{
							return 1;
						}
					}
					break;
				default:
					func_341(uParam0);
					break;
			}
			break;
		case 9:
			uParam0->f_156 = 4;
			if (func_342(uParam0))
			{
				if (func_343(Global_35, uParam0[4], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL1@MALE_A@KNEEL1_TRANS_STOOL1", "KNEEL1_TRANS_STOOL1", "PROP_PLAYER_SEAT_CHAIR_GENERIC_HUNTING1"))
				{
					func_6(&(uParam0->f_151), 4);
				}
			}
			break;
		case 6:
			func_342(uParam0);
			break;
	}
	return 0;
}

int func_172(var uParam0)
{
	if (func_339(uParam0) && !func_16(uParam0->f_151, 4))
	{
		return 1;
	}
	if (!func_85(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_157)
	{
		case 1:
			switch (uParam0->f_155)
			{
				case 8:
					func_88(-1890302844, 0.5f);
					break;
				case 7:
					func_88(36116464, 0.5f);
					break;
				case 6:
					if (func_340(uParam0, 1))
					{
						func_88(1352801403, 1f);
						return 1;
					}
					break;
				default:
					func_341(uParam0);
					break;
			}
			break;
		case 9:
			uParam0->f_156 = 4;
			if (func_344(uParam0))
			{
				if (func_343(Global_35, uParam0[4], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL2@MALE_A@KNEEL2_TRANS_STOOL1", "KNEEL2_TRANS_STOOL1", "PROP_PLAYER_SEAT_CHAIR_GENERIC_HUNTING1"))
				{
				}
			}
			break;
		case 6:
			func_344(uParam0);
			break;
	}
	return 0;
}

int func_173(var uParam0)
{
	if (func_339(uParam0) && !func_16(uParam0->f_151, 4))
	{
		return 1;
	}
	if (!func_85(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_157)
	{
		case 1:
			switch (uParam0->f_155)
			{
				case 8:
					func_88(-1890302844, 0.5f);
					break;
				case 7:
					func_88(36116464, 0.5f);
					break;
				case 6:
					uParam0->f_156 = 1;
					if (func_340(uParam0, 2))
					{
						if (func_343(Global_35, uParam0[1], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL3@MALE_A@KNEEL3_TRANS_COFFEE2", "KNEEL3_TRANS_COFFEE2", "WORLD_PLAYER_DYNAMIC_KNEEL_POST_FIRE_CRAFT"))
						{
							return 1;
						}
					}
					break;
				default:
					func_341(uParam0);
					break;
			}
			break;
		case 9:
			if (func_343(Global_35, uParam0[4], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL3@MALE_A@KNEEL3_TRANS_STOOL1", "KNEEL3_TRANS_STOOL1", "PROP_PLAYER_SEAT_CHAIR_GENERIC_HUNTING1"))
			{
			}
			break;
	}
	return 0;
}

int func_174(var uParam0)
{
	if (func_339(uParam0) && !func_16(uParam0->f_151, 4))
	{
		return 1;
	}
	if (!func_85(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_157)
	{
		case 1:
			switch (uParam0->f_155)
			{
				case 8:
					func_88(-1890302844, 0.5f);
					break;
				case 7:
					func_88(36116464, 0.5f);
					break;
				case 6:
					uParam0->f_156 = 0;
					if (func_340(uParam0, 3))
					{
						if (func_343(Global_35, uParam0[0], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL4@MALE_A@KNEEL4_TRANS_COFFEE1", "KNEEL4_TRANS_COFFEE1", "WORLD_PLAYER_DYNAMIC_KNEEL_POST_FIRE_CRAFT"))
						{
							return 1;
						}
					}
					break;
				default:
					func_341(uParam0);
					break;
			}
			break;
		case 9:
			uParam0->f_156 = 4;
			if (func_343(Global_35, uParam0[4], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL4@MALE_A@KNEEL4_TRANS_STOOL1", "KNEEL4_TRANS_STOOL1", "PROP_PLAYER_SEAT_CHAIR_GENERIC_HUNTING1"))
			{
			}
			break;
	}
	return 0;
}

int func_175(var uParam0)
{
	if (func_339(uParam0) && !func_16(uParam0->f_151, 4))
	{
		return 1;
	}
	if (!func_85(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_157)
	{
		case 1:
			if (!PED::_0x68821369A2CEADD5(Global_35, -260069069))
			{
				if (func_340(uParam0, 4))
				{
					func_88(-260069069, 1086324736 /* Float: 6f */);
				}
			}
			break;
		case 6:
			uParam0->f_156 = 0;
			if (func_343(Global_35, uParam0[0], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@STOOL1@MALE_A@STOOL1_TRANS_KNEEL1", "STOOL1_TRANS_KNEEL1", "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR"))
			{
			}
			break;
	}
	return 0;
}

bool func_176(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

void func_177(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;

	((*Global_1945938)[iParam0 /*18*/])->f_4 = iParam1;
	(*Global_1945938)[iParam0 /*18*/] = iParam4;
	((*Global_1945938)[iParam0 /*18*/])->f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	((*Global_1945938)[iParam0 /*18*/])->f_2 = iParam5;
	((*Global_1945938)[iParam0 /*18*/])->f_6 = { vParam6 };
	((*Global_1945938)[iParam0 /*18*/])->f_9 = fParam9;
	((*Global_1945938)[iParam0 /*18*/])->f_10 = iParam10;
	((*Global_1945938)[iParam0 /*18*/])->f_11 = iParam11;
	((*Global_1945938)[iParam0 /*18*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_5 = iParam12;
	((*Global_1945938)[iParam0 /*18*/])->f_1 = 2;
	((*Global_1945938)[iParam0 /*18*/])->f_17 = -1;
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
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 15:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 14:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, 1);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	((*Global_1945938)[iParam0 /*18*/])->f_3 = iVar0;
	func_179(iParam0, 1);
	func_180(iParam0, 1);
	func_181(iParam0, 128);
}

void func_178(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 - (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1));
}

void func_179(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_176(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
		}
	}
}

void func_180(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
	}
}

void func_181(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

bool func_182()
{
	return (Global_1935689->f_1 || &Global_1935689 == 1);
}

int func_183()
{
	if (Global_1935689->f_17 == 3)
	{
		return 1;
	}
	return 0;
}

int func_184(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_296(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_345(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_346(iParam0, Var0, Var0.f_4, bParam4) };
	return func_347(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

int func_185()
{
	if (func_32(Global_35, 0))
	{
		if (PED::_0x34D6AC1157C8226C(Global_35, 1855656219))
		{
			return 1;
		}
	}
	return 0;
}

void func_186(int iParam0, int iParam1)
{
	Global_1357549->f_1672 = iParam0;
	Global_1357549->f_1673 = iParam1;
}

int func_187()
{
	return Global_1357549->f_1672;
}

int func_188(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;

	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	if (Global_1935689->f_8)
	{
		return 0;
	}
	if (((iParam0 != 1259508039 && iParam0 != -1838434463) && iParam0 != 2019377485) && bParam1)
	{
		iVar0 = func_348(iParam0);
		if (func_190(iParam0, 1147021565))
		{
			iVar0 |= 64;
		}
		if (!func_349(&uVar1, HUD::_0x0501D52D24EA8934(1), 1, iVar0))
		{
			return 0;
		}
	}
	if (iParam0 == -1448210800 || iParam0 == -2035110427)
	{
		if (func_350())
		{
			return 0;
		}
	}
	if (!func_25(iParam0, 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return 0;
	}
	return 1;
}

int func_189(int iParam0)
{
	if (func_122(iParam0) == -1650247667)
	{
		return 0;
	}
	if (!INVENTORY::_0x3D10D7179D7034AF(func_86(0), iParam0, func_351(0)))
	{
		return 0;
	}
	switch (iParam0)
	{
		case -1838434463: /* GXTEntry: "Camp" */
		case 2019377485: /* GXTEntry: "Camp" */
			if (!Global_1392040->f_2)
			{
				func_352(1, 1);
				TELEMETRY::_0x565EAA726B2CE3B7(0);
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 1807503187: /* GXTEntry: "Handheld Catalogue" */
			func_201(MISC::_CREATE_VAR_STRING(0, 163043886, Global_36558), 10000, 0, 0, 0, 1);
			break;
	}
	return 1;
}

int func_190(int iParam0, int iParam1)
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

void func_191(int iParam0, struct<11> Param1, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, struct<2> Param17, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, int iParam27, bool bParam28, int iParam29)
{
	switch (iParam0)
	{
		case 1244838730: /* GXTEntry: "Faded Letter" */
			break;
		case -1952196650: /* GXTEntry: "Letter from the Mayor\'s Office" */
			if (func_270())
			{
				func_353(998229694 /* GXTEntry: "It ain\'t John Mark. It\'s Jean Marc, you fool. And he\'s now the mayor. I guess tha" +
    "t\'s good. Lemieux\'s done for." */, 0);
			}
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(998229694))
			{
				func_353(1610852701 /* GXTEntry: "It ain\'t John Mark. It\'s Jean Marc, Arthur.~n~~n~These fellas are French.~n~And h" +
    "e\'s now the mayor. I guess that\'s good. Sounds like Lemieux was pretty awful." */, 0);
			}
			break;
		case -1566711999: /* GXTEntry: "Letter from the Mayor\'s Office" */
			func_353(-1741315348 /* GXTEntry: "Jean Marc won.~n~~n~He\'s now the mayor and Lemieux is disgraced." */, 0);
			break;
		case -1237758927: /* GXTEntry: "Letter to Mayor Timmins from Belinda" */
			break;
		case -631796932: /* GXTEntry: "Letter from Charles Châtenay" */
			func_354(((*Global_1347702)[80 /*49*/])->f_15, 1);
			if (func_270() == 1)
			{
				func_353(1565950479, 0);
			}
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(1565950479))
			{
				if (func_355(77))
				{
					func_353(-553142873, 0);
				}
				else
				{
					func_353(-384883866, 0);
				}
			}
			break;
		case 581047644: /* GXTEntry: "Invitation from Ms. Hobbs" */
			if ((func_264() && !func_356(51)) && !func_357(1048576))
			{
				func_358(2);
				func_359(51, 0, 0, 0, 0, -1, 0);
				func_360(51, 0, 0, -1992824800, 0, 0, 2, 0);
				func_361(1048576);
			}
			break;
		case -625427311: /* GXTEntry: "Letter from Ms. Hobbs" */
			if ((func_264() && !func_356(51)) && !func_357(16384))
			{
				func_358(1);
				func_359(51, 0, 0, 0, 0, -1, 0);
				func_360(51, 0, 0, 1520110311, 0, 0, 5, 0);
				func_361(16384);
			}
			break;
		case -644199619: /* GXTEntry: "Invitation from Deborah MacGuiness" */
			if ((func_264() && !func_356(40)) && !func_362(32))
			{
				func_363(4);
				func_359(39, 0, 0, 0, 0, -1, 0);
				func_360(39, 0, 0, 0, 0, 0, 2, 0);
				func_364(32);
			}
			break;
		case 684296857: /* GXTEntry: "Invitation from Jeremy Gill" */
			if ((func_264() && !func_356(42)) && !func_365(16))
			{
				func_366(8);
				func_359(41, 0, 0, 0, 0, -1, 0);
				func_360(41, 0, 0, 0, 0, 0, 2, 0);
				func_367(16);
			}
			break;
		case 466137807: /* GXTEntry: "Invitation from Francis Sinclair" */
			if ((func_264() && !func_356(50)) && !func_368(32))
			{
				func_369(4);
				func_359(49, 0, 0, 0, 0, -1, 0);
				func_360(49, 0, 0, 0, 0, 0, 2, 0);
				func_370(32);
				if (!func_120(((*Global_1347702)[50 /*49*/])->f_15, 1))
				{
					if (func_270() == 1)
					{
						func_353(-629995342 /* GXTEntry: "Sent him the location of those odd carvings. Now he wants me to go see him." */, 0);
					}
					else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(-629995342))
					{
						func_353(-1367572831 /* GXTEntry: "Sent him the location of those odd carvings. Now he wants me to go see him." */, 0);
					}
				}
			}
			break;
		case -686755665:
			iParam27 = -2107709792;
			Param17.f_1 = iParam27;
			StringCopy(&(Param1.f_10), "respond_parcel", 32);
			iParam29 = 0;
			bParam28 = true;
			break;
	}
}

void func_192(int iParam0, var uParam1, var uParam2, bool bParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, bool bParam27, int iParam28)
{
	switch (iParam0)
	{
		case 1950809992: /* GXTEntry: "Farm, Field and Falconry" */
			func_366(16);
			break;
	}
}

void func_193(int iParam0, struct<11> Param1, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)
{
	switch (iParam0)
	{
		case -1280336729: /* GXTEntry: "Emmet Granger Photograph" */
		case -691125380: /* GXTEntry: "Flaco Hernandez Photograph" */
		case -287018478: /* GXTEntry: "Billy Midnight Photograph" */
		case 305626647: /* GXTEntry: "Black Belle Photograph" */
			StringCopy(&(Param1.f_10), "gunslinger_notes", 32);
			break;
	}
}

int func_194(int iParam0)
{
	return 1;
}

int func_195(int iParam0, bool bParam1, bool bParam2)
{
	if (func_371(iParam0, bParam1, 0, 0, -1082130432 /* Float: -1f */))
	{
		Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
		return 1;
	}
	switch (func_372(iParam0, -949239683))
	{
		case 881567935:
			if (!bParam1)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 1245009814, 1, 0, -1082130432);
				return 1;
			}
			break;
		case 1174751405:
			if (!bParam1)
			{
				func_373(iParam0);
				return 1;
			}
			break;
		case 845883585:
			if (!bParam1)
			{
				if (!func_374())
				{
					if (func_375(&Global_35))
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
					func_201("SI_ITEM_USE_POMADE_IS_ALREADY_APPLIED", 10000, 0, 0, 0, 1);
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
			Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
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
			Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
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
			Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
			return 1;
		case 1451036371:
			if (!bParam1)
			{
				func_376(iParam0);
				return 1;
			}
			break;
		case -273840653:
			if (!bParam1)
			{
				func_377(iParam0, PED::IS_PED_IN_COMBAT(Global_35, 0));
				return 1;
			}
			break;
		case 999632878:
			if (!bParam1)
			{
				func_378(iParam0, PED::IS_PED_IN_COMBAT(Global_35, 0));
				return 1;
			}
			break;
		case 1130235258:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_35, 0))
				{
					func_379(iParam0);
				}
				else
				{
					func_380(iParam0);
				}
				return 1;
			}
			break;
		case -1915958659:
			if (!bParam1)
			{
				func_381(iParam0);
				return 1;
			}
			break;
		case 1859991422:
			if (!bParam1)
			{
				func_382(iParam0);
				return 1;
			}
			break;
		case 1891031775:
			if (!bParam1)
			{
				func_383(iParam0);
				return 1;
			}
			break;
		case -809056541:
			if (!bParam1)
			{
				func_384(iParam0);
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
				func_385(iParam0);
				return 1;
			}
			break;
		case 1443104131:
			if (!bParam1)
			{
				func_386(iParam0);
				return 1;
			}
			break;
		case -1919515848:
			if (!bParam1)
			{
				func_387(iParam0);
				return 1;
			}
			break;
		case 89124942:
			if (!bParam1)
			{
				func_388(iParam0);
				return 1;
			}
			break;
		case 238865292:
			if (!bParam1)
			{
				func_389(iParam0);
				return 1;
			}
			break;
		case 1177617310:
			if (!bParam1)
			{
				func_390(iParam0);
				return 1;
			}
			break;
	}
	return 0;
}

void func_196(struct<16> Param0, int iParam16)
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
	if (!func_391(iParam16, 2))
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Param0.f_10))) > 0 || func_392(&(Param0.f_10)))
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
			func_393(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_197()
{
	return Global_1894899 & 2 != 0;
}

int func_198(int iParam0)
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
}

int func_199(int iParam0)
{
	struct<2> Var0;

	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_200(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_122(iParam0) == joaat("clothing"))
	{
		if (func_199(iParam0) == -999503751)
		{
			iVar0 = func_206(iParam0);
			if ((iVar0 != -1 && !func_394(iVar0)) || !func_25(iParam0, 1, 0))
			{
				return 0;
			}
		}
	}
	return 1;
}

var func_201(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_202(int iParam0, int iParam1)
{
	int iVar0;

	iParam0 = func_395(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_204(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_SWIMMING(Global_35) || PED::IS_PED_SWIMMING(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (PED::_0xB676EFDA03DADA52(iVar0, 0) == Global_35)
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
	if (func_396(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_203(int iParam0)
{
	int iVar0;

	iParam0 = func_395(iParam0);
	if (iParam0 <= -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_204(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iParam0 == func_397())
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

int func_204(int iParam0)
{
	iParam0 = func_395(iParam0);
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

int func_205(int iParam0, int iParam1, bool bParam2)
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

int func_206(int iParam0)
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

void func_207(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_398(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_399(Var0);
}

int func_208(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_400())
	{
		return 0;
	}
	if (!func_401(iParam0))
	{
		return 0;
	}
	if (func_402(iParam0))
	{
		iVar0 = 0;
		if (func_199(iParam0) == 81053684)
		{
			if (bParam1)
			{
				func_403(&iVar0, 2);
			}
		}
		return func_404(iParam0, iVar0);
	}
	return 0;
}

void func_209(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 10;
	iVar1 = &Global_1946804->f_1497.f_1[iVar0 /*3*/];
	if (iVar1 == iParam0)
	{
		PED::_0xCB9401F918CB0F75(Global_35, "PlayUnequipHatFidget", 1, 15);
		func_210(Global_35, -2065815962 /* GXTEntry: "No Hat" */, 0, -358215195, 1, 1, 1, 0, 1, 0);
		func_211(iParam0, 0);
		return;
	}
	PED::_0xCB9401F918CB0F75(Global_35, "PlayEquipHatFidget", 1, 15);
	func_210(Global_35, iParam0, 0, -358215195, 1, 1, 1, 0, 1, 0);
	if (func_405(32768))
	{
		PED::KNOCK_OFF_PED_PROP(Global_35, false, true, false, true);
		func_406();
		func_398(128);
		return;
	}
	if (iVar1 == &Global_1946804->f_57[iVar0 /*11*/])
	{
		func_211(iParam0, 1);
		return;
	}
	if (func_407(-2061583405, 0))
	{
		if (func_408(iVar1))
		{
			func_211(iVar1, 0);
		}
		else
		{
			func_409(iVar1, 1, 1, 0);
		}
		func_211(iParam0, 1);
		return;
	}
	if (func_408(iVar1))
	{
		func_211(iVar1, 0);
		func_211(iParam0, 1);
	}
	else if (func_408(iParam0))
	{
		if (iParam0 != func_410(0))
		{
			func_411(iParam0, iVar1);
			func_211(iParam0, 0);
			func_211(iVar1, 0);
		}
		else
		{
			PED::KNOCK_OFF_PED_PROP(Global_35, false, true, false, true);
			func_398(128);
			func_211(iParam0, 1);
		}
	}
}

int func_210(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_296(iParam1, 1, 0) };
		iParam3 = func_412(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_414(iParam1, iParam2, func_413(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_415(1, (func_23() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_413(iParam3, 1) /*11*/])
			{
				func_207(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_405(32768) && iParam1 != &Global_1946804->f_57[func_413(iParam3, 1) /*11*/])
			{
				func_406();
				func_207(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_207(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_416(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_207(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_417(0);
			func_418(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_207(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_211(int iParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_296(iParam0, 0, 0) };
	Var5 = { func_346(iParam0, Var0, Var0.f_4, 0) };
	if (func_419(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_86(0), &Var5, bParam1);
}

void func_212(bool bParam0)
{
	if (bParam0)
	{
		Global_1935689 = 1;
	}
	else
	{
		Global_1935689 = 2;
	}
}

void func_213()
{
	if (func_420())
	{
		return;
	}
	if (func_421())
	{
		TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), 1807503187, -2005122350, 1, 0, -1082130432);
		Global_1914319->f_18996.f_1 = 1;
	}
	else if (Global_1914319->f_18996.f_4 != 0)
	{
		func_201(func_422(), 10000, 0, 0, 0, 1);
		Global_1914319->f_18996.f_4 = 0;
	}
}

int func_214(int iParam0)
{
	if (func_23() != -1)
	{
		return 0;
	}
	if (!func_117(iParam0))
	{
		return 0;
	}
	return func_330(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

float func_215(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	var uVar12;

	iParam0 = func_395(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_423(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1f;
	}
	iVar1 = func_424(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_424(iParam0) + 1;
	fVar6 = func_425(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	uVar12 = func_426(fVar3, fVar4, fVar11);
	return uVar12;
}

int func_216(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return 1;
	}
	return 0;
}

int func_217()
{
	return Global_40.f_1095.f_3054.f_1;
}

int func_218(int iParam0)
{
	if (!func_427(32))
	{
		return 0;
	}
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-75008140))
	{
		return 0;
	}
	if (!func_428())
	{
		return 0;
	}
	if (func_429(16))
	{
		return 0;
	}
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(Global_1225638->f_14) || !_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::INT_TO_PLAYERINDEX(&Global_1225638)))
	{
		return 0;
	}
	if (iParam0 == 1 && func_128(Global_1131432->f_8, 1))
	{
		return 0;
	}
	return 1;
}

int func_219(int iParam0)
{
	if (!func_430())
	{
		return 0;
	}
	func_431(iParam0);
	Global_1898068->f_4 = 1;
	return 1;
}

bool func_220(int iParam0)
{
	return func_128(Global_1131432->f_8, iParam0);
}

void func_221(int iParam0)
{
	struct<16> Var0;

	Var0.f_12 = 255;
	Var0.f_13 = 255;
	Var0.f_5 = iParam0;
	Var0.f_3 = 94;
	func_433(Var0, func_432(0, 15), 0, 0);
}

int func_222(int iParam0)
{
	int iVar0;

	if (!func_434(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (&Global_1395601->f_5[iVar0 /*28*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_223()
{
	int iVar0;

	iVar0 = func_435();
	switch (iVar0)
	{
		case 0:
			return 1;
		case 1:
			return 4;
		case 2:
			return 2;
		case 3:
			return 6;
		case 5:
			return 5;
		case 6:
			return 0;
		case 4:
			return 3;
		case 7:
			return 7;
		case 8:
			return -1;
	}
	return -1;
}

bool func_224(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

bool func_225()
{
	return &Global_1395601;
}

int func_226(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;

	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_283(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		WEAPON::_0xB6CFEC32E3742779(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_256(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_25(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_436(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((func_124(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_124(iParam0, 0, 0) - iParam1) < 0)
		{
			func_226(iParam0, func_124(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_122(iParam0) == joaat("weapon"))
	{
		if (!func_437(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_184(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_98(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_256(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_438(iParam0, iParam1);
	return 1;
}

void func_227(bool bParam0)
{
	if ((func_23() != -1 || !bParam0) || func_139(Global_35))
	{
		func_439();
		return;
	}
	if (func_56(8388608) && !func_16(Global_1392040->f_1, 2048))
	{
		func_47(16777216);
		return;
	}
	func_439();
}

int func_228(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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

	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	if (!func_440(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_441(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_442(iParam0, bParam2);
	iVar2 = 0;
	if (func_124(iParam0, 0, 0) == 0)
	{
		if (func_443(iParam0))
		{
			iVar5 = func_444(iParam0);
			iVar6 = func_445(iVar5);
			iVar7 = func_446(iVar6) + 1;
			func_447(iVar5);
			if (func_356(38))
			{
				func_63(483, 0);
			}
			else
			{
				func_63(482, 0);
			}
			if (iVar7 == func_448(iVar6))
			{
				func_228(func_449(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_264() && func_450(4))
				{
					if (func_264() && (func_451(38) || func_356(38)))
					{
						func_360(38, func_449(iVar6), 0, 0, func_452(), 0, -1, 0);
						func_453(2);
					}
					else
					{
						func_360(38, func_449(iVar6), 0, 0, func_452(), 0, -1, 0);
						func_453(1);
					}
				}
			}
			else if (func_264() && func_450(4))
			{
				if (func_264() && (func_451(38) || func_356(38)))
				{
					func_360(38, 0, 0, 0, func_452(), 0, -1, 0);
					func_453(2);
				}
				else
				{
					func_360(38, 0, 0, 0, func_452(), 0, -1, 0);
					func_453(1);
				}
			}
			if (func_264() && func_450(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_264() && (func_451(38) || func_356(38)))
					{
						func_359(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_359(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_122(iParam0) == joaat("clothing"))
	{
		if ((!func_190(iParam0, 866047851) && !func_190(iParam0, -1979000645)) && !func_190(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_454(iParam0, 8388608) && !func_455(28))
	{
		func_456(28);
	}
	if (!bVar3)
	{
		if (func_190(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_199(iParam0) == -1447088266)
			{
				iVar1 = func_253(func_252(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_23() == -1)
					{
						func_254(iVar1);
					}
					if (func_98(0) && func_457(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_458(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = WEAPON::_0x5C2EA6C44F515F34(iParam0);
				if (WEAPON::_0x1F7977C9101F807F(iVar1))
				{
					if (func_23() == -1)
					{
						func_254(iParam0);
					}
					if (func_98(0) && func_457(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_458(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_122(iParam0) == joaat("weapon"))
		{
			if (!func_459(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_122(iParam0) == joaat("ammo") && func_460(iParam0))
		{
			if (!func_461(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_190(iParam0, 866047851))
		{
			func_462(iParam0);
		}
		else if (func_190(iParam0, 2000026003))
		{
			func_463(iParam0);
		}
		else if (func_190(iParam0, -103750053))
		{
			func_251(func_250(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_251(func_260(-717883113, 2091222383), iVar0);
		}
		else if (func_190(iParam0, -121341956) && !func_190(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_120(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_63(498, 0);
				}
			}
			if (func_190(iParam0, -2017733358) || func_190(iParam0, -1369131378))
			{
				func_464(iParam0);
			}
		}
		else if (func_190(iParam0, -136654233))
		{
			if (func_190(iParam0, -1021472396))
			{
			}
		}
		else if (func_190(iParam0, -1466706512) && func_190(iParam0, 1147021565))
		{
			func_63(484, 0);
		}
		else if (func_190(iParam0, 1147021565) && func_190(iParam0, -524514947))
		{
		}
		else if (func_190(iParam0, 554195525))
		{
		}
		else if (func_190(iParam0, 589988438))
		{
			if (func_465())
			{
				func_466(1339418451, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_190(iParam0, 787083290) && func_190(iParam0, 949916894))
		{
			func_467(iParam0);
		}
		else if (func_190(iParam0, -1718133314))
		{
			func_468(iParam0);
		}
		else if (func_190(iParam0, -1738650224))
		{
			func_469(iParam0);
		}
		else if (func_190(iParam0, -1112814642) && func_190(iParam0, 949916894))
		{
			func_470(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_190(iParam0, 1841149704))
		{
			func_471();
		}
		else if (func_190(iParam0, 606799272))
		{
			func_472(iParam0, iParam1);
			func_473(iParam0);
		}
		else if (func_190(iParam0, -1112814642) && func_190(iParam0, -1697809989))
		{
			func_474(iParam0, 0, 0, 0);
		}
		else if (func_190(iParam0, -2017733358) || func_190(iParam0, -1369131378))
		{
			func_464(iParam0);
		}
		else if (func_190(iParam0, -1921346699))
		{
			if (func_23() != -1)
			{
				return 0;
			}
			func_475(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_190(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868: /* GXTEntry: "Special Lake Lure" */
					if (!func_25(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_228(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438: /* GXTEntry: "Special River Lure" */
					if (!func_25(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_228(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217: /* GXTEntry: "Special Swamp Lure" */
					if (!func_25(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_228(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653: /* GXTEntry: "Lake Lure" */
					if (!func_25(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_228(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425: /* GXTEntry: "River Lure" */
					if (!func_25(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_228(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104: /* GXTEntry: "Swamp Lure" */
					if (!func_25(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_228(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_190(iParam0, -839724752) && func_454(iParam0, 4))
		{
			if (!func_356(42))
			{
				func_476(iParam0);
			}
		}
		else if (func_190(iParam0, 1399091007))
		{
			func_477(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_190(iParam0, 1248798204))
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
				func_228(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_456(24);
				if (&Global_1946804->f_1497.f_1[27 /*3*/] == &Global_1946804->f_57[27 /*11*/])
				{
					func_210(PLAYER::PLAYER_PED_ID(), -1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_478(&iVar9, 0))
				{
					func_457(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303: /* GXTEntry: "Upgraded Bandolier" */
				if (func_23() == -1 && &Global_1946804->f_1497.f_1[25 /*3*/] == &Global_1946804->f_57[25 /*11*/])
				{
					func_210(PLAYER::PLAYER_PED_ID(), 1171350303 /* GXTEntry: "Upgraded Bandolier" */, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("weapon_kit_binoculars"):
				break;
			case 2131771850:
				func_63(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_479();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_480();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_481();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_482();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_483();
				break;
			case -102111672: /* GXTEntry: "Map" */
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584: /* GXTEntry: "Jack Hall Gang Map 1" */
				func_484(499813453, 854119837, 0);
				func_485(499813453, 0);
				func_486(1);
				break;
			case 2127812557:
				func_484(499813453, -1292544588, 0);
				func_485(499813453, 0);
				func_486(2);
				break;
			case 808991383: /* GXTEntry: "Jack Hall Gang Map 3" */
				func_484(499813453, -1003325394, 0);
				func_485(499813453, 0);
				func_486(4);
				break;
			case 1134518629: /* GXTEntry: "High Stakes Treasure Map 1" */
				func_484(666607663, -335460405, 0);
				func_485(666607663, 0);
				func_487(1);
				break;
			case 902940106: /* GXTEntry: "High Stakes Treasure Map 2" */
				func_484(666607663, 903797617, 0);
				func_485(666607663, 0);
				func_487(2);
				break;
			case -418174898: /* GXTEntry: "High Stakes Treasure Map 3" */
				func_484(666607663, 669728650, 0);
				func_485(666607663, 0);
				func_487(4);
				break;
			case -648114971: /* GXTEntry: "The Poisonous Trail Map 1" */
				func_484(-220219788, 1214120047, 0);
				func_485(-220219788, 0);
				func_488(1);
				break;
			case 211153747: /* GXTEntry: "The Poisonous Trail Map 2" */
				func_484(-220219788, 655769340, 0);
				func_485(-220219788, 0);
				func_488(2);
				break;
			case -32876996: /* GXTEntry: "The Poisonous Trail Map 3" */
				func_484(-220219788, 885316185, 0);
				func_485(-220219788, 0);
				func_488(4);
				break;
			case 1191437462: /* GXTEntry: "Le Tresor des Morts Map 1" */
				func_484(218622660, -1491419385, 0);
				func_485(218622660, 0);
				func_489(1);
				break;
			case 1119149048: /* GXTEntry: "Le Tresor des Morts Riddle Note" */
				func_484(218622660, 1809565830, 0);
				func_485(218622660, 0);
				func_489(2);
				break;
			case 506073827: /* GXTEntry: "The Elemental Trail Map 1" */
				func_484(390004462, -628873767, 0);
				func_485(390004462, 0);
				func_490(1);
				break;
			case -1876986168: /* GXTEntry: "The Elemental Trail Map 2" */
				func_484(390004462, -405421956, 0);
				func_485(390004462, 0);
				func_490(2);
				break;
			case 2142623221:
				func_484(390004462, -1108972386, 0);
				func_485(390004462, 0);
				func_490(4);
				break;
			case 1508215381: /* GXTEntry: "Landmarks of Riches Map 1" */
				func_484(6410548, 1053716392, 0);
				func_485(6410548, 0);
				func_491(1);
				break;
			case -888935280: /* GXTEntry: "Landmarks of Riches Map 2" */
				func_484(6410548, 806507056, 0);
				func_485(6410548, 0);
				func_491(2);
				break;
			case -1252474566: /* GXTEntry: "Landmarks of Riches Map 3" */
				func_484(6410548, 1571925350, 0);
				func_485(6410548, 0);
				func_491(4);
				break;
			case -1465702449: /* GXTEntry: "Landmarks of Riches Map 4" */
				func_484(6410548, 1330352282, 0);
				func_485(6410548, 0);
				func_491(8);
				break;
			case -21093309: /* GXTEntry: "Aged Pirate Rum" */
				func_493(242, func_492(-21093309 /* GXTEntry: "Aged Pirate Rum" */), 0);
				break;
			case 204375141: /* GXTEntry: "Ginseng Elixir" */
				func_493(240, func_492(204375141 /* GXTEntry: "Ginseng Elixir" */), 0);
				break;
			case -417963070: /* GXTEntry: "Valerian Root" */
				func_493(241, func_492(-417963070 /* GXTEntry: "Valerian Root" */), 0);
				break;
			case -1080874779: /* GXTEntry: "Special Health Cure" */
			case -755485480: /* GXTEntry: "Potent Health Cure" */
			case 230530039: /* GXTEntry: "Health Cure" */
			case 299161628: /* GXTEntry: "Moonshine" */
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_494(594, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_494(594, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_494(594, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1976480343: /* GXTEntry: "Special Miracle Tonic" */
			case -953313786: /* GXTEntry: "Miracle Tonic" */
			case 730856618: /* GXTEntry: "Potent Miracle Tonic" */
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_494(594, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_494(595, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1977068039: /* GXTEntry: "High Quality Beef and Eggs Stew" */
			case -399865011: /* GXTEntry: "Regional Beef and Eggs Stew" */
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_494(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case 80178851: /* GXTEntry: "Hair Tonic" */
				func_63(488, 0);
				break;
			case 1613651027: /* GXTEntry: "Hair Pomade" */
				func_63(491, 0);
				break;
			case -885810591: /* GXTEntry: "Premium Cigarettes" */
				func_63(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_228(func_495(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_228(func_496(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535: /* GXTEntry: "Ground Coffee" */
				if (func_455(1))
				{
					func_63(487, 0);
				}
				break;
			case -898386032: /* GXTEntry: "Gun Oil" */
				func_63(486, 0);
				break;
			case -2035110427: /* GXTEntry: "Mortar and Pestle" */
				if (func_23() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case 1510719693: /* GXTEntry: "Coffee Percolator" */
				func_63(496, 0);
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
		func_497(&iVar10);
		if (!func_498(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_98(0))
		{
			return 1;
		}
		if (func_122(iParam0) == joaat("clothing"))
		{
			func_499(iParam0);
		}
		if (func_190(iParam0, -1979000645))
		{
			func_500(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_98(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_228(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_320(iVar2, 0);
		}
	}
	Var35 = { func_436(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::_0x6A0184E904CDF25E(&Var35, iVar0);
	}
	func_501(iParam0);
	if (fParam6 > 0f)
	{
		if (func_190(iParam0, -839724752))
		{
			func_502(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_256(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

bool func_229(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_70(iParam0))
	{
		return false;
	}
	iVar0 = func_163(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

float func_230(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	switch (iParam0)
	{
		case 0:
			fVar0 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_35));
			fVar1 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0));
			break;
		case 1:
			fVar0 = PED::_GET_PED_STAMINA(Global_35);
			fVar1 = PED::_GET_PED_MAX_STAMINA(Global_35);
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

void func_231(float fParam0, bool bParam1)
{
	float fVar0;
	int iVar1;

	fVar0 = (50f * fParam0);
	iVar1 = BUILTIN::ROUND((fVar0 + IntToFloat(ENTITY::GET_ENTITY_HEALTH(Global_35))));
	if (bParam1 && fVar0 < 0f)
	{
		ENTITY::_0x835F131E7DC8F97A(Global_35, fVar0, 0, 0);
	}
	else if (fParam0 <= 0f || iVar1 > ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0))
	{
		ENTITY::_SET_ENTITY_HEALTH(Global_35, ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0), 0);
	}
	else
	{
		ENTITY::_SET_ENTITY_HEALTH(Global_35, iVar1, 0);
	}
}

void func_232(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

void func_233(float fParam0)
{
	PLAYER::_0x51345AE20F22C261(PLAYER::PLAYER_ID(), (fParam0 * 14f), 0, 0, 0);
}

void func_234(float fParam0)
{
	int iVar0;

	if (func_23() != -1)
	{
		return;
	}
	if (fParam0 == -1f)
	{
		PED::_RESTORE_PED_STAMINA(Global_35, 100f);
	}
	else
	{
		iVar0 = 8;
		PED::_CHARGE_PED_STAMINA(Global_35, (fParam0 * IntToFloat(iVar0)));
	}
}

float func_235(float fParam0, float fParam1)
{
	if (fParam1 != 0f)
	{
		return ((fParam1 / 100f) * 200f);
	}
	return ((fParam0 / 8f) * 200f);
}

int func_236(var uParam0, var uParam1, float fParam2)
{
	if (func_23() != -1)
	{
		return 1;
	}
	if (!func_503(0))
	{
		return 1;
	}
	if (fParam2 <= 0f)
	{
		return 1;
	}
	if (*uParam0)
	{
		return !*uParam1;
	}
	*uParam0 = 1;
	if (!Global_1347477->f_191.f_3)
	{
		func_504(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		Global_1347477->f_191.f_3 = 1;
	}
	if (Global_1347477->f_191 < MISC::GET_GAME_TIMER())
	{
		Global_1347477->f_191.f_1 = 0;
	}
	Global_1347477->f_191.f_1++;
	if (Global_1347477->f_191.f_1 > 3)
	{
		if (Global_1347477->f_191.f_2 < MISC::GET_GAME_TIMER())
		{
			func_63(0, 1);
			Global_1347477->f_191.f_2 = (MISC::GET_GAME_TIMER() + 480000);
		}
		func_504(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		*uParam1 = 1;
		return 0;
	}
	Global_1347477->f_191 = (MISC::GET_GAME_TIMER() + 480000);
	*uParam1 = 0;
	return 1;
}

void func_237(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_23() == 0)
	{
		func_505(0, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_506(0);
	if (bParam1)
	{
		func_507(fVar0);
	}
	if (fVar0 >= (100f - 1f))
	{
		func_508();
	}
	if (bParam2)
	{
		fParam0 = func_509(0, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_511(0, func_510(fParam0, -100f, 100f), bParam1);
}

void func_238(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_23() == 0)
	{
		func_505(2, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_506(2);
	if (bParam1)
	{
		func_507(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_509(2, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_511(2, func_510(fParam0, -100f, 100f), bParam1);
}

void func_239(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_23() == 0)
	{
		func_505(1, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_506(1);
	if (bParam1)
	{
		func_507(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_509(1, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_511(1, func_510(fParam0, -100f, 100f), bParam1);
}

void func_240(float fParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;

	fVar0 = func_512(13);
	if (fParam0 > 10f)
	{
		fParam0 = 10f;
	}
	if (!func_455(17))
	{
		return;
	}
	if (func_513())
	{
		iVar1 = func_514(fVar0);
		fVar0 = (fVar0 + fParam0);
		iVar2 = func_514(fVar0);
		if (iVar1 != iVar2)
		{
			Global_1347477->f_195 = func_147();
			func_246(&(Global_1347477->f_195), 0, 0, 1, 0, 0, 0, 0);
		}
		func_515(&fVar3, &fVar4);
		func_516(13, func_510(fVar0, fVar3, fVar4));
	}
	if (bParam1)
	{
		Global_40.f_11095.f_66++;
		if (5 == Global_40.f_11095.f_66)
		{
			func_63(94, 0);
		}
	}
}

float func_241(float fParam0, int iParam1)
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

void func_242(int iParam0, float fParam1)
{
	int iVar0;
	char* sVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (fParam1 == -1f)
	{
		if (func_517(iParam0))
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
		return;
	}
	fParam1 = (fParam1 * (1f + Global_40.f_11095.f_70));
	switch (iParam0)
	{
		case 0:
			sVar1 = func_518(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			func_519(-1);
			func_265(0);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar0, iParam0, fParam1, 1);
			Global_40.f_11095.f_4[0 /*2*/] = fParam1;
			break;
		case 1:
			sVar1 = func_518(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			func_520(-1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar0, iParam0, fParam1, 1);
			Global_40.f_11095.f_4[1 /*2*/] = fParam1;
			break;
		case 2:
			sVar1 = func_518(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			func_521(-1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar0, iParam0, fParam1, 1);
			Global_40.f_11095.f_4[2 /*2*/] = fParam1;
			break;
		case 19:
			func_522(0, 1, 1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar0, iParam0, fParam1, 1);
			(Global_40.f_11095.f_4[0 /*2*/])->f_1 = fParam1;
			break;
		case 18:
			func_522(1, 1, 1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar0, iParam0, fParam1, 1);
			(Global_40.f_11095.f_4[1 /*2*/])->f_1 = fParam1;
			break;
		case 20:
			func_522(2, 1, 1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar0, iParam0, fParam1, 1);
			(Global_40.f_11095.f_4[2 /*2*/])->f_1 = fParam1;
			break;
		default:
			break;
	}
}

void func_243(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		return;
	}
	if (bParam3 || func_190(iParam0, -537818634))
	{
		func_251(func_523(-704089207), 1);
	}
	if (func_190(iParam0, -1457797660))
	{
		func_251(func_523(-1909697259), 1);
	}
	if (func_190(iParam0, 1573112293))
	{
		func_525(func_524(&iParam0), 1);
	}
	if (func_190(iParam0, 1939071949))
	{
		func_251(func_260(joaat("used"), -939665347), 1);
	}
	switch (iParam0)
	{
		case -1921080134: /* GXTEntry: "Classic Oatcakes" */
		case -635441454: /* GXTEntry: "Sugar Cube" */
		case 1448771675: /* GXTEntry: "Hay" */
			func_251(func_260(joaat("used"), -2049431929 /* GXTEntry: "Feed Bag" */), 1);
			break;
	}
	switch (iParam0)
	{
		case 299161628: /* GXTEntry: "Moonshine" */
			func_251(func_260(joaat("used"), 304473406), 1);
			break;
		case -1907044919: /* GXTEntry: "Opened Kentucky Bourbon" */
		case 688258043: /* GXTEntry: "Kentucky Bourbon" */
			func_251(func_260(joaat("used"), joaat("whiskey")), 1);
			break;
		case -541584777: /* GXTEntry: "Opened Cocaine Gum" */
		case 206762213: /* GXTEntry: "Cocaine Gum" */
			func_251(func_260(joaat("used"), 2119695263), 1);
			break;
		case -653299524: /* GXTEntry: "Snake Oil" */
		case -486559882: /* GXTEntry: "Potent Snake Oil" */
		case 376981280: /* GXTEntry: "Opened Snake Oil" */
			func_251(func_260(joaat("used"), -1791969490), 1);
			break;
		case -324053813: /* GXTEntry: "Chewing Tobacco" */
		case 998010398: /* GXTEntry: "Opened Chewing Tobacco" */
			func_251(func_260(joaat("used"), -155567636), 1);
			break;
		case -2042563684: /* GXTEntry: "Horse Medicine" */
		case -834705084: /* GXTEntry: "Opened Horse Medicine" */
			func_251(func_260(joaat("used"), 497247514), 1);
			break;
		case 433340626: /* GXTEntry: "Opened Cover Scent" */
		case 1895068170: /* GXTEntry: "Cover Scent Lotion" */
			func_251(func_260(joaat("used"), 1199394531), 1);
			break;
		case 1929383243: /* GXTEntry: "Herbivore Bait" */
		case 2036955137: /* GXTEntry: "Potent Herbivore Bait" */
			func_251(func_260(joaat("used"), -868741806), 1);
			break;
		case -1635450397: /* GXTEntry: "Predator Bait" */
		case 1831763320: /* GXTEntry: "Potent Predator Bait" */
			func_251(func_260(joaat("used"), -208442209), 1);
			break;
	}
	if (func_23() == -1)
	{
		if (iParam0 == -1976480343)
		{
			func_251(func_260(joaat("used"), 595572217), 1);
		}
	}
	if (bParam2)
	{
		func_251(func_523(704570463), 1);
	}
}

void func_244(var uParam0)
{
	int iVar0;
	bool bVar1;

	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_WHISTLE"), false);
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if (uParam0->f_187 != iVar0)
	{
		if (uParam0->f_187 == -1)
		{
			bVar1 = true;
		}
		uParam0->f_187 = iVar0;
		if (!func_526(uParam0) && bVar1)
		{
			func_201("CMP_SLP_SOON", 10000, 0, 0, 0, 1);
		}
	}
}

char* func_245(int iParam0)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;

	sVar0 = "script@respawn@sky@SkyTL_";
	sVar1 = func_530(func_529(func_527(iParam0), func_528(), 1, 63));
	sVar2 = func_530(func_529(sVar0, sVar1, 1, 63));
	return sVar2;
}

void func_246(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_531(*iParam0);
	iVar1 = func_532(*iParam0);
	iVar2 = func_533(*iParam0);
	iVar3 = func_534(*iParam0);
	iVar4 = func_535(*iParam0);
	iVar5 = func_536(*iParam0);
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
	iVar6 = func_537(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_537(iVar1, iVar0);
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
	func_538(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_247(int iParam0)
{
	return &Global_1899515 > iParam0;
}

int func_248(int iParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(iParam0))
	{
		if (!ANIMSCENE::_0x477122B8D05E7968(iParam0, 1, 0))
		{
			if (!ANIMSCENE::_0x59606519FF9D3EC2(iParam0, 1))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(iParam0);
			}
			return 0;
		}
	}
	return 1;
}

int func_249(var uParam0)
{
	int iVar0;
	float fVar1;

	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
	func_55(1024);
	uParam0->f_57.f_35 = 1;
	iVar0 = PED::_0xC22AA08A8ADB87D4(Global_35);
	if (func_56(268435456) && uParam0->f_149 < 13)
	{
		func_539(&(uParam0->f_57));
		func_540(&(uParam0->f_57));
		if ((MISC::GET_GAME_TIMER() - uParam0->f_197) > 1000 && func_541(&(uParam0->f_57)))
		{
			func_542();
			if (func_85(uParam0))
			{
				if (iVar0 == -571916863)
				{
					func_88(-1890302844, 0.5f);
					return 0;
				}
				else if (iVar0 == -597629206)
				{
					func_88(36116464, 0.5f);
					return 0;
				}
			}
			else
			{
				return 0;
			}
			if (Global_1911914->f_1577 != 0)
			{
				uParam0->f_57.f_77 = Global_1911914->f_1577;
			}
			uParam0->f_57.f_78 = -214678071;
			uParam0->f_197 = -1;
			CAM::DO_SCREEN_FADE_IN(500);
			if (iVar0 == -518407211)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_melee_knife"), true, 0, false, false);
				func_17(&(uParam0->f_151), 2097152);
			}
			func_47(16384);
			func_55(65536);
			Global_1392040->f_2 = 0;
			if (func_98(0))
			{
				func_543(uParam0->f_57.f_77, uParam0->f_57.f_78, 1, 0, 0);
			}
			STATS::_0x378D3B1B11D9385B(uParam0->f_57.f_77);
			uParam0->f_208 = 3;
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_160))
			{
				OBJECT::DELETE_OBJECT(&(uParam0->f_160));
			}
			uParam0->f_160 = OBJECT::CREATE_OBJECT(func_544(uParam0->f_57.f_77), Global_36, false, false, false, false, true);
			if (PED::_0x3BBDD6143FF16F98(Global_35, uParam0->f_160, "p_meatChunks01x_PH_L_HAND", 0, 0, 1))
			{
			}
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_160, false);
			OBJECT::_0x2797C633DCDBBAC5(uParam0->f_160, 0f, 1);
			func_130(&(uParam0->f_57));
			func_45(&(uParam0->f_57), 2);
			uParam0->f_162[6] = func_81("CRAFT_FASTER", joaat("INPUT_CONTEXT_A"), 2, 0, 0, 6, 7000, 10000, 25, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			func_545(uParam0, 6, 0, 0);
			func_84(&(uParam0->f_162[6]), 0, 1);
			func_82(&(uParam0->f_162[6]), -1067771379, 0, 1);
			uParam0->f_57.f_62 = 0;
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_57.f_39);
			func_17(&(uParam0->f_151), 16);
			func_62(uParam0, 13);
		}
		return 0;
	}
	if (uParam0->f_149 != 0)
	{
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
	}
	if (uParam0->f_149 > 0)
	{
		HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::_CREATE_VAR_STRING(0, uParam0->f_57.f_77), 1, 0, 0, 0);
	}
	if (uParam0->f_149 != 12)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 442509369))
		{
			uParam0->f_209++;
			func_93(uParam0->f_57.f_77, BUILTIN::TO_FLOAT(uParam0->f_208), uParam0->f_209 >= uParam0->f_208);
		}
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 442509369))
	{
		uParam0->f_209++;
		if (func_90())
		{
			func_91(1);
		}
		else if (func_92())
		{
			func_91(0);
		}
		func_93(uParam0->f_57.f_77, BUILTIN::TO_FLOAT(uParam0->f_208), uParam0->f_209 >= uParam0->f_208);
	}
	if (func_98(0))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -936525963))
		{
			func_17(&(uParam0->f_151), 1024);
			func_99(uParam0->f_57.f_77, 1, 1, 1, 0);
			func_546();
		}
	}
	if (uParam0->f_149 >= 14)
	{
		if (func_70(&(uParam0->f_162[8])) && func_229(&(uParam0->f_162[8]), 1))
		{
		}
	}
	if (uParam0->f_57.f_21 != -1 && func_547(&(uParam0->f_57)) != 12)
	{
		if (func_548(uParam0->f_57.f_21))
		{
		}
		else
		{
			uParam0->f_57.f_21 = -1;
		}
	}
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Global_35, false);
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_35, 0, 1);
	switch (uParam0->f_149)
	{
		case 0:
			if (uParam0->f_154 == 4)
			{
				if (func_343(Global_35, uParam0[0], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@STOOL1@MALE_A@STOOL1_TRANS_KNEEL1", "STOOL1_TRANS_KNEEL1", "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR"))
				{
					uParam0->f_154 = 0;
				}
				return 0;
			}
			if (func_85(uParam0))
			{
				if (iVar0 == -571916863)
				{
					func_88(-1890302844, 0.5f);
					return 0;
				}
				else if (iVar0 == -597629206)
				{
					func_88(36116464, 0.5f);
					return 0;
				}
			}
			if (((func_85(uParam0) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1208591336)) && (((((iVar0 == -1433449364 || iVar0 == 1135271674) || iVar0 == -229964281) || iVar0 == -518407211) || iVar0 == -571916863) || iVar0 == -597629206)) || func_547(&(uParam0->f_57)) == 12)
			{
				func_549(&(uParam0->f_57), 1);
				if (func_547(&(uParam0->f_57)) == 11)
				{
					if (func_317(uParam0->f_57.f_77))
					{
						func_550(uParam0);
					}
					else if (uParam0->f_57.f_80)
					{
						uParam0->f_208 = 1;
						func_47(131072);
						if (func_98(0))
						{
							func_543(uParam0->f_57.f_77, uParam0->f_57.f_78, 1, func_551(), 0);
						}
						func_45(&(uParam0->f_57), 0);
						func_130(&(uParam0->f_57));
						func_144(uParam0->f_162[6], 1, 1);
						if (func_372(uParam0->f_57.f_77, -1636519629) == -701492487)
						{
							uParam0->f_162[8] = func_81("POUR_COFFEE", joaat("INPUT_CONTEXT_A"), 2, 0, 0, 0, 6000, 10000, 25, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
							func_84(&(uParam0->f_162[8]), 0, 1);
							func_82(&(uParam0->f_162[8]), -1067771379, 0, 1);
							func_552(uParam0, 0);
						}
						else
						{
							uParam0->f_162[6] = func_81("CRAFT_FASTER", joaat("INPUT_CONTEXT_A"), 2, 0, 0, 6, 6000, 10000, 25, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
							func_545(uParam0, 6, 0, 0);
							func_84(&(uParam0->f_162[6]), 0, 1);
							func_82(&(uParam0->f_162[6]), -1067771379, 0, 1);
						}
						func_553();
						uParam0->f_196 = MISC::GET_GAME_TIMER();
						func_62(uParam0, 1);
					}
					else
					{
						func_6(&(uParam0->f_151), 4);
						func_47(131072);
					}
				}
				else if (func_547(&(uParam0->f_57)) == 0)
				{
					func_75(uParam0, 1);
					func_55(131072);
					func_55(16384);
					func_47(262144);
					func_47(65536);
					if (func_56(8192))
					{
						func_45(&(uParam0->f_57), 0);
						uParam0->f_196 = MISC::GET_GAME_TIMER();
						func_130(&(uParam0->f_57));
						func_6(&(uParam0->f_151), 512);
						return 1;
					}
				}
				else if (func_547(&(uParam0->f_57)) == 1 || func_138(Global_35, 0))
				{
					func_6(&(uParam0->f_151), 4);
					uParam0->f_57.f_35 = 0;
					func_170(uParam0, uParam0->f_57.f_22);
					func_75(uParam0, 1);
					func_130(&(uParam0->f_57));
					func_55(131072);
					func_55(16384);
					func_47(262144);
					func_47(65536);
					if (uParam0->f_154 == 4)
					{
						uParam0->f_157 = 9;
					}
					else
					{
						uParam0->f_157 = 6;
					}
					uParam0->f_196 = MISC::GET_GAME_TIMER();
					func_6(&(uParam0->f_151), 512);
					return 1;
				}
			}
			break;
		case 1:
			if (func_85(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_196) > 250)
			{
				if (uParam0->f_154 == 4)
				{
					if (func_343(Global_35, uParam0[0], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@STOOL1@MALE_A@STOOL1_TRANS_KNEELFIRECRAFT", "STOOL1_TRANS_KNEELFIRECRAFT", "WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT"))
					{
						uParam0->f_154 = 0;
						func_62(uParam0, 2);
					}
				}
				else if (iVar0 == -518407211)
				{
					if (func_88(653141085, 1086324736 /* Float: 6f */))
					{
					}
				}
				else if (func_372(uParam0->f_57.f_77, -1636519629) == -701492487)
				{
					if (iVar0 == -1433449364)
					{
						if (func_88(1335077954, 1086324736 /* Float: 6f */))
						{
							func_62(uParam0, 2);
						}
					}
					else if (uParam0->f_154 == 0)
					{
						if (func_340(uParam0, 0))
						{
							func_88(-1871280875, 1f);
							func_62(uParam0, 9);
						}
					}
					else if (uParam0->f_154 == 1)
					{
						if (func_340(uParam0, 1))
						{
							func_88(-1098561217, 1f);
							func_62(uParam0, 9);
						}
					}
					else if (uParam0->f_154 == 2)
					{
						if (func_343(Global_35, uParam0[1], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL3@MALE_A@KNEEL3_TRANS_KNEEL2", "KNEEL3_TRANS_KNEEL2", "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR"))
						{
							uParam0->f_154 = 1;
						}
					}
					else if (uParam0->f_154 == 3)
					{
						if (func_343(Global_35, uParam0[0], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL4@MALE_A@KNEEL4_TRANS_KNEEL1", "KNEEL4_TRANS_KNEEL1", "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR"))
						{
							uParam0->f_154 = 0;
						}
					}
				}
				else if (iVar0 == -1433449364)
				{
					func_88(1520707380, 1086324736 /* Float: 6f */);
					func_62(uParam0, 2);
				}
				else
				{
					func_88(-1161086932, 1086324736 /* Float: 6f */);
					func_62(uParam0, 2);
				}
				uParam0->f_196 = MISC::GET_GAME_TIMER();
			}
			break;
		case 2:
			if (!func_165(&(uParam0->f_162[6]), 0) && (MISC::GET_GAME_TIMER() - uParam0->f_196) > 500)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1070143458) || func_85(uParam0))
				{
					func_84(&(uParam0->f_162[6]), 1, 1);
				}
			}
			if (func_152(&(uParam0->f_162[6]), 1) || func_372(uParam0->f_57.f_77, -1636519629) == -701492487)
			{
				if (PAD::_0x1252C029FC8EBB4D())
				{
					PAD::_0x709BA8C08C5C008D();
				}
				func_545(uParam0, 6, 1, 0);
				func_144(uParam0->f_162[6], 1, 1);
				if (((func_122(uParam0->f_57.f_77) == 2085633299 && !func_190(uParam0->f_57.f_77, -1242251796)) && !func_190(uParam0->f_57.f_77, 1919582297)) && !func_190(uParam0->f_57.f_77, -651046900))
				{
					uParam0->f_162[8] = func_81("USE_ITEM", joaat("INPUT_CRAFTING_EAT"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
					func_82(&(uParam0->f_162[8]), -1067771379, 0, 1);
					func_83(&(uParam0->f_162[8]), 10, 1, 1);
					uParam0->f_162[7] = func_81("STOW_ITEM", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
					func_83(&(uParam0->f_162[7]), 10, 1, 1);
					func_82(&(uParam0->f_162[7]), -1067771379, 0, 1);
					ATTRIBUTE::_0x7E2C766ADB2C5F1A(uParam0->f_57.f_77, 1);
				}
				if (!func_98(0))
				{
					uParam0->f_57.f_21 = func_135(uParam0->f_57.f_77, uParam0->f_57.f_78);
				}
				uParam0->f_209 = 0;
				func_31(&(uParam0->f_201));
				uParam0->f_196 = MISC::GET_GAME_TIMER();
				func_6(&(uParam0->f_151), 1024);
				func_62(uParam0, 3);
			}
			else if (func_165(&(uParam0->f_162[6]), 0))
			{
				func_554(uParam0, iVar0);
			}
			break;
		case 3:
			if (func_85(uParam0))
			{
				if (func_336(&(uParam0->f_201), 0.1f))
				{
					if (iVar0 == -87088667)
					{
						uParam0->f_196 = MISC::GET_GAME_TIMER();
						func_88(-266297705, 1f);
						func_31(&(uParam0->f_201));
					}
					else
					{
						uParam0->f_196 = MISC::GET_GAME_TIMER();
						func_88(1581850152, 1086324736 /* Float: 6f */);
					}
				}
			}
			if (func_70(&(uParam0->f_162[8])))
			{
				func_232(0, 7000);
				func_232(2, 7000);
				func_232(1, 7000);
				if (func_165(&(uParam0->f_162[8]), 0) && (func_229(&(uParam0->f_162[8]), 1) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_CRAFTING_EAT"))))
				{
					if (!func_98(0))
					{
						func_226(uParam0->f_57.f_77, 1, 1, -142743235, 0);
					}
					ATTRIBUTE::_0xD962F8579D702DB5();
					func_99(uParam0->f_57.f_77, 1, 1, 0, 0);
					func_546();
					func_144(uParam0->f_162[8], 1, 1);
					func_144(uParam0->f_162[7], 1, 1);
					func_552(uParam0, 1);
					func_55(131072);
					func_45(&(uParam0->f_57), 15);
					func_62(uParam0, 5);
					return 0;
				}
			}
			if ((!func_70(&(uParam0->f_162[8])) || (func_165(&(uParam0->f_162[7]), 0) && (func_555(&(uParam0->f_162[7]), 1) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_CONTEXT_X"))))) || func_138(Global_35, 0))
			{
				func_144(uParam0->f_162[8], 1, 1);
				func_144(uParam0->f_162[7], 1, 1);
				ATTRIBUTE::_0xD962F8579D702DB5();
				uParam0->f_196 = MISC::GET_GAME_TIMER();
				if (func_16(uParam0->f_151, 512))
				{
					func_6(&(uParam0->f_151), 512);
					func_131(&(uParam0->f_57), 0);
					AUDIO::PLAY_SOUND_FRONTEND("Exit", "SSCRFT_Sounds", true, 0);
					func_45(&(uParam0->f_57), 1);
				}
				else
				{
					func_45(&(uParam0->f_57), 15);
				}
				func_552(uParam0, 1);
				func_62(uParam0, 4);
				return 0;
			}
			break;
		case 4:
			if (func_85(uParam0) && ((MISC::GET_GAME_TIMER() - uParam0->f_196) > 100 || func_125(&(uParam0->f_201))))
			{
				if (iVar0 == -87088667)
				{
					func_88(-1530401853, 1086324736 /* Float: 6f */);
				}
				else if (iVar0 == 512684539)
				{
					func_88(-1463467224, 1086324736 /* Float: 6f */);
					func_88(1111052667, 1086324736 /* Float: 6f */);
				}
				else
				{
					func_88(1111052667, 1086324736 /* Float: 6f */);
				}
				uParam0->f_196 = MISC::GET_GAME_TIMER();
				func_62(uParam0, 7);
			}
			break;
		case 5:
			if (func_85(uParam0) && ((MISC::GET_GAME_TIMER() - uParam0->f_196) > 100 || func_125(&(uParam0->f_201))))
			{
				if (iVar0 == -87088667)
				{
					func_88(-1878840211, 1086324736 /* Float: 6f */);
				}
				else if (iVar0 == 512684539)
				{
					func_88(-1510453203, 1086324736 /* Float: 6f */);
					func_88(-1783213919, 1086324736 /* Float: 6f */);
				}
				else
				{
					func_88(-1783213919, 1086324736 /* Float: 6f */);
				}
				uParam0->f_196 = MISC::GET_GAME_TIMER();
				func_62(uParam0, 6);
			}
			break;
		case 9:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_196) > 1000)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1070143458) || func_85(uParam0))
				{
					ATTRIBUTE::_0x7E2C766ADB2C5F1A(uParam0->f_57.f_77, 1);
					uParam0->f_57.f_84 = 2;
					func_84(&(uParam0->f_162[8]), 1, 1);
					func_556(uParam0, 1);
					func_62(uParam0, 10);
				}
			}
			break;
		case 10:
			func_232(0, 7000);
			func_232(2, 7000);
			func_232(1, 7000);
			if (func_70(&(uParam0->f_162[8])) && func_229(&(uParam0->f_162[8]), 1))
			{
				if (func_98(0))
				{
					func_99(uParam0->f_57.f_77, 1, 1, 0, 0);
				}
				ATTRIBUTE::_0xD962F8579D702DB5();
				uParam0->f_57.f_84 = (uParam0->f_57.f_84 - 1);
				uParam0->f_196 = MISC::GET_GAME_TIMER();
				func_131(&(uParam0->f_57), 0);
				func_45(&(uParam0->f_57), 15);
				func_557(&(uParam0->f_162));
				uParam0->f_162[8] = func_81("DRINK", joaat("INPUT_CRAFTING_EAT"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
				func_82(&(uParam0->f_162[8]), -1067771379, 0, 1);
				func_83(&(uParam0->f_162[8]), 10, 1, 1);
				func_84(&(uParam0->f_162[8]), 0, 1);
				func_62(uParam0, 11);
			}
			if (func_229(&(uParam0->f_162[11]), 1))
			{
				ATTRIBUTE::_0xD962F8579D702DB5();
				func_557(&(uParam0->f_162));
				func_62(uParam0, 0);
				func_45(&(uParam0->f_57), 15);
				func_6(&(uParam0->f_151), 512);
			}
			else if (func_152(&(uParam0->f_162[3]), 1))
			{
				ATTRIBUTE::_0xD962F8579D702DB5();
				func_557(&(uParam0->f_162));
				func_62(uParam0, 0);
				func_6(&(uParam0->f_151), 512);
				func_131(&(uParam0->f_57), 0);
				AUDIO::PLAY_SOUND_FRONTEND("Exit", "SSCRFT_Sounds", true, 0);
				func_45(&(uParam0->f_57), 1);
				func_62(uParam0, 0);
				return 0;
			}
			else if (func_338(&(uParam0->f_162[3]), 1))
			{
				if (!func_125(&(uParam0->f_57.f_89)))
				{
					func_31(&(uParam0->f_57.f_89));
				}
				else if (func_29(&(uParam0->f_57.f_89), 0.1f))
				{
					func_157(&(uParam0->f_162[3]), "CAMP_REC_QUIT", 1);
				}
			}
			else
			{
				if (func_125(&(uParam0->f_57.f_89)))
				{
					func_337(&(uParam0->f_57.f_89));
				}
				func_157(&(uParam0->f_162[3]), "CAMP_REC_BACK", 1);
			}
			break;
		case 11:
			if (func_558(uParam0))
			{
				func_62(uParam0, 12);
			}
			break;
		case 12:
			func_89(uParam0, iVar0);
			if ((func_85(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_196) > 500) && iVar0 == -1433449364)
			{
				func_62(uParam0, 0);
			}
			break;
		case 13:
			if (func_85(uParam0))
			{
				if (iVar0 == -1433449364)
				{
					func_88(1335077954, 1086324736 /* Float: 6f */);
					return 0;
				}
				func_55(268435456);
				uParam0->f_196 = MISC::GET_GAME_TIMER();
				if (func_16(uParam0->f_150, 8) && uParam0->f_57.f_78 == 278772510)
				{
					switch (uParam0->f_154)
					{
						case 0:
							if (iVar0 == -518407211)
							{
								if (func_88(-141272310, 1086324736 /* Float: 6f */))
								{
									func_47(16384);
									func_62(uParam0, 14);
								}
							}
							else if (func_88(-742855896, 1086324736 /* Float: 6f */))
							{
								func_47(16384);
								func_62(uParam0, 14);
							}
							break;
						case 1:
							if (iVar0 == -518407211)
							{
								if (func_88(-1655950104, 1086324736 /* Float: 6f */))
								{
									func_47(16384);
									func_62(uParam0, 14);
								}
							}
							else if (func_88(-2054966814, 1086324736 /* Float: 6f */))
							{
								func_47(16384);
								func_62(uParam0, 14);
							}
							break;
						case 2:
							if (iVar0 == -518407211)
							{
								if (func_343(Global_35, uParam0[1], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNIFE3@MALE_A@KNIFE3_TRANS_COOKGRILL2_B", "KNIFE3_TRANS_COOKGRILL2_B", "WORLD_PLAYER_DYNAMIC_KNEEL_COOKGRILL2"))
								{
									uParam0->f_154 = 1;
									func_47(16384);
									func_62(uParam0, 14);
								}
							}
							else if (func_343(Global_35, uParam0[1], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL3@MALE_A@KNEEL3_TRANS_COOKGRILL2_B", "KNEEL3_TRANS_COOKGRILL2_B", "WORLD_PLAYER_DYNAMIC_KNEEL_COOKGRILL2"))
							{
								uParam0->f_154 = 1;
								func_47(16384);
								func_62(uParam0, 14);
							}
							break;
						case 3:
							if (iVar0 == -518407211)
							{
								if (func_343(Global_35, uParam0[0], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNIFE4@MALE_A@KNIFE4_TRANS_COOKGRILL1_A", "KNIFE4_TRANS_COOKGRILL1_A", "WORLD_PLAYER_DYNAMIC_KNEEL_COOKGRILL1"))
								{
									uParam0->f_154 = 0;
									func_47(16384);
									func_62(uParam0, 14);
								}
							}
							else if (func_343(Global_35, uParam0[0], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL4@MALE_A@KNEEL4_TRANS_COOKGRILL1_A", "KNEEL4_TRANS_COOKGRILL1_A", "WORLD_PLAYER_DYNAMIC_KNEEL_COOKGRILL1"))
							{
								uParam0->f_154 = 0;
								func_47(16384);
								func_62(uParam0, 14);
							}
							break;
						case 4:
							if (func_88(2085830274, 1086324736 /* Float: 6f */))
							{
								func_47(16384);
								func_62(uParam0, 14);
							}
							break;
					}
				}
				else if (iVar0 == -518407211)
				{
					func_88(-9448781, 1086324736 /* Float: 6f */);
					func_47(16384);
					func_62(uParam0, 14);
				}
				else
				{
					func_88(2101630952, 1086324736 /* Float: 6f */);
					func_47(16384);
					func_62(uParam0, 14);
				}
			}
			break;
		case 14:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -560091334))
			{
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_160, true);
			}
			if (!func_165(&(uParam0->f_162[6]), 0) && (MISC::GET_GAME_TIMER() - uParam0->f_196) > 500)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1070143458))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("cook_meat_sizzle_loop", uParam0->f_160, "Player_Campfire_Sounds", 0, 0, 0);
					AUDIO::_0x9821B68CD3E05F2B("distanceToFlame", 1f, "cook_meat_sizzle_loop", "Player_Campfire_Sounds");
					func_84(&(uParam0->f_162[6]), 1, 1);
					func_559(&(uParam0->f_162[6]), 1);
				}
			}
			if (func_152(&(uParam0->f_162[6]), 1))
			{
				uParam0->f_207 = -1;
				OBJECT::_0x2797C633DCDBBAC5(uParam0->f_160, 1f, 1);
				if (PAD::_0x1252C029FC8EBB4D())
				{
					PAD::_0x709BA8C08C5C008D();
				}
				uParam0->f_162[7] = func_81("STOW_ITEM", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
				uParam0->f_162[8] = func_81("EAT_MEAT", joaat("INPUT_CRAFTING_EAT"), 1, 0, 0, 0, 570, 4000, 1, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
				func_83(&(uParam0->f_162[8]), 10, 1, 1);
				func_83(&(uParam0->f_162[7]), 10, 1, 1);
				func_82(&(uParam0->f_162[7]), -1067771379, 0, 1);
				func_82(&(uParam0->f_162[8]), -1067771379, 0, 1);
				if (func_560(uParam0->f_57.f_77, 1, 0) || func_66(64))
				{
					func_84(&(uParam0->f_162[7]), 0, 1);
					func_49(64);
				}
				func_144(uParam0->f_162[6], 1, 1);
				func_31(&(uParam0->f_201));
				func_55(16384);
				uParam0->f_209 = 0;
				if (!func_98(0))
				{
					uParam0->f_57.f_21 = func_135(uParam0->f_57.f_77, uParam0->f_57.f_78);
				}
				ATTRIBUTE::_0x7E2C766ADB2C5F1A(uParam0->f_57.f_77, 1);
				AUDIO::_0x0F2A2175734926D8("cook_meat_sizzle_loop", "Player_Campfire_Sounds");
				func_6(&(uParam0->f_151), 1024);
				func_62(uParam0, 15);
			}
			else
			{
				func_554(uParam0, iVar0);
				if (uParam0->f_207 == -1)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1070143458))
					{
						uParam0->f_207 = MISC::GET_GAME_TIMER();
					}
				}
				else
				{
					fVar1 = func_561(&(uParam0->f_162[6]), 1);
					fVar1 = func_510(fVar1, 0f, 1f);
					OBJECT::_0x2797C633DCDBBAC5(uParam0->f_160, (1f * fVar1), 1);
				}
			}
			break;
		case 15:
			func_232(0, 7000);
			func_232(2, 7000);
			func_232(1, 7000);
			if (func_85(uParam0))
			{
				if (func_336(&(uParam0->f_201), 0.1f))
				{
					uParam0->f_196 = MISC::GET_GAME_TIMER();
					if (func_16(uParam0->f_150, 8) && uParam0->f_57.f_78 == 278772510)
					{
						switch (uParam0->f_154)
						{
							case 0:
								if (iVar0 == 2070743955)
								{
									func_88(1534113026, 1f);
								}
								else
								{
									func_88(-1704091920, 1f);
								}
								break;
							case 1:
								if (iVar0 == -363005419)
								{
									func_88(1022088560, 1f);
								}
								else
								{
									func_88(1938215431, 1f);
								}
								break;
						}
					}
					else if (iVar0 == -283636008)
					{
						func_88(-1065570550, 2f);
					}
					else
					{
						func_88(-1295988014, 2f);
					}
				}
			}
			if (func_70(&(uParam0->f_162[8])))
			{
				if (func_165(&(uParam0->f_162[8]), 0) && (func_229(&(uParam0->f_162[8]), 1) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_CRAFTING_EAT"))))
				{
					ATTRIBUTE::_0xD962F8579D702DB5();
					func_99(uParam0->f_57.f_77, 1, 1, 0, 0);
					func_546();
					func_144(uParam0->f_162[8], 1, 1);
					func_144(uParam0->f_162[7], 1, 1);
					func_552(uParam0, 1);
					func_47(32768);
					if (!func_98(0))
					{
						func_226(uParam0->f_57.f_77, 1, 1, -142743235, 0);
					}
					uParam0->f_196 = MISC::GET_GAME_TIMER();
					func_62(uParam0, 17);
					return 0;
				}
			}
			if (func_70(&(uParam0->f_162[7])))
			{
				if ((((func_165(&(uParam0->f_162[7]), 0) && (func_229(&(uParam0->f_162[7]), 1) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_CONTEXT_X")))) || func_16(uParam0->f_151, 256)) || func_138(Global_35, 0)) || TASK::_0x916B8E075ABC8B4E(Global_35, 1))
				{
					func_48(16);
					func_6(&(uParam0->f_151), 256);
					ATTRIBUTE::_0xD962F8579D702DB5();
					func_144(uParam0->f_162[7], 1, 1);
					func_144(uParam0->f_162[8], 1, 1);
					func_552(uParam0, 1);
					func_62(uParam0, 20);
					return 0;
				}
			}
			break;
		case 20:
			if (func_85(uParam0) && ((MISC::GET_GAME_TIMER() - uParam0->f_196) > 250 || func_125(&(uParam0->f_201))))
			{
				if (!func_16(uParam0->f_150, 8) || uParam0->f_57.f_78 != 278772510)
				{
					if (iVar0 == -283636008)
					{
						func_88(528569882, 1f);
					}
					else if (iVar0 == 1412614124)
					{
						func_88(288708544, 1f);
					}
					else
					{
						func_88(-915834315, 1f);
					}
				}
				else
				{
					switch (uParam0->f_154)
					{
						case 0:
							if (iVar0 == 2070743955)
							{
								func_88(2117342404, 1f);
							}
							else if (iVar0 == -1425182948)
							{
								func_88(-496895315, 1f);
							}
							else
							{
								func_88(-915834315, 1f);
							}
							break;
						case 1:
							if (iVar0 == -363005419)
							{
								func_88(-854982185, 1f);
							}
							else if (iVar0 == -1731736943)
							{
								func_88(1638963596, 1f);
							}
							else
							{
								func_88(-915834315, 1f);
							}
							break;
					}
				}
				uParam0->f_196 = MISC::GET_GAME_TIMER();
				func_62(uParam0, 19);
			}
			break;
		case 17:
			if (func_85(uParam0) && ((MISC::GET_GAME_TIMER() - uParam0->f_196) > 250 || func_125(&(uParam0->f_201))))
			{
				if (uParam0->f_57.f_32 && uParam0->f_57.f_78 == 278772510)
				{
					switch (uParam0->f_154)
					{
						case 0:
							if (iVar0 == 2070743955)
							{
								func_88(802306281, 1f);
							}
							else if (iVar0 == -1425182948)
							{
								func_88(2046708901, 1f);
							}
							else
							{
								func_88(-414126081, 2f);
							}
							break;
						case 1:
							if (iVar0 == -363005419)
							{
								func_88(-928525822, 1f);
							}
							else if (iVar0 == -1731736943)
							{
								func_88(-217144965, 1f);
							}
							else
							{
								func_88(-414126081, 2f);
							}
							break;
					}
				}
				else if (iVar0 == -283636008)
				{
					func_88(709478876, 1f);
				}
				else if (iVar0 == 1412614124)
				{
					func_88(606164441, 1f);
				}
				else
				{
					func_88(-414126081, 2f);
				}
				uParam0->f_196 = MISC::GET_GAME_TIMER();
				func_62(uParam0, 18);
			}
			break;
		case 6:
		case 7:
		case 18:
		case 19:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -243011316) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1208591336))
			{
				func_556(uParam0, 1);
				func_55(32768);
				func_49(16);
				if (uParam0->f_149 == 18 || uParam0->f_149 == 19)
				{
					func_47(65536);
					func_62(uParam0, 16);
				}
				else
				{
					func_62(uParam0, 8);
				}
			}
			else if ((MISC::GET_GAME_TIMER() - uParam0->f_196) > 750)
			{
				if (!PED::_0xC488B8C0E52560D8(Global_35))
				{
					if (iVar0 == -518407211)
					{
						func_47(65536);
						func_62(uParam0, 16);
					}
					else if (iVar0 == -1433449364)
					{
						func_62(uParam0, 8);
					}
					else if (uParam0->f_149 == 18)
					{
						func_62(uParam0, 17);
					}
					else if (uParam0->f_149 == 19)
					{
						func_62(uParam0, 20);
					}
					else if (uParam0->f_149 == 7)
					{
						func_62(uParam0, 4);
					}
					else if (uParam0->f_149 == 6)
					{
						func_62(uParam0, 5);
					}
				}
			}
			break;
		case 8:
		case 16:
			func_47(1024);
			if (func_66(128))
			{
				if (func_165(&(uParam0->f_162[11]), 0))
				{
					func_84(&(uParam0->f_162[11]), 0, 1);
				}
				if (func_165(&(uParam0->f_162[3]), 0))
				{
					func_84(&(uParam0->f_162[3]), 0, 1);
				}
			}
			else
			{
				func_556(uParam0, 0);
			}
			if (func_165(&(uParam0->f_162[6]), 0))
			{
				if (func_138(Global_35, 0))
				{
					func_84(&(uParam0->f_162[6]), 0, 1);
				}
			}
			if (func_229(&(uParam0->f_162[6]), 1))
			{
				func_55(65536);
				func_557(&(uParam0->f_162));
				if (uParam0->f_149 == 16)
				{
					func_550(uParam0);
				}
				else
				{
					func_562(uParam0);
				}
			}
			else if (func_229(&(uParam0->f_162[11]), 1))
			{
				func_55(65536);
				func_557(&(uParam0->f_162));
				func_62(uParam0, 0);
				func_45(&(uParam0->f_57), 15);
				func_6(&(uParam0->f_151), 512);
			}
			else if (func_152(&(uParam0->f_162[3]), 1))
			{
				func_55(65536);
				func_557(&(uParam0->f_162));
				func_62(uParam0, 0);
				func_6(&(uParam0->f_151), 512);
				func_131(&(uParam0->f_57), 0);
				AUDIO::PLAY_SOUND_FRONTEND("Exit", "SSCRFT_Sounds", true, 0);
				func_45(&(uParam0->f_57), 1);
				func_62(uParam0, 0);
				return 0;
			}
			else if (func_338(&(uParam0->f_162[3]), 1))
			{
				if (!func_125(&(uParam0->f_57.f_89)))
				{
					func_31(&(uParam0->f_57.f_89));
				}
				else if (func_29(&(uParam0->f_57.f_89), 0.1f))
				{
					func_157(&(uParam0->f_162[3]), "CAMP_REC_QUIT", 1);
				}
			}
			else
			{
				if (func_125(&(uParam0->f_57.f_89)))
				{
					func_337(&(uParam0->f_57.f_89));
				}
				func_157(&(uParam0->f_162[3]), "CAMP_REC_BACK", 1);
			}
			break;
	}
	return 0;
}

struct<2> func_250(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_251(var uParam0, int iParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

int func_252(int iParam0, bool bParam1)
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
	if (func_121(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_563(iVar0) || func_564(iVar0))
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

int func_253(int iParam0, bool bParam1)
{
	if (!func_121(iParam0, 0))
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

void func_254(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_286(iParam0))
	{
		return;
	}
	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(iVar0, true);
}

int func_255(int iParam0, bool bParam1)
{
	var uVar0;
	var uVar5;
	var uVar9;
	struct<5> Var10;
	var uVar15;

	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	if (!func_565(iParam0, 856287005, &uVar9, &uVar5, &uVar0, 1, 0))
	{
		return 0;
	}
	Var10 = { func_566() };
	Var10.f_4 = uVar9;
	if (func_567(iParam0, &uVar15, &Var10, 1, 752097756, 0))
	{
		if (bParam1)
		{
			if (!func_568(iParam0, 1))
			{
			}
		}
		if (func_569(iParam0))
		{
			func_255(func_570(iParam0), 1);
		}
		func_571();
		return 1;
	}
	return 0;
}

void func_256(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (!func_121(iParam0, 0))
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
	if (!func_572())
	{
		func_573(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_574(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_574(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_454(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_122(iParam0);
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
	else if (!func_575(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_576(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, func_492(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_190(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = MISC::_CREATE_VAR_STRING(0, func_492(iParam0));
	}
	func_577(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_257(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<4> Var1;
	var uVar6;

	if (!func_578(iParam0, iParam1))
	{
		return 0;
	}
	if (iParam1 == 1)
	{
		if (func_579(iParam0) && func_580(iParam0))
		{
			iVar0 = 0;
			if (func_581(iParam0, 369710026, &iVar0))
			{
				iParam2 = iVar0;
			}
		}
	}
	Var1.f_4 = func_582(iParam1);
	Var1 = { func_583(0) };
	if (!func_567(iParam0, &uVar6, &Var1, iParam2, 752097756, 1))
	{
		return 0;
	}
	return 1;
}

struct<2> func_258(int iParam0)
{
	return func_260(-1108808256, iParam0);
}

int func_259(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_122(iParam0);
	switch (iParam1)
	{
		case 1:
			if ((func_190(iParam0, -537818634) || func_190(iParam0, -458578204)) && !func_190(iParam0, -1242251796))
			{
				return 1;
			}
			break;
		case 2:
			if (iVar0 == joaat("ammo"))
			{
				if (func_190(iParam0, -1588156645))
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
				if (func_190(iParam0, -1588156645))
				{
					return 1;
				}
			}
			break;
		case 0:
			if (func_317(iParam0) || func_372(iParam0, -1636519629) == -701492487)
			{
				return 1;
			}
			break;
		case 4:
			if (func_190(iParam0, 127710288))
			{
				return 1;
			}
			break;
		case 5:
			if (func_190(iParam0, -1242251796))
			{
				return 1;
			}
			break;
	}
	return 0;
}

struct<2> func_260(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_261(int iParam0)
{
	int iVar0;
	float fVar1;

	if (func_23() != -1)
	{
		return;
	}
	iVar0 = func_584(iParam0);
	fVar1 = func_585(iParam0);
	if ((Global_1347477->f_117 || !func_455(31)) || !func_586(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_587(iVar0) >= 7)
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
	func_588(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_577(MISC::_CREATE_VAR_STRING(6, func_589(iParam0), fVar1), "itemtype_textures", func_590(iVar0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_262(int iParam0, int iParam1, int iParam2)
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

	if (!func_121(iParam1, 0))
	{
		return 0;
	}
	if (func_122(iParam1) != joaat("clothing"))
	{
		return 0;
	}
	bVar1 = func_23() != -1;
	iVar2 = PED::_GET_METAPED_TYPE(iParam0);
	if (func_199(iParam1) == -999503751)
	{
		return 1;
	}
	iVar4 = func_591(iParam1);
	if (iVar4 == -358215195)
	{
		*iParam2 = 2084739242;
		return 0;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_190(iParam1, 866047851))
	{
		iVar5 = func_413(iVar4, 1);
		if (func_592(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5 /*3*/] != iVar8)
		{
			*iParam2 = -265166256; /* GXTEntry: "You are wearing too many of this item. Remove some before equipping more." */
			return 0;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (PED::_GET_PED_COMPONENT_CATEGORY(iVar8, iVar2, bVar1) == 2056714954 && PED::_0xFB4891BD7578CDC1(iParam0, -1455751347))
			{
				*iParam2 = 111371848; /* GXTEntry: "Your shirt does not support this type of neckwear." */
				return 0;
			}
			iVar5 = 10;
			iVar3 = func_199(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]));
			if (bVar7 && iVar3 == -525676072)
			{
				*iParam2 = -1938792745; /* GXTEntry: "Your neckwear does not allow for changing your collar." */
				return 0;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] != &Global_1946804->f_57[iVar5 /*11*/] && func_190(iParam1, -1638171711))
			{
				*iParam2 = 187275271; /* GXTEntry: "Your chaps do not support this." */
				return 0;
			}
			break;
		case 1900541263:
			iVar5 = 36;
			if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] == &Global_1946804->f_57[iVar5 /*11*/])
			{
				*iParam2 = 2143522536;
				return 0;
			}
			if (PED::_0xFB4891BD7578CDC1(iParam0, -1968556728))
			{
				*iParam2 = -849690042; /* GXTEntry: "Your boots do not support having spurs." */
				return 0;
			}
			break;
		case -1505978566:
			if (func_593(1868067663, &uVar0))
			{
				*iParam2 = 939463734; /* GXTEntry: "Item cannot be worn with coats." */
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
				iVar11 = PED::_0x90403E8107B60E81(iParam0);
				iVar10 = func_594(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_594(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*iParam2 = -1608241763; /* GXTEntry: "You are wearing too many items. Something must be removed to preview other items." +
    "" */
					return 0;
				}
				Jump @726; //curOff = 583
				iVar3 = func_199(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6 /*11*/] && func_190(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), -1638171711))
				{
					*iParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
					return 0;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] == &Global_1946804->f_57[iVar5 /*11*/])
					{
						*iParam2 = 2143522536;
						return 0;
					}
				}
			}
			*iParam2 = 0;
			return 1;
		}

void func_263(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_264()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

void func_265(bool bParam0)
{
	if (func_23() != -1)
	{
		return;
	}
	if (bParam0 && ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0))
	{
		return;
	}
	if (Global_40.f_11095.f_43 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		func_63(89, 1);
		ATTRIBUTE::_0xFB6E111908502871(5);
	}
	else
	{
		func_63(90, 1);
		ATTRIBUTE::_0x3FC4C027FD0936F4(5);
	}
	func_595(1, bParam0, 1);
	func_483();
	Global_40.f_11095.f_43 = bParam0;
}

void func_266(float fParam0)
{
	if (func_506(1) < fParam0)
	{
		func_511(1, fParam0, 0);
	}
	if (func_506(2) < fParam0)
	{
		func_511(2, fParam0, 0);
	}
	if (func_506(0) < fParam0)
	{
		func_511(0, fParam0, 0);
	}
}

int func_267(int iParam0)
{
	iParam0 = func_395(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (func_596(iParam0) == 0)
	{
		return 0;
	}
	return 1;
}

void func_268(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iParam0 = func_395(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iParam2 = func_597(iParam2, 0, 100);
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_398[iParam1 /*4*/] = iParam2;
	iVar0 = func_204(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
	}
	func_599(iVar0, iParam1, func_598(iParam0, iParam1));
	func_600(iVar0, iParam1);
}

void func_269(float fParam0)
{
	func_516(10, fParam0);
}

int func_270()
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

void func_271()
{
	GRAPHICS::ANIMPOSTFX_STOP("PlayerDrunk01");
	Global_1935436->f_12 = 0f;
}

int func_272()
{
	return Global_1310750->f_16037;
}

bool func_273(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

bool func_274(int iParam0, int iParam1)
{
	if (!func_273(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

int func_275(int iParam0)
{
	if (!func_273(iParam0))
	{
		return 0;
	}
	if (func_601(64) && func_602(iParam0))
	{
		return 1;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_46;
}

int func_276(int iParam0)
{
	if (!func_273(iParam0))
	{
		return 0;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_47;
}

void func_277(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_273(&(Global_1310750->f_13321[iParam0 /*9*/])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID((Global_1310750->f_13321[iParam0 /*9*/])->f_5, 523);
	((*Global_1310750)[iVar0 /*111*/])->f_48 = 0;
	func_603(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_278(int iParam0, int iParam1)
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);
	if (iParam1 == 1)
	{
		func_279(1);
	}
}

void func_279(bool bParam0)
{
	if (bParam0)
	{
		func_17(&(Global_40.f_12018.f_42), 1);
	}
	else
	{
		func_6(&(Global_40.f_12018.f_42), 1);
	}
}

int func_280(int iParam0)
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

int func_281(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_282(int iParam0)
{
	if (!func_119(iParam0))
	{
		return -1;
	}
	return func_604(iParam0);
}

int func_283(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_122(iParam0);
	if (iVar0 == joaat("weapon") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(iParam0);
	}
	else if (iVar0 == joaat("ammo") && WEAPON::_0x1F7977C9101F807F(iParam0))
	{
		return iParam0;
	}
	if (func_190(iParam0, 1399091007))
	{
		func_605(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_284(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_86(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_285(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_286(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

int func_287(int iParam0)
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

int func_288(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_606(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_608(&Var0, func_607(0));
	}
	if (!func_609(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_287(iVar14);
	return uVar15;
}

bool func_289(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_290(var uParam0)
{
	return func_289(*uParam0, 2);
}

float func_291()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_292(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_293(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_294(int iParam0)
{
	Global_1347477->f_118 = iParam0;
	Global_1347477->f_6 = iParam0;
}

bool func_295(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	var uVar2;

	return func_610(iParam0, iParam1, &uVar0, &uVar1, &uVar2, bParam2, bParam3, iParam4, bParam5);
}

struct<5> func_296(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_583(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_122(iParam0))
	{
		case joaat("clothing"):
			if (!INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0 = { func_346(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("weapon"):
			Var0 = { func_607(bParam1) };
			if (bParam2 && func_611(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_612(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_612(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_613(iParam0, &Var5, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_614(bParam1) };
			switch (func_199(iParam0))
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
			if (func_615(iParam0, -1823706425))
			{
				Var0 = { func_346(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_615(iParam0, -1483207246))
			{
				Var0 = { func_346(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		default:
			if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!func_616(Var0, &Var27, bParam1, 0))
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

int func_297(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;

	func_617(&iParam0);
	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	if (!func_98(0))
	{
		bParam3 = true;
	}
	if (func_618(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
		{
			Var0 = { func_607(0) };
			Var4.f_9 = -1591664384;
			if (!func_612(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
			{
				return 0;
			}
			else if (func_613(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
			{
				return 0;
			}
			if (func_611(iParam0, 1))
			{
				if (!func_612(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					return 0;
				}
				else if (func_613(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
				{
					return 0;
				}
			}
		}
		else if (!func_619(iParam0, &uVar26, 0))
		{
			return 0;
		}
		return 1;
	}
	iVar27 = func_620(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_419(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(func_86(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return 1;
	}
	return 0;
}

struct<16> func_298(int iParam0, struct<4> Param1, int iParam5, int iParam6)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_4 = { Param1 };
	Var0 = { func_346(iParam0, Var0.f_4, iParam5, 1) };
	Var0.f_8 = iParam0;
	Var0.f_9 = iParam6;
	Var0.f_11 = iParam5;
	return Var0;
}

int func_299(int iParam0, var uParam1, bool bParam2)
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
					func_621(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_621(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16))
	{
		func_621(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_300(int iParam0, struct<7> Param1)
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
			if ((Global_1224226->f_1[iVar0 /*9*/])->f_1 == 1 || (Global_1224226->f_1[iVar0 /*9*/])->f_1 == 5)
			{
				(Global_1224226->f_1[iVar0 /*9*/])->f_2 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

int func_301(int iParam0, bool bParam1, int iParam2)
{
	if (func_622(255))
	{
		return 1;
	}
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(522750908))
	{
		return 0;
	}
	if (!func_623(iParam0))
	{
		return 0;
	}
	if (!func_625(func_624(iParam0), !bParam1, iParam2, 0))
	{
		return 0;
	}
	return 1;
}

int func_302(int iParam0)
{
	if (func_626())
	{
		return 1;
	}
	if (!func_625(func_627(iParam0), 0, 255, 0))
	{
		return 0;
	}
	return 1;
}

int func_303(int iParam0, int iParam1)
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

bool func_304(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

void func_305(int iParam0)
{
	if (!func_628(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_DELETE(((*Global_1945938)[iParam0 /*18*/])->f_3);
	}
	((*Global_1945938)[iParam0 /*18*/])->f_4 = 0;
	(*Global_1945938)[iParam0 /*18*/] = 1;
	((*Global_1945938)[iParam0 /*18*/])->f_16 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_1 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_6 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_9 = 0f;
	((*Global_1945938)[iParam0 /*18*/])->f_10 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_11 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_2 = 1;
	((*Global_1945938)[iParam0 /*18*/])->f_15 = -1f;
}

bool func_306(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_307(int iParam0)
{
	return ((*Global_1835011)[iParam0 /*74*/])->f_63 & 64512 != 0;
}

void func_308(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_306(iParam0))
	{
		return;
	}
	if (func_629((*Global_1835011)[iParam0 /*74*/], 8192))
	{
		bVar0 = true;
	}
	((*Global_1835011)[iParam0 /*74*/])->f_63 = 0;
	if (!bParam1 && bVar0)
	{
		((*Global_1835011)[iParam0 /*74*/])->f_63 |= 2;
		((*Global_1835011)[iParam0 /*74*/])->f_63 |= 8192;
	}
}

void func_309(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;

	if (!func_117(iParam0))
	{
		return;
	}
	bVar0 = true;
	if (!bParam1)
	{
		bVar0 = MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37);
	}
	func_630(&(((*Global_1347702)[iParam0 /*49*/])->f_14));
	func_631(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 16384);
	func_632(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 4096);
	if (bVar0)
	{
		if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1048576 != 0 && ((*Global_1347702)[iParam0 /*49*/])->f_13 & 2048 == 0)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			MAP::REMOVE_BLIP(&(((*Global_1347702)[iParam0 /*49*/])->f_37));
			if (iParam2 == 1)
			{
				func_634(iParam0, func_633(iParam0), 0, 0);
			}
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_18 > -1f)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			MAP::REMOVE_BLIP(&(((*Global_1347702)[iParam0 /*49*/])->f_37));
			if (iParam2 == 1)
			{
				func_634(iParam0, func_635(iParam0), 0, 0);
			}
		}
		else
		{
			MAP::_SET_BLIP_FLASH_STYLE(((*Global_1347702)[iParam0 /*49*/])->f_37, 724623647);
		}
	}
}

bool func_310(int iParam0, int iParam1)
{
	if (func_23() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_311(int iParam0)
{
	if (func_23() != -1)
	{
		if (func_313(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_313(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_312(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_313(iParam0, 65536) && !func_313(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_313(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_313(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_313(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_314(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_315()
{
	return Global_1905944->f_5694;
}

int func_316(int iParam0)
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

int func_317(int iParam0)
{
	if (func_122(iParam0) == 2085633299 && INVENTORY::_0x245D07651B1D183B(iParam0, 16777216))
	{
		return 1;
	}
	return 0;
}

void func_318(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

int func_319(int iParam0)
{
	int iVar0;

	iVar0 = func_636(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && PED::IS_PED_INJURED(iVar0))
	{
		return iVar0;
	}
	return 0;
}

int func_320(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	Var4.f_1 = 10;
	func_637(&Var4, 1356624740);
	return func_638(iParam0, &Var4, &uVar0, iParam1);
}

int func_321(int iParam0)
{
	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	if (func_190(iParam0, -887064662))
	{
		return 1;
	}
	return func_639(iParam0);
}

int func_322(int iParam0, int iParam1)
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

int func_323(int iParam0)
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

int func_324(int iParam0)
{
	if (!func_121(iParam0, 0))
	{
	}
	if (func_190(iParam0, 1286414894))
	{
		return 1;
	}
	return 0;
}

int func_325(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_640(iVar0, &uVar2, &uVar3, &iVar1, &uVar4);
	if (func_641(&uVar5, iVar0, iVar1, uVar2))
	{
	}
	return uVar5;
}

int func_326(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::_0x31FEF6A20F00B963(iParam0);
	if (iVar0 == 0)
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			iVar0 = func_642(iVar1);
		}
	}
	return iVar0;
}

int func_327(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (!bParam4)
	{
		iParam1 = func_643(iParam0, iParam1, 1, 1, -142743235);
	}
	else
	{
		iVar0 = func_644(0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			func_645(&iVar0, iParam0, &iParam1, bParam2, iParam3);
		}
	}
	if (iParam1 <= 0)
	{
		return 1;
	}
	return func_646(iParam0, iParam1, bParam2, iParam3);
}

bool func_328(int iParam0)
{
	return WEAPON::_0xC4DEC3CA8C365A5D(iParam0);
}

int func_329()
{
	return Global_1897952->f_41;
}

bool func_330(int iParam0)
{
	int iVar0;

	iVar0 = func_282(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_331(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_70(iParam0))
	{
		return;
	}
	iVar0 = func_163(iParam0);
	func_179(iVar0, iParam1);
}

void func_332(var uParam0, char* sParam1)
{
	int iVar0;

	if (func_70(*uParam0))
	{
		iVar0 = func_163(*uParam0);
		if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
		{
			HUD::_UIPROMPT_SET_TAG(((*Global_1945938)[iVar0 /*18*/])->f_3, sParam1);
		}
	}
}

int func_333(var uParam0)
{
	int iVar0;

	if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0[5]))
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(TASK::_GET_SCENARIO_POINT_COORDS(uParam0[5], 1), 1.5f) > 0)
		{
			return 0;
		}
		iVar0 = TASK::_GET_ENTITY_SCENARIO_POINT_IS_ATTACHED_TO(uParam0[5]);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (FIRE::IS_ENTITY_ON_FIRE(iVar0))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_334(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_647(bParam1, bParam2, bParam3);
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

int func_335()
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

int func_336(var uParam0, float fParam1)
{
	if (func_29(uParam0, fParam1))
	{
		func_337(uParam0);
		return 1;
	}
	return 0;
}

void func_337(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_338(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_70(iParam0))
	{
		return false;
	}
	iVar0 = func_163(iParam0);
	if (!HUD::_UIPROMPT_HAS_HOLD_MODE(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return PAD::IS_CONTROL_PRESSED(2, ((*Global_1945938)[iVar0 /*18*/])->f_4);
	}
	return HUD::_UIPROMPT_IS_HOLD_MODE_RUNNING(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

int func_339(var uParam0)
{
	int iVar0;

	uParam0->f_155 = func_61();
	iVar0 = func_36(uParam0);
	if ((((uParam0->f_156 == -1 || iVar0 == uParam0->f_156) && (uParam0->f_157 == 0 || func_648(uParam0->f_155, uParam0->f_157))) || (uParam0->f_156 == -1 && func_648(uParam0->f_155, uParam0->f_157))) && !(PED::_0xC488B8C0E52560D8(Global_35) || PED::_0x2DC0E8DCBD3546E9(Global_35)))
	{
		uParam0->f_154 = iVar0;
		return 1;
	}
	return 0;
}

int func_340(var uParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		if (iParam1 != uParam0->f_158)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_159))
			{
				uParam0->f_159 = TASK::_0x295514F198EFD0CA(uParam0[0], "p_boiler02x");
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_159, true);
			}
			if (uParam0->f_158 != -1)
			{
				if (TASK::_0x6EF4E31B4D5D2DA0(uParam0[uParam0->f_158], "p_boiler02x"))
				{
					uParam0->f_158 = -1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_159))
			{
				if (TASK::_0x8360C47380B6F351(uParam0[iParam1], uParam0->f_159, "p_boiler02x", 1))
				{
					uParam0->f_158 = iParam1;
					return 1;
				}
			}
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_341(var uParam0)
{
	int iVar0;

	iVar0 = PED::_0xC22AA08A8ADB87D4(Global_35);
	if (iVar0 == -518407211)
	{
		if (func_85(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_196) > 500)
		{
			func_88(653141085, 2f);
			uParam0->f_196 = MISC::GET_GAME_TIMER();
		}
	}
	else if (iVar0 == -1433449364)
	{
		if (func_85(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_196) > 500)
		{
			func_88(1335077954, 2f);
			uParam0->f_196 = MISC::GET_GAME_TIMER();
		}
	}
}

int func_342(var uParam0)
{
	if (uParam0->f_155 == 6 && func_60(1))
	{
		return 1;
	}
	else
	{
		switch (uParam0->f_155)
		{
			case 1:
				func_88(-73132177, 1086324736 /* Float: 6f */);
				break;
		}
	}
	return 0;
}

bool func_343(var uParam0, var uParam1, char* sParam2, char* sParam3, char* sParam4)
{
	PED::_0x6D07B371E9439019(Global_35);
	return TASK::_0x79197F7D2BB5E73A(uParam0, uParam1, sParam2, sParam3, sParam4, 0);
}

int func_344(var uParam0)
{
	if (uParam0->f_155 == 6 && func_60(1))
	{
		return 1;
	}
	else
	{
		switch (uParam0->f_155)
		{
			case 1:
				func_88(-73132177, 1086324736 /* Float: 6f */);
				break;
			case 8:
				func_88(-1890302844, 0.5f);
				break;
			case 7:
				func_88(36116464, 0.5f);
				break;
		}
	}
	return 0;
}

int func_345(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (func_649(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	if (!func_98(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_86(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

struct<4> func_346(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_121(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_86(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_347(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_649(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_616(*uParam1, &Var0, bParam6, 0))
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
	if (!func_98(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_86(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_348(int iParam0)
{
	if (func_190(iParam0, 1573112293))
	{
		return func_650(iParam0);
	}
	switch (func_199(iParam0))
	{
		case -77448735:
			if (func_651(iParam0))
			{
				return func_650(iParam0);
			}
			break;
		case -1393202694:
		case 2041469314:
			return func_650(iParam0);
		case 1802292908:
			return func_652();
		case -2061583405:
		case -1719060085:
		case 81053684:
			return func_653();
		case -525676072:
			return func_653();
		case 1779021115:
			if (func_121(iParam0, 0))
			{
				if (iParam0 == joaat("weapon_kit_camera"))
				{
					return func_654();
				}
			}
			return func_655();
		case -1823706425:
			return func_656();
		case -854348463:
			return func_657();
		default:
			if (func_121(iParam0, 0))
			{
				if (func_190(iParam0, 1192444843) || func_190(iParam0, -1540973036))
				{
					return func_658();
				}
				else if (func_190(iParam0, 1919582297))
				{
					return func_659();
				}
				else if (func_190(iParam0, 1147021565))
				{
					return func_660();
				}
				switch (iParam0)
				{
					case -2035110427: /* GXTEntry: "Mortar and Pestle" */
					case -1448210800: /* GXTEntry: "Crafting Tools" */
						return func_661();
					case -1516555556: /* GXTEntry: "Horse Brush" */
						return func_662();
				}
			}
			return func_663();
	}
	return func_663();
}

int func_349(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	func_664(iParam1);
	if (!uParam0->f_1)
	{
		*uParam0 = PED::IS_PED_DEAD_OR_DYING(Global_35, true);
		uParam0->f_1 = 1;
	}
	if (Global_1935630->f_12 || *uParam0)
	{
		return 0;
	}
	if (func_23() == 0)
	{
		if (Global_1935496->f_7 & 131072 != 0)
		{
			return 0;
		}
	}
	if (iParam3 & 1 == 0)
	{
		if (Global_1935496->f_7 & 1024 != 0)
		{
			return 0;
		}
	}
	if (Global_1935630->f_22)
	{
		return 0;
	}
	if (iParam3 & 2 == 0)
	{
		if (Global_1935496->f_7 & 32 != 0)
		{
			return 0;
		}
	}
	if (iParam3 & 4 == 0)
	{
		if (Global_1935496->f_7 & 4096 != 0)
		{
			return 0;
		}
	}
	if (iParam3 & 8 == 0)
	{
		if (Global_1935496->f_7 & 512 != 0)
		{
			return 0;
		}
	}
	if (iParam3 & 512 == 0)
	{
		if (!uParam0->f_3)
		{
			uParam0->f_2 = func_665(bParam2);
			uParam0->f_3 = 1;
		}
		if (!uParam0->f_2)
		{
			return 0;
		}
	}
	if (iParam3 & 262144 == 0)
	{
		if (!uParam0->f_5)
		{
			uParam0->f_4 = func_666(bParam2);
			uParam0->f_5 = 1;
		}
		if (!uParam0->f_4)
		{
			return 0;
		}
	}
	if (iParam3 & 64 == 0)
	{
		if (!uParam0->f_7)
		{
			uParam0->f_6 = func_667(bParam2, iParam3, 1);
			uParam0->f_7 = 1;
		}
		if (!uParam0->f_6)
		{
			return 0;
		}
	}
	if (iParam3 & 128 == 0)
	{
		if (!uParam0->f_11)
		{
			uParam0->f_10 = func_668(Global_35, 1868526510);
			uParam0->f_11 = 1;
		}
		if (!uParam0->f_9)
		{
			uParam0->f_8 = func_669(Global_35);
			uParam0->f_9 = 1;
		}
		if (!uParam0->f_13)
		{
			uParam0->f_12 = ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_40);
			uParam0->f_13 = 1;
		}
		if ((uParam0->f_10 || uParam0->f_12) || uParam0->f_8)
		{
			if (bParam2)
			{
				func_201("ITEM_UNUSABLE_FULLY_MOUNTED", 10000, 0, 0, 0, 1);
			}
			return 0;
		}
	}
	if (iParam3 & 8388608 == 0)
	{
		if (!uParam0->f_11)
		{
			uParam0->f_10 = func_668(Global_35, 1868526510);
			uParam0->f_11 = 1;
		}
		if (!uParam0->f_9)
		{
			uParam0->f_8 = func_669(Global_35);
			uParam0->f_9 = 1;
		}
		if (uParam0->f_10 || uParam0->f_8)
		{
			if (!uParam0->f_15)
			{
				uParam0->f_14 = PED::IS_PED_SWIMMING(Global_1935630->f_40);
				uParam0->f_15 = 1;
			}
			if (uParam0->f_14)
			{
				return 0;
			}
		}
	}
	if (iParam3 & 16 == 0)
	{
		if (!uParam0->f_9)
		{
			uParam0->f_8 = func_669(Global_35);
			uParam0->f_9 = 1;
		}
		if (!uParam0->f_13)
		{
			uParam0->f_12 = ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_40);
			uParam0->f_13 = 1;
		}
		if (uParam0->f_8)
		{
			if (uParam0->f_12)
			{
				if (!uParam0->f_17)
				{
					uParam0->f_16 = func_670(Global_1935630->f_40, 1);
					uParam0->f_17 = 1;
				}
				if (!uParam0->f_16)
				{
					if (bParam2)
					{
						func_201("ITEM_UNUSABLE_HORSE_SPEED", 10000, 0, 0, 0, 1);
					}
					return 0;
				}
			}
		}
	}
	if (iParam3 & 256 == 0)
	{
		if (Global_1935496->f_7 & 8192 != 0)
		{
			return 0;
		}
	}
	if (iParam3 & 1024 == 0)
	{
		if (Global_1935496->f_7 & 65536 != 0)
		{
			if (bParam2)
			{
				func_201("ITEM_UNUSABLE_CINEMATIC_CAM", 10000, 0, 0, 0, 1);
			}
			return 0;
		}
	}
	if (iParam3 & 2048 == 0)
	{
		if (Global_1935496->f_7 & 32768 != 0)
		{
			return 0;
		}
	}
	if (iParam3 & 4096 == 0)
	{
		if (Global_1935496->f_7 & 16384 != 0)
		{
			return 0;
		}
	}
	if (iParam3 & 8192 == 0)
	{
		if (Global_1935496->f_7 & 16 == 0)
		{
			return 0;
		}
	}
	if (iParam3 & 16384 == 0)
	{
		if (Global_1935496->f_7 & 256 != 0)
		{
			return 0;
		}
	}
	if (iParam3 & 32768 == 0)
	{
		if (!uParam0->f_19)
		{
			uParam0->f_18 = func_182();
			uParam0->f_19 = 1;
		}
		if (uParam0->f_18)
		{
			if (bParam2)
			{
				func_201("ITEM_UNUSABLE_SATCHEL_OPEN", 10000, 0, 0, 0, 1);
			}
			return 0;
		}
	}
	if (iParam3 & 131072 == 0)
	{
		if (Global_1935496->f_7 & 524288 == 0)
		{
			return 0;
		}
	}
	if (iParam3 & 65536 == 0)
	{
		if (Global_1935496->f_7 & 262144 == 0)
		{
			return 0;
		}
	}
	if (iParam3 & 524288 == 0)
	{
		if (Global_1935496->f_7 & 2097152 == 0)
		{
			return 0;
		}
	}
	if (iParam3 & 1048576 == 0)
	{
		if (Global_1935496->f_7 & 8388608 == 0)
		{
			return 0;
		}
	}
	if (iParam3 & 2097152 == 0)
	{
		if (Global_1935496->f_7 & 33554432 != 0)
		{
			return 0;
		}
	}
	if (iParam3 & 4194304 == 0)
	{
		if (Global_1935496->f_7 & 67108864 != 0)
		{
			return 0;
		}
	}
	if (iParam3 & 16777216 == 0)
	{
		if (Global_1935496->f_7 & 134217728 == 0)
		{
			return 0;
		}
	}
	if (Global_1935496->f_7 & 17825988 != 0)
	{
		return 0;
	}
	return 1;
}

int func_350()
{
	int iVar0;
	int iVar1;

	if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
	{
		iVar0 = TASK::_0x2D0571BB55879DA2(Global_35);
		iVar1 = iVar0;
		if ((((iVar1 != -1241981548 && iVar1 != 1020517461) && iVar1 != 1259174088) && iVar1 != -1075420544) && iVar1 != -1767895052)
		{
			return 1;
		}
	}
	return 0;
}

bool func_351(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319->f_17370;
	}
	return (Global_1914319->f_17370 || Global_1914319->f_18996.f_1);
}

int func_352(bool bParam0, bool bParam1)
{
	int iVar0;

	if (func_23() == 0)
	{
		return DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1935689->f_2439.f_38.f_19);
	}
	if (func_671())
	{
		if (bParam0)
		{
			func_201("CAMP_UNUSABLE_HIDEOUT", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_140(Global_35))
	{
		if (bParam0)
		{
			func_201("CAMP_UNUSABLE_PICKUP_ITEM", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (PED::_0x7FC84E85D98F063D(Global_35))
	{
		if (bParam0)
		{
			func_201("CAMP_UNUSABLE_HORSE_INTERACTION", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_672())
	{
		if (bParam0)
		{
			if (func_435() != 8 && func_435() != 7)
			{
				func_201("CAMP_UNUSABLE_CARAVAN_CAMP", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_201("CAMP_UNUSABLE_BEECHERS_HOPE", 10000, 0, 0, 0, 1);
			}
		}
		return 0;
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		iVar0 = PED::GET_MOUNT(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				if (ENTITY::IS_ENTITY_IN_AIR(iVar0, 1) || PED::IS_PED_SWIMMING(iVar0))
				{
					return 0;
				}
			}
		}
	}
	else if (ENTITY::IS_ENTITY_IN_AIR(Global_35, 1) || PED::IS_PED_SWIMMING(Global_35))
	{
		return 0;
	}
	if (INTERIOR::IS_INTERIOR_SCENE())
	{
		if (bParam0)
		{
			func_201("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		if (bParam0)
		{
			func_201("CAMP_UNUSABLE_IN_COMBAT", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_334(PLAYER::PLAYER_ID(), 1, 1, 0))
	{
		if (bParam0)
		{
			func_201("CAMP_UNUSABLE_WANTED", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (LAW::_0x26934083D3F2579C(PLAYER::PLAYER_ID()))
	{
		if (bParam0)
		{
			func_201("CAMP_UNUSABLE_CRIME", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (bParam1)
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
		{
			if (bParam0)
			{
				func_201("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
			}
			return 0;
		}
	}
	if (func_673(Global_1393447, 16))
	{
		if (bParam0)
		{
			func_201("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_674())
	{
		if (bParam0)
		{
			func_201("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_675(-608558181) || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-608558181) > 0)
	{
		if (bParam0)
		{
			func_201("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		if (bParam0)
		{
			func_201("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if ((((PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) || (!PED::IS_PED_RAGDOLL(Global_35) && PED::IS_PED_ON_VEHICLE(Global_35, false))) || PED::IS_PED_IN_ANY_BOAT(Global_35)) || PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID())) || PED::IS_PED_JACKING(Global_35))
	{
		if (bParam0)
		{
			func_201("CAMP_UNUSABLE_ON_VEHICLE", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_18(0, 1, 1) && !func_676(1))
	{
		if (bParam0)
		{
			if (func_166(15))
			{
				func_201("CAMP_UNUSABLE_HUNTING", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_201("CAMP_UNUSABLE_MISSIONS", 10000, 0, 0, 0, 1);
			}
		}
		return 0;
	}
	if (func_329() == 8)
	{
		return 0;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-92416669) > 0)
	{
		if (bParam0)
		{
			func_201("CAMP_UNUSABLE_CAMERA", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_677(8388608))
	{
		if (bParam0)
		{
			func_201("CAMP_UNUSABLE_ALREADY_SET_UP", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_56(8388608))
	{
		if (bParam0)
		{
			func_201("CAMP_UNUSABLE_ALREADY_IN_A_CAMP", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_678(func_22()))
	{
		if (bParam0)
		{
			func_201("CAMP_UNUSABLE_LOCKDOWN", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (((func_5() || func_679(func_22()) == 9) || func_680(func_22())) && !func_681())
	{
		if (bParam0)
		{
			func_201("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_682(Global_35))
	{
		if (bParam0)
		{
			func_201("CAMP_UNUSABLE_LOOTING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_683())
	{
		if (bParam0)
		{
			func_201("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Global_1935496->f_131, true) > 2f)
	{
		Global_1935496->f_128 = { VEHICLE::_0x6DE03BCC15E81710(Global_36) };
		Global_1935496->f_131 = { Global_36 };
	}
	if (func_684(Global_35, Global_1935496->f_128, 4f, 1, 1))
	{
		if (bParam0)
		{
			func_201("CAMP_UNUSABLE_TRAIN", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_685(Global_36, 5f))
	{
		if (bParam0)
		{
			func_201("CAMP_UNUSABLE_NEAR_MISSION", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (BUILTIN::VDIST2(Global_36, ((*Global_1347702)[74 /*49*/])->f_24) < 144f && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1822247127) > 0)
	{
		return 0;
	}
	return 1;
}

void func_353(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 1)
	{
		func_278(iParam0, 0);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (&Global_40.f_11922[iVar0] == 0)
			{
				Global_40.f_11922[iVar0] = iParam0;
				return;
			}
			iVar0++;
		}
		func_108(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_354(int iParam0, int iParam1)
{
	if (!func_119(iParam0))
	{
		return;
	}
	func_686(iParam0, iParam1);
}

bool func_355(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_356(int iParam0)
{
	if (func_23() != -1)
	{
		return 0;
	}
	return func_120(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

bool func_357(int iParam0)
{
	return (Global_40.f_12004.f_6 && iParam0) != 0;
}

void func_358(int iParam0)
{
	Global_40.f_12018.f_26 = (Global_40.f_12018.f_26 || iParam0);
}

void func_359(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			if (func_264() && (func_451(38) || func_356(38)))
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
			if (func_264() && (func_451(39) || func_356(39)))
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
			if (func_264() && (func_451(49) || func_356(49)))
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
		if (func_264() && (func_451(38) || func_356(38)))
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
			func_687(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_687(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_689(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, func_688(func_449(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_687(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_687(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_264() && (func_451(39) || func_356(39)))
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
			func_687(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_687(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_264() && (func_451(49) || func_356(49)))
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
			func_687(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_687(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_687(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_687(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

void func_360(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
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
			if (func_264() && (func_451(38) || func_356(38)))
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
			if (func_264() && (func_451(39) || func_356(39)))
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
			iVar9 = func_690(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963; /* GXTEntry: "Duchesses and Other Animals" */
			break;
		case 41:
			if (func_264() && (func_451(41) || func_356(41)))
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
			if (func_264() && (func_451(49) || func_356(49)))
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
			iVar9 = func_690(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931; /* GXTEntry: "Ms. L Hobbs" */
			iVar13 = -1424865411; /* GXTEntry: "A Better World, A New Friend" */
			break;
	}
	sVar2 = func_691(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_692(iParam0, iVar13, iVar14))
	{
	}
	if (func_693(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_694(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_695(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_696(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_697(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_361(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

bool func_362(int iParam0)
{
	return (Global_40.f_12004.f_1 && iParam0) != 0;
}

void func_363(int iParam0)
{
	Global_40.f_12018.f_3 = (Global_40.f_12018.f_3 || iParam0);
}

void func_364(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

bool func_365(int iParam0)
{
	return (Global_40.f_12004.f_3 && iParam0) != 0;
}

void func_366(int iParam0)
{
	Global_40.f_12018.f_4 = (Global_40.f_12018.f_4 || iParam0);
}

void func_367(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

bool func_368(int iParam0)
{
	return (Global_40.f_12004.f_5 && iParam0) != 0;
}

void func_369(int iParam0)
{
	Global_40.f_12018.f_2 = (Global_40.f_12018.f_2 || iParam0);
}

void func_370(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_371(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;

	switch (func_372(iParam0, -949239683))
	{
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
					iVar0 = -487508500;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
	}
	return 0;
}

int func_372(int iParam0, int iParam1)
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

void func_373(int iParam0)
{
	int iVar0;

	iVar0 = 1428936325;
	switch (func_698())
	{
		case 0:
			iVar0 = 1428936325;
			break;
		case 3:
			iVar0 = 1791580586;
			break;
		case 1:
			iVar0 = 1731192422;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_699(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_700(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

bool func_374()
{
	return 1 == Global_40.f_7748.f_3;
}

int func_375(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return 0;
	}
	if (func_701(*uParam0, -1725579161, 0))
	{
		return 1;
	}
	return 0;
}

void func_376(int iParam0)
{
	int iVar0;

	iVar0 = 16939881;
	switch (func_698())
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
		func_699(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_700(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

void func_377(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = -45077177;
	switch (func_698())
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
		func_699(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_700(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

void func_378(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 1700817728;
	switch (func_698())
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
		func_699(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_700(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

void func_379(int iParam0)
{
	int iVar0;

	iVar0 = -362580870;
	switch (func_698())
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
		func_699(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_700(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

void func_380(int iParam0)
{
	int iVar0;

	iVar0 = -680642132;
	switch (func_698())
	{
		case 0:
			iVar0 = -680642132;
			break;
		case 1:
			iVar0 = -267849149;
			break;
		case 3:
			iVar0 = 1759003815;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_699(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_700(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

void func_381(int iParam0)
{
	int iVar0;

	iVar0 = 2105609037;
	switch (func_698())
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
		func_699(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_700(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

void func_382(int iParam0)
{
	int iVar0;

	iVar0 = 1964324114;
	switch (func_698())
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
		func_699(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_700(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

void func_383(int iParam0)
{
	int iVar0;

	iVar0 = -1530144981;
	switch (func_698())
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
		func_699(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_700(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

void func_384(int iParam0)
{
	int iVar0;

	iVar0 = -1074475556;
	switch (func_698())
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
		func_699(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_700(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

void func_385(int iParam0)
{
	int iVar0;

	iVar0 = 1076410848;
	switch (func_698())
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
		func_699(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_700(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

void func_386(int iParam0)
{
	int iVar0;

	iVar0 = 1516413548;
	switch (func_698())
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
		func_699(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_700(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

void func_387(int iParam0)
{
	int iVar0;

	iVar0 = -1454586679;
	switch (func_698())
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
		func_699(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_700(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

void func_388(int iParam0)
{
	int iVar0;

	iVar0 = 406178289;
	switch (func_698())
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
		if (func_190(iParam0, 1573112293))
		{
			func_702(func_524(&iParam0), 1, 1);
		}
		func_699(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_700(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

void func_389(int iParam0)
{
	int iVar0;

	iVar0 = 1934039819;
	switch (func_698())
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
		func_699(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_700(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

void func_390(int iParam0)
{
	int iVar0;

	iVar0 = -1054661625;
	switch (func_698())
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
		func_699(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_700(iParam0, 1);
		func_226(iParam0, 1, 0, -142743235, 0);
	}
}

bool func_391(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_392(char* sParam0)
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

void func_393(int iParam0)
{
	if (func_391(iParam0, 1))
	{
		func_703(1);
	}
}

int func_394(int iParam0)
{
	if (!func_704(iParam0))
	{
		return 0;
	}
	if (func_705(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

int func_395(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_396(int iParam0)
{
	int iVar0;

	iParam0 = func_395(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_204(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (func_706(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_397()
{
	return Global_40.f_1095.f_3054;
}

void func_398(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_399(struct<4> Param0)
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
			if (func_707(Param0))
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
			func_708(Param0);
			*(Global_1946804->f_668[Global_1946804->f_856 /*4*/]) = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_398(8);
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
			if (func_707(Param0))
			{
				return;
			}
			func_708(Param0);
			*(Global_1946804->f_567[Global_1946804->f_851 /*4*/]) = { Param0 };
			Global_1946804->f_851++;
			func_398(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_418(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

bool func_400()
{
	return Global_1946804->f_2792;
}

int func_401(int iParam0)
{
	if (func_709())
	{
		return 0;
	}
	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	if (!func_25(iParam0, 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return 0;
	}
	return 1;
}

bool func_402(int iParam0)
{
	return func_710(iParam0);
}

void func_403(int iParam0, int iParam1)
{
	func_711(iParam0, iParam1);
}

int func_404(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	bVar3 = func_712(iParam0);
	if (func_190(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_713(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_714();
			}
			else
			{
				iVar0 = func_715();
			}
		}
		else if (func_128(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_716();
		}
		else
		{
			iVar0 = func_717();
		}
	}
	else if (func_718(&iVar2))
	{
		if (func_190(iVar2, -1303648999))
		{
			iVar0 = func_714();
		}
		else
		{
			iVar0 = func_715();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_716();
	}
	else
	{
		iVar0 = func_717();
	}
	if (iVar0 != 0)
	{
		Global_1946804->f_2791 = MISC::GET_GAME_TIMER();
		TASK::_TASK_ITEM_INTERACTION(Global_35, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

bool func_405(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_406()
{
	func_719(&(Global_1946804->f_2776));
	func_720(32768);
	func_721(1108822547, 8, 6);
}

bool func_407(int iParam0, bool bParam1)
{
	return func_722(iParam0, 0) < func_723(iParam0, bParam1);
}

bool func_408(int iParam0)
{
	var uVar0;

	return func_724(iParam0, &uVar0);
}

void func_409(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;

	if (!func_725(iParam0))
	{
		return;
	}
	iVar0 = func_199(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_726(iParam0, &(Global_1946804->f_2657.f_21), Global_1946804->f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_726(iParam0, &(Global_1946804->f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_726(iParam0, &(Global_1946804->f_2657.f_20), Global_1946804->f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_726(iParam0, &(Global_1946804->f_2657.f_22), Global_1946804->f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_726(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_726(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_410(0))
	{
		func_727(iParam0, 1);
		if (func_728() == 1160113249)
		{
			func_727(func_410(-2125499975), 0);
		}
		else
		{
			func_727(func_410(1160113249), 0);
		}
	}
	func_729();
	if (func_730(iVar0))
	{
		INVENTORY::_0x766315A564594401(func_86(0), iParam0, 0);
	}
	func_211(iParam0, bParam3);
	if (bParam2)
	{
		func_731(0, 0);
	}
}

int func_410(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_728();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846 /* GXTEntry: "John\'s Classic Hat" */;
	}
	return -1535516064 /* GXTEntry: "Arthur\'s Hat" */;
}

void func_411(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_199(iParam1);
	if (iVar0 != func_199(iParam0))
	{
		return;
	}
	func_732(iParam0, iParam1, 1);
}

int func_412(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1946804->f_57[iVar0 /*11*/])->f_8 == iParam0)
		{
			return func_733(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_413(int iParam0, int iParam1)
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

int func_414(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_734();
	if (iParam2 == 39)
	{
		Var0 = { func_296(iParam0, 1, 0) };
		iParam2 = func_413(func_412(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return 0;
	}
	if (func_190(iParam0, 866047851) && func_592(&(Global_1946804->f_1378)) >= 2)
	{
		return 0;
	}
	if ((func_405(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2 /*11*/])
	{
		func_735(func_733(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_736(iParam2);
	func_737(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && (Global_1946804->f_57[iParam2 /*11*/])->f_1 > 1)
	{
		func_738(Global_1946804->f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_738(Global_1946804->f_1497.f_1[iParam2 /*3*/], 4, 6);
	}
	func_739(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = (Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2 /*3*/] = iParam0;
	(Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1 = func_740(iParam0, iParam2, iParam1, func_23() != -1);
	if (bParam4)
	{
		func_741(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_741(&(Global_1946804->f_1378), 1, 0);
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
				func_721(func_733(&(Global_1946804->f_2589.f_2[iVar6 /*2*/]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return 1;
}

void func_415(bool bParam0, bool bParam1, bool bParam2)
{
	func_742(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

int func_416(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_413(iParam0, 1);
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

void func_417(int iParam0)
{
	struct<4> Var0;

	if (func_743(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_744(Var0);
}

void func_418(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;

	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_744(Var0);
}

int func_419(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_346(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_86(bParam6), &Var0, 0);
	return uVar4;
}

bool func_420()
{
	return Global_1914319->f_18996.f_1;
}

bool func_421()
{
	return Global_1914319->f_18996;
}

char* func_422()
{
	switch (Global_1914319->f_18996.f_4)
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
		case 6:
			return "SHOPS_HANDHELD_FAIL_PVP_ASSA";
		case 7:
			return "SHOPS_HANDHELD_FAIL_PLAYER_DIED";
		case 8:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_COMBAT";
		case 9:
			return "SHOPS_HANDHELD_FAIL_PLAYER_RIDING";
		case 10:
			return "SHOPS_HANDHELD_FAIL_PLAYER_FALLING";
		case 11:
			return "SHOPS_HANDHELD_FAIL_PLAYER_INSPECTING";
		case 12:
			return "SHOPS_HANDHELD_FAIL_PLAYER_CARRYING";
		case 13:
			return "SHOPS_HANDHELD_FAIL_PLAYER_BROWSING";
		case 14:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_SCENARIO";
		case 15:
			return "SHOPS_HANDHELD_FAIL_PLAYER_SPECTATING";
		default:
			break;
	}
	return "";
}

int func_423(int iParam0)
{
	iParam0 = func_395(iParam0);
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

int func_424(int iParam0)
{
	iParam0 = func_395(iParam0);
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

float func_425(int iParam0)
{
	iParam0 = func_395(iParam0);
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

float func_426(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

bool func_427(int iParam0)
{
	return func_128(((*Global_1129543)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*59*/])->f_58, iParam0);
}

bool func_428()
{
	return !func_427(2);
}

bool func_429(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return false;
	}
	return (Global_1147325->f_1 && iParam0) != 0;
}

int func_430()
{
	if ((((func_351(0) && !func_745()) || func_746()) || Global_1935689->f_1) || func_747())
	{
		return 0;
	}
	return 1;
}

void func_431(int iParam0)
{
	Global_1898068->f_8 = iParam0;
}

var func_432(int iParam0, int iParam1)
{
	return func_748(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_433(struct<16> Param0, var uParam16, bool bParam17, bool bParam18)
{
	struct<18> Var0;

	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam16))
	{
		return;
	}
	Param0 = 0;
	Param0.f_1 = PLAYER::PLAYER_ID();
	Param0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (!bParam17)
	{
		if (Param0.f_15)
		{
			if (bParam18)
			{
				Var0.f_12 = 255;
				Var0.f_13 = 255;
				Var0.f_17 = -1;
				Var0 = { Param0 };
				Var0.f_16 = uParam16;
				Var0.f_17 = Param0.f_2;
				func_749(&(Global_1058888->f_43200), Var0);
				return;
			}
		}
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param0, 16, 4, &uParam16);
}

bool func_434(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_435()
{
	return Global_40.f_4283;
}

struct<2> func_436(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_121(iParam0, 0))
	{
		return Var0;
	}
	if (func_190(iParam0, -305066475))
	{
		if (func_23() == -1)
		{
			if (func_190(iParam0, -537818634))
			{
				return func_523(189951448);
			}
			else
			{
				return func_523(1176172851);
			}
		}
	}
	else if (func_190(iParam0, -537818634))
	{
		return func_523(-963660207);
	}
	if (func_190(iParam0, 2084895747))
	{
		return func_523(1694039471);
	}
	return Var2;
}

int func_437(int iParam0, int iParam1, bool bParam2, int iParam3)
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
	Var0 = { func_606(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_608(&Var0, func_607(0));
	}
	if (!func_609(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_285(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_347(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_287(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return 1;
}

void func_438(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_190(iParam0, 606799272))
		{
			func_750(iParam0, iParam1);
		}
		if (func_190(iParam0, -1112814642) && func_190(iParam0, -1697809989))
		{
			func_474(iParam0, iParam1, 1, 0);
		}
	}
}

void func_439()
{
	Global_1911914->f_1583 = MISC::GET_GAME_TIMER();
	Global_1911914->f_1581 = 1;
}

int func_440(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_23() == -1)
	{
		if (func_618(iParam0) && func_751(iParam0))
		{
			func_752(iParam0, iParam1, 1, &bParam2, iParam3);
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

int func_441(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_753(iParam0, iParam1);
	Var0 = { func_296(iParam0, 0, 1) };
	iVar5 = func_620(iParam0, &Var0, 0, 0);
	iVar6 = func_754(iParam0, 0);
	if ((iVar5 > 1 && !func_755()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_190(iParam0, -2051813666))
		{
			func_63(583, 1);
		}
		else
		{
			func_63(582, 0);
		}
	}
	if (func_297(iParam0, &Var0, *iParam1, 0, 0))
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

void func_442(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_372(iParam0, -949239683))
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

bool func_443(int iParam0)
{
	if (func_23() != -1)
	{
		return false;
	}
	return func_444(iParam0) != 0;
}

int func_444(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_756())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_757(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_445(int iParam0)
{
	return COLLECTION::_0x6052B4DE6657684F(iParam0);
}

int func_446(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < func_756())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_445(iVar0))
		{
			if (func_25(func_757(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_447(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_261(48);
	func_101(0, -1);
}

int func_448(int iParam0)
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, iParam0);
}

int func_449(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

int func_450(int iParam0)
{
	if (func_23() != -1)
	{
		return 0;
	}
	return func_120(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
}

int func_451(int iParam0)
{
	if (func_23() != -1)
	{
		return 0;
	}
	if (!func_117(iParam0))
	{
		return 0;
	}
	return func_330(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

int func_452()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_25(func_758(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_453(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

bool func_454(int iParam0, int iParam1)
{
	if (!func_121(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

int func_455(int iParam0)
{
	if (!func_759(iParam0))
	{
		return 0;
	}
	return func_760(iParam0);
}

void func_456(int iParam0)
{
	if (!func_759(iParam0))
	{
		return;
	}
	func_761(iParam0);
	func_762(iParam0);
}

int func_457(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
	if (WEAPON::_0x959383DCD42040DA(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
	{
		Var0 = { func_296(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_763((375 + iVar28), 1);
			if (func_612(iParam0, &Var0, iVar5, 0))
			{
				if (func_613(iParam0, &Var6, iVar5))
				{
					Var29 = { func_346(iParam0, Var0, iVar5, 0) };
					func_347(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_98(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
					{
						return 0;
					}
					func_458(WEAPON::_0x5C2EA6C44F515F34(iParam0), iParam1, iParam6);
					func_764(iParam0, iParam1);
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

int func_458(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_460(iParam0))
	{
		return 0;
	}
	if (!func_98(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

int func_459(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;

	iVar0 = func_253(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_23() == -1)
		{
			func_254(iVar0);
			if (iParam1 == 1248274121)
			{
				func_765(iVar0);
			}
		}
		if (!func_297(iParam0, &uVar1, 1, 0, 0))
		{
			func_752(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_766(iVar0);
			if (WEAPON::_0x6AD66548840472E5(iVar0))
			{
				func_457(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("weapon_fishingrod") || iVar0 == joaat("weapon_kit_binoculars"))
			{
				func_457(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("weapon_lasso"))
			{
				func_457(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_0x959383DCD42040DA(iVar0))
			{
				if (iVar0 == joaat("weapon_melee_knife_john") && !func_767())
				{
					return 0;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(iParam0))
				{
				}
				else if (!func_768(iVar0))
				{
					func_457(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_457(iVar0, WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_0xD955FEE4B87AFA07(iVar0))
			{
				iVar7 = func_769(Global_35, 2, 0, 1);
				if ((((func_286(iVar7) && !Global_43890) && iVar7 != iVar0) && !func_25(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 1, 0)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				if (func_286(iVar7) && func_25(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 1, 0))
				{
					if (!func_457(iVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return 0;
					}
				}
				else if (!func_457(iVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return 0;
				}
			}
			else if (!func_457(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_63(480, 1);
	}
	return 1;
}

bool func_460(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

int func_461(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_460(iParam0))
	{
		return 0;
	}
	iVar4 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (func_286(iVar4))
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
	if (func_25(611073244 /* GXTEntry: "Crow Beak Trinket" */, 1, 0) && iParam2 == -897553835)
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
		func_493(func_770(iParam0), func_492(iParam0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_23() == -1)
		{
			if (func_120(((*Global_1835011)[14 /*74*/])->f_1, 1))
			{
				func_63(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_98(0))
	{
		if (func_458(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return func_498(iParam0, *iParam1, iParam2);
	}
	return 0;
}

void func_462(int iParam0)
{
	var uVar0;

	if ((iParam0 == -615217896 && !func_771()) || iParam0 != -615217896)
	{
		if (func_262(Global_35, iParam0, &uVar0))
		{
			func_210(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415: /* GXTEntry: "Alligator Tooth Talisman" */
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_483();
			break;
		case -832719552: /* GXTEntry: "Bear Claw Talisman" */
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_483();
			break;
		case -1941112926: /* GXTEntry: "Bison Horn Talisman" */
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_483();
			break;
		case -615217896: /* GXTEntry: "Eagle Talon Talisman" */
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_481();
			break;
		case -121629511: /* GXTEntry: "Raven Claw Talisman" */
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_479();
			break;
	}
}

void func_463(int iParam0)
{
	switch (iParam0)
	{
		case -224110471: /* GXTEntry: "Beaver Tooth Trinket" */
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_479();
			break;
		case 1289585739: /* GXTEntry: "Tatanka Bison Horn Trinket" */
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_480();
			break;
		case 1441506783: /* GXTEntry: "Cougar Fang Trinket" */
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678: /* GXTEntry: "Coyote Fang Trinket" */
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695: /* GXTEntry: "Fox Claw Trinket" */
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_481();
			break;
		case 655868243: /* GXTEntry: "Iguana Scale Trinket" */
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_482();
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
			func_483();
			break;
		case -569248339: /* GXTEntry: "Hawk Talon Trinket" */
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_772();
			break;
		case -1196089647: /* GXTEntry: "Shark Tooth Trinket" */
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431: /* GXTEntry: "Turtle Shell Trinket" */
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_773();
			break;
		case -1056342069: /* GXTEntry: "Cat Eye Trinket" */
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

void func_464(int iParam0)
{
	bool bVar0;

	bVar0 = func_190(iParam0, -2017733358);
	if (func_774() < 3)
	{
		if (bVar0)
		{
			if (func_776(func_775(iParam0), iParam0))
			{
				func_493(79, func_492(func_775(iParam0)), 1);
			}
			else
			{
				func_493(78, func_492(func_775(iParam0)), 1);
			}
		}
		else
		{
			func_493(80, func_492(func_777(iParam0)), 1);
		}
	}
}

int func_465()
{
	if (((((func_778(839908568 /* GXTEntry: "Bounty Poster of Arthur" */, 400) || func_778(-1134030454 /* GXTEntry: "Bounty Notice" */, 400)) || func_778(623353496 /* GXTEntry: "Bounty Hunter\'s Orders" */, 400)) || func_778(-344413337 /* GXTEntry: "Poster of a Violent Criminal" */, 400)) || func_778(-1664948962 /* GXTEntry: "Bounty Hunter\'s Letter" */, 400)) || func_778(1795228059 /* GXTEntry: "Bounty Page" */, 400))
	{
		return 1;
	}
	return 0;
}

int func_466(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = func_779(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_780(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_781(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_467(int iParam0)
{
	switch (iParam0)
	{
		case -625427311: /* GXTEntry: "Letter from Ms. Hobbs" */
			func_360(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_359(51, 0, 0, 0, 0, -1, 0);
			func_361(8192);
			break;
		case 581047644: /* GXTEntry: "Invitation from Ms. Hobbs" */
			func_360(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_359(51, 0, 0, 0, 0, -1, 0);
			func_361(524288);
			break;
		case -644199619: /* GXTEntry: "Invitation from Deborah MacGuiness" */
			func_360(39, 0, 0, 0, 0, 0, 1, 0);
			func_359(39, 0, 0, 0, 0, -1, 0);
			func_364(16);
			break;
		case 684296857: /* GXTEntry: "Invitation from Jeremy Gill" */
			func_360(41, 0, 0, 0, 0, 0, 1, 0);
			func_359(41, 0, 0, 0, 0, -1, 0);
			func_367(8);
			break;
		case 466137807: /* GXTEntry: "Invitation from Francis Sinclair" */
			func_360(49, 0, 0, 0, 0, 0, 1, 0);
			func_359(49, 0, 0, 0, 0, -1, 0);
			func_370(16);
			break;
		case -1087522507: /* GXTEntry: "Exotic Collector\'s List" */
			func_360(43, 0, 0, -1791518714, func_782(1), 0, -1, 0);
			func_783(1);
			break;
		case -405829000: /* GXTEntry: "Exotic Collector\'s List" */
			func_360(43, 0, 0, -2087881550, func_782(2), 0, -1, 0);
			func_783(2);
			break;
		case 378660860: /* GXTEntry: "Exotic Collector\'s List" */
			func_360(43, 0, 0, 1908068621, func_782(4), 0, -1, 0);
			func_783(4);
			break;
		case 1566111097: /* GXTEntry: "Exotic Collector\'s List" */
			func_360(43, 0, 0, 1611247019, func_782(8), 0, -1, 0);
			func_783(8);
			break;
		case 1276007140: /* GXTEntry: "Exotic Collector\'s List" */
			func_360(43, 0, 0, 1319635688, func_782(16), 0, -1, 0);
			func_783(16);
			break;
	}
}

void func_468(int iParam0)
{
	if (func_784() == 1)
	{
		if (func_356(39))
		{
			func_63(342, 0);
		}
		else
		{
			func_63(343, 0);
			func_364(1);
		}
	}
	if (func_784() >= 30)
	{
		func_63(344, 0);
	}
	func_360(39, 0, 0, 0, 0, 0, -1, 0);
	func_359(39, 0, 0, func_784(), 30, 1, 0);
}

void func_469(int iParam0)
{
	if (func_785() == 1)
	{
		if (func_356(49))
		{
			func_63(409, 0);
		}
		else
		{
			func_63(410, 0);
			func_370(1);
		}
	}
	if (func_785() >= 10)
	{
		func_63(411, 0);
	}
	func_360(49, 0, 0, 0, 0, 0, -1, 0);
	func_359(49, 0, 0, func_785(), 10, 1, 0);
}

void func_470(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 1369162587: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(-949689219, 1);
			func_63(437, 0);
			func_63(440, 0);
			func_786(-949689219, 444160793 /* GXTEntry: "Perfect Squirrel Carcass" */, &sVar0, 1, 0, 0);
			func_360(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_359(51, 0, 0, sVar0, func_690(-949689219, 20), 1, 0);
			func_361(1);
			func_787(-748969569, 0, 0);
			break;
		case 1610047510: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(-1248968496, 1);
			func_786(-1248968496, -1969404854 /* GXTEntry: "Perfect Cardinal Carcass" */, &sVar0, 1, 0, 0);
			func_360(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_359(51, 0, 0, sVar0, func_690(-1248968496, 20), 1, 0);
			func_361(8);
			break;
		case 1317879106: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(1706369307, 1);
			func_786(1706369307, -832850511 /* GXTEntry: "Perfect Chipmunk Carcass" */, &sVar0, 1, 0, 0);
			func_360(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_359(51, 0, 0, sVar0, func_690(1706369307, 20), 1, 0);
			func_361(64);
			break;
		case 1062444751: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(1520110311, 1);
			func_786(1520110311, -100913452 /* GXTEntry: "Perfect Songbird Carcass" */, &sVar0, 1, 0, 0);
			func_360(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_359(51, 0, 0, sVar0, func_690(1520110311, 20), 1, 0);
			func_361(512);
			break;
		case 754186760: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(-1992824800, 1);
			func_63(438, 0);
			func_786(-1992824800, 905173572 /* GXTEntry: "Perfect Cedar Waxwing Carcass" */, &sVar0, 1, 0, 0);
			func_360(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_359(51, 0, 0, sVar0, func_690(-1992824800, 20), 1, 0);
			func_361(32768);
			break;
		default:
			func_63(439, 0);
			break;
	}
}

void func_471()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(-1278339625) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1278339625, -1316535105, 1);
	}
}

void func_472(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (func_23() == -1)
	{
		if (!func_356(43))
		{
			if (iParam0 == 281887510)
			{
				func_63(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_63(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_63(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_63(400, 0);
			}
		}
		else if (func_190(iParam0, 412399755))
		{
			func_788(-1791518714);
			if (func_789() == 0)
			{
				func_101(0, 10);
				iVar1 = func_790(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_791(iParam0) < func_792(iParam0))
					{
						func_360(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_359(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_356(44))
		{
			if (iParam0 == -222563712)
			{
				func_63(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_63(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_63(401, 0);
			}
		}
		else if (func_190(iParam0, 709057512))
		{
			func_788(-2087881550);
			if (func_789() == 1)
			{
				func_101(0, 10);
				iVar1 = func_790(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_791(iParam0) < func_792(iParam0))
					{
						func_360(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_359(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_356(45))
		{
			if (iParam0 == 2116770557)
			{
				func_63(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_63(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_63(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_63(398, 0);
			}
		}
		else if (func_190(iParam0, -1478961327))
		{
			func_788(1908068621);
			if (func_789() == 2)
			{
				func_101(0, 10);
				iVar1 = func_790(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_793(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0)) >= 25)
					{
						func_794(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0), 1);
						func_261(48);
					}
					if (func_791(iParam0) < func_792(iParam0))
					{
						func_360(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_359(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_791(iParam0) < func_792(iParam0))
					{
						func_360(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_359(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_356(46))
		{
			if (iParam0 == 2085530337)
			{
				func_63(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_63(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_63(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_63(406, 0);
			}
		}
		else if (func_190(iParam0, -1238404098))
		{
			func_788(1611247019);
			if (func_789() == 3)
			{
				func_101(0, 10);
				iVar1 = func_790(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_791(iParam0) < func_792(iParam0))
					{
						func_360(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_359(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_356(47))
		{
			if (iParam0 == -1521783510)
			{
				func_63(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_63(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_63(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_63(403, 0);
			}
		}
		else if (func_190(iParam0, 1160548794))
		{
			func_788(1319635688);
			if (func_789() == 4)
			{
				func_101(0, 10);
				iVar1 = func_790(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_791(iParam0) < func_792(iParam0))
					{
						func_360(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_359(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_473(int iParam0)
{
	int iVar0;

	if (iParam0 == 2116770557)
	{
		if (!func_793(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0)) >= 25)
		{
			func_794(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0), 1);
			func_261(48);
		}
	}
}

void func_474(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, 678508515, -1160144609);
		if (func_25(func_795(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_796(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_797(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_475(int iParam0, int iParam1, int iParam2)
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
				func_466(0, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255: /* GXTEntry: "$1.00" */
			func_466(-949580860, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493: /* GXTEntry: "$5.00" */
			func_466(-1171997683, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627: /* GXTEntry: "$10.00" */
			func_466(-2140931002, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377: /* GXTEntry: "Bill Fold" */
			func_466(-1116228267, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086: /* GXTEntry: "Small Bill Fold" */
			func_466(2112896861, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686: /* GXTEntry: "Bill Stack" */
			func_466(-1915150712, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991: /* GXTEntry: "Coin" */
			func_466(994220262, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101: /* GXTEntry: "Coin Purse" */
			func_466(-1388440107, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918: /* GXTEntry: "Coin Sack" */
			func_466(-1531790128, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765: /* GXTEntry: "Coin Stack" */
			func_466(1351791770, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903: /* GXTEntry: "Money Clip" */
			func_466(-161493966, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684: /* GXTEntry: "Money Stack" */
			func_466(668131102, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340: /* GXTEntry: "Money Pile" */
			if (!func_798())
			{
				func_466(1330954593, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740: /* GXTEntry: "Change Cup" */
			func_466(817681514, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264: /* GXTEntry: "Coin Cup" */
			func_466(1404311868, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970: /* GXTEntry: "$50.00" */
			func_466(-175152067, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1027115192: /* GXTEntry: "$100.00" */
			func_466(-526915387, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1064332555: /* GXTEntry: "$200.00" */
			func_466(101362741, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1954478446: /* GXTEntry: "$45.00" */
			func_466(1458818027, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -518592739: /* GXTEntry: "$50.00" */
			func_466(-1957208512, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -2010073778: /* GXTEntry: "$70.00" */
			func_466(2066857461, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -700133011: /* GXTEntry: "$100.00" */
			func_466(803940201, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1415414735: /* GXTEntry: "$120.00" */
			func_466(-1717765429, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case 2045548742: /* GXTEntry: "$150.00" */
			func_466(1379920914, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case 830381058: /* GXTEntry: "$350.00" */
			func_466(447209691, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
	}
}

void func_476(int iParam0)
{
	if (func_356(41))
	{
		func_63(363, 0);
	}
	else
	{
		func_63(362, 0);
	}
	switch (iParam0)
	{
		case 323124696: /* GXTEntry: "Legendary Bullhead Catfish" */
			func_799(-1865241121);
			func_800(-642026005);
			func_801(-642026005);
			func_101(0, 10);
			break;
		case -2108314374: /* GXTEntry: "Legendary Chain Pickerel" */
			func_799(2117142684);
			func_800(-940584364);
			func_801(-940584364);
			func_101(0, 10);
			break;
		case -1193798153: /* GXTEntry: "Legendary Lake Sturgeon" */
			func_799(-1409326024);
			func_800(1972645282);
			func_801(1972645282);
			func_101(0, 10);
			break;
		case -787702678: /* GXTEntry: "Legendary Largemouth Bass" */
			func_799(-641744968);
			func_800(1667205433);
			func_801(1667205433);
			func_101(0, 10);
			break;
		case -804542901: /* GXTEntry: "Legendary Longnose Gar" */
			func_799(-946988203);
			func_800(1362715885);
			func_801(1362715885);
			func_101(0, 10);
			break;
		case -1696275132: /* GXTEntry: "Legendary Muskie" */
			func_799(-646136018);
			func_800(1053540370);
			func_801(1053540370);
			func_101(0, 10);
			break;
		case -161595323: /* GXTEntry: "Legendary Perch" */
			func_799(-955835837);
			func_800(-1100103852);
			func_801(-1100103852);
			func_101(0, 10);
			break;
		case -1114363619: /* GXTEntry: "Legendary Redfin Pickerel" */
			func_799(-179276075);
			func_800(-1409869209);
			func_801(-1409869209);
			func_101(0, 10);
			break;
		case -368407134: /* GXTEntry: "Legendary Rock Bass" */
			func_799(-492711560);
			func_800(-1760235357);
			func_801(-1760235357);
			func_101(0, 10);
			break;
		case 1997759228: /* GXTEntry: "Legendary Smallmouth Bass" */
			func_799(1764383959);
			func_800(-138366827);
			func_801(-138366827);
			func_101(0, 10);
			break;
		case 1265573293: /* GXTEntry: "Legendary Sockeye Salmon" */
			func_799(317501533);
			func_800(-1261163843);
			func_801(-1261163843);
			func_101(0, 10);
			break;
		case -1030441283: /* GXTEntry: "Legendary Steelhead Trout" */
			func_799(817753087);
			func_800(-963523016);
			func_801(-963523016);
			func_101(0, 10);
			break;
		case -1490884871: /* GXTEntry: "Legendary Bluegill" */
			func_799(576606016);
			func_800(560825326);
			func_801(560825326);
			func_101(0, 10);
			break;
		case -395458616: /* GXTEntry: "Legendary Northern Pike" */
			func_799(814934957);
			func_800(858269539);
			func_801(858269539);
			break;
	}
}

void func_477(int iParam0, int iParam1)
{
	var uVar0;

	func_605(iParam0, iParam1, &uVar0);
}

int func_478(int iParam0, bool bParam1)
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
	iVar18 = func_769(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_769(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_284("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_285(&Var3, iVar2, iVar0, iVar1))
			{
				if (WEAPON::_0xD955FEE4B87AFA07(Var3.f_4))
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
						func_287(iVar0);
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

void func_479()
{
	PLAYER::_0x11A7FF918EF6BC66(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_60));
}

void func_480()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_0x497A6539BB0E8787(PLAYER::PLAYER_ID(), (1f - fVar0), (1f - fVar1));
}

void func_481()
{
	PLAYER::_0xE0D6C2A146A5C993(PLAYER::PLAYER_ID(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_482()
{
	PLAYER::_0xB427911EA6DFFEF3(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_63));
}

void func_483()
{
	func_802();
	func_803();
	func_804();
}

void func_484(int iParam0, int iParam1, bool bParam2)
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

void func_485(int iParam0, bool bParam1)
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
	func_687(MISC::_CREATE_VAR_STRING(2, sVar1), MISC::_CREATE_VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), 1433015236, MISC::_CREATE_VAR_STRING(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_486(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_487(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_488(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_489(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_490(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_491(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_492(int iParam0)
{
	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_493(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_148(iParam0, &iVar0, &iVar1);
	if (!func_149(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_313(iParam0, 1024))
	{
		return;
	}
	func_150(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = uParam1;
	((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 2;
}

void func_494(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_148(iParam0, &iVar0, &iVar1);
	if (!func_149(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_313(iParam0, 1024))
	{
		return;
	}
	func_150(iVar0, iVar1);
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

int func_495()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = COLLECTION::_0x5461C821D00FE15A(-2076669067, 0);
	if (iVar0 == func_756())
	{
		return func_496();
	}
	iVar4 = (func_756() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_756())
	{
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar2, -2076669067, 0);
		if (!func_805(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_757(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_496()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_756());
	return func_757(COLLECTION::_0x126CBEBBA46693CF(iVar0, -2076669067, 0));
}

void func_497(int iParam0)
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

int func_498(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_296(iParam0, 0, 1) };
	Var5 = { func_346(iParam0, Var0, Var0.f_4, 0) };
	return func_567(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_499(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_23() != -1)
	{
		return;
	}
	switch (func_199(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_722(81053684, 0) <= 0)
			{
				func_207(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_207(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_206(iParam0);
			if (func_704(iVar0))
			{
				func_806(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_207(30, iParam0, 0, 0, 0);
			}
			if (func_728() == -2125499975 || func_728() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935: /* GXTEntry: "The Summer Gunslinger" */
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case 1661121390: /* GXTEntry: "The Gunslinger" */
						func_207(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_728() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						func_207(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_407(-525676072, 0))
			{
				if (func_807(-525676072, &iVar1))
				{
					func_207(33, iVar1, 0, 0, 0);
				}
			}
			func_207(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_808(99217379))
		{
			func_210(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_456(24);
		if (func_478(&iVar2, 0))
		{
			func_457(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_500(int iParam0)
{
	if (func_190(iParam0, 943695443))
	{
		func_809(0, iParam0);
	}
	else if (func_190(iParam0, -2096528786))
	{
		func_809(1, iParam0);
	}
	else if (func_190(iParam0, -1094167013))
	{
		func_809(2, iParam0);
	}
	else if (func_190(iParam0, 1936654645))
	{
		func_809(3, iParam0);
	}
	else if (func_190(iParam0, 1306489306))
	{
		func_809(4, iParam0);
	}
	else if (func_190(iParam0, 435762317))
	{
		func_809(5, iParam0);
	}
	else if (func_190(iParam0, 1259363210))
	{
		func_809(6, iParam0);
	}
	else if (func_190(iParam0, 881398259))
	{
		func_809(7, iParam0);
	}
	else if (func_190(iParam0, -541549214))
	{
		func_809(8, iParam0);
	}
	else if (func_190(iParam0, 130796156))
	{
		func_809(-1, iParam0);
	}
}

void func_501(int iParam0)
{
	switch (iParam0)
	{
		case 236757114: /* GXTEntry: "Flight Feather" */
			if (func_23() == -1)
			{
				if (func_120(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_63(109, 1);
				}
			}
			break;
	}
}

void func_502(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_811(func_810(0));
	func_577(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_812(iParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_503(int iParam0)
{
	if (func_767())
	{
		return 0;
	}
	return func_120(((*Global_1347702)[58 /*49*/])->f_15, 1);
}

var func_504(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_813(uParam0, &Var0);
}

void func_505(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		fParam1 = func_509(iParam0, fParam1, 1);
	}
	func_815(iParam0, (func_814(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

float func_506(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

void func_507(float fParam0)
{
	if (fParam0 >= (100f - 1f))
	{
		AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
	}
}

void func_508()
{
	Global_40.f_11095.f_11[14] = 100f;
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, 14, 100);
	Global_40.f_11095.f_42 = 60;
}

float func_509(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_147();
	func_816(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_817(iParam0, 2);
	if (func_819(iVar0, func_818(iParam0, 2), 1))
	{
		func_820(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_63(88, bParam2);
		return 0f;
	}
	func_821(iParam0, func_147(), 2);
	func_820(iParam0, iVar1 + 1, 2);
	return fParam1;
}

float func_510(float fParam0, float fParam1, float fParam2)
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

void func_511(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;

	if (func_23() != -1)
	{
		return;
	}
	if (!func_455(15))
	{
		return;
	}
	Global_40.f_11095[iParam0] = fParam1;
	iVar0 = func_822(BUILTIN::CEIL(&(Global_40.f_11095[iParam0])));
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(Global_35, func_823(iParam0), iVar0);
	func_825(func_824(iParam0), (100f * (BUILTIN::TO_FLOAT(iVar0) / 100f)), 0);
	if (((fParam1 <= func_826(15) && iParam0 == 1) && PED::IS_PED_ON_FOOT(Global_35)) && !PED::IS_PED_SWIMMING(Global_35))
	{
		func_63(84, 1);
	}
	if (fParam1 <= -99.999f)
	{
		func_63(func_827(iParam0), 1);
	}
	sVar1 = func_828(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		PED::_0x437C08DB4FEBE2BD(Global_35, sVar1, BUILTIN::TO_FLOAT(iVar0), -1);
	}
}

float func_512(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_513()
{
	if (func_23() != -1)
	{
		return 0;
	}
	if (Global_1347477->f_200)
	{
		return 0;
	}
	if (Global_1347477->f_195 == -15)
	{
		return 1;
	}
	return func_829(Global_1347477->f_195, 0);
}

int func_514(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

void func_515(float fParam0, float fParam1)
{
	if (!func_264())
	{
		*fParam0 = -100f;
		*fParam1 = 100f;
		return;
	}
	*fParam0 = Global_40.f_11095.f_40;
	*fParam1 = Global_40.f_11095.f_41;
}

void func_516(int iParam0, float fParam1)
{
	int iVar0;
	bool bVar1;
	char* sVar2;

	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0f;
		sVar2 = func_574(fParam1 < 0f, "rpg_cold", "rpg_hot");
		func_830(1, bVar1, 1, sVar2);
		func_831(!bVar1, fParam1 < 0f, bVar1);
		iVar0 = func_822(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
		func_483();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_822(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_822(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

int func_517(int iParam0)
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

char* func_518(int iParam0)
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

void func_519(int iParam0)
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
	iVar1 = func_832(2);
	func_833(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_520(int iParam0)
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
	iVar1 = func_834(2);
	func_835(BUILTIN::TO_FLOAT((iParam0 * iVar1)));
}

void func_521(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PLAYER::_0x57D9991DC1334151(iVar0);
	}
	iVar1 = func_836(2);
	func_837(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_522(int iParam0, bool bParam1, bool bParam2)
{
	func_815(iParam0, 100f, bParam1, bParam2, 1, 2);
}

struct<2> func_523(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

int func_524(int iParam0)
{
	switch (*iParam0)
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
			return 39;
		case 746300881: /* GXTEntry: "Wild Feverfew" */
			return 40;
		case -435006002: /* GXTEntry: "Wild Mint" */
			return 41;
		case -624139784: /* GXTEntry: "Wintergreen Berry" */
			return 42;
		case -529638012: /* GXTEntry: "Yarrow" */
			return 43;
		case -651064726: /* GXTEntry: "Acuna\'s Star Orchid" */
			return 1;
		case -404270094: /* GXTEntry: "Cigar Orchid" */
			return 9;
		case -1521783510: /* GXTEntry: "Clamshell Orchid" */
			return 10;
		case 1714875242: /* GXTEntry: "Dragon\'s Mouth Orchid" */
			return 14;
		case 2093126853: /* GXTEntry: "Ghost Orchid" */
			return 17;
		case 728781265: /* GXTEntry: "Lady of the Night Orchid" */
			return 21;
		case 1794857344: /* GXTEntry: "Lady Slipper Orchid" */
			return 22;
		case 1952409553: /* GXTEntry: "Moccasin Flower Orchid" */
			return 24;
		case -150591160: /* GXTEntry: "Night Scented Orchid" */
			return 25;
		case 1019229063: /* GXTEntry: "Queen\'s Orchid" */
			return 30;
		case -323969289: /* GXTEntry: "Rat Tail Orchid" */
			return 32;
		case 927763737: /* GXTEntry: "Sparrow\'s Egg Orchid" */
			return 35;
		case 1504361882: /* GXTEntry: "Spider Orchid" */
			return 36;
	}
	return 0;
}

void func_525(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_260(-372368982, func_838(iParam0)) };
	STATS::_0x6A0184E904CDF25E(&Var0, iParam1);
	func_251(func_250(106002964), iParam1);
}

bool func_526(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	iVar0 = 12;
	while (iVar0 <= 15)
	{
		func_144(uParam0->f_162[iVar0], 1, 1);
		iVar0++;
	}
	if (!func_70(&(uParam0->f_162[3])))
	{
		uParam0->f_162[3] = func_81("CAMP_REC_BACK", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		func_82(&(uParam0->f_162[3]), 1323335645, 0, 1);
	}
	if (func_56(524288))
	{
		uParam0->f_162[12] = func_81("CMP_SLP_MRN", joaat("INPUT_CONTEXT_A"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	else if (uParam0->f_187 > 3 && uParam0->f_187 <= 9)
	{
		uParam0->f_162[13] = func_81("CMP_SLP_NOON", joaat("INPUT_CONTEXT_Y"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		uParam0->f_162[14] = func_81("CMP_SLP_EVE", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		uParam0->f_162[15] = func_81("CMP_SLP_MDN", joaat("INPUT_CONTEXT_A"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	else if (uParam0->f_187 > 9 && uParam0->f_187 <= 15)
	{
		uParam0->f_162[14] = func_81("CMP_SLP_EVE", joaat("INPUT_CONTEXT_Y"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		uParam0->f_162[15] = func_81("CMP_SLP_MDN", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		uParam0->f_162[12] = func_81("CMP_SLP_MRN", joaat("INPUT_CONTEXT_A"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	else if (uParam0->f_187 > 15 && uParam0->f_187 <= 21)
	{
		uParam0->f_162[15] = func_81("CMP_SLP_MDN", joaat("INPUT_CONTEXT_Y"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		uParam0->f_162[12] = func_81("CMP_SLP_MRN", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		uParam0->f_162[13] = func_81("CMP_SLP_NOON", joaat("INPUT_CONTEXT_A"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	else if (uParam0->f_187 > 21 || uParam0->f_187 <= 3)
	{
		uParam0->f_162[12] = func_81("CMP_SLP_MRN", joaat("INPUT_CONTEXT_Y"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		uParam0->f_162[13] = func_81("CMP_SLP_NOON", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		uParam0->f_162[14] = func_81("CMP_SLP_EVE", joaat("INPUT_CONTEXT_A"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	bVar1 = true;
	if (func_56(524288))
	{
		bVar1 = true;
	}
	else
	{
		if (Global_1392040->f_7 == -15)
		{
			Global_1392040->f_7 = func_147();
		}
		iVar2 = Global_1392040->f_7;
		func_246(&iVar2, 0, 0, 3, 0, 0, 0, 0);
		if (!func_247(iVar2))
		{
			if (Global_1392040->f_8 > 1)
			{
				bVar1 = false;
			}
		}
		else
		{
			Global_1392040->f_8 = 0;
		}
	}
	if (func_70(&(uParam0->f_162[12])))
	{
		if (uParam0->f_187 < 6)
		{
			iVar3 = (6 - uParam0->f_187);
		}
		else
		{
			iVar3 = (24 - uParam0->f_187) + 6;
		}
		func_839(&(uParam0->f_162[12]), "CMP_SLP_MRN", iVar3, 1);
		func_82(&(uParam0->f_162[12]), 1323335645, 0, 1);
		func_84(&(uParam0->f_162[12]), bVar1, 1);
	}
	if (func_70(&(uParam0->f_162[13])))
	{
		if (uParam0->f_187 < 12)
		{
			iVar3 = (12 - uParam0->f_187);
		}
		else
		{
			iVar3 = (24 - uParam0->f_187) + 12;
		}
		func_839(&(uParam0->f_162[13]), "CMP_SLP_NOON", iVar3, 1);
		func_82(&(uParam0->f_162[13]), 1323335645, 0, 1);
		func_84(&(uParam0->f_162[13]), bVar1, 1);
	}
	if (func_70(&(uParam0->f_162[14])))
	{
		if (uParam0->f_187 < 18)
		{
			iVar3 = (18 - uParam0->f_187);
		}
		else
		{
			iVar3 = (24 - uParam0->f_187) + 18;
		}
		func_839(&(uParam0->f_162[14]), "CMP_SLP_EVE", iVar3, 1);
		func_82(&(uParam0->f_162[14]), 1323335645, 0, 1);
		func_84(&(uParam0->f_162[14]), bVar1, 1);
	}
	if (func_70(&(uParam0->f_162[15])))
	{
		iVar3 = (24 - uParam0->f_187);
		func_839(&(uParam0->f_162[15]), "CMP_SLP_MDN", iVar3, 1);
		func_82(&(uParam0->f_162[15]), 1323335645, 0, 1);
		func_84(&(uParam0->f_162[15]), bVar1, 1);
	}
	return bVar1;
}

char* func_527(int iParam0)
{
	if (func_56(524288))
	{
		return "0600_";
	}
	if (iParam0 == -1)
	{
		if (func_840(23, 2))
		{
			return "0000_";
		}
		else if (func_840(2, 5))
		{
			return "0300_";
		}
		else if (func_840(5, 8))
		{
			return "0600_";
		}
		else if (func_840(8, 11))
		{
			return "0900_";
		}
		else if (func_840(11, 14))
		{
			return "1200_";
		}
		else if (func_840(14, 17))
		{
			return "1500_";
		}
		else if (func_840(17, 20))
		{
			return "1800_";
		}
		else if (func_840(20, 23))
		{
			return "2100_";
		}
		else
		{
			return "1200_";
		}
	}
	switch (iParam0)
	{
		case 0:
			if (func_841())
			{
				return "2100_";
			}
			else
			{
				return "0000_";
			}
			break;
		case 6:
			if (func_841())
			{
				return "0300_";
			}
			else
			{
				return "0600_";
			}
			break;
		case 12:
			if (func_841())
			{
				return "0900_";
			}
			else
			{
				return "1200_";
			}
			break;
		case 18:
			if (func_841())
			{
				return "1500_";
			}
			else
			{
				return "1800_";
			}
			break;
	}
	return "1200_";
}

char* func_528()
{
	int iVar0;

	iVar0 = func_842();
	if (func_56(524288))
	{
		return "01Clear";
	}
	switch (iVar0)
	{
		case joaat("sandstorm"):
		case joaat("overcastdark"):
		case joaat("blizzard"):
		case joaat("whiteout"):
		case joaat("hurricane"):
		case joaat("rain"):
		case joaat("hail"):
		case joaat("thunderstorm"):
		case joaat("groundblizzard"):
			return "04Storm";
		case joaat("drizzle"):
		case joaat("thunder"):
		case joaat("overcast"):
		case joaat("fog"):
		case joaat("shower"):
		case joaat("snow"):
		case joaat("sleet"):
		case joaat("snowlight"):
			return "03Clouds";
		case joaat("highpressure"):
		case joaat("clouds"):
		case joaat("misty"):
		case joaat("sunny"):
		case joaat("snowclearing"):
			return "01Clear";
		default:
			break;
	}
	return "01Clear";
	return "01Clear";
}

struct<8> func_529(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	char cVar10[64];
	struct<8> Var18;

	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0);
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (iVar0 >= iParam3)
	{
		StringCopy(&cVar2, HUD::_0x806862E5D266CF38(sParam0, (iVar0 - iParam3), iVar0), 64);
	}
	else
	{
		StringCopy(&cVar2, sParam0, 64);
	}
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar2);
	if (iVar1 >= iParam3)
	{
		StringCopy(&cVar10, HUD::_0x806862E5D266CF38(sParam1, (iVar1 - iParam3), iVar1), 64);
	}
	else
	{
		StringCopy(&cVar10, sParam1, 64);
	}
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar10);
	if (bParam2)
	{
		if ((iVar0 + iVar1) >= iParam3)
		{
			StringCopy(&cVar10, HUD::_0x806862E5D266CF38(&cVar10, iVar0, iVar1), 64);
		}
	}
	else if ((iVar0 + iVar1) >= iParam3)
	{
		StringCopy(&cVar2, HUD::_0x806862E5D266CF38(&cVar2, iVar1, iVar0), 64);
	}
	Var18 = { cVar2 };
	StringConCat(&Var18, &cVar10, 64);
	return Var18;
}

var func_530(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_531(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_843(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_532(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_533(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_534(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_535(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_536(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_537(int iParam0, int iParam1)
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

void func_538(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_844(iParam0, iParam6);
	func_845(iParam0, iParam5);
	func_846(iParam0, iParam4);
	func_847(iParam0, iParam3);
	func_848(iParam0, iParam2);
	func_849(iParam0, iParam1);
}

void func_539(var uParam0)
{
	StringCopy(&(uParam0->f_17), "CAMP", 8);
}

void func_540(var uParam0)
{
	if (HUD::_DOES_TEXT_DATABASE_EXIST(&(uParam0->f_17)))
	{
		HUD::_TEXT_DATABASE_REQUEST(&(uParam0->f_17));
	}
	STREAMING::REQUEST_ANIM_DICT("MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A");
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
	func_850(uParam0);
	TXD::REQUEST_STREAMED_TEXTURE_DICT("satchel_textures", false);
	if (uParam0->f_31)
	{
		STREAMING::REQUEST_MODEL(-194504515, false);
		STREAMING::REQUEST_MODEL(-2049449981, false);
		STREAMING::REQUEST_MODEL(-1172163183, false);
		STREAMING::REQUEST_MODEL(222541312, false);
		STREAMING::REQUEST_MODEL(1289914954, false);
	}
}

int func_541(var uParam0)
{
	if (func_851(&(uParam0->f_17)))
	{
		if (!HUD::_TEXT_DATABASE_HAS_LOADED(&(uParam0->f_17)))
		{
			return 0;
		}
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A"))
	{
		return 0;
	}
	if (!func_852(uParam0, &(uParam0->f_63)))
	{
		return 0;
	}
	if (!func_852(uParam0, &(uParam0->f_65)))
	{
		return 0;
	}
	if (!func_852(uParam0, &(uParam0->f_66)))
	{
		return 0;
	}
	if (!func_852(uParam0, &(uParam0->f_67)))
	{
		return 0;
	}
	if (!func_852(uParam0, &(uParam0->f_68)))
	{
		return 0;
	}
	if (!func_852(uParam0, &(uParam0->f_69)))
	{
		return 0;
	}
	if (!TXD::HAS_STREAMED_TEXTURE_DICT_LOADED("satchel_textures"))
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
	if (uParam0->f_31)
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

int func_542()
{
	int iVar0;
	int iVar1;

	if (!func_718(&iVar0))
	{
		return 0;
	}
	PED::_0x2208438012482A1A(Global_35, false, false);
	PED::_0xC494C76A34266E82(Global_35, 13);
	iVar1 = func_591(iVar0);
	if (iVar1 == -358215195)
	{
		return 0;
	}
	func_853(&(Global_1946804->f_57[func_413(iVar1, 1) /*11*/]), 8);
	func_207(26, 0, 0, 0, 0);
	return 1;
}

int func_543(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	TELEMETRY::_0x78C2E029DB205A3A(iParam0, iParam1);
	return func_854(iParam0, iParam1, bParam2, bParam3, iParam4);
}

int func_544(int iParam0)
{
	int iVar0;

	iVar0 = func_855(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return 1289914954;
}

void func_545(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (bParam2)
	{
		uParam0->f_57.f_20++;
	}
	if (uParam0->f_57.f_37 == -1)
	{
		iVar0 = func_124(uParam0->f_57.f_77, 0, 0);
		iVar1 = func_856(uParam0->f_57.f_77, 0);
		iVar2 = func_857(uParam0->f_57.f_77, uParam0->f_57.f_78, func_551(), 0);
		if (iVar1 == -1)
		{
			iVar1 = iVar2;
		}
		else
		{
			iVar1 = (iVar1 - iVar0);
		}
		uParam0->f_57.f_37 = func_858(iVar1, iVar2);
	}
	if (func_317(uParam0->f_57.f_77))
	{
		if (bParam3)
		{
			func_157(&(uParam0->f_162[iParam1]), "CAMP_REC_COOK_AGN", 1);
		}
		else
		{
			func_157(&(uParam0->f_162[iParam1]), "CAMP_REC_COOK", 1);
		}
	}
	else if (bParam3)
	{
		func_157(&(uParam0->f_162[iParam1]), "CAMP_REC_MAKE_AGN", 1);
	}
	else if (func_372(uParam0->f_57.f_77, -1636519629) == -701492487)
	{
		func_157(&(uParam0->f_162[iParam1]), "CAMP_REC_BREW", 1);
	}
	else
	{
		func_157(&(uParam0->f_162[iParam1]), "CAMP_REC_MAKE", 1);
	}
}

void func_546()
{
	if (func_672())
	{
		func_859(1);
	}
}

int func_547(var uParam0)
{
	return uParam0->f_8;
}

int func_548(int iParam0)
{
	int iVar0;

	iVar0 = func_860(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return 1;
	}
	return 0;
}

void func_549(var uParam0, int iParam1)
{
	var uVar0[1];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;

	uVar0[0] = uParam0[1];
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630->f_12)
	{
		func_44(uParam0, 0);
	}
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Global_35, false);
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_35, 0, 1);
	if ((func_23() != -1 && func_164()) || func_167())
	{
		if (func_165(uParam0[0], 0))
		{
			func_130(uParam0);
			func_137(uParam0);
		}
		return;
	}
	if (uParam0->f_58)
	{
		HUD::_0xC9CAEAEEC1256E54(-469828803);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_Y"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	switch (func_547(uParam0))
	{
		case 2:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (func_861(uParam0))
			{
				func_539(uParam0);
				func_540(uParam0);
				func_862(uParam0);
			}
			if (func_541(uParam0))
			{
				func_45(uParam0, 3);
			}
			break;
		case 3:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (func_23() == 0 && CAM::_0x251241CAEC707106())
			{
				func_130(uParam0);
				return;
			}
			if (func_861(uParam0))
			{
				func_130(uParam0);
				func_862(uParam0);
				if (func_132())
				{
					func_133(0);
				}
			}
			if (((uParam0->f_34 || func_229(uParam0[0], 1)) || func_56(8192)) || uParam0->f_35)
			{
				func_863(uParam0);
			}
			break;
		case 4:
			if (!uParam0->f_58)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_864(uParam0))
			{
				uParam0->f_62 = 1;
				if (func_56(4096))
				{
					uParam0->f_52 = 0;
				}
				else if (func_56(8192))
				{
					uParam0->f_52 = 4;
				}
				func_45(uParam0, 5);
			}
			break;
		case 5:
			if (!uParam0->f_58)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_865(uParam0))
			{
				func_45(uParam0, 6);
			}
			break;
		case 6:
			if (!uParam0->f_58)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_866(uParam0))
			{
				func_45(uParam0, 7);
			}
			break;
		case 7:
			if (!uParam0->f_58)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_861(uParam0))
			{
				func_867(uParam0);
				func_862(uParam0);
				return;
			}
			if (func_868(uParam0, 0))
			{
				if (func_869(uParam0, 0))
				{
					func_45(uParam0, 8);
				}
				else if (uParam0->f_31)
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
			if (!uParam0->f_58)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (!uParam0->f_62)
			{
				func_45(uParam0, 4);
				return;
			}
			if (func_870(uParam0))
			{
				func_869(uParam0, 1);
				func_45(uParam0, 8);
			}
			break;
		case 8:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (UIAPPS::_IS_APP_ACTIVE(-1624772174))
			{
				if (UISTATEMACHINE::_0xF7C180F57F85D0B8(-1624772174))
				{
					Global_1911914->f_1580 = 0;
					func_45(uParam0, 10);
				}
			}
			break;
		case 9:
			if (!uParam0->f_58)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_861(uParam0))
			{
				func_867(uParam0);
				func_862(uParam0);
				return;
			}
			if (func_868(uParam0, 1))
			{
				func_45(uParam0, 10);
			}
			break;
		case 10:
			func_871(0);
			if (func_23() == 0 && CAM::_0x43AB9D5A7D415478())
			{
				func_130(uParam0);
				return;
			}
			if (func_861(uParam0))
			{
				func_130(uParam0);
				func_872(uParam0, 1);
				(*uParam0)[2] = func_81("CAMP_REC_QUIT", joaat("INPUT_GAME_MENU_CANCEL"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
				if (func_66(32))
				{
					func_84(uParam0[2], 0, 1);
				}
				else
				{
					func_84(uParam0[2], 1, 1);
				}
				(*uParam0)[1] = func_81("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
				if (func_121(uParam0->f_75, 0))
				{
					uParam0->f_77 = uParam0->f_75;
					uParam0->f_78 = uParam0->f_76;
					func_873(uParam0, &(uParam0->f_74));
				}
				else
				{
					uParam0->f_77 = 0;
				}
				if (func_317(uParam0->f_75))
				{
					func_157(uParam0[1], "CAMP_REC_COOK", 1);
				}
				else if (func_372(uParam0->f_75, -1636519629) == -701492487)
				{
					func_157(uParam0[1], "CAMP_REC_BREW", 1);
				}
				else
				{
					func_157(uParam0[1], "CAMP_REC_MAKE", 1);
				}
				(*uParam0)[3] = func_81(func_874(uParam0), joaat("INPUT_GAME_MENU_EXTRA_OPTION"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
				(*uParam0)[5] = func_875("RECIPE", joaat("INPUT_GAME_MENU_LEFT"), joaat("INPUT_GAME_MENU_RIGHT"), 0);
				func_876(uParam0[5], joaat("INPUT_GAME_MENU_LEFT"));
				func_876(uParam0[5], joaat("INPUT_GAME_MENU_RIGHT"));
				if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_73))
				{
					iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_73, "iNumCostVariants");
				}
				if (iVar2 > 1 && func_121(uParam0->f_77, 0))
				{
					func_84(uParam0[5], 1, 1);
				}
				else
				{
					func_84(uParam0[5], 0, 1);
				}
				(*uParam0)[6] = func_81("INFO", joaat("INPUT_GAME_MENU_OPTION"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
				if (!uParam0->f_82)
				{
					func_157(uParam0[6], "INFO", 1);
				}
				else
				{
					func_157(uParam0[6], "INGREDIENTS", 1);
				}
				if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_40) == 0)
				{
					func_877(uParam0);
					func_84(uParam0[6], 0, 1);
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_39, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_NO_REC_TIP"));
				}
				func_878(uParam0, uParam0->f_77, uParam0->f_78);
				func_862(uParam0);
			}
			if (Global_1911914->f_1580)
			{
				Global_1911914->f_1580 = 0;
				ATTRIBUTE::_0xD962F8579D702DB5();
				func_877(uParam0);
				uParam0->f_77 = 0;
				uParam0->f_78 = 0;
				func_878(uParam0, 0, 0);
				func_84(uParam0[5], 0, 1);
				func_45(uParam0, 9);
			}
			else if (func_71(uParam0[2], 1))
			{
				if (uParam0->f_34)
				{
					func_45(uParam0, 16);
				}
				else
				{
					func_131(uParam0, 0);
					func_879("Exit", "SSCRFT_Sounds");
					if (uParam0->f_35)
					{
						uParam0->f_35 = 0;
						func_45(uParam0, 1);
					}
					else
					{
						func_45(uParam0, 3);
					}
				}
			}
			else if (func_229(uParam0[1], 1))
			{
				func_880(uParam0);
			}
			else if (func_229(uParam0[3], 1))
			{
				ATTRIBUTE::_0xD962F8579D702DB5();
				uParam0->f_57 = !uParam0->f_57;
				func_877(uParam0);
				uParam0->f_77 = 0;
				uParam0->f_78 = 0;
				func_878(uParam0, 0, 0);
				func_84(uParam0[5], 0, 1);
				func_45(uParam0, 9);
			}
			else if (func_881(uParam0[5], 0, 1))
			{
				if (uParam0->f_79)
				{
					func_879("Nav_Left", "SSCRFT_Sounds");
					func_882(uParam0, 0);
				}
			}
			else if (func_881(uParam0[5], 1, 1))
			{
				if (uParam0->f_79)
				{
					func_879("Nav_Right", "SSCRFT_Sounds");
					func_882(uParam0, 1);
				}
			}
			else if (func_229(uParam0[6], 1))
			{
				func_883(uParam0, 1);
			}
			else
			{
				iVar3 = -813979060;
				while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar3))
				{
					if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iVar3, &iVar4))
					{
						if (iVar4 == 703281244 || iVar4 == -722926211)
						{
							func_884(uParam0);
						}
						else if (iVar4 == -1740156697)
						{
							func_885(uParam0, &iVar4);
						}
						else if (iVar4 == -1203660660)
						{
							if (func_165(uParam0[1], 0))
							{
								func_880(uParam0);
							}
						}
						UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar3);
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
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::_CREATE_VAR_STRING(0, uParam0->f_77), 1, 0, 0, 0);
			func_871(0);
			iVar8 = PED::_0xC22AA08A8ADB87D4(Global_35);
			iVar9 = func_372(uParam0->f_77, -1636519629);
			if (iVar8 == -1433449364)
			{
				if (!PED::_0x68821369A2CEADD5(Global_35, 1335077954))
				{
					PED::_0xD65FDC686A031C83(Global_35, 1335077954, 6f);
					PED::_0x6D07B371E9439019(Global_35);
				}
				return;
			}
			if (iVar9 != -715814988)
			{
				if (iVar8 == -518407211)
				{
					if (!PED::_0x68821369A2CEADD5(Global_35, 653141085))
					{
						PED::_0xD65FDC686A031C83(Global_35, 653141085, 6f);
						PED::_0x6D07B371E9439019(Global_35);
					}
					return;
				}
				else
				{
					WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 0);
				}
				if (((((((((iVar9 == 414472632 && !ANIMSCENE::_0x477122B8D05E7968(uParam0->f_63, 1, 0)) || (iVar9 == -1136843638 && !ANIMSCENE::_0x477122B8D05E7968(uParam0->f_66, 1, 0))) || (uParam0->f_88 != 0 && !STREAMING::HAS_MODEL_LOADED(uParam0->f_88))) || (iVar9 == -732326901 && !ANIMSCENE::_0x477122B8D05E7968(uParam0->f_68, 1, 0))) || (iVar9 == 786205940 && !ANIMSCENE::_0x477122B8D05E7968(uParam0->f_67, 1, 0))) || (iVar9 == -1141771998 && !ANIMSCENE::_0x477122B8D05E7968(uParam0->f_69, 1, 0))) || (iVar9 == 364689687 && !ANIMSCENE::_0x477122B8D05E7968(uParam0->f_70, 1, 0))) || (iVar9 == -842117252 && !ANIMSCENE::_0x477122B8D05E7968(uParam0->f_71, 1, 0))) || (iVar9 == -1610298873 && !ANIMSCENE::_0x477122B8D05E7968(uParam0->f_72, 1, 0)))
				{
					return;
				}
				else if (uParam0->f_64)
				{
					func_886(uParam0);
					uParam0->f_64 = 0;
				}
			}
			else
			{
				if (!ANIMSCENE::_0x477122B8D05E7968(uParam0->f_65, 1, 0) || (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0)))
				{
					return;
				}
				else if (uParam0->f_64)
				{
					func_886(uParam0);
					uParam0->f_64 = 0;
				}
				if (iVar8 != -518407211)
				{
					if (uParam0->f_31)
					{
						if (!PED::_0x68821369A2CEADD5(Global_35, 796456488))
						{
							PED::_0xD65FDC686A031C83(Global_35, 796456488, 2f);
							PED::_0x6D07B371E9439019(Global_35);
						}
						return;
					}
				}
			}
			if (func_861(uParam0))
			{
				func_862(uParam0);
				func_887(uParam0, 0, &uVar0);
				func_886(uParam0);
				if (func_70(uParam0[1]))
				{
					func_144((*uParam0)[1], 1, 1);
				}
				if (func_888(iVar9))
				{
					uParam0->f_53 = 250;
					(*uParam0)[1] = func_81("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, uParam0->f_53, uParam0->f_53 + 1, 1, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
					func_878(uParam0, uParam0->f_77, uParam0->f_78);
					func_82(uParam0[1], -1067771379, 0, 1);
					func_83(uParam0[1], 10, 1, 1);
					func_83(uParam0[1], 11, 1, 1);
					func_84(uParam0[1], 0, 1);
				}
				else
				{
					(*uParam0)[1] = func_81("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, 250, 251, 1, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
					func_82(uParam0[1], -1067771379, 0, 1);
					func_331(uParam0[1], 1, 1);
					func_83(uParam0[1], 10, 1, 1);
					func_83(uParam0[1], 11, 1, 1);
					func_84(uParam0[1], 0, 1);
				}
				return;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -563455375))
			{
				PAD::_0x5F217BC1190503D8("CRFT_BLIP_LIGHT", 0.2f);
			}
			if (func_888(iVar9))
			{
				if (!uParam0->f_36)
				{
					if (func_165(uParam0[1], 0))
					{
						if (func_555(uParam0[1], 1) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_GAME_MENU_ACCEPT")))
						{
							uParam0->f_36 = 1;
							func_84(uParam0[1], 0, 1);
							func_84(uParam0[4], 0, 1);
						}
					}
				}
				if ((((((iVar9 == -1136843638 || iVar9 == -732326901) || iVar9 == 786205940) || iVar9 == -1141771998) || iVar9 == 364689687) || iVar9 == -842117252) || iVar9 == -1610298873)
				{
					if (uParam0->f_88 != 0)
					{
						if ((uParam0->f_88 == 1186037675 && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1011038463)) || (uParam0->f_88 != 1186037675 && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 2024314131)))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
							{
								OBJECT::DELETE_OBJECT(&(uParam0->f_86));
							}
							if (func_190(uParam0->f_77, -1588156645) && iVar9 != -842117252)
							{
								uParam0->f_86 = WEAPON::_CREATE_WEAPON_OBJECT(func_252(uParam0->f_77, 0), 1, Global_36, 1, 1065353216);
								ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_86, false, false);
								if (iVar9 == -1610298873)
								{
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(func_889(uParam0, iVar9), "DYNAMITE", uParam0->f_86, 0);
								}
							}
							else
							{
								uParam0->f_86 = OBJECT::CREATE_OBJECT(uParam0->f_88, Global_36, true, true, false, false, false);
								ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_86, false, false);
							}
							if (iVar9 == 786205940)
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_86, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0f, 0.5f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0, 0);
							}
							else if (iVar9 == -1141771998 || iVar9 == -1610298873)
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_86, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0, 0);
							}
							else if (iVar9 == -842117252)
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_86, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0f, 0f, 0.1f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0, 0);
							}
							else
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_86, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 7966), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0, 0);
							}
						}
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 966057053))
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
						{
							OBJECT::DELETE_OBJECT(&(uParam0->f_86));
						}
						if (iVar9 == -732326901 || iVar9 == 364689687)
						{
							uParam0->f_86 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("weapon_thrown_throwing_knives"), 1, Global_36, 1, 1065353216);
						}
						else if (iVar9 == -1141771998)
						{
							uParam0->f_86 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("weapon_thrown_tomahawk"), 1, Global_36, 1, 1065353216);
						}
						else if (iVar9 == -842117252)
						{
							uParam0->f_86 = OBJECT::CREATE_OBJECT(-370340297, Global_36, true, true, false, false, true);
						}
						else if (iVar9 == -1610298873)
						{
							uParam0->f_86 = OBJECT::CREATE_OBJECT(1974613782, Global_36, true, true, false, false, true);
							if (iVar9 == -1610298873)
							{
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(func_889(uParam0, iVar9), "DYNAMITE", uParam0->f_86, 0);
							}
						}
						else
						{
							uParam0->f_86 = OBJECT::CREATE_OBJECT(-655768729, Global_36, true, true, false, false, false);
						}
						ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_86, false, false);
						if (iVar9 == 786205940)
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_86, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0f, 0.5f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0, 0);
						}
						else if ((iVar9 == -1141771998 || iVar9 == -1610298873) || iVar9 == -842117252)
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_86, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0, 0);
						}
						else
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_86, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 7966), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0, 0);
						}
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1394836706))
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
						{
							OBJECT::DELETE_OBJECT(&(uParam0->f_86));
						}
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1471149551))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_87))
						{
							ENTITY::SET_ENTITY_VISIBLE(uParam0->f_87, true);
						}
					}
				}
				else if (iVar9 == 414472632 || iVar9 == -715814988)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 966057053))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_85, true);
					}
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -61921192))
				{
					if (!func_98(0))
					{
						if (uParam0->f_21 == -1)
						{
							uParam0->f_21 = func_135(uParam0->f_77, uParam0->f_78);
							if (uParam0->f_21 == -1)
							{
								func_890(uParam0, iVar9, 0);
							}
							return;
						}
						else if (func_548(uParam0->f_21))
						{
							return;
						}
						uParam0->f_21 = -1;
					}
					else
					{
						func_543(uParam0->f_77, uParam0->f_78, 1, func_551(), 0);
						func_99(uParam0->f_77, 1, 0, 1, 0);
						if (uParam0->f_31)
						{
							func_546();
						}
					}
					if (iVar9 == -842117252)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
						{
							OBJECT::DELETE_OBJECT(&(uParam0->f_86));
						}
					}
					uParam0->f_20++;
					uParam0->f_38++;
					if ((!func_295(uParam0->f_77, uParam0->f_78, 0, func_551(), 0, 0) || func_560(uParam0->f_77, 1, 0)) || uParam0->f_20 >= uParam0->f_37)
					{
						func_890(uParam0, iVar9, 0);
						return;
					}
				}
				if (!uParam0->f_36)
				{
					if (!(func_165(uParam0[1], 0) && PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_GAME_MENU_ACCEPT"))))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 596390595))
						{
							func_890(uParam0, iVar9, 1);
						}
					}
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1290366555) && uParam0->f_20 < (uParam0->f_37 - 1))
				{
					func_84(uParam0[1], 1, 1);
					func_84(uParam0[4], 1, 1);
					uParam0->f_36 = 0;
				}
				if (ANIMSCENE::_0xB89FCFF19DAFFF28(func_889(uParam0, iVar9), "player"))
				{
					func_890(uParam0, iVar9, 0);
				}
			}
			else if (func_29(&(uParam0->f_89), (IntToFloat(uParam0->f_53) / 1000f)))
			{
				if (!func_98(0))
				{
					if (uParam0->f_21 == -1)
					{
						uParam0->f_21 = func_135(uParam0->f_77, uParam0->f_78);
						if (uParam0->f_21 == -1)
						{
							func_890(uParam0, iVar9, 0);
						}
						return;
					}
					else if (func_548(uParam0->f_21))
					{
						return;
					}
					uParam0->f_21 = -1;
				}
				else
				{
					func_543(uParam0->f_77, uParam0->f_78, 1, func_551(), 0);
					func_99(uParam0->f_77, 1, 1, 1, 0);
					if (uParam0->f_31)
					{
						func_546();
					}
				}
				uParam0->f_37 = -1;
				uParam0->f_38 = 0;
				func_55(131072);
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_86));
				}
				uParam0->f_55 = 0;
				bVar10 = true;
				if (!func_295(uParam0->f_77, uParam0->f_78, 0, func_551(), 0, 0) || func_560(uParam0->f_77, 1, 0))
				{
					bVar10 = false;
				}
				func_890(uParam0, iVar9, bVar10);
			}
			break;
		case 0:
			if (func_132())
			{
				func_133(0);
			}
			if (func_861(uParam0))
			{
				func_130(uParam0);
				func_862(uParam0);
			}
			break;
		case 13:
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::_CREATE_VAR_STRING(0, uParam0->f_77), 1, 0, 0, 0);
			func_871(0);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_87))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -2015667492))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_87));
				}
			}
			if (!func_66(128))
			{
				if (!func_165(uParam0[2], 0))
				{
					func_84(uParam0[2], 1, 1);
					func_331(uParam0[2], 0, 1);
				}
				if (!func_165(uParam0[4], 0))
				{
					func_84(uParam0[4], 1, 1);
					func_331(uParam0[4], 1, 1);
				}
			}
			if (func_71(uParam0[2], 1))
			{
				func_130(uParam0);
				func_337(&(uParam0->f_89));
				func_45(uParam0, 14);
				return;
			}
			else if (func_152(uParam0[4], 1))
			{
				func_130(uParam0);
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_85))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_85));
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_86));
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_87))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_87));
				}
				iVar11 = PED::_0x569F1E1237508DEB(Global_35);
				if (iVar11 != -518407211)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
				}
				iVar9 = func_372(uParam0->f_77, -1636519629);
				iVar12 = func_889(uParam0, iVar9);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iVar12, "player", Global_35);
				func_131(uParam0, 0);
				func_879("Exit", "SSCRFT_Sounds");
				if (uParam0->f_31)
				{
					func_45(uParam0, 1);
				}
				else
				{
					func_45(uParam0, 0);
				}
				return;
			}
			else if (func_229(uParam0[1], 1))
			{
				func_84(uParam0[4], 0, 1);
				func_84(uParam0[2], 0, 1);
				func_84(uParam0[1], 0, 1);
				iVar9 = func_372(uParam0->f_77, -1636519629);
				iVar13 = func_889(uParam0, iVar9);
				if (iVar13 != 0)
				{
					ANIMSCENE::RESET_ANIM_SCENE(iVar13, "pl_craft");
					ANIMSCENE::LOAD_ANIM_SCENE(iVar13);
				}
				func_337(&(uParam0->f_89));
				uParam0->f_36 = 0;
				func_45(uParam0, 12);
				return;
			}
			if (func_338(uParam0[4], 1))
			{
				if (!func_125(&(uParam0->f_89)))
				{
					func_31(&(uParam0->f_89));
				}
				else if (func_29(&(uParam0->f_89), 0.1f))
				{
					func_157(uParam0[4], "CAMP_REC_QUIT", 1);
				}
			}
			else
			{
				if (func_125(&(uParam0->f_89)))
				{
					func_337(&(uParam0->f_89));
				}
				func_157(uParam0[4], "CAMP_REC_BACK", 1);
			}
			break;
		case 14:
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::_CREATE_VAR_STRING(0, uParam0->f_77), 1, 0, 0, 0);
			func_871(0);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_87))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -2015667492))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_87));
				}
			}
			iVar9 = func_372(uParam0->f_77, -1636519629);
			iVar14 = func_889(uParam0, iVar9);
			if ((iVar14 == 0 || (!ANIMSCENE::_0x25557E324489393C(iVar14) || ANIMSCENE::_0xF94692EB9DC15D74(iVar14, 0))) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1208591336))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_85))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_85));
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_86));
				}
				iVar15 = PED::_0x569F1E1237508DEB(Global_35);
				if (iVar15 != -518407211)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
				}
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iVar14, "player", Global_35);
				func_45(uParam0, 15);
			}
			break;
		case 1:
			if (func_132())
			{
				func_133(0);
			}
			if (func_861(uParam0))
			{
				if (func_70(uParam0[0]))
				{
					func_84(uParam0[0], 0, 1);
				}
				func_862(uParam0);
			}
			break;
		case 16:
			if (func_132())
			{
				func_133(0);
			}
			if (func_861(uParam0))
			{
				func_862(uParam0);
			}
			func_131(uParam0, 0);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_39);
			Global_1911914->f_1576 = 0;
			SCRIPTS::TERMINATE_THIS_THREAD();
			break;
	}
}

void func_550(var uParam0)
{
	bool bVar0;

	if (uParam0->f_57.f_78 == 278772510)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		func_251(func_250(1281481195), 1);
	}
	STATS::_0x378D3B1B11D9385B(uParam0->f_57.f_77);
	func_47(16384);
	func_55(65536);
	func_49(16);
	if (func_98(0))
	{
		func_543(uParam0->f_57.f_77, uParam0->f_57.f_78, 1, func_551(), 0);
	}
	func_144(uParam0->f_162[6], 1, 1);
	if (bVar0)
	{
		uParam0->f_162[6] = func_81("CRAFT_FASTER", joaat("INPUT_CONTEXT_A"), 2, 0, 0, 6, 7000, 10000, 35, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	else
	{
		uParam0->f_162[6] = func_81("CRAFT_FASTER", joaat("INPUT_CONTEXT_A"), 2, 0, 0, 6, 7000, 10000, 25, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	func_545(uParam0, 6, 0, 0);
	func_84(&(uParam0->f_162[6]), 0, 1);
	func_82(&(uParam0->f_162[6]), -1067771379, 0, 1);
	uParam0->f_196 = MISC::GET_GAME_TIMER();
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_160))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_160));
	}
	uParam0->f_160 = OBJECT::CREATE_OBJECT(func_544(uParam0->f_57.f_77), Global_36, false, false, false, false, true);
	if (PED::_0x3BBDD6143FF16F98(Global_35, uParam0->f_160, "p_meatChunks01x_PH_L_HAND", 0, 0, 1))
	{
	}
	ENTITY::SET_ENTITY_VISIBLE(uParam0->f_160, false);
	OBJECT::_0x2797C633DCDBBAC5(uParam0->f_160, 0f, 1);
	uParam0->f_208 = 3;
	func_130(&(uParam0->f_57));
	func_45(&(uParam0->f_57), 0);
	func_553();
	AUDIO::_0xAC84686C06184B0D("cooking", "Player_Campfire_Scenes");
	func_62(uParam0, 13);
}

int func_551()
{
	int iVar0;
	int iVar1;

	iVar0 = func_204(7);
	if (!PED::IS_PED_INJURED(iVar0))
	{
		if (func_52(Global_35, iVar0, 1) < 400f)
		{
			iVar1 = 1;
		}
	}
	return iVar1;
}

void func_552(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		uParam0->f_162[6] = func_81("CRAFT_FASTER", joaat("INPUT_CONTEXT_A"), 2, 0, 0, 0, 7000, 10000, 25, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		func_545(uParam0, 6, 0, 1);
		func_84(&(uParam0->f_162[6]), 0, 1);
		func_82(&(uParam0->f_162[6]), -1067771379, 0, 1);
	}
	uParam0->f_162[11] = func_81("CAMP_REC_BACK", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	uParam0->f_162[3] = func_81("CAMP_REC_BACK", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("MEDIUM_TIMED_EVENT"), 0);
	func_332(uParam0->f_162[3], "INPUT_PCRAFT_EXIT");
	func_331(&(uParam0->f_162[11]), 0, 1);
	func_82(&(uParam0->f_162[11]), -1067771379, 0, 1);
	func_82(&(uParam0->f_162[3]), -1067771379, 0, 1);
	func_83(&(uParam0->f_162[3]), 19, 1, 1);
	func_83(&(uParam0->f_162[3]), 20, 1, 1);
	func_83(&(uParam0->f_162[3]), 13, 1, 1);
	func_83(&(uParam0->f_162[11]), 13, 1, 1);
	func_84(&(uParam0->f_162[11]), 0, 1);
	func_84(&(uParam0->f_162[3]), 0, 1);
}

int func_553()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_400())
	{
		return 0;
	}
	if (!func_718(&iVar0))
	{
		return 0;
	}
	if (!func_401(iVar0))
	{
		return 0;
	}
	iVar1 = func_591(iVar0);
	if (iVar1 == -358215195)
	{
		return 0;
	}
	func_403(&iVar2, 1);
	return func_404(iVar0, iVar2);
}

void func_554(var uParam0, int iParam1)
{
	bool bVar0;

	if (func_338(&(uParam0->f_162[6]), 1))
	{
		bVar0 = true;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1812847403))
	{
		if (PAD::_0x1252C029FC8EBB4D())
		{
			AUDIO::_0x9821B68CD3E05F2B("distanceToFlame", 1f, "cook_meat_sizzle_loop", "Player_Campfire_Sounds");
			PAD::_0x709BA8C08C5C008D();
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1738621174))
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
			if (bVar0)
			{
				if (func_85(uParam0))
				{
					if (func_88(1868334347, 0.5f))
					{
						uParam0->f_196 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
		case -1425182948:
			if (bVar0)
			{
				if (func_85(uParam0))
				{
					if (func_88(1853097147, 0.5f))
					{
						uParam0->f_196 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
		case -1731736943:
			if (bVar0)
			{
				if (func_85(uParam0))
				{
					if (func_88(471626545, 0.5f))
					{
						uParam0->f_196 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
		case -283636008:
			if (!bVar0)
			{
				if (func_85(uParam0))
				{
					if (func_88(-1169480623, 0.5f))
					{
						uParam0->f_196 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
		case 2070743955:
			if (!bVar0)
			{
				if (func_85(uParam0))
				{
					if (func_88(857282645, 0.5f))
					{
						uParam0->f_196 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
		case -363005419:
			if (!bVar0)
			{
				if (func_85(uParam0))
				{
					if (func_88(-1250235606, 0.5f))
					{
						uParam0->f_196 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
		case 512684539:
			if (bVar0)
			{
				if (func_85(uParam0))
				{
					if (func_88(-348575163, 0.5f))
					{
						uParam0->f_196 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
		case -87088667:
			if (!bVar0)
			{
				if (func_85(uParam0))
				{
					if (func_88(-266297705, 0.5f))
					{
						uParam0->f_196 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
	}
}

bool func_555(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_70(iParam0))
	{
		return false;
	}
	iVar0 = func_163(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_556(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((func_70(&(uParam0->f_162[6])) && func_295(uParam0->f_57.f_77, uParam0->f_57.f_78, 0, func_551(), 0, 0)) && !func_560(uParam0->f_57.f_77, 1, 0))
		{
			func_84(&(uParam0->f_162[6]), 1, 1);
		}
	}
	if (!func_165(&(uParam0->f_162[11]), 0))
	{
		func_84(&(uParam0->f_162[11]), 1, 1);
		func_331(&(uParam0->f_162[11]), 0, 1);
	}
	if (!func_165(&(uParam0->f_162[3]), 0))
	{
		func_84(&(uParam0->f_162[3]), 1, 1);
	}
}

void func_557(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_144((*uParam0)[iVar0], 1, 1);
		iVar0++;
	}
}

int func_558(var uParam0)
{
	if (!func_85(uParam0) || (MISC::GET_GAME_TIMER() - uParam0->f_196) < 500)
	{
		return 0;
	}
	if (uParam0->f_154 == 0)
	{
		func_88(420089068, 6f);
		uParam0->f_196 = MISC::GET_GAME_TIMER();
		return 1;
	}
	else if (uParam0->f_154 == 1)
	{
		func_88(1352801403, 6f);
		uParam0->f_196 = MISC::GET_GAME_TIMER();
		return 1;
	}
	else if (uParam0->f_154 == 2)
	{
		if (!func_340(uParam0, 2))
		{
			return 0;
		}
		if (func_343(Global_35, uParam0[1], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL3@MALE_A@KNEEL3_TRANS_COFFEE2", "KNEEL3_TRANS_COFFEE2", "WORLD_PLAYER_DYNAMIC_KNEEL_POST_FIRE_CRAFT"))
		{
			uParam0->f_157 = 6;
			uParam0->f_154 = 1;
			uParam0->f_196 = MISC::GET_GAME_TIMER();
			return 1;
		}
	}
	else if (uParam0->f_154 == 3)
	{
		if (!func_340(uParam0, 3))
		{
			return 0;
		}
		if (func_343(Global_35, uParam0[0], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL4@MALE_A@KNEEL4_TRANS_COFFEE1", "KNEEL4_TRANS_COFFEE1", "WORLD_PLAYER_DYNAMIC_KNEEL_POST_FIRE_CRAFT"))
		{
			uParam0->f_157 = 6;
			uParam0->f_154 = 0;
			uParam0->f_196 = MISC::GET_GAME_TIMER();
			return 1;
		}
	}
	return 0;
}

void func_559(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_70(iParam0))
	{
		return;
	}
	iVar0 = func_163(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

bool func_560(int iParam0, int iParam1, bool bParam2)
{
	struct<5> Var0;

	Var0 = { func_296(iParam0, 0, 0) };
	return func_297(iParam0, &Var0, iParam1, 0, bParam2);
}

float func_561(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_70(iParam0))
	{
		return 0f;
	}
	iVar0 = func_163(iParam0);
	if (HUD::_UIPROMPT_HAS_MASH_MODE(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_GET_MASH_MODE_PROGRESS(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_0x81801291806DBC50(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_562(var uParam0)
{
	func_144(uParam0->f_162[6], 1, 1);
	uParam0->f_162[6] = func_81("CRAFT_FASTER", joaat("INPUT_CONTEXT_A"), 2, 0, 0, 6, 6000, 10000, 25, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	func_545(uParam0, 6, 0, 0);
	func_82(&(uParam0->f_162[6]), -1067771379, 0, 1);
	if (func_98(0))
	{
		func_543(uParam0->f_57.f_77, uParam0->f_57.f_78, 1, func_551(), 0);
	}
	func_84(&(uParam0->f_162[6]), 0, 1);
	func_553();
	uParam0->f_196 = MISC::GET_GAME_TIMER();
	AUDIO::_0xAC84686C06184B0D("crafting", "Player_Campfire_Scenes");
	func_62(uParam0, 1);
}

int func_563(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
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

int func_564(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
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

int func_565(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
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
		iVar1 = func_199(iParam1);
		iVar5 = func_891(iParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &uVar2))
			{
				if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iVar1, uVar2))
				{
					*uParam4 = { func_296(iParam1, 0, 0) };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { func_346(iParam1, *uParam4, uParam4->f_4, 0) };
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
			iVar34 = func_86(0);
			Var37 = { func_296(iParam1, 0, 0) };
			if (iParam6 != 0)
			{
				Var37.f_4 = iParam6;
			}
			Var42 = { func_346(iParam1, Var37, Var37.f_4, 0) };
			iVar35 = INVENTORY::_0xE843D21A8E2498AA(iVar34, &Var42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (INVENTORY::_0xCD9A485F2B383B44(iVar34, &Var42, iVar36, &Var6))
				{
					iVar1 = func_199(Var6.f_4);
					iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &uVar2))
						{
							if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iVar1, uVar2))
							{
								if (func_892(Var42, Var6.f_9, &Var20, 0))
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

struct<4> func_566()
{
	struct<4> Var0;

	Var0 = { func_583(0) };
	return func_346(856287005, Var0, -218846335, 0);
}

int func_567(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_121(iParam0, 0))
	{
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_297(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_98(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_86(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_568(int iParam0, int iParam1)
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

	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	if (!func_565(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return 0;
	}
	Var10 = { func_566() };
	Var14 = { func_346(iParam0, Var10, iVar9, 0) };
	if (func_893(Var14, iParam1))
	{
		if (func_894(iParam0))
		{
			if (func_895(325139909, &iVar18))
			{
				if (func_568(iVar18, 0))
				{
				}
			}
		}
		else if (func_569(iParam0))
		{
			if (func_895(325139909, &iVar19))
			{
				if (func_568(iVar19, 0))
				{
				}
			}
			if (func_895(986998820, &iVar20))
			{
				if (func_568(iVar20, 0))
				{
				}
			}
			iVar21 = func_570(iParam0);
			if (func_121(iVar21, 0))
			{
				if (func_568(iVar21, 1))
				{
				}
			}
		}
		func_571();
		return 1;
	}
	return 0;
}

int func_569(int iParam0)
{
	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	if (func_190(iParam0, -251515357))
	{
		return 1;
	}
	return 0;
}

int func_570(int iParam0)
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

int func_571()
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

	Var0 = { func_296(856287005, 0, 0) };
	Var5 = { func_346(856287005, Var0, Var0.f_4, 0) };
	iVar10 = func_199(856287005);
	if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, 0, &iVar11))
	{
		iVar14 = func_896(Var5, -415648720, 0);
	}
	if (!func_121(iVar14, 0))
	{
		return 0;
	}
	bVar15 = false;
	iVar20 = func_891(856287005);
	iVar9 = 0;
	while (iVar9 < iVar20)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, iVar9, &iVar11))
		{
			bVar15 = false;
			iVar21 = func_896(Var5, iVar11, 0);
			if (!func_121(iVar21, 0))
			{
				if (iVar11 == 325139909)
				{
					if (func_569(iVar14) || func_894(iVar14))
					{
					}
					else
					{
						Jump @219; //curOff = 194
						if (iVar11 == 986998820)
						{
							if (func_569(iVar14))
							{
							}
							else
							{
								bVar15 = true;
								Jump @259; //curOff = 222
								if (iVar11 == -1189569496)
								{
									if (!func_569(iVar14) && func_897(iVar21))
									{
										bVar15 = true;
									}
								}
								if (bVar15)
								{
									if (func_898(iVar11, &Var16, 1))
									{
										if (!func_893(Var16, 1))
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

bool func_572()
{
	return !&Global_1911774;
}

void func_573(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_574(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_575(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_576(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

var func_577(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_899(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_578(int iParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = func_582(iParam1);
	if (!func_900(iParam0, Var0.f_4))
	{
		return 0;
	}
	iVar5 = func_620(iParam0, &Var0, 1, 0);
	iVar6 = func_754(iParam0, 0);
	if (iVar5 >= 0 && iVar6 > iVar5)
	{
		return 0;
	}
	return 1;
}

int func_579(int iParam0)
{
	if (!func_121(iParam0, 0))
	{
	}
	if (func_190(iParam0, 173360570))
	{
		return 1;
	}
	return 0;
}

int func_580(int iParam0)
{
	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0x4AEF1FB5B9011D75(iParam0);
}

int func_581(int iParam0, int iParam1, int iParam2)
{
	struct<10> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<2> Var14[15];
	int iVar45;
	int iVar46;

	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	*iParam2 = 0;
	Var0 = { func_901(-1591664384, -1591664384, 0, 0, iParam1, 0, -1, 0, 0) };
	iVar11 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var0, &iVar10, 1);
	if (iVar11 != -1)
	{
		iVar12 = 0;
		while (iVar12 < iVar10)
		{
			if (ITEMDATABASE::_0x8750F69A720C2E41(iVar11, iVar12, &iVar13))
			{
				if (func_902(iVar13, iParam1, &Var14, &iVar45, 1, 0))
				{
					iVar46 = 0;
					while (iVar46 < iVar45)
					{
						if (iParam0 == &Var14[iVar46 /*2*/])
						{
							*iParam2 = (*iParam2 + (Var14[iVar46 /*2*/])->f_1);
						}
						iVar46++;
					}
				}
			}
			iVar12++;
		}
		ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar11);
	}
	return 1;
}

int func_582(int iParam0)
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

struct<4> func_583(bool bParam0)
{
	return func_346(joaat("character"), func_903(), -1591664384, bParam0);
}

int func_584(int iParam0)
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

float func_585(int iParam0)
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
			return func_904(iParam0);
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
			return func_904(iParam0);
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
			return func_904(iParam0);
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

int func_586(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_455(18);
		case 2:
			return func_455(20);
		case 1:
			return func_455(19);
		default:
			break;
	}
	return 1;
}

int func_587(int iParam0)
{
	return func_905(&(Global_40.f_11095.f_11[iParam0]));
}

void func_588(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (func_23() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_455(31))
	{
		return;
	}
	iVar0 = func_587(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_587(iParam0);
	if (func_906(iParam0) && func_907(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_908(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_909(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_63(func_910(iParam0), 0);
					}
					func_911(iParam0, iVar2, iVar3);
					func_232(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

char* func_589(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_590(int iParam0)
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

int func_591(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_296(iParam0, 1, 0) };
	return func_412(Var0.f_4);
}

int func_592(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_190(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_190(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_190(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_190(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_190(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_190(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

int func_593(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_413(func_912(iParam0), 1);
	if (iVar1 >= 39)
	{
		return 0;
	}
	if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] != 0 && &Global_1946804->f_1497.f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1 /*3*/];
		if (func_199(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	*iParam1 = 0;
	return 0;
}

int func_594(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == &Global_1946804->f_57[func_413(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_405(524288))
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

void func_595(int iParam0, bool bParam1, bool bParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_6, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_5, bParam2);
}

int func_596(int iParam0)
{
	iParam0 = func_395(iParam0);
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

int func_597(int iParam0, int iParam1, int iParam2)
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

int func_598(int iParam0, int iParam1)
{
	iParam0 = func_395(iParam0);
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

void func_599(int iParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	iParam2 = func_597(iParam2, 0, 100);
	if (func_913(iParam1, &uVar0))
	{
		ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iParam0, uVar0, iParam2);
	}
}

void func_600(int iParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (!func_913(iParam1, &iVar0))
	{
		return;
	}
	sVar1 = func_914(iParam1);
	sVar2 = func_915(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		iVar3 = ATTRIBUTE::_GET_ATTRIBUTE_CORE_VALUE(iParam0, iVar0);
		PED::_0x437C08DB4FEBE2BD(iParam0, sVar1, BUILTIN::TO_FLOAT(iVar3), -1);
		if (iVar3 <= 20)
		{
			PED::_0xCB9401F918CB0F75(iParam0, sVar2, 1, -1);
		}
		else
		{
			PED::_0xA6F67BEC53379A32(iParam0, sVar2);
		}
	}
}

bool func_601(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_602(int iParam0)
{
	return func_274(iParam0, Global_1310750->f_16072 | 64);
}

void func_603(int iParam0)
{
	int iVar0;

	if (&Global_1310750->f_13321[iParam0 /*9*/] != -1)
	{
		((*Global_1310750)[&Global_1310750->f_13321[iParam0 /*9*/] /*111*/])->f_48 = 0;
	}
	Global_1310750->f_13321[iParam0 /*9*/] = -1;
	(Global_1310750->f_13321[iParam0 /*9*/])->f_1 = -1;
	(Global_1310750->f_13321[iParam0 /*9*/])->f_2 = { 0f, 0f, 0f };
	(Global_1310750->f_13321[iParam0 /*9*/])->f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		(Global_1310750->f_13321[iParam0 /*9*/])->f_6[iVar0] = -1881652455;
		iVar0++;
	}
}

int func_604(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_916(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

void func_605(int iParam0, int iParam1, var uParam2)
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

struct<14> func_606(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_607(bool bParam0)
{
	int iVar0;

	iVar0 = func_86(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224214))
		{
			*Global_1224214 = { func_346(923904168, func_583(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224222))
		{
			*Global_1224222 = { func_346(923904168, func_583(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_346(923904168, func_583(bParam0), -740156546, 0);
}

void func_608(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_609(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_86(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_610(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	struct<2> Var0;

	*uParam2 = 0;
	*uParam3 = 0;
	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	if ((!Global_1911914->f_1579 && func_917(iParam0, iParam1, 1)) && !bParam5)
	{
		return 0;
	}
	if (!func_918(iParam0, 1, iParam1, &Var0, iParam4, bParam6, iParam7, bParam8))
	{
		*uParam2 = Var0;
		*uParam3 = Var0.f_1;
		return 0;
	}
	return 1;
}

int func_611(int iParam0, bool bParam1)
{
	if (func_199(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_754(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0) > 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_612(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_419(iParam0, *uParam1, iParam2, bParam3) > 0;
}

int func_613(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_919(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_614(bool bParam0)
{
	int iVar0;

	iVar0 = func_86(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224218))
		{
			*Global_1224218 = { func_346(271701509, func_583(bParam0), 12999093, 0) };
		}
		return *Global_1224218;
	}
	return func_346(271701509, func_583(bParam0), 12999093, 0);
}

int func_615(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_199(iParam0);
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

int func_616(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_86(bParam5), &uParam0, uParam4, !bParam6))
	{
		return 0;
	}
	return 1;
}

int func_617(int iParam0)
{
	if (!func_121(*iParam0, 0))
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

bool func_618(int iParam0)
{
	return func_122(iParam0) == joaat("weapon");
}

int func_619(int iParam0, var uParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	bool bVar28;
	int iVar29;

	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_296(iParam0, 0, 1) };
	iVar5 = 1728382685; /* GXTEntry: "Right" */
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_763((375 + iVar29), 1);
		if (func_612(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_613(iParam0, &Var6, iVar5);
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

int func_620(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	if (!func_98(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_86(bParam3), iParam0);
}

void func_621(int iParam0, int iParam1)
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
	func_920(iParam0, iParam1);
}

int func_622(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return 0;
	}
	return func_921(32, iParam0);
}

int func_623(int iParam0)
{
	if (iParam0 >= 1 && iParam0 <= 183)
	{
		return 1;
	}
	return 0;
}

int func_624(int iParam0)
{
	if (!func_623(iParam0))
	{
		return 0;
	}
	return (Global_1132154->f_12[iParam0 /*3*/])->f_2;
}

bool func_625(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	var uVar0;

	return func_922(iParam0, &uVar0, bParam1, iParam2, iParam3);
}

bool func_626()
{
	return Global_1955569->f_866;
}

int func_627(int iParam0)
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

bool func_628(int iParam0)
{
	return func_176(iParam0, 2);
}

bool func_629(var uParam0, int iParam1)
{
	return (uParam0->f_63 && iParam1) != 0;
}

void func_630(var uParam0)
{
	*uParam0 = 0;
}

void func_631(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_632(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

Vector3 func_633(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 1794.04f, -1314.792f, 43.0923f;
		case 26:
			return -235.2066f, 763.6583f, 117.085f;
		case 30:
			return 1288.87f, -1397.85f, 77.93f;
		case 32:
			return 1234.24f, -1425.58f, 71.18f;
		case 33:
			return 905.92f, -421.19f, 88.23f;
		case 36:
			return -2476.07f, 832.13f, 141.25f;
		case 38:
			return -329.32f, -366.6f, 87f;
		case 39:
			return 97.4f, -212.47f, 111.6f;
		case 43:
			return 2586.494f, -1009.154f, 43.24f;
		case 41:
			return 337.3075f, -684.5404f, 41.8362f;
		case 49:
			return -2178.646f, -245.6886f, 191.1569f;
		case 51:
			return -1709.38f, -335.07f, 176.95f;
		case 53:
			return 2480.1f, -1377.69f, 45.32f;
		case 56:
			return 2011.776f, -504.0132f, 40.983f;
		case 57:
			return 1383.38f, -1336.83f, 77.59f;
		case 65:
			return -2095.11f, 656.32f, 119.87f;
		case 69:
			return 2943.93f, 1377.15f, 43.22f;
		case 70:
			return 2945.42f, 1342.78f, 43.92f;
		case 77:
			return 2793.35f, -1174.5f, 46.89f;
		case 78:
			return 2734.359f, -1207.682f, 48.6752f;
		case 80:
			return 2740.808f, -1312.805f, 46.648f;
		case 81:
			return 2503.755f, -1164.531f, 48.1928f;
		case 84:
			return -73.18f, -392.3f, 70.84f;
		case 88:
			return 2480.53f, -399.62f, 41.42f;
		case 89:
			return 1576.261f, -251.85f, 79.21f;
		case 91:
			return 1496.348f, -1083.286f, 54.1105f;
		case 92:
			return 1407.31f, 316.83f, 88.9555f;
		case 94:
			return 1414.4f, 248.2f, 88.85f;
		case 101:
			return -1378.656f, -735.3399f, 90.8243f;
		case 102:
			return -1666.59f, 610.82f, 124.03f;
		case 103:
			return 1356.44f, 533.95f, 86.12f;
		case 104:
			return 2407f, -585.32f, 40.66f;
		case 105:
			return -219.25f, 212.93f, 94.15f;
		case 116:
			return 211.99f, 512.98f, 126.54f;
		case 117:
			return -329.2f, 797.9f, 116.89f;
		case 118:
			return -300.3652f, 814.9069f, 117.4111f;
		case 119:
			return -1043.989f, 434.5095f, 53.6802f;
		case 121:
			return 2520.88f, 421.94f, 65.91f;
		case 127:
			return 2834.68f, -1048.04f, 42.86f;
		case 133:
			return 2688.427f, -1121.766f, 49.6782f;
		case 135:
			return -576.08f, 524.9f, 97.86f;
		case 136:
			return 1248.01f, -1280.07f, 75.17f;
		case 143:
			return 2954.45f, 523.05f, 44.47f;
		case 144:
			return 2304.697f, -0.13289f, 45.70486f;
		case 151:
			return 556.271f, 172.08f, 133.3435f;
		case 152:
			return 556.271f, 172.08f, 133.3435f;
		case 146:
			return -585.6761f, -347.216f, 81.28532f;
		default:
			break;
	}
	return ((*Global_1347702)[iParam0 /*49*/])->f_24;
}

void func_634(int iParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3[24];
	char* sVar6;

	if (!func_117(iParam0))
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 256 != 0 && func_18(0, 0, 1))
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 16 != 0)
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_36 == 0)
	{
		return;
	}
	if (func_314(32768))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
	{
		return;
	}
	((*Global_1347702)[iParam0 /*49*/])->f_38 = func_923(iParam0);
	if (!bParam5 && func_924(iParam0))
	{
		((*Global_1347702)[iParam0 /*49*/])->f_37 = MAP::_BLIP_ADD_FOR_RADIUS(((*Global_1347702)[iParam0 /*49*/])->f_38, func_633(iParam0), ((*Global_1347702)[iParam0 /*49*/])->f_18);
		if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
		{
			return;
		}
		MAP::SET_BLIP_SPRITE(((*Global_1347702)[iParam0 /*49*/])->f_37, ((*Global_1347702)[iParam0 /*49*/])->f_36, true);
	}
	else
	{
		((*Global_1347702)[iParam0 /*49*/])->f_37 = MAP::_BLIP_ADD_FOR_COORD(((*Global_1347702)[iParam0 /*49*/])->f_38, vParam1);
		if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
		{
			return;
		}
		MAP::SET_BLIP_SPRITE(((*Global_1347702)[iParam0 /*49*/])->f_37, ((*Global_1347702)[iParam0 /*49*/])->f_36, true);
	}
	if (iParam0 == 61)
	{
		func_925(8);
	}
	else if (iParam0 == 62)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_THOMAS_DOWNES");
	}
	else if (iParam0 == 95)
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, 838722941);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_RHMRB");
	}
	else if (iParam0 == 42)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_RCFSH");
	}
	else if (iParam0 == 40)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_RCDIN");
	}
	else if (iParam0 == 50)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_RCRKF");
	}
	else if ((((iParam0 == 44 || iParam0 == 45) || iParam0 == 46) || iParam0 == 47) || iParam0 == 48)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_RCEXO");
	}
	func_926(iParam0);
	MAP::SET_BLIP_FLASH_TIMER(((*Global_1347702)[iParam0 /*49*/])->f_37, 64, iParam0);
	if (func_23() == -1)
	{
		func_927(iParam0);
		iVar0 = func_928(Global_40.f_4283);
		if (func_434(iVar0) && func_929(((*Global_1888801)[iVar0 /*35*/])->f_13))
		{
			bVar1 = true;
			bVar2 = func_930(iVar0);
		}
		if (func_931(iParam0, bVar1, iVar0))
		{
			func_932(((*Global_1347702)[iParam0 /*49*/])->f_15, bVar2, bVar1, iVar0);
		}
	}
	if (bParam4)
	{
		if (HUD::_0x66F35DD9D2B58579() || CAM::IS_SCREEN_FADED_OUT())
		{
			return;
		}
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 1 == 0)
	{
		func_933(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 1);
		if (((!func_924(iParam0) || func_118(((*Global_1347702)[iParam0 /*49*/])->f_12, 1)) || func_118(((*Global_1347702)[iParam0 /*49*/])->f_12, 512)) || func_934(((*Global_1347702)[iParam0 /*49*/])->f_13, 2048))
		{
			MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, 580546400);
		}
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 32768 == 0)
	{
		if ((((*Global_1347702)[iParam0 /*49*/])->f_36 == -1822497728 && ((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 == 0) && ((*Global_1347702)[iParam0 /*49*/])->f_12 & 2 != 0)
		{
			MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, -211388321);
		}
		else
		{
			func_933(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32768);
		}
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 8 != 0 && Global_40.f_490.f_402[iParam0] & 2 == 0)
	{
		if (func_935(iParam0))
		{
			if (iParam0 == 97)
			{
				func_63(185, 0);
			}
			else
			{
				func_63(186, 1);
			}
		}
		else
		{
			MemCopy(&cVar3, {((*Global_1347702)[iParam0 /*49*/])->f_3}, 3);
			StringConCat(&cVar3, "_FIRST", 24);
			sVar6 = ((*Global_1347702)[iParam0 /*49*/])->f_37;
			((*Global_1347702)[iParam0 /*49*/])->f_40 = func_201(MISC::_CREATE_VAR_STRING(2, &cVar3, sVar6), 10000, 0, 0, 0, 1);
		}
		func_936(iParam0, 2);
	}
}

Vector3 func_635(int iParam0)
{
	vector3 vVar0;

	if (!func_117(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_937(iParam0, &vVar0))
	{
		((*Global_1347702)[iParam0 /*49*/])->f_24 = { vVar0 };
	}
	return ((*Global_1347702)[iParam0 /*49*/])->f_24;
}

int func_636(int iParam0)
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

void func_637(var uParam0, int iParam1)
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

int func_638(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_938(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_939(uParam2, iParam0, Var1);
	return 1;
}

int func_639(int iParam0)
{
	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	if (func_190(iParam0, -839724752))
	{
		return 1;
	}
	return 0;
}

void func_640(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4)
{
	*iParam3 = PED::_GET_PED_DAMAGE(iParam0);
	*uParam2 = FLOCK::_0xF8B48A361DC388AE(iParam0);
	if (*uParam2 == 2)
	{
		*iParam1 = 4;
	}
	else if (*uParam2 == 1)
	{
		*iParam1 = 3;
	}
	else
	{
		*uParam4 = PED::_GET_PED_QUALITY(iParam0);
		switch (*uParam4)
		{
			case 0:
				*iParam1 = 0;
				break;
			case 1:
				*iParam1 = 1;
				break;
			case -1:
			case 2:
				*iParam1 = 2;
				break;
		}
	}
}

bool func_641(int iParam0, int iParam1, int iParam2, int iParam3)
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
	uVar2 = PED::_0x9E7738B291706746(iParam0, iParam1, iParam2);
	return uVar2;
}

int func_642(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::_0x9A100F1CF4546629(iParam0) && !ENTITY::_0xC346A546612C49A9(iParam0))
	{
		return 0;
	}
	func_640(iParam0, &iVar1, &uVar2, &iVar0, &uVar3);
	func_641(&iVar4, iParam0, iVar0, iVar1);
	if (iVar4 != 0)
	{
		return iVar4;
	}
	switch (iVar0)
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

int func_643(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	iParam1 = func_940(PLAYER::PLAYER_PED_ID(), iParam0, iParam1, bParam2);
	if (iParam1 <= 0)
	{
		return iParam1;
	}
	iVar0 = func_644(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_645(&iVar0, iParam0, &iParam1, bParam3, iParam4);
	}
	return iParam1;
}

int func_644(int iParam0)
{
	int iVar0;

	if (func_941(iParam0))
	{
		if (func_23() == -1)
		{
			iVar0 = PED::_GET_LAST_MOUNT(Global_35);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar0 = func_204(func_395(0));
			}
		}
		else
		{
			iVar0 = PED::_GET_LAST_MOUNT(func_942());
		}
	}
	else if (func_23() == -1)
	{
		iVar0 = func_204(0);
	}
	else
	{
		iVar0 = PLAYER::_0xF49F14462F0AE27C(PLAYER::GET_PLAYER_INDEX());
	}
	return iVar0;
}

int func_645(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	iVar0 = INVENTORY::_0x13D234A2A3F66E63(*iParam0);
	iVar1 = func_943(iVar0, iParam1);
	if (func_944(*iParam0, iParam1, *iParam2, bParam3, iParam4))
	{
		Var2 = { func_436(iParam1) };
		if (STATS::_STAT_ID_IS_VALID(&Var2))
		{
			STATS::_0xBD861AE8A5181ED7(&Var2, *iParam2);
		}
		if (func_945(iParam1))
		{
			func_946(*iParam0, iParam1, *iParam2);
		}
		else
		{
			func_946(*iParam0, iParam1, *iParam2);
			func_940(*iParam0, iParam1, *iParam2, 1);
		}
		iVar4 = (iVar1 - func_943(iVar0, iParam1));
		*iParam2 = (*iParam2 - iVar4);
		return 1;
	}
	return 0;
}

int func_646(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_124(iParam0, 0, 0);
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
		if (!func_226(iParam0, iVar1, bParam2, iParam3, 0))
		{
			return 0;
		}
	}
	if (iVar2 > 0)
	{
		if (!func_947(iParam0, iVar2, bParam2, iParam3))
		{
			return 0;
		}
		if (!bParam2)
		{
			func_201("SHOP_SELL_HORSE_SATCHEL", 10000, 0, 0, 0, 1);
		}
	}
	return 1;
}

int func_647(bool bParam0, bool bParam1, bool bParam2)
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

int func_648(int iParam0, int iParam1)
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

int func_649(int iParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_650(int iParam0)
{
	if (func_121(iParam0, 0))
	{
		if (func_190(iParam0, -1242251796))
		{
			if (func_190(iParam0, 2060589226))
			{
				return func_948();
			}
			return func_949();
		}
		else if (func_190(iParam0, 1919582297))
		{
			return func_659();
		}
		else if (func_190(iParam0, 1147021565))
		{
			return func_660();
		}
	}
	if (Global_1935496->f_12)
	{
		return func_949();
	}
	else
	{
		return func_660();
	}
	return func_660();
}

int func_651(int iParam0)
{
	if ((((((((((func_190(iParam0, 1147021565) || func_190(iParam0, -136654233)) || func_190(iParam0, -524514947)) || func_190(iParam0, -1238310989)) || func_190(iParam0, 1765172170)) || func_190(iParam0, 1490540191)) || func_190(iParam0, 1573112293)) || func_190(iParam0, -1242251796)) || func_190(iParam0, 1919582297)) || func_190(iParam0, -2085281117)) || iParam0 == -1994237933)
	{
		return 1;
	}
	return 0;
}

int func_652()
{
	return 33284224;
}

int func_653()
{
	return 33537269;
}

int func_654()
{
	return 18589696;
}

int func_655()
{
	return 26978448;
}

int func_656()
{
	return 33529847;
}

int func_657()
{
	return 26978304;
}

int func_658()
{
	return 32505855;
}

int func_659()
{
	return 26983431;
}

int func_660()
{
	return 33537239;
}

int func_661()
{
	return 32713860;
}

int func_662()
{
	return 16400295;
}

int func_663()
{
	return 33284224;
}

void func_664(int iParam0)
{
	if (func_950(32))
	{
		return;
	}
	func_951(32);
	if (func_140(Global_35))
	{
		Global_1935496->f_7 |= 1;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 1);
	}
	if (func_682(Global_35))
	{
		Global_1935496->f_7 |= 2;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 2);
	}
	if (func_952(Global_35, 713668775))
	{
		Global_1935496->f_7 |= 4;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 4);
	}
	if (func_953(Global_35))
	{
		Global_1935496->f_7 |= 8;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 8);
	}
	if (func_352(0, 1))
	{
		Global_1935496->f_7 |= 16;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 16);
	}
	if (!func_954(0))
	{
		Global_1935496->f_7 |= 32;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 32);
	}
	if (!func_955(0))
	{
		Global_1935496->f_7 |= 512;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 512);
	}
	if (!func_956(0))
	{
		Global_1935496->f_7 |= 8192;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 8192);
	}
	if (PED::IS_PED_IN_COVER(Global_35, 0, 1))
	{
		Global_1935496->f_7 |= 16384;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 16384);
	}
	if (PED::_0xD5FE956C70FF370B(Global_35))
	{
		Global_1935496->f_7 |= 32768;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 32768);
	}
	if (func_23() == 0 && PED::_0xB655DB7582AEC805(Global_35))
	{
		Global_1935496->f_7 |= 131072;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 131072);
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
	{
		Global_1935496->f_7 |= 256;
	}
	else if (PED::_0x7FC84E85D98F063D(Global_35))
	{
		Global_1935496->f_7 |= 256;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 256);
	}
	if (Global_1935630->f_24 || TASK::_0xC8B29D18022EA2B7(Global_35))
	{
		Global_1935496->f_7 |= 1024;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 1024);
	}
	if (TASK::IS_PED_RUNNING(Global_35))
	{
		Global_1935496->f_7 |= 4096;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 4096);
	}
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1) || func_952(Global_35, 1369124074))
	{
		Global_1935496->f_7 |= 128;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 128);
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(Global_35))
	{
		Global_1935496->f_7 |= 33554432;
		if (TASK::_0x2D0571BB55879DA2(Global_35) == -1241981548)
		{
			Global_1935496->f_7 |= 67108864;
		}
		else
		{
			Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 67108864);
		}
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 67108864);
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 33554432);
	}
	if (CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		Global_1935496->f_7 |= 65536;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 65536);
	}
	if (CAM::_0x1204EB53A5FBC63D())
	{
		Global_1935496->f_7 |= 64;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 64);
	}
	if (TASK::IS_PED_GETTING_UP(Global_35))
	{
		Global_1935496->f_7 |= 1048576;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 1048576);
	}
	if (func_957(iParam0, 0))
	{
		Global_1935496->f_7 |= 524288;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 524288);
	}
	if (func_958(iParam0, 0))
	{
		Global_1935496->f_7 |= 262144;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 262144);
	}
	if (func_141(Global_35))
	{
		Global_1935496->f_7 |= 4194304;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 4194304);
	}
	if (func_959())
	{
		Global_1935496->f_7 |= 16777216;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 16777216);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (func_960(iParam0))
		{
			switch (ENTITY::GET_ENTITY_MODEL(iParam0))
			{
				case joaat("a_c_horsemule_01"):
				case joaat("a_c_horsemulepainted_01"):
				case joaat("a_c_donkey_01"):
					Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 134217728);
					break;
				default:
					Global_1935496->f_7 |= 134217728;
					break;
			}
		}
		if (PED::_0xFB4891BD7578CDC1(iParam0, 149557334))
		{
			Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 134217728);
		}
		if (PED::IS_PED_ON_VEHICLE(iParam0, false))
		{
			Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 134217728);
		}
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 134217728);
	}
	if (((((func_23() == -1 && func_961(32768)) || func_350()) || func_962()) || (func_963() && !func_19())) || ENTITY::GET_ENTITY_SUBMERGED_LEVEL(Global_35) > 0.2f)
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 2097152);
	}
	else
	{
		Global_1935496->f_7 |= 2097152;
	}
	if (Global_1900073->f_17 && func_37(Global_35, 1, 0, 0) == joaat("weapon_fishingrod"))
	{
		Global_1935496->f_7 |= 8388608;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 8388608);
	}
}

int func_665(bool bParam0)
{
	int iVar0;

	if (func_964(1) && !Global_1392040->f_2)
	{
		if (bParam0)
		{
			func_201("ITEM_UNUSABLE_PICKING_UP", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if ((func_964(2) && !Global_1392040->f_2) && MISC::GET_GAME_TIMER() >= Global_36614)
	{
		if (bParam0)
		{
			iVar0 = func_965(Global_35);
			if (iVar0 != 0)
			{
				if (ENTITY::_0x9A100F1CF4546629(iVar0))
				{
					func_201("ITEM_UNUSABLE_SKINNING", 10000, 0, 0, 0, 1);
					return 0;
				}
			}
			func_201("ITEM_UNUSABLE_LOOTING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_964(4194304))
	{
		return 0;
	}
	return 1;
}

int func_666(bool bParam0)
{
	if (PED::_IS_PED_CARRYING(Global_35) && !Global_1392040->f_2)
	{
		if (bParam0)
		{
			func_201("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	return 1;
}

int func_667(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (PED::_0x1D46B417F926D34D(Global_35))
	{
		return 0;
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			return 0;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		switch (iVar1)
		{
			case joaat("rowboat"):
			case joaat("handcart"):
				if (bParam0)
				{
					func_201("ITEM_UNUSABLE_VEHICLE", 10000, 0, 0, 0, 1);
				}
				return 0;
			case joaat("breach_cannon"):
			case joaat("gatling_gun"):
			case joaat("gatlingmaxim02"):
			case joaat("hotchkiss_cannon"):
				if (bParam0)
				{
					func_201("ITEM_UNUSABLE_CANNON", 10000, 0, 0, 0, 1);
				}
				return 0;
		}
		if (!func_16(iParam1, 32) && !PED::IS_PED_ON_MOUNT(Global_35))
		{
			if (VEHICLE::_0x2963B5C1637E8A27(iVar0) == Global_35 || bParam2)
			{
				return 0;
			}
		}
	}
	else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Global_35))
	{
		return 0;
	}
	return 1;
}

int func_668(int iParam0, int iParam1)
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

int func_669(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true);
	}
	return 0;
}

int func_670(int iParam0, bool bParam1)
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

bool func_671()
{
	return Global_1894899 & 4 != 0;
}

bool func_672()
{
	return func_966(512);
}

bool func_673(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_674()
{
	return Global_1310750->f_16077 != 0;
}

int func_675(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(((*Global_1934603)[iVar0 /*16*/])->f_10)))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_676(int iParam0)
{
	return (Global_1914296->f_22 && iParam0) != 0;
}

bool func_677(int iParam0)
{
	return (Global_40.f_9419 && iParam0) != 0;
}

int func_678(int iParam0)
{
	if (!func_434(iParam0))
	{
		return 0;
	}
	return func_967(iParam0, 33554432);
}

int func_679(int iParam0)
{
	if (!func_434(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_20;
}

int func_680(int iParam0)
{
	if (func_679(iParam0) != 5)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 28:
		case 33:
		case 75:
		case 117:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_681()
{
	int iVar0;

	iVar0 = func_22();
	switch (iVar0)
	{
		case 3:
			return 1;
		case 51:
			return 1;
		case 41:
			return 1;
		case 108:
			return 1;
		case 44:
			return 1;
		case 84:
			return 1;
		case 103:
			return 1;
		case 53:
			return 1;
		case 73:
			return 1;
		case 18:
			return 1;
		case 0:
			return 1;
		case 106:
			return 1;
		case 47:
			return 1;
		case 63:
			return 1;
		case 24:
			return 1;
		case 46:
			return 1;
		case 107:
			return 1;
		case 80:
			return 1;
		case 85:
			return 1;
		case 7:
			return 1;
		case 82:
			return 1;
		case 110:
			return 1;
		case 120:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_682(int iParam0)
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
	if (PED::_0x5463C962BC7777C3(iParam0, 0, &uVar0, 1, 1) != 0)
	{
		return 1;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 2, &uVar0, 1, 1) != 0)
	{
		return 1;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 1, &uVar0, 1, 1) != 0)
	{
		return 1;
	}
	if (PED::_0x758F081DB204DDDE(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_683()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;

	iVar0 = func_22();
	vVar2 = { -3685.423f, -2597.155f, -10f };
	vVar5 = { 0f, 0f, -24.7897f };
	vVar8 = { 116.6365f, 76.68949f, 15f };
	if (iVar0 != 120)
	{
		return 0;
	}
	else
	{
		iVar1 = VOLUME::_CREATE_VOLUME_CYLINDER(vVar2, vVar5, vVar8);
		if (func_968(Global_35, iVar1, 1, 0))
		{
			func_318(iVar1);
			return 1;
		}
		else
		{
			func_318(iVar1);
			return 0;
		}
	}
	return 0;
}

int func_684(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_21(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return 1;
	}
	return 0;
}

int func_685(vector3 vParam0, float fParam3)
{
	if (func_969(vParam0, fParam3))
	{
		return 1;
	}
	if (func_970(vParam0, fParam3))
	{
		return 1;
	}
	return 0;
}

void func_686(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_3 = iParam1;
}

var func_687(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

char* func_688(int iParam0)
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

var func_689(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

int func_690(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_971(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_INT(&uVar5, &Var0);
	return uVar5;
}

char* func_691(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_452() >= 12)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_972(), 12);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_973(), 12);
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
			else if (func_784() >= 30)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_POSTED_OBJ", func_974(), 30);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_FOUND_OBJ", func_784(), 30);
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
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_975(), 13);
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
			else if (func_785() >= 10)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_POSTED_OBJ", func_976(), 10);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_FOUND_OBJ", func_785(), 10);
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
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_690(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

int func_692(int iParam0, int iParam1, int iParam2)
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

int func_693(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return 1;
}

int func_694(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, 0, 0);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, 1);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::_CREATE_VAR_STRING(2, sParam3));
	return 1;
}

int func_695(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
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
			iVar2 = func_977(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_25(iVar2, 1, 0) || func_979(func_978(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_688(func_977(iVar0))), func_688(func_977(iVar0)), bVar1, 1, 0);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_784() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_980(iVar0)), func_980(iVar0), bVar1, 1, 0);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_974() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_980(iVar0)), func_980(iVar0), bVar1, 1, 0);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_980(iVar0)), func_980(iVar0), bVar1, 1, 0);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_795(iParam3, func_981(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_791(iVar2) - iParam7) >= func_690(iParam3, func_982(iVar0));
				}
				else
				{
					bVar1 = func_791(iVar2) >= func_690(iParam3, func_982(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_791(iVar2) + iParam7) >= func_690(iParam3, func_982(iVar0));
			}
			else
			{
				bVar1 = func_791(iVar2) >= func_690(iParam3, func_982(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_983(iVar2)), func_983(iVar2), bVar1, 1, 0);
		}
		if (iParam2 == 1995362678)
		{
			if (func_984(COLLECTION::_0x126CBEBBA46693CF(iVar0, 1995362678, 0)))
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
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_985(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0))), func_985(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0)), bVar1, 1, 0);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_785() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_986(iVar0)), func_986(iVar0), bVar1, 1, 0);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_976() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_986(iVar0)), func_986(iVar0), bVar1, 1, 0);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_986(iVar0)), func_986(iVar0), bVar1, 1, 0);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_795(iParam3, func_981(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_791(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_987(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_987(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_988(iVar2)), func_988(iVar2), bVar1, 1, 0);
		}
		iVar0++;
	}
	return 1;
}

int func_696(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_975() >= 13)
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

int func_697(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_119(func_989(0)) && ((func_990(0) == 1 || func_990(0) == 8) || func_990(0) == 6))
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

int func_698()
{
	int iVar0;
	int iVar1;

	if (PED::_IS_PED_CARRYING(Global_35))
	{
		return 1;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
	{
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 1, false))
	{
	}
	if (iVar1 == joaat("weapon_unarmed"))
	{
		if (iVar0 == joaat("weapon_unarmed"))
		{
			return 1;
		}
		else if ((((WEAPON::IS_WEAPON_VALID(iVar0) && WEAPON::_0x0556E9D2ECF39D01(iVar0)) && !func_328(iVar0)) && !PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !CAM::_0xA24C1D341C6E0D53(1, 0, 0)))
		{
			return 3;
		}
		else if (iVar0 == joaat("weapon_kit_binoculars"))
		{
			return 1;
		}
		else if ((WEAPON::IS_WEAPON_VALID(iVar0) && func_328(iVar0)) || iVar0 == joaat("weapon_lasso"))
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

void func_699(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!TASK::_0x2D19BC4DF626CBE7(iParam0, iParam1, iParam2, iParam3))
	{
		ATTRIBUTE::_0xD962F8579D702DB5();
	}
	else
	{
		TASK::_TASK_ITEM_INTERACTION(iParam0, iParam1, iParam2, iParam3, 0, -1082130432);
		Global_1935496->f_26 = 1;
	}
}

void func_700(int iParam0, bool bParam1)
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
	var uVar38;
	var uVar39;
	bool bVar40;
	bool bVar41;
	bool bVar42;

	Var0.f_1 = 20;
	if ((func_190(iParam0, 1573112293) || func_190(iParam0, 672467738)) || func_190(iParam0, -550842268))
	{
		bVar37 = true;
	}
	if (func_122(iParam0) == 2085633299)
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
				fVar30 = func_991(0, Var22.f_2);
				func_992(Var22.f_2, 1);
				func_232(0, 7000);
				bVar41 = true;
			}
			else if (-1104847406 == Var22.f_1)
			{
				fVar31 = func_991(2, Var22.f_2);
				func_109(Var22.f_2);
				func_232(2, 7000);
				bVar40 = true;
			}
			else if (381158954 == Var22.f_1)
			{
				fVar32 = func_991(1, Var22.f_2);
				func_993(Var22.f_2);
				func_232(1, 7000);
			}
			else if (-416929031 == Var22.f_1)
			{
				fVar33 = func_994(Var22.f_2, Var22.f_5);
				if (func_236(&uVar38, &uVar39, fVar33))
				{
					func_237(fVar33, 1, bVar37, bParam1);
					func_232(0, 7000);
				}
				bVar41 = true;
			}
			else if (1857353317 == Var22.f_1)
			{
				fVar34 = func_994(Var22.f_2, Var22.f_5);
				if (func_236(&uVar38, &uVar39, fVar34))
				{
					func_238(fVar34, 1, bVar37, bParam1);
					func_232(2, 7000);
				}
				bVar40 = true;
			}
			else if (1681823811 == Var22.f_1)
			{
				fVar35 = func_994(Var22.f_2, Var22.f_5);
				if (func_236(&uVar38, &uVar39, fVar35))
				{
					func_239(fVar35, 1, bVar37, bParam1);
					func_232(1, 7000);
				}
			}
			else if (2062242710 == Var22.f_1)
			{
				fVar36 = func_241(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_242(19, fVar36);
				bVar41 = true;
			}
			else if (-826379728 == Var22.f_1)
			{
				fVar36 = func_241(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_242(20, fVar36);
				bVar40 = true;
			}
			else if (-1191740624 == Var22.f_1)
			{
				fVar36 = func_241(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_242(18, fVar36);
			}
			else if (1869697234 == Var22.f_1)
			{
				fVar36 = func_241(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_242(0, fVar36);
				bVar41 = true;
			}
			else if (1342237631 == Var22.f_1)
			{
				fVar36 = func_241(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_242(2, fVar36);
				bVar40 = true;
			}
			else if (-1240225157 == Var22.f_1)
			{
				fVar36 = func_241(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_242(1, fVar36);
			}
			else if (-816334026 == Var22.f_1)
			{
				func_240(BUILTIN::TO_FLOAT(Var22.f_2), 1);
			}
			iVar29++;
		}
		if (bVar41)
		{
			if (fVar33 > 0f || fVar30 > 0f)
			{
				bVar42 = true;
			}
		}
		if (bVar42 || func_190(iParam0, -537818634))
		{
			func_251(func_523(-704089207), 1);
		}
		if (func_190(iParam0, -1457797660))
		{
			func_251(func_523(-1909697259), 1);
		}
		if (bVar40)
		{
			func_251(func_523(704570463), 1);
		}
		PLAYER::_0x0E1DB1F8F5B561DC(fVar30, fVar32, fVar31, BUILTIN::ROUND((fVar33 / 2f)), BUILTIN::ROUND((fVar35 / 2f)), BUILTIN::ROUND((fVar34 / 2f)));
	}
}

bool func_701(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			return false;
		}
	}
	return PED::_0xFB4891BD7578CDC1(iParam0, iParam1);
}

void func_702(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	int iVar1;

	uVar0 = func_995(iParam0);
	iVar1 = func_524(&uVar0);
	if (iVar1 != iParam0)
	{
		func_996(iVar1, 4);
	}
	if (!func_997(iParam0))
	{
		return;
	}
	if (func_998(iParam0))
	{
		return;
	}
	func_996(iParam0, 4);
	func_999(iParam0, bParam1);
	if (!func_1000(iParam0))
	{
		func_1001(iParam0, 1, 0);
	}
	if (bParam1)
	{
		if (!func_18(0, 0, 1))
		{
			func_101(1, 6);
		}
	}
}

void func_703(int iParam0)
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

int func_704(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return 0;
	}
	return 1;
}

bool func_705(int iParam0, int iParam1)
{
	if (!func_704(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] && iParam1) != 0;
}

int func_706(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (func_1002(Global_35, iParam0, 0, 1) < 2f && PED::_0xD543D3A8FDE4F185(Global_35, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_707(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_708(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

int func_709()
{
	if (Global_1946804->f_2793)
	{
		return 1;
	}
	if (MISC::ABSI((MISC::GET_GAME_TIMER() - Global_1946804->f_2791)) < 1250)
	{
		return 1;
	}
	if (func_1003())
	{
		return 1;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35))
	{
		return 1;
	}
	return 0;
}

int func_710(int iParam0)
{
	int iVar0;

	iVar0 = func_199(iParam0);
	if (iVar0 == 81053684 || iVar0 == -525676072)
	{
		return 1;
	}
	return 0;
}

void func_711(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_712(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_718(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_713(int iParam0)
{
	if (-1829635046 == func_1004(81053684))
	{
		if (func_718(iParam0))
		{
			return 1;
		}
	}
	else if (func_593(-525676072, iParam0))
	{
		if (func_718(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_714()
{
	int iVar0;

	iVar0 = 1549701178;
	switch (func_698())
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

int func_715()
{
	int iVar0;

	iVar0 = 614608656;
	switch (func_698())
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

int func_716()
{
	int iVar0;

	iVar0 = -1832677570;
	switch (func_698())
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

int func_717()
{
	int iVar0;

	iVar0 = 1623252156;
	switch (func_698())
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

int func_718(int iParam0)
{
	if (func_593(81053684, iParam0))
	{
		return 1;
	}
	if (func_593(-525676072, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_719(var uParam0)
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

void func_720(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

void func_721(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_413(iParam0, 1) /*11*/])->f_10 = ((Global_1946804->f_57[func_413(iParam0, 1) /*11*/])->f_10 - ((Global_1946804->f_57[func_413(iParam0, 1) /*11*/])->f_10 && iParam1));
}

int func_722(int iParam0, bool bParam1)
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
				return func_1005();
			}
			break;
	}
	return 0;
}

int func_723(int iParam0, bool bParam1)
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

int func_724(int iParam0, int iParam1)
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

int func_725(int iParam0)
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

int func_726(int iParam0, var uParam1, int iParam2, bool bParam3)
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
	if (func_724(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_1006(iParam0, 0))
	{
		return 0;
	}
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = iVar1;
	if (func_199(iParam0) != -999503751)
	{
		func_1007(&(Global_1946804->f_2657.f_26.f_26), iParam0, Global_1946804->f_2657.f_19);
	}
	Global_1946804->f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_727(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_296(iParam0, 0, 0) };
	Var5 = { func_346(iParam0, Var0, Var0.f_4, 0) };
	if (func_419(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(iParam1, func_86(0), &Var5);
	return 1;
}

int func_728()
{
	return Global_1946804->f_1;
}

void func_729()
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

bool func_730(int iParam0)
{
	return func_1009(func_1008(iParam0));
}

void func_731(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1010(0);
	}
	if (bParam0)
	{
		func_398(8);
		func_398(512);
	}
	else
	{
		func_398(8);
		func_398(16);
	}
}

void func_732(int iParam0, int iParam1, bool bParam2)
{
	func_1011(iParam0, 0, 0);
	func_409(iParam1, 1, bParam2, 0);
}

int func_733(int iParam0, int iParam1)
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

void func_734()
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

void func_735(int iParam0)
{
	func_721(iParam0, 8, 6);
}

void func_736(int iParam0)
{
	func_1012(&(Global_1946804->f_2589), iParam0);
}

void func_737(int iParam0, int iParam1)
{
	func_1013(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_738(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_739(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_199(&(uParam0->f_1[iParam2 /*3*/]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1014(iParam2, 65536) && &uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_737(iVar1, iVar3);
		}
	}
	if (func_808(-1586649372) && func_1014(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_737(iVar1, iVar3);
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
						func_737(iVar1, iVar3);
					}
				}
			}
			func_1015(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1015(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_737(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 525
				func_1015(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/])->f_1 == joaat("base")
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = -1539589426;
					if (bParam4)
					{
						func_737(iVar1, iVar3);
					}
				}
				if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 1530758430)
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 1334603721;
					if (bParam4)
					{
						func_737(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 656
				func_1015(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1170; //curOff = 691
				func_1015(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_737(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 786
				func_1015(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_737(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_737(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_199(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_737(iVar1, iVar3);
						}
					}
				}
				Jump @1170; //curOff = 1025
				iVar1 = 36;
				if (&uParam0->f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && func_190(&(Global_1946804->f_1497.f_1[iVar1 /*3*/]), -1638171711))
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
			switch (func_199(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_199(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_737(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_199(&(uParam0->f_1[iVar1 /*3*/])) || func_190(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_737(iVar1, iVar3);
						}
					}
					break;
			}
		}

int func_740(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;

	uVar0 = func_1016(0);
	if (iParam2 != 0 && func_1017(iParam0, uVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_1018(iParam0, func_733(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_741(var uParam0, bool bParam1, int iParam2)
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
	iVar7 = func_1016(0);
	if (func_405(32768))
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
			iVar5 = func_733(iVar0, 1);
			if (func_1019(iVar5, 8))
			{
			}
			else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == joaat("MISSING") || &uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_1019(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_594(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_1020(uParam0);
				if (iVar3 > 0)
				{
					if (!func_405(524288))
					{
						func_398(524288);
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
							iVar5 = func_733(iVar0, 1);
							if (func_1019(iVar5, 8))
							{
							}
							else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == joaat("MISSING") || &uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_1019(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_594(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									if (bParam1)
									{
										func_737(iVar0, iParam2);
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
					func_720(524288);
				}
			}
		}
	}

void func_742(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1021(&(uParam0->f_2[iVar0 /*2*/]), bParam1, bParam2);
		iVar0++;
	}
	if (func_23() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_1022(2, Global_26795.f_776)) || Global_1946804->f_1497 != func_1023(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (&Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804->f_1497 = func_1023(Global_40.f_7729);
				Global_1946804->f_1378 = func_1023(Global_40.f_7729);
				Global_26795.f_776 = 0;
				func_1024(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_731(0, 1);
	}
}

bool func_743(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_744(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_707(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1 /*4*/] == Param0 && (Global_1946804->f_769[iVar1 /*4*/])->f_2 == Param0.f_2) && (Global_1946804->f_769[iVar1 /*4*/])->f_3 == Param0.f_3) && (Global_1946804->f_769[iVar1 /*4*/])->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1 /*4*/] == 34 && func_707(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_708(Param0);
	*(Global_1946804->f_769[Global_1946804->f_854 /*4*/]) = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_398(8);
}

bool func_745()
{
	return Global_1914319->f_17375;
}

int func_746()
{
	int iVar0;

	if (func_155())
	{
		iVar0 = TASK::_0xD04241BBF6D03A5E(PLAYER::PLAYER_PED_ID());
		return iVar0 != 0;
	}
	return 0;
}

bool func_747()
{
	return &Global_1898068;
}

var func_748(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_1025() != 0)
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
	iVar5 = Global_1225638->f_10;
	iVar6 = Global_1225638->f_14;
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_1026());
				break;
			case -432403087:
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_1026());
				break;
			case -1612834106:
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_1026());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_1027(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
		if (&Global_1225638->f_21[iVar2])
		{
			iVar10 = &Global_1225638->f_120[iVar2];
			bVar3 = false;
			bVar4 = false;
			if (iVar9 & 1 != 0 && iVar10 == iVar5)
			{
				bVar3 = true;
			}
			if (func_622(iVar2))
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
					else if (&Global_1225638->f_54[iVar2])
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8192 != 0 && func_1028(iVar2) != 1)
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
					if (_NAMESPACE26::_0x901E0DC25080C8B9(iVar10) != iVar6)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 65536 != 0)
				{
					if (!func_1029(iVar10))
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

int func_749(var uParam0, struct<18> Param1)
{
	if (!func_1030(uParam0))
	{
		return 0;
	}
	*(uParam0->f_2[*uParam0 /*18*/]) = { Param1 };
	*uParam0++;
	return 1;
}

void func_750(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	if (func_23() == -1)
	{
		if (func_356(43))
		{
			if (func_190(iParam0, 412399755))
			{
				func_788(-1791518714);
				if (func_789() == 0)
				{
					func_101(0, 10);
					iVar0 = func_1031(iParam0, iParam1, 1);
					if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
					{
						if (func_791(iParam0) < func_792(iParam0))
						{
							func_360(43, iParam0, iParam1, -1791518714, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_356(44))
		{
			if (func_190(iParam0, 709057512))
			{
				func_788(-2087881550);
				if (func_789() == 1)
				{
					func_101(0, 10);
					iVar0 = func_1031(iParam0, iParam1, 2);
					if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
					{
						if (func_791(iParam0) < func_792(iParam0))
						{
							func_360(43, iParam0, iParam1, -2087881550, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_356(45))
		{
			if (func_190(iParam0, -1478961327))
			{
				func_788(1908068621);
				if (func_789() == 2)
				{
					func_101(0, 10);
					iVar0 = func_1031(iParam0, iParam1, 4);
					if (((iParam0 == 2116770557 || iParam0 == -651064726) || iParam0 == -404270094) || iParam0 == 2093126853)
					{
						if (func_791(iParam0) < func_792(iParam0))
						{
							func_360(43, iParam0, iParam1, 1908068621, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_356(46))
		{
			if (func_190(iParam0, -1238404098))
			{
				func_788(1611247019);
				if (func_789() == 3)
				{
					func_101(0, 10);
					iVar0 = func_1031(iParam0, iParam1, 8);
					if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
					{
						if (func_791(iParam0) < func_792(iParam0))
						{
							func_360(43, iParam0, iParam1, 1611247019, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_356(47))
		{
			if (func_190(iParam0, 1160548794))
			{
				func_788(1319635688);
				if (func_789() == 4)
				{
					func_101(0, 10);
					iVar0 = func_1031(iParam0, iParam1, 16);
					if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
					{
						if (func_791(iParam0) < func_792(iParam0))
						{
							func_360(43, iParam0, iParam1, 1319635688, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

int func_751(int iParam0)
{
	var uVar0;

	if (func_23() != -1)
	{
		return 0;
	}
	if (func_454(iParam0, 1048576))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_297(iParam0, &uVar0, 1, 0, 0);
	}
	return func_25(iParam0, 1, 0);
}

void func_752(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (func_122(iParam0) != joaat("weapon"))
	{
		return;
	}
	iVar0 = func_253(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !func_564(iVar0))
	{
		if (func_23() == -1)
		{
			func_254(iVar0);
		}
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, 0) && func_124(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_256(iParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_753(int iParam0, int iParam1)
{
	int iVar0;

	if (func_190(iParam0, 58855631))
	{
		func_1032(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_754(int iParam0, bool bParam1)
{
	if (func_460(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_86(bParam1), iParam0, 0);
}

int func_755()
{
	if (func_23() != -1)
	{
		return 0;
	}
	if (!func_264())
	{
		return 0;
	}
	if (!func_120(((*Global_1835011)[1 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_120(((*Global_1835011)[2 /*74*/])->f_1, 1) && func_120(((*Global_1347702)[120 /*49*/])->f_15, 1)) && !func_120(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_120(((*Global_1835011)[37 /*74*/])->f_1, 1) && !func_120(((*Global_1835011)[39 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_120(((*Global_1835011)[57 /*74*/])->f_1, 1) && !func_120(((*Global_1835011)[60 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_120(((*Global_1835011)[26 /*74*/])->f_1, 1) && !func_120(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if ((func_120(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_120(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_120(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_120(((*Global_1835011)[75 /*74*/])->f_1, 1) && !func_120(((*Global_1347702)[1 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if (func_120(((*Global_1835011)[76 /*74*/])->f_1, 1) && !func_120(((*Global_1835011)[77 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_120(((*Global_1835011)[40 /*74*/])->f_1, 1) && func_120(((*Global_1835011)[41 /*74*/])->f_1, 1)) && !func_120(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_120(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_120(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_120(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_120(((*Global_1835011)[65 /*74*/])->f_1, 1) && func_120(((*Global_1835011)[66 /*74*/])->f_1, 1)) && !func_120(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 1;
	}
	return 0;
}

int func_756()
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 0);
}

int func_757(int iParam0)
{
	return COLLECTION::_0xEC3959E9950BF56B(iParam0);
}

int func_758(int iParam0)
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

int func_759(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_760(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_761(int iParam0)
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

void func_762(int iParam0)
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
			func_1033(1);
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
			func_1034(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_1034(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_1034(3);
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
			func_1035(1);
			break;
		case 34:
			func_1036(1);
			break;
		case 35:
			func_1037(1);
			break;
		case 36:
			break;
		case 37:
			func_1038(0);
			break;
		case 38:
			func_1039(0);
			break;
		case 39:
			func_1040(0);
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
			if ((!&Global_1879534 && func_264()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_689("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_63(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_264()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_689("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_63(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_264()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_689("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_63(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_264()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_689("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_63(589, 0);
			break;
		case 24:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-200143754, true);
			UNLOCK::_UNLOCK_SET_VISIBLE(-200143754, true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			if (func_23() == -1)
			{
				if (!func_808(99217379) || func_1041(99217379) == 2110595215)
				{
					if (func_767())
					{
						iVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						iVar0 = 899611344; /* GXTEntry: "Off-Hand Holster" */
					}
					if (!func_25(iVar0, 1, 0))
					{
						func_498(iVar0, 1, 752097756);
					}
					func_210(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_23() == -1)
			{
				if (!func_25(1013902307, 1, 0))
				{
					func_498(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_23() == -1)
			{
				if (!func_25(1013902307, 1, 0))
				{
					func_498(1013902307, 1, 752097756);
				}
				if (!func_25(142640135, 1, 0))
				{
					func_498(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_23() == -1)
			{
				if (!func_25(786809402, 1, 0))
				{
					func_498(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_23() == -1)
			{
				if (!func_25(786809402, 1, 0))
				{
					func_498(786809402, 1, 752097756);
				}
				if (!func_25(-518019409, 1, 0))
				{
					func_498(-518019409, 1, 752097756);
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
			func_1042();
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

int func_763(int iParam0, int iParam1)
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

void func_764(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar1 = func_858(WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

void func_765(int iParam0)
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
	if (WEAPON::_0xC4DEC3CA8C365A5D(iParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (WEAPON::_0xDDC64F5E31EEDAB6(iParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::_0xC212F1D05A8232BB(iParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::_0x0A82317B7EBFC420(iParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::_0xC75386174ECE95D5(iParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	DECORATOR::DECOR_SET_INT(Global_35, sVar0, iParam0);
	iVar2 = func_147();
	func_246(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_35, sVar1, iVar2);
}

int func_766(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_328(iParam0))
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
		if (WEAPON::_0x6AD66548840472E5(iParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0) * 4;
		}
		iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::_0x5C2EA6C44F515F34(iParam0));
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

int func_767()
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

bool func_768(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(WEAPON::_0x5C2EA6C44F515F34(iParam0));
}

int func_769(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_770(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	if (WEAPON::_0x705BE297EEBDB95D(iVar0))
	{
		if (WEAPON::_0x0556E9D2ECF39D01(iVar0))
		{
			if (!func_455(50))
			{
				if (!func_455(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (WEAPON::_0xD955FEE4B87AFA07(iVar0))
		{
			if (!func_455(51))
			{
				if (!func_455(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_771()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797);
}

void func_772()
{
	PLAYER::_0xFE7C9CF376D23342(PLAYER::PLAYER_ID(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_773()
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

int func_774()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_25(func_1043(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_775(int iParam0)
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

int func_776(int iParam0, int iParam1)
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
	if (func_25(iVar0, 1, 0) && func_25(iVar1, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_777(int iParam0)
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

int func_778(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1044(iParam0);
	if (iVar0 != -15)
	{
		func_246(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_829(iVar0, 1);
	}
	return 0;
}

int func_779(int iParam0, bool bParam1, int iParam2)
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
	if (bParam1 && func_25(1811977508 /* GXTEntry: "Elk Antler Trinket" */, 1, 0))
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
			if (func_121(iVar25, 0) && func_190(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_780(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_577(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_781(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
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
		if (func_1045())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_577(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1046(iVar0);
			func_1047(iVar0, 0, 0);
		}
		func_577(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_251(func_523(1644987397), iVar1);
	}
}

int func_782(int iParam0)
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
	iVar1 = func_791(iVar9);
	iVar2 = func_791(iVar10);
	iVar3 = func_791(iVar11);
	iVar5 = func_792(iVar9);
	iVar6 = func_792(iVar10);
	iVar7 = func_792(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_791(iVar12);
		iVar8 = func_792(iVar12);
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

void func_783(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_784()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1048(COLLECTION::_0x126CBEBBA46693CF(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_785()
{
	return COLLECTION::_0x5461C821D00FE15A(2103522376, 0);
}

int func_786(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_987(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_987(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_987(iVar0))
		{
			*sParam2++;
		}
		if (func_987(iVar0))
		{
			return 1;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_987(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_987(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_987(iVar0))
		{
			*sParam2++;
		}
		if (func_987(iVar1))
		{
			*sParam2++;
		}
		if (func_987(iVar0) && func_987(iVar1))
		{
			return 1;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_987(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_987(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_987(iVar0))
		{
			*sParam2++;
		}
		if (func_987(iVar1))
		{
			*sParam2++;
		}
		if (func_987(iVar2))
		{
			*sParam2++;
		}
		if ((func_987(iVar0) && func_987(iVar1)) && func_987(iVar2))
		{
			return 1;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_987(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_987(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_987(iVar0))
		{
			*sParam2++;
		}
		if (func_987(iVar1))
		{
			*sParam2++;
		}
		if (func_987(iVar2))
		{
			*sParam2++;
		}
		if (func_987(iVar3))
		{
			*sParam2++;
		}
		if (((func_987(iVar0) && func_987(iVar1)) && func_987(iVar2)) && func_987(iVar3))
		{
			return 1;
		}
	}
	return 0;
}

void func_787(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_1049(1497516462);
			func_1050(2016141805);
			func_1050(1010885152);
			func_1050(-502324015);
			break;
		case 2016141805:
			func_1050(1497516462);
			func_1049(2016141805);
			func_1050(1010885152);
			func_1050(-502324015);
			break;
		case 1010885152:
			func_1050(1497516462);
			func_1050(2016141805);
			func_1049(1010885152);
			func_1050(-502324015);
			break;
		case -502324015:
			func_1050(1497516462);
			func_1050(2016141805);
			func_1050(1010885152);
			func_1049(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_1050(-538889627);
			func_1050(-538880323);
			func_1050(-1056767524);
			func_1049(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_1051();
			func_1049(iParam0);
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
			func_1052();
			func_1049(iParam0);
			break;
		case 2019386373:
			func_1050(-664252410);
			func_1050(2109952320);
			func_1049(2019386373);
			break;
		case -664252410:
			func_1050(2019386373);
			func_1050(2109952320);
			func_1049(-664252410);
			break;
		case 2109952320:
			func_1050(2019386373);
			func_1050(-664252410);
			func_1049(2109952320);
			break;
		case -1674179981:
			func_1050(-1835851517);
			func_1050(-1838352012);
			func_1049(-1674179981);
			break;
		case -1835851517:
			func_1050(-1674179981);
			func_1050(-1838352012);
			func_1049(-1835851517);
			break;
		case -1838352012:
			func_1050(-1674179981);
			func_1050(-1835851517);
			func_1049(-1838352012);
			break;
		case -1717960576:
			func_1050(210001842);
			func_1049(-1717960576);
			break;
		case 210001842:
			func_1050(-1717960576);
			func_1049(210001842);
			break;
		case -150493654:
			func_1050(-1271608261);
			func_1050(1846061697);
			func_1050(-1145519186);
			func_1049(-150493654);
			break;
		case -1271608261:
			func_1050(-150493654);
			func_1050(1846061697);
			func_1050(-1145519186);
			func_1049(-1271608261);
			break;
		case 1846061697:
			func_1050(-150493654);
			func_1050(-1271608261);
			func_1050(-1145519186);
			func_1049(1846061697);
			break;
		case -1145519186:
			func_1050(-150493654);
			func_1050(-1271608261);
			func_1050(1846061697);
			func_1049(-1145519186);
			break;
		case 1766284049:
			func_1050(280705402);
			func_1050(1926308480);
			func_1049(1766284049);
			break;
		case 280705402:
			func_1050(1766284049);
			func_1050(1926308480);
			func_1049(280705402);
			break;
		case 1926308480:
			func_1050(1766284049);
			func_1050(280705402);
			func_1049(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_1050(439465264);
				func_1049(1609506757);
			}
			else
			{
				func_1050(1609506757);
				func_1050(439465264);
			}
			break;
		case 439465264:
			if (func_1053(1609506757))
			{
				if (bParam1)
				{
					func_1049(439465264);
				}
				else
				{
					func_1050(439465264);
				}
			}
			break;
		case 1822001510:
			func_1050(-1612662716);
			func_1049(1822001510);
			break;
		case -1612662716:
			func_1050(1822001510);
			func_1049(-1612662716);
			break;
		case 1306158345:
			func_1050(1952610440);
			func_1050(-223469678);
			func_1050(-404698347);
			func_1050(1517904467);
			func_1049(1306158345);
			break;
		case 1952610440:
			func_1050(1306158345);
			func_1050(-223469678);
			func_1050(-404698347);
			func_1050(1517904467);
			func_1049(1952610440);
			break;
		case -223469678:
			func_1050(1306158345);
			func_1050(1952610440);
			func_1050(-404698347);
			func_1050(1517904467);
			func_1049(-223469678);
			break;
		case -404698347:
			func_1050(1306158345);
			func_1050(1952610440);
			func_1050(-223469678);
			func_1050(1517904467);
			func_1049(-404698347);
			break;
		case 1517904467:
			func_1050(1306158345);
			func_1050(1952610440);
			func_1050(-223469678);
			func_1050(-404698347);
			func_1049(1517904467);
			break;
		case 1376646519:
			func_1050(931649776);
			func_1050(-434590080);
			func_1050(1743048395);
			func_1050(449774763);
			func_1049(1376646519);
			break;
		case 931649776:
			func_1050(1376646519);
			func_1050(-434590080);
			func_1050(1743048395);
			func_1050(449774763);
			func_1049(931649776);
			break;
		case -434590080:
			func_1050(1376646519);
			func_1050(931649776);
			func_1050(1743048395);
			func_1050(449774763);
			func_1049(-434590080);
			break;
		case 1743048395:
			func_1050(1376646519);
			func_1050(931649776);
			func_1050(-434590080);
			func_1050(449774763);
			func_1049(1743048395);
			break;
		case 449774763:
			func_1050(1376646519);
			func_1050(931649776);
			func_1050(-434590080);
			func_1050(1743048395);
			func_1049(449774763);
			break;
		case -1414537028:
			func_1050(38162571);
			func_1050(1350391819);
			func_1050(54073871);
			func_1049(-1414537028);
			break;
		case 38162571:
			func_1050(-1414537028);
			func_1050(1350391819);
			func_1050(54073871);
			func_1049(38162571);
			break;
		case 1350391819:
			func_1050(-1414537028);
			func_1050(38162571);
			func_1050(54073871);
			func_1049(1350391819);
			break;
		case 54073871:
			func_1050(-1414537028);
			func_1050(38162571);
			func_1050(1350391819);
			func_1049(54073871);
			break;
		case 198200492:
			func_1049(198200492);
			func_1050(-1124061431);
			func_1050(52706132);
			func_1050(-259123672);
			break;
		case -1124061431:
			func_1050(198200492);
			func_1049(-1124061431);
			func_1050(52706132);
			func_1050(-259123672);
			break;
		case 52706132:
			func_1050(198200492);
			func_1050(-1124061431);
			func_1049(52706132);
			func_1050(-259123672);
			break;
		case -259123672:
			func_1050(198200492);
			func_1050(-1124061431);
			func_1050(52706132);
			func_1049(-259123672);
			break;
		case -919512195:
			func_1049(-919512195);
			func_1050(-1925798111);
			func_1050(420709909);
			func_1050(1703426636);
			break;
		case -1925798111:
			func_1049(-1925798111);
			func_1050(-919512195);
			func_1050(420709909);
			func_1050(1703426636);
			break;
		case 420709909:
			func_1049(420709909);
			func_1050(-919512195);
			func_1050(-1925798111);
			func_1050(1703426636);
			break;
		case 1703426636:
			func_1049(1703426636);
			func_1050(-919512195);
			func_1050(-1925798111);
			func_1050(420709909);
			break;
		case -1223121209:
			func_1049(-1223121209);
			func_1050(630808005);
			break;
		case 630808005:
			func_1049(630808005);
			func_1050(-1223121209);
			break;
		case 1453909576:
			func_1049(1453909576);
			func_1050(1643531967);
			break;
		case 1643531967:
			func_1049(1643531967);
			func_1050(1453909576);
			break;
		case 0:
			func_1049(0);
			func_1050(473295046);
			func_1050(-1738165526);
			break;
		case 473295046:
			func_1049(473295046);
			func_1050(0);
			func_1050(-1738165526);
			break;
		case -1738165526:
			func_1049(-1738165526);
			func_1050(0);
			func_1050(473295046);
			break;
		case 932909855:
			func_1049(932909855);
			func_1050(2051822093);
			break;
		case 2051822093:
			func_1049(2051822093);
			func_1050(932909855);
			break;
		case 405586984:
			func_1049(405586984);
			func_1050(1509509592);
			func_1050(-959357075);
			func_1050(-1311865656);
			break;
		case 1509509592:
			func_1049(1509509592);
			func_1050(405586984);
			func_1050(-959357075);
			func_1050(-1311865656);
			break;
		case -959357075:
			func_1049(-959357075);
			func_1050(1509509592);
			func_1050(405586984);
			func_1050(-1311865656);
			break;
		case -1311865656:
			func_1049(-1311865656);
			func_1050(1509509592);
			func_1050(-959357075);
			func_1050(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_1049(-524145696);
			}
			else
			{
				func_1050(-524145696);
			}
			func_1050(1626481264);
			func_1050(282809459);
			break;
		case 282809459:
			func_1049(282809459);
			func_1050(1626481264);
			func_1050(-524145696);
			break;
		case 1626481264:
			func_1049(1626481264);
			func_1050(-524145696);
			func_1050(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_1049(885203519);
			}
			else
			{
				func_1050(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_1049(-1080627546);
			}
			else
			{
				func_1050(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_1053(iParam0))
				{
					func_1049(iParam0);
				}
			}
			else if (func_1053(iParam0))
			{
				func_1050(iParam0);
			}
			break;
	}
}

void func_788(int iParam0)
{
	if (!func_1054(iParam0))
	{
		func_1056(func_1055(iParam0));
	}
}

int func_789()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1054(COLLECTION::_0x126CBEBBA46693CF(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_790(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_791(iVar9);
	iVar2 = func_791(iVar10);
	iVar3 = func_791(iVar11);
	iVar5 = func_792(iVar9);
	iVar6 = func_792(iVar10);
	iVar7 = func_792(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_791(iVar12);
		iVar8 = func_792(iVar12);
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

int func_791(int iParam0)
{
	int iVar0;

	if (func_25(iParam0, 1, 0))
	{
		iVar0 = func_124(iParam0, 0, 0);
	}
	return iVar0;
}

int func_792(int iParam0)
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

int func_793(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0);
}

void func_794(int iParam0, int iParam1)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, iParam1);
}

int func_795(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_971(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	return uVar5;
}

void func_796(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_795(iParam1, 5) || iParam0 == func_795(iParam1, 6)) || iParam0 == func_795(iParam1, 7)) || iParam0 == func_795(iParam1, 8)) || iParam0 == func_795(iParam1, 9))
	{
		func_786(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_360(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_359(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_797(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 1;
	if ((((iParam0 == func_795(iParam1, 5) || iParam0 == func_795(iParam1, 6)) || iParam0 == func_795(iParam1, 7)) || iParam0 == func_795(iParam1, 8)) || iParam0 == func_795(iParam1, 9))
	{
		if (func_786(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_360(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_359(51, 0, 0, iVar0, func_690(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_360(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_359(51, 0, 0, iVar0, func_690(iParam1, 20), 1, 0);
			}
		}
	}
}

int func_798()
{
	if (func_330(((*Global_1347702)[37 /*49*/])->f_15) && Global_1392388->f_7)
	{
		return 1;
	}
	return 0;
}

void func_799(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
}

void func_800(int iParam0)
{
	if (!func_1057(iParam0))
	{
		COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	}
}

void func_801(int iParam0)
{
	COLLECTION::_0x398FAB9C96A81924(iParam0, 1);
}

float func_802()
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

	if (func_1058())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_506(2);
	}
	if (Global_1347477->f_119)
	{
		return func_506(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1059();
	fVar2 = func_1060();
	fVar3 = func_1061();
	fVar4 = func_1062();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1063()));
	fVar7 = (func_506(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1064(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1065(3, fVar9, fVar9 > 100f);
	return func_510(fVar7, -100f, 100f);
}

float func_803()
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

	if (func_1058())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_506(1);
	}
	if (Global_1347477->f_119)
	{
		return func_506(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1059();
	fVar2 = func_1060();
	fVar3 = func_1061();
	fVar4 = func_1062();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1063()));
	fVar7 = (func_506(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1064(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1065(2, fVar9, fVar9 > 100f);
	return func_510(fVar7, -100f, 100f);
}

float func_804()
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

	if (func_1058())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_506(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1066())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1067())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_506(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1059();
	fVar2 = func_1060();
	fVar3 = func_1061();
	fVar4 = func_1062();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1063()));
	fVar7 = (func_506(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1064(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1065(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_0x0317C947D062854E(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_506(0);
	}
	return func_510(fVar7, -100f, 100f);
}

bool func_805(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

void func_806(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!func_704(iParam0))
	{
		return;
	}
	if (func_394(iParam0))
	{
		return;
	}
	if (!func_1068(iParam0))
	{
		func_1069(iParam0, 1, 0);
	}
	iVar0 = func_1023(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_705(iParam0, 512))
		{
			func_207(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_1070() && !bParam1) && !func_18(0, 0, 1))
	{
		func_201(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_DONE", MISC::_CREATE_VAR_STRING(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1071(iParam0, 6);
	if (bParam2)
	{
		if (!func_18(0, 0, 1))
		{
			func_101(1, 4);
		}
	}
}

int func_807(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_199(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_808(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_413(iParam0, 1) /*3*/] != &Global_1946804->f_57[func_413(iParam0, 1) /*11*/];
}

void func_809(int iParam0, int iParam1)
{
	if (func_190(iParam1, 130796156))
	{
		func_1072(iParam1, 0);
	}
	else if (func_190(iParam1, 930141731))
	{
		func_1072(iParam1, 1);
		func_1073(iParam0);
	}
}

int func_810(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_811(int iParam0)
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

int func_812(int iParam0)
{
	var uVar0;

	if (!func_1074(iParam0, &uVar0, joaat("inventory"), 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

var func_813(var uParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, uParam1);
}

float func_814(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_1075();
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1955569->f_753.f_5[iParam0 /*3*/]);
		case 1:
			return &(Global_1955569->f_866.f_2.f_5[iParam0 /*3*/]);
		default:
			break;
	}
	return -1f;
}

int func_815(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (iParam5 == 2)
	{
		iParam5 = func_1075();
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
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
		func_1076(iParam0, 7000, iParam5);
	}
	if (fParam1 > 100f)
	{
		fParam1 = 100f;
	}
	else if (fParam1 < 0f)
	{
		fParam1 = 0f;
	}
	func_1077(iVar0, iParam0, fParam1);
	func_1078(iParam0, fParam1, bParam4, iParam5);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iVar0, func_823(iParam0), BUILTIN::CEIL(fParam1));
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_816(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_531(*iParam0);
	iVar1 = func_532(*iParam0);
	iVar2 = func_533(*iParam0);
	iVar3 = func_534(*iParam0);
	iVar4 = func_535(*iParam0);
	iVar5 = func_536(*iParam0);
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
		iVar7 = func_537(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_538(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_817(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_1075();
	}
	switch (iParam1)
	{
		case 0:
			return (Global_1955569->f_753.f_5[iParam0 /*3*/])->f_2;
		case 1:
			return (Global_1955569->f_866.f_2.f_5[iParam0 /*3*/])->f_2;
		default:
			break;
	}
	return -1;
}

int func_818(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_1075();
	}
	switch (iParam1)
	{
		case 0:
			return (Global_1955569->f_753.f_5[iParam0 /*3*/])->f_1;
		case 1:
			return (Global_1955569->f_866.f_2.f_5[iParam0 /*3*/])->f_1;
		default:
			break;
	}
	return -15;
}

bool func_819(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1079(iParam1) || !func_1079(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_820(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_1075();
	}
	switch (iParam2)
	{
		case 0:
			(Global_1955569->f_753.f_5[iParam0 /*3*/])->f_2 = iParam1;
			break;
		case 1:
			(Global_1955569->f_866.f_2.f_5[iParam0 /*3*/])->f_2 = iParam1;
			break;
		default:
			break;
	}
}

void func_821(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_1075();
	}
	switch (iParam2)
	{
		case 0:
			(Global_1955569->f_753.f_5[iParam0 /*3*/])->f_1 = iParam1;
			break;
		case 1:
			(Global_1955569->f_866.f_2.f_5[iParam0 /*3*/])->f_1 = iParam1;
			break;
		default:
			break;
	}
}

int func_822(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0 + 100) / 200f);
	return BUILTIN::CEIL((100f * fVar0));
}

int func_823(int iParam0)
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

int func_824(int iParam0)
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

void func_825(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_1080(iParam0, 0, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[0]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[0]), bParam2);
}

float func_826(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0) / 100f);
	return ((fVar0 * 200f) - 100f);
}

int func_827(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 87;
		case 1:
			return 85;
		case 2:
			return 86;
		default:
			break;
	}
	return -1;
}

char* func_828(int iParam0)
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

bool func_829(int iParam0, bool bParam1)
{
	return func_819(func_147(), iParam0, bParam1);
}

void func_830(int iParam0, bool bParam1, bool bParam2, char* sParam3)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_8, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_7, bParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_9, sParam3);
}

void func_831(bool bParam0, bool bParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_1080(0, 1, bParam0, bParam1);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_12[1]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_16[1]), bParam2);
	if (bParam0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[1]), false);
	}
	else if (bParam1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[1]), "rpg_cold");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[1]), "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[1]), true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[1]), "rpg_hot");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[1]), "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[1]), true);
	}
}

int func_832(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_1075();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1955569->f_850;
		case 1:
			return Global_1955569->f_866.f_115;
		default:
			break;
	}
	return -1;
}

void func_833(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = PLAYER::PLAYER_PED_ID();
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

int func_834(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_1075();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1955569->f_850.f_2;
		case 1:
			return Global_1955569->f_866.f_115.f_2;
		default:
			break;
	}
	return -1;
}

void func_835(float fParam0)
{
	int iVar0;

	if (fParam0 == 0f)
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	PED::_CHARGE_PED_STAMINA(iVar0, fParam0);
}

int func_836(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_1075();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1955569->f_850.f_1;
		case 1:
			return Global_1955569->f_866.f_115.f_1;
		default:
			break;
	}
	return -1;
}

void func_837(float fParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if (PLAYER::_0xB16223CB7DA965F0(iVar0) && fParam0 > 0f)
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
		PLAYER::_0x51345AE20F22C261(iVar0, fParam0, 0, 0, 0);
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

int func_838(int iParam0)
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

void func_839(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_70(iParam0))
	{
		return;
	}
	iVar0 = func_163(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(2, sParam1, sParam2));
}

bool func_840(int iParam0, int iParam1)
{
	return func_1081(CLOCK::GET_CLOCK_HOURS(), iParam0, iParam1);
}

int func_841()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return 1;
	}
	return 0;
}

int func_842()
{
	var uVar0;
	var uVar1;
	float fVar2;
	var uVar3;

	MISC::_GET_WEATHER_TYPE_TRANSITION(&uVar0, &uVar1, &fVar2);
	if (fVar2 < 0.75f)
	{
		uVar3 = uVar0;
	}
	else
	{
		uVar3 = uVar1;
	}
	return uVar3;
}

int func_843(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_844(int iParam0, int iParam1)
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

void func_845(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_846(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_532(*iParam0);
	iVar1 = func_531(*iParam0);
	if (iParam1 < 1 || iParam1 > func_537(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_847(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_848(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_849(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

void func_850(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_63))
	{
		uParam0->f_63 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_explosive", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_63);
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_65))
	{
		uParam0->f_65 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_split", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_65);
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_66))
	{
		uParam0->f_66 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_modify_arrows", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_66);
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_67))
	{
		uParam0->f_67 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_arrows", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_67);
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_68))
	{
		uParam0->f_68 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_throwingknives_improved", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_68);
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_69))
	{
		uParam0->f_69 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_tomahawk", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_69);
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_70))
	{
		uParam0->f_70 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_poison_throwingknives", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_70);
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_71))
	{
		uParam0->f_71 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_fire_bottle", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_71);
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_72))
	{
		uParam0->f_72 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_volatile_dynamite", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_72);
	}
}

bool func_851(char* sParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(sParam0);
}

int func_852(var uParam0, var uParam1)
{
	if (ANIMSCENE::_0x25557E324489393C(*uParam1))
	{
		if (!ANIMSCENE::_0x477122B8D05E7968(*uParam1, 1, 0))
		{
			if (ANIMSCENE::_0x59606519FF9D3EC2(*uParam1, 1))
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
		func_850(uParam0);
		return 0;
	}
	return 1;
}

void func_853(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;

	iVar0 = func_591(iParam0);
	iVar1 = func_413(iVar0, 1);
	if (iVar1 == 39)
	{
		return;
	}
	if (func_1082(iParam0) && func_408(iParam0))
	{
		iParam1 |= 64;
	}
	if (((iVar0 == 1108822547 && func_405(32768)) || &Global_1946804->f_1497.f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/]) && iParam0 != &Global_1946804->f_1497.f_1[iVar1 /*3*/])
	{
		if (func_1082(&(Global_1946804->f_1497.f_1[iVar1 /*3*/])) && func_408(&(Global_1946804->f_1497.f_1[iVar1 /*3*/])))
		{
			iParam1 |= 32;
		}
		if ((Global_1946804->f_57[iVar1 /*11*/])->f_1 > 1)
		{
			iParam1 |= 16;
		}
		iVar2 = 0;
		switch (func_199(iParam0))
		{
			case 81053684:
				if (func_593(-525676072, &uVar3))
				{
					iVar2 = func_413(func_912(-525676072), 1);
					if (iVar2 == 39)
					{
					}
					else
					{
						Global_1946804->f_2377[iVar2 /*2*/] = &Global_1946804->f_57[iVar2 /*11*/];
						Jump @434; //curOff = 294
						if (func_405(32768))
						{
							func_735(func_733(iVar1, 1));
						}
						if (func_405(32768) || (func_593(-2061583405, &iVar4) && !func_408(iVar4)))
						{
							PED::KNOCK_OFF_PED_PROP(Global_35, false, true, false, true);
						}
						if (func_593(81053684, &iVar4))
						{
							iVar2 = func_413(func_912(81053684), 1);
							if (iVar2 == 39)
							{
							}
							else
							{
								Global_1946804->f_2377[iVar2 /*2*/] = &Global_1946804->f_57[iVar2 /*11*/];
							}
							Global_1946804->f_2377[iVar1 /*2*/] = iParam0;
							func_1083(iVar0, iParam1, 6);
						}
					}
				}
		}
	}

int func_854(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
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

	if (!func_98(0))
	{
		return 0;
	}
	if (iParam4 != 0)
	{
		bParam3 = false;
	}
	if (!func_918(iParam0, 1, iParam1, &iVar31, &uVar35, bParam3, iParam4, 1))
	{
		iVar33 = iVar31;
		return 0;
	}
	if (func_902(iParam0, iParam1, &Var0, &iVar34, 1, 0))
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			iVar33 = &Var0[iVar36 /*2*/];
			if (func_121(iVar33, 0))
			{
				if (iVar33 == 2084597891)
				{
					func_1084((Var0[iVar36 /*2*/])->f_1, 0, 0, bParam2, 1);
				}
				else if (bParam3)
				{
					if (func_321(iVar33) || func_639(iVar33))
					{
						if (!func_25(iVar33, (Var0[iVar36 /*2*/])->f_1, 0))
						{
							iVar37 = func_1085(7, iVar33, (Var0[iVar36 /*2*/])->f_1);
						}
						func_184(iVar33, iVar37, 562618531, 0, 0);
						(Var0[iVar36 /*2*/])->f_1 = ((Var0[iVar36 /*2*/])->f_1 - iVar37);
						if ((Var0[iVar36 /*2*/])->f_1 > 0)
						{
							if (!func_25(iVar33, (Var0[iVar36 /*2*/])->f_1, 0))
							{
								func_1086(iVar33, (Var0[iVar36 /*2*/])->f_1);
							}
							if (func_25(iVar33, (Var0[iVar36 /*2*/])->f_1, 0))
							{
								func_226(iVar33, (Var0[iVar36 /*2*/])->f_1, bParam2, -142743235, 0);
							}
						}
					}
					else
					{
						if (func_1087(iVar33) > 0)
						{
							func_1088(iVar33);
							(Var0[iVar36 /*2*/])->f_1 = ((Var0[iVar36 /*2*/])->f_1 - 1);
						}
						if ((Var0[iVar36 /*2*/])->f_1 > 0)
						{
							if (func_1089(7, iVar33) > 0)
							{
								func_1090(7, iVar33, (Var0[iVar36 /*2*/])->f_1);
								(Var0[iVar36 /*2*/])->f_1 = ((Var0[iVar36 /*2*/])->f_1 - func_1090(7, iVar33, (Var0[iVar36 /*2*/])->f_1));
							}
						}
						if ((Var0[iVar36 /*2*/])->f_1 > 0)
						{
							func_226(iVar33, (Var0[iVar36 /*2*/])->f_1, bParam2, 562618531, 0);
						}
					}
				}
				else if (iParam4 == 0)
				{
					if (func_321(iVar33) || func_639(iVar33))
					{
						if (!func_25(iVar33, (Var0[iVar36 /*2*/])->f_1, 0))
						{
							func_1086(iVar33, (Var0[iVar36 /*2*/])->f_1);
						}
					}
					func_226(iVar33, (Var0[iVar36 /*2*/])->f_1, bParam2, 562618531, 0);
				}
				else
				{
					func_1091(iVar33, iParam4, (Var0[iVar36 /*2*/])->f_1, 562618531);
				}
				iVar38 = func_524(&iVar33);
				if (func_997(iVar38))
				{
					iVar39 = func_838(iVar38);
					func_251(func_260(-333926856, iVar39), (Var0[iVar36 /*2*/])->f_1);
				}
			}
			iVar36++;
		}
		return 1;
	}
	return 0;
}

int func_855(int iParam0)
{
	struct<5> Var0;

	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_4;
}

int func_856(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_296(iParam0, 0, 0) };
	return func_620(iParam0, &Var0, 0, bParam1);
}

int func_857(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	bool bVar33;
	int iVar34;
	int iVar35;
	int iVar36;

	if (!func_902(iParam0, iParam1, &Var0, &iVar31, bParam3, 0))
	{
		return 0;
	}
	bVar33 = func_98(0);
	iVar34 = -1;
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32 /*2*/] == 0)
		{
			Jump @256; //curOff = 64
		}
		else
		{
			iVar35 = func_124(&(Var0[iVar32 /*2*/]), 0, 0);
			if (bVar33)
			{
				if (func_321(&(Var0[iVar32 /*2*/])) || func_639(&(Var0[iVar32 /*2*/])))
				{
					iVar35 = (iVar35 + func_1092(&(Var0[iVar32 /*2*/]), 0));
					if (bParam2)
					{
						iVar36 = 0;
						iVar35 = (iVar35 + func_1093(7, &(Var0[iVar32 /*2*/]), &iVar36));
					}
				}
				else if (bParam2)
				{
					iVar35 = (iVar35 + (func_1089(7, &(Var0[iVar32 /*2*/])) + func_1087(&(Var0[iVar32 /*2*/]))));
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

int func_858(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_859(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (!func_1094(471747275))
	{
		Global_40.f_4283.f_307.f_1 = (Global_40.f_4283.f_307.f_1 + iParam0);
		if (Global_40.f_4283.f_307.f_1 >= 3)
		{
			func_1095(471747275);
		}
	}
}

int func_860(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1224226)
	{
		if (&Global_1224226->f_1[iVar0 /*9*/] == iParam0)
		{
			return (Global_1224226->f_1[iVar0 /*9*/])->f_1;
		}
		iVar0++;
	}
	return 0;
}

bool func_861(var uParam0)
{
	return uParam0->f_18;
}

void func_862(var uParam0)
{
	uParam0->f_18 = 0;
}

void func_863(var uParam0)
{
	func_133(1);
	func_45(uParam0, 4);
}

int func_864(var uParam0)
{
	if (uParam0->f_54 == 0)
	{
		Global_1911914->f_1576 = 0;
		uParam0->f_55 = 0;
		func_1096(uParam0, 600942249);
		uParam0->f_54++;
		return 0;
	}
	else if (uParam0->f_54 == 1)
	{
		func_1096(uParam0, -257768755);
		uParam0->f_54++;
		return 0;
	}
	else
	{
		func_1096(uParam0, -214678071);
		uParam0->f_54 = 0;
	}
	uParam0->f_55 = 0;
	return 1;
}

int func_865(var uParam0)
{
	int iVar0;
	char cVar1[16];

	uParam0->f_59 = 0;
	uParam0->f_60 = 0;
	uParam0->f_39 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "CraftingDatastore");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_39, "filter", func_1097(uParam0->f_52));
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_39, "filterCount", 5 + 1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_39, "filterIndex", uParam0->f_52);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_39, "tipText", "");
	uParam0->f_51 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_39, "recipes_lines");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_39, "variantVisible", false);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_39, "variantText", " ");
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_39, "variantCount", 0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_39, "variantIndex", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_39, "ShowRpgDescription", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_39, "ShowRpgPlayer", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_39, "ShowRpgHorse", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_39, "RPGDescription", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_39, "ShowIngredients", true);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&cVar1, "ingredient", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		func_1098(uParam0->f_41[iVar0], &cVar1, uParam0);
		StringCopy(&cVar1, "tip", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		uParam0->f_46[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_39, &cVar1);
		StringCopy(&cVar1, "Text", 16);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_46[iVar0]), &cVar1, "");
		StringCopy(&cVar1, "Enabled", 16);
		DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_46[iVar0]), &cVar1, 0);
		iVar0++;
	}
	return 1;
}

int func_866(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	bVar2 = func_551();
	iVar0 = uParam0->f_55;
	while (iVar0 <= (Global_1911914->f_1576 - 1))
	{
		if (func_121(((*Global_1911914)[iVar0 /*9*/])->f_6, 0))
		{
			func_1099(uParam0, 0, iVar0, bVar2, 1, 0);
			if (iVar1 >= 30)
			{
				uParam0->f_55 = iVar0 + 1;
				return 0;
			}
			iVar1++;
		}
		iVar0++;
	}
	uParam0->f_55 = 0;
	if (uParam0->f_60 == 0)
	{
		uParam0->f_57 = 0;
	}
	uParam0->f_56 = 0;
	return 1;
}

void func_867(var uParam0)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_40))
	{
		uParam0->f_40 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_39, "recipes");
	}
	else
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_40);
	}
	uParam0->f_76 = 600942249;
	uParam0->f_75 = 0;
	uParam0->f_74 = 0;
}

int func_868(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	bVar2 = func_551();
	iVar0 = uParam0->f_55;
	while (iVar0 <= (Global_1911914->f_1576 - 1))
	{
		if ((uParam0->f_57 && ((*Global_1911914)[iVar0 /*9*/])->f_2) || !uParam0->f_57)
		{
			if (Global_1911914->f_1585 != 0)
			{
				bVar3 = func_190(((*Global_1911914)[iVar0 /*9*/])->f_6, Global_1911914->f_1585);
				if (uParam0->f_81 == bVar3)
				{
				}
				else
				{
					func_1099(uParam0, 1, iVar0, bVar2, 0, bParam1);
					if (iVar1 >= 50)
					{
						uParam0->f_55 = iVar0 + 1;
						return 0;
					}
					iVar1++;
				}
				iVar0++;
				uParam0->f_55 = 0;
				if (!uParam0->f_81 && Global_1911914->f_1585 != 0)
				{
					uParam0->f_81 = 1;
					return 0;
				}
				uParam0->f_56 = 0;
				uParam0->f_81 = 0;
				return 1;
			}
		}
	}

int func_869(var uParam0, bool bParam1)
{
	int iVar0;

	uParam0->f_58 = 1;
	if (bParam1 && UIAPPS::_IS_APP_ACTIVE(-1624772174))
	{
		if (UISTATEMACHINE::_UISTATEMACHINE_REQUEST_TRANSITION(-1624772174, 1014850361))
		{
			func_294(1);
			func_47(8);
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
			func_47(8);
			func_294(1);
			func_232(0, -100);
			func_232(2, -100);
			func_232(1, -100);
			return 1;
		}
	}
	return 0;
}

int func_870(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	bVar2 = func_551();
	iVar0 = uParam0->f_55;
	while (iVar0 <= (Global_1911914->f_1576 - 1))
	{
		func_1100(uParam0, iVar0, bVar2, 0, 1, 0, 1);
		if (iVar1 >= 50)
		{
			uParam0->f_55 = iVar0 + 1;
			return 0;
		}
		iVar1++;
		iVar0++;
	}
	uParam0->f_61 = 0;
	uParam0->f_55 = 0;
	return 1;
}

void func_871(bool bParam0)
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
	iVar0 = func_1101(Global_35);
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

void func_872(var uParam0, bool bParam1)
{
	int iVar0;

	if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_9))
	{
		iVar0 = TASK::_GET_ENTITY_SCENARIO_POINT_IS_ATTACHED_TO(uParam0->f_9);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		ENTITY::SET_ENTITY_COLLISION(iVar0, bParam1, false);
	}
}

void func_873(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "eOutputItem");
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "eCost");
	iVar2 = iVar0;
	ATTRIBUTE::_0xD962F8579D702DB5();
	if (func_121(iVar2, 0) && func_259(iVar2, uParam0->f_52))
	{
		uParam0->f_37 = -1;
		uParam0->f_20 = 0;
		uParam0->f_77 = iVar2;
		uParam0->f_78 = iVar1;
		func_144((*uParam0)[1], 1, 1);
		iVar3 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iNumCostVariants");
		if (iVar3 > 1)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "variantVisible", 1);
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_39, "variantText", MISC::_CREATE_VAR_STRING(0, uParam0->f_77));
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_39, "variantCount", iVar3);
			iVar4 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iCurCostVariant");
			iVar5 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iIndex");
			if (iVar5 >= 0 && iVar5 < &Global_1911914)
			{
				iVar6 = ((*Global_1911914)[iVar5 /*9*/])->f_8;
			}
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_39, "variantIndex", (iVar4 + 1 - iVar6));
			uParam0->f_79 = 1;
			func_84(uParam0[5], 1, 1);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "variantVisible", 0);
			uParam0->f_79 = 0;
			func_84(uParam0[5], 0, 1);
		}
		uParam0->f_53 = BUILTIN::ROUND((ENTITY::GET_ANIM_DURATION(func_1102(uParam0->f_77), func_1103(uParam0->f_77)) * 1000f));
		uParam0->f_80 = DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*uParam1, "bFireCrafting");
		uParam0->f_73 = *uParam1;
		(*uParam0)[1] = func_81("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		func_878(uParam0, uParam0->f_77, uParam0->f_78);
		func_83(uParam0[1], 11, 1, 1);
		if (Global_1911914->f_1579 || !func_917(uParam0->f_77, uParam0->f_78, 1))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_39, "RPGDescription", func_1104(iVar2));
			func_883(uParam0, 0);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_39, "RPGDescription", 0);
		}
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgDescription"))
		{
			if (Global_1911914->f_1579 || !func_917(uParam0->f_77, uParam0->f_78, 1))
			{
				func_1105(uParam0);
			}
		}
	}
}

char* func_874(var uParam0)
{
	if (uParam0->f_57)
	{
		return "CAMP_REC_ALL";
	}
	return "CAMP_REC_AVL";
}

int func_875(char* sParam0, int iParam1, int iParam2, int iParam3)
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
	while (iVar0 < 48)
	{
		if (func_176(iVar0, 2))
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
		func_177(iVar1, iParam1, sParam0, 0, 3, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 0, iParam2, joaat("SHORT_TIMED_EVENT"), 0);
		return iVar1;
	}
	return 0;
}

void func_876(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_70(iParam0))
	{
		return;
	}
	iVar0 = func_163(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ALLOWED_ACTION(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1);
}

void func_877(var uParam0)
{
	int iVar0;

	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_51);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_41[iVar0]), "visible", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_41[iVar0]), "inUse", 0);
		iVar0++;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_39, "tipText", "");
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "variantVisible", 0);
}

void func_878(var uParam0, int iParam1, int iParam2)
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

	if (!func_121(iParam1, 0))
	{
		if (func_70(uParam0[1]))
		{
			func_84(uParam0[1], 0, 1);
		}
		return;
	}
	bVar2 = func_551();
	bVar3 = true;
	bVar4 = false;
	if (!Global_1911914->f_1579 && func_917(iParam1, iParam2, 1))
	{
		bVar4 = true;
		bVar3 = false;
	}
	else if (!func_610(iParam1, iParam2, &uVar1, &uVar0, &iVar5, 0, bVar2, 0, 1))
	{
		bVar3 = false;
	}
	else if (func_23() == -1)
	{
		if (func_56(4096))
		{
			if (func_372(iParam1, 1697966752) != 337650881)
			{
				bVar3 = false;
			}
		}
		else if (func_56(8192))
		{
			if (iParam1 != 1831763320)
			{
				bVar3 = false;
			}
		}
	}
	if (bVar3)
	{
		if (((func_560(iParam1, 1, 0) || ((!uParam0->f_83 || uParam0->f_84 > 0) && func_372(iParam1, -1636519629) == -701492487)) || (!uParam0->f_31 && ((uParam0->f_80 || iParam2 == -214678071) || iParam2 == 278772510))) || (!uParam0->f_32 && iParam2 == 278772510))
		{
			bVar3 = false;
		}
		else if (uParam0->f_37 == -1)
		{
			iVar6 = func_124(iParam1, 0, 0);
			iVar7 = func_856(iParam1, 0);
			iVar8 = func_857(iParam1, iParam2, bVar2, 0);
			if (iVar7 == -1)
			{
				iVar7 = iVar8;
			}
			else
			{
				iVar7 = (iVar7 - iVar6);
			}
			uParam0->f_37 = func_858(iVar7, iVar8);
		}
	}
	if (func_70(uParam0[1]))
	{
		if (func_317(iParam1))
		{
			func_157(uParam0[1], "CAMP_REC_COOK", 1);
		}
		else if (func_372(iParam1, -1636519629) == -701492487)
		{
			func_157(uParam0[1], "CAMP_REC_BREW", 1);
		}
		else
		{
			func_157(uParam0[1], "CAMP_REC_MAKE", 1);
		}
		func_84(uParam0[1], bVar3, 1);
	}
	func_1106(iParam1, iParam2, uParam0, iVar5, bVar4);
	if (func_70(uParam0[6]))
	{
		func_84(uParam0[6], !bVar4, 1);
	}
}

void func_879(char* sParam0, char* sParam1)
{
	int iVar0;

	iVar0 = AUDIO::GET_SOUND_ID();
	if (iVar0 != -1)
	{
		AUDIO::_0xCE5D0FFE83939AF1(iVar0, sParam0, sParam1, 1);
		(*Global_1956586)[Global_1956586->f_25] = iVar0;
		Global_1956586->f_25 = (Global_1956586->f_25 + 1 % 24);
	}
}

void func_880(var uParam0)
{
	int iVar0;
	int iVar1;

	if (func_372(uParam0->f_77, -1636519629) == -701492487)
	{
		func_131(uParam0, 0);
	}
	else
	{
		func_131(uParam0, 1);
	}
	func_144((*uParam0)[1], 1, 1);
	func_144((*uParam0)[5], 1, 1);
	func_144((*uParam0)[6], 1, 1);
	func_144((*uParam0)[3], 1, 1);
	uParam0->f_36 = 1;
	if (!uParam0->f_80 && !func_317(uParam0->f_77))
	{
		func_47(131072);
		iVar0 = func_372(uParam0->f_77, -1636519629);
		iVar1 = func_889(uParam0, iVar0);
		if (iVar1 != 0)
		{
			uParam0->f_36 = 0;
			ANIMSCENE::RESET_ANIM_SCENE(iVar1, "pl_craft");
			ANIMSCENE::LOAD_ANIM_SCENE(iVar1);
			uParam0->f_88 = 0;
			if (iVar0 != -1610298873)
			{
				if (iVar0 == -842117252)
				{
					uParam0->f_88 = -467664954;
				}
				else if (func_190(uParam0->f_77, -1588156645))
				{
					uParam0->f_88 = func_855(func_252(uParam0->f_77, 0));
				}
				else if (func_190(uParam0->f_77, 457423347))
				{
					uParam0->f_88 = -193645029;
				}
				else if (func_190(uParam0->f_77, -1846429632))
				{
					uParam0->f_88 = 2132464141;
				}
				else if (func_190(uParam0->f_77, -1067199465))
				{
					uParam0->f_88 = 1186037675;
				}
				else
				{
					uParam0->f_88 = func_855(uParam0->f_77);
				}
			}
			if (uParam0->f_88 != 0)
			{
				STREAMING::REQUEST_MODEL(uParam0->f_88, false);
			}
		}
		func_157(uParam0[2], "CAMP_REC_BACK", 1);
		func_82(uParam0[2], -1067771379, 0, 1);
		func_84(uParam0[2], 0, 1);
		func_331(uParam0[2], 0, 1);
		(*uParam0)[4] = func_81("CAMP_REC_BACK", joaat("INPUT_GAME_MENU_CANCEL"), 1, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("MEDIUM_TIMED_EVENT"), 0);
		func_332((*uParam0)[4], "INPUT_PCRAFT_EXIT");
		func_82(uParam0[4], -1067771379, 0, 1);
		func_84(uParam0[4], 0, 1);
		func_83(uParam0[4], 19, 1, 1);
		func_83(uParam0[4], 20, 1, 1);
		func_83(uParam0[4], 13, 1, 1);
		func_83(uParam0[2], 13, 1, 1);
		if (func_70(uParam0[2]))
		{
			func_82(uParam0[2], -1067771379, 0, 1);
		}
		func_45(uParam0, 12);
	}
	else
	{
		func_45(uParam0, 11);
	}
}

bool func_881(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_70(iParam0))
	{
		return false;
	}
	iVar0 = func_163(iParam0);
	return HUD::_UIPROMPT_HAS_STANDARD_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1);
}

void func_882(var uParam0, bool bParam1)
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
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_73))
	{
		iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_73, "iCurCostVariant");
		iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_73, "iNumCostVariants");
		bVar2 = false;
		if (uParam0->f_78 == -214678071 || uParam0->f_78 == 278772510)
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
				Var5 = { func_901(-1591664384, -1591664384, 0, 0, -214678071, 0, -1, func_372(uParam0->f_77, 1697966752), 0) };
				if (func_1107(Var5, &iVar3, &iVar4, 0))
				{
					if (iVar4 > 0)
					{
						uParam0->f_78 = -214678071;
						uParam0->f_77 = func_1108(0, iVar3);
						bVar2 = true;
					}
					func_1109(iVar3);
				}
			}
			else
			{
				Var5 = { func_901(-1591664384, -1591664384, 0, 0, 278772510, 0, -1, func_372(uParam0->f_77, 1697966752), 0) };
				if (func_1107(Var5, &iVar3, &iVar4, 0))
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
							iVar17 = func_1108(iVar16, iVar3);
							if (func_190(iVar17, iVar15))
							{
								uParam0->f_78 = 278772510;
								uParam0->f_77 = iVar17;
								bVar2 = true;
							}
							else
							{
								iVar16++;
							}
						}
					}
					func_1109(iVar3);
				}
			}
		}
		else
		{
			iVar18 = ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(uParam0->f_77);
			Var19.f_4 = 15;
			Var19.f_36 = 10;
			while (((Var19.f_2 != 1644203656 || Var19 == -489628648) || (!Global_1911914->f_1579 && func_917(uParam0->f_77, Var19, 1))) && iVar66 < iVar18)
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
				if (ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COST(uParam0->f_77, iVar0, &Var19))
				{
				}
			}
			uParam0->f_78 = Var19;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_73, "eCost", uParam0->f_78);
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_73, "eOutputItem", uParam0->f_77);
		iVar67 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_73, "iIndex");
		if (iVar67 >= 0 && iVar67 < &Global_1911914)
		{
			iVar68 = ((*Global_1911914)[iVar67 /*9*/])->f_8;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_73, "iCurCostVariant", iVar0);
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_39, "variantIndex", (iVar0 + 1 - iVar68));
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_39, "variantText", MISC::_CREATE_VAR_STRING(0, uParam0->f_77));
		uParam0->f_37 = -1;
		uParam0->f_20 = 0;
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgDescription"))
		{
			ATTRIBUTE::_0x7E2C766ADB2C5F1A(uParam0->f_77, 1);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_39, "RPGDescription", func_1104(uParam0->f_77));
		func_1100(uParam0, -1, func_551(), uParam0->f_73, 0, bVar2, 0);
		func_878(uParam0, uParam0->f_77, uParam0->f_78);
	}
}

void func_883(var uParam0, bool bParam1)
{
	char* sVar0;

	if (bParam1)
	{
		uParam0->f_82 = !uParam0->f_82;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgDescription", uParam0->f_82);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowIngredients", !uParam0->f_82);
	if (!uParam0->f_82)
	{
		func_157(uParam0[6], "INFO", 1);
		ATTRIBUTE::_0xD962F8579D702DB5();
		func_1110(uParam0);
	}
	else
	{
		func_157(uParam0[6], "INGREDIENTS", 1);
		func_1105(uParam0);
	}
	if (uParam0->f_78 == -214678071)
	{
		if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_73, "enabled") == 1)
		{
			if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_73, "iNumCostVariants") <= 1 && uParam0->f_82)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_39, "tipText", MISC::_CREATE_VAR_STRING(2, "CAMP_MEAT_POOR"));
			}
			else
			{
				sVar0 = func_857(uParam0->f_77, uParam0->f_78, func_551(), 0);
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_39, "tipText", MISC::_CREATE_VAR_STRING(2, "COOK_ING_HAVE", sVar0));
			}
		}
	}
}

void func_884(var uParam0)
{
	ATTRIBUTE::_0xD962F8579D702DB5();
	func_1111(uParam0);
	func_877(uParam0);
	func_1110(uParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgDescription", 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowIngredients", 0);
	uParam0->f_77 = 0;
	uParam0->f_78 = 0;
	func_878(uParam0, 0, 0);
	func_45(uParam0, 9);
}

void func_885(var uParam0, int iParam1)
{
	func_877(uParam0);
	func_1110(uParam0);
	func_873(uParam0, &(iParam1->f_3));
}

void func_886(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_372(uParam0->f_77, -1636519629);
	if (iVar0 == 414472632)
	{
		uParam0->f_53 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_85))
		{
			iVar1 = func_1112(uParam0->f_77);
			if (iVar1 != 0)
			{
				uParam0->f_85 = OBJECT::CREATE_OBJECT(iVar1, Global_36, true, true, false, false, false);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_85, false, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_85, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0, 0);
			}
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_63, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_63);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_63, "pl_craft", true);
	}
	else if (iVar0 == -1136843638)
	{
		uParam0->f_53 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_66, "arrow", uParam0->f_86, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_66, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_66);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_66, "pl_craft", true);
	}
	else if (iVar0 == 786205940)
	{
		uParam0->f_53 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_67, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_67);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_67, "pl_craft", true);
	}
	else if (iVar0 == -715814988)
	{
		uParam0->f_53 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_65, "player", Global_35, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_85))
		{
			iVar2 = func_1112(uParam0->f_77);
			if (iVar2 != 0)
			{
				uParam0->f_85 = OBJECT::CREATE_OBJECT(iVar2, Global_36, true, true, false, false, false);
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_85, false);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_85, false, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_85, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), func_1113(uParam0->f_77), 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0, 0);
			}
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_65, "bullet", uParam0->f_85, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_65);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_65, "pl_craft", true);
	}
	else if (iVar0 == -732326901)
	{
		uParam0->f_53 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
		{
			uParam0->f_86 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("weapon_thrown_throwing_knives"), 1, Global_36, 1, 1065353216);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_86, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_86, false, false);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_68, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_68);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_68, "pl_craft", true);
	}
	else if (iVar0 == -1141771998)
	{
		uParam0->f_53 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
		{
			uParam0->f_86 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("weapon_thrown_tomahawk"), 1, Global_36, 1, 1065353216);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_86, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_86, false, false);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_69, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_69);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_69, "pl_craft", true);
	}
	else if (iVar0 == 364689687)
	{
		uParam0->f_53 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
		{
			uParam0->f_86 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("weapon_thrown_throwing_knives"), 1, Global_36, 1, 1065353216);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_86, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_86, false, false);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_87))
		{
			uParam0->f_87 = OBJECT::CREATE_OBJECT(joaat("p_cs_rag01x"), Global_36, true, true, false, false, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_87, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_87, false, false);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_70, "RAG", uParam0->f_87, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_70, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_70);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_70, "pl_craft", true);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_69, "pl_craft", true);
	}
	else if (iVar0 == -842117252)
	{
		uParam0->f_53 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_71, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_71);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_71, "pl_craft", true);
	}
	else if (iVar0 == -1610298873)
	{
		uParam0->f_53 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_72, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_72);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_72, "pl_craft", true);
	}
	else
	{
		uParam0->f_53 = BUILTIN::ROUND((ENTITY::GET_ANIM_DURATION(func_1102(uParam0->f_77), func_1103(uParam0->f_77)) * 1000f));
		func_31(&(uParam0->f_89));
		TASK::TASK_PLAY_ANIM(Global_35, func_1102(uParam0->f_77), func_1103(uParam0->f_77), 1090519040, -1056964608, -1, 67108880, 0, 0, 4096, 0, "Satchel_Only_filter", 0);
	}
}

void func_887(var uParam0, bool bParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_70(uParam0[iVar0]))
		{
			iVar1 = 0;
			while (iVar1 < *uParam2)
			{
				if (func_70(uParam2[iVar1]))
				{
					if (uParam0[iVar0] == uParam2[iVar1])
					{
					}
				}
				iVar1++;
			}
			func_84(uParam0[iVar0], bParam1, 1);
		}
		iVar0++;
	}
}

int func_888(int iParam0)
{
	if ((((((((iParam0 == -715814988 || iParam0 == -1136843638) || iParam0 == -732326901) || iParam0 == 786205940) || iParam0 == -1141771998) || iParam0 == 364689687) || iParam0 == 414472632) || iParam0 == -842117252) || iParam0 == -1610298873)
	{
		return 1;
	}
	return 0;
}

int func_889(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case -715814988:
			return uParam0->f_65;
		case -732326901:
			return uParam0->f_68;
		case -1136843638:
			return uParam0->f_66;
		case 786205940:
			return uParam0->f_67;
		case -1141771998:
			return uParam0->f_69;
		case 364689687:
			return uParam0->f_70;
		case 414472632:
			return uParam0->f_63;
		case -842117252:
			return uParam0->f_71;
		case -1610298873:
			return uParam0->f_72;
		default:
			break;
	}
	return 0;
}

void func_890(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	uParam0->f_55 = 0;
	func_47(262144);
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_86));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_85))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_85));
	}
	iVar0 = func_889(uParam0, iParam1);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(iVar0, "bStopLoop", true, false);
	if (!func_66(128))
	{
		func_84(uParam0[2], 1, 1);
		func_84(uParam0[4], 1, 1);
	}
	func_331(uParam0[2], 0, 1);
	func_331(uParam0[4], 1, 1);
	func_559(uParam0[1], 1);
	func_144((*uParam0)[1], 1, 1);
	(*uParam0)[1] = func_81("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, uParam0->f_53, uParam0->f_53 + 1, 1, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	func_83(uParam0[1], 11, 1, 1);
	func_83(uParam0[1], 19, 1, 1);
	func_82(uParam0[1], -1067771379, 0, 1);
	func_84(uParam0[1], bParam2, 1);
	func_45(uParam0, 13);
}

int func_891(int iParam0)
{
	int iVar0;

	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_199(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

int func_892(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	struct<4> Var0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x22E590F108289A9D(func_86(bParam6), &uParam0, iParam4, &Var0))
	{
		return 0;
	}
	if (!func_616(Var0, uParam5, bParam6, 0))
	{
		return 0;
	}
	return 1;
}

int func_893(struct<4> Param0, int iParam4)
{
	struct<11> Var0;

	if (!func_98(0))
	{
		return func_1114(Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_616(Param0, &Var0, 0, 0))
	{
		return 0;
	}
	if (Var0.f_10 == iParam4)
	{
		return 1;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_86(0), &Param0, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_894(int iParam0)
{
	if (!func_121(iParam0, 0))
	{
	}
	if (func_190(iParam0, 162787671))
	{
		return 1;
	}
	return 0;
}

int func_895(int iParam0, int iParam1)
{
	struct<4> Var0;

	if (!func_1115(856287005, iParam0))
	{
		return 0;
	}
	Var0 = { func_566() };
	*iParam1 = func_896(Var0, iParam0, 0);
	if (!func_121(*iParam1, 0))
	{
		return 0;
	}
	return 1;
}

int func_896(struct<4> Param0, int iParam4, int iParam5)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_892(Param0, iParam4, &Var0, iParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_897(int iParam0)
{
	if ((((iParam0 == 263080063 || iParam0 == -34331381) || iParam0 == -993578318) || iParam0 == 579268144) || iParam0 == 1104489688)
	{
		return 1;
	}
	return 0;
}

int func_898(int iParam0, var uParam1, bool bParam2)
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
	Var2 = { func_606(0, iParam0, -1591664384, -1591664384, 0, 0) };
	func_608(&Var2, func_566());
	if (func_609(&Var2, &iVar0, &iVar1, 0))
	{
		Var16.f_9 = -1591664384;
		iVar30 = 0;
		while (iVar30 < iVar1)
		{
			if (func_285(&Var16, iVar30, iVar0, iVar1))
			{
				if (func_121(Var16.f_4, 0) && !Var16.f_10)
				{
					if (bParam2 && func_897(Var16.f_4))
					{
					}
					else
					{
						*uParam1 = { Var16 };
						func_287(iVar0);
						return 1;
					}
				}
			}
			iVar30++;
		}
		func_287(iVar0);
	}
	return 0;
}

void func_899(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

int func_900(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (iParam0 != 0)
	{
		iVar3 = func_199(iParam0);
		if (iVar3 != 0)
		{
			iVar4 = func_1116(iParam0);
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

struct<10> func_901(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

int func_902(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return 0;
	}
	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		if (!bParam5)
		{
		}
		return 0;
	}
	if (!bParam5)
	{
	}
	*iParam3 = Var0.f_3;
	iVar47 = 0;
	while (iVar47 < Var0.f_3)
	{
		if (!bParam5)
		{
		}
		*((*uParam2)[iVar47 /*2*/]) = { *(Var0.f_4[iVar47 /*2*/]) };
		iVar47++;
	}
	if (bParam4)
	{
		func_1117(iParam0, iParam1, uParam2, *iParam3);
	}
	return 1;
}

struct<4> func_903()
{
	struct<4> Var0;

	return Var0;
}

float func_904(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar4 = func_584(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = &Global_40.f_11095.f_11[iVar4];
			iVar5 = func_905(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_1118(iVar6) - func_1118(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_905(float fParam0)
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

int func_906(int iParam0)
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

int func_907(int iParam0)
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

int func_908(float fParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_905(fParam0);
	fVar1 = BUILTIN::TO_FLOAT(func_1118(iVar0));
	fVar2 = BUILTIN::TO_FLOAT(func_1118(iVar0 + 1));
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

int func_909(int iParam0)
{
	int iVar0;

	if (func_1119(iParam0, &iVar0))
	{
		return func_1118(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_1120())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_1120())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_1120())
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

int func_910(int iParam0)
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

void func_911(int iParam0, int iParam1, int iParam2)
{
	char* sVar0;
	char* sVar1;
	bool bVar2;
	int iVar3;
	char* sVar4;
	char* sVar5;
	char* sVar6;
	char* sVar7;
	int iVar8;
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
	iVar3 = (iVar3 + func_1121(iParam0));
	sVar4 = func_1123(func_1122(iVar3, iParam2));
	sVar6 = func_1124(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = MISC::_CREATE_VAR_STRING(10, sVar0, func_1125(iParam0));
	iVar8 = func_1126(iParam0);
	iVar9 = MISC::GET_HASH_KEY(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_1127(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&Var10);
	}
	func_687(sVar7, sVar1, iVar8, iVar9, -479097442, "INPUT_FEED_INTERACT_GENERIC", func_1128(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

int func_912(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_412(iVar0);
}

int func_913(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = 0;
			break;
		case 1:
			*iParam1 = 1;
			break;
		default:
			return 0;
	}
	return 1;
}

char* func_914(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "HealthCoreValue";
			break;
		case 1:
			sVar0 = "StaminaCoreValue";
			break;
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

char* func_915(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "isLowHealthCoreActive";
			break;
		case 1:
			sVar0 = "isLowStaminaCoreActive";
			break;
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

int func_916(int iParam0)
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

int func_917(int iParam0, int iParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if ((bParam2 && func_23() == 0) && !UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
	{
		return 0;
	}
	if (!func_1129(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

int func_918(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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

	if (!func_902(iParam0, iParam2, &Var0, &iVar31, bParam7, 0))
	{
		return 0;
	}
	if (func_23() == 0 && iParam6 != 0)
	{
		return 0;
	}
	if (iParam6 != 0)
	{
		bParam5 = false;
	}
	bVar35 = func_98(0);
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (&Var0[iVar34 /*2*/] == 0)
		{
		}
		else
		{
			iVar32 = ((Var0[iVar34 /*2*/])->f_1 * iParam1);
			if (&Var0[iVar34 /*2*/] == 2084597891 && func_1130(iVar32))
			{
				Jump @390; //curOff = 134
			}
			else if (&Var0[iVar34 /*2*/] == 773203532 && func_1131(iVar32))
			{
			}
			else
			{
				if (iParam6 != 0)
				{
					iVar33 = func_1132(&(Var0[iVar34 /*2*/]), iParam6);
				}
				else
				{
					iVar33 = func_124(&(Var0[iVar34 /*2*/]), 0, 0);
				}
				if (iVar33 >= iVar32)
				{
				}
				else if (bVar35)
				{
					if (func_321(&(Var0[iVar34 /*2*/])) || func_639(&(Var0[iVar34 /*2*/])))
					{
						iVar36 = 0;
						if (bParam5)
						{
							iVar37 = func_1093(7, &(Var0[iVar34 /*2*/]), &iVar36);
						}
						iVar38 = func_1092(&(Var0[iVar34 /*2*/]), iParam6);
						if (((iVar33 + iVar37) + iVar38) >= iVar32)
						{
							if ((iVar33 + iVar38) < iVar32 && ENTITY::DOES_ENTITY_EXIST(iVar36))
							{
								*iParam4 = iVar36;
							}
						}
						else
						{
							Jump @374; //curOff = 330
							if (bParam5 && ((iVar33 + func_1089(7, &(Var0[iVar34 /*2*/]))) + func_1087(&(Var0[iVar34 /*2*/]))) >= iVar32)
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

int func_919(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_86(0);
	*uParam1 = { func_346(iParam0, func_607(0), iParam3, 0) };
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

void func_920(int iParam0, int iParam1)
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

int func_921(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_1133(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_1134())
	{
		return func_1133(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1225638->f_21[iParam1])
	{
		return func_1133(&(((*Global_1108178)[iParam1 /*37*/])->f_4), iVar0, 5);
	}
	return 0;
}

int func_922(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4)
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
	if (NETWORK::_0xFBE782B3165AC8EC(iParam0))
	{
		return 1;
	}
	if (!NETWORK::_0x271F95E55C663B8B(&uVar0, uParam1))
	{
		return 0;
	}
	Var1.f_1 = 10;
	Var1.f_14 = 255;
	Var1.f_12 = bParam2;
	Var1.f_14 = iParam3;
	Var1.f_13 = iParam4;
	func_1135(uParam1, iParam0, Var1);
	return 1;
}

int func_923(int iParam0)
{
	int iVar0;

	iVar0 = -1337945352;
	if (!func_117(iParam0))
	{
		return iVar0;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
	{
		iVar0 = 1673015813;
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 512 != 0)
	{
		if (Global_40.f_1093 == Global_1347702[iParam0 /*49*/])
		{
			iVar0 = 2103462781;
		}
		else
		{
			iVar0 = -1337945352;
		}
	}
	else if (Global_40.f_1093 == Global_1347702[iParam0 /*49*/])
	{
		iVar0 = 2103462781;
	}
	else
	{
		iVar0 = -1337945352;
	}
	return iVar0;
}

int func_924(int iParam0)
{
	if (func_23() != -1)
	{
		return 0;
	}
	if (!func_117(iParam0))
	{
		return 0;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1048576 != 0 && ((*Global_1347702)[iParam0 /*49*/])->f_13 & 2048 != 0)
	{
		return 0;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_18 > -1f)
	{
		return 1;
	}
	return 0;
}

void func_925(int iParam0)
{
	switch (func_23())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 || iParam0);
			break;
	}
}

void func_926(int iParam0)
{
	if (!func_924(iParam0))
	{
		if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 16 != 0)
		{
			if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
			{
				if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
				{
					MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, -1446646876);
				}
				func_933(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32);
			}
		}
		else
		{
			if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
			{
				MAP::_SET_BLIP_FLASH_STYLE(((*Global_1347702)[iParam0 /*49*/])->f_37, -1446646876);
			}
			func_632(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32);
		}
	}
}

void func_927(int iParam0)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, -1986290853);
		switch (iParam0)
		{
			case 140:
			case 142:
				MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, 495758964);
				break;
		}
	}
}

int func_928(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 5:
			return 4;
		case 6:
			return 79;
		case 0:
			return 43;
		case 2:
			return 98;
		case 4:
			return 58;
		case 1:
			return 71;
		case 3:
			return 9;
		case 7:
			return 22;
		case 8:
			return 37;
		default:
			break;
	}
	if (iParam0 != -1)
	{
	}
	return -1;
}

int func_929(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36307)
	{
		return MAP::DOES_BLIP_EXIST(&(Global_36307[iParam0]));
	}
	return 0;
}

bool func_930(int iParam0)
{
	if (!func_1136(Global_40.f_4283))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return true;
		}
		if (func_1137(iParam0))
		{
			if (BUILTIN::VDIST(Global_36, func_1138(iParam0)) < BUILTIN::VDIST(Global_36, ((*Global_1888801)[iParam0 /*35*/])->f_15))
			{
				return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_1138(iParam0), false) <= func_1139();
			}
		}
		return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, ((*Global_1888801)[iParam0 /*35*/])->f_15, false) <= func_1139();
	}
	return func_197();
}

int func_931(int iParam0, bool bParam1, int iParam2)
{
	if ((bParam1 && MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37)) && ((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
	{
		return ((*Global_1347702)[iParam0 /*49*/])->f_27 == iParam2;
	}
	return 0;
}

void func_932(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_119(iParam0))
	{
		return;
	}
	switch (func_1140(iParam0))
	{
		case 1:
			iVar0 = func_116(iParam0);
			if (func_1141(iVar0, bParam1, bParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				if ((func_1142(iVar0, -1) && !((*Global_1835011)[iVar0 /*74*/])->f_70) && ((*Global_1835011)[iVar0 /*74*/])->f_63 & 2 == 0)
				{
					iVar2 = 1986697381;
				}
				else
				{
					iVar2 = -592708248;
				}
			}
			else if ((func_1142(iVar0, -1) && !((*Global_1835011)[iVar0 /*74*/])->f_70) && ((*Global_1835011)[iVar0 /*74*/])->f_63 & 2 == 0)
			{
				iVar2 = -1559907306;
			}
			else
			{
				iVar2 = 1673015813;
			}
			if (((*Global_1835011)[iVar0 /*74*/])->f_28 != iVar2)
			{
				MAP::_0xBD62D98799A3DAF0(((*Global_1835011)[iVar0 /*74*/])->f_27, iVar2);
				if (!func_1143(iVar0))
				{
					MAP::_0x662D364ABF16DE2F(((*Global_1835011)[iVar0 /*74*/])->f_27, -1986290853);
				}
				if (func_629((*Global_1835011)[iVar0 /*74*/], 2))
				{
					MAP::_0x662D364ABF16DE2F(((*Global_1835011)[iVar0 /*74*/])->f_27, 724623647);
				}
				((*Global_1835011)[iVar0 /*74*/])->f_28 = iVar2;
			}
			break;
		case 8:
			iVar1 = func_116(iParam0);
			if (func_1144(iVar1, bParam1, bParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				switch (func_923(iVar1))
				{
					case -1337945352:
						iVar2 = 588610391;
						break;
					case 2103462781:
						iVar2 = -1032930804;
						break;
					case -1485222547:
						iVar2 = 13700166;
						break;
					case 1673015813:
						iVar2 = -592708248;
						break;
					default:
						iVar2 = 588610391;
						break;
				}
			}
			else
			{
				iVar2 = func_923(iVar1);
			}
			if (((*Global_1347702)[iVar1 /*49*/])->f_38 != iVar2)
			{
				MAP::_0xBD62D98799A3DAF0(((*Global_1347702)[iVar1 /*49*/])->f_37, iVar2);
				func_927(iVar1);
				((*Global_1347702)[iVar1 /*49*/])->f_38 = iVar2;
			}
			break;
	}
}

void func_933(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_934(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_935(int iParam0)
{
	if ((iParam0 == 97 || iParam0 == 99) || iParam0 == 6)
	{
		return 1;
	}
	return 0;
}

void func_936(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

int func_937(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_1145(((*Global_1347702)[iParam0 /*49*/])->f_15) != 0)
		{
			((*Global_1347702)[iParam0 /*49*/])->f_18 = 80f;
			*uParam1 = { 1015.113f, 159.7295f, 103.0175f };
			return 1;
		}
	}
	else if (iParam0 == 96)
	{
		if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 65536 != 0)
		{
			*uParam1 = { -1646.77f, -1362.89f, 83.4f };
			return 1;
		}
		else
		{
			*uParam1 = { -1629.71f, -1338.377f, 82.0174f };
			return 1;
		}
	}
	return 0;
}

void func_938(var uParam0)
{
	func_637(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_637(uParam0, 617531372);
	}
	else
	{
		func_637(uParam0, 291123060);
	}
}

void func_939(var uParam0, int iParam1, struct<14> Param2)
{
	int iVar0;
	struct<21> Var1;

	if (!func_1146(uParam0))
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

int func_940(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	int iVar9;

	if (!PED::_IS_PED_CARRYING(iParam0))
	{
		return iParam2;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar1);
	iVar4 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
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
			else
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar2))
				{
					iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
					func_640(iVar9, &iVar6, &uVar7, &iVar5, &uVar8);
					func_641(&iVar0, iVar9, iVar5, iVar6);
					if (!func_121(iVar0, 0))
					{
						iVar0 = func_326(iVar2);
					}
				}
				else
				{
					iVar0 = func_326(iVar2);
				}
				if (iVar0 == iParam1)
				{
					PED::_0xED00D72F81CF7278(iVar2, 0, 0);
					if (bParam3)
					{
						func_1147(iVar2);
						ENTITY::_0x0D0DB2B6AF19A987(&iVar2);
					}
					iParam2 = (iParam2 - 1);
				}
			}
			iVar3++;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
	return iParam2;
}

int func_941(int iParam0)
{
	int iVar0;

	if (func_23() == -1)
	{
		if ((Global_1914319->f_17370 || iParam0) || Global_1914319->f_16855 == 2)
		{
			iVar0 = PED::_GET_LAST_MOUNT(Global_35);
			if (iVar0 != func_204(7))
			{
				return 1;
			}
		}
		else if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			iVar0 = PED::GET_MOUNT(Global_35);
			if (iVar0 != func_204(7))
			{
				return 1;
			}
		}
	}
	else
	{
		iVar0 = PED::_GET_LAST_MOUNT(func_942());
		if (iVar0 != PLAYER::_0xF49F14462F0AE27C(PLAYER::GET_PLAYER_INDEX()))
		{
			return 1;
		}
	}
	return 0;
}

int func_942()
{
	return PLAYER::GET_PLAYER_PED(255);
}

int func_943(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar4;

	if (!func_121(iParam1, 0))
	{
		return 0;
	}
	Var0 = { func_1148(iParam0, iParam1) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(iParam0, &Var0, 0);
	return uVar4;
}

bool func_944(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	iVar0 = INVENTORY::_0x13D234A2A3F66E63(iParam0);
	if (func_1149(iParam0))
	{
		iVar1 = func_1150(iParam0);
		if (func_121(iParam1, 0))
		{
			if (func_945(iParam1))
			{
				func_1151(iVar1, iParam1, iParam2);
			}
		}
	}
	return func_1152(iVar0, iParam1, iParam2, bParam3, iParam4);
}

int func_945(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_580(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 57)
	{
		iVar1 = func_1153(iVar0, 1);
		iVar2 = iVar1;
		if (iParam0 == iVar2)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_946(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return iParam2;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar1 = iParam1;
	iVar0 = 2;
	while (iVar0 >= 0)
	{
		if (PED::_0x0CEEB6F4780B1F2F(iParam0, iVar0) == iVar1)
		{
			PED::_0x627F7F3A0C4C51FF(iParam0, iVar1);
			iParam2 = (iParam2 - 1);
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

bool func_947(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<2> Var0;

	Var0 = { func_436(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var0))
	{
		STATS::_0xBD861AE8A5181ED7(&Var0, iParam1);
	}
	func_1154(iParam0, iParam1);
	return func_1155(iParam0, iParam1, bParam2, iParam3);
}

int func_948()
{
	return 16596983;
}

int func_949()
{
	return 16662519;
}

bool func_950(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_951(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_952(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

int func_953(int iParam0)
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

int func_954(bool bParam0)
{
	if (PED::_IS_PED_HOGTIED(Global_35))
	{
		if (bParam0)
		{
			func_201("ITEM_UNUSABLE_HOGTIED", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (PED::_IS_PED_HOGTYING(Global_35))
	{
		if (bParam0)
		{
			func_201("ITEM_UNUSABLE_HOGTYING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (PED::_IS_PED_LASSOED(Global_35))
	{
		if (bParam0)
		{
			func_201("ITEM_UNUSABLE_LASSOED", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (PED::_0xEF3A8772F085B4AA(Global_35))
	{
		return 0;
	}
	if (!PED::_GET_LASSOED_ENTITY(Global_35) == 0)
	{
		return 0;
	}
	if (PED::_0x226CF9B159E38F42(Global_35))
	{
		return 0;
	}
	if (PED::_0x3BDFCF25B58B0415(Global_35))
	{
		return 0;
	}
	if (PED::_0x0E99E3BF11BB6367(Global_35) || PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 4096, 0))
	{
		return 0;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 32768, 0))
	{
		return 0;
	}
	return 1;
}

int func_955(bool bParam0)
{
	if (PED::_IS_PED_SLIDING(Global_35))
	{
		if (bParam0)
		{
			func_201("ITEM_UNUSABLE_SLIDING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (PED::IS_PED_SWIMMING(Global_35))
	{
		if (bParam0)
		{
			func_201("ITEM_UNUSABLE_SWIMMING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (PED::IS_PED_CLIMBING(Global_35))
	{
		if (bParam0)
		{
			func_201("ITEM_UNUSABLE_CLIMBING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_953(Global_35))
	{
		if (bParam0)
		{
			func_201("ITEM_UNUSABLE_SLEEPING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (PED::IS_PED_FALLING(Global_35))
	{
		if (bParam0)
		{
			func_201("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (PED::_0x3E592D0486DEC0F6(Global_35))
	{
		if (bParam0)
		{
			func_201("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (PED::IS_PED_RAGDOLL(Global_35))
	{
		if (bParam0)
		{
			func_201("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (PED::IS_PED_VAULTING(Global_35))
	{
		if (bParam0)
		{
			func_201("ITEM_UNUSABLE_JUMPING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (TASK::IS_PED_GETTING_UP(Global_35))
	{
		if (bParam0)
		{
			func_201("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	return 1;
}

int func_956(bool bParam0)
{
	if (PED::IS_PED_HANGING_ON_TO_VEHICLE(Global_35))
	{
		if (bParam0)
		{
			func_201("ITEM_UNUSABLE_HANGING_ON_VEHICLE", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	return 1;
}

int func_957(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_1156();
	if (TASK::_0x756C7B4C43DF0422(1))
	{
		iVar0 = TASK::_0x351F74ED6177EBE7();
	}
	else
	{
		iVar0 = iParam0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (bParam1)
		{
			func_201("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (!func_960(iVar0))
	{
		if (bParam1)
		{
			func_201("ITEM_UNUSABLE_NOT_A_HORSE", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (!TASK::IS_PED_IN_WRITHE(iVar0))
	{
		if (bParam1)
		{
			func_201("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (!PED::_0xD543D3A8FDE4F185(Global_35, iVar0))
	{
		if (bParam1)
		{
			func_201("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	return 1;
}

int func_958(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 1;
	}
	else if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::GET_PLAYER_INDEX(), &iVar0, 0, 0))
	{
		if (!func_960(iVar0))
		{
			if (bParam1)
			{
				func_201("ITEM_UNUSABLE_NOT_ILO_HORSE", 10000, 0, 0, 0, 1);
			}
			return 0;
		}
		if (TASK::IS_PED_IN_WRITHE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
		{
			if (bParam1)
			{
				func_201("ITEM_UNUSABLE_DYING_HORSE", 10000, 0, 0, 0, 1);
			}
			return 0;
		}
		if (func_1157(iVar0, 1, 1) > 2f)
		{
			if (bParam1)
			{
				func_201("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return 0;
		}
		if (!PED::_0xD543D3A8FDE4F185(Global_35, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
		{
			if (bParam1)
			{
				func_201("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return 0;
		}
		return 1;
	}
	iVar1 = iParam0;
	if (!func_960(iVar1))
	{
		if (bParam1)
		{
			func_201("ITEM_UNUSABLE_NOT_A_HORSE", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar1))
	{
		if (bParam1)
		{
			func_201("ITEM_UNUSABLE_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (!PED::_0xD543D3A8FDE4F185(Global_35, iVar1))
	{
		if (bParam1)
		{
			func_201("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	return 1;
}

int func_959()
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return 0;
	}
	if (!TASK::_0xEFC4303DDC6E60D3(iVar0))
	{
		return 0;
	}
	iVar1 = TASK::_0xED1F514AF4732258(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		return 0;
	}
	if (!PED::_0x2D64376CF437363E(iVar1))
	{
		return 0;
	}
	return 1;
}

int func_960(int iParam0)
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
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return PED::_0x772A1969F649E902(iVar0);
}

int func_961(int iParam0)
{
	switch (func_23())
	{
		case -1:
			return (Global_1357549->f_1494 && iParam0) != 0;
	}
	return 0;
}

int func_962()
{
	int iVar0;

	if (!PED::IS_PED_IN_ANY_TRAIN(Global_35))
	{
		return 0;
	}
	iVar0 = func_1158(Global_36, 0);
	if (iVar0 >= 8 && iVar0 <= 12)
	{
		return 1;
	}
	return 0;
}

bool func_963()
{
	return Global_1898164->f_163;
}

bool func_964(int iParam0)
{
	return func_128(Global_1935496->f_7, iParam0);
}

int func_965(int iParam0)
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

int func_966(int iParam0)
{
	switch (func_23())
	{
		case -1:
			return (Global_1357549->f_1495 && iParam0) != 0;
	}
	return 0;
}

bool func_967(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/] && iParam1) != 0;
}

bool func_968(int iParam0, int iParam1, bool bParam2, int iParam3)
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

int func_969(vector3 vParam0, float fParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_1159(iVar0))
		{
			if (BUILTIN::VDIST(func_1160(iVar0), vParam0) < fParam3)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_970(vector3 vParam0, float fParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_40.f_450)
	{
		if (&Global_40.f_450[iVar0] > -1 && &Global_40.f_450[iVar0] < 200)
		{
			if (BUILTIN::VDIST(func_1161(&(Global_40.f_450[iVar0])), vParam0) < fParam3)
			{
				return 1;
			}
		}
	else
	{
		}
		else
		{
			iVar0++;
		}
	}
	return 0;
}

int func_971(int iParam0, var uParam1)
{
	if (!func_1162(iParam0))
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

int func_972()
{
	return func_1163(Global_40.f_12018);
}

int func_973()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_758(iVar1);
		if (func_25(iVar2, 1, 0) || func_979(func_978(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_974()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1164(COLLECTION::_0x126CBEBBA46693CF(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_975()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_984(COLLECTION::_0x126CBEBBA46693CF(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_976()
{
	return COLLECTION::_0x3A65F4844913A047(2103522376, 0);
}

int func_977(int iParam0)
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

int func_978(int iParam0)
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

bool func_979(var uParam0)
{
	return (Global_40.f_12018 && uParam0) != 0;
}

char* func_980(int iParam0)
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

int func_981(int iParam0)
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

int func_982(int iParam0)
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

char* func_983(int iParam0)
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

bool func_984(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

char* func_985(int iParam0)
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

char* func_986(int iParam0)
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

int func_987(int iParam0)
{
	if (func_1165(iParam0) && func_25(iParam0, 1, 0))
	{
		return 1;
	}
	else if (func_1166(iParam0) && func_1167(iParam0))
	{
		return 1;
	}
	return 0;
}

char* func_988(int iParam0)
{
	if (!func_121(iParam0, 0))
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(func_492(iParam0));
}

int func_989(int iParam0)
{
	return &(Global_1898164->f_1[iParam0 /*5*/]);
}

int func_990(int iParam0)
{
	return (Global_1898164->f_1[iParam0 /*5*/])->f_2;
}

float func_991(int iParam0, int iParam1)
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
			fVar1 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_35));
			fVar2 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0));
			iVar0 = 50;
			break;
		case 1:
			fVar1 = PED::_GET_PED_STAMINA(Global_35);
			fVar2 = PED::_GET_PED_MAX_STAMINA(Global_35);
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

void func_992(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (50 * iParam0);
	iVar1 = (iVar0 + ENTITY::GET_ENTITY_HEALTH(Global_35));
	if (bParam1 && iVar0 < 0)
	{
		ENTITY::_0x835F131E7DC8F97A(Global_35, BUILTIN::TO_FLOAT(iVar0), 0, 0);
	}
	else if (iParam0 <= 0 || iVar1 > ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0))
	{
		ENTITY::_SET_ENTITY_HEALTH(Global_35, ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0), 0);
	}
	else
	{
		ENTITY::_SET_ENTITY_HEALTH(Global_35, iVar1, 0);
	}
}

void func_993(int iParam0)
{
	int iVar0;

	if (func_23() != -1)
	{
		return;
	}
	if (iParam0 == -1)
	{
		PED::_RESTORE_PED_STAMINA(Global_35, 100f);
	}
	else
	{
		iVar0 = 8;
		PED::_CHARGE_PED_STAMINA(Global_35, BUILTIN::TO_FLOAT((iParam0 * iVar0)));
	}
}

float func_994(int iParam0, float fParam1)
{
	return func_235(BUILTIN::TO_FLOAT(iParam0), fParam1);
}

int func_995(int iParam0)
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
		case 39:
			return 1216456215 /* GXTEntry: "Wild Carrot" */;
		case 40:
			return 746300881 /* GXTEntry: "Wild Feverfew" */;
		case 41:
			return -435006002 /* GXTEntry: "Wild Mint" */;
		case 42:
			return -624139784 /* GXTEntry: "Wintergreen Berry" */;
		case 43:
			return -529638012 /* GXTEntry: "Yarrow" */;
		case 1:
			return -651064726 /* GXTEntry: "Acuna\'s Star Orchid" */;
		case 9:
			return -404270094 /* GXTEntry: "Cigar Orchid" */;
		case 10:
			return -1521783510 /* GXTEntry: "Clamshell Orchid" */;
		case 14:
			return 1714875242 /* GXTEntry: "Dragon\'s Mouth Orchid" */;
		case 17:
			return 2093126853 /* GXTEntry: "Ghost Orchid" */;
		case 21:
			return 728781265 /* GXTEntry: "Lady of the Night Orchid" */;
		case 22:
			return 1794857344 /* GXTEntry: "Lady Slipper Orchid" */;
		case 24:
			return 1952409553 /* GXTEntry: "Moccasin Flower Orchid" */;
		case 25:
			return -150591160 /* GXTEntry: "Night Scented Orchid" */;
		case 30:
			return 1019229063 /* GXTEntry: "Queen\'s Orchid" */;
		case 32:
			return -323969289 /* GXTEntry: "Rat Tail Orchid" */;
		case 35:
			return 927763737 /* GXTEntry: "Sparrow\'s Egg Orchid" */;
		case 36:
			return 1504361882 /* GXTEntry: "Spider Orchid" */;
		default:
			break;
	}
	return 0;
}

void func_996(int iParam0, int iParam1)
{
	if (!func_997(iParam0))
	{
		return;
	}
	if (func_23() != -1)
	{
		Global_36637[iParam0] = (Global_36637[iParam0] || iParam1);
		return;
	}
	Global_40.f_9274[iParam0] = (Global_40.f_9274[iParam0] || iParam1);
}

bool func_997(int iParam0)
{
	return !iParam0 <= 0;
}

int func_998(int iParam0)
{
	if (!func_997(iParam0))
	{
		return 0;
	}
	return func_1168(iParam0, 4, 1);
}

void func_999(int iParam0, bool bParam1)
{
	if (!func_997(iParam0))
	{
		return;
	}
	if (func_1169(iParam0))
	{
		return;
	}
	func_996(iParam0, 2);
	if (bParam1)
	{
		if (!func_18(0, 0, 1))
		{
			func_101(1, 6);
		}
	}
}

int func_1000(int iParam0)
{
	if (!func_997(iParam0))
	{
		return 0;
	}
	return func_1168(iParam0, 1, 1);
}

void func_1001(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_997(iParam0))
	{
		return;
	}
	if (func_1000(iParam0))
	{
		return;
	}
	if (!bParam1)
	{
		bParam1 = func_1170(iParam0);
	}
	if (!bParam1)
	{
		if (func_23() != -1)
		{
		}
		else
		{
			func_1171(iParam0);
		}
	}
	func_996(iParam0, 1);
	if (func_23() == -1)
	{
		func_1172(iParam0, func_270());
	}
	func_999(iParam0, 1);
	if (bParam2)
	{
		if (!func_18(0, 0, 1))
		{
			func_101(1, 6);
		}
	}
}

float func_1002(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_1003()
{
	int iVar0;

	iVar0 = &Global_1946804->f_529[9];
	iVar0 = (&Global_1946804->f_529[4] + iVar0);
	iVar0 = (&Global_1946804->f_529[10] + iVar0);
	iVar0 = (&Global_1946804->f_529[1] + iVar0);
	iVar0 = (&Global_1946804->f_529[2] + iVar0);
	iVar0 = (&Global_1946804->f_529[6] + iVar0);
	iVar0 = (&Global_1946804->f_529[29] + iVar0);
	iVar0 = (&Global_1946804->f_529[26] + iVar0);
	iVar0 = (&Global_1946804->f_529[18] + iVar0);
	iVar0 = (&Global_1946804->f_529[19] + iVar0);
	return iVar0 > 0;
}

int func_1004(int iParam0)
{
	int iVar0;

	iVar0 = func_413(func_912(iParam0), 1);
	if (iVar0 != 39)
	{
		return (Global_1946804->f_1497.f_1[iVar0 /*3*/])->f_1;
	}
	return 0;
}

int func_1005()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_199(iVar1) == -999503751)
		{
			if (func_1173() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

int func_1006(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_296(iParam0, 0, 0) };
	Var5 = { func_346(iParam0, Var0, Var0.f_4, 0) };
	if (func_419(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x9A113C660AEA3832(func_86(0), &Var5, iParam1);
	return 1;
}

void func_1007(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_1174(iParam2, *uParam0);
	func_1175(uParam0->f_1[*uParam0 /*5*/], iParam1, -1, 1, 0);
	*uParam0++;
}

int func_1008(int iParam0)
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

bool func_1009(var uParam0)
{
	return (Global_1946804->f_2657.f_26.f_6 && uParam0) != 0;
}

void func_1010(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

void func_1011(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	switch (func_199(iParam0))
	{
		case -2061583405:
			bVar0 = func_1176(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1176(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1176(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1176(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1176(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1176(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_729();
	}
	if (bParam1)
	{
		func_731(0, 0);
	}
}

void func_1012(var uParam0, int iParam1)
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
			if ((func_1177(uParam0->f_2[iVar0 /*2*/], 2) || &uParam0->f_2[iVar0 /*2*/] == iParam1) || &uParam0->f_2[iVar0 /*2*/] == 39)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			else
			{
				if (func_1177(uParam0->f_2[iVar0 /*2*/], 1))
				{
					func_1178(uParam0->f_2[iVar0 /*2*/], 2, 6);
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

void func_1013(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_1179(uParam0, 1))
	{
		func_1180(uParam0, 1);
	}
	(uParam0->f_2[*uParam0 /*2*/])->f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

bool func_1014(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[iParam0 /*11*/])->f_9 && iParam1) != 0;
}

void func_1015(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_737(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_737(iVar3, iVar0);
		}
	}
	if ((uParam0->f_1[iVar2 /*3*/])->f_1 == -1333118809 || (uParam0->f_1[iVar2 /*3*/])->f_1 == joaat("custom"))
	{
		(uParam0->f_1[iVar2 /*3*/])->f_1 = joaat("base");
		if (bParam3)
		{
			func_737(iVar2, iVar0);
		}
	}
}

int func_1016(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_728();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_1017(int iParam0, var uParam1, int iParam2, bool bParam3)
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

int func_1018(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("base");
	return 1;
}

bool func_1019(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_413(iParam0, 1) /*11*/])->f_10 && iParam1) != 0;
}

int func_1020(var uParam0)
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

void func_1021(int iParam0, bool bParam1, bool bParam2)
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
		func_1181(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_26795.f_776);
	}
	else
	{
		func_1182(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_36637.f_45.f_350.f_1011);
	}
}

int func_1022(int iParam0, int iParam1)
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

int func_1023(int iParam0)
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

void func_1024(int iParam0, bool bParam1, int iParam2)
{
	func_1183(&(Global_1946804->f_1378), iParam0);
	func_1184(2, iParam0, 6);
	if (bParam1)
	{
		func_731(0, 1);
	}
}

int func_1025()
{
	return Global_1051081->f_11;
}

char* func_1026()
{
	return "unnamed";
}

int func_1027(int iParam0)
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

int func_1028(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1109400->f_1;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 25;
	}
	if (&Global_1225638->f_21[iParam0])
	{
		return ((*Global_1108178)[iParam0 /*37*/])->f_1;
	}
	return 25;
}

bool func_1029(int iParam0)
{
	if (func_1185(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1225638->f_10, iParam0) != 1)
		{
			func_1186(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1225638->f_10, iParam0) == 1;
}

int func_1030(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return 0;
	}
	return 1;
}

int func_1031(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_791(iVar9);
	iVar2 = func_791(iVar10);
	iVar3 = func_791(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_791(iVar12);
	}
	iVar5 = func_792(iVar9);
	iVar6 = func_792(iVar10);
	iVar7 = func_792(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_792(iVar12);
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

int func_1032(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_121(iParam0, 0))
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

void func_1033(bool bParam0)
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

void func_1034(int iParam0)
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

void func_1035(bool bParam0)
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

void func_1036(bool bParam0)
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

void func_1037(bool bParam0)
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

void func_1038(bool bParam0)
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

void func_1039(bool bParam0)
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

void func_1040(bool bParam0)
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

int func_1041(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_413(iParam0, 1) /*3*/]);
}

void func_1042()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1526891582))
	{
		func_1187();
		UNLOCK::_UNLOCK_SET_UNLOCKED(-1526891582, true);
		func_254(joaat("weapon_revolver_cattleman_john"));
		func_498(joaat("weapon_revolver_cattleman_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_cattleman_john"), true, 2, false, false);
		func_254(joaat("weapon_melee_knife_john"));
		func_498(joaat("weapon_melee_knife_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_melee_knife_john"), true, 4, false, false);
	}
}

int func_1043(int iParam0)
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

int func_1044(int iParam0)
{
	return func_1188(iParam0, -1);
}

int func_1045()
{
	if (func_771())
	{
		return DLC::_0x1DB9D61E505AE3FC();
	}
	return 0;
}

void func_1046(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1189((Global_40.f_4283.f_325 + iParam0));
}

void func_1047(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1045())
	{
		func_577(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
	else
	{
		func_577(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
}

bool func_1048(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

void func_1049(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_1190(iParam0, 1);
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

void func_1050(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_1190(iParam0, 1);
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

void func_1051()
{
	func_1050(-939420910);
	func_1050(-1187950766);
	func_1050(356365161);
	func_1050(753127042);
	func_1050(-2038424081);
	func_1050(1884271742);
	func_1050(459290420);
}

void func_1052()
{
	func_1050(704802028);
	func_1050(588987611);
	func_1050(2008888900);
	func_1050(1649996811);
	func_1050(227918160);
	func_1050(168171957);
	func_1050(1193080109);
	func_1050(-491981251);
	func_1050(-639037538);
	func_1050(-618620429);
}

bool func_1053(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_1190(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_1054(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_1055(int iParam0)
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

void func_1056(var uParam0)
{
	Global_40.f_12018.f_43 = (Global_40.f_12018.f_43 || uParam0);
}

bool func_1057(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_1058()
{
	if (Global_1572887->f_12 != -1)
	{
		return 0;
	}
	return Global_1347477->f_203;
}

float func_1059()
{
	float fVar0;
	int iVar1;

	fVar0 = func_512(13);
	iVar1 = func_514(fVar0);
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

float func_1060()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_1061()
{
	if (func_771())
	{
		if (DLC::_0xA16B4FBA7887D7BA())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_1062()
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

float func_1063()
{
	return Global_1955565->f_3;
}

void func_1064(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_1080(iParam0, 1, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[1]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[1]), bParam2);
}

void func_1065(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_1080(iParam0, 2, 0, 0);
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

bool func_1066()
{
	return func_512(12) <= -99f;
}

bool func_1067()
{
	return func_512(12) >= 99f;
}

int func_1068(int iParam0)
{
	if (!func_704(iParam0))
	{
		return 0;
	}
	if (func_705(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void func_1069(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_704(iParam0))
	{
		return;
	}
	if (!func_1068(iParam0))
	{
		func_1071(iParam0, 2);
		if (bParam2)
		{
			if (!func_18(0, 0, 1))
			{
				func_101(1, 4);
			}
		}
		if ((!func_1070() && !bParam1) && !func_18(0, 0, 1))
		{
			func_201(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_ADD", func_1191(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

bool func_1070()
{
	int iVar0;

	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) == 4);
}

void func_1071(int iParam0, int iParam1)
{
	if (!func_704(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] = (Global_40.f_7157[iParam0 /*3*/] || iParam1);
}

void func_1072(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_1192(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_456(50);
			}
			else
			{
				func_456(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_456(51);
			}
			else
			{
				func_456(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_1193(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_479();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_479();
			}
			break;
		case 3:
			func_456(24);
			if (bParam1)
			{
				if (!func_1193(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_479();
				}
			}
			break;
	}
}

void func_1073(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_1194(0))
			{
				iVar0++;
			}
			if (func_1194(2))
			{
				iVar0++;
			}
			if (func_1194(4))
			{
				iVar0++;
			}
			if (!func_1195(16))
			{
				if (iVar0 == 1)
				{
					func_1196();
					func_63(456, 1);
					func_1197(16);
				}
			}
			if (!func_1195(32))
			{
				if (iVar0 >= 3)
				{
					func_1196();
					func_63(456, 1);
					func_1197(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_1194(1))
			{
				iVar0++;
			}
			if (func_1194(3))
			{
				iVar0++;
			}
			if (func_1194(7))
			{
				iVar0++;
			}
			if (!func_1195(1))
			{
				if (iVar0 == 1)
				{
					func_1198();
					func_63(457, 1);
					func_1197(1);
				}
			}
			if (!func_1195(2))
			{
				if (iVar0 >= 3)
				{
					func_1198();
					func_63(457, 1);
					func_1197(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_1194(5))
			{
				iVar0++;
			}
			if (func_1194(6))
			{
				iVar0++;
			}
			if (func_1194(8))
			{
				iVar0++;
			}
			if (!func_1195(4))
			{
				if (iVar0 == 1)
				{
					func_1199();
					func_63(455, 1);
					func_1197(4);
				}
			}
			if (!func_1195(8))
			{
				if (iVar0 >= 3)
				{
					func_1199();
					func_63(455, 1);
					func_1197(8);
				}
			}
			break;
	}
}

int func_1074(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_1075()
{
	if (func_626())
	{
		return 1;
	}
	return 0;
}

void func_1076(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_1075();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569->f_753.f_15[iParam0 /*3*/] = iParam1;
			break;
		case 1:
			Global_1955569->f_866.f_2.f_15[iParam0 /*3*/] = iParam1;
			break;
		default:
			break;
	}
}

void func_1077(int iParam0, int iParam1, float fParam2)
{
	char* sVar0;

	sVar0 = func_828(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		PED::_0x437C08DB4FEBE2BD(iParam0, func_1200(iParam1), fParam2, -1);
	}
}

void func_1078(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (iParam3 == 2)
	{
		iParam3 = func_1075();
	}
	iVar0 = MISC::GET_GAME_TIMER();
	func_1201(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_1202(iParam0, iVar0, iParam3);
	}
}

int func_1079(int iParam0)
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
	iVar0 = func_536(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_535(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_534(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_531(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_532(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_533(iParam0);
	if (iVar5 < 1 || iVar5 > func_537(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

char* func_1080(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_574(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_574(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

int func_1081(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

int func_1082(int iParam0)
{
	switch (func_199(iParam0))
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

void func_1083(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_2377[func_413(iParam0, 1) /*2*/])->f_1 = ((Global_1946804->f_2377[func_413(iParam0, 1) /*2*/])->f_1 || iParam1);
}

void func_1084(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1203(iParam0);
	if (bParam3)
	{
		func_1204(iParam0, sParam1, iParam2);
	}
}

int func_1085(int iParam0, int iParam1, int iParam2)
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

	iParam0 = func_395(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_121(iParam1, 0))
	{
		return 0;
	}
	if (!func_1205(iParam0))
	{
		return 0;
	}
	iVar0 = func_204(iParam0);
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
			if (!func_1206(iVar28))
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
						func_498(iParam1, 1, 752097756);
						if (ENTITY::DOES_ENTITY_EXIST(iVar28))
						{
							iVar31 = func_325(iVar28);
							if (!func_121(iVar31, 0))
							{
								iVar31 = func_326(iVar28);
							}
							if (func_121(iVar31, 0))
							{
								func_327(iVar31, 1, 1, -142743235, 0);
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

void func_1086(int iParam0, int iParam1)
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
		iVar12 = func_372(iParam0, 1697966752);
		if (iVar12 == 0)
		{
			return;
		}
		Var2 = { func_901(-1591664384, -1591664384, 0, 235313564, 0, 0, -1, iVar12, 0) };
		if (func_1107(Var2, &iVar0, &iVar1, 0))
		{
			iVar14 = 0;
			while (iVar14 < iVar1)
			{
				if (iParam1 <= 0)
				{
				}
				else
				{
					iVar13 = func_1108(iVar14, iVar0);
					if (func_121(iVar13, 0) && iParam0 != iVar13)
					{
						iVar15 = func_124(iVar13, 0, 0);
						while (iVar15 > 0 && iParam1 > 0)
						{
							iParam1 = (iParam1 - func_1207(iVar13, iParam0));
							iVar15 = (iVar15 - 1);
						}
					}
					iVar14++;
				}
			}
			func_1109(iVar0);
		}
	}
}

int func_1087(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	if (PED::_IS_PED_CARRYING(Global_35))
	{
		iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
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

void func_1088(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2[10];
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	var uVar18;
	var uVar19;

	if (!func_121(iParam0, 0))
	{
	}
	if (PED::_IS_PED_CARRYING(Global_35))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			if (ENTITY::IS_ENTITY_A_PED(iVar0))
			{
				iVar13 = func_1208(iVar1, &uVar2);
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
			else
			{
				func_640(iVar1, &iVar17, &uVar18, &iVar16, &uVar19);
				if (func_641(&iVar15, iVar1, iVar16, iVar17) && iVar15 == iParam0)
				{
					ENTITY::_0x0D0DB2B6AF19A987(&iVar0);
				}
			}
		}
	}
}

int func_1089(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iParam0 = func_395(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_121(iParam1, 0))
	{
		return 0;
	}
	if (!func_1205(iParam0))
	{
		return 0;
	}
	iVar0 = func_204(iParam0);
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

int func_1090(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iParam0 = func_395(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_121(iParam1, 0))
	{
		return 0;
	}
	if (!func_1205(iParam0))
	{
		return 0;
	}
	iVar0 = func_204(iParam0);
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
		else if (func_1155(iParam1, iParam2, 1, -142743235))
		{
			iVar2++;
		}
		iVar3++;
	}
	return iVar2;
}

int func_1091(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<5> Var0;
	struct<4> Var5;

	if (func_23() == 0)
	{
		return 0;
	}
	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	if (iParam2 < 1)
	{
		return 0;
	}
	Var0 = { func_583(0) };
	Var0.f_4 = func_582(iParam1);
	Var5 = { func_346(iParam0, Var0, Var0.f_4, 0) };
	if (!func_347(iParam0, &Var5, &Var0, iParam2, iParam3, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_1092(int iParam0, int iParam1)
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

	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	if (!func_321(iParam0) && !func_639(iParam0))
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
	iVar13 = func_372(iParam0, 1697966752);
	if (iVar13 == 0)
	{
		return 0;
	}
	Var3 = { func_901(-1591664384, -1591664384, 0, 235313564, 0, 0, -1, iVar13, 0) };
	if (func_1107(Var3, &iVar1, &iVar2, 0))
	{
		iVar15 = 0;
		while (iVar15 < iVar2)
		{
			iVar14 = func_1108(iVar15, iVar1);
			if (func_121(iVar14, 0) && iParam0 != iVar14)
			{
				iVar16 = func_1209(iVar14);
				if (iVar16 != 0)
				{
					if (iParam1 != 0)
					{
						iVar17 = func_1132(iVar14, iParam1);
					}
					else
					{
						iVar17 = func_124(iVar14, 0, 0);
					}
					if (iVar17 > 0)
					{
						iVar0 = (iVar0 + (iVar17 * func_1211(iVar16, func_1210(iVar14), iParam0)));
					}
				}
			}
			iVar15++;
		}
		func_1109(iVar1);
	}
	return iVar0;
}

int func_1093(int iParam0, int iParam1, int iParam2)
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

	iParam0 = func_395(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_121(iParam1, 0))
	{
		return 0;
	}
	if (!func_1205(iParam0))
	{
		return 0;
	}
	iVar0 = func_204(iParam0);
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
		if (!func_1206(iVar28))
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

bool func_1094(int iParam0)
{
	if (!func_1212(iParam0))
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_40.f_4283.f_307, func_1213(iParam0, 1));
}

void func_1095(int iParam0)
{
	if (!func_1212(iParam0))
	{
		return;
	}
	MISC::SET_BIT(&(Global_40.f_4283.f_307), func_1213(iParam0, 1));
}

int func_1096(var uParam0, int iParam1)
{
	struct<10> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	Var0 = { func_901(-1591664384, -1591664384, 0, 0, iParam1, 0, -1, Global_1911914->f_1584, 0) };
	if (func_1107(Var0, &iVar10, &iVar11, 0))
	{
		iVar12 = 0;
		while (iVar12 < iVar11)
		{
			iVar13 = func_1108(iVar12, iVar10);
			if (func_121(iVar13, 0))
			{
				if (uParam0->f_55 >= 175)
				{
				}
				else
				{
					if (Global_1911914->f_1584 == 0 && func_190(iVar13, 302810039))
					{
						if (!(Global_1911914->f_1585 != 0 && func_190(iVar13, Global_1911914->f_1585)))
						{
						}
						else if (func_190(iVar13, 266762988))
						{
						}
						else
						{
							func_1214(uParam0, iVar13, iParam1);
							func_1215(uParam0, iVar13, iParam1);
						}
						iVar12++;
						func_1216(&iVar10);
						return 1;
						return 0;
					}
				}
			}
		}
	}

int func_1097(int iParam0)
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

void func_1098(var uParam0, char[4] cParam1, var uParam2)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam2->f_39, cParam1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "visible", false);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "texture", "");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "textureDictionary", "inventory_items");
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "count", 3);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "enabled", 1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "inUse", false);
}

void func_1099(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = ((*Global_1911914)[iParam2 /*9*/])->f_6;
	if (bParam4 || func_259(iVar0, uParam0->f_52))
	{
		if (bParam1)
		{
			if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(((*Global_1911914)[iParam2 /*9*/])->f_1))
			{
				if (bParam5)
				{
					func_1100(uParam0, -1, bParam3, ((*Global_1911914)[iParam2 /*9*/])->f_1, 1, 0, 1);
				}
				DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_40, uParam0->f_56, -2047994727, ((*Global_1911914)[iParam2 /*9*/])->f_1);
			}
			else
			{
				func_1217(uParam0, iParam2, bParam1, bParam3);
			}
		}
		else
		{
			if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(((*Global_1911914)[iParam2 /*9*/])->f_1))
			{
				DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*Global_1911914)[iParam2 /*9*/])->f_1);
			}
			func_1217(uParam0, iParam2, 0, bParam3);
		}
		if (uParam0->f_56 == 0)
		{
			uParam0->f_75 = ((*Global_1911914)[iParam2 /*9*/])->f_6;
			uParam0->f_76 = ((*Global_1911914)[iParam2 /*9*/])->f_5;
			uParam0->f_74 = ((*Global_1911914)[iParam2 /*9*/])->f_1;
		}
		uParam0->f_56++;
	}
}

void func_1100(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
	iVar0 = ((*Global_1911914)[iParam1 /*9*/])->f_1;
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iVar0))
	{
		return;
	}
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar0, "eOutputItem");
	iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar0, "eCost");
	iVar3 = iVar1;
	iVar4 = iVar2;
	iVar5 = func_857(iVar3, iVar4, bParam2, 0);
	iVar6 = func_124(iVar3, 0, 0);
	iVar7 = func_856(iVar3, 0);
	if (iVar7 != -1)
	{
		iVar7 = (iVar7 - iVar6);
	}
	else
	{
		iVar7 = iVar5;
	}
	StringIntConCat(&cVar8, func_858(iVar7, iVar5), 8);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(iVar0, "count", &cVar8);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, "visible", 0);
	if (func_56(4096))
	{
		iVar9 = func_843(((iVar7 > 0 && iVar5 > 0) && func_372(iVar3, 1697966752) == 337650881), 1, 0);
	}
	else if (func_56(8192))
	{
		iVar9 = func_843(((iVar7 > 0 && iVar5 > 0) && iVar3 == 1831763320), 1, 0);
	}
	else
	{
		iVar9 = func_843((iVar7 > 0 && iVar5 > 0), 1, 0);
	}
	bVar10 = false;
	if (iVar9 == 0 && func_1218(iVar3))
	{
		if (func_1219(iVar3, iVar4, uParam0, bParam2, &iVar11, &iVar12, &iVar13))
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
	if (!uParam0->f_31)
	{
		if ((iVar4 == -214678071 || iVar4 == 278772510) || DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(iVar0, "bFireCrafting"))
		{
			iVar9 = 0;
		}
	}
	else if (!uParam0->f_32 && iVar4 == 278772510)
	{
		iVar9 = 0;
	}
	if (!Global_1911914->f_1579 && func_917(iVar3, iVar4, 1))
	{
		iVar9 = 0;
		iVar14 = 1;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, "lockVisible", iVar14);
	if (iVar9 == 1)
	{
		if ((!uParam0->f_83 || uParam0->f_84 > 0) && func_372(iVar3, -1636519629) == -701492487)
		{
			((*Global_1911914)[iParam1 /*9*/])->f_2 = 0;
			iVar9 = 0;
		}
		else
		{
			((*Global_1911914)[iParam1 /*9*/])->f_2 = 1;
		}
	}
	else
	{
		if (((uParam0->f_57 && iVar9 == 0) && ((*Global_1911914)[iParam1 /*9*/])->f_2) && bParam4)
		{
			DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(uParam0->f_40, iVar0);
		}
		((*Global_1911914)[iParam1 /*9*/])->f_2 = 0;
	}
	if (bParam5)
	{
		if (func_575(iVar3, &Var15, joaat("inventory"), 0, 0, 0))
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
	if (!uParam0->f_31)
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

int func_1101(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		return PED::GET_MOUNT(iParam0);
	}
	return 0;
}

char* func_1102(var uParam0)
{
	return "MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A";
}

char* func_1103(var uParam0)
{
	return "craft_trans_stow";
}

int func_1104(int iParam0)
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

void func_1105(var uParam0)
{
	if (func_190(uParam0->f_77, 1147021565) && !func_190(uParam0->f_77, 1919582297))
	{
		if (func_259(uParam0->f_77, 5))
		{
			ATTRIBUTE::_0x7E2C766ADB2C5F1A(uParam0->f_77, 2);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgHorse", 1);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgPlayer", 0);
		}
		else
		{
			ATTRIBUTE::_0x7E2C766ADB2C5F1A(uParam0->f_77, 1);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgHorse", 0);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgPlayer", 1);
		}
	}
	else
	{
		ATTRIBUTE::_0xD962F8579D702DB5();
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgHorse", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgPlayer", 0);
	}
}

bool func_1106(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	bool bVar34;
	bool bVar35;
	struct<2> Var36;
	int iVar39;
	bool bVar40;
	int iVar41;
	char* sVar42;
	char cVar43[16];
	int iVar45;
	int iVar46;
	int iVar47;
	var uVar48;
	int iVar49;

	bVar34 = !bParam4;
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam2->f_51);
	iVar33 = 0;
	while (iVar33 < 4)
	{
		DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(uParam2->f_51, &(uParam2->f_46[iVar33]));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam2->f_41[iVar33]), "visible", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam2->f_41[iVar33]), "inUse", 0);
		iVar33++;
	}
	if (!bParam4 && func_902(iParam0, iParam1, &Var0, &iVar32, 1, 0))
	{
		bVar35 = func_551();
		iVar33 = 0;
		while (iVar33 < iVar32)
		{
			if (iVar33 >= 4)
			{
			}
			else
			{
				iVar31 = &Var0[iVar33 /*2*/];
				if (func_121(iVar31, 0))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam2->f_41[iVar33]), "visible", 1);
					if (func_575(iVar31, &Var36, joaat("inventory"), 0, 0, 0))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam2->f_41[iVar33]), "texture", Var36);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam2->f_41[iVar33]), "textureDictionary", Var36.f_1);
					}
					iVar39 = func_124(iVar31, 0, 0);
					if (func_321(iVar31) || func_639(iVar31))
					{
						if (bVar35)
						{
							iVar41 = 0;
							iVar39 = (iVar39 + func_1093(7, iVar31, &iVar41));
						}
						iVar39 = (iVar39 + func_1092(iVar31, 0));
					}
					bVar40 = iVar39 >= (Var0[iVar33 /*2*/])->f_1;
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam2->f_41[iVar33]), "count", iVar39);
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam2->f_41[iVar33]), "enabled", func_843(bVar40, 1, 0));
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam2->f_41[iVar33]), "inUse", 1);
					if (!bVar40)
					{
						bVar34 = false;
					}
					sVar42 = MISC::_CREATE_VAR_STRING(10, "CRFT_ING_LIST", MISC::_CREATE_VAR_STRING(0, &(Var0[iVar33 /*2*/])), (Var0[iVar33 /*2*/])->f_1);
					StringCopy(&cVar43, "Text", 16);
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam2->f_46[iVar33]), &cVar43, sVar42);
					StringCopy(&cVar43, "Enabled", 16);
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam2->f_46[iVar33]), &cVar43, func_843(bVar40, 1, 0));
					DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam2->f_51, -1, 309940639, &(uParam2->f_46[iVar33]));
				}
				iVar33++;
			}
		}
	}
	if (bVar34)
	{
		if (!uParam2->f_31 && ((uParam2->f_80 || uParam2->f_78 == -214678071) || uParam2->f_78 == 278772510))
		{
			bVar34 = false;
			if (func_317(iParam0))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_FIRE_CK"));
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_FIRE"));
			}
		}
		else if (!uParam2->f_32 && uParam2->f_78 == 278772510)
		{
			bVar34 = false;
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_GRLL_CK"));
		}
		else
		{
			iVar45 = func_124(iParam0, 0, 0);
			iVar46 = func_856(iParam0, 0);
			if ((iVar46 - iVar45) > 0 || iVar46 == -1)
			{
				iVar47 = func_372(iParam0, -1636519629);
				if (!uParam2->f_83 && iVar47 == -701492487)
				{
					bVar34 = false;
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_PERC"));
				}
				else if (iVar47 == -701492487 && uParam2->f_84 > 0)
				{
					bVar34 = false;
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_PERC_FULL"));
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iParam3))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::_CREATE_VAR_STRING(34, "CRFT_BREAK", 1, MISC::_CREATE_VAR_STRING(0, PLAYER::_0x0139637A3BFF8B6D(iParam3, &uVar48))));
				}
				else
				{
					iVar49 = func_857(iParam0, uParam2->f_78, func_551(), 0);
					if (uParam2->f_78 == -214678071)
					{
						if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam2->f_73, "iNumCostVariants") <= 1 && DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam2->f_39, "ShowRpgDescription"))
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::_CREATE_VAR_STRING(2, "CAMP_MEAT_POOR"));
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::_CREATE_VAR_STRING(2, "COOK_ING_HAVE", iVar49));
						}
					}
					else if (uParam2->f_78 == 278772510)
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::_CREATE_VAR_STRING(2, "COOK_ING_HAVE", iVar49));
					}
					else if (iVar47 == -701492487)
					{
						if (iVar49 == 1)
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::_CREATE_VAR_STRING(2, "BREW_ING_HAVE1", iVar49));
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::_CREATE_VAR_STRING(2, "BREW_ING_HAVE", iVar49));
						}
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_HAVE", iVar49));
					}
				}
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::_CREATE_VAR_STRING(130, "CRFT_ING_MAX", iVar45, iVar46, MISC::_CREATE_VAR_STRING(0, iParam0)));
				bVar34 = false;
			}
		}
	}
	else if (bParam4)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_LOCK"));
	}
	else if (!uParam2->f_31 && ((uParam2->f_80 || uParam2->f_78 == -214678071) || uParam2->f_78 == 278772510))
	{
		bVar34 = false;
		if (func_317(iParam0))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_FIRE_CK"));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_FIRE"));
		}
	}
	else if (!uParam2->f_32 && uParam2->f_78 == 278772510)
	{
		bVar34 = false;
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_GRLL_CK"));
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_NEED"));
	}
	return bVar34;
}

int func_1107(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_1108(int iParam0, int iParam1)
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

int func_1109(int iParam0)
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

void func_1110(var uParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgHorse", 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgPlayer", 0);
}

void func_1111(var uParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_39, "filterIndex");
	uParam0->f_52 = iVar0;
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_39, "filter", func_1097(uParam0->f_52));
}

int func_1112(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	if (WEAPON::_0xDDC64F5E31EEDAB6(iVar0))
	{
		return -236347221;
	}
	else if (WEAPON::_0xC212F1D05A8232BB(iVar0))
	{
		return 1537403900;
	}
	else if (WEAPON::_0x0A82317B7EBFC420(iVar0))
	{
		return 809653548;
	}
	else if (WEAPON::_0xDDB2578E95EF7138(iVar0))
	{
		return 975914773;
	}
	else if (WEAPON::_0xC75386174ECE95D5(iVar0))
	{
		return -91245513;
	}
	return 0;
}

Vector3 func_1113(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	if (WEAPON::_0xDDC64F5E31EEDAB6(iVar0))
	{
		return 0f, 0f, 0f;
	}
	else if (WEAPON::_0xC212F1D05A8232BB(iVar0))
	{
		return -0.005f, 0f, 0f;
	}
	else if (WEAPON::_0x0A82317B7EBFC420(iVar0))
	{
		return -0.03f, 0f, 0f;
	}
	else if (WEAPON::_0xDDB2578E95EF7138(iVar0))
	{
		return 0.005f, 0f, 0f;
	}
	else if (WEAPON::_0xC75386174ECE95D5(iVar0))
	{
		return 0f, 0f, 0f;
	}
	return 0f, 0f, 0f;
}

int func_1114(struct<4> Param0, int iParam4, bool bParam5)
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
	if (!func_616(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_122(Var1.f_4);
	if (iVar15 == joaat("horse"))
	{
		Var16 = { func_1220(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_1221(joaat("update"), &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("clothing"))
	{
		Var44 = { func_1222(Param0, 1) };
		Var44.f_10 = iParam4;
		iVar0 = func_1223(joaat("update"), &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var61 = { func_1224(&Var1) };
		Var61.f_10 = iParam4;
		iVar0 = func_299(joaat("update"), &Var61, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_1115(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam0 != 0)
	{
		iVar5 = func_199(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_891(iParam0);
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

int func_1116(int iParam0)
{
	int iVar0;

	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_199(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar0);
}

void func_1117(int iParam0, int iParam1, var uParam2, int iParam3)
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
	struct<2> Var21[15];

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
		Var21[iVar0 /*2*/] = uParam2[iVar0 /*2*/];
		(Var21[iVar0 /*2*/])->f_1 = 1f;
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
							if (&Var21[iVar0 /*2*/] == Var19)
							{
								(Var21[iVar0 /*2*/])->f_1 = ((Var21[iVar0 /*2*/])->f_1 - Var19.f_1);
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
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if ((Var21[iVar0 /*2*/])->f_1 != 1f)
		{
			((*uParam2)[iVar0 /*2*/])->f_1 = BUILTIN::FLOOR((IntToFloat(((*uParam2)[iVar0 /*2*/])->f_1) * ((Var21[iVar0 /*2*/])->f_1 / 1f)));
		}
		iVar0++;
	}
}

int func_1118(int iParam0)
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

int func_1119(var uParam0, var uParam1)
{
	return 0;
}

int func_1120()
{
	return 0;
}

int func_1121(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_0xE787F05DFC977BDE(func_86(0), -1845241476, 0);
		case 1:
			return INVENTORY::_0xE787F05DFC977BDE(func_86(0), 1654063339, 0);
		case 2:
			return INVENTORY::_0xE787F05DFC977BDE(func_86(0), 1623931083, 0);
	}
	return 0;
}

struct<4> func_1122(int iParam0, int iParam1)
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

var func_1123(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_1124(int iParam0)
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

char* func_1125(int iParam0)
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

int func_1126(int iParam0)
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

int func_1127(int iParam0)
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

int func_1128(int iParam0)
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

int func_1129(int iParam0, int iParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return 0;
	}
	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		return 0;
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

bool func_1130(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_1225(1);
}

int func_1131(int iParam0)
{
	return 0;
}

int func_1132(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	var uVar9;

	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_583(0) };
	Var0.f_4 = func_582(iParam1);
	Var5 = { func_346(iParam0, Var0, Var0.f_4, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var5))
	{
		return 0;
	}
	uVar9 = INVENTORY::_0xC97E0D2302382211(func_86(0), &Var5, 0);
	return uVar9;
}

bool func_1133(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_1134()
{
	return Global_1109400->f_244;
}

void func_1135(var uParam0, int iParam1, struct<15> Param2)
{
	int iVar0;
	struct<22> Var1;

	if (!func_1146(uParam0))
	{
		return;
	}
	if (&Global_1224423 < 20)
	{
		Global_1224423 = &Global_1224423 + 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1224423->f_1[iVar0 /*22*/]) = { *(Global_1224423->f_1[iVar0 + 1 /*22*/]) };
			iVar0++;
		}
	}
	Var1.f_7.f_1 = 10;
	Var1.f_7.f_14 = 255;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_7 = { Param2 };
	Var1.f_6 = 1;
	*(Global_1224423->f_1[(&Global_1224423 - 1) /*22*/]) = { Var1 };
}

int func_1136(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return 0;
	}
	return 1;
}

int func_1137(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 1;
	}
	return 0;
}

Vector3 func_1138(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return -2578.509f, 389.3037f, 148.3825f;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_15;
}

float func_1139()
{
	switch (Global_40.f_4283)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return 70f;
	}
	return 25f;
}

int func_1140(int iParam0)
{
	if (!func_119(iParam0))
	{
		return 0;
	}
	return func_1226(func_280(iParam0));
}

int func_1141(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_1227(iParam0, bParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

int func_1142(int iParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		return 0;
	}
	if (func_1228(iParam0))
	{
		switch (iParam0)
		{
			case 14:
			case 34:
				return 0;
		}
	}
	switch (iParam0)
	{
		case 5:
		case 8:
		case 10:
		case 12:
		case 13:
		case 14:
		case 18:
		case 21:
		case 27:
		case 28:
		case 29:
		case 34:
		case 40:
		case 41:
		case 44:
		case 46:
		case 48:
		case 51:
		case 54:
		case 55:
		case 63:
			return 1;
	}
	return 0;
}

bool func_1143(int iParam0)
{
	return func_1229(iParam0);
}

int func_1144(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_931(iParam0, bParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

int func_1145(int iParam0)
{
	if (!func_119(iParam0))
	{
		return -1;
	}
	return func_1230(iParam0);
}

int func_1146(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

void func_1147(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3[10];
	int iVar14;
	int iVar15;

	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	iVar1 = 878851736; /* GXTEntry: "Beef Stew" */
	iVar2 = Global_40.f_4283;
	if (func_1231(ENTITY::GET_ENTITY_MODEL(iVar0), iVar2))
	{
		iVar1 = -1708424762; /* GXTEntry: "Regional Beef Stew" */
	}
	else
	{
		func_1208(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), &uVar3);
		iVar15 = 0;
		while (iVar15 < 10)
		{
			if (!func_121(&(uVar3[iVar15]), 0))
			{
			}
			else if (!func_1232(&(uVar3[iVar15])))
			{
			}
			else
			{
				iVar14 = func_1233(&(uVar3[iVar15]), iVar2);
				if (func_1234(iVar14, iVar1))
				{
					iVar1 = iVar14;
				}
			}
			iVar15++;
		}
	}
	func_1235(&iVar1);
	if (func_1234(iVar1, Global_1357549->f_1492))
	{
		Global_1357549->f_1492 = iVar1;
	}
}

struct<4> func_1148(int iParam0, int iParam1)
{
	struct<5> Var0;

	Var0 = { func_1236(iParam0) };
	return func_1237(iParam0, iParam1, Var0, Var0.f_4);
}

int func_1149(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_1150(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return 1;
}

int func_1150(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iParam0 == Global_1900383[iVar0 /*45*/])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1151(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iParam0 = func_395(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_1238(iParam1);
	iVar1 = func_1239(iVar0, 1);
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_298[iVar1] = (&(Global_40.f_1095.f_1[iParam0 /*436*/])->f_298[iVar1] - iParam2);
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_298[iVar1] = func_597(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_298[iVar1]), 0, 10);
}

int func_1152(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<2> Var3;

	if (!func_121(iParam1, 0))
	{
		return 0;
	}
	bVar0 = iParam4 == 562618531;
	bVar1 = iParam4 == 1992602754;
	bVar2 = iParam4 == -1387038764;
	if (!func_1240(iParam0, iParam1, 1))
	{
		return 0;
	}
	Var3 = { func_436(iParam1) };
	if (STATS::_STAT_ID_IS_VALID(&Var3))
	{
		if ((func_943(iParam0, iParam1) - iParam2) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var3, iParam2);
		}
		else if ((func_943(iParam0, iParam1) - iParam2) < 0)
		{
			func_1152(iParam0, iParam1, func_124(iParam1, 0, 0), bParam3, iParam4);
			return 0;
		}
	}
	if (!func_1241(iParam0, iParam1, iParam2, iParam4, bParam3))
	{
		return 0;
	}
	if (!func_98(0))
	{
		bParam3 = true;
	}
	if (!bParam3 && iParam1 != 1309979101)
	{
		func_256(iParam1, -iParam2, bVar0, bVar1, bVar2);
	}
	return 1;
}

int func_1153(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -2059726619 /* GXTEntry: "Good Beaver Pelt" */;
		case 1:
			return -1569450319 /* GXTEntry: "Poor Beaver Pelt" */;
		case 2:
			return 854596618 /* GXTEntry: "Perfect Beaver Pelt" */;
		case 3:
			return -150200864 /* GXTEntry: "Legendary Beaver Pelt" */;
		case 4:
			return 2109269555 /* GXTEntry: "Legendary Boar Pelt" */;
		case 5:
			return 2116849039;
		case 6:
			return 1248540072 /* GXTEntry: "Poor Boar Pelt" */;
		case 7:
			return -1858513856 /* GXTEntry: "Perfect Boar Pelt" */;
		case 8:
			return -868657362 /* GXTEntry: "Good Buck Pelt" */;
		case 9:
			return 1603936352 /* GXTEntry: "Poor Buck Pelt" */;
		case 10:
			return -702790226 /* GXTEntry: "Perfect Buck Pelt" */;
		case 11:
			return -888740979 /* GXTEntry: "Legendary Buck Pelt" */;
		case 12:
			return 459744337 /* GXTEntry: "Good Cougar Pelt" */;
		case 13:
			return 1914602340 /* GXTEntry: "Poor Cougar Pelt" */;
		case 14:
			return -1791452194 /* GXTEntry: "Perfect Cougar Pelt" */;
		case 15:
			return 1528935719 /* GXTEntry: "Legendary Cougar Pelt" */;
		case 16:
			return 1150939141 /* GXTEntry: "Good Coyote Pelt" */;
		case 17:
			return -1558096473 /* GXTEntry: "Poor Coyote Pelt" */;
		case 18:
			return -794277189 /* GXTEntry: "Perfect Coyote Pelt" */;
		case 19:
			return -1517904196 /* GXTEntry: "Legendary Coyote Pelt" */;
		case 20:
			return -1827027577 /* GXTEntry: "Good Deer Pelt" */;
		case 21:
			return -662178186 /* GXTEntry: "Poor Deer Pelt" */;
		case 22:
			return -1035515486 /* GXTEntry: "Perfect Deer Pelt" */;
		case 23:
			return 238733925 /* GXTEntry: "Good Fox Pelt" */;
		case 24:
			return 1647012424 /* GXTEntry: "Poor Fox Pelt" */;
		case 25:
			return 500722008 /* GXTEntry: "Perfect Fox Pelt" */;
		case 26:
			return 1642484975 /* GXTEntry: "Legendary Fox Pelt" */;
		case 27:
			return 1710714415 /* GXTEntry: "Good Goat Hide" */;
		case 28:
			return 699990316 /* GXTEntry: "Poor Goat Hide" */;
		case 29:
			return -1648383828 /* GXTEntry: "Perfect Goat Hide" */;
		case 30:
			return -1379330323 /* GXTEntry: "Good Collared Peccary Pig Pelt" */;
		case 31:
			return -99092070 /* GXTEntry: "Poor Collared Peccary Pig Pelt" */;
		case 32:
			return 1963510418 /* GXTEntry: "Perfect Collared Peccary Pig Pelt" */;
		case 33:
			return 2047376405 /* GXTEntry: "White Cougar Pelt" */;
		case 34:
			return -395646254 /* GXTEntry: "Good Panther Pelt" */;
		case 35:
			return 1584468323 /* GXTEntry: "Poor Panther Pelt" */;
		case 36:
			return 1969175294 /* GXTEntry: "Perfect Panther Pelt" */;
		case 37:
			return 657906142 /* GXTEntry: "Legendary Panther Pelt" */;
		case 38:
			return -57190831 /* GXTEntry: "Good Pig Hide" */;
		case 39:
			return -308965548 /* GXTEntry: "Poor Pig Hide" */;
		case 40:
			return -1102272634 /* GXTEntry: "Perfect Pig Hide" */;
		case 41:
			return 554578289 /* GXTEntry: "Good Pronghorn Hide" */;
		case 42:
			return -983605026 /* GXTEntry: "Poor Pronghorn Hide" */;
		case 43:
			return -1544126829 /* GXTEntry: "Perfect Pronghorn Hide" */;
		case 44:
			return -103050851 /* GXTEntry: "Legendary Pronghorn Hide" */;
		case 45:
			return -476045512 /* GXTEntry: "Good Ram Hide" */;
		case 46:
			return 1796037447 /* GXTEntry: "Poor Ram Hide" */;
		case 47:
			return 1795984405 /* GXTEntry: "Perfect Ram Hide" */;
		case 48:
			return -734947450 /* GXTEntry: "Legendary Ram Hide" */;
		case 49:
			return -1317365569 /* GXTEntry: "Good Sheep Hide" */;
		case 50:
			return 1729948479 /* GXTEntry: "Poor Sheep Hide" */;
		case 51:
			return 1466150167 /* GXTEntry: "Perfect Sheep Hide" */;
		case 52:
			return 1145777975 /* GXTEntry: "Good Wolf Pelt" */;
		case 53:
			return 85441452 /* GXTEntry: "Poor Wolf Pelt" */;
		case 54:
			return 653400939 /* GXTEntry: "Perfect Wolf Pelt" */;
		case 55:
			return 552246565 /* GXTEntry: "Legendary Wolf Pelt" */;
		case 56:
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

void func_1154(int iParam0, int iParam1)
{
	int iVar0;

	if (func_23() == -1)
	{
		iVar0 = func_204(7);
	}
	else
	{
		iVar0 = PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID());
	}
	func_946(iVar0, iParam0, iParam1);
}

int func_1155(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_583(0) };
	Var0.f_4 = 724026534;
	Var5 = { func_346(iParam0, Var0, Var0.f_4, 0) };
	return func_347(iParam0, &Var5, &Var0, iParam1, iParam3, bParam2, 0);
}

int func_1156()
{
	return -1;
}

float func_1157(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1f;
	}
	return func_1002(Global_35, iParam0, bParam1, bParam2);
}

int func_1158(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	iVar1 = -1;
	fVar2 = 1E+08f;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!bParam3 || func_1242(iVar0))
		{
			fVar3 = func_1243(iVar0, vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_1159(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_1244(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

Vector3 func_1160(int iParam0)
{
	return func_1245(iParam0);
}

Vector3 func_1161(int iParam0)
{
	vector3 vVar0;

	if (!func_117(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_1246(iParam0, &vVar0))
	{
		((*Global_1347702)[iParam0 /*49*/])->f_24 = { vVar0 };
	}
	return ((*Global_1347702)[iParam0 /*49*/])->f_24;
}

bool func_1162(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_1163(int iParam0)
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

bool func_1164(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

int func_1165(int iParam0)
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

int func_1166(int iParam0)
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

int func_1167(int iParam0)
{
	int iVar0;
	struct<11> Var1;
	int iVar95;

	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_1247(&iVar0, 0, iVar95, &Var1) && !func_1247(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(Var1))
		{
			func_1248(iVar0, &Var1);
			if (func_121(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

bool func_1168(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_997(iParam0))
		{
			return false;
		}
	}
	if (Global_1572887->f_12 != -1)
	{
		return (Global_36637[iParam0] && iParam1) != 0;
	}
	return (Global_40.f_9274[iParam0] && iParam1) != 0;
}

int func_1169(int iParam0)
{
	if (!func_997(iParam0))
	{
		return 0;
	}
	return func_1168(iParam0, 2, 1);
}

int func_1170(int iParam0)
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

void func_1171(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			func_63(210, 0);
			break;
		case 16:
			func_63(211, 0);
			break;
		case 33:
			func_63(212, 0);
			break;
		case 42:
			func_63(213, 0);
			break;
		case 2:
			func_63(214, 0);
			break;
		case 3:
			func_63(215, 0);
			break;
		case 43:
			func_63(216, 0);
			break;
		case 15:
			func_63(217, 0);
			break;
		case 23:
			func_63(218, 0);
			break;
		case 37:
			func_63(219, 0);
			break;
		case 26:
			func_63(220, 0);
			break;
		case 13:
			func_63(221, 0);
			break;
		case 19:
			func_63(222, 0);
			break;
		case 34:
			func_63(223, 0);
			break;
		case 38:
			func_63(224, 0);
			break;
		case 40:
			func_63(225, 0);
			break;
		case 7:
			func_63(226, 0);
			break;
		case 20:
			func_63(227, 0);
			break;
		case 18:
			func_63(228, 0);
			break;
		case 6:
			func_63(229, 0);
			break;
		case 29:
			func_63(230, 0);
			break;
		case 39:
			func_63(231, 0);
			break;
		case 11:
			break;
		case 4:
			func_63(233, 0);
			break;
		case 8:
			func_63(234, 0);
			break;
		case 28:
			func_63(235, 0);
			break;
		case 31:
			func_63(236, 0);
			break;
		case 12:
			func_63(237, 0);
			break;
		case 27:
			func_63(238, 0);
			break;
		case 41:
			func_63(239, 0);
			break;
	}
}

void func_1172(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 1:
			if (bParam1 == 1)
			{
				func_353(1849379570, 0);
			}
			else
			{
				func_353(961286348, 0);
			}
			break;
		case 2:
			if (bParam1 == 1)
			{
				func_353(-837750081, 0);
			}
			else
			{
				func_353(340939753, 0);
			}
			break;
		case 3:
			if (bParam1 == 1)
			{
				func_353(-342875345, 0);
			}
			else
			{
				func_353(-1349311606, 0);
			}
			break;
		case 4:
			if (bParam1 == 1)
			{
				func_353(-1083564345, 0);
			}
			else
			{
				func_353(833225684, 0);
			}
			break;
		case 5:
			if (bParam1 == 1)
			{
				func_353(-363984637, 0);
			}
			else
			{
				func_353(1254542371, 0);
			}
			break;
		case 6:
			if (bParam1 == 1)
			{
				func_353(205335377, 0);
			}
			else
			{
				func_353(637367741, 0);
			}
			break;
		case 11:
			if (bParam1 == 1)
			{
				func_353(-1389317844, 0);
			}
			else
			{
				func_353(-556895345, 0);
			}
			break;
		case 7:
			if (bParam1 == 1)
			{
				func_353(-1907629529, 0);
			}
			else
			{
				func_353(1599606732, 0);
			}
			break;
		case 39:
			if (bParam1 == 1)
			{
				func_353(240007023, 0);
			}
			else
			{
				func_353(-1520210138, 0);
			}
			break;
		case 8:
			if (bParam1 == 1)
			{
				func_353(1312152388, 0);
			}
			else
			{
				func_353(-9418953, 0);
			}
			break;
		case 9:
			if (bParam1 == 1)
			{
				func_353(545314598, 0);
			}
			else
			{
				func_353(1529839790, 0);
			}
			break;
		case 10:
			if (bParam1 == 1)
			{
				func_353(1230485961, 0);
			}
			else
			{
				func_353(-1579920715, 0);
			}
			break;
		case 12:
			if (bParam1 == 1)
			{
				func_353(-201902289, 0);
			}
			else
			{
				func_353(1415616009, 0);
			}
			break;
		case 13:
			if (bParam1 == 1)
			{
				func_353(-564622057, 0);
			}
			else
			{
				func_353(-1442109431, 0);
			}
			break;
		case 14:
			if (bParam1 == 1)
			{
				func_353(-1303190422, 0);
			}
			else
			{
				func_353(-1299326860, 0);
			}
			break;
		case 15:
			if (bParam1 == 1)
			{
				func_353(-88060354, 0);
			}
			else
			{
				func_353(-366222423, 0);
			}
			break;
		case 40:
			if (bParam1 == 1)
			{
				func_353(1312248008, 0);
			}
			else
			{
				func_353(621868532, 0);
			}
			break;
		case 17:
			if (bParam1 == 1)
			{
				func_353(428446588, 0);
			}
			else
			{
				func_353(-1730302202, 0);
			}
			break;
		case 18:
			if (bParam1 == 1)
			{
				func_353(37692363, 0);
			}
			else
			{
				func_353(629404512, 0);
			}
			break;
		case 16:
			if (bParam1 == 1)
			{
				func_353(877023893, 0);
			}
			else
			{
				func_353(122486811, 0);
			}
			break;
		case 19:
			if (bParam1 == 1)
			{
				func_353(-706642783, 0);
			}
			else
			{
				func_353(621155065, 0);
			}
			break;
		case 20:
			if (bParam1 == 1)
			{
				func_353(-918250703, 0);
			}
			else
			{
				func_353(1945953943, 0);
			}
			break;
		case 21:
			if (bParam1 == 1)
			{
				func_353(722815515, 0);
			}
			else
			{
				func_353(-80758135, 0);
			}
			break;
		case 22:
			if (bParam1 == 1)
			{
				func_353(1053305061, 0);
			}
			else
			{
				func_353(1789349782, 0);
			}
			break;
		case 23:
			if (bParam1 == 1)
			{
				func_353(1024520106, 0);
			}
			else
			{
				func_353(1105521253, 0);
			}
			break;
		case 41:
			if (bParam1 == 1)
			{
				func_353(1140872184, 0);
			}
			else
			{
				func_353(-237709193, 0);
			}
			break;
		case 24:
			if (bParam1 == 1)
			{
				func_353(-1590595690, 0);
			}
			else
			{
				func_353(1836601784, 0);
			}
			break;
		case 25:
			if (bParam1 == 1)
			{
				func_353(1164380735, 0);
			}
			else
			{
				func_353(-1984992129, 0);
			}
			break;
		case 26:
			if (bParam1 == 1)
			{
				func_353(301696279, 0);
			}
			else
			{
				func_353(152181092, 0);
			}
			break;
		case 27:
			if (bParam1 == 1)
			{
				func_353(-415970359, 0);
			}
			else
			{
				func_353(839837681, 0);
			}
			break;
		case 28:
			if (bParam1 == 1)
			{
				func_353(1669531798, 0);
			}
			else
			{
				func_353(1602454819, 0);
			}
			break;
		case 29:
			if (bParam1 == 1)
			{
				func_353(-977383775, 0);
			}
			else
			{
				func_353(-1875435665, 0);
			}
			break;
		case 30:
			if (bParam1 == 1)
			{
				func_353(1183317680, 0);
			}
			else
			{
				func_353(-247145433, 0);
			}
			break;
		case 31:
			if (bParam1 == 1)
			{
				func_353(667332266, 0);
			}
			else
			{
				func_353(-368365640, 0);
			}
			break;
		case 33:
			if (bParam1 == 1)
			{
				func_353(-1578905205, 0);
			}
			else
			{
				func_353(946087658, 0);
			}
			break;
		case 32:
			if (bParam1 == 1)
			{
				func_353(-448931053, 0);
			}
			else
			{
				func_353(-421010414, 0);
			}
			break;
		case 34:
			if (bParam1 == 1)
			{
				func_353(-1162930163, 0);
			}
			else
			{
				func_353(-1228311530, 0);
			}
			break;
		case 35:
			if (bParam1 == 1)
			{
				func_353(1004123602, 0);
			}
			else
			{
				func_353(1321329534, 0);
			}
			break;
		case 36:
			if (bParam1 == 1)
			{
				func_353(281748406, 0);
			}
			else
			{
				func_353(-173822042, 0);
			}
			break;
		case 37:
			if (bParam1 == 1)
			{
				func_353(-1351305881, 0);
			}
			else
			{
				func_353(-1650817073, 0);
			}
			break;
		case 38:
			if (bParam1 == 1)
			{
				func_353(-1644190131, 0);
			}
			else
			{
				func_353(844678349, 0);
			}
			break;
		case 42:
			if (bParam1 == 1)
			{
				func_353(-926127573, 0);
			}
			else
			{
				func_353(-1260559150, 0);
			}
			break;
		case 43:
			if (bParam1 == 1)
			{
				func_353(758690400, 0);
			}
			else
			{
				func_353(1430679359, 0);
			}
			break;
		default:
			break;
	}
}

int func_1173()
{
	return Global_1946804->f_1497;
}

void func_1174(int iParam0, var uParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_1175(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_0x93FFD92F05EC32FD(uParam0->f_3.f_1))
	{
		func_1249(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_413(func_591(iParam1), 1);
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
		func_1250(uParam0);
	}
}

int func_1176(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (!func_724(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_199(iParam0) != -999503751)
		{
			func_1251(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_199(iParam0) != -999503751)
	{
		func_1251(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1006(iParam0, 1);
	return 1;
}

bool func_1177(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1178(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_1179(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1180(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_1181(var uParam0, int iParam1, int iParam2)
{
	*((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

void func_1182(var uParam0, int iParam1, int iParam2)
{
	*((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

void func_1183(var uParam0, int iParam1)
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
			func_1181(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
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
		func_1182(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
		iVar0++;
	}
}

void func_1184(int iParam0, int iParam1, int iParam2)
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

int func_1185(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1058888->f_49111), iParam0))
	{
		return 1;
	}
	return 0;
}

void func_1186(int iParam0)
{
	int iVar0;

	if (func_1252() != 0 || func_23() != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (!&Global_1225638->f_21[iVar0])
	{
		func_1253(iParam0);
		return;
	}
	if (&Global_1058888->f_42357.f_1[iVar0 /*5*/] == 1)
	{
		return;
	}
	func_1254(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1058888->f_42357.f_1[iVar0 /*5*/] = 1;
}

void func_1187()
{
	var uVar0;
	struct<4> Var30;

	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	uVar0 = 29;
	func_1255(Global_35, &uVar0);
	Var30 = { func_583(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_1256(0);
	func_1257(7);
	func_409(-1623728698 /* GXTEntry: "Bandana" */, 1, 1, 0);
	if (func_728() == 1160113249)
	{
		func_409(-763730846 /* GXTEntry: "John\'s Classic Hat" */, 1, 1, 1);
		func_409(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	func_1258(Global_35, &uVar0);
}

int func_1188(int iParam0, int iParam1)
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
		iParam1 = func_86(0);
	}
	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_844(&uVar6, iVar0);
	func_845(&uVar6, iVar1);
	func_846(&uVar6, iVar2);
	func_847(&uVar6, iVar3);
	func_848(&uVar6, iVar4);
	func_849(&uVar6, iVar5);
	return uVar6;
}

void func_1189(int iParam0)
{
	struct<2> Var0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_523(1356759001) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

int func_1190(int iParam0, int iParam1)
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

char* func_1191(int iParam0)
{
	int iVar0;

	iVar0 = func_1023(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_988(iVar0);
}

int func_1192(int iParam0)
{
	int iVar0;

	if (func_1259(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_1260(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_1261(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_1262(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

int func_1193(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_25(func_1263(iVar0, iParam0), 1, 0))
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

int func_1194(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_25(func_1264(iVar0, iParam0), 1, 0))
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

bool func_1195(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_1196()
{
	int iVar0;

	if (func_23() != -1)
	{
		return;
	}
	func_498(1654063339, 1, 752097756);
	iVar0 = func_587(1);
	func_911(1, iVar0, 0);
}

void func_1197(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_1198()
{
	int iVar0;

	if (func_23() != -1)
	{
		return;
	}
	func_498(1623931083, 1, 752097756);
	iVar0 = func_587(2);
	func_911(2, iVar0, 0);
}

void func_1199()
{
	int iVar0;

	if (func_23() != -1)
	{
		return;
	}
	func_498(-1845241476, 1, 752097756);
	iVar0 = func_587(0);
	func_911(0, iVar0, 0);
}

char* func_1200(int iParam0)
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

void func_1201(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_1075();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569->f_753.f_5[iParam0 /*3*/] = fParam1;
			break;
		case 1:
			Global_1955569->f_866.f_2.f_5[iParam0 /*3*/] = fParam1;
			break;
		default:
			break;
	}
}

void func_1202(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_1075();
	}
	switch (iParam2)
	{
		case 0:
			(Global_1955569->f_753.f_15[iParam0 /*3*/])->f_2 = iParam1;
			break;
		case 1:
			(Global_1955569->f_866.f_2.f_15[iParam0 /*3*/])->f_2 = iParam1;
			break;
		default:
			break;
	}
}

void func_1203(int iParam0)
{
	struct<2> Var0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_1225(1) < iParam0)
	{
		iParam0 = func_1225(1);
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	Var0 = { func_523(1644987397) };
	STATS::_0xBD861AE8A5181ED7(&Var0, iParam0);
}

void func_1204(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_577(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, joaat("COLOR_RED"), 0, 0, 0, 1);
}

int func_1205(int iParam0)
{
	iParam0 = func_395(iParam0);
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

int func_1206(int iParam0)
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

int func_1207(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = -1;
	iVar1 = 1;
	iVar2 = 0;
	iVar1 = func_1210(iParam0);
	iVar2 = func_1209(iParam0);
	if (iVar2 != 0)
	{
		func_226(iParam0, 1, 1, -142743235, 0);
		iVar0 = func_1265(iVar2, iVar1, iParam0, iParam1);
	}
	return iVar0;
}

int func_1208(int iParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::_0x9A100F1CF4546629(iParam0) && !ENTITY::_0xC346A546612C49A9(iParam0))
	{
		return 0;
	}
	func_640(iParam0, &uVar1, &uVar2, &iVar0, &uVar3);
	uVar4 = PED::_0x6B89FAA36FC909A3(uParam1, iParam0, iVar0, uVar1);
	return uVar4;
}

int func_1209(int iParam0)
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

int func_1210(int iParam0)
{
	if (func_190(iParam0, 1064293907))
	{
		return 2;
	}
	else if (func_190(iParam0, -1218707194))
	{
		return 1;
	}
	else if (func_190(iParam0, 1888974372))
	{
		return 0;
	}
	return 1;
}

int func_1211(int iParam0, int iParam1, int iParam2)
{
	var uVar0[15];
	int iVar16;
	int iVar17;

	PED::_0xB29C553BA582D09E(&uVar0, iParam0, iParam1, 1);
	iVar16 = 0;
	iVar17 = 0;
	while (iVar17 < 15)
	{
		if (func_121(&(uVar0[iVar17]), 0) && iParam2 == &uVar0[iVar17])
		{
			iVar16++;
		}
		iVar17++;
	}
	return iVar16;
}

int func_1212(int iParam0)
{
	switch (iParam0)
	{
		case -1959946884:
		case -1784068921:
		case -1642438278:
		case -1349086674:
		case 310186733:
		case 456315479:
		case 471747275:
		case 1166592425:
		case 1486898918:
		case 1500419820:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1213(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1959946884:
			return 6;
		case -1784068921:
			return 7;
		case -1642438278:
			return 2;
		case -1349086674:
			return 8;
		case 310186733:
			return 5;
		case 456315479:
			return 9;
		case 471747275:
			return 3;
		case 1166592425:
			return 4;
		case 1486898918:
			return 0;
		case 1500419820:
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

void func_1214(var uParam0, int iParam1, int iParam2)
{
	((*Global_1911914)[uParam0->f_55 /*9*/])->f_5 = iParam2;
	((*Global_1911914)[uParam0->f_55 /*9*/])->f_6 = iParam1;
	((*Global_1911914)[uParam0->f_55 /*9*/])->f_7 = 1;
	((*Global_1911914)[uParam0->f_55 /*9*/])->f_8 = 0;
	Global_1911914->f_1576++;
	uParam0->f_55++;
	if (iParam2 == 600942249 || iParam2 == -257768755)
	{
		func_1266(uParam0, iParam1, iParam2);
	}
	else if (iParam2 == -214678071)
	{
		func_1267(uParam0, iParam1);
	}
}

void func_1215(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	int iVar13;
	int iVar14;

	iVar2 = func_372(iParam1, -1859264326);
	if (iVar2 == 0)
	{
		return;
	}
	Var3 = { func_901(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar2, 0) };
	if (func_1107(Var3, &iVar0, &iVar1, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar1)
		{
			if (uParam0->f_55 >= 175)
			{
			}
			else
			{
				iVar14 = func_1108(iVar13, iVar0);
				if (func_121(iVar14, 0) && iVar14 != iParam1)
				{
					func_1214(uParam0, iVar14, iParam2);
				}
				iVar13++;
			}
		}
		func_1109(iVar0);
	}
}

void func_1216(int iParam0)
{
	func_1109(*iParam0);
	*iParam0 = -1;
}

void func_1217(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	char cVar1[32];
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	struct<2> Var10;
	bool bVar13;
	char[] cVar14[8];
	int iVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<2> Var20;
	bool bVar42;
	int iVar43;
	struct<7> Var44;
	int iVar51;

	iVar0 = ((*Global_1911914)[iParam1 /*9*/])->f_6;
	StringCopy(&cVar1, "r_", 32);
	StringIntConCat(&cVar1, iVar0, 32);
	StringIntConCat(&cVar1, iParam1, 32);
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(((*Global_1911914)[iParam1 /*9*/])->f_1))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*Global_1911914)[iParam1 /*9*/])->f_1);
	}
	iVar5 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_40, &cVar1);
	((*Global_1911914)[iParam1 /*9*/])->f_1 = iVar5;
	iVar6 = ((*Global_1911914)[iParam1 /*9*/])->f_5;
	iVar7 = func_857(iVar0, iVar6, bParam3, 0);
	iVar8 = func_124(iVar0, 0, 0);
	iVar9 = func_856(iVar0, 0);
	if (iVar9 != -1)
	{
		iVar9 = (iVar9 - iVar8);
	}
	else
	{
		iVar9 = iVar7;
	}
	if (func_575(iVar0, &Var10, joaat("inventory"), 0, 0, 0))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar5, "texture", Var10);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar5, "textureDictionary", Var10.f_1);
	}
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "name", iVar0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "eOutputItem", iVar0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "eCost", iVar6);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "iIndex", iParam1);
	if (!Global_1911914->f_1579 && func_917(iVar0, iVar6, 1))
	{
		bVar13 = true;
		((*Global_1911914)[iParam1 /*9*/])->f_7 = 0;
	}
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "iCurCostVariant", ((*Global_1911914)[iParam1 /*9*/])->f_8);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "iNumCostVariants", ((*Global_1911914)[iParam1 /*9*/])->f_7);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "bFireCrafting", iVar6 == -257768755);
	StringIntConCat(&cVar14, func_858(iVar9, iVar7), 8);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar5, "count", &cVar14);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "visible", false);
	bVar16 = false;
	if (func_56(4096))
	{
		iVar15 = func_843(((iVar9 > 0 && iVar7 > 0) && func_372(iVar0, 1697966752) == 337650881), 1, 0);
	}
	else if (func_56(8192))
	{
		iVar15 = func_843(((iVar9 > 0 && iVar7 > 0) && iVar0 == 1831763320), 1, 0);
	}
	else
	{
		iVar15 = func_843(((iVar9 > 0 && iVar7 > 0) && !bVar13), 1, 0);
	}
	if (iVar15 == 0 && func_1218(iVar0))
	{
		if (func_1219(iVar0, iVar6, uParam0, bParam3, &iVar17, &iVar18, &iVar19))
		{
			iVar15 = 1;
			bVar16 = true;
			iVar0 = iVar17;
			iVar6 = iVar18;
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "name", iVar17);
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar5, "eOutputItem", iVar17);
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar5, "eCost", iVar18);
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar5, "iCurCostVariant", iVar19);
		}
	}
	if (!uParam0->f_31)
	{
		if ((iVar6 == -214678071 || iVar6 == 278772510) || iVar6 == -257768755)
		{
			iVar15 = 0;
		}
	}
	else if (!uParam0->f_32 && iVar6 == 278772510)
	{
		iVar15 = 0;
	}
	if (iVar15 == 1)
	{
		if ((!uParam0->f_83 || uParam0->f_84 > 0) && func_372(iVar0, -1636519629) == -701492487)
		{
			iVar15 = 0;
			((*Global_1911914)[iParam1 /*9*/])->f_2 = 0;
		}
		else
		{
			uParam0->f_59++;
			if (func_259(iVar0, uParam0->f_52))
			{
				uParam0->f_60++;
			}
			((*Global_1911914)[iParam1 /*9*/])->f_2 = 1;
		}
	}
	else
	{
		((*Global_1911914)[iParam1 /*9*/])->f_2 = 0;
	}
	if (bVar16)
	{
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "lockVisible", bVar13);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "enabled", iVar15);
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
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_40, -1, -2047994727, iVar5);
	}
}

int func_1218(int iParam0)
{
	if (func_56(4096))
	{
		if (func_372(iParam0, 1697966752) != 337650881)
		{
			return 0;
		}
	}
	else if (func_56(8192))
	{
		if (iParam0 != 1831763320)
		{
			return 0;
		}
	}
	return 1;
}

int func_1219(int iParam0, int iParam1, var uParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
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

	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	if (!Global_1911914->f_1579 && func_917(iParam0, iParam1, 1))
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
		iVar12 = func_372(iParam0, 1697966752);
		if (iVar12 == 0)
		{
			return 0;
		}
		if (uParam2->f_32)
		{
			Var2 = { func_901(-1591664384, -1591664384, 0, 0, 278772510, 0, -1, iVar12, 0) };
			if (func_1107(Var2, &iVar0, &iVar1, 0))
			{
				iVar13 = 0;
				while (iVar13 < iVar1)
				{
					iVar14 = func_1108(iVar13, iVar0);
					if (iParam0 == iVar14)
					{
					}
					else if (!Global_1911914->f_1579 && func_917(iVar14, 278772510, 1))
					{
					}
					else if (func_295(iVar14, 278772510, 0, bParam3, 0, 0) && !func_560(iVar14, 1, 0))
					{
						func_1109(iVar0);
						*iParam4 = iVar14;
						*iParam5 = 278772510;
						*iParam6 = iVar13;
						return 1;
					}
					iVar13++;
				}
				func_1109(iVar0);
			}
		}
		if (iParam1 == 278772510)
		{
			Var2 = { func_901(-1591664384, -1591664384, 0, 0, -214678071, 0, -1, iVar12, 0) };
			if (func_1107(Var2, &iVar0, &iVar1, 0))
			{
				iVar15 = 0;
				while (iVar15 < iVar1)
				{
					iVar16 = func_1108(iVar15, iVar0);
					if (iParam0 == iVar16)
					{
					}
					else if (!Global_1911914->f_1579 && func_917(iVar16, -214678071, 1))
					{
					}
					else if (func_295(iVar16, -214678071, 0, bParam3, 0, 0) && !func_560(iVar16, 1, 0))
					{
						func_1109(iVar0);
						*iParam4 = iVar16;
						*iParam5 = -214678071;
						*iParam6 = iVar15;
						return 1;
					}
					iVar15++;
				}
				func_1109(iVar0);
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
					if (Var18 != -489628648 && (Global_1911914->f_1579 || !func_917(iParam0, Var18, 1)))
					{
						if (func_295(iParam0, Var18, 0, bParam3, 0, 0) && !func_560(iParam0, 1, 0))
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

struct<28> func_1220(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_86(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_1224(&Var28) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_1221(int iParam0, var uParam1, bool bParam2)
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
					func_621(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_621(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 28))
	{
		func_621(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<17> func_1222(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_86(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_1224(&Var17) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_1223(int iParam0, var uParam1, bool bParam2)
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
					func_621(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_621(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17))
	{
		func_621(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<16> func_1224(var uParam0)
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

int func_1225(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_1226(int iParam0)
{
	return iParam0 & 31;
}

int func_1227(int iParam0, bool bParam1, int iParam2)
{
	if (iParam0 == 18)
	{
		return 0;
	}
	if (iParam0 == 71)
	{
		return 0;
	}
	if ((bParam1 && MAP::DOES_BLIP_EXIST(((*Global_1835011)[iParam0 /*74*/])->f_27)) && ((*Global_1835011)[iParam0 /*74*/])->f_21 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_1228(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_1268((*Global_1835011)[iParam0 /*74*/]);
	}
	return 0;
}

int func_1229(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 36:
			return 1;
	}
	return 0;
}

int func_1230(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_3;
	}
	return 0;
}

int func_1231(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			switch (iParam0)
			{
				case joaat("a_c_duck_01"):
				case joaat("a_c_rabbit_01"):
				case joaat("a_c_pronghorn_01"):
					return 1;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case joaat("a_c_buck_01"):
				case joaat("a_c_turkey_01"):
				case joaat("a_c_turkey_02"):
				case joaat("a_c_fishrainbowtrout_01_lg"):
				case joaat("a_c_fishrainbowtrout_01_ms"):
				case joaat("a_c_deer_01"):
					return 1;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case joaat("a_c_alligator_01"):
				case joaat("a_c_alligator_02"):
				case joaat("a_c_alligator_03"):
				case joaat("a_c_fishlargemouthbass_01_ms"):
				case joaat("a_c_fishlargemouthbass_01_lg"):
				case joaat("a_c_carolinaparakeet_01"):
					return 1;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case joaat("a_c_elk_01"):
				case joaat("a_c_fishsalmonsockeye_01_ms"):
				case joaat("a_c_fishsalmonsockeye_01_lg"):
				case joaat("a_c_fishsalmonsockeye_01_ml"):
				case joaat("a_c_quail_01"):
					return 1;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_1232(int iParam0)
{
	if ((func_190(iParam0, -839724752) || func_190(iParam0, -887064662)) || func_190(iParam0, 1286414894))
	{
		return 1;
	}
	return 0;
}

int func_1233(int iParam0, int iParam1)
{
	if (!func_121(iParam0, 0))
	{
		return 878851736 /* GXTEntry: "Beef Stew" */;
	}
	if (!func_1232(iParam0))
	{
		return 878851736 /* GXTEntry: "Beef Stew" */;
	}
	if (func_1269(iParam0, iParam1))
	{
		return -1708424762 /* GXTEntry: "Regional Beef Stew" */;
	}
	else if (func_190(iParam0, -1690954218))
	{
		return -1760041550 /* GXTEntry: "High Quality Beef Stew" */;
	}
	else if (func_190(iParam0, 1149630095))
	{
		return -1760041550 /* GXTEntry: "High Quality Beef Stew" */;
	}
	else if (func_190(iParam0, 194498509))
	{
		return 116793994 /* GXTEntry: "Medium Quality Beef Stew" */;
	}
	else if (func_190(iParam0, 43251425))
	{
		return 1869130580 /* GXTEntry: "Low Quality Beef Stew" */;
	}
	return 1869130580 /* GXTEntry: "Low Quality Beef Stew" */;
}

bool func_1234(int iParam0, int iParam1)
{
	int iVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	iVar0[0] = 878851736; /* GXTEntry: "Beef Stew" */
	iVar0[1] = 1762298001; /* GXTEntry: "Beef and Eggs Stew" */
	iVar0[2] = 1869130580; /* GXTEntry: "Low Quality Beef Stew" */
	iVar0[3] = 1336518004; /* GXTEntry: "Low Quality Beef and Eggs Stew" */
	iVar0[4] = 116793994; /* GXTEntry: "Medium Quality Beef Stew" */
	iVar0[5] = 515084529; /* GXTEntry: "Medium Quality Beef and Eggs Stew" */
	iVar0[6] = -1760041550; /* GXTEntry: "High Quality Beef Stew" */
	iVar0[7] = -1977068039; /* GXTEntry: "High Quality Beef and Eggs Stew" */
	iVar0[8] = -1708424762; /* GXTEntry: "Regional Beef Stew" */
	iVar0[9] = -399865011; /* GXTEntry: "Regional Beef and Eggs Stew" */
	iVar11 = -1;
	iVar12 = -1;
	iVar13 = 0;
	while (iVar13 <= 9)
	{
		if (&iVar0[iVar13] == iParam0)
		{
			iVar11 = iVar13;
		}
		else
		{
			iVar13++;
		}
	}
	if (iVar11 == -1)
	{
		return false;
	}
	iVar13 = 0;
	while (iVar13 <= 9)
	{
		if (&iVar0[iVar13] == iParam1)
		{
			iVar12 = iVar13;
		}
		else
		{
			iVar13++;
		}
	}
	if (iVar12 == -1)
	{
		return false;
	}
	return iVar11 > iVar12;
}

void func_1235(int iParam0)
{
	if (Global_40.f_4283.f_313 > 1)
	{
		switch (*iParam0)
		{
			case 878851736: /* GXTEntry: "Beef Stew" */
				*iParam0 = 1762298001; /* GXTEntry: "Beef and Eggs Stew" */
				break;
			case 1869130580: /* GXTEntry: "Low Quality Beef Stew" */
				*iParam0 = 1336518004; /* GXTEntry: "Low Quality Beef and Eggs Stew" */
				break;
			case 116793994: /* GXTEntry: "Medium Quality Beef Stew" */
				*iParam0 = 515084529; /* GXTEntry: "Medium Quality Beef and Eggs Stew" */
				break;
			case -1760041550: /* GXTEntry: "High Quality Beef Stew" */
				*iParam0 = -1977068039; /* GXTEntry: "High Quality Beef and Eggs Stew" */
				break;
			case -1708424762: /* GXTEntry: "Regional Beef Stew" */
				*iParam0 = -399865011; /* GXTEntry: "Regional Beef and Eggs Stew" */
				break;
		}
	}
}

struct<5> func_1236(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_1237(iParam0, joaat("character"), func_903(), -1591664384) };
	Var0.f_4 = 1084182731;
	return Var0;
}

struct<4> func_1237(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, int iParam6)
{
	struct<4> Var0;

	if (!func_121(iParam1, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(iParam0, &uParam2, iParam1, iParam6, &Var0);
	return Var0;
}

int func_1238(int iParam0)
{
	if (!func_945(iParam0))
	{
		return 0;
	}
	return iParam0;
}

int func_1239(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2059726619: /* GXTEntry: "Good Beaver Pelt" */
			return 0;
		case -1858513856: /* GXTEntry: "Perfect Boar Pelt" */
			return 7;
		case -1827027577: /* GXTEntry: "Good Deer Pelt" */
			return 20;
		case -1791452194: /* GXTEntry: "Perfect Cougar Pelt" */
			return 14;
		case -1648383828: /* GXTEntry: "Perfect Goat Hide" */
			return 29;
		case -1569450319: /* GXTEntry: "Poor Beaver Pelt" */
			return 1;
		case -1558096473: /* GXTEntry: "Poor Coyote Pelt" */
			return 17;
		case -1544126829: /* GXTEntry: "Perfect Pronghorn Hide" */
			return 43;
		case -1517904196: /* GXTEntry: "Legendary Coyote Pelt" */
			return 19;
		case -1379330323: /* GXTEntry: "Good Collared Peccary Pig Pelt" */
			return 30;
		case -1317365569: /* GXTEntry: "Good Sheep Hide" */
			return 49;
		case -1102272634: /* GXTEntry: "Perfect Pig Hide" */
			return 40;
		case -1035515486: /* GXTEntry: "Perfect Deer Pelt" */
			return 22;
		case -983605026: /* GXTEntry: "Poor Pronghorn Hide" */
			return 42;
		case -888740979: /* GXTEntry: "Legendary Buck Pelt" */
			return 11;
		case -868657362: /* GXTEntry: "Good Buck Pelt" */
			return 8;
		case -794277189: /* GXTEntry: "Perfect Coyote Pelt" */
			return 18;
		case -734947450: /* GXTEntry: "Legendary Ram Hide" */
			return 48;
		case -702790226: /* GXTEntry: "Perfect Buck Pelt" */
			return 10;
		case -662178186: /* GXTEntry: "Poor Deer Pelt" */
			return 21;
		case -476045512: /* GXTEntry: "Good Ram Hide" */
			return 45;
		case -395646254: /* GXTEntry: "Good Panther Pelt" */
			return 34;
		case -308965548: /* GXTEntry: "Poor Pig Hide" */
			return 39;
		case -150200864: /* GXTEntry: "Legendary Beaver Pelt" */
			return 3;
		case -103050851: /* GXTEntry: "Legendary Pronghorn Hide" */
			return 44;
		case -99092070: /* GXTEntry: "Poor Collared Peccary Pig Pelt" */
			return 31;
		case -57190831: /* GXTEntry: "Good Pig Hide" */
			return 38;
		case 0:
			return 56;
		case 85441452: /* GXTEntry: "Poor Wolf Pelt" */
			return 53;
		case 238733925: /* GXTEntry: "Good Fox Pelt" */
			return 23;
		case 459744337: /* GXTEntry: "Good Cougar Pelt" */
			return 12;
		case 500722008: /* GXTEntry: "Perfect Fox Pelt" */
			return 25;
		case 552246565: /* GXTEntry: "Legendary Wolf Pelt" */
			return 55;
		case 554578289: /* GXTEntry: "Good Pronghorn Hide" */
			return 41;
		case 653400939: /* GXTEntry: "Perfect Wolf Pelt" */
			return 54;
		case 657906142: /* GXTEntry: "Legendary Panther Pelt" */
			return 37;
		case 699990316: /* GXTEntry: "Poor Goat Hide" */
			return 28;
		case 854596618: /* GXTEntry: "Perfect Beaver Pelt" */
			return 2;
		case 1145777975: /* GXTEntry: "Good Wolf Pelt" */
			return 52;
		case 1150939141: /* GXTEntry: "Good Coyote Pelt" */
			return 16;
		case 1248540072: /* GXTEntry: "Poor Boar Pelt" */
			return 6;
		case 1466150167: /* GXTEntry: "Perfect Sheep Hide" */
			return 51;
		case 1528935719: /* GXTEntry: "Legendary Cougar Pelt" */
			return 15;
		case 1584468323: /* GXTEntry: "Poor Panther Pelt" */
			return 35;
		case 1603936352: /* GXTEntry: "Poor Buck Pelt" */
			return 9;
		case 1642484975: /* GXTEntry: "Legendary Fox Pelt" */
			return 26;
		case 1647012424: /* GXTEntry: "Poor Fox Pelt" */
			return 24;
		case 1710714415: /* GXTEntry: "Good Goat Hide" */
			return 27;
		case 1729948479: /* GXTEntry: "Poor Sheep Hide" */
			return 50;
		case 1795984405: /* GXTEntry: "Perfect Ram Hide" */
			return 47;
		case 1796037447: /* GXTEntry: "Poor Ram Hide" */
			return 46;
		case 1914602340: /* GXTEntry: "Poor Cougar Pelt" */
			return 13;
		case 1963510418: /* GXTEntry: "Perfect Collared Peccary Pig Pelt" */
			return 32;
		case 1969175294: /* GXTEntry: "Perfect Panther Pelt" */
			return 36;
		case 2047376405: /* GXTEntry: "White Cougar Pelt" */
			return 33;
		case 2109269555: /* GXTEntry: "Legendary Boar Pelt" */
			return 4;
		case 2116849039:
			return 5;
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

bool func_1240(int iParam0, int iParam1, int iParam2)
{
	if (!func_121(iParam1, 0))
	{
		return false;
	}
	return func_943(iParam0, iParam1) >= iParam2;
}

int func_1241(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_121(iParam1, 0))
	{
		return 0;
	}
	if (iParam2 < 1)
	{
		return 0;
	}
	Var0 = { func_1236(iParam0) };
	Var5 = { func_1237(iParam0, iParam1, Var0, Var0.f_4) };
	return func_1270(iParam0, iParam1, &Var5, iParam2, iParam3, bParam4);
}

int func_1242(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
	}
	return 0;
}

float func_1243(int iParam0, vector3 vParam1)
{
	if (func_1271(iParam0))
	{
		return BUILTIN::VDIST(VEHICLE::_0x1E8A921112891651(((*Global_1425371)[iParam0 /*373*/])->f_1), vParam1);
	}
	return 1E+08f;
}

int func_1244(int iParam0)
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
		iVar0 = func_604(iParam0);
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

Vector3 func_1245(int iParam0)
{
	if (func_1228(iParam0))
	{
		return func_1272(iParam0);
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_18;
}

int func_1246(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_1145(((*Global_1347702)[iParam0 /*49*/])->f_15) != 0)
		{
			((*Global_1347702)[iParam0 /*49*/])->f_18 = 80f;
			*uParam1 = { 1015.113f, 159.7295f, 103.0175f };
			return 1;
		}
	}
	else if (iParam0 == 96)
	{
		if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 65536 != 0)
		{
			*uParam1 = { -1646.77f, -1362.89f, 83.4f };
			return 1;
		}
		else
		{
			*uParam1 = { -1629.71f, -1338.377f, 82.0174f };
			return 1;
		}
	}
	return 0;
}

int func_1247(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	struct<4> Var1;
	var uVar5;

	if (func_1205(iParam1) && !func_1273(iParam1))
	{
		iVar0 = func_204(iParam1);
	}
	else
	{
		return 0;
	}
	func_1274(uParam3);
	uVar5 = func_1275(iParam2);
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

void func_1248(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_640(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_641(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_1249(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_1276(&(uParam0->f_3));
}

void func_1250(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_1277(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

void func_1251(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = func_1278(iParam1);
	func_1279(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_1280(&(uParam0->f_26), iVar1);
		if (func_1281(uParam0->f_26, &iVar0))
		{
			func_1282(iVar0, iVar1);
		}
	}
}

int func_1252()
{
	return Global_1572887->f_13;
}

void func_1253(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_13 != 0 || Global_1572887->f_12 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (&Global_1058888->f_42357.f_1[iVar0 /*5*/] == 0)
	{
		return;
	}
	func_1254(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1058888->f_42357.f_1[iVar0 /*5*/] = 0;
}

void func_1254(int iParam0)
{
	if ((Global_1058888->f_42357.f_1[iParam0 /*5*/])->f_1 != 0)
	{
		(Global_1058888->f_42357.f_1[iParam0 /*5*/])->f_2 = 0;
		(Global_1058888->f_42357.f_1[iParam0 /*5*/])->f_1 = 0;
	}
}

void func_1255(int iParam0, var uParam1)
{
	var uVar0;
	int iVar30;
	int iVar31;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
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
		if (func_286(iVar31))
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

void func_1256(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_121(iVar1, 0))
		{
			func_1011(iVar1, 0, bParam0);
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

void func_1257(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	Global_1946804->f_2657.f_26.f_2 = 3;
	Global_1946804->f_2657.f_26.f_1 = 3;
	Global_1946804->f_2657.f_26 = 3;
	if (func_23() == -1)
	{
		func_1283(352481484);
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
		if (func_199(iVar2) != -999503751)
		{
			func_1007(&(Global_1946804->f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_1006(iVar2, 0))
		{
			func_211(iVar2, &Global_1946804->f_1497.f_1[iVar1 /*3*/] == &Global_1946804->f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_1258(int iParam0, var uParam1)
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
				if (func_564(uParam1[iVar0]))
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

int func_1259(int iParam0)
{
	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	if (func_190(iParam0, -1066545920))
	{
		return 1;
	}
	return 0;
}

int func_1260(int iParam0)
{
	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	if (func_190(iParam0, -284267618))
	{
		return 1;
	}
	return 0;
}

int func_1261(int iParam0)
{
	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	if (func_190(iParam0, 363491182))
	{
		return 1;
	}
	return 0;
}

int func_1262(int iParam0)
{
	if (!func_121(iParam0, 0))
	{
		return 0;
	}
	if (func_190(iParam0, 1406113494))
	{
		return 1;
	}
	return 0;
}

int func_1263(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1284(iParam0);
		case 1:
			return func_1285(iParam0);
		case 2:
			return func_1286(iParam0);
		case 3:
			return func_1287(iParam0);
	}
	return 0;
}

int func_1264(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1288(iParam0);
		case 1:
			return func_1289(iParam0);
		case 2:
			return func_1290(iParam0);
		case 3:
			return func_1291(iParam0);
		case 4:
			return func_1292(iParam0);
		case 5:
			return func_1293(iParam0);
		case 6:
			return func_1294(iParam0);
		case 7:
			return func_1295(iParam0);
		case 8:
			return func_1296(iParam0);
	}
	return 0;
}

int func_1265(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0[15];
	int iVar16;
	int iVar17;

	PED::_0xB29C553BA582D09E(&uVar0, iParam0, iParam1, func_1297(iParam2));
	iVar16 = 0;
	while (iVar16 < 15)
	{
		if ((func_121(&(uVar0[iVar16]), 0) && !func_190(&(uVar0[iVar16]), 1286414894)) && !&uVar0[iVar16] == iParam2)
		{
			func_228(&(uVar0[iVar16]), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			if (iParam3 != 0)
			{
				if (iParam3 == &uVar0[iVar16])
				{
					iVar17++;
				}
			}
			else
			{
				iVar17++;
			}
		}
		iVar16++;
	}
	func_1298(func_98(0), 1, 0);
	return iVar17;
}

void func_1266(var uParam0, int iParam1, int iParam2)
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
				if ((Var1.f_2 == 1644203656 && Var1 != -489628648) && (Global_1911914->f_1579 || !func_917(iParam1, Var1, 1)))
				{
					((*Global_1911914)[(uParam0->f_55 - 1) /*9*/])->f_7++;
				}
			}
			else
			{
				((*Global_1911914)[(uParam0->f_55 - 1) /*9*/])->f_8 = iVar48;
			}
		}
		iVar48++;
	}
}

void func_1267(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	int iVar13;
	int iVar14;

	iVar2 = func_372(iParam1, 1697966752);
	if (iVar2 == 0)
	{
		return;
	}
	Var3 = { func_901(-1591664384, -1591664384, 0, 0, 278772510, 0, -1, iVar2, 0) };
	if (func_1107(Var3, &iVar0, &iVar1, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar1)
		{
			iVar14 = func_1108(iVar13, iVar0);
			if (func_121(iVar14, 0))
			{
				if (Global_1911914->f_1579 || !func_917(iVar14, 278772510, 1))
				{
					((*Global_1911914)[(uParam0->f_55 - 1) /*9*/])->f_7++;
				}
			}
			iVar13++;
		}
		func_1109(iVar0);
	}
}

int func_1268(var uParam0)
{
	if (func_1299(&(uParam0->f_29), 62))
	{
		switch (func_1300())
		{
			case 1:
				if (!func_1299(&(uParam0->f_29), 6))
				{
					return 0;
				}
				break;
			case 2:
				if (!func_1299(&(uParam0->f_29), 8))
				{
					return 0;
				}
				break;
			case 4:
				if (!func_1299(&(uParam0->f_29), 16))
				{
					return 0;
				}
				break;
			case 8:
				if (!func_1299(&(uParam0->f_29), 32))
				{
					if (func_1299(&(uParam0->f_29), 2))
					{
						if (func_534(func_147()) < 5)
						{
							return 0;
						}
					}
					else
					{
						return 0;
					}
				}
				break;
		}
	}
	return 1;
}

int func_1269(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			switch (iParam0)
			{
				case -1930144509: /* GXTEntry: "Good Pronghorn Carcass" */
				case -1866642239: /* GXTEntry: "Perfect Rabbit Carcass" */
				case -1816929509: /* GXTEntry: "Poor Pronghorn Carcass" */
				case -1508120809: /* GXTEntry: "Poor Rabbit Carcass" */
				case 1001171791: /* GXTEntry: "Perfect Duck Carcass" */
				case 1023080408: /* GXTEntry: "Good Duck Carcass" */
				case 1197831625: /* GXTEntry: "Good Rabbit Carcass" */
				case 1210345318: /* GXTEntry: "Poor Duck Carcass" */
				case 1846915545: /* GXTEntry: "Perfect Pronghorn Carcass" */
					return 1;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case -1837840093: /* GXTEntry: "Perfect Deer Carcass" */
				case -1836227998: /* GXTEntry: "Perfect Turkey Carcass" */
				case -1610329427: /* GXTEntry: "Good Turkey Carcass" */
				case -1310590179: /* GXTEntry: "Good Buck Carcass" */
				case -244657613: /* GXTEntry: "Poor Buck Carcass" */
				case 58634176: /* GXTEntry: "Poor Deer Carcass" */
				case 472142656: /* GXTEntry: "Good Deer Carcass" */
				case 619479575: /* GXTEntry: "Poor Turkey Carcass" */
				case 727522818: /* GXTEntry: "Poor Steelhead Trout" */
				case 785407605: /* GXTEntry: "Steelhead Trout" */
				case 992366796: /* GXTEntry: "Perfect Buck Carcass" */
					return 1;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case -1956973834: /* GXTEntry: "Perfect Carolina Parakeet Carcass" */
				case -1643384846: /* GXTEntry: "Poor Alligator Carcass" */
				case -1424697962: /* GXTEntry: "Perfect Alligator Carcass" */
				case -738999731: /* GXTEntry: "Poor Carolina Parakeet Carcass" */
				case -5376850: /* GXTEntry: "Largemouth Bass" */
				case 566023444: /* GXTEntry: "Good Carolina Parakeet Carcass" */
				case 915880986: /* GXTEntry: "Good Alligator Carcass" */
				case 1425358430: /* GXTEntry: "Poor Largemouth Bass" */
					return 1;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case -1726572562: /* GXTEntry: "Good Quail Carcass" */
				case -1017987135: /* GXTEntry: "Perfect Quail Carcass" */
				case 485620834: /* GXTEntry: "Poor Sockeye Salmon" */
				case 1471975165: /* GXTEntry: "Mature Venison Meat" */
				case 1570826681: /* GXTEntry: "Sockeye Salmon" */
				case 2058475216: /* GXTEntry: "Poor Quail Carcass" */
					return 1;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_1270(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<12> Var0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_649(iParam1))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_1301(iParam0, *uParam2, &Var0, 0))
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

int func_1271(int iParam0)
{
	if (func_1302(iParam0))
	{
		return VEHICLE::_0xC29996A337BDD099(((*Global_1425371)[iParam0 /*373*/])->f_1);
	}
	return 0;
}

Vector3 func_1272(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return -240.576f, 769.614f, 117.085f;
		case 34:
			return 2544.982f, -1187.344f, 52.3104f;
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_18;
}

int func_1273(int iParam0)
{
	int iVar0;

	iParam0 = func_395(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_1205(iParam0))
	{
		return 0;
	}
	iVar0 = func_204(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_1274(var uParam0)
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

int func_1275(int iParam0)
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

void func_1276(var uParam0)
{
	if (*uParam0 && PED::_0x93FFD92F05EC32FD(uParam0->f_1))
	{
		PED::_0x13E7320C762F0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_1277(var uParam0, var uParam1, var uParam2)
{
	var uVar0;

	uVar0 = func_1303(func_728());
	if (*uParam0)
	{
		func_1276(uParam0);
	}
	uParam0->f_1 = PED::_0xF6D9E1F3560CBF8E(uVar0, uParam1, 0, func_23() != -1, uParam2);
	*uParam0 = 1;
}

int func_1278(int iParam0)
{
	return &(Global_1946804->f_2657.f_26.f_7[iParam0]);
}

void func_1279(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = &Global_1946804->f_2657.f_26.f_7[iParam0];
	Global_1946804->f_2657.f_26.f_7[iParam0] = &Global_1946804->f_2657.f_26.f_7[iParam1];
	Global_1946804->f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_1280(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_1249(uParam0->f_1[iParam1 /*5*/]);
	*(uParam0->f_1[iParam1 /*5*/]) = { *(uParam0->f_1[*uParam0 /*5*/]) };
}

int func_1281(int iParam0, int iParam1)
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

void func_1282(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_1283(int iParam0)
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
	Var2 = { func_606(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_609(&Var2, &iVar0, &iVar1, 0))
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
		func_287(iVar0);
	}
}

int func_1284(int iParam0)
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

int func_1285(int iParam0)
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

int func_1286(int iParam0)
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

int func_1287(int iParam0)
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

int func_1288(int iParam0)
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

int func_1289(int iParam0)
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

int func_1290(int iParam0)
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

int func_1291(int iParam0)
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

int func_1292(int iParam0)
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

int func_1293(int iParam0)
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

int func_1294(int iParam0)
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

int func_1295(int iParam0)
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

int func_1296(int iParam0)
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

int func_1297(int iParam0)
{
	if (func_190(iParam0, 1064293907))
	{
		return 2;
	}
	else if (func_190(iParam0, -1218707194))
	{
		return 1;
	}
	else if (func_190(iParam0, 1888974372))
	{
		return 0;
	}
	return 1;
}

void func_1298(bool bParam0, bool bParam1, int iParam2)
{
	Global_1935689->f_4 = bParam0;
	Global_1935689->f_15 = iParam2;
	if (bParam0)
	{
		Global_1935689->f_5 = 0;
	}
	if (bParam1 || (func_1304() && iParam2 == 0))
	{
		func_1305(1);
		func_1306(1);
	}
}

int func_1299(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

int func_1300()
{
	return &Global_1899516;
}

int func_1301(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam1))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam0, &uParam1, uParam5, !bParam6))
	{
		return 0;
	}
	return 1;
}

int func_1302(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return 0;
	}
	return 1;
}

int func_1303(int iParam0)
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

int func_1304()
{
	if ((Global_1935689->f_10195 != (Global_1935689->f_19.f_203 - 1) || func_1307(func_644(0), Global_1935689->f_10190, 0) > 0) || Global_1935689->f_10195 == 15)
	{
		return 1;
	}
	return 0;
}

void func_1305(int iParam0)
{
	Global_1935689->f_11 = iParam0;
}

void func_1306(int iParam0)
{
	Global_1935689->f_10 = iParam0;
}

int func_1307(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (func_1308())
	{
		iVar0 = func_1309(iParam1, 0);
	}
	else
	{
		iVar0 = func_124(iParam1, bParam2, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			iVar0 = (iVar0 + func_943(INVENTORY::_0x13D234A2A3F66E63(iParam0), iParam1));
		}
	}
	if (iParam1 == Global_1935689->f_1224)
	{
		iVar0++;
	}
	return iVar0;
}

int func_1308()
{
	if ((func_128(Global_1935689->f_10186, 1) || func_128(Global_1935689->f_10186, 2)) || func_128(Global_1935689->f_10186, 4))
	{
		return 1;
	}
	return 0;
}

int func_1309(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_124(iParam0, bParam1, 0);
	if (func_128(Global_1935689->f_10186, 1))
	{
		iVar0 = func_204(func_395(0));
		iVar1 = (iVar1 + func_943(INVENTORY::_0x13D234A2A3F66E63(iVar0), iParam0));
	}
	if (func_128(Global_1935689->f_10186, 2))
	{
		iVar0 = func_204(func_395(1));
		iVar1 = (iVar1 + func_943(INVENTORY::_0x13D234A2A3F66E63(iVar0), iParam0));
	}
	if (func_128(Global_1935689->f_10186, 4))
	{
		iVar0 = func_204(func_395(6));
		iVar1 = (iVar1 + func_943(INVENTORY::_0x13D234A2A3F66E63(iVar0), iParam0));
	}
	return iVar1;
}

