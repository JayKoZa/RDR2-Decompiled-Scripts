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
	struct<161> Local_14 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 1;
	var uLocal_181 = 1;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = -1;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 1;
	var uLocal_199 = -1;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	struct<534> Local_208 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -89429847, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 1048576000, 1193033728, 1092616192, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 100, -1082130432, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 100, -1082130432, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 100, -1082130432, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 100, -1082130432, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 3, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 3, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = -1;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 1097859072;
	var uLocal_763 = 1000;
	var uLocal_764 = 1067450368;
	var uLocal_765 = 5000;
	var uLocal_766 = 42;
	var uLocal_767 = 1103626240;
	var uLocal_768 = 1077936128;
	var uLocal_769 = 1106247680;
	var uLocal_770 = 1103101952;
	var uLocal_771 = 1097859072;
	var uLocal_772 = 1103626240;
	int iLocal_773 = 0;
	int iLocal_774 = 0;
	int iLocal_775 = 0;
	var uLocal_776 = 0;
	int iLocal_777 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_774 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
	}
	func_2(&Local_14, 1);
	func_3(&Local_14, &uScriptParam_0);
	if (!func_4(&uScriptParam_0, &iVar0))
	{
		func_1();
	}
	while (true)
	{
		switch (iVar0)
		{
			case 1:
				if (func_5(&uScriptParam_0, &iVar0))
				{
					if (Local_14.f_160)
					{
						func_1();
					}
				}
				break;
			case 0:
				if (func_6(&iVar0))
				{
					if (Local_14.f_160)
					{
						func_1();
					}
				}
				break;
			case 3:
				if (func_7(&iVar0))
				{
					if (Local_14.f_160)
					{
						func_1();
					}
				}
				break;
			case 4:
				if (func_8())
				{
					func_1();
				}
				break;
		}
		func_11(&(Local_208.f_477), func_9(&Local_14), func_10(&Local_14));
		BUILTIN::WAIT(Local_14.f_158);
	}
	func_1();
}

void func_1()
{
	var uVar0[1];
	var uVar2;

	uVar2 = 1;
	uVar0[0] = Local_208.f_7;
	func_12(&Local_208, &Local_14, 0);
	if (func_13(&Local_208, 12))
	{
		if (!func_13(&Local_208, 15))
		{
			if (!func_14(Global_35, func_9(&Local_14), 45f, 1, 1))
			{
				func_15();
				Local_14.f_44 = 1;
			}
		}
	}
	if (!Local_14.f_44)
	{
		if (func_13(&Local_208, 12) || func_13(&Local_208, 15))
		{
			Local_14.f_44 = 1;
			if (func_16() && !func_17(5))
			{
				func_18();
			}
		}
	}
	func_19();
	func_20(&Local_208);
	func_21(&Local_208);
	func_22(&Local_208);
	func_23(&Local_208);
	func_25(&Local_14, &uVar0, &uVar2, Local_208.f_2, iLocal_774, func_24(&Local_14), 0, 1, 0, 1);
	func_26();
}

void func_2(var uParam0, bool bParam1)
{
	func_27(&(uParam0->f_5));
	if (uParam0->f_161)
	{
		func_28("BEAT_LAUNCHED", 4000, 0, 1, 0, 0, -1, -1, 0);
	}
	MAP::ALLOW_SONAR_BLIPS(bParam1);
}

void func_3(var uParam0, var uParam1)
{
	uParam0->f_3 = func_29(uParam1);
	uParam0->f_161 = func_30(uParam1->f_2, 2);
}

int func_4(var uParam0, int iParam1)
{
	var uVar0;

	func_31(&(Local_208.f_2), &uVar0);
	func_32(&(Local_14.f_5), 1);
	*iParam1 = 1;
	return 1;
}

int func_5(var uParam0, int iParam1)
{
	if (func_33(&Local_14, uParam0, 0, 0, 0, 1, 0, 1))
	{
		func_34(&Local_14, &iLocal_774, &(Local_14.f_51.f_4));
		func_36(&Local_14, iLocal_774, 4346);
		if (!func_37(iLocal_774, &Local_208, &(Local_208.f_2)))
		{
			Local_14.f_160 = 1;
			return 1;
		}
		*iParam1 = 0;
		func_38(&Local_208, &Local_14);
		func_39(&uLocal_745);
		return 1;
	}
	return Local_14.f_160;
}

int func_6(int iParam0)
{
	switch (iLocal_775)
	{
		case 0:
			if (func_40(&Local_14))
			{
				func_41(&(Local_208.f_20), iLocal_774);
				func_42(Local_208.f_20.f_1);
				func_43(&(Local_208.f_434), iLocal_774, func_24(&Local_14), 0);
				Local_208.f_240 = func_44(&Local_208);
				iLocal_773 = joaat("pg_herbalistcamp01x");
				STREAMING::REQUEST_MODEL(func_45(Local_208.f_240), false);
				iLocal_775 = 1;
			}
			break;
		case 1:
			if (!func_46(iLocal_773, 0))
			{
				return 0;
			}
			if (!func_47(&(Local_208.f_20)))
			{
				return 0;
			}
			if (!func_48(Local_208))
			{
				return 0;
			}
			if (!func_49(2054734837))
			{
				return 0;
			}
			if (!func_50(Local_208))
			{
				return 0;
			}
			if (!func_51(&Local_208))
			{
				return 0;
			}
			if (!func_52(&(Local_208.f_434)))
			{
				return 0;
			}
			if (!STREAMING::HAS_MODEL_LOADED(func_45(Local_208.f_240)))
			{
				return 0;
			}
			if (func_53(Local_208, &uLocal_776, &(Local_208.f_112), &(Local_208.f_133), &(Local_208.f_154), &(Local_208.f_175)))
			{
				*iParam0 = 3;
				return 1;
			}
			break;
	}
	return 0;
}

int func_7(int iParam0)
{
	struct<4> Var0;

	Var0 = { func_54(3) };
	switch (iLocal_777)
	{
		case 0:
			if (func_55(&(Local_208.f_85), func_9(&Local_14), func_10(&Local_14), iLocal_773))
			{
				func_56(&(Local_208.f_90), Local_208, Local_208.f_85);
				iLocal_777 = 3;
			}
			break;
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(&(Local_208.f_90[2])))
			{
				func_57(&(Local_208.f_90), Local_208, func_9(&Local_14), func_10(&Local_14), &(Local_208.f_90[2]), 1);
				func_58(Local_208.f_85, joaat("p_sawbucktable01x"), &(Local_208.f_111), 0, 0);
				if (func_59(&Local_208) == 19)
				{
					Local_208.f_90[8] = OBJECT::CREATE_OBJECT(1451433354, func_9(&Local_14), true, true, false, false, true);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(&(Local_208.f_90[8]), Local_208.f_111, 0, -0.075f, 0.225f, 0.85f, 0f, 102f, 0.85f, 0, 0, 0, 0, 2, 1, 0, 0);
				}
				else if (func_59(&Local_208) == 18)
				{
					Local_208.f_90[6] = OBJECT::CREATE_OBJECT(-1191803341, func_9(&Local_14), true, true, false, false, true);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(&(Local_208.f_90[6]), Local_208.f_111, 0, -0.075f, 0.225f, 0.85f, 0f, 102f, 0.85f, 0, 0, 0, 0, 2, 1, 0, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(&(Local_208.f_90[9])))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(&(Local_208.f_90[9]), &(Local_208.f_90[2]), 0, -0.4453f, -0.1099f, 0.791f, 0f, 0f, 166.8399f, 0, 0, 0, 0, 2, 1, 0, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(&(Local_208.f_90[3])))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(&(Local_208.f_90[3]), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(&(Local_208.f_90[2]), Var0), func_60((ENTITY::GET_ENTITY_HEADING(&(Local_208.f_90[2])) + Var0.f_3.f_2)), 1, 0, 1);
					ENTITY::PLAY_ENTITY_ANIM(&(Local_208.f_90[3]), "MORTAR_PESTAL_STATIC", "SCRIPT_RE@HERBALISTCAMP", 1000f, false, true, true, 0f, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(&(Local_208.f_90[4])))
				{
					ENTITY::SET_ENTITY_VISIBLE(&(Local_208.f_90[4]), false);
					ENTITY::SET_ENTITY_COLLISION(&(Local_208.f_90[4]), false, false);
					func_61(&(Local_208.f_90[4]), 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(&(Local_208.f_90[0])))
				{
					ENTITY::FREEZE_ENTITY_POSITION(&(Local_208.f_90[0]), true);
				}
				Local_208.f_242 = OBJECT::CREATE_OBJECT(func_45(Local_208.f_240), func_9(&Local_14), true, true, false, false, true);
				ENTITY::SET_ENTITY_VISIBLE(Local_208.f_242, false);
				iLocal_777 = 2;
			}
			else
			{
				Local_14.f_160 = 1;
				return 1;
			}
			break;
		case 2:
			if (func_40(&Local_14))
			{
				Local_208.f_7 = func_62(&(Local_208.f_20), func_9(&Local_14), func_10(&Local_14));
				if (ENTITY::IS_ENTITY_DEAD(Local_208.f_7))
				{
					Local_14.f_160 = 1;
					return 1;
				}
				if (func_16() && !func_17(5))
				{
					func_63(&Local_208);
				}
				else
				{
					func_64(&Local_208);
				}
				iLocal_777 = 1;
			}
			break;
		case 1:
			func_65(&Local_208, func_9(&Local_14), func_10(&Local_14));
			ENTITY::SET_CAN_CLIMB_ON_ENTITY(&(Local_208.f_90[2]), false);
			PED::_0x24C82EF607105FAA(Local_208.f_7, joaat("avoid"));
			PED::SET_PED_CONFIG_FLAG(Local_208.f_7, 234, true);
			func_66(&(Local_208.f_434), Local_208.f_7, 1);
			if (func_67(&(Local_208.f_434)))
			{
				iLocal_777 = 4;
			}
			else
			{
				*iParam0 = 4;
				return 1;
			}
			break;
		case 4:
			func_68(&Local_208, &Local_14, 1109393408 /* Float: 40f */, 1101004800 /* Float: 20f */);
			func_69(&Local_208, &Local_14);
			Local_208.f_532 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(func_9(&Local_14), 0f, 0f, -3.807318f, 2.1f, 2.043975f, 1.310691f, "m_volHerbReturn");
			Local_208.f_533 = VOLUME::_0x0EB78C2B156635B1(665633627, func_9(&Local_14), 0f, 0f, 0f, 1.033522f, 1.130385f, 1.487637f);
			PED::_0x7C00CFC48A782DC0(Local_208.f_532, &(Local_208.f_90[2]), 0f, -0.9f, 0.7f, VOLUME::_0x18675BC914891122(Local_208.f_532), 2, 1);
			PED::_0x7C00CFC48A782DC0(Local_208.f_533, &(Local_208.f_90[2]), 0.1f, 1.95f, 1.025f, VOLUME::_0x18675BC914891122(Local_208.f_532), 2, 1);
			if (Local_208.f_2 != 2)
			{
				func_70(&Local_208, 0, -1904017806, 0, 1, 1, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_208.f_434.f_6))
			{
				Local_208.f_86 = PROPSET::_CREATE_PROPSET_3(joaat("pg_herbalistcamp01x_cart"), 0f, 0f, 0f, Local_208.f_434.f_6, 0f, false, 1, false);
				if (PROPSET::_DOES_PROPSET_EXIST(Local_208.f_86))
				{
					ENTITY::_0x9587913B9E772D29(Local_208.f_434.f_6, 1);
					*iParam0 = 4;
				}
				else
				{
					Local_14.f_160 = 1;
				}
				return 1;
			}
			else
			{
				Local_14.f_160 = 1;
				return 1;
			}
			break;
	}
	return 0;
}

int func_8()
{
	var uVar0[1];
	bool bVar2;

	uVar0[0] = Local_208.f_7;
	if (func_13(&Local_208, 13))
	{
		if (!func_13(&Local_208, 14))
		{
			if (!func_14(Global_35, func_9(&Local_14), 250f, 1, 1))
			{
				func_71("HRB_WARN", 10000, 0, 0, 0, 1);
				func_72(&Local_208, 14);
			}
		}
		else if (func_14(Global_35, func_9(&Local_14), 230f, 1, 1))
		{
			func_73(&Local_208, 14);
		}
		if (!func_14(Global_35, func_9(&Local_14), 280f, 1, 1))
		{
			func_74("HRB_FAIL", 7500, 0, 0, -1, -1, 0);
			return 1;
		}
	}
	if (func_75(&Local_208, &Local_14, Local_208.f_2, &uLocal_745))
	{
		Local_14.f_44 = 1;
		return 1;
	}
	if (!func_76(&Local_14, &uVar0, Local_208.f_2, 0, 1, 0, 1, 0))
	{
		return 1;
	}
	bVar2 = func_13(&Local_208, 13);
	if (func_77(&Local_14, &uVar0, 1, 1, 0, bVar2, 1, 1, bVar2, 0, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

Vector3 func_9(var uParam0)
{
	return uParam0->f_51;
}

float func_10(var uParam0)
{
	return uParam0->f_51.f_3;
}

void func_11(var uParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;

	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam4, func_78()) };
	if (!func_79(vVar0))
	{
		func_80(uParam0, vVar0, 2, -1082130432 /* Float: -1f */);
	}
}

void func_12(var uParam0, var uParam1, bool bParam2)
{
	if (uParam1->f_46)
	{
		func_81();
	}
	if (!bParam2)
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_87))
		{
			TASK::_0x81948DFE4F5A0283(uParam0->f_87);
		}
		if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_89))
		{
			TASK::_0x81948DFE4F5A0283(uParam0->f_89);
		}
		if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_88))
		{
			TASK::_0x81948DFE4F5A0283(uParam0->f_88);
		}
		func_82(&(uParam0->f_112));
		func_82(&(uParam0->f_133));
		if (PROPSET::_DOES_PROPSET_EXIST(uParam0->f_85))
		{
			PROPSET::_SET_PROPSET_AS_NO_LONGER_NEEDED(uParam0->f_85);
		}
		if (PROPSET::_DOES_PROPSET_EXIST(uParam0->f_86))
		{
			PROPSET::_SET_PROPSET_AS_NO_LONGER_NEEDED(uParam0->f_86);
		}
		func_20(uParam0);
		func_21(uParam0);
		func_22(uParam0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_7))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_7, 234, false);
	}
	else if (uParam1->f_46 && !func_13(uParam0, 1))
	{
		func_83();
	}
	if (func_13(uParam0, 24))
	{
		func_84();
	}
	if (uParam1->f_44)
	{
		func_85(40, 1, 0, 0, 12, 0, 0, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
	{
		func_86(uParam0->f_8, 0);
	}
	func_87(&(uParam0->f_477), 106);
}

int func_13(int iParam0, int iParam1)
{
	if (iParam1 <= 31)
	{
		return MISC::IS_BIT_SET(iParam0->f_3, iParam1);
	}
	else if (iParam1 <= 63)
	{
		return MISC::IS_BIT_SET(iParam0->f_4, (iParam1 - 32));
	}
	else if (iParam1 <= 95)
	{
		return MISC::IS_BIT_SET(iParam0->f_5, (iParam1 - 64));
	}
	return 0;
}

int func_14(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_88(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return 1;
	}
	return 0;
}

void func_15()
{
	func_89(9);
}

int func_16()
{
	if (func_90() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

int func_17(int iParam0)
{
	int iVar0;

	if (iParam0 != -1)
	{
		iVar0 = func_91(0);
		return MISC::IS_BIT_SET(iVar0, iParam0);
	}
	return 0;
}

void func_18()
{
	func_89(5);
}

void func_19()
{
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

void func_20(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_531))
	{
		func_92(uParam0->f_531);
	}
}

void func_21(var uParam0)
{
	func_93(uParam0->f_239);
}

void func_22(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_93(&(uParam0->f_234[iVar0]));
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 11)
	{
		func_94(uParam0->f_222[iVar1], 1);
		iVar1++;
	}
}

void func_23(int iParam0)
{
	if (func_13(iParam0, 40))
	{
		func_73(iParam0, 40);
		func_95(Global_1935630, 4);
	}
}

int func_24(var uParam0)
{
	return uParam0->f_51.f_4;
}

void func_25(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar9;

	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), func_96(uParam0->f_3)))
	{
		MISC::_0x1096603B519C905F("");
	}
	if (uParam0->f_48)
	{
		AUDIO::STOP_AUDIO_SCENE("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			func_97(uParam0->f_3, 524288);
		}
	}
	if (func_98(PLAYER::PLAYER_PED_ID(), 0, 1))
	{
		iVar1 = PED::GET_MOUNT(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			bVar3 = (bParam8 && DECORATOR::DECOR_EXIST_ON(uParam1[iVar0], "pedRoam_bInPedRoam"));
			if (func_98(uParam1[iVar0], 0, 0))
			{
				func_99(uParam1[iVar0], bVar3);
				if (func_100(uParam0, (*uParam1)[iVar0]))
				{
					func_101((*uParam1)[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (func_98(uParam1[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (PED::GET_PED_STEALTH_MOVEMENT(uParam1[iVar0]))
						{
							PED::SET_PED_STEALTH_MOVEMENT(uParam1[iVar0], 0, 0, 0);
						}
						else if (PED::_0xD5FE956C70FF370B(uParam1[iVar0]))
						{
							PED::_0x7DE9692C6F64CFE8(uParam1[iVar0], 0, 0, 0);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							func_103(uParam1[iVar0], 1073741824 /* Float: 2f */, func_102(iVar0 < iVar2, &(uParam0->f_98[iVar0]), -1f), iVar1, 0);
						}
						else
						{
							TASK::TASK_WANDER_STANDARD(uParam1[iVar0], 40000f, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam7)
	{
		func_104(uParam0);
	}
	func_105(uParam0);
	if (!uParam0->f_186)
	{
		func_106(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_107(uParam0->f_3, uParam0->f_185);
		MISC::_INT_TO_STRING(iVar4, "%u", &uVar5);
		iVar9 = 0;
		if (!uParam0->f_48)
		{
			iVar9 = 2;
		}
		else if (!uParam0->f_44)
		{
			iVar9 = 1;
		}
		func_108(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_26()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_27(var uParam0)
{
	func_109(uParam0, 0);
	func_32(uParam0, 0);
	func_110(uParam0, 1);
	func_111(uParam0, 1);
	func_112(uParam0, 0);
	func_113(uParam0, 1);
	func_114(uParam0, 1, 1, 1);
}

var func_28(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;

	if (bParam2)
	{
		_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_115(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_116(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_115(sVar0, iParam1, 0, 0, 1, 1);
}

var func_29(var uParam0)
{
	return *uParam0;
}

bool func_30(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_31(var uParam0, var uParam1)
{
	*uParam1 = 0;
	if (func_117())
	{
		*uParam0 = 2;
	}
	else
	{
		*uParam0 = 1;
	}
}

void func_32(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_118(&(uParam0->f_1), 2048);
	}
	else
	{
		func_119(&(uParam0->f_1), 2048);
	}
}

int func_33(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	float fVar0;

	if (iParam6 || func_120(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (iParam6 || func_121(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (func_122(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				MISC::CLEAR_AREA(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				func_123(uParam0, -1, 0, bParam7);
			}
			_NAMESPACE49::_0x9D16896F0DBE78A2(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = func_124(uParam0->f_51);
			}
			return 1;
		}
	}
	return 0;
}

void func_34(var uParam0, int iParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*iParam1 = 1;
			*uParam2 = 0;
			break;
		case 1:
			*iParam1 = 4;
			*uParam2 = 0;
			break;
		case 2:
			*iParam1 = 4;
			*uParam2 = 1;
			break;
		case 3:
			*iParam1 = 6;
			*uParam2 = 0;
			break;
		case 4:
			*iParam1 = 6;
			*uParam2 = 1;
			break;
		case 5:
			*iParam1 = 9;
			*uParam2 = 0;
			break;
		case 6:
			*iParam1 = 9;
			*uParam2 = 1;
			break;
		case 7:
			*iParam1 = 10;
			*uParam2 = 0;
			break;
		case 8:
			*iParam1 = 10;
			*uParam2 = 1;
			break;
		case 9:
			*iParam1 = 11;
			*uParam2 = 0;
			break;
		case 10:
			*iParam1 = 11;
			*uParam2 = 1;
			break;
		case 11:
			*iParam1 = 11;
			*uParam2 = 2;
			break;
		case 12:
			*iParam1 = 11;
			*uParam2 = 3;
			break;
		case 13:
			*iParam1 = 12;
			*uParam2 = 0;
			break;
		case 14:
			*iParam1 = 12;
			*uParam2 = 1;
			break;
		case 15:
			*iParam1 = 12;
			*uParam2 = 2;
			break;
		case 16:
			*iParam1 = 15;
			*uParam2 = 0;
			break;
	}
}

Vector3 func_35(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 310.25f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -19.44f;
				case 1:
					return 0f, 0f, 196.56f;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -59.76f;
				case 1:
					return 0f, 0f, -39.6f;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 61.92f;
				case 1:
					return 0f, 0f, -202.32f;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 159.84f;
				case 1:
					return 0f, 0f, 126.72f;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 261.36f;
				case 1:
					return 0f, 0f, -23.76f;
				case 2:
					return 0f, 0f, 163.44f;
				case 3:
					return 0f, 0f, -174.24f;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -295.2f;
				case 1:
					return 0f, 0f, -4.32f;
				case 2:
					return 0f, 0f, -210.96f;
				default:
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 148.32f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_36(var uParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	Stack.Push(iParam1);
	Stack.Push(uParam0->f_51.f_4);
	Call_Loc(iParam2);
	vVar0 = { StackVal, StackVal, StackVal };
	uParam0->f_51.f_3 = vVar0.z;
}

int func_37(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;

	bVar0 = false;
	switch (iParam0)
	{
		case 1:
		case 6:
		case 12:
			*uParam1 = 19;
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			*uParam1 = 40;
			break;
		default:
			*uParam1 = func_125(iParam0, !bVar0, 0, 119, 0);
			break;
	}
	if ((iParam0 == 12 || iParam0 == 1) || iParam0 == 6)
	{
		*uParam1 = 19;
	}
	if (*uParam1 == 0)
	{
		return 0;
	}
	if ((func_16() && *uParam1 == 43) && !bVar0)
	{
		return 0;
	}
	switch (*uParam1)
	{
		case 18:
		case 19:
		case 40:
		case 43:
			if (*uParam1 != 43 && *uParam2 != 1)
			{
				*uParam2 = 1;
			}
			return 1;
	}
	return 0;
}

void func_38(var uParam0, var uParam1)
{
	func_126(&(uParam0->f_239), 665633627, func_9(uParam1), 0f, 0f, 0f, 5f, 5f, 5f);
}

void func_39(int iParam0)
{
	func_127(iParam0, 1);
	func_128(iParam0, 1);
	func_129(iParam0, 1);
}

int func_40(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_130(uParam0->f_3);
	iVar1 = func_131(1);
	if (iVar1 > 0)
	{
		iVar0 = (iVar0 + iVar1);
	}
	PED::_0xED9582B3DA8F02B4(iVar0);
	if (PED::_0x5C16855277819BBF() >= iVar0)
	{
		return 1;
	}
	return 0;
}

void func_41(var uParam0, int iParam1)
{
	uParam0->f_1 = joaat("cs_herbalist");
	*uParam0 = 4;
	StringCopy(&(uParam0->f_23), "HERBALIST", 64);
	uParam0->f_6 = { -0.6f, 1.95f, 0f };
	func_132(uParam0);
}

bool func_42(int iParam0)
{
	bool bVar0;

	bVar0 = false;
	if (!func_133(2054734837, 262145, iParam0, -1904017806))
	{
		bVar0 = true;
	}
	if (!func_133(2054734837, 262145, iParam0, 2093245709))
	{
		bVar0 = true;
	}
	if (!func_133(2054734837, 262145, iParam0, -1189657660))
	{
		bVar0 = true;
	}
	if (!func_133(2054734837, 262161, iParam0, 494354620))
	{
		bVar0 = true;
	}
	return !bVar0;
}

void func_43(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		func_134(uParam0, 1, 3, 1, 3, 0);
		return;
	}
	switch (iParam1)
	{
		case 1:
			switch (iParam2)
			{
				case 0:
					func_134(uParam0, 0, 0, 0, 0, 0);
					break;
			}
			break;
		case 4:
			switch (iParam2)
			{
				case 0:
					func_134(uParam0, 0, 1, 0, 1, 2);
					break;
				case 1:
					func_134(uParam0, 1, 0, 1, 0, 0);
					break;
			}
			break;
		case 6:
			switch (iParam2)
			{
				case 0:
					func_134(uParam0, 0, 3, 0, 3, 0);
					break;
				case 1:
					func_134(uParam0, 1, 1, 1, 1, 2);
					break;
			}
			break;
		case 9:
			switch (iParam2)
			{
				case 0:
					func_134(uParam0, 0, 4, 0, 4, 2);
					break;
				case 1:
					func_134(uParam0, 0, 5, 0, 5, 0);
					break;
			}
			break;
		case 10:
			switch (iParam2)
			{
				case 0:
					func_134(uParam0, 0, 8, 0, 8, 0);
					break;
				case 1:
					func_134(uParam0, 0, 6, 0, 6, 0);
					break;
			}
			break;
		case 11:
			switch (iParam2)
			{
				case 0:
					func_134(uParam0, 0, 9, 0, 9, 0);
					break;
				case 1:
					func_134(uParam0, 0, 10, 0, 10, 2);
					break;
				case 2:
					func_134(uParam0, 0, 11, 0, 11, 0);
					break;
				case 3:
					func_134(uParam0, 0, 12, 0, 12, 2);
					break;
			}
			break;
		case 12:
			switch (iParam2)
			{
				case 0:
					func_134(uParam0, 0, 13, 0, 13, 0);
					break;
				case 1:
					func_134(uParam0, 0, 14, 0, 14, 2);
					break;
				case 2:
					func_134(uParam0, 0, 15, 0, 15, 0);
					break;
			}
			break;
		case 15:
			switch (iParam2)
			{
				case 0:
					func_134(uParam0, 1, 2, 1, 2, 2);
					break;
			}
			break;
	}
}

int func_44(int iParam0)
{
	switch (func_59(iParam0))
	{
		case 43:
			if (func_136(func_135(0), 0, 0) < 3)
			{
				return 0;
			}
			else if (func_136(func_135(3), 0, 0) < 3)
			{
				return 3;
			}
			else
			{
				return 4;
			}
			break;
		case 19:
			if (!func_137(-142033055 /* GXTEntry: "Special Horse Stimulant Pamphlet" */, 1, 0) && !func_137(544037666 /* GXTEntry: "Special Horse Stimulant Pamphlet" */, 1, 0))
			{
				return 1;
			}
			else if (func_136(func_135(3), 0, 0) < 3)
			{
				return 3;
			}
			else
			{
				return 4;
			}
			break;
		case 18:
			if (func_136(func_135(3), 0, 0) < 3)
			{
				return 3;
			}
			else
			{
				return 4;
			}
			break;
		case 40:
			if (!func_137(2141714005, 1, 0) && !func_137(-770894319 /* GXTEntry: "Poison Arrow Pamphlet" */, 1, 0))
			{
				return 2;
			}
			else if (func_136(func_135(3), 0, 0) < 3)
			{
				return 3;
			}
			else
			{
				return 4;
			}
			break;
	}
	return 3;
}

int func_45(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1230431605;
		case 1:
			return 1615856661;
		case 2:
			return 1615856661;
		case 3:
			return -1483557278;
		case 4:
			return -1483557278;
		default:
			break;
	}
	return -1483557278;
}

int func_46(int iParam0, int iParam1)
{
	if (iParam1 == 0 || iParam1 == 1)
	{
		if (!PROPSET::_HAS_PROPSET_LOADED(iParam0))
		{
			PROPSET::_REQUEST_PROPSET(iParam0);
			return 0;
		}
	}
	if (iParam1 == 0 || iParam1 == 2)
	{
		if (!PROPSET::_HAS_PROPSET_LOADED(joaat("pg_herbalistcamp01x_cart")))
		{
			PROPSET::_REQUEST_PROPSET(joaat("pg_herbalistcamp01x_cart"));
			return 0;
		}
	}
	return 1;
}

int func_47(var uParam0)
{
	if (func_138(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_48(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	bVar2 = false;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iVar1 = func_139(iVar0, iParam0);
		if (iVar1 != 0)
		{
			STREAMING::REQUEST_MODEL(iVar1, false);
			if (!STREAMING::HAS_MODEL_LOADED(iVar1))
			{
				bVar2 = true;
			}
		}
		iVar0++;
	}
	return !bVar2;
}

bool func_49(int iParam0)
{
	return STREAMING::_0x9427C94D2E4094A4(iParam0, 0);
}

bool func_50(int iParam0)
{
	bool bVar0;

	bVar0 = false;
	if (!func_141(func_140(iParam0, 0)))
	{
		bVar0 = true;
	}
	if (!func_141(func_140(iParam0, 1)))
	{
		bVar0 = true;
	}
	if (!func_141(func_140(19, 0)))
	{
		bVar0 = true;
	}
	if (!func_141(func_140(43, 0)))
	{
		bVar0 = true;
	}
	if (!func_141(func_140(43, 1)))
	{
		bVar0 = true;
	}
	if (!func_141("SCRIPT_RE@HERBALISTCAMP"))
	{
		bVar0 = true;
	}
	if (!func_141("SCRIPT_RE@HERBALISTCAMP@SERUM_HANDOVER"))
	{
		bVar0 = true;
	}
	if (!func_141("script_common@shared_scenarios@stand@random@herbalist@stand@base"))
	{
		bVar0 = true;
	}
	if (!func_141("SCRIPT_COMMON@SHARED_SCENARIOS@STAND@RANDOM@HERBALIST@LEAN_READ@TRANSITIONS"))
	{
		bVar0 = true;
	}
	if (!func_141("SCRIPT_COMMON@SHARED_SCENARIOS@STAND@RANDOM@HERBALIST@MIX_MORTAR@TRANSITIONS"))
	{
		bVar0 = true;
	}
	if (!func_141("SCRIPT_RE@HERBALISTCAMP@PAMPHLET_HANDOVER"))
	{
		bVar0 = true;
	}
	return !bVar0;
}

int func_51(int iParam0)
{
	int iVar0;

	iVar0 = func_45(iParam0->f_240);
	if (STREAMING::IS_MODEL_VALID(iVar0))
	{
		if (!STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			STREAMING::REQUEST_MODEL(iVar0, false);
			return 0;
		}
		return 1;
	}
	return 0;
}

bool func_52(var uParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	if (*uParam0 != -1)
	{
		if (uParam0->f_1 > -1)
		{
			iVar1 = func_142(*uParam0, uParam0->f_1);
			if (STREAMING::IS_MODEL_VALID(iVar1))
			{
				STREAMING::REQUEST_MODEL(iVar1, false);
				if (!STREAMING::HAS_MODEL_LOADED(iVar1))
				{
					bVar0 = true;
				}
			}
		}
	}
	if (uParam0->f_2 != -1)
	{
		if (uParam0->f_3 > -1)
		{
			iVar1 = func_143(uParam0->f_2, uParam0->f_3);
			if (STREAMING::IS_MODEL_VALID(iVar1))
			{
				STREAMING::REQUEST_MODEL(iVar1, false);
				if (!STREAMING::HAS_MODEL_LOADED(iVar1))
				{
					bVar0 = true;
				}
			}
		}
	}
	return !bVar0;
}

int func_53(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	switch (*uParam1)
	{
		case 0:
			if (!func_145(uParam2, iParam0, 1, func_144(iParam0, 0, 1, 2, 3)))
			{
				return 0;
			}
			if (!func_149(uParam3, "script@beat@wilderness@herbalistCamp@playerScene", 27835, 27985, func_148(iParam0), 0, 0, 0, 0))
			{
				return 0;
			}
			if (!func_149(uParam4, "script@beat@wilderness@herbalistcamp@directional_exchange_new", 27835, 27985, 4, 0, 0, 0, 0))
			{
				return 0;
			}
			if (!func_149(uParam5, "script@beat@wilderness@herbalistcamp@forward_exchange_new", 27835, 27985, 4, 0, 0, 0, 0))
			{
				return 0;
			}
			*uParam1 = 1;
			break;
		case 1:
			if (((!func_150(uParam2) || !func_150(uParam3)) || !func_150(uParam4)) || !func_150(uParam5))
			{
				return 0;
			}
			return 1;
	}
	return 0;
}

struct<6> func_54(int iParam0)
{
	struct<6> Var0;

	switch (iParam0)
	{
		case 1:
			Var0 = { 6.91589f, 19.1461f, 79.96f };
			Var0.f_3 = { -0.93f, 0f, 160f };
			break;
		case 3:
			Var0 = { 28.17f, 7.71f, 79.57f };
			Var0.f_3 = { 0f, 0f, -90.18f };
			break;
		case 4:
			Var0 = { 27.64f, 21.44f, 80.51f };
			Var0.f_3 = { 130.64f, 54.88f, -167.18f };
			break;
		case 0:
			Var0 = { -31.32f, 5.31f, 81.07f };
			Var0.f_3 = { -180f, 0f, -27f };
			break;
		case 9:
			Var0 = { -54.1f, -5.7f, 79.61f };
			Var0.f_3 = { 0f, 0f, 134f };
			break;
		case 10:
			Var0 = { -49.69f, -9.25f, 79.24f };
			Var0.f_3 = { -3.4f, -0.66f, 149.02f };
			break;
		case 11:
			Var0 = { 50.71f, -7.37f, 78.39f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		case 13:
			Var0 = { 3.34f, -1.45f, -1f };
			Var0.f_3 = { 0f, 0f, 156.24f };
			break;
	}
	Var0 = { Var0 * Vector(0.01f, 0.01f, 0.01f) };
	Var0.f_3 = { Vector(Var0.f_3.f_2, 0f, 0f) * Vector(-1f, -1f, -1f) };
	return Var0;
}

int func_55(var uParam0, vector3 vParam1, float fParam4, int iParam5)
{
	if (!PROPSET::_DOES_PROPSET_EXIST(*uParam0))
	{
		*uParam0 = PROPSET::_CREATE_PROPSET(iParam5, vParam1, 0, fParam4, 1200f, false, true);
		return 0;
	}
	else
	{
		return PROPSET::_0xF42DB680A8B2A4D9(*uParam0);
	}
	return 0;
}

void func_56(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!func_151(iVar0, iParam1))
		{
			if (!func_58(iParam2, func_139(iVar0, iParam1), (*uParam0)[iVar0], func_152(iVar0), joaat("pg_herbalistcamp01x_notable")))
			{
			}
		}
		iVar0++;
	}
}

void func_57(var uParam0, int iParam1, vector3 vParam2, float fParam5, var uParam6, bool bParam7)
{
	int iVar0;
	struct<4> Var1;
	int iVar7;
	int iVar8;
	int iVar9;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0[iVar0]))
		{
			if (func_151(iVar0, iParam1))
			{
				iVar7 = func_139(iVar0, iParam1);
				if (func_153(iVar0))
				{
					Var1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam2, fParam5, func_154(iVar0)) };
					if (bParam7)
					{
						(*uParam0)[iVar0] = OBJECT::CREATE_OBJECT(iVar7, Var1, true, true, false, false, true);
					}
					else
					{
						iVar8 = func_155(iVar7, 1);
						if (ENTITY::DOES_ENTITY_EXIST(iVar8))
						{
							(*uParam0)[iVar0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar8);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(uParam0[iVar0]))
					{
						ENTITY::SET_ENTITY_HEADING(uParam0[iVar0], func_60((fParam5 + func_156(iVar0))));
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0[iVar0], true, true);
						func_157(uParam0[iVar0]);
					}
				}
				else
				{
					Var1 = { func_54(iVar0) };
					if (!func_79(Var1))
					{
						if (bParam7)
						{
							(*uParam0)[iVar0] = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar7, vParam2, true, true, false, true);
						}
						else
						{
							iVar9 = func_155(iVar7, 1);
							if (ENTITY::DOES_ENTITY_EXIST(iVar9))
							{
								(*uParam0)[iVar0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar9);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(uParam0[iVar0]))
						{
							func_157(uParam0[iVar0]);
						}
						if (ENTITY::DOES_ENTITY_EXIST(uParam0[iVar0]) && func_158(iVar0))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0[iVar0], uParam6, -1, Var1, Var1.f_3, 1, 1, 0, 0, 2, 1, 0, 0);
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0[iVar0], true, true);
						}
					}
				}
				if (iVar0 == 19)
				{
					if (!bParam7)
					{
						(*uParam0)[iVar0] = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar7, vParam2, true, true, false, true);
					}
					if (ENTITY::DOES_ENTITY_EXIST(uParam0[iVar0]))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0[iVar0], false);
					}
				}
			}
		}
		iVar0++;
	}
}

int func_58(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (ENTITY::DOES_ENTITY_EXIST(*uParam2) && ENTITY::IS_ENTITY_AN_OBJECT(*uParam2))
	{
		return 1;
	}
	if (PROPSET::_0xF42DB680A8B2A4D9(iParam0) || PROPSET::_HAS_PROPSET_LOADED(iParam4))
	{
		iVar0 = ITEMSET::CREATE_ITEMSET(false);
		iVar1 = PROPSET::_GET_ENTITIES_FROM_PROPSET(iParam0, iVar0, iParam1, false, false);
		if (iVar1 > 0)
		{
			if (iParam3 < 1 && iParam3 < iVar1)
			{
				*uParam2 = MISC::_0x18013392501CE5DC(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(0, iVar0));
			}
			else
			{
				*uParam2 = MISC::_0x18013392501CE5DC(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iParam3, iVar0));
			}
		}
		ITEMSET::_0x20A4BF0E09BEE146(iVar0);
		ITEMSET::CLEAN_ITEMSET(iVar0);
		ITEMSET::DESTROY_ITEMSET(iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(*uParam2))
		{
			vVar2 = { ENTITY::GET_ENTITY_COORDS(*uParam2, true, false) };
		}
		return (ENTITY::DOES_ENTITY_EXIST(*uParam2) && ENTITY::IS_ENTITY_AN_OBJECT(*uParam2));
	}
	return 0;
}

int func_59(int iParam0)
{
	return *iParam0;
}

float func_60(float fParam0)
{
	float fVar0;

	fVar0 = fParam0;
	if (fParam0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	else if (fParam0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	return fVar0;
}

void func_61(int iParam0, int iParam1)
{
	func_159(iParam0, iParam1);
}

int func_62(var uParam0, vector3 vParam1, float fParam4)
{
	return func_160(uParam0->f_1, uParam0, vParam1, fParam4, 1, 0, 1, 0, 1);
}

void func_63(int iParam0)
{
	var uVar0;
	var uVar1;

	uVar1 = PLAYER::_0x0139637A3BFF8B6D(iParam0->f_7, &uVar0);
	PLAYER::_0xCDDD4B74660E2335(PLAYER::PLAYER_ID(), uVar0, uVar1);
}

void func_64(int iParam0)
{
	var uVar0;
	var uVar1;

	uVar1 = PLAYER::_0x0139637A3BFF8B6D(iParam0->f_7, &uVar0);
	PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), uVar0, uVar1);
}

int func_65(int iParam0, var uParam1, float fParam2, var uParam3, float fParam4)
{
	struct<4> Var0;
	vector3 vVar4;
	float fVar7;

	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iParam0->f_87))
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(iParam0->f_90[2])))
		{
			Var0 = { func_161(iParam0) };
			iParam0->f_87 = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(&(iParam0->f_90[2]), 2054734837, Var0, Var0.f_3, 0, -1f, 1);
			func_162(iParam0, 0);
		}
		else
		{
			iParam0->f_90[2] = OBJECT::CREATE_OBJECT(1969096843, 556.813f, 172.2274f, 133.3552f, true, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(&(iParam0->f_90[2]), 0f, 0f, -142.76f, 2, true);
		}
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iParam0->f_89) && TASK::_DOES_SCENARIO_POINT_EXIST(iParam0->f_87))
	{
		vVar4 = { TASK::_GET_SCENARIO_POINT_COORDS(iParam0->f_87, 1) };
		fVar7 = TASK::_GET_SCENARIO_POINT_HEADING(iParam0->f_87, 1);
		Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar4, fVar7, -0.284f, -4.8223f, 0f) };
		Var0.f_3 = func_60((fVar7 - 18.87f));
		iParam0->f_89 = TASK::CREATE_SCENARIO_POINT(2054734837, Var0, Var0.f_3, 0, 0, 1);
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iParam0->f_89))
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iParam0->f_87))
		{
			TASK::_0x5AF19B6CC2115D34(iParam0->f_87, 14, 1);
			TASK::_0x5AF19B6CC2115D34(iParam0->f_87, 22, 1);
			TASK::_0x5AF19B6CC2115D34(iParam0->f_89, 14, 1);
			TASK::_0x5AF19B6CC2115D34(iParam0->f_89, 22, 1);
			return 1;
		}
	}
	return 0;
}

void func_66(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2)
	{
		if (*uParam0 != -1)
		{
			if (uParam0->f_1 > -1)
			{
				iVar0 = func_142(*uParam0, uParam0->f_1);
				if (STREAMING::IS_MODEL_VALID(iVar0))
				{
					if (STREAMING::HAS_MODEL_LOADED(iVar0) && !ENTITY::DOES_ENTITY_EXIST(uParam0->f_5))
					{
						uParam0->f_5 = func_163(*uParam0, uParam0->f_1);
						PED::_0x931B241409216C1F(iParam1, uParam0->f_5, 0);
						PED::SET_PED_KEEP_TASK(uParam0->f_5, true);
					}
				}
			}
		}
	}
	if (uParam0->f_2 != -1)
	{
		if (uParam0->f_3 > -1)
		{
			iVar0 = func_143(uParam0->f_2, uParam0->f_3);
			if (STREAMING::IS_MODEL_VALID(iVar0))
			{
				if (STREAMING::HAS_MODEL_LOADED(iVar0) && !ENTITY::DOES_ENTITY_EXIST(uParam0->f_6))
				{
					uParam0->f_6 = func_164(uParam0->f_2, uParam0->f_3);
				}
			}
		}
	}
}

int func_67(var uParam0)
{
	if (uParam0->f_2 != -1)
	{
		if (uParam0->f_3 > -1)
		{
			if (STREAMING::IS_MODEL_VALID(func_143(uParam0->f_2, uParam0->f_3)))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_68(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_93(iParam0->f_531);
	iParam0->f_531 = VOLUME::_CREATE_VOLUME_CYLINDER(func_9(uParam1), 0f, 0f, 0f, iParam2, iParam2, iParam3);
	func_165(iParam0->f_531, 1);
}

void func_69(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		switch (iVar0)
		{
			case 0:
				func_166(iParam0, uParam1, iVar0, -1612834106, 1.55f, -3.1f, 0.96f, 0f, 0f, 28.075f, 6.256512f, 3.460136f, 3f);
				break;
			case 1:
				func_166(iParam0, uParam1, iVar0, -1612834106, -4.76f, -1.15f, 0.96f, 0f, 0f, 25.075f, 3.083873f, 3.275494f, 3f);
				break;
			case 2:
				func_166(iParam0, uParam1, iVar0, -1612834106, 1.56f, -2.29f, -0.11f, 0f, 0f, 25.075f, 2.312612f, 2.058657f, 2.086685f);
				break;
			case 3:
				func_166(iParam0, uParam1, iVar0, -1612834106, -2.88f, -0.27f, 0.96f, 0f, 0f, 25.075f, 1.708217f, 3.275494f, 3f);
				break;
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 11)
	{
		switch (iVar1)
		{
			case 0:
				func_167(iParam0, uParam1, iVar1, 1, 0f, 0f, 0f, 7f, 0);
				break;
			case 7:
				func_168(iParam0, iVar1, 2, 0, 0);
				break;
			case 1:
				func_167(iParam0, uParam1, iVar1, 1, 0f, 0f, 0f, 1.5f, 1);
				break;
			case 8:
				func_167(iParam0, uParam1, iVar1, 2, 0f, 0f, 0f, 2.5f, 0);
				break;
			case 9:
				func_168(iParam0, iVar1, 2, 1, 0);
				break;
			case 2:
				func_168(iParam0, iVar1, 1, 2, 1);
				break;
			case 3:
				func_168(iParam0, iVar1, 1, 3, 1);
				break;
			case 4:
				func_167(iParam0, uParam1, iVar1, 1, 2.03f, 0.67f, 0f, 1f, 1);
				break;
			case 5:
				func_167(iParam0, uParam1, iVar1, 1, 2.48f, 0.21f, 0f, 1f, 1);
				break;
			case 6:
				func_167(iParam0, uParam1, iVar1, 1, 2.89f, 0.69f, 0f, 1.25f, 1);
				break;
			case 10:
				func_167(iParam0, uParam1, iVar1, 2, 0.4f, 3.33f, 0f, 1.25f, 0);
				break;
		}
		iVar1++;
	}
}

void func_70(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, float fParam6)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_7))
	{
		return;
	}
	iParam1 = 0;
	iParam2 = -1904017806;
	if (bParam5)
	{
		if (PED::_0x9C54041BB66BCF9E(iParam0->f_7, iParam0->f_87) || func_169(iParam0->f_7, -76381094))
		{
			return;
		}
	}
	if (!bParam3)
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
	}
	TASK::_TASK_USE_SCENARIO_POINT(0, iParam0->f_87, func_170(iParam2), -1, !bParam4, bParam4, 0, 0, 4f, 0);
	iParam0->f_521 = 1;
	if (!bParam3)
	{
		func_171(iParam0->f_7, &iVar0, fParam6, fParam6, 1, 1);
	}
}

var func_71(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_72(int iParam0, int iParam1)
{
	if (iParam1 <= 31)
	{
		MISC::SET_BIT(&(iParam0->f_3), iParam1);
	}
	else if (iParam1 <= 63)
	{
		MISC::SET_BIT(&(iParam0->f_4), (iParam1 - 32));
	}
	else if (iParam1 <= 95)
	{
		MISC::SET_BIT(&(iParam0->f_5), (iParam1 - 64));
	}
}

void func_73(int iParam0, int iParam1)
{
	if (iParam1 <= 31)
	{
		MISC::CLEAR_BIT(&(iParam0->f_3), iParam1);
	}
	else if (iParam1 <= 63)
	{
		MISC::CLEAR_BIT(&(iParam0->f_4), (iParam1 - 32));
	}
	else if (iParam1 <= 95)
	{
		MISC::CLEAR_BIT(&(iParam0->f_5), (iParam1 - 64));
	}
}

void func_74(char* sParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	func_28(sParam0, iParam1, 0, 1, sParam2, sParam3, sParam4, sParam5, iParam6);
}

int func_75(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	iVar0 = 0;
	func_172(uParam0, uParam1);
	func_173(uParam0, uParam1);
	if (uParam0->f_1 > 0)
	{
		if (func_13(uParam0, 46))
		{
			if (!func_13(uParam0, 47))
			{
				func_72(uParam0, 4);
				func_72(uParam0, 47);
				func_72(uParam0, 48);
				func_73(uParam0, 62);
				func_73(uParam0, 67);
				func_174(uParam0, 262144);
				func_23(uParam0);
				func_175(&(uParam0->f_9));
				if (func_176(uParam0->f_215, 1, 1))
				{
					func_177(&(uParam0->f_215), 1);
				}
				if (((func_13(uParam0, 12) && !func_13(uParam0, 38)) && !func_13(uParam0, 23)) && !func_13(uParam0, 15))
				{
					func_74("HRB_FAIL", 7500, 0, 0, -1, -1, 0);
					func_19();
				}
				if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_87))
				{
					TASK::_0x81948DFE4F5A0283(uParam0->f_87);
				}
				if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_88))
				{
					TASK::_0x81948DFE4F5A0283(uParam0->f_88);
				}
				if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_89))
				{
					TASK::_0x81948DFE4F5A0283(uParam0->f_89);
				}
				func_72(uParam0, 65);
				func_89(6);
				func_178(4);
				uParam0->f_1 = 12;
				if (uParam0->f_523 == 7)
				{
					uParam0->f_206 = 6;
				}
			}
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
			if (func_179(uParam0, uParam1, &(uParam1->f_5)))
			{
				func_180(func_9(uParam1), uParam0->f_7, &(uParam0->f_215));
				func_181(uParam0->f_7, uParam1, 0);
				func_181(&(uParam0->f_90[15]), uParam1, 0);
				func_182(uParam0, 1);
				func_72(uParam0, 67);
				func_183(uParam0->f_284.f_21[2 /*17*/], 1, 1);
				WEAPON::REMOVE_ALL_PED_WEAPONS(uParam0->f_7, true, true);
				func_184(uParam0->f_7, joaat("weapon_melee_knife"), 0, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				func_39(&(uParam0->f_243));
				func_185(uParam0, 1, 1);
				if (func_186())
				{
					func_72(uParam0, 16);
				}
				if (func_13(uParam0, 1))
				{
					if (func_17(12))
					{
						func_187(uParam0, 8);
					}
				}
				EVENT::_0xBB1E41DD3D3C6250(uParam0->f_7, "SpAggroFocus", 0);
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20.f_11))
				{
					ENTITY::_0x18FF3110CF47115D(uParam0->f_20.f_11, 9, 0);
				}
				if (func_13(uParam0, 1))
				{
					if (func_13(uParam0, 7))
					{
						uParam0->f_1 = 12;
					}
					else if (func_13(uParam0, 6))
					{
						uParam0->f_1 = 11;
					}
					else if (func_13(uParam0, 5) || func_188())
					{
						func_72(uParam0, 12);
						func_72(uParam0, 13);
						func_189(uParam0, 1);
						uParam0->f_196 = 7;
						uParam0->f_1 = 3;
					}
					else
					{
						uParam0->f_1 = 2;
					}
				}
				else
				{
					uParam0->f_1 = 1;
				}
				if (func_188())
				{
					func_190();
					func_72(uParam0, 32);
				}
			}
			break;
		case 1:
			func_191(uParam0);
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam0->f_7, false);
			if (func_192(uParam0, uParam1))
			{
				func_193(uParam0, 1, 1);
				if (!func_17(6))
				{
					uParam0->f_1 = 2;
				}
				else
				{
					func_185(uParam0, 2, 2);
					func_72(uParam0, 46);
					uParam0->f_1 = 12;
				}
			}
			else
			{
				func_194(uParam0);
			}
			break;
		case 2:
			func_191(uParam0);
			if (func_195(uParam0))
			{
				func_196(uParam0, 16);
				func_197(uParam0);
				if (func_13(uParam0, 1))
				{
					func_198();
				}
				func_72(uParam0, 67);
				uParam0->f_1 = 3;
			}
			break;
		case 3:
			if (func_199(uParam0, uParam1))
			{
				func_23(uParam0);
				func_73(uParam0, 62);
				func_73(uParam0, 67);
				uParam0->f_495 = 0;
				uParam0->f_1 = 4;
			}
			break;
		case 4:
			if (func_200(uParam0))
			{
				uParam0->f_1 = 5;
			}
			break;
		case 5:
			if (func_201(uParam0, uParam1))
			{
				func_72(uParam0, 3);
				func_196(uParam0, 16);
				func_196(uParam0, 131072);
				uParam0->f_1 = 11;
			}
			break;
		case 6:
			if (func_202(uParam0))
			{
				uParam0->f_1 = 11;
			}
			break;
		case 8:
			if (func_203(uParam0, uParam1, *uParam3))
			{
				uParam0->f_1 = 11;
			}
			break;
		case 9:
			if (func_204(uParam0))
			{
				if (!func_205(uParam0->f_7, 0) || !PED::IS_PED_FLEEING(uParam0->f_7))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_7))
					{
						if (!PED::IS_PED_IN_COMBAT(uParam0->f_7, Global_35))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->f_7, Global_35, 1, 1))
							{
								func_206(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_AGGRO", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							else if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_434.f_5) && func_207(Global_35, uParam0->f_434.f_5, 0))
							{
								func_206(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_AGGRO_H", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							else
							{
								func_206(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_AGGRO_B", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
						}
					}
					if (func_13(uParam0, 1))
					{
						func_72(uParam0, 2);
					}
					uParam0->f_1 = 13;
				}
			}
			break;
		case 10:
			if (!func_98(uParam0->f_7, 0, 1) || !func_208(Global_35, uParam0->f_7, 40f, 1))
			{
				return 1;
			}
			break;
		case 7:
			if (func_209(uParam0))
			{
				uParam1->f_46 = 1;
				uParam1->f_50 = 1;
				uParam0->f_1 = 11;
			}
			break;
		case 11:
			if (func_210(uParam0, uParam1, uParam1->f_46))
			{
				iVar0 = 1;
			}
			break;
		case 12:
			if (func_211(uParam0))
			{
				iVar0 = 1;
			}
			break;
		case 13:
			break;
	}
	func_212(uParam0);
	func_213(uParam0);
	return iVar0;
}

int func_76(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_106(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	func_214(uParam0, uParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				func_215(&(uParam0->f_5));
			}
			func_119(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !func_216(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_217(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_218(&(uParam0->f_121));
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
		case 1:
			if (!uParam0->f_48)
			{
				if (!bParam7)
				{
					if (uParam0->f_193 < 2)
					{
						uParam0->f_193++;
					}
					else
					{
						uParam0->f_193 = 0;
					}
					func_219(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!func_220(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (func_122(uParam0->f_3, 128))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uParam1[0]) && !PED::IS_PED_INJURED(uParam1[0])) && uParam0->f_3 != 49)
		{
			if (!VOLUME::_0xF6A8A652A6B186CD(VOLUME::_0xF6F5447D418DAA82(uParam1[0])))
			{
				func_221(uParam0, uParam1[0]);
			}
		}
		if (bParam6)
		{
			if (PED::_IS_PED_CARRYING(Global_35))
			{
				iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
						if (ENTITY::DOES_ENTITY_EXIST(iVar2))
						{
							if (PED::_0x3AA24CCC0D451379(iVar2) || ((bParam5 || PED::IS_PED_HUMAN(iVar2)) && ENTITY::IS_ENTITY_DEAD(iVar2)))
							{
								bVar0 = true;
							}
						}
					}
				}
			}
		}
	}
	uParam0->f_158 = 0;
	uParam0->f_1++;
	uParam0->f_2++;
	if (bVar0)
	{
		return 0;
	}
	return 1;
}

int func_77(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, int iParam10, int iParam11, int iParam12)
{
	float fVar0;
	vector3 vVar1;

	fVar0 = 0f;
	if (uParam0->f_1 >= 4)
	{
		if (bParam6)
		{
			if (func_222())
			{
				return 1;
			}
		}
		if (bParam7)
		{
			if (Global_16)
			{
				return 1;
			}
		}
		if (!uParam0->f_48)
		{
			if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	if (bParam2 || bParam4)
	{
		if (uParam0->f_188 == 0)
		{
			if (bParam5)
			{
				fVar0 = 300f;
				if (!bParam8 && uParam0->f_48)
				{
					fVar0 = (fVar0 - 65f);
				}
			}
			else if (func_223(uParam0->f_3))
			{
				fVar0 = 250f;
			}
			else if (func_122(uParam0->f_3, 131072))
			{
				fVar0 = 70f;
				fVar0 = (fVar0 + 10f);
			}
			else if (func_122(uParam0->f_3, 1) && iParam12 == 0)
			{
				fVar0 = 215f;
				fVar0 = (fVar0 + 20f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 80f);
				}
			}
			else if (func_122(uParam0->f_3, 2) || iParam12 == 1)
			{
				fVar0 = 125f;
				fVar0 = (fVar0 + 10f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 50f);
				}
			}
			uParam0->f_189 = fVar0;
		}
		else
		{
			fVar0 = uParam0->f_189;
		}
		fVar0 = (fVar0 * fVar0);
		if (bParam2)
		{
			if (uParam0->f_188 < *uParam1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam1[uParam0->f_188]))
				{
					if (Global_1935630->f_40 != uParam1[uParam0->f_188])
					{
						if ((bParam3 && !ENTITY::IS_ENTITY_DEAD(uParam1[uParam0->f_188])) || !bParam3)
						{
							if ((&uParam0->f_98[uParam0->f_188] * &uParam0->f_98[uParam0->f_188]) <= fVar0)
							{
								uParam0->f_187 = 0;
							}
						}
					}
				}
				uParam0->f_188++;
			}
			else
			{
				uParam0->f_188 = 0;
				if (uParam0->f_187)
				{
					return 1;
				}
				else
				{
					uParam0->f_187 = 1;
				}
			}
		}
		if (bParam4)
		{
			if (fParam9 == 0f)
			{
				if (func_88(Global_36, uParam0->f_51) > fVar0)
				{
					return 1;
				}
			}
			else
			{
				vVar1 = { fParam9, iParam10, iParam11 };
				if (func_88(Global_36, vVar1) > fVar0)
				{
					return 1;
				}
			}
		}
	}
	if (bParam3)
	{
		if (uParam0->f_191 < *uParam1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam1[uParam0->f_191]))
			{
				uParam0->f_190 = 0;
			}
			uParam0->f_191++;
		}
		else if (uParam0->f_190)
		{
			return 1;
		}
		else
		{
			uParam0->f_191 = 0;
			uParam0->f_190 = 1;
		}
	}
	return 0;
}

Vector3 func_78()
{
	return 0f, 0.0368652f, 0f;
}

int func_79(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_80(var uParam0, vector3 vParam1, int iParam4, int iParam5)
{
	char* sVar0;

	if (func_30(uParam0->f_1, 1))
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(*uParam0))
		{
			if (func_30(uParam0->f_1, 16))
			{
				func_224(uParam0, vParam1, iParam4, iParam5);
			}
			else
			{
				func_225(uParam0, vParam1, iParam4, iParam5);
			}
		}
		return 1;
	}
	STREAMING::REQUEST_NAMED_PTFX_ASSET(-458373790);
	if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(-458373790))
	{
		if (!func_30(uParam0->f_1, 8))
		{
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(*uParam0))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET("scr_distance_smoke");
				sVar0 = "scr_campfire_distance_smoke_script";
				uParam0->f_2 = func_226(MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), vParam1, true));
				uParam0->f_3 = func_228(func_227(iParam4));
				if (uParam0->f_3 > 10f)
				{
					uParam0->f_3 = 10f;
				}
				if (uParam0->f_2 > uParam0->f_3)
				{
					uParam0->f_2 = uParam0->f_3;
				}
				uParam0->f_5 = func_229(iParam4);
				uParam0->f_5 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(BUILTIN::FLOOR((uParam0->f_5 - 15f)), BUILTIN::FLOOR((uParam0->f_5 + 15f))));
				uParam0->f_5 = (uParam0->f_5 / 255f);
				*uParam0 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD(sVar0, vParam1, 0f, 0f, 0f, func_230(iParam4), false, false, false, false);
				uParam0->f_4 = MISC::GET_FRAME_COUNT();
				if (func_231(vParam1, 1) > (CAM::GET_GAMEPLAY_CAM_FOV() + 15f))
				{
					GRAPHICS::_0x9DDC222D85D5AF2A(*uParam0, uParam0->f_3);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(*uParam0, 1f);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(*uParam0, uParam0->f_5, uParam0->f_5, uParam0->f_5, false);
					func_119(&(uParam0->f_1), 16);
				}
				else
				{
					GRAPHICS::_0x9DDC222D85D5AF2A(*uParam0, uParam0->f_2);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(*uParam0, 0f);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(*uParam0, uParam0->f_5, uParam0->f_5, uParam0->f_5, false);
				}
				func_119(&(uParam0->f_1), 1);
				return 1;
			}
		}
	}
	return 0;
}

void func_81()
{
	func_89(6);
}

void func_82(var uParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_1))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_1);
		uParam0->f_1 = -1;
	}
}

void func_83()
{
	func_89(7);
}

void func_84()
{
	func_89(8);
}

void func_85(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;

	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_232(iParam0) == 1 && bParam7)
	{
		return;
	}
	if (bParam6)
	{
		if ((Global_17503.f_42[iParam0 /*8*/])->f_4 > iVar0)
		{
			return;
		}
	}
	if ((bParam1 || bParam6) || func_90() != -1)
	{
		(Global_17503.f_42[iParam0 /*8*/])->f_4 = 0;
	}
	(Global_17503.f_42[iParam0 /*8*/])->f_4 = ((Global_17503.f_42[iParam0 /*8*/])->f_4 + iVar0);
}

void func_86(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (!func_233(iParam0))
	{
		return;
	}
	iVar0 = func_234(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_235(iVar0);
	func_236(iVar0);
	iVar1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	iVar2 = func_237(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_238(iVar0))
		{
			return;
		}
	}
	func_239(iVar0);
	PED::SET_PED_KEEP_TASK(iParam0, true);
	if (bParam1 && func_90() == -1)
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, true);
		}
	}
}

void func_87(var uParam0, int iParam1)
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(*uParam0))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(*uParam0, false);
		STREAMING::REMOVE_NAMED_PTFX_ASSET(-458373790);
		func_119(&(uParam0->f_1), 4);
	}
}

float func_88(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_89(int iParam0)
{
	int iVar0;

	if (iParam0 != -1)
	{
		iVar0 = func_91(0);
		MISC::SET_BIT(&iVar0, iParam0);
		func_240(0, iVar0);
	}
}

int func_90()
{
	return Global_1572887->f_12;
}

int func_91(int iParam0)
{
	return func_241(119, iParam0);
}

void func_92(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_36580[iVar0 /*2*/] == iParam0)
		{
			(Global_36580[iVar0 /*2*/])->f_1 = 3;
		}
		iVar0++;
	}
}

void func_93(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

void func_94(var uParam0, int iParam1)
{
	if (func_242(uParam0))
	{
		GRAPHICS::_0x9CF1836C03FB67A2(uParam0, iParam1);
	}
}

void func_95(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

char* func_96(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "REAA";
		case 75:
			return "REBBR";
		case 1:
			return "REAM";
		case 2:
			return "REAP";
		case 3:
			return "REAMD";
		case 76:
			return "REBE";
		case 4:
			return "REBT";
		case 77:
			return "REBTE";
		case 5:
			return "REBAT";
		case 6:
			return "REBOT";
		case 7:
			return "REBNT";
		case 78:
			return "REBGP";
		case 8:
			return "REBUB";
		case 9:
			return "RECA";
		case 10:
			return "RECG";
		case 11:
			return "RECP";
		case 12:
			return "RECHR";
		case 79:
			return "RECQ";
		case 13:
			return "RECCT";
		case 14:
			return "RECW";
		case 80:
			return "REDAA";
		case 81:
			return "REDAB";
		case 82:
			return "REDAS";
		case 83:
			return "REDEB";
		case 84:
			return "REDJ";
		case 15:
			return "REDLP";
		case 85:
			return "REDIB";
		case 86:
			return "REDOM";
		case 87:
			return "REDM";
		case 16:
			return "REPND";
		case 88:
			return "REDD";
		case 89:
			return "REDB";
		case 90:
			return "REDW";
		case 17:
			return "REESC";
		case 18:
			return "REEX";
		case 91:
			return "REFF";
		case 19:
			return "REFT";
		case 92:
			return "REFR";
		case 20:
			return "REFO";
		case 21:
			return "REFD";
		case 93:
			return "REFND";
		case 22:
			return "REFC";
		case 23:
			return "REGCR";
		case 94:
			return "REGPE";
		case 24:
			return "REGP";
		case 119:
			return "REHOC";
		case 27:
			return "REHOR";
		case 28:
			return "REHR";
		case 29:
			return "REIK";
		case 30:
			return "REIR";
		case 95:
			return "REIT";
		case 31:
			return "REKV";
		case 32:
			return "REKD";
		case 33:
			return "REKR";
		case 34:
			return "REKS";
		case 35:
			return "RELRU";
		case 96:
			return "REETE";
		case 36:
			return "RELK";
		case 37:
			return "RELP";
		case 97:
			return "RELD";
		case 98:
			return "RELDR";
		case 38:
			return "RELF";
		case 39:
			return "RELM";
		case 40:
			return "REMC";
		case 41:
			return "REMUC";
		case 42:
			return "RENS";
		case 99:
			return "REOTE";
		case 100:
			return "REOR";
		case 43:
			return "REOL";
		case 44:
			return "REOT";
		case 101:
			return "REPA";
		case 102:
			return "REPT";
		case 103:
			return "REPP";
		case 45:
			return "RESB";
		case 104:
			return "REPS";
		case 46:
			return "REPCA";
		case 47:
			return "REPCS";
		case 48:
			return "REPO";
		case 105:
			return "REPCH";
		case 49:
			return "REPBR";
		case 50:
			return "REPW";
		case 106:
			return "REPH";
		case 107:
			return "RERI";
		case 51:
			return "RERP";
		case 108:
			return "RERD";
		case 53:
			return "RESA";
		case 54:
			return "RESAF";
		case 56:
			return "RESWA";
		case 55:
			return "RESW";
		case 57:
			return "RESS";
		case 109:
			return "RESO";
		case 58:
			return "RESKP";
		case 110:
			return "RESAM";
		case 59:
			return "RESH";
		case 60:
			return "REHU";
		case 61:
			return "RESSH";
		case 62:
			return "RESR";
		case 111:
			return "RESTF";
		case 112:
			return "REKT";
		case 67:
			return "RETC";
		case 68:
			return "RETP";
		case 113:
			return "REBUR";
		case 114:
			return "RETWC";
		case 115:
			return "RETR";
		case 117:
			return "RETT";
		case 116:
			return "RETWW";
		case 63:
			return "RETA";
		case 64:
			return "RETRB";
		case 65:
			return "RETW";
		case 66:
			return "RETH";
		case 69:
			return "REVC";
		case 70:
			return "REWTH";
		case 71:
			return "REWA";
		case 118:
			return "REWC";
		case 72:
			return "REWH";
		case 73:
			return "REWM";
		case 74:
			return "REWMC";
		default:
			break;
	}
	return "XXXX";
}

void func_97(int iParam0, int iParam1)
{
	if (!func_243(iParam0))
	{
		return;
	}
	((*Global_1310750)[iParam0 /*111*/])->f_1 = (((*Global_1310750)[iParam0 /*111*/])->f_1 || iParam1);
}

bool func_98(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_244(iParam0, iParam1);
}

void func_99(int iParam0, bool bParam1)
{
	if (func_98(iParam0, 0, 1))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
		func_245(iParam0, 1088421888 /* Float: 7f */, 0, 0);
		if (!bParam1)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
		}
	}
}

int func_100(var uParam0, var uParam1)
{
	if (func_122(uParam0->f_3, 16777216))
	{
		if (func_246(*uParam1) != -1 || ENTITY::GET_ENTITY_MODEL(*uParam1) == joaat("g_m_m_unibrontegoons_01"))
		{
			return 1;
		}
	}
	return 0;
}

void func_101(var uParam0)
{
	PED::SET_PED_CONFIG_FLAG(*uParam0, 6, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 4, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 494, true);
}

float func_102(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_103(int iParam0, int iParam1, float fParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	float fVar2;

	if (!Global_1935630->f_12 && (!bParam4 || func_98(iParam0, 0, 1)))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam3))
		{
			iParam3 = PED::GET_MOUNT(Global_35);
		}
		if (iParam3 != iParam0)
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, false);
			}
			TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
			TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
			fVar2 = func_102(fParam2 >= 0f, fParam2, BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), Global_36));
			if (fVar2 > 25f && ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				func_247(&iParam0);
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_SMART_FLEE_PED(0, Global_35, 1000f, -1, 0, iParam1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, iVar0, 0.1f, 0.5f);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				iVar1 = PED::GET_MOUNT(iParam0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					PED::_0x39A2FC5AF55A52B1(iVar1, -1);
				}
				PED::_0x39A2FC5AF55A52B1(iParam0, -1);
			}
		}
	}
}

void func_104(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_171))
	{
		func_92(uParam0->f_171);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_171);
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	func_248(uParam0);
	func_249(uParam0);
	func_250(uParam0);
	if (!func_251(uParam0))
	{
		if (VOLUME::_0xF6A8A652A6B186CD(uParam0->f_51.f_11))
		{
			VOLUME::_0xFDFECC6EE4491E11(uParam0->f_51.f_11);
		}
		func_252(uParam0->f_51, 0);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_51.f_6))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		func_253();
	}
	if (!func_254(uParam0->f_3) && !func_122(uParam0->f_3, 256))
	{
		func_85(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	func_93(uParam0->f_173);
	func_93(uParam0->f_172);
}

void func_105(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_181))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_181));
	}
}

void func_106(var uParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;

	vVar0 = { func_9(uParam0) };
	iVar3 = func_107(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	STATS::_0xCA41E86545413B5B(7, 1221649453, -585414509, iVar3, vVar0);
	if (STATS::_0x01F4D242765C6B24(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

int func_107(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 <= 74)
	{
		switch (iParam0)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return -1361771813;
					case 1:
						return -2064800864;
					case 2:
						return -1459648117;
					default:
						break;
				}
				return 1764738688;
			case 1:
				return -1738452225;
			case 2:
				return -823209843;
			case 3:
				switch (iParam1)
				{
					case 0:
						return 659020347;
					case 1:
						return 1082838675;
					default:
						break;
				}
				return -163609424;
			case 4:
				return -230454431;
			case 5:
				switch (iParam1)
				{
					case 0:
						return -255547597;
					case 1:
						return -779276698;
					default:
						break;
				}
				return 1848195968;
			case 6:
				switch (iParam1)
				{
					case 0:
						return 500453091;
					case 1:
						return -561787596;
					default:
						break;
				}
				return 199182688;
			case 7:
				switch (iParam1)
				{
					case 0:
						return -1050372802;
					case 1:
						return 1805609920;
					default:
						break;
				}
				return -1157729664;
			case 8:
				switch (iParam1)
				{
					case 0:
						return 1085166521;
					case 1:
						return -1805473967;
					default:
						break;
				}
				return -185185008;
			case 9:
				switch (iParam1)
				{
					case 0:
						return 1886894479;
					default:
						break;
				}
				return 1331739776;
			case 10:
				switch (iParam1)
				{
					case 0:
						return 124534071;
					default:
						break;
				}
				return -2125510912;
			case 11:
				switch (iParam1)
				{
					case 0:
						return -1439039856;
					case 1:
						return 1422484995;
					default:
						break;
				}
				return 2012422144;
			case 12:
				return 1004100858;
			case 13:
				switch (iParam1)
				{
					case 0:
						return 1957341991;
					case 1:
						return 1719865048;
					default:
						break;
				}
				return -462840960;
			case 14:
				switch (iParam1)
				{
					case 0:
						return 1333995618;
					case 1:
						return -1541809666;
					default:
						break;
				}
				return -2063125376;
			case 15:
				switch (iParam1)
				{
					case 0:
						return 1037952769;
					case 1:
						return 396925591;
					case 2:
						return -1318629866;
					default:
						break;
				}
				return 237843904;
			case 16:
				return 1583531269;
			case 17:
				return -728402510;
			case 18:
				switch (iParam1)
				{
					case 0:
						return -1622801117;
					case 1:
						return 1895496017;
					default:
						break;
				}
				return -1622801152;
			case 19:
				switch (iParam1)
				{
					case 0:
						return -93589059;
					default:
						break;
				}
				return -110846632;
			case 20:
				switch (iParam1)
				{
					case 0:
						return 1513876565;
					case 1:
						return 136987683;
					case 2:
						return -405984699;
					default:
						break;
				}
				return -1296870656;
			case 21:
				return 856957155;
			case 22:
				return 199192985;
			case 23:
				switch (iParam1)
				{
					case 0:
						return 1607827063;
					case 1:
						return -548752013;
					case 2:
						return -1799015093;
					case 3:
						return -115167180;
					default:
						break;
				}
				return 1480735360;
			case 24:
				switch (iParam1)
				{
					case 0:
						return -1188012136;
					case 1:
						return -195398422;
					default:
						break;
				}
				return 1888284288;
			case 25:
				switch (iParam1)
				{
					case 0:
						return 1245222967;
					case 1:
						return -140925504;
					default:
						break;
				}
				return 1262841600;
			case 26:
				return -1065165983;
			case 27:
				switch (iParam1)
				{
					case 0:
						return -1995068882;
					case 1:
						return -879341975;
					case 2:
						return 812000379;
					default:
						break;
				}
				return 1119637248;
			case 28:
				return -1641231995;
			case 29:
				switch (iParam1)
				{
					case 0:
						return -15789618;
					case 1:
						return -2001368627;
					default:
						break;
				}
				return 1411817728;
			case 30:
				switch (iParam1)
				{
					case 0:
						return 1669447203;
					case 1:
						return -413778780;
					default:
						break;
				}
				return 260689376;
			case 31:
				switch (iParam1)
				{
					case 0:
						return -1593929201;
					case 1:
						return -1268334164;
					default:
						break;
				}
				return 302505024;
			case 32:
				return -800701784;
			case 33:
				return -1599472750;
			case 34:
				return 239043929;
			case 35:
				return -1534174498;
			case 36:
				switch (iParam1)
				{
					case 0:
						return -1457758665;
					case 1:
						return 1873758089;
					default:
						break;
				}
				return 1179130240;
			case 37:
				switch (iParam1)
				{
					case 0:
						return 1820839571;
					case 1:
						return -2073786745;
					default:
						break;
				}
				return -959962496;
			case 38:
				return 1895786957;
			case 39:
				return -2058137475;
			case 40:
				switch (iParam1)
				{
					case 0:
						return -904691578;
					case 1:
						return 149442199;
					case 2:
						return 978666390;
					case 3:
						return -1076604521;
					case 4:
						return 919455489;
					default:
						break;
				}
				return -1427408128;
			case 41:
				return 598461796;
			case 42:
				switch (iParam1)
				{
					case 0:
						return -1171602865;
					case 1:
						return -632377398;
					default:
						break;
				}
				return -190635712;
			case 43:
				switch (iParam1)
				{
					case 0:
						return 1379819153;
					case 1:
						return -456339986;
					case 2:
						return 458545376;
					case 3:
						return 610100918;
					default:
						break;
				}
				return -2132368512;
			case 44:
				return 544369376;
			case 45:
				switch (iParam1)
				{
					case 0:
						return -1386454342;
					case 1:
						return -1472914811;
					default:
						break;
				}
				return 1517869312;
			case 46:
				switch (iParam1)
				{
					case 0:
						return -1244997037;
					case 1:
						return 1336213836;
					default:
						break;
				}
				return 1497529856;
			case 47:
				switch (iParam1)
				{
					case 0:
						return 1723732770;
					default:
						break;
				}
				return 516059168;
			case 48:
				switch (iParam1)
				{
					case 0:
						return -1862350799;
					default:
						break;
				}
				return 138359424;
			case 49:
				return 1602493990;
			case 50:
				switch (iParam1)
				{
					case 0:
						return 155959053;
					case 1:
						return 2125427011;
					case 2:
						return 371707271;
					case 3:
						return -731143567;
					case 4:
						return -742996004;
					default:
						break;
				}
				return -773614592;
			case 51:
				switch (iParam1)
				{
					case 0:
						return -114145497;
					case 1:
						return -770317277;
					default:
						break;
				}
				return -1496303104;
			case 52:
				switch (iParam1)
				{
					case 0:
						return 1512765774;
					case 1:
						return -189901396;
					default:
						break;
				}
				return 855036416;
			case 53:
				switch (iParam1)
				{
					case 0:
						return -1334437481;
					case 1:
						return -316021716;
					default:
						break;
				}
				return 1818026880;
			case 54:
				switch (iParam1)
				{
					case 0:
						return -1743740213;
					case 1:
						return -170394045;
					default:
						break;
				}
				return -1865567744;
			case 55:
				return 1762656414;
			case 56:
				switch (iParam1)
				{
					case 0:
						return -117822482;
					case 1:
						return 2050912022;
					case 2:
						return -631458463;
					default:
						break;
				}
				return 1729892352;
			case 57:
				switch (iParam1)
				{
					case 0:
						return 494567551;
					case 1:
						return 1070551761;
					case 2:
						return -1249279900;
					default:
						break;
				}
				return 1256394752;
			case 58:
				switch (iParam1)
				{
					case 0:
						return 1053173243;
					case 1:
						return -239132243;
					default:
						break;
				}
				return -2137622144;
			case 59:
				return -2018341642;
			case 60:
				switch (iParam1)
				{
					case 0:
						return 1901777355;
					default:
						break;
				}
				return 922910144;
			case 61:
				switch (iParam1)
				{
					case 0:
						return -195996461;
					default:
						break;
				}
				return 1967427328;
			case 62:
				switch (iParam1)
				{
					case 0:
						return 1050124907;
					case 1:
						return 1877863225;
					default:
						break;
				}
				return 1397209856;
			case 63:
				return -1618254924;
			case 64:
				switch (iParam1)
				{
					case 0:
						return 1827343540;
					case 1:
						return 2139528616;
					default:
						break;
				}
				return 1380866816;
			case 65:
				switch (iParam1)
				{
					case 0:
						return -1926993706;
					case 1:
						return 2073650155;
					default:
						break;
				}
				return 1432305280;
			case 66:
				switch (iParam1)
				{
					case 0:
						return 1806437024;
					default:
						break;
				}
				return 1650308608;
			case 67:
				switch (iParam1)
				{
					case 0:
						return -2133679238;
					case 1:
						return -1797377830;
					default:
						break;
				}
				return 685182784;
			case 68:
				switch (iParam1)
				{
					case 0:
						return -1237105013;
					case 1:
						return -522278917;
					default:
						break;
				}
				return -2001177728;
			case 69:
				return -2137572125;
			case 70:
				switch (iParam1)
				{
					case 0:
						return 638370814;
					case 1:
						return -1062366341;
					default:
						break;
				}
				return -948494848;
			case 71:
				return -774894224;
			case 72:
				switch (iParam1)
				{
					case 0:
						return -1267862564;
					case 1:
						return 28828972;
					default:
						break;
				}
				return -1846020608;
			case 73:
				switch (iParam1)
				{
					case 0:
						return 306936642;
					case 1:
						return 460031053;
					case 2:
						return 381656699;
					default:
						break;
				}
				return -188029312;
			case 74:
				switch (iParam1)
				{
					case 0:
						return -211653282;
					default:
						break;
				}
				return -301233792;
		}
	}
	else if (iParam0 >= 75 && iParam0 <= 118)
	{
		switch (iParam0)
		{
			case 75:
				return -346537584;
			case 76:
				switch (iParam1)
				{
					case 0:
						return -550739017;
					default:
						break;
				}
				return -1829585536;
			case 77:
				switch (iParam1)
				{
					case 0:
						return -609376390;
					case 1:
						return -311112952;
					case 2:
						return -682765316;
					case 3:
						return -2127446978;
					default:
						break;
				}
				return 1338777472;
			case 78:
				switch (iParam1)
				{
					case 0:
						return 581221752;
					case 1:
						return 20416722;
					default:
						break;
				}
				return 1293249792;
			case 79:
				switch (iParam1)
				{
					case 0:
						return -1786500412;
					default:
						break;
				}
				return 235904384;
			case 80:
				return -334565466;
			case 81:
				switch (iParam1)
				{
					case 0:
						return 31964051;
					case 1:
						return 245875704;
					default:
						break;
				}
				return 1046770304;
			case 82:
				switch (iParam1)
				{
					case 0:
						return 48921735;
					case 1:
						return 1062398415;
					default:
						break;
				}
				return -2047991552;
			case 83:
				return -1752276745;
			case 84:
				switch (iParam1)
				{
					case 0:
						return 418356694;
					case 1:
						return -1090928636;
					default:
						break;
				}
				return -1021157760;
			case 85:
				switch (iParam1)
				{
					case 0:
						return 278246928;
					case 1:
						return 1092461253;
					default:
						break;
				}
				return 900051136;
			case 86:
				return 1417655457;
			case 87:
				switch (iParam1)
				{
					case 0:
						return 188835226;
					case 1:
						return 220332139;
					default:
						break;
				}
				return 1359760512;
			case 88:
				switch (iParam1)
				{
					case 0:
						return -1638860831;
					case 1:
						return -812497188;
					default:
						break;
				}
				return 1616003072;
			case 89:
				return -69702063;
			case 90:
				switch (iParam1)
				{
					case 0:
						return -479871262;
					default:
						break;
				}
				return -1670654720;
			case 91:
				return -331264815;
			case 92:
				return -1217205534;
			case 93:
				switch (iParam1)
				{
					case 0:
						return -1662432355;
					case 1:
						return -368935814;
					default:
						break;
				}
				return -1021345856;
			case 94:
				switch (iParam1)
				{
					case 0:
						return -735413614;
					case 1:
						return -972169639;
					case 2:
						return -673250821;
					case 3:
						return 161473916;
					default:
						break;
				}
				return -1329933952;
			case 95:
				switch (iParam1)
				{
					case 0:
						return -1645068573;
					default:
						break;
				}
				return 1248360320;
			case 96:
				switch (iParam1)
				{
					case 0:
						return 884363685;
					case 1:
						return 368673822;
					case 2:
						return 578628915;
					case 3:
						return 689154642;
					case 4:
						return 471198511;
					case 5:
						return 967199063;
					case 6:
						return -38616787;
					case 7:
						return -1294637989;
					default:
						break;
				}
				return -84111088;
			case 97:
				switch (iParam1)
				{
					case 0:
						return -1639179308;
					case 1:
						return -436408638;
					default:
						break;
				}
				return 1995021696;
			case 98:
				switch (iParam1)
				{
					case 0:
						return 1464772696;
					case 1:
						return 6449957;
					default:
						break;
				}
				return -1853564800;
			case 99:
				switch (iParam1)
				{
					case 0:
						return 803309489;
					case 1:
						return -31873580;
					case 2:
						return -1922690045;
					case 3:
						return 515105064;
					default:
						break;
				}
				return -1759022208;
			case 100:
				return -307424281;
			case 101:
				switch (iParam1)
				{
					case 0:
						return 1006898715;
					case 1:
						return 1573993134;
					default:
						break;
				}
				return -1402545280;
			case 102:
				return -1979014350;
			case 103:
				return 2096137174;
			case 104:
				switch (iParam1)
				{
					case 0:
						return -861435303;
					case 1:
						return 2076430727;
					case 2:
						return -1266577036;
					default:
						break;
				}
				return 493009408;
			case 105:
				return 1152564685;
			case 106:
				switch (iParam1)
				{
					case 0:
						return 2036836823;
					case 1:
						return 2046057828;
					case 2:
						return -526712830;
					case 3:
						return -242317110;
					case 4:
						return 1729814355;
					case 5:
						return 1868875718;
					case 6:
						return -785635151;
					case 7:
						return 1586170447;
					case 8:
						return -291036947;
					default:
						break;
				}
				return -832026176;
			case 107:
				switch (iParam1)
				{
					case 0:
						return -981210833;
					case 1:
						return 875440489;
					default:
						break;
				}
				return -508430848;
			case 108:
				switch (iParam1)
				{
					case 0:
						return 1491780341;
					case 1:
						return 1920169067;
					default:
						break;
				}
				return -227796128;
			case 109:
				switch (iParam1)
				{
					case 0:
						return -1255044808;
					case 1:
						return -1012076841;
					default:
						break;
				}
				return -871899648;
			case 110:
				switch (iParam1)
				{
					case 0:
						return 792345848;
					case 1:
						return 121209110;
					default:
						break;
				}
				return 14115413;
			case 111:
				switch (iParam1)
				{
					case 0:
						return -1152301466;
					case 1:
						return -1113682855;
					case 2:
						return -1801389871;
					case 3:
						return -180725957;
					case 4:
						return 1811628790;
					default:
						break;
				}
				return 2016864128;
			case 112:
				switch (iParam1)
				{
					case 0:
						return 635397890;
					default:
						break;
				}
				return -717212864;
			case 113:
				return 1487351956;
			case 114:
				switch (iParam1)
				{
					case 0:
						return 1955914312;
					case 1:
						return 1685893021;
					case 2:
						return -711771194;
					case 3:
						return 146337879;
					default:
						break;
				}
				return 205846784;
			case 115:
				switch (iParam1)
				{
					case 0:
						return -775876869;
					case 1:
						return -39469638;
					default:
						break;
				}
				return 1483441280;
			case 116:
				switch (iParam1)
				{
					case 0:
						return 2113065035;
					case 1:
						return -2101774133;
					default:
						break;
				}
				return -815072896;
			case 117:
				return -689015496;
			case 118:
				switch (iParam1)
				{
					case 0:
						return -18903616;
					case 1:
						return -1607469655;
					default:
						break;
				}
				return -640409664;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 119:
				return 1996937952;
		}
	}
	return 1968536545;
}

void func_108(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_90() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

void func_109(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_118(&(uParam0->f_1), 16384);
	}
	else
	{
		func_119(&(uParam0->f_1), 16384);
	}
}

void func_110(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_118(&(uParam0->f_1), 256);
	}
	else
	{
		func_119(&(uParam0->f_1), 256);
	}
}

void func_111(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_119(iParam0, 16);
	}
	else
	{
		func_118(iParam0, 67108864);
		func_118(iParam0, 16);
	}
}

void func_112(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_118(&(uParam0->f_1), 128);
	}
	else
	{
		func_119(&(uParam0->f_1), 128);
	}
}

void func_113(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_119(iParam0, 256);
	}
	else
	{
		func_118(iParam0, 256);
	}
}

void func_114(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_119(iParam0, 268435456);
	}
	else
	{
		func_118(iParam0, 268435456);
	}
	if (!bParam2)
	{
		func_119(iParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_118(iParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_119(iParam0, 536870912);
	}
	else
	{
		func_118(iParam0, 536870912);
	}
}

var func_115(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	uVar15 = _NAMESPACE71::_SHOW_OBJECTIVE(&Var0, &Var13, iParam5);
	return uVar15;
}

char* func_116(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	switch (iParam0)
	{
		case 1:
			return MISC::_CREATE_VAR_STRING(2, sParam1, sParam4);
		case 2:
			return MISC::_CREATE_VAR_STRING(2, sParam1, sParam4, sParam5);
		case 3:
			return MISC::_CREATE_VAR_STRING(10, sParam1, sParam2);
		case 4:
			return MISC::_CREATE_VAR_STRING(42, sParam1, sParam2, sParam3);
	}
	return MISC::_CREATE_VAR_STRING(2, func_255(sParam1));
}

bool func_117()
{
	return func_17(6);
}

void func_118(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_119(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_120(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> Param4, var uParam11, bool bParam12, bool bParam13, int iParam14)
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	bool bVar4;

	if (Param4.f_6 > -1)
	{
		*uParam1 = { func_256(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_257(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (func_216(iParam0, 128))
			{
				if (!func_258(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				func_259(iParam0, &uVar1, &uVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { func_260(&bVar4, iParam0, uVar2, uVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (func_79(*uParam1))
				{
					return func_261(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = func_262(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (func_30(Param4.f_2, 8))
				{
					func_257(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				func_263(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (func_264(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && func_265(BUILTIN::VDIST(Global_36, *uParam1), iParam0))
				{
					uParam1->f_9 = 2;
				}
				else
				{
					uParam1->f_9 = 5;
				}
			}
			break;
		case 2:
			if (func_216(iParam0, 128))
			{
				if (!func_266(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return func_261(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				func_259(iParam0, &uVar1, &uVar2, &iVar0, 0);
				if (BUILTIN::VDIST2(*uParam1, Global_36) < BUILTIN::TO_FLOAT(iVar0))
				{
					if (!func_263(uParam1))
					{
						return func_261(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					else
					{
						uParam1->f_9 = 3;
					}
				}
				else
				{
					uParam1->f_9 = 3;
				}
			}
			*uParam3 = 0;
			break;
		case 3:
			if (func_267(iParam0, Param4.f_1, uParam1, Param4, iParam14))
			{
				func_257(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return func_261(uParam1, uParam3, uParam11, bParam2, 12, 1000);
			}
			break;
		case 5:
			if (uParam1->f_8 < 12)
			{
				uParam1->f_9 = 0;
			}
			break;
	}
	if (bParam2)
	{
		func_28("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			func_28("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

int func_121(var uParam0, int iParam1)
{
	if (func_122(iParam1, 256))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_172) || func_268(iParam1, func_24(uParam0), &(uParam0->f_172)))
		{
			if (func_98(Global_35, 0, 1))
			{
				return ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_172, true, 0);
			}
		}
	}
	return 1;
}

bool func_122(int iParam0, int iParam1)
{
	if (!func_243(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

void func_123(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_176)
	{
		return;
	}
	if (iParam1 != -1)
	{
		func_269(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, IntToFloat(iParam1), IntToFloat(iParam1), 5f, "Custom Sized Ambient Avoidance");
	}
	else if (func_122(uParam0->f_3, 1) && !func_122(uParam0->f_3, 32))
	{
		func_269(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 25f, 25f, 6f, "Ambient Avoidance Wilderness & No Traffic");
	}
	else if (func_122(uParam0->f_3, 2) && !func_122(uParam0->f_3, 32))
	{
		func_269(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 4f, 4f, 5f, "Ambient Avoidance Town & No Traffic");
	}
	else
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(uParam0->f_171, 2228255, 262144, 0, -1, -1, uParam0->f_175);
	POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_171, 0, 0, 0, -1, -1, 0);
	if (bParam3)
	{
		func_165(uParam0->f_171, 1);
	}
	if (func_122(uParam0->f_3, 1))
	{
		func_269(&(uParam0->f_174), uParam0->f_51, 0f, 0f, 0f, VOLUME::_0x3E2A25B2416DD67E(uParam0->f_171) * Vector(3.5f, 3.5f, 3.5f), "Predator Stay Out");
		func_270(uParam0->f_174, 0, 262144, 0, 0);
	}
	if (iParam2 == 0)
	{
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		PED::_0x7C00CFC48A782DC0(uParam0->f_171, iParam2, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
}

float func_124(vector3 vParam0)
{
	vector3 vVar0;

	vVar0 = { Global_36 - vParam0 };
	return MISC::GET_HEADING_FROM_VECTOR_2D(vVar0.x, vVar0.y);
}

int func_125(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0[4];
	int iVar5;

	iVar0[0] = 0;
	iVar0[1] = 0;
	iVar0[2] = 0;
	iVar0[3] = 0;
	switch (iParam3)
	{
		case -1:
			switch (iParam0)
			{
				case 1:
					iVar0[0] = 7;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
				case 5:
				case 6:
				case 7:
					iVar0[0] = 38;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
				case 12:
					iVar0[0] = 19;
					iVar0[1] = 38;
					iVar0[2] = 20;
					iVar0[3] = 3;
					break;
				case 9:
					iVar0[0] = 43;
					iVar0[1] = 23;
					iVar0[2] = 20;
					iVar0[3] = 3;
					break;
				case 4:
					iVar0[0] = 18;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
				case 11:
					iVar0[0] = 19;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
				case 0:
					iVar0[0] = 23;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
				case 2:
					iVar0[0] = 23;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
				case 3:
					iVar0[0] = 7;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
				case 10:
					iVar0[0] = 18;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
			}
			break;
		case 119:
			switch (iParam0)
			{
				case 1:
					iVar0[0] = 43;
					iVar0[1] = 19;
					break;
				case 5:
				case 6:
				case 7:
					iVar0[0] = 38;
					break;
				case 12:
					iVar0[0] = 19;
					iVar0[1] = 18;
					break;
				case 9:
					iVar0[0] = 43;
					break;
				case 4:
					iVar0[0] = 18;
					break;
				case 11:
					iVar0[0] = 19;
					break;
				case 10:
					iVar0[0] = 18;
					break;
			}
			break;
		case 40:
			switch (iParam0)
			{
				case 1:
					iVar0[0] = 20;
					iVar0[1] = 3;
					break;
				case 5:
				case 6:
				case 7:
					iVar0[0] = 20;
					iVar0[1] = 3;
					break;
				case 12:
					iVar0[0] = 20;
					iVar0[1] = 3;
					break;
				case 9:
					iVar0[0] = 43;
					iVar0[1] = 23;
					iVar0[2] = 20;
					iVar0[3] = 3;
					break;
				case 4:
					iVar0[0] = 20;
					iVar0[1] = 3;
					break;
				case 11:
					iVar0[0] = 20;
					iVar0[1] = 3;
					iVar0[2] = 26;
					break;
				case 0:
					iVar0[0] = 23;
					iVar0[1] = 20;
					iVar0[2] = 3;
					iVar0[3] = 26;
					break;
				case 2:
					iVar0[0] = 23;
					iVar0[1] = 20;
					iVar0[2] = 3;
					iVar0[3] = 26;
					break;
				case 3:
					iVar0[0] = 20;
					iVar0[1] = 3;
					break;
				case 10:
					iVar0[0] = 20;
					iVar0[1] = 3;
					break;
			}
			break;
	}
	if (bParam1)
	{
		iVar5 = 0;
		while (iVar5 < iVar0)
		{
			if (&iVar0[iVar5] != iParam2 && !func_271(&(iVar0[iVar5])))
			{
				return &(iVar0[iVar5]);
			}
			iVar5++;
		}
	}
	else if (bParam4)
	{
		iVar5 = 0;
		while (iVar5 < iVar0)
		{
			if (&iVar0[iVar5] != iParam2 && !func_273(func_272(&(iVar0[iVar5]))))
			{
				return &(iVar0[iVar5]);
			}
			iVar5++;
		}
	}
	else if (&iVar0[0] != iParam2)
	{
		return &(iVar0[0]);
	}
	else
	{
		return &(iVar0[1]);
	}
	return 0;
}

void func_126(var uParam0, int iParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8)
{
	func_93(*uParam0);
	*uParam0 = VOLUME::_CREATE_VOLUME_BY_HASH(iParam1, vParam2, vParam5, vParam8);
	POPULATION::_0xB56D41A694E42E86(*uParam0, 0, 0, 0, -1, -1, 0);
	POPULATION::_0x18262CAFEBB5FBE1(*uParam0, 0, 0, 0, -1, -1, 0);
}

void func_127(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_119(iParam0, 512);
	}
	else
	{
		func_118(iParam0, 512);
	}
}

void func_128(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_119(iParam0, 2);
	}
	else
	{
		func_118(iParam0, 2);
	}
}

void func_129(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_119(iParam0, 8);
	}
	else
	{
		func_118(iParam0, 8);
	}
}

int func_130(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 1:
			return 4;
		case 2:
			return 1;
		case 3:
			return 8;
		case 75:
			return 9;
		case 76:
			return 3;
		case 4:
			return 3;
		case 77:
			return 3;
		case 8:
			return 17;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 5;
		case 78:
			return 4;
		case 9:
			return 2;
		case 10:
			return 7;
		case 11:
			return 8;
		case 12:
			return 7;
		case 13:
			return 6;
		case 14:
			return 4;
		case 79:
			return 2;
		case 15:
			return 10;
		case 80:
			return 3;
		case 81:
			return 1;
		case 82:
			return 2;
		case 83:
			return 6;
		case 84:
			return 6;
		case 85:
			return 2;
		case 86:
			return 2;
		case 87:
			return 2;
		case 16:
			return 1;
		case 88:
			return 1;
		case 89:
			return 6;
		case 90:
			return 14;
		case 18:
			return 6;
		case 17:
			return 2;
		case 91:
			return 2;
		case 19:
			return 3;
		case 92:
			return 6;
		case 20:
			return 2;
		case 21:
			return 5;
		case 93:
			return 1;
		case 22:
			return 5;
		case 23:
			return 1;
		case 94:
			return 1;
		case 24:
			return 2;
		case 119:
			return 2;
		case 27:
			return 6;
		case 28:
			return 6;
		case 29:
			return 6;
		case 95:
			return 7;
		case 30:
			return 2;
		case 112:
			return 5;
		case 31:
			return 3;
		case 32:
			return 4;
		case 33:
			return 17;
		case 34:
			return 4;
		case 35:
			return 14;
		case 96:
			return 3;
		case 36:
			return 4;
		case 37:
			return 1;
		case 97:
			return 3;
		case 98:
			return 3;
		case 38:
			return 4;
		case 39:
			return 1;
		case 40:
			return 3;
		case 41:
			return 14;
		case 42:
			return 1;
		case 99:
			return 6;
		case 100:
			return 2;
		case 43:
			return 6;
		case 44:
			return 13;
		case 101:
			return 5;
		case 102:
			return 4;
		case 103:
			return 2;
		case 45:
			return 2;
		case 104:
			return 3;
		case 46:
			return 4;
		case 47:
			return 1;
		case 48:
			return 2;
		case 105:
			return 2;
		case 49:
			return 8;
		case 50:
			return 9;
		case 106:
			return 16;
		case 107:
			return 16;
		case 51:
			return 6;
		case 108:
			return 5;
		case 53:
			return 10;
		case 54:
			return 8;
		case 56:
			return 4;
		case 55:
			return 1;
		case 57:
			return 14;
		case 109:
			return 2;
		case 58:
			return 1;
		case 110:
			return 5;
		case 59:
			return 15;
		case 60:
			return 3;
		case 61:
			return 13;
		case 62:
			return 2;
		case 111:
			return 4;
		case 67:
			return 6;
		case 68:
			return 3;
		case 113:
			return 7;
		case 114:
			return 1;
		case 115:
			return 3;
		case 117:
			return 6;
		case 116:
			return 1;
		case 63:
			return 6;
		case 64:
			return 22;
		case 65:
			return 2;
		case 66:
			return 2;
		case 69:
			return 5;
		case 70:
			return 8;
		case 71:
			return 8;
		case 118:
			return 4;
		case 72:
			return 4;
		case 73:
			return 4;
		case 74:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_131(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		return func_274(Global_1359489->f_4);
	}
	PED::GET_GROUP_SIZE(func_275(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = PED::GET_PED_AS_GROUP_MEMBER(func_275(), iVar3);
		if (func_276(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_132(var uParam0)
{
	func_277(&(uParam0->f_1));
	func_277(&(uParam0->f_12));
}

bool func_133(int iParam0, int iParam1, int iParam2, int iParam3)
{
	return STREAMING::_0x19A6BE7D9C6884D3(iParam0, iParam1, iParam2, iParam3);
}

void func_134(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_2 = iParam3;
	uParam0->f_1 = iParam2;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
}

int func_135(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1627068364 /* GXTEntry: "Horse Reviver" */;
		case 1:
			return -142033055 /* GXTEntry: "Special Horse Stimulant Pamphlet" */;
		case 2:
			return 2141714005;
		case 3:
			return -1976480343 /* GXTEntry: "Special Miracle Tonic" */;
		case 4:
			return -1976480343 /* GXTEntry: "Special Miracle Tonic" */;
		default:
			break;
	}
	return 0;
}

int func_136(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (!func_278(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_279(bParam0);
	if (iVar0 == joaat("ammo") || (bParam1 && iVar0 == joaat("weapon")))
	{
		bVar1 = func_280(bParam0, 1);
		if (bVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bVar1);
		}
	}
	else if (iVar0 == joaat("weapon"))
	{
		return func_281(bParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_282(bParam2), bParam0, 0);
	return iVar2;
}

bool func_137(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_278(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_279(bParam0);
	if (iVar0 == joaat("weapon"))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
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
		if (!func_283(bParam0, 1))
		{
			return false;
		}
	}
	return func_136(bParam0, 0, bParam2) >= iParam1;
}

int func_138(var uParam0)
{
	if (!func_284(uParam0->f_1))
	{
		return 0;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_284(uParam0->f_12))
		{
			return 0;
		}
	}
	if (uParam0->f_3 != 41788943)
	{
		if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
		{
			uParam0->f_5 = PED::_REQUEST_METAPED_OUTFIT(uParam0->f_1, uParam0->f_3);
			if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
			{
				uParam0->f_3 = 41788943;
			}
			return 0;
		}
		else if (!PED::_0x610438375E5D1801(uParam0->f_5))
		{
			return 0;
		}
	}
	return 1;
}

int func_139(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return 1969096843;
		case 1:
			return joaat("p_knife02x");
		case 3:
			return joaat("p_mortarpestle02x");
		case 4:
			return 197307092;
		case 0:
			return joaat("p_journal_open01x");
		case 9:
			return -157798026;
		case 10:
			return -157798026;
		case 11:
			return -167778705;
		case 5:
			return -1843616050;
		case 12:
			return -941414360;
		case 14:
			return -1907186363;
		case 15:
			return 1321843639;
		case 16:
			return joaat("p_bedrollopen01x");
		case 17:
			return joaat("p_carrot02x");
		case 18:
			return -189418434;
		case 6:
			return 0;
		case 8:
			return 0;
		case 7:
			return 0;
		case 19:
			switch (iParam1)
			{
				case 43:
					return -1843616050;
				case 19:
					return 1451433354;
				case 18:
					return -1191803341;
				case 40:
					return -99531449;
				default:
					break;
			}
			break;
	}
	return 0;
}

char* func_140(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 43:
			return func_285(bParam1, "SCRIPT_RE@HERBALISTCAMP@YARROW_RETURN", "SCRIPT_RE@HERBALISTCAMP@YARROW_INTRO");
		case 19:
			return func_285(bParam1, "SCRIPT_RE@HERBALISTCAMP@HBSASGE_RETURN", "SCRIPT_RE@HERBALISTCAMP@HBSAGE_INTRO");
		case 18:
			return func_285(bParam1, "SCRIPT_RE@HERBALISTCAMP@GCURRANT_RETURN", "SCRIPT_RE@HERBALISTCAMP@GCURRANT_INTRO");
		case 40:
			return func_285(bParam1, "SCRIPT_RE@HERBALISTCAMP@VSNOWDROP_RETURN", "SCRIPT_RE@HERBALISTCAMP@VSNOWDROP_INTRO");
		default:
			break;
	}
	return "INVALID";
}

int func_141(char* sParam0)
{
	STREAMING::REQUEST_ANIM_DICT(sParam0);
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sParam0))
	{
		return 0;
	}
	return 1;
}

int func_142(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return joaat("a_c_horse_appaloosa_blanket");
				case 1:
					return joaat("a_c_horse_appaloosa_blanket");
				case 2:
					return joaat("a_c_horse_appaloosa_blanket");
				case 3:
					return joaat("a_c_horse_appaloosa_blanket");
				case 4:
					return joaat("a_c_horse_appaloosa_blanket");
				case 5:
					return joaat("a_c_horse_appaloosa_blanket");
				case 6:
					return joaat("a_c_horse_appaloosa_blanket");
				case 7:
					return joaat("a_c_horse_appaloosa_blanket");
				case 8:
					return joaat("a_c_horse_appaloosa_blanket");
				case 9:
					return joaat("a_c_horse_appaloosa_blanket");
				case 10:
					return joaat("a_c_horse_appaloosa_blanket");
				case 11:
					return joaat("a_c_horse_appaloosa_blanket");
				case 12:
					return joaat("a_c_horse_appaloosa_blanket");
				case 13:
					return joaat("a_c_horse_appaloosa_blanket");
				case 14:
					return joaat("a_c_horse_appaloosa_blanket");
				case 15:
					return joaat("a_c_horse_appaloosa_blanket");
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return joaat("a_c_horse_appaloosa_blanket");
				case 1:
					return joaat("a_c_horse_appaloosa_blanket");
				case 2:
					return joaat("a_c_horse_appaloosa_blanket");
				case 3:
					return joaat("a_c_horse_appaloosa_blanket");
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_143(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return joaat("p_cart01x");
				case 1:
					return joaat("p_cart01x");
				case 2:
					return joaat("p_cart01x");
				case 3:
					return joaat("p_cart01x");
				case 4:
					return joaat("p_cart01x");
				case 5:
					return joaat("p_cart01x");
				case 6:
					return joaat("p_cart01x");
				case 7:
					return joaat("p_cart01x");
				case 8:
					return joaat("p_cart01x");
				case 9:
					return joaat("p_cart01x");
				case 10:
					return joaat("p_cart01x");
				case 11:
					return joaat("p_cart01x");
				case 12:
					return joaat("p_cart01x");
				case 13:
					return joaat("p_cart01x");
				case 14:
					return joaat("p_cart01x");
				case 15:
					return joaat("p_cart01x");
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return joaat("p_cart01x");
				case 1:
					return joaat("p_cart01x");
				case 2:
					return joaat("p_cart01x");
				case 3:
					return joaat("p_cart01x");
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_144(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 43:
			return iParam1;
		case 19:
			return iParam4;
		case 18:
			return iParam2;
		case 40:
			return iParam3;
		default:
			break;
	}
	return -1;
}

int func_145(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	switch (iParam1)
	{
		case 43:
			break;
		case 19:
			break;
		case 18:
			break;
		case 40:
			break;
		default:
			return 0;
	}
	if (bParam2)
	{
		return func_149(uParam0, func_286(iParam1), 27835, 27985, iParam3, 0, 0, 0, 0);
	}
	return func_149(uParam0, func_287(iParam1), 27835, 27985, iParam3, 0, 0, 0, 0);
}

char* func_146(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PB_PLYR_YARROW";
		case 1:
			return "PB_PLYR_GCURRANT";
		case 2:
			return "PB_PLYR_VSNOW";
		case 3:
			return "PB_PLYR_HBSAGE";
		case 4:
			return "PB_HANDOVER";
		case 5:
			return "PB_HANDOVER_PAMPHLET";
		case 6:
			return "PL_GIVE_YARROW";
		case 7:
			return "PB_MTH_ENTER_SAGE";
		case 8:
			return "PB_MTH_ENTER_CURRANT";
		case 9:
			return "PB_MTH_ENTER_SNOWDROP";
		default:
			break;
	}
	return "INVALID";
}

void func_147(var uParam0)
{
}

int func_148(int iParam0)
{
	switch (iParam0)
	{
		case 43:
			return 6;
		case 19:
			return 7;
		case 18:
			return 8;
		case 40:
			return 9;
		default:
			break;
	}
	return -1;
}

int func_149(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, char* sParam7, bool bParam8)
{
	uParam0->f_2 = iParam4;
	uParam0->f_3 = iParam6;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		uParam0->f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, iParam5, sParam7, false, true);
	}
	else if (iParam4 != -1)
	{
		Stack.Push(sParam1);
		Stack.Push(iParam5);
		Stack.Push(iParam4);
		Call_Loc(iParam2);
		uParam0->f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(StackVal, StackVal, StackVal, false, true);
	}
	else
	{
		uParam0->f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, iParam5, 0, false, true);
	}
	uParam0->f_4 = sParam1;
	uParam0->f_6 = iParam2;
	uParam0->f_5 = iParam3;
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_1))
	{
		if (!bParam8)
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1);
		}
		return 1;
	}
	return 0;
}

int func_150(var uParam0)
{
	if (ANIMSCENE::_0x95531A4A20CCE7BC(uParam0->f_1, 0) && ANIMSCENE::_0x477122B8D05E7968(uParam0->f_1, 1, 0))
	{
		return 1;
	}
	if (!ANIMSCENE::_0x59606519FF9D3EC2(uParam0->f_1, 1))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1);
	}
	return 0;
}

int func_151(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 9:
			return 1;
		case 3:
			return 1;
		case 1:
			return 1;
		case 19:
			return 1;
		case 4:
			return 1;
		case 12:
			return 0;
		case 2:
			return 0;
		case 0:
			return 0;
		case 10:
			return 0;
		case 11:
			return 0;
		case 15:
			return 0;
		case 16:
			return 0;
		case 17:
			return 0;
		case 18:
			return 0;
		default:
			break;
	}
	if (func_139(iParam0, iParam1) != 0)
	{
		return 1;
	}
	return 0;
}

int func_152(int iParam0)
{
	switch (iParam0)
	{
		case 18:
			return 0;
		default:
			break;
	}
	return 0;
}

int func_153(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 1;
		case 13:
			return 1;
		case 14:
			return 1;
		case 5:
			return 1;
		case 19:
			return 1;
		default:
			break;
	}
	return 0;
}

Vector3 func_154(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return -1f, 0f, 0f;
		case 13:
			return 3.34f, -1.45f, 0f;
		case 14:
			return 0f, 0f, -10f;
		case 19:
			return -1f, 1f, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_155(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!ITEMSET::IS_ITEMSET_VALID(Global_43615))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < ITEMSET::GET_ITEMSET_SIZE(Global_43615))
	{
		iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, Global_43615));
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar1) == iParam0)
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(iVar1))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
				}
				if (bParam1)
				{
					ITEMSET::REMOVE_FROM_ITEMSET(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, Global_43615), Global_43615);
				}
				return iVar1;
			}
		}
		iVar0++;
	}
	return 0;
}

float func_156(int iParam0)
{
	switch (iParam0)
	{
		case 13:
			return 156.24f;
		default:
			break;
	}
	return 0f;
}

void func_157(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(Global_43615))
	{
		Global_43615 = ITEMSET::CREATE_ITEMSET(false);
	}
	if (!ITEMSET::IS_IN_ITEMSET(iParam0, Global_43615))
	{
		ITEMSET::ADD_TO_ITEMSET(iParam0, Global_43615);
	}
}

int func_158(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 0;
		default:
			break;
	}
	return 1;
}

void func_159(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	PED::_0x6569F31A01B4C097(iVar0, 0, iParam1);
	PED::_0x6569F31A01B4C097(iVar0, 1, iParam1);
}

int func_160(int iParam0, var uParam1, vector3 vParam2, int iParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;

	if (bParam6)
	{
		func_288(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && func_289(uParam1))
	{
		iVar0 = PED::_0xEAF682A14F8E5F53(uParam1->f_5, vParam2, iParam5, 1, 1, iParam9, iParam10);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = func_290(iParam0, vParam2, iParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
		}
		else if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam1->f_5))
		{
			PED::_RELEASE_METAPED_OUTFIT_REQUEST(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = func_290(iParam0, vParam2, iParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	else
	{
		EVENT::_0x9520175B35E2268D(iVar0, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
		if (uParam1->f_10)
		{
			if (PED::IS_PED_HUMAN(iVar0))
			{
				PED::_0x0FB1BA7FF73B41E1(iVar0, uParam1->f_4, 0);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_23)) && !func_291(iVar0))
		{
			func_292(iVar0, &(uParam1->f_23), 0);
		}
		if (func_291(iVar0))
		{
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 48, true);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 307, true);
		}
		if (func_293(&(uParam1->f_22)))
		{
			PED::SET_PED_CAN_RAGDOLL(iVar0, true);
			PED::SET_PED_TO_RAGDOLL(iVar0, 1000, 1000, 1, false, false, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 186, !func_294(&(uParam1->f_22)));
			func_296(iVar0, func_295(&(uParam1->f_22)), 0);
		}
		else
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(iVar0);
		}
		if (func_297(&(uParam1->f_22)))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		}
		if (func_298(&(uParam1->f_22)))
		{
			func_299(iVar0, 1);
		}
		ENTITY::_0xA91E6CF94404E8C9(iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 6, func_300(&(uParam1->f_22)));
		PED::SET_PED_CONFIG_FLAG(iVar0, 393, true);
		if (!func_301(uParam1->f_22, 8192))
		{
			ENTITY::_SET_ENTITY_SOMETHING(iVar0, true);
		}
		if (!func_291(iVar0))
		{
			func_303(iVar0, !func_302(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 4, func_304(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 297, !func_305(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 317, !func_305(&(uParam1->f_22)));
			if (uParam1->f_31 != 623901053)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, uParam1->f_31);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (PED::IS_PED_HUMAN(iVar0))
		{
			DECORATOR::DECOR_SET_BOOL(iVar0, "bBeatPed", true);
			DECORATOR::DECOR_SET_BOOL(iVar0, "bBeatCriminal", *uParam1 == 22);
		}
	}
	return iVar0;
}

struct<4> func_161(int iParam0)
{
	struct<4> Var0;

	Var0 = { -0.1937f, 0.7806f, 0f };
	Var0.f_3 = -178f;
	return Var0;
}

int func_162(int iParam0, bool bParam1)
{
	if (bParam1 || !func_13(iParam0, 36))
	{
		if (!TASK::_DOES_SCENARIO_POINT_EXIST(iParam0->f_87))
		{
			return 0;
		}
		if (ENTITY::IS_ENTITY_ATTACHED(&(iParam0->f_90[3])))
		{
			ENTITY::DETACH_ENTITY(&(iParam0->f_90[3]), false, true);
		}
		if (!TASK::_0x8360C47380B6F351(iParam0->f_87, &(iParam0->f_90[3]), "p_mortarPestle02x_PH_R_HAND", 0))
		{
			return 0;
		}
		else
		{
			func_72(iParam0, 36);
		}
	}
	return 1;
}

int func_163(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;

	iVar0 = 0;
	if (func_142(iParam0, iParam1) != 0)
	{
		iVar1 = func_306(iParam0, iParam1);
		vVar2 = { func_307(iParam0, iParam1) };
		vVar5 = { func_308(iParam0, iParam1) };
		iVar8 = func_142(iParam0, iParam1);
		iVar0 = func_290(iVar8, vVar2, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
		ENTITY::SET_ENTITY_ROTATION(iVar0, vVar5, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(iVar0, MISC::IS_BIT_SET(iVar1, 0));
		ENTITY::SET_ENTITY_COLLISION(iVar0, !MISC::IS_BIT_SET(iVar1, 1), false);
		PED::SET_PED_CAN_BE_TARGETTED(iVar0, !MISC::IS_BIT_SET(iVar1, 2));
	}
	return iVar0;
}

int func_164(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;

	iVar0 = 0;
	if (func_143(iParam0, iParam1) != 0)
	{
		iVar1 = func_309(iParam0, iParam1);
		vVar2 = { func_310(iParam0, iParam1) };
		vVar5 = { func_311(iParam0, iParam1) };
		iVar8 = func_143(iParam0, iParam1);
		iVar0 = OBJECT::CREATE_OBJECT(iVar8, vVar2, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(iVar0, vVar5, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(iVar0, MISC::IS_BIT_SET(iVar1, 0));
		ENTITY::SET_ENTITY_COLLISION(iVar0, !MISC::IS_BIT_SET(iVar1, 1), false);
		OBJECT::SET_OBJECT_TARGETTABLE(iVar0, !MISC::IS_BIT_SET(iVar1, 2));
	}
	return iVar0;
}

void func_165(int iParam0, int iParam1)
{
	if (func_312(iParam0))
	{
		return;
	}
	if (func_313(iParam0) == iParam1)
	{
		return;
	}
	if (Global_36601 >= 10)
	{
		Global_36601 = 0;
	}
	(Global_36580[Global_36601 /*2*/])->f_1 = iParam1;
	Global_36580[Global_36601 /*2*/] = iParam0;
	Global_36601++;
}

void func_166(int iParam0, var uParam1, int iParam2, int iParam3, vector3 vParam4, vector3 vParam7, vector3 vParam10)
{
	vector3 vVar0;

	func_93(&(iParam0->f_234[iParam2]));
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_9(uParam1), func_10(uParam1), vParam4) };
	iParam0->f_234[iParam2] = VOLUME::_CREATE_VOLUME_BY_HASH(iParam3, vVar0, vParam7.x, vParam7.y, func_60((vParam7.z + func_10(uParam1))), vParam10);
}

void func_167(int iParam0, var uParam1, int iParam2, int iParam3, vector3 vParam4, float fParam7, int iParam8)
{
	vector3 vVar0;

	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_9(uParam1), func_10(uParam1), vParam4) };
	switch (iParam3)
	{
		case 0:
			func_314(iParam0->f_222[iParam2], vVar0, fParam7);
			break;
		case 1:
			func_315(iParam0->f_222[iParam2], vVar0, fParam7, 0, iParam8);
			break;
		case 2:
			func_316(iParam0->f_222[iParam2], vVar0, fParam7);
			break;
	}
}

void func_168(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (iParam3 == -1)
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			func_317(iParam0->f_222[iParam1], iParam0->f_234[iParam3], 0);
			break;
		case 1:
			func_318(iParam0->f_222[iParam1], iParam0->f_234[iParam3], bParam4, 0);
			break;
		case 2:
			func_319(iParam0->f_222[iParam1], iParam0->f_234[iParam3], 0);
			break;
	}
}

int func_169(int iParam0, int iParam1)
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

char* func_170(int iParam0)
{
	switch (iParam0)
	{
		case -1904017806:
			return "SCRIPT_COMMON_STAND_HERBALIST";
		case 2093245709:
			return "SCRIPT_COMMON_MIX_MORTAR_HERBALIST";
		case 494354620:
			return "SCRIPT_COMMON_LEAN_READ_HERBALIST";
		case -1189657660:
			return "WORLD_HUMAN_SIT_GROUND_MALE_A";
		default:
			break;
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iParam0);
}

void func_171(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

void func_172(int iParam0, var uParam1)
{
	iParam0->f_530 = 0;
	if (func_320(iParam0->f_7, &(iParam0->f_243), &(iParam0->f_530), 0) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_35, iParam0->f_7))
	{
		func_72(iParam0, 49);
	}
	else
	{
		func_73(iParam0, 49);
	}
	if (!uParam1->f_46)
	{
		if (func_321(iParam0, &(uParam1->f_5)))
		{
			if (func_176(iParam0->f_215, 1, 1))
			{
				func_177(&(iParam0->f_215), 1);
			}
			func_19();
			func_73(iParam0, 13);
			func_174(iParam0, 262144);
			func_73(iParam0, 67);
			func_23(iParam0);
			func_73(iParam0, 62);
			if (!iParam0->f_221)
			{
				uParam1->f_46 = 1;
				func_182(iParam0, 0);
			}
		}
		else if (iParam0->f_521)
		{
			if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(iParam0->f_7, 0))
			{
				PED::SET_PED_CAPSULE(iParam0->f_7, 0f);
			}
			else
			{
				iParam0->f_521 = 0;
			}
		}
	}
	PED::SET_PED_CAPSULE(iParam0->f_7, 0f);
	if (func_13(iParam0, 26) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_7))
	{
		if (func_322(Global_35, 0, 1, 0) != joaat("weapon_unarmed") && !WEAPON::_0x959383DCD42040DA(func_322(Global_35, 0, 1, 0)))
		{
			func_73(iParam0, 26);
			func_323(iParam0, 3);
			func_206(iParam0->f_7, Global_35, "RE_HEC_UNI_V1_AGGRO", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1506116031, 1, 0, 0);
		}
	}
	func_325(iParam0->f_7, 0, 0, (func_13(iParam0, 35) || func_324()), func_13(iParam0, 32));
	if (iParam0->f_1 > 0)
	{
		func_326(iParam0->f_284.f_21[2 /*17*/]);
		iParam0->f_433 = func_327(&(iParam0->f_284), &(iParam0->f_7), func_13(iParam0, 21));
		if (!func_13(iParam0, 24))
		{
			switch (iParam0->f_433)
			{
				case 1:
					if (func_13(iParam0, 62))
					{
						func_72(iParam0, 60);
						func_72(iParam0, 38);
						func_73(iParam0, 67);
						func_328(&(iParam0->f_284), 0);
						iParam0->f_197 = 1;
						iParam0->f_198 = 3;
					}
					break;
				case 2:
					func_72(iParam0, 24);
					func_328(&(iParam0->f_284), 0);
					func_206(Global_35, iParam0->f_7, "RE_HEC_UNI_V1_VALUABLE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_23(iParam0);
					func_182(iParam0, 0);
					iParam0->f_1 = 7;
					break;
			}
		}
	}
	func_329(iParam0, uParam1);
}

void func_173(int iParam0, var uParam1)
{
	if (func_330(iParam0, 1))
	{
		func_331(iParam0->f_7);
		if (!func_13(iParam0, 47))
		{
			func_326(iParam0->f_284.f_21[2 /*17*/]);
			if (!func_13(iParam0, 62))
			{
				func_326(iParam0->f_284.f_21[1 /*17*/]);
			}
			if (!func_13(iParam0, 63))
			{
				func_326(iParam0->f_284.f_21[0 /*17*/]);
			}
		}
		if (iParam0->f_433 == 0)
		{
			func_328(&(iParam0->f_284), 0);
			func_72(iParam0, 50);
			func_73(iParam0, 63);
			func_206(Global_35, iParam0->f_7, "RE_HEC_UNI_V1_DEFUSE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			if (func_13(iParam0, 62))
			{
				func_332(&(iParam0->f_284), 1, 1);
			}
			if (func_333(&(iParam0->f_496)))
			{
				func_334(&(iParam0->f_496));
			}
			func_72(iParam0, 64);
		}
		else if (func_13(iParam0, 64))
		{
			if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
			{
				return;
			}
		}
		switch (iParam0->f_522)
		{
			case 0:
				if (func_335(iParam0, uParam1, iParam0->f_523))
				{
					func_336(iParam0, iParam0->f_523);
					iParam0->f_522 = 1;
				}
				break;
			case 1:
				if (func_337(iParam0, uParam1, iParam0->f_523))
				{
					iParam0->f_529 = func_339(iParam0->f_523, func_338(iParam0, iParam0->f_523));
					iParam0->f_522 = 2;
				}
				break;
			case 2:
				if (func_340(iParam0, uParam1, iParam0->f_523))
				{
					func_341(&(iParam0->f_496));
					iParam0->f_522 = 3;
				}
				break;
			case 3:
				if (!func_333(&(iParam0->f_496)))
				{
					func_341(&(iParam0->f_496));
				}
				else if (func_343(&(iParam0->f_496), func_342(iParam0->f_523)) || func_344(iParam0))
				{
					if (func_345(iParam0, iParam0->f_523))
					{
						if (!func_205(iParam0->f_7, 1))
						{
							iParam0->f_529 = func_339(iParam0->f_523, func_338(iParam0, iParam0->f_523));
							if (func_333(&(iParam0->f_496)))
							{
								func_334(&(iParam0->f_496));
							}
							if (func_333(&(iParam0->f_499)))
							{
								func_334(&(iParam0->f_499));
							}
							iParam0->f_519 = 0;
							iParam0->f_524 = 0;
							iParam0->f_522 = 2;
						}
					}
					else
					{
						iParam0->f_522 = 4;
					}
				}
				break;
			case 4:
				if (func_345(iParam0, iParam0->f_523))
				{
					iParam0->f_529 = func_339(iParam0->f_523, func_338(iParam0, iParam0->f_523));
					if (func_333(&(iParam0->f_496)))
					{
						func_334(&(iParam0->f_496));
					}
					if (func_333(&(iParam0->f_499)))
					{
						func_334(&(iParam0->f_499));
					}
					if (!func_13(iParam0, 57))
					{
						if (func_322(iParam0->f_7, 0, 1, 0) == joaat("weapon_melee_knife"))
						{
							func_72(iParam0, 57);
						}
					}
					iParam0->f_519 = 0;
					iParam0->f_524 = 0;
					iParam0->f_522 = 2;
				}
				else if (func_344(iParam0) || func_346(iParam0, uParam1, iParam0->f_523))
				{
					if (!func_13(iParam0, 57))
					{
						if (func_322(iParam0->f_7, 0, 1, 0) == joaat("weapon_melee_knife"))
						{
							func_72(iParam0, 57);
						}
					}
					func_347(iParam0);
					func_348(iParam0);
					if (PED::IS_PED_USING_ACTION_MODE(iParam0->f_7))
					{
						PED::SET_PED_USING_ACTION_MODE(iParam0->f_7, false, -1, 0);
						PED::SET_PED_USING_ACTION_MODE(iParam0->f_7, true, 4000, 0);
					}
					iParam0->f_522 = 0;
				}
				break;
		}
	}
}

void func_174(int iParam0, int iParam1)
{
	func_119(&(iParam0->f_473), iParam1);
}

void func_175(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

int func_176(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 > -1 && iParam0 < 4)
	{
		if (!bParam1 || VOLUME::_DOES_VOLUME_EXIST(((*Global_1955500)[iParam0 /*16*/])->f_1))
		{
			if (!bParam2 || ENTITY::DOES_ENTITY_EXIST(((*Global_1955500)[iParam0 /*16*/])->f_2))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_177(var uParam0, bool bParam1)
{
	if (*uParam0 > -1 && *uParam0 < 4)
	{
		if ((*Global_1955500)[*uParam0 /*16*/])->f_3 == SCRIPTS::GET_ID_OF_THIS_THREAD()
		{
			if (func_349(1, 1) == *uParam0)
			{
				func_350(-1, 1, 1);
			}
			if (bParam1)
			{
				func_93(((*Global_1955500)[*uParam0 /*16*/])->f_1);
			}
			(*Global_1955500)[*uParam0 /*16*/] = 0;
			((*Global_1955500)[*uParam0 /*16*/])->f_2 = 0;
			((*Global_1955500)[*uParam0 /*16*/])->f_3 = 0;
			*uParam0 = -1;
		}
	}
}

void func_178(int iParam0)
{
	Global_17503.f_11 = iParam0;
}

int func_179(var uParam0, var uParam1, var uParam2)
{
	if (func_324())
	{
		func_72(uParam0, 35);
	}
	func_351(uParam0);
	func_352(&(uParam0->f_284));
	if (func_13(uParam0, 1))
	{
		if (func_13(uParam0, 7))
		{
			TASK::TASK_WANDER_IN_AREA(uParam0->f_7, func_9(uParam1), 5f, 1077936128, 1086324736, 1);
			if (func_17(0))
			{
				func_72(uParam0, 12);
				func_72(uParam0, 15);
			}
			else
			{
				func_72(uParam0, 38);
				func_72(uParam0, 23);
			}
			func_72(uParam0, 46);
		}
		else if (func_13(uParam0, 6))
		{
			func_193(uParam0, 3, 1);
			func_72(uParam0, 12);
			func_72(uParam0, 15);
		}
		else if (func_13(uParam0, 5))
		{
			func_193(uParam0, 2, 1);
			func_72(uParam0, 12);
		}
		else
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_7, Global_35, -1, -1082130432, -1082130432, -1082130432);
			func_193(uParam0, 1, 1);
		}
		func_353(uParam0, 0);
	}
	else if (func_17(6))
	{
		TASK::TASK_WANDER_IN_AREA(uParam0->f_7, func_9(uParam1), 5f, 1077936128, 1086324736, 1);
	}
	else
	{
		func_193(uParam0, 0, 1);
	}
	if (func_13(uParam0, 5))
	{
		func_72(uParam0, 12);
		func_72(uParam0, 13);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_20.f_11))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20.f_11))
		{
			func_354(uParam2, uParam0->f_7, uParam0->f_20.f_11, 0);
		}
	}
	return 1;
}

int func_180(vector3 vParam0, int iParam3, var uParam4)
{
	int iVar0;

	iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER(vParam0, 0f, 0f, 0f, 5f, 5f, 5f);
	*uParam4 = func_355(iParam3, iVar0, 3076);
	func_356(*uParam4, 256);
	return func_176(*uParam4, 1, 1);
}

int func_181(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (func_357(iParam0, &(uParam1->f_121)))
	{
		uParam1->f_120++;
		return 1;
	}
	return 0;
}

void func_182(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		func_72(iParam0, 42);
	}
	else
	{
		func_73(iParam0, 42);
	}
}

void func_183(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (!func_358(iParam0, 13))
		{
			if (bParam2)
			{
				func_359(iParam0, 0, 0);
			}
			func_360(iParam0, 13);
		}
	}
	else if (func_358(iParam0, 13))
	{
		func_361(iParam0, 13);
	}
}

bool func_184(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;

	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	switch (iParam1)
	{
		case joaat("group_sniper"):
		case -1101297303:
		case -594562071:
		case joaat("group_pistol"):
		case joaat("group_shotgun"):
		case joaat("group_rifle"):
			bVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("weapon_unarmed");
			}
			break;
		default:
			if (!WEAPON::IS_WEAPON_VALID(iParam1))
			{
				return iParam1;
			}
			bVar0 = iParam1;
			if ((WEAPON::_0x705BE297EEBDB95D(bVar0) || WEAPON::_0x959383DCD42040DA(bVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
			{
				StringCopy(&cVar5, WEAPON::_GET_WEAPON_NAME(bVar0), 128);
				iVar2 = WEAPON::_0xD42514C182121C23(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_43890 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))), 128);
					bVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (func_362(bVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, bVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(bVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						bVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_43890)
						{
							if (func_362(bVar4) && bVar4 != bVar0)
							{
								bVar0 = bVar4;
							}
						}
						else if (bVar4 == bVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (func_90() == -1 && !func_363(bVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, bVar0, 0, 0) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((bVar4 == bVar0 && !Global_43890) && iParam0 != Global_35) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
		{
			bVar22 = true;
		}
		else
		{
			bVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("weapon_unarmed");
			}
		}
	}
	if (bVar0 == joaat("weapon_unarmed") && iParam1 == joaat("weapon_unarmed"))
	{
		return bVar0;
	}
	else if (bVar0 == joaat("weapon_unarmed"))
	{
		switch (iParam1)
		{
			case -1101297303:
			case joaat("group_pistol"):
				bVar0 = joaat("weapon_revolver_cattleman");
				break;
			case joaat("group_sniper"):
			case -594562071:
			case joaat("group_shotgun"):
			case joaat("group_rifle"):
				if (func_363(joaat("weapon_repeater_carbine")))
				{
					bVar0 = joaat("weapon_repeater_carbine");
				}
				else
				{
					bVar0 = joaat("weapon_revolver_cattleman");
				}
				break;
			default:
				bVar0 = joaat("weapon_revolver_cattleman");
				break;
		}
	}
	else if (bVar0 == joaat("weapon_melee_lantern") && iParam0 == Global_35)
	{
		bVar0 = joaat("weapon_melee_davy_lantern");
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_35 && func_362(bVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &iParam9, bVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!WEAPON::_0x959383DCD42040DA(bVar0) && bVar0 != joaat("weapon_unarmed")) && !WEAPON::_0x79407D33328286C6(bVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, bVar0));
			iVar24 = WEAPON::_GET_WEAPON_CLIP_SIZE(bVar0) * 3;
			iParam9 = (iVar24 - iVar23);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else
		{
			iParam9 = 0;
		}
	}
	if (bParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_35)
	{
		func_364(bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_365(iParam0, &bVar0, &fVar25);
		bVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_366(bVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, bVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), bVar0, iParam4);
	}
	return bVar0;
}

void func_185(int iParam0, int iParam1, int iParam2)
{
	iParam0->f_483 = iParam1;
	iParam0->f_484 = iParam2;
}

bool func_186()
{
	int iVar0;

	iVar0 = 0;
	if (func_367(43))
	{
		iVar0++;
	}
	if (func_367(18))
	{
		iVar0++;
	}
	if (func_367(40))
	{
		iVar0++;
	}
	if (func_367(19))
	{
		iVar0++;
	}
	return iVar0 >= 3;
}

void func_187(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(iParam0->f_6), iParam1);
}

bool func_188()
{
	return func_17(9);
}

void func_189(int iParam0, int iParam1)
{
	func_72(iParam0, 27);
	func_185(iParam0, 2, 1);
	func_368(iParam0);
	func_334(&(iParam0->f_462));
	iParam0->f_205 = iParam1;
}

void func_190()
{
	func_369(9);
}

void func_191(var uParam0)
{
}

int func_192(var uParam0, var uParam1)
{
	float fVar0;

	if (PED::_0x569F1E1237508DEB(uParam0->f_7) == 2093245709)
	{
		if (!func_370(uParam0, 2))
		{
			func_174(uParam0, 2);
		}
	}
	else if (func_370(uParam0, 2))
	{
		func_196(uParam0, 2);
	}
	if (func_371(uParam1, 1077936128 /* Float: 3f */, 1114636288 /* Float: 60f */, 20f, 1, 0, 1, 10f, 1, 1125515264 /* Float: 150f */, 0, 0) && uParam1->f_48)
	{
		fVar0 = func_372(Global_35, uParam0->f_7, 1, 1);
		if (fVar0 <= 80f)
		{
			if (!func_370(uParam0, 16))
			{
				func_174(uParam0, 16);
			}
		}
		else if (func_370(uParam0, 16))
		{
			func_196(uParam0, 16);
		}
		if (fVar0 <= 20f)
		{
			if (PED::_0x569F1E1237508DEB(uParam0->f_7) != 2093245709)
			{
				if (!func_370(uParam0, 131072))
				{
					func_174(uParam0, 131072);
				}
				if (func_373(uParam0, 0))
				{
					return 1;
				}
			}
		}
		else if (func_370(uParam0, 131072))
		{
			func_196(uParam0, 131072);
		}
	}
	else if (func_370(uParam0, 131072))
	{
		func_196(uParam0, 131072);
	}
	return 0;
}

void func_193(int iParam0, int iParam1, bool bParam2)
{
	iParam0->f_472 = iParam1;
	if (bParam2)
	{
		func_196(iParam0, 8);
		func_196(iParam0, 4);
		func_196(iParam0, 1);
		func_196(iParam0, 2);
		iParam0->f_473 = (iParam0->f_473 || func_374(iParam1));
	}
	else
	{
		iParam0->f_473 = func_374(iParam1);
	}
}

void func_194(var uParam0)
{
	if (func_208(Global_35, uParam0->f_7, 75f, 1))
	{
		if (func_375(1f, 1, 0, 0))
		{
			func_376(1715123483, uParam0->f_7, 1);
			func_206(uParam0->f_7, uParam0->f_7, "RE_HEC_UNI_V1_WHISTLE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

int func_195(var uParam0)
{
	switch (uParam0->f_196)
	{
		case 0:
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam0->f_7, false);
			if (func_13(uParam0, 1))
			{
				func_72(uParam0, 12);
				func_72(uParam0, 13);
				func_377(uParam0->f_7, *uParam0, "YARROW_SEND_A_UPPER", "GCURRANT_SEND_A_UPPER", "VSNOWDROP_SEND_A_UPPER", "HBSAGE_SEND_A_UPPER", 0);
				uParam0->f_196 = 6;
			}
			else if (TASK::_0x916B8E075ABC8B4E(uParam0->f_7, 0))
			{
				func_377(uParam0->f_7, 19, "", "", "", "HEY_HELP_ME_AGAIN_UPPER", 0);
				BUILTIN::WAIT(10);
				uParam0->f_10.f_9 = "RE_HERB_HERBALIST";
				func_378(&(uParam0->f_10), uParam0->f_7, &(uParam0->f_9), 0f, 0f, 0f, 1065353216 /* Float: 1f */, 1, 5);
				uParam0->f_196 = 1;
			}
			break;
		case 1:
			func_379(&(uParam0->f_10), &(uParam0->f_9), 1);
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_7, func_140(19, 0), "HEY_HELP_ME_AGAIN_UPPER", 1))
			{
				if (MAP::DOES_BLIP_EXIST(uParam0->f_9))
				{
					if (!func_330(uParam0, 1))
					{
						TASK::TASK_PLAY_ANIM(uParam0->f_7, func_140(43, 0), "WAIT_01_UPPER", 8f, -8f, -1, 67117072, 0, 0, 0, 0, 0, 0);
						uParam0->f_196 = 3;
					}
				}
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_7, func_140(43, 0), "WAIT_01_UPPER", 1))
			{
				if (MAP::DOES_BLIP_EXIST(uParam0->f_9))
				{
					if (!func_330(uParam0, 1))
					{
						func_341(&uLocal_0);
						func_353(uParam0, 1);
						func_332(&(uParam0->f_284), 0, 1);
						func_381(&(uParam0->f_284), 0, func_380(4));
						if (!func_13(uParam0, 1))
						{
							func_332(&(uParam0->f_284), 1, 1);
							func_381(&(uParam0->f_284), 1, func_380(6));
						}
						else
						{
							func_332(&(uParam0->f_284), 1, 0);
						}
						switch (func_382(119))
						{
							case 0:
								func_383(&(uParam0->f_284), 0, "RE_HEC_UNI_V1_ACCEPT_01");
								func_383(&(uParam0->f_284), 1, "RE_HEC_UNI_V1_PLAYER_REJECT_01");
								break;
							case 1:
								func_383(&(uParam0->f_284), 0, "RE_HEC_UNI_V1_ACCEPT_02");
								func_383(&(uParam0->f_284), 1, "RE_HEC_UNI_V1_PLAYER_REJECT_02");
								break;
							default:
								func_383(&(uParam0->f_284), 0, "RE_HEC_UNI_V1_ACCEPT_03");
								func_383(&(uParam0->f_284), 1, "RE_HEC_UNI_V1_PLAYER_REJECT_03");
								break;
						}
						func_384(&(uParam0->f_284));
						uParam0->f_196 = 4;
					}
				}
			}
			break;
		case 4:
			if (func_330(uParam0, 1))
			{
				return 0;
			}
			switch (uParam0->f_433)
			{
				case 0:
					func_353(uParam0, 0);
					func_385(uParam0);
					func_72(uParam0, 12);
					func_72(uParam0, 13);
					func_384(&(uParam0->f_284));
					uParam0->f_196 = 5;
					break;
				case 1:
					func_353(uParam0, 0);
					func_385(uParam0);
					func_384(&(uParam0->f_284));
					uParam0->f_196 = 8;
					break;
				case -1:
					if (!func_330(uParam0, 1))
					{
						if (func_386(uParam0))
						{
							func_353(uParam0, 0);
							func_73(uParam0, 13);
							func_72(uParam0, 23);
							func_384(&(uParam0->f_284));
							uParam0->f_196 = 9;
						}
					}
					break;
			}
			break;
		case 5:
			if (!func_330(uParam0, 1))
			{
				if (!func_205(Global_35, 1) && !func_387(uParam0))
				{
					if (!func_17(5) && func_16())
					{
						func_206(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_ACCEPT_RESP", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						uParam0->f_196 = 2;
					}
					else
					{
						func_377(uParam0->f_7, *uParam0, "YARROW_SEND_A_UPPER", "GCURRANT_SEND_A_UPPER", "VSNOWDROP_SEND_A_UPPER", "HBSAGE_SEND_A_UPPER", 0);
						uParam0->f_196 = 6;
					}
				}
			}
			break;
		case 2:
			if (!func_205(uParam0->f_7, 1))
			{
				func_64(uParam0);
				func_377(uParam0->f_7, *uParam0, "YARROW_SEND_A_UPPER", "GCURRANT_SEND_A_UPPER", "VSNOWDROP_SEND_A_UPPER", "HBSAGE_SEND_A_UPPER", 0);
				uParam0->f_196 = 6;
			}
			break;
		case 8:
			if (!func_330(uParam0, 1))
			{
				if (!func_205(Global_35, 1) && !func_387(uParam0))
				{
					if (!func_13(uParam0, 23))
					{
						TASK::TASK_PLAY_ANIM(uParam0->f_7, func_140(19, 0), "NEGATIVE_UPPER", 8f, -8f, -1, 67117072, 0, 0, 0, 0, 0, 0);
					}
					uParam0->f_196 = 9;
				}
			}
			break;
		case 6:
			if (AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_7))
			{
				if (func_388(*uParam0) >= func_389(*uParam0))
				{
					func_72(uParam0, 9);
				}
				else
				{
					func_74(func_390(*uParam0, "HRB_OBJ_YR", "HRB_OBJ_HS", "HRB_OBJ_GC", "HRB_OBJ_VS"), 7500, 0, 0, func_389(*uParam0), -1, 1);
				}
			}
			if (!func_330(uParam0, 1))
			{
				if (!func_391(uParam0->f_7, *uParam0, "YARROW_SEND_A_UPPER", "GCURRANT_SEND_A_UPPER", "VSNOWDROP_SEND_A_UPPER", "HBSAGE_SEND_A_UPPER", 0, 1))
				{
					if (*uParam0 != 40 && *uParam0 != 43)
					{
						func_377(uParam0->f_7, *uParam0, "YARROW_SEND_B_UPPER", "GCURRANT_SEND_B_UPPER", "VSNOWDROP_SEND_B_UPPER", "HBSAGE_SEND_B_UPPER", 0);
					}
					func_392(*uParam0, 0, 1);
					if (func_393(uParam0))
					{
						func_72(uParam0, 66);
						return 1;
					}
					uParam0->f_196 = 7;
				}
			}
			break;
		case 7:
			if ((*uParam0 == 40 || !func_208(Global_35, uParam0->f_7, 20f, 1)) || !func_391(uParam0->f_7, *uParam0, "YARROW_SEND_B_UPPER", "GCURRANT_SEND_B_UPPER", "VSNOWDROP_SEND_B_UPPER", "HBSAGE_SEND_B_UPPER", 0, 1))
			{
				func_394(uParam0);
				func_196(uParam0, 131072);
				func_395(uParam0, 1f, 0);
				func_70(uParam0, 0, -1904017806, 0, 0, 1, 3f);
				return 1;
			}
			break;
		case 9:
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_7, func_140(19, 0), "NEGATIVE_UPPER", 1))
			{
				func_175(&(uParam0->f_9));
				func_196(uParam0, 131072);
				func_70(uParam0, 0, 494354620, 0, 0, 1, 0);
				uParam0->f_1 = 11;
			}
			break;
	}
	return 0;
}

void func_196(int iParam0, int iParam1)
{
	func_118(&(iParam0->f_473), iParam1);
}

void func_197(var uParam0)
{
	if (PED::_0x569F1E1237508DEB(uParam0->f_7) == -1904017806)
	{
		if (!func_396(uParam0, 0, 1, 1))
		{
			uParam0->f_203 = 2;
		}
		else
		{
			uParam0->f_203 = 3;
		}
		func_395(uParam0, 5f, 1);
	}
}

void func_198()
{
	func_89(11);
}

int func_199(int iParam0, var uParam1)
{
	switch (iParam0->f_197)
	{
		case 0:
			if (func_393(iParam0))
			{
				func_72(iParam0, 9);
				if (!func_13(iParam0, 1))
				{
					if (!MAP::DOES_BLIP_EXIST(iParam0->f_9))
					{
						func_397(iParam0->f_7, &(iParam0->f_9), -89429847, 580546400, 0, 0);
					}
				}
				if (!func_13(iParam0, 9))
				{
					func_398(iParam0, func_388(*iParam0), 1);
				}
				else if (!func_13(iParam0, 1))
				{
					func_74("HERB_DONE_EARLY", 7500, 0, 0, -1, -1, 0);
				}
				else
				{
					func_74("HERB_DONE_EARLY_RC", 7500, 0, 0, -1, -1, 0);
				}
				if (MAP::DOES_BLIP_EXIST(iParam0->f_9))
				{
					MAP::_0x662D364ABF16DE2F(iParam0->f_9, -981020806);
				}
				func_399(iParam0, 0);
				func_193(iParam0, 2, 1);
				iParam0->f_197 = 1;
			}
			else
			{
				func_400(iParam0, 0);
				func_193(iParam0, 2, 1);
				iParam0->f_197 = 1;
			}
			func_341(&uLocal_0);
			break;
		case 1:
			if (func_401(iParam0, uParam1))
			{
				func_73(iParam0, 13);
				func_402(&(iParam0->f_112), &(iParam0->f_90[2]));
				func_403(iParam0);
				func_404(&(iParam0->f_112), *iParam0, iParam0->f_7, &(iParam0->f_90), 1);
				func_405(&(iParam0->f_112));
				return 1;
			}
			break;
	}
	return 0;
}

int func_200(var uParam0)
{
	func_331(uParam0->f_7);
	switch (uParam0->f_199)
	{
		case 0:
			if (!func_330(uParam0, 1))
			{
				if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uParam0->f_7, -1) || func_406(&(uParam0->f_112), "base02", 1))
				{
					if (*uParam0 == 19)
					{
						if (!func_205(uParam0->f_7, 1))
						{
							func_206(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_SAGE_TIP", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_193(uParam0, 4, 1);
							uParam0->f_199 = 1;
						}
					}
					else
					{
						func_193(uParam0, 4, 1);
						uParam0->f_199 = 1;
					}
				}
			}
			break;
		case 1:
			return !func_205(uParam0->f_7, 1);
	}
	return 0;
}

int func_201(var uParam0, var uParam1)
{
	struct<4> Var0;
	vector3 vVar4;

	func_331(uParam0->f_7);
	func_407(uParam0);
	switch (uParam0->f_200)
	{
		case 0:
			if (!func_330(uParam0, 1) && !AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_7))
			{
				func_408(uParam0);
				func_328(&(uParam0->f_284), 0);
				func_384(&(uParam0->f_284));
				uParam0->f_200 = 1;
			}
			break;
		case 1:
			if (!func_330(uParam0, 1))
			{
				if (func_375(-4f, 1, 0, 0))
				{
					func_409(&(uParam0->f_154), &(uParam0->f_175), uParam0->f_7, &(uParam0->f_90[2]), uParam0->f_242, func_44(uParam0));
					func_353(uParam0, 1);
					func_332(&(uParam0->f_284), 0, 1);
					func_381(&(uParam0->f_284), 0, func_410(uParam0->f_240));
					func_411(&(uParam0->f_284), 0, 10f);
					func_341(&uLocal_0);
					func_384(&(uParam0->f_284));
					uParam0->f_200 = 2;
				}
			}
			break;
		case 2:
			func_412(&(uParam0->f_154), uParam0->f_7);
			switch (uParam0->f_433)
			{
				case 0:
					vVar4 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_7, true, false) };
					uParam0->f_241 = func_413(uParam0, uParam1, &Var0);
					func_414(&(uParam0->f_52));
					uParam0->f_52.f_8 = { Var0 };
					uParam0->f_52.f_19 = Var0.f_3;
					uParam0->f_52.f_1 = Global_35;
					uParam0->f_52.f_21 = 1f;
					uParam0->f_52.f_18 = 0.25f;
					uParam0->f_52.f_8.f_2 = vVar4.z;
					func_119(&(uParam0->f_52.f_23), 32);
					func_353(uParam0, 0);
					func_328(&(uParam0->f_284), 0);
					func_415(Global_35, &(uParam0->f_8), 0f, 0f, 0f, 0, 7f, 4, 0, 0, 0, 0, 1071644672 /* Float: 1.75f */);
					uParam0->f_200 = 3;
					break;
				default:
					if (!func_330(uParam0, 1))
					{
						if (func_416(uParam0))
						{
							func_206(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_SUITYOURSELF", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							TASK::TASK_PLAY_ANIM(uParam0->f_7, "SCRIPT_RE@HERBALISTCAMP@SERUM_HANDOVER", "SERUM_DECLINE_HERBALIST", 4f, -4f, -1, 8192, 0, 0, 0, 0, 0, 0);
							func_353(uParam0, 0);
							func_328(&(uParam0->f_284), 0);
							func_175(&(uParam0->f_9));
							func_417(&(uParam0->f_284), 0);
							if (!func_133(2054734837, 2, 0, 0))
							{
							}
							func_384(&(uParam0->f_284));
							uParam0->f_200 = 5;
						}
					}
					break;
			}
			break;
		case 5:
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_7, "SCRIPT_RE@HERBALISTCAMP@SERUM_HANDOVER", "SERUM_DECLINE_HERBALIST", 1))
			{
				if (func_49(2054734837))
				{
					func_162(uParam0, 0);
					func_418(uParam0, 2093245709, 0);
					return 1;
				}
			}
			break;
		case 3:
			if (func_419(uParam0))
			{
				uParam0->f_200 = 6;
			}
			break;
		case 6:
			if ((uParam0->f_241 == 0 && ANIMSCENE::_0xD8254CB2C586412B(uParam0->f_175.f_1, 0)) || (uParam0->f_241 == 1 && ANIMSCENE::_0xD8254CB2C586412B(uParam0->f_154.f_1, 0)))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
				func_175(&(uParam0->f_9));
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_7, Global_35, -1, -1082130432, -1082130432, -1082130432);
				if (!func_133(2054734837, 2, 0, 0))
				{
				}
				uParam0->f_200 = 7;
			}
			break;
		case 7:
			if (!func_330(uParam0, 1))
			{
				if (func_375(-3f, 1, 0, 0) && !func_205(uParam0->f_7, 0))
				{
					if (!func_13(uParam0, 16))
					{
						if (func_49(2054734837))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_7, Global_35, -1, -1082130432, -1082130432, -1082130432);
							func_206(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_GOODBYE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							uParam0->f_200 = 8;
						}
					}
					else
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_7, Global_35, -1, -1082130432, -1082130432, -1082130432);
						uParam0->f_200 = 9;
					}
				}
			}
			break;
		case 8:
			if (!func_205(uParam0->f_7, 1))
			{
				func_162(uParam0, 0);
				if (ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_112.f_1, 0))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_112.f_1, "BASE02_LOOP", true, false);
				}
				func_70(uParam0, 0, 494354620, 0, 0, 1, 0);
				func_395(uParam0, 7f, 0);
				return 1;
			}
			break;
		case 9:
			if (!func_205(uParam0->f_7, 1))
			{
				if (func_49(2054734837))
				{
					func_206(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_FAREWELL", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					uParam0->f_200 = 8;
				}
			}
			break;
	}
	return 0;
}

int func_202(var uParam0)
{
	return 0;
}

int func_203(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29)
{
	int iVar0;
	float fVar1;
	var uVar2;

	fVar1 = func_420(Global_35, func_9(uParam1), 1);
	switch (uParam0->f_201)
	{
		case 0:
			if (func_320(uParam0->f_7, &uParam2, &uVar2, 0) || fVar1 < 4f)
			{
				if (fVar1 < (35f - 7f))
				{
					if (uParam0->f_219 > 3)
					{
						if (PED::IS_PED_USING_ANY_SCENARIO(uParam0->f_7))
						{
							PED::_0x802092B07E3B1EEA(uParam0->f_7, Global_36, 3);
						}
						func_421(uParam0);
					}
					uParam0->f_220 = 1;
					uParam0->f_201 = 1;
				}
			}
			break;
		case 1:
			if (!func_14(Global_35, func_9(uParam1), 35f, 1, 1))
			{
				if (!func_333(&(uParam0->f_216)))
				{
					func_341(&(uParam0->f_216));
				}
				if (!PED::_0xEC6935EBE0847B90(uParam0->f_7, Global_36))
				{
					if (!PED::_0x463803429297117C(uParam0->f_7, Global_36, 1, 0))
					{
						PED::_0xF1C03A5352243A30(uParam0->f_7);
					}
				}
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_7, joaat("weapon_unarmed"), false, 0, false, false);
				TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
				func_70(uParam0, 1, 494354620, 1, 0, 1, 0);
				func_171(uParam0->f_7, &iVar0, 0, 0, 1, 1);
				if (func_422(&(uParam0->f_216), 3f))
				{
					uParam0->f_201 = 0;
				}
			}
			else
			{
				if (func_333(&(uParam0->f_216)))
				{
					func_334(&(uParam0->f_216));
				}
				switch (uParam0->f_219)
				{
					case 0:
						func_206(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_DEFEND", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						PED::_0xA3A9299C4F2ADB98(uParam0->f_7);
						if (!PED::_0xEC6935EBE0847B90(uParam0->f_7, Global_36))
						{
							if (!PED::_0x463803429297117C(uParam0->f_7, Global_36, 1, 0))
							{
								PED::_0xF1C03A5352243A30(uParam0->f_7);
							}
						}
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_7, Global_35, -1, -1082130432, -1082130432, -1082130432);
						uParam0->f_219++;
						break;
					case 1:
						if (uParam0->f_220 || func_375(1f, 1, 0, 0))
						{
							func_206(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_HAVETO", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							PED::_0xA3A9299C4F2ADB98(uParam0->f_7);
							if (!PED::_0xEC6935EBE0847B90(uParam0->f_7, Global_36))
							{
								if (!PED::_0x463803429297117C(uParam0->f_7, Global_36, 1, 0))
								{
									PED::_0xF1C03A5352243A30(uParam0->f_7);
								}
							}
							TASK::OPEN_SEQUENCE_TASK(&iVar0);
							if (func_322(uParam0->f_7, 0, 1, 0) == joaat("weapon_unarmed"))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_7, joaat("weapon_melee_knife"), false, 0, false, false);
								TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
							}
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
							func_171(uParam0->f_7, &iVar0, 0, 0, 1, 1);
							uParam0->f_219++;
						}
						break;
					case 2:
						if (uParam0->f_220 || func_375(0, 1, 0, 0))
						{
							func_206(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_ISAID", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							PED::_0xA3A9299C4F2ADB98(uParam0->f_7);
							if (!PED::_0xEC6935EBE0847B90(uParam0->f_7, Global_36))
							{
								if (!PED::_0x463803429297117C(uParam0->f_7, Global_36, 1, 0))
								{
									PED::_0xF1C03A5352243A30(uParam0->f_7);
								}
							}
							TASK::OPEN_SEQUENCE_TASK(&iVar0);
							if (func_322(uParam0->f_7, 0, 1, 0) == joaat("weapon_unarmed"))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_7, joaat("weapon_melee_knife"), false, 0, false, false);
								TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
							}
							TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, 0, 1);
							func_171(uParam0->f_7, &iVar0, 0, 0, 1, 1);
							uParam0->f_219++;
						}
						break;
					case 3:
						if (uParam0->f_220 || func_375(-3f, 1, 0, 0))
						{
							func_206(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_FORCEDME", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_421(uParam0);
							uParam0->f_219++;
						}
						break;
				}
			}
			if (uParam0->f_220)
			{
				uParam0->f_220 = 0;
			}
			break;
	}
	return 0;
}

int func_204(var uParam0)
{
	int iVar0;
	int iVar1;

	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam0->f_7, 0))
	{
		if (TASK::_0x02EBBB3989B7E695(uParam0->f_7))
		{
			func_423(uParam0, -1f);
		}
		else if (TASK::_0x916B8E075ABC8B4E(uParam0->f_7, 0))
		{
			if (!PED::_0xEEED8FAFEC331A70(uParam0->f_7, Global_36, 3))
			{
				if (!PED::_0x802092B07E3B1EEA(uParam0->f_7, Global_36, 3))
				{
					PED::_0xA3A9299C4F2ADB98(uParam0->f_7);
				}
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_7, false);
			if (func_322(uParam0->f_7, 0, 1, 0) != joaat("weapon_unarmed"))
			{
				func_323(uParam0, 3);
			}
			else
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				func_171(uParam0->f_7, &iVar0, 0, 0, 1, 1);
			}
			return 1;
		}
	}
	else
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_7, false);
		if (func_322(uParam0->f_7, 0, 1, 0) != joaat("weapon_unarmed"))
		{
			func_323(uParam0, 3);
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			func_171(uParam0->f_7, &iVar1, 0, 0, 1, 1);
		}
		return 1;
	}
	return 0;
}

int func_205(int iParam0, bool bParam1)
{
	if (func_98(iParam0, 0, 1))
	{
		return (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0) || (bParam1 && AUDIO::IS_ANY_SPEECH_PLAYING(iParam0)));
	}
	return 0;
}

bool func_206(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_424(iParam0, iParam1, sParam2, iParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

int func_207(int iParam0, int iParam1, bool bParam2)
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

int func_208(int iParam0, int iParam1, float fParam2, bool bParam3)
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

int func_209(var uParam0)
{
	struct<7> Var0;

	Var0.f_1 = 2;
	Var0.f_2 = joaat("none");
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	switch (uParam0->f_204)
	{
		case 0:
			func_175(&(uParam0->f_9));
			func_341(&(uParam0->f_212));
			func_425(uParam0);
			func_177(&(uParam0->f_215), 1);
			uParam0->f_204 = 1;
			break;
		case 1:
			if (func_343(&(uParam0->f_212), 2f))
			{
				func_426(&(uParam0->f_284));
				Var0 = 41;
				Var0.f_2 = joaat("timid");
				Var0.f_3 = 3;
				Var0.f_4 = 1;
				func_427(&(uParam0->f_7), &Var0, &(uParam0->f_284), &(uParam0->f_284.f_21), uParam0->f_434.f_5);
				func_428(uParam0);
				if (func_429(&(uParam0->f_112), 1, 0, 0))
				{
					func_82(&(uParam0->f_112));
				}
				uParam0->f_204 = 2;
			}
			break;
		case 2:
			return 1;
	}
	return 0;
}

int func_210(int iParam0, var uParam1, bool bParam2)
{
	if (!bParam2)
	{
		switch (iParam0->f_202)
		{
			case 0:
				func_353(iParam0, 0);
				func_193(iParam0, 3, 0);
				func_328(&(iParam0->f_284), 1);
				if (!func_13(iParam0, 46))
				{
					func_381(&(iParam0->f_284), 0, func_380(7));
				}
				else
				{
					func_332(&(iParam0->f_284), 0, 0);
				}
				func_381(&(iParam0->f_284), 1, func_380(10));
				func_383(&(iParam0->f_284), 0, "RE_HEC_UNI_V1_STUDIES");
				func_383(&(iParam0->f_284), 1, "RE_HEC_UNI_V1_WASTETIME");
				func_384(&(iParam0->f_284));
				iParam0->f_202 = 1;
				break;
			case 1:
				if (iParam0->f_433 > -1)
				{
					func_328(&(iParam0->f_284), 0);
				}
				switch (iParam0->f_433)
				{
					case 0:
						func_341(&(iParam0->f_212));
						if (func_430(iParam0))
						{
							func_187(iParam0, 4);
						}
						func_368(iParam0);
						if (!func_431(iParam0, 1))
						{
							func_187(iParam0, 0);
						}
						else
						{
							iParam0->f_474 = 3;
							func_383(&(iParam0->f_284), 1, "RE_HEC_UNI_V1_OLDMAN");
							func_381(&(iParam0->f_284), 1, func_380(10));
						}
						func_332(&(iParam0->f_284), 0, 0);
						func_384(&(iParam0->f_284));
						iParam0->f_202 = 2;
						break;
					case 1:
						func_341(&(iParam0->f_212));
						if (func_430(iParam0))
						{
							func_187(iParam0, 4);
						}
						func_368(iParam0);
						if (func_431(iParam0, 1))
						{
							iParam0->f_474 = 2;
						}
						if (iParam0->f_474 > 1)
						{
							func_332(&(iParam0->f_284), 0, 0);
							func_332(&(iParam0->f_284), 1, 0);
						}
						func_384(&(iParam0->f_284));
						iParam0->f_202 = 4;
						break;
					case -1:
						if (func_431(iParam0, 1))
						{
							if (func_343(&(iParam0->f_212), 6f))
							{
								iParam0->f_474 = 3;
								func_432(iParam0);
								func_433(iParam0, 4);
								func_196(iParam0, 131072);
								func_332(&(iParam0->f_284), 0, 0);
								func_383(&(iParam0->f_284), 1, "RE_HEC_UNI_V1_OLDMAN");
								func_381(&(iParam0->f_284), 1, func_380(10));
								func_334(&(iParam0->f_212));
								func_433(iParam0, 1);
								func_384(&(iParam0->f_284));
							}
						}
						break;
				}
				break;
			case 2:
				if (((!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0->f_7)) && !AUDIO::_0xFE5C6177064BD390(1))
				{
					func_341(&(iParam0->f_212));
					if (func_431(iParam0, 1))
					{
						func_206(iParam0->f_7, Global_35, func_434("RE_HEC_UNI_V1_EXCUSEME"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1506116031, 1, 0, 0);
					}
					else
					{
						func_206(iParam0->f_7, Global_35, func_434("RE_HEC_UNI_V1_TRAVELS"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1506116031, 1, 0, 0);
					}
					iParam0->f_202 = 3;
				}
				break;
			case 3:
				if (((func_343(&(iParam0->f_212), 2f) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0->f_7)) && !AUDIO::_0xFE5C6177064BD390(1))
				{
					func_432(iParam0);
					func_433(iParam0, 4);
					func_196(iParam0, 131072);
					if (!func_431(iParam0, 3))
					{
						func_332(&(iParam0->f_284), 1, 1);
					}
					func_395(iParam0, 10f, 0);
					iParam0->f_202 = 1;
				}
				break;
			case 4:
				if (func_343(&(iParam0->f_212), 2f))
				{
					if ((!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0->f_7)) && !AUDIO::_0xFE5C6177064BD390(1))
					{
						if (func_431(iParam0, 4) || func_373(iParam0, 0))
						{
							func_341(&(iParam0->f_212));
							func_435(iParam0, iParam0->f_474);
							switch (iParam0->f_474)
							{
								case 2:
									func_72(iParam0, 54);
									break;
								case 3:
									func_187(iParam0, 6);
									break;
							}
							iParam0->f_202 = 5;
						}
					}
				}
				break;
			case 5:
				if (!func_330(iParam0, 1))
				{
					if ((!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0->f_7)) && !AUDIO::_0xFE5C6177064BD390(1))
					{
						if ((func_343(&(iParam0->f_212), 2f) || func_431(iParam0, 6)) || func_431(iParam0, 5))
						{
							if (func_436(iParam0))
							{
								func_425(iParam0);
								if (func_431(iParam0, 6))
								{
									func_437(iParam0, 0);
								}
								else
								{
									func_323(iParam0, 3);
								}
								func_177(&(iParam0->f_215), 1);
								func_23(iParam0);
								uParam1->f_46 = 1;
								iParam0->f_202 = 6;
							}
							else
							{
								func_395(iParam0, 10f, 0);
								if (!func_431(iParam0, 1))
								{
									func_432(iParam0);
									func_433(iParam0, 4);
									func_196(iParam0, 131072);
								}
								else
								{
									func_341(&(iParam0->f_212));
								}
								iParam0->f_202 = 1;
							}
						}
					}
				}
				break;
			case 6:
				break;
		}
	}
	if (func_13(iParam0, 1))
	{
		if (!func_208(Global_35, iParam0->f_7, 300f, 1))
		{
			return 1;
		}
	}
	return 0;
}

bool func_211(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_7))
	{
		if (!uParam0->f_520)
		{
			if (PED::IS_PED_IN_MELEE_COMBAT(uParam0->f_7) || PED::IS_PED_IN_COMBAT(uParam0->f_7, Global_35))
			{
				if (!func_13(uParam0, 56))
				{
					func_72(uParam0, 56);
					func_438(&(uParam0->f_284.f_21), 1, 1);
					func_384(&(uParam0->f_284));
				}
				func_439(&(uParam0->f_9), uParam0->f_7, 0);
				uParam0->f_520 = 1;
			}
		}
		else if (!PED::IS_PED_IN_MELEE_COMBAT(uParam0->f_7) && !PED::IS_PED_IN_COMBAT(uParam0->f_7, Global_35))
		{
			func_175(&(uParam0->f_9));
			uParam0->f_520 = 0;
		}
		if (func_338(uParam0, 1) > 1)
		{
			if (!func_13(uParam0, 63))
			{
				func_326(uParam0->f_284.f_21[0 /*17*/]);
			}
		}
		else if (!func_13(uParam0, 50))
		{
			if (!func_13(uParam0, 52))
			{
				if (!func_330(uParam0, 1))
				{
					func_326(uParam0->f_284.f_21[0 /*17*/]);
				}
			}
		}
		switch (uParam0->f_206)
		{
			case 0:
				func_440(&(uParam0->f_284));
				func_332(&(uParam0->f_284), 1, 1);
				func_383(&(uParam0->f_284), 1, "RE_HEC_UNI_V1_ATAG_AGGRO_1ST");
				func_381(&(uParam0->f_284), 1, func_380(10));
				if (!func_13(uParam0, 50))
				{
					func_332(&(uParam0->f_284), 0, 1);
					func_383(&(uParam0->f_284), 0, "RE_HEC_UNI_V1_DEFUSE");
					func_381(&(uParam0->f_284), 0, func_380(8));
				}
				func_73(uParam0, 21);
				func_441(&(uParam0->f_284));
				func_384(&(uParam0->f_284));
				uParam0->f_206 = 1;
				break;
			case 1:
				switch (uParam0->f_433)
				{
					case 0:
						func_341(&(uParam0->f_212));
						func_72(uParam0, 50);
						uParam0->f_206 = 2;
						break;
					case 1:
						func_341(&(uParam0->f_212));
						func_72(uParam0, 52);
						uParam0->f_206 = 4;
						break;
				}
				break;
			case 2:
				if (func_343(&(uParam0->f_212), 2f))
				{
					uParam0->f_206 = 3;
				}
				break;
			case 3:
				if (func_13(uParam0, 51))
				{
					if (!func_205(uParam0->f_7, 1))
					{
						if (uParam0->f_528 < 2)
						{
							func_332(&(uParam0->f_284), 1, 1);
						}
						func_384(&(uParam0->f_284));
						func_73(uParam0, 50);
						func_73(uParam0, 51);
						uParam0->f_206 = 1;
					}
				}
				break;
			case 4:
				if (func_343(&(uParam0->f_212), 2f))
				{
					uParam0->f_206 = 5;
				}
				break;
			case 5:
				if (func_13(uParam0, 53))
				{
					if (!func_205(uParam0->f_7, 1))
					{
						if (uParam0->f_528 < 2)
						{
							func_332(&(uParam0->f_284), 1, 1);
							func_383(&(uParam0->f_284), 1, "RE_HEC_UNI_V1_ATAG_AGGRO_2ND");
						}
						func_384(&(uParam0->f_284));
						func_73(uParam0, 52);
						func_73(uParam0, 53);
						uParam0->f_206 = 1;
					}
				}
				break;
			case 6:
				if (func_13(uParam0, 55))
				{
					if (!func_205(uParam0->f_7, 1))
					{
						func_73(uParam0, 54);
						func_73(uParam0, 55);
						uParam0->f_206 = 1;
					}
				}
				break;
		}
	}
	return ENTITY::IS_ENTITY_DEAD(uParam0->f_7);
}

void func_212(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_7))
	{
		if (uParam0->f_476 != 0)
		{
			PED::_0x8B3B71C80A29A4BB(uParam0->f_7, uParam0->f_475, uParam0->f_476);
		}
	}
}

void func_213(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	if (!func_442(uParam0, &iVar4, &bVar0, &bVar1, &bVar2, &bVar3))
	{
		return;
	}
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam0->f_7, true);
	PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(uParam0->f_7, true);
	if (func_30(iVar4, 8))
	{
		if (!func_333(&(uParam0->f_447)))
		{
			func_341(&(uParam0->f_447));
		}
	}
	else if (func_333(&(uParam0->f_447)))
	{
		func_334(&(uParam0->f_447));
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_7, -1958015541))
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(&(uParam0->f_90[3]), "SCRIPT_RE@HERBALISTCAMP", "MORTAR_PESTAL_STATIC", 1))
		{
			ENTITY::PLAY_ENTITY_ANIM(&(uParam0->f_90[3]), "MORTAR_PESTAL_STATIC", "SCRIPT_RE@HERBALISTCAMP", 1000f, false, true, true, 0f, 0);
		}
	}
	switch (uParam0->f_203)
	{
		case 0:
			uParam0->f_203 = 2;
			break;
		case 2:
			uParam0->f_203 = func_443(uParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		case 3:
			uParam0->f_203 = func_444(uParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		case 4:
			uParam0->f_203 = func_445(uParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		case 6:
			uParam0->f_203 = func_446(uParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		case 7:
			uParam0->f_203 = func_447(uParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		case 10:
			uParam0->f_203 = func_448(uParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		case 12:
			uParam0->f_203 = func_449(uParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		case 14:
			uParam0->f_203 = func_450(uParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		case 15:
			uParam0->f_203 = func_451(uParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		case 18:
			uParam0->f_203 = func_452(uParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		case 19:
			uParam0->f_203 = func_453(uParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
		case 20:
			uParam0->f_203 = func_454(uParam0, iVar4, bVar0, bVar1, bVar2, bVar3);
			break;
	}
}

void func_214(var uParam0, var uParam1)
{
	if (uParam0->f_2 >= *uParam1)
	{
		if (uParam0->f_2 > uParam0->f_98)
		{
		}
		uParam0->f_2 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1[uParam0->f_2]))
	{
		uParam0->f_98[uParam0->f_2] = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uParam1[uParam0->f_2], false, false), Global_36, true);
	}
	else
	{
		uParam0->f_98[uParam0->f_2] = 0f;
	}
}

void func_215(var uParam0)
{
	func_110(uParam0, 1);
	func_455(uParam0, 20);
}

bool func_216(int iParam0, int iParam1)
{
	if (!func_243(iParam0))
	{
		return false;
	}
	return (((*Global_1310750)[iParam0 /*111*/])->f_1 && iParam1) != 0;
}

void func_217(var uParam0, var uParam1, int iParam2, int* iParam3)
{
	if (!func_243(iParam2))
	{
		return;
	}
	if (*uParam1)
	{
		return;
	}
	if (func_456())
	{
		func_457(1);
	}
	func_458(iParam2, uParam0->f_43);
	func_459(iParam2, 0, 0, 0, 0);
	if (func_460(iParam2) != -1)
	{
		MISC::_SET_WEATHER_TYPE_FROZEN(1);
	}
	AUDIO::START_AUDIO_SCENE("RE_active_location_scene");
	MISC::_0x1096603B519C905F(func_96(uParam0->f_3));
	if (MAP::DOES_BLIP_EXIST(*iParam3))
	{
		MAP::REMOVE_BLIP(iParam3);
	}
	func_461(uParam0, 1, 0);
	*uParam1 = 1;
}

void func_218(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		((*uParam0)[iVar0 /*9*/])->f_7 = 0f;
		((*uParam0)[iVar0 /*9*/])->f_8 = 0f;
		iVar0++;
	}
}

void func_219(var uParam0, int iParam1, float fParam2)
{
	bool bVar0;
	float fVar1;

	bVar0 = false;
	if (uParam0->f_178 && func_462())
	{
		bVar0 = true;
	}
	if (!uParam0->f_48 && !func_216(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_217(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_218(&(uParam0->f_121));
			return;
		}
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_173))
		{
			if (!func_463(Global_35, uParam0->f_173, 1, 0))
			{
				return;
			}
		}
		fVar1 = func_464(uParam0, bVar0);
		func_465(uParam0->f_121[iParam1 /*9*/], fVar1, 1082130432 /* Float: 4f */, 0, 90f, 0, &(uParam0->f_98[iParam1]));
		if (func_466(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			func_217(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_218(&(uParam0->f_121));
		}
	}
}

int func_220(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = 30f;
	fVar1 = 150f;
	if (func_122(uParam2->f_3, 1))
	{
		fVar1 = 150f;
	}
	else
	{
		fVar1 = 70f;
	}
	if (!*uParam1)
	{
		if (iParam0 >= 75 && iParam0 <= 118)
		{
			if (func_467())
			{
				fVar0 = 15f;
			}
		}
		if (func_468(uParam2, fVar0))
		{
			*uParam1 = 1;
		}
	}
	if (!uParam2->f_48)
	{
		if (!bParam3 && func_469(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return 0;
		}
		if (!func_468(uParam2, fVar1))
		{
			if (!func_470(((*Global_1310750)[uParam2->f_3 /*111*/])->f_38))
			{
				return 0;
			}
		}
		if (!func_471(uParam2->f_3, 2) && func_472(2))
		{
			return 0;
		}
		if (func_122(iParam0, 4194304) || func_122(iParam0, 33554432))
		{
			if (func_473(1))
			{
				return 0;
			}
		}
	}
	if (func_474(Global_35))
	{
		return 0;
	}
	if (func_475(0, 1, 1) && !func_476(iParam0))
	{
		return 0;
	}
	if (!*uParam1 && func_122(iParam0, 128))
	{
		if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (func_477(Global_35, 0))
		{
			return 0;
		}
		if (Global_16)
		{
			return 0;
		}
		if (func_469(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return 0;
		}
		if (func_478())
		{
			return 0;
		}
		iVar2 = func_480(func_479());
		if (func_481(iVar2))
		{
			if (func_482(Global_36, iVar2))
			{
				return 0;
			}
		}
		if (func_483(Global_36) && !uParam2->f_161)
		{
			return 0;
		}
		if (!uParam2->f_48)
		{
			if (func_484(&(uParam2->f_91), 0, 1084227584 /* Float: 5f */, 1, 1))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_221(var uParam0, int iParam1)
{
	var uVar0;
	bool bVar1;
	int iVar2;

	if (func_485(uParam0->f_51))
	{
		func_252(uParam0->f_51, 0);
		uVar0 = func_486(uParam0->f_3);
		iVar2 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_51, 0f, 0f, 0f, uVar0, uVar0, uVar0, func_487());
		bVar1 = func_102(!func_122(uParam0->f_3, 1), 20f, -1f);
		uParam0->f_51.f_11 = func_489(iVar2, func_488(uParam0->f_3), 1, iParam1, 8, 0, bVar1);
	}
}

int func_222()
{
	if (!func_490(Global_1395482->f_1))
	{
		return 0;
	}
	return func_491(Global_1395482->f_1, 32);
}

bool func_223(int iParam0)
{
	if (func_122(iParam0, 1))
	{
		return false;
	}
	return (1 == func_232(iParam0) || 2 == func_232(iParam0));
}

void func_224(var uParam0, vector3 vParam1, int iParam4, float fParam5)
{
	float fVar0;

	fParam5 = func_492(vParam1, fParam5);
	fVar0 = func_493(fParam5, iParam4);
	if (fVar0 < 1f)
	{
		GRAPHICS::_0x9DDC222D85D5AF2A(*uParam0, uParam0->f_3);
		GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(*uParam0, fVar0);
	}
}

void func_225(var uParam0, vector3 vParam1, int iParam4, float fParam5)
{
	float fVar0;
	float fVar1;
	float fVar2;
	var uVar3;

	fVar0 = (IntToFloat((MISC::GET_FRAME_COUNT() - uParam0->f_4)) / 150f);
	if (fVar0 >= 1f)
	{
		func_119(&(uParam0->f_1), 16);
		func_224(uParam0, vParam1, iParam4, fParam5);
		return;
	}
	else
	{
		fParam5 = func_492(vParam1, fParam5);
		fVar1 = func_493(fParam5, iParam4);
		uVar3 = func_494(uParam0->f_2, uParam0->f_3, fVar0);
		fVar2 = func_494(0f, fVar1, fVar0);
	}
	GRAPHICS::_0x9DDC222D85D5AF2A(*uParam0, uVar3);
	GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(*uParam0, fVar2);
}

var func_226(float fParam0)
{
	var uVar0;

	uVar0 = func_495(fParam0);
	return uVar0;
}

float func_227(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 3:
		case 4:
			return 300f;
		case 2:
			return 1000f;
		default:
			break;
	}
	return 300f;
}

var func_228(float fParam0)
{
	var uVar0;

	uVar0 = func_495(fParam0);
	return uVar0;
}

float func_229(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 25f;
		case 1:
			return 40f;
		case 3:
			return 200f;
		case 4:
			return 180f;
		case 2:
			return 150f;
		default:
			break;
	}
	return 128f;
}

float func_230(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1f;
		case 3:
			return 0.8f;
		case 4:
			return 0.5f;
		case 0:
			return 0.6f;
		case 2:
			return 0.9f;
		default:
			break;
	}
	return 1f;
}

float func_231(vector3 vParam0, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { func_496(0) };
	vVar3 = { func_497(vParam0 - CAM::GET_GAMEPLAY_CAM_COORD()) };
	if (bParam3)
	{
		return MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar3.x, vVar3.y, vVar0.x, vVar0.y));
	}
	return MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar3.x, vVar3.y, vVar0.x, vVar0.y);
}

int func_232(int iParam0)
{
	return (Global_17503.f_42[iParam0 /*8*/])->f_5;
}

int func_233(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_234(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return 1;
}

int func_234(int iParam0)
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

void func_235(int iParam0)
{
	iParam0 = func_498(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_499(iParam0, 32);
	func_500();
}

void func_236(int iParam0)
{
	int iVar0;

	iParam0 = func_498(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_237(iParam0);
	if (!SCRIPTS::_DOES_THREAD_EXIST(iVar0))
	{
		func_239(iParam0);
	}
	else if (!SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
	{
		func_239(iParam0);
	}
}

int func_237(int iParam0)
{
	iParam0 = func_498(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return ((*Global_1900383)[iParam0 /*45*/])->f_3;
}

int func_238(int iParam0)
{
	iParam0 = func_498(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return ((*Global_1900383)[iParam0 /*45*/])->f_2;
}

void func_239(int iParam0)
{
	iParam0 = func_498(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_2 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_3 = 0;
}

void func_240(int iParam0, int iParam1)
{
	func_501(119, iParam0, iParam1);
}

int func_241(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_502(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return (Global_17503.f_1003[iVar0 /*6*/])->f_1;
	}
	return 0;
}

bool func_242(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

bool func_243(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

int func_244(int iParam0, int iParam1)
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
	if (func_301(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_301(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_301(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_301(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_301(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_301(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_301(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_301(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_245(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam2)
	{
		MISC::_0xE98D55C5983F2509(iParam0);
	}
	if (!PED::GET_PED_CONFIG_FLAG(iParam0, 178, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 297, true) != bParam2)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 297, bParam2);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 315, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 331, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 331, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 130, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 301, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	}
	if (bParam2 && bParam3)
	{
		if (MISC::_0x870708A6E147A9AD(iParam0, "INTERACT_LOCKON", iParam1, 0, 0, 0, 0, 0, 0, -1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_246(int iParam0)
{
	int iVar0;

	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0);
	switch (iVar0)
	{
		case -1448293989:
			return 3;
		case 555364152:
			return 2;
		case -1996978098:
			return 0;
		case 1078461828:
			return 1;
		case -1535431934:
			return 4;
		case -1663301869:
			return 5;
		default:
			break;
	}
	return -1;
}

void func_247(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_0xA7E51B53309EAC97(*iParam0))
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
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
	}
	PED::DELETE_PED(iParam0);
}

void func_248(var uParam0)
{
	if (func_503(uParam0->f_162))
	{
		func_504(&(uParam0->f_162), 1, 1);
	}
	if (func_503(uParam0->f_163))
	{
		func_504(&(uParam0->f_163), 1, 1);
	}
	if (func_503(uParam0->f_164))
	{
		func_504(&(uParam0->f_164), 1, 1);
	}
	if (func_503(uParam0->f_165))
	{
		func_504(&(uParam0->f_165), 1, 1);
	}
}

void func_249(var uParam0)
{
	if (uParam0->f_170)
	{
		func_505();
	}
}

void func_250(var uParam0)
{
	if (uParam0->f_48 && !uParam0->f_45)
	{
		func_506(32);
		func_85(uParam0->f_3, 1, 0, 0, 2, 0, 0, 1);
	}
}

int func_251(var uParam0)
{
	if (func_507(uParam0) || uParam0->f_44)
	{
		uParam0->f_44 = 1;
		func_508(uParam0->f_3);
		func_461(uParam0, 0, 1);
		func_509(uParam0->f_3, uParam0->f_51.f_5, 0, uParam0->f_43, -1);
		func_510(0, 0);
		return 1;
	}
	return 0;
}

void func_252(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_79(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (VOLUME::_0xF6A8A652A6B186CD(iVar1))
		{
			vVar2 = { VOLUME::_0xC4019CF9AE8E931A(iVar1) };
			if (func_511(vVar2, vParam0, 2f, 1))
			{
				if (iParam3 == 0 || VOLUME::_0x769BB7626B8CDB06(vVar2, 2f, 0, iParam3, 16384))
				{
					VOLUME::_0xFDFECC6EE4491E11(iVar1);
					(*Global_1911670)[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

void func_253()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_254(int iParam0)
{
	if (!func_243(iParam0))
	{
		return true;
	}
	return (Global_17503.f_42[iParam0 /*8*/])->f_4 > 0;
}

char* func_255(char* sParam0)
{
	return sParam0;
}

Vector3 func_256(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 0)
	{
		return 0f, 0f, 0f;
	}
	if (!func_243(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (func_512(iParam0) == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = (func_513(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return 0f, 0f, 0f;
	}
	return *(Global_1310750->f_13358[iVar0 /*3*/]);
}

void func_257(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	var uVar4;

	if (func_122(iParam0, 32))
	{
		if (func_514(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { func_515(Global_35, &(uParam1->f_12)) };
				if (!func_79(vVar1))
				{
					*uParam1 = { vVar1 };
				}
			}
		}
	}
	if (bParam2)
	{
		func_516(uParam1, bParam2);
	}
	if (bParam3)
	{
		uVar4 = func_486(iParam0);
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(*uParam1, 0f, 0f, 0f, uVar4, uVar4, uVar4, func_487());
		if (func_517(Global_1310750[iParam0 /*111*/], 33554432))
		{
			func_489(iVar0, func_488(iParam0), 1, 0, 2, 0, -1082130432 /* Float: -1f */);
		}
		else
		{
			func_489(iVar0, func_488(iParam0), 1, 0, 8, 0, -1082130432 /* Float: -1f */);
		}
		if (func_122(iParam0, 1))
		{
			func_518(*uParam1 + Vector(1f, 0f, 0f), 25f, "Beat Inner", 1, 0, 32, 0, -1082130432 /* Float: -1f */);
		}
	}
	func_519(iParam0);
}

int func_258(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;

	*uParam1 = TASK::_0x74F0209674864CBD();
	if (!TASK::_0x1AC5A8AB50CFAA33(*uParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((((*Global_1310750)[iParam0 /*111*/])->f_4.f_4[iVar0 /*3*/])->f_1 != -1)
		{
			func_520(uParam1, *(((*Global_1310750)[iParam0 /*111*/])->f_4.f_4[iVar0 /*3*/]));
		}
		iVar0++;
	}
	if (func_216(iParam0, 16))
	{
		TASK::_0xB8E3486D107F4194(*uParam1, 55f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 180f);
		fVar2 = BUILTIN::TO_FLOAT(func_521(iParam0));
		fVar1 = 60f;
	}
	else
	{
		TASK::_0x65D281985F2BDFC2(*uParam1, 35f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 65f);
		fVar2 = BUILTIN::TO_FLOAT(func_521(iParam0));
		fVar1 = 60f;
	}
	TASK::_0x9B6A58FDB0024F12(*uParam1, 35f);
	TASK::_0x954451EA2D2120FB(*uParam1, fVar2);
	TASK::_0x0F4F6C4CE471259D(*uParam1, (fVar2 + fVar1));
	TASK::_0x4A7D73989F52EB37(*uParam1, (fVar2 + 10f));
	TASK::_0x8F8C84363810691A(*uParam1, 7f);
	TASK::_0x2B8AF29A78024BD3(*uParam1);
	return 1;
}

void func_259(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	switch (func_522(iParam0))
	{
		case 0:
			if (bParam4)
			{
				*fParam1 = 225f;
				*fParam2 = 6400f;
			}
			else
			{
				*fParam1 = 225f;
				*fParam2 = 4900f;
			}
			*iParam3 = 2500;
			break;
		case 1:
			if (!func_122(iParam0, 1))
			{
				if (func_216(iParam0, 2))
				{
				}
			}
			func_523(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 2:
			func_524(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 3:
			func_524(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = 7f;
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		default:
			break;
	}
	if (func_223(iParam0))
	{
		*fParam2 = 40000f;
	}
}

Vector3 func_260(bool bParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	float fVar8;

	fVar7 = 999999.9f;
	fVar8 = 0f;
	*bParam0 = 1;
	iVar0 = 0;
	while (iVar0 < func_512(iParam1))
	{
		if (!func_525(iParam1, iVar0))
		{
			vVar4 = { func_256(iParam1, iVar0) };
			if (!func_79(vVar4))
			{
				fVar8 = BUILTIN::VDIST(Global_36, vVar4);
				if (func_265(fVar8, iParam1))
				{
					*bParam0 = 0;
				}
				if (fVar8 < fVar7)
				{
					if (func_526(iParam1, vVar4, uParam2, uParam3))
					{
						fVar7 = BUILTIN::VDIST(Global_36, vVar4);
						vVar1 = { vVar4 };
					}
				}
			}
		}
		iVar0++;
	}
	if (!func_79(vVar4))
	{
	}
	return vVar1;
}

int func_261(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5)
{
	if (uParam0->f_8 >= iParam4)
	{
		if (bParam3)
		{
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			func_28("BEAT_FAIL", 5000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam2 = 1;
	}
	*uParam1 = iParam5;
	uParam0->f_8++;
	return 0;
}

int func_262(int iParam0, vector3 vParam1)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	while (iVar0 < func_512(iParam0))
	{
		vVar1 = { func_256(iParam0, iVar0) };
		if (func_511(vVar1, vParam1, 1056964608 /* Float: 0.5f */, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_263(var uParam0)
{
	int iVar0;

	if (uParam0->f_7 == 0)
	{
		uParam0->f_7 = GRAPHICS::CREATE_TRACKED_POINT();
		if (uParam0->f_7 == 0)
		{
		}
		GRAPHICS::SET_TRACKED_POINT_INFO(uParam0->f_7, *uParam0, 4f);
	}
	else
	{
		iVar0 = GRAPHICS::_0xDFE332A5DA6FE7C9(uParam0->f_7);
		if (iVar0 == -1)
		{
			return 0;
		}
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_264(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;

	vVar2 = { *uParam0 };
	func_527(Global_35, *uParam0, &(uParam0->f_37), 1061158912 /* Float: 0.75f */, 0, 0);
	if (func_528(&(uParam0->f_37), 500))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!func_79(*(uParam0->f_12[iVar0 /*3*/])))
			{
				vVar5 = { *(uParam0->f_12[iVar0 /*3*/]) };
				vVar8 = { MISC::_0x83ACC65D9ACEC5EF(Global_36, vVar2, vVar5, true) };
				if (BUILTIN::VDIST2(Global_36, vVar8) <= (35f * 35f) || BUILTIN::VDIST2(Global_36, *(uParam0->f_12[iVar0 /*3*/])) <= (80f * 80f))
				{
					if (bParam4)
					{
						iVar1 = func_529(uParam0);
						if (iVar1 > -1 && iVar1 < 8)
						{
							*uParam0 = { *(uParam0->f_12[iVar1 /*3*/]) };
						}
					}
					uParam0->f_8 = 0;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return func_261(uParam0, uParam1, uParam2, bParam3, 16, 1000);
}

int func_265(float fParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;

	fVar3 = (fParam0 * fParam0);
	func_259(iParam1, &fVar0, &fVar1, &uVar2, 1);
	if (fVar3 > fVar1)
	{
		return 0;
	}
	if (func_122(iParam1, 1))
	{
		if (fVar3 < fVar0)
		{
			return 0;
		}
	}
	return 1;
}

int func_266(var uParam0, bool bParam1)
{
	*bParam1 = 0;
	if (TASK::_0x0365000D8BF86531(&(uParam0->f_10)) == 4)
	{
		*bParam1 = 1;
	}
	else if (TASK::_0x0365000D8BF86531(&(uParam0->f_10)) == 3)
	{
		*uParam0 = { TASK::_0x865732725536EE39(&(uParam0->f_10)) };
		return 1;
	}
	return 0;
}

int func_267(int iParam0, var uParam1, var uParam2, struct<7> Param3, bool bParam10)
{
	if (func_530(iParam0, *uParam2))
	{
		return 0;
	}
	if (!func_531(iParam0, uParam2))
	{
		return 0;
	}
	if (!func_532(Param3))
	{
		return 0;
	}
	if (bParam10)
	{
		if (!func_533(*uParam2, Global_35))
		{
			return 0;
		}
	}
	return 1;
}

int func_268(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 106:
			switch (iParam1)
			{
				case 1:
					*uParam2 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(*uParam2, -771.7f, -1343.6f, 43.9f, 0f, 0f, 0f, 95f, 140f, 50f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -852.4f, -1349.5f, 45f, 5f, 0f, 0f, 70f, 130f, 50f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -907.6f, -1362.1f, 49f, 0f, 0f, 0f, 50f, 100f, 50f);
					return 1;
				case 2:
					*uParam2 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(*uParam2, -270.606f, 827.282f, 118.4249f, 0f, 0f, 11.275f, 80f, 100.4f, 86.6f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -235.442f, 653.1498f, 112.3099f, 0f, 0f, 49.575f, 44.4f, 76.775f, 50f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -236.9004f, 797.5648f, 121.6383f, 0f, 0f, 17.55f, 53.975f, 105.5f, 20f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -339.8f, 829.675f, 100f, 0f, 0f, 14.975f, 25f, 75f, 50f);
					return 1;
			}
			break;
	}
	return 0;
}

void func_269(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_270(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 0);
	if (bParam3)
	{
		func_118(&iParam1, 8192);
	}
	if (bParam4)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, iParam0);
	}
}

int func_271(int iParam0)
{
	if (!func_534(iParam0))
	{
		return 0;
	}
	return func_535(iParam0, 4, 1);
}

int func_272(int iParam0)
{
	if (!func_534(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 2:
			return -1080874779 /* GXTEntry: "Special Health Cure" */;
		case 3:
			return -755485480 /* GXTEntry: "Potent Health Cure" */;
		case 6:
			return 747460826 /* GXTEntry: "Special Horse Stimulant" */;
		case 7:
			return 1627068364 /* GXTEntry: "Horse Reviver" */;
		case 13:
			return -1067476102 /* GXTEntry: "Potent Bitters" */;
		case 15:
			return -1080874779 /* GXTEntry: "Special Health Cure" */;
		case 18:
			return -801397594 /* GXTEntry: "Potent Horse Stimulant" */;
		case 19:
			return 730856618 /* GXTEntry: "Potent Miracle Tonic" */;
		case 20:
			return -486559882 /* GXTEntry: "Potent Snake Oil" */;
		case 23:
			return -1976480343 /* GXTEntry: "Special Miracle Tonic" */;
		case 26:
			return 1895068170 /* GXTEntry: "Cover Scent Lotion" */;
		case 29:
			return -1067476102 /* GXTEntry: "Potent Bitters" */;
		case 34:
			return 1566032147 /* GXTEntry: "Special Bitters" */;
		case 38:
			return 2036955137 /* GXTEntry: "Potent Herbivore Bait" */;
		case 40:
			return 1566032147 /* GXTEntry: "Special Bitters" */;
		case 43:
			return -755485480 /* GXTEntry: "Potent Health Cure" */;
	}
	return 0;
}

int func_273(int iParam0)
{
	int iVar0;
	struct<37> Var1;
	int iVar48;

	iVar0 = ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(iParam0);
	Var1.f_4 = 15;
	Var1.f_36 = 10;
	iVar48 = 0;
	while (iVar48 < iVar0)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COST(iParam0, iVar48, &Var1))
		{
			if (Var1.f_2 == 1644203656 && !func_536(iParam0, Var1, 1))
			{
				return 1;
			}
		}
		iVar48++;
	}
	return 0;
}

int func_274(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_537(&iVar1, -2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 > 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

int func_275()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_276(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (func_90() != -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0 /*1157*/];
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && iParam0 == iVar1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_277(var uParam0)
{
	if (*uParam0 != 0)
	{
		STREAMING::REQUEST_MODEL(*uParam0, false);
	}
}

int func_278(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_279(bool bParam0)
{
	vector3 vVar0;

	if (!func_278(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_280(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_278(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_279(bParam0);
	if (iVar0 == joaat("weapon") && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(bParam0);
	}
	else if (iVar0 == joaat("ammo") && WEAPON::_0x1F7977C9101F807F(bParam0))
	{
		return bParam0;
	}
	if (func_538(bParam0, 1399091007))
	{
		func_539(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_281(bool bParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_540(bParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_542(&Var0, func_541(0));
	}
	if (!func_543(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_544(iVar14);
	return uVar15;
}

int func_282(bool bParam0)
{
	if (func_90() == -1)
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

int func_283(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_278(bParam0, 0))
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		return 0;
	}
	iVar0 = func_280(bParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_545("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_546(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_362(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_544(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_544(iVar1);
	}
	return 0;
}

int func_284(int iParam0)
{
	if (iParam0 != 0)
	{
		if (!STREAMING::HAS_MODEL_LOADED(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

char* func_285(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

char* func_286(int iParam0)
{
	switch (iParam0)
	{
		case 43:
			return "script@beat@wilderness@herbalistcamp@herbalistYarrowReturn";
		case 18:
			return "script@beat@wilderness@herbalistcamp@herbalistGcurrantReturn";
		case 40:
			return "script@beat@wilderness@herbalistcamp@herbalistVsnowdropReturn";
		case 19:
			return "script@beat@wilderness@herbalistcamp@herbalistHBSageReturn";
		default:
			break;
	}
	return "INVALID";
}

char* func_287(int iParam0)
{
	switch (iParam0)
	{
		case 43:
			return "script@beat@wilderness@herbalistcamp@herbalistInitialYarrow";
		case 18:
			return "script@beat@wilderness@herbalistcamp@herbalistInitialGcurrant";
		case 40:
			return "script@beat@wilderness@herbalistcamp@herbalistInitialVsnowdrop";
		case 19:
			return "script@beat@wilderness@herbalistcamp@herbalistInitialHBSage";
		default:
			break;
	}
	return "INVALID";
}

int func_288(var uParam0, var uParam1)
{
	vector3 vVar0;

	vVar0 = { *uParam0 };
	if (func_547(&uParam1))
	{
		return 1;
	}
	if (!func_548(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 };
	return 1;
}

int func_289(var uParam0)
{
	if (uParam0->f_3 != 41788943)
	{
		if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
		{
			if (PED::_0x610438375E5D1801(uParam0->f_5))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_290(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_549(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_291(int iParam0)
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
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return PED::_0x772A1969F649E902(iVar0);
}

void func_292(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_98(iParam0, 0, 0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
		AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
	}
}

bool func_293(var uParam0)
{
	return func_301(*uParam0, 4);
}

bool func_294(var uParam0)
{
	return func_301(*uParam0, 64);
}

bool func_295(var uParam0)
{
	return func_301(*uParam0, 8);
}

void func_296(int iParam0, bool bParam1, bool bParam2)
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

bool func_297(var uParam0)
{
	return func_301(*uParam0, 128);
}

bool func_298(var uParam0)
{
	return func_301(*uParam0, 2048);
}

void func_299(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam1);
}

bool func_300(var uParam0)
{
	return func_301(*uParam0, 1024);
}

bool func_301(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_302(var uParam0)
{
	return func_301(*uParam0, 256);
}

void func_303(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 146, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 148, !bParam1);
}

bool func_304(var uParam0)
{
	return func_301(*uParam0, 512);
}

bool func_305(var uParam0)
{
	return func_301(*uParam0, 4096);
}

int func_306(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 0;
				case 3:
					return 0;
				case 4:
					return 0;
				case 5:
					return 0;
				case 6:
					return 0;
				case 7:
					return 0;
				case 8:
					return 0;
				case 9:
					return 0;
				case 10:
					return 0;
				case 11:
					return 0;
				case 12:
					return 0;
				case 13:
					return 0;
				case 14:
					return 0;
				case 15:
					return 0;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 0;
				case 3:
					return 0;
				default:
					break;
			}
			break;
	}
	return 0;
}

Vector3 func_307(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -1369.092f, 112.5304f, 83.7997f;
				case 1:
					return -1419.432f, -1519.578f, 85.4243f;
				case 2:
					return 2696.483f, 281.4122f, 60.5879f;
				case 3:
					return 887.6382f, 1265.848f, 234.0708f;
				case 4:
					return 1212.406f, 731.8035f, 100.6271f;
				case 5:
					return 1073.291f, 47.2678f, 85.9555f;
				case 6:
					return 2524.885f, 1704.788f, 86.7904f;
				case 7:
					return 2327.495f, 1822.98f, 122.7985f;
				case 8:
					return 2333.665f, 348.8242f, 55.0387f;
				case 9:
					return 1173.026f, -2168.264f, 54.2849f;
				case 10:
					return 1568.686f, -198.235f, 79.6169f;
				case 11:
					return 818.8927f, -1431.735f, 52.9105f;
				case 12:
					return 913.5112f, -560.4623f, 89.0854f;
				case 13:
					return -2249.065f, -1559.684f, 148.8786f;
				case 14:
					return -2433.508f, -1344.774f, 152.7462f;
				case 15:
					return -2063.969f, -1288.022f, 117.0141f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -1576.12f, -1671.869f, 78.1639f;
				case 1:
					return 705.653f, 1890.997f, 238.597f;
				case 2:
					return -4486.521f, -2936.634f, -17.8423f;
				case 3:
					return 567.0672f, 174.5635f, 133.2414f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_308(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 299.52f;
				case 1:
					return 0f, 0f, 275.76f;
				case 2:
					return 0f, 0f, -275.04f;
				case 3:
					return 0f, 0f, -70.56f;
				case 4:
					return 0f, 0f, 175.68f;
				case 5:
					return 0f, 0f, 252.72f;
				case 6:
					return 0f, 0f, 105.84f;
				case 7:
					return 0f, 0f, 190.8f;
				case 8:
					return 0f, 0f, 230.4f;
				case 9:
					return 0f, 0f, 207.36f;
				case 10:
					return 0f, 0f, 4.32f;
				case 11:
					return 0f, 0f, -221.76f;
				case 12:
					return 0f, 0f, 241.92f;
				case 13:
					return 0f, 0f, 301.68f;
				case 14:
					return 0f, 0f, 74.88f;
				case 15:
					return 0f, 0f, 257.76f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -171.36f;
				case 1:
					return 0f, 0f, -99.36f;
				case 2:
					return 0f, 0f, 1f;
				case 3:
					return 0f, 0f, -191.52f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_309(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 0;
				case 3:
					return 0;
				case 4:
					return 0;
				case 5:
					return 0;
				case 6:
					return 0;
				case 7:
					return 0;
				case 8:
					return 0;
				case 9:
					return 0;
				case 10:
					return 0;
				case 11:
					return 0;
				case 12:
					return 0;
				case 13:
					return 0;
				case 14:
					return 0;
				case 15:
					return 0;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 0;
				case 3:
					return 0;
				default:
					break;
			}
			break;
	}
	return 0;
}

Vector3 func_310(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -1375.984f, 108.9796f, 83.7018f;
				case 1:
					return -1408.55f, -1522.986f, 85.1073f;
				case 2:
					return 2696.87f, 278.6988f, 60.5321f;
				case 3:
					return 885.0094f, 1265.08f, 233.7076f;
				case 4:
					return 1211.431f, 719.9561f, 100.3598f;
				case 5:
					return 1071.506f, 51.3335f, 85.8447f;
				case 6:
					return 2516.969f, 1703.515f, 86.3327f;
				case 7:
					return 2325.517f, 1819.271f, 122.1497f;
				case 8:
					return 2331.519f, 360.0928f, 55.4513f;
				case 9:
					return 1171.611f, -2183.105f, 53.9324f;
				case 10:
					return 1571.554f, -199.0512f, 79.4281f;
				case 11:
					return 822.4827f, -1425.274f, 52.6888f;
				case 12:
					return 917.1799f, -565.3954f, 88.9516f;
				case 13:
					return -2250.794f, -1556.735f, 148.8041f;
				case 14:
					return -2424.391f, -1341.52f, 152.5463f;
				case 15:
					return -2063.463f, -1296.856f, 116.1337f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -1574.672f, -1663.685f, 77.9852f;
				case 1:
					return 717.2708f, 1880.057f, 238.5362f;
				case 2:
					return -4477.402f, -2941.413f, -19.301f;
				case 3:
					return 564.3894f, 172.728f, 133.1894f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_311(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -11.52f;
				case 1:
					return 0f, 0f, 30.96f;
				case 2:
					return 9.7f, -1.1f, 115.515f;
				case 3:
					return 0f, -4.9f, 5.76f;
				case 4:
					return 0f, 0f, 8.64f;
				case 5:
					return 0f, 0f, 137.52f;
				case 6:
					return 0f, 0f, 210.96f;
				case 7:
					return 6.05f, 0f, -5.325f;
				case 8:
					return 0f, 0f, -131.04f;
				case 9:
					return 0f, 0f, 249.84f;
				case 10:
					return 0f, 0f, -90.44f;
				case 11:
					return 0f, 0f, -12.96f;
				case 12:
					return 0f, 0f, -5.76f;
				case 13:
					return 0f, 4.7f, -130.32f;
				case 14:
					return 0f, 0f, 133.92f;
				case 15:
					return 0f, 0f, 337.68f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 208.08f;
				case 1:
					return 0.4f, 0f, 11.52f;
				case 2:
					return 0f, 0f, 128.16f;
				case 3:
					return 0f, 0f, 56.16f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_312(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_36580[iVar0 /*2*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_313(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_36580[iVar0 /*2*/] == iParam0)
		{
			return (Global_36580[Global_36601 /*2*/])->f_1;
		}
		iVar0++;
	}
	return 3;
}

void func_314(var uParam0, vector3 vParam1, float fParam4)
{
	int iVar0;

	iVar0 = 258;
	func_550(uParam0, vParam1, fParam4, 1, iVar0, 0);
}

void func_315(var uParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6)
{
	int iVar0;

	iVar0 = 61;
	if (bParam6)
	{
		iVar0 |= 2 | 256;
	}
	func_550(uParam0, vParam1, fParam4, 1, iVar0, 0);
}

void func_316(var uParam0, vector3 vParam1, float fParam4)
{
	int iVar0;

	iVar0 = 258;
	func_550(uParam0, vParam1, fParam4, 2, iVar0, 0);
}

void func_317(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = 258;
	func_551(uParam0, 1, iVar0, uParam1, iParam2);
}

void func_318(var uParam0, var uParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = 61;
	if (bParam2)
	{
		iVar0 |= 2 | 256;
	}
	func_551(uParam0, 1, iVar0, uParam1, iParam3);
}

void func_319(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = 258;
	func_551(uParam0, 2, iVar0, uParam1, iParam2);
}

int func_320(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam1->f_5)
	{
		func_552(iParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		iParam1->f_12 = fParam3;
	}
	else
	{
		iParam1->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, false, false));
	}
	if (!Global_1935630->f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!iParam1->f_1 & 2 != 0)
			{
				if (func_553(iParam1, 4000))
				{
					if ((func_554(iParam0, Global_1935630->f_41, *iParam1 & 128 != 0, 0, *iParam1 & 256 != 0) && func_555(iParam1, iParam0)) && func_556(iParam1, iParam0))
					{
						func_557();
						*iParam2 = 2;
						func_558(iParam0, iParam1, *iParam2);
						return 1;
					}
				}
			}
		}
		if (!iParam1->f_1 & 2 != 0)
		{
			if (iParam1->f_12 < 4f)
			{
				if (func_553(iParam1, 4000))
				{
					if ((func_554(iParam0, Global_1935630->f_41, *iParam1 & 128 != 0, 1, *iParam1 & 256 != 0) && func_555(iParam1, iParam0)) && func_556(iParam1, iParam0))
					{
						func_557();
						*iParam2 = 2;
						func_558(iParam0, iParam1, *iParam2);
						return 1;
					}
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*iParam1 & 131072 == 0)
						{
							if (func_559(iParam0, Global_1935630->f_41))
							{
								func_557();
								*iParam2 = 2;
								func_558(iParam0, iParam1, *iParam2);
								return 1;
							}
						}
					}
				}
			}
			else if (Global_1935630->f_41 != 0)
			{
				if (Global_1935630->f_40 == 0)
				{
					if (*iParam1 & 131072 == 0)
					{
						if (func_559(iParam0, Global_1935630->f_41))
						{
							func_557();
							*iParam2 = 2;
							func_558(iParam0, iParam1, *iParam2);
							return 1;
						}
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*iParam1 & 131072 == 0)
				{
					if (func_560())
					{
						if (func_559(iParam0, Global_1935630->f_42))
						{
							func_557();
							*iParam2 = 2;
							func_558(iParam0, iParam1, *iParam2);
							return 1;
						}
					}
				}
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_561(iParam1, 1065353216 /* Float: 1f */))
			{
				if (!iParam1->f_1 & 4 != 0)
				{
					if (func_562(Global_35, iParam0, iParam1))
					{
						func_557();
						*iParam2 = 4;
						func_558(iParam0, iParam1, *iParam2);
						return 1;
					}
				}
				if (!iParam1->f_1 & 256 != 0)
				{
					if (func_563(Global_35, iParam0, iParam1))
					{
						func_557();
						*iParam2 = 256;
						func_558(iParam0, iParam1, *iParam2);
						return 1;
					}
				}
			}
		}
		if (!iParam1->f_1 & 131072 != 0)
		{
			if (func_564(iParam0, iParam1))
			{
				func_557();
				*iParam2 = 131072;
				func_558(iParam0, iParam1, *iParam2);
				return 1;
			}
		}
		if (*iParam1 & 4 != 0)
		{
			if (func_565(iParam0, iParam1))
			{
				func_557();
				*iParam2 = 262144;
				func_558(iParam0, iParam1, *iParam2);
				return 1;
			}
		}
	}
	return 0;
}

int func_321(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (!func_13(iParam0, 11))
	{
		bVar1 = func_566(iParam0);
		if (func_567(iParam0->f_7, 0, iParam1, &iVar0, 1, 0) || bVar1)
		{
			if (!bVar1 && iVar0 == 256)
			{
				if (!func_208(Global_35, iParam0->f_7, 7f, 1))
				{
					if (EVENT::_0xC6A7DC546E94FED5(iParam0->f_7, joaat("event_shot_fired_whizzed_by"), 0, 0) > -1 || EVENT::_0xC6A7DC546E94FED5(iParam0->f_7, joaat("event_shot_fired_bullet_impact"), 0, 0) > -1)
					{
					}
					else
					{
						return 0;
					}
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_7))
			{
				func_175(&(iParam0->f_9));
				bVar2 = false;
				if (func_13(iParam0, 12))
				{
					if (iParam0->f_1 == 3 && !func_13(iParam0, 15))
					{
						bVar2 = true;
					}
				}
				if (ENTITY::IS_ENTITY_DEAD(iParam0->f_7))
				{
					if (bVar2)
					{
						func_568(4, 1142025875 /* GXTEntry: "Murder" */, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
					}
					else
					{
						func_568(3, 1142025875 /* GXTEntry: "Murder" */, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
					}
				}
				else if (bVar2)
				{
					func_568(4, 1877013492 /* GXTEntry: "Frighten" */, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				}
				else
				{
					func_568(3, 1877013492 /* GXTEntry: "Frighten" */, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				}
				TASK::CLEAR_PED_SECONDARY_TASK(iParam0->f_7);
				AUDIO::STOP_CURRENT_PLAYING_SPEECH(iParam0->f_7, 0);
				func_428(iParam0);
				func_426(&(iParam0->f_284));
				func_569(&(iParam0->f_7));
				func_570(&(iParam0->f_7), &(iParam0->f_284), &(iParam0->f_284.f_21), 1, 1);
				func_185(iParam0, 3, 3);
				if (!iParam0->f_221)
				{
					if (!func_571(iVar0, 1024))
					{
						iParam0->f_221 = 1;
					}
				}
				else
				{
					iParam0->f_221 = 0;
				}
				iParam0->f_1 = 9;
			}
			else
			{
				iParam0->f_1 = 11;
			}
			func_425(iParam0);
			func_72(iParam0, 11);
			return 1;
		}
	}
	return 0;
}

int func_322(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

void func_323(int iParam0, int iParam1)
{
	func_175(&(iParam0->f_9));
	func_174(iParam0, 262144);
	func_426(&(iParam0->f_284));
	func_569(&(iParam0->f_7));
	func_570(&(iParam0->f_7), &(iParam0->f_284), &(iParam0->f_284.f_21), 1, 1);
	TASK::_TASK_SMART_FLEE_STYLE_PED(iParam0->f_7, Global_35, 3, 0, -1082130432, -1, iParam0->f_434.f_5);
	PED::SET_PED_KEEP_TASK(iParam0->f_7, true);
}

int func_324()
{
	if (func_16())
	{
		if (!func_17(5))
		{
			return 1;
		}
	}
	return 0;
}

void func_325(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			func_572(iParam0, Global_35, 2, 28, bParam2);
			func_572(iParam0, Global_35, 2, 29, bParam2);
		}
		else
		{
			func_572(iParam0, Global_35, 0, 9, bParam2);
			func_572(iParam0, Global_35, 0, 14, bParam2);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, -469521200) && !bParam2)
		{
			bVar0 = func_16();
			if (bParam3)
			{
				if (!bVar0)
				{
					func_206(iParam0, Global_35, "RE_HEC_UNI_V1_CALLOVER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					func_206(iParam0, Global_35, "RE_HEC_UNI_V1_CALLOVER_INTRO", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
			}
			else if (!bParam4)
			{
				func_206(iParam0, Global_35, "RE_HEC_UNI_V1_CALLOVER_2ND", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				func_206(iParam0, Global_35, "RE_HEC_UNI_V1_CALLOVER_LEFT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
		}
		func_572(iParam0, Global_35, 0, 3, 0);
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
		{
			func_572(iParam0, Global_35, 1, 20, 0);
		}
		else
		{
			func_572(iParam0, Global_35, 1, 21, 0);
		}
		func_572(iParam0, Global_35, 6, 53, 0);
		func_572(iParam0, Global_35, 6, 54, 0);
		func_572(iParam0, Global_35, 6, 51, 0);
		func_572(iParam0, Global_35, 6, 52, 0);
		func_572(iParam0, Global_35, 6, 55, 0);
		func_572(iParam0, Global_35, 6, 56, 0);
		func_572(iParam0, Global_35, 4, 41, 0);
		func_572(iParam0, Global_35, 4, 42, 0);
		func_572(iParam0, Global_35, 4, 39, 0);
		func_572(iParam0, Global_35, 4, 40, 0);
		func_572(iParam0, Global_35, 4, 43, 0);
		func_572(iParam0, Global_35, 4, 44, 0);
		func_572(iParam0, Global_35, 3, 35, 0);
		func_572(iParam0, Global_35, 3, 36, 0);
		func_572(iParam0, Global_35, 3, 33, 0);
		func_572(iParam0, Global_35, 3, 34, 0);
		func_572(iParam0, Global_35, 3, 37, 0);
		func_572(iParam0, Global_35, 3, 38, 0);
		func_572(iParam0, Global_35, 5, 47, 0);
		func_572(iParam0, Global_35, 5, 48, 0);
		func_572(iParam0, Global_35, 5, 45, 0);
		func_572(iParam0, Global_35, 5, 46, 0);
		func_572(iParam0, Global_35, 5, 49, 0);
		func_572(iParam0, Global_35, 5, 50, 0);
	}
}

void func_326(int* iParam0)
{
	func_360(iParam0, 9);
}

int func_327(int* iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_573(3, 0, 0);
	func_118(&iVar0, 8);
	if (bParam2)
	{
		func_119(&iVar0, 16);
	}
	iVar1 = -1;
	if (!func_301(iParam0->f_73, 4))
	{
		iVar1 = func_574(uParam1, iParam0, 15f, &(iParam0->f_21), &(iParam0->f_74), 0, 1, 0, 0, iVar0, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	}
	if (iVar1 > -1)
	{
		if (iVar1 == 0)
		{
			if (!func_301(iParam0->f_73, 1))
			{
				if (func_301(iParam0->f_73, 1))
				{
					func_575(&(iParam0->f_73), 2);
				}
			}
		}
		func_328(iParam0, 0);
		(iParam0->f_21[iVar1 /*17*/])->f_13 = "";
	}
	return iVar1;
}

void func_328(int* iParam0, bool bParam1)
{
	func_576(&(iParam0->f_21), bParam1, 0);
}

void func_329(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (func_577(iParam0))
	{
		func_578(iParam0, uParam1);
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (iVar0 > iParam0->f_523)
			{
				if (func_345(iParam0, iVar0))
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar1 != 0)
		{
			if (!func_330(iParam0, 0))
			{
				func_579(iParam0, iVar1);
			}
			else
			{
				func_580(iParam0, iVar1);
			}
		}
	}
}

int func_330(int iParam0, bool bParam1)
{
	if (bParam1 && !func_577(iParam0))
	{
		return 0;
	}
	return func_13(iParam0, 41);
}

void func_331(int iParam0)
{
	struct<23> Var0;

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
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		func_581(&Var0, Global_35, 0, 0, 1, 1, 2, 1, 0, 0, 0, 0);
		_NAMESPACE29::_0x66F9EB44342BB4C5(iParam0, &Var0);
	}
}

void func_332(var uParam0, int iParam1, bool bParam2)
{
	func_359(uParam0->f_21[iParam1 /*17*/], bParam2, 0);
}

bool func_333(var uParam0)
{
	return func_582(*uParam0, 1);
}

void func_334(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_335(int iParam0, var uParam1, var uParam2)
{
	return func_583(iParam0, uParam1);
}

void func_336(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
			func_185(iParam0, 2, 2);
			break;
		case 3:
			func_185(iParam0, 3, 2);
			break;
		case 4:
			func_185(iParam0, 1, 1);
			break;
	}
}

bool func_337(int iParam0, var uParam1, var uParam2)
{
	return func_584(iParam0, uParam1);
}

int func_338(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
			return iParam0->f_525;
		case 3:
			return iParam0->f_526;
		case 1:
			return iParam0->f_219;
		case 5:
			return iParam0->f_527;
		case 6:
			return iParam0->f_528;
		default:
			break;
	}
	return 0;
}

int func_339(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 1;
				case 2:
					return 3;
				default:
					break;
			}
			return 5;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1;
				case 1:
					return 3;
				default:
					break;
			}
			return 5;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 3;
				case 1:
					return 3;
				case 2:
					return 3;
				default:
					break;
			}
			return 5;
		case 5:
			return 1;
		case 6:
			switch (iParam1)
			{
				case 1:
					return 4;
				default:
					break;
			}
			return 3;
		case 7:
			return 4;
		case 4:
			return 2;
	}
	return 0;
}

int func_340(int iParam0, var uParam1, int iParam2)
{
	bool bVar0;

	bVar0 = false;
	switch (func_585(iParam0, uParam1, iParam2, iParam0->f_529))
	{
		case 4:
			switch (iParam2)
			{
				case 5:
					func_72(iParam0, 51);
					break;
				case 6:
					func_72(iParam0, 53);
					break;
				case 7:
					func_72(iParam0, 55);
					break;
			}
			return 1;
		case 1:
			if (iParam2 == 5)
			{
				bVar0 = func_13(iParam0, 67);
			}
			func_206(iParam0->f_7, Global_35, func_586(iParam2, func_338(iParam0, iParam2), bVar0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_587(iParam0, iParam2);
			break;
		case 2:
			iParam0->f_524 = 0;
			break;
		case 5:
			func_72(iParam0, 44);
			break;
	}
	return 0;
}

void func_341(var uParam0)
{
	func_588(uParam0, 0f);
}

float func_342(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 3f;
		case 3:
			return 3f;
		case 1:
			return 3f;
		case 5:
			return 3f;
		case 6:
			return 3f;
		case 7:
			return 3f;
		case 4:
			return 3f;
		default:
			break;
	}
	return 1f;
}

int func_343(var uParam0, float fParam1)
{
	if (!func_333(uParam0))
	{
		return 0;
	}
	if (func_589(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

int func_344(int iParam0)
{
	if (iParam0->f_523 != 1)
	{
		if (func_345(iParam0, 1))
		{
			if (!func_345(iParam0, iParam0->f_523))
			{
				if (!func_205(iParam0->f_7, 0))
				{
					if (!func_333(&(iParam0->f_496)) || func_343(&(iParam0->f_496), 1.5f))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_345(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(iParam0->f_511, iParam1);
}

int func_346(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	bool bVar1;

	bVar1 = func_13(iParam0, 47);
	if (!bVar1 && PED::_0x9C54041BB66BCF9E(iParam0->f_7, iParam0->f_87))
	{
		if (iParam0->f_514)
		{
			if (!TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 1))
			{
				func_423(iParam0, -1f);
			}
			else if (TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 0))
			{
				return 1;
			}
		}
		else
		{
			if (TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 1))
			{
				func_590(iParam0);
			}
			return 1;
		}
	}
	else if (func_591(iParam0))
	{
		iParam0->f_512 = -1;
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, BUILTIN::FLOOR(((6f * 0.5f) * 1000f)), -1082130432, -1082130432, -1082130432);
		iParam0->f_512++;
		if (!bVar1)
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, TASK::_GET_SCENARIO_POINT_COORDS(iParam0->f_87, 1), 1f, -1, 3f, false, TASK::_GET_SCENARIO_POINT_HEADING(iParam0->f_87, 1));
		}
		if (func_322(iParam0->f_7, 0, 1, 0) != joaat("weapon_unarmed"))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(iParam0->f_7, joaat("weapon_unarmed"), false, 0, false, false);
			TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
		}
		if (func_13(iParam0, 47))
		{
			TASK::TASK_WANDER_IN_AREA(0, func_9(uParam1), 5f, 1077936128, 1086324736, 1);
		}
		else
		{
			TASK::_TASK_USE_SCENARIO_POINT(0, iParam0->f_87, func_170(2093245709), -1, true, false, 0, 0, -1f, 0);
		}
		func_171(iParam0->f_7, &iVar0, 0, 0, 1, 1);
		if (func_333(&(iParam0->f_502)))
		{
			func_341(&(iParam0->f_502));
		}
		iParam0->f_519 = 1;
	}
	else if (bVar1)
	{
		if (func_169(iParam0->f_7, 242628503))
		{
			if (TASK::GET_SEQUENCE_PROGRESS(iParam0->f_7) > iParam0->f_512)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_347(int iParam0)
{
	if (func_13(iParam0, 63))
	{
		func_592(iParam0->f_284.f_97[0 /*17*/], iParam0->f_284.f_21[0 /*17*/], 1);
		func_73(iParam0, 63);
	}
}

void func_348(int iParam0)
{
	if (func_330(iParam0, 1))
	{
		func_73(iParam0, 41);
		if (func_333(&(iParam0->f_212)))
		{
			func_341(&(iParam0->f_212));
		}
		if (func_333(&(iParam0->f_496)))
		{
			func_334(&(iParam0->f_496));
		}
		if (func_333(&(iParam0->f_499)))
		{
			func_334(&(iParam0->f_499));
		}
		if (func_333(&(iParam0->f_459)))
		{
			if (func_593(&(iParam0->f_459)))
			{
				func_594(&(iParam0->f_459));
			}
		}
		if (iParam0->f_515 && !func_13(iParam0, 46))
		{
			func_196(iParam0, 262144);
			func_395(iParam0, 5f, 0);
		}
		iParam0->f_514 = 0;
		iParam0->f_515 = 0;
		iParam0->f_518 = 0;
		iParam0->f_516 = 0;
		iParam0->f_517 = 0;
		iParam0->f_524 = 0;
		func_196(iParam0, 64);
		func_595(&(iParam0->f_284));
		iParam0->f_523 = 0;
	}
}

int func_349(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_596();
	if (bParam1 && ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return -1;
	}
	return &Global_1955499;
}

void func_350(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_596();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		iVar1 = 0;
		iVar2 = iParam0;
		if (iParam0 == -1)
		{
			iVar2 = func_349(iParam1, bParam2);
			if (iVar2 != -1)
			{
				iVar1 = ((*Global_1955500)[iVar2 /*16*/])->f_2;
				if (func_597(iVar2, 512))
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

void func_351(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_434.f_5))
	{
		switch (uParam0->f_434.f_4)
		{
			case 0:
				func_598(uParam0->f_434.f_5, -1587187585, -1, 1, 0, -1082130432 /* Float: -1f */);
				break;
			case 1:
				func_598(uParam0->f_434.f_5, 441729777, -1, 1, 0, -1082130432 /* Float: -1f */);
				break;
			case 2:
				func_598(uParam0->f_434.f_5, 696740378, -1, 1, 0, -1082130432 /* Float: -1f */);
				break;
			case 3:
				func_598(uParam0->f_434.f_5, -203162028, -1, 1, 0, -1082130432 /* Float: -1f */);
				break;
		}
	}
}

void func_352(var uParam0)
{
	func_599(&(uParam0->f_21), 0, 0, 0, 1);
	func_600(uParam0, 0, 1);
	func_600(uParam0, 1, 1);
}

void func_353(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_13(iParam0, 21))
		{
			func_441(&(iParam0->f_284));
			func_72(iParam0, 21);
		}
	}
	else if (func_13(iParam0, 21))
	{
		func_441(&(iParam0->f_284));
		func_73(iParam0, 21);
	}
}

void func_354(var uParam0, int iParam1, int iParam2, int iParam3)
{
	func_601(uParam0, iParam1, iParam3);
	func_602(uParam0, iParam2, iParam3);
}

int func_355(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_603();
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
		((*Global_1955500)[iVar0 /*16*/])->f_1 = iParam1;
		((*Global_1955500)[iVar0 /*16*/])->f_2 = iParam0;
		(*Global_1955500)[iVar0 /*16*/] = 0;
		((*Global_1955500)[iVar0 /*16*/])->f_3 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (func_30(iParam2, 128))
		{
			PED::_0x7C00CFC48A782DC0(iParam1, iParam0, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		}
		if (func_301(Global_1955500[iVar0 /*16*/], 0))
		{
			func_604(iVar0, 1024);
			func_604(iVar0, 16);
			func_604(iVar0, 256);
		}
		func_604(iVar0, iParam2);
	}
	return iVar0;
}

void func_356(int iParam0, int iParam1)
{
	if (func_176(iParam0, 1, 1))
	{
		func_605((*Global_1955500)[iParam0 /*16*/], iParam1);
	}
}

int func_357(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(((*uParam1)[iVar0 /*9*/])->f_6))
		{
			((*uParam1)[iVar0 /*9*/])->f_6 = iParam0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_358(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_359(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_358(iParam0, 13))
	{
		func_360(iParam0, 0);
	}
	else
	{
		func_361(iParam0, 0);
	}
	if (func_503(iParam0->f_6))
	{
		if (bParam2)
		{
			func_504(&(iParam0->f_6), 0, 1);
		}
	}
}

void func_360(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_361(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

bool func_362(bool bParam0)
{
	return (WEAPON::IS_WEAPON_VALID(bParam0) && bParam0 != joaat("weapon_unarmed"));
}

int func_363(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x865F36299079FB75(bParam0);
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

int func_364(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	if (WEAPON::_0x959383DCD42040DA(bParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
	{
		Var0 = { func_606(bParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_607((375 + iVar28), 1);
			if (func_608(bParam0, &Var0, iVar5, 0))
			{
				if (func_609(bParam0, &Var6, iVar5))
				{
					Var29 = { func_610(bParam0, Var0, iVar5, 0) };
					func_611(bParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_612(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
					{
						return 0;
					}
					func_613(WEAPON::_0x5C2EA6C44F515F34(bParam0), iParam1, iParam6);
					func_614(bParam0, iParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}

void func_365(int iParam0, bool bParam1, float fParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (((((((*bParam1 == joaat("weapon_revolver_cattleman_mexican") || *bParam1 == joaat("weapon_revolver_cattleman_pig")) || *bParam1 == joaat("weapon_revolver_doubleaction_exotic")) || *bParam1 == joaat("weapon_revolver_schofield_calloway")) || *bParam1 == joaat("weapon_revolver_schofield_golden")) || *bParam1 == joaat("weapon_pistol_mauser_drunk")) || *bParam1 == joaat("weapon_shotgun_doublebarrel_exotic")) || *bParam1 == joaat("weapon_sniperrifle_rollingblock_exotic"))
	{
		*fParam2 = 0f;
		return;
	}
	switch (iVar1)
	{
		case joaat("g_m_m_uniduster_03"):
		case joaat("u_m_m_unidusterhenchman_03"):
		case joaat("g_m_m_uniduster_04"):
		case joaat("u_m_m_unidusterhenchman_02"):
		case joaat("g_m_m_uniduster_02"):
		case joaat("u_m_m_fatduster_01"):
		case joaat("u_m_m_unidusterhenchman_01"):
		case joaat("g_m_m_uniduster_01"):
		case joaat("cs_disguisedduster_01"):
		case joaat("g_f_m_uniduster_01"):
		case joaat("u_m_m_unidusterleader_01"):
		case joaat("cs_disguisedduster_03"):
		case joaat("g_m_m_uniduster_05"):
		case joaat("cs_disguisedduster_02"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("g_m_y_uniexconfeds_02"):
		case joaat("g_m_y_uniexconfeds_01"):
		case joaat("g_m_o_uniexconfeds_01"):
		case joaat("cs_exconfedsleader_01"):
		case joaat("u_m_m_uniexconfedsbounty_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.375f);
			break;
		case joaat("g_m_m_uniinbred_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.7f, 0.875f);
			break;
		case joaat("u_m_m_bht_skinnersearch"):
		case joaat("g_m_m_unimountainmen_01"):
		case joaat("u_m_m_bht_skinnerbrother"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f);
			break;
		case joaat("g_m_m_uniranchers_01"):
		case joaat("cs_laramie"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.25f);
			break;
		case joaat("u_m_m_bht_banditoshack"):
		case joaat("u_m_m_bht_banditomine"):
		case joaat("g_m_m_unibanditos_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("u_m_m_nbxbrontegoon_01"):
		case joaat("u_m_m_nbxbrontesecform_01"):
		case joaat("u_m_m_nbxbronteasc_01"):
		case joaat("g_m_m_unibrontegoons_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.125f);
			break;
		default:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.4f);
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
			{
				bVar0 = false;
			}
			break;
	}
	if (bVar0)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 361, true);
	}
}

bool func_366(bool bParam0)
{
	return WEAPON::_0x1F7977C9101F807F(WEAPON::_0x5C2EA6C44F515F34(bParam0));
}

int func_367(int iParam0)
{
	int iVar0;

	iVar0 = func_615(iParam0);
	if (iVar0 != -1)
	{
		return func_17(iVar0);
	}
	return 0;
}

void func_368(int iParam0)
{
	func_174(iParam0, 131072);
	func_616(iParam0, 0, 1);
}

void func_369(int iParam0)
{
	var uVar0;

	if (iParam0 != -1)
	{
		uVar0 = func_91(0);
		MISC::CLEAR_BIT(&uVar0, iParam0);
		func_240(0, uVar0);
	}
}

bool func_370(int iParam0, int iParam1)
{
	return func_30(iParam0->f_473, iParam1);
}

int func_371(var uParam0, float fParam1, int iParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	bVar1 = false;
	fVar2 = func_464(uParam0, bVar1);
	fVar3 = fVar2;
	if (!bParam11 && fVar2 < fParam3)
	{
	}
	if (fParam5 > 0f)
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > fParam5)
		{
			return 0;
		}
	}
	if (fParam7 > 0f)
	{
		if (MISC::ABSF((Global_36.f_2 - uParam0->f_51.f_2)) >= fParam7)
		{
			return 0;
		}
	}
	if (uParam0->f_178 && func_462())
	{
		bVar1 = true;
		fVar3 = func_102(bVar1, fParam9, fVar2);
	}
	if (uParam0->f_48 && (!bParam10 || (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_173) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, true, 0))))
	{
		if (iParam4 > 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_121)
			{
				func_465(uParam0->f_121[iVar0 /*9*/], fVar3, 1082130432 /* Float: 4f */, 1, 90f, 0, 0);
				iVar0++;
			}
		}
		else
		{
			func_465(uParam0->f_121[0 /*9*/], fVar3, 1082130432 /* Float: 4f */, 1, 90f, 0, 0);
		}
		if (func_466(&(uParam0->f_121), iParam4, fParam1))
		{
			func_218(&(uParam0->f_121));
			if (uParam0->f_186)
			{
				STATS::_0xB2A38826E5886E83(func_107(uParam0->f_3, uParam0->f_185), 0);
			}
			return 1;
		}
	}
	fVar4 = (fParam3 * fParam3);
	iVar0 = 0;
	while (iVar0 < uParam0->f_121)
	{
		if (!ENTITY::IS_ENTITY_DEAD((uParam0->f_121[iVar0 /*9*/])->f_6))
		{
			if (BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS((uParam0->f_121[iVar0 /*9*/])->f_6, true, false)) < fVar4)
			{
				if (!uParam0->f_48)
				{
					if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_173) && !(bParam8 && PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)))
					{
						if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, false, 0))
						{
							return 0;
						}
					}
					if (bParam6)
					{
						func_217(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
				}
				func_218(&(uParam0->f_121));
				if (uParam0->f_186)
				{
					STATS::_0xB2A38826E5886E83(func_107(uParam0->f_3, uParam0->f_185), 0);
				}
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float func_372(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_373(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_617(iParam0);
	if (iVar0 == 2)
	{
		if (bParam1)
		{
			return 1;
		}
		else if (iParam0->f_203 == 19)
		{
			return 1;
		}
	}
	return 0;
}

int func_374(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 131072;
		case 2:
			return 5;
		case 3:
			return 13;
		case 4:
			return 262144;
		default:
			break;
	}
	return 262144;
}

int func_375(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (!func_205(iParam2, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_618(fParam0))
	{
		return 0;
	}
	return 1;
}

void func_376(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::_TRIGGER_SONAR_BLIP_2(iParam0, uParam1);
}

void func_377(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, bool bParam6)
{
	TASK::TASK_PLAY_ANIM(uParam0, func_140(iParam1, bParam6), func_390(iParam1, sParam2, sParam5, sParam3, sParam4), 4f, -4f, -1, 8208, 0, 0, 1118217, 0, 0, 0);
}

void func_378(var uParam0, var uParam1, var uParam2, vector3 vParam3, int iParam6, int iParam7, int iParam8)
{
	uParam0->f_6 = uParam1;
	uParam0->f_3 = { vParam3 };
	uParam0->f_2 = 0;
	uParam0->f_7 = MISC::GET_GAME_TIMER();
	*uParam0 = *uParam2;
	uParam0->f_8 = iParam8;
}

void func_379(int* iParam0, var uParam1, bool bParam2)
{
	if (!iParam0->f_2 && iParam0->f_7 != 0)
	{
		if ((!bParam2 && !func_619(0)) || (MISC::GET_GAME_TIMER() - iParam0->f_7) > 3500)
		{
			if (MAP::DOES_BLIP_EXIST(*iParam0))
			{
				MAP::REMOVE_BLIP(iParam0);
			}
			if (!func_79(iParam0->f_3))
			{
				*uParam1 = MAP::_BLIP_ADD_FOR_COORD(iParam0->f_1, iParam0->f_3);
				iParam0->f_2 = 1;
			}
			else if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_6))
			{
				*uParam1 = MAP::_BLIP_ADD_FOR_ENTITY(iParam0->f_1, iParam0->f_6);
				iParam0->f_2 = 1;
			}
			if (iParam0->f_2)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_9))
				{
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, iParam0->f_9);
				}
			}
		}
	}
}

char* func_380(int iParam0)
{
	if (func_620(iParam0))
	{
		switch (iParam0)
		{
			case 0:
				return "GREET_POS";
			case 1:
				return "GREET_NEG";
			case 2:
				return "GREET_SPOS";
			case 3:
				return "GREET_SNEG";
			case 4:
				return "GREET_ACC";
			case 5:
				return "GREET_REJ";
			case 6:
				return "BEAT_GRT_NEG";
			case 7:
				return "INTERACT_GREET";
			case 8:
				return "INTERACT_DEFUSE";
			case 9:
				return "INTERACT_LET_GO";
			case 10:
				return "INTERACT_INSULT";
			case 11:
				return "INTERACT_THREATEN";
			case 12:
				return "INTERACT_ROB";
			case 13:
				return "INTERACT_ROB_GRAPPLE_LET_GO";
			case 14:
				return "INTERACT_ROB_ACCEPT";
			case 15:
				return "INTERACT_ROB_REJECT_MELEE";
			case 16:
				return "INTERACT_STOP_WITNESS";
			case 17:
				return "INTERACT_STOP_VEHICLE";
			case 18:
				return "INTERACT_STOP_HORSE";
			case 19:
				return "INTERACT_REQUEST_RIDE";
			case 20:
				return "INTERACT_STEAL_HORSE";
			case 21:
				return "INTERACT_STEAL_VEHICLE";
			case 22:
				return "INTERACT_HORSE";
			case 23:
				return "INTERACT_CALLOUT";
			case 24:
				return "INTERACT_QUESTION";
			case 25:
				return "INTERACT_ENCOURAGE";
			case 26:
				return "INTERACT_INTERVENE";
			case 27:
				return "INTERACT_CONFRONT";
			case 28:
				return "RE_INTER_TRUTH";
			case 29:
				return "RE_INTER_LIE";
			case 30:
				return "INTERACT_QUIT";
			case 31:
				return "RE_INTER_DIRECT";
			case 32:
				return "INTERACT_SCOLD";
			case 33:
				return "INTERACT_PRAISE";
			case 34:
				return "INTERACT_ASSIST";
			case 35:
				return "INTERACT_MISLEAD";
			case 36:
				return "INTERACT_ASK";
			case 37:
				return "INTERACT_DEMAND";
			default:
				break;
		}
	}
	return "PED_INTERACT_PROMPT_LABEL_ERROR";
}

void func_381(int* iParam0, int iParam1, char* sParam2)
{
	func_621(iParam0->f_21[iParam1 /*17*/], sParam2);
}

int func_382(int iParam0)
{
	if (!func_243(iParam0))
	{
		return 0;
	}
	return &(Global_17503.f_42[iParam0 /*8*/]);
}

void func_383(var uParam0, int iParam1, char* sParam2)
{
	(uParam0->f_21[iParam1 /*17*/])->f_13 = sParam2;
}

void func_384(var uParam0)
{
	if (func_301(uParam0->f_73, 16))
	{
		func_622(uParam0, 1);
	}
}

void func_385(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_7))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_7, func_140(43, 0), "WAIT_01_UPPER", 1))
		{
			TASK::STOP_ANIM_TASK(uParam0->f_7, func_140(43, 0), "WAIT_01_UPPER", -2f);
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_7, func_140(43, 0), "WAIT_02_UPPER", 1))
		{
			TASK::STOP_ANIM_TASK(uParam0->f_7, func_140(43, 0), "WAIT_02_UPPER", -2f);
		}
	}
	AUDIO::STOP_CURRENT_PLAYING_SPEECH(uParam0->f_7, 500);
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(uParam0->f_7, 500);
}

int func_386(var uParam0)
{
	switch (uParam0->f_208)
	{
		case 0:
			func_341(&(uParam0->f_212));
			uParam0->f_208 = 3;
			break;
		case 3:
			if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uParam0->f_7))
			{
				if (func_343(&(uParam0->f_212), 10f))
				{
					TASK::TASK_PLAY_ANIM(uParam0->f_7, func_140(43, 0), "WAIT_02_UPPER", 8f, -8f, -1, 67117072, 0, 0, 0, 0, 0, 0);
					uParam0->f_208++;
				}
			}
			break;
		case 4:
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_7, func_140(43, 0), "WAIT_02_UPPER", 1))
			{
				func_341(&(uParam0->f_212));
				uParam0->f_208++;
			}
			break;
		case 5:
			if (func_343(&(uParam0->f_212), 20f))
			{
				TASK::TASK_PLAY_ANIM(uParam0->f_7, func_140(19, 0), "NEGATIVE_UPPER", 8f, -8f, -1, 67117072, 0, 0, 0, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_387(var uParam0)
{
	if ((ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_7, func_140(43, 0), "WAIT_01_UPPER", 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_7, func_140(43, 0), "WAIT_02_UPPER", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_7, func_140(43, 0), "NEGATIVE_UPPER", 1))
	{
		return 1;
	}
	return 0;
}

int func_388(int iParam0)
{
	return func_136(func_623(iParam0), 0, 0);
}

int func_389(int iParam0)
{
	switch (iParam0)
	{
		case 43:
			return 4;
		default:
			break;
	}
	return 2;
}

char* func_390(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4)
{
	switch (iParam0)
	{
		case 43:
			return sParam1;
		case 19:
			return sParam2;
		case 18:
			return sParam3;
		case 40:
			return sParam4;
		default:
			break;
	}
	return func_624("[REHOC]", "PICK_HERB_STRING: Invalid Herb Index.");
}

bool func_391(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, bool bParam6, bool bParam7)
{
	if (bParam7)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, 1775034443))
		{
			return true;
		}
	}
	return ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, func_140(iParam1, bParam6), func_390(iParam1, sParam2, sParam5, sParam3, sParam4), 1);
}

void func_392(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_534(iParam0))
	{
		return;
	}
	if (func_625(iParam0))
	{
		return;
	}
	if (!bParam1)
	{
		bParam1 = func_626(iParam0);
	}
	if (!bParam1)
	{
		if (func_90() != -1)
		{
		}
		else
		{
			func_627(iParam0);
		}
	}
	func_628(iParam0, 1);
	if (func_90() == -1)
	{
		func_630(iParam0, func_629());
	}
	func_631(iParam0, 1);
	if (bParam2)
	{
		if (!func_475(0, 0, 1))
		{
			func_510(1, 6);
		}
	}
}

int func_393(int iParam0)
{
	if (func_388(*iParam0) >= func_389(*iParam0))
	{
		return 1;
	}
	return 0;
}

void func_394(var uParam0)
{
	if (!func_13(uParam0, 1))
	{
		if (!func_13(uParam0, 40))
		{
			func_632(119);
			func_633(Global_1935630, 4);
			func_72(uParam0, 40);
		}
	}
}

void func_395(int iParam0, float fParam1, bool bParam2)
{
	if (bParam2 || !func_333(&(iParam0->f_459)))
	{
		func_341(&(iParam0->f_459));
	}
	iParam0->f_471 = (iParam0->f_471 + (fParam1 + 5f));
}

int func_396(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	switch (PED::_0x569F1E1237508DEB(uParam0->f_7))
	{
		case 494354620:
			if (bParam3 || ((!bParam1 && !bParam2) && MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) >= 0.25f))
			{
				uParam0->f_468 = -576322004;
				uParam0->f_469 = 2093245709;
				uParam0->f_470 = MISC::GET_RANDOM_FLOAT_IN_RANGE(15f, 25f);
				func_162(uParam0, 1);
			}
			else
			{
				uParam0->f_468 = -816791935;
				uParam0->f_469 = -1904017806;
				uParam0->f_470 = 1f;
			}
			func_341(&(uParam0->f_441));
			return 1;
		case -1904017806:
			if (!bParam1 || bParam3)
			{
				uParam0->f_468 = 1747427334;
				uParam0->f_469 = 494354620;
				uParam0->f_470 = MISC::GET_RANDOM_FLOAT_IN_RANGE(30f, 45f);
			}
			else
			{
				uParam0->f_469 = -1904017806;
				uParam0->f_470 = 1f;
			}
			func_341(&(uParam0->f_441));
			return 1;
		case 2093245709:
			if (bParam3 || (!bParam1 && MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) >= 0.25f))
			{
				uParam0->f_468 = -2040485339;
				uParam0->f_469 = 494354620;
				uParam0->f_470 = MISC::GET_RANDOM_FLOAT_IN_RANGE(30f, 45f);
			}
			else
			{
				uParam0->f_468 = 601769528;
				uParam0->f_469 = -1904017806;
				uParam0->f_470 = 1f;
			}
			func_341(&(uParam0->f_441));
			return 1;
	}
	return 0;
}

void func_397(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (MAP::DOES_BLIP_EXIST(*iParam1))
		{
			MAP::REMOVE_BLIP(iParam1);
		}
		iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
		if (MAP::DOES_BLIP_EXIST(iVar0))
		{
			MAP::REMOVE_BLIP(&iVar0);
		}
		*iParam1 = MAP::_BLIP_ADD_FOR_ENTITY(iParam2, iParam0);
		if (iParam3 != 0)
		{
			MAP::_0x662D364ABF16DE2F(*iParam1, iParam3);
		}
		if (iParam4 != 0)
		{
			MAP::SET_BLIP_SPRITE(*iParam1, iParam4, true);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam1, sParam5);
		}
	}
}

void func_398(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;

	iVar0 = func_389(*iParam0);
	sVar1 = func_390(*iParam0, "REHEC_COL_YARROW", "REHEC_COL_HBSAGE", "REHEC_COL_GCURRANT", "REHEC_COL_VSNOWDROP");
	if (iParam1 >= func_389(*iParam0) || bParam2)
	{
		if (!func_13(iParam0, 1))
		{
			func_74("HERB_DONE", 7500, 0, 0, -1, -1, 0);
		}
		else
		{
			func_74("HERB_DONE_RC", 7500, 0, 0, -1, -1, 0);
		}
		func_71(MISC::_CREATE_VAR_STRING(2, sVar1, iVar0, iVar0), 10000, 0, 0, 0, 1);
	}
	else
	{
		func_71(MISC::_CREATE_VAR_STRING(2, sVar1, iParam1, iVar0), 10000, 0, 0, 0, 1);
	}
}

void func_399(int iParam0, bool bParam1)
{
	func_353(iParam0, 1);
	func_328(&(iParam0->f_284), 1);
	if (!func_13(iParam0, 9) || func_13(iParam0, 28))
	{
		func_383(&(iParam0->f_284), 0, "RE_HEC_UNI_V1_LOOKING");
	}
	else
	{
		func_383(&(iParam0->f_284), 0, "RE_HEC_UNI_V1_HANDOVER_PLAYER");
	}
	func_381(&(iParam0->f_284), 0, "BEAT_CON_GIVE_PLANTS");
	if (!func_431(iParam0, 9))
	{
		func_383(&(iParam0->f_284), 1, "RE_HEC_UNI_V1_SECONDTHOUGHT");
		func_381(&(iParam0->f_284), 1, func_380(6));
		func_72(iParam0, 62);
	}
	else
	{
		func_332(&(iParam0->f_284), 1, 0);
	}
	if (!func_13(iParam0, 1))
	{
		if (!MAP::DOES_BLIP_EXIST(iParam0->f_9))
		{
		}
	}
	if (MAP::DOES_BLIP_EXIST(iParam0->f_9))
	{
		MAP::_0x662D364ABF16DE2F(iParam0->f_9, -981020806);
	}
	if (bParam1)
	{
		func_398(iParam0, func_388(*iParam0), 1);
	}
	func_384(&(iParam0->f_284));
	iParam0->f_198 = 5;
}

void func_400(int iParam0, bool bParam1)
{
	func_353(iParam0, 0);
	if (!func_431(iParam0, 8))
	{
		func_634(&(iParam0->f_284), 1);
		func_332(&(iParam0->f_284), 0, 1);
		func_383(&(iParam0->f_284), 0, func_635(iParam0));
	}
	else
	{
		func_332(&(iParam0->f_284), 0, 0);
	}
	if (!func_13(iParam0, 1))
	{
		if (!func_431(iParam0, 9))
		{
			func_332(&(iParam0->f_284), 1, 1);
			func_383(&(iParam0->f_284), 1, "RE_HEC_UNI_V1_SECONDTHOUGHT");
			func_381(&(iParam0->f_284), 1, func_380(6));
			func_72(iParam0, 62);
		}
		else
		{
			func_73(iParam0, 62);
			func_332(&(iParam0->f_284), 1, 0);
		}
	}
	else
	{
		func_332(&(iParam0->f_284), 1, 0);
		func_381(&(iParam0->f_284), 1, func_380(10));
		func_73(iParam0, 62);
	}
	if (MAP::DOES_BLIP_EXIST(iParam0->f_9))
	{
		MAP::_SET_BLIP_FLASH_STYLE(iParam0->f_9, -981020806);
	}
	if (bParam1)
	{
		func_74(func_390(*iParam0, "HRB_OBJ_YR", "HRB_OBJ_HS", "HRB_OBJ_GC", "HRB_OBJ_VS"), 7500, 0, 0, func_389(*iParam0), -1, 1);
	}
	func_384(&(iParam0->f_284));
	iParam0->f_198 = 0;
}

int func_401(int iParam0, var uParam1)
{
	if (!iParam0->f_536)
	{
		if (iParam0->f_535)
		{
			if (func_636(iParam0))
			{
				iParam0->f_536 = 1;
			}
		}
	}
	switch (iParam0->f_198)
	{
		case 0:
			func_637(iParam0);
			switch (func_638(iParam0))
			{
				case 3:
					func_399(iParam0, 1);
					break;
				case 1:
					func_341(&(iParam0->f_278));
					func_187(iParam0, 7);
					func_368(iParam0);
					iParam0->f_198 = 1;
					break;
			}
			break;
		case 1:
			if (!func_330(iParam0, 1))
			{
				if ((func_343(&(iParam0->f_278), 2f) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_ANY_SPEECH_PLAYING(iParam0->f_7))
				{
					func_206(iParam0->f_7, Global_35, func_639(iParam0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_341(&(iParam0->f_278));
					iParam0->f_198 = 2;
				}
			}
			break;
		case 2:
			if (func_343(&(iParam0->f_278), 3f) && !func_205(iParam0->f_7, 1))
			{
				func_334(&(iParam0->f_278));
				func_196(iParam0, 131072);
				func_433(iParam0, 7);
				func_395(iParam0, 5f, 0);
				func_640(iParam0, 10f);
				func_400(iParam0, 0);
			}
			break;
		case 3:
			if (func_330(iParam0, 1))
			{
				func_19();
				func_334(&(iParam0->f_278));
				func_73(iParam0, 13);
				func_196(iParam0, 131072);
				func_23(iParam0);
				func_175(&(iParam0->f_9));
				iParam0->f_198 = 4;
			}
			break;
		case 4:
			if (!func_330(iParam0, 1))
			{
				func_395(iParam0, 3f, 0);
				iParam0->f_1 = 11;
			}
			break;
		case 5:
			if (!func_393(iParam0))
			{
				if (func_370(iParam0, 131072))
				{
					func_395(iParam0, 3f, 0);
					func_196(iParam0, 131072);
				}
				func_400(iParam0, 1);
			}
			else
			{
				switch (iParam0->f_534)
				{
					case 0:
						if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_532, false, 0))
						{
							func_332(&(iParam0->f_284), 0, 0);
							iParam0->f_534++;
						}
						break;
					case 1:
						if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_532, false, 0))
						{
							func_332(&(iParam0->f_284), 0, 1);
							iParam0->f_534 = (iParam0->f_534 - 1);
						}
						break;
				}
				switch (func_641(iParam0, uParam1))
				{
					case 4:
						iParam0->f_535 = 1;
						func_642(iParam0);
						func_174(iParam0, 262144);
						func_353(iParam0, 0);
						func_328(&(iParam0->f_284), 0);
						func_72(iParam0, 17);
						func_643(&(iParam0->f_133), *iParam0, &(iParam0->f_112), &(iParam0->f_90));
						func_644(&(iParam0->f_133), func_148(*iParam0));
						func_644(&(iParam0->f_154), 5);
						func_644(&(iParam0->f_175), 5);
						iParam0->f_495 = 0;
						iParam0->f_198 = 6;
						break;
					default:
						func_644(&(iParam0->f_133), func_148(*iParam0));
						func_644(&(iParam0->f_154), 5);
						func_644(&(iParam0->f_175), 5);
						break;
				}
			}
			break;
		case 6:
			if (func_645(iParam0))
			{
				iParam0->f_198 = 7;
			}
			break;
		case 7:
			if (ANIMSCENE::_0xD8254CB2C586412B(iParam0->f_133.f_1, 0))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
				func_23(iParam0);
				iParam0->f_198 = 8;
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 993600644))
			{
				func_19();
				func_71("HRB_SUCCESS", 10000, 0, 0, 0, 1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
				func_647(func_646(*iParam0), func_389(*iParam0), 0, -142743235, 0);
				func_568(12, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				func_72(iParam0, 15);
				func_648(*iParam0);
				func_649(&(iParam0->f_90[19]), 0, 1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
				if (MAP::DOES_BLIP_EXIST(iParam0->f_9))
				{
					MAP::_SET_BLIP_FLASH_STYLE(iParam0->f_9, -981020806);
				}
				func_178(3);
				iParam0->f_198 = 8;
			}
			break;
		case 8:
			if (iParam0->f_536)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_402(var uParam0, int iParam1)
{
	func_650(uParam0, 0f, 0f, 0f, 0f, 0f, 0f, 2);
	ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(uParam0->f_1, iParam1, -1);
}

int func_403(int iParam0)
{
	if (func_13(iParam0, 36))
	{
		if (!TASK::_DOES_SCENARIO_POINT_EXIST(iParam0->f_87))
		{
			return 0;
		}
		if (!TASK::_0x6EF4E31B4D5D2DA0(iParam0->f_87, "p_mortarPestle02x_PH_R_HAND"))
		{
			return 0;
		}
		func_73(iParam0, 36);
	}
	return 1;
}

void func_404(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	func_651(uParam0, "objBook", uParam3[0], 0);
	func_651(uParam0, "objBottle01", uParam3[11], 0);
	func_651(uParam0, "objBurdock01", uParam3[4], 0);
	func_651(uParam0, "objKnife", uParam3[1], 0);
	func_651(uParam0, "objMBottle01", uParam3[9], 0);
	func_651(uParam0, "objMBottle02", uParam3[10], 0);
	func_651(uParam0, "objMortar", uParam3[3], 0);
	func_651(uParam0, "ped_herbalist", iParam2, 0);
	if (bParam4)
	{
		switch (iParam1)
		{
			case 43:
				func_651(uParam0, "objYarrow02", uParam3[19], 0);
				break;
			case 40:
				func_651(uParam0, "Snoedrop", uParam3[19], 0);
				break;
			case 18:
				func_651(uParam0, "Goldcurrant", uParam3[19], 0);
				break;
			case 19:
				func_651(uParam0, "Hbsage", uParam3[19], 0);
				break;
		}
	}
}

void func_405(var uParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_1))
	{
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_1);
	}
}

int func_406(var uParam0, char* sParam1, int iParam2)
{
	if (func_429(uParam0, 0, 0, 0))
	{
		return ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_1, sParam1, iParam2);
	}
	return 0;
}

void func_407(var uParam0)
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_7, -944481653))
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_242, uParam0->f_7, PED::GET_PED_BONE_INDEX(uParam0->f_7, 7966), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0, 0);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_242, true);
		func_206(uParam0->f_7, Global_35, func_652(uParam0->f_240), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_7, -228458952))
	{
		func_649(uParam0->f_242, 1, 1);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_242, false);
		func_653(uParam0->f_7, func_135(uParam0->f_240), 1, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 227258506) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1308194400))
	{
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -228458952))
	{
		func_649(uParam0->f_242, 1, 1);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_242, false);
		func_206(uParam0->f_7, Global_35, func_654(uParam0->f_240), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		if (func_44(uParam0) != 4)
		{
			func_655(func_135(uParam0->f_240), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		}
		else
		{
			func_656(-1768086120, 0, 1065353216 /* Float: 1f */, 1, 0, 0);
		}
	}
}

void func_408(var uParam0)
{
	int iVar0;

	if (func_44(uParam0) == 2 || func_44(uParam0) == 1)
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 500, -1082130432, -1082130432, -1082130432);
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, "SCRIPT_RE@HERBALISTCAMP@PAMPHLET_HANDOVER", "TAKE_OUT_PAMP_HERBALIST", Global_35, func_657("SCRIPT_RE@HERBALISTCAMP@PAMPHLET_HANDOVER", "TAKE_OUT_PAMP_HERBALIST"), 1090519040, -1056964608, 8200, 0, 0, 0, -1082130432, 0, 0, -1082130432);
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, "SCRIPT_RE@HERBALISTCAMP@PAMPHLET_HANDOVER", "PAMP_LOOP_HERBALIST", Global_35, -1, 1090519040, -1056964608, 8201, 0, 0, 0, -1082130432, 0, 0, -1082130432);
		func_171(uParam0->f_7, &iVar0, 0, 0, 1, 1);
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 500, -1082130432, -1082130432, -1082130432);
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, "SCRIPT_RE@HERBALISTCAMP@SERUM_HANDOVER", "TAKE_OUT_SERUM_HERBALIST", Global_35, func_657("SCRIPT_RE@HERBALISTCAMP@SERUM_HANDOVER", "TAKE_OUT_SERUM_HERBALIST"), 1090519040, -1056964608, 8200, 0, 0, 0, -1082130432, 0, 0, -1082130432);
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, "SCRIPT_RE@HERBALISTCAMP@SERUM_HANDOVER", "SERUM_LOOP_HERBALIST", Global_35, -1, 1090519040, -1056964608, 8201, 0, 0, 0, -1082130432, 0, 0, -1082130432);
		func_171(uParam0->f_7, &iVar0, 0, 0, 1, 1);
	}
}

void func_409(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	func_658(uParam0, "herbalist", iParam2, 0);
	func_658(uParam0, "player", Global_35, 0);
	func_658(uParam1, "herbalist", iParam2, 0);
	func_658(uParam1, "player", Global_35, 0);
	if (iParam5 == 2 || iParam5 == 1)
	{
		func_658(uParam0, "object_pamphlet", iParam4, 0);
		func_658(uParam1, "object_pamphlet", iParam4, 0);
	}
	else
	{
		func_658(uParam0, "object", iParam4, 0);
		func_658(uParam1, "object", iParam4, 0);
	}
	func_402(uParam1, iParam3);
}

char* func_410(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RE_HOC_REWARD_REMEDY";
		case 1:
			return "RE_HOC_REWARD_RECIPE";
		case 2:
			return "RE_HOC_REWARD_RECIPE";
		case 3:
			return "RE_HOC_REWARD_TONIC";
		case 4:
			return "RE_HOC_REWARD_TONIC";
		default:
			break;
	}
	return func_624("[RESS]", "REHOC_REWARD_TYPE_INITIAL_DIALOGUE_CONTEXT: Invalid Reward.");
}

void func_411(var uParam0, int iParam1, float fParam2)
{
	func_659(uParam0->f_21[iParam1 /*17*/], fParam2);
}

void func_412(var uParam0, int iParam1)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
	vVar0 = { vVar0 - Vector(1f, 0f, 0f) };
	func_650(uParam0, vVar0, ENTITY::GET_ENTITY_ROTATION(iParam1, 2), 2);
}

int func_413(var uParam0, var uParam1, var uParam2)
{
	struct<4> Var0[4];
	vector3 vVar17;
	vector3 vVar20;
	vector3 vVar23;
	vector3 vVar26;
	vector3 vVar29;
	bool bVar32;
	vector3 vVar33;
	vector3 vVar36;
	vector3 vVar39;
	float fVar42;

	vVar17 = { -2.4f, 2.68f, 0f };
	vVar20 = { 0.77f, 4f, 0f };
	vVar23 = { -2.15f, 1.32f, 0f };
	vVar26 = { 0.21f, 2.2f, 0f };
	vVar29 = { func_660(Global_35, uParam0->f_175.f_1, "player", "PB_HANDOVER", 1) };
	*(Var0[0 /*4*/]) = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_9(uParam1), func_10(uParam1), vVar17) };
	*(Var0[1 /*4*/]) = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_9(uParam1), func_10(uParam1), vVar20) };
	*(Var0[2 /*4*/]) = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_9(uParam1), func_10(uParam1), vVar23) };
	*(Var0[3 /*4*/]) = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_9(uParam1), func_10(uParam1), vVar26) };
	(Var0[0 /*4*/])->f_3 = func_88(Global_36, *(Var0[0 /*4*/]));
	(Var0[1 /*4*/])->f_3 = func_88(Global_36, *(Var0[1 /*4*/]));
	(Var0[2 /*4*/])->f_3 = func_88(Global_36, *(Var0[2 /*4*/]));
	(Var0[3 /*4*/])->f_3 = func_88(Global_36, *(Var0[3 /*4*/]));
	bVar32 = true;
	if (func_661(*(Var0[0 /*4*/]), *(Var0[1 /*4*/]), Global_36))
	{
		bVar32 = true;
	}
	else if (func_661(*(Var0[3 /*4*/]), *(Var0[2 /*4*/]), Global_36))
	{
		bVar32 = false;
	}
	else if ((Var0[0 /*4*/])->f_3 + (Var0[1 /*4*/])->f_3) > ((Var0[0 /*4*/])->f_3 + (Var0[1 /*4*/])->f_3)
	{
		bVar32 = false;
	}
	if (bVar32)
	{
		*uParam2 = { vVar29 };
		uParam2->f_3 = func_662(*uParam2, ENTITY::GET_ENTITY_COORDS(uParam0->f_7, true, false), 1);
		return 0;
	}
	else if (func_661(*(Var0[2 /*4*/]), *(Var0[3 /*4*/]), Global_36))
	{
		vVar33 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_7, true, false) };
		vVar36 = { func_660(Global_35, uParam0->f_154.f_1, "herbalist", "PB_HANDOVER", 1) };
		vVar39 = { func_660(Global_35, uParam0->f_154.f_1, "player", "PB_HANDOVER", 1) };
		fVar42 = BUILTIN::VDIST(vVar36, vVar39);
		if ((Var0[2 /*4*/])->f_3 < (Var0[3 /*4*/])->f_3)
		{
			*uParam2 = { vVar33 + Vector(fVar42, fVar42, fVar42) * func_663(vVar33, *(Var0[2 /*4*/]), 1065353216 /* Float: 1f */) };
		}
		else
		{
			*uParam2 = { vVar33 + Vector(fVar42, fVar42, fVar42) * func_663(vVar33, *(Var0[3 /*4*/]), 1065353216 /* Float: 1f */) };
		}
		uParam2->f_3 = func_662(*uParam2, vVar33, 1);
	}
	else
	{
		*uParam2 = { func_660(Global_35, uParam0->f_154.f_1, "player", "PB_HANDOVER", 1) };
		uParam2->f_3 = func_662(*uParam2, ENTITY::GET_ENTITY_COORDS(uParam0->f_7, true, false), 1);
	}
	return 1;
}

void func_414(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 256;
	uParam0->f_4 = 0;
	func_334(&(uParam0->f_5));
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = 0.25f;
	uParam0->f_18 = 0.25f;
	uParam0->f_19 = 40000f;
	uParam0->f_20 = 10f;
	uParam0->f_21 = 1f;
	uParam0->f_22 = 0f;
	uParam0->f_23 = 0;
	uParam0->f_25 = 0;
	StringCopy(&(uParam0->f_30), "", 24);
	StringCopy(&(uParam0->f_26), "", 32);
}

int func_415(int iParam0, var uParam1, vector3 vParam2, int iParam5, float fParam6, int iParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11, float fParam12)
{
	int iVar0;
	var uVar1;
	struct<11> Var2;
	int iVar13;

	if (!func_664(iParam0))
	{
		if (bParam11)
		{
			iVar0 = func_665(7);
		}
		else
		{
			iVar0 = PED::_GET_LAST_MOUNT(iParam0);
		}
		if (!func_244(iVar0, 1) || (!(VOLUME::_DOES_VOLUME_EXIST(iParam5) && func_463(iVar0, iParam5, 1, 0)) && func_372(iParam0, iVar0, 1, 1) > fParam6))
		{
			return 1;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			if (func_233(iVar0) && func_234(iVar0) != 1)
			{
				Var2.f_10 = 7;
				Var2.f_1 = 1;
				*uParam1 = func_666(&uVar1, &Var2);
				if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
				{
					*uParam1 = iVar0;
				}
			}
			else
			{
				*uParam1 = iVar0;
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			return 1;
		}
		if (func_244(*uParam1, 1))
		{
			if (!(func_169(*uParam1, 518218985) || func_169(*uParam1, 713668775)))
			{
				TASK::CLEAR_PED_TASKS(*uParam1, 1, 0);
				iVar13 = 0;
				if (!bParam10)
				{
					iVar13 = 16640;
				}
				FLOCK::_0xFF1E339CE40EAAAF(*uParam1, 0);
				POPULATION::_0xF74E134F40192884(*uParam1, 2);
				if (!func_79(vParam2))
				{
					bParam8 = false;
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam1, vParam2, fParam12, -1, 0.25f, false, 40000f);
				}
				if (VOLUME::_DOES_VOLUME_EXIST(iParam5))
				{
					POPULATION::_0xB56D41A694E42E86(iParam5, 2048, 0, 0, -1, -1, 2);
					if (bParam8)
					{
						TASK::_TASK_SMART_FLEE_STYLE_COORD(*uParam1, VOLUME::_0xF70F00013A62F866(iParam5), iParam7, iVar13, fParam6, 6000, 0);
					}
				}
				if (!bParam8 && func_79(vParam2))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(*uParam1, iParam0, iParam7, iVar13, fParam6, 6000, 0);
				}
			}
		}
	}
	return 0;
}

int func_416(var uParam0)
{
	switch (uParam0->f_210)
	{
		case 0:
			func_341(&(uParam0->f_212));
			uParam0->f_210++;
			break;
		case 1:
			if (func_343(&(uParam0->f_212), 14f))
			{
				func_206(uParam0->f_7, Global_35, "RE_HEC_UNI_V1_TAKEORNOT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				if (func_44(uParam0) == 2 || func_44(uParam0) == 1)
				{
					func_667(uParam0, "SCRIPT_RE@HERBALISTCAMP@PAMPHLET_HANDOVER", "DO_U_WANT_IT_PAMP_HERBALIST");
				}
				else
				{
					func_667(uParam0, "SCRIPT_RE@HERBALISTCAMP@SERUM_HANDOVER", "DO_U_WANT_IT_HERBALIST");
				}
				uParam0->f_210++;
			}
			break;
		case 2:
			if (TASK::GET_SEQUENCE_PROGRESS(uParam0->f_7) == 1)
			{
				func_341(&(uParam0->f_212));
				uParam0->f_210++;
			}
			break;
		case 3:
			if (func_343(&(uParam0->f_212), 5f))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_417(var uParam0, int iParam1)
{
	func_668(uParam0->f_21[iParam1 /*17*/], 0);
}

void func_418(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	func_395(uParam0, 10f, 0);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (bParam2)
	{
		if (func_44(uParam0) == 2 || func_44(uParam0) == 1)
		{
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, "SCRIPT_RE@HERBALISTCAMP@PAMPHLET_HANDOVER", "DECLINE_PAMP_HERBALIST", Global_35, func_657("SCRIPT_RE@HERBALISTCAMP@PAMPHLET_HANDOVER", "DECLINE_PAMP_HERBALIST"), 1090519040, -1056964608, 8200, 0, 0, 0, -1082130432, 0, 0, -1082130432);
		}
		else
		{
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, "SCRIPT_RE@HERBALISTCAMP@SERUM_HANDOVER", "SERUM_DECLINE_HERBALIST", Global_35, func_657("SCRIPT_RE@SUSPENSION_TRAP@HANDOVER", "DONT_TAKE_OFFER_VICTIM"), 1090519040, -1056964608, 8200, 0, 0, 0, -1082130432, 0, 0, -1082130432);
		}
	}
	func_70(uParam0, 1, iParam1, 1, 0, 1, 0);
	func_171(uParam0->f_7, &iVar0, 0, 0, 1, 1);
}

int func_419(var uParam0)
{
	switch (uParam0->f_241)
	{
		case 0:
			if (func_44(uParam0) == 2 || func_44(uParam0) == 1)
			{
				return func_669(Global_35, &(uParam0->f_175), "player", 5, &(uParam0->f_495), 1065353216 /* Float: 1f */, 1, 1);
			}
			else
			{
				return func_669(Global_35, &(uParam0->f_175), "player", 4, &(uParam0->f_495), 1065353216 /* Float: 1f */, 1, 1);
			}
			break;
		case 1:
			if (func_44(uParam0) == 2 || func_44(uParam0) == 1)
			{
				return func_669(Global_35, &(uParam0->f_154), "player", 5, &(uParam0->f_495), 1065353216 /* Float: 1f */, 1, 1);
			}
			else
			{
				return func_669(Global_35, &(uParam0->f_154), "player", 4, &(uParam0->f_495), 1065353216 /* Float: 1f */, 1, 1);
			}
			break;
	}
	return 0;
}

float func_420(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_421(var uParam0)
{
	int iVar0;

	func_439(&(uParam0->f_9), uParam0->f_7, 0);
	PED::_0x802092B07E3B1EEA(uParam0->f_7, Global_36, 3);
	if (!PED::_0xEC6935EBE0847B90(uParam0->f_7, Global_36))
	{
		if (!PED::_0x463803429297117C(uParam0->f_7, Global_36, 1, 0))
		{
			PED::_0xF1C03A5352243A30(uParam0->f_7);
		}
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (func_322(uParam0->f_7, 0, 1, 0) == joaat("weapon_unarmed"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_7, joaat("weapon_melee_knife"), false, 0, false, false);
		TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
	}
	TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
	func_171(uParam0->f_7, &iVar0, 0, 0, 1, 1);
}

int func_422(var uParam0, float fParam1)
{
	if (func_343(uParam0, fParam1))
	{
		func_334(uParam0);
		return 1;
	}
	return 0;
}

void func_423(int iParam0, float fParam1)
{
	if (!TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 1) || TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 0))
	{
		TASK::_0xE7FA07624574B79A(iParam0->f_7, Global_35, iParam0->f_483, iParam0->f_484, fParam1, 1, 0, 0, 0);
	}
}

int func_424(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
{
	bool bVar0;
	float fVar1;
	int iVar2;
	struct<8> Var3;

	iParam5 = iParam5;
	iParam1 = iParam1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return -1;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iParam0, iParam1, 17))
			{
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	if (fParam4 == -1f)
	{
		if (func_467())
		{
			fParam4 = 50f;
		}
		else
		{
			fParam4 = 75f;
		}
	}
	if (bParam9)
	{
		if (iParam0 != Global_35 && iParam1 != Global_35)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (func_670(iParam0, 1, 1) > fParam4)
				{
					return -1;
				}
			}
		}
	}
	bVar0 = (iParam0 == iParam1 || iParam1 == 0);
	if ((!ENTITY::IS_ENTITY_DEAD(iParam0) || iParam11 == 1718175949) || bParam9 == 0)
	{
		if (!bVar0)
		{
			fVar1 = func_372(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_341(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_671(iParam0, iParam1, fVar1, bParam13))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam1, iParam0, 7500, 48, 31, 0);
				}
			}
			if (bParam12)
			{
				Var3.f_5 = 1;
				Var3.f_6 = 1;
				Var3 = sParam2;
				Var3.f_3 = iParam11;
				Var3.f_4 = iParam1;
				Var3.f_5 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
				Var3.f_6 = iParam15;
				Var3.f_2 = iParam5;
				if (bParam14)
				{
					MISC::SET_BIT(&(Var3.f_7), 3);
					MISC::SET_BIT(&(Var3.f_7), 2);
				}
				iVar2 = AUDIO::_0x72E4D1C4639BC465(iParam0, &Var3);
				if (iVar2 >= 0)
				{
					AUDIO::_0xB18FEC133C7C6C69(iVar2);
				}
			}
			else
			{
				iVar2 = func_673(func_672(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

void func_425(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_434.f_5))
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iParam0->f_434.f_5, 0))
		{
			if (!PED::_0xEEED8FAFEC331A70(iParam0->f_7, Global_36, 3))
			{
				if (!PED::_0x802092B07E3B1EEA(iParam0->f_7, Global_36, 3))
				{
					PED::_0xA3A9299C4F2ADB98(iParam0->f_7);
				}
			}
			TASK::CLEAR_PED_TASKS(iParam0->f_434.f_5, 1, 0);
			if (ENTITY::IS_ENTITY_DEAD(iParam0->f_7))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(iParam0->f_434.f_5, Global_35, 3, 0, -1082130432, -1, 0);
			}
			else
			{
				TASK::_0x2E1D6D87346BB7D2(iParam0->f_7, Global_35, 1, 0);
			}
		}
	}
}

void func_426(var uParam0)
{
	func_575(&(uParam0->f_73), 4);
}

void func_427(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	func_570(uParam0, uParam2, uParam3, 1, 1);
	func_674(*uParam0, uParam1, iParam4);
}

void func_428(int iParam0)
{
	func_82(&(iParam0->f_112));
	func_82(&(iParam0->f_133));
	func_82(&(iParam0->f_154));
	func_82(&(iParam0->f_175));
	func_649(iParam0->f_242, 1, 1);
	func_649(&(iParam0->f_90[3]), 1, 1);
	func_649(&(iParam0->f_90[19]), 1, 1);
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_242))
	{
		PHYSICS::ACTIVATE_PHYSICS(iParam0->f_242);
	}
	if (ENTITY::DOES_ENTITY_EXIST(&(iParam0->f_90[3])))
	{
		PHYSICS::ACTIVATE_PHYSICS(&(iParam0->f_90[3]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(&(iParam0->f_90[19])))
	{
		PHYSICS::ACTIVATE_PHYSICS(&(iParam0->f_90[19]));
	}
}

int func_429(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_1))
	{
		if (bParam1 && !ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_1, 0))
		{
			return 0;
		}
		if (bParam2 && !ANIMSCENE::_0xD8254CB2C586412B(uParam0->f_1, 0))
		{
			return 0;
		}
		if (bParam3 && !ANIMSCENE::_0x95531A4A20CCE7BC(uParam0->f_1, 0))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_430(int iParam0)
{
	if (((iParam0->f_203 == 6 || iParam0->f_203 == 7) || iParam0->f_203 == 14) || iParam0->f_203 == 15)
	{
		return 1;
	}
	return 0;
}

bool func_431(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(iParam0->f_6, iParam1);
}

void func_432(int iParam0)
{
	if (func_675(iParam0, 2))
	{
		if (iParam0->f_203 != 20)
		{
			func_341(&(iParam0->f_441));
		}
	}
}

void func_433(int iParam0, int iParam1)
{
	MISC::CLEAR_BIT(&(iParam0->f_6), iParam1);
}

char* func_434(char* sParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, sParam0, 64);
	if (func_16())
	{
		StringConCat(&cVar0, "_J", 64);
	}
	return func_676(cVar0);
}

void func_435(int iParam0, int iParam1)
{
	char* sVar0;

	switch (iParam1)
	{
		case 0:
			sVar0 = func_434("RE_HEC_UNI_V1_UNDERSTAND");
			break;
		case 1:
			sVar0 = func_434("RE_HEC_UNI_V1_LEAVEME");
			break;
		case 2:
			sVar0 = func_434("RE_HEC_UNI_V1_YOURECRAZY");
			break;
		case 3:
			sVar0 = func_434("RE_HEC_UNI_V1_HADENOUGH");
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		func_206(iParam0->f_7, Global_35, sVar0, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1506116031, 1, 0, 0);
	}
}

int func_436(int iParam0)
{
	if ((AUDIO::_0xFE5C6177064BD390(1) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) || AUDIO::IS_ANY_SPEECH_PLAYING(iParam0->f_7))
	{
		func_326(iParam0->f_284.f_21[0 /*17*/]);
		func_326(iParam0->f_284.f_21[1 /*17*/]);
	}
	switch (iParam0->f_474)
	{
		case 0:
			if (!func_431(iParam0, 0))
			{
				func_332(&(iParam0->f_284), 0, 1);
			}
			func_332(&(iParam0->f_284), 1, 1);
			func_383(&(iParam0->f_284), 1, "RE_HEC_UNI_V1_WASTING");
			func_384(&(iParam0->f_284));
			iParam0->f_474 = 1;
			break;
		case 1:
			func_187(iParam0, 0);
			func_187(iParam0, 1);
			func_328(&(iParam0->f_284), 1);
			func_383(&(iParam0->f_284), 0, "RE_HEC_UNI_V1_LEAVEYOU");
			func_381(&(iParam0->f_284), 0, func_380(8));
			func_383(&(iParam0->f_284), 1, "RE_HEC_UNI_V1_KILLYOU");
			func_381(&(iParam0->f_284), 1, func_380(10));
			func_384(&(iParam0->f_284));
			iParam0->f_474 = 2;
			break;
		case 2:
		case 3:
			return 1;
	}
	return 0;
}

void func_437(int iParam0, bool bParam1)
{
	int iVar0;

	if (!bParam1)
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
	}
	PED::_0x802092B07E3B1EEA(iParam0->f_7, Global_36, 2);
	if (func_322(Global_35, 0, 1, 0) != joaat("weapon_unarmed") && !WEAPON::_0x959383DCD42040DA(func_322(Global_35, 0, 1, 0)))
	{
		TASK::TASK_COMBAT_PED(0, Global_35, 16384, 0);
	}
	else
	{
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
		func_72(iParam0, 26);
		func_677(&(iParam0->f_284), &(iParam0->f_7), 1);
		PED::SET_PED_CONFIG_FLAG(iParam0->f_7, 297, false);
		PED::SET_PED_CONFIG_FLAG(iParam0->f_7, 301, false);
		PED::SET_PED_CONFIG_FLAG(iParam0->f_7, 315, false);
		PED::SET_PED_CONFIG_FLAG(iParam0->f_7, 130, false);
		PED::SET_PED_CONFIG_FLAG(iParam0->f_7, 178, false);
		PED::SET_PED_CONFIG_FLAG(iParam0->f_7, 330, false);
		PED::SET_PED_CONFIG_FLAG(iParam0->f_7, 317, true);
	}
	if (!bParam1)
	{
		func_171(iParam0->f_7, &iVar0, 0, 0, 1, 1);
	}
	func_439(&(iParam0->f_9), iParam0->f_7, 0);
}

void func_438(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_183((*uParam0)[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

void func_439(int* iParam0, int iParam1, bool bParam2)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
	func_397(iParam1, iParam0, joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
	if (bParam2)
	{
		func_678(iParam1, -1034486097, 1);
	}
	else
	{
		func_678(iParam1, 942020339, 1);
	}
}

void func_440(int* iParam0)
{
	func_328(iParam0, 0);
	func_381(iParam0, 0, func_380(7));
	func_381(iParam0, 1, func_380(10));
}

void func_441(var uParam0)
{
	func_679(uParam0, 0);
	uParam0->f_75 = 0;
}

int func_442(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam0->f_7, 0))
	{
		if (uParam0->f_203 != 0)
		{
			uParam0->f_203 = 0;
		}
		return 0;
	}
	if (func_370(uParam0, 262144))
	{
		return 0;
	}
	*uParam1 = func_680(uParam0);
	*uParam2 = 0;
	*uParam3 = (func_370(uParam0, 65536) || func_681(uParam0, *uParam1, 0));
	*uParam4 = (*uParam3 && !func_682(uParam0, -1904017806));
	*uParam5 = (func_370(uParam0, 16) && PED::_0x569F1E1237508DEB(uParam0->f_7) == 2093245709);
	return 1;
}

int func_443(var uParam0, int iParam1, bool bParam2, var uParam3, bool bParam4, bool bParam5)
{
	if (bParam4 && func_682(uParam0, -1904017806))
	{
		func_341(&(uParam0->f_441));
		return 4;
	}
	else if (func_683(uParam0, &bParam2, iParam1, 1))
	{
		return func_616(uParam0, bParam2, 1);
	}
	else if (func_396(uParam0, bParam4, bParam5, 0))
	{
		return 3;
	}
	return 2;
}

int func_444(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;

	bVar0 = true;
	bVar1 = PED::_0x68821369A2CEADD5(iParam0->f_7, iParam0->f_468);
	bVar2 = (bParam5 || ((bParam3 && func_682(iParam0, 2093245709)) && iParam0->f_469 != 2093245709));
	iVar3 = TASK::_0xA92450B5AE687AAF(iParam0->f_87);
	if (TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 1))
	{
		return 19;
	}
	if (!bVar1)
	{
		if (bParam5)
		{
			if (iParam0->f_469 == 2093245709)
			{
				if (func_684(iParam0, 0, 0))
				{
					return 0;
				}
			}
		}
		if (!bVar2)
		{
			if (func_683(iParam0, &bParam2, iParam1, 1))
			{
				return func_616(iParam0, bParam2, 1);
			}
		}
		else if (TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 1))
		{
			func_341(&(iParam0->f_444));
			return 20;
		}
	}
	if (func_682(iParam0, iParam0->f_469))
	{
		if (func_684(iParam0, 0, 0))
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
			{
				case 0:
					func_685(iParam0, -1891374763, 5);
					break;
				default:
					func_685(iParam0, -756969178, 5);
					break;
			}
			func_341(&(iParam0->f_441));
			iParam0->f_468 = 0;
			return 4;
		}
	}
	else
	{
		if (!STREAMING::_0x19A6BE7D9C6884D3(iVar3, 262144, ENTITY::GET_ENTITY_MODEL(iParam0->f_7), PED::_0x569F1E1237508DEB(iParam0->f_7)))
		{
			bVar0 = false;
		}
		if (!STREAMING::_0x19A6BE7D9C6884D3(iVar3, 262145, ENTITY::GET_ENTITY_MODEL(iParam0->f_7), iParam0->f_469))
		{
			bVar0 = false;
		}
		if (bVar0 && func_684(iParam0, 0, 1))
		{
			if (!bVar1)
			{
				PED::_0xD65FDC686A031C83(iParam0->f_7, iParam0->f_468, 0.5f);
			}
			func_686(iParam0);
		}
	}
	return 3;
}

int func_445(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if ((bParam5 || bParam4) || !PED::IS_PED_USING_ANY_SCENARIO(iParam0->f_7))
	{
		return 0;
	}
	else if (func_683(iParam0, &bParam2, iParam1, 1))
	{
		return func_616(iParam0, bParam2, 1);
	}
	else if (func_687(iParam0) && func_681(iParam0, iParam1, 1))
	{
		if (!func_333(&(iParam0->f_441)) || func_343(&(iParam0->f_441), iParam0->f_470))
		{
			if (func_684(iParam0, 0, 1))
			{
				return 6;
			}
		}
	}
	else if (!bParam3)
	{
		if (!func_333(&(iParam0->f_441)) || func_343(&(iParam0->f_441), func_102(func_682(iParam0, -1904017806), 3f, iParam0->f_470)))
		{
			return 0;
		}
	}
	return 4;
}

int func_446(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (TASK::_0x79197F7D2BB5E73A(uParam0->f_7, uParam0->f_89, "SCRIPT_COMMON@SHARED_SCENARIOS@STAND@RANDOM@HERBALIST@MIX_MORTAR@TRANSITIONS@STAND_2_SIT", "STAND_2_SIT", func_170(-1189657660), 0))
	{
		return 7;
	}
	return 6;
}

int func_447(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iParam0->f_7, 0) && PED::_0x9C54041BB66BCF9E(iParam0->f_7, iParam0->f_89))
	{
		if (func_684(iParam0, 0, 1))
		{
			if (!func_370(iParam0, 64))
			{
				if (func_683(iParam0, &bParam2, iParam1, 1))
				{
					return func_616(iParam0, bParam2, 1);
				}
				else
				{
					return 10;
				}
			}
		}
	}
	return 7;
}

int func_448(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	func_341(&(uParam0->f_447));
	return 12;
}

int func_449(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (func_683(iParam0, &bParam2, iParam1, 1))
	{
		return func_616(iParam0, bParam2, 1);
	}
	else
	{
		if (!func_333(&(iParam0->f_447)))
		{
			func_341(&(iParam0->f_447));
		}
		if ((!func_30(iParam1, 8) || !func_333(&(iParam0->f_447))) || func_343(&(iParam0->f_447), (7f * 60f)))
		{
			if (func_684(iParam0, 0, 1))
			{
				return 14;
			}
		}
	}
	return 12;
}

int func_450(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (TASK::_0x79197F7D2BB5E73A(uParam0->f_7, uParam0->f_87, "SCRIPT_COMMON@SHARED_SCENARIOS@STAND@RANDOM@HERBALIST@MIX_MORTAR@TRANSITIONS@SIT_2_STAND", "SIT_2_STAND", func_170(-1904017806), 0))
	{
		return 15;
	}
	return 14;
}

int func_451(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iParam0->f_7, 0) && PED::_0x9C54041BB66BCF9E(iParam0->f_7, iParam0->f_87))
	{
		if (func_684(iParam0, 0, 1))
		{
			if (!func_370(iParam0, 64))
			{
				if (func_683(iParam0, &bParam2, iParam1, 1))
				{
					return func_616(iParam0, bParam2, 1);
				}
				else
				{
					return 2;
				}
			}
		}
	}
	return 15;
}

int func_452(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	func_331(iParam0->f_7);
	if (bParam5)
	{
		func_341(&(iParam0->f_444));
		return 20;
	}
	else if (TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 1))
	{
		if (TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 0))
		{
			func_341(&(iParam0->f_444));
			return 19;
		}
	}
	else if (func_684(iParam0, 0, 1))
	{
		if (!func_333(&(iParam0->f_444)) || func_343(&(iParam0->f_444), 2f))
		{
			func_341(&(iParam0->f_444));
			func_423(iParam0, -1f);
		}
	}
	return 18;
}

int func_453(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	func_331(uParam0->f_7);
	switch (func_688(uParam0, iParam1))
	{
		case 0:
			func_689(uParam0);
			break;
		case 1:
			func_689(uParam0);
			break;
		case 2:
			func_341(&(uParam0->f_444));
			return 20;
	}
	return 19;
}

int func_454(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;

	bVar0 = func_684(iParam0, 0, 1);
	if (bParam4 || bParam5)
	{
		if (bVar0)
		{
			return 0;
		}
		else
		{
			func_642(iParam0);
		}
	}
	else if (func_683(iParam0, &bParam2, iParam1, 0))
	{
		return func_616(iParam0, 0, 1);
	}
	else if (func_343(&(iParam0->f_444), 2f))
	{
		if (bVar0 && !TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 1))
		{
			if (!func_682(iParam0, -1189657660))
			{
				func_395(iParam0, MISC::GET_RANDOM_FLOAT_IN_RANGE(7f, 14f), 0);
				if (!func_682(iParam0, -1904017806) && func_30(iParam1, 65536))
				{
					return 2;
				}
				else
				{
					return 4;
				}
			}
			else
			{
				func_395(iParam0, MISC::GET_RANDOM_FLOAT_IN_RANGE(7f, 14f), 0);
				return 12;
			}
		}
		else
		{
			func_642(iParam0);
		}
	}
	return 20;
}

void func_455(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

bool func_456()
{
	return &Global_1935436 == 2;
}

void func_457(int iParam0)
{
	if (iParam0 >= &Global_1935436)
	{
		return;
	}
	Global_1935436->f_1 = iParam0;
}

void func_458(int iParam0, int iParam1)
{
	float fVar0;

	if (MISC::GET_RANDOM_EVENT_FLAG())
	{
		return;
	}
	Global_17503.f_3++;
	(Global_17503.f_42[iParam0 /*8*/])->f_1++;
	if (func_122(iParam0, 2))
	{
		func_691(iParam0, func_690(iParam1));
	}
	else
	{
		func_693(iParam0, func_692());
	}
	fVar0 = (1f + (BUILTIN::TO_FLOAT(((Global_17503.f_42[iParam0 /*8*/])->f_1 / 2)) * 0.1f));
	if (fVar0 > 2f)
	{
		fVar0 = 2f;
	}
	else if (fVar0 < 1f)
	{
		fVar0 = 1f;
	}
	func_694(iParam0, ((*Global_1310750)[iParam0 /*111*/])->f_36, fVar0, 1, 0);
	func_695(iParam0, 0);
	func_696(iParam0);
	func_697(1);
	PED::SET_PED_CONFIG_FLAG(Global_35, 514, true);
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_RANDOM_EVENT_FLAG(true);
	}
	AUDIO::_0x33D51F801CB16E4F();
	((*Global_1310750)[iParam0 /*111*/])->f_110 |= 4;
	Global_17503.f_6 = iParam0;
	Global_17503.f_10 = 1;
	Global_17503.f_7 = 0;
	Global_17503.f_8 = 0;
	if (!func_122(iParam0, 16))
	{
		func_459(iParam0, 0, 0, 0, 0);
	}
}

void func_459(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_698() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0 /*9*/];
		if (((func_243(iVar1) && !func_122(iVar1, iParam2)) && (!bParam3 || !func_476(iVar1))) && (!bParam4 || !func_699(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_700(iVar0);
			}
		}
		iVar0++;
	}
}

int func_460(int iParam0)
{
	return ((*Global_1310750)[iParam0 /*111*/])->f_39;
}

void func_461(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_177 != -1 || func_517(Global_1310750[uParam0->f_3 /*111*/], 16777216))
	{
		if (bParam2)
		{
			if (func_122(uParam0->f_3, 1073741824 /* Float: 2f */))
			{
				func_701(2, -1, 0, 0, 0);
			}
			else
			{
				func_701(1, -1, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			if (uParam0->f_45)
			{
				func_701(8, -1, 0, 0, 0);
			}
		}
		if (uParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!func_702(1, uParam0->f_177))
				{
					func_703(16, uParam0->f_177);
					func_704(1, uParam0->f_177);
				}
				COMPENDIUM::COMPENDIUM_GANG_ENCOUNTERED(func_705(uParam0->f_177));
			}
		}
	}
	else if (bParam2 || (bParam1 && uParam0->f_45))
	{
		func_701(8, -1, 0, 0, 0);
	}
}

int func_462()
{
	if (func_362(Global_1935630->f_44))
	{
		if (WEAPON::_0x6AD66548840472E5(Global_1935630->f_44))
		{
			if (CAM::_0xA24C1D341C6E0D53(1, 1, 1))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
		else if (func_706())
		{
			return 1;
		}
	}
	return 0;
}

bool func_463(int iParam0, int iParam1, bool bParam2, int iParam3)
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

float func_464(var uParam0, bool bParam1)
{
	float fVar0;

	if (uParam0->f_119 == -1f)
	{
		if (func_122(uParam0->f_3, 1024))
		{
			fVar0 = 95f;
		}
		else if (func_122(uParam0->f_3, 2048))
		{
			fVar0 = 80f;
		}
		else if (func_122(uParam0->f_3, 4096))
		{
			fVar0 = 65f;
		}
		else if (func_122(uParam0->f_3, 8192))
		{
			fVar0 = 55f;
		}
		else if (func_122(uParam0->f_3, 16384))
		{
			fVar0 = 30f;
		}
		else
		{
			fVar0 = 85f;
		}
		if (func_122(uParam0->f_3, 1))
		{
		}
		else if (func_122(uParam0->f_3, 2))
		{
			fVar0 = (fVar0 - 15f);
		}
		uParam0->f_119 = fVar0;
	}
	fVar0 = uParam0->f_119;
	if (bParam1)
	{
		fVar0 = (fVar0 + 150f);
	}
	return fVar0;
}

int func_465(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6)
{
	float fVar0;
	bool bVar1;

	iParam2 = iParam2;
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_6))
	{
		return 0;
	}
	fVar0 = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
	switch (*uParam0)
	{
		case 0:
			if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6) && !PED::_0x5102307CE88798EB(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6)))
			{
				PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
			}
			else if (func_707(uParam0, fVar0, (fParam1 * fParam1), iParam3))
			{
				*uParam0 = 1;
			}
			else
			{
				uParam0->f_8 = 0f;
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_6))
			{
				bVar1 = false;
			}
			else if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6))
			{
				if (fParam4 > 0f)
				{
					bVar1 = PED::_0x164CECC59E70DF86(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6), fParam4);
				}
				else
				{
					bVar1 = PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
				}
			}
			else
			{
				bVar1 = ENTITY::_0xC8CCDB712FBCBA92(uParam0->f_6);
			}
			if (!bVar1)
			{
				uParam0->f_1.f_4 = 1;
			}
			if (bVar1)
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_6))
				{
					*uParam0 = 2;
				}
				else
				{
					if (bParam5 && !ENTITY::IS_ENTITY_A_PED(uParam0->f_6))
					{
						fVar0 = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
					}
					if (func_708(uParam0, fVar0, (fParam1 * fParam1), iParam3))
					{
						*uParam0 = 0;
					}
					else
					{
						*uParam0 = 2;
					}
				}
			}
			else if (uParam0->f_1.f_4)
			{
				uParam0->f_1.f_4 = 0;
				*uParam0 = 0;
				uParam0->f_8 = 0f;
			}
			break;
		case 2:
			*uParam0 = 0;
			break;
	}
	if (uParam0->f_8 != 0f)
	{
		uParam0->f_7 = (func_709() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

int func_466(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar1 = 0;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(((*uParam0)[iVar0 /*9*/])->f_6) && ((*uParam0)[iVar0 /*9*/])->f_7 > 0f) && ENTITY::IS_ENTITY_ON_SCREEN(((*uParam0)[iVar0 /*9*/])->f_6))
		{
			iVar1++;
			fVar2 = (fVar2 + ((*uParam0)[iVar0 /*9*/])->f_7);
		}
		iVar0++;
	}
	if (iParam1 > 1)
	{
		iParam1 = (iParam1 - 1);
	}
	if (iVar1 < iParam1)
	{
		return 0;
	}
	if (fVar2 < fParam2)
	{
		return 0;
	}
	func_218(uParam0);
	return 1;
}

bool func_467()
{
	return (Global_1894899 & 1 != 0 && func_479() != -1);
}

int func_468(var uParam0, float fParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_98)
	{
		if (&uParam0->f_98[iVar0] != 0f)
		{
			if (&uParam0->f_98[iVar0] < fParam1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_469(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_710(bParam1, bParam2, bParam3);
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

int func_470(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = func_712(func_711());
	if (func_30(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_30(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return 1;
		}
	}
	if (func_30(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return 1;
		}
	}
	if (func_30(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_30(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_30(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return 1;
		}
	}
	if (func_30(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_30(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return 1;
		}
	}
	if (func_30(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_30(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_30(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_30(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_30(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_30(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return 1;
		}
	}
	if (func_30(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_30(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_30(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return 1;
		}
	}
	return 0;
}

bool func_471(int iParam0, int iParam1)
{
	return (func_460(iParam0) && iParam1) != 0;
}

int func_472(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;

	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 & -1 == -1)
	{
		return 1;
	}
	MISC::_GET_WEATHER_TYPE_TRANSITION(&iVar0, &iVar1, &fVar2);
	if (fVar2 < 0.5f)
	{
		iVar3 = iVar0;
	}
	else
	{
		iVar3 = iVar1;
	}
	if (iParam0 & 1 == 1 && func_713(iVar3))
	{
		return 1;
	}
	if (iParam0 & 2 == 2 && func_714(iVar3))
	{
		return 1;
	}
	if (iParam0 & 4 == 4 && func_715(iVar3))
	{
		return 1;
	}
	if (iParam0 & 8 == 8 && func_716(iVar3))
	{
		return 1;
	}
	if (iParam0 & 16 == 16 && func_717(iVar3))
	{
		return 1;
	}
	if (iParam0 & 32 == 32 && func_718(iVar3))
	{
		return 1;
	}
	if (iParam0 & 64 == 64 && func_719(iVar3))
	{
		return 1;
	}
	return 0;
}

int func_473(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_720(bParam0, &uVar0, &uVar1))
	{
		return 1;
	}
	return 0;
}

int func_474(int iParam0)
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

int func_475(int iParam0, bool bParam1, bool bParam2)
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
		if (func_721())
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
		iVar0 = func_722(&(Global_1898164->f_1[0 /*5*/]));
		if (func_723(iVar0) && func_724(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_725(&(Global_1898164->f_1[0 /*5*/])))
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

int func_476(int iParam0)
{
	if (!func_243(iParam0))
	{
		return 0;
	}
	if (func_726(64) && func_727(iParam0))
	{
		return 1;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_46;
}

int func_477(int iParam0, bool bParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0) || !bParam1)
		{
			iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
			if (INTERIOR::IS_VALID_INTERIOR(iVar0))
			{
				if (func_728(iVar0) || func_729(iVar0))
				{
					return 0;
				}
				return 1;
			}
		}
	}
	return 0;
}

bool func_478()
{
	return Global_1894899 & 4 != 0;
}

int func_479()
{
	return Global_1894899->f_2;
}

int func_480(int iParam0)
{
	if (!func_730(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 11:
			return 0;
		case 76:
			return 1;
		case 15:
			return 3;
		case 128:
			return 2;
		default:
			break;
	}
	return -1;
}

int func_481(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return 0;
	}
	return 1;
}

int func_482(vector3 vParam0, int iParam3)
{
	if (!func_481(iParam3))
	{
		return 0;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(((*Global_1392194)[iParam3 /*10*/])->f_5))
	{
		return VOLUME::_0xF256A75210C5C0EB(((*Global_1392194)[iParam3 /*10*/])->f_5, vParam0);
	}
	return 0;
}

bool func_483(vector3 vParam0)
{
	float fVar0;

	if (func_79(vParam0))
	{
		return false;
	}
	fVar0 = func_102(func_467(), 6f, 22f);
	return VOLUME::_0x769BB7626B8CDB06(vParam0, fVar0, 1, 0, 16384);
}

int func_484(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (!bParam4)
	{
		if (PLAYER::_0x1A51BFE60708E482(iVar0))
		{
			if (PLAYER::GET_PLAYER_TARGET_ENTITY(iVar0, &iVar1))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
				{
					if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
					{
						func_341(uParam0);
						if (bParam3)
						{
							return 1;
						}
					}
					if (!bParam3)
					{
						return 1;
					}
				}
			}
		}
	}
	if (PLAYER::_0x6C54E69516CC56BD(iVar0) > 0)
	{
		func_341(uParam0);
		return 1;
	}
	if (!bParam4)
	{
		if (!func_333(uParam0))
		{
			return 0;
		}
		else if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
		{
			return 1;
		}
		if (!func_343(uParam0, fParam2))
		{
			return 1;
		}
		if (func_333(uParam0))
		{
			func_334(uParam0);
		}
	}
	return 0;
}

bool func_485(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

float func_486(int iParam0)
{
	if (!func_243(iParam0))
	{
		return 0f;
	}
	if (!func_731(iParam0))
	{
		return 0f;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_44;
}

char* func_487()
{
	return "unnamed";
}

char* func_488(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ANIMAL_ATTACK";
		case 75:
			return "BANDITO_BREAKOUT";
		case 8:
			return "BURNING_BODIES";
		case 1:
			return "ANIMAL_MAULING";
		case 2:
			return "APPROACH";
		case 3:
			return "ARMS_DEAL";
		case 76:
			return "BANDITO_EXECUTION";
		case 4:
			return "BEAR_TRAP";
		case 77:
			return "BGN_TOWN_ENCOUNTER";
		case 5:
			return "BOAT_ATTACK";
		case 6:
			return "BOOBY_TRAP";
		case 7:
			return "BOUNTY TRANSPORT";
		case 78:
			return "BRONTE_PATROL";
		case 9:
			return "CAMPFIRE_AMBUSH";
		case 10:
			return "CHAIN_GANG";
		case 11:
			return "CHECKPOINT";
		case 12:
			return "COACH_ROBBERY";
		case 79:
			return "CONSEQUENCE";
		case 13:
			return "CORPSE_CART";
		case 14:
			return "CRASHED_WAGON";
		case 80:
			return "DARK_ALLEY_AMBUSH";
		case 81:
			return "DARK_ALLEY_BUM";
		case 82:
			return "DARK_ALLEY_STAB";
		case 83:
			return "DEAD_BODIES";
		case 84:
			return "DEAD_JOHN";
		case 15:
			return "DEL_LOBO_POSSE";
		case 85:
			return "DISABLED_BEGGAR";
		case 86:
			return "DOMESTIC_DISPUTE";
		case 87:
			return "DROWN_MURDER";
		case 16:
			return "DRUNK_CAMP";
		case 88:
			return "DRUNK_DUELER";
		case 89:
			return "DUEL_BOASTER";
		case 90:
			return "DUEL_WINNER";
		case 17:
			return "ESCORT";
		case 18:
			return "EXECUTIONS";
		case 91:
			return "FLEEING_FAMILY";
		case 19:
			return "FLEEING_TRESPASSER";
		case 92:
			return "FOOT_ROBBERY";
		case 20:
			return "FRIENDLY_OUTDOORSMAN";
		case 21:
			return "FROZEN_TO_DEATH";
		case 22:
			return "FUSSAR_CHASE";
		case 23:
			return "GANG_CAMP_REMINDER";
		case 94:
			return "GANG_PED_ENCOUNTER";
		case 24:
			return "GOLD_PANNER";
		case 119:
			return "HERBALIST_CAMP";
		case 27:
			return "HORSE_RACE";
		case 28:
			return "HOSTAGE_RESCUE";
		case 29:
			return "INBRED_KIDNAP";
		case 30:
			return "INJURED_RIDER";
		case 95:
			return "INTIMIDATION TACTICS";
		case 31:
			return "KIDNAP_VICTIM";
		case 32:
			return "RALLY_DISPUTE";
		case 33:
			return "RALLY";
		case 34:
			return "RALLY_SETUP";
		case 35:
			return "LARAMIE_GANG_RUSTLING";
		case 96:
			return "LEM_TOWN_ENCOUNTER";
		case 36:
			return "LOCKED_SAFE";
		case 37:
			return "LONE_PRISONER";
		case 97:
			return "LOST_DOG";
		case 98:
			return "LOST_DRUNK";
		case 38:
			return "LOST_FRIEND";
		case 39:
			return "LOST_MAN";
		case 40:
			return "MOONSHINE_CAMP";
		case 41:
			return "MURDER_CAMPFIRE";
		case 42:
			return "NAKED_SWIMMER";
		case 93:
			return "FUNDRAISER";
		case 99:
			return "ODR_TOWN_ENCOUNTER";
		case 100:
			return "ON_THE_RUN";
		case 43:
			return "OUTLAW_LOOTER";
		case 44:
			return "OUTLAW_TRANSPORT";
		case 101:
			return "PARLOR_AMBUSH";
		case 102:
			return "PEEPING_TOM";
		case 103:
			return "PICKPOCKET";
		case 45:
			return "SNAKE_BITE";
		case 104:
			return "PISS_POT";
		case 46:
			return "PLAYER_CAMP_ATTACK";
		case 47:
			return "PLAYER_CAMP_STRANGER";
		case 48:
			return "POISONED";
		case 105:
			return "POLICE_CHASE";
		case 49:
			return "POSSE_BREAKOUT";
		case 50:
			return "PRISON_WAGON";
		case 106:
			return "PUBLIC_HANGING";
		case 107:
			return "RAT_INFESTATION";
		case 51:
			return "RIFLE_PRACTICE";
		case 108:
			return "ROWDY_DRUNKS";
		case 53:
			return "SAVAGE_AFTERMATH";
		case 54:
			return "SAVAGE_FIGHT";
		case 56:
			return "SAVAGE_WAGON";
		case 55:
			return "SAVAGE_WARNING";
		case 57:
			return "SHARP_SHOOTER";
		case 109:
			return "SHOW_OFF";
		case 58:
			return "SKIPPING_STONES";
		case 110:
			return "SLUM_AMBUSH";
		case 59:
			return "SPOOKED_HORSE";
		case 60:
			return "STALKING_HUNTER";
		case 61:
			return "STALKING_SHADOWS";
		case 62:
			return "STRANDED_RIDER";
		case 111:
			return "STREET_FIGHT";
		case 112:
			return "TAUNTING";
		case 67:
			return "TORTURING_CAPTIVE";
		case 68:
			return "TORCH_PROCESSION";
		case 113:
			return "TOWN_BURIAL";
		case 114:
			return "TOWN_CONFRONTATION";
		case 115:
			return "TOWN_ROBBERY";
		case 117:
			return "TOWN_TERROR";
		case 116:
			return "TOWN_WIDOW";
		case 63:
			return "TRAFFIC_ATTACK";
		case 64:
			return "TRAIN_HOLDUP";
		case 65:
			return "TRAPPED_WOMAN";
		case 66:
			return "TREASURE_HUNTER";
		case 69:
			return "VOICE";
		case 70:
			return "WAGON_THREAT";
		case 71:
			return "WASHED_ASHORE";
		case 118:
			return "WEALTHY_COUPLE";
		case 72:
			return "WILDERNESS_HANGING";
		case 73:
			return "WILD_MAN";
		case 74:
			return "WILD_MAN_CAVE";
		default:
			break;
	}
	return "BEAT NO NAME";
}

int func_489(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;

	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return 0;
	}
	vVar0 = { VOLUME::_0xF70F00013A62F866(iParam0) };
	vVar3 = { VOLUME::_0x3E2A25B2416DD67E(iParam0) };
	uVar6 = func_518(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return uVar6;
}

bool func_490(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_491(int iParam0, int iParam1)
{
	if (!func_490(iParam0))
	{
		return false;
	}
	return (Global_1395482->f_2[iParam0] && iParam1) != 0;
}

float func_492(vector3 vParam0, float fParam3)
{
	if (fParam3 > 0f)
	{
		return fParam3;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vParam0, true);
}

float func_493(float fParam0, int iParam1)
{
	float fVar0;

	fVar0 = (2f * BUILTIN::SIN((180f * (fParam0 / func_227(iParam1)))));
	if (fVar0 < 0f)
	{
		return 0f;
	}
	else if (fVar0 > 1f)
	{
		return 1f;
	}
	return fVar0;
}

float func_494(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

float func_495(float fParam0)
{
	float fVar0;

	if (fParam0 < 250f)
	{
		if (fParam0 < 50f)
		{
			fVar0 = 0.25f;
		}
		else if (fParam0 < 100f)
		{
			fVar0 = 0.5f;
		}
		else if (fParam0 < 150f)
		{
			fVar0 = 1f;
		}
		else if (fParam0 < 200f)
		{
			fVar0 = 1.5f;
		}
		else if (fParam0 < 250f)
		{
			fVar0 = 2f;
		}
	}
	else if (fParam0 < 500f)
	{
		if (fParam0 < 300f)
		{
			fVar0 = 2.5f;
		}
		else if (fParam0 < 350f)
		{
			fVar0 = 3f;
		}
		else if (fParam0 < 400f)
		{
			fVar0 = 3.5f;
		}
		else if (fParam0 < 450f)
		{
			fVar0 = 4f;
		}
		else if (fParam0 < 500f)
		{
			fVar0 = 4.5f;
		}
	}
	else if (fParam0 < 750f)
	{
		if (fParam0 < 550f)
		{
			fVar0 = 5f;
		}
		else if (fParam0 < 600f)
		{
			fVar0 = 5.5f;
		}
		else if (fParam0 < 650f)
		{
			fVar0 = 6f;
		}
		else if (fParam0 < 700f)
		{
			fVar0 = 6.5f;
		}
		else if (fParam0 < 750f)
		{
			fVar0 = 7f;
		}
	}
	else if (fParam0 < 1000f)
	{
		if (fParam0 < 800f)
		{
			fVar0 = 7.5f;
		}
		else if (fParam0 < 850f)
		{
			fVar0 = 8f;
		}
		else if (fParam0 < 900f)
		{
			fVar0 = 8.5f;
		}
		else if (fParam0 < 950f)
		{
			fVar0 = 9f;
		}
		else if (fParam0 < 1000f)
		{
			fVar0 = 9.5f;
		}
	}
	else
	{
		fVar0 = 10f;
	}
	return fVar0;
}

Vector3 func_496(int iParam0)
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
	return func_497((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

Vector3 func_497(vector3 vParam0)
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

int func_498(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_499(int iParam0, int iParam1)
{
	iParam0 = func_498(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_24 = (((*Global_1900383)[iParam0 /*45*/])->f_24 - (((*Global_1900383)[iParam0 /*45*/])->f_24 && iParam1));
}

void func_500()
{
	if (func_732(0))
	{
		func_733(0);
	}
	if (func_732(1))
	{
		func_733(1);
	}
	if (func_732(5))
	{
		func_733(5);
	}
	if (func_732(6))
	{
		func_734(6);
	}
}

void func_501(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_735(iParam0, iParam1);
	(Global_17503.f_1003[iVar0 /*6*/])->f_1 = iParam2;
}

int func_502(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_736(iParam0, iParam1);
	iVar0 = 0;
	while (iVar0 < Global_17503.f_1003)
	{
		if (&Global_17503.f_1003[iVar0 /*6*/] == iVar1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_503(int iParam0)
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

void func_504(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_503(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_737(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_738(iVar0);
	*uParam0 = 0;
}

void func_505()
{
	func_739(23);
}

void func_506(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 || iParam0);
}

int func_507(var uParam0)
{
	if (uParam0->f_46 && uParam0->f_48)
	{
		if (uParam0->f_5.f_16 != 16384)
		{
			return 1;
		}
	}
	return 0;
}

void func_508(int iParam0)
{
	int iVar0;

	iVar0 = func_740(iParam0);
	if (iVar0 != 0)
	{
		func_741(-1, 24, 0, iVar0);
	}
}

void func_509(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (Global_1310750->f_16071 != iParam0 && !bParam2)
	{
		return;
	}
	if (&Global_17503.f_42[iParam0 /*8*/] == 0)
	{
		func_743(func_742(-1029789297), 1);
	}
	Global_17503.f_4++;
	Global_17503.f_42[iParam0 /*8*/] = &Global_17503.f_42[iParam0 /*8*/] + 1;
	((*Global_1310750)[iParam0 /*111*/])->f_110 |= 8;
	if (func_122(iParam0, 2))
	{
		func_744(iParam0, func_690(iParam3));
	}
	if (func_122(iParam0, 1))
	{
		if (iParam4 == -1)
		{
			iParam4 = func_692();
		}
		func_745(iParam0, iParam4);
	}
	if (iParam1 >= 0 && !func_216(iParam0, 65536))
	{
		func_746(iParam0, iParam1);
		func_747(iParam0, func_256(iParam0, iParam1));
		func_506(128);
	}
	func_694(iParam0, ((*Global_1310750)[iParam0 /*111*/])->f_37, 1065353216 /* Float: 1f */, 0, 0);
	func_695(iParam0, 1);
	if (!bParam2)
	{
		func_506(16);
		Global_17503.f_5 = iParam0;
		Global_17503.f_9 = 1;
		Global_17503.f_7 = 0;
		Global_17503.f_8 = 0;
		func_748(524288);
	}
	if (func_749(iParam0) != 0)
	{
		if (&Global_17503.f_42[iParam0 /*8*/] >= func_749(iParam0))
		{
			(Global_17503.f_42[iParam0 /*8*/])->f_6 = 1;
		}
	}
}

void func_510(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_750(&Global_0, 8);
	}
	if (!func_751() || func_90() != -1)
	{
		return;
	}
	func_750(&Global_0, 1);
}

int func_511(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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
				return 1;
			}
		}
	}
	return 0;
}

int func_512(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 12;
		case 2:
			return 23;
		case 3:
			return 6;
		case 4:
			return 17;
		case 5:
			return 1;
		case 6:
			return 3;
		case 7:
			return 23;
		case 8:
			return 1;
		case 9:
			return 8;
		case 10:
			return 2;
		case 11:
			return 4;
		case 12:
			return 18;
		case 13:
			return 12;
		case 14:
			return 7;
		case 15:
			return 21;
		case 16:
			return 19;
		case 17:
			return 12;
		case 18:
			return 7;
		case 19:
			return 1;
		case 20:
			return 17;
		case 21:
			return 3;
		case 22:
			return 1;
		case 23:
			return 17;
		case 24:
			return 14;
		case 27:
			return 11;
		case 28:
			return 5;
		case 29:
			return 8;
		case 30:
			return 38;
		case 31:
			return 20;
		case 32:
			return 10;
		case 33:
			return 13;
		case 34:
			return 11;
		case 35:
			return 2;
		case 36:
			return 12;
		case 37:
			return 20;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 12;
		case 41:
			return 3;
		case 42:
			return 1;
		case 43:
			return 27;
		case 44:
			return 9;
		case 45:
			return 15;
		case 46:
			return 2;
		case 47:
			return 2;
		case 48:
			return 9;
		case 49:
			return 7;
		case 50:
			return 36;
		case 51:
			return 5;
		case 53:
			return 3;
		case 54:
			return 6;
		case 55:
			return 2;
		case 56:
			return 12;
		case 57:
			return 14;
		case 58:
			return 8;
		case 59:
			return 3;
		case 60:
			return 11;
		case 61:
			return 2;
		case 62:
			return 17;
		case 63:
			return 6;
		case 64:
			return 7;
		case 65:
			return 10;
		case 66:
			return 12;
		case 67:
			return 5;
		case 68:
			return 5;
		case 69:
			return 5;
		case 70:
			return 6;
		case 71:
			return 8;
		case 72:
			return 9;
		case 73:
			return 4;
		case 74:
			return 1;
		case 75:
			return 1;
		case 76:
			return 1;
		case 77:
			return 3;
		case 78:
			return 2;
		case 79:
			return 6;
		case 80:
			return 3;
		case 81:
			return 15;
		case 82:
			return 9;
		case 83:
			return 2;
		case 84:
			return 2;
		case 85:
			return 11;
		case 86:
			return 2;
		case 87:
			return 9;
		case 88:
			return 2;
		case 89:
			return 1;
		case 90:
			return 2;
		case 91:
			return 2;
		case 92:
			return 3;
		case 93:
			return 1;
		case 94:
			return 9;
		case 95:
			return 1;
		case 96:
			return 7;
		case 97:
			return 6;
		case 98:
			return 4;
		case 99:
			return 2;
		case 100:
			return 1;
		case 101:
			return 2;
		case 102:
			return 3;
		case 103:
			return 3;
		case 104:
			return 3;
		case 105:
			return 2;
		case 106:
			return 4;
		case 107:
			return 1;
		case 108:
			return 3;
		case 109:
			return 3;
		case 110:
			return 1;
		case 111:
			return 4;
		case 112:
			return 3;
		case 113:
			return 3;
		case 114:
			return 16;
		case 115:
			return 3;
		case 116:
			return 7;
		case 117:
			return 2;
		case 118:
			return 10;
		case 119:
			return 17;
		default:
			break;
	}
	return 0;
}

int func_513(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 10;
		case 2:
			return 22;
		case 3:
			return 45;
		case 4:
			return 51;
		case 5:
			return 68;
		case 6:
			return 69;
		case 7:
			return 72;
		case 8:
			return 95;
		case 9:
			return 96;
		case 10:
			return 104;
		case 11:
			return 106;
		case 12:
			return 110;
		case 13:
			return 128;
		case 14:
			return 140;
		case 15:
			return 147;
		case 16:
			return 168;
		case 17:
			return 187;
		case 18:
			return 199;
		case 19:
			return 206;
		case 20:
			return 207;
		case 21:
			return 224;
		case 22:
			return 227;
		case 23:
			return 228;
		case 24:
			return 245;
		case 27:
			return 259;
		case 28:
			return 270;
		case 29:
			return 275;
		case 30:
			return 283;
		case 31:
			return 321;
		case 32:
			return 341;
		case 33:
			return 351;
		case 34:
			return 364;
		case 35:
			return 375;
		case 36:
			return 377;
		case 37:
			return 389;
		case 38:
			return 409;
		case 39:
			return 410;
		case 40:
			return 411;
		case 41:
			return 423;
		case 42:
			return 426;
		case 43:
			return 427;
		case 44:
			return 454;
		case 45:
			return 463;
		case 46:
			return 478;
		case 47:
			return 480;
		case 48:
			return 482;
		case 49:
			return 491;
		case 50:
			return 498;
		case 51:
			return 534;
		case 53:
			return 539;
		case 54:
			return 542;
		case 55:
			return 548;
		case 56:
			return 550;
		case 57:
			return 562;
		case 58:
			return 576;
		case 59:
			return 584;
		case 60:
			return 587;
		case 61:
			return 598;
		case 62:
			return 600;
		case 63:
			return 617;
		case 64:
			return 623;
		case 65:
			return 630;
		case 66:
			return 640;
		case 67:
			return 652;
		case 68:
			return 657;
		case 69:
			return 662;
		case 70:
			return 667;
		case 71:
			return 673;
		case 72:
			return 681;
		case 73:
			return 690;
		case 74:
			return 694;
		case 75:
			return 695;
		case 76:
			return 696;
		case 77:
			return 697;
		case 78:
			return 700;
		case 79:
			return 702;
		case 80:
			return 708;
		case 81:
			return 711;
		case 82:
			return 726;
		case 83:
			return 735;
		case 84:
			return 737;
		case 85:
			return 739;
		case 86:
			return 750;
		case 87:
			return 752;
		case 88:
			return 761;
		case 89:
			return 763;
		case 90:
			return 764;
		case 91:
			return 766;
		case 92:
			return 768;
		case 93:
			return 771;
		case 94:
			return 772;
		case 95:
			return 781;
		case 96:
			return 782;
		case 97:
			return 789;
		case 98:
			return 795;
		case 99:
			return 799;
		case 100:
			return 801;
		case 101:
			return 802;
		case 102:
			return 804;
		case 103:
			return 807;
		case 104:
			return 810;
		case 105:
			return 813;
		case 106:
			return 815;
		case 107:
			return 819;
		case 108:
			return 820;
		case 109:
			return 823;
		case 110:
			return 826;
		case 111:
			return 827;
		case 112:
			return 831;
		case 113:
			return 834;
		case 114:
			return 837;
		case 115:
			return 853;
		case 116:
			return 856;
		case 117:
			return 863;
		case 118:
			return 865;
		case 119:
			return 875;
		default:
			break;
	}
	return -1;
}

int func_514(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 7:
			switch (iParam1)
			{
				case 0:
					*((*uParam2)[0 /*3*/]) = { -1075.036f, -498.9537f, 80.4572f };
					*((*uParam2)[1 /*3*/]) = { -1058.055f, -609.5211f, 76.6181f };
					*((*uParam2)[2 /*3*/]) = { -1272.208f, -612.5573f, 100.8638f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 1:
					*((*uParam2)[0 /*3*/]) = { -2288.302f, -389.368f, 155.9838f };
					*((*uParam2)[1 /*3*/]) = { -2267.837f, -294.2087f, 162.0459f };
					*((*uParam2)[2 /*3*/]) = { -2588.6f, -283.9735f, 157.3797f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 2:
					*((*uParam2)[0 /*3*/]) = { -1751.366f, 174.5853f, 140.272f };
					*((*uParam2)[1 /*3*/]) = { -1639.375f, -163.5104f, 165.0787f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 3:
					*((*uParam2)[0 /*3*/]) = { -771.0659f, -259.0937f, 47.9193f };
					*((*uParam2)[1 /*3*/]) = { -822.0638f, -500.4154f, 43.2726f };
					*((*uParam2)[2 /*3*/]) = { -1024.218f, -401.8981f, 74.0529f };
					*((*uParam2)[3 /*3*/]) = { -1006.993f, -282.9351f, 74.6298f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 4:
					*((*uParam2)[0 /*3*/]) = { -1338.573f, 327.9119f, 84.6143f };
					*((*uParam2)[1 /*3*/]) = { -1232.65f, 330.8496f, 62.4046f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 5:
					*((*uParam2)[0 /*3*/]) = { -1502.984f, -885.5237f, 88.3171f };
					*((*uParam2)[1 /*3*/]) = { -1297.384f, -819.8127f, 66.0834f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 6:
					*((*uParam2)[0 /*3*/]) = { 350.4579f, 1090.999f, 185.1566f };
					*((*uParam2)[1 /*3*/]) = { 92.55f, 1093.111f, 180.0293f };
					*((*uParam2)[2 /*3*/]) = { 409.0284f, 1196.024f, 176.0849f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 7:
					*((*uParam2)[0 /*3*/]) = { 749.1558f, 1391.218f, 169.0392f };
					*((*uParam2)[1 /*3*/]) = { 655.3339f, 1501.052f, 182.3537f };
					*((*uParam2)[2 /*3*/]) = { 564.7472f, 1351.075f, 181.0084f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 8:
					*((*uParam2)[0 /*3*/]) = { 798.8331f, 1217.176f, 139.389f };
					*((*uParam2)[1 /*3*/]) = { 796.767f, 1022.301f, 117.9023f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 9:
					*((*uParam2)[0 /*3*/]) = { 1499.724f, 1483.517f, 148.1553f };
					*((*uParam2)[1 /*3*/]) = { 1762.153f, 1460.505f, 154.3694f };
					*((*uParam2)[2 /*3*/]) = { 1791.473f, 1553.145f, 158.3201f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 10:
					*((*uParam2)[0 /*3*/]) = { 1592.016f, 838.9788f, 137.0506f };
					*((*uParam2)[1 /*3*/]) = { 1481.788f, 983.7827f, 159.4282f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 11:
					*((*uParam2)[0 /*3*/]) = { 2066.821f, 1396.182f, 161.616f };
					*((*uParam2)[1 /*3*/]) = { 2018.585f, 1589.685f, 166.3078f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 12:
					*((*uParam2)[0 /*3*/]) = { 1931.246f, 1417.71f, 175.205f };
					*((*uParam2)[1 /*3*/]) = { 1758.616f, 1470.966f, 153.1616f };
					*((*uParam2)[2 /*3*/]) = { 1908.101f, 1340.718f, 184.5229f };
					*((*uParam2)[3 /*3*/]) = { 1758.631f, 1339.565f, 179.8116f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 13:
					*((*uParam2)[0 /*3*/]) = { 906.3064f, 1862.921f, 276.5091f };
					*((*uParam2)[1 /*3*/]) = { 1227.372f, 1910.686f, 303.6052f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 14:
					*((*uParam2)[0 /*3*/]) = { 39.5976f, -446.5889f, 73.5138f };
					*((*uParam2)[1 /*3*/]) = { 261.8906f, -501.4701f, 69.7941f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 15:
					*((*uParam2)[0 /*3*/]) = { 147.7795f, 574.2345f, 124.4514f };
					*((*uParam2)[1 /*3*/]) = { 353.6481f, 791.2978f, 158.3952f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 16:
					*((*uParam2)[0 /*3*/]) = { 1152.273f, 1.4974f, 91.3795f };
					*((*uParam2)[1 /*3*/]) = { 1229.58f, -41.3491f, 97.8027f };
					*((*uParam2)[2 /*3*/]) = { 1388.351f, 191.7681f, 91.0511f };
					*((*uParam2)[3 /*3*/]) = { 1182.174f, 249.1711f, 95.8012f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 17:
					*((*uParam2)[0 /*3*/]) = { 2436.349f, 1255.752f, 108.7815f };
					*((*uParam2)[1 /*3*/]) = { 2581.654f, 1319.187f, 109.4025f };
					*((*uParam2)[2 /*3*/]) = { 2648.991f, 1389.994f, 86.802f };
					*((*uParam2)[3 /*3*/]) = { 2499.877f, 1520.766f, 84.1962f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 18:
					*((*uParam2)[0 /*3*/]) = { 2886.699f, 650.0214f, 56.9408f };
					*((*uParam2)[1 /*3*/]) = { 2841.172f, 901.8114f, 48.3778f };
					*((*uParam2)[2 /*3*/]) = { 2789.388f, 789.1998f, 69.4871f };
					*((*uParam2)[3 /*3*/]) = { 2838.36f, 650.3098f, 66.5798f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 19:
					*((*uParam2)[0 /*3*/]) = { 1966.349f, 55.0459f, 77.6335f };
					*((*uParam2)[1 /*3*/]) = { 1997.614f, 290.7841f, 80.4139f };
					*((*uParam2)[2 /*3*/]) = { 2073.044f, 228.7493f, 69.5644f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 20:
					*((*uParam2)[0 /*3*/]) = { 2515.785f, 798.911f, 69.7688f };
					*((*uParam2)[1 /*3*/]) = { 2506.887f, 618.8073f, 68.6403f };
					*((*uParam2)[2 /*3*/]) = { 2377.615f, 751.5095f, 66.3114f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 21:
					*((*uParam2)[0 /*3*/]) = { 2128.213f, 1721.563f, 130.3847f };
					*((*uParam2)[1 /*3*/]) = { 2264.183f, 1720.874f, 103.2933f };
					*((*uParam2)[2 /*3*/]) = { 2134.791f, 1568.948f, 115.1957f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 22:
					*((*uParam2)[0 /*3*/]) = { 2826.741f, 2204.882f, 155.551f };
					*((*uParam2)[1 /*3*/]) = { 2838.074f, 1999.792f, 161.9055f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 2:
					*((*uParam2)[0 /*3*/]) = { 350.8081f, 1195.732f, 176.1334f };
					*((*uParam2)[1 /*3*/]) = { -9.8736f, 1100.082f, 171.5504f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 6:
					*((*uParam2)[0 /*3*/]) = { 951.1178f, 411.6494f, 111.4674f };
					*((*uParam2)[1 /*3*/]) = { 786.1444f, 1078.456f, 125.8602f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 7:
					*((*uParam2)[0 /*3*/]) = { -784.4099f, 128.655f, 42.3724f };
					*((*uParam2)[1 /*3*/]) = { -478.0183f, 232.7834f, 42.1853f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 8:
					*((*uParam2)[0 /*3*/]) = { 1148.99f, 1456.264f, 190.799f };
					*((*uParam2)[1 /*3*/]) = { 840.1897f, 1221.47f, 141.6344f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 9:
					*((*uParam2)[0 /*3*/]) = { 1413.901f, -334.469f, 88.1597f };
					*((*uParam2)[1 /*3*/]) = { 1222.652f, -59.931f, 93.5015f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 10:
					*((*uParam2)[0 /*3*/]) = { 1548.822f, -1190.659f, 49.1131f };
					*((*uParam2)[1 /*3*/]) = { 1547.513f, -1410.952f, 60.6415f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 0:
					*((*uParam2)[0 /*3*/]) = { 2466.914f, -732.939f, 42.531f };
					*((*uParam2)[1 /*3*/]) = { 2303.902f, -750.908f, 41.569f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 1:
					*((*uParam2)[0 /*3*/]) = { 1757.029f, -832.27f, 41.718f };
					*((*uParam2)[1 /*3*/]) = { 1882.646f, -955.777f, 42.672f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 2:
					*((*uParam2)[0 /*3*/]) = { 2117.433f, -847.803f, 41.749f };
					*((*uParam2)[1 /*3*/]) = { 2112.33f, -625.643f, 41.772f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 12:
					*((*uParam2)[0 /*3*/]) = { 2552.283f, -208.465f, 43.013f };
					*((*uParam2)[1 /*3*/]) = { 2725.735f, 32.896f, 51.048f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 13:
					*((*uParam2)[0 /*3*/]) = { 2219.83f, -503.6095f, 41.0142f };
					*((*uParam2)[1 /*3*/]) = { 2371.775f, -527.7825f, 40.7584f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 14:
					*((*uParam2)[0 /*3*/]) = { 2157.784f, -459.4536f, 40.5431f };
					*((*uParam2)[1 /*3*/]) = { 2354.891f, -401.4336f, 40.5042f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 26:
					*((*uParam2)[0 /*3*/]) = { 3266.224f, 1664.717f, 60.269f };
					*((*uParam2)[1 /*3*/]) = { 3221.388f, 1809.026f, 74.813f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 27:
					*((*uParam2)[0 /*3*/]) = { 2782.415f, 634.97f, 74.323f };
					*((*uParam2)[1 /*3*/]) = { 2594.708f, 556.157f, 75.742f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 28:
					*((*uParam2)[0 /*3*/]) = { 3268.065f, 1618.25f, 51.5041f };
					*((*uParam2)[1 /*3*/]) = { 3151.345f, 1476.824f, 42.9185f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 29:
					*((*uParam2)[0 /*3*/]) = { 2524.41f, 1402.663f, 97.646f };
					*((*uParam2)[1 /*3*/]) = { 2436.137f, 1254.158f, 109.722f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 30:
					*((*uParam2)[0 /*3*/]) = { 2145.954f, 1592.128f, 118.3828f };
					*((*uParam2)[1 /*3*/]) = { 2118.189f, 1395.341f, 146.675f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			break;
		case 31:
			switch (iParam1)
			{
				case 5:
					*((*uParam2)[0 /*3*/]) = { 2724.549f, -7.066f, 51.083f };
					*((*uParam2)[1 /*3*/]) = { 2542.005f, -233.1396f, 41.4732f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 6:
					*((*uParam2)[0 /*3*/]) = { 2300.604f, -441.226f, 41.797f };
					*((*uParam2)[1 /*3*/]) = { 2569.006f, -361.3357f, 40.5728f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 7:
					*((*uParam2)[0 /*3*/]) = { 762.142f, 1455.038f, 160.172f };
					*((*uParam2)[1 /*3*/]) = { 581.92f, 1359.699f, 182.007f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 8:
					*((*uParam2)[0 /*3*/]) = { 1561.312f, 1602.54f, 188.8227f };
					*((*uParam2)[1 /*3*/]) = { 1315.677f, 1471.669f, 160.1485f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			break;
		case 44:
			switch (iParam1)
			{
				case 0:
					*((*uParam2)[0 /*3*/]) = { -1366.784f, 150.125f, 77.8591f };
					*((*uParam2)[1 /*3*/]) = { -1627.641f, 266.7185f, 105.116f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 1:
					*((*uParam2)[0 /*3*/]) = { -1366.784f, 150.125f, 77.859f };
					*((*uParam2)[1 /*3*/]) = { -1627.641f, 266.719f, 105.116f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 3:
					*((*uParam2)[0 /*3*/]) = { -1090.74f, 151.3781f, 58.3089f };
					*((*uParam2)[1 /*3*/]) = { -823.9262f, 278.8717f, 92.3226f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 6:
					*((*uParam2)[0 /*3*/]) = { 1714.427f, -1933.318f, 45.6594f };
					*((*uParam2)[1 /*3*/]) = { 1714.571f, -1856.846f, 48.5272f };
					*((*uParam2)[2 /*3*/]) = { 1531.954f, -1706.023f, 57.3286f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			break;
		case 50:
			switch (iParam1)
			{
				case 6:
					*((*uParam2)[0 /*3*/]) = { -1736.774f, -836.8357f, 96.5171f };
					*((*uParam2)[1 /*3*/]) = { -1915.833f, -682.8271f, 116.4542f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 7:
					*((*uParam2)[0 /*3*/]) = { -755.4001f, -796.7909f, 49.7304f };
					*((*uParam2)[1 /*3*/]) = { -1039.648f, -688.1265f, 69.6641f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 15:
					*((*uParam2)[0 /*3*/]) = { 902.8263f, 386.1294f, 115.5771f };
					*((*uParam2)[1 /*3*/]) = { 615.3056f, 258.5487f, 103.5037f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 16:
					*((*uParam2)[0 /*3*/]) = { 874.3443f, 827.1644f, 114.901f };
					*((*uParam2)[1 /*3*/]) = { 859.3398f, 590.4376f, 110.1404f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 17:
					*((*uParam2)[0 /*3*/]) = { -769.1578f, 299.2588f, 93.7465f };
					*((*uParam2)[1 /*3*/]) = { -588.5746f, 443.7545f, 97.2538f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 18:
					*((*uParam2)[0 /*3*/]) = { 442.6022f, -274.5149f, 141.8569f };
					*((*uParam2)[1 /*3*/]) = { 252.7831f, -219.3386f, 129.8086f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 19:
					*((*uParam2)[0 /*3*/]) = { 82.4531f, 27.6559f, 99.5123f };
					*((*uParam2)[1 /*3*/]) = { 441.6833f, 325.2197f, 102.5464f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 24:
					*((*uParam2)[0 /*3*/]) = { 2682.666f, 254.0104f, 62.8591f };
					*((*uParam2)[1 /*3*/]) = { 2726.419f, 15.7709f, 48.8237f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 25:
					*((*uParam2)[0 /*3*/]) = { 2166.428f, 1654.068f, 114.0645f };
					*((*uParam2)[1 /*3*/]) = { 2375.665f, 1665.218f, 95.4254f };
					*((*uParam2)[2 /*3*/]) = { 2402.211f, 1816.359f, 106.9185f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 28:
					*((*uParam2)[0 /*3*/]) = { 1832.606f, -1986.944f, 43.5085f };
					*((*uParam2)[1 /*3*/]) = { 1691.085f, -1896.396f, 47.2405f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 29:
					*((*uParam2)[0 /*3*/]) = { 1375.404f, -1591.844f, 68.4645f };
					*((*uParam2)[1 /*3*/]) = { 1603.71f, -1744.756f, 52.1714f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 30:
					*((*uParam2)[0 /*3*/]) = { 816.4478f, -915.9297f, 49.4983f };
					*((*uParam2)[1 /*3*/]) = { 1006.361f, -1293.403f, 53.9613f };
					*((*uParam2)[2 /*3*/]) = { 1094.919f, -1166.476f, 67.619f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 31:
					*((*uParam2)[0 /*3*/]) = { 810.3403f, -872.8113f, 51.4344f };
					*((*uParam2)[1 /*3*/]) = { 825.1677f, -576.8741f, 79.2273f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 32:
					*((*uParam2)[0 /*3*/]) = { 1018.101f, -922.2153f, 66.9381f };
					*((*uParam2)[1 /*3*/]) = { 832.2029f, -891.5154f, 51.1305f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 33:
					*((*uParam2)[0 /*3*/]) = { 1472.147f, -437.5275f, 75.9389f };
					*((*uParam2)[1 /*3*/]) = { 1224.738f, -51.7863f, 93.1655f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			break;
	}
	return 0;
}

Vector3 func_515(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	iVar1 = -1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!func_79(*((*uParam1)[iVar0 /*3*/])))
			{
				if (iVar1 < 0 || BUILTIN::VDIST2(vVar2, *((*uParam1)[iVar0 /*3*/])) < BUILTIN::VDIST2(vVar2, *((*uParam1)[iVar1 /*3*/])))
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar1 > -1 && iVar1 < *uParam1)
		{
			return *((*uParam1)[iVar1 /*3*/]);
		}
	}
	return 0f, 0f, 0f;
}

void func_516(var uParam0, bool bParam1)
{
	if (!MAP::DOES_BLIP_EXIST(uParam0->f_6))
	{
		uParam0->f_6 = MAP::_BLIP_ADD_FOR_COORD(-1702907713, *uParam0);
		MAP::_0x662D364ABF16DE2F(uParam0->f_6, 580546400);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_6, "BLIP_DEBUG");
		if (bParam1)
		{
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			func_28("BEAT_GLB", 5500, 0, 1, 0, 0, -1, -1, 0);
		}
		PED::_0x9851DE7AEC10B4E1(*uParam0, 100f, 1, 0);
	}
}

bool func_517(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_518(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
	if (func_79(vParam0))
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
		if (func_485(vParam0))
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
	if (bParam9 >= 0f)
	{
		VOLUME::_0xD460135C98940274(iVar0, bParam9);
	}
	func_752(iVar0, bParam8);
	return iVar0;
}

void func_519(int iParam0)
{
	if (!func_243(iParam0))
	{
		return;
	}
	func_753(iParam0);
}

void func_520(var uParam0, vector3 vParam1)
{
	if (vParam1.x != 0)
	{
		TASK::_0x5D9B0BAAF04CF65B(*uParam0, vParam1.y, vParam1.x, vParam1.z);
	}
	else if (vParam1.y != -1)
	{
		TASK::_0x19BC99C678FBA139(*uParam0, vParam1.y, vParam1.z);
	}
}

int func_521(int iParam0)
{
	if (func_216(iParam0, 2))
	{
		return 200;
	}
	if (func_216(iParam0, 4))
	{
		return 70;
	}
	if (func_216(iParam0, 32))
	{
		return 400;
	}
	return 110;
}

int func_522(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (func_122(iParam0, 131072))
	{
		return 0;
	}
	else
	{
		if (iParam0 == 6)
		{
			if (func_692() == 8)
			{
				return 3;
			}
		}
		bVar0 = func_122(iParam0, 2);
		bVar1 = func_122(iParam0, 1);
		bVar2 = (bVar0 && bVar1);
		if (bVar2)
		{
			if (!func_467())
			{
				return 2;
			}
			else
			{
				return 1;
			}
		}
		else if (bVar0)
		{
			return 1;
		}
		else if (bVar1)
		{
			return 2;
		}
	}
	return -1;
}

void func_523(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		*fParam0 = 45f;
		*fParam1 = 135f;
	}
	else
	{
		*fParam0 = 45f;
		*fParam1 = 125f;
	}
	if (func_216(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 15f);
		*iParam2 = BUILTIN::CEIL((*fParam0 + 50f));
	}
	else
	{
		*iParam2 = 70;
	}
}

void func_524(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		*fParam1 = 240f;
	}
	else
	{
		*fParam1 = 215f;
	}
	*fParam0 = 110f;
	if (func_216(iParam3, 2))
	{
		*fParam0 = (*fParam0 + 60f);
		*fParam1 = (*fParam1 + 60f);
		*iParam2 = BUILTIN::CEIL((*fParam0 + 110f));
	}
	else if (func_216(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 30f);
		*iParam2 = BUILTIN::CEIL((*fParam0 + 30f));
	}
	else
	{
		*iParam2 = 70;
	}
}

bool func_525(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (func_513(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_17503.f_12[iVar1]), iVar2);
}

int func_526(int iParam0, vector3 vParam1, float fParam4, float fParam5)
{
	float fVar0;

	if (func_79(vParam1))
	{
		return 0;
	}
	if (func_530(iParam0, vParam1))
	{
		if (iParam0 == 42)
		{
		}
		else
		{
			return 0;
		}
	}
	fVar0 = BUILTIN::VDIST2(vParam1, Global_36);
	if (func_223(iParam0))
	{
		fParam4 = 40000f;
	}
	if (fVar0 < fParam4 && fVar0 > fParam5)
	{
		return 1;
	}
	else if (iParam0 == 42 || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

void func_527(int iParam0, vector3 vParam1, int iParam4, float fParam5, bool bParam6, float fParam7)
{
	float fVar0;

	fVar0 = func_102(bParam6, fParam7, BUILTIN::VDIST(vParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false)));
	if (!iParam4->f_1)
	{
		if (fVar0 < iParam4->f_2 || (func_533(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
		{
			*iParam4 = func_754();
			iParam4->f_2 = func_420(iParam0, vParam1, 1);
			iParam4->f_1 = 1;
		}
	}
	else if (fVar0 > iParam4->f_2 || (!func_533(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
	{
		*iParam4 = func_754();
		iParam4->f_2 = func_420(iParam0, vParam1, 1);
		iParam4->f_1 = 0;
	}
}

int func_528(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 1)
	{
		return (func_754() - *uParam0) >= iParam1;
	}
	return 0;
}

int func_529(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_79(*(uParam0->f_12[iVar0 /*3*/])))
		{
			if (iVar1 < 0 || BUILTIN::VDIST2(Global_36, *(uParam0->f_12[iVar1 /*3*/])) < BUILTIN::VDIST2(Global_36, *(uParam0->f_12[iVar0 /*3*/])))
			{
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_530(int iParam0, vector3 vParam1)
{
	int iVar0;

	if (!func_122(iParam0, 1))
	{
		iVar0 = 1;
	}
	if (func_755(vParam1, 0, 0, iVar0))
	{
		return 1;
	}
	if (func_122(iParam0, 33554432))
	{
		if (func_756(vParam1, 200f, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_531(int iParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;

	iVar0 = 1;
	if (func_216(iParam0, 128))
	{
		if (!MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam1, uParam1->f_1, (uParam1->f_2 + 40f), &uVar1, 0))
		{
			return 0;
		}
		if (MISC::_0xBBE5B63EFFB08E68(*uParam1, uParam1->f_1, (uParam1->f_2 + 40f), 129, &uVar1, &iVar2, &uVar3))
		{
			if (iVar2 == 1619704960)
			{
				return 0;
			}
		}
	}
	if (func_122(iParam0, 1) && !func_122(iParam0, 2))
	{
		if (func_122(iParam0, 4096) || func_122(iParam0, 2048))
		{
			if (func_757(*uParam1))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

int func_532(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	var uVar0;

	uVar0 = func_29(&uParam0);
	if (!func_758())
	{
		return 0;
	}
	return 1;
}

bool func_533(vector3 vParam0, int iParam3)
{
	vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam3) };
	return func_759(vVar0, vParam0) > func_759(vVar0, ENTITY::GET_ENTITY_COORDS(iParam3, true, false));
}

bool func_534(int iParam0)
{
	return !iParam0 <= 0;
}

bool func_535(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_534(iParam0))
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

int func_536(int iParam0, var uParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if ((bParam2 && func_90() == 0) && !UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
	{
		return 0;
	}
	if (!func_760(iParam0, uParam1, &uVar0, &iVar11) || iVar11 < 1)
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

void func_537(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

int func_538(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(bParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

void func_539(bool bParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (bParam0)
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

struct<14> func_540(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (bParam0 != 0)
	{
		Var0 = bParam0;
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

struct<4> func_541(bool bParam0)
{
	int iVar0;

	iVar0 = func_282(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224214))
		{
			*Global_1224214 = { func_610(923904168, func_761(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224222))
		{
			*Global_1224222 = { func_610(923904168, func_761(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_610(923904168, func_761(bParam0), -740156546, 0);
}

void func_542(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_543(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_282(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_544(int iParam0)
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

int func_545(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_282(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_546(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_547(var uParam0)
{
	return func_301(*uParam0, 1);
}

int func_548(var uParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_762(*uParam0, 0f, 0f, 0f))
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

void func_549(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_763(iParam1))
		{
			func_764(iParam0, 41788943);
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
			func_765(iParam0, 0, 1);
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
			func_766(iParam0, 0);
			bVar0 = true;
		}
		func_767(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, 0, 1, 1, 1, 0);
	}
}

void func_550(var uParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_242(uParam0))
	{
		*uParam0 = GRAPHICS::_0xFA50F79257745E74(vParam1, iParam4, iParam5, iParam6, iParam7);
		if (func_242(uParam0))
		{
		}
	}
}

void func_551(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4)
{
	if (!func_242(uParam0))
	{
		*uParam0 = GRAPHICS::_0xBD3324281E8B9933(*uParam3, iParam1, iParam2, iParam4);
		if (func_242(uParam0))
		{
		}
	}
}

void func_552(int iParam0, bool bParam1, int iParam2)
{
	func_768(iParam2);
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
		iParam0->f_10 = 0;
	}
	iParam0->f_5 = iParam2;
	if (Global_1572887->f_12 == -1)
	{
		iParam0->f_13 = Global_1935630->f_44;
	}
	else
	{
		iParam0->f_13 = func_769(0);
	}
	switch (iParam0->f_6)
	{
		case 0:
			if (*iParam0 & 16 != 0)
			{
				if (!*iParam0 & 33554432 != 0)
				{
					if (iParam0->f_13 == joaat("weapon_thrown_dynamite"))
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
						{
							func_119(iParam0, 33554432);
						}
					}
					else if (!*iParam0 & 8192 != 0)
					{
						if (func_473(1))
						{
							func_119(iParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_473(1) || *iParam0 & 8192 != 0))
				{
					func_118(iParam0, 33554432);
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
	if (!iParam0->f_1 & 1024 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_14))
		{
			if (func_770(iParam0))
			{
				iParam0->f_15 = func_754();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((func_754() - iParam0->f_15) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(iParam0->f_14))
				{
					iParam0->f_14 = 0;
					iParam0->f_15 = 0;
				}
			}
		}
	}
	iParam0->f_6++;
	if (iParam0->f_6 >= 4)
	{
		iParam0->f_6 = 0;
		iParam0->f_7++;
		if (iParam0->f_7 > 4)
		{
			iParam0->f_7 = 0;
		}
	}
	func_771(iParam0);
}

int func_553(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_754();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_554(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_772(iVar0, &iVar2))
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
	if (func_773(iVar0, iParam0))
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

int func_555(int iParam0, int iParam1)
{
	int iVar0;

	if (!DECORATOR::DECOR_EXIST_ON(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(iParam1, "iDamageFrame", iParam0->f_5))
		{
		}
	}
	else if (iParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

int func_556(int iParam0, int iParam1)
{
	if (func_774(iParam0))
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

void func_557()
{
}

void func_558(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		iParam1->f_10 = iParam0;
	}
	if (func_775(iParam2, 1, 1, 1, 0))
	{
		func_119(iParam1, 2048);
	}
	iParam1->f_16 = iParam2;
	func_776(iParam1, 1);
	func_253();
}

int func_559(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return 1;
		}
		if (func_372(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_560()
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
	if ((func_754() - Global_1935630->f_43) >= 10000)
	{
		return 0;
	}
	return 1;
}

int func_561(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_754();
	iVar1 = (iVar0 - iParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return 1;
	}
	return 0;
}

int func_562(var uParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_777(iParam2);
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
			if (func_556(iParam2, iParam1))
			{
				func_776(iParam2, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_563(var uParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (iParam2->f_12 < IntToFloat(func_778(iParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && !WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_556(iParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_776(iParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_564(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = func_779(iParam1);
	if (iParam1->f_12 > (fVar0 + 5f))
	{
		return 0;
	}
	if (!PED::_0x5102307CE88798EB(iParam0))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
	}
	if (iParam1->f_12 < fVar0 || PED::IS_TRACKED_PED_VISIBLE(iParam0))
	{
		fVar1 = -1f;
		fVar2 = func_780(PED::_0x2BA9D7BF629F920C(iParam0), (fVar0 + 5f));
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, fVar2, -1f, fVar1) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_35, 1, 0) == 1)
		{
			return 1;
		}
		else if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_44))
		{
			if (WEAPON::_0x79407D33328286C6(Global_1935630->f_44) || WEAPON::_0x506F1DE1BFC75304(Global_1935630->f_44))
			{
				if (iParam1->f_12 <= 5f)
				{
					if (func_781())
					{
						if (PED::IS_PED_FACING_PED(Global_35, iParam0, 110f))
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_565(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (func_474(iParam0))
	{
		PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 0.25f);
	}
	if (((PED::_0xD5FE956C70FF370B(Global_35) || PED::IS_PED_IN_COVER(Global_35, 0, 0)) || PED::IS_PED_GOING_INTO_COVER(Global_35)) || *iParam1 & 2097152 != 0)
	{
		iVar1 = 0;
	}
	else
	{
		iVar1 = 1;
	}
	if (PED::_0x0EA9EACBA3B01601(Global_35, iParam0, iVar1) && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 4f)
	{
		if (*iParam1 & 512 != 0)
		{
			if (PED::IS_PED_IN_COVER(Global_35, 0, 0) || PED::IS_PED_GOING_INTO_COVER(Global_35))
			{
				return 0;
			}
			if (PED::_0xD5FE956C70FF370B(Global_35) || ((PED::_0xA29FD00D45311EB7(Global_35, "stealth") == 1f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) < 8f) && *iParam1 & 2097152 != 0))
			{
				return 0;
			}
		}
		if (PED::_0xA29FD00D45311EB7(Global_35, "stealth") == 1f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 8f)
		{
		}
		iVar0 = 1;
	}
	return iVar0;
}

int func_566(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_434.f_5))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0->f_434.f_5, Global_35, 1, 1) || func_207(Global_35, iParam0->f_434.f_5, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_567(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		func_552(iParam2, 1, iVar0);
	}
	if (!Global_1935630->f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			iParam2->f_12 = fParam5;
		}
		else
		{
			iParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!iParam2->f_1 & 128 != 0)
		{
			if (func_782(iParam0, iParam2))
			{
				*iParam3 = 128;
				func_558(iParam0, iParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (func_783(iParam0, iParam2))
				{
					*iParam3 = 8;
					func_558(iParam0, iParam2, *iParam3);
					return 1;
				}
				else if (func_784(iParam0, iParam1, iParam2))
				{
					*iParam3 = 8;
					func_558(iParam0, iParam2, *iParam3);
					return 1;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (func_785(iParam0, iParam2))
				{
					*iParam3 = 64;
					func_558(iParam0, iParam2, *iParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_26 && func_469(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				func_558(iParam0, iParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_561(iParam2, 1065353216 /* Float: 1f */))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (func_562(Global_35, iParam0, iParam2))
					{
						*iParam3 = 4;
						func_558(iParam0, iParam2, *iParam3);
						return 1;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (func_563(Global_35, iParam0, iParam2))
					{
						*iParam3 = 256;
						func_558(iParam0, iParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_786(Global_35, iParam0, iParam2, 0))
				{
					*iParam3 = 16;
					func_558(iParam0, iParam2, *iParam3);
					return 1;
				}
			}
			else if (func_786(Global_35, iParam0, iParam2, 1))
			{
				*iParam3 = 16;
				func_558(iParam0, iParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_787(iParam0, iParam2))
				{
					*iParam3 = 32;
					func_558(iParam0, iParam2, *iParam3);
					return 1;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || iParam2->f_12 < 20f)
			{
				if (func_788(&iParam0, iParam2))
				{
					*iParam3 = 4096;
					func_558(iParam0, iParam2, *iParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (func_553(iParam2, 4000))
				{
					if ((func_554(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && func_555(iParam2, iParam0)) && func_556(iParam2, iParam0))
					{
						*iParam3 = 2;
						func_558(iParam0, iParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((func_554(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && func_555(iParam2, iParam0)) && func_556(iParam2, iParam0))
				{
					*iParam3 = 2;
					func_558(iParam0, iParam2, *iParam3);
					return 1;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (func_559(iParam0, Global_1935630->f_41))
							{
								func_557();
								*iParam3 = 2;
								func_558(iParam0, iParam2, *iParam3);
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
					if (*iParam2 & 131072 == 0)
					{
						if (func_559(iParam0, Global_1935630->f_41))
						{
							func_557();
							*iParam3 = 2;
							func_558(iParam0, iParam2, *iParam3);
							return 1;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (func_789(iParam2, iParam0) || (iParam2->f_9 > 0 && (func_754() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_557();
						*iParam3 = 2;
						func_558(iParam0, iParam2, *iParam3);
						return 1;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (func_560())
					{
						if (func_559(iParam0, Global_1935630->f_42))
						{
							func_557();
							*iParam3 = 2;
							func_558(iParam0, iParam2, *iParam3);
							return 1;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (func_790(iParam2, iParam0))
			{
				*iParam3 = 1024;
				func_558(iParam0, iParam2, *iParam3);
				return 1;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (func_791(iParam0, iParam1, iParam2))
				{
					*iParam3 = 2048;
					func_558(iParam0, iParam2, *iParam3);
					return 1;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_792(iParam0, iParam2))
					{
						*iParam3 = 8192;
						func_558(iParam0, iParam2, *iParam3);
						return 1;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (func_793(iParam0, iParam2))
				{
					*iParam3 = 32768;
					func_558(iParam0, iParam2, *iParam3);
					return 1;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (func_794(iParam2, 4000))
				{
					if (func_795(&iParam0, iParam2))
					{
						*iParam3 = 512;
						func_558(iParam0, iParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (func_796(iParam0, iParam2))
				{
					*iParam3 = 65536;
					iParam2->f_4 = 0;
					func_558(iParam0, iParam2, *iParam3);
					return 1;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_797(iParam2, iParam0))
			{
				*iParam3 = 1;
				func_558(iParam0, iParam2, *iParam3);
				return 1;
			}
		}
	}
	return 0;
}

void func_568(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_90() != -1)
	{
		return;
	}
	if ((Global_36615 && func_798(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_799(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_800(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (&Global_1347477->f_155[iVar2 /*6*/] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			func_801(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_800(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

void func_569(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

void func_570(var uParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_569(uParam0);
		func_802(iParam1, uParam2);
	}
	func_803(*uParam0, 1, bParam4);
}

int func_571(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 1;
	}
	if (iParam0 < iParam1)
	{
		return 1;
	}
	return 0;
}

int func_572(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	char* sVar1;

	iVar0 = func_804(iParam2, iParam3);
	sVar1 = func_805(iParam2, iParam3);
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, iVar0))
		{
			if (!bParam4)
			{
				func_206(iParam0, iParam1, sVar1, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			return 1;
		}
	}
	return 0;
}

int func_573(int iParam0, int iParam1, int iParam2)
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

int func_574(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	var uVar1;

	iVar0 = iParam9;
	func_806(&iVar0);
	if (func_30(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	uVar1 = func_807(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_30(iVar0, 134217728))
	{
		func_808(iParam1, uParam3, uParam0);
	}
	if (!*uParam4)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 25))
		{
			if (MISC::IS_BIT_SET(*iParam1, 24))
			{
				if (!func_809(558))
				{
					func_810(558, 0);
				}
				MISC::SET_BIT(iParam1, 24);
				MISC::SET_BIT(iParam1, 25);
			}
		}
	}
	return uVar1;
}

void func_575(var uParam0, int iParam1)
{
	func_811(uParam0, iParam1);
}

void func_576(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_359((*uParam0)[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

int func_577(int iParam0)
{
	if (func_13(iParam0, 42))
	{
		return 0;
	}
	return 1;
}

void func_578(var uParam0, var uParam1)
{
	int iVar0;

	uParam0->f_511 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (func_812(uParam0, uParam1, iVar0))
		{
			MISC::SET_BIT(&(uParam0->f_511), iVar0);
		}
		iVar0++;
	}
}

void func_579(int iParam0, int iParam1)
{
	if (func_330(iParam0, 1))
	{
	}
	else
	{
		func_72(iParam0, 41);
		iParam0->f_516 = 0;
		if (func_333(&(iParam0->f_459)))
		{
			if (func_593(&(iParam0->f_459)))
			{
				func_813(&(iParam0->f_459));
			}
		}
		func_622(&(iParam0->f_284), 1);
		iParam0->f_523 = iParam1;
	}
}

void func_580(int iParam0, int iParam1)
{
	func_334(&(iParam0->f_496));
	func_334(&(iParam0->f_499));
	iParam0->f_516 = 0;
	iParam0->f_517 = 0;
	iParam0->f_519 = 0;
	iParam0->f_522 = 0;
	iParam0->f_524 = 0;
	iParam0->f_523 = iParam1;
	iParam0->f_529 = func_339(iParam0->f_523, func_338(iParam0, iParam0->f_523));
}

void func_581(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	switch (iParam4)
	{
		case 0:
			iVar2 = 1;
			iVar0 = 1;
			iVar3 = 1;
			iVar1 = 1;
			break;
		case 1:
			iVar2 = 2;
			iVar0 = 2;
			iVar3 = 2;
			iVar1 = 2;
			break;
		case 2:
			iVar2 = 3;
			iVar0 = 3;
			iVar3 = 3;
			iVar1 = 3;
			break;
		case 3:
			iVar2 = 4;
			iVar0 = 4;
			iVar3 = 3;
			iVar1 = 3;
			break;
	}
	if (bParam8)
	{
		iVar3 = 0;
	}
	if (bParam9)
	{
		iVar1 = 0;
	}
	uParam0->f_3 = uParam1;
	uParam0->f_7 = iParam3;
	uParam0->f_5 = iParam10;
	uParam0->f_6 = iParam11;
	uParam0->f_8 = iVar0;
	uParam0->f_13 = iParam5;
	uParam0->f_14 = iParam6;
	uParam0->f_15 = iParam6;
	uParam0->f_23 = iVar3;
	uParam0->f_24 = iVar3;
	uParam0->f_16 = iVar1;
	uParam0->f_9 = iParam7;
	uParam0->f_10 = iParam7;
	uParam0->f_11 = iParam7;
	switch (iParam2)
	{
		case 0:
			uParam0->f_4 = 21030;
			uParam0->f_17 = iVar2;
			uParam0->f_18 = iVar2;
			uParam0->f_19 = iVar2;
			uParam0->f_20 = iVar2;
			uParam0->f_21 = iVar2;
			uParam0->f_22 = iVar2;
			break;
		case 1:
			uParam0->f_4 = 21030;
			uParam0->f_19 = iVar2;
			uParam0->f_20 = iVar2;
			uParam0->f_21 = iVar2;
			uParam0->f_22 = iVar2;
			uParam0->f_17 = 0;
			uParam0->f_18 = 0;
			break;
	}
}

bool func_582(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_583(int iParam0, var uParam1)
{
	if (!iParam0->f_518)
	{
		if (func_370(iParam0, 262144))
		{
			iParam0->f_515 = 0;
			if (func_814(iParam0))
			{
				func_72(iParam0, 43);
				func_174(iParam0, 64);
			}
		}
		else
		{
			func_174(iParam0, 262144);
			iParam0->f_515 = 1;
		}
		if (PED::IS_PED_USING_ANY_SCENARIO(iParam0->f_7) && TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 1))
		{
			iParam0->f_514 = 1;
		}
		else
		{
			iParam0->f_514 = 0;
		}
		iParam0->f_518 = 1;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0->f_7))
	{
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0->f_7, Global_35, -1, -1082130432, -1082130432, -1082130432);
	}
	iParam0->f_519 = 0;
	return 1;
}

int func_584(int iParam0, var uParam1)
{
	if (func_13(iParam0, 43) || !PED::IS_PED_USING_ANY_SCENARIO(iParam0->f_7))
	{
	}
	else if (!TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 1))
	{
		func_423(iParam0, -1f);
		return 0;
	}
	else
	{
		return TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 0);
	}
	return 1;
}

int func_585(int iParam0, var uParam1, int iParam2, int iParam3)
{
	switch (iParam3)
	{
		case 0:
			return func_815(iParam0, uParam1, iParam2);
		case 1:
			return func_816(iParam0, uParam1, iParam2);
		case 3:
			return func_818(iParam0, uParam1, iParam2, func_817(iParam0, iParam2));
		case 4:
			return func_819(iParam0, uParam1, iParam2);
		case 5:
			return func_820(iParam0, uParam1, iParam2);
		case 2:
			return func_821(iParam0, uParam1, iParam2);
		default:
			break;
	}
	return 4;
}

char* func_586(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 2:
			return func_822(iParam1);
		case 3:
			return func_823(iParam1);
		case 1:
			return func_824(iParam1);
		case 5:
			return func_825(iParam1, bParam2);
		case 6:
			return func_826(iParam1);
		case 7:
			return func_827(iParam1);
		case 4:
			return func_828(iParam1);
		default:
			break;
	}
	return "";
}

void func_587(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
			iParam0->f_525++;
			break;
		case 3:
			iParam0->f_526++;
			break;
		case 1:
			iParam0->f_219++;
			break;
		case 5:
			iParam0->f_527++;
			break;
		case 6:
			iParam0->f_528++;
			break;
	}
}

void func_588(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_709() - fParam1);
	func_829(uParam0, 1);
	func_830(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_589(var uParam0)
{
	if (!func_333(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_593(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_709() - uParam0->f_1);
}

void func_590(int iParam0)
{
	TASK::_0x541E5B41DCA45828(iParam0->f_7, iParam0->f_484, 0);
	iParam0->f_483 = 1;
	iParam0->f_484 = 1;
}

int func_591(int iParam0)
{
	if (!iParam0->f_519 || !func_169(iParam0->f_7, 1435919172))
	{
		return 1;
	}
	return 0;
}

void func_592(int* iParam0, int* iParam1, bool bParam2)
{
	if (func_503(iParam1->f_6))
	{
		if (func_831(iParam1, 1, 0))
		{
			if (0 | func_358(iParam0, 1))
			{
				func_832(iParam1, iParam0->f_5, iParam0->f_14);
			}
			else
			{
				func_621(iParam1, iParam0->f_5);
			}
		}
		func_359(iParam1, func_831(iParam0, 1, 0), 0);
		func_834(iParam1, func_833(iParam0, 0));
	}
	*iParam1 = *iParam0;
	iParam1->f_4 = iParam0->f_4;
	iParam1->f_2 = iParam0->f_2;
	iParam1->f_5 = iParam0->f_5;
	iParam1->f_6 = iParam0->f_6;
	iParam1->f_7 = iParam0->f_7;
	iParam1->f_8 = iParam0->f_8;
	iParam1->f_11 = iParam0->f_11;
	iParam1->f_12 = iParam0->f_12;
	iParam1->f_13 = iParam0->f_13;
	iParam1->f_15 = iParam0->f_15;
	iParam1->f_14 = iParam0->f_14;
	if (!bParam2)
	{
		iParam0->f_6 = 0;
	}
}

bool func_593(var uParam0)
{
	return func_582(*uParam0, 2);
}

void func_594(var uParam0)
{
	if (!func_333(uParam0))
	{
	}
	if (func_593(uParam0))
	{
		uParam0->f_1 = (func_709() - uParam0->f_2);
		uParam0->f_2 = 0f;
		func_830(uParam0, 2);
	}
}

void func_595(var uParam0)
{
	if (func_301(uParam0->f_73, 16))
	{
		func_835(&(uParam0->f_76), uParam0, 0);
		func_836(&(uParam0->f_97), &(uParam0->f_21), 1);
		func_605(&(uParam0->f_73), 16);
	}
}

int func_596()
{
	switch (func_90())
	{
		case 0:
			return PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
		default:
			break;
	}
	return Global_35;
}

int func_597(int iParam0, int iParam1)
{
	if (func_176(iParam0, 1, 1))
	{
		return func_301(Global_1955500[iParam0 /*16*/], iParam1);
	}
	return 0;
}

void func_598(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	TASK::_TASK_START_SCENARIO_IN_PLACE(uParam0, iParam1, iParam2, iParam3, iParam4, iParam5, 0);
}

void func_599(var uParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	func_837((*uParam0)[0 /*17*/], func_380(7), sParam1, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	func_837((*uParam0)[1 /*17*/], func_380(10), sParam2, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	if (!bParam4)
	{
		func_837((*uParam0)[2 /*17*/], func_380(12), sParam3, joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
			func_359((*uParam0)[2 /*17*/], 0, 0);
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_359((*uParam0)[0 /*17*/], 0, 0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		func_359((*uParam0)[1 /*17*/], 0, 0);
	}
}

void func_600(var uParam0, int iParam1, bool bParam2)
{
	func_332(uParam0, iParam1, !bParam2);
}

void func_601(var uParam0, int iParam1, int iParam2)
{
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamA", true);
			break;
		case 1:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamB", true);
			break;
		case 2:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamA", true);
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamB", true);
			break;
		default:
			break;
	}
}

void func_602(var uParam0, int iParam1, int iParam2)
{
	if (PED::IS_PED_HUMAN(iParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamA", true);
			break;
		case 1:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamB", true);
			break;
		case 2:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamA", true);
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamB", true);
			break;
		default:
			break;
	}
	DECORATOR::DECOR_SET_INT(iParam1, "HorseScriptCreator", SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
}

int func_603()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_176(iVar0, 1, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_604(int iParam0, int iParam1)
{
	if (func_176(iParam0, 1, 1))
	{
		func_575((*Global_1955500)[iParam0 /*16*/], iParam1);
	}
}

void func_605(int iParam0, int iParam1)
{
	func_537(iParam0, iParam1);
}

struct<5> func_606(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_761(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_279(bParam0))
	{
		case joaat("clothing"):
			if (!INVENTORY::_0x780C5B9AE2819807(bParam0, 1034665895))
			{
				Var0 = { func_610(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("weapon"):
			Var0 = { func_541(bParam1) };
			if (bParam2 && func_838(bParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_608(bParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_608(bParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_609(bParam0, &Var5, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_839(bParam1) };
			switch (func_840(bParam0))
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
			if (func_841(bParam0, -1823706425))
			{
				Var0 = { func_610(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, -1838434463);
			}
			else if (func_841(bParam0, -1483207246))
			{
				Var0 = { func_610(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 889965687);
			}
			else if (INVENTORY::_0x780C5B9AE2819807(bParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		default:
			if (INVENTORY::_0x780C5B9AE2819807(bParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(bParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(bParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!func_842(Var0, &Var27, bParam1, 0))
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
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("character"));
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_607(int iParam0, int iParam1)
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

bool func_608(bool bParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_843(bParam0, *uParam1, iParam2, bParam3) > 0;
}

int func_609(bool bParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_844(bParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_610(bool bParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_278(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_282(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

int func_611(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_845(bParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_842(*uParam1, &Var0, bParam6, 0))
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
	if (!func_612(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_282(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_612(bool bParam0)
{
	if (func_90() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_282(bParam0));
}

int func_613(bool bParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_846(bParam0))
	{
		return 0;
	}
	if (!func_612(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_35, bParam0, iParam1, iParam2);
	return 1;
}

void func_614(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, bParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_GET_WEAPON_CLIP_SIZE(bParam0))
	{
		iVar1 = func_847(WEAPON::_GET_WEAPON_CLIP_SIZE(bParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, bParam0, iVar1);
	}
}

int func_615(int iParam0)
{
	switch (iParam0)
	{
		case 43:
			return 0;
		case 18:
			return 1;
		case 40:
			return 3;
		case 19:
			return 2;
		default:
			break;
	}
	return -1;
}

int func_616(int iParam0, bool bParam1, bool bParam2)
{
	if (func_333(&(iParam0->f_444)))
	{
		func_334(&(iParam0->f_444));
	}
	if (bParam1)
	{
		func_395(iParam0, 25f, 0);
	}
	if (bParam2)
	{
		iParam0->f_203 = 18;
	}
	return 18;
}

int func_617(int iParam0)
{
	if (iParam0->f_203 >= 1 && iParam0->f_203 <= 8)
	{
		return 0;
	}
	if (iParam0->f_203 >= 9 && iParam0->f_203 <= 16)
	{
		return 1;
	}
	if (iParam0->f_203 >= 17 && iParam0->f_203 <= 21)
	{
		return 2;
	}
	return -1;
}

int func_618(float fParam0)
{
	if (func_848(1))
	{
		return 1;
	}
	if (func_333(&uLocal_0) && !func_422(&uLocal_0, (7.5f + fParam0)))
	{
		return 1;
	}
	return 0;
}

bool func_619(float fParam0)
{
	return !func_375(fParam0, 1, 0, 0);
}

int func_620(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return 1;
	}
	return 0;
}

void func_621(int* iParam0, char* sParam1)
{
	if (func_503(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_849(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_361(iParam0, 1);
}

void func_622(var uParam0, bool bParam1)
{
	if (bParam1 || !func_301(uParam0->f_73, 16))
	{
		func_835(uParam0, &(uParam0->f_76), 0);
		func_836(&(uParam0->f_21), &(uParam0->f_97), 1);
		func_575(&(uParam0->f_73), 16);
	}
}

int func_623(int iParam0)
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

char* func_624(char* sParam0, char* sParam1)
{
	return "ERR_STRING";
}

int func_625(int iParam0)
{
	if (!func_534(iParam0))
	{
		return 0;
	}
	return func_535(iParam0, 1, 1);
}

int func_626(int iParam0)
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

void func_627(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			func_810(210, 0);
			break;
		case 16:
			func_810(211, 0);
			break;
		case 33:
			func_810(212, 0);
			break;
		case 42:
			func_810(213, 0);
			break;
		case 2:
			func_810(214, 0);
			break;
		case 3:
			func_810(215, 0);
			break;
		case 43:
			func_810(216, 0);
			break;
		case 15:
			func_810(217, 0);
			break;
		case 23:
			func_810(218, 0);
			break;
		case 37:
			func_810(219, 0);
			break;
		case 26:
			func_810(220, 0);
			break;
		case 13:
			func_810(221, 0);
			break;
		case 19:
			func_810(222, 0);
			break;
		case 34:
			func_810(223, 0);
			break;
		case 38:
			func_810(224, 0);
			break;
		case 40:
			func_810(225, 0);
			break;
		case 7:
			func_810(226, 0);
			break;
		case 20:
			func_810(227, 0);
			break;
		case 18:
			func_810(228, 0);
			break;
		case 6:
			func_810(229, 0);
			break;
		case 29:
			func_810(230, 0);
			break;
		case 39:
			func_810(231, 0);
			break;
		case 11:
			break;
		case 4:
			func_810(233, 0);
			break;
		case 8:
			func_810(234, 0);
			break;
		case 28:
			func_810(235, 0);
			break;
		case 31:
			func_810(236, 0);
			break;
		case 12:
			func_810(237, 0);
			break;
		case 27:
			func_810(238, 0);
			break;
		case 41:
			func_810(239, 0);
			break;
	}
}

void func_628(int iParam0, int iParam1)
{
	if (!func_534(iParam0))
	{
		return;
	}
	if (func_90() != -1)
	{
		Global_36637[iParam0] = (Global_36637[iParam0] || iParam1);
		return;
	}
	Global_40.f_9274[iParam0] = (Global_40.f_9274[iParam0] || iParam1);
}

int func_629()
{
	if (func_90() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

void func_630(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 1:
			if (bParam1 == 1)
			{
				func_850(1849379570, 0);
			}
			else
			{
				func_850(961286348, 0);
			}
			break;
		case 2:
			if (bParam1 == 1)
			{
				func_850(-837750081, 0);
			}
			else
			{
				func_850(340939753, 0);
			}
			break;
		case 3:
			if (bParam1 == 1)
			{
				func_850(-342875345, 0);
			}
			else
			{
				func_850(-1349311606, 0);
			}
			break;
		case 4:
			if (bParam1 == 1)
			{
				func_850(-1083564345, 0);
			}
			else
			{
				func_850(833225684, 0);
			}
			break;
		case 5:
			if (bParam1 == 1)
			{
				func_850(-363984637, 0);
			}
			else
			{
				func_850(1254542371, 0);
			}
			break;
		case 6:
			if (bParam1 == 1)
			{
				func_850(205335377, 0);
			}
			else
			{
				func_850(637367741, 0);
			}
			break;
		case 11:
			if (bParam1 == 1)
			{
				func_850(-1389317844, 0);
			}
			else
			{
				func_850(-556895345, 0);
			}
			break;
		case 7:
			if (bParam1 == 1)
			{
				func_850(-1907629529, 0);
			}
			else
			{
				func_850(1599606732, 0);
			}
			break;
		case 39:
			if (bParam1 == 1)
			{
				func_850(240007023, 0);
			}
			else
			{
				func_850(-1520210138, 0);
			}
			break;
		case 8:
			if (bParam1 == 1)
			{
				func_850(1312152388, 0);
			}
			else
			{
				func_850(-9418953, 0);
			}
			break;
		case 9:
			if (bParam1 == 1)
			{
				func_850(545314598, 0);
			}
			else
			{
				func_850(1529839790, 0);
			}
			break;
		case 10:
			if (bParam1 == 1)
			{
				func_850(1230485961, 0);
			}
			else
			{
				func_850(-1579920715, 0);
			}
			break;
		case 12:
			if (bParam1 == 1)
			{
				func_850(-201902289, 0);
			}
			else
			{
				func_850(1415616009, 0);
			}
			break;
		case 13:
			if (bParam1 == 1)
			{
				func_850(-564622057, 0);
			}
			else
			{
				func_850(-1442109431, 0);
			}
			break;
		case 14:
			if (bParam1 == 1)
			{
				func_850(-1303190422, 0);
			}
			else
			{
				func_850(-1299326860, 0);
			}
			break;
		case 15:
			if (bParam1 == 1)
			{
				func_850(-88060354, 0);
			}
			else
			{
				func_850(-366222423, 0);
			}
			break;
		case 40:
			if (bParam1 == 1)
			{
				func_850(1312248008, 0);
			}
			else
			{
				func_850(621868532, 0);
			}
			break;
		case 17:
			if (bParam1 == 1)
			{
				func_850(428446588, 0);
			}
			else
			{
				func_850(-1730302202, 0);
			}
			break;
		case 18:
			if (bParam1 == 1)
			{
				func_850(37692363, 0);
			}
			else
			{
				func_850(629404512, 0);
			}
			break;
		case 16:
			if (bParam1 == 1)
			{
				func_850(877023893, 0);
			}
			else
			{
				func_850(122486811, 0);
			}
			break;
		case 19:
			if (bParam1 == 1)
			{
				func_850(-706642783, 0);
			}
			else
			{
				func_850(621155065, 0);
			}
			break;
		case 20:
			if (bParam1 == 1)
			{
				func_850(-918250703, 0);
			}
			else
			{
				func_850(1945953943, 0);
			}
			break;
		case 21:
			if (bParam1 == 1)
			{
				func_850(722815515, 0);
			}
			else
			{
				func_850(-80758135, 0);
			}
			break;
		case 22:
			if (bParam1 == 1)
			{
				func_850(1053305061, 0);
			}
			else
			{
				func_850(1789349782, 0);
			}
			break;
		case 23:
			if (bParam1 == 1)
			{
				func_850(1024520106, 0);
			}
			else
			{
				func_850(1105521253, 0);
			}
			break;
		case 41:
			if (bParam1 == 1)
			{
				func_850(1140872184, 0);
			}
			else
			{
				func_850(-237709193, 0);
			}
			break;
		case 24:
			if (bParam1 == 1)
			{
				func_850(-1590595690, 0);
			}
			else
			{
				func_850(1836601784, 0);
			}
			break;
		case 25:
			if (bParam1 == 1)
			{
				func_850(1164380735, 0);
			}
			else
			{
				func_850(-1984992129, 0);
			}
			break;
		case 26:
			if (bParam1 == 1)
			{
				func_850(301696279, 0);
			}
			else
			{
				func_850(152181092, 0);
			}
			break;
		case 27:
			if (bParam1 == 1)
			{
				func_850(-415970359, 0);
			}
			else
			{
				func_850(839837681, 0);
			}
			break;
		case 28:
			if (bParam1 == 1)
			{
				func_850(1669531798, 0);
			}
			else
			{
				func_850(1602454819, 0);
			}
			break;
		case 29:
			if (bParam1 == 1)
			{
				func_850(-977383775, 0);
			}
			else
			{
				func_850(-1875435665, 0);
			}
			break;
		case 30:
			if (bParam1 == 1)
			{
				func_850(1183317680, 0);
			}
			else
			{
				func_850(-247145433, 0);
			}
			break;
		case 31:
			if (bParam1 == 1)
			{
				func_850(667332266, 0);
			}
			else
			{
				func_850(-368365640, 0);
			}
			break;
		case 33:
			if (bParam1 == 1)
			{
				func_850(-1578905205, 0);
			}
			else
			{
				func_850(946087658, 0);
			}
			break;
		case 32:
			if (bParam1 == 1)
			{
				func_850(-448931053, 0);
			}
			else
			{
				func_850(-421010414, 0);
			}
			break;
		case 34:
			if (bParam1 == 1)
			{
				func_850(-1162930163, 0);
			}
			else
			{
				func_850(-1228311530, 0);
			}
			break;
		case 35:
			if (bParam1 == 1)
			{
				func_850(1004123602, 0);
			}
			else
			{
				func_850(1321329534, 0);
			}
			break;
		case 36:
			if (bParam1 == 1)
			{
				func_850(281748406, 0);
			}
			else
			{
				func_850(-173822042, 0);
			}
			break;
		case 37:
			if (bParam1 == 1)
			{
				func_850(-1351305881, 0);
			}
			else
			{
				func_850(-1650817073, 0);
			}
			break;
		case 38:
			if (bParam1 == 1)
			{
				func_850(-1644190131, 0);
			}
			else
			{
				func_850(844678349, 0);
			}
			break;
		case 42:
			if (bParam1 == 1)
			{
				func_850(-926127573, 0);
			}
			else
			{
				func_850(-1260559150, 0);
			}
			break;
		case 43:
			if (bParam1 == 1)
			{
				func_850(758690400, 0);
			}
			else
			{
				func_850(1430679359, 0);
			}
			break;
		default:
			break;
	}
}

void func_631(int iParam0, bool bParam1)
{
	if (!func_534(iParam0))
	{
		return;
	}
	if (func_851(iParam0))
	{
		return;
	}
	func_628(iParam0, 2);
	if (bParam1)
	{
		if (!func_475(0, 0, 1))
		{
			func_510(1, 6);
		}
	}
}

void func_632(int iParam0)
{
	if (!func_243(iParam0))
	{
		return;
	}
	((*Global_1310750)[iParam0 /*111*/])->f_46 = 1;
}

void func_633(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_634(int* iParam0, bool bParam1)
{
	if (func_301(iParam0->f_73, 1) != bParam1)
	{
		if (bParam1)
		{
			if (!func_301(iParam0->f_73, 2))
			{
				func_575(&(iParam0->f_73), 1);
				func_381(iParam0, 0, func_380(24));
			}
		}
		else
		{
			func_605(&(iParam0->f_73), 1);
			func_381(iParam0, 0, func_380(7));
		}
	}
}

char* func_635(int iParam0)
{
	switch (*iParam0)
	{
		case 43:
			return "RE_HEC_UNI_V1_YARROWGOOD";
		case 18:
			return "RE_HEC_UNI_V1_FANCY";
		case 19:
			return "RE_HEC_UNI_V1_WHATGOOD";
		case 40:
			return "RE_HEC_UNI_V1_FEVERFEW";
		default:
			break;
	}
	return "";
}

int func_636(int iParam0)
{
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0->f_7))
	{
		return 1;
	}
	switch (PED::_0x569F1E1237508DEB(iParam0->f_7))
	{
		case -1904017806:
			if (!TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 1))
			{
				if (TASK::_0x02EBBB3989B7E695(iParam0->f_7))
				{
					return 1;
				}
			}
			else
			{
				func_642(iParam0);
			}
			break;
		case 494354620:
			if (!TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 1))
			{
				func_423(iParam0, -1f);
			}
			else if (TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 0))
			{
				return 1;
			}
			break;
		case 2093245709:
			return func_852(iParam0);
	}
	return 0;
}

void func_637(int iParam0)
{
	int iVar0;

	if (!func_393(iParam0))
	{
		iVar0 = func_388(*iParam0);
		if (iParam0->f_271 != iVar0)
		{
			func_398(iParam0, iVar0, 0);
			iParam0->f_271 = iVar0;
		}
	}
	else if (!func_431(iParam0, 9))
	{
		func_332(&(iParam0->f_284), 1, 0);
		if (func_13(iParam0, 62))
		{
			func_73(iParam0, 62);
		}
		func_187(iParam0, 9);
	}
}

int func_638(int iParam0)
{
	if (func_330(iParam0, 1))
	{
		return 0;
	}
	switch (iParam0->f_433)
	{
		case 0:
			func_187(iParam0, 8);
			func_332(&(iParam0->f_284), 2, 0);
			func_332(&(iParam0->f_284), 0, 0);
			func_332(&(iParam0->f_284), 1, 0);
			if (func_13(iParam0, 1))
			{
				func_89(12);
			}
			func_384(&(iParam0->f_284));
			return 1;
		case -1:
			func_853(iParam0);
			if (func_393(iParam0))
			{
				if (!func_431(iParam0, 9))
				{
					func_332(&(iParam0->f_284), 1, 0);
					if (func_13(iParam0, 62))
					{
						func_73(iParam0, 62);
					}
					func_187(iParam0, 9);
				}
				return 3;
			}
			else if (!func_330(iParam0, 1))
			{
				if (func_854(iParam0))
				{
					func_73(iParam0, 13);
					func_175(&(iParam0->f_9));
					func_73(iParam0, 62);
					func_23(iParam0);
					func_19();
					iParam0->f_1 = 11;
				}
			}
			else
			{
				func_341(&(iParam0->f_508));
			}
			break;
	}
	return 0;
}

char* func_639(int iParam0)
{
	switch (*iParam0)
	{
		case 43:
			return "RE_HEC_UNI_V1_BENEFITS";
		case 18:
			return "RE_HEC_UNI_V1_BYANYMEANS";
		case 19:
			return "RE_HEC_UNI_V1_ELABORATE";
		case 40:
			return "RE_HEC_UNI_V1_KEEPMEGOING";
		default:
			break;
	}
	return "";
}

void func_640(int iParam0, float fParam1)
{
	if (!func_333(&(iParam0->f_505)))
	{
		func_341(&(iParam0->f_505));
	}
	iParam0->f_211 = (iParam0->f_211 + fParam1);
}

int func_641(int iParam0, var uParam1)
{
	switch (iParam0->f_433)
	{
		case 0:
			func_328(&(iParam0->f_284), 0);
			func_73(iParam0, 62);
			func_384(&(iParam0->f_284));
			return 4;
		case -1:
			func_855(iParam0);
			func_856(&(iParam0->f_284), 0, 5f, func_372(Global_35, iParam0->f_7, 1, 1));
			func_857(iParam0, uParam1, 2f);
			if (!func_330(iParam0, 1))
			{
				if (!func_13(iParam0, 27))
				{
					if (iParam0->f_205 == 0)
					{
						if (func_854(iParam0))
						{
							func_73(iParam0, 13);
							func_175(&(iParam0->f_9));
							func_73(iParam0, 62);
							func_23(iParam0);
							func_19();
							iParam0->f_1 = 11;
						}
					}
				}
			}
			else
			{
				func_341(&(iParam0->f_508));
			}
			break;
	}
	return 0;
}

void func_642(int iParam0)
{
	if (!func_333(&(iParam0->f_453)) || func_343(&(iParam0->f_453), 3f))
	{
		if (!func_684(iParam0, 0, 1))
		{
			if (TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 0))
			{
				func_590(iParam0);
				func_341(&(iParam0->f_453));
			}
		}
	}
}

void func_643(var uParam0, int iParam1, var uParam2, var uParam3)
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	func_651(uParam0, "player", Global_35, 0);
	iVar2 = 19;
	iVar3 = -1;
	switch (iParam1)
	{
		case 43:
			iVar3 = 6;
			sVar0 = "YARROW";
			sVar1 = "objYarrow02";
			break;
		case 19:
			iVar3 = 7;
			sVar0 = "hummingbird_sage";
			sVar1 = "objHBSage02";
			break;
		case 18:
			iVar3 = 8;
			sVar0 = "golden_currant";
			sVar1 = "objGCurrant02";
			break;
		case 40:
			iVar3 = 9;
			sVar0 = "violet_snowdrop";
			sVar1 = "objVSnowDrop02";
			break;
		default:
			return;
	}
	if (iVar2 < 20)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam3[iVar2]))
		{
			ENTITY::SET_ENTITY_VISIBLE(uParam3[iVar2], true);
			func_858(uParam2, sVar1, uParam3[iVar2], 0);
			func_658(uParam0, sVar0, uParam3[iVar2], 0);
		}
	}
	iVar4 = uParam3[2];
	if (ENTITY::DOES_ENTITY_EXIST(iVar4))
	{
		func_402(uParam0, iVar4);
	}
	if (iVar3 != -1)
	{
		func_644(uParam0, iVar3);
	}
}

int func_644(var uParam0, int iParam1)
{
	char* sVar0;

	if (func_429(uParam0, 0, 0, 0))
	{
		Stack.Push(iParam1);
		Call_Loc(uParam0->f_6);
		sVar0 = StackVal;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_1, sVar0))
			{
				return 1;
			}
			if (!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_1, sVar0))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_1, sVar0);
			}
		}
	}
	return 0;
}

int func_645(int iParam0)
{
	if (func_644(&(iParam0->f_133), func_148(*iParam0)))
	{
		if (func_669(Global_35, &(iParam0->f_133), "player", func_148(*iParam0), &(iParam0->f_495), 1065353216 /* Float: 1f */, 1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_646(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 1433048902 /* GXTEntry: "Ginseng" */;
		case 2:
			return 1433048902 /* GXTEntry: "Ginseng" */;
		case 40:
			return 746300881 /* GXTEntry: "Wild Feverfew" */;
		case 7:
			return -398744080 /* GXTEntry: "Burdock Root" */;
		case 11:
			return -2085219828 /* GXTEntry: "Common Bulrush" */;
		case 15:
			return -1620920647 /* GXTEntry: "English Mace" */;
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
		case 43:
			return -529638012 /* GXTEntry: "Yarrow" */;
		default:
			break;
	}
	return 0;
}

int func_647(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	struct<2> Var5;

	if (!func_278(bParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	bVar3 = func_280(bParam0, 1);
	if (bVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		WEAPON::_0xB6CFEC32E3742779(Global_35, bVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_859(bParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_137(bParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_860(bParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((func_136(bParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_136(bParam0, 0, 0) - iParam1) < 0)
		{
			func_647(bParam0, func_136(bParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_279(bParam0) == joaat("weapon"))
	{
		if (!func_861(bParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_862(bParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (bParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_612(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && bParam0 != 1309979101)
	{
		func_859(bParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_863(bParam0, iParam1);
	return 1;
}

void func_648(int iParam0)
{
	int iVar0;

	iVar0 = func_615(iParam0);
	if (iVar0 != -1)
	{
		func_89(iVar0);
	}
	if (func_16())
	{
		func_89(5);
	}
}

void func_649(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			ENTITY::DETACH_ENTITY(iParam0, bParam1, bParam2);
		}
	}
}

void func_650(var uParam0, vector3 vParam1, vector3 vParam4, int iParam7)
{
	if (func_429(uParam0, 0, 0, 0))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_1, vParam1, vParam4, iParam7);
	}
}

void func_651(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_1) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1, sParam1, iParam2, iParam3);
	}
}

char* func_652(int iParam0)
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	switch (iParam0)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					return "RE_HEC_UNI_V1_REWARD_HORSEREV";
				case 1:
					return "RE_HEC_UNI_V1_REWARD_HORSEREV_ALT";
			}
			break;
		case 1:
			switch (iVar0)
			{
				case 0:
					return "RE_HEC_UNI_V1_REWARD_RECIPE";
				case 1:
					return "RE_HEC_UNI_V1_REWARD_RECIPE_ALT1";
			}
			break;
		case 2:
			switch (iVar0)
			{
				case 0:
					return "RE_HEC_UNI_V1_REWARD_RECIPE_ALT1";
				case 1:
					return "RE_HEC_UNI_V1_REWARD_RECIPE_ALT2";
			}
			break;
		case 3:
			switch (iVar0)
			{
				case 0:
					return "RE_HEC_UNI_V1_REWARD_TONIC";
				case 1:
					return "RE_HEC_UNI_V1_REWARD_TONIC_ALT";
			}
			break;
	}
	return func_624("[RESS]", "REHOC_REWARD_TYPE_INITIAL_DIALOGUE_CONTEXT: Invalid Reward.");
}

void func_653(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		uVar0 = func_864(iParam0);
		func_865(iParam0, iParam1, iParam2, uVar0);
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

char* func_654(int iParam0)
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	switch (iParam0)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					return "RE_HEC_UNI_V1_HAND_HORSEREV";
				case 1:
					return "RE_HEC_UNI_V1_HAND_HORSEREV_ALT";
			}
			break;
		case 1:
			return "RE_HEC_UNI_V1_HAND_HORSE_SPECIAL";
		case 2:
			return "RE_HEC_UNI_V1_HAND_POI_ARROW";
		case 3:
			switch (iVar0)
			{
				case 0:
					return "RE_HEC_UNI_V1_HAND_TONIC_SPECIAL";
				case 1:
					return "RE_HEC_UNI_V1_HAND_TONIC_SPECIAL_ALT";
			}
			break;
	}
	return func_624("[RESS]", "REHOC_REWARD_TYPE_HANDOVER_DIALOGUE_CONTEXT: Invalid Reward.");
}

int func_655(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	struct<13> Var11;
	int iVar34;
	struct<2> Var35;
	bool bVar37;

	if (!func_278(bParam0, 0))
	{
		return 0;
	}
	if (!func_866(bParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_867(bParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_868(bParam0, bParam2);
	iVar2 = 0;
	if (func_136(bParam0, 0, 0) == 0)
	{
		if (func_869(bParam0))
		{
			iVar5 = func_870(bParam0);
			iVar6 = func_871(iVar5);
			iVar7 = func_872(iVar6) + 1;
			func_873(iVar5);
			if (func_874(38))
			{
				func_810(483, 0);
			}
			else
			{
				func_810(482, 0);
			}
			if (iVar7 == func_875(iVar6))
			{
				func_655(func_876(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_751() && func_877(4))
				{
					if (func_751() && (func_878(38) || func_874(38)))
					{
						func_880(38, func_876(iVar6), 0, 0, func_879(), 0, -1, 0);
						func_881(2);
					}
					else
					{
						func_880(38, func_876(iVar6), 0, 0, func_879(), 0, -1, 0);
						func_881(1);
					}
				}
			}
			else if (func_751() && func_877(4))
			{
				if (func_751() && (func_878(38) || func_874(38)))
				{
					func_880(38, 0, 0, 0, func_879(), 0, -1, 0);
					func_881(2);
				}
				else
				{
					func_880(38, 0, 0, 0, func_879(), 0, -1, 0);
					func_881(1);
				}
			}
			if (func_751() && func_877(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_751() && (func_878(38) || func_874(38)))
					{
						func_882(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_882(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_279(bParam0) == joaat("clothing"))
	{
		if ((!func_538(bParam0, 866047851) && !func_538(bParam0, -1979000645)) && !func_538(bParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_883(bParam0, 8388608) && !func_884(28))
	{
		func_885(28);
	}
	if (!bVar3)
	{
		if (func_538(bParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_840(bParam0) == -1447088266)
			{
				bVar1 = func_887(func_886(bParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(bVar1))
				{
					if (func_90() == -1)
					{
						func_888(bVar1);
					}
					if (func_612(0) && func_364(bVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_613(bParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				bVar1 = WEAPON::_0x5C2EA6C44F515F34(bParam0);
				if (WEAPON::_0x1F7977C9101F807F(bVar1))
				{
					if (func_90() == -1)
					{
						func_888(bParam0);
					}
					if (func_612(0) && func_364(bParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_613(bVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_279(bParam0) == joaat("weapon"))
		{
			if (!func_889(bParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_279(bParam0) == joaat("ammo") && func_846(bParam0))
		{
			if (!func_890(bParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_538(bParam0, 866047851))
		{
			func_891(bParam0);
		}
		else if (func_538(bParam0, 2000026003))
		{
			func_892(bParam0);
		}
		else if (func_538(bParam0, -103750053))
		{
			func_743(func_893(-1019857971), iVar0);
		}
		else if (bParam0 == 2093098109)
		{
			func_743(func_894(-717883113, 2091222383), iVar0);
		}
		else if (func_538(bParam0, -121341956) && !func_538(bParam0, 606799272))
		{
			if (bParam0 != 191707516 && bParam0 != 1993672959)
			{
				if (func_895(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_810(498, 0);
				}
			}
			if (func_538(bParam0, -2017733358) || func_538(bParam0, -1369131378))
			{
				func_896(bParam0);
			}
		}
		else if (func_538(bParam0, -136654233))
		{
			if (func_538(bParam0, -1021472396))
			{
			}
		}
		else if (func_538(bParam0, -1466706512) && func_538(bParam0, 1147021565))
		{
			func_810(484, 0);
		}
		else if (func_538(bParam0, 1147021565) && func_538(bParam0, -524514947))
		{
		}
		else if (func_538(bParam0, 554195525))
		{
		}
		else if (func_538(bParam0, 589988438))
		{
			if (func_897())
			{
				func_898(1339418451, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_538(bParam0, 787083290) && func_538(bParam0, 949916894))
		{
			func_899(bParam0);
		}
		else if (func_538(bParam0, -1718133314))
		{
			func_900(bParam0);
		}
		else if (func_538(bParam0, -1738650224))
		{
			func_901(bParam0);
		}
		else if (func_538(bParam0, -1112814642) && func_538(bParam0, 949916894))
		{
			func_902(bParam0);
		}
		else if (bParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_538(bParam0, 1841149704))
		{
			func_903();
		}
		else if (func_538(bParam0, 606799272))
		{
			func_904(bParam0, iParam1);
			func_905(bParam0);
		}
		else if (func_538(bParam0, -1112814642) && func_538(bParam0, -1697809989))
		{
			func_906(bParam0, 0, 0, 0);
		}
		else if (func_538(bParam0, -2017733358) || func_538(bParam0, -1369131378))
		{
			func_896(bParam0);
		}
		else if (func_538(bParam0, -1921346699))
		{
			if (func_90() != -1)
			{
				return 0;
			}
			func_907(bParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_538(bParam0, 1192444843))
		{
			switch (bParam0)
			{
				case 1815744868: /* GXTEntry: "Special Lake Lure" */
					if (!func_137(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_655(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438: /* GXTEntry: "Special River Lure" */
					if (!func_137(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_655(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217: /* GXTEntry: "Special Swamp Lure" */
					if (!func_137(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_655(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653: /* GXTEntry: "Lake Lure" */
					if (!func_137(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_655(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425: /* GXTEntry: "River Lure" */
					if (!func_137(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_655(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104: /* GXTEntry: "Swamp Lure" */
					if (!func_137(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_655(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_538(bParam0, -839724752) && func_883(bParam0, 4))
		{
			if (!func_874(42))
			{
				func_908(bParam0);
			}
		}
		else if (func_538(bParam0, 1399091007))
		{
			func_909(bParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_538(bParam0, 1248798204))
		{
			bVar8 = false;
			switch (bParam0)
			{
				case -593948563: /* GXTEntry: "Legend of the East Satchel" */
					bVar8 = -1281487556; /* GXTEntry: "Legend of the East Satchel" */
					break;
				case -1421669656: /* GXTEntry: "Tonics Satchel" */
					bVar8 = -59585102; /* GXTEntry: "Tonics Satchel" */
					break;
				case -830181022: /* GXTEntry: "Ingredients Satchel" */
					bVar8 = 1018123892; /* GXTEntry: "Ingredients Satchel" */
					break;
				case 917695895: /* GXTEntry: "Kit Satchel" */
					bVar8 = -1455768246; /* GXTEntry: "Kit Satchel" */
					break;
				case -1580595448: /* GXTEntry: "Provisions Satchel" */
					bVar8 = -921879912; /* GXTEntry: "Provisions Satchel" */
					break;
				case 1309992709: /* GXTEntry: "Materials Satchel" */
					bVar8 = 982182330; /* GXTEntry: "Materials Satchel" */
					break;
				case 1541618973: /* GXTEntry: "Valuables Satchel" */
					bVar8 = -1406390556; /* GXTEntry: "Valuables Satchel" */
					break;
			}
			if (bVar8 != 0)
			{
				func_655(bVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		switch (bParam0)
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
				func_885(24);
				if (&Global_1946804->f_1497.f_1[27 /*3*/] == &Global_1946804->f_57[27 /*11*/])
				{
					func_910(PLAYER::PLAYER_PED_ID(), -1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_911(&bVar9, 0))
				{
					func_364(bVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303: /* GXTEntry: "Upgraded Bandolier" */
				if (func_90() == -1 && &Global_1946804->f_1497.f_1[25 /*3*/] == &Global_1946804->f_57[25 /*11*/])
				{
					func_910(PLAYER::PLAYER_PED_ID(), 1171350303 /* GXTEntry: "Upgraded Bandolier" */, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("weapon_kit_binoculars"):
				break;
			case 2131771850:
				func_810(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_912();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_913();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_914();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_915();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_916();
				break;
			case -102111672: /* GXTEntry: "Map" */
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584: /* GXTEntry: "Jack Hall Gang Map 1" */
				func_917(499813453, 854119837, 0);
				func_918(499813453, 0);
				func_919(1);
				break;
			case 2127812557:
				func_917(499813453, -1292544588, 0);
				func_918(499813453, 0);
				func_919(2);
				break;
			case 808991383: /* GXTEntry: "Jack Hall Gang Map 3" */
				func_917(499813453, -1003325394, 0);
				func_918(499813453, 0);
				func_919(4);
				break;
			case 1134518629: /* GXTEntry: "High Stakes Treasure Map 1" */
				func_917(666607663, -335460405, 0);
				func_918(666607663, 0);
				func_920(1);
				break;
			case 902940106: /* GXTEntry: "High Stakes Treasure Map 2" */
				func_917(666607663, 903797617, 0);
				func_918(666607663, 0);
				func_920(2);
				break;
			case -418174898: /* GXTEntry: "High Stakes Treasure Map 3" */
				func_917(666607663, 669728650, 0);
				func_918(666607663, 0);
				func_920(4);
				break;
			case -648114971: /* GXTEntry: "The Poisonous Trail Map 1" */
				func_917(-220219788, 1214120047, 0);
				func_918(-220219788, 0);
				func_921(1);
				break;
			case 211153747: /* GXTEntry: "The Poisonous Trail Map 2" */
				func_917(-220219788, 655769340, 0);
				func_918(-220219788, 0);
				func_921(2);
				break;
			case -32876996: /* GXTEntry: "The Poisonous Trail Map 3" */
				func_917(-220219788, 885316185, 0);
				func_918(-220219788, 0);
				func_921(4);
				break;
			case 1191437462: /* GXTEntry: "Le Tresor des Morts Map 1" */
				func_917(218622660, -1491419385, 0);
				func_918(218622660, 0);
				func_922(1);
				break;
			case 1119149048: /* GXTEntry: "Le Tresor des Morts Riddle Note" */
				func_917(218622660, 1809565830, 0);
				func_918(218622660, 0);
				func_922(2);
				break;
			case 506073827: /* GXTEntry: "The Elemental Trail Map 1" */
				func_917(390004462, -628873767, 0);
				func_918(390004462, 0);
				func_923(1);
				break;
			case -1876986168: /* GXTEntry: "The Elemental Trail Map 2" */
				func_917(390004462, -405421956, 0);
				func_918(390004462, 0);
				func_923(2);
				break;
			case 2142623221:
				func_917(390004462, -1108972386, 0);
				func_918(390004462, 0);
				func_923(4);
				break;
			case 1508215381: /* GXTEntry: "Landmarks of Riches Map 1" */
				func_917(6410548, 1053716392, 0);
				func_918(6410548, 0);
				func_924(1);
				break;
			case -888935280: /* GXTEntry: "Landmarks of Riches Map 2" */
				func_917(6410548, 806507056, 0);
				func_918(6410548, 0);
				func_924(2);
				break;
			case -1252474566: /* GXTEntry: "Landmarks of Riches Map 3" */
				func_917(6410548, 1571925350, 0);
				func_918(6410548, 0);
				func_924(4);
				break;
			case -1465702449: /* GXTEntry: "Landmarks of Riches Map 4" */
				func_917(6410548, 1330352282, 0);
				func_918(6410548, 0);
				func_924(8);
				break;
			case -21093309: /* GXTEntry: "Aged Pirate Rum" */
				func_926(242, func_925(-21093309 /* GXTEntry: "Aged Pirate Rum" */), 0);
				break;
			case 204375141: /* GXTEntry: "Ginseng Elixir" */
				func_926(240, func_925(204375141 /* GXTEntry: "Ginseng Elixir" */), 0);
				break;
			case -417963070: /* GXTEntry: "Valerian Root" */
				func_926(241, func_925(-417963070 /* GXTEntry: "Valerian Root" */), 0);
				break;
			case -1080874779: /* GXTEntry: "Special Health Cure" */
			case -755485480: /* GXTEntry: "Potent Health Cure" */
			case 230530039: /* GXTEntry: "Health Cure" */
			case 299161628: /* GXTEntry: "Moonshine" */
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_927(594, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_927(594, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_927(594, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1976480343: /* GXTEntry: "Special Miracle Tonic" */
			case -953313786: /* GXTEntry: "Miracle Tonic" */
			case 730856618: /* GXTEntry: "Potent Miracle Tonic" */
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_927(594, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_927(595, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1977068039: /* GXTEntry: "High Quality Beef and Eggs Stew" */
			case -399865011: /* GXTEntry: "Regional Beef and Eggs Stew" */
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_927(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case 80178851: /* GXTEntry: "Hair Tonic" */
				func_810(488, 0);
				break;
			case 1613651027: /* GXTEntry: "Hair Pomade" */
				func_810(491, 0);
				break;
			case -885810591: /* GXTEntry: "Premium Cigarettes" */
				func_810(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_655(func_928(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_655(func_929(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535: /* GXTEntry: "Ground Coffee" */
				if (func_884(1))
				{
					func_810(487, 0);
				}
				break;
			case -898386032: /* GXTEntry: "Gun Oil" */
				func_810(486, 0);
				break;
			case -2035110427: /* GXTEntry: "Mortar and Pestle" */
				if (func_90() == -1)
				{
					bParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case 1510719693: /* GXTEntry: "Coffee Percolator" */
				func_810(496, 0);
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
		bVar10 = bParam0;
		func_930(&bVar10);
		if (!func_931(bVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_612(0))
		{
			return 1;
		}
		if (func_279(bParam0) == joaat("clothing"))
		{
			func_932(bParam0);
		}
		if (func_538(bParam0, -1979000645))
		{
			func_933(bParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_612(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_655(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_934(iVar2, 0);
		}
	}
	Var35 = { func_860(bParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::_0x6A0184E904CDF25E(&Var35, iVar0);
	}
	func_935(bParam0);
	if (fParam6 > 0f)
	{
		if (func_538(bParam0, -839724752))
		{
			func_936(bParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_859(bParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

void func_656(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5)
{
	int iVar0;

	iVar0 = func_937(iParam0);
	if (!bParam1)
	{
		func_938(iVar0, sParam4, iParam5);
	}
	func_939(iVar0, bParam1, fParam2, iParam3, 752097756);
}

int func_657(char* sParam0, char* sParam1)
{
	return BUILTIN::CEIL((1000f * ENTITY::GET_ANIM_DURATION(sParam0, sParam1)));
}

void func_658(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (func_429(uParam0, 0, 0, 0))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1, sParam1, iParam2, iParam3);
	}
}

void func_659(int* iParam0, float fParam1)
{
	iParam0->f_4 = fParam1;
	func_360(iParam0, 7);
}

Vector3 func_660(int iParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4)
{
	vector3 vVar0;

	if (!bParam4 && PED::IS_PED_INJURED(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (!ANIMSCENE::_0x25557E324489393C(iParam1))
	{
		return 0f, 0f, 0f;
	}
	if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iParam1, sParam2, &vVar0, true, sParam3, 2))
	{
		return vVar0;
	}
	return 0f, 0f, 0f;
}

bool func_661(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

float func_662(struct<2> Param0, int iParam2, struct<2> Param3, Vector3 vParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

Vector3 func_663(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return func_497(vParam3 - vParam0) * Vector(fParam6, fParam6, fParam6);
}

bool func_664(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

int func_665(int iParam0)
{
	iParam0 = func_498(iParam0);
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

int func_666(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	struct<2> Var8;
	struct<6> Var10;
	int iVar16;
	int iVar17;

	uParam1->f_10 = func_498(uParam1->f_10);
	if (uParam1->f_10 == -1)
	{
		*uParam0 = 1;
		return 0;
	}
	if (uParam1->f_10 >= 7)
	{
		*uParam0 = 1;
		return 0;
	}
	if (*uParam1)
	{
		if (func_79(uParam1->f_6))
		{
		}
	}
	bVar0 = func_751();
	if (*uParam1)
	{
		if (bVar0 && !func_895(((*Global_1835011)[4 /*74*/])->f_1, 1))
		{
			if (func_940(5))
			{
				func_941(5);
				func_942(5);
				func_943(0);
				func_944(0);
			}
		}
	}
	if (func_945(Global_36) == 8)
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_895(((*Global_1835011)[37 /*74*/])->f_1, 1)) && !func_895(((*Global_1835011)[43 /*74*/])->f_1, 1))
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_895(((*Global_1835011)[43 /*74*/])->f_1, 1)) && !func_895(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_665(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_732(iVar1))
	{
		bVar3 = true;
		if (func_946(iVar1))
		{
			bVar4 = true;
		}
		if (func_947(iVar1))
		{
			bVar5 = true;
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar5 && !uParam1->f_5)
			{
				func_948(uParam1->f_10);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar4)
			{
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!func_940(0) && func_940(1))
			{
				func_949(1, 0);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_950())
			{
				func_951();
			}
			func_943(0);
			func_944(0);
			func_952(uParam1->f_6);
		}
	}
	if (!func_732(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_953(uParam1->f_10) == 0 || func_954(uParam1->f_10) == 0) || func_955(uParam1->f_10) == 0)
			{
				func_956(uParam1->f_10);
			}
			func_957(uParam1->f_10);
			func_958(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
		*uParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_665(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_732(iVar1))
	{
		bVar3 = true;
		if (func_946(iVar1))
		{
			bVar4 = true;
		}
		if (func_947(iVar1))
		{
			bVar5 = true;
		}
	}
	if (uParam1->f_2)
	{
		if (bVar3)
		{
			if (ENTITY::_0x083D497D57B7400F(iVar2))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			}
			if (!func_79(uParam1->f_6))
			{
				ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
				ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
				ENTITY::_0x9587913B9E772D29(iVar2, 0);
			}
		}
	}
	if (func_959(uParam1->f_10))
	{
		*uParam0 = 0;
		return 0;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (bVar3)
	{
		if (bVar5 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!PED::_0xA0BC8FAED8CFEB3C(iVar2))
			{
				*uParam0 = 0;
				return 0;
			}
			iVar6 = PLAYER::PLAYER_ID();
			iVar7 = PLAYER::_0xB48050D326E9A2F3(iVar6);
			if (ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
				if (iVar7 != iVar2)
				{
					PLAYER::_0xD2CB0FB0FDCB473D(iVar6, 0);
				}
			}
			Var8 = { func_960(uParam1->f_10) };
			Var10 = { func_961() };
			func_962(iVar2, &Var8, &Var10, 0);
			PLAYER::_0xD2CB0FB0FDCB473D(iVar6, iVar2);
			PED::SET_PED_CONFIG_FLAG(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return iVar2;
	}
	if (!func_238(uParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
		func_963(uParam1->f_10);
		if (uParam1->f_2 && !func_79(uParam1->f_6))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			PHYSICS::_0x0348469DAA17576C(iVar2);
			ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
			ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
			ENTITY::_0x9587913B9E772D29(iVar2, 0);
		}
		*uParam0 = 2;
		return iVar2;
	}
	func_236(uParam1->f_10);
	if (func_238(uParam1->f_10))
	{
		iVar16 = func_237(uParam1->f_10);
		iVar17 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (iVar16 != iVar17)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	*uParam0 = 2;
	return iVar2;
}

void func_667(var uParam0, char* sParam1, char* sParam2)
{
	int iVar0;

	if (func_44(uParam0) == 2 || func_44(uParam0) == 1)
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, sParam1, sParam2, Global_35, func_657(sParam1, sParam2), 1090519040, -1056964608, 8200, 0, 0, 0, -1082130432, 0, 0, -1082130432);
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, "SCRIPT_RE@HERBALISTCAMP@PAMPHLET_HANDOVER", "PAMP_LOOP_HERBALIST", Global_35, -1, 1090519040, -1056964608, 8201, 0, 0, 0, -1082130432, 0, 0, -1082130432);
		func_171(uParam0->f_7, &iVar0, 0, 0, 1, 1);
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, sParam1, sParam2, Global_35, func_657(sParam1, sParam2), 1090519040, -1056964608, 8200, 0, 0, 0, -1082130432, 0, 0, -1082130432);
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, "SCRIPT_RE@HERBALISTCAMP@SERUM_HANDOVER", "SERUM_LOOP_HERBALIST", Global_35, -1, 1090519040, -1056964608, 8201, 0, 0, 0, -1082130432, 0, 0, -1082130432);
		func_171(uParam0->f_7, &iVar0, 0, 0, 1, 1);
	}
}

void func_668(int* iParam0, bool bParam1)
{
	if (!bParam1)
	{
		iParam0->f_4 = 0f;
	}
	func_361(iParam0, 7);
}

bool func_669(var uParam0, var uParam1, char* sParam2, int iParam3, var uParam4, int iParam5, bool bParam6, bool bParam7)
{
	Stack.Push(uParam0);
	Stack.Push(uParam1->f_1);
	Stack.Push(sParam2);
	Stack.Push(iParam3);
	Call_Loc(uParam1->f_6);
	return func_964(StackVal, StackVal, StackVal, StackVal, uParam4, iParam5, bParam6, bParam7, 1);
}

float func_670(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1f;
	}
	return func_372(Global_35, iParam0, bParam1, bParam2);
}

int func_671(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!bParam3)
	{
		return 0;
	}
	if (fParam2 > 25f)
	{
		return 0;
	}
	if (iParam1 == Global_35)
	{
		if (PED::IS_PED_IN_COMBAT(Global_35, 0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_672(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = bParam4;
	Var0.f_6 = iParam7;
	return func_965(iParam0, &Var0);
}

int func_673(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_674(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (*uParam1 != 0)
		{
			func_803(iParam0, 1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iParam2))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam2))
				{
					if (uParam1->f_5)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam2, false);
					}
					if (uParam1->f_6)
					{
						TASK::CLEAR_PED_TASKS(iParam2, 1, 0);
					}
					PED::_0x931B241409216C1F(iParam0, iParam2, 0);
					PED::SET_PED_CONFIG_FLAG(iParam0, 167, true);
					PED::SET_PED_CONFIG_FLAG(iParam0, 321, true);
					PED::SET_PED_CONFIG_FLAG(iParam2, 178, true);
				}
			}
			func_966(iParam0, uParam1, iParam2);
			if (uParam1->f_2 != joaat("none"))
			{
				PED::_0x24C82EF607105FAA(iParam0, uParam1->f_2);
			}
			if (uParam1->f_4 == 0)
			{
				iVar0 = Global_35;
				iVar1 = iParam0;
			}
			else
			{
				iVar0 = iParam0;
				iVar1 = Global_35;
			}
			EVENT::_0x7C511E91738A0828(iVar0, iVar1, *uParam1, 0);
		}
	}
}

bool func_675(int iParam0, int iParam1)
{
	return func_617(iParam0) == iParam1;
}

var func_676(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

void func_677(int* iParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		func_569(uParam1);
	}
	func_802(iParam0, &(iParam0->f_21));
}

int func_678(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || (iParam2 == 1 && ENTITY::IS_ENTITY_DEAD(iParam0)))
	{
		return 0;
	}
	iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
	if (!MAP::DOES_BLIP_EXIST(iVar0))
	{
		return 0;
	}
	return MAP::_0x662D364ABF16DE2F(iVar0, iParam1);
}

void func_679(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_334(&(iParam0->f_18));
}

var func_680(var uParam0)
{
	var uVar0;

	uVar0 = func_374(uParam0->f_472);
	if (uParam0->f_473 != 0)
	{
		uVar0 = (uVar0 || uParam0->f_473);
	}
	func_118(&uVar0, 1);
	return uVar0;
}

int func_681(int iParam0, int iParam1, bool bParam2)
{
	if (func_30(iParam1, 8))
	{
		if (!bParam2 || func_682(iParam0, -1904017806))
		{
			if (func_333(&(iParam0->f_447)))
			{
				if (func_343(&(iParam0->f_447), (5f * 60f)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_682(int iParam0, int iParam1)
{
	if (PED::_0x569F1E1237508DEB(iParam0->f_7) == iParam1)
	{
		return 1;
	}
	return 0;
}

int func_683(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (func_30(iParam2, 2))
	{
		return 0;
	}
	if (!func_684(iParam0, 0, 0))
	{
		return 0;
	}
	if (func_967(iParam0, iParam2))
	{
		return 1;
	}
	if (func_968(iParam0))
	{
		return 0;
	}
	if (func_30(iParam2, 65536))
	{
		if (!func_682(iParam0, -1904017806) || !func_30(iParam2, 131072))
		{
			return 0;
		}
	}
	if (bParam3)
	{
		if (func_30(iParam2, 4))
		{
			if (func_969(iParam0, 0))
			{
				*bParam1 = 1;
				return 1;
			}
		}
		else if (func_208(Global_35, iParam0->f_7, 20f, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_684(int iParam0, bool bParam1, bool bParam2)
{
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iParam0->f_7, 0))
	{
		if (!bParam1 && TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 1))
		{
			return 0;
		}
		if (iParam0->f_468 != 0)
		{
			if (PED::_0x68821369A2CEADD5(iParam0->f_7, iParam0->f_468))
			{
				return 0;
			}
		}
		if (!bParam2)
		{
			return 1;
		}
		else
		{
			return TASK::_0x02EBBB3989B7E695(iParam0->f_7);
		}
	}
	return 0;
}

void func_685(int iParam0, int iParam1, int iParam2)
{
	iParam0->f_475 = iParam1;
	iParam0->f_476 = iParam2;
}

void func_686(int iParam0)
{
	return;
	if (!func_333(&(iParam0->f_456)) || func_343(&(iParam0->f_456), 2f))
	{
		PED::_0x2208438012482A1A(iParam0->f_7, false, false);
		func_341(&(iParam0->f_456));
	}
}

int func_687(int iParam0)
{
	if (func_370(iParam0, 65536))
	{
		return 0;
	}
	return 1;
}

int func_688(int iParam0, int iParam1)
{
	bool bVar0;

	bVar0 = (func_30(iParam1, 65536) && !func_682(iParam0, -1904017806));
	if (!bVar0)
	{
		if (func_30(iParam1, 16) && func_682(iParam0, 2093245709))
		{
			bVar0 = true;
		}
	}
	if (bVar0 || !func_30(iParam1, 131072))
	{
		if (bVar0 || func_30(iParam1, 4))
		{
			if (bVar0 || func_343(&(iParam0->f_444), 3f))
			{
				if (bVar0 || !func_205(iParam0->f_7, 0))
				{
					return 2;
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_689(int iParam0)
{
	if (!TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 1))
	{
		func_423(iParam0, -1f);
	}
}

int func_690(int iParam0)
{
	var uVar0;

	if (iParam0 == -1)
	{
		uVar0 = func_970(1);
	}
	else
	{
		uVar0 = func_971(iParam0);
	}
	return uVar0;
}

void func_691(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_972(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_973(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17503.f_2205[iVar2 /*2*/] = &Global_17503.f_2205[iVar2 /*2*/] + 1;
	}
}

int func_692()
{
	return Global_1897952->f_41;
}

void func_693(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1 && !func_216(iParam0, 8192))
	{
		iVar0 = func_973(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17503.f_2205[iVar0 /*2*/] = &Global_17503.f_2205[iVar0 /*2*/] + 1;
	}
}

void func_694(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam1)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	func_85(iParam0, bParam3, BUILTIN::ROUND((fVar0 * fParam2)), BUILTIN::ROUND((fVar1 * fParam2)), BUILTIN::ROUND((fVar2 * fParam2)), BUILTIN::ROUND((fVar3 * fParam2)), bParam4, 1);
}

void func_695(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 1;
	if (bParam1)
	{
		iVar0 = 3;
	}
	if (func_122(iParam0, 262144))
	{
		if (Global_1392135->f_3 == -1)
		{
			func_974(262144, iVar0, 0, 1);
		}
	}
	if (func_122(iParam0, 128))
	{
		func_974(128, iVar0, 0, 1);
	}
	else if (func_122(iParam0, 524288))
	{
		func_974(524288, iVar0, 0, 1);
	}
	else if (func_122(iParam0, 536870912))
	{
		func_974(536870912, iVar0, 0, 1);
	}
	else if (func_122(iParam0, 4194304))
	{
		func_974(4194304, iVar0, 0, 1);
	}
	else if (func_122(iParam0, 8388608))
	{
		func_974(8388608, iVar0, 0, 1);
	}
}

void func_696(int iParam0)
{
	Global_1310750->f_16077 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1310750->f_16071 = iParam0;
}

int func_697(bool bParam0)
{
	if (!bParam0 && func_975(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(752193127, bParam0, 0);
	return 1;
}

int func_698()
{
	return Global_1310750->f_16037;
}

int func_699(int iParam0)
{
	if (!func_243(iParam0))
	{
		return 0;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_47;
}

void func_700(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_243(&(Global_1310750->f_13321[iParam0 /*9*/])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID((Global_1310750->f_13321[iParam0 /*9*/])->f_5, 523);
	((*Global_1310750)[iVar0 /*111*/])->f_48 = 0;
	func_976(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_701(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	func_977(Global_1393447, 1);
	func_978();
	func_979();
	func_980((BUILTIN::TO_FLOAT(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135->f_54 = (func_754() / 1000);
		if (Global_1392135->f_1 & 4 != 0)
		{
			Global_1392135->f_1 = (Global_1392135->f_1 - Global_1392135->f_1 & 4);
		}
		func_981();
		if (iParam1 == -1)
		{
			if (func_30(iParam0, 1))
			{
				func_974(16777216, 2, 0, 1);
				iVar0 = BUILTIN::FLOOR(240f);
			}
			else if (func_30(iParam0, 2))
			{
				func_974(16777216, 0, 0, 1);
				iVar0 = BUILTIN::FLOOR(60f);
			}
			else if (func_30(iParam0, 4))
			{
				func_974(16777216, 5, 0, 1);
				iVar0 = BUILTIN::FLOOR(900f);
			}
			Global_1392135->f_4 = (Global_1392135->f_54 + iVar0);
		}
		else
		{
			func_982(iParam1, iParam2, iParam3, iParam4);
			Global_1392135->f_5[iParam1] = (((Global_1392135->f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_983(BUILTIN::TO_FLOAT(iVar0), 1, 0);
	}
	else
	{
		func_983((BUILTIN::TO_FLOAT(200) / 3f), 1, 0);
	}
}

bool func_702(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1 /*10*/] && iParam0) != 0;
}

void func_703(int iParam0, int iParam1)
{
	((*Global_1392050)[iParam1 /*14*/])->f_1 = (((*Global_1392050)[iParam1 /*14*/])->f_1 - (((*Global_1392050)[iParam1 /*14*/])->f_1 && iParam0));
}

void func_704(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam1 /*10*/] = (Global_40.f_9571[iParam1 /*10*/] || iParam0);
}

int func_705(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 1033509606 /* GXTEntry: "Del Lobo Gang" */;
		case 2:
			return 1143368244 /* GXTEntry: "Lemoyne Raiders" */;
		case 1:
			return -1797026825 /* GXTEntry: "The Murfree Brood" */;
		case 0:
			return 55818986 /* GXTEntry: "O\'Driscoll Boys" */;
		case 4:
			return -2100600611 /* GXTEntry: "The Laramie Gang" */;
		case 3:
			return 529020251 /* GXTEntry: "The Skinner Brothers" */;
		case -1:
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_706()
{
	return (Global_1935630->f_44 == joaat("weapon_kit_binoculars") && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE());
}

int func_707(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (fParam1 > fParam2)
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_6))
	{
		return 0;
	}
	return 1;
}

int func_708(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_707(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_709() - 0.02f);
		}
		return 1;
	}
	uParam0->f_8 = 0f;
	return 0;
}

float func_709()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_710(bool bParam0, bool bParam1, bool bParam2)
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

int func_711()
{
	return &Global_1899515;
}

int func_712(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_713(int iParam0)
{
	switch (iParam0)
	{
		case joaat("overcast"):
		case joaat("highpressure"):
		case joaat("overcastdark"):
		case joaat("clouds"):
		case joaat("misty"):
		case joaat("sunny"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_714(int iParam0)
{
	switch (iParam0)
	{
		case joaat("drizzle"):
		case joaat("thunder"):
		case joaat("shower"):
		case joaat("sleet"):
		case joaat("hurricane"):
		case joaat("rain"):
		case joaat("hail"):
		case joaat("thunderstorm"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_715(int iParam0)
{
	switch (iParam0)
	{
		case joaat("snow"):
		case joaat("snowlight"):
		case joaat("blizzard"):
		case joaat("whiteout"):
		case joaat("snowclearing"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_716(int iParam0)
{
	switch (iParam0)
	{
		case joaat("fog"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_717(int iParam0)
{
	switch (iParam0)
	{
		case joaat("drizzle"):
		case joaat("thunder"):
		case joaat("misty"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_718(int iParam0)
{
	switch (iParam0)
	{
		case joaat("snowlight"):
		case joaat("snowclearing"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_719(int iParam0)
{
	switch (iParam0)
	{
		case joaat("sandstorm"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_720(bool bParam0, int iParam1, int iParam2)
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

int func_721()
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

int func_722(int iParam0)
{
	if (!func_725(iParam0))
	{
		return -1;
	}
	return func_985(func_984(iParam0));
}

bool func_723(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_724(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_725(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_726(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_727(int iParam0)
{
	return func_122(iParam0, Global_1310750->f_16072 | 64);
}

int func_728(int iParam0)
{
	var uVar0;
	int iVar3;

	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::_GET_INTERIOR_INFO(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case -1571304986:
			case -1342123354:
			case -1269216817:
			case -1212338017:
			case -803716508:
			case 768224943:
			case 1245139812:
			case 1633500362:
				return 1;
		}
	}
	return 0;
}

int func_729(int iParam0)
{
	var uVar0;
	int iVar3;

	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::_GET_INTERIOR_INFO(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case -1946266312:
			case -1817199644:
			case -1604045519:
			case -857108408:
			case -431793961:
			case -17417813:
			case 37578405:
			case 459745161:
			case 653987431:
			case 1107105323:
			case 1135757916:
			case 1442115297:
			case 1548023642:
			case 1911907177:
				return 1;
		}
	}
	return 0;
}

bool func_730(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_731(int iParam0)
{
	return ((Global_1310750[iParam0 /*111*/] != 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(((*Global_1310750)[iParam0 /*111*/])->f_40))) && HUD::GET_LENGTH_OF_LITERAL_STRING(&(((*Global_1310750)[iParam0 /*111*/])->f_40)) != 0);
}

int func_732(int iParam0)
{
	iParam0 = func_498(iParam0);
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

void func_733(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	vector3 vVar12;
	float fVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	int iVar21;
	int iVar22;

	if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar0 = func_665(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	bVar1 = false;
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		bVar1 = true;
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(iVar0))
	{
		return;
	}
	if (func_986(iParam0, 64))
	{
		func_734(iParam0);
		return;
	}
	bVar2 = false;
	if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26) && !MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
	{
		if (!MAP::GET_BLIP_FROM_ENTITY(iVar0) == 0)
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		return;
	}
	bVar3 = func_884(42);
	if (bVar1)
	{
		if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
		{
			MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_26));
		}
		if (iVar0 == PLAYER::_0xB48050D326E9A2F3(PLAYER::PLAYER_ID()) && bVar3)
		{
			if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
			{
				((*Global_1900383)[iParam0 /*45*/])->f_27 = MAP::_BLIP_ADD_FOR_ENTITY(-515518185, iVar0);
				MAP::SET_BLIP_SPRITE(((*Global_1900383)[iParam0 /*45*/])->f_27, -1327110633, true);
				func_987(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
			}
		}
		else if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
		{
			MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
		}
		return;
	}
	else if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
	{
		MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
	}
	bVar4 = false;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (Global_1935630->f_40 == iVar0)
		{
			bVar4 = true;
		}
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26) && bVar4)
	{
		func_734(iParam0);
	}
	if (bVar4)
	{
		return;
	}
	if ((Global_40.f_1095.f_1[iParam0 /*436*/])->f_14 == 2)
	{
		return;
	}
	bVar6 = false;
	if (iParam0 == 0)
	{
		iVar5 = -1925605092;
	}
	else if (iParam0 == 1)
	{
		iVar5 = -1230993421;
		bVar6 = true;
	}
	else
	{
		return;
	}
	if (bVar6)
	{
		bVar7 = false;
		if (func_988(1) < 1)
		{
			bVar7 = true;
		}
		if (bVar7)
		{
			if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
			{
				MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_26));
			}
			return;
		}
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		((*Global_1900383)[iParam0 /*45*/])->f_26 = MAP::_BLIP_ADD_FOR_ENTITY(iVar5, iVar0);
		((*Global_1900383)[iParam0 /*45*/])->f_25 = 0;
		func_989(&(((*Global_1900383)[iParam0 /*45*/])->f_26), bVar6);
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_986(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = TASK::IS_PED_IN_WRITHE(iVar0);
	bVar10 = false;
	iVar11 = func_990(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar11))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar11))
		{
			if (PED::GET_MOUNT(iVar11) == iVar0)
			{
				bVar10 = true;
			}
		}
	}
	vVar12 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	fVar15 = func_991(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_992(iParam0))
	{
		bVar16 = true;
	}
	iVar17 = 0;
	iVar18 = 0;
	if (bVar8)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 3)
		{
			iVar17 = -401963276;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 3;
		}
	}
	else if (bVar9)
	{
		fVar19 = PED::_0xEBE89623EB861271(iVar0, 1);
		if (bVar16)
		{
			if (fVar19 < 0.25f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 9)
				{
					iVar17 = 430539302;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 9;
				}
			}
			else if (fVar19 < 0.5f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 10)
				{
					iVar17 = -995247980;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 10;
				}
			}
			else if (fVar19 < 0.75f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 11)
				{
					iVar17 = -25056193;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 11;
				}
			}
			else if (fVar19 <= 1f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 12)
				{
					iVar17 = -264630352;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 12;
				}
			}
		}
		else if (fVar19 < 0.25f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 5)
			{
				iVar17 = 430539302;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 5;
			}
		}
		else if (fVar19 < 0.5f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 6)
			{
				iVar17 = -995247980;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 6;
			}
		}
		else if (fVar19 < 0.75f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 7)
			{
				iVar17 = -25056193;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 7;
			}
		}
		else if (fVar19 <= 1f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 8)
			{
				iVar17 = -264630352;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 8;
			}
		}
	}
	else if (bVar10)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 4)
		{
			iVar17 = -1380599892;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 4;
		}
	}
	else if (bVar16)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 2)
		{
			iVar17 = 1313031610;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 2;
		}
	}
	else if (!bVar16)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 1)
		{
			iVar17 = -1012863186;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 1;
		}
	}
	if (iVar17 != 0)
	{
		func_993(((*Global_1900383)[iParam0 /*45*/])->f_26);
		func_994(((*Global_1900383)[iParam0 /*45*/])->f_26);
		MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, iVar17);
		if (iVar17 == -401963276)
		{
			MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, 231194138);
		}
	}
	if (iVar18 != 0)
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, iVar18);
	}
	if ((PLAYER::_0xB48050D326E9A2F3(PLAYER::PLAYER_ID()) == iVar0 && bVar3) && !bVar9)
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, 673950256);
	}
	else
	{
		MAP::_SET_BLIP_FLASH_STYLE(((*Global_1900383)[iParam0 /*45*/])->f_26, 673950256);
	}
	if (func_995(iVar0) && !bVar9)
	{
		if (iVar5 == -1925605092)
		{
			iVar20 = 561559387;
		}
		else if (iVar5 == -1230993421)
		{
			iVar20 = -201249929;
		}
		MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, iVar20);
	}
	else
	{
		MAP::_SET_BLIP_FLASH_STYLE(((*Global_1900383)[iParam0 /*45*/])->f_26, 561559387);
		MAP::_SET_BLIP_FLASH_STYLE(((*Global_1900383)[iParam0 /*45*/])->f_26, -201249929);
	}
	iVar21 = func_988(iParam0);
	iVar22 = 0;
	if (iParam0 == 0)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = -217389439;
				break;
			case 1:
				iVar22 = 13992470;
				break;
			case 2:
				iVar22 = 396341162;
				break;
			case 3:
				iVar22 = 623069873;
				break;
			case 4:
				iVar22 = -637422489;
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = 937553910;
				break;
			case 1:
				iVar22 = 489732756;
				break;
			case 2:
				iVar22 = 195204984;
				break;
			case 3:
				iVar22 = -103418913;
				break;
			case 4:
				iVar22 = -815685893;
				break;
		}
	}
	if (iVar22 == 0)
	{
		MAP::_0x44813684F72B563C(iVar0, ((*Global_1900383)[iParam0 /*45*/])->f_26);
	}
	else
	{
		MAP::_0x97F6F158CC5B5CA2(iVar0, ((*Global_1900383)[iParam0 /*45*/])->f_26);
		MAP::_0x7563CBCA99253D1A(iVar0, iVar22);
	}
}

void func_734(int iParam0)
{
	iParam0 = func_498(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_26));
	}
	((*Global_1900383)[iParam0 /*45*/])->f_25 = 0;
}

int func_735(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_736(iParam0, iParam1);
	iVar0 = 0;
	while (iVar0 < Global_17503.f_1003)
	{
		if (&Global_17503.f_1003[iVar0 /*6*/] == iVar1 || &Global_17503.f_1003[iVar0 /*6*/] == -1)
		{
			Global_17503.f_1003[iVar0 /*6*/] = iVar1;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_736(int iParam0, int iParam1)
{
	if (!func_243(iParam0))
	{
		return -1;
	}
	return (iParam0 + (120 * iParam1));
}

int func_737(int iParam0)
{
	return iParam0;
}

void func_738(int iParam0)
{
	if (!func_996(iParam0))
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

void func_739(int iParam0)
{
	int iVar0;

	if (func_90() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_244(func_997(iVar0), 0))
		{
			if (PED::IS_PED_GROUP_MEMBER(func_997(iVar0), func_275(), 1))
			{
				func_998(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

int func_740(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 1;
		case 60:
			return 37;
		case 97:
			return 26;
		default:
			break;
	}
	return 0;
}

void func_741(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 == 0)
	{
		iParam3 = (Global_1415419->f_19[iParam0 /*12*/])->f_5;
	}
	if (iParam3 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 248)
		{
			if ((Global_1415419->f_19[iVar0 /*12*/])->f_5 == iParam3)
			{
				if (iVar0 != iParam0)
				{
					if (func_999() > (Global_32073.f_2697.f_6[iVar0 /*6*/])->f_5)
					{
						(Global_32073.f_2697.f_6[iVar0 /*6*/])->f_5 = func_999();
					}
					func_1000(&((Global_32073.f_2697.f_6[iVar0 /*6*/])->f_5), 0, 0, iParam1, iParam2, 0, 0, 0);
					func_118(&((Global_1415419->f_19[iVar0 /*12*/])->f_11), 2);
				}
			}
			iVar0++;
		}
	}
}

struct<2> func_742(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_743(var uParam0, int iParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

void func_744(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_972(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_973(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		(Global_17503.f_2205[iVar2 /*2*/])->f_1++;
	}
}

void func_745(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1 && !func_216(iParam0, 8192))
	{
		iVar0 = func_973(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		(Global_17503.f_2205[iVar0 /*2*/])->f_1++;
	}
}

void func_746(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (func_513(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(Global_17503.f_12[iVar1], iVar2);
}

void func_747(int iParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_122(iParam0, 512))
	{
		vParam1 = { Global_36 };
	}
	if (func_79(vParam1))
	{
		return;
	}
	if (!func_243(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_17503.f_2084)
	{
		vVar2 = { *(Global_17503.f_2084[iVar0 /*5*/]) };
		if (func_79(vVar2))
		{
			if (iVar1 < 0)
			{
				iVar1 = iVar0;
			}
		}
		else if ((Global_17503.f_2084[iVar0 /*5*/])->f_3 == iParam0)
		{
			if (func_511(vVar2, vParam1, 1f, 1))
			{
				return;
			}
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		*(Global_17503.f_2084[iVar1 /*5*/]) = { vParam1 };
		(Global_17503.f_2084[iVar1 /*5*/])->f_3 = iParam0;
		(Global_17503.f_2084[iVar1 /*5*/])->f_4 = ((*Global_1310750)[iParam0 /*111*/])->f_62;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_17503.f_2084)
		{
			if (iVar0 + 1 >= 24)
			{
				*(Global_17503.f_2084[iVar0 /*5*/]) = { vParam1 };
				(Global_17503.f_2084[iVar0 /*5*/])->f_3 = iParam0;
				(Global_17503.f_2084[iVar0 /*5*/])->f_4 = ((*Global_1310750)[iParam0 /*111*/])->f_62;
			}
			else
			{
				*(Global_17503.f_2084[iVar0 /*5*/]) = { *(Global_17503.f_2084[iVar0 + 1 /*5*/]) };
			}
			iVar0++;
		}
	}
}

void func_748(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_1001(iVar0, iParam0);
		iVar0++;
	}
}

int func_749(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 2;
		case 2:
			return 2;
		case 3:
			return 2;
		case 75:
			return 1;
		case 76:
			return 1;
		case 4:
			return 2;
		case 77:
			return 2;
		case 5:
			return 2;
		case 6:
			return 3;
		case 7:
			return 2;
		case 78:
			return 2;
		case 8:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 3;
		case 13:
			return 2;
		case 14:
			return 2;
		case 15:
			return 5;
		case 16:
			return 1;
		case 17:
			return 2;
		case 18:
			return 2;
		case 91:
			return 1;
		case 19:
			return 1;
		case 20:
			return 3;
		case 21:
			return 1;
		case 22:
			return 1;
		case 23:
			return 3;
		case 94:
			return 8;
		case 24:
			return 3;
		case 119:
			return 4;
		case 27:
			return 6;
		case 28:
			return 2;
		case 29:
			return 2;
		case 30:
			return 4;
		case 31:
			return 3;
		case 32:
			return 1;
		case 33:
			return 2;
		case 34:
			return 1;
		case 35:
			return 1;
		case 96:
			return 4;
		case 36:
			return 3;
		case 37:
			return 4;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 4;
		case 41:
			return 3;
		case 42:
			return 2;
		case 99:
			return 2;
		case 44:
			return 3;
		case 43:
			return 4;
		case 45:
			return 4;
		case 46:
			return 2;
		case 47:
			return 1;
		case 48:
			return 2;
		case 105:
			return 2;
		case 49:
			return 1;
		case 50:
			return 9;
		case 51:
			return 2;
		case 52:
			return 2;
		case 53:
			return 2;
		case 54:
			return 2;
		case 56:
			return 3;
		case 57:
			return 8;
		case 58:
			return 2;
		case 59:
			return 2;
		case 60:
			return 2;
		case 61:
			return 1;
		case 62:
			return 3;
		case 63:
			return 3;
		case 64:
			return 3;
		case 65:
			return 2;
		case 66:
			return 3;
		case 67:
			return 1;
		case 68:
			return 2;
		case 69:
			return 1;
		case 70:
			return 2;
		case 71:
			return 2;
		case 72:
			return 3;
		case 73:
			return 3;
		case 74:
			return 1;
		case 79:
			return 4;
		case 80:
			return 2;
		case 81:
			return 4;
		case 82:
			return 4;
		case 83:
			return 2;
		case 84:
			return 2;
		case 85:
			return 2;
		case 86:
			return 2;
		case 87:
			return 3;
		case 88:
			return 2;
		case 89:
			return 1;
		case 90:
			return 2;
		case 92:
			return 2;
		case 93:
			return 1;
		case 95:
			return 1;
		case 97:
			return 2;
		case 98:
			return 3;
		case 100:
			return 1;
		case 101:
			return 2;
		case 102:
			return 3;
		case 103:
			return 3;
		case 104:
			return 3;
		case 106:
			return 9;
		case 107:
			return 2;
		case 108:
			return 5;
		case 109:
			return 2;
		case 110:
			return 1;
		case 111:
			return 7;
		case 112:
			return 1;
		case 113:
			return 3;
		case 114:
			return 4;
		case 115:
			return 2;
		case 117:
			return 2;
		case 116:
			return 1;
		case 118:
			return 2;
		default:
			break;
	}
	return 0;
}

void func_750(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_751()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

int func_752(int iParam0, bool bParam1)
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
	while (iVar1 < &Global_1911670)
	{
		iVar0 = Global_1911670[iVar1];
		if (!VOLUME::_0xF6A8A652A6B186CD(iVar0) || iVar0 == iParam0)
		{
			(*Global_1911670)[iVar1] = iParam0;
			return 1;
		}
		iVar1++;
	}
	return 0;
}

void func_753(int iParam0)
{
	Global_17503.f_2++;
	(Global_17503.f_42[iParam0 /*8*/])->f_3++;
	((*Global_1310750)[iParam0 /*111*/])->f_110 |= 2;
}

int func_754()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_755(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	int iVar0[4];
	int iVar5[4];

	if (func_79(vParam0))
	{
		return 0;
	}
	iVar0[0] = iParam4;
	iVar5[0] = 16384;
	iVar5[1] = iParam5;
	if (VOLUME::_0x870E9981ED27C815(vParam0, &iVar0, &iVar5, iParam3))
	{
		return 1;
	}
	return 0;
}

bool func_756(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_79(vParam0))
	{
		return false;
	}
	return VOLUME::_0x769BB7626B8CDB06(vParam0, fParam3, iParam5, iParam4, 16384);
}

int func_757(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1310750->f_16043)
	{
		if (!func_79(*(Global_1310750->f_16043[iVar0 /*3*/])))
		{
			if (func_88(vParam0, *(Global_1310750->f_16043[iVar0 /*3*/])) < 2500f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_758()
{
	int iVar0;
	int iVar1;

	iVar0 = func_1002(func_479());
	if (iVar0 == 8)
	{
		iVar1 = func_480(func_479());
		if (func_482(Global_36, iVar1))
		{
			return 0;
		}
	}
	if (func_1003(func_970(0)))
	{
		return 0;
	}
	if (func_1004())
	{
		return 0;
	}
	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

float func_759(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

int func_760(bool bParam0, int iParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return 0;
	}
	if (!func_278(bParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(bParam0, iParam1, &Var0))
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

struct<4> func_761(bool bParam0)
{
	return func_610(joaat("character"), func_1005(), -1591664384, bParam0);
}

bool func_762(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_763(int iParam0)
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

void func_764(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_1006(iParam0, iParam1))
		{
			if (func_1007(iParam0, iParam1))
			{
				if (func_1008(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_1009(iParam0);
				}
			}
			else
			{
				PED::_SET_PED_BODY_COMPONENT(iParam0, iParam1);
				PED::_UPDATE_PED_VARIATION(iParam0, 0, 1, 1, 1, 0);
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

void func_765(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	PED::_SET_PED_COMPONENT_DISABLED(iParam0, -1725579161, 1);
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, 0, 1, 1, 1, 0);
	}
}

void func_766(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	PED::_SET_PED_BODY_COMPONENT(iParam0, 1268180497);
	if (bParam1)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, 0, 1, 1, 1, 0);
	}
}

void func_767(int iParam0, int iParam1)
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

void func_768(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_1010();
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
			func_1011(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_769(int iParam0)
{
	return &(Global_1109400->f_275[iParam0 /*3*/]);
}

int func_770(int iParam0)
{
	int iVar0;

	iVar0 = Global_1935630->f_40;
	if (func_90() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_1012(iParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_1012(iParam0);
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_1013(iVar0) == -1)
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iVar0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iVar0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return 0;
	}
	iParam0->f_14 = iVar0;
	return 1;
}

void func_771(int iParam0)
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
	{
		func_1014(iParam0);
	}
}

int func_772(int iParam0, int iParam1)
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

int func_773(int iParam0, int iParam1)
{
	if (PED::_0xB65A4DAB460A19BD(iParam0) == iParam1)
	{
		return 1;
	}
	if (func_1015(iParam0, 1, 0, 0) != joaat("weapon_lasso"))
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

bool func_774(int iParam0)
{
	return !*iParam0 & 2 != 0;
}

int func_775(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_776(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_119(iParam0, 134217728);
	}
	else
	{
		func_118(iParam0, 134217728);
	}
}

float func_777(int iParam0)
{
	return iParam0->f_23;
}

int func_778(int iParam0)
{
	return iParam0->f_21;
}

float func_779(int iParam0)
{
	if (!*iParam0 & 1 != 0)
	{
		return func_1016(iParam0);
	}
	if (GRAPHICS::_0x25CA89B2A39DCC69() > 0.833f)
	{
		return func_1017(iParam0);
	}
	return func_1016(iParam0);
}

float func_780(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_781()
{
	int iVar0;
	int iVar1;

	iVar0 = func_712(func_711());
	iVar1 = func_1018(func_711());
	if (iVar0 >= 21)
	{
		return 1;
	}
	else if (iVar0 < 5)
	{
		return 1;
	}
	else if (iVar0 >= 20)
	{
		if (iVar1 >= 20)
		{
			return 1;
		}
	}
	else if (iVar0 < 6)
	{
		if (iVar1 <= 20)
		{
			return 1;
		}
	}
	return 0;
}

int func_782(int iParam0, int iParam1)
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
			if (!func_1019(iParam0, iParam1, iVar2))
			{
				return 0;
			}
			if (func_1020(iParam0, iVar2) <= func_1021(iParam1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_783(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_1022(iParam0, !*iParam1 & 268435456 != 0, !*iParam1 & 536870912 != 0, !*iParam1 & 1073741824 != 0, 0, 0))
		{
			if (iParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (iParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_1023(iParam1);
			if (func_1024(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - iParam1->f_2);
				iVar3 = func_1025(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_776(iParam1, 1);
						return 1;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_776(iParam1, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_784(int iParam0, int iParam1, int iParam2)
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
	if (func_1026(iParam1, !*iParam2 & 268435456 != 0, !*iParam2 & 536870912 != 0, !*iParam2 & 1073741824 != 0, 0))
	{
		if (iParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (iParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_1023(iParam2);
		if (func_1024(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (iParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - iParam2->f_2) > func_1025(iParam2)
				{
					func_776(iParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_785(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
	{
		return 0;
	}
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, false, false))
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
	if (func_1019(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - iParam1->f_3) > func_1025(iParam1)
		{
			fVar3 = func_1023(iParam1);
			if (iParam1->f_12 < fVar3)
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

int func_786(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_1027(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_explosion"), vVar0, iParam2->f_22))
				{
					func_776(iParam2, 1);
					return 1;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_fire"), vVar0, iParam2->f_27))
				{
					func_776(iParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_potential_blast"), vVar0, iParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), iParam2->f_26, &vVar4, 0, 0);
					if (func_1028(iParam1, vVar0, vVar4))
					{
						func_776(iParam2, 1);
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
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_explosion"), vVar0, iParam2->f_22))
				{
					func_776(iParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_potential_blast"), vVar0, iParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), iParam2->f_26, &vVar7, 0, 0);
					if (func_1028(iParam1, vVar0, vVar7))
					{
						func_776(iParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	return 0;
}

int func_787(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2[2];
	vector3 vVar9;
	bool bVar12;
	bool bVar13;

	vVar9 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	bVar12 = *iParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_1019(iParam0, iParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_1029(&(Global_1935630->f_34[iVar0]));
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_1030(&(Global_1935630->f_34[iVar0])))
			{
				if (fVar1 < 35f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(&(Global_1935630->f_34[iVar0]), "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(&(Global_1935630->f_34[iVar0]), "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB")))
					{
						*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
						*(vVar2[1 /*3*/]) = { vVar9 };
						iParam1->f_10 = iParam0;
						return 1;
					}
				}
			}
			if (func_1031(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				iParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_1032(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				iParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_1033(iParam1, iParam0, fVar1, iVar0))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				iParam1->f_10 = iParam0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_788(int iParam0, int iParam1)
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

int func_789(int iParam0, int iParam1)
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
		if (func_1034(iVar0, iParam1, vVar1))
		{
			iParam0->f_9 = func_754();
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
						if (func_420(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								iParam0->f_9 = func_754();
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

int func_790(int iParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_14))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return 0;
	}
	fVar0 = func_1021(iParam0);
	if (iParam0->f_12 > func_1016(iParam0) && iParam0->f_12 > fVar0)
	{
		return 0;
	}
	iVar2 = func_1035(iParam1);
	iVar1 = func_1013(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, Global_35, 1, 0) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, iParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0->f_14, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, iParam0->f_14, 1, 0) == 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_791(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (iParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *iParam2 & 256 != false;
	bVar1 = *iParam2 & 524288 != false;
	bVar2 = *iParam2 & 128 != false;
	return func_1036(iParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

int func_792(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (*iParam1 & 67108864 != 0)
	{
		return 1;
	}
	if (Global_1935630->f_24)
	{
		return 1;
	}
	if (*iParam1 & 33554432 != 0)
	{
		if (func_1037(iParam0, iParam1, 1))
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
					if (!func_1038(iParam1, iParam0))
					{
						if (func_420(iVar4, Global_36, 1) < 7f)
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

int func_793(int iParam0, int iParam1)
{
	if (!func_1039(0))
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

int func_794(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_754();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_795(int iParam0, int iParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_796(int iParam0, int iParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = func_754();
	}
	else if (func_754() - iParam1->f_4) > func_1040(iParam1)
	{
		return func_1041(iParam0, iParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

int func_797(int iParam0, int iParam1)
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

int func_798(int iParam0)
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

int func_799(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -2;
		case 2:
			return -5;
		case 3:
			return -10;
		case 4:
			return -20;
		case 5:
			return -40;
		case 6:
			return -160;
		case 7:
			return -320;
		case 8:
			return -480;
		case 18:
			return -640;
		case 9:
			return 0;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 5;
		case 13:
			return 10;
		case 14:
			return 20;
		case 15:
			return 40;
		case 16:
			return 160;
		case 17:
			return 640;
		default:
			break;
	}
	return 0;
}

void func_800(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	struct<2> Var8;

	iVar0 = func_1042();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_1043(iParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_override"))
			{
				iParam0 = (DECORATOR::DECOR_GET_INT(iParam5, "honor_override") * -1);
				DECORATOR::DECOR_REMOVE(iParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_bank"))
			{
				iParam0 = (iParam0 - DECORATOR::DECOR_GET_INT(iParam5, "honor_bank"));
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1f;
	if (func_884(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_16())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != 446961221)
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = BUILTIN::CEIL((IntToFloat(iParam0) * fVar4));
	}
	else
	{
		iVar5 = BUILTIN::FLOOR((IntToFloat(iParam0) * fVar4));
	}
	Global_40.f_11095.f_35 = (Global_40.f_11095.f_35 + iVar5);
	Global_40.f_11095.f_35 = func_1044(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_1042();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_1045(iVar1);
		func_1047(func_1046(), 0, 4000);
		func_1048(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		func_1049(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_743(func_742(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_799(14))
				{
					sVar7 = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_1050(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_1051(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1051(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_743(func_742(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_799(4))
				{
					sVar7 = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_1050(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_1051(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1051(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_742(-1990689970) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_0xE6B763C7F4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_1052(10, 1);
	}
}

void func_801(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0 /*6*/] = iParam1;
	(Global_1347477->f_155[iParam0 /*6*/])->f_2 = iParam2;
	(Global_1347477->f_155[iParam0 /*6*/])->f_3 = iParam3;
	(Global_1347477->f_155[iParam0 /*6*/])->f_4 = iParam4;
	(Global_1347477->f_155[iParam0 /*6*/])->f_5 = bParam5;
	(Global_1347477->f_155[iParam0 /*6*/])->f_1 = MISC::GET_GAME_TIMER() + 500;
}

void func_802(int* iParam0, var uParam1)
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
	func_1053(iParam0, uParam1, 1);
	func_1054(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY((*uParam1)[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

void func_803(int iParam0, bool bParam1, bool bParam2)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam2);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
}

int func_804(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 9:
					return -1907492746;
				case 14:
					return 1442567708;
				case 3:
					return -1003815888;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 20:
					return 1921237118;
				case 21:
					return -1888222581;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 28:
					return -1907492746;
				case 29:
					return -1953459798;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 51:
					return -701357827;
				case 52:
					return -1752842811;
				case 53:
					return -151805359;
				case 54:
					return -94588321;
				case 55:
					return -2065406522;
				case 56:
					return 1227633227;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 33:
					return 1577352904;
				case 34:
					return 1260544411;
				case 35:
					return 687004282;
				case 36:
					return -1305947375;
				case 37:
					return 2045403356;
				case 38:
					return 701351040;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 39:
					return -397658967;
				case 40:
					return 1384566166;
				case 41:
					return 1743106650;
				case 42:
					return -299527342;
				case 43:
					return 1446462919;
				case 44:
					return 1212542694;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 45:
					return -875861353;
				case 46:
					return -1931032499;
				case 47:
					return 1561186812;
				case 48:
					return -748114833;
				case 49:
					return 1682340296;
				case 50:
					return -2039338142;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 73:
					return 608667645;
				default:
					break;
			}
			break;
	}
	return 2;
}

char* func_805(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "RE_HEC_UNI_V1_CALLOVER";
				case 1:
					return "RE_HEC_UNI_V1_CALLOVER_2ND";
				case 2:
					return "RE_HEC_UNI_V1_CALLOVER_RESP";
				case 3:
					return "RE_HEC_UNI_V1_HELP";
				case 4:
					return "RE_HEC_UNI_V1_HELP_SICK";
				case 5:
					return "RE_HEC_UNI_V1_HELP_CONTINUED";
				case 6:
					return "RE_HEC_UNI_V1_HELP_INSIST";
				case 7:
					return "RE_HEC_UNI_V1_HELP_2ND";
				case 8:
					return "RE_HEC_UNI_V1_HELP_SICK_2ND";
				case 9:
					return "RE_HEC_UNI_V1_HELP";
				case 10:
					return "RE_HEC_UNI_V1_HELP_INSIST_2ND";
				case 11:
					return "RE_HEC_UNI_V1_HELP_3RD";
				case 12:
					return "RE_HEC_UNI_V1_HELP_SICK_3RD";
				case 13:
					return "RE_HEC_UNI_V1_HELP_3RD_CONTINUED";
				case 14:
					return "RE_HEC_UNI_V1_HELP_2ND_CONTINUED";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 15:
					return "RE_HEC_UNI_V1_ACCEPT_01";
				case 16:
					return "RE_HEC_UNI_V1_ACCEPT_02";
				case 17:
					return "RE_HEC_UNI_V1_ACCEPT_03";
				case 18:
					return "RE_HEC_UNI_V1_PLAYER_REJECT_01";
				case 19:
					return "RE_HEC_UNI_V1_PLAYER_REJECT_02";
				case 20:
					return "RE_HEC_UNI_V1_REJECT";
				case 21:
					return "RE_HEC_UNI_V1_REJECT_ALT";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 22:
					return "RE_HEC_UNI_V1_HANDOVER";
				case 23:
					return "RE_HEC_UNI_V1_HANDOVER_PLAYER";
				case 24:
					return "RE_HEC_UNI_V1_MORE";
				case 25:
					return "RE_HEC_UNI_V1_DISCOVERED";
				case 26:
					return "RE_HEC_UNI_V1_PLAYER_RETURN_01";
				case 27:
					return "RE_HEC_UNI_V1_PLAYER_RETURN_02";
				case 28:
					return "RE_HEC_UNI_V1_HELP";
				case 29:
					return "RE_HEC_UNI_V1_PLAYER_WAIT_01";
				case 30:
					return "RE_HEC_UNI_V1_PLAYER_WAIT_02";
				case 31:
					return "RE_HEC_UNI_V1_PLAYER_WAIT_03";
				case 32:
					return "RE_HEC_UNI_V1_FORGET";
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 33:
					return "RE_HEC_UNI_V1_CURRANT_LOOK";
				case 34:
					return "RE_HEC_UNI_V1_CURRANT_DESC";
				case 35:
					return "RE_HEC_UNI_V1_CURRANT_RETURN";
				case 36:
					return "RE_HEC_UNI_V1_CURRANT_INSPECT";
				case 37:
					return "RE_HEC_UNI_V1_CURRANT_REACT";
				case 38:
					return "RE_HEC_UNI_V1_CURRANT_TIP";
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 39:
					return "RE_HEC_UNI_V1_SAGE_LOOK";
				case 40:
					return "RE_HEC_UNI_V1_SAGE_DESC";
				case 41:
					return "RE_HEC_UNI_V1_SAGE_RETURN";
				case 42:
					return "RE_HEC_UNI_V1_SAGE_TASTE";
				case 43:
					return "RE_HEC_UNI_V1_SAGE_REACT";
				case 44:
					return "RE_HEC_UNI_V1_SAGE_TIP";
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 45:
					return "RE_HEC_UNI_V1_WILD_LOOK";
				case 46:
					return "RE_HEC_UNI_V1_WILD_DESC";
				case 47:
					return "RE_HEC_UNI_V1_WILD_RETURN";
				case 48:
					return "RE_HEC_UNI_V1_WILD_INSPECT";
				case 49:
					return "RE_HEC_UNI_V1_WILD_REACT";
				case 50:
					return "RE_HEC_UNI_V1_WILD_TIP";
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 51:
					return "RE_HEC_UNI_V1_YARROW_LOOK";
				case 52:
					return "RE_HEC_UNI_V1_YARROW_DESC";
				case 53:
					return "RE_HEC_UNI_V1_YARROW_RETURN";
				case 54:
					return "RE_HEC_UNI_V1_YARROW_TASTE";
				case 55:
					return "RE_HEC_UNI_V1_YARROW_REACT";
				case 56:
					return "RE_HEC_UNI_V1_YARROW_TIP";
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 57:
					return "RE_HEC_UNI_V1_HAVEIT";
				case 58:
					return "RE_HEC_UNI_V1_WHATIS";
				case 59:
					return "RE_HEC_UNI_V1_SPECIAL";
				case 60:
					return "RE_HEC_UNI_V1_TAKEIT";
				case 61:
					return "RE_HEC_UNI_V1_SNOOP";
				case 62:
					return "RE_HEC_UNI_V1_HEREYOUARE";
				case 63:
					return "RE_HEC_UNI_V1_THANKS";
				case 64:
					return "RE_HEC_UNI_V1_TAKEORNOT";
				case 65:
					return "RE_HEC_UNI_V1_SUITYOURSELF";
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 66:
					return "RE_HEC_UNI_V1_SPACE";
				case 67:
					return "RE_HEC_UNI_V1_BACKUP";
				case 68:
					return "RE_HEC_UNI_V1_PUSHED";
				case 70:
					return "RE_HEC_UNI_V1_COMEBACK";
				case 69:
					return "RE_HEC_UNI_V1_BOTHERING";
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 71:
					return "RE_HEC_UNI_V1_AGGRO";
				case 72:
					return "RE_HEC_UNI_V1_AGGRO_B";
				case 73:
					return "RE_HEC_UNI_V1_LOOKING";
				case 74:
					return "RE_HEC_UNI_V1_LEAVE";
				case 75:
					return "RE_HEC_UNI_V1_GOODDAY";
				case 76:
					return "RE_HEC_UNI_V1_REMINDER_A";
				case 77:
					return "RE_HEC_UNI_V1_REMINDER_B";
				case 78:
					return "RE_HEC_UNI_V1_MYCAMP";
				default:
					break;
			}
			break;
	}
	return "INVALID";
}

void func_806(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

int func_807(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;

	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		func_806(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::_DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_102(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			func_341(&(iParam1->f_13));
		}
		if (func_1055(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_1056(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_807(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_569(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_1057(*uParam0, 1, 1);
						}
					}
					else if (func_1058(iParam1, 22))
					{
						func_1057(*uParam0, 0, 1);
					}
				}
				if (func_1059(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_1060(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_1061(iParam8);
					if (func_1062(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET(uParam3[iParam1->f_1 /*17*/], 20))
								{
									func_1063(uParam3);
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
					func_1064(iParam1, uParam3, fVar8);
					if (func_1065(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_1054(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_1066(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_1059(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_1067(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_1062(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_1060(uParam0, func_1059(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_1061(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_1054(uParam3, 0, 0, 1, 1);
					}
					func_1068(iParam1, 1);
				}
				func_1064(iParam1, uParam3, fVar8);
				if (func_1066(uParam0, iParam1, fParam4, bVar6))
				{
					if (iParam8 & 512 != 0)
					{
						iParam1->f_2 = 0;
					}
					else
					{
						iParam1->f_2 = 1;
					}
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 3))
		{
			func_802(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_808(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;

	iVar0 = func_1069(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = ((*uParam1)[iVar0 /*17*/])->f_13;
		iVar2 = ((*uParam1)[iVar0 /*17*/])->f_15;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			func_206(Global_35, *uParam2, sVar1, "", -1082130432 /* Float: -1f */, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_809(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_90() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_810(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_1070(iParam0, &iVar0, &iVar1);
	if (!func_1071(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_1072(iVar0, iVar1);
}

void func_811(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_812(int iParam0, var uParam1, int iParam2)
{
	bool bVar0;
	float fVar1;

	bVar0 = func_13(iParam0, 49);
	fVar1 = func_372(Global_35, iParam0->f_7, 0, 1);
	switch (iParam2)
	{
		case 2:
			if (func_1073(iParam0, fVar1, iParam0->f_523 != iParam2))
			{
				return 1;
			}
			break;
		case 3:
			if (fVar1 < 7f)
			{
				if (TASK::_0xD04241BBF6D03A5E(Global_35) != 0)
				{
					return 1;
				}
			}
			break;
		case 1:
			if (bVar0)
			{
				if (func_13(iParam0, 48))
				{
					return func_14(Global_35, func_9(uParam1), 10f, 1, 1);
				}
			}
			break;
		case 5:
			if (func_13(iParam0, 50))
			{
				if (!func_13(iParam0, 51))
				{
					return 1;
				}
			}
			break;
		case 6:
			if (func_13(iParam0, 52))
			{
				return 1;
			}
			break;
		case 7:
			if (!func_13(iParam0, 55))
			{
				if (func_13(iParam0, 54))
				{
					return 1;
				}
			}
			break;
		case 4:
			if (!func_13(iParam0, 61))
			{
				if (func_13(iParam0, 60))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_813(var uParam0)
{
	if (!func_333(uParam0))
	{
	}
	if (!func_593(uParam0))
	{
		uParam0->f_2 = (func_709() - uParam0->f_1);
		func_829(uParam0, 2);
	}
}

int func_814(int iParam0)
{
	switch (iParam0->f_203)
	{
		case 6:
		case 7:
		case 14:
		case 15:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_815(int iParam0, var uParam1, int iParam2)
{
	if (PED::IS_PED_USING_ANY_SCENARIO(iParam0->f_7))
	{
		if (!TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 1))
		{
			TASK::_0xE7FA07624574B79A(iParam0->f_7, Global_35, 2, 2, -1f, 1000, 0, 0, 0);
		}
	}
	switch (iParam0->f_524)
	{
		case 0:
			if (func_1074(iParam0, -1))
			{
				iParam0->f_524 = 2;
				func_341(&(iParam0->f_499));
				return 1;
			}
			break;
		case 2:
			if (func_1074(iParam0, -1))
			{
				iParam0->f_524 = 3;
			}
			break;
		case 3:
			if (func_333(&(iParam0->f_499)))
			{
				if (func_422(&(iParam0->f_499), 2f))
				{
					func_1075(iParam0);
				}
			}
			else if (!func_205(iParam0->f_7, 1))
			{
				func_72(iParam0, 61);
				return 4;
			}
			break;
	}
	return 0;
}

int func_816(int iParam0, var uParam1, int iParam2)
{
	if (PED::IS_PED_USING_ANY_SCENARIO(iParam0->f_7))
	{
		if (!TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 1))
		{
			TASK::_0xE7FA07624574B79A(iParam0->f_7, Global_35, 3, 2, -1f, 1000, 0, 0, 0);
		}
	}
	switch (iParam0->f_524)
	{
		case 0:
			if (func_1074(iParam0, -1))
			{
				iParam0->f_524 = 2;
				if (PED::IS_PED_USING_ANY_SCENARIO(iParam0->f_7))
				{
					TASK::_0xE7FA07624574B79A(iParam0->f_7, Global_35, 3, 2, -1f, 1000, 0, 0, 0);
				}
				if (iParam2 == 5)
				{
					if (iParam0->f_1 != 12)
					{
						func_72(iParam0, 51);
					}
				}
				func_341(&(iParam0->f_499));
				return 1;
			}
			break;
		case 2:
			if (func_1074(iParam0, -1))
			{
				iParam0->f_524 = 3;
			}
			break;
		case 3:
			if (func_333(&(iParam0->f_499)))
			{
				if (func_422(&(iParam0->f_499), 2f))
				{
					func_1075(iParam0);
				}
			}
			else if (!func_205(iParam0->f_7, 1))
			{
				return 4;
			}
			break;
	}
	return 0;
}

int func_817(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_338(iParam0, iParam1);
	switch (iParam1)
	{
		case 2:
			switch (iVar0)
			{
				case 2:
					return 1;
				default:
					break;
			}
			break;
		case 3:
			switch (iVar0)
			{
				case 1:
					return 1;
				default:
					break;
			}
			break;
		case 1:
			switch (iVar0)
			{
				case 2:
					return 1;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_818(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;

	bVar1 = false;
	switch (iParam0->f_524)
	{
		case 0:
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iParam0->f_7, &(iParam0->f_90[2]), true);
			func_72(iParam0, 46);
			if (!PED::_0x62FDAD5E01D2DD47(iParam0->f_7, Global_36, 2, 0))
			{
				if (!PED::_0xEC6935EBE0847B90(iParam0->f_7, Global_36))
				{
					PED::_0xA3A9299C4F2ADB98(iParam0->f_7);
				}
			}
			iParam0->f_512 = -1;
			iParam0->f_513 = -1;
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (!PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (func_1076(iParam0))
				{
					TASK::TASK_CONFRONT(0, Global_35, 2);
					iParam0->f_512++;
					bVar1 = true;
				}
			}
			if (!bVar1)
			{
				if (func_1077(iParam0))
				{
					func_1078(0, Global_35, 0);
					iParam0->f_512++;
					iParam0->f_513++;
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 1000, -1082130432, -1082130432, -1082130432);
					iParam0->f_512++;
				}
			}
			if (bParam3)
			{
				if (!bVar1)
				{
					TASK::TASK_CONFRONT(0, Global_35, 2);
				}
				TASK::TASK_GO_TO_ENTITY(0, Global_35, -1, 2f, 1f, 2f, 0);
			}
			else
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
			}
			func_171(iParam0->f_7, &iVar0, 0, 0, 1, 1);
			iParam0->f_524 = 1;
			break;
		case 1:
			if (func_1074(iParam0, iParam0->f_513))
			{
				func_341(&(iParam0->f_499));
				iParam0->f_524 = 2;
				if (bParam3)
				{
					if (!PED::IS_PED_USING_ACTION_MODE(iParam0->f_7))
					{
						PED::SET_PED_USING_ACTION_MODE(iParam0->f_7, true, -1, 0);
					}
				}
				return 1;
			}
			break;
		case 2:
			if (func_205(iParam0->f_7, 1) || func_343(&(iParam0->f_499), 2f))
			{
				iParam0->f_524 = 3;
			}
			break;
		case 3:
			if (!func_205(iParam0->f_7, 1))
			{
				if ((!func_169(iParam0->f_7, 242628503) || TASK::GET_SEQUENCE_PROGRESS(iParam0->f_7) > iParam0->f_512) || !func_14(Global_35, func_9(uParam1), 14f, 1, 1))
				{
					return 4;
				}
			}
			break;
	}
	return 0;
}

int func_819(int iParam0, var uParam1, int iParam2)
{
	int iVar0;

	switch (iParam0->f_524)
	{
		case 0:
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iParam0->f_7, &(iParam0->f_90[2]), true);
			func_72(iParam0, 46);
			if (!PED::_0x62FDAD5E01D2DD47(iParam0->f_7, Global_36, 3, 0))
			{
				if (!PED::_0xEC6935EBE0847B90(iParam0->f_7, Global_36))
				{
					PED::_0xA3A9299C4F2ADB98(iParam0->f_7);
				}
			}
			PED::SET_PED_USING_ACTION_MODE(iParam0->f_7, true, -1, 0);
			iParam0->f_512 = -1;
			iParam0->f_513 = -1;
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (func_1077(iParam0))
			{
				func_1078(0, Global_35, 0);
				iParam0->f_512++;
				iParam0->f_513++;
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 1000, -1082130432, -1082130432, -1082130432);
				iParam0->f_512++;
			}
			if (!PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (func_1076(iParam0))
				{
					TASK::TASK_CONFRONT(0, Global_35, 2);
					iParam0->f_512++;
				}
			}
			if (func_322(iParam0->f_7, 0, 1, 0) != joaat("weapon_melee_knife"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(iParam0->f_7, joaat("weapon_melee_knife"), false, 0, false, false);
				TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
				iParam0->f_512++;
			}
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
			func_171(iParam0->f_7, &iVar0, 0, 0, 1, 1);
			iParam0->f_524 = 1;
			break;
		case 1:
			if (func_1074(iParam0, iParam0->f_513))
			{
				func_341(&(iParam0->f_499));
				PED::SET_PED_USING_ACTION_MODE(iParam0->f_7, true, -1, 0);
				iParam0->f_524 = 2;
				return 1;
			}
			break;
		case 2:
			if (func_205(iParam0->f_7, 1) || func_343(&(iParam0->f_499), 2f))
			{
				iParam0->f_524 = 3;
			}
			break;
		case 3:
			if (!func_205(iParam0->f_7, 1))
			{
				if ((!func_169(iParam0->f_7, 242628503) || TASK::GET_SEQUENCE_PROGRESS(iParam0->f_7) > iParam0->f_512) || !func_14(Global_35, func_9(uParam1), 14f, 1, 1))
				{
					return 4;
				}
			}
			break;
	}
	return 0;
}

int func_820(int iParam0, var uParam1, int iParam2)
{
	int iVar0;

	switch (iParam0->f_524)
	{
		case 0:
			PED::SET_PED_USING_ACTION_MODE(iParam0->f_7, true, -1, 0);
			func_72(iParam0, 46);
			iParam0->f_512 = -1;
			iParam0->f_513 = -1;
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (func_1077(iParam0))
			{
				func_1078(0, Global_35, 0);
				iParam0->f_512++;
				iParam0->f_513++;
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 1000, -1082130432, -1082130432, -1082130432);
				iParam0->f_512++;
			}
			if (!PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (func_1076(iParam0))
				{
					TASK::TASK_CONFRONT(0, Global_35, 2);
					iParam0->f_512++;
				}
			}
			else
			{
				TASK::TASK_MOUNT_ANIMAL(0, PED::GET_MOUNT(Global_35), -1, -1, 1.5f, 524288, 0, 0);
				iParam0->f_512++;
			}
			if (func_13(iParam0, 57))
			{
				if (func_322(iParam0->f_7, 0, 1, 0) != joaat("weapon_melee_knife"))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(iParam0->f_7, joaat("weapon_melee_knife"), false, 0, false, false);
					TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
					iParam0->f_512++;
				}
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			}
			else
			{
				iParam0->f_512++;
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			}
			func_171(iParam0->f_7, &iVar0, 0, 0, 1, 1);
			iParam0->f_524 = 1;
			break;
		case 1:
			if (func_1074(iParam0, iParam0->f_513))
			{
				func_341(&(iParam0->f_499));
				iParam0->f_524 = 2;
				return 1;
			}
			break;
		case 2:
			if (func_205(iParam0->f_7, 1) || func_343(&(iParam0->f_499), 2f))
			{
				iParam0->f_524 = 3;
			}
			break;
		case 3:
			if (!func_205(iParam0->f_7, 1))
			{
				if ((!func_169(iParam0->f_7, 242628503) || TASK::GET_SEQUENCE_PROGRESS(iParam0->f_7) > iParam0->f_512) || !func_14(Global_35, func_9(uParam1), 14f, 1, 1))
				{
					return 4;
				}
			}
			break;
	}
	return 0;
}

int func_821(int iParam0, var uParam1, int iParam2)
{
	if (PED::IS_PED_USING_ANY_SCENARIO(iParam0->f_7))
	{
		if (!TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 1))
		{
			TASK::_0xE7FA07624574B79A(iParam0->f_7, Global_35, 1, 1, -1f, 1000, 0, 0, 0);
		}
	}
	switch (iParam0->f_524)
	{
		case 0:
			if (func_1074(iParam0, -1))
			{
				iParam0->f_524 = 2;
				func_72(iParam0, 61);
				return 1;
			}
			break;
		case 2:
			if (func_1074(iParam0, -1))
			{
				iParam0->f_524 = 3;
			}
			break;
		case 3:
			if (!func_205(iParam0->f_7, 1))
			{
				func_72(iParam0, 61);
				return 4;
			}
			break;
	}
	return 0;
}

char* func_822(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RE_HEC_UNI_V1_SPACE";
		case 1:
			return "RE_HEC_UNI_V1_BACKUP";
		case 3:
			return "RE_HEC_UNI_V1_PUSHED";
		default:
			break;
	}
	return "";
}

char* func_823(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RE_HEC_UNI_V1_STEAL_A";
		case 1:
			return "RE_HEC_UNI_V1_STEAL_B";
		case 2:
			return "RE_HEC_UNI_V1_STEAL_C";
		default:
			break;
	}
	return "";
}

char* func_824(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RE_HEC_UNI_V1_COMEBACK";
		case 1:
			return "RE_HEC_UNI_V1_ISAIDLEAVE";
		case 2:
			return "RE_HEC_UNI_V1_ISAID";
		case 3:
			return "RE_HEC_UNI_V1_AGGRO_M";
		default:
			break;
	}
	return "";
}

char* func_825(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return func_285(bParam1, "WON_DISPUTE_ESCALATED", "RE_HEC_UNI_V1_DONEENOUGH");
		default:
			break;
	}
	return "";
}

char* func_826(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RE_HEC_UNI_V1_PRETHREATENME";
		case 1:
			return "RE_HEC_UNI_V1_THREATENME";
		default:
			break;
	}
	return "";
}

char* func_827(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RE_HEC_UNI_V1_YOURECRAZY";
		default:
			break;
	}
	return "";
}

char* func_828(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RE_HEC_UNI_V1_IUNDERSTAND";
		default:
			break;
	}
	return "";
}

void func_829(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_830(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_831(int* iParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_503(iParam0->f_6))
	{
		if (MISC::IS_BIT_SET(*iParam0, 0))
		{
			if (!bParam2)
			{
				return 1;
			}
			if (func_1079(iParam0->f_6, bParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_832(int* iParam0, char* sParam1, char* sParam2)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (func_503(iParam0->f_6))
		{
			func_1080(iParam0->f_6, sParam1, sParam2, 1);
		}
		iParam0->f_14 = sParam2;
		func_360(iParam0, 1);
		iParam0->f_5 = sParam1;
	}
}

int func_833(int* iParam0, bool bParam1)
{
	if (!bParam1 || func_503(iParam0->f_6))
	{
		return func_358(iParam0, 4);
	}
	return 0;
}

void func_834(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_358(iParam0, 4))
		{
			func_504(&(iParam0->f_6), 1, 1);
			func_360(iParam0, 4);
		}
	}
	else if (func_358(iParam0, 4))
	{
		func_361(iParam0, 4);
		func_360(iParam0, 14);
	}
}

void func_835(var uParam0, var uParam1, bool bParam2)
{
	*uParam1 = *uParam0;
	uParam1->f_1 = uParam0->f_1;
	if (!bParam2)
	{
		uParam1->f_2 = 0;
	}
	else
	{
		uParam1->f_2 = 1;
	}
	uParam1->f_3 = uParam0->f_3;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_18 = { uParam0->f_18 };
}

void func_836(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (*uParam0 == *uParam1)
	{
		iVar0 = 0;
		while (iVar0 < *uParam0)
		{
			func_592((*uParam0)[iVar0 /*17*/], (*uParam1)[iVar0 /*17*/], bParam2);
			iVar0++;
		}
	}
}

void func_837(int* iParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = uParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_503(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_1080(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_849(iParam0->f_6, iParam0->f_5, 0);
			}
			func_1081(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_621(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

int func_838(bool bParam0, bool bParam1)
{
	if (func_840(bParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(bParam0))
	{
		if (bParam1)
		{
			return func_1082(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0) > 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

struct<4> func_839(bool bParam0)
{
	int iVar0;

	iVar0 = func_282(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224218))
		{
			*Global_1224218 = { func_610(271701509, func_761(bParam0), 12999093, 0) };
		}
		return *Global_1224218;
	}
	return func_610(271701509, func_761(bParam0), 12999093, 0);
}

int func_840(bool bParam0)
{
	struct<2> Var0;

	if (!func_278(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_841(bool bParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_840(bParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &uVar0))
		{
			if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(bParam0, iParam1, uVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

int func_842(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_282(bParam5), &uParam0, uParam4, !bParam6))
	{
		return 0;
	}
	return 1;
}

int func_843(bool bParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_278(bParam0, 0))
	{
		return 0;
	}
	Var0 = { func_610(bParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_282(bParam6), &Var0, 0);
	return uVar4;
}

int func_844(bool bParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_282(0);
	*uParam1 = { func_610(bParam0, func_541(0), iParam3, 0) };
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

int func_845(bool bParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return 1;
	}
	return 0;
}

bool func_846(bool bParam0)
{
	return WEAPON::_0x1F7977C9101F807F(bParam0);
}

int func_847(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_848(int iParam0)
{
	return AUDIO::_0xA2CAC9DEF0195E6F(iParam0);
}

void func_849(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_503(iParam0))
	{
		return;
	}
	iVar0 = func_737(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, sParam1);
}

void func_850(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 1)
	{
		func_1083(iParam0, 0);
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
		func_1084(1);
		Global_40.f_11922[0] = iParam0;
	}
}

int func_851(int iParam0)
{
	if (!func_534(iParam0))
	{
		return 0;
	}
	return func_535(iParam0, 2, 1);
}

int func_852(int iParam0)
{
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0->f_7))
	{
		return 1;
	}
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0->f_7, false);
	if (func_682(iParam0, -1904017806))
	{
		if (!TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 1))
		{
			if (TASK::_0x02EBBB3989B7E695(iParam0->f_7))
			{
				return 1;
			}
		}
		else
		{
			func_642(iParam0);
		}
	}
	else if (!TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 1))
	{
		if (TASK::_0x02EBBB3989B7E695(iParam0->f_7))
		{
			switch (PED::_0x569F1E1237508DEB(iParam0->f_7))
			{
				case 2093245709:
					if (!PED::_0x68821369A2CEADD5(iParam0->f_7, 601769528))
					{
						PED::_0xD65FDC686A031C83(iParam0->f_7, 601769528, 0.5f);
					}
					break;
				case 494354620:
					if (!PED::_0x68821369A2CEADD5(iParam0->f_7, -816791935))
					{
						PED::_0xD65FDC686A031C83(iParam0->f_7, -816791935, 0.5f);
					}
					break;
			}
		}
	}
	else
	{
		func_642(iParam0);
	}
	return 0;
}

void func_853(int iParam0)
{
	if (!func_13(iParam0, 28))
	{
		if (!func_208(Global_35, iParam0->f_7, 20f, 1))
		{
			func_72(iParam0, 28);
			if (!func_1085(iParam0))
			{
				func_383(&(iParam0->f_284), 0, "RE_HEC_UNI_V1_LOOKING");
				func_384(&(iParam0->f_284));
			}
		}
	}
}

int func_854(int iParam0)
{
	if (!func_333(&(iParam0->f_505)))
	{
		func_341(&(iParam0->f_505));
	}
	if (AUDIO::IS_ANY_SPEECH_PLAYING(iParam0->f_7) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
	{
		func_341(&(iParam0->f_505));
	}
	if (func_333(&(iParam0->f_508)))
	{
		if (!func_343(&(iParam0->f_508), 3f))
		{
			if (iParam0->f_209 < 6)
			{
				return 0;
			}
		}
	}
	if (!func_330(iParam0, 1) && !func_431(iParam0, 7))
	{
		if (func_208(Global_35, iParam0->f_7, 10f, 1))
		{
			switch (iParam0->f_209)
			{
				case 0:
					if (func_589(&(iParam0->f_505)) > 8f)
					{
						func_640(iParam0, 10f);
						iParam0->f_209++;
					}
					break;
				case 1:
					if (TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 0))
					{
						func_206(iParam0->f_7, Global_35, "RE_HEC_UNI_V1_REMINDER_A", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iParam0->f_209++;
					}
					break;
				case 2:
					if (!TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 1))
					{
						iParam0->f_209++;
					}
					break;
				case 3:
					if (TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 0))
					{
						func_206(iParam0->f_7, Global_35, "RE_HEC_UNI_V1_REMINDER_B", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iParam0->f_209++;
					}
					break;
				case 4:
					if (!TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 1))
					{
						iParam0->f_209++;
					}
					break;
				case 5:
					if (TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 0))
					{
						func_206(iParam0->f_7, Global_35, "RE_HEC_UNI_V1_FORGET", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iParam0->f_209++;
						return 0;
					}
					break;
				default:
					return 0;
			}
		}
	}
	return 0;
}

void func_855(int iParam0)
{
	switch (iParam0->f_205)
	{
		case 0:
			if (!func_330(iParam0, 1))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0->f_7, false);
				if (func_13(iParam0, 28))
				{
					if (func_969(iParam0, 131072))
					{
						if (!func_13(iParam0, 30))
						{
							func_189(iParam0, 1);
						}
						else if (!func_13(iParam0, 31))
						{
							if (func_208(Global_35, iParam0->f_7, 20f, 1))
							{
								func_189(iParam0, 3);
							}
						}
					}
				}
				else
				{
					func_853(iParam0);
				}
			}
			break;
		case 1:
			if (!func_330(iParam0, 1))
			{
				if (func_373(iParam0, 0))
				{
					func_72(iParam0, 29);
					if (func_1086(iParam0))
					{
						func_72(iParam0, 59);
						TASK::TASK_PLAY_ANIM(iParam0->f_7, func_140(43, 1), "HEY_N_HERBALIST", 8f, -8f, -1, 67117072, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_73(iParam0, 59);
						func_206(iParam0->f_7, Global_35, "RE_HEC_UNI_V1_PLAYER_RETURN_01", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					if (func_333(&(iParam0->f_462)))
					{
						func_334(&(iParam0->f_462));
					}
					iParam0->f_205 = 2;
				}
			}
			break;
		case 2:
			if (func_1087(iParam0))
			{
				if (func_208(Global_35, iParam0->f_7, 20f, 1))
				{
					func_72(iParam0, 30);
					func_189(iParam0, 3);
				}
				else if (!func_333(&(iParam0->f_462)))
				{
					func_341(&(iParam0->f_462));
				}
				else if (func_343(&(iParam0->f_462), 5f))
				{
					func_334(&(iParam0->f_462));
					func_73(iParam0, 29);
					func_1088(iParam0, 30);
				}
			}
			break;
		case 3:
			if (!func_330(iParam0, 1))
			{
				if (func_373(iParam0, 0))
				{
					func_72(iParam0, 29);
					if (func_1086(iParam0))
					{
						func_72(iParam0, 59);
						func_377(iParam0->f_7, *iParam0, "YARROW_RETURN_A_UPPER", "GCURRANT_RETURN_A_UPPER", "VSNOWDROP_RETURN_A_UPPER", "HBSAGE_RETURN_A", 1);
					}
					else
					{
						func_73(iParam0, 59);
						func_206(iParam0->f_7, Global_35, func_390(*iParam0, "RE_HEC_UNI_V1_YARROW_RETURN", "RE_HEC_UNI_V1_SAGE_RETURN", "RE_HEC_UNI_V1_CURRANT_RETURN", "RE_HEC_UNI_V1_SNOWDROPS_RETURN"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					iParam0->f_205 = 4;
				}
			}
			break;
		case 4:
			if (func_1089(iParam0))
			{
				if (!func_333(&(iParam0->f_462)))
				{
					func_341(&(iParam0->f_462));
				}
				else if (func_343(&(iParam0->f_462), 5f))
				{
					func_73(iParam0, 29);
					func_1088(iParam0, 31);
				}
			}
			break;
		case 5:
			iParam0->f_205 = 0;
			break;
	}
}

void func_856(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (fParam3 > fParam2)
	{
		func_360(uParam0->f_21[iParam1 /*17*/], 9);
	}
}

void func_857(int iParam0, var uParam1, float fParam2)
{
	vector3 vVar0;
	int iVar3;

	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_9(uParam1), func_10(uParam1), -1.17f, 3.39f, 0f) };
	iVar3 = PED::GET_MOUNT(Global_35);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3) && func_207(Global_35, iVar3, 0))
	{
		if (func_991(Global_36, vVar0) <= fParam2 || func_991(ENTITY::GET_ENTITY_COORDS(iVar3, true, false), vVar0) <= fParam2)
		{
			func_326(iParam0->f_284.f_21[0 /*17*/]);
		}
	}
}

void func_858(var uParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_429(uParam0, 0, 0, 0))
	{
		if (!bParam3 || ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam2, uParam0->f_1))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_1, sParam1, iParam2);
		}
	}
}

void func_859(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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

	if (bParam0 == 1662813436)
	{
		return;
	}
	if (!func_278(bParam0, 0))
	{
		return;
	}
	if (bParam0 == 1807503187)
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!func_1090())
	{
		func_1091(bParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_285(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_285(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_883(bParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_279(bParam0);
	iVar10 = 0;
	iVar11 = joaat("inventory");
	if ((iVar6 == joaat("ammo") && bParam0 != 424030678) && bParam0 != -1188697038)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	if (iVar6 == -1013984273 || iVar6 == 658570475)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_1092(bParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	if (ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(bParam0))
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
	sVar15 = func_1093(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, func_925(bParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_538(bParam0, 1443104131)) || bParam0 == -885810591) || bParam0 == -1424823393) || bParam0 == 1463786584) || bParam0 == 1358243310)
	{
		sVar15 = MISC::_CREATE_VAR_STRING(0, func_925(bParam0));
	}
	func_1051(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

struct<2> func_860(bool bParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_278(bParam0, 0))
	{
		return Var0;
	}
	if (func_538(bParam0, -305066475))
	{
		if (func_90() == -1)
		{
			if (func_538(bParam0, -537818634))
			{
				return func_742(189951448);
			}
			else
			{
				return func_742(1176172851);
			}
		}
	}
	else if (func_538(bParam0, -537818634))
	{
		return func_742(-963660207);
	}
	if (func_538(bParam0, 2084895747))
	{
		return func_742(1694039471);
	}
	return Var2;
}

int func_861(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<14> Var0;
	int iVar14;
	int iVar15;
	struct<10> Var16;
	struct<4> Var30;
	int iVar35;
	int iVar36;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_540(bParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_542(&Var0, func_541(0));
	}
	if (!func_543(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_546(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_611(bParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_544(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return 1;
}

int func_862(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_278(bParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_606(bParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_1094(bParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_610(bParam0, Var0, Var0.f_4, bParam4) };
	return func_611(bParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_863(bool bParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_538(bParam0, 606799272))
		{
			func_1095(bParam0, iParam1);
		}
		if (func_538(bParam0, -1112814642) && func_538(bParam0, -1697809989))
		{
			func_906(bParam0, iParam1, 1, 0);
		}
	}
}

int func_864(int iParam0)
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

var func_865(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<13> Var0;
	int iVar23;

	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = uParam1;
	Var0.f_12[0] = uParam2;
	iVar23 = 13;
	return ENTITY::_0xA88E215CEB0435C0(iParam0, &Var0, uParam3, iVar23, 2, 0);
}

int func_866(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_90() == -1)
	{
		if (func_1096(bParam0) && func_1097(bParam0))
		{
			func_1098(bParam0, iParam1, 1, &bParam2, iParam3);
			return 0;
		}
	}
	else if (bParam0 == 1259508039)
	{
		bParam2 = true;
	}
	else if (bParam0 == joaat("weapon_unarmed"))
	{
		return 0;
	}
	return 1;
}

int func_867(bool bParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_1099(bParam0, iParam1);
	Var0 = { func_606(bParam0, 0, 1) };
	iVar5 = func_1100(bParam0, &Var0, 0, 0);
	iVar6 = func_1082(bParam0, 0);
	if ((iVar5 > 1 && !func_1101()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_538(bParam0, -2051813666))
		{
			func_810(583, 1);
		}
		else
		{
			func_810(582, 0);
		}
	}
	if (func_1102(bParam0, &Var0, *iParam1, 0, 0))
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

void func_868(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_1103(bParam0, -949239683))
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
			Global_1935496->f_59.f_1 = bParam0;
			Global_1935496->f_59.f_5 = MISC::GET_GAME_TIMER();
			break;
	}
}

bool func_869(bool bParam0)
{
	if (func_90() != -1)
	{
		return false;
	}
	return func_870(bParam0) != 0;
}

int func_870(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_1104())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (bParam0 == func_1105(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_871(int iParam0)
{
	return COLLECTION::_0x6052B4DE6657684F(iParam0);
}

int func_872(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < func_1104())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_871(iVar0))
		{
			if (func_137(func_1105(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_873(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_1106(48);
	func_510(0, -1);
}

int func_874(int iParam0)
{
	if (func_90() != -1)
	{
		return 0;
	}
	return func_895(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

int func_875(int iParam0)
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, iParam0);
}

bool func_876(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

int func_877(int iParam0)
{
	if (func_90() != -1)
	{
		return 0;
	}
	return func_895(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
}

int func_878(int iParam0)
{
	if (func_90() != -1)
	{
		return 0;
	}
	if (!func_723(iParam0))
	{
		return 0;
	}
	return func_1107(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

int func_879()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_137(func_1108(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_880(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
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
			if (func_751() && (func_878(38) || func_874(38)))
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
			if (func_751() && (func_878(39) || func_874(39)))
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
			iVar9 = func_1109(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963; /* GXTEntry: "Duchesses and Other Animals" */
			break;
		case 41:
			if (func_751() && (func_878(41) || func_874(41)))
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
			if (func_751() && (func_878(49) || func_874(49)))
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
			iVar9 = func_1109(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931; /* GXTEntry: "Ms. L Hobbs" */
			iVar13 = -1424865411; /* GXTEntry: "A Better World, A New Friend" */
			break;
	}
	sVar2 = func_1110(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_1111(iParam0, iVar13, iVar14))
	{
	}
	if (func_1112(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_1113(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1114(iParam0, iVar13, iVar14, iParam3, bParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_1115(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_1116(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_881(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_882(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			if (func_751() && (func_878(38) || func_874(38)))
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
			if (func_751() && (func_878(39) || func_874(39)))
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
			if (func_751() && (func_878(49) || func_874(49)))
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
		if (func_751() && (func_878(38) || func_874(38)))
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
			func_1117(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_1117(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_1119(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, func_1118(func_876(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_1117(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_1117(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_751() && (func_878(39) || func_874(39)))
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
			func_1117(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1117(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_751() && (func_878(49) || func_874(49)))
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
			func_1117(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1117(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_1117(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1117(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_883(bool bParam0, int iParam1)
{
	if (!func_278(bParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0x245D07651B1D183B(bParam0, iParam1);
}

int func_884(int iParam0)
{
	if (!func_1120(iParam0))
	{
		return 0;
	}
	return func_1121(iParam0);
}

void func_885(int iParam0)
{
	if (!func_1120(iParam0))
	{
		return;
	}
	func_1122(iParam0);
	func_1123(iParam0);
}

bool func_886(bool bParam0, bool bParam1)
{
	bool bVar0;

	switch (bParam0)
	{
		case -1639263599: /* GXTEntry: "Throwing Knife" */
			bVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 1222378998: /* GXTEntry: "Improved Throwing Knife" */
			bVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 2074469742: /* GXTEntry: "Poison Throwing Knife" */
			bVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 480079517: /* GXTEntry: "Dynamite" */
			bVar0 = joaat("weapon_thrown_dynamite");
			break;
		case 840671577: /* GXTEntry: "Dynamite - Volatile" */
			bVar0 = joaat("weapon_thrown_dynamite");
			break;
		case joaat("ammo_molotov"):
			bVar0 = joaat("weapon_thrown_molotov");
			break;
		case -2006166057: /* GXTEntry: "Fire Bottle - Volatile" */
			bVar0 = joaat("weapon_thrown_molotov");
			break;
		case 1235846615: /* GXTEntry: "Tomahawk" */
			bVar0 = joaat("weapon_thrown_tomahawk");
			break;
		case -228768324: /* GXTEntry: "Ancient Tomahawk" */
			bVar0 = joaat("weapon_thrown_tomahawk_ancient");
			break;
		case -1411922943: /* GXTEntry: "Tomahawk - Homing" */
			bVar0 = joaat("weapon_thrown_tomahawk");
			break;
		case -834103244: /* GXTEntry: "Tomahawk - Improved" */
			bVar0 = joaat("weapon_thrown_tomahawk");
			break;
		case 424030678: /* GXTEntry: "Hatchet" */
			bVar0 = joaat("weapon_melee_hatchet");
			break;
		case 446901936: /* GXTEntry: "Hunter Hatchet" */
			bVar0 = joaat("weapon_melee_hatchet_hunter");
			break;
		case -1092841802: /* GXTEntry: "Rusted Hunter Hatchet" */
			bVar0 = joaat("weapon_melee_hatchet_hunter_rusted");
			break;
		case -1452241321: /* GXTEntry: "Stone Hatchet" */
			bVar0 = joaat("weapon_melee_ancient_hatchet");
			break;
		case -1188697038: /* GXTEntry: "Cleaver" */
			bVar0 = joaat("weapon_melee_cleaver");
			break;
		case 1671758975: /* GXTEntry: "Double Bit Hatchet" */
			bVar0 = joaat("weapon_melee_hatchet_double_bit");
			break;
		case -893514737: /* GXTEntry: "Rusted Double Bit Hatchet" */
			bVar0 = joaat("weapon_melee_hatchet_double_bit_rusted");
			break;
		case -2063089161: /* GXTEntry: "Hewing Hatchet" */
			bVar0 = joaat("weapon_melee_hatchet_hewing");
			break;
		case -452897925: /* GXTEntry: "Viking Hatchet" */
			bVar0 = joaat("weapon_melee_hatchet_viking");
			break;
		default:
			break;
	}
	if (func_278(bVar0, 0))
	{
		if (bParam1)
		{
			if (func_1124(bVar0) || func_363(bVar0))
			{
				return bVar0;
			}
		}
		else
		{
			return bVar0;
		}
	}
	return bParam0;
}

int func_887(bool bParam0, bool bParam1)
{
	if (!func_278(bParam0, 0))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return bParam0;
	}
	if (!bParam1)
	{
	}
	return 0;
}

void func_888(bool bParam0)
{
	int iVar0;

	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_362(bParam0))
	{
		return;
	}
	iVar0 = WEAPON::_0x865F36299079FB75(bParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(iVar0, true);
}

int func_889(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	var uVar1;
	int iVar6;
	bool bVar7;

	bVar0 = func_887(bParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(bVar0))
	{
		if (func_90() == -1)
		{
			func_888(bVar0);
			if (iParam1 == 1248274121)
			{
				func_1125(bVar0);
			}
		}
		if (!func_1102(bParam0, &uVar1, 1, 0, 0))
		{
			func_1098(bParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1126(bVar0);
			if (WEAPON::_0x6AD66548840472E5(bVar0))
			{
				func_364(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (bVar0 == joaat("weapon_fishingrod") || bVar0 == joaat("weapon_kit_binoculars"))
			{
				func_364(bVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (bVar0 == joaat("weapon_lasso"))
			{
				func_364(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_0x959383DCD42040DA(bVar0))
			{
				if (bVar0 == joaat("weapon_melee_knife_john") && !func_16())
				{
					return 0;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(bParam0))
				{
				}
				else if (!func_366(bVar0))
				{
					func_364(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_364(bVar0, WEAPON::_GET_WEAPON_CLIP_SIZE(bVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_0xD955FEE4B87AFA07(bVar0))
			{
				bVar7 = func_322(Global_35, 2, 0, 1);
				if ((((func_362(bVar7) && !Global_43890) && bVar7 != bVar0) && !func_137(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 1, 0)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, bVar7);
				}
				if (func_362(bVar7) && func_137(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 1, 0))
				{
					if (!func_364(bVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return 0;
					}
				}
				else if (!func_364(bVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return 0;
				}
			}
			else if (!func_364(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_810(480, 1);
	}
	return 1;
}

int func_890(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;

	if (!func_846(bParam0))
	{
		return 0;
	}
	bVar4 = WEAPON::_0x7AA043F6C41D151E(bParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bParam0);
	if (func_362(bVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_35, &iVar2, bVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (bVar4 == joaat("weapon_bow"))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::_GET_WEAPON_CLIP_SIZE(bVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (func_137(611073244 /* GXTEntry: "Crow Beak Trinket" */, 1, 0) && iParam2 == -897553835)
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
		func_926(func_1127(bParam0), func_925(bParam0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_90() == -1)
		{
			if (func_895(((*Global_1835011)[14 /*74*/])->f_1, 1))
			{
				func_810(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_612(0))
	{
		if (func_613(bParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return func_931(bParam0, *iParam1, iParam2);
	}
	return 0;
}

void func_891(bool bParam0)
{
	var uVar0;

	if ((bParam0 == -615217896 && !func_1128()) || bParam0 != -615217896)
	{
		if (func_1129(Global_35, bParam0, &uVar0))
		{
			func_910(PLAYER::PLAYER_PED_ID(), bParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (bParam0)
	{
		case -62615415: /* GXTEntry: "Alligator Tooth Talisman" */
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_916();
			break;
		case -832719552: /* GXTEntry: "Bear Claw Talisman" */
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_916();
			break;
		case -1941112926: /* GXTEntry: "Bison Horn Talisman" */
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_916();
			break;
		case -615217896: /* GXTEntry: "Eagle Talon Talisman" */
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_914();
			break;
		case -121629511: /* GXTEntry: "Raven Claw Talisman" */
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_912();
			break;
	}
}

void func_892(bool bParam0)
{
	switch (bParam0)
	{
		case -224110471: /* GXTEntry: "Beaver Tooth Trinket" */
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_912();
			break;
		case 1289585739: /* GXTEntry: "Tatanka Bison Horn Trinket" */
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_913();
			break;
		case 1441506783: /* GXTEntry: "Cougar Fang Trinket" */
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678: /* GXTEntry: "Coyote Fang Trinket" */
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695: /* GXTEntry: "Fox Claw Trinket" */
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_914();
			break;
		case 655868243: /* GXTEntry: "Iguana Scale Trinket" */
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_915();
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
			func_916();
			break;
		case -569248339: /* GXTEntry: "Hawk Talon Trinket" */
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_1130();
			break;
		case -1196089647: /* GXTEntry: "Shark Tooth Trinket" */
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431: /* GXTEntry: "Turtle Shell Trinket" */
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_1131();
			break;
		case -1056342069: /* GXTEntry: "Cat Eye Trinket" */
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_893(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

struct<2> func_894(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

int func_895(int iParam0, bool bParam1)
{
	switch (func_1132(iParam0))
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

void func_896(bool bParam0)
{
	bool bVar0;

	bVar0 = func_538(bParam0, -2017733358);
	if (func_1133() < 3)
	{
		if (bVar0)
		{
			if (func_1135(func_1134(bParam0), bParam0))
			{
				func_926(79, func_925(func_1134(bParam0)), 1);
			}
			else
			{
				func_926(78, func_925(func_1134(bParam0)), 1);
			}
		}
		else
		{
			func_926(80, func_925(func_1136(bParam0)), 1);
		}
	}
}

int func_897()
{
	if (((((func_1137(839908568 /* GXTEntry: "Bounty Poster of Arthur" */, 400) || func_1137(-1134030454 /* GXTEntry: "Bounty Notice" */, 400)) || func_1137(623353496 /* GXTEntry: "Bounty Hunter\'s Orders" */, 400)) || func_1137(-344413337 /* GXTEntry: "Poster of a Violent Criminal" */, 400)) || func_1137(-1664948962 /* GXTEntry: "Bounty Hunter\'s Letter" */, 400)) || func_1137(1795228059 /* GXTEntry: "Bounty Page" */, 400))
	{
		return 1;
	}
	return 0;
}

int func_898(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1138(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_938(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_939(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_899(bool bParam0)
{
	switch (bParam0)
	{
		case -625427311: /* GXTEntry: "Letter from Ms. Hobbs" */
			func_880(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_882(51, 0, 0, 0, 0, -1, 0);
			func_1139(8192);
			break;
		case 581047644: /* GXTEntry: "Invitation from Ms. Hobbs" */
			func_880(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_882(51, 0, 0, 0, 0, -1, 0);
			func_1139(524288);
			break;
		case -644199619: /* GXTEntry: "Invitation from Deborah MacGuiness" */
			func_880(39, 0, 0, 0, 0, 0, 1, 0);
			func_882(39, 0, 0, 0, 0, -1, 0);
			func_1140(16);
			break;
		case 684296857: /* GXTEntry: "Invitation from Jeremy Gill" */
			func_880(41, 0, 0, 0, 0, 0, 1, 0);
			func_882(41, 0, 0, 0, 0, -1, 0);
			func_1141(8);
			break;
		case 466137807: /* GXTEntry: "Invitation from Francis Sinclair" */
			func_880(49, 0, 0, 0, 0, 0, 1, 0);
			func_882(49, 0, 0, 0, 0, -1, 0);
			func_1142(16);
			break;
		case -1087522507: /* GXTEntry: "Exotic Collector\'s List" */
			func_880(43, 0, 0, -1791518714, func_1143(1), 0, -1, 0);
			func_1144(1);
			break;
		case -405829000: /* GXTEntry: "Exotic Collector\'s List" */
			func_880(43, 0, 0, -2087881550, func_1143(2), 0, -1, 0);
			func_1144(2);
			break;
		case 378660860: /* GXTEntry: "Exotic Collector\'s List" */
			func_880(43, 0, 0, 1908068621, func_1143(4), 0, -1, 0);
			func_1144(4);
			break;
		case 1566111097: /* GXTEntry: "Exotic Collector\'s List" */
			func_880(43, 0, 0, 1611247019, func_1143(8), 0, -1, 0);
			func_1144(8);
			break;
		case 1276007140: /* GXTEntry: "Exotic Collector\'s List" */
			func_880(43, 0, 0, 1319635688, func_1143(16), 0, -1, 0);
			func_1144(16);
			break;
	}
}

void func_900(bool bParam0)
{
	if (func_1145() == 1)
	{
		if (func_874(39))
		{
			func_810(342, 0);
		}
		else
		{
			func_810(343, 0);
			func_1140(1);
		}
	}
	if (func_1145() >= 30)
	{
		func_810(344, 0);
	}
	func_880(39, 0, 0, 0, 0, 0, -1, 0);
	func_882(39, 0, 0, func_1145(), 30, 1, 0);
}

void func_901(bool bParam0)
{
	if (func_1146() == 1)
	{
		if (func_874(49))
		{
			func_810(409, 0);
		}
		else
		{
			func_810(410, 0);
			func_1142(1);
		}
	}
	if (func_1146() >= 10)
	{
		func_810(411, 0);
	}
	func_880(49, 0, 0, 0, 0, 0, -1, 0);
	func_882(49, 0, 0, func_1146(), 10, 1, 0);
}

void func_902(bool bParam0)
{
	char* sVar0;

	switch (bParam0)
	{
		case 1369162587: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(-949689219, 1);
			func_810(437, 0);
			func_810(440, 0);
			func_1147(-949689219, 444160793 /* GXTEntry: "Perfect Squirrel Carcass" */, &sVar0, 1, 0, 0);
			func_880(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_882(51, 0, 0, sVar0, func_1109(-949689219, 20), 1, 0);
			func_1139(1);
			func_1148(-748969569, 0, 0);
			break;
		case 1610047510: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(-1248968496, 1);
			func_1147(-1248968496, -1969404854 /* GXTEntry: "Perfect Cardinal Carcass" */, &sVar0, 1, 0, 0);
			func_880(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_882(51, 0, 0, sVar0, func_1109(-1248968496, 20), 1, 0);
			func_1139(8);
			break;
		case 1317879106: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(1706369307, 1);
			func_1147(1706369307, -832850511 /* GXTEntry: "Perfect Chipmunk Carcass" */, &sVar0, 1, 0, 0);
			func_880(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_882(51, 0, 0, sVar0, func_1109(1706369307, 20), 1, 0);
			func_1139(64);
			break;
		case 1062444751: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(1520110311, 1);
			func_1147(1520110311, -100913452 /* GXTEntry: "Perfect Songbird Carcass" */, &sVar0, 1, 0, 0);
			func_880(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_882(51, 0, 0, sVar0, func_1109(1520110311, 20), 1, 0);
			func_1139(512);
			break;
		case 754186760: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(-1992824800, 1);
			func_810(438, 0);
			func_1147(-1992824800, 905173572 /* GXTEntry: "Perfect Cedar Waxwing Carcass" */, &sVar0, 1, 0, 0);
			func_880(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_882(51, 0, 0, sVar0, func_1109(-1992824800, 20), 1, 0);
			func_1139(32768);
			break;
		default:
			func_810(439, 0);
			break;
	}
}

void func_903()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(-1278339625) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1278339625, -1316535105, 1);
	}
}

void func_904(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (func_90() == -1)
	{
		if (!func_874(43))
		{
			if (bParam0 == 281887510)
			{
				func_810(348, 0);
			}
			else if (bParam0 == -164081697)
			{
				func_810(350, 0);
			}
			else if (bParam0 == -1161319399)
			{
				func_810(352, 0);
			}
			else if (bParam0 == 728781265)
			{
				func_810(400, 0);
			}
		}
		else if (func_538(bParam0, 412399755))
		{
			func_1149(-1791518714);
			if (func_1150() == 0)
			{
				func_510(0, 10);
				iVar1 = func_1151(bParam0, iParam1, 1);
				if (((bParam0 == 281887510 || bParam0 == -164081697) || bParam0 == -1161319399) || bParam0 == 728781265)
				{
					if (func_1152(bParam0) < func_1153(bParam0))
					{
						func_880(43, bParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_882(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_874(44))
		{
			if (bParam0 == -222563712)
			{
				func_810(354, 0);
			}
			else if (bParam0 == 1794857344)
			{
				func_810(399, 0);
			}
			else if (bParam0 == 1952409553)
			{
				func_810(401, 0);
			}
		}
		else if (func_538(bParam0, 709057512))
		{
			func_1149(-2087881550);
			if (func_1150() == 1)
			{
				func_510(0, 10);
				iVar1 = func_1151(bParam0, iParam1, 2);
				if ((bParam0 == -222563712 || bParam0 == 1794857344) || bParam0 == 1952409553)
				{
					if (func_1152(bParam0) < func_1153(bParam0))
					{
						func_880(43, bParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_882(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_874(45))
		{
			if (bParam0 == 2116770557)
			{
				func_810(359, 0);
			}
			else if (bParam0 == -651064726)
			{
				func_810(394, 0);
			}
			else if (bParam0 == -404270094)
			{
				func_810(395, 0);
			}
			else if (bParam0 == 2093126853)
			{
				func_810(398, 0);
			}
		}
		else if (func_538(bParam0, -1478961327))
		{
			func_1149(1908068621);
			if (func_1150() == 2)
			{
				func_510(0, 10);
				iVar1 = func_1151(bParam0, iParam1, 4);
				if (bParam0 == 2116770557)
				{
					if (!func_1154(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0)) >= 25)
					{
						func_1155(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0), 1);
						func_1106(48);
					}
					if (func_1152(bParam0) < func_1153(bParam0))
					{
						func_880(43, bParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_882(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((bParam0 == -651064726 || bParam0 == -404270094) || bParam0 == 2093126853)
				{
					if (func_1152(bParam0) < func_1153(bParam0))
					{
						func_880(43, bParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_882(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_874(46))
		{
			if (bParam0 == 2085530337)
			{
				func_810(356, 0);
			}
			else if (bParam0 == -150591160)
			{
				func_810(402, 0);
			}
			else if (bParam0 == -323969289)
			{
				func_810(404, 0);
			}
			else if (bParam0 == 1504361882)
			{
				func_810(406, 0);
			}
		}
		else if (func_538(bParam0, -1238404098))
		{
			func_1149(1611247019);
			if (func_1150() == 3)
			{
				func_510(0, 10);
				iVar1 = func_1151(bParam0, iParam1, 8);
				if (((bParam0 == 2085530337 || bParam0 == -150591160) || bParam0 == -323969289) || bParam0 == 1504361882)
				{
					if (func_1152(bParam0) < func_1153(bParam0))
					{
						func_880(43, bParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_882(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_874(47))
		{
			if (bParam0 == -1521783510)
			{
				func_810(396, 0);
			}
			else if (bParam0 == 1714875242)
			{
				func_810(397, 0);
			}
			else if (bParam0 == 927763737)
			{
				func_810(405, 0);
			}
			else if (bParam0 == 1019229063)
			{
				func_810(403, 0);
			}
		}
		else if (func_538(bParam0, 1160548794))
		{
			func_1149(1319635688);
			if (func_1150() == 4)
			{
				func_510(0, 10);
				iVar1 = func_1151(bParam0, iParam1, 16);
				if (((bParam0 == -1521783510 || bParam0 == 1714875242) || bParam0 == 927763737) || bParam0 == 1019229063)
				{
					if (func_1152(bParam0) < func_1153(bParam0))
					{
						func_880(43, bParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_882(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_905(bool bParam0)
{
	int iVar0;

	if (bParam0 == 2116770557)
	{
		if (!func_1154(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0)) >= 25)
		{
			func_1155(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0), 1);
			func_1106(48);
		}
	}
}

void func_906(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, 678508515, -1160144609);
		if (func_137(func_1156(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1157(bParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1158(bParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_907(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_90() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_898(0, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (bParam0)
	{
		case 489075255: /* GXTEntry: "$1.00" */
			func_898(-949580860, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493: /* GXTEntry: "$5.00" */
			func_898(-1171997683, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627: /* GXTEntry: "$10.00" */
			func_898(-2140931002, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377: /* GXTEntry: "Bill Fold" */
			func_898(-1116228267, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086: /* GXTEntry: "Small Bill Fold" */
			func_898(2112896861, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686: /* GXTEntry: "Bill Stack" */
			func_898(-1915150712, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991: /* GXTEntry: "Coin" */
			func_898(994220262, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101: /* GXTEntry: "Coin Purse" */
			func_898(-1388440107, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918: /* GXTEntry: "Coin Sack" */
			func_898(-1531790128, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765: /* GXTEntry: "Coin Stack" */
			func_898(1351791770, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903: /* GXTEntry: "Money Clip" */
			func_898(-161493966, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684: /* GXTEntry: "Money Stack" */
			func_898(668131102, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340: /* GXTEntry: "Money Pile" */
			if (!func_1159())
			{
				func_898(1330954593, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740: /* GXTEntry: "Change Cup" */
			func_898(817681514, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264: /* GXTEntry: "Coin Cup" */
			func_898(1404311868, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970: /* GXTEntry: "$50.00" */
			func_898(-175152067, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1027115192: /* GXTEntry: "$100.00" */
			func_898(-526915387, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1064332555: /* GXTEntry: "$200.00" */
			func_898(101362741, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1954478446: /* GXTEntry: "$45.00" */
			func_898(1458818027, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -518592739: /* GXTEntry: "$50.00" */
			func_898(-1957208512, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -2010073778: /* GXTEntry: "$70.00" */
			func_898(2066857461, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -700133011: /* GXTEntry: "$100.00" */
			func_898(803940201, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1415414735: /* GXTEntry: "$120.00" */
			func_898(-1717765429, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case 2045548742: /* GXTEntry: "$150.00" */
			func_898(1379920914, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case 830381058: /* GXTEntry: "$350.00" */
			func_898(447209691, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
	}
}

void func_908(bool bParam0)
{
	if (func_874(41))
	{
		func_810(363, 0);
	}
	else
	{
		func_810(362, 0);
	}
	switch (bParam0)
	{
		case 323124696: /* GXTEntry: "Legendary Bullhead Catfish" */
			func_1160(-1865241121);
			func_1161(-642026005);
			func_1162(-642026005);
			func_510(0, 10);
			break;
		case -2108314374: /* GXTEntry: "Legendary Chain Pickerel" */
			func_1160(2117142684);
			func_1161(-940584364);
			func_1162(-940584364);
			func_510(0, 10);
			break;
		case -1193798153: /* GXTEntry: "Legendary Lake Sturgeon" */
			func_1160(-1409326024);
			func_1161(1972645282);
			func_1162(1972645282);
			func_510(0, 10);
			break;
		case -787702678: /* GXTEntry: "Legendary Largemouth Bass" */
			func_1160(-641744968);
			func_1161(1667205433);
			func_1162(1667205433);
			func_510(0, 10);
			break;
		case -804542901: /* GXTEntry: "Legendary Longnose Gar" */
			func_1160(-946988203);
			func_1161(1362715885);
			func_1162(1362715885);
			func_510(0, 10);
			break;
		case -1696275132: /* GXTEntry: "Legendary Muskie" */
			func_1160(-646136018);
			func_1161(1053540370);
			func_1162(1053540370);
			func_510(0, 10);
			break;
		case -161595323: /* GXTEntry: "Legendary Perch" */
			func_1160(-955835837);
			func_1161(-1100103852);
			func_1162(-1100103852);
			func_510(0, 10);
			break;
		case -1114363619: /* GXTEntry: "Legendary Redfin Pickerel" */
			func_1160(-179276075);
			func_1161(-1409869209);
			func_1162(-1409869209);
			func_510(0, 10);
			break;
		case -368407134: /* GXTEntry: "Legendary Rock Bass" */
			func_1160(-492711560);
			func_1161(-1760235357);
			func_1162(-1760235357);
			func_510(0, 10);
			break;
		case 1997759228: /* GXTEntry: "Legendary Smallmouth Bass" */
			func_1160(1764383959);
			func_1161(-138366827);
			func_1162(-138366827);
			func_510(0, 10);
			break;
		case 1265573293: /* GXTEntry: "Legendary Sockeye Salmon" */
			func_1160(317501533);
			func_1161(-1261163843);
			func_1162(-1261163843);
			func_510(0, 10);
			break;
		case -1030441283: /* GXTEntry: "Legendary Steelhead Trout" */
			func_1160(817753087);
			func_1161(-963523016);
			func_1162(-963523016);
			func_510(0, 10);
			break;
		case -1490884871: /* GXTEntry: "Legendary Bluegill" */
			func_1160(576606016);
			func_1161(560825326);
			func_1162(560825326);
			func_510(0, 10);
			break;
		case -395458616: /* GXTEntry: "Legendary Northern Pike" */
			func_1160(814934957);
			func_1161(858269539);
			func_1162(858269539);
			break;
	}
}

void func_909(bool bParam0, int iParam1)
{
	var uVar0;

	func_539(bParam0, iParam1, &uVar0);
}

int func_910(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_606(bParam1, 1, 0) };
		iParam3 = func_1163(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1165(bParam1, iParam2, func_1164(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_1166(1, (func_90() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && bParam1 != &Global_1946804->f_57[func_1164(iParam3, 1) /*11*/])
			{
				func_1167(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_1168(32768) && bParam1 != &Global_1946804->f_57[func_1164(iParam3, 1) /*11*/])
			{
				func_1169();
				func_1167(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_1167(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1170(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_1167(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_1171(0);
			func_1172(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_1167(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

int func_911(bool bParam0, bool bParam1)
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
	*bParam0 = 0;
	iVar18 = func_322(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_322(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_545("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_546(&Var3, iVar2, iVar0, iVar1))
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
								*bParam0 = Var3.f_4;
								bVar17 = true;
							}
						}
						iVar2++;
						func_544(iVar0);
						if (*bParam0 != 0)
						{
							return 1;
						}
						return 0;
					}
				}
			}
		}
	}

void func_912()
{
	PLAYER::_0x11A7FF918EF6BC66(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_60));
}

void func_913()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_0x497A6539BB0E8787(PLAYER::PLAYER_ID(), (1f - fVar0), (1f - fVar1));
}

void func_914()
{
	PLAYER::_0xE0D6C2A146A5C993(PLAYER::PLAYER_ID(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_915()
{
	PLAYER::_0xB427911EA6DFFEF3(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_63));
}

void func_916()
{
	func_1173();
	func_1174();
	func_1175();
}

void func_917(int iParam0, int iParam1, bool bParam2)
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

void func_918(int iParam0, bool bParam1)
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
	func_1117(MISC::_CREATE_VAR_STRING(2, sVar1), MISC::_CREATE_VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), 1433015236, MISC::_CREATE_VAR_STRING(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_919(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_920(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_921(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_922(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_923(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_924(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

bool func_925(bool bParam0)
{
	if (!func_278(bParam0, 0))
	{
		return false;
	}
	return bParam0;
}

void func_926(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_1070(iParam0, &iVar0, &iVar1);
	if (!func_1071(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1176(iParam0, 1024))
	{
		return;
	}
	func_1072(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = uParam1;
	((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 2;
}

void func_927(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_1070(iParam0, &iVar0, &iVar1);
	if (!func_1071(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1176(iParam0, 1024))
	{
		return;
	}
	func_1072(iVar0, iVar1);
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

int func_928()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = COLLECTION::_0x5461C821D00FE15A(-2076669067, 0);
	if (iVar0 == func_1104())
	{
		return func_929();
	}
	iVar4 = (func_1104() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_1104())
	{
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar2, -2076669067, 0);
		if (!func_1177(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_1105(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

bool func_929()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_1104());
	return func_1105(COLLECTION::_0x126CBEBBA46693CF(iVar0, -2076669067, 0));
}

void func_930(bool bParam0)
{
	switch (*bParam0)
	{
		case -1424823393: /* GXTEntry: "Opened Cigarettes" */
			*bParam0 = -885810591; /* GXTEntry: "Premium Cigarettes" */
			break;
		case 998010398: /* GXTEntry: "Opened Chewing Tobacco" */
			*bParam0 = -324053813; /* GXTEntry: "Chewing Tobacco" */
			break;
		case 1358243310: /* GXTEntry: "Opened Cigarettes" */
			*bParam0 = 1463786584; /* GXTEntry: "Cigarettes" */
			break;
		case -541584777: /* GXTEntry: "Opened Cocaine Gum" */
			*bParam0 = 206762213; /* GXTEntry: "Cocaine Gum" */
			break;
	}
}

int func_931(bool bParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_278(bParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_606(bParam0, 0, 1) };
	Var5 = { func_610(bParam0, Var0, Var0.f_4, 0) };
	return func_1178(bParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_932(bool bParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (func_90() != -1)
	{
		return;
	}
	switch (func_840(bParam0))
	{
		case 81053684:
			if (bParam0 == -1623728698 && func_1179(81053684, 0) <= 0)
			{
				func_1167(32, bParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (bParam0 == -1535516064 || bParam0 == -763730846)
			{
				func_1167(32, bParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_1180(bParam0);
			if (func_1181(iVar0))
			{
				func_1182(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_1167(30, bParam0, 0, 0, 0);
			}
			if (func_1183() == -2125499975 || func_1183() == -449205311)
			{
				switch (bParam0)
				{
					case 624063935: /* GXTEntry: "The Summer Gunslinger" */
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case 1661121390: /* GXTEntry: "The Gunslinger" */
						func_1167(32, bParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_1183() == 1160113249)
			{
				switch (bParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						func_1167(32, bParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_1184(-525676072, 0))
			{
				if (func_1185(-525676072, &bVar1))
				{
					func_1167(33, bVar1, 0, 0, 0);
				}
			}
			func_1167(32, bParam0, 0, 0, 0);
			break;
	}
	if ((bParam0 == 899611344 || bParam0 == -1515874150) || bParam0 == -1185145312)
	{
		if (!func_1186(99217379))
		{
			func_910(Global_35, bParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_885(24);
		if (func_911(&bVar2, 0))
		{
			func_364(bVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_933(bool bParam0)
{
	if (func_538(bParam0, 943695443))
	{
		func_1187(0, bParam0);
	}
	else if (func_538(bParam0, -2096528786))
	{
		func_1187(1, bParam0);
	}
	else if (func_538(bParam0, -1094167013))
	{
		func_1187(2, bParam0);
	}
	else if (func_538(bParam0, 1936654645))
	{
		func_1187(3, bParam0);
	}
	else if (func_538(bParam0, 1306489306))
	{
		func_1187(4, bParam0);
	}
	else if (func_538(bParam0, 435762317))
	{
		func_1187(5, bParam0);
	}
	else if (func_538(bParam0, 1259363210))
	{
		func_1187(6, bParam0);
	}
	else if (func_538(bParam0, 881398259))
	{
		func_1187(7, bParam0);
	}
	else if (func_538(bParam0, -541549214))
	{
		func_1187(8, bParam0);
	}
	else if (func_538(bParam0, 130796156))
	{
		func_1187(-1, bParam0);
	}
}

int func_934(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	Var4.f_1 = 10;
	func_1188(&Var4, 1356624740);
	return func_1189(iParam0, &Var4, &uVar0, iParam1);
}

void func_935(bool bParam0)
{
	switch (bParam0)
	{
		case 236757114: /* GXTEntry: "Flight Feather" */
			if (func_90() == -1)
			{
				if (func_895(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_810(109, 1);
				}
			}
			break;
	}
}

void func_936(bool bParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_1191(func_1190(0));
	func_1051(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1192(bParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_937(int iParam0)
{
	struct<5> Var0;
	var uVar5;

	if (func_1193())
	{
		return 0;
	}
	if (!func_1194(3, &Var0))
	{
	}
	Var0.f_1 = 0;
	Var0.f_2 = -2017996124;
	Var0.f_3 = iParam0;
	Var0.f_4 = 0;
	if (DATAFILE::_DATAFILE_GET_INT(&uVar5, &Var0))
	{
	}
	return uVar5;
}

void func_938(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_1051(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_939(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
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
		if (func_1195())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_1051(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1196(iVar0);
			func_1197(iVar0, 0, 0);
		}
		func_1051(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_743(func_742(1644987397), iVar1);
	}
}

int func_940(int iParam0)
{
	iParam0 = func_498(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (func_955(iParam0) == 0)
	{
		return 0;
	}
	return 1;
}

void func_941(int iParam0)
{
	int iVar0;
	int iVar1;

	iParam0 = func_498(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_732(iParam0))
	{
		return;
	}
	iVar0 = func_665(iParam0);
	func_1198(iParam0);
	if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	if (PED::_0xAA9F048DCF69B6DC(iVar1))
	{
		if (!func_1199(iVar1))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(iVar1, false);
		}
	}
	PED::DELETE_PED(&iVar0);
	func_1200(iParam0, 0);
	func_239(iParam0);
}

void func_942(int iParam0)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;

	iParam0 = func_498(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	StringCopy(Global_40.f_1095.f_1[iParam0 /*436*/], "", 64);
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_8 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_9 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_10 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_11 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_12 = -1;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_13 = -15;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_14 = 0;
	func_1201(&Var0);
	func_1202(iParam0, Var0);
	func_1203(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_15));
	func_1204(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_298));
	func_1205(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_356));
	func_1206(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_1207(iVar2, (Global_40.f_1095.f_1[iParam0 /*436*/])->f_398[iVar2 /*4*/]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_1208(iVar3, (Global_40.f_1095.f_1[iParam0 /*436*/])->f_407[iVar3 /*4*/]);
		iVar3++;
	}
	func_1209(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_420));
	func_1210(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_422));
	func_1211(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_425));
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_427 = { 0f, 0f, 0f };
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_430 = 0f;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_431 = -1;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_432 = -1;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_433 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_434 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_435 = 0;
	(*Global_1900383)[iParam0 /*45*/] = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_1 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_2 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_3 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_19 = { 0f, 0f, 0f };
	((*Global_1900383)[iParam0 /*45*/])->f_22 = 0f;
	((*Global_1900383)[iParam0 /*45*/])->f_23 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_24 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_25 = 0;
	if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_26));
	}
	((*Global_1900383)[iParam0 /*45*/])->f_26 = 0;
	if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
	{
		MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
	}
	((*Global_1900383)[iParam0 /*45*/])->f_27 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_28 = { 0f, 0f, 0f };
	((*Global_1900383)[iParam0 /*45*/])->f_31 = { 0f, 0f, 0f };
	((*Global_1900383)[iParam0 /*45*/])->f_34 = 0f;
	((*Global_1900383)[iParam0 /*45*/])->f_35 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_36 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_37 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_38 = { 0f, 0f, 0f };
	((*Global_1900383)[iParam0 /*45*/])->f_41 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_42 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_43 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_44 = -1;
}

void func_943(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_944(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

int func_945(vector3 vParam0)
{
	return func_1212(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

int func_946(int iParam0)
{
	int iVar0;

	iParam0 = func_498(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_732(iParam0))
	{
		return 0;
	}
	iVar0 = func_665(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_947(int iParam0)
{
	int iVar0;

	iParam0 = func_498(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_732(iParam0))
	{
		return 0;
	}
	iVar0 = func_665(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_948(int iParam0)
{
	int iVar0;

	iParam0 = func_498(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_732(iParam0))
	{
		return;
	}
	iVar0 = func_665(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	ENTITY::_SET_ENTITY_HEALTH(iVar0, 0, 0);
}

void func_949(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	var uVar4;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	func_734(iParam0);
	func_734(iParam0);
	func_1213(iParam0, iParam1);
	func_1214(iParam0, iParam1);
	func_1215(iParam0, iParam1);
	iVar1 = func_665(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_1216(iVar1);
		}
		if (iParam0 == 0)
		{
			PLAYER::_0x8FBF9EDB378CCB8C(iVar0, iVar1);
		}
		else if (iParam0 == 1)
		{
			uVar2 = PLAYER::_0x227B06324234FB09(iVar0, iVar1);
		}
		else
		{
			if (PLAYER::_0x46FA0AE18F4C7FA9(iVar0) == iVar1)
			{
				PLAYER::_0x8FBF9EDB378CCB8C(iVar0, 0);
			}
			if (PLAYER::_0xD3F7445CEA2E5035(iVar0) == iVar1)
			{
				PLAYER::_0x227B06324234FB09(iVar0, 0);
			}
		}
	}
	iVar3 = func_665(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_1216(iVar3);
		}
		if (iParam1 == 0)
		{
			PLAYER::_0x8FBF9EDB378CCB8C(iVar0, iVar3);
		}
		else if (iParam1 == 1)
		{
			uVar4 = PLAYER::_0x227B06324234FB09(iVar0, iVar3);
		}
		else
		{
			if (PLAYER::_0x46FA0AE18F4C7FA9(iVar0) == iVar3)
			{
				PLAYER::_0x8FBF9EDB378CCB8C(iVar0, 0);
			}
			if (PLAYER::_0xD3F7445CEA2E5035(iVar0) == iVar3)
			{
				PLAYER::_0x227B06324234FB09(iVar0, 0);
			}
		}
	}
	func_500();
}

int func_950()
{
	int iVar0;

	iVar0 = func_1217();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_951()
{
	int iVar0;

	iVar0 = func_1217();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	OBJECT::DELETE_OBJECT(&iVar0);
	func_1218(0);
}

void func_952(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

int func_953(int iParam0)
{
	iParam0 = func_498(iParam0);
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

int func_954(int iParam0)
{
	iParam0 = func_498(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_8;
}

int func_955(int iParam0)
{
	iParam0 = func_498(iParam0);
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

void func_956(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;

	iParam0 = func_498(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1219(&uVar0, &uVar1, &uVar2);
	func_1220(iParam0, uVar0);
	func_1221(iParam0, uVar1);
	func_1222(iParam0, uVar2);
	func_1223(iParam0, 1);
	func_1224(iParam0, 1);
}

void func_957(int iParam0)
{
	iParam0 = func_498(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1225(iParam0, 1);
}

void func_958(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_498(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_19 = { vParam1 };
	((*Global_1900383)[iParam0 /*45*/])->f_22 = uParam4;
}

int func_959(int iParam0)
{
	iParam0 = func_498(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return func_986(iParam0, 1);
}

struct<2> func_960(int iParam0)
{
	struct<2> Var0;
	var uVar2;
	var uVar3;

	iParam0 = func_498(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_1226(iParam0, &uVar2))
	{
	}
	if (!func_1227(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_961()
{
	struct<6> Var0;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;

	if (func_1228(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_1228(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_1228(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_1228(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_1228(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_1228(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_962(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
	{
		return;
	}
	func_1229(iParam0);
	func_1230(iParam0, uParam1);
	func_1231(iParam0);
	func_1232(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_1233(iParam0, iParam3, 0);
	}
	PED::_UPDATE_PED_VARIATION(iParam0, 0, 1, 1, 1, 1);
}

void func_963(int iParam0)
{
	iParam0 = func_498(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_2 = 1;
	((*Global_1900383)[iParam0 /*45*/])->f_3 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

int func_964(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar5 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		switch (*uParam4)
		{
			case 0:
				if (bParam8 && PED::IS_PED_ON_MOUNT(iParam0))
				{
					vVar0 = { func_660(iParam0, iParam1, sParam2, sParam3, 0) };
					if (!func_79(vVar0))
					{
						if (func_661(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), ENTITY::GET_ENTITY_COORDS(iParam0, true, false) + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0), vVar0))
						{
							iVar5 = 131072;
						}
						else
						{
							iVar5 = 262144;
						}
					}
					TASK::TASK_DISMOUNT_ANIMAL(iParam0, iVar5, 0, 0, 0, 0);
					*uParam4 = 1;
				}
				else
				{
					if (bParam6)
					{
						WEAPON::_0x4820A6939D7CEF28(Global_35, 0);
						WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 0);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar4);
					if (bParam6)
					{
						TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
					}
					if (PED::_IS_PED_CARRYING(iParam0))
					{
						iVar6 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iParam0);
						TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, iVar6, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 1073741824, 8);
					}
					TASK::TASK_ENTER_ANIM_SCENE(0, iParam1, sParam2, sParam3, iParam5, bParam7, 0, 20000, -1082130432);
					func_171(iParam0, &iVar4, 0, 0, 1, 1);
					*uParam4 = 2;
				}
				break;
			case 1:
				if (!PED::IS_PED_ON_MOUNT(iParam0))
				{
					iVar3 = PED::_GET_LAST_MOUNT(iParam0);
					if (!ENTITY::IS_ENTITY_DEAD(iVar3))
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(iVar3, iParam0, 6, 0, 4f, -1, 0);
					}
					if (bParam6)
					{
						WEAPON::_0x4820A6939D7CEF28(Global_35, 0);
						WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 0);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar4);
					if (bParam6)
					{
						TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
					}
					TASK::TASK_ENTER_ANIM_SCENE(0, iParam1, sParam2, sParam3, iParam5, bParam7, 0, 20000, -1082130432);
					func_171(iParam0, &iVar4, 0, 0, 1, 1);
					*uParam4 = 2;
				}
				break;
			case 2:
				if (bParam7)
				{
					if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam0, iParam1))
					{
						return 1;
					}
				}
				else if (func_169(iParam0, 242628503))
				{
					if (!bParam6 || TASK::GET_SEQUENCE_PROGRESS(iParam0) > 0)
					{
						if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam1, sParam3))
						{
							if (!ANIMSCENE::_0x3B393716C3FD8237(iParam0) && ANIMSCENE::_0x337F1CC8EE895601(iParam1, sParam2))
							{
								*uParam4 = 3;
								return 1;
							}
						}
					}
				}
				break;
			case 3:
				return 1;
		}
	}
	return 0;
}

var func_965(int iParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(iParam0, uParam1);
}

void func_966(int iParam0, var uParam1, int iParam2)
{
	int iVar0;

	if (uParam1->f_3 != 0)
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (uParam1->f_5)
		{
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
		}
		if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(iParam0, 0))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 2000, -1082130432, -1082130432, -1082130432);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam2))
			{
				if (uParam1->f_3 != 3)
				{
					TASK::TASK_MOUNT_ANIMAL(0, iParam2, 20000, -1, 1f, 1, 0, 0);
				}
			}
		}
		switch (uParam1->f_3)
		{
			case 1:
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
				break;
			case 2:
				TASK::_TASK_MOVE_IN_TRAFFIC(0, -1082130432, 0, 0);
				break;
			case 3:
				PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 16, true);
				TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, uParam1->f_1, 0, 80f, -1, iParam2);
				break;
		}
		func_171(iParam0, &iVar0, 0, 0, 1, 1);
		PED::SET_PED_KEEP_TASK(iParam0, true);
	}
}

int func_967(int iParam0, int iParam1)
{
	if (func_30(iParam1, 2))
	{
		return 0;
	}
	if (func_30(iParam1, 131072))
	{
		if (func_30(iParam1, 16))
		{
			if (func_682(iParam0, 2093245709))
			{
				return 0;
			}
		}
		if (func_30(iParam1, 65536))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_968(int iParam0)
{
	if (func_333(&(iParam0->f_459)))
	{
		if (func_343(&(iParam0->f_459), iParam0->f_471))
		{
			iParam0->f_471 = 0f;
			func_334(&(iParam0->f_459));
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_969(int iParam0, int iParam1)
{
	int iVar0;

	if (func_320(iParam0->f_7, &(iParam0->f_243), &iVar0, 0))
	{
		if (iParam1 == 0 || iParam1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_970(bool bParam0)
{
	int iVar0;

	if (bParam0)
	{
		iVar0 = func_1234(1, 0, 0);
	}
	else
	{
		iVar0 = func_479();
	}
	return func_971(iVar0);
}

int func_971(int iParam0)
{
	switch (iParam0)
	{
		case 40:
			return 1;
		case 78:
			return 2;
		case 37:
			return 4;
		case 38:
			return 8;
		case 93:
			return 16;
		case 82:
			return 32;
		case 95:
			return 64;
		case 65:
			return 128;
		case 68:
			return 256;
		case 69:
			return 512;
		case 3:
			return 1024;
		case 61:
			return 2048;
		case 110:
			return 4096;
		case 5:
			return 8192;
		case 35:
			return 16384;
		case 22:
			return 32768;
		case 105:
			return 65536;
		case 8:
			return 131072;
		case 32:
			return 262144;
		case 26:
			return 524288;
		case 115:
			return 1048576;
		case 76:
			return 2097152;
		case 92:
			return 4194304;
		case 56:
			return 8388608;
		case 120:
			return 16777216;
		default:
			break;
	}
	return 0;
}

int func_972(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = iParam0;
	while (iParam0 > 1)
	{
		iParam0 = BUILTIN::SHIFT_RIGHT(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

int func_973(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = &Global_1326862->f_512[iParam1];
	iVar1 = &Global_1326862->f_558[iParam1];
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if (iParam0 == &Global_1326862->f_11[iVar2])
		{
			return iVar2;
		}
		iVar2++;
	}
	return -1;
}

void func_974(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_517(Global_1310750[iVar0 /*111*/], iParam0))
		{
			if (!func_254(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_1235(iVar0) < func_1236(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_694(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

bool func_975(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_1237(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

void func_976(int iParam0)
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

void func_977(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_978()
{
	int iVar0;

	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_1238(iVar0, 128))
		{
			func_1239(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_979()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_1238(iVar0, 128) && func_1238(iVar0, 1))
		{
			func_1239(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_980(float fParam0)
{
	int iVar0;

	iVar0 = BUILTIN::FLOOR((fParam0 * 1000f));
	if (Global_1393237->f_3 < (MISC::GET_GAME_TIMER() + iVar0))
	{
		Global_1393237->f_3 = (MISC::GET_GAME_TIMER() + iVar0);
	}
}

void func_981()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_122(iVar0, 16777216))
		{
			if (!func_1240(iVar0))
			{
				func_1001(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

void func_982(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = ((iParam1 + (60 * iParam2)) + (3600 * iParam3));
	iVar1 = (iVar0 / 2);
	iVar2 = (iVar1 / 60);
	iVar3 = (iVar1 - iVar2 * 60);
	iVar4 = 0;
	switch (iParam0)
	{
		case 0:
			func_85(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_85(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_85(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_85(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_85(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_85(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_85(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_983(float fParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	fVar0 = func_709();
	fVar1 = (Global_1393447->f_60 - fVar0);
	bVar2 = fParam0 >= fVar1;
	if (!bParam1)
	{
		if (bVar2)
		{
			bParam1 = true;
		}
	}
	if ((!bVar2 && fParam0 >= 0f) && !bParam2)
	{
	}
	else
	{
		Global_1393447->f_60 = (fVar0 + fParam0);
	}
}

int func_984(int iParam0)
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

int func_985(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

bool func_986(int iParam0, int iParam1)
{
	iParam0 = func_498(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return (((*Global_1900383)[iParam0 /*45*/])->f_24 && iParam1) != 0;
}

void func_987(var uParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(*uParam0, func_1242(func_1241(255), joaat("COLOR_PURE_WHITE")));
	}
	else if (func_629())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_16();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_988(int iParam0)
{
	iParam0 = func_498(iParam0);
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

void func_989(var uParam0, bool bParam1)
{
	char* sVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(*uParam0, func_1242(func_1241(255), joaat("COLOR_PURE_WHITE")));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_629())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_16())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (MISC::COMPARE_STRINGS(sVar0, "", false, -1) != 0)
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sVar0);
		}
	}
}

int func_990(int iParam0)
{
	iParam0 = func_498(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return ((*Global_1900383)[iParam0 /*45*/])->f_37;
}

float func_991(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

float func_992(int iParam0)
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
	float fVar12;

	iParam0 = func_498(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_953(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1f;
	}
	iVar1 = func_988(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_988(iParam0) + 1;
	fVar6 = func_1243(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_494(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_993(var uParam0)
{
	MAP::_SET_BLIP_FLASH_STYLE(uParam0, -401963276);
	MAP::_SET_BLIP_FLASH_STYLE(uParam0, 231194138);
	MAP::_SET_BLIP_FLASH_STYLE(uParam0, -1012863186);
	MAP::_SET_BLIP_FLASH_STYLE(uParam0, -272772079);
	MAP::_SET_BLIP_FLASH_STYLE(uParam0, 1313031610);
	MAP::_SET_BLIP_FLASH_STYLE(uParam0, -1814032670);
	MAP::_SET_BLIP_FLASH_STYLE(uParam0, -1380599892);
	MAP::_SET_BLIP_FLASH_STYLE(uParam0, 430539302);
	MAP::_SET_BLIP_FLASH_STYLE(uParam0, -995247980);
	MAP::_SET_BLIP_FLASH_STYLE(uParam0, -25056193);
	MAP::_SET_BLIP_FLASH_STYLE(uParam0, -264630352);
}

void func_994(var uParam0)
{
	MAP::_SET_BLIP_FLASH_STYLE(uParam0, 673950256);
	MAP::_SET_BLIP_FLASH_STYLE(uParam0, 561559387);
	MAP::_SET_BLIP_FLASH_STYLE(uParam0, -201249929);
}

int func_995(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (PED::_0x34D6AC1157C8226C(iParam0, -1805387726))
	{
		return 1;
	}
	return 0;
}

bool func_996(int iParam0)
{
	return func_1244(iParam0, 2);
}

int func_997(int iParam0)
{
	if (!func_1245(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		(*Global_1360165)[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_998(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_1246(iParam0))
	{
		return;
	}
	iVar0 = Global_1360165[iParam0 /*1157*/];
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			DECORATOR::DECOR_SET_INT(iVar0, "companion_manager_command", iParam1);
		}
	}
}

int func_999()
{
	return &Global_1899515;
}

void func_1000(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_1247(*iParam0);
	iVar1 = func_1248(*iParam0);
	iVar2 = func_1249(*iParam0);
	iVar3 = func_712(*iParam0);
	iVar4 = func_1018(*iParam0);
	iVar5 = func_1250(*iParam0);
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
	iVar6 = func_1251(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_1251(iVar1, iVar0);
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
	func_1252(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_1001(int iParam0, int iParam1)
{
	if (!func_243(iParam0))
	{
		return;
	}
	((*Global_1310750)[iParam0 /*111*/])->f_1 = (((*Global_1310750)[iParam0 /*111*/])->f_1 - (((*Global_1310750)[iParam0 /*111*/])->f_1 && iParam1));
}

int func_1002(int iParam0)
{
	if (!func_730(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_20;
}

bool func_1003(var uParam0)
{
	return (Global_1310750->f_16074 && uParam0) != 0;
}

bool func_1004()
{
	return Global_1894899 & 2 != 0;
}

struct<4> func_1005()
{
	struct<4> Var0;

	return Var0;
}

bool func_1006(int iParam0, int iParam1)
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

int func_1007(int iParam0, int iParam1)
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

bool func_1008(int iParam0, int iParam1)
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
	if (!func_1006(iParam0, iVar0))
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

void func_1009(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

int func_1010()
{
	if (func_1253())
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

void func_1011(var uParam0, var uParam1)
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

int func_1012(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iVar0 == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_INTERACT_LOCKON_DETACH_HORSE")))
		{
			if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar1, false, false))
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
	if (iParam0->f_6 == 3)
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

int func_1013(int iParam0)
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

void func_1014(int iParam0)
{
	int iVar0;

	if (Global_1935630->f_38 == 0)
	{
		func_118(iParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Global_1935630->f_34[iVar0])))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(&(Global_1935630->f_34[iVar0])))
				{
					func_119(iParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}

int func_1015(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

float func_1016(int iParam0)
{
	return iParam0->f_24;
}

var func_1017(int iParam0)
{
	return iParam0->f_25;
}

int func_1018(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_1019(int iParam0, int iParam1, int iParam2)
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
		iVar1 = func_1013(iParam2);
	}
	else
	{
		iVar1 = func_1035(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_1013(iParam0);
	}
	else
	{
		iVar0 = func_1035(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return 1;
		}
	}
	if (func_30(*iParam1, 8388608))
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

float func_1020(int iParam0, int iParam1)
{
	return func_372(iParam0, iParam1, 1, 1);
}

float func_1021(int iParam0)
{
	return iParam0->f_26;
}

int func_1022(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
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
	else if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, false, false))
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
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_372(iVar0, iParam0, 1, 1) <= 4f)
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
		if (WEAPON::_0x6AD66548840472E5(func_1254(iVar0, 0)))
		{
			if (func_1255(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_1023(int iParam0)
{
	return iParam0->f_17;
}

int func_1024(int iParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (iParam0->f_12 > fParam3)
	{
		return 0;
	}
	fVar0 = -1f;
	if (!func_30(*iParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, fParam3, -1f, fVar0))
	{
		return 1;
	}
	if (*iParam0 & 32768 != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17))
		{
			return 1;
		}
	}
	return 0;
}

int func_1025(int iParam0)
{
	return iParam0->f_18;
}

int func_1026(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_0x6AD66548840472E5(func_1254(iVar0, 0)))
		{
			if (func_1256(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1027(int iParam0)
{
	int iVar0;

	switch (iParam0->f_7)
	{
		case 0:
			switch (iParam0->f_6)
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
			switch (iParam0->f_6)
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
			switch (iParam0->f_6)
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
			switch (iParam0->f_6)
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
			switch (iParam0->f_6)
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
	if (*iParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_1028(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_1257(iParam0, vParam4, 0.5f))
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

int func_1029(int iParam0)
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
	if (func_1258(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_1030(int iParam0)
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

int func_1031(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_474(iParam1))
		{
			return 0;
		}
	}
	fVar0 = 5f;
	if (*iParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_1032(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_474(iParam1))
		{
			return 0;
		}
	}
	fVar0 = 10f;
	if (*iParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_1033(int iParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_474(iParam1))
	{
		return 0;
	}
	if (*iParam0 & 65536 != 0)
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

int func_1034(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_420(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_1035(int iParam0)
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

int func_1036(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_772(Global_35, &iVar1))
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
		fVar2 = func_372(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_372(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

int func_1037(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_720(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_1038(iParam1, iVar0))
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
				if (!bParam2 || !func_1038(iParam1, iVar1))
				{
					if (func_420(iVar1, Global_36, 1) < 5f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_1038(int iParam0, int iParam1)
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

int func_1039(int iParam0)
{
	if (func_16())
	{
		return 0;
	}
	return func_895(((*Global_1347702)[58 /*49*/])->f_15, 1);
}

int func_1040(int iParam0)
{
	return iParam0->f_20;
}

int func_1041(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (iParam1->f_4 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = iParam1->f_12;
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

int func_1042()
{
	int iVar0;

	iVar0 = func_1259();
	if (iVar0 <= -320)
	{
		return -320;
	}
	if (iVar0 <= -280)
	{
		return -280;
	}
	if (iVar0 <= -240)
	{
		return -240;
	}
	if (iVar0 <= -200)
	{
		return -200;
	}
	if (iVar0 <= -160)
	{
		return -160;
	}
	if (iVar0 <= -120)
	{
		return -120;
	}
	if (iVar0 <= -80)
	{
		return -80;
	}
	if (iVar0 <= -40)
	{
		return -40;
	}
	if (iVar0 >= 320)
	{
		return 320;
	}
	if (iVar0 >= 280)
	{
		return 280;
	}
	if (iVar0 >= 240)
	{
		return 240;
	}
	if (iVar0 >= 200)
	{
		return 200;
	}
	if (iVar0 >= 160)
	{
		return 160;
	}
	if (iVar0 >= 120)
	{
		return 120;
	}
	if (iVar0 >= 80)
	{
		return 80;
	}
	if (iVar0 >= 40)
	{
		return 40;
	}
	return 0;
}

int func_1043(int iParam0)
{
	float fVar0;
	float fVar1;

	if (func_90() != -1)
	{
		return iParam0;
	}
	if (Global_1347477->f_2 + 120000) < MISC::GET_GAME_TIMER()
	{
		Global_1347477->f_3 = 1;
		Global_1347477->f_2 = MISC::GET_GAME_TIMER();
		return iParam0;
	}
	fVar0 = 1f;
	Global_1347477->f_2 = MISC::GET_GAME_TIMER();
	Global_1347477->f_3++;
	if (Global_1347477->f_3 >= 10)
	{
		fVar0 = 2f;
	}
	else if (Global_1347477->f_3 >= 3)
	{
		fVar0 = 1.5f;
	}
	fVar1 = (BUILTIN::TO_FLOAT(iParam0) * fVar0);
	fVar1 = func_102(MISC::ABSF(fVar1) < 1f, func_102(fVar1 < 0f, -1f, 1f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

int func_1044(int iParam0, int iParam1, int iParam2)
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

int func_1045(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case -40:
		case 40:
			return 1;
		case -80:
		case 80:
			return 2;
		case -120:
		case 120:
			return 3;
		case -160:
		case 160:
			return 4;
		case -200:
		case 200:
			return 5;
		case -240:
		case 240:
			return 6;
		case -280:
		case 280:
			return 7;
		case -320:
		case 320:
			return 8;
	}
	return 0;
}

int func_1046()
{
	if (Global_40.f_11095.f_35 <= -320)
	{
		return 1;
	}
	else if (Global_40.f_11095.f_35 <= -280)
	{
		return 2;
	}
	else if (Global_40.f_11095.f_35 <= -240)
	{
		return 3;
	}
	else if (Global_40.f_11095.f_35 <= -200)
	{
		return 4;
	}
	else if (Global_40.f_11095.f_35 <= -160)
	{
		return 5;
	}
	else if (Global_40.f_11095.f_35 <= -120)
	{
		return 6;
	}
	else if (Global_40.f_11095.f_35 <= -80)
	{
		return 7;
	}
	else if (Global_40.f_11095.f_35 < 0)
	{
		return 8;
	}
	else if (Global_40.f_11095.f_35 <= 40)
	{
		return 9;
	}
	else if (Global_40.f_11095.f_35 >= 320)
	{
		return 16;
	}
	else if (Global_40.f_11095.f_35 >= 280)
	{
		return 15;
	}
	else if (Global_40.f_11095.f_35 >= 240)
	{
		return 14;
	}
	else if (Global_40.f_11095.f_35 >= 200)
	{
		return 13;
	}
	else if (Global_40.f_11095.f_35 >= 160)
	{
		return 12;
	}
	else if (Global_40.f_11095.f_35 >= 120)
	{
		return 11;
	}
	else if (Global_40.f_11095.f_35 >= 80)
	{
		return 10;
	}
	return 9;
}

void func_1047(int iParam0, bool bParam1, int iParam2)
{
	func_1260((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1261(iParam0);
}

void func_1048(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_16[2]), false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[2]), true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[2]), func_1262(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[2]), "pausemenu_player");
}

void func_1049(bool bParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_1263(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1264(iVar5, &bVar2, &iVar0))
			{
				if (!func_278(bVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1265(bVar2);
					if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar1))
					{
						if (bParam0)
						{
							UNLOCK::_UNLOCK_SET_UNLOCKED(iVar1, false);
						}
					else
					{
						}
						else
						{
							if (func_279(bVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_1042() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_1042() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1266();
							}
							if (bVar3)
							{
								UNLOCK::_UNLOCK_SET_UNLOCKED(iVar1, true);
								bVar3 = false;
							}
						}
						iVar5++;
					}
				}
			}
		}
	}

char* func_1050(int iParam0)
{
	switch (iParam0)
	{
		case 2139774588:
			return "HONOR_EVENT_LOOT_INNOCENT";
		case 1142025875: /* GXTEntry: "Murder" */
			return "HONOR_EVENT_AMBIENT_KILL";
		case 1587891565:
			return "HONOR_EVENT_AMBIENT_KO";
		case 1877013492: /* GXTEntry: "Frighten" */
			return "HONOR_EVENT_SCARE";
		case -643014279: /* GXTEntry: "Killed Vermin" */
			return "HONOR_EVENT_KILL_VERMIN";
		case -597116214: /* GXTEntry: "Killed Domestic Animal" */
			return "HONOR_EVENT_KILL_FARM_ANIMAL";
		case 551416228: /* GXTEntry: "Killed Horse" */
			return "HONOR_EVENT_KILL_HORSE";
		case 1022576842: /* GXTEntry: "Stole Horse" */
			return "HONOR_EVENT_STEAL_HORSE";
		case 953325896: /* GXTEntry: "Stole Donkey" */
			return "HONOR_EVENT_STEAL_DONKEY";
		case 508358508: /* GXTEntry: "Stole Mule" */
			return "HONOR_EVENT_STEAL_MULE";
		case -856432278:
			return "HONOR_EVENT_STEAL_WAGON";
		case -735200598: /* GXTEntry: "Trampled Innocent" */
			return "HONOR_EVENT_TRAMPLED_INNOCENT";
		case -2010847721: /* GXTEntry: "Abandon Dead Animals" */
			return "HONOR_EVENT_ABANDON_ANIMALS";
		case 446961221: /* GXTEntry: "Watched Animal Bleedout" */
			return "HONOR_EVENT_ANIMAL_BLEEDOUT";
		case -1972216640: /* GXTEntry: "Antagonize" */
			return "HONOR_EVENT_ANTAGONIZE";
		case 530833824: /* GXTEntry: "Theft" */
			return "HONOR_EVENT_THEFT";
		case 1682361219: /* GXTEntry: "Intervened" */
			return "HONOR_EVENT_INTERVENED";
		case 158959085: /* GXTEntry: "Wanted In Camp" */
			return "HONOR_EVENT_WANTED_IN_CAMP";
		case 1919819559: /* GXTEntry: "Donated Game" */
			return "HONOR_EVENT_DONATED_GAME";
		case 1461411082: /* GXTEntry: "Item Request" */
			return "HONOR_EVENT_ITEM_REQUEST";
		case -549508280: /* GXTEntry: "Long Absence" */
			return "HONOR_EVENT_LONG_ABSENCE";
		case -1787248475: /* GXTEntry: "Cruel Death" */
			return "HONOR_EVENT_CRUEL_DEATH";
		case 932872355: /* GXTEntry: "Justice Served" */
			return "HONOR_EVENT_JUSTICE_SERVED";
		case -1091304842: /* GXTEntry: "Cheat" */
			return "HONOR_EVENT_CHEAT";
		default:
			break;
	}
	return "";
}

var func_1051(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_1267(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_1052(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_1268(iParam0))
	{
		return 0;
	}
	if (!func_751())
	{
		return 0;
	}
	if (!func_1269(iParam0, &iVar0, &iVar1))
	{
		return 0;
	}
	if (iVar0 == -816321659 && Global_1572887->f_12 != -1)
	{
		return 0;
	}
	STATS::CHAL_ADD_GOAL_PROGRESS_INT(iVar0, iVar1, iParam1);
	return 1;
}

void func_1053(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_504(&(((*uParam1)[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_679(iParam0, 0);
		}
	}
}

void func_1054(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_503(((*uParam0)[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_504(&(((*uParam0)[iVar0 /*17*/])->f_6), 1, 1);
					if (bParam2)
					{
						((*uParam0)[iVar0 /*17*/])->f_7 = 0;
						(*uParam0)[iVar0 /*17*/] = 0;
						((*uParam0)[iVar0 /*17*/])->f_5 = "";
						((*uParam0)[iVar0 /*17*/])->f_14 = 0;
						((*uParam0)[iVar0 /*17*/])->f_13 = "";
						((*uParam0)[iVar0 /*17*/])->f_15 = 0;
						((*uParam0)[iVar0 /*17*/])->f_11 = "";
						((*uParam0)[iVar0 /*17*/])->f_12 = "";
					}
				}
				iVar0++;
			}
		}
	}

int func_1055(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_1270(iParam0, iParam1))
		{
			if (!func_30(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_1054(uParam2, 0, 0, 1, 0);
				func_119(&(iParam1->f_10), 1);
			}
			return 1;
		}
		else if (func_30(iParam1->f_10, 1))
		{
			func_1271(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_118(&(iParam1->f_10), 1);
		}
	}
	return 0;
}

int func_1056(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	char cVar0[32];
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;

	if (fParam7 > (fParam3 + 5f))
	{
		return 0;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		bVar4 = func_30(iParam4, 32);
		func_1053(iParam1, uParam2, 0);
		iVar5 = func_1272(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return 1;
		}
		func_1054(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_30(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_30(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_30(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_30(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_30(iParam4, 8388608) || func_30(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_30(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_30(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_1058(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_1058(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_30(iParam4, 67108864))
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
				iParam6 = func_1273(uParam0);
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
					PED::_0xFCA8FB9E15FA80D3(*uParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_0xFCA8FB9E15FA80D3(*uParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_0xFCA8FB9E15FA80D3(*uParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*uParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 301, false);
			if (func_30(iParam4, 268435456))
			{
				iVar8 = func_1274(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_1275(iParam1, (*uParam2)[iVar8 /*17*/]);
				}
			}
			if (func_1058(iParam1, 23))
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
			if (func_30(iParam4, 2) || func_30(iParam4, 16))
			{
				func_1057(*uParam0, 1, 1);
			}
			else
			{
				func_1057(*uParam0, 0, 1);
			}
			return 1;
		}
	}
	return 0;
}

void func_1057(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_1058(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

int func_1059(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = (!VOLUME::_DOES_VOLUME_EXIST(iParam2) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam2, true, 0));
	bVar1 = iParam1 & 32 != false;
	bVar2 = iParam1 & 65792 != false;
	bVar3 = iParam1 & 1179648 != false;
	if (bVar0)
	{
		if (bVar1)
		{
			return 1;
		}
		if (func_1276(*uParam0, bParam3, bVar2, bVar3))
		{
			return 1;
		}
	}
	return 0;
}

void func_1060(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
					MISC::SET_BIT((*uParam4)[iVar0 /*17*/], 14);
					iVar0++;
				}
			}
			func_1277(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_30(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_1061(int iParam0)
{
	if (func_30(iParam0, 4))
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
	if (func_30(iParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD"), false);
	}
	if (func_30(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
	}
}

bool func_1062(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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

	iVar1 = func_1278(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::_IS_PED_CARRYING(Global_35) || func_1279(Global_35)) || func_1280(Global_35)) || func_1281(Global_35));
	fVar12 = -1f;
	if (func_333(&(iParam1->f_13)))
	{
		fVar12 = func_589(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (((*uParam4)[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = ((*uParam4)[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_503(((*uParam4)[iVar0 /*17*/])->f_6);
		func_1282(*uParam0, (*uParam4)[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_1283(*uParam0, iParam1, (*uParam4)[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_1284(iParam12, ((*uParam4)[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_1054(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_576(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 11))
					{
						func_1053(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET(uParam4[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (!bVar2)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(((*uParam4)[iVar0 /*17*/])->f_11))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(((*uParam4)[iVar0 /*17*/])->f_12))
							{
								TASK::TASK_PLAY_ANIM(Global_35, ((*uParam4)[iVar0 /*17*/])->f_11, ((*uParam4)[iVar0 /*17*/])->f_12, 4f, -4f, -1, 67108880, 0, 0, 0, 0, 0, 0);
							}
						}
					}
					if (func_1285(iParam1, fParam6, iParam1->f_9))
					{
						func_341(&(iParam1->f_18));
						if (bVar6)
						{
							func_576(uParam4, 0, 0);
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
		func_1286(iParam1, fParam2);
	}
	return bVar5;
}

void func_1063(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 20))
		{
			if (!MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 21))
			{
				MISC::CLEAR_BIT((*uParam0)[iVar0 /*17*/], 20);
				MISC::CLEAR_BIT((*uParam0)[iVar0 /*17*/], 21);
			}
		}
		iVar0++;
	}
}

void func_1064(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_1287((*uParam1)[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET(uParam1[iVar0 /*17*/], 20))
			{
				func_1286(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

int func_1065(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (func_1288(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_1289(iParam1, 0);
				func_1053(iParam1, uParam2, func_1058(iParam1, 6));
				return 1;
			}
		}
	}
	return 0;
}

int func_1066(var uParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
		{
			return 0;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0f)
		{
			func_341(&(iParam1->f_18));
			return 0;
		}
		else if (func_333(&(iParam1->f_18)))
		{
			func_334(&(iParam1->f_18));
			return 0;
		}
	}
	if (!func_333(&(iParam1->f_18)))
	{
		return 1;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
		{
			return 0;
		}
	}
	return func_422(&(iParam1->f_18), fParam2);
	return 1;
}

void func_1067(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_1282(iParam0, (*uParam2)[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_1068(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_1069(int* iParam0)
{
	if (func_1058(iParam0, 0))
	{
		if (func_1290(iParam0))
		{
			func_1068(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

void func_1070(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

int func_1071(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_1291(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_1292(iParam0))
	{
		return 0;
	}
	if (func_1293(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_1176(iParam0, 1)) || func_1294(32768))
	{
		if (!func_1176(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_1295())
	{
		return 0;
	}
	return 1;
}

void func_1072(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_1073(int iParam0, float fParam1, bool bParam2)
{
	bool bVar0;
	bool bVar1;

	bVar0 = (PED::_0x9C54041BB66BCF9E(iParam0->f_7, iParam0->f_87) && TASK::IS_PED_ACTIVE_IN_SCENARIO(iParam0->f_7, 0));
	bVar1 = fParam1 < 1.25f;
	if (bVar0 && bVar1)
	{
		if (!func_333(&(iParam0->f_465)))
		{
			func_341(&(iParam0->f_465));
		}
		if (!bParam2 || func_343(&(iParam0->f_465), 3f))
		{
			return 1;
		}
	}
	else if (func_333(&(iParam0->f_465)))
	{
		func_334(&(iParam0->f_465));
	}
	return 0;
}

int func_1074(int iParam0, int iParam1)
{
	if (func_169(iParam0->f_7, 242628503))
	{
		if (!TASK::GET_SEQUENCE_PROGRESS(iParam0->f_7) > iParam1)
		{
			return 0;
		}
	}
	if (((iParam0->f_523 == 5 || iParam0->f_523 == 6) || iParam0->f_523 == 7) || iParam0->f_523 == 4)
	{
		if (func_205(Global_35, 0))
		{
			return 0;
		}
	}
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iParam0->f_7, 1))
	{
		return TASK::_0x916B8E075ABC8B4E(iParam0->f_7, 0);
	}
	else if (PED::IS_PED_FACING_PED(iParam0->f_7, Global_35, 45f))
	{
		return 1;
	}
	return 0;
}

void func_1075(int iParam0)
{
	if (!func_13(iParam0, 63) && !func_13(iParam0, 50))
	{
		if (func_1296(iParam0->f_523))
		{
			func_72(iParam0, 63);
			(iParam0->f_284.f_21[0 /*17*/])->f_13 = "";
			func_332(&(iParam0->f_284), 0, 1);
			func_381(&(iParam0->f_284), 0, func_380(8));
			return;
		}
	}
}

int func_1076(int iParam0)
{
	if (func_322(iParam0->f_7, 0, 1, 0) == joaat("weapon_unarmed"))
	{
		if (func_1073(iParam0, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0->f_7, true, false)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_1077(int iParam0)
{
	if (TASK::IS_PED_STILL(iParam0->f_7))
	{
		if (!func_208(Global_35, iParam0->f_7, 1.25f, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_1078(int iParam0, var uParam1, int iParam2)
{
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0, uParam1, iParam2, 3f, 0.25f, -1082130432);
	return 1;
}

bool func_1079(int iParam0, bool bParam1)
{
	if (bParam1 && !func_503(iParam0))
	{
		return false;
	}
	return !func_1244(iParam0, 4);
}

void func_1080(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_503(iParam0))
	{
		return;
	}
	iVar0 = func_737(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(2, sParam1, sParam2));
}

void func_1081(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_503(iParam0))
	{
		return;
	}
	iVar0 = func_737(iParam0);
	if (bParam1)
	{
		func_1297(iParam0, 4);
		func_1298(iVar0, 1);
		func_1299(iVar0, 1);
	}
	else
	{
		func_1300(iParam0, 4);
		func_1299(iVar0, 0);
	}
}

int func_1082(bool bParam0, bool bParam1)
{
	if (func_846(bParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_282(bParam1), bParam0, 0);
}

void func_1083(int iParam0, int iParam1)
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);
	if (iParam1 == 1)
	{
		func_1301(1);
	}
}

void func_1084(int iParam0)
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
			func_1083(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_1301(1);
	}
}

bool func_1085(int iParam0)
{
	return func_301(iParam0->f_284.f_73, 1);
}

int func_1086(int iParam0)
{
	if (PED::_0x569F1E1237508DEB(iParam0->f_7) == -1904017806 || PED::_0x569F1E1237508DEB(iParam0->f_7) == 494354620)
	{
		return 1;
	}
	return 0;
}

int func_1087(int iParam0)
{
	if (func_13(iParam0, 59))
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_7, func_140(43, 1), "HEY_N_HERBALIST", 1))
		{
			return 1;
		}
	}
	else if (!func_205(iParam0->f_7, 1))
	{
		return 1;
	}
	return 0;
}

void func_1088(int iParam0, int iParam1)
{
	func_73(iParam0, 27);
	func_196(iParam0, 131072);
	func_72(iParam0, iParam1);
	func_395(iParam0, 5f, 0);
	iParam0->f_205 = 5;
}

int func_1089(int iParam0)
{
	if (func_13(iParam0, 59))
	{
		if (!func_391(iParam0->f_7, *iParam0, "YARROW_RETURN_A_UPPER", "GCURRANT_RETURN_A_UPPER", "VSNOWDROP_RETURN_A_UPPER", "HBSAGE_RETURN_A", 1, 1))
		{
			return 1;
		}
	}
	else if (!func_205(iParam0->f_7, 1))
	{
		return 1;
	}
	return 0;
}

bool func_1090()
{
	return !&Global_1911774;
}

void func_1091(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	Global_1911774->f_4[Global_1911774->f_3 /*4*/] = bParam0;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_1 = iParam1;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_2 = bParam2;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_3 = bParam3;
	if (Global_1911774->f_3 < 20)
	{
		Global_1911774->f_3++;
	}
}

int func_1092(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(bParam0, &Var3))
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

char* func_1093(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_1094(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (func_845(bParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	if (!func_612(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_282(bParam4), bParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

void func_1095(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	if (func_90() == -1)
	{
		if (func_874(43))
		{
			if (func_538(bParam0, 412399755))
			{
				func_1149(-1791518714);
				if (func_1150() == 0)
				{
					func_510(0, 10);
					iVar0 = func_1302(bParam0, iParam1, 1);
					if (((bParam0 == 281887510 || bParam0 == -164081697) || bParam0 == -1161319399) || bParam0 == 728781265)
					{
						if (func_1152(bParam0) < func_1153(bParam0))
						{
							func_880(43, bParam0, iParam1, -1791518714, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_874(44))
		{
			if (func_538(bParam0, 709057512))
			{
				func_1149(-2087881550);
				if (func_1150() == 1)
				{
					func_510(0, 10);
					iVar0 = func_1302(bParam0, iParam1, 2);
					if ((bParam0 == -222563712 || bParam0 == 1794857344) || bParam0 == 1952409553)
					{
						if (func_1152(bParam0) < func_1153(bParam0))
						{
							func_880(43, bParam0, iParam1, -2087881550, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_874(45))
		{
			if (func_538(bParam0, -1478961327))
			{
				func_1149(1908068621);
				if (func_1150() == 2)
				{
					func_510(0, 10);
					iVar0 = func_1302(bParam0, iParam1, 4);
					if (((bParam0 == 2116770557 || bParam0 == -651064726) || bParam0 == -404270094) || bParam0 == 2093126853)
					{
						if (func_1152(bParam0) < func_1153(bParam0))
						{
							func_880(43, bParam0, iParam1, 1908068621, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_874(46))
		{
			if (func_538(bParam0, -1238404098))
			{
				func_1149(1611247019);
				if (func_1150() == 3)
				{
					func_510(0, 10);
					iVar0 = func_1302(bParam0, iParam1, 8);
					if (((bParam0 == 2085530337 || bParam0 == -150591160) || bParam0 == -323969289) || bParam0 == 1504361882)
					{
						if (func_1152(bParam0) < func_1153(bParam0))
						{
							func_880(43, bParam0, iParam1, 1611247019, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_874(47))
		{
			if (func_538(bParam0, 1160548794))
			{
				func_1149(1319635688);
				if (func_1150() == 4)
				{
					func_510(0, 10);
					iVar0 = func_1302(bParam0, iParam1, 16);
					if (((bParam0 == -1521783510 || bParam0 == 1714875242) || bParam0 == 927763737) || bParam0 == 1019229063)
					{
						if (func_1152(bParam0) < func_1153(bParam0))
						{
							func_880(43, bParam0, iParam1, 1319635688, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

bool func_1096(bool bParam0)
{
	return func_279(bParam0) == joaat("weapon");
}

int func_1097(bool bParam0)
{
	var uVar0;

	if (func_90() != -1)
	{
		return 0;
	}
	if (func_883(bParam0, 1048576))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return func_1102(bParam0, &uVar0, 1, 0, 0);
	}
	return func_137(bParam0, 1, 0);
}

void func_1098(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;

	if (func_279(bParam0) != joaat("weapon"))
	{
		return;
	}
	bVar0 = func_887(bParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(bVar0))
	{
		return;
	}
	if (bParam2 || !func_363(bVar0))
	{
		if (func_90() == -1)
		{
			func_888(bVar0);
		}
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bVar0, 0, 0) && func_136(bParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_859(bParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_1099(bool bParam0, int iParam1)
{
	int iVar0;

	if (func_538(bParam0, 58855631))
	{
		func_1303(bParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_1100(bool bParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_278(bParam0, 0))
	{
		return 0;
	}
	if (!func_612(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(bParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_282(bParam3), bParam0);
}

int func_1101()
{
	if (func_90() != -1)
	{
		return 0;
	}
	if (!func_751())
	{
		return 0;
	}
	if (!func_895(((*Global_1835011)[1 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_895(((*Global_1835011)[2 /*74*/])->f_1, 1) && func_895(((*Global_1347702)[120 /*49*/])->f_15, 1)) && !func_895(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_895(((*Global_1835011)[37 /*74*/])->f_1, 1) && !func_895(((*Global_1835011)[39 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_895(((*Global_1835011)[57 /*74*/])->f_1, 1) && !func_895(((*Global_1835011)[60 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_895(((*Global_1835011)[26 /*74*/])->f_1, 1) && !func_895(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if ((func_895(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_895(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_895(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_895(((*Global_1835011)[75 /*74*/])->f_1, 1) && !func_895(((*Global_1347702)[1 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if (func_895(((*Global_1835011)[76 /*74*/])->f_1, 1) && !func_895(((*Global_1835011)[77 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_895(((*Global_1835011)[40 /*74*/])->f_1, 1) && func_895(((*Global_1835011)[41 /*74*/])->f_1, 1)) && !func_895(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_895(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_895(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_895(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_895(((*Global_1835011)[65 /*74*/])->f_1, 1) && func_895(((*Global_1835011)[66 /*74*/])->f_1, 1)) && !func_895(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 1;
	}
	return 0;
}

int func_1102(bool bParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;

	func_1304(&bParam0);
	if (!func_278(bParam0, 0))
	{
		return 0;
	}
	if (!func_612(0))
	{
		bParam3 = true;
	}
	if (func_1096(bParam0) && WEAPON::_0x705BE297EEBDB95D(bParam0))
	{
		if (WEAPON::_0xD955FEE4B87AFA07(bParam0))
		{
			Var0 = { func_541(0) };
			Var4.f_9 = -1591664384;
			if (!func_608(bParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
			{
				return 0;
			}
			else if (func_609(bParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
			{
				return 0;
			}
			if (func_838(bParam0, 1))
			{
				if (!func_608(bParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					return 0;
				}
				else if (func_609(bParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
				{
					return 0;
				}
			}
		}
		else if (!func_1305(bParam0, &uVar26, 0))
		{
			return 0;
		}
		return 1;
	}
	iVar27 = func_1100(bParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_843(bParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(func_282(bParam4), bParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return 1;
	}
	return 0;
}

int func_1103(bool bParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;

	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(bParam0, &Var0, &iVar41, 20))
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

int func_1104()
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 0);
}

bool func_1105(int iParam0)
{
	return COLLECTION::_0xEC3959E9950BF56B(iParam0);
}

void func_1106(int iParam0)
{
	int iVar0;
	float fVar1;

	if (func_90() != -1)
	{
		return;
	}
	iVar0 = func_1306(iParam0);
	fVar1 = func_1307(iParam0);
	if ((Global_1347477->f_117 || !func_884(31)) || !func_1308(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1309(iVar0) >= 7)
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
	func_1310(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_1051(MISC::_CREATE_VAR_STRING(6, func_1311(iParam0), fVar1), "itemtype_textures", func_1312(iVar0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

bool func_1107(int iParam0)
{
	int iVar0;

	iVar0 = func_1132(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_1108(int iParam0)
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

int func_1109(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_1194(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_INT(&uVar5, &Var0);
	return uVar5;
}

char* func_1110(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_879() >= 12)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_1313(), 12);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_1314(), 12);
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
			else if (func_1145() >= 30)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_POSTED_OBJ", func_1315(), 30);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_FOUND_OBJ", func_1145(), 30);
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
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_1316(), 13);
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
			else if (func_1146() >= 10)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_POSTED_OBJ", func_1317(), 10);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_FOUND_OBJ", func_1146(), 10);
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
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_1109(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

int func_1111(int iParam0, int iParam1, int iParam2)
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

int func_1112(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return 1;
}

int func_1113(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, 0, 0);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, 1);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::_CREATE_VAR_STRING(2, sParam3));
	return 1;
}

int func_1114(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			bVar2 = func_1318(iVar0);
			if (bParam4 == bVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_137(bVar2, 1, 0) || func_1320(func_1319(bVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1118(func_1318(iVar0))), func_1118(func_1318(iVar0)), bVar1, 1, 0);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1145() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1321(iVar0)), func_1321(iVar0), bVar1, 1, 0);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1315() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1321(iVar0)), func_1321(iVar0), bVar1, 1, 0);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1321(iVar0)), func_1321(iVar0), bVar1, 1, 0);
			}
		}
		if (iParam2 == -1531394072)
		{
			bVar2 = func_1156(iParam3, func_1322(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (bParam4 == bVar2)
				{
					bVar1 = (func_1152(bVar2) - iParam7) >= func_1109(iParam3, func_1323(iVar0));
				}
				else
				{
					bVar1 = func_1152(bVar2) >= func_1109(iParam3, func_1323(iVar0));
				}
			}
			else if (bParam4 == bVar2)
			{
				bVar1 = (func_1152(bVar2) + iParam7) >= func_1109(iParam3, func_1323(iVar0));
			}
			else
			{
				bVar1 = func_1152(bVar2) >= func_1109(iParam3, func_1323(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1324(bVar2)), func_1324(bVar2), bVar1, 1, 0);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1325(COLLECTION::_0x126CBEBBA46693CF(iVar0, 1995362678, 0)))
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
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1326(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0))), func_1326(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0)), bVar1, 1, 0);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1146() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1327(iVar0)), func_1327(iVar0), bVar1, 1, 0);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1317() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1327(iVar0)), func_1327(iVar0), bVar1, 1, 0);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1327(iVar0)), func_1327(iVar0), bVar1, 1, 0);
			}
		}
		if (iParam2 == 678508515)
		{
			bVar2 = func_1156(iParam3, func_1322(iVar0));
			if (bParam9)
			{
				if (bParam4 == bVar2)
				{
					bVar1 = (func_1152(bVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1328(bVar2);
				}
			}
			else if (bParam4 == bVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1328(bVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1329(bVar2)), func_1329(bVar2), bVar1, 1, 0);
		}
		iVar0++;
	}
	return 1;
}

int func_1115(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_1316() >= 13)
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

int func_1116(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_725(func_1330(0)) && ((func_1331(0) == 1 || func_1331(0) == 8) || func_1331(0) == 6))
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

var func_1117(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

char* func_1118(bool bParam0)
{
	switch (bParam0)
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

var func_1119(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

int func_1120(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_1121(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_1122(int iParam0)
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

void func_1123(int iParam0)
{
	bool bVar0;

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
			func_1332(1);
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
			func_1333(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_1333(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_1333(3);
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
			func_1334(1);
			break;
		case 34:
			func_1335(1);
			break;
		case 35:
			func_1336(1);
			break;
		case 36:
			break;
		case 37:
			func_1337(0);
			break;
		case 38:
			func_1338(0);
			break;
		case 39:
			func_1339(0);
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
			if ((!&Global_1879534 && func_751()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_1119("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_810(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_751()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_1119("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_810(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_751()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_1119("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_810(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_751()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_1119("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_810(589, 0);
			break;
		case 24:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-200143754, true);
			UNLOCK::_UNLOCK_SET_VISIBLE(-200143754, true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			if (func_90() == -1)
			{
				if (!func_1186(99217379) || func_1340(99217379) == 2110595215)
				{
					if (func_16())
					{
						bVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						bVar0 = 899611344; /* GXTEntry: "Off-Hand Holster" */
					}
					if (!func_137(bVar0, 1, 0))
					{
						func_931(bVar0, 1, 752097756);
					}
					func_910(Global_35, bVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_90() == -1)
			{
				if (!func_137(1013902307, 1, 0))
				{
					func_931(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_90() == -1)
			{
				if (!func_137(1013902307, 1, 0))
				{
					func_931(1013902307, 1, 752097756);
				}
				if (!func_137(142640135, 1, 0))
				{
					func_931(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_90() == -1)
			{
				if (!func_137(786809402, 1, 0))
				{
					func_931(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_90() == -1)
			{
				if (!func_137(786809402, 1, 0))
				{
					func_931(786809402, 1, 752097756);
				}
				if (!func_137(-518019409, 1, 0))
				{
					func_931(-518019409, 1, 752097756);
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
			func_1341();
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

int func_1124(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x865F36299079FB75(bParam0);
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

void func_1125(bool bParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630->f_12)
	{
		return;
	}
	if (WEAPON::_0xC4DEC3CA8C365A5D(bParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (WEAPON::_0xDDC64F5E31EEDAB6(bParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::_0xC212F1D05A8232BB(bParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::_0x0A82317B7EBFC420(bParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::_0xC75386174ECE95D5(bParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	DECORATOR::DECOR_SET_INT(Global_35, sVar0, bParam0);
	iVar2 = func_711();
	func_1000(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_35, sVar1, iVar2);
}

int func_1126(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (func_1342(bParam0))
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
	else if (WEAPON::_0x705BE297EEBDB95D(bParam0))
	{
		if (WEAPON::_0x6AD66548840472E5(bParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = WEAPON::_GET_WEAPON_CLIP_SIZE(bParam0) * 4;
		}
		iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::_0x5C2EA6C44F515F34(bParam0));
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

int func_1127(bool bParam0)
{
	bool bVar0;

	bVar0 = WEAPON::_0x7AA043F6C41D151E(bParam0);
	if (WEAPON::_0x705BE297EEBDB95D(bVar0))
	{
		if (WEAPON::_0x0556E9D2ECF39D01(bVar0))
		{
			if (!func_884(50))
			{
				if (!func_884(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (WEAPON::_0xD955FEE4B87AFA07(bVar0))
		{
			if (!func_884(51))
			{
				if (!func_884(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_1128()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797);
}

int func_1129(int iParam0, bool bParam1, var uParam2)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	if (!func_278(bParam1, 0))
	{
		return 0;
	}
	if (func_279(bParam1) != joaat("clothing"))
	{
		return 0;
	}
	bVar1 = func_90() != -1;
	iVar2 = PED::_GET_METAPED_TYPE(iParam0);
	if (func_840(bParam1) == -999503751)
	{
		return 1;
	}
	iVar4 = func_1343(bParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return 0;
	}
	bVar7 = false;
	bVar8 = bParam1;
	if (func_538(bParam1, 866047851))
	{
		iVar5 = func_1164(iVar4, 1);
		if (func_1344(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5 /*3*/] != bVar8)
		{
			*uParam2 = -265166256; /* GXTEntry: "You are wearing too many of this item. Remove some before equipping more." */
			return 0;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (PED::_GET_PED_COMPONENT(bVar8, iVar2, bVar1) == 2056714954 && PED::_0xFB4891BD7578CDC1(iParam0, -1455751347))
			{
				*uParam2 = 111371848; /* GXTEntry: "Your shirt does not support this type of neckwear." */
				return 0;
			}
			iVar5 = 10;
			iVar3 = func_840(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745; /* GXTEntry: "Your neckwear does not allow for changing your collar." */
				return 0;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] != &Global_1946804->f_57[iVar5 /*11*/] && func_538(bParam1, -1638171711))
			{
				*uParam2 = 187275271; /* GXTEntry: "Your chaps do not support this." */
				return 0;
			}
			break;
		case 1900541263:
			iVar5 = 36;
			if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] == &Global_1946804->f_57[iVar5 /*11*/])
			{
				*uParam2 = 2143522536;
				return 0;
			}
			if (PED::_0xFB4891BD7578CDC1(iParam0, -1968556728))
			{
				*uParam2 = -849690042; /* GXTEntry: "Your boots do not support having spurs." */
				return 0;
			}
			break;
		case -1505978566:
			if (func_1345(1868067663, &uVar0))
			{
				*uParam2 = 939463734; /* GXTEntry: "Item cannot be worn with coats." */
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
				iVar10 = func_1346(bVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1346(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763; /* GXTEntry: "You are wearing too many items. Something must be removed to preview other items." +
    "" */
					return 0;
				}
				Jump @726; //curOff = 583
				iVar3 = func_840(bParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (bParam1 != &Global_1946804->f_57[iVar6 /*11*/] && func_538(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), -1638171711))
				{
					*uParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
					return 0;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] == &Global_1946804->f_57[iVar5 /*11*/])
					{
						*uParam2 = 2143522536;
						return 0;
					}
				}
			}
			*uParam2 = 0;
			return 1;
		}

void func_1130()
{
	PLAYER::_0xFE7C9CF376D23342(PLAYER::PLAYER_ID(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_1131()
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

int func_1132(int iParam0)
{
	if (!func_725(iParam0))
	{
		return -1;
	}
	return func_1347(iParam0);
}

int func_1133()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_137(func_1348(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1134(bool bParam0)
{
	switch (bParam0)
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

int func_1135(int iParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;

	switch (iParam0)
	{
		case -62615415: /* GXTEntry: "Alligator Tooth Talisman" */
			if (bParam1 == 425319238)
			{
				bVar0 = 363594903; /* GXTEntry: "Vintage Civil War Handcuffs" */
				bVar1 = -1217729597; /* GXTEntry: "Gold Jointed Bracelet" */
			}
			else if (bParam1 == 363594903)
			{
				bVar0 = 425319238; /* GXTEntry: "Legendary Alligator Tooth" */
				bVar1 = -1217729597; /* GXTEntry: "Gold Jointed Bracelet" */
			}
			else
			{
				bVar0 = 425319238; /* GXTEntry: "Legendary Alligator Tooth" */
				bVar1 = 363594903; /* GXTEntry: "Vintage Civil War Handcuffs" */
			}
			break;
		case -832719552: /* GXTEntry: "Bear Claw Talisman" */
			if (bParam1 == -1540119664)
			{
				bVar0 = 2100194981; /* GXTEntry: "Quartz Chunk" */
				bVar1 = 446659922; /* GXTEntry: "Silver Chain Bracelet" */
			}
			else if (bParam1 == 2100194981)
			{
				bVar0 = -1540119664; /* GXTEntry: "Legendary Bear Claw" */
				bVar1 = 446659922; /* GXTEntry: "Silver Chain Bracelet" */
			}
			else
			{
				bVar0 = -1540119664; /* GXTEntry: "Legendary Bear Claw" */
				bVar1 = 2100194981; /* GXTEntry: "Quartz Chunk" */
			}
			break;
		case -184823984: /* GXTEntry: "Boar Tusk Talisman" */
			if (bParam1 == -390982951)
			{
				bVar0 = -1018798851; /* GXTEntry: "Cobalt Petrified Wood" */
				bVar1 = -757567246; /* GXTEntry: "Gold Earring" */
			}
			else if (bParam1 == -1018798851)
			{
				bVar0 = -390982951; /* GXTEntry: "Legendary Boar Tusk" */
				bVar1 = -757567246; /* GXTEntry: "Gold Earring" */
			}
			else
			{
				bVar0 = -390982951; /* GXTEntry: "Legendary Boar Tusk" */
				bVar1 = -1018798851; /* GXTEntry: "Cobalt Petrified Wood" */
			}
			break;
		case -1941112926: /* GXTEntry: "Bison Horn Talisman" */
			if (bParam1 == -2054602073)
			{
				bVar0 = -378441099; /* GXTEntry: "Abalone Shell Fragment" */
				bVar1 = -585121677; /* GXTEntry: "Silver Earring" */
			}
			else if (bParam1 == -378441099)
			{
				bVar0 = -2054602073; /* GXTEntry: "Legendary Bison Horn" */
				bVar1 = -585121677; /* GXTEntry: "Silver Earring" */
			}
			else
			{
				bVar0 = -2054602073; /* GXTEntry: "Legendary Bison Horn" */
				bVar1 = -378441099; /* GXTEntry: "Abalone Shell Fragment" */
			}
			break;
	}
	if (func_137(bVar0, 1, 0) && func_137(bVar1, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_1136(bool bParam0)
{
	switch (bParam0)
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

int func_1137(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1349(iParam0);
	if (iVar0 != -15)
	{
		func_1000(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_1350(iVar0, 1);
	}
	return 0;
}

int func_1138(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	bool bVar25;

	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_137(1811977508 /* GXTEntry: "Elk Antler Trinket" */, 1, 0))
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
			bVar25 = &Var1.f_1[iVar24];
			if (func_278(bVar25, 0) && func_538(bVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_1139(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_1140(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_1141(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_1142(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_1143(int iParam0)
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
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;

	iVar0 = 0;
	switch (iParam0)
	{
		case 1:
			bVar9 = 281887510; /* GXTEntry: "Little Egret Plume" */
			bVar10 = -164081697; /* GXTEntry: "Reddish Egret Plume" */
			bVar11 = -1161319399; /* GXTEntry: "Snowy Egret Plume" */
			bVar12 = 728781265; /* GXTEntry: "Lady of the Night Orchid" */
			break;
		case 2:
			bVar9 = -222563712; /* GXTEntry: "Heron Plume" */
			bVar10 = 1794857344; /* GXTEntry: "Lady Slipper Orchid" */
			bVar11 = 1952409553; /* GXTEntry: "Moccasin Flower Orchid" */
			break;
		case 4:
			bVar9 = 2116770557;
			bVar10 = -651064726; /* GXTEntry: "Acuna\'s Star Orchid" */
			bVar11 = -404270094; /* GXTEntry: "Cigar Orchid" */
			bVar12 = 2093126853; /* GXTEntry: "Ghost Orchid" */
			break;
		case 8:
			bVar9 = 2085530337; /* GXTEntry: "Spoonbill Plume" */
			bVar10 = -150591160; /* GXTEntry: "Night Scented Orchid" */
			bVar11 = -323969289; /* GXTEntry: "Rat Tail Orchid" */
			bVar12 = 1504361882; /* GXTEntry: "Spider Orchid" */
			break;
		case 16:
			bVar9 = -1521783510; /* GXTEntry: "Clamshell Orchid" */
			bVar10 = 1714875242; /* GXTEntry: "Dragon\'s Mouth Orchid" */
			bVar11 = 1019229063; /* GXTEntry: "Queen\'s Orchid" */
			bVar12 = 927763737; /* GXTEntry: "Sparrow\'s Egg Orchid" */
			break;
	}
	iVar1 = func_1152(bVar9);
	iVar2 = func_1152(bVar10);
	iVar3 = func_1152(bVar11);
	iVar5 = func_1153(bVar9);
	iVar6 = func_1153(bVar10);
	iVar7 = func_1153(bVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_1152(bVar12);
		iVar8 = func_1153(bVar12);
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

void func_1144(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_1145()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1351(COLLECTION::_0x126CBEBBA46693CF(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1146()
{
	return COLLECTION::_0x5461C821D00FE15A(2103522376, 0);
}

int func_1147(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	switch (iParam0)
	{
		case -949689219:
			if (bParam1 == -1866642239)
			{
				bVar0 = 444160793; /* GXTEntry: "Perfect Squirrel Carcass" */
			}
			else if (bParam1 == 444160793)
			{
				bVar0 = -1866642239; /* GXTEntry: "Perfect Rabbit Carcass" */
			}
			break;
		case -1248968496:
			if (bParam1 == -1969404854)
			{
				bVar0 = 1761263432; /* GXTEntry: "Perfect Rat Carcass" */
				bVar1 = -843795569; /* GXTEntry: "Perfect Woodpecker Carcass" */
			}
			else if (bParam1 == 1761263432)
			{
				bVar0 = -1969404854; /* GXTEntry: "Perfect Cardinal Carcass" */
				bVar1 = -843795569; /* GXTEntry: "Perfect Woodpecker Carcass" */
			}
			else if (bParam1 == -843795569)
			{
				bVar0 = -1969404854; /* GXTEntry: "Perfect Cardinal Carcass" */
				bVar1 = 1761263432; /* GXTEntry: "Perfect Rat Carcass" */
			}
			break;
		case 1706369307:
			if (bParam1 == -832850511)
			{
				bVar0 = -935543049; /* GXTEntry: "Perfect Opossum Carcass" */
				bVar1 = -1464585113; /* GXTEntry: "Perfect Oriole Carcass" */
				bVar2 = -1290897778; /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (bParam1 == -935543049)
			{
				bVar0 = -832850511; /* GXTEntry: "Perfect Chipmunk Carcass" */
				bVar1 = -1464585113; /* GXTEntry: "Perfect Oriole Carcass" */
				bVar2 = -1290897778; /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (bParam1 == -1464585113)
			{
				bVar0 = -832850511; /* GXTEntry: "Perfect Chipmunk Carcass" */
				bVar1 = -935543049; /* GXTEntry: "Perfect Opossum Carcass" */
				bVar2 = -1290897778; /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (bParam1 == -1290897778)
			{
				bVar0 = -832850511; /* GXTEntry: "Perfect Chipmunk Carcass" */
				bVar1 = -935543049; /* GXTEntry: "Perfect Opossum Carcass" */
				bVar2 = -1464585113; /* GXTEntry: "Perfect Oriole Carcass" */
			}
			break;
		case 1520110311:
			if (bParam1 == -100913452)
			{
				bVar0 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				bVar1 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				bVar2 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
				bVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (bParam1 == 313332607)
			{
				bVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				bVar1 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				bVar2 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
				bVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (bParam1 == -124539232)
			{
				bVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				bVar1 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				bVar2 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
				bVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (bParam1 == 102446365)
			{
				bVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				bVar1 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				bVar2 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				bVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (bParam1 == -1882344824)
			{
				bVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				bVar1 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				bVar2 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				bVar3 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
			}
			break;
		case -1992824800:
			if (bParam1 == 905173572)
			{
				bVar0 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				bVar1 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				bVar2 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
				bVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (bParam1 == 1432949803)
			{
				bVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				bVar1 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				bVar2 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
				bVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (bParam1 == -983831788)
			{
				bVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				bVar1 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				bVar2 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
				bVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (bParam1 == 59384454)
			{
				bVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				bVar1 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				bVar2 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				bVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (bParam1 == 924882045)
			{
				bVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				bVar1 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				bVar2 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				bVar3 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
			}
			break;
	}
	if (iParam0 == -949689219)
	{
		if (bParam3)
		{
			if (func_1328(bParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1328(bParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1328(bVar0))
		{
			*iParam2++;
		}
		if (func_1328(bVar0))
		{
			return 1;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1328(bParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1328(bParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1328(bVar0))
		{
			*iParam2++;
		}
		if (func_1328(bVar1))
		{
			*iParam2++;
		}
		if (func_1328(bVar0) && func_1328(bVar1))
		{
			return 1;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1328(bParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1328(bParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1328(bVar0))
		{
			*iParam2++;
		}
		if (func_1328(bVar1))
		{
			*iParam2++;
		}
		if (func_1328(bVar2))
		{
			*iParam2++;
		}
		if ((func_1328(bVar0) && func_1328(bVar1)) && func_1328(bVar2))
		{
			return 1;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1328(bParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1328(bParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1328(bVar0))
		{
			*iParam2++;
		}
		if (func_1328(bVar1))
		{
			*iParam2++;
		}
		if (func_1328(bVar2))
		{
			*iParam2++;
		}
		if (func_1328(bVar3))
		{
			*iParam2++;
		}
		if (((func_1328(bVar0) && func_1328(bVar1)) && func_1328(bVar2)) && func_1328(bVar3))
		{
			return 1;
		}
	}
	return 0;
}

void func_1148(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_1352(1497516462);
			func_1353(2016141805);
			func_1353(1010885152);
			func_1353(-502324015);
			break;
		case 2016141805:
			func_1353(1497516462);
			func_1352(2016141805);
			func_1353(1010885152);
			func_1353(-502324015);
			break;
		case 1010885152:
			func_1353(1497516462);
			func_1353(2016141805);
			func_1352(1010885152);
			func_1353(-502324015);
			break;
		case -502324015:
			func_1353(1497516462);
			func_1353(2016141805);
			func_1353(1010885152);
			func_1352(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_1353(-538889627);
			func_1353(-538880323);
			func_1353(-1056767524);
			func_1352(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_1354();
			func_1352(iParam0);
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
			func_1355();
			func_1352(iParam0);
			break;
		case 2019386373:
			func_1353(-664252410);
			func_1353(2109952320);
			func_1352(2019386373);
			break;
		case -664252410:
			func_1353(2019386373);
			func_1353(2109952320);
			func_1352(-664252410);
			break;
		case 2109952320:
			func_1353(2019386373);
			func_1353(-664252410);
			func_1352(2109952320);
			break;
		case -1674179981:
			func_1353(-1835851517);
			func_1353(-1838352012);
			func_1352(-1674179981);
			break;
		case -1835851517:
			func_1353(-1674179981);
			func_1353(-1838352012);
			func_1352(-1835851517);
			break;
		case -1838352012:
			func_1353(-1674179981);
			func_1353(-1835851517);
			func_1352(-1838352012);
			break;
		case -1717960576:
			func_1353(210001842);
			func_1352(-1717960576);
			break;
		case 210001842:
			func_1353(-1717960576);
			func_1352(210001842);
			break;
		case -150493654:
			func_1353(-1271608261);
			func_1353(1846061697);
			func_1353(-1145519186);
			func_1352(-150493654);
			break;
		case -1271608261:
			func_1353(-150493654);
			func_1353(1846061697);
			func_1353(-1145519186);
			func_1352(-1271608261);
			break;
		case 1846061697:
			func_1353(-150493654);
			func_1353(-1271608261);
			func_1353(-1145519186);
			func_1352(1846061697);
			break;
		case -1145519186:
			func_1353(-150493654);
			func_1353(-1271608261);
			func_1353(1846061697);
			func_1352(-1145519186);
			break;
		case 1766284049:
			func_1353(280705402);
			func_1353(1926308480);
			func_1352(1766284049);
			break;
		case 280705402:
			func_1353(1766284049);
			func_1353(1926308480);
			func_1352(280705402);
			break;
		case 1926308480:
			func_1353(1766284049);
			func_1353(280705402);
			func_1352(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_1353(439465264);
				func_1352(1609506757);
			}
			else
			{
				func_1353(1609506757);
				func_1353(439465264);
			}
			break;
		case 439465264:
			if (func_975(1609506757))
			{
				if (bParam1)
				{
					func_1352(439465264);
				}
				else
				{
					func_1353(439465264);
				}
			}
			break;
		case 1822001510:
			func_1353(-1612662716);
			func_1352(1822001510);
			break;
		case -1612662716:
			func_1353(1822001510);
			func_1352(-1612662716);
			break;
		case 1306158345:
			func_1353(1952610440);
			func_1353(-223469678);
			func_1353(-404698347);
			func_1353(1517904467);
			func_1352(1306158345);
			break;
		case 1952610440:
			func_1353(1306158345);
			func_1353(-223469678);
			func_1353(-404698347);
			func_1353(1517904467);
			func_1352(1952610440);
			break;
		case -223469678:
			func_1353(1306158345);
			func_1353(1952610440);
			func_1353(-404698347);
			func_1353(1517904467);
			func_1352(-223469678);
			break;
		case -404698347:
			func_1353(1306158345);
			func_1353(1952610440);
			func_1353(-223469678);
			func_1353(1517904467);
			func_1352(-404698347);
			break;
		case 1517904467:
			func_1353(1306158345);
			func_1353(1952610440);
			func_1353(-223469678);
			func_1353(-404698347);
			func_1352(1517904467);
			break;
		case 1376646519:
			func_1353(931649776);
			func_1353(-434590080);
			func_1353(1743048395);
			func_1353(449774763);
			func_1352(1376646519);
			break;
		case 931649776:
			func_1353(1376646519);
			func_1353(-434590080);
			func_1353(1743048395);
			func_1353(449774763);
			func_1352(931649776);
			break;
		case -434590080:
			func_1353(1376646519);
			func_1353(931649776);
			func_1353(1743048395);
			func_1353(449774763);
			func_1352(-434590080);
			break;
		case 1743048395:
			func_1353(1376646519);
			func_1353(931649776);
			func_1353(-434590080);
			func_1353(449774763);
			func_1352(1743048395);
			break;
		case 449774763:
			func_1353(1376646519);
			func_1353(931649776);
			func_1353(-434590080);
			func_1353(1743048395);
			func_1352(449774763);
			break;
		case -1414537028:
			func_1353(38162571);
			func_1353(1350391819);
			func_1353(54073871);
			func_1352(-1414537028);
			break;
		case 38162571:
			func_1353(-1414537028);
			func_1353(1350391819);
			func_1353(54073871);
			func_1352(38162571);
			break;
		case 1350391819:
			func_1353(-1414537028);
			func_1353(38162571);
			func_1353(54073871);
			func_1352(1350391819);
			break;
		case 54073871:
			func_1353(-1414537028);
			func_1353(38162571);
			func_1353(1350391819);
			func_1352(54073871);
			break;
		case 198200492:
			func_1352(198200492);
			func_1353(-1124061431);
			func_1353(52706132);
			func_1353(-259123672);
			break;
		case -1124061431:
			func_1353(198200492);
			func_1352(-1124061431);
			func_1353(52706132);
			func_1353(-259123672);
			break;
		case 52706132:
			func_1353(198200492);
			func_1353(-1124061431);
			func_1352(52706132);
			func_1353(-259123672);
			break;
		case -259123672:
			func_1353(198200492);
			func_1353(-1124061431);
			func_1353(52706132);
			func_1352(-259123672);
			break;
		case -919512195:
			func_1352(-919512195);
			func_1353(-1925798111);
			func_1353(420709909);
			func_1353(1703426636);
			break;
		case -1925798111:
			func_1352(-1925798111);
			func_1353(-919512195);
			func_1353(420709909);
			func_1353(1703426636);
			break;
		case 420709909:
			func_1352(420709909);
			func_1353(-919512195);
			func_1353(-1925798111);
			func_1353(1703426636);
			break;
		case 1703426636:
			func_1352(1703426636);
			func_1353(-919512195);
			func_1353(-1925798111);
			func_1353(420709909);
			break;
		case -1223121209:
			func_1352(-1223121209);
			func_1353(630808005);
			break;
		case 630808005:
			func_1352(630808005);
			func_1353(-1223121209);
			break;
		case 1453909576:
			func_1352(1453909576);
			func_1353(1643531967);
			break;
		case 1643531967:
			func_1352(1643531967);
			func_1353(1453909576);
			break;
		case 0:
			func_1352(0);
			func_1353(473295046);
			func_1353(-1738165526);
			break;
		case 473295046:
			func_1352(473295046);
			func_1353(0);
			func_1353(-1738165526);
			break;
		case -1738165526:
			func_1352(-1738165526);
			func_1353(0);
			func_1353(473295046);
			break;
		case 932909855:
			func_1352(932909855);
			func_1353(2051822093);
			break;
		case 2051822093:
			func_1352(2051822093);
			func_1353(932909855);
			break;
		case 405586984:
			func_1352(405586984);
			func_1353(1509509592);
			func_1353(-959357075);
			func_1353(-1311865656);
			break;
		case 1509509592:
			func_1352(1509509592);
			func_1353(405586984);
			func_1353(-959357075);
			func_1353(-1311865656);
			break;
		case -959357075:
			func_1352(-959357075);
			func_1353(1509509592);
			func_1353(405586984);
			func_1353(-1311865656);
			break;
		case -1311865656:
			func_1352(-1311865656);
			func_1353(1509509592);
			func_1353(-959357075);
			func_1353(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_1352(-524145696);
			}
			else
			{
				func_1353(-524145696);
			}
			func_1353(1626481264);
			func_1353(282809459);
			break;
		case 282809459:
			func_1352(282809459);
			func_1353(1626481264);
			func_1353(-524145696);
			break;
		case 1626481264:
			func_1352(1626481264);
			func_1353(-524145696);
			func_1353(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_1352(885203519);
			}
			else
			{
				func_1353(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_1352(-1080627546);
			}
			else
			{
				func_1353(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_975(iParam0))
				{
					func_1352(iParam0);
				}
			}
			else if (func_975(iParam0))
			{
				func_1353(iParam0);
			}
			break;
	}
}

void func_1149(int iParam0)
{
	if (!func_1356(iParam0))
	{
		func_1358(func_1357(iParam0));
	}
}

int func_1150()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1356(COLLECTION::_0x126CBEBBA46693CF(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1151(bool bParam0, int iParam1, int iParam2)
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
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;

	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			bVar9 = 281887510; /* GXTEntry: "Little Egret Plume" */
			bVar10 = -164081697; /* GXTEntry: "Reddish Egret Plume" */
			bVar11 = -1161319399; /* GXTEntry: "Snowy Egret Plume" */
			bVar12 = 728781265; /* GXTEntry: "Lady of the Night Orchid" */
			break;
		case 2:
			bVar9 = -222563712; /* GXTEntry: "Heron Plume" */
			bVar10 = 1794857344; /* GXTEntry: "Lady Slipper Orchid" */
			bVar11 = 1952409553; /* GXTEntry: "Moccasin Flower Orchid" */
			break;
		case 4:
			bVar9 = 2116770557;
			bVar10 = -651064726; /* GXTEntry: "Acuna\'s Star Orchid" */
			bVar11 = -404270094; /* GXTEntry: "Cigar Orchid" */
			bVar12 = 2093126853; /* GXTEntry: "Ghost Orchid" */
			break;
		case 8:
			bVar9 = 2085530337; /* GXTEntry: "Spoonbill Plume" */
			bVar10 = -150591160; /* GXTEntry: "Night Scented Orchid" */
			bVar11 = -323969289; /* GXTEntry: "Rat Tail Orchid" */
			bVar12 = 1504361882; /* GXTEntry: "Spider Orchid" */
			break;
		case 16:
			bVar9 = -1521783510; /* GXTEntry: "Clamshell Orchid" */
			bVar10 = 1714875242; /* GXTEntry: "Dragon\'s Mouth Orchid" */
			bVar11 = 1019229063; /* GXTEntry: "Queen\'s Orchid" */
			bVar12 = 927763737; /* GXTEntry: "Sparrow\'s Egg Orchid" */
			break;
	}
	iVar1 = func_1152(bVar9);
	iVar2 = func_1152(bVar10);
	iVar3 = func_1152(bVar11);
	iVar5 = func_1153(bVar9);
	iVar6 = func_1153(bVar10);
	iVar7 = func_1153(bVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1152(bVar12);
		iVar8 = func_1153(bVar12);
	}
	if (bParam0 == bVar9)
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
	if (bParam0 == bVar10)
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
	if (bParam0 == bVar11)
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
		if (bParam0 == bVar12)
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

int func_1152(bool bParam0)
{
	int iVar0;

	if (func_137(bParam0, 1, 0))
	{
		iVar0 = func_136(bParam0, 0, 0);
	}
	return iVar0;
}

int func_1153(bool bParam0)
{
	switch (bParam0)
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

int func_1154(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0);
}

void func_1155(int iParam0, int iParam1)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, iParam1);
}

int func_1156(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_1194(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	return uVar5;
}

void func_1157(bool bParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((bParam0 == func_1156(iParam1, 5) || bParam0 == func_1156(iParam1, 6)) || bParam0 == func_1156(iParam1, 7)) || bParam0 == func_1156(iParam1, 8)) || bParam0 == func_1156(iParam1, 9))
	{
		func_1147(iParam1, bParam0, &sParam2, 0, iParam3, bParam4);
		func_880(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_882(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1158(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 1;
	if ((((bParam0 == func_1156(iParam1, 5) || bParam0 == func_1156(iParam1, 6)) || bParam0 == func_1156(iParam1, 7)) || bParam0 == func_1156(iParam1, 8)) || bParam0 == func_1156(iParam1, 9))
	{
		if (func_1147(iParam1, bParam0, &iVar0, 0, 0, 0))
		{
			func_880(51, bParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_882(51, 0, 0, iVar0, func_1109(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_880(51, bParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_882(51, 0, 0, iVar0, func_1109(iParam1, 20), 1, 0);
			}
		}
	}
}

int func_1159()
{
	if (func_1107(((*Global_1347702)[37 /*49*/])->f_15) && Global_1392388->f_7)
	{
		return 1;
	}
	return 0;
}

void func_1160(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
}

void func_1161(int iParam0)
{
	if (!func_1359(iParam0))
	{
		COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	}
}

void func_1162(int iParam0)
{
	COLLECTION::_0x398FAB9C96A81924(iParam0, 1);
}

int func_1163(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1946804->f_57[iVar0 /*11*/])->f_8 == iParam0)
		{
			return func_1360(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_1164(int iParam0, int iParam1)
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

int func_1165(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_1361();
	if (iParam2 == 39)
	{
		Var0 = { func_606(bParam0, 1, 0) };
		iParam2 = func_1164(func_1163(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return 0;
	}
	if (func_538(bParam0, 866047851) && func_1344(&(Global_1946804->f_1378)) >= 2)
	{
		return 0;
	}
	if ((func_1168(32768) && iParam2 == 10) && bParam0 != &Global_1946804->f_57[iParam2 /*11*/])
	{
		func_1362(func_1360(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1363(iParam2);
	func_1364(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && (Global_1946804->f_57[iParam2 /*11*/])->f_1 > 1)
	{
		func_1365(Global_1946804->f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_1365(Global_1946804->f_1497.f_1[iParam2 /*3*/], 4, 6);
	}
	func_1366(&(Global_1946804->f_1378), bParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = (Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2 /*3*/] = bParam0;
	(Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1 = func_1367(bParam0, iParam2, iParam1, func_90() != -1);
	if (bParam4)
	{
		func_1368(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1368(&(Global_1946804->f_1378), 1, 0);
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
				func_1369(func_1360(&(Global_1946804->f_2589.f_2[iVar6 /*2*/]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return 1;
}

void func_1166(bool bParam0, bool bParam1, bool bParam2)
{
	func_1370(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

void func_1167(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_1371(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = bParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1372(Var0);
}

bool func_1168(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_1169()
{
	func_1373(&(Global_1946804->f_2776));
	func_1374(32768);
	func_1369(1108822547, 8, 6);
}

int func_1170(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_1164(iParam0, 1);
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

void func_1171(int iParam0)
{
	struct<4> Var0;

	if (func_1375(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1376(Var0);
}

void func_1172(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;

	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1376(Var0);
}

float func_1173()
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

	if (func_1377())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1378(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1378(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1379();
	fVar2 = func_1380();
	fVar3 = func_1381();
	fVar4 = func_1382();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1383()));
	fVar7 = (func_1378(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1384(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1385(3, fVar9, fVar9 > 100f);
	return func_1386(fVar7, -100f, 100f);
}

float func_1174()
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

	if (func_1377())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1378(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1378(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1379();
	fVar2 = func_1380();
	fVar3 = func_1381();
	fVar4 = func_1382();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1383()));
	fVar7 = (func_1378(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1384(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1385(2, fVar9, fVar9 > 100f);
	return func_1386(fVar7, -100f, 100f);
}

float func_1175()
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

	if (func_1377())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1378(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1387())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1388())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1378(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1379();
	fVar2 = func_1380();
	fVar3 = func_1381();
	fVar4 = func_1382();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1383()));
	fVar7 = (func_1378(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1384(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1385(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_0x0317C947D062854E(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_1378(0);
	}
	return func_1386(fVar7, -100f, 100f);
}

bool func_1176(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_1177(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_1178(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_278(bParam0, 0))
	{
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_1102(bParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_612(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_282(0), uParam1, uParam2, bParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_1179(int iParam0, bool bParam1)
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
				return func_1389();
			}
			break;
	}
	return 0;
}

int func_1180(bool bParam0)
{
	switch (bParam0)
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

int func_1181(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return 0;
	}
	return 1;
}

void func_1182(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	if (!func_1181(iParam0))
	{
		return;
	}
	if (func_1390(iParam0))
	{
		return;
	}
	if (!func_1391(iParam0))
	{
		func_1392(iParam0, 1, 0);
	}
	bVar0 = func_1393(iParam0);
	if (bVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1394(iParam0, 512))
		{
			func_1167(30, bVar0, 0, 0, 0);
		}
	}
	if ((!func_1395() && !bParam1) && !func_475(0, 0, 1))
	{
		func_71(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_DONE", MISC::_CREATE_VAR_STRING(0, bVar0)), 10000, 0, 0, 0, 1);
	}
	func_1396(iParam0, 6);
	if (bParam2)
	{
		if (!func_475(0, 0, 1))
		{
			func_510(1, 4);
		}
	}
}

int func_1183()
{
	return Global_1946804->f_1;
}

bool func_1184(int iParam0, bool bParam1)
{
	return func_1179(iParam0, 0) < func_1397(iParam0, bParam1);
}

int func_1185(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		bVar1 = &Global_1946804->f_2657[iVar0];
		if (func_840(bVar1) == iParam0)
		{
			*iParam1 = bVar1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_1186(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_1164(iParam0, 1) /*3*/] != &Global_1946804->f_57[func_1164(iParam0, 1) /*11*/];
}

void func_1187(int iParam0, bool bParam1)
{
	if (func_538(bParam1, 130796156))
	{
		func_1398(bParam1, 0);
	}
	else if (func_538(bParam1, 930141731))
	{
		func_1398(bParam1, 1);
		func_1399(iParam0);
	}
}

void func_1188(var uParam0, int iParam1)
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

int func_1189(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_1400(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1401(uParam2, iParam0, Var1);
	return 1;
}

int func_1190(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_1191(int iParam0)
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

int func_1192(bool bParam0)
{
	var uVar0;

	if (!func_1402(bParam0, &uVar0, joaat("inventory"), 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

int func_1193()
{
	return 0;
}

int func_1194(int iParam0, var uParam1)
{
	if (!func_1403(iParam0))
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

int func_1195()
{
	if (func_1128())
	{
		return DLC::_0x1DB9D61E505AE3FC();
	}
	return 0;
}

void func_1196(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1404((Global_40.f_4283.f_325 + iParam0));
}

void func_1197(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1195())
	{
		func_1051(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
	else
	{
		func_1051(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
}

void func_1198(int iParam0)
{
	int iVar0;
	var uVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;

	iParam0 = func_498(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_665(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		uVar1 = func_1405(iVar6);
		if (!PED::_0x608BC6A6AACD5036(&Var2, iVar0, uVar1, 0))
		{
		}
		else
		{
			iVar7 = Var2.f_3;
			if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
			}
			else if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar7) && !ENTITY::_0x88AD6CC10D8D35B2(iVar7))
			{
			}
			else
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar7))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar7, true, true);
				}
				ENTITY::_0x0D0DB2B6AF19A987(&iVar7);
			}
		}
		iVar6++;
	}
}

int func_1199(int iParam0)
{
	if (!func_1406(iParam0))
	{
		return 0;
	}
	if (!func_1407())
	{
		return 1;
	}
	return 0;
}

void func_1200(int iParam0, int iParam1)
{
	iParam0 = func_498(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0 /*45*/] = iParam1;
}

void func_1201(var uParam0)
{
	*uParam0 = -377364164; /* GXTEntry: "Natural" */
	uParam0->f_1 = 357708345; /* GXTEntry: "Natural" */
}

void func_1202(int iParam0, struct<2> Param1)
{
	iParam0 = func_498(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_1408(iParam0, Param1))
	{
	}
	if (!func_1409(iParam0, Param1.f_1))
	{
	}
}

void func_1203(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_1410((*uParam0)[iVar0 /*94*/]);
		iVar0++;
	}
}

void func_1204(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_1205(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		(*uParam0)[iVar0 /*5*/] = 0;
		((*uParam0)[iVar0 /*5*/])->f_1 = 0;
		((*uParam0)[iVar0 /*5*/])->f_2 = 0;
		((*uParam0)[iVar0 /*5*/])->f_3 = 0;
		((*uParam0)[iVar0 /*5*/])->f_4 = 0;
		iVar0++;
	}
}

void func_1206(var uParam0)
{
	int iVar0;

	uParam0->f_1 = 0f;
	*uParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (iVar0 == -1)
		{
		}
		else
		{
			uParam0->f_2[iVar0] = 0f;
		}
		iVar0++;
	}
}

void func_1207(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_1208(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	if (iParam0 == 2)
	{
		iVar0 = 50;
	}
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_1209(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1f;
}

void func_1210(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_1211(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

int func_1212(int iParam0)
{
	switch (iParam0)
	{
		case 2025841068:
			return 0;
		case 822658194:
			return 1;
		case 1308232528:
			return 2;
		case 1835499550:
			return 3;
		case 476637847:
			return 4;
		case -120156735:
			return 6;
		case 1645618177:
			return 7;
		case -512529193:
			return 8;
		case 131399519:
			return 9;
		case 178647645:
			return 10;
		case -864275692:
			return 11;
		case 1684533001:
			return 12;
		case -2066240242:
			return 13;
		case -2145992129:
			return 14;
		case -108848014:
			return 15;
		case 892930832:
			return 16;
		default:
			break;
	}
	return -1;
}

void func_1213(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1900383->f_508), Global_40.f_1095.f_1[iParam1 /*436*/], 436);
	MISC::_COPY_MEMORY(Global_40.f_1095.f_1[iParam1 /*436*/], Global_40.f_1095.f_1[iParam0 /*436*/], 436);
	MISC::_COPY_MEMORY(Global_40.f_1095.f_1[iParam0 /*436*/], &(Global_1900383->f_508), 436);
}

void func_1214(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1900383->f_463), (*Global_1900383)[iParam1 /*45*/], 45);
	MISC::_COPY_MEMORY((*Global_1900383)[iParam1 /*45*/], (*Global_1900383)[iParam0 /*45*/], 45);
	MISC::_COPY_MEMORY((*Global_1900383)[iParam0 /*45*/], &(Global_1900383->f_463), 45);
}

int func_1215(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;
	bool bVar58;
	int iVar59;

	Var0.f_9 = -1591664384;
	Var29.f_9 = -1591664384;
	if (!func_1411(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_1411(iParam1, &Var29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_1412(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_1413(Var0, Var0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_1414(Var0, Var29, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_1216(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (func_1415(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
	}
	PED::_0xBCC76708E5677E1D(iParam0, 0);
	PED::_0x931B241409216C1F(Global_35, iParam0, 0);
	PED::_0xB8B6430EAD2D2437(iParam0, 130495496);
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar2 = PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iVar1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iVar2);
	ENTITY::SET_ENTITY_INVINCIBLE(iParam0, false);
	POPULATION::_0xF74E134F40192884(iParam0, 1);
	PED::_0xFD6943B6DF77E449(iParam0, false);
	PLAYER::_0xDF93973251FB2CA5(iVar0, 1);
	PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
	FLOCK::_0xAEB97D84CDF3C00B(iParam0, 0);
	if (func_233(iParam0))
	{
		iVar3 = func_234(iParam0);
		if (func_1416(iVar3))
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 324, true);
		}
	}
	PED::SET_PED_CONFIG_FLAG(iParam0, 211, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 208, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 209, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 400, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 136, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 312, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 113, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 277, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 319, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 6, true);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 25, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 24, false);
}

int func_1217()
{
	return Global_1900383->f_393;
}

void func_1218(int iParam0)
{
	Global_1900383->f_393 = iParam0;
}

int func_1219(var uParam0, int iParam1, var uParam2)
{
	bool bVar0;

	*uParam0 = 0;
	*iParam1 = 0;
	*uParam2 = 0;
	if (func_751())
	{
		if (func_629())
		{
			bVar0 = false;
			if (!func_895(((*Global_1835011)[15 /*74*/])->f_1, 1) && !func_884(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*uParam0 = func_1417();
				*iParam1 = func_1418();
				*uParam2 = func_1419();
				return 1;
			}
			else
			{
				*uParam0 = func_1420();
				*iParam1 = func_1421();
				*uParam2 = func_1422();
				return 1;
			}
		}
		else if (func_16())
		{
			if (!func_895(((*Global_1835011)[60 /*74*/])->f_1, 1))
			{
				*uParam0 = func_1423();
				*iParam1 = func_1424();
				*uParam2 = func_1425();
				return 1;
			}
			else
			{
				*uParam0 = func_1426();
				*iParam1 = func_1427();
				*uParam2 = func_1428();
				return 1;
			}
		}
	}
	else if (func_629())
	{
		*uParam0 = func_1429();
		*iParam1 = func_1430();
		*uParam2 = func_1431();
		return 1;
	}
	else if (func_16())
	{
		*uParam0 = func_1432();
		*iParam1 = func_1433();
		*uParam2 = func_1434();
		return 1;
	}
	return 0;
}

void func_1220(int iParam0, var uParam1)
{
	iParam0 = func_498(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_8 = uParam1;
}

void func_1221(int iParam0, var uParam1)
{
	iParam0 = func_498(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_9 = uParam1;
}

void func_1222(int iParam0, var uParam1)
{
	iParam0 = func_498(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_10 = uParam1;
}

void func_1223(int iParam0, int iParam1)
{
	iParam0 = func_498(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_14 = iParam1;
}

void func_1224(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	var uVar7;

	iParam0 = func_498(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_953(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		func_1219(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iParam1));
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372 = iParam1;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1 = fVar4;
	func_1435(iParam1);
	iVar5 = func_665(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar5) || PED::IS_PED_INJURED(iVar5))
	{
		return;
	}
	iVar6 = BUILTIN::FLOOR((Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1);
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(iVar5, 7, iVar6);
	uVar7 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar5, 7);
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372 = uVar7;
	PED::_0xA69899995997A63B(iVar5, uVar7);
}

void func_1225(int iParam0, int iParam1)
{
	iParam0 = func_498(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_24 = (((*Global_1900383)[iParam0 /*45*/])->f_24 || iParam1);
}

int func_1226(int iParam0, var uParam1)
{
	struct<4> Var0;

	Var0.f_9 = -1591664384;
	if (!func_1411(iParam0, &Var0))
	{
		return 0;
	}
	*uParam1 = func_1436(Var0, 1415981582, 0);
	if (!func_278(*uParam1, 0))
	{
		return 0;
	}
	return 1;
}

int func_1227(int iParam0, var uParam1)
{
	struct<4> Var0;

	Var0.f_9 = -1591664384;
	if (!func_1411(iParam0, &Var0))
	{
		return 0;
	}
	*uParam1 = func_1436(Var0, -2119169513, 0);
	if (!func_278(*uParam1, 0))
	{
		return 0;
	}
	return 1;
}

int func_1228(int iParam0, var uParam1)
{
	struct<4> Var0;

	if (!func_1437(856287005, iParam0))
	{
		return 0;
	}
	Var0 = { func_1438() };
	*uParam1 = func_1436(Var0, iParam0, 0);
	if (!func_278(*uParam1, 0))
	{
		return 0;
	}
	return 1;
}

void func_1229(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	PED::_0xDF631E4BCE1B1FC4(iParam0, -1442703445, 0, 0);
	PED::_0xDF631E4BCE1B1FC4(iParam0, -1505972720, 0, 0);
}

void func_1230(int iParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	func_1439(iParam0, *uParam1);
	func_1439(iParam0, uParam1->f_1);
}

void func_1231(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	PED::_0xDF631E4BCE1B1FC4(iParam0, 399422490, 0, 0);
	PED::_0xDF631E4BCE1B1FC4(iParam0, joaat("HORSE_SADDLES"), 0, 0);
	PED::_0xDF631E4BCE1B1FC4(iParam0, 88372018, 0, 0);
	PED::_0xDF631E4BCE1B1FC4(iParam0, -630346294, 0, 0);
	PED::_0xDF631E4BCE1B1FC4(iParam0, -273475295, 0, 0);
	PED::_0xDF631E4BCE1B1FC4(iParam0, -2142954459, 0, 0);
}

void func_1232(int iParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	func_1439(iParam0, *uParam1);
	func_1439(iParam0, uParam1->f_1);
	func_1439(iParam0, uParam1->f_2);
	func_1439(iParam0, uParam1->f_3);
	func_1439(iParam0, uParam1->f_4);
	func_1439(iParam0, uParam1->f_5);
}

int func_1233(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, iVar0))
	{
		return 0;
	}
	PED::_SET_PED_BODY_COMPONENT(iParam0, iParam1);
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, 1, 1, 1, 1, 0);
	}
	return 1;
}

int func_1234(int iParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;

	fVar0 = 999999.9f;
	iVar1 = -1;
	iVar2 = 0;
	while (iVar2 < 150)
	{
		if (((*Global_1888801)[iVar2 /*35*/])->f_20 == iParam0)
		{
			if (!(bParam2 && iVar2 == Global_1894899->f_2))
			{
				if (!bParam1 || func_1440(iVar2))
				{
					vVar3 = { VOLUME::_0xF70F00013A62F866(((*Global_1888801)[iVar2 /*35*/])->f_3) };
					fVar6 = BUILTIN::VDIST(vVar3, Global_36);
					if (fVar6 < fVar0)
					{
						iVar1 = iVar2;
						fVar0 = fVar6;
					}
				}
			}
		}
		iVar2++;
	}
	return iVar1;
}

int func_1235(int iParam0)
{
	if (func_243(iParam0))
	{
		return (Global_17503.f_42[iParam0 /*8*/])->f_4;
	}
	return 0;
}

int func_1236(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;

	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam0)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	iVar4 = BUILTIN::ROUND((((fVar0 + (60f * fVar1)) + (3600f * fVar2)) + (86400f * fVar3)));
	return iVar4;
}

int func_1237(int iParam0, int iParam1)
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

bool func_1238(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return ((Global_1393237->f_11[iParam0 /*30*/])->f_10 && iParam1) != 0;
}

void func_1239(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	(Global_1393237->f_11[iParam0 /*30*/])->f_10 = ((Global_1393237->f_11[iParam0 /*30*/])->f_10 || iParam1);
}

int func_1240(int iParam0)
{
	switch (iParam0)
	{
		case 6:
		case 53:
		case 101:
		case 108:
			return 1;
		default:
			break;
	}
	return 0;
}

char* func_1241(int iParam0)
{
	char* sVar0;

	if (iParam0 == 255)
	{
		if (func_1441(37, iParam0))
		{
			return HUD::_0xD8402B858F4DDD88(&(Global_1109400->f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1109400->f_12)));
		}
		else
		{
			return PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID());
		}
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return "";
	}
	sVar0 = "";
	if (!&Global_1225638->f_21[iParam0])
	{
		return sVar0;
	}
	if (func_1441(37, iParam0))
	{
		return HUD::_0xD8402B858F4DDD88(&(((*Global_1108178)[iParam0 /*37*/])->f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(((*Global_1108178)[iParam0 /*37*/])->f_12)));
	}
	return PLAYER::GET_PLAYER_NAME(&(Global_1225638->f_120[iParam0]));
}

char* func_1242(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_1093(MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_1243(int iParam0)
{
	iParam0 = func_498(iParam0);
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

bool func_1244(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

bool func_1245(int iParam0)
{
	return iParam0 > -1;
}

int func_1246(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return 0;
	}
	return 1;
}

int func_1247(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_673(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_1248(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_1249(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_1250(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_1251(int iParam0, int iParam1)
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

void func_1252(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1442(iParam0, iParam6);
	func_1443(iParam0, iParam5);
	func_1444(iParam0, iParam4);
	func_1445(iParam0, iParam3);
	func_1446(iParam0, iParam2);
	func_1447(iParam0, iParam1);
}

int func_1253()
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

var func_1254(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_1255(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_1256(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_1256(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_1257(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_1258(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_1259()
{
	return Global_40.f_11095.f_35;
}

void func_1260(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_1448(bParam1);
	}
}

void func_1261(int iParam0)
{
	COMPAPP::_0x74BCCEB233AD95B2(-156028329, iParam0);
}

char* func_1262(int iParam0)
{
	if (iParam0 <= -320)
	{
		return "HONOR_BAD_8";
	}
	else if (iParam0 <= -280)
	{
		return "HONOR_BAD_7";
	}
	else if (iParam0 <= -240)
	{
		return "HONOR_BAD_6";
	}
	else if (iParam0 <= -200)
	{
		return "HONOR_BAD_5";
	}
	else if (iParam0 <= -160)
	{
		return "HONOR_BAD_4";
	}
	else if (iParam0 <= -120)
	{
		return "HONOR_BAD_3";
	}
	else if (iParam0 <= -80)
	{
		return "HONOR_BAD_2";
	}
	else if (iParam0 < 0)
	{
		return "HONOR_BAD_1";
	}
	else if (iParam0 <= 40)
	{
		return "HONOR_GOOD_1";
	}
	else if (iParam0 >= 320)
	{
		return "HONOR_GOOD_8";
	}
	else if (iParam0 >= 280)
	{
		return "HONOR_GOOD_7";
	}
	else if (iParam0 >= 240)
	{
		return "HONOR_GOOD_6";
	}
	else if (iParam0 >= 200)
	{
		return "HONOR_GOOD_5";
	}
	else if (iParam0 >= 160)
	{
		return "HONOR_GOOD_4";
	}
	else if (iParam0 >= 120)
	{
		return "HONOR_GOOD_3";
	}
	else if (iParam0 >= 80)
	{
		return "HONOR_GOOD_2";
	}
	return "HONOR_GOOD_1";
}

int func_1263(int iParam0)
{
	vector3 vVar0;

	if (!func_1194(23, &vVar0))
	{
		return 0;
	}
	vVar0.f_2 = 1781729525;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar0.f_1), &vVar0))
	{
		vVar0.f_2 = -2103982008;
		*iParam0 = DATAFILE::_DATAFILE_GET_NUM_NODES(&vVar0);
		return 1;
	}
	return 0;
}

int func_1264(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	var uVar5;

	if (!func_1194(23, &Var0))
	{
		return 0;
	}
	Var0.f_2 = 1781729525;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -57097983;
		Var0.f_3 = iParam0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 2027336698;
			DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
			*iParam1 = uVar5;
			Var0.f_2 = 316053773;
			DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
			*iParam2 = uVar5;
			return 1;
		}
	}
	return 0;
}

bool func_1265(bool bParam0)
{
	return bParam0;
}

int func_1266()
{
	int iVar0;

	iVar0 = func_1042();
	switch (iVar0)
	{
		case 120:
		case 160:
		case 200:
			return -608161198;
		case 240:
		case 280:
		case 320:
			return -2132502231;
		default:
			break;
	}
	return -1130204298;
}

void func_1267(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

int func_1268(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return 0;
	}
	return 1;
}

int func_1269(int iParam0, int iParam1, var uParam2)
{
	if (!func_1268(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			*iParam1 = -816321659;
			*uParam2 = -987026056;
			break;
		case 1:
			*iParam1 = -816321659;
			*uParam2 = -1822602787;
			break;
		case 2:
			*iParam1 = -816321659;
			*uParam2 = -1602329569;
			break;
		case 3:
			*iParam1 = -816321659;
			*uParam2 = 1881899898;
			break;
		case 4:
			*iParam1 = -816321659;
			*uParam2 = -1906196506;
			break;
		case 5:
			*iParam1 = -816321659;
			*uParam2 = -674995867;
			break;
		case 6:
			*iParam1 = -816321659;
			*uParam2 = -734156617;
			break;
		case 7:
			*iParam1 = -816321659;
			*uParam2 = 261758426;
			break;
		case 8:
			*iParam1 = -816321659;
			*uParam2 = 1545586131;
			break;
		case 9:
			*iParam1 = -816321659;
			*uParam2 = -489125522;
			break;
		case 10:
			*iParam1 = -816321659;
			*uParam2 = 1190367681;
			break;
		case 11:
			*iParam1 = -816321659;
			*uParam2 = -1179367301;
			break;
		case 12:
			*iParam1 = -816321659;
			*uParam2 = 1154513253;
			break;
		case 13:
			*iParam1 = -816321659;
			*uParam2 = -1825640214;
			break;
		case 14:
			*iParam1 = -816321659;
			*uParam2 = 1209829059;
			break;
		case 15:
			*iParam1 = -816321659;
			*uParam2 = -1713230487;
			break;
		case 16:
			*iParam1 = -816321659;
			*uParam2 = 2092309893;
			break;
		default:
			return 0;
	}
	return 1;
}

int func_1270(int iParam0, int* iParam1)
{
	bool bVar0;
	bool bVar1;

	if (iParam1->f_11 & 1 != 0)
	{
		if (PED::_0x9682F850056C9ADE(iParam0))
		{
			return 1;
		}
	}
	if (iParam1->f_11 & 2 != 0)
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 1;
		}
	}
	bVar0 = iParam1->f_11 & 4 != false;
	bVar1 = iParam1->f_11 & 8 != false;
	if (bVar0 || bVar1)
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, func_1449((bVar1 && !bVar0), Global_35, 0)))
		{
			return 1;
		}
	}
	return 0;
}

void func_1271(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_1287((*uParam0)[iVar0 /*17*/]))
		{
			func_360((*uParam0)[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_1272(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		((*uParam2)[iVar0 /*17*/])->f_8 = 6;
		func_1450(iParam0, (*uParam2)[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_503(((*uParam2)[iVar0 /*17*/])->f_6))
		{
			func_360((*uParam2)[iVar0 /*17*/], 11);
			return ((*Global_1945938)[((*uParam2)[iVar0 /*17*/])->f_6 /*18*/])->f_3;
		}
	}
	return 0;
}

int func_1273(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_246(*uParam0);
	iVar1 = 2;
	switch (iVar0)
	{
		case 2:
			iVar1 = 295425337; /* GXTEntry: "Lemoyne Raider" */
			break;
		case 1:
			iVar1 = 768137552; /* GXTEntry: "Murfree Brood" */
			break;
		case 0:
			iVar1 = 1415388528; /* GXTEntry: "O\'Driscoll Boy" */
			break;
		case 4:
			iVar1 = 1449436544; /* GXTEntry: "Laramie" */
			break;
		case 3:
			iVar1 = -1807204482; /* GXTEntry: "Skinner Brother" */
			break;
		case 5:
			iVar1 = -1096701282; /* GXTEntry: "Del Lobo" */
			break;
	}
	return iVar1;
}

int func_1274(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (((*uParam0)[iVar0 /*17*/])->f_7 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1275(int* iParam0, int* iParam1)
{
	if (!func_1058(iParam0, 23))
	{
		if (iParam1->f_7 == joaat("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_360(iParam1, 19);
			func_1289(iParam0, 23);
			func_1451(iParam1, 2);
		}
	}
}

int func_1276(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_1452(16))
	{
		return Global_1935630->f_58 == iParam0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar0, bParam2, bParam3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar0))
				{
					func_1453(16);
					Global_1935630->f_58 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					if (Global_1935630->f_58 == iParam0)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_1277(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_1450(iParam0, (*uParam1)[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT((*uParam1)[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_1278(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_1279(int iParam0)
{
	return (func_1454(iParam0, 4) || func_1454(iParam0, 5));
}

bool func_1280(int iParam0)
{
	return func_1454(iParam0, 7);
}

bool func_1281(int iParam0)
{
	return func_1454(iParam0, 6);
}

void func_1282(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_1287(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_1450(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_1283(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_1455(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_1079(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_1081(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_1081(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_1456(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

int func_1284(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_1457(iParam1, 1))
		{
			return 1;
		}
	}
	else if (func_1458(iParam1, 1))
	{
		func_1459(iParam1, 1);
		return 1;
	}
	return 0;
}

int func_1285(int* iParam0, float fParam1, bool bParam2)
{
	if (iParam0->f_2 != 3)
	{
		if (bParam2 || fParam1 > 0f)
		{
			return 1;
		}
	}
	return 0;
}

void func_1286(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

int func_1287(int* iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_5))
	{
		return 1;
	}
	return 0;
}

int func_1288(int iParam0)
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
				case 1387172233:
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
										return 1;
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
	return 0;
}

void func_1289(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

int func_1290(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_1291(int iParam0, int iParam1)
{
	if (func_90() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_1292(int iParam0)
{
	if (func_90() != -1)
	{
		if (func_1176(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_1176(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_1293(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_1176(iParam0, 65536) && !func_1176(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1176(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_1176(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_1294(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_1295()
{
	return Global_1905944->f_5694;
}

int func_1296(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_1297(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 - (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1));
}

void func_1298(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_1244(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
		}
	}
}

void func_1299(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
	}
}

void func_1300(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

void func_1301(bool bParam0)
{
	if (bParam0)
	{
		func_119(&(Global_40.f_12018.f_42), 1);
	}
	else
	{
		func_118(&(Global_40.f_12018.f_42), 1);
	}
}

int func_1302(bool bParam0, int iParam1, int iParam2)
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
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;

	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			bVar9 = 281887510; /* GXTEntry: "Little Egret Plume" */
			bVar10 = -164081697; /* GXTEntry: "Reddish Egret Plume" */
			bVar11 = -1161319399; /* GXTEntry: "Snowy Egret Plume" */
			bVar12 = 728781265; /* GXTEntry: "Lady of the Night Orchid" */
			break;
		case 2:
			bVar9 = -222563712; /* GXTEntry: "Heron Plume" */
			bVar10 = 1794857344; /* GXTEntry: "Lady Slipper Orchid" */
			bVar11 = 1952409553; /* GXTEntry: "Moccasin Flower Orchid" */
			break;
		case 4:
			bVar9 = 2116770557;
			bVar10 = -651064726; /* GXTEntry: "Acuna\'s Star Orchid" */
			bVar11 = -404270094; /* GXTEntry: "Cigar Orchid" */
			bVar12 = 2093126853; /* GXTEntry: "Ghost Orchid" */
			break;
		case 8:
			bVar9 = 2085530337; /* GXTEntry: "Spoonbill Plume" */
			bVar10 = -150591160; /* GXTEntry: "Night Scented Orchid" */
			bVar11 = -323969289; /* GXTEntry: "Rat Tail Orchid" */
			bVar12 = 1504361882; /* GXTEntry: "Spider Orchid" */
			break;
		case 16:
			bVar9 = -1521783510; /* GXTEntry: "Clamshell Orchid" */
			bVar10 = 1714875242; /* GXTEntry: "Dragon\'s Mouth Orchid" */
			bVar11 = 1019229063; /* GXTEntry: "Queen\'s Orchid" */
			bVar12 = 927763737; /* GXTEntry: "Sparrow\'s Egg Orchid" */
			break;
	}
	iVar1 = func_1152(bVar9);
	iVar2 = func_1152(bVar10);
	iVar3 = func_1152(bVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1152(bVar12);
	}
	iVar5 = func_1153(bVar9);
	iVar6 = func_1153(bVar10);
	iVar7 = func_1153(bVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_1153(bVar12);
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

int func_1303(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_278(bParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(bParam0, iParam1, &Var0))
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

int func_1304(bool bParam0)
{
	if (!func_278(*bParam0, 0))
	{
		return 0;
	}
	switch (*bParam0)
	{
		case -1073808995: /* GXTEntry: "Live Crickets" */
			*bParam0 = -1753819339; /* GXTEntry: "Cricket Bait" */
			return 1;
		case 1903483453: /* GXTEntry: "Live Worms" */
			*bParam0 = -1527293029; /* GXTEntry: "Worm Bait" */
			return 1;
		case -541584777: /* GXTEntry: "Opened Cocaine Gum" */
			*bParam0 = 206762213; /* GXTEntry: "Cocaine Gum" */
			return 1;
		case 998010398: /* GXTEntry: "Opened Chewing Tobacco" */
			*bParam0 = -324053813; /* GXTEntry: "Chewing Tobacco" */
			return 1;
		case -1424823393: /* GXTEntry: "Opened Cigarettes" */
			*bParam0 = -885810591; /* GXTEntry: "Premium Cigarettes" */
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1305(bool bParam0, var uParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	bool bVar28;
	int iVar29;

	if (!func_278(bParam0, 0))
	{
		return 0;
	}
	Var0 = { func_606(bParam0, 0, 1) };
	iVar5 = 1728382685; /* GXTEntry: "Right" */
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_607((375 + iVar29), 1);
		if (func_608(bParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_609(bParam0, &Var6, iVar5);
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

int func_1306(int iParam0)
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

float func_1307(int iParam0)
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
			return func_1460(iParam0);
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
			return func_1460(iParam0);
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
			return func_1460(iParam0);
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

int func_1308(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_884(18);
		case 2:
			return func_884(20);
		case 1:
			return func_884(19);
		default:
			break;
	}
	return 1;
}

int func_1309(int iParam0)
{
	return func_1461(&(Global_40.f_11095.f_11[iParam0]));
}

void func_1310(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (func_90() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_884(31))
	{
		return;
	}
	iVar0 = func_1309(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_1309(iParam0);
	if (func_1462(iParam0) && func_1463(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_1464(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_1465(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_810(func_1466(iParam0), 0);
					}
					func_1467(iParam0, iVar2, iVar3);
					func_1468(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

char* func_1311(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_1312(int iParam0)
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

int func_1313()
{
	return func_1469(Global_40.f_12018);
}

int func_1314()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		bVar2 = func_1108(iVar1);
		if (func_137(bVar2, 1, 0) || func_1320(func_1319(bVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1315()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1470(COLLECTION::_0x126CBEBBA46693CF(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1316()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_1325(COLLECTION::_0x126CBEBBA46693CF(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1317()
{
	return COLLECTION::_0x3A65F4844913A047(2103522376, 0);
}

int func_1318(int iParam0)
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

int func_1319(bool bParam0)
{
	switch (bParam0)
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

bool func_1320(var uParam0)
{
	return (Global_40.f_12018 && uParam0) != 0;
}

char* func_1321(int iParam0)
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

int func_1322(int iParam0)
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

int func_1323(int iParam0)
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

char* func_1324(bool bParam0)
{
	switch (bParam0)
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

bool func_1325(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

char* func_1326(int iParam0)
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

char* func_1327(int iParam0)
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

int func_1328(bool bParam0)
{
	if (func_1471(bParam0) && func_137(bParam0, 1, 0))
	{
		return 1;
	}
	else if (func_1472(bParam0) && func_1473(bParam0))
	{
		return 1;
	}
	return 0;
}

char* func_1329(bool bParam0)
{
	if (!func_278(bParam0, 0))
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(func_925(bParam0));
}

int func_1330(int iParam0)
{
	return &(Global_1898164->f_1[iParam0 /*5*/]);
}

int func_1331(int iParam0)
{
	return (Global_1898164->f_1[iParam0 /*5*/])->f_2;
}

void func_1332(bool bParam0)
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

void func_1333(int iParam0)
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

void func_1334(bool bParam0)
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

void func_1335(bool bParam0)
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

void func_1336(bool bParam0)
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

void func_1337(bool bParam0)
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

void func_1338(bool bParam0)
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

void func_1339(bool bParam0)
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

int func_1340(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_1164(iParam0, 1) /*3*/]);
}

void func_1341()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1526891582))
	{
		func_1474();
		UNLOCK::_UNLOCK_SET_UNLOCKED(-1526891582, true);
		func_888(joaat("weapon_revolver_cattleman_john"));
		func_931(joaat("weapon_revolver_cattleman_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_cattleman_john"), true, 2, false, false);
		func_888(joaat("weapon_melee_knife_john"));
		func_931(joaat("weapon_melee_knife_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_melee_knife_john"), true, 4, false, false);
	}
}

bool func_1342(bool bParam0)
{
	return WEAPON::_0xC4DEC3CA8C365A5D(bParam0);
}

int func_1343(bool bParam0)
{
	struct<5> Var0;

	Var0 = { func_606(bParam0, 1, 0) };
	return func_1163(Var0.f_4);
}

int func_1344(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_538(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_538(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_538(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_538(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_538(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_538(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

int func_1345(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;

	iVar1 = func_1164(func_1475(iParam0), 1);
	if (iVar1 >= 39)
	{
		return 0;
	}
	if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] != 0 && &Global_1946804->f_1497.f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
	{
		bVar0 = &Global_1946804->f_1497.f_1[iVar1 /*3*/];
		if (func_840(bVar0) == iParam0)
		{
			*uParam1 = bVar0;
			return 1;
		}
	}
	*uParam1 = 0;
	return 0;
}

int func_1346(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam0 == &Global_1946804->f_57[func_1164(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_1168(524288))
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
	iVar0 = (iVar0 + PED::_0x31B2E7F2E3C58B89(bParam0, joaat("base"), iParam2, bParam3));
	return iVar0;
}

int func_1347(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_1476(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

int func_1348(int iParam0)
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

int func_1349(int iParam0)
{
	return func_1477(iParam0, -1);
}

bool func_1350(int iParam0, bool bParam1)
{
	return func_1478(func_711(), iParam0, bParam1);
}

bool func_1351(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

void func_1352(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_1237(iParam0, 1);
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

void func_1353(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_1237(iParam0, 1);
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

void func_1354()
{
	func_1353(-939420910);
	func_1353(-1187950766);
	func_1353(356365161);
	func_1353(753127042);
	func_1353(-2038424081);
	func_1353(1884271742);
	func_1353(459290420);
}

void func_1355()
{
	func_1353(704802028);
	func_1353(588987611);
	func_1353(2008888900);
	func_1353(1649996811);
	func_1353(227918160);
	func_1353(168171957);
	func_1353(1193080109);
	func_1353(-491981251);
	func_1353(-639037538);
	func_1353(-618620429);
}

bool func_1356(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_1357(int iParam0)
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

void func_1358(var uParam0)
{
	Global_40.f_12018.f_43 = (Global_40.f_12018.f_43 || uParam0);
}

bool func_1359(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_1360(int iParam0, int iParam1)
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

void func_1361()
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

void func_1362(int iParam0)
{
	func_1369(iParam0, 8, 6);
}

void func_1363(int iParam0)
{
	func_1479(&(Global_1946804->f_2589), iParam0);
}

void func_1364(int iParam0, int iParam1)
{
	func_1480(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_1365(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_1366(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_840(&(uParam0->f_1[iParam2 /*3*/]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1481(iParam2, 65536) && &uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_1364(iVar1, iVar3);
		}
	}
	if (func_1186(-1586649372) && func_1481(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_1364(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case 698653232:
			if (bParam1 == &Global_1946804->f_57[iParam2 /*11*/])
			{
				iVar1 = 12;
				if (&uParam0->f_1[iVar1 /*3*/] == 1516947474)
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_1364(iVar1, iVar3);
					}
				}
			}
			func_1482(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1482(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_1364(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 525
				func_1482(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/])->f_1 == joaat("base")
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = -1539589426;
					if (bParam4)
					{
						func_1364(iVar1, iVar3);
					}
				}
				if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 1530758430)
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 1334603721;
					if (bParam4)
					{
						func_1364(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 656
				func_1482(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1170; //curOff = 691
				func_1482(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_1364(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 786
				func_1482(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1170; //curOff = 807
				if (bParam1 == &Global_1946804->f_57[iParam2 /*11*/])
				{
					iVar1 = 37;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1364(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1364(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_840(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1364(iVar1, iVar3);
						}
					}
				}
				Jump @1170; //curOff = 1025
				iVar1 = 36;
				if (&uParam0->f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && func_538(&(Global_1946804->f_1497.f_1[iVar1 /*3*/]), -1638171711))
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
			switch (func_840(bParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_840(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1364(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_840(&(uParam0->f_1[iVar1 /*3*/])) || func_538(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1364(iVar1, iVar3);
						}
					}
					break;
			}
		}

int func_1367(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;

	uVar0 = func_1483(0);
	if (iParam2 != 0 && func_1484(bParam0, uVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_1485(bParam0, func_1360(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_1368(var uParam0, bool bParam1, int iParam2)
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

	bVar6 = func_90() != -1;
	iVar7 = func_1483(0);
	if (func_1168(32768))
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
			iVar5 = func_1360(iVar0, 1);
			if (func_1486(iVar5, 8))
			{
			}
			else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == joaat("MISSING") || &uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_1486(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_1346(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_1487(uParam0);
				if (iVar3 > 0)
				{
					if (!func_1168(524288))
					{
						func_1371(524288);
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
							iVar5 = func_1360(iVar0, 1);
							if (func_1486(iVar5, 8))
							{
							}
							else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == joaat("MISSING") || &uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_1486(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_1346(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									if (bParam1)
									{
										func_1364(iVar0, iParam2);
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
					func_1374(524288);
				}
			}
		}
	}

void func_1369(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_1164(iParam0, 1) /*11*/])->f_10 = ((Global_1946804->f_57[func_1164(iParam0, 1) /*11*/])->f_10 - ((Global_1946804->f_57[func_1164(iParam0, 1) /*11*/])->f_10 && iParam1));
}

void func_1370(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1488(&(uParam0->f_2[iVar0 /*2*/]), bParam1, bParam2);
		iVar0++;
	}
	if (func_90() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_1489(2, Global_26795.f_776)) || Global_1946804->f_1497 != func_1393(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (&Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804->f_1497 = func_1393(Global_40.f_7729);
				Global_1946804->f_1378 = func_1393(Global_40.f_7729);
				Global_26795.f_776 = 0;
				func_1490(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_1491(0, 1);
	}
}

void func_1371(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_1372(struct<4> Param0)
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
			if (func_1492(Param0))
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
			func_1493(Param0);
			*(Global_1946804->f_668[Global_1946804->f_856 /*4*/]) = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_1371(8);
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
			if (func_1492(Param0))
			{
				return;
			}
			func_1493(Param0);
			*(Global_1946804->f_567[Global_1946804->f_851 /*4*/]) = { Param0 };
			Global_1946804->f_851++;
			func_1371(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_1172(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_1373(var uParam0)
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

void func_1374(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_1375(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_1376(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_1492(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1 /*4*/] == Param0 && (Global_1946804->f_769[iVar1 /*4*/])->f_2 == Param0.f_2) && (Global_1946804->f_769[iVar1 /*4*/])->f_3 == Param0.f_3) && (Global_1946804->f_769[iVar1 /*4*/])->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1 /*4*/] == 34 && func_1492(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1493(Param0);
	*(Global_1946804->f_769[Global_1946804->f_854 /*4*/]) = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_1371(8);
}

int func_1377()
{
	if (Global_1572887->f_12 != -1)
	{
		return 0;
	}
	return Global_1347477->f_203;
}

float func_1378(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_1379()
{
	float fVar0;
	int iVar1;

	fVar0 = func_1494(13);
	iVar1 = func_1495(fVar0);
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

float func_1380()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_1381()
{
	if (func_1128())
	{
		if (DLC::_0xA16B4FBA7887D7BA())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_1382()
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

float func_1383()
{
	return Global_1955565->f_3;
}

void func_1384(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_1496(iParam0, 1, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[1]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[1]), bParam2);
}

void func_1385(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_1496(iParam0, 2, 0, 0);
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

float func_1386(float fParam0, float fParam1, float fParam2)
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

bool func_1387()
{
	return func_1494(12) <= -99f;
}

bool func_1388()
{
	return func_1494(12) >= 99f;
}

int func_1389()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		bVar1 = &Global_1946804->f_2657[iVar0];
		if (func_840(bVar1) == -999503751)
		{
			if (func_1497() != bVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

int func_1390(int iParam0)
{
	if (!func_1181(iParam0))
	{
		return 0;
	}
	if (func_1394(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

int func_1391(int iParam0)
{
	if (!func_1181(iParam0))
	{
		return 0;
	}
	if (func_1394(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void func_1392(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1181(iParam0))
	{
		return;
	}
	if (!func_1391(iParam0))
	{
		func_1396(iParam0, 2);
		if (bParam2)
		{
			if (!func_475(0, 0, 1))
			{
				func_510(1, 4);
			}
		}
		if ((!func_1395() && !bParam1) && !func_475(0, 0, 1))
		{
			func_71(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_ADD", func_1498(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_1393(int iParam0)
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

bool func_1394(int iParam0, int iParam1)
{
	if (!func_1181(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] && iParam1) != 0;
}

bool func_1395()
{
	int iVar0;

	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) == 4);
}

void func_1396(int iParam0, int iParam1)
{
	if (!func_1181(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] = (Global_40.f_7157[iParam0 /*3*/] || iParam1);
}

int func_1397(int iParam0, bool bParam1)
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

void func_1398(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_1499(bParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_885(50);
			}
			else
			{
				func_885(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_885(51);
			}
			else
			{
				func_885(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_1500(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_912();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_912();
			}
			break;
		case 3:
			func_885(24);
			if (bParam1)
			{
				if (!func_1500(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_912();
				}
			}
			break;
	}
}

void func_1399(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_1501(0))
			{
				iVar0++;
			}
			if (func_1501(2))
			{
				iVar0++;
			}
			if (func_1501(4))
			{
				iVar0++;
			}
			if (!func_1502(16))
			{
				if (iVar0 == 1)
				{
					func_1503();
					func_810(456, 1);
					func_1504(16);
				}
			}
			if (!func_1502(32))
			{
				if (iVar0 >= 3)
				{
					func_1503();
					func_810(456, 1);
					func_1504(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_1501(1))
			{
				iVar0++;
			}
			if (func_1501(3))
			{
				iVar0++;
			}
			if (func_1501(7))
			{
				iVar0++;
			}
			if (!func_1502(1))
			{
				if (iVar0 == 1)
				{
					func_1505();
					func_810(457, 1);
					func_1504(1);
				}
			}
			if (!func_1502(2))
			{
				if (iVar0 >= 3)
				{
					func_1505();
					func_810(457, 1);
					func_1504(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_1501(5))
			{
				iVar0++;
			}
			if (func_1501(6))
			{
				iVar0++;
			}
			if (func_1501(8))
			{
				iVar0++;
			}
			if (!func_1502(4))
			{
				if (iVar0 == 1)
				{
					func_1506();
					func_810(455, 1);
					func_1504(4);
				}
			}
			if (!func_1502(8))
			{
				if (iVar0 >= 3)
				{
					func_1506();
					func_810(455, 1);
					func_1504(8);
				}
			}
			break;
	}
}

void func_1400(var uParam0)
{
	func_1188(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_1188(uParam0, 617531372);
	}
	else
	{
		func_1188(uParam0, 291123060);
	}
}

void func_1401(var uParam0, int iParam1, struct<14> Param2)
{
	int iVar0;
	struct<21> Var1;

	if (!func_1507(uParam0))
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

int func_1402(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(bParam0, &Var3))
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

bool func_1403(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

void func_1404(int iParam0)
{
	struct<2> Var0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_742(1356759001) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

int func_1405(int iParam0)
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

int func_1406(int iParam0)
{
	switch (iParam0)
	{
		case -1523757120:
		case -1516219602:
		case -1063137731:
		case 604357666:
		case 705691988:
		case 1048964673:
		case 1576849913:
			return 1;
	}
	return 0;
}

bool func_1407()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(99890643);
}

int func_1408(int iParam0, bool bParam1)
{
	struct<4> Var0;
	struct<4> Var29;

	Var0.f_9 = -1591664384;
	if (!func_1411(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { func_610(bParam1, Var0, 1415981582, 0) };
	return func_1508(Var29, 1);
}

int func_1409(int iParam0, bool bParam1)
{
	struct<4> Var0;
	struct<4> Var29;

	Var0.f_9 = -1591664384;
	if (!func_1411(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { func_610(bParam1, Var0, -2119169513, 0) };
	return func_1508(Var29, 1);
}

void func_1410(var uParam0)
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

int func_1411(int iParam0, var uParam1)
{
	int iVar0;
	struct<10> Var1;
	struct<4> Var15;

	if (!func_1509(iParam0))
	{
		return 0;
	}
	iVar0 = func_1412(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_761(0) };
	if (!func_1510(Var15, iVar0, &Var1, 0, 0))
	{
		return 0;
	}
	if (!func_1511(&Var1, uParam1))
	{
		return 0;
	}
	return 1;
}

int func_1412(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 7:
			return 1782082944;
		case 1:
			return -832337898;
		case 2:
			return 1271463052;
		case 3:
			return 1983140194;
		case 4:
			return 677262775;
	}
	return 0;
}

int func_1413(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10)
{
	struct<12> Var0;
	struct<4> Var14;

	if (!func_612(bParam10))
	{
		return func_1512(Param0, Param4, iParam8, 1, bParam9, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_842(Param0, &Var0, 0, 0))
	{
		return 0;
	}
	if (func_1513(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return 1;
	}
	if (!INVENTORY::_0x780C5B9AE2819807(Var0.f_4, iParam8))
	{
		return 0;
	}
	if (!INVENTORY::_0xDCCAA7C3BFD88862(func_282(0), &Param0, &Param4, iParam8, Var0.f_11, &Var14))
	{
		return 0;
	}
	if (bParam9)
	{
		if (!func_1508(Var14, 1))
		{
		}
	}
	return 1;
}

int func_1414(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	struct<11> Var0;
	struct<11> Var14;
	int iVar28;

	if (!func_612(bParam9))
	{
		return func_1514(Param0, Param4, iParam8, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return 0;
	}
	if (func_1513(&Param0, &Param4))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_842(Param0, &Var0, bParam9, 1) || !func_842(Param4, &Var14, bParam9, 1))
	{
		return 0;
	}
	if (func_1513(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return 0;
	}
	if (!INVENTORY::_0x780C5B9AE2819807(Var0.f_4, Var14.f_9) || !INVENTORY::_0x780C5B9AE2819807(Var14.f_4, Var0.f_9))
	{
		return 0;
	}
	iVar28 = func_282(0);
	if (!INVENTORY::_0xF2753D691BCDA314(iVar28, &Param0, &Param4))
	{
		return 0;
	}
	if (!INVENTORY::_0x734311E2852760D0(iVar28, &Param0, (Var14.f_10 || iParam8)))
	{
	}
	if (!INVENTORY::_0x734311E2852760D0(iVar28, &Param4, (Var0.f_10 || iParam8)))
	{
	}
	return 1;
}

int func_1415(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (func_1515(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return 1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseCompanion"))
	{
		return 1;
	}
	return 0;
}

int func_1416(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		return 1;
	}
	return 0;
}

int func_1417()
{
	return 1342496140 /* GXTEntry: "Tennessee Walker - Mahogany Bay Coat" */;
}

int func_1418()
{
	return 446670976;
}

int func_1419()
{
	return 1;
}

int func_1420()
{
	return -868094182 /* GXTEntry: "Tennessee Walker - Chestnut Coat" */;
}

int func_1421()
{
	return 1074477367;
}

int func_1422()
{
	return 1;
}

int func_1423()
{
	return -997197050 /* GXTEntry: "Thoroughbred - Seal Brown Coat" */;
}

int func_1424()
{
	return -2063289686;
}

int func_1425()
{
	return 2;
}

int func_1426()
{
	return -868094182 /* GXTEntry: "Tennessee Walker - Chestnut Coat" */;
}

int func_1427()
{
	return 1074477367;
}

int func_1428()
{
	return 1;
}

int func_1429()
{
	return 1235275977 /* GXTEntry: "Morgan - Bay Coat" */;
}

int func_1430()
{
	return 2030804811;
}

int func_1431()
{
	return 1;
}

int func_1432()
{
	return 1974379573 /* GXTEntry: "Kentucky Saddler - Grey Coat" */;
}

int func_1433()
{
	return 2024948086;
}

int func_1434()
{
	return 1;
}

void func_1435(int iParam0)
{
	if (func_1516() < iParam0)
	{
		func_1517(iParam0);
	}
}

int func_1436(struct<4> Param0, int iParam4, int iParam5)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_1518(Param0, iParam4, &Var0, iParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_1437(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (bParam0 != 0)
	{
		iVar5 = func_840(bParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_1519(bParam0);
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

struct<4> func_1438()
{
	struct<4> Var0;

	Var0 = { func_761(0) };
	return func_610(856287005, Var0, -218846335, 0);
}

void func_1439(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (iParam1 == -377364164 || iParam1 == 357708345)
	{
		return;
	}
	iVar0 = iParam1;
	PED::_SET_PED_COMPONENT_ENABLED(iParam0, iVar0, false, false, false);
}

bool func_1440(int iParam0)
{
	if (!(iParam0 >= 0 && iParam0 <= 150))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return Global_23117[iParam0 /*11*/] & 32 != 0;
	}
	return Global_1058888->f_40615[iParam0 /*11*/] & 32 != 0;
}

int func_1441(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_1520(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_1521())
	{
		return func_1520(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1225638->f_21[iParam1])
	{
		return func_1520(&(((*Global_1108178)[iParam1 /*37*/])->f_4), iVar0, 5);
	}
	return 0;
}

void func_1442(int iParam0, int iParam1)
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

void func_1443(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_1444(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1248(*iParam0);
	iVar1 = func_1247(*iParam0);
	if (iParam1 < 1 || iParam1 > func_1251(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_1445(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_1446(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_1447(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

void func_1448(bool bParam0)
{
	func_1522(bParam0);
	Global_1955569->f_1.f_1 = bParam0;
	if (bParam0 == 1)
	{
		HUD::_HIDE_HUD_COMPONENT(121713391);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(121713391);
	}
}

int func_1449(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_1450(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;

	if (func_503(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_504(&(iParam1->f_6), 0, 1);
	}
	if (!func_503(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_1287(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_1523(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (func_503(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_1456(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_1524(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_1525(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_1080(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_1524(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_1081(iParam1->f_6, 0, 1);
				}
				else
				{
					func_1081(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_1451(int* iParam0, int iParam1)
{
	if (!func_358(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_360(iParam0, 14);
		}
	}
}

bool func_1452(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_1453(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_1454(int iParam0, int iParam1)
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

bool func_1455(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

void func_1456(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (bParam3 && !func_503(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_737(iParam0);
	func_1524(iParam0, 18, 0, 1);
	func_1524(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UIPROMPT_SET_GROUP(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam4, iParam2);
}

bool func_1457(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_503(iParam0))
	{
		return false;
	}
	iVar0 = func_737(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

bool func_1458(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_503(iParam0))
	{
		return false;
	}
	iVar0 = func_737(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_1459(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_503(iParam0))
	{
		return;
	}
	iVar0 = func_737(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

float func_1460(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar4 = func_1306(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = &Global_40.f_11095.f_11[iVar4];
			iVar5 = func_1461(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_1526(iVar6) - func_1526(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_1461(float fParam0)
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

int func_1462(int iParam0)
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

int func_1463(int iParam0)
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

int func_1464(float fParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_1461(fParam0);
	fVar1 = BUILTIN::TO_FLOAT(func_1526(iVar0));
	fVar2 = BUILTIN::TO_FLOAT(func_1526(iVar0 + 1));
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

int func_1465(int iParam0)
{
	int iVar0;

	if (func_1527(iParam0, &iVar0))
	{
		return func_1526(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_1528())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_1528())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_1528())
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

int func_1466(int iParam0)
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

void func_1467(int iParam0, int iParam1, int iParam2)
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
	iVar3 = (iVar3 + func_1529(iParam0));
	sVar4 = func_1531(func_1530(iVar3, iParam2));
	sVar6 = func_1532(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = MISC::_CREATE_VAR_STRING(10, sVar0, func_1533(iParam0));
	iVar8 = func_1534(iParam0);
	iVar9 = MISC::GET_HASH_KEY(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_1535(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&Var10);
	}
	func_1117(sVar7, sVar1, iVar8, iVar9, -479097442, "INPUT_FEED_INTERACT_GENERIC", func_1536(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_1468(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

int func_1469(int iParam0)
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

bool func_1470(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

int func_1471(bool bParam0)
{
	switch (bParam0)
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

int func_1472(bool bParam0)
{
	switch (bParam0)
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

int func_1473(bool bParam0)
{
	int iVar0;
	struct<11> Var1;
	int iVar95;

	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_1537(&iVar0, 0, iVar95, &Var1) && !func_1537(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(Var1))
		{
			func_1538(iVar0, &Var1);
			if (func_278(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_1474()
{
	var uVar0;
	struct<4> Var30;

	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	uVar0 = 29;
	func_1539(Global_35, &uVar0);
	Var30 = { func_761(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_1540(0);
	func_1541(7);
	func_1542(-1623728698 /* GXTEntry: "Bandana" */, 1, 1, 0);
	if (func_1183() == 1160113249)
	{
		func_1542(-763730846 /* GXTEntry: "John\'s Classic Hat" */, 1, 1, 1);
		func_1542(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	func_1543(Global_35, &uVar0);
}

int func_1475(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_1163(iVar0);
}

int func_1476(int iParam0)
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

int func_1477(int iParam0, int iParam1)
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
		iParam1 = func_282(0);
	}
	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_1442(&uVar6, iVar0);
	func_1443(&uVar6, iVar1);
	func_1444(&uVar6, iVar2);
	func_1445(&uVar6, iVar3);
	func_1446(&uVar6, iVar4);
	func_1447(&uVar6, iVar5);
	return uVar6;
}

bool func_1478(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1544(iParam1) || !func_1544(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_1479(var uParam0, int iParam1)
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
			if ((func_1545(uParam0->f_2[iVar0 /*2*/], 2) || &uParam0->f_2[iVar0 /*2*/] == iParam1) || &uParam0->f_2[iVar0 /*2*/] == 39)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			else
			{
				if (func_1545(uParam0->f_2[iVar0 /*2*/], 1))
				{
					func_1546(uParam0->f_2[iVar0 /*2*/], 2, 6);
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

void func_1480(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_1547(uParam0, 1))
	{
		func_1548(uParam0, 1);
	}
	(uParam0->f_2[*uParam0 /*2*/])->f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

bool func_1481(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[iParam0 /*11*/])->f_9 && iParam1) != 0;
}

void func_1482(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_1364(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_1364(iVar3, iVar0);
		}
	}
	if ((uParam0->f_1[iVar2 /*3*/])->f_1 == -1333118809 || (uParam0->f_1[iVar2 /*3*/])->f_1 == joaat("custom"))
	{
		(uParam0->f_1[iVar2 /*3*/])->f_1 = joaat("base");
		if (bParam3)
		{
			func_1364(iVar2, iVar0);
		}
	}
}

int func_1483(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_1183();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_1484(bool bParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < PED::_0xFFCC2DB2D9953401(bParam0, uParam1, bParam3))
	{
		if (PED::_0x6243635AF2F1B826(bParam0, iVar0, uParam1, bParam3) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1485(bool bParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("base");
	return 1;
}

bool func_1486(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_1164(iParam0, 1) /*11*/])->f_10 && iParam1) != 0;
}

int func_1487(var uParam0)
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

void func_1488(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*(Global_1946804->f_1497.f_1[iParam0 /*3*/]) = { *(Global_1946804->f_1378.f_1[iParam0 /*3*/]) };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_90() == -1)
	{
		func_1549(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_26795.f_776);
	}
	else
	{
		func_1550(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_36637.f_45.f_350.f_1011);
	}
}

int func_1489(int iParam0, int iParam1)
{
	if (func_90() == -1)
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

void func_1490(int iParam0, bool bParam1, int iParam2)
{
	func_1551(&(Global_1946804->f_1378), iParam0);
	func_1552(2, iParam0, 6);
	if (bParam1)
	{
		func_1491(0, 1);
	}
}

void func_1491(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1553(0);
	}
	if (bParam0)
	{
		func_1371(8);
		func_1371(512);
	}
	else
	{
		func_1371(8);
		func_1371(16);
	}
}

bool func_1492(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_1493(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

float func_1494(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_1495(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

char* func_1496(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_285(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_285(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

int func_1497()
{
	return Global_1946804->f_1497;
}

char* func_1498(int iParam0)
{
	bool bVar0;

	bVar0 = func_1393(iParam0);
	if (bVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_1329(bVar0);
}

int func_1499(bool bParam0)
{
	int iVar0;

	if (func_1554(bParam0))
	{
		iVar0 = 0;
	}
	else if (func_1555(bParam0))
	{
		iVar0 = 1;
	}
	else if (func_1556(bParam0))
	{
		iVar0 = 2;
	}
	else if (func_1557(bParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

int func_1500(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_137(func_1558(iVar0, iParam0), 1, 0))
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

int func_1501(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_137(func_1559(iVar0, iParam0), 1, 0))
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

bool func_1502(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_1503()
{
	int iVar0;

	if (func_90() != -1)
	{
		return;
	}
	func_931(1654063339, 1, 752097756);
	iVar0 = func_1309(1);
	func_1467(1, iVar0, 0);
}

void func_1504(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_1505()
{
	int iVar0;

	if (func_90() != -1)
	{
		return;
	}
	func_931(1623931083, 1, 752097756);
	iVar0 = func_1309(2);
	func_1467(2, iVar0, 0);
}

void func_1506()
{
	int iVar0;

	if (func_90() != -1)
	{
		return;
	}
	func_931(-1845241476, 1, 752097756);
	iVar0 = func_1309(0);
	func_1467(0, iVar0, 0);
}

int func_1507(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

int func_1508(struct<4> Param0, int iParam4)
{
	struct<11> Var0;

	if (!func_612(0))
	{
		return func_1560(Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_842(Param0, &Var0, 0, 0))
	{
		return 0;
	}
	if (Var0.f_10 == iParam4)
	{
		return 1;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_282(0), &Param0, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_1509(int iParam0)
{
	int iVar0;
	struct<4> Var1;

	iVar0 = func_1412(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_761(0) };
	if (func_1561(&Var1, iVar0, 0) > 0)
	{
		return 1;
	}
	return 0;
}

int func_1510(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_282(bParam7);
	if (INVENTORY::_0x033EE4B89F3AC545(iVar0, &uParam0, iParam4) <= iParam6)
	{
		return 0;
	}
	if (!INVENTORY::_0xBE012571B25F5ACA(iVar0, &uParam0, iParam4, iParam6, uParam5))
	{
		return 0;
	}
	return 1;
}

int func_1511(var uParam0, var uParam1)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_282(0), uParam0, uParam1, 29, 1))
	{
		return 0;
	}
	return 1;
}

int func_1512(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10, bool bParam11)
{
	struct<12> Var0;
	int iVar14;
	int iVar15;
	struct<16> Var16;
	int iVar32;

	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	if (!func_842(Param0, &Var0, 1, 0))
	{
		return -1;
	}
	if (func_1513(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return -1;
	}
	if (!INVENTORY::_0x780C5B9AE2819807(Var0.f_4, iParam8))
	{
		return -1;
	}
	iVar14 = func_843(Var0.f_4, Param4, iParam8, 0);
	iVar15 = INVENTORY::_0xE80E50BEE276A54A(Var0.f_4, iParam8);
	if (iVar15 >= 0)
	{
		if (iVar14 >= iVar15)
		{
			return -1;
		}
		else if ((iVar14 + Var0.f_11) > iVar15)
		{
			if (bParam11)
			{
				return -1;
			}
			Var0.f_11 = (iVar15 - iVar14);
		}
	}
	Var16 = { func_1562(&Var0) };
	Var16.f_4 = { Param4 };
	Var16.f_11 = iParam8;
	Var16.f_10 = bParam10;
	iVar32 = func_1563(1168099063, &Var16, bParam9);
	if (iVar32 == -1)
	{
		return -1;
	}
	return iVar32;
}

int func_1513(var uParam0, bool bParam1)
{
	if (((*uParam0 == *bParam1 && uParam0->f_1 == bParam1->f_1) && uParam0->f_2 == bParam1->f_2) && uParam0->f_3 == bParam1->f_3)
	{
		return 1;
	}
	return 0;
}

int func_1514(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	struct<11> Var0;
	struct<11> Var14;
	struct<16> Var28;
	struct<16> Var44;
	int iVar60;

	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return -1;
	}
	if (func_1513(&Param0, &Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_842(Param0, &Var0, 1, 0) || !func_842(Param4, &Var14, 1, 0))
	{
		return -1;
	}
	if (func_1513(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return -1;
	}
	if (!INVENTORY::_0x780C5B9AE2819807(Var0.f_4, Var14.f_9) || !INVENTORY::_0x780C5B9AE2819807(Var14.f_4, Var0.f_9))
	{
		return -1;
	}
	Var28 = { func_1562(&Var0) };
	Var28.f_4 = { Var14.f_5 };
	Var28.f_11 = Var14.f_9;
	Var28.f_10 = (Var14.f_10 || iParam8);
	Var44 = { func_1562(&Var14) };
	Var44.f_4 = { Var0.f_5 };
	Var44.f_11 = Var0.f_9;
	Var44.f_10 = (Var0.f_10 || iParam8);
	iVar60 = -1;
	if (bParam9)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar60, 712853601, 1168099063))
		{
			if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar60, &Var28, 16) && NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar60, &Var44, 16))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar60))
				{
					func_1564(iVar60, 1);
				}
				else
				{
					NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar60);
					return -1;
				}
			}
			else
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar60);
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	else
	{
		iVar60 = func_1563(1168099063, &Var28, 0);
		iVar60 = func_1563(1168099063, &Var44, 0);
	}
	return iVar60;
}

int func_1515(int iParam0)
{
	switch (iParam0)
	{
		case joaat("a_c_horse_gang_bill"):
		case joaat("a_c_horse_gang_sean"):
		case joaat("a_c_horse_gang_john"):
		case -1486704931:
		case joaat("a_c_horse_gang_dutch"):
		case -1356425746:
		case joaat("a_c_horse_gang_javier"):
		case joaat("a_c_horse_gang_sadie"):
		case joaat("a_c_horse_gang_lenny"):
		case joaat("a_c_horse_gang_micah"):
		case joaat("a_c_horse_gang_hosea"):
		case -575759638:
		case joaat("a_c_horse_gang_charles"):
		case 291878635:
		case joaat("a_c_horse_gang_trelawney"):
		case 1139858530:
		case 1760888205:
		case 1800725969:
			return 1;
	}
	return 0;
}

int func_1516()
{
	return Global_40.f_1095.f_3135;
}

void func_1517(int iParam0)
{
	Global_40.f_1095.f_3135 = iParam0;
}

int func_1518(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	struct<4> Var0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x22E590F108289A9D(func_282(bParam6), &uParam0, iParam4, &Var0))
	{
		return 0;
	}
	if (!func_842(Var0, uParam5, bParam6, 0))
	{
		return 0;
	}
	return 1;
}

int func_1519(bool bParam0)
{
	int iVar0;

	if (!func_278(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_840(bParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

bool func_1520(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_1521()
{
	return Global_1109400->f_244;
}

void func_1522(bool bParam0)
{
	COMPAPP::_0xB6FD96420C0126A1(-1056478928, bParam0);
}

int func_1523(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_1244(iVar0, 2))
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
				func_1565(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, uParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

void func_1524(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_503(iParam0))
	{
		return;
	}
	iVar0 = func_737(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1, iParam2);
}

void func_1525(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_503(iParam0))
	{
		return;
	}
	iVar0 = func_737(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(10, sParam1, sParam2, sParam3));
}

int func_1526(int iParam0)
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

int func_1527(var uParam0, var uParam1)
{
	return 0;
}

int func_1528()
{
	return 0;
}

int func_1529(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_0xE787F05DFC977BDE(func_282(0), -1845241476, 0);
		case 1:
			return INVENTORY::_0xE787F05DFC977BDE(func_282(0), 1654063339, 0);
		case 2:
			return INVENTORY::_0xE787F05DFC977BDE(func_282(0), 1623931083, 0);
	}
	return 0;
}

struct<4> func_1530(int iParam0, int iParam1)
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

var func_1531(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_1532(int iParam0)
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

char* func_1533(int iParam0)
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

int func_1534(int iParam0)
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

int func_1535(int iParam0)
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

int func_1536(int iParam0)
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

int func_1537(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	struct<4> Var1;
	var uVar5;

	if (func_732(iParam1) && !func_946(iParam1))
	{
		iVar0 = func_665(iParam1);
	}
	else
	{
		return 0;
	}
	func_1410(uParam3);
	uVar5 = func_1405(iParam2);
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

void func_1538(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_1566(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_1567(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_1539(int iParam0, int* iParam1)
{
	var uVar0;
	int iVar30;
	bool bVar31;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	uVar0 = 29;
	MISC::_COPY_MEMORY(iParam1, &uVar0, 30);
	iVar30 = 0;
	while (iVar30 < 29)
	{
		bVar31 = false;
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &bVar31, false, iVar30, true);
		if (func_362(bVar31))
		{
			(*iParam1)[iVar30] = bVar31;
		}
		else
		{
			(*iParam1)[iVar30] = 0;
		}
		iVar30++;
	}
}

void func_1540(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_278(iVar1, 0))
		{
			func_1568(iVar1, 0, bParam0);
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

void func_1541(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	Global_1946804->f_2657.f_26.f_2 = 3;
	Global_1946804->f_2657.f_26.f_1 = 3;
	Global_1946804->f_2657.f_26 = 3;
	if (func_90() == -1)
	{
		func_1569(352481484);
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
		bVar2 = &Global_1946804->f_2657[iVar0];
		if (func_840(bVar2) != -999503751)
		{
			func_1570(&(Global_1946804->f_2657.f_26.f_26), bVar2, iVar0);
		}
		if (func_1571(bVar2, 0))
		{
			func_1572(bVar2, &Global_1946804->f_1497.f_1[iVar1 /*3*/] == &Global_1946804->f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_1542(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;

	if (!func_1573(bParam0))
	{
		return;
	}
	iVar0 = func_840(bParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_1574(bParam0, &(Global_1946804->f_2657.f_21), Global_1946804->f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_1574(bParam0, &(Global_1946804->f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_1574(bParam0, &(Global_1946804->f_2657.f_20), Global_1946804->f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_1574(bParam0, &(Global_1946804->f_2657.f_22), Global_1946804->f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_1574(bParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_1574(bParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (bParam0 == func_1575(0))
	{
		func_1576(bParam0, 1);
		if (func_1183() == 1160113249)
		{
			func_1576(func_1575(-2125499975), 0);
		}
		else
		{
			func_1576(func_1575(1160113249), 0);
		}
	}
	func_1577();
	if (func_1578(iVar0))
	{
		INVENTORY::_0x766315A564594401(func_282(0), bParam0, 0);
	}
	func_1572(bParam0, bParam3);
	if (bParam2)
	{
		func_1491(0, 0);
	}
}

void func_1543(int iParam0, var uParam1)
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
				if (func_363(uParam1[iVar0]))
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

int func_1544(int iParam0)
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
	iVar0 = func_1250(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_1018(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_712(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_1247(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_1248(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_1249(iParam0);
	if (iVar5 < 1 || iVar5 > func_1251(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

bool func_1545(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1546(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_1547(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1548(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_1549(var uParam0, int iParam1, int iParam2)
{
	*((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

void func_1550(var uParam0, int iParam1, int iParam2)
{
	*((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

void func_1551(var uParam0, int iParam1)
{
	int iVar0;

	if (func_90() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		(Global_26795.f_26[iParam1 /*120*/])->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_1549(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
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
		func_1550(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
		iVar0++;
	}
}

void func_1552(int iParam0, int iParam1, int iParam2)
{
	if (func_90() == -1)
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

void func_1553(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

int func_1554(bool bParam0)
{
	if (!func_278(bParam0, 0))
	{
		return 0;
	}
	if (func_538(bParam0, -1066545920))
	{
		return 1;
	}
	return 0;
}

int func_1555(bool bParam0)
{
	if (!func_278(bParam0, 0))
	{
		return 0;
	}
	if (func_538(bParam0, -284267618))
	{
		return 1;
	}
	return 0;
}

int func_1556(bool bParam0)
{
	if (!func_278(bParam0, 0))
	{
		return 0;
	}
	if (func_538(bParam0, 363491182))
	{
		return 1;
	}
	return 0;
}

int func_1557(bool bParam0)
{
	if (!func_278(bParam0, 0))
	{
		return 0;
	}
	if (func_538(bParam0, 1406113494))
	{
		return 1;
	}
	return 0;
}

int func_1558(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1579(iParam0);
		case 1:
			return func_1580(iParam0);
		case 2:
			return func_1581(iParam0);
		case 3:
			return func_1582(iParam0);
	}
	return 0;
}

int func_1559(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1583(iParam0);
		case 1:
			return func_1584(iParam0);
		case 2:
			return func_1585(iParam0);
		case 3:
			return func_1586(iParam0);
		case 4:
			return func_1587(iParam0);
		case 5:
			return func_1588(iParam0);
		case 6:
			return func_1589(iParam0);
		case 7:
			return func_1590(iParam0);
		case 8:
			return func_1591(iParam0);
	}
	return 0;
}

int func_1560(struct<4> Param0, int iParam4, bool bParam5)
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
	if (!func_842(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_279(Var1.f_4);
	if (iVar15 == joaat("horse"))
	{
		Var16 = { func_1592(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_1593(joaat("update"), &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("clothing"))
	{
		Var44 = { func_1594(Param0, 1) };
		Var44.f_10 = iParam4;
		iVar0 = func_1595(joaat("update"), &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var61 = { func_1562(&Var1) };
		Var61.f_10 = iParam4;
		iVar0 = func_1563(joaat("update"), &Var61, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_1561(var uParam0, int iParam1, bool bParam2)
{
	return INVENTORY::_0x033EE4B89F3AC545(func_282(bParam2), uParam0, iParam1);
}

struct<16> func_1562(var uParam0)
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

int func_1563(int iParam0, var uParam1, bool bParam2)
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
					func_1564(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1564(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16))
	{
		func_1564(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_1564(int iParam0, int iParam1)
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
	func_1596(iParam0, iParam1);
}

void func_1565(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, var uParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, iParam16, uParam15);
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
	func_1298(iParam0, 1);
	func_1299(iParam0, 1);
	func_1300(iParam0, 128);
}

void func_1566(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam3 = PED::_GET_PED_CARCASS_QUALITY(iParam0);
	*uParam2 = FLOCK::_0xF8B48A361DC388AE(iParam0);
	if (*uParam2 == 2)
	{
		*uParam1 = 4;
	}
	else if (*uParam2 == 1)
	{
		*uParam1 = 3;
	}
	else
	{
		*uParam4 = PED::_0x7BCC6087D130312A(iParam0);
		switch (*uParam4)
		{
			case 0:
				*uParam1 = 0;
				break;
			case 1:
				*uParam1 = 1;
				break;
			case -1:
			case 2:
				*uParam1 = 2;
				break;
		}
	}
}

bool func_1567(var uParam0, int iParam1, int iParam2, int iParam3)
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
	uVar2 = PED::_0x9E7738B291706746(uParam0, iParam1, iParam2);
	return uVar2;
}

void func_1568(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	switch (func_840(iParam0))
	{
		case -2061583405:
			bVar0 = func_1597(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1597(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1597(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1597(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1597(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1597(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1577();
	}
	if (bParam1)
	{
		func_1491(0, 0);
	}
}

void func_1569(int iParam0)
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
	Var2 = { func_540(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_543(&Var2, &iVar0, &iVar1, 0))
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
		func_544(iVar0);
	}
}

void func_1570(var uParam0, bool bParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_1598(iParam2, *uParam0);
	func_1599(uParam0->f_1[*uParam0 /*5*/], bParam1, -1, 1, 0);
	*uParam0++;
}

int func_1571(bool bParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_606(bParam0, 0, 0) };
	Var5 = { func_610(bParam0, Var0, Var0.f_4, 0) };
	if (func_843(bParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x9A113C660AEA3832(func_282(0), &Var5, iParam1);
	return 1;
}

void func_1572(bool bParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_606(bParam0, 0, 0) };
	Var5 = { func_610(bParam0, Var0, Var0.f_4, 0) };
	if (func_843(bParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_282(0), &Var5, bParam1);
}

int func_1573(bool bParam0)
{
	if (func_90() == -1)
	{
		if (Global_40.f_4283 != 0)
		{
			if (bParam0 == 1164374808)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_1574(bool bParam0, var uParam1, int iParam2, bool bParam3)
{
	var uVar0;
	bool bVar1;

	bVar1 = bParam0;
	if (Global_1946804->f_2657.f_19 >= 18)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_1600(bVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_1571(bParam0, 0))
	{
		return 0;
	}
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = bVar1;
	if (func_840(bParam0) != -999503751)
	{
		func_1570(&(Global_1946804->f_2657.f_26.f_26), bParam0, Global_1946804->f_2657.f_19);
	}
	Global_1946804->f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_1575(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_1183();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846 /* GXTEntry: "John\'s Classic Hat" */;
	}
	return -1535516064 /* GXTEntry: "Arthur\'s Hat" */;
}

int func_1576(bool bParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_606(bParam0, 0, 0) };
	Var5 = { func_610(bParam0, Var0, Var0.f_4, 0) };
	if (func_843(bParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(iParam1, func_282(0), &Var5);
	return 1;
}

void func_1577()
{
	int iVar0;

	if (func_90() == -1)
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

bool func_1578(int iParam0)
{
	return func_1602(func_1601(iParam0));
}

int func_1579(int iParam0)
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

int func_1580(int iParam0)
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

int func_1581(int iParam0)
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

int func_1582(int iParam0)
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

int func_1583(int iParam0)
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

int func_1584(int iParam0)
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

int func_1585(int iParam0)
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

int func_1586(int iParam0)
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

int func_1587(int iParam0)
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

int func_1588(int iParam0)
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

int func_1589(int iParam0)
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

int func_1590(int iParam0)
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

int func_1591(int iParam0)
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

struct<28> func_1592(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_282(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_1562(&Var28) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_1593(int iParam0, var uParam1, bool bParam2)
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
					func_1564(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1564(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 28))
	{
		func_1564(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<17> func_1594(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_282(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_1562(&Var17) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_1595(int iParam0, var uParam1, bool bParam2)
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
					func_1564(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1564(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17))
	{
		func_1564(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_1596(int iParam0, int iParam1)
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

int func_1597(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (!func_1600(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_840(iParam0) != -999503751)
		{
			func_1603(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_840(iParam0) != -999503751)
	{
		func_1603(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1571(iParam0, 1);
	return 1;
}

void func_1598(int iParam0, var uParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_1599(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_0x93FFD92F05EC32FD(uParam0->f_3.f_1))
	{
		func_1604(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_1164(func_1343(bParam1), 1);
		if (uParam0->f_1 == -1)
		{
		}
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
	uParam0->f_2 = iParam4;
	*uParam0 = bParam1;
	uParam0->f_3 = 0;
	if (bParam3)
	{
		func_1605(uParam0);
	}
}

int func_1600(bool bParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1946804->f_2657.f_19)
	{
		if (bParam0 == &Global_1946804->f_2657[*uParam1])
		{
			return 1;
		}
		*uParam1++;
	}
	return 0;
}

int func_1601(int iParam0)
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

bool func_1602(var uParam0)
{
	return (Global_1946804->f_2657.f_26.f_6 && uParam0) != 0;
}

void func_1603(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = func_1606(iParam1);
	func_1607(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_1608(&(uParam0->f_26), iVar1);
		if (func_1609(uParam0->f_26, &iVar0))
		{
			func_1610(iVar0, iVar1);
		}
	}
}

void func_1604(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_1611(&(uParam0->f_3));
}

void func_1605(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_1612(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

var func_1606(int iParam0)
{
	return &(Global_1946804->f_2657.f_26.f_7[iParam0]);
}

void func_1607(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = &Global_1946804->f_2657.f_26.f_7[iParam0];
	Global_1946804->f_2657.f_26.f_7[iParam0] = &Global_1946804->f_2657.f_26.f_7[iParam1];
	Global_1946804->f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_1608(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_1604(uParam0->f_1[iParam1 /*5*/]);
	*(uParam0->f_1[iParam1 /*5*/]) = { *(uParam0->f_1[*uParam0 /*5*/]) };
}

int func_1609(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1946804->f_2657.f_19)
	{
		if (&Global_1946804->f_2657.f_26.f_7[*uParam1] == iParam0)
		{
			return 1;
		}
		*uParam1++;
	}
	return 0;
}

void func_1610(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_1611(var uParam0)
{
	if (*uParam0 && PED::_0x93FFD92F05EC32FD(uParam0->f_1))
	{
		PED::_0x13E7320C762F0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_1612(var uParam0, var uParam1, var uParam2)
{
	var uVar0;

	uVar0 = func_1613(func_1183());
	if (*uParam0)
	{
		func_1611(uParam0);
	}
	uParam0->f_1 = PED::_0xF6D9E1F3560CBF8E(uVar0, uParam1, 0, func_90() != -1, uParam2);
	*uParam0 = 1;
}

int func_1613(int iParam0)
{
	if (func_90() == -1)
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

