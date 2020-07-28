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
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = -1;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = -1;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = -1;
	var uLocal_47 = -1;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_16 = 1f;
	fLocal_17 = 1f;
	func_1(&uLocal_26, iScriptParam_0);
	while (!func_2(&uLocal_26))
	{
		func_3(&uLocal_26);
		BUILTIN::WAIT(0);
	}
	func_4(&uLocal_26);
}

void func_1(var uParam0, int iParam1)
{
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_5(0);
	func_6();
	func_7();
	Global_1070356->f_22101.f_2 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		uParam0->f_3 = BRAIN::_0x6818D1A194E29983();
	}
	else
	{
		uParam0->f_3 = iParam1;
	}
}

int func_2(var uParam0)
{
	if (func_8(1, 1))
	{
		return 1;
	}
	if (*uParam0 <= 0)
	{
		return 0;
	}
	if (*uParam0 == 5)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			return 1;
		}
		else if (uParam0->f_5)
		{
			if (Global_1070356->f_22101.f_2)
			{
				return 1;
			}
			if (func_9(uParam0->f_8, Global_35) > Global_1901929->f_543.f_1)
			{
				return 1;
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		return 1;
	}
	return 0;
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
	if (uParam0->f_22 > 0f)
	{
		uParam0->f_22 = (uParam0->f_22 - MISC::GET_FRAME_TIME());
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
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_23))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_23);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_24))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(uParam0->f_24);
		VOLUME::_DELETE_VOLUME(uParam0->f_24);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_25))
	{
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_25);
		VOLUME::_DELETE_VOLUME(uParam0->f_25);
	}
	GRAPHICS::_0x9CF1836C03FB67A2(&(uParam0->f_26), 1);
	if (!func_17(7))
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
		Global_1939231 = 1;
	}
	else
	{
		Global_1939231 = 2;
	}
}

void func_6()
{
	Global_1912975 = 1;
}

void func_7()
{
	if (!Global_1070356->f_22101)
	{
		Global_1070356->f_22101 = 1;
	}
}

int func_8(bool bParam0, bool bParam1)
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
	fVar0 = BUILTIN::VDIST((Global_1070356->f_22101.f_366[uParam0->f_4 /*272*/])->f_2, uParam0->f_8);
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
			fVar0 = BUILTIN::VDIST((Global_1070356->f_22101.f_366[uParam0->f_4 /*272*/])->f_2, uParam0->f_8);
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
	uParam0->f_23 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME((Global_1070356->f_22101.f_366[uParam0->f_4 /*272*/])->f_2, 0f, 0f, 0f, 10.5f, 10.5f, 5.5f, "Fast Travel Ghosting Area");
	uParam0->f_24 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME((Global_1070356->f_22101.f_366[uParam0->f_4 /*272*/])->f_2, 0f, 0f, 0f, 1f, 1f, 2f, "Fast Travel Navmesh Blocking Area");
	uParam0->f_25 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME((Global_1070356->f_22101.f_366[uParam0->f_4 /*272*/])->f_2, 0f, 0f, 0f, 2f, 2f, 2f, "Fast Travel Ambient Avoidance Area");
	PATHFIND::_0x19C7567D2F2287D6(uParam0->f_24, 7);
	POPULATION::_0xB56D41A694E42E86(uParam0->f_25, 2238463, 0, 0, -1, -1, 0);
	uParam0->f_26 = GRAPHICS::_0xFA50F79257745E74((Global_1070356->f_22101.f_366[uParam0->f_4 /*272*/])->f_2, 1f, 1, 4, 0);
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

	if (Global_1070356->f_22101.f_2)
	{
		func_34(uParam0, 5);
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
	if (func_35(32768, PLAYER::NETWORK_PLAYER_ID_TO_INT()))
	{
		if (!VOLUME::_0xF256A75210C5C0EB(uParam0->f_23, ENTITY::GET_ENTITY_COORDS(iVar1, false, true)))
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
	else
	{
		bVar2 = func_33(uParam0, 1);
	}
	switch (uParam0->f_18)
	{
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (func_9((Global_1070356->f_22101.f_366[uParam0->f_4 /*272*/])->f_2, ENTITY::GET_ENTITY_COORDS(iVar1, false, false)) <= 3.5f)
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
			if (func_48(uParam0->f_19, 1) > 0f)
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
			}
			if (func_49(uParam0->f_19, 1))
			{
				func_31(uParam0->f_19, 0, 1, 1);
				func_32(uParam0->f_19, 0, 1);
				func_33(uParam0, 0);
				func_50(32);
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
			if (func_51(uParam0->f_19, 1))
			{
				func_52(uParam0, "NFT_MISSION_RUNNING");
			}
			break;
		case 4:
			if (bVar2)
			{
				func_31(uParam0->f_19, 0, 1, 1);
				func_32(uParam0->f_19, 1, 1);
			}
			if (func_51(uParam0->f_19, 1))
			{
				func_52(uParam0, "NFT_PASSENGER_HORSE_WARN");
			}
			break;
		case 17:
			if (bVar2)
			{
				func_31(uParam0->f_19, 0, 1, 1);
				func_32(uParam0->f_19, 1, 1);
			}
			if (func_51(uParam0->f_19, 1))
			{
				func_52(uParam0, "NFT_PASSENGER_WAGON_WARN");
			}
			break;
		case 16:
			if (bVar2)
			{
				func_31(uParam0->f_19, 0, 1, 1);
				func_32(uParam0->f_19, 1, 1);
			}
			if (func_51(uParam0->f_19, 1))
			{
				func_52(uParam0, "NFT_PASSENGER_WAGON_PASSENGER_WARN");
			}
			break;
		case 15:
			if (bVar2)
			{
				func_31(uParam0->f_19, 0, 1, 1);
				func_32(uParam0->f_19, 1, 1);
			}
			if (func_51(uParam0->f_19, 1))
			{
				func_52(uParam0, "NFT_HOGTIED_HORSE_WARN");
			}
			break;
		case 5:
			if (bVar2)
			{
				func_31(uParam0->f_19, 0, 1, 1);
				func_32(uParam0->f_19, 1, 1);
			}
			if (func_51(uParam0->f_19, 1))
			{
				func_52(uParam0, "NFT_WANTED");
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
	}
}

void func_12(var uParam0)
{
	if (!UIAPPS::_CAN_LAUNCH_APP_BY_HASH(1833066477))
	{
		return;
	}
	else
	{
		if (!func_53(1, 1))
		{
			return;
		}
		if (UIAPPS::_LAUNCH_APP_BY_HASH(1833066477) == 0)
		{
		}
		else
		{
			return;
		}
	}
	func_54();
	func_30(uParam0, 2);
	func_30(uParam0, 4);
	func_55(uParam0, -931758312);
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

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
		func_56(uParam0, 2);
	}
	if (Global_1070356->f_22101.f_2)
	{
		func_56(uParam0, 2);
	}
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 1);
	if (uParam0->f_5)
	{
		if (func_9(uParam0->f_8, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false)) > (3.5f + 2f))
		{
			func_56(uParam0, 2);
		}
	}
	else
	{
		iVar2 = func_25(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
		if (iVar2 >= 0 && iVar2 != uParam0->f_12)
		{
			uParam0->f_8 = { func_26(iVar2) };
			fVar3 = BUILTIN::VDIST((Global_1070356->f_22101.f_366[uParam0->f_4 /*272*/])->f_2, uParam0->f_8);
			iVar4 = func_24(iVar2, 1);
			if (GANG::_0xD6F6ACF4392187FB(iVar4))
			{
				uParam0->f_11 = iVar4;
				uParam0->f_6 = fVar3;
				uParam0->f_7 = BUILTIN::ROUND((fVar3 / 1000f));
				uParam0->f_12 = iVar2;
			}
		}
		if (func_9((Global_1070356->f_22101.f_366[uParam0->f_4 /*272*/])->f_2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false)) > (3.5f + 2f))
		{
			func_56(uParam0, 2);
		}
	}
	iVar5 = PED::GET_MOUNT(PLAYER::PLAYER_PED_ID());
	if (ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		if (!PED::_IS_MOUNT_SEAT_FREE(iVar5, 0))
		{
			func_56(uParam0, 2);
		}
	}
	if (func_47(iVar0))
	{
		func_56(uParam0, 2);
	}
	if (!func_57(uParam0, 2))
	{
		func_58(uParam0, &(uParam0->f_20));
		if (uParam0->f_20 == -1)
		{
			return;
		}
		if (func_57(uParam0, 8))
		{
			bVar8 = func_60(func_59(uParam0), &uVar7);
			bVar8 = (bVar8 || func_61(func_59(uParam0), &uVar7));
			if (uParam0->f_20 < 14)
			{
				if (bVar8)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1070356->f_22101.f_5.f_1, MISC::_CREATE_VAR_STRING(2, "NFT_VOUCHER_FOOTER"));
				}
				else
				{
					sVar6 = HUD::_GET_LABEL_TEXT_BY_HASH(&((Global_1070356->f_22101.f_366[uParam0->f_4 /*272*/])->f_5[uParam0->f_20 /*19*/]));
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1070356->f_22101.f_5.f_1, MISC::_CREATE_VAR_STRING(10, "NFT_FOOTER", sVar6));
				}
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1070356->f_22101.f_5.f_2, MISC::_CREATE_VAR_STRING(2, func_62(&((Global_1070356->f_22101.f_366[uParam0->f_4 /*272*/])->f_5[uParam0->f_20 /*19*/]))));
			}
			else if (uParam0->f_20 == 14)
			{
				if (uParam0->f_5)
				{
					if (bVar8)
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1070356->f_22101.f_5.f_1, MISC::_CREATE_VAR_STRING(2, "NFT_VOUCHER_FOOTER"));
					}
					else
					{
						sVar6 = MISC::_CREATE_VAR_STRING(0, &(Global_1070356->f_22101.f_366[uParam0->f_4 /*272*/]));
						DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1070356->f_22101.f_5.f_1, MISC::_CREATE_VAR_STRING(10, "NFT_FOOTER", sVar6));
					}
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1070356->f_22101.f_5.f_2, MISC::_CREATE_VAR_STRING(2, func_62(&(Global_1070356->f_22101.f_366[uParam0->f_4 /*272*/]))));
				}
				else
				{
					if (bVar8)
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1070356->f_22101.f_5.f_1, MISC::_CREATE_VAR_STRING(2, "NFT_VOUCHER_FOOTER"));
					}
					else
					{
						sVar6 = MISC::_CREATE_VAR_STRING(2, "NFT_LOCATION_TYPE_CAMP_DESC");
						DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1070356->f_22101.f_5.f_1, MISC::_CREATE_VAR_STRING(10, "NFT_FOOTER", sVar6));
					}
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1070356->f_22101.f_5.f_2, MISC::_CREATE_VAR_STRING(2, "NFT_CAMP_DESC"));
				}
			}
			else if (uParam0->f_20 == 15)
			{
				if (bVar8)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1070356->f_22101.f_5.f_1, MISC::_CREATE_VAR_STRING(2, "NFT_VOUCHER_FOOTER"));
				}
				else
				{
					sVar6 = MISC::_CREATE_VAR_STRING(2, "NFT_LOCATION_TYPE_MOONSHINE_DESC");
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1070356->f_22101.f_5.f_1, MISC::_CREATE_VAR_STRING(10, "NFT_FOOTER", sVar6));
				}
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1070356->f_22101.f_5.f_2, MISC::_CREATE_VAR_STRING(2, "NFT_MOONSHINE_DESC"));
			}
			if (uParam0->f_20 < 14)
			{
				iVar9 = func_59(uParam0);
				if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(func_63(iVar9, 59806960, 1, 0, 1, 0), 0))
				{
					DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1070356->f_22101.f_5.f_4, "subFooter", MISC::_CREATE_VAR_STRING(2, "NFT_CANT_AFFORD_SHORT"));
				}
				else
				{
					DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1070356->f_22101.f_5.f_4, "subFooter", "");
				}
			}
			else if (uParam0->f_20 == 14)
			{
				if (uParam0->f_5)
				{
					iVar9 = func_64(0, uParam0);
					if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(func_63(iVar9, 59806960, 1, 0, 1, 0), 0))
					{
						DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1070356->f_22101.f_5.f_4, "subFooter", MISC::_CREATE_VAR_STRING(2, "NFT_CANT_AFFORD_SHORT"));
					}
					else
					{
						DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1070356->f_22101.f_5.f_4, "subFooter", "");
					}
				}
				else
				{
					iVar9 = func_64(0, uParam0);
					if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(func_63(iVar9, 59806960, 1, 0, 1, 0), 0))
					{
						DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1070356->f_22101.f_5.f_4, "subFooter", MISC::_CREATE_VAR_STRING(2, "NFT_CANT_AFFORD_SHORT"));
					}
					else
					{
						DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1070356->f_22101.f_5.f_4, "subFooter", "");
					}
				}
			}
			else if (uParam0->f_20 == 15)
			{
				iVar9 = func_64(0, uParam0);
				if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(func_63(iVar9, 59806960, 1, 0, 1, 0), 0))
				{
					DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1070356->f_22101.f_5.f_4, "subFooter", MISC::_CREATE_VAR_STRING(2, "NFT_CANT_AFFORD_SHORT"));
				}
				else
				{
					DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1070356->f_22101.f_5.f_4, "subFooter", "");
				}
			}
			func_30(uParam0, 8);
		}
		if (func_57(uParam0, 4))
		{
			iVar10 = func_59(uParam0);
			switch (func_65(uParam0->f_20, iVar10))
			{
				case 0:
					if (func_60(iVar10, &iVar11))
					{
						uParam0->f_21 = func_66(iVar10, 0, 1, 1, 1, iVar11);
					}
					else if (func_61(iVar10, &iVar11))
					{
						uParam0->f_21 = func_66(iVar10, 0, 1, 1, 1, iVar11);
					}
					else
					{
						uParam0->f_21 = func_66(iVar10, 0, 1, 1, 1, 59806960);
					}
					func_30(uParam0, 4);
					func_56(uParam0, 2);
					func_20(uParam0);
					func_67(1);
					func_68(0, 72);
					func_34(uParam0, 4);
					return;
				case 1:
					break;
				case 2:
					break;
				case 3:
					break;
				case 4:
					func_52(uParam0, "NFT_CANT_AFFORD");
					func_30(uParam0, 4);
					func_56(uParam0, 2);
					func_20(uParam0);
					break;
				case 5:
					func_52(uParam0, "NFT_NO_CAMP");
					func_30(uParam0, 4);
					func_56(uParam0, 2);
					func_20(uParam0);
					break;
				case 6:
					func_52(uParam0, "NFT_NO_MOONSHINE");
					func_30(uParam0, 4);
					func_56(uParam0, 2);
					func_20(uParam0);
					break;
				case 7:
					func_52(uParam0, "NFT_POSSE_DISBAND");
					func_30(uParam0, 4);
					func_56(uParam0, 2);
					func_20(uParam0);
					break;
			}
		}
	}
	if (func_57(uParam0, 2))
	{
		func_19(iVar1, 0);
		func_69(32);
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

	iVar3 = func_70();
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 1731288223:
				iVar2 = func_71(iVar0, uParam0);
				break;
		}
		iVar0++;
	}
	if (iVar2 != 2 && iVar2 != 3)
	{
		iVar2 = func_72(uParam0->f_21);
	}
	switch (iVar2)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			func_52(uParam0, "NFT_TRANSACTION_FAILED");
			func_34(uParam0, 1);
			func_68(1, 2);
			break;
		case 3:
			if (uParam0->f_20 < 14)
			{
				if ((MISC::_GET_SYSTEM_TIME() - uParam0->f_27) >= 1000)
				{
					if (!func_73(0, &((Global_1070356->f_22101.f_366[uParam0->f_4 /*272*/])->f_5[uParam0->f_20 /*19*/]), 1))
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
					if (!func_73(0, &(Global_1070356->f_22101.f_366[uParam0->f_4 /*272*/]), 1))
					{
						func_34(uParam0, 1);
					}
					else
					{
						func_34(uParam0, 5);
					}
				}
				else if (!func_73(1, 0, 0))
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
				if (func_74(iVar3, 1))
				{
					if (!func_73(2, 0, 0))
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
			func_52(uParam0, "NFT_TRANSACTION_FAILED");
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

	iVar0 = func_75();
	bVar1 = func_76();
	bVar2 = (!CAM::IS_SCREEN_FADED_OUT() && !&Global_1048581);
	switch (iVar0)
	{
		case 0:
			break;
		case 1:
		case 5:
			if (bVar1)
			{
				if (func_77() <= 3)
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
					{
						func_68(0, 124);
					}
					else
					{
						func_68(0, 104);
					}
				}
				else if (func_78(2))
				{
					func_68(0, 112);
				}
				else
				{
					func_68(0, 124);
				}
			}
			else if (bVar2)
			{
				func_68(1, 2);
			}
			else
			{
				func_68(0, 8);
			}
			break;
		case 2:
		case 3:
			if (bVar1)
			{
				func_68(0, 72);
			}
			else if (bVar2)
			{
				func_68(0, 72);
			}
			else
			{
				func_68(0, 8);
			}
			break;
		case 4:
			if (&Global_1099294 != 22)
			{
				if (bVar1)
				{
					bVar3 = &Global_1099294 <= 10;
					if (bVar2)
					{
						if (bVar3)
						{
							func_68(0, 104);
						}
						else
						{
							func_68(0, 124);
						}
					}
					else if (bVar3)
					{
						func_68(0, 40);
					}
					else
					{
						func_68(0, 60);
					}
				}
				else
				{
					bVar3 = Global_1099294->f_581;
					if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						bVar3 = true;
					}
					if ((Global_1099294->f_4[Global_1100047[2 /*2*/]] && ((*Global_1100047)[2 /*2*/])->f_1) == ((*Global_1100047)[2 /*2*/])->f_1)
					{
						bVar3 = false;
					}
					if ((((Global_1099294->f_4[Global_1100047[69 /*2*/]] && ((*Global_1100047)[69 /*2*/])->f_1) == ((*Global_1100047)[69 /*2*/])->f_1 || (Global_1099294->f_4[Global_1100047[70 /*2*/]] && ((*Global_1100047)[70 /*2*/])->f_1) == ((*Global_1100047)[70 /*2*/])->f_1) || (Global_1099294->f_4[Global_1100047[64 /*2*/]] && ((*Global_1100047)[64 /*2*/])->f_1) == ((*Global_1100047)[64 /*2*/])->f_1) || (Global_1099294->f_4[Global_1100047[65 /*2*/]] && ((*Global_1100047)[65 /*2*/])->f_1) == ((*Global_1100047)[65 /*2*/])->f_1)
					{
						if (&Global_1099294 > 10)
						{
							bVar3 = false;
						}
					}
					if (bVar2)
					{
						func_79(bVar3, 1, 0, bVar3, 1, 0, 0);
					}
					else
					{
						func_79(bVar3, 1, 0, bVar3, 0, 0, 0);
					}
				}
			}
			else if (bVar1)
			{
				if (bVar2)
				{
					func_68(0, 124);
				}
				else
				{
					func_68(0, 60);
				}
			}
			else if (!(Global_1099294->f_4[Global_1100047[24 /*2*/]] && ((*Global_1100047)[24 /*2*/])->f_1) == ((*Global_1100047)[24 /*2*/])->f_1)
			{
				if ((Global_1099294->f_4[Global_1100047[58 /*2*/]] && ((*Global_1100047)[58 /*2*/])->f_1) == ((*Global_1100047)[58 /*2*/])->f_1 || (Global_1099294->f_4[Global_1100047[59 /*2*/]] && ((*Global_1100047)[59 /*2*/])->f_1) == ((*Global_1100047)[59 /*2*/])->f_1)
				{
					func_68(1, 256);
				}
				else
				{
					func_68(1, 2);
				}
			}
			else
			{
				func_68(0, 8);
			}
			func_80();
			break;
	}
	return ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID());
}

void func_16()
{
	Global_1939067->f_102 = -1;
	Global_1939067->f_102.f_1 = 0;
}

bool func_17(int iParam0)
{
	return (Global_1099294->f_4[Global_1100047[iParam0 /*2*/]] && ((*Global_1100047)[iParam0 /*2*/])->f_1) == ((*Global_1100047)[iParam0 /*2*/])->f_1;
}

void func_18()
{
	func_81(0, 4, 0);
	if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4))
	{
		func_82(32768);
	}
}

void func_19(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_83(64))
		{
			PED::SET_PED_RESET_FLAG(iParam0, 187, bParam1);
			PED::SET_PED_RESET_FLAG(iParam0, 129, bParam1);
			PED::SET_PED_RESET_FLAG(iParam0, 219, bParam1);
			PED::SET_PED_RESET_FLAG(iParam0, 220, bParam1);
			func_50(64);
		}
	}
	else if (func_83(64))
	{
		PED::SET_PED_RESET_FLAG(iParam0, 187, bParam1);
		PED::SET_PED_RESET_FLAG(iParam0, 129, bParam1);
		PED::SET_PED_RESET_FLAG(iParam0, 219, bParam1);
		PED::SET_PED_RESET_FLAG(iParam0, 220, bParam1);
		func_69(64);
	}
}

void func_20(var uParam0)
{
	func_84();
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
		fVar4 = BUILTIN::VDIST(vVar0, (Global_1070356->f_22101.f_366[iVar3 /*272*/])->f_2);
		if (fVar4 < fVar5)
		{
			fVar5 = fVar4;
			iVar6 = iVar3;
		}
		iVar3++;
	}
	return iVar6;
}

int func_23(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return 1;
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
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(((*Global_1125276)[iParam0 /*27*/])->f_9))
	{
		if (!bParam1)
		{
		}
		return 0;
	}
	return GANG::_0x901E0DC25080C8B9(((*Global_1125276)[iParam0 /*27*/])->f_9);
}

int func_25(int iParam0)
{
	if (!GANG::_0xD6F6ACF4392187FB(iParam0))
	{
		return -1;
	}
	if (iParam0 == GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))
	{
		return func_85(PLAYER::PLAYER_ID());
	}
	return func_86(GANG::_0x4BE6C13A45CCA8EC(iParam0));
}

Vector3 func_26(int iParam0)
{
	if (!func_23(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return ((*Global_1125276)[iParam0 /*27*/])->f_20;
}

int func_27(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
	while (iVar0 < 60)
	{
		if (func_87(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == ((*Global_1949759)[iVar0 /*23*/])->f_11 && iParam1 == ((*Global_1949759)[iVar0 /*23*/])->f_4)
				{
					if (iParam3 <= Global_1949759[iVar0 /*23*/])
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
				func_88(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
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
	if (((*Global_1949759)[iParam0 /*23*/])->f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3);
}

void func_29(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_28(iParam0))
	{
		return;
	}
	iVar0 = func_89(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1949759)[iVar0 /*23*/])->f_3, iParam1, iParam2);
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
	iVar0 = func_89(iParam0);
	if (bParam1)
	{
		func_90(iParam0, 4);
		if (bParam3)
		{
			func_91(iVar0, 1);
		}
		func_92(iVar0, 1);
	}
	else
	{
		func_93(iParam0, 4);
		func_92(iVar0, 0);
	}
}

void func_32(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_28(iParam0))
	{
		return;
	}
	iVar0 = func_89(iParam0);
	func_91(iVar0, iParam1);
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
	uParam0->f_27 = MISC::_GET_SYSTEM_TIME();
}

bool func_35(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1099294->f_3 && iParam0) != 0;
	}
	return (((*Global_1097610)[iParam1 /*51*/])->f_3 && iParam0) != 0;
}

bool func_36()
{
	return Global_1070356->f_27136.f_62.f_42 != 0;
}

bool func_37()
{
	return Global_1070356->f_27136.f_19.f_3 != 0;
}

bool func_38()
{
	return Global_1070356->f_27136.f_55.f_6 == 2;
}

bool func_39(int iParam0)
{
	return func_94(1, iParam0);
}

int func_40(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_95(bParam1, bParam2, bParam3);
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

int func_41()
{
	if (Global_1102099->f_935.f_22 && func_96())
	{
		return 1;
	}
	if (func_98(func_97(0)))
	{
		if (func_96() && !func_99())
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

bool func_42()
{
	return (Global_1939231->f_1 || &Global_1939231 == 1);
}

int func_43()
{
	int iVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!PED::IS_PED_IN_ANY_VEHICLE(iVar1, false) && !func_100(iVar1))
	{
		return 0;
	}
	iVar0 = PED::_0x849BD6C6314793D0(iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!func_101(iVar0))
	{
		return 0;
	}
	if (!AITRANSPORT::_0x2E2E06023D07631E(iVar0, -2))
	{
		return 0;
	}
	return 1;
}

int func_44()
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
		return 0;
	}
	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(iVar1))
	{
		return 0;
	}
	iVar0 = PED::_0x849BD6C6314793D0(iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_VEHICLE(iVar0))
	{
		return 0;
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

int func_45()
{
	int iVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!PED::IS_PED_IN_ANY_VEHICLE(iVar1, false) && !func_100(iVar1))
	{
		return 0;
	}
	iVar0 = PED::_0x849BD6C6314793D0(iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_VEHICLE(iVar0))
	{
		return 0;
	}
	if (!AITRANSPORT::_0x2E2E06023D07631E(iVar0, -2))
	{
		return 0;
	}
	return 1;
}

int func_46()
{
	int iVar0;

	iVar0 = func_102(Global_1275573->f_8);
	if (!PED::IS_PED_A_PLAYER(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_47(int iParam0)
{
	int iVar0;
	int iVar1;

	if (PLAYER::IS_PLAYER_DEAD(iParam0))
	{
		return 1;
	}
	if (PED::_0xB655DB7582AEC805(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return 1;
	}
	if (TASK::_0x038B1F1674F0E242(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return 1;
	}
	if (func_103())
	{
		return 1;
	}
	if (func_104(func_97(0)) == 7)
	{
		return 1;
	}
	if (func_105())
	{
		return 1;
	}
	if (func_39(255))
	{
		return 1;
	}
	if (!func_106(0, 0, 0, 1, 0, 0, 0, 1, 1))
	{
		return 1;
	}
	if (func_107())
	{
		return 1;
	}
	if (func_108())
	{
		return 1;
	}
	if (func_109())
	{
		return 1;
	}
	if (Global_1901929->f_638.f_33)
	{
		iVar0 = PLAYER::_0xF49F14462F0AE27C(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (!func_110((Global_1903929->f_131[iVar1 /*95*/])->f_1, 0))
				{
				}
				else
				{
					func_111(68, 0);
					return 1;
				}
				iVar1++;
			}
		}
	}
	return 0;
}

float func_48(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_28(iParam0))
	{
		return 0f;
	}
	iVar0 = func_89(iParam0);
	if (HUD::_UIPROMPT_HAS_MASH_MODE(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return HUD::_UIPROMPT_GET_MASH_MODE_PROGRESS(((*Global_1949759)[iVar0 /*23*/])->f_3);
	}
	return HUD::_0x81801291806DBC50(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

bool func_49(int iParam0, bool bParam1)
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
	iVar0 = func_89(iParam0);
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

void func_50(int iParam0)
{
	func_112(&(Global_1070356->f_22101.f_4), iParam0);
}

bool func_51(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_28(iParam0))
	{
		return false;
	}
	iVar0 = func_89(iParam0);
	return HUD::_UIPROMPT_IS_ACTIVE(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

void func_52(var uParam0, char* sParam1)
{
	if (uParam0->f_22 > 0f)
	{
		return;
	}
	func_113(sParam1, 10000, 0, 0, 0, 1);
	uParam0->f_22 = 20f;
}

int func_53(bool bParam0, int iParam1)
{
	if (!func_114(PLAYER::PLAYER_ID(), bParam0, iParam1))
	{
		func_115(1, 1);
		return 0;
	}
	else if (!func_116(PLAYER::PLAYER_ID(), bParam0, iParam1))
	{
		return 0;
	}
	return 1;
}

void func_54()
{
	func_117(0, 4);
	func_118(32768);
}

int func_55(var uParam0, int iParam1)
{
	Global_1070356->f_22101.f_3 = iParam1;
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1070356->f_22101.f_5.f_3, MISC::_CREATE_VAR_STRING(2, func_119(iParam1)));
	func_120(uParam0);
	return 1;
}

void func_56(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_57(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_58(var uParam0, var uParam1)
{
	struct<4> Var0;
	int iVar4;

	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(1833066477))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(1833066477, &Var0))
		{
			iVar4 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var0.f_3, "locationArrayIndex");
			switch (Var0)
			{
				case -1203660660:
					switch (Var0.f_2)
					{
						case -997855324:
							func_56(uParam0, 2);
							break;
						case 42753526:
							func_56(uParam0, 4);
							*uParam1 = iVar4;
							break;
					}
					break;
				case -1740156697:
					switch (Var0.f_2)
					{
						case 42753526:
							func_56(uParam0, 8);
							*uParam1 = iVar4;
							break;
					}
					break;
				case 703281244:
					switch (Var0.f_2)
					{
						case -1517694752:
							func_121(uParam0, 1);
							break;
					}
					break;
				case -722926211:
					switch (Var0.f_2)
					{
						case -1517694752:
							func_121(uParam0, 0);
							break;
					}
					break;
			}
			UIEVENTS::_EVENT_MANAGER_POP_EVENT(1833066477);
		}
	}
}

int func_59(var uParam0)
{
	int iVar0;

	if (uParam0->f_20 < 14)
	{
		iVar0 = ((Global_1070356->f_22101.f_366[uParam0->f_4 /*272*/])->f_5[uParam0->f_20 /*19*/])->f_17;
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
		iVar0 = func_122(uParam0);
	}
	return func_64(iVar0, uParam0);
}

bool func_60(int iParam0, int iParam1)
{
	*iParam1 = func_123(iParam0, 1);
	return *iParam1 != 0;
}

bool func_61(int iParam0, int iParam1)
{
	*iParam1 = func_124(iParam0, 1, 0);
	return *iParam1 != 0;
}

char* func_62(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	switch (iVar0)
	{
		case -2040555425: /* GXTEntry: "Blackwater" */
			return "NFT_BLACKWATER_DESC";
		case 1048602539: /* GXTEntry: "Manzanita Post" */
			return "NFT_MANZANITA_DESC";
		case 1736907121: /* GXTEntry: "Strawberry" */
			return "NFT_STRAWBERRY_DESC";
		case -1067122960: /* GXTEntry: "Colter" */
			return "NFT_COLTER_DESC";
		case -1734290691: /* GXTEntry: "Wapiti" */
			return "NFT_WAPITI_DESC";
		case 792805517: /* GXTEntry: "Valentine" */
			return "NFT_VALENTINE_DESC";
		case -1805494951: /* GXTEntry: "Van Horn" */
			return "NFT_VAN_HORN_DESC";
		case -1934798422: /* GXTEntry: "Annesburg" */
			return "NFT_ANNESBERG_DESC";
		case -200062769: /* GXTEntry: "Emerald Station" */
			return "NFT_EMERALD_DESC";
		case 1426955875: /* GXTEntry: "Rhodes" */
			return "NFT_RHODES_DESC";
		case -423969023: /* GXTEntry: "Lagras" */
			return "NFT_LAGRAS_DESC";
		case 802776412: /* GXTEntry: "Tumbleweed" */
			return "NFT_TUMBLEWEED_DESC";
		case 1158633383: /* GXTEntry: "MacFarlane\'s Ranch" */
			return "NFT_MACFARLANES_DESC";
		case -1792739478: /* GXTEntry: "Armadillo" */
			return "NFT_ARMADILLO_DESC";
		case 1525531195: /* GXTEntry: "Saint Denis" */
			return "NFT_SAINT_DENIS_DESC";
	}
	return "";
}

int func_63(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if ((bParam4 && iParam1 == -915411861) && func_125(iParam0, 59806960))
	{
		iParam1 = 59806960;
	}
	if (func_126(iParam0))
	{
		return func_128(func_127(iParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_129(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32 /*2*/] == 2084597891 || &Var0[iVar32 /*2*/] == 773203532)
		{
			if (iParam5 != 0 && &Var0[iVar32 /*2*/] != iParam5)
			{
			}
			else
			{
				return (Var0[iVar32 /*2*/])->f_1;
				Jump @204; //curOff = 188
				if (&Var0[iVar32 /*2*/] == 0)
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

int func_64(int iParam0, var uParam1)
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

int func_65(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;

	if (!func_110(iParam1, 0))
	{
		return 1;
	}
	if (func_130(iParam1) != 1388422710)
	{
		return 2;
	}
	if (!func_60(iParam1, &uVar0))
	{
		iVar1 = func_63(iParam1, 59806960, 1, 0, 1, 0);
		if (iVar1 <= 0)
		{
			return 3;
		}
		if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar1, 0))
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
		iVar2 = func_70();
		if (!func_74(iVar2, 1))
		{
			return 6;
		}
	}
	return 0;
}

int func_66(int iParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;
	int iVar35;
	struct<14> Var36;
	int iVar52;
	struct<16> Var53;

	if (!func_110(iParam0, 0))
	{
		return -1;
	}
	if (func_131(iParam0) != 26423971)
	{
		return -1;
	}
	if (func_132())
	{
		bParam3 = true;
	}
	if (iParam5 == -570078785 || iParam5 == -915411861)
	{
		iVar0 = (func_63(iParam0, iParam5, 1, 0, 1, 2084597891 /* GXTEntry: "Money" */) * iParam2);
		iVar1 = 0;
		if (iVar0 <= 0)
		{
			iVar1 = (func_63(iParam0, iParam5, 1, 0, 1, 773203532 /* GXTEntry: "Gold Bar" */) * iParam2);
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
	else if (func_129(iParam0, iParam5, &Var2, &iVar33, 1, 0))
	{
		iVar35 = 0;
		while (iVar35 < iVar33)
		{
			iVar34 = ((Var2[iVar35 /*2*/])->f_1 * iParam2);
			if (!func_133(&(Var2[iVar35 /*2*/]), 0, bParam3, 0) >= iVar34)
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
	if (!bParam3 && func_134(0))
	{
		if (iVar0 > 0)
		{
			func_135(2084597891 /* GXTEntry: "Money" */, iVar0, -142743235, 0, 0);
		}
		else if (iVar1 > 0)
		{
			func_135(773203532 /* GXTEntry: "Gold Bar" */, iVar1, -142743235, 0, 0);
		}
		else if (func_136(iParam5))
		{
			iVar35 = 0;
			while (iVar35 < iVar33)
			{
				iVar34 = ((Var2[iVar35 /*2*/])->f_1 * iParam2);
				func_135(&(Var2[iVar35 /*2*/]), iVar34, -142743235, 0, 0);
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
	iVar52 = func_137(joaat("spend"), &Var36, bParam4);
	if (iVar52 == -1)
	{
	}
	else
	{
		Var53.f_7 = -142743235;
		StringCopy(&(Var53.f_12), sParam1, 32);
		func_138(iVar52, Var53);
	}
	return iVar52;
}

void func_67(int iParam0)
{
	int iVar0;

	iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	if (SCRIPTS::_DOES_THREAD_EXIST(Global_1939067->f_102.f_1) && Global_1939067->f_102.f_1 != iVar0)
	{
		return;
	}
	Global_1939067->f_102.f_1 = iVar0;
	Global_1939067->f_102 = iParam0;
}

void func_68(bool bParam0, int iParam1)
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
		func_139(iParam1);
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
	func_79(bVar1, bVar2, bVar3, (bVar4 || bVar5), bVar6, 0, bVar5);
}

void func_69(int iParam0)
{
	func_140(&(Global_1070356->f_22101.f_4), iParam0);
}

int func_70()
{
	return Global_1276808->f_200;
}

int func_71(int iParam0, var uParam1)
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
			if (!func_110(Var8.f_8, 0))
			{
			}
			else
			{
				if (iVar22 == joaat("use"))
				{
					return 3;
				}
			}
		}
		iVar7++;
	}
	return 1;
}

int func_72(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1272170->f_20)
	{
		if (&Global_1272170->f_20.f_1[iVar0 /*20*/] == iParam0)
		{
			return (Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1;
		}
		iVar0++;
	}
	return 0;
}

int func_73(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	var uVar9;
	int iVar10;
	bool bVar11;
	int iVar12;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 0;
	}
	if (func_103())
	{
		if (bParam2)
		{
		}
		else
		{
			return 0;
		}
	}
	switch (iParam0)
	{
		case 0:
			iVar10 = func_141(iParam1);
			if (iVar10 < 0)
			{
				return 0;
			}
			func_142();
			func_143();
			bVar11 = true;
			if (func_144(0) && func_145(0))
			{
				bVar11 = false;
			}
			if (bVar11)
			{
				if (func_146(iVar1))
				{
					func_147(0, 1, 1);
				}
				else if (func_148(iVar0))
				{
					func_147(0, 1, 1);
				}
				else if (func_149())
				{
					func_150();
				}
				else if (func_100(iVar1))
				{
					func_151(1, 1);
				}
				else
				{
					iVar12 = PLAYER::_0xF49F14462F0AE27C(iVar0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar12))
					{
						if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), ENTITY::GET_ENTITY_COORDS(iVar12, false, false)) < 15f)
						{
							func_152(1, 1);
						}
					}
				}
			}
			if (func_153())
			{
				iVar2 = 954940763;
			}
			else
			{
				iVar2 = func_155(func_154(), 0);
			}
			func_156(&(Global_1070356->f_22101.f_366[iVar10 /*272*/]));
			func_157(0, 1017438712);
			TELEMETRY::_0x7CEF4AC79F7E7FAD(iVar2, func_155(func_158((Global_1070356->f_22101.f_366[iVar10 /*272*/])->f_2, 1), 0), (Global_1070356->f_22101.f_366[iVar10 /*272*/])->f_2);
			return 1;
		case 1:
			if (!func_159(iVar0, 0))
			{
				return 0;
			}
			func_142();
			func_143();
			if (func_146(iVar1))
			{
				func_147(0, 1, 1);
			}
			else if (func_148(iVar0))
			{
				func_147(0, 1, 1);
			}
			else if (func_149())
			{
				func_150();
			}
			func_160();
			func_161();
			func_157(0, 1017438712);
			iVar2 = 954940763;
			TELEMETRY::_0x7CEF4AC79F7E7FAD(func_155(func_154(), 0), iVar2, func_26(func_85(PLAYER::PLAYER_ID())));
			return 1;
		case 2:
			iVar3 = func_70();
			if (!func_74(iVar3, 1))
			{
				return 0;
			}
			iVar4 = func_162(iVar3, 1);
			iVar5 = 1;
			if (iVar3 == iVar0)
			{
				iVar5 = 0;
			}
			vVar6 = { func_163(iVar4, iVar5) };
			uVar9 = func_164(iVar4, iVar5);
			func_165(vVar6, uVar9, 2f, 25f, 1, 1, 1);
			func_160();
			func_157(0, 1017438712);
			iVar2 = -1840671857;
			TELEMETRY::_0x7CEF4AC79F7E7FAD(func_155(func_154(), 0), iVar2, vVar6);
			return 1;
	}
	return 1;
}

int func_74(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (!func_166(Global_1277166[iVar0 /*86*/]))
	{
		return 0;
	}
	if (((*Global_1277166)[iVar0 /*86*/])->f_5.f_12 == -1)
	{
		return 0;
	}
	return 1;
}

int func_75()
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

int func_76()
{
	if (Global_1099294->f_26.f_14 == 9)
	{
		return 0;
	}
	if (Global_1099294->f_26.f_14 == 10)
	{
		return 0;
	}
	if (Global_1099294->f_26.f_14 == 11)
	{
		return 0;
	}
	if (func_78(2048))
	{
		return 1;
	}
	if (func_167(1))
	{
		return 1;
	}
	if (Global_1099294->f_26.f_14 != 0)
	{
		return 1;
	}
	return 0;
}

int func_77()
{
	return Global_1099294->f_26.f_14;
}

bool func_78(int iParam0)
{
	return (Global_1099294->f_26.f_9 && iParam0) != 0;
}

void func_79(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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

void func_80()
{
	int iVar0;

	if (func_17(35))
	{
		iVar0 = PLAYER::PLAYER_PED_ID();
		ENTITY::SET_ENTITY_COORDS(iVar0, Global_1099294->f_564, false, false, true, true);
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

void func_81(int iParam0, int iParam1, bool bParam2)
{
	if (func_168(iParam0, iParam1) && (!bParam2 || &(Global_1070356->f_20795.f_353[iParam0 /*11*/])->f_1[iParam1] == SCRIPTS::GET_ID_OF_THIS_THREAD()))
	{
		MISC::CLEAR_BIT(Global_1070356->f_20795.f_353[iParam0 /*11*/], iParam1);
		(Global_1070356->f_20795.f_353[iParam0 /*11*/])->f_1[iParam1] = 0;
		func_169();
	}
}

void func_82(int iParam0)
{
	Global_1099294->f_3 = (Global_1099294->f_3 - (Global_1099294->f_3 && iParam0));
}

bool func_83(int iParam0)
{
	return (Global_1070356->f_22101.f_4 && iParam0) != 0;
}

void func_84()
{
	if (func_114(PLAYER::PLAYER_ID(), 1, 1))
	{
		func_115(0, 1);
	}
	UIAPPS::_CLOSE_APP_BY_HASH(1833066477);
}

int func_85(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return ((*Global_1128435)[iVar0 /*83*/])->f_38.f_3;
	}
	return -1;
}

int func_86(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return -1;
	}
	if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1125276->f_1091), iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (((*Global_1125276)[iVar0 /*27*/])->f_9 == iParam0 && Global_1125276[iVar0 /*27*/] != 3)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_87(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1949759)[iParam0 /*23*/])->f_1 && iParam1) != 0;
}

void func_88(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_91(iParam0, 1);
	func_92(iParam0, 1);
	func_93(iParam0, 128);
}

int func_89(int iParam0)
{
	return iParam0;
}

void func_90(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949759)[iParam0 /*23*/])->f_1 = (((*Global_1949759)[iParam0 /*23*/])->f_1 - (((*Global_1949759)[iParam0 /*23*/])->f_1 && iParam1));
}

void func_91(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		if (((*Global_1949759)[iParam0 /*23*/])->f_5 == 5 && !func_87(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949759)[iParam0 /*23*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949759)[iParam0 /*23*/])->f_3, iParam1);
		}
	}
}

void func_92(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1949759)[iParam0 /*23*/])->f_3, iParam1);
	}
}

void func_93(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949759)[iParam0 /*23*/])->f_1 = (((*Global_1949759)[iParam0 /*23*/])->f_1 || iParam1);
}

int func_94(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_170(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 == func_171())
	{
		return func_170(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1275573->f_22[iParam1])
	{
		return func_170(&(((*Global_1097610)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

int func_95(bool bParam0, bool bParam1, bool bParam2)
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

bool func_96()
{
	return Global_1102099->f_935.f_27 != -1;
}

struct<2> func_97(int iParam0)
{
	return *(Global_1900718->f_1[iParam0 /*2*/]);
}

int func_98(struct<2> Param0)
{
	if (!func_172(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_173(Param0))
	{
		return 0;
	}
	return 1;
}

int func_99()
{
	switch (Global_1102099->f_935.f_27)
	{
		case 6:
			return 1;
		case 7:
			if (func_174())
			{
				return 1;
			}
			return 0;
		default:
			break;
	}
	return 0;
}

int func_100(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true);
	}
	return 0;
}

int func_101(int iParam0)
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
	return PED::_IS_THIS_MODEL_A_HORSE(iVar0);
}

int func_102(int iParam0)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = func_175(iParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && PED::IS_PED_ON_MOUNT(iParam0))
		{
			iVar0 = func_175(PED::GET_MOUNT(iParam0));
		}
	}
	return iVar0;
}

int func_103()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(1636781897))
	{
		return 1;
	}
	if (func_41())
	{
		return 1;
	}
	return func_83(2);
}

int func_104(var uParam0, var uParam1)
{
	return uParam0;
}

int func_105()
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
	if (!func_98(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

int func_106(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	if (!bParam7 && UIAPPS::_IS_ANY_APP_RUNNING())
	{
		return 0;
	}
	iVar0 = &Global_1275573->f_154[&Global_1275573];
	iVar1 = Global_1275573->f_8;
	bVar2 = ENTITY::IS_ENTITY_DEAD(iVar1);
	bVar3 = PED::_0xB655DB7582AEC805(iVar1);
	if (bVar2 || bVar3)
	{
		if (!bParam5)
		{
			return 0;
		}
	}
	else
	{
		if (!bParam4)
		{
			if (TASK::_0xEC7E480FF8BD0BED(Global_34))
			{
				return 0;
			}
			if (PED::_0x4912DFE492DB98CD(Global_34, "inInspectionMode"))
			{
				return 0;
			}
		}
		if (bParam0 && !PLAYER::IS_PLAYER_CONTROL_ON(iVar0))
		{
			if (bParam6 && Global_1099294->f_3 & 32 != 0)
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON(iVar1, "iMinigameSeat"))
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (!bParam1)
	{
		if (Global_1915180->f_20136 || Global_1915180->f_21989.f_1)
		{
			return 0;
		}
		if (TASK::_0xD04241BBF6D03A5E(Global_34) != 0)
		{
			return 0;
		}
	}
	if (func_176())
	{
		return 0;
	}
	if (Global_15)
	{
		return 0;
	}
	if (!bParam2 && (((Global_1939067->f_10 || Global_1939067->f_11) || Global_1939067->f_12) || Global_1939067->f_13))
	{
		return 0;
	}
	if (!bParam3)
	{
		iVar4 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (Global_1225057->f_9330 != -1)
		{
			return 0;
		}
		if (((*Global_1122836)[iVar4 /*54*/])->f_34 & 1 != 0 && ((*Global_1122836)[iVar4 /*54*/])->f_34 & 2 == 0)
		{
			return 0;
		}
		if (Global_1124829->f_293)
		{
			return 0;
		}
		if (Global_1572887->f_106.f_75 > 10 && Global_1572887->f_106.f_75 < 14)
		{
			return 0;
		}
		else if (Global_1572887->f_106.f_75 > 14)
		{
			return 0;
		}
	}
	if (!bParam8)
	{
		if ((SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(2) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(8)) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(9))
		{
			if ((Global_1048576 || Global_2883584) // PointerArith)
			{
				return 0;
			}
			if (&Global_1048581)
			{
				return 0;
			}
			if (&Global_1048585)
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_107()
{
	return Global_1896726->f_382;
}

bool func_108()
{
	return Global_1939231->f_1;
}

int func_109()
{
	int iVar0;

	iVar0 = PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (func_177(65536, 255))
		{
			func_178(65536);
		}
		return 0;
	}
	if (func_177(65536, 255))
	{
		return 1;
	}
	return 0;
}

int func_110(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

void func_111(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_179(iParam0, &iVar0, &iVar1);
	if (!func_180(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_181(iVar0, iVar1);
}

void func_112(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

var func_113(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_114(int iParam0, bool bParam1, int iParam2)
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
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::_0xF49F14462F0AE27C(iParam0)))
	{
		return iParam2;
	}
	return ((*Global_1269869)[iParam0 /*20*/])->f_6;
}

void func_115(bool bParam0, bool bParam1)
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
	if (((*Global_1269869)[iVar1 /*20*/])->f_6 != bParam0)
	{
		((*Global_1269869)[iVar1 /*20*/])->f_6 = bParam0;
		((*Global_1269869)[iVar1 /*20*/])->f_7 = 0;
		if (bParam0)
		{
			func_182(&(Global_1270530->f_11.f_594));
		}
		else
		{
			func_183(&(Global_1270530->f_11.f_594));
		}
	}
}

int func_116(int iParam0, bool bParam1, int iParam2)
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
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::_0xF49F14462F0AE27C(iParam0)))
	{
		return iParam2;
	}
	return ((*Global_1269869)[iParam0 /*20*/])->f_7;
}

void func_117(int iParam0, int iParam1)
{
	if (!func_168(iParam0, iParam1))
	{
		MISC::SET_BIT(Global_1070356->f_20795.f_353[iParam0 /*11*/], iParam1);
		(Global_1070356->f_20795.f_353[iParam0 /*11*/])->f_1[iParam1] = SCRIPTS::GET_ID_OF_THIS_THREAD();
		func_169();
	}
}

void func_118(int iParam0)
{
	Global_1099294->f_3 = (Global_1099294->f_3 || iParam0);
}

char* func_119(int iParam0)
{
	switch (iParam0)
	{
		case -931758312:
			return "CAMP_LOCATION_CATEGORY_ALL";
		case -2021996203:
			return "TITHE_AMBARINO";
		case -1898198457:
			return "TITHE_LEMOYNE";
		case 1316689641:
			return "TITHE_WEST_ELIZABETH";
		case 147265738:
			return "TITHE_NEW_HANOVER";
		case -793104390:
			return "TITHE_NEW_AUSTIN";
	}
	return "ALL";
}

void func_120(var uParam0)
{
	int iVar0;
	struct<19> Var1;
	int iVar20;
	int iVar21;
	int iVar22;

	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(Global_1070356->f_22101.f_5.f_5);
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
		if (func_184(&((Global_1070356->f_22101.f_366[uParam0->f_4 /*272*/])->f_5[iVar0 /*19*/])))
		{
			iVar20 = func_64(((Global_1070356->f_22101.f_366[uParam0->f_4 /*272*/])->f_5[iVar0 /*19*/])->f_17, uParam0);
			if (func_60(iVar20, &iVar22))
			{
				iVar21 = 0;
				Var1 = 1;
			}
			else if (func_61(iVar20, &iVar22))
			{
				iVar21 = func_63(iVar20, iVar22, 1, 0, 1, 0);
				Var1 = MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar21, 0);
			}
			else
			{
				iVar21 = func_63(iVar20, 59806960, 1, 0, 1, 0);
				Var1 = MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar21, 0);
			}
			Var1.f_16 = MISC::_CREATE_VAR_STRING(0, &((Global_1070356->f_22101.f_366[uParam0->f_4 /*272*/])->f_5[iVar0 /*19*/]));
			Var1.f_1 = 1;
			Var1.f_2 = joaat("COLOR_WHITE");
			Var1.f_3 = 0;
			Var1.f_17 = iVar21;
			Var1.f_18 = iVar21;
			Var1.f_6 = 42753526;
			Var1.f_5 = 42753526;
			Var1.f_4 = 1833066477;
			func_185(Global_1070356->f_22101.f_5.f_7[iVar0 /*21*/], Var1, iVar0);
		}
		iVar0++;
	}
	func_186(uParam0);
	func_187(uParam0);
}

void func_121(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_188();
	iVar1 = func_189(bParam1, 1, -1);
	iVar2 = (func_190(iVar0, 1) + iVar1);
	if (iVar2 < 1)
	{
		iVar2 = 6;
	}
	else if (iVar2 > 6)
	{
		iVar2 = 1;
	}
	iVar0 = func_191(iVar2, 1);
	func_55(uParam0, iVar0);
}

int func_122(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;

	iVar1 = func_70();
	if (!func_74(iVar1, 1))
	{
		iVar0 = 1;
		return iVar0;
	}
	iVar2 = func_162(iVar1, 1);
	vVar3 = { func_163(iVar2, 1) };
	fVar6 = func_9(vVar3, Global_35);
	uParam0->f_16 = BUILTIN::ROUND((fVar6 / 1000f));
	if (uParam0->f_16 == 0)
	{
		uParam0->f_16 = 1;
	}
	return (iVar0 + uParam0->f_16);
}

int func_123(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_192(iVar0, 1, 0);
		if (!func_129(iParam0, iVar33, &Var2, &iVar1, 1, 0))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_193(&(Var2[iVar34 /*2*/])))
				{
					if (!bParam1 || func_133(&(Var2[iVar34 /*2*/]), 0, 1, 1) > 0)
					{
						return iVar33;
					}
					Jump @134; //curOff = 106
				}
				else if (&Var2[iVar34 /*2*/] == 0)
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

int func_124(int iParam0, bool bParam1, bool bParam2)
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
		iVar40 = func_192(iVar0, 0, 1);
		if (!func_129(iParam0, iVar40, &Var9, &iVar1, 1, 0))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_194(&(Var9[iVar41 /*2*/])))
				{
					if (!bParam1 || func_133(&(Var9[iVar41 /*2*/]), 0, 1, 1) > 0)
					{
						bVar8 = true;
					}
				}
				else if (&Var9[iVar41 /*2*/] == 2084597891 || &Var9[iVar41 /*2*/] == 773203532)
				{
					if ((bParam2 && &Var9[iVar41 /*2*/] == 2084597891) || (!bParam2 && &Var9[iVar41 /*2*/] == 773203532))
					{
						if (iVar4 == 0 || (bVar6 && (Var9[iVar41 /*2*/])->f_1 < iVar2))
						{
							iVar5 = iVar40;
							iVar3 = (Var9[iVar41 /*2*/])->f_1;
							iVar7 = 1;
						}
					}
					else if (iVar4 == 0 || (Var9[iVar41 /*2*/])->f_1 < iVar2)
					{
						iVar5 = iVar40;
						iVar3 = (Var9[iVar41 /*2*/])->f_1;
						iVar7 = 0;
					}
				}
				else if (&Var9[iVar41 /*2*/] == 0)
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

bool func_125(int iParam0, int iParam1)
{
	if (!func_110(iParam0, 0))
	{
		return false;
	}
	if (func_126(iParam0))
	{
		return func_195(func_127(iParam0, 0), iParam1, 0);
	}
	return ITEMDATABASE::_0xDEE7B3C76ED664BE(iParam0, iParam1) > 0;
}

int func_126(int iParam0)
{
	if (func_196(iParam0, 75135761))
	{
		return 1;
	}
	return 0;
}

int func_127(int iParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_110(iParam0, 0))
	{
		return func_198(func_197(iParam0), bParam1);
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

int func_128(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_199(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if ((&Var0[iVar32 /*2*/] == 2084597891 || &Var0[iVar32 /*2*/] == 773203532) || &Var0[iVar32 /*2*/] == -1295114026)
		{
			return (Var0[iVar32 /*2*/])->f_1;
		}
		else if (&Var0[iVar32 /*2*/] == 0)
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

int func_129(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return 0;
	}
	if (!func_110(iParam0, 0))
	{
		return 0;
	}
	*iParam3 = ITEMDATABASE::_0xDEE7B3C76ED664BE(iParam0, iParam1);
	if (*iParam3 == 0)
	{
		if (!bParam5)
		{
		}
		return 0;
	}
	if (!bParam5)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!ITEMDATABASE::_0xAD73B614DF26CF8A(iParam0, iParam1, iVar0, (*uParam2)[iVar0 /*2*/]))
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
		func_200(iParam0, iParam1, uParam2, *iParam3);
	}
	return 1;
}

int func_130(int iParam0)
{
	struct<2> Var0;

	if (!func_110(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_131(int iParam0)
{
	vector3 vVar0;

	if (!func_110(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_132()
{
	if (INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(PLAYER::PLAYER_PED_ID()) != 3)
	{
		return 0;
	}
	return INVENTORY::_0xFC7563F482781A3D();
}

int func_133(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_110(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_131(iParam0);
	if (iVar1 == joaat("ammo") || (bParam1 && iVar1 == joaat("weapon")))
	{
		iVar2 = func_201(iParam0, 1);
		if (iVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar2);
		}
	}
	else if (iVar1 == joaat("weapon"))
	{
		return func_202(iParam0, 0);
	}
	if (func_203(iParam0, joaat("default")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_204(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_205(iParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_204(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

int func_134(bool bParam0)
{
	if (func_206() == -1)
	{
		return 1;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_204(bParam0));
}

int func_135(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_110(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	iVar0 = func_203(iParam0, joaat("default"));
	if (iVar0 != 0)
	{
		return func_207(iParam0, iParam1, iParam2, iParam3, bParam4);
	}
	Var1 = { func_208(iParam0, bParam4, 0) };
	Var6 = { func_209(iParam0, Var1, Var1.f_4, bParam4) };
	return func_210(iParam0, &Var6, &Var1, iParam1, iParam2, iParam3, bParam4);
}

int func_136(int iParam0)
{
	switch (iParam0)
	{
		case -1103707655:
		case 205718222:
		case 866168015:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_137(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_211(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			return func_212(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 16), iVar0, uParam1);
		}
	}
	else
	{
		return func_213(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_138(int iParam0, struct<16> Param1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1272170->f_20)
	{
		if (&Global_1272170->f_20.f_1[iVar0 /*20*/] == iParam0)
		{
			if ((Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1 == 1 || (Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1 == 5)
			{
				(Global_1272170->f_20.f_1[iVar0 /*20*/])->f_4 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

void func_139(int iParam0)
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
		func_214();
	}
	PLAYER::SET_PLAYER_INVINCIBLE(iVar0, false);
	if (!PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
	{
		ENTITY::SET_ENTITY_COLLISION(iVar1, true, false);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar1, true, false);
	}
}

void func_140(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_141(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		if (&Global_1070356->f_22101.f_366[iVar0 /*272*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_142()
{
	func_215(1);
	func_216(1);
}

void func_143()
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
}

int func_144(bool bParam0)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (!func_217(&Var0, bParam0))
	{
		return 1;
	}
	return 0;
}

int func_145(bool bParam0)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (!func_218(&Var0, bParam0))
	{
		return 1;
	}
	return 0;
}

int func_146(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		return 0;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_USING(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != iParam0)
	{
		return 0;
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0);
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
	{
		return 0;
	}
	iVar2 = PLAYER::_0xB9050A97594C8832(iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return 0;
	}
	if (iVar0 != iVar2)
	{
		return 0;
	}
	return 1;
}

void func_147(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_219(73);
		if (bParam2)
		{
			func_219(71);
		}
		Global_1099294->f_469 = iParam0;
	}
	else
	{
		func_220(73);
		func_220(71);
	}
}

int func_148(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return 0;
	}
	iVar0 = PLAYER::_0xB9050A97594C8832(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_PED(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (func_221(iVar1, iVar0, 1, 1) > 25f)
	{
		return 0;
	}
	return 1;
}

int func_149()
{
	int iVar0;

	iVar0 = PLAYER::_0xB9050A97594C8832(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iVar0) > 0)
	{
		return 0;
	}
	return 1;
}

void func_150()
{
	if (func_222(8, 255))
	{
		return;
	}
	func_223(3);
}

void func_151(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_219(65);
		if (bParam1)
		{
			func_219(68);
		}
	}
	else
	{
		func_220(65);
		func_220(68);
	}
}

void func_152(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_219(61);
		if (bParam1)
		{
			func_219(68);
		}
	}
	else
	{
		func_220(61);
		func_220(49);
		func_220(68);
	}
}

int func_153()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_224(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_154()
{
	return Global_1893575->f_2;
}

int func_155(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return -4613767;
		case 1:
			return 1567162363;
		case 2:
			return 456471693;
		case 3:
			return -1772963474;
		case 4:
			return 1881496386;
		case 5:
			return 711768994;
		case 6:
			return -440834066;
		case 7:
			return -1363847832;
		case 8:
			return 967769300;
		case 9:
			return -1436873944;
		case 10:
			return -1585669139;
		case 11:
			return 16791368;
		case 12:
			return 1452922822;
		case 13:
			return 549538301;
		case 14:
			return 974698954;
		case 15:
			return 445881012;
		case 16:
			return -2043891857;
		case 17:
			return 419656993;
		case 18:
			return -1732457315;
		case 19:
			return 1794318026;
		case 20:
			return 2035159966;
		case 21:
			return 770832805;
		case 22:
			return -1109814766;
		case 24:
			return -1075550363;
		case 23:
			return -1080317735;
		case 25:
			return 2138576151;
		case 26:
			return 1180954297;
		case 27:
			return 783603394;
		case 28:
			return 1162337247;
		case 30:
			return -170458336;
		case 29:
			return 2023240596;
		case 31:
			return 1285083821;
		case 32:
			return -1840907462;
		case 33:
			return 756710130;
		case 34:
			return 1634157321;
		case 35:
			return 388370024;
		case 36:
			return 1092296123;
		case 37:
			return 467491346;
		case 38:
			return -1391584612;
		case 39:
			return -152111346;
		case 40:
			return 1447551317;
		case 41:
			return 153136092;
		case 42:
			return 1304405732;
		case 43:
			return 1074984055;
		case 53:
			return 1087476368;
		case 54:
			return -1768057340;
		case 44:
			return 1218874593;
		case 55:
			return -1438443836;
		case 45:
			return -2036340415;
		case 56:
			return -597278150;
		case 46:
			return 803939643;
		case 57:
			return -632496195;
		case 47:
			return -965943619;
		case 48:
			return 283532073;
		case 49:
			return -462827524;
		case 50:
			return -69067491;
		case 51:
			return -1864895118;
		case 58:
			return -1929806571;
		case 59:
			return -698525417;
		case 60:
			return -1149739894;
		case 52:
			return 380507325;
		case 61:
			return -875142075;
		case 62:
			return 407796241;
		case 63:
			return -152267914;
		case 64:
			return -1675443320;
		case 65:
			return 1940341639;
		case 66:
			return 1846596114;
		case 67:
			return 907708501;
		case 69:
			return 1825644981;
		case 70:
			return 2065937607;
		case 71:
			return -211317417;
		case 72:
			return 1801307910;
		case 73:
			return -4118897;
		case 74:
			return 1853610692;
		case 75:
			return -1574644415;
		case 76:
			return 2133055515;
		case 77:
			return -1413401932;
		case 78:
			return 801090761;
		case 79:
			return 2131218644;
		case 80:
			return 1708823660;
		case 81:
			return 7976942;
		case 82:
			return 2111120505;
		case 83:
			return 176893118;
		case 84:
			return 1179148161;
		case 68:
			return 602306665;
		case 85:
			return 547412068;
		case 86:
			return -1539748801;
		case 87:
			return -1605119912;
		case 88:
			return -884464063;
		case 89:
			return -1420970720;
		case 90:
			return 1017024547;
		case 91:
			return -1204497306;
		case 92:
			return -1621069480;
		case 93:
			return -458604261;
		case 94:
			return -923391614;
		case 95:
			return -689247089;
		case 97:
			return 44049568;
		case 98:
			return 1350259552;
		case 96:
			return 620414938;
		case 99:
			return -61661574;
		case 100:
			return -725338054;
		case 101:
			return -770123507;
		case 102:
			return 1322486734;
		case 103:
			return -460939553;
		case 104:
			return -1451863552;
		case 105:
			return 173833068;
		case 106:
			return -1681004136;
		case 107:
			return 713715980;
		case 108:
			return -31204969;
		case 109:
			return -1720064790;
		case 110:
			return -532172775;
		case 111:
			return -739067737;
		case 112:
			return -1203133835;
		case 113:
			return -1947411598;
		case 115:
			return -1298718762;
		case 116:
			return -595083064;
		case 117:
			return 884833917;
		case 118:
			return 2141950651;
		case 114:
			return -1049753365;
		case 119:
			return -1437650729;
		case 134:
			return 672925454;
		case 135:
			return 846062774;
		case 136:
			return 1713550306;
		case 127:
			return 1369756178;
		case 128:
			return -736172423;
		case 129:
			return 1597070291;
		case 131:
			return -159501564;
		case 130:
			return -1438809608;
		case 132:
			return -102682392;
		case 133:
			return 676673543;
		case 120:
			return -81068979;
		case 121:
			return 227618407;
		case 122:
			return 2106043438;
		case 123:
			return -1380256064;
		case 124:
			return -2118469183;
		case 125:
			return -558997834;
		case 126:
			return 1563120499;
		case 137:
			return 658339366;
		default:
			break;
	}
	if (bParam1)
	{
		return 1757124778 /* GXTEntry: "Wilderness" */;
	}
	return 0;
}

void func_156(int iParam0)
{
	func_225(iParam0, 1);
}

int func_157(bool bParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1099294->f_16)
	{
		return 0;
	}
	if (!func_226())
	{
		return 0;
	}
	if (!func_227())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_228(&Global_0, 8);
	}
	func_228(&Global_0, 1);
	return 1;
}

int func_158(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_154();
	if (func_229(iVar0))
	{
		if (VOLUME::_0xF256A75210C5C0EB(((*Global_1887327)[iVar0 /*36*/])->f_4, vParam0))
		{
			return iVar0;
		}
	}
	return func_230(vParam0, iParam3);
}

int func_159(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !NETWORK::NETWORK_IS_IN_SESSION())
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if ((Global_1131092->f_9[iVar0 /*10*/])->f_4.f_2 != 0 && (Global_1131092->f_9[iVar0 /*10*/])->f_2 == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
		if (bParam1)
		{
			func_113("GC_H_PLACE", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	iVar1 = GANG::_0x901E0DC25080C8B9(iParam0);
	if (func_23(func_25(iVar1)))
	{
		return 1;
	}
	if (bParam1)
	{
		func_113("GC_H_PLACE", 10000, 0, 0, 0, 1);
	}
	return 0;
}

void func_160()
{
	if (func_177(2, 255))
	{
		return;
	}
	func_223(2);
}

void func_161()
{
	func_231(1);
	func_232(1, 1);
}

int func_162(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
		{
			return -1;
		}
	}
	return ((*Global_1277166)[iParam0 /*86*/])->f_5.f_12;
}

Vector3 func_163(int iParam0, int iParam1)
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
	func_235(1268215321, func_233(iParam0), func_234(iParam1), 0);
	if (!DATAFILE::_DATAFILE_GET_VECTOR(&vVar0, &(Global_1277020->f_1)))
	{
		return 0f, 0f, 0f;
	}
	return vVar0;
}

float func_164(int iParam0, int iParam1)
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
	func_235(-226869021, func_233(iParam0), func_234(iParam1), 0);
	if (!DATAFILE::_DATAFILE_GET_FLOAT(&fVar0, &(Global_1277020->f_1)))
	{
		return 0f;
	}
	return fVar0;
}

void func_165(vector3 vParam0, float fParam3, float fParam4, float fParam5, int iParam6, int iParam7, float fParam8)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
	fVar3 = fParam3;
	if (!func_236(&vVar0, &fVar3, 1))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
		fVar3 = fParam3;
	}
	func_237(vParam0, fParam3, vVar0, fVar3, fParam4, fParam5, iParam6, iParam7, fParam8, 1);
}

bool func_166(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 32);
}

bool func_167(int iParam0)
{
	return (Global_1099294->f_26.f_7 && iParam0) != 0;
}

bool func_168(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(&(Global_1070356->f_20795.f_353[iParam0 /*11*/]), iParam1);
}

void func_169()
{
	SCRIPTS::_0x20F4CB76689ACDBC(&(Global_1070356->f_19683.f_260));
}

bool func_170(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_171()
{
	return Global_1099294->f_339;
}

int func_172(int iParam0)
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

int func_173(int iParam0)
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

int func_174()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (func_238(iVar0, 8192))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_175(int iParam0)
{
	int iVar0;

	iVar0 = func_239(iParam0);
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

bool func_176()
{
	return (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_26285) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_26285, 0));
}

bool func_177(int iParam0, int iParam1)
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

void func_178(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	((*Global_1269869)[iVar0 /*20*/])->f_1 = (((*Global_1269869)[iVar0 /*20*/])->f_1 - (((*Global_1269869)[iVar0 /*20*/])->f_1 && iParam0));
}

void func_179(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

int func_180(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 30)
	{
		return 0;
	}
	if (func_240(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_241(iParam0))
	{
		return 0;
	}
	if (func_242(iParam0))
	{
		return 0;
	}
	if ((Global_1900718->f_67 && !func_243(iParam0, 1)) || func_244(32768))
	{
		if (!func_243(iParam0, 262144) || !Global_1904613->f_8198)
		{
			return 0;
		}
	}
	if (!func_245())
	{
		return 0;
	}
	return 1;
}

void func_181(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904613[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1904613)[iParam0] = uVar0;
}

void func_182(var uParam0)
{
	func_246(uParam0, 0f);
}

void func_183(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_184(var uParam0)
{
	int iVar0;

	iVar0 = func_188();
	if (iVar0 == -931758312)
	{
		return true;
	}
	return func_247(uParam0) == iVar0;
}

void func_185(var uParam0, struct<19> Param1, int iParam20)
{
	func_248(uParam0, Param1, iParam20);
	Global_1070356->f_22101.f_5.f_302[iParam20] = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1070356->f_22101.f_5.f_7[iParam20 /*21*/]), "locationArrayIndex", iParam20);
}

void func_186(var uParam0)
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
		if (func_60(func_64(0, uParam0), &iVar21))
		{
			iVar20 = 0;
			Var0 = 1;
		}
		else if (func_61(func_64(0, uParam0), &iVar21))
		{
			iVar20 = func_63(func_64(0, uParam0), iVar21, 1, 0, 1, 0);
			Var0 = MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar20, 0);
		}
		else
		{
			iVar20 = func_63(func_64(0, uParam0), 59806960, 1, 0, 1, 0);
			Var0 = MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar20, 0);
		}
		Var0.f_1 = 1;
		Var0.f_2 = joaat("COLOR_WHITE");
		Var0.f_3 = 0;
		Var0.f_16 = "";
		Var0.f_16 = MISC::_CREATE_VAR_STRING(0, &(Global_1070356->f_22101.f_366[uParam0->f_4 /*272*/]));
		Var0.f_17 = iVar20;
		Var0.f_18 = iVar20;
		Var0.f_6 = 42753526;
		Var0.f_5 = 42753526;
		Var0.f_4 = 1833066477;
		func_249(&(Global_1070356->f_22101.f_5.f_317), Var0, 14);
		return;
	}
	else if (!func_25(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) >= 0)
	{
		bVar19 = false;
	}
	if (func_60(func_64(0, uParam0), &iVar21))
	{
		iVar20 = 0;
		Var0 = bVar19;
	}
	else if (func_61(func_64(0, uParam0), &iVar21))
	{
		iVar20 = func_63(func_64(0, uParam0), iVar21, 1, 0, 1, 0);
		Var0 = (MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar20, 0) && bVar19);
	}
	else
	{
		iVar20 = func_63(func_64(0, uParam0), 59806960, 1, 0, 1, 0);
		Var0 = (MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar20, 0) && bVar19);
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
	Var0.f_4 = 1833066477;
	func_249(&(Global_1070356->f_22101.f_5.f_317), Var0, 14);
}

void func_187(var uParam0)
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
	iVar23 = func_70();
	if (func_74(iVar23, 1))
	{
		iVar21 = func_122(uParam0);
		if (func_60(func_64(0, uParam0), &iVar22))
		{
			iVar20 = 0;
			Var0 = 1;
		}
		else if (func_61(func_64(0, uParam0), &iVar22))
		{
			iVar20 = func_63(func_64(iVar21, uParam0), iVar22, 1, 0, 1, 0);
			Var0 = MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar20, 0);
		}
		else
		{
			iVar20 = func_63(func_64(iVar21, uParam0), 59806960, 1, 0, 1, 0);
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
		Var0.f_4 = 1833066477;
		func_250(&(Global_1070356->f_22101.f_5.f_339), Var0, 15);
		return;
	}
	else
	{
		bVar19 = false;
	}
	if (func_60(func_64(0, uParam0), &iVar22))
	{
		iVar20 = 0;
		Var0 = bVar19;
	}
	else if (func_61(func_64(0, uParam0), &iVar22))
	{
		iVar20 = func_63(func_64(0, uParam0), iVar22, 1, 0, 1, 0);
		Var0 = (MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar20, 0) && bVar19);
	}
	else
	{
		iVar20 = func_63(func_64(0, uParam0), 59806960, 1, 0, 1, 0);
		Var0 = (MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar20, 0) && bVar19);
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
	Var0.f_4 = 1833066477;
	func_250(&(Global_1070356->f_22101.f_5.f_339), Var0, 15);
}

int func_188()
{
	return Global_1070356->f_22101.f_3;
}

int func_189(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_190(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2021996203:
			return 2;
		case -1898198457:
			return 3;
		case -931758312:
			return 1;
		case -793104390:
			return 6;
		case 0:
			return 0;
		case 147265738:
			return 5;
		case 1316689641:
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

int func_191(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return -931758312;
		case 2:
			return -2021996203;
		case 3:
			return -1898198457;
		case 4:
			return 1316689641;
		case 5:
			return 147265738;
		case 6:
			return -793104390;
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

int func_192(int iParam0, bool bParam1, bool bParam2)
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

bool func_193(int iParam0)
{
	return func_130(iParam0) == 1946043663;
}

bool func_194(int iParam0)
{
	return func_130(iParam0) == -126813555;
}

int func_195(int iParam0, int iParam1, bool bParam2)
{
	if (!func_251(iParam0))
	{
		return 0;
	}
	if (ITEMDATABASE::_0xF540239F9937033B(iParam0, iParam1) == 0)
	{
		return 0;
	}
	if (bParam2)
	{
		return !func_252(iParam0, iParam1);
	}
	return 1;
}

int func_196(int iParam0, int iParam1)
{
	if (!func_110(iParam0, 0))
	{
		return func_253(func_197(iParam0), iParam1);
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

int func_197(int iParam0)
{
	return iParam0;
}

int func_198(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_254(iParam0, 2))
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

int func_199(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return 0;
	}
	if (!func_251(iParam0))
	{
		return 0;
	}
	*iParam3 = ITEMDATABASE::_0xF540239F9937033B(iParam0, iParam1);
	if (*iParam3 == 0)
	{
		if (!bParam4)
		{
		}
		return 0;
	}
	if (!bParam4)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!ITEMDATABASE::_0xF27F01BBF5ACD3F3(iParam0, iParam1, iVar0, (*uParam2)[iVar0 /*2*/]))
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
		func_255(iParam0, iParam1, uParam2, *iParam3);
	}
	return 1;
}

void func_200(int iParam0, int iParam1, var uParam2, int iParam3)
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
							if (uParam2[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
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
		if (&fVar21[iVar0] != 1f)
		{
			((*uParam2)[iVar0 /*2*/])->f_1 = (BUILTIN::ROUND((IntToFloat((10000 * ((*uParam2)[iVar0 /*2*/])->f_1)) * (&fVar21[iVar0] / 1f))) / 10000);
		}
		iVar0++;
	}
}

int func_201(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_110(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_131(iParam0);
	if (iVar0 == joaat("weapon") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("ammo") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_196(iParam0, 1399091007))
	{
		func_256(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_202(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_257(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_259(&Var0, func_258(0));
	}
	if (!func_260(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_261(iVar14);
	return uVar15;
}

int func_203(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

int func_204(bool bParam0)
{
	if (func_206() == -1)
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

struct<4> func_205(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_208(iParam0, bParam1, 0) };
	return func_209(iParam0, Var0, Var0.f_4, bParam1);
}

int func_206()
{
	return Global_1572887->f_13;
}

int func_207(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	struct<6> Var1[5];
	int iVar32;
	int iVar33;
	int iVar34;
	struct<16> Var35;
	struct<16> Var51;

	if (func_262(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_203(iParam0, joaat("default"));
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_134(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_263(&Var1, &iVar32, iParam0, iVar0, iParam1, 1) || iVar32 < 1)
		{
			return 0;
		}
		iVar34 = -1;
		Var35.f_9 = 1;
		Var35.f_11 = -1591664384;
		iVar33 = 0;
		while (iVar33 < iVar32)
		{
			Var35 = { func_264(iParam0, Var1[iVar33 /*6*/]) };
			Var35.f_12 = iParam2;
			iVar34 = func_137(joaat("use"), &Var35, 1);
			if (iVar34 == -1)
			{
				return 0;
			}
			iVar33++;
		}
		if (iVar34 != -1)
		{
			Var51.f_7 = -142743235;
			Var51 = iParam3;
			Var51.f_7 = iParam2;
			func_138(iVar34, Var51);
			return 1;
		}
		return 0;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_204(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

struct<5> func_208(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_265(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_131(iParam0);
	switch (iVar5)
	{
		case joaat("clothing"):
			Var0 = { func_209(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			break;
		case joaat("weapon"):
			Var0 = { func_258(bParam1) };
			if (iParam2 && func_266(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_267(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_267(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_268(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_269(bParam1) };
			switch (func_130(iParam0))
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
			if (func_270(iParam0, -1823706425))
			{
				Var0 = { func_209(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_270(iParam0, -1483207246))
			{
				Var0 = { func_209(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1911121386))
			{
				Var0 = { func_209(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_270(iParam0, -1653629781))
			{
				Var0 = { func_209(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_271(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_270(iParam0, -1653629781))
			{
				Var0 = { func_209(1384535894, Var0, 1784584921, bParam1) };
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

struct<4> func_209(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_110(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_204(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_210(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;
	struct<13> Var15;
	struct<16> Var31;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_262(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_271(*uParam1, &Var0, bParam6, 0, -1))
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
	if (!func_134(bParam6))
	{
		iVar14 = -1;
		if (func_206() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_137(joaat("use"), &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31 = iParam5;
				Var31.f_7 = iParam4;
				func_138(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_204(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_211(int iParam0, var uParam1)
{
	var uVar0;

	uVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, uParam1);
	if (iParam0 == joaat("use"))
	{
		if (func_272(uVar0, 2048))
		{
			return 0;
		}
	}
	else if (func_272(uVar0, 8))
	{
		return 0;
	}
	else if (func_272(uVar0, 16))
	{
		return 0;
	}
	else if (func_272(uVar0, 65536))
	{
		return 0;
	}
	return 1;
}

int func_212(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_273(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_273(iParam1, 2, 0, 0);
	return -1;
}

int func_213(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_273(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

void func_214()
{
	if (!Global_1099294->f_16)
	{
		return;
	}
	Global_1070356->f_27136.f_5 = 1;
	AUDIO::_0x531A78D6BF27014B("rdro_gamemode_transition_sounds");
	AUDIO::_0x531A78D6BF27014B("rdro_gamemode_generic_sounds");
}

void func_215(bool bParam0)
{
	if (bParam0)
	{
		func_219(109);
	}
	else
	{
		func_220(109);
	}
}

void func_216(bool bParam0)
{
	if (bParam0)
	{
		func_219(108);
	}
	else
	{
		func_220(108);
	}
}

int func_217(var uParam0, bool bParam1)
{
	struct<29> Var0;
	struct<14> Var29;
	int iVar43;
	int iVar44;
	struct<10> Var45;
	int iVar59;

	Var0.f_9 = -1591664384;
	Var29 = { func_257(0, -1591664384, -1591664384, -1591664384, -1675500494, 0, 0) };
	if (func_260(&Var29, &iVar43, &iVar44, bParam1))
	{
		Var45.f_9 = -1591664384;
		iVar59 = 0;
		while (iVar59 < iVar44)
		{
			if (func_274(&Var45, iVar59, iVar43, iVar44))
			{
				if (func_275(&Var45, &Var0, 0))
				{
					if (func_276(&(Var0.f_24), 16))
					{
						*uParam0 = { Var0 };
						func_261(iVar43);
						return 1;
					}
				}
			}
			iVar59++;
		}
		func_261(iVar43);
	}
	return 0;
}

int func_218(var uParam0, bool bParam1)
{
	struct<24> Var0;
	struct<14> Var24;
	int iVar38;
	int iVar39;
	struct<10> Var40;
	int iVar54;

	Var0.f_9 = -1591664384;
	Var24 = { func_257(0, -1591664384, -1591664384, -1591664384, 0, 0, joaat("coach")) };
	if (func_260(&Var24, &iVar38, &iVar39, bParam1))
	{
		Var40.f_9 = -1591664384;
		iVar54 = 0;
		while (iVar54 < iVar39)
		{
			if (func_274(&Var40, iVar54, iVar38, iVar39))
			{
				if (func_277(&Var40, &Var0, 0))
				{
					if (func_276(&(Var0.f_23), 16))
					{
						*uParam0 = { Var0 };
						func_261(iVar38);
						return 1;
					}
				}
			}
			iVar54++;
		}
		func_261(iVar38);
	}
	return 0;
}

int func_219(int iParam0)
{
	if (func_278(&(Global_1099294->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_220(int iParam0)
{
	if (func_279(&(Global_1099294->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

float func_221(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_222(int iParam0, int iParam1)
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

void func_223(int iParam0)
{
	func_280(2, iParam0);
}

bool func_224(int iParam0)
{
	return func_281(iParam0, 1);
}

void func_225(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!bParam1)
	{
		func_220(7);
	}
	else
	{
		if (func_282(255) == 4)
		{
			return;
		}
		iVar0 = -1;
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 <= 15)
		{
			if (&Global_1070356->f_22101.f_366[iVar1 /*272*/] == iParam0)
			{
				iVar0 = iVar1;
			}
			iVar1++;
		}
		if (iVar0 < 0)
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 16);
			iParam0 = &Global_1070356->f_22101.f_366[iVar0 /*272*/];
		}
		Global_1099294->f_582 = iParam0;
		func_283(&(Global_1099294->f_516));
		Global_1099294->f_516 = 0f;
		Global_1099294->f_516.f_5 = 1;
		Global_1099294->f_516.f_16 = 0;
		Global_1099294->f_516.f_17.f_6 = { (Global_1070356->f_22101.f_366[iVar0 /*272*/])->f_2 };
		Global_1099294->f_516.f_17.f_3 = { 0f, 0f, 0f };
		Global_1099294->f_516.f_17 = { Global_1901929->f_44.f_1, Global_1901929->f_44.f_1, Global_1901929->f_44.f_1 };
		Global_1099294->f_516.f_17.f_9 = -432403087;
		func_284(&(Global_1099294->f_555));
		iVar2 = func_285(iParam0);
		iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar2);
		if (func_286(iParam0, iVar3, &(Global_1099294->f_555.f_6), &(Global_1099294->f_555)))
		{
			Global_1099294->f_555.f_5 = 1;
		}
		func_219(7);
		func_219(0);
	}
}

bool func_226()
{
	return !Global_1572887->f_9;
}

int func_227()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return 1;
	}
	return 0;
}

void func_228(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_229(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_230(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_287(vParam0);
	iVar1 = -1;
	if (Global_1893558[iVar0] > 0)
	{
		iVar2 = (Global_1893558[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = (*Global_1892741)[iVar0 /*51*/][iVar2];
			if (VOLUME::_DOES_VOLUME_EXIST(((*Global_1887327)[iVar4 /*36*/])->f_4))
			{
				if (VOLUME::_0xF256A75210C5C0EB(((*Global_1887327)[iVar4 /*36*/])->f_4, vParam0))
				{
					switch (((*Global_1887327)[iVar4 /*36*/])->f_21)
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

void func_231(bool bParam0)
{
	if (!bParam0)
	{
		func_220(5);
	}
	else
	{
		if (func_282(255) == 4)
		{
			return;
		}
		func_219(5);
	}
}

void func_232(bool bParam0, bool bParam1)
{
	if (func_282(255) == 4)
	{
		return;
	}
	if (func_288(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_220(0);
	}
	else
	{
		if (bParam1)
		{
			func_289(0, 0, 0, 1);
		}
		func_219(0);
		func_283(&(Global_1099294->f_516));
		Global_1099294->f_516 = 0f;
		Global_1099294->f_516.f_5 = 1;
		Global_1099294->f_516.f_16 = 0;
		Global_1099294->f_516.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1099294->f_516.f_17.f_3 = { 0f, 0f, 0f };
		Global_1099294->f_516.f_17 = { Global_1901929->f_44.f_1, Global_1901929->f_44.f_1, Global_1901929->f_44.f_1 };
		Global_1099294->f_516.f_17.f_9 = -432403087;
		func_284(&(Global_1099294->f_555));
		Global_1099294->f_555.f_6 = { Global_1099294->f_516.f_17.f_6 };
		Global_1099294->f_555 = Global_1099294->f_516;
		Global_1099294->f_555.f_5 = 1;
		if (bParam1)
		{
			Global_1099294->f_26.f_18 = 0;
			Global_1099294->f_26.f_19 = 0;
		}
	}
	func_290(Global_1099294->f_516, 36);
	func_291(Global_1099294->f_555, 36);
}

int func_233(int iParam0)
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

int func_234(int iParam0)
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

void func_235(int iParam0, var uParam1, var uParam2, int iParam3)
{
	func_292();
	Global_1277020->f_1.f_2 = iParam0;
	Global_1277020->f_1.f_3 = uParam1;
	Global_1277020->f_1.f_4 = uParam2;
	Global_1277020->f_1.f_1 = iParam3;
}

int func_236(var uParam0, float fParam1, bool bParam2)
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
	iVar5 = func_285(iVar0);
	if (iVar5 <= 0)
	{
		return 0;
	}
	else
	{
		iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar5);
		if (func_286(iVar0, iVar6, uParam0, fParam1))
		{
			return 1;
		}
	}
	return 0;
}

void func_237(vector3 vParam0, float fParam3, vector3 vParam4, float fParam7, float fParam8, float fParam9, bool bParam10, int iParam11, float fParam12, int iParam13)
{
	if (func_282(255) == 4)
	{
		return;
	}
	if (func_288(vParam0))
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
		func_289(0, 0, 0, 1);
	}
	func_219(0);
	func_219(3);
	Global_1099294->f_586 = iParam11;
	Global_1099294->f_587 = fParam12;
	Global_1099294->f_588 = iParam13;
	func_283(&(Global_1099294->f_516));
	Global_1099294->f_516 = fParam3;
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
	func_284(&(Global_1099294->f_555));
	Global_1099294->f_555.f_6 = { vParam4 };
	Global_1099294->f_555 = fParam7;
	Global_1099294->f_555.f_5 = 1;
	Global_1099294->f_26.f_18 = 0;
	Global_1099294->f_26.f_19 = 0;
	func_290(Global_1099294->f_516, 36);
	func_291(Global_1099294->f_555, 36);
}

bool func_238(int iParam0, int iParam1)
{
	return func_272((Global_1185132->f_66[iParam0 /*20*/])->f_6, iParam1);
}

int func_239(int iParam0)
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

bool func_240(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(&(Global_17172.f_2563[iParam0]), iParam1);
}

int func_241(int iParam0)
{
	if (func_243(iParam0, 4))
	{
		return 0;
	}
	return 1;
}

int func_242(int iParam0)
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

bool func_243(int iParam0, int iParam1)
{
	return ((Global_1904613->f_31[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_244(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_245()
{
	if (!func_227())
	{
		return 0;
	}
	return Global_1904613->f_8196;
}

void func_246(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_293() - fParam1);
	func_294(uParam0, 1);
	func_295(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_247(var uParam0)
{
	struct<4> Var0;
	var uVar5;

	Var0 = Global_1070356->f_22101.f_366.f_4357;
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

void func_248(var uParam0, struct<19> Param1, int iParam20)
{
	char cVar0[64];

	StringCopy(&cVar0, "Fast_Travel_Location_", 64);
	StringIntConCat(&cVar0, iParam20, 64);
	Param1.f_7 = 1993479432; /* GXTEntry: "Travel" */
	func_296(uParam0, Global_1070356->f_22101.f_5.f_4, cVar0, Param1);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1070356->f_22101.f_5.f_5, iParam20, "ft_dynamic_text_and_price", *uParam0);
}

void func_249(var uParam0, struct<19> Param1, int iParam20)
{
	func_248(uParam0, Param1, iParam20);
	Global_1070356->f_22101.f_5.f_338 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1070356->f_22101.f_5.f_317, "locationArrayIndex", 14);
}

void func_250(var uParam0, struct<19> Param1, int iParam20)
{
	func_248(uParam0, Param1, iParam20);
	Global_1070356->f_22101.f_5.f_360 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1070356->f_22101.f_5.f_339, "locationArrayIndex", 15);
}

int func_251(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_BUY_AWARD_KEY_VALID(iParam0);
}

int func_252(int iParam0, int iParam1)
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
		return 0;
	}
	iVar473 = 0;
	iVar474 = 0;
	while (iVar474 < iVar471)
	{
		if (&Var0[iVar474 /*47*/] == iParam1)
		{
			iVar473 = (Var0[iVar474 /*47*/])->f_35;
			iVar475 = 0;
			while (iVar475 < iVar473)
			{
				iVar472 = &(Var0[iVar474 /*47*/])->f_36[iVar475];
				if (iVar472 == 0)
				{
				}
				else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar472))
				{
					return 1;
				}
				iVar475++;
			}
		}
		iVar474++;
	}
	return 0;
}

int func_253(int iParam0, int iParam1)
{
	if (!func_254(iParam0, 2))
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

int func_254(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

void func_255(int iParam0, int iParam1, var uParam2, int iParam3)
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
							if (uParam2[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
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
		if (&fVar21[iVar0] != 1f)
		{
			((*uParam2)[iVar0 /*2*/])->f_1 = (BUILTIN::ROUND((IntToFloat((10000 * ((*uParam2)[iVar0 /*2*/])->f_1)) * (&fVar21[iVar0] / 1f))) / 10000);
		}
		iVar0++;
	}
}

void func_256(int iParam0, var uParam1, var uParam2)
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

struct<14> func_257(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

struct<4> func_258(bool bParam0)
{
	int iVar0;

	iVar0 = func_204(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_4)))
		{
			Global_1272170->f_4 = { func_209(923904168, func_265(bParam0), -740156546, bParam0) };
		}
		return Global_1272170->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_16)))
		{
			Global_1272170->f_16 = { func_209(923904168, func_265(bParam0), -740156546, 0) };
		}
		return Global_1272170->f_16;
	}
	return func_209(923904168, func_265(bParam0), -740156546, 0);
}

void func_259(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_260(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_204(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_261(int iParam0)
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

int func_262(int iParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_263(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	var uVar0;

	*iParam1 = 0;
	if (iParam4 < 1)
	{
		return 0;
	}
	if (iParam3 == 0)
	{
		iParam3 = func_203(iParam2, joaat("default"));
		if (iParam3 == 0)
		{
			return 0;
		}
	}
	uVar0 = 5;
	if (!NETSHOPPING::_0xD1555FBC96C88444(iParam2, iParam3, iParam4, &uVar0, 5))
	{
		return 0;
	}
	if (!func_297(uParam0, iParam1, &uVar0, iParam4, bParam5))
	{
		return 0;
	}
	return 1;
}

struct<16> func_264(int iParam0, var uParam1)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_209(iParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = iParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

struct<4> func_265(bool bParam0)
{
	int iVar0;

	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_204(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1272170))
			{
				*Global_1272170 = { func_209(joaat("character"), func_298(), -1591664384, bParam0) };
			}
			return *Global_1272170;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_12)))
			{
				Global_1272170->f_12 = { func_209(joaat("character"), func_298(), -1591664384, 0) };
			}
			return Global_1272170->f_12;
		}
	}
	return func_209(joaat("character"), func_298(), -1591664384, bParam0);
}

int func_266(int iParam0, bool bParam1)
{
	if (func_130(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_299();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_267(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_300(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

int func_268(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_301(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_269(bool bParam0)
{
	int iVar0;

	iVar0 = func_204(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_8)))
		{
			Global_1272170->f_8 = { func_209(271701509, func_265(bParam0), 12999093, 0) };
		}
		return Global_1272170->f_8;
	}
	return func_209(271701509, func_265(bParam0), 12999093, 0);
}

int func_270(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_130(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (func_302(iParam0, iParam1, iVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

bool func_271(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_303(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

bool func_272(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_273(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1272170->f_20)
	{
		if (&Global_1272170->f_20.f_1[iVar0 /*20*/] == iParam0)
		{
			if ((Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1 == iParam1)
			{
			}
			else
			{
				(Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1 = iParam1;
			}
			if (iParam2 != 0 && iParam3 != 0)
			{
				(Global_1272170->f_20.f_1[iVar0 /*20*/])->f_2 = iParam2;
				(Global_1272170->f_20.f_1[iVar0 /*20*/])->f_3 = iParam3;
			}
			return;
		}
		iVar0++;
	}
	func_304(iParam0, iParam1, iParam2, iParam3);
}

int func_274(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_275(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	iVar0 = func_204(bParam2);
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam0, uParam1, 29, 1))
	{
		return 0;
	}
	return 1;
}

bool func_276(var uParam0, int iParam1)
{
	return func_272(*uParam0, iParam1);
}

int func_277(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	iVar0 = func_204(bParam2);
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam0, uParam1, 24, 1))
	{
		return 0;
	}
	return 1;
}

bool func_278(var uParam0, int iParam1, int iParam2)
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

bool func_279(var uParam0, int iParam1, int iParam2)
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

void func_280(int iParam0, int iParam1)
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

int func_281(int iParam0, int iParam1)
{
	if (!func_23(iParam0))
	{
		return 0;
	}
	return func_272((Global_1126368->f_1[iParam0 /*62*/])->f_60, iParam1);
}

int func_282(int iParam0)
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

void func_283(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_284(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

int func_285(int iParam0)
{
	struct<4> Var0;

	Var0 = Global_1070356->f_22101.f_366.f_4357;
	Var0.f_2 = 1593794963;
	Var0.f_3 = iParam0;
	return DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
}

int func_286(int iParam0, int iParam1, var uParam2, float fParam3)
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
		DATAFILE::_DATAFILE_GET_FLOAT(fParam3, &Var0);
		return 1;
	}
	return 0;
}

int func_287(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_305(vParam0, 0f, 0f, 0, 2);
	return func_305(vParam0, ((*Global_1892728)[iVar0 /*3*/])->f_1, ((*Global_1892728)[iVar0 /*3*/])->f_2, Global_1892728[iVar0 /*3*/], 4);
}

int func_288(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_289(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_306(iParam0);
	if (!func_167(1))
	{
		return;
	}
	if (bParam1)
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_78(128) && !func_17(18))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_75() == 4)
	{
		func_220(17);
	}
	func_307(1024);
}

void func_290(struct<29> Param0, var uParam29, int iParam30)
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

void func_291(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

void func_292()
{
	Global_1277020->f_1 = (Global_1070356->f_26934[49 /*4*/])->f_3;
	Global_1277020->f_1.f_1 = 0;
	Global_1277020->f_1.f_2 = 0;
	Global_1277020->f_1.f_3 = 0;
	Global_1277020->f_1.f_4 = 0;
}

float func_293()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_294(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_295(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_296(var uParam0, var uParam1, char[32] cParam2, struct<19> Param10)
{
	func_308(uParam0, uParam1, cParam2, Param10);
	uParam0->f_18 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_309(15), Param10.f_16);
	uParam0->f_19 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, func_309(50), Param10.f_17);
	uParam0->f_20 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, func_309(51), Param10.f_18);
}

int func_297(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;

	*iParam1 = 0;
	if (*uParam0 != 5)
	{
		return 0;
	}
	else if (*uParam2 != 5)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iParam3 < 1)
		{
			Jump @200; //curOff = 49
		}
		else if (((*uParam2)[iVar0 /*6*/])->f_4 == 0)
		{
			Jump @191; //curOff = 67
		}
		else if (((*uParam2)[iVar0 /*6*/])->f_5 == 0)
		{
		}
		else
		{
			*((*uParam0)[*iParam1 /*6*/]) = { *((*uParam2)[iVar0 /*6*/]) };
			((*uParam0)[*iParam1 /*6*/])->f_4 = ((*uParam2)[iVar0 /*6*/])->f_4;
			if (((*uParam2)[iVar0 /*6*/])->f_5 > iParam3)
			{
				((*uParam0)[*iParam1 /*6*/])->f_5 = iParam3;
				iParam3 = 0;
			}
			else
			{
				((*uParam0)[*iParam1 /*6*/])->f_5 = ((*uParam2)[iVar0 /*6*/])->f_5;
				iParam3 = (iParam3 - ((*uParam0)[*iParam1 /*6*/])->f_5);
			}
			*iParam1++;
		}
		iVar0++;
	}
	if (bParam4 && iParam3 > 0)
	{
		*iParam1 = 0;
		return 0;
	}
	return 1;
}

struct<4> func_298()
{
	struct<4> Var0;

	return Var0;
}

bool func_299()
{
	return (func_310(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0, 0, 0) > 0 && func_311(func_209(889965687 /* GXTEntry: "Wardrobe" */, func_265(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_300(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_110(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_203(iParam0, joaat("default")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_209(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_204(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_204(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

int func_301(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_204(0);
	*uParam1 = { func_209(iParam0, func_258(0), iParam3, 0) };
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

int func_302(int iParam0, int iParam1, int iParam2)
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

int func_303(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_204(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

void func_304(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<20> Var1;

	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1272170->f_20 < 20)
	{
		Global_1272170->f_20++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1272170->f_20.f_1[iVar0 /*20*/]) = { *(Global_1272170->f_20.f_1[iVar0 + 1 /*20*/]) };
			iVar0++;
		}
	}
	Var1 = -1;
	Var1.f_4.f_7 = -142743235;
	Var1 = iParam0;
	Var1.f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Var1.f_2 = iParam2;
		Var1.f_3 = iParam3;
	}
	*(Global_1272170->f_20.f_1[(Global_1272170->f_20 - 1) /*20*/]) = { Var1 };
}

int func_305(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
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

void func_306(int iParam0)
{
	Global_1099294->f_26.f_12 = iParam0;
}

void func_307(int iParam0)
{
	if (func_312(iParam0))
	{
		return;
	}
	Global_1099294->f_26.f_9 = (Global_1099294->f_26.f_9 || iParam0);
}

void func_308(var uParam0, var uParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, struct<16> Param10)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1, &cParam2);
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_309(0), Param10);
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_309(1), Param10.f_1);
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_309(2), Param10.f_2);
	uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_309(54), Param10.f_3);
	uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_309(55), Param10.f_4);
	uParam0->f_7 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_309(57), Param10.f_5);
	uParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_309(56), Param10.f_6);
	if (Param10.f_7 == 0)
	{
		Param10.f_7 = joaat("ib_select");
	}
	uParam0->f_8 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_309(58), Param10.f_7);
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_309(59), Param10.f_8);
	uParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_309(60), Param10.f_9);
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_309(61), Param10.f_10);
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_309(67), Param10.f_11);
	uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_309(62), Param10.f_12);
	if (Param10.f_13 == 0)
	{
		Param10.f_13 = joaat("ib_select");
	}
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_309(64), Param10.f_13);
	uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_309(65), Param10.f_14);
	uParam0->f_16 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_309(66), Param10.f_15);
}

char* func_309(int iParam0)
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

int func_310(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_313(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_204(bParam1), iParam0, iParam3);
}

int func_311(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_314(&uParam0, iParam4, bParam5, iParam6);
}

bool func_312(int iParam0)
{
	return (Global_1099294->f_26.f_9 && iParam0) == iParam0;
}

bool func_313(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_314(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_315(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_315(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_204(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return 0;
	}
	if (!func_303(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return 0;
	}
	return 1;
}

