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
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion

void __EntryFunction__()
{
	struct<44> Var0;

	if (!TASK::_DOES_SCENARIO_POINT_EXIST(ScriptParam_0.f_1) || func_1() != -1)
	{
		SCRIPTS::_0xE7282390542F570D(ScriptParam_0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	Var0.f_40 = joaat("P_CARCASSHANGLRG02X");
	Var0.f_41 = joaat("P_CARCASSHANGMED01B");
	Var0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Var0.f_1 = { TASK::_GET_SCENARIO_POINT_COORDS(ScriptParam_0.f_1, true) };
	Var0.f_4 = TASK::_GET_SCENARIO_POINT_HEADING(ScriptParam_0.f_1, true);
	Var0.f_43 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(TASK::_GET_ENTITY_SCENARIO_POINT_IS_ATTACHED_TO(ScriptParam_0.f_1));
	Var0.f_39 = ENTITY::GET_ENTITY_MODEL(Var0.f_43);
	StringCopy(&(Var0.f_22), "Dead_Hanging", 64);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_2(&Var0, 0);
		SCRIPTS::_0xE7282390542F570D(ScriptParam_0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (func_3(&Var0) || func_4(&Var0))
	{
		SCRIPTS::_0xE7282390542F570D(ScriptParam_0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (!func_5(&(ScriptParam_0.f_1)) && !func_6(&Var0))
	{
		BUILTIN::WAIT(0);
	}
	func_2(&Var0, 0);
	SCRIPTS::_0xE7282390542F570D(ScriptParam_0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_1()
{
	return Global_1572887.f_13;
}

void func_2(var uParam0, bool bParam1)
{
	if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_49))
	{
		TASK::_DELETE_SCENARIO_POINT(uParam0->f_49);
	}
	if (bParam1)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_44))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_44));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_45))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_45));
	}
	if (PHYSICS::DOES_ROPE_EXIST(uParam0->f_46))
	{
		PHYSICS::DELETE_ROPE(&(uParam0->f_46));
	}
	if (PHYSICS::DOES_ROPE_EXIST(uParam0->f_47))
	{
		PHYSICS::DELETE_ROPE(&(uParam0->f_47));
	}
	if (PHYSICS::DOES_ROPE_EXIST(uParam0->f_48))
	{
		PHYSICS::DELETE_ROPE(&(uParam0->f_48));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_42))
	{
		if (func_7(uParam0, 256))
		{
			if (!func_7(uParam0, 32))
			{
				PED::SET_PED_TO_RAGDOLL(uParam0->f_42, 10000, 20000, 0, false, true, false);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_42));
		}
		else
		{
			PED::DELETE_PED(&(uParam0->f_42));
		}
		PED::_0x7D4E70A67A651C71(1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_43))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_43));
	}
}

int func_3(var uParam0)
{
	return 0;
}

int func_4(var uParam0)
{
	int iVar0;
	vector3 vVar1[5];

	vVar1[0 /*3*/] = { -2844.586f, 133.7118f, 183.6223f };
	vVar1[1 /*3*/] = { -1008.624f, -544.7607f, 98.21857f };
	vVar1[2 /*3*/] = { 2074.396f, 996.5762f, 111.6177f };
	vVar1[3 /*3*/] = { 2832.072f, -1226.912f, 46.65f };
	vVar1[4 /*3*/] = { -2255.234f, -1914.754f, 116.158f };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_8(vVar1[iVar0 /*3*/], uParam0->f_1, 5f, 1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_5(var uParam0)
{
	if ((SCRIPTS::_0x9E4EF615E307FBBE() || !TASK::_DOES_SCENARIO_POINT_EXIST(*uParam0)) || func_9())
	{
		return true;
	}
	return false;
}

bool func_6(var uParam0)
{
	switch (uParam0->f_57)
	{
		case 0:
			if (func_10(uParam0))
			{
				func_11(uParam0, 1);
			}
			break;
		case 1:
			if (func_12(uParam0))
			{
				func_11(uParam0, 2);
			}
			break;
		case 2:
			if (func_13(uParam0))
			{
				func_11(uParam0, 3);
			}
			break;
		case 3:
			if (func_14(uParam0))
			{
				if (func_15(3, uParam0))
				{
					func_11(uParam0, 5);
				}
				else
				{
					func_11(uParam0, 4);
				}
			}
			break;
		case 4:
			if (func_16(uParam0))
			{
				func_11(uParam0, 5);
			}
			break;
		case 5:
			if (func_17(uParam0))
			{
				func_18(&(uParam0->f_52));
				func_11(uParam0, 6);
			}
			break;
		case 6:
			if (func_19(uParam0))
			{
				func_11(uParam0, 7);
			}
			break;
		case 7:
			if (func_20(uParam0))
			{
				func_18(&(uParam0->f_52));
				func_11(uParam0, 8);
			}
			break;
		case 8:
			if (func_21(uParam0))
			{
				func_18(&(uParam0->f_52));
				func_11(uParam0, 9);
			}
			break;
		case 9:
			break;
	}
	return false;
}

bool func_7(var uParam0, int iParam1)
{
	return (uParam0->f_56 && iParam1) != 0;
}

bool func_8(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

bool func_9()
{
	return Global_1900736.f_67;
}

bool func_10(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;

	vVar0 = { 799.362f, 1512.22f, 203.6078f };
	vVar3 = { 2558f, 795f, 75f };
	vVar6 = { -754f, -1284.5f, 42.75f };
	if (func_8(uParam0->f_1, vVar3, 60f, 1))
	{
		func_22(uParam0, 128);
		func_22(uParam0, 64);
	}
	if (func_8(uParam0->f_1, vVar6, 10f, 1))
	{
		func_22(uParam0, 64);
	}
	switch (uParam0->f_39)
	{
		case joaat("P_CARCASSHANGLRG01X"):
			iVar9 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			switch (func_23(uParam0->f_1))
			{
				case 0:
				case 2:
				case 4:
				case 9:
				case 11:
					iVar9 = 0;
					break;
			}
			if (func_8(uParam0->f_1, vVar0, 10f, 1))
			{
				iVar9 = 1;
			}
			if (func_7(uParam0, 128))
			{
				iVar9 = 0;
			}
			switch (iVar9)
			{
				case 0:
					StringCopy(&(uParam0->f_14), "CREATURES_MAMMAL@DEER@NORMAL@DEAD", 64);
					uParam0->f_38 = joaat("A_C_DEER_01");
					StringCopy(&(uParam0->f_30), "PD_Deer_aged_carcass_Hvy", 64);
					break;
				case 1:
					StringCopy(&(uParam0->f_14), "CREATURES_MAMMAL@WOLF_MEDIUM@NORMAL@DEAD", 64);
					uParam0->f_38 = joaat("A_C_WOLF_MEDIUM");
					break;
			}
			uParam0->f_50 = 45454;
			uParam0->f_51 = 33646;
			uParam0->f_55 = 0;
			break;
		case joaat("P_CARCASSHANGMED01A"):
		case joaat("P_CARCASSHANGMED01X"):
			iVar9 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			if (uParam0->f_39 == joaat("P_CARCASSHANGMED01X"))
			{
				if (func_7(uParam0, 128))
				{
					iVar9 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
				}
				else
				{
					iVar9 = 1;
				}
			}
			switch (iVar9)
			{
				case 0:
					StringCopy(&(uParam0->f_14), "CREATURES_MAMMAL@FOX@NORMAL@DEAD", 64);
					uParam0->f_38 = joaat("A_C_FOX_01");
					StringCopy(&(uParam0->f_30), "PD_Small_aged_carcass_Hvy", 64);
					uParam0->f_55 = 1;
					uParam0->f_50 = 33646;
					break;
				case 1:
					StringCopy(&(uParam0->f_14), "CREATURES_MAMMAL@RABBIT@NORMAL@DEAD", 64);
					uParam0->f_38 = joaat("A_C_RABBIT_01");
					StringCopy(&(uParam0->f_30), "PD_Ex_Small_aged_carcass_Hvy", 64);
					uParam0->f_55 = 1;
					uParam0->f_50 = 33646;
					break;
				case 2:
					StringCopy(&(uParam0->f_14), "CREATURES_BIRD@DUCK@NORMAL@DEAD", 64);
					uParam0->f_38 = joaat("A_C_DUCK_01");
					uParam0->f_55 = 1;
					uParam0->f_50 = 14285;
					break;
			}
			break;
		case joaat("P_CARCASSHANGFISH01A"):
			iVar9 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			switch (iVar9)
			{
				case 0:
					uParam0->f_38 = joaat("A_C_FISHRAINBOWTROUT_01_MS");
					break;
				case 1:
					uParam0->f_38 = joaat("A_C_FISHSALMONSOCKEYE_01_MS");
					break;
			}
			uParam0->f_55 = 3;
			break;
		case joaat("P_CARCASSHANGSML01X"):
			break;
	}
	return true;
}

void func_11(var uParam0, int iParam1)
{
	uParam0->f_57 = iParam1;
}

bool func_12(var uParam0)
{
	STREAMING::REQUEST_MODEL(uParam0->f_39, false);
	STREAMING::REQUEST_MODEL(uParam0->f_38, false);
	PED::_0xF008E0BA1FE1D644(1);
	if (func_15(0, uParam0))
	{
		STREAMING::REQUEST_MODEL(uParam0->f_40, false);
	}
	if (func_15(1, uParam0))
	{
		STREAMING::REQUEST_MODEL(uParam0->f_41, false);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_14)))
	{
		STREAMING::REQUEST_ANIM_DICT(&(uParam0->f_14));
	}
	return true;
}

bool func_13(var uParam0)
{
	if ((!STREAMING::HAS_MODEL_LOADED(uParam0->f_39) || !STREAMING::HAS_MODEL_LOADED(uParam0->f_38)) || !PED::_0x5E420FF293EE5472())
	{
		return false;
	}
	if (func_15(0, uParam0))
	{
		if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_40))
		{
			return false;
		}
	}
	if (func_15(1, uParam0))
	{
		if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_41))
		{
			return false;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_14)))
	{
		if (!STREAMING::HAS_ANIM_DICT_LOADED(&(uParam0->f_14)))
		{
			return false;
		}
	}
	return true;
}

bool func_14(var uParam0)
{
	float fVar0;
	vector3 vVar1;

	fVar0 = -90f;
	vVar1 = { uParam0->f_1 };
	OBJECT::_0xB6CBD40F8EA69E8A(uParam0->f_43);
	if (func_15(3, uParam0))
	{
		vVar1 = { func_24(uParam0) };
	}
	if (func_15(1, uParam0))
	{
		uParam0->f_45 = OBJECT::CREATE_OBJECT(uParam0->f_41, vVar1, false, true, false, false, false);
		OBJECT::_0xB6CBD40F8EA69E8A(uParam0->f_45);
		ENTITY::SET_ENTITY_COLLISION(uParam0->f_45, false, false);
	}
	uParam0->f_42 = func_25(uParam0->f_38, vVar1, (uParam0->f_4 + fVar0), 0, 1, 0, 1, 1, 1, 0, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_42, true);
	PED::_SET_PED_SCALE(uParam0->f_42, 1f);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_42, 186, false);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_42, 243, true);
	ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam0->f_42, uParam0->f_42, false);
	ENTITY::SET_ENTITY_COLLISION(uParam0->f_42, false, false);
	OBJECT::_0xB6CBD40F8EA69E8A(uParam0->f_43);
	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_43, true);
	ENTITY::SET_ENTITY_COLLISION(uParam0->f_43, false, false);
	if (func_15(3, uParam0))
	{
		func_26(uParam0->f_42, 1, 1);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_42, true);
	}
	if (func_7(uParam0, 128))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_30)))
		{
			PED::APPLY_PED_DAMAGE_PACK(uParam0->f_42, &(uParam0->f_30), 0f, 1f);
		}
	}
	func_27(uParam0, 0);
	return true;
}

bool func_15(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return uParam1->f_39 == joaat("P_CARCASSHANGLRG01X");
		case 1:
			return (uParam1->f_39 == joaat("P_CARCASSHANGMED01X") || uParam1->f_39 == joaat("P_CARCASSHANGMED01A"));
		case 2:
			return uParam1->f_39 == joaat("P_CARCASSHANGSML01X");
		case 3:
			return uParam1->f_39 == joaat("P_CARCASSHANGFISH01A");
		default:
			break;
	}
	return false;
}

bool func_16(var uParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_14)))
	{
		TASK::TASK_PLAY_ANIM(uParam0->f_42, &(uParam0->f_14), &(uParam0->f_22), 1000f, -1000f, -1, 131072, 0f, false, 0, false, 0, false);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_42, true);
	}
	else
	{
		func_26(uParam0->f_42, 1, 1);
	}
	if (func_15(1, uParam0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_45, true);
	}
	return true;
}

bool func_17(var uParam0)
{
	if (!func_28(&(uParam0->f_52)))
	{
		func_29(&(uParam0->f_52));
		uParam0->f_5 = MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 2f);
	}
	if (func_30(&(uParam0->f_52), uParam0->f_5))
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_42))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_42, false);
			ENTITY::SET_ENTITY_COLLISION(uParam0->f_42, true, false);
			switch (uParam0->f_55)
			{
				case 0:
					func_31(uParam0);
					break;
				case 1:
				case 2:
				case 3:
					func_32(uParam0);
					break;
			}
			if (func_15(1, uParam0) || func_15(3, uParam0))
			{
				if (func_15(1, uParam0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_45, false);
				}
				func_33(uParam0);
			}
			return true;
		}
	}
	return false;
}

void func_18(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_19(var uParam0)
{
	bool bVar0;

	bVar0 = false;
	if (func_7(uParam0, 64))
	{
		bVar0 = true;
	}
	else if (!TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_49))
	{
		if ((ENTITY::IS_ENTITY_ATTACHED(uParam0->f_42) || PED::_0x7020839C7302D8AC(uParam0->f_42)) || (PHYSICS::DOES_ROPE_EXIST(uParam0->f_46) && !PHYSICS::_0x79C2BEC82CFD7F7F(uParam0->f_46)))
		{
			func_34(uParam0);
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		PED::SET_PED_TO_RAGDOLL(uParam0->f_42, 1000, 60000, 0, false, true, false);
	}
	return bVar0;
}

bool func_20(var uParam0)
{
	if (func_15(0, uParam0))
	{
		if (!func_7(uParam0, 256))
		{
			if (PED::_0xBA208A8D6399A3AC(uParam0->f_42, 10) || PED::_0xBA208A8D6399A3AC(uParam0->f_42, 13))
			{
				PED::_0x5A1A929C8B729B4A(uParam0->f_42);
				PED::SET_PED_TO_RAGDOLL(uParam0->f_42, 1000, 60000, 0, false, true, false);
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_43, false);
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_42, true);
				func_35(uParam0);
				func_2(uParam0, 1);
				func_22(uParam0, 256);
				return true;
			}
		}
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_49) && PED::_IS_PED_USING_SCENARIO_POINT(Global_34, uParam0->f_49))
	{
		if (!func_7(uParam0, 8))
		{
			TASK::TASK_LOOK_AT_COORD(Global_34, func_24(uParam0), -1, 0, 21, 0);
			func_22(uParam0, 8);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -1900650591))
		{
			TASK::TASK_LOOK_AT_ENTITY(Global_34, uParam0->f_42, 5000, 0, 21, 0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 1244474073))
		{
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_43, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_42, true);
			uParam0->f_44 = OBJECT::CREATE_OBJECT(joaat("P_CARCASSHANGLRG02X"), uParam0->f_1, false, true, false, false, false);
			ENTITY::SET_ENTITY_COLLISION(uParam0->f_44, false, false);
			ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(uParam0->f_44, Global_34, 4, PED::GET_PED_BONE_INDEX(Global_34, 7966), 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, -1f, 1, 1, 0, 0, 0, 1, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */);
			func_22(uParam0, 1);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -2118990041))
		{
			if (func_15(1, uParam0))
			{
				PHYSICS::_0x4CFA2B7FAE115ECB(&(uParam0->f_46), &(uParam0->f_47), &(uParam0->f_48), 0.1f, 0.2f, 0.1f, -1);
			}
			else if (func_15(3, uParam0))
			{
				PHYSICS::_0x4CFA2B7FAE115ECB(&(uParam0->f_46), &(uParam0->f_47), &(uParam0->f_48), 0.001f, 0.199f, 0.001f, -1);
			}
			else
			{
				PED::_0x5A1A929C8B729B4A(uParam0->f_42);
			}
			func_22(uParam0, 4);
			return false;
		}
		if (func_7(uParam0, 4) && !func_7(uParam0, 32))
		{
			PED::SET_PED_TO_RAGDOLL(uParam0->f_42, 1000, 60000, 0, false, true, false);
			func_27(uParam0, 1);
			func_22(uParam0, 32);
			func_35(uParam0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 519570738))
		{
			ENTITY::DETACH_ENTITY(uParam0->f_44, true, true);
			ENTITY::SET_ENTITY_COLLISION(uParam0->f_44, true, false);
			ENTITY::SET_ENTITY_COLLISION(uParam0->f_43, false, false);
			func_22(uParam0, 4);
		}
	}
	else if (func_7(uParam0, 8) && !func_7(uParam0, 16))
	{
		TASK::TASK_CLEAR_LOOK_AT(Global_34);
		func_2(uParam0, 1);
		func_22(uParam0, 16);
		func_22(uParam0, 256);
		return true;
	}
	else if ((!PED::_0x7020839C7302D8AC(uParam0->f_42) && !ENTITY::IS_ENTITY_ATTACHED(uParam0->f_42)) && ((func_15(1, uParam0) || func_15(3, uParam0)) && PHYSICS::_0x79C2BEC82CFD7F7F(uParam0->f_46)))
	{
		if (func_7(uParam0, 128))
		{
			MISC::_0x674B90BE1115846D(uParam0->f_42, 1);
			func_27(uParam0, 1);
		}
		if (!func_7(uParam0, 64))
		{
			func_27(uParam0, 1);
		}
		func_22(uParam0, 256);
		func_35(uParam0);
		func_2(uParam0, 1);
		return true;
	}
	return false;
}

bool func_21(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (!func_28(&(uParam0->f_52)))
	{
		if (PED::_0x758F081DB204DDDE(Global_34))
		{
			iVar0 = PED::_0x14169FA823679E41(Global_34);
			if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::IS_ENTITY_A_PED(iVar0)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) == uParam0->f_42)
			{
				func_29(&(uParam0->f_52));
			}
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
		{
			if (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar1) == 1376140891)
			{
				SCRIPTS::GET_EVENT_DATA(0, iVar1, &vVar2, 3);
				if (vVar2.x == Global_34 && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar2.y) == uParam0->f_42)
				{
					if (vVar2.z)
					{
						return true;
					}
					else
					{
						return true;
					}
				}
				else if (vVar2.x == 0 || vVar2.y == 0)
				{
					return true;
				}
			}
			iVar1++;
		}
	}
	if (ENTITY::_0x61914209C36EFDDB(uParam0->f_42) == 5)
	{
		return true;
	}
	return false;
}

void func_22(var uParam0, int iParam1)
{
	uParam0->f_56 = (uParam0->f_56 || iParam1);
}

int func_23(vector3 vParam0)
{
	return func_36(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

Vector3 func_24(var uParam0)
{
	vector3 vVar0;
	int iVar3;

	switch (uParam0->f_39)
	{
		case joaat("P_CARCASSHANGLRG01X"):
			iVar3 = 4;
			break;
		case joaat("P_CARCASSHANGMED01A"):
		case joaat("P_CARCASSHANGMED01X"):
		case joaat("P_CARCASSHANGFISH01A"):
			iVar3 = 4;
			break;
	}
	vVar0 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_43, iVar3) };
	return vVar0;
}

int func_25(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, false, false);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_37(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_26(int iParam0, bool bParam1, bool bParam2)
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
		if (Global_34 == iParam0)
		{
		}
		ENTITY::_SET_ENTITY_HEALTH(iParam0, 0, 0);
	}
}

void func_27(var uParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	PED::_0x6569F31A01B4C097(uParam0->f_42, 0, bParam1);
	ENTITY::_0x18FF3110CF47115D(uParam0->f_42, 7, bParam1);
}

bool func_28(var uParam0)
{
	return func_38(*uParam0, 1);
}

void func_29(var uParam0)
{
	func_39(uParam0, 0f);
}

bool func_30(var uParam0, float fParam1)
{
	if (!func_28(uParam0))
	{
		return false;
	}
	if (func_40(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_31(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	iVar0 = PED::GET_PED_BONE_INDEX(uParam0->f_42, uParam0->f_50);
	iVar1 = PED::GET_PED_BONE_INDEX(uParam0->f_42, uParam0->f_51);
	iVar2 = func_41(uParam0->f_39, 0);
	iVar3 = func_41(uParam0->f_39, 1);
	vVar4 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_43, iVar2) };
	vVar7 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_43, iVar3) };
	PED::_0xE1AADD0055D76603(uParam0->f_42, uParam0->f_43, iVar0, iVar2, vVar4, -1f, 1, 0, 0);
	PED::_0xE1AADD0055D76603(uParam0->f_42, uParam0->f_43, iVar1, iVar3, vVar7, -1f, 1, 0, 0);
}

void func_32(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;

	iVar0 = PED::GET_PED_BONE_INDEX(uParam0->f_42, uParam0->f_50);
	iVar1 = func_41(uParam0->f_39, 2);
	vVar2 = { 0f, 0f, 0f };
	vVar5 = { 0f, 0f, 0f };
	vVar8 = { 0f, 90f, 0f };
	switch (uParam0->f_38)
	{
		case joaat("A_C_FOX_01"):
			vVar5 = { -0.0125f, -0.03f, 0.0125f };
			vVar8 = { 90f, 0f, 90f };
			break;
		case joaat("A_C_RABBIT_01"):
			vVar2 = { -0.0125f, 0f, -0.025f };
			vVar8 = { 0f, 90f, 0f };
			break;
	}
	ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(uParam0->f_45, uParam0->f_42, iVar1, iVar0, vVar5, vVar2, vVar8, -1f, 0, 1, 0, 0, 0, 1, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */);
}

void func_33(var uParam0)
{
	int iVar0;
	float fVar1;

	if (func_15(3, uParam0))
	{
		iVar0 = 8;
		fVar1 = 0.2f;
	}
	else
	{
		iVar0 = 1;
		fVar1 = 0.3f;
	}
	uParam0->f_46 = PHYSICS::_ADD_ROPE_2(uParam0->f_1, 0f, 0f, 0f, fVar1, iVar0, false, 1, -1f);
	if (func_15(3, uParam0))
	{
		PHYSICS::_0xE9CD9A67834985A7(uParam0->f_46, uParam0->f_43, uParam0->f_42, 0f, 0f, 0f, 0f, 0f, 0f, 33567, 32157);
	}
	else
	{
		PHYSICS::_0xE9CD9A67834985A7(uParam0->f_46, uParam0->f_43, uParam0->f_45, 0f, 0f, 0f, 0f, 0f, 0f, 33567, 33568);
	}
	PHYSICS::_0x3C6490D940FF5D0B(uParam0->f_46, 0, 0, fVar1, 1);
	AUDIO::_0xF092B6030D6FD49C(uParam0->f_46, "ROPE_SETTINGS_DEFAULT");
	PHYSICS::_0x7A54D82227A139DB(&(uParam0->f_46), 1);
	PHYSICS::_0x76BAD9D538BCA1AA(uParam0->f_46, 0f);
	PHYSICS::_0xB40EA9E0D2E2F7F3(uParam0->f_46, 1f);
	PHYSICS::_0xDEDE679ED29DD4E7(uParam0->f_46, 1);
	PHYSICS::_0xF1EA2A881EB7F2CD(uParam0->f_46, 1);
	PHYSICS::_0x522FA3F490E2F7AC(uParam0->f_46, 1, 1);
	AUDIO::_0x2651DDC0EA269073(uParam0->f_46, 1f);
}

void func_34(var uParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	vVar1 = { 0f, 0f, 0f };
	switch (uParam0->f_39)
	{
		case joaat("P_CARCASSHANGLRG01X"):
			iVar0 = joaat("WORLD_PLAYER_CARCASS_PEG_2M15");
			vVar1 = { 0.155f, -0.9f, 0f };
			break;
		case joaat("P_CARCASSHANGMED01A"):
		case joaat("P_CARCASSHANGFISH01A"):
			iVar0 = joaat("WORLD_PLAYER_CARCASS_CUT_1M80");
			vVar1 = { -0.1f, -0.61f, 0f };
			break;
	}
	if (iVar0 != 0)
	{
		uParam0->f_49 = TASK::CREATE_SCENARIO_POINT(iVar0, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_1, uParam0->f_4, vVar1), uParam0->f_4, 0, 0, 0);
	}
}

void func_35(var uParam0)
{
	int iVar0;

	if (Global_1959343.f_31 > 9 || Global_1959343.f_31 < 0)
	{
		Global_1959343.f_31 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_8(Global_1959343[iVar0 /*3*/], uParam0->f_1, 0.1f, 0))
		{
			return;
		}
		iVar0++;
	}
	Global_1959343[Global_1959343.f_31 /*3*/] = { uParam0->f_1 };
	Global_1959343.f_31++;
}

int func_36(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BAYOUNWA"):
			return 0;
		case joaat("BIGVALLEY"):
			return 1;
		case joaat("BLUEWATERMARSH"):
			return 2;
		case joaat("CUMBERLAND"):
			return 3;
		case joaat("GREATPLAINS"):
			return 4;
		case joaat("GRIZZLIESEAST"):
			return 6;
		case joaat("GRIZZLIESWEST"):
			return 7;
		case joaat("GUARMAD"):
			return 8;
		case joaat("HEARTLANDS"):
			return 9;
		case joaat("ROANOKE"):
			return 10;
		case joaat("SCARLETTMEADOWS"):
			return 11;
		case joaat("TALLTREES"):
			return 12;
		case joaat("GAPTOOTHRIDGE"):
			return 13;
		case joaat("RIOBRAVO"):
			return 14;
		case joaat("CHOLLASPRINGS"):
			return 15;
		case joaat("HENNIGANSSTEAD"):
			return 16;
		default:
			break;
	}
	return -1;
}

void func_37(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
			func_42(iParam0, 0, 1);
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
			func_43(iParam0, 0);
			bVar0 = true;
		}
		func_44(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

bool func_38(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_39(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_45() - fParam1);
	func_46(uParam0, 1);
	func_47(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_40(var uParam0)
{
	if (!func_28(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_48(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_45() - uParam0->f_1);
}

int func_41(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("P_CARCASSHANGLRG01X"):
			if (iParam1 == 0)
			{
				return 4;
			}
			if (iParam1 == 1)
			{
				return 5;
			}
			break;
		case joaat("P_CARCASSHANGMED01A"):
		case joaat("P_CARCASSHANGMED01X"):
		case joaat("P_CARCASSHANGFISH01A"):
			if (iParam1 == 3)
			{
				return 2;
			}
			if (iParam1 == 2)
			{
				return 4;
			}
			if (iParam1 == 0)
			{
				return 5;
			}
			if (iParam1 == 1)
			{
				return 6;
			}
			break;
		case joaat("P_CARCASSHANGSML01X"):
			if (iParam1 == 2)
			{
				return 6;
			}
			if (iParam1 == 0)
			{
				return 4;
			}
			if (iParam1 == 1)
			{
				return 6;
			}
			break;
	}
	return 4;
}

void func_42(int iParam0, bool bParam1, bool bParam2)
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

void func_43(int iParam0, bool bParam1)
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

void func_44(int iParam0, int iParam1)
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

float func_45()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_46(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_47(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_48(var uParam0)
{
	return func_38(*uParam0, 2);
}

