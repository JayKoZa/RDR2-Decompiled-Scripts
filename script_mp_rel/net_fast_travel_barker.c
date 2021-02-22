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
	float fLocal_14 = 0f;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = -1;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = -1;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = -1;
	var uLocal_45 = -1;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	func_1(&uLocal_24, iScriptParam_0);
	while (!func_2(&uLocal_24))
	{
		func_3(&uLocal_24);
		BUILTIN::WAIT(0);
	}
	func_4(&uLocal_24);
}

void func_1(var uParam0, int iParam1)
{
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_5(0);
	func_6();
	func_7();
	Global_1071686.f_23887.f_2 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		uParam0->f_3 = BRAIN::_0x6818D1A194E29983();
	}
	else
	{
		uParam0->f_3 = iParam1;
	}
}

bool func_2(var uParam0)
{
	if (func_8(1, 1))
	{
		return true;
	}
	if (*uParam0 <= 0)
	{
		return false;
	}
	if (*uParam0 == 5)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			return true;
		}
		else if (uParam0->f_5)
		{
			if (Global_1071686.f_23887.f_2)
			{
				return true;
			}
			if (func_9(uParam0->f_8, Global_35) > Global_1901947.f_584.f_1)
			{
				return true;
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		return true;
	}
	return false;
}

void func_3(var uParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	switch (*uParam0)
	{
		case 0:
			func_10(uParam0);
			break;
		case 1:
			func_11(uParam0);
			break;
		case 2:
			func_12(uParam0);
			break;
		case 3:
			func_13(uParam0);
			break;
		case 4:
			func_14(uParam0);
			break;
		case 5:
			break;
	}
	if (uParam0->f_25 > 0f)
	{
		uParam0->f_25 = (uParam0->f_25 - MISC::GET_FRAME_TIME());
	}
}

void func_4(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
	if (HUD::BUSYSPINNER_IS_ON())
	{
		func_15();
		func_16();
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_26))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_26);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_27))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(uParam0->f_27);
		VOLUME::_DELETE_VOLUME(uParam0->f_27);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_28))
	{
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_28);
		VOLUME::_DELETE_VOLUME(uParam0->f_28);
	}
	GRAPHICS::_0x9CF1836C03FB67A2(&(uParam0->f_29), 1);
	if (!func_17(8))
	{
		func_18();
	}
	if (!ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		func_19(iVar1, 0);
	}
	func_20(uParam0);
	func_21();
}

void func_5(bool bParam0)
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

void func_6()
{
	Global_1913501 = 1;
}

void func_7()
{
	if (!Global_1071686.f_23887)
	{
		Global_1071686.f_23887 = 1;
	}
}

bool func_8(bool bParam0, bool bParam1)
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

float func_9(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

void func_10(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;

	uParam0->f_4 = func_22(uParam0->f_3);
	if (uParam0->f_4 == 15)
	{
		return;
	}
	uParam0->f_8 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false) };
	fVar0 = BUILTIN::VDIST(Global_1071686.f_23887.f_366[uParam0->f_4 /*272*/].f_2, uParam0->f_8);
	uParam0->f_2 = 1;
	if (fVar0 > 5f)
	{
		if (DECORATOR::DECOR_EXIST_ON(uParam0->f_3, "fast_travel_camp_barker"))
		{
			iVar1 = DECORATOR::DECOR_GET_INT(uParam0->f_3, "fast_travel_camp_barker");
			if (func_23(iVar1))
			{
				iVar2 = func_24(iVar1, 1);
				if (GANG::_0xD6F6ACF4392187FB(iVar2))
				{
					uParam0->f_11 = iVar2;
					uParam0->f_6 = fVar0;
					uParam0->f_5 = 1;
					uParam0->f_7 = BUILTIN::ROUND((fVar0 / 1000f));
					uParam0->f_12 = iVar1;
				}
				else
				{
					uParam0->f_2 = 0;
				}
			}
			else
			{
				uParam0->f_2 = 0;
			}
		}
		else
		{
			uParam0->f_2 = 0;
		}
	}
	else
	{
		iVar1 = func_25(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
		if (iVar1 >= 0)
		{
			uParam0->f_8 = { func_26(iVar1) };
			fVar0 = BUILTIN::VDIST(Global_1071686.f_23887.f_366[uParam0->f_4 /*272*/].f_2, uParam0->f_8);
			iVar2 = func_24(iVar1, 1);
			if (GANG::_0xD6F6ACF4392187FB(iVar2))
			{
				uParam0->f_11 = iVar2;
				uParam0->f_6 = fVar0;
				uParam0->f_7 = BUILTIN::ROUND((fVar0 / 1000f));
				uParam0->f_12 = iVar1;
			}
		}
	}
	uParam0->f_19 = func_27("NFT_MENU_OPEN", joaat("INPUT_CONTEXT_Y"), uParam0->f_3, 0, 0, 0, 1, 5, 3.5f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
	if (!func_28(uParam0->f_19))
	{
		return;
	}
	func_29(uParam0->f_19, 13, 1, 1);
	uParam0->f_26 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(Global_1071686.f_23887.f_366[uParam0->f_4 /*272*/].f_2, 0f, 0f, 0f, 10.5f, 10.5f, 5.5f, "Fast Travel Ghosting Area");
	uParam0->f_27 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(Global_1071686.f_23887.f_366[uParam0->f_4 /*272*/].f_2, 0f, 0f, 0f, 1f, 1f, 2f, "Fast Travel Navmesh Blocking Area");
	uParam0->f_28 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(Global_1071686.f_23887.f_366[uParam0->f_4 /*272*/].f_2, 0f, 0f, 0f, 2f, 2f, 2f, "Fast Travel Ambient Avoidance Area");
	PATHFIND::_0x19C7567D2F2287D6(uParam0->f_27, 7);
	POPULATION::_0xB56D41A694E42E86(uParam0->f_28, 2238463, 0, 0, -1, -1, 0);
	uParam0->f_29 = GRAPHICS::_0xFA50F79257745E74(Global_1071686.f_23887.f_366[uParam0->f_4 /*272*/].f_2, 1f, 1, 4, 0);
	uParam0->f_20 = -1;
	func_30(uParam0, 4);
	func_30(uParam0, 2);
	func_30(uParam0, 8);
	func_31(uParam0->f_19, 0, 1, 1);
	func_32(uParam0->f_19, 0, 1);
	func_18();
	func_33(uParam0, 0);
	func_34(uParam0, 1);
}

void func_11(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (Global_1071686.f_23887.f_2)
	{
		func_34(uParam0, 5);
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
	if (func_35(32768, PLAYER::NETWORK_PLAYER_ID_TO_INT()))
	{
		if (!VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_26, ENTITY::GET_ENTITY_COORDS(iVar1, false, true)))
		{
			func_18();
		}
	}
	bVar2 = false;
	if (HUD::BUSYSPINNER_IS_ON())
	{
		func_16();
	}
	if (!uParam0->f_2)
	{
		bVar2 = func_33(uParam0, 2);
	}
	else if (((((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) || func_36()) || func_37()) || func_38()) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		bVar2 = func_33(uParam0, 14);
	}
	else if (PED::_0xB655DB7582AEC805(iVar1))
	{
		bVar2 = func_33(uParam0, 7);
	}
	else if (PED::_IS_PED_HOGTIED(iVar1))
	{
		bVar2 = func_33(uParam0, 8);
	}
	else if (PED::_IS_PED_CARRYING(iVar1))
	{
		bVar2 = func_33(uParam0, 9);
	}
	else if (func_39(255))
	{
		bVar2 = func_33(uParam0, 10);
	}
	else if (func_40(iVar0, 1, 0, 1))
	{
		bVar2 = func_33(uParam0, 5);
	}
	else if (func_41())
	{
		bVar2 = func_33(uParam0, 3);
	}
	else if (func_42())
	{
		bVar2 = func_33(uParam0, 6);
	}
	else if (uParam0->f_5 && !GANG::_0x9BE7DCB22D32CCBE(uParam0->f_11, iVar0))
	{
		bVar2 = func_33(uParam0, 11);
	}
	else if (func_43())
	{
		bVar2 = func_33(uParam0, 4);
	}
	else if (func_44())
	{
		bVar2 = func_33(uParam0, 16);
	}
	else if (func_45())
	{
		bVar2 = func_33(uParam0, 17);
	}
	else if (func_46())
	{
		bVar2 = func_33(uParam0, 15);
	}
	else if (func_47(iVar0))
	{
		bVar2 = func_33(uParam0, 13);
	}
	else if (func_48(Global_34, 0))
	{
		bVar2 = func_33(uParam0, 18);
	}
	else
	{
		bVar2 = func_33(uParam0, 1);
	}
	switch (uParam0->f_18)
	{
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (func_9(Global_1071686.f_23887.f_366[uParam0->f_4 /*272*/].f_2, ENTITY::GET_ENTITY_COORDS(iVar1, false, false)) <= 3.5f)
				{
					func_19(iVar1, 1);
				}
				else
				{
					func_19(iVar1, 0);
				}
			}
			if (bVar2)
			{
				func_31(uParam0->f_19, 1, 1, 1);
				func_32(uParam0->f_19, 1, 1);
			}
			if (func_49(uParam0->f_19, 1) > 0f)
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
			}
			if (func_50(uParam0->f_19, 1))
			{
				func_31(uParam0->f_19, 0, 1, 1);
				func_32(uParam0->f_19, 0, 1);
				func_33(uParam0, 0);
				func_51(32);
				func_34(uParam0, 2);
			}
			break;
		case 14:
			if (bVar2)
			{
				func_31(uParam0->f_19, 0, 1, 1);
				func_32(uParam0->f_19, 0, 1);
			}
			break;
		case 13:
			if (bVar2)
			{
				func_31(uParam0->f_19, 0, 1, 1);
				func_32(uParam0->f_19, 0, 1);
			}
			break;
		case 3:
			if (bVar2)
			{
				func_31(uParam0->f_19, 0, 1, 1);
				func_32(uParam0->f_19, 1, 1);
			}
			if (func_52(uParam0->f_19, 1))
			{
				func_53(uParam0, "NFT_MISSION_RUNNING");
			}
			break;
		case 4:
			if (bVar2)
			{
				func_31(uParam0->f_19, 0, 1, 1);
				func_32(uParam0->f_19, 1, 1);
			}
			if (func_52(uParam0->f_19, 1))
			{
				func_53(uParam0, "NFT_PASSENGER_HORSE_WARN");
			}
			break;
		case 17:
			if (bVar2)
			{
				func_31(uParam0->f_19, 0, 1, 1);
				func_32(uParam0->f_19, 1, 1);
			}
			if (func_52(uParam0->f_19, 1))
			{
				func_53(uParam0, "NFT_PASSENGER_WAGON_WARN");
			}
			break;
		case 16:
			if (bVar2)
			{
				func_31(uParam0->f_19, 0, 1, 1);
				func_32(uParam0->f_19, 1, 1);
			}
			if (func_52(uParam0->f_19, 1))
			{
				func_53(uParam0, "NFT_PASSENGER_WAGON_PASSENGER_WARN");
			}
			break;
		case 15:
			if (bVar2)
			{
				func_31(uParam0->f_19, 0, 1, 1);
				func_32(uParam0->f_19, 1, 1);
			}
			if (func_52(uParam0->f_19, 1))
			{
				func_53(uParam0, "NFT_HOGTIED_HORSE_WARN");
			}
			break;
		case 5:
			if (bVar2)
			{
				func_31(uParam0->f_19, 0, 1, 1);
				func_32(uParam0->f_19, 1, 1);
			}
			if (func_52(uParam0->f_19, 1))
			{
				func_53(uParam0, "NFT_WANTED");
			}
			break;
		case 6:
			if (bVar2)
			{
				func_31(uParam0->f_19, 0, 1, 1);
				func_32(uParam0->f_19, 0, 1);
			}
			break;
		case 7:
			if (bVar2)
			{
				func_31(uParam0->f_19, 0, 1, 1);
				func_32(uParam0->f_19, 0, 1);
			}
			break;
		case 9:
			if (bVar2)
			{
				func_31(uParam0->f_19, 0, 1, 1);
				func_32(uParam0->f_19, 0, 1);
			}
			break;
		case 8:
			if (bVar2)
			{
				func_31(uParam0->f_19, 0, 1, 1);
				func_32(uParam0->f_19, 0, 1);
			}
			break;
		case 10:
			if (bVar2)
			{
				func_31(uParam0->f_19, 0, 1, 1);
				func_32(uParam0->f_19, 0, 1);
			}
			break;
		case 18:
			if (bVar2)
			{
				func_31(uParam0->f_19, 0, 1, 1);
				func_32(uParam0->f_19, 1, 1);
			}
			if (func_52(uParam0->f_19, 1))
			{
				func_53(uParam0, "NFT_COMBAT");
			}
			break;
	}
}

void func_12(var uParam0)
{
	if (!UIAPPS::_CAN_LAUNCH_APP_BY_HASH(joaat("FAST_TRAVEL_MENU")))
	{
		return;
	}
	else
	{
		if (!func_54(1, 1))
		{
			return;
		}
		if (UIAPPS::_LAUNCH_APP_BY_HASH(joaat("FAST_TRAVEL_MENU")) == 0)
		{
		}
		else
		{
			return;
		}
	}
	func_55();
	func_30(uParam0, 2);
	func_30(uParam0, 4);
	func_56(uParam0, -931758312);
	func_34(uParam0, 3);
}

void func_13(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	char* sVar6;
	var uVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
		func_57(uParam0, 2);
	}
	if (Global_1071686.f_23887.f_2)
	{
		func_57(uParam0, 2);
	}
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 1);
	if (uParam0->f_5)
	{
		if (func_9(uParam0->f_8, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false)) > (3.5f + 2f))
		{
			func_57(uParam0, 2);
		}
	}
	else
	{
		iVar2 = func_25(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
		if (iVar2 >= 0 && iVar2 != uParam0->f_12)
		{
			uParam0->f_8 = { func_26(iVar2) };
			fVar3 = BUILTIN::VDIST(Global_1071686.f_23887.f_366[uParam0->f_4 /*272*/].f_2, uParam0->f_8);
			iVar4 = func_24(iVar2, 1);
			if (GANG::_0xD6F6ACF4392187FB(iVar4))
			{
				uParam0->f_11 = iVar4;
				uParam0->f_6 = fVar3;
				uParam0->f_7 = BUILTIN::ROUND((fVar3 / 1000f));
				uParam0->f_12 = iVar2;
			}
		}
		if (func_9(Global_1071686.f_23887.f_366[uParam0->f_4 /*272*/].f_2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false)) > (3.5f + 2f))
		{
			func_57(uParam0, 2);
		}
	}
	iVar5 = PED::GET_MOUNT(PLAYER::PLAYER_PED_ID());
	if (ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		if (!PED::_IS_MOUNT_SEAT_FREE(iVar5, 0))
		{
			func_57(uParam0, 2);
		}
	}
	if (func_47(iVar0))
	{
		func_57(uParam0, 2);
	}
	if (!func_58(uParam0, 2))
	{
		func_59(uParam0, &(uParam0->f_20));
		if (uParam0->f_20 == -1)
		{
			return;
		}
		if (func_58(uParam0, 8))
		{
			bVar8 = func_61(func_60(uParam0), &uVar7);
			bVar8 = (bVar8 || func_62(func_60(uParam0), &uVar7));
			if (uParam0->f_20 < 14)
			{
				if (bVar8)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1071686.f_23887.f_5.f_1, MISC::_CREATE_VAR_STRING(2, "NFT_VOUCHER_FOOTER"));
				}
				else
				{
					sVar6 = HUD::_GET_LABEL_TEXT_BY_HASH(Global_1071686.f_23887.f_366[uParam0->f_4 /*272*/].f_5[uParam0->f_20 /*19*/]);
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1071686.f_23887.f_5.f_1, MISC::_CREATE_VAR_STRING(10, "NFT_FOOTER", sVar6));
				}
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1071686.f_23887.f_5.f_2, MISC::_CREATE_VAR_STRING(2, func_63(Global_1071686.f_23887.f_366[uParam0->f_4 /*272*/].f_5[uParam0->f_20 /*19*/])));
			}
			else if (uParam0->f_20 == 14)
			{
				if (uParam0->f_5)
				{
					if (bVar8)
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1071686.f_23887.f_5.f_1, MISC::_CREATE_VAR_STRING(2, "NFT_VOUCHER_FOOTER"));
					}
					else
					{
						sVar6 = MISC::_CREATE_VAR_STRING(0, Global_1071686.f_23887.f_366[uParam0->f_4 /*272*/]);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1071686.f_23887.f_5.f_1, MISC::_CREATE_VAR_STRING(10, "NFT_FOOTER", sVar6));
					}
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1071686.f_23887.f_5.f_2, MISC::_CREATE_VAR_STRING(2, func_63(Global_1071686.f_23887.f_366[uParam0->f_4 /*272*/])));
				}
				else
				{
					if (!func_25(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) >= 0)
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1071686.f_23887.f_5.f_1, MISC::_CREATE_VAR_STRING(2, "NFT_NO_CAMP_FOOTER"));
					}
					else if (bVar8)
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1071686.f_23887.f_5.f_1, MISC::_CREATE_VAR_STRING(2, "NFT_VOUCHER_FOOTER"));
					}
					else
					{
						sVar6 = MISC::_CREATE_VAR_STRING(2, "NFT_LOCATION_TYPE_CAMP_DESC");
						DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1071686.f_23887.f_5.f_1, MISC::_CREATE_VAR_STRING(10, "NFT_FOOTER", sVar6));
					}
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1071686.f_23887.f_5.f_2, MISC::_CREATE_VAR_STRING(2, "NFT_CAMP_DESC"));
				}
			}
			else if (uParam0->f_20 == 15)
			{
				iVar9 = func_64();
				if (!func_65(iVar9, 1))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1071686.f_23887.f_5.f_1, MISC::_CREATE_VAR_STRING(2, "NFT_NO_MOONSHINE_FOOTER"));
				}
				else if (bVar8)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1071686.f_23887.f_5.f_1, MISC::_CREATE_VAR_STRING(2, "NFT_VOUCHER_FOOTER"));
				}
				else
				{
					sVar6 = MISC::_CREATE_VAR_STRING(2, "NFT_LOCATION_TYPE_MOONSHINE_DESC");
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1071686.f_23887.f_5.f_1, MISC::_CREATE_VAR_STRING(10, "NFT_FOOTER", sVar6));
				}
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1071686.f_23887.f_5.f_2, MISC::_CREATE_VAR_STRING(2, "NFT_MOONSHINE_DESC"));
			}
			if (uParam0->f_20 < 14)
			{
				iVar10 = func_60(uParam0);
				if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(func_66(iVar10, 59806960, 1, 0, 1, 0), 0))
				{
					DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1071686.f_23887.f_5.f_4, "subFooter", MISC::_CREATE_VAR_STRING(2, "NFT_CANT_AFFORD_SHORT"));
				}
				else
				{
					DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1071686.f_23887.f_5.f_4, "subFooter", "");
				}
			}
			else if (uParam0->f_20 == 14)
			{
				if (uParam0->f_5)
				{
					iVar10 = func_67(0, uParam0);
					if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(func_66(iVar10, 59806960, 1, 0, 1, 0), 0))
					{
						DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1071686.f_23887.f_5.f_4, "subFooter", MISC::_CREATE_VAR_STRING(2, "NFT_CANT_AFFORD_SHORT"));
					}
					else
					{
						DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1071686.f_23887.f_5.f_4, "subFooter", "");
					}
				}
				else
				{
					iVar10 = func_67(0, uParam0);
					if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(func_66(iVar10, 59806960, 1, 0, 1, 0), 0))
					{
						DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1071686.f_23887.f_5.f_4, "subFooter", MISC::_CREATE_VAR_STRING(2, "NFT_CANT_AFFORD_SHORT"));
					}
					else
					{
						DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1071686.f_23887.f_5.f_4, "subFooter", "");
					}
				}
			}
			else if (uParam0->f_20 == 15)
			{
				iVar10 = func_67(0, uParam0);
				if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(func_66(iVar10, 59806960, 1, 0, 1, 0), 0))
				{
					DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1071686.f_23887.f_5.f_4, "subFooter", MISC::_CREATE_VAR_STRING(2, "NFT_CANT_AFFORD_SHORT"));
				}
				else
				{
					DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1071686.f_23887.f_5.f_4, "subFooter", "");
				}
			}
			func_30(uParam0, 8);
		}
		if (func_58(uParam0, 4))
		{
			iVar11 = func_60(uParam0);
			switch (func_68(uParam0->f_20, iVar11))
			{
				case 0:
					if (func_61(iVar11, &iVar12))
					{
						uParam0->f_21 = func_69(iVar11, 0, 1, 1, 1, iVar12);
					}
					else if (func_62(iVar11, &iVar12))
					{
						uParam0->f_21 = func_69(iVar11, 0, 1, 1, 1, iVar12);
					}
					else
					{
						uParam0->f_21 = func_69(iVar11, 0, 1, 1, 1, 59806960);
					}
					func_72(uParam0, iVar11, iVar12, func_71(func_70(iVar11, iVar12, 0)));
					func_30(uParam0, 4);
					func_57(uParam0, 2);
					func_20(uParam0);
					func_73(1);
					func_74(0, 72);
					func_34(uParam0, 4);
					return;
				case 1:
					break;
				case 2:
					break;
				case 3:
					break;
				case 4:
					func_53(uParam0, "NFT_CANT_AFFORD");
					func_30(uParam0, 4);
					func_57(uParam0, 2);
					func_20(uParam0);
					break;
				case 5:
					func_53(uParam0, "NFT_NO_CAMP");
					func_30(uParam0, 4);
					func_57(uParam0, 2);
					func_20(uParam0);
					break;
				case 6:
					func_53(uParam0, "NFT_NO_MOONSHINE");
					func_30(uParam0, 4);
					func_57(uParam0, 2);
					func_20(uParam0);
					break;
				case 7:
					func_53(uParam0, "NFT_POSSE_DISBAND");
					func_30(uParam0, 4);
					func_57(uParam0, 2);
					func_20(uParam0);
					break;
			}
		}
	}
	if (func_58(uParam0, 2))
	{
		func_19(iVar1, 0);
		func_75(32);
		func_20(uParam0);
		func_18();
		func_34(uParam0, 1);
	}
}

void func_14(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar3 = func_64();
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 1731288223:
				iVar2 = func_76(iVar0, uParam0);
				break;
		}
		iVar0++;
	}
	if (iVar2 != 2 && iVar2 != 3)
	{
		iVar2 = func_77(uParam0->f_21);
	}
	switch (iVar2)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			func_53(uParam0, "NFT_TRANSACTION_FAILED");
			func_34(uParam0, 1);
			func_74(1, 2);
			break;
		case 3:
			func_78(uParam0);
			if (uParam0->f_20 < 14)
			{
				if ((MISC::_GET_SYSTEM_TIME() - uParam0->f_30) >= 1000)
				{
					if (!func_79(0, Global_1071686.f_23887.f_366[uParam0->f_4 /*272*/].f_5[uParam0->f_20 /*19*/], 1))
					{
						func_34(uParam0, 1);
					}
					else
					{
						func_34(uParam0, 5);
					}
				}
			}
			else if (uParam0->f_20 == 14)
			{
				if (uParam0->f_5)
				{
					if (!func_79(0, Global_1071686.f_23887.f_366[uParam0->f_4 /*272*/], 1))
					{
						func_34(uParam0, 1);
					}
					else
					{
						func_34(uParam0, 5);
					}
				}
				else if (!func_79(1, 0, 0))
				{
					func_34(uParam0, 1);
				}
				else
				{
					func_34(uParam0, 5);
				}
			}
			else if (uParam0->f_20 == 15)
			{
				if (func_65(iVar3, 1))
				{
					if (!func_79(2, 0, 0))
					{
						func_34(uParam0, 1);
					}
					else
					{
						func_34(uParam0, 5);
					}
				}
			}
			func_30(uParam0, 4);
			break;
		case 4:
			func_53(uParam0, "NFT_TRANSACTION_FAILED");
			func_34(uParam0, 1);
			break;
		case 5:
			break;
	}
}

bool func_15()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	iVar0 = func_80();
	bVar1 = func_81();
	bVar2 = (!CAM::IS_SCREEN_FADED_OUT() && !Global_1048581);
	switch (iVar0)
	{
		case 0:
			break;
		case 1:
		case 5:
			if (bVar1)
			{
				if (func_82() <= 3)
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
					{
						func_74(0, 124);
					}
					else
					{
						func_74(0, 104);
					}
				}
				else if (func_83(2))
				{
					func_74(0, 112);
				}
				else
				{
					func_74(0, 124);
				}
			}
			else if (bVar2)
			{
				func_74(1, 2);
			}
			else if (!ENTITY::IS_ENTITY_VISIBLE(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
			{
				func_74(0, 12);
			}
			else
			{
				func_74(0, 8);
			}
			break;
		case 2:
		case 3:
			if (bVar1)
			{
				func_74(0, 72);
			}
			else if (bVar2)
			{
				func_74(0, 72);
			}
			else
			{
				func_74(0, 8);
			}
			break;
		case 4:
			if (Global_1102219 != 22)
			{
				if (bVar1)
				{
					bVar3 = Global_1102219 <= 10;
					if (bVar2)
					{
						if (bVar3)
						{
							func_74(0, 104);
						}
						else
						{
							func_74(0, 124);
						}
					}
					else if (bVar3)
					{
						func_74(0, 40);
					}
					else
					{
						func_74(0, 60);
					}
				}
				else
				{
					bVar3 = Global_1102219.f_3914;
					if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						bVar3 = true;
					}
					if ((Global_1102219.f_4[Global_1106305[2 /*2*/]] && Global_1106305[2 /*2*/].f_1) == Global_1106305[2 /*2*/].f_1)
					{
						bVar3 = false;
					}
					if ((((Global_1102219.f_4[Global_1106305[70 /*2*/]] && Global_1106305[70 /*2*/].f_1) == Global_1106305[70 /*2*/].f_1 || (Global_1102219.f_4[Global_1106305[71 /*2*/]] && Global_1106305[71 /*2*/].f_1) == Global_1106305[71 /*2*/].f_1) || (Global_1102219.f_4[Global_1106305[65 /*2*/]] && Global_1106305[65 /*2*/].f_1) == Global_1106305[65 /*2*/].f_1) || (Global_1102219.f_4[Global_1106305[66 /*2*/]] && Global_1106305[66 /*2*/].f_1) == Global_1106305[66 /*2*/].f_1)
					{
						if (Global_1102219 > 10)
						{
							bVar3 = false;
						}
					}
					if (bVar2)
					{
						func_84(bVar3, 1, 0, bVar3, 1, 0, 0);
					}
					else
					{
						func_84(bVar3, 1, 0, bVar3, 0, 0, 0);
					}
				}
			}
			else if (bVar1)
			{
				if (bVar2)
				{
					func_74(0, 124);
				}
				else
				{
					func_74(0, 60);
				}
			}
			else if (!(Global_1102219.f_4[Global_1106305[25 /*2*/]] && Global_1106305[25 /*2*/].f_1) == Global_1106305[25 /*2*/].f_1)
			{
				if ((Global_1102219.f_4[Global_1106305[59 /*2*/]] && Global_1106305[59 /*2*/].f_1) == Global_1106305[59 /*2*/].f_1 || (Global_1102219.f_4[Global_1106305[60 /*2*/]] && Global_1106305[60 /*2*/].f_1) == Global_1106305[60 /*2*/].f_1)
				{
					func_74(1, 256);
				}
				else
				{
					func_74(1, 2);
				}
			}
			else
			{
				func_74(0, 8);
			}
			func_85();
			break;
	}
	return ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID());
}

void func_16()
{
	Global_1940144.f_105 = -1;
	Global_1940144.f_105.f_1 = 0;
}

bool func_17(int iParam0)
{
	return (Global_1102219.f_4[Global_1106305[iParam0 /*2*/]] && Global_1106305[iParam0 /*2*/].f_1) == Global_1106305[iParam0 /*2*/].f_1;
}

void func_18()
{
	func_86(0, 4, 0);
	if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4))
	{
		func_87(32768);
	}
}

void func_19(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_88(64))
		{
			PED::SET_PED_RESET_FLAG(iParam0, 187, bParam1);
			PED::SET_PED_RESET_FLAG(iParam0, 129, bParam1);
			PED::SET_PED_RESET_FLAG(iParam0, 219, bParam1);
			PED::SET_PED_RESET_FLAG(iParam0, 220, bParam1);
			func_51(64);
		}
	}
	else if (func_88(64))
	{
		PED::SET_PED_RESET_FLAG(iParam0, 187, bParam1);
		PED::SET_PED_RESET_FLAG(iParam0, 129, bParam1);
		PED::SET_PED_RESET_FLAG(iParam0, 219, bParam1);
		PED::SET_PED_RESET_FLAG(iParam0, 220, bParam1);
		func_75(64);
	}
}

void func_20(var uParam0)
{
	func_89();
	func_30(uParam0, 2);
	func_30(uParam0, 4);
}

void func_21()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_22(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	float fVar4;
	float fVar5;
	int iVar6;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	iVar3 = 0;
	fVar4 = 1E+15f;
	fVar5 = fVar4;
	iVar6 = -1;
	iVar3 = 0;
	while (iVar3 <= 14)
	{
		fVar4 = BUILTIN::VDIST(vVar0, Global_1071686.f_23887.f_366[iVar3 /*272*/].f_2);
		if (fVar4 < fVar5)
		{
			fVar5 = fVar4;
			iVar6 = iVar3;
		}
		iVar3++;
	}
	return iVar6;
}

bool func_23(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

int func_24(int iParam0, bool bParam1)
{
	if (!func_23(iParam0))
	{
		if (!bParam1)
		{
		}
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1131196[iParam0 /*27*/].f_9))
	{
		if (!bParam1)
		{
		}
		return 0;
	}
	return GANG::_0x901E0DC25080C8B9(Global_1131196[iParam0 /*27*/].f_9);
}

int func_25(int iParam0)
{
	if (!GANG::_0xD6F6ACF4392187FB(iParam0))
	{
		return -1;
	}
	if (iParam0 == GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))
	{
		return func_90(PLAYER::PLAYER_ID());
	}
	return func_91(GANG::_0x4BE6C13A45CCA8EC(iParam0));
}

Vector3 func_26(int iParam0)
{
	if (!func_23(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return Global_1131196[iParam0 /*27*/].f_20;
}

int func_27(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_92(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == Global_1951255[iVar0 /*23*/].f_11 && iParam1 == Global_1951255[iVar0 /*23*/].f_4)
				{
					if (iParam3 <= Global_1951255[iVar0 /*23*/])
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
				func_93(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

bool func_28(int iParam0)
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

void func_29(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_28(iParam0))
	{
		return;
	}
	iVar0 = func_94(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1951255[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1951255[iVar0 /*23*/].f_3, iParam1, iParam2);
}

void func_30(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 - (uParam0->f_1 && iParam1));
}

void func_31(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_28(iParam0))
	{
		return;
	}
	iVar0 = func_94(iParam0);
	if (bParam1)
	{
		func_95(iParam0, 4);
		if (bParam3)
		{
			func_96(iVar0, 1);
		}
		func_97(iVar0, 1);
	}
	else
	{
		func_98(iParam0, 4);
		func_97(iVar0, 0);
	}
}

void func_32(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_28(iParam0))
	{
		return;
	}
	iVar0 = func_94(iParam0);
	func_96(iVar0, bParam1);
}

int func_33(var uParam0, int iParam1)
{
	if (uParam0->f_18 != iParam1)
	{
		uParam0->f_18 = iParam1;
		return 1;
	}
	return 0;
}

void func_34(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	uParam0->f_30 = MISC::_GET_SYSTEM_TIME();
}

bool func_35(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219.f_3 && iParam0) != 0;
	}
	return (Global_1100469[iParam1 /*53*/].f_3 && iParam0) != 0;
}

bool func_36()
{
	return Global_1071686.f_28662.f_65.f_42 != 0;
}

bool func_37()
{
	return Global_1071686.f_28662.f_22.f_3 != 0;
}

bool func_38()
{
	return Global_1071686.f_28662.f_58.f_6 == 2;
}

bool func_39(int iParam0)
{
	return func_99(1, iParam0);
}

int func_40(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_100(bParam1, bParam2, bParam3);
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

bool func_41()
{
	if (Global_1108365.f_935.f_23 && func_101())
	{
		return true;
	}
	if (func_103(func_102(0)))
	{
		if (func_101() && !func_104())
		{
			return false;
		}
		return true;
	}
	return false;
}

bool func_42()
{
	return (Global_1940311.f_1 || Global_1940311 == 1);
}

bool func_43()
{
	int iVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!PED::IS_PED_IN_ANY_VEHICLE(iVar1, false) && !func_105(iVar1))
	{
		return false;
	}
	iVar0 = PED::_GET_TRANSPORT_PED_IS_SEATED_ON(iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (!func_106(iVar0))
	{
		return false;
	}
	if (!AITRANSPORT::_0x2E2E06023D07631E(iVar0, -2))
	{
		return false;
	}
	return true;
}

bool func_44()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
	{
		return false;
	}
	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(iVar1))
	{
		return false;
	}
	iVar0 = PED::_GET_TRANSPORT_PED_IS_SEATED_ON(iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_VEHICLE(iVar0))
	{
		return false;
	}
	iVar2 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar0);
	iVar5 = 0;
	iVar3 = 0;
	while (iVar3 < 9)
	{
		iVar4 = iVar3;
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, iVar4) == iVar1)
		{
			iVar5 = 1;
		}
		iVar3++;
	}
	return iVar5;
}

bool func_45()
{
	int iVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!PED::IS_PED_IN_ANY_VEHICLE(iVar1, false) && !func_105(iVar1))
	{
		return false;
	}
	iVar0 = PED::_GET_TRANSPORT_PED_IS_SEATED_ON(iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_VEHICLE(iVar0))
	{
		return false;
	}
	if (!AITRANSPORT::_0x2E2E06023D07631E(iVar0, -2))
	{
		return false;
	}
	return true;
}

bool func_46()
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1296859.f_8))
	{
		return false;
	}
	if (!PED::IS_PED_A_PLAYER(Global_1296859.f_8))
	{
		return false;
	}
	iVar0 = func_107(Global_1296859.f_8);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (!PED::IS_PED_A_PLAYER(iVar0))
	{
		return false;
	}
	return true;
}

bool func_47(int iParam0)
{
	int iVar0;
	int iVar1;

	if (PLAYER::IS_PLAYER_DEAD(iParam0))
	{
		return true;
	}
	if (PED::_0xB655DB7582AEC805(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return true;
	}
	if (TASK::_0x038B1F1674F0E242(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return true;
	}
	if (func_108())
	{
		return true;
	}
	if (func_109(func_102(0)) == 7)
	{
		return true;
	}
	if (func_110())
	{
		return true;
	}
	if (func_39(255))
	{
		return true;
	}
	if (!func_111(0, 0, 0, 1, 0, 0, 0, 1, 1))
	{
		return true;
	}
	if (func_112())
	{
		return true;
	}
	if (func_113())
	{
		return true;
	}
	if (func_114())
	{
		return true;
	}
	if (Global_1901947.f_681.f_33)
	{
		iVar0 = PLAYER::_GET_MOUNT_OF_PLAYER(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (!func_115(Global_1904087.f_113[iVar1 /*96*/].f_1, 0))
				{
				}
				else
				{
					func_116(68, 0);
					return true;
				}
				iVar1++;
			}
		}
	}
	return false;
}

bool func_48(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_49(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_28(iParam0))
	{
		return 0f;
	}
	iVar0 = func_94(iParam0);
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1951255[iVar0 /*23*/].f_3))
	{
		return HUD::_UIPROMPT_GET_MASH_MODE_PROGRESS(Global_1951255[iVar0 /*23*/].f_3);
	}
	return HUD::_0x81801291806DBC50(Global_1951255[iVar0 /*23*/].f_3);
}

bool func_50(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_28(iParam0))
	{
		return false;
	}
	iVar0 = func_94(iParam0);
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

void func_51(int iParam0)
{
	func_117(&(Global_1071686.f_23887.f_4), iParam0);
}

bool func_52(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_28(iParam0))
	{
		return false;
	}
	iVar0 = func_94(iParam0);
	return HUD::_UIPROMPT_IS_ACTIVE(Global_1951255[iVar0 /*23*/].f_3);
}

void func_53(var uParam0, char* sParam1)
{
	if (uParam0->f_25 > 0f)
	{
		return;
	}
	func_118(sParam1, 10000, 0, 0, 0, 1);
	uParam0->f_25 = 20f;
}

bool func_54(bool bParam0, int iParam1)
{
	if (!func_119(PLAYER::PLAYER_ID(), bParam0, iParam1))
	{
		func_120(1, 1);
		return false;
	}
	else if (!func_121(PLAYER::PLAYER_ID(), bParam0, iParam1))
	{
		return false;
	}
	return true;
}

void func_55()
{
	func_122(0, 4);
	func_123(32768);
}

int func_56(var uParam0, int iParam1)
{
	Global_1071686.f_23887.f_3 = iParam1;
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1071686.f_23887.f_5.f_3, MISC::_CREATE_VAR_STRING(2, func_124(iParam1)));
	func_125(uParam0);
	return 1;
}

void func_57(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_58(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_59(var uParam0, var uParam1)
{
	struct<4> Var0;
	int iVar4;

	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(joaat("FAST_TRAVEL_MENU")))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(joaat("FAST_TRAVEL_MENU"), &Var0))
		{
			iVar4 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var0.f_3, "locationArrayIndex");
			switch (Var0)
			{
				case -1203660660:
					switch (Var0.f_2)
					{
						case -997855324:
							func_57(uParam0, 2);
							break;
						case 42753526:
							func_57(uParam0, 4);
							*uParam1 = iVar4;
							break;
					}
					break;
				case -1740156697:
					switch (Var0.f_2)
					{
						case 42753526:
							func_57(uParam0, 8);
							*uParam1 = iVar4;
							break;
					}
					break;
				case 703281244:
					switch (Var0.f_2)
					{
						case -1517694752:
							func_126(uParam0, 1);
							break;
					}
					break;
				case -722926211:
					switch (Var0.f_2)
					{
						case -1517694752:
							func_126(uParam0, 0);
							break;
					}
					break;
			}
			UIEVENTS::_EVENT_MANAGER_POP_EVENT(joaat("FAST_TRAVEL_MENU"));
		}
	}
}

int func_60(var uParam0)
{
	int iVar0;

	if (uParam0->f_20 < 14)
	{
		iVar0 = Global_1071686.f_23887.f_366[uParam0->f_4 /*272*/].f_5[uParam0->f_20 /*19*/].f_17;
	}
	else if (uParam0->f_20 == 14)
	{
		if (uParam0->f_5)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (uParam0->f_20 == 15)
	{
		iVar0 = func_127(uParam0);
	}
	return func_67(iVar0, uParam0);
}

bool func_61(int iParam0, int iParam1)
{
	*iParam1 = func_128(iParam0, 1);
	return *iParam1 != 0;
}

bool func_62(int iParam0, int iParam1)
{
	*iParam1 = func_129(iParam0, 1, 0);
	return *iParam1 != 0;
}

char* func_63(var uParam0)
{
	int iVar0;

	iVar0 = uParam0;
	switch (iVar0)
	{
		case joaat("STATION_BLACKWATER"):
			return "NFT_BLACKWATER_DESC";
		case joaat("STATION_MANZANITA"):
			return "NFT_MANZANITA_DESC";
		case joaat("STATION_STRAWBERRY"):
			return "NFT_STRAWBERRY_DESC";
		case joaat("STATION_COLTER"):
			return "NFT_COLTER_DESC";
		case joaat("STATION_WAPITI"):
			return "NFT_WAPITI_DESC";
		case joaat("STATION_VALENTINE"):
			return "NFT_VALENTINE_DESC";
		case joaat("STATION_VAN_HORN"):
			return "NFT_VAN_HORN_DESC";
		case joaat("STATION_ANNESBERG"):
			return "NFT_ANNESBERG_DESC";
		case joaat("STATION_EMERALD"):
			return "NFT_EMERALD_DESC";
		case joaat("STATION_RHODES"):
			return "NFT_RHODES_DESC";
		case joaat("STATION_LAGRAS"):
			return "NFT_LAGRAS_DESC";
		case joaat("STATION_TUMBLEWEED"):
			return "NFT_TUMBLEWEED_DESC";
		case joaat("STATION_MACFARLANES"):
			return "NFT_MACFARLANES_DESC";
		case joaat("STATION_ARMADILLO"):
			return "NFT_ARMADILLO_DESC";
		case joaat("STATION_SAINT_DENIS"):
			return "NFT_SAINT_DENIS_DESC";
	}
	return "";
}

int func_64()
{
	return Global_1298166.f_200;
}

bool func_65(int iParam0, bool bParam1)
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
	if (!func_130(Global_1298536[iVar0 /*87*/]))
	{
		return false;
	}
	if (Global_1298536[iVar0 /*87*/].f_5.f_12 == -1)
	{
		return false;
	}
	return true;
}

int func_66(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if ((bParam4 && iParam1 == -915411861) && func_131(iParam0, 59806960))
	{
		iParam1 = 59806960;
	}
	if (func_132(iParam0))
	{
		return func_134(func_133(iParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_135(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
		{
			if (iParam5 != 0 && Var0[iVar32 /*2*/] != iParam5)
			{
			}
			else
			{
				return Var0[iVar32 /*2*/].f_1;
				Jump @204; //curOff = 188
				if (Var0[iVar32 /*2*/] == 0)
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
}

int func_67(int iParam0, var uParam1)
{
	if (uParam1->f_5 || (uParam1->f_7 != 0 && iParam0 == 0))
	{
		iParam0 = (iParam0 + uParam1->f_7);
	}
	switch (iParam0)
	{
		case 1:
			return -1224135119;
		case 2:
			return -1540978580;
		case 3:
			return -1837275878;
		case 4:
			return 307422403;
		case 5:
			return 5849296;
		case 6:
			return -316007822;
		case 7:
			return -605358092;
		case 8:
			return 455865965;
		case 9:
			return 158356214;
		case 10:
			return -1476715399;
		case 11:
			return -1297534507;
		case 12:
			return 1282532708;
		case 13:
			return 482346497;
		case 14:
			return 1858054659;
		case 15:
			return 1100140454;
		case 16:
			return 1100140454;
		default:
			break;
	}
	if (iParam0 <= 0)
	{
		return -1224135119;
	}
	return 1100140454;
}

int func_68(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;

	if (!func_115(iParam1, 0))
	{
		return 1;
	}
	if (func_136(iParam1) != 1388422710)
	{
		return 2;
	}
	if (!func_61(iParam1, &uVar0))
	{
		iVar1 = func_66(iParam1, 59806960, 1, 0, 1, 0);
		if (iVar1 < 0 || !func_131(iParam1, 59806960))
		{
			return 3;
		}
		if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar1, 0) && iVar1 != 0)
		{
			return 4;
		}
	}
	if (iParam0 == 14)
	{
		if (!func_25(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) >= 0)
		{
			return 5;
		}
	}
	if (iParam0 == 15)
	{
		iVar2 = func_64();
		if (!func_65(iVar2, 1))
		{
			return 6;
		}
	}
	return 0;
}

int func_69(int iParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;
	int iVar35;
	struct<14> Var36;
	int iVar52;
	struct<17> Var53;

	if (!func_115(iParam0, 0))
	{
		return -1;
	}
	if (func_137(iParam0) != joaat("FEE"))
	{
		return -1;
	}
	if (func_138())
	{
		bParam3 = true;
	}
	if (iParam5 == -570078785 || iParam5 == -915411861)
	{
		iVar0 = (func_66(iParam0, iParam5, 1, 0, 1, joaat("CURRENCY_CASH")) * iParam2);
		iVar1 = 0;
		if (iVar0 <= 0)
		{
			iVar1 = (func_66(iParam0, iParam5, 1, 0, 1, joaat("CURRENCY_GOLD_BAR")) * iParam2);
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
	else if (func_135(iParam0, iParam5, &Var2, &iVar33, 1, 0))
	{
		iVar35 = 0;
		while (iVar35 < iVar33)
		{
			iVar34 = (Var2[iVar35 /*2*/].f_1 * iParam2);
			if (!func_139(Var2[iVar35 /*2*/], 0, bParam3, 0) >= iVar34)
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
	if (!bParam3 && func_140(0))
	{
		if (iVar0 > 0)
		{
			func_141(joaat("CURRENCY_CASH"), iVar0, -142743235, 0, 0);
		}
		else if (iVar1 > 0)
		{
			func_141(joaat("CURRENCY_GOLD_BAR"), iVar1, -142743235, 0, 0);
		}
		else if (func_142(iParam5))
		{
			iVar35 = 0;
			while (iVar35 < iVar33)
			{
				iVar34 = (Var2[iVar35 /*2*/].f_1 * iParam2);
				func_141(Var2[iVar35 /*2*/], iVar34, -142743235, 0, 0);
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
	iVar52 = func_143(joaat("SPEND"), &Var36, bParam4);
	if (iVar52 == -1)
	{
	}
	else
	{
		Var53.f_7 = -142743235;
		Var53.f_16 = -1;
		StringCopy(&(Var53.f_12), sParam1, 32);
		func_144(iVar52, Var53);
	}
	return iVar52;
}

int func_70(int iParam0, int iParam1, bool bParam2)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_135(iParam0, iParam1, &Var0, &iVar31, 1, 0))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (func_145(Var0[iVar32 /*2*/]))
		{
			return Var0[iVar32 /*2*/];
		}
		else if (Var0[iVar32 /*2*/] == 0)
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

int func_71(int iParam0)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	iVar0 = -1;
	if (!func_145(iParam0))
	{
		return iVar0;
	}
	iVar0 = 74330131;
	Var1 = { func_146(iParam0, 0, 0) };
	Var6 = { func_147(iParam0, Var1, Var1.f_4, 0) };
	if (!func_148(&Var6))
	{
		return -1;
	}
	if (func_149(Var6))
	{
		iVar0 = 90473367;
	}
	return iVar0;
}

void func_72(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_23 = iParam2;
	uParam0->f_22 = iParam1;
	uParam0->f_24 = iParam3;
}

void func_73(int iParam0)
{
	int iVar0;

	iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	if (SCRIPTS::_DOES_THREAD_EXIST(Global_1940144.f_105.f_1) && Global_1940144.f_105.f_1 != iVar0)
	{
		return;
	}
	Global_1940144.f_105.f_1 = iVar0;
	Global_1940144.f_105 = iParam0;
}

void func_74(bool bParam0, int iParam1)
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
		func_150(iParam1);
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
	func_84(bVar1, bVar2, bVar3, (bVar4 || bVar5), bVar6, 0, bVar5);
}

void func_75(int iParam0)
{
	func_151(&(Global_1071686.f_23887.f_4), iParam0);
}

int func_76(int iParam0, var uParam1)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	struct<10> Var8;
	int iVar22;

	iVar6 = SCRIPTS::GET_EVENT_AT_INDEX(1, iParam0);
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 6))
	{
		return 1;
	}
	Var8.f_9 = -1591664384;
	iVar22 = Var0.f_5;
	if (iVar6 != 1731288223)
	{
		return 1;
	}
	if (Var0 != uParam1->f_21)
	{
		return 1;
	}
	if (Var0.f_2 == 1)
	{
		return 2;
	}
	iVar7 = 0;
	while (iVar7 < Var0.f_4)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_RESPONSE_GET_ITEM_INFO(Var0, iVar7, &Var8))
		{
			if (!func_115(Var8.f_8, 0))
			{
			}
			else
			{
				if (iVar22 == joaat("USE"))
				{
					return 3;
				}
			}
		}
		iVar7++;
	}
	return 1;
}

int func_77(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346.f_20)
	{
		if (Global_1293346.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			return Global_1293346.f_20.f_1[iVar0 /*21*/].f_1;
		}
		iVar0++;
	}
	return 0;
}

void func_78(var uParam0)
{
	var uVar0;
	int iVar4;

	if (!func_152(uParam0))
	{
		return;
	}
	if (!func_153(uParam0->f_21, &uVar0))
	{
		func_154(uParam0);
		return;
	}
	iVar4 = func_70(uParam0->f_22, uParam0->f_23, 0);
	TELEMETRY::_TELEMETRY_COUPON(&uVar0, func_155(iVar4), iVar4, uParam0->f_24, uParam0->f_22, joaat("FAST_TRAVEL"));
	func_154(uParam0);
}

bool func_79(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	float fVar9;
	int iVar10;
	bool bVar11;
	int iVar12;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return false;
	}
	if (func_108())
	{
		if (bParam2)
		{
		}
		else
		{
			return false;
		}
	}
	switch (iParam0)
	{
		case 0:
			iVar10 = func_156(iParam1);
			if (iVar10 < 0)
			{
				return false;
			}
			func_157();
			func_158();
			bVar11 = true;
			if (func_159(0) && func_160(0))
			{
				bVar11 = false;
			}
			if (bVar11)
			{
				if (func_161(iVar1))
				{
					func_162(0, 1, 1);
				}
				else if (func_163(iVar0))
				{
					func_162(0, 1, 1);
				}
				else if (func_164())
				{
					func_165();
				}
				else if (func_105(iVar1))
				{
					func_166(1, 1);
				}
				else
				{
					iVar12 = PLAYER::_GET_MOUNT_OF_PLAYER(iVar0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar12))
					{
						if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), ENTITY::GET_ENTITY_COORDS(iVar12, false, false)) < 15f)
						{
							func_167(1, 1);
						}
					}
				}
			}
			func_168(Global_1071686.f_23887.f_366[iVar10 /*272*/]);
			func_169(0, 1017438712);
			func_170();
			if (func_171())
			{
				iVar2 = joaat("PLAYER_CAMP");
			}
			else
			{
				iVar2 = func_173(func_172(), 0);
			}
			TELEMETRY::_TELEMETRY_FAST_TRAVEL(iVar2, func_173(func_174(Global_1071686.f_23887.f_366[iVar10 /*272*/].f_2, 1), 0), Global_1071686.f_23887.f_366[iVar10 /*272*/].f_2);
			return true;
		case 1:
			if (!func_175(iVar0, 0))
			{
				return false;
			}
			func_157();
			func_158();
			if (func_161(iVar1))
			{
				func_162(0, 1, 1);
			}
			else if (func_163(iVar0))
			{
				func_162(0, 1, 1);
			}
			else if (func_164())
			{
				func_165();
			}
			func_176();
			func_169(0, 1017438712);
			func_170();
			iVar2 = joaat("PLAYER_CAMP");
			TELEMETRY::_TELEMETRY_FAST_TRAVEL(func_173(func_172(), 0), iVar2, func_26(func_90(PLAYER::PLAYER_ID())));
			return true;
		case 2:
			iVar3 = func_64();
			if (!func_65(iVar3, 1))
			{
				return false;
			}
			iVar4 = func_177(iVar3, 1);
			iVar5 = 1;
			if (iVar3 == iVar0)
			{
				iVar5 = 0;
			}
			vVar6 = { func_178(iVar4, iVar5) };
			fVar9 = func_179(iVar4, iVar5);
			func_180(vVar6, fVar9, 2f, 25f, 1, 1, 1);
			func_169(0, 1017438712);
			func_170();
			iVar2 = -1840671857;
			TELEMETRY::_TELEMETRY_FAST_TRAVEL(func_173(func_172(), 0), iVar2, vVar6);
			return true;
	}
	return true;
}

int func_80()
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

int func_81()
{
	if (Global_1102219.f_26.f_3337 == 9)
	{
		return 0;
	}
	if (Global_1102219.f_26.f_3337 == 10)
	{
		return 0;
	}
	if (Global_1102219.f_26.f_3337 == 11)
	{
		return 0;
	}
	if (func_83(2048))
	{
		return 1;
	}
	if (func_181(1))
	{
		return 1;
	}
	if (Global_1102219.f_26.f_3337 != 0)
	{
		return 1;
	}
	return 0;
}

int func_82()
{
	return Global_1102219.f_26.f_3337;
}

bool func_83(int iParam0)
{
	return (Global_1102219.f_26.f_9 && iParam0) != 0;
}

void func_84(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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

void func_85()
{
	int iVar0;

	if (func_17(36))
	{
		iVar0 = PLAYER::PLAYER_PED_ID();
		ENTITY::SET_ENTITY_COORDS(iVar0, Global_1102219.f_3897, false, false, true, true);
		ENTITY::SET_ENTITY_INVINCIBLE(iVar0, true);
		ENTITY::SET_ENTITY_VISIBLE(iVar0, false);
		ENTITY::SET_ENTITY_COLLISION(iVar0, false, false);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar0, false, false);
		PED::SET_PED_CAN_BE_TARGETTED(iVar0, false);
		ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 301, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 277, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 417, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 394, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 253, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
	}
}

void func_86(int iParam0, int iParam1, bool bParam2)
{
	if (func_182(iParam0, iParam1) && (!bParam2 || Global_1071686.f_22538.f_385[iParam0 /*11*/].f_1[iParam1] == SCRIPTS::GET_ID_OF_THIS_THREAD()))
	{
		MISC::CLEAR_BIT(&(Global_1071686.f_22538.f_385[iParam0 /*11*/]), iParam1);
		Global_1071686.f_22538.f_385[iParam0 /*11*/].f_1[iParam1] = 0;
		func_183();
	}
}

void func_87(int iParam0)
{
	Global_1102219.f_3 = (Global_1102219.f_3 - (Global_1102219.f_3 && iParam0));
}

bool func_88(int iParam0)
{
	return (Global_1071686.f_23887.f_4 && iParam0) != 0;
}

void func_89()
{
	if (func_119(PLAYER::PLAYER_ID(), 1, 1))
	{
		func_120(0, 1);
	}
	UIAPPS::_CLOSE_APP_BY_HASH(joaat("FAST_TRAVEL_MENU"));
}

int func_90(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return Global_1134390[iVar0 /*83*/].f_38.f_3;
	}
	return -1;
}

int func_91(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return -1;
	}
	if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1131196.f_1091), iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Global_1131196[iVar0 /*27*/].f_9 == iParam0 && Global_1131196[iVar0 /*27*/] != 3)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_92(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951255[iParam0 /*23*/].f_1 && iParam1) != 0;
}

void func_93(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_96(iParam0, 1);
	func_97(iParam0, 1);
	func_98(iParam0, 128);
}

int func_94(int iParam0)
{
	return iParam0;
}

void func_95(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951255[iParam0 /*23*/].f_1 = (Global_1951255[iParam0 /*23*/].f_1 - (Global_1951255[iParam0 /*23*/].f_1 && iParam1));
}

void func_96(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		if (Global_1951255[iParam0 /*23*/].f_5 == 5 && !func_92(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_97(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1951255[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_98(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951255[iParam0 /*23*/].f_1 = (Global_1951255[iParam0 /*23*/].f_1 || iParam1);
}

bool func_99(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_184(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 == func_185())
	{
		return func_184(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1296859.f_22[iParam1])
	{
		return func_184(&(Global_1100469[iParam1 /*53*/].f_4), iVar0, 5);
	}
	return false;
}

int func_100(bool bParam0, bool bParam1, bool bParam2)
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

bool func_101()
{
	return Global_1108365.f_935.f_28 != -1;
}

struct<2> func_102(int iParam0)
{
	return Global_1900736.f_1[iParam0 /*2*/];
}

bool func_103(struct<2> Param0)
{
	if (!func_186(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_187(Param0))
	{
		return false;
	}
	return true;
}

bool func_104()
{
	switch (Global_1108365.f_935.f_28)
	{
		case 6:
			return true;
		case 7:
			if (func_188())
			{
				return true;
			}
			return false;
		default:
			break;
	}
	return false;
}

bool func_105(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true);
	}
	return false;
}

bool func_106(int iParam0)
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
	return PED::_IS_THIS_MODEL_A_HORSE(iVar0);
}

int func_107(int iParam0)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = func_189(iParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && PED::IS_PED_ON_MOUNT(iParam0))
		{
			iVar0 = func_189(PED::GET_MOUNT(iParam0));
		}
	}
	return iVar0;
}

bool func_108()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("FEATURE_FAST_TRAVEL")))
	{
		return true;
	}
	if (func_41())
	{
		return true;
	}
	return func_88(2);
}

int func_109(var uParam0, var uParam1)
{
	return uParam0;
}

bool func_110()
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
	if (!func_103(Global_1051213) && Global_1572887.f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_111(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	if (!bParam7 && UIAPPS::_IS_ANY_APP_RUNNING())
	{
		return false;
	}
	iVar0 = Global_1296859.f_154[Global_1296859];
	iVar1 = Global_1296859.f_8;
	bVar2 = ENTITY::IS_ENTITY_DEAD(iVar1);
	bVar3 = PED::_0xB655DB7582AEC805(iVar1);
	if (bVar2 || bVar3)
	{
		if (!bParam5)
		{
			return false;
		}
	}
	else
	{
		if (!bParam4)
		{
			if (TASK::_0xEC7E480FF8BD0BED(Global_34))
			{
				return false;
			}
			if (PED::_GET_PED_BLACKBOARD_BOOL(Global_34, "inInspectionMode"))
			{
				return false;
			}
		}
		if (bParam0 && !PLAYER::IS_PLAYER_CONTROL_ON(iVar0))
		{
			if (bParam6 && Global_1102219.f_3 & 32 != 0)
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON(iVar1, "iMinigameSeat"))
			{
			}
			else
			{
				return false;
			}
		}
	}
	if (!bParam1)
	{
		if (Global_1915715.f_20638 || Global_1915715.f_22504.f_1)
		{
			return false;
		}
		if (TASK::_0xD04241BBF6D03A5E(Global_34) != 0)
		{
			return false;
		}
	}
	if (func_190())
	{
		return false;
	}
	if (Global_15)
	{
		return false;
	}
	if (!bParam2 && (((Global_1940144.f_10 || Global_1940144.f_11) || Global_1940144.f_12) || Global_1940144.f_13))
	{
		return false;
	}
	if (!bParam3)
	{
		iVar4 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (Global_1248240.f_9297 != -1)
		{
			return false;
		}
		if (Global_1128574[iVar4 /*56*/].f_34 & 1 != 0 && Global_1128574[iVar4 /*56*/].f_34 & 2 == 0)
		{
			return false;
		}
		if (Global_1130634.f_293)
		{
			return false;
		}
		if (Global_1572887.f_106.f_75 > 11 && Global_1572887.f_106.f_75 < 15)
		{
			return false;
		}
		else if (Global_1572887.f_106.f_75 > 15)
		{
			return false;
		}
	}
	if (!bParam8)
	{
		if ((SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(2) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(8)) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(9))
		{
			if (Global_1048576 || Global_2883584)
			{
				return false;
			}
			if (Global_1048581)
			{
				return false;
			}
			if (Global_1048585)
			{
				return false;
			}
		}
	}
	return true;
}

bool func_112()
{
	return Global_1896738.f_382;
}

bool func_113()
{
	return Global_1940311.f_1;
}

bool func_114()
{
	int iVar0;

	iVar0 = PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (func_191(65536, 255))
		{
			func_192(65536);
		}
		return false;
	}
	if (func_191(65536, 255))
	{
		return true;
	}
	return false;
}

bool func_115(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

void func_116(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_193(iParam0, &iVar0, &iVar1);
	if (!func_194(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_195(iVar0, iVar1);
}

void func_117(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

var func_118(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_119(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
		{
			return iParam2;
		}
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			return iParam2;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::_GET_MOUNT_OF_PLAYER(iParam0)))
	{
		return iParam2;
	}
	return func_196(Global_1291106[iParam0 /*19*/].f_4, 1);
}

void func_120(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (bParam1)
	{
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
		{
			return;
		}
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			return;
		}
	}
	iVar1 = iVar0;
	if (func_196(Global_1291106[iVar1 /*19*/].f_4, 1) != bParam0)
	{
		if (bParam0)
		{
			func_117(&(Global_1291106[iVar1 /*19*/].f_4), 1);
		}
		else
		{
			func_151(&(Global_1291106[iVar1 /*19*/].f_4), 1);
		}
		func_151(&(Global_1291106[iVar1 /*19*/].f_4), 2);
		if (bParam0)
		{
			func_197(&(Global_1291734.f_11.f_556));
		}
		else
		{
			func_198(&(Global_1291734.f_11.f_556));
		}
	}
}

bool func_121(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
		{
			return iParam2;
		}
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			return iParam2;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::_GET_MOUNT_OF_PLAYER(iParam0)))
	{
		return iParam2;
	}
	return func_196(Global_1291106[iParam0 /*19*/].f_4, 2);
}

void func_122(int iParam0, int iParam1)
{
	if (!func_182(iParam0, iParam1))
	{
		MISC::SET_BIT(&(Global_1071686.f_22538.f_385[iParam0 /*11*/]), iParam1);
		Global_1071686.f_22538.f_385[iParam0 /*11*/].f_1[iParam1] = SCRIPTS::GET_ID_OF_THIS_THREAD();
		func_183();
	}
}

void func_123(int iParam0)
{
	Global_1102219.f_3 = (Global_1102219.f_3 || iParam0);
}

char* func_124(int iParam0)
{
	switch (iParam0)
	{
		case -931758312:
			return "CAMP_LOCATION_CATEGORY_ALL";
		case joaat("NFT_CATEGORY_AMBARINO"):
			return "TITHE_AMBARINO";
		case joaat("NFT_CATEGORY_LEMOYNE"):
			return "TITHE_LEMOYNE";
		case joaat("NFT_CATEGORY_WEST_ELIZABETH"):
			return "TITHE_WEST_ELIZABETH";
		case joaat("NFT_CATEGORY_NEW_HANOVER"):
			return "TITHE_NEW_HANOVER";
		case joaat("NFT_CATEGORY_NEW_AUSTIN"):
			return "TITHE_NEW_AUSTIN";
	}
	return "ALL";
}

void func_125(var uParam0)
{
	int iVar0;
	struct<19> Var1;
	int iVar20;
	int iVar21;
	int iVar22;

	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(Global_1071686.f_23887.f_5.f_5);
	Var1 = 1;
	Var1.f_1 = 1;
	Var1.f_2 = joaat("COLOR_WHITE");
	Var1.f_4 = -1;
	Var1.f_5 = -1;
	Var1.f_6 = -1;
	Var1.f_10 = -1;
	Var1.f_11 = -1;
	Var1.f_12 = -1;
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (func_199(Global_1071686.f_23887.f_366[uParam0->f_4 /*272*/].f_5[iVar0 /*19*/]))
		{
			iVar20 = func_67(Global_1071686.f_23887.f_366[uParam0->f_4 /*272*/].f_5[iVar0 /*19*/].f_17, uParam0);
			if (func_61(iVar20, &iVar22))
			{
				iVar21 = 0;
				Var1 = 1;
			}
			else if (func_62(iVar20, &iVar22))
			{
				iVar21 = func_66(iVar20, iVar22, 1, 0, 1, 0);
				if (iVar21 != 0)
				{
					Var1 = MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar21, 0);
				}
				else
				{
					Var1 = 1;
				}
			}
			else
			{
				iVar21 = func_66(iVar20, 59806960, 1, 0, 1, 0);
				if (iVar21 != 0)
				{
					Var1 = MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar21, 0);
				}
				else
				{
					Var1 = 1;
				}
			}
			Var1.f_16 = MISC::_CREATE_VAR_STRING(0, Global_1071686.f_23887.f_366[uParam0->f_4 /*272*/].f_5[iVar0 /*19*/]);
			Var1.f_1 = 1;
			Var1.f_2 = joaat("COLOR_WHITE");
			Var1.f_3 = 0;
			Var1.f_17 = iVar21;
			Var1.f_18 = iVar21;
			Var1.f_6 = 42753526;
			Var1.f_5 = 42753526;
			Var1.f_4 = joaat("FAST_TRAVEL_MENU");
			func_200(&(Global_1071686.f_23887.f_5.f_7[iVar0 /*21*/]), Var1, iVar0);
		}
		iVar0++;
	}
	func_201(uParam0);
	func_202(uParam0);
}

void func_126(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_203();
	iVar1 = func_204(bParam1, 1, -1);
	iVar2 = (func_205(iVar0, 1) + iVar1);
	if (iVar2 < 1)
	{
		iVar2 = 6;
	}
	else if (iVar2 > 6)
	{
		iVar2 = 1;
	}
	iVar0 = func_206(iVar2, 1);
	func_56(uParam0, iVar0);
}

int func_127(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;

	iVar1 = func_64();
	if (!func_65(iVar1, 1))
	{
		iVar0 = 1;
		return iVar0;
	}
	iVar2 = func_177(iVar1, 1);
	vVar3 = { func_178(iVar2, 1) };
	fVar6 = func_9(vVar3, Global_35);
	uParam0->f_16 = BUILTIN::ROUND((fVar6 / 1000f));
	if (uParam0->f_16 == 0)
	{
		uParam0->f_16 = 1;
	}
	return (iVar0 + uParam0->f_16);
}

int func_128(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_207(iVar0, 1, 0);
		if (!func_135(iParam0, iVar33, &Var2, &iVar1, 1, 0))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_208(Var2[iVar34 /*2*/]))
				{
					if (!bParam1 || func_139(Var2[iVar34 /*2*/], 0, 1, 1) > 0)
					{
						return iVar33;
					}
					Jump @134; //curOff = 106
				}
				else if (Var2[iVar34 /*2*/] == 0)
				{
				}
				else
				{
					iVar34++;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_129(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	struct<2> Var9[15];
	int iVar40;
	int iVar41;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar40 = func_207(iVar0, 0, 1);
		if (!func_135(iParam0, iVar40, &Var9, &iVar1, 1, 0))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_209(Var9[iVar41 /*2*/]))
				{
					if (!bParam1 || func_139(Var9[iVar41 /*2*/], 0, 1, 1) > 0)
					{
						bVar8 = true;
					}
				}
				else if (Var9[iVar41 /*2*/] == joaat("CURRENCY_CASH") || Var9[iVar41 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
				{
					if ((bParam2 && Var9[iVar41 /*2*/] == joaat("CURRENCY_CASH")) || (!bParam2 && Var9[iVar41 /*2*/] == joaat("CURRENCY_GOLD_BAR")))
					{
						if (iVar4 == 0 || (bVar6 && Var9[iVar41 /*2*/].f_1 < iVar2))
						{
							iVar5 = iVar40;
							iVar3 = Var9[iVar41 /*2*/].f_1;
							iVar7 = 1;
						}
					}
					else if (iVar4 == 0 || Var9[iVar41 /*2*/].f_1 < iVar2)
					{
						iVar5 = iVar40;
						iVar3 = Var9[iVar41 /*2*/].f_1;
						iVar7 = 0;
					}
				}
				else if (Var9[iVar41 /*2*/] == 0)
				{
				}
				else
				{
					iVar41++;
				}
			}
			if (bVar8 && iVar5 != 0)
			{
				iVar4 = iVar5;
				iVar2 = iVar3;
				bVar6 = iVar7;
			}
		}
		iVar0++;
	}
	return iVar4;
}

bool func_130(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 32);
}

bool func_131(int iParam0, int iParam1)
{
	if (!func_115(iParam0, 0))
	{
		return false;
	}
	if (func_132(iParam0))
	{
		return func_210(func_133(iParam0, 0), iParam1, 0);
	}
	return ITEMDATABASE::_0xDEE7B3C76ED664BE(iParam0, iParam1) > 0;
}

bool func_132(int iParam0)
{
	if (func_211(iParam0, 75135761))
	{
		return true;
	}
	return false;
}

int func_133(int iParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_115(iParam0, 0))
	{
		return func_213(func_212(iParam0), bParam1);
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

int func_134(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_214(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if ((Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR")) || Var0[iVar32 /*2*/] == joaat("CHARACTER_ROLE_TOKEN"))
		{
			return Var0[iVar32 /*2*/].f_1;
		}
		else if (Var0[iVar32 /*2*/] == 0)
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

bool func_135(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_115(iParam0, 0))
	{
		return false;
	}
	*iParam3 = ITEMDATABASE::_0xDEE7B3C76ED664BE(iParam0, iParam1);
	if (*iParam3 == 0)
	{
		if (!bParam5)
		{
		}
		return false;
	}
	if (!bParam5)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!ITEMDATABASE::_0xAD73B614DF26CF8A(iParam0, iParam1, iVar0, uParam2[iVar0 /*2*/]))
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
		func_215(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

int func_136(int iParam0)
{
	struct<2> Var0;

	if (!func_115(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_137(int iParam0)
{
	vector3 vVar0;

	if (!func_115(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_138()
{
	if (INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(PLAYER::PLAYER_PED_ID()) != 3)
	{
		return false;
	}
	return INVENTORY::_0xFC7563F482781A3D();
}

int func_139(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_115(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_137(iParam0);
	if (iVar1 == joaat("AMMO") || (bParam1 && iVar1 == joaat("WEAPON")))
	{
		iVar2 = func_216(iParam0, 1);
		if (iVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar2);
		}
	}
	else if (iVar1 == joaat("WEAPON"))
	{
		return func_217(iParam0, 0);
	}
	if (func_218(iParam0, joaat("DEFAULT")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_219(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_220(iParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_219(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

bool func_140(bool bParam0)
{
	if (func_221() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_219(bParam0));
}

bool func_141(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_115(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_218(iParam0, joaat("DEFAULT"));
	if (iVar0 != 0)
	{
		return func_222(iParam0, iParam1, iParam2, iParam3, bParam4);
	}
	Var1 = { func_146(iParam0, bParam4, 0) };
	Var6 = { func_147(iParam0, Var1, Var1.f_4, bParam4) };
	return func_223(iParam0, &Var6, &Var1, iParam1, iParam2, iParam3, bParam4);
}

bool func_142(int iParam0)
{
	switch (iParam0)
	{
		case -1103707655:
		case 205718222:
		case 866168015:
			return true;
		default:
			break;
	}
	return false;
}

int func_143(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_224(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_226(func_225(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_227(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_144(int iParam0, struct<17> Param1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346.f_20)
	{
		if (Global_1293346.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			if (Global_1293346.f_20.f_1[iVar0 /*21*/].f_1 == 1 || Global_1293346.f_20.f_1[iVar0 /*21*/].f_1 == 5)
			{
				Global_1293346.f_20.f_1[iVar0 /*21*/].f_4 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

bool func_145(int iParam0)
{
	if (func_136(iParam0) == -126813555 || func_136(iParam0) == 1946043663)
	{
		return true;
	}
	return false;
}

struct<5> func_146(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_228(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_137(iParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_147(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_229(bParam1) };
			if (bParam2 && func_230(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_231(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_231(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_232(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
		case joaat("COACH"):
		case joaat("HORSE"):
			Var0.f_4 = 1782082944;
			break;
		case joaat("EMOTE"):
			Var0.f_4 = -1591664384;
			Var0 = { func_233(bParam1) };
			switch (func_136(iParam0))
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
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_234(iParam0, -1823706425))
			{
				Var0 = { func_147(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_234(iParam0, -1483207246))
			{
				Var0 = { func_147(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1911121386))
			{
				Var0 = { func_147(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_234(iParam0, -1653629781))
			{
				Var0 = { func_147(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_235(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_234(iParam0, -1653629781))
			{
				Var0 = { func_147(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1384535894);
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("CHARACTER"));
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

struct<4> func_147(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_115(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_219(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_148(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_149(struct<4> Param0)
{
	if (!func_148(&Param0))
	{
		return false;
	}
	if (func_236(&Param0))
	{
		return false;
	}
	return func_238(func_237(Param0));
}

void func_150(int iParam0)
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
		func_239();
	}
	PLAYER::SET_PLAYER_INVINCIBLE(iVar0, false);
	if (!PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
	{
		ENTITY::SET_ENTITY_COLLISION(iVar1, true, false);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar1, true, false);
	}
}

void func_151(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_152(var uParam0)
{
	if (uParam0->f_23 == 0)
	{
		return false;
	}
	if (uParam0->f_22 == 0)
	{
		return false;
	}
	if (uParam0->f_24 == -1)
	{
		return false;
	}
	return true;
}

bool func_153(var uParam0, var uParam1)
{
	if (TELEMETRY::_0xF184B3ECE36219CF(uParam0, uParam1))
	{
		return true;
	}
	return false;
}

void func_154(var uParam0)
{
	uParam0->f_24 = -1;
	uParam0->f_23 = 0;
	uParam0->f_22 = 0;
}

int func_155(int iParam0)
{
	return func_240(iParam0);
}

int func_156(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if (Global_1071686.f_23887.f_366[iVar0 /*272*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_157()
{
	func_241(1);
	func_242(1);
}

void func_158()
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
}

int func_159(bool bParam0)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (!func_243(&Var0, bParam0))
	{
		return 1;
	}
	return 0;
}

int func_160(bool bParam0)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (!func_244(&Var0, bParam0))
	{
		return 1;
	}
	return 0;
}

bool func_161(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		return false;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_USING(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != iParam0)
	{
		return false;
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0);
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
	{
		return false;
	}
	iVar2 = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return false;
	}
	if (iVar0 != iVar2)
	{
		return false;
	}
	return true;
}

void func_162(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_245(74);
		if (bParam2)
		{
			func_245(72);
		}
		Global_1102219.f_3802 = iParam0;
	}
	else
	{
		func_246(74);
		func_246(72);
	}
}

bool func_163(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	iVar0 = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	iVar1 = PLAYER::GET_PLAYER_PED(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	if (func_247(iVar1, iVar0, 1, 1) > 25f)
	{
		return false;
	}
	return true;
}

bool func_164()
{
	int iVar0;

	iVar0 = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iVar0) > 0)
	{
		return false;
	}
	return true;
}

void func_165()
{
	if (func_248(8, 255))
	{
		return;
	}
	func_249(3);
}

void func_166(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_245(66);
		if (bParam1)
		{
			func_245(69);
		}
	}
	else
	{
		func_246(66);
		func_246(69);
	}
}

void func_167(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_245(62);
		if (bParam1)
		{
			func_245(69);
		}
	}
	else
	{
		func_246(62);
		func_246(50);
		func_246(69);
	}
}

void func_168(int iParam0)
{
	func_250(iParam0, 1);
}

int func_169(bool bParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1102219.f_16)
	{
		return 0;
	}
	if (!func_251())
	{
		return 0;
	}
	if (!func_252())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_253(&Global_0, 8);
	}
	func_253(&Global_0, 1);
	return 1;
}

void func_170()
{
	if (Global_1291734.f_1403.f_5 == 1)
	{
		return;
	}
	Global_1291734.f_1403.f_5 = 1;
}

bool func_171()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_254(iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_172()
{
	return Global_1893587.f_2;
}

int func_173(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("REGION_BAY_CRAWDADWILLIES");
		case 1:
			return joaat("REGION_BAY_MACOMBS_END");
		case 2:
			return joaat("REGION_BAY_MERKINSWALLER");
		case 3:
			return joaat("REGION_BAY_LAGRAS");
		case 4:
			return joaat("REGION_BAY_LAKAY");
		case 5:
			return joaat("REGION_BAY_SAINT_DENIS");
		case 6:
			return joaat("REGION_BAY_ORANGE_PLANTATION");
		case 7:
			return joaat("REGION_BAY_SERIAL_KILLER");
		case 8:
			return joaat("REGION_BAY_SERENDIPITY");
		case 9:
			return joaat("REGION_BAY_SHADYBELLE");
		case 10:
			return joaat("REGION_BAY_SILTWATERSTRAND");
		case 11:
			return joaat("REGION_BGV_APPLESEEDTIMBER");
		case 12:
			return joaat("REGION_BGV_BERYLS_DREAM");
		case 13:
			return joaat("REGION_BGV_BLACKBONEFOREST_TRAPPER");
		case 14:
			return joaat("REGION_BGV_DAKOTARIVER_TRAPPER");
		case 15:
			return joaat("REGION_BGV_FORTRIGGS");
		case 16:
			return joaat("REGION_BGV_HANGINGDOG");
		case 17:
			return joaat("REGION_BGV_LONEMULESTEAD");
		case 18:
			return joaat("REGION_BGV_MISSING_HUSBAND");
		case 19:
			return joaat("REGION_BGV_MONTO_REST");
		case 20:
			return joaat("REGION_BGV_OWANJILA_DAM");
		case 21:
			return joaat("REGION_BGV_PAINTEDSKY");
		case 22:
			return joaat("REGION_BGV_PRONGHORN");
		case 24:
			return joaat("REGION_BGV_SHACK");
		case 23:
			return joaat("REGION_BGV_RIGGS_STATION");
		case 25:
			return joaat("REGION_BGV_SHEPHERDS_RISE");
		case 26:
			return joaat("REGION_BGV_STRAWBERRY");
		case 27:
			return joaat("REGION_BGV_VALLEY_VIEW");
		case 28:
			return joaat("REGION_BGV_WALLACE_STATION");
		case 30:
			return joaat("REGION_BGV_WATSONSCABIN");
		case 29:
			return joaat("REGION_BGV_OLD_MAN_JONES");
		case 31:
			return joaat("REGION_BLU_CANEBREAK_MANOR");
		case 32:
			return joaat("REGION_BLU_COPPERHEAD");
		case 33:
			return joaat("REGION_BLU_SISIKA");
		case 34:
			return joaat("REGION_BLU_TRAVELLING_SALESMAN");
		case 35:
			return joaat("REGION_CML_BACCHUSBRIDGE");
		case 36:
			return joaat("REGION_CML_DINO_LADY");
		case 37:
			return joaat("REGION_CML_OLDFORTWALLACE");
		case 38:
			return joaat("REGION_CML_SIXPOINTCABIN");
		case 39:
			return joaat("REGION_GRT_BEECHERS");
		case 40:
			return joaat("REGION_GRT_BLACKWATER");
		case 41:
			return joaat("REGION_GRT_QUAKERS_COVE");
		case 42:
			return joaat("REGION_GRZ_ADLERRANCH");
		case 43:
			return joaat("REGION_GRZ_DEAD_RIVAL");
		case 53:
			return joaat("REGION_GRZ_CALUMETRAVINE");
		case 54:
			return joaat("REGION_GRE_CIVIL_WAR_BRIDE");
		case 44:
			return joaat("REGION_GRZ_CHEZPORTER");
		case 55:
			return joaat("REGION_GRZ_COHUTTA");
		case 45:
			return joaat("REGION_GRZ_COLTER");
		case 56:
			return joaat("REGION_GRZ_COTORRA_SPRINGS");
		case 46:
			return joaat("REGION_GRZ_FROZEN_EXPLORER");
		case 57:
			return joaat("REGION_GRZ_GUNFIGHT");
		case 47:
			return joaat("REGION_GRZ_MILLESANI_CLAIM");
		case 48:
			return joaat("REGION_GRZ_MOUNTAIN_MAN");
		case 49:
			return joaat("REGION_GRZ_MOUNT_HAGEN_PEAK");
		case 50:
			return joaat("REGION_GRZ_STARVING_CHILDREN");
		case 51:
			return joaat("REGION_GRZ_TEMPEST_RIM");
		case 58:
			return joaat("REGION_GRZ_THELOFT");
		case 59:
			return joaat("REGION_GRE_VETERAN");
		case 60:
			return joaat("REGION_GRZ_WAPITI");
		case 52:
			return joaat("REGION_GRZ_WINTERMINING_TOWN");
		case 61:
			return joaat("REGION_GRZ_TRAVELLING_SALESMAN");
		case 62:
			return joaat("REGION_GUA_AGUASDULCES");
		case 63:
			return joaat("REGION_GUA_CAMP");
		case 64:
			return joaat("REGION_GUA_CINCOTORRES");
		case 65:
			return joaat("REGION_GUA_LACAPILLA");
		case 66:
			return joaat("REGION_GUA_MANICATO");
		case 67:
			return joaat("REGION_HRT_ABANDONED_MILL");
		case 69:
			return joaat("REGION_HRT_CARMODYDELL");
		case 70:
			return joaat("REGION_HRT_CORNWALLKEROSENE");
		case 71:
			return joaat("REGION_HRT_CROP_FARM");
		case 72:
			return joaat("REGION_HRT_CUMBERLANDFALLS");
		case 73:
			return joaat("REGION_HRT_DOWNSRANCH");
		case 74:
			return joaat("REGION_HRT_EMERALDRANCH");
		case 75:
			return joaat("REGION_HRT_GRANGERS_HOGGERY");
		case 76:
			return joaat("REGION_HRT_HORSESHOEOVERLOOK");
		case 77:
			return joaat("REGION_HRT_LARNEDSOD");
		case 78:
			return joaat("REGION_HRT_LOONY_CULT");
		case 79:
			return joaat("REGION_HRT_LUCKYSCABIN");
		case 80:
			return joaat("REGION_HRT_SWANSONS_STATION");
		case 81:
			return joaat("REGION_HRT_VALENTINE");
		case 82:
			return joaat("REGION_ROA_ABERDEENPIGFARM");
		case 83:
			return joaat("REGION_ROA_ANNESBURG");
		case 84:
			return joaat("REGION_ROA_BEAVERHOLLOW");
		case 68:
			return joaat("REGION_ROA_BEECHERS_C");
		case 85:
			return joaat("REGION_ROA_BLACK_BALSAM_RISE");
		case 86:
			return joaat("REGION_ROA_BRANDYWINE_DROP");
		case 87:
			return joaat("REGION_ROA_BUTCHERCREEK");
		case 88:
			return joaat("REGION_ROA_DOVERHILL");
		case 89:
			return joaat("REGION_ROA_HAPPY_FAMILY");
		case 90:
			return joaat("REGION_ROA_ISOLATIONIST");
		case 91:
			return joaat("REGION_ROA_MACLEANSHOUSE");
		case 92:
			return joaat("REGION_ROA_MOSSY_FLATS");
		case 93:
			return joaat("REGION_ROA_ROANOKE_VALLEY");
		case 94:
			return joaat("REGION_ROA_ROCKYSEVEN");
		case 95:
			return joaat("REGION_ROA_TRAPPER");
		case 97:
			return joaat("REGION_ROA_VANHORNMANSION");
		case 98:
			return joaat("REGION_ROA_VANHORNPOST");
		case 96:
			return joaat("REGION_ROA_OLD_MAN_JONES");
		case 99:
			return joaat("REGION_SCM_BRAITHWAITEMANOR");
		case 100:
			return joaat("REGION_SCM_BULGERGLADE");
		case 101:
			return joaat("REGION_SCM_CALIGAHALL");
		case 102:
			return joaat("REGION_SCM_CATFISHJACKSONS");
		case 103:
			return joaat("REGION_SCM_CLEMENSCOVE");
		case 104:
			return joaat("REGION_SCM_CLEMENSPOINT");
		case 105:
			return joaat("REGION_SCM_COMPSONS_STEAD");
		case 106:
			return joaat("REGION_SCM_DAIRY_FARM");
		case 107:
			return joaat("REGION_SCM_HORSE_SHOP");
		case 108:
			return joaat("REGION_SCM_LONNIESSHACK");
		case 109:
			return joaat("REGION_SCM_LOVE_TRIANGLE");
		case 110:
			return joaat("REGION_SCM_RADLEYS_PASTURE");
		case 111:
			return joaat("REGION_SCM_RHODES");
		case 112:
			return joaat("REGION_SCM_SLAVE_PEN");
		case 113:
			return joaat("REGION_TAL_AURORA_BASIN");
		case 115:
			return joaat("REGION_TAL_COCHINAY");
		case 116:
			return joaat("REGION_TAL_MANZANITAPOST");
		case 117:
			return joaat("REGION_TAL_PACIFICUNIONRR");
		case 118:
			return joaat("REGION_TAL_TANNERSREACH");
		case 114:
			return joaat("REGION_TAL_DEAD_SETTLER");
		case 119:
			return joaat("REGION_TAL_TRAPPER");
		case 135:
			return joaat("REGION_HEN_MACFARLANES_RANCH");
		case 136:
			return joaat("REGION_HEN_THIEVES_LANDING");
		case 137:
			return joaat("REGION_HEN_TRAVELLING_SALESMAN");
		case 138:
			return -1573562784;
		case 127:
			return joaat("REGION_CHO_ARMADILLO");
		case 128:
			return joaat("REGION_CHO_COOTS_CHAPEL");
		case 129:
			return joaat("REGION_CHO_DON_JULIO_HOUSE");
		case 131:
			return joaat("REGION_CHO_RIDGEWOOD_FARM");
		case 130:
			return joaat("REGION_CHO_RILEYS_CHARGE");
		case 132:
			return joaat("REGION_CHO_TWIN_ROCKS");
		case 133:
			return joaat("REGION_CHO_TRAVELLING_SALESMAN");
		case 134:
			return 1869665995;
		case 120:
			return joaat("REGION_GAP_GAPTOOTH_BREACH");
		case 121:
			return joaat("REGION_GAP_TUMBLEWEED");
		case 122:
			return joaat("REGION_GAP_RATHSKELLER_FORK");
		case 123:
			return joaat("REGION_RIO_BENEDICT_POINT");
		case 124:
			return joaat("REGION_RIO_FORT_MERCER");
		case 125:
			return joaat("REGION_RIO_PLAIN_VIEW");
		case 126:
			return joaat("REGION_RIO_TRAVELLING_SALESMAN");
		case 139:
			return joaat("REGION_CENTRALUNIONRR");
		default:
			break;
	}
	if (bParam1)
	{
		return joaat("WILDERNESS");
	}
	return 0;
}

int func_174(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_172();
	if (func_255(iVar0))
	{
		if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1887339[iVar0 /*36*/].f_4, vParam0))
		{
			return iVar0;
		}
	}
	return func_256(vParam0, iParam3);
}

bool func_175(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !NETWORK::NETWORK_IS_IN_SESSION())
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (Global_1137047.f_9[iVar0 /*10*/].f_4.f_2 != 0 && Global_1137047.f_9[iVar0 /*10*/].f_2 == iParam0)
			{
				return true;
			}
			iVar0++;
		}
		if (bParam1)
		{
			func_118("GC_H_PLACE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	iVar1 = GANG::_0x901E0DC25080C8B9(iParam0);
	if (func_23(func_25(iVar1)))
	{
		return true;
	}
	if (bParam1)
	{
		func_118("GC_H_PLACE", 10000, 0, 0, 0, 1);
	}
	return false;
}

void func_176()
{
	func_257(1);
	func_258(1, 1);
}

int func_177(int iParam0, bool bParam1)
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

Vector3 func_178(int iParam0, int iParam1)
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
	func_261(1268215321, func_259(iParam0), func_260(iParam1), 0);
	if (!DATAFILE::_DATAFILE_GET_VECTOR(&vVar0, &(Global_1298378.f_1)))
	{
		return 0f, 0f, 0f;
	}
	return vVar0;
}

float func_179(int iParam0, int iParam1)
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
	func_261(-226869021, func_259(iParam0), func_260(iParam1), 0);
	if (!DATAFILE::_DATAFILE_GET_FLOAT(&fVar0, &(Global_1298378.f_1)))
	{
		return 0f;
	}
	return fVar0;
}

void func_180(vector3 vParam0, float fParam3, float fParam4, float fParam5, int iParam6, int iParam7, float fParam8)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
	fVar3 = fParam3;
	if (!func_262(Global_1296859.f_17, &vVar0, &fVar3))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
		fVar3 = fParam3;
	}
	func_263(vParam0, fParam3, vVar0, fVar3, fParam4, fParam5, iParam6, iParam7, fParam8, 1);
}

bool func_181(int iParam0)
{
	return (Global_1102219.f_26.f_7 && iParam0) != 0;
}

bool func_182(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1071686.f_22538.f_385[iParam0 /*11*/], iParam1);
}

void func_183()
{
	SCRIPTS::_0x20F4CB76689ACDBC(&(Global_1071686.f_21416.f_260));
}

bool func_184(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_185()
{
	return Global_1102219.f_3672;
}

bool func_186(int iParam0)
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

int func_187(int iParam0)
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

bool func_188()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (func_264(iVar0, 8192))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_189(int iParam0)
{
	int iVar0;

	iVar0 = func_265(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::_IS_PED_HOGTIED(iVar0))
	{
		return iVar0;
	}
	return 0;
}

bool func_190()
{
	return (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_26538) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_26538, false));
}

bool func_191(int iParam0, int iParam1)
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

void func_192(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	Global_1291106[iVar0 /*19*/].f_1 = (Global_1291106[iVar0 /*19*/].f_1 - (Global_1291106[iVar0 /*19*/].f_1 && iParam0));
}

void func_193(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

bool func_194(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_266(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_267(iParam0))
	{
		return false;
	}
	if (func_268(iParam0))
	{
		return false;
	}
	if ((Global_1900736.f_67 && !func_269(iParam0, 1)) || func_270(32768))
	{
		if (!func_269(iParam0, 262144) || !Global_1904651.f_8686)
		{
			return false;
		}
	}
	if (!func_271())
	{
		return false;
	}
	return true;
}

void func_195(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904651[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904651[iParam0] = uVar0;
}

bool func_196(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_197(var uParam0)
{
	func_272(uParam0, 0f);
}

void func_198(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_199(var uParam0)
{
	int iVar0;

	iVar0 = func_203();
	if (iVar0 == -931758312)
	{
		return true;
	}
	return func_273(uParam0) == iVar0;
}

void func_200(var uParam0, struct<19> Param1, int iParam20)
{
	func_274(uParam0, Param1, iParam20);
	Global_1071686.f_23887.f_5.f_302[iParam20] = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1071686.f_23887.f_5.f_7[iParam20 /*21*/], "locationArrayIndex", iParam20);
}

void func_201(var uParam0)
{
	struct<19> Var0;
	bool bVar19;
	int iVar20;
	int iVar21;

	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = joaat("COLOR_WHITE");
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	bVar19 = true;
	if (uParam0->f_5)
	{
		if (func_61(func_67(0, uParam0), &iVar21))
		{
			iVar20 = 0;
			Var0 = 1;
		}
		else if (func_62(func_67(0, uParam0), &iVar21))
		{
			iVar20 = func_66(func_67(0, uParam0), iVar21, 1, 0, 1, 0);
			Var0 = MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar20, 0);
		}
		else
		{
			iVar20 = func_66(func_67(0, uParam0), 59806960, 1, 0, 1, 0);
			Var0 = MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar20, 0);
		}
		Var0.f_1 = 1;
		Var0.f_2 = joaat("COLOR_WHITE");
		Var0.f_3 = 0;
		Var0.f_16 = "";
		Var0.f_16 = MISC::_CREATE_VAR_STRING(0, Global_1071686.f_23887.f_366[uParam0->f_4 /*272*/]);
		Var0.f_17 = iVar20;
		Var0.f_18 = iVar20;
		Var0.f_6 = 42753526;
		Var0.f_5 = 42753526;
		Var0.f_4 = joaat("FAST_TRAVEL_MENU");
		func_275(&(Global_1071686.f_23887.f_5.f_317), Var0, 14);
		return;
	}
	else if (!func_25(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) >= 0)
	{
		bVar19 = false;
	}
	if (func_61(func_67(0, uParam0), &iVar21))
	{
		iVar20 = 0;
		Var0 = bVar19;
	}
	else if (func_62(func_67(0, uParam0), &iVar21))
	{
		iVar20 = func_66(func_67(0, uParam0), iVar21, 1, 0, 1, 0);
		if (iVar20 != 0)
		{
			Var0 = (MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar20, 0) && bVar19);
		}
		else
		{
			Var0 = bVar19;
		}
	}
	else
	{
		iVar20 = func_66(func_67(0, uParam0), 59806960, 1, 0, 1, 0);
		if (iVar20 != 0)
		{
			Var0 = (MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar20, 0) && bVar19);
		}
		else
		{
			Var0 = bVar19;
		}
	}
	Var0.f_1 = 1;
	Var0.f_2 = joaat("COLOR_WHITE");
	Var0.f_3 = 0;
	Var0.f_16 = "";
	Var0.f_16 = MISC::_CREATE_VAR_STRING(2, "NFT_LOCATION_TYPE_CAMP_DESC");
	Var0.f_17 = iVar20;
	Var0.f_18 = iVar20;
	Var0.f_6 = 42753526;
	Var0.f_5 = 42753526;
	Var0.f_4 = joaat("FAST_TRAVEL_MENU");
	func_275(&(Global_1071686.f_23887.f_5.f_317), Var0, 14);
}

void func_202(var uParam0)
{
	struct<19> Var0;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;

	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = joaat("COLOR_WHITE");
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	bVar19 = true;
	iVar23 = func_64();
	if (func_65(iVar23, 1))
	{
		iVar21 = func_127(uParam0);
		if (func_61(func_67(0, uParam0), &iVar22))
		{
			iVar20 = 0;
			Var0 = 1;
		}
		else if (func_62(func_67(0, uParam0), &iVar22))
		{
			iVar20 = func_66(func_67(iVar21, uParam0), iVar22, 1, 0, 1, 0);
			Var0 = MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar20, 0);
		}
		else
		{
			iVar20 = func_66(func_67(iVar21, uParam0), 59806960, 1, 0, 1, 0);
			Var0 = MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar20, 0);
		}
		Var0.f_1 = 1;
		Var0.f_2 = joaat("COLOR_WHITE");
		Var0.f_3 = 0;
		Var0.f_16 = "";
		Var0.f_16 = MISC::_CREATE_VAR_STRING(2, "NFT_LOCATION_TYPE_MOONSHINE_DESC");
		Var0.f_17 = iVar20;
		Var0.f_18 = iVar20;
		Var0.f_6 = 42753526;
		Var0.f_5 = 42753526;
		Var0.f_4 = joaat("FAST_TRAVEL_MENU");
		func_276(&(Global_1071686.f_23887.f_5.f_339), Var0, 15);
		return;
	}
	else
	{
		bVar19 = false;
	}
	if (func_61(func_67(0, uParam0), &iVar22))
	{
		iVar20 = 0;
		Var0 = bVar19;
	}
	else if (func_62(func_67(0, uParam0), &iVar22))
	{
		iVar20 = func_66(func_67(0, uParam0), iVar22, 1, 0, 1, 0);
		if (iVar20 != 0)
		{
			Var0 = (MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar20, 0) && bVar19);
		}
		else
		{
			Var0 = bVar19;
		}
	}
	else
	{
		iVar20 = func_66(func_67(0, uParam0), 59806960, 1, 0, 1, 0);
		if (iVar20 != 0)
		{
			Var0 = (MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar20, 0) && bVar19);
		}
		else
		{
			Var0 = bVar19;
		}
	}
	Var0.f_1 = 1;
	Var0.f_2 = joaat("COLOR_WHITE");
	Var0.f_3 = 0;
	Var0.f_16 = "";
	Var0.f_16 = MISC::_CREATE_VAR_STRING(2, "NFT_LOCATION_TYPE_MOONSHINE_DESC");
	Var0.f_17 = iVar20;
	Var0.f_18 = iVar20;
	Var0.f_6 = 42753526;
	Var0.f_5 = 42753526;
	Var0.f_4 = joaat("FAST_TRAVEL_MENU");
	func_276(&(Global_1071686.f_23887.f_5.f_339), Var0, 15);
}

var func_203()
{
	return Global_1071686.f_23887.f_3;
}

int func_204(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_205(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("NFT_CATEGORY_AMBARINO"):
			return 2;
		case joaat("NFT_CATEGORY_LEMOYNE"):
			return 3;
		case -931758312:
			return 1;
		case joaat("NFT_CATEGORY_NEW_AUSTIN"):
			return 6;
		case 0:
			return 0;
		case joaat("NFT_CATEGORY_NEW_HANOVER"):
			return 5;
		case joaat("NFT_CATEGORY_WEST_ELIZABETH"):
			return 4;
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

int func_206(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return -931758312;
		case 2:
			return joaat("NFT_CATEGORY_AMBARINO");
		case 3:
			return joaat("NFT_CATEGORY_LEMOYNE");
		case 4:
			return joaat("NFT_CATEGORY_WEST_ELIZABETH");
		case 5:
			return joaat("NFT_CATEGORY_NEW_HANOVER");
		case 6:
			return joaat("NFT_CATEGORY_NEW_AUSTIN");
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

int func_207(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 205718222;
			case 1:
				return 866168015;
			case 2:
				return -1103707655;
			default:
				break;
		}
		iVar0 = 3;
	}
	if (bParam2)
	{
		switch ((iParam0 - iVar0))
		{
			case 0:
				return 75922725;
			case 1:
				return 1070046552;
			case 2:
				return -1843707398;
			case 3:
				return -1571233163;
			case 4:
				return -1197011183;
			default:
				break;
		}
	}
	return 0;
}

bool func_208(int iParam0)
{
	return func_136(iParam0) == 1946043663;
}

bool func_209(int iParam0)
{
	return func_136(iParam0) == -126813555;
}

bool func_210(int iParam0, int iParam1, bool bParam2)
{
	if (!func_277(iParam0))
	{
		return false;
	}
	if (ITEMDATABASE::_0xF540239F9937033B(iParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_278(iParam0, iParam1);
	}
	return true;
}

bool func_211(int iParam0, int iParam1)
{
	if (!func_115(iParam0, 0))
	{
		return func_279(func_212(iParam0), iParam1);
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1120943070))
	{
		return true;
	}
	return false;
}

int func_212(int iParam0)
{
	return iParam0;
}

int func_213(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_280(iParam0, 2))
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

bool func_214(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*uParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_277(iParam0))
	{
		return false;
	}
	*uParam3 = ITEMDATABASE::_0xF540239F9937033B(iParam0, iParam1);
	if (*uParam3 == 0)
	{
		if (!bParam4)
		{
		}
		return false;
	}
	if (!bParam4)
	{
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (!ITEMDATABASE::_0xF27F01BBF5ACD3F3(iParam0, iParam1, iVar0, uParam2[iVar0 /*2*/]))
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
		func_281(iParam0, iParam1, uParam2, *uParam3);
	}
	return true;
}

void func_215(int iParam0, int iParam1, var uParam2, int iParam3)
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
		uVar6 = Var7.f_1[iVar1];
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
							if ((*uParam2)[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (fVar21[iVar0] + (Var19.f_1 - 1f));
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
		if (fVar21[iVar0] != 1f && (uParam2[iVar0 /*2*/])->f_1 > 0)
		{
			if (*uParam2)[iVar0 /*2*/] == joaat("CURRENCY_GOLD_BAR")
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 100f))) / 1000000) * 100;
			}
			else
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 100f))) / 10000);
			}
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_136((*uParam2)[iVar0 /*2*/]) != -829303394)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

int func_216(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_115(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_137(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_211(iParam0, 1399091007))
	{
		func_282(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_217(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_283(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_284(&Var0, func_229(0));
	}
	if (!func_285(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_286(iVar14);
	return uVar15;
}

int func_218(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

int func_219(bool bParam0)
{
	if (func_221() == -1)
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

struct<4> func_220(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_146(iParam0, bParam1, 0) };
	return func_147(iParam0, Var0, Var0.f_4, bParam1);
}

int func_221()
{
	return Global_1572887.f_13;
}

int func_222(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	struct<6> Var1[10];
	int iVar62;
	int iVar63;
	int iVar64;
	struct<16> Var65;
	struct<17> Var81;

	if (func_287(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_218(iParam0, joaat("DEFAULT"));
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_140(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_288(&Var1, &iVar62, iParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -1591664384;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_289(iParam0, &(Var1[iVar63 /*6*/])) };
			Var65.f_12 = iParam2;
			iVar64 = func_143(joaat("USE"), &Var65, 1);
			if (iVar64 == -1)
			{
				return 0;
			}
			iVar63++;
		}
		if (iVar64 != -1)
		{
			Var81.f_7 = -142743235;
			Var81.f_16 = -1;
			Var81 = iParam3;
			Var81.f_7 = iParam2;
			func_144(iVar64, Var81);
			return 1;
		}
		return 0;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_219(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

bool func_223(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<14> Var0;
	int iVar14;
	struct<13> Var15;
	struct<17> Var31;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return false;
	}
	if (func_287(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_235(*uParam1, &Var0, bParam6, 0, -1))
	{
		return false;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_140(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_221() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_143(joaat("USE"), &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31.f_16 = -1;
				Var31 = iParam5;
				Var31.f_7 = iParam4;
				func_144(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_219(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_224(int iParam0, var uParam1)
{
	var uVar0;

	uVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, uParam1);
	if (iParam0 == joaat("USE"))
	{
		if ((func_290(uParam1->f_8, iParam0, uVar0, 2048) || func_290(uParam1->f_8, iParam0, uVar0, 32768)) || func_290(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_290(uParam1->f_8, iParam0, uVar0, 4) || func_290(uParam1->f_8, iParam0, uVar0, 256)) || func_290(uParam1->f_8, iParam0, uVar0, 65536)) || func_290(uParam1->f_8, iParam0, uVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SPEND"))
	{
		if (((func_290(uParam1->f_8, iParam0, uVar0, 1) || func_290(uParam1->f_8, iParam0, uVar0, 8)) || func_290(uParam1->f_8, iParam0, uVar0, 65536)) || func_290(uParam1->f_8, iParam0, uVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SELL"))
	{
		if (((func_290(uParam1->f_8, iParam0, uVar0, 1) || func_290(uParam1->f_8, iParam0, uVar0, 16)) || func_290(uParam1->f_8, iParam0, uVar0, 2)) || func_290(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_290(uParam1->f_8, iParam0, uVar0, 8) || func_290(uParam1->f_8, iParam0, uVar0, 4096)) || func_290(uParam1->f_8, iParam0, uVar0, 256)) || func_290(uParam1->f_8, iParam0, uVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_225(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_226(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_291(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_291(iParam1, 2, 0, 0);
	return -1;
}

int func_227(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_291(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

struct<4> func_228(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_219(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1293346))
			{
				Global_1293346 = { func_147(joaat("CHARACTER"), func_292(), -1591664384, bParam0) };
			}
			return Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_12)))
			{
				Global_1293346.f_12 = { func_147(joaat("CHARACTER"), func_292(), -1591664384, 0) };
			}
			return Global_1293346.f_12;
		}
	}
	return func_147(joaat("CHARACTER"), func_292(), -1591664384, bParam0);
}

struct<4> func_229(bool bParam0)
{
	int iVar0;

	iVar0 = func_219(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_4)))
		{
			Global_1293346.f_4 = { func_147(923904168, func_228(bParam0), -740156546, bParam0) };
		}
		return Global_1293346.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_16)))
		{
			Global_1293346.f_16 = { func_147(923904168, func_228(bParam0), -740156546, 0) };
		}
		return Global_1293346.f_16;
	}
	return func_147(923904168, func_228(bParam0), -740156546, 0);
}

bool func_230(int iParam0, bool bParam1)
{
	if (func_136(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_293();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_231(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_294(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_232(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_295(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_233(bool bParam0)
{
	int iVar0;

	iVar0 = func_219(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_8)))
		{
			Global_1293346.f_8 = { func_147(271701509, func_228(bParam0), 12999093, 0) };
		}
		return Global_1293346.f_8;
	}
	return func_147(271701509, func_228(bParam0), 12999093, 0);
}

bool func_234(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_136(iParam0);
	if (iVar1 == -1015256479)
	{
		return false;
	}
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (func_296(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_235(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_297(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

bool func_236(var uParam0)
{
	if (!func_148(uParam0))
	{
		return false;
	}
	return INVENTORY::_0x0137C77A2EC64536(uParam0);
}

int func_237(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (!func_148(&uParam0))
	{
		return 0;
	}
	return INVENTORY::_0x4A606C17276E1BCC(&uParam0);
}

bool func_238(int iParam0)
{
	if (iParam0 <= 0)
	{
		return false;
	}
	return (NETWORK::GET_CLOUD_TIME_AS_INT() + func_298()) > iParam0;
}

void func_239()
{
	if (!Global_1102219.f_16)
	{
		return;
	}
	Global_1071686.f_28662.f_5 = 1;
	AUDIO::_0x531A78D6BF27014B("rdro_gamemode_transition_sounds");
	AUDIO::_0x531A78D6BF27014B("rdro_gamemode_generic_sounds");
}

int func_240(int iParam0)
{
	if (!func_145(iParam0))
	{
		return 0;
	}
	if (func_209(iParam0))
	{
		return -1957466003;
	}
	if (func_211(iParam0, -1457263561))
	{
		return -84670860;
	}
	if (func_211(iParam0, -732976331))
	{
		return -700121520;
	}
	if (func_211(iParam0, 1495098826))
	{
		return 917298505;
	}
	if (func_211(iParam0, 2088554948))
	{
		return -1638586319;
	}
	return 176863985;
}

void func_241(bool bParam0)
{
	if (bParam0)
	{
		func_245(113);
	}
	else
	{
		func_246(113);
	}
}

void func_242(bool bParam0)
{
	if (bParam0)
	{
		func_245(112);
	}
	else
	{
		func_246(112);
	}
}

bool func_243(var uParam0, bool bParam1)
{
	struct<29> Var0;
	struct<14> Var29;
	int iVar43;
	int iVar44;
	struct<10> Var45;
	int iVar59;

	Var0.f_9 = -1591664384;
	Var29 = { func_283(0, -1591664384, -1591664384, -1591664384, joaat("CI_CATEGORY_HORSE"), 0, 0) };
	if (func_285(&Var29, &iVar43, &iVar44, bParam1))
	{
		Var45.f_9 = -1591664384;
		iVar59 = 0;
		while (iVar59 < iVar44)
		{
			if (func_299(&Var45, iVar59, iVar43, iVar44))
			{
				if (func_300(&Var45, &Var0, 0))
				{
					if (func_301(&(Var0.f_24), 16))
					{
						*uParam0 = { Var0 };
						func_286(iVar43);
						return true;
					}
				}
			}
			iVar59++;
		}
		func_286(iVar43);
	}
	return false;
}

bool func_244(var uParam0, bool bParam1)
{
	struct<24> Var0;
	struct<14> Var24;
	int iVar38;
	int iVar39;
	struct<10> Var40;
	int iVar54;

	Var0.f_9 = -1591664384;
	Var24 = { func_283(0, -1591664384, -1591664384, -1591664384, 0, 0, joaat("COACH")) };
	if (func_285(&Var24, &iVar38, &iVar39, bParam1))
	{
		Var40.f_9 = -1591664384;
		iVar54 = 0;
		while (iVar54 < iVar39)
		{
			if (func_299(&Var40, iVar54, iVar38, iVar39))
			{
				if (func_302(&Var40, &Var0, 0))
				{
					if (func_301(&(Var0.f_23), 16))
					{
						*uParam0 = { Var0 };
						func_286(iVar38);
						return true;
					}
				}
			}
			iVar54++;
		}
		func_286(iVar38);
	}
	return false;
}

int func_245(int iParam0)
{
	if (func_303(&(Global_1102219.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_246(int iParam0)
{
	if (func_304(&(Global_1102219.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

float func_247(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_248(int iParam0, int iParam1)
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

void func_249(int iParam0)
{
	func_305(2, iParam0);
}

void func_250(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!bParam1)
	{
		func_246(8);
	}
	else
	{
		if (func_306(255) == 4)
		{
			return;
		}
		iVar0 = -1;
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (Global_1071686.f_23887.f_366[iVar1 /*272*/] == iParam0)
			{
				iVar0 = iVar1;
			}
			iVar1++;
		}
		if (iVar0 < 0)
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 15);
			iParam0 = Global_1071686.f_23887.f_366[iVar0 /*272*/];
		}
		Global_1102219.f_3915 = iParam0;
		func_307(&(Global_1102219.f_3849));
		Global_1102219.f_3849 = 0f;
		Global_1102219.f_3849.f_5 = 1;
		Global_1102219.f_3849.f_16 = 0;
		Global_1102219.f_3849.f_17.f_6 = { Global_1071686.f_23887.f_366[iVar0 /*272*/].f_2 };
		Global_1102219.f_3849.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102219.f_3849.f_17 = { Global_1901947.f_50.f_1, Global_1901947.f_50.f_1, Global_1901947.f_50.f_1 };
		Global_1102219.f_3849.f_17.f_9 = joaat("VOLSPHERE");
		func_308(&(Global_1102219.f_3888));
		iVar2 = func_309(iParam0);
		iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar2);
		if (func_310(iParam0, iVar3, &(Global_1102219.f_3888.f_6), &(Global_1102219.f_3888)))
		{
			Global_1102219.f_3888.f_5 = 1;
		}
		func_245(8);
		func_245(0);
	}
}

bool func_251()
{
	return !Global_1572887.f_9;
}

bool func_252()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

void func_253(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_254(int iParam0)
{
	return func_311(iParam0, 1);
}

bool func_255(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_256(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_312(vParam0);
	iVar1 = -1;
	if (Global_1893570[iVar0] > 0)
	{
		iVar2 = (Global_1893570[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = Global_1892753[iVar0 /*51*/][iVar2];
			if (VOLUME::_DOES_VOLUME_EXIST(Global_1887339[iVar4 /*36*/].f_4))
			{
				if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1887339[iVar4 /*36*/].f_4, vParam0))
				{
					switch (Global_1887339[iVar4 /*36*/].f_21)
					{
						case 5:
							if (!bParam3)
							{
								iVar1 = iVar4;
								bVar3 = true;
							}
							break;
						default:
							iVar1 = iVar4;
							bVar3 = true;
							break;
					}
				}
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (iVar1 != -1)
	{
	}
	return iVar1;
}

void func_257(bool bParam0)
{
	if (!bParam0)
	{
		func_246(5);
	}
	else
	{
		if (func_306(255) == 4)
		{
			return;
		}
		func_245(5);
	}
}

void func_258(bool bParam0, bool bParam1)
{
	if (func_306(255) == 4)
	{
		return;
	}
	if (func_313(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_246(0);
	}
	else
	{
		if (bParam1)
		{
			func_314(0, 0, 0, 1);
		}
		func_245(0);
		func_307(&(Global_1102219.f_3849));
		Global_1102219.f_3849 = 0f;
		Global_1102219.f_3849.f_5 = 1;
		Global_1102219.f_3849.f_16 = 0;
		Global_1102219.f_3849.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1102219.f_3849.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102219.f_3849.f_17 = { Global_1901947.f_50.f_1, Global_1901947.f_50.f_1, Global_1901947.f_50.f_1 };
		Global_1102219.f_3849.f_17.f_9 = joaat("VOLSPHERE");
		func_308(&(Global_1102219.f_3888));
		Global_1102219.f_3888.f_6 = { Global_1102219.f_3849.f_17.f_6 };
		Global_1102219.f_3888 = Global_1102219.f_3849;
		Global_1102219.f_3888.f_5 = 1;
		if (bParam1)
		{
			Global_1102219.f_26.f_3341 = 0;
			Global_1102219.f_26.f_3342 = 0;
		}
	}
	func_315(Global_1102219.f_3849, 36);
	func_316(Global_1102219.f_3888, 36);
}

int func_259(int iParam0)
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

int func_260(int iParam0)
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

void func_261(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_317();
	Global_1298378.f_1.f_2 = iParam0;
	Global_1298378.f_1.f_3 = iParam1;
	Global_1298378.f_1.f_4 = iParam2;
	Global_1298378.f_1.f_1 = iParam3;
}

bool func_262(vector3 vParam0, var uParam3, float fParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = Global_1071686.f_23887.f_366[func_318(vParam0) /*272*/];
	iVar1 = func_309(iVar0);
	if (iVar1 <= 0)
	{
		return false;
	}
	else
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
		if (func_310(iVar0, iVar2, uParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

void func_263(vector3 vParam0, float fParam3, vector3 vParam4, float fParam7, float fParam8, float fParam9, bool bParam10, int iParam11, float fParam12, int iParam13)
{
	if (func_306(255) == 4)
	{
		return;
	}
	if (func_313(vParam0))
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
		func_314(0, 0, 0, 1);
	}
	func_245(0);
	func_245(3);
	Global_1102219.f_3919 = iParam11;
	Global_1102219.f_3920 = fParam12;
	Global_1102219.f_3921 = iParam13;
	func_307(&(Global_1102219.f_3849));
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
	func_308(&(Global_1102219.f_3888));
	Global_1102219.f_3888.f_6 = { vParam4 };
	Global_1102219.f_3888 = fParam7;
	Global_1102219.f_3888.f_5 = 1;
	Global_1102219.f_26.f_3341 = 0;
	Global_1102219.f_26.f_3342 = 0;
	func_315(Global_1102219.f_3849, 36);
	func_316(Global_1102219.f_3888, 36);
}

bool func_264(int iParam0, int iParam1)
{
	return func_319(Global_1196898.f_78[iParam0 /*20*/].f_6, iParam1);
}

int func_265(int iParam0)
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

bool func_266(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17411.f_2565[iParam0], iParam1);
}

bool func_267(int iParam0)
{
	if (func_269(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_268(int iParam0)
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

bool func_269(int iParam0, int iParam1)
{
	return (Global_1904651.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_270(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_271()
{
	if (!func_252())
	{
		return false;
	}
	return Global_1904651.f_8684;
}

void func_272(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_320() - fParam1);
	func_321(uParam0, 1);
	func_322(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_273(var uParam0)
{
	struct<4> Var0;
	var uVar5;

	Var0 = Global_1071686.f_23887.f_366.f_4085;
	Var0.f_2 = 724817478;
	Var0.f_3 = uParam0;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 355943382;
		DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
		return uVar5;
	}
	return -931758312;
}

void func_274(var uParam0, struct<19> Param1, int iParam20)
{
	char cVar0[64];

	StringCopy(&cVar0, "Fast_Travel_Location_", 64);
	StringIntConCat(&cVar0, iParam20, 64);
	Param1.f_7 = 1993479432; /* GXTEntry: "Travel" */
	func_323(uParam0, Global_1071686.f_23887.f_5.f_4, cVar0, Param1);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1071686.f_23887.f_5.f_5, iParam20, "ft_dynamic_text_and_price", *uParam0);
}

void func_275(var uParam0, struct<19> Param1, int iParam20)
{
	func_274(uParam0, Param1, iParam20);
	Global_1071686.f_23887.f_5.f_338 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1071686.f_23887.f_5.f_317, "locationArrayIndex", 14);
}

void func_276(var uParam0, struct<19> Param1, int iParam20)
{
	func_274(uParam0, Param1, iParam20);
	Global_1071686.f_23887.f_5.f_360 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1071686.f_23887.f_5.f_339, "locationArrayIndex", 15);
}

bool func_277(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_BUY_AWARD_KEY_VALID(iParam0);
}

bool func_278(int iParam0, int iParam1)
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
		return false;
	}
	iVar473 = 0;
	iVar474 = 0;
	while (iVar474 < iVar471)
	{
		if (Var0[iVar474 /*47*/] == iParam1)
		{
			iVar473 = Var0[iVar474 /*47*/].f_35;
			iVar475 = 0;
			while (iVar475 < iVar473)
			{
				iVar472 = Var0[iVar474 /*47*/].f_36[iVar475];
				if (iVar472 == 0)
				{
				}
				else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar472))
				{
					return true;
				}
				iVar475++;
			}
		}
		iVar474++;
	}
	return false;
}

int func_279(int iParam0, int iParam1)
{
	if (!func_280(iParam0, 2))
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

bool func_280(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

void func_281(int iParam0, int iParam1, var uParam2, int iParam3)
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
		uVar6 = Var7.f_1[iVar1];
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
							if ((*uParam2)[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (fVar21[iVar0] + (Var19.f_1 - 1f));
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
		if (fVar21[iVar0] != 1f && (uParam2[iVar0 /*2*/])->f_1 > 0)
		{
			if (*uParam2)[iVar0 /*2*/] == joaat("CURRENCY_GOLD_BAR")
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 100f))) / 1000000) * 100;
			}
			else
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 100f))) / 10000);
			}
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_136((*uParam2)[iVar0 /*2*/]) != -829303394)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

void func_282(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REVOLVER_EXPRESS");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REVOLVER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*uParam1 = joaat("PISTOL_AMMO_BOX");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_PISTOL_EXPRESS");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_PISTOL_HIGH_VELOCITY");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*uParam1 = joaat("RIFLE_AMMO_BOX");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_RIFLE_EXPRESS");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_RIFLE_HIGH_VELOCITY");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*uParam1 = joaat("REPEATER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REPEATER_EXPRESS");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REPEATER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX_SLUG");
			*uParam2 = joaat("AMMO_SHOTGUN_SLUG");
			break;
		case joaat("AMMO_22_AMMOBOX"):
			*uParam1 = joaat("22_AMMO_BOX");
			*uParam2 = joaat("AMMO_22");
			break;
	}
}

struct<14> func_283(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_284(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_285(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_219(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_286(int iParam0)
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

bool func_287(int iParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

bool func_288(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	*iParam1 = 0;
	if (iParam4 < 1)
	{
		return false;
	}
	else if (*uParam0 != 10)
	{
		return false;
	}
	if (iParam3 == 0)
	{
		iParam3 = func_218(iParam2, joaat("DEFAULT"));
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!NETSHOPPING::_0xD1555FBC96C88444(iParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_324(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

struct<16> func_289(int iParam0, var uParam1)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_147(iParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = iParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

int func_290(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_319(uParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_291(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346.f_20)
	{
		if (Global_1293346.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			if (Global_1293346.f_20.f_1[iVar0 /*21*/].f_1 == iParam1)
			{
			}
			else
			{
				Global_1293346.f_20.f_1[iVar0 /*21*/].f_1 = iParam1;
			}
			if (iParam2 != 0 && iParam3 != 0)
			{
				Global_1293346.f_20.f_1[iVar0 /*21*/].f_2 = iParam2;
				Global_1293346.f_20.f_1[iVar0 /*21*/].f_3 = iParam3;
			}
			return;
		}
		iVar0++;
	}
	func_325(iParam0, iParam1, iParam2, iParam3);
}

struct<4> func_292()
{
	struct<4> Var0;

	return Var0;
}

bool func_293()
{
	return (func_326(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_327(func_147(joaat("WARDROBE"), func_228(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_294(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_115(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_218(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_147(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_219(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_219(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_295(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_219(0);
	*uParam1 = { func_147(iParam0, func_229(0), iParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return false;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam1, uParam2, 22, 1))
	{
		return false;
	}
	return true;
}

bool func_296(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 487172188)
	{
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("DEFAULT")) == -1925887917)
		{
			return false;
		}
	}
	return ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, iParam2);
}

bool func_297(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_219(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

int func_298()
{
	int iVar0;

	if (!NETWORK::NETWORK_DOES_TUNABLE_EXIST(-475019843, 135369362))
	{
		return 604800;
	}
	iVar0 = 604800;
	if (!NETWORK::NETWORK_ACCESS_TUNABLE_INT(-475019843, 135369362, &iVar0))
	{
		return 604800;
	}
	return iVar0;
}

bool func_299(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return false;
	}
	if (!INVENTORY::_0x82FA24C3D3FCD9B7(iParam2, iParam1, uParam0))
	{
		return false;
	}
	return true;
}

bool func_300(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	iVar0 = func_219(bParam2);
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

bool func_301(var uParam0, int iParam1)
{
	return func_319(*uParam0, iParam1);
}

bool func_302(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	iVar0 = func_219(bParam2);
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam0, uParam1, 24, 1))
	{
		return false;
	}
	return true;
}

bool func_303(var uParam0, int iParam1, int iParam2)
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

bool func_304(var uParam0, int iParam1, int iParam2)
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

void func_305(int iParam0, int iParam1)
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

int func_306(int iParam0)
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

void func_307(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_308(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

int func_309(int iParam0)
{
	struct<4> Var0;

	Var0 = Global_1071686.f_23887.f_366.f_4085;
	Var0.f_2 = 1593794963;
	Var0.f_3 = iParam0;
	return DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
}

bool func_310(int iParam0, int iParam1, var uParam2, float fParam3)
{
	struct<5> Var0;

	Var0 = Global_1071686.f_23887.f_366.f_4085;
	Var0.f_2 = 160165798;
	Var0.f_3 = iParam0;
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

bool func_311(int iParam0, int iParam1)
{
	if (!func_23(iParam0))
	{
		return false;
	}
	return func_319(Global_1132288.f_1[iParam0 /*63*/].f_61, iParam1);
}

int func_312(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_328(vParam0, 0f, 0f, 0, 2);
	return func_328(vParam0, Global_1892740[iVar0 /*3*/].f_1, Global_1892740[iVar0 /*3*/].f_2, Global_1892740[iVar0 /*3*/], 4);
}

bool func_313(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_314(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_329(iParam0);
	if (!func_181(1))
	{
		return;
	}
	if (bParam1)
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_83(128) && !func_17(19))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_80() == 4)
	{
		func_246(18);
	}
	func_330(1024);
}

void func_315(struct<29> Param0, var uParam29, int iParam30)
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

void func_316(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

void func_317()
{
	Global_1298378.f_1 = Global_1071686.f_28448[50 /*4*/].f_3;
	Global_1298378.f_1.f_1 = 0;
	Global_1298378.f_1.f_2 = 0;
	Global_1298378.f_1.f_3 = 0;
	Global_1298378.f_1.f_4 = 0;
}

int func_318(vector3 vParam0)
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

bool func_319(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_320()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_321(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_322(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_323(var uParam0, var uParam1, char[32] cParam2, struct<19> Param10)
{
	func_331(uParam0, uParam1, cParam2, Param10);
	uParam0->f_18 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_332(15), Param10.f_16);
	uParam0->f_19 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, func_332(50), Param10.f_17);
	uParam0->f_20 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, func_332(51), Param10.f_18);
}

bool func_324(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	*iParam1 = 0;
	if (*uParam0 != 10)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iParam2 < 1)
		{
			Jump @253; //curOff = 37
		}
		else if ((uParam0[iVar0 /*6*/])->f_4 == 0)
		{
			Jump @244; //curOff = 55
		}
		else if ((uParam0[iVar0 /*6*/])->f_5 == 0)
		{
			Jump @244; //curOff = 73
		}
		else if (func_236(uParam0[iVar0 /*6*/]))
		{
		}
		else
		{
			if (iVar0 != *iParam1)
			{
				*(uParam0[*iParam1 /*6*/]) = { *(uParam0[iVar0 /*6*/]) };
				(uParam0[*iParam1 /*6*/])->f_4 = (uParam0[iVar0 /*6*/])->f_4;
			}
			if ((uParam0[iVar0 /*6*/])->f_5 > iParam2)
			{
				(uParam0[*iParam1 /*6*/])->f_5 = iParam2;
				iParam2 = 0;
			}
			else
			{
				(uParam0[*iParam1 /*6*/])->f_5 = (uParam0[iVar0 /*6*/])->f_5;
				iParam2 = (iParam2 - (uParam0[*iParam1 /*6*/])->f_5);
			}
			if (iVar0 > *iParam1)
			{
				*(uParam0[iVar0 /*6*/]) = { func_292() };
				(uParam0[iVar0 /*6*/])->f_4 = 0;
				(uParam0[iVar0 /*6*/])->f_5 = 0;
			}
			*iParam1++;
		}
		iVar0++;
	}
	if (bParam3 && iParam2 > 0)
	{
		*iParam1 = 0;
		return false;
	}
	return true;
}

void func_325(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1293346.f_20 < 20)
	{
		Global_1293346.f_20++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1293346.f_20.f_1[iVar0 /*21*/] = { Global_1293346.f_20.f_1[iVar0 + 1 /*21*/] };
			iVar0++;
		}
	}
	func_333(&(Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/]));
	Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/] = iParam0;
	Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

int func_326(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_334(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_219(bParam1), iParam0, iParam3);
}

int func_327(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_335(&uParam0, iParam4, bParam5, iParam6);
}

int func_328(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
{
	if (Param0 < fParam3)
	{
		if (Param0.f_1 < fParam4)
		{
			return (iParam5 + iParam6);
		}
		else
		{
			return iParam5;
		}
	}
	if (Param0.f_1 < fParam4)
	{
		return (iParam5 + iParam6) + 1;
	}
	return iParam5 + 1;
}

void func_329(int iParam0)
{
	Global_1102219.f_26.f_12 = iParam0;
}

void func_330(int iParam0)
{
	if (func_336(iParam0))
	{
		return;
	}
	Global_1102219.f_26.f_9 = (Global_1102219.f_26.f_9 || iParam0);
}

void func_331(var uParam0, var uParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, struct<16> Param10)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1, &cParam2);
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_332(0), Param10);
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_332(1), Param10.f_1);
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_332(2), Param10.f_2);
	uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_332(54), Param10.f_3);
	uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_332(55), Param10.f_4);
	uParam0->f_7 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_332(57), Param10.f_5);
	uParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_332(56), Param10.f_6);
	if (Param10.f_7 == 0)
	{
		Param10.f_7 = joaat("IB_SELECT");
	}
	uParam0->f_8 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_332(58), Param10.f_7);
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_332(59), Param10.f_8);
	uParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_332(60), Param10.f_9);
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_332(61), Param10.f_10);
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_332(67), Param10.f_11);
	uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_332(62), Param10.f_12);
	if (Param10.f_13 == 0)
	{
		Param10.f_13 = joaat("IB_SELECT");
	}
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_332(64), Param10.f_13);
	uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_332(65), Param10.f_14);
	uParam0->f_16 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_332(66), Param10.f_15);
}

char* func_332(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "dynamic_list_item_enabled";
		case 1:
			return "dynamic_list_item_visible";
		case 2:
			return "dynamic_list_item_main_color";
		case 3:
			return "dynamic_list_item_secondary_color";
		case 4:
			return "dynamic_list_item_tertiary_color";
		case 5:
			return "dynamic_list_item_main_img_texture_dic";
		case 6:
			return "dynamic_list_item_main_img_texture";
		case 7:
			return "dynamic_list_item_main_img_visible";
		case 8:
			return "dynamic_list_item_main_img_enabled";
		case 9:
			return "dynamic_list_item_status_icon_texture_dic";
		case 10:
			return "dynamic_list_item_status_icon_texture";
		case 11:
			return "dynamic_list_item_status_icon_visible";
		case 12:
			return "dynamic_list_item_deco_texture_dic";
		case 13:
			return "dynamic_list_item_deco__texture";
		case 14:
			return "dynamic_list_item_deco_visible";
		case 15:
			return "dynamic_list_item_raw_text_entry";
		case 16:
			return "dynamic_list_item_text_label_entry";
		case 17:
			return "dynamic_list_item_secondary_raw_text_entry";
		case 18:
			return "dynamic_list_item_secondary_text_label_entry";
		case 19:
			return "dynamic_list_item_secondary_text_visible";
		case 20:
			return "dynamic_list_item_secondary_text_enabled";
		case 21:
			return "dynamic_list_item_end_img_texture_dic";
		case 22:
			return "dynamic_list_item_end_img_texture";
		case 23:
			return "dynamic_list_item_end_img_visible";
		case 24:
			return "dynamic_list_item_corner_end_img_texture_dic";
		case 25:
			return "dynamic_list_item_corner_end_img_texture";
		case 26:
			return "dynamic_list_item_corner_end_img_visible";
		case 27:
			return "dynamic_list_item_entry_player_index";
		case 28:
			return "dynamic_list_item_entry_friend_index";
		case 29:
			return "dynamic_list_item_player_gamer_handle";
		case 30:
			return "dynamic_list_item_option_stepper_visible";
		case 31:
			return "dynamic_list_item_option_stepper_text_enabled";
		case 32:
			return "dynamic_list_item_option_stepper_items";
		case 33:
			return "dynamic_list_item_option_stepper_current_hash";
		case 34:
			return "dynamic_list_item_option_stepper_current_index";
		case 35:
			return "dynamic_list_item_option_stepper_max_index";
		case 36:
			return "dynamic_list_item_left_chevron_enabled";
		case 37:
			return "dynamic_list_item_right_chevron_enabled";
		case 38:
			return "dynamic_list_item_option_stepper_index_change_ui_event_hash";
		case 39:
			return "dynamic_list_item_main_fill_maximum";
		case 40:
			return "dynamic_list_item_main_fill_value";
		case 41:
			return "dynamic_list_item_extra_text_field_entry_one_raw_text";
		case 42:
			return "dynamic_list_item_extra_text_field_entry_two_raw_text";
		case 43:
			return "dynamic_list_item_extra_text_field_entry_three_raw_text";
		case 44:
			return "dynamic_list_item_extra_text_field_entry_one_visibility";
		case 45:
			return "dynamic_list_item_extra_text_field_entry_two_visibility";
		case 46:
			return "dynamic_list_item_extra_text_field_entry_three_visibility";
		case 47:
			return "dynamic_list_item_extra_img_texture_one_dic";
		case 48:
			return "dynamic_list_item_extra_img_one_texture";
		case 49:
			return "dynamic_list_item_extra_img_one_visible";
		case 50:
			return "dynamic_list_item_extra_int_field_one_value";
		case 51:
			return "dynamic_list_item_extra_int_field_two_value";
		case 52:
			return "dynamic_list_item_extra_vector_field_one_value";
		case 53:
			return "dynamic_list_item_extra_bool_field_one_value";
		case 54:
			return "dynamic_list_item_link";
		case 55:
			return "dynamic_list_item_event_channel_hash";
		case 56:
			return "dynamic_list_item_focus_hash";
		case 57:
			return "dynamic_list_item_select_hash";
		case 58:
			return "dynamic_list_item_prompt_text";
		case 59:
			return "dynamic_list_item_prompt_enabled";
		case 60:
			return "dynamic_list_item_prompt_visible";
		case 64:
			return "dynamic_list_item_prompt_option_text";
		case 65:
			return "dynamic_list_item_prompt_option_enabled";
		case 66:
			return "dynamic_list_item_prompt_option_visible";
		case 67:
			return "dynamic_list_item_prompt_option_select_hash";
		case 68:
			return "dynamic_list_item_prompt_toggle_text";
		case 69:
			return "dynamic_list_item_prompt_toggle_enabled";
		case 70:
			return "dynamic_list_item_prompt_toggle_visible";
		case 71:
			return "dynamic_list_item_prompt_toggle_select_hash";
		case 72:
			return "dynamic_list_item_prompt_r3_text";
		case 73:
			return "dynamic_list_item_prompt_r3_enabled";
		case 74:
			return "dynamic_list_item_prompt_r3_visible";
		case 75:
			return "dynamic_list_item_select_r3_select_hash";
		case 76:
			return "dynamic_list_item_prompt_dpad_left_right_text";
		case 77:
			return "dynamic_list_item_prompt_dpad_left_right_enabled";
		case 78:
			return "dynamic_list_item_prompt_dpad_left_right_visible";
		case 79:
			return "dynamic_list_item_select_dpad_left_right_select_hash";
		case 80:
			return "mount_collection_index";
		case 81:
			return "dynamic_list_item_rename_prompt_enabled";
		case 82:
			return "dynamic_list_item_rename_prompt_visible";
		case 83:
			return "dynamic_list_item_stats_info_toggle_prompt_text";
		case 84:
			return "invite_unique_id";
		case 85:
			return "invite_tracked";
		case 86:
			return "invite_processed";
		case 87:
			return "invite_script_type";
		case 88:
			return "invite_gang_id";
		case 89:
			return "invite_expiration_time";
		case 90:
			return "invite_filter_type";
		case 91:
			return "invite_feed_message_id";
		case 92:
			return "invite_all_enabled";
		case 93:
			return "invite_all_visible";
		default:
			break;
	}
	return "null";
}

void func_333(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_337(&(uParam0->f_4));
}

bool func_334(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_335(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_338(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_336(int iParam0)
{
	return (Global_1102219.f_26.f_9 && iParam0) == iParam0;
}

void func_337(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = -142743235;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	uParam0->f_8.f_3 = 0;
	StringCopy(&(uParam0->f_12), "", 32);
	uParam0->f_16 = -1;
}

bool func_338(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_219(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_297(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

