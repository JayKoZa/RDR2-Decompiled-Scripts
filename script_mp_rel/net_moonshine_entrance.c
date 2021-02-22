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
	float fLocal_16 = 0f;
	float fLocal_17 = 0f;
	var uLocal_18 = 0;
	struct<98> Local_19 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0 } ;
	struct<10> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	fLocal_16 = 1f;
	fLocal_17 = 1f;
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
	Local_19.f_1 = vParam0.z;
	func_6(64);
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

bool func_3()
{
	int iVar0;

	if (Local_19 == 34)
	{
		return true;
	}
	if (!MISC::IS_BIT_SET(Global_1298166.f_201, 0))
	{
		return true;
	}
	iVar0 = func_7(Global_1298166.f_200, 1);
	if (((Local_19.f_1 != iVar0 && iVar0 != -1) && Local_19 < 25) && !func_8())
	{
		return true;
	}
	if (((!func_9(Local_19.f_13[3 /*3*/]) && Local_19 == 25) && BUILTIN::VDIST(Local_19.f_13[3 /*3*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false)) > Global_1901947.f_789.f_10) && !func_10(6, 255))
	{
		return true;
	}
	return false;
}

void func_4()
{
	func_11();
	func_12();
	func_13(joaat("GHOSTING_VOLUME"));
	if (func_14(64))
	{
		if (Local_19 < 33)
		{
			func_15(33);
		}
	}
	else if (func_14(128))
	{
		if (Local_19 > 3)
		{
			if (Global_1298166.f_1 == 4)
			{
				if (Local_19 < 21)
				{
					func_15(21);
				}
				else if (func_16(Local_19.f_1) < 80f)
				{
					func_6(128);
				}
			}
			else if (Local_19 < 25)
			{
				func_15(25);
			}
			else if (func_16(Local_19.f_1) < 80f)
			{
				func_6(128);
			}
		}
	}
	func_17(&(Local_19.f_87));
	switch (Local_19)
	{
		case 0:
			func_18();
			func_15(1);
			break;
		case 1:
			if (func_19())
			{
				func_15(2);
			}
			break;
		case 2:
			if (func_20())
			{
				func_15(3);
			}
			break;
		case 3:
			if (func_14(128))
			{
				if (Global_1298166.f_1 == 4)
				{
					func_15(21);
				}
				else
				{
					func_15(25);
				}
				return;
			}
			if (Global_1298166.f_1 == 4)
			{
				func_15(21);
				return;
			}
			if (!func_21(PLAYER::PLAYER_ID(), 16) && (Global_1298166.f_1 == 3 || Global_1298166.f_1 == 2))
			{
				if (func_22())
				{
					if (func_23(PLAYER::PLAYER_ID(), 1, 0, 1))
					{
						func_24(8192, 0);
					}
					return;
				}
				func_15(10);
			}
			else
			{
				func_15(8);
			}
			break;
		case 8:
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_19.f_85) || !GANG::_0x81FB74C83C2ED69F(Local_19.f_85))
			{
				func_15(33);
			}
			func_25(0);
			if (Global_1298166.f_1 == 2 && !func_22())
			{
				func_15(10);
				return;
			}
			if (func_26(0))
			{
				if (func_23(PLAYER::PLAYER_ID(), 1, 0, 1))
				{
					func_24(8192, 0);
				}
				func_27(0);
				return;
			}
			else
			{
				func_27(1);
			}
			func_28();
			func_29();
			if (func_30())
			{
				func_31();
				func_27(0);
				func_32(Local_19.f_1);
				func_33(16384);
				func_15(5);
			}
			break;
		case 5:
			func_31();
			if (!func_21(PLAYER::PLAYER_ID(), 128))
			{
			}
			else
			{
				if (func_34())
				{
					func_15(4);
				}
				Jump @2130; //curOff = 762
				func_31();
				if (func_35())
				{
					func_36();
					NETWORK::_0x4B05B97BA46F419D(0);
					func_37(1, 1);
					func_15(6);
				}
				Jump @2130; //curOff = 797
				func_31();
				if (func_38())
				{
					func_15(7);
				}
				Jump @2130; //curOff = 816
				func_31();
				if (func_39())
				{
					func_40();
					func_41();
					func_15(9);
				}
				Jump @2130; //curOff = 844
				func_31();
				func_42();
				if (func_43())
				{
					func_44();
					func_15(30);
					return;
				}
				if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_19.f_6) && ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_19.f_6, false)) && Local_19.f_4 == 5)
				{
					func_45(0);
					func_44();
					func_27(1);
					func_46();
					NETWORK::_0x4B05B97BA46F419D(1);
					func_37(1, 0);
					func_47();
					func_15(25);
				}
				Jump @2130; //curOff = 951
				if (func_48())
				{
					func_27(0);
					func_33(16384);
					if (Global_1298166.f_1 == 2)
					{
						func_15(11);
					}
					else
					{
						func_15(12);
					}
				}
				Jump @2130; //curOff = 998
				if (!func_49())
				{
					func_50(1);
					func_15(33);
					return;
				}
				if (func_51())
				{
					func_52();
					func_15(13);
				}
				Jump @2130; //curOff = 1040
				if (!func_49())
				{
					func_50(1);
					func_15(33);
					return;
				}
				func_53();
				func_15(13);
				Jump @2130; //curOff = 1075
				func_31();
				if (!func_49())
				{
					func_15(33);
					func_50(1);
					return;
				}
				if (func_39())
				{
					if (func_54())
					{
						func_36();
						func_32(Local_19.f_1);
						func_15(15);
					}
					else
					{
						func_32(Local_19.f_1);
						func_15(19);
					}
				}
				Jump @2130; //curOff = 1153
				func_31();
				if (!func_21(PLAYER::PLAYER_ID(), 128) && !func_55())
				{
				}
				else
				{
					if (func_34())
					{
						func_15(14);
					}
					Jump @2130; //curOff = 1200
					func_31();
					if (func_35())
					{
						NETWORK::_0x4B05B97BA46F419D(0);
						func_37(1, 1);
						func_15(16);
					}
					Jump @2130; //curOff = 1232
					func_31();
					if (func_38())
					{
						func_15(17);
					}
					Jump @2130; //curOff = 1252
					func_31();
					func_40();
					func_41();
					func_15(18);
					Jump @2130; //curOff = 1273
					func_31();
					func_42();
					if (func_43())
					{
						func_44();
						func_15(30);
						return;
					}
					if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_19.f_6) && ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_19.f_6, false)) && Local_19.f_4 == 5)
					{
						func_45(0);
						func_44();
						func_27(1);
						func_46();
						NETWORK::_0x4B05B97BA46F419D(1);
						func_37(1, 0);
						func_47();
						func_56();
						func_15(25);
					}
					Jump @2130; //curOff = 1384
					if (!func_49())
					{
						func_15(33);
						func_50(1);
						func_45(0);
						return;
					}
					if (func_57(0))
					{
						func_27(1);
						func_58(0);
						func_47();
						func_15(20);
					}
					Jump @2130; //curOff = 1442
					if (func_59())
					{
						func_37(1, 0);
						func_45(0);
						func_56();
						func_15(25);
					}
					Jump @2130; //curOff = 1474
					if (func_48())
					{
						func_33(16384);
						Local_19.f_2 = 2;
						func_15(23);
					}
					Jump @2130; //curOff = 1502
					if (func_57(1))
					{
						func_37(1, 0);
						func_32(Local_19.f_1);
						func_47();
						func_15(22);
					}
					Jump @2130; //curOff = 1538
					if (func_60())
					{
						func_15(24);
					}
					Jump @2130; //curOff = 1554
					if (func_21(PLAYER::PLAYER_ID(), 64) && func_61())
					{
						func_62(32768);
						func_15(25);
					}
					Jump @2130; //curOff = 1593
					func_25(0);
					if (func_43())
					{
						func_15(30);
						return;
					}
					if (func_26(1))
					{
						func_27(0);
						return;
					}
					else
					{
						func_27(1);
					}
					if (func_30())
					{
						func_63(2048);
						func_27(0);
						func_15(26);
					}
					Jump @2130; //curOff = 1666
					if (func_34())
					{
						func_15(27);
					}
					Jump @2130; //curOff = 1682
					if (func_35())
					{
						func_15(28);
					}
					Jump @2130; //curOff = 1698
					func_40();
					func_64(2);
					NETWORK::_0x4B05B97BA46F419D(0);
					func_37(1, 1);
					func_15(29);
					Jump @2130; //curOff = 1728
					func_65();
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_19.f_6) && ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_19.f_6, false))
					{
						func_44();
						func_46();
						func_66();
						NETWORK::_0x442B4347B6EC36E8(PLAYER::PLAYER_PED_ID(), 1000, true);
						func_33(32768);
						func_15(32);
					}
					Jump @2130; //curOff = 1798
					if (func_67())
					{
						func_33(32768);
						func_58(1);
						func_68(1);
						func_66();
						func_15(31);
					}
					Jump @2130; //curOff = 1836
					if (func_69())
					{
						func_15(32);
					}
					Jump @2130; //curOff = 1852
					NETWORK::_0x4B05B97BA46F419D(1);
					func_37(0, 0);
					func_70(0);
					func_45(0);
					if (Global_1298166.f_1 == 4)
					{
						func_50(1);
						func_71(GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
						func_64(32);
						func_64(64);
					}
					else if (Global_1298166.f_1 == 2)
					{
						func_50(1);
					}
					else if (Global_1298166.f_1 == 3)
					{
						func_50(1);
						func_71(GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
						func_62(128);
					}
					func_15(33);
					Jump @2130; //curOff = 1984
					func_72();
					func_73();
					if (func_14(64))
					{
						if (Global_1298166.f_1 == 4)
						{
							func_50(1);
							func_71(GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
						}
						func_6(64);
					}
					func_64(2048);
					if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_19.f_85) || !GANG::_0x81FB74C83C2ED69F(Local_19.f_85))
					{
						func_15(34);
					}
					else if (func_74(128))
					{
						func_15(34);
					}
					else if (Local_19.f_3 != 0)
					{
						func_15(34);
					}
					else
					{
						func_15(0);
					}
				}
			}
			default:
				break;
	}
}

void func_5()
{
	int iVar0;

	func_72();
	func_25(1);
	func_58(1);
	func_68(1);
	if (Global_1298166.f_1 == 4)
	{
		if (func_74(32768))
		{
			func_50(1);
			func_71(GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
		}
	}
	else if (Global_1298166.f_1 == 3)
	{
		if (!func_14(8))
		{
			func_50(1);
			func_71(GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
		}
		else
		{
			func_6(8);
		}
	}
	func_70(0);
	func_64(2);
	func_64(32);
	func_64(8);
	func_64(64);
	func_64(2048);
	func_33(32768);
	func_45(0);
	if (func_14(128))
	{
		func_6(128);
	}
	if (func_74(1024))
	{
		if (STREAMING::_0xCF45DF50C7775F2A())
		{
			STREAMING::_0x5A8B01199C3E79C3();
		}
		func_75(1024);
	}
	if ((Local_19.f_4 == 1 || Local_19.f_4 == 2) || Local_19.f_4 == 4)
	{
		if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
		{
			CAM::DO_SCREEN_FADE_IN(250);
		}
	}
	func_76(&(Local_19.f_87));
	HUD::_TEXT_DATABASE_DELETE("MSMP");
	func_37(0, 0);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(Local_19.f_94[iVar0]))
		{
			VOLUME::_DELETE_VOLUME(Local_19.f_94[iVar0]);
		}
		iVar0++;
	}
	if (func_77(2, 8))
	{
		func_78(2, 8, 0);
	}
}

void func_6(int iParam0)
{
	func_79(&(Global_1298378.f_156), iParam0);
}

int func_7(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
		{
			return -1;
		}
	}
	return Global_1298536[iParam0 /*87*/].f_5.f_12;
}

bool func_8()
{
	if ((Local_19 == 9 || Local_19 == 18) || Local_19 == 20)
	{
		return true;
	}
	return false;
}

bool func_9(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_10(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_80(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 == func_81())
	{
		return func_80(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1296859.f_22[iParam1])
	{
		return func_80(&(Global_1100469[iParam1 /*53*/].f_4), iVar0, 5);
	}
	return false;
}

void func_11()
{
	if (func_82(888))
	{
		return;
	}
	if (func_21(PLAYER::PLAYER_ID(), 1))
	{
		return;
	}
	if (Local_19 != 8)
	{
		return;
	}
	if ((Local_19.f_85 != PLAYER::PLAYER_ID() || CAM::IS_SCREEN_FADED_OUT()) || CAM::IS_SCREEN_FADING_OUT())
	{
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1298378.f_128))
	{
		return;
	}
	if (func_16(Local_19.f_1) < (80f * 0.5f))
	{
		func_83(888, 0);
	}
}

void func_12()
{
	switch (Local_19.f_97)
	{
		case 0:
			if (func_77(2, 8))
			{
				func_84(1);
			}
			else if (func_85())
			{
			}
			else if (Global_1048584)
			{
			}
			else if (func_87(func_86()))
			{
			}
			else if (!func_88(joaat("GHOSTING_VOLUME")))
			{
			}
			else
			{
				func_89(2, 8);
				func_84(1);
				Jump @246; //curOff = 113
				if (!func_77(2, 8))
				{
					func_84(0);
				}
				else if (!func_88(joaat("UNGHOSTING_VOLUME")))
				{
					func_78(2, 8, 0);
					func_84(0);
				}
				else if (func_87(func_86()))
				{
					func_78(2, 8, 0);
					func_84(0);
				}
				else if (Global_1048584)
				{
					func_78(2, 8, 0);
					func_84(0);
				}
				else if (func_85())
				{
					func_78(2, 8, 0);
					func_84(0);
				}
				else
				{
					Jump @246; //curOff = 237
				}
			}
			default:
				break;
	}
}

void func_13(int iParam0)
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar5;
	bool bVar8;
	int iVar9;
	vector3 vVar10;

	iVar0 = Local_19.f_94[func_90(iParam0)];
	if (!VOLUME::_DOES_VOLUME_EXIST(iVar0))
	{
		return;
	}
	if (func_91(&(Local_19.f_91)))
	{
		if (!func_92(&(Local_19.f_91), 2f))
		{
			return;
		}
	}
	vVar2 = { VOLUME::_GET_VOLUME_COORDS(iVar0) };
	vVar5 = { VOLUME::_GET_VOLUME_SCALE(iVar0) };
	fVar1 = func_93(vVar5.x, vVar5.y);
	fVar1 = func_93(fVar1, vVar5.z);
	bVar8 = false;
	if (FIRE::_IS_EXPLOSION_IN_VOLUME(-1, iVar0))
	{
		bVar8 = true;
	}
	if (!bVar8)
	{
		iVar9 = FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vVar2, fVar1);
		if (iVar9 > 0)
		{
			if (FIRE::GET_CLOSEST_FIRE_POS(&vVar10, vVar2))
			{
				if (VOLUME::_IS_POSITION_INSIDE_VOLUME(iVar0, vVar10))
				{
					bVar8 = true;
				}
			}
		}
	}
	if (bVar8)
	{
		MISC::_0x2FCD528A397E5C88(iVar0, 589824);
		func_94(&(Local_19.f_91));
	}
}

bool func_14(int iParam0)
{
	return func_95(Global_1298378.f_156, iParam0);
}

void func_15(int iParam0)
{
	Local_19 = iParam0;
}

float func_16(int iParam0)
{
	return Global_1298378.f_6.f_17[iParam0];
}

void func_17(int* iParam0)
{
	switch (iParam0->f_3)
	{
		case 0:
			if (Local_19 <= 9)
			{
				if (func_97(func_96(), 1))
				{
					if (func_98())
					{
						iParam0->f_2 = joaat("MP006_P_WREATH01X");
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
						ENTITY::ATTACH_ENTITY_TO_ENTITY(*iParam0, iParam0->f_1, 0, 0.55f, 0f, 2f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
						iParam0->f_3 = 2;
					}
				}
				else if (func_99(Local_19.f_1))
				{
					iParam0->f_1 = func_101(func_100(Local_19.f_1, 0, 1), 0, 0);
				}
			}
			break;
		case 2:
			if ((Local_19 > 9 || !ENTITY::DOES_ENTITY_EXIST(iParam0->f_1)) || !ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				func_76(iParam0);
				iParam0->f_3 = 0;
			}
			break;
	}
}

void func_18()
{
	func_102();
	Local_19.f_85 = func_96();
	Local_19.f_86 = GANG::_0x901E0DC25080C8B9(Local_19.f_85);
	if (GANG::_0x4BE6C13A45CCA8EC(Local_19.f_86) == PLAYER::PLAYER_ID())
	{
		func_62(131072);
	}
	else if (Local_19.f_86 != Global_1296859.f_15)
	{
		func_62(262144);
	}
	func_103();
	func_64(2048);
}

bool func_19()
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

bool func_20()
{
	vector3 vVar0[4];
	vector3 vVar13[4];
	bool bVar26;
	int iVar27;

	if (!func_104(Local_19.f_1, &vVar0, &vVar13))
	{
		return false;
	}
	bVar26 = (GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()) && GANG::_0x149A2751AB66AC02(Global_1296859.f_15) > 1);
	iVar27 = 0;
	while (iVar27 < 4)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(Local_19.f_35[iVar27 /*4*/].f_2))
		{
			Local_19.f_35[iVar27 /*4*/].f_2 = VOLUME::_CREATE_VOLUME_CYLINDER(vVar0[iVar27 /*3*/], 0f, 0f, 0f, vVar13[iVar27 /*3*/]);
		}
		if (!func_105(Local_19.f_35[iVar27 /*4*/]))
		{
			Local_19.f_35[iVar27 /*4*/] = func_107(func_106(iVar27, 0), joaat("INPUT_CONTEXT_Y"), Local_19.f_35[iVar27 /*4*/].f_2, 3, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
		}
		if ((iVar27 == 0 || iVar27 == 1) && !func_105(Local_19.f_35[iVar27 /*4*/].f_1))
		{
			Local_19.f_35[iVar27 /*4*/].f_1 = func_107(func_106(iVar27, 1), joaat("INPUT_CONTEXT_B"), Local_19.f_35[iVar27 /*4*/].f_2, 3, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
			if (!bVar26)
			{
				func_108(Local_19.f_35[iVar27 /*4*/].f_1, 0, 0);
				func_109(Local_19.f_35[iVar27 /*4*/].f_1, 0, 0, 1);
			}
		}
		if (iVar27 == 0)
		{
			Local_19.f_35[iVar27 /*4*/].f_3 = -2097019783;
		}
		else if (iVar27 == 1)
		{
			Local_19.f_35[iVar27 /*4*/].f_3 = 302114997;
		}
		iVar27++;
	}
	func_62(256);
	return true;
}

bool func_21(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return func_95(Global_1298536[iVar0 /*87*/].f_86, iParam1);
	}
	return false;
}

bool func_22()
{
	int iVar0;

	if (func_110())
	{
		return true;
	}
	if (func_23(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return true;
	}
	if (!func_111())
	{
		return true;
	}
	if (func_87(func_112(0)))
	{
		return true;
	}
	if (func_113(0))
	{
		return true;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return true;
	}
	iVar0 = func_114(joaat("BOUNTY_PLAYER"), PLAYER::PLAYER_ID(), 0, 1);
	if (func_115(iVar0))
	{
		return true;
	}
	if (func_116())
	{
		return true;
	}
	return false;
}

int func_23(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_117(bParam1, bParam2, bParam3);
	}
	if (Global_1572887.f_13 != -1)
	{
		if (iParam0 == Global_1296859.f_10)
		{
			if (!Global_1296859.f_11)
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

void func_24(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == -1)
	{
		return;
	}
	if (func_74(iParam0))
	{
		return;
	}
	if (func_118() || func_119())
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (!VOLUME::_DOES_VOLUME_EXIST(Local_19.f_35[iVar0 /*4*/].f_2))
				{
				}
				else if (!func_105(Local_19.f_35[iVar0 /*4*/]))
				{
				}
				else if (!func_120(Global_34, Local_19.f_35[iVar0 /*4*/].f_2, 1, 0))
				{
				}
				else if (func_121(MISC::_CREATE_VAR_STRING(2, "MS_WARN_WANTED_NO_ENTRY"), 10000, 0, 0, 0, 1) != 0)
				{
					func_62(iParam0);
				}
				iVar0++;
			}
			break;
	}
}

void func_25(bool bParam0)
{
	bool bVar0;
	int iVar1;

	if (bParam0)
	{
		if (func_74(64))
		{
			SCRIPTS::_0xF9E951A1E5517C06();
			func_75(64);
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (func_105(Local_19.f_35[iVar1 /*4*/]) && func_122(Local_19.f_35[iVar1 /*4*/], 1))
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
			if (!func_74(64))
			{
				SCRIPTS::_0x76CBCD9EADC00955();
				func_62(64);
			}
		}
		else if (func_74(64))
		{
			SCRIPTS::_0xF9E951A1E5517C06();
			func_75(64);
		}
	}
}

bool func_26(bool bParam0)
{
	int iVar0;

	if (bParam0)
	{
		if (Global_1298000.f_42)
		{
			return true;
		}
		return false;
	}
	if (Global_1298378.f_131.f_4)
	{
		return true;
	}
	if (func_123(512))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34) || ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		return true;
	}
	if (PED::_0xB655DB7582AEC805(Global_34))
	{
		return true;
	}
	if (PED::IS_PED_ON_MOUNT(Global_34))
	{
		return true;
	}
	if (PED::IS_PED_ON_VEHICLE(Global_34, false) || PED::IS_PED_IN_ANY_VEHICLE(Global_34, false))
	{
		return true;
	}
	if (PED::IS_PED_RAGDOLL(Global_34))
	{
		return true;
	}
	if (PED::_IS_PED_LASSOED(Global_34))
	{
		return true;
	}
	if (PED::_IS_PED_HOGTIED(Global_34) || PED::_IS_PED_BEING_HOGTIED(Global_34))
	{
		return true;
	}
	if (PED::_IS_PED_HOGTYING(Global_34))
	{
		return true;
	}
	if (PED::_IS_PED_CARRYING(Global_34))
	{
		return true;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(Global_34))
	{
		return true;
	}
	if (PED::IS_PED_CLIMBING(Global_34))
	{
		return true;
	}
	if (TASK::_0x038B1F1674F0E242(Global_34))
	{
		return true;
	}
	if (func_124())
	{
		return true;
	}
	if (CAM::IS_AIM_CAM_ACTIVE())
	{
		return true;
	}
	iVar0 = PED::_0x693126B5D0457D0D(Global_34);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return true;
	}
	if (func_22())
	{
		return true;
	}
	return false;
}

void func_27(bool bParam0)
{
	int iVar0;

	if (bParam0)
	{
		if (func_74(256))
		{
			return;
		}
	}
	else if (!func_74(256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_105(Local_19.f_35[iVar0 /*4*/]))
		{
			func_108(Local_19.f_35[iVar0 /*4*/], bParam0, 0);
			func_109(Local_19.f_35[iVar0 /*4*/], bParam0, 0, 1);
		}
		if (func_105(Local_19.f_35[iVar0 /*4*/].f_1))
		{
			func_108(Local_19.f_35[iVar0 /*4*/].f_1, bParam0, 0);
			func_109(Local_19.f_35[iVar0 /*4*/].f_1, bParam0, 0, 1);
		}
		iVar0++;
	}
	if (bParam0)
	{
		func_62(256);
	}
	else
	{
		func_75(256);
	}
}

void func_28()
{
	bool bVar0;
	int iVar1;
	struct<7> Var2[7];
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;

	if (!func_74(256))
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	if (GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		iVar1 = GANG::_0xD1BF325C8252A982(Global_1296859.f_15, &Var2);
		if (iVar1 > 1)
		{
			iVar53 = iVar1;
			iVar52 = 0;
			while (iVar52 <= (iVar1 - 1))
			{
				if (func_125(Var2[iVar52 /*7*/]))
				{
					iVar54 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var2[iVar52 /*7*/]));
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar54))
					{
						if (func_21(iVar54, 1))
						{
							iVar53 = (iVar53 - 1);
						}
						else if (func_126(1048576, iVar54))
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
							if (func_105(Local_19.f_35[iVar55 /*4*/].f_1))
							{
								if (bVar0)
								{
									if (!func_127(Local_19.f_35[iVar55 /*4*/].f_1, 0))
									{
										func_109(Local_19.f_35[iVar55 /*4*/].f_1, 1, 0, 1);
										func_108(Local_19.f_35[iVar55 /*4*/].f_1, 1, 1);
									}
								}
								else if (func_127(Local_19.f_35[iVar55 /*4*/].f_1, 0))
								{
									func_109(Local_19.f_35[iVar55 /*4*/].f_1, 0, 0, 1);
									func_108(Local_19.f_35[iVar55 /*4*/].f_1, 0, 1);
								}
							}
							iVar55++;
						}
					}
				}
			}
		}
	}
}

void func_29()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 == 0 || iVar0 == 1)
		{
			if (func_127(Local_19.f_35[iVar0 /*4*/], 0))
			{
				iVar1 = func_96();
				if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
				{
					HUD::_0x8B55B324A9123F6B(Local_19.f_35[iVar0 /*4*/].f_3, Local_19.f_35[iVar0 /*4*/].f_2, MISC::_CREATE_VAR_STRING(10, "MS_ENTER_PROMPT_GROUP", func_129(PLAYER::GET_PLAYER_NAME(iVar1), func_128(iVar1, 1, -1, 0))), 3, 1, 0);
					HUD::_UIPROMPT_SET_GROUP(func_130(Local_19.f_35[iVar0 /*4*/]), Local_19.f_35[iVar0 /*4*/].f_3, 0);
					if (func_127(Local_19.f_35[iVar0 /*4*/].f_1, 0))
					{
						HUD::_UIPROMPT_SET_GROUP(func_130(Local_19.f_35[iVar0 /*4*/].f_1), Local_19.f_35[iVar0 /*4*/].f_3, 0);
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_30()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_105(Local_19.f_35[iVar0 /*4*/]) && func_131(Local_19.f_35[iVar0 /*4*/], 1))
		{
			Local_19.f_2 = func_132(iVar0);
			func_133(Local_19.f_2);
			if (iVar0 == 0 || iVar0 == 1)
			{
				func_62(8);
			}
			else
			{
				func_62(32);
			}
			return true;
		}
		if (func_105(Local_19.f_35[iVar0 /*4*/].f_1) && func_131(Local_19.f_35[iVar0 /*4*/].f_1, 1))
		{
			Local_19.f_2 = func_132(iVar0);
			func_133(Local_19.f_2);
			func_62(16);
			func_63(2);
			func_134();
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_31()
{
	func_135();
	func_136(0);
	if (func_137())
	{
		func_138();
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
	func_45(1);
}

void func_32(var uParam0)
{
	Global_1298378.f_131 = uParam0;
	func_33(16);
	func_63(1);
}

void func_33(int iParam0)
{
	func_139(&(Global_1298378.f_156), iParam0);
}

bool func_34()
{
	float fVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;

	if ((!ENTITY::DOES_ENTITY_EXIST(Global_34) || ENTITY::IS_ENTITY_DEAD(Global_34)) || func_140(255))
	{
		return false;
	}
	if (!func_74(1024) && STREAMING::_0xCF45DF50C7775F2A())
	{
		STREAMING::_0x5A8B01199C3E79C3();
		return false;
	}
	if (Local_19.f_2 == -1)
	{
		return true;
	}
	if (Local_19.f_2 == 2 || Local_19.f_2 == 3)
	{
		fVar0 = 40f;
	}
	else
	{
		fVar0 = 200f;
	}
	vVar1 = { func_141(Local_19.f_29[Local_19.f_2]) };
	if (!func_74(1024))
	{
		if (!STREAMING::_0xCF45DF50C7775F2A())
		{
			Local_19.f_11 = MISC::_GET_SYSTEM_TIME();
			STREAMING::_0x387AD749E3B69B70(Local_19.f_13[Local_19.f_2 /*3*/], vVar1, fVar0, 0);
			func_62(1024);
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
		iVar5 = Global_1901947.f_789.f_11;
		if (Local_19.f_11 == 0)
		{
			Local_19.f_11 = MISC::_GET_SYSTEM_TIME();
		}
		else if ((MISC::_GET_SYSTEM_TIME() - Local_19.f_11) > iVar5)
		{
			iVar4 = 1;
		}
	}
	return iVar4;
}

bool func_35()
{
	char* sVar0;
	char* sVar1;
	bool bVar2;

	sVar0 = func_142();
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return true;
	}
	sVar1 = func_144(func_143());
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return true;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_19.f_6))
	{
		Local_19.f_6 = ANIMSCENE::_CREATE_ANIM_SCENE(sVar0, 0, sVar1, false, true);
	}
	bVar2 = true;
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_19.f_6, true, false))
	{
		bVar2 = false;
	}
	if (!bVar2 && !ANIMSCENE::_IS_ANIM_SCENE_LOADING(Local_19.f_6, true))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(Local_19.f_6);
		return false;
	}
	if (bVar2)
	{
		return true;
	}
	return false;
}

void func_36()
{
	struct<7> Var0[7];
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	bool bVar54;

	if (Local_19.f_9 <= 0)
	{
		if (func_74(16) || Global_1298166.f_1 == 2)
		{
			Local_19.f_9 = GANG::_0x149A2751AB66AC02(Global_1296859.f_15);
			GANG::_0xD1BF325C8252A982(Global_1296859.f_15, &Var0);
			iVar53 = -1;
			iVar52 = 0;
			while (iVar52 <= (Local_19.f_9 - 1))
			{
				iVar50 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var0[iVar52 /*7*/]));
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar50))
				{
					bVar54 = GANG::_0x424B17A7DC5C90BC(iVar50);
					if (bVar54 || func_21(iVar50, 1) == 0)
					{
						if (func_21(iVar50, 512))
						{
							Local_19.f_52[iVar52 /*4*/] = iVar50;
							if (bVar54)
							{
								iVar53 = iVar52;
								iVar51 = iVar50;
							}
							Local_19.f_52[iVar52 /*4*/].f_3 = 1;
						}
						else
						{
							Local_19.f_52[iVar52 /*4*/].f_3 = 0;
						}
					}
					else
					{
						Local_19.f_52[iVar52 /*4*/].f_3 = 0;
					}
				}
				iVar52++;
			}
			if (iVar53 != -1)
			{
				Local_19.f_52[iVar53 /*4*/] = Local_19.f_52[0 /*4*/];
				Local_19.f_52[iVar53 /*4*/].f_3 = Local_19.f_52[0 /*4*/].f_3;
				Local_19.f_52[0 /*4*/] = iVar51;
				Local_19.f_52[0 /*4*/].f_3 = 1;
			}
		}
		else if (func_74(8))
		{
			Local_19.f_9 = 1;
			Local_19.f_52[0 /*4*/] = PLAYER::PLAYER_ID();
		}
	}
}

int func_37(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (bParam0 || bParam1)
	{
		if (bParam1)
		{
			if (func_14(2))
			{
				func_6(2);
			}
			if (!func_21(PLAYER::PLAYER_ID(), 256))
			{
				func_63(256);
			}
			if (!func_14(4))
			{
				iVar0 = func_145(Global_1298166.f_200, 1);
				if (iVar0 == -1)
				{
					return 0;
				}
				func_33(4);
			}
		}
		else
		{
			if (func_14(4))
			{
				func_6(4);
			}
			if (func_21(PLAYER::PLAYER_ID(), 256))
			{
				func_64(256);
			}
			if (!func_14(2))
			{
				iVar0 = func_145(Global_1298166.f_200, 1);
				if (iVar0 == -1)
				{
					return 0;
				}
				func_33(2);
			}
		}
		iVar1 = iVar0;
		Global_1298536[Global_1296859 /*87*/].f_3 = iVar0;
		NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(1, 1, iVar1);
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, false, iVar1, false);
	}
	else if (func_14(2) || func_14(4))
	{
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, 32, true);
		Global_1298536[Global_1296859 /*87*/].f_3 = -1;
		func_6(2);
		func_6(4);
		if (func_21(PLAYER::PLAYER_ID(), 256))
		{
			func_64(256);
		}
	}
	return 1;
}

bool func_38()
{
	int iVar0;

	if (Local_19.f_8 < 7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_19.f_52[Local_19.f_8 /*4*/].f_1))
		{
			Local_19.f_8++;
		}
		else if (Local_19.f_52[Local_19.f_8 /*4*/].f_3 == 0)
		{
			Local_19.f_8++;
		}
		else if (PLAYER::PLAYER_ID() == Local_19.f_52[Local_19.f_8 /*4*/])
		{
			Local_19.f_52[Local_19.f_8 /*4*/].f_1 = Global_34;
			Local_19.f_52[Local_19.f_8 /*4*/].f_2 = PED::IS_PED_MALE(Global_34);
			Local_19.f_8++;
			return false;
		}
		else
		{
			iVar0 = PLAYER::GET_PLAYER_PED(Local_19.f_52[Local_19.f_8 /*4*/]);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Local_19.f_8++;
				return false;
			}
			Local_19.f_52[Local_19.f_8 /*4*/].f_1 = PED::CLONE_PED(iVar0, 0f, true, true);
			if (ENTITY::DOES_ENTITY_EXIST(Local_19.f_52[Local_19.f_8 /*4*/].f_1))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_19.f_52[Local_19.f_8 /*4*/].f_1, false);
				ENTITY::SET_ENTITY_COLLISION(Local_19.f_52[Local_19.f_8 /*4*/].f_1, false, false);
				Local_19.f_52[Local_19.f_8 /*4*/].f_2 = PED::IS_PED_MALE(iVar0);
				Local_19.f_8++;
				return false;
			}
		}
	}
	return Local_19.f_8 >= Local_19.f_9;
}

bool func_39()
{
	int iVar0;

	if (PED::_IS_PED_CARRYING(Global_34))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_34);
		if (!func_146(Global_34))
		{
			if (func_147(iVar0))
			{
				ENTITY::_DELETE_CARRIABLE(&iVar0);
			}
			else
			{
				TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_34, iVar0, 0f, 0f, 0f, 2f, 9);
			}
		}
		return false;
	}
	return true;
}

void func_40()
{
	switch (Local_19.f_2)
	{
		case 0:
		case 1:
			Local_19.f_83 = func_101(func_100(Local_19.f_1, 2, 0), 0, 0);
			Local_19.f_84 = func_101(func_100(Local_19.f_1, 3, 0), 0, 0);
			break;
		default:
			Local_19.f_83 = func_101(func_100(Local_19.f_1, 0, 1), 0, 0);
			Local_19.f_84 = func_101(func_100(Local_19.f_1, 1, 1), 0, 0);
			break;
	}
}

void func_41()
{
	int iVar0;

	if (FIRE::IS_ENTITY_ON_FIRE(Global_34))
	{
		FIRE::STOP_ENTITY_FIRE(Global_34, 0);
	}
	iVar0 = PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::PLAYER_ID());
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_62(65536);
	}
	iVar0 = PED::_0x693126B5D0457D0D(Global_34);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		func_62(65536);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_34, false, true);
	}
	if (PED::IS_PED_ON_MOUNT(Global_34))
	{
		func_62(65536);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_34, true, true);
	}
	if (PED::_IS_PED_HOGTIED(Global_34) || PED::_IS_PED_BEING_HOGTIED(Global_34))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_34, false, true);
	}
}

void func_42()
{
	int iVar0;
	float fVar1;

	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_19.f_6))
	{
		func_15(34);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34) || func_140(255))
	{
		return;
	}
	if (!func_39())
	{
		return;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_34, true))
	{
		PED::_0xE0B61ED8BB37712F(Global_34);
		return;
	}
	if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
	{
		PED::_REMOVE_PED_FROM_MOUNT(PLAYER::PLAYER_PED_ID(), true, false);
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_19.f_6, false) && !func_74(1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_19.f_6, func_148(), func_149(), 2);
		ANIMSCENE::SET_ANIM_SCENE_INT(Local_19.f_6, "CameraIndex", func_150(), false);
		if (func_74(8) && ENTITY::DOES_ENTITY_EXIST(Global_34))
		{
			if (PED::IS_PED_MALE(Global_34))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_19.f_6, "MP_MALE_01", Global_34, 0);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_19.f_6, "MP_FEMALE_01", Global_34, 0);
			}
		}
		if (Local_19.f_2 == 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_19.f_83))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_19.f_6, "p_doorsgl01x_FRONT", Local_19.f_83, 0);
			}
		}
		else if (Local_19.f_2 == 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_19.f_84))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_19.f_6, "p_doorsgl01x_SIDE", Local_19.f_84, 0);
			}
		}
		if (!func_74(8))
		{
			iVar0 = 0;
			while (iVar0 <= (Local_19.f_9 - 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_19.f_52[iVar0 /*4*/].f_1))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_19.f_52[iVar0 /*4*/].f_1, true);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_19.f_6, func_151(iVar0, Local_19.f_52[iVar0 /*4*/].f_2), Local_19.f_52[iVar0 /*4*/].f_1, 0);
				}
				iVar0++;
			}
		}
		ANIMSCENE::START_ANIM_SCENE(Local_19.f_6);
		func_62(1);
		func_75(16);
		func_75(8);
		func_152(1);
		return;
	}
	fVar1 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_19.f_6);
	if (fVar1 > 0.9f)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_34))
		{
			func_153(1);
		}
	}
	else if (fVar1 > 0.85f)
	{
		if (!func_74(4096))
		{
			func_62(4096);
			func_58(0);
		}
	}
	switch (Local_19.f_4)
	{
		case 1:
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(0);
			}
			func_152(2);
			break;
		case 2:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_19.f_6) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_19.f_6, false))
			{
			}
			else
			{
				if (!func_14(33554432))
				{
					CAM::DO_SCREEN_FADE_IN(250);
				}
				func_152(3);
				Jump @716; //curOff = 623
				if (CAM::IS_GAMEPLAY_CAM_RENDERING())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					Local_19.f_11 = MISC::_GET_SYSTEM_TIME();
					func_152(4);
				}
				Jump @716; //curOff = 651
				if (STREAMING::_0x0909F71B5C070797() || (MISC::_GET_SYSTEM_TIME() - Local_19.f_11) > Global_1901947.f_789.f_11)
				{
					if (!func_14(33554432))
					{
						CAM::DO_SCREEN_FADE_IN(250);
					}
					func_152(5);
				}
			}
			default:
				break;
	}
}

bool func_43()
{
	int iVar0;
	int iVar1;

	if (Global_1298378.f_131.f_3)
	{
		return true;
	}
	if (func_123(512))
	{
		Local_19.f_3 = 1;
		return true;
	}
	iVar0 = Local_19.f_85;
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		Local_19.f_3 = 1;
		return true;
	}
	if (Global_1296859.f_15 != Local_19.f_86 && !func_74(262144))
	{
		if (func_74(131072) && GANG::_0x4BE6C13A45CCA8EC(Global_1296859.f_15) == PLAYER::PLAYER_ID())
		{
			func_154();
		}
		else
		{
			return true;
		}
	}
	if (GANG::_0x901E0DC25080C8B9(iVar0) != Global_1296859.f_15)
	{
		if (func_7(iVar0, 1) != Local_19.f_1)
		{
			return true;
		}
		if (func_145(iVar0, 1) != Global_1298536[Global_1296859 /*87*/].f_3)
		{
			return true;
		}
	}
	if ((iVar0 != PLAYER::PLAYER_ID() && GANG::_0x901E0DC25080C8B9(iVar0) != Global_1296859.f_15) && (Global_1298166.f_1 == 2 || Global_1298166.f_1 == 1))
	{
		Local_19.f_3 = 3;
		return true;
	}
	iVar1 = func_7(Global_1298166.f_200, 1);
	if (Local_19.f_1 != iVar1)
	{
		Local_19.f_3 = 2;
		return true;
	}
	if (func_155())
	{
		Local_19.f_3 = 4;
		return true;
	}
	return false;
}

void func_44()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_19.f_52[iVar0 /*4*/].f_1) && Local_19.f_52[iVar0 /*4*/].f_1 != Global_34)
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_19.f_6, func_151(iVar0, 1), Local_19.f_52[iVar0 /*4*/].f_1);
			PED::DELETE_PED(&(Local_19.f_52[iVar0 /*4*/].f_1));
		}
		iVar0++;
	}
	Local_19.f_83 = 0;
	Local_19.f_84 = 0;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_19.f_6))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_19.f_6);
	}
	if (func_74(1024))
	{
		if (STREAMING::_0xCF45DF50C7775F2A())
		{
			STREAMING::_0x5A8B01199C3E79C3();
		}
		func_75(1024);
	}
	Local_19.f_11 = 0;
	func_75(1);
	Local_19.f_6 = 0;
}

void func_45(bool bParam0)
{
	if (bParam0)
	{
		if (!func_74(16384))
		{
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
			func_62(16384);
		}
	}
	else if (func_74(16384))
	{
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
		func_75(16384);
	}
}

void func_46()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_156(func_100(Local_19.f_1, iVar0, 0), 0f, 1);
		iVar0++;
	}
}

void func_47()
{
	func_157();
	func_158();
}

bool func_48()
{
	if (Global_1298378.f_29.f_2 != Local_19.f_1)
	{
		return false;
	}
	if (Global_1298378.f_29.f_3 != 2)
	{
		return false;
	}
	return true;
}

bool func_49()
{
	return (Global_1298166.f_1 != 1 && !func_22());
}

void func_50(int iParam0)
{
	Global_1298166.f_1 = iParam0;
}

bool func_51()
{
	int iVar0;
	var uVar1;
	int iVar8;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_34) || ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		return false;
	}
	if (Local_19.f_81 == 0)
	{
		if (func_159())
		{
			func_160(1);
			return false;
		}
		else
		{
			iVar0 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
			if (GANG::_0xD6F6ACF4392187FB(iVar0))
			{
				if (GANG::_0xCE88A261DCBBA0D9(iVar0, &uVar1))
				{
					iVar8 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&uVar1);
					if (PED::_IS_PED_CARRYING(Global_34))
					{
						Local_19.f_81 = func_121(MISC::_CREATE_VAR_STRING(10, "MS_WARN_MEMBER_JOIN_CARRY", func_129(PLAYER::GET_PLAYER_NAME(iVar8), func_128(iVar8, 1, -1, 0))), 10000, 0, 0, 0, 1);
					}
					else
					{
						Local_19.f_81 = func_121(MISC::_CREATE_VAR_STRING(10, "MS_WARN_MEMBER_JOIN", func_129(PLAYER::GET_PLAYER_NAME(iVar8), func_128(iVar8, 1, -1, 0))), 10000, 0, 0, 0, 1);
					}
				}
			}
		}
	}
	if (Local_19.f_10 == 0)
	{
		Local_19.f_10 = MISC::GET_GAME_TIMER();
	}
	else if ((MISC::GET_GAME_TIMER() - Local_19.f_10) >= 11000)
	{
		return true;
	}
	return false;
}

void func_52()
{
	int iVar0;

	iVar0 = Global_1298166.f_200;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		Local_19.f_2 = 2;
		return;
	}
	Local_19.f_2 = Global_1298536[iVar0 /*87*/].f_5.f_13;
}

void func_53()
{
	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < 50)
	{
		Local_19.f_2 = 2;
	}
	else
	{
		Local_19.f_2 = 3;
	}
	func_62(8);
}

bool func_54()
{
	float fVar0;

	if (ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		fVar0 = BUILTIN::VDIST(Global_35, func_161(Local_19.f_1));
		if (fVar0 < 200f)
		{
			return true;
		}
	}
	return false;
}

bool func_55()
{
	if (Local_19.f_12 == 0)
	{
		Local_19.f_12 = MISC::_GET_SYSTEM_TIME();
	}
	else if ((MISC::_GET_SYSTEM_TIME() - Local_19.f_12) > 10000)
	{
		return true;
	}
	return false;
}

void func_56()
{
	int iVar0;

	if (PED::_IS_PED_CARRYING(Global_34))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_34);
		if (func_147(iVar0))
		{
			ENTITY::_DELETE_CARRIABLE(&iVar0);
		}
	}
}

bool func_57(bool bParam0)
{
	if ((func_140(255) || !ENTITY::DOES_ENTITY_EXIST(Global_34)) || ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		return false;
	}
	if (!func_39())
	{
		return false;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			PED::_0xE0B61ED8BB37712F(PLAYER::PLAYER_PED_ID());
		}
		return false;
	}
	if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
	{
		PED::_REMOVE_PED_FROM_MOUNT(PLAYER::PLAYER_PED_ID(), true, false);
		return false;
	}
	if (Local_19.f_2 == -1)
	{
		func_162(Local_19.f_13[2 /*3*/], Local_19.f_29[2]);
	}
	else
	{
		func_162(Local_19.f_13[Local_19.f_2 /*3*/], Local_19.f_29[Local_19.f_2]);
	}
	if (bParam0)
	{
		func_163(1);
		func_164(1);
	}
	func_165(1);
	func_166(141);
	func_167(1, 1);
	return true;
}

void func_58(bool bParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		if (bParam0)
		{
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_34, 7, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_34, 8, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_34, 9, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_34, 10, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_34, 16, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_34, 17, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_34, 18, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_34, 19, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_34, 20, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_34, 21, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_34, 22, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_34, 23, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_34, 25, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_34, 27, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_34, 1, bParam0);
		}
		else
		{
			WEAPON::_0x94A3C1B804D291EC(Global_34, 0, 0, 0, 1);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_34, 7, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_34, 8, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_34, 9, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_34, 10, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_34, 16, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_34, 17, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_34, 18, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_34, 19, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_34, 20, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_34, 21, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_34, 22, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_34, 23, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_34, 25, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_34, 27, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_34, 1, bParam0);
		}
	}
}

bool func_59()
{
	if ((func_140(255) || !ENTITY::DOES_ENTITY_EXIST(Global_34)) || ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		return false;
	}
	return true;
}

bool func_60()
{
	if (func_140(255))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34) || ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		return false;
	}
	if (!func_74(512))
	{
		if (ENTITY::IS_ENTITY_VISIBLE(Global_34))
		{
			ENTITY::SET_ENTITY_VISIBLE(Global_34, false);
		}
		func_68(0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
		func_37(1, 1);
		func_62(512);
		return true;
	}
	return false;
}

bool func_61()
{
	if (func_140(255))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34) || ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		return false;
	}
	if (func_74(512))
	{
		func_58(0);
		func_68(1);
		func_168(1, 2);
		func_37(1, 0);
		func_75(512);
	}
	return true;
}

void func_62(int iParam0)
{
	func_139(&(Local_19.f_5), iParam0);
}

void func_63(int iParam0)
{
	func_139(&(Global_1298536[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*87*/].f_86), iParam0);
}

void func_64(int iParam0)
{
	func_79(&(Global_1298536[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*87*/].f_86), iParam0);
}

void func_65()
{
	float fVar0;

	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_19.f_6))
	{
		func_15(34);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34) || func_140(255))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_19.f_6, false) && !func_74(1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_19.f_6, func_148(), func_149(), 2);
		if (ENTITY::DOES_ENTITY_EXIST(Global_34))
		{
			if (PED::IS_PED_MALE(Global_34))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_19.f_6, "MP_MALE_01", Global_34, 0);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_19.f_6, "MP_FEMALE_01", Global_34, 0);
			}
		}
		if (Local_19.f_2 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_19.f_83))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_19.f_6, "p_doorsgl01x_FRONT", Local_19.f_83, 0);
			}
		}
		else if (Local_19.f_2 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_19.f_84))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_19.f_6, "p_doorsgl01x_SIDE", Local_19.f_84, 0);
			}
		}
		if (TASK::_0xEC7E480FF8BD0BED(Global_34))
		{
			TASK::CLEAR_PED_SECONDARY_TASK(Global_34);
		}
		TASK::_0xFDECCA06E8B81346(Global_34);
		ANIMSCENE::START_ANIM_SCENE(Local_19.f_6);
		func_62(1);
		func_75(32);
		return;
	}
	fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_19.f_6);
	if (fVar0 > 0.9f)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_34))
		{
			func_153(0);
		}
	}
	else if (fVar0 > 0.85f)
	{
		if (!func_74(2048))
		{
			func_58(1);
			func_68(1);
			func_62(2048);
		}
	}
}

void func_66()
{
	if (func_74(65536))
	{
		func_169(0, 1);
		func_75(65536);
	}
}

bool func_67()
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	var uVar5;

	if ((func_140(255) || !ENTITY::DOES_ENTITY_EXIST(Global_34)) || ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		return false;
	}
	vVar0 = { func_170(Local_19.f_1, 0) };
	fVar3 = func_171(Local_19.f_1, 0);
	fVar4 = Global_1901947.f_789.f_8;
	uVar5 = Global_1901947.f_789.f_9;
	func_165(1);
	func_166(141);
	func_172(vVar0, fVar3, uVar5, fVar4, 1, 1, 1);
	return true;
}

void func_68(bool bParam0)
{
	if (!bParam0)
	{
		WEAPON::_0x94A3C1B804D291EC(Global_34, 0, 0, 0, 1);
	}
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_34, 2, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_34, 3, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_34, 4, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_34, 5, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_34, 6, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_34, 11, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_34, 12, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_34, 13, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_34, 24, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_34, 14, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_34, 15, bParam0);
}

bool func_69()
{
	char* sVar0;

	if ((func_140(255) || !ENTITY::DOES_ENTITY_EXIST(Global_34)) || ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		return false;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return false;
	}
	switch (Local_19.f_3)
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
	Local_19.f_82 = func_121(sVar0, 10000, 0, 0, 0, 1);
	return true;
}

void func_70(bool bParam0)
{
	func_6(16);
	func_64(1);
	if (Global_1298378.f_157 > -1)
	{
		func_173(Global_1298378.f_157);
		Global_1298378.f_157 = -1;
	}
	if (bParam0)
	{
		func_33(64);
	}
}

void func_71(int iParam0)
{
	Global_1298166.f_200 = iParam0;
}

void func_72()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(Local_19.f_35[iVar0 /*4*/].f_2))
		{
			VOLUME::_DELETE_VOLUME(Local_19.f_35[iVar0 /*4*/].f_2);
		}
		if (func_105(Local_19.f_35[iVar0 /*4*/]))
		{
			func_174(&(Local_19.f_35[iVar0 /*4*/]), 1, 1);
		}
		if (func_105(Local_19.f_35[iVar0 /*4*/].f_1))
		{
			func_174(&(Local_19.f_35[iVar0 /*4*/].f_1), 1, 1);
		}
		iVar0++;
	}
}

void func_73()
{
	Local_19.f_2 = -1;
	Local_19.f_5 = 0;
	Local_19.f_11 = 0;
	Local_19.f_12 = 0;
	Local_19.f_6 = 0;
	Local_19.f_8 = 0;
	Local_19.f_9 = 0;
	Local_19.f_10 = 0;
	Local_19.f_81 = 0;
	Local_19.f_4 = 0;
}

bool func_74(int iParam0)
{
	return func_95(Local_19.f_5, iParam0);
}

void func_75(int iParam0)
{
	func_79(&(Local_19.f_5), iParam0);
}

void func_76(int* iParam0)
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

bool func_77(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1071686.f_22538.f_385[iParam0 /*11*/], iParam1);
}

void func_78(int iParam0, int iParam1, bool bParam2)
{
	if (func_77(iParam0, iParam1) && (!bParam2 || Global_1071686.f_22538.f_385[iParam0 /*11*/].f_1[iParam1] == SCRIPTS::GET_ID_OF_THIS_THREAD()))
	{
		MISC::CLEAR_BIT(&(Global_1071686.f_22538.f_385[iParam0 /*11*/]), iParam1);
		Global_1071686.f_22538.f_385[iParam0 /*11*/].f_1[iParam1] = 0;
		func_175();
	}
}

void func_79(var uParam0, int iParam1)
{
	func_176(uParam0, iParam1);
}

bool func_80(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_81()
{
	return Global_1102219.f_3672;
}

bool func_82(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_17411.f_2565[iVar1], iVar2);
}

void func_83(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_177(iParam0, &iVar0, &iVar1);
	if (!func_178(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_179(iVar0, iVar1);
}

void func_84(int iParam0)
{
	Local_19.f_97 = iParam0;
}

bool func_85()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
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

struct<2> func_86()
{
	if (Global_1196205.f_129 <= 0)
	{
		return func_112(0);
	}
	if (Global_1196205.f_130 < 0 || Global_1196205.f_131 == 0)
	{
		return func_112(0);
	}
	return Global_1196205[Global_1196205.f_130 /*4*/].f_1;
}

bool func_87(struct<2> Param0)
{
	if (!func_180(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_181(Param0))
	{
		return false;
	}
	return true;
}

bool func_88(int iParam0)
{
	return func_120(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), Local_19.f_94[func_90(iParam0)], 1, 0);
}

void func_89(int iParam0, int iParam1)
{
	if (!func_77(iParam0, iParam1))
	{
		MISC::SET_BIT(&(Global_1071686.f_22538.f_385[iParam0 /*11*/]), iParam1);
		Global_1071686.f_22538.f_385[iParam0 /*11*/].f_1[iParam1] = SCRIPTS::GET_ID_OF_THIS_THREAD();
		func_175();
	}
}

int func_90(int iParam0)
{
	switch (iParam0)
	{
		case joaat("GHOSTING_VOLUME"):
			return 0;
		case joaat("UNGHOSTING_VOLUME"):
			return 1;
		default:
			break;
	}
	return -1;
}

bool func_91(var uParam0)
{
	return func_182(*uParam0, 1);
}

bool func_92(var uParam0, float fParam1)
{
	if (func_183(uParam0, fParam1))
	{
		func_184(uParam0);
		return true;
	}
	return false;
}

float func_93(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_94(var uParam0)
{
	func_185(uParam0, 0f);
}

bool func_95(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_96()
{
	return Global_1298166.f_200;
}

bool func_97(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			return false;
		}
	}
	iVar0 = iParam0;
	if (!func_186(Global_1298536[iVar0 /*87*/]))
	{
		return false;
	}
	if (Global_1298536[iVar0 /*87*/].f_5.f_12 == -1)
	{
		return false;
	}
	return true;
}

bool func_98()
{
	if (!func_187())
	{
		return false;
	}
	return func_95(Global_1901947.f_44.f_5, 8);
}

bool func_99(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 5);
}

int func_100(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!bParam2)
	{
		iVar0 = Global_1298378.f_78[iParam0 /*6*/][iParam1];
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

int func_101(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = func_188(iParam0, iParam1);
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

void func_102()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Local_19.f_13[iVar0 /*3*/] = { func_170(Local_19.f_1, iVar0) };
		Local_19.f_29[iVar0] = func_171(Local_19.f_1, iVar0);
		iVar0++;
	}
}

void func_103()
{
	struct<4> Var0;
	int iVar5;
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

	if (Global_1298000.f_165)
	{
		func_84(2);
	}
	Var0 = Global_1071686.f_28448[50 /*4*/].f_3;
	Var0.f_2 = -2002424295;
	Var0.f_3 = func_189(Local_19.f_1);
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		return;
	}
	uVar6 = Var0.f_1;
	iVar8 = 0;
	while (iVar8 <= 1)
	{
		Var0.f_1 = uVar6;
		iVar5 = func_190(iVar8);
		StringCopy(&cVar22, "volume#", 64);
		StringIntConCat(&cVar22, iVar8, 64);
		Var0.f_2 = -1627797674;
		Var0.f_3 = iVar5;
		if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			return;
		}
		uVar7 = Var0.f_1;
		Var0.f_2 = -85904298;
		iVar10 = DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
		Local_19.f_94[iVar8] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME(&cVar22);
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
				VOLUME::_0x12FCAA23F2320422(Local_19.f_94[iVar8], uVar21, vVar12, vVar15, vVar18);
			}
			iVar9++;
		}
		iVar8++;
	}
}

bool func_104(int iParam0, var uParam1, var uParam2)
{
	struct<5> Var0;
	struct<5> Var5;
	struct<5> Var10;
	int iVar15;

	Var0 = Global_1298378.f_1;
	Var0.f_2 = -709674112;
	Var0.f_3 = func_189(iParam0);
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		return false;
	}
	iVar15 = 0;
	while (iVar15 < 4)
	{
		Var5 = { Var0 };
		Var5.f_2 = -1480766764;
		Var5.f_3 = iVar15;
		if (!DATAFILE::_DATAFILE_GET_VECTOR(uParam1[Var5.f_3 /*3*/], &Var5))
		{
			return false;
		}
		Var10 = { Var0 };
		Var10.f_2 = 983475634;
		Var10.f_3 = iVar15;
		if (!DATAFILE::_DATAFILE_GET_VECTOR(uParam2[Var10.f_3 /*3*/], &Var10))
		{
			return false;
		}
		iVar15++;
	}
	return true;
}

bool func_105(int iParam0)
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

char* func_106(int iParam0, bool bParam1)
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

int func_107(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13)
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
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_191(iVar0, 2))
		{
			if (iParam2 == Global_1951255[iVar0 /*23*/].f_10 && iParam1 == Global_1951255[iVar0 /*23*/].f_4)
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
		func_192(iVar1, iParam1, sParam0, 2, iParam3, iParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1065353216 /* Float: 1f */, 0, 0, 0, iParam12, bParam13);
		return iVar1;
	}
	return 0;
}

void func_108(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_105(iParam0))
	{
		return;
	}
	iVar0 = func_193(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1951255[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iVar0 /*23*/].f_3, bParam1);
}

void func_109(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_105(iParam0))
	{
		return;
	}
	iVar0 = func_193(iParam0);
	if (bParam1)
	{
		func_194(iParam0, 4);
		if (bParam3)
		{
			func_195(iVar0, 1);
		}
		func_196(iVar0, 1);
	}
	else
	{
		func_197(iParam0, 4);
		func_196(iVar0, 0);
	}
}

bool func_110()
{
	return (Global_1296851.f_2.f_1 == 2 || Global_1296851.f_2.f_1 == 1);
}

bool func_111()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

struct<2> func_112(int iParam0)
{
	return Global_1900736.f_1[iParam0 /*2*/];
}

bool func_113(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715.f_20638;
	}
	return (Global_1915715.f_20638 || Global_1915715.f_22504.f_1);
}

int func_114(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (Global_1248240[iVar0 /*683*/].f_559 != iParam0)
		{
		}
		else if (bParam2 && !func_198(iVar0, 32, iParam1))
		{
		}
		else if (bParam3 && Global_1237665[iVar0 /*27*/].f_15 != iParam1)
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

bool func_115(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 12);
}

bool func_116()
{
	return (Global_1952637.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1952637.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE"));
}

int func_117(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1940258.f_12)
	{
		if ((bParam2 || Global_1940258.f_13 > 0) || Global_1940258.f_11 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1940258.f_9 == 1370593166)
	{
		return 0;
	}
	if (Global_1940258.f_14 > 0 || (bParam2 && Global_1940258.f_14 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1940258.f_7)
		{
			if (bParam2 || Global_1940258.f_15 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_118()
{
	return func_10(1, 255);
}

bool func_119()
{
	int iVar0;

	iVar0 = UIFEED::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && UIFEED::_0x59FA676177DBE4C9(iVar0) <= 4);
}

bool func_120(int iParam0, int iParam1, bool bParam2, int iParam3)
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

int func_121(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_122(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_105(iParam0))
	{
		return false;
	}
	iVar0 = func_193(iParam0);
	return HUD::_UIPROMPT_IS_ACTIVE(Global_1951255[iVar0 /*23*/].f_3);
}

bool func_123(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return (Global_1197740.f_1 && iParam0) != 0;
}

bool func_124()
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

bool func_125(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0);
}

bool func_126(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219.f_3 && iParam0) != 0;
	}
	return (Global_1100469[iParam1 /*53*/].f_3 && iParam0) != 0;
}

bool func_127(int iParam0, bool bParam1)
{
	if (bParam1 && !func_105(iParam0))
	{
		return false;
	}
	return !func_191(iParam0, 4);
}

int func_128(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		if (iParam2 == -1)
		{
			return joaat("COLOR_GREYDARK");
		}
		else
		{
			return joaat("COLOR_POSSE_NEUTRAL");
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return joaat("COLOR_POSSE_NEUTRAL");
	}
	iVar2 = iParam0;
	if (func_199(func_112(0)) && func_200(func_112(0)) == 7)
	{
		bVar0 = true;
		iVar3 = 11;
		iVar4 = (iVar3 / 32);
		iVar5 = (iVar3 - iVar4 * 32);
		bVar1 = MISC::IS_BIT_SET(Global_3145858.f_6[iVar4], iVar5);
	}
	if (Global_1071686.f_21416.f_1[iVar2 /*8*/].f_5 != 0)
	{
		return Global_1071686.f_21416.f_1[iVar2 /*8*/].f_5;
	}
	if (bParam3 && Global_1071686.f_21416.f_1[iVar2 /*8*/].f_6 != 0)
	{
		return Global_1071686.f_21416.f_1[iVar2 /*8*/].f_6;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (bVar0 && bVar1)
		{
			iVar6 = func_201(iParam0);
			if (iVar6 == joaat("COLOR_NET_PLAYER2") && NETWORK::_NETWORK_IS_PLAYER_IN_SPECTATOR_MODE(iParam0))
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
			return func_202(iParam0);
		}
	}
	if (iVar2 < 0 || iVar2 >= 32)
	{
		return 0;
	}
	if (func_95(Global_1071686.f_21416.f_1[iVar2 /*8*/].f_7, 1024))
	{
		return joaat("COLOR_WINNING_PLAYER");
	}
	iVar7 = func_203(iParam0, 1);
	if (!bVar0)
	{
		if (func_204(iParam0, bParam1))
		{
			return func_202(iParam0);
		}
		else if (func_205(iParam0, bParam1))
		{
			if (func_206(iParam0, bParam1))
			{
				return joaat("COLOR_POSSE_ENEMY");
			}
			else
			{
				if (iVar7 > 5)
				{
					return joaat("COLOR_NOTORIETY_HIGH");
				}
				else if (iVar7 > 3)
				{
					return joaat("COLOR_NOTORIETY_HIGH");
				}
				else if (iVar7 > 1)
				{
					return joaat("COLOR_NOTORIETY_MEDIUM");
				}
				return joaat("COLOR_NOTORIETY_LOW");
			}
		}
	}
	else if (bVar1)
	{
		return func_201(iParam0);
	}
	else if (func_204(iParam0, bParam1))
	{
		if (PLAYER::PLAYER_ID() == iParam0)
		{
			return joaat("COLOR_WHITE");
		}
		else if (func_208(func_207(func_112(0)), 1) == 395262693)
		{
			return func_202(iParam0);
		}
		else
		{
			return func_202(iParam0);
		}
	}
	else if (func_205(iParam0, bParam1))
	{
		return joaat("COLOR_POSSE_ENEMY");
	}
	return joaat("COLOR_FRIENDLY");
}

char* func_129(char* sParam0, int iParam1)
{
	sParam0 = PLAYER::_FORMAT_PLAYER_NAME_STRING(sParam0);
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_209(MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

int func_130(int iParam0)
{
	int iVar0;

	iVar0 = func_193(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	return Global_1951255[iVar0 /*23*/].f_3;
}

bool func_131(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_105(iParam0))
	{
		return false;
	}
	iVar0 = func_193(iParam0);
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

int func_132(int iParam0)
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

void func_133(int iParam0)
{
	if (iParam0 == 0 || iParam0 == 1)
	{
		return;
	}
	Global_1298536[Global_1296859 /*87*/].f_5.f_13 = iParam0;
}

void func_134()
{
	struct<20> Var0;

	Var0.f_5 = 255;
	Var0.f_7 = -1;
	Var0.f_9 = 7;
	Var0.f_19 = -1;
	Var0.f_19.f_1 = -1;
	Var0.f_4 = 5;
	func_210(&Var0);
}

void func_135()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	func_211(0);
	Global_1940311.f_5 = 1;
}

void func_136(bool bParam0)
{
	if (func_124())
	{
		Global_1958008 = 1;
	}
	if (func_212(joaat("CAMERA_ITEM")))
	{
	}
	if (bParam0 && (Global_1940258.f_38 == joaat("WEAPON_KIT_CAMERA") || Global_1940258.f_38 == joaat("WEAPON_KIT_CAMERA_ADVANCED")))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
		Global_1940258.f_38 = joaat("WEAPON_UNARMED");
	}
}

bool func_137()
{
	return Global_1896738.f_382;
}

void func_138()
{
	func_213(0);
}

void func_139(var uParam0, int iParam1)
{
	func_214(uParam0, iParam1);
}

bool func_140(int iParam0)
{
	return func_10(1, iParam0);
}

Vector3 func_141(float fParam0)
{
	return -BUILTIN::SIN(fParam0), BUILTIN::COS(fParam0), 0f;
}

char* func_142()
{
	char* sVar0;

	switch (Local_19.f_2)
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

int func_143()
{
	int iVar0;

	switch (Local_19.f_2)
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

char* func_144(int iParam0)
{
	char* sVar0;
	bool bVar1;
	bool bVar2;

	sVar0 = "";
	switch (Local_19.f_2)
	{
		case 0:
		case 1:
			bVar1 = func_215();
			bVar2 = func_216();
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

int func_145(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
		{
			return -1;
		}
	}
	return Global_1298536[iParam0 /*87*/];
}

bool func_146(int iParam0)
{
	return func_217(iParam0, -1);
}

bool func_147(int iParam0)
{
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	return true;
}

Vector3 func_148()
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;

	bVar3 = (Local_19.f_2 == 2 || Local_19.f_2 == 3);
	bVar4 = Local_19.f_2 == 3;
	switch (Local_19.f_1)
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

Vector3 func_149()
{
	bool bVar0;
	vector3 vVar1;

	bVar0 = (Local_19.f_2 == 2 || Local_19.f_2 == 3);
	switch (Local_19.f_1)
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

int func_150()
{
	int iVar0;

	switch (Local_19.f_1)
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

char* func_151(int iParam0, bool bParam1)
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

void func_152(int iParam0)
{
	Local_19.f_4 = iParam0;
}

void func_153(bool bParam0)
{
	if (bParam0)
	{
		if (!func_74(2))
		{
			ENTITY::SET_ENTITY_COORDS(Global_34, Local_19.f_13[Local_19.f_2 /*3*/], true, false, true, true);
			ENTITY::SET_ENTITY_HEADING(Global_34, Local_19.f_29[Local_19.f_2]);
			func_218(0, 0);
			func_62(2);
		}
	}
	else if (!func_74(4))
	{
		ENTITY::SET_ENTITY_COORDS(Global_34, Local_19.f_13[Local_19.f_2 /*3*/], true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(Global_34, Local_19.f_29[Local_19.f_2]);
		func_218(0, 0);
		func_62(4);
	}
}

void func_154()
{
	Local_19.f_85 = func_96();
	Local_19.f_86 = GANG::_0x901E0DC25080C8B9(Local_19.f_85);
	if (GANG::_0x4BE6C13A45CCA8EC(Local_19.f_86) == PLAYER::PLAYER_ID())
	{
		func_62(131072);
	}
}

bool func_155()
{
	return Global_1108365.f_935.f_28 != -1;
}

void func_156(int iParam0, float fParam1, bool bParam2)
{
	func_219(iParam0, 0, 0);
	if (func_220(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam1, bParam2);
	}
}

void func_157()
{
	if (func_221(2, 255))
	{
		return;
	}
	func_222(2);
}

void func_158()
{
	if (func_223(8, 255))
	{
		return;
	}
	func_224(3);
}

bool func_159()
{
	int iVar0;

	iVar0 = UIFEED::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && UIFEED::_0x59FA676177DBE4C9(iVar0) == 4);
}

void func_160(int iParam0)
{
	UIFEED::_0xDD1232B332CBB9E7(1, iParam0, 0);
}

Vector3 func_161(int iParam0)
{
	return Global_1298378.f_6.f_1[iParam0 /*3*/];
}

int func_162(vector3 vParam0, var uParam3)
{
	if (func_9(vParam0))
	{
		return 0;
	}
	if (func_225(255) == 4)
	{
		return 0;
	}
	if (func_10(4, 255))
	{
	}
	func_166(4);
	func_226(&(Global_1102219.f_3879));
	Global_1102219.f_3879.f_6 = { vParam0 };
	Global_1102219.f_3879 = uParam3;
	Global_1102219.f_3879.f_5 = 1;
	Global_1102219.f_26.f_3341 = 0;
	Global_1102219.f_26.f_3342 = 0;
	func_227(Global_1102219.f_3879, 36);
	return 1;
}

void func_163(bool bParam0)
{
	if (!bParam0)
	{
		func_228(18);
	}
	else
	{
		func_166(18);
	}
}

void func_164(bool bParam0)
{
	if (!bParam0)
	{
		func_228(19);
	}
	else
	{
		func_166(19);
	}
}

void func_165(bool bParam0)
{
	if (bParam0)
	{
		func_166(129);
	}
	else
	{
		func_228(129);
	}
}

int func_166(int iParam0)
{
	if (func_229(&(Global_1102219.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_167(bool bParam0, bool bParam1)
{
	if (func_225(255) == 4)
	{
		return;
	}
	if (func_9(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_228(0);
	}
	else
	{
		if (bParam1)
		{
			func_230(0, 0, 0, 1);
		}
		func_166(0);
		func_231(&(Global_1102219.f_3849));
		Global_1102219.f_3849 = 0f;
		Global_1102219.f_3849.f_5 = 1;
		Global_1102219.f_3849.f_16 = 0;
		Global_1102219.f_3849.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1102219.f_3849.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102219.f_3849.f_17 = { Global_1901947.f_50.f_1, Global_1901947.f_50.f_1, Global_1901947.f_50.f_1 };
		Global_1102219.f_3849.f_17.f_9 = joaat("VOLSPHERE");
		func_232(&(Global_1102219.f_3888));
		Global_1102219.f_3888.f_6 = { Global_1102219.f_3849.f_17.f_6 };
		Global_1102219.f_3888 = Global_1102219.f_3849;
		Global_1102219.f_3888.f_5 = 1;
		if (bParam1)
		{
			Global_1102219.f_26.f_3341 = 0;
			Global_1102219.f_26.f_3342 = 0;
		}
	}
	func_233(Global_1102219.f_3849, 36);
	func_234(Global_1102219.f_3888, 36);
}

void func_168(bool bParam0, int iParam1)
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
		func_235(iParam1);
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
	func_236(bVar1, bVar2, bVar3, (bVar4 || bVar5), bVar6, 0, bVar5);
}

void func_169(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_237(49);
	}
	if (bParam1)
	{
		func_237(51);
	}
	func_238(48);
	func_237(52);
	func_237(3);
}

Vector3 func_170(int iParam0, int iParam1)
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
	func_240(1268215321, func_189(iParam0), func_239(iParam1), 0);
	if (!DATAFILE::_DATAFILE_GET_VECTOR(&vVar0, &(Global_1298378.f_1)))
	{
		return 0f, 0f, 0f;
	}
	return vVar0;
}

float func_171(int iParam0, int iParam1)
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
	func_240(-226869021, func_189(iParam0), func_239(iParam1), 0);
	if (!DATAFILE::_DATAFILE_GET_FLOAT(&fVar0, &(Global_1298378.f_1)))
	{
		return 0f;
	}
	return fVar0;
}

void func_172(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, float fParam8)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
	fVar3 = fParam3;
	if (!func_241(Global_1296859.f_17, &vVar0, &fVar3))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
		fVar3 = fParam3;
	}
	func_242(vParam0, fParam3, vVar0, fVar3, iParam4, iParam5, iParam6, iParam7, fParam8, 1);
}

void func_173(int iParam0)
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

void func_174(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_105(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_193(*uParam0);
	if (Global_1951255[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_243(iVar0);
	*uParam0 = 0;
}

void func_175()
{
	SCRIPTS::_0x20F4CB76689ACDBC(&(Global_1071686.f_21416.f_260));
}

void func_176(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_177(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_178(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_244(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_245(iParam0))
	{
		return false;
	}
	if (func_246(iParam0))
	{
		return false;
	}
	if ((Global_1900736.f_67 && !func_247(iParam0, 1)) || func_248(32768))
	{
		if (!func_247(iParam0, 262144) || !Global_1904651.f_8686)
		{
			return false;
		}
	}
	if (!func_249())
	{
		return false;
	}
	return true;
}

void func_179(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904651[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904651[iParam0] = uVar0;
}

bool func_180(int iParam0)
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

int func_181(int iParam0)
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

bool func_182(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_183(var uParam0, float fParam1)
{
	if (!func_91(uParam0))
	{
		return false;
	}
	if (func_250(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_184(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_185(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_251() - fParam1);
	func_252(uParam0, 1);
	func_253(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_186(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 32);
}

bool func_187()
{
	int iVar0;

	if (Global_1901947.f_44.f_2 == 1788394582)
	{
		iVar0 = Global_1296859.f_21;
		if (iVar0 > Global_1901947.f_44.f_3 && iVar0 < Global_1901947.f_44.f_4)
		{
			return true;
		}
	}
	return false;
}

int func_188(int iParam0, int iParam1)
{
	int iVar0;

	func_219(iParam0, 0, 0);
	if (func_220(iParam0))
	{
		iVar0 = ENTITY::_0xF7424890E4A094C0(iParam0, iParam1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return iVar0;
		}
	}
	return 0;
}

int func_189(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROPERTY_BAYOU");
		case 1:
			return joaat("PROPERTY_GRIZZLIES");
		case 2:
			return joaat("PROPERTY_HENNIGANS");
		case 3:
			return joaat("PROPERTY_HEARTLANDS");
		case 4:
			return joaat("PROPERTY_TALL_TREES");
		default:
			break;
	}
	return -1588462292;
}

int func_190(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("GHOSTING_VOLUME");
		case 1:
			return joaat("UNGHOSTING_VOLUME");
		default:
			break;
	}
	return 0;
}

bool func_191(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951255[iParam0 /*23*/].f_1 && iParam1) != 0;
}

void func_192(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_195(iParam0, 1);
	func_196(iParam0, 1);
	func_197(iParam0, 128);
}

int func_193(int iParam0)
{
	return iParam0;
}

void func_194(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951255[iParam0 /*23*/].f_1 = (Global_1951255[iParam0 /*23*/].f_1 - (Global_1951255[iParam0 /*23*/].f_1 && iParam1));
}

void func_195(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		if (Global_1951255[iParam0 /*23*/].f_5 == 5 && !func_191(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_196(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1951255[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_197(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951255[iParam0 /*23*/].f_1 = (Global_1951255[iParam0 /*23*/].f_1 || iParam1);
}

bool func_198(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 255)
	{
		iParam2 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return (func_254(iParam0) && func_255(Global_1238240[iParam2 /*303*/][iParam0 /*23*/].f_19, iParam1));
}

bool func_199(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_256(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_200(var uParam0, var uParam1)
{
	return uParam0;
}

int func_201(int iParam0)
{
	switch (PLAYER::GET_PLAYER_TEAM(iParam0))
	{
		case 0:
			return joaat("COLOR_NET_PLAYER3");
		case 1:
			return joaat("COLOR_NET_PLAYER4");
		case 2:
			return joaat("COLOR_NET_PLAYER5");
		case 3:
			return joaat("COLOR_NET_PLAYER6");
		case 4:
			return joaat("COLOR_NET_PLAYER7");
		case 5:
			return joaat("COLOR_NET_PLAYER8");
		case 6:
			return joaat("COLOR_NET_PLAYER9");
		case 7:
			return joaat("COLOR_NET_PLAYER10");
		case 8:
			return joaat("COLOR_NET_PLAYER11");
		default:
			break;
	}
	return joaat("COLOR_NET_PLAYER2");
}

int func_202(int iParam0)
{
	if (GANG::_0x901E0DC25080C8B9(iParam0) != Global_1296859.f_15 && !func_257())
	{
		return joaat("COLOR_POSSE_NEUTRAL");
	}
	return joaat("COLOR_POSSE_ALLY");
}

int func_203(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = BUILTIN::FLOOR(func_258(iParam0, bParam1));
	if (bParam1)
	{
		iVar3 = iParam0;
		if (iVar3 < 0 || iVar3 >= 32)
		{
			iVar2 = 0;
		}
		else
		{
			iVar2 = BUILTIN::FLOOR(Global_1100469[iVar3 /*53*/].f_18);
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
	if (iVar1 < Global_1901947.f_716.f_31)
	{
		return 0;
	}
	if (iVar1 < Global_1901947.f_716.f_32)
	{
		return 1;
	}
	if (iVar1 < Global_1901947.f_716.f_33)
	{
		return 2;
	}
	if (iVar1 < Global_1901947.f_716.f_34)
	{
		return 3;
	}
	if (iVar1 < Global_1901947.f_716.f_35)
	{
		return 4;
	}
	if (iVar1 < Global_1901947.f_716.f_36)
	{
		return 5;
	}
	return 6;
}

bool func_204(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == 255)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (iParam0 == Global_1296859.f_10)
	{
		return true;
	}
	iVar0 = iParam0;
	if (!Global_1296859.f_22[iVar0])
	{
		return false;
	}
	if (bParam1)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28350), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28348), iVar0))
		{
			return false;
		}
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28349), iVar0))
		{
			return true;
		}
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28346), iVar0))
	{
		return true;
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28345), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28347), iVar0))
	{
		return false;
	}
	iVar1 = PLAYER::GET_PLAYER_TEAM(Global_1296859.f_10);
	iVar2 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((iVar1 != -1 && iVar2 != -1) && iVar1 == iVar2)
	{
		return true;
	}
	else if (GANG::_0x81FB74C83C2ED69F(iParam0))
	{
		return true;
	}
	return false;
}

bool func_205(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return false;
	}
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return true;
	}
	if (bParam1)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28349), iVar0))
		{
			return false;
		}
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28350), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28348), iVar0))
		{
			return true;
		}
	}
	if (func_259(iParam0))
	{
		return true;
	}
	return !func_204(iParam0, 0);
}

bool func_206(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return false;
	}
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (bParam1)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28349), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28350), iVar0))
		{
			return false;
		}
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28348), iVar0))
		{
			return true;
		}
	}
	if (func_260(iParam0))
	{
		return false;
	}
	if (func_259(iParam0))
	{
		return false;
	}
	if (func_261(iParam0))
	{
		return true;
	}
	return func_262(iParam0);
}

int func_207(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_263(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_208(int iParam0, int iParam1)
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

char* func_209(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

void func_210(var uParam0)
{
	var uVar0;

	*uParam0 = 13;
	uParam0->f_1 = PLAYER::GET_PLAYER_INDEX();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	uVar0 = func_264(0, 8);
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 26, 15, &uVar0);
}

void func_211(bool bParam0)
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

bool func_212(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1939493.f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(Global_1939493[iVar0 /*16*/].f_10)))
		{
			func_265(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_213(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1896738.f_382)
		{
			Global_1896738.f_382 = bParam0;
		}
	}
	else if (Global_1896738.f_382)
	{
		Global_1896738.f_382 = bParam0;
	}
}

void func_214(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_215()
{
	return Global_1940085 == 2;
}

bool func_216()
{
	return Global_1940085 == 1;
}

int func_217(int iParam0, int iParam1)
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

void func_218(float fParam0, float fParam1)
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam0, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam1, 1f);
}

int func_219(int iParam0, bool bParam1, bool bParam2)
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
	{
		if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(Global_1051252.f_16[0])) && bParam1)
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, true, false, Global_1051252.f_16[0], 0, false);
		}
		else
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, false, false, 0, 0, false);
		}
	}
	else if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(Global_1051252.f_16[0])) && bParam1)
	{
		if (!OBJECT::_IS_DOOR_REGISTERED_WITH_NETWORK(iParam0))
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, true, false, Global_1051252.f_16[0], 0, false);
		}
	}
	if (bParam2)
	{
		OBJECT::_0x1F1FABFE9B2A1254(iParam0, 1);
	}
	return iParam0;
}

bool func_220(int iParam0)
{
	if (func_266(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return false;
}

bool func_221(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return (Global_1291106[iParam1 /*19*/].f_1 && iParam0) != 0;
}

void func_222(int iParam0)
{
	func_267(3, iParam0);
}

bool func_223(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return (Global_1291106[iParam1 /*19*/].f_2 && iParam0) != 0;
}

void func_224(int iParam0)
{
	func_267(2, iParam0);
}

int func_225(int iParam0)
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

void func_226(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_227(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

int func_228(int iParam0)
{
	if (func_268(&(Global_1102219.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_229(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
	MISC::SET_BIT(uParam0[iVar0], iVar1);
	return !bVar2;
}

void func_230(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_269(iParam0);
	if (!func_270(1))
	{
		return;
	}
	if (bParam1)
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_271(128) && !func_272(19))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_273() == 4)
	{
		func_228(18);
	}
	func_274(1024);
}

void func_231(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_232(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_233(struct<29> Param0, var uParam29, int iParam30)
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

void func_234(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

void func_235(int iParam0)
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
		PLAYER::SET_PLAYER_CONTROL(iVar0, true, 0, false);
	}
	else
	{
		PLAYER::SET_PLAYER_CONTROL(iVar0, true, 4, false);
	}
	ENTITY::FREEZE_ENTITY_POSITION(iVar1, false);
	if (iParam0 & 512 != 0)
	{
	}
	else
	{
		func_275();
	}
	PLAYER::SET_PLAYER_INVINCIBLE(iVar0, false);
	if (!PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
	{
		ENTITY::SET_ENTITY_COLLISION(iVar1, true, false);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar1, true, false);
	}
}

void func_236(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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
	PLAYER::SET_PLAYER_CONTROL(iVar0, false, iVar2, false);
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
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, false, !bParam6);
		}
	}
}

void func_237(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_276(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_1904087.f_496[iVar0]), iVar1);
}

void func_238(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_276(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_1904087.f_496[iVar0]), iVar1);
}

int func_239(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("EXTERIOR_FRONT");
		case 1:
			return joaat("EXTERIOR_SIDE");
		case 2:
			return joaat("INTERIOR_GROUND_FRONT");
		case 3:
			return joaat("INTERIOR_GROUND_SIDE");
		case 4:
			return joaat("INTERIOR_BAR");
		default:
			break;
	}
	return -1950033077;
}

void func_240(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_277();
	Global_1298378.f_1.f_2 = iParam0;
	Global_1298378.f_1.f_3 = iParam1;
	Global_1298378.f_1.f_4 = iParam2;
	Global_1298378.f_1.f_1 = iParam3;
}

bool func_241(vector3 vParam0, var uParam3, float fParam4)
{
	var uVar0;
	int iVar1;
	int iVar2;

	uVar0 = Global_1071686.f_23887.f_366[func_278(vParam0) /*272*/];
	iVar1 = func_279(uVar0);
	if (iVar1 <= 0)
	{
		return false;
	}
	else
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
		if (func_280(uVar0, iVar2, uParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

void func_242(vector3 vParam0, float fParam3, vector3 vParam4, float fParam7, float fParam8, float fParam9, bool bParam10, int iParam11, float fParam12, int iParam13)
{
	if (func_225(255) == 4)
	{
		return;
	}
	if (func_9(vParam0))
	{
		return;
	}
	if (fParam8 < 0f && fParam9 < 0f)
	{
		fParam8 = Global_1901947.f_50;
		fParam9 = Global_1901947.f_50.f_1;
	}
	if (fParam8 == 0f && fParam9 == 0f)
	{
		fParam8 = Global_1901947.f_50;
		fParam9 = Global_1901947.f_50.f_1;
	}
	if (fParam9 < fParam8)
	{
		fParam8 = Global_1901947.f_50;
		fParam9 = Global_1901947.f_50.f_1;
	}
	if (bParam10)
	{
		func_230(0, 0, 0, 1);
	}
	func_166(0);
	func_166(3);
	Global_1102219.f_3919 = iParam11;
	Global_1102219.f_3920 = fParam12;
	Global_1102219.f_3921 = iParam13;
	func_231(&(Global_1102219.f_3849));
	Global_1102219.f_3849 = fParam3;
	Global_1102219.f_3849.f_5 = 1;
	Global_1102219.f_3849.f_17.f_6 = { vParam0 };
	Global_1102219.f_3849.f_17.f_3 = { 0f, 0f, 0f };
	Global_1102219.f_3849.f_17 = { fParam9, fParam9, fParam9 };
	Global_1102219.f_3849.f_17.f_9 = joaat("VOLSPHERE");
	if (fParam8 > 1f)
	{
		Global_1102219.f_3849.f_16 = 1;
		Global_1102219.f_3849.f_6.f_6 = { Global_1102219.f_3849.f_17.f_6 };
		Global_1102219.f_3849.f_6.f_3 = { 0f, 0f, 0f };
		Global_1102219.f_3849.f_6 = { fParam8, fParam8, fParam8 };
		Global_1102219.f_3849.f_6.f_9 = joaat("VOLSPHERE");
	}
	func_232(&(Global_1102219.f_3888));
	Global_1102219.f_3888.f_6 = { vParam4 };
	Global_1102219.f_3888 = fParam7;
	Global_1102219.f_3888.f_5 = 1;
	Global_1102219.f_26.f_3341 = 0;
	Global_1102219.f_26.f_3342 = 0;
	func_233(Global_1102219.f_3849, 36);
	func_234(Global_1102219.f_3888, 36);
}

void func_243(int iParam0)
{
	if (!func_281(iParam0))
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

bool func_244(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17411.f_2565[iParam0], iParam1);
}

bool func_245(int iParam0)
{
	if (func_247(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_246(int iParam0)
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

bool func_247(int iParam0, int iParam1)
{
	return (Global_1904651.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_248(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_249()
{
	if (!func_111())
	{
		return false;
	}
	return Global_1904651.f_8684;
}

float func_250(var uParam0)
{
	if (!func_91(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_282(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_251() - uParam0->f_1);
}

float func_251()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_252(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_253(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_254(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 12);
}

bool func_255(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_256(struct<2> Param0)
{
	int iVar0;

	if (!func_87(Param0))
	{
		return -1;
	}
	iVar0 = func_283(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1071686.f_19550.f_1[iVar0 /*3*/].f_2;
}

bool func_257()
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
	if (!func_87(Global_1051213) && Global_1572887.f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

float func_258(int iParam0, bool bParam1)
{
	int iVar0;

	if (!Global_1139381.f_5560)
	{
		return 0f;
	}
	if (iParam0 == Global_1296859.f_154[Global_1296859])
	{
		return Global_17411.f_2621;
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
	if ((GANG::_0x149A2751AB66AC02(GANG::_0x901E0DC25080C8B9(iParam0)) > 1 && bParam1) && Global_1100469[iVar0 /*53*/].f_18 >= Global_1100469[iVar0 /*53*/].f_45)
	{
		return Global_1100469[iVar0 /*53*/].f_18;
	}
	return Global_1100469[iVar0 /*53*/].f_45;
}

bool func_259(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28347), iParam0))
	{
		return true;
	}
	return false;
}

bool func_260(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28346), iParam0))
	{
		return true;
	}
	return false;
}

bool func_261(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28345), iParam0))
	{
		return true;
	}
	return false;
}

bool func_262(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		func_284(iParam0);
		return false;
	}
	if (func_261(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) != 2)
		{
			func_285(iParam0, 5, 1, 1, 0, 0);
		}
		return true;
	}
	return (NETWORK::_0x862C5040F4888741(Global_1296859.f_10, iParam0) || NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) == 2);
}

bool func_263(struct<2> Param0, var uParam2)
{
	if (!func_87(Param0))
	{
		return false;
	}
	func_286(uParam2);
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

var func_264(int iParam0, int iParam1)
{
	return func_287(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("VOLCYLINDER"), iParam0, iParam1);
}

void func_265(int iParam0)
{
	struct<16> Var0;

	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1939493[iParam0 /*16*/].f_10)))
	{
		return;
	}
	Global_1939493[iParam0 /*16*/] = { Var0 };
	Global_1939493.f_161 = (Global_1939493.f_161 - 1);
	if (Global_1939493.f_161 < 0)
	{
		Global_1939493.f_161 = 0;
	}
}

bool func_266(int iParam0)
{
	return iParam0 != 0;
}

void func_267(int iParam0, int iParam1)
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
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Var0.f_1))
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

bool func_268(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
	MISC::CLEAR_BIT(uParam0[iVar0], iVar1);
	return bVar2;
}

void func_269(int iParam0)
{
	Global_1102219.f_26.f_12 = iParam0;
}

bool func_270(int iParam0)
{
	return (Global_1102219.f_26.f_7 && iParam0) != 0;
}

bool func_271(int iParam0)
{
	return (Global_1102219.f_26.f_9 && iParam0) != 0;
}

bool func_272(int iParam0)
{
	return (Global_1102219.f_4[Global_1106305[iParam0 /*2*/]] && Global_1106305[iParam0 /*2*/].f_1) == Global_1106305[iParam0 /*2*/].f_1;
}

int func_273()
{
	if (Global_1102219 <= 5)
	{
		return Global_1102219;
	}
	if (Global_1102219 <= 22)
	{
		return 4;
	}
	if (Global_1102219 <= 25)
	{
		return 3;
	}
	return 26;
}

void func_274(int iParam0)
{
	if (func_288(iParam0))
	{
		return;
	}
	Global_1102219.f_26.f_9 = (Global_1102219.f_26.f_9 || iParam0);
}

void func_275()
{
	if (!Global_1102219.f_16)
	{
		return;
	}
	Global_1071686.f_28662.f_5 = 1;
	AUDIO::_0x531A78D6BF27014B("rdro_gamemode_transition_sounds");
	AUDIO::_0x531A78D6BF27014B("rdro_gamemode_generic_sounds");
}

bool func_276(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	return true;
}

void func_277()
{
	Global_1298378.f_1 = Global_1071686.f_28448[50 /*4*/].f_3;
	Global_1298378.f_1.f_1 = 0;
	Global_1298378.f_1.f_2 = 0;
	Global_1298378.f_1.f_3 = 0;
	Global_1298378.f_1.f_4 = 0;
}

int func_278(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	iVar0 = 0;
	iVar1 = -1;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		fVar3 = BUILTIN::VDIST(vParam0, Global_1071686.f_23887.f_366[iVar0 /*272*/].f_2);
		if (fVar3 < fVar2 || iVar1 == -1)
		{
			iVar1 = iVar0;
			fVar2 = fVar3;
		}
		iVar0++;
	}
	return iVar1;
}

int func_279(var uParam0)
{
	struct<4> Var0;

	Var0 = Global_1071686.f_23887.f_366.f_4085;
	Var0.f_2 = 1593794963;
	Var0.f_3 = uParam0;
	return DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
}

bool func_280(var uParam0, int iParam1, var uParam2, float fParam3)
{
	struct<5> Var0;

	Var0 = Global_1071686.f_23887.f_366.f_4085;
	Var0.f_2 = 160165798;
	Var0.f_3 = uParam0;
	Var0.f_4 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1576253240;
		DATAFILE::_DATAFILE_GET_VECTOR(uParam2, &Var0);
		Var0.f_2 = -55481687;
		DATAFILE::_DATAFILE_GET_FLOAT(fParam3, &Var0);
		return true;
	}
	return false;
}

bool func_281(int iParam0)
{
	return func_191(iParam0, 2);
}

bool func_282(var uParam0)
{
	return func_182(*uParam0, 2);
}

int func_283(struct<2> Param0)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;

	if (Global_1071686.f_19550 <= 0)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_263(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1071686.f_19550 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_263(Global_1071686.f_19550.f_1[iVar8 /*3*/], &vVar3);
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

void func_284(int iParam0)
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
	func_289(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 0;
}

void func_285(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	bool bVar5;
	struct<8> Var6;

	if (Global_1572887.f_16 != 0 || Global_1572887.f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (func_290(iVar0, iParam1, iParam5))
	{
		iVar1 = 1;
	}
	if (Global_1071686.f_21416.f_1[iVar0 /*8*/] != 2)
	{
		if (!Global_1296859.f_22[iVar0])
		{
			func_284(iParam0);
			return;
		}
		NETWORK::_0x51951DE06C0D1C40(iParam0, 2);
		Global_1071686.f_21416.f_1[iVar0 /*8*/] = 2;
		iVar1 = 1;
	}
	if (iParam2 && iVar1)
	{
		iVar2 = 0;
		while (iVar2 <= 31)
		{
			iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (iVar2 != Global_1296859 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
			{
				if (GANG::_0x81FB74C83C2ED69F(iVar3))
				{
					if (bParam3)
					{
						SCRIPTS::_0x31010318BA9897AC(&uVar4, iVar2);
						bVar5 = true;
					}
				}
				else if (GANG::_0x3F59FE6F37869576(iVar3, iParam0))
				{
					if (bParam4)
					{
						SCRIPTS::_0x31010318BA9897AC(&uVar4, iVar2);
						bVar5 = true;
					}
					if (iVar2 != iVar0)
					{
						func_285(iVar3, iParam1, 0, 1, 0, 0);
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
			func_291(&Var6, uVar4);
		}
	}
}

void func_286(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

var func_287(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_292() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_293());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_293());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_293());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_294(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_295(iVar2))
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
				if (iVar9 & 8192 != 0 && func_225(iVar2) != 1)
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
					if (!func_296(iVar10))
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

bool func_288(int iParam0)
{
	return (Global_1102219.f_26.f_9 && iParam0) == iParam0;
}

void func_289(int iParam0)
{
	if (Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

bool func_290(int iParam0, int iParam1, int iParam2)
{
	if (Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 < iParam1)
	{
		if (iParam2 != 0)
		{
			Global_1071686.f_21416.f_1[iParam0 /*8*/].f_2 = iParam2;
		}
		else
		{
			Global_1071686.f_21416.f_1[iParam0 /*8*/].f_2 = Global_1296859.f_21;
		}
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 = iParam1;
		return true;
	}
	else if (Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 == iParam1)
	{
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_2 = Global_1296859.f_21;
		return true;
	}
	return false;
}

void func_291(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 183;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 2, &uParam1);
	func_297(*uParam0);
}

int func_292()
{
	return Global_1051252.f_12;
}

char* func_293()
{
	return "unnamed";
}

int func_294(int iParam0)
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

bool func_295(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return func_10(36, iParam0);
}

bool func_296(int iParam0)
{
	if (func_260(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) != 1)
		{
			func_298(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) == 1;
}

void func_297(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
}

void func_298(int iParam0)
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
		func_284(iParam0);
		return;
	}
	if (Global_1071686.f_21416.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_289(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 1;
}

