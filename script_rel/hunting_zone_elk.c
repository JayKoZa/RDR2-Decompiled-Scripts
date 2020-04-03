#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	float fLocal_8 = 0f;
	float fLocal_9 = 0f;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion

void __EntryFunction__()
{
	struct<631> Var0;

	fLocal_8 = 1f;
	fLocal_9 = 1f;
	Var0 = -1;
	Var0.f_7 = 1077936128;
	Var0.f_8 = 1120403456;
	Var0.f_9 = 1120403456;
	Var0.f_10 = 1132068864;
	Var0.f_12.f_3 = 1061158912;
	Var0.f_12.f_4 = 1066611507;
	Var0.f_12.f_6 = 1;
	Var0.f_31 = 15;
	Var0.f_572 = 7;
	Var0.f_580 = 7;
	Var0.f_588 = 7;
	Var0.f_596 = 7;
	Var0.f_630 = 5;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (Var0.f_622)
		{
			if (func_1() > (Global_40.f_9319[Var0 /*4*/])->f_2)
			{
				(Global_40.f_9319[Var0 /*4*/])->f_2 = func_1();
				func_2(&((Global_40.f_9319[Var0 /*4*/])->f_2), 0, 0, 24, 0, 0, 0, 0);
			}
		}
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 2)
		{
			Var0.f_619 = 1;
		}
		SCRIPTS::_0xE7282390542F570D(ScriptParam_0);
		func_3(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (!TASK::_0x841475AC96E794D1(ScriptParam_0.f_1))
	{
		SCRIPTS::_0xE7282390542F570D(ScriptParam_0);
		func_3(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (func_4())
	{
		SCRIPTS::_0xE7282390542F570D(ScriptParam_0);
		func_3(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	Var0.f_627 = { TASK::_0xA8452DD321607029(ScriptParam_0.f_1, 1) };
	while (!func_5(&Var0) && !func_6(&Var0))
	{
		BUILTIN::WAIT(0);
	}
	func_3(&Var0);
	SCRIPTS::_0xE7282390542F570D(ScriptParam_0);
}

int func_1()
{
	return &Global_1899515;
}

void func_2(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_7(*uParam0);
	iVar1 = func_8(*uParam0);
	iVar2 = func_9(*uParam0);
	iVar3 = func_10(*uParam0);
	iVar4 = func_11(*uParam0);
	iVar5 = func_12(*uParam0);
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
	iVar6 = func_13(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_13(iVar1, iVar0);
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
	func_14(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_3(var uParam0)
{
	int iVar0;

	if (uParam0->f_626)
	{
		PED::_0xCB9401F918CB0F75(Global_35, "isInspectingGround", 0, -1);
		PED::_0x7DE9692C6F64CFE8(Global_35, false, 0, 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
		uParam0->f_626 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_12))
		{
			PLAYER::_0x9DAE1380CC5C6451(PLAYER::PLAYER_ID(), uParam0->f_12);
			PLAYER::_0x00B156AFEBCC5AE0(uParam0->f_12);
		}
		if (!uParam0->f_621 || ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_12));
		}
		else if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_12))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_12) || uParam0->f_619)
			{
				PED::DELETE_PED(&(uParam0->f_12));
			}
			else
			{
				ENTITY::_SET_ENTITY_HEALTH(uParam0->f_12, 0, Global_35);
				(Global_40.f_9319[*uParam0 /*4*/])->f_1 = 1;
				MAP::_0xDA98246C7A3C2189(func_15(*uParam0));
				MAP::_0xD8C7162AB2E2AF45(func_16(*uParam0));
				func_17(0, -1);
				if (!func_18(466))
				{
					func_20(func_19(18, 0, 0, 0), 466, 40000);
				}
			}
		}
		else
		{
			if (uParam0->f_619 && uParam0->f_11 == 8)
			{
				if (func_21(Global_35) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(func_22(Global_35)) == uParam0->f_12)
				{
					func_23(*uParam0, 1);
					func_25(func_24(*uParam0), uParam0->f_12.f_1, ENTITY::GET_ENTITY_COORDS(uParam0->f_12, true, false), 1, 0);
					func_27(func_26(-1989706689, func_24(*uParam0)), 1);
					func_27(func_26(joaat("killed"), func_24(*uParam0)), 1);
					func_27(func_26(-212244724 /* GXTEntry: "Skinned 1 ~a~" */, func_24(*uParam0)), 1);
					STATS::_0xA59590050F80FF2E(func_24(*uParam0), 0, 1, 0);
					ENTITY::_0x6BCF5F3D8FFE988D(uParam0->f_12, 1);
					TASK::_0xA21AA2F0C2180125(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(uParam0->f_12), 0);
					_NAMESPACE49::_0x9D16896F0DBE78A2(ENTITY::GET_ENTITY_COORDS(uParam0->f_12, true, false), 1f);
				}
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_12));
		}
	}
	if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_12.f_9))
	{
		PED::_RELEASE_METAPED_OUTFIT_REQUEST(uParam0->f_12.f_9);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_3))
	{
		func_28(uParam0->f_3);
		VOLUME::_DELETE_VOLUME(uParam0->f_3);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_2))
	{
		func_28(uParam0->f_2);
		VOLUME::_DELETE_VOLUME(uParam0->f_2);
		func_29(&(uParam0->f_5), uParam0->f_4, 0);
	}
	if (*uParam0 == 15)
	{
		FLOCK::_0x706B434FEFAD6A24(-1f);
		FLOCK::_0xA881F5C77A560906(-1f);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_6))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_6));
	}
	iVar0 = 0;
	while (iVar0 < func_30())
	{
		if (ENTITY::DOES_ENTITY_EXIST((uParam0->f_31[iVar0 /*36*/])->f_1))
		{
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&((uParam0->f_31[iVar0 /*36*/])->f_1));
			if ((uParam0->f_31[iVar0 /*36*/])->f_9 != -1)
			{
				GRAPHICS::_0x9CF1836C03FB67A2(&((uParam0->f_31[iVar0 /*36*/])->f_9), 1);
			}
			if (MAP::DOES_BLIP_EXIST(&(uParam0->f_31[iVar0 /*36*/])))
			{
				MAP::REMOVE_BLIP(uParam0->f_31[iVar0 /*36*/]);
			}
			if ((uParam0->f_31[iVar0 /*36*/])->f_3 != 0)
			{
				ENTITY::_0xD2B9C78537ED5759((uParam0->f_31[iVar0 /*36*/])->f_3);
			}
		}
		func_31((uParam0->f_31[iVar0 /*36*/])->f_10);
		func_32(&((uParam0->f_31[iVar0 /*36*/])->f_16), 1, 1);
		iVar0++;
	}
	func_33(uParam0);
}

int func_4()
{
	return 0;
}

int func_5(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (uParam0->f_11 > 0)
	{
		bVar0 = false;
		bVar1 = false;
		if ((MISC::GET_GAME_TIMER() - uParam0->f_613) > 1200000)
		{
			bVar0 = true;
		}
		if (func_34() || func_35(&Global_1935630, 131072))
		{
			bVar0 = true;
		}
		if ((SCRIPTS::_0x9E4EF615E307FBBE() && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("hunting1")) == 0) && !func_36(15))
		{
			bVar0 = true;
		}
		else if (func_37() && *uParam0 != 0)
		{
			iVar2 = func_38(0);
			if (iVar2 != 9 && iVar2 != 7)
			{
				bVar0 = true;
			}
		}
		else if (func_39(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			if (!(Global_40.f_9319[*uParam0 /*4*/])->f_1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_12) && ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_12))
					{
						func_40(200, 1);
					}
				}
			}
			bVar0 = true;
		}
		if (bVar0)
		{
			if (uParam0->f_622)
			{
				if ((Global_40.f_9319[*uParam0 /*4*/])->f_1)
				{
					bVar1 = true;
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_12) && ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_12))
					{
						bVar1 = true;
					}
				}
				if (!bVar1)
				{
					func_41(Global_35, "HUNTING_LOST_TRAIL", joaat("speech_params_standard"), 0, 0, 0, 0, 1);
				}
				if (func_1() > (Global_40.f_9319[*uParam0 /*4*/])->f_2)
				{
					(Global_40.f_9319[*uParam0 /*4*/])->f_2 = func_1();
					func_2(&((Global_40.f_9319[*uParam0 /*4*/])->f_2), 0, 0, 24, 0, 0, 0, 0);
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_6(var uParam0)
{
	switch (uParam0->f_11)
	{
		case 0:
			if (func_42(uParam0))
			{
				uParam0->f_11 = 1;
			}
			uParam0->f_613 = MISC::GET_GAME_TIMER();
			break;
		case 1:
			if (func_43(uParam0))
			{
				uParam0->f_11 = 9;
			}
			else
			{
				uParam0->f_11 = 2;
			}
			break;
		case 2:
			if (uParam0->f_623)
			{
				PED::_0xED9582B3DA8F02B4(func_44(0) + 1);
			}
			else
			{
				PED::_0xED9582B3DA8F02B4(1);
			}
			func_45(uParam0);
			uParam0->f_11 = 3;
			break;
		case 3:
			if (PED::_0x5E420FF293EE5472() && func_46(uParam0))
			{
				uParam0->f_11 = 4;
			}
			break;
		case 4:
			if (func_47(uParam0))
			{
				uParam0->f_11 = 5;
			}
			break;
		case 5:
			if (func_48(uParam0))
			{
				uParam0->f_11 = 6;
			}
			break;
		case 6:
			if (func_49(uParam0))
			{
				uParam0->f_11 = 7;
			}
			break;
		case 7:
			if (!uParam0->f_622)
			{
				func_50(uParam0);
			}
			func_51(uParam0);
			if (uParam0->f_621)
			{
				func_52(uParam0);
			}
			if ((MISC::GET_FRAME_COUNT() % 5) == 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
				{
					if (ENTITY::IS_ENTITY_DEAD(uParam0->f_12))
					{
						(Global_40.f_9319[*uParam0 /*4*/])->f_1 = 1;
						MAP::_0xDA98246C7A3C2189(func_15(*uParam0));
						MAP::_0xD8C7162AB2E2AF45(func_16(*uParam0));
						func_17(0, -1);
						if (!func_18(466))
						{
							func_20(func_19(18, 0, 0, 0), 466, 40000);
						}
						func_33(uParam0);
						if (MAP::DOES_BLIP_EXIST(uParam0->f_6))
						{
							MAP::REMOVE_BLIP(&(uParam0->f_6));
						}
						uParam0->f_11 = 8;
					}
					else if ((uParam0->f_679 != 0 && !uParam0->f_680) && PED::IS_PED_IN_COMBAT(uParam0->f_12, 0))
					{
						AUDIO::_0xDC2F83A0612CA34D(uParam0->f_679);
						uParam0->f_680 = 1;
					}
					else if (uParam0->f_680)
					{
						if (!PED::IS_PED_IN_COMBAT(uParam0->f_12, 0))
						{
							AUDIO::_0x6AB944DF68B512D3(uParam0->f_679);
							uParam0->f_680 = 0;
						}
					}
				}
			}
			break;
		case 8:
			if (func_53(func_26(joaat("killed"), func_24(*uParam0))) < 1)
			{
				func_27(func_26(joaat("killed"), func_24(*uParam0)), 1);
			}
			if (func_54(uParam0))
			{
				func_17(0, -1);
				uParam0->f_11 = 9;
			}
			break;
		case 9:
			return 1;
	}
	return 0;
}

var func_7(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_55(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_8(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_9(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_10(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_11(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_12(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_13(int iParam0, int iParam1)
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

void func_14(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_56(uParam0, iParam6);
	func_57(uParam0, iParam5);
	func_58(uParam0, iParam4);
	func_59(uParam0, iParam3);
	func_60(uParam0, iParam2);
	func_61(uParam0, iParam1);
}

int func_15(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -372503450;
		case 1:
			return 1523666538;
		case 2:
			return 4951849;
		case 3:
			return -1644197791;
		case 4:
			return -1503385932;
		case 5:
			return 87178501;
		case 6:
			return -188752474;
		case 7:
			return -349166975;
		case 8:
			return -1290927903;
		case 9:
			return 637563550;
		case 10:
			return 1475355982;
		case 11:
			return 1724443719;
		case 12:
			return 1050506191;
		case 13:
			return 1623565947;
		case 14:
			return -1962265862;
		case 15:
			return 1526203407;
		default:
			break;
	}
	return 0;
}

int func_16(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 13083484;
		case 1:
			return 333045931;
		case 2:
			return 1902076494;
		case 3:
			return -453294510;
		case 4:
			return 904770332;
		case 5:
			return 1407413829;
		case 6:
			return 45199580;
		case 7:
			return -140390317;
		case 8:
			return 1415123831;
		case 9:
			return 1789471985;
		case 10:
			return -2000773121;
		case 11:
			return 21224643;
		case 12:
			return -1026516599;
		case 13:
			return -1026066875;
		case 14:
			return -1536975869;
		case 15:
			return -412469442;
		default:
			break;
	}
	return 0;
}

void func_17(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_62(&Global_0, 8);
	}
	if (!func_63() || func_64() != -1)
	{
		return;
	}
	func_62(&Global_0, 1);
}

bool func_18(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_64() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iVar1]), iVar2);
}

int func_19(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;

	iVar0 = -1;
	iVar1 = -1;
	fVar4 = -1f;
	iVar0 = 0;
	while (iVar0 < 153)
	{
		if (!func_65(iVar0))
		{
		}
		else if (func_66(iVar0) != iParam0)
		{
		}
		else if (bParam1)
		{
			if (!func_67(iVar0))
			{
			}
			else
			{
				iVar2 = func_68(iVar0);
				if (bParam3)
				{
					if (!func_69(iVar2))
					{
					}
					else if (bParam2)
					{
						if (func_70(iVar2))
						{
						}
						else
						{
							fVar3 = func_72(Global_35, func_71(iVar0), 1);
							if (fVar3 < fVar4 || fVar4 == -1f)
							{
								iVar1 = iVar0;
								fVar4 = fVar3;
							}
						}
						iVar0++;
						return iVar1;
					}
				}
			}
		}
	}

void func_20(var uParam0, int iParam1, int iParam2)
{
	Global_1934051->f_115 = iParam1;
	Global_1934051->f_116 = uParam0;
	Global_1934051->f_117 = iParam2;
	Global_1934051->f_118 = 1;
}

int func_21(int iParam0)
{
	var uVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 0, &uVar0, 1, 1) != 0)
	{
		return 1;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 2, &uVar0, 1, 1) != 0)
	{
		return 1;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 1, &uVar0, 1, 1) != 0)
	{
		return 1;
	}
	if (PED::_0x758F081DB204DDDE(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_22(int iParam0)
{
	var uVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 0, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 2, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 1, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	return 0;
}

void func_23(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	var uVar5[15];
	var uVar21;
	var uVar22;

	iVar0 = 0;
	iVar3 = 0;
	iVar4 = 0;
	uVar21 = func_73(iParam0);
	func_74(iParam0, &uVar22);
	iVar4 = PED::_0xB29C553BA582D09E(&uVar5, uVar22, 2, 4);
	if (iVar4 > 0 && iVar4 < 15)
	{
		bVar1 = true;
		bVar2 = false;
		iVar3 = 0;
		while (iVar3 < iVar4)
		{
			iVar0 = 0;
			if (func_75(&(uVar5[iVar3]), 369710026, &iVar0))
			{
				iVar0 = (iVar0 - func_76(&(uVar5[iVar3]), 1));
				if (iVar0 > 0)
				{
					if (func_77(&(uVar5[iVar3]), 1))
					{
						if (!func_78(&(uVar5[iVar3]), 1, iVar0))
						{
							bVar1 = false;
						}
						else
						{
							bVar2 = true;
						}
					}
				}
			}
			if (bParam1 && func_75(&(uVar5[iVar3]), -768110908, &iVar0))
			{
				iVar0 = (iVar0 - func_76(&(uVar5[iVar3]), 0));
				if (iVar0 > 0)
				{
					if (func_77(&(uVar5[iVar3]), 0))
					{
						if (!func_78(&(uVar5[iVar3]), 0, iVar0))
						{
							bVar1 = false;
						}
						else
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar3++;
		}
		if (bVar1)
		{
			(Global_40.f_9319[iParam0 /*4*/])->f_3 = 0;
			func_79(&(Global_20709.f_2407), uVar21);
			if (bVar2)
			{
				func_40(467, 1);
			}
			func_17(0, -1);
		}
	}
}

int func_24(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1781233743;
		case 1:
			return 636730081;
		case 2:
			return -795241033;
		case 3:
			return -1550790546;
		case 4:
			return 950257367;
		case 5:
			return -1894468643;
		case 6:
			return 2111267495;
		case 7:
			return 1044478494;
		case 8:
			return -973690007;
		case 9:
			return 1210759497;
		case 10:
			return 1895708243;
		case 11:
			return 225698625;
		case 12:
			return -1998732171;
		case 13:
			return 1631667828;
		case 14:
			return -908129790;
		case 15:
			return -377162693;
		default:
			break;
	}
	return 0;
}

void func_25(int iParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = COMPENDIUM::COMPENDIUM_GET_MAP_DISCOVERABLE_FROM_STAT_ITEM(iParam0, vParam2);
	iVar1 = iVar0;
	if (iVar1 != 0 && !MAP::_0x3F81EA4275D39D6F(iVar1))
	{
		MAP::_0xD8C7162AB2E2AF45(iVar1);
	}
	if (bParam5 && -153407852 != iParam0)
	{
		COMPENDIUM::COMPENDIUM_ANIMAL_OBSERVED_BY_STAT_NAME(iParam0, iParam6);
	}
	if (Global_1572887->f_12 == -1)
	{
		if (Global_40.f_39 == joaat("player_zero"))
		{
			iVar2 = func_80(iParam0, iParam1, 1);
			if (iVar2 != 0)
			{
				func_81(iVar2, 0);
			}
		}
		else
		{
			iVar2 = func_80(iParam0, iParam1, 1);
			if (iVar2 != 0)
			{
				if (HUD::_JOURNAL_CAN_WRITE_ENTRY(iVar2))
				{
					iVar2 = func_80(iParam0, iParam1, 0);
					if (iVar2 != 0)
					{
						func_81(iVar2, 0);
					}
				}
			}
		}
	}
}

struct<2> func_26(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_27(var uParam0, int iParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

void func_28(var uParam0)
{
	vector3 vVar0;

	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0))
	{
		return;
	}
	vVar0 = { VOLUME::_0xF70F00013A62F866(uParam0) };
	func_82(vVar0, 0);
}

void func_29(var uParam0, var uParam1, bool bParam2)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam1))
	{
		return;
	}
	PED::CLEAR_PED_NON_CREATION_AREA();
	POPULATION::_0xA1CFB35069D23C23(uParam1);
	POPULATION::_0x74C2B3DC0B294102(uParam1);
	if (PED::_0x91A5F9CBEBB9D936(*uParam0))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam0, bParam2);
	}
}

int func_30()
{
	return 9;
}

void func_31(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0))
	{
		VOLUME::_DELETE_VOLUME(uParam0);
	}
}

void func_32(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_83(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_84(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_85(iVar0);
	*uParam0 = 0;
}

void func_33(var uParam0)
{
	if (uParam0->f_680)
	{
		AUDIO::_0x6AB944DF68B512D3(uParam0->f_679);
		uParam0->f_680 = 0;
	}
	if (uParam0->f_614 > 0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_677))
		{
			AUDIO::SET_AMBIENT_ZONE_STATE(uParam0->f_677, false, true);
		}
	}
}

bool func_34()
{
	return (func_35(&Global_1935630, 4096) || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1637780761) > 0);
}

bool func_35(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_36(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_86(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

bool func_37()
{
	return Global_1898164->f_163;
}

int func_38(int iParam0)
{
	return (Global_1898164->f_1[iParam0 /*5*/])->f_2;
}

int func_39(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_87(bParam1, bParam2, bParam3);
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

void func_40(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_88(iParam0, &iVar0, &iVar1);
	if (!func_89(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_90(iVar0, iVar1);
}

var func_41(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_91(uParam0, &Var0);
}

int func_42(var uParam0)
{
	*uParam0 = 10;
	uParam0->f_1 = 1;
	uParam0->f_9 = 90f;
	uParam0->f_10 = 190f;
	uParam0->f_572[0] = -1434264647;
	uParam0->f_572[1] = 1723063474;
	uParam0->f_572[2] = 987139947;
	uParam0->f_580[0] = 0;
	uParam0->f_580[1] = 5;
	uParam0->f_580[2] = 1;
	uParam0->f_588[0] = 0;
	uParam0->f_588[1] = 5;
	uParam0->f_588[2] = 4;
	uParam0->f_596[0] = 1;
	uParam0->f_596[1] = 1;
	uParam0->f_596[2] = 1;
	uParam0->f_12.f_1 = joaat("a_c_elk_01");
	uParam0->f_12.f_3 = 0.9f;
	uParam0->f_12.f_5 = 1;
	uParam0->f_12.f_8 = -566788959;
	return 1;
}

int func_43(var uParam0)
{
	float fVar0;
	var uVar1;
	int iVar6[4];

	if (*uParam0 != -1)
	{
		if (!func_92(15))
		{
			return 1;
		}
		if ((Global_40.f_9319[*uParam0 /*4*/])->f_1)
		{
			return 1;
		}
		else if (func_1() < (Global_40.f_9319[*uParam0 /*4*/])->f_2)
		{
			func_40(201, 1);
			return 1;
		}
	}
	if (*uParam0 == 1)
	{
		if ((func_93(123) || func_94(123)) || func_95(123))
		{
			return 1;
		}
		else
		{
			fVar0 = 10f;
		}
	}
	else if (*uParam0 == 13)
	{
		fVar0 = 10f;
	}
	else if (*uParam0 == 5)
	{
		fVar0 = 10f;
	}
	else if (*uParam0 == 12)
	{
		fVar0 = 50f;
	}
	else
	{
		fVar0 = (uParam0->f_9 - 15f);
	}
	uVar1 = 4;
	iVar6[0] = 4096;
	iVar6[1] = 16384;
	iVar6[2] = 16;
	iVar6[3] = 8192;
	if (VOLUME::_0x51E52C9687FCDEEC(uParam0->f_627, fVar0, &uVar1, &iVar6, 0))
	{
		func_40(200, 1);
		return 1;
	}
	return 0;
}

int func_44(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = 3;
			break;
		case 1:
			iVar0 = 3;
			break;
		case 2:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

void func_45(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (&uParam0->f_572[iVar0] != 0)
		{
			STREAMING::REQUEST_MODEL(&(uParam0->f_572[iVar0]), false);
		}
		iVar0++;
	}
	if (uParam0->f_12.f_1 != 0)
	{
		STREAMING::REQUEST_MODEL(uParam0->f_12.f_1, false);
	}
}

int func_46(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (&uParam0->f_572[iVar0] != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED(&(uParam0->f_572[iVar0])))
			{
				return 0;
			}
		}
		iVar0++;
	}
	if (uParam0->f_12.f_1 != 0)
	{
		if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_12.f_1))
		{
			return 0;
		}
		else if (uParam0->f_12.f_5)
		{
			if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_12.f_9))
			{
				if (uParam0->f_12.f_7 > 0)
				{
					uParam0->f_12.f_9 = PED::_0x273915CE30780986(uParam0->f_12.f_1, uParam0->f_12.f_7);
				}
				else
				{
					uParam0->f_12.f_9 = PED::_REQUEST_METAPED_OUTFIT(uParam0->f_12.f_1, uParam0->f_12.f_8);
				}
				return 0;
			}
			else if (!PED::_0x610438375E5D1801(uParam0->f_12.f_9))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_47(var uParam0)
{
	float fVar0;

	fVar0 = (uParam0->f_9 + 20f);
	uParam0->f_3 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_627, 0f, 0f, 0f, fVar0, fVar0, fVar0, "HuntingZoneRestrictionPending");
	func_96(uParam0->f_3, "Hunting Zone Target Pending", 0, 0, 8192, 0, -1082130432 /* Float: -1f */);
	return 1;
}

int func_48(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < func_97())
	{
		iVar1 = 0;
		while (iVar1 < func_44(iVar0))
		{
			func_98(uParam0, iVar0, iVar1);
			uParam0->f_618++;
			iVar1++;
		}
		iVar0++;
	}
	return 1;
}

int func_49(var uParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[16];
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;

	uParam0->f_12.f_10 = { uParam0->f_627 + Vector(-20f, 0f, 0f) };
	uParam0->f_12.f_13 = { 0f, 0f, func_99(0) };
	if (uParam0->f_12.f_1 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
		{
			if (uParam0->f_12.f_5)
			{
				uParam0->f_12 = PED::_0xEAF682A14F8E5F53(uParam0->f_12.f_9, uParam0->f_12.f_10, 0, 1, 1, 0, 0);
			}
			else
			{
				uParam0->f_12 = func_100(uParam0->f_12.f_1, uParam0->f_12.f_10, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0);
			}
			func_101(uParam0);
			return 0;
		}
	}
	uVar1 = uParam0->f_12.f_3;
	iVar0 = 0;
	while (iVar0 < func_30())
	{
		if ((uParam0->f_31[iVar0 /*36*/])->f_4 != 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST((uParam0->f_31[iVar0 /*36*/])->f_1) && (uParam0->f_31[iVar0 /*36*/])->f_28 < 3)
			{
				if ((uParam0->f_31[iVar0 /*36*/])->f_6 == 0)
				{
					(uParam0->f_31[iVar0 /*36*/])->f_1 = OBJECT::CREATE_OBJECT((uParam0->f_31[iVar0 /*36*/])->f_4, (uParam0->f_31[iVar0 /*36*/])->f_17, true, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING((uParam0->f_31[iVar0 /*36*/])->f_1, (uParam0->f_31[iVar0 /*36*/])->f_23);
					ENTITY::_0x9587913B9E772D29((uParam0->f_31[iVar0 /*36*/])->f_1, 0);
				}
				else if ((uParam0->f_31[iVar0 /*36*/])->f_6 == 1)
				{
					(uParam0->f_31[iVar0 /*36*/])->f_1 = OBJECT::CREATE_OBJECT((uParam0->f_31[iVar0 /*36*/])->f_4, (uParam0->f_31[iVar0 /*36*/])->f_17, true, true, false, false, true);
					ENTITY::SET_ENTITY_ROTATION((uParam0->f_31[iVar0 /*36*/])->f_1, 0f, 90f, (uParam0->f_31[iVar0 /*36*/])->f_23, 0, false);
				}
				else if ((uParam0->f_31[iVar0 /*36*/])->f_6 == 2)
				{
					(uParam0->f_31[iVar0 /*36*/])->f_2 = func_100((uParam0->f_31[iVar0 /*36*/])->f_4, (uParam0->f_31[iVar0 /*36*/])->f_17, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST((uParam0->f_31[iVar0 /*36*/])->f_2))
					{
						func_102((uParam0->f_31[iVar0 /*36*/])->f_2, 0, 0);
						PED::SET_PED_CONFIG_FLAG((uParam0->f_31[iVar0 /*36*/])->f_2, 186, false);
						PED::APPLY_PED_DAMAGE_PACK((uParam0->f_31[iVar0 /*36*/])->f_2, &(uParam0->f_605), 1f, 1f);
						_NAMESPACE49::_0xF5622FA6ACFCA7DB((uParam0->f_31[iVar0 /*36*/])->f_2, MISC::GET_RANDOM_INT_IN_RANGE(40, 50));
						_NAMESPACE49::_0xDC0A1F0ECEC9F0C0((uParam0->f_31[iVar0 /*36*/])->f_2, 1.25f);
						MISC::_0x674B90BE1115846D((uParam0->f_31[iVar0 /*36*/])->f_2, 1);
					}
					(uParam0->f_31[iVar0 /*36*/])->f_1 = func_103((uParam0->f_31[iVar0 /*36*/])->f_2);
				}
				else if ((uParam0->f_31[iVar0 /*36*/])->f_6 == 3)
				{
					(uParam0->f_31[iVar0 /*36*/])->f_9 = GRAPHICS::_0xFA50F79257745E74((uParam0->f_31[iVar0 /*36*/])->f_17, uVar1, 4, -1, 0);
					(uParam0->f_31[iVar0 /*36*/])->f_1 = OBJECT::CREATE_OBJECT((uParam0->f_31[iVar0 /*36*/])->f_4, (uParam0->f_31[iVar0 /*36*/])->f_17, true, true, false, false, true);
				}
				else if ((uParam0->f_31[iVar0 /*36*/])->f_6 == 4)
				{
					(uParam0->f_31[iVar0 /*36*/])->f_9 = GRAPHICS::_0xFA50F79257745E74((uParam0->f_31[iVar0 /*36*/])->f_17, uVar1, 2, -1, 0);
					(uParam0->f_31[iVar0 /*36*/])->f_1 = OBJECT::CREATE_OBJECT((uParam0->f_31[iVar0 /*36*/])->f_4, (uParam0->f_31[iVar0 /*36*/])->f_17, true, true, false, false, true);
				}
				else if ((uParam0->f_31[iVar0 /*36*/])->f_6 == 5)
				{
					if ((uParam0->f_31[iVar0 /*36*/])->f_3 == 0)
					{
						(uParam0->f_31[iVar0 /*36*/])->f_3 = ENTITY::_0x6F3068258A499E52((uParam0->f_31[iVar0 /*36*/])->f_4, (uParam0->f_31[iVar0 /*36*/])->f_17, 11);
					}
					else if (ENTITY::_0x1FF441D7954F8709((uParam0->f_31[iVar0 /*36*/])->f_3))
					{
						(uParam0->f_31[iVar0 /*36*/])->f_1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA((uParam0->f_31[iVar0 /*36*/])->f_3));
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST((uParam0->f_31[iVar0 /*36*/])->f_1))
				{
					if ((uParam0->f_31[iVar0 /*36*/])->f_26 == 0)
					{
						uParam0->f_31[iVar0 /*36*/] = MAP::_BLIP_ADD_FOR_COORD(1538154804, (uParam0->f_31[iVar0 /*36*/])->f_17);
					}
					StringCopy(&cVar2, "hzt_", 16);
					StringIntConCat(&cVar2, *uParam0, 16);
					StringConCat(&cVar2, "_clue_", 16);
					StringIntConCat(&cVar2, (uParam0->f_31[iVar0 /*36*/])->f_27, 16);
					StringConCat(&cVar2, "_", 16);
					StringIntConCat(&cVar2, (uParam0->f_31[iVar0 /*36*/])->f_26, 16);
					(uParam0->f_31[iVar0 /*36*/])->f_29 = { cVar2 };
					fVar13 = (MISC::GET_DISTANCE_BETWEEN_COORDS((uParam0->f_31[iVar0 /*36*/])->f_20, (uParam0->f_31[iVar0 /*36*/])->f_17, true) / 4f);
					vVar4 = { (uParam0->f_31[iVar0 /*36*/])->f_20 - (uParam0->f_31[iVar0 /*36*/])->f_17 };
					vVar7 = { func_104(vVar4, 1.5f) };
					vVar10 = { func_104(vVar4, fVar13) };
					*(uParam0->f_630[0 /*8*/]) = { (uParam0->f_31[iVar0 /*36*/])->f_17 };
					*(uParam0->f_630[1 /*8*/]) = { (uParam0->f_31[iVar0 /*36*/])->f_17 + vVar7 };
					*(uParam0->f_630[2 /*8*/]) = { *(uParam0->f_630[1 /*8*/]) + vVar10 };
					*(uParam0->f_630[3 /*8*/]) = { *(uParam0->f_630[2 /*8*/]) + vVar10 };
					*(uParam0->f_630[4 /*8*/]) = { *(uParam0->f_630[3 /*8*/]) + vVar7 };
					func_105(uParam0->f_630[1 /*8*/], 50, 10, 0);
					func_105(uParam0->f_630[2 /*8*/], 50, 10, 0);
					func_105(uParam0->f_630[3 /*8*/], 50, 10, 0);
					func_105(uParam0->f_630[4 /*8*/], 50, 10, 0);
					TASK::_0x5C885E0978B6AD60(func_106(&((uParam0->f_31[iVar0 /*36*/])->f_29)), &(uParam0->f_630), 5, 0);
				}
				(uParam0->f_31[iVar0 /*36*/])->f_28++;
				return 0;
			}
		}
		iVar0++;
	}
	func_40(199, 1);
	if (!&Global_40.f_9319[*uParam0 /*4*/])
	{
		MAP::_0xD8C7162AB2E2AF45(func_15(*uParam0));
		Global_40.f_9319[*uParam0 /*4*/] = 1;
	}
	return 1;
}

void func_50(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	float fVar4;

	fVar0 = 9999f;
	iVar1 = 0;
	bVar3 = PLAYER::_0x45AB66D02B601FA7(PLAYER::PLAYER_ID());
	iVar2 = 0;
	while (iVar2 < func_30())
	{
		fVar4 = 0f;
		if ((uParam0->f_31[iVar2 /*36*/])->f_13)
		{
			if (MAP::DOES_BLIP_EXIST(&(uParam0->f_31[iVar2 /*36*/])))
			{
				MAP::_0x662D364ABF16DE2F(&(uParam0->f_31[iVar2 /*36*/]), -1186550032);
			}
			fVar4 = func_107(Global_35, (uParam0->f_31[iVar2 /*36*/])->f_17, 1);
			if (fVar4 < fVar0)
			{
				fVar0 = fVar4;
				iVar1 = iVar2;
			}
		}
		iVar2++;
	}
	MAP::_SET_BLIP_FLASH_STYLE(&(uParam0->f_31[iVar1 /*36*/]), -1186550032);
	if (bVar3)
	{
		MAP::_0x662D364ABF16DE2F(&(uParam0->f_31[iVar1 /*36*/]), 1641478980);
	}
	else
	{
		MAP::_SET_BLIP_FLASH_STYLE(&(uParam0->f_31[iVar1 /*36*/]), 1641478980);
	}
}

void func_51(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;
	int iVar9;

	bVar5 = false;
	bVar6 = PED::IS_PED_ON_MOUNT(Global_35);
	iVar3 = 5000;
	iVar1 = 3000;
	iVar2 = 1500;
	PED::SET_PED_RESET_FLAG(Global_35, 211, true);
	iVar0 = 0;
	while (iVar0 < uParam0->f_618)
	{
		if (!(uParam0->f_31[iVar0 /*36*/])->f_14)
		{
			bVar7 = true;
			if (ENTITY::DOES_ENTITY_EXIST((uParam0->f_31[iVar0 /*36*/])->f_1))
			{
				fVar8 = func_108(Global_35, (uParam0->f_31[iVar0 /*36*/])->f_1, 1);
				if (((uParam0->f_31[iVar0 /*36*/])->f_13 && fVar8 < 2500f) && ENTITY::IS_ENTITY_ON_SCREEN((uParam0->f_31[iVar0 /*36*/])->f_1))
				{
					if (!bVar5)
					{
						bVar5 = true;
					}
					if (!(uParam0->f_31[iVar0 /*36*/])->f_11)
					{
						if (uParam0->f_620)
						{
							PLAYER::_0x6ECFC621A168424C(uParam0->f_12, (uParam0->f_31[iVar0 /*36*/])->f_1, (uParam0->f_31[iVar0 /*36*/])->f_5);
						}
						else
						{
							PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), (uParam0->f_31[iVar0 /*36*/])->f_1, 0);
							PLAYER::_0x6ECFC621A168424C((uParam0->f_31[iVar0 /*36*/])->f_1, (uParam0->f_31[iVar0 /*36*/])->f_1, (uParam0->f_31[iVar0 /*36*/])->f_5);
						}
						(uParam0->f_31[iVar0 /*36*/])->f_11 = 1;
					}
					if (fVar8 < 36f)
					{
						if (!(uParam0->f_31[iVar0 /*36*/])->f_12)
						{
							PED::_0xF9CBD46433E36713(Global_35, (uParam0->f_31[iVar0 /*36*/])->f_1, 0f, 0f, 0f, 7.5f, 6f, 15f, 20f, "TRACKING_ZONE_CLUE");
							PAD::SET_PAD_SHAKE(0, 200, 125);
							(uParam0->f_31[iVar0 /*36*/])->f_12 = 1;
						}
					}
					if ((fVar8 < 6.25f && !func_109()) && !bVar6)
					{
						bVar7 = false;
						if (!func_83((uParam0->f_31[iVar0 /*36*/])->f_16))
						{
							(uParam0->f_31[iVar0 /*36*/])->f_16 = func_110("INSPECT_GENERIC", joaat("INPUT_CONTEXT_Y"), (uParam0->f_31[iVar0 /*36*/])->f_1, 2, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0, 0);
							func_111((uParam0->f_31[iVar0 /*36*/])->f_16, 2.5f, 0);
							func_112(&((uParam0->f_31[iVar0 /*36*/])->f_16), (uParam0->f_31[iVar0 /*36*/])->f_1);
						}
						else if ((uParam0->f_31[iVar0 /*36*/])->f_8 == 5)
						{
							HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 2.5f, 2, 1, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY((uParam0->f_31[iVar0 /*36*/])->f_1), func_106(&((uParam0->f_31[iVar0 /*36*/])->f_31)), 2);
						}
						else
						{
							HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME((uParam0->f_31[iVar0 /*36*/])->f_1, 2.5f, 2, 1, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY((uParam0->f_31[iVar0 /*36*/])->f_1), func_106(&((uParam0->f_31[iVar0 /*36*/])->f_31)), 2);
						}
						if (func_113((uParam0->f_31[iVar0 /*36*/])->f_16, 1))
						{
							if (PLAYER::_0x45AB66D02B601FA7(PLAYER::PLAYER_ID()))
							{
								PLAYER::_0x64FF4BF9AF59E139(PLAYER::PLAYER_ID(), 1);
							}
							if (uParam0->f_614 == 0)
							{
								func_41(Global_35, "HUNTING_START", joaat("speech_params_standard"), 0, 0, 0, 0, 1);
							}
							func_114((uParam0->f_31[iVar0 /*36*/])->f_16, 0, 1);
							(uParam0->f_31[iVar0 /*36*/])->f_24 = 0f;
							(uParam0->f_31[iVar0 /*36*/])->f_14 = 1;
							(uParam0->f_31[iVar0 /*36*/])->f_25 = MISC::GET_GAME_TIMER();
							PLAYER::_0xDC5E09D012D759C4(uParam0->f_12, (uParam0->f_31[iVar0 /*36*/])->f_1, (uParam0->f_31[iVar0 /*36*/])->f_5);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256, 0);
							uParam0->f_626 = 1;
							PED::_0xCB9401F918CB0F75(Global_35, "isInspectingGround", 1, -1);
							TASK::OPEN_SEQUENCE_TASK(&iVar4);
							TASK::TASK_TURN_PED_TO_FACE_COORD(0, (uParam0->f_31[iVar0 /*36*/])->f_17, iVar1);
							TASK::CLOSE_SEQUENCE_TASK(iVar4);
							if (!PED::IS_PED_ON_MOUNT(Global_35))
							{
								if (!PED::_0xD5FE956C70FF370B(Global_35))
								{
									PED::_0x7DE9692C6F64CFE8(Global_35, true, 0, 0);
								}
							}
							TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar4);
							TASK::CLEAR_SEQUENCE_TASK(&iVar4);
							func_115(uParam0, (uParam0->f_31[iVar0 /*36*/])->f_27);
						}
					}
					else if ((uParam0->f_31[iVar0 /*36*/])->f_12 && fVar8 > 64f)
					{
						(uParam0->f_31[iVar0 /*36*/])->f_12 = 0;
					}
					if (bVar7 && func_83((uParam0->f_31[iVar0 /*36*/])->f_16))
					{
						func_32(&((uParam0->f_31[iVar0 /*36*/])->f_16), 1, 1);
					}
				}
				else if ((uParam0->f_31[iVar0 /*36*/])->f_11)
				{
					if ((uParam0->f_31[iVar0 /*36*/])->f_12)
					{
						(uParam0->f_31[iVar0 /*36*/])->f_12 = 0;
					}
					if (uParam0->f_620)
					{
						PLAYER::_0xDC5E09D012D759C4(uParam0->f_12, (uParam0->f_31[iVar0 /*36*/])->f_1, (uParam0->f_31[iVar0 /*36*/])->f_5);
					}
					else
					{
						PLAYER::_0xDC5E09D012D759C4((uParam0->f_31[iVar0 /*36*/])->f_1, (uParam0->f_31[iVar0 /*36*/])->f_1, (uParam0->f_31[iVar0 /*36*/])->f_5);
						PLAYER::_0x9DAE1380CC5C6451(PLAYER::PLAYER_ID(), (uParam0->f_31[iVar0 /*36*/])->f_1);
					}
					if (func_83((uParam0->f_31[iVar0 /*36*/])->f_16))
					{
						func_32(&((uParam0->f_31[iVar0 /*36*/])->f_16), 1, 1);
					}
					(uParam0->f_31[iVar0 /*36*/])->f_11 = 0;
				}
			}
		}
		else if ((uParam0->f_31[iVar0 /*36*/])->f_15)
		{
			if ((uParam0->f_31[iVar0 /*36*/])->f_8 == 5)
			{
				HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 2.5f, 2, 1, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY((uParam0->f_31[iVar0 /*36*/])->f_1), func_106(&((uParam0->f_31[iVar0 /*36*/])->f_33)), 2);
			}
			else
			{
				HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME((uParam0->f_31[iVar0 /*36*/])->f_1, 2.5f, 2, 1, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY((uParam0->f_31[iVar0 /*36*/])->f_1), func_106(&((uParam0->f_31[iVar0 /*36*/])->f_33)), 2);
			}
			iVar9 = MISC::GET_GAME_TIMER();
			if ((iVar9 - (uParam0->f_31[iVar0 /*36*/])->f_25) > iVar3 || ((iVar9 - (uParam0->f_31[iVar0 /*36*/])->f_25) > iVar1 && !func_116(Global_35, 242628503)))
			{
				func_117((uParam0->f_614 - 1), *uParam0);
				func_32(&((uParam0->f_31[iVar0 /*36*/])->f_16), 1, 1);
				TASK::TASK_CLEAR_LOOK_AT(Global_35);
				PLAYER::_0x2AF423D6ECB2C485(PLAYER::PLAYER_ID(), uParam0->f_12);
				PED::_0xCB9401F918CB0F75(Global_35, "isInspectingGround", 0, -1);
				PED::_0x7DE9692C6F64CFE8(Global_35, false, 0, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
				uParam0->f_626 = 0;
				(uParam0->f_31[iVar0 /*36*/])->f_15 = 0;
			}
			else if ((iVar9 - (uParam0->f_31[iVar0 /*36*/])->f_25) > iVar2 && (uParam0->f_31[iVar0 /*36*/])->f_13)
			{
				func_118(uParam0->f_12, func_106(&((uParam0->f_31[iVar0 /*36*/])->f_29)), 1, 0.762f, 1053609165 /* Float: 0.4f */, 0, 2f, 1);
				if (VOLUME::_DOES_VOLUME_EXIST((uParam0->f_31[iVar0 /*36*/])->f_10))
				{
					func_119((uParam0->f_31[iVar0 /*36*/])->f_10);
				}
				(uParam0->f_31[iVar0 /*36*/])->f_13 = 0;
			}
		}
		iVar0++;
	}
	if (uParam0->f_614 > 0)
	{
		if (!uParam0->f_624)
		{
			if (!uParam0->f_625)
			{
				if (func_120(*uParam0))
				{
					if (Global_1935496->f_31 == 1831763320)
					{
						uParam0->f_625 = 1;
					}
				}
				else if (Global_1935496->f_31 == 2036955137)
				{
					uParam0->f_625 = 1;
				}
			}
			else if (func_107(Global_35, uParam0->f_12.f_10, 1) > 400f && !CAM::IS_SPHERE_VISIBLE(uParam0->f_12.f_10, 1f))
			{
				uParam0->f_621 = 1;
				func_121(uParam0);
				uParam0->f_624 = 1;
			}
		}
	}
}

void func_52(var uParam0)
{
	int iVar0;
	float fVar1;

	if (uParam0->f_12.f_2 != 1)
	{
		if (((func_107(uParam0->f_12, uParam0->f_12.f_16, 1) >= 2500f && func_108(Global_35, uParam0->f_12, 1) > 400f) && !PED::IS_PED_INJURED(uParam0->f_12)) && !func_116(uParam0->f_12, 242628503))
		{
			func_122(uParam0);
			uParam0->f_12.f_2 = 1;
			fVar1 = 3f;
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (*uParam0 == 0)
			{
				TASK::TASK_STAND_STILL(0, 2000);
				fVar1 = 1f;
			}
			TASK::_TASK_FLEE_FROM_PED(0, Global_35, uParam0->f_12.f_16, 25f, -1, 1024, fVar1, 0);
			TASK::TASK_WANDER_IN_AREA(0, uParam0->f_12.f_16, 15f, 1.5f, 3f, 1);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_12, iVar0);
		}
	}
	else if (func_107(uParam0->f_12, uParam0->f_12.f_16, 1) >= 100f)
	{
		uParam0->f_12.f_2 = 0;
	}
}

int func_53(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_INT(&uParam0, &uVar0);
	return uVar0;
}

int func_54(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
	{
		return 1;
	}
	if (ENTITY::_0x8DE41E9902E85756(uParam0->f_12) && !func_21(Global_35))
	{
		return 1;
	}
	return 0;
}

int func_55(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_56(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_57(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_58(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_8(*uParam0);
	iVar1 = func_7(*uParam0);
	if (iParam1 < 1 || iParam1 > func_13(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_59(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_60(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_61(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

void func_62(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_63()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

int func_64()
{
	return Global_1572887->f_12;
}

bool func_65(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

int func_66(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 153))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 126:
			return 32;
		case 22:
			return 17;
		case 4:
		case 5:
		case 34:
		case 55:
		case 67:
			return 18;
		case 56:
		case 57:
		case 58:
		case 59:
			return 19;
		case 102:
		case 106:
		case 109:
		case 112:
		case 114:
		case 120:
			return 29;
		case 39:
		case 73:
		case 128:
		case 132:
		case 137:
		case 141:
		case 145:
			return 0;
		case 7:
		case 19:
		case 28:
		case 42:
		case 61:
		case 74:
		case 87:
		case 90:
		case 95:
		case 129:
		case 133:
		case 138:
		case 142:
		case 146:
			return 3;
		case 0:
		case 8:
		case 29:
		case 43:
		case 75:
		case 91:
		case 130:
		case 134:
		case 139:
		case 143:
		case 147:
			return 6;
		case 17:
		case 47:
			return 7;
		case 18:
		case 27:
		case 41:
		case 82:
		case 98:
		case 125:
			return 4;
		case 10:
		case 26:
		case 38:
		case 60:
		case 72:
		case 92:
			return 10;
		case 1:
		case 16:
		case 32:
		case 51:
		case 64:
		case 80:
			return 22;
		case 2:
		case 14:
		case 20:
		case 23:
		case 30:
		case 45:
		case 65:
		case 77:
		case 86:
		case 89:
		case 96:
		case 99:
			return 2;
		case 3:
		case 15:
		case 21:
		case 24:
		case 31:
		case 46:
		case 78:
		case 85:
		case 88:
		case 100:
			return 1;
		case 9:
		case 37:
		case 69:
			return 8;
		case 13:
		case 35:
		case 44:
		case 63:
		case 76:
		case 84:
		case 94:
			return 9;
		case 103:
		case 107:
		case 110:
		case 116:
			return 30;
		case 104:
		case 105:
		case 108:
		case 111:
		case 113:
		case 115:
		case 117:
		case 118:
		case 119:
		case 121:
		case 122:
		case 123:
		case 124:
			return 31;
		case 136:
			return 5;
		case 6:
		case 25:
		case 36:
		case 68:
			return 15;
		case 11:
		case 33:
		case 52:
		case 53:
		case 66:
		case 70:
		case 71:
		case 81:
		case 83:
		case 93:
		case 97:
			return 33;
		case 48:
			return 12;
		case 49:
			return 13;
		case 50:
			return 14;
		case 62:
		case 79:
			return 20;
		case 101:
			return 11;
		case 149:
			return 23;
		case 150:
			return 24;
		case 151:
			return 25;
		case 12:
		case 54:
			return 21;
		case 127:
			return 34;
		case 131:
		case 135:
		case 140:
		case 144:
		case 148:
			return 27;
		case 152:
			return 24;
		default:
			break;
	}
	return -1;
}

bool func_67(int iParam0)
{
	return !func_123(iParam0, 1);
}

int func_68(int iParam0)
{
	if (!func_65(iParam0))
	{
		return -1;
	}
	if (iParam0 == 34 && func_124() == 128)
	{
		return 128;
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 120:
		case 121:
			return 78;
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
		case 106:
		case 107:
		case 108:
			return 38;
		case 18:
		case 19:
		case 20:
		case 21:
		case 105:
			return 69;
		case 22:
		case 118:
			return 3;
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 109:
		case 110:
		case 111:
			return 5;
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 112:
		case 113:
			return 105;
		case 23:
		case 24:
			return 23;
		case 35:
			return 101;
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 114:
		case 115:
			return 26;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 102:
		case 103:
		case 104:
			return 76;
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 116:
		case 117:
			return 92;
		case 4:
			return 13;
		case 128:
		case 129:
		case 130:
		case 131:
			return 79;
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
			return 98;
		case 5:
			return 14;
		case 137:
		case 138:
		case 139:
		case 140:
			return 71;
		case 141:
		case 142:
		case 143:
		case 144:
			return 4;
		case 34:
			return 90;
		case 145:
		case 146:
		case 147:
		case 148:
			return 9;
		case 67:
			return 113;
		case 87:
		case 88:
		case 89:
			return 28;
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
			return 115;
		case 95:
		case 96:
		case 97:
			return 120;
		case 98:
			return 123;
		case 99:
		case 100:
		case 123:
			return 117;
		case 119:
			return 65;
		case 122:
			return 82;
		case 124:
			return 110;
		case 125:
			return 127;
		case 56:
			return 71;
		case 57:
			return 98;
		case 58:
			return 9;
		case 59:
			return 79;
		default:
			break;
	}
	return -1;
}

bool func_69(int iParam0)
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

int func_70(int iParam0)
{
	if (!func_125(iParam0))
	{
		return 0;
	}
	return func_126(iParam0, 33554432);
}

Vector3 func_71(int iParam0)
{
	if (!func_65(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return 2947.055f, 1320.15f, 43.8203f;
		case 2:
			return 2939.063f, 1287.116f, 43.6529f;
		case 3:
			return 2932.97f, 1282.56f, 43.67f;
		case 1:
			return 2947.64f, 1344.901f, 43.899f;
		case 99:
			return -5227.357f, -3470.067f, -20.49293f;
		case 100:
			return -5228.75f, -3468.28f, -21.57f;
		case 7:
			return -784.49f, -1321.95f, 42.88f;
		case 10:
			return -753.4219f, -1284.24f, 43.20049f;
		case 9:
			return -814.4116f, -1367.243f, 43.7509f;
		case 13:
			return -868.3356f, -1366.207f, 44.75311f;
		case 14:
			return -875.03f, -1327.09f, 42.97f;
		case 15:
			return -875.02f, -1326.71f, 42.97f;
		case 17:
			return -762.0716f, -1293.549f, 42.8355f;
		case 12:
			return -813.6f, -1373.8f, 44.2f;
		case 16:
			return -805.72f, -1330.5f, 42.67f;
		case 18:
			return 1417.288f, 273.5687f, 88.4881f;
		case 20:
			return 1521.91f, 441.15f, 89.68f;
		case 21:
			return 1523.63f, 442.65f, 89.68f;
		case 22:
			return 2161.5f, -618.5f, 43f;
		case 23:
			return -1092.88f, -575.69f, 81.41f;
		case 24:
			return -1094.35f, -577.48f, 81.41f;
		case 25:
			return 1294.084f, -1303.102f, 76.0418f;
		case 26:
			return 1297.423f, -1278.412f, 75.65752f;
		case 27:
			return 1319.43f, -1142.08f, 81.41f;
		case 28:
			return 1329.755f, -1294.218f, 76.0092f;
		case 29:
			return 1323.734f, -1321.775f, 77.8924f;
		case 30:
			return 1226.71f, -1295.08f, 75.9f;
		case 31:
			return 1230.34f, -1298.578f, 75.9027f;
		case 32:
			return 1332.55f, -1298.679f, 75.35602f;
		case 35:
			return 1209.053f, -193.1814f, 101.9785f;
		case 36:
			return 2644.188f, -1292.507f, 51.2496f;
		case 37:
			return 2657.466f, -1180.96f, 53.2785f;
		case 38:
			return 2819.495f, -1331.29f, 45.514f;
		case 39:
			return 2721.24f, -1231.66f, 49.37f;
		case 41:
			return 2859.51f, -1202.16f, 48.59f;
		case 42:
			return 2825.607f, -1318.207f, 45.7557f;
		case 43:
			return 2718f, -1287f, 49.6f;
		case 44:
			return 2508.212f, -1449.654f, 48.41523f;
		case 45:
			return 2748.811f, -1398.277f, 45.18309f;
		case 46:
			return 2747.824f, -1396.384f, 45.18309f;
		case 47:
			return 2555.09f, -1166.97f, 52.68f;
		case 48:
			return 2842.45f, -1227.66f, 46.66f;
		case 49:
			return 2817.64f, -1325.011f, 47.00512f;
		case 50:
			return 2836.992f, -1305.805f, 45.6964f;
		case 55:
			return 2832.02f, -1225.563f, 46.6422f;
		case 54:
			return 2734.174f, -1119.755f, 50.10792f;
		case 51:
			return 2683.84f, -1399.642f, 45.37881f;
		case 60:
			return -1753.404f, -392.557f, 155.2576f;
		case 61:
			return -1790f, -388.27f, 159.33f;
		case 62:
			return -1818.99f, -370.94f, 162.3f;
		case 63:
			return -1819.88f, -561.8194f, 157.2323f;
		case 65:
			return -1763.78f, -385.1118f, 156.7401f;
		case 64:
			return -1773.314f, -393.9122f, 155.5647f;
		case 68:
			return -307.9643f, 773.6048f, 117.7031f;
		case 69:
			return -306.3f, 815.08f, 117.98f;
		case 70:
			return 0f, 0f, 0f;
		case 72:
			return -338.8647f, 767.4334f, 115.5628f;
		case 73:
			return -287.9538f, 804.0544f, 118.3859f;
		case 74:
			return -324f, 803.72f, 116.88f;
		case 75:
			return -281.82f, 778.97f, 118.5f;
		case 76:
			return -369.4457f, 786.6935f, 115.9904f;
		case 77:
			return -178.0316f, 628.0621f, 113.0896f;
		case 78:
			return -175.0377f, 631.7999f, 113.0896f;
		case 80:
			return -272.7182f, 785.6115f, 117.4202f;
		case 79:
			return -325.532f, 773.6285f, 117.5038f;
		case 82:
			return 3025.786f, 562.7253f, 43.7167f;
		case 86:
			return 2986.224f, 569.9468f, 43.62284f;
		case 85:
			return 2986.94f, 574.9f, 43.64f;
		case 84:
			return 2967.273f, 796.7416f, 52.5948f;
		case 87:
			return -1302.951f, 394.6608f, 94.3817f;
		case 89:
			return -1300.83f, 399.7599f, 94.38248f;
		case 88:
			return -1299.891f, 401.3615f, 94.38248f;
		case 93:
			return -5518.071f, -2906.217f, -2.7513f;
		case 90:
			return -5487.197f, -2939.038f, -1.3872f;
		case 91:
			return -5507.993f, -2964.844f, -1.6215f;
		case 92:
			return -5509.019f, -2947.435f, -2.8934f;
		case 94:
			return -5520.701f, -3044.427f, -1.40419f;
		case 95:
			return -3687.3f, -2623.39f, -14.44f;
		case 4:
			return -2842.211f, 137.3398f, 183.8268f;
		case 5:
			return -1005.934f, -540.8262f, 97.9502f;
		case 34:
			return 2076.835f, 1000.829f, 111.4973f;
		case 67:
			return -2251.034f, -1916.911f, 115.9488f;
		case 56:
			return -142.072f, -23.5242f, 95.0883f;
		case 57:
			return 675.3091f, -1251.233f, 43.0152f;
		case 58:
			return 1875.2f, -1859.182f, 41.8f;
		case 59:
			return 2366.084f, 1347.122f, 105.1305f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_72(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_73(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 8;
		case 4:
			return 64;
		case 5:
			return 16;
		case 6:
			return 32;
		case 7:
			return 128;
		case 8:
			return 256;
		case 9:
			return 512;
		case 10:
			return 1024;
		case 11:
			return 2048;
		case 12:
			return 4096;
		case 13:
			return 8192;
		case 14:
			return 16384;
		case 15:
			return 32768;
	}
	return 0;
}

int func_74(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = joaat("a_c_bear_01");
			return 1;
		case 1:
			*uParam1 = joaat("a_c_beaver_01");
			return 1;
		case 2:
			*uParam1 = joaat("a_c_bighornram_01");
			return 1;
		case 3:
			*uParam1 = joaat("a_c_buffalo_01");
			return 1;
		case 4:
			*uParam1 = joaat("a_c_boar_01");
			return 1;
		case 5:
			*uParam1 = joaat("a_c_buck_01");
			return 1;
		case 6:
			*uParam1 = joaat("a_c_buffalo_tatanka_01");
			return 1;
		case 7:
			*uParam1 = joaat("a_c_alligator_02");
			return 1;
		case 8:
			*uParam1 = joaat("a_c_cougar_01");
			return 1;
		case 9:
			*uParam1 = joaat("a_c_coyote_01");
			return 1;
		case 10:
			*uParam1 = joaat("a_c_elk_01");
			return 1;
		case 11:
			*uParam1 = joaat("a_c_fox_01");
			return 1;
		case 12:
			*uParam1 = joaat("a_c_moose_01");
			return 1;
		case 13:
			*uParam1 = joaat("a_c_panther_01");
			return 1;
		case 14:
			*uParam1 = joaat("a_c_pronghorn_01");
			return 1;
		case 15:
			*uParam1 = joaat("a_c_wolf");
			return 1;
	}
	return 0;
}

int func_75(int iParam0, int iParam1, int iParam2)
{
	struct<10> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<2> Var14[15];
	int iVar45;
	int iVar46;

	if (!func_127(iParam0, 0))
	{
		return 0;
	}
	*iParam2 = 0;
	Var0 = { func_128(-1591664384, -1591664384, 0, 0, iParam1, 0, -1, 0, 0) };
	iVar11 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var0, &iVar10, 1);
	if (iVar11 != -1)
	{
		iVar12 = 0;
		while (iVar12 < iVar10)
		{
			if (ITEMDATABASE::_0x8750F69A720C2E41(iVar11, iVar12, &iVar13))
			{
				if (func_129(iVar13, iParam1, &Var14, &iVar45, 1, 0))
				{
					iVar46 = 0;
					while (iVar46 < iVar45)
					{
						if (iParam0 == &Var14[iVar46 /*2*/])
						{
							*iParam2 = (*iParam2 + (Var14[iVar46 /*2*/])->f_1);
						}
						iVar46++;
					}
				}
			}
			iVar12++;
		}
		ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar11);
	}
	return 1;
}

int func_76(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	var uVar9;

	if (!func_127(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_130(0) };
	Var0.f_4 = func_131(iParam1);
	Var5 = { func_132(iParam0, Var0, Var0.f_4, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var5))
	{
		return 0;
	}
	uVar9 = INVENTORY::_0xC97E0D2302382211(func_133(0), &Var5, 0);
	return uVar9;
}

int func_77(int iParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	if (!func_127(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = func_131(iParam1);
	if (!func_134(iParam0, Var0.f_4))
	{
		return 0;
	}
	iVar5 = func_135(iParam0, &Var0, 1, 0);
	iVar6 = func_136(iParam0, 0);
	if (iVar5 >= 0 && iVar6 > iVar5)
	{
		return 0;
	}
	return 1;
}

int func_78(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<4> Var1;
	var uVar6;

	if (!func_77(iParam0, iParam1))
	{
		return 0;
	}
	if (iParam1 == 1)
	{
		if (func_137(iParam0) && func_138(iParam0))
		{
			iVar0 = 0;
			if (func_75(iParam0, 369710026, &iVar0))
			{
				iParam2 = iVar0;
			}
		}
	}
	Var1.f_4 = func_131(iParam1);
	Var1 = { func_130(0) };
	if (!func_139(iParam0, &uVar6, &Var1, iParam2, 752097756, 1))
	{
		return 0;
	}
	return 1;
}

void func_79(var uParam0, var uParam1)
{
	func_140(uParam0, uParam1);
}

int func_80(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case -43987615: /* GXTEntry: "Armadillo" */
			if (iParam2 == 1)
			{
				return 1492383232;
			}
			else
			{
				return 1650496317;
			}
			break;
		case 597440621: /* GXTEntry: "Badger" */
			if (iParam2 == 1)
			{
				return -1286175387;
			}
			else
			{
				return 1230228733;
			}
			break;
		case 783089120: /* GXTEntry: "Bat" */
			if (iParam2 == 1)
			{
				return 1809539044;
			}
			else
			{
				return 580480085;
			}
			break;
		case -577478188:
			if (iParam2 == 1)
			{
				return -942035227;
			}
			else
			{
				return -293044453;
			}
			break;
		case 1596431305:
			if (iParam2 == 1)
			{
				return 2042596528;
			}
			else
			{
				return 1794983091;
			}
			break;
		case 1781233743:
			if (iParam2 == 1)
			{
				return 1572569346;
			}
			else
			{
				return 693604975;
			}
			break;
		case 1297902195: /* GXTEntry: "Beaver" */
			if (iParam2 == 1)
			{
				return 131817274;
			}
			else
			{
				return 672937471;
			}
			break;
		case 636730081:
			if (iParam2 == 1)
			{
				return 1242287574;
			}
			else
			{
				return 134380709;
			}
			break;
		case 1516275256: /* GXTEntry: "Blue Jay" */
			if (iParam2 == 1)
			{
				return 307977329;
			}
			else
			{
				return 1537431448;
			}
			break;
		case 640966621: /* GXTEntry: "Boar" */
			if (iParam2 == 1)
			{
				return -1057583634;
			}
			else
			{
				return -2020447749;
			}
			break;
		case 950257367:
			if (iParam2 == 1)
			{
				return 1389918783;
			}
			else
			{
				return 889056371;
			}
			break;
		case -1055552242: /* GXTEntry: "Buck" */
			if (iParam2 == 1)
			{
				return -343448109;
			}
			else
			{
				return 1668029447;
			}
			break;
		case -1894468643:
			if (iParam2 == 1)
			{
				return 1656842182;
			}
			else
			{
				return 1931087823;
			}
			break;
		case 1489890323: /* GXTEntry: "Bison" */
			if (iParam2 == 1)
			{
				return -1372774793;
			}
			else
			{
				return -1351907036;
			}
			break;
		case 2111267495:
			if (iParam2 == 1)
			{
				return 1156953242;
			}
			else
			{
				return 610597621;
			}
			break;
		case -1550790546:
			if (iParam2 == 1)
			{
				return -32053405;
			}
			else
			{
				return 9629595;
			}
			break;
		case 1028084064:
			if (iParam2 == 1)
			{
				return -1017879199;
			}
			else
			{
				return -2050618352;
			}
			break;
		case -1327130182:
			if (iParam2 == 1)
			{
				return -434550098;
			}
			else
			{
				return 9729636;
			}
			break;
		case -375262254:
			if (iParam2 == 1)
			{
				return 2118461462;
			}
			else
			{
				return 143111533;
			}
			break;
		case 1339926283: /* GXTEntry: "Bullfrog" */
			if (iParam2 == 1)
			{
				return 485264164;
			}
			else
			{
				return 1903408805;
			}
			break;
		case -1847199476: /* GXTEntry: "Californian Condor" */
			if (iParam2 == 1)
			{
				return -793902754;
			}
			else
			{
				return -1775711449;
			}
			break;
		case 1075520399: /* GXTEntry: "Cardinal" */
			if (iParam2 == 1)
			{
				return 813908083;
			}
			else
			{
				return -131999783;
			}
			break;
		case 285816029: /* GXTEntry: "Cat" */
			if (iParam2 == 1)
			{
				return -795386435;
			}
			else
			{
				return -1130778534;
			}
			break;
		case -1273168083: /* GXTEntry: "Cedar Waxwing" */
			if (iParam2 == 1)
			{
				return -1403844320;
			}
			else
			{
				return -169402166;
			}
			break;
		case 2059272711: /* GXTEntry: "Chicken" */
			if (iParam2 == 1)
			{
				return -1214387853;
			}
			else
			{
				return -417846746;
			}
			break;
		case -943371758: /* GXTEntry: "Chicken" */
			if (iParam2 == 1)
			{
				return -464805063;
			}
			else
			{
				return -579171441;
			}
			break;
		case 1190285160:
			if (iParam2 == 1)
			{
				return -226045789;
			}
			else
			{
				return 5946766;
			}
			break;
		case -674936781:
			if (iParam2 == 1)
			{
				return 1410377796;
			}
			else
			{
				return -1029515674;
			}
			break;
		case -2045434273: /* GXTEntry: "Chipmunk" */
			if (iParam2 == 1)
			{
				return -649439051;
			}
			else
			{
				return -1928771048;
			}
			break;
		case 1677450645: /* GXTEntry: "Cormorant" */
			if (iParam2 == 1)
			{
				return -2020193361;
			}
			else
			{
				return -862429230;
			}
			break;
		case -2069413633:
			if (iParam2 == 1)
			{
				return -348617231;
			}
			else
			{
				return 521981365;
			}
			break;
		case -1071812884: /* GXTEntry: "Cougar" */
			if (iParam2 == 1)
			{
				return 1454394111;
			}
			else
			{
				return 1226381245;
			}
			break;
		case -973690007:
			if (iParam2 == 1)
			{
				return -1923426107;
			}
			else
			{
				return -448286600;
			}
			break;
		case -1204752482: /* GXTEntry: "Cow" */
			if (iParam2 == 1)
			{
				return 57563439;
			}
			else
			{
				return -1554080546;
			}
			break;
		case -564442545: /* GXTEntry: "Coyote" */
			if (iParam2 == 1)
			{
				return -819941571;
			}
			else
			{
				return 316239633;
			}
			break;
		case 1210759497:
			if (iParam2 == 1)
			{
				return -692709560;
			}
			else
			{
				return 375187125;
			}
			break;
		case 1220494366: /* GXTEntry: "Crab" */
			if (iParam2 == 1)
			{
				return 461155911;
			}
			else
			{
				return -1730432737;
			}
			break;
		case -1923720634: /* GXTEntry: "Crane" */
			if (iParam2 == 1)
			{
				return 686577545;
			}
			else
			{
				return -1716975259;
			}
			break;
		case -1136838805:
			if (iParam2 == 1)
			{
				return 485763523;
			}
			else
			{
				return 485763523;
			}
			break;
		case 1798104140:
			if (iParam2 == 1)
			{
				return -75693912;
			}
			else
			{
				return -1341709095;
			}
			break;
		case 613321581: /* GXTEntry: "Crow" */
			if (iParam2 == 1)
			{
				return -1015255528;
			}
			else
			{
				return -155163817;
			}
			break;
		case -510702611: /* GXTEntry: "Deer" */
			if (iParam2 == 1)
			{
				return -258389058;
			}
			else
			{
				return -1731672932;
			}
			break;
		case 926603386:
			if (iParam2 == 1)
			{
				return -446346500;
			}
			else
			{
				return 198039826;
			}
			break;
		case -603666995:
			if (iParam2 == 1)
			{
				return 520531156;
			}
			else
			{
				return 656647598;
			}
			break;
		case -1322848328:
			if (iParam2 == 1)
			{
				return 400831909;
			}
			else
			{
				return -480293444;
			}
			break;
		case -1632170653:
			if (iParam2 == 1)
			{
				return -1472809340;
			}
			else
			{
				return 1556846539;
			}
			break;
		case -1121883739:
			if (iParam2 == 1)
			{
				return 87879371;
			}
			else
			{
				return 295404488;
			}
			break;
		case 1901047439:
			if (iParam2 == 1)
			{
				return -1495248197;
			}
			else
			{
				return -1142160290;
			}
			break;
		case 268285362: /* GXTEntry: "Dog" */
			if (iParam2 == 1)
			{
				return -1508240671;
			}
			else
			{
				return -2028019941;
			}
			break;
		case 1742105665:
			if (iParam2 == 1)
			{
				return 1447842081;
			}
			else
			{
				return 763061508;
			}
			break;
		case 1938765490:
			if (iParam2 == 1)
			{
				return -1738549803;
			}
			else
			{
				return 857577510;
			}
			break;
		case -1986096416:
			if (iParam2 == 1)
			{
				return 550175583;
			}
			else
			{
				return -1327208188;
			}
			break;
		case 1509241437: /* GXTEntry: "Dog" */
			if (iParam2 == 1)
			{
				return -387470951;
			}
			else
			{
				return -1152146286;
			}
			break;
		case 784496698:
			if (iParam2 == 1)
			{
				return -1298327432;
			}
			else
			{
				return -1577268469;
			}
			break;
		case 520240957: /* GXTEntry: "Donkey" */
			if (iParam2 == 1)
			{
				return 699060141;
			}
			else
			{
				return -1134590040;
			}
			break;
		case -1350246467: /* GXTEntry: "Duck" */
			if (iParam2 == 1)
			{
				return 2074298125;
			}
			else
			{
				return 1088082550;
			}
			break;
		case -2146232868:
			if (iParam2 == 1)
			{
				return -846557197;
			}
			else
			{
				return 288657650;
			}
			break;
		case 2104011353: /* GXTEntry: "Eagle" */
			if (iParam2 == 1)
			{
				return -1715622829;
			}
			else
			{
				return 224959159;
			}
			break;
		case -1673415831:
			if (iParam2 == 1)
			{
				return 685004063;
			}
			else
			{
				return -1620359805;
			}
			break;
		case 1157397403: /* GXTEntry: "Egret" */
			if (iParam2 == 1)
			{
				return 1487535595;
			}
			else
			{
				return -2106943688;
			}
			break;
		case 1374755253:
			if (iParam2 == 1)
			{
				return -619722845;
			}
			else
			{
				return -756184090;
			}
			break;
		case -1203519405:
			if (iParam2 == 1)
			{
				return -167138074;
			}
			else
			{
				return -1952853624;
			}
			break;
		case -74829863: /* GXTEntry: "Elk" */
			if (iParam2 == 1)
			{
				return 1858396134;
			}
			else
			{
				return 1199311657;
			}
			break;
		case 702805627:
			if (iParam2 == 1)
			{
				return -379754949;
			}
			else
			{
				return 1123829079;
			}
			break;
		case 1895708243:
			if (iParam2 == 1)
			{
				return 683897188;
			}
			else
			{
				return -1313726941;
			}
			break;
		case -1003674917: /* GXTEntry: "Fox" */
			if (iParam2 == 1)
			{
				return -81484335;
			}
			else
			{
				return -745750690;
			}
			break;
		case -487429551:
			if (iParam2 == 1)
			{
				return 375272656;
			}
			else
			{
				return 1614204576;
			}
			break;
		case -853417084:
			if (iParam2 == 1)
			{
				return -27841655;
			}
			else
			{
				return -1052853383;
			}
			break;
		case 225698625:
			if (iParam2 == 1)
			{
				return 744375830;
			}
			else
			{
				return -635519364;
			}
			break;
		case -1472826885: /* GXTEntry: "Alligator" */
			if (iParam2 == 1)
			{
				return 1374191339;
			}
			else
			{
				return 1057046493;
			}
			break;
		case 1044478494:
			if (iParam2 == 1)
			{
				return -567700941;
			}
			else
			{
				return 1133767006;
			}
			break;
		case 1735171971: /* GXTEntry: "Lizard" */
			if (iParam2 == 1)
			{
				return -475041877;
			}
			else
			{
				return -973375568;
			}
			break;
		case 365206122: /* GXTEntry: "Goat" */
			if (iParam2 == 1)
			{
				return 1251901266;
			}
			else
			{
				return 594965829;
			}
			break;
		case 731537518: /* GXTEntry: "Goose" */
			if (iParam2 == 1)
			{
				return 332185718;
			}
			else
			{
				return 752876761;
			}
			break;
		case 1859834293:
			if (iParam2 == 1)
			{
				return 761968766;
			}
			else
			{
				return -258263292;
			}
			break;
		case 524696643: /* GXTEntry: "Hawk" */
			if (iParam2 == 1)
			{
				return 1345814727;
			}
			else
			{
				return -2056520757;
			}
			break;
		case 132914876:
			if (iParam2 == 1)
			{
				return 774728556;
			}
			else
			{
				return 1695964169;
			}
			break;
		case 768271981: /* GXTEntry: "Heron" */
			if (iParam2 == 1)
			{
				return 2098251339;
			}
			else
			{
				return -1973755393;
			}
			break;
		case -1245666683:
			if (iParam2 == 1)
			{
				return 2098251339;
			}
			else
			{
				return -1973755393;
			}
			break;
		case -153407852: /* GXTEntry: "Horse" */
			if (((iParam1 == joaat("a_c_horse_americanpaint_overo") || iParam1 == 1792770814) || iParam1 == joaat("a_c_horse_americanpaint_tobiano")) || iParam1 == -1963397600)
			{
				if (iParam2 == 1)
				{
					return -1510715495;
				}
				else
				{
					return -1041460807;
				}
			}
			else if (((iParam1 == -1250098797 || iParam1 == -318278790) || iParam1 == 55096099) || iParam1 == -458397856)
			{
				if (iParam2 == 1)
				{
					return 216313122;
				}
				else
				{
					return -1276302204;
				}
			}
			else if ((iParam1 == -444610976 || iParam1 == 705691988) || iParam1 == 746627200)
			{
				if (iParam2 == 1)
				{
					return 1058013054;
				}
				else
				{
					return 1875597076;
				}
			}
			else if ((((iParam1 == joaat("a_c_horse_appaloosa_blanket") || iParam1 == joaat("a_c_horse_appaloosa_leopard")) || iParam1 == -1554827654) || iParam1 == -1029277326) || iParam1 == 604357666)
			{
				if (iParam2 == 1)
				{
					return -1860934580;
				}
				else
				{
					return 1323745903;
				}
			}
			else if ((((iParam1 == joaat("a_c_horse_arabian_black") || iParam1 == 1496579364) || iParam1 == -403470324) || iParam1 == 1576849913) || iParam1 == joaat("a_c_horse_arabian_white"))
			{
				if (iParam2 == 1)
				{
					return 987087298;
				}
				else
				{
					return -1712290350;
				}
			}
			else if ((iParam1 == joaat("a_c_horse_ardennes_bayroan") || iParam1 == joaat("a_c_horse_ardennes_irongreyroan")) || iParam1 == -635239558)
			{
				if (iParam2 == 1)
				{
					return 679982833;
				}
				else
				{
					return 224251658;
				}
			}
			else if (iParam1 == joaat("a_c_horse_belgian_blondchestnut") || iParam1 == joaat("a_c_horse_belgian_mealychestnut"))
			{
				if (iParam2 == 1)
				{
					return -2035377496;
				}
				else
				{
					return 1602284249;
				}
			}
			else if ((iParam1 == 687445866 || iParam1 == 861505058) || iParam1 == 1593035738)
			{
				if (iParam2 == 1)
				{
					return -1314354161;
				}
				else
				{
					return -1111688425;
				}
			}
			else if ((iParam1 == -819697512 || iParam1 == 1705182311) || iParam1 == -78273782)
			{
				if (iParam2 == 1)
				{
					return -697129350;
				}
				else
				{
					return 932507108;
				}
			}
			else if ((((iParam1 == -247265944 || iParam1 == -1516219602) || iParam1 == -1265030920) || iParam1 == 2024948086) || iParam1 == 1696286663)
			{
				if (iParam2 == 1)
				{
					return 14437037;
				}
				else
				{
					return 1726324950;
				}
			}
			else if (iParam1 == -1342159303 || iParam1 == joaat("a_c_horse_missourifoxtrotter_silverdapplepinto"))
			{
				if (iParam2 == 1)
				{
					return 1127400536;
				}
				else
				{
					return 400087036;
				}
			}
			else if ((((iParam1 == 2030804811 || iParam1 == 1230359523) || iParam1 == -1063137731) || iParam1 == -1038436471) || iParam1 == 96930969)
			{
				if (iParam2 == 1)
				{
					return 1521891022;
				}
				else
				{
					return -830234017;
				}
			}
			else if ((iParam1 == -1180427609 || iParam1 == 43825738) || iParam1 == joaat("a_c_horse_mustang_wildbay"))
			{
				if (iParam2 == 1)
				{
					return -1778106987;
				}
				else
				{
					return 629235125;
				}
			}
			else if ((iParam1 == joaat("a_c_horse_nokota_blueroan") || iParam1 == 107013696) || iParam1 == -1261814606)
			{
				if (iParam2 == 1)
				{
					return -322859267;
				}
				else
				{
					return -1148415148;
				}
			}
			else if ((iParam1 == 1066034872 || iParam1 == 36009259) || iParam1 == joaat("a_c_horse_shire_ravenblack"))
			{
				if (iParam2 == 1)
				{
					return -1903961111;
				}
				else
				{
					return 909878123;
				}
			}
			else if (iParam1 == -1693870200 || iParam1 == -1599683008)
			{
				if (iParam2 == 1)
				{
					return -2144737275;
				}
				else
				{
					return -703064617;
				}
			}
			else if ((((((iParam1 == 1072019803 || iParam1 == 1074477367) || iParam1 == -85890205) || iParam1 == 1048964673) || iParam1 == 446670976) || iParam1 == -727455979) || iParam1 == -1667789645)
			{
				if (iParam2 == 1)
				{
					return 79953388;
				}
				else
				{
					return 1080521142;
				}
			}
			else if ((((iParam1 == 2120708491 || iParam1 == -1924405794) || iParam1 == -526169133) || iParam1 == joaat("a_c_horse_thoroughbred_dapplegrey")) || iParam1 == 900144280)
			{
				if (iParam2 == 1)
				{
					return -509693556;
				}
				else
				{
					return -47591742;
				}
			}
			else if ((iParam1 == 1133837220 || iParam1 == joaat("a_c_horse_turkoman_gold")) || iParam1 == -1604180548)
			{
				if (iParam2 == 1)
				{
					return 375495976;
				}
				else
				{
					return -389560008;
				}
			}
			break;
		case 843200239: /* GXTEntry: "Iguana" */
			if (iParam2 == 1)
			{
				return 382483842;
			}
			else
			{
				return -1387469655;
			}
			break;
		case -557089338:
			if (iParam2 == 1)
			{
				return -652731287;
			}
			else
			{
				return 363304543;
			}
			break;
		case -409730157: /* GXTEntry: "Javelina" */
			if (iParam2 == 1)
			{
				return 293802921;
			}
			else
			{
				return 263724736;
			}
			break;
		case -1453172462: /* GXTEntry: "Loon" */
			if (iParam2 == 1)
			{
				return -650983350;
			}
			else
			{
				return 248268932;
			}
			break;
		case 2084223993:
			if (iParam2 == 1)
			{
				return 581279313;
			}
			else
			{
				return -1986670648;
			}
			break;
		case 1449149245:
			if (iParam2 == 1)
			{
				return 853339335;
			}
			else
			{
				return 476264216;
			}
			break;
		case 230694645:
			if (iParam2 == 1)
			{
				return 840856104;
			}
			else
			{
				return 161687222;
			}
			break;
		case -1998732171:
			if (iParam2 == 1)
			{
				return -679944843;
			}
			else
			{
				return -439780870;
			}
			break;
		case 732517695:
			if (iParam2 == 1)
			{
				return -507978028;
			}
			else
			{
				return -2138925351;
			}
			break;
		case 1053713682: /* GXTEntry: "Muskrat" */
			if (iParam2 == 1)
			{
				return 2067853128;
			}
			else
			{
				return -999327272;
			}
			break;
		case 562612880: /* GXTEntry: "Oriole" */
			if (iParam2 == 1)
			{
				return -720653445;
			}
			else
			{
				return 1465762044;
			}
			break;
		case 1488906430:
			if (iParam2 == 1)
			{
				return 1604791730;
			}
			else
			{
				return 382211197;
			}
			break;
		case -1002311676:
		case 313926162: /* GXTEntry: "Owl" */
			if (iParam2 == 1)
			{
				return 452746646;
			}
			else
			{
				return 1669886296;
			}
			break;
		case 1434063188:
			if (iParam2 == 1)
			{
				return -979220810;
			}
			else
			{
				return 443311725;
			}
			break;
		case 1296784312: /* GXTEntry: "Ox" */
			if (iParam2 == 1)
			{
				return 861034445;
			}
			else
			{
				return 391521677;
			}
			break;
		case -1192335484:
			if (iParam2 == 1)
			{
				return 1634138500;
			}
			else
			{
				return -1585573547;
			}
			break;
		case 184430925: /* GXTEntry: "Panther" */
			if (iParam2 == 1)
			{
				return -788140186;
			}
			else
			{
				return -1011875654;
			}
			break;
		case 1631667828:
			if (iParam2 == 1)
			{
				return -135187727;
			}
			else
			{
				return -662462270;
			}
			break;
		case 1623821606: /* GXTEntry: "Parrot" */
			if (iParam2 == 1)
			{
				return -1381490234;
			}
			else
			{
				return 401969671;
			}
			break;
		case 631108475:
			if (iParam2 == 1)
			{
				return -203045456;
			}
			else
			{
				return -1205233107;
			}
			break;
		case -679868805:
			if (iParam2 == 1)
			{
				return -1876437153;
			}
			else
			{
				return -570692178;
			}
			break;
		case -454952368: /* GXTEntry: "Pelican" */
			if (iParam2 == 1)
			{
				return -1239951197;
			}
			else
			{
				return -535907352;
			}
			break;
		case 512575690:
			if (iParam2 == 1)
			{
				return -2099611916;
			}
			else
			{
				return 1961649296;
			}
			break;
		case -1315516671: /* GXTEntry: "Pheasant" */
			if (iParam2 == 1)
			{
				return 1966613758;
			}
			else
			{
				return -1333865097;
			}
			break;
		case -2032722392:
			if (iParam2 == 1)
			{
				return 1914577480;
			}
			else
			{
				return 1328558441;
			}
			break;
		case 238849077: /* GXTEntry: "Pig" */
			if (iParam2 == 1)
			{
				return 1883720795;
			}
			else
			{
				return -1369680592;
			}
			break;
		case -812395905:
			if (iParam2 == 1)
			{
				return 387520892;
			}
			else
			{
				return -1903848769;
			}
			break;
		case 1252173965:
			if (iParam2 == 1)
			{
				return -323196703;
			}
			else
			{
				return -1097366344;
			}
			break;
		case 1948286917: /* GXTEntry: "Pigeon" */
			if (iParam2 == 1)
			{
				return -624807541;
			}
			else
			{
				return 1875235996;
			}
			break;
		case 886717998:
			if (iParam2 == 1)
			{
				return -615644963;
			}
			else
			{
				return -823139835;
			}
			break;
		case -905573570: /* GXTEntry: "Opossum" */
			if (iParam2 == 1)
			{
				return 1706508339;
			}
			else
			{
				return -138305935;
			}
			break;
		case -10873946: /* GXTEntry: "Pronghorn" */
			if (iParam2 == 1)
			{
				return -2103370865;
			}
			else
			{
				return 1443679495;
			}
			break;
		case -1850027464:
			if (iParam2 == 1)
			{
				return -633158514;
			}
			else
			{
				return 1018532190;
			}
			break;
		case -1559343651:
			if (iParam2 == 1)
			{
				return -918953360;
			}
			else
			{
				return -660080832;
			}
			break;
		case -908129790:
			if (iParam2 == 1)
			{
				return -1349222587;
			}
			else
			{
				return 1557946994;
			}
			break;
		case -756458312: /* GXTEntry: "Quail" */
			if (iParam2 == 1)
			{
				return 2023710928;
			}
			else
			{
				return 1977250026;
			}
			break;
		case -1523680261: /* GXTEntry: "Rabbit" */
			if (iParam2 == 1)
			{
				return 1566791262;
			}
			else
			{
				return -966619756;
			}
			break;
		case 915670869: /* GXTEntry: "Raccoon" */
			if (iParam2 == 1)
			{
				return -1644328077;
			}
			else
			{
				return -576645995;
			}
			break;
		case 1241049848:
			if (iParam2 == 1)
			{
				return 797754095;
			}
			else
			{
				return -2058983692;
			}
			break;
		case 1642062303:
			if (iParam2 == 1)
			{
				return -1659756524;
			}
			else
			{
				return 655563396;
			}
			break;
		case -868889795:
			if (iParam2 == 1)
			{
				return 631588480;
			}
			else
			{
				return 1964441958;
			}
			break;
		case -245437166:
			if (iParam2 == 1)
			{
				return -325679307;
			}
			else
			{
				return 1238941576;
			}
			break;
		case -587357648:
			if (iParam2 == 1)
			{
				return -526737116;
			}
			else
			{
				return -2067439289;
			}
			break;
		case 1161966186:
			if (iParam2 == 1)
			{
				return 2096415373;
			}
			else
			{
				return 389722302;
			}
			break;
		case -795241033:
			if (iParam2 == 1)
			{
				return 1154535482;
			}
			else
			{
				return 1974479168;
			}
			break;
		case -366264193:
			if (iParam2 == 1)
			{
				return 989198786;
			}
			else
			{
				return -355707420;
			}
			break;
		case -705312705: /* GXTEntry: "Rat" */
			if (iParam2 == 1)
			{
				return -1917262038;
			}
			else
			{
				return -887338500;
			}
			break;
		case -1592962144: /* GXTEntry: "Raven" */
			if (iParam2 == 1)
			{
				return -1387399089;
			}
			else
			{
				return 2126380116;
			}
			break;
		case 886059398: /* GXTEntry: "Bird" */
			if (iParam2 == 1)
			{
				return -93072263;
			}
			else
			{
				return -1354818991;
			}
			break;
		case 2018874380: /* GXTEntry: "Robin" */
			if (iParam2 == 1)
			{
				return 515905092;
			}
			else
			{
				return -2141961689;
			}
			break;
		case -1467886026:
		case -262717989: /* GXTEntry: "Rooster" */
		case 1100342668:
			if (iParam2 == 1)
			{
				return -1304404966;
			}
			else
			{
				return -338768354;
			}
			break;
		case -1181288733: /* GXTEntry: "Spoonbill" */
			if (iParam2 == 1)
			{
				return -1675867359;
			}
			else
			{
				return 922834860;
			}
			break;
		case 1398366530:
			if (iParam2 == 1)
			{
				return 2136163397;
			}
			else
			{
				return -2053685963;
			}
			break;
		case 1145409805:
			if (iParam2 == 1)
			{
				return -1506726199;
			}
			else
			{
				return -1570463396;
			}
			break;
		case 733223128:
			if (iParam2 == 1)
			{
				return 1487282350;
			}
			else
			{
				return 1316963652;
			}
			break;
		case -1427844561: /* GXTEntry: "Sheep" */
			if (iParam2 == 1)
			{
				return -411919020;
			}
			else
			{
				return -1656161562;
			}
			break;
		case -998653403: /* GXTEntry: "Skunk" */
			if (iParam2 == 1)
			{
				return -777288672;
			}
			else
			{
				return -1653716830;
			}
			break;
		case -547357240: /* GXTEntry: "Snake" */
		case 491620790:
		case 888613388:
			if (iParam2 == 1)
			{
				return 1341689645;
			}
			else
			{
				return -2059037310;
			}
			break;
		case -764925634: /* GXTEntry: "Snake" */
		case -518676029:
		case -21336386:
			if (iParam2 == 1)
			{
				return 2110273088;
			}
			else
			{
				return -1256102478;
			}
			break;
		case -946474842: /* GXTEntry: "Black-tailed Rattlesnake" */
			if (iParam2 == 1)
			{
				return -1288369533;
			}
			else
			{
				return -1810346437;
			}
			break;
		case -1363455176:
			if (iParam2 == 1)
			{
				return 559815433;
			}
			else
			{
				return 545602543;
			}
			break;
		case 234935858:
			if (iParam2 == 1)
			{
				return 977951227;
			}
			else
			{
				return 1629707044;
			}
			break;
		case 395345271: /* GXTEntry: "Songbird" */
			if (iParam2 == 1)
			{
				return 89462976;
			}
			else
			{
				return 1295654965;
			}
			break;
		case -1049737813:
			if (iParam2 == 1)
			{
				return -1909301662;
			}
			else
			{
				return 1069740553;
			}
			break;
		case -143561573: /* GXTEntry: "Sparrow" */
			if (iParam2 == 1)
			{
				return -1139750351;
			}
			else
			{
				return -449932244;
			}
			break;
		case -1099435331:
			if (iParam2 == 1)
			{
				return 184175481;
			}
			else
			{
				return 1863951382;
			}
			break;
		case -2058116954:
			if (iParam2 == 1)
			{
				return 1164479228;
			}
			else
			{
				return 465359925;
			}
			break;
		case -581264978: /* GXTEntry: "Squirrel" */
			if (iParam2 == 1)
			{
				return 935639802;
			}
			else
			{
				return 768799230;
			}
			break;
		case -1851619259:
			if (iParam2 == 1)
			{
				return 633525360;
			}
			else
			{
				return -312751742;
			}
			break;
		case -1055590463:
			if (iParam2 == 1)
			{
				return 746264043;
			}
			else
			{
				return 942504103;
			}
			break;
		case 725092441: /* GXTEntry: "Toad" */
		case 1202456973:
			if (iParam2 == 1)
			{
				return -1751536989;
			}
			else
			{
				return -334051008;
			}
			break;
		case -2087684184: /* GXTEntry: "Turkey" */
			if (iParam2 == 1)
			{
				return 1612083342;
			}
			else
			{
				return -1360421905;
			}
			break;
		case -1771094723:
			if (iParam2 == 1)
			{
				return 500704149;
			}
			else
			{
				return 1603220402;
			}
			break;
		case -117895552:
			if (iParam2 == 1)
			{
				return 311774207;
			}
			else
			{
				return 1761303658;
			}
			break;
		case 288450344:
			if (iParam2 == 1)
			{
				return 2390170;
			}
			else
			{
				return -1827589699;
			}
			break;
		case -1914955935:
			if (iParam2 == 1)
			{
				return -1372762125;
			}
			else
			{
				return -1302010630;
			}
			break;
		case 848629876: /* GXTEntry: "Vulture" */
			if (iParam2 == 1)
			{
				return -1819285714;
			}
			else
			{
				return -1310085735;
			}
			break;
		case -439919843: /* GXTEntry: "Wolf" */
			if (iParam2 == 1)
			{
				return 781175185;
			}
			else
			{
				return -1866392966;
			}
			break;
		case -377162693:
			if (iParam2 == 1)
			{
				return -436635592;
			}
			else
			{
				return 1489728350;
			}
			break;
		case 330512330:
			if (iParam2 == 1)
			{
				return -971017472;
			}
			else
			{
				return 760166198;
			}
			break;
		case 595771513:
			if (iParam2 == 1)
			{
				return -1925555109;
			}
			else
			{
				return -1518144336;
			}
			break;
		case -391309265:
			if (iParam2 == 1)
			{
				return -856016756;
			}
			else
			{
				return -463149499;
			}
			break;
		default:
			break;
	}
	return 0;
}

void func_81(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 1)
	{
		func_141(iParam0, 0);
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
		func_142(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_82(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_143(vParam0))
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
			if (func_144(vVar2, vParam0, 2f, 1))
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

bool func_83(int iParam0)
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

int func_84(int iParam0)
{
	return iParam0;
}

void func_85(int iParam0)
{
	if (!func_145(iParam0))
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

bool func_86(int iParam0)
{
	int iVar0;

	iVar0 = func_146(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_87(bool bParam0, bool bParam1, bool bParam2)
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

void func_88(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

int func_89(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_147(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_148(iParam0))
	{
		return 0;
	}
	if (func_149(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_150(iParam0, 1)) || func_151(32768))
	{
		if (!func_150(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_152())
	{
		return 0;
	}
	return 1;
}

void func_90(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

var func_91(var uParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, uParam1);
}

bool func_92(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_153(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
	}
	return (UNLOCK::_UNLOCK_IS_UNLOCKED(((*Global_1835011)[iParam0 /*74*/])->f_2) && !UNLOCK::_UNLOCK_IS_VISIBLE(((*Global_1835011)[iParam0 /*74*/])->f_2));
}

int func_93(int iParam0)
{
	if (func_64() != -1)
	{
		return 0;
	}
	if (!func_154(iParam0))
	{
		return 0;
	}
	return func_155(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

int func_94(int iParam0)
{
	if (func_64() != -1)
	{
		return 0;
	}
	if (!func_154(iParam0))
	{
		return 0;
	}
	return func_86(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

int func_95(int iParam0)
{
	if (func_64() != -1)
	{
		return 0;
	}
	if ((SCRIPTS::IS_THREAD_ACTIVE(((*Global_1347702)[iParam0 /*49*/])->f_42, false) && !func_86(((*Global_1347702)[iParam0 /*49*/])->f_15)) && !func_156(((*Global_1347702)[iParam0 /*49*/])->f_13, 4))
	{
		return 1;
	}
	return 0;
}

int func_96(var uParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;

	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0))
	{
		return 0;
	}
	vVar0 = { VOLUME::_0xF70F00013A62F866(uParam0) };
	vVar3 = { VOLUME::_0x3E2A25B2416DD67E(uParam0) };
	uVar6 = func_157(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return uVar6;
}

int func_97()
{
	return 3;
}

void func_98(var uParam0, int iParam1, int iParam2)
{
	(uParam0->f_31[uParam0->f_618 /*36*/])->f_4 = &uParam0->f_572[iParam1];
	(uParam0->f_31[uParam0->f_618 /*36*/])->f_5 = 0;
	(uParam0->f_31[uParam0->f_618 /*36*/])->f_17 = { func_158(iParam1, iParam2) };
	(uParam0->f_31[uParam0->f_618 /*36*/])->f_23 = func_159(iParam1, iParam2);
	(uParam0->f_31[uParam0->f_618 /*36*/])->f_26 = iParam1;
	(uParam0->f_31[uParam0->f_618 /*36*/])->f_27 = iParam2;
	if (&uParam0->f_580[iParam1] == 0)
	{
		(uParam0->f_31[uParam0->f_618 /*36*/])->f_8 = 0;
		StringCopy(&((uParam0->f_31[uParam0->f_618 /*36*/])->f_31), "ATZ_INS_EXC", 16);
		(uParam0->f_31[uParam0->f_618 /*36*/])->f_33 = { func_160() };
	}
	else if (&uParam0->f_580[iParam1] == 1)
	{
		(uParam0->f_31[uParam0->f_618 /*36*/])->f_8 = 1;
		StringCopy(&((uParam0->f_31[uParam0->f_618 /*36*/])->f_31), "ATZ_INS_FUR", 16);
		(uParam0->f_31[uParam0->f_618 /*36*/])->f_33 = { func_161() };
	}
	else if (&uParam0->f_580[iParam1] == 2)
	{
		(uParam0->f_31[uParam0->f_618 /*36*/])->f_8 = 2;
		StringCopy(&((uParam0->f_31[uParam0->f_618 /*36*/])->f_31), "ATZ_INS_KLR", 16);
		(uParam0->f_31[uParam0->f_618 /*36*/])->f_33 = { func_162() };
	}
	else if (&uParam0->f_580[iParam1] == 3)
	{
		(uParam0->f_31[uParam0->f_618 /*36*/])->f_8 = 3;
		StringCopy(&((uParam0->f_31[uParam0->f_618 /*36*/])->f_31), "ATZ_INS_BLD", 16);
		(uParam0->f_31[uParam0->f_618 /*36*/])->f_33 = { func_163() };
	}
	else if (&uParam0->f_580[iParam1] == 4)
	{
		(uParam0->f_31[uParam0->f_618 /*36*/])->f_8 = 4;
		StringCopy(&((uParam0->f_31[uParam0->f_618 /*36*/])->f_31), "ATZ_INS_BRK", 16);
		(uParam0->f_31[uParam0->f_618 /*36*/])->f_33 = { func_164() };
	}
	else if (&uParam0->f_580[iParam1] == 5)
	{
		(uParam0->f_31[uParam0->f_618 /*36*/])->f_8 = 5;
		StringCopy(&((uParam0->f_31[uParam0->f_618 /*36*/])->f_31), "ATZ_INS_TRB", 16);
		(uParam0->f_31[uParam0->f_618 /*36*/])->f_33 = { func_165() };
	}
	if (&uParam0->f_588[iParam1] == 0)
	{
		(uParam0->f_31[uParam0->f_618 /*36*/])->f_6 = 0;
	}
	else if (&uParam0->f_588[iParam1] == 1)
	{
		(uParam0->f_31[uParam0->f_618 /*36*/])->f_6 = 1;
	}
	else if (&uParam0->f_588[iParam1] == 2)
	{
		(uParam0->f_31[uParam0->f_618 /*36*/])->f_6 = 2;
	}
	else if (&uParam0->f_588[iParam1] == 3)
	{
		(uParam0->f_31[uParam0->f_618 /*36*/])->f_6 = 3;
	}
	else if (&uParam0->f_588[iParam1] == 4)
	{
		(uParam0->f_31[uParam0->f_618 /*36*/])->f_6 = 4;
	}
	else if (&uParam0->f_588[iParam1] == 5)
	{
		(uParam0->f_31[uParam0->f_618 /*36*/])->f_6 = 5;
	}
	if (iParam1 == 0)
	{
		(uParam0->f_31[uParam0->f_618 /*36*/])->f_13 = 1;
		(uParam0->f_31[uParam0->f_618 /*36*/])->f_15 = 1;
		func_166(&((uParam0->f_31[uParam0->f_618 /*36*/])->f_10), (uParam0->f_31[uParam0->f_618 /*36*/])->f_17, 0f, 0f, 0f, uParam0->f_7, uParam0->f_7, uParam0->f_7, "volHerbBlocking - Legendary Tracking Clue");
		if (VOLUME::_DOES_VOLUME_EXIST((uParam0->f_31[uParam0->f_618 /*36*/])->f_10))
		{
			func_167((uParam0->f_31[uParam0->f_618 /*36*/])->f_10, 1);
		}
	}
	if (iParam1 + 1 < func_97())
	{
		(uParam0->f_31[uParam0->f_618 /*36*/])->f_20 = { func_158(iParam1 + 1, iParam2) };
	}
	else
	{
		(uParam0->f_31[uParam0->f_618 /*36*/])->f_20 = { func_168(iParam2) };
	}
}

float func_99(int iParam0)
{
	return func_169(0, iParam0);
}

int func_100(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_170(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_101(var uParam0)
{
	PED::_SET_PED_SCALE(uParam0->f_12, uParam0->f_12.f_4);
	PED::_0xFCA8FB9E15FA80D3(uParam0->f_12, func_171());
	PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), uParam0->f_12, 0);
	FLOCK::_0x8B6F0F59B1B99801(uParam0->f_12, 2);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_12, 305, true);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_12, 306, true);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_12, 186, true);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_12, 465, true);
	_NAMESPACE49::_0xDC0A1F0ECEC9F0C0(uParam0->f_12, 1E+08f);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_12, true);
	ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uParam0->f_12, false);
	ENTITY::SET_ENTITY_VISIBLE(uParam0->f_12, false);
	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_12, true);
	PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_12, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uParam0->f_12, 34, true);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 112, 100f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 81, 0f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 82, 0f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 85, 0f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 83, 10f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 84, 0f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 89, 10f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 90, 0f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 105, 10f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 106, 0f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 78, 20f);
	uParam0->f_620 = 1;
	if (uParam0->f_1 == 2)
	{
		if (*uParam0 == 15)
		{
			FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 137, 0f);
			FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 138, 0f);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uParam0->f_12, 39, true);
			FLOCK::_0x706B434FEFAD6A24(1f);
			FLOCK::_0xA881F5C77A560906(3f);
		}
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 139, 0.75f);
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 88, 50f);
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 91, 40f);
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 10, 30f);
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 74, 1f);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uParam0->f_12, 32, true);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uParam0->f_12, 54, true);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uParam0->f_12, 80, true);
	}
	else if (uParam0->f_1 == 3)
	{
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 139, 0.75f);
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 88, 50f);
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 91, 40f);
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 10, 30f);
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 74, 1f);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uParam0->f_12, 16, false);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uParam0->f_12, 12, true);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uParam0->f_12, 32, true);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uParam0->f_12, 54, true);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uParam0->f_12, 80, true);
	}
	else if (uParam0->f_1 == 1)
	{
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_12, 74, 0f);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_678))
	{
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uParam0->f_12, uParam0->f_678, 0f);
	}
}

void func_102(int iParam0, bool bParam1, bool bParam2)
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

int func_103(var uParam0)
{
	return uParam0;
}

Vector3 func_104(vector3 vParam0, float fParam3)
{
	float fVar0;

	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

int func_105(var uParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_172(*uParam0, 0f, 0f, 0f))
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

var func_106(var uParam0)
{
	return uParam0;
}

float func_107(int iParam0, vector3 vParam1, bool bParam4)
{
	vector3 vVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	}
	if (bParam4)
	{
		return BUILTIN::VDIST2(vVar0, vParam1);
	}
	return func_173(vVar0, vParam1);
}

float func_108(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	}
	return func_173(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

int func_109()
{
	if (PED::_0xA911EE21EDF69DAF(Global_35) || func_174(Global_35))
	{
		return 1;
	}
	return 0;
}

int func_110(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_175(iVar0, 2))
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
				func_176(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

void func_111(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_83(iParam0))
	{
		return;
	}
	if (fParam1 <= 0f)
	{
		return;
	}
	iVar0 = func_84(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	((*Global_1945938)[iVar0 /*18*/])->f_9 = fParam1;
	HUD::_UIPROMPT_CONTEXT_SET_SIZE(((*Global_1945938)[iVar0 /*18*/])->f_3, fParam1);
}

int func_112(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_84(*uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
		{
			HUD::_UIPROMPT_SET_GROUP(((*Global_1945938)[iVar0 /*18*/])->f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1), 0);
			return 1;
		}
	}
	return 0;
}

bool func_113(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_83(iParam0))
	{
		return false;
	}
	iVar0 = func_84(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_114(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_83(iParam0))
	{
		return;
	}
	iVar0 = func_84(iParam0);
	if (bParam1)
	{
		func_177(iParam0, 4);
		func_178(iVar0, 1);
		func_179(iVar0, 1);
	}
	else
	{
		func_180(iParam0, 4);
		func_179(iVar0, 0);
	}
}

void func_115(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	iVar1 = func_30();
	iVar2 = 210;
	fVar3 = (uParam0->f_9 + 20f);
	if (uParam0->f_614 == 0)
	{
		uParam0->f_615 = uParam1;
		uParam0->f_616 = uParam1;
		uParam0->f_12.f_10 = { func_168(uParam0->f_615) };
		uParam0->f_12.f_16 = { func_168(uParam0->f_615) };
		uParam0->f_4 = VOLUME::_CREATE_VOLUME_CYLINDER(uParam0->f_12.f_10, 0f, 0f, 0f, 50f, 50f, 50f);
		uParam0->f_5 = func_181(uParam0->f_4, 0, 0, 0);
		func_182(uParam0);
		if (!MAP::DOES_BLIP_EXIST(uParam0->f_6))
		{
			uParam0->f_6 = MAP::_BLIP_ADD_FOR_RADIUS(-108658760, uParam0->f_627, uParam0->f_9);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_6, "ATZ_AREA_BLIP");
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_677))
		{
			AUDIO::SET_AMBIENT_ZONE_STATE(uParam0->f_677, true, true);
		}
		func_183(-1, 0, 0, 0, 0);
		func_184();
		func_185(iVar2, 0, 1);
		func_28(uParam0->f_3);
		uParam0->f_2 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_627, 0f, 0f, 0f, fVar3, fVar3, fVar3, "HuntingZoneRestriction");
		func_96(uParam0->f_3, "Hunting Zone Target", 0, 0, 0, 0, -1082130432 /* Float: -1f */);
		uParam0->f_622 = 1;
	}
	uParam0->f_614++;
	if (!uParam0->f_614 >= func_97())
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (uParam0->f_614 == (uParam0->f_31[iVar0 /*36*/])->f_26 && uParam0->f_615 == (uParam0->f_31[iVar0 /*36*/])->f_27)
			{
				func_166(&((uParam0->f_31[iVar0 /*36*/])->f_10), (uParam0->f_31[iVar0 /*36*/])->f_17, 0f, 0f, 0f, uParam0->f_7, uParam0->f_7, uParam0->f_7, "volHerbBlocking - Legendary Tracking Clue");
				if (VOLUME::_DOES_VOLUME_EXIST((uParam0->f_31[iVar0 /*36*/])->f_10))
				{
					func_167((uParam0->f_31[iVar0 /*36*/])->f_10, 1);
				}
				(uParam0->f_31[iVar0 /*36*/])->f_13 = 1;
				(uParam0->f_31[iVar0 /*36*/])->f_15 = 1;
			}
			else if ((uParam0->f_31[iVar0 /*36*/])->f_14 == 0)
			{
				(uParam0->f_31[iVar0 /*36*/])->f_13 = 0;
				(uParam0->f_31[iVar0 /*36*/])->f_15 = 0;
			}
			iVar0++;
		}
	}
	else
	{
		uParam0->f_621 = 1;
		if (!uParam0->f_624)
		{
			func_121(uParam0);
			uParam0->f_624 = 1;
		}
	}
}

int func_116(int iParam0, int iParam1)
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

void func_117(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		if (iParam0 == 0)
		{
			func_41(Global_35, "HUNTING_MEDIUM", joaat("speech_params_standard"), 0, 0, 0, 0, 1);
		}
		else if (iParam0 == 1)
		{
			func_41(Global_35, "HUNTING_NEAR", joaat("speech_params_standard"), 0, 0, 0, 0, 1);
		}
	}
	else if (iParam0 == 0)
	{
		func_41(Global_35, "HUNTING_FAR", joaat("speech_params_standard"), 0, 0, 0, 0, 1);
	}
	else if (iParam0 == 1)
	{
		func_41(Global_35, "HUNTING_MEDIUM", joaat("speech_params_standard"), 0, 0, 0, 0, 1);
	}
	else if (iParam0 == 2)
	{
		func_41(Global_35, "HUNTING_NEAR", joaat("speech_params_standard"), 0, 0, 0, 0, 1);
	}
}

int func_118(int iParam0, char* sParam1, int iParam2, float fParam3, int iParam4, int iParam5, float fParam6, int iParam7)
{
	int iVar0;

	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1))
	{
		return 0;
	}
	if (!TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sParam1, &iVar0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (iVar0 > 256)
	{
		return 0;
	}
	if (ENTITY::_0x29BA9F78321E5A6C(iParam0, sParam1, iParam2, fParam3, iParam4, iParam5, 0, 0, 0, fParam6, 0, iParam7))
	{
		return 1;
	}
	return 0;
}

void func_119(int iParam0)
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

int func_120(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 7:
		case 8:
		case 9:
		case 11:
		case 13:
		case 15:
			return 1;
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 10:
		case 12:
		case 14:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_121(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
	{
		func_186(uParam0->f_12, uParam0->f_12.f_10, func_99(uParam0->f_615), 2, 1073741824 /* Float: 2f */);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_12, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_12, true);
		PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_12, true);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uParam0->f_12, true);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_12, false);
		TASK::TASK_WANDER_IN_AREA(uParam0->f_12, uParam0->f_12.f_10, 10f, 1.5f, 3f, 1);
	}
}

void func_122(var uParam0)
{
	int iVar0;

	iVar0 = func_188(0, func_187(), uParam0->f_616);
	uParam0->f_616 = iVar0;
	uParam0->f_12.f_16 = { func_168(iVar0) };
}

bool func_123(int iParam0, int iParam1)
{
	if (!func_65(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15614[iParam0] && iParam1) != 0;
}

int func_124()
{
	return Global_1894899->f_2;
}

bool func_125(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_126(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/] && iParam1) != 0;
}

int func_127(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

struct<10> func_128(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<10> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	if (iParam0 != 0 && iParam0 != -1591664384)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0)
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
	if (iParam6 != -1)
	{
		Var0.f_6 = iParam6;
	}
	if (iParam7 != 0)
	{
		Var0.f_8 = iParam7;
	}
	if (iParam8 != 0)
	{
		Var0.f_7 = iParam8;
	}
	return Var0;
}

int func_129(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return 0;
	}
	if (!func_127(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		if (!bParam5)
		{
		}
		return 0;
	}
	if (!bParam5)
	{
	}
	*iParam3 = Var0.f_3;
	iVar47 = 0;
	while (iVar47 < Var0.f_3)
	{
		if (!bParam5)
		{
		}
		*((*uParam2)[iVar47 /*2*/]) = { *(Var0.f_4[iVar47 /*2*/]) };
		iVar47++;
	}
	if (bParam4)
	{
		func_189(iParam0, iParam1, uParam2, *iParam3);
	}
	return 1;
}

struct<4> func_130(bool bParam0)
{
	return func_132(joaat("character"), func_190(), -1591664384, bParam0);
}

int func_131(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1084182731;
		case 1:
			return -1360128126;
		case 2:
			return 1426626782;
		case 3:
			return 1227915917;
		default:
			break;
	}
	return 1084182731;
}

struct<4> func_132(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_127(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_133(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_133(bool bParam0)
{
	if (func_64() == -1)
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

int func_134(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (iParam0 != 0)
	{
		iVar3 = func_191(iParam0);
		if (iVar3 != 0)
		{
			iVar4 = func_192(iParam0);
			iVar0 = 0;
			while (iVar0 < iVar4)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar3, iVar0, &iVar1))
				{
					iVar2 = iVar1;
					if (iVar2 == iParam1)
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

int func_135(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_127(iParam0, 0))
	{
		return 0;
	}
	if (!func_193(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_133(bParam3), iParam0);
}

int func_136(int iParam0, bool bParam1)
{
	if (func_194(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_133(bParam1), iParam0, 0);
}

int func_137(int iParam0)
{
	if (!func_127(iParam0, 0))
	{
	}
	if (func_195(iParam0, 173360570))
	{
		return 1;
	}
	return 0;
}

int func_138(int iParam0)
{
	if (!func_127(iParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0x4AEF1FB5B9011D75(iParam0);
}

int func_139(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_127(iParam0, 0))
	{
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_196(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_193(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_133(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_140(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_141(int iParam0, int iParam1)
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);
	if (iParam1 == 1)
	{
		func_197(1);
	}
}

void func_142(int iParam0)
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
			func_141(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_197(1);
	}
}

int func_143(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_144(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

bool func_145(int iParam0)
{
	return func_175(iParam0, 2);
}

int func_146(int iParam0)
{
	if (!func_198(iParam0))
	{
		return -1;
	}
	return func_199(iParam0);
}

bool func_147(int iParam0, int iParam1)
{
	if (func_64() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_148(int iParam0)
{
	if (func_64() != -1)
	{
		if (func_150(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_150(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_149(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_150(iParam0, 65536) && !func_150(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_150(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_150(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_150(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_151(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_152()
{
	return Global_1905944->f_5694;
}

int func_153(int iParam0, bool bParam1)
{
	switch (func_146(iParam0))
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

bool func_154(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

int func_155(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return 0;
		}
		iVar0 = (Global_12105[iParam0 /*7*/])->f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return 0;
		}
		iVar0 = func_199(iParam0);
	}
	if (iVar0 == 1)
	{
		return 1;
	}
	if (iVar0 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_156(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_157(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, float fParam9)
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
	if (func_143(vParam0))
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
		if (func_200(vParam0))
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
	if (fParam9 >= 0f)
	{
		VOLUME::_0xD460135C98940274(iVar0, fParam9);
	}
	func_201(iVar0, bParam8);
	return iVar0;
}

Vector3 func_158(int iParam0, int iParam1)
{
	vector3 vVar0;

	switch (iParam0)
	{
		case 0:
			vVar0 = { func_202(1, iParam1) };
			break;
		case 1:
			vVar0 = { func_202(2, iParam1) };
			break;
		case 2:
			vVar0 = { func_202(3, iParam1) };
			break;
	}
	return vVar0;
}

var func_159(int iParam0, int iParam1)
{
	var uVar0;

	switch (iParam0)
	{
		case 0:
			uVar0 = func_169(1, iParam1);
			break;
		case 1:
			uVar0 = func_169(2, iParam1);
			break;
		case 2:
			uVar0 = func_169(3, iParam1);
			break;
	}
	return uVar0;
}

Vector3 func_160()
{
	return func_203("ATZ_INS_EXC_EL");
}

Vector3 func_161()
{
	return func_203("ATZ_INS_FUR_EL");
}

Vector3 func_162()
{
	return func_203("ATZ_INS_KLR");
}

Vector3 func_163()
{
	return func_203("ATZ_INS_BLD");
}

Vector3 func_164()
{
	return func_203("ATZ_INS_BRK");
}

Vector3 func_165()
{
	return func_203("ATZ_INS_TRB_EL");
}

void func_166(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_167(int iParam0, int iParam1)
{
	if (func_204(iParam0))
	{
		return;
	}
	if (func_205(iParam0) == iParam1)
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

Vector3 func_168(int iParam0)
{
	return func_202(0, iParam0);
}

float func_169(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 59.741f;
				case 1:
					return 306.5778f;
				case 2:
					return 16.9446f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -90.4649f;
				case 1:
					return -254.88f;
				case 2:
					return 222.3636f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -90.59f;
				case 1:
					return -178.881f;
				case 2:
					return -82.701f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 225.7847f;
				case 1:
					return 225.7847f;
				case 2:
					return 225.7847f;
			}
			break;
	}
	return 0f;
}

void func_170(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_206(iParam1))
		{
			func_207(iParam0, 41788943);
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
			func_208(iParam0, 0, 1);
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
			func_209(iParam0, 0);
			bVar0 = true;
		}
		func_210(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

int func_171()
{
	return -1040890554 /* GXTEntry: "Legendary Elk" */;
}

bool func_172(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

float func_173(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

var func_174(int iParam0)
{
	return (func_211(iParam0, 4) || func_211(iParam0, 5));
}

bool func_175(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

void func_176(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, iParam16, iParam15);
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
	func_178(iParam0, 1);
	func_179(iParam0, 1);
	func_180(iParam0, 128);
}

void func_177(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 - (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1));
}

void func_178(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_175(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
		}
	}
}

void func_179(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
	}
}

void func_180(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

var func_181(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	var uVar0;

	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0))
	{
		return uVar0;
	}
	func_212(uParam0, bParam2);
	POPULATION::_0x18262CAFEBB5FBE1(uParam0, iParam3, 0, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(uParam0, iParam3, 0, 0, -1, -1, 2);
	uVar0 = PED::_0x4C39C95AE5DB1329(uParam0, bParam2, 15);
	return uVar0;
}

void func_182(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < func_30())
	{
		if ((uParam0->f_31[iVar0 /*36*/])->f_26 == 0)
		{
			if (VOLUME::_DOES_VOLUME_EXIST((uParam0->f_31[iVar0 /*36*/])->f_10))
			{
				func_119((uParam0->f_31[iVar0 /*36*/])->f_10);
			}
			if (MAP::DOES_BLIP_EXIST(&(uParam0->f_31[iVar0 /*36*/])))
			{
				MAP::REMOVE_BLIP(uParam0->f_31[iVar0 /*36*/]);
			}
		}
		iVar0++;
	}
}

void func_183(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_213() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0 /*9*/];
		if (((func_214(iVar1) && !func_215(iVar1, iParam2)) && (!bParam3 || !func_216(iVar1))) && (!bParam4 || !func_217(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_218(iVar0);
			}
		}
		iVar0++;
	}
}

void func_184()
{
	if (!func_214(&Global_1327479))
	{
		return;
	}
	if (SCRIPTS::DOES_SCRIPT_EXIST(&(((*Global_1310750)[&Global_1327479 /*111*/])->f_40)))
	{
		if (SCRIPTS::HAS_SCRIPT_LOADED(&(((*Global_1310750)[&Global_1327479 /*111*/])->f_40)))
		{
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(((*Global_1310750)[&Global_1327479 /*111*/])->f_40));
		}
	}
	func_219(0);
	Global_1327479 = -1;
	Global_1310750->f_16075 = 0;
	Global_1310750->f_16076 = 0;
	Global_1310750->f_16103 = { 0f, 0f, 0f };
}

void func_185(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = MISC::GET_GAME_TIMER();
	func_220(iParam0, iParam1, bParam2);
}

void func_186(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
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
		bVar3 = PED::_0xD5FE956C70FF370B(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_0x221F4D9912B7FE86(iVar1, 1);
		}
	}
	if (iParam0 == func_103(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_221(iParam0))
	{
		if (func_222(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (func_223(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_186(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_186(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_223(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 0, 1);
		}
	}
	if (func_223(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, 1, func_223(iParam5, 32), 1);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, 1, func_223(iParam5, 32), 1);
			ENTITY::_0x9587913B9E772D29(iParam0, 0);
		}
	}
	else if (func_223(iParam5, 129))
	{
		if (func_223(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, func_223(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, 1, func_223(iParam5, 32), 1);
	}
	if (bVar4)
	{
		if (!func_223(iParam5, 16))
		{
			PED::_0x7DE9692C6F64CFE8(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, 0);
		}
		if (func_221(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!func_223(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, 1, 0);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !func_223(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

int func_187()
{
	return 3;
}

int func_188(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iParam0, iParam1);
	if (iVar0 == iParam2)
	{
		if (func_224())
		{
			iVar0 = (iVar0 - 1);
		}
		else
		{
			iVar0++;
		}
		if (iVar0 < iParam0)
		{
			iVar0 = iParam0;
		}
		else if (iVar0 >= iParam1)
		{
			iVar0 = (iParam1 - 1);
		}
		if (iVar0 == iParam0 && iParam0 == iParam2)
		{
			iVar0++;
		}
		else if (iVar0 == (iParam1 - 1) && (iParam1 - 1) == iParam2)
		{
			iVar0 = (iVar0 - 1);
		}
		if (iVar0 < iParam0 || iVar0 >= iParam1)
		{
			iVar0 = func_55(func_224(), iParam0, (iParam1 - 1));
		}
	}
	return iVar0;
}

void func_189(int iParam0, int iParam1, var uParam2, int iParam3)
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
	struct<2> Var21[15];

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
		Var21[iVar0 /*2*/] = uParam2[iVar0 /*2*/];
		(Var21[iVar0 /*2*/])->f_1 = 1f;
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
							if (&Var21[iVar0 /*2*/] == Var19)
							{
								(Var21[iVar0 /*2*/])->f_1 = ((Var21[iVar0 /*2*/])->f_1 - Var19.f_1);
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
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if ((Var21[iVar0 /*2*/])->f_1 != 1f)
		{
			((*uParam2)[iVar0 /*2*/])->f_1 = BUILTIN::FLOOR((IntToFloat(((*uParam2)[iVar0 /*2*/])->f_1) * ((Var21[iVar0 /*2*/])->f_1 / 1f)));
		}
		iVar0++;
	}
}

struct<4> func_190()
{
	struct<4> Var0;

	return Var0;
}

int func_191(int iParam0)
{
	struct<2> Var0;

	if (!func_127(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_192(int iParam0)
{
	int iVar0;

	if (!func_127(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_191(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar0);
}

int func_193(bool bParam0)
{
	if (func_64() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_133(bParam0));
}

bool func_194(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

int func_195(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
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

int func_196(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;

	func_225(&iParam0);
	if (!func_127(iParam0, 0))
	{
		return 0;
	}
	if (!func_193(0))
	{
		bParam3 = true;
	}
	if (func_226(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
		{
			Var0 = { func_227(0) };
			Var4.f_9 = -1591664384;
			if (!func_228(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
			{
				return 0;
			}
			else if (func_229(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
			{
				return 0;
			}
			if (func_230(iParam0, 1))
			{
				if (!func_228(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					return 0;
				}
				else if (func_229(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
				{
					return 0;
				}
			}
		}
		else if (!func_231(iParam0, &uVar26, 0))
		{
			return 0;
		}
		return 1;
	}
	iVar27 = func_135(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_232(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(func_133(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return 1;
	}
	return 0;
}

void func_197(bool bParam0)
{
	if (bParam0)
	{
		func_233(&(Global_40.f_12018.f_42), 1);
	}
	else
	{
		func_234(&(Global_40.f_12018.f_42), 1);
	}
}

bool func_198(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_199(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_235(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

bool func_200(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

int func_201(int iParam0, bool bParam1)
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

Vector3 func_202(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 723.7944f, 1737.194f, 223.8191f;
				case 1:
					return 769.059f, 1650.386f, 218.4761f;
				case 2:
					return 673.3187f, 1687.34f, 200.9561f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 750.8877f, 1620.882f, 209.4426f;
				case 1:
					return 685.8033f, 1660.674f, 204.4739f;
				case 2:
					return 732.7f, 1724.175f, 224.0503f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 754.349f, 1644.338f, 214.33f;
				case 1:
					return 714.128f, 1680.967f, 214.6f;
				case 2:
					return 745.912f, 1681.867f, 222.813f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 728.8153f, 1671.792f, 217.1227f;
				case 1:
					return 753.9499f, 1699.531f, 228.8089f;
				case 2:
					return 712.7245f, 1653.926f, 212.1277f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_203(char* sParam0)
{
	vector3 vVar0[24];

	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

int func_204(int iParam0)
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

int func_205(int iParam0)
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

int func_206(int iParam0)
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

void func_207(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_236(iParam0, iParam1))
		{
			if (func_237(iParam0, iParam1))
			{
				if (func_238(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_239(iParam0);
				}
			}
			else
			{
				PED::_0x1902C4CFCC5BE57C(iParam0, iParam1);
				PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
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

void func_208(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	PED::_0xD710A5007C2AC539(iParam0, -1725579161, 1);
	if (bParam2)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

void func_209(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	PED::_0x1902C4CFCC5BE57C(iParam0, 1268180497);
	if (bParam1)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

void func_210(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		PED::_0x5653AB26C82938CF(iParam0, 41611, 0f);
	}
	else
	{
		PED::_0x5653AB26C82938CF(iParam0, 41611, 1f);
	}
}

int func_211(int iParam0, int iParam1)
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

void func_212(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(uParam0, iVar0);
}

int func_213()
{
	return Global_1310750->f_16037;
}

bool func_214(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

bool func_215(int iParam0, int iParam1)
{
	if (!func_214(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

int func_216(int iParam0)
{
	if (!func_214(iParam0))
	{
		return 0;
	}
	if (func_240(64) && func_241(iParam0))
	{
		return 1;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_46;
}

int func_217(int iParam0)
{
	if (!func_214(iParam0))
	{
		return 0;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_47;
}

void func_218(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_214(&(Global_1310750->f_13321[iParam0 /*9*/])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID((Global_1310750->f_13321[iParam0 /*9*/])->f_5, 523);
	((*Global_1310750)[iVar0 /*111*/])->f_48 = 0;
	func_242(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_219(int iParam0)
{
	Global_1327479->f_3 = iParam0;
}

void func_220(int iParam0, int iParam1, bool bParam2)
{
	if (Global_1327479->f_9)
	{
		return;
	}
	Global_1327479->f_4 = (Global_1327479->f_4 + iParam0 * 1000);
	if (bParam2)
	{
		Global_1310750->f_16106 = { Global_36 };
	}
	if (iParam1 == 0)
	{
		if (iParam0 > 0)
		{
			Global_1327479->f_5 = (MISC::GET_GAME_TIMER() + ((Global_1327479->f_4 - MISC::GET_GAME_TIMER()) / 2));
		}
		else
		{
			Global_1327479->f_5 = (Global_1327479->f_5 + iParam0 * 500);
		}
	}
	else
	{
		Global_1327479->f_5 = (MISC::GET_GAME_TIMER() + iParam1 * 1000);
	}
}

bool func_221(int iParam0)
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

int func_222(int iParam0)
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

bool func_223(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_224()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return 1;
	}
	return 0;
}

int func_225(int iParam0)
{
	if (!func_127(*iParam0, 0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case -1073808995: /* GXTEntry: "Live Crickets" */
			*iParam0 = -1753819339; /* GXTEntry: "Cricket Bait" */
			return 1;
		case 1903483453: /* GXTEntry: "Live Worms" */
			*iParam0 = -1527293029; /* GXTEntry: "Worm Bait" */
			return 1;
		case -541584777: /* GXTEntry: "Opened Cocaine Gum" */
			*iParam0 = 206762213; /* GXTEntry: "Cocaine Gum" */
			return 1;
		case 998010398: /* GXTEntry: "Opened Chewing Tobacco" */
			*iParam0 = -324053813; /* GXTEntry: "Chewing Tobacco" */
			return 1;
		case -1424823393: /* GXTEntry: "Opened Cigarettes" */
			*iParam0 = -885810591; /* GXTEntry: "Premium Cigarettes" */
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_226(int iParam0)
{
	return func_243(iParam0) == joaat("weapon");
}

struct<4> func_227(bool bParam0)
{
	int iVar0;

	iVar0 = func_133(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224214))
		{
			*Global_1224214 = { func_132(923904168, func_130(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224222))
		{
			*Global_1224222 = { func_132(923904168, func_130(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_132(923904168, func_130(bParam0), -740156546, 0);
}

bool func_228(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_232(iParam0, *uParam1, iParam2, bParam3) > 0;
}

int func_229(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_244(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

int func_230(int iParam0, bool bParam1)
{
	if (func_191(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_136(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0) > 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_231(int iParam0, var uParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	bool bVar28;
	int iVar29;

	if (!func_127(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_245(iParam0, 0, 1) };
	iVar5 = 1728382685; /* GXTEntry: "Right" */
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_246((375 + iVar29), 1);
		if (func_228(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_229(iParam0, &Var6, iVar5);
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

int func_232(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_127(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_132(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_133(bParam6), &Var0, 0);
	return uVar4;
}

void func_233(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_234(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_235(int iParam0)
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

bool func_236(int iParam0, int iParam1)
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

int func_237(int iParam0, int iParam1)
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

bool func_238(int iParam0, int iParam1)
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
	if (!func_236(iParam0, iVar0))
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

void func_239(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

bool func_240(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_241(int iParam0)
{
	return func_215(iParam0, Global_1310750->f_16072 | 64);
}

void func_242(int iParam0)
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

int func_243(int iParam0)
{
	vector3 vVar0;

	if (!func_127(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_244(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_133(0);
	*uParam1 = { func_132(iParam0, func_227(0), iParam3, 0) };
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

struct<5> func_245(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_130(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_243(iParam0))
	{
		case joaat("clothing"):
			if (!INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0 = { func_132(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("weapon"):
			Var0 = { func_227(bParam1) };
			if (bParam2 && func_230(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_228(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_228(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_229(iParam0, &Var5, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_247(bParam1) };
			switch (func_191(iParam0))
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
			if (func_248(iParam0, -1823706425))
			{
				Var0 = { func_132(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_248(iParam0, -1483207246))
			{
				Var0 = { func_132(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
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
				Var27.f_9 = -1591664384;
				if (!func_249(Var0, &Var27, bParam1, 0))
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
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("character"));
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_246(int iParam0, int iParam1)
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

struct<4> func_247(bool bParam0)
{
	int iVar0;

	iVar0 = func_133(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224218))
		{
			*Global_1224218 = { func_132(271701509, func_130(bParam0), 12999093, 0) };
		}
		return *Global_1224218;
	}
	return func_132(271701509, func_130(bParam0), 12999093, 0);
}

int func_248(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_191(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &uVar0))
		{
			if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, uVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

int func_249(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_133(bParam5), &uParam0, uParam4, !bParam6))
	{
		return 0;
	}
	return 1;
}

