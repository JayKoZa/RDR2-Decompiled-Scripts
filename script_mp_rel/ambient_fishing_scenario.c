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
	struct<18> Local_18 = { 0, -1474589744, 391506844, -294392875, 0, 0, 0, 0, 0, 0, 1050253722, 1036831949, 1090519040, 1092616192, 1065353216, 1065353216, 1073741824, 0 } ;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	bool bLocal_38 = false;
	int iLocal_39 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()
{
	iLocal_13 = 1;
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

int func_3()
{
	if (iLocal_14 != 0)
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iLocal_14) == 0)
		{
			return iLocal_13;
		}
		else
		{
			return 1;
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
	switch (iLocal_39)
	{
		case 0:
			if (TASK::_0x841475AC96E794D1(uLocal_16))
			{
				iLocal_36 = TASK::_0x5BA659955369B0E2(uLocal_16);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_36) && TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_36, 1))
				{
					iLocal_37 = PED::_0x4D0D2E3D8BC000EB(iLocal_36, "p_fishingPole02x_PH_R_HAND", 0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_37))
					{
						Local_18.f_4 = "p_fishingPole02x_Bone_tip";
						iLocal_39 = 1;
					}
				}
			}
			break;
		case 1:
			func_12(iLocal_36, iLocal_37);
			if (!bLocal_38)
			{
				if (Local_18 == 1)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_36, 1205242210))
					{
						func_13();
						bLocal_38 = true;
					}
					else if (TASK::_0x02EBBB3989B7E695(iLocal_36))
					{
						func_13();
						bLocal_38 = true;
					}
				}
			}
			if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_36, 1))
			{
				iLocal_13 = 0;
			}
			break;
	}
}

void func_7()
{
	func_14();
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
		func_15(&iVar0);
	}
}

void func_10(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_16(&iVar0);
	}
}

void func_11(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_17(&iVar0);
	}
}

void func_12(int iParam0, int iParam1)
{
	switch (Local_18)
	{
		case 0:
			if (((func_18() != 0 && ENTITY::DOES_ENTITY_EXIST(iParam1)) && func_19()) && func_20(iParam1))
			{
				func_21(1);
			}
			break;
		case 1:
			break;
		case 2:
			if (func_22(iParam0))
			{
				func_21(3);
			}
			break;
		case 3:
			break;
		case 4:
			if (func_23())
			{
				func_21(1);
			}
			break;
		case 5:
			func_14();
			break;
	}
	if (((Local_18 == 1 || Local_18 == 2) || Local_18 == 3) || Local_18 == 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_5))
		{
			PHYSICS::ACTIVATE_PHYSICS(Local_18.f_5);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_6))
		{
			PHYSICS::ACTIVATE_PHYSICS(Local_18.f_6);
		}
	}
}

void func_13()
{
	if (Local_18 == 1)
	{
		func_21(2);
	}
}

void func_14()
{
	if (Local_18 == 0)
	{
		return;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_18.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_18.f_2);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_18.f_3);
	if (PHYSICS::DOES_ROPE_EXIST(Local_18.f_8))
	{
		PHYSICS::DELETE_ROPE(&(Local_18.f_8));
	}
	if (PHYSICS::DOES_ROPE_EXIST(Local_18.f_9))
	{
		PHYSICS::DELETE_ROPE(&(Local_18.f_9));
	}
	func_24(&(Local_18.f_5));
	func_24(&(Local_18.f_6));
	func_24(&(Local_18.f_7));
	func_21(0);
}

void func_15(int iParam0)
{
}

void func_16(int iParam0)
{
}

void func_17(int iParam0)
{
}

int func_18()
{
	return Global_1572887->f_13;
}

int func_19()
{
	STREAMING::REQUEST_MODEL(Local_18.f_1, false);
	STREAMING::REQUEST_MODEL(Local_18.f_2, false);
	STREAMING::REQUEST_MODEL(Local_18.f_3, false);
	if ((STREAMING::HAS_MODEL_LOADED(Local_18.f_1) && STREAMING::HAS_MODEL_LOADED(Local_18.f_2)) && STREAMING::HAS_MODEL_LOADED(Local_18.f_3))
	{
		return 1;
	}
	return 0;
}

bool func_20(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Local_18.f_4))
	{
		Local_18.f_4 = "line_attach";
	}
	iVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, Local_18.f_4);
	vVar1 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, iVar0) };
	if (!ENTITY::DOES_ENTITY_EXIST(Local_18.f_5))
	{
		vVar4 = { vVar1 };
		vVar4.f_2 = (vVar4.z - Local_18.f_10);
		Local_18.f_5 = OBJECT::CREATE_OBJECT(Local_18.f_1, vVar4, false, true, false, false, true);
		PHYSICS::SET_DAMPING(Local_18.f_5, 0, Local_18.f_15);
		ENTITY::_0x978AA2323ED32209(Local_18.f_5, 0f);
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_18.f_5, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_18.f_6))
	{
		vVar4 = { vVar1 };
		vVar4.f_2 = (vVar4.z - (Local_18.f_10 + Local_18.f_11));
		Local_18.f_6 = OBJECT::CREATE_OBJECT(Local_18.f_2, vVar4, false, true, false, false, true);
		PHYSICS::SET_DAMPING(Local_18.f_6, 0, Local_18.f_15);
		ENTITY::_0x978AA2323ED32209(Local_18.f_6, 0f);
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_18.f_6, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_5) && ENTITY::DOES_ENTITY_EXIST(Local_18.f_6))
	{
		if (!PHYSICS::DOES_ROPE_EXIST(Local_18.f_8))
		{
			vVar4 = { vVar1 };
			Local_18.f_8 = PHYSICS::_0xE9C59F6809373A99(vVar4, 0f, 0f, 0f, Local_18.f_12, 8, 0, -1, -1082130432);
			PHYSICS::_0xD699E688B49C0FD2(Local_18.f_8, 0.5f, Local_18.f_10, Local_18.f_10, 1);
			PHYSICS::_0x462FF2A432733A44(Local_18.f_8, iParam0, Local_18.f_5, 0f, 0f, 0f, 0f, 0f, 0f, Local_18.f_4, "rod_attach");
			PHYSICS::_0x3C6490D940FF5D0B(Local_18.f_8, 0, 0, -1082130432, 1);
			PHYSICS::_0xBB3E9B073E66C3C9(Local_18.f_8, 1, 1, 1, 0);
			PHYSICS::_0x423C6B1F3786D28B(Local_18.f_8, 1);
			PHYSICS::ROPE_SET_UPDATE_ORDER(Local_18.f_8, 1);
			PHYSICS::_0xC89E7410A93AC19A(Local_18.f_8, 2f);
			PHYSICS::_0x1D97DA8ACB5D2582(Local_18.f_8, 15);
		}
		if (!PHYSICS::DOES_ROPE_EXIST(Local_18.f_9))
		{
			vVar4 = { ENTITY::GET_ENTITY_COORDS(Local_18.f_5, true, false) };
			Local_18.f_9 = PHYSICS::_0xE9C59F6809373A99(vVar4, 0f, 0f, 0f, Local_18.f_11, 10, 0, -1, -1082130432);
			PHYSICS::_0xD699E688B49C0FD2(Local_18.f_9, 0.5f, Local_18.f_11, Local_18.f_11, 1);
			PHYSICS::_0x462FF2A432733A44(Local_18.f_9, Local_18.f_5, Local_18.f_6, 0f, 0f, 0f, 0f, 0f, 0f, "hook_attach", "fishingLine_bone");
			PHYSICS::_0x3C6490D940FF5D0B(Local_18.f_9, 0, 0, -1082130432, 1);
			PHYSICS::_0xBB3E9B073E66C3C9(Local_18.f_9, 1, 1, 1, 0);
			PHYSICS::ROPE_SET_UPDATE_ORDER(Local_18.f_9, 1);
			PHYSICS::_0xC89E7410A93AC19A(Local_18.f_9, 0f);
		}
	}
	return (PHYSICS::DOES_ROPE_EXIST(Local_18.f_8) && PHYSICS::DOES_ROPE_EXIST(Local_18.f_9));
}

void func_21(int iParam0)
{
	if (Local_18 != iParam0)
	{
		Local_18 = iParam0;
	}
}

int func_22(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !PHYSICS::DOES_ROPE_EXIST(Local_18.f_8))
	{
		return 0;
	}
	if (Local_18.f_17 == 0)
	{
		PHYSICS::_0x1FC92BDBA1106BD2(Local_18.f_8, Local_18.f_13);
		PHYSICS::START_ROPE_UNWINDING_FRONT(Local_18.f_8);
		Local_18.f_17 = 1;
		func_25(iParam0);
	}
	else if (PHYSICS::_0x3D69537039F8D824(Local_18.f_8) >= Local_18.f_12)
	{
		PHYSICS::STOP_ROPE_UNWINDING_FRONT(Local_18.f_8);
		Local_18.f_17 = 0;
		return 1;
	}
	return 0;
}

int func_23()
{
	if ((!PHYSICS::DOES_ROPE_EXIST(Local_18.f_8) || !ENTITY::DOES_ENTITY_EXIST(Local_18.f_5)) || !ENTITY::DOES_ENTITY_EXIST(Local_18.f_6))
	{
		return 0;
	}
	if (Local_18.f_17 == 0)
	{
		PHYSICS::_0x1FC92BDBA1106BD2(Local_18.f_8, Local_18.f_14);
		PHYSICS::START_ROPE_WINDING(Local_18.f_8);
		Local_18.f_17 = 1;
	}
	else if (PHYSICS::_0x3D69537039F8D824(Local_18.f_8) <= Local_18.f_10)
	{
		PHYSICS::STOP_ROPE_UNWINDING_FRONT(Local_18.f_8);
		Local_18.f_17 = 0;
		PHYSICS::SET_DAMPING(Local_18.f_5, 0, Local_18.f_15);
		PHYSICS::SET_DAMPING(Local_18.f_6, 0, Local_18.f_15);
		return 1;
	}
	return 0;
}

void func_24(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0))
	{
		ENTITY::DETACH_ENTITY(*iParam0, true, true);
	}
	OBJECT::DELETE_OBJECT(iParam0);
}

void func_25(int iParam0)
{
	vector3 vVar0;
	float fVar3;
	vector3 vVar4;
	vector3 vVar7;
	float fVar10;
	float fVar11;
	vector3 vVar12;
	vector3 vVar15;

	if ((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !ENTITY::DOES_ENTITY_EXIST(Local_18.f_5)) || !ENTITY::DOES_ENTITY_EXIST(Local_18.f_6))
	{
		return;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_18.f_5, true, false) };
	fVar3 = ENTITY::GET_ENTITY_HEADING(iParam0);
	vVar4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar3, 0f, 10f, 0f) };
	vVar7 = { func_26(vVar4 - vVar0) };
	fVar10 = 1f;
	fVar11 = 0f;
	func_27(&fVar10, &fVar11, 45f);
	vVar12 = { func_26(vVar7.x, vVar7.y, fVar11) };
	vVar15 = { vVar12 * FtoV((Local_18.f_12 * 5f)) };
	PHYSICS::SET_DAMPING(Local_18.f_5, 0, Local_18.f_16);
	PHYSICS::SET_DAMPING(Local_18.f_6, 0, Local_18.f_16);
	ENTITY::APPLY_FORCE_TO_ENTITY(Local_18.f_5, 3, vVar15, 0f, 0f, 0f, 0, false, true, true, false, true);
	ENTITY::APPLY_FORCE_TO_ENTITY(Local_18.f_6, 3, vVar15, 0f, 0f, 0f, 0, false, true, true, false, true);
	ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_18.f_5, 1);
	ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_18.f_6, 1);
}

Vector3 func_26(vector3 vParam0)
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

void func_27(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;

	fVar0 = *fParam0;
	fVar1 = *fParam1;
	*fParam0 = ((fVar0 * BUILTIN::COS(fParam2)) - (fVar1 * BUILTIN::SIN(fParam2)));
	*fParam1 = ((fVar0 * BUILTIN::SIN(fParam2)) + (fVar1 * BUILTIN::COS(fParam2)));
}

