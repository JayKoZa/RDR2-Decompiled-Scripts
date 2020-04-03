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
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	bool bLocal_32 = false;
	bool bLocal_33 = false;
	bool bLocal_34 = false;
	bool bLocal_35 = false;
	bool bLocal_36 = false;
	bool bLocal_37 = false;
	bool bLocal_38 = false;
	bool bLocal_39 = false;
	bool bLocal_40 = false;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()
{
	iLocal_13 = 1;
	iLocal_15 = vScriptParam_0.x;
	uLocal_16 = vScriptParam_0.y;
	iLocal_17 = vScriptParam_0.z;
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
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	float fVar5;

	bVar0 = func_12(iLocal_30, 0);
	bVar1 = func_13(iLocal_41);
	bVar2 = ENTITY::DOES_ENTITY_EXIST(iLocal_31);
	if (!TASK::_0x841475AC96E794D1(uLocal_16))
	{
		iLocal_29 = 6;
		return;
	}
	if (iLocal_29 <= 1 && func_14(Global_35, TASK::_0xA8452DD321607029(uLocal_16, 1)) >= 1600f)
	{
		return;
	}
	if (iLocal_29 <= 1 && ENTITY::GET_ENTITY_SPEED(Global_34) >= 8f)
	{
		return;
	}
	if ((iLocal_29 > 1 && iLocal_29 != 6) && Global_1938942->f_51)
	{
		func_15();
		iLocal_29 = 2;
		bLocal_38 = true;
	}
	if (iLocal_29 > 1 && iLocal_29 != 6)
	{
		if ((iLocal_29 != 5 && iLocal_29 != 2) && !bVar0)
		{
			func_15();
			if (bLocal_33)
			{
				iLocal_29 = 5;
				iLocal_28 = 0;
			}
			else
			{
				iLocal_29 = 2;
			}
			return;
		}
		if (!bVar2)
		{
			iLocal_29 = 6;
			return;
		}
		if (PED::IS_PED_IN_COMBAT(iLocal_31, 0))
		{
			iLocal_29 = 6;
			return;
		}
	}
	func_16();
	func_17(bVar0);
	switch (iLocal_29)
	{
		case 0:
			iVar3 = func_18();
			iLocal_52 = func_20(func_19(), iVar3);
			if (iLocal_52 == -1)
			{
				return;
			}
			bLocal_32 = false;
			bLocal_39 = false;
			STREAMING::REQUEST_MODEL(joaat("p_coin01x"), false);
			bLocal_38 = false;
			iLocal_27 = 0;
			if (iLocal_17 == 817658057)
			{
				STREAMING::REQUEST_MODEL(joaat("p_bottlebeer01x"), false);
				iVar4 = -758981113;
				iLocal_18 = 130648332;
				iLocal_19 = -1003673600;
				iLocal_21 = 817534410;
				iLocal_22 = -425323829;
				iLocal_23 = -79611391;
				iLocal_24 = -1378615306;
				iLocal_25 = -1931194237;
				iLocal_26 = 18806614;
				STREAMING::_0x19A6BE7D9C6884D3(-758981113, 262144, 0, 0);
			}
			else
			{
				iVar4 = -1208105393;
				iLocal_18 = -766432658;
				iLocal_19 = 391391121;
				iLocal_21 = -226695311;
				iLocal_22 = 1999132356;
				iLocal_23 = -467366400;
				iLocal_24 = 2127356704;
				iLocal_25 = 1054334670;
				iLocal_26 = 1885925117;
				STREAMING::_0x19A6BE7D9C6884D3(-1208105393, 262144, 0, 0);
				STREAMING::REQUEST_MODEL(joaat("p_shotglass01x"), false);
				STREAMING::REQUEST_MODEL(joaat("p_bottlejd01x"), false);
			}
			fVar5 = TASK::_0xB93EA7184BAA85C3(uLocal_16, 1);
			uLocal_42 = TASK::CREATE_SCENARIO_POINT(iVar4, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(TASK::_0xA8452DD321607029(uLocal_16, 1), fVar5, func_21()), (fVar5 - 180f), 0, 0, 0);
			TASK::_0xD3A0DA8F91612C6E(uLocal_42, (fVar5 - 180f), 1);
			TASK::_0xA7479FB665361EDB(uLocal_42, 0);
			TASK::_0xE69FDA40AAC3EFC0(uLocal_42, 0);
			iLocal_30 = TASK::_0x5BA659955369B0E2(uLocal_16);
			iLocal_41 = func_22(iLocal_52);
			if (func_23(iLocal_41))
			{
				iLocal_31 = func_24(iLocal_41);
			}
			iLocal_29 = 1;
			func_25(&uLocal_46, 1);
			break;
		case 2:
			if (((!func_26() && !bVar1) && !Global_1938942->f_51) && bVar0)
			{
				iLocal_28 = 0;
				iLocal_29 = 3;
				if (bLocal_33)
				{
					iLocal_29 = 5;
				}
			}
			break;
		case 1:
			if (!STREAMING::HAS_MODEL_LOADED(joaat("p_coin01x")))
			{
				return;
			}
			if (iLocal_17 == 817658057)
			{
				if (!STREAMING::HAS_MODEL_LOADED(joaat("p_bottlebeer01x")))
				{
					return;
				}
				if (!STREAMING::_0x9427C94D2E4094A4(-758981113, 0))
				{
					return;
				}
			}
			else
			{
				if (!STREAMING::HAS_MODEL_LOADED(joaat("p_shotglass01x")))
				{
					return;
				}
				if (!STREAMING::HAS_MODEL_LOADED(joaat("p_bottlejd01x")))
				{
					return;
				}
				if (!STREAMING::_0x9427C94D2E4094A4(-1208105393, 0))
				{
					return;
				}
			}
			if (!TASK::_0x841475AC96E794D1(uLocal_42))
			{
				return;
			}
			if (!func_12(iLocal_30, 0))
			{
				iLocal_30 = TASK::_0x5BA659955369B0E2(uLocal_16);
				return;
			}
			if (!bVar2)
			{
				if (func_23(iLocal_41))
				{
					iLocal_31 = func_24(iLocal_41);
				}
				return;
			}
			func_25(&uLocal_43, 1);
			iLocal_28 = 0;
			iLocal_29 = 3;
			break;
		case 3:
			func_27(bVar0, bVar1, bVar2);
			break;
		case 4:
			func_28();
			break;
		case 5:
			func_29(bVar0, bVar1, bVar2);
			break;
		case 6:
			iLocal_13 = 0;
			break;
	}
}

void func_7()
{
	func_15();
	TASK::_0x4161648394262FDF(TASK::_0xA8452DD321607029(uLocal_16, 1), 0.15f);
	if (TASK::_0x841475AC96E794D1(uLocal_42))
	{
		TASK::_0x81948DFE4F5A0283(uLocal_42);
	}
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
		func_30(&iVar0);
	}
}

void func_10(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_31(&iVar0);
	}
}

void func_11(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_32(&iVar0);
	}
}

int func_12(int iParam0, int iParam1)
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
	if (func_33(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_33(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_33(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_33(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_33(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_33(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_33(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_33(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_13(int iParam0)
{
	return func_34(iParam0, 1);
}

float func_14(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_15()
{
	int iVar0;

	if (!Global_1938942->f_51)
	{
		if (Global_1938942->f_50 == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			Global_1938942->f_50 = 0;
		}
		iVar0 = func_35(iLocal_41);
		if (_NAMESPACE48::_0x800DF3FC913355F3(iVar0))
		{
			_NAMESPACE48::_0xA2B18FF8D39F6D87(iVar0);
			_NAMESPACE48::_0x631CD2D77FDC0316(iVar0);
		}
	}
	else
	{
		Global_1938942->f_50 = 0;
	}
}

void func_16()
{
	if (bLocal_34 && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_31, -1342079302))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_55))
		{
			OBJECT::DELETE_OBJECT(&iLocal_55);
		}
		bLocal_34 = false;
	}
	if (bLocal_35 && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_31, 2131322378))
	{
		PED::_0x3BBDD6143FF16F98(iLocal_31, iLocal_54, "p_shotGlass01x_PH_L_HAND", "WORLD_HUMAN_BARTENDER_WHISKEY", "WORLD_HUMAN_BARTENDER_SERVE_WHISKEY_RETURN_GLASS_UNDER_BAR_MALE_A", 1);
		bLocal_35 = false;
	}
}

void func_17(bool bParam0)
{
	int iVar0;

	if (bLocal_37 && PED::_0xC488B8C0E52560D8(iLocal_30))
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iLocal_30, false);
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_30, false);
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iLocal_30, 0, 1);
	}
	if ((!bLocal_32 && bLocal_38) && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_30, 864365833))
	{
		if (iLocal_17 == 817658057)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_53))
			{
				iLocal_53 = OBJECT::CREATE_OBJECT(joaat("p_shotglass01x"), TASK::_0xA8452DD321607029(uLocal_42, 1), true, true, false, false, true);
			}
			if (PED::_0x3BBDD6143FF16F98(iLocal_30, iLocal_53, "p_bottleBeer01x_PH_R_HAND", "WORLD_HUMAN_BARCUSTOMER_BEER", "WORLD_HUMAN_BARCUSTOMER_HAS_BEER_MALE_A", 1))
			{
				bLocal_32 = true;
				bLocal_38 = false;
				bLocal_33 = true;
				bLocal_37 = false;
			}
		}
		else
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_54))
			{
				iLocal_54 = OBJECT::CREATE_OBJECT(joaat("p_shotglass01x"), TASK::_0xA8452DD321607029(uLocal_42, 1), true, true, false, false, true);
			}
			if (PED::_0x3BBDD6143FF16F98(iLocal_30, iLocal_54, "p_shotGlass01x_PH_L_Hand", "WORLD_HUMAN_BARCUSTOMER_WHISKEY", "WORLD_HUMAN_BARCUSTOMER_HAS_WHISKEY_GLASS_MALE_A", 1))
			{
				bLocal_32 = true;
				bLocal_38 = false;
				bLocal_33 = true;
				bLocal_37 = false;
			}
		}
	}
	if (bLocal_36 && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_30, 350240706))
	{
		iLocal_54 = PED::_0x4D0D2E3D8BC000EB(iLocal_30, "p_shotGlass01x_PH_L_Hand", 1);
		bLocal_36 = false;
	}
	if (bParam0)
	{
		iVar0 = PED::_0x569F1E1237508DEB(iLocal_30);
	}
	if (((bLocal_40 && !bLocal_32) && !bLocal_33) && (iVar0 == -446196418 || iVar0 == 266410079))
	{
		if (iLocal_17 == 817658057)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_53))
			{
				iLocal_53 = OBJECT::CREATE_OBJECT(joaat("p_shotglass01x"), TASK::_0xA8452DD321607029(uLocal_42, 1), true, true, false, false, true);
			}
			if (PED::_0x3BBDD6143FF16F98(iLocal_30, iLocal_53, "p_bottleBeer01x_PH_R_HAND", "WORLD_HUMAN_BARCUSTOMER_BEER", "WORLD_HUMAN_BARCUSTOMER_HAS_BEER_MALE_A", 1))
			{
				bLocal_32 = true;
				bLocal_38 = false;
				bLocal_33 = true;
				bLocal_40 = false;
				bLocal_37 = false;
			}
		}
		else
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_54))
			{
				iLocal_54 = OBJECT::CREATE_OBJECT(joaat("p_shotglass01x"), TASK::_0xA8452DD321607029(uLocal_42, 1), true, true, false, false, true);
			}
			if (PED::_0x3BBDD6143FF16F98(iLocal_30, iLocal_54, "p_shotGlass01x_PH_L_Hand", "WORLD_HUMAN_BARCUSTOMER_WHISKEY", "WORLD_HUMAN_BARCUSTOMER_HAS_WHISKEY_GLASS_MALE_A", 1))
			{
				bLocal_32 = true;
				bLocal_38 = false;
				bLocal_33 = true;
				bLocal_40 = false;
				bLocal_37 = false;
			}
		}
	}
	if (((bLocal_40 && !bLocal_32) && !PED::_0x68821369A2CEADD5(iLocal_30, iLocal_18)) && !PED::_0x68821369A2CEADD5(iLocal_30, iLocal_19))
	{
		PED::_0x6D07B371E9439019(iLocal_30);
		if (iVar0 == -1265212358)
		{
			PED::_0xD65FDC686A031C83(iLocal_30, iLocal_18, 3f);
			bLocal_37 = true;
		}
		else if (iVar0 == -1488172634)
		{
			PED::_0xD65FDC686A031C83(iLocal_30, iLocal_19, 3f);
			bLocal_37 = true;
		}
	}
}

int func_18()
{
	switch (func_19())
	{
		case 81:
			if (func_37(func_36(0), TASK::_0xA8452DD321607029(uLocal_16, 1)))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case 40:
		case 98:
		case 121:
		case 127:
			return 0;
		case 5:
			if (func_37(func_36(2), TASK::_0xA8452DD321607029(uLocal_16, 1)))
			{
				return 2;
			}
			else
			{
				return 1;
			}
			break;
		case 111:
			return 2;
	}
	return -1;
}

int func_19()
{
	return Global_1893575->f_2;
}

int func_20(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			switch (iParam1)
			{
				case 2:
					return 2;
				case 1:
					return 1;
				default:
					break;
			}
			break;
		case 111:
			switch (iParam1)
			{
				case 2:
					return 3;
				default:
					break;
			}
			break;
		case 81:
			switch (iParam1)
			{
				case 0:
					return 5;
				case 1:
					return 6;
				default:
					break;
			}
			break;
		case 98:
			switch (iParam1)
			{
				case 0:
					return 8;
				default:
					break;
			}
			break;
		case 127:
			switch (iParam1)
			{
				case 0:
					return 7;
				default:
					break;
			}
			break;
		case 121:
			switch (iParam1)
			{
				case 0:
					return 4;
				default:
					break;
			}
			break;
		case 40:
			switch (iParam1)
			{
				case 0:
					return 0;
				default:
					break;
			}
			break;
	}
	return -1;
}

Vector3 func_21()
{
	return -0.235327f, 1.850775f, 0f;
}

int func_22(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 1;
		case 6:
			return 2;
		case 3:
			return 69;
		case 2:
			return 137;
		case 1:
			return 138;
		case 8:
			return 437;
		case 0:
			return 502;
		case 4:
			return 345;
		case 7:
			return 426;
		default:
			break;
	}
	return -1;
}

bool func_23(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 948);
}

int func_24(int iParam0)
{
	if (!func_23(iParam0))
	{
		return 0;
	}
	if (!func_34(iParam0, 2))
	{
		return 0;
	}
	if (func_39(func_38(iParam0)))
	{
		return func_40(iParam0);
	}
	return PED::_0xE76687023D8C8505(func_41(iParam0), 0);
}

void func_25(var uParam0, bool bParam1)
{
	if (bParam1 || !func_42(uParam0))
	{
		func_43(uParam0);
	}
}

int func_26()
{
	if (Global_1938942->f_50 != SCRIPTS::GET_ID_OF_THIS_THREAD())
	{
		if (Global_1938942->f_50 == 0)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (Global_1938942->f_51)
	{
		return 1;
	}
	return 0;
}

void func_27(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (Global_1938942->f_51)
	{
		return;
	}
	switch (iLocal_28)
	{
		case 0:
			bVar0 = PED::_0x9C54041BB66BCF9E(iLocal_30, uLocal_16);
			if (!bVar0 && !TASK::_0x0C3CB2E600C8977D(iLocal_30, 1))
			{
				func_15();
				iLocal_29 = 5;
				iLocal_28 = 0;
				return;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_55) && TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_30, 1))
			{
				iLocal_55 = PED::_0x4D0D2E3D8BC000EB(iLocal_30, "p_coin01x", 1);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_55))
				{
					ENTITY::_0x18FF3110CF47115D(iLocal_55, 2, 0);
				}
				bLocal_34 = true;
			}
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_30, 0) && bVar0)
			{
				if ((bParam1 && !func_44(iLocal_41)) || func_26())
				{
					iLocal_29 = 2;
					return;
				}
				else
				{
					func_45();
				}
				iVar1 = PED::_0x569F1E1237508DEB(iLocal_30);
				if ((iVar1 != -1265212358 && iVar1 != -1488172634) && iVar1 != 1164151940)
				{
					iLocal_29 = 5;
					iLocal_28 = 0;
					bLocal_33 = true;
					func_15();
					return;
				}
				if (!Global_1938942->f_51)
				{
					PED::_0xA3A9299C4F2ADB98(iLocal_31);
					TASK::_TASK_USE_SCENARIO_POINT(iLocal_31, uLocal_42, 0, 0, 1, 0, 0, 0, -1082130432, 0);
					iLocal_28 = 1;
				}
			}
			break;
		case 1:
			bVar2 = PED::_0x9C54041BB66BCF9E(iLocal_31, uLocal_42);
			if (!bVar2 && !func_46(iLocal_31, -76381094))
			{
				iLocal_28 = 0;
			}
			bVar0 = PED::_0x9C54041BB66BCF9E(iLocal_30, uLocal_16);
			if (!bVar0 && !TASK::_0x0C3CB2E600C8977D(iLocal_30, 1))
			{
				func_15();
				iLocal_29 = 5;
				iLocal_28 = 0;
				return;
			}
			if (!bVar2 || !TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_31, 0))
			{
				return;
			}
			if (!PED::_0x68821369A2CEADD5(iLocal_31, iLocal_21))
			{
				TASK::CLEAR_PED_SECONDARY_TASK(iLocal_31);
				PED::_0xD65FDC686A031C83(iLocal_31, iLocal_21, 3f);
				PED::_0x6D07B371E9439019(iLocal_31);
				iLocal_27++;
			}
			if (iLocal_27 > 5)
			{
				func_15();
				iLocal_28 = 0;
			}
			if (PED::_0xC488B8C0E52560D8(iLocal_31))
			{
				func_25(&uLocal_49, 1);
				iLocal_28 = 3;
			}
			break;
		case 3:
			if (func_47())
			{
				PED::_0xD65FDC686A031C83(iLocal_31, iLocal_22, 3f);
				PED::_0x6D07B371E9439019(iLocal_31);
				if (iLocal_17 == 1231068245)
				{
					iLocal_21 = 780205091;
				}
				func_25(&uLocal_49, 1);
				iLocal_28 = 4;
			}
			break;
		case 4:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_31, 595016159) && !bLocal_39)
			{
				func_48();
			}
			if (func_47())
			{
				if (!bLocal_39)
				{
					func_48();
				}
				if (iLocal_17 == 817658057)
				{
					iLocal_28 = 6;
					iLocal_53 = PED::_0x4D0D2E3D8BC000EB(iLocal_31, "p_bottleBeer01x_PH_R_HAND", 0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
					{
					}
				}
				else
				{
					iLocal_28 = 5;
					iLocal_54 = PED::_0x4D0D2E3D8BC000EB(iLocal_31, "p_shotGlass01x_PH_L_HAND", 0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
					{
					}
				}
				if (iLocal_17 == 817658057)
				{
					PED::_0xD65FDC686A031C83(iLocal_31, iLocal_23, 3f);
				}
				else
				{
					PED::_0xD65FDC686A031C83(iLocal_31, iLocal_21, 3f);
				}
				PED::_0x6D07B371E9439019(iLocal_31);
				bLocal_38 = true;
				bLocal_40 = true;
				func_25(&uLocal_49, 1);
			}
			break;
		case 5:
			if (func_47())
			{
				PED::_0xD65FDC686A031C83(iLocal_31, iLocal_23, 3f);
				PED::_0x6D07B371E9439019(iLocal_31);
				func_25(&uLocal_49, 1);
				iLocal_28 = 7;
			}
			break;
		case 7:
			if (func_49())
			{
				func_15();
				func_50(&uLocal_49);
				iLocal_29 = 5;
				iLocal_28 = 0;
				bLocal_33 = true;
			}
			break;
		case 6:
			if (func_49())
			{
				func_15();
				func_50(&uLocal_49);
				iLocal_29 = 5;
				iLocal_28 = 0;
				bLocal_33 = true;
			}
			break;
	}
}

void func_28()
{
}

void func_29(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	if (Global_1938942->f_51)
	{
		return;
	}
	switch (iLocal_28)
	{
		case 0:
			if (bParam0)
			{
				bVar0 = PED::_0x9C54041BB66BCF9E(iLocal_30, uLocal_16);
			}
			else
			{
				bVar0 = false;
			}
			if ((bParam1 && !func_44(iLocal_41)) || func_26())
			{
				iLocal_29 = 2;
				return;
			}
			if (!bLocal_36 && TASK::_0x0C3CB2E600C8977D(iLocal_30, 0))
			{
				bLocal_36 = true;
			}
			if ((bParam0 && bVar0) && !bLocal_33)
			{
				iLocal_29 = 0;
				iLocal_28 = 0;
				return;
			}
			if (!bVar0 && !TASK::_0x0C3CB2E600C8977D(iLocal_30, 0))
			{
				if (iLocal_17 == 817658057)
				{
					if (!TASK::_0xEA31F199A73801D3(uLocal_16))
					{
						iLocal_29 = 6;
						return;
					}
				}
				else if (!bLocal_33)
				{
					iLocal_29 = 6;
					return;
				}
				bLocal_35 = true;
				if (!Global_1938942->f_51)
				{
					PED::_0xA3A9299C4F2ADB98(iLocal_31);
					TASK::_TASK_USE_SCENARIO_POINT(iLocal_31, uLocal_42, 0, 0, 1, 0, 0, 0, -1082130432, 0);
					iLocal_28 = 1;
				}
			}
			break;
		case 1:
			if ((bParam1 && !func_44(iLocal_41)) || func_26())
			{
				iLocal_29 = 2;
				iLocal_28 = 0;
				return;
			}
			if (!PED::_0x9C54041BB66BCF9E(iLocal_31, uLocal_42))
			{
				return;
			}
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_31, 0) && !PED::_0x68821369A2CEADD5(iLocal_31, iLocal_24))
			{
				func_45();
				PED::_0xD65FDC686A031C83(iLocal_31, iLocal_24, 3f);
				PED::_0x6D07B371E9439019(iLocal_31);
			}
			if (PED::_0xC488B8C0E52560D8(iLocal_31))
			{
				func_25(&uLocal_49, 1);
				iLocal_28 = 2;
			}
			break;
		case 2:
			if (func_47())
			{
				PED::_0xD65FDC686A031C83(iLocal_31, iLocal_25, 3f);
				PED::_0x6D07B371E9439019(iLocal_31);
				iLocal_28 = 3;
				func_25(&uLocal_49, 1);
			}
			break;
		case 3:
			if (func_47())
			{
				PED::_0xD65FDC686A031C83(iLocal_31, iLocal_26, 3f);
				PED::_0x6D07B371E9439019(iLocal_31);
				iLocal_28 = 7;
				func_25(&uLocal_49, 1);
			}
			break;
		case 7:
			if (func_49())
			{
				func_15();
				iLocal_29 = 6;
			}
			break;
	}
}

void func_30(int iParam0)
{
}

void func_31(int iParam0)
{
}

void func_32(int iParam0)
{
}

bool func_33(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_34(int iParam0, int iParam1)
{
	if (func_51() != -1)
	{
		return false;
	}
	if (!func_23(iParam0))
	{
		return false;
	}
	return (Global_9656[iParam0 /*2*/] && iParam1) != 0;
}

int func_35(int iParam0)
{
	if (!func_23(iParam0))
	{
		return 0;
	}
	return ((*Global_1893763)[iParam0 /*3*/])->f_1;
}

int func_36(int iParam0)
{
	int iVar0;

	switch (func_19())
	{
		case 81:
			if (iParam0 == 0)
			{
				return VOLUME::_CREATE_VOLUME_BOX(-309.497f, 809.019f, 119.378f, 0f, 0f, 99.715f, 20.984f, 11.374f, 8.647388f);
			}
			else
			{
				return VOLUME::_CREATE_VOLUME_BOX(-241.294f, 770f, 118.14f, 0f, 0f, 110.709f, 8.286f, 7.345f, 5f);
			}
			break;
		case 98:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSaloonInterior");
			VOLUME::_0x39816F6F94F385AD(iVar0, 2946.662f, 523.323f, 46.02f, 0f, 0f, 180f, 9.627f, 13.43f, 3.143f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2939.132f, 523.346f, 46.02f, 0f, 0f, 180f, 5.235f, 9.883f, 3.143f);
			return iVar0;
		case 127:
			return VOLUME::_CREATE_VOLUME_BOX(-3701.056f, -2595.456f, -14.37373f, 0f, 0f, 0f, 21.94766f, 22.09092f, 14.36038f);
		case 121:
			return VOLUME::_CREATE_VOLUME_BOX(-5514.454f, -2910.941f, 0.196263f, 0f, 0f, 28.00368f, 12.9595f, 18.61485f, 9.427321f);
		case 40:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Blackwater - m_volSaloonInterior");
			VOLUME::_0x39816F6F94F385AD(iVar0, -818.523f, -1319.681f, 46.59f, 0f, 0f, 90f, 15.6f, 16f, 8f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -809.672f, -1319.568f, 48.818f, 0f, 0f, 90f, 15.5f, 2f, 4f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -809.672f, -1324.85f, 44.569f, 0f, 0f, 90f, 5.2f, 2f, 3.8f);
			return iVar0;
		case 5:
			if (iParam0 == 2)
			{
				iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volSaloonFancyInterior");
				VOLUME::_0x39816F6F94F385AD(iVar0, 2629.396f, -1221.905f, 54.83224f, 0f, 0f, -135.58f, 3.110129f, 1.920147f, 4.694317f);
				VOLUME::_0x39816F6F94F385AD(iVar0, 2628.751f, -1228.086f, 54.83224f, 0f, 0f, 179.42f, 2.229593f, 11.71116f, 4.694317f);
				VOLUME::_0x39816F6F94F385AD(iVar0, 2635.506f, -1227.165f, 54.83224f, 0f, 0f, 179.42f, 11.64868f, 13.72192f, 4.694317f);
				return iVar0;
			}
			else
			{
				return VOLUME::_CREATE_VOLUME_BOX(2796.705f, -1167.971f, 48.56161f, 0f, 0f, -120.25f, 13.49097f, 10.18626f, 3.324371f);
			}
			break;
		case 111:
			return VOLUME::_CREATE_VOLUME_BOX(1345.534f, -1375.4f, 81.161f, 0f, 0f, 80.2f, 11.601f, 14.755f, 3.376f);
	}
	return VOLUME::_CREATE_VOLUME_BOX(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f);
}

int func_37(var uParam0, vector3 vParam1)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0))
	{
		return 0;
	}
	return VOLUME::_0xF256A75210C5C0EB(uParam0, vParam1);
}

int func_38(int iParam0)
{
	if (!func_23(iParam0))
	{
		return 0;
	}
	return Global_1893763[iParam0 /*3*/];
}

bool func_39(int iParam0)
{
	return iParam0 != 0;
}

int func_40(int iParam0)
{
	int iVar0;

	iVar0 = func_35(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(iVar0))
	{
		return 0;
	}
	return _NAMESPACE48::_0x31C70A716CAE1FEE(iVar0);
}

int func_41(int iParam0)
{
	if (!func_23(iParam0))
	{
		return 0;
	}
	return _NAMESPACE48::_0xA00DF706C60173D1(Global_1893763[iParam0 /*3*/]);
}

bool func_42(var uParam0)
{
	return func_52(*uParam0, 1);
}

void func_43(var uParam0)
{
	func_53(uParam0, 0f);
}

bool func_44(int iParam0)
{
	if (!func_23(iParam0))
	{
		return false;
	}
	return ((*Global_1893763)[iParam0 /*3*/])->f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_45()
{
	int iVar0;

	if (Global_1938942->f_51)
	{
		return;
	}
	Global_1938942->f_50 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	iVar0 = func_35(iLocal_41);
	if (_NAMESPACE48::_0x800DF3FC913355F3(iVar0))
	{
		_NAMESPACE48::_0x406808610220405B(func_35(iLocal_41));
	}
}

int func_46(int iParam0, int iParam1)
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

int func_47()
{
	if (((!Global_1938942->f_51 && func_54(&uLocal_49) > 1250) && !TASK::_0x916B8E075ABC8B4E(iLocal_31, 1)) && (!PED::_0xC488B8C0E52560D8(iLocal_31) || ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_31, 1004907005)))
	{
		return 1;
	}
	return 0;
}

void func_48()
{
	if (!bLocal_39)
	{
		if (iLocal_17 == 817658057)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_53))
			{
				iLocal_53 = OBJECT::CREATE_OBJECT(joaat("p_bottlebeer01x"), TASK::_0xA8452DD321607029(uLocal_42, 1), true, true, false, false, true);
				PED::_0x3BBDD6143FF16F98(iLocal_31, iLocal_53, "p_bottleBeer01x_PH_R_HAND", "WORLD_HUMAN_BARTENDER_BEER", "WORLD_HUMAN_BARTENDER_BARFRONT_MALE_A", 1);
				bLocal_39 = true;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_53) && !ENTITY::DOES_ENTITY_EXIST(iLocal_54))
		{
			iLocal_53 = OBJECT::CREATE_OBJECT(joaat("p_bottlejd01x"), TASK::_0xA8452DD321607029(uLocal_42, 1), true, true, false, false, true);
			iLocal_54 = OBJECT::CREATE_OBJECT(joaat("p_shotglass01x"), TASK::_0xA8452DD321607029(uLocal_42, 1), true, true, false, false, true);
			PED::_0x3BBDD6143FF16F98(iLocal_31, iLocal_53, "p_bottleJD01x_ph_r_hand", "WORLD_HUMAN_BARTENDER_WHISKEY", "WORLD_HUMAN_BARTENDER_BARFRONT_MALE_A", 1);
			PED::_0x3BBDD6143FF16F98(iLocal_31, iLocal_54, "p_shotGlass01x_PH_L_HAND", "WORLD_HUMAN_BARTENDER_WHISKEY", "WORLD_HUMAN_BARTENDER_BARFRONT_MALE_A", 1);
			bLocal_39 = true;
		}
	}
}

int func_49()
{
	if ((!PED::_0xC488B8C0E52560D8(iLocal_31) || ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_31, 1004907005)) && func_54(&uLocal_49) > 1250)
	{
		return 1;
	}
	return 0;
}

void func_50(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_51()
{
	return Global_1572887->f_13;
}

bool func_52(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_53(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_55() - fParam1);
	func_56(uParam0, 1);
	func_57(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_54(var uParam0)
{
	if (!func_42(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_58(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_59() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

float func_55()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_56(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_57(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_58(var uParam0)
{
	return func_52(*uParam0, 2);
}

int func_59()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

