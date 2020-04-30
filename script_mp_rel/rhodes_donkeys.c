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
	int iLocal_17 = 0;
	char* sLocal_18 = NULL;
	char* sLocal_19[2] = { NULL, NULL };
	char* sLocal_22 = NULL;
	int iLocal_23 = 0;
	int iLocal_24[2] = { 0, 0 };
	int iLocal_27 = 0;
	vector3 vLocal_28[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_35[2] = { 0, 0 };
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	vector3 vLocal_40 = { 0f, 0f, 0f };
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = -1;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 1097859072;
	var uLocal_63 = 1000;
	var uLocal_64 = 500;
	var uLocal_65 = 1067450368;
	var uLocal_66 = 5000;
	var uLocal_67 = 42;
	var uLocal_68 = 1103626240;
	var uLocal_69 = 1077936128;
	var uLocal_70 = 1106247680;
	var uLocal_71 = 1103101952;
	var uLocal_72 = 1109393408;
	var uLocal_73 = 1097859072;
	var uLocal_74 = 1103626240;
	var uLocal_75 = 1061997773;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	var uLocal_78[2] = { 0, 0 };
	int iLocal_81 = 0;
	bool bLocal_82 = false;
	bool bLocal_83 = false;
#endregion

void __EntryFunction__()
{
	fLocal_15 = 1f;
	fLocal_16 = 1f;
	iLocal_44 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
	}
	while (!func_2())
	{
		BUILTIN::WAIT(0);
	}
	func_1();
}

void func_1()
{
	int iVar0;

	if (iLocal_43 != 0)
	{
		if (ENTITY::_0x1FF441D7954F8709(iLocal_43))
		{
			ENTITY::_0xD2B9C78537ED5759(iLocal_43);
		}
	}
	if (bLocal_83)
	{
		func_3();
		bLocal_83 = false;
	}
	if (STREAMING::IS_MODEL_VALID(iLocal_27))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_27);
	}
	if (STREAMING::IS_MODEL_VALID(iLocal_39))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_39);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_24)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(&(uLocal_78[iVar0])))
		{
			VOLUME::_DELETE_VOLUME(&(uLocal_78[iVar0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(&(iLocal_24[iVar0])))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iLocal_24[iVar0]);
		}
		if (PHYSICS::DOES_ROPE_EXIST(&(uLocal_35[iVar0])))
		{
			PHYSICS::DELETE_ROPE(uLocal_35[iVar0]);
		}
		iVar0++;
	}
	if (ANIMSCENE::_0x25557E324489393C(iLocal_23))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_23);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_77))
	{
		VOLUME::_DELETE_VOLUME(iLocal_77);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_81))
	{
		VOLUME::_DELETE_VOLUME(iLocal_81);
	}
	if (iLocal_44 != -1)
	{
		func_4();
		AUDIO::RELEASE_SOUND_ID(iLocal_44);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2()
{
	if (func_5())
	{
		return 1;
	}
	if (!bLocal_82)
	{
		bLocal_82 = func_6();
	}
	switch (func_7())
	{
		case 0:
			func_8();
			func_9(1);
			break;
		case 1:
			func_10();
			func_9(2);
			break;
		case 2:
			if (func_11())
			{
				func_9(3);
			}
			break;
		case 3:
			if (func_12())
			{
				func_9(4);
			}
			break;
		case 4:
			if (func_13() && func_14())
			{
				if (func_15(12))
				{
					func_16();
					func_9(9);
				}
				else
				{
					func_9(5);
				}
			}
			break;
		case 5:
			if (func_17())
			{
				func_9(6);
			}
			break;
		case 6:
			if (func_18())
			{
				func_9(8);
			}
			break;
		case 7:
			if (func_19())
			{
				func_9(10);
			}
			if (func_20())
			{
				bLocal_82 = false;
				if (ANIMSCENE::_0x25557E324489393C(iLocal_23))
				{
					ANIMSCENE::RESET_ANIM_SCENE(iLocal_23, 0);
				}
				func_21(iLocal_81, 0, 0, 1, 1, 0);
				if (func_15(12))
				{
					func_22();
					func_16();
					func_9(9);
				}
				else
				{
					func_9(5);
				}
			}
			break;
		case 8:
			if (func_19())
			{
				func_9(10);
			}
			func_23();
			if (bLocal_82)
			{
				if (ANIMSCENE::_0x25557E324489393C(iLocal_23))
				{
					if (ANIMSCENE::_0x3FBC3F51BF12DFBF(iLocal_23) < 0.99f)
					{
						return 0;
					}
				}
				func_4();
				func_24();
				func_9(7);
			}
			if (func_25())
			{
				func_24();
				func_9(7);
			}
			break;
		case 9:
			if (func_19())
			{
				func_9(10);
			}
			if (bLocal_82)
			{
				func_9(7);
			}
			break;
		case 10:
			func_4();
			func_26();
			func_9(11);
			break;
		case 11:
			if (func_20())
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_3()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (&Global_1938579->f_291[iVar0 /*2*/] == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			Global_1938579->f_302 = (Global_1938579->f_302 + (Global_1938579->f_291[iVar0 /*2*/])->f_1);
			Global_1938579->f_291[iVar0 /*2*/] = 0;
			(Global_1938579->f_291[iVar0 /*2*/])->f_1 = 0;
			func_27();
			return;
		}
		iVar0++;
	}
}

void func_4()
{
	if (!AUDIO::_0x84848E1C0FC67DBB(iLocal_44))
	{
		AUDIO::_0x3210BCB36AF7621B(iLocal_44);
	}
}

int func_5()
{
	if (func_28() != -1)
	{
		return 1;
	}
	if (func_29() != 111)
	{
		return 1;
	}
	return 0;
}

int func_6()
{
	if ((MISC::GET_FRAME_COUNT() % 60) == 0)
	{
		if (func_7() == 8 && func_15(12))
		{
			return 1;
		}
		if (func_7() == 9 && func_15(3))
		{
			return 1;
		}
	}
	return 0;
}

int func_7()
{
	return iLocal_17;
}

void func_8()
{
	iLocal_27 = joaat("a_c_donkey_01");
	iLocal_39 = 314558067;
	vLocal_40 = { 1404.02f, -1324.268f, 76.7704f };
	*(vLocal_28[0 /*3*/]) = { 1400.77f, -1315.403f, 76.6572f };
	*(vLocal_28[1 /*3*/]) = { 1407.911f, -1332.822f, 76.6569f };
	sLocal_18 = "script@ambient@generic@cotton_gin@action";
	sLocal_19[0] = "DONKEY_0";
	sLocal_19[1] = "DONKEY_1";
	sLocal_22 = "COTTON_PRESS";
	func_30(vLocal_28[0 /*3*/], 50, 10, 0, 0);
	func_30(vLocal_28[1 /*3*/], 50, 10, 0, 0);
	func_31(&uLocal_45, 0);
	func_32(&uLocal_45, 1);
	func_33(&uLocal_45, 1);
	func_34(&uLocal_45, 1);
	func_35(&uLocal_45, 1);
	func_36(&uLocal_45, 1);
	func_37(&uLocal_45, 1);
	func_38(&uLocal_45, 1);
	func_39(&uLocal_45, 1);
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_77))
	{
		iLocal_77 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1439.646f, -1296.078f, 78.22333f, 0f, 0f, 15.93833f, 5.460037f, 5.05896f, 3.246991f, "m_volDonkeyPen");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_81))
	{
		iLocal_81 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1403.892f, -1324.662f, 76.65739f, 0f, 0f, 0f, 19.09795f, 13.32395f, 7.186517f, "m_volVehicleAntiGrief");
	}
	iLocal_44 = AUDIO::GET_SOUND_ID();
}

void func_9(int iParam0)
{
	iLocal_17 = iParam0;
}

void func_10()
{
	STREAMING::REQUEST_MODEL(iLocal_27, false);
	STREAMING::REQUEST_MODEL(iLocal_39, false);
	if (!ANIMSCENE::_0x25557E324489393C(iLocal_23))
	{
		iLocal_23 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_18, 1, 0, false, true);
	}
	if (PED::_0x5C16855277819BBF() <= 2)
	{
		PED::_0xED9582B3DA8F02B4(2);
	}
}

int func_11()
{
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_27) || !STREAMING::HAS_MODEL_LOADED(iLocal_39))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(iLocal_23, 1, 0))
	{
		if (!ANIMSCENE::_0x59606519FF9D3EC2(iLocal_23, 1))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_23);
		}
		return 0;
	}
	if (!PED::_0x5E420FF293EE5472())
	{
		return 0;
	}
	return 1;
}

int func_12()
{
	if (BUILTIN::VDIST2(Global_35, vLocal_40) > 10000f)
	{
		return 0;
	}
	return 1;
}

int func_13()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(&(iLocal_24[iVar0])))
		{
			iLocal_24[iVar0] = func_40(iLocal_27, *(vLocal_28[iVar0 /*3*/]), 95f, 1, 1, 0, 1, 0, 0, 0, 0);
			if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_24[iVar0])))
			{
				PED::_SET_PED_SCALE(&(iLocal_24[iVar0]), 0.67f);
				PED::SET_PED_CONFIG_FLAG(&(iLocal_24[iVar0]), 136, true);
				PED::SET_PED_CONFIG_FLAG(&(iLocal_24[iVar0]), 441, true);
				PED::SET_PED_CONFIG_FLAG(&(iLocal_24[iVar0]), 297, true);
				PED::SET_PED_CONFIG_FLAG(&(iLocal_24[iVar0]), 407, true);
				PED::SET_PED_CONFIG_FLAG(&(iLocal_24[iVar0]), 419, true);
				PED::_0xAE6004120C18DF97(&(iLocal_24[iVar0]), 0, 0);
				TASK::TASK_STAND_STILL(&(iLocal_24[iVar0]), -1);
				PED::_SET_PED_BODY_COMPONENT(&(iLocal_24[iVar0]), -937613161);
				PED::_UPDATE_PED_VARIATION(&(iLocal_24[iVar0]), 0, 1, 1, 1, 0);
				if (!VOLUME::_DOES_VOLUME_EXIST(&(uLocal_78[iVar0])))
				{
					uLocal_78[iVar0] = VOLUME::_0x0EB78C2B156635B1(665633627, *(vLocal_28[iVar0 /*3*/]), 0f, 0f, 0f, 1.5f, 1.5f, 1f);
					PED::_0x7C00CFC48A782DC0(&(uLocal_78[iVar0]), &(iLocal_24[iVar0]), 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
				}
			}
			return 0;
		}
		iVar0++;
	}
	if (!bLocal_83)
	{
		func_41(10);
		bLocal_83 = true;
	}
	return 1;
}

int func_14()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_38))
	{
		if (iLocal_43 == 0)
		{
			iLocal_43 = ENTITY::_0x6F3068258A499E52(iLocal_39, vLocal_40, 11);
		}
		else if (ENTITY::_0x1FF441D7954F8709(iLocal_43))
		{
			iLocal_38 = ENTITY::_0x4735E2A4BB83D9DA(iLocal_43);
		}
		return 0;
	}
	return 1;
}

int func_15(int iParam0)
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
	iVar0 = func_43(func_42());
	if (func_44(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_44(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return 1;
		}
	}
	if (func_44(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return 1;
		}
	}
	if (func_44(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_44(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_44(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return 1;
		}
	}
	if (func_44(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_44(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return 1;
		}
	}
	if (func_44(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_44(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_44(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_44(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_44(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_44(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return 1;
		}
	}
	if (func_44(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_44(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_44(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return 1;
		}
	}
	return 0;
}

void func_16()
{
	int iVar0;

	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_77))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_24[iVar0])))
		{
			func_45(&(iLocal_24[iVar0]), VOLUME::_0xF70F00013A62F866(iLocal_77) + Vector(0f, 0f, (IntToFloat(iVar0) * 1f)), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 2, 1073741824 /* Float: 2f */);
			TASK::TASK_WANDER_IN_VOLUME(&(iLocal_24[iVar0]), iLocal_77, 1f, 3f, 1);
		}
		iVar0++;
	}
}

int func_17()
{
	int iVar0;

	if (!ANIMSCENE::_0x25557E324489393C(iLocal_23))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(iLocal_23, 1, 0))
	{
		if (!ANIMSCENE::_0x59606519FF9D3EC2(iLocal_23, 1))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_23);
		}
		return 0;
	}
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_23, 1404.02f, -1324.268f, 76.71f, 0f, 0f, -81f, 2);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_24[iVar0])))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_23, &(sLocal_19[iVar0]), &(iLocal_24[iVar0]), 0);
		}
		iVar0++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_38))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_23, sLocal_22, iLocal_38, 0);
	}
	ANIMSCENE::START_ANIM_SCENE(iLocal_23);
	return 1;
}

int func_18()
{
	int iVar0;

	if ((!ENTITY::IS_ENTITY_DEAD(iLocal_38) && !ENTITY::IS_ENTITY_DEAD(&(iLocal_24[0]))) && !ENTITY::IS_ENTITY_DEAD(&(iLocal_24[1])))
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (!PHYSICS::DOES_ROPE_EXIST(&(uLocal_35[iVar0])))
			{
				uLocal_35[iVar0] = PHYSICS::_0xE9C59F6809373A99(ENTITY::GET_ENTITY_COORDS(&(iLocal_24[iVar0]), true, false), 0f, 0f, 0f, 1f, 6, 1, -1, -1082130432);
				PHYSICS::_0x522FA3F490E2F7AC(&(uLocal_35[iVar0]), 1, 1);
				PHYSICS::_0x8D59079C37C21D78(&(uLocal_35[iVar0]), 2.5f);
				return 0;
			}
			iVar0++;
		}
		PHYSICS::_0x462FF2A432733A44(&(uLocal_35[0]), &(iLocal_24[0]), iLocal_38, 0f, 0f, 0f, 0f, 0f, 0f, "PH_Harness", "donkeyRopeConnect1");
		PHYSICS::_0x462FF2A432733A44(&(uLocal_35[1]), &(iLocal_24[1]), iLocal_38, 0f, 0f, 0f, 0f, 0f, 0f, "PH_Harness", "donkeyRopeConnect2");
		return 1;
	}
	return 0;
}

int func_19()
{
	var uVar0;

	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (func_46(&(iLocal_24[iLocal_76]), 0, &uLocal_45, &uVar0, 0, 0))
		{
			return 1;
		}
		if (PED::_0x77525BBF433F2CD6(&(iLocal_24[iLocal_76])))
		{
			return 1;
		}
		iLocal_76++;
		if (iLocal_76 >= 2)
		{
			iLocal_76 = 0;
		}
	}
	return 0;
}

int func_20()
{
	if ((MISC::GET_FRAME_COUNT() % 6) != 0)
	{
		return 0;
	}
	if (BUILTIN::VDIST2(Global_35, vLocal_40) < 3600f)
	{
		return 0;
	}
	if (CAM::IS_SPHERE_VISIBLE(1439.646f, -1296.078f, 78.22333f, 2f) || CAM::IS_SPHERE_VISIBLE(1403.686f, -1324.119f, 73.60623f, 9.5f))
	{
		return 0;
	}
	return 1;
}

void func_21(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 8;
	if (bParam1)
	{
		iVar0 |= 72;
	}
	if (bParam2)
	{
		iVar0 |= 131072;
	}
	if (bParam3)
	{
		iVar0 |= 24;
	}
	if (bParam4)
	{
		iVar0 |= 40;
	}
	if (bParam5)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

void func_22()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (PHYSICS::DOES_ROPE_EXIST(&(uLocal_35[iVar0])))
		{
			PHYSICS::DELETE_ROPE(uLocal_35[iVar0]);
		}
		iVar0++;
	}
}

void func_23()
{
	if (AUDIO::_0xE368E8422C860BA7("COTTON_GIN", "OFF_MISSION_SOUNDS", -2) && AUDIO::_0x84848E1C0FC67DBB(iLocal_44))
	{
		AUDIO::_0xDCF5BA95BBF0FABA(iLocal_44, "COTTON_GIN", vLocal_40, "OFF_MISSION_SOUNDS", 0, 0, 1);
	}
}

void func_24()
{
	int iVar0;

	if (!ANIMSCENE::_0x25557E324489393C(iLocal_23))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_PAUSED(iLocal_23, 1);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_24[iVar0])))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_23, &(sLocal_19[iVar0]), &(iLocal_24[iVar0]));
			TASK::TASK_STAND_STILL(&(iLocal_24[iVar0]), -1);
		}
		iVar0++;
	}
}

int func_25()
{
	int iVar0;
	int iVar1;

	if ((MISC::GET_FRAME_COUNT() % 20) != 0)
	{
		return 0;
	}
	if (BUILTIN::VDIST2(Global_35, vLocal_40) > 625f)
	{
		return 0;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_81))
	{
		return 0;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar1 = ENTITY::_0x84CCF9A12942C83D(iLocal_81, iVar0, 2, 1, 0, 0);
	ITEMSET::DESTROY_ITEMSET(iVar0);
	if (iVar1 > 0)
	{
		return 1;
	}
	return 0;
}

void func_26()
{
	int iVar0;
	int iVar1;

	ANIMSCENE::SET_ANIM_SCENE_PAUSED(iLocal_23, 1);
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (func_47(&(iLocal_24[iVar1]), 0))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_23, &(sLocal_19[iVar1]), &(iLocal_24[iVar1]));
			if (PHYSICS::DOES_ROPE_EXIST(&(uLocal_35[iVar1])))
			{
				PHYSICS::DETACH_ROPE_FROM_ENTITY(&(uLocal_35[iVar1]), &(iLocal_24[iVar1]));
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_HORSE_ACTION(0, 1, 0, 0);
			TASK::_TASK_SMART_FLEE_STYLE_COORD(0, Global_35, 3, 256, 10000f, 10000, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(&(iLocal_24[iVar1]), 3f);
			TASK::TASK_PERFORM_SEQUENCE(&(iLocal_24[iVar1]), iVar0);
			PED::SET_PED_KEEP_TASK(&(iLocal_24[iVar1]), true);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		iVar1++;
	}
}

void func_27()
{
	if (Global_1938579->f_302 > 300)
	{
		Global_1938579->f_302 = 300;
	}
	STREAMING::_0x2F9AC754FE179D58(func_48());
}

int func_28()
{
	return Global_1572887->f_13;
}

int func_29()
{
	return Global_1893575->f_2;
}

int func_30(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_49(*uParam0, 0f, 0f, 0f))
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

void func_31(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		uParam0->f_1 = 0;
		func_50(uParam0, 1);
		func_51(uParam0, 1);
		func_52(uParam0, 1);
		func_53(uParam0, 1);
		func_54(uParam0, 1);
		func_37(uParam0, 1);
		func_55(uParam0, 1);
	}
	else
	{
		uParam0->f_1 = -1;
		func_50(uParam0, 0);
		func_51(uParam0, 0);
		func_52(uParam0, 0);
		func_53(uParam0, 0);
		func_54(uParam0, 0);
		func_37(uParam0, 0);
		func_55(uParam0, 0);
	}
}

void func_32(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_56(&(uParam0->f_1), 256);
	}
	else
	{
		func_57(&(uParam0->f_1), 256);
	}
}

void func_33(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_56(&(uParam0->f_1), 4);
	}
	else
	{
		func_57(&(uParam0->f_1), 4);
	}
}

void func_34(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_56(&(uParam0->f_1), 2);
	}
	else
	{
		func_57(&(uParam0->f_1), 2);
	}
}

void func_35(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_56(&(uParam0->f_1), 1);
	}
	else
	{
		func_57(&(uParam0->f_1), 1);
	}
}

void func_36(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_56(&(uParam0->f_1), 16);
	}
	else
	{
		func_57(&(uParam0->f_1), 16);
	}
}

void func_37(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_57(uParam0, 1024);
	}
	else
	{
		func_56(uParam0, 1024);
	}
}

void func_38(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_56(&(uParam0->f_1), 2048);
	}
	else
	{
		func_57(&(uParam0->f_1), 2048);
	}
}

void func_39(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_57(uParam0, 128);
	}
	else
	{
		func_56(uParam0, 128);
	}
}

int func_40(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, false, false);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_58(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_41(int iParam0)
{
	int iVar0;

	if (iParam0 > 150)
	{
		iParam0 = 150;
	}
	if (iParam0 > (Global_1938579->f_302 - 150))
	{
	}
	if (func_59(&iVar0))
	{
		if ((Global_1938579->f_291[iVar0 /*2*/])->f_1 != iParam0)
		{
			Global_1938579->f_302 = (Global_1938579->f_302 + (Global_1938579->f_291[iVar0 /*2*/])->f_1);
			(Global_1938579->f_291[iVar0 /*2*/])->f_1 = iParam0;
			Global_1938579->f_302 = (Global_1938579->f_302 - iParam0);
			STREAMING::_0x2F9AC754FE179D58(func_48());
		}
		return;
	}
	iVar0 = func_60();
	if (iVar0 == -1)
	{
		return;
	}
	(Global_1938579->f_291[iVar0 /*2*/])->f_1 = iParam0;
	Global_1938579->f_291[iVar0 /*2*/] = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1938579->f_302 = (Global_1938579->f_302 - iParam0);
	STREAMING::_0x2F9AC754FE179D58(func_48());
}

int func_42()
{
	return &Global_1902689;
}

int func_43(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

bool func_44(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_45(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	bool bVar4;
	var uVar5;
	int iVar6;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		uVar3 = PED::_0xD5FE956C70FF370B(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_0x221F4D9912B7FE86(iVar1, 1);
		}
	}
	if (iParam0 == func_61(Global_34) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_62(iParam0))
	{
		if (func_63(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (func_64(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_45(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_45(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_64(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 0, 1);
		}
	}
	if (func_64(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, 1, func_64(iParam5, 32), 1);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, 1, func_64(iParam5, 32), 1);
			ENTITY::_0x9587913B9E772D29(iParam0, 0);
		}
	}
	else if (func_64(iParam5, 129))
	{
		if (func_64(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::_0x0918E3565C20F03C(iParam0, vParam1, fParam4, func_64(iParam5, 32), 1);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, 1, func_64(iParam5, 32), 1);
	}
	if (bVar4)
	{
		if (!func_64(iParam5, 16))
		{
			PED::_0x7DE9692C6F64CFE8(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), uVar3, 0, 0);
		}
		if (func_62(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!func_64(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, 1, 0);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_34 && !func_64(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

int func_46(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_65(uParam2, 1, iVar0);
	}
	if (!Global_1939178->f_6 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_35, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (func_66(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_67(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1939178->f_21)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_68(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_67(iParam0, uParam2, *uParam3);
					return 1;
				}
				else if (func_69(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_67(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_70(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_67(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1939178->f_20 && func_71(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_67(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1939178->f_19)
		{
			if (func_72(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_73(Global_34, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_67(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_74(Global_34, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_67(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1939178->f_23) < 300)
			{
				if (func_75(Global_34, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_67(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (func_75(Global_34, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_67(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1939178->f_33 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_76(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_67(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1939178->f_19 || uParam2->f_12 < 20f)
			{
				if (func_77(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_67(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1939178->f_24 || Global_1939178->f_25)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_78(uParam2, 4000))
				{
					if ((func_79(iParam0, Global_1939178->f_35, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_80(uParam2, iParam0)) && func_81(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_67(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_79(iParam0, Global_1939178->f_35, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_80(uParam2, iParam0)) && func_81(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_67(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (Global_1939178->f_34 == 0)
			{
				if (Global_1939178->f_35 != 0)
				{
					if (func_82(iParam0, Global_1939178->f_35))
					{
						func_83();
						*uParam3 = 2;
						func_67(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_84(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_85() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_83();
						*uParam3 = 2;
						func_67(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (Global_1939178->f_36 != 0)
			{
				if (func_86())
				{
					if (func_82(iParam0, Global_1939178->f_36))
					{
						func_83();
						*uParam3 = 2;
						func_67(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_87(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_67(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1939178->f_50)
		{
			if (*uParam2 & -2147483648 != 0)
			{
				if (func_89(func_88(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(iParam0, true, false)) <= uParam2->f_30)
				{
					if (func_90(PLAYER::PLAYER_PED_ID(), iParam0, 1060437492 /* Float: 0.707f */) == 0)
					{
						*uParam3 = 1048576;
						func_67(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_28)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_91(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_67(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_92(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_67(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_93(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_67(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_94(uParam2, 4000))
				{
					if (func_95(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_67(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_20)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_96(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_67(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_97(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_67(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
	}
	return 0;
}

int func_47(int iParam0, int iParam1)
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
	if (func_64(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_64(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_64(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_64(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_64(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_64(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_64(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_64(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

float func_48()
{
	return (func_98(150f, BUILTIN::TO_FLOAT(Global_1938579->f_302)) / BUILTIN::TO_FLOAT(300));
}

bool func_49(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_50(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_57(uParam0, 4);
	}
	else
	{
		func_56(uParam0, 4);
	}
}

void func_51(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_57(uParam0, 8);
	}
	else
	{
		func_56(uParam0, 8);
	}
}

void func_52(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_57(uParam0, 16);
	}
	else
	{
		func_56(uParam0, 67108864);
		func_56(uParam0, 16);
	}
}

void func_53(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_57(uParam0, 32);
	}
	else
	{
		func_56(uParam0, 32);
	}
}

void func_54(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_57(uParam0, 64);
	}
	else
	{
		func_56(uParam0, 64);
	}
}

void func_55(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_57(uParam0, 1048576);
	}
	else
	{
		func_56(uParam0, 1048576);
	}
}

void func_56(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_57(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_58(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
			func_99(iParam0, 0, 1);
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
			func_100(iParam0, 0);
			bVar0 = true;
		}
		func_101(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, 0, 1, 1, 1, 0);
	}
}

int func_59(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(&(Global_1938579->f_291[iVar0 /*2*/]), false) && &Global_1938579->f_291[iVar0 /*2*/] == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			*iParam0 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_60()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!SCRIPTS::IS_THREAD_ACTIVE(&(Global_1938579->f_291[iVar0 /*2*/]), false))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_61(var uParam0)
{
	return uParam0;
}

bool func_62(int iParam0)
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

int func_63(int iParam0)
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

bool func_64(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_65(var uParam0, bool bParam1, int iParam2)
{
	func_102(iParam2);
	if (Global_1572887->f_13 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
		{
			return;
		}
		if (Global_1939178->f_6)
		{
			return;
		}
	}
	else
	{
		if (!Global_1275573->f_11)
		{
			return;
		}
		if (Global_1275573->f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		uParam0->f_10 = 0;
	}
	uParam0->f_5 = iParam2;
	if (Global_1572887->f_13 == -1)
	{
		uParam0->f_13 = Global_1939178->f_38;
	}
	else
	{
		uParam0->f_13 = func_103(0);
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
						if (PED::IS_PED_PLANTING_BOMB(Global_34))
						{
							func_57(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_104(1, 1))
						{
							func_57(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_34) && (!func_104(1, 1) || *uParam0 & 8192 != 0))
				{
					func_56(uParam0, 33554432);
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
			if (func_105(uParam0))
			{
				uParam0->f_15 = func_85();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_85() - uParam0->f_15) > 500)
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
	func_106(uParam0);
}

int func_66(int iParam0, var uParam1)
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
			if (iVar2 == Global_1939178->f_27)
			{
				return 0;
			}
			if (iVar2 == Global_1939178->f_26)
			{
				return 0;
			}
			if (!func_107(iParam0, uParam1, iVar2))
			{
				return 0;
			}
			if (func_108(iParam0, iVar2) <= func_109(uParam1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_67(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_110(iParam2, 1, 1, 1, 0))
	{
		func_57(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_111(uParam1, 1);
	func_112();
}

int func_68(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_113(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_114(uParam1);
			if (func_115(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_116(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_111(uParam1, 1);
						return 1;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > func_117(uParam1))
						{
							func_111(uParam1, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_69(int iParam0, int iParam1, var uParam2)
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
	if (func_118(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_114(uParam2);
		if (func_115(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_116(uParam2)
				{
					func_111(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_70(int iParam0, var uParam1)
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
	if (Global_1939178->f_34 != 0)
	{
		if (PED::_0xB676EFDA03DADA52(Global_1939178->f_34, 1) == iParam0)
		{
			return 0;
		}
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_107(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_116(uParam1)
		{
			fVar3 = func_114(uParam1);
			if (uParam1->f_12 < fVar3)
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar1, 17))
				{
					if (PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, fVar3, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_71(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_119(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_13 != -1)
	{
		if (iParam0 == Global_1275573->f_10)
		{
			if (!Global_1275573->f_11)
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

int func_72(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_85();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return 1;
	}
	return 0;
}

int func_73(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_120(uParam2);
			if (!WEAPON::IS_WEAPON_VALID(Global_1939178->f_40) || Global_1939178->f_40 == joaat("weapon_unarmed"))
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
			else if (WEAPON::IS_WEAPON_VALID(Global_1939178->f_40) && WEAPON::_0xEA522F991E120D45(Global_1939178->f_40))
			{
				PED::_0xD355E2F1BB41087E(iParam1, 5f);
			}
			else
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
		}
		if ((!WEAPON::IS_WEAPON_VALID(Global_1939178->f_40) || Global_1939178->f_40 == joaat("weapon_unarmed")) || (WEAPON::IS_WEAPON_VALID(Global_1939178->f_40) && WEAPON::_0x5809DBCA0A37C82B(Global_1939178->f_40)))
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
			if (func_81(uParam2, iParam1))
			{
				func_111(uParam2, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_74(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_121(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1939178->f_40) && !WEAPON::_0x5809DBCA0A37C82B(Global_1939178->f_40)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_34, &uVar0))
		{
			if (func_81(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_111(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_75(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_122(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_explosion"), vVar0, uParam2->f_23))
				{
					func_111(uParam2, 1);
					return 1;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_fire"), vVar0, uParam2->f_29))
				{
					func_111(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_potential_blast"), vVar0, uParam2->f_23))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_28, &vVar4, 0, 0);
					if (func_123(iParam1, vVar0, vVar4))
					{
						func_111(uParam2, 1);
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
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_explosion"), vVar0, uParam2->f_23))
				{
					func_111(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_potential_blast"), vVar0, uParam2->f_23))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_28, &vVar7, 0, 0);
					if (func_123(iParam1, vVar0, vVar7))
					{
						func_111(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	return 0;
}

int func_76(int iParam0, var uParam1)
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
	while (iVar0 < Global_1939178->f_33)
	{
		if (!func_107(iParam0, uParam1, &(Global_1939178->f_28[iVar0])) || iParam0 == &Global_1939178->f_28[iVar0])
		{
		}
		else
		{
			bVar13 = func_124(&(Global_1939178->f_28[iVar0]));
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(&(Global_1939178->f_28[iVar0]), false, false), vVar9);
			if (func_125(&(Global_1939178->f_28[iVar0])))
			{
				if (fVar1 < 35f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(&(Global_1939178->f_28[iVar0]), "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(&(Global_1939178->f_28[iVar0]), "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB")))
					{
						*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1939178->f_28[iVar0]), false, false) };
						*(vVar2[1 /*3*/]) = { vVar9 };
						uParam1->f_10 = iParam0;
						return 1;
					}
				}
			}
			if (func_126(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1939178->f_28[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_127(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1939178->f_28[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_128(uParam1, iParam0, fVar1, iVar0))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1939178->f_28[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_77(int iParam0, var uParam1)
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

int func_78(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_85();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_79(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1, 1) || DECORATOR::DECOR_EXIST_ON(iParam0, "DamagedByPlayer"))
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
		if (func_129(iVar0, &iVar2))
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
	if (func_130(iVar0, iParam0))
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

int func_80(var uParam0, int iParam1)
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

int func_81(var uParam0, int iParam1)
{
	if (func_131(uParam0))
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
	if ((PED::IS_PED_PERFORMING_MELEE_ACTION(Global_34, 8, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 9, true)) || PED::IS_PED_BEING_STEALTH_KILLED(iParam1))
	{
		return 0;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_34, 16, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 10, true))
	{
		return 0;
	}
	if (PED::_0xB65A4DAB460A19BD(Global_34) != 0)
	{
		return 1;
	}
	if (WEAPON::_0x8D50F43298AB9545(Global_34, iParam1))
	{
		return 1;
	}
	if (!PED::IS_PED_RAGDOLL(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_82(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return 1;
		}
		if (func_132(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_83()
{
}

int func_84(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_34);
	if (iVar0 != 0 && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iVar0)))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
		if (func_133(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_85();
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
						if (func_134(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_85();
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

int func_85()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_86()
{
	if (Global_1939178->f_36 == 0)
	{
		return 0;
	}
	if (Global_1939178->f_36 == Global_1939178->f_34)
	{
		return 0;
	}
	if (Global_1939178->f_37 <= 0)
	{
		return 0;
	}
	if ((func_85() - Global_1939178->f_37) >= 10000)
	{
		return 0;
	}
	return 1;
}

int func_87(var uParam0, int iParam1)
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
	fVar0 = func_109(uParam0);
	if (uParam0->f_12 > func_135(uParam0) && uParam0->f_12 > fVar0)
	{
		return 0;
	}
	iVar2 = func_136(iParam1);
	iVar1 = func_137(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || PED::_0x9D9473CB82D83A30(iParam1, Global_34, 0) == 1) || PED::_0x9D9473CB82D83A30(iParam1, uParam0->f_14, 0) == 1)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_88(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

float func_89(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

int func_90(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_138(iParam0, vVar0, iParam2);
}

int func_91(int iParam0, int iParam1, var uParam2)
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
	return func_139(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

int func_92(int iParam0, var uParam1)
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
	if (Global_1939178->f_18)
	{
		return 1;
	}
	if (*uParam1 & 33554432 != 0)
	{
		if (func_140(iParam0, uParam1, 1))
		{
			return 1;
		}
		if ((PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17)) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_34, 1, 0) == 1)
		{
			return 1;
		}
	}
	iVar0 = PED::GET_JACK_TARGET(Global_34);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, -1f, -1f, -1f))
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
			if (func_141(uParam1))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (iVar4 != Global_34)
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
			if (PED::_0x06087579E7AA85A9(iParam0, iVar4, -1f, -1f, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar4, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17))
				{
					if (!func_142(uParam1, iParam0))
					{
						if (func_134(iVar4, Global_35, 1) < 7f)
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

int func_93(int iParam0, var uParam1)
{
	if (!func_143(0))
	{
		return 0;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_34, 90f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17))
		{
			return 1;
		}
	}
	return 0;
}

int func_94(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_85();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_95(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_96(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_85();
	}
	else if (func_85() - uParam1->f_4) > func_144(uParam1)
	{
		return func_145(iParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

int func_97(var uParam0, int iParam1)
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
	if (Global_34 == iVar1 || Global_1939178->f_34 == iVar1)
	{
		return 1;
	}
	return 0;
}

float func_98(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_99(int iParam0, int iParam1, bool bParam2)
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

void func_100(int iParam0, bool bParam1)
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

void func_101(int iParam0, int iParam1)
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

void func_102(int iParam0)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	bool bVar3;

	if (Global_19 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1939178->f_32);
	Global_1939178->f_21 = func_146();
	if (Global_1939178->f_21)
	{
		Global_1939178->f_22 = MISC::GET_GAME_TIMER();
	}
	bVar1 = false;
	if (WEAPON::IS_WEAPON_VALID(Global_1939178->f_38))
	{
		bVar1 = true;
		if (PED::IS_PED_SHOOTING(Global_34))
		{
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_34, &uVar2))
			{
			}
			else
			{
				uVar2 = Global_1939178->f_38;
			}
			Global_1939178->f_40 = uVar2;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_147(&(Global_1939178->f_28), &(Global_1939178->f_33));
			Global_1939178->f_32 = iParam0;
			break;
		case 1:
			Global_1939178->f_24 = PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 4000);
			if (!Global_1939178->f_24)
			{
				if (bVar1 && WEAPON::_0x6E4E1A82081EABED(Global_1939178->f_38))
				{
					Global_1939178->f_24 = PED::_0xB65A4DAB460A19BD(Global_34) != 0;
				}
				if (Global_1939178->f_40 == 1151374672)
				{
					Global_1939178->f_24 = WEAPON::_0x46D42883E873C1D7(Global_34) > 0;
				}
			}
			break;
		case 2:
			bVar3 = WEAPON::IS_WEAPON_VALID(Global_1939178->f_40);
			if (bVar3 && WEAPON::_0x6E4E1A82081EABED(Global_1939178->f_40))
			{
				Global_1939178->f_19 = 0;
			}
			else
			{
				if (bVar3 && WEAPON::_0x5809DBCA0A37C82B(Global_1939178->f_40))
				{
					Global_1939178->f_19 = PED::_0x285D36C5C72B0569(Global_34) <= 3f;
				}
				else
				{
					Global_1939178->f_19 = PED::_0x285D36C5C72B0569(Global_34) <= 1f;
				}
				if (Global_1939178->f_19)
				{
					Global_1939178->f_23 = MISC::GET_FRAME_COUNT();
				}
			}
			break;
		default:
			Global_1939178->f_32 = iParam0 + 1;
			break;
	}
	Global_19 |= 4;
}

var func_103(int iParam0)
{
	return &(Global_1099294->f_372[iParam0 /*3*/]);
}

int func_104(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (func_148(bParam0, &iVar0, &iVar1))
	{
		if (bParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && PED::GET_PED_CONFIG_FLAG(iVar0, 6, false))
			{
				return 0;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && PED::GET_PED_CONFIG_FLAG(iVar1, 6, false))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_105(var uParam0)
{
	int iVar0;

	iVar0 = Global_1939178->f_34;
	if (func_28() == -1)
	{
		if (Global_1939178->f_34 == 0)
		{
			iVar0 = func_149(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1939178->f_34) || !&Global_1954472->f_1616[4])
	{
		iVar0 = func_149(uParam0);
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_137(iVar0) == -1)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
	{
		return 0;
	}
	uParam0->f_14 = iVar0;
	return 1;
}

void func_106(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_150(uParam0);
	}
}

int func_107(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_137(iParam2);
	}
	else
	{
		iVar1 = func_136(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_137(iParam0);
	}
	else
	{
		iVar0 = func_136(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return 1;
		}
	}
	if (func_44(*uParam1, 8388608))
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

float func_108(int iParam0, int iParam1)
{
	return func_132(iParam0, iParam1, 1, 1);
}

float func_109(var uParam0)
{
	return uParam0->f_28;
}

int func_110(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_111(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_57(uParam0, 134217728);
	}
	else
	{
		func_56(uParam0, 134217728);
	}
}

void func_112()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

int func_113(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
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
	if ((WEAPON::_0x6E4E1A82081EABED(Global_1939178->f_38) || 1151374672 == Global_1939178->f_38) && Global_1939178->f_21)
	{
	}
	else if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, 0, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar2) && iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2))
		{
			return 0;
		}
	}
	if (Global_1939178->f_34 != 0)
	{
		if (PED::_0xB676EFDA03DADA52(Global_1939178->f_34, 1) == iParam0)
		{
			return 0;
		}
	}
	if (bParam3)
	{
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_132(iVar0, iParam0, 1, 1) <= 4f)
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
		if (WEAPON::_0x6AD66548840472E5(func_151(iVar0, 0)))
		{
			if (func_152(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_114(var uParam0)
{
	return uParam0->f_17;
}

int func_115(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return 0;
	}
	fVar0 = -1f;
	if (!func_44(*uParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (PED::_0x06087579E7AA85A9(iParam1, Global_34, -1f, fParam3, -1f, fVar0))
	{
		return 1;
	}
	if (*uParam0 & 32768 != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_34, 17))
		{
			return 1;
		}
	}
	return 0;
}

int func_116(var uParam0)
{
	return uParam0->f_18;
}

int func_117(var uParam0)
{
	return uParam0->f_19;
}

int func_118(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_0x6AD66548840472E5(func_151(iVar0, 0)))
		{
			if (func_153(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_119(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1939178->f_12)
	{
		if ((bParam2 || Global_1939178->f_13 > 0) || Global_1939178->f_11 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1939178->f_9 == 1370593166)
	{
		return 0;
	}
	if (Global_1939178->f_14 > 0 || (bParam2 && Global_1939178->f_14 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1939178->f_7)
		{
			if (bParam2 || Global_1939178->f_15 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_120(var uParam0)
{
	return uParam0->f_24;
}

int func_121(var uParam0)
{
	return uParam0->f_22;
}

int func_122(var uParam0)
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

int func_123(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_154(iParam0, vParam4, 0.5f))
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

int func_124(int iParam0)
{
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, false))
	{
		if (Global_1939178->f_38 == joaat("weapon_unarmed"))
		{
			return 1;
		}
		if (WEAPON::IS_WEAPON_VALID(Global_1939178->f_40))
		{
			if (WEAPON::_0x959383DCD42040DA(Global_1939178->f_40) || WEAPON::_0xC4DEC3CA8C365A5D(Global_1939178->f_40))
			{
				return 1;
			}
		}
	}
	if (func_155(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_125(int iParam0)
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

int func_126(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_156(iParam1))
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

int func_127(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_156(iParam1))
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

int func_128(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = func_157(uParam0);
	if (func_156(iParam1))
	{
		return 0;
	}
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x2BA9D7BF629F920C(iParam1);
	}
	if (fParam2 < fVar0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, &(Global_1939178->f_28[iParam3]), 17))
		{
			if (PED::_0x06087579E7AA85A9(iParam1, &(Global_1939178->f_28[iParam3]), -1f, -1f, -1f, -1f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_129(int iParam0, int iParam1)
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

int func_130(int iParam0, int iParam1)
{
	if (PED::_0xB65A4DAB460A19BD(iParam0) == iParam1)
	{
		return 1;
	}
	if (WEAPON::_0x8D50F43298AB9545(iParam0, iParam1))
	{
		return 1;
	}
	if (!WEAPON::_0x6E4E1A82081EABED(func_158(iParam0, 1, 0, 0)) && !func_158(iParam0, 1, 0, 0) == 1151374672)
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

bool func_131(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

float func_132(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_133(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_134(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

float func_134(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

float func_135(var uParam0)
{
	return uParam0->f_25;
}

int func_136(int iParam0)
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

int func_137(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, true))
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

int func_138(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
		vVar3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_159(vVar3, vVar6);
	if (MISC::ABSF(fVar9) > fParam4)
	{
		if (fVar9 > 0f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_160(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

int func_139(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (Global_1939178->f_34 != 0)
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
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_1939178->f_34, 1, 1))
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
			if (func_129(Global_34, &iVar1))
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
		fVar2 = func_132(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_132(iParam0, Global_1939178->f_34, 0, 1) < 2.5f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1939178->f_34, iParam0))
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

int func_140(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_148(1, &iVar0, &iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iVar0 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17))
				{
					if (!bParam2 || !func_142(uParam1, iVar0))
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
			if (PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17))
			{
				if (!bParam2 || !func_142(uParam1, iVar1))
				{
					if (func_134(iVar1, Global_35, 1) < 5f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_141(var uParam0)
{
	return func_44(*uParam0, 131072);
}

int func_142(var uParam0, int iParam1)
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

int func_143(int iParam0)
{
	return 0;
}

int func_144(var uParam0)
{
	return uParam0->f_21;
}

int func_145(int iParam0, var uParam1, bool bParam2, float fParam3)
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
	if (PED::IS_PED_FACING_PED(iParam0, Global_34, 90f))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, Global_34))
		{
			return 1;
		}
	}
	return 0;
}

int func_146()
{
	if (func_161())
	{
		return 0;
	}
	if (Global_1572887->f_13 == -1)
	{
		if (Global_1939178->f_38 == joaat("weapon_lasso"))
		{
			return PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_ATTACK"));
		}
		return PED::GET_PED_RESET_FLAG(Global_34, 311);
	}
	else
	{
		return &(Global_1954472->f_1616[3]);
	}
	return 0;
}

void func_147(var uParam0, var uParam1)
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

int func_148(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1939178->f_26))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1939178->f_26))
		{
			*iParam1 = Global_1939178->f_26;
			iVar0 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1939178->f_27))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1939178->f_27))
		{
			if (PED::_0x3AA24CCC0D451379(Global_1939178->f_27) || ENTITY::IS_ENTITY_DEAD(Global_1939178->f_27))
			{
				*iParam2 = Global_1939178->f_27;
				iVar0 = 1;
			}
		}
	}
	if (Global_1939178->f_24 && !PED::IS_PED_INJURED(Global_34))
	{
		iVar1 = PED::_0xB65A4DAB460A19BD(Global_34);
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

int func_149(var uParam0)
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
			if (!Global_1939178->f_6)
			{
				iVar0 = PED::_0x4B19F171450E0D4F(Global_34);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = PED::_0xB65A4DAB460A19BD(Global_34);
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

void func_150(var uParam0)
{
	int iVar0;

	if (Global_1939178->f_32 == 0)
	{
		func_56(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1939178->f_33)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Global_1939178->f_28[iVar0])))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(&(Global_1939178->f_28[iVar0])))
				{
					func_57(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}

var func_151(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_152(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_153(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_153(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_154(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_155(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, joaat("weapon_unarmed"), iParam1))
		{
			return 1;
		}
		else if (!bParam2)
		{
			if (WEAPON::IS_WEAPON_VALID(Global_1939178->f_38))
			{
				if (WEAPON::_0x959383DCD42040DA(Global_1939178->f_38) || Global_1939178->f_38 == joaat("weapon_melee_knife"))
				{
					if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, Global_1939178->f_38, iParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_156(int iParam0)
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
	if (((((((((iVar0 == -1689755873 || iVar0 == 1690225020) || iVar0 == 1774730608) || iVar0 == 309374745) || iVar0 == -363194080) || iVar0 == 640190094) || iVar0 == -1085971095) || iVar0 == 49488831) || iVar0 == 343112864) || iVar0 == -2016812721)
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

float func_157(var uParam0)
{
	return uParam0->f_27;
}

int func_158(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

float func_159(vector3 vParam0, vector3 vParam3)
{
	float fVar0;

	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		vParam0.x = (vParam0.x / fVar0);
		vParam0.f_1 = (vParam0.y / fVar0);
	}
	fVar0 = BUILTIN::VMAG(vParam3);
	if (fVar0 != 0f)
	{
		vParam3.x = (vParam3.x / fVar0);
		vParam3.f_1 = (vParam3.y / fVar0);
	}
	return ((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y));
}

bool func_160(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

int func_161()
{
	switch (Global_1939178->f_38)
	{
		case joaat("weapon_melee_lantern"):
		case joaat("weapon_kit_binoculars"):
		case joaat("weapon_melee_lantern_electric"):
		case joaat("weapon_melee_davy_lantern"):
		case 1652431022: /* GXTEntry: "Refined Binoculars" */
			return 1;
		default:
			break;
	}
	return 0;
}

