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
	struct<10> Local_18 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = -1;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()
{
	fLocal_16 = 1f;
	fLocal_17 = 1f;
	func_1(&Local_18, vScriptParam_0);
	if (func_2() == -1)
	{
	}
	else
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		if (func_4(func_3(0)) != 7)
		{
		}
		else
		{
			func_5(&Local_18);
		}
	}
	if (func_2() == -1)
	{
		if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		{
			func_5(&Local_18);
		}
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(Local_18.f_9))
	{
		func_5(&Local_18);
	}
	while (func_6(&Local_18))
	{
		if (func_7())
		{
			func_5(&Local_18);
		}
		if (func_8(&Local_18))
		{
			func_5(&Local_18);
		}
		BUILTIN::WAIT(0);
	}
	func_5(&Local_18);
}

void func_1(var uParam0, vector3 vParam1)
{
	if (vParam1.z == 1260056893)
	{
		if (!func_9(uParam0, 4))
		{
			uParam0->f_16 = vParam1.x;
			vParam1.x = 0;
			func_10(uParam0, 4);
			if (MISC::ABSI(uParam0->f_16) <= 50)
			{
				uParam0->f_21 = func_11(MISC::ABSI(uParam0->f_16));
				func_10(uParam0, 1);
			}
			else
			{
				func_10(uParam0, 2);
			}
		}
	}
	*uParam0 = 4;
	uParam0->f_1 = func_12(vParam1, uParam0);
	func_10(uParam0, 2);
	uParam0->f_12 = "script@mech@treasure_hunting@grab";
	uParam0->f_13 = "PBL_GRAB_01";
	uParam0->f_2 = 0;
	uParam0->f_22 = func_13(uParam0);
	uParam0->f_5 = func_14(uParam0->f_22);
	uParam0->f_10 = vParam1.x;
	uParam0->f_9 = vParam1.y;
	uParam0->f_6 = { TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_9, 1) };
	func_15(&(uParam0->f_27), uParam0->f_6);
	func_16(*uParam0, uParam0->f_1);
}

int func_2()
{
	return Global_1572887->f_13;
}

struct<2> func_3(int iParam0)
{
	return *(Global_1900718->f_1[iParam0 /*2*/]);
}

int func_4(var uParam0, var uParam1)
{
	return uParam0;
}

void func_5(var uParam0)
{
	func_17(&(uParam0->f_14), 1, 1);
	func_18(uParam0);
	func_19(uParam0->f_6);
	func_20(*uParam0, uParam0->f_1, 1);
	func_21(*uParam0, uParam0->f_1, 1);
	func_21(*uParam0, uParam0->f_1, 32);
	func_22();
	func_23();
	func_24(&(uParam0->f_27));
	func_25(0);
	func_26(&(uParam0->f_27));
	if (!func_9(uParam0, 4))
	{
		SCRIPTS::_0xE7282390542F570D(uParam0->f_10);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_6(var uParam0)
{
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		func_5(uParam0);
		return 0;
	}
	return 1;
}

int func_7()
{
	return 0;
}

int func_8(var uParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (func_9(uParam0, 32))
	{
		if ((MISC::GET_FRAME_COUNT() % 5) == 0 && func_27(Global_34, uParam0->f_6, 3f, 1, 1))
		{
			if (!func_28(uParam0))
			{
				func_16(*uParam0, uParam0->f_1);
				((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_2 = uParam0->f_1;
			}
		}
	}
	if (func_29(uParam0) < 10)
	{
		if (func_30(*uParam0) && func_28(uParam0))
		{
			func_31(uParam0, 11);
			if (func_32(uParam0->f_14))
			{
				func_17(&(uParam0->f_14), 1, 1);
			}
			func_23();
		}
	}
	bVar1 = (func_29(uParam0) <= 6 && !func_33(uParam0->f_14, 1));
	bVar2 = !func_9(uParam0, 32);
	if (func_34(func_9(uParam0, 2)))
	{
		if (func_9(uParam0, 2))
		{
			func_35(uParam0->f_14, uParam0->f_6);
		}
		else
		{
			func_36(&(uParam0->f_27), uParam0->f_6, bVar1, bVar2, 1);
		}
	}
	func_37(uParam0->f_14);
	func_38(uParam0->f_6, *uParam0, uParam0->f_1, 1092616192 /* Float: 10f */);
	switch (func_29(uParam0))
	{
		case 0:
			STREAMING::REQUEST_MODEL(-1456904552, false);
			if (func_9(uParam0, 1))
			{
				STREAMING::REQUEST_MODEL(uParam0->f_21, false);
			}
			func_39(&(uParam0->f_27.f_7), uParam0->f_6, 1.5f, 1, 319, 0);
			if (func_9(uParam0, 32))
			{
				func_31(uParam0, 1);
			}
			else if (!func_40(uParam0->f_6))
			{
				func_31(uParam0, 12);
			}
			else
			{
				func_31(uParam0, 1);
			}
			break;
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(-1456904552))
			{
				if (func_9(uParam0, 1))
				{
					if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_21))
					{
						return 0;
					}
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_20))
					{
						uParam0->f_20 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_21, uParam0->f_6, true, true, false, true);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_20))
					{
						return 0;
					}
					if (!MISC::GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(uParam0->f_6 + Vector(1f, 0f, 0f), &(uParam0->f_26), &(uParam0->f_23)))
					{
						return 0;
					}
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_20))
					{
						ENTITY::SET_ENTITY_ROTATION(uParam0->f_20, func_41(uParam0->f_23, 0), 2, true);
					}
				}
				func_31(uParam0, 2);
			}
			break;
		case 2:
			if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_11))
			{
				uParam0->f_11 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_12, 64, uParam0->f_13, true, true);
			}
			if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_11))
			{
				return 0;
			}
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_11);
			func_31(uParam0, 3);
			break;
		case 3:
			if (ANIMSCENE::_0x477122B8D05E7968(uParam0->f_11, 1, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_11, uParam0->f_6, 0f, 0f, 0f, 2);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_11, "player", PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0);
				if (func_9(uParam0, 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_20))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_11, "MOUND", uParam0->f_20, 0);
					}
				}
				func_31(uParam0, 4);
			}
			break;
		case 4:
			if (func_34(func_9(uParam0, 2)))
			{
				if (func_9(uParam0, 1))
				{
					func_42(uParam0->f_20, uParam0->f_20, 0);
					MAP::_0x7563CBCA99253D1A(uParam0->f_20, 187984275);
					func_31(uParam0, 5);
				}
				else
				{
					func_31(uParam0, 5);
				}
			}
			break;
		case 5:
			if (func_43(uParam0, 1097859072 /* Float: 15f */))
			{
				if (!func_32(uParam0->f_14))
				{
					uParam0->f_14 = func_44("UC_CLT_DIG", joaat("INPUT_CONTEXT_X"), uParam0->f_6, 1070386381 /* Float: 1.6f */, 3, 1, 0, 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
				}
				func_31(uParam0, 6);
			}
			break;
		case 6:
			if (func_32(uParam0->f_14))
			{
				if (Global_1099294->f_331)
				{
					if (func_45(uParam0->f_14, 0))
					{
						func_46(uParam0->f_14, 0, 1, 1);
					}
				}
				else if (!func_45(uParam0->f_14, 0))
				{
					func_46(uParam0->f_14, 1, 1, 1);
				}
				if (!func_9(uParam0, 32))
				{
					func_47(uParam0->f_14, &(uParam0->f_27.f_6));
				}
				if (func_48(uParam0->f_14, 1))
				{
					if (func_49(*uParam0, uParam0->f_1, 32))
					{
						func_25(1);
						if (PED::IS_PED_ON_MOUNT(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
						{
							TASK::TASK_DISMOUNT_ANIMAL(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 0, 0, 0, 0);
						}
						func_17(&(uParam0->f_14), 1, 1);
						func_50(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()));
						WEAPON::_0xFCCC886EDE3C63EC(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 2, 0);
						func_21(*uParam0, uParam0->f_1, 32);
						func_31(uParam0, 7);
					}
				}
				else if (func_28(uParam0))
				{
					if (func_51(uParam0->f_14, 1) > 0f)
					{
						func_53(func_52(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_6, 1));
					}
					else if (func_51(uParam0->f_14, 1) == 0f)
					{
						func_23();
					}
				}
			}
			break;
		case 7:
			if (((func_54(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 1, 0) == joaat("weapon_unarmed") && func_54(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1, 1, 0) == joaat("weapon_unarmed")) && !PED::IS_PED_ON_MOUNT(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()))) && !PED::_IS_PED_CARRYING(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
			{
				func_18(uParam0);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_11, uParam0->f_6, 0f, 0f, func_55(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true, false), uParam0->f_6, 1), 2);
				func_31(uParam0, 8);
			}
			break;
		case 8:
			func_56();
			TASK::TASK_ENTER_ANIM_SCENE(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_11, "player", uParam0->f_13, 1069379748, 1, 128, 20000, -1082130432);
			func_31(uParam0, 9);
			break;
		case 9:
			if (ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_11, 0))
			{
				func_31(uParam0, 10);
			}
			break;
		case 10:
			if (ANIMSCENE::_0xD8254CB2C586412B(uParam0->f_11, 0) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_11, 0))
			{
				if (!func_57(uParam0))
				{
					return 0;
				}
				func_58(uParam0->f_9);
				func_59(func_9(uParam0, 1), func_9(uParam0, 2));
				func_25(0);
				func_26(&(uParam0->f_27));
				func_19(uParam0->f_6);
				func_58(uParam0->f_9);
				func_23();
				if (func_9(uParam0, 2) && func_9(uParam0, 32))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), -862059856, false, 0, false, false);
				}
				func_31(uParam0, 12);
			}
			break;
		case 11:
			if (func_60())
			{
			}
			if (func_49(*uParam0, uParam0->f_1, 1))
			{
				if (!func_30(*uParam0))
				{
					if (func_9(uParam0, 4))
					{
						iVar0 = func_61();
						if (!func_62(iVar0, 0))
						{
							return 0;
						}
						uParam0->f_5 = iVar0;
						uParam0->f_22 = func_63(uParam0->f_5);
						if (!func_9(uParam0, 8))
						{
							func_10(uParam0, 8);
						}
					}
					func_31(uParam0, 4);
					func_21(*uParam0, uParam0->f_1, 1);
				}
			}
			break;
	}
	return 0;
}

bool func_9(var uParam0, int iParam1)
{
	return func_64(uParam0->f_15, iParam1);
}

void func_10(var uParam0, int iParam1)
{
	if (!func_64(uParam0->f_15, iParam1))
	{
		func_65(&(uParam0->f_15), iParam1);
	}
}

int func_11(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
			iVar0 = -1160940577;
			break;
		case 2:
			iVar0 = -1160940577;
			break;
		case 3:
			iVar0 = -1160940577;
			break;
		case 4:
			iVar0 = -1160940577;
			break;
		case 5:
			iVar0 = -1160940577;
			break;
		case 6:
			iVar0 = -1160940577;
			break;
		case 7:
			iVar0 = -1160940577;
			break;
		case 8:
			iVar0 = -599228492;
			break;
		case 9:
			iVar0 = -599228492;
			break;
		case 10:
			iVar0 = -1160940577;
			break;
		case 11:
			iVar0 = -1160940577;
			break;
		case 12:
			iVar0 = -1160940577;
			break;
		case 13:
			iVar0 = -1160940577;
			break;
		case 14:
			iVar0 = -599228492;
			break;
		case 15:
			iVar0 = -1160940577;
			break;
		case 16:
			iVar0 = -1160940577;
			break;
		case 17:
			iVar0 = -1160940577;
			break;
		case 18:
			iVar0 = 1627076851;
			break;
		case 19:
			iVar0 = -1160940577;
			break;
		case 20:
			iVar0 = -1160940577;
			break;
		case 21:
			iVar0 = -672936509;
			break;
		case 22:
			iVar0 = -1160940577;
			break;
		case 23:
			iVar0 = -1160940577;
			break;
		case 24:
			iVar0 = -1160940577;
			break;
		case 25:
			iVar0 = -1160940577;
			break;
		case 26:
			iVar0 = -1996174505;
			break;
		case 27:
			iVar0 = 1627076851;
			break;
		case 28:
			iVar0 = -672936509;
			break;
		case 29:
			iVar0 = 2129417429;
			break;
		case 30:
			iVar0 = -1937147713;
			break;
		case 31:
			iVar0 = -1937147713;
			break;
		case 32:
			iVar0 = 1627076851;
			break;
		case 33:
			iVar0 = -1160940577;
			break;
		case 34:
			iVar0 = 1627076851;
			break;
		case 35:
			iVar0 = 2129417429;
			break;
		case 36:
			iVar0 = -397099226;
			break;
		case 37:
			iVar0 = 1465650316;
			break;
		case 38:
			iVar0 = 1465650316;
			break;
		case 39:
			iVar0 = 2129417429;
			break;
		case 40:
			iVar0 = -1996174505;
			break;
		case 41:
			iVar0 = 2129417429;
			break;
		case 42:
			iVar0 = 1627076851;
			break;
		case 43:
			iVar0 = 1627076851;
			break;
		case 44:
			iVar0 = -1996174505;
			break;
		case 45:
			iVar0 = -1996174505;
			break;
		case 46:
			iVar0 = 1627076851;
			break;
		case 47:
			iVar0 = 1627076851;
			break;
		case 48:
			iVar0 = -1160940577;
			break;
		case 49:
			iVar0 = -1160940577;
			break;
		case 50:
			iVar0 = -672936509;
			break;
	}
	return iVar0;
}

int func_12(struct<2> Param0, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar2 = Param0.f_1;
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar2))
	{
		iVar1 = BUILTIN::ROUND(TASK::_0x6718F40313A2B5A6(iVar2));
		iVar0 = BUILTIN::ROUND(TASK::_GET_SCENARIO_POINT_HEADING(iVar2, 1));
		bVar3 = iVar0 == 99;
		if (func_9(uParam3, 4))
		{
			iVar1 = ((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_2;
		}
		else if (bVar3)
		{
			func_10(uParam3, 32);
		}
		((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_2 = iVar1;
	}
	switch (iVar1)
	{
		case 1:
			return 0;
		case 2:
			return 1;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 7:
			return 6;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
		case 13:
			return 12;
		case 14:
			return 13;
		case 15:
			return 14;
		case 16:
			return 15;
		case 17:
			return 16;
		case 18:
			return 17;
		case 19:
			return 18;
		case 20:
			return 19;
		case 21:
			return 20;
		case 22:
			return 21;
		case 23:
			return 22;
		case 24:
			return 23;
		case 25:
			return 24;
		case 26:
			return 25;
		case 27:
			return 26;
		case 28:
			return 27;
		case 29:
			return 28;
		case 30:
			return 29;
		case 31:
			return 30;
		case 32:
			return 31;
		case 33:
			return 32;
		case 34:
			return 33;
		case 35:
			return 34;
		case 36:
			return 35;
		case 37:
			return 36;
		case 38:
			return 37;
		case 39:
			return 38;
		case 40:
			return 39;
		case 41:
			return 40;
		case 42:
			return 41;
		case 43:
			return 42;
		case 44:
			return 43;
		case 45:
			return 44;
		case 46:
			return 45;
		case 47:
			return 46;
		case 48:
			return 47;
		case 49:
			return 48;
		case 50:
			return 49;
		case 51:
			return 50;
		case 52:
			return 51;
		case 53:
			return 52;
		case 54:
			return 53;
		case 55:
			return 54;
		case 56:
			return 55;
		case 57:
			return 56;
		case 58:
			return 57;
		case 59:
			return 58;
		case 60:
			return 59;
		case 61:
			return 60;
		case 62:
			return 61;
		case 63:
			return 62;
		case 64:
			return 63;
		case 65:
			return 64;
		case 66:
			return 65;
		case 67:
			return 66;
		case 68:
			return 67;
		case 69:
			return 68;
		case 70:
			return 69;
		case 71:
			return 70;
		case 72:
			return 71;
		case 73:
			return 72;
		case 74:
			return 73;
		case 75:
			return 74;
		case 76:
			return 75;
		case 77:
			return 76;
		case 78:
			return 77;
		case 79:
			return 78;
		case 80:
			return 79;
		case 81:
			return 80;
		case 82:
			return 81;
		case 83:
			return 82;
		case 84:
			return 83;
		case 85:
			return 84;
		case 86:
			return 85;
		case 87:
			return 86;
		case 88:
			return 87;
		case 89:
			return 88;
		case 90:
			return 89;
		default:
			break;
	}
	return 0;
}

int func_13(var uParam0)
{
	int iVar0;

	switch (uParam0->f_1)
	{
		case 0:
		case 1:
		case 2:
		case 45:
		case 46:
		case 47:
			iVar0 = -2132348472;
			break;
		case 3:
		case 4:
		case 5:
		case 48:
		case 49:
		case 50:
			iVar0 = -1400928817;
			break;
		case 6:
		case 7:
		case 8:
		case 51:
		case 52:
		case 53:
			iVar0 = 1524848772;
			break;
		case 9:
		case 10:
		case 11:
		case 54:
		case 55:
		case 56:
			iVar0 = -1843094784;
			break;
		case 12:
		case 13:
		case 14:
		case 57:
		case 58:
		case 59:
			iVar0 = -71915978;
			break;
		case 15:
		case 16:
		case 17:
		case 60:
		case 61:
		case 62:
			iVar0 = 1531432272;
			break;
		case 18:
		case 19:
		case 20:
		case 63:
		case 64:
		case 65:
			iVar0 = -2063569423;
			break;
		case 21:
		case 22:
		case 23:
		case 66:
		case 67:
		case 68:
			iVar0 = -1787268311;
			break;
		case 24:
		case 25:
		case 26:
		case 69:
		case 70:
		case 71:
			iVar0 = -1914323519;
			break;
		case 27:
		case 28:
		case 29:
		case 72:
		case 73:
		case 74:
			iVar0 = 1659722492;
			break;
		case 30:
		case 31:
		case 32:
		case 75:
		case 76:
		case 77:
			iVar0 = 897707862;
			break;
		case 33:
		case 34:
		case 35:
		case 78:
		case 79:
		case 80:
			iVar0 = 1789589305;
			break;
		case 36:
		case 37:
		case 38:
		case 81:
		case 82:
		case 83:
			iVar0 = -1678406212;
			break;
		case 39:
		case 40:
		case 41:
		case 84:
		case 85:
		case 86:
			iVar0 = -702109507;
			break;
		case 42:
		case 43:
		case 44:
		case 87:
		case 88:
		case 89:
			iVar0 = 395137059;
			break;
	}
	return iVar0;
}

int func_14(int iParam0)
{
	switch (iParam0)
	{
		case -135773962:
			return -250719930 /* GXTEntry: "Agate Arrowhead" */;
		case 1711174319:
			return -1866466055 /* GXTEntry: "Bone Arrowhead" */;
		case -1388841754:
			return 1546533744 /* GXTEntry: "Chipped Arrowhead" */;
		case 1833116882:
			return 1063947084 /* GXTEntry: "Crude Arrowhead" */;
		case 1732356987:
			return 1570512815 /* GXTEntry: "Feldspar Arrowhead" */;
		case 1365678051:
			return -909283963 /* GXTEntry: "Flint Arrowhead" */;
		case -469808552:
			return -1604348319 /* GXTEntry: "Obsidian Arrowhead" */;
		case 651832873:
			return -965972353 /* GXTEntry: "Quartz Arrowhead" */;
		case -1338236715:
			return -1850613113 /* GXTEntry: "Raw Arrowhead" */;
		case -1459382417:
			return 261854063 /* GXTEntry: "Rough Arrowhead" */;
		case -1980587442:
			return -2023776602 /* GXTEntry: "Slate Arrowhead" */;
		case -305847860:
			return 751981376 /* GXTEntry: "Splintered Arrowhead" */;
		case -1132845243:
			return -753628968 /* GXTEntry: "Boar Bristle Brush" */;
		case 1606281828:
			return 1006600695 /* GXTEntry: "Ebony Hairbrush" */;
		case 530382704:
			return 1742487931 /* GXTEntry: "Goat Hair Brush" */;
		case -1519010704:
			return -1631158895 /* GXTEntry: "Horse Hair Brush" */;
		case 520232109:
			return -1888442693 /* GXTEntry: "Rosewood Hairbrush" */;
		case -364070233:
			return -27315089 /* GXTEntry: "New Guinea Rosewood Hairbrush" */;
		case -1296260337:
			return 1416504149 /* GXTEntry: "Boxwood Comb" */;
		case 127681874:
			return 249916796 /* GXTEntry: "Cherrywood Comb" */;
		case 1290286961:
			return -1763726091 /* GXTEntry: "Ivory Comb" */;
		case 1628530735:
			return -1868057871 /* GXTEntry: "Tortoiseshell Comb" */;
		case 530930425:
			return 1979910825 /* GXTEntry: "Ebony Hairpin" */;
		case -581360339:
			return -2058309720 /* GXTEntry: "Ivory Hairpin" */;
		case -649069078:
			return 147602269 /* GXTEntry: "Jade Hairpin" */;
		case -180052139:
			return 1204853609 /* GXTEntry: "Metal Hairpin" */;
		case -1597269158:
			return 1217599018 /* GXTEntry: "Carved Wooden Hairpin" */;
		case -77692146:
			return 686159610 /* GXTEntry: "Braxton Amethyst Necklace" */;
		case -2098248158:
			return -526980287 /* GXTEntry: "Tuamotu Pearl Necklace" */;
		case 544784227:
			return -523530337 /* GXTEntry: "Elliston Carved Bracelet" */;
		case -1750110910:
			return -162108183 /* GXTEntry: "Emmeline Coral Earrings" */;
		case -373311654:
			return 49516917 /* GXTEntry: "Harland Coral Ring" */;
		case 309566985:
			return 308818593 /* GXTEntry: "Abello Ruby Bangle Bracelet" */;
		case -115477556:
			return -1324394408 /* GXTEntry: "Endicott Diamond Earrings" */;
		case -1845614766:
			return 324548078 /* GXTEntry: "Ursula Citrine Earrings" */;
		case 1216475110:
			return 1466045897 /* GXTEntry: "Sterling Tooth Earrings" */;
		case -901049146:
			return -1370882316 /* GXTEntry: "Duchess Emerald Earrings" */;
		case -1479457955:
			return -836035669 /* GXTEntry: "Bosque Emerald Ring" */;
		case -256638116:
			return -1893135121 /* GXTEntry: "Beaulieux Diamond Ring" */;
		case -1298419407:
			return 600432608 /* GXTEntry: "Ojeda Rose Gold Bangle Bracelet" */;
		case -883489996:
			return 575547207 /* GXTEntry: "Ainsworth Cross Necklace" */;
		case 1357570735:
			return -1579131656 /* GXTEntry: "Rou Pearl Necklace" */;
		case -330620837:
			return -939330110 /* GXTEntry: "Gosselin White Gold Necklace" */;
		case -599044012:
			return -313250059 /* GXTEntry: "Hajnal Garnet Bangle Bracelet" */;
		case 1465764690:
			return -1804185681 /* GXTEntry: "Harford Garnet Earrings" */;
		case -1914990977:
			return 319991179 /* GXTEntry: "Pilgrim Moonstone Ring" */;
		case 527426268:
			return 456059252 /* GXTEntry: "Pelle Pearl Necklace" */;
		case 700547967:
			return -1430911710 /* GXTEntry: "Aubrey Onyx Ring" */;
		case -1434735180:
			return 1645128206 /* GXTEntry: "Durant Pearl Bracelet" */;
		case 604651083:
			return -644738616 /* GXTEntry: "Josephine Pearl Earrings" */;
		case 371926572:
			return 391412462 /* GXTEntry: "Bonnard Pearl Ring" */;
		case -253293041:
			return 289416445 /* GXTEntry: "Magnate Turquoise Ring" */;
		case 536987249:
			return 61850108 /* GXTEntry: "Blakely Miniature Necklace" */;
		case -1538719578:
			return 333760707 /* GXTEntry: "Royal Victoria Diamond Earrings" */;
		case -1949131163:
			return -1350438989 /* GXTEntry: "Beauchêne Ruby Earrings" */;
		case 967176349:
			return 205445966 /* GXTEntry: "Richelieu Amethyst Necklace" */;
		case 574670748:
			return 1107778901 /* GXTEntry: "Helena Sapphire Bracelet" */;
		case -605903845:
			return 232063688 /* GXTEntry: "Greco Sapphire Bracelet" */;
		case -32321552:
			return -888745206 /* GXTEntry: "Dane Topaz Necklace" */;
		case 1904567340:
			return 1926912008 /* GXTEntry: "Banais Topaz Ring" */;
		case -834041111:
			return 996250359 /* GXTEntry: "Calumet Turquoise Earrings" */;
		case 726047816:
			return -1523419995 /* GXTEntry: "Infanta Turquoise Bracelet" */;
		case -37487183:
			return -209370662 /* GXTEntry: "Thorburn Turquoise Ring" */;
		case 2079959006:
			return 1289018795 /* GXTEntry: "Orchidee Diamond Earrings" */;
		case -1647261494:
			return -288598209 /* GXTEntry: "Sackville Diamond Ring" */;
		case 746055788:
			return -1461195441 /* GXTEntry: "Yates Diamond Ring" */;
		case -2132348472:
			return 1496994240 /* GXTEntry: "1700 New Yorke Token" */;
		case 1531432272:
			return 1030821510 /* GXTEntry: "1787 One Cent Token" */;
		case -1678406212:
			return -329116887 /* GXTEntry: "1789 Penny" */;
		case -71915978:
			return -753018368 /* GXTEntry: "1792 Liberty Quarter" */;
		case 1789589305:
			return -1884965711 /* GXTEntry: "1792 Nickel" */;
		case 897707862:
			return -753018368 /* GXTEntry: "1792 Liberty Quarter" */;
		case -1787268311:
			return 1328162258 /* GXTEntry: "1794 Silver Dollar" */;
		case 395137059:
			return -1841900790 /* GXTEntry: "1795 Half Eagle" */;
		case -702109507:
			return -1867083042 /* GXTEntry: "1796 Halfpenny" */;
		case -1843094784:
			return -1323673307 /* GXTEntry: "1797 Gold Eagle" */;
		case 1659722492:
			return 442429651 /* GXTEntry: "1798 Draped Bust Silver Dollar" */;
		case -2063569423:
			return 1640145676 /* GXTEntry: "1800 Five Dollar Bechtler" */;
		case -1400928817:
			return -1982102297 /* GXTEntry: "1800 Gold Dollar" */;
		case 1524848772:
			return 285783511 /* GXTEntry: "1800 Gold Quarter" */;
		case -1914323519:
			return -625323392 /* GXTEntry: "1800 Half Dime" */;
		case 521036731:
			return -1513842258 /* GXTEntry: "Condor Egg" */;
		case 1510925660:
			return -1117423291 /* GXTEntry: "Duck Egg" */;
		case -1667316569:
			return 742074887 /* GXTEntry: "Eagle Egg" */;
		case 875971115:
			return -1232280687 /* GXTEntry: "Egret Egg" */;
		case -1390165137:
			return -158375659 /* GXTEntry: "Goose Egg" */;
		case 512666633:
			return 2060029625 /* GXTEntry: "Hawk Egg" */;
		case 1056235591:
			return 322658308 /* GXTEntry: "Heron Egg" */;
		case 1824947548:
			return 410290576 /* GXTEntry: "Loon Egg" */;
		case -297415734:
			return 229697410 /* GXTEntry: "Spoonbill Egg" */;
		case -744964659:
			return 1053249385 /* GXTEntry: "Vulture Egg" */;
		default:
			break;
	}
	return 0;
}

void func_15(var uParam0, vector3 vParam1)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_8))
	{
		uParam0->f_8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, 0f, 0f, 0f, 2f, 2f, 2f, "colleactable restriction volume");
		POPULATION::_0xB56D41A694E42E86(uParam0->f_8, 6, 0, 0, -1, -1, 0);
	}
}

void func_16(var uParam0, var uParam1)
{
	((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_1 = uParam0;
}

void func_17(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_32(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_66(*uParam0);
	if (((*Global_1949759)[iVar0 /*23*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_67(iVar0);
	*uParam0 = 0;
}

void func_18(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_20))
	{
		func_68(uParam0->f_20, uParam0->f_20, 0);
	}
}

void func_19(vector3 vParam0)
{
	if (func_69(*Global_1201104, vParam0))
	{
		*Global_1201104 = { 0f, 0f, 0f };
	}
}

void func_20(var uParam0, var uParam1, bool bParam2)
{
	var uVar0;
	struct<7> Var1;
	struct<19> Var8;

	if (!NETWORK::HAS_NETWORK_TIME_STARTED())
	{
		return;
	}
	uVar0 = func_70(1, 8);
	SCRIPTS::_0xD426E2E3288469D6(&uVar0, PLAYER::PLAYER_ID());
	Var1.f_4 = 1;
	Var1 = 40;
	Var1.f_4 = bParam2;
	Var1.f_5 = uParam0;
	Var1.f_6 = uParam1;
	Var1.f_1 = PLAYER::GET_PLAYER_INDEX();
	if (bParam2)
	{
		Var8.f_12 = -1;
		Var8.f_12.f_1 = -1;
		Var8.f_14 = 255;
		Var8.f_15 = 255;
		Var8.f_14 = &Global_1275573->f_154[&Global_1275573];
		Var8 = 0;
		Var8.f_1 = PLAYER::GET_PLAYER_INDEX();
		Var8.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Var8.f_4 = 103;
		func_72(Var8, func_71(Global_35, 0f, 0f, 0f, 300f, 300f, 300f, -432403087, 0, 8), 0, 0);
	}
	func_73(&Var1, &uVar0);
}

void func_21(int iParam0, int iParam1, int iParam2)
{
	func_74((*(*Global_1201108)[iParam0 /*1909*/])[iParam1 /*9*/], iParam2);
}

void func_22()
{
	((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_1 = -1;
	((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_2 = -1;
	((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_8 = -1f;
	((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_4 = 0;
}

void func_23()
{
	if (((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_4)
	{
		((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_4 = 0;
		((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_5 = 0;
		((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_8 = -1f;
	}
}

void func_24(var uParam0)
{
	func_75(uParam0);
	func_76(&(uParam0->f_7), 1);
}

void func_25(bool bParam0)
{
	if (bParam0)
	{
		func_77(0, 6);
	}
	else
	{
		func_78(0, 6, 0);
	}
}

void func_26(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_8))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_8);
	}
}

int func_27(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_79(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return 1;
	}
	return 0;
}

bool func_28(var uParam0)
{
	if (!func_9(uParam0, 32))
	{
		return ((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_1 == *uParam0;
	}
	return (((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_1 == *uParam0 && ((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_2 == uParam0->f_1);
}

int func_29(var uParam0)
{
	return uParam0->f_2;
}

int func_30(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	fVar2 = -1f;
	iVar4 = PLAYER::PLAYER_ID();
	if (((*Global_1200815)[iVar4 /*9*/])->f_1 != iParam0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (!NETWORK::_0x255A5EF65EDA9167(iVar1))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
		}
		else
		{
			iVar5 = iVar1;
			if (((*Global_1200815)[iVar5 /*9*/])->f_1 == ((*Global_1200815)[iVar4 /*9*/])->f_1)
			{
				if (((*Global_1200815)[iVar5 /*9*/])->f_2 == ((*Global_1200815)[iVar4 /*9*/])->f_2)
				{
					if (((*Global_1200815)[iVar5 /*9*/])->f_4)
					{
						if (fVar2 == -1f || fVar2 >= ((*Global_1200815)[iVar5 /*9*/])->f_8)
						{
							fVar2 = ((*Global_1200815)[iVar5 /*9*/])->f_8;
							iVar3 = iVar5;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > 0f)
	{
		if (&Global_1275573->f_154[&Global_1275573] != &Global_1275573->f_154[iVar3])
		{
			if (!func_64((*Global_1201108)[((*Global_1200815)[iVar4 /*9*/])->f_1 /*1909*/][((*Global_1200815)[iVar4 /*9*/])->f_2 /*9*/], 1))
			{
				func_65((*(*Global_1201108)[((*Global_1200815)[iVar4 /*9*/])->f_1 /*1909*/])[((*Global_1200815)[iVar4 /*9*/])->f_2 /*9*/], 1);
			}
			return 1;
		}
		if (!func_64((*Global_1201108)[((*Global_1200815)[iVar4 /*9*/])->f_1 /*1909*/][((*Global_1200815)[iVar4 /*9*/])->f_2 /*9*/], 32))
		{
			func_65((*(*Global_1201108)[((*Global_1200815)[iVar4 /*9*/])->f_1 /*1909*/])[((*Global_1200815)[iVar4 /*9*/])->f_2 /*9*/], 32);
		}
	}
	return 0;
}

void func_31(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

bool func_32(int iParam0)
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

bool func_33(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_32(iParam0))
	{
		return false;
	}
	iVar0 = func_66(iParam0);
	return HUD::_UIPROMPT_IS_ACTIVE(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

int func_34(bool bParam0)
{
	if (func_80(85134332 /* GXTEntry: "Pennington Field Shovel" */, 1))
	{
		if (bParam0)
		{
			if (func_80(-862059856 /* GXTEntry: "Metal Detector" */, 1))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_35(var uParam0, vector3 vParam1)
{
	if (!func_40(vParam1))
	{
		func_19(vParam1);
		return;
	}
	if (func_81(*Global_1201104))
	{
		*Global_1201104 = { vParam1 };
	}
	else if (!func_69(*Global_1201104, vParam1))
	{
		if (BUILTIN::VDIST2(Global_35, vParam1) < BUILTIN::VDIST2(Global_35, *Global_1201104))
		{
			*Global_1201104 = { vParam1 };
		}
	}
}

void func_36(var uParam0, vector3 vParam1, bool bParam4, bool bParam5, int iParam6)
{
	bool bVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;

	if (!func_80(-1733092640 /* GXTEntry: "Collector\'s Bag" */, 1))
	{
		return;
	}
	if (func_82(0))
	{
		return;
	}
	if (func_83())
	{
		return;
	}
	if (&Global_1048576)
	{
		return;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		return;
	}
	if (TASK::_0xEC7E480FF8BD0BED(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		return;
	}
	if (!bParam4 && uParam0->f_1 == 0)
	{
		return;
	}
	if (!func_81(*Global_1201104) && MISC::GET_DISTANCE_BETWEEN_COORDS(*Global_1201104, vParam1, true) <= 5f)
	{
		bVar0 = true;
	}
	if (bVar0 && uParam0->f_1 == 0)
	{
		return;
	}
	fVar1 = func_52(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), vParam1, 1);
	fVar2 = 10f;
	fVar2 = (fVar2 * (1f + func_84()));
	switch (uParam0->f_1)
	{
		case 0:
			if (fVar1 < fVar2)
			{
				if (bParam5)
				{
					if (AUDIO::_0xD9130842D7226045("RDRO_Collectible_Sounds_Travelling_Saleswoman", 0))
					{
						uParam0->f_5 = AUDIO::GET_SOUND_ID();
						if (func_54(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 1, 0) != -862059856)
						{
							AUDIO::_0xDCF5BA95BBF0FABA(uParam0->f_5, "collectible_lure", vParam1, "RDRO_Collectible_Sounds_Travelling_Saleswoman", 0, 0, iParam6);
						}
						func_85(uParam0, 1);
					}
				}
				else
				{
					func_85(uParam0, 1);
				}
			}
			break;
		case 1:
			iVar3 = BUILTIN::FLOOR((500f * ((fVar2 - fVar1) / fVar2)));
			iVar4 = BUILTIN::FLOOR((256f * ((fVar2 - fVar1) / fVar2)));
			if (iVar3 > 9999)
			{
				iVar3 = 9999;
			}
			PAD::SET_PAD_SHAKE(0, iVar3, iVar4);
			func_86(&(uParam0->f_2));
			func_85(uParam0, 2);
			break;
		case 2:
			if ((fVar1 >= (fVar2 + 5f) || !bParam4) || bVar0)
			{
				if (bParam5)
				{
					func_75(uParam0);
				}
				func_85(uParam0, 0);
			}
			else if (func_87(&(uParam0->f_2)) >= 2f)
			{
				func_85(uParam0, 1);
			}
			break;
	}
}

void func_37(int iParam0)
{
	if (func_32(iParam0))
	{
		if (func_45(iParam0, 0))
		{
			if (PED::_IS_PED_CARRYING(Global_1275573->f_8))
			{
				func_46(iParam0, 0, 1, 1);
			}
		}
		else if (!PED::_IS_PED_CARRYING(Global_1275573->f_8))
		{
			func_46(iParam0, 1, 1, 1);
		}
	}
}

void func_38(vector3 vParam0, int iParam3, int iParam4, float fParam5)
{
	if (func_52(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), vParam0, 1) < fParam5)
	{
		if (((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_1 != iParam3)
		{
			((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_1 = iParam3;
		}
		if (((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_2 != iParam4)
		{
			((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_2 = iParam4;
		}
	}
}

void func_39(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_88(uParam0))
	{
		*uParam0 = GRAPHICS::_0xFA50F79257745E74(vParam1, fParam4, iParam5, iParam6, iParam7);
		if (func_88(uParam0))
		{
		}
	}
}

bool func_40(vector3 vParam0)
{
	return !_NAMESPACE49::_0xB6E1A185C2B9319A(vParam0);
}

Vector3 func_41(vector3 vParam0, float fParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	vector3 vVar8;
	vector3 vVar11;
	float fVar14;

	vVar0 = { func_89(vParam0) };
	vVar3 = { func_91(func_91(vVar0, func_90((fParam3 - 90f))), vVar0) };
	fVar6 = MISC::ATAN2(vVar3.y, vVar3.x);
	fVar7 = -MISC::ATAN2(vVar3.z, BUILTIN::SQRT(((vVar3.x * vVar3.x) + (vVar3.y * vVar3.y))));
	vVar8 = { -vVar3.y, vVar3.x, 0f };
	vVar11 = { func_91(vVar8, vVar3) };
	fVar14 = (MISC::ATAN2((func_92(vVar8, vVar0) / BUILTIN::VMAG(vVar8)), (func_92(vVar11, vVar0) / BUILTIN::VMAG(vVar11))) + 180f);
	return fVar14, fVar7, fVar6;
}

int func_42(int iParam0, var uParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(Global_1276326->f_31))
	{
		Global_1276326->f_31 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (!ITEMSET::IS_IN_ITEMSET(iParam0, Global_1276326->f_31))
	{
		ITEMSET::ADD_TO_ITEMSET(iParam0, Global_1276326->f_31);
	}
	if (!func_93(iParam0))
	{
		PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), iParam0, 0);
		PLAYER::_0x6ECFC621A168424C(iParam0, uParam1, iParam2);
		PLAYER::_0x907B16B3834C69E2(iParam0, 500f);
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_1276326[iVar0 /*2*/]))
		{
			(*Global_1276326)[iVar0 /*2*/] = iParam0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_43(var uParam0, float fParam1)
{
	if (func_80(85134332 /* GXTEntry: "Pennington Field Shovel" */, 1))
	{
		if (Global_1099294->f_331)
		{
			return 0;
		}
		if (func_52(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_6, 1) > fParam1)
		{
			return 0;
		}
		if (func_94(uParam0->f_5))
		{
			return 0;
		}
		if (func_9(uParam0, 4))
		{
			if ((func_9(uParam0, 2) && func_9(uParam0, 1)) && func_52(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_6, 1) <= 1.6f)
			{
				return 1;
			}
		}
		if (func_9(uParam0, 2))
		{
			if (func_54(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 1, 0) == -862059856 && func_52(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_6, 1) <= 1.6f)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_44(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
	{
		return 0;
	}
	if (func_81(vParam2))
	{
		return 0;
	}
	if (fParam5 <= 0f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_95(iVar0, 2))
		{
			if (func_96(vParam2, ((*Global_1949759)[iVar0 /*23*/])->f_6, 0.01f, 1) && iParam1 == ((*Global_1949759)[iVar0 /*23*/])->f_4)
			{
				iVar2 = iVar0;
				return iVar2;
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
		func_97(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216 /* Float: 1f */, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

bool func_45(int iParam0, bool bParam1)
{
	if (bParam1 && !func_32(iParam0))
	{
		return false;
	}
	return !func_95(iParam0, 4);
}

void func_46(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_32(iParam0))
	{
		return;
	}
	iVar0 = func_66(iParam0);
	if (bParam1)
	{
		func_98(iParam0, 4);
		if (bParam3)
		{
			func_99(iVar0, 1);
		}
		func_100(iVar0, 1);
	}
	else
	{
		func_101(iParam0, 4);
		func_100(iVar0, 0);
	}
}

void func_47(int iParam0, var uParam1)
{
	if (AUDIO::_0xD9130842D7226045("RDRO_Collectible_Sounds_Travelling_Saleswoman", 0))
	{
		if (func_33(iParam0, 1))
		{
			if (!*uParam1)
			{
				AUDIO::PLAY_SOUND_FRONTEND("collectible_found", "RDRO_Collectible_Sounds_Travelling_Saleswoman", true, 0);
				*uParam1 = 1;
			}
		}
		else if (*uParam1)
		{
			*uParam1 = 0;
		}
	}
}

bool func_48(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_32(iParam0))
	{
		return false;
	}
	iVar0 = func_66(iParam0);
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

bool func_49(int iParam0, int iParam1, int iParam2)
{
	return func_64((*Global_1201108)[iParam0 /*1909*/][iParam1 /*9*/], iParam2);
}

void func_50(int iParam0)
{
	int iVar0;

	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iParam0);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0)) && ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			PED::_0xED00D72F81CF7278(iVar0, 0, 0);
		}
	}
}

float func_51(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_32(iParam0))
	{
		return 0f;
	}
	iVar0 = func_66(iParam0);
	if (HUD::_UIPROMPT_HAS_MASH_MODE(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return HUD::_UIPROMPT_GET_MASH_MODE_PROGRESS(((*Global_1949759)[iVar0 /*23*/])->f_3);
	}
	return HUD::_0x81801291806DBC50(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

float func_52(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_53(float fParam0)
{
	if (!((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_4)
	{
		((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_4 = 1;
		if (((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_8 < 0f)
		{
			((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_8 = fParam0;
		}
	}
}

int func_54(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

float func_55(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

void func_56()
{
	if (((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_4)
	{
		((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_5 = 1;
	}
}

int func_57(var uParam0)
{
	var uVar0;
	int iVar4;
	int iVar5;

	if (!func_9(uParam0, 8))
	{
		if (func_9(uParam0, 4))
		{
			((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_7 = 1;
			if (func_9(uParam0, 1))
			{
				uParam0->f_22 = -990197142;
			}
			else
			{
				uParam0->f_22 = -795783582;
			}
		}
	}
	while (!func_102(uParam0->f_22, &uVar0))
	{
		return 0;
	}
	iVar5 = func_14(uParam0->f_22);
	iVar4 = 0;
	while (iVar4 < Global_17172.f_2954.f_1)
	{
		if (iVar5 == (Global_17172.f_2954.f_1[iVar4 /*5*/])->f_4)
		{
			Global_17172.f_2954.f_1[iVar4 /*5*/] = 1;
		}
		iVar4++;
	}
	func_104(func_103(-1113216174, -445015182), 1);
	if (func_9(uParam0, 2))
	{
		func_104(func_103(-1113216174, 99337762), 1);
	}
	return 1;
}

void func_58(var uParam0)
{
	_NAMESPACE49::_0x8245C1F3262F4AC2(uParam0);
}

void func_59(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_105(-753305330, 0, 255, 0, 0);
	}
	else if (bParam0)
	{
		func_105(11389876, 0, 255, 0, 0);
	}
}

int func_60()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar2 = PLAYER::PLAYER_ID();
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (!NETWORK::_0x255A5EF65EDA9167(iVar1))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
		}
		else
		{
			iVar3 = iVar1;
			if (iVar3 != iVar2)
			{
				if (((*Global_1200815)[iVar3 /*9*/])->f_1 == ((*Global_1200815)[iVar2 /*9*/])->f_1)
				{
					if (((*Global_1200815)[iVar3 /*9*/])->f_2 == ((*Global_1200815)[iVar2 /*9*/])->f_2)
					{
						if (((*Global_1200815)[iVar3 /*9*/])->f_5)
						{
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_61()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar3 = PLAYER::PLAYER_ID();
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (!NETWORK::_0x255A5EF65EDA9167(iVar2))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
		}
		else
		{
			iVar4 = iVar2;
			if (iVar4 != iVar3)
			{
				if (((*Global_1200815)[iVar4 /*9*/])->f_1 == ((*Global_1200815)[iVar3 /*9*/])->f_1)
				{
					if (((*Global_1200815)[iVar4 /*9*/])->f_2 == ((*Global_1200815)[iVar3 /*9*/])->f_2)
					{
						if (((*Global_1200815)[iVar4 /*9*/])->f_6)
						{
							uVar1 = ((*Global_1200815)[iVar4 /*9*/])->f_3;
							return uVar1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return uVar1;
}

int func_62(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_63(int iParam0)
{
	switch (iParam0)
	{
		case -250719930: /* GXTEntry: "Agate Arrowhead" */
			return -135773962;
		case -1866466055: /* GXTEntry: "Bone Arrowhead" */
			return 1711174319;
		case 1546533744: /* GXTEntry: "Chipped Arrowhead" */
			return -1388841754;
		case 1063947084: /* GXTEntry: "Crude Arrowhead" */
			return 1833116882;
		case 1570512815: /* GXTEntry: "Feldspar Arrowhead" */
			return 1732356987;
		case -909283963: /* GXTEntry: "Flint Arrowhead" */
			return 1365678051;
		case -1604348319: /* GXTEntry: "Obsidian Arrowhead" */
			return -469808552;
		case -965972353: /* GXTEntry: "Quartz Arrowhead" */
			return 651832873;
		case -1850613113: /* GXTEntry: "Raw Arrowhead" */
			return -1338236715;
		case 261854063: /* GXTEntry: "Rough Arrowhead" */
			return -1459382417;
		case -2023776602: /* GXTEntry: "Slate Arrowhead" */
			return -1980587442;
		case 751981376: /* GXTEntry: "Splintered Arrowhead" */
			return -305847860;
		case -753628968: /* GXTEntry: "Boar Bristle Brush" */
			return -1132845243;
		case 1006600695: /* GXTEntry: "Ebony Hairbrush" */
			return 1606281828;
		case 1742487931: /* GXTEntry: "Goat Hair Brush" */
			return 530382704;
		case -1631158895: /* GXTEntry: "Horse Hair Brush" */
			return -1519010704;
		case -1888442693: /* GXTEntry: "Rosewood Hairbrush" */
			return 520232109;
		case -27315089: /* GXTEntry: "New Guinea Rosewood Hairbrush" */
			return -364070233;
		case 1416504149: /* GXTEntry: "Boxwood Comb" */
			return -1296260337;
		case 249916796: /* GXTEntry: "Cherrywood Comb" */
			return 127681874;
		case -1763726091: /* GXTEntry: "Ivory Comb" */
			return 1290286961;
		case -1868057871: /* GXTEntry: "Tortoiseshell Comb" */
			return 1628530735;
		case 1979910825: /* GXTEntry: "Ebony Hairpin" */
			return 530930425;
		case -2058309720: /* GXTEntry: "Ivory Hairpin" */
			return -581360339;
		case 147602269: /* GXTEntry: "Jade Hairpin" */
			return -649069078;
		case 1204853609: /* GXTEntry: "Metal Hairpin" */
			return -180052139;
		case 1217599018: /* GXTEntry: "Carved Wooden Hairpin" */
			return -1597269158;
		case 686159610: /* GXTEntry: "Braxton Amethyst Necklace" */
			return -77692146;
		case -526980287: /* GXTEntry: "Tuamotu Pearl Necklace" */
			return -2098248158;
		case -523530337: /* GXTEntry: "Elliston Carved Bracelet" */
			return 544784227;
		case -162108183: /* GXTEntry: "Emmeline Coral Earrings" */
			return -1750110910;
		case 49516917: /* GXTEntry: "Harland Coral Ring" */
			return -373311654;
		case 308818593: /* GXTEntry: "Abello Ruby Bangle Bracelet" */
			return 309566985;
		case -1324394408: /* GXTEntry: "Endicott Diamond Earrings" */
			return -115477556;
		case 324548078: /* GXTEntry: "Ursula Citrine Earrings" */
			return -1845614766;
		case 1466045897: /* GXTEntry: "Sterling Tooth Earrings" */
			return 1216475110;
		case -1370882316: /* GXTEntry: "Duchess Emerald Earrings" */
			return -901049146;
		case -836035669: /* GXTEntry: "Bosque Emerald Ring" */
			return -1479457955;
		case -1893135121: /* GXTEntry: "Beaulieux Diamond Ring" */
			return -256638116;
		case 600432608: /* GXTEntry: "Ojeda Rose Gold Bangle Bracelet" */
			return -1298419407;
		case 575547207: /* GXTEntry: "Ainsworth Cross Necklace" */
			return -883489996;
		case -1579131656: /* GXTEntry: "Rou Pearl Necklace" */
			return 1357570735;
		case -939330110: /* GXTEntry: "Gosselin White Gold Necklace" */
			return -330620837;
		case -313250059: /* GXTEntry: "Hajnal Garnet Bangle Bracelet" */
			return -599044012;
		case -1804185681: /* GXTEntry: "Harford Garnet Earrings" */
			return 1465764690;
		case 319991179: /* GXTEntry: "Pilgrim Moonstone Ring" */
			return -1914990977;
		case 456059252: /* GXTEntry: "Pelle Pearl Necklace" */
			return 527426268;
		case -1430911710: /* GXTEntry: "Aubrey Onyx Ring" */
			return 700547967;
		case 1645128206: /* GXTEntry: "Durant Pearl Bracelet" */
			return -1434735180;
		case -644738616: /* GXTEntry: "Josephine Pearl Earrings" */
			return 604651083;
		case 391412462: /* GXTEntry: "Bonnard Pearl Ring" */
			return 371926572;
		case 289416445: /* GXTEntry: "Magnate Turquoise Ring" */
			return -253293041;
		case 61850108: /* GXTEntry: "Blakely Miniature Necklace" */
			return 536987249;
		case 333760707: /* GXTEntry: "Royal Victoria Diamond Earrings" */
			return -1538719578;
		case -1350438989: /* GXTEntry: "Beauchêne Ruby Earrings" */
			return -1949131163;
		case 205445966: /* GXTEntry: "Richelieu Amethyst Necklace" */
			return 967176349;
		case 1107778901: /* GXTEntry: "Helena Sapphire Bracelet" */
			return 574670748;
		case 232063688: /* GXTEntry: "Greco Sapphire Bracelet" */
			return -605903845;
		case -888745206: /* GXTEntry: "Dane Topaz Necklace" */
			return -32321552;
		case 1926912008: /* GXTEntry: "Banais Topaz Ring" */
			return 1904567340;
		case 996250359: /* GXTEntry: "Calumet Turquoise Earrings" */
			return -834041111;
		case -1523419995: /* GXTEntry: "Infanta Turquoise Bracelet" */
			return 726047816;
		case -209370662: /* GXTEntry: "Thorburn Turquoise Ring" */
			return -37487183;
		case 1289018795: /* GXTEntry: "Orchidee Diamond Earrings" */
			return 2079959006;
		case -288598209: /* GXTEntry: "Sackville Diamond Ring" */
			return -1647261494;
		case -1461195441: /* GXTEntry: "Yates Diamond Ring" */
			return 746055788;
		case 1496994240: /* GXTEntry: "1700 New Yorke Token" */
			return -2132348472;
		case 1030821510: /* GXTEntry: "1787 One Cent Token" */
			return 1531432272;
		case -329116887: /* GXTEntry: "1789 Penny" */
			return -1678406212;
		case -1884965711: /* GXTEntry: "1792 Nickel" */
			return 1789589305;
		case -753018368: /* GXTEntry: "1792 Liberty Quarter" */
			return 897707862;
		case 1328162258: /* GXTEntry: "1794 Silver Dollar" */
			return -1787268311;
		case -1841900790: /* GXTEntry: "1795 Half Eagle" */
			return 395137059;
		case -1867083042: /* GXTEntry: "1796 Halfpenny" */
			return -702109507;
		case -1323673307: /* GXTEntry: "1797 Gold Eagle" */
			return -1843094784;
		case 442429651: /* GXTEntry: "1798 Draped Bust Silver Dollar" */
			return 1659722492;
		case 1640145676: /* GXTEntry: "1800 Five Dollar Bechtler" */
			return -2063569423;
		case -1982102297: /* GXTEntry: "1800 Gold Dollar" */
			return -1400928817;
		case 285783511: /* GXTEntry: "1800 Gold Quarter" */
			return 1524848772;
		case -625323392: /* GXTEntry: "1800 Half Dime" */
			return -1914323519;
		case -1513842258: /* GXTEntry: "Condor Egg" */
			return 521036731;
		case -1117423291: /* GXTEntry: "Duck Egg" */
			return 1510925660;
		case 742074887: /* GXTEntry: "Eagle Egg" */
			return -1667316569;
		case -1232280687: /* GXTEntry: "Egret Egg" */
			return 875971115;
		case -158375659: /* GXTEntry: "Goose Egg" */
			return -1390165137;
		case 2060029625: /* GXTEntry: "Hawk Egg" */
			return 512666633;
		case 322658308: /* GXTEntry: "Heron Egg" */
			return 1056235591;
		case 410290576: /* GXTEntry: "Loon Egg" */
			return 1824947548;
		case 229697410: /* GXTEntry: "Spoonbill Egg" */
			return -297415734;
		case 1053249385: /* GXTEntry: "Vulture Egg" */
			return -744964659;
		default:
			break;
	}
	return -135773962;
}

bool func_64(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_65(var uParam0, int iParam1)
{
	func_106(uParam0, iParam1);
}

int func_66(int iParam0)
{
	return iParam0;
}

void func_67(int iParam0)
{
	if (!func_107(iParam0))
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

int func_68(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	struct<2> Var1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ITEMSET::IS_ITEMSET_VALID(Global_1276326->f_31) && ITEMSET::IS_IN_ITEMSET(iParam0, Global_1276326->f_31))
	{
		ITEMSET::REMOVE_FROM_ITEMSET(iParam0, Global_1276326->f_31);
	}
	PLAYER::_0x9DAE1380CC5C6451(PLAYER::PLAYER_ID(), iParam0);
	PLAYER::_0xDC5E09D012D759C4(iParam0, uParam1, iParam2);
	Var1.f_1 = -1082130432;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1276326[iVar0 /*2*/]) && Global_1276326[iVar0 /*2*/] == iParam0)
		{
			MISC::_COPY_MEMORY((*Global_1276326)[iVar0 /*2*/], &Var1, 2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_69(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

var func_70(int iParam0, int iParam1)
{
	return func_71(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

var func_71(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_108() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_109());
				break;
			case -432403087:
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_109());
				break;
			case -1612834106:
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_109());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_110(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_111(iVar2))
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
				if (iVar9 & 8192 != 0 && func_112(iVar2) != 1)
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
					if (!func_113(iVar10))
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

void func_72(struct<19> Param0, var uParam19, bool bParam20, bool bParam21)
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
				func_114(&(Global_1070356->f_21258), Var0);
				return;
			}
		}
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param0, 19, 5, &uParam19);
}

void func_73(var uParam0, var uParam1)
{
	if (SCRIPTS::_0x179A6F0EE2E79026(uParam1))
	{
		uParam0->f_1 = &Global_1275573->f_154[&Global_1275573];
		SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 7, 19, uParam1);
	}
}

void func_74(var uParam0, int iParam1)
{
	func_115(uParam0, iParam1);
}

void func_75(var uParam0)
{
	if (uParam0->f_5 != -1)
	{
		AUDIO::_0x0F2A2175734926D8("collectible_lure", "RDRO_Collectible_Sounds_Travelling_Saleswoman");
		AUDIO::RELEASE_SOUND_ID(uParam0->f_5);
		PAD::STOP_PAD_SHAKE(0);
		uParam0->f_5 = -1;
	}
	AUDIO::_0x531A78D6BF27014B("RDRO_Collectible_Sounds_Travelling_Saleswoman");
}

void func_76(var uParam0, int iParam1)
{
	if (func_88(uParam0))
	{
		GRAPHICS::_0x9CF1836C03FB67A2(uParam0, iParam1);
	}
}

void func_77(int iParam0, int iParam1)
{
	if (!func_116(iParam0, iParam1))
	{
		MISC::SET_BIT(Global_1070356->f_20795.f_353[iParam0 /*11*/], iParam1);
		(Global_1070356->f_20795.f_353[iParam0 /*11*/])->f_1[iParam1] = SCRIPTS::GET_ID_OF_THIS_THREAD();
		func_117();
	}
}

void func_78(int iParam0, int iParam1, bool bParam2)
{
	if (func_116(iParam0, iParam1) && (!bParam2 || &(Global_1070356->f_20795.f_353[iParam0 /*11*/])->f_1[iParam1] == SCRIPTS::GET_ID_OF_THIS_THREAD()))
	{
		MISC::CLEAR_BIT(Global_1070356->f_20795.f_353[iParam0 /*11*/], iParam1);
		(Global_1070356->f_20795.f_353[iParam0 /*11*/])->f_1[iParam1] = 0;
		func_117();
	}
}

float func_79(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_80(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_62(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_118(iParam0);
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
			if (!func_119(iParam0, 1))
			{
				return false;
			}
			break;
		case joaat("clothing"):
			if (func_120(iParam0))
			{
				return true;
			}
			break;
	}
	return func_121(iParam0, 0, 0, 0) >= iParam1;
}

int func_81(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_82(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915180->f_20136;
	}
	return (Global_1915180->f_20136 || Global_1915180->f_21989.f_1);
}

bool func_83()
{
	return func_122() != -1;
}

float func_84()
{
	return (Global_1140484->f_2001[82 /*192*/])->f_188;
}

void func_85(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_86(var uParam0)
{
	func_123(uParam0, 0f);
}

float func_87(var uParam0)
{
	if (!func_124(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_125(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_126() - uParam0->f_1);
}

bool func_88(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

Vector3 func_89(vector3 vParam0)
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

Vector3 func_90(float fParam0)
{
	return -BUILTIN::SIN(fParam0), BUILTIN::COS(fParam0), 0f;
}

Vector3 func_91(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

float func_92(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

int func_93(int iParam0)
{
	struct<5> Var0;
	var uVar5;
	int iVar13;
	int iVar14;
	int iVar15;

	if (func_127() == 0)
	{
		return 0;
	}
	if (!DATAFILE::_0x603AC35FD4602C76(func_127()))
	{
		return 0;
	}
	Var0 = func_127();
	Var0.f_2 = 0;
	Var0.f_3 = 0;
	Var0.f_4 = 0;
	Var0.f_1 = 0;
	iVar13 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar14 = 0;
	while (iVar14 < 30)
	{
		Var0.f_1 = 0;
		Var0.f_3 = iVar14;
		Var0.f_2 = 0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 1;
			if (DATAFILE::_DATAFILE_GET_STRING(&uVar5, &Var0))
			{
				iVar15 = MISC::GET_HASH_KEY(&uVar5);
				if (iVar13 == iVar15)
				{
					return 1;
				}
			}
		}
		iVar14++;
	}
	return 0;
}

bool func_94(int iParam0)
{
	struct<4> Var0;

	Var0.f_4 = 1084182731;
	Var0 = { func_128(0) };
	return func_129(iParam0, &Var0, 1, 1, 0, -1, 0);
}

bool func_95(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1949759)[iParam0 /*23*/])->f_1 && iParam1) != 0;
}

int func_96(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_97(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
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
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, bParam24);
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
	func_99(iParam0, 1);
	func_100(iParam0, 1);
	func_101(iParam0, 128);
}

void func_98(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949759)[iParam0 /*23*/])->f_1 = (((*Global_1949759)[iParam0 /*23*/])->f_1 - (((*Global_1949759)[iParam0 /*23*/])->f_1 && iParam1));
}

void func_99(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		if (((*Global_1949759)[iParam0 /*23*/])->f_5 == 5 && !func_95(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949759)[iParam0 /*23*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949759)[iParam0 /*23*/])->f_3, iParam1);
		}
	}
}

void func_100(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1949759)[iParam0 /*23*/])->f_3, iParam1);
	}
}

void func_101(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949759)[iParam0 /*23*/])->f_1 = (((*Global_1949759)[iParam0 /*23*/])->f_1 || iParam1);
}

bool func_102(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0.f_1 = 10;
	func_130(&Var0, 1356624740);
	return func_131(iParam0, &Var0, uParam1, 0);
}

struct<2> func_103(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_104(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

int func_105(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_132(iParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

void func_106(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_107(int iParam0)
{
	return func_95(iParam0, 2);
}

int func_108()
{
	return Global_1051202->f_12;
}

char* func_109()
{
	return "unnamed";
}

int func_110(int iParam0)
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

int func_111(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return func_133(35, iParam0);
}

int func_112(int iParam0)
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

bool func_113(int iParam0)
{
	if (func_134(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) != 1)
		{
			func_135(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) == 1;
}

int func_114(var uParam0, struct<21> Param1)
{
	if (!func_136(uParam0))
	{
		return 0;
	}
	*(uParam0->f_2[*uParam0 /*21*/]) = { Param1 };
	*uParam0++;
	return 1;
}

void func_115(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_116(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(&(Global_1070356->f_20795.f_353[iParam0 /*11*/]), iParam1);
}

void func_117()
{
	SCRIPTS::_0x20F4CB76689ACDBC(&(Global_1070356->f_19683.f_260));
}

int func_118(int iParam0)
{
	vector3 vVar0;

	if (!func_62(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_119(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_62(iParam0, 0))
	{
		return 0;
	}
	if (Global_1939178->f_6)
	{
		return 0;
	}
	iVar0 = func_137(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_138("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_139(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_140(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_141(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_141(iVar1);
	}
	return 0;
}

bool func_120(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_62(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_142(iParam0);
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
	iVar1 = func_143(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_144(&(Global_17172.f_54.f_644.f_1353.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_145(iParam0);
	iVar2 = func_144(&(Global_17172.f_54.f_644.f_1353.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17172.f_54.f_644.f_1353.f_5[iVar2 /*17*/];
}

int func_121(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_62(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_118(iParam0);
	if (iVar1 == joaat("ammo") || (bParam1 && iVar1 == joaat("weapon")))
	{
		iVar2 = func_137(iParam0, 1);
		if (iVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar2);
		}
	}
	else if (iVar1 == joaat("weapon"))
	{
		return func_146(iParam0, 0);
	}
	if (func_147(iParam0, joaat("default")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_148(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_149(iParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_148(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

int func_122()
{
	return Global_1132549->f_137;
}

void func_123(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_126() - fParam1);
	func_150(uParam0, 1);
	func_151(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_124(var uParam0)
{
	return func_152(*uParam0, 1);
}

bool func_125(var uParam0)
{
	return func_152(*uParam0, 2);
}

float func_126()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_127()
{
	return (Global_1070356->f_26934[46 /*4*/])->f_3;
}

struct<4> func_128(bool bParam0)
{
	int iVar0;

	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_148(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1272170))
			{
				*Global_1272170 = { func_154(joaat("character"), func_153(), -1591664384, bParam0) };
			}
			return *Global_1272170;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_12)))
			{
				Global_1272170->f_12 = { func_154(joaat("character"), func_153(), -1591664384, 0) };
			}
			return Global_1272170->f_12;
		}
	}
	return func_154(joaat("character"), func_153(), -1591664384, bParam0);
}

int func_129(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	struct<4> Var0;
	struct<10> Var4;
	int iVar26;
	int iVar27;

	func_155(&iParam0);
	if (!func_62(iParam0, 0) && !func_157(func_156(iParam0), 2))
	{
		return 0;
	}
	if (!bParam3 && func_147(iParam0, joaat("default")) == 0)
	{
		bParam3 = true;
	}
	if (func_158(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		Var0 = { func_159(0) };
		Var4.f_9 = -1591664384;
		if (!func_160(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
		{
			return 0;
		}
		else if (func_161(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
		{
			return 0;
		}
		if (func_162(iParam0, 1))
		{
			if (!func_160(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
			{
				return 0;
			}
			else if (func_161(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
			{
				return 0;
			}
		}
		return 1;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_163(iParam0, uParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return 0;
	}
	else if (iVar26 == 0)
	{
		return 1;
	}
	iVar27 = func_164(iParam0, *uParam1, uParam1->f_4, bParam4, bParam3, iParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return 1;
	}
	return 0;
}

void func_130(var uParam0, int iParam1)
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

int func_131(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_165(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_166(uParam2, iParam0, Var1);
	return 1;
}

int func_132(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		bVar0 = (_NAMESPACE26::_0xD6F6ACF4392187FB(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) && _NAMESPACE26::_0x0F99F6436528A089(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
		bParam7 = bVar0;
	}
	POSSE::_0xC08AFF658B2E51DA(&iVar1);
	if (iVar1 != 0)
	{
		func_167(iParam2, -372840566);
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
	Var3.f_13 = iParam4;
	Var3.f_16 = iParam5;
	Var3.f_14 = iParam6;
	Var3 = { *iParam2 };
	func_168(uParam1, iParam0, Var3);
	return 1;
}

int func_133(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_169(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 == func_170())
	{
		return func_169(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1275573->f_22[iParam1])
	{
		return func_169(&(((*Global_1097610)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

int func_134(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), iParam0))
	{
		return 1;
	}
	return 0;
}

void func_135(int iParam0)
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
		func_171(iParam0);
		return;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_172(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 1;
}

int func_136(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return 0;
	}
	return 1;
}

int func_137(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_62(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_118(iParam0);
	if (iVar0 == joaat("weapon") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(iParam0);
	}
	else if (iVar0 == joaat("ammo") && WEAPON::_0x1F7977C9101F807F(iParam0))
	{
		return iParam0;
	}
	if (func_173(iParam0, 1399091007))
	{
		func_174(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_138(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_148(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_139(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_140(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

int func_141(int iParam0)
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

int func_142(int iParam0)
{
	struct<2> Var0;

	if (!func_62(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_143(int iParam0)
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

int func_144(var uParam0, int iParam1)
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

int func_145(int iParam0)
{
	int iVar0;

	iVar0 = func_142(iParam0);
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

int func_146(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_175(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_176(&Var0, func_159(0));
	}
	if (!func_177(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_141(iVar14);
	return uVar15;
}

int func_147(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

int func_148(bool bParam0)
{
	if (func_2() == -1)
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

struct<4> func_149(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_178(iParam0, bParam1, 0) };
	return func_154(iParam0, Var0, Var0.f_4, bParam1);
}

void func_150(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_151(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_152(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

struct<4> func_153()
{
	struct<4> Var0;

	return Var0;
}

struct<4> func_154(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_62(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_148(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_155(int iParam0)
{
	if (!func_62(*iParam0, 0))
	{
		return 0;
	}
	if (!func_179(*iParam0))
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

int func_156(int iParam0)
{
	return iParam0;
}

int func_157(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

bool func_158(int iParam0)
{
	return func_118(iParam0) == joaat("weapon");
}

struct<4> func_159(bool bParam0)
{
	int iVar0;

	iVar0 = func_148(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_4)))
		{
			Global_1272170->f_4 = { func_154(923904168, func_128(bParam0), -740156546, bParam0) };
		}
		return Global_1272170->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_16)))
		{
			Global_1272170->f_16 = { func_154(923904168, func_128(bParam0), -740156546, 0) };
		}
		return Global_1272170->f_16;
	}
	return func_154(923904168, func_128(bParam0), -740156546, 0);
}

bool func_160(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_164(iParam0, *uParam1, iParam2, bParam3, 1, iParam4) > 0;
}

int func_161(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_180(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

int func_162(int iParam0, bool bParam1)
{
	if (func_142(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_181();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_163(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_62(iParam0, 0) && !func_157(func_156(iParam0), 2))
	{
		return 0;
	}
	if (func_118(iParam0) == 26423971)
	{
		return -1;
	}
	if (!bParam2 && func_147(iParam0, joaat("default")) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_148(bParam3), iParam0);
}

int func_164(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_62(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_147(iParam0, joaat("default")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_154(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_148(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_148(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

void func_165(var uParam0)
{
	func_130(uParam0, 143479330);
	if (func_182() == 2026485318)
	{
		func_130(uParam0, 617531372);
	}
	else
	{
		func_130(uParam0, 291123060);
	}
}

void func_166(var uParam0, int iParam1, struct<14> Param2)
{
	int iVar0;
	struct<21> Var1;

	if (!func_183(uParam0))
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

void func_167(int iParam0, int iParam1)
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

void func_168(var uParam0, int iParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_183(uParam0))
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

bool func_169(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_170()
{
	return Global_1099294->f_339;
}

void func_171(int iParam0)
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
	func_172(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 0;
}

void func_172(int iParam0)
{
	if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 != 0)
	{
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = 0;
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 = 0;
	}
}

int func_173(int iParam0, int iParam1)
{
	if (!func_62(iParam0, 0))
	{
		return func_184(func_156(iParam0), iParam1);
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

void func_174(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case 1234009870: /* GXTEntry: "Revolver Cartridges - Regular" */
			*uParam1 = 1802325493;
			*uParam2 = 1681219929; /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case -1202134084: /* GXTEntry: "Opened Revolver Cartridges" */
			*uParam1 = -864693164;
			*uParam2 = 1681219929; /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case 1297050066: /* GXTEntry: "Revolver Cartridges - Express" */
			*uParam1 = -603289736;
			*uParam2 = 1232099469; /* GXTEntry: "Revolver Cartridges - Express" */
			break;
		case -1780177928: /* GXTEntry: "Revolver Cartridges - High Velocity" */
			*uParam1 = -1803237008;
			*uParam2 = -2084181920; /* GXTEntry: "Revolver Cartridges - High Velocity" */
			break;
		case -1467836497: /* GXTEntry: "Pistol Cartridges - Regular" */
			*uParam1 = -1175521284;
			*uParam2 = joaat("ammo_pistol");
			break;
		case 1723805622: /* GXTEntry: "Opened Pistol Cartridges" */
			*uParam1 = -1559549888;
			*uParam2 = joaat("ammo_pistol");
			break;
		case -153287664: /* GXTEntry: "Pistol Cartridges - Express" */
			*uParam1 = -1650796693;
			*uParam2 = 836939099; /* GXTEntry: "Pistol Cartridges - Express" */
			break;
		case 1845082736: /* GXTEntry: "Pistol Cartridges - High Velocity" */
			*uParam1 = -1521597660;
			*uParam2 = -1411815376; /* GXTEntry: "Pistol Cartridges - High Velocity" */
			break;
		case 406755377: /* GXTEntry: "Rifle Cartridges - Regular" */
			*uParam1 = -1288829256;
			*uParam2 = joaat("ammo_rifle");
			break;
		case 1469029564: /* GXTEntry: "Opened Rifle Cartridges" */
			*uParam1 = 1393841762;
			*uParam2 = joaat("ammo_rifle");
			break;
		case 45760211: /* GXTEntry: "Rifle Cartridges - Express" */
			*uParam1 = -851229814;
			*uParam2 = 1654725195; /* GXTEntry: "Rifle Cartridges - Express" */
			break;
		case -276295943: /* GXTEntry: "Rifle Cartridges - High Velocity" */
			*uParam1 = 914704115;
			*uParam2 = 1858824185; /* GXTEntry: "Rifle Cartridges - High Velocity" */
			break;
		case -2029793397: /* GXTEntry: "Repeater Cartridges - Regular" */
			*uParam1 = -219896679;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case 2120467495:
			*uParam1 = 516838334;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case -2075613923: /* GXTEntry: "Repeater Cartridges - Express" */
			*uParam1 = -385817936;
			*uParam2 = -578347576; /* GXTEntry: "Repeater Cartridges - Express" */
			break;
		case 122656217: /* GXTEntry: "Repeater Cartridges - High Velocity" */
			*uParam1 = 1192843172;
			*uParam2 = 231465488; /* GXTEntry: "Repeater Cartridges - High Velocity" */
			break;
		case 2107187484: /* GXTEntry: "Shotgun Shells - Regular" */
			*uParam1 = 954871696;
			*uParam2 = joaat("ammo_shotgun");
			break;
		case -791844268: /* GXTEntry: "Opened Shotgun Shells" */
			*uParam1 = -1217273132;
			*uParam2 = joaat("ammo_shotgun");
			break;
		case 305770744: /* GXTEntry: "Shotgun - Slug" */
			*uParam1 = -2087227528;
			*uParam2 = 314966081; /* GXTEntry: "Shotgun - Slug" */
			break;
		case 550900979: /* GXTEntry: "Rifle Cartridges - Varmint" */
			*uParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

struct<14> func_175(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_176(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_177(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_148(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

struct<5> func_178(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_128(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_118(iParam0);
	switch (iVar5)
	{
		case joaat("clothing"):
			Var0 = { func_154(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			break;
		case joaat("weapon"):
			Var0 = { func_159(bParam1) };
			if (bParam2 && func_162(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_160(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_160(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_161(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_185(bParam1) };
			switch (func_142(iParam0))
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
			if (func_186(iParam0, -1823706425))
			{
				Var0 = { func_154(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_186(iParam0, -1483207246))
			{
				Var0 = { func_154(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1911121386))
			{
				Var0 = { func_154(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_186(iParam0, -1653629781))
			{
				Var0 = { func_154(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1384535894);
			}
			break;
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
				Var28.f_9 = -1591664384;
				if (!func_187(Var0, &Var28, bParam1, 0, -1))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var28.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -718417579))
			{
				Var0.f_4 = -718417579;
			}
			else if (func_186(iParam0, -1653629781))
			{
				Var0 = { func_154(1384535894, Var0, 1784584921, bParam1) };
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

bool func_179(int iParam0)
{
	return func_173(iParam0, 1279601681);
}

int func_180(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_148(0);
	*uParam1 = { func_154(iParam0, func_159(0), iParam3, 0) };
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

bool func_181()
{
	return (func_188(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0, 0, 0) > 0 && func_189(func_154(889965687 /* GXTEntry: "Wardrobe" */, func_128(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_182()
{
	return Global_1951141->f_1;
}

int func_183(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

int func_184(int iParam0, int iParam1)
{
	if (!func_157(iParam0, 2))
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

struct<4> func_185(bool bParam0)
{
	int iVar0;

	iVar0 = func_148(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_8)))
		{
			Global_1272170->f_8 = { func_154(271701509, func_128(bParam0), 12999093, 0) };
		}
		return Global_1272170->f_8;
	}
	return func_154(271701509, func_128(bParam0), 12999093, 0);
}

int func_186(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_142(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (func_190(iParam0, iParam1, iVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

bool func_187(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_191(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_188(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_192(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_148(bParam1), iParam0, iParam3);
}

int func_189(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_193(&uParam0, iParam4, bParam5, iParam6);
}

int func_190(int iParam0, int iParam1, int iParam2)
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

int func_191(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_148(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

bool func_192(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

int func_193(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_194(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_194(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_148(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return 0;
	}
	if (!func_191(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return 0;
	}
	return 1;
}

