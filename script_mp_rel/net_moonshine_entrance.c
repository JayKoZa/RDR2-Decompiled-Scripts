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
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	float fLocal_18 = 0f;
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	struct<93> Local_21 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 2, 0, 0, 0 } ;
	struct<10> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	fLocal_18 = 1f;
	fLocal_19 = 1f;
	func_1(ScriptParam_0);
	while (!func_2(0, 0) && !func_3())
	{
		func_4();
		BUILTIN::WAIT(0);
	}
	func_5();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9)
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Local_21.f_1 = vParam0.z;
	func_6(64);
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

int func_3()
{
	int iVar0;

	if (Local_21 == 34)
	{
		return 1;
	}
	if (!MISC::IS_BIT_SET(Global_1276808->f_201, 0))
	{
		return 1;
	}
	iVar0 = func_7(Global_1276808->f_200, 1);
	if (((Local_21.f_1 != iVar0 && iVar0 != -1) && Local_21 < 25) && !func_8())
	{
		return 1;
	}
	if ((!func_9(*(Local_21.f_12[3 /*3*/])) && Local_21 == 25) && BUILTIN::VDIST(*(Local_21.f_12[3 /*3*/]), Global_35) > Global_1901929->f_743.f_10)
	{
		return 1;
	}
	return 0;
}

void func_4()
{
	int iVar0;

	func_10();
	func_11();
	if (func_12(64))
	{
		if (Local_21 < 33)
		{
			func_13(33);
		}
	}
	else if (func_12(128))
	{
		if (Local_21 > 3)
		{
			if (Global_1276808->f_1 == 4)
			{
				if (Local_21 < 21)
				{
					func_13(21);
				}
				else if (func_14(Local_21.f_1) < 80f)
				{
					func_6(128);
				}
			}
			else if (Local_21 < 25)
			{
				func_13(25);
			}
			else if (func_14(Local_21.f_1) < 80f)
			{
				func_6(128);
			}
		}
	}
	func_15(&(Local_21.f_85));
	switch (Local_21)
	{
		case 0:
			func_16();
			func_13(1);
			break;
		case 1:
			if (func_17())
			{
				func_13(2);
			}
			break;
		case 2:
			if (func_18())
			{
				func_13(3);
			}
			break;
		case 3:
			if (func_12(128))
			{
				if (Global_1276808->f_1 == 4)
				{
					func_13(21);
				}
				else
				{
					func_13(25);
				}
				return;
			}
			if (Global_1276808->f_1 == 4)
			{
				func_13(21);
				return;
			}
			if (!func_19(PLAYER::PLAYER_ID(), 16) && (Global_1276808->f_1 == 3 || Global_1276808->f_1 == 2))
			{
				if (func_20())
				{
					if (func_21(PLAYER::PLAYER_ID(), 1, 0, 1))
					{
						func_22(8192, 0);
					}
					return;
				}
				func_13(10);
			}
			else
			{
				func_13(8);
			}
			break;
		case 8:
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_21.f_84) || !_NAMESPACE26::_0x81FB74C83C2ED69F(Local_21.f_84))
			{
				func_13(33);
			}
			func_23(0);
			if (Global_1276808->f_1 == 2 && !func_20())
			{
				func_13(10);
				return;
			}
			if (func_24(0))
			{
				if (func_21(PLAYER::PLAYER_ID(), 1, 0, 1))
				{
					func_22(8192, 0);
				}
				func_25(0);
				return;
			}
			else
			{
				func_25(1);
			}
			func_26();
			func_27();
			if (func_28())
			{
				func_29();
				func_25(0);
				func_30(Local_21.f_1);
				func_31(16384);
				func_13(5);
			}
			break;
		case 5:
			func_29();
			if (!func_19(PLAYER::PLAYER_ID(), 128))
			{
			}
			else
			{
				if (func_32())
				{
					func_13(4);
				}
				Jump @2059; //curOff = 753
				func_29();
				if (func_33())
				{
					func_34();
					NETWORK::_0x4B05B97BA46F419D(0);
					func_35(1, 1);
					func_13(6);
				}
				Jump @2059; //curOff = 788
				func_29();
				if (func_36())
				{
					func_13(7);
				}
				Jump @2059; //curOff = 807
				func_29();
				func_37();
				func_38();
				func_13(9);
				Jump @2059; //curOff = 828
				func_29();
				func_39();
				if (func_40())
				{
					func_41();
					func_13(30);
					return;
				}
				if ((ANIMSCENE::_0x25557E324489393C(Local_21.f_6) && ANIMSCENE::_0xD8254CB2C586412B(Local_21.f_6, 0)) && Local_21.f_4 == 5)
				{
					func_42(0);
					func_41();
					func_25(1);
					func_43();
					NETWORK::_0x4B05B97BA46F419D(1);
					func_35(1, 0);
					func_44();
					func_13(25);
				}
				Jump @2059; //curOff = 935
				if (func_45())
				{
					func_25(0);
					func_31(16384);
					if (Global_1276808->f_1 == 2)
					{
						func_13(11);
					}
					else
					{
						func_13(12);
					}
				}
				Jump @2059; //curOff = 982
				if (func_46())
				{
					func_47();
					func_13(13);
				}
				Jump @2059; //curOff = 1002
				func_48();
				func_13(13);
				Jump @2059; //curOff = 1015
				func_29();
				if (func_49())
				{
					if (func_50())
					{
						func_34();
						func_30(Local_21.f_1);
						func_13(15);
					}
					else
					{
						func_30(Local_21.f_1);
						func_35(1, 0);
						func_13(19);
					}
				}
				Jump @2059; //curOff = 1078
				func_29();
				if (!func_19(PLAYER::PLAYER_ID(), 128))
				{
				}
				else
				{
					if (func_32())
					{
						func_13(14);
					}
					Jump @2059; //curOff = 1115
					func_29();
					if (func_33())
					{
						NETWORK::_0x4B05B97BA46F419D(0);
						func_35(1, 1);
						func_13(16);
					}
					Jump @2059; //curOff = 1147
					func_29();
					if (func_36())
					{
						func_13(17);
					}
					Jump @2059; //curOff = 1167
					func_29();
					func_37();
					func_38();
					func_13(18);
					Jump @2059; //curOff = 1188
					func_29();
					func_39();
					if (func_40())
					{
						func_41();
						func_13(30);
						return;
					}
					if ((ANIMSCENE::_0x25557E324489393C(Local_21.f_6) && ANIMSCENE::_0xD8254CB2C586412B(Local_21.f_6, 0)) && Local_21.f_4 == 5)
					{
						func_41();
						func_25(1);
						func_43();
						NETWORK::_0x4B05B97BA46F419D(1);
						func_35(1, 0);
						func_44();
						func_51();
						func_13(25);
					}
					Jump @2059; //curOff = 1294
					if (func_52(0))
					{
						func_25(1);
						func_53(0, 1, 0);
						func_44();
						func_13(20);
					}
					Jump @2059; //curOff = 1327
					if (func_40())
					{
						func_13(30);
						return;
					}
					if (func_54())
					{
						func_51();
						func_13(25);
					}
					Jump @2059; //curOff = 1363
					if (func_45())
					{
						func_31(16384);
						Local_21.f_2 = 2;
						func_13(23);
					}
					Jump @2059; //curOff = 1391
					if (func_52(1))
					{
						func_30(Local_21.f_1);
						func_44();
						func_13(22);
					}
					Jump @2059; //curOff = 1420
					if (func_55())
					{
						func_13(24);
					}
					Jump @2059; //curOff = 1436
					if (func_19(PLAYER::PLAYER_ID(), 64) && func_56())
					{
						func_57(32768);
						func_13(25);
					}
					Jump @2059; //curOff = 1475
					func_23(0);
					if (func_40())
					{
						func_13(30);
						return;
					}
					if (func_24(1))
					{
						func_25(0);
						return;
					}
					else
					{
						func_25(1);
					}
					if (func_28())
					{
						func_25(0);
						func_13(26);
					}
					Jump @2059; //curOff = 1541
					if (func_32())
					{
						func_13(27);
					}
					Jump @2059; //curOff = 1557
					if (func_33())
					{
						func_13(28);
					}
					Jump @2059; //curOff = 1573
					func_37();
					func_58(2);
					NETWORK::_0x4B05B97BA46F419D(0);
					func_35(1, 1);
					func_13(29);
					Jump @2059; //curOff = 1603
					func_59();
					if (ANIMSCENE::_0x25557E324489393C(Local_21.f_6) && ANIMSCENE::_0xD8254CB2C586412B(Local_21.f_6, 0))
					{
						func_41();
						func_43();
						NETWORK::_0x442B4347B6EC36E8(PLAYER::PLAYER_PED_ID(), 1000, true);
						func_31(32768);
						func_13(32);
					}
					Jump @2059; //curOff = 1669
					if (func_60())
					{
						func_31(32768);
						func_53(1, 1, 0);
						func_13(31);
					}
					Jump @2059; //curOff = 1700
					if (func_61())
					{
						func_13(32);
					}
					Jump @2059; //curOff = 1716
					NETWORK::_0x4B05B97BA46F419D(1);
					func_35(0, 0);
					func_62(0);
					if (Global_1276808->f_1 == 4)
					{
						func_63(1);
						func_64(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
						func_58(32);
						func_58(64);
					}
					else if (Global_1276808->f_1 == 2)
					{
						if (_NAMESPACE26::_0x4BE6C13A45CCA8EC(Global_1275573->f_15) == PLAYER::PLAYER_ID())
						{
							func_63(1);
						}
						iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(Global_1275573->f_15);
						if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && !func_19(PLAYER::PLAYER_ID(), 16)) && func_19(iVar0, 2))
						{
							func_65(16);
							func_63(1);
						}
					}
					else if (Global_1276808->f_1 == 3)
					{
						func_63(1);
						func_64(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
						func_57(128);
					}
					func_13(33);
					Jump @2059; //curOff = 1920
					func_66();
					func_67();
					if (func_12(64))
					{
						if (Global_1276808->f_1 == 4)
						{
							func_63(1);
							func_64(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
						}
						func_6(64);
					}
					if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_21.f_84) || !_NAMESPACE26::_0x81FB74C83C2ED69F(Local_21.f_84))
					{
						func_13(34);
					}
					else if (func_68(128))
					{
						func_13(34);
					}
					else if (Local_21.f_3 != 0)
					{
						func_13(34);
					}
					else
					{
						func_13(0);
					}
				}
			}
		}

void func_5()
{
	int iVar0;

	func_66();
	func_23(1);
	func_53(1, 1, 0);
	if (Global_1276808->f_1 == 4)
	{
		if (func_68(32768))
		{
			func_63(1);
			func_64(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
		}
	}
	func_62(0);
	func_58(2);
	func_58(32);
	func_58(8);
	func_58(64);
	func_31(32768);
	func_42(0);
	if (func_12(128))
	{
		func_6(128);
	}
	if (func_68(1024))
	{
		if (STREAMING::_0xCF45DF50C7775F2A())
		{
			STREAMING::_0x5A8B01199C3E79C3();
		}
		func_69(1024);
	}
	if ((Local_21.f_4 == 1 || Local_21.f_4 == 2) || Local_21.f_4 == 4)
	{
		if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
		{
			CAM::DO_SCREEN_FADE_IN(250);
		}
	}
	func_70(&(Local_21.f_85));
	HUD::_TEXT_DATABASE_DELETE("MSMP");
	func_35(0, 0);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(&(Local_21.f_89[iVar0])))
		{
			VOLUME::_DELETE_VOLUME(&(Local_21.f_89[iVar0]));
		}
		iVar0++;
	}
	if (func_71(1, 8))
	{
		func_72(1, 8, 0);
	}
}

void func_6(int iParam0)
{
	func_73(&(Global_1277020->f_144), iParam0);
}

int func_7(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
		{
			return -1;
		}
	}
	return ((*Global_1277166)[iParam0 /*86*/])->f_5.f_12;
}

int func_8()
{
	if ((Local_21 == 9 || Local_21 == 18) || Local_21 == 20)
	{
		return 1;
	}
	return 0;
}

int func_9(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_10()
{
	if (func_74(886))
	{
		return;
	}
	if (func_19(PLAYER::PLAYER_ID(), 1))
	{
		return;
	}
	if (Local_21 != 8)
	{
		return;
	}
	if ((Local_21.f_84 != PLAYER::PLAYER_ID() || CAM::IS_SCREEN_FADED_OUT()) || CAM::IS_SCREEN_FADING_OUT())
	{
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1277020->f_116))
	{
		return;
	}
	if (func_14(Local_21.f_1) < (80f * 0.5f))
	{
		func_75(886, 0);
	}
}

void func_11()
{
	switch (Local_21.f_92)
	{
		case 0:
			if (func_71(1, 8))
			{
				func_76(1);
			}
			else if (func_77())
			{
			}
			else if (&Global_1048584)
			{
			}
			else if (func_79(func_78()))
			{
			}
			else if (!func_80(532942402))
			{
			}
			else
			{
				func_81(1, 8);
				func_76(1);
				Jump @246; //curOff = 113
				if (!func_71(1, 8))
				{
					func_76(0);
				}
				else if (!func_80(1661805647))
				{
					func_72(1, 8, 0);
					func_76(0);
				}
				else if (func_79(func_78()))
				{
					func_72(1, 8, 0);
					func_76(0);
				}
				else if (&Global_1048584)
				{
					func_72(1, 8, 0);
					func_76(0);
				}
				else if (func_77())
				{
					func_72(1, 8, 0);
					func_76(0);
				}
				else
				{
					Jump @246; //curOff = 237
				}
			}
		}

bool func_12(int iParam0)
{
	return func_82(Global_1277020->f_144, iParam0);
}

void func_13(int iParam0)
{
	Local_21 = iParam0;
}

float func_14(int iParam0)
{
	return &(Global_1277020->f_6.f_17[iParam0]);
}

void func_15(int* iParam0)
{
	switch (iParam0->f_3)
	{
		case 0:
			if (Local_21 <= 9)
			{
				if (func_84(func_83(), 1))
				{
					if (func_85())
					{
						iParam0->f_2 = -630605689;
					}
				}
				if (iParam0->f_2 != 0)
				{
					STREAMING::REQUEST_MODEL(iParam0->f_2, false);
					iParam0->f_3 = 1;
				}
			}
			break;
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(iParam0->f_2))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1))
				{
					*iParam0 = OBJECT::CREATE_OBJECT(iParam0->f_2, ENTITY::GET_ENTITY_COORDS(iParam0->f_1, true, false) + Vector(10f, 0f, 0f), false, true, false, false, false);
					if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(*iParam0, true);
						ENTITY::SET_ENTITY_COLLISION(*iParam0, false, false);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(*iParam0, iParam0->f_1, 0, 0.55f, 0f, 2f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0, 0);
						iParam0->f_3 = 2;
					}
				}
				else if (func_86(Local_21.f_1))
				{
					iParam0->f_1 = func_88(func_87(Local_21.f_1, 0, 1), 0, 0);
				}
			}
			break;
		case 2:
			if ((Local_21 > 9 || !ENTITY::DOES_ENTITY_EXIST(iParam0->f_1)) || !ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				func_70(iParam0);
				iParam0->f_3 = 0;
			}
			break;
	}
}

void func_16()
{
	func_89();
	Local_21.f_84 = func_83();
	func_90();
}

int func_17()
{
	int iVar0;
	char* sVar1;

	iVar0 = 1;
	sVar1 = "MSMP";
	HUD::_TEXT_DATABASE_REQUEST(sVar1);
	if (!HUD::_TEXT_DATABASE_HAS_LOADED(sVar1))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_18()
{
	vector3 vVar0[4];
	vector3 vVar13[4];
	bool bVar26;
	int iVar27;

	if (!func_91(Local_21.f_1, &vVar0, &vVar13))
	{
		return 0;
	}
	bVar26 = (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()) && _NAMESPACE26::_0x149A2751AB66AC02(Global_1275573->f_15) > 1);
	iVar27 = 0;
	while (iVar27 < 4)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST((Local_21.f_34[iVar27 /*4*/])->f_2))
		{
			(Local_21.f_34[iVar27 /*4*/])->f_2 = VOLUME::_CREATE_VOLUME_CYLINDER(*(vVar0[iVar27 /*3*/]), 0f, 0f, 0f, *(vVar13[iVar27 /*3*/]));
		}
		if (!func_92(&(Local_21.f_34[iVar27 /*4*/])))
		{
			Local_21.f_34[iVar27 /*4*/] = func_94(func_93(iVar27, 0), joaat("INPUT_CONTEXT_Y"), (Local_21.f_34[iVar27 /*4*/])->f_2, 3, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
		}
		if ((iVar27 == 0 || iVar27 == 1) && !func_92((Local_21.f_34[iVar27 /*4*/])->f_1))
		{
			(Local_21.f_34[iVar27 /*4*/])->f_1 = func_94(func_93(iVar27, 1), joaat("INPUT_CONTEXT_B"), (Local_21.f_34[iVar27 /*4*/])->f_2, 3, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
			if (!bVar26)
			{
				func_95((Local_21.f_34[iVar27 /*4*/])->f_1, 0, 0);
				func_96((Local_21.f_34[iVar27 /*4*/])->f_1, 0, 0, 1);
			}
		}
		if (iVar27 == 0)
		{
			(Local_21.f_34[iVar27 /*4*/])->f_3 = -2097019783;
		}
		else if (iVar27 == 1)
		{
			(Local_21.f_34[iVar27 /*4*/])->f_3 = 302114997;
		}
		iVar27++;
	}
	func_57(256);
	return 1;
}

int func_19(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return func_82(((*Global_1277166)[iVar0 /*86*/])->f_85, iParam1);
	}
	return 0;
}

int func_20()
{
	int iVar0;

	if (func_97())
	{
		return 1;
	}
	if (func_21(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return 1;
	}
	if (!func_98())
	{
		return 1;
	}
	if (func_79(func_99(0)))
	{
		return 1;
	}
	if (func_100(0))
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return 1;
	}
	iVar0 = func_101(1427578635, PLAYER::PLAYER_ID(), 0, 1);
	if (func_102(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_21(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_103(bParam1, bParam2, bParam3);
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

void func_22(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == -1)
	{
		return;
	}
	if (func_68(iParam0))
	{
		return;
	}
	if (func_104() || func_105())
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (!VOLUME::_DOES_VOLUME_EXIST((Local_21.f_34[iVar0 /*4*/])->f_2))
				{
				}
				else if (!func_92(&(Local_21.f_34[iVar0 /*4*/])))
				{
				}
				else if (!func_106(Global_34, (Local_21.f_34[iVar0 /*4*/])->f_2, 1, 0))
				{
				}
				else if (func_107(MISC::_CREATE_VAR_STRING(2, "MS_WARN_WANTED_NO_ENTRY"), 10000, 0, 0, 0, 1) != 0)
				{
					func_57(iParam0);
				}
				iVar0++;
			}
			break;
	}
}

void func_23(bool bParam0)
{
	bool bVar0;
	int iVar1;

	if (bParam0)
	{
		if (func_68(64))
		{
			SCRIPTS::_0xF9E951A1E5517C06();
			func_69(64);
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (func_92(&(Local_21.f_34[iVar1 /*4*/])) && func_108(&(Local_21.f_34[iVar1 /*4*/]), 1))
			{
				bVar0 = true;
			}
			else
			{
				iVar1++;
			}
		}
		if (bVar0)
		{
			if (!func_68(64))
			{
				SCRIPTS::_0x76CBCD9EADC00955();
				func_57(64);
			}
		}
		else if (func_68(64))
		{
			SCRIPTS::_0xF9E951A1E5517C06();
			func_69(64);
		}
	}
}

int func_24(bool bParam0)
{
	int iVar0;

	if (bParam0)
	{
		if (Global_1276642->f_42)
		{
			return 1;
		}
		return 0;
	}
	if (Global_1277020->f_119.f_4)
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34) || ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		return 1;
	}
	if (PED::_0xB655DB7582AEC805(Global_34))
	{
		return 1;
	}
	if (PED::IS_PED_ON_MOUNT(Global_34))
	{
		return 1;
	}
	if (PED::IS_PED_ON_VEHICLE(Global_34, false) || PED::IS_PED_IN_ANY_VEHICLE(Global_34, false))
	{
		return 1;
	}
	if (PED::IS_PED_RAGDOLL(Global_34))
	{
		return 1;
	}
	if (PED::_0x9682F850056C9ADE(Global_34))
	{
		return 1;
	}
	if (PED::_0x3AA24CCC0D451379(Global_34) || PED::_0xD453BB601D4A606E(Global_34))
	{
		return 1;
	}
	if (PED::_0x42429C674B61238B(Global_34))
	{
		return 1;
	}
	if (PED::_IS_PED_CARRYING(Global_34))
	{
		return 1;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(Global_34))
	{
		return 1;
	}
	if (WEAPON::_0x9E2D5D6BC97A5F1E(Global_34, -577893115, 500))
	{
		return 1;
	}
	if (PED::IS_PED_CLIMBING(Global_34))
	{
		return 1;
	}
	if (TASK::_0x038B1F1674F0E242(Global_34))
	{
		return 1;
	}
	if (func_109())
	{
		return 1;
	}
	if (CAM::IS_AIM_CAM_ACTIVE())
	{
		return 1;
	}
	iVar0 = PED::_0x693126B5D0457D0D(Global_34);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 1;
	}
	if (func_20())
	{
		return 1;
	}
	return 0;
}

void func_25(bool bParam0)
{
	int iVar0;

	if (bParam0)
	{
		if (func_68(256))
		{
			return;
		}
	}
	else if (!func_68(256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_92(&(Local_21.f_34[iVar0 /*4*/])))
		{
			func_95(&(Local_21.f_34[iVar0 /*4*/]), bParam0, 0);
			func_96(&(Local_21.f_34[iVar0 /*4*/]), bParam0, 0, 1);
		}
		if (func_92((Local_21.f_34[iVar0 /*4*/])->f_1))
		{
			func_95((Local_21.f_34[iVar0 /*4*/])->f_1, bParam0, 0);
			func_96((Local_21.f_34[iVar0 /*4*/])->f_1, bParam0, 0, 1);
		}
		iVar0++;
	}
	if (bParam0)
	{
		func_57(256);
	}
	else
	{
		func_69(256);
	}
}

void func_26()
{
	bool bVar0;
	int iVar1;
	struct<7> Var2[7];
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;

	if (!func_68(256))
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		iVar1 = _NAMESPACE26::_0xD1BF325C8252A982(Global_1275573->f_15, &Var2);
		if (iVar1 > 1)
		{
			iVar53 = iVar1;
			iVar52 = 0;
			while (iVar52 <= (iVar1 - 1))
			{
				if (func_110(*(Var2[iVar52 /*7*/])))
				{
					iVar54 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Var2[iVar52 /*7*/]);
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar54))
					{
						if (func_19(iVar54, 1))
						{
							iVar53 = (iVar53 - 1);
						}
						else if (func_111(1048576, iVar54))
						{
							iVar53 = (iVar53 - 1);
						}
						else
						{
							iVar52++;
						}
						if (iVar53 > 1)
						{
							bVar0 = true;
						}
						iVar55 = 0;
						while (iVar55 <= 1)
						{
							if (func_92((Local_21.f_34[iVar55 /*4*/])->f_1))
							{
								if (bVar0)
								{
									if (!func_112((Local_21.f_34[iVar55 /*4*/])->f_1, 0))
									{
										func_96((Local_21.f_34[iVar55 /*4*/])->f_1, 1, 0, 1);
										func_95((Local_21.f_34[iVar55 /*4*/])->f_1, 1, 1);
									}
								}
								else if (func_112((Local_21.f_34[iVar55 /*4*/])->f_1, 0))
								{
									func_96((Local_21.f_34[iVar55 /*4*/])->f_1, 0, 0, 1);
									func_95((Local_21.f_34[iVar55 /*4*/])->f_1, 0, 1);
								}
							}
							iVar55++;
						}
					}
				}
			}
		}
	}

void func_27()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 == 0 || iVar0 == 1)
		{
			if (func_112(&(Local_21.f_34[iVar0 /*4*/]), 0))
			{
				iVar1 = func_83();
				if (NETWORK::_0x255A5EF65EDA9167(iVar1))
				{
					HUD::_0x8B55B324A9123F6B((Local_21.f_34[iVar0 /*4*/])->f_3, (Local_21.f_34[iVar0 /*4*/])->f_2, MISC::_CREATE_VAR_STRING(10, "MS_ENTER_PROMPT_GROUP", func_114(PLAYER::GET_PLAYER_NAME(iVar1), func_113(iVar1, 1, -1, 0))), 3, 1, 0);
					HUD::_UIPROMPT_SET_GROUP(func_115(&(Local_21.f_34[iVar0 /*4*/])), (Local_21.f_34[iVar0 /*4*/])->f_3, 0);
					if (func_112((Local_21.f_34[iVar0 /*4*/])->f_1, 0))
					{
						HUD::_UIPROMPT_SET_GROUP(func_115((Local_21.f_34[iVar0 /*4*/])->f_1), (Local_21.f_34[iVar0 /*4*/])->f_3, 0);
					}
				}
			}
		}
		iVar0++;
	}
}

int func_28()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_92(&(Local_21.f_34[iVar0 /*4*/])) && func_116(&(Local_21.f_34[iVar0 /*4*/]), 1))
		{
			Local_21.f_2 = func_117(iVar0);
			func_118(Local_21.f_2);
			if (iVar0 == 0 || iVar0 == 1)
			{
				func_57(8);
			}
			else
			{
				func_57(32);
			}
			return 1;
		}
		if (func_92((Local_21.f_34[iVar0 /*4*/])->f_1) && func_116((Local_21.f_34[iVar0 /*4*/])->f_1, 1))
		{
			Local_21.f_2 = func_117(iVar0);
			func_118(Local_21.f_2);
			func_57(16);
			func_65(2);
			func_119();
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_29()
{
	func_120();
	func_121(0);
	if (func_122())
	{
		func_123();
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SECONDARY_SPECIAL_ABILITY_SECONDARY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_ACTION"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
	PED::SET_PED_RESET_FLAG(Global_34, 168, true);
	PED::SET_PED_RESET_FLAG(Global_34, 108, true);
	func_42(1);
}

void func_30(var uParam0)
{
	Global_1277020->f_119 = uParam0;
	func_31(16);
	func_65(1);
}

void func_31(int iParam0)
{
	func_124(&(Global_1277020->f_144), iParam0);
}

int func_32()
{
	float fVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;

	if ((!ENTITY::DOES_ENTITY_EXIST(Global_34) || ENTITY::IS_ENTITY_DEAD(Global_34)) || func_125(255))
	{
		return 0;
	}
	if (!func_68(1024) && STREAMING::_0xCF45DF50C7775F2A())
	{
		STREAMING::_0x5A8B01199C3E79C3();
		return 0;
	}
	if (Local_21.f_2 == -1)
	{
		return 1;
	}
	if (Local_21.f_2 == 2 || Local_21.f_2 == 3)
	{
		fVar0 = 40f;
	}
	else
	{
		fVar0 = 200f;
	}
	vVar1 = { func_126(&(Local_21.f_28[Local_21.f_2])) };
	if (!func_68(1024))
	{
		if (!STREAMING::_0xCF45DF50C7775F2A())
		{
			Local_21.f_11 = MISC::_GET_SYSTEM_TIME();
			STREAMING::_0x387AD749E3B69B70(*(Local_21.f_12[Local_21.f_2 /*3*/]), vVar1, fVar0, 0);
			func_57(1024);
		}
		else
		{
			STREAMING::_0x5A8B01199C3E79C3();
		}
	}
	else if (!STREAMING::_0xCF45DF50C7775F2A())
	{
		iVar4 = 1;
	}
	else if (STREAMING::_0x0909F71B5C070797())
	{
		iVar4 = 1;
	}
	else
	{
		iVar5 = Global_1901929->f_743.f_11;
		if (Local_21.f_11 == 0)
		{
			Local_21.f_11 = MISC::_GET_SYSTEM_TIME();
		}
		else if ((MISC::_GET_SYSTEM_TIME() - Local_21.f_11) > iVar5)
		{
			iVar4 = 1;
		}
	}
	return iVar4;
}

int func_33()
{
	char* sVar0;
	char* sVar1;
	bool bVar2;

	sVar0 = func_127();
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return 1;
	}
	sVar1 = func_129(func_128());
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return 1;
	}
	if (!ANIMSCENE::_0x25557E324489393C(Local_21.f_6))
	{
		Local_21.f_6 = ANIMSCENE::_CREATE_ANIM_SCENE(sVar0, 0, sVar1, false, true);
	}
	bVar2 = true;
	if (!ANIMSCENE::_0x477122B8D05E7968(Local_21.f_6, 1, 0))
	{
		bVar2 = false;
	}
	if (!bVar2 && !ANIMSCENE::_0x59606519FF9D3EC2(Local_21.f_6, 1))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(Local_21.f_6);
		return 0;
	}
	if (bVar2)
	{
		return 1;
	}
	return 0;
}

void func_34()
{
	struct<7> Var0[7];
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	bool bVar54;

	if (Local_21.f_9 <= 0)
	{
		if (func_68(16) || Global_1276808->f_1 == 2)
		{
			Local_21.f_9 = _NAMESPACE26::_0x149A2751AB66AC02(Global_1275573->f_15);
			_NAMESPACE26::_0xD1BF325C8252A982(Global_1275573->f_15, &Var0);
			iVar53 = -1;
			iVar52 = 0;
			while (iVar52 <= (Local_21.f_9 - 1))
			{
				iVar50 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Var0[iVar52 /*7*/]);
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar50))
				{
					bVar54 = _NAMESPACE26::_0x424B17A7DC5C90BC(iVar50);
					if (bVar54 || func_19(iVar50, 1) == 0)
					{
						if (func_111(1048576, iVar50) == 0)
						{
							Local_21.f_51[iVar52 /*4*/] = iVar50;
							if (bVar54)
							{
								iVar53 = iVar52;
								iVar51 = iVar50;
							}
							(Local_21.f_51[iVar52 /*4*/])->f_3 = 1;
						}
						else
						{
							(Local_21.f_51[iVar52 /*4*/])->f_3 = 0;
						}
					}
					else
					{
						(Local_21.f_51[iVar52 /*4*/])->f_3 = 0;
					}
				}
				iVar52++;
			}
			if (iVar53 != -1)
			{
				Local_21.f_51[iVar53 /*4*/] = &Local_21.f_51[0 /*4*/];
				(Local_21.f_51[iVar53 /*4*/])->f_3 = (Local_21.f_51[0 /*4*/])->f_3;
				Local_21.f_51[0 /*4*/] = iVar51;
				(Local_21.f_51[0 /*4*/])->f_3 = 1;
			}
		}
		else if (func_68(8))
		{
			Local_21.f_9 = 1;
			Local_21.f_51[0 /*4*/] = PLAYER::PLAYER_ID();
		}
	}
}

int func_35(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (bParam0 || bParam1)
	{
		if (bParam1)
		{
			if (func_12(2))
			{
				func_6(2);
			}
			if (!func_19(PLAYER::PLAYER_ID(), 256))
			{
				func_65(256);
			}
			if (!func_12(4))
			{
				iVar0 = func_130(Global_1276808->f_200, 1);
				if (iVar0 == -1)
				{
					return 0;
				}
				func_31(4);
			}
		}
		else
		{
			if (func_12(4))
			{
				func_6(4);
			}
			if (func_19(PLAYER::PLAYER_ID(), 256))
			{
				func_58(256);
			}
			if (!func_12(2))
			{
				iVar0 = func_130(Global_1276808->f_200, 1);
				if (iVar0 == -1)
				{
					return 0;
				}
				func_31(2);
			}
		}
		if (NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		iVar1 = iVar0;
		((*Global_1277166)[&Global_1275573 /*86*/])->f_3 = iVar0;
		NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(1, 1, iVar1);
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, false, iVar1, false);
	}
	else if (func_12(2) || func_12(4))
	{
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, 32, true);
		((*Global_1277166)[&Global_1275573 /*86*/])->f_3 = -1;
		func_6(2);
		func_6(4);
		if (func_19(PLAYER::PLAYER_ID(), 256))
		{
			func_58(256);
		}
	}
	return 1;
}

bool func_36()
{
	int iVar0;

	if (Local_21.f_8 < 7)
	{
		if (ENTITY::DOES_ENTITY_EXIST((Local_21.f_51[Local_21.f_8 /*4*/])->f_1))
		{
			Local_21.f_8++;
		}
		else if ((Local_21.f_51[Local_21.f_8 /*4*/])->f_3 == 0)
		{
			Local_21.f_8++;
		}
		else if (PLAYER::PLAYER_ID() == &Local_21.f_51[Local_21.f_8 /*4*/])
		{
			(Local_21.f_51[Local_21.f_8 /*4*/])->f_1 = Global_34;
			(Local_21.f_51[Local_21.f_8 /*4*/])->f_2 = PED::IS_PED_MALE(Global_34);
			Local_21.f_8++;
			return false;
		}
		else
		{
			iVar0 = PLAYER::GET_PLAYER_PED(&(Local_21.f_51[Local_21.f_8 /*4*/]));
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Local_21.f_8++;
				return false;
			}
			(Local_21.f_51[Local_21.f_8 /*4*/])->f_1 = PED::CLONE_PED(iVar0, 0f, true, true);
			if (ENTITY::DOES_ENTITY_EXIST((Local_21.f_51[Local_21.f_8 /*4*/])->f_1))
			{
				ENTITY::SET_ENTITY_VISIBLE((Local_21.f_51[Local_21.f_8 /*4*/])->f_1, false);
				ENTITY::SET_ENTITY_COLLISION((Local_21.f_51[Local_21.f_8 /*4*/])->f_1, false, false);
				(Local_21.f_51[Local_21.f_8 /*4*/])->f_2 = PED::IS_PED_MALE(iVar0);
				Local_21.f_8++;
				return false;
			}
		}
	}
	return Local_21.f_8 >= Local_21.f_9;
}

void func_37()
{
	switch (Local_21.f_2)
	{
		case 0:
		case 1:
			Local_21.f_82 = func_88(func_87(Local_21.f_1, 2, 0), 0, 0);
			Local_21.f_83 = func_88(func_87(Local_21.f_1, 3, 0), 0, 0);
			break;
		default:
			Local_21.f_82 = func_88(func_87(Local_21.f_1, 0, 1), 0, 0);
			Local_21.f_83 = func_88(func_87(Local_21.f_1, 1, 1), 0, 0);
			break;
	}
}

void func_38()
{
	int iVar0;

	if (FIRE::IS_ENTITY_ON_FIRE(Global_34))
	{
		FIRE::STOP_ENTITY_FIRE(Global_34, 0);
	}
	iVar0 = PED::_0x693126B5D0457D0D(Global_34);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_34, 0, 1);
	}
	if (PED::IS_PED_ON_MOUNT(Global_34))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_34, 1, 1);
	}
	if (PED::_0x3AA24CCC0D451379(Global_34) || PED::_0xD453BB601D4A606E(Global_34))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_34, 0, 1);
	}
}

void func_39()
{
	int iVar0;
	float fVar1;

	if (!ANIMSCENE::_0x25557E324489393C(Local_21.f_6))
	{
		func_13(34);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34) || func_125(255))
	{
		return;
	}
	if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_21.f_6, 0) && !func_68(1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_21.f_6, func_131(), func_132(), 2);
		ANIMSCENE::SET_ANIM_SCENE_INT(Local_21.f_6, "CameraIndex", func_133(), false);
		if (func_68(8) && ENTITY::DOES_ENTITY_EXIST(Global_34))
		{
			if (PED::IS_PED_MALE(Global_34))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_21.f_6, "MP_MALE_01", Global_34, 0);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_21.f_6, "MP_FEMALE_01", Global_34, 0);
			}
		}
		if (Local_21.f_2 == 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_21.f_82))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_21.f_6, "p_doorsgl01x_FRONT", Local_21.f_82, 0);
			}
		}
		else if (Local_21.f_2 == 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_21.f_83))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_21.f_6, "p_doorsgl01x_SIDE", Local_21.f_83, 0);
			}
		}
		if (!func_68(8))
		{
			iVar0 = 0;
			while (iVar0 <= (Local_21.f_9 - 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST((Local_21.f_51[iVar0 /*4*/])->f_1))
				{
					ENTITY::SET_ENTITY_VISIBLE((Local_21.f_51[iVar0 /*4*/])->f_1, true);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_21.f_6, func_134(iVar0, (Local_21.f_51[iVar0 /*4*/])->f_2), (Local_21.f_51[iVar0 /*4*/])->f_1, 0);
				}
				iVar0++;
			}
		}
		ANIMSCENE::START_ANIM_SCENE(Local_21.f_6);
		func_57(1);
		func_69(16);
		func_69(8);
		func_135(1);
		return;
	}
	fVar1 = ANIMSCENE::_0x3FBC3F51BF12DFBF(Local_21.f_6);
	if (fVar1 > 0.9f)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_34))
		{
			func_136(1);
		}
	}
	else if (fVar1 > 0.85f)
	{
		if (!func_68(4096))
		{
			func_57(4096);
			func_53(0, 1, 0);
		}
	}
	switch (Local_21.f_4)
	{
		case 1:
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(0);
			}
			func_135(2);
			break;
		case 2:
			if (!ANIMSCENE::_0x25557E324489393C(Local_21.f_6) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_21.f_6, 0))
			{
			}
			else
			{
				CAM::DO_SCREEN_FADE_IN(250);
				func_135(3);
				Jump @636; //curOff = 556
				if (CAM::IS_GAMEPLAY_CAM_RENDERING())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					Local_21.f_11 = MISC::_GET_SYSTEM_TIME();
					func_135(4);
				}
				Jump @636; //curOff = 584
				if (STREAMING::_0x0909F71B5C070797() || (MISC::_GET_SYSTEM_TIME() - Local_21.f_11) > Global_1901929->f_743.f_11)
				{
					CAM::DO_SCREEN_FADE_IN(250);
					func_135(5);
				}
			}
		}

int func_40()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1277020->f_119.f_3)
	{
		return 1;
	}
	iVar0 = Local_21.f_84;
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		Local_21.f_3 = 1;
		return 1;
	}
	if (iVar0 == PLAYER::PLAYER_ID() && _NAMESPACE26::_0x901E0DC25080C8B9(iVar0) != Global_1275573->f_15)
	{
		return 1;
	}
	if ((iVar0 != PLAYER::PLAYER_ID() && _NAMESPACE26::_0x901E0DC25080C8B9(iVar0) != Global_1275573->f_15) && (Global_1276808->f_1 == 2 || Global_1276808->f_1 == 1))
	{
		Local_21.f_3 = 3;
		return 1;
	}
	iVar1 = func_7(Global_1276808->f_200, 1);
	if (Local_21.f_1 != iVar1)
	{
		Local_21.f_3 = 2;
		return 1;
	}
	iVar2 = 0;
	while (iVar2 <= 12)
	{
		if ((((*Global_1214482)[iVar2 /*27*/])->f_13 == Global_1275573->f_15 && ((*Global_1225057)[iVar2 /*686*/])->f_565 == -1784925006) && func_137(iVar2, 32, 255))
		{
			Local_21.f_3 = 5;
			return 1;
		}
		iVar2++;
	}
	if (func_138())
	{
		Local_21.f_3 = 4;
		return 1;
	}
	return 0;
}

void func_41()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST((Local_21.f_51[iVar0 /*4*/])->f_1) && (Local_21.f_51[iVar0 /*4*/])->f_1 != Global_34)
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_21.f_6, func_134(iVar0, 1), (Local_21.f_51[iVar0 /*4*/])->f_1);
			PED::DELETE_PED(&((Local_21.f_51[iVar0 /*4*/])->f_1));
		}
		iVar0++;
	}
	Local_21.f_82 = 0;
	Local_21.f_83 = 0;
	if (ANIMSCENE::_0x25557E324489393C(Local_21.f_6))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_21.f_6);
	}
	if (func_68(1024))
	{
		if (STREAMING::_0xCF45DF50C7775F2A())
		{
			STREAMING::_0x5A8B01199C3E79C3();
		}
		func_69(1024);
	}
	Local_21.f_11 = 0;
	func_69(1);
	Local_21.f_6 = 0;
}

void func_42(bool bParam0)
{
	if (!bParam0 && func_68(16384))
	{
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), bParam0);
		func_69(16384);
	}
	else
	{
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), bParam0);
		func_57(16384);
	}
}

void func_43()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_139(func_87(Local_21.f_1, iVar0, 0), 0f, 1);
		iVar0++;
	}
}

void func_44()
{
	func_140();
	func_141();
}

int func_45()
{
	if (Global_1277020->f_29.f_2 != Local_21.f_1)
	{
		return 0;
	}
	if (Global_1277020->f_29.f_3 != 2)
	{
		return 0;
	}
	return 1;
}

int func_46()
{
	int iVar0;
	var uVar1;
	int iVar8;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_34) || ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		return 0;
	}
	if (Local_21.f_80 == 0)
	{
		if (func_142())
		{
			func_143(1);
			return 0;
		}
		else
		{
			iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
			if (_NAMESPACE26::_0xD6F6ACF4392187FB(iVar0))
			{
				if (_NAMESPACE26::_0xCE88A261DCBBA0D9(iVar0, &uVar1))
				{
					iVar8 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&uVar1);
					if (PED::_IS_PED_CARRYING(Global_34))
					{
						Local_21.f_80 = func_107(MISC::_CREATE_VAR_STRING(10, "MS_WARN_MEMBER_JOIN_CARRY", func_114(PLAYER::GET_PLAYER_NAME(iVar8), func_113(iVar8, 1, -1, 0))), 10000, 0, 0, 0, 1);
					}
					else
					{
						Local_21.f_80 = func_107(MISC::_CREATE_VAR_STRING(10, "MS_WARN_MEMBER_JOIN", func_114(PLAYER::GET_PLAYER_NAME(iVar8), func_113(iVar8, 1, -1, 0))), 10000, 0, 0, 0, 1);
					}
				}
			}
		}
	}
	if (Local_21.f_10 == 0)
	{
		Local_21.f_10 = MISC::GET_GAME_TIMER();
	}
	else if ((MISC::GET_GAME_TIMER() - Local_21.f_10) >= 11000)
	{
		return 1;
	}
	return 0;
}

void func_47()
{
	int iVar0;

	iVar0 = Global_1276808->f_200;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		Local_21.f_2 = 2;
		return;
	}
	Local_21.f_2 = ((*Global_1277166)[iVar0 /*86*/])->f_5.f_13;
}

void func_48()
{
	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < 50)
	{
		Local_21.f_2 = 2;
	}
	else
	{
		Local_21.f_2 = 3;
	}
}

int func_49()
{
	int iVar0;

	if (PED::_IS_PED_CARRYING(Global_34))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_34);
		if (!func_144(Global_34))
		{
			if (func_145(iVar0))
			{
				ENTITY::_0x0D0DB2B6AF19A987(&iVar0);
			}
			else
			{
				TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_34, iVar0, 0f, 0f, 0f, 1073741824, 9);
			}
		}
		return 0;
	}
	return 1;
}

int func_50()
{
	float fVar0;

	if (ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		fVar0 = BUILTIN::VDIST(Global_35, func_146(Local_21.f_1));
		if (fVar0 < 200f)
		{
			return 1;
		}
	}
	return 0;
}

void func_51()
{
	int iVar0;

	if (PED::_IS_PED_CARRYING(Global_34))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_34);
		if (func_145(iVar0))
		{
			ENTITY::_0x0D0DB2B6AF19A987(&iVar0);
		}
	}
}

int func_52(bool bParam0)
{
	if ((func_125(255) || !ENTITY::DOES_ENTITY_EXIST(Global_34)) || ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		return 0;
	}
	if (Local_21.f_2 == -1)
	{
		func_147(*(Local_21.f_12[2 /*3*/]), &(Local_21.f_28[2]));
	}
	else
	{
		func_147(*(Local_21.f_12[Local_21.f_2 /*3*/]), &(Local_21.f_28[Local_21.f_2]));
	}
	if (bParam0)
	{
		func_148(1);
		func_149(1);
	}
	func_150(1);
	func_151(137);
	func_152(1, 1);
	return 1;
}

void func_53(bool bParam0, bool bParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		if (!bParam0)
		{
			WEAPON::_0x94A3C1B804D291EC(Global_34, 0, 0, 0, 1);
		}
		if (!bParam2)
		{
			WEAPON::_0x67E21ACC5C0C970C(Global_34, 7, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_34, 8, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_34, 9, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_34, 10, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_34, 16, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_34, 17, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_34, 18, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_34, 19, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_34, 20, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_34, 21, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_34, 22, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_34, 23, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_34, 25, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_34, 27, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_34, 1, bParam0);
		}
		if (!bParam1)
		{
			WEAPON::_0x67E21ACC5C0C970C(Global_34, 2, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_34, 3, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_34, 4, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_34, 5, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_34, 6, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_34, 11, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_34, 12, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_34, 13, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_34, 24, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_34, 14, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_34, 15, bParam0);
		}
	}
}

int func_54()
{
	if ((func_125(255) || !ENTITY::DOES_ENTITY_EXIST(Global_34)) || ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		return 0;
	}
	return 1;
}

int func_55()
{
	if (func_125(255))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34) || ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		return 0;
	}
	if (!func_68(512))
	{
		if (ENTITY::IS_ENTITY_VISIBLE(Global_34))
		{
			ENTITY::SET_ENTITY_VISIBLE(Global_34, false);
		}
		func_53(0, 0, 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0, 0);
		func_35(1, 1);
		func_57(512);
		return 1;
	}
	return 0;
}

int func_56()
{
	if (func_125(255))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34) || ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		return 0;
	}
	if (func_68(512))
	{
		func_53(0, 0, 1);
		func_153(1, 2);
		func_35(1, 0);
		func_69(512);
	}
	return 1;
}

void func_57(int iParam0)
{
	func_124(&(Local_21.f_5), iParam0);
}

void func_58(int iParam0)
{
	func_73(&(((*Global_1277166)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*86*/])->f_85), iParam0);
}

void func_59()
{
	float fVar0;

	if (!ANIMSCENE::_0x25557E324489393C(Local_21.f_6))
	{
		func_13(34);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34) || func_125(255))
	{
		return;
	}
	if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_21.f_6, 0) && !func_68(1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_21.f_6, func_131(), func_132(), 2);
		if (ENTITY::DOES_ENTITY_EXIST(Global_34))
		{
			if (PED::IS_PED_MALE(Global_34))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_21.f_6, "MP_MALE_01", Global_34, 0);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_21.f_6, "MP_FEMALE_01", Global_34, 0);
			}
		}
		if (Local_21.f_2 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_21.f_82))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_21.f_6, "p_doorsgl01x_FRONT", Local_21.f_82, 0);
			}
		}
		else if (Local_21.f_2 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_21.f_83))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_21.f_6, "p_doorsgl01x_SIDE", Local_21.f_83, 0);
			}
		}
		if (TASK::_0xEC7E480FF8BD0BED(Global_34))
		{
			TASK::CLEAR_PED_SECONDARY_TASK(Global_34);
		}
		TASK::_0xFDECCA06E8B81346(Global_34);
		ANIMSCENE::START_ANIM_SCENE(Local_21.f_6);
		func_57(1);
		func_69(32);
		return;
	}
	fVar0 = ANIMSCENE::_0x3FBC3F51BF12DFBF(Local_21.f_6);
	if (fVar0 > 0.9f)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_34))
		{
			func_136(0);
		}
	}
	else if (fVar0 > 0.85f)
	{
		if (!func_68(2048))
		{
			func_53(1, 1, 0);
			func_57(2048);
		}
	}
}

int func_60()
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	var uVar5;

	if ((func_125(255) || !ENTITY::DOES_ENTITY_EXIST(Global_34)) || ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		return 0;
	}
	vVar0 = { func_154(Local_21.f_1, 0) };
	uVar3 = func_155(Local_21.f_1, 0);
	uVar4 = Global_1901929->f_743.f_8;
	uVar5 = Global_1901929->f_743.f_9;
	func_150(1);
	func_151(137);
	func_156(vVar0, uVar3, uVar5, uVar4, 1, 1, 1);
	return 1;
}

int func_61()
{
	char* sVar0;

	if ((func_125(255) || !ENTITY::DOES_ENTITY_EXIST(Global_34)) || ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	switch (Local_21.f_3)
	{
		case 1:
			sVar0 = "MS_WARN_FORCE_OUT_INVALID";
			break;
		case 2:
			sVar0 = "MS_WARN_FORCE_OUT_MOVED";
			break;
		case 3:
			sVar0 = "MS_WARN_FORCE_OUT_DISBANDED";
			break;
	}
	Local_21.f_81 = func_107(sVar0, 10000, 0, 0, 0, 1);
	return 1;
}

void func_62(bool bParam0)
{
	func_6(16);
	func_58(1);
	if (Global_1277020->f_145 > -1)
	{
		func_157(Global_1277020->f_145);
		Global_1277020->f_145 = -1;
	}
	if (bParam0)
	{
		func_31(64);
	}
}

void func_63(int iParam0)
{
	Global_1276808->f_1 = iParam0;
}

void func_64(int iParam0)
{
	Global_1276808->f_200 = iParam0;
}

void func_65(int iParam0)
{
	func_124(&(((*Global_1277166)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*86*/])->f_85), iParam0);
}

void func_66()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (VOLUME::_DOES_VOLUME_EXIST((Local_21.f_34[iVar0 /*4*/])->f_2))
		{
			VOLUME::_DELETE_VOLUME((Local_21.f_34[iVar0 /*4*/])->f_2);
		}
		if (func_92(&(Local_21.f_34[iVar0 /*4*/])))
		{
			func_158(Local_21.f_34[iVar0 /*4*/], 1, 1);
		}
		if (func_92((Local_21.f_34[iVar0 /*4*/])->f_1))
		{
			func_158(&((Local_21.f_34[iVar0 /*4*/])->f_1), 1, 1);
		}
		iVar0++;
	}
}

void func_67()
{
	Local_21.f_2 = -1;
	Local_21.f_5 = 0;
	Local_21.f_11 = 0;
	Local_21.f_6 = 0;
	Local_21.f_8 = 0;
	Local_21.f_9 = 0;
	Local_21.f_10 = 0;
	Local_21.f_80 = 0;
	Local_21.f_4 = 0;
}

bool func_68(int iParam0)
{
	return func_82(Local_21.f_5, iParam0);
}

void func_69(int iParam0)
{
	func_73(&(Local_21.f_5), iParam0);
}

void func_70(int* iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		OBJECT::DELETE_OBJECT(iParam0);
	}
	if (iParam0->f_2 != 0)
	{
		if (STREAMING::HAS_MODEL_LOADED(iParam0->f_2))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_2);
		}
	}
	iParam0->f_1 = 0;
	iParam0->f_3 = 0;
}

bool func_71(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(&(Global_1070356->f_20795.f_353[iParam0 /*11*/]), iParam1);
}

void func_72(int iParam0, int iParam1, bool bParam2)
{
	if (func_71(iParam0, iParam1) && (!bParam2 || &(Global_1070356->f_20795.f_353[iParam0 /*11*/])->f_1[iParam1] == SCRIPTS::GET_ID_OF_THIS_THREAD()))
	{
		MISC::CLEAR_BIT(Global_1070356->f_20795.f_353[iParam0 /*11*/], iParam1);
		(Global_1070356->f_20795.f_353[iParam0 /*11*/])->f_1[iParam1] = 0;
		func_159();
	}
}

void func_73(var uParam0, int iParam1)
{
	func_160(uParam0, iParam1);
}

bool func_74(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_17172.f_2563[iVar1]), iVar2);
}

void func_75(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_161(iParam0, &iVar0, &iVar1);
	if (!func_162(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_163(iVar0, iVar1);
}

void func_76(int iParam0)
{
	Local_21.f_92 = iParam0;
}

bool func_77()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iVar2 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar2))
	{
		return false;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
	return PED::IS_PED_A_PLAYER(iVar1);
}

struct<2> func_78()
{
	if (Global_1184439->f_129 <= 0)
	{
		return func_99(0);
	}
	if (Global_1184439->f_130 < 0 || Global_1184439->f_131 == 0)
	{
		return func_99(0);
	}
	return ((*Global_1184439)[Global_1184439->f_130 /*4*/])->f_1;
}

int func_79(struct<2> Param0)
{
	if (!func_164(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_165(Param0))
	{
		return 0;
	}
	return 1;
}

bool func_80(int iParam0)
{
	return func_106(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), &(Local_21.f_89[func_166(iParam0)]), 1, 0);
}

void func_81(int iParam0, int iParam1)
{
	if (!func_71(iParam0, iParam1))
	{
		MISC::SET_BIT(Global_1070356->f_20795.f_353[iParam0 /*11*/], iParam1);
		(Global_1070356->f_20795.f_353[iParam0 /*11*/])->f_1[iParam1] = SCRIPTS::GET_ID_OF_THIS_THREAD();
		func_159();
	}
}

bool func_82(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_83()
{
	return Global_1276808->f_200;
}

int func_84(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		if (!NETWORK::_0x255A5EF65EDA9167(iParam0) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (!func_167(Global_1277166[iVar0 /*86*/]))
	{
		return 0;
	}
	if (((*Global_1277166)[iVar0 /*86*/])->f_5.f_12 == -1)
	{
		return 0;
	}
	return 1;
}

int func_85()
{
	if (!func_168())
	{
		return 0;
	}
	return func_82(Global_1901929->f_38.f_5, 8);
}

bool func_86(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 5);
}

int func_87(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!bParam2)
	{
		iVar0 = Global_1277020->f_66[iParam0 /*6*/][iParam1];
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						iVar0 = -873861472;
						break;
					case 1:
						iVar0 = 559525171;
						break;
					case 2:
						iVar0 = -86501425;
						break;
					case 3:
						iVar0 = 359873526;
						break;
				}
				break;
			case 1:
				switch (iParam1)
				{
					case 0:
						iVar0 = -1636862794;
						break;
					case 1:
						iVar0 = -368946392;
						break;
					case 2:
						iVar0 = -86501425;
						break;
					case 3:
						iVar0 = 359873526;
						break;
				}
				break;
			case 2:
				switch (iParam1)
				{
					case 0:
						iVar0 = 1954418654;
						break;
					case 1:
						iVar0 = -1030789470;
						break;
					case 2:
						iVar0 = -86501425;
						break;
					case 3:
						iVar0 = 359873526;
						break;
				}
				break;
			case 3:
				switch (iParam1)
				{
					case 0:
						iVar0 = 423023646;
						break;
					case 1:
						iVar0 = 155563751;
						break;
					case 2:
						iVar0 = -86501425;
						break;
					case 3:
						iVar0 = 359873526;
						break;
				}
				break;
			case 4:
				switch (iParam1)
				{
					case 0:
						iVar0 = -561680145;
						break;
					case 1:
						iVar0 = -7860519;
						break;
					case 2:
						iVar0 = -86501425;
						break;
					case 3:
						iVar0 = 359873526;
						break;
				}
				break;
		}
	}
	return iVar0;
}

int func_88(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = func_169(iParam0, iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_AN_OBJECT(iVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) && !bParam2)
	{
		return 0;
	}
	return iVar0;
}

void func_89()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 3)
	{
		*(Local_21.f_12[iVar0 /*3*/]) = { func_154(Local_21.f_1, iVar0) };
		Local_21.f_28[iVar0] = func_155(Local_21.f_1, iVar0);
		iVar0++;
	}
}

void func_90()
{
	struct<4> Var0;
	var uVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	var uVar21;
	char cVar22[64];

	if (Global_1276642->f_165)
	{
		func_76(2);
	}
	Var0 = (Global_1070356->f_26934[49 /*4*/])->f_3;
	Var0.f_2 = -2002424295;
	Var0.f_3 = func_170(Local_21.f_1);
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		return;
	}
	uVar6 = Var0.f_1;
	iVar8 = 0;
	while (iVar8 <= 1)
	{
		Var0.f_1 = uVar6;
		uVar5 = func_171(iVar8);
		StringCopy(&cVar22, "volume#", 64);
		StringIntConCat(&cVar22, iVar8, 64);
		Var0.f_2 = -1627797674;
		Var0.f_3 = uVar5;
		if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			return;
		}
		uVar7 = Var0.f_1;
		Var0.f_2 = -85904298;
		iVar10 = DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
		Local_21.f_89[iVar8] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME(&cVar22);
		iVar9 = 0;
		while (iVar9 <= (iVar10 - 1))
		{
			Var0.f_1 = uVar7;
			Var0.f_2 = -204010186;
			Var0.f_3 = iVar9;
			if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
			{
			}
			else
			{
				Var0.f_2 = 701345319;
				DATAFILE::_DATAFILE_GET_HASH(&uVar11, &Var0);
				uVar21 = uVar11;
				Var0.f_2 = -1084365561;
				DATAFILE::_DATAFILE_GET_VECTOR(&vVar12, &Var0);
				Var0.f_2 = 2021743591;
				DATAFILE::_DATAFILE_GET_VECTOR(&vVar15, &Var0);
				Var0.f_2 = -600021699;
				DATAFILE::_DATAFILE_GET_VECTOR(&vVar18, &Var0);
				VOLUME::_0x12FCAA23F2320422(&(Local_21.f_89[iVar8]), uVar21, vVar12, vVar15, vVar18);
			}
			iVar9++;
		}
		iVar8++;
	}
}

int func_91(int iParam0, var uParam1, var uParam2)
{
	struct<5> Var0;
	struct<5> Var5;
	struct<5> Var10;
	int iVar15;

	Var0 = Global_1277020->f_1;
	Var0.f_2 = -709674112;
	Var0.f_3 = func_170(iParam0);
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		return 0;
	}
	iVar15 = 0;
	while (iVar15 < 4)
	{
		Var5 = { Var0 };
		Var5.f_2 = -1480766764;
		Var5.f_3 = iVar15;
		if (!DATAFILE::_DATAFILE_GET_VECTOR((*uParam1)[Var5.f_3 /*3*/], &Var5))
		{
			return 0;
		}
		Var10 = { Var0 };
		Var10.f_2 = 983475634;
		Var10.f_3 = iVar15;
		if (!DATAFILE::_DATAFILE_GET_VECTOR((*uParam2)[Var10.f_3 /*3*/], &Var10))
		{
			return 0;
		}
		iVar15++;
	}
	return 1;
}

bool func_92(int iParam0)
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

char* func_93(int iParam0, bool bParam1)
{
	char* sVar0;

	sVar0 = "Null";
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				sVar0 = "MOONSHINE_ENTER_POSSE";
			}
			else
			{
				sVar0 = "MOONSHINE_ENTER_SOLO";
			}
			break;
		case 1:
			if (bParam1)
			{
				sVar0 = "MOONSHINE_ENTER_POSSE";
			}
			else
			{
				sVar0 = "MOONSHINE_ENTER_SOLO";
			}
			break;
		case 2:
			sVar0 = "MOONSHINE_EXIT_SOLO";
			break;
		case 3:
			sVar0 = "MOONSHINE_EXIT_SOLO";
			break;
	}
	return sVar0;
}

int func_94(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13)
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
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_172(iVar0, 2))
		{
			if (iParam2 == ((*Global_1949759)[iVar0 /*23*/])->f_10 && iParam1 == ((*Global_1949759)[iVar0 /*23*/])->f_4)
			{
				return iVar0;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_173(iVar1, iParam1, sParam0, 2, iParam3, iParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1065353216 /* Float: 1f */, 0, 0, 0, iParam12, bParam13);
		return iVar1;
	}
	return 0;
}

void func_95(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_92(iParam0))
	{
		return;
	}
	iVar0 = func_174(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949759)[iVar0 /*23*/])->f_3, bParam1);
}

void func_96(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_92(iParam0))
	{
		return;
	}
	iVar0 = func_174(iParam0);
	if (bParam1)
	{
		func_175(iParam0, 4);
		if (bParam3)
		{
			func_176(iVar0, 1);
		}
		func_177(iVar0, 1);
	}
	else
	{
		func_178(iParam0, 4);
		func_177(iVar0, 0);
	}
}

bool func_97()
{
	return (Global_1275565->f_2.f_1 == 2 || Global_1275565->f_2.f_1 == 1);
}

int func_98()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return 1;
	}
	return 0;
}

struct<2> func_99(int iParam0)
{
	return *(Global_1900718->f_1[iParam0 /*2*/]);
}

bool func_100(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915180->f_20136;
	}
	return (Global_1915180->f_20136 || Global_1915180->f_21989.f_1);
}

int func_101(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (!NETWORK::_0x255A5EF65EDA9167(iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (((*Global_1225057)[iVar0 /*686*/])->f_565 != iParam0)
		{
		}
		else if (bParam2 && !func_137(iVar0, 32, iParam1))
		{
		}
		else if (bParam3 && ((*Global_1214482)[iVar0 /*27*/])->f_15 != iParam1)
		{
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_102(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 12);
}

int func_103(bool bParam0, bool bParam1, bool bParam2)
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

int func_104()
{
	return func_179(1, 255);
}

bool func_105()
{
	int iVar0;

	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) <= 4);
}

bool func_106(int iParam0, int iParam1, bool bParam2, int iParam3)
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

int func_107(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_108(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_92(iParam0))
	{
		return false;
	}
	iVar0 = func_174(iParam0);
	return HUD::_UIPROMPT_IS_ACTIVE(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

int func_109()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-92416669) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_110(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0);
}

bool func_111(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1099294->f_3 && iParam0) != 0;
	}
	return (((*Global_1097610)[iParam1 /*51*/])->f_3 && iParam0) != 0;
}

bool func_112(int iParam0, bool bParam1)
{
	if (bParam1 && !func_92(iParam0))
	{
		return false;
	}
	return !func_172(iParam0, 4);
}

int func_113(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		if (iParam2 == -1)
		{
			return joaat("COLOR_GREYDARK");
		}
		else
		{
			return 636925055;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 636925055;
	}
	iVar2 = iParam0;
	if (func_180(func_99(0)) && func_181(func_99(0)) == 7)
	{
		bVar0 = true;
		iVar3 = 11;
		iVar4 = (iVar3 / 32);
		iVar5 = (iVar3 - iVar4 * 32);
		bVar1 = MISC::IS_BIT_SET(&(Global_3145858->f_6[iVar4]), iVar5);
	}
	if ((Global_1070356->f_19683.f_1[iVar2 /*8*/])->f_5 != 0)
	{
		return (Global_1070356->f_19683.f_1[iVar2 /*8*/])->f_5;
	}
	if (bParam3 && (Global_1070356->f_19683.f_1[iVar2 /*8*/])->f_6 != 0)
	{
		return (Global_1070356->f_19683.f_1[iVar2 /*8*/])->f_6;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (bVar0 && bVar1)
		{
			iVar6 = func_182(iParam0);
			if (iVar6 == -1031763995 && NETWORK::_NETWORK_IS_PLAYER_IN_SPECTATOR_MODE(iParam0))
			{
				return joaat("COLOR_WHITE");
			}
			else
			{
				return iVar6;
			}
		}
		else
		{
			return func_183(iParam0);
		}
	}
	if (iVar2 < 0 || iVar2 >= 32)
	{
		return 0;
	}
	if (func_82((Global_1070356->f_19683.f_1[iVar2 /*8*/])->f_7, 1024))
	{
		return -508184943;
	}
	iVar7 = func_184(iParam0, 1);
	if (!bVar0)
	{
		if (func_185(iParam0, bParam1))
		{
			return func_183(iParam0);
		}
		else if (func_186(iParam0, bParam1))
		{
			if (func_187(iParam0, bParam1))
			{
				return 1891514641;
			}
			else
			{
				if (iVar7 > 5)
				{
					return -437407570;
				}
				else if (iVar7 > 3)
				{
					return -437407570;
				}
				else if (iVar7 > 1)
				{
					return 1201428499;
				}
				return 63157909;
			}
		}
	}
	else if (bVar1)
	{
		return func_182(iParam0);
	}
	else if (func_185(iParam0, bParam1))
	{
		if (PLAYER::PLAYER_ID() == iParam0)
		{
			return joaat("COLOR_WHITE");
		}
		else if (func_189(func_188(func_99(0)), 1) == 395262693)
		{
			return func_183(iParam0);
		}
		else
		{
			return func_183(iParam0);
		}
	}
	else if (func_186(iParam0, bParam1))
	{
		return 1891514641;
	}
	return 830499243;
}

char* func_114(char* sParam0, int iParam1)
{
	sParam0 = PLAYER::_FORMAT_PLAYER_NAME_STRING(sParam0);
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_190(MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

int func_115(int iParam0)
{
	int iVar0;

	iVar0 = func_174(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	return ((*Global_1949759)[iVar0 /*23*/])->f_3;
}

bool func_116(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_92(iParam0))
	{
		return false;
	}
	iVar0 = func_174(iParam0);
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
	if (HUD::_0xCD072523791DDC1B(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1949759)[iVar0 /*23*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

int func_117(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 3;
		case 2:
			return 0;
		case 3:
			return 1;
		default:
			break;
	}
	return 4;
}

void func_118(int iParam0)
{
	if (iParam0 == 0 || iParam0 == 1)
	{
		return;
	}
	((*Global_1277166)[&Global_1275573 /*86*/])->f_5.f_13 = iParam0;
}

void func_119()
{
	struct<20> Var0;

	Var0.f_5 = 255;
	Var0.f_7 = -1;
	Var0.f_9 = 7;
	Var0.f_19 = -1;
	Var0.f_19.f_1 = -1;
	Var0.f_4 = 5;
	func_191(&Var0);
}

void func_120()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	func_192(0);
	Global_1939231->f_5 = 1;
}

void func_121(bool bParam0)
{
	if (func_109())
	{
		Global_1956186 = 1;
	}
	if (func_193(-92416669))
	{
	}
	if (bParam0 && Global_1939178->f_38 == joaat("weapon_kit_camera"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("weapon_unarmed"), true, 0, false, false);
		Global_1939178->f_38 = joaat("weapon_unarmed");
	}
}

bool func_122()
{
	return Global_1896726->f_382;
}

void func_123()
{
	func_194(0);
}

void func_124(var uParam0, int iParam1)
{
	func_195(uParam0, iParam1);
}

bool func_125(int iParam0)
{
	return func_179(1, iParam0);
}

Vector3 func_126(float fParam0)
{
	return -BUILTIN::SIN(fParam0), BUILTIN::COS(fParam0), 0f;
}

char* func_127()
{
	char* sVar0;

	switch (Local_21.f_2)
	{
		case 0:
		case 1:
			sVar0 = "script@mp@Moonshiner@Moonshine_Property@exit";
			break;
		case 2:
		case 3:
			sVar0 = "script@mp@moonshiner@moonshine_property@enter";
			break;
		case 4:
			break;
	}
	return sVar0;
}

int func_128()
{
	int iVar0;

	switch (Local_21.f_2)
	{
		case 0:
			iVar0 = 3;
			break;
		case 1:
			iVar0 = 4;
			break;
		case 2:
			iVar0 = 1;
			break;
		case 3:
			iVar0 = 2;
			break;
		case 4:
			break;
	}
	return iVar0;
}

char* func_129(int iParam0)
{
	char* sVar0;
	bool bVar1;
	bool bVar2;

	sVar0 = "";
	switch (Local_21.f_2)
	{
		case 0:
		case 1:
			bVar1 = func_196();
			bVar2 = func_197();
			switch (iParam0)
			{
				case 3:
					if (bVar1)
					{
						sVar0 = "s_FRONT_VERY_DRUNK";
					}
					else if (bVar2)
					{
						sVar0 = "s_FRONT_MODERATELY_DRUNK";
					}
					else
					{
						sVar0 = "s_FRONT";
					}
					break;
				case 4:
					if (bVar1)
					{
						sVar0 = "s_SIDE_VERY_DRUNK";
					}
					else if (bVar2)
					{
						sVar0 = "s_SIDE_MODERATELY_DRUNK";
					}
					else
					{
						sVar0 = "s_SIDE";
					}
					break;
			}
			break;
		case 2:
		case 3:
			switch (iParam0)
			{
				case 1:
					sVar0 = "s_FRONT";
					break;
				case 2:
					sVar0 = "s_SIDE";
					break;
			}
			break;
		case 4:
			break;
	}
	return sVar0;
}

int func_130(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
		{
			return -1;
		}
	}
	return Global_1277166[iParam0 /*86*/];
}

Vector3 func_131()
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;

	bVar3 = (Local_21.f_2 == 2 || Local_21.f_2 == 3);
	bVar4 = Local_21.f_2 == 3;
	switch (Local_21.f_1)
	{
		case 0:
			if (bVar3)
			{
				vVar0 = { 1788.727f, -816.8044f, 45.1f };
			}
			else
			{
				vVar0 = { 1789.577f, -812.6493f, 191.5339f };
			}
			break;
		case 1:
			if (bVar3)
			{
				if (bVar4)
				{
					vVar0 = { -1090.531f, 711.1215f, 106.522f };
				}
				else
				{
					vVar0 = { -1090.531f, 711.1215f, 106.722f };
				}
			}
			else
			{
				vVar0 = { -1092.746f, 707.5026f, 83.1687f };
			}
			break;
		case 2:
			if (bVar3)
			{
				if (bVar4)
				{
					vVar0 = { -2774.968f, -3046.855f, 13.6003f };
				}
				else
				{
					vVar0 = { -2774.968f, -3046.855f, 13.8003f };
				}
			}
			else
			{
				vVar0 = { -2779.185f, -3047.399f, -9.7658f };
			}
			break;
		case 3:
			if (bVar3)
			{
				if (bVar4)
				{
					vVar0 = { 1629.138f, 828.3974f, 147.2225f };
				}
				else
				{
					vVar0 = { 1629.138f, 828.3974f, 147.4225f };
				}
			}
			else
			{
				vVar0 = { 1628.259f, 832.5888f, 123.8766f };
			}
			break;
		case 4:
			if (bVar3)
			{
				if (bVar4)
				{
					vVar0 = { -1863.969f, -1727.859f, 111.5559f };
				}
				else
				{
					vVar0 = { -1863.969f, -1727.859f, 111.7559f };
				}
			}
			else
			{
				vVar0 = { -1863.601f, -1732.077f, 88.1898f };
			}
			break;
	}
	return vVar0;
}

Vector3 func_132()
{
	bool bVar0;
	vector3 vVar1;

	bVar0 = (Local_21.f_2 == 2 || Local_21.f_2 == 3);
	switch (Local_21.f_1)
	{
		case 0:
			if (bVar0)
			{
				vVar1 = { 0f, 0f, -136.62f };
			}
			else
			{
				vVar1 = { 0f, 0f, -176.6f };
			}
			break;
		case 1:
			if (bVar0)
			{
				vVar1 = { 0f, 0f, 23.421f };
			}
			else
			{
				vVar1 = { 0f, 0f, -16.5f };
			}
			break;
		case 2:
			if (bVar0)
			{
				vVar1 = { 0f, 0f, -27.83f };
			}
			else
			{
				vVar1 = { 0f, 0f, -67.7f };
			}
			break;
		case 3:
			if (bVar0)
			{
				vVar1 = { 0f, 0f, -113.27f };
			}
			else
			{
				vVar1 = { 0f, 0f, -153.2f };
			}
			break;
		case 4:
			if (bVar0)
			{
				vVar1 = { 0f, 0f, 60.01f };
			}
			else
			{
				vVar1 = { 0f, 0f, 20f };
			}
			break;
	}
	return vVar1;
}

int func_133()
{
	int iVar0;

	switch (Local_21.f_1)
	{
		case 0:
			iVar0 = 1;
			break;
		case 1:
			iVar0 = 2;
			break;
		case 2:
			iVar0 = 3;
			break;
		case 3:
			iVar0 = 4;
			break;
		case 4:
			iVar0 = 5;
			break;
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

char* func_134(int iParam0, bool bParam1)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				sVar0 = "MP_Male_01";
			}
			else
			{
				sVar0 = "MP_Female_01";
			}
			break;
		case 1:
			if (bParam1)
			{
				sVar0 = "MP_Male_02";
			}
			else
			{
				sVar0 = "MP_Female_02";
			}
			break;
		case 2:
			if (bParam1)
			{
				sVar0 = "MP_Male_03";
			}
			else
			{
				sVar0 = "MP_Female_03";
			}
			break;
		case 3:
			if (bParam1)
			{
				sVar0 = "MP_Male_04";
			}
			else
			{
				sVar0 = "MP_Female_04";
			}
			break;
		case 4:
			if (bParam1)
			{
				sVar0 = "MP_Male_05";
			}
			else
			{
				sVar0 = "MP_Female_05";
			}
			break;
		case 5:
			if (bParam1)
			{
				sVar0 = "MP_Male_06";
			}
			else
			{
				sVar0 = "MP_Female_06";
			}
			break;
		case 6:
			if (bParam1)
			{
				sVar0 = "MP_Male_07";
			}
			else
			{
				sVar0 = "MP_Female_07";
			}
			break;
	}
	return sVar0;
}

void func_135(int iParam0)
{
	Local_21.f_4 = iParam0;
}

void func_136(bool bParam0)
{
	if (bParam0)
	{
		if (!func_68(2))
		{
			ENTITY::SET_ENTITY_COORDS(Global_34, *(Local_21.f_12[Local_21.f_2 /*3*/]), true, false, true, true);
			ENTITY::SET_ENTITY_HEADING(Global_34, &(Local_21.f_28[Local_21.f_2]));
			func_198(0, 0);
			func_57(2);
		}
	}
	else if (!func_68(4))
	{
		ENTITY::SET_ENTITY_COORDS(Global_34, *(Local_21.f_12[Local_21.f_2 /*3*/]), true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(Global_34, &(Local_21.f_28[Local_21.f_2]));
		func_198(0, 0);
		func_57(4);
	}
}

bool func_137(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 255)
	{
		iParam2 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return (func_199(iParam0) && func_200(((*(*Global_1215057)[iParam2 /*303*/])[iParam0 /*23*/])->f_19, iParam1));
}

bool func_138()
{
	return Global_1102099->f_935.f_27 != -1;
}

void func_139(int iParam0, float fParam1, int iParam2)
{
	func_201(iParam0, 0, 0);
	if (func_202(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam1, iParam2);
	}
}

void func_140()
{
	if (func_203(2, 255))
	{
		return;
	}
	func_204(2);
}

void func_141()
{
	if (func_205(8, 255))
	{
		return;
	}
	func_204(3);
}

bool func_142()
{
	int iVar0;

	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) == 4);
}

void func_143(int iParam0)
{
	_NAMESPACE71::_0xDD1232B332CBB9E7(1, iParam0, 0);
}

bool func_144(int iParam0)
{
	return func_206(iParam0, -1);
}

int func_145(int iParam0)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_HUMAN(iVar0))
		{
			return 0;
		}
	}
	return 1;
}

Vector3 func_146(int iParam0)
{
	return *(Global_1277020->f_6.f_1[iParam0 /*3*/]);
}

int func_147(vector3 vParam0, var uParam3)
{
	if (func_9(vParam0))
	{
		return 0;
	}
	if (func_207(255) == 4)
	{
		return 0;
	}
	if (func_179(4, 255))
	{
	}
	func_151(4);
	func_208(&(Global_1099294->f_546));
	Global_1099294->f_546.f_6 = { vParam0 };
	Global_1099294->f_546 = uParam3;
	Global_1099294->f_546.f_5 = 1;
	Global_1099294->f_26.f_18 = 0;
	Global_1099294->f_26.f_19 = 0;
	func_209(Global_1099294->f_546, 36);
	return 1;
}

void func_148(bool bParam0)
{
	if (!bParam0)
	{
		func_210(17);
	}
	else
	{
		func_151(17);
	}
}

void func_149(bool bParam0)
{
	if (!bParam0)
	{
		func_210(18);
	}
	else
	{
		func_151(18);
	}
}

void func_150(bool bParam0)
{
	if (bParam0)
	{
		func_151(125);
	}
	else
	{
		func_210(125);
	}
}

int func_151(int iParam0)
{
	if (func_211(&(Global_1099294->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_152(bool bParam0, bool bParam1)
{
	if (func_207(255) == 4)
	{
		return;
	}
	if (func_9(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_210(0);
	}
	else
	{
		if (bParam1)
		{
			func_212(0, 0, 0, 1);
		}
		func_151(0);
		func_213(&(Global_1099294->f_516));
		Global_1099294->f_516 = 0f;
		Global_1099294->f_516.f_5 = 1;
		Global_1099294->f_516.f_16 = 0;
		Global_1099294->f_516.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1099294->f_516.f_17.f_3 = { 0f, 0f, 0f };
		Global_1099294->f_516.f_17 = { Global_1901929->f_44.f_1, Global_1901929->f_44.f_1, Global_1901929->f_44.f_1 };
		Global_1099294->f_516.f_17.f_9 = -432403087;
		func_214(&(Global_1099294->f_555));
		Global_1099294->f_555.f_6 = { Global_1099294->f_516.f_17.f_6 };
		Global_1099294->f_555 = Global_1099294->f_516;
		Global_1099294->f_555.f_5 = 1;
		if (bParam1)
		{
			Global_1099294->f_26.f_18 = 0;
			Global_1099294->f_26.f_19 = 0;
		}
	}
	func_215(Global_1099294->f_516, 36);
	func_216(Global_1099294->f_555, 36);
}

void func_153(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	if (bParam0)
	{
		func_217(iParam1);
		return;
	}
	if (iParam1 == 2)
	{
		iParam1 = 56;
	}
	iVar0 = iParam1;
	bVar1 = !iVar0 & 4 != false;
	bVar2 = iVar0 & 8 != false;
	bVar3 = iVar0 & 16 != false;
	bVar4 = iVar0 & 32 != false;
	bVar5 = iVar0 & 1024 != false;
	bVar6 = iVar0 & 64 != false;
	func_218(bVar1, bVar2, bVar3, (bVar4 || bVar5), bVar6, 0, bVar5);
}

Vector3 func_154(int iParam0, int iParam1)
{
	vector3 vVar0;

	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	if (iParam1 == -1)
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	func_220(1268215321, func_170(iParam0), func_219(iParam1), 0);
	if (!DATAFILE::_DATAFILE_GET_VECTOR(&vVar0, &(Global_1277020->f_1)))
	{
		return 0f, 0f, 0f;
	}
	return vVar0;
}

float func_155(int iParam0, int iParam1)
{
	float fVar0;

	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam1 == -1)
	{
		return 0f;
	}
	fVar0 = 0f;
	func_220(-226869021, func_170(iParam0), func_219(iParam1), 0);
	if (!DATAFILE::_DATAFILE_GET_FLOAT(&fVar0, &(Global_1277020->f_1)))
	{
		return 0f;
	}
	return fVar0;
}

void func_156(vector3 vParam0, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, float fParam8)
{
	vector3 vVar0;
	var uVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
	uVar3 = uParam3;
	if (!func_221(&vVar0, &uVar3, 1))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
		uVar3 = uParam3;
	}
	func_222(vParam0, uParam3, vVar0, uVar3, iParam4, iParam5, iParam6, iParam7, fParam8, 1);
}

void func_157(int iParam0)
{
	if (iParam0 == 0)
	{
		MAP::_0xE057FEA9A22EB3EE(-347798845);
	}
	else if (iParam0 == 1)
	{
		MAP::_0xE057FEA9A22EB3EE(-1136456260);
	}
	else if (iParam0 == 2)
	{
		MAP::_0xE057FEA9A22EB3EE(518116088);
	}
	else if (iParam0 == 3)
	{
		MAP::_0xE057FEA9A22EB3EE(2142311577);
	}
	else if (iParam0 == 4)
	{
		MAP::_0xE057FEA9A22EB3EE(-1846003417);
	}
}

void func_158(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_92(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_174(*uParam0);
	if (((*Global_1949759)[iVar0 /*23*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_223(iVar0);
	*uParam0 = 0;
}

void func_159()
{
	SCRIPTS::_0x20F4CB76689ACDBC(&(Global_1070356->f_19683.f_260));
}

void func_160(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_161(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

int func_162(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 30)
	{
		return 0;
	}
	if (func_224(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_225(iParam0))
	{
		return 0;
	}
	if (func_226(iParam0))
	{
		return 0;
	}
	if ((Global_1900718->f_67 && !func_227(iParam0, 1)) || func_228(32768))
	{
		if (!func_227(iParam0, 262144) || !Global_1904613->f_8198)
		{
			return 0;
		}
	}
	if (!func_229())
	{
		return 0;
	}
	return 1;
}

void func_163(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904613[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1904613)[iParam0] = uVar0;
}

int func_164(int iParam0)
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

int func_165(int iParam0)
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

int func_166(int iParam0)
{
	switch (iParam0)
	{
		case 532942402:
			return 0;
		case 1661805647:
			return 1;
		default:
			break;
	}
	return -1;
}

bool func_167(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 32);
}

int func_168()
{
	int iVar0;

	if (Global_1901929->f_38.f_2 == 1788394582)
	{
		iVar0 = Global_1275573->f_21;
		if (iVar0 > Global_1901929->f_38.f_3 && iVar0 < Global_1901929->f_38.f_4)
		{
			return 1;
		}
	}
	return 0;
}

int func_169(int iParam0, int iParam1)
{
	int iVar0;

	func_201(iParam0, 0, 0);
	if (func_202(iParam0))
	{
		iVar0 = ENTITY::_0xF7424890E4A094C0(iParam0, iParam1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return iVar0;
		}
	}
	return 0;
}

int func_170(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 680390016;
		case 1:
			return -2070886255;
		case 2:
			return 1821948827;
		case 3:
			return -1823593561;
		case 4:
			return -1930045261;
		default:
			break;
	}
	return -1588462292;
}

int func_171(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 532942402;
		case 1:
			return 1661805647;
		default:
			break;
	}
	return 0;
}

bool func_172(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1949759)[iParam0 /*23*/])->f_1 && iParam1) != 0;
}

void func_173(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_176(iParam0, 1);
	func_177(iParam0, 1);
	func_178(iParam0, 128);
}

int func_174(int iParam0)
{
	return iParam0;
}

void func_175(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949759)[iParam0 /*23*/])->f_1 = (((*Global_1949759)[iParam0 /*23*/])->f_1 - (((*Global_1949759)[iParam0 /*23*/])->f_1 && iParam1));
}

void func_176(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		if (((*Global_1949759)[iParam0 /*23*/])->f_5 == 5 && !func_172(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949759)[iParam0 /*23*/])->f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949759)[iParam0 /*23*/])->f_3, bParam1);
		}
	}
}

void func_177(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1949759)[iParam0 /*23*/])->f_3, iParam1);
	}
}

void func_178(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949759)[iParam0 /*23*/])->f_1 = (((*Global_1949759)[iParam0 /*23*/])->f_1 || iParam1);
}

int func_179(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_230(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 == func_231())
	{
		return func_230(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1275573->f_22[iParam1])
	{
		return func_230(&(((*Global_1097610)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

bool func_180(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_232(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_181(var uParam0, var uParam1)
{
	return uParam0;
}

int func_182(int iParam0)
{
	switch (PLAYER::GET_PLAYER_TEAM(iParam0))
	{
		case 0:
			return -275684858;
		case 1:
			return -1561147190;
		case 2:
			return -736318691;
		case 3:
			return 158864851;
		case 4:
			return 923463928;
		case 5:
			return -317694716;
		case 6:
			return 461388259;
		case 7:
			return 1811916478;
		case 8:
			return 1713937168;
		default:
			break;
	}
	return -1031763995;
}

int func_183(int iParam0)
{
	if (_NAMESPACE26::_0x901E0DC25080C8B9(iParam0) != Global_1275573->f_15 && !func_233())
	{
		return 636925055;
	}
	return -963477619;
}

int func_184(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = BUILTIN::FLOOR(func_234(iParam0, bParam1));
	if (bParam1)
	{
		iVar3 = iParam0;
		if (iVar3 < 0 || iVar3 >= 32)
		{
			iVar2 = 0;
		}
		else
		{
			iVar2 = BUILTIN::FLOOR(((*Global_1097610)[iVar3 /*51*/])->f_18);
		}
		if (iVar2 > iVar0)
		{
			iVar1 = iVar2;
		}
		else
		{
			iVar1 = iVar0;
		}
	}
	else
	{
		iVar1 = iVar0;
	}
	if (iVar1 < Global_1901929->f_673.f_31)
	{
		return 0;
	}
	if (iVar1 < Global_1901929->f_673.f_32)
	{
		return 1;
	}
	if (iVar1 < Global_1901929->f_673.f_33)
	{
		return 2;
	}
	if (iVar1 < Global_1901929->f_673.f_34)
	{
		return 3;
	}
	if (iVar1 < Global_1901929->f_673.f_35)
	{
		return 4;
	}
	if (iVar1 < Global_1901929->f_673.f_36)
	{
		return 5;
	}
	return 6;
}

int func_185(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == 255)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == Global_1275573->f_10)
	{
		return 1;
	}
	iVar0 = iParam0;
	if (!&Global_1275573->f_22[iVar0])
	{
		return 0;
	}
	if (bParam1)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26836), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26834), iVar0))
		{
			return 0;
		}
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26835), iVar0))
		{
			return 1;
		}
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), iVar0))
	{
		return 1;
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26831), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26833), iVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_TEAM(Global_1275573->f_10);
	iVar2 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((iVar1 != -1 && iVar2 != -1) && iVar1 == iVar2)
	{
		return 1;
	}
	else if (_NAMESPACE26::_0x81FB74C83C2ED69F(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_186(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return false;
	}
	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return true;
	}
	if (bParam1)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26835), iVar0))
		{
			return false;
		}
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26836), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26834), iVar0))
		{
			return true;
		}
	}
	if (func_235(iParam0))
	{
		return true;
	}
	return !func_185(iParam0, 0);
}

int func_187(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 0;
	}
	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (bParam1)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26835), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26836), iVar0))
		{
			return 0;
		}
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26834), iVar0))
		{
			return 1;
		}
	}
	if (func_236(iParam0))
	{
		return 0;
	}
	if (func_235(iParam0))
	{
		return 0;
	}
	if (func_237(iParam0))
	{
		return 1;
	}
	return func_238(iParam0);
}

int func_188(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_239(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_189(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -504335712;
		case 1:
			return 395262693;
		case 2:
			return -933924539;
		case 3:
			return 371211549;
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

char* func_190(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

void func_191(var uParam0)
{
	var uVar0;

	*uParam0 = 13;
	uParam0->f_1 = PLAYER::GET_PLAYER_INDEX();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	uVar0 = func_240(0, 8);
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 26, 15, &uVar0);
}

void func_192(bool bParam0)
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

int func_193(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1938417->f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(((*Global_1938417)[iVar0 /*16*/])->f_10)))
		{
			func_241(iVar0);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_194(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1896726->f_382)
		{
			Global_1896726->f_382 = bParam0;
		}
	}
	else if (Global_1896726->f_382)
	{
		Global_1896726->f_382 = bParam0;
	}
}

void func_195(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_196()
{
	return &Global_1939008 == 2;
}

bool func_197()
{
	return &Global_1939008 == 1;
}

void func_198(int iParam0, float fParam1)
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(iParam0, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam1, 1f);
}

bool func_199(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 12);
}

bool func_200(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_201(int iParam0, bool bParam1, bool bParam2)
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
	{
		if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051202->f_16[0]))) && bParam1)
		{
			OBJECT::_0xD99229FE93B46286(iParam0, 1, 1, 0, &(Global_1051202->f_16[0]), 0, 0);
		}
		else
		{
			OBJECT::_0xD99229FE93B46286(iParam0, 1, 0, 0, 0, 0, 0);
		}
	}
	else if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051202->f_16[0]))) && bParam1)
	{
		if (!OBJECT::_0xB5DED7B65C604FDF(iParam0))
		{
			OBJECT::_0xD99229FE93B46286(iParam0, 1, 1, 0, &(Global_1051202->f_16[0]), 0, 0);
		}
	}
	if (bParam2)
	{
		OBJECT::_0x1F1FABFE9B2A1254(iParam0, 1);
	}
	return iParam0;
}

int func_202(int iParam0)
{
	if (func_242(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return 0;
}

bool func_203(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return (((*Global_1269869)[iParam1 /*20*/])->f_1 && iParam0) != 0;
}

void func_204(int iParam0)
{
	func_243(3, iParam0);
}

bool func_205(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return (((*Global_1269869)[iParam1 /*20*/])->f_2 && iParam0) != 0;
}

int func_206(int iParam0, int iParam1)
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

int func_207(int iParam0)
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

void func_208(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_209(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

int func_210(int iParam0)
{
	if (func_244(&(Global_1099294->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_211(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
	MISC::SET_BIT((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

void func_212(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_245(iParam0);
	if (!func_246(1))
	{
		return;
	}
	if (bParam1)
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_247(128) && !func_248(18))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_249() == 4)
	{
		func_210(17);
	}
	func_250(1024);
}

void func_213(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_214(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_215(struct<29> Param0, var uParam29, int iParam30)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(Param0.f_4))
			{
			}
			break;
	}
	if (Param0.f_16)
	{
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Param0.f_27) && Param0.f_28)
	{
	}
}

void func_216(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

void func_217(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	ENTITY::SET_ENTITY_VISIBLE(iVar1, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 2, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 3, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 11, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 12, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 1, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 0, true);
	PED::SET_PED_CAN_RAGDOLL(iVar1, true);
	bVar2 = iParam0 & 256 != false;
	if (bVar2)
	{
		PLAYER::SET_PLAYER_CONTROL(iVar0, 1, 0, 0);
	}
	else
	{
		PLAYER::SET_PLAYER_CONTROL(iVar0, 1, 4, 0);
	}
	ENTITY::FREEZE_ENTITY_POSITION(iVar1, false);
	if (iParam0 & 512 != 0)
	{
	}
	else
	{
		func_251();
	}
	PLAYER::SET_PLAYER_INVINCIBLE(iVar0, false);
	if (!PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
	{
		ENTITY::SET_ENTITY_COLLISION(iVar1, true, false);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar1, true, false);
	}
}

void func_218(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!bParam0)
	{
	}
	if (bParam1)
	{
	}
	if (bParam2)
	{
	}
	if (bParam3)
	{
	}
	if (bParam6)
	{
	}
	if (bParam4)
	{
	}
	if (bParam5)
	{
	}
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	iVar2 = 0;
	if (bParam3 && !PED::IS_PED_FATALLY_INJURED(iVar1))
	{
		iVar2 = 4;
	}
	if (bParam4)
	{
		iVar2 |= 256;
	}
	if (bParam5)
	{
		iVar2 |= 2048;
	}
	PLAYER::SET_PLAYER_CONTROL(iVar0, 0, iVar2, 0);
	ENTITY::SET_ENTITY_VISIBLE(iVar1, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 2, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 3, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 11, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 12, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 1, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 0, bParam0);
	if (bParam1)
	{
		PLAYER::SET_PLAYER_INVINCIBLE(iVar0, true);
	}
	if ((!PED::IS_PED_IN_ANY_VEHICLE(iVar1, true) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT(iVar1)) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iVar1))
	{
		if (bParam2)
		{
			ENTITY::SET_ENTITY_COLLISION(iVar1, false, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar1, false, false);
			ENTITY::FREEZE_ENTITY_POSITION(iVar1, true);
		}
	}
	if (bParam3 && !PED::IS_PED_FATALLY_INJURED(iVar1))
	{
		if (TASK::_0x9FF5F9B24E870748(iVar1))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, 0, !bParam6);
		}
	}
}

int func_219(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1799339271;
		case 1:
			return -1712995813;
		case 2:
			return -43333367;
		case 3:
			return 1618302617;
		case 4:
			return -2113498014;
		default:
			break;
	}
	return -1950033077;
}

void func_220(int iParam0, var uParam1, var uParam2, int iParam3)
{
	func_252();
	Global_1277020->f_1.f_2 = iParam0;
	Global_1277020->f_1.f_3 = uParam1;
	Global_1277020->f_1.f_4 = uParam2;
	Global_1277020->f_1.f_1 = iParam3;
}

int func_221(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 16);
	if (bParam2)
	{
		iVar1 = 0;
		iVar2 = -1;
		fVar3 = 0f;
		iVar1 = 0;
		while (iVar1 <= 15)
		{
			fVar4 = BUILTIN::VDIST(Global_1275573->f_17, (Global_1070356->f_22101.f_366[iVar1 /*272*/])->f_2);
			if (fVar4 < fVar3 || iVar2 == -1)
			{
				iVar2 = iVar1;
				fVar3 = fVar4;
			}
			iVar1++;
		}
		iVar0 = iVar2;
	}
	iVar0 = &Global_1070356->f_22101.f_366[iVar0 /*272*/];
	iVar5 = func_253(iVar0);
	if (iVar5 <= 0)
	{
		return 0;
	}
	else
	{
		iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar5);
		if (func_254(iVar0, iVar6, uParam0, uParam1))
		{
			return 1;
		}
	}
	return 0;
}

void func_222(vector3 vParam0, var uParam3, vector3 vParam4, int iParam7, float fParam8, float fParam9, bool bParam10, int iParam11, float fParam12, int iParam13)
{
	if (func_207(255) == 4)
	{
		return;
	}
	if (func_9(vParam0))
	{
		return;
	}
	if (fParam8 < 0f && fParam9 < 0f)
	{
		fParam8 = Global_1901929->f_44;
		fParam9 = Global_1901929->f_44.f_1;
	}
	if (fParam8 == 0f && fParam9 == 0f)
	{
		fParam8 = Global_1901929->f_44;
		fParam9 = Global_1901929->f_44.f_1;
	}
	if (fParam9 < fParam8)
	{
		fParam8 = Global_1901929->f_44;
		fParam9 = Global_1901929->f_44.f_1;
	}
	if (bParam10)
	{
		func_212(0, 0, 0, 1);
	}
	func_151(0);
	func_151(3);
	Global_1099294->f_586 = iParam11;
	Global_1099294->f_587 = fParam12;
	Global_1099294->f_588 = iParam13;
	func_213(&(Global_1099294->f_516));
	Global_1099294->f_516 = uParam3;
	Global_1099294->f_516.f_5 = 1;
	Global_1099294->f_516.f_17.f_6 = { vParam0 };
	Global_1099294->f_516.f_17.f_3 = { 0f, 0f, 0f };
	Global_1099294->f_516.f_17 = { fParam9, fParam9, fParam9 };
	Global_1099294->f_516.f_17.f_9 = -432403087;
	if (fParam8 > 1f)
	{
		Global_1099294->f_516.f_16 = 1;
		Global_1099294->f_516.f_6.f_6 = { Global_1099294->f_516.f_17.f_6 };
		Global_1099294->f_516.f_6.f_3 = { 0f, 0f, 0f };
		Global_1099294->f_516.f_6 = { fParam8, fParam8, fParam8 };
		Global_1099294->f_516.f_6.f_9 = -432403087;
	}
	func_214(&(Global_1099294->f_555));
	Global_1099294->f_555.f_6 = { vParam4 };
	Global_1099294->f_555 = iParam7;
	Global_1099294->f_555.f_5 = 1;
	Global_1099294->f_26.f_18 = 0;
	Global_1099294->f_26.f_19 = 0;
	func_215(Global_1099294->f_516, 36);
	func_216(Global_1099294->f_555, 36);
}

void func_223(int iParam0)
{
	if (!func_255(iParam0))
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

bool func_224(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(&(Global_17172.f_2563[iParam0]), iParam1);
}

int func_225(int iParam0)
{
	if (func_227(iParam0, 4))
	{
		return 0;
	}
	return 1;
}

int func_226(int iParam0)
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

bool func_227(int iParam0, int iParam1)
{
	return ((Global_1904613->f_31[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_228(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_229()
{
	if (!func_98())
	{
		return 0;
	}
	return Global_1904613->f_8196;
}

bool func_230(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_231()
{
	return Global_1099294->f_339;
}

int func_232(struct<2> Param0)
{
	int iVar0;

	if (!func_79(Param0))
	{
		return -1;
	}
	iVar0 = func_256(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1070356->f_17817.f_1[iVar0 /*3*/])->f_2;
}

int func_233()
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
	if (!func_79(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

float func_234(int iParam0, bool bParam1)
{
	int iVar0;

	if (!Global_1132968->f_6289)
	{
		return 0f;
	}
	if (iParam0 == &Global_1275573->f_154[&Global_1275573])
	{
		return Global_17172.f_2619;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0f;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0f;
	}
	if ((_NAMESPACE26::_0x149A2751AB66AC02(_NAMESPACE26::_0x901E0DC25080C8B9(iParam0)) > 1 && bParam1) && ((*Global_1097610)[iVar0 /*51*/])->f_18 >= ((*Global_1097610)[iVar0 /*51*/])->f_45)
	{
		return ((*Global_1097610)[iVar0 /*51*/])->f_18;
	}
	return ((*Global_1097610)[iVar0 /*51*/])->f_45;
}

int func_235(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26833), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_236(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_237(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26831), iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_238(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		func_257(iParam0);
		return false;
	}
	if (func_237(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) != 2)
		{
			func_258(iParam0, 5, 1, 1, 0, 0);
		}
		return true;
	}
	return (NETWORK::_0x862C5040F4888741(Global_1275573->f_10, iParam0) || NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) == 2);
}

int func_239(struct<2> Param0, var uParam2)
{
	if (!func_79(Param0))
	{
		return 0;
	}
	func_259(uParam2);
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

var func_240(int iParam0, int iParam1)
{
	return func_260(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_241(int iParam0)
{
	struct<16> Var0;

	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(((*Global_1938417)[iParam0 /*16*/])->f_10)))
	{
		return;
	}
	*((*Global_1938417)[iParam0 /*16*/]) = { Var0 };
	Global_1938417->f_161 = (Global_1938417->f_161 - 1);
	if (Global_1938417->f_161 < 0)
	{
		Global_1938417->f_161 = 0;
	}
}

bool func_242(int iParam0)
{
	return iParam0 != 0;
}

void func_243(int iParam0, int iParam1)
{
	struct<6> Var0;
	var uVar6;
	int iVar7;
	int iVar8;

	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0 = 47;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Var0.f_4 = iParam0;
	Var0.f_5 = iParam1;
	if (!NETWORK::_0x255A5EF65EDA9167(Var0.f_1))
	{
		return;
	}
	if (((((((((((Var0.f_4 == 2 || Var0.f_4 == 3) || Var0.f_4 == 6) || Var0.f_4 == 7) || Var0.f_4 == 8) || Var0.f_4 == 9) || Var0.f_4 == 10) || Var0.f_4 == 11) || Var0.f_4 == 12) || Var0.f_4 == 13) || Var0.f_4 == 14) || Var0.f_4 == 15)
	{
		iVar8 = 0;
		while (iVar8 < 32)
		{
			iVar7 = PLAYER::INT_TO_PLAYERINDEX(iVar8);
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar7))
			{
			}
			else
			{
				SCRIPTS::_0x31010318BA9897AC(&uVar6, iVar8);
			}
			iVar8++;
		}
	}
	else
	{
		SCRIPTS::_0x31010318BA9897AC(&uVar6, PLAYER::NETWORK_PLAYER_ID_TO_INT());
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Var0, 6, 0, &uVar6);
}

bool func_244(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
	MISC::CLEAR_BIT((*uParam0)[iVar0], iVar1);
	return bVar2;
}

void func_245(int iParam0)
{
	Global_1099294->f_26.f_12 = iParam0;
}

bool func_246(int iParam0)
{
	return (Global_1099294->f_26.f_7 && iParam0) != 0;
}

bool func_247(int iParam0)
{
	return (Global_1099294->f_26.f_9 && iParam0) != 0;
}

bool func_248(int iParam0)
{
	return (Global_1099294->f_4[Global_1100047[iParam0 /*2*/]] && ((*Global_1100047)[iParam0 /*2*/])->f_1) == ((*Global_1100047)[iParam0 /*2*/])->f_1;
}

int func_249()
{
	if (&Global_1099294 <= 5)
	{
		return &Global_1099294;
	}
	if (&Global_1099294 <= 22)
	{
		return 4;
	}
	if (&Global_1099294 <= 25)
	{
		return 3;
	}
	return 26;
}

void func_250(int iParam0)
{
	if (func_261(iParam0))
	{
		return;
	}
	Global_1099294->f_26.f_9 = (Global_1099294->f_26.f_9 || iParam0);
}

void func_251()
{
	if (!Global_1099294->f_16)
	{
		return;
	}
	Global_1070356->f_27136.f_5 = 1;
	AUDIO::_0x531A78D6BF27014B("rdro_gamemode_transition_sounds");
	AUDIO::_0x531A78D6BF27014B("rdro_gamemode_generic_sounds");
}

void func_252()
{
	Global_1277020->f_1 = (Global_1070356->f_26934[49 /*4*/])->f_3;
	Global_1277020->f_1.f_1 = 0;
	Global_1277020->f_1.f_2 = 0;
	Global_1277020->f_1.f_3 = 0;
	Global_1277020->f_1.f_4 = 0;
}

int func_253(int iParam0)
{
	struct<4> Var0;

	Var0 = Global_1070356->f_22101.f_366.f_4357;
	Var0.f_2 = 1593794963;
	Var0.f_3 = iParam0;
	return DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
}

int func_254(int iParam0, int iParam1, var uParam2, var uParam3)
{
	struct<5> Var0;

	Var0 = Global_1070356->f_22101.f_366.f_4357;
	Var0.f_2 = 160165798;
	Var0.f_3 = iParam0;
	Var0.f_4 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1576253240;
		DATAFILE::_DATAFILE_GET_VECTOR(uParam2, &Var0);
		Var0.f_2 = -55481687;
		DATAFILE::_DATAFILE_GET_FLOAT(uParam3, &Var0);
		return 1;
	}
	return 0;
}

bool func_255(int iParam0)
{
	return func_172(iParam0, 2);
}

int func_256(struct<2> Param0)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;

	if (Global_1070356->f_17817 <= 0)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_239(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1070356->f_17817 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_239(*(Global_1070356->f_17817.f_1[iVar8 /*3*/]), &vVar3);
		if (vVar3.x > vVar0.x)
		{
			iVar7 = (iVar8 - 1);
		}
		else if (vVar3.x < vVar0.x)
		{
			iVar6 = iVar8 + 1;
		}
		else
		{
			return iVar8;
		}
	}
	return -1;
}

void func_257(int iParam0)
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
	func_262(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 0;
}

void func_258(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	bool bVar5;
	struct<8> Var6;

	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (func_263(iVar0, iParam1, iParam5))
	{
		iVar1 = 1;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] != 2)
	{
		if (!&Global_1275573->f_22[iVar0])
		{
			func_257(iParam0);
			return;
		}
		NETWORK::_0x51951DE06C0D1C40(iParam0, 2);
		Global_1070356->f_19683.f_1[iVar0 /*8*/] = 2;
		iVar1 = 1;
	}
	if (iParam2 && iVar1)
	{
		iVar2 = 0;
		while (iVar2 <= 31)
		{
			iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (iVar2 != &Global_1275573 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
			{
				if (_NAMESPACE26::_0x81FB74C83C2ED69F(iVar3))
				{
					if (bParam3)
					{
						SCRIPTS::_0x31010318BA9897AC(&uVar4, iVar2);
						bVar5 = true;
					}
				}
				else if (_NAMESPACE26::_0x3F59FE6F37869576(iVar3, iParam0))
				{
					if (bParam4)
					{
						SCRIPTS::_0x31010318BA9897AC(&uVar4, iVar2);
						bVar5 = true;
					}
					if (iVar2 != iVar0)
					{
						func_258(iVar3, iParam1, 0, 1, 0, 0);
					}
				}
			}
			iVar2++;
		}
		if (bVar5)
		{
			Var6.f_6 = 255;
			Var6.f_4 = 1;
			Var6.f_6 = iParam0;
			Var6.f_7 = iParam1;
			func_264(&Var6, uVar4);
		}
	}
}

void func_259(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

var func_260(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_265() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_266());
				break;
			case -432403087:
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_266());
				break;
			case -1612834106:
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_266());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_267(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_268(iVar2))
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
				if (iVar9 & 8192 != 0 && func_207(iVar2) != 1)
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
					if (!func_269(iVar10))
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

bool func_261(int iParam0)
{
	return (Global_1099294->f_26.f_9 && iParam0) == iParam0;
}

void func_262(int iParam0)
{
	if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 != 0)
	{
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = 0;
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 = 0;
	}
}

int func_263(int iParam0, int iParam1, int iParam2)
{
	if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 < iParam1)
	{
		if (iParam2 != 0)
		{
			(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = iParam2;
		}
		else
		{
			(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = Global_1275573->f_21;
		}
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 = iParam1;
		return 1;
	}
	else if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 == iParam1)
	{
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = Global_1275573->f_21;
		return 1;
	}
	return 0;
}

void func_264(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 179;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 2, &uParam1);
	func_270(*uParam0);
}

int func_265()
{
	return Global_1051202->f_12;
}

char* func_266()
{
	return "unnamed";
}

int func_267(int iParam0)
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

int func_268(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return func_179(35, iParam0);
}

bool func_269(int iParam0)
{
	if (func_236(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) != 1)
		{
			func_271(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) == 1;
}

void func_270(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
}

void func_271(int iParam0)
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
		func_257(iParam0);
		return;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_262(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 1;
}

