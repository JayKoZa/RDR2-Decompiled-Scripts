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
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	var uLocal_22[4] = { 0, 0, 0, 0 };
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	vector3 vLocal_32 = { 0f, 0f, 0f };
	vector3 vLocal_35 = { 0f, 0f, 0f };
	int iLocal_38 = 0;
	vector3 vLocal_39 = { 0f, 0f, 0f };
	vector3 vLocal_42 = { 0f, 0f, 0f };
	vector3 vLocal_45 = { 0f, 0f, 0f };
	bool bLocal_48 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()
{
	iLocal_13 = 1;
	iLocal_29 = 20;
	iLocal_30 = 10;
	iLocal_31 = 3;
	vLocal_32 = { -287.356f, 818.9039f, 119.8698f };
	vLocal_35 = { -13.3335f, 0.0591f, -170.8708f };
	iLocal_15 = vScriptParam_0.x;
	uLocal_16 = vScriptParam_0.y;
	uLocal_17 = vScriptParam_0.z;
	func_1();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_2();
	}
	while (!SCRIPTS::_0x9E4EF615E307FBBE() && func_3())
	{
		func_4();
		func_5();
		func_6();
		BUILTIN::WAIT(0);
	}
	func_2();
}

void func_1()
{
}

void func_2()
{
	func_7();
	SCRIPTS::_0xE7282390542F570D(iLocal_15);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_8();
	}
	else
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

bool func_3()
{
	if (iLocal_14 != 0)
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iLocal_14) == 0)
		{
			return iLocal_13;
		}
		else
		{
			return true;
		}
	}
	return iLocal_13;
}

void func_4()
{
}

void func_5()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(2))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(2, iVar0))
		{
			case -45008988:
				func_9(iVar0);
				break;
			case -456923784:
				func_10(iVar0);
				break;
			case -843555838:
				func_11(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_6()
{
	if (PED::IS_PED_INJURED(Global_34))
	{
		iLocal_13 = 0;
		return;
	}
	if (func_12(1))
	{
		if (PAD::IS_CONTROL_PRESSED(2, joaat("INPUT_FOCUS_CAM")) || PAD::IS_DISABLED_CONTROL_PRESSED(2, joaat("INPUT_FOCUS_CAM")))
		{
			if (!func_12(2))
			{
				func_13();
			}
		}
	}
	func_14();
	switch (iLocal_19)
	{
		case 0:
			iLocal_20 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -287.0813f, 818.8734f, 119.85f, -11.269f, 0f, -171.0697f, 50f, false, 2);
			func_15(1);
			func_16(1);
			break;
		case 1:
			if (ENTITY::GET_ENTITY_SPEED(Global_34) > 0f)
			{
				return;
			}
			CAM::SET_CAM_ACTIVE(iLocal_20, true);
			CAM::RENDER_SCRIPT_CAMS(true, true, 4000, true, false, 0);
			func_16(2);
			break;
		case 2:
			if (CAM::IS_CAM_INTERPOLATING(iLocal_20))
			{
				return;
			}
			iLocal_21 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), vLocal_32, vLocal_35, 40f, false, 2);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_21, iLocal_20, 4000, 3, 1);
			CAM::DESTROY_CAM(iLocal_20, false);
			func_16(3);
			break;
		case 3:
			if (CAM::IS_CAM_INTERPOLATING(iLocal_21))
			{
				return;
			}
			func_16(4);
			break;
		case 4:
			if (PED::IS_PED_USING_ANY_SCENARIO(Global_34))
			{
				if (!TASK::_0x0C3CB2E600C8977D(Global_34, 0))
				{
					func_17(&iLocal_21, 1);
				}
				else
				{
					func_16(5);
				}
			}
			break;
		case 5:
			break;
	}
}

void func_7()
{
	CAM::DESTROY_CAM(iLocal_20, false);
	CAM::DESTROY_CAM(iLocal_21, false);
}

void func_8()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_9(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_18(&iVar0);
	}
}

void func_10(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_19(&iVar0);
	}
}

void func_11(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_20(&iVar0);
	}
}

bool func_12(int iParam0)
{
	return (uLocal_18 && iParam0) != 0;
}

void func_13()
{
	if (func_12(2))
	{
		return;
	}
	func_21();
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	func_22(0, 0);
	CAM::RENDER_SCRIPT_CAMS(false, true, 2000, true, false, 0);
	CAM::DESTROY_CAM(iLocal_21, false);
	func_15(2);
}

void func_14()
{
	if (PED::IS_PED_USING_ANY_SCENARIO(Global_34))
	{
		if (TASK::_0x0C3CB2E600C8977D(Global_34, 0))
		{
			func_13();
		}
		return;
	}
	if (!func_12(2))
	{
		func_13();
	}
	else if (CAM::_0x251241CAEC707106())
	{
		func_21();
		PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	}
	else
	{
		TASK::CLEAR_PED_TASKS(Global_34, true, false);
		iLocal_13 = 0;
	}
}

void func_15(int iParam0)
{
	if (func_12(iParam0))
	{
		return;
	}
	uLocal_18 = (uLocal_18 || iParam0);
}

void func_16(int iParam0)
{
	iLocal_19 = iParam0;
}

void func_17(int iParam0, bool bParam1)
{
	float fVar0;
	vector3 vVar1;

	func_23(&(uLocal_22[0]), &(uLocal_22[1]), &(uLocal_22[2]), &(uLocal_22[3]), joaat("INPUT_SCRIPT_LEFT_AXIS_X"), joaat("INPUT_SCRIPT_LEFT_AXIS_Y"), joaat("INPUT_SCRIPT_RIGHT_AXIS_X"), joaat("INPUT_SCRIPT_RIGHT_AXIS_Y"), 2);
	if (iLocal_27 == uLocal_22[2] && iLocal_28 == uLocal_22[3])
	{
		if (iLocal_38 < MISC::GET_GAME_TIMER())
		{
			iLocal_27 = 0;
			iLocal_28 = 0;
		}
	}
	else
	{
		iLocal_27 = uLocal_22[2];
		iLocal_28 = uLocal_22[3];
		iLocal_38 = MISC::GET_GAME_TIMER() + 4000;
	}
	if (bParam1)
	{
		vLocal_39.f_2 = (-(BUILTIN::TO_FLOAT(uLocal_22[2]) / 127f) * IntToFloat(iLocal_29));
		vLocal_39.f_1 = ((-vLocal_39.z * IntToFloat(iLocal_31)) / IntToFloat(iLocal_29));
		if (PAD::IS_LOOK_INVERTED())
		{
			vLocal_39.x = ((BUILTIN::TO_FLOAT(uLocal_22[3]) / 127f) * IntToFloat(iLocal_30));
		}
		else
		{
			vLocal_39.x = (-(BUILTIN::TO_FLOAT(uLocal_22[3]) / 127f) * IntToFloat(iLocal_30));
		}
	}
	else
	{
		vLocal_39 = { 0f, 0f, 0f };
		iLocal_27 = 0;
		iLocal_28 = 0;
	}
	fVar0 = (30f * BUILTIN::TIMESTEP());
	vVar1 = { vLocal_39 + vLocal_45 };
	vLocal_42.x = (vLocal_42.x + func_24((((vVar1.x - vLocal_42.x) * 0.05f) * fVar0), -3f, 3f));
	vLocal_42.f_1 = (vLocal_42.y + func_24((((vVar1.y - vLocal_42.y) * 0.05f) * fVar0), -3f, 3f));
	vLocal_42.f_2 = (vLocal_42.z + func_24((((vVar1.z - vLocal_42.z) * 0.05f) * fVar0), -3f, 3f));
	if (bLocal_48)
	{
		vLocal_42.x = func_24(vLocal_42.x, BUILTIN::TO_FLOAT(-iLocal_30), BUILTIN::TO_FLOAT(iLocal_30));
		vLocal_42.f_1 = func_24(vLocal_42.y, BUILTIN::TO_FLOAT(-iLocal_31), BUILTIN::TO_FLOAT(iLocal_31));
		vLocal_42.f_2 = func_24(vLocal_42.z, BUILTIN::TO_FLOAT(-iLocal_29), BUILTIN::TO_FLOAT(iLocal_29));
	}
	CAM::SET_CAM_PARAMS(*iParam0, vLocal_32, vLocal_35 + vLocal_42, 40f, 0, 1, 1, 2, 1, 0);
}

void func_18(int iParam0)
{
}

void func_19(int iParam0)
{
}

void func_20(int iParam0)
{
}

void func_21()
{
	PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_UD"), false);
}

void func_22(float fParam0, float fParam1)
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam0, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam1, 1f);
}

void func_23(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	*uParam0 = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(iParam8, iParam4) * 127f));
	*uParam1 = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(iParam8, iParam5) * 127f));
	*uParam2 = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(iParam8, iParam6) * 127f));
	*uParam3 = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(iParam8, iParam7) * 127f));
}

float func_24(float fParam0, float fParam1, float fParam2)
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

